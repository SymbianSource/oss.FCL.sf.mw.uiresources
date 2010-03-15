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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00041e52 };

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
0x604f,	// (0x00047ea1) Screen

0x605b,	// (0x00047ead) application_window_ParamLimits

0x605b,	// (0x00047ead) application_window

0xd6d4,	// (0x0004f526) screen_g1

0x60b7,	// (0x00047f09) area_bottom_pane_ParamLimits

0x60b7,	// (0x00047f09) area_bottom_pane

0x6177,	// (0x00047fc9) area_top_pane_ParamLimits

0x6177,	// (0x00047fc9) area_top_pane

0x620b,	// (0x0004805d) main_pane_ParamLimits

0x620b,	// (0x0004805d) main_pane

0xd6de,	// (0x0004f530) misc_graphics

0x900e,	// (0x0004ae60) battery_pane_ParamLimits

0x900e,	// (0x0004ae60) battery_pane

0x9ccc,	// (0x0004bb1e) bg_status_flat_pane_g8

0x9cd4,	// (0x0004bb26) bg_status_flat_pane_g9

0x90d6,	// (0x0004af28) context_pane_ParamLimits

0x90d6,	// (0x0004af28) context_pane

0x91fa,	// (0x0004b04c) navi_pane_ParamLimits

0x91fa,	// (0x0004b04c) navi_pane

0x928a,	// (0x0004b0dc) signal_pane_ParamLimits

0x928a,	// (0x0004b0dc) signal_pane

0x0008,

0xf884,	// (0x000516d6) bg_status_flat_pane_g

0x92f7,	// (0x0004b149) status_pane_g1_ParamLimits

0x92f7,	// (0x0004b149) status_pane_g1

0x930b,	// (0x0004b15d) status_pane_g2_ParamLimits

0x930b,	// (0x0004b15d) status_pane_g2

0x9317,	// (0x0004b169) status_pane_g3_ParamLimits

0x9317,	// (0x0004b169) status_pane_g3

0x0004,

0xf7ab,	// (0x000515fd) status_pane_g_ParamLimits

0xf7ab,	// (0x000515fd) status_pane_g

0x934b,	// (0x0004b19d) title_pane_ParamLimits

0x934b,	// (0x0004b19d) title_pane

0x9388,	// (0x0004b1da) uni_indicator_pane_ParamLimits

0x9388,	// (0x0004b1da) uni_indicator_pane

0x88ff,	// (0x0004a751) bg_list_pane_ParamLimits

0x88ff,	// (0x0004a751) bg_list_pane

0x891f,	// (0x0004a771) find_pane

0x8927,	// (0x0004a779) listscroll_app_pane_ParamLimits

0x8927,	// (0x0004a779) listscroll_app_pane

0x8933,	// (0x0004a785) listscroll_form_pane

0x893b,	// (0x0004a78d) listscroll_gen_pane_ParamLimits

0x893b,	// (0x0004a78d) listscroll_gen_pane

0x8933,	// (0x0004a785) listscroll_set_pane

0x6917,	// (0x00048769) main_idle_act_pane

0x7073,	// (0x00048ec5) main_idle_trad_pane

0x7073,	// (0x00048ec5) main_list_empty_pane

0x8961,	// (0x0004a7b3) main_midp_pane

0x896d,	// (0x0004a7bf) main_pane_g1_ParamLimits

0x896d,	// (0x0004a7bf) main_pane_g1

0x897b,	// (0x0004a7cd) popup_ai_message_window_ParamLimits

0x897b,	// (0x0004a7cd) popup_ai_message_window

0x8a2f,	// (0x0004a881) popup_fep_china_uni_window_ParamLimits

0x8a2f,	// (0x0004a881) popup_fep_china_uni_window

0x8a8f,	// (0x0004a8e1) popup_fep_japan_candidate_window_ParamLimits

0x8a8f,	// (0x0004a8e1) popup_fep_japan_candidate_window

0x8ab9,	// (0x0004a90b) popup_fep_japan_predictive_window_ParamLimits

0x8ab9,	// (0x0004a90b) popup_fep_japan_predictive_window

0x8aef,	// (0x0004a941) popup_find_window

0x8afc,	// (0x0004a94e) popup_grid_graphic_window_ParamLimits

0x8afc,	// (0x0004a94e) popup_grid_graphic_window

0x8b2a,	// (0x0004a97c) popup_large_graphic_colour_window

0x8b50,	// (0x0004a9a2) popup_menu_window_ParamLimits

0x8b50,	// (0x0004a9a2) popup_menu_window

0x8d1a,	// (0x0004ab6c) popup_note_image_window

0x8d04,	// (0x0004ab56) popup_note_wait_window_ParamLimits

0x8d04,	// (0x0004ab56) popup_note_wait_window

0x8d04,	// (0x0004ab56) popup_note_window_ParamLimits

0x8d04,	// (0x0004ab56) popup_note_window

0x8d80,	// (0x0004abd2) popup_query_code_window_ParamLimits

0x8d80,	// (0x0004abd2) popup_query_code_window

0x8d96,	// (0x0004abe8) popup_query_data_code_window_ParamLimits

0x8d96,	// (0x0004abe8) popup_query_data_code_window

0x8db9,	// (0x0004ac0b) popup_query_data_window_ParamLimits

0x8db9,	// (0x0004ac0b) popup_query_data_window

0x8ddb,	// (0x0004ac2d) popup_query_sat_info_window_ParamLimits

0x8ddb,	// (0x0004ac2d) popup_query_sat_info_window

0x8e1a,	// (0x0004ac6c) popup_snote_single_graphic_window_ParamLimits

0x8e1a,	// (0x0004ac6c) popup_snote_single_graphic_window

0x8e1a,	// (0x0004ac6c) popup_snote_single_text_window_ParamLimits

0x8e1a,	// (0x0004ac6c) popup_snote_single_text_window

0x8e31,	// (0x0004ac83) popup_sub_window_general

0x8f77,	// (0x0004adc9) popup_window_general_ParamLimits

0x8f77,	// (0x0004adc9) popup_window_general

0x8f90,	// (0x0004ade2) power_save_pane

0x72fe,	// (0x00049150) control_pane_g1_ParamLimits

0x72fe,	// (0x00049150) control_pane_g1

0x7327,	// (0x00049179) control_pane_g2_ParamLimits

0x7327,	// (0x00049179) control_pane_g2

0x88b0,	// (0x0004a702) control_pane_g3_ParamLimits

0x88b0,	// (0x0004a702) control_pane_g3

0x0007,

0xf793,	// (0x000515e5) control_pane_g_ParamLimits

0xf793,	// (0x000515e5) control_pane_g

0x736f,	// (0x000491c1) control_pane_t1_ParamLimits

0x736f,	// (0x000491c1) control_pane_t1

0x73bb,	// (0x0004920d) control_pane_t2_ParamLimits

0x73bb,	// (0x0004920d) control_pane_t2

0x0002,

0xf7a4,	// (0x000515f6) control_pane_t_ParamLimits

0xf7a4,	// (0x000515f6) control_pane_t

0x87d1,	// (0x0004a623) navi_navi_volume_pane_cp1

0x87da,	// (0x0004a62c) status_small_icon_pane

0x87e2,	// (0x0004a634) status_small_pane_g1_ParamLimits

0x87e2,	// (0x0004a634) status_small_pane_g1

0x8816,	// (0x0004a668) status_small_pane_g2_ParamLimits

0x8816,	// (0x0004a668) status_small_pane_g2

0x8822,	// (0x0004a674) status_small_pane_g3_ParamLimits

0x8822,	// (0x0004a674) status_small_pane_g3

0x882e,	// (0x0004a680) status_small_pane_g4_ParamLimits

0x882e,	// (0x0004a680) status_small_pane_g4

0x883a,	// (0x0004a68c) status_small_pane_g5_ParamLimits

0x883a,	// (0x0004a68c) status_small_pane_g5

0x8849,	// (0x0004a69b) status_small_pane_g6_ParamLimits

0x8849,	// (0x0004a69b) status_small_pane_g6

0x0007,

0xf782,	// (0x000515d4) status_small_pane_g_ParamLimits

0xf782,	// (0x000515d4) status_small_pane_g

0x8879,	// (0x0004a6cb) status_small_pane_t1

0x889c,	// (0x0004a6ee) status_small_wait_pane_ParamLimits

0x889c,	// (0x0004a6ee) status_small_wait_pane

0x6c8c,	// (0x00048ade) aid_levels_signal_ParamLimits

0x6c8c,	// (0x00048ade) aid_levels_signal

0x6c9e,	// (0x00048af0) signal_pane_g1_ParamLimits

0x6c9e,	// (0x00048af0) signal_pane_g1

0x6cb3,	// (0x00048b05) signal_pane_g2_ParamLimits

0x6cb3,	// (0x00048b05) signal_pane_g2

0x0003,

0xf713,	// (0x00051565) signal_pane_g_ParamLimits

0xf713,	// (0x00051565) signal_pane_g

0x423f,	// (0x00046091) context_pane_g1

0x6462,	// (0x000482b4) title_pane_g1

0x6480,	// (0x000482d2) title_pane_t1

0xd700,	// (0x0004f552) title_pane_t2

0xd726,	// (0x0004f578) title_pane_t3

0x0002,

0xf55d,	// (0x000513af) title_pane_t

0x93a0,	// (0x0004b1f2) aid_levels_battery_ParamLimits

0x93a0,	// (0x0004b1f2) aid_levels_battery

0x93b4,	// (0x0004b206) battery_pane_g1_ParamLimits

0x93b4,	// (0x0004b206) battery_pane_g1

0x93ca,	// (0x0004b21c) battery_pane_g2_ParamLimits

0x93ca,	// (0x0004b21c) battery_pane_g2

0x0001,

0xf7b6,	// (0x00051608) battery_pane_g_ParamLimits

0xf7b6,	// (0x00051608) battery_pane_g

0xa616,	// (0x0004c468) uni_indicator_pane_g1

0xa62b,	// (0x0004c47d) uni_indicator_pane_g2

0xa641,	// (0x0004c493) uni_indicator_pane_g3

0x0005,

0xf92c,	// (0x0005177e) uni_indicator_pane_g

0x4690,	// (0x000464e2) navi_icon_pane_ParamLimits

0x4690,	// (0x000464e2) navi_icon_pane

0x4614,	// (0x00046466) navi_midp_pane

0x46ac,	// (0x000464fe) navi_navi_pane

0x46b6,	// (0x00046508) navi_text_pane_ParamLimits

0x46b6,	// (0x00046508) navi_text_pane

0xd6d4,	// (0x0004f526) status_small_wait_pane_g1

0x0842,	// (0x00042694) status_small_wait_pane_g2

0x0001,

0xf927,	// (0x00051779) status_small_wait_pane_g

0xa329,	// (0x0004c17b) navi_navi_icon_text_pane

0xa331,	// (0x0004c183) navi_navi_pane_g1_ParamLimits

0xa331,	// (0x0004c183) navi_navi_pane_g1

0xa343,	// (0x0004c195) navi_navi_pane_g2_ParamLimits

0xa343,	// (0x0004c195) navi_navi_pane_g2

0x0001,

0xf8f5,	// (0x00051747) navi_navi_pane_g_ParamLimits

0xf8f5,	// (0x00051747) navi_navi_pane_g

0xa355,	// (0x0004c1a7) navi_navi_tabs_pane

0xa35e,	// (0x0004c1b0) navi_navi_text_pane

0xa329,	// (0x0004c17b) navi_navi_volume_pane

0xa305,	// (0x0004c157) navi_text_pane_t1

0xa2f9,	// (0x0004c14b) navi_icon_pane_g1

0xa24c,	// (0x0004c09e) navi_navi_text_pane_t1

0x76fc,	// (0x0004954e) navi_navi_volume_pane_g1

0x7704,	// (0x00049556) volume_small_pane

0xa1b2,	// (0x0004c004) navi_navi_icon_text_pane_g1

0xa1ba,	// (0x0004c00c) navi_navi_icon_text_pane_t1

0x46ac,	// (0x000464fe) navi_tabs_2_long_pane

0x46ac,	// (0x000464fe) navi_tabs_2_pane

0x46ac,	// (0x000464fe) navi_tabs_3_long_pane

0x46ac,	// (0x000464fe) navi_tabs_3_pane

0x46ac,	// (0x000464fe) navi_tabs_4_pane

0x76dc,	// (0x0004952e) tabs_2_active_pane_ParamLimits

0x76dc,	// (0x0004952e) tabs_2_active_pane

0x76ec,	// (0x0004953e) tabs_2_passive_pane_ParamLimits

0x76ec,	// (0x0004953e) tabs_2_passive_pane

0x76aa,	// (0x000494fc) tabs_3_active_pane_ParamLimits

0x76aa,	// (0x000494fc) tabs_3_active_pane

0x76ba,	// (0x0004950c) tabs_3_passive_pane_ParamLimits

0x76ba,	// (0x0004950c) tabs_3_passive_pane

0x76cb,	// (0x0004951d) tabs_3_passive_pane_cp_ParamLimits

0x76cb,	// (0x0004951d) tabs_3_passive_pane_cp

0x765e,	// (0x000494b0) tabs_4_active_pane_ParamLimits

0x765e,	// (0x000494b0) tabs_4_active_pane

0x7671,	// (0x000494c3) tabs_4_passive_pane_ParamLimits

0x7671,	// (0x000494c3) tabs_4_passive_pane

0x7682,	// (0x000494d4) tabs_4_passive_pane_cp_ParamLimits

0x7682,	// (0x000494d4) tabs_4_passive_pane_cp

0x7693,	// (0x000494e5) tabs_4_passive_pane_cp2_ParamLimits

0x7693,	// (0x000494e5) tabs_4_passive_pane_cp2

0x763a,	// (0x0004948c) tabs_2_long_active_pane_ParamLimits

0x763a,	// (0x0004948c) tabs_2_long_active_pane

0x764c,	// (0x0004949e) tabs_2_long_passive_pane_ParamLimits

0x764c,	// (0x0004949e) tabs_2_long_passive_pane

0x75fb,	// (0x0004944d) tabs_3_long_active_pane_ParamLimits

0x75fb,	// (0x0004944d) tabs_3_long_active_pane

0x760e,	// (0x00049460) tabs_3_long_passive_pane_ParamLimits

0x760e,	// (0x00049460) tabs_3_long_passive_pane

0x7627,	// (0x00049479) tabs_3_long_passive_pane_cp_ParamLimits

0x7627,	// (0x00049479) tabs_3_long_passive_pane_cp

0x75a1,	// (0x000493f3) volume_small_pane_g1

0x75aa,	// (0x000493fc) volume_small_pane_g2

0x75b3,	// (0x00049405) volume_small_pane_g3

0x75bc,	// (0x0004940e) volume_small_pane_g4

0x75c5,	// (0x00049417) volume_small_pane_g5

0x75ce,	// (0x00049420) volume_small_pane_g6

0x75d7,	// (0x00049429) volume_small_pane_g7

0x75e0,	// (0x00049432) volume_small_pane_g8

0x75e9,	// (0x0004943b) volume_small_pane_g9

0x75f2,	// (0x00049444) volume_small_pane_g10

0x0009,

0xf8c1,	// (0x00051713) volume_small_pane_g

0x0567,	// (0x000423b9) bg_active_tab_pane_cp2_ParamLimits

0x0567,	// (0x000423b9) bg_active_tab_pane_cp2

0x64e8,	// (0x0004833a) tabs_3_active_pane_g1

0x64f0,	// (0x00048342) tabs_3_active_pane_t1

0x0567,	// (0x000423b9) bg_passive_tab_pane_cp2_ParamLimits

0x0567,	// (0x000423b9) bg_passive_tab_pane_cp2

0x64e8,	// (0x0004833a) tabs_3_passive_pane_g1

0x64f0,	// (0x00048342) tabs_3_passive_pane_t1

0x0567,	// (0x000423b9) bg_active_tab_pane_cp3_ParamLimits

0x0567,	// (0x000423b9) bg_active_tab_pane_cp3

0x6502,	// (0x00048354) tabs_4_active_pane_g1

0x650a,	// (0x0004835c) tabs_4_active_pane_t1

0x0567,	// (0x000423b9) bg_passive_tab_pane_cp3_ParamLimits

0x0567,	// (0x000423b9) bg_passive_tab_pane_cp3

0x6502,	// (0x00048354) tabs_4_1_passive_pane_g1

0x650a,	// (0x0004835c) tabs_4_1_passive_pane_t1

0x8961,	// (0x0004a7b3) list_highlight_pane_cp2

0xa8a5,	// (0x0004c6f7) list_set_pane_ParamLimits

0xa8a5,	// (0x0004c6f7) list_set_pane

0xa96d,	// (0x0004c7bf) main_pane_set_t1_ParamLimits

0xa96d,	// (0x0004c7bf) main_pane_set_t1

0xa98d,	// (0x0004c7df) main_pane_set_t2_ParamLimits

0xa98d,	// (0x0004c7df) main_pane_set_t2

0xa9a1,	// (0x0004c7f3) main_pane_set_t3_ParamLimits

0xa9a1,	// (0x0004c7f3) main_pane_set_t3

0xa9b5,	// (0x0004c807) main_pane_set_t4_ParamLimits

0xa9b5,	// (0x0004c807) main_pane_set_t4

0x0003,

0xf991,	// (0x000517e3) main_pane_set_t_ParamLimits

0xf991,	// (0x000517e3) main_pane_set_t

0xa9c9,	// (0x0004c81b) setting_code_pane

0xa9d3,	// (0x0004c825) setting_slider_graphic_pane

0xa9d3,	// (0x0004c825) setting_slider_pane

0xa9d3,	// (0x0004c825) setting_text_pane

0xa9d3,	// (0x0004c825) setting_volume_pane

0x651c,	// (0x0004836e) volume_set_pane

0x0567,	// (0x000423b9) bg_set_opt_pane_cp

0x6526,	// (0x00048378) setting_slider_pane_t1

0x653f,	// (0x00048391) setting_slider_pane_t2

0x6559,	// (0x000483ab) setting_slider_pane_t3

0x0002,

0xf564,	// (0x000513b6) setting_slider_pane_t

0x6571,	// (0x000483c3) slider_set_pane

0xd6de,	// (0x0004f530) bg_set_opt_pane_cp2

0x0575,	// (0x000423c7) setting_slider_graphic_pane_g1

0x6587,	// (0x000483d9) setting_slider_graphic_pane_t1

0x6597,	// (0x000483e9) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x000513bd) setting_slider_graphic_pane_t

0x65a7,	// (0x000483f9) slider_set_pane_cp

0xd6de,	// (0x0004f530) input_focus_pane_cp1

0xa866,	// (0x0004c6b8) list_set_text_pane

0xd6d4,	// (0x0004f526) setting_text_pane_g1

0xd6de,	// (0x0004f530) input_focus_pane_cp2

0xd6d4,	// (0x0004f526) setting_code_pane_g1

0x057e,	// (0x000423d0) setting_code_pane_t1

0x51cd,	// (0x0004701f) set_text_pane_t1_ParamLimits

0x51cd,	// (0x0004701f) set_text_pane_t1

0x0bd7,	// (0x00042a29) set_opt_bg_pane_g1

0x0bdf,	// (0x00042a31) set_opt_bg_pane_g2

0xa83e,	// (0x0004c690) set_opt_bg_pane_g3

0x0bef,	// (0x00042a41) set_opt_bg_pane_g4

0x0bf7,	// (0x00042a49) set_opt_bg_pane_g5

0x0bff,	// (0x00042a51) set_opt_bg_pane_g6

0xa848,	// (0x0004c69a) set_opt_bg_pane_g7

0xa852,	// (0x0004c6a4) set_opt_bg_pane_g8

0xa85c,	// (0x0004c6ae) set_opt_bg_pane_g9

0x0008,

0xf97e,	// (0x000517d0) set_opt_bg_pane_g

0xa831,	// (0x0004c683) slider_set_pane_g1

0x7785,	// (0x000495d7) slider_set_pane_g2

0x0006,

0xf96f,	// (0x000517c1) slider_set_pane_g

0x770d,	// (0x0004955f) volume_set_pane_g1

0x7717,	// (0x00049569) volume_set_pane_g2

0x7721,	// (0x00049573) volume_set_pane_g3

0x772b,	// (0x0004957d) volume_set_pane_g4

0x7735,	// (0x00049587) volume_set_pane_g5

0x773f,	// (0x00049591) volume_set_pane_g6

0x7749,	// (0x0004959b) volume_set_pane_g7

0x7753,	// (0x000495a5) volume_set_pane_g8

0x775d,	// (0x000495af) volume_set_pane_g9

0x7767,	// (0x000495b9) volume_set_pane_g10

0x0009,

0xf947,	// (0x00051799) volume_set_pane_g

0x65af,	// (0x00048401) indicator_pane_ParamLimits

0x65af,	// (0x00048401) indicator_pane

0x65bb,	// (0x0004840d) main_idle_pane_g2_ParamLimits

0x65bb,	// (0x0004840d) main_idle_pane_g2

0x65e3,	// (0x00048435) main_pane_idle_g1_ParamLimits

0x65e3,	// (0x00048435) main_pane_idle_g1

0x058c,	// (0x000423de) popup_clock_digital_analogue_window_ParamLimits

0x058c,	// (0x000423de) popup_clock_digital_analogue_window

0x65f1,	// (0x00048443) soft_indicator_pane_ParamLimits

0x65f1,	// (0x00048443) soft_indicator_pane

0x65ff,	// (0x00048451) wallpaper_pane_ParamLimits

0x65ff,	// (0x00048451) wallpaper_pane

0xd6d4,	// (0x0004f526) wallpaper_pane_g1

0x660b,	// (0x0004845d) indicator_pane_g1_ParamLimits

0x660b,	// (0x0004845d) indicator_pane_g1

0xac8d,	// (0x0004cadf) navi_navi_icon_text_pane_srt_g1

0x05ba,	// (0x0004240c) soft_indicator_pane_t1

0x05d4,	// (0x00042426) aid_ps_area_pane

0x6617,	// (0x00048469) aid_ps_clock_pane

0x05e5,	// (0x00042437) aid_ps_indicator_pane

0x05f1,	// (0x00042443) indicator_ps_pane_ParamLimits

0x05f1,	// (0x00042443) indicator_ps_pane

0x0600,	// (0x00042452) power_save_pane_g1_ParamLimits

0x0600,	// (0x00042452) power_save_pane_g1

0x060c,	// (0x0004245e) power_save_pane_g2_ParamLimits

0x060c,	// (0x0004245e) power_save_pane_g2

0x606b,	// (0x00047ebd) aid_navinavi_width_pane

0x05d4,	// (0x00042426) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x000513c2) power_save_pane_g_ParamLimits

0xf570,	// (0x000513c2) power_save_pane_g

0x061a,	// (0x0004246c) power_save_pane_t1_ParamLimits

0x061a,	// (0x0004246c) power_save_pane_t1

0x6617,	// (0x00048469) aid_ps_clock_pane_ParamLimits

0x05e5,	// (0x00042437) aid_ps_indicator_pane_ParamLimits

0x062c,	// (0x0004247e) power_save_pane_t4_ParamLimits

0x062c,	// (0x0004247e) power_save_pane_t4

0x0001,

0xf575,	// (0x000513c7) power_save_pane_t_ParamLimits

0xf575,	// (0x000513c7) power_save_pane_t

0x0656,	// (0x000424a8) power_save_t3_ParamLimits

0x0656,	// (0x000424a8) power_save_t3

0x0641,	// (0x00042493) power_save_t2_ParamLimits

0x0641,	// (0x00042493) power_save_t2

0x066b,	// (0x000424bd) indicator_ps_pane_g1

0x6625,	// (0x00048477) ai_gene_pane_ParamLimits

0x6625,	// (0x00048477) ai_gene_pane

0x6631,	// (0x00048483) ai_links_pane_ParamLimits

0x6631,	// (0x00048483) ai_links_pane

0x663d,	// (0x0004848f) indicator_pane_cp1_ParamLimits

0x663d,	// (0x0004848f) indicator_pane_cp1

0x6649,	// (0x0004849b) main_pane_idle_g1_cp_ParamLimits

0x6649,	// (0x0004849b) main_pane_idle_g1_cp

0x0674,	// (0x000424c6) popup_ai_links_title_window

0x6655,	// (0x000484a7) soft_indicator_pane_cp1_ParamLimits

0x6655,	// (0x000484a7) soft_indicator_pane_cp1

0xa604,	// (0x0004c456) ai_links_pane_g1

0xa60d,	// (0x0004c45f) grid_ai_links_pane

0xa5e9,	// (0x0004c43b) ai_gene_pane_1

0xa5f2,	// (0x0004c444) ai_gene_pane_2

0xa5fb,	// (0x0004c44d) list_highlight_pane_cp4

0xa5c9,	// (0x0004c41b) cell_ai_link_pane_ParamLimits

0xa5c9,	// (0x0004c41b) cell_ai_link_pane

0xa5c1,	// (0x0004c413) cell_ai_link_pane_g1

0x0842,	// (0x00042694) cell_ai_link_pane_g2

0x0001,

0xf922,	// (0x00051774) cell_ai_link_pane_g

0xd6de,	// (0x0004f530) grid_highlight_cp2

0xd6de,	// (0x0004f530) bg_popup_sub_pane_cp1

0x068b,	// (0x000424dd) popup_ai_links_title_window_t1

0xa50d,	// (0x0004c35f) ai_gene_pane_1_g1_ParamLimits

0xa50d,	// (0x0004c35f) ai_gene_pane_1_g1

0xa519,	// (0x0004c36b) ai_gene_pane_1_g2_ParamLimits

0xa519,	// (0x0004c36b) ai_gene_pane_1_g2

0x0001,

0xf918,	// (0x0005176a) ai_gene_pane_1_g_ParamLimits

0xf918,	// (0x0005176a) ai_gene_pane_1_g

0xa526,	// (0x0004c378) ai_gene_pane_1_t1_ParamLimits

0xa526,	// (0x0004c378) ai_gene_pane_1_t1

0xa55a,	// (0x0004c3ac) grid_ai_soft_ind_pane

0xa4f8,	// (0x0004c34a) ai_gene_pane_2_t1_ParamLimits

0xa4f8,	// (0x0004c34a) ai_gene_pane_2_t1

0x6661,	// (0x000484b3) main_pane_empty_t1_ParamLimits

0x6661,	// (0x000484b3) main_pane_empty_t1

0x6679,	// (0x000484cb) main_pane_empty_t2_ParamLimits

0x6679,	// (0x000484cb) main_pane_empty_t2

0x668e,	// (0x000484e0) main_pane_empty_t3_ParamLimits

0x668e,	// (0x000484e0) main_pane_empty_t3

0x66a0,	// (0x000484f2) main_pane_empty_t4_ParamLimits

0x66a0,	// (0x000484f2) main_pane_empty_t4

0x66b2,	// (0x00048504) main_pane_empty_t5_ParamLimits

0x66b2,	// (0x00048504) main_pane_empty_t5

0x0004,

0xf57a,	// (0x000513cc) main_pane_empty_t_ParamLimits

0xf57a,	// (0x000513cc) main_pane_empty_t

0x0c28,	// (0x00042a7a) bg_popup_window_pane_ParamLimits

0x0c28,	// (0x00042a7a) bg_popup_window_pane

0xa25a,	// (0x0004c0ac) find_popup_pane_cp2_ParamLimits

0xa25a,	// (0x0004c0ac) find_popup_pane_cp2

0xa266,	// (0x0004c0b8) heading_pane_ParamLimits

0xa266,	// (0x0004c0b8) heading_pane

0xd6de,	// (0x0004f530) bg_popup_sub_pane

0xa1d4,	// (0x0004c026) bg_popup_window_pane_g1_ParamLimits

0xa1d4,	// (0x0004c026) bg_popup_window_pane_g1

0xa1e0,	// (0x0004c032) bg_popup_window_pane_g2_ParamLimits

0xa1e0,	// (0x0004c032) bg_popup_window_pane_g2

0xa1ec,	// (0x0004c03e) bg_popup_window_pane_g3_ParamLimits

0xa1ec,	// (0x0004c03e) bg_popup_window_pane_g3

0xa1f8,	// (0x0004c04a) bg_popup_window_pane_g4_ParamLimits

0xa1f8,	// (0x0004c04a) bg_popup_window_pane_g4

0xa204,	// (0x0004c056) bg_popup_window_pane_g5_ParamLimits

0xa204,	// (0x0004c056) bg_popup_window_pane_g5

0xa210,	// (0x0004c062) bg_popup_window_pane_g6_ParamLimits

0xa210,	// (0x0004c062) bg_popup_window_pane_g6

0xa21c,	// (0x0004c06e) bg_popup_window_pane_g7_ParamLimits

0xa21c,	// (0x0004c06e) bg_popup_window_pane_g7

0xa228,	// (0x0004c07a) bg_popup_window_pane_g8_ParamLimits

0xa228,	// (0x0004c07a) bg_popup_window_pane_g8

0xa234,	// (0x0004c086) bg_popup_window_pane_g9_ParamLimits

0xa234,	// (0x0004c086) bg_popup_window_pane_g9

0xa240,	// (0x0004c092) bg_popup_window_pane_g10_ParamLimits

0xa240,	// (0x0004c092) bg_popup_window_pane_g10

0x0009,

0xf8e0,	// (0x00051732) bg_popup_window_pane_g_ParamLimits

0xf8e0,	// (0x00051732) bg_popup_window_pane_g

0xa169,	// (0x0004bfbb) bg_popup_heading_pane_ParamLimits

0xa169,	// (0x0004bfbb) bg_popup_heading_pane

0x780b,	// (0x0004965d) tabs_4_passive_pane_cp_srt_ParamLimits

0x780b,	// (0x0004965d) tabs_4_passive_pane_cp_srt

0x781d,	// (0x0004966f) tabs_4_passive_pane_srt_ParamLimits

0xa17d,	// (0x0004bfcf) heading_pane_g2

0x781d,	// (0x0004966f) tabs_4_passive_pane_srt

0x8961,	// (0x0004a7b3) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8961,	// (0x0004a7b3) bg_passive_tab_pane_cp3_srt

0xa185,	// (0x0004bfd7) heading_pane_t1_ParamLimits

0xa185,	// (0x0004bfd7) heading_pane_t1

0xa19c,	// (0x0004bfee) heading_pane_t2_ParamLimits

0xa19c,	// (0x0004bfee) heading_pane_t2

0x0001,

0xf8db,	// (0x0005172d) heading_pane_t_ParamLimits

0xf8db,	// (0x0005172d) heading_pane_t

0x9c94,	// (0x0004bae6) bg_popup_heading_pane_g1

0x9d43,	// (0x0004bb95) bg_popup_heading_pane_g2

0x9d4d,	// (0x0004bb9f) bg_popup_heading_pane_g3

0x9d57,	// (0x0004bba9) bg_popup_heading_pane_g4

0x9d61,	// (0x0004bbb3) bg_popup_heading_pane_g5

0x9d6b,	// (0x0004bbbd) bg_popup_heading_pane_g6

0x9d73,	// (0x0004bbc5) bg_popup_heading_pane_g7

0x9d7b,	// (0x0004bbcd) bg_popup_heading_pane_g8

0x9d85,	// (0x0004bbd7) bg_popup_heading_pane_g9

0x0008,

0xf897,	// (0x000516e9) bg_popup_heading_pane_g

0x94a2,	// (0x0004b2f4) bg_popup_sub_pane_g1

0x94aa,	// (0x0004b2fc) bg_popup_sub_pane_g2

0x94b2,	// (0x0004b304) bg_popup_sub_pane_g3

0x94ba,	// (0x0004b30c) bg_popup_sub_pane_g4

0x94c2,	// (0x0004b314) bg_popup_sub_pane_g5

0x94ca,	// (0x0004b31c) bg_popup_sub_pane_g6

0x94d2,	// (0x0004b324) bg_popup_sub_pane_g7

0x94da,	// (0x0004b32c) bg_popup_sub_pane_g8

0x94e2,	// (0x0004b334) bg_popup_sub_pane_g9

0x0008,

0xf871,	// (0x000516c3) bg_popup_sub_pane_g

0xd738,	// (0x0004f58a) bg_popup_window_pane_cp5_ParamLimits

0xd738,	// (0x0004f58a) bg_popup_window_pane_cp5

0x06a8,	// (0x000424fa) popup_note_window_g1_ParamLimits

0x06a8,	// (0x000424fa) popup_note_window_g1

0x06b4,	// (0x00042506) popup_note_window_t1_ParamLimits

0x06b4,	// (0x00042506) popup_note_window_t1

0x06ca,	// (0x0004251c) popup_note_window_t2_ParamLimits

0x06ca,	// (0x0004251c) popup_note_window_t2

0x06e0,	// (0x00042532) popup_note_window_t3_ParamLimits

0x06e0,	// (0x00042532) popup_note_window_t3

0x06f6,	// (0x00042548) popup_note_window_t4_ParamLimits

0x06f6,	// (0x00042548) popup_note_window_t4

0x071e,	// (0x00042570) popup_note_window_t5_ParamLimits

0x071e,	// (0x00042570) popup_note_window_t5

0x0004,

0xf585,	// (0x000513d7) popup_note_window_t_ParamLimits

0xf585,	// (0x000513d7) popup_note_window_t

0x0742,	// (0x00042594) bg_popup_window_pane_cp6_ParamLimits

0x0742,	// (0x00042594) bg_popup_window_pane_cp6

0x9c10,	// (0x0004ba62) popup_note_image_window_g1_ParamLimits

0x9c10,	// (0x0004ba62) popup_note_image_window_g1

0x9c1c,	// (0x0004ba6e) popup_note_image_window_g2_ParamLimits

0x9c1c,	// (0x0004ba6e) popup_note_image_window_g2

0x0001,

0xf865,	// (0x000516b7) popup_note_image_window_g_ParamLimits

0xf865,	// (0x000516b7) popup_note_image_window_g

0x9c35,	// (0x0004ba87) popup_note_image_window_t1_ParamLimits

0x9c35,	// (0x0004ba87) popup_note_image_window_t1

0x9c4e,	// (0x0004baa0) popup_note_image_window_t2_ParamLimits

0x9c4e,	// (0x0004baa0) popup_note_image_window_t2

0x9c67,	// (0x0004bab9) popup_note_image_window_t3_ParamLimits

0x9c67,	// (0x0004bab9) popup_note_image_window_t3

0x0002,

0xf86a,	// (0x000516bc) popup_note_image_window_t_ParamLimits

0xf86a,	// (0x000516bc) popup_note_image_window_t

0x9ad0,	// (0x0004b922) bg_popup_window_pane_cp7_ParamLimits

0x9ad0,	// (0x0004b922) bg_popup_window_pane_cp7

0x9b00,	// (0x0004b952) popup_note_wait_window_g1_ParamLimits

0x9b00,	// (0x0004b952) popup_note_wait_window_g1

0x9b0c,	// (0x0004b95e) popup_note_wait_window_g2_ParamLimits

0x9b0c,	// (0x0004b95e) popup_note_wait_window_g2

0x0002,

0xf853,	// (0x000516a5) popup_note_wait_window_g_ParamLimits

0xf853,	// (0x000516a5) popup_note_wait_window_g

0x9b24,	// (0x0004b976) popup_note_wait_window_t1_ParamLimits

0x9b24,	// (0x0004b976) popup_note_wait_window_t1

0x9b4b,	// (0x0004b99d) popup_note_wait_window_t2_ParamLimits

0x9b4b,	// (0x0004b99d) popup_note_wait_window_t2

0x9b69,	// (0x0004b9bb) popup_note_wait_window_t3_ParamLimits

0x9b69,	// (0x0004b9bb) popup_note_wait_window_t3

0x9b7c,	// (0x0004b9ce) popup_note_wait_window_t4_ParamLimits

0x9b7c,	// (0x0004b9ce) popup_note_wait_window_t4

0x0004,

0xf85a,	// (0x000516ac) popup_note_wait_window_t_ParamLimits

0xf85a,	// (0x000516ac) popup_note_wait_window_t

0x9ba1,	// (0x0004b9f3) wait_bar_pane_ParamLimits

0x9ba1,	// (0x0004b9f3) wait_bar_pane

0xd6de,	// (0x0004f530) wait_anim_pane

0xd6de,	// (0x0004f530) wait_border_pane

0xd6d4,	// (0x0004f526) wait_anim_pane_g1

0xd6d4,	// (0x0004f526) wait_anim_pane_g2

0x0001,

0xf70e,	// (0x00051560) wait_anim_pane_g

0x9a74,	// (0x0004b8c6) wait_border_pane_g1

0x9a7f,	// (0x0004b8d1) wait_border_pane_g2

0x9a88,	// (0x0004b8da) wait_border_pane_g3

0x0002,

0xf84c,	// (0x0005169e) wait_border_pane_g

0x98de,	// (0x0004b730) bg_popup_window_pane_cp16_ParamLimits

0x98de,	// (0x0004b730) bg_popup_window_pane_cp16

0x99de,	// (0x0004b830) indicator_popup_pane_cp4_ParamLimits

0x99de,	// (0x0004b830) indicator_popup_pane_cp4

0x99f2,	// (0x0004b844) popup_query_data_window_t1_ParamLimits

0x99f2,	// (0x0004b844) popup_query_data_window_t1

0x9a04,	// (0x0004b856) popup_query_data_window_t2_ParamLimits

0x9a04,	// (0x0004b856) popup_query_data_window_t2

0x9a1d,	// (0x0004b86f) popup_query_data_window_t3_ParamLimits

0x9a1d,	// (0x0004b86f) popup_query_data_window_t3

0x0002,

0xf845,	// (0x00051697) popup_query_data_window_t_ParamLimits

0xf845,	// (0x00051697) popup_query_data_window_t

0x9a37,	// (0x0004b889) query_popup_data_pane_ParamLimits

0x9a37,	// (0x0004b889) query_popup_data_pane

0x9a4b,	// (0x0004b89d) query_popup_data_pane_cp1_ParamLimits

0x9a4b,	// (0x0004b89d) query_popup_data_pane_cp1

0x98de,	// (0x0004b730) bg_popup_window_pane_cp10_ParamLimits

0x98de,	// (0x0004b730) bg_popup_window_pane_cp10

0x9910,	// (0x0004b762) indicator_popup_pane_ParamLimits

0x9910,	// (0x0004b762) indicator_popup_pane

0x9932,	// (0x0004b784) popup_query_code_window_t1_ParamLimits

0x9932,	// (0x0004b784) popup_query_code_window_t1

0x994c,	// (0x0004b79e) popup_query_code_window_t2_ParamLimits

0x994c,	// (0x0004b79e) popup_query_code_window_t2

0x9995,	// (0x0004b7e7) popup_query_code_window_t3_ParamLimits

0x9995,	// (0x0004b7e7) popup_query_code_window_t3

0x0002,

0xf83e,	// (0x00051690) popup_query_code_window_t_ParamLimits

0xf83e,	// (0x00051690) popup_query_code_window_t

0x99c4,	// (0x0004b816) query_popup_pane_ParamLimits

0x99c4,	// (0x0004b816) query_popup_pane

0x0742,	// (0x00042594) bg_popup_window_pane_cp15_ParamLimits

0x0742,	// (0x00042594) bg_popup_window_pane_cp15

0x0762,	// (0x000425b4) indicator_popup_pane_cp1_ParamLimits

0x0762,	// (0x000425b4) indicator_popup_pane_cp1

0x0775,	// (0x000425c7) indicator_popup_pane_cp2_ParamLimits

0x0775,	// (0x000425c7) indicator_popup_pane_cp2

0x0790,	// (0x000425e2) popup_query_data_code_window_g1_ParamLimits

0x0790,	// (0x000425e2) popup_query_data_code_window_g1

0x07a3,	// (0x000425f5) popup_query_data_code_window_t1_ParamLimits

0x07a3,	// (0x000425f5) popup_query_data_code_window_t1

0x07b5,	// (0x00042607) popup_query_data_code_window_t2_ParamLimits

0x07b5,	// (0x00042607) popup_query_data_code_window_t2

0x07c7,	// (0x00042619) popup_query_data_code_window_t3_ParamLimits

0x07c7,	// (0x00042619) popup_query_data_code_window_t3

0x07dd,	// (0x0004262f) popup_query_data_code_window_t4_ParamLimits

0x07dd,	// (0x0004262f) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x000513e2) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x000513e2) popup_query_data_code_window_t

0x4660,	// (0x000464b2) list_single_midp_graphic_pane_g3

0x07f7,	// (0x00042649) query_popup_data_pane_cp2_ParamLimits

0x080a,	// (0x0004265c) query_popup_pane_cp2_ParamLimits

0x080a,	// (0x0004265c) query_popup_pane_cp2

0xd6de,	// (0x0004f530) bg_popup_window_pane_cp11

0x98d6,	// (0x0004b728) heading_pane_cp5

0x08a0,	// (0x000426f2) listscroll_popup_info_pane

0xd6de,	// (0x0004f530) input_focus_pane_cp3

0x0825,	// (0x00042677) query_popup_pane_t1

0x0833,	// (0x00042685) list_popup_info_pane_ParamLimits

0x0833,	// (0x00042685) list_popup_info_pane

0x0842,	// (0x00042694) listscroll_popup_info_pane_g1

0x084a,	// (0x0004269c) scroll_pane_cp7

0x0854,	// (0x000426a6) popup_info_list_pane_t1_ParamLimits

0x0854,	// (0x000426a6) popup_info_list_pane_t1

0x086e,	// (0x000426c0) popup_info_list_pane_t2_ParamLimits

0x086e,	// (0x000426c0) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x000513eb) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x000513eb) popup_info_list_pane_t

0xd6de,	// (0x0004f530) bg_popup_window_pane_cp12

0xaca7,	// (0x0004caf9) find_popup_pane

0x0567,	// (0x000423b9) bg_popup_window_pane_cp3

0x0888,	// (0x000426da) heading_pane_cp3

0x0894,	// (0x000426e6) listscroll_popup_graphic_pane

0xd6de,	// (0x0004f530) bg_popup_window_pane_cp4

0x6714,	// (0x00048566) heading_pane_cp4

0x08a0,	// (0x000426f2) listscroll_popup_colour_pane

0x671e,	// (0x00048570) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x671e,	// (0x00048570) cell_large_graphic_colour_none_popup_pane

0x6732,	// (0x00048584) grid_large_graphic_colour_popup_pane_ParamLimits

0x6732,	// (0x00048584) grid_large_graphic_colour_popup_pane

0x675e,	// (0x000485b0) listscroll_popup_colour_pane_g1_ParamLimits

0x675e,	// (0x000485b0) listscroll_popup_colour_pane_g1

0x6775,	// (0x000485c7) listscroll_popup_colour_pane_g2_ParamLimits

0x6775,	// (0x000485c7) listscroll_popup_colour_pane_g2

0x678c,	// (0x000485de) listscroll_popup_colour_pane_g3_ParamLimits

0x678c,	// (0x000485de) listscroll_popup_colour_pane_g3

0x679c,	// (0x000485ee) listscroll_popup_colour_pane_g4_ParamLimits

0x679c,	// (0x000485ee) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x000513f0) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x000513f0) listscroll_popup_colour_pane_g

0x08a8,	// (0x000426fa) scroll_pane_cp6_ParamLimits

0x08a8,	// (0x000426fa) scroll_pane_cp6

0x67b0,	// (0x00048602) cell_large_graphic_colour_popup_pane_ParamLimits

0x67b0,	// (0x00048602) cell_large_graphic_colour_popup_pane

0x08ba,	// (0x0004270c) cell_large_graphic_colour_none_popup_pane_t1

0xd6de,	// (0x0004f530) grid_highlight_pane_cp5

0x08c9,	// (0x0004271b) cell_large_graphic_colour_popup_pane_g1

0x08d1,	// (0x00042723) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x000513f9) cell_large_graphic_colour_popup_pane_g

0x08d9,	// (0x0004272b) cell_large_graphic_colour_popup_pane_g2_copy1

0x08e2,	// (0x00042734) grid_highlight_pane_cp4

0x08ea,	// (0x0004273c) bg_popup_window_pane_cp8_ParamLimits

0x08ea,	// (0x0004273c) bg_popup_window_pane_cp8

0x0905,	// (0x00042757) popup_snote_single_text_window_g1_ParamLimits

0x0905,	// (0x00042757) popup_snote_single_text_window_g1

0x0917,	// (0x00042769) popup_snote_single_text_window_t1_ParamLimits

0x0917,	// (0x00042769) popup_snote_single_text_window_t1

0x092a,	// (0x0004277c) popup_snote_single_text_window_t2_ParamLimits

0x092a,	// (0x0004277c) popup_snote_single_text_window_t2

0x093d,	// (0x0004278f) popup_snote_single_text_window_t3_ParamLimits

0x093d,	// (0x0004278f) popup_snote_single_text_window_t3

0x0976,	// (0x000427c8) popup_snote_single_text_window_t4_ParamLimits

0x0976,	// (0x000427c8) popup_snote_single_text_window_t4

0x09aa,	// (0x000427fc) popup_snote_single_text_window_t5_ParamLimits

0x09aa,	// (0x000427fc) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x000513fe) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x000513fe) popup_snote_single_text_window_t

0x09d9,	// (0x0004282b) bg_popup_window_pane_cp9_ParamLimits

0x09d9,	// (0x0004282b) bg_popup_window_pane_cp9

0x0905,	// (0x00042757) popup_snote_single_graphic_window_g1_ParamLimits

0x0905,	// (0x00042757) popup_snote_single_graphic_window_g1

0x09e7,	// (0x00042839) popup_snote_single_graphic_window_g2_ParamLimits

0x09e7,	// (0x00042839) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x00051409) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x00051409) popup_snote_single_graphic_window_g

0x09f3,	// (0x00042845) popup_snote_single_graphic_window_t1_ParamLimits

0x09f3,	// (0x00042845) popup_snote_single_graphic_window_t1

0x0a06,	// (0x00042858) popup_snote_single_graphic_window_t2_ParamLimits

0x0a06,	// (0x00042858) popup_snote_single_graphic_window_t2

0x0a19,	// (0x0004286b) popup_snote_single_graphic_window_t3_ParamLimits

0x0a19,	// (0x0004286b) popup_snote_single_graphic_window_t3

0x0a52,	// (0x000428a4) popup_snote_single_graphic_window_t4_ParamLimits

0x0a52,	// (0x000428a4) popup_snote_single_graphic_window_t4

0x0a86,	// (0x000428d8) popup_snote_single_graphic_window_t5_ParamLimits

0x0a86,	// (0x000428d8) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0005140e) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0005140e) popup_snote_single_graphic_window_t

0xabe5,	// (0x0004ca37) grid_graphic_popup_pane_ParamLimits

0xabe5,	// (0x0004ca37) grid_graphic_popup_pane

0xac13,	// (0x0004ca65) listscroll_popup_graphic_pane_g1_ParamLimits

0xac13,	// (0x0004ca65) listscroll_popup_graphic_pane_g1

0xac27,	// (0x0004ca79) listscroll_popup_graphic_pane_g2_ParamLimits

0xac27,	// (0x0004ca79) listscroll_popup_graphic_pane_g2

0x0001,

0xf9bb,	// (0x0005180d) listscroll_popup_graphic_pane_g_ParamLimits

0xf9bb,	// (0x0005180d) listscroll_popup_graphic_pane_g

0xac3b,	// (0x0004ca8d) scroll_pane_cp5

0xab8d,	// (0x0004c9df) cell_graphic_popup_pane_ParamLimits

0xab8d,	// (0x0004c9df) cell_graphic_popup_pane

0xab6e,	// (0x0004c9c0) cell_graphic_popup_pane_g1

0xab76,	// (0x0004c9c8) cell_graphic_popup_pane_g2

0x08d9,	// (0x0004272b) cell_graphic_popup_pane_g3

0x0002,

0xf9b4,	// (0x00051806) cell_graphic_popup_pane_g

0xab7f,	// (0x0004c9d1) cell_graphic_popup_pane_t2

0x08e2,	// (0x00042734) grid_highlight_pane_cp3

0x0ac7,	// (0x00042919) list_gen_pane_ParamLimits

0x0ac7,	// (0x00042919) list_gen_pane

0x0aef,	// (0x00042941) scroll_pane

0xaac6,	// (0x0004c918) bg_list_pane_g1_ParamLimits

0xaac6,	// (0x0004c918) bg_list_pane_g1

0xaae3,	// (0x0004c935) bg_list_pane_g2_ParamLimits

0xaae3,	// (0x0004c935) bg_list_pane_g2

0xaaf8,	// (0x0004c94a) bg_list_pane_g3_ParamLimits

0xaaf8,	// (0x0004c94a) bg_list_pane_g3

0xab0c,	// (0x0004c95e) bg_list_pane_g4_ParamLimits

0xab0c,	// (0x0004c95e) bg_list_pane_g4

0xab20,	// (0x0004c972) bg_list_pane_g5_ParamLimits

0xab20,	// (0x0004c972) bg_list_pane_g5

0x0004,

0xf9a9,	// (0x000517fb) bg_list_pane_g_ParamLimits

0xf9a9,	// (0x000517fb) bg_list_pane_g

0x77a7,	// (0x000495f9) list_double2_graphic_large_graphic_pane_ParamLimits

0x77a7,	// (0x000495f9) list_double2_graphic_large_graphic_pane

0x77a7,	// (0x000495f9) list_double2_graphic_pane_ParamLimits

0x77a7,	// (0x000495f9) list_double2_graphic_pane

0x77a7,	// (0x000495f9) list_double2_large_graphic_pane_ParamLimits

0x77a7,	// (0x000495f9) list_double2_large_graphic_pane

0x77a7,	// (0x000495f9) list_double2_pane_ParamLimits

0x77a7,	// (0x000495f9) list_double2_pane

0x77a7,	// (0x000495f9) list_double_graphic_heading_pane_ParamLimits

0x77a7,	// (0x000495f9) list_double_graphic_heading_pane

0x77a7,	// (0x000495f9) list_double_graphic_pane_ParamLimits

0x77a7,	// (0x000495f9) list_double_graphic_pane

0x77a7,	// (0x000495f9) list_double_heading_pane_ParamLimits

0x77a7,	// (0x000495f9) list_double_heading_pane

0x77a7,	// (0x000495f9) list_double_large_graphic_pane_ParamLimits

0x77a7,	// (0x000495f9) list_double_large_graphic_pane

0x77a7,	// (0x000495f9) list_double_number_pane_ParamLimits

0x77a7,	// (0x000495f9) list_double_number_pane

0x77a7,	// (0x000495f9) list_double_pane_ParamLimits

0x77a7,	// (0x000495f9) list_double_pane

0x77a7,	// (0x000495f9) list_double_time_pane_ParamLimits

0x77a7,	// (0x000495f9) list_double_time_pane

0x77a7,	// (0x000495f9) list_setting_number_pane_ParamLimits

0x77a7,	// (0x000495f9) list_setting_number_pane

0x77a7,	// (0x000495f9) list_setting_pane_ParamLimits

0x77a7,	// (0x000495f9) list_setting_pane

0xaa82,	// (0x0004c8d4) list_single_2graphic_pane_ParamLimits

0xaa82,	// (0x0004c8d4) list_single_2graphic_pane

0xaa82,	// (0x0004c8d4) list_single_graphic_heading_pane_ParamLimits

0xaa82,	// (0x0004c8d4) list_single_graphic_heading_pane

0xaa82,	// (0x0004c8d4) list_single_graphic_pane_ParamLimits

0xaa82,	// (0x0004c8d4) list_single_graphic_pane

0xaa82,	// (0x0004c8d4) list_single_heading_pane_ParamLimits

0xaa82,	// (0x0004c8d4) list_single_heading_pane

0x77cf,	// (0x00049621) list_single_large_graphic_pane_ParamLimits

0x77cf,	// (0x00049621) list_single_large_graphic_pane

0xaa82,	// (0x0004c8d4) list_single_number_heading_pane_ParamLimits

0xaa82,	// (0x0004c8d4) list_single_number_heading_pane

0xaa82,	// (0x0004c8d4) list_single_number_pane_ParamLimits

0xaa82,	// (0x0004c8d4) list_single_number_pane

0xaa82,	// (0x0004c8d4) list_single_pane_ParamLimits

0xaa82,	// (0x0004c8d4) list_single_pane

0xd6de,	// (0x0004f530) list_highlight_pane_cp1

0x2914,	// (0x00044766) list_single_pane_g1_ParamLimits

0x2914,	// (0x00044766) list_single_pane_g1

0x67df,	// (0x00048631) list_single_pane_g2_ParamLimits

0x67df,	// (0x00048631) list_single_pane_g2

0x0001,

0xf5d8,	// (0x0005142a) list_single_pane_g_ParamLimits

0xf5d8,	// (0x0005142a) list_single_pane_g

0x5b13,	// (0x00047965) list_single_pane_t1_ParamLimits

0x5b13,	// (0x00047965) list_single_pane_t1

0x2914,	// (0x00044766) list_single_number_pane_g1_ParamLimits

0x2914,	// (0x00044766) list_single_number_pane_g1

0x67df,	// (0x00048631) list_single_number_pane_g2_ParamLimits

0x67df,	// (0x00048631) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x0005142a) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x0005142a) list_single_number_pane_g

0x5ab5,	// (0x00047907) list_single_number_pane_t1_ParamLimits

0x5ab5,	// (0x00047907) list_single_number_pane_t1

0x5acb,	// (0x0004791d) list_single_number_pane_t2_ParamLimits

0x5acb,	// (0x0004791d) list_single_number_pane_t2

0x0001,

0xf96a,	// (0x000517bc) list_single_number_pane_t_ParamLimits

0xf96a,	// (0x000517bc) list_single_number_pane_t

0x51e6,	// (0x00047038) list_single_graphic_pane_g1_ParamLimits

0x51e6,	// (0x00047038) list_single_graphic_pane_g1

0x2914,	// (0x00044766) list_single_graphic_pane_g2_ParamLimits

0x2914,	// (0x00044766) list_single_graphic_pane_g2

0x67df,	// (0x00048631) list_single_graphic_pane_g3_ParamLimits

0x67df,	// (0x00048631) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x00051419) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x00051419) list_single_graphic_pane_g

0x51f2,	// (0x00047044) list_single_graphic_pane_t1_ParamLimits

0x51f2,	// (0x00047044) list_single_graphic_pane_t1

0x5208,	// (0x0004705a) list_single_heading_pane_g1_ParamLimits

0x5208,	// (0x0004705a) list_single_heading_pane_g1

0x67df,	// (0x00048631) list_single_heading_pane_g2_ParamLimits

0x67df,	// (0x00048631) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x00051420) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x00051420) list_single_heading_pane_g

0x521b,	// (0x0004706d) list_single_heading_pane_t1_ParamLimits

0x521b,	// (0x0004706d) list_single_heading_pane_t1

0x67eb,	// (0x0004863d) list_single_heading_pane_t2_ParamLimits

0x67eb,	// (0x0004863d) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x00051425) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x00051425) list_single_heading_pane_t

0x2914,	// (0x00044766) list_single_number_heading_pane_g1_ParamLimits

0x2914,	// (0x00044766) list_single_number_heading_pane_g1

0x67df,	// (0x00048631) list_single_number_heading_pane_g2_ParamLimits

0x67df,	// (0x00048631) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x0005142a) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x0005142a) list_single_number_heading_pane_g

0x5231,	// (0x00047083) list_single_number_heading_pane_t1_ParamLimits

0x5231,	// (0x00047083) list_single_number_heading_pane_t1

0x5247,	// (0x00047099) list_single_number_heading_pane_t2_ParamLimits

0x5247,	// (0x00047099) list_single_number_heading_pane_t2

0x5259,	// (0x000470ab) list_single_number_heading_pane_t3_ParamLimits

0x5259,	// (0x000470ab) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x0005142f) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x0005142f) list_single_number_heading_pane_t

0x526b,	// (0x000470bd) list_single_graphic_heading_pane_g1_ParamLimits

0x526b,	// (0x000470bd) list_single_graphic_heading_pane_g1

0x67fd,	// (0x0004864f) list_single_graphic_heading_pane_g4_ParamLimits

0x67fd,	// (0x0004864f) list_single_graphic_heading_pane_g4

0x67df,	// (0x00048631) list_single_graphic_heading_pane_g5_ParamLimits

0x67df,	// (0x00048631) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x00051436) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x00051436) list_single_graphic_heading_pane_g

0x5231,	// (0x00047083) list_single_graphic_heading_pane_t1_ParamLimits

0x5231,	// (0x00047083) list_single_graphic_heading_pane_t1

0x5283,	// (0x000470d5) list_single_graphic_heading_pane_t2_ParamLimits

0x5283,	// (0x000470d5) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x0005143d) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x0005143d) list_single_graphic_heading_pane_t

0x680e,	// (0x00048660) list_single_large_graphic_pane_g1_ParamLimits

0x680e,	// (0x00048660) list_single_large_graphic_pane_g1

0x681a,	// (0x0004866c) list_single_large_graphic_pane_g2_ParamLimits

0x681a,	// (0x0004866c) list_single_large_graphic_pane_g2

0x6826,	// (0x00048678) list_single_large_graphic_pane_g3_ParamLimits

0x6826,	// (0x00048678) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x00051442) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x00051442) list_single_large_graphic_pane_g

0x9a7f,	// (0x0004b8d1) wait_border_pane_g2_copy1

0x6832,	// (0x00048684) list_single_large_graphic_pane_g4_cp2

0x529b,	// (0x000470ed) list_single_large_graphic_pane_t1_ParamLimits

0x529b,	// (0x000470ed) list_single_large_graphic_pane_t1

0x683a,	// (0x0004868c) list_double_pane_g1_ParamLimits

0x683a,	// (0x0004868c) list_double_pane_g1

0x6846,	// (0x00048698) list_double_pane_g2_ParamLimits

0x6846,	// (0x00048698) list_double_pane_g2

0x0001,

0xf5f7,	// (0x00051449) list_double_pane_g_ParamLimits

0xf5f7,	// (0x00051449) list_double_pane_g

0x52b1,	// (0x00047103) list_double_pane_t1_ParamLimits

0x52b1,	// (0x00047103) list_double_pane_t1

0x52c7,	// (0x00047119) list_double_pane_t2_ParamLimits

0x52c7,	// (0x00047119) list_double_pane_t2

0x0001,

0xf5fc,	// (0x0005144e) list_double_pane_t_ParamLimits

0xf5fc,	// (0x0005144e) list_double_pane_t

0x52d9,	// (0x0004712b) list_double2_pane_g1_ParamLimits

0x52d9,	// (0x0004712b) list_double2_pane_g1

0x52ea,	// (0x0004713c) list_double2_pane_g2_ParamLimits

0x52ea,	// (0x0004713c) list_double2_pane_g2

0x0001,

0xf601,	// (0x00051453) list_double2_pane_g_ParamLimits

0xf601,	// (0x00051453) list_double2_pane_g

0x52f6,	// (0x00047148) list_double2_pane_t1_ParamLimits

0x52f6,	// (0x00047148) list_double2_pane_t1

0x530c,	// (0x0004715e) list_double2_pane_t2_ParamLimits

0x530c,	// (0x0004715e) list_double2_pane_t2

0x0001,

0xf606,	// (0x00051458) list_double2_pane_t_ParamLimits

0xf606,	// (0x00051458) list_double2_pane_t

0x683a,	// (0x0004868c) list_double_number_pane_g1_ParamLimits

0x683a,	// (0x0004868c) list_double_number_pane_g1

0x6846,	// (0x00048698) list_double_number_pane_g2_ParamLimits

0x6846,	// (0x00048698) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x00051449) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x00051449) list_double_number_pane_g

0x531e,	// (0x00047170) list_double_number_pane_t1_ParamLimits

0x531e,	// (0x00047170) list_double_number_pane_t1

0x5330,	// (0x00047182) list_double_number_pane_t2_ParamLimits

0x5330,	// (0x00047182) list_double_number_pane_t2

0x5346,	// (0x00047198) list_double_number_pane_t3_ParamLimits

0x5346,	// (0x00047198) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x0005145d) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x0005145d) list_double_number_pane_t

0x5358,	// (0x000471aa) list_double_graphic_pane_g1_ParamLimits

0x5358,	// (0x000471aa) list_double_graphic_pane_g1

0x5364,	// (0x000471b6) list_double_graphic_pane_g2_ParamLimits

0x5364,	// (0x000471b6) list_double_graphic_pane_g2

0x5373,	// (0x000471c5) list_double_graphic_pane_g3_ParamLimits

0x5373,	// (0x000471c5) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x00051464) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x00051464) list_double_graphic_pane_g

0x538b,	// (0x000471dd) list_double_graphic_pane_t1_ParamLimits

0x538b,	// (0x000471dd) list_double_graphic_pane_t1

0x53a1,	// (0x000471f3) list_double_graphic_pane_t2_ParamLimits

0x53a1,	// (0x000471f3) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x0005146d) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x0005146d) list_double_graphic_pane_t

0x53b3,	// (0x00047205) list_double2_graphic_pane_g1_ParamLimits

0x53b3,	// (0x00047205) list_double2_graphic_pane_g1

0x6852,	// (0x000486a4) list_double2_graphic_pane_g2_ParamLimits

0x6852,	// (0x000486a4) list_double2_graphic_pane_g2

0x685e,	// (0x000486b0) list_double2_graphic_pane_g3_ParamLimits

0x685e,	// (0x000486b0) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x00051472) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x00051472) list_double2_graphic_pane_g

0x53bf,	// (0x00047211) list_double2_graphic_pane_t1_ParamLimits

0x53bf,	// (0x00047211) list_double2_graphic_pane_t1

0x53d5,	// (0x00047227) list_double2_graphic_pane_t2_ParamLimits

0x53d5,	// (0x00047227) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x00051479) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x00051479) list_double2_graphic_pane_t

0x53e7,	// (0x00047239) list_double_large_graphic_pane_g1_ParamLimits

0x53e7,	// (0x00047239) list_double_large_graphic_pane_g1

0x5412,	// (0x00047264) list_double_large_graphic_pane_g2_ParamLimits

0x5412,	// (0x00047264) list_double_large_graphic_pane_g2

0x6846,	// (0x00048698) list_double_large_graphic_pane_g3_ParamLimits

0x6846,	// (0x00048698) list_double_large_graphic_pane_g3

0x5428,	// (0x0004727a) list_double_large_graphic_pane_g4_ParamLimits

0x5428,	// (0x0004727a) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x0005147e) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x0005147e) list_double_large_graphic_pane_g

0x543b,	// (0x0004728d) list_double_large_graphic_pane_t1_ParamLimits

0x543b,	// (0x0004728d) list_double_large_graphic_pane_t1

0x5454,	// (0x000472a6) list_double_large_graphic_pane_t2_ParamLimits

0x5454,	// (0x000472a6) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x00051489) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x00051489) list_double_large_graphic_pane_t

0x687f,	// (0x000486d1) list_double2_large_graphic_pane_g1_ParamLimits

0x687f,	// (0x000486d1) list_double2_large_graphic_pane_g1

0x5466,	// (0x000472b8) list_double2_large_graphic_pane_g2_ParamLimits

0x5466,	// (0x000472b8) list_double2_large_graphic_pane_g2

0x685e,	// (0x000486b0) list_double2_large_graphic_pane_g3_ParamLimits

0x685e,	// (0x000486b0) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x0005148e) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x0005148e) list_double2_large_graphic_pane_g

0x5477,	// (0x000472c9) list_double2_large_graphic_pane_t1_ParamLimits

0x5477,	// (0x000472c9) list_double2_large_graphic_pane_t1

0x548d,	// (0x000472df) list_double2_large_graphic_pane_t2_ParamLimits

0x548d,	// (0x000472df) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x00051495) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x00051495) list_double2_large_graphic_pane_t

0x549f,	// (0x000472f1) list_double_heading_pane_g1_ParamLimits

0x549f,	// (0x000472f1) list_double_heading_pane_g1

0x688b,	// (0x000486dd) list_double_heading_pane_g2_ParamLimits

0x688b,	// (0x000486dd) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x0005149a) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x0005149a) list_double_heading_pane_g

0x54b0,	// (0x00047302) list_double_heading_pane_t1_ParamLimits

0x54b0,	// (0x00047302) list_double_heading_pane_t1

0x54c6,	// (0x00047318) list_double_heading_pane_t2_ParamLimits

0x54c6,	// (0x00047318) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x0005149f) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x0005149f) list_double_heading_pane_t

0x5358,	// (0x000471aa) list_double_graphic_heading_pane_g1_ParamLimits

0x5358,	// (0x000471aa) list_double_graphic_heading_pane_g1

0x549f,	// (0x000472f1) list_double_graphic_heading_pane_g2_ParamLimits

0x549f,	// (0x000472f1) list_double_graphic_heading_pane_g2

0x688b,	// (0x000486dd) list_double_graphic_heading_pane_g3_ParamLimits

0x688b,	// (0x000486dd) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x000514a4) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x000514a4) list_double_graphic_heading_pane_g

0x54d8,	// (0x0004732a) list_double_graphic_heading_pane_t1_ParamLimits

0x54d8,	// (0x0004732a) list_double_graphic_heading_pane_t1

0x54ee,	// (0x00047340) list_double_graphic_heading_pane_t2_ParamLimits

0x54ee,	// (0x00047340) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x000514ab) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x000514ab) list_double_graphic_heading_pane_t

0x5500,	// (0x00047352) list_double_time_pane_g1_ParamLimits

0x5500,	// (0x00047352) list_double_time_pane_g1

0x5511,	// (0x00047363) list_double_time_pane_g2_ParamLimits

0x5511,	// (0x00047363) list_double_time_pane_g2

0x0001,

0xf65e,	// (0x000514b0) list_double_time_pane_g_ParamLimits

0xf65e,	// (0x000514b0) list_double_time_pane_g

0x551d,	// (0x0004736f) list_double_time_pane_t1_ParamLimits

0x551d,	// (0x0004736f) list_double_time_pane_t1

0x5533,	// (0x00047385) list_double_time_pane_t2_ParamLimits

0x5533,	// (0x00047385) list_double_time_pane_t2

0x5545,	// (0x00047397) list_double_time_pane_t3_ParamLimits

0x5545,	// (0x00047397) list_double_time_pane_t3

0x5557,	// (0x000473a9) list_double_time_pane_t4_ParamLimits

0x5557,	// (0x000473a9) list_double_time_pane_t4

0x0003,

0xf663,	// (0x000514b5) list_double_time_pane_t_ParamLimits

0xf663,	// (0x000514b5) list_double_time_pane_t

0x5569,	// (0x000473bb) list_setting_pane_g1_ParamLimits

0x5569,	// (0x000473bb) list_setting_pane_g1

0x5575,	// (0x000473c7) list_setting_pane_g2_ParamLimits

0x5575,	// (0x000473c7) list_setting_pane_g2

0x0001,

0xf66c,	// (0x000514be) list_setting_pane_g_ParamLimits

0xf66c,	// (0x000514be) list_setting_pane_g

0x5581,	// (0x000473d3) list_setting_pane_t1_ParamLimits

0x5581,	// (0x000473d3) list_setting_pane_t1

0x559b,	// (0x000473ed) list_setting_pane_t2_ParamLimits

0x559b,	// (0x000473ed) list_setting_pane_t2

0x0002,

0xf671,	// (0x000514c3) list_setting_pane_t_ParamLimits

0xf671,	// (0x000514c3) list_setting_pane_t

0x55da,	// (0x0004742c) set_value_pane_cp_ParamLimits

0x55da,	// (0x0004742c) set_value_pane_cp

0x55e8,	// (0x0004743a) list_setting_number_pane_g1_ParamLimits

0x55e8,	// (0x0004743a) list_setting_number_pane_g1

0x55f4,	// (0x00047446) list_setting_number_pane_g2_ParamLimits

0x55f4,	// (0x00047446) list_setting_number_pane_g2

0x0001,

0xf678,	// (0x000514ca) list_setting_number_pane_g_ParamLimits

0xf678,	// (0x000514ca) list_setting_number_pane_g

0x5600,	// (0x00047452) list_setting_number_pane_t1_ParamLimits

0x5600,	// (0x00047452) list_setting_number_pane_t1

0x5619,	// (0x0004746b) list_setting_number_pane_t2_ParamLimits

0x5619,	// (0x0004746b) list_setting_number_pane_t2

0x5633,	// (0x00047485) list_setting_number_pane_t3_ParamLimits

0x5633,	// (0x00047485) list_setting_number_pane_t3

0x0003,

0xf67d,	// (0x000514cf) list_setting_number_pane_t_ParamLimits

0xf67d,	// (0x000514cf) list_setting_number_pane_t

0x55da,	// (0x0004742c) set_value_pane_ParamLimits

0x55da,	// (0x0004742c) set_value_pane

0x0b23,	// (0x00042975) bg_set_opt_pane_ParamLimits

0x0b23,	// (0x00042975) bg_set_opt_pane

0x5676,	// (0x000474c8) set_value_pane_t1

0x0b44,	// (0x00042996) slider_set_pane_cp3

0x0b4d,	// (0x0004299f) volume_small_pane_cp

0x0b56,	// (0x000429a8) list_form_gen_pane

0x0b5f,	// (0x000429b1) scroll_pane_cp8

0x568c,	// (0x000474de) form_field_data_pane_ParamLimits

0x568c,	// (0x000474de) form_field_data_pane

0x56b4,	// (0x00047506) form_field_data_wide_pane_ParamLimits

0x56b4,	// (0x00047506) form_field_data_wide_pane

0x56db,	// (0x0004752d) form_field_popup_pane_ParamLimits

0x56db,	// (0x0004752d) form_field_popup_pane

0x56fd,	// (0x0004754f) form_field_popup_wide_pane_ParamLimits

0x56fd,	// (0x0004754f) form_field_popup_wide_pane

0x571e,	// (0x00047570) form_field_slider_pane_ParamLimits

0x571e,	// (0x00047570) form_field_slider_pane

0x5731,	// (0x00047583) form_field_slider_wide_pane_ParamLimits

0x5731,	// (0x00047583) form_field_slider_wide_pane

0x0b70,	// (0x000429c2) data_form_pane

0x574e,	// (0x000475a0) form_field_data_pane_t1

0x0b7c,	// (0x000429ce) input_focus_pane

0x5768,	// (0x000475ba) data_form_wide_pane

0x5785,	// (0x000475d7) form_field_data_wide_pane_t1

0x08f7,	// (0x00042749) input_focus_pane_cp6

0x57a7,	// (0x000475f9) form_field_popup_pane_t1

0x0b7c,	// (0x000429ce) input_focus_pane_cp7

0x0baa,	// (0x000429fc) list_form_pane

0x57c9,	// (0x0004761b) form_field_popup_wide_pane_t1

0x0b7c,	// (0x000429ce) input_focus_pane_cp8

0x0bb6,	// (0x00042a08) list_form_wide_pane

0x57e6,	// (0x00047638) form_field_slider_pane_t1_ParamLimits

0x57e6,	// (0x00047638) form_field_slider_pane_t1

0x57fe,	// (0x00047650) form_field_slider_pane_t2_ParamLimits

0x57fe,	// (0x00047650) form_field_slider_pane_t2

0x0001,

0xf68d,	// (0x000514df) form_field_slider_pane_t_ParamLimits

0xf68d,	// (0x000514df) form_field_slider_pane_t

0xd738,	// (0x0004f58a) input_focus_pane_cp9_ParamLimits

0xd738,	// (0x0004f58a) input_focus_pane_cp9

0x5813,	// (0x00047665) slider_cont_pane_ParamLimits

0x5813,	// (0x00047665) slider_cont_pane

0x0bc5,	// (0x00042a17) form_field_slider_wide_pane_t1_ParamLimits

0x0bc5,	// (0x00042a17) form_field_slider_wide_pane_t1

0x5827,	// (0x00047679) form_field_slider_wide_pane_t2_ParamLimits

0x5827,	// (0x00047679) form_field_slider_wide_pane_t2

0x0001,

0xf692,	// (0x000514e4) form_field_slider_wide_pane_t_ParamLimits

0xf692,	// (0x000514e4) form_field_slider_wide_pane_t

0xd738,	// (0x0004f58a) input_focus_pane_cp10_ParamLimits

0xd738,	// (0x0004f58a) input_focus_pane_cp10

0x5839,	// (0x0004768b) slider_cont_pane_cp1_ParamLimits

0x5839,	// (0x0004768b) slider_cont_pane_cp1

0x584d,	// (0x0004769f) slider_form_pane_cp

0x0bd7,	// (0x00042a29) input_focus_pane_g1

0x0bdf,	// (0x00042a31) input_focus_pane_g2

0x0be7,	// (0x00042a39) input_focus_pane_g3

0x0bef,	// (0x00042a41) input_focus_pane_g4

0x0bf7,	// (0x00042a49) input_focus_pane_g5

0x0bff,	// (0x00042a51) input_focus_pane_g6

0x0c07,	// (0x00042a59) input_focus_pane_g7

0x0c0f,	// (0x00042a61) input_focus_pane_g8

0x0c17,	// (0x00042a69) input_focus_pane_g9

0xd6d4,	// (0x0004f526) input_focus_pane_g10

0x0009,

0xf697,	// (0x000514e9) input_focus_pane_g

0x9a88,	// (0x0004b8da) wait_border_pane_g3_copy1

0x5855,	// (0x000476a7) data_form_pane_t1

0xd6d4,	// (0x0004f526) wait_anim_pane_g1_copy1

0x5add,	// (0x0004792f) data_form_wide_pane_t1

0x5874,	// (0x000476c6) list_form_graphic_pane_cp_ParamLimits

0x5874,	// (0x000476c6) list_form_graphic_pane_cp

0xa9fb,	// (0x0004c84d) slider_form_pane_g1

0xaa04,	// (0x0004c856) slider_form_pane_g2

0x0006,

0xf99a,	// (0x000517ec) slider_form_pane_g

0x5874,	// (0x000476c6) list_form_graphic_pane_ParamLimits

0x5874,	// (0x000476c6) list_form_graphic_pane

0x5886,	// (0x000476d8) list_form_graphic_pane_g1

0x588e,	// (0x000476e0) list_form_graphic_pane_t1_ParamLimits

0x588e,	// (0x000476e0) list_form_graphic_pane_t1

0x0567,	// (0x000423b9) list_highlight_pane_cp5_ParamLimits

0x0567,	// (0x000423b9) list_highlight_pane_cp5

0x6897,	// (0x000486e9) find_pane_g1

0x0c1f,	// (0x00042a71) input_find_pane

0x58a3,	// (0x000476f5) input_find_pane_g1_ParamLimits

0x58a3,	// (0x000476f5) input_find_pane_g1

0x58af,	// (0x00047701) input_find_pane_t1_ParamLimits

0x58af,	// (0x00047701) input_find_pane_t1

0x58c4,	// (0x00047716) input_find_pane_t2_ParamLimits

0x58c4,	// (0x00047716) input_find_pane_t2

0x0001,

0xf6ac,	// (0x000514fe) input_find_pane_t_ParamLimits

0xf6ac,	// (0x000514fe) input_find_pane_t

0x0c28,	// (0x00042a7a) input_focus_pane_cp5_ParamLimits

0x0c28,	// (0x00042a7a) input_focus_pane_cp5

0x0c36,	// (0x00042a88) bg_popup_window_pane_cp2_ParamLimits

0x0c36,	// (0x00042a88) bg_popup_window_pane_cp2

0x0c43,	// (0x00042a95) listscroll_menu_pane_ParamLimits

0x0c43,	// (0x00042a95) listscroll_menu_pane

0x68ac,	// (0x000486fe) popup_submenu_window_ParamLimits

0x68ac,	// (0x000486fe) popup_submenu_window

0x0c4f,	// (0x00042aa1) find_popup_pane_g1

0x0c57,	// (0x00042aa9) input_popup_find_pane_cp

0x0c28,	// (0x00042a7a) input_focus_pane_cp4_ParamLimits

0x0c28,	// (0x00042a7a) input_focus_pane_cp4

0x0c61,	// (0x00042ab3) input_popup_find_pane_t1_ParamLimits

0x0c61,	// (0x00042ab3) input_popup_find_pane_t1

0xd6de,	// (0x0004f530) bg_popup_sub_pane_cp

0x0c8f,	// (0x00042ae1) listscroll_popup_sub_pane

0x0c97,	// (0x00042ae9) list_submenu_pane_ParamLimits

0x0c97,	// (0x00042ae9) list_submenu_pane

0x0ca8,	// (0x00042afa) scroll_pane_cp4

0x0cb0,	// (0x00042b02) list_single_popup_submenu_pane_ParamLimits

0x0cb0,	// (0x00042b02) list_single_popup_submenu_pane

0x0cc5,	// (0x00042b17) list_single_popup_submenu_pane_g1

0x0ccd,	// (0x00042b1f) list_single_popup_submenu_pane_t1_ParamLimits

0x0ccd,	// (0x00042b1f) list_single_popup_submenu_pane_t1

0x0567,	// (0x000423b9) bg_active_tab_pane_cp1_ParamLimits

0x0567,	// (0x000423b9) bg_active_tab_pane_cp1

0x68ea,	// (0x0004873c) tabs_2_active_pane_g1

0x68f2,	// (0x00048744) tabs_2_active_pane_t1

0x0567,	// (0x000423b9) bg_passive_tab_pane_cp1_ParamLimits

0x0567,	// (0x000423b9) bg_passive_tab_pane_cp1

0x68ea,	// (0x0004873c) tabs_2_passive_pane_g1

0x68f2,	// (0x00048744) tabs_2_passive_pane_t1

0x2833,	// (0x00044685) bg_active_tab_pane_cp4

0x6904,	// (0x00048756) tabs_2_long_active_pane_t1

0x6917,	// (0x00048769) bg_passive_tab_pane_cp4

0x74a9,	// (0x000492fb) list_single_midp_graphic_pane_g4_ParamLimits

0x2833,	// (0x00044685) bg_active_tab_pane_cp5

0x6923,	// (0x00048775) tabs_3_long_active_pane_t1

0x6917,	// (0x00048769) bg_passive_tab_pane_cp5

0x74a9,	// (0x000492fb) list_single_midp_graphic_pane_g4

0x0567,	// (0x000423b9) bg_popup_window_pane_cp13_ParamLimits

0x0567,	// (0x000423b9) bg_popup_window_pane_cp13

0x0ceb,	// (0x00042b3d) listscroll_popup_fast_pane_ParamLimits

0x0ceb,	// (0x00042b3d) listscroll_popup_fast_pane

0x0cfa,	// (0x00042b4c) grid_popup_fast_pane_ParamLimits

0x0cfa,	// (0x00042b4c) grid_popup_fast_pane

0x0d0c,	// (0x00042b5e) scroll_pane_cp9_ParamLimits

0x0d0c,	// (0x00042b5e) scroll_pane_cp9

0xc38c,	// (0x0004e1de) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc38c,	// (0x0004e1de) list_single_graphic_hl_pane_t1_cp2

0x0d30,	// (0x00042b82) input_focus_pane_cp20_ParamLimits

0x0d30,	// (0x00042b82) input_focus_pane_cp20

0x0d3e,	// (0x00042b90) query_popup_data_pane_t1_ParamLimits

0x0d3e,	// (0x00042b90) query_popup_data_pane_t1

0x0d51,	// (0x00042ba3) query_popup_data_pane_t2_ParamLimits

0x0d51,	// (0x00042ba3) query_popup_data_pane_t2

0x0d97,	// (0x00042be9) query_popup_data_pane_t3_ParamLimits

0x0d97,	// (0x00042be9) query_popup_data_pane_t3

0x0dd8,	// (0x00042c2a) query_popup_data_pane_t4_ParamLimits

0x0dd8,	// (0x00042c2a) query_popup_data_pane_t4

0x0e14,	// (0x00042c66) query_popup_data_pane_t5_ParamLimits

0x0e14,	// (0x00042c66) query_popup_data_pane_t5

0x0004,

0xf6b1,	// (0x00051503) query_popup_data_pane_t_ParamLimits

0xf6b1,	// (0x00051503) query_popup_data_pane_t

0x0bd7,	// (0x00042a29) bg_set_opt_pane_g1

0x0bdf,	// (0x00042a31) bg_set_opt_pane_g2

0x0be7,	// (0x00042a39) bg_set_opt_pane_g3

0x0bef,	// (0x00042a41) bg_set_opt_pane_g4

0x0bf7,	// (0x00042a49) bg_set_opt_pane_g5

0x0bff,	// (0x00042a51) bg_set_opt_pane_g6

0x0c07,	// (0x00042a59) bg_set_opt_pane_g7

0x0c0f,	// (0x00042a61) bg_set_opt_pane_g8

0x0c17,	// (0x00042a69) bg_set_opt_pane_g9

0x0008,

0xf6bc,	// (0x0005150e) bg_set_opt_pane_g

0x6db7,	// (0x00048c09) control_top_pane_stacon_ParamLimits

0x6db7,	// (0x00048c09) control_top_pane_stacon

0x6e0a,	// (0x00048c5c) signal_pane_stacon_ParamLimits

0x6e0a,	// (0x00048c5c) signal_pane_stacon

0x448c,	// (0x000462de) stacon_top_pane_g1_ParamLimits

0x448c,	// (0x000462de) stacon_top_pane_g1

0x6e2f,	// (0x00048c81) title_pane_stacon_ParamLimits

0x6e2f,	// (0x00048c81) title_pane_stacon

0x6e59,	// (0x00048cab) uni_indicator_pane_stacon_ParamLimits

0x6e59,	// (0x00048cab) uni_indicator_pane_stacon

0x6e71,	// (0x00048cc3) battery_pane_stacon_ParamLimits

0x6e71,	// (0x00048cc3) battery_pane_stacon

0x6eb5,	// (0x00048d07) control_bottom_pane_stacon_ParamLimits

0x6eb5,	// (0x00048d07) control_bottom_pane_stacon

0x6ed8,	// (0x00048d2a) navi_pane_stacon_ParamLimits

0x6ed8,	// (0x00048d2a) navi_pane_stacon

0x457a,	// (0x000463cc) stacon_bottom_pane_g1_ParamLimits

0x457a,	// (0x000463cc) stacon_bottom_pane_g1

0x6935,	// (0x00048787) aid_levels_signal_lsc_ParamLimits

0x6935,	// (0x00048787) aid_levels_signal_lsc

0x694c,	// (0x0004879e) signal_pane_stacon_g1_ParamLimits

0x694c,	// (0x0004879e) signal_pane_stacon_g1

0x6960,	// (0x000487b2) signal_pane_stacon_g2_ParamLimits

0x6960,	// (0x000487b2) signal_pane_stacon_g2

0x0001,

0xf6cf,	// (0x00051521) signal_pane_stacon_g_ParamLimits

0xf6cf,	// (0x00051521) signal_pane_stacon_g

0x6995,	// (0x000487e7) title_pane_stacon_t1_ParamLimits

0x6995,	// (0x000487e7) title_pane_stacon_t1

0x0e6c,	// (0x00042cbe) uni_indicator_pane_stacon_g1

0x0e76,	// (0x00042cc8) uni_indicator_pane_stacon_g2

0x0e58,	// (0x00042caa) uni_indicator_pane_stacon_g3

0x0e62,	// (0x00042cb4) uni_indicator_pane_stacon_g4

0x0003,

0xf6db,	// (0x0005152d) uni_indicator_pane_stacon_g

0x69ba,	// (0x0004880c) control_top_pane_stacon_g1

0x69c2,	// (0x00048814) control_top_pane_stacon_t1_ParamLimits

0x69c2,	// (0x00048814) control_top_pane_stacon_t1

0x69f9,	// (0x0004884b) aid_levels_battery_lsc_ParamLimits

0x69f9,	// (0x0004884b) aid_levels_battery_lsc

0x6a11,	// (0x00048863) battery_pane_stacon_g1_ParamLimits

0x6a11,	// (0x00048863) battery_pane_stacon_g1

0x6a24,	// (0x00048876) battery_pane_stacon_g2_ParamLimits

0x6a24,	// (0x00048876) battery_pane_stacon_g2

0x0001,

0xf6e4,	// (0x00051536) battery_pane_stacon_g_ParamLimits

0xf6e4,	// (0x00051536) battery_pane_stacon_g

0x6a62,	// (0x000488b4) navi_icon_pane_stacon

0x6a76,	// (0x000488c8) navi_navi_pane_stacon

0x6a62,	// (0x000488b4) navi_text_pane_stacon

0x69ba,	// (0x0004880c) control_bottom_pane_stacon_g1

0x6a8c,	// (0x000488de) control_bottom_pane_stacon_t1_ParamLimits

0x6a8c,	// (0x000488de) control_bottom_pane_stacon_t1

0x6ac3,	// (0x00048915) grid_app_pane_ParamLimits

0x6ac3,	// (0x00048915) grid_app_pane

0x6ae7,	// (0x00048939) scroll_pane_cp15_ParamLimits

0x6ae7,	// (0x00048939) scroll_pane_cp15

0x6afc,	// (0x0004894e) cell_app_pane_ParamLimits

0x6afc,	// (0x0004894e) cell_app_pane

0x6b28,	// (0x0004897a) cell_app_pane_g1_ParamLimits

0x6b28,	// (0x0004897a) cell_app_pane_g1

0x0e9a,	// (0x00042cec) cell_app_pane_g2_ParamLimits

0x0e9a,	// (0x00042cec) cell_app_pane_g2

0x0001,

0xf6e9,	// (0x0005153b) cell_app_pane_g_ParamLimits

0xf6e9,	// (0x0005153b) cell_app_pane_g

0x0ea6,	// (0x00042cf8) cell_app_pane_t1_ParamLimits

0x0ea6,	// (0x00042cf8) cell_app_pane_t1

0x0ebd,	// (0x00042d0f) grid_highlight_pane_ParamLimits

0x0ebd,	// (0x00042d0f) grid_highlight_pane

0x0bd7,	// (0x00042a29) cell_highlight_pane_g1

0x0bdf,	// (0x00042a31) cell_highlight_pane_g2

0x0be7,	// (0x00042a39) cell_highlight_pane_g3

0x0bef,	// (0x00042a41) cell_highlight_pane_g4

0x0bf7,	// (0x00042a49) cell_highlight_pane_g5

0x0bff,	// (0x00042a51) cell_highlight_pane_g6

0x0c07,	// (0x00042a59) cell_highlight_pane_g7

0x0c0f,	// (0x00042a61) cell_highlight_pane_g8

0x0c17,	// (0x00042a69) cell_highlight_pane_g9

0xd6d4,	// (0x0004f526) cell_highlight_pane_g10

0x0009,

0xf697,	// (0x000514e9) cell_highlight_pane_g

0x0ece,	// (0x00042d20) bg_scroll_pane

0x6b5b,	// (0x000489ad) scroll_handle_pane

0x22e0,	// (0x00044132) scroll_bg_pane_g1

0x22f5,	// (0x00044147) scroll_bg_pane_g2

0x230d,	// (0x0004415f) scroll_bg_pane_g3

0x0002,

0xf6ee,	// (0x00051540) scroll_bg_pane_g

0x2322,	// (0x00044174) scroll_handle_focus_pane_ParamLimits

0x2322,	// (0x00044174) scroll_handle_focus_pane

0x22e0,	// (0x00044132) scroll_handle_pane_g1

0x232f,	// (0x00044181) scroll_handle_pane_g2

0x230d,	// (0x0004415f) scroll_handle_pane_g3

0x0002,

0xf6f5,	// (0x00051547) scroll_handle_pane_g

0x0c28,	// (0x00042a7a) bg_popup_sub_pane_cp21_ParamLimits

0x0c28,	// (0x00042a7a) bg_popup_sub_pane_cp21

0x2343,	// (0x00044195) popup_fep_japan_predictive_window_t1_ParamLimits

0x2343,	// (0x00044195) popup_fep_japan_predictive_window_t1

0x235a,	// (0x000441ac) popup_fep_japan_predictive_window_t2_ParamLimits

0x235a,	// (0x000441ac) popup_fep_japan_predictive_window_t2

0x238d,	// (0x000441df) popup_fep_japan_predictive_window_t3_ParamLimits

0x238d,	// (0x000441df) popup_fep_japan_predictive_window_t3

0x0002,

0xf6fc,	// (0x0005154e) popup_fep_japan_predictive_window_t_ParamLimits

0xf6fc,	// (0x0005154e) popup_fep_japan_predictive_window_t

0xd6de,	// (0x0004f530) bg_popup_sub_pane_cp23

0x23c4,	// (0x00044216) listscroll_japin_cand_pane

0x23cc,	// (0x0004421e) popup_fep_japan_candidate_window_t1

0x23da,	// (0x0004422c) candidate_pane_ParamLimits

0x23da,	// (0x0004422c) candidate_pane

0x23ec,	// (0x0004423e) scroll_pane_cp30

0x23f6,	// (0x00044248) list_single_popup_jap_candidate_pane_ParamLimits

0x23f6,	// (0x00044248) list_single_popup_jap_candidate_pane

0xd6de,	// (0x0004f530) list_highlight_pane_cp30

0x240a,	// (0x0004425c) list_single_popup_jap_candidate_pane_t1

0x6b84,	// (0x000489d6) level_1_signal

0x6b91,	// (0x000489e3) level_2_signal

0x6b9e,	// (0x000489f0) level_3_signal

0x6bab,	// (0x000489fd) level_4_signal

0x6bb8,	// (0x00048a0a) level_5_signal

0x6bc5,	// (0x00048a17) level_6_signal

0x6bd2,	// (0x00048a24) level_7_signal

0x6b84,	// (0x000489d6) level_1_battery

0x6b91,	// (0x000489e3) level_2_battery

0x6b9e,	// (0x000489f0) level_3_battery

0x6bab,	// (0x000489fd) level_4_battery

0x6bb8,	// (0x00048a0a) level_5_battery

0x6bc5,	// (0x00048a17) level_6_battery

0x6bd2,	// (0x00048a24) level_7_battery

0x2431,	// (0x00044283) list_menu_pane_ParamLimits

0x2431,	// (0x00044283) list_menu_pane

0x2447,	// (0x00044299) scroll_pane_cp25_ParamLimits

0x2447,	// (0x00044299) scroll_pane_cp25

0x2460,	// (0x000442b2) list_double2_graphic_pane_cp2_ParamLimits

0x2460,	// (0x000442b2) list_double2_graphic_pane_cp2

0x2460,	// (0x000442b2) list_double2_large_graphic_pane_cp2_ParamLimits

0x2460,	// (0x000442b2) list_double2_large_graphic_pane_cp2

0x2460,	// (0x000442b2) list_double2_pane_cp2_ParamLimits

0x2460,	// (0x000442b2) list_double2_pane_cp2

0x2460,	// (0x000442b2) list_double_graphic_pane_cp2_ParamLimits

0x2460,	// (0x000442b2) list_double_graphic_pane_cp2

0x2460,	// (0x000442b2) list_double_large_graphic_pane_cp2_ParamLimits

0x2460,	// (0x000442b2) list_double_large_graphic_pane_cp2

0x2460,	// (0x000442b2) list_double_number_pane_cp2_ParamLimits

0x2460,	// (0x000442b2) list_double_number_pane_cp2

0x2460,	// (0x000442b2) list_double_pane_cp2_ParamLimits

0x2460,	// (0x000442b2) list_double_pane_cp2

0x6c14,	// (0x00048a66) list_single_2graphic_pane_cp2_ParamLimits

0x6c14,	// (0x00048a66) list_single_2graphic_pane_cp2

0x6c14,	// (0x00048a66) list_single_graphic_heading_pane_cp2_ParamLimits

0x6c14,	// (0x00048a66) list_single_graphic_heading_pane_cp2

0x6c14,	// (0x00048a66) list_single_graphic_pane_cp2_ParamLimits

0x6c14,	// (0x00048a66) list_single_graphic_pane_cp2

0x6c14,	// (0x00048a66) list_single_heading_pane_cp2_ParamLimits

0x6c14,	// (0x00048a66) list_single_heading_pane_cp2

0x2470,	// (0x000442c2) list_single_large_graphic_pane_cp2_ParamLimits

0x2470,	// (0x000442c2) list_single_large_graphic_pane_cp2

0x6c14,	// (0x00048a66) list_single_number_heading_pane_cp2_ParamLimits

0x6c14,	// (0x00048a66) list_single_number_heading_pane_cp2

0x6c14,	// (0x00048a66) list_single_number_pane_cp2_ParamLimits

0x6c14,	// (0x00048a66) list_single_number_pane_cp2

0x6c14,	// (0x00048a66) list_single_pane_cp2_ParamLimits

0x6c14,	// (0x00048a66) list_single_pane_cp2

0x4248,	// (0x0004609a) bg_popup_sub_pane_cp22

0x6cfd,	// (0x00048b4f) popup_side_volume_key_window_g1

0x6d27,	// (0x00048b79) popup_side_volume_key_window_t1

0x6d45,	// (0x00048b97) volume_small_pane_cp1

0xd738,	// (0x0004f58a) bg_popup_sub_pane_cp24_ParamLimits

0xd738,	// (0x0004f58a) bg_popup_sub_pane_cp24

0x42bd,	// (0x0004610f) fep_china_uni_candidate_pane_ParamLimits

0x42bd,	// (0x0004610f) fep_china_uni_candidate_pane

0x42d1,	// (0x00046123) fep_china_uni_entry_pane

0x42e1,	// (0x00046133) popup_fep_china_uni_window_g1

0x42fd,	// (0x0004614f) fep_china_uni_entry_pane_g1

0x4307,	// (0x00046159) fep_china_uni_entry_pane_g2

0x0001,

0xf72d,	// (0x0005157f) fep_china_uni_entry_pane_g

0x4311,	// (0x00046163) fep_entry_item_pane

0x431b,	// (0x0004616d) fep_candidate_item_pane

0x4323,	// (0x00046175) fep_china_uni_candidate_pane_g1

0x432d,	// (0x0004617f) fep_china_uni_candidate_pane_g2

0x4335,	// (0x00046187) fep_china_uni_candidate_pane_g3

0x433d,	// (0x0004618f) fep_china_uni_candidate_pane_g4

0x0003,

0xf732,	// (0x00051584) fep_china_uni_candidate_pane_g

0xd6d4,	// (0x0004f526) fep_entry_item_pane_g1

0x4347,	// (0x00046199) fep_entry_item_pane_t1_ParamLimits

0x4347,	// (0x00046199) fep_entry_item_pane_t1

0x435d,	// (0x000461af) fep_candidate_item_pane_t1_ParamLimits

0x435d,	// (0x000461af) fep_candidate_item_pane_t1

0x4372,	// (0x000461c4) fep_candidate_item_pane_t2_ParamLimits

0x4372,	// (0x000461c4) fep_candidate_item_pane_t2

0x0001,

0xf73b,	// (0x0005158d) fep_candidate_item_pane_t_ParamLimits

0xf73b,	// (0x0005158d) fep_candidate_item_pane_t

0x0567,	// (0x000423b9) list_highlight_pane_cp31_ParamLimits

0x0567,	// (0x000423b9) list_highlight_pane_cp31

0x4384,	// (0x000461d6) level_1_signal_lsc

0x438d,	// (0x000461df) level_2_signal_lsc

0x4396,	// (0x000461e8) level_3_signal_lsc

0x439f,	// (0x000461f1) level_4_signal_lsc

0x43a8,	// (0x000461fa) level_5_signal_lsc

0x43b1,	// (0x00046203) level_6_signal_lsc

0x43ba,	// (0x0004620c) level_7_signal_lsc

0x43ba,	// (0x0004620c) level_1_battery_lsc

0x43c3,	// (0x00046215) level_2_battery_lsc

0x43cc,	// (0x0004621e) level_3_battery_lsc

0x43d5,	// (0x00046227) level_4_battery_lsc

0x43de,	// (0x00046230) level_5_battery_lsc

0x43e7,	// (0x00046239) level_6_battery_lsc

0x4384,	// (0x000461d6) level_7_battery_lsc

0x43f0,	// (0x00046242) scroll_handle_focus_pane_g1

0x43f9,	// (0x0004624b) scroll_handle_focus_pane_g2

0x4402,	// (0x00046254) scroll_handle_focus_pane_g3

0x0002,

0xf740,	// (0x00051592) scroll_handle_focus_pane_g

0x58d9,	// (0x0004772b) list_single_2graphic_pane_g1_ParamLimits

0x58d9,	// (0x0004772b) list_single_2graphic_pane_g1

0x67fd,	// (0x0004864f) list_single_2graphic_pane_g2_ParamLimits

0x67fd,	// (0x0004864f) list_single_2graphic_pane_g2

0x67df,	// (0x00048631) list_single_2graphic_pane_g3_ParamLimits

0x67df,	// (0x00048631) list_single_2graphic_pane_g3

0x6d4d,	// (0x00048b9f) list_single_2graphic_pane_g4_ParamLimits

0x6d4d,	// (0x00048b9f) list_single_2graphic_pane_g4

0x0003,

0xf747,	// (0x00051599) list_single_2graphic_pane_g_ParamLimits

0xf747,	// (0x00051599) list_single_2graphic_pane_g

0x58e5,	// (0x00047737) list_single_2graphic_pane_t1_ParamLimits

0x58e5,	// (0x00047737) list_single_2graphic_pane_t1

0x6d59,	// (0x00048bab) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6d59,	// (0x00048bab) list_double2_graphic_large_graphic_pane_g1

0x5466,	// (0x000472b8) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5466,	// (0x000472b8) list_double2_graphic_large_graphic_pane_g2

0x685e,	// (0x000486b0) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x685e,	// (0x000486b0) list_double2_graphic_large_graphic_pane_g3

0x5913,	// (0x00047765) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5913,	// (0x00047765) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf750,	// (0x000515a2) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf750,	// (0x000515a2) list_double2_graphic_large_graphic_pane_g

0x591f,	// (0x00047771) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x591f,	// (0x00047771) list_double2_graphic_large_graphic_pane_t1

0x5935,	// (0x00047787) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5935,	// (0x00047787) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf759,	// (0x000515ab) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf759,	// (0x000515ab) list_double2_graphic_large_graphic_pane_t

0x45d8,	// (0x0004642a) popup_fast_swap_window_ParamLimits

0x45d8,	// (0x0004642a) popup_fast_swap_window

0x45f6,	// (0x00046448) popup_side_volume_key_window

0x4614,	// (0x00046466) stacon_top_pane

0x461e,	// (0x00046470) status_pane_ParamLimits

0x461e,	// (0x00046470) status_pane

0x4614,	// (0x00046466) status_small_pane

0xd6de,	// (0x0004f530) control_pane

0xd6de,	// (0x0004f530) stacon_bottom_pane

0x0b5f,	// (0x000429b1) scroll_pane_cp121

0x0b56,	// (0x000429a8) set_content_pane

0x6d6b,	// (0x00048bbd) bg_active_tab_pane_g1_cp1

0x440b,	// (0x0004625d) bg_active_tab_pane_g2_cp1

0x6d74,	// (0x00048bc6) bg_active_tab_pane_g3_cp1

0x6d6b,	// (0x00048bbd) bg_passive_tab_pane_g1_cp1

0x440b,	// (0x0004625d) bg_passive_tab_pane_g2_cp1

0x6d74,	// (0x00048bc6) bg_passive_tab_pane_g3_cp1

0x6d7d,	// (0x00048bcf) bg_active_tab_pane_g1_cp2

0x440b,	// (0x0004625d) bg_active_tab_pane_g2_cp2

0x6d86,	// (0x00048bd8) bg_active_tab_pane_g3_cp2

0x6d7d,	// (0x00048bcf) bg_passive_tab_pane_g1_cp2

0x440b,	// (0x0004625d) bg_passive_tab_pane_g2_cp2

0x6d86,	// (0x00048bd8) bg_passive_tab_pane_g3_cp2

0x6d8f,	// (0x00048be1) bg_active_tab_pane_g1_cp3

0x440b,	// (0x0004625d) bg_active_tab_pane_g2_cp3

0x6d98,	// (0x00048bea) bg_active_tab_pane_g3_cp3

0x6d8f,	// (0x00048be1) bg_passive_tab_pane_g1_cp3

0x440b,	// (0x0004625d) bg_passive_tab_pane_g2_cp3

0x6d98,	// (0x00048bea) bg_passive_tab_pane_g3_cp3

0x6da1,	// (0x00048bf3) bg_active_tab_pane_g1_cp4

0x440b,	// (0x0004625d) bg_active_tab_pane_g2_cp4

0x6dac,	// (0x00048bfe) bg_active_tab_pane_g3_cp4

0x6da1,	// (0x00048bf3) bg_passive_tab_pane_g1_cp4

0x440b,	// (0x0004625d) bg_passive_tab_pane_g2_cp4

0x6dac,	// (0x00048bfe) bg_passive_tab_pane_g3_cp4

0x459f,	// (0x000463f1) bg_active_tab_pane_g1_cp5

0x440b,	// (0x0004625d) bg_active_tab_pane_g2_cp5

0x4596,	// (0x000463e8) bg_active_tab_pane_g3_cp5

0x459f,	// (0x000463f1) bg_passive_tab_pane_g1_cp5

0x440b,	// (0x0004625d) bg_passive_tab_pane_g2_cp5

0x4596,	// (0x000463e8) bg_passive_tab_pane_g3_cp5

0x6efb,	// (0x00048d4d) list_set_graphic_pane_ParamLimits

0x6efb,	// (0x00048d4d) list_set_graphic_pane

0xd6de,	// (0x0004f530) bg_set_opt_pane_cp4

0x6f10,	// (0x00048d62) list_set_graphic_pane_g1_ParamLimits

0x6f10,	// (0x00048d62) list_set_graphic_pane_g1

0x6f1c,	// (0x00048d6e) list_set_graphic_pane_g2_ParamLimits

0x6f1c,	// (0x00048d6e) list_set_graphic_pane_g2

0x0001,

0xf75e,	// (0x000515b0) list_set_graphic_pane_g_ParamLimits

0xf75e,	// (0x000515b0) list_set_graphic_pane_g

0x0009,

0xfadd,	// (0x0005192f) volume_small_pane_cp_g

0x6f40,	// (0x00048d92) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x6f40,	// (0x00048d92) list_double2_large_graphic_pane_g1_cp2

0x6f4e,	// (0x00048da0) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x6f4e,	// (0x00048da0) list_double2_large_graphic_pane_g2_cp2

0x45a8,	// (0x000463fa) list_double2_large_graphic_pane_g3_cp2

0x45b0,	// (0x00046402) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x45b0,	// (0x00046402) list_double2_large_graphic_pane_t1_cp2

0x45c6,	// (0x00046418) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x45c6,	// (0x00046418) list_double2_large_graphic_pane_t2_cp2

0xa56c,	// (0x0004c3be) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa56c,	// (0x0004c3be) list_double_large_graphic_pane_g1_cp2

0xa57f,	// (0x0004c3d1) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa57f,	// (0x0004c3d1) list_double_large_graphic_pane_g2_cp2

0x46ff,	// (0x00046551) list_double_large_graphic_pane_g3_cp2

0xa590,	// (0x0004c3e2) list_double_large_graphic_pane_g4_cp

0xa598,	// (0x0004c3ea) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa598,	// (0x0004c3ea) list_double_large_graphic_pane_t1_cp2

0xa5af,	// (0x0004c401) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa5af,	// (0x0004c401) list_double_large_graphic_pane_t2_cp2

0x6f5f,	// (0x00048db1) list_double2_graphic_pane_g1_cp2_ParamLimits

0x6f5f,	// (0x00048db1) list_double2_graphic_pane_g1_cp2

0x6f6d,	// (0x00048dbf) list_double2_graphic_pane_g2_cp2_ParamLimits

0x6f6d,	// (0x00048dbf) list_double2_graphic_pane_g2_cp2

0x6f7e,	// (0x00048dd0) list_double2_graphic_pane_g3_cp2

0x462c,	// (0x0004647e) list_double2_graphic_pane_t1_cp2_ParamLimits

0x462c,	// (0x0004647e) list_double2_graphic_pane_t1_cp2

0x4642,	// (0x00046494) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4642,	// (0x00046494) list_double2_graphic_pane_t2_cp2

0x4654,	// (0x000464a6) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4654,	// (0x000464a6) list_single_number_heading_pane_g1_cp2

0x4660,	// (0x000464b2) list_single_number_heading_pane_g2_cp2

0x4668,	// (0x000464ba) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4668,	// (0x000464ba) list_single_number_heading_pane_t1_cp2

0x6f88,	// (0x00048dda) list_single_number_heading_pane_t2_cp2_ParamLimits

0x6f88,	// (0x00048dda) list_single_number_heading_pane_t2_cp2

0x467e,	// (0x000464d0) list_single_number_heading_pane_t3_cp2_ParamLimits

0x467e,	// (0x000464d0) list_single_number_heading_pane_t3_cp2

0x4654,	// (0x000464a6) list_single_heading_pane_g1_cp2_ParamLimits

0x4654,	// (0x000464a6) list_single_heading_pane_g1_cp2

0x4660,	// (0x000464b2) list_single_heading_pane_g2_cp2

0x4668,	// (0x000464ba) list_single_heading_pane_t1_cp2_ParamLimits

0x4668,	// (0x000464ba) list_single_heading_pane_t1_cp2

0xa366,	// (0x0004c1b8) list_single_heading_pane_t2_cp2_ParamLimits

0xa366,	// (0x0004c1b8) list_single_heading_pane_t2_cp2

0xa2ae,	// (0x0004c100) list_double_graphic_pane_g1_cp2_ParamLimits

0xa2ae,	// (0x0004c100) list_double_graphic_pane_g1_cp2

0xa2ba,	// (0x0004c10c) list_double_graphic_pane_g2_cp2_ParamLimits

0xa2ba,	// (0x0004c10c) list_double_graphic_pane_g2_cp2

0xa2c9,	// (0x0004c11b) list_double_graphic_pane_g3_cp2

0xa2d1,	// (0x0004c123) list_double_graphic_pane_t1_cp2_ParamLimits

0xa2d1,	// (0x0004c123) list_double_graphic_pane_t1_cp2

0xa2e7,	// (0x0004c139) list_double_graphic_pane_t2_cp2_ParamLimits

0xa2e7,	// (0x0004c139) list_double_graphic_pane_t2_cp2

0x46f3,	// (0x00046545) list_double_number_pane_g1_cp2_ParamLimits

0x46f3,	// (0x00046545) list_double_number_pane_g1_cp2

0x46ff,	// (0x00046551) list_double_number_pane_g2_cp2

0xa272,	// (0x0004c0c4) list_double_number_pane_t1_cp2_ParamLimits

0xa272,	// (0x0004c0c4) list_double_number_pane_t1_cp2

0xa286,	// (0x0004c0d8) list_double_number_pane_t2_cp2_ParamLimits

0xa286,	// (0x0004c0d8) list_double_number_pane_t2_cp2

0xa29c,	// (0x0004c0ee) list_double_number_pane_t3_cp2_ParamLimits

0xa29c,	// (0x0004c0ee) list_double_number_pane_t3_cp2

0xa15b,	// (0x0004bfad) list_single_graphic_pane_g1_cp2_ParamLimits

0xa15b,	// (0x0004bfad) list_single_graphic_pane_g1_cp2

0x473f,	// (0x00046591) list_single_graphic_pane_g2_cp2_ParamLimits

0x473f,	// (0x00046591) list_single_graphic_pane_g2_cp2

0x6fb6,	// (0x00048e08) list_single_graphic_pane_g3_cp2

0xa131,	// (0x0004bf83) list_single_graphic_pane_t1_cp2_ParamLimits

0xa131,	// (0x0004bf83) list_single_graphic_pane_t1_cp2

0x473f,	// (0x00046591) list_single_number_pane_g1_cp2_ParamLimits

0x473f,	// (0x00046591) list_single_number_pane_g1_cp2

0x6fb6,	// (0x00048e08) list_single_number_pane_g2_cp2

0xa131,	// (0x0004bf83) list_single_number_pane_t1_cp2_ParamLimits

0xa131,	// (0x0004bf83) list_single_number_pane_t1_cp2

0xa147,	// (0x0004bf99) list_single_number_pane_t2_cp2_ParamLimits

0xa147,	// (0x0004bf99) list_single_number_pane_t2_cp2

0x6f4e,	// (0x00048da0) list_double2_pane_g1_cp2_ParamLimits

0x6f4e,	// (0x00048da0) list_double2_pane_g1_cp2

0x45a8,	// (0x000463fa) list_double2_pane_g2_cp2

0x46cb,	// (0x0004651d) list_double2_pane_t1_cp2_ParamLimits

0x46cb,	// (0x0004651d) list_double2_pane_t1_cp2

0x46e1,	// (0x00046533) list_double2_pane_t2_cp2_ParamLimits

0x46e1,	// (0x00046533) list_double2_pane_t2_cp2

0x46f3,	// (0x00046545) list_double_pane_g1_cp2_ParamLimits

0x46f3,	// (0x00046545) list_double_pane_g1_cp2

0x46ff,	// (0x00046551) list_double_pane_g2_cp2

0x4707,	// (0x00046559) list_double_pane_t1_cp2_ParamLimits

0x4707,	// (0x00046559) list_double_pane_t1_cp2

0x471d,	// (0x0004656f) list_double_pane_t2_cp2_ParamLimits

0x471d,	// (0x0004656f) list_double_pane_t2_cp2

0x472f,	// (0x00046581) list_single_pane_cp2_g3

0x473f,	// (0x00046591) list_single_pane_g1_cp2_ParamLimits

0x473f,	// (0x00046591) list_single_pane_g1_cp2

0x6fb6,	// (0x00048e08) list_single_pane_g2_cp2

0x6fbe,	// (0x00048e10) list_single_pane_t1_cp2_ParamLimits

0x6fbe,	// (0x00048e10) list_single_pane_t1_cp2

0x6fd6,	// (0x00048e28) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x6fd6,	// (0x00048e28) list_single_large_graphic_pane_g1_cp2

0x6fe4,	// (0x00048e36) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x6fe4,	// (0x00048e36) list_single_large_graphic_pane_g2_cp2

0x6ff0,	// (0x00048e42) list_single_large_graphic_pane_g3_cp2

0x6ff8,	// (0x00048e4a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x6ff8,	// (0x00048e4a) list_single_large_graphic_pane_g4_cp1

0x7012,	// (0x00048e64) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x7012,	// (0x00048e64) list_single_large_graphic_pane_t1_cp2

0xa0fb,	// (0x0004bf4d) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa0fb,	// (0x0004bf4d) list_single_graphic_heading_pane_g1_cp2

0xa0c8,	// (0x0004bf1a) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa0c8,	// (0x0004bf1a) list_single_graphic_heading_pane_g4_cp2

0x6fb6,	// (0x00048e08) list_single_graphic_heading_pane_g5_cp2

0xa107,	// (0x0004bf59) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa107,	// (0x0004bf59) list_single_graphic_heading_pane_t1_cp2

0xa11d,	// (0x0004bf6f) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa11d,	// (0x0004bf6f) list_single_graphic_heading_pane_t2_cp2

0xa0bc,	// (0x0004bf0e) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa0bc,	// (0x0004bf0e) list_single_2graphic_pane_g1_cp2

0xa0c8,	// (0x0004bf1a) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa0c8,	// (0x0004bf1a) list_single_2graphic_pane_g2_cp2

0x6fb6,	// (0x00048e08) list_single_2graphic_pane_g3_cp2

0xa0d9,	// (0x0004bf2b) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa0d9,	// (0x0004bf2b) list_single_2graphic_pane_g4_cp2

0xa0e5,	// (0x0004bf37) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa0e5,	// (0x0004bf37) list_single_2graphic_pane_t1_cp2

0xd6d4,	// (0x0004f526) list_highlight_pane_g10_cp1

0x9c94,	// (0x0004bae6) list_highlight_pane_g1_cp1

0x9c9c,	// (0x0004baee) list_highlight_pane_g2_cp1

0x9ca4,	// (0x0004baf6) list_highlight_pane_g3_cp1

0x9cac,	// (0x0004bafe) list_highlight_pane_g4_cp1

0x9cb4,	// (0x0004bb06) list_highlight_pane_g5_cp1

0x9cbc,	// (0x0004bb0e) list_highlight_pane_g6_cp1

0x9cc4,	// (0x0004bb16) list_highlight_pane_g7_cp1

0x9ccc,	// (0x0004bb1e) list_highlight_pane_g8_cp1

0x9cd4,	// (0x0004bb26) list_highlight_pane_g9_cp1

0x9bb4,	// (0x0004ba06) form_field_slider_pane_t3

0x9bc2,	// (0x0004ba14) form_field_slider_pane_t4

0x9bd0,	// (0x0004ba22) slider_form_pane_ParamLimits

0x9bd0,	// (0x0004ba22) slider_form_pane

0xd6de,	// (0x0004f530) control_abbreviations

0xd6de,	// (0x0004f530) control_conventions

0xd6de,	// (0x0004f530) control_definitions

0xd6de,	// (0x0004f530) format_table_attribute

0xa3bc,	// (0x0004c20e) bg_popup_preview_window_pane_g9

0xd6de,	// (0x0004f530) format_table_data2

0xd6de,	// (0x0004f530) format_table_data3

0xd6de,	// (0x0004f530) format_table_data_example

0x0008,

0xd6de,	// (0x0004f530) intro_purpose

0xf8fa,	// (0x0005174c) bg_popup_preview_window_pane_g

0xd6de,	// (0x0004f530) texts_category

0xd6de,	// (0x0004f530) texts_graphics

0x7028,	// (0x00048e7a) text_digital

0x7037,	// (0x00048e89) text_primary

0x7046,	// (0x00048e98) text_primary_small

0x7055,	// (0x00048ea7) text_secondary

0x7064,	// (0x00048eb6) text_title

0xab42,	// (0x0004c994) bg_passive_tab_pane_g1_cp3_srt

0x440b,	// (0x0004625d) bg_passive_tab_pane_g2_cp3_srt

0xab4b,	// (0x0004c99d) bg_passive_tab_pane_g3_cp3_srt

0x0567,	// (0x000423b9) bg_active_tab_pane_cp3_srt_ParamLimits

0x0567,	// (0x000423b9) bg_active_tab_pane_cp3_srt

0xab54,	// (0x0004c9a6) tabs_4_active_pane_srt_g1

0xab5c,	// (0x0004c9ae) tabs_4_active_pane_srt_t1_ParamLimits

0xab5c,	// (0x0004c9ae) tabs_4_active_pane_srt_t1

0xab42,	// (0x0004c994) bg_active_tab_pane_g1_cp3_copy1

0x440b,	// (0x0004625d) bg_active_tab_pane_g2_cp3_copy1

0xab4b,	// (0x0004c99d) bg_active_tab_pane_g3_cp3_copy1

0x0567,	// (0x000423b9) tabs_2_long_active_pane_srt_ParamLimits

0x0567,	// (0x000423b9) tabs_2_long_active_pane_srt

0x0567,	// (0x000423b9) tabs_2_long_passive_pane_srt_ParamLimits

0x0567,	// (0x000423b9) tabs_2_long_passive_pane_srt

0x6917,	// (0x00048769) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6917,	// (0x00048769) bg_passive_tab_pane_cp4_srt

0xa80c,	// (0x0004c65e) bg_passive_tab_pane_g1_cp4_srt

0x440b,	// (0x0004625d) bg_passive_tab_pane_g2_cp4_srt

0xa815,	// (0x0004c667) bg_passive_tab_pane_g3_cp4_srt

0x2833,	// (0x00044685) bg_active_tab_pane_cp4_srt_ParamLimits

0x2833,	// (0x00044685) bg_active_tab_pane_cp4_srt

0xa81e,	// (0x0004c670) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa81e,	// (0x0004c670) tabs_2_long_active_pane_srt_t1

0xa80c,	// (0x0004c65e) bg_active_tab_pane_g1_cp4_srt

0x440b,	// (0x0004625d) bg_active_tab_pane_g2_cp4_srt

0xa815,	// (0x0004c667) bg_active_tab_pane_g3_cp4_srt

0xd738,	// (0x0004f58a) tabs_3_long_active_pane_srt_ParamLimits

0xd738,	// (0x0004f58a) tabs_3_long_active_pane_srt

0xd738,	// (0x0004f58a) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xd738,	// (0x0004f58a) tabs_3_long_passive_pane_cp_srt

0xd738,	// (0x0004f58a) tabs_3_long_passive_pane_srt_ParamLimits

0xd738,	// (0x0004f58a) tabs_3_long_passive_pane_srt

0x6917,	// (0x00048769) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6917,	// (0x00048769) bg_passive_tab_pane_cp5_srt

0x459f,	// (0x000463f1) bg_passive_tab_pane_g1_cp5_srt

0x440b,	// (0x0004625d) bg_passive_tab_pane_g2_cp5_srt

0x4596,	// (0x000463e8) bg_passive_tab_pane_g3_cp5_srt

0x2833,	// (0x00044685) bg_active_tab_pane_cp5_srt_ParamLimits

0x2833,	// (0x00044685) bg_active_tab_pane_cp5_srt

0xa7fa,	// (0x0004c64c) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa7fa,	// (0x0004c64c) tabs_3_long_active_pane_srt_t1

0x459f,	// (0x000463f1) bg_active_tab_pane_g1_cp5_srt

0x440b,	// (0x0004625d) bg_active_tab_pane_g2_cp5_srt

0x4596,	// (0x000463e8) bg_active_tab_pane_g3_cp5_srt

0xa7ec,	// (0x0004c63e) navi_text_pane_srt_t1

0xa7e4,	// (0x0004c636) navi_icon_pane_srt_g1

0x72d8,	// (0x0004912a) midp_editing_number_pane_srt

0x7073,	// (0x00048ec5) midp_ticker_pane_srt

0x72e0,	// (0x00049132) midp_ticker_pane_srt_g1

0x72e8,	// (0x0004913a) midp_ticker_pane_srt_g2

0x0001,

0xf77d,	// (0x000515cf) midp_ticker_pane_srt_g

0x72f0,	// (0x00049142) midp_ticker_pane_srt_t1

0xa7d5,	// (0x0004c627) midp_editing_number_pane_t1_copy1

0x6917,	// (0x00048769) listscroll_midp_pane

0x6917,	// (0x00048769) midp_form_pane

0x70dd,	// (0x00048f2f) midp_info_popup_window_ParamLimits

0x70dd,	// (0x00048f2f) midp_info_popup_window

0x0c28,	// (0x00042a7a) bg_popup_sub_pane_cp50_ParamLimits

0x0c28,	// (0x00042a7a) bg_popup_sub_pane_cp50

0x98ca,	// (0x0004b71c) listscroll_midp_info_pane_ParamLimits

0x98ca,	// (0x0004b71c) listscroll_midp_info_pane

0x98b2,	// (0x0004b704) listscroll_form_midp_pane_ParamLimits

0x98b2,	// (0x0004b704) listscroll_form_midp_pane

0x98be,	// (0x0004b710) scroll_bar_cp050

0x9892,	// (0x0004b6e4) list_midp_pane

0xb609,	// (0x0004d45b) signal_pane_g2_cp

0x97cc,	// (0x0004b61e) listscroll_midp_info_pane_t1_ParamLimits

0x97cc,	// (0x0004b61e) listscroll_midp_info_pane_t1

0x97e4,	// (0x0004b636) listscroll_midp_info_pane_t2_ParamLimits

0x97e4,	// (0x0004b636) listscroll_midp_info_pane_t2

0x9822,	// (0x0004b674) listscroll_midp_info_pane_t3_ParamLimits

0x9822,	// (0x0004b674) listscroll_midp_info_pane_t3

0x985c,	// (0x0004b6ae) listscroll_midp_info_pane_t4_ParamLimits

0x985c,	// (0x0004b6ae) listscroll_midp_info_pane_t4

0x0003,

0xf835,	// (0x00051687) listscroll_midp_info_pane_t_ParamLimits

0xf835,	// (0x00051687) listscroll_midp_info_pane_t

0x0ca8,	// (0x00042afa) scroll_pane_cp21

0x9766,	// (0x0004b5b8) form_midp_field_choice_group_pane

0x976f,	// (0x0004b5c1) form_midp_field_text_pane

0x97b2,	// (0x0004b604) form_midp_field_time_pane

0x97ba,	// (0x0004b60c) form_midp_gauge_slider_pane

0x97c3,	// (0x0004b615) form_midp_gauge_wait_pane

0xd6de,	// (0x0004f530) form_midp_image_pane

0x5a96,	// (0x000478e8) list_single_midp_pane_ParamLimits

0x5a96,	// (0x000478e8) list_single_midp_pane

0x972a,	// (0x0004b57c) form_midp_field_text_pane_t1

0x9516,	// (0x0004b368) input_focus_pane_cp050

0x9755,	// (0x0004b5a7) list_midp_form_text_pane

0x96f9,	// (0x0004b54b) form_midp_field_choice_group_pane_t1

0x9707,	// (0x0004b559) input_focus_pane_cp051

0x971b,	// (0x0004b56d) list_midp_choice_pane

0xd6de,	// (0x0004f530) status_idle_pane

0x96dd,	// (0x0004b52f) form_midp_field_time_pane_t1

0xd6d4,	// (0x0004f526) wait_anim_pane_g2_copy1

0x96eb,	// (0x0004b53d) form_midp_field_time_pane_t2

0x0001,

0x718d,	// (0x00048fdf) aid_navinavi_width_2_pane

0xf830,	// (0x00051682) form_midp_field_time_pane_t

0xd6de,	// (0x0004f530) input_focus_pane_cp052

0xd6de,	// (0x0004f530) bg_input_focus_pane_cp040

0x969d,	// (0x0004b4ef) form_midp_gauge_slider_pane_t1

0x96ab,	// (0x0004b4fd) form_midp_gauge_slider_pane_t2

0x96b9,	// (0x0004b50b) form_midp_gauge_slider_pane_t3

0x96c7,	// (0x0004b519) form_midp_gauge_slider_pane_t4

0x0003,

0xf827,	// (0x00051679) form_midp_gauge_slider_pane_t

0x96d5,	// (0x0004b527) form_midp_slider_pane

0x0567,	// (0x000423b9) bg_input_focus_pane_cp041_ParamLimits

0x0567,	// (0x000423b9) bg_input_focus_pane_cp041

0x966a,	// (0x0004b4bc) form_midp_gauge_wait_pane_t1_ParamLimits

0x966a,	// (0x0004b4bc) form_midp_gauge_wait_pane_t1

0x967c,	// (0x0004b4ce) form_midp_gauge_wait_pane_t2_ParamLimits

0x967c,	// (0x0004b4ce) form_midp_gauge_wait_pane_t2

0x0001,

0xf822,	// (0x00051674) form_midp_gauge_wait_pane_t_ParamLimits

0xf822,	// (0x00051674) form_midp_gauge_wait_pane_t

0x968e,	// (0x0004b4e0) form_midp_wait_pane_ParamLimits

0x968e,	// (0x0004b4e0) form_midp_wait_pane

0x9632,	// (0x0004b484) form_midp_image_pane_g1

0x963b,	// (0x0004b48d) form_midp_image_pane_t1

0x964a,	// (0x0004b49c) form_midp_image_pane_t2

0x9659,	// (0x0004b4ab) form_midp_image_pane_t3

0x0002,

0xf81b,	// (0x0005166d) form_midp_image_pane_t

0x9629,	// (0x0004b47b) list_single_midp_pane_g1

0x5a87,	// (0x000478d9) list_single_midp_pane_t1

0x960f,	// (0x0004b461) list_midp_form_item_pane_ParamLimits

0x960f,	// (0x0004b461) list_midp_form_item_pane

0x7135,	// (0x00048f87) list_midp_form_item_pane_t1

0x7144,	// (0x00048f96) midp_ticker_pane_g1

0x7150,	// (0x00048fa2) midp_ticker_pane_g2

0x0001,

0xf763,	// (0x000515b5) midp_ticker_pane_g

0x715c,	// (0x00048fae) midp_ticker_pane_t1

0xaa48,	// (0x0004c89a) midp_editing_number_pane_t1

0xaa26,	// (0x0004c878) midp_editing_number_pane

0xaa35,	// (0x0004c887) midp_ticker_pane

0xa7c5,	// (0x0004c617) ai_message_heading_pane

0xd6de,	// (0x0004f530) bg_popup_window_pane_cp14

0xa7cd,	// (0x0004c61f) listscroll_ai_message_pane

0xa74b,	// (0x0004c59d) ai_message_heading_pane_g1_ParamLimits

0xa74b,	// (0x0004c59d) ai_message_heading_pane_g1

0xa757,	// (0x0004c5a9) ai_message_heading_pane_g2_ParamLimits

0xa757,	// (0x0004c5a9) ai_message_heading_pane_g2

0xa765,	// (0x0004c5b7) ai_message_heading_pane_g3_ParamLimits

0xa765,	// (0x0004c5b7) ai_message_heading_pane_g3

0xa771,	// (0x0004c5c3) ai_message_heading_pane_g4_ParamLimits

0xa771,	// (0x0004c5c3) ai_message_heading_pane_g4

0x0003,

0xf95c,	// (0x000517ae) ai_message_heading_pane_g_ParamLimits

0xf95c,	// (0x000517ae) ai_message_heading_pane_g

0xa77d,	// (0x0004c5cf) ai_message_heading_pane_t1_ParamLimits

0xa77d,	// (0x0004c5cf) ai_message_heading_pane_t1

0xa797,	// (0x0004c5e9) ai_message_heading_pane_t2_ParamLimits

0xa797,	// (0x0004c5e9) ai_message_heading_pane_t2

0x0001,

0xf965,	// (0x000517b7) ai_message_heading_pane_t_ParamLimits

0xf965,	// (0x000517b7) ai_message_heading_pane_t

0xa7ab,	// (0x0004c5fd) bg_popup_heading_pane_cp1_ParamLimits

0xa7ab,	// (0x0004c5fd) bg_popup_heading_pane_cp1

0xa739,	// (0x0004c58b) list_ai_message_pane_ParamLimits

0xa739,	// (0x0004c58b) list_ai_message_pane

0x0ca8,	// (0x00042afa) scroll_pane_cp10

0xa6d5,	// (0x0004c527) list_ai_message_pane_g1

0xa6dd,	// (0x0004c52f) list_ai_message_pane_g2

0x0001,

0xf939,	// (0x0005178b) list_ai_message_pane_g

0xa6e5,	// (0x0004c537) list_ai_message_pane_t1_ParamLimits

0xa6e5,	// (0x0004c537) list_ai_message_pane_t1

0xa6fa,	// (0x0004c54c) list_ai_message_pane_t2_ParamLimits

0xa6fa,	// (0x0004c54c) list_ai_message_pane_t2

0xa70f,	// (0x0004c561) list_ai_message_pane_t3_ParamLimits

0xa70f,	// (0x0004c561) list_ai_message_pane_t3

0xa724,	// (0x0004c576) list_ai_message_pane_t4_ParamLimits

0xa724,	// (0x0004c576) list_ai_message_pane_t4

0x0003,

0xf93e,	// (0x00051790) list_ai_message_pane_t_ParamLimits

0xf93e,	// (0x00051790) list_ai_message_pane_t

0xa6be,	// (0x0004c510) cell_ai_soft_ind_pane_ParamLimits

0xa6be,	// (0x0004c510) cell_ai_soft_ind_pane

0x716e,	// (0x00048fc0) cell_ai_soft_ind_pane_g1_ParamLimits

0x716e,	// (0x00048fc0) cell_ai_soft_ind_pane_g1

0xd6de,	// (0x0004f530) grid_highlight_cp1

0x717b,	// (0x00048fcd) text_secondary_cp56_ParamLimits

0x717b,	// (0x00048fcd) text_secondary_cp56

0xa693,	// (0x0004c4e5) example_general_pane_ParamLimits

0xa693,	// (0x0004c4e5) example_general_pane

0xa69f,	// (0x0004c4f1) example_parent_pane_g1_ParamLimits

0xa69f,	// (0x0004c4f1) example_parent_pane_g1

0xa6ab,	// (0x0004c4fd) example_parent_pane_t1_ParamLimits

0xa6ab,	// (0x0004c4fd) example_parent_pane_t1

0x8d28,	// (0x0004ab7a) popup_preview_text_window_ParamLimits

0x8d28,	// (0x0004ab7a) popup_preview_text_window

0x4737,	// (0x00046589) list_single_pane_cp2_g4

0x0742,	// (0x00042594) bg_popup_preview_window_pane_ParamLimits

0x0742,	// (0x00042594) bg_popup_preview_window_pane

0xa3c6,	// (0x0004c218) popup_preview_text_window_t1_ParamLimits

0xa3c6,	// (0x0004c218) popup_preview_text_window_t1

0xa3e4,	// (0x0004c236) popup_preview_text_window_t2_ParamLimits

0xa3e4,	// (0x0004c236) popup_preview_text_window_t2

0xa42d,	// (0x0004c27f) popup_preview_text_window_t3_ParamLimits

0xa42d,	// (0x0004c27f) popup_preview_text_window_t3

0xa472,	// (0x0004c2c4) popup_preview_text_window_t4_ParamLimits

0xa472,	// (0x0004c2c4) popup_preview_text_window_t4

0x0004,

0xf90d,	// (0x0005175f) popup_preview_text_window_t_ParamLimits

0xf90d,	// (0x0005175f) popup_preview_text_window_t

0xa4f0,	// (0x0004c342) scroll_pane_cp11

0x94a2,	// (0x0004b2f4) bg_popup_preview_window_pane_g1

0xa37a,	// (0x0004c1cc) bg_popup_preview_window_pane_g2

0xa384,	// (0x0004c1d6) bg_popup_preview_window_pane_g3

0xa38e,	// (0x0004c1e0) bg_popup_preview_window_pane_g4

0xa398,	// (0x0004c1ea) bg_popup_preview_window_pane_g5

0xa3a2,	// (0x0004c1f4) bg_popup_preview_window_pane_g6

0xa3aa,	// (0x0004c1fc) bg_popup_preview_window_pane_g7

0xa3b2,	// (0x0004c204) bg_popup_preview_window_pane_g8

0x6077,	// (0x00047ec9) aid_popup_width_pane

0x8d04,	// (0x0004ab56) popup_midp_note_alarm_window_ParamLimits

0x8d04,	// (0x0004ab56) popup_midp_note_alarm_window

0x0b70,	// (0x000429c2) data_form_pane_ParamLimits

0x5744,	// (0x00047596) form_field_data_pane_g1

0x574e,	// (0x000475a0) form_field_data_pane_t1_ParamLimits

0x0b7c,	// (0x000429ce) input_focus_pane_ParamLimits

0x5768,	// (0x000475ba) data_form_wide_pane_ParamLimits

0x5779,	// (0x000475cb) form_field_data_wide_pane_g1

0x5785,	// (0x000475d7) form_field_data_wide_pane_t1_ParamLimits

0x08f7,	// (0x00042749) input_focus_pane_cp6_ParamLimits

0x68dc,	// (0x0004872e) input_popup_find_pane_g1_ParamLimits

0x68dc,	// (0x0004872e) input_popup_find_pane_g1

0x6a35,	// (0x00048887) aid_navi_side_left_pane

0x6a4a,	// (0x0004889c) aid_navi_side_right_pane

0x9d8f,	// (0x0004bbe1) bg_popup_window_pane_cp30_ParamLimits

0x9d8f,	// (0x0004bbe1) bg_popup_window_pane_cp30

0x9e09,	// (0x0004bc5b) popup_midp_note_alarm_window_g1_ParamLimits

0x9e09,	// (0x0004bc5b) popup_midp_note_alarm_window_g1

0x9e39,	// (0x0004bc8b) popup_midp_note_alarm_window_t1_ParamLimits

0x9e39,	// (0x0004bc8b) popup_midp_note_alarm_window_t1

0x9eda,	// (0x0004bd2c) popup_midp_note_alarm_window_t2_ParamLimits

0x9eda,	// (0x0004bd2c) popup_midp_note_alarm_window_t2

0x9f88,	// (0x0004bdda) popup_midp_note_alarm_window_t3_ParamLimits

0x9f88,	// (0x0004bdda) popup_midp_note_alarm_window_t3

0x9fba,	// (0x0004be0c) popup_midp_note_alarm_window_t4_ParamLimits

0x9fba,	// (0x0004be0c) popup_midp_note_alarm_window_t4

0x9fe0,	// (0x0004be32) popup_midp_note_alarm_window_t5_ParamLimits

0x9fe0,	// (0x0004be32) popup_midp_note_alarm_window_t5

0x000a,

0xf8aa,	// (0x000516fc) popup_midp_note_alarm_window_t_ParamLimits

0xf8aa,	// (0x000516fc) popup_midp_note_alarm_window_t

0xa08c,	// (0x0004bede) wait_bar_pane_cp1_ParamLimits

0xa08c,	// (0x0004bede) wait_bar_pane_cp1

0xd6de,	// (0x0004f530) wait_anim_pane_copy1

0xd6de,	// (0x0004f530) wait_border_pane_copy1

0x9a74,	// (0x0004b8c6) wait_border_pane_g1_copy1

0x579f,	// (0x000475f1) form_field_popup_pane_g1

0x57a7,	// (0x000475f9) form_field_popup_pane_t1_ParamLimits

0x0b7c,	// (0x000429ce) input_focus_pane_cp7_ParamLimits

0x0baa,	// (0x000429fc) list_form_pane_ParamLimits

0x57c1,	// (0x00047613) form_field_popup_wide_pane_g1

0x57c9,	// (0x0004761b) form_field_popup_wide_pane_t1_ParamLimits

0x0b7c,	// (0x000429ce) input_focus_pane_cp8_ParamLimits

0x0bb6,	// (0x00042a08) list_form_wide_pane_ParamLimits

0xabcf,	// (0x0004ca21) aid_size_cell_graphic_pane

0x5855,	// (0x000476a7) data_form_pane_t1_ParamLimits

0x5add,	// (0x0004792f) data_form_wide_pane_t1_ParamLimits

0x904f,	// (0x0004aea1) bg_status_flat_pane

0x6480,	// (0x000482d2) title_pane_t1_ParamLimits

0xd700,	// (0x0004f552) title_pane_t2_ParamLimits

0xd726,	// (0x0004f578) title_pane_t3_ParamLimits

0xf55d,	// (0x000513af) title_pane_t_ParamLimits

0x6b84,	// (0x000489d6) level_1_signal_ParamLimits

0x6b91,	// (0x000489e3) level_2_signal_ParamLimits

0x6b9e,	// (0x000489f0) level_3_signal_ParamLimits

0x6bab,	// (0x000489fd) level_4_signal_ParamLimits

0x6bb8,	// (0x00048a0a) level_5_signal_ParamLimits

0x6bc5,	// (0x00048a17) level_6_signal_ParamLimits

0x6bd2,	// (0x00048a24) level_7_signal_ParamLimits

0x6b84,	// (0x000489d6) level_1_battery_ParamLimits

0x6b91,	// (0x000489e3) level_2_battery_ParamLimits

0x6b9e,	// (0x000489f0) level_3_battery_ParamLimits

0x6bab,	// (0x000489fd) level_4_battery_ParamLimits

0x6bb8,	// (0x00048a0a) level_5_battery_ParamLimits

0x6bc5,	// (0x00048a17) level_6_battery_ParamLimits

0x6bd2,	// (0x00048a24) level_7_battery_ParamLimits

0x9c94,	// (0x0004bae6) bg_status_flat_pane_g1

0x9c9c,	// (0x0004baee) bg_status_flat_pane_g2

0x9ca4,	// (0x0004baf6) bg_status_flat_pane_g3

0x9cac,	// (0x0004bafe) bg_status_flat_pane_g4

0x9cb4,	// (0x0004bb06) bg_status_flat_pane_g5

0x9cbc,	// (0x0004bb0e) bg_status_flat_pane_g6

0x9cc4,	// (0x0004bb16) bg_status_flat_pane_g7

0x64f0,	// (0x00048342) tabs_3_active_pane_t1_ParamLimits

0x64f0,	// (0x00048342) tabs_3_passive_pane_t1_ParamLimits

0x650a,	// (0x0004835c) tabs_4_active_pane_t1_ParamLimits

0x650a,	// (0x0004835c) tabs_4_1_passive_pane_t1_ParamLimits

0x68f2,	// (0x00048744) tabs_2_active_pane_t1_ParamLimits

0x68f2,	// (0x00048744) tabs_2_passive_pane_t1_ParamLimits

0x2833,	// (0x00044685) bg_active_tab_pane_cp4_ParamLimits

0x6904,	// (0x00048756) tabs_2_long_active_pane_t1_ParamLimits

0x6917,	// (0x00048769) bg_passive_tab_pane_cp4_ParamLimits

0x74d0,	// (0x00049322) list_single_midp_graphic_pane_t1_ParamLimits

0x2833,	// (0x00044685) bg_active_tab_pane_cp5_ParamLimits

0x6923,	// (0x00048775) tabs_3_long_active_pane_t1_ParamLimits

0x6917,	// (0x00048769) bg_passive_tab_pane_cp5_ParamLimits

0x74d0,	// (0x00049322) list_single_midp_graphic_pane_t1

0x904f,	// (0x0004aea1) bg_status_flat_pane_ParamLimits

0x911a,	// (0x0004af6c) indicator_pane_cp2_ParamLimits

0x911a,	// (0x0004af6c) indicator_pane_cp2

0x925d,	// (0x0004b0af) navi_pane_srt_ParamLimits

0x925d,	// (0x0004b0af) navi_pane_srt

0x9281,	// (0x0004b0d3) popup_clock_digital_analogue_window_cp1

0x05ab,	// (0x000423fd) indicator_pane_t1

0x7073,	// (0x00048ec5) copy_highlight_pane

0x7073,	// (0x00048ec5) cursor_graphics_pane

0x7073,	// (0x00048ec5) graphic_within_text_pane

0x7073,	// (0x00048ec5) link_highlight_pane

0xa4b3,	// (0x0004c305) popup_preview_text_window_t5_ParamLimits

0xa4b3,	// (0x0004c305) popup_preview_text_window_t5

0x7197,	// (0x00048fe9) cursor_digital_pane

0x7197,	// (0x00048fe9) cursor_primary_pane

0x71a8,	// (0x00048ffa) cursor_primary_small_pane

0x71b0,	// (0x00049002) cursor_secondary_pane

0x71b8,	// (0x0004900a) cursor_title_pane

0x7197,	// (0x00048fe9) link_highlight_digital_pane

0x719f,	// (0x00048ff1) link_highlight_primary_pane

0x71a8,	// (0x00048ffa) link_highlight_primary_small_pane

0x71b0,	// (0x00049002) link_highlight_secondary_pane

0x71b8,	// (0x0004900a) link_highlight_title_pane

0x7197,	// (0x00048fe9) copy_highlight_digital_pane

0x7197,	// (0x00048fe9) copy_highlight_primary_pane

0x71a8,	// (0x00048ffa) copy_highlight_primary_small_pane

0x71b0,	// (0x00049002) copy_highlight_secondary_pane

0x71b8,	// (0x0004900a) copy_highlight_title_pane

0x71b0,	// (0x00049002) graphic_text_digital_pane

0x9d32,	// (0x0004bb84) graphic_text_primary_pane

0x9d3b,	// (0x0004bb8d) graphic_text_primary_small_pane

0x71a8,	// (0x00048ffa) graphic_text_secondary_pane

0x7197,	// (0x00048fe9) graphic_text_title_pane

0x71c0,	// (0x00049012) cursor_primary_pane_g1

0x9d24,	// (0x0004bb76) cursor_text_primary_t1

0x9d0c,	// (0x0004bb5e) cursor_primary_small_pane_g1

0x9d16,	// (0x0004bb68) cursor_text_primary_small_t1

0x9cf4,	// (0x0004bb46) cursor_primary_small_pane_g1_copy1

0x9cfe,	// (0x0004bb50) cursor_text_primary_small_t1_copy1

0x9cdc,	// (0x0004bb2e) cursor_text_title_t1

0x9cea,	// (0x0004bb3c) cursor_title_pane_g1

0x71c0,	// (0x00049012) cursor_digital_pane_g1

0x71ca,	// (0x0004901c) cursor_text_digital_t1

0x71d8,	// (0x0004902a) link_highlight_primary_pane_g1

0x9c85,	// (0x0004bad7) link_highlight_primary_pane_t1

0x71d8,	// (0x0004902a) link_highlight_primary_small_pane_g1

0x71e0,	// (0x00049032) link_highlight_primary_small_pane_t1

0x71ef,	// (0x00049041) link_highlight_secondary_pane_g1

0x71f7,	// (0x00049049) link_highlight_secondary_pane_t1

0x9bf9,	// (0x0004ba4b) link_highlight_title_pane_g1

0x9c01,	// (0x0004ba53) link_highlight_title_pane_t1

0x9be2,	// (0x0004ba34) link_highlight_digital_pane_g1

0x9bea,	// (0x0004ba3c) link_highlight_digital_pane_t1

0x9aaa,	// (0x0004b8fc) copy_highlight_primary_pane_g1

0x9ac1,	// (0x0004b913) copy_highlight_primary_pane_t1

0x9aaa,	// (0x0004b8fc) copy_highlight_primary_small_pane_g1

0x9ab2,	// (0x0004b904) copy_highlight_primary_small_pane_t1

0x7206,	// (0x00049058) copy_highlight_secondary_pane_g1

0x720e,	// (0x00049060) copy_highlight_secondary_pane_t1

0x9a93,	// (0x0004b8e5) copy_highlight_title_pane_g1

0x9a9b,	// (0x0004b8ed) copy_highlight_title_pane_t1

0x9aaa,	// (0x0004b8fc) copy_highlight_digital_pane_g1

0xad9f,	// (0x0004cbf1) copy_highlight_digital_pane_t1

0xacf3,	// (0x0004cb45) graphic_text_primary_pane_g1

0xad83,	// (0x0004cbd5) graphic_text_primary_pane_t1

0xad91,	// (0x0004cbe3) graphic_text_primary_pane_t2

0x0001,

0xf9d9,	// (0x0005182b) graphic_text_primary_pane_t

0xad5f,	// (0x0004cbb1) graphic_text_primary_small_pane_g1

0xad67,	// (0x0004cbb9) graphic_text_primary_small_pane_t1

0xad75,	// (0x0004cbc7) graphic_text_primary_small_pane_t2

0x0001,

0xf9d4,	// (0x00051826) graphic_text_primary_small_pane_t

0xad3b,	// (0x0004cb8d) graphic_text_secondary_pane_g1

0xad43,	// (0x0004cb95) graphic_text_secondary_pane_t1

0xad51,	// (0x0004cba3) graphic_text_secondary_pane_t2

0x0001,

0xf9cf,	// (0x00051821) graphic_text_secondary_pane_t

0xad17,	// (0x0004cb69) graphic_text_title_pane_g1

0xad1f,	// (0x0004cb71) graphic_text_title_pane_t1

0xad2d,	// (0x0004cb7f) graphic_text_title_pane_t2

0x0001,

0xf9ca,	// (0x0005181c) graphic_text_title_pane_t

0xacf3,	// (0x0004cb45) graphic_text_digital_pane_g1

0xacfb,	// (0x0004cb4d) graphic_text_digital_pane_t1

0xad09,	// (0x0004cb5b) graphic_text_digital_pane_t2

0x0001,

0xf9c5,	// (0x00051817) graphic_text_digital_pane_t

0x0567,	// (0x000423b9) navi_icon_pane_srt_ParamLimits

0x0567,	// (0x000423b9) navi_icon_pane_srt

0xd6de,	// (0x0004f530) navi_midp_pane_srt

0xd6de,	// (0x0004f530) navi_navi_pane_srt

0x0567,	// (0x000423b9) navi_text_pane_srt_ParamLimits

0x0567,	// (0x000423b9) navi_text_pane_srt

0xacbe,	// (0x0004cb10) navi_navi_icon_text_pane_srt

0xacc6,	// (0x0004cb18) navi_navi_pane_srt_g1_ParamLimits

0xacc6,	// (0x0004cb18) navi_navi_pane_srt_g1

0xacd8,	// (0x0004cb2a) navi_navi_pane_srt_g2_ParamLimits

0xacd8,	// (0x0004cb2a) navi_navi_pane_srt_g2

0x0001,

0xf9c0,	// (0x00051812) navi_navi_pane_srt_g_ParamLimits

0xf9c0,	// (0x00051812) navi_navi_pane_srt_g

0xacea,	// (0x0004cb3c) navi_navi_tabs_pane_srt

0xacbe,	// (0x0004cb10) navi_navi_text_pane_srt

0xacbe,	// (0x0004cb10) navi_navi_volume_pane_srt

0xacaf,	// (0x0004cb01) navi_navi_text_pane_srt_t1

0x7882,	// (0x000496d4) navi_navi_volume_pane_srt_g1

0x788a,	// (0x000496dc) volume_small_pane_srt_ParamLimits

0x788a,	// (0x000496dc) volume_small_pane_srt

0x721d,	// (0x0004906f) volume_small_pane_srt_g1_ParamLimits

0x721d,	// (0x0004906f) volume_small_pane_srt_g1

0x722d,	// (0x0004907f) volume_small_pane_srt_g2_ParamLimits

0x722d,	// (0x0004907f) volume_small_pane_srt_g2

0x723e,	// (0x00049090) volume_small_pane_srt_g3_ParamLimits

0x723e,	// (0x00049090) volume_small_pane_srt_g3

0x724f,	// (0x000490a1) volume_small_pane_srt_g4_ParamLimits

0x724f,	// (0x000490a1) volume_small_pane_srt_g4

0x7260,	// (0x000490b2) volume_small_pane_srt_g5_ParamLimits

0x7260,	// (0x000490b2) volume_small_pane_srt_g5

0x7271,	// (0x000490c3) volume_small_pane_srt_g6_ParamLimits

0x7271,	// (0x000490c3) volume_small_pane_srt_g6

0x7282,	// (0x000490d4) volume_small_pane_srt_g7_ParamLimits

0x7282,	// (0x000490d4) volume_small_pane_srt_g7

0x7293,	// (0x000490e5) volume_small_pane_srt_g8_ParamLimits

0x7293,	// (0x000490e5) volume_small_pane_srt_g8

0x72a4,	// (0x000490f6) volume_small_pane_srt_g9_ParamLimits

0x72a4,	// (0x000490f6) volume_small_pane_srt_g9

0x72b5,	// (0x00049107) volume_small_pane_srt_g10_ParamLimits

0x72b5,	// (0x00049107) volume_small_pane_srt_g10

0x0009,

0xf768,	// (0x000515ba) volume_small_pane_srt_g_ParamLimits

0xf768,	// (0x000515ba) volume_small_pane_srt_g

0x07f7,	// (0x00042649) query_popup_data_pane_cp2

0xac95,	// (0x0004cae7) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xac95,	// (0x0004cae7) navi_navi_icon_text_pane_srt_t1

0x9d32,	// (0x0004bb84) navi_tabs_2_long_pane_srt

0x9d32,	// (0x0004bb84) navi_tabs_2_pane_srt

0x9d32,	// (0x0004bb84) navi_tabs_3_long_pane_srt

0x9d32,	// (0x0004bb84) navi_tabs_3_pane_srt

0x9d32,	// (0x0004bb84) navi_tabs_4_pane_srt

0x7862,	// (0x000496b4) tabs_2_active_pane_srt_ParamLimits

0x7862,	// (0x000496b4) tabs_2_active_pane_srt

0x7872,	// (0x000496c4) tabs_2_passive_pane_srt_ParamLimits

0x7872,	// (0x000496c4) tabs_2_passive_pane_srt

0x8961,	// (0x0004a7b3) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8961,	// (0x0004a7b3) bg_passive_tab_pane_cp1_srt

0xac61,	// (0x0004cab3) bg_passive_tab_pane_g1_cp1_srt

0x440b,	// (0x0004625d) bg_passive_tab_pane_g2_cp1_srt

0xac6a,	// (0x0004cabc) bg_passive_tab_pane_g3_cp1_srt

0x0567,	// (0x000423b9) bg_active_tab_pane_cp1_srt_ParamLimits

0x0567,	// (0x000423b9) bg_active_tab_pane_cp1_srt

0xac73,	// (0x0004cac5) tabs_2_active_pane_srt_g1

0xac7b,	// (0x0004cacd) tabs_2_active_pane_srt_t1_ParamLimits

0xac7b,	// (0x0004cacd) tabs_2_active_pane_srt_t1

0xac61,	// (0x0004cab3) bg_active_tab_pane_g1_cp1_srt

0x440b,	// (0x0004625d) bg_active_tab_pane_g2_cp1_srt

0xac6a,	// (0x0004cabc) bg_active_tab_pane_g3_cp1_srt

0x782f,	// (0x00049681) tabs_3_active_pane_srt_ParamLimits

0x782f,	// (0x00049681) tabs_3_active_pane_srt

0x7840,	// (0x00049692) tabs_3_passive_pane_cp_srt_ParamLimits

0x7840,	// (0x00049692) tabs_3_passive_pane_cp_srt

0x7851,	// (0x000496a3) tabs_3_passive_pane_srt_ParamLimits

0x7851,	// (0x000496a3) tabs_3_passive_pane_srt

0x8961,	// (0x0004a7b3) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8961,	// (0x0004a7b3) bg_passive_tab_pane_cp2_srt

0x72c6,	// (0x00049118) bg_passive_tab_pane_g1_cp2_srt

0x440b,	// (0x0004625d) bg_passive_tab_pane_g2_cp2_srt

0x72cf,	// (0x00049121) bg_passive_tab_pane_g3_cp2_srt

0x0567,	// (0x000423b9) bg_active_tab_pane_cp2_srt_ParamLimits

0x0567,	// (0x000423b9) bg_active_tab_pane_cp2_srt

0xac47,	// (0x0004ca99) tabs_3_active_pane_srt_g1

0xac4f,	// (0x0004caa1) tabs_3_active_pane_srt_t1_ParamLimits

0xac4f,	// (0x0004caa1) tabs_3_active_pane_srt_t1

0x72c6,	// (0x00049118) bg_active_tab_pane_g1_cp2_srt

0x440b,	// (0x0004625d) bg_active_tab_pane_g2_cp2_srt

0x72cf,	// (0x00049121) bg_active_tab_pane_g3_cp2_srt

0x77e7,	// (0x00049639) tabs_4_active_pane_srt_ParamLimits

0x77e7,	// (0x00049639) tabs_4_active_pane_srt

0x77f9,	// (0x0004964b) tabs_4_passive_pane_cp2_srt_ParamLimits

0x77f9,	// (0x0004964b) tabs_4_passive_pane_cp2_srt

0x88f7,	// (0x0004a749) aid_size_cell_toolbar

0x6917,	// (0x00048769) main_idle_act_pane_ParamLimits

0x8b2a,	// (0x0004a97c) popup_large_graphic_colour_window_ParamLimits

0x8ed1,	// (0x0004ad23) popup_toolbar_window_ParamLimits

0x8ed1,	// (0x0004ad23) popup_toolbar_window

0xaa57,	// (0x0004c8a9) list_single_graphic_2heading_pane_ParamLimits

0xaa57,	// (0x0004c8a9) list_single_graphic_2heading_pane

0x0e80,	// (0x00042cd2) aid_size_cell_apps_grid_lsc_pane

0x0e92,	// (0x00042ce4) aid_size_cell_apps_grid_prt_pane

0x8961,	// (0x0004a7b3) bg_wml_button_pane_cp1_ParamLimits

0x8961,	// (0x0004a7b3) bg_wml_button_pane_cp1

0x972a,	// (0x0004b57c) form_midp_field_text_pane_t1_ParamLimits

0x9516,	// (0x0004b368) input_focus_pane_cp050_ParamLimits

0x9755,	// (0x0004b5a7) list_midp_form_text_pane_ParamLimits

0x9707,	// (0x0004b559) input_focus_pane_cp051_ParamLimits

0x971b,	// (0x0004b56d) list_midp_choice_pane_ParamLimits

0x95cf,	// (0x0004b421) list_single_2graphic_pane_cp3_ParamLimits

0x95cf,	// (0x0004b421) list_single_2graphic_pane_cp3

0x95e8,	// (0x0004b43a) list_single_midp_graphic_pane_ParamLimits

0x95e8,	// (0x0004b43a) list_single_midp_graphic_pane

0x595f,	// (0x000477b1) list_single_graphic_2heading_pane_g1_ParamLimits

0x595f,	// (0x000477b1) list_single_graphic_2heading_pane_g1

0x596b,	// (0x000477bd) list_single_graphic_2heading_pane_g4_ParamLimits

0x596b,	// (0x000477bd) list_single_graphic_2heading_pane_g4

0x5977,	// (0x000477c9) list_single_graphic_2heading_pane_g5_ParamLimits

0x5977,	// (0x000477c9) list_single_graphic_2heading_pane_g5

0x0002,

0xf7bb,	// (0x0005160d) list_single_graphic_2heading_pane_g_ParamLimits

0xf7bb,	// (0x0005160d) list_single_graphic_2heading_pane_g

0x5983,	// (0x000477d5) list_single_graphic_2heading_pane_t1_ParamLimits

0x5983,	// (0x000477d5) list_single_graphic_2heading_pane_t1

0x5997,	// (0x000477e9) list_single_graphic_2heading_pane_t2_ParamLimits

0x5997,	// (0x000477e9) list_single_graphic_2heading_pane_t2

0x59b3,	// (0x00047805) list_single_graphic_2heading_pane_t3_ParamLimits

0x59b3,	// (0x00047805) list_single_graphic_2heading_pane_t3

0x0002,

0xf7c2,	// (0x00051614) list_single_graphic_2heading_pane_t_ParamLimits

0xf7c2,	// (0x00051614) list_single_graphic_2heading_pane_t

0x93e0,	// (0x0004b232) bg_popup_sub_pane_cp2

0x940a,	// (0x0004b25c) grid_toobar_pane

0x7448,	// (0x0004929a) cell_toolbar_pane_ParamLimits

0x7448,	// (0x0004929a) cell_toolbar_pane

0x9446,	// (0x0004b298) cell_toolbar_pane_g1_ParamLimits

0x9446,	// (0x0004b298) cell_toolbar_pane_g1

0x945a,	// (0x0004b2ac) cell_toolbar_pane_g2_ParamLimits

0x945a,	// (0x0004b2ac) cell_toolbar_pane_g2

0x0001,

0xf7d0,	// (0x00051622) cell_toolbar_pane_g_ParamLimits

0xf7d0,	// (0x00051622) cell_toolbar_pane_g

0x947c,	// (0x0004b2ce) grid_highlight_pane_cp2_ParamLimits

0x947c,	// (0x0004b2ce) grid_highlight_pane_cp2

0x9496,	// (0x0004b2e8) toolbar_button_pane

0x94a2,	// (0x0004b2f4) toolbar_button_pane_g1

0x94aa,	// (0x0004b2fc) toolbar_button_pane_g2

0x94b2,	// (0x0004b304) toolbar_button_pane_g3

0x94ba,	// (0x0004b30c) toolbar_button_pane_g4

0x94c2,	// (0x0004b314) toolbar_button_pane_g5

0x94ca,	// (0x0004b31c) toolbar_button_pane_g6

0x94d2,	// (0x0004b324) toolbar_button_pane_g7

0x94da,	// (0x0004b32c) toolbar_button_pane_g8

0x94e2,	// (0x0004b334) toolbar_button_pane_g9

0x0009,

0xf7d5,	// (0x00051627) toolbar_button_pane_g

0x748c,	// (0x000492de) list_single_2graphic_pane_g1_cp3_ParamLimits

0x748c,	// (0x000492de) list_single_2graphic_pane_g1_cp3

0x7498,	// (0x000492ea) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7498,	// (0x000492ea) list_single_2graphic_pane_g2_cp3

0x4660,	// (0x000464b2) list_single_2graphic_pane_g3_cp3

0x74a9,	// (0x000492fb) list_single_2graphic_pane_g4_cp3_ParamLimits

0x74a9,	// (0x000492fb) list_single_2graphic_pane_g4_cp3

0x74b5,	// (0x00049307) list_single_2graphic_pane_t1_cp3_ParamLimits

0x74b5,	// (0x00049307) list_single_2graphic_pane_t1_cp3

0x4654,	// (0x000464a6) list_single_midp_graphic_pane_g2_ParamLimits

0x4654,	// (0x000464a6) list_single_midp_graphic_pane_g2

0x5947,	// (0x00047799) aid_zoom_text_primary

0x594f,	// (0x000477a1) aid_zoom_text_secondary

0x8856,	// (0x0004a6a8) status_small_pane_g7_ParamLimits

0x8856,	// (0x0004a6a8) status_small_pane_g7

0x8879,	// (0x0004a6cb) status_small_pane_t1_ParamLimits

0x646f,	// (0x000482c1) title_pane_g2

0x0003,

0xf554,	// (0x000513a6) title_pane_g

0x66c4,	// (0x00048516) aid_size_cell_colour_1_pane_ParamLimits

0x66c4,	// (0x00048516) aid_size_cell_colour_1_pane

0x66d8,	// (0x0004852a) aid_size_cell_colour_2_pane_ParamLimits

0x66d8,	// (0x0004852a) aid_size_cell_colour_2_pane

0x66ec,	// (0x0004853e) aid_size_cell_colour_3_pane_ParamLimits

0x66ec,	// (0x0004853e) aid_size_cell_colour_3_pane

0x6700,	// (0x00048552) aid_size_cell_colour_4_pane_ParamLimits

0x6700,	// (0x00048552) aid_size_cell_colour_4_pane

0x6971,	// (0x000487c3) title_pane_stacon_g1_ParamLimits

0x6971,	// (0x000487c3) title_pane_stacon_g1

0x9b18,	// (0x0004b96a) popup_note_wait_window_g3_ParamLimits

0x9b18,	// (0x0004b96a) popup_note_wait_window_g3

0x9b8f,	// (0x0004b9e1) popup_note_wait_window_t5_ParamLimits

0x9b8f,	// (0x0004b9e1) popup_note_wait_window_t5

0xd6de,	// (0x0004f530) main_feb_china_hwr_fs_writing_pane

0x89f1,	// (0x0004a843) popup_feb_china_hwr_fs_window_ParamLimits

0x89f1,	// (0x0004a843) popup_feb_china_hwr_fs_window

0x74fe,	// (0x00049350) aid_size_cell_hwr_fs_ParamLimits

0x74fe,	// (0x00049350) aid_size_cell_hwr_fs

0x9516,	// (0x0004b368) bg_popup_sub_pane_cp3_ParamLimits

0x9516,	// (0x0004b368) bg_popup_sub_pane_cp3

0x7513,	// (0x00049365) grid_hwr_fs_pane_ParamLimits

0x7513,	// (0x00049365) grid_hwr_fs_pane

0x752b,	// (0x0004937d) linegrid_hwr_fs_pane_ParamLimits

0x752b,	// (0x0004937d) linegrid_hwr_fs_pane

0x753b,	// (0x0004938d) cell_hwr_fs_pane_ParamLimits

0x753b,	// (0x0004938d) cell_hwr_fs_pane

0x9522,	// (0x0004b374) linegrid_hwr_fs_pane_g1_ParamLimits

0x9522,	// (0x0004b374) linegrid_hwr_fs_pane_g1

0x952e,	// (0x0004b380) linegrid_hwr_fs_pane_g2_ParamLimits

0x952e,	// (0x0004b380) linegrid_hwr_fs_pane_g2

0x9540,	// (0x0004b392) linegrid_hwr_fs_pane_g3_ParamLimits

0x9540,	// (0x0004b392) linegrid_hwr_fs_pane_g3

0x755f,	// (0x000493b1) linegrid_hwr_fs_pane_g4_ParamLimits

0x755f,	// (0x000493b1) linegrid_hwr_fs_pane_g4

0x757d,	// (0x000493cf) linegrid_hwr_fs_pane_g5_ParamLimits

0x757d,	// (0x000493cf) linegrid_hwr_fs_pane_g5

0x0004,

0xf800,	// (0x00051652) linegrid_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x00051652) linegrid_hwr_fs_pane_g

0x954c,	// (0x0004b39e) cell_hwr_fs_pane_g1_ParamLimits

0x954c,	// (0x0004b39e) cell_hwr_fs_pane_g1

0x9317,	// (0x0004b169) cell_hwr_fs_pane_g2_ParamLimits

0x9317,	// (0x0004b169) cell_hwr_fs_pane_g2

0x9562,	// (0x0004b3b4) cell_hwr_fs_pane_g3_ParamLimits

0x9562,	// (0x0004b3b4) cell_hwr_fs_pane_g3

0x956f,	// (0x0004b3c1) cell_hwr_fs_pane_g4_ParamLimits

0x956f,	// (0x0004b3c1) cell_hwr_fs_pane_g4

0x0003,

0xf80b,	// (0x0005165d) cell_hwr_fs_pane_g_ParamLimits

0xf80b,	// (0x0005165d) cell_hwr_fs_pane_g

0x7593,	// (0x000493e5) cell_hwr_fs_pane_t1

0xd6de,	// (0x0004f530) grid_highlight_pane_cp6

0xd6de,	// (0x0004f530) main_idle_act2_pane

0x0c8f,	// (0x00042ae1) aid_inside_area_popup_secondary

0xa1c8,	// (0x0004c01a) aid_inside_area_window_primary_ParamLimits

0xa1c8,	// (0x0004c01a) aid_inside_area_window_primary

0xadae,	// (0x0004cc00) ai2_news_ticker_pane

0xadb6,	// (0x0004cc08) aid_size_cell_ai1_link_ParamLimits

0xadb6,	// (0x0004cc08) aid_size_cell_ai1_link

0xadd0,	// (0x0004cc22) popup_ai2_data_window_ParamLimits

0xadd0,	// (0x0004cc22) popup_ai2_data_window

0xadee,	// (0x0004cc40) popup_ai2_link_window_ParamLimits

0xadee,	// (0x0004cc40) popup_ai2_link_window

0x9516,	// (0x0004b368) bg_popup_sub_pane_cp4_ParamLimits

0x9516,	// (0x0004b368) bg_popup_sub_pane_cp4

0xae04,	// (0x0004cc56) grid_ai2_link_pane_ParamLimits

0xae04,	// (0x0004cc56) grid_ai2_link_pane

0xae1b,	// (0x0004cc6d) popup_ai2_link_window_g1_ParamLimits

0xae1b,	// (0x0004cc6d) popup_ai2_link_window_g1

0xae27,	// (0x0004cc79) popup_ai2_link_window_g2_ParamLimits

0xae27,	// (0x0004cc79) popup_ai2_link_window_g2

0x0001,

0xf9de,	// (0x00051830) popup_ai2_link_window_g_ParamLimits

0xf9de,	// (0x00051830) popup_ai2_link_window_g

0xae38,	// (0x0004cc8a) ai2_mp_button_pane

0xae40,	// (0x0004cc92) ai2_mp_volume_pane

0x9707,	// (0x0004b559) bg_popup_sub_pane_cp5_ParamLimits

0x9707,	// (0x0004b559) bg_popup_sub_pane_cp5

0xae48,	// (0x0004cc9a) heading_ai2_gene_pane_ParamLimits

0xae48,	// (0x0004cc9a) heading_ai2_gene_pane

0xae54,	// (0x0004cca6) list_ai2_gene_pane_ParamLimits

0xae54,	// (0x0004cca6) list_ai2_gene_pane

0xae9c,	// (0x0004ccee) cell_ai2_link_pane_ParamLimits

0xae9c,	// (0x0004ccee) cell_ai2_link_pane

0xaeb2,	// (0x0004cd04) cell_ai2_link_pane_g1

0xd6de,	// (0x0004f530) grid_highlight_pane_cp7

0x789f,	// (0x000496f1) ai2_mp_volume_pane_g1

0xafb1,	// (0x0004ce03) ai2_mp_volume_pane_g2

0xaefa,	// (0x0004cd4c) list_ai2_gene_pane_t1

0xafb9,	// (0x0004ce0b) ai2_mp_volume_pane_g3

0x0002,

0xf9f7,	// (0x00051849) ai2_mp_volume_pane_g

0x78a7,	// (0x000496f9) volume_small_pane_cp3

0xafc1,	// (0x0004ce13) aid_size_cell_ai2_button

0xafc9,	// (0x0004ce1b) grid_ai2_button_pane

0xafd2,	// (0x0004ce24) cell_ai2_button_pane_ParamLimits

0xafd2,	// (0x0004ce24) cell_ai2_button_pane

0xd6d4,	// (0x0004f526) cell_ai2_button_pane_g1

0xd6de,	// (0x0004f530) grid_highlight_pane_cp8

0xaf71,	// (0x0004cdc3) ai2_gene_pane_t1_ParamLimits

0xaf71,	// (0x0004cdc3) ai2_gene_pane_t1

0x88ed,	// (0x0004a73f) aid_height_parent_landscape

0xa86e,	// (0x0004c6c0) aid_height_set_list

0xa87f,	// (0x0004c6d1) aid_size_parent

0xabcf,	// (0x0004ca21) aid_size_cell_graphic_pane_ParamLimits

0xae64,	// (0x0004ccb6) popup_ai2_data_window_g1_ParamLimits

0xae64,	// (0x0004ccb6) popup_ai2_data_window_g1

0xae70,	// (0x0004ccc2) ai2_news_ticker_pane_g1

0xae78,	// (0x0004ccca) ai2_news_ticker_pane_g2

0x0001,

0xf9e3,	// (0x00051835) ai2_news_ticker_pane_g

0xae80,	// (0x0004ccd2) ai2_news_ticker_pane_t1

0xae8e,	// (0x0004cce0) ai2_news_ticker_pane_t2

0x0001,

0xf9e8,	// (0x0005183a) ai2_news_ticker_pane_t

0xaebb,	// (0x0004cd0d) heading_ai2_gene_pane_g1

0xaec3,	// (0x0004cd15) heading_ai2_gene_pane_t1_ParamLimits

0xaec3,	// (0x0004cd15) heading_ai2_gene_pane_t1

0xaed8,	// (0x0004cd2a) list_highlight_pane_cp6

0xaee0,	// (0x0004cd32) ai2_gene_pane_ParamLimits

0xaee0,	// (0x0004cd32) ai2_gene_pane

0xaf08,	// (0x0004cd5a) list_ai2_gene_pane_t2

0x0001,

0xf9ed,	// (0x0005183f) list_ai2_gene_pane_t

0xaf16,	// (0x0004cd68) list_highlight_pane_cp8_ParamLimits

0xaf16,	// (0x0004cd68) list_highlight_pane_cp8

0xaf27,	// (0x0004cd79) ai2_gene_pane_g1_ParamLimits

0xaf27,	// (0x0004cd79) ai2_gene_pane_g1

0xaf39,	// (0x0004cd8b) ai2_gene_pane_g2_ParamLimits

0xaf39,	// (0x0004cd8b) ai2_gene_pane_g2

0x0001,

0xf9f2,	// (0x00051844) ai2_gene_pane_g_ParamLimits

0xf9f2,	// (0x00051844) ai2_gene_pane_g

0x0b12,	// (0x00042964) scroll_pane_cp12

0x7407,	// (0x00049259) control_pane_t3_ParamLimits

0x7407,	// (0x00049259) control_pane_t3

0x886a,	// (0x0004a6bc) status_small_pane_g8_ParamLimits

0x886a,	// (0x0004a6bc) status_small_pane_g8

0x8aef,	// (0x0004a941) popup_find_window_ParamLimits

0x8d1a,	// (0x0004ab6c) popup_note_image_window_ParamLimits

0x59cb,	// (0x0004781d) list_double2_graphic_pane_vc_g1_ParamLimits

0x59cb,	// (0x0004781d) list_double2_graphic_pane_vc_g1

0x6fe4,	// (0x00048e36) list_double2_graphic_pane_vc_g2_ParamLimits

0x6fe4,	// (0x00048e36) list_double2_graphic_pane_vc_g2

0x7478,	// (0x000492ca) list_double2_graphic_pane_vc_g3_ParamLimits

0x7478,	// (0x000492ca) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c9,	// (0x0005161b) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c9,	// (0x0005161b) list_double2_graphic_pane_vc_g

0x59d7,	// (0x00047829) list_double2_graphic_pane_vc_t1_ParamLimits

0x59d7,	// (0x00047829) list_double2_graphic_pane_vc_t1

0x6fe4,	// (0x00048e36) list_single_heading_pane_vc_g1_ParamLimits

0x6fe4,	// (0x00048e36) list_single_heading_pane_vc_g1

0x7478,	// (0x000492ca) list_single_heading_pane_vc_g2_ParamLimits

0x7478,	// (0x000492ca) list_single_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x0005163c) list_single_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x0005163c) list_single_heading_pane_vc_g

0x59ed,	// (0x0004783f) list_single_heading_pane_vc_t1_ParamLimits

0x59ed,	// (0x0004783f) list_single_heading_pane_vc_t1

0x5a05,	// (0x00047857) list_single_heading_pane_vc_t2_ParamLimits

0x5a05,	// (0x00047857) list_single_heading_pane_vc_t2

0x0001,

0xf7ef,	// (0x00051641) list_single_heading_pane_vc_t_ParamLimits

0xf7ef,	// (0x00051641) list_single_heading_pane_vc_t

0x74e6,	// (0x00049338) list_setting_number_pane_vc_g1_ParamLimits

0x74e6,	// (0x00049338) list_setting_number_pane_vc_g1

0x74f2,	// (0x00049344) list_setting_number_pane_vc_g2_ParamLimits

0x74f2,	// (0x00049344) list_setting_number_pane_vc_g2

0x0001,

0xf7f4,	// (0x00051646) list_setting_number_pane_vc_g_ParamLimits

0xf7f4,	// (0x00051646) list_setting_number_pane_vc_g

0x5a17,	// (0x00047869) list_setting_number_pane_vc_t1_ParamLimits

0x5a17,	// (0x00047869) list_setting_number_pane_vc_t1

0x5a2b,	// (0x0004787d) list_setting_number_pane_vc_t2_ParamLimits

0x5a2b,	// (0x0004787d) list_setting_number_pane_vc_t2

0x5a47,	// (0x00047899) list_setting_number_pane_vc_t3_ParamLimits

0x5a47,	// (0x00047899) list_setting_number_pane_vc_t3

0x0002,

0xf7f9,	// (0x0005164b) list_setting_number_pane_vc_t_ParamLimits

0xf7f9,	// (0x0005164b) list_setting_number_pane_vc_t

0x5a75,	// (0x000478c7) set_value_pane_vc_ParamLimits

0x5a75,	// (0x000478c7) set_value_pane_vc

0xaa57,	// (0x0004c8a9) list_double2_graphic_pane_vc_ParamLimits

0xaa57,	// (0x0004c8a9) list_double2_graphic_pane_vc

0xaa57,	// (0x0004c8a9) list_double2_large_graphic_pane_vc_ParamLimits

0xaa57,	// (0x0004c8a9) list_double2_large_graphic_pane_vc

0xaa57,	// (0x0004c8a9) list_double2_pane_vc_ParamLimits

0xaa57,	// (0x0004c8a9) list_double2_pane_vc

0xaa57,	// (0x0004c8a9) list_double_graphic_heading_pane_vc_ParamLimits

0xaa57,	// (0x0004c8a9) list_double_graphic_heading_pane_vc

0xaa57,	// (0x0004c8a9) list_double_graphic_pane_vc_ParamLimits

0xaa57,	// (0x0004c8a9) list_double_graphic_pane_vc

0xaa57,	// (0x0004c8a9) list_double_heading_pane_vc_ParamLimits

0xaa57,	// (0x0004c8a9) list_double_heading_pane_vc

0xaa57,	// (0x0004c8a9) list_double_large_graphic_pane_vc_ParamLimits

0xaa57,	// (0x0004c8a9) list_double_large_graphic_pane_vc

0xaa57,	// (0x0004c8a9) list_double_number_pane_vc_ParamLimits

0xaa57,	// (0x0004c8a9) list_double_number_pane_vc

0xaa57,	// (0x0004c8a9) list_double_pane_vc_ParamLimits

0xaa57,	// (0x0004c8a9) list_double_pane_vc

0xaa57,	// (0x0004c8a9) list_double_time_pane_vc_ParamLimits

0xaa57,	// (0x0004c8a9) list_double_time_pane_vc

0xaa57,	// (0x0004c8a9) list_setting_number_pane_vc_ParamLimits

0xaa57,	// (0x0004c8a9) list_setting_number_pane_vc

0xaa57,	// (0x0004c8a9) list_setting_pane_vc_ParamLimits

0xaa57,	// (0x0004c8a9) list_setting_pane_vc

0xaa57,	// (0x0004c8a9) list_single_graphic_heading_pane_vc_ParamLimits

0xaa57,	// (0x0004c8a9) list_single_graphic_heading_pane_vc

0xaa57,	// (0x0004c8a9) list_single_heading_pane_vc_ParamLimits

0xaa57,	// (0x0004c8a9) list_single_heading_pane_vc

0xaa6b,	// (0x0004c8bd) list_single_number_heading_pane_vc_ParamLimits

0xaa6b,	// (0x0004c8bd) list_single_number_heading_pane_vc

0x59cb,	// (0x0004781d) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x59cb,	// (0x0004781d) list_double_graphic_heading_pane_vc_g1

0x78b0,	// (0x00049702) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x78b0,	// (0x00049702) list_double_graphic_heading_pane_vc_g2

0x78bc,	// (0x0004970e) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x78bc,	// (0x0004970e) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9fe,	// (0x00051850) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9fe,	// (0x00051850) list_double_graphic_heading_pane_vc_g

0x5b29,	// (0x0004797b) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5b29,	// (0x0004797b) list_double_graphic_heading_pane_vc_t1

0x5b3f,	// (0x00047991) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5b3f,	// (0x00047991) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa05,	// (0x00051857) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa05,	// (0x00051857) list_double_graphic_heading_pane_vc_t

0x74e6,	// (0x00049338) list_setting_pane_vc_g1_ParamLimits

0x74e6,	// (0x00049338) list_setting_pane_vc_g1

0x74f2,	// (0x00049344) list_setting_pane_vc_g2_ParamLimits

0x74f2,	// (0x00049344) list_setting_pane_vc_g2

0x0001,

0xf7f4,	// (0x00051646) list_setting_pane_vc_g_ParamLimits

0xf7f4,	// (0x00051646) list_setting_pane_vc_g

0x5b5d,	// (0x000479af) list_setting_pane_vc_t1_ParamLimits

0x5b5d,	// (0x000479af) list_setting_pane_vc_t1

0x5b79,	// (0x000479cb) list_setting_pane_vc_t2_ParamLimits

0x5b79,	// (0x000479cb) list_setting_pane_vc_t2

0x0001,

0xfa33,	// (0x00051885) list_setting_pane_vc_t_ParamLimits

0xfa33,	// (0x00051885) list_setting_pane_vc_t

0x5a75,	// (0x000478c7) set_value_pane_cp_vc_ParamLimits

0x5a75,	// (0x000478c7) set_value_pane_cp_vc

0x6fe4,	// (0x00048e36) list_single_number_heading_pane_vc_g1_ParamLimits

0x6fe4,	// (0x00048e36) list_single_number_heading_pane_vc_g1

0x7478,	// (0x000492ca) list_single_number_heading_pane_vc_g2_ParamLimits

0x7478,	// (0x000492ca) list_single_number_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x0005163c) list_single_number_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x0005163c) list_single_number_heading_pane_vc_g

0x59ed,	// (0x0004783f) list_single_number_heading_pane_vc_t1_ParamLimits

0x59ed,	// (0x0004783f) list_single_number_heading_pane_vc_t1

0x5b95,	// (0x000479e7) list_single_number_heading_pane_vc_t2_ParamLimits

0x5b95,	// (0x000479e7) list_single_number_heading_pane_vc_t2

0x5ba7,	// (0x000479f9) list_single_number_heading_pane_vc_t3_ParamLimits

0x5ba7,	// (0x000479f9) list_single_number_heading_pane_vc_t3

0x0002,

0xfa38,	// (0x0005188a) list_single_number_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x0005188a) list_single_number_heading_pane_vc_t

0x59cb,	// (0x0004781d) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x59cb,	// (0x0004781d) list_single_graphic_heading_pane_vc_g1

0x6fe4,	// (0x00048e36) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x6fe4,	// (0x00048e36) list_single_graphic_heading_pane_vc_g4

0x7478,	// (0x000492ca) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x7478,	// (0x000492ca) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c9,	// (0x0005161b) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x0005161b) list_single_graphic_heading_pane_vc_g

0x59ed,	// (0x0004783f) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x59ed,	// (0x0004783f) list_single_graphic_heading_pane_vc_t1

0x5bb9,	// (0x00047a0b) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5bb9,	// (0x00047a0b) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3f,	// (0x00051891) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3f,	// (0x00051891) list_single_graphic_heading_pane_vc_t

0x6fe4,	// (0x00048e36) list_double2_pane_vc_g1_ParamLimits

0x6fe4,	// (0x00048e36) list_double2_pane_vc_g1

0x7478,	// (0x000492ca) list_double2_pane_vc_g2_ParamLimits

0x7478,	// (0x000492ca) list_double2_pane_vc_g2

0x0001,

0xf7ea,	// (0x0005163c) list_double2_pane_vc_g_ParamLimits

0xf7ea,	// (0x0005163c) list_double2_pane_vc_g

0x5bcb,	// (0x00047a1d) list_double2_pane_vc_t1_ParamLimits

0x5bcb,	// (0x00047a1d) list_double2_pane_vc_t1

0x78c8,	// (0x0004971a) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x78c8,	// (0x0004971a) list_double2_large_graphic_pane_vc_g1

0x6fe4,	// (0x00048e36) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x6fe4,	// (0x00048e36) list_double2_large_graphic_pane_vc_g2

0x7478,	// (0x000492ca) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x7478,	// (0x000492ca) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa44,	// (0x00051896) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa44,	// (0x00051896) list_double2_large_graphic_pane_vc_g

0x5be1,	// (0x00047a33) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5be1,	// (0x00047a33) list_double2_large_graphic_pane_vc_t1

0x78d4,	// (0x00049726) list_double_time_pane_vc_g1_ParamLimits

0x78d4,	// (0x00049726) list_double_time_pane_vc_g1

0x78e0,	// (0x00049732) list_double_time_pane_vc_g2_ParamLimits

0x78e0,	// (0x00049732) list_double_time_pane_vc_g2

0x0001,

0xfa4b,	// (0x0005189d) list_double_time_pane_vc_g_ParamLimits

0xfa4b,	// (0x0005189d) list_double_time_pane_vc_g

0x5bf7,	// (0x00047a49) list_double_time_pane_vc_t1_ParamLimits

0x5bf7,	// (0x00047a49) list_double_time_pane_vc_t1

0x5c21,	// (0x00047a73) list_double_time_pane_vc_t2_ParamLimits

0x5c21,	// (0x00047a73) list_double_time_pane_vc_t2

0x5c6a,	// (0x00047abc) list_double_time_pane_vc_t3_ParamLimits

0x5c6a,	// (0x00047abc) list_double_time_pane_vc_t3

0x5c7c,	// (0x00047ace) list_double_time_pane_vc_t4_ParamLimits

0x5c7c,	// (0x00047ace) list_double_time_pane_vc_t4

0x0003,

0xfa50,	// (0x000518a2) list_double_time_pane_vc_t_ParamLimits

0xfa50,	// (0x000518a2) list_double_time_pane_vc_t

0x6fe4,	// (0x00048e36) list_double_pane_vc_g1_ParamLimits

0x6fe4,	// (0x00048e36) list_double_pane_vc_g1

0x7478,	// (0x000492ca) list_double_pane_vc_g2_ParamLimits

0x7478,	// (0x000492ca) list_double_pane_vc_g2

0x0001,

0xf7ea,	// (0x0005163c) list_double_pane_vc_g_ParamLimits

0xf7ea,	// (0x0005163c) list_double_pane_vc_g

0x5ca1,	// (0x00047af3) list_double_pane_vc_t1_ParamLimits

0x5ca1,	// (0x00047af3) list_double_pane_vc_t1

0x5cb5,	// (0x00047b07) list_double_pane_vc_t2_ParamLimits

0x5cb5,	// (0x00047b07) list_double_pane_vc_t2

0x0001,

0xfa59,	// (0x000518ab) list_double_pane_vc_t_ParamLimits

0xfa59,	// (0x000518ab) list_double_pane_vc_t

0x6fe4,	// (0x00048e36) list_double_number_pane_vc_g1_ParamLimits

0x6fe4,	// (0x00048e36) list_double_number_pane_vc_g1

0x7478,	// (0x000492ca) list_double_number_pane_vc_g2_ParamLimits

0x7478,	// (0x000492ca) list_double_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x0005163c) list_double_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x0005163c) list_double_number_pane_vc_g

0x5ccb,	// (0x00047b1d) list_double_number_pane_vc_t1_ParamLimits

0x5ccb,	// (0x00047b1d) list_double_number_pane_vc_t1

0x5cdf,	// (0x00047b31) list_double_number_pane_vc_t2_ParamLimits

0x5cdf,	// (0x00047b31) list_double_number_pane_vc_t2

0x5cf3,	// (0x00047b45) list_double_number_pane_vc_t3_ParamLimits

0x5cf3,	// (0x00047b45) list_double_number_pane_vc_t3

0x0002,

0xfa5e,	// (0x000518b0) list_double_number_pane_vc_t_ParamLimits

0xfa5e,	// (0x000518b0) list_double_number_pane_vc_t

0x78ec,	// (0x0004973e) list_double_large_graphic_pane_vc_g1_ParamLimits

0x78ec,	// (0x0004973e) list_double_large_graphic_pane_vc_g1

0x78fd,	// (0x0004974f) list_double_large_graphic_pane_vc_g2_ParamLimits

0x78fd,	// (0x0004974f) list_double_large_graphic_pane_vc_g2

0x7478,	// (0x000492ca) list_double_large_graphic_pane_vc_g3_ParamLimits

0x7478,	// (0x000492ca) list_double_large_graphic_pane_vc_g3

0x5d09,	// (0x00047b5b) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5d09,	// (0x00047b5b) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa65,	// (0x000518b7) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa65,	// (0x000518b7) list_double_large_graphic_pane_vc_g

0x5d15,	// (0x00047b67) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5d15,	// (0x00047b67) list_double_large_graphic_pane_vc_t1

0x5d2e,	// (0x00047b80) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5d2e,	// (0x00047b80) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6e,	// (0x000518c0) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6e,	// (0x000518c0) list_double_large_graphic_pane_vc_t

0x78b0,	// (0x00049702) list_double_heading_pane_vc_g1_ParamLimits

0x78b0,	// (0x00049702) list_double_heading_pane_vc_g1

0x78bc,	// (0x0004970e) list_double_heading_pane_vc_g2_ParamLimits

0x78bc,	// (0x0004970e) list_double_heading_pane_vc_g2

0x0001,

0xfa73,	// (0x000518c5) list_double_heading_pane_vc_g_ParamLimits

0xfa73,	// (0x000518c5) list_double_heading_pane_vc_g

0x5d45,	// (0x00047b97) list_double_heading_pane_vc_t1_ParamLimits

0x5d45,	// (0x00047b97) list_double_heading_pane_vc_t1

0x59ed,	// (0x0004783f) list_double_heading_pane_vc_t2_ParamLimits

0x59ed,	// (0x0004783f) list_double_heading_pane_vc_t2

0x0001,

0xfa78,	// (0x000518ca) list_double_heading_pane_vc_t_ParamLimits

0xfa78,	// (0x000518ca) list_double_heading_pane_vc_t

0x59cb,	// (0x0004781d) list_double_graphic_pane_vc_g1_ParamLimits

0x59cb,	// (0x0004781d) list_double_graphic_pane_vc_g1

0x790c,	// (0x0004975e) list_double_graphic_pane_vc_g2_ParamLimits

0x790c,	// (0x0004975e) list_double_graphic_pane_vc_g2

0x791b,	// (0x0004976d) list_double_graphic_pane_vc_g3_ParamLimits

0x791b,	// (0x0004976d) list_double_graphic_pane_vc_g3

0x0002,

0xfa7d,	// (0x000518cf) list_double_graphic_pane_vc_g_ParamLimits

0xfa7d,	// (0x000518cf) list_double_graphic_pane_vc_g

0x5d57,	// (0x00047ba9) list_double_graphic_pane_vc_t1_ParamLimits

0x5d57,	// (0x00047ba9) list_double_graphic_pane_vc_t1

0x5d6b,	// (0x00047bbd) list_double_graphic_pane_vc_t2_ParamLimits

0x5d6b,	// (0x00047bbd) list_double_graphic_pane_vc_t2

0x0001,

0xfa84,	// (0x000518d6) list_double_graphic_pane_vc_t_ParamLimits

0xfa84,	// (0x000518d6) list_double_graphic_pane_vc_t

0x6083,	// (0x00047ed5) aid_size_cell_fastswap

0x608b,	// (0x00047edd) aid_size_cell_touch_ParamLimits

0x608b,	// (0x00047edd) aid_size_cell_touch

0x62ec,	// (0x0004813e) popup_fast_swap_wide_window_ParamLimits

0x62ec,	// (0x0004813e) popup_fast_swap_wide_window

0x6402,	// (0x00048254) touch_pane_ParamLimits

0x6402,	// (0x00048254) touch_pane

0x0b68,	// (0x000429ba) button_value_adjust_pane_cp2

0x5684,	// (0x000474d6) button_value_adjust_pane_cp4

0x56ac,	// (0x000474fe) form_field_data_pane_cp2

0x56d1,	// (0x00047523) form_field_data_wide_pane_cp2

0x0ece,	// (0x00042d20) bg_scroll_pane_ParamLimits

0x6b5b,	// (0x000489ad) scroll_handle_pane_ParamLimits

0x6b6f,	// (0x000489c1) scroll_sc2_down_pane_ParamLimits

0x6b6f,	// (0x000489c1) scroll_sc2_down_pane

0x22ca,	// (0x0004411c) scroll_sc2_up_pane_ParamLimits

0x22ca,	// (0x0004411c) scroll_sc2_up_pane

0xb6f1,	// (0x0004d543) grid_wheel_folder_pane_g1_ParamLimits

0xb6f1,	// (0x0004d543) grid_wheel_folder_pane_g1

0x6e93,	// (0x00048ce5) clock_nsta_pane_cp2_ParamLimits

0x6e93,	// (0x00048ce5) clock_nsta_pane_cp2

0x6917,	// (0x00048769) listscroll_midp_pane_ParamLimits

0x707b,	// (0x00048ecd) midp_canvas_pane

0x88e5,	// (0x0004a737) nsta_clock_indic_pane

0x8933,	// (0x0004a785) listscroll_form_pane_vc

0x894f,	// (0x0004a7a1) listscroll_set_pane_vc_ParamLimits

0x894f,	// (0x0004a7a1) listscroll_set_pane_vc

0x906b,	// (0x0004aebd) clock_nsta_pane

0x90e8,	// (0x0004af3a) indicator_nsta_pane

0x93e0,	// (0x0004b232) bg_popup_sub_pane_cp2_ParamLimits

0x93f4,	// (0x0004b246) find_pane_cp2_ParamLimits

0x93f4,	// (0x0004b246) find_pane_cp2

0x940a,	// (0x0004b25c) grid_toobar_pane_ParamLimits

0x94ea,	// (0x0004b33c) list_form_gen_pane_vc_ParamLimits

0x94ea,	// (0x0004b33c) list_form_gen_pane_vc

0x9500,	// (0x0004b352) scroll_pane_cp8_vc_ParamLimits

0x9500,	// (0x0004b352) scroll_pane_cp8_vc

0x957c,	// (0x0004b3ce) data_form_wide_pane_vc_ParamLimits

0x957c,	// (0x0004b3ce) data_form_wide_pane_vc

0x9588,	// (0x0004b3da) form_field_data_wide_pane_vc_g1

0x9590,	// (0x0004b3e2) form_field_data_wide_pane_vc_t1_ParamLimits

0x9590,	// (0x0004b3e2) form_field_data_wide_pane_vc_t1

0x0b7c,	// (0x000429ce) input_focus_pane_cp6_vc_ParamLimits

0x0b7c,	// (0x000429ce) input_focus_pane_cp6_vc

0x9892,	// (0x0004b6e4) list_midp_pane_ParamLimits

0x989e,	// (0x0004b6f0) scroll_pane_cp16_ParamLimits

0x989e,	// (0x0004b6f0) scroll_pane_cp16

0x98ec,	// (0x0004b73e) button_value_adjust_pane_ParamLimits

0x98ec,	// (0x0004b73e) button_value_adjust_pane

0xa891,	// (0x0004c6e3) button_value_adjust_pane_cp6_ParamLimits

0xa891,	// (0x0004c6e3) button_value_adjust_pane_cp6

0xa9df,	// (0x0004c831) settings_code_pane_cp_ParamLimits

0xa9df,	// (0x0004c831) settings_code_pane_cp

0xd6d4,	// (0x0004f526) cell_touch_pane_g1

0xd6d4,	// (0x0004f526) cell_touch_pane_g2

0x0001,

0xf70e,	// (0x00051560) cell_touch_pane_g

0xafe4,	// (0x0004ce36) cell_touch_pane_cp_ParamLimits

0xafe4,	// (0x0004ce36) cell_touch_pane_cp

0xaff4,	// (0x0004ce46) cell_touch_pane_ParamLimits

0xaff4,	// (0x0004ce46) cell_touch_pane

0xd6d4,	// (0x0004f526) scroll_sc2_down_pane_g1

0xd6d4,	// (0x0004f526) scroll_sc2_up_pane_g1

0xd6de,	// (0x0004f530) bg_set_opt_pane_cp4_vc

0xb005,	// (0x0004ce57) list_set_graphic_pane_vc_g1_ParamLimits

0xb005,	// (0x0004ce57) list_set_graphic_pane_vc_g1

0x25de,	// (0x00044430) list_set_graphic_pane_vc_g2_ParamLimits

0x25de,	// (0x00044430) list_set_graphic_pane_vc_g2

0x0001,

0xfa0a,	// (0x0005185c) list_set_graphic_pane_vc_g_ParamLimits

0xfa0a,	// (0x0005185c) list_set_graphic_pane_vc_g

0xb011,	// (0x0004ce63) text_primary_small_cp13_vc_ParamLimits

0xb011,	// (0x0004ce63) text_primary_small_cp13_vc

0xb029,	// (0x0004ce7b) list_set_graphic_pane_vc_ParamLimits

0xb029,	// (0x0004ce7b) list_set_graphic_pane_vc

0xd6de,	// (0x0004f530) input_focus_pane_cp2_vc

0xd6d4,	// (0x0004f526) setting_code_pane_vc_g1

0x057e,	// (0x000423d0) setting_code_pane_vc_t1

0xb03e,	// (0x0004ce90) set_text_pane_vc_t1_ParamLimits

0xb03e,	// (0x0004ce90) set_text_pane_vc_t1

0xd6de,	// (0x0004f530) input_focus_pane_cp1_vc

0xb05c,	// (0x0004ceae) list_set_text_pane_vc

0xd6d4,	// (0x0004f526) setting_text_pane_vc_g1

0xd6de,	// (0x0004f530) bg_set_opt_pane_cp2_vc

0x0575,	// (0x000423c7) setting_slider_graphic_pane_vc_g1

0xb066,	// (0x0004ceb8) setting_slider_graphic_pane_vc_t1

0xb078,	// (0x0004ceca) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa0f,	// (0x00051861) setting_slider_graphic_pane_vc_t

0xb08a,	// (0x0004cedc) slider_set_pane_cp_vc

0xb094,	// (0x0004cee6) slider_set_pane_vc_g1

0xb09d,	// (0x0004ceef) slider_set_pane_vc_g2

0x0006,

0xfa14,	// (0x00051866) slider_set_pane_vc_g

0x0bd7,	// (0x00042a29) set_opt_bg_pane_g1_copy1

0x0bdf,	// (0x00042a31) set_opt_bg_pane_g2_copy1

0xb0c9,	// (0x0004cf1b) set_opt_bg_pane_g3_copy1

0x0bef,	// (0x00042a41) set_opt_bg_pane_g4_copy1

0x0bf7,	// (0x00042a49) set_opt_bg_pane_g5_copy1

0x0bff,	// (0x00042a51) set_opt_bg_pane_g6_copy1

0xb0d3,	// (0x0004cf25) set_opt_bg_pane_g7_copy1

0xb0dd,	// (0x0004cf2f) set_opt_bg_pane_g8_copy1

0xb0e7,	// (0x0004cf39) set_opt_bg_pane_g9_copy1

0xd6de,	// (0x0004f530) bg_set_opt_pane_cp_vc

0xb0f1,	// (0x0004cf43) setting_slider_pane_vc_t1

0xb100,	// (0x0004cf52) setting_slider_pane_vc_t2

0xb112,	// (0x0004cf64) setting_slider_pane_vc_t3

0x0002,

0xfa23,	// (0x00051875) setting_slider_pane_vc_t

0xb124,	// (0x0004cf76) slider_set_pane_vc

0x75a1,	// (0x000493f3) volume_set_pane_vc_g1

0x75aa,	// (0x000493fc) volume_set_pane_vc_g2

0x75b3,	// (0x00049405) volume_set_pane_vc_g3

0x75bc,	// (0x0004940e) volume_set_pane_vc_g4

0x75c5,	// (0x00049417) volume_set_pane_vc_g5

0x75ce,	// (0x00049420) volume_set_pane_vc_g6

0x75d7,	// (0x00049429) volume_set_pane_vc_g7

0x75e0,	// (0x00049432) volume_set_pane_vc_g8

0x75e9,	// (0x0004943b) volume_set_pane_vc_g9

0x75f2,	// (0x00049444) volume_set_pane_vc_g10

0x0009,

0xf8c1,	// (0x00051713) volume_set_pane_vc_g

0xb12e,	// (0x0004cf80) volume_set_pane_vc

0xb138,	// (0x0004cf8a) button_value_adjust_pane_cp1_vc

0xb142,	// (0x0004cf94) list_highlight_pane_cp2_vc

0xb14b,	// (0x0004cf9d) list_set_pane_vc_ParamLimits

0xb14b,	// (0x0004cf9d) list_set_pane_vc

0xb1bb,	// (0x0004d00d) main_pane_set_vc_t1_ParamLimits

0xb1bb,	// (0x0004d00d) main_pane_set_vc_t1

0xb1d0,	// (0x0004d022) main_pane_set_vc_t2_ParamLimits

0xb1d0,	// (0x0004d022) main_pane_set_vc_t2

0xb1e2,	// (0x0004d034) main_pane_set_vc_t3_ParamLimits

0xb1e2,	// (0x0004d034) main_pane_set_vc_t3

0xb1f6,	// (0x0004d048) main_pane_set_vc_t4_ParamLimits

0xb1f6,	// (0x0004d048) main_pane_set_vc_t4

0x0003,

0xfa2a,	// (0x0005187c) main_pane_set_vc_t_ParamLimits

0xfa2a,	// (0x0005187c) main_pane_set_vc_t

0xb20a,	// (0x0004d05c) setting_code_pane_vc_ParamLimits

0xb20a,	// (0x0004d05c) setting_code_pane_vc

0xb21b,	// (0x0004d06d) setting_slider_graphic_pane_vc

0xb21b,	// (0x0004d06d) setting_slider_pane_vc

0xb21b,	// (0x0004d06d) setting_text_pane_vc

0xb21b,	// (0x0004d06d) setting_volume_pane_vc

0xb225,	// (0x0004d077) scroll_pane_cp121_vc

0x0b56,	// (0x000429a8) set_content_pane_vc

0xb22d,	// (0x0004d07f) button_value_adjust_pane_g1

0xb236,	// (0x0004d088) button_value_adjust_pane_g2

0x0001,

0xfa89,	// (0x000518db) button_value_adjust_pane_g

0xb23f,	// (0x0004d091) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb23f,	// (0x0004d091) form_field_slider_wide_pane_vc_t1

0xb251,	// (0x0004d0a3) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb251,	// (0x0004d0a3) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8e,	// (0x000518e0) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8e,	// (0x000518e0) form_field_slider_wide_pane_vc_t

0xd738,	// (0x0004f58a) input_focus_pane_cp10_vc_ParamLimits

0xd738,	// (0x0004f58a) input_focus_pane_cp10_vc

0xb27d,	// (0x0004d0cf) slider_cont_pane_cp1_vc_ParamLimits

0xb27d,	// (0x0004d0cf) slider_cont_pane_cp1_vc

0xb28f,	// (0x0004d0e1) slider_form_pane_g1_cp2

0xb09d,	// (0x0004ceef) slider_form_pane_g2_cp2

0xb2bc,	// (0x0004d10e) form_field_slider_pane_vc_t3

0xb2ca,	// (0x0004d11c) form_field_slider_pane_vc_t4

0xb2d8,	// (0x0004d12a) slider_form_pane_vc_ParamLimits

0xb2d8,	// (0x0004d12a) slider_form_pane_vc

0xb2e5,	// (0x0004d137) form_field_slider_pane_vc_t1_ParamLimits

0xb2e5,	// (0x0004d137) form_field_slider_pane_vc_t1

0xb251,	// (0x0004d0a3) form_field_slider_pane_vc_t2_ParamLimits

0xb251,	// (0x0004d0a3) form_field_slider_pane_vc_t2

0x0001,

0xfaa0,	// (0x000518f2) form_field_slider_pane_vc_t_ParamLimits

0xfaa0,	// (0x000518f2) form_field_slider_pane_vc_t

0xd738,	// (0x0004f58a) input_focus_pane_cp9_vc_ParamLimits

0xd738,	// (0x0004f58a) input_focus_pane_cp9_vc

0xb2fb,	// (0x0004d14d) slider_cont_pane_vc_ParamLimits

0xb2fb,	// (0x0004d14d) slider_cont_pane_vc

0xb30f,	// (0x0004d161) list_form_graphic_pane_cp_vc_ParamLimits

0xb30f,	// (0x0004d161) list_form_graphic_pane_cp_vc

0x9588,	// (0x0004b3da) form_field_popup_wide_pane_vc_g1

0xb324,	// (0x0004d176) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb324,	// (0x0004d176) form_field_popup_wide_pane_vc_t1

0x0b7c,	// (0x000429ce) input_focus_pane_cp8_vc_ParamLimits

0x0b7c,	// (0x000429ce) input_focus_pane_cp8_vc

0xb369,	// (0x0004d1bb) list_form_wide_pane_vc_ParamLimits

0xb369,	// (0x0004d1bb) list_form_wide_pane_vc

0xb375,	// (0x0004d1c7) list_form_graphic_pane_vc_g1

0xb37d,	// (0x0004d1cf) list_form_graphic_pane_vc_t1_ParamLimits

0xb37d,	// (0x0004d1cf) list_form_graphic_pane_vc_t1

0x0567,	// (0x000423b9) list_highlight_pane_cp5_vc_ParamLimits

0x0567,	// (0x000423b9) list_highlight_pane_cp5_vc

0xb399,	// (0x0004d1eb) list_form_graphic_pane_vc_ParamLimits

0xb399,	// (0x0004d1eb) list_form_graphic_pane_vc

0x9588,	// (0x0004b3da) form_field_popup_pane_vc_g1

0xb3af,	// (0x0004d201) form_field_popup_pane_vc_t1_ParamLimits

0xb3af,	// (0x0004d201) form_field_popup_pane_vc_t1

0x0b7c,	// (0x000429ce) input_focus_pane_cp7_vc_ParamLimits

0x0b7c,	// (0x000429ce) input_focus_pane_cp7_vc

0xb3c6,	// (0x0004d218) list_form_pane_vc_ParamLimits

0xb3c6,	// (0x0004d218) list_form_pane_vc

0xb3d2,	// (0x0004d224) data_form_pane_vc_t1_ParamLimits

0xb3d2,	// (0x0004d224) data_form_pane_vc_t1

0x0bd7,	// (0x00042a29) input_focus_pane_vc_g1

0x0bdf,	// (0x00042a31) input_focus_pane_vc_g2

0x0be7,	// (0x00042a39) input_focus_pane_vc_g3

0x0bef,	// (0x00042a41) input_focus_pane_vc_g4

0x0bf7,	// (0x00042a49) input_focus_pane_vc_g5

0x0bff,	// (0x00042a51) input_focus_pane_vc_g6

0x0c07,	// (0x00042a59) input_focus_pane_vc_g7

0x0c0f,	// (0x00042a61) input_focus_pane_vc_g8

0x0c17,	// (0x00042a69) input_focus_pane_vc_g9

0xd6d4,	// (0x0004f526) input_focus_pane_vc_g10

0x0009,

0xf697,	// (0x000514e9) input_focus_pane_vc_g

0x957c,	// (0x0004b3ce) data_form_pane_vc_ParamLimits

0x957c,	// (0x0004b3ce) data_form_pane_vc

0x9588,	// (0x0004b3da) form_field_data_pane_vc_g1

0xb3ef,	// (0x0004d241) form_field_data_pane_vc_t1_ParamLimits

0xb3ef,	// (0x0004d241) form_field_data_pane_vc_t1

0x0b7c,	// (0x000429ce) input_focus_pane_vc_ParamLimits

0x0b7c,	// (0x000429ce) input_focus_pane_vc

0xb409,	// (0x0004d25b) button_value_adjust_pane_cp3_vc

0xb411,	// (0x0004d263) button_value_adjust_pane_cp5_vc

0xb419,	// (0x0004d26b) form_field_data_pane_vc_ParamLimits

0xb419,	// (0x0004d26b) form_field_data_pane_vc

0xb434,	// (0x0004d286) form_field_data_pane_vc_cp2

0xb43c,	// (0x0004d28e) form_field_data_wide_pane_vc_ParamLimits

0xb43c,	// (0x0004d28e) form_field_data_wide_pane_vc

0xb456,	// (0x0004d2a8) form_field_data_wide_pane_vc_cp2

0xb45e,	// (0x0004d2b0) form_field_popup_pane_vc_ParamLimits

0xb45e,	// (0x0004d2b0) form_field_popup_pane_vc

0xb479,	// (0x0004d2cb) form_field_popup_wide_pane_vc_ParamLimits

0xb479,	// (0x0004d2cb) form_field_popup_wide_pane_vc

0xb493,	// (0x0004d2e5) form_field_slider_pane_vc_ParamLimits

0xb493,	// (0x0004d2e5) form_field_slider_pane_vc

0xb4a6,	// (0x0004d2f8) form_field_slider_wide_pane_vc_ParamLimits

0xb4a6,	// (0x0004d2f8) form_field_slider_wide_pane_vc

0xb4b9,	// (0x0004d30b) grid_touch_1_pane_ParamLimits

0xb4b9,	// (0x0004d30b) grid_touch_1_pane

0xb4c5,	// (0x0004d317) grid_touch_2_pane_ParamLimits

0xb4c5,	// (0x0004d317) grid_touch_2_pane

0x88b0,	// (0x0004a702) touch_pane_g1_ParamLimits

0x88b0,	// (0x0004a702) touch_pane_g1

0xb4df,	// (0x0004d331) cell_app_pane_cp_wide_ParamLimits

0xb4df,	// (0x0004d331) cell_app_pane_cp_wide

0xb4f0,	// (0x0004d342) grid_popup_fast_wide_pane_ParamLimits

0xb4f0,	// (0x0004d342) grid_popup_fast_wide_pane

0xb504,	// (0x0004d356) scroll_pane_cp19_ParamLimits

0xb504,	// (0x0004d356) scroll_pane_cp19

0xd6de,	// (0x0004f530) bg_popup_window_pane_cp20

0xb518,	// (0x0004d36a) listscroll_popup_fast_wide_pane

0x0567,	// (0x000423b9) grid_indicator_nsta_pane

0xb520,	// (0x0004d372) clock_nsta_pane_g1

0xb529,	// (0x0004d37b) clock_nsta_pane_t1

0xb545,	// (0x0004d397) cell_indicator_nsta_pane_ParamLimits

0xb545,	// (0x0004d397) cell_indicator_nsta_pane

0xb57d,	// (0x0004d3cf) cell_indicator_nsta_pane_g1

0xb58b,	// (0x0004d3dd) cell_indicator_nsta_pane_g2

0x0001,

0xfab1,	// (0x00051903) cell_indicator_nsta_pane_g

0xb5a1,	// (0x0004d3f3) clock_nsta_pane_cp

0xb5a9,	// (0x0004d3fb) indicator_nsta_pane_cp

0xb5b2,	// (0x0004d404) nsta_clock_indic_pane_g1

0x05a3,	// (0x000423f5) grid_indicator_pane

0x23bc,	// (0x0004420e) scroll_pane_cp29

0x6ddf,	// (0x00048c31) indicator_nsta_pane_cp2_ParamLimits

0x6ddf,	// (0x00048c31) indicator_nsta_pane_cp2

0x0567,	// (0x000423b9) main_apps_wheel_pane

0x976f,	// (0x0004b5c1) form_midp_field_text_pane_ParamLimits

0x98be,	// (0x0004b710) scroll_bar_cp050_ParamLimits

0xb61b,	// (0x0004d46d) cell_indicator_pane_ParamLimits

0xb61b,	// (0x0004d46d) cell_indicator_pane

0xb633,	// (0x0004d485) cell_indicator_pane_g1

0xb63d,	// (0x0004d48f) grid_wheel_folder_pane_ParamLimits

0xb63d,	// (0x0004d48f) grid_wheel_folder_pane

0xb651,	// (0x0004d4a3) list_wheel_apps_pane_ParamLimits

0xb651,	// (0x0004d4a3) list_wheel_apps_pane

0xb664,	// (0x0004d4b6) main_apps_wheel_pane_g1_ParamLimits

0xb664,	// (0x0004d4b6) main_apps_wheel_pane_g1

0xb680,	// (0x0004d4d2) main_apps_wheel_pane_g2_ParamLimits

0xb680,	// (0x0004d4d2) main_apps_wheel_pane_g2

0x0001,

0xfacd,	// (0x0005191f) main_apps_wheel_pane_g_ParamLimits

0xfacd,	// (0x0005191f) main_apps_wheel_pane_g

0xb69c,	// (0x0004d4ee) main_apps_wheel_pane_t1_ParamLimits

0xb69c,	// (0x0004d4ee) main_apps_wheel_pane_t1

0xb6c5,	// (0x0004d517) list_wheel_apps_pane_g1

0xb6cd,	// (0x0004d51f) list_wheel_apps_pane_g2

0xb6d5,	// (0x0004d527) list_wheel_apps_pane_g3

0xb6dd,	// (0x0004d52f) list_wheel_apps_pane_g4

0xb6e7,	// (0x0004d539) list_wheel_apps_pane_g5

0x0004,

0xfad2,	// (0x00051924) list_wheel_apps_pane_g

0x469e,	// (0x000464f0) navi_icon_text_pane

0x8f98,	// (0x0004adea) aid_fill_nsta

0xb708,	// (0x0004d55a) navi_icon_text_pane_g1

0xb714,	// (0x0004d566) navi_icon_text_pane_t1

0x6f28,	// (0x00048d7a) list_set_graphic_pane_t1_ParamLimits

0x6f28,	// (0x00048d7a) list_set_graphic_pane_t1

0xa00f,	// (0x0004be61) popup_midp_note_alarm_window_t6_ParamLimits

0xa00f,	// (0x0004be61) popup_midp_note_alarm_window_t6

0xa021,	// (0x0004be73) popup_midp_note_alarm_window_t7_ParamLimits

0xa021,	// (0x0004be73) popup_midp_note_alarm_window_t7

0xa033,	// (0x0004be85) popup_midp_note_alarm_window_t8_ParamLimits

0xa033,	// (0x0004be85) popup_midp_note_alarm_window_t8

0xa045,	// (0x0004be97) popup_midp_note_alarm_window_t9_ParamLimits

0xa045,	// (0x0004be97) popup_midp_note_alarm_window_t9

0xa057,	// (0x0004bea9) popup_midp_note_alarm_window_t10_ParamLimits

0xa057,	// (0x0004bea9) popup_midp_note_alarm_window_t10

0xa069,	// (0x0004bebb) popup_midp_note_alarm_window_t11_ParamLimits

0xa069,	// (0x0004bebb) popup_midp_note_alarm_window_t11

0xa07b,	// (0x0004becd) scroll_pane_cp17_ParamLimits

0xa07b,	// (0x0004becd) scroll_pane_cp17

0x75a1,	// (0x000493f3) volume_small_pane_cp_g1

0x7927,	// (0x00049779) volume_small_pane_cp_g2

0x7930,	// (0x00049782) volume_small_pane_cp_g3

0x7939,	// (0x0004978b) volume_small_pane_cp_g4

0x7942,	// (0x00049794) volume_small_pane_cp_g5

0x794b,	// (0x0004979d) volume_small_pane_cp_g6

0x7954,	// (0x000497a6) volume_small_pane_cp_g7

0x795d,	// (0x000497af) volume_small_pane_cp_g8

0x7966,	// (0x000497b8) volume_small_pane_cp_g9

0x796f,	// (0x000497c1) volume_small_pane_cp_g10

0x7144,	// (0x00048f96) midp_ticker_pane_g1_ParamLimits

0x7150,	// (0x00048fa2) midp_ticker_pane_g2_ParamLimits

0xf763,	// (0x000515b5) midp_ticker_pane_g_ParamLimits

0x715c,	// (0x00048fae) midp_ticker_pane_t1_ParamLimits

0x8fae,	// (0x0004ae00) aid_fill_nsta_2

0x98aa,	// (0x0004b6fc) list_form2_midp_pane

0xaa26,	// (0x0004c878) midp_editing_number_pane_ParamLimits

0xaa35,	// (0x0004c887) midp_ticker_pane_ParamLimits

0xb726,	// (0x0004d578) form2_midp_field_pane

0xb74a,	// (0x0004d59c) scroll_pane_cp51

0xb76a,	// (0x0004d5bc) form2_midp_button_pane_ParamLimits

0xb76a,	// (0x0004d5bc) form2_midp_button_pane

0xb77c,	// (0x0004d5ce) form2_midp_content_pane_ParamLimits

0xb77c,	// (0x0004d5ce) form2_midp_content_pane

0xb796,	// (0x0004d5e8) form2_midp_field_choice_group_pane

0xb79e,	// (0x0004d5f0) form2_midp_field_pane_g1

0xb7a6,	// (0x0004d5f8) form2_midp_field_pane_g2

0xb7ae,	// (0x0004d600) form2_midp_field_pane_g3

0xb7b6,	// (0x0004d608) form2_midp_field_pane_g4

0x0003,

0xfaf7,	// (0x00051949) form2_midp_field_pane_g

0xb7be,	// (0x0004d610) form2_midp_gauge_slider_pane

0xb7c6,	// (0x0004d618) form2_midp_gauge_wait_pane

0xb7ce,	// (0x0004d620) form2_midp_image_pane_ParamLimits

0xb7ce,	// (0x0004d620) form2_midp_image_pane

0xb7e9,	// (0x0004d63b) form2_midp_label_pane_ParamLimits

0xb7e9,	// (0x0004d63b) form2_midp_label_pane

0xb808,	// (0x0004d65a) form2_midp_label_pane_cp_ParamLimits

0xb808,	// (0x0004d65a) form2_midp_label_pane_cp

0xb829,	// (0x0004d67b) form2_midp_string_pane_ParamLimits

0xb829,	// (0x0004d67b) form2_midp_string_pane

0x5d81,	// (0x00047bd3) form2_midp_text_pane_ParamLimits

0x5d81,	// (0x00047bd3) form2_midp_text_pane

0xb83b,	// (0x0004d68d) form2_midp_time_pane

0xb84b,	// (0x0004d69d) input_focus_pane_cp51_ParamLimits

0xb84b,	// (0x0004d69d) input_focus_pane_cp51

0xb863,	// (0x0004d6b5) form2_midp_label_pane_t1_ParamLimits

0xb863,	// (0x0004d6b5) form2_midp_label_pane_t1

0x5da4,	// (0x00047bf6) form2_mdip_text_pane_t1_ParamLimits

0x5da4,	// (0x00047bf6) form2_mdip_text_pane_t1

0x5dc3,	// (0x00047c15) form2_midp_time_pane_t1

0xb8b1,	// (0x0004d703) form2_midp_gauge_slider_pane_t1

0xb8c3,	// (0x0004d715) form2_midp_gauge_slider_pane_t2

0xb8d5,	// (0x0004d727) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb00,	// (0x00051952) form2_midp_gauge_slider_pane_t

0xb8e7,	// (0x0004d739) form2_midp_slider_pane

0xb8f3,	// (0x0004d745) form2_midp_gauge_wait_pane_t1

0xb901,	// (0x0004d753) form2_midp_wait_pane_ParamLimits

0xb901,	// (0x0004d753) form2_midp_wait_pane

0x95cf,	// (0x0004b421) list_single_2graphic_pane_cp4_ParamLimits

0x95cf,	// (0x0004b421) list_single_2graphic_pane_cp4

0xb92c,	// (0x0004d77e) list_single_midp_graphic_pane_cp_ParamLimits

0xb92c,	// (0x0004d77e) list_single_midp_graphic_pane_cp

0xd6de,	// (0x0004f530) list_highlight_pane_cp20

0xb950,	// (0x0004d7a2) list_single_2graphic_pane_g1_cp4

0xaebb,	// (0x0004cd0d) list_single_2graphic_pane_g2_cp4

0xb958,	// (0x0004d7aa) list_single_2graphic_pane_t1_cp4

0x0567,	// (0x000423b9) list_highlight_pane_cp21

0xb967,	// (0x0004d7b9) list_single_midp_graphic_pane_g4_cp

0xb976,	// (0x0004d7c8) list_single_midp_graphic_pane_t1_cp

0xb98b,	// (0x0004d7dd) form2_mdip_string_pane_t1_ParamLimits

0xb98b,	// (0x0004d7dd) form2_mdip_string_pane_t1

0xd6de,	// (0x0004f530) bg_wml_button_pane_cp2

0xd6d4,	// (0x0004f526) form2_midp_image_pane_g1

0x686a,	// (0x000486bc) list_double_large_graphic_pane_g5_ParamLimits

0x686a,	// (0x000486bc) list_double_large_graphic_pane_g5

0x6917,	// (0x00048769) midp_form_pane_ParamLimits

0x0567,	// (0x000423b9) main_apps_wheel_pane_ParamLimits

0x8d42,	// (0x0004ab94) popup_preview_window_ParamLimits

0x8d42,	// (0x0004ab94) popup_preview_window

0x8f29,	// (0x0004ad7b) popup_touch_info_window_ParamLimits

0x8f29,	// (0x0004ad7b) popup_touch_info_window

0x8f4b,	// (0x0004ad9d) popup_touch_menu_window_ParamLimits

0x8f4b,	// (0x0004ad9d) popup_touch_menu_window

0xd6ca,	// (0x0004f51c) bg_popup_sub_pane_cp6

0xba30,	// (0x0004d882) list_touch_menu_pane

0xba38,	// (0x0004d88a) list_single_touch_menu_pane_ParamLimits

0xba38,	// (0x0004d88a) list_single_touch_menu_pane

0xba50,	// (0x0004d8a2) list_single_touch_menu_pane_t1

0x0567,	// (0x000423b9) bg_popup_sub_pane_cp7_ParamLimits

0x0567,	// (0x000423b9) bg_popup_sub_pane_cp7

0xba5e,	// (0x0004d8b0) heading_sub_pane

0xba66,	// (0x0004d8b8) list_touch_info_pane_ParamLimits

0xba66,	// (0x0004d8b8) list_touch_info_pane

0xba75,	// (0x0004d8c7) list_single_touch_info_pane_ParamLimits

0xba75,	// (0x0004d8c7) list_single_touch_info_pane

0xba87,	// (0x0004d8d9) list_single_touch_info_pane_t1

0xba95,	// (0x0004d8e7) list_single_touch_info_pane_t2

0x0001,

0xfb0e,	// (0x00051960) list_single_touch_info_pane_t

0x7073,	// (0x00048ec5) bg_popup_heading_pane_cp

0xbaa3,	// (0x0004d8f5) heading_sub_pane_t1

0x9516,	// (0x0004b368) bg_popup_preview_window_pane_cp_ParamLimits

0x9516,	// (0x0004b368) bg_popup_preview_window_pane_cp

0xba5e,	// (0x0004d8b0) heading_preview_pane

0xba66,	// (0x0004d8b8) list_preview_pane_ParamLimits

0xba66,	// (0x0004d8b8) list_preview_pane

0xbab1,	// (0x0004d903) popup_preview_window_g1

0xba75,	// (0x0004d8c7) list_single_preview_pane_ParamLimits

0xba75,	// (0x0004d8c7) list_single_preview_pane

0xbab9,	// (0x0004d90b) list_single_preview_pane_g1

0xbac1,	// (0x0004d913) list_single_preview_pane_t1

0xba87,	// (0x0004d8d9) list_single_preview_pane_t2

0x0001,

0xfb13,	// (0x00051965) list_single_preview_pane_t

0xbacf,	// (0x0004d921) bg_popup_heading_pane_cp2_ParamLimits

0xbacf,	// (0x0004d921) bg_popup_heading_pane_cp2

0xbae5,	// (0x0004d937) heading_preview_pane_g1

0xbaed,	// (0x0004d93f) heading_preview_pane_t1_ParamLimits

0xbaed,	// (0x0004d93f) heading_preview_pane_t1

0x05ba,	// (0x0004240c) soft_indicator_pane_t1_ParamLimits

0x0aef,	// (0x00042941) scroll_pane_ParamLimits

0x0ef6,	// (0x00042d48) scroll_sc2_left_pane

0x0eed,	// (0x00042d3f) scroll_sc2_right_pane

0x22e0,	// (0x00044132) scroll_bg_pane_g1_ParamLimits

0x22f5,	// (0x00044147) scroll_bg_pane_g2_ParamLimits

0x230d,	// (0x0004415f) scroll_bg_pane_g3_ParamLimits

0xf6ee,	// (0x00051540) scroll_bg_pane_g_ParamLimits

0x22e0,	// (0x00044132) scroll_handle_pane_g1_ParamLimits

0x232f,	// (0x00044181) scroll_handle_pane_g2_ParamLimits

0x230d,	// (0x0004415f) scroll_handle_pane_g3_ParamLimits

0xf6f5,	// (0x00051547) scroll_handle_pane_g_ParamLimits

0x8989,	// (0x0004a7db) popup_choice_list_window_ParamLimits

0x8989,	// (0x0004a7db) popup_choice_list_window

0x93ec,	// (0x0004b23e) choice_list_pane

0x946e,	// (0x0004b2c0) cell_toolbar_pane_t1

0x9496,	// (0x0004b2e8) toolbar_button_pane_ParamLimits

0xa545,	// (0x0004c397) ai_gene_pane_1_t2_ParamLimits

0xa545,	// (0x0004c397) ai_gene_pane_1_t2

0x0001,

0xf91d,	// (0x0005176f) ai_gene_pane_1_t_ParamLimits

0xf91d,	// (0x0005176f) ai_gene_pane_1_t

0xbb0a,	// (0x0004d95c) scroll_sc2_left_pane_g1

0xbb0a,	// (0x0004d95c) scroll_sc2_right_pane_g1

0x8961,	// (0x0004a7b3) bg_popup_sub_pane_cp10

0xbb14,	// (0x0004d966) list_choice_list_pane

0xbb2d,	// (0x0004d97f) list_single_choice_list_pane_ParamLimits

0xbb2d,	// (0x0004d97f) list_single_choice_list_pane

0xbb45,	// (0x0004d997) list_single_choice_list_pane_g1

0x0ccd,	// (0x00042b1f) list_single_choice_list_pane_t1_ParamLimits

0x0ccd,	// (0x00042b1f) list_single_choice_list_pane_t1

0xbb4d,	// (0x0004d99f) choice_list_pane_g1

0xbb55,	// (0x0004d9a7) choice_list_pane_t1

0xd6ca,	// (0x0004f51c) input_focus_pane_cp11

0x0e4b,	// (0x00042c9d) title_pane_stacon_g2_ParamLimits

0x0e4b,	// (0x00042c9d) title_pane_stacon_g2

0x0002,

0xf6d4,	// (0x00051526) title_pane_stacon_g_ParamLimits

0xf6d4,	// (0x00051526) title_pane_stacon_g

0x7073,	// (0x00048ec5) cursor_press_pane

0x8a43,	// (0x0004a895) popup_fep_hwr_window_ParamLimits

0x8a43,	// (0x0004a895) popup_fep_hwr_window

0x8acd,	// (0x0004a91f) popup_fep_vkb_window_ParamLimits

0x8acd,	// (0x0004a91f) popup_fep_vkb_window

0xbb63,	// (0x0004d9b5) cursor_press_pane_g1

0x0002,

0xfb3c,	// (0x0005198e) fep_vkb_side_pane_g_ParamLimits

0x79a3,	// (0x000497f5) fep_hwr_candidate_pane_ParamLimits

0x79a3,	// (0x000497f5) fep_hwr_candidate_pane

0x79cd,	// (0x0004981f) fep_hwr_side_pane_ParamLimits

0x79cd,	// (0x0004981f) fep_hwr_side_pane

0x79ef,	// (0x00049841) fep_hwr_top_pane_ParamLimits

0x79ef,	// (0x00049841) fep_hwr_top_pane

0x7a07,	// (0x00049859) fep_hwr_write_pane_ParamLimits

0x7a07,	// (0x00049859) fep_hwr_write_pane

0xfb3c,	// (0x0005198e) fep_vkb_side_pane_g

0xbb6b,	// (0x0004d9bd) fep_hwr_top_pane_g1

0xbb7d,	// (0x0004d9cf) fep_hwr_top_pane_g2

0x7a33,	// (0x00049885) fep_hwr_top_pane_g3

0x0002,

0xfb18,	// (0x0005196a) fep_hwr_top_pane_g

0x7a48,	// (0x0004989a) fep_hwr_top_text_pane

0x2429,	// (0x0004427b) fep_hwr_top_text_pane_g1

0xbbb3,	// (0x0004da05) fep_hwr_top_text_pane_t1

0x7b52,	// (0x000499a4) fep_hwr_candidate_pane_g1

0xbdfe,	// (0x0004dc50) fep_vkb_keypad_pane_g3_ParamLimits

0xbdfe,	// (0x0004dc50) fep_vkb_keypad_pane_g3

0xbe2a,	// (0x0004dc7c) fep_vkb_keypad_pane_g4_ParamLimits

0xbe2a,	// (0x0004dc7c) fep_vkb_keypad_pane_g4

0xbea1,	// (0x0004dcf3) fep_vkb_bottom_pane_g2_ParamLimits

0xbea1,	// (0x0004dcf3) fep_vkb_bottom_pane_g2

0x0001,

0xfb43,	// (0x00051995) fep_vkb_bottom_pane_g_ParamLimits

0xfb43,	// (0x00051995) fep_vkb_bottom_pane_g

0xbb0a,	// (0x0004d95c) cell_vkb_side_pane_g2

0x0001,

0xfb4d,	// (0x0005199f) cell_vkb_side_pane_g

0xbf2c,	// (0x0004dd7e) cell_vkb_side_pane_t1

0xbf3a,	// (0x0004dd8c) cell_vkb_side_pane_t1_copy1

0xbb0a,	// (0x0004d95c) bg_fep_vkb_candidate_pane_g2

0xc07e,	// (0x0004ded0) cell_vkb_candidate_pane_ParamLimits

0xbbc1,	// (0x0004da13) aid_size_cell_vkb_ParamLimits

0xbbc1,	// (0x0004da13) aid_size_cell_vkb

0xc07e,	// (0x0004ded0) cell_vkb_candidate_pane

0x7b6c,	// (0x000499be) bg_popup_fep_shadow_pane_g1

0xbc53,	// (0x0004daa5) fep_vkb_bottom_pane_ParamLimits

0xbc53,	// (0x0004daa5) fep_vkb_bottom_pane

0xbc90,	// (0x0004dae2) fep_vkb_candidate_pane_ParamLimits

0xbc90,	// (0x0004dae2) fep_vkb_candidate_pane

0xbcac,	// (0x0004dafe) fep_vkb_keypad_pane_ParamLimits

0xbcac,	// (0x0004dafe) fep_vkb_keypad_pane

0xbcdf,	// (0x0004db31) fep_vkb_side_pane_ParamLimits

0xbcdf,	// (0x0004db31) fep_vkb_side_pane

0xbd1b,	// (0x0004db6d) fep_vkb_top_pane_ParamLimits

0xbd1b,	// (0x0004db6d) fep_vkb_top_pane

0xbd57,	// (0x0004dba9) fep_vkb_top_pane_g1_ParamLimits

0xbd57,	// (0x0004dba9) fep_vkb_top_pane_g1

0xbd66,	// (0x0004dbb8) fep_vkb_top_pane_g2_ParamLimits

0xbd66,	// (0x0004dbb8) fep_vkb_top_pane_g2

0xbd75,	// (0x0004dbc7) fep_vkb_top_pane_g3_ParamLimits

0xbd75,	// (0x0004dbc7) fep_vkb_top_pane_g3

0x0003,

0xfb33,	// (0x00051985) fep_vkb_top_pane_g_ParamLimits

0xfb33,	// (0x00051985) fep_vkb_top_pane_g

0xbd93,	// (0x0004dbe5) fep_vkb_top_text_pane_ParamLimits

0xbd93,	// (0x0004dbe5) fep_vkb_top_text_pane

0xbda4,	// (0x0004dbf6) fep_vkb_side_pane_g1_ParamLimits

0xbda4,	// (0x0004dbf6) fep_vkb_side_pane_g1

0xbded,	// (0x0004dc3f) grid_vkb_side_pane_ParamLimits

0xbded,	// (0x0004dc3f) grid_vkb_side_pane

0x7b74,	// (0x000499c6) bg_popup_fep_shadow_pane_g2

0x7b7d,	// (0x000499cf) bg_popup_fep_shadow_pane_g3

0x7b85,	// (0x000499d7) bg_popup_fep_shadow_pane_g4

0x7b8e,	// (0x000499e0) bg_popup_fep_shadow_pane_g5

0x7b98,	// (0x000499ea) bg_popup_fep_shadow_pane_g6

0x7ba0,	// (0x000499f2) bg_popup_fep_shadow_pane_g7

0x0bf7,	// (0x00042a49) bg_popup_fep_shadow_pane_g8

0xbe4c,	// (0x0004dc9e) grid_vkb_keypad_number_pane_ParamLimits

0xbe4c,	// (0x0004dc9e) grid_vkb_keypad_number_pane

0xbe60,	// (0x0004dcb2) grid_vkb_keypad_pane_ParamLimits

0xbe60,	// (0x0004dcb2) grid_vkb_keypad_pane

0xbe86,	// (0x0004dcd8) fep_vkb_bottom_pane_g1_ParamLimits

0xbe86,	// (0x0004dcd8) fep_vkb_bottom_pane_g1

0xbeaf,	// (0x0004dd01) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbeaf,	// (0x0004dd01) grid_vkb_keypad_bottom_left_pane

0xbec4,	// (0x0004dd16) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbec4,	// (0x0004dd16) grid_vkb_keypad_bottom_right_pane

0xbed9,	// (0x0004dd2b) fep_vkb_top_text_pane_g1

0xbef4,	// (0x0004dd46) fep_vkb_top_text_pane_t1

0xbf09,	// (0x0004dd5b) cell_vkb_side_pane_ParamLimits

0xbf09,	// (0x0004dd5b) cell_vkb_side_pane

0xbb0a,	// (0x0004d95c) cell_vkb_side_pane_g1

0xbf48,	// (0x0004dd9a) cell_vkb_keypad_pane_ParamLimits

0xbf48,	// (0x0004dd9a) cell_vkb_keypad_pane

0xbfd5,	// (0x0004de27) cell_vkb_keypad_pane_g1

0x0008,

0xfb60,	// (0x000519b2) bg_popup_fep_shadow_pane_g

0xbb0a,	// (0x0004d95c) cell_hwr_side_pane_g1

0xbb0a,	// (0x0004d95c) cell_hwr_side_pane_g2

0xbfdf,	// (0x0004de31) cell_vkb_keypad_pane_t1

0xbfed,	// (0x0004de3f) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbfed,	// (0x0004de3f) cell_vkb_keypad_bottom_left_pane

0xc00a,	// (0x0004de5c) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc00a,	// (0x0004de5c) cell_vkb_keypad_bottom_right_pane

0xbb0a,	// (0x0004d95c) cell_vkb_keypad_bottom_left_pane_g1

0xbb0a,	// (0x0004d95c) cell_vkb_keypad_bottom_right_pane_g1

0xc043,	// (0x0004de95) cell_vkb_keypad_number_pane_ParamLimits

0xc043,	// (0x0004de95) cell_vkb_keypad_number_pane

0xc062,	// (0x0004deb4) cell_vkb_keypad_number_pane_g1

0xc06c,	// (0x0004debe) cell_vkb_keypad_number_pane_g2

0xc075,	// (0x0004dec7) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb52,	// (0x000519a4) cell_vkb_keypad_number_pane_g

0xbfdf,	// (0x0004de31) cell_vkb_keypad_number_pane_t1

0xc09f,	// (0x0004def1) fep_vkb_candidate_pane_g1

0x0001,

0xfb4d,	// (0x0005199f) cell_hwr_side_pane_g

0xc0b8,	// (0x0004df0a) cell_hwr_side_pane_t1

0x7bb2,	// (0x00049a04) cell_hwr_side_pane_t1_copy1

0xbd85,	// (0x0004dbd7) cell_hwr_candidate_pane_g1

0x7bc0,	// (0x00049a12) cell_hwr_candidate_pane_t1

0xbb0a,	// (0x0004d95c) cell_vkb_candidate_pane_g2

0xc13e,	// (0x0004df90) cell_vkb_candidate_pane_t1

0xf546,	// (0x00051398) bg_popup_fep_shadow_pane_ParamLimits

0xf546,	// (0x00051398) bg_popup_fep_shadow_pane

0x20ff,	// (0x00043f51) bg_fep_hwr_top_pane_g4

0xbb8f,	// (0x0004d9e1) bg_hwr_side_pane_g1_ParamLimits

0xbb8f,	// (0x0004d9e1) bg_hwr_side_pane_g1

0x7a86,	// (0x000498d8) cell_hwr_side_pane_ParamLimits

0x7a86,	// (0x000498d8) cell_hwr_side_pane

0x7ac3,	// (0x00049915) fep_hwr_write_pane_g1_ParamLimits

0x7ac3,	// (0x00049915) fep_hwr_write_pane_g1

0x7ad0,	// (0x00049922) fep_hwr_write_pane_g2_ParamLimits

0x7ad0,	// (0x00049922) fep_hwr_write_pane_g2

0x7add,	// (0x0004992f) fep_hwr_write_pane_g3_ParamLimits

0x7add,	// (0x0004992f) fep_hwr_write_pane_g3

0x7aeb,	// (0x0004993d) fep_hwr_write_pane_g4_ParamLimits

0x7aeb,	// (0x0004993d) fep_hwr_write_pane_g4

0x0005,

0xfb1f,	// (0x00051971) fep_hwr_write_pane_g_ParamLimits

0xfb1f,	// (0x00051971) fep_hwr_write_pane_g

0x20ff,	// (0x00043f51) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x20ff,	// (0x00043f51) bg_fep_hwr_candidate_pane_g2

0x7b00,	// (0x00049952) cell_hwr_candidate_pane_ParamLimits

0x7b00,	// (0x00049952) cell_hwr_candidate_pane

0x7b52,	// (0x000499a4) fep_hwr_candidate_pane_g1_ParamLimits

0xbbef,	// (0x0004da41) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbbef,	// (0x0004da41) bg_popup_fep_shadow_pane_cp2

0xbd85,	// (0x0004dbd7) fep_vkb_top_pane_g4_ParamLimits

0xbd85,	// (0x0004dbd7) fep_vkb_top_pane_g4

0xbdcb,	// (0x0004dc1d) fep_vkb_side_pane_g2_ParamLimits

0xbdcb,	// (0x0004dc1d) fep_vkb_side_pane_g2

0x55af,	// (0x00047401) list_setting_pane_t4_ParamLimits

0x55af,	// (0x00047401) list_setting_pane_t4

0x564b,	// (0x0004749d) list_setting_number_pane_t5_ParamLimits

0x564b,	// (0x0004749d) list_setting_number_pane_t5

0x6bfe,	// (0x00048a50) list_double_heading_pane_cp2_ParamLimits

0x6bfe,	// (0x00048a50) list_double_heading_pane_cp2

0xc14c,	// (0x0004df9e) list_double_heading_pane_g1_cp2_ParamLimits

0xc14c,	// (0x0004df9e) list_double_heading_pane_g1_cp2

0xc158,	// (0x0004dfaa) list_double_heading_pane_g2_cp2_ParamLimits

0xc158,	// (0x0004dfaa) list_double_heading_pane_g2_cp2

0xc16c,	// (0x0004dfbe) list_double_heading_pane_t1_cp2_ParamLimits

0xc16c,	// (0x0004dfbe) list_double_heading_pane_t1_cp2

0xc182,	// (0x0004dfd4) list_double_heading_pane_t2_cp2_ParamLimits

0xc182,	// (0x0004dfd4) list_double_heading_pane_t2_cp2

0xd6c2,	// (0x0004f514) aid_value_unit2

0x634a,	// (0x0004819c) popup_preview_fixed_window

0x069a,	// (0x000424ec) bg_popup_preview_window_pane_cp02

0xc194,	// (0x0004dfe6) list_preview_fixed_pane

0xc1da,	// (0x0004e02c) list_empty_pane_fp_ParamLimits

0xc1da,	// (0x0004e02c) list_empty_pane_fp

0xc1da,	// (0x0004e02c) list_single_cale_day_pane_fp_ParamLimits

0xc1da,	// (0x0004e02c) list_single_cale_day_pane_fp

0xc1da,	// (0x0004e02c) list_single_graphic_heading_pane_fp_ParamLimits

0xc1da,	// (0x0004e02c) list_single_graphic_heading_pane_fp

0xc1da,	// (0x0004e02c) list_single_graphic_pane_fp_ParamLimits

0xc1da,	// (0x0004e02c) list_single_graphic_pane_fp

0xc1da,	// (0x0004e02c) list_single_heading_pane_fp_ParamLimits

0xc1da,	// (0x0004e02c) list_single_heading_pane_fp

0xc1da,	// (0x0004e02c) list_single_pane_fp_ParamLimits

0xc1da,	// (0x0004e02c) list_single_pane_fp

0xc1f3,	// (0x0004e045) list_single_pane_fp_g1_ParamLimits

0xc1f3,	// (0x0004e045) list_single_pane_fp_g1

0xc14c,	// (0x0004df9e) list_single_pane_fp_g2_ParamLimits

0xc14c,	// (0x0004df9e) list_single_pane_fp_g2

0xc158,	// (0x0004dfaa) list_single_pane_fp_g3_ParamLimits

0xc158,	// (0x0004dfaa) list_single_pane_fp_g3

0xc1ff,	// (0x0004e051) list_single_pane_fp_g4_ParamLimits

0xc1ff,	// (0x0004e051) list_single_pane_fp_g4

0x0003,

0xfb81,	// (0x000519d3) list_single_pane_fp_g_ParamLimits

0xfb81,	// (0x000519d3) list_single_pane_fp_g

0x5dd6,	// (0x00047c28) list_single_pane_fp_t1_ParamLimits

0x5dd6,	// (0x00047c28) list_single_pane_fp_t1

0x5ded,	// (0x00047c3f) list_single_graphic_pane_fp_g1_ParamLimits

0x5ded,	// (0x00047c3f) list_single_graphic_pane_fp_g1

0xc1f3,	// (0x0004e045) list_single_graphic_pane_fp_g2_ParamLimits

0xc1f3,	// (0x0004e045) list_single_graphic_pane_fp_g2

0xc14c,	// (0x0004df9e) list_single_graphic_pane_fp_g3_ParamLimits

0xc14c,	// (0x0004df9e) list_single_graphic_pane_fp_g3

0xc158,	// (0x0004dfaa) list_single_graphic_pane_fp_g4_ParamLimits

0xc158,	// (0x0004dfaa) list_single_graphic_pane_fp_g4

0xc1ff,	// (0x0004e051) list_single_graphic_pane_fp_g5_ParamLimits

0xc1ff,	// (0x0004e051) list_single_graphic_pane_fp_g5

0x0004,

0xfb8a,	// (0x000519dc) list_single_graphic_pane_fp_g_ParamLimits

0xfb8a,	// (0x000519dc) list_single_graphic_pane_fp_g

0x5df9,	// (0x00047c4b) list_single_graphic_pane_fp_t1_ParamLimits

0x5df9,	// (0x00047c4b) list_single_graphic_pane_fp_t1

0x5ded,	// (0x00047c3f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5ded,	// (0x00047c3f) list_single_graphic_heading_pane_fp_g1

0xc1f3,	// (0x0004e045) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc1f3,	// (0x0004e045) list_single_graphic_heading_pane_fp_g2

0xc14c,	// (0x0004df9e) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc14c,	// (0x0004df9e) list_single_graphic_heading_pane_fp_g3

0xc158,	// (0x0004dfaa) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc158,	// (0x0004dfaa) list_single_graphic_heading_pane_fp_g4

0xc1ff,	// (0x0004e051) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc1ff,	// (0x0004e051) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x000519dc) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x000519dc) list_single_graphic_heading_pane_fp_g

0x5e0f,	// (0x00047c61) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5e0f,	// (0x00047c61) list_single_graphic_heading_pane_fp_t1

0x5e25,	// (0x00047c77) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5e25,	// (0x00047c77) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb95,	// (0x000519e7) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb95,	// (0x000519e7) list_single_graphic_heading_pane_fp_t

0x5e37,	// (0x00047c89) list_single_cale_day_pane_fp_g1_ParamLimits

0x5e37,	// (0x00047c89) list_single_cale_day_pane_fp_g1

0xc20b,	// (0x0004e05d) list_single_cale_day_pane_fp_g2_ParamLimits

0xc20b,	// (0x0004e05d) list_single_cale_day_pane_fp_g2

0x7bde,	// (0x00049a30) list_single_cale_day_pane_fp_g3_ParamLimits

0x7bde,	// (0x00049a30) list_single_cale_day_pane_fp_g3

0x7c06,	// (0x00049a58) list_single_cale_day_pane_fp_g4_ParamLimits

0x7c06,	// (0x00049a58) list_single_cale_day_pane_fp_g4

0x7c2a,	// (0x00049a7c) list_single_cale_day_pane_fp_g5_ParamLimits

0x7c2a,	// (0x00049a7c) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9a,	// (0x000519ec) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9a,	// (0x000519ec) list_single_cale_day_pane_fp_g

0x5e6f,	// (0x00047cc1) list_single_cale_day_pane_fp_t1_ParamLimits

0x5e6f,	// (0x00047cc1) list_single_cale_day_pane_fp_t1

0x5e95,	// (0x00047ce7) list_single_cale_day_pane_fp_t2_ParamLimits

0x5e95,	// (0x00047ce7) list_single_cale_day_pane_fp_t2

0x5eae,	// (0x00047d00) list_single_cale_day_pane_fp_t3_ParamLimits

0x5eae,	// (0x00047d00) list_single_cale_day_pane_fp_t3

0x0002,

0xfba5,	// (0x000519f7) list_single_cale_day_pane_fp_t_ParamLimits

0xfba5,	// (0x000519f7) list_single_cale_day_pane_fp_t

0xc1f3,	// (0x0004e045) list_empty_pane_fp_g1_ParamLimits

0xc1f3,	// (0x0004e045) list_empty_pane_fp_g1

0x5ec7,	// (0x00047d19) list_empty_pane_fp_t1

0x5ed5,	// (0x00047d27) list_empty_pane_fp_t2

0x0001,

0xfbac,	// (0x000519fe) list_empty_pane_fp_t

0xc1f3,	// (0x0004e045) list_single_heading_pane_fp_g1_ParamLimits

0xc1f3,	// (0x0004e045) list_single_heading_pane_fp_g1

0xc14c,	// (0x0004df9e) list_single_heading_pane_fp_g2_ParamLimits

0xc14c,	// (0x0004df9e) list_single_heading_pane_fp_g2

0xc158,	// (0x0004dfaa) list_single_heading_pane_fp_g3_ParamLimits

0xc158,	// (0x0004dfaa) list_single_heading_pane_fp_g3

0x0002,

0xfbb1,	// (0x00051a03) list_single_heading_pane_fp_g_ParamLimits

0xfbb1,	// (0x00051a03) list_single_heading_pane_fp_g

0x5ee3,	// (0x00047d35) list_single_heading_pane_fp_t1_ParamLimits

0x5ee3,	// (0x00047d35) list_single_heading_pane_fp_t1

0x5ef5,	// (0x00047d47) list_single_heading_pane_fp_t2_ParamLimits

0x5ef5,	// (0x00047d47) list_single_heading_pane_fp_t2

0x0001,

0xfbb8,	// (0x00051a0a) list_single_heading_pane_fp_t_ParamLimits

0xfbb8,	// (0x00051a0a) list_single_heading_pane_fp_t

0x0ce2,	// (0x00042b34) aid_size_cell_fast

0x067d,	// (0x000424cf) soft_indicator_pane_cp1_t1

0x0d1f,	// (0x00042b71) cell_app_pane_cp2_ParamLimits

0x0d1f,	// (0x00042b71) cell_app_pane_cp2

0x798c,	// (0x000497de) fep_hwr_candidate_drop_down_list_pane

0x210d,	// (0x00043f5f) fep_hwr_candidate_pane_g3_ParamLimits

0x210d,	// (0x00043f5f) fep_hwr_candidate_pane_g3

0x211a,	// (0x00043f6c) fep_hwr_candidate_pane_g4_ParamLimits

0x211a,	// (0x00043f6c) fep_hwr_candidate_pane_g4

0x0002,

0xfb2c,	// (0x0005197e) fep_hwr_candidate_pane_g_ParamLimits

0xfb2c,	// (0x0005197e) fep_hwr_candidate_pane_g

0xbc7f,	// (0x0004dad1) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbc7f,	// (0x0004dad1) fep_vkb_candidate_drop_down_list_pane

0xc0a7,	// (0x0004def9) fep_vkb_candidate_pane_g3

0xc0af,	// (0x0004df01) fep_vkb_candidate_pane_g4

0x0002,

0xfb59,	// (0x000519ab) fep_vkb_candidate_pane_g

0xbd85,	// (0x0004dbd7) cell_hwr_candidate_pane_g1_ParamLimits

0xc0c6,	// (0x0004df18) cell_hwr_candidate_pane_g3_ParamLimits

0xc0c6,	// (0x0004df18) cell_hwr_candidate_pane_g3

0xc0e7,	// (0x0004df39) cell_hwr_candidate_pane_g4_ParamLimits

0xc0e7,	// (0x0004df39) cell_hwr_candidate_pane_g4

0x0002,

0xfb73,	// (0x000519c5) cell_hwr_candidate_pane_g_ParamLimits

0xfb73,	// (0x000519c5) cell_hwr_candidate_pane_g

0xc108,	// (0x0004df5a) cell_vkb_candidate_pane_g3_ParamLimits

0xc108,	// (0x0004df5a) cell_vkb_candidate_pane_g3

0xc123,	// (0x0004df75) cell_vkb_candidate_pane_g4_ParamLimits

0xc123,	// (0x0004df75) cell_vkb_candidate_pane_g4

0xc217,	// (0x0004e069) cell_app_pane_cp2_g1_ParamLimits

0xc217,	// (0x0004e069) cell_app_pane_cp2_g1

0xc235,	// (0x0004e087) cell_app_pane_cp2_g2_ParamLimits

0xc235,	// (0x0004e087) cell_app_pane_cp2_g2

0x0001,

0xfbbd,	// (0x00051a0f) cell_app_pane_cp2_g_ParamLimits

0xfbbd,	// (0x00051a0f) cell_app_pane_cp2_g

0xc241,	// (0x0004e093) cell_app_pane_cp2_t1_ParamLimits

0xc241,	// (0x0004e093) cell_app_pane_cp2_t1

0x0b7c,	// (0x000429ce) grid_highlight_pane_cp1_ParamLimits

0x0b7c,	// (0x000429ce) grid_highlight_pane_cp1

0x7c4e,	// (0x00049aa0) cell_hwr_candidate_pane_cp1_ParamLimits

0x7c4e,	// (0x00049aa0) cell_hwr_candidate_pane_cp1

0xbd85,	// (0x0004dbd7) fep_hwr_candidate_drop_down_list_pane_g1

0xc253,	// (0x0004e0a5) fep_hwr_candidate_drop_down_list_pane_g2

0xc260,	// (0x0004e0b2) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x00051a14) fep_hwr_candidate_drop_down_list_pane_g

0x7c72,	// (0x00049ac4) fep_hwr_candidate_drop_down_list_scroll_pane

0x7c7b,	// (0x00049acd) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7c7b,	// (0x00049acd) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7c88,	// (0x00049ada) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7c88,	// (0x00049ada) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7c95,	// (0x00049ae7) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7c95,	// (0x00049ae7) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc108,	// (0x0004df5a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc108,	// (0x0004df5a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc123,	// (0x0004df75) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc123,	// (0x0004df75) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7ca2,	// (0x00049af4) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7ca2,	// (0x00049af4) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7cbd,	// (0x00049b0f) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7cbd,	// (0x00049b0f) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7cd8,	// (0x00049b2a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7cd8,	// (0x00049b2a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc9,	// (0x00051a1b) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc9,	// (0x00051a1b) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc26d,	// (0x0004e0bf) cell_vkb_candidate_pane_cp1_ParamLimits

0xc26d,	// (0x0004e0bf) cell_vkb_candidate_pane_cp1

0xbd85,	// (0x0004dbd7) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbd85,	// (0x0004dbd7) fep_vkb_candidate_drop_down_list_pane_g1

0xc253,	// (0x0004e0a5) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc253,	// (0x0004e0a5) fep_vkb_candidate_drop_down_list_pane_g2

0xc260,	// (0x0004e0b2) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc260,	// (0x0004e0b2) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x00051a14) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc2,	// (0x00051a14) fep_vkb_candidate_drop_down_list_pane_g

0xc293,	// (0x0004e0e5) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc293,	// (0x0004e0e5) fep_vkb_candidate_drop_down_list_scroll_pane

0xc2a0,	// (0x0004e0f2) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc2a0,	// (0x0004e0f2) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc2ad,	// (0x0004e0ff) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc2ad,	// (0x0004e0ff) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc2b9,	// (0x0004e10b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc2b9,	// (0x0004e10b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc0c6,	// (0x0004df18) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc0c6,	// (0x0004df18) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc0e7,	// (0x0004df39) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc0e7,	// (0x0004df39) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc2c5,	// (0x0004e117) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc2c5,	// (0x0004e117) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc2e6,	// (0x0004e138) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc2e6,	// (0x0004e138) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc307,	// (0x0004e159) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc307,	// (0x0004e159) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbda,	// (0x00051a2c) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbda,	// (0x00051a2c) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6462,	// (0x000482b4) title_pane_g1_ParamLimits

0x646f,	// (0x000482c1) title_pane_g2_ParamLimits

0xf554,	// (0x000513a6) title_pane_g_ParamLimits

0x2421,	// (0x00044273) aid_call2_pane

0x2419,	// (0x0004426b) aid_call_pane

0x2429,	// (0x0004427b) popup_clock_analogue_window_g1

0x2429,	// (0x0004427b) popup_clock_analogue_window_g2

0x6bdf,	// (0x00048a31) popup_clock_analogue_window_g3

0x6be8,	// (0x00048a3a) popup_clock_analogue_window_g4

0xd6d4,	// (0x0004f526) popup_clock_analogue_window_g5

0x0004,

0xf703,	// (0x00051555) popup_clock_analogue_window_g

0x6bf0,	// (0x00048a42) popup_clock_analogue_window_t1

0x6c31,	// (0x00048a83) clock_digital_number_pane_ParamLimits

0x6c31,	// (0x00048a83) clock_digital_number_pane

0x6c3d,	// (0x00048a8f) clock_digital_number_pane_cp02_ParamLimits

0x6c3d,	// (0x00048a8f) clock_digital_number_pane_cp02

0x6c49,	// (0x00048a9b) clock_digital_number_pane_cp03_ParamLimits

0x6c49,	// (0x00048a9b) clock_digital_number_pane_cp03

0x6c55,	// (0x00048aa7) clock_digital_number_pane_cp04_ParamLimits

0x6c55,	// (0x00048aa7) clock_digital_number_pane_cp04

0x6c61,	// (0x00048ab3) clock_digital_separator_pane_ParamLimits

0x6c61,	// (0x00048ab3) clock_digital_separator_pane

0x6c6d,	// (0x00048abf) popup_clock_digital_window_t1_ParamLimits

0x6c6d,	// (0x00048abf) popup_clock_digital_window_t1

0xd6d4,	// (0x0004f526) clock_digital_number_pane_g1

0xd6d4,	// (0x0004f526) clock_digital_number_pane_g2

0x0001,

0xf70e,	// (0x00051560) clock_digital_number_pane_g

0xd6d4,	// (0x0004f526) clock_digital_separator_pane_g1

0xd6d4,	// (0x0004f526) clock_digital_separator_pane_g2

0x0001,

0xf70e,	// (0x00051560) clock_digital_separator_pane_g

0x8f98,	// (0x0004adea) aid_fill_nsta_ParamLimits

0x90e8,	// (0x0004af3a) indicator_nsta_pane_ParamLimits

0x9279,	// (0x0004b0cb) popup_clock_analogue_window

0x9279,	// (0x0004b0cb) popup_clock_digital_window

0x0567,	// (0x000423b9) grid_indicator_nsta_pane_ParamLimits

0xb537,	// (0x0004d389) clock_nsta_pane_t2

0x0001,

0xfaac,	// (0x000518fe) clock_nsta_pane_t

0x6b48,	// (0x0004899a) aid_size_max_handle

0x6b52,	// (0x000489a4) aid_size_min_handle

0x7073,	// (0x00048ec5) editor_scroll_pane

0xc322,	// (0x0004e174) ex_editor_pane

0x0ca8,	// (0x00042afa) scroll_pane_cp13

0x0b1b,	// (0x0004296d) scroll_pane_cp14

0x2458,	// (0x000442aa) scroll_pane_cp36

0x6c14,	// (0x00048a66) list_single_graphic_hl_pane_cp2_ParamLimits

0x6c14,	// (0x00048a66) list_single_graphic_hl_pane_cp2

0x77bb,	// (0x0004960d) list_single_graphic_hl_pane_ParamLimits

0x77bb,	// (0x0004960d) list_single_graphic_hl_pane

0x5f0b,	// (0x00047d5d) aid_size_min_hl_cp1

0xc32a,	// (0x0004e17c) list_highlight_pane_cp34_ParamLimits

0xc32a,	// (0x0004e17c) list_highlight_pane_cp34

0xc33b,	// (0x0004e18d) list_single_graphic_hl_pane_g1_ParamLimits

0xc33b,	// (0x0004e18d) list_single_graphic_hl_pane_g1

0x5f14,	// (0x00047d66) list_single_graphic_hl_pane_g2_ParamLimits

0x5f14,	// (0x00047d66) list_single_graphic_hl_pane_g2

0x5f14,	// (0x00047d66) list_single_graphic_hl_pane_g3_ParamLimits

0x5f14,	// (0x00047d66) list_single_graphic_hl_pane_g3

0x78b0,	// (0x00049702) list_single_graphic_hl_pane_g4_ParamLimits

0x78b0,	// (0x00049702) list_single_graphic_hl_pane_g4

0x7cf3,	// (0x00049b45) list_single_graphic_hl_pane_g5_ParamLimits

0x7cf3,	// (0x00049b45) list_single_graphic_hl_pane_g5

0x0004,

0xfbeb,	// (0x00051a3d) list_single_graphic_hl_pane_g_ParamLimits

0xfbeb,	// (0x00051a3d) list_single_graphic_hl_pane_g

0x5f20,	// (0x00047d72) list_single_graphic_hl_pane_t1_ParamLimits

0x5f20,	// (0x00047d72) list_single_graphic_hl_pane_t1

0xc348,	// (0x0004e19a) aid_size_min_hl_cp2

0xc351,	// (0x0004e1a3) list_highlight_pane_cp34_cp2_ParamLimits

0xc351,	// (0x0004e1a3) list_highlight_pane_cp34_cp2

0xc33b,	// (0x0004e18d) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc33b,	// (0x0004e18d) list_single_graphic_hl_pane_g1_cp2

0xc35e,	// (0x0004e1b0) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc35e,	// (0x0004e1b0) list_single_graphic_hl_pane_g2_cp2

0xc36a,	// (0x0004e1bc) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc36a,	// (0x0004e1bc) list_single_graphic_hl_pane_g3_cp2

0x2914,	// (0x00044766) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x2914,	// (0x00044766) list_single_graphic_hl_pane_g4_cp2

0xc378,	// (0x0004e1ca) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc378,	// (0x0004e1ca) list_single_graphic_hl_pane_g5_cp2

0x734c,	// (0x0004919e) control_pane_g4_ParamLimits

0x734c,	// (0x0004919e) control_pane_g4

0x8961,	// (0x0004a7b3) bg_popup_sub_pane_cp10_ParamLimits

0xbb14,	// (0x0004d966) list_choice_list_pane_ParamLimits

0xbb23,	// (0x0004d975) scroll_pane_cp23

0x069a,	// (0x000424ec) bg_popup_preview_window_pane_cp02_ParamLimits

0xc194,	// (0x0004dfe6) list_preview_fixed_pane_ParamLimits

0xc1aa,	// (0x0004dffc) list_preview_fixed_pane_cp_ParamLimits

0xc1aa,	// (0x0004dffc) list_preview_fixed_pane_cp

0xc1b6,	// (0x0004e008) popup_preview_fixed_window_g1_ParamLimits

0xc1b6,	// (0x0004e008) popup_preview_fixed_window_g1

0xc1c2,	// (0x0004e014) popup_preview_fixed_window_g2_ParamLimits

0xc1c2,	// (0x0004e014) popup_preview_fixed_window_g2

0x0002,

0xfb7a,	// (0x000519cc) popup_preview_fixed_window_g_ParamLimits

0xfb7a,	// (0x000519cc) popup_preview_fixed_window_g

0x6a35,	// (0x00048887) aid_navi_side_left_pane_ParamLimits

0x6a4a,	// (0x0004889c) aid_navi_side_right_pane_ParamLimits

0x6a62,	// (0x000488b4) navi_icon_pane_stacon_ParamLimits

0x6a76,	// (0x000488c8) navi_navi_pane_stacon_ParamLimits

0x6a62,	// (0x000488b4) navi_text_pane_stacon_ParamLimits

0xd6ca,	// (0x0004f51c) main_text_info_pane

0xc3a2,	// (0x0004e1f4) listscroll_text_info_pane

0xc3aa,	// (0x0004e1fc) list_text_info_pane_ParamLimits

0xc3aa,	// (0x0004e1fc) list_text_info_pane

0xc3b9,	// (0x0004e20b) scroll_pane_cp24_ParamLimits

0xc3b9,	// (0x0004e20b) scroll_pane_cp24

0xc3d7,	// (0x0004e229) list_text_info_pane_t1_ParamLimits

0xc3d7,	// (0x0004e229) list_text_info_pane_t1

0x89ab,	// (0x0004a7fd) popup_fast_swap2_window_ParamLimits

0x89ab,	// (0x0004a7fd) popup_fast_swap2_window

0xc3fc,	// (0x0004e24e) aid_size_cell_fast2

0xd6ca,	// (0x0004f51c) bg_popup_window_pane_cp17

0x98d6,	// (0x0004b728) heading_pane_cp2

0x08a0,	// (0x000426f2) listscroll_fast2_pane

0xc406,	// (0x0004e258) grid_fast2_pane

0xc410,	// (0x0004e262) listscroll_fast2_pane_g1

0xc41a,	// (0x0004e26c) listscroll_fast2_pane_g2

0x0001,

0xfbf6,	// (0x00051a48) listscroll_fast2_pane_g

0x0ca8,	// (0x00042afa) scroll_pane_cp26

0xc424,	// (0x0004e276) cell_fast2_pane_ParamLimits

0xc424,	// (0x0004e276) cell_fast2_pane

0xc43b,	// (0x0004e28d) cell_fast2_pane_g1

0xc444,	// (0x0004e296) cell_fast2_pane_g2

0xc44d,	// (0x0004e29f) cell_fast2_pane_g3

0x0002,

0xfbfb,	// (0x00051a4d) cell_fast2_pane_g

0x08e2,	// (0x00042734) grid_highlight_pane_cp9

0x08f7,	// (0x00042749) main_eswt_pane_ParamLimits

0x08f7,	// (0x00042749) main_eswt_pane

0xc3ce,	// (0x0004e220) list_single_text_info_pane

0xc455,	// (0x0004e2a7) eswt_ctrl_button_pane

0xc455,	// (0x0004e2a7) eswt_ctrl_canvas_pane

0xc45d,	// (0x0004e2af) eswt_ctrl_combo_pane

0xc455,	// (0x0004e2a7) eswt_ctrl_default_pane

0xc455,	// (0x0004e2a7) eswt_ctrl_label_pane

0xc465,	// (0x0004e2b7) eswt_ctrl_wait_pane

0xc46d,	// (0x0004e2bf) eswt_shell_pane

0xd6ca,	// (0x0004f51c) listscroll_eswt_app_pane

0xc48d,	// (0x0004e2df) popup_eswt_tasktip_window_ParamLimits

0xc48d,	// (0x0004e2df) popup_eswt_tasktip_window

0x9516,	// (0x0004b368) bg_popup_window_pane_cp18

0xc49e,	// (0x0004e2f0) eswt_control_pane_g1_ParamLimits

0xc49e,	// (0x0004e2f0) eswt_control_pane_g1

0xc4ab,	// (0x0004e2fd) eswt_control_pane_g2_ParamLimits

0xc4ab,	// (0x0004e2fd) eswt_control_pane_g2

0xc4b8,	// (0x0004e30a) eswt_control_pane_g3_ParamLimits

0xc4b8,	// (0x0004e30a) eswt_control_pane_g3

0xc4c5,	// (0x0004e317) eswt_control_pane_g4_ParamLimits

0xc4c5,	// (0x0004e317) eswt_control_pane_g4

0x0003,

0xfc02,	// (0x00051a54) eswt_control_pane_g_ParamLimits

0xfc02,	// (0x00051a54) eswt_control_pane_g

0x0b7c,	// (0x000429ce) bg_button_pane_ParamLimits

0x0b7c,	// (0x000429ce) bg_button_pane

0x08f7,	// (0x00042749) common_borders_pane_copy2_ParamLimits

0x08f7,	// (0x00042749) common_borders_pane_copy2

0xc4d2,	// (0x0004e324) control_button_pane_g1_ParamLimits

0xc4d2,	// (0x0004e324) control_button_pane_g1

0xc4de,	// (0x0004e330) control_button_pane_g2_ParamLimits

0xc4de,	// (0x0004e330) control_button_pane_g2

0xc4ea,	// (0x0004e33c) control_button_pane_g3_ParamLimits

0xc4ea,	// (0x0004e33c) control_button_pane_g3

0x0002,

0xfc0b,	// (0x00051a5d) control_button_pane_g_ParamLimits

0xfc0b,	// (0x00051a5d) control_button_pane_g

0xc4fe,	// (0x0004e350) control_button_pane_t1

0xc50c,	// (0x0004e35e) control_button_pane_t2

0x0001,

0xfc12,	// (0x00051a64) control_button_pane_t

0x94a2,	// (0x0004b2f4) bg_button_pane_g1

0x94aa,	// (0x0004b2fc) bg_button_pane_g2

0x94b2,	// (0x0004b304) bg_button_pane_g3

0x94ba,	// (0x0004b30c) bg_button_pane_g4

0x94c2,	// (0x0004b314) bg_button_pane_g5

0x94ca,	// (0x0004b31c) bg_button_pane_g6

0x94d2,	// (0x0004b324) bg_button_pane_g7

0x94da,	// (0x0004b32c) bg_button_pane_g8

0x94e2,	// (0x0004b334) bg_button_pane_g9

0x0008,

0xf871,	// (0x000516c3) bg_button_pane_g

0xbacf,	// (0x0004d921) common_borders_pane_ParamLimits

0xbacf,	// (0x0004d921) common_borders_pane

0xc49e,	// (0x0004e2f0) eswt_control_pane_g1_copy1_ParamLimits

0xc49e,	// (0x0004e2f0) eswt_control_pane_g1_copy1

0xc4ab,	// (0x0004e2fd) eswt_control_pane_g2_copy1_ParamLimits

0xc4ab,	// (0x0004e2fd) eswt_control_pane_g2_copy1

0xc4b8,	// (0x0004e30a) eswt_control_pane_g3_copy1_ParamLimits

0xc4b8,	// (0x0004e30a) eswt_control_pane_g3_copy1

0xc4c5,	// (0x0004e317) eswt_control_pane_g4_copy1_ParamLimits

0xc4c5,	// (0x0004e317) eswt_control_pane_g4_copy1

0xbb0a,	// (0x0004d95c) bg_eswt_ctrl_canvas_pane_g1

0xbacf,	// (0x0004d921) common_borders_pane_cp2_ParamLimits

0xbacf,	// (0x0004d921) common_borders_pane_cp2

0xbacf,	// (0x0004d921) common_borders_pane_cp3_ParamLimits

0xbacf,	// (0x0004d921) common_borders_pane_cp3

0xc51a,	// (0x0004e36c) separator_horizontal_pane

0xc522,	// (0x0004e374) separator_vertical_pane

0xc49e,	// (0x0004e2f0) eswt_control_pane_g1_copy2_ParamLimits

0xc49e,	// (0x0004e2f0) eswt_control_pane_g1_copy2

0xc4ab,	// (0x0004e2fd) eswt_control_pane_g2_copy2_ParamLimits

0xc4ab,	// (0x0004e2fd) eswt_control_pane_g2_copy2

0xc4b8,	// (0x0004e30a) eswt_control_pane_g3_copy2_ParamLimits

0xc4b8,	// (0x0004e30a) eswt_control_pane_g3_copy2

0xc4c5,	// (0x0004e317) eswt_control_pane_g4_copy2_ParamLimits

0xc4c5,	// (0x0004e317) eswt_control_pane_g4_copy2

0xd6ca,	// (0x0004f51c) common_borders_pane_cp4

0xc52b,	// (0x0004e37d) separator_horizontal_pane_g1

0xc534,	// (0x0004e386) separator_horizontal_pane_g2

0xc53d,	// (0x0004e38f) separator_horizontal_pane_g3

0x0002,

0xfc17,	// (0x00051a69) separator_horizontal_pane_g

0xc49e,	// (0x0004e2f0) eswt_control_pane_g1_copy3_ParamLimits

0xc49e,	// (0x0004e2f0) eswt_control_pane_g1_copy3

0xc4ab,	// (0x0004e2fd) eswt_control_pane_g2_copy3_ParamLimits

0xc4ab,	// (0x0004e2fd) eswt_control_pane_g2_copy3

0xc4b8,	// (0x0004e30a) eswt_control_pane_g3_copy3_ParamLimits

0xc4b8,	// (0x0004e30a) eswt_control_pane_g3_copy3

0xc4c5,	// (0x0004e317) eswt_control_pane_g4_copy3_ParamLimits

0xc4c5,	// (0x0004e317) eswt_control_pane_g4_copy3

0xd6ca,	// (0x0004f51c) common_borders_pane_cp5

0xc546,	// (0x0004e398) separator_vertical_pane_g1

0xc54f,	// (0x0004e3a1) separator_vertical_pane_g2

0xc558,	// (0x0004e3aa) separator_vertical_pane_g3

0x0002,

0xfc1e,	// (0x00051a70) separator_vertical_pane_g

0xc49e,	// (0x0004e2f0) eswt_control_pane_g1_copy4_ParamLimits

0xc49e,	// (0x0004e2f0) eswt_control_pane_g1_copy4

0xc4ab,	// (0x0004e2fd) eswt_control_pane_g2_copy4_ParamLimits

0xc4ab,	// (0x0004e2fd) eswt_control_pane_g2_copy4

0xc4b8,	// (0x0004e30a) eswt_control_pane_g3_copy4_ParamLimits

0xc4b8,	// (0x0004e30a) eswt_control_pane_g3_copy4

0xc4c5,	// (0x0004e317) eswt_control_pane_g4_copy4_ParamLimits

0xc4c5,	// (0x0004e317) eswt_control_pane_g4_copy4

0xc561,	// (0x0004e3b3) eswt_ctrl_combo_button_pane

0xc569,	// (0x0004e3bb) eswt_ctrl_input_pane

0xc571,	// (0x0004e3c3) popup_choice_list_window_cp70

0xc579,	// (0x0004e3cb) eswt_ctrl_input_pane_t1

0xd6ca,	// (0x0004f51c) input_focus_pane_cp70

0xbacf,	// (0x0004d921) bg_button_pane_cp70_ParamLimits

0xbacf,	// (0x0004d921) bg_button_pane_cp70

0xc587,	// (0x0004e3d9) eswt_ctrl_combo_button_pane_g1

0xc58f,	// (0x0004e3e1) wait_bar_pane_cp70

0x9516,	// (0x0004b368) bg_popup_window_pane_cp70_ParamLimits

0x9516,	// (0x0004b368) bg_popup_window_pane_cp70

0xc597,	// (0x0004e3e9) popup_eswt_tasktip_window_t1

0xc5ad,	// (0x0004e3ff) wait_bar_pane_cp71_ParamLimits

0xc5ad,	// (0x0004e3ff) wait_bar_pane_cp71

0xc5b9,	// (0x0004e40b) grid_eswt_app_pane

0x0eed,	// (0x00042d3f) scroll_pane_cp70

0xc5c2,	// (0x0004e414) cell_eswt_app_pane_ParamLimits

0xc5c2,	// (0x0004e414) cell_eswt_app_pane

0xc5f4,	// (0x0004e446) cell_eswt_app_pane_g1_ParamLimits

0xc5f4,	// (0x0004e446) cell_eswt_app_pane_g1

0xc623,	// (0x0004e475) cell_eswt_app_pane_g2_ParamLimits

0xc623,	// (0x0004e475) cell_eswt_app_pane_g2

0x0001,

0xfc25,	// (0x00051a77) cell_eswt_app_pane_g_ParamLimits

0xfc25,	// (0x00051a77) cell_eswt_app_pane_g

0xc64c,	// (0x0004e49e) cell_eswt_app_pane_t1_ParamLimits

0xc64c,	// (0x0004e49e) cell_eswt_app_pane_t1

0xc67e,	// (0x0004e4d0) grid_highlight_pane_cp70_ParamLimits

0xc67e,	// (0x0004e4d0) grid_highlight_pane_cp70

0x46f3,	// (0x00046545) set_content_pane_g1

0x8893,	// (0x0004a6e5) status_small_volume_pane

0x7d07,	// (0x00049b59) status_small_volume_pane_g1

0x7d0f,	// (0x00049b61) volume_small2_pane

0x7d18,	// (0x00049b6a) volume_small2_pane_g1

0x7d21,	// (0x00049b73) volume_small2_pane_g2

0x7d2a,	// (0x00049b7c) volume_small2_pane_g3

0x7d33,	// (0x00049b85) volume_small2_pane_g4

0x7d3c,	// (0x00049b8e) volume_small2_pane_g5

0x7d45,	// (0x00049b97) volume_small2_pane_g6

0x7d4e,	// (0x00049ba0) volume_small2_pane_g7

0x7d57,	// (0x00049ba9) volume_small2_pane_g8

0x7d60,	// (0x00049bb2) volume_small2_pane_g9

0x7d69,	// (0x00049bbb) volume_small2_pane_g10

0x0009,

0xfc2a,	// (0x00051a7c) volume_small2_pane_g

0xbed9,	// (0x0004dd2b) fep_vkb_top_text_pane_g1_ParamLimits

0xbef4,	// (0x0004dd46) fep_vkb_top_text_pane_t1_ParamLimits

0xc1ce,	// (0x0004e020) popup_preview_fixed_window_g3_ParamLimits

0xc1ce,	// (0x0004e020) popup_preview_fixed_window_g3

0x8ebc,	// (0x0004ad0e) popup_toolbar_trans_pane

0xa86e,	// (0x0004c6c0) aid_height_set_list_ParamLimits

0xa87f,	// (0x0004c6d1) aid_size_parent_ParamLimits

0x8961,	// (0x0004a7b3) list_highlight_pane_cp2_ParamLimits

0x46f3,	// (0x00046545) set_content_pane_g1_ParamLimits

0xaab2,	// (0x0004c904) list_single_image_pane_ParamLimits

0xaab2,	// (0x0004c904) list_single_image_pane

0xc68a,	// (0x0004e4dc) aid_size_cell_image_ParamLimits

0xc68a,	// (0x0004e4dc) aid_size_cell_image

0xc697,	// (0x0004e4e9) grid_single_image_pane_ParamLimits

0xc697,	// (0x0004e4e9) grid_single_image_pane

0x0b8a,	// (0x000429dc) list_single_image_pane_g1_ParamLimits

0x0b8a,	// (0x000429dc) list_single_image_pane_g1

0x0b96,	// (0x000429e8) list_single_image_pane_g2_ParamLimits

0x0b96,	// (0x000429e8) list_single_image_pane_g2

0x0001,

0xfc3f,	// (0x00051a91) list_single_image_pane_g_ParamLimits

0xfc3f,	// (0x00051a91) list_single_image_pane_g

0xc6a5,	// (0x0004e4f7) list_single_image_pane_t1_ParamLimits

0xc6a5,	// (0x0004e4f7) list_single_image_pane_t1

0xc6bb,	// (0x0004e50d) cell_image_list_pane_ParamLimits

0xc6bb,	// (0x0004e50d) cell_image_list_pane

0xc6d1,	// (0x0004e523) cell_image_list_pane_g1

0xc6da,	// (0x0004e52c) cell_image_list_pane_g2

0x0001,

0xfc44,	// (0x00051a96) cell_image_list_pane_g

0xc6e3,	// (0x0004e535) aid_size_cell_tb_trans_pane

0x0b7c,	// (0x000429ce) bg_tb_trans_pane

0xc6f5,	// (0x0004e547) grid_tb_trans_pane

0x94a2,	// (0x0004b2f4) bg_tb_trans_pane_g1

0x94aa,	// (0x0004b2fc) bg_tb_trans_pane_g2

0x94b2,	// (0x0004b304) bg_tb_trans_pane_g3

0x94ba,	// (0x0004b30c) bg_tb_trans_pane_g4

0x94c2,	// (0x0004b314) bg_tb_trans_pane_g5

0x94da,	// (0x0004b32c) bg_tb_trans_pane_g6

0x94e2,	// (0x0004b334) bg_tb_trans_pane_g7

0x94ca,	// (0x0004b31c) bg_tb_trans_pane_g8

0x94d2,	// (0x0004b324) bg_tb_trans_pane_g9

0x0008,

0xfc49,	// (0x00051a9b) bg_tb_trans_pane_g

0xc709,	// (0x0004e55b) cell_toolbar_trans_pane_ParamLimits

0xc709,	// (0x0004e55b) cell_toolbar_trans_pane

0xbb0a,	// (0x0004d95c) cell_toolbar_trans_pane_g1

0xb72e,	// (0x0004d580) list_form2_midp_pane_t1

0xb73c,	// (0x0004d58e) list_form2_midp_pane_t2

0x0001,

0xfaf2,	// (0x00051944) list_form2_midp_pane_t

0xb74a,	// (0x0004d59c) scroll_pane_cp51_ParamLimits

0xb911,	// (0x0004d763) form2_midp_wait_pane_g1

0xb91a,	// (0x0004d76c) form2_midp_wait_pane_g2

0xb923,	// (0x0004d775) form2_midp_wait_pane_g3

0x0002,

0xfb07,	// (0x00051959) form2_midp_wait_pane_g

0x0567,	// (0x000423b9) list_highlight_pane_cp21_ParamLimits

0xb967,	// (0x0004d7b9) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb976,	// (0x0004d7c8) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xaa6b,	// (0x0004c8bd) list_single_2graphic_im_pane_ParamLimits

0xaa6b,	// (0x0004c8bd) list_single_2graphic_im_pane

0xc72f,	// (0x0004e581) list_single_2graphic_im_pane_g1_ParamLimits

0xc72f,	// (0x0004e581) list_single_2graphic_im_pane_g1

0xc740,	// (0x0004e592) list_single_2graphic_im_pane_g2_ParamLimits

0xc740,	// (0x0004e592) list_single_2graphic_im_pane_g2

0xc74c,	// (0x0004e59e) list_single_2graphic_im_pane_g3_ParamLimits

0xc74c,	// (0x0004e59e) list_single_2graphic_im_pane_g3

0x0003,

0xfc5c,	// (0x00051aae) list_single_2graphic_im_pane_g_ParamLimits

0xfc5c,	// (0x00051aae) list_single_2graphic_im_pane_g

0xc76c,	// (0x0004e5be) list_single_2graphic_im_pane_t1_ParamLimits

0xc76c,	// (0x0004e5be) list_single_2graphic_im_pane_t1

0xc1da,	// (0x0004e02c) list_single_graphic_2heading_pane_fp_ParamLimits

0xc1da,	// (0x0004e02c) list_single_graphic_2heading_pane_fp

0x5ded,	// (0x00047c3f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5ded,	// (0x00047c3f) list_single_graphic_2heading_pane_fp_g1

0xc1f3,	// (0x0004e045) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc1f3,	// (0x0004e045) list_single_graphic_2heading_pane_fp_g2

0xc14c,	// (0x0004df9e) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc14c,	// (0x0004df9e) list_single_graphic_2heading_pane_fp_g3

0xc158,	// (0x0004dfaa) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc158,	// (0x0004dfaa) list_single_graphic_2heading_pane_fp_g4

0xc1ff,	// (0x0004e051) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc1ff,	// (0x0004e051) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x000519dc) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x000519dc) list_single_graphic_2heading_pane_fp_g

0x5f36,	// (0x00047d88) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5f36,	// (0x00047d88) list_single_graphic_2heading_pane_fp_t1

0x5e25,	// (0x00047c77) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5e25,	// (0x00047c77) list_single_graphic_2heading_pane_fp_t2

0x5f4c,	// (0x00047d9e) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5f4c,	// (0x00047d9e) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc65,	// (0x00051ab7) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc65,	// (0x00051ab7) list_single_graphic_2heading_pane_fp_t

0xbb9b,	// (0x0004d9ed) fep_hwr_write_pane_g5_ParamLimits

0xbb9b,	// (0x0004d9ed) fep_hwr_write_pane_g5

0xbba7,	// (0x0004d9f9) fep_hwr_write_pane_g6_ParamLimits

0xbba7,	// (0x0004d9f9) fep_hwr_write_pane_g6

0xc46d,	// (0x0004e2bf) eswt_shell_pane_ParamLimits

0x9516,	// (0x0004b368) bg_popup_window_pane_cp18_ParamLimits

0xa7c5,	// (0x0004c617) heading_pane_cp70

0xc597,	// (0x0004e3e9) popup_eswt_tasktip_window_t1_ParamLimits

0x8fef,	// (0x0004ae41) aid_touch_tab_arrow_left

0x8ffe,	// (0x0004ae50) aid_touch_tab_arrow_right

0xd6e8,	// (0x0004f53a) title_pane_g3_ParamLimits

0xd6e8,	// (0x0004f53a) title_pane_g3

0x0b3b,	// (0x0004298d) set_value_pane_g1

0x8ebc,	// (0x0004ad0e) popup_toolbar_trans_pane_ParamLimits

0xc6e3,	// (0x0004e535) aid_size_cell_tb_trans_pane_ParamLimits

0x0b7c,	// (0x000429ce) bg_tb_trans_pane_ParamLimits

0xc6f5,	// (0x0004e547) grid_tb_trans_pane_ParamLimits

0x069a,	// (0x000424ec) cont_note_pane_ParamLimits

0x069a,	// (0x000424ec) cont_note_pane

0x08f7,	// (0x00042749) cont_snote2_single_text_pane_ParamLimits

0x08f7,	// (0x00042749) cont_snote2_single_text_pane

0x08f7,	// (0x00042749) cont_snote2_single_graphic_pane_ParamLimits

0x08f7,	// (0x00042749) cont_snote2_single_graphic_pane

0x9af2,	// (0x0004b944) cont_note_wait_pane_ParamLimits

0x9af2,	// (0x0004b944) cont_note_wait_pane

0x9af2,	// (0x0004b944) cont_note_image_pane_ParamLimits

0x9af2,	// (0x0004b944) cont_note_image_pane

0xc79d,	// (0x0004e5ef) popup_note2_window_g1_ParamLimits

0xc79d,	// (0x0004e5ef) popup_note2_window_g1

0xc7ce,	// (0x0004e620) popup_note2_window_t1_ParamLimits

0xc7ce,	// (0x0004e620) popup_note2_window_t1

0xc813,	// (0x0004e665) popup_note2_window_t2_ParamLimits

0xc813,	// (0x0004e665) popup_note2_window_t2

0xc858,	// (0x0004e6aa) popup_note2_window_t3_ParamLimits

0xc858,	// (0x0004e6aa) popup_note2_window_t3

0xc89d,	// (0x0004e6ef) popup_note2_window_t4_ParamLimits

0xc89d,	// (0x0004e6ef) popup_note2_window_t4

0x071e,	// (0x00042570) popup_note2_window_t5_ParamLimits

0x071e,	// (0x00042570) popup_note2_window_t5

0x0004,

0xfc71,	// (0x00051ac3) popup_note2_window_t_ParamLimits

0xfc71,	// (0x00051ac3) popup_note2_window_t

0xc8cc,	// (0x0004e71e) popup_note2_image_window_g1_ParamLimits

0xc8cc,	// (0x0004e71e) popup_note2_image_window_g1

0xc8d8,	// (0x0004e72a) popup_note2_image_window_g2_ParamLimits

0xc8d8,	// (0x0004e72a) popup_note2_image_window_g2

0x0001,

0xfc7c,	// (0x00051ace) popup_note2_image_window_g_ParamLimits

0xfc7c,	// (0x00051ace) popup_note2_image_window_g

0xc8ea,	// (0x0004e73c) popup_note2_image_window_t1_ParamLimits

0xc8ea,	// (0x0004e73c) popup_note2_image_window_t1

0xc902,	// (0x0004e754) popup_note2_image_window_t2_ParamLimits

0xc902,	// (0x0004e754) popup_note2_image_window_t2

0xc91a,	// (0x0004e76c) popup_note2_image_window_t3_ParamLimits

0xc91a,	// (0x0004e76c) popup_note2_image_window_t3

0x0002,

0xfc81,	// (0x00051ad3) popup_note2_image_window_t_ParamLimits

0xfc81,	// (0x00051ad3) popup_note2_image_window_t

0x9b00,	// (0x0004b952) popup_note2_wait_window_g1_ParamLimits

0x9b00,	// (0x0004b952) popup_note2_wait_window_g1

0xc936,	// (0x0004e788) popup_note2_wait_window_g2_ParamLimits

0xc936,	// (0x0004e788) popup_note2_wait_window_g2

0x9b18,	// (0x0004b96a) popup_note2_wait_window_g3_ParamLimits

0x9b18,	// (0x0004b96a) popup_note2_wait_window_g3

0x0002,

0xfc88,	// (0x00051ada) popup_note2_wait_window_g_ParamLimits

0xfc88,	// (0x00051ada) popup_note2_wait_window_g

0xc942,	// (0x0004e794) popup_note2_wait_window_t1_ParamLimits

0xc942,	// (0x0004e794) popup_note2_wait_window_t1

0xc960,	// (0x0004e7b2) popup_note2_wait_window_t2_ParamLimits

0xc960,	// (0x0004e7b2) popup_note2_wait_window_t2

0xc97e,	// (0x0004e7d0) popup_note2_wait_window_t3_ParamLimits

0xc97e,	// (0x0004e7d0) popup_note2_wait_window_t3

0xc990,	// (0x0004e7e2) popup_note2_wait_window_t4_ParamLimits

0xc990,	// (0x0004e7e2) popup_note2_wait_window_t4

0x0003,

0xfc8f,	// (0x00051ae1) popup_note2_wait_window_t_ParamLimits

0xfc8f,	// (0x00051ae1) popup_note2_wait_window_t

0xc9a2,	// (0x0004e7f4) wait_bar2_pane_ParamLimits

0xc9a2,	// (0x0004e7f4) wait_bar2_pane

0xc9ba,	// (0x0004e80c) popup_snote2_single_text_window_g1_ParamLimits

0xc9ba,	// (0x0004e80c) popup_snote2_single_text_window_g1

0xc9e2,	// (0x0004e834) popup_snote2_single_text_window_t1_ParamLimits

0xc9e2,	// (0x0004e834) popup_snote2_single_text_window_t1

0xca2e,	// (0x0004e880) popup_snote2_single_text_window_t2_ParamLimits

0xca2e,	// (0x0004e880) popup_snote2_single_text_window_t2

0xca7a,	// (0x0004e8cc) popup_snote2_single_text_window_t3_ParamLimits

0xca7a,	// (0x0004e8cc) popup_snote2_single_text_window_t3

0xcabb,	// (0x0004e90d) popup_snote2_single_text_window_t4_ParamLimits

0xcabb,	// (0x0004e90d) popup_snote2_single_text_window_t4

0xcaf1,	// (0x0004e943) popup_snote2_single_text_window_t5_ParamLimits

0xcaf1,	// (0x0004e943) popup_snote2_single_text_window_t5

0x0004,

0xfc98,	// (0x00051aea) popup_snote2_single_text_window_t_ParamLimits

0xfc98,	// (0x00051aea) popup_snote2_single_text_window_t

0xcb1c,	// (0x0004e96e) popup_snote2_single_graphic_window_g1_ParamLimits

0xcb1c,	// (0x0004e96e) popup_snote2_single_graphic_window_g1

0xcb44,	// (0x0004e996) popup_snote2_single_graphic_window_g2_ParamLimits

0xcb44,	// (0x0004e996) popup_snote2_single_graphic_window_g2

0x0001,

0xfca3,	// (0x00051af5) popup_snote2_single_graphic_window_g_ParamLimits

0xfca3,	// (0x00051af5) popup_snote2_single_graphic_window_g

0xcb6c,	// (0x0004e9be) popup_snote2_single_graphic_window_t1_ParamLimits

0xcb6c,	// (0x0004e9be) popup_snote2_single_graphic_window_t1

0xcbb8,	// (0x0004ea0a) popup_snote2_single_graphic_window_t2_ParamLimits

0xcbb8,	// (0x0004ea0a) popup_snote2_single_graphic_window_t2

0xca7a,	// (0x0004e8cc) popup_snote2_single_graphic_window_t3_ParamLimits

0xca7a,	// (0x0004e8cc) popup_snote2_single_graphic_window_t3

0xcabb,	// (0x0004e90d) popup_snote2_single_graphic_window_t4_ParamLimits

0xcabb,	// (0x0004e90d) popup_snote2_single_graphic_window_t4

0xcaf1,	// (0x0004e943) popup_snote2_single_graphic_window_t5_ParamLimits

0xcaf1,	// (0x0004e943) popup_snote2_single_graphic_window_t5

0x0004,

0xfca8,	// (0x00051afa) popup_snote2_single_graphic_window_t_ParamLimits

0xfca8,	// (0x00051afa) popup_snote2_single_graphic_window_t

0xb5fa,	// (0x0004d44c) clock_nsta_pane_cp2_t1

0xb5fa,	// (0x0004d44c) clock_nsta_pane_cp2_t2

0x0001,

0xfac8,	// (0x0005191a) clock_nsta_pane_cp2_t

0x5779,	// (0x000475cb) form_field_data_wide_pane_g1_ParamLimits

0x0b8a,	// (0x000429dc) form_field_data_wide_pane_g2_ParamLimits

0x0b8a,	// (0x000429dc) form_field_data_wide_pane_g2

0x0b96,	// (0x000429e8) form_field_data_wide_pane_g3_ParamLimits

0x0b96,	// (0x000429e8) form_field_data_wide_pane_g3

0x0002,

0xf686,	// (0x000514d8) form_field_data_wide_pane_g_ParamLimits

0xf686,	// (0x000514d8) form_field_data_wide_pane_g

0xb4d3,	// (0x0004d325) grid_touch_3_pane_ParamLimits

0xb4d3,	// (0x0004d325) grid_touch_3_pane

0xcc04,	// (0x0004ea56) cell_touch_3_pane_ParamLimits

0xcc04,	// (0x0004ea56) cell_touch_3_pane

0xbb0a,	// (0x0004d95c) cell_touch_3_pane_g1

0xbb0a,	// (0x0004d95c) cell_touch_3_pane_g2

0x0001,

0xfb4d,	// (0x0005199f) cell_touch_3_pane_g

0x0750,	// (0x000425a2) cont_query_data_pane

0x0758,	// (0x000425aa) cont_query_data_pane_cp1

0xcc37,	// (0x0004ea89) button_value_adjust_pane_cp7

0xcc3f,	// (0x0004ea91) query_popup_pane_cp3

0x4248,	// (0x0004609a) bg_popup_sub_pane_cp22_ParamLimits

0x6cee,	// (0x00048b40) navi_navi_volume_pane_cp2

0x6d09,	// (0x00048b5b) popup_side_volume_key_window_g2

0x6d18,	// (0x00048b6a) popup_side_volume_key_window_g3

0x0002,

0xf71c,	// (0x0005156e) popup_side_volume_key_window_g

0x6d35,	// (0x00048b87) popup_side_volume_key_window_t2

0x0001,

0xf723,	// (0x00051575) popup_side_volume_key_window_t

0x45f6,	// (0x00046448) popup_side_volume_key_window_ParamLimits

0x537f,	// (0x000471d1) list_double_graphic_pane_g4_ParamLimits

0x537f,	// (0x000471d1) list_double_graphic_pane_g4

0xaa9a,	// (0x0004c8ec) list_single_2heading_msg_pane_ParamLimits

0xaa9a,	// (0x0004c8ec) list_single_2heading_msg_pane

0x7d72,	// (0x00049bc4) list_single_2heading_msg_pane_g1_ParamLimits

0x7d72,	// (0x00049bc4) list_single_2heading_msg_pane_g1

0x2914,	// (0x00044766) list_single_2heading_msg_pane_g2_ParamLimits

0x2914,	// (0x00044766) list_single_2heading_msg_pane_g2

0x7d7e,	// (0x00049bd0) list_single_2heading_msg_pane_g3_ParamLimits

0x7d7e,	// (0x00049bd0) list_single_2heading_msg_pane_g3

0x7d8a,	// (0x00049bdc) list_single_2heading_msg_pane_g4_ParamLimits

0x7d8a,	// (0x00049bdc) list_single_2heading_msg_pane_g4

0x0003,

0xfcb3,	// (0x00051b05) list_single_2heading_msg_pane_g_ParamLimits

0xfcb3,	// (0x00051b05) list_single_2heading_msg_pane_g

0x5f6c,	// (0x00047dbe) list_single_2heading_msg_pane_t1_ParamLimits

0x5f6c,	// (0x00047dbe) list_single_2heading_msg_pane_t1

0x5f94,	// (0x00047de6) list_single_2heading_msg_pane_t2_ParamLimits

0x5f94,	// (0x00047de6) list_single_2heading_msg_pane_t2

0x5fc3,	// (0x00047e15) list_single_2heading_msg_pane_t3_ParamLimits

0x5fc3,	// (0x00047e15) list_single_2heading_msg_pane_t3

0x5ffc,	// (0x00047e4e) list_single_2heading_msg_pane_t4_ParamLimits

0x5ffc,	// (0x00047e4e) list_single_2heading_msg_pane_t4

0x0003,

0xfcbc,	// (0x00051b0e) list_single_2heading_msg_pane_t_ParamLimits

0xfcbc,	// (0x00051b0e) list_single_2heading_msg_pane_t

0xd6f4,	// (0x0004f546) title_pane_g4_ParamLimits

0xd6f4,	// (0x0004f546) title_pane_g4

0x6985,	// (0x000487d7) title_pane_stacon_g3_ParamLimits

0x6985,	// (0x000487d7) title_pane_stacon_g3

0xc760,	// (0x0004e5b2) list_single_2graphic_im_pane_g4_ParamLimits

0xc760,	// (0x0004e5b2) list_single_2graphic_im_pane_g4

0xa562,	// (0x0004c3b4) popup_side_volume_key_window_cp

0xadc2,	// (0x0004cc14) main_idle_act2_pane_t1

0x7484,	// (0x000492d6) toolbar_button_pane_g10

0x67d5,	// (0x00048627) popup_toolbar_window_cp1

0xb5eb,	// (0x0004d43d) clock_nsta_pane_cp_t1

0xb5eb,	// (0x0004d43d) clock_nsta_pane_cp_t2

0x0001,

0xfac3,	// (0x00051915) clock_nsta_pane_cp_t

0x6cee,	// (0x00048b40) navi_navi_volume_pane_cp2_ParamLimits

0x6cfd,	// (0x00048b4f) popup_side_volume_key_window_g1_ParamLimits

0x6d09,	// (0x00048b5b) popup_side_volume_key_window_g2_ParamLimits

0x6d18,	// (0x00048b6a) popup_side_volume_key_window_g3_ParamLimits

0xf71c,	// (0x0005156e) popup_side_volume_key_window_g_ParamLimits

0x7978,	// (0x000497ca) fep_hwr_aid_pane

0x20ff,	// (0x00043f51) bg_fep_hwr_top_pane_g4_ParamLimits

0xbb6b,	// (0x0004d9bd) fep_hwr_top_pane_g1_ParamLimits

0xbb7d,	// (0x0004d9cf) fep_hwr_top_pane_g2_ParamLimits

0x7a33,	// (0x00049885) fep_hwr_top_pane_g3_ParamLimits

0xfb18,	// (0x0005196a) fep_hwr_top_pane_g_ParamLimits

0x7a48,	// (0x0004989a) fep_hwr_top_text_pane_ParamLimits

0xa317,	// (0x0004c169) aid_touch_tab_arrow_arrow_2

0xa320,	// (0x0004c172) aid_touch_tab_arrow_left_2

0x798c,	// (0x000497de) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x79c3,	// (0x00049815) fep_hwr_prediction_pane

0xbcd3,	// (0x0004db25) fep_vkb_prediction_pane

0xbdd9,	// (0x0004dc2b) fep_vkb_side_pane_g3_ParamLimits

0xbdd9,	// (0x0004dc2b) fep_vkb_side_pane_g3

0xbd85,	// (0x0004dbd7) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc253,	// (0x0004e0a5) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc260,	// (0x0004e0b2) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc2,	// (0x00051a14) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xcc66,	// (0x0004eab8) fep_hwr_prediction_pane_g1

0x7da2,	// (0x00049bf4) fep_hwr_prediction_pane_g2

0x7daa,	// (0x00049bfc) fep_hwr_prediction_pane_g3

0x7db2,	// (0x00049c04) fep_hwr_prediction_pane_g4

0x0003,

0xfcc5,	// (0x00051b17) fep_hwr_prediction_pane_g

0xcc66,	// (0x0004eab8) fep_vkb_prediction_pane_g1

0xcc70,	// (0x0004eac2) fep_vkb_prediction_pane_g2

0xcc78,	// (0x0004eaca) fep_vkb_prediction_pane_g3

0xcc80,	// (0x0004ead2) fep_vkb_prediction_pane_g4

0x0003,

0xfcce,	// (0x00051b20) fep_vkb_prediction_pane_g

0xaf45,	// (0x0004cd97) slider_set_pane_g3

0xaf59,	// (0x0004cdab) slider_set_pane_g4

0xd746,	// (0x0004f598) slider_set_pane_g5

0xaf45,	// (0x0004cd97) slider_set_pane_g6

0x7791,	// (0x000495e3) slider_set_pane_g7

0xaa04,	// (0x0004c856) slider_form_pane_g3

0xaa0d,	// (0x0004c85f) slider_form_pane_g4

0xaa15,	// (0x0004c867) slider_form_pane_g5

0xaa04,	// (0x0004c856) slider_form_pane_g6

0xaa1d,	// (0x0004c86f) slider_form_pane_g7

0xb0a5,	// (0x0004cef7) slider_set_pane_vc_g3

0xb0ae,	// (0x0004cf00) slider_set_pane_vc_g4

0xb0b7,	// (0x0004cf09) slider_set_pane_vc_g5

0xb0a5,	// (0x0004cef7) slider_set_pane_vc_g6

0xb0c0,	// (0x0004cf12) slider_set_pane_vc_g7

0xb298,	// (0x0004d0ea) slider_form_pane_vc_g1

0xb2a1,	// (0x0004d0f3) slider_form_pane_vc_g2

0xb2aa,	// (0x0004d0fc) slider_form_pane_vc_g3

0xb298,	// (0x0004d0ea) slider_form_pane_vc_g4

0xb2b3,	// (0x0004d105) slider_form_pane_vc_g5

0x0004,

0xfa95,	// (0x000518e7) slider_form_pane_vc_g

0xd6ca,	// (0x0004f51c) main_idle_act3_pane

0xcc88,	// (0x0004eada) ai3_links_pane

0xcc91,	// (0x0004eae3) popup_ai3_data_window_ParamLimits

0xcc91,	// (0x0004eae3) popup_ai3_data_window

0xd6ca,	// (0x0004f51c) grid_ai3_links_pane

0xccaf,	// (0x0004eb01) cell_ai3_links_pane_ParamLimits

0xccaf,	// (0x0004eb01) cell_ai3_links_pane

0xccc9,	// (0x0004eb1b) bg_popup_sub_pane_cp11

0xccd6,	// (0x0004eb28) cell_ai3_links_pane_g1

0xd6ca,	// (0x0004f51c) bg_popup_sub_pane_cp12

0xccfb,	// (0x0004eb4d) heading_ai3_data_pane

0xcd03,	// (0x0004eb55) list_ai3_gene_pane

0xcd0f,	// (0x0004eb61) popup_ai3_data_window_g1

0xcd17,	// (0x0004eb69) heading_ai3_data_pane_g1

0xcd1f,	// (0x0004eb71) heading_ai3_data_pane_t1

0xcd2d,	// (0x0004eb7f) list_double_ai3_gene_pane_ParamLimits

0xcd2d,	// (0x0004eb7f) list_double_ai3_gene_pane

0xcd3a,	// (0x0004eb8c) list_single_ai3_gene_pane_ParamLimits

0xcd3a,	// (0x0004eb8c) list_single_ai3_gene_pane

0xbacf,	// (0x0004d921) list_highlight_pane_cp7_ParamLimits

0xbacf,	// (0x0004d921) list_highlight_pane_cp7

0xcd47,	// (0x0004eb99) list_single_a13_gene_pane_t1_ParamLimits

0xcd47,	// (0x0004eb99) list_single_a13_gene_pane_t1

0xcd5e,	// (0x0004ebb0) list_single_ai3_gene_pane_g1

0xcd67,	// (0x0004ebb9) list_single_ai3_gene_pane_g2

0x0001,

0xfcd7,	// (0x00051b29) list_single_ai3_gene_pane_g

0xcd6f,	// (0x0004ebc1) list_double_ai3_gene_pane_g1_ParamLimits

0xcd6f,	// (0x0004ebc1) list_double_ai3_gene_pane_g1

0xcd7b,	// (0x0004ebcd) list_double_ai3_gene_pane_t1_ParamLimits

0xcd7b,	// (0x0004ebcd) list_double_ai3_gene_pane_t1

0xcd97,	// (0x0004ebe9) list_double_ai3_gene_pane_t2_ParamLimits

0xcd97,	// (0x0004ebe9) list_double_ai3_gene_pane_t2

0xcdac,	// (0x0004ebfe) list_double_ai3_gene_pane_t3_ParamLimits

0xcdac,	// (0x0004ebfe) list_double_ai3_gene_pane_t3

0x0002,

0xfcdc,	// (0x00051b2e) list_double_ai3_gene_pane_t_ParamLimits

0xfcdc,	// (0x00051b2e) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5f62,	// (0x00047db4) aid_size_min_col_2

0xcc50,	// (0x0004eaa2) aid_size_min_msg_ParamLimits

0xcc50,	// (0x0004eaa2) aid_size_min_msg

0xbee5,	// (0x0004dd37) fep_vkb_top_text_pane_g2_ParamLimits

0xbee5,	// (0x0004dd37) fep_vkb_top_text_pane_g2

0x0001,

0xfb48,	// (0x0005199a) fep_vkb_top_text_pane_g_ParamLimits

0xfb48,	// (0x0005199a) fep_vkb_top_text_pane_g

0xd6ca,	// (0x0004f51c) main_hc_apps_shell_pane

0xcdc9,	// (0x0004ec1b) grid_hc_apps_pane_ParamLimits

0xcdc9,	// (0x0004ec1b) grid_hc_apps_pane

0xcdd8,	// (0x0004ec2a) list_hc_apps_pane

0xcde0,	// (0x0004ec32) scroll_pane_cp37_ParamLimits

0xcde0,	// (0x0004ec32) scroll_pane_cp37

0xcdec,	// (0x0004ec3e) cell_hc_apps_pane_ParamLimits

0xcdec,	// (0x0004ec3e) cell_hc_apps_pane

0xcea4,	// (0x0004ecf6) cell_hc_apps_pane_g1_ParamLimits

0xcea4,	// (0x0004ecf6) cell_hc_apps_pane_g1

0xced5,	// (0x0004ed27) cell_hc_apps_pane_g2_ParamLimits

0xced5,	// (0x0004ed27) cell_hc_apps_pane_g2

0xcef1,	// (0x0004ed43) cell_hc_apps_pane_g3_ParamLimits

0xcef1,	// (0x0004ed43) cell_hc_apps_pane_g3

0x0002,

0xfce3,	// (0x00051b35) cell_hc_apps_pane_g_ParamLimits

0xfce3,	// (0x00051b35) cell_hc_apps_pane_g

0xcf13,	// (0x0004ed65) cell_hc_apps_pane_t1_ParamLimits

0xcf13,	// (0x0004ed65) cell_hc_apps_pane_t1

0x069a,	// (0x000424ec) grid_highlight_pane_cp10_ParamLimits

0x069a,	// (0x000424ec) grid_highlight_pane_cp10

0xcf53,	// (0x0004eda5) list_single_hc_apps_pane_ParamLimits

0xcf53,	// (0x0004eda5) list_single_hc_apps_pane

0xcf92,	// (0x0004ede4) list_single_hc_apps_pane_g1

0x7dba,	// (0x00049c0c) list_single_hc_apps_pane_g2

0x0001,

0xfcea,	// (0x00051b3c) list_single_hc_apps_pane_g

0x7dd3,	// (0x00049c25) list_single_hc_apps_pane_g2_copy1

0x6021,	// (0x00047e73) list_single_hc_apps_pane_t1

0x0567,	// (0x000423b9) bg_set_opt_pane_cp_ParamLimits

0x6526,	// (0x00048378) setting_slider_pane_t1_ParamLimits

0x653f,	// (0x00048391) setting_slider_pane_t2_ParamLimits

0x6559,	// (0x000483ab) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x000513b6) setting_slider_pane_t_ParamLimits

0x6571,	// (0x000483c3) slider_set_pane_ParamLimits

0x7360,	// (0x000491b2) control_pane_g5_ParamLimits

0x7360,	// (0x000491b2) control_pane_g5

0xa831,	// (0x0004c683) slider_set_pane_g1_ParamLimits

0x7785,	// (0x000495d7) slider_set_pane_g2_ParamLimits

0xaf45,	// (0x0004cd97) slider_set_pane_g3_ParamLimits

0xaf59,	// (0x0004cdab) slider_set_pane_g4_ParamLimits

0xd746,	// (0x0004f598) slider_set_pane_g5_ParamLimits

0xaf45,	// (0x0004cd97) slider_set_pane_g6_ParamLimits

0x7791,	// (0x000495e3) slider_set_pane_g7_ParamLimits

0xf96f,	// (0x000517c1) slider_set_pane_g_ParamLimits

0x469e,	// (0x000464f0) navi_icon_text_pane_ParamLimits

0x8fae,	// (0x0004ae00) aid_fill_nsta_2_ParamLimits

0x8fef,	// (0x0004ae41) aid_touch_tab_arrow_left_ParamLimits

0x8ffe,	// (0x0004ae50) aid_touch_tab_arrow_right_ParamLimits

0x906b,	// (0x0004aebd) clock_nsta_pane_ParamLimits

0xa2f9,	// (0x0004c14b) navi_icon_pane_g1_ParamLimits

0xa305,	// (0x0004c157) navi_text_pane_t1_ParamLimits

0xb708,	// (0x0004d55a) navi_icon_text_pane_g1_ParamLimits

0xb714,	// (0x0004d566) navi_icon_text_pane_t1_ParamLimits

0xcf92,	// (0x0004ede4) list_single_hc_apps_pane_g1_ParamLimits

0x7dba,	// (0x00049c0c) list_single_hc_apps_pane_g2_ParamLimits

0xfcea,	// (0x00051b3c) list_single_hc_apps_pane_g_ParamLimits

0x7dd3,	// (0x00049c25) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x6021,	// (0x00047e73) list_single_hc_apps_pane_t1_ParamLimits

0x6376,	// (0x000481c8) popup_toolbar2_fixed_window_ParamLimits

0x6376,	// (0x000481c8) popup_toolbar2_fixed_window

0x8eb2,	// (0x0004ad04) popup_toolbar2_float_window

0xd6ca,	// (0x0004f51c) bg_popup_sub_pane_cp27

0xcfab,	// (0x0004edfd) grid_toolbar2_float_pane

0xd6ca,	// (0x0004f51c) bg_popup_sub_pane_cp26

0xcfab,	// (0x0004edfd) grid_toolbar2_fixed_pane

0xcfb3,	// (0x0004ee05) cell_toolbar2_fixed_pane_ParamLimits

0xcfb3,	// (0x0004ee05) cell_toolbar2_fixed_pane

0xcfc3,	// (0x0004ee15) cell_toolbar2_fixed_pane_g1

0xcfcc,	// (0x0004ee1e) toolbar2_fixed_button_pane

0x94a2,	// (0x0004b2f4) toolbar2_fixed_button_pane_g1

0x94aa,	// (0x0004b2fc) toolbar2_fixed_button_pane_g2

0x94b2,	// (0x0004b304) toolbar2_fixed_button_pane_g3

0x94ba,	// (0x0004b30c) toolbar2_fixed_button_pane_g4

0x94c2,	// (0x0004b314) toolbar2_fixed_button_pane_g5

0x94ca,	// (0x0004b31c) toolbar2_fixed_button_pane_g6

0x94d2,	// (0x0004b324) toolbar2_fixed_button_pane_g7

0x94da,	// (0x0004b32c) toolbar2_fixed_button_pane_g8

0x94e2,	// (0x0004b334) toolbar2_fixed_button_pane_g9

0x0008,

0xf871,	// (0x000516c3) toolbar2_fixed_button_pane_g

0xcfd4,	// (0x0004ee26) cell_toolbar2_float_pane_ParamLimits

0xcfd4,	// (0x0004ee26) cell_toolbar2_float_pane

0xcfe5,	// (0x0004ee37) cell_toolbar2_float_pane_g1

0xcfcc,	// (0x0004ee1e) toolbar2_fixed_button_pane_cp

0xbc41,	// (0x0004da93) fep_vkb_accented_list_pane_ParamLimits

0xbc41,	// (0x0004da93) fep_vkb_accented_list_pane

0x7baa,	// (0x000499fc) bg_popup_fep_shadow_pane_g9

0x7073,	// (0x00048ec5) bg_popup_fep_shadow_pane_cp3

0x0c8f,	// (0x00042ae1) list_accented_list_pane

0xcfee,	// (0x0004ee40) list_single_accented_list_pane_ParamLimits

0xcfee,	// (0x0004ee40) list_single_accented_list_pane

0x7073,	// (0x00048ec5) list_highlight_pane_cp10

0xcfff,	// (0x0004ee51) list_single_accented_list_pane_t1

0x8df8,	// (0x0004ac4a) popup_slider_window_ParamLimits

0x8df8,	// (0x0004ac4a) popup_slider_window

0xcc47,	// (0x0004ea99) aid_indentation_list_msg

0xd0cb,	// (0x0004ef1d) bg_popup_window_pane_cp19

0xd139,	// (0x0004ef8b) popup_slider_window_g1

0xd155,	// (0x0004efa7) popup_slider_window_g2

0xd171,	// (0x0004efc3) popup_slider_window_g3

0x0005,

0xfcef,	// (0x00051b41) popup_slider_window_g

0xd1cd,	// (0x0004f01f) popup_slider_window_t1

0xd241,	// (0x0004f093) small_volume_slider_vertical_pane

0xbb0a,	// (0x0004d95c) small_volume_slider_vertical_pane_g1

0xbb0a,	// (0x0004d95c) small_volume_slider_vertical_pane_g2

0xd25d,	// (0x0004f0af) small_volume_slider_vertical_pane_g3

0x0002,

0xfd01,	// (0x00051b53) small_volume_slider_vertical_pane_g

0x612e,	// (0x00047f80) area_side_right_pane_ParamLimits

0x612e,	// (0x00047f80) area_side_right_pane

0x7def,	// (0x00049c41) aid_size_side_button_ParamLimits

0x7def,	// (0x00049c41) aid_size_side_button

0x7e03,	// (0x00049c55) grid_sctrl_middle_pane_ParamLimits

0x7e03,	// (0x00049c55) grid_sctrl_middle_pane

0x7e23,	// (0x00049c75) sctrl_sk_bottom_pane

0x7e34,	// (0x00049c86) sctrl_sk_top_pane

0x7e46,	// (0x00049c98) aid_touch_sctrl_top

0x069a,	// (0x000424ec) bg_sctrl_sk_pane_ParamLimits

0x069a,	// (0x000424ec) bg_sctrl_sk_pane

0x7e53,	// (0x00049ca5) sctrl_sk_top_pane_g1

0x7e60,	// (0x00049cb2) sctrl_sk_top_pane_t1

0x7e46,	// (0x00049c98) aid_touch_sctrl_bottom

0x069a,	// (0x000424ec) bg_sctrl_sk_pane_cp_ParamLimits

0x069a,	// (0x000424ec) bg_sctrl_sk_pane_cp

0x7e7b,	// (0x00049ccd) sctrl_sk_bottom_pane_g1

0x7e60,	// (0x00049cb2) sctrl_sk_bottom_pane_t1

0x7e84,	// (0x00049cd6) cell_sctrl_middle_pane_ParamLimits

0x7e84,	// (0x00049cd6) cell_sctrl_middle_pane

0x7ea1,	// (0x00049cf3) aid_touch_sctrl_middle_ParamLimits

0x7ea1,	// (0x00049cf3) aid_touch_sctrl_middle

0x0b7c,	// (0x000429ce) bg_sctrl_middle_pane_ParamLimits

0x0b7c,	// (0x000429ce) bg_sctrl_middle_pane

0xbd85,	// (0x0004dbd7) cell_sctrl_middle_pane_g1_ParamLimits

0xbd85,	// (0x0004dbd7) cell_sctrl_middle_pane_g1

0x7eb3,	// (0x00049d05) cell_sctrl_middle_pane_g2_ParamLimits

0x7eb3,	// (0x00049d05) cell_sctrl_middle_pane_g2

0x0001,

0xfd0d,	// (0x00051b5f) cell_sctrl_middle_pane_g_ParamLimits

0xfd0d,	// (0x00051b5f) cell_sctrl_middle_pane_g

0x94a2,	// (0x0004b2f4) bg_sctrl_middle_pane_g1

0x94aa,	// (0x0004b2fc) bg_sctrl_middle_pane_g2

0x94b2,	// (0x0004b304) bg_sctrl_middle_pane_g3

0x94ba,	// (0x0004b30c) bg_sctrl_middle_pane_g4

0x94c2,	// (0x0004b314) bg_sctrl_middle_pane_g5

0x94ca,	// (0x0004b31c) bg_sctrl_middle_pane_g6

0x94d2,	// (0x0004b324) bg_sctrl_middle_pane_g7

0x94da,	// (0x0004b32c) bg_sctrl_middle_pane_g8

0x0007,

0xfd12,	// (0x00051b64) bg_sctrl_middle_pane_g

0x94e2,	// (0x0004b334) bg_sctrl_middle_pane_g8_copy1

0x94a2,	// (0x0004b2f4) bg_sctrl_sk_pane_g1

0x94aa,	// (0x0004b2fc) bg_sctrl_sk_pane_g2

0x94b2,	// (0x0004b304) bg_sctrl_sk_pane_g3

0x0008,

0xf871,	// (0x000516c3) bg_sctrl_sk_pane_g

0x0ab5,	// (0x00042907) aid_size_touch_scroll_bar

0x94ba,	// (0x0004b30c) bg_sctrl_sk_pane_g4

0x94c2,	// (0x0004b314) bg_sctrl_sk_pane_g5

0x94ca,	// (0x0004b31c) bg_sctrl_sk_pane_g6

0x94d2,	// (0x0004b324) bg_sctrl_sk_pane_g7

0x94da,	// (0x0004b32c) bg_sctrl_sk_pane_g8

0x94e2,	// (0x0004b334) bg_sctrl_sk_pane_g9

0x8a0f,	// (0x0004a861) popup_fep_china_hwr2_fs_candidate_window

0x8a19,	// (0x0004a86b) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8a19,	// (0x0004a86b) popup_fep_china_hwr2_fs_control_window

0xbd85,	// (0x0004dbd7) sctrl_sk_top_pane_g2

0x0001,

0xfd08,	// (0x00051b5a) sctrl_sk_top_pane_g

0xd266,	// (0x0004f0b8) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd266,	// (0x0004f0b8) aid_fep_china_hwr2_fs_cell

0xd279,	// (0x0004f0cb) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd279,	// (0x0004f0cb) bg_popup_fep_shadow_pane_cp4

0xd292,	// (0x0004f0e4) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd292,	// (0x0004f0e4) bg_popup_fep_shadow_pane_cp5

0xd2a4,	// (0x0004f0f6) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd2a4,	// (0x0004f0f6) popup_fep_china_hwr2_fs_control_bar_grid

0xd2b4,	// (0x0004f106) popup_fep_china_hwr2_fs_control_funtion_grid

0xd2bc,	// (0x0004f10e) aid_fep_china_hwr2_fs_candi_cell

0xd6ca,	// (0x0004f51c) bg_popup_fep_shadow_pane_cp6

0xd2c6,	// (0x0004f118) popup_fep_china_hwr2_fs_candidate_grid

0xd2d0,	// (0x0004f122) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd2d0,	// (0x0004f122) cell_fep_china_hwr2_fs_funtion_grid

0xbb0a,	// (0x0004d95c) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd2e8,	// (0x0004f13a) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd2e8,	// (0x0004f13a) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd2f6,	// (0x0004f148) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd2f6,	// (0x0004f148) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd23,	// (0x00051b75) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd23,	// (0x00051b75) cell_fep_china_hwr2_fs_funtion_grid_g

0xd30c,	// (0x0004f15e) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd30c,	// (0x0004f15e) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd321,	// (0x0004f173) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd321,	// (0x0004f173) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd28,	// (0x00051b7a) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd28,	// (0x00051b7a) cell_fep_china_hwr2_fs_funtion_grid_t

0xd33d,	// (0x0004f18f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd345,	// (0x0004f197) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd34d,	// (0x0004f19f) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2d,	// (0x00051b7f) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd355,	// (0x0004f1a7) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd355,	// (0x0004f1a7) cell_fep_china_hwr2_fs_candidate_grid

0xd374,	// (0x0004f1c6) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd37c,	// (0x0004f1ce) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbb0a,	// (0x0004d95c) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbb0a,	// (0x0004d95c) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4d,	// (0x0005199f) cell_fep_china_hwr2_fs_candidate_grid_g

0xd384,	// (0x0004f1d6) cell_fep_china_hwr2_fs_candidate_grid_t1

0x907e,	// (0x0004aed0) clock_nsta_pane_cp_24_ParamLimits

0x907e,	// (0x0004aed0) clock_nsta_pane_cp_24

0x90fe,	// (0x0004af50) indicator_nsta_pane_cp_24_ParamLimits

0x90fe,	// (0x0004af50) indicator_nsta_pane_cp_24

0xa175,	// (0x0004bfc7) heading_pane_g1

0x0001,

0xf8d6,	// (0x00051728) heading_pane_g

0xac09,	// (0x0004ca5b) grid_sct_catagory_button_pane

0xac3b,	// (0x0004ca8d) scroll_pane_cp5_ParamLimits

0xb756,	// (0x0004d5a8) button_value_adjust_pane_cp5_ParamLimits

0xb756,	// (0x0004d5a8) button_value_adjust_pane_cp5

0xb83b,	// (0x0004d68d) form2_midp_time_pane_ParamLimits

0xd392,	// (0x0004f1e4) cell_sct_catagory_button_pane_ParamLimits

0xd392,	// (0x0004f1e4) cell_sct_catagory_button_pane

0xbacf,	// (0x0004d921) bg_button_pane_cp01_ParamLimits

0xbacf,	// (0x0004d921) bg_button_pane_cp01

0xbb0a,	// (0x0004d95c) cell_sct_catagory_button_pane_g1

0x8e39,	// (0x0004ac8b) popup_tb_extension_window

0xd3a4,	// (0x0004f1f6) aid_size_cell_ext_ParamLimits

0xd3a4,	// (0x0004f1f6) aid_size_cell_ext

0x069a,	// (0x000424ec) bg_tb_trans_pane_cp1_ParamLimits

0x069a,	// (0x000424ec) bg_tb_trans_pane_cp1

0xd3c4,	// (0x0004f216) grid_tb_ext_pane_ParamLimits

0xd3c4,	// (0x0004f216) grid_tb_ext_pane

0xd3f4,	// (0x0004f246) cell_tb_ext_pane_ParamLimits

0xd3f4,	// (0x0004f246) cell_tb_ext_pane

0xd40b,	// (0x0004f25d) cell_tb_ext_pane_g1_ParamLimits

0xd40b,	// (0x0004f25d) cell_tb_ext_pane_g1

0xd428,	// (0x0004f27a) cell_tb_ext_pane_t1

0x069a,	// (0x000424ec) list_highlight_pane_cp11_ParamLimits

0x069a,	// (0x000424ec) list_highlight_pane_cp11

0x6395,	// (0x000481e7) popup_uni_indicator_window_ParamLimits

0x6395,	// (0x000481e7) popup_uni_indicator_window

0x0b7c,	// (0x000429ce) bg_popup_sub_pane_cp14

0xd443,	// (0x0004f295) list_uniindi_pane

0xd44f,	// (0x0004f2a1) uniindi_top_pane

0x069a,	// (0x000424ec) bg_uniindi_top_pane

0xd470,	// (0x0004f2c2) uniindi_top_pane_g1

0xd486,	// (0x0004f2d8) uniindi_top_pane_g2

0x0003,

0xfd34,	// (0x00051b86) uniindi_top_pane_g

0xd4b0,	// (0x0004f302) uniindi_top_pane_t1

0xd4dc,	// (0x0004f32e) list_single_uniindi_pane_ParamLimits

0xd4dc,	// (0x0004f32e) list_single_uniindi_pane

0xbb0a,	// (0x0004d95c) bg_uniindi_top_pane_g1

0xd4ee,	// (0x0004f340) list_single_uniindi_pane_g1

0xd501,	// (0x0004f353) list_single_uniindi_pane_t1

0xd6ca,	// (0x0004f51c) control_bg_pane

0xd526,	// (0x0004f378) bg_sctrl_sk_pane_cp1

0xd52f,	// (0x0004f381) bg_sctrl_sk_pane_cp2

0xd538,	// (0x0004f38a) control_bg_pane_g1

0xd541,	// (0x0004f393) control_bg_pane_g2

0x0001,

0xfd3d,	// (0x00051b8f) control_bg_pane_g

0xb57d,	// (0x0004d3cf) cell_indicator_nsta_pane_g1_ParamLimits

0xb58b,	// (0x0004d3dd) cell_indicator_nsta_pane_g2_ParamLimits

0xfab1,	// (0x00051903) cell_indicator_nsta_pane_g_ParamLimits

0x5dc3,	// (0x00047c15) form2_midp_time_pane_t1_ParamLimits

0x08f7,	// (0x00042749) main_idle_act4_pane_ParamLimits

0x08f7,	// (0x00042749) main_idle_act4_pane

0x8e39,	// (0x0004ac8b) popup_tb_extension_window_ParamLimits

0xd3e6,	// (0x0004f238) tb_ext_find_pane_ParamLimits

0xd3e6,	// (0x0004f238) tb_ext_find_pane

0xd54a,	// (0x0004f39c) ai_gene_pane_1_cp1

0x71b0,	// (0x00049002) ai_gene_pane_2_cp1

0xd552,	// (0x0004f3a4) list_single_idle_plugin_calendar_pane

0xd55b,	// (0x0004f3ad) list_single_idle_plugin_notification_pane

0xd564,	// (0x0004f3b6) list_single_idle_plugin_player_pane

0xd56d,	// (0x0004f3bf) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd56d,	// (0x0004f3bf) list_single_idle_plugin_shortcut_pane

0xd58f,	// (0x0004f3e1) main_idle_act4_pane_t1

0xd5a1,	// (0x0004f3f3) main_idle_act4_pane_t2

0x0001,

0xfd42,	// (0x00051b94) main_idle_act4_pane_t

0xd5b3,	// (0x0004f405) middle_sk_idle_act4_pane_ParamLimits

0xd5b3,	// (0x0004f405) middle_sk_idle_act4_pane

0xd5c9,	// (0x0004f41b) popup_clock_digital_analogue_window_cp2

0xd5e3,	// (0x0004f435) shortcut_wheel_idle_act4_pane_ParamLimits

0xd5e3,	// (0x0004f435) shortcut_wheel_idle_act4_pane

0xbb0a,	// (0x0004d95c) shortcut_wheel_idle_act4_pane_g1

0xbb0a,	// (0x0004d95c) shortcut_wheel_idle_act4_pane_g2

0xbb0a,	// (0x0004d95c) shortcut_wheel_idle_act4_pane_g3

0xbb0a,	// (0x0004d95c) shortcut_wheel_idle_act4_pane_g4

0xbb0a,	// (0x0004d95c) shortcut_wheel_idle_act4_pane_g5

0xd5f7,	// (0x0004f449) shortcut_wheel_idle_act4_pane_g6

0xd5ff,	// (0x0004f451) shortcut_wheel_idle_act4_pane_g7

0xd607,	// (0x0004f459) shortcut_wheel_idle_act4_pane_g8

0xd60f,	// (0x0004f461) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd47,	// (0x00051b99) shortcut_wheel_idle_act4_pane_g

0xbd85,	// (0x0004dbd7) middle_sk_idle_act4_pane_g1_ParamLimits

0xbd85,	// (0x0004dbd7) middle_sk_idle_act4_pane_g1

0xd673,	// (0x0004f4c5) middle_sk_idle_act4_pane_g2_ParamLimits

0xd673,	// (0x0004f4c5) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6a,	// (0x00051bbc) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6a,	// (0x00051bbc) middle_sk_idle_act4_pane_g

0xd67f,	// (0x0004f4d1) middle_sk_idle_act4_pane_t1_ParamLimits

0xd67f,	// (0x0004f4d1) middle_sk_idle_act4_pane_t1

0xd69c,	// (0x0004f4ee) grid_ai_shortcut_pane_ParamLimits

0xd69c,	// (0x0004f4ee) grid_ai_shortcut_pane

0xd6b5,	// (0x0004f507) list_highlight_pane_cp16_ParamLimits

0xd6b5,	// (0x0004f507) list_highlight_pane_cp16

0xd75c,	// (0x0004f5ae) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd75c,	// (0x0004f5ae) list_single_idle_plugin_shortcut_pane_g1

0xd768,	// (0x0004f5ba) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd768,	// (0x0004f5ba) list_single_idle_plugin_shortcut_pane_g2

0xd782,	// (0x0004f5d4) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd782,	// (0x0004f5d4) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6f,	// (0x00051bc1) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6f,	// (0x00051bc1) list_single_idle_plugin_shortcut_pane_g

0xd795,	// (0x0004f5e7) cell_ai_shortcut_pane_ParamLimits

0xd795,	// (0x0004f5e7) cell_ai_shortcut_pane

0xd7b8,	// (0x0004f60a) cell_ai_shortcut_pane_g1_ParamLimits

0xd7b8,	// (0x0004f60a) cell_ai_shortcut_pane_g1

0xd54a,	// (0x0004f39c) ai_gene_pane_1_cp2

0xd7da,	// (0x0004f62c) ai_gene_pane_2_cp2

0xd7e2,	// (0x0004f634) list_highlight_pane_cp15

0xd7eb,	// (0x0004f63d) list_single_idle_plugin_calendar_pane_g1

0xd7e2,	// (0x0004f634) list_highlight_pane_cp17

0xd7f3,	// (0x0004f645) list_single_idle_plugin_calendar_pane_g1_copy1

0xd7fb,	// (0x0004f64d) list_single_idle_plugin_player_pane_g1

0xae70,	// (0x0004ccc2) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd76,	// (0x00051bc8) list_single_idle_plugin_player_pane_g

0xd803,	// (0x0004f655) list_single_idle_plugin_player_pane_t1

0xd811,	// (0x0004f663) list_single_idle_plugin_player_pane_t2

0xd81f,	// (0x0004f671) list_single_idle_plugin_player_pane_t3

0xd82d,	// (0x0004f67f) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7b,	// (0x00051bcd) list_single_idle_plugin_player_pane_t

0xd83b,	// (0x0004f68d) wait_bar_pane_cp15

0xd843,	// (0x0004f695) grid_ai_notification_pane

0xae70,	// (0x0004ccc2) list_single_idle_plugin_notification_pane_g1

0xd84c,	// (0x0004f69e) cell_ai_notification_pane_ParamLimits

0xd84c,	// (0x0004f69e) cell_ai_notification_pane

0xd859,	// (0x0004f6ab) cell_ai_notification_pane_g1

0xd861,	// (0x0004f6b3) cell_ai_notification_pane_t1

0xd86f,	// (0x0004f6c1) tb_ext_find_button_pane

0xd877,	// (0x0004f6c9) tb_ext_find_pane_g1

0xd87f,	// (0x0004f6d1) tb_ext_find_pane_t1

0x2429,	// (0x0004427b) tb_ext_find_button_pane_g1

0xd88d,	// (0x0004f6df) tb_ext_find_button_pane_g2

0x0001,

0xfd84,	// (0x00051bd6) tb_ext_find_button_pane_g

0xd58f,	// (0x0004f3e1) main_idle_act4_pane_t1_ParamLimits

0xd5a1,	// (0x0004f3f3) main_idle_act4_pane_t2_ParamLimits

0xfd42,	// (0x00051b94) main_idle_act4_pane_t_ParamLimits

0xd5c9,	// (0x0004f41b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd5d7,	// (0x0004f429) sat_plugin_idle_act4_pane_ParamLimits

0xd5d7,	// (0x0004f429) sat_plugin_idle_act4_pane

0xd896,	// (0x0004f6e8) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd896,	// (0x0004f6e8) sat_plugin_idle_act4_pane_t1

0xd8a9,	// (0x0004f6fb) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd8a9,	// (0x0004f6fb) sat_plugin_idle_act4_pane_t2

0xd8bc,	// (0x0004f70e) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd8bc,	// (0x0004f70e) sat_plugin_idle_act4_pane_t3

0xd8cf,	// (0x0004f721) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd8cf,	// (0x0004f721) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd89,	// (0x00051bdb) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd89,	// (0x00051bdb) sat_plugin_idle_act4_pane_t

0x62c6,	// (0x00048118) popup_battery_window_ParamLimits

0x62c6,	// (0x00048118) popup_battery_window

0x069a,	// (0x000424ec) bg_popup_sub_pane_cp25_ParamLimits

0x069a,	// (0x000424ec) bg_popup_sub_pane_cp25

0xd8e2,	// (0x0004f734) popup_battery_window_g1_ParamLimits

0xd8e2,	// (0x0004f734) popup_battery_window_g1

0xd8ee,	// (0x0004f740) popup_battery_window_t1_ParamLimits

0xd8ee,	// (0x0004f740) popup_battery_window_t1

0xd900,	// (0x0004f752) popup_battery_window_t2_ParamLimits

0xd900,	// (0x0004f752) popup_battery_window_t2

0x0001,

0xfd92,	// (0x00051be4) popup_battery_window_t_ParamLimits

0xfd92,	// (0x00051be4) popup_battery_window_t

0x707b,	// (0x00048ecd) midp_canvas_pane_ParamLimits

0x70f2,	// (0x00048f44) midp_keypad_pane_ParamLimits

0x70f2,	// (0x00048f44) midp_keypad_pane

0x8961,	// (0x0004a7b3) main_midp_pane_ParamLimits

0xb609,	// (0x0004d45b) signal_pane_g2_cp_ParamLimits

0xd91d,	// (0x0004f76f) aid_size_cell_midp_keypad_ParamLimits

0xd91d,	// (0x0004f76f) aid_size_cell_midp_keypad

0xd937,	// (0x0004f789) midp_keyp_game_grid_pane_ParamLimits

0xd937,	// (0x0004f789) midp_keyp_game_grid_pane

0xd957,	// (0x0004f7a9) midp_keyp_rocker_pane_ParamLimits

0xd957,	// (0x0004f7a9) midp_keyp_rocker_pane

0xd982,	// (0x0004f7d4) midp_keyp_sk_left_pane_ParamLimits

0xd982,	// (0x0004f7d4) midp_keyp_sk_left_pane

0xd9dc,	// (0x0004f82e) midp_keyp_sk_right_pane_ParamLimits

0xd9dc,	// (0x0004f82e) midp_keyp_sk_right_pane

0xd6ca,	// (0x0004f51c) bg_button_pane_cp03

0xda36,	// (0x0004f888) midp_keyp_sk_left_pane_g1

0xd6ca,	// (0x0004f51c) bg_button_pane_cp04

0xda36,	// (0x0004f888) midp_keyp_sk_right_pane_g1

0xbb0a,	// (0x0004d95c) midp_keyp_rocker_pane_g1

0xda3f,	// (0x0004f891) keyp_game_cell_pane_ParamLimits

0xda3f,	// (0x0004f891) keyp_game_cell_pane

0xd6ca,	// (0x0004f51c) bg_button_pane_cp02

0xda52,	// (0x0004f8a4) keyp_game_cell_pane_g1

0x6310,	// (0x00048162) popup_fep_vkb2_window_ParamLimits

0x6310,	// (0x00048162) popup_fep_vkb2_window

0x7ed1,	// (0x00049d23) aid_size_cell_vkb2_ParamLimits

0x7ed1,	// (0x00049d23) aid_size_cell_vkb2

0x7f25,	// (0x00049d77) popup_fep_vkb2_window_g1_ParamLimits

0x7f25,	// (0x00049d77) popup_fep_vkb2_window_g1

0x7f6d,	// (0x00049dbf) vkb2_area_bottom_pane_ParamLimits

0x7f6d,	// (0x00049dbf) vkb2_area_bottom_pane

0x7fc1,	// (0x00049e13) vkb2_area_keypad_pane_ParamLimits

0x7fc1,	// (0x00049e13) vkb2_area_keypad_pane

0x8007,	// (0x00049e59) vkb2_area_top_pane_ParamLimits

0x8007,	// (0x00049e59) vkb2_area_top_pane

0x8081,	// (0x00049ed3) vkb2_top_entry_pane_ParamLimits

0x8081,	// (0x00049ed3) vkb2_top_entry_pane

0x80ab,	// (0x00049efd) vkb2_top_grid_left_pane_ParamLimits

0x80ab,	// (0x00049efd) vkb2_top_grid_left_pane

0x80c9,	// (0x00049f1b) vkb2_top_grid_right_pane_ParamLimits

0x80c9,	// (0x00049f1b) vkb2_top_grid_right_pane

0x80e7,	// (0x00049f39) vkb2_cell_keypad_pane_ParamLimits

0x80e7,	// (0x00049f39) vkb2_cell_keypad_pane

0x81b8,	// (0x0004a00a) vkb2_area_bottom_grid_pane_ParamLimits

0x81b8,	// (0x0004a00a) vkb2_area_bottom_grid_pane

0x81de,	// (0x0004a030) vkb2_area_bottom_pane_g1_ParamLimits

0x81de,	// (0x0004a030) vkb2_area_bottom_pane_g1

0x8202,	// (0x0004a054) vkb2_area_bottom_pane_g2_ParamLimits

0x8202,	// (0x0004a054) vkb2_area_bottom_pane_g2

0x8230,	// (0x0004a082) vkb2_area_bottom_pane_g3_ParamLimits

0x8230,	// (0x0004a082) vkb2_area_bottom_pane_g3

0x0002,

0xfd97,	// (0x00051be9) vkb2_area_bottom_pane_g_ParamLimits

0xfd97,	// (0x00051be9) vkb2_area_bottom_pane_g

0x8291,	// (0x0004a0e3) vkb2_top_cell_left_pane_ParamLimits

0x8291,	// (0x0004a0e3) vkb2_top_cell_left_pane

0xda63,	// (0x0004f8b5) vkb2_top_entry_pane_g1_ParamLimits

0xda63,	// (0x0004f8b5) vkb2_top_entry_pane_g1

0xda71,	// (0x0004f8c3) vkb2_top_entry_pane_t1_ParamLimits

0xda71,	// (0x0004f8c3) vkb2_top_entry_pane_t1

0xdaa3,	// (0x0004f8f5) vkb2_top_entry_pane_t2_ParamLimits

0xdaa3,	// (0x0004f8f5) vkb2_top_entry_pane_t2

0xdad5,	// (0x0004f927) vkb2_top_entry_pane_t3_ParamLimits

0xdad5,	// (0x0004f927) vkb2_top_entry_pane_t3

0x0002,

0xfd9e,	// (0x00051bf0) vkb2_top_entry_pane_t_ParamLimits

0xfd9e,	// (0x00051bf0) vkb2_top_entry_pane_t

0x82de,	// (0x0004a130) vkb2_top_grid_right_pane_g1_ParamLimits

0x82de,	// (0x0004a130) vkb2_top_grid_right_pane_g1

0x82f4,	// (0x0004a146) vkb2_top_grid_right_pane_g2_ParamLimits

0x82f4,	// (0x0004a146) vkb2_top_grid_right_pane_g2

0x830c,	// (0x0004a15e) vkb2_top_grid_right_pane_g3_ParamLimits

0x830c,	// (0x0004a15e) vkb2_top_grid_right_pane_g3

0x8324,	// (0x0004a176) vkb2_top_grid_right_pane_g4_ParamLimits

0x8324,	// (0x0004a176) vkb2_top_grid_right_pane_g4

0x0003,

0xfda5,	// (0x00051bf7) vkb2_top_grid_right_pane_g_ParamLimits

0xfda5,	// (0x00051bf7) vkb2_top_grid_right_pane_g

0x833a,	// (0x0004a18c) vkb2_top_cell_left_pane_g1

0x8351,	// (0x0004a1a3) vkb2_cell_keypad_pane_g1_ParamLimits

0x8351,	// (0x0004a1a3) vkb2_cell_keypad_pane_g1

0xdaf9,	// (0x0004f94b) vkb2_cell_keypad_pane_t1_ParamLimits

0xdaf9,	// (0x0004f94b) vkb2_cell_keypad_pane_t1

0x835f,	// (0x0004a1b1) vkb2_cell_bottom_grid_pane_ParamLimits

0x835f,	// (0x0004a1b1) vkb2_cell_bottom_grid_pane

0x8398,	// (0x0004a1ea) vkb2_cell_bottom_grid_pane_g1

0xd617,	// (0x0004f469) aid_call2_pane_cp02

0xd61f,	// (0x0004f471) aid_call_pane_cp02

0xd627,	// (0x0004f479) clock_digital_number_pane_cp10

0xd62f,	// (0x0004f481) clock_digital_number_pane_cp11

0xd637,	// (0x0004f489) clock_digital_number_pane_cp12

0xd63f,	// (0x0004f491) clock_digital_number_pane_cp13

0xd647,	// (0x0004f499) clock_digital_separator_pane_cp10

0x2429,	// (0x0004427b) popup_clock_digital_analogue_window_cp2_g1

0x2429,	// (0x0004427b) popup_clock_digital_analogue_window_cp2_g2

0xd64f,	// (0x0004f4a1) popup_clock_digital_analogue_window_cp2_g3

0x2429,	// (0x0004427b) popup_clock_digital_analogue_window_cp2_g4

0xd64f,	// (0x0004f4a1) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5a,	// (0x00051bac) popup_clock_digital_analogue_window_cp2_g

0xd657,	// (0x0004f4a9) popup_clock_digital_analogue_window_cp2_t1

0xd665,	// (0x0004f4b7) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd65,	// (0x00051bb7) popup_clock_digital_analogue_window_cp2_t

0xbb0a,	// (0x0004d95c) clock_digital_number_pane_cp10_g1

0xbb0a,	// (0x0004d95c) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4d,	// (0x0005199f) clock_digital_number_pane_cp10_g

0xbb0a,	// (0x0004d95c) clock_digital_separator_pane_cp10_g1

0xbb0a,	// (0x0004d95c) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4d,	// (0x0005199f) clock_digital_separator_pane_cp10_g

0xd492,	// (0x0004f2e4) uniindi_top_pane_g3

0xd4a3,	// (0x0004f2f5) uniindi_top_pane_g4

0x8172,	// (0x00049fc4) vkb2_row_keypad_pane_ParamLimits

0x8172,	// (0x00049fc4) vkb2_row_keypad_pane

0x83b4,	// (0x0004a206) vkb2_cell_t_keypad_pane_ParamLimits

0x83b4,	// (0x0004a206) vkb2_cell_t_keypad_pane

0x83c4,	// (0x0004a216) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x83c4,	// (0x0004a216) vkb2_cell_t_keypad_pane_cp08

0x83d9,	// (0x0004a22b) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x83d9,	// (0x0004a22b) vkb2_cell_t_keypad_pane_cp09

0x83ed,	// (0x0004a23f) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x83ed,	// (0x0004a23f) vkb2_cell_t_keypad_pane_cp01

0x83fe,	// (0x0004a250) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x83fe,	// (0x0004a250) vkb2_cell_t_keypad_pane_cp02

0x840f,	// (0x0004a261) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x840f,	// (0x0004a261) vkb2_cell_t_keypad_pane_cp03

0x8420,	// (0x0004a272) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8420,	// (0x0004a272) vkb2_cell_t_keypad_pane_cp04

0x8431,	// (0x0004a283) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8431,	// (0x0004a283) vkb2_cell_t_keypad_pane_cp05

0x8442,	// (0x0004a294) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8442,	// (0x0004a294) vkb2_cell_t_keypad_pane_cp06

0x8455,	// (0x0004a2a7) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x8455,	// (0x0004a2a7) vkb2_cell_t_keypad_pane_cp07

0x846a,	// (0x0004a2bc) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x846a,	// (0x0004a2bc) vkb2_cell_t_keypad_pane_cp10

0xbd85,	// (0x0004dbd7) vkb2_cell_t_keypad_pane_g1

0xdb10,	// (0x0004f962) vkb2_cell_t_keypad_pane_t1

0xd6ca,	// (0x0004f51c) popup_grid_graphic2_window

0xdb22,	// (0x0004f974) aid_size_cell_graphic2_ParamLimits

0xdb22,	// (0x0004f974) aid_size_cell_graphic2

0xdb5a,	// (0x0004f9ac) bg_popup_window_pane_cp21_ParamLimits

0xdb5a,	// (0x0004f9ac) bg_popup_window_pane_cp21

0xdb68,	// (0x0004f9ba) graphic2_pages_pane_ParamLimits

0xdb68,	// (0x0004f9ba) graphic2_pages_pane

0xdbae,	// (0x0004fa00) grid_graphic2_control_pane_ParamLimits

0xdbae,	// (0x0004fa00) grid_graphic2_control_pane

0xdbec,	// (0x0004fa3e) grid_graphic2_pane_ParamLimits

0xdbec,	// (0x0004fa3e) grid_graphic2_pane

0xdc62,	// (0x0004fab4) cell_graphic2_pane

0xd6ca,	// (0x0004f51c) main_comp_mode_pane

0xcd03,	// (0x0004eb55) list_ai3_gene_pane_ParamLimits

0xd0cb,	// (0x0004ef1d) bg_popup_window_pane_cp19_ParamLimits

0xd0d7,	// (0x0004ef29) bg_touch_area_indi_pane_ParamLimits

0xd0d7,	// (0x0004ef29) bg_touch_area_indi_pane

0xd0ed,	// (0x0004ef3f) bg_touch_area_indi_pane_cp01_ParamLimits

0xd0ed,	// (0x0004ef3f) bg_touch_area_indi_pane_cp01

0xd105,	// (0x0004ef57) bg_touch_area_indi_pane_cp02_ParamLimits

0xd105,	// (0x0004ef57) bg_touch_area_indi_pane_cp02

0xd11f,	// (0x0004ef71) bg_touch_area_indi_pane_cp03_ParamLimits

0xd11f,	// (0x0004ef71) bg_touch_area_indi_pane_cp03

0xd139,	// (0x0004ef8b) popup_slider_window_g1_ParamLimits

0xd155,	// (0x0004efa7) popup_slider_window_g2_ParamLimits

0xd171,	// (0x0004efc3) popup_slider_window_g3_ParamLimits

0xfcef,	// (0x00051b41) popup_slider_window_g_ParamLimits

0xd1cd,	// (0x0004f01f) popup_slider_window_t1_ParamLimits

0xd241,	// (0x0004f093) small_volume_slider_vertical_pane_ParamLimits

0xdc62,	// (0x0004fab4) cell_graphic2_pane_ParamLimits

0xdcb4,	// (0x0004fb06) bg_button_pane_cp10_ParamLimits

0xdcb4,	// (0x0004fb06) bg_button_pane_cp10

0xdcc9,	// (0x0004fb1b) bg_button_pane_cp11_ParamLimits

0xdcc9,	// (0x0004fb1b) bg_button_pane_cp11

0xdcde,	// (0x0004fb30) graphic2_pages_pane_g1_ParamLimits

0xdcde,	// (0x0004fb30) graphic2_pages_pane_g1

0xdcf9,	// (0x0004fb4b) graphic2_pages_pane_g2_ParamLimits

0xdcf9,	// (0x0004fb4b) graphic2_pages_pane_g2

0x0001,

0xfdb3,	// (0x00051c05) graphic2_pages_pane_g_ParamLimits

0xfdb3,	// (0x00051c05) graphic2_pages_pane_g

0xdd11,	// (0x0004fb63) graphic2_pages_pane_t1_ParamLimits

0xdd11,	// (0x0004fb63) graphic2_pages_pane_t1

0xdd27,	// (0x0004fb79) cell_graphic2_control_pane_ParamLimits

0xdd27,	// (0x0004fb79) cell_graphic2_control_pane

0xdd4a,	// (0x0004fb9c) cell_graphic2_pane_g1_ParamLimits

0xdd4a,	// (0x0004fb9c) cell_graphic2_pane_g1

0xdd57,	// (0x0004fba9) cell_graphic2_pane_g2_ParamLimits

0xdd57,	// (0x0004fba9) cell_graphic2_pane_g2

0xdd64,	// (0x0004fbb6) cell_graphic2_pane_g3_ParamLimits

0xdd64,	// (0x0004fbb6) cell_graphic2_pane_g3

0xdd71,	// (0x0004fbc3) cell_graphic2_pane_g4_ParamLimits

0xdd71,	// (0x0004fbc3) cell_graphic2_pane_g4

0xdd7e,	// (0x0004fbd0) cell_graphic2_pane_g5_ParamLimits

0xdd7e,	// (0x0004fbd0) cell_graphic2_pane_g5

0x0004,

0xfdb8,	// (0x00051c0a) cell_graphic2_pane_g_ParamLimits

0xfdb8,	// (0x00051c0a) cell_graphic2_pane_g

0xdd99,	// (0x0004fbeb) cell_graphic2_pane_t1_ParamLimits

0xdd99,	// (0x0004fbeb) cell_graphic2_pane_t1

0x9516,	// (0x0004b368) grid_highlight_pane_cp11_ParamLimits

0x9516,	// (0x0004b368) grid_highlight_pane_cp11

0x069a,	// (0x000424ec) bg_button_pane_cp05

0xddc2,	// (0x0004fc14) cell_graphic2_control_pane_g1

0xbb0a,	// (0x0004d95c) bg_touch_area_indi_pane_g1

0xddea,	// (0x0004fc3c) aid_cmod_rocker_key_size

0xddf4,	// (0x0004fc46) aid_cmode_itu_key_size

0xddfe,	// (0x0004fc50) main_cmode_video_pane

0xde08,	// (0x0004fc5a) main_comp_mode_itu_pane

0xde14,	// (0x0004fc66) main_comp_mode_rocker_pane

0xde20,	// (0x0004fc72) cell_cmode_rocker_pane_ParamLimits

0xde20,	// (0x0004fc72) cell_cmode_rocker_pane

0xde34,	// (0x0004fc86) cell_cmode_itu_pane_ParamLimits

0xde34,	// (0x0004fc86) cell_cmode_itu_pane

0x0b7c,	// (0x000429ce) bg_button_pane_cp06_ParamLimits

0x0b7c,	// (0x000429ce) bg_button_pane_cp06

0xbd85,	// (0x0004dbd7) cell_cmode_rocker_pane_g1_ParamLimits

0xbd85,	// (0x0004dbd7) cell_cmode_rocker_pane_g1

0xd2e8,	// (0x0004f13a) cell_cmode_rocker_pane_g2_ParamLimits

0xd2e8,	// (0x0004f13a) cell_cmode_rocker_pane_g2

0x0001,

0xfdc8,	// (0x00051c1a) cell_cmode_rocker_pane_g_ParamLimits

0xfdc8,	// (0x00051c1a) cell_cmode_rocker_pane_g

0xd6ca,	// (0x0004f51c) bg_button_pane_cp07

0xde4b,	// (0x0004fc9d) cell_cmode_itu_pane_g1

0xde54,	// (0x0004fca6) cell_cmode_itu_pane_t1

0xde62,	// (0x0004fcb4) cell_cmode_itu_pane_t2

0x0001,

0xfdcd,	// (0x00051c1f) cell_cmode_itu_pane_t

0xd516,	// (0x0004f368) aid_touch_ctrl_left

0xd51e,	// (0x0004f370) aid_touch_ctrl_right

0xd6ca,	// (0x0004f51c) compa_mode_pane

0xde70,	// (0x0004fcc2) aid_cmod_rocker_key_size_cp

0xde7a,	// (0x0004fccc) aid_cmode_itu_key_size_cp

0xde84,	// (0x0004fcd6) compa_mode_pane_g1

0xde8c,	// (0x0004fcde) compa_mode_pane_g2

0xde94,	// (0x0004fce6) compa_mode_pane_g3

0x0002,

0xfdd2,	// (0x00051c24) compa_mode_pane_g

0xde9c,	// (0x0004fcee) main_comp_mode_itu_pane_cp

0xdea4,	// (0x0004fcf6) main_comp_mode_rocker_pane_cp

0xdeac,	// (0x0004fcfe) cell_cmode_itu_pane_cp_ParamLimits

0xdeac,	// (0x0004fcfe) cell_cmode_itu_pane_cp

0xdec1,	// (0x0004fd13) cell_cmode_rocker_pane_cp_ParamLimits

0xdec1,	// (0x0004fd13) cell_cmode_rocker_pane_cp

0x0b7c,	// (0x000429ce) bg_button_pane_cp06_cp_ParamLimits

0x0b7c,	// (0x000429ce) bg_button_pane_cp06_cp

0xbd85,	// (0x0004dbd7) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbd85,	// (0x0004dbd7) cell_cmode_rocker_pane_g1_cp

0xbb0a,	// (0x0004d95c) cell_cmode_rocker_pane_g2_cp

0xd6ca,	// (0x0004f51c) bg_button_pane_cp07_cp

0xded3,	// (0x0004fd25) cell_cmode_itu_pane_g1_cp

0xdedc,	// (0x0004fd2e) cell_cmode_itu_pane_t1_cp

0xdedc,	// (0x0004fd2e) cell_cmode_itu_pane_t2_cp

0xa9f3,	// (0x0004c845) settings_code_pane_cp2

0x0567,	// (0x000423b9) bg_popup_window_pane_cp3_ParamLimits

0x0888,	// (0x000426da) heading_pane_cp3_ParamLimits

0x0894,	// (0x000426e6) listscroll_popup_graphic_pane_ParamLimits

0x7978,	// (0x000497ca) fep_hwr_aid_pane_ParamLimits

0x7e46,	// (0x00049c98) aid_touch_sctrl_top_ParamLimits

0x7e53,	// (0x00049ca5) sctrl_sk_top_pane_g1_ParamLimits

0xbd85,	// (0x0004dbd7) sctrl_sk_top_pane_g2_ParamLimits

0xfd08,	// (0x00051b5a) sctrl_sk_top_pane_g_ParamLimits

0x7e60,	// (0x00049cb2) sctrl_sk_top_pane_t1_ParamLimits

0x7e46,	// (0x00049c98) aid_touch_sctrl_bottom_ParamLimits

0x7e60,	// (0x00049cb2) sctrl_sk_bottom_pane_t1_ParamLimits

0xd45c,	// (0x0004f2ae) aid_area_touch_clock

0x8049,	// (0x00049e9b) aid_vkb2_area_top_pane_cell_ParamLimits

0x8049,	// (0x00049e9b) aid_vkb2_area_top_pane_cell

0x8194,	// (0x00049fe6) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8194,	// (0x00049fe6) aid_vkb2_area_bottom_pane_cell

0xda5b,	// (0x0004f8ad) popup_char_count_window

0xdeea,	// (0x0004fd3c) popup_char_count_window_g1

0xdef3,	// (0x0004fd45) popup_char_count_window_g2

0xdefc,	// (0x0004fd4e) popup_char_count_window_g3

0x0002,

0xfdd9,	// (0x00051c2b) popup_char_count_window_g

0xdf05,	// (0x0004fd57) popup_char_count_window_t1

0x7f03,	// (0x00049d55) popup_fep_char_preview_window_ParamLimits

0x7f03,	// (0x00049d55) popup_fep_char_preview_window

0x8067,	// (0x00049eb9) vkb2_top_candi_pane_ParamLimits

0x8067,	// (0x00049eb9) vkb2_top_candi_pane

0xdf13,	// (0x0004fd65) cell_vkb2_top_candi_pane_ParamLimits

0xdf13,	// (0x0004fd65) cell_vkb2_top_candi_pane

0x9af2,	// (0x0004b944) bg_popup_fep_char_preview_window_ParamLimits

0x9af2,	// (0x0004b944) bg_popup_fep_char_preview_window

0x847f,	// (0x0004a2d1) popup_fep_char_preview_window_t1_ParamLimits

0x847f,	// (0x0004a2d1) popup_fep_char_preview_window_t1

0xdf64,	// (0x0004fdb6) bg_popup_fep_char_preview_window_g1

0xdf6c,	// (0x0004fdbe) bg_popup_fep_char_preview_window_g2

0xdf74,	// (0x0004fdc6) bg_popup_fep_char_preview_window_g3

0xdf7c,	// (0x0004fdce) bg_popup_fep_char_preview_window_g4

0xdf84,	// (0x0004fdd6) bg_popup_fep_char_preview_window_g5

0x84b9,	// (0x0004a30b) bg_popup_fep_char_preview_window_g6

0xdf8c,	// (0x0004fdde) bg_popup_fep_char_preview_window_g7

0xdf94,	// (0x0004fde6) bg_popup_fep_char_preview_window_g8

0xdf9c,	// (0x0004fdee) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde0,	// (0x00051c32) bg_popup_fep_char_preview_window_g

0xbd85,	// (0x0004dbd7) cell_vkb2_top_candi_pane_g1_ParamLimits

0xbd85,	// (0x0004dbd7) cell_vkb2_top_candi_pane_g1

0xc0c6,	// (0x0004df18) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc0c6,	// (0x0004df18) cell_vkb2_top_candi_pane_g2

0xc0e7,	// (0x0004df39) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc0e7,	// (0x0004df39) cell_vkb2_top_candi_pane_g3

0x84c1,	// (0x0004a313) cell_vkb2_top_candi_pane_g4_ParamLimits

0x84c1,	// (0x0004a313) cell_vkb2_top_candi_pane_g4

0xdfa4,	// (0x0004fdf6) cell_vkb2_top_candi_pane_g5_ParamLimits

0xdfa4,	// (0x0004fdf6) cell_vkb2_top_candi_pane_g5

0xd2e8,	// (0x0004f13a) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd2e8,	// (0x0004f13a) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf3,	// (0x00051c45) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf3,	// (0x00051c45) cell_vkb2_top_candi_pane_g

0x84e2,	// (0x0004a334) cell_vkb2_top_candi_pane_t1

0x7771,	// (0x000495c3) aid_size_touch_slider_mark_ParamLimits

0x7771,	// (0x000495c3) aid_size_touch_slider_mark

0xdb9e,	// (0x0004f9f0) grid_graphic2_catg_pane_ParamLimits

0xdb9e,	// (0x0004f9f0) grid_graphic2_catg_pane

0xdc3c,	// (0x0004fa8e) popup_grid_graphic2_window_t1_ParamLimits

0xdc3c,	// (0x0004fa8e) popup_grid_graphic2_window_t1

0xdc4e,	// (0x0004faa0) popup_grid_graphic2_window_t2_ParamLimits

0xdc4e,	// (0x0004faa0) popup_grid_graphic2_window_t2

0x0001,

0xfdae,	// (0x00051c00) popup_grid_graphic2_window_t_ParamLimits

0xfdae,	// (0x00051c00) popup_grid_graphic2_window_t

0x069a,	// (0x000424ec) bg_button_pane_cp05_ParamLimits

0xddc2,	// (0x0004fc14) cell_graphic2_control_pane_g1_ParamLimits

0xdfc5,	// (0x0004fe17) cell_graphic2_catg_pane_ParamLimits

0xdfc5,	// (0x0004fe17) cell_graphic2_catg_pane

0xd6ca,	// (0x0004f51c) bg_button_pane_cp12

0xdfd7,	// (0x0004fe29) cell_graphic2_catg_pane_g1

0xd428,	// (0x0004f27a) cell_tb_ext_pane_t1_ParamLimits

0x82b1,	// (0x0004a103) vkb2_top_cell_right_narrow_pane_ParamLimits

0x82b1,	// (0x0004a103) vkb2_top_cell_right_narrow_pane

0x82c9,	// (0x0004a11b) vkb2_top_cell_right_wide_pane_ParamLimits

0x82c9,	// (0x0004a11b) vkb2_top_cell_right_wide_pane

0xf546,	// (0x00051398) bg_vkb2_func_pane_ParamLimits

0xf546,	// (0x00051398) bg_vkb2_func_pane

0x833a,	// (0x0004a18c) vkb2_top_cell_left_pane_g1_ParamLimits

0xf546,	// (0x00051398) bg_vkb2_fuc_pane_cp03_ParamLimits

0xf546,	// (0x00051398) bg_vkb2_fuc_pane_cp03

0x8398,	// (0x0004a1ea) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x94aa,	// (0x0004b2fc) bg_vkb2_func_pane_g1

0x94b2,	// (0x0004b304) bg_vkb2_func_pane_g2

0x94c2,	// (0x0004b314) bg_vkb2_func_pane_g3

0x94ba,	// (0x0004b30c) bg_vkb2_func_pane_g4

0x94ca,	// (0x0004b31c) bg_vkb2_func_pane_g5

0x94d2,	// (0x0004b324) bg_vkb2_func_pane_g6

0x94da,	// (0x0004b32c) bg_vkb2_func_pane_g7

0x94e2,	// (0x0004b334) bg_vkb2_func_pane_g8

0x94a2,	// (0x0004b2f4) bg_vkb2_func_pane_g9

0x0008,

0xfe00,	// (0x00051c52) bg_vkb2_func_pane_g

0xf546,	// (0x00051398) bg_vkb2_fuc_pane_cp01_ParamLimits

0xf546,	// (0x00051398) bg_vkb2_fuc_pane_cp01

0x833a,	// (0x0004a18c) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x833a,	// (0x0004a18c) vkb2_top_cell_right_wide_pane_g1

0xf546,	// (0x00051398) bg_vkb2_fuc_pane_cp02_ParamLimits

0xf546,	// (0x00051398) bg_vkb2_fuc_pane_cp02

0x8398,	// (0x0004a1ea) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8398,	// (0x0004a1ea) vkb2_top_cell_right_narrow_pane_g1

0xd049,	// (0x0004ee9b) aid_touch_area_decrease_ParamLimits

0xd049,	// (0x0004ee9b) aid_touch_area_decrease

0xd06d,	// (0x0004eebf) aid_touch_area_increase_ParamLimits

0xd06d,	// (0x0004eebf) aid_touch_area_increase

0xd079,	// (0x0004eecb) aid_touch_area_mute_ParamLimits

0xd079,	// (0x0004eecb) aid_touch_area_mute

0xd09d,	// (0x0004eeef) aid_touch_area_slider_ParamLimits

0xd09d,	// (0x0004eeef) aid_touch_area_slider

0xd18d,	// (0x0004efdf) popup_slider_window_g4_ParamLimits

0xd18d,	// (0x0004efdf) popup_slider_window_g4

0xd199,	// (0x0004efeb) popup_slider_window_g5_ParamLimits

0xd199,	// (0x0004efeb) popup_slider_window_g5

0xd1bb,	// (0x0004f00d) popup_slider_window_g6_ParamLimits

0xd1bb,	// (0x0004f00d) popup_slider_window_g6

0xd1fb,	// (0x0004f04d) popup_slider_window_t2_ParamLimits

0xd1fb,	// (0x0004f04d) popup_slider_window_t2

0x0001,

0xfcfc,	// (0x00051b4e) popup_slider_window_t_ParamLimits

0xfcfc,	// (0x00051b4e) popup_slider_window_t

0xd213,	// (0x0004f065) slider_pane_ParamLimits

0xd213,	// (0x0004f065) slider_pane

0xdfe0,	// (0x0004fe32) slider_pane_g1_ParamLimits

0xdfe0,	// (0x0004fe32) slider_pane_g1

0xdff4,	// (0x0004fe46) slider_pane_g2_ParamLimits

0xdff4,	// (0x0004fe46) slider_pane_g2

0xe00a,	// (0x0004fe5c) slider_pane_g3_ParamLimits

0xe00a,	// (0x0004fe5c) slider_pane_g3

0x0003,

0xfe13,	// (0x00051c65) slider_pane_g_ParamLimits

0xfe13,	// (0x00051c65) slider_pane_g

0x8e9b,	// (0x0004aced) popup_tb_float_extension_window_ParamLimits

0x8e9b,	// (0x0004aced) popup_tb_float_extension_window

0xe036,	// (0x0004fe88) aid_size_cell_tb_float_ext

0xd6ca,	// (0x0004f51c) bg_popup_sub_window_cp28

0xe042,	// (0x0004fe94) grid_tb_float_ext_pane

0xe04e,	// (0x0004fea0) cell_tb_float_ext_pane_ParamLimits

0xe04e,	// (0x0004fea0) cell_tb_float_ext_pane

0xe06a,	// (0x0004febc) cell_tb_float_ext_pane_g1

0xe073,	// (0x0004fec5) grid_highlight_pane_cp12

0x7ab1,	// (0x00049903) cell_last_hwr_side_pane_ParamLimits

0x7ab1,	// (0x00049903) cell_last_hwr_side_pane

0xbb0a,	// (0x0004d95c) cell_last_hwr_side_pane_g1

0xe07c,	// (0x0004fece) cell_last_hwr_side_pane_g2

0x0001,

0xfe1c,	// (0x00051c6e) cell_last_hwr_side_pane_g

0x8260,	// (0x0004a0b2) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8260,	// (0x0004a0b2) vkb2_area_bottom_space_btn_pane

0xbd85,	// (0x0004dbd7) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdb10,	// (0x0004f962) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x84e2,	// (0x0004a334) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8500,	// (0x0004a352) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8500,	// (0x0004a352) vkb2_area_bottom_space_btn_pane_g1

0x853a,	// (0x0004a38c) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x853a,	// (0x0004a38c) vkb2_area_bottom_space_btn_pane_g2

0x8570,	// (0x0004a3c2) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x8570,	// (0x0004a3c2) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe21,	// (0x00051c73) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe21,	// (0x00051c73) vkb2_area_bottom_space_btn_pane_g

0x7a21,	// (0x00049873) cel_fep_hwr_func_pane_ParamLimits

0x7a21,	// (0x00049873) cel_fep_hwr_func_pane

0x7a5d,	// (0x000498af) cell_hwr_side_button_pane_ParamLimits

0x7a5d,	// (0x000498af) cell_hwr_side_button_pane

0xd45c,	// (0x0004f2ae) aid_area_touch_clock_ParamLimits

0x069a,	// (0x000424ec) bg_uniindi_top_pane_ParamLimits

0xd470,	// (0x0004f2c2) uniindi_top_pane_g1_ParamLimits

0xd486,	// (0x0004f2d8) uniindi_top_pane_g2_ParamLimits

0xd492,	// (0x0004f2e4) uniindi_top_pane_g3_ParamLimits

0xd4a3,	// (0x0004f2f5) uniindi_top_pane_g4_ParamLimits

0xfd34,	// (0x00051b86) uniindi_top_pane_g_ParamLimits

0xd4b0,	// (0x0004f302) uniindi_top_pane_t1_ParamLimits

0x069a,	// (0x000424ec) bg_vkb2_func_pane_cp01_ParamLimits

0x069a,	// (0x000424ec) bg_vkb2_func_pane_cp01

0xe085,	// (0x0004fed7) cel_fep_hwr_func_pane_g1_ParamLimits

0xe085,	// (0x0004fed7) cel_fep_hwr_func_pane_g1

0x069a,	// (0x000424ec) bg_vkb2_func_pane_cp02_ParamLimits

0x069a,	// (0x000424ec) bg_vkb2_func_pane_cp02

0xe085,	// (0x0004fed7) cell_hwr_side_button_pane_g1_ParamLimits

0xe085,	// (0x0004fed7) cell_hwr_side_button_pane_g1

0x9323,	// (0x0004b175) status_pane_g4_ParamLimits

0x9323,	// (0x0004b175) status_pane_g4

0x933d,	// (0x0004b18f) status_pane_t1

0xb8a9,	// (0x0004d6fb) form2_midp_gauge_slider_cont_pane

0xb8b1,	// (0x0004d703) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb8c3,	// (0x0004d715) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb8d5,	// (0x0004d727) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb00,	// (0x00051952) form2_midp_gauge_slider_pane_t_ParamLimits

0xb8e7,	// (0x0004d739) form2_midp_slider_pane_ParamLimits

0x7ec3,	// (0x00049d15) aid_size_cell_func_vkb2_ParamLimits

0x7ec3,	// (0x00049d15) aid_size_cell_func_vkb2

0xe022,	// (0x0004fe74) slider_pane_g4_ParamLimits

0xe022,	// (0x0004fe74) slider_pane_g4

0x85ba,	// (0x0004a40c) form2_midp_gauge_slider_pane_t2_cp01

0x85c8,	// (0x0004a41a) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x85c8,	// (0x0004a41a) form2_midp_gauge_slider_pane_t3_cp01

0x85e5,	// (0x0004a437) form2_midp_slider_pane_cp01

0xd6ca,	// (0x0004f51c) navi_smil_pane

0xe0be,	// (0x0004ff10) navi_smil_pane_g1

0xe0c6,	// (0x0004ff18) navi_smil_pane_t1

0xe093,	// (0x0004fee5) form2_midp_slider_pane_g1

0xe09c,	// (0x0004feee) form2_midp_slider_pane_g2

0xe0a4,	// (0x0004fef6) form2_midp_slider_pane_g3

0xe093,	// (0x0004fee5) form2_midp_slider_pane_g4

0xe0ac,	// (0x0004fefe) form2_midp_slider_pane_g5

0x0004,

0xfe2a,	// (0x00051c7c) form2_midp_slider_pane_g

0x85aa,	// (0x0004a3fc) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x85aa,	// (0x0004a3fc) vkb2_area_bottom_space_btn_pane_g4

0x913a,	// (0x0004af8c) lc0_navi_pane_ParamLimits

0x913a,	// (0x0004af8c) lc0_navi_pane

0x91b6,	// (0x0004b008) lc0_stat_indi_pane_ParamLimits

0x91b6,	// (0x0004b008) lc0_stat_indi_pane

0x91cd,	// (0x0004b01f) ls0_title_pane_ParamLimits

0x91cd,	// (0x0004b01f) ls0_title_pane

0x0b7c,	// (0x000429ce) bg_popup_sub_pane_cp14_ParamLimits

0xd443,	// (0x0004f295) list_uniindi_pane_ParamLimits

0xd44f,	// (0x0004f2a1) uniindi_top_pane_ParamLimits

0xd4ee,	// (0x0004f340) list_single_uniindi_pane_g1_ParamLimits

0xd501,	// (0x0004f353) list_single_uniindi_pane_t1_ParamLimits

0x85ee,	// (0x0004a440) lc0_stat_clock_pane_ParamLimits

0x85ee,	// (0x0004a440) lc0_stat_clock_pane

0xe0d4,	// (0x0004ff26) lc0_stat_indi_pane_g1_ParamLimits

0xe0d4,	// (0x0004ff26) lc0_stat_indi_pane_g1

0xe0e1,	// (0x0004ff33) lc0_stat_indi_pane_g2_ParamLimits

0xe0e1,	// (0x0004ff33) lc0_stat_indi_pane_g2

0x0001,

0xfe35,	// (0x00051c87) lc0_stat_indi_pane_g_ParamLimits

0xfe35,	// (0x00051c87) lc0_stat_indi_pane_g

0x85fb,	// (0x0004a44d) lc0_uni_indicator_pane_ParamLimits

0x85fb,	// (0x0004a44d) lc0_uni_indicator_pane

0xe0ee,	// (0x0004ff40) ls0_title_pane_g1_ParamLimits

0xe0ee,	// (0x0004ff40) ls0_title_pane_g1

0xe102,	// (0x0004ff54) ls0_title_pane_t1_ParamLimits

0xe102,	// (0x0004ff54) ls0_title_pane_t1

0x8608,	// (0x0004a45a) lc0_uni_indicator_pane_g1_ParamLimits

0x8608,	// (0x0004a45a) lc0_uni_indicator_pane_g1

0xe138,	// (0x0004ff8a) lc0_stat_clock_pane_t1

0xd6ca,	// (0x0004f51c) main_ai5_pane

0xe146,	// (0x0004ff98) ai5_sk_pane_ParamLimits

0xe146,	// (0x0004ff98) ai5_sk_pane

0xe153,	// (0x0004ffa5) cell_ai5_widget_pane_ParamLimits

0xe153,	// (0x0004ffa5) cell_ai5_widget_pane

0xe6ef,	// (0x00050541) aid_size_cell_widget_grid

0xe705,	// (0x00050557) bg_ai5_widget_pane_ParamLimits

0xe705,	// (0x00050557) bg_ai5_widget_pane

0xe76f,	// (0x000505c1) cell_ai5_widget_pane_g2

0xe77f,	// (0x000505d1) cell_ai5_widget_pane_g3

0xe79e,	// (0x000505f0) cell_ai5_widget_pane_g4

0xe7aa,	// (0x000505fc) cell_ai5_widget_pane_g5

0xe7b6,	// (0x00050608) cell_ai5_widget_pane_g6

0xe7c2,	// (0x00050614) cell_ai5_widget_pane_g7

0xe80a,	// (0x0005065c) cell_ai5_widget_pane_t1_ParamLimits

0xe80a,	// (0x0005065c) cell_ai5_widget_pane_t1

0xe827,	// (0x00050679) cell_ai5_widget_pane_t2_ParamLimits

0xe827,	// (0x00050679) cell_ai5_widget_pane_t2

0xe83f,	// (0x00050691) cell_ai5_widget_pane_t3_ParamLimits

0xe83f,	// (0x00050691) cell_ai5_widget_pane_t3

0xe857,	// (0x000506a9) cell_ai5_widget_pane_t4_ParamLimits

0xe857,	// (0x000506a9) cell_ai5_widget_pane_t4

0xe871,	// (0x000506c3) cell_ai5_widget_pane_t5_ParamLimits

0xe871,	// (0x000506c3) cell_ai5_widget_pane_t5

0xe890,	// (0x000506e2) cell_ai5_widget_pane_t6_ParamLimits

0xe890,	// (0x000506e2) cell_ai5_widget_pane_t6

0xe8a2,	// (0x000506f4) cell_ai5_widget_pane_t7_ParamLimits

0xe8a2,	// (0x000506f4) cell_ai5_widget_pane_t7

0xe8bb,	// (0x0005070d) cell_ai5_widget_pane_t8_ParamLimits

0xe8bb,	// (0x0005070d) cell_ai5_widget_pane_t8

0x0009,

0xfe4f,	// (0x00051ca1) cell_ai5_widget_pane_t_ParamLimits

0xfe4f,	// (0x00051ca1) cell_ai5_widget_pane_t

0xe907,	// (0x00050759) grid_ai5_widget_pane

0x0b7c,	// (0x000429ce) highlight_cell_ai5_widget_pane_ParamLimits

0x0b7c,	// (0x000429ce) highlight_cell_ai5_widget_pane

0xe91f,	// (0x00050771) ai5_sk_left_pane

0xe929,	// (0x0005077b) ai5_sk_middle_pane

0xe933,	// (0x00050785) ai5_sk_right_pane

0xe93d,	// (0x0005078f) bg_ai5_widget_pane_g1_ParamLimits

0xe93d,	// (0x0005078f) bg_ai5_widget_pane_g1

0xe949,	// (0x0005079b) bg_ai5_widget_pane_g2_ParamLimits

0xe949,	// (0x0005079b) bg_ai5_widget_pane_g2

0xe955,	// (0x000507a7) bg_ai5_widget_pane_g3_ParamLimits

0xe955,	// (0x000507a7) bg_ai5_widget_pane_g3

0xe961,	// (0x000507b3) bg_ai5_widget_pane_g4_ParamLimits

0xe961,	// (0x000507b3) bg_ai5_widget_pane_g4

0xe96d,	// (0x000507bf) bg_ai5_widget_pane_g5_ParamLimits

0xe96d,	// (0x000507bf) bg_ai5_widget_pane_g5

0xe979,	// (0x000507cb) bg_ai5_widget_pane_g6_ParamLimits

0xe979,	// (0x000507cb) bg_ai5_widget_pane_g6

0xe985,	// (0x000507d7) bg_ai5_widget_pane_g7_ParamLimits

0xe985,	// (0x000507d7) bg_ai5_widget_pane_g7

0xe991,	// (0x000507e3) bg_ai5_widget_pane_g8_ParamLimits

0xe991,	// (0x000507e3) bg_ai5_widget_pane_g8

0xe99d,	// (0x000507ef) bg_ai5_widget_pane_g9_ParamLimits

0xe99d,	// (0x000507ef) bg_ai5_widget_pane_g9

0x0008,

0xfe64,	// (0x00051cb6) bg_ai5_widget_pane_g_ParamLimits

0xfe64,	// (0x00051cb6) bg_ai5_widget_pane_g

0xe9d6,	// (0x00050828) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9d6,	// (0x00050828) cell_shortcut_ai5_widget_pane

0x7073,	// (0x00048ec5) bg_cell_shortcut_ai5_widget_pane

0xe9e9,	// (0x0005083b) cell_grid_ai5_widget_pane_g1

0xe9f2,	// (0x00050844) highlight_cell_shortcut_ai5_widget_pane

0x94b2,	// (0x0004b304) ai5_sk_left_pane_g1

0xe9fa,	// (0x0005084c) ai5_sk_left_pane_g2

0xea02,	// (0x00050854) ai5_sk_left_pane_g3

0xea0a,	// (0x0005085c) ai5_sk_left_pane_g4

0x0003,

0xfe77,	// (0x00051cc9) ai5_sk_left_pane_g

0xea12,	// (0x00050864) ai5_sk_left_pane_t1

0x94aa,	// (0x0004b2fc) ai5_sk_right_pane_g1

0xea20,	// (0x00050872) ai5_sk_right_pane_g2

0xea28,	// (0x0005087a) ai5_sk_right_pane_g3

0xea30,	// (0x00050882) ai5_sk_right_pane_g4

0x0003,

0xfe80,	// (0x00051cd2) ai5_sk_right_pane_g

0xea38,	// (0x0005088a) ai5_sk_right_pane_t1

0x94aa,	// (0x0004b2fc) ai5_sk_middle_pane_g1

0x94b2,	// (0x0004b304) ai5_sk_middle_pane_g2

0x94ca,	// (0x0004b31c) ai5_sk_middle_pane_g3

0xea28,	// (0x0005087a) ai5_sk_middle_pane_g4

0xea02,	// (0x00050854) ai5_sk_middle_pane_g5

0xea46,	// (0x00050898) ai5_sk_middle_pane_g6

0xea4e,	// (0x000508a0) ai5_sk_middle_pane_g7

0x0006,

0xfe89,	// (0x00051cdb) ai5_sk_middle_pane_g

0x8fbc,	// (0x0004ae0e) aid_touch_area_size_lc0_ParamLimits

0x8fbc,	// (0x0004ae0e) aid_touch_area_size_lc0

0x7bc0,	// (0x00049a12) cell_hwr_candidate_pane_t1_ParamLimits

0x8fda,	// (0x0004ae2c) aid_touch_navi_pane

0x92cd,	// (0x0004b11f) status_dt_navi_pane_ParamLimits

0x92cd,	// (0x0004b11f) status_dt_navi_pane

0x92da,	// (0x0004b12c) status_dt_sta_pane_ParamLimits

0x92da,	// (0x0004b12c) status_dt_sta_pane

0xea56,	// (0x000508a8) dt_sta_controll_pane

0xea63,	// (0x000508b5) dt_sta_indi_pane

0xea74,	// (0x000508c6) dt_sta_title_pane

0x069a,	// (0x000424ec) bg_dt_sta_indi_pane_ParamLimits

0x069a,	// (0x000424ec) bg_dt_sta_indi_pane

0xea87,	// (0x000508d9) dt_sta_battery_pane

0xea8f,	// (0x000508e1) dt_sta_indi_pane_g1

0xea98,	// (0x000508ea) dt_sta_indi_pane_g2

0xeaa1,	// (0x000508f3) dt_sta_indi_pane_g3

0x0002,

0xfe98,	// (0x00051cea) dt_sta_indi_pane_g

0xeaaa,	// (0x000508fc) dt_sta_signal_pane

0x0b7c,	// (0x000429ce) bg_dt_sta_title_pane_ParamLimits

0x0b7c,	// (0x000429ce) bg_dt_sta_title_pane

0xeab3,	// (0x00050905) dt_sta_title_pane_g1

0xeabb,	// (0x0005090d) dt_sta_title_pane_t1_ParamLimits

0xeabb,	// (0x0005090d) dt_sta_title_pane_t1

0xd6ca,	// (0x0004f51c) bg_dt_sta_control_pane

0xead0,	// (0x00050922) dt_sta_controll_pane_g1

0xead9,	// (0x0005092b) bg_dt_sta_title_pane_g1

0xeae2,	// (0x00050934) bg_dt_sta_title_pane_g2

0xeaeb,	// (0x0005093d) bg_dt_sta_title_pane_g3

0x0002,

0xfe9f,	// (0x00051cf1) bg_dt_sta_title_pane_g

0xbb0a,	// (0x0004d95c) bg_dt_sta_indi_pane_g1

0xeaf4,	// (0x00050946) dt_sta_signal_pane_g1

0xeafc,	// (0x0005094e) dt_sta_signal_pane_g2

0x0001,

0xfea6,	// (0x00051cf8) dt_sta_signal_pane_g

0xeb04,	// (0x00050956) dt_sta_battery_pane_g1

0xeb0d,	// (0x0005095f) dt_sta_battery_pane_t1

0xbb0a,	// (0x0004d95c) bg_dt_sta_control_pane_g1

0x42c9,	// (0x0004611b) fep_china_uni_eep_pane

0x42d1,	// (0x00046123) fep_china_uni_entry_pane_ParamLimits

0x42e1,	// (0x00046133) popup_fep_china_uni_window_g1_ParamLimits

0x42f1,	// (0x00046143) popup_fep_china_uni_window_g2_ParamLimits

0x42f1,	// (0x00046143) popup_fep_china_uni_window_g2

0x0001,

0xf728,	// (0x0005157a) popup_fep_china_uni_window_g_ParamLimits

0xf728,	// (0x0005157a) popup_fep_china_uni_window_g

0xeb1c,	// (0x0005096e) fep_china_uni_eep_pane_g1

0xeb24,	// (0x00050976) fep_china_uni_eep_pane_t1

0xe0b5,	// (0x0004ff07) aid_touch_area_size_smil_player

0x9132,	// (0x0004af84) lc0_clock_pane

0x9331,	// (0x0004b183) status_pane_g5_ParamLimits

0x9331,	// (0x0004b183) status_pane_g5

0x8b20,	// (0x0004a972) popup_keymap_window

0x92ef,	// (0x0004b141) status_icon_pane

0xe77f,	// (0x000505d1) cell_ai5_widget_pane_g3_ParamLimits

0xe79e,	// (0x000505f0) cell_ai5_widget_pane_g4_ParamLimits

0xe7aa,	// (0x000505fc) cell_ai5_widget_pane_g5_ParamLimits

0xe7ce,	// (0x00050620) cell_ai5_widget_pane_g8_ParamLimits

0xe7ce,	// (0x00050620) cell_ai5_widget_pane_g8

0xe7e2,	// (0x00050634) cell_ai5_widget_pane_g9_ParamLimits

0xe7e2,	// (0x00050634) cell_ai5_widget_pane_g9

0xe7f6,	// (0x00050648) cell_ai5_widget_pane_g10_ParamLimits

0xe7f6,	// (0x00050648) cell_ai5_widget_pane_g10

0xeb33,	// (0x00050985) status_icon_pane_g1

0xd6ca,	// (0x0004f51c) bg_popup_sub_pane_cp13

0xeb3b,	// (0x0005098d) popup_keymap_window_t1

0x88be,	// (0x0004a710) control_pane_g6_ParamLimits

0x88be,	// (0x0004a710) control_pane_g6

0x88cb,	// (0x0004a71d) control_pane_g7_ParamLimits

0x88cb,	// (0x0004a71d) control_pane_g7

0x88d8,	// (0x0004a72a) control_pane_g8_ParamLimits

0x88d8,	// (0x0004a72a) control_pane_g8

0xea56,	// (0x000508a8) dt_sta_controll_pane_ParamLimits

0xea63,	// (0x000508b5) dt_sta_indi_pane_ParamLimits

0xea74,	// (0x000508c6) dt_sta_title_pane_ParamLimits

0x0abe,	// (0x00042910) aid_size_touch_scroll_bar_cale

0x62de,	// (0x00048130) popup_discreet_window_ParamLimits

0x62de,	// (0x00048130) popup_discreet_window

0x636c,	// (0x000481be) popup_sk_window

0x9af2,	// (0x0004b944) bg_popup_sub_pane_cp28_ParamLimits

0x9af2,	// (0x0004b944) bg_popup_sub_pane_cp28

0xeb49,	// (0x0005099b) popup_discreet_window_g1_ParamLimits

0xeb49,	// (0x0005099b) popup_discreet_window_g1

0xeb69,	// (0x000509bb) popup_discreet_window_t1_ParamLimits

0xeb69,	// (0x000509bb) popup_discreet_window_t1

0xeb87,	// (0x000509d9) popup_discreet_window_t2_ParamLimits

0xeb87,	// (0x000509d9) popup_discreet_window_t2

0x0002,

0xfeab,	// (0x00051cfd) popup_discreet_window_t_ParamLimits

0xfeab,	// (0x00051cfd) popup_discreet_window_t

0x861b,	// (0x0004a46d) popup_sk_window_g1

0x8625,	// (0x0004a477) popup_sk_window_g2

0x0001,

0xfeb2,	// (0x00051d04) popup_sk_window_g

0x862f,	// (0x0004a481) popup_sk_window_t1

0x863f,	// (0x0004a491) popup_sk_window_t1_copy1

0xe76f,	// (0x000505c1) cell_ai5_widget_pane_g2_ParamLimits

0xe8cd,	// (0x0005071f) cell_ai5_widget_pane_t9_ParamLimits

0xe8cd,	// (0x0005071f) cell_ai5_widget_pane_t9

0xd6ca,	// (0x0004f51c) main_fep_fshwr2_pane

0x864d,	// (0x0004a49f) aid_fshwr2_btn_pane

0x8659,	// (0x0004a4ab) aid_fshwr2_syb_pane

0x866a,	// (0x0004a4bc) aid_fshwr2_txt_pane

0x8676,	// (0x0004a4c8) fshwr2_func_candi_pane

0x8687,	// (0x0004a4d9) fshwr2_hwr_syb_pane

0x869a,	// (0x0004a4ec) fshwr2_icf_pane

0xd6ca,	// (0x0004f51c) fshwr2_icf_bg_pane

0xebd9,	// (0x00050a2b) fshwr2_icf_pane_t1_ParamLimits

0xebd9,	// (0x00050a2b) fshwr2_icf_pane_t1

0xbb0a,	// (0x0004d95c) fshwr2_func_candi_pane_g1

0xebf0,	// (0x00050a42) fshwr2_func_candi_row_pane_ParamLimits

0xebf0,	// (0x00050a42) fshwr2_func_candi_row_pane

0xec01,	// (0x00050a53) cell_fshwr2_syb_pane_ParamLimits

0xec01,	// (0x00050a53) cell_fshwr2_syb_pane

0xbd85,	// (0x0004dbd7) fshwr2_hwr_syb_pane_g1_ParamLimits

0xbd85,	// (0x0004dbd7) fshwr2_hwr_syb_pane_g1

0xd6ca,	// (0x0004f51c) bg_popup_call_pane_cp01

0xec1b,	// (0x00050a6d) fshwr2_func_candi_cell_pane_ParamLimits

0xec1b,	// (0x00050a6d) fshwr2_func_candi_cell_pane

0xec4d,	// (0x00050a9f) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xec4d,	// (0x00050a9f) fshwr2_func_candi_cell_bg_pane

0xec67,	// (0x00050ab9) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xec67,	// (0x00050ab9) fshwr2_func_candi_cell_pane_g1

0xec87,	// (0x00050ad9) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xec87,	// (0x00050ad9) fshwr2_func_candi_cell_pane_t1

0xd6ca,	// (0x0004f51c) bg_button_pane_cp08

0x7073,	// (0x00048ec5) cell_fshwr2_syb_bg_pane

0xec9a,	// (0x00050aec) cell_fshwr2_syb_bg_pane_g1

0xeca2,	// (0x00050af4) cell_fshwr2_syb_bg_pane_t1

0x0b7c,	// (0x000429ce) main_tmo_pane

0xa616,	// (0x0004c468) uni_indicator_pane_g1_ParamLimits

0xa62b,	// (0x0004c47d) uni_indicator_pane_g2_ParamLimits

0xa641,	// (0x0004c493) uni_indicator_pane_g3_ParamLimits

0xa657,	// (0x0004c4a9) uni_indicator_pane_g4_ParamLimits

0xa657,	// (0x0004c4a9) uni_indicator_pane_g4

0xa66b,	// (0x0004c4bd) uni_indicator_pane_g5_ParamLimits

0xa66b,	// (0x0004c4bd) uni_indicator_pane_g5

0xa67f,	// (0x0004c4d1) uni_indicator_pane_g6_ParamLimits

0xa67f,	// (0x0004c4d1) uni_indicator_pane_g6

0xf92c,	// (0x0005177e) uni_indicator_pane_g_ParamLimits

0xd019,	// (0x0004ee6b) popup_tmo_note_window_ParamLimits

0xd019,	// (0x0004ee6b) popup_tmo_note_window

0x0b7c,	// (0x000429ce) fshwr2_bg_pane

0xec78,	// (0x00050aca) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xec78,	// (0x00050aca) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb7,	// (0x00051d09) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb7,	// (0x00051d09) fshwr2_func_candi_cell_pane_g

0xbb0a,	// (0x0004d95c) bg_popup_window_pane_cp01

0xecb1,	// (0x00050b03) bg_popup_window_pane_g1_cp01

0xecba,	// (0x00050b0c) bg_popup_window_pane_cp22_ParamLimits

0xecba,	// (0x00050b0c) bg_popup_window_pane_cp22

0xecc8,	// (0x00050b1a) listscroll_tmo_link_pane_ParamLimits

0xecc8,	// (0x00050b1a) listscroll_tmo_link_pane

0xed08,	// (0x00050b5a) popup_tmo_note_window_g1_ParamLimits

0xed08,	// (0x00050b5a) popup_tmo_note_window_g1

0xed15,	// (0x00050b67) tmo_note_info_pane_ParamLimits

0xed15,	// (0x00050b67) tmo_note_info_pane

0xed2f,	// (0x00050b81) list_tmo_note_info_pane_g1_ParamLimits

0xed2f,	// (0x00050b81) list_tmo_note_info_pane_g1

0xed46,	// (0x00050b98) list_tmo_note_info_pane_g2_ParamLimits

0xed46,	// (0x00050b98) list_tmo_note_info_pane_g2

0x0001,

0xfebc,	// (0x00051d0e) list_tmo_note_info_pane_g_ParamLimits

0xfebc,	// (0x00051d0e) list_tmo_note_info_pane_g

0xed62,	// (0x00050bb4) list_tmo_note_info_text_pane_ParamLimits

0xed62,	// (0x00050bb4) list_tmo_note_info_text_pane

0xede7,	// (0x00050c39) list_tmo_link_pane

0xedf4,	// (0x00050c46) scroll_pane_cp20

0xee01,	// (0x00050c53) list_single_tmo_link_pane_ParamLimits

0xee01,	// (0x00050c53) list_single_tmo_link_pane

0xee11,	// (0x00050c63) list_single_tmo_link_pane_t1

0xee1f,	// (0x00050c71) list_tmo_note_info_text_pane_t1_ParamLimits

0xee1f,	// (0x00050c71) list_tmo_note_info_text_pane_t1

0x68a0,	// (0x000486f2) aid_size_touch_scroll_bar_cp01_ParamLimits

0x68a0,	// (0x000486f2) aid_size_touch_scroll_bar_cp01

0x57de,	// (0x00047630) aid_size_touch_slider_marker

0x6354,	// (0x000481a6) popup_settings_window_ParamLimits

0x6354,	// (0x000481a6) popup_settings_window

0x5957,	// (0x000477a9) popup_candi_list_indi_window

0x8fda,	// (0x0004ae2c) aid_touch_navi_pane_ParamLimits

0x7e1a,	// (0x00049c6c) rs_clock_indi_pane

0x7e23,	// (0x00049c75) sctrl_sk_bottom_pane_ParamLimits

0x7e34,	// (0x00049c86) sctrl_sk_top_pane_ParamLimits

0x7f1d,	// (0x00049d6f) popup_fep_tooltip_window

0xe6ef,	// (0x00050541) aid_size_cell_widget_grid_ParamLimits

0xe763,	// (0x000505b5) cell_ai5_widget_pane_g1_ParamLimits

0xe763,	// (0x000505b5) cell_ai5_widget_pane_g1

0xe7b6,	// (0x00050608) cell_ai5_widget_pane_g6_ParamLimits

0xe7c2,	// (0x00050614) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3a,	// (0x00051c8c) cell_ai5_widget_pane_g_ParamLimits

0xfe3a,	// (0x00051c8c) cell_ai5_widget_pane_g

0xe8f1,	// (0x00050743) cell_ai5_widget_pane_t10_ParamLimits

0xe8f1,	// (0x00050743) cell_ai5_widget_pane_t10

0xe907,	// (0x00050759) grid_ai5_widget_pane_ParamLimits

0xe9a9,	// (0x000507fb) cell_contacts_ai5_widget_pane_ParamLimits

0xe9a9,	// (0x000507fb) cell_contacts_ai5_widget_pane

0xeb9c,	// (0x000509ee) popup_discreet_window_t3_ParamLimits

0xeb9c,	// (0x000509ee) popup_discreet_window_t3

0x86af,	// (0x0004a501) popup_fshwr2_char_preview_window_ParamLimits

0x86af,	// (0x0004a501) popup_fshwr2_char_preview_window

0xed80,	// (0x00050bd2) tmo_note_info_pane_t1

0xed95,	// (0x00050be7) tmo_note_info_pane_t2

0xedae,	// (0x00050c00) tmo_note_info_pane_t3

0xedc3,	// (0x00050c15) tmo_note_info_pane_t4

0xedd5,	// (0x00050c27) tmo_note_info_pane_t5

0x0004,

0xfec1,	// (0x00051d13) tmo_note_info_pane_t

0xede7,	// (0x00050c39) list_tmo_link_pane_ParamLimits

0xedf4,	// (0x00050c46) scroll_pane_cp20_ParamLimits

0xd6ca,	// (0x0004f51c) bg_popup_fep_char_preview_window_cp01

0xee38,	// (0x00050c8a) popup_fshwr2_char_preview_window_t1

0xee46,	// (0x00050c98) popup_candi_list_indi_window_g1

0xee4f,	// (0x00050ca1) bg_cell_contacts_ai5_widget_pane

0xee5b,	// (0x00050cad) cell_contacts_ai5_widget_pane_g1

0xee6e,	// (0x00050cc0) cell_contacts_ai5_widget_pane_g2

0xee7a,	// (0x00050ccc) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfecc,	// (0x00051d1e) cell_contacts_ai5_widget_pane_g

0xee8c,	// (0x00050cde) cell_contacts_ai5_widget_pane_t1

0x0b7c,	// (0x000429ce) highlight_cell_shortcut_ai5_widget_pane_cp01

0xef06,	// (0x00050d58) settings_container_pane

0x7073,	// (0x00048ec5) listscroll_set_pane_copy1

0xb225,	// (0x0004d077) scroll_pane_cp121_copy1

0xef12,	// (0x00050d64) set_content_pane_copy1

0xef1a,	// (0x00050d6c) aid_height_set_list_copy1_ParamLimits

0xef1a,	// (0x00050d6c) aid_height_set_list_copy1

0xa87f,	// (0x0004c6d1) aid_size_parent_copy1_ParamLimits

0xa87f,	// (0x0004c6d1) aid_size_parent_copy1

0xef26,	// (0x00050d78) button_value_adjust_pane_cp6_copy1_ParamLimits

0xef26,	// (0x00050d78) button_value_adjust_pane_cp6_copy1

0x8961,	// (0x0004a7b3) list_highlight_pane_cp2_copy1_ParamLimits

0x8961,	// (0x0004a7b3) list_highlight_pane_cp2_copy1

0xef3a,	// (0x00050d8c) list_set_pane_copy1_ParamLimits

0xef3a,	// (0x00050d8c) list_set_pane_copy1

0xeea1,	// (0x00050cf3) main_pane_set_t1_copy1_ParamLimits

0xeea1,	// (0x00050cf3) main_pane_set_t1_copy1

0xeedb,	// (0x00050d2d) main_pane_set_t2_copy1_ParamLimits

0xeedb,	// (0x00050d2d) main_pane_set_t2_copy1

0xf001,	// (0x00050e53) main_pane_set_t3_copy1

0xf00f,	// (0x00050e61) main_pane_set_t4_copy1

0xeefa,	// (0x00050d4c) set_content_pane_g1_copy1_ParamLimits

0xeefa,	// (0x00050d4c) set_content_pane_g1_copy1

0xf01d,	// (0x00050e6f) setting_code_pane_copy1

0xf025,	// (0x00050e77) setting_slider_graphic_pane_copy1

0xf025,	// (0x00050e77) setting_slider_pane_copy1

0xf025,	// (0x00050e77) setting_text_pane_copy1

0xf025,	// (0x00050e77) setting_volume_pane_copy1

0xf01d,	// (0x00050e6f) settings_code_pane_cp2_copy1

0xf02d,	// (0x00050e7f) settings_code_pane_cp_copy1_ParamLimits

0xf02d,	// (0x00050e7f) settings_code_pane_cp_copy1

0x86c7,	// (0x0004a519) volume_set_pane_copy1

0xf041,	// (0x00050e93) volume_set_pane_g10_copy1

0xf04d,	// (0x00050e9f) volume_set_pane_g1_copy1

0xf057,	// (0x00050ea9) volume_set_pane_g2_copy1

0xf061,	// (0x00050eb3) volume_set_pane_g3_copy1

0xf06b,	// (0x00050ebd) volume_set_pane_g4_copy1

0xf075,	// (0x00050ec7) volume_set_pane_g5_copy1

0xf07f,	// (0x00050ed1) volume_set_pane_g6_copy1

0xf089,	// (0x00050edb) volume_set_pane_g7_copy1

0xf093,	// (0x00050ee5) volume_set_pane_g8_copy1

0xf09d,	// (0x00050eef) volume_set_pane_g9_copy1

0x0567,	// (0x000423b9) bg_set_opt_pane_cp_copy1_ParamLimits

0x0567,	// (0x000423b9) bg_set_opt_pane_cp_copy1

0x86d3,	// (0x0004a525) setting_slider_pane_t1_copy1_ParamLimits

0x86d3,	// (0x0004a525) setting_slider_pane_t1_copy1

0x86f1,	// (0x0004a543) setting_slider_pane_t2_copy1_ParamLimits

0x86f1,	// (0x0004a543) setting_slider_pane_t2_copy1

0x870b,	// (0x0004a55d) setting_slider_pane_t3_copy1_ParamLimits

0x870b,	// (0x0004a55d) setting_slider_pane_t3_copy1

0x8723,	// (0x0004a575) slider_set_pane_copy1_ParamLimits

0x8723,	// (0x0004a575) slider_set_pane_copy1

0x0bd7,	// (0x00042a29) set_opt_bg_pane_g1_copy2

0x0bdf,	// (0x00042a31) set_opt_bg_pane_g2_copy2

0xf0a7,	// (0x00050ef9) set_opt_bg_pane_g3_copy2

0x0bef,	// (0x00042a41) set_opt_bg_pane_g4_copy2

0x0bf7,	// (0x00042a49) set_opt_bg_pane_g5_copy2

0x0bff,	// (0x00042a51) set_opt_bg_pane_g6_copy2

0xf0b1,	// (0x00050f03) set_opt_bg_pane_g7_copy2

0xf0bb,	// (0x00050f0d) set_opt_bg_pane_g8_copy2

0xf0c5,	// (0x00050f17) set_opt_bg_pane_g9_copy2

0xf0cf,	// (0x00050f21) aid_size_touch_slider_mark_copy1_ParamLimits

0xf0cf,	// (0x00050f21) aid_size_touch_slider_mark_copy1

0xf0e3,	// (0x00050f35) slider_set_pane_g1_copy1

0xf0ec,	// (0x00050f3e) slider_set_pane_g2_copy1

0xaf45,	// (0x0004cd97) slider_set_pane_g3_copy1_ParamLimits

0xaf45,	// (0x0004cd97) slider_set_pane_g3_copy1

0xaf59,	// (0x0004cdab) slider_set_pane_g4_copy1_ParamLimits

0xaf59,	// (0x0004cdab) slider_set_pane_g4_copy1

0xd746,	// (0x0004f598) slider_set_pane_g5_copy1_ParamLimits

0xd746,	// (0x0004f598) slider_set_pane_g5_copy1

0xaf45,	// (0x0004cd97) slider_set_pane_g6_copy1_ParamLimits

0xaf45,	// (0x0004cd97) slider_set_pane_g6_copy1

0xf0f4,	// (0x00050f46) slider_set_pane_g7_copy1_ParamLimits

0xf0f4,	// (0x00050f46) slider_set_pane_g7_copy1

0xd6de,	// (0x0004f530) bg_set_opt_pane_cp2_copy1

0xf10a,	// (0x00050f5c) setting_slider_graphic_pane_g1_copy1

0xf113,	// (0x00050f65) setting_slider_graphic_pane_t1_copy1

0xf123,	// (0x00050f75) setting_slider_graphic_pane_t2_copy1

0xf133,	// (0x00050f85) slider_set_pane_cp_copy1

0xf143,	// (0x00050f95) input_focus_pane_cp1_copy1

0xf14c,	// (0x00050f9e) list_set_text_pane_copy1

0xf154,	// (0x00050fa6) setting_text_pane_g1_copy1

0x51cd,	// (0x0004701f) set_text_pane_t1_copy1

0xf143,	// (0x00050f95) input_focus_pane_cp2_copy1

0xf154,	// (0x00050fa6) setting_code_pane_g1_copy1

0xf15d,	// (0x00050faf) setting_code_pane_t1_copy1

0xf16b,	// (0x00050fbd) list_set_graphic_pane_copy1

0xd6de,	// (0x0004f530) bg_set_opt_pane_cp4_copy1

0x6f10,	// (0x00048d62) list_set_graphic_pane_g1_copy1_ParamLimits

0x6f10,	// (0x00048d62) list_set_graphic_pane_g1_copy1

0xf17d,	// (0x00050fcf) list_set_graphic_pane_g2_copy1

0x6f28,	// (0x00048d7a) list_set_graphic_pane_t1_copy1_ParamLimits

0x6f28,	// (0x00048d7a) list_set_graphic_pane_t1_copy1

0xbb0a,	// (0x0004d95c) rs_clock_indi_pane_g1

0xf185,	// (0x00050fd7) rs_clock_indi_pane_t1

0xf193,	// (0x00050fe5) rs_indi_pane

0xf19b,	// (0x00050fed) rs_indi_pane_g1

0xf1a4,	// (0x00050ff6) rs_indi_pane_g2

0xf1ad,	// (0x00050fff) rs_indi_pane_g3

0x0002,

0xfed3,	// (0x00051d25) rs_indi_pane_g

0x7073,	// (0x00048ec5) bg_popup_preview_window_pane_cp03

0xf1b6,	// (0x00051008) popup_fep_tooltip_window_t1

0xc7c1,	// (0x0004e613) popup_note2_window_g2_ParamLimits

0xc7c1,	// (0x0004e613) popup_note2_window_g2

0x0001,

0xfc6c,	// (0x00051abe) popup_note2_window_g_ParamLimits

0xfc6c,	// (0x00051abe) popup_note2_window_g

0xccc9,	// (0x0004eb1b) bg_popup_sub_pane_cp11_ParamLimits

0xccd6,	// (0x0004eb28) cell_ai3_links_pane_g1_ParamLimits

0xcced,	// (0x0004eb3f) cell_ai3_links_pane_t1

0x51cd,	// (0x0004701f) set_text_pane_t1_copy1_ParamLimits

0x6f9c,	// (0x00048dee) cell_graphic_popup_pane_cp2_ParamLimits

0x6f9c,	// (0x00048dee) cell_graphic_popup_pane_cp2

0xf1c4,	// (0x00051016) cell_graphic_popup_pane_g1_cp2

0x08d1,	// (0x00042723) cell_graphic_popup_pane_g2_cp2

0xf1cc,	// (0x0005101e) cell_graphic_popup_pane_g3_cp2

0xf1d4,	// (0x00051026) cell_graphic_popup_pane_t2_cp2

0x08e2,	// (0x00042734) grid_highlight_pane_cp3_cp2

0x0e80,	// (0x00042cd2) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x0b7c,	// (0x000429ce) main_tmo_pane_ParamLimits

0xd00d,	// (0x0004ee5f) popup_tmo_big_image_note_window

0xe753,	// (0x000505a5) cell_ai5_widget_list_pane

0xe75b,	// (0x000505ad) cell_ai5_widget_lrg_icon_pane

0xed80,	// (0x00050bd2) tmo_note_info_pane_t1_ParamLimits

0xed95,	// (0x00050be7) tmo_note_info_pane_t2_ParamLimits

0xedae,	// (0x00050c00) tmo_note_info_pane_t3_ParamLimits

0xedc3,	// (0x00050c15) tmo_note_info_pane_t4_ParamLimits

0xedd5,	// (0x00050c27) tmo_note_info_pane_t5_ParamLimits

0xfec1,	// (0x00051d13) tmo_note_info_pane_t_ParamLimits

0xef06,	// (0x00050d58) settings_container_pane_ParamLimits

0xf13b,	// (0x00050f8d) indicator_popup_pane_cp5

0xf13b,	// (0x00050f8d) indicator_popup_pane_cp6

0xf16b,	// (0x00050fbd) list_set_graphic_pane_copy1_ParamLimits

0xd6ca,	// (0x0004f51c) bg_popup_window_pane_cp23

0xf1e2,	// (0x00051034) popup_tmo_big_image_note_window_g1

0xf1ee,	// (0x00051040) popup_tmo_big_image_note_window_t1

0xf1fe,	// (0x00051050) popup_tmo_big_image_note_window_t2

0xf20e,	// (0x00051060) popup_tmo_big_image_note_window_t3

0x0002,

0xfeda,	// (0x00051d2c) popup_tmo_big_image_note_window_t

0xf21e,	// (0x00051070) cell_ai5_widget_lrg_icon_pane_g1

0xf226,	// (0x00051078) cell_ai5_widget_lrg_icon_pane_t1

0xf234,	// (0x00051086) cell_ai5_widget_list_row_pane_ParamLimits

0xf234,	// (0x00051086) cell_ai5_widget_list_row_pane

0xf24d,	// (0x0005109f) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf24d,	// (0x0005109f) cell_ai5_widget_list_row_pane_g1

0xf25a,	// (0x000510ac) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf25a,	// (0x000510ac) cell_ai5_widget_list_row_pane_t1

0xf272,	// (0x000510c4) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf272,	// (0x000510c4) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee1,	// (0x00051d33) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee1,	// (0x00051d33) cell_ai5_widget_list_row_pane_t

0xd6ca,	// (0x0004f51c) main_fep_vtchi_ss_pane

0x8748,	// (0x0004a59a) popup_fep_char_pre_window

0x8750,	// (0x0004a5a2) popup_fep_ituss_window

0x8771,	// (0x0004a5c3) popup_fep_vkbss_window

0xf29a,	// (0x000510ec) grid_vkbss_keypad_pane_ParamLimits

0xf29a,	// (0x000510ec) grid_vkbss_keypad_pane

0xf2aa,	// (0x000510fc) ituss_keypad_pane

0x879e,	// (0x0004a5f0) aid_vkbss_key_offset_ParamLimits

0x879e,	// (0x0004a5f0) aid_vkbss_key_offset

0x87aa,	// (0x0004a5fc) cell_vkbss_key_pane_ParamLimits

0x87aa,	// (0x0004a5fc) cell_vkbss_key_pane

0xf2ba,	// (0x0005110c) bg_cell_vkbss_key_g1_ParamLimits

0xf2ba,	// (0x0005110c) bg_cell_vkbss_key_g1

0xf2c6,	// (0x00051118) cell_vkbss_key_3p_pane_ParamLimits

0xf2c6,	// (0x00051118) cell_vkbss_key_3p_pane

0xf2e0,	// (0x00051132) cell_vkbss_key_g1_ParamLimits

0xf2e0,	// (0x00051132) cell_vkbss_key_g1

0xf2fa,	// (0x0005114c) cell_vkbss_key_t1_ParamLimits

0xf2fa,	// (0x0005114c) cell_vkbss_key_t1

0x87c0,	// (0x0004a612) cell_ituss_key_pane_ParamLimits

0x87c0,	// (0x0004a612) cell_ituss_key_pane

0xf325,	// (0x00051177) bg_cell_ituss_key_g1_ParamLimits

0xf325,	// (0x00051177) bg_cell_ituss_key_g1

0xf331,	// (0x00051183) cell_ituss_key_pane_g1_ParamLimits

0xf331,	// (0x00051183) cell_ituss_key_pane_g1

0xf345,	// (0x00051197) cell_ituss_key_pane_g2_ParamLimits

0xf345,	// (0x00051197) cell_ituss_key_pane_g2

0x0001,

0xfee8,	// (0x00051d3a) cell_ituss_key_pane_g_ParamLimits

0xfee8,	// (0x00051d3a) cell_ituss_key_pane_g

0xf377,	// (0x000511c9) cell_ituss_key_t1_ParamLimits

0xf377,	// (0x000511c9) cell_ituss_key_t1

0xf3b1,	// (0x00051203) cell_ituss_key_t2_ParamLimits

0xf3b1,	// (0x00051203) cell_ituss_key_t2

0xf3e2,	// (0x00051234) cell_ituss_key_t3_ParamLimits

0xf3e2,	// (0x00051234) cell_ituss_key_t3

0xf413,	// (0x00051265) cell_ituss_key_t4_ParamLimits

0xf413,	// (0x00051265) cell_ituss_key_t4

0x0003,

0xfeed,	// (0x00051d3f) cell_ituss_key_t_ParamLimits

0xfeed,	// (0x00051d3f) cell_ituss_key_t

0xf444,	// (0x00051296) cell_vkbss_key_3p_pane_g1

0xf44c,	// (0x0005129e) cell_vkbss_key_3p_pane_g2

0xf454,	// (0x000512a6) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef6,	// (0x00051d48) cell_vkbss_key_3p_pane_g

0xd6ca,	// (0x0004f51c) bg_popup_fep_char_preview_window_cp02

0xf45c,	// (0x000512ae) popup_fep_char_pre_window_t1

0xe6e5,	// (0x00050537) main_ai5_sk_pane

0xee4f,	// (0x00050ca1) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xee5b,	// (0x00050cad) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xee6e,	// (0x00050cc0) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xee7a,	// (0x00050ccc) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfecc,	// (0x00051d1e) cell_contacts_ai5_widget_pane_g_ParamLimits

0xee8c,	// (0x00050cde) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x0b7c,	// (0x000429ce) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf46b,	// (0x000512bd) main_ai5_sk_pane_g1

0x992a,	// (0x0004b77c) popup_query_code_window_g1

0x8766,	// (0x0004a5b8) popup_fep_vkb_icf_pane

0x877c,	// (0x0004a5ce) popup_fep_vtchi_icf_pane

0x0b7c,	// (0x000429ce) bg_icf_pane

0xf474,	// (0x000512c6) list_vkb_icf_pane

0x0b7c,	// (0x000429ce) bg_icf_pane_cp01

0xf480,	// (0x000512d2) vtchi_icf_list_pane

0xf491,	// (0x000512e3) list_vkb_icf_pane_t1_ParamLimits

0xf491,	// (0x000512e3) list_vkb_icf_pane_t1

0xf4a7,	// (0x000512f9) vtchi_icf_list_pane_t1_ParamLimits

0xf4a7,	// (0x000512f9) vtchi_icf_list_pane_t1

0x8750,	// (0x0004a5a2) popup_fep_ituss_window_ParamLimits

0x877c,	// (0x0004a5ce) popup_fep_vtchi_icf_pane_ParamLimits

0xf2aa,	// (0x000510fc) ituss_keypad_pane_ParamLimits

0x8792,	// (0x0004a5e4) ituss_sks_pane

0x0b7c,	// (0x000429ce) bg_icf_pane_ParamLimits

0x8739,	// (0x0004a58b) icf_edit_indi_pane_ParamLimits

0x8739,	// (0x0004a58b) icf_edit_indi_pane

0xf474,	// (0x000512c6) list_vkb_icf_pane_ParamLimits

0x0b7c,	// (0x000429ce) bg_icf_pane_cp01_ParamLimits

0x8739,	// (0x0004a58b) icf_edit_indi_pane_cp01_ParamLimits

0x8739,	// (0x0004a58b) icf_edit_indi_pane_cp01

0xf488,	// (0x000512da) vtchi_query_pane

0xbd85,	// (0x0004dbd7) icf_edit_indi_pane_g1_ParamLimits

0xbd85,	// (0x0004dbd7) icf_edit_indi_pane_g1

0xf529,	// (0x0005137b) icf_edit_indi_pane_g2_ParamLimits

0xf529,	// (0x0005137b) icf_edit_indi_pane_g2

0x0001,

0xff0e,	// (0x00051d60) icf_edit_indi_pane_g_ParamLimits

0xff0e,	// (0x00051d60) icf_edit_indi_pane_g

0xf538,	// (0x0005138a) icf_edit_indi_pane_t1

0xf4bf,	// (0x00051311) bg_input_focus_pane_cp042

0x0ab5,	// (0x00042907) vtchi_button_pane

0xf4c8,	// (0x0005131a) vtchi_query_pane_t1

0xf4d6,	// (0x00051328) vtchi_query_pane_t2

0xf4e4,	// (0x00051336) vtchi_query_pane_t3

0x0002,

0xfefd,	// (0x00051d4f) vtchi_query_pane_t

0xd6ca,	// (0x0004f51c) bg_button_pane_cp13

0xf4f2,	// (0x00051344) vtchi_button_pane_g1

0xf4fa,	// (0x0005134c) ituss_sks_pane_g1

0xf505,	// (0x00051357) ituss_sks_pane_g2

0x0001,

0xff04,	// (0x00051d56) ituss_sks_pane_g

0xf50d,	// (0x0005135f) ituss_sks_pane_t1

0xf51b,	// (0x0005136d) ituss_sks_pane_t2

0x0001,

0xff09,	// (0x00051d5b) ituss_sks_pane_t

0xb5ba,	// (0x0004d40c) indicator_nsta_pane_cp_g1

0xb5c3,	// (0x0004d415) indicator_nsta_pane_cp_g2

0xb5cb,	// (0x0004d41d) indicator_nsta_pane_cp_g3

0xb5d3,	// (0x0004d425) indicator_nsta_pane_cp_g4

0xb5db,	// (0x0004d42d) indicator_nsta_pane_cp_g5

0xb5e3,	// (0x0004d435) indicator_nsta_pane_cp_g6

0x0005,

0xfab6,	// (0x00051908) indicator_nsta_pane_cp_g

0xddaf,	// (0x0004fc01) cell_graphic2_pane_t2_ParamLimits

0xddaf,	// (0x0004fc01) cell_graphic2_pane_t2

0x0001,

0xfdc3,	// (0x00051c15) cell_graphic2_pane_t_ParamLimits

0xfdc3,	// (0x00051c15) cell_graphic2_pane_t

0xdddc,	// (0x0004fc2e) cell_graphic2_control_pane_t1

0x6cc8,	// (0x00048b1a) signal_pane_g3_ParamLimits

0x6cc8,	// (0x00048b1a) signal_pane_g3

0x6cda,	// (0x00048b2c) signal_pane_g4_ParamLimits

0x6cda,	// (0x00048b2c) signal_pane_g4

0xf284,	// (0x000510d6) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf284,	// (0x000510d6) cell_ai5_widget_list_row_pane_t3

0xf365,	// (0x000511b7) cell_ituss_key_pane_t1_ParamLimits

0xf365,	// (0x000511b7) cell_ituss_key_pane_t1

0x95a7,	// (0x0004b3f9) form_field_data_wide_pane_vc_t2_ParamLimits

0x95a7,	// (0x0004b3f9) form_field_data_wide_pane_vc_t2

0x95bb,	// (0x0004b40d) form_field_data_wide_pane_vc_t3_ParamLimits

0x95bb,	// (0x0004b40d) form_field_data_wide_pane_vc_t3

0x0002,

0xf814,	// (0x00051666) form_field_data_wide_pane_vc_t_ParamLimits

0xf814,	// (0x00051666) form_field_data_wide_pane_vc_t

0xb265,	// (0x0004d0b7) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb265,	// (0x0004d0b7) form_field_slider_wide_pane_vc_t3

0xb33b,	// (0x0004d18d) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb33b,	// (0x0004d18d) form_field_popup_wide_pane_vc_t2

0xb352,	// (0x0004d1a4) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb352,	// (0x0004d1a4) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa5,	// (0x000518f7) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa5,	// (0x000518f7) form_field_popup_wide_pane_vc_t

0x864d,	// (0x0004a49f) aid_fshwr2_btn_pane_ParamLimits

0x8659,	// (0x0004a4ab) aid_fshwr2_syb_pane_ParamLimits

0x866a,	// (0x0004a4bc) aid_fshwr2_txt_pane_ParamLimits

0x0b7c,	// (0x000429ce) fshwr2_bg_pane_ParamLimits

0x8676,	// (0x0004a4c8) fshwr2_func_candi_pane_ParamLimits

0x8687,	// (0x0004a4d9) fshwr2_hwr_syb_pane_ParamLimits

0x869a,	// (0x0004a4ec) fshwr2_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Large
