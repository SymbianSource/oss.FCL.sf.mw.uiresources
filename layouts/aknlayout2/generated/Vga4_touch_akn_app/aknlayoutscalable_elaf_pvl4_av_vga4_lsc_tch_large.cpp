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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00041d29 };

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
0xb847,	// (0x0004d570) Screen

0xb853,	// (0x0004d57c) application_window_ParamLimits

0xb853,	// (0x0004d57c) application_window

0xda92,	// (0x0004f7bb) screen_g1

0xb88b,	// (0x0004d5b4) area_bottom_pane_ParamLimits

0xb88b,	// (0x0004d5b4) area_bottom_pane

0x0a76,	// (0x0004279f) area_top_pane_ParamLimits

0x0a76,	// (0x0004279f) area_top_pane

0x0b0a,	// (0x00042833) main_pane_ParamLimits

0x0b0a,	// (0x00042833) main_pane

0xda9c,	// (0x0004f7c5) misc_graphics

0xd1e1,	// (0x0004ef0a) battery_pane_ParamLimits

0xd1e1,	// (0x0004ef0a) battery_pane

0x5370,	// (0x00047099) bg_status_flat_pane_g8

0x5378,	// (0x000470a1) bg_status_flat_pane_g9

0x4725,	// (0x0004644e) context_pane_ParamLimits

0x4725,	// (0x0004644e) context_pane

0xd358,	// (0x0004f081) navi_pane_ParamLimits

0xd358,	// (0x0004f081) navi_pane

0xd3e1,	// (0x0004f10a) signal_pane_ParamLimits

0xd3e1,	// (0x0004f10a) signal_pane

0x0008,

0xf88a,	// (0x000515b3) bg_status_flat_pane_g

0xd471,	// (0x0004f19a) status_pane_g1_ParamLimits

0xd471,	// (0x0004f19a) status_pane_g1

0xd487,	// (0x0004f1b0) status_pane_g2_ParamLimits

0xd487,	// (0x0004f1b0) status_pane_g2

0x4965,	// (0x0004668e) status_pane_g3_ParamLimits

0x4965,	// (0x0004668e) status_pane_g3

0x0004,

0xf7bd,	// (0x000514e6) status_pane_g_ParamLimits

0xf7bd,	// (0x000514e6) status_pane_g

0xd493,	// (0x0004f1bc) title_pane_ParamLimits

0xd493,	// (0x0004f1bc) title_pane

0xd4f0,	// (0x0004f219) uni_indicator_pane_ParamLimits

0xd4f0,	// (0x0004f219) uni_indicator_pane

0x3f52,	// (0x00045c7b) bg_list_pane_ParamLimits

0x3f52,	// (0x00045c7b) bg_list_pane

0xc23f,	// (0x0004df68) find_pane

0xca2c,	// (0x0004e755) listscroll_app_pane_ParamLimits

0xca2c,	// (0x0004e755) listscroll_app_pane

0x3f86,	// (0x00045caf) listscroll_form_pane

0xc247,	// (0x0004df70) listscroll_gen_pane_ParamLimits

0xc247,	// (0x0004df70) listscroll_gen_pane

0x3f86,	// (0x00045caf) listscroll_set_pane

0x5f29,	// (0x00047c52) main_idle_act_pane

0x3c36,	// (0x0004595f) main_idle_trad_pane

0x3c36,	// (0x0004595f) main_list_empty_pane

0x3fb4,	// (0x00045cdd) main_midp_pane

0x3fc0,	// (0x00045ce9) main_pane_g1_ParamLimits

0x3fc0,	// (0x00045ce9) main_pane_g1

0xca46,	// (0x0004e76f) popup_ai_message_window_ParamLimits

0xca46,	// (0x0004e76f) popup_ai_message_window

0xcae6,	// (0x0004e80f) popup_fep_china_uni_window_ParamLimits

0xcae6,	// (0x0004e80f) popup_fep_china_uni_window

0x40de,	// (0x00045e07) popup_fep_japan_candidate_window_ParamLimits

0x40de,	// (0x00045e07) popup_fep_japan_candidate_window

0x4108,	// (0x00045e31) popup_fep_japan_predictive_window_ParamLimits

0x4108,	// (0x00045e31) popup_fep_japan_predictive_window

0xcb46,	// (0x0004e86f) popup_find_window

0xcb63,	// (0x0004e88c) popup_grid_graphic_window_ParamLimits

0xcb63,	// (0x0004e88c) popup_grid_graphic_window

0x4179,	// (0x00045ea2) popup_large_graphic_colour_window

0xcc07,	// (0x0004e930) popup_menu_window_ParamLimits

0xcc07,	// (0x0004e930) popup_menu_window

0xcdf3,	// (0x0004eb1c) popup_note_image_window

0xcdb3,	// (0x0004eadc) popup_note_wait_window_ParamLimits

0xcdb3,	// (0x0004eadc) popup_note_wait_window

0xce0b,	// (0x0004eb34) popup_note_window_ParamLimits

0xce0b,	// (0x0004eb34) popup_note_window

0xceb9,	// (0x0004ebe2) popup_query_code_window_ParamLimits

0xceb9,	// (0x0004ebe2) popup_query_code_window

0x43e5,	// (0x0004610e) popup_query_data_code_window_ParamLimits

0x43e5,	// (0x0004610e) popup_query_data_code_window

0xcef9,	// (0x0004ec22) popup_query_data_window_ParamLimits

0xcef9,	// (0x0004ec22) popup_query_data_window

0xcf8d,	// (0x0004ecb6) popup_query_sat_info_window_ParamLimits

0xcf8d,	// (0x0004ecb6) popup_query_sat_info_window

0xd038,	// (0x0004ed61) popup_snote_single_graphic_window_ParamLimits

0xd038,	// (0x0004ed61) popup_snote_single_graphic_window

0xd038,	// (0x0004ed61) popup_snote_single_text_window_ParamLimits

0xd038,	// (0x0004ed61) popup_snote_single_text_window

0x4480,	// (0x000461a9) popup_sub_window_general

0x45c6,	// (0x000462ef) popup_window_general_ParamLimits

0x45c6,	// (0x000462ef) popup_window_general

0x45df,	// (0x00046308) power_save_pane

0xc103,	// (0x0004de2c) control_pane_g1_ParamLimits

0xc103,	// (0x0004de2c) control_pane_g1

0x1371,	// (0x0004309a) control_pane_g2_ParamLimits

0x1371,	// (0x0004309a) control_pane_g2

0x3f03,	// (0x00045c2c) control_pane_g3_ParamLimits

0x3f03,	// (0x00045c2c) control_pane_g3

0x0007,

0xf7a5,	// (0x000514ce) control_pane_g_ParamLimits

0xf7a5,	// (0x000514ce) control_pane_g

0xc142,	// (0x0004de6b) control_pane_t1_ParamLimits

0xc142,	// (0x0004de6b) control_pane_t1

0xc1a0,	// (0x0004dec9) control_pane_t2_ParamLimits

0xc1a0,	// (0x0004dec9) control_pane_t2

0x0002,

0xf7b6,	// (0x000514df) control_pane_t_ParamLimits

0xf7b6,	// (0x000514df) control_pane_t

0x3e24,	// (0x00045b4d) navi_navi_volume_pane_cp1

0x3e2d,	// (0x00045b56) status_small_icon_pane

0x3e35,	// (0x00045b5e) status_small_pane_g1_ParamLimits

0x3e35,	// (0x00045b5e) status_small_pane_g1

0x3e69,	// (0x00045b92) status_small_pane_g2_ParamLimits

0x3e69,	// (0x00045b92) status_small_pane_g2

0x3e75,	// (0x00045b9e) status_small_pane_g3_ParamLimits

0x3e75,	// (0x00045b9e) status_small_pane_g3

0x3e81,	// (0x00045baa) status_small_pane_g4_ParamLimits

0x3e81,	// (0x00045baa) status_small_pane_g4

0x3e8d,	// (0x00045bb6) status_small_pane_g5_ParamLimits

0x3e8d,	// (0x00045bb6) status_small_pane_g5

0x3e9c,	// (0x00045bc5) status_small_pane_g6_ParamLimits

0x3e9c,	// (0x00045bc5) status_small_pane_g6

0x0007,

0xf794,	// (0x000514bd) status_small_pane_g_ParamLimits

0xf794,	// (0x000514bd) status_small_pane_g

0x3ecc,	// (0x00045bf5) status_small_pane_t1

0x3eef,	// (0x00045c18) status_small_wait_pane_ParamLimits

0x3eef,	// (0x00045c18) status_small_wait_pane

0xc008,	// (0x0004dd31) aid_levels_signal_ParamLimits

0xc008,	// (0x0004dd31) aid_levels_signal

0xc020,	// (0x0004dd49) signal_pane_g1_ParamLimits

0xc020,	// (0x0004dd49) signal_pane_g1

0xc03b,	// (0x0004dd64) signal_pane_g2_ParamLimits

0xc03b,	// (0x0004dd64) signal_pane_g2

0x0001,

0xf729,	// (0x00051452) signal_pane_g_ParamLimits

0xf729,	// (0x00051452) signal_pane_g

0x3709,	// (0x00045432) context_pane_g1

0xba08,	// (0x0004d731) title_pane_g1

0xba3d,	// (0x0004d766) title_pane_t1

0x270d,	// (0x00044436) title_pane_t2

0x2733,	// (0x0004445c) title_pane_t3

0x0002,

0xf573,	// (0x0005129c) title_pane_t

0xd518,	// (0x0004f241) aid_levels_battery_ParamLimits

0xd518,	// (0x0004f241) aid_levels_battery

0xd534,	// (0x0004f25d) battery_pane_g1_ParamLimits

0xd534,	// (0x0004f25d) battery_pane_g1

0xd551,	// (0x0004f27a) battery_pane_g2_ParamLimits

0xd551,	// (0x0004f27a) battery_pane_g2

0x0001,

0xf7c8,	// (0x000514f1) battery_pane_g_ParamLimits

0xf7c8,	// (0x000514f1) battery_pane_g

0xd774,	// (0x0004f49d) uni_indicator_pane_g1

0xd789,	// (0x0004f4b2) uni_indicator_pane_g2

0xd79e,	// (0x0004f4c7) uni_indicator_pane_g3

0x0005,

0xf932,	// (0x0005165b) uni_indicator_pane_g

0x3aa4,	// (0x000457cd) navi_icon_pane_ParamLimits

0x3aa4,	// (0x000457cd) navi_icon_pane

0x39eb,	// (0x00045714) navi_midp_pane

0x3ac0,	// (0x000457e9) navi_navi_pane

0x3aca,	// (0x000457f3) navi_text_pane_ParamLimits

0x3aca,	// (0x000457f3) navi_text_pane

0xda92,	// (0x0004f7bb) status_small_wait_pane_g1

0x2b77,	// (0x000448a0) status_small_wait_pane_g2

0x0001,

0xf92d,	// (0x00051656) status_small_wait_pane_g

0xd713,	// (0x0004f43c) navi_navi_icon_text_pane

0xd71b,	// (0x0004f444) navi_navi_pane_g1_ParamLimits

0xd71b,	// (0x0004f444) navi_navi_pane_g1

0xd72d,	// (0x0004f456) navi_navi_pane_g2_ParamLimits

0xd72d,	// (0x0004f456) navi_navi_pane_g2

0x0001,

0xf8fb,	// (0x00051624) navi_navi_pane_g_ParamLimits

0xf8fb,	// (0x00051624) navi_navi_pane_g

0x59ff,	// (0x00047728) navi_navi_tabs_pane

0xd73f,	// (0x0004f468) navi_navi_text_pane

0xd713,	// (0x0004f43c) navi_navi_volume_pane

0xd701,	// (0x0004f42a) navi_text_pane_t1

0xd6f5,	// (0x0004f41e) navi_icon_pane_g1

0x58f0,	// (0x00047619) navi_navi_text_pane_t1

0xc423,	// (0x0004e14c) navi_navi_volume_pane_g1

0xc42b,	// (0x0004e154) volume_small_pane

0xd651,	// (0x0004f37a) navi_navi_icon_text_pane_g1

0xd659,	// (0x0004f382) navi_navi_icon_text_pane_t1

0x3ac0,	// (0x000457e9) navi_tabs_2_long_pane

0x3ac0,	// (0x000457e9) navi_tabs_2_pane

0x3ac0,	// (0x000457e9) navi_tabs_3_long_pane

0x3ac0,	// (0x000457e9) navi_tabs_3_pane

0x3ac0,	// (0x000457e9) navi_tabs_4_pane

0xc403,	// (0x0004e12c) tabs_2_active_pane_ParamLimits

0xc403,	// (0x0004e12c) tabs_2_active_pane

0xc413,	// (0x0004e13c) tabs_2_passive_pane_ParamLimits

0xc413,	// (0x0004e13c) tabs_2_passive_pane

0xc3d1,	// (0x0004e0fa) tabs_3_active_pane_ParamLimits

0xc3d1,	// (0x0004e0fa) tabs_3_active_pane

0xc3e1,	// (0x0004e10a) tabs_3_passive_pane_ParamLimits

0xc3e1,	// (0x0004e10a) tabs_3_passive_pane

0xc3f2,	// (0x0004e11b) tabs_3_passive_pane_cp_ParamLimits

0xc3f2,	// (0x0004e11b) tabs_3_passive_pane_cp

0xc38d,	// (0x0004e0b6) tabs_4_active_pane_ParamLimits

0xc38d,	// (0x0004e0b6) tabs_4_active_pane

0xc39e,	// (0x0004e0c7) tabs_4_passive_pane_ParamLimits

0xc39e,	// (0x0004e0c7) tabs_4_passive_pane

0xc3af,	// (0x0004e0d8) tabs_4_passive_pane_cp_ParamLimits

0xc3af,	// (0x0004e0d8) tabs_4_passive_pane_cp

0xc3c0,	// (0x0004e0e9) tabs_4_passive_pane_cp2_ParamLimits

0xc3c0,	// (0x0004e0e9) tabs_4_passive_pane_cp2

0xc369,	// (0x0004e092) tabs_2_long_active_pane_ParamLimits

0xc369,	// (0x0004e092) tabs_2_long_active_pane

0xc37b,	// (0x0004e0a4) tabs_2_long_passive_pane_ParamLimits

0xc37b,	// (0x0004e0a4) tabs_2_long_passive_pane

0xc31e,	// (0x0004e047) tabs_3_long_active_pane_ParamLimits

0xc31e,	// (0x0004e047) tabs_3_long_active_pane

0xc337,	// (0x0004e060) tabs_3_long_passive_pane_ParamLimits

0xc337,	// (0x0004e060) tabs_3_long_passive_pane

0xc350,	// (0x0004e079) tabs_3_long_passive_pane_cp_ParamLimits

0xc350,	// (0x0004e079) tabs_3_long_passive_pane_cp

0x15df,	// (0x00043308) volume_small_pane_g1

0xc2cd,	// (0x0004dff6) volume_small_pane_g2

0xc2d6,	// (0x0004dfff) volume_small_pane_g3

0xc2df,	// (0x0004e008) volume_small_pane_g4

0xc2e8,	// (0x0004e011) volume_small_pane_g5

0xc2f1,	// (0x0004e01a) volume_small_pane_g6

0xc2fa,	// (0x0004e023) volume_small_pane_g7

0xc303,	// (0x0004e02c) volume_small_pane_g8

0xc30c,	// (0x0004e035) volume_small_pane_g9

0xc315,	// (0x0004e03e) volume_small_pane_g10

0x0009,

0xf8c7,	// (0x000515f0) volume_small_pane_g

0x29c1,	// (0x000446ea) bg_active_tab_pane_cp2_ParamLimits

0x29c1,	// (0x000446ea) bg_active_tab_pane_cp2

0xbac9,	// (0x0004d7f2) tabs_3_active_pane_g1

0xbad1,	// (0x0004d7fa) tabs_3_active_pane_t1

0x29c1,	// (0x000446ea) bg_passive_tab_pane_cp2_ParamLimits

0x29c1,	// (0x000446ea) bg_passive_tab_pane_cp2

0xbac9,	// (0x0004d7f2) tabs_3_passive_pane_g1

0xbad1,	// (0x0004d7fa) tabs_3_passive_pane_t1

0x29c1,	// (0x000446ea) bg_active_tab_pane_cp3_ParamLimits

0x29c1,	// (0x000446ea) bg_active_tab_pane_cp3

0xbae3,	// (0x0004d80c) tabs_4_active_pane_g1

0xbaeb,	// (0x0004d814) tabs_4_active_pane_t1

0x29c1,	// (0x000446ea) bg_passive_tab_pane_cp3_ParamLimits

0x29c1,	// (0x000446ea) bg_passive_tab_pane_cp3

0xbae3,	// (0x0004d80c) tabs_4_1_passive_pane_g1

0xbaeb,	// (0x0004d814) tabs_4_1_passive_pane_t1

0x3fb4,	// (0x00045cdd) list_highlight_pane_cp2

0xd85c,	// (0x0004f585) list_set_pane_ParamLimits

0xd85c,	// (0x0004f585) list_set_pane

0xd924,	// (0x0004f64d) main_pane_set_t1_ParamLimits

0xd924,	// (0x0004f64d) main_pane_set_t1

0xd944,	// (0x0004f66d) main_pane_set_t2_ParamLimits

0xd944,	// (0x0004f66d) main_pane_set_t2

0xd958,	// (0x0004f681) main_pane_set_t3_ParamLimits

0xd958,	// (0x0004f681) main_pane_set_t3

0xd96c,	// (0x0004f695) main_pane_set_t4_ParamLimits

0xd96c,	// (0x0004f695) main_pane_set_t4

0x0003,

0xf997,	// (0x000516c0) main_pane_set_t_ParamLimits

0xf997,	// (0x000516c0) main_pane_set_t

0xd980,	// (0x0004f6a9) setting_code_pane

0x6089,	// (0x00047db2) setting_slider_graphic_pane

0x6089,	// (0x00047db2) setting_slider_pane

0x6089,	// (0x00047db2) setting_text_pane

0x6089,	// (0x00047db2) setting_volume_pane

0x0d61,	// (0x00042a8a) volume_set_pane

0x2745,	// (0x0004446e) bg_set_opt_pane_cp

0x0d6b,	// (0x00042a94) setting_slider_pane_t1

0x0d81,	// (0x00042aaa) setting_slider_pane_t2

0x0d9b,	// (0x00042ac4) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x000512a3) setting_slider_pane_t

0x0db3,	// (0x00042adc) slider_set_pane

0xda9c,	// (0x0004f7c5) bg_set_opt_pane_cp2

0x2787,	// (0x000444b0) setting_slider_graphic_pane_g1

0x0dc9,	// (0x00042af2) setting_slider_graphic_pane_t1

0x0dd9,	// (0x00042b02) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x000512aa) setting_slider_graphic_pane_t

0x0de9,	// (0x00042b12) slider_set_pane_cp

0xda9c,	// (0x0004f7c5) input_focus_pane_cp1

0x5f10,	// (0x00047c39) list_set_text_pane

0xda92,	// (0x0004f7bb) setting_text_pane_g1

0xda9c,	// (0x0004f7c5) input_focus_pane_cp2

0xda92,	// (0x0004f7bb) setting_code_pane_g1

0x2790,	// (0x000444b9) setting_code_pane_t1

0xf53b,	// (0x00051264) set_text_pane_t1_ParamLimits

0xf53b,	// (0x00051264) set_text_pane_t1

0x303f,	// (0x00044d68) set_opt_bg_pane_g1

0x3047,	// (0x00044d70) set_opt_bg_pane_g2

0x5ee8,	// (0x00047c11) set_opt_bg_pane_g3

0x3057,	// (0x00044d80) set_opt_bg_pane_g4

0x305f,	// (0x00044d88) set_opt_bg_pane_g5

0x3067,	// (0x00044d90) set_opt_bg_pane_g6

0x5ef2,	// (0x00047c1b) set_opt_bg_pane_g7

0x5efc,	// (0x00047c25) set_opt_bg_pane_g8

0x5f06,	// (0x00047c2f) set_opt_bg_pane_g9

0x0008,

0xf984,	// (0x000516ad) set_opt_bg_pane_g

0x5edb,	// (0x00047c04) slider_set_pane_g1

0x17c3,	// (0x000434ec) slider_set_pane_g2

0x0006,

0xf975,	// (0x0005169e) slider_set_pane_g

0x174b,	// (0x00043474) volume_set_pane_g1

0x1755,	// (0x0004347e) volume_set_pane_g2

0x175f,	// (0x00043488) volume_set_pane_g3

0x1769,	// (0x00043492) volume_set_pane_g4

0x1773,	// (0x0004349c) volume_set_pane_g5

0x177d,	// (0x000434a6) volume_set_pane_g6

0x1787,	// (0x000434b0) volume_set_pane_g7

0x1791,	// (0x000434ba) volume_set_pane_g8

0x179b,	// (0x000434c4) volume_set_pane_g9

0x17a5,	// (0x000434ce) volume_set_pane_g10

0x0009,

0xf94d,	// (0x00051676) volume_set_pane_g

0xbafd,	// (0x0004d826) indicator_pane_ParamLimits

0xbafd,	// (0x0004d826) indicator_pane

0xbb29,	// (0x0004d852) main_idle_pane_g2_ParamLimits

0xbb29,	// (0x0004d852) main_idle_pane_g2

0xbb61,	// (0x0004d88a) main_pane_idle_g1_ParamLimits

0xbb61,	// (0x0004d88a) main_pane_idle_g1

0x27e0,	// (0x00044509) popup_clock_digital_analogue_window_ParamLimits

0x27e0,	// (0x00044509) popup_clock_digital_analogue_window

0xbb8f,	// (0x0004d8b8) soft_indicator_pane_ParamLimits

0xbb8f,	// (0x0004d8b8) soft_indicator_pane

0xbbab,	// (0x0004d8d4) wallpaper_pane_ParamLimits

0xbbab,	// (0x0004d8d4) wallpaper_pane

0xda92,	// (0x0004f7bb) wallpaper_pane_g1

0xbbbd,	// (0x0004d8e6) indicator_pane_g1_ParamLimits

0xbbbd,	// (0x0004d8e6) indicator_pane_g1

0x634d,	// (0x00048076) navi_navi_icon_text_pane_srt_g1

0x2834,	// (0x0004455d) soft_indicator_pane_t1

0x284e,	// (0x00044577) aid_ps_area_pane

0xbbd6,	// (0x0004d8ff) aid_ps_clock_pane

0x286d,	// (0x00044596) aid_ps_indicator_pane

0x2879,	// (0x000445a2) indicator_ps_pane_ParamLimits

0x2879,	// (0x000445a2) indicator_ps_pane

0x2888,	// (0x000445b1) power_save_pane_g1_ParamLimits

0x2888,	// (0x000445b1) power_save_pane_g1

0x2894,	// (0x000445bd) power_save_pane_g2_ParamLimits

0x2894,	// (0x000445bd) power_save_pane_g2

0x096a,	// (0x00042693) aid_navinavi_width_pane

0x284e,	// (0x00044577) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x000512af) power_save_pane_g_ParamLimits

0xf586,	// (0x000512af) power_save_pane_g

0x28a2,	// (0x000445cb) power_save_pane_t1_ParamLimits

0x28a2,	// (0x000445cb) power_save_pane_t1

0xbbd6,	// (0x0004d8ff) aid_ps_clock_pane_ParamLimits

0x286d,	// (0x00044596) aid_ps_indicator_pane_ParamLimits

0x28b4,	// (0x000445dd) power_save_pane_t4_ParamLimits

0x28b4,	// (0x000445dd) power_save_pane_t4

0x0001,

0xf58b,	// (0x000512b4) power_save_pane_t_ParamLimits

0xf58b,	// (0x000512b4) power_save_pane_t

0x28de,	// (0x00044607) power_save_t3_ParamLimits

0x28de,	// (0x00044607) power_save_t3

0x28c9,	// (0x000445f2) power_save_t2_ParamLimits

0x28c9,	// (0x000445f2) power_save_t2

0x28f3,	// (0x0004461c) indicator_ps_pane_g1

0xbbe4,	// (0x0004d90d) ai_gene_pane_ParamLimits

0xbbe4,	// (0x0004d90d) ai_gene_pane

0xbbfb,	// (0x0004d924) ai_links_pane_ParamLimits

0xbbfb,	// (0x0004d924) ai_links_pane

0xbc13,	// (0x0004d93c) indicator_pane_cp1_ParamLimits

0xbc13,	// (0x0004d93c) indicator_pane_cp1

0xbc22,	// (0x0004d94b) main_pane_idle_g1_cp_ParamLimits

0xbc22,	// (0x0004d94b) main_pane_idle_g1_cp

0x292c,	// (0x00044655) popup_ai_links_title_window

0xbc3a,	// (0x0004d963) soft_indicator_pane_cp1_ParamLimits

0xbc3a,	// (0x0004d963) soft_indicator_pane_cp1

0x5cae,	// (0x000479d7) ai_links_pane_g1

0x5cb7,	// (0x000479e0) grid_ai_links_pane

0xd76b,	// (0x0004f494) ai_gene_pane_1

0x5c9c,	// (0x000479c5) ai_gene_pane_2

0x5ca5,	// (0x000479ce) list_highlight_pane_cp4

0xd747,	// (0x0004f470) cell_ai_link_pane_ParamLimits

0xd747,	// (0x0004f470) cell_ai_link_pane

0x5c6b,	// (0x00047994) cell_ai_link_pane_g1

0x2b77,	// (0x000448a0) cell_ai_link_pane_g2

0x0001,

0xf928,	// (0x00051651) cell_ai_link_pane_g

0xda9c,	// (0x0004f7c5) grid_highlight_cp2

0xda9c,	// (0x0004f7c5) bg_popup_sub_pane_cp1

0x294f,	// (0x00044678) popup_ai_links_title_window_t1

0x5bb7,	// (0x000478e0) ai_gene_pane_1_g1_ParamLimits

0x5bb7,	// (0x000478e0) ai_gene_pane_1_g1

0x5bc3,	// (0x000478ec) ai_gene_pane_1_g2_ParamLimits

0x5bc3,	// (0x000478ec) ai_gene_pane_1_g2

0x0001,

0xf91e,	// (0x00051647) ai_gene_pane_1_g_ParamLimits

0xf91e,	// (0x00051647) ai_gene_pane_1_g

0x5bd0,	// (0x000478f9) ai_gene_pane_1_t1_ParamLimits

0x5bd0,	// (0x000478f9) ai_gene_pane_1_t1

0x5c04,	// (0x0004792d) grid_ai_soft_ind_pane

0x5ba2,	// (0x000478cb) ai_gene_pane_2_t1_ParamLimits

0x5ba2,	// (0x000478cb) ai_gene_pane_2_t1

0xbc4e,	// (0x0004d977) main_pane_empty_t1_ParamLimits

0xbc4e,	// (0x0004d977) main_pane_empty_t1

0xbc66,	// (0x0004d98f) main_pane_empty_t2_ParamLimits

0xbc66,	// (0x0004d98f) main_pane_empty_t2

0xbc7b,	// (0x0004d9a4) main_pane_empty_t3_ParamLimits

0xbc7b,	// (0x0004d9a4) main_pane_empty_t3

0xbc8d,	// (0x0004d9b6) main_pane_empty_t4_ParamLimits

0xbc8d,	// (0x0004d9b6) main_pane_empty_t4

0xbc9f,	// (0x0004d9c8) main_pane_empty_t5_ParamLimits

0xbc9f,	// (0x0004d9c8) main_pane_empty_t5

0x0004,

0xf590,	// (0x000512b9) main_pane_empty_t_ParamLimits

0xf590,	// (0x000512b9) main_pane_empty_t

0x3090,	// (0x00044db9) bg_popup_window_pane_ParamLimits

0x3090,	// (0x00044db9) bg_popup_window_pane

0x58fe,	// (0x00047627) find_popup_pane_cp2_ParamLimits

0x58fe,	// (0x00047627) find_popup_pane_cp2

0x590a,	// (0x00047633) heading_pane_ParamLimits

0x590a,	// (0x00047633) heading_pane

0xda9c,	// (0x0004f7c5) bg_popup_sub_pane

0xd676,	// (0x0004f39f) bg_popup_window_pane_g1_ParamLimits

0xd676,	// (0x0004f39f) bg_popup_window_pane_g1

0xd685,	// (0x0004f3ae) bg_popup_window_pane_g2_ParamLimits

0xd685,	// (0x0004f3ae) bg_popup_window_pane_g2

0xd691,	// (0x0004f3ba) bg_popup_window_pane_g3_ParamLimits

0xd691,	// (0x0004f3ba) bg_popup_window_pane_g3

0xd69d,	// (0x0004f3c6) bg_popup_window_pane_g4_ParamLimits

0xd69d,	// (0x0004f3c6) bg_popup_window_pane_g4

0xd6ac,	// (0x0004f3d5) bg_popup_window_pane_g5_ParamLimits

0xd6ac,	// (0x0004f3d5) bg_popup_window_pane_g5

0xd6bc,	// (0x0004f3e5) bg_popup_window_pane_g6_ParamLimits

0xd6bc,	// (0x0004f3e5) bg_popup_window_pane_g6

0xd6c8,	// (0x0004f3f1) bg_popup_window_pane_g7_ParamLimits

0xd6c8,	// (0x0004f3f1) bg_popup_window_pane_g7

0xd6d7,	// (0x0004f400) bg_popup_window_pane_g8_ParamLimits

0xd6d7,	// (0x0004f400) bg_popup_window_pane_g8

0xd6e6,	// (0x0004f40f) bg_popup_window_pane_g9_ParamLimits

0xd6e6,	// (0x0004f40f) bg_popup_window_pane_g9

0x58e4,	// (0x0004760d) bg_popup_window_pane_g10_ParamLimits

0x58e4,	// (0x0004760d) bg_popup_window_pane_g10

0x0009,

0xf8e6,	// (0x0005160f) bg_popup_window_pane_g_ParamLimits

0xf8e6,	// (0x0005160f) bg_popup_window_pane_g

0x580d,	// (0x00047536) bg_popup_heading_pane_ParamLimits

0x580d,	// (0x00047536) bg_popup_heading_pane

0x1835,	// (0x0004355e) tabs_4_passive_pane_cp_srt_ParamLimits

0x1835,	// (0x0004355e) tabs_4_passive_pane_cp_srt

0x1847,	// (0x00043570) tabs_4_passive_pane_srt_ParamLimits

0x5821,	// (0x0004754a) heading_pane_g2

0x1847,	// (0x00043570) tabs_4_passive_pane_srt

0x4be2,	// (0x0004690b) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4be2,	// (0x0004690b) bg_passive_tab_pane_cp3_srt

0x5829,	// (0x00047552) heading_pane_t1_ParamLimits

0x5829,	// (0x00047552) heading_pane_t1

0x5840,	// (0x00047569) heading_pane_t2_ParamLimits

0x5840,	// (0x00047569) heading_pane_t2

0x0001,

0xf8e1,	// (0x0005160a) heading_pane_t_ParamLimits

0xf8e1,	// (0x0005160a) heading_pane_t

0x5338,	// (0x00047061) bg_popup_heading_pane_g1

0x53e7,	// (0x00047110) bg_popup_heading_pane_g2

0x53f1,	// (0x0004711a) bg_popup_heading_pane_g3

0x53fb,	// (0x00047124) bg_popup_heading_pane_g4

0x5405,	// (0x0004712e) bg_popup_heading_pane_g5

0x540f,	// (0x00047138) bg_popup_heading_pane_g6

0x5417,	// (0x00047140) bg_popup_heading_pane_g7

0x541f,	// (0x00047148) bg_popup_heading_pane_g8

0x5429,	// (0x00047152) bg_popup_heading_pane_g9

0x0008,

0xf89d,	// (0x000515c6) bg_popup_heading_pane_g

0x4af0,	// (0x00046819) bg_popup_sub_pane_g1

0x4af8,	// (0x00046821) bg_popup_sub_pane_g2

0x4b00,	// (0x00046829) bg_popup_sub_pane_g3

0x4b08,	// (0x00046831) bg_popup_sub_pane_g4

0x4b10,	// (0x00046839) bg_popup_sub_pane_g5

0x4b18,	// (0x00046841) bg_popup_sub_pane_g6

0x4b20,	// (0x00046849) bg_popup_sub_pane_g7

0x4b28,	// (0x00046851) bg_popup_sub_pane_g8

0x4b30,	// (0x00046859) bg_popup_sub_pane_g9

0x0008,

0xf877,	// (0x000515a0) bg_popup_sub_pane_g

0x29c1,	// (0x000446ea) bg_popup_window_pane_cp5_ParamLimits

0x29c1,	// (0x000446ea) bg_popup_window_pane_cp5

0x29dd,	// (0x00044706) popup_note_window_g1_ParamLimits

0x29dd,	// (0x00044706) popup_note_window_g1

0x29e9,	// (0x00044712) popup_note_window_t1_ParamLimits

0x29e9,	// (0x00044712) popup_note_window_t1

0x29ff,	// (0x00044728) popup_note_window_t2_ParamLimits

0x29ff,	// (0x00044728) popup_note_window_t2

0x2a15,	// (0x0004473e) popup_note_window_t3_ParamLimits

0x2a15,	// (0x0004473e) popup_note_window_t3

0x2a2b,	// (0x00044754) popup_note_window_t4_ParamLimits

0x2a2b,	// (0x00044754) popup_note_window_t4

0x2a53,	// (0x0004477c) popup_note_window_t5_ParamLimits

0x2a53,	// (0x0004477c) popup_note_window_t5

0x0004,

0xf59b,	// (0x000512c4) popup_note_window_t_ParamLimits

0xf59b,	// (0x000512c4) popup_note_window_t

0x2a77,	// (0x000447a0) bg_popup_window_pane_cp6_ParamLimits

0x2a77,	// (0x000447a0) bg_popup_window_pane_cp6

0x52b4,	// (0x00046fdd) popup_note_image_window_g1_ParamLimits

0x52b4,	// (0x00046fdd) popup_note_image_window_g1

0x52c0,	// (0x00046fe9) popup_note_image_window_g2_ParamLimits

0x52c0,	// (0x00046fe9) popup_note_image_window_g2

0x0001,

0xf86b,	// (0x00051594) popup_note_image_window_g_ParamLimits

0xf86b,	// (0x00051594) popup_note_image_window_g

0x52d9,	// (0x00047002) popup_note_image_window_t1_ParamLimits

0x52d9,	// (0x00047002) popup_note_image_window_t1

0x52f2,	// (0x0004701b) popup_note_image_window_t2_ParamLimits

0x52f2,	// (0x0004701b) popup_note_image_window_t2

0x530b,	// (0x00047034) popup_note_image_window_t3_ParamLimits

0x530b,	// (0x00047034) popup_note_image_window_t3

0x0002,

0xf870,	// (0x00051599) popup_note_image_window_t_ParamLimits

0xf870,	// (0x00051599) popup_note_image_window_t

0x5174,	// (0x00046e9d) bg_popup_window_pane_cp7_ParamLimits

0x5174,	// (0x00046e9d) bg_popup_window_pane_cp7

0x51a4,	// (0x00046ecd) popup_note_wait_window_g1_ParamLimits

0x51a4,	// (0x00046ecd) popup_note_wait_window_g1

0x51b0,	// (0x00046ed9) popup_note_wait_window_g2_ParamLimits

0x51b0,	// (0x00046ed9) popup_note_wait_window_g2

0x0002,

0xf859,	// (0x00051582) popup_note_wait_window_g_ParamLimits

0xf859,	// (0x00051582) popup_note_wait_window_g

0x51c8,	// (0x00046ef1) popup_note_wait_window_t1_ParamLimits

0x51c8,	// (0x00046ef1) popup_note_wait_window_t1

0x51ef,	// (0x00046f18) popup_note_wait_window_t2_ParamLimits

0x51ef,	// (0x00046f18) popup_note_wait_window_t2

0x520d,	// (0x00046f36) popup_note_wait_window_t3_ParamLimits

0x520d,	// (0x00046f36) popup_note_wait_window_t3

0x5220,	// (0x00046f49) popup_note_wait_window_t4_ParamLimits

0x5220,	// (0x00046f49) popup_note_wait_window_t4

0x0004,

0xf860,	// (0x00051589) popup_note_wait_window_t_ParamLimits

0xf860,	// (0x00051589) popup_note_wait_window_t

0x5245,	// (0x00046f6e) wait_bar_pane_ParamLimits

0x5245,	// (0x00046f6e) wait_bar_pane

0xda9c,	// (0x0004f7c5) wait_anim_pane

0xda9c,	// (0x0004f7c5) wait_border_pane

0xda92,	// (0x0004f7bb) wait_anim_pane_g1

0xda92,	// (0x0004f7bb) wait_anim_pane_g2

0x0001,

0xf724,	// (0x0005144d) wait_anim_pane_g

0x5118,	// (0x00046e41) wait_border_pane_g1

0x5123,	// (0x00046e4c) wait_border_pane_g2

0x512c,	// (0x00046e55) wait_border_pane_g3

0x0002,

0xf852,	// (0x0005157b) wait_border_pane_g

0x4f82,	// (0x00046cab) bg_popup_window_pane_cp16_ParamLimits

0x4f82,	// (0x00046cab) bg_popup_window_pane_cp16

0x5082,	// (0x00046dab) indicator_popup_pane_cp4_ParamLimits

0x5082,	// (0x00046dab) indicator_popup_pane_cp4

0x5096,	// (0x00046dbf) popup_query_data_window_t1_ParamLimits

0x5096,	// (0x00046dbf) popup_query_data_window_t1

0x50a8,	// (0x00046dd1) popup_query_data_window_t2_ParamLimits

0x50a8,	// (0x00046dd1) popup_query_data_window_t2

0x50c1,	// (0x00046dea) popup_query_data_window_t3_ParamLimits

0x50c1,	// (0x00046dea) popup_query_data_window_t3

0x0002,

0xf84b,	// (0x00051574) popup_query_data_window_t_ParamLimits

0xf84b,	// (0x00051574) popup_query_data_window_t

0x50db,	// (0x00046e04) query_popup_data_pane_ParamLimits

0x50db,	// (0x00046e04) query_popup_data_pane

0x50ef,	// (0x00046e18) query_popup_data_pane_cp1_ParamLimits

0x50ef,	// (0x00046e18) query_popup_data_pane_cp1

0x4f82,	// (0x00046cab) bg_popup_window_pane_cp10_ParamLimits

0x4f82,	// (0x00046cab) bg_popup_window_pane_cp10

0x4fb4,	// (0x00046cdd) indicator_popup_pane_ParamLimits

0x4fb4,	// (0x00046cdd) indicator_popup_pane

0x4fd6,	// (0x00046cff) popup_query_code_window_t1_ParamLimits

0x4fd6,	// (0x00046cff) popup_query_code_window_t1

0x4ff0,	// (0x00046d19) popup_query_code_window_t2_ParamLimits

0x4ff0,	// (0x00046d19) popup_query_code_window_t2

0x5039,	// (0x00046d62) popup_query_code_window_t3_ParamLimits

0x5039,	// (0x00046d62) popup_query_code_window_t3

0x0002,

0xf844,	// (0x0005156d) popup_query_code_window_t_ParamLimits

0xf844,	// (0x0005156d) popup_query_code_window_t

0x5068,	// (0x00046d91) query_popup_pane_ParamLimits

0x5068,	// (0x00046d91) query_popup_pane

0x2a77,	// (0x000447a0) bg_popup_window_pane_cp15_ParamLimits

0x2a77,	// (0x000447a0) bg_popup_window_pane_cp15

0x2a97,	// (0x000447c0) indicator_popup_pane_cp1_ParamLimits

0x2a97,	// (0x000447c0) indicator_popup_pane_cp1

0x2aaa,	// (0x000447d3) indicator_popup_pane_cp2_ParamLimits

0x2aaa,	// (0x000447d3) indicator_popup_pane_cp2

0x2ac5,	// (0x000447ee) popup_query_data_code_window_g1_ParamLimits

0x2ac5,	// (0x000447ee) popup_query_data_code_window_g1

0x2ad8,	// (0x00044801) popup_query_data_code_window_t1_ParamLimits

0x2ad8,	// (0x00044801) popup_query_data_code_window_t1

0x2aea,	// (0x00044813) popup_query_data_code_window_t2_ParamLimits

0x2aea,	// (0x00044813) popup_query_data_code_window_t2

0x2afc,	// (0x00044825) popup_query_data_code_window_t3_ParamLimits

0x2afc,	// (0x00044825) popup_query_data_code_window_t3

0x2b12,	// (0x0004483b) popup_query_data_code_window_t4_ParamLimits

0x2b12,	// (0x0004483b) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x000512cf) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x000512cf) popup_query_data_code_window_t

0x3a60,	// (0x00045789) list_single_midp_graphic_pane_g3

0x2b2c,	// (0x00044855) query_popup_data_pane_cp2_ParamLimits

0x2b3f,	// (0x00044868) query_popup_pane_cp2_ParamLimits

0x2b3f,	// (0x00044868) query_popup_pane_cp2

0xda9c,	// (0x0004f7c5) bg_popup_window_pane_cp11

0x4f7a,	// (0x00046ca3) heading_pane_cp5

0x2c2f,	// (0x00044958) listscroll_popup_info_pane

0xda9c,	// (0x0004f7c5) input_focus_pane_cp3

0x2b5a,	// (0x00044883) query_popup_pane_t1

0x2b68,	// (0x00044891) list_popup_info_pane_ParamLimits

0x2b68,	// (0x00044891) list_popup_info_pane

0x2b77,	// (0x000448a0) listscroll_popup_info_pane_g1

0x2b7f,	// (0x000448a8) scroll_pane_cp7

0x2b89,	// (0x000448b2) popup_info_list_pane_t1_ParamLimits

0x2b89,	// (0x000448b2) popup_info_list_pane_t1

0x2ba3,	// (0x000448cc) popup_info_list_pane_t2_ParamLimits

0x2ba3,	// (0x000448cc) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x000512d8) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x000512d8) popup_info_list_pane_t

0xda9c,	// (0x0004f7c5) bg_popup_window_pane_cp12

0x6367,	// (0x00048090) find_popup_pane

0x2745,	// (0x0004446e) bg_popup_window_pane_cp3

0x2bbd,	// (0x000448e6) heading_pane_cp3

0x2bc9,	// (0x000448f2) listscroll_popup_graphic_pane

0xda9c,	// (0x0004f7c5) bg_popup_window_pane_cp4

0xbd01,	// (0x0004da2a) heading_pane_cp4

0x2c2f,	// (0x00044958) listscroll_popup_colour_pane

0xbd0b,	// (0x0004da34) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xbd0b,	// (0x0004da34) cell_large_graphic_colour_none_popup_pane

0xbd1f,	// (0x0004da48) grid_large_graphic_colour_popup_pane_ParamLimits

0xbd1f,	// (0x0004da48) grid_large_graphic_colour_popup_pane

0xbd4b,	// (0x0004da74) listscroll_popup_colour_pane_g1_ParamLimits

0xbd4b,	// (0x0004da74) listscroll_popup_colour_pane_g1

0xbd62,	// (0x0004da8b) listscroll_popup_colour_pane_g2_ParamLimits

0xbd62,	// (0x0004da8b) listscroll_popup_colour_pane_g2

0xbd79,	// (0x0004daa2) listscroll_popup_colour_pane_g3_ParamLimits

0xbd79,	// (0x0004daa2) listscroll_popup_colour_pane_g3

0xbd89,	// (0x0004dab2) listscroll_popup_colour_pane_g4_ParamLimits

0xbd89,	// (0x0004dab2) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x000512dd) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x000512dd) listscroll_popup_colour_pane_g

0x2cc9,	// (0x000449f2) scroll_pane_cp6_ParamLimits

0x2cc9,	// (0x000449f2) scroll_pane_cp6

0xbd9d,	// (0x0004dac6) cell_large_graphic_colour_popup_pane_ParamLimits

0xbd9d,	// (0x0004dac6) cell_large_graphic_colour_popup_pane

0x2d00,	// (0x00044a29) cell_large_graphic_colour_none_popup_pane_t1

0xda9c,	// (0x0004f7c5) grid_highlight_pane_cp5

0x2d0f,	// (0x00044a38) cell_large_graphic_colour_popup_pane_g1

0x2d17,	// (0x00044a40) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x000512e6) cell_large_graphic_colour_popup_pane_g

0x2d1f,	// (0x00044a48) cell_large_graphic_colour_popup_pane_g2_copy1

0x2d28,	// (0x00044a51) grid_highlight_pane_cp4

0x2d30,	// (0x00044a59) bg_popup_window_pane_cp8_ParamLimits

0x2d30,	// (0x00044a59) bg_popup_window_pane_cp8

0x2d4b,	// (0x00044a74) popup_snote_single_text_window_g1_ParamLimits

0x2d4b,	// (0x00044a74) popup_snote_single_text_window_g1

0x2d5d,	// (0x00044a86) popup_snote_single_text_window_t1_ParamLimits

0x2d5d,	// (0x00044a86) popup_snote_single_text_window_t1

0x2d70,	// (0x00044a99) popup_snote_single_text_window_t2_ParamLimits

0x2d70,	// (0x00044a99) popup_snote_single_text_window_t2

0x2d83,	// (0x00044aac) popup_snote_single_text_window_t3_ParamLimits

0x2d83,	// (0x00044aac) popup_snote_single_text_window_t3

0x2dbc,	// (0x00044ae5) popup_snote_single_text_window_t4_ParamLimits

0x2dbc,	// (0x00044ae5) popup_snote_single_text_window_t4

0x2df0,	// (0x00044b19) popup_snote_single_text_window_t5_ParamLimits

0x2df0,	// (0x00044b19) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x000512eb) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x000512eb) popup_snote_single_text_window_t

0x2e1f,	// (0x00044b48) bg_popup_window_pane_cp9_ParamLimits

0x2e1f,	// (0x00044b48) bg_popup_window_pane_cp9

0x2d4b,	// (0x00044a74) popup_snote_single_graphic_window_g1_ParamLimits

0x2d4b,	// (0x00044a74) popup_snote_single_graphic_window_g1

0x2e2d,	// (0x00044b56) popup_snote_single_graphic_window_g2_ParamLimits

0x2e2d,	// (0x00044b56) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x000512f6) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x000512f6) popup_snote_single_graphic_window_g

0x2e39,	// (0x00044b62) popup_snote_single_graphic_window_t1_ParamLimits

0x2e39,	// (0x00044b62) popup_snote_single_graphic_window_t1

0x2e4c,	// (0x00044b75) popup_snote_single_graphic_window_t2_ParamLimits

0x2e4c,	// (0x00044b75) popup_snote_single_graphic_window_t2

0x2e5f,	// (0x00044b88) popup_snote_single_graphic_window_t3_ParamLimits

0x2e5f,	// (0x00044b88) popup_snote_single_graphic_window_t3

0x2e98,	// (0x00044bc1) popup_snote_single_graphic_window_t4_ParamLimits

0x2e98,	// (0x00044bc1) popup_snote_single_graphic_window_t4

0x2ecc,	// (0x00044bf5) popup_snote_single_graphic_window_t5_ParamLimits

0x2ecc,	// (0x00044bf5) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x000512fb) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x000512fb) popup_snote_single_graphic_window_t

0x62a5,	// (0x00047fce) grid_graphic_popup_pane_ParamLimits

0x62a5,	// (0x00047fce) grid_graphic_popup_pane

0x62d3,	// (0x00047ffc) listscroll_popup_graphic_pane_g1_ParamLimits

0x62d3,	// (0x00047ffc) listscroll_popup_graphic_pane_g1

0xdab2,	// (0x0004f7db) listscroll_popup_graphic_pane_g2_ParamLimits

0xdab2,	// (0x0004f7db) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c1,	// (0x000516ea) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c1,	// (0x000516ea) listscroll_popup_graphic_pane_g

0x62fb,	// (0x00048024) scroll_pane_cp5

0xda40,	// (0x0004f769) cell_graphic_popup_pane_ParamLimits

0xda40,	// (0x0004f769) cell_graphic_popup_pane

0x622e,	// (0x00047f57) cell_graphic_popup_pane_g1

0x6236,	// (0x00047f5f) cell_graphic_popup_pane_g2

0x2d1f,	// (0x00044a48) cell_graphic_popup_pane_g3

0x0002,

0xf9ba,	// (0x000516e3) cell_graphic_popup_pane_g

0x623f,	// (0x00047f68) cell_graphic_popup_pane_t2

0x2d28,	// (0x00044a51) grid_highlight_pane_cp3

0x2f0d,	// (0x00044c36) list_gen_pane_ParamLimits

0x2f0d,	// (0x00044c36) list_gen_pane

0x2f3f,	// (0x00044c68) scroll_pane

0xd9fb,	// (0x0004f724) bg_list_pane_g1_ParamLimits

0xd9fb,	// (0x0004f724) bg_list_pane_g1

0x61ab,	// (0x00047ed4) bg_list_pane_g2_ParamLimits

0x61ab,	// (0x00047ed4) bg_list_pane_g2

0x61be,	// (0x00047ee7) bg_list_pane_g3_ParamLimits

0x61be,	// (0x00047ee7) bg_list_pane_g3

0x61d0,	// (0x00047ef9) bg_list_pane_g4_ParamLimits

0x61d0,	// (0x00047ef9) bg_list_pane_g4

0xda16,	// (0x0004f73f) bg_list_pane_g5_ParamLimits

0xda16,	// (0x0004f73f) bg_list_pane_g5

0x0004,

0xf9af,	// (0x000516d8) bg_list_pane_g_ParamLimits

0xf9af,	// (0x000516d8) bg_list_pane_g

0xd9be,	// (0x0004f6e7) list_double2_graphic_large_graphic_pane_ParamLimits

0xd9be,	// (0x0004f6e7) list_double2_graphic_large_graphic_pane

0xd9be,	// (0x0004f6e7) list_double2_graphic_pane_ParamLimits

0xd9be,	// (0x0004f6e7) list_double2_graphic_pane

0xd9be,	// (0x0004f6e7) list_double2_large_graphic_pane_ParamLimits

0xd9be,	// (0x0004f6e7) list_double2_large_graphic_pane

0xd9be,	// (0x0004f6e7) list_double2_pane_ParamLimits

0xd9be,	// (0x0004f6e7) list_double2_pane

0xd9be,	// (0x0004f6e7) list_double_graphic_heading_pane_ParamLimits

0xd9be,	// (0x0004f6e7) list_double_graphic_heading_pane

0xd9be,	// (0x0004f6e7) list_double_graphic_pane_ParamLimits

0xd9be,	// (0x0004f6e7) list_double_graphic_pane

0xd9be,	// (0x0004f6e7) list_double_heading_pane_ParamLimits

0xd9be,	// (0x0004f6e7) list_double_heading_pane

0xd9be,	// (0x0004f6e7) list_double_large_graphic_pane_ParamLimits

0xd9be,	// (0x0004f6e7) list_double_large_graphic_pane

0xd9be,	// (0x0004f6e7) list_double_number_pane_ParamLimits

0xd9be,	// (0x0004f6e7) list_double_number_pane

0xd9be,	// (0x0004f6e7) list_double_pane_ParamLimits

0xd9be,	// (0x0004f6e7) list_double_pane

0xd9be,	// (0x0004f6e7) list_double_time_pane_ParamLimits

0xd9be,	// (0x0004f6e7) list_double_time_pane

0xd9be,	// (0x0004f6e7) list_setting_number_pane_ParamLimits

0xd9be,	// (0x0004f6e7) list_setting_number_pane

0xd9be,	// (0x0004f6e7) list_setting_pane_ParamLimits

0xd9be,	// (0x0004f6e7) list_setting_pane

0xd9d2,	// (0x0004f6fb) list_single_2graphic_pane_ParamLimits

0xd9d2,	// (0x0004f6fb) list_single_2graphic_pane

0xd9d2,	// (0x0004f6fb) list_single_graphic_heading_pane_ParamLimits

0xd9d2,	// (0x0004f6fb) list_single_graphic_heading_pane

0xd9d2,	// (0x0004f6fb) list_single_graphic_pane_ParamLimits

0xd9d2,	// (0x0004f6fb) list_single_graphic_pane

0xd9d2,	// (0x0004f6fb) list_single_heading_pane_ParamLimits

0xd9d2,	// (0x0004f6fb) list_single_heading_pane

0xd9d2,	// (0x0004f6fb) list_single_large_graphic_pane_ParamLimits

0xd9d2,	// (0x0004f6fb) list_single_large_graphic_pane

0xd9d2,	// (0x0004f6fb) list_single_number_heading_pane_ParamLimits

0xd9d2,	// (0x0004f6fb) list_single_number_heading_pane

0xd9d2,	// (0x0004f6fb) list_single_number_pane_ParamLimits

0xd9d2,	// (0x0004f6fb) list_single_number_pane

0xd9d2,	// (0x0004f6fb) list_single_pane_ParamLimits

0xd9d2,	// (0x0004f6fb) list_single_pane

0xda9c,	// (0x0004f7c5) list_highlight_pane_cp1

0x3ba7,	// (0x000458d0) list_single_pane_g1_ParamLimits

0x3ba7,	// (0x000458d0) list_single_pane_g1

0x14ce,	// (0x000431f7) list_single_pane_g2_ParamLimits

0x14ce,	// (0x000431f7) list_single_pane_g2

0x0001,

0xf5ee,	// (0x00051317) list_single_pane_g_ParamLimits

0xf5ee,	// (0x00051317) list_single_pane_g

0x053e,	// (0x00042267) list_single_pane_t1_ParamLimits

0x053e,	// (0x00042267) list_single_pane_t1

0x3ba7,	// (0x000458d0) list_single_number_pane_g1_ParamLimits

0x3ba7,	// (0x000458d0) list_single_number_pane_g1

0x14ce,	// (0x000431f7) list_single_number_pane_g2_ParamLimits

0x14ce,	// (0x000431f7) list_single_number_pane_g2

0x0001,

0xf5ee,	// (0x00051317) list_single_number_pane_g_ParamLimits

0xf5ee,	// (0x00051317) list_single_number_pane_g

0x040e,	// (0x00042137) list_single_number_pane_t1_ParamLimits

0x040e,	// (0x00042137) list_single_number_pane_t1

0xb68b,	// (0x0004d3b4) list_single_number_pane_t2_ParamLimits

0xb68b,	// (0x0004d3b4) list_single_number_pane_t2

0x0001,

0xf970,	// (0x00051699) list_single_number_pane_t_ParamLimits

0xf970,	// (0x00051699) list_single_number_pane_t

0xb053,	// (0x0004cd7c) list_single_graphic_pane_g1_ParamLimits

0xb053,	// (0x0004cd7c) list_single_graphic_pane_g1

0x3ba7,	// (0x000458d0) list_single_graphic_pane_g2_ParamLimits

0x3ba7,	// (0x000458d0) list_single_graphic_pane_g2

0x14ce,	// (0x000431f7) list_single_graphic_pane_g3_ParamLimits

0x14ce,	// (0x000431f7) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x00051306) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x00051306) list_single_graphic_pane_g

0x083b,	// (0x00042564) list_single_graphic_pane_t1_ParamLimits

0x083b,	// (0x00042564) list_single_graphic_pane_t1

0xb05f,	// (0x0004cd88) list_single_heading_pane_g1_ParamLimits

0xb05f,	// (0x0004cd88) list_single_heading_pane_g1

0x14ce,	// (0x000431f7) list_single_heading_pane_g2_ParamLimits

0x14ce,	// (0x000431f7) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0005130d) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0005130d) list_single_heading_pane_g

0xb072,	// (0x0004cd9b) list_single_heading_pane_t1_ParamLimits

0xb072,	// (0x0004cd9b) list_single_heading_pane_t1

0xbdc8,	// (0x0004daf1) list_single_heading_pane_t2_ParamLimits

0xbdc8,	// (0x0004daf1) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x00051312) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x00051312) list_single_heading_pane_t

0x3ba7,	// (0x000458d0) list_single_number_heading_pane_g1_ParamLimits

0x3ba7,	// (0x000458d0) list_single_number_heading_pane_g1

0x14ce,	// (0x000431f7) list_single_number_heading_pane_g2_ParamLimits

0x14ce,	// (0x000431f7) list_single_number_heading_pane_g2

0x0001,

0xf5ee,	// (0x00051317) list_single_number_heading_pane_g_ParamLimits

0xf5ee,	// (0x00051317) list_single_number_heading_pane_g

0x0554,	// (0x0004227d) list_single_number_heading_pane_t1_ParamLimits

0x0554,	// (0x0004227d) list_single_number_heading_pane_t1

0xb088,	// (0x0004cdb1) list_single_number_heading_pane_t2_ParamLimits

0xb088,	// (0x0004cdb1) list_single_number_heading_pane_t2

0x0518,	// (0x00042241) list_single_number_heading_pane_t3_ParamLimits

0x0518,	// (0x00042241) list_single_number_heading_pane_t3

0x0002,

0xf5f3,	// (0x0005131c) list_single_number_heading_pane_t_ParamLimits

0xf5f3,	// (0x0005131c) list_single_number_heading_pane_t

0xb09a,	// (0x0004cdc3) list_single_graphic_heading_pane_g1_ParamLimits

0xb09a,	// (0x0004cdc3) list_single_graphic_heading_pane_g1

0xbdda,	// (0x0004db03) list_single_graphic_heading_pane_g4_ParamLimits

0xbdda,	// (0x0004db03) list_single_graphic_heading_pane_g4

0x14ce,	// (0x000431f7) list_single_graphic_heading_pane_g5_ParamLimits

0x14ce,	// (0x000431f7) list_single_graphic_heading_pane_g5

0x0002,

0xf5fa,	// (0x00051323) list_single_graphic_heading_pane_g_ParamLimits

0xf5fa,	// (0x00051323) list_single_graphic_heading_pane_g

0x0554,	// (0x0004227d) list_single_graphic_heading_pane_t1_ParamLimits

0x0554,	// (0x0004227d) list_single_graphic_heading_pane_t1

0xb0b2,	// (0x0004cddb) list_single_graphic_heading_pane_t2_ParamLimits

0xb0b2,	// (0x0004cddb) list_single_graphic_heading_pane_t2

0x0001,

0xf601,	// (0x0005132a) list_single_graphic_heading_pane_t_ParamLimits

0xf601,	// (0x0005132a) list_single_graphic_heading_pane_t

0x18f2,	// (0x0004361b) list_single_large_graphic_pane_g1_ParamLimits

0x18f2,	// (0x0004361b) list_single_large_graphic_pane_g1

0x3ba7,	// (0x000458d0) list_single_large_graphic_pane_g2_ParamLimits

0x3ba7,	// (0x000458d0) list_single_large_graphic_pane_g2

0x14ce,	// (0x000431f7) list_single_large_graphic_pane_g3_ParamLimits

0x14ce,	// (0x000431f7) list_single_large_graphic_pane_g3

0x0002,

0xf606,	// (0x0005132f) list_single_large_graphic_pane_g_ParamLimits

0xf606,	// (0x0005132f) list_single_large_graphic_pane_g

0x5123,	// (0x00046e4c) wait_border_pane_g2_copy1

0xbdeb,	// (0x0004db14) list_single_large_graphic_pane_g4_cp2

0x0554,	// (0x0004227d) list_single_large_graphic_pane_t1_ParamLimits

0x0554,	// (0x0004227d) list_single_large_graphic_pane_t1

0x2ff2,	// (0x00044d1b) list_double_pane_g1_ParamLimits

0x2ff2,	// (0x00044d1b) list_double_pane_g1

0xbdf3,	// (0x0004db1c) list_double_pane_g2_ParamLimits

0xbdf3,	// (0x0004db1c) list_double_pane_g2

0x0001,

0xf60d,	// (0x00051336) list_double_pane_g_ParamLimits

0xf60d,	// (0x00051336) list_double_pane_g

0xb0ca,	// (0x0004cdf3) list_double_pane_t1_ParamLimits

0xb0ca,	// (0x0004cdf3) list_double_pane_t1

0xb0e0,	// (0x0004ce09) list_double_pane_t2_ParamLimits

0xb0e0,	// (0x0004ce09) list_double_pane_t2

0x0001,

0xf612,	// (0x0005133b) list_double_pane_t_ParamLimits

0xf612,	// (0x0005133b) list_double_pane_t

0xb0f2,	// (0x0004ce1b) list_double2_pane_g1_ParamLimits

0xb0f2,	// (0x0004ce1b) list_double2_pane_g1

0xb103,	// (0x0004ce2c) list_double2_pane_g2_ParamLimits

0xb103,	// (0x0004ce2c) list_double2_pane_g2

0x0001,

0xf617,	// (0x00051340) list_double2_pane_g_ParamLimits

0xf617,	// (0x00051340) list_double2_pane_g

0xb10f,	// (0x0004ce38) list_double2_pane_t1_ParamLimits

0xb10f,	// (0x0004ce38) list_double2_pane_t1

0xb125,	// (0x0004ce4e) list_double2_pane_t2_ParamLimits

0xb125,	// (0x0004ce4e) list_double2_pane_t2

0x0001,

0xf61c,	// (0x00051345) list_double2_pane_t_ParamLimits

0xf61c,	// (0x00051345) list_double2_pane_t

0x2ff2,	// (0x00044d1b) list_double_number_pane_g1_ParamLimits

0x2ff2,	// (0x00044d1b) list_double_number_pane_g1

0xbdf3,	// (0x0004db1c) list_double_number_pane_g2_ParamLimits

0xbdf3,	// (0x0004db1c) list_double_number_pane_g2

0x0001,

0xf60d,	// (0x00051336) list_double_number_pane_g_ParamLimits

0xf60d,	// (0x00051336) list_double_number_pane_g

0xb137,	// (0x0004ce60) list_double_number_pane_t1_ParamLimits

0xb137,	// (0x0004ce60) list_double_number_pane_t1

0xb149,	// (0x0004ce72) list_double_number_pane_t2_ParamLimits

0xb149,	// (0x0004ce72) list_double_number_pane_t2

0xb15f,	// (0x0004ce88) list_double_number_pane_t3_ParamLimits

0xb15f,	// (0x0004ce88) list_double_number_pane_t3

0x0002,

0xf621,	// (0x0005134a) list_double_number_pane_t_ParamLimits

0xf621,	// (0x0005134a) list_double_number_pane_t

0xb171,	// (0x0004ce9a) list_double_graphic_pane_g1_ParamLimits

0xb171,	// (0x0004ce9a) list_double_graphic_pane_g1

0xb17d,	// (0x0004cea6) list_double_graphic_pane_g2_ParamLimits

0xb17d,	// (0x0004cea6) list_double_graphic_pane_g2

0xb18c,	// (0x0004ceb5) list_double_graphic_pane_g3_ParamLimits

0xb18c,	// (0x0004ceb5) list_double_graphic_pane_g3

0x0003,

0xf628,	// (0x00051351) list_double_graphic_pane_g_ParamLimits

0xf628,	// (0x00051351) list_double_graphic_pane_g

0xb1a4,	// (0x0004cecd) list_double_graphic_pane_t1_ParamLimits

0xb1a4,	// (0x0004cecd) list_double_graphic_pane_t1

0xb1ba,	// (0x0004cee3) list_double_graphic_pane_t2_ParamLimits

0xb1ba,	// (0x0004cee3) list_double_graphic_pane_t2

0x0001,

0xf631,	// (0x0005135a) list_double_graphic_pane_t_ParamLimits

0xf631,	// (0x0005135a) list_double_graphic_pane_t

0xb1cc,	// (0x0004cef5) list_double2_graphic_pane_g1_ParamLimits

0xb1cc,	// (0x0004cef5) list_double2_graphic_pane_g1

0xb1d8,	// (0x0004cf01) list_double2_graphic_pane_g2_ParamLimits

0xb1d8,	// (0x0004cf01) list_double2_graphic_pane_g2

0xb1e4,	// (0x0004cf0d) list_double2_graphic_pane_g3_ParamLimits

0xb1e4,	// (0x0004cf0d) list_double2_graphic_pane_g3

0x0002,

0xf636,	// (0x0005135f) list_double2_graphic_pane_g_ParamLimits

0xf636,	// (0x0005135f) list_double2_graphic_pane_g

0xb1f0,	// (0x0004cf19) list_double2_graphic_pane_t1_ParamLimits

0xb1f0,	// (0x0004cf19) list_double2_graphic_pane_t1

0xb206,	// (0x0004cf2f) list_double2_graphic_pane_t2_ParamLimits

0xb206,	// (0x0004cf2f) list_double2_graphic_pane_t2

0x0001,

0xf63d,	// (0x00051366) list_double2_graphic_pane_t_ParamLimits

0xf63d,	// (0x00051366) list_double2_graphic_pane_t

0xb218,	// (0x0004cf41) list_double_large_graphic_pane_g1_ParamLimits

0xb218,	// (0x0004cf41) list_double_large_graphic_pane_g1

0xb243,	// (0x0004cf6c) list_double_large_graphic_pane_g2_ParamLimits

0xb243,	// (0x0004cf6c) list_double_large_graphic_pane_g2

0xbdf3,	// (0x0004db1c) list_double_large_graphic_pane_g3_ParamLimits

0xbdf3,	// (0x0004db1c) list_double_large_graphic_pane_g3

0xb259,	// (0x0004cf82) list_double_large_graphic_pane_g4_ParamLimits

0xb259,	// (0x0004cf82) list_double_large_graphic_pane_g4

0x0004,

0xf642,	// (0x0005136b) list_double_large_graphic_pane_g_ParamLimits

0xf642,	// (0x0005136b) list_double_large_graphic_pane_g

0xb26c,	// (0x0004cf95) list_double_large_graphic_pane_t1_ParamLimits

0xb26c,	// (0x0004cf95) list_double_large_graphic_pane_t1

0xb285,	// (0x0004cfae) list_double_large_graphic_pane_t2_ParamLimits

0xb285,	// (0x0004cfae) list_double_large_graphic_pane_t2

0x0001,

0xf64d,	// (0x00051376) list_double_large_graphic_pane_t_ParamLimits

0xf64d,	// (0x00051376) list_double_large_graphic_pane_t

0xbdff,	// (0x0004db28) list_double2_large_graphic_pane_g1_ParamLimits

0xbdff,	// (0x0004db28) list_double2_large_graphic_pane_g1

0xb297,	// (0x0004cfc0) list_double2_large_graphic_pane_g2_ParamLimits

0xb297,	// (0x0004cfc0) list_double2_large_graphic_pane_g2

0xb1e4,	// (0x0004cf0d) list_double2_large_graphic_pane_g3_ParamLimits

0xb1e4,	// (0x0004cf0d) list_double2_large_graphic_pane_g3

0x0002,

0xf652,	// (0x0005137b) list_double2_large_graphic_pane_g_ParamLimits

0xf652,	// (0x0005137b) list_double2_large_graphic_pane_g

0xb2a8,	// (0x0004cfd1) list_double2_large_graphic_pane_t1_ParamLimits

0xb2a8,	// (0x0004cfd1) list_double2_large_graphic_pane_t1

0xb2be,	// (0x0004cfe7) list_double2_large_graphic_pane_t2_ParamLimits

0xb2be,	// (0x0004cfe7) list_double2_large_graphic_pane_t2

0x0001,

0xf659,	// (0x00051382) list_double2_large_graphic_pane_t_ParamLimits

0xf659,	// (0x00051382) list_double2_large_graphic_pane_t

0xb2d0,	// (0x0004cff9) list_double_heading_pane_g1_ParamLimits

0xb2d0,	// (0x0004cff9) list_double_heading_pane_g1

0xb2e1,	// (0x0004d00a) list_double_heading_pane_g2_ParamLimits

0xb2e1,	// (0x0004d00a) list_double_heading_pane_g2

0x0001,

0xf65e,	// (0x00051387) list_double_heading_pane_g_ParamLimits

0xf65e,	// (0x00051387) list_double_heading_pane_g

0xb2ed,	// (0x0004d016) list_double_heading_pane_t1_ParamLimits

0xb2ed,	// (0x0004d016) list_double_heading_pane_t1

0xb125,	// (0x0004ce4e) list_double_heading_pane_t2_ParamLimits

0xb125,	// (0x0004ce4e) list_double_heading_pane_t2

0x0001,

0xf663,	// (0x0005138c) list_double_heading_pane_t_ParamLimits

0xf663,	// (0x0005138c) list_double_heading_pane_t

0xb303,	// (0x0004d02c) list_double_graphic_heading_pane_g1_ParamLimits

0xb303,	// (0x0004d02c) list_double_graphic_heading_pane_g1

0xb2d0,	// (0x0004cff9) list_double_graphic_heading_pane_g2_ParamLimits

0xb2d0,	// (0x0004cff9) list_double_graphic_heading_pane_g2

0xb2e1,	// (0x0004d00a) list_double_graphic_heading_pane_g3_ParamLimits

0xb2e1,	// (0x0004d00a) list_double_graphic_heading_pane_g3

0x0002,

0xf668,	// (0x00051391) list_double_graphic_heading_pane_g_ParamLimits

0xf668,	// (0x00051391) list_double_graphic_heading_pane_g

0xb30f,	// (0x0004d038) list_double_graphic_heading_pane_t1_ParamLimits

0xb30f,	// (0x0004d038) list_double_graphic_heading_pane_t1

0xb206,	// (0x0004cf2f) list_double_graphic_heading_pane_t2_ParamLimits

0xb206,	// (0x0004cf2f) list_double_graphic_heading_pane_t2

0x0001,

0xf66f,	// (0x00051398) list_double_graphic_heading_pane_t_ParamLimits

0xf66f,	// (0x00051398) list_double_graphic_heading_pane_t

0xb325,	// (0x0004d04e) list_double_time_pane_g1_ParamLimits

0xb325,	// (0x0004d04e) list_double_time_pane_g1

0xb336,	// (0x0004d05f) list_double_time_pane_g2_ParamLimits

0xb336,	// (0x0004d05f) list_double_time_pane_g2

0x0001,

0xf674,	// (0x0005139d) list_double_time_pane_g_ParamLimits

0xf674,	// (0x0005139d) list_double_time_pane_g

0xb342,	// (0x0004d06b) list_double_time_pane_t1_ParamLimits

0xb342,	// (0x0004d06b) list_double_time_pane_t1

0xb358,	// (0x0004d081) list_double_time_pane_t2_ParamLimits

0xb358,	// (0x0004d081) list_double_time_pane_t2

0xb36a,	// (0x0004d093) list_double_time_pane_t3_ParamLimits

0xb36a,	// (0x0004d093) list_double_time_pane_t3

0xb37c,	// (0x0004d0a5) list_double_time_pane_t4_ParamLimits

0xb37c,	// (0x0004d0a5) list_double_time_pane_t4

0x0003,

0xf679,	// (0x000513a2) list_double_time_pane_t_ParamLimits

0xf679,	// (0x000513a2) list_double_time_pane_t

0xb38e,	// (0x0004d0b7) list_setting_pane_g1_ParamLimits

0xb38e,	// (0x0004d0b7) list_setting_pane_g1

0xb103,	// (0x0004ce2c) list_setting_pane_g2_ParamLimits

0xb103,	// (0x0004ce2c) list_setting_pane_g2

0x0001,

0xf682,	// (0x000513ab) list_setting_pane_g_ParamLimits

0xf682,	// (0x000513ab) list_setting_pane_g

0xb39a,	// (0x0004d0c3) list_setting_pane_t1_ParamLimits

0xb39a,	// (0x0004d0c3) list_setting_pane_t1

0xb3b4,	// (0x0004d0dd) list_setting_pane_t2_ParamLimits

0xb3b4,	// (0x0004d0dd) list_setting_pane_t2

0x0002,

0xf687,	// (0x000513b0) list_setting_pane_t_ParamLimits

0xf687,	// (0x000513b0) list_setting_pane_t

0xb3f3,	// (0x0004d11c) set_value_pane_cp_ParamLimits

0xb3f3,	// (0x0004d11c) set_value_pane_cp

0xb401,	// (0x0004d12a) list_setting_number_pane_g1_ParamLimits

0xb401,	// (0x0004d12a) list_setting_number_pane_g1

0xb40d,	// (0x0004d136) list_setting_number_pane_g2_ParamLimits

0xb40d,	// (0x0004d136) list_setting_number_pane_g2

0x0001,

0xf68e,	// (0x000513b7) list_setting_number_pane_g_ParamLimits

0xf68e,	// (0x000513b7) list_setting_number_pane_g

0xb419,	// (0x0004d142) list_setting_number_pane_t1_ParamLimits

0xb419,	// (0x0004d142) list_setting_number_pane_t1

0xb432,	// (0x0004d15b) list_setting_number_pane_t2_ParamLimits

0xb432,	// (0x0004d15b) list_setting_number_pane_t2

0xb44c,	// (0x0004d175) list_setting_number_pane_t3_ParamLimits

0xb44c,	// (0x0004d175) list_setting_number_pane_t3

0x0003,

0xf693,	// (0x000513bc) list_setting_number_pane_t_ParamLimits

0xf693,	// (0x000513bc) list_setting_number_pane_t

0xb3f3,	// (0x0004d11c) set_value_pane_ParamLimits

0xb3f3,	// (0x0004d11c) set_value_pane

0x2f7f,	// (0x00044ca8) bg_set_opt_pane_ParamLimits

0x2f7f,	// (0x00044ca8) bg_set_opt_pane

0x00be,	// (0x00041de7) set_value_pane_t1

0x2fa0,	// (0x00044cc9) slider_set_pane_cp3

0x2fa9,	// (0x00044cd2) volume_small_pane_cp

0x2fb2,	// (0x00044cdb) list_form_gen_pane

0x2fbb,	// (0x00044ce4) scroll_pane_cp8

0xb48f,	// (0x0004d1b8) form_field_data_pane_ParamLimits

0xb48f,	// (0x0004d1b8) form_field_data_pane

0xb4ac,	// (0x0004d1d5) form_field_data_wide_pane_ParamLimits

0xb4ac,	// (0x0004d1d5) form_field_data_wide_pane

0xb4d0,	// (0x0004d1f9) form_field_popup_pane_ParamLimits

0xb4d0,	// (0x0004d1f9) form_field_popup_pane

0x0145,	// (0x00041e6e) form_field_popup_wide_pane_ParamLimits

0x0145,	// (0x00041e6e) form_field_popup_wide_pane

0x0166,	// (0x00041e8f) form_field_slider_pane_ParamLimits

0x0166,	// (0x00041e8f) form_field_slider_pane

0x0179,	// (0x00041ea2) form_field_slider_wide_pane_ParamLimits

0x0179,	// (0x00041ea2) form_field_slider_wide_pane

0x2fcc,	// (0x00044cf5) data_form_pane

0xb4fc,	// (0x0004d225) form_field_data_pane_t1

0x2fd8,	// (0x00044d01) input_focus_pane

0x2fe6,	// (0x00044d0f) data_form_wide_pane

0x01bc,	// (0x00041ee5) form_field_data_wide_pane_t1

0x2d3d,	// (0x00044a66) input_focus_pane_cp6

0xb516,	// (0x0004d23f) form_field_popup_pane_t1

0x2fd8,	// (0x00044d01) input_focus_pane_cp7

0x3012,	// (0x00044d3b) list_form_pane

0x0200,	// (0x00041f29) form_field_popup_wide_pane_t1

0x2fd8,	// (0x00044d01) input_focus_pane_cp8

0x301e,	// (0x00044d47) list_form_wide_pane

0xb538,	// (0x0004d261) form_field_slider_pane_t1_ParamLimits

0xb538,	// (0x0004d261) form_field_slider_pane_t1

0xb550,	// (0x0004d279) form_field_slider_pane_t2_ParamLimits

0xb550,	// (0x0004d279) form_field_slider_pane_t2

0x0001,

0xf6a3,	// (0x000513cc) form_field_slider_pane_t_ParamLimits

0xf6a3,	// (0x000513cc) form_field_slider_pane_t

0x29c1,	// (0x000446ea) input_focus_pane_cp9_ParamLimits

0x29c1,	// (0x000446ea) input_focus_pane_cp9

0xb565,	// (0x0004d28e) slider_cont_pane_ParamLimits

0xb565,	// (0x0004d28e) slider_cont_pane

0x302d,	// (0x00044d56) form_field_slider_wide_pane_t1_ParamLimits

0x302d,	// (0x00044d56) form_field_slider_wide_pane_t1

0x025e,	// (0x00041f87) form_field_slider_wide_pane_t2_ParamLimits

0x025e,	// (0x00041f87) form_field_slider_wide_pane_t2

0x0001,

0xf6a8,	// (0x000513d1) form_field_slider_wide_pane_t_ParamLimits

0xf6a8,	// (0x000513d1) form_field_slider_wide_pane_t

0x29c1,	// (0x000446ea) input_focus_pane_cp10_ParamLimits

0x29c1,	// (0x000446ea) input_focus_pane_cp10

0xb579,	// (0x0004d2a2) slider_cont_pane_cp1_ParamLimits

0xb579,	// (0x0004d2a2) slider_cont_pane_cp1

0xb58d,	// (0x0004d2b6) slider_form_pane_cp

0x303f,	// (0x00044d68) input_focus_pane_g1

0x3047,	// (0x00044d70) input_focus_pane_g2

0x304f,	// (0x00044d78) input_focus_pane_g3

0x3057,	// (0x00044d80) input_focus_pane_g4

0x305f,	// (0x00044d88) input_focus_pane_g5

0x3067,	// (0x00044d90) input_focus_pane_g6

0x306f,	// (0x00044d98) input_focus_pane_g7

0x3077,	// (0x00044da0) input_focus_pane_g8

0x307f,	// (0x00044da8) input_focus_pane_g9

0xda92,	// (0x0004f7bb) input_focus_pane_g10

0x0009,

0xf6ad,	// (0x000513d6) input_focus_pane_g

0x512c,	// (0x00046e55) wait_border_pane_g3_copy1

0xb595,	// (0x0004d2be) data_form_pane_t1

0xda92,	// (0x0004f7bb) wait_anim_pane_g1_copy1

0xb69d,	// (0x0004d3c6) data_form_wide_pane_t1

0x02ab,	// (0x00041fd4) list_form_graphic_pane_cp_ParamLimits

0x02ab,	// (0x00041fd4) list_form_graphic_pane_cp

0x60b1,	// (0x00047dda) slider_form_pane_g1

0x60ba,	// (0x00047de3) slider_form_pane_g2

0x0006,

0xf9a0,	// (0x000516c9) slider_form_pane_g

0xb5b1,	// (0x0004d2da) list_form_graphic_pane_ParamLimits

0xb5b1,	// (0x0004d2da) list_form_graphic_pane

0x02bd,	// (0x00041fe6) list_form_graphic_pane_g1

0x02c5,	// (0x00041fee) list_form_graphic_pane_t1_ParamLimits

0x02c5,	// (0x00041fee) list_form_graphic_pane_t1

0x2745,	// (0x0004446e) list_highlight_pane_cp5_ParamLimits

0x2745,	// (0x0004446e) list_highlight_pane_cp5

0xb5c2,	// (0x0004d2eb) find_pane_g1

0x3087,	// (0x00044db0) input_find_pane

0xb5cb,	// (0x0004d2f4) input_find_pane_g1_ParamLimits

0xb5cb,	// (0x0004d2f4) input_find_pane_g1

0xb5d7,	// (0x0004d300) input_find_pane_t1_ParamLimits

0xb5d7,	// (0x0004d300) input_find_pane_t1

0xb5ec,	// (0x0004d315) input_find_pane_t2_ParamLimits

0xb5ec,	// (0x0004d315) input_find_pane_t2

0x0001,

0xf6c2,	// (0x000513eb) input_find_pane_t_ParamLimits

0xf6c2,	// (0x000513eb) input_find_pane_t

0x3090,	// (0x00044db9) input_focus_pane_cp5_ParamLimits

0x3090,	// (0x00044db9) input_focus_pane_cp5

0xbe17,	// (0x0004db40) bg_popup_window_pane_cp2_ParamLimits

0xbe17,	// (0x0004db40) bg_popup_window_pane_cp2

0xbe24,	// (0x0004db4d) listscroll_menu_pane_ParamLimits

0xbe24,	// (0x0004db4d) listscroll_menu_pane

0xbe30,	// (0x0004db59) popup_submenu_window_ParamLimits

0xbe30,	// (0x0004db59) popup_submenu_window

0x30f3,	// (0x00044e1c) find_popup_pane_g1

0x30fb,	// (0x00044e24) input_popup_find_pane_cp

0x3090,	// (0x00044db9) input_focus_pane_cp4_ParamLimits

0x3090,	// (0x00044db9) input_focus_pane_cp4

0x3113,	// (0x00044e3c) input_popup_find_pane_t1_ParamLimits

0x3113,	// (0x00044e3c) input_popup_find_pane_t1

0xda9c,	// (0x0004f7c5) bg_popup_sub_pane_cp

0x3141,	// (0x00044e6a) listscroll_popup_sub_pane

0x3149,	// (0x00044e72) list_submenu_pane_ParamLimits

0x3149,	// (0x00044e72) list_submenu_pane

0x315a,	// (0x00044e83) scroll_pane_cp4

0x3162,	// (0x00044e8b) list_single_popup_submenu_pane_ParamLimits

0x3162,	// (0x00044e8b) list_single_popup_submenu_pane

0x3177,	// (0x00044ea0) list_single_popup_submenu_pane_g1

0x317f,	// (0x00044ea8) list_single_popup_submenu_pane_t1_ParamLimits

0x317f,	// (0x00044ea8) list_single_popup_submenu_pane_t1

0x29c1,	// (0x000446ea) bg_active_tab_pane_cp1_ParamLimits

0x29c1,	// (0x000446ea) bg_active_tab_pane_cp1

0xbe6e,	// (0x0004db97) tabs_2_active_pane_g1

0xbe76,	// (0x0004db9f) tabs_2_active_pane_t1

0x29c1,	// (0x000446ea) bg_passive_tab_pane_cp1_ParamLimits

0x29c1,	// (0x000446ea) bg_passive_tab_pane_cp1

0xbe6e,	// (0x0004db97) tabs_2_passive_pane_g1

0xbe76,	// (0x0004db9f) tabs_2_passive_pane_t1

0x2745,	// (0x0004446e) bg_active_tab_pane_cp4

0xbe88,	// (0x0004dbb1) tabs_2_long_active_pane_t1

0x3fb4,	// (0x00045cdd) bg_passive_tab_pane_cp4

0x14ff,	// (0x00043228) list_single_midp_graphic_pane_g4_ParamLimits

0x2745,	// (0x0004446e) bg_active_tab_pane_cp5

0xbe9b,	// (0x0004dbc4) tabs_3_long_active_pane_t1

0x3fb4,	// (0x00045cdd) bg_passive_tab_pane_cp5

0x14ff,	// (0x00043228) list_single_midp_graphic_pane_g4

0x2745,	// (0x0004446e) bg_popup_window_pane_cp13_ParamLimits

0x2745,	// (0x0004446e) bg_popup_window_pane_cp13

0x31f6,	// (0x00044f1f) listscroll_popup_fast_pane_ParamLimits

0x31f6,	// (0x00044f1f) listscroll_popup_fast_pane

0x3205,	// (0x00044f2e) grid_popup_fast_pane_ParamLimits

0x3205,	// (0x00044f2e) grid_popup_fast_pane

0x3217,	// (0x00044f40) scroll_pane_cp9_ParamLimits

0x3217,	// (0x00044f40) scroll_pane_cp9

0x7a07,	// (0x00049730) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7a07,	// (0x00049730) list_single_graphic_hl_pane_t1_cp2

0x323b,	// (0x00044f64) input_focus_pane_cp20_ParamLimits

0x323b,	// (0x00044f64) input_focus_pane_cp20

0x3249,	// (0x00044f72) query_popup_data_pane_t1_ParamLimits

0x3249,	// (0x00044f72) query_popup_data_pane_t1

0x325c,	// (0x00044f85) query_popup_data_pane_t2_ParamLimits

0x325c,	// (0x00044f85) query_popup_data_pane_t2

0x32a2,	// (0x00044fcb) query_popup_data_pane_t3_ParamLimits

0x32a2,	// (0x00044fcb) query_popup_data_pane_t3

0x32e3,	// (0x0004500c) query_popup_data_pane_t4_ParamLimits

0x32e3,	// (0x0004500c) query_popup_data_pane_t4

0x331f,	// (0x00045048) query_popup_data_pane_t5_ParamLimits

0x331f,	// (0x00045048) query_popup_data_pane_t5

0x0004,

0xf6c7,	// (0x000513f0) query_popup_data_pane_t_ParamLimits

0xf6c7,	// (0x000513f0) query_popup_data_pane_t

0x303f,	// (0x00044d68) bg_set_opt_pane_g1

0x3047,	// (0x00044d70) bg_set_opt_pane_g2

0x304f,	// (0x00044d78) bg_set_opt_pane_g3

0x3057,	// (0x00044d80) bg_set_opt_pane_g4

0x305f,	// (0x00044d88) bg_set_opt_pane_g5

0x3067,	// (0x00044d90) bg_set_opt_pane_g6

0x306f,	// (0x00044d98) bg_set_opt_pane_g7

0x3077,	// (0x00044da0) bg_set_opt_pane_g8

0x307f,	// (0x00044da8) bg_set_opt_pane_g9

0x0008,

0xf6d2,	// (0x000513fb) bg_set_opt_pane_g

0x115b,	// (0x00042e84) control_top_pane_stacon_ParamLimits

0x115b,	// (0x00042e84) control_top_pane_stacon

0x11ae,	// (0x00042ed7) signal_pane_stacon_ParamLimits

0x11ae,	// (0x00042ed7) signal_pane_stacon

0x38cb,	// (0x000455f4) stacon_top_pane_g1_ParamLimits

0x38cb,	// (0x000455f4) stacon_top_pane_g1

0x11d3,	// (0x00042efc) title_pane_stacon_ParamLimits

0x11d3,	// (0x00042efc) title_pane_stacon

0x11fd,	// (0x00042f26) uni_indicator_pane_stacon_ParamLimits

0x11fd,	// (0x00042f26) uni_indicator_pane_stacon

0x1215,	// (0x00042f3e) battery_pane_stacon_ParamLimits

0x1215,	// (0x00042f3e) battery_pane_stacon

0x1259,	// (0x00042f82) control_bottom_pane_stacon_ParamLimits

0x1259,	// (0x00042f82) control_bottom_pane_stacon

0x127c,	// (0x00042fa5) navi_pane_stacon_ParamLimits

0x127c,	// (0x00042fa5) navi_pane_stacon

0x38ed,	// (0x00045616) stacon_bottom_pane_g1_ParamLimits

0x38ed,	// (0x00045616) stacon_bottom_pane_g1

0x0e9a,	// (0x00042bc3) aid_levels_signal_lsc_ParamLimits

0x0e9a,	// (0x00042bc3) aid_levels_signal_lsc

0x0eb1,	// (0x00042bda) signal_pane_stacon_g1_ParamLimits

0x0eb1,	// (0x00042bda) signal_pane_stacon_g1

0x0ec5,	// (0x00042bee) signal_pane_stacon_g2_ParamLimits

0x0ec5,	// (0x00042bee) signal_pane_stacon_g2

0x0001,

0xf6e5,	// (0x0005140e) signal_pane_stacon_g_ParamLimits

0xf6e5,	// (0x0005140e) signal_pane_stacon_g

0x0efa,	// (0x00042c23) title_pane_stacon_t1_ParamLimits

0x0efa,	// (0x00042c23) title_pane_stacon_t1

0x3363,	// (0x0004508c) uni_indicator_pane_stacon_g1

0x336d,	// (0x00045096) uni_indicator_pane_stacon_g2

0x3377,	// (0x000450a0) uni_indicator_pane_stacon_g3

0x3381,	// (0x000450aa) uni_indicator_pane_stacon_g4

0x0003,

0xf6f1,	// (0x0005141a) uni_indicator_pane_stacon_g

0x0f1f,	// (0x00042c48) control_top_pane_stacon_g1

0x0f27,	// (0x00042c50) control_top_pane_stacon_t1_ParamLimits

0x0f27,	// (0x00042c50) control_top_pane_stacon_t1

0x0f5e,	// (0x00042c87) aid_levels_battery_lsc_ParamLimits

0x0f5e,	// (0x00042c87) aid_levels_battery_lsc

0x0f76,	// (0x00042c9f) battery_pane_stacon_g1_ParamLimits

0x0f76,	// (0x00042c9f) battery_pane_stacon_g1

0x0f89,	// (0x00042cb2) battery_pane_stacon_g2_ParamLimits

0x0f89,	// (0x00042cb2) battery_pane_stacon_g2

0x0001,

0xf6fa,	// (0x00051423) battery_pane_stacon_g_ParamLimits

0xf6fa,	// (0x00051423) battery_pane_stacon_g

0x0fc7,	// (0x00042cf0) navi_icon_pane_stacon

0x0fdb,	// (0x00042d04) navi_navi_pane_stacon

0x0fc7,	// (0x00042cf0) navi_text_pane_stacon

0x0f1f,	// (0x00042c48) control_bottom_pane_stacon_g1

0x0ff1,	// (0x00042d1a) control_bottom_pane_stacon_t1_ParamLimits

0x0ff1,	// (0x00042d1a) control_bottom_pane_stacon_t1

0xbead,	// (0x0004dbd6) grid_app_pane_ParamLimits

0xbead,	// (0x0004dbd6) grid_app_pane

0xbee5,	// (0x0004dc0e) scroll_pane_cp15_ParamLimits

0xbee5,	// (0x0004dc0e) scroll_pane_cp15

0xbf02,	// (0x0004dc2b) cell_app_pane_ParamLimits

0xbf02,	// (0x0004dc2b) cell_app_pane

0xbf43,	// (0x0004dc6c) cell_app_pane_g1_ParamLimits

0xbf43,	// (0x0004dc6c) cell_app_pane_g1

0x342e,	// (0x00045157) cell_app_pane_g2_ParamLimits

0x342e,	// (0x00045157) cell_app_pane_g2

0x0001,

0xf6ff,	// (0x00051428) cell_app_pane_g_ParamLimits

0xf6ff,	// (0x00051428) cell_app_pane_g

0x343a,	// (0x00045163) cell_app_pane_t1_ParamLimits

0x343a,	// (0x00045163) cell_app_pane_t1

0x344c,	// (0x00045175) grid_highlight_pane_ParamLimits

0x344c,	// (0x00045175) grid_highlight_pane

0x303f,	// (0x00044d68) cell_highlight_pane_g1

0x3047,	// (0x00044d70) cell_highlight_pane_g2

0x304f,	// (0x00044d78) cell_highlight_pane_g3

0x3057,	// (0x00044d80) cell_highlight_pane_g4

0x305f,	// (0x00044d88) cell_highlight_pane_g5

0x3067,	// (0x00044d90) cell_highlight_pane_g6

0x306f,	// (0x00044d98) cell_highlight_pane_g7

0x3077,	// (0x00044da0) cell_highlight_pane_g8

0x307f,	// (0x00044da8) cell_highlight_pane_g9

0xda92,	// (0x0004f7bb) cell_highlight_pane_g10

0x0009,

0xf6ad,	// (0x000513d6) cell_highlight_pane_g

0x345d,	// (0x00045186) bg_scroll_pane

0x103b,	// (0x00042d64) scroll_handle_pane

0x34a4,	// (0x000451cd) scroll_bg_pane_g1

0x34b9,	// (0x000451e2) scroll_bg_pane_g2

0x34d1,	// (0x000451fa) scroll_bg_pane_g3

0x0002,

0xf704,	// (0x0005142d) scroll_bg_pane_g

0x34e6,	// (0x0004520f) scroll_handle_focus_pane_ParamLimits

0x34e6,	// (0x0004520f) scroll_handle_focus_pane

0x34a4,	// (0x000451cd) scroll_handle_pane_g1

0x34f3,	// (0x0004521c) scroll_handle_pane_g2

0x34d1,	// (0x000451fa) scroll_handle_pane_g3

0x0002,

0xf70b,	// (0x00051434) scroll_handle_pane_g

0x3090,	// (0x00044db9) bg_popup_sub_pane_cp21_ParamLimits

0x3090,	// (0x00044db9) bg_popup_sub_pane_cp21

0x3507,	// (0x00045230) popup_fep_japan_predictive_window_t1_ParamLimits

0x3507,	// (0x00045230) popup_fep_japan_predictive_window_t1

0x351e,	// (0x00045247) popup_fep_japan_predictive_window_t2_ParamLimits

0x351e,	// (0x00045247) popup_fep_japan_predictive_window_t2

0x3551,	// (0x0004527a) popup_fep_japan_predictive_window_t3_ParamLimits

0x3551,	// (0x0004527a) popup_fep_japan_predictive_window_t3

0x0002,

0xf712,	// (0x0005143b) popup_fep_japan_predictive_window_t_ParamLimits

0xf712,	// (0x0005143b) popup_fep_japan_predictive_window_t

0xda9c,	// (0x0004f7c5) bg_popup_sub_pane_cp23

0x3588,	// (0x000452b1) listscroll_japin_cand_pane

0x3590,	// (0x000452b9) popup_fep_japan_candidate_window_t1

0x359e,	// (0x000452c7) candidate_pane_ParamLimits

0x359e,	// (0x000452c7) candidate_pane

0x35b0,	// (0x000452d9) scroll_pane_cp30

0x35ba,	// (0x000452e3) list_single_popup_jap_candidate_pane_ParamLimits

0x35ba,	// (0x000452e3) list_single_popup_jap_candidate_pane

0xda9c,	// (0x0004f7c5) list_highlight_pane_cp30

0x35ce,	// (0x000452f7) list_single_popup_jap_candidate_pane_t1

0xbf70,	// (0x0004dc99) level_1_signal

0xbf82,	// (0x0004dcab) level_2_signal

0xbf95,	// (0x0004dcbe) level_3_signal

0xbfa8,	// (0x0004dcd1) level_4_signal

0xbfbb,	// (0x0004dce4) level_5_signal

0xbfce,	// (0x0004dcf7) level_6_signal

0xbfe1,	// (0x0004dd0a) level_7_signal

0xbf70,	// (0x0004dc99) level_1_battery

0xbf82,	// (0x0004dcab) level_2_battery

0xbf95,	// (0x0004dcbe) level_3_battery

0xbfa8,	// (0x0004dcd1) level_4_battery

0xbfbb,	// (0x0004dce4) level_5_battery

0xbfce,	// (0x0004dcf7) level_6_battery

0xbfe1,	// (0x0004dd0a) level_7_battery

0x3650,	// (0x00045379) list_menu_pane_ParamLimits

0x3650,	// (0x00045379) list_menu_pane

0x3661,	// (0x0004538a) scroll_pane_cp25_ParamLimits

0x3661,	// (0x0004538a) scroll_pane_cp25

0x367a,	// (0x000453a3) list_double2_graphic_pane_cp2_ParamLimits

0x367a,	// (0x000453a3) list_double2_graphic_pane_cp2

0x367a,	// (0x000453a3) list_double2_large_graphic_pane_cp2_ParamLimits

0x367a,	// (0x000453a3) list_double2_large_graphic_pane_cp2

0x367a,	// (0x000453a3) list_double2_pane_cp2_ParamLimits

0x367a,	// (0x000453a3) list_double2_pane_cp2

0x367a,	// (0x000453a3) list_double_graphic_pane_cp2_ParamLimits

0x367a,	// (0x000453a3) list_double_graphic_pane_cp2

0x367a,	// (0x000453a3) list_double_large_graphic_pane_cp2_ParamLimits

0x367a,	// (0x000453a3) list_double_large_graphic_pane_cp2

0x367a,	// (0x000453a3) list_double_number_pane_cp2_ParamLimits

0x367a,	// (0x000453a3) list_double_number_pane_cp2

0x367a,	// (0x000453a3) list_double_pane_cp2_ParamLimits

0x367a,	// (0x000453a3) list_double_pane_cp2

0xbff4,	// (0x0004dd1d) list_single_2graphic_pane_cp2_ParamLimits

0xbff4,	// (0x0004dd1d) list_single_2graphic_pane_cp2

0xbff4,	// (0x0004dd1d) list_single_graphic_heading_pane_cp2_ParamLimits

0xbff4,	// (0x0004dd1d) list_single_graphic_heading_pane_cp2

0xbff4,	// (0x0004dd1d) list_single_graphic_pane_cp2_ParamLimits

0xbff4,	// (0x0004dd1d) list_single_graphic_pane_cp2

0xbff4,	// (0x0004dd1d) list_single_heading_pane_cp2_ParamLimits

0xbff4,	// (0x0004dd1d) list_single_heading_pane_cp2

0x36bd,	// (0x000453e6) list_single_large_graphic_pane_cp2_ParamLimits

0x36bd,	// (0x000453e6) list_single_large_graphic_pane_cp2

0xbff4,	// (0x0004dd1d) list_single_number_heading_pane_cp2_ParamLimits

0xbff4,	// (0x0004dd1d) list_single_number_heading_pane_cp2

0xbff4,	// (0x0004dd1d) list_single_number_pane_cp2_ParamLimits

0xbff4,	// (0x0004dd1d) list_single_number_pane_cp2

0xbff4,	// (0x0004dd1d) list_single_pane_cp2_ParamLimits

0xbff4,	// (0x0004dd1d) list_single_pane_cp2

0x3712,	// (0x0004543b) bg_popup_sub_pane_cp22

0x10ed,	// (0x00042e16) popup_side_volume_key_window_g1

0x1117,	// (0x00042e40) popup_side_volume_key_window_t1

0x1135,	// (0x00042e5e) volume_small_pane_cp1

0x29c1,	// (0x000446ea) bg_popup_sub_pane_cp24_ParamLimits

0x29c1,	// (0x000446ea) bg_popup_sub_pane_cp24

0x3728,	// (0x00045451) fep_china_uni_candidate_pane_ParamLimits

0x3728,	// (0x00045451) fep_china_uni_candidate_pane

0x373c,	// (0x00045465) fep_china_uni_entry_pane

0x374c,	// (0x00045475) popup_fep_china_uni_window_g1

0x3768,	// (0x00045491) fep_china_uni_entry_pane_g1

0x3772,	// (0x0004549b) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x00051468) fep_china_uni_entry_pane_g

0x377c,	// (0x000454a5) fep_entry_item_pane

0x3786,	// (0x000454af) fep_candidate_item_pane

0x378e,	// (0x000454b7) fep_china_uni_candidate_pane_g1

0x3798,	// (0x000454c1) fep_china_uni_candidate_pane_g2

0x37a0,	// (0x000454c9) fep_china_uni_candidate_pane_g3

0x37a8,	// (0x000454d1) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x0005146d) fep_china_uni_candidate_pane_g

0xda92,	// (0x0004f7bb) fep_entry_item_pane_g1

0x37b2,	// (0x000454db) fep_entry_item_pane_t1_ParamLimits

0x37b2,	// (0x000454db) fep_entry_item_pane_t1

0x37c8,	// (0x000454f1) fep_candidate_item_pane_t1_ParamLimits

0x37c8,	// (0x000454f1) fep_candidate_item_pane_t1

0x37dd,	// (0x00045506) fep_candidate_item_pane_t2_ParamLimits

0x37dd,	// (0x00045506) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x00051476) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x00051476) fep_candidate_item_pane_t

0x2745,	// (0x0004446e) list_highlight_pane_cp31_ParamLimits

0x2745,	// (0x0004446e) list_highlight_pane_cp31

0x37ef,	// (0x00045518) level_1_signal_lsc

0x37f8,	// (0x00045521) level_2_signal_lsc

0x3801,	// (0x0004552a) level_3_signal_lsc

0x380a,	// (0x00045533) level_4_signal_lsc

0x3813,	// (0x0004553c) level_5_signal_lsc

0x381c,	// (0x00045545) level_6_signal_lsc

0x3825,	// (0x0004554e) level_7_signal_lsc

0x3825,	// (0x0004554e) level_1_battery_lsc

0x382e,	// (0x00045557) level_2_battery_lsc

0x3837,	// (0x00045560) level_3_battery_lsc

0x3840,	// (0x00045569) level_4_battery_lsc

0x3849,	// (0x00045572) level_5_battery_lsc

0x3852,	// (0x0004557b) level_6_battery_lsc

0x37ef,	// (0x00045518) level_7_battery_lsc

0x385b,	// (0x00045584) scroll_handle_focus_pane_g1

0x3864,	// (0x0004558d) scroll_handle_focus_pane_g2

0x386d,	// (0x00045596) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x0005147b) scroll_handle_focus_pane_g

0xb601,	// (0x0004d32a) list_single_2graphic_pane_g1_ParamLimits

0xb601,	// (0x0004d32a) list_single_2graphic_pane_g1

0xbdda,	// (0x0004db03) list_single_2graphic_pane_g2_ParamLimits

0xbdda,	// (0x0004db03) list_single_2graphic_pane_g2

0x14ce,	// (0x000431f7) list_single_2graphic_pane_g3_ParamLimits

0x14ce,	// (0x000431f7) list_single_2graphic_pane_g3

0xc057,	// (0x0004dd80) list_single_2graphic_pane_g4_ParamLimits

0xc057,	// (0x0004dd80) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x00051482) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x00051482) list_single_2graphic_pane_g

0xb60d,	// (0x0004d336) list_single_2graphic_pane_t1_ParamLimits

0xb60d,	// (0x0004d336) list_single_2graphic_pane_t1

0xc068,	// (0x0004dd91) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc068,	// (0x0004dd91) list_double2_graphic_large_graphic_pane_g1

0xb297,	// (0x0004cfc0) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb297,	// (0x0004cfc0) list_double2_graphic_large_graphic_pane_g2

0xb1e4,	// (0x0004cf0d) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb1e4,	// (0x0004cf0d) list_double2_graphic_large_graphic_pane_g3

0xb63b,	// (0x0004d364) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb63b,	// (0x0004d364) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x0005148b) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x0005148b) list_double2_graphic_large_graphic_pane_g

0xb647,	// (0x0004d370) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb647,	// (0x0004d370) list_double2_graphic_large_graphic_pane_t1

0xb65d,	// (0x0004d386) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb65d,	// (0x0004d386) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x00051494) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x00051494) list_double2_graphic_large_graphic_pane_t

0x39af,	// (0x000456d8) popup_fast_swap_window_ParamLimits

0x39af,	// (0x000456d8) popup_fast_swap_window

0x39cd,	// (0x000456f6) popup_side_volume_key_window

0x39eb,	// (0x00045714) stacon_top_pane

0x39f5,	// (0x0004571e) status_pane_ParamLimits

0x39f5,	// (0x0004571e) status_pane

0x39eb,	// (0x00045714) status_small_pane

0xda9c,	// (0x0004f7c5) control_pane

0xda9c,	// (0x0004f7c5) stacon_bottom_pane

0x2fbb,	// (0x00044ce4) scroll_pane_cp121

0x2fb2,	// (0x00044cdb) set_content_pane

0xc07a,	// (0x0004dda3) bg_active_tab_pane_g1_cp1

0x387f,	// (0x000455a8) bg_active_tab_pane_g2_cp1

0xc083,	// (0x0004ddac) bg_active_tab_pane_g3_cp1

0xc07a,	// (0x0004dda3) bg_passive_tab_pane_g1_cp1

0x387f,	// (0x000455a8) bg_passive_tab_pane_g2_cp1

0xc083,	// (0x0004ddac) bg_passive_tab_pane_g3_cp1

0xc08c,	// (0x0004ddb5) bg_active_tab_pane_g1_cp2

0x387f,	// (0x000455a8) bg_active_tab_pane_g2_cp2

0xc095,	// (0x0004ddbe) bg_active_tab_pane_g3_cp2

0xc08c,	// (0x0004ddb5) bg_passive_tab_pane_g1_cp2

0x387f,	// (0x000455a8) bg_passive_tab_pane_g2_cp2

0xc095,	// (0x0004ddbe) bg_passive_tab_pane_g3_cp2

0xc09e,	// (0x0004ddc7) bg_active_tab_pane_g1_cp3

0x387f,	// (0x000455a8) bg_active_tab_pane_g2_cp3

0xc0a7,	// (0x0004ddd0) bg_active_tab_pane_g3_cp3

0xc09e,	// (0x0004ddc7) bg_passive_tab_pane_g1_cp3

0x387f,	// (0x000455a8) bg_passive_tab_pane_g2_cp3

0xc0a7,	// (0x0004ddd0) bg_passive_tab_pane_g3_cp3

0xc0b0,	// (0x0004ddd9) bg_active_tab_pane_g1_cp4

0x387f,	// (0x000455a8) bg_active_tab_pane_g2_cp4

0xc0b9,	// (0x0004dde2) bg_active_tab_pane_g3_cp4

0xc0b0,	// (0x0004ddd9) bg_passive_tab_pane_g1_cp4

0x387f,	// (0x000455a8) bg_passive_tab_pane_g2_cp4

0xc0b9,	// (0x0004dde2) bg_passive_tab_pane_g3_cp4

0x3909,	// (0x00045632) bg_active_tab_pane_g1_cp5

0x387f,	// (0x000455a8) bg_active_tab_pane_g2_cp5

0x3912,	// (0x0004563b) bg_active_tab_pane_g3_cp5

0x3909,	// (0x00045632) bg_passive_tab_pane_g1_cp5

0x387f,	// (0x000455a8) bg_passive_tab_pane_g2_cp5

0x3912,	// (0x0004563b) bg_passive_tab_pane_g3_cp5

0x3162,	// (0x00044e8b) list_set_graphic_pane_ParamLimits

0x3162,	// (0x00044e8b) list_set_graphic_pane

0xda9c,	// (0x0004f7c5) bg_set_opt_pane_cp4

0xc0c2,	// (0x0004ddeb) list_set_graphic_pane_g1_ParamLimits

0xc0c2,	// (0x0004ddeb) list_set_graphic_pane_g1

0xc0ce,	// (0x0004ddf7) list_set_graphic_pane_g2_ParamLimits

0xc0ce,	// (0x0004ddf7) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x00051499) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x00051499) list_set_graphic_pane_g

0x0009,

0xfae3,	// (0x0005180c) volume_small_pane_cp_g

0x3960,	// (0x00045689) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x3960,	// (0x00045689) list_double2_large_graphic_pane_g1_cp2

0x396e,	// (0x00045697) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x396e,	// (0x00045697) list_double2_large_graphic_pane_g2_cp2

0x397f,	// (0x000456a8) list_double2_large_graphic_pane_g3_cp2

0x3987,	// (0x000456b0) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3987,	// (0x000456b0) list_double2_large_graphic_pane_t1_cp2

0x399d,	// (0x000456c6) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x399d,	// (0x000456c6) list_double2_large_graphic_pane_t2_cp2

0x5c16,	// (0x0004793f) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5c16,	// (0x0004793f) list_double_large_graphic_pane_g1_cp2

0x5c29,	// (0x00047952) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5c29,	// (0x00047952) list_double_large_graphic_pane_g2_cp2

0x3b13,	// (0x0004583c) list_double_large_graphic_pane_g3_cp2

0x5c3a,	// (0x00047963) list_double_large_graphic_pane_g4_cp

0x5c42,	// (0x0004796b) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5c42,	// (0x0004796b) list_double_large_graphic_pane_t1_cp2

0x5c59,	// (0x00047982) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5c59,	// (0x00047982) list_double_large_graphic_pane_t2_cp2

0x3a03,	// (0x0004572c) list_double2_graphic_pane_g1_cp2_ParamLimits

0x3a03,	// (0x0004572c) list_double2_graphic_pane_g1_cp2

0x3a11,	// (0x0004573a) list_double2_graphic_pane_g2_cp2_ParamLimits

0x3a11,	// (0x0004573a) list_double2_graphic_pane_g2_cp2

0x3a22,	// (0x0004574b) list_double2_graphic_pane_g3_cp2

0x3a2c,	// (0x00045755) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3a2c,	// (0x00045755) list_double2_graphic_pane_t1_cp2

0x3a42,	// (0x0004576b) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3a42,	// (0x0004576b) list_double2_graphic_pane_t2_cp2

0x3a54,	// (0x0004577d) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3a54,	// (0x0004577d) list_single_number_heading_pane_g1_cp2

0x3a60,	// (0x00045789) list_single_number_heading_pane_g2_cp2

0x3a68,	// (0x00045791) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3a68,	// (0x00045791) list_single_number_heading_pane_t1_cp2

0x3a7e,	// (0x000457a7) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3a7e,	// (0x000457a7) list_single_number_heading_pane_t2_cp2

0x3a92,	// (0x000457bb) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3a92,	// (0x000457bb) list_single_number_heading_pane_t3_cp2

0x3a54,	// (0x0004577d) list_single_heading_pane_g1_cp2_ParamLimits

0x3a54,	// (0x0004577d) list_single_heading_pane_g1_cp2

0x3a60,	// (0x00045789) list_single_heading_pane_g2_cp2

0x3a68,	// (0x00045791) list_single_heading_pane_t1_cp2_ParamLimits

0x3a68,	// (0x00045791) list_single_heading_pane_t1_cp2

0x5a10,	// (0x00047739) list_single_heading_pane_t2_cp2_ParamLimits

0x5a10,	// (0x00047739) list_single_heading_pane_t2_cp2

0x5952,	// (0x0004767b) list_double_graphic_pane_g1_cp2_ParamLimits

0x5952,	// (0x0004767b) list_double_graphic_pane_g1_cp2

0x595e,	// (0x00047687) list_double_graphic_pane_g2_cp2_ParamLimits

0x595e,	// (0x00047687) list_double_graphic_pane_g2_cp2

0x596d,	// (0x00047696) list_double_graphic_pane_g3_cp2

0x5975,	// (0x0004769e) list_double_graphic_pane_t1_cp2_ParamLimits

0x5975,	// (0x0004769e) list_double_graphic_pane_t1_cp2

0x598b,	// (0x000476b4) list_double_graphic_pane_t2_cp2_ParamLimits

0x598b,	// (0x000476b4) list_double_graphic_pane_t2_cp2

0x3b07,	// (0x00045830) list_double_number_pane_g1_cp2_ParamLimits

0x3b07,	// (0x00045830) list_double_number_pane_g1_cp2

0x3b13,	// (0x0004583c) list_double_number_pane_g2_cp2

0x5916,	// (0x0004763f) list_double_number_pane_t1_cp2_ParamLimits

0x5916,	// (0x0004763f) list_double_number_pane_t1_cp2

0x592a,	// (0x00047653) list_double_number_pane_t2_cp2_ParamLimits

0x592a,	// (0x00047653) list_double_number_pane_t2_cp2

0x5940,	// (0x00047669) list_double_number_pane_t3_cp2_ParamLimits

0x5940,	// (0x00047669) list_double_number_pane_t3_cp2

0x57ff,	// (0x00047528) list_single_graphic_pane_g1_cp2_ParamLimits

0x57ff,	// (0x00047528) list_single_graphic_pane_g1_cp2

0x3b6d,	// (0x00045896) list_single_graphic_pane_g2_cp2_ParamLimits

0x3b6d,	// (0x00045896) list_single_graphic_pane_g2_cp2

0x3b79,	// (0x000458a2) list_single_graphic_pane_g3_cp2

0x57d5,	// (0x000474fe) list_single_graphic_pane_t1_cp2_ParamLimits

0x57d5,	// (0x000474fe) list_single_graphic_pane_t1_cp2

0x3b6d,	// (0x00045896) list_single_number_pane_g1_cp2_ParamLimits

0x3b6d,	// (0x00045896) list_single_number_pane_g1_cp2

0x3b79,	// (0x000458a2) list_single_number_pane_g2_cp2

0x57d5,	// (0x000474fe) list_single_number_pane_t1_cp2_ParamLimits

0x57d5,	// (0x000474fe) list_single_number_pane_t1_cp2

0x57eb,	// (0x00047514) list_single_number_pane_t2_cp2_ParamLimits

0x57eb,	// (0x00047514) list_single_number_pane_t2_cp2

0x396e,	// (0x00045697) list_double2_pane_g1_cp2_ParamLimits

0x396e,	// (0x00045697) list_double2_pane_g1_cp2

0x397f,	// (0x000456a8) list_double2_pane_g2_cp2

0x3adf,	// (0x00045808) list_double2_pane_t1_cp2_ParamLimits

0x3adf,	// (0x00045808) list_double2_pane_t1_cp2

0x3af5,	// (0x0004581e) list_double2_pane_t2_cp2_ParamLimits

0x3af5,	// (0x0004581e) list_double2_pane_t2_cp2

0x3b07,	// (0x00045830) list_double_pane_g1_cp2_ParamLimits

0x3b07,	// (0x00045830) list_double_pane_g1_cp2

0x3b13,	// (0x0004583c) list_double_pane_g2_cp2

0x3b1b,	// (0x00045844) list_double_pane_t1_cp2_ParamLimits

0x3b1b,	// (0x00045844) list_double_pane_t1_cp2

0x3b31,	// (0x0004585a) list_double_pane_t2_cp2_ParamLimits

0x3b31,	// (0x0004585a) list_double_pane_t2_cp2

0x3b5d,	// (0x00045886) list_single_pane_cp2_g3

0x3b6d,	// (0x00045896) list_single_pane_g1_cp2_ParamLimits

0x3b6d,	// (0x00045896) list_single_pane_g1_cp2

0x3b79,	// (0x000458a2) list_single_pane_g2_cp2

0x3b81,	// (0x000458aa) list_single_pane_t1_cp2_ParamLimits

0x3b81,	// (0x000458aa) list_single_pane_t1_cp2

0x3b99,	// (0x000458c2) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3b99,	// (0x000458c2) list_single_large_graphic_pane_g1_cp2

0x3ba7,	// (0x000458d0) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3ba7,	// (0x000458d0) list_single_large_graphic_pane_g2_cp2

0x3bb3,	// (0x000458dc) list_single_large_graphic_pane_g3_cp2

0x3bbb,	// (0x000458e4) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3bbb,	// (0x000458e4) list_single_large_graphic_pane_g4_cp1

0x3bd5,	// (0x000458fe) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x3bd5,	// (0x000458fe) list_single_large_graphic_pane_t1_cp2

0x579f,	// (0x000474c8) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x579f,	// (0x000474c8) list_single_graphic_heading_pane_g1_cp2

0x576c,	// (0x00047495) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x576c,	// (0x00047495) list_single_graphic_heading_pane_g4_cp2

0x3b79,	// (0x000458a2) list_single_graphic_heading_pane_g5_cp2

0x57ab,	// (0x000474d4) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x57ab,	// (0x000474d4) list_single_graphic_heading_pane_t1_cp2

0x57c1,	// (0x000474ea) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x57c1,	// (0x000474ea) list_single_graphic_heading_pane_t2_cp2

0x5760,	// (0x00047489) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5760,	// (0x00047489) list_single_2graphic_pane_g1_cp2

0x576c,	// (0x00047495) list_single_2graphic_pane_g2_cp2_ParamLimits

0x576c,	// (0x00047495) list_single_2graphic_pane_g2_cp2

0x3b79,	// (0x000458a2) list_single_2graphic_pane_g3_cp2

0x577d,	// (0x000474a6) list_single_2graphic_pane_g4_cp2_ParamLimits

0x577d,	// (0x000474a6) list_single_2graphic_pane_g4_cp2

0x5789,	// (0x000474b2) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5789,	// (0x000474b2) list_single_2graphic_pane_t1_cp2

0xda92,	// (0x0004f7bb) list_highlight_pane_g10_cp1

0x5338,	// (0x00047061) list_highlight_pane_g1_cp1

0x5340,	// (0x00047069) list_highlight_pane_g2_cp1

0x5348,	// (0x00047071) list_highlight_pane_g3_cp1

0x5350,	// (0x00047079) list_highlight_pane_g4_cp1

0x5358,	// (0x00047081) list_highlight_pane_g5_cp1

0x5360,	// (0x00047089) list_highlight_pane_g6_cp1

0x5368,	// (0x00047091) list_highlight_pane_g7_cp1

0x5370,	// (0x00047099) list_highlight_pane_g8_cp1

0x5378,	// (0x000470a1) list_highlight_pane_g9_cp1

0xd617,	// (0x0004f340) form_field_slider_pane_t3

0xd625,	// (0x0004f34e) form_field_slider_pane_t4

0x5274,	// (0x00046f9d) slider_form_pane_ParamLimits

0x5274,	// (0x00046f9d) slider_form_pane

0xda9c,	// (0x0004f7c5) control_abbreviations

0xda9c,	// (0x0004f7c5) control_conventions

0xda9c,	// (0x0004f7c5) control_definitions

0xda9c,	// (0x0004f7c5) format_table_attribute

0x5a66,	// (0x0004778f) bg_popup_preview_window_pane_g9

0xda9c,	// (0x0004f7c5) format_table_data2

0xda9c,	// (0x0004f7c5) format_table_data3

0xda9c,	// (0x0004f7c5) format_table_data_example

0x0008,

0xda9c,	// (0x0004f7c5) intro_purpose

0xf900,	// (0x00051629) bg_popup_preview_window_pane_g

0xda9c,	// (0x0004f7c5) texts_category

0xda9c,	// (0x0004f7c5) texts_graphics

0x3beb,	// (0x00045914) text_digital

0x3bfa,	// (0x00045923) text_primary

0x3c09,	// (0x00045932) text_primary_small

0x3c18,	// (0x00045941) text_secondary

0x3c27,	// (0x00045950) text_title

0x6202,	// (0x00047f2b) bg_passive_tab_pane_g1_cp3_srt

0x387f,	// (0x000455a8) bg_passive_tab_pane_g2_cp3_srt

0x620b,	// (0x00047f34) bg_passive_tab_pane_g3_cp3_srt

0x29c1,	// (0x000446ea) bg_active_tab_pane_cp3_srt_ParamLimits

0x29c1,	// (0x000446ea) bg_active_tab_pane_cp3_srt

0x6214,	// (0x00047f3d) tabs_4_active_pane_srt_g1

0xda2a,	// (0x0004f753) tabs_4_active_pane_srt_t1_ParamLimits

0xda2a,	// (0x0004f753) tabs_4_active_pane_srt_t1

0x6202,	// (0x00047f2b) bg_active_tab_pane_g1_cp3_copy1

0x387f,	// (0x000455a8) bg_active_tab_pane_g2_cp3_copy1

0x620b,	// (0x00047f34) bg_active_tab_pane_g3_cp3_copy1

0x2745,	// (0x0004446e) tabs_2_long_active_pane_srt_ParamLimits

0x2745,	// (0x0004446e) tabs_2_long_active_pane_srt

0x2745,	// (0x0004446e) tabs_2_long_passive_pane_srt_ParamLimits

0x2745,	// (0x0004446e) tabs_2_long_passive_pane_srt

0x3fb4,	// (0x00045cdd) bg_passive_tab_pane_cp4_srt_ParamLimits

0x3fb4,	// (0x00045cdd) bg_passive_tab_pane_cp4_srt

0x5eb6,	// (0x00047bdf) bg_passive_tab_pane_g1_cp4_srt

0x387f,	// (0x000455a8) bg_passive_tab_pane_g2_cp4_srt

0x5ebf,	// (0x00047be8) bg_passive_tab_pane_g3_cp4_srt

0x2745,	// (0x0004446e) bg_active_tab_pane_cp4_srt_ParamLimits

0x2745,	// (0x0004446e) bg_active_tab_pane_cp4_srt

0xd820,	// (0x0004f549) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd820,	// (0x0004f549) tabs_2_long_active_pane_srt_t1

0x5eb6,	// (0x00047bdf) bg_active_tab_pane_g1_cp4_srt

0x387f,	// (0x000455a8) bg_active_tab_pane_g2_cp4_srt

0x5ebf,	// (0x00047be8) bg_active_tab_pane_g3_cp4_srt

0x29c1,	// (0x000446ea) tabs_3_long_active_pane_srt_ParamLimits

0x29c1,	// (0x000446ea) tabs_3_long_active_pane_srt

0x29c1,	// (0x000446ea) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x29c1,	// (0x000446ea) tabs_3_long_passive_pane_cp_srt

0x29c1,	// (0x000446ea) tabs_3_long_passive_pane_srt_ParamLimits

0x29c1,	// (0x000446ea) tabs_3_long_passive_pane_srt

0x3fb4,	// (0x00045cdd) bg_passive_tab_pane_cp5_srt_ParamLimits

0x3fb4,	// (0x00045cdd) bg_passive_tab_pane_cp5_srt

0x3909,	// (0x00045632) bg_passive_tab_pane_g1_cp5_srt

0x387f,	// (0x000455a8) bg_passive_tab_pane_g2_cp5_srt

0x3912,	// (0x0004563b) bg_passive_tab_pane_g3_cp5_srt

0x2745,	// (0x0004446e) bg_active_tab_pane_cp5_srt_ParamLimits

0x2745,	// (0x0004446e) bg_active_tab_pane_cp5_srt

0xd80a,	// (0x0004f533) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd80a,	// (0x0004f533) tabs_3_long_active_pane_srt_t1

0x3909,	// (0x00045632) bg_active_tab_pane_g1_cp5_srt

0x387f,	// (0x000455a8) bg_active_tab_pane_g2_cp5_srt

0x3912,	// (0x0004563b) bg_active_tab_pane_g3_cp5_srt

0x5e96,	// (0x00047bbf) navi_text_pane_srt_t1

0x5e8e,	// (0x00047bb7) navi_icon_pane_srt_g1

0x3dfe,	// (0x00045b27) midp_editing_number_pane_srt

0x3c36,	// (0x0004595f) midp_ticker_pane_srt

0x3e06,	// (0x00045b2f) midp_ticker_pane_srt_g1

0x3e0e,	// (0x00045b37) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x000514b8) midp_ticker_pane_srt_g

0x3e16,	// (0x00045b3f) midp_ticker_pane_srt_t1

0x5e7f,	// (0x00047ba8) midp_editing_number_pane_t1_copy1

0xc0f2,	// (0x0004de1b) listscroll_midp_pane

0xc0f2,	// (0x0004de1b) midp_form_pane

0x3cac,	// (0x000459d5) midp_info_popup_window_ParamLimits

0x3cac,	// (0x000459d5) midp_info_popup_window

0x3090,	// (0x00044db9) bg_popup_sub_pane_cp50_ParamLimits

0x3090,	// (0x00044db9) bg_popup_sub_pane_cp50

0x4f6e,	// (0x00046c97) listscroll_midp_info_pane_ParamLimits

0x4f6e,	// (0x00046c97) listscroll_midp_info_pane

0x4f56,	// (0x00046c7f) listscroll_form_midp_pane_ParamLimits

0x4f56,	// (0x00046c7f) listscroll_form_midp_pane

0x4f62,	// (0x00046c8b) scroll_bar_cp050

0xd60b,	// (0x0004f334) list_midp_pane

0x6c8c,	// (0x000489b5) signal_pane_g2_cp

0x4e70,	// (0x00046b99) listscroll_midp_info_pane_t1_ParamLimits

0x4e70,	// (0x00046b99) listscroll_midp_info_pane_t1

0x4e88,	// (0x00046bb1) listscroll_midp_info_pane_t2_ParamLimits

0x4e88,	// (0x00046bb1) listscroll_midp_info_pane_t2

0x4ec6,	// (0x00046bef) listscroll_midp_info_pane_t3_ParamLimits

0x4ec6,	// (0x00046bef) listscroll_midp_info_pane_t3

0x4f00,	// (0x00046c29) listscroll_midp_info_pane_t4_ParamLimits

0x4f00,	// (0x00046c29) listscroll_midp_info_pane_t4

0x0003,

0xf83b,	// (0x00051564) listscroll_midp_info_pane_t_ParamLimits

0xf83b,	// (0x00051564) listscroll_midp_info_pane_t

0x315a,	// (0x00044e83) scroll_pane_cp21

0x4e0a,	// (0x00046b33) form_midp_field_choice_group_pane

0x4e13,	// (0x00046b3c) form_midp_field_text_pane

0x4e56,	// (0x00046b7f) form_midp_field_time_pane

0x4e5e,	// (0x00046b87) form_midp_gauge_slider_pane

0x4e67,	// (0x00046b90) form_midp_gauge_wait_pane

0xda9c,	// (0x0004f7c5) form_midp_image_pane

0xb66f,	// (0x0004d398) list_single_midp_pane_ParamLimits

0xb66f,	// (0x0004d398) list_single_midp_pane

0xd5e3,	// (0x0004f30c) form_midp_field_text_pane_t1

0x4be2,	// (0x0004690b) input_focus_pane_cp050

0x4df9,	// (0x00046b22) list_midp_form_text_pane

0x4d9d,	// (0x00046ac6) form_midp_field_choice_group_pane_t1

0x4dab,	// (0x00046ad4) input_focus_pane_cp051

0x4dbf,	// (0x00046ae8) list_midp_choice_pane

0xda9c,	// (0x0004f7c5) status_idle_pane

0x4d81,	// (0x00046aaa) form_midp_field_time_pane_t1

0xda92,	// (0x0004f7bb) wait_anim_pane_g2_copy1

0x4d8f,	// (0x00046ab8) form_midp_field_time_pane_t2

0x0001,

0x3d5c,	// (0x00045a85) aid_navinavi_width_2_pane

0xf836,	// (0x0005155f) form_midp_field_time_pane_t

0xda9c,	// (0x0004f7c5) input_focus_pane_cp052

0xda9c,	// (0x0004f7c5) bg_input_focus_pane_cp040

0x4d41,	// (0x00046a6a) form_midp_gauge_slider_pane_t1

0x4d4f,	// (0x00046a78) form_midp_gauge_slider_pane_t2

0xd5c7,	// (0x0004f2f0) form_midp_gauge_slider_pane_t3

0xd5d5,	// (0x0004f2fe) form_midp_gauge_slider_pane_t4

0x0003,

0xf82d,	// (0x00051556) form_midp_gauge_slider_pane_t

0x4d79,	// (0x00046aa2) form_midp_slider_pane

0x2745,	// (0x0004446e) bg_input_focus_pane_cp041_ParamLimits

0x2745,	// (0x0004446e) bg_input_focus_pane_cp041

0x4d0e,	// (0x00046a37) form_midp_gauge_wait_pane_t1_ParamLimits

0x4d0e,	// (0x00046a37) form_midp_gauge_wait_pane_t1

0x4d20,	// (0x00046a49) form_midp_gauge_wait_pane_t2_ParamLimits

0x4d20,	// (0x00046a49) form_midp_gauge_wait_pane_t2

0x0001,

0xf828,	// (0x00051551) form_midp_gauge_wait_pane_t_ParamLimits

0xf828,	// (0x00051551) form_midp_gauge_wait_pane_t

0x4d32,	// (0x00046a5b) form_midp_wait_pane_ParamLimits

0x4d32,	// (0x00046a5b) form_midp_wait_pane

0x4cd6,	// (0x000469ff) form_midp_image_pane_g1

0x4cdf,	// (0x00046a08) form_midp_image_pane_t1

0x4cee,	// (0x00046a17) form_midp_image_pane_t2

0x4cfd,	// (0x00046a26) form_midp_image_pane_t3

0x0002,

0xf821,	// (0x0005154a) form_midp_image_pane_t

0x4ccd,	// (0x000469f6) list_single_midp_pane_g1

0x044e,	// (0x00042177) list_single_midp_pane_t1

0xd5b0,	// (0x0004f2d9) list_midp_form_item_pane_ParamLimits

0xd5b0,	// (0x0004f2d9) list_midp_form_item_pane

0x3d04,	// (0x00045a2d) list_midp_form_item_pane_t1

0x3d13,	// (0x00045a3c) midp_ticker_pane_g1

0x3d1f,	// (0x00045a48) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x0005149e) midp_ticker_pane_g

0xc9df,	// (0x0004e708) midp_ticker_pane_t1

0xd9af,	// (0x0004f6d8) midp_editing_number_pane_t1

0x60dc,	// (0x00047e05) midp_editing_number_pane

0x60eb,	// (0x00047e14) midp_ticker_pane

0x5e6f,	// (0x00047b98) ai_message_heading_pane

0xda9c,	// (0x0004f7c5) bg_popup_window_pane_cp14

0x5e77,	// (0x00047ba0) listscroll_ai_message_pane

0x5df5,	// (0x00047b1e) ai_message_heading_pane_g1_ParamLimits

0x5df5,	// (0x00047b1e) ai_message_heading_pane_g1

0x5e01,	// (0x00047b2a) ai_message_heading_pane_g2_ParamLimits

0x5e01,	// (0x00047b2a) ai_message_heading_pane_g2

0x5e0f,	// (0x00047b38) ai_message_heading_pane_g3_ParamLimits

0x5e0f,	// (0x00047b38) ai_message_heading_pane_g3

0x5e1b,	// (0x00047b44) ai_message_heading_pane_g4_ParamLimits

0x5e1b,	// (0x00047b44) ai_message_heading_pane_g4

0x0003,

0xf962,	// (0x0005168b) ai_message_heading_pane_g_ParamLimits

0xf962,	// (0x0005168b) ai_message_heading_pane_g

0x5e27,	// (0x00047b50) ai_message_heading_pane_t1_ParamLimits

0x5e27,	// (0x00047b50) ai_message_heading_pane_t1

0x5e41,	// (0x00047b6a) ai_message_heading_pane_t2_ParamLimits

0x5e41,	// (0x00047b6a) ai_message_heading_pane_t2

0x0001,

0xf96b,	// (0x00051694) ai_message_heading_pane_t_ParamLimits

0xf96b,	// (0x00051694) ai_message_heading_pane_t

0x5e55,	// (0x00047b7e) bg_popup_heading_pane_cp1_ParamLimits

0x5e55,	// (0x00047b7e) bg_popup_heading_pane_cp1

0x5de3,	// (0x00047b0c) list_ai_message_pane_ParamLimits

0x5de3,	// (0x00047b0c) list_ai_message_pane

0x315a,	// (0x00044e83) scroll_pane_cp10

0x5d7f,	// (0x00047aa8) list_ai_message_pane_g1

0x5d87,	// (0x00047ab0) list_ai_message_pane_g2

0x0001,

0xf93f,	// (0x00051668) list_ai_message_pane_g

0x5d8f,	// (0x00047ab8) list_ai_message_pane_t1_ParamLimits

0x5d8f,	// (0x00047ab8) list_ai_message_pane_t1

0x5da4,	// (0x00047acd) list_ai_message_pane_t2_ParamLimits

0x5da4,	// (0x00047acd) list_ai_message_pane_t2

0x5db9,	// (0x00047ae2) list_ai_message_pane_t3_ParamLimits

0x5db9,	// (0x00047ae2) list_ai_message_pane_t3

0x5dce,	// (0x00047af7) list_ai_message_pane_t4_ParamLimits

0x5dce,	// (0x00047af7) list_ai_message_pane_t4

0x0003,

0xf944,	// (0x0005166d) list_ai_message_pane_t_ParamLimits

0xf944,	// (0x0005166d) list_ai_message_pane_t

0xd7f0,	// (0x0004f519) cell_ai_soft_ind_pane_ParamLimits

0xd7f0,	// (0x0004f519) cell_ai_soft_ind_pane

0x3d3d,	// (0x00045a66) cell_ai_soft_ind_pane_g1_ParamLimits

0x3d3d,	// (0x00045a66) cell_ai_soft_ind_pane_g1

0xda9c,	// (0x0004f7c5) grid_highlight_cp1

0x3d4a,	// (0x00045a73) text_secondary_cp56_ParamLimits

0x3d4a,	// (0x00045a73) text_secondary_cp56

0x5d3d,	// (0x00047a66) example_general_pane_ParamLimits

0x5d3d,	// (0x00047a66) example_general_pane

0x5d49,	// (0x00047a72) example_parent_pane_g1_ParamLimits

0x5d49,	// (0x00047a72) example_parent_pane_g1

0x5d55,	// (0x00047a7e) example_parent_pane_t1_ParamLimits

0x5d55,	// (0x00047a7e) example_parent_pane_t1

0xce43,	// (0x0004eb6c) popup_preview_text_window_ParamLimits

0xce43,	// (0x0004eb6c) popup_preview_text_window

0x3b65,	// (0x0004588e) list_single_pane_cp2_g4

0x2a77,	// (0x000447a0) bg_popup_preview_window_pane_ParamLimits

0x2a77,	// (0x000447a0) bg_popup_preview_window_pane

0x5a70,	// (0x00047799) popup_preview_text_window_t1_ParamLimits

0x5a70,	// (0x00047799) popup_preview_text_window_t1

0x5a8e,	// (0x000477b7) popup_preview_text_window_t2_ParamLimits

0x5a8e,	// (0x000477b7) popup_preview_text_window_t2

0x5ad7,	// (0x00047800) popup_preview_text_window_t3_ParamLimits

0x5ad7,	// (0x00047800) popup_preview_text_window_t3

0x5b1c,	// (0x00047845) popup_preview_text_window_t4_ParamLimits

0x5b1c,	// (0x00047845) popup_preview_text_window_t4

0x0004,

0xf913,	// (0x0005163c) popup_preview_text_window_t_ParamLimits

0xf913,	// (0x0005163c) popup_preview_text_window_t

0x5b9a,	// (0x000478c3) scroll_pane_cp11

0x4af0,	// (0x00046819) bg_popup_preview_window_pane_g1

0x5a24,	// (0x0004774d) bg_popup_preview_window_pane_g2

0x5a2e,	// (0x00047757) bg_popup_preview_window_pane_g3

0x5a38,	// (0x00047761) bg_popup_preview_window_pane_g4

0x5a42,	// (0x0004776b) bg_popup_preview_window_pane_g5

0x5a4c,	// (0x00047775) bg_popup_preview_window_pane_g6

0x5a54,	// (0x0004777d) bg_popup_preview_window_pane_g7

0x5a5c,	// (0x00047785) bg_popup_preview_window_pane_g8

0x0976,	// (0x0004269f) aid_popup_width_pane

0xcdb3,	// (0x0004eadc) popup_midp_note_alarm_window_ParamLimits

0xcdb3,	// (0x0004eadc) popup_midp_note_alarm_window

0x2fcc,	// (0x00044cf5) data_form_pane_ParamLimits

0xb4f2,	// (0x0004d21b) form_field_data_pane_g1

0xb4fc,	// (0x0004d225) form_field_data_pane_t1_ParamLimits

0x2fd8,	// (0x00044d01) input_focus_pane_ParamLimits

0x2fe6,	// (0x00044d0f) data_form_wide_pane_ParamLimits

0x01b0,	// (0x00041ed9) form_field_data_wide_pane_g1

0x01bc,	// (0x00041ee5) form_field_data_wide_pane_t1_ParamLimits

0x2d3d,	// (0x00044a66) input_focus_pane_cp6_ParamLimits

0xbe60,	// (0x0004db89) input_popup_find_pane_g1_ParamLimits

0xbe60,	// (0x0004db89) input_popup_find_pane_g1

0x0f9a,	// (0x00042cc3) aid_navi_side_left_pane

0x0faf,	// (0x00042cd8) aid_navi_side_right_pane

0x5433,	// (0x0004715c) bg_popup_window_pane_cp30_ParamLimits

0x5433,	// (0x0004715c) bg_popup_window_pane_cp30

0x54ad,	// (0x000471d6) popup_midp_note_alarm_window_g1_ParamLimits

0x54ad,	// (0x000471d6) popup_midp_note_alarm_window_g1

0x54dd,	// (0x00047206) popup_midp_note_alarm_window_t1_ParamLimits

0x54dd,	// (0x00047206) popup_midp_note_alarm_window_t1

0x557e,	// (0x000472a7) popup_midp_note_alarm_window_t2_ParamLimits

0x557e,	// (0x000472a7) popup_midp_note_alarm_window_t2

0x562c,	// (0x00047355) popup_midp_note_alarm_window_t3_ParamLimits

0x562c,	// (0x00047355) popup_midp_note_alarm_window_t3

0x565e,	// (0x00047387) popup_midp_note_alarm_window_t4_ParamLimits

0x565e,	// (0x00047387) popup_midp_note_alarm_window_t4

0x5684,	// (0x000473ad) popup_midp_note_alarm_window_t5_ParamLimits

0x5684,	// (0x000473ad) popup_midp_note_alarm_window_t5

0x000a,

0xf8b0,	// (0x000515d9) popup_midp_note_alarm_window_t_ParamLimits

0xf8b0,	// (0x000515d9) popup_midp_note_alarm_window_t

0x5730,	// (0x00047459) wait_bar_pane_cp1_ParamLimits

0x5730,	// (0x00047459) wait_bar_pane_cp1

0xda9c,	// (0x0004f7c5) wait_anim_pane_copy1

0xda9c,	// (0x0004f7c5) wait_border_pane_copy1

0x5118,	// (0x00046e41) wait_border_pane_g1_copy1

0x01d6,	// (0x00041eff) form_field_popup_pane_g1

0xb516,	// (0x0004d23f) form_field_popup_pane_t1_ParamLimits

0x2fd8,	// (0x00044d01) input_focus_pane_cp7_ParamLimits

0x3012,	// (0x00044d3b) list_form_pane_ParamLimits

0x01f8,	// (0x00041f21) form_field_popup_wide_pane_g1

0x0200,	// (0x00041f29) form_field_popup_wide_pane_t1_ParamLimits

0x2fd8,	// (0x00044d01) input_focus_pane_cp8_ParamLimits

0x301e,	// (0x00044d47) list_form_wide_pane_ParamLimits

0x628f,	// (0x00047fb8) aid_size_cell_graphic_pane

0xb595,	// (0x0004d2be) data_form_pane_t1_ParamLimits

0xb69d,	// (0x0004d3c6) data_form_wide_pane_t1_ParamLimits

0xd240,	// (0x0004ef69) bg_status_flat_pane

0xba3d,	// (0x0004d766) title_pane_t1_ParamLimits

0x270d,	// (0x00044436) title_pane_t2_ParamLimits

0x2733,	// (0x0004445c) title_pane_t3_ParamLimits

0xf573,	// (0x0005129c) title_pane_t_ParamLimits

0xbf70,	// (0x0004dc99) level_1_signal_ParamLimits

0xbf82,	// (0x0004dcab) level_2_signal_ParamLimits

0xbf95,	// (0x0004dcbe) level_3_signal_ParamLimits

0xbfa8,	// (0x0004dcd1) level_4_signal_ParamLimits

0xbfbb,	// (0x0004dce4) level_5_signal_ParamLimits

0xbfce,	// (0x0004dcf7) level_6_signal_ParamLimits

0xbfe1,	// (0x0004dd0a) level_7_signal_ParamLimits

0xbf70,	// (0x0004dc99) level_1_battery_ParamLimits

0xbf82,	// (0x0004dcab) level_2_battery_ParamLimits

0xbf95,	// (0x0004dcbe) level_3_battery_ParamLimits

0xbfa8,	// (0x0004dcd1) level_4_battery_ParamLimits

0xbfbb,	// (0x0004dce4) level_5_battery_ParamLimits

0xbfce,	// (0x0004dcf7) level_6_battery_ParamLimits

0xbfe1,	// (0x0004dd0a) level_7_battery_ParamLimits

0x5338,	// (0x00047061) bg_status_flat_pane_g1

0x5340,	// (0x00047069) bg_status_flat_pane_g2

0x5348,	// (0x00047071) bg_status_flat_pane_g3

0x5350,	// (0x00047079) bg_status_flat_pane_g4

0x5358,	// (0x00047081) bg_status_flat_pane_g5

0x5360,	// (0x00047089) bg_status_flat_pane_g6

0x5368,	// (0x00047091) bg_status_flat_pane_g7

0xbad1,	// (0x0004d7fa) tabs_3_active_pane_t1_ParamLimits

0xbad1,	// (0x0004d7fa) tabs_3_passive_pane_t1_ParamLimits

0xbaeb,	// (0x0004d814) tabs_4_active_pane_t1_ParamLimits

0xbaeb,	// (0x0004d814) tabs_4_1_passive_pane_t1_ParamLimits

0xbe76,	// (0x0004db9f) tabs_2_active_pane_t1_ParamLimits

0xbe76,	// (0x0004db9f) tabs_2_passive_pane_t1_ParamLimits

0x2745,	// (0x0004446e) bg_active_tab_pane_cp4_ParamLimits

0xbe88,	// (0x0004dbb1) tabs_2_long_active_pane_t1_ParamLimits

0x3fb4,	// (0x00045cdd) bg_passive_tab_pane_cp4_ParamLimits

0x1526,	// (0x0004324f) list_single_midp_graphic_pane_t1_ParamLimits

0x2745,	// (0x0004446e) bg_active_tab_pane_cp5_ParamLimits

0xbe9b,	// (0x0004dbc4) tabs_3_long_active_pane_t1_ParamLimits

0x3fb4,	// (0x00045cdd) bg_passive_tab_pane_cp5_ParamLimits

0x1526,	// (0x0004324f) list_single_midp_graphic_pane_t1

0xd240,	// (0x0004ef69) bg_status_flat_pane_ParamLimits

0x4769,	// (0x00046492) indicator_pane_cp2_ParamLimits

0x4769,	// (0x00046492) indicator_pane_cp2

0xd3d5,	// (0x0004f0fe) navi_pane_srt_ParamLimits

0xd3d5,	// (0x0004f0fe) navi_pane_srt

0x48cf,	// (0x000465f8) popup_clock_digital_analogue_window_cp1

0x2825,	// (0x0004454e) indicator_pane_t1

0x3c36,	// (0x0004595f) copy_highlight_pane

0x3c36,	// (0x0004595f) cursor_graphics_pane

0x3c36,	// (0x0004595f) graphic_within_text_pane

0x3c36,	// (0x0004595f) link_highlight_pane

0x5b5d,	// (0x00047886) popup_preview_text_window_t5_ParamLimits

0x5b5d,	// (0x00047886) popup_preview_text_window_t5

0x3d66,	// (0x00045a8f) cursor_digital_pane

0x3d66,	// (0x00045a8f) cursor_primary_pane

0x3d77,	// (0x00045aa0) cursor_primary_small_pane

0x3d7f,	// (0x00045aa8) cursor_secondary_pane

0x3d87,	// (0x00045ab0) cursor_title_pane

0x3d66,	// (0x00045a8f) link_highlight_digital_pane

0x3d6e,	// (0x00045a97) link_highlight_primary_pane

0x3d77,	// (0x00045aa0) link_highlight_primary_small_pane

0x3d7f,	// (0x00045aa8) link_highlight_secondary_pane

0x3d87,	// (0x00045ab0) link_highlight_title_pane

0x3d66,	// (0x00045a8f) copy_highlight_digital_pane

0x3d66,	// (0x00045a8f) copy_highlight_primary_pane

0x3d77,	// (0x00045aa0) copy_highlight_primary_small_pane

0x3d7f,	// (0x00045aa8) copy_highlight_secondary_pane

0x3d87,	// (0x00045ab0) copy_highlight_title_pane

0x3d7f,	// (0x00045aa8) graphic_text_digital_pane

0x53d6,	// (0x000470ff) graphic_text_primary_pane

0x53df,	// (0x00047108) graphic_text_primary_small_pane

0x3d77,	// (0x00045aa0) graphic_text_secondary_pane

0x3d66,	// (0x00045a8f) graphic_text_title_pane

0xc9f1,	// (0x0004e71a) cursor_primary_pane_g1

0x53c8,	// (0x000470f1) cursor_text_primary_t1

0xd647,	// (0x0004f370) cursor_primary_small_pane_g1

0x53ba,	// (0x000470e3) cursor_text_primary_small_t1

0xd63d,	// (0x0004f366) cursor_primary_small_pane_g1_copy1

0x53a2,	// (0x000470cb) cursor_text_primary_small_t1_copy1

0x5380,	// (0x000470a9) cursor_text_title_t1

0xd633,	// (0x0004f35c) cursor_title_pane_g1

0xc9f1,	// (0x0004e71a) cursor_digital_pane_g1

0x3d99,	// (0x00045ac2) cursor_text_digital_t1

0x3da7,	// (0x00045ad0) link_highlight_primary_pane_g1

0x5329,	// (0x00047052) link_highlight_primary_pane_t1

0x3da7,	// (0x00045ad0) link_highlight_primary_small_pane_g1

0x3daf,	// (0x00045ad8) link_highlight_primary_small_pane_t1

0x3dbe,	// (0x00045ae7) link_highlight_secondary_pane_g1

0x3dc6,	// (0x00045aef) link_highlight_secondary_pane_t1

0x529d,	// (0x00046fc6) link_highlight_title_pane_g1

0x52a5,	// (0x00046fce) link_highlight_title_pane_t1

0x5286,	// (0x00046faf) link_highlight_digital_pane_g1

0x528e,	// (0x00046fb7) link_highlight_digital_pane_t1

0x514e,	// (0x00046e77) copy_highlight_primary_pane_g1

0x5165,	// (0x00046e8e) copy_highlight_primary_pane_t1

0x514e,	// (0x00046e77) copy_highlight_primary_small_pane_g1

0x5156,	// (0x00046e7f) copy_highlight_primary_small_pane_t1

0x3dd5,	// (0x00045afe) copy_highlight_secondary_pane_g1

0x3ddd,	// (0x00045b06) copy_highlight_secondary_pane_t1

0x5137,	// (0x00046e60) copy_highlight_title_pane_g1

0x513f,	// (0x00046e68) copy_highlight_title_pane_t1

0x514e,	// (0x00046e77) copy_highlight_digital_pane_g1

0x645f,	// (0x00048188) copy_highlight_digital_pane_t1

0x63b3,	// (0x000480dc) graphic_text_primary_pane_g1

0x6443,	// (0x0004816c) graphic_text_primary_pane_t1

0x6451,	// (0x0004817a) graphic_text_primary_pane_t2

0x0001,

0xf9df,	// (0x00051708) graphic_text_primary_pane_t

0x641f,	// (0x00048148) graphic_text_primary_small_pane_g1

0x6427,	// (0x00048150) graphic_text_primary_small_pane_t1

0x6435,	// (0x0004815e) graphic_text_primary_small_pane_t2

0x0001,

0xf9da,	// (0x00051703) graphic_text_primary_small_pane_t

0x63fb,	// (0x00048124) graphic_text_secondary_pane_g1

0x6403,	// (0x0004812c) graphic_text_secondary_pane_t1

0x6411,	// (0x0004813a) graphic_text_secondary_pane_t2

0x0001,

0xf9d5,	// (0x000516fe) graphic_text_secondary_pane_t

0x63d7,	// (0x00048100) graphic_text_title_pane_g1

0x63df,	// (0x00048108) graphic_text_title_pane_t1

0x63ed,	// (0x00048116) graphic_text_title_pane_t2

0x0001,

0xf9d0,	// (0x000516f9) graphic_text_title_pane_t

0x63b3,	// (0x000480dc) graphic_text_digital_pane_g1

0x63bb,	// (0x000480e4) graphic_text_digital_pane_t1

0x63c9,	// (0x000480f2) graphic_text_digital_pane_t2

0x0001,

0xf9cb,	// (0x000516f4) graphic_text_digital_pane_t

0x2745,	// (0x0004446e) navi_icon_pane_srt_ParamLimits

0x2745,	// (0x0004446e) navi_icon_pane_srt

0xda9c,	// (0x0004f7c5) navi_midp_pane_srt

0xda9c,	// (0x0004f7c5) navi_navi_pane_srt

0x2745,	// (0x0004446e) navi_text_pane_srt_ParamLimits

0x2745,	// (0x0004446e) navi_text_pane_srt

0x637e,	// (0x000480a7) navi_navi_icon_text_pane_srt

0x6386,	// (0x000480af) navi_navi_pane_srt_g1_ParamLimits

0x6386,	// (0x000480af) navi_navi_pane_srt_g1

0x6398,	// (0x000480c1) navi_navi_pane_srt_g2_ParamLimits

0x6398,	// (0x000480c1) navi_navi_pane_srt_g2

0x0001,

0xf9c6,	// (0x000516ef) navi_navi_pane_srt_g_ParamLimits

0xf9c6,	// (0x000516ef) navi_navi_pane_srt_g

0x63aa,	// (0x000480d3) navi_navi_tabs_pane_srt

0x637e,	// (0x000480a7) navi_navi_text_pane_srt

0x637e,	// (0x000480a7) navi_navi_volume_pane_srt

0x636f,	// (0x00048098) navi_navi_text_pane_srt_t1

0x18ac,	// (0x000435d5) navi_navi_volume_pane_srt_g1

0x18b4,	// (0x000435dd) volume_small_pane_srt_ParamLimits

0x18b4,	// (0x000435dd) volume_small_pane_srt

0x129f,	// (0x00042fc8) volume_small_pane_srt_g1_ParamLimits

0x129f,	// (0x00042fc8) volume_small_pane_srt_g1

0x12af,	// (0x00042fd8) volume_small_pane_srt_g2_ParamLimits

0x12af,	// (0x00042fd8) volume_small_pane_srt_g2

0x12c0,	// (0x00042fe9) volume_small_pane_srt_g3_ParamLimits

0x12c0,	// (0x00042fe9) volume_small_pane_srt_g3

0x12d1,	// (0x00042ffa) volume_small_pane_srt_g4_ParamLimits

0x12d1,	// (0x00042ffa) volume_small_pane_srt_g4

0x12e2,	// (0x0004300b) volume_small_pane_srt_g5_ParamLimits

0x12e2,	// (0x0004300b) volume_small_pane_srt_g5

0x12f3,	// (0x0004301c) volume_small_pane_srt_g6_ParamLimits

0x12f3,	// (0x0004301c) volume_small_pane_srt_g6

0x1304,	// (0x0004302d) volume_small_pane_srt_g7_ParamLimits

0x1304,	// (0x0004302d) volume_small_pane_srt_g7

0x1315,	// (0x0004303e) volume_small_pane_srt_g8_ParamLimits

0x1315,	// (0x0004303e) volume_small_pane_srt_g8

0x1326,	// (0x0004304f) volume_small_pane_srt_g9_ParamLimits

0x1326,	// (0x0004304f) volume_small_pane_srt_g9

0x1337,	// (0x00043060) volume_small_pane_srt_g10_ParamLimits

0x1337,	// (0x00043060) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x000514a3) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x000514a3) volume_small_pane_srt_g

0x2b2c,	// (0x00044855) query_popup_data_pane_cp2

0x6355,	// (0x0004807e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6355,	// (0x0004807e) navi_navi_icon_text_pane_srt_t1

0x53d6,	// (0x000470ff) navi_tabs_2_long_pane_srt

0x53d6,	// (0x000470ff) navi_tabs_2_pane_srt

0x53d6,	// (0x000470ff) navi_tabs_3_long_pane_srt

0x53d6,	// (0x000470ff) navi_tabs_3_pane_srt

0x53d6,	// (0x000470ff) navi_tabs_4_pane_srt

0x188c,	// (0x000435b5) tabs_2_active_pane_srt_ParamLimits

0x188c,	// (0x000435b5) tabs_2_active_pane_srt

0x189c,	// (0x000435c5) tabs_2_passive_pane_srt_ParamLimits

0x189c,	// (0x000435c5) tabs_2_passive_pane_srt

0x4be2,	// (0x0004690b) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4be2,	// (0x0004690b) bg_passive_tab_pane_cp1_srt

0x6321,	// (0x0004804a) bg_passive_tab_pane_g1_cp1_srt

0x387f,	// (0x000455a8) bg_passive_tab_pane_g2_cp1_srt

0x632a,	// (0x00048053) bg_passive_tab_pane_g3_cp1_srt

0x29c1,	// (0x000446ea) bg_active_tab_pane_cp1_srt_ParamLimits

0x29c1,	// (0x000446ea) bg_active_tab_pane_cp1_srt

0x6333,	// (0x0004805c) tabs_2_active_pane_srt_g1

0xdadc,	// (0x0004f805) tabs_2_active_pane_srt_t1_ParamLimits

0xdadc,	// (0x0004f805) tabs_2_active_pane_srt_t1

0x6321,	// (0x0004804a) bg_active_tab_pane_g1_cp1_srt

0x387f,	// (0x000455a8) bg_active_tab_pane_g2_cp1_srt

0x632a,	// (0x00048053) bg_active_tab_pane_g3_cp1_srt

0x1859,	// (0x00043582) tabs_3_active_pane_srt_ParamLimits

0x1859,	// (0x00043582) tabs_3_active_pane_srt

0x186a,	// (0x00043593) tabs_3_passive_pane_cp_srt_ParamLimits

0x186a,	// (0x00043593) tabs_3_passive_pane_cp_srt

0x187b,	// (0x000435a4) tabs_3_passive_pane_srt_ParamLimits

0x187b,	// (0x000435a4) tabs_3_passive_pane_srt

0x4be2,	// (0x0004690b) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4be2,	// (0x0004690b) bg_passive_tab_pane_cp2_srt

0x3dec,	// (0x00045b15) bg_passive_tab_pane_g1_cp2_srt

0x387f,	// (0x000455a8) bg_passive_tab_pane_g2_cp2_srt

0x3df5,	// (0x00045b1e) bg_passive_tab_pane_g3_cp2_srt

0x29c1,	// (0x000446ea) bg_active_tab_pane_cp2_srt_ParamLimits

0x29c1,	// (0x000446ea) bg_active_tab_pane_cp2_srt

0x6307,	// (0x00048030) tabs_3_active_pane_srt_g1

0xdac6,	// (0x0004f7ef) tabs_3_active_pane_srt_t1_ParamLimits

0xdac6,	// (0x0004f7ef) tabs_3_active_pane_srt_t1

0x3dec,	// (0x00045b15) bg_active_tab_pane_g1_cp2_srt

0x387f,	// (0x000455a8) bg_active_tab_pane_g2_cp2_srt

0x3df5,	// (0x00045b1e) bg_active_tab_pane_g3_cp2_srt

0x1811,	// (0x0004353a) tabs_4_active_pane_srt_ParamLimits

0x1811,	// (0x0004353a) tabs_4_active_pane_srt

0x1823,	// (0x0004354c) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1823,	// (0x0004354c) tabs_4_passive_pane_cp2_srt

0x3f4a,	// (0x00045c73) aid_size_cell_toolbar

0x5f29,	// (0x00047c52) main_idle_act_pane_ParamLimits

0x4179,	// (0x00045ea2) popup_large_graphic_colour_window_ParamLimits

0xd109,	// (0x0004ee32) popup_toolbar_window_ParamLimits

0xd109,	// (0x0004ee32) popup_toolbar_window

0x6121,	// (0x00047e4a) list_single_graphic_2heading_pane_ParamLimits

0x6121,	// (0x00047e4a) list_single_graphic_2heading_pane

0x338b,	// (0x000450b4) aid_size_cell_apps_grid_lsc_pane

0x339d,	// (0x000450c6) aid_size_cell_apps_grid_prt_pane

0x3fb4,	// (0x00045cdd) bg_wml_button_pane_cp1_ParamLimits

0x3fb4,	// (0x00045cdd) bg_wml_button_pane_cp1

0xd5e3,	// (0x0004f30c) form_midp_field_text_pane_t1_ParamLimits

0x4be2,	// (0x0004690b) input_focus_pane_cp050_ParamLimits

0x4df9,	// (0x00046b22) list_midp_form_text_pane_ParamLimits

0x4dab,	// (0x00046ad4) input_focus_pane_cp051_ParamLimits

0x4dbf,	// (0x00046ae8) list_midp_choice_pane_ParamLimits

0xd59a,	// (0x0004f2c3) list_single_2graphic_pane_cp3_ParamLimits

0xd59a,	// (0x0004f2c3) list_single_2graphic_pane_cp3

0x6fb5,	// (0x00048cde) list_single_midp_graphic_pane_ParamLimits

0x6fb5,	// (0x00048cde) list_single_midp_graphic_pane

0x0396,	// (0x000420bf) list_single_graphic_2heading_pane_g1_ParamLimits

0x0396,	// (0x000420bf) list_single_graphic_2heading_pane_g1

0x03a2,	// (0x000420cb) list_single_graphic_2heading_pane_g4_ParamLimits

0x03a2,	// (0x000420cb) list_single_graphic_2heading_pane_g4

0x03ae,	// (0x000420d7) list_single_graphic_2heading_pane_g5_ParamLimits

0x03ae,	// (0x000420d7) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x000514f6) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x000514f6) list_single_graphic_2heading_pane_g

0x03ba,	// (0x000420e3) list_single_graphic_2heading_pane_t1_ParamLimits

0x03ba,	// (0x000420e3) list_single_graphic_2heading_pane_t1

0x03ce,	// (0x000420f7) list_single_graphic_2heading_pane_t2_ParamLimits

0x03ce,	// (0x000420f7) list_single_graphic_2heading_pane_t2

0x03ea,	// (0x00042113) list_single_graphic_2heading_pane_t3_ParamLimits

0x03ea,	// (0x00042113) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x000514fd) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x000514fd) list_single_graphic_2heading_pane_t

0x4a2e,	// (0x00046757) bg_popup_sub_pane_cp2

0x4a58,	// (0x00046781) grid_toobar_pane

0x149e,	// (0x000431c7) cell_toolbar_pane_ParamLimits

0x149e,	// (0x000431c7) cell_toolbar_pane

0x4a94,	// (0x000467bd) cell_toolbar_pane_g1_ParamLimits

0x4a94,	// (0x000467bd) cell_toolbar_pane_g1

0x4aa8,	// (0x000467d1) cell_toolbar_pane_g2_ParamLimits

0x4aa8,	// (0x000467d1) cell_toolbar_pane_g2

0x0001,

0xf7e2,	// (0x0005150b) cell_toolbar_pane_g_ParamLimits

0xf7e2,	// (0x0005150b) cell_toolbar_pane_g

0x4aca,	// (0x000467f3) grid_highlight_pane_cp2_ParamLimits

0x4aca,	// (0x000467f3) grid_highlight_pane_cp2

0x4ae4,	// (0x0004680d) toolbar_button_pane

0x4af0,	// (0x00046819) toolbar_button_pane_g1

0x4af8,	// (0x00046821) toolbar_button_pane_g2

0x4b00,	// (0x00046829) toolbar_button_pane_g3

0x4b08,	// (0x00046831) toolbar_button_pane_g4

0x4b10,	// (0x00046839) toolbar_button_pane_g5

0x4b18,	// (0x00046841) toolbar_button_pane_g6

0x4b20,	// (0x00046849) toolbar_button_pane_g7

0x4b28,	// (0x00046851) toolbar_button_pane_g8

0x4b30,	// (0x00046859) toolbar_button_pane_g9

0x0009,

0xf7e7,	// (0x00051510) toolbar_button_pane_g

0x14e2,	// (0x0004320b) list_single_2graphic_pane_g1_cp3_ParamLimits

0x14e2,	// (0x0004320b) list_single_2graphic_pane_g1_cp3

0xc25b,	// (0x0004df84) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc25b,	// (0x0004df84) list_single_2graphic_pane_g2_cp3

0x3a60,	// (0x00045789) list_single_2graphic_pane_g3_cp3

0x14ff,	// (0x00043228) list_single_2graphic_pane_g4_cp3_ParamLimits

0x14ff,	// (0x00043228) list_single_2graphic_pane_g4_cp3

0x150b,	// (0x00043234) list_single_2graphic_pane_t1_cp3_ParamLimits

0x150b,	// (0x00043234) list_single_2graphic_pane_t1_cp3

0x3a54,	// (0x0004577d) list_single_midp_graphic_pane_g2_ParamLimits

0x3a54,	// (0x0004577d) list_single_midp_graphic_pane_g2

0x037e,	// (0x000420a7) aid_zoom_text_primary

0x0386,	// (0x000420af) aid_zoom_text_secondary

0x3ea9,	// (0x00045bd2) status_small_pane_g7_ParamLimits

0x3ea9,	// (0x00045bd2) status_small_pane_g7

0x3ecc,	// (0x00045bf5) status_small_pane_t1_ParamLimits

0xba19,	// (0x0004d742) title_pane_g2

0x0003,

0xf56a,	// (0x00051293) title_pane_g

0xbcb1,	// (0x0004d9da) aid_size_cell_colour_1_pane_ParamLimits

0xbcb1,	// (0x0004d9da) aid_size_cell_colour_1_pane

0xbcc5,	// (0x0004d9ee) aid_size_cell_colour_2_pane_ParamLimits

0xbcc5,	// (0x0004d9ee) aid_size_cell_colour_2_pane

0xbcd9,	// (0x0004da02) aid_size_cell_colour_3_pane_ParamLimits

0xbcd9,	// (0x0004da02) aid_size_cell_colour_3_pane

0xbced,	// (0x0004da16) aid_size_cell_colour_4_pane_ParamLimits

0xbced,	// (0x0004da16) aid_size_cell_colour_4_pane

0x0ed6,	// (0x00042bff) title_pane_stacon_g1_ParamLimits

0x0ed6,	// (0x00042bff) title_pane_stacon_g1

0x51bc,	// (0x00046ee5) popup_note_wait_window_g3_ParamLimits

0x51bc,	// (0x00046ee5) popup_note_wait_window_g3

0x5233,	// (0x00046f5c) popup_note_wait_window_t5_ParamLimits

0x5233,	// (0x00046f5c) popup_note_wait_window_t5

0xda9c,	// (0x0004f7c5) main_feb_china_hwr_fs_writing_pane

0xcaa4,	// (0x0004e7cd) popup_feb_china_hwr_fs_window_ParamLimits

0xcaa4,	// (0x0004e7cd) popup_feb_china_hwr_fs_window

0xc26c,	// (0x0004df95) aid_size_cell_hwr_fs_ParamLimits

0xc26c,	// (0x0004df95) aid_size_cell_hwr_fs

0x4be2,	// (0x0004690b) bg_popup_sub_pane_cp3_ParamLimits

0x4be2,	// (0x0004690b) bg_popup_sub_pane_cp3

0xc281,	// (0x0004dfaa) grid_hwr_fs_pane_ParamLimits

0xc281,	// (0x0004dfaa) grid_hwr_fs_pane

0x1569,	// (0x00043292) linegrid_hwr_fs_pane_ParamLimits

0x1569,	// (0x00043292) linegrid_hwr_fs_pane

0xc299,	// (0x0004dfc2) cell_hwr_fs_pane_ParamLimits

0xc299,	// (0x0004dfc2) cell_hwr_fs_pane

0x4bee,	// (0x00046917) linegrid_hwr_fs_pane_g1_ParamLimits

0x4bee,	// (0x00046917) linegrid_hwr_fs_pane_g1

0xd56e,	// (0x0004f297) linegrid_hwr_fs_pane_g2_ParamLimits

0xd56e,	// (0x0004f297) linegrid_hwr_fs_pane_g2

0x4c0c,	// (0x00046935) linegrid_hwr_fs_pane_g3_ParamLimits

0x4c0c,	// (0x00046935) linegrid_hwr_fs_pane_g3

0x159d,	// (0x000432c6) linegrid_hwr_fs_pane_g4_ParamLimits

0x159d,	// (0x000432c6) linegrid_hwr_fs_pane_g4

0x15bb,	// (0x000432e4) linegrid_hwr_fs_pane_g5_ParamLimits

0x15bb,	// (0x000432e4) linegrid_hwr_fs_pane_g5

0x0004,

0xf80d,	// (0x00051536) linegrid_hwr_fs_pane_g_ParamLimits

0xf80d,	// (0x00051536) linegrid_hwr_fs_pane_g

0x4c18,	// (0x00046941) cell_hwr_fs_pane_g1_ParamLimits

0x4c18,	// (0x00046941) cell_hwr_fs_pane_g1

0x4965,	// (0x0004668e) cell_hwr_fs_pane_g2_ParamLimits

0x4965,	// (0x0004668e) cell_hwr_fs_pane_g2

0xd580,	// (0x0004f2a9) cell_hwr_fs_pane_g3_ParamLimits

0xd580,	// (0x0004f2a9) cell_hwr_fs_pane_g3

0xd58d,	// (0x0004f2b6) cell_hwr_fs_pane_g4_ParamLimits

0xd58d,	// (0x0004f2b6) cell_hwr_fs_pane_g4

0x0003,

0xf818,	// (0x00051541) cell_hwr_fs_pane_g_ParamLimits

0xf818,	// (0x00051541) cell_hwr_fs_pane_g

0xc2bf,	// (0x0004dfe8) cell_hwr_fs_pane_t1

0xda9c,	// (0x0004f7c5) grid_highlight_pane_cp6

0xda9c,	// (0x0004f7c5) main_idle_act2_pane

0x3141,	// (0x00044e6a) aid_inside_area_popup_secondary

0xd667,	// (0x0004f390) aid_inside_area_window_primary_ParamLimits

0xd667,	// (0x0004f390) aid_inside_area_window_primary

0x646e,	// (0x00048197) ai2_news_ticker_pane

0x6476,	// (0x0004819f) aid_size_cell_ai1_link_ParamLimits

0x6476,	// (0x0004819f) aid_size_cell_ai1_link

0x6490,	// (0x000481b9) popup_ai2_data_window_ParamLimits

0x6490,	// (0x000481b9) popup_ai2_data_window

0x64ae,	// (0x000481d7) popup_ai2_link_window_ParamLimits

0x64ae,	// (0x000481d7) popup_ai2_link_window

0x4be2,	// (0x0004690b) bg_popup_sub_pane_cp4_ParamLimits

0x4be2,	// (0x0004690b) bg_popup_sub_pane_cp4

0x64c4,	// (0x000481ed) grid_ai2_link_pane_ParamLimits

0x64c4,	// (0x000481ed) grid_ai2_link_pane

0x64db,	// (0x00048204) popup_ai2_link_window_g1_ParamLimits

0x64db,	// (0x00048204) popup_ai2_link_window_g1

0x64e7,	// (0x00048210) popup_ai2_link_window_g2_ParamLimits

0x64e7,	// (0x00048210) popup_ai2_link_window_g2

0x0001,

0xf9e4,	// (0x0005170d) popup_ai2_link_window_g_ParamLimits

0xf9e4,	// (0x0005170d) popup_ai2_link_window_g

0x64f8,	// (0x00048221) ai2_mp_button_pane

0x6500,	// (0x00048229) ai2_mp_volume_pane

0x4dab,	// (0x00046ad4) bg_popup_sub_pane_cp5_ParamLimits

0x4dab,	// (0x00046ad4) bg_popup_sub_pane_cp5

0x6508,	// (0x00048231) heading_ai2_gene_pane_ParamLimits

0x6508,	// (0x00048231) heading_ai2_gene_pane

0x6514,	// (0x0004823d) list_ai2_gene_pane_ParamLimits

0x6514,	// (0x0004823d) list_ai2_gene_pane

0x655c,	// (0x00048285) cell_ai2_link_pane_ParamLimits

0x655c,	// (0x00048285) cell_ai2_link_pane

0x6572,	// (0x0004829b) cell_ai2_link_pane_g1

0xda9c,	// (0x0004f7c5) grid_highlight_pane_cp7

0x18c9,	// (0x000435f2) ai2_mp_volume_pane_g1

0x6645,	// (0x0004836e) ai2_mp_volume_pane_g2

0x65ba,	// (0x000482e3) list_ai2_gene_pane_t1

0x664d,	// (0x00048376) ai2_mp_volume_pane_g3

0x0002,

0xf9fd,	// (0x00051726) ai2_mp_volume_pane_g

0x18d1,	// (0x000435fa) volume_small_pane_cp3

0x6655,	// (0x0004837e) aid_size_cell_ai2_button

0x665d,	// (0x00048386) grid_ai2_button_pane

0x6666,	// (0x0004838f) cell_ai2_button_pane_ParamLimits

0x6666,	// (0x0004838f) cell_ai2_button_pane

0xda92,	// (0x0004f7bb) cell_ai2_button_pane_g1

0xda9c,	// (0x0004f7c5) grid_highlight_pane_cp8

0x6605,	// (0x0004832e) ai2_gene_pane_t1_ParamLimits

0x6605,	// (0x0004832e) ai2_gene_pane_t1

0xca22,	// (0x0004e74b) aid_height_parent_landscape

0xd837,	// (0x0004f560) aid_height_set_list

0x5f29,	// (0x00047c52) aid_size_parent

0x628f,	// (0x00047fb8) aid_size_cell_graphic_pane_ParamLimits

0x6524,	// (0x0004824d) popup_ai2_data_window_g1_ParamLimits

0x6524,	// (0x0004824d) popup_ai2_data_window_g1

0x6530,	// (0x00048259) ai2_news_ticker_pane_g1

0x6538,	// (0x00048261) ai2_news_ticker_pane_g2

0x0001,

0xf9e9,	// (0x00051712) ai2_news_ticker_pane_g

0x6540,	// (0x00048269) ai2_news_ticker_pane_t1

0x654e,	// (0x00048277) ai2_news_ticker_pane_t2

0x0001,

0xf9ee,	// (0x00051717) ai2_news_ticker_pane_t

0x657b,	// (0x000482a4) heading_ai2_gene_pane_g1

0x6583,	// (0x000482ac) heading_ai2_gene_pane_t1_ParamLimits

0x6583,	// (0x000482ac) heading_ai2_gene_pane_t1

0x6598,	// (0x000482c1) list_highlight_pane_cp6

0x65a0,	// (0x000482c9) ai2_gene_pane_ParamLimits

0x65a0,	// (0x000482c9) ai2_gene_pane

0x65c8,	// (0x000482f1) list_ai2_gene_pane_t2

0x0001,

0xf9f3,	// (0x0005171c) list_ai2_gene_pane_t

0x65d6,	// (0x000482ff) list_highlight_pane_cp8_ParamLimits

0x65d6,	// (0x000482ff) list_highlight_pane_cp8

0x65e7,	// (0x00048310) ai2_gene_pane_g1_ParamLimits

0x65e7,	// (0x00048310) ai2_gene_pane_g1

0x65f9,	// (0x00048322) ai2_gene_pane_g2_ParamLimits

0x65f9,	// (0x00048322) ai2_gene_pane_g2

0x0001,

0xf9f8,	// (0x00051721) ai2_gene_pane_g_ParamLimits

0xf9f8,	// (0x00051721) ai2_gene_pane_g

0x2f62,	// (0x00044c8b) scroll_pane_cp12

0xc1fe,	// (0x0004df27) control_pane_t3_ParamLimits

0xc1fe,	// (0x0004df27) control_pane_t3

0x3ebd,	// (0x00045be6) status_small_pane_g8_ParamLimits

0x3ebd,	// (0x00045be6) status_small_pane_g8

0xcb46,	// (0x0004e86f) popup_find_window_ParamLimits

0xcdf3,	// (0x0004eb1c) popup_note_image_window_ParamLimits

0x0402,	// (0x0004212b) list_double2_graphic_pane_vc_g1_ParamLimits

0x0402,	// (0x0004212b) list_double2_graphic_pane_vc_g1

0x3ba7,	// (0x000458d0) list_double2_graphic_pane_vc_g2_ParamLimits

0x3ba7,	// (0x000458d0) list_double2_graphic_pane_vc_g2

0x14ce,	// (0x000431f7) list_double2_graphic_pane_vc_g3_ParamLimits

0x14ce,	// (0x000431f7) list_double2_graphic_pane_vc_g3

0x0002,

0xf7db,	// (0x00051504) list_double2_graphic_pane_vc_g_ParamLimits

0xf7db,	// (0x00051504) list_double2_graphic_pane_vc_g

0x040e,	// (0x00042137) list_double2_graphic_pane_vc_t1_ParamLimits

0x040e,	// (0x00042137) list_double2_graphic_pane_vc_t1

0x3ba7,	// (0x000458d0) list_single_heading_pane_vc_g1_ParamLimits

0x3ba7,	// (0x000458d0) list_single_heading_pane_vc_g1

0x14ce,	// (0x000431f7) list_single_heading_pane_vc_g2_ParamLimits

0x14ce,	// (0x000431f7) list_single_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x00051317) list_single_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x00051317) list_single_heading_pane_vc_g

0x0424,	// (0x0004214d) list_single_heading_pane_vc_t1_ParamLimits

0x0424,	// (0x0004214d) list_single_heading_pane_vc_t1

0x043a,	// (0x00042163) list_single_heading_pane_vc_t2_ParamLimits

0x043a,	// (0x00042163) list_single_heading_pane_vc_t2

0x0001,

0xf7fc,	// (0x00051525) list_single_heading_pane_vc_t_ParamLimits

0xf7fc,	// (0x00051525) list_single_heading_pane_vc_t

0x4b38,	// (0x00046861) list_setting_number_pane_vc_g1_ParamLimits

0x4b38,	// (0x00046861) list_setting_number_pane_vc_g1

0x4b44,	// (0x0004686d) list_setting_number_pane_vc_g2_ParamLimits

0x4b44,	// (0x0004686d) list_setting_number_pane_vc_g2

0x0001,

0xf801,	// (0x0005152a) list_setting_number_pane_vc_g_ParamLimits

0xf801,	// (0x0005152a) list_setting_number_pane_vc_g

0x4b50,	// (0x00046879) list_setting_number_pane_vc_t1_ParamLimits

0x4b50,	// (0x00046879) list_setting_number_pane_vc_t1

0x4b64,	// (0x0004688d) list_setting_number_pane_vc_t2_ParamLimits

0x4b64,	// (0x0004688d) list_setting_number_pane_vc_t2

0x4b80,	// (0x000468a9) list_setting_number_pane_vc_t3_ParamLimits

0x4b80,	// (0x000468a9) list_setting_number_pane_vc_t3

0x0002,

0xf806,	// (0x0005152f) list_setting_number_pane_vc_t_ParamLimits

0xf806,	// (0x0005152f) list_setting_number_pane_vc_t

0x4ba8,	// (0x000468d1) set_value_pane_vc_ParamLimits

0x4ba8,	// (0x000468d1) set_value_pane_vc

0x6121,	// (0x00047e4a) list_double2_graphic_pane_vc_ParamLimits

0x6121,	// (0x00047e4a) list_double2_graphic_pane_vc

0x6121,	// (0x00047e4a) list_double2_large_graphic_pane_vc_ParamLimits

0x6121,	// (0x00047e4a) list_double2_large_graphic_pane_vc

0x6121,	// (0x00047e4a) list_double2_pane_vc_ParamLimits

0x6121,	// (0x00047e4a) list_double2_pane_vc

0x6121,	// (0x00047e4a) list_double_graphic_heading_pane_vc_ParamLimits

0x6121,	// (0x00047e4a) list_double_graphic_heading_pane_vc

0x6121,	// (0x00047e4a) list_double_graphic_pane_vc_ParamLimits

0x6121,	// (0x00047e4a) list_double_graphic_pane_vc

0x6121,	// (0x00047e4a) list_double_heading_pane_vc_ParamLimits

0x6121,	// (0x00047e4a) list_double_heading_pane_vc

0x6121,	// (0x00047e4a) list_double_large_graphic_pane_vc_ParamLimits

0x6121,	// (0x00047e4a) list_double_large_graphic_pane_vc

0x6121,	// (0x00047e4a) list_double_number_pane_vc_ParamLimits

0x6121,	// (0x00047e4a) list_double_number_pane_vc

0x6121,	// (0x00047e4a) list_double_pane_vc_ParamLimits

0x6121,	// (0x00047e4a) list_double_pane_vc

0x6121,	// (0x00047e4a) list_double_time_pane_vc_ParamLimits

0x6121,	// (0x00047e4a) list_double_time_pane_vc

0x6121,	// (0x00047e4a) list_setting_number_pane_vc_ParamLimits

0x6121,	// (0x00047e4a) list_setting_number_pane_vc

0x6121,	// (0x00047e4a) list_setting_pane_vc_ParamLimits

0x6121,	// (0x00047e4a) list_setting_pane_vc

0x6121,	// (0x00047e4a) list_single_graphic_heading_pane_vc_ParamLimits

0x6121,	// (0x00047e4a) list_single_graphic_heading_pane_vc

0x6121,	// (0x00047e4a) list_single_heading_pane_vc_ParamLimits

0x6121,	// (0x00047e4a) list_single_heading_pane_vc

0x6121,	// (0x00047e4a) list_single_number_heading_pane_vc_ParamLimits

0x6121,	// (0x00047e4a) list_single_number_heading_pane_vc

0x0402,	// (0x0004212b) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0402,	// (0x0004212b) list_double_graphic_heading_pane_vc_g1

0x18da,	// (0x00043603) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x18da,	// (0x00043603) list_double_graphic_heading_pane_vc_g2

0x18e6,	// (0x0004360f) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x18e6,	// (0x0004360f) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa04,	// (0x0005172d) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa04,	// (0x0005172d) list_double_graphic_heading_pane_vc_g

0x04f0,	// (0x00042219) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x04f0,	// (0x00042219) list_double_graphic_heading_pane_vc_t1

0x0424,	// (0x0004214d) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0424,	// (0x0004214d) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa0b,	// (0x00051734) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa0b,	// (0x00051734) list_double_graphic_heading_pane_vc_t

0x4b38,	// (0x00046861) list_setting_pane_vc_g1_ParamLimits

0x4b38,	// (0x00046861) list_setting_pane_vc_g1

0x4b44,	// (0x0004686d) list_setting_pane_vc_g2_ParamLimits

0x4b44,	// (0x0004686d) list_setting_pane_vc_g2

0x0001,

0xf801,	// (0x0005152a) list_setting_pane_vc_g_ParamLimits

0xf801,	// (0x0005152a) list_setting_pane_vc_g

0x68e4,	// (0x0004860d) list_setting_pane_vc_t1_ParamLimits

0x68e4,	// (0x0004860d) list_setting_pane_vc_t1

0x68f8,	// (0x00048621) list_setting_pane_vc_t2_ParamLimits

0x68f8,	// (0x00048621) list_setting_pane_vc_t2

0x0001,

0xfa4e,	// (0x00051777) list_setting_pane_vc_t_ParamLimits

0xfa4e,	// (0x00051777) list_setting_pane_vc_t

0x4ba8,	// (0x000468d1) set_value_pane_cp_vc_ParamLimits

0x4ba8,	// (0x000468d1) set_value_pane_cp_vc

0x3ba7,	// (0x000458d0) list_single_number_heading_pane_vc_g1_ParamLimits

0x3ba7,	// (0x000458d0) list_single_number_heading_pane_vc_g1

0x14ce,	// (0x000431f7) list_single_number_heading_pane_vc_g2_ParamLimits

0x14ce,	// (0x000431f7) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x00051317) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x00051317) list_single_number_heading_pane_vc_g

0x0424,	// (0x0004214d) list_single_number_heading_pane_vc_t1_ParamLimits

0x0424,	// (0x0004214d) list_single_number_heading_pane_vc_t1

0x0504,	// (0x0004222d) list_single_number_heading_pane_vc_t2_ParamLimits

0x0504,	// (0x0004222d) list_single_number_heading_pane_vc_t2

0x0518,	// (0x00042241) list_single_number_heading_pane_vc_t3_ParamLimits

0x0518,	// (0x00042241) list_single_number_heading_pane_vc_t3

0x0002,

0xfa53,	// (0x0005177c) list_single_number_heading_pane_vc_t_ParamLimits

0xfa53,	// (0x0005177c) list_single_number_heading_pane_vc_t

0x0402,	// (0x0004212b) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0402,	// (0x0004212b) list_single_graphic_heading_pane_vc_g1

0x3ba7,	// (0x000458d0) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3ba7,	// (0x000458d0) list_single_graphic_heading_pane_vc_g4

0x14ce,	// (0x000431f7) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x14ce,	// (0x000431f7) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7db,	// (0x00051504) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x00051504) list_single_graphic_heading_pane_vc_g

0x0424,	// (0x0004214d) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0424,	// (0x0004214d) list_single_graphic_heading_pane_vc_t1

0x052a,	// (0x00042253) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x052a,	// (0x00042253) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa5a,	// (0x00051783) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa5a,	// (0x00051783) list_single_graphic_heading_pane_vc_t

0x3ba7,	// (0x000458d0) list_double2_pane_vc_g1_ParamLimits

0x3ba7,	// (0x000458d0) list_double2_pane_vc_g1

0x14ce,	// (0x000431f7) list_double2_pane_vc_g2_ParamLimits

0x14ce,	// (0x000431f7) list_double2_pane_vc_g2

0x0001,

0xf5ee,	// (0x00051317) list_double2_pane_vc_g_ParamLimits

0xf5ee,	// (0x00051317) list_double2_pane_vc_g

0x053e,	// (0x00042267) list_double2_pane_vc_t1_ParamLimits

0x053e,	// (0x00042267) list_double2_pane_vc_t1

0x18f2,	// (0x0004361b) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x18f2,	// (0x0004361b) list_double2_large_graphic_pane_vc_g1

0x3ba7,	// (0x000458d0) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3ba7,	// (0x000458d0) list_double2_large_graphic_pane_vc_g2

0x14ce,	// (0x000431f7) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x14ce,	// (0x000431f7) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf606,	// (0x0005132f) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf606,	// (0x0005132f) list_double2_large_graphic_pane_vc_g

0x0554,	// (0x0004227d) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0554,	// (0x0004227d) list_double2_large_graphic_pane_vc_t1

0x18fe,	// (0x00043627) list_double_time_pane_vc_g1_ParamLimits

0x18fe,	// (0x00043627) list_double_time_pane_vc_g1

0x190a,	// (0x00043633) list_double_time_pane_vc_g2_ParamLimits

0x190a,	// (0x00043633) list_double_time_pane_vc_g2

0x0001,

0xfa5f,	// (0x00051788) list_double_time_pane_vc_g_ParamLimits

0xfa5f,	// (0x00051788) list_double_time_pane_vc_g

0x056a,	// (0x00042293) list_double_time_pane_vc_t1_ParamLimits

0x056a,	// (0x00042293) list_double_time_pane_vc_t1

0x0583,	// (0x000422ac) list_double_time_pane_vc_t2_ParamLimits

0x0583,	// (0x000422ac) list_double_time_pane_vc_t2

0x05c3,	// (0x000422ec) list_double_time_pane_vc_t3_ParamLimits

0x05c3,	// (0x000422ec) list_double_time_pane_vc_t3

0x05db,	// (0x00042304) list_double_time_pane_vc_t4_ParamLimits

0x05db,	// (0x00042304) list_double_time_pane_vc_t4

0x0003,

0xfa64,	// (0x0005178d) list_double_time_pane_vc_t_ParamLimits

0xfa64,	// (0x0005178d) list_double_time_pane_vc_t

0x3ba7,	// (0x000458d0) list_double_pane_vc_g1_ParamLimits

0x3ba7,	// (0x000458d0) list_double_pane_vc_g1

0x14ce,	// (0x000431f7) list_double_pane_vc_g2_ParamLimits

0x14ce,	// (0x000431f7) list_double_pane_vc_g2

0x0001,

0xf5ee,	// (0x00051317) list_double_pane_vc_g_ParamLimits

0xf5ee,	// (0x00051317) list_double_pane_vc_g

0x05ef,	// (0x00042318) list_double_pane_vc_t1_ParamLimits

0x05ef,	// (0x00042318) list_double_pane_vc_t1

0x0601,	// (0x0004232a) list_double_pane_vc_t2_ParamLimits

0x0601,	// (0x0004232a) list_double_pane_vc_t2

0x0001,

0xfa6d,	// (0x00051796) list_double_pane_vc_t_ParamLimits

0xfa6d,	// (0x00051796) list_double_pane_vc_t

0x3ba7,	// (0x000458d0) list_double_number_pane_vc_g1_ParamLimits

0x3ba7,	// (0x000458d0) list_double_number_pane_vc_g1

0x14ce,	// (0x000431f7) list_double_number_pane_vc_g2_ParamLimits

0x14ce,	// (0x000431f7) list_double_number_pane_vc_g2

0x0001,

0xf5ee,	// (0x00051317) list_double_number_pane_vc_g_ParamLimits

0xf5ee,	// (0x00051317) list_double_number_pane_vc_g

0x0619,	// (0x00042342) list_double_number_pane_vc_t1_ParamLimits

0x0619,	// (0x00042342) list_double_number_pane_vc_t1

0x062d,	// (0x00042356) list_double_number_pane_vc_t2_ParamLimits

0x062d,	// (0x00042356) list_double_number_pane_vc_t2

0x0601,	// (0x0004232a) list_double_number_pane_vc_t3_ParamLimits

0x0601,	// (0x0004232a) list_double_number_pane_vc_t3

0x0002,

0xfa72,	// (0x0005179b) list_double_number_pane_vc_t_ParamLimits

0xfa72,	// (0x0005179b) list_double_number_pane_vc_t

0x1916,	// (0x0004363f) list_double_large_graphic_pane_vc_g1_ParamLimits

0x1916,	// (0x0004363f) list_double_large_graphic_pane_vc_g1

0x1922,	// (0x0004364b) list_double_large_graphic_pane_vc_g2_ParamLimits

0x1922,	// (0x0004364b) list_double_large_graphic_pane_vc_g2

0x14ce,	// (0x000431f7) list_double_large_graphic_pane_vc_g3_ParamLimits

0x14ce,	// (0x000431f7) list_double_large_graphic_pane_vc_g3

0x063f,	// (0x00042368) list_double_large_graphic_pane_vc_g4_ParamLimits

0x063f,	// (0x00042368) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa79,	// (0x000517a2) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa79,	// (0x000517a2) list_double_large_graphic_pane_vc_g

0x064b,	// (0x00042374) list_double_large_graphic_pane_vc_t1_ParamLimits

0x064b,	// (0x00042374) list_double_large_graphic_pane_vc_t1

0x065d,	// (0x00042386) list_double_large_graphic_pane_vc_t2_ParamLimits

0x065d,	// (0x00042386) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa82,	// (0x000517ab) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa82,	// (0x000517ab) list_double_large_graphic_pane_vc_t

0x18da,	// (0x00043603) list_double_heading_pane_vc_g1_ParamLimits

0x18da,	// (0x00043603) list_double_heading_pane_vc_g1

0x18e6,	// (0x0004360f) list_double_heading_pane_vc_g2_ParamLimits

0x18e6,	// (0x0004360f) list_double_heading_pane_vc_g2

0x0001,

0xfa06,	// (0x0005172f) list_double_heading_pane_vc_g_ParamLimits

0xfa06,	// (0x0005172f) list_double_heading_pane_vc_g

0x0676,	// (0x0004239f) list_double_heading_pane_vc_t1_ParamLimits

0x0676,	// (0x0004239f) list_double_heading_pane_vc_t1

0x0424,	// (0x0004214d) list_double_heading_pane_vc_t2_ParamLimits

0x0424,	// (0x0004214d) list_double_heading_pane_vc_t2

0x0001,

0xfa87,	// (0x000517b0) list_double_heading_pane_vc_t_ParamLimits

0xfa87,	// (0x000517b0) list_double_heading_pane_vc_t

0x0402,	// (0x0004212b) list_double_graphic_pane_vc_g1_ParamLimits

0x0402,	// (0x0004212b) list_double_graphic_pane_vc_g1

0x1931,	// (0x0004365a) list_double_graphic_pane_vc_g2_ParamLimits

0x1931,	// (0x0004365a) list_double_graphic_pane_vc_g2

0x1940,	// (0x00043669) list_double_graphic_pane_vc_g3_ParamLimits

0x1940,	// (0x00043669) list_double_graphic_pane_vc_g3

0x0002,

0xfa8c,	// (0x000517b5) list_double_graphic_pane_vc_g_ParamLimits

0xfa8c,	// (0x000517b5) list_double_graphic_pane_vc_g

0x068a,	// (0x000423b3) list_double_graphic_pane_vc_t1_ParamLimits

0x068a,	// (0x000423b3) list_double_graphic_pane_vc_t1

0x0601,	// (0x0004232a) list_double_graphic_pane_vc_t2_ParamLimits

0x0601,	// (0x0004232a) list_double_graphic_pane_vc_t2

0x0001,

0xfa93,	// (0x000517bc) list_double_graphic_pane_vc_t_ParamLimits

0xfa93,	// (0x000517bc) list_double_graphic_pane_vc_t

0x0982,	// (0x000426ab) aid_size_cell_fastswap

0xb863,	// (0x0004d58c) aid_size_cell_touch_ParamLimits

0xb863,	// (0x0004d58c) aid_size_cell_touch

0x0beb,	// (0x00042914) popup_fast_swap_wide_window_ParamLimits

0x0beb,	// (0x00042914) popup_fast_swap_wide_window

0xb9b2,	// (0x0004d6db) touch_pane_ParamLimits

0xb9b2,	// (0x0004d6db) touch_pane

0x2fc4,	// (0x00044ced) button_value_adjust_pane_cp2

0x00cc,	// (0x00041df5) button_value_adjust_pane_cp4

0x00f4,	// (0x00041e1d) form_field_data_pane_cp2

0xb4c6,	// (0x0004d1ef) form_field_data_wide_pane_cp2

0x345d,	// (0x00045186) bg_scroll_pane_ParamLimits

0x103b,	// (0x00042d64) scroll_handle_pane_ParamLimits

0x104f,	// (0x00042d78) scroll_sc2_down_pane_ParamLimits

0x104f,	// (0x00042d78) scroll_sc2_down_pane

0x348e,	// (0x000451b7) scroll_sc2_up_pane_ParamLimits

0x348e,	// (0x000451b7) scroll_sc2_up_pane

0xdc1d,	// (0x0004f946) grid_wheel_folder_pane_g1_ParamLimits

0xdc1d,	// (0x0004f946) grid_wheel_folder_pane_g1

0x1237,	// (0x00042f60) clock_nsta_pane_cp2_ParamLimits

0x1237,	// (0x00042f60) clock_nsta_pane_cp2

0xc0f2,	// (0x0004de1b) listscroll_midp_pane_ParamLimits

0xc948,	// (0x0004e671) midp_canvas_pane

0x3f38,	// (0x00045c61) nsta_clock_indic_pane

0x3f86,	// (0x00045caf) listscroll_form_pane_vc

0x3fa2,	// (0x00045ccb) listscroll_set_pane_vc_ParamLimits

0x3fa2,	// (0x00045ccb) listscroll_set_pane_vc

0xd268,	// (0x0004ef91) clock_nsta_pane

0xd292,	// (0x0004efbb) indicator_nsta_pane

0x4a2e,	// (0x00046757) bg_popup_sub_pane_cp2_ParamLimits

0x4a42,	// (0x0004676b) find_pane_cp2_ParamLimits

0x4a42,	// (0x0004676b) find_pane_cp2

0x4a58,	// (0x00046781) grid_toobar_pane_ParamLimits

0x4bb6,	// (0x000468df) list_form_gen_pane_vc_ParamLimits

0x4bb6,	// (0x000468df) list_form_gen_pane_vc

0x4bcc,	// (0x000468f5) scroll_pane_cp8_vc_ParamLimits

0x4bcc,	// (0x000468f5) scroll_pane_cp8_vc

0x4c48,	// (0x00046971) data_form_wide_pane_vc_ParamLimits

0x4c48,	// (0x00046971) data_form_wide_pane_vc

0x4c54,	// (0x0004697d) form_field_data_wide_pane_vc_g1

0x4c5c,	// (0x00046985) form_field_data_wide_pane_vc_t1_ParamLimits

0x4c5c,	// (0x00046985) form_field_data_wide_pane_vc_t1

0x2fd8,	// (0x00044d01) input_focus_pane_cp6_vc_ParamLimits

0x2fd8,	// (0x00044d01) input_focus_pane_cp6_vc

0xd60b,	// (0x0004f334) list_midp_pane_ParamLimits

0x62fb,	// (0x00048024) scroll_pane_cp16_ParamLimits

0x62fb,	// (0x00048024) scroll_pane_cp16

0x4f90,	// (0x00046cb9) button_value_adjust_pane_ParamLimits

0x4f90,	// (0x00046cb9) button_value_adjust_pane

0xd848,	// (0x0004f571) button_value_adjust_pane_cp6_ParamLimits

0xd848,	// (0x0004f571) button_value_adjust_pane_cp6

0xd98a,	// (0x0004f6b3) settings_code_pane_cp_ParamLimits

0xd98a,	// (0x0004f6b3) settings_code_pane_cp

0xda92,	// (0x0004f7bb) cell_touch_pane_g1

0xda92,	// (0x0004f7bb) cell_touch_pane_g2

0x0001,

0xf724,	// (0x0005144d) cell_touch_pane_g

0xdaf2,	// (0x0004f81b) cell_touch_pane_cp_ParamLimits

0xdaf2,	// (0x0004f81b) cell_touch_pane_cp

0xdb0e,	// (0x0004f837) cell_touch_pane_ParamLimits

0xdb0e,	// (0x0004f837) cell_touch_pane

0xda92,	// (0x0004f7bb) scroll_sc2_down_pane_g1

0xda92,	// (0x0004f7bb) scroll_sc2_up_pane_g1

0xda9c,	// (0x0004f7c5) bg_set_opt_pane_cp4_vc

0x6699,	// (0x000483c2) list_set_graphic_pane_vc_g1_ParamLimits

0x6699,	// (0x000483c2) list_set_graphic_pane_vc_g1

0x66a5,	// (0x000483ce) list_set_graphic_pane_vc_g2_ParamLimits

0x66a5,	// (0x000483ce) list_set_graphic_pane_vc_g2

0x0001,

0xfa10,	// (0x00051739) list_set_graphic_pane_vc_g_ParamLimits

0xfa10,	// (0x00051739) list_set_graphic_pane_vc_g

0x66b1,	// (0x000483da) text_primary_small_cp13_vc_ParamLimits

0x66b1,	// (0x000483da) text_primary_small_cp13_vc

0x66c9,	// (0x000483f2) list_set_graphic_pane_vc_ParamLimits

0x66c9,	// (0x000483f2) list_set_graphic_pane_vc

0xda9c,	// (0x0004f7c5) input_focus_pane_cp2_vc

0xda92,	// (0x0004f7bb) setting_code_pane_vc_g1

0x66dd,	// (0x00048406) setting_code_pane_vc_t1

0x66eb,	// (0x00048414) set_text_pane_vc_t1_ParamLimits

0x66eb,	// (0x00048414) set_text_pane_vc_t1

0xda9c,	// (0x0004f7c5) input_focus_pane_cp1_vc

0x6709,	// (0x00048432) list_set_text_pane_vc

0xda92,	// (0x0004f7bb) setting_text_pane_vc_g1

0xda9c,	// (0x0004f7c5) bg_set_opt_pane_cp2_vc

0x6713,	// (0x0004843c) setting_slider_graphic_pane_vc_g1

0x671b,	// (0x00048444) setting_slider_graphic_pane_vc_t1

0x6729,	// (0x00048452) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa15,	// (0x0005173e) setting_slider_graphic_pane_vc_t

0x6737,	// (0x00048460) slider_set_pane_cp_vc

0x673f,	// (0x00048468) slider_set_pane_vc_g1

0x6748,	// (0x00048471) slider_set_pane_vc_g2

0x0006,

0xfa1a,	// (0x00051743) slider_set_pane_vc_g

0x303f,	// (0x00044d68) set_opt_bg_pane_g1_copy1

0x3047,	// (0x00044d70) set_opt_bg_pane_g2_copy1

0x6774,	// (0x0004849d) set_opt_bg_pane_g3_copy1

0x3057,	// (0x00044d80) set_opt_bg_pane_g4_copy1

0x305f,	// (0x00044d88) set_opt_bg_pane_g5_copy1

0x3067,	// (0x00044d90) set_opt_bg_pane_g6_copy1

0x677e,	// (0x000484a7) set_opt_bg_pane_g7_copy1

0x6788,	// (0x000484b1) set_opt_bg_pane_g8_copy1

0x6792,	// (0x000484bb) set_opt_bg_pane_g9_copy1

0xda9c,	// (0x0004f7c5) bg_set_opt_pane_cp_vc

0x679c,	// (0x000484c5) setting_slider_pane_vc_t1

0x671b,	// (0x00048444) setting_slider_pane_vc_t2

0x6729,	// (0x00048452) setting_slider_pane_vc_t3

0x0002,

0xfa29,	// (0x00051752) setting_slider_pane_vc_t

0x6737,	// (0x00048460) slider_set_pane_vc

0x15df,	// (0x00043308) volume_set_pane_vc_g1

0x15e8,	// (0x00043311) volume_set_pane_vc_g2

0x15f1,	// (0x0004331a) volume_set_pane_vc_g3

0x15fa,	// (0x00043323) volume_set_pane_vc_g4

0x1603,	// (0x0004332c) volume_set_pane_vc_g5

0x160c,	// (0x00043335) volume_set_pane_vc_g6

0x1615,	// (0x0004333e) volume_set_pane_vc_g7

0x161e,	// (0x00043347) volume_set_pane_vc_g8

0x1627,	// (0x00043350) volume_set_pane_vc_g9

0x1630,	// (0x00043359) volume_set_pane_vc_g10

0x0009,

0xfa30,	// (0x00051759) volume_set_pane_vc_g

0x67ab,	// (0x000484d4) volume_set_pane_vc

0x67b3,	// (0x000484dc) button_value_adjust_pane_cp1_vc

0x67bd,	// (0x000484e6) list_highlight_pane_cp2_vc

0x67c6,	// (0x000484ef) list_set_pane_vc_ParamLimits

0x67c6,	// (0x000484ef) list_set_pane_vc

0x6872,	// (0x0004859b) main_pane_set_vc_t1_ParamLimits

0x6872,	// (0x0004859b) main_pane_set_vc_t1

0x6887,	// (0x000485b0) main_pane_set_vc_t2_ParamLimits

0x6887,	// (0x000485b0) main_pane_set_vc_t2

0x6899,	// (0x000485c2) main_pane_set_vc_t3_ParamLimits

0x6899,	// (0x000485c2) main_pane_set_vc_t3

0x68ad,	// (0x000485d6) main_pane_set_vc_t4_ParamLimits

0x68ad,	// (0x000485d6) main_pane_set_vc_t4

0x0003,

0xfa45,	// (0x0005176e) main_pane_set_vc_t_ParamLimits

0xfa45,	// (0x0005176e) main_pane_set_vc_t

0x68c1,	// (0x000485ea) setting_code_pane_vc_ParamLimits

0x68c1,	// (0x000485ea) setting_code_pane_vc

0x68d2,	// (0x000485fb) setting_slider_graphic_pane_vc

0x68d2,	// (0x000485fb) setting_slider_pane_vc

0x68d2,	// (0x000485fb) setting_text_pane_vc

0x68d2,	// (0x000485fb) setting_volume_pane_vc

0x68dc,	// (0x00048605) scroll_pane_cp121_vc

0x2fb2,	// (0x00044cdb) set_content_pane_vc

0x691a,	// (0x00048643) button_value_adjust_pane_g1

0x6923,	// (0x0004864c) button_value_adjust_pane_g2

0x0001,

0xfa98,	// (0x000517c1) button_value_adjust_pane_g

0x692c,	// (0x00048655) form_field_slider_wide_pane_vc_t1_ParamLimits

0x692c,	// (0x00048655) form_field_slider_wide_pane_vc_t1

0x6940,	// (0x00048669) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6940,	// (0x00048669) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa9d,	// (0x000517c6) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa9d,	// (0x000517c6) form_field_slider_wide_pane_vc_t

0x29c1,	// (0x000446ea) input_focus_pane_cp10_vc_ParamLimits

0x29c1,	// (0x000446ea) input_focus_pane_cp10_vc

0x6952,	// (0x0004867b) slider_cont_pane_cp1_vc_ParamLimits

0x6952,	// (0x0004867b) slider_cont_pane_cp1_vc

0x673f,	// (0x00048468) slider_form_pane_g1_cp2

0x6748,	// (0x00048471) slider_form_pane_g2_cp2

0x696b,	// (0x00048694) form_field_slider_pane_vc_t3

0x6979,	// (0x000486a2) form_field_slider_pane_vc_t4

0x6987,	// (0x000486b0) slider_form_pane_vc_ParamLimits

0x6987,	// (0x000486b0) slider_form_pane_vc

0x6994,	// (0x000486bd) form_field_slider_pane_vc_t1_ParamLimits

0x6994,	// (0x000486bd) form_field_slider_pane_vc_t1

0x6940,	// (0x00048669) form_field_slider_pane_vc_t2_ParamLimits

0x6940,	// (0x00048669) form_field_slider_pane_vc_t2

0x0001,

0xfaad,	// (0x000517d6) form_field_slider_pane_vc_t_ParamLimits

0xfaad,	// (0x000517d6) form_field_slider_pane_vc_t

0x29c1,	// (0x000446ea) input_focus_pane_cp9_vc_ParamLimits

0x29c1,	// (0x000446ea) input_focus_pane_cp9_vc

0x69b0,	// (0x000486d9) slider_cont_pane_vc_ParamLimits

0x69b0,	// (0x000486d9) slider_cont_pane_vc

0x69c2,	// (0x000486eb) list_form_graphic_pane_cp_vc_ParamLimits

0x69c2,	// (0x000486eb) list_form_graphic_pane_cp_vc

0x4c54,	// (0x0004697d) form_field_popup_wide_pane_vc_g1

0x69d7,	// (0x00048700) form_field_popup_wide_pane_vc_t1_ParamLimits

0x69d7,	// (0x00048700) form_field_popup_wide_pane_vc_t1

0x2fd8,	// (0x00044d01) input_focus_pane_cp8_vc_ParamLimits

0x2fd8,	// (0x00044d01) input_focus_pane_cp8_vc

0x69ee,	// (0x00048717) list_form_wide_pane_vc_ParamLimits

0x69ee,	// (0x00048717) list_form_wide_pane_vc

0x69fa,	// (0x00048723) list_form_graphic_pane_vc_g1

0x6a02,	// (0x0004872b) list_form_graphic_pane_vc_t1_ParamLimits

0x6a02,	// (0x0004872b) list_form_graphic_pane_vc_t1

0x2745,	// (0x0004446e) list_highlight_pane_cp5_vc_ParamLimits

0x2745,	// (0x0004446e) list_highlight_pane_cp5_vc

0x6a1e,	// (0x00048747) list_form_graphic_pane_vc_ParamLimits

0x6a1e,	// (0x00048747) list_form_graphic_pane_vc

0x4c54,	// (0x0004697d) form_field_popup_pane_vc_g1

0x6a34,	// (0x0004875d) form_field_popup_pane_vc_t1_ParamLimits

0x6a34,	// (0x0004875d) form_field_popup_pane_vc_t1

0x2fd8,	// (0x00044d01) input_focus_pane_cp7_vc_ParamLimits

0x2fd8,	// (0x00044d01) input_focus_pane_cp7_vc

0x6a4b,	// (0x00048774) list_form_pane_vc_ParamLimits

0x6a4b,	// (0x00048774) list_form_pane_vc

0x6a57,	// (0x00048780) data_form_pane_vc_t1_ParamLimits

0x6a57,	// (0x00048780) data_form_pane_vc_t1

0x303f,	// (0x00044d68) input_focus_pane_vc_g1

0x3047,	// (0x00044d70) input_focus_pane_vc_g2

0x304f,	// (0x00044d78) input_focus_pane_vc_g3

0x3057,	// (0x00044d80) input_focus_pane_vc_g4

0x305f,	// (0x00044d88) input_focus_pane_vc_g5

0x3067,	// (0x00044d90) input_focus_pane_vc_g6

0x306f,	// (0x00044d98) input_focus_pane_vc_g7

0x3077,	// (0x00044da0) input_focus_pane_vc_g8

0x307f,	// (0x00044da8) input_focus_pane_vc_g9

0xda92,	// (0x0004f7bb) input_focus_pane_vc_g10

0x0009,

0xf6ad,	// (0x000513d6) input_focus_pane_vc_g

0x4c48,	// (0x00046971) data_form_pane_vc_ParamLimits

0x4c48,	// (0x00046971) data_form_pane_vc

0x4c54,	// (0x0004697d) form_field_data_pane_vc_g1

0x6a74,	// (0x0004879d) form_field_data_pane_vc_t1_ParamLimits

0x6a74,	// (0x0004879d) form_field_data_pane_vc_t1

0x2fd8,	// (0x00044d01) input_focus_pane_vc_ParamLimits

0x2fd8,	// (0x00044d01) input_focus_pane_vc

0x6a8e,	// (0x000487b7) button_value_adjust_pane_cp3_vc

0x6a96,	// (0x000487bf) button_value_adjust_pane_cp5_vc

0x6a9e,	// (0x000487c7) form_field_data_pane_vc_ParamLimits

0x6a9e,	// (0x000487c7) form_field_data_pane_vc

0x6ab9,	// (0x000487e2) form_field_data_pane_vc_cp2

0x6ac1,	// (0x000487ea) form_field_data_wide_pane_vc_ParamLimits

0x6ac1,	// (0x000487ea) form_field_data_wide_pane_vc

0x6adb,	// (0x00048804) form_field_data_wide_pane_vc_cp2

0x6ae3,	// (0x0004880c) form_field_popup_pane_vc_ParamLimits

0x6ae3,	// (0x0004880c) form_field_popup_pane_vc

0x6afe,	// (0x00048827) form_field_popup_wide_pane_vc_ParamLimits

0x6afe,	// (0x00048827) form_field_popup_wide_pane_vc

0x6b18,	// (0x00048841) form_field_slider_pane_vc_ParamLimits

0x6b18,	// (0x00048841) form_field_slider_pane_vc

0x6b2b,	// (0x00048854) form_field_slider_wide_pane_vc_ParamLimits

0x6b2b,	// (0x00048854) form_field_slider_wide_pane_vc

0xdb2c,	// (0x0004f855) grid_touch_1_pane_ParamLimits

0xdb2c,	// (0x0004f855) grid_touch_1_pane

0xdb40,	// (0x0004f869) grid_touch_2_pane_ParamLimits

0xdb40,	// (0x0004f869) grid_touch_2_pane

0x6c02,	// (0x0004892b) touch_pane_g1_ParamLimits

0x6c02,	// (0x0004892b) touch_pane_g1

0x6b64,	// (0x0004888d) cell_app_pane_cp_wide_ParamLimits

0x6b64,	// (0x0004888d) cell_app_pane_cp_wide

0x6b75,	// (0x0004889e) grid_popup_fast_wide_pane_ParamLimits

0x6b75,	// (0x0004889e) grid_popup_fast_wide_pane

0x6b89,	// (0x000488b2) scroll_pane_cp19_ParamLimits

0x6b89,	// (0x000488b2) scroll_pane_cp19

0xda9c,	// (0x0004f7c5) bg_popup_window_pane_cp20

0x6b9d,	// (0x000488c6) listscroll_popup_fast_wide_pane

0x31ae,	// (0x00044ed7) grid_indicator_nsta_pane

0x6ba5,	// (0x000488ce) clock_nsta_pane_g1

0x6bae,	// (0x000488d7) clock_nsta_pane_t1

0xdb6c,	// (0x0004f895) cell_indicator_nsta_pane_ParamLimits

0xdb6c,	// (0x0004f895) cell_indicator_nsta_pane

0x6c02,	// (0x0004892b) cell_indicator_nsta_pane_g1

0xdb89,	// (0x0004f8b2) cell_indicator_nsta_pane_g2

0x0001,

0xfab7,	// (0x000517e0) cell_indicator_nsta_pane_g

0x6c25,	// (0x0004894e) clock_nsta_pane_cp

0x6c2d,	// (0x00048956) indicator_nsta_pane_cp

0x6c35,	// (0x0004895e) nsta_clock_indic_pane_g1

0x2811,	// (0x0004453a) grid_indicator_pane

0x3580,	// (0x000452a9) scroll_pane_cp29

0x1183,	// (0x00042eac) indicator_nsta_pane_cp2_ParamLimits

0x1183,	// (0x00042eac) indicator_nsta_pane_cp2

0x2745,	// (0x0004446e) main_apps_wheel_pane

0x4e13,	// (0x00046b3c) form_midp_field_text_pane_ParamLimits

0x4f62,	// (0x00046c8b) scroll_bar_cp050_ParamLimits

0x6c9e,	// (0x000489c7) cell_indicator_pane_ParamLimits

0x6c9e,	// (0x000489c7) cell_indicator_pane

0x6cb6,	// (0x000489df) cell_indicator_pane_g1

0xdb9f,	// (0x0004f8c8) grid_wheel_folder_pane_ParamLimits

0xdb9f,	// (0x0004f8c8) grid_wheel_folder_pane

0xdbad,	// (0x0004f8d6) list_wheel_apps_pane_ParamLimits

0xdbad,	// (0x0004f8d6) list_wheel_apps_pane

0xdbbb,	// (0x0004f8e4) main_apps_wheel_pane_g1_ParamLimits

0xdbbb,	// (0x0004f8e4) main_apps_wheel_pane_g1

0xdbcb,	// (0x0004f8f4) main_apps_wheel_pane_g2_ParamLimits

0xdbcb,	// (0x0004f8f4) main_apps_wheel_pane_g2

0x0001,

0xfad3,	// (0x000517fc) main_apps_wheel_pane_g_ParamLimits

0xfad3,	// (0x000517fc) main_apps_wheel_pane_g

0xdbdb,	// (0x0004f904) main_apps_wheel_pane_t1_ParamLimits

0xdbdb,	// (0x0004f904) main_apps_wheel_pane_t1

0xdbf3,	// (0x0004f91c) list_wheel_apps_pane_g1

0xdbfb,	// (0x0004f924) list_wheel_apps_pane_g2

0xdc03,	// (0x0004f92c) list_wheel_apps_pane_g3

0xdc0b,	// (0x0004f934) list_wheel_apps_pane_g4

0xdc13,	// (0x0004f93c) list_wheel_apps_pane_g5

0x0004,

0xfad8,	// (0x00051801) list_wheel_apps_pane_g

0x3ab2,	// (0x000457db) navi_icon_text_pane

0xd161,	// (0x0004ee8a) aid_fill_nsta

0xdc30,	// (0x0004f959) navi_icon_text_pane_g1

0xdc3c,	// (0x0004f965) navi_icon_text_pane_t1

0xc0da,	// (0x0004de03) list_set_graphic_pane_t1_ParamLimits

0xc0da,	// (0x0004de03) list_set_graphic_pane_t1

0x56b3,	// (0x000473dc) popup_midp_note_alarm_window_t6_ParamLimits

0x56b3,	// (0x000473dc) popup_midp_note_alarm_window_t6

0x56c5,	// (0x000473ee) popup_midp_note_alarm_window_t7_ParamLimits

0x56c5,	// (0x000473ee) popup_midp_note_alarm_window_t7

0x56d7,	// (0x00047400) popup_midp_note_alarm_window_t8_ParamLimits

0x56d7,	// (0x00047400) popup_midp_note_alarm_window_t8

0x56e9,	// (0x00047412) popup_midp_note_alarm_window_t9_ParamLimits

0x56e9,	// (0x00047412) popup_midp_note_alarm_window_t9

0x56fb,	// (0x00047424) popup_midp_note_alarm_window_t10_ParamLimits

0x56fb,	// (0x00047424) popup_midp_note_alarm_window_t10

0x570d,	// (0x00047436) popup_midp_note_alarm_window_t11_ParamLimits

0x570d,	// (0x00047436) popup_midp_note_alarm_window_t11

0x571f,	// (0x00047448) scroll_pane_cp17_ParamLimits

0x571f,	// (0x00047448) scroll_pane_cp17

0x15df,	// (0x00043308) volume_small_pane_cp_g1

0x194c,	// (0x00043675) volume_small_pane_cp_g2

0x1955,	// (0x0004367e) volume_small_pane_cp_g3

0x195e,	// (0x00043687) volume_small_pane_cp_g4

0x1967,	// (0x00043690) volume_small_pane_cp_g5

0x1970,	// (0x00043699) volume_small_pane_cp_g6

0x1979,	// (0x000436a2) volume_small_pane_cp_g7

0x1982,	// (0x000436ab) volume_small_pane_cp_g8

0x198b,	// (0x000436b4) volume_small_pane_cp_g9

0x1994,	// (0x000436bd) volume_small_pane_cp_g10

0x3d13,	// (0x00045a3c) midp_ticker_pane_g1_ParamLimits

0x3d1f,	// (0x00045a48) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x0005149e) midp_ticker_pane_g_ParamLimits

0xc9df,	// (0x0004e708) midp_ticker_pane_t1_ParamLimits

0xd181,	// (0x0004eeaa) aid_fill_nsta_2

0x4f4e,	// (0x00046c77) list_form2_midp_pane

0x60dc,	// (0x00047e05) midp_editing_number_pane_ParamLimits

0x60eb,	// (0x00047e14) midp_ticker_pane_ParamLimits

0x6daf,	// (0x00048ad8) form2_midp_field_pane

0x6dd3,	// (0x00048afc) scroll_pane_cp51

0x6df3,	// (0x00048b1c) form2_midp_button_pane_ParamLimits

0x6df3,	// (0x00048b1c) form2_midp_button_pane

0x6e05,	// (0x00048b2e) form2_midp_content_pane_ParamLimits

0x6e05,	// (0x00048b2e) form2_midp_content_pane

0x6e1f,	// (0x00048b48) form2_midp_field_choice_group_pane

0x6e27,	// (0x00048b50) form2_midp_field_pane_g1

0x6e2f,	// (0x00048b58) form2_midp_field_pane_g2

0x6e37,	// (0x00048b60) form2_midp_field_pane_g3

0x6e3f,	// (0x00048b68) form2_midp_field_pane_g4

0x0003,

0xfafd,	// (0x00051826) form2_midp_field_pane_g

0x6e47,	// (0x00048b70) form2_midp_gauge_slider_pane

0x6e4f,	// (0x00048b78) form2_midp_gauge_wait_pane

0x6e57,	// (0x00048b80) form2_midp_image_pane_ParamLimits

0x6e57,	// (0x00048b80) form2_midp_image_pane

0x6e72,	// (0x00048b9b) form2_midp_label_pane_ParamLimits

0x6e72,	// (0x00048b9b) form2_midp_label_pane

0xdc6a,	// (0x0004f993) form2_midp_label_pane_cp_ParamLimits

0xdc6a,	// (0x0004f993) form2_midp_label_pane_cp

0x6eb2,	// (0x00048bdb) form2_midp_string_pane_ParamLimits

0x6eb2,	// (0x00048bdb) form2_midp_string_pane

0xb6cd,	// (0x0004d3f6) form2_midp_text_pane_ParamLimits

0xb6cd,	// (0x0004d3f6) form2_midp_text_pane

0x6ec4,	// (0x00048bed) form2_midp_time_pane

0x6ed4,	// (0x00048bfd) input_focus_pane_cp51_ParamLimits

0x6ed4,	// (0x00048bfd) input_focus_pane_cp51

0x6eec,	// (0x00048c15) form2_midp_label_pane_t1_ParamLimits

0x6eec,	// (0x00048c15) form2_midp_label_pane_t1

0xb6f0,	// (0x0004d419) form2_mdip_text_pane_t1_ParamLimits

0xb6f0,	// (0x0004d419) form2_mdip_text_pane_t1

0x06de,	// (0x00042407) form2_midp_time_pane_t1

0x6f3a,	// (0x00048c63) form2_midp_gauge_slider_pane_t1

0xdc8b,	// (0x0004f9b4) form2_midp_gauge_slider_pane_t2

0xdc9d,	// (0x0004f9c6) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb06,	// (0x0005182f) form2_midp_gauge_slider_pane_t

0x6f70,	// (0x00048c99) form2_midp_slider_pane

0x6f7c,	// (0x00048ca5) form2_midp_gauge_wait_pane_t1

0x6f8a,	// (0x00048cb3) form2_midp_wait_pane_ParamLimits

0x6f8a,	// (0x00048cb3) form2_midp_wait_pane

0xd59a,	// (0x0004f2c3) list_single_2graphic_pane_cp4_ParamLimits

0xd59a,	// (0x0004f2c3) list_single_2graphic_pane_cp4

0xdcaf,	// (0x0004f9d8) list_single_midp_graphic_pane_cp_ParamLimits

0xdcaf,	// (0x0004f9d8) list_single_midp_graphic_pane_cp

0xda9c,	// (0x0004f7c5) list_highlight_pane_cp20

0x6fd9,	// (0x00048d02) list_single_2graphic_pane_g1_cp4

0x657b,	// (0x000482a4) list_single_2graphic_pane_g2_cp4

0x6fe1,	// (0x00048d0a) list_single_2graphic_pane_t1_cp4

0x2745,	// (0x0004446e) list_highlight_pane_cp21

0x6ff0,	// (0x00048d19) list_single_midp_graphic_pane_g4_cp

0x6fff,	// (0x00048d28) list_single_midp_graphic_pane_t1_cp

0xdcd0,	// (0x0004f9f9) form2_mdip_string_pane_t1_ParamLimits

0xdcd0,	// (0x0004f9f9) form2_mdip_string_pane_t1

0xda9c,	// (0x0004f7c5) bg_wml_button_pane_cp2

0xda92,	// (0x0004f7bb) form2_midp_image_pane_g1

0x0e70,	// (0x00042b99) list_double_large_graphic_pane_g5_ParamLimits

0x0e70,	// (0x00042b99) list_double_large_graphic_pane_g5

0xc0f2,	// (0x0004de1b) midp_form_pane_ParamLimits

0x2745,	// (0x0004446e) main_apps_wheel_pane_ParamLimits

0xce79,	// (0x0004eba2) popup_preview_window_ParamLimits

0xce79,	// (0x0004eba2) popup_preview_window

0x4578,	// (0x000462a1) popup_touch_info_window_ParamLimits

0x4578,	// (0x000462a1) popup_touch_info_window

0x459a,	// (0x000462c3) popup_touch_menu_window_ParamLimits

0x459a,	// (0x000462c3) popup_touch_menu_window

0xda88,	// (0x0004f7b1) bg_popup_sub_pane_cp6

0x70b9,	// (0x00048de2) list_touch_menu_pane

0x70c1,	// (0x00048dea) list_single_touch_menu_pane_ParamLimits

0x70c1,	// (0x00048dea) list_single_touch_menu_pane

0x70dc,	// (0x00048e05) list_single_touch_menu_pane_t1

0x2745,	// (0x0004446e) bg_popup_sub_pane_cp7_ParamLimits

0x2745,	// (0x0004446e) bg_popup_sub_pane_cp7

0x70ea,	// (0x00048e13) heading_sub_pane

0x70f2,	// (0x00048e1b) list_touch_info_pane_ParamLimits

0x70f2,	// (0x00048e1b) list_touch_info_pane

0x7101,	// (0x00048e2a) list_single_touch_info_pane_ParamLimits

0x7101,	// (0x00048e2a) list_single_touch_info_pane

0x7113,	// (0x00048e3c) list_single_touch_info_pane_t1

0x7121,	// (0x00048e4a) list_single_touch_info_pane_t2

0x0001,

0xfb14,	// (0x0005183d) list_single_touch_info_pane_t

0x3c36,	// (0x0004595f) bg_popup_heading_pane_cp

0x712f,	// (0x00048e58) heading_sub_pane_t1

0x4be2,	// (0x0004690b) bg_popup_preview_window_pane_cp_ParamLimits

0x4be2,	// (0x0004690b) bg_popup_preview_window_pane_cp

0x70ea,	// (0x00048e13) heading_preview_pane

0x70f2,	// (0x00048e1b) list_preview_pane_ParamLimits

0x70f2,	// (0x00048e1b) list_preview_pane

0x713d,	// (0x00048e66) popup_preview_window_g1

0x7101,	// (0x00048e2a) list_single_preview_pane_ParamLimits

0x7101,	// (0x00048e2a) list_single_preview_pane

0x7145,	// (0x00048e6e) list_single_preview_pane_g1

0x714d,	// (0x00048e76) list_single_preview_pane_t1

0x7113,	// (0x00048e3c) list_single_preview_pane_t2

0x0001,

0xfb19,	// (0x00051842) list_single_preview_pane_t

0x715b,	// (0x00048e84) bg_popup_heading_pane_cp2_ParamLimits

0x715b,	// (0x00048e84) bg_popup_heading_pane_cp2

0x7171,	// (0x00048e9a) heading_preview_pane_g1

0x7179,	// (0x00048ea2) heading_preview_pane_t1_ParamLimits

0x7179,	// (0x00048ea2) heading_preview_pane_t1

0x2834,	// (0x0004455d) soft_indicator_pane_t1_ParamLimits

0x2f3f,	// (0x00044c68) scroll_pane_ParamLimits

0x347c,	// (0x000451a5) scroll_sc2_left_pane

0x3485,	// (0x000451ae) scroll_sc2_right_pane

0x34a4,	// (0x000451cd) scroll_bg_pane_g1_ParamLimits

0x34b9,	// (0x000451e2) scroll_bg_pane_g2_ParamLimits

0x34d1,	// (0x000451fa) scroll_bg_pane_g3_ParamLimits

0xf704,	// (0x0005142d) scroll_bg_pane_g_ParamLimits

0x34a4,	// (0x000451cd) scroll_handle_pane_g1_ParamLimits

0x34f3,	// (0x0004521c) scroll_handle_pane_g2_ParamLimits

0x34d1,	// (0x000451fa) scroll_handle_pane_g3_ParamLimits

0xf70b,	// (0x00051434) scroll_handle_pane_g_ParamLimits

0x3fdc,	// (0x00045d05) popup_choice_list_window_ParamLimits

0x3fdc,	// (0x00045d05) popup_choice_list_window

0x4a3a,	// (0x00046763) choice_list_pane

0x4abc,	// (0x000467e5) cell_toolbar_pane_t1

0x4ae4,	// (0x0004680d) toolbar_button_pane_ParamLimits

0x5bef,	// (0x00047918) ai_gene_pane_1_t2_ParamLimits

0x5bef,	// (0x00047918) ai_gene_pane_1_t2

0x0001,

0xf923,	// (0x0005164c) ai_gene_pane_1_t_ParamLimits

0xf923,	// (0x0005164c) ai_gene_pane_1_t

0x7196,	// (0x00048ebf) scroll_sc2_left_pane_g1

0x7196,	// (0x00048ebf) scroll_sc2_right_pane_g1

0x3fb4,	// (0x00045cdd) bg_popup_sub_pane_cp10

0x71a0,	// (0x00048ec9) list_choice_list_pane

0x71b7,	// (0x00048ee0) list_single_choice_list_pane_ParamLimits

0x71b7,	// (0x00048ee0) list_single_choice_list_pane

0x71cb,	// (0x00048ef4) list_single_choice_list_pane_g1

0x71d3,	// (0x00048efc) list_single_choice_list_pane_t1_ParamLimits

0x71d3,	// (0x00048efc) list_single_choice_list_pane_t1

0x71e8,	// (0x00048f11) choice_list_pane_g1

0x71f0,	// (0x00048f19) choice_list_pane_t1

0xda88,	// (0x0004f7b1) input_focus_pane_cp11

0x3356,	// (0x0004507f) title_pane_stacon_g2_ParamLimits

0x3356,	// (0x0004507f) title_pane_stacon_g2

0x0002,

0xf6ea,	// (0x00051413) title_pane_stacon_g_ParamLimits

0xf6ea,	// (0x00051413) title_pane_stacon_g

0x3c36,	// (0x0004595f) cursor_press_pane

0xcafa,	// (0x0004e823) popup_fep_hwr_window_ParamLimits

0xcafa,	// (0x0004e823) popup_fep_hwr_window

0x411c,	// (0x00045e45) popup_fep_vkb_window_ParamLimits

0x411c,	// (0x00045e45) popup_fep_vkb_window

0x71fe,	// (0x00048f27) cursor_press_pane_g1

0x0002,

0xfb42,	// (0x0005186b) fep_vkb_side_pane_g_ParamLimits

0x19c8,	// (0x000436f1) fep_hwr_candidate_pane_ParamLimits

0x19c8,	// (0x000436f1) fep_hwr_candidate_pane

0x19f2,	// (0x0004371b) fep_hwr_side_pane_ParamLimits

0x19f2,	// (0x0004371b) fep_hwr_side_pane

0x1a14,	// (0x0004373d) fep_hwr_top_pane_ParamLimits

0x1a14,	// (0x0004373d) fep_hwr_top_pane

0x1a2c,	// (0x00043755) fep_hwr_write_pane_ParamLimits

0x1a2c,	// (0x00043755) fep_hwr_write_pane

0xfb42,	// (0x0005186b) fep_vkb_side_pane_g

0x7206,	// (0x00048f2f) fep_hwr_top_pane_g1

0x7218,	// (0x00048f41) fep_hwr_top_pane_g2

0x1a58,	// (0x00043781) fep_hwr_top_pane_g3

0x0002,

0xfb1e,	// (0x00051847) fep_hwr_top_pane_g

0x1a6d,	// (0x00043796) fep_hwr_top_text_pane

0x3648,	// (0x00045371) fep_hwr_top_text_pane_g1

0x724e,	// (0x00048f77) fep_hwr_top_text_pane_t1

0x1b77,	// (0x000438a0) fep_hwr_candidate_pane_g1

0x7499,	// (0x000491c2) fep_vkb_keypad_pane_g3_ParamLimits

0x7499,	// (0x000491c2) fep_vkb_keypad_pane_g3

0x74c5,	// (0x000491ee) fep_vkb_keypad_pane_g4_ParamLimits

0x74c5,	// (0x000491ee) fep_vkb_keypad_pane_g4

0x753c,	// (0x00049265) fep_vkb_bottom_pane_g2_ParamLimits

0x753c,	// (0x00049265) fep_vkb_bottom_pane_g2

0x0001,

0xfb49,	// (0x00051872) fep_vkb_bottom_pane_g_ParamLimits

0xfb49,	// (0x00051872) fep_vkb_bottom_pane_g

0x7196,	// (0x00048ebf) cell_vkb_side_pane_g2

0x0001,

0xfb53,	// (0x0005187c) cell_vkb_side_pane_g

0x75c7,	// (0x000492f0) cell_vkb_side_pane_t1

0x75d5,	// (0x000492fe) cell_vkb_side_pane_t1_copy1

0x7196,	// (0x00048ebf) bg_fep_vkb_candidate_pane_g2

0x7719,	// (0x00049442) cell_vkb_candidate_pane_ParamLimits

0x725c,	// (0x00048f85) aid_size_cell_vkb_ParamLimits

0x725c,	// (0x00048f85) aid_size_cell_vkb

0x7719,	// (0x00049442) cell_vkb_candidate_pane

0x1b91,	// (0x000438ba) bg_popup_fep_shadow_pane_g1

0xdd94,	// (0x0004fabd) fep_vkb_bottom_pane_ParamLimits

0xdd94,	// (0x0004fabd) fep_vkb_bottom_pane

0x732b,	// (0x00049054) fep_vkb_candidate_pane_ParamLimits

0x732b,	// (0x00049054) fep_vkb_candidate_pane

0xddc0,	// (0x0004fae9) fep_vkb_keypad_pane_ParamLimits

0xddc0,	// (0x0004fae9) fep_vkb_keypad_pane

0xdde7,	// (0x0004fb10) fep_vkb_side_pane_ParamLimits

0xdde7,	// (0x0004fb10) fep_vkb_side_pane

0xde23,	// (0x0004fb4c) fep_vkb_top_pane_ParamLimits

0xde23,	// (0x0004fb4c) fep_vkb_top_pane

0x73f2,	// (0x0004911b) fep_vkb_top_pane_g1_ParamLimits

0x73f2,	// (0x0004911b) fep_vkb_top_pane_g1

0x7401,	// (0x0004912a) fep_vkb_top_pane_g2_ParamLimits

0x7401,	// (0x0004912a) fep_vkb_top_pane_g2

0x7410,	// (0x00049139) fep_vkb_top_pane_g3_ParamLimits

0x7410,	// (0x00049139) fep_vkb_top_pane_g3

0x0003,

0xfb39,	// (0x00051862) fep_vkb_top_pane_g_ParamLimits

0xfb39,	// (0x00051862) fep_vkb_top_pane_g

0x742e,	// (0x00049157) fep_vkb_top_text_pane_ParamLimits

0x742e,	// (0x00049157) fep_vkb_top_text_pane

0xde5f,	// (0x0004fb88) fep_vkb_side_pane_g1_ParamLimits

0xde5f,	// (0x0004fb88) fep_vkb_side_pane_g1

0x7488,	// (0x000491b1) grid_vkb_side_pane_ParamLimits

0x7488,	// (0x000491b1) grid_vkb_side_pane

0x1b99,	// (0x000438c2) bg_popup_fep_shadow_pane_g2

0x1ba2,	// (0x000438cb) bg_popup_fep_shadow_pane_g3

0x1baa,	// (0x000438d3) bg_popup_fep_shadow_pane_g4

0x1bb3,	// (0x000438dc) bg_popup_fep_shadow_pane_g5

0x1bbd,	// (0x000438e6) bg_popup_fep_shadow_pane_g6

0x1bc5,	// (0x000438ee) bg_popup_fep_shadow_pane_g7

0x305f,	// (0x00044d88) bg_popup_fep_shadow_pane_g8

0x74e7,	// (0x00049210) grid_vkb_keypad_number_pane_ParamLimits

0x74e7,	// (0x00049210) grid_vkb_keypad_number_pane

0x74fb,	// (0x00049224) grid_vkb_keypad_pane_ParamLimits

0x74fb,	// (0x00049224) grid_vkb_keypad_pane

0x7521,	// (0x0004924a) fep_vkb_bottom_pane_g1_ParamLimits

0x7521,	// (0x0004924a) fep_vkb_bottom_pane_g1

0x754a,	// (0x00049273) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x754a,	// (0x00049273) grid_vkb_keypad_bottom_left_pane

0x755f,	// (0x00049288) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x755f,	// (0x00049288) grid_vkb_keypad_bottom_right_pane

0x7574,	// (0x0004929d) fep_vkb_top_text_pane_g1

0xdea6,	// (0x0004fbcf) fep_vkb_top_text_pane_t1

0xdeb8,	// (0x0004fbe1) cell_vkb_side_pane_ParamLimits

0xdeb8,	// (0x0004fbe1) cell_vkb_side_pane

0x7196,	// (0x00048ebf) cell_vkb_side_pane_g1

0x75e3,	// (0x0004930c) cell_vkb_keypad_pane_ParamLimits

0x75e3,	// (0x0004930c) cell_vkb_keypad_pane

0x7670,	// (0x00049399) cell_vkb_keypad_pane_g1

0x0008,

0xfb66,	// (0x0005188f) bg_popup_fep_shadow_pane_g

0x7196,	// (0x00048ebf) cell_hwr_side_pane_g1

0x7196,	// (0x00048ebf) cell_hwr_side_pane_g2

0x767a,	// (0x000493a3) cell_vkb_keypad_pane_t1

0xdece,	// (0x0004fbf7) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdece,	// (0x0004fbf7) cell_vkb_keypad_bottom_left_pane

0xdee3,	// (0x0004fc0c) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdee3,	// (0x0004fc0c) cell_vkb_keypad_bottom_right_pane

0x7196,	// (0x00048ebf) cell_vkb_keypad_bottom_left_pane_g1

0x7196,	// (0x00048ebf) cell_vkb_keypad_bottom_right_pane_g1

0x76de,	// (0x00049407) cell_vkb_keypad_number_pane_ParamLimits

0x76de,	// (0x00049407) cell_vkb_keypad_number_pane

0x76fd,	// (0x00049426) cell_vkb_keypad_number_pane_g1

0x7707,	// (0x00049430) cell_vkb_keypad_number_pane_g2

0x7710,	// (0x00049439) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb58,	// (0x00051881) cell_vkb_keypad_number_pane_g

0x767a,	// (0x000493a3) cell_vkb_keypad_number_pane_t1

0x773a,	// (0x00049463) fep_vkb_candidate_pane_g1

0x0001,

0xfb53,	// (0x0005187c) cell_hwr_side_pane_g

0x7753,	// (0x0004947c) cell_hwr_side_pane_t1

0x1bd7,	// (0x00043900) cell_hwr_side_pane_t1_copy1

0x7420,	// (0x00049149) cell_hwr_candidate_pane_g1

0x1be5,	// (0x0004390e) cell_hwr_candidate_pane_t1

0x7196,	// (0x00048ebf) cell_vkb_candidate_pane_g2

0x7797,	// (0x000494c0) cell_vkb_candidate_pane_t1

0xca38,	// (0x0004e761) bg_popup_fep_shadow_pane_ParamLimits

0xca38,	// (0x0004e761) bg_popup_fep_shadow_pane

0xdd5a,	// (0x0004fa83) bg_fep_hwr_top_pane_g4

0x722a,	// (0x00048f53) bg_hwr_side_pane_g1_ParamLimits

0x722a,	// (0x00048f53) bg_hwr_side_pane_g1

0xc472,	// (0x0004e19b) cell_hwr_side_pane_ParamLimits

0xc472,	// (0x0004e19b) cell_hwr_side_pane

0x1ae8,	// (0x00043811) fep_hwr_write_pane_g1_ParamLimits

0x1ae8,	// (0x00043811) fep_hwr_write_pane_g1

0x1af5,	// (0x0004381e) fep_hwr_write_pane_g2_ParamLimits

0x1af5,	// (0x0004381e) fep_hwr_write_pane_g2

0x1b02,	// (0x0004382b) fep_hwr_write_pane_g3_ParamLimits

0x1b02,	// (0x0004382b) fep_hwr_write_pane_g3

0xc492,	// (0x0004e1bb) fep_hwr_write_pane_g4_ParamLimits

0xc492,	// (0x0004e1bb) fep_hwr_write_pane_g4

0x0005,

0xfb25,	// (0x0005184e) fep_hwr_write_pane_g_ParamLimits

0xfb25,	// (0x0005184e) fep_hwr_write_pane_g

0xdd5a,	// (0x0004fa83) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xdd5a,	// (0x0004fa83) bg_fep_hwr_candidate_pane_g2

0x1b25,	// (0x0004384e) cell_hwr_candidate_pane_ParamLimits

0x1b25,	// (0x0004384e) cell_hwr_candidate_pane

0x1b77,	// (0x000438a0) fep_hwr_candidate_pane_g1_ParamLimits

0x728a,	// (0x00048fb3) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x728a,	// (0x00048fb3) bg_popup_fep_shadow_pane_cp2

0x7420,	// (0x00049149) fep_vkb_top_pane_g4_ParamLimits

0x7420,	// (0x00049149) fep_vkb_top_pane_g4

0x7466,	// (0x0004918f) fep_vkb_side_pane_g2_ParamLimits

0x7466,	// (0x0004918f) fep_vkb_side_pane_g2

0xb3c8,	// (0x0004d0f1) list_setting_pane_t4_ParamLimits

0xb3c8,	// (0x0004d0f1) list_setting_pane_t4

0xb464,	// (0x0004d18d) list_setting_number_pane_t5_ParamLimits

0xb464,	// (0x0004d18d) list_setting_number_pane_t5

0x367a,	// (0x000453a3) list_double_heading_pane_cp2_ParamLimits

0x367a,	// (0x000453a3) list_double_heading_pane_cp2

0x2ff2,	// (0x00044d1b) list_double_heading_pane_g1_cp2_ParamLimits

0x2ff2,	// (0x00044d1b) list_double_heading_pane_g1_cp2

0x2ffe,	// (0x00044d27) list_double_heading_pane_g2_cp2_ParamLimits

0x2ffe,	// (0x00044d27) list_double_heading_pane_g2_cp2

0x77a5,	// (0x000494ce) list_double_heading_pane_t1_cp2_ParamLimits

0x77a5,	// (0x000494ce) list_double_heading_pane_t1_cp2

0x77bb,	// (0x000494e4) list_double_heading_pane_t2_cp2_ParamLimits

0x77bb,	// (0x000494e4) list_double_heading_pane_t2_cp2

0xda80,	// (0x0004f7a9) aid_value_unit2

0x0c49,	// (0x00042972) popup_preview_fixed_window

0x29cf,	// (0x000446f8) bg_popup_preview_window_pane_cp02

0x77cd,	// (0x000494f6) list_preview_fixed_pane

0x7813,	// (0x0004953c) list_empty_pane_fp_ParamLimits

0x7813,	// (0x0004953c) list_empty_pane_fp

0x7813,	// (0x0004953c) list_single_cale_day_pane_fp_ParamLimits

0x7813,	// (0x0004953c) list_single_cale_day_pane_fp

0x7813,	// (0x0004953c) list_single_graphic_heading_pane_fp_ParamLimits

0x7813,	// (0x0004953c) list_single_graphic_heading_pane_fp

0x7813,	// (0x0004953c) list_single_graphic_pane_fp_ParamLimits

0x7813,	// (0x0004953c) list_single_graphic_pane_fp

0x7813,	// (0x0004953c) list_single_heading_pane_fp_ParamLimits

0x7813,	// (0x0004953c) list_single_heading_pane_fp

0x7813,	// (0x0004953c) list_single_pane_fp_ParamLimits

0x7813,	// (0x0004953c) list_single_pane_fp

0x782c,	// (0x00049555) list_single_pane_fp_g1_ParamLimits

0x782c,	// (0x00049555) list_single_pane_fp_g1

0x0e64,	// (0x00042b8d) list_single_pane_fp_g2_ParamLimits

0x0e64,	// (0x00042b8d) list_single_pane_fp_g2

0x1c03,	// (0x0004392c) list_single_pane_fp_g3_ParamLimits

0x1c03,	// (0x0004392c) list_single_pane_fp_g3

0x7838,	// (0x00049561) list_single_pane_fp_g4_ParamLimits

0x7838,	// (0x00049561) list_single_pane_fp_g4

0x0003,

0xfb87,	// (0x000518b0) list_single_pane_fp_g_ParamLimits

0xfb87,	// (0x000518b0) list_single_pane_fp_g

0x06f1,	// (0x0004241a) list_single_pane_fp_t1_ParamLimits

0x06f1,	// (0x0004241a) list_single_pane_fp_t1

0x0708,	// (0x00042431) list_single_graphic_pane_fp_g1_ParamLimits

0x0708,	// (0x00042431) list_single_graphic_pane_fp_g1

0x782c,	// (0x00049555) list_single_graphic_pane_fp_g2_ParamLimits

0x782c,	// (0x00049555) list_single_graphic_pane_fp_g2

0x0e64,	// (0x00042b8d) list_single_graphic_pane_fp_g3_ParamLimits

0x0e64,	// (0x00042b8d) list_single_graphic_pane_fp_g3

0x1c03,	// (0x0004392c) list_single_graphic_pane_fp_g4_ParamLimits

0x1c03,	// (0x0004392c) list_single_graphic_pane_fp_g4

0x7838,	// (0x00049561) list_single_graphic_pane_fp_g5_ParamLimits

0x7838,	// (0x00049561) list_single_graphic_pane_fp_g5

0x0004,

0xfb90,	// (0x000518b9) list_single_graphic_pane_fp_g_ParamLimits

0xfb90,	// (0x000518b9) list_single_graphic_pane_fp_g

0x0714,	// (0x0004243d) list_single_graphic_pane_fp_t1_ParamLimits

0x0714,	// (0x0004243d) list_single_graphic_pane_fp_t1

0x0708,	// (0x00042431) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0708,	// (0x00042431) list_single_graphic_heading_pane_fp_g1

0x782c,	// (0x00049555) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x782c,	// (0x00049555) list_single_graphic_heading_pane_fp_g2

0x0e64,	// (0x00042b8d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0e64,	// (0x00042b8d) list_single_graphic_heading_pane_fp_g3

0x1c03,	// (0x0004392c) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x1c03,	// (0x0004392c) list_single_graphic_heading_pane_fp_g4

0x7838,	// (0x00049561) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7838,	// (0x00049561) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb90,	// (0x000518b9) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb90,	// (0x000518b9) list_single_graphic_heading_pane_fp_g

0x072a,	// (0x00042453) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x072a,	// (0x00042453) list_single_graphic_heading_pane_fp_t1

0x0740,	// (0x00042469) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0740,	// (0x00042469) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9b,	// (0x000518c4) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9b,	// (0x000518c4) list_single_graphic_heading_pane_fp_t

0x0752,	// (0x0004247b) list_single_cale_day_pane_fp_g1_ParamLimits

0x0752,	// (0x0004247b) list_single_cale_day_pane_fp_g1

0x7844,	// (0x0004956d) list_single_cale_day_pane_fp_g2_ParamLimits

0x7844,	// (0x0004956d) list_single_cale_day_pane_fp_g2

0x1c17,	// (0x00043940) list_single_cale_day_pane_fp_g3_ParamLimits

0x1c17,	// (0x00043940) list_single_cale_day_pane_fp_g3

0x1c3f,	// (0x00043968) list_single_cale_day_pane_fp_g4_ParamLimits

0x1c3f,	// (0x00043968) list_single_cale_day_pane_fp_g4

0x1c63,	// (0x0004398c) list_single_cale_day_pane_fp_g5_ParamLimits

0x1c63,	// (0x0004398c) list_single_cale_day_pane_fp_g5

0x0004,

0xfba0,	// (0x000518c9) list_single_cale_day_pane_fp_g_ParamLimits

0xfba0,	// (0x000518c9) list_single_cale_day_pane_fp_g

0x078a,	// (0x000424b3) list_single_cale_day_pane_fp_t1_ParamLimits

0x078a,	// (0x000424b3) list_single_cale_day_pane_fp_t1

0x07b0,	// (0x000424d9) list_single_cale_day_pane_fp_t2_ParamLimits

0x07b0,	// (0x000424d9) list_single_cale_day_pane_fp_t2

0x07c9,	// (0x000424f2) list_single_cale_day_pane_fp_t3_ParamLimits

0x07c9,	// (0x000424f2) list_single_cale_day_pane_fp_t3

0x0002,

0xfbab,	// (0x000518d4) list_single_cale_day_pane_fp_t_ParamLimits

0xfbab,	// (0x000518d4) list_single_cale_day_pane_fp_t

0x782c,	// (0x00049555) list_empty_pane_fp_g1_ParamLimits

0x782c,	// (0x00049555) list_empty_pane_fp_g1

0x07e2,	// (0x0004250b) list_empty_pane_fp_t1

0x07f0,	// (0x00042519) list_empty_pane_fp_t2

0x0001,

0xfbb2,	// (0x000518db) list_empty_pane_fp_t

0x782c,	// (0x00049555) list_single_heading_pane_fp_g1_ParamLimits

0x782c,	// (0x00049555) list_single_heading_pane_fp_g1

0x0e64,	// (0x00042b8d) list_single_heading_pane_fp_g2_ParamLimits

0x0e64,	// (0x00042b8d) list_single_heading_pane_fp_g2

0x1c03,	// (0x0004392c) list_single_heading_pane_fp_g3_ParamLimits

0x1c03,	// (0x0004392c) list_single_heading_pane_fp_g3

0x0002,

0xfbb7,	// (0x000518e0) list_single_heading_pane_fp_g_ParamLimits

0xfbb7,	// (0x000518e0) list_single_heading_pane_fp_g

0x07fe,	// (0x00042527) list_single_heading_pane_fp_t1_ParamLimits

0x07fe,	// (0x00042527) list_single_heading_pane_fp_t1

0x0810,	// (0x00042539) list_single_heading_pane_fp_t2_ParamLimits

0x0810,	// (0x00042539) list_single_heading_pane_fp_t2

0x0001,

0xfbbe,	// (0x000518e7) list_single_heading_pane_fp_t_ParamLimits

0xfbbe,	// (0x000518e7) list_single_heading_pane_fp_t

0x31ed,	// (0x00044f16) aid_size_cell_fast

0x2941,	// (0x0004466a) soft_indicator_pane_cp1_t1

0x322a,	// (0x00044f53) cell_app_pane_cp2_ParamLimits

0x322a,	// (0x00044f53) cell_app_pane_cp2

0x19b1,	// (0x000436da) fep_hwr_candidate_drop_down_list_pane

0xdd68,	// (0x0004fa91) fep_hwr_candidate_pane_g3_ParamLimits

0xdd68,	// (0x0004fa91) fep_hwr_candidate_pane_g3

0xdd75,	// (0x0004fa9e) fep_hwr_candidate_pane_g4_ParamLimits

0xdd75,	// (0x0004fa9e) fep_hwr_candidate_pane_g4

0x0002,

0xfb32,	// (0x0005185b) fep_hwr_candidate_pane_g_ParamLimits

0xfb32,	// (0x0005185b) fep_hwr_candidate_pane_g

0x731a,	// (0x00049043) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x731a,	// (0x00049043) fep_vkb_candidate_drop_down_list_pane

0x7742,	// (0x0004946b) fep_vkb_candidate_pane_g3

0x774a,	// (0x00049473) fep_vkb_candidate_pane_g4

0x0002,

0xfb5f,	// (0x00051888) fep_vkb_candidate_pane_g

0x7420,	// (0x00049149) cell_hwr_candidate_pane_g1_ParamLimits

0x78b2,	// (0x000495db) cell_hwr_candidate_pane_g3_ParamLimits

0x78b2,	// (0x000495db) cell_hwr_candidate_pane_g3

0x78d3,	// (0x000495fc) cell_hwr_candidate_pane_g4_ParamLimits

0x78d3,	// (0x000495fc) cell_hwr_candidate_pane_g4

0x0002,

0xfb79,	// (0x000518a2) cell_hwr_candidate_pane_g_ParamLimits

0xfb79,	// (0x000518a2) cell_hwr_candidate_pane_g

0x7761,	// (0x0004948a) cell_vkb_candidate_pane_g3_ParamLimits

0x7761,	// (0x0004948a) cell_vkb_candidate_pane_g3

0x777c,	// (0x000494a5) cell_vkb_candidate_pane_g4_ParamLimits

0x777c,	// (0x000494a5) cell_vkb_candidate_pane_g4

0x7850,	// (0x00049579) cell_app_pane_cp2_g1_ParamLimits

0x7850,	// (0x00049579) cell_app_pane_cp2_g1

0x786e,	// (0x00049597) cell_app_pane_cp2_g2_ParamLimits

0x786e,	// (0x00049597) cell_app_pane_cp2_g2

0x0001,

0xfbc3,	// (0x000518ec) cell_app_pane_cp2_g_ParamLimits

0xfbc3,	// (0x000518ec) cell_app_pane_cp2_g

0x787a,	// (0x000495a3) cell_app_pane_cp2_t1_ParamLimits

0x787a,	// (0x000495a3) cell_app_pane_cp2_t1

0x2fd8,	// (0x00044d01) grid_highlight_pane_cp1_ParamLimits

0x2fd8,	// (0x00044d01) grid_highlight_pane_cp1

0x1c87,	// (0x000439b0) cell_hwr_candidate_pane_cp1_ParamLimits

0x1c87,	// (0x000439b0) cell_hwr_candidate_pane_cp1

0x7420,	// (0x00049149) fep_hwr_candidate_drop_down_list_pane_g1

0x78f4,	// (0x0004961d) fep_hwr_candidate_drop_down_list_pane_g2

0x7901,	// (0x0004962a) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc8,	// (0x000518f1) fep_hwr_candidate_drop_down_list_pane_g

0x1cab,	// (0x000439d4) fep_hwr_candidate_drop_down_list_scroll_pane

0x1cb4,	// (0x000439dd) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1cb4,	// (0x000439dd) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1cc1,	// (0x000439ea) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1cc1,	// (0x000439ea) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1cce,	// (0x000439f7) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1cce,	// (0x000439f7) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7761,	// (0x0004948a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7761,	// (0x0004948a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x777c,	// (0x000494a5) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x777c,	// (0x000494a5) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1cdb,	// (0x00043a04) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1cdb,	// (0x00043a04) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1cf6,	// (0x00043a1f) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1cf6,	// (0x00043a1f) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1d11,	// (0x00043a3a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1d11,	// (0x00043a3a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcf,	// (0x000518f8) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcf,	// (0x000518f8) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x788c,	// (0x000495b5) cell_vkb_candidate_pane_cp1_ParamLimits

0x788c,	// (0x000495b5) cell_vkb_candidate_pane_cp1

0x7420,	// (0x00049149) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7420,	// (0x00049149) fep_vkb_candidate_drop_down_list_pane_g1

0x78f4,	// (0x0004961d) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x78f4,	// (0x0004961d) fep_vkb_candidate_drop_down_list_pane_g2

0x7901,	// (0x0004962a) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7901,	// (0x0004962a) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc8,	// (0x000518f1) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc8,	// (0x000518f1) fep_vkb_candidate_drop_down_list_pane_g

0x790e,	// (0x00049637) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x790e,	// (0x00049637) fep_vkb_candidate_drop_down_list_scroll_pane

0x791b,	// (0x00049644) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x791b,	// (0x00049644) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7928,	// (0x00049651) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7928,	// (0x00049651) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7934,	// (0x0004965d) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7934,	// (0x0004965d) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x78b2,	// (0x000495db) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x78b2,	// (0x000495db) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x78d3,	// (0x000495fc) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x78d3,	// (0x000495fc) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7940,	// (0x00049669) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7940,	// (0x00049669) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7961,	// (0x0004968a) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7961,	// (0x0004968a) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7982,	// (0x000496ab) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7982,	// (0x000496ab) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe0,	// (0x00051909) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe0,	// (0x00051909) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xba08,	// (0x0004d731) title_pane_g1_ParamLimits

0xba19,	// (0x0004d742) title_pane_g2_ParamLimits

0xf56a,	// (0x00051293) title_pane_g_ParamLimits

0x3638,	// (0x00045361) aid_call2_pane

0x3640,	// (0x00045369) aid_call_pane

0x3648,	// (0x00045371) popup_clock_analogue_window_g1

0x3648,	// (0x00045371) popup_clock_analogue_window_g2

0x1064,	// (0x00042d8d) popup_clock_analogue_window_g3

0x106d,	// (0x00042d96) popup_clock_analogue_window_g4

0xda92,	// (0x0004f7bb) popup_clock_analogue_window_g5

0x0004,

0xf719,	// (0x00051442) popup_clock_analogue_window_g

0x1075,	// (0x00042d9e) popup_clock_analogue_window_t1

0x1083,	// (0x00042dac) clock_digital_number_pane_ParamLimits

0x1083,	// (0x00042dac) clock_digital_number_pane

0x108f,	// (0x00042db8) clock_digital_number_pane_cp02_ParamLimits

0x108f,	// (0x00042db8) clock_digital_number_pane_cp02

0x109b,	// (0x00042dc4) clock_digital_number_pane_cp03_ParamLimits

0x109b,	// (0x00042dc4) clock_digital_number_pane_cp03

0x10a7,	// (0x00042dd0) clock_digital_number_pane_cp04_ParamLimits

0x10a7,	// (0x00042dd0) clock_digital_number_pane_cp04

0x10b3,	// (0x00042ddc) clock_digital_separator_pane_ParamLimits

0x10b3,	// (0x00042ddc) clock_digital_separator_pane

0x10bf,	// (0x00042de8) popup_clock_digital_window_t1_ParamLimits

0x10bf,	// (0x00042de8) popup_clock_digital_window_t1

0xda92,	// (0x0004f7bb) clock_digital_number_pane_g1

0xda92,	// (0x0004f7bb) clock_digital_number_pane_g2

0x0001,

0xf724,	// (0x0005144d) clock_digital_number_pane_g

0xda92,	// (0x0004f7bb) clock_digital_separator_pane_g1

0xda92,	// (0x0004f7bb) clock_digital_separator_pane_g2

0x0001,

0xf724,	// (0x0005144d) clock_digital_separator_pane_g

0xd161,	// (0x0004ee8a) aid_fill_nsta_ParamLimits

0xd292,	// (0x0004efbb) indicator_nsta_pane_ParamLimits

0x48c7,	// (0x000465f0) popup_clock_analogue_window

0x48c7,	// (0x000465f0) popup_clock_digital_window

0x31ae,	// (0x00044ed7) grid_indicator_nsta_pane_ParamLimits

0x6bbc,	// (0x000488e5) clock_nsta_pane_t2

0x0001,

0xfab2,	// (0x000517db) clock_nsta_pane_t

0x1028,	// (0x00042d51) aid_size_max_handle

0xbf67,	// (0x0004dc90) aid_size_min_handle

0x3c36,	// (0x0004595f) editor_scroll_pane

0x799d,	// (0x000496c6) ex_editor_pane

0x315a,	// (0x00044e83) scroll_pane_cp13

0x2f6b,	// (0x00044c94) scroll_pane_cp14

0x3672,	// (0x0004539b) scroll_pane_cp36

0xbff4,	// (0x0004dd1d) list_single_graphic_hl_pane_cp2_ParamLimits

0xbff4,	// (0x0004dd1d) list_single_graphic_hl_pane_cp2

0xd9e7,	// (0x0004f710) list_single_graphic_hl_pane_ParamLimits

0xd9e7,	// (0x0004f710) list_single_graphic_hl_pane

0x0826,	// (0x0004254f) aid_size_min_hl_cp1

0x79a5,	// (0x000496ce) list_highlight_pane_cp34_ParamLimits

0x79a5,	// (0x000496ce) list_highlight_pane_cp34

0x79b6,	// (0x000496df) list_single_graphic_hl_pane_g1_ParamLimits

0x79b6,	// (0x000496df) list_single_graphic_hl_pane_g1

0xb70c,	// (0x0004d435) list_single_graphic_hl_pane_g2_ParamLimits

0xb70c,	// (0x0004d435) list_single_graphic_hl_pane_g2

0xb70c,	// (0x0004d435) list_single_graphic_hl_pane_g3_ParamLimits

0xb70c,	// (0x0004d435) list_single_graphic_hl_pane_g3

0x2f73,	// (0x00044c9c) list_single_graphic_hl_pane_g4_ParamLimits

0x2f73,	// (0x00044c9c) list_single_graphic_hl_pane_g4

0x79f3,	// (0x0004971c) list_single_graphic_hl_pane_g5_ParamLimits

0x79f3,	// (0x0004971c) list_single_graphic_hl_pane_g5

0x0004,

0xfbf1,	// (0x0005191a) list_single_graphic_hl_pane_g_ParamLimits

0xfbf1,	// (0x0005191a) list_single_graphic_hl_pane_g

0xf554,	// (0x0005127d) list_single_graphic_hl_pane_t1_ParamLimits

0xf554,	// (0x0005127d) list_single_graphic_hl_pane_t1

0x79c3,	// (0x000496ec) aid_size_min_hl_cp2

0x79cc,	// (0x000496f5) list_highlight_pane_cp34_cp2_ParamLimits

0x79cc,	// (0x000496f5) list_highlight_pane_cp34_cp2

0x79b6,	// (0x000496df) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x79b6,	// (0x000496df) list_single_graphic_hl_pane_g1_cp2

0x79d9,	// (0x00049702) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x79d9,	// (0x00049702) list_single_graphic_hl_pane_g2_cp2

0x79e5,	// (0x0004970e) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x79e5,	// (0x0004970e) list_single_graphic_hl_pane_g3_cp2

0x2f73,	// (0x00044c9c) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x2f73,	// (0x00044c9c) list_single_graphic_hl_pane_g4_cp2

0x79f3,	// (0x0004971c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x79f3,	// (0x0004971c) list_single_graphic_hl_pane_g5_cp2

0xc12c,	// (0x0004de55) control_pane_g4_ParamLimits

0xc12c,	// (0x0004de55) control_pane_g4

0x3fb4,	// (0x00045cdd) bg_popup_sub_pane_cp10_ParamLimits

0x71a0,	// (0x00048ec9) list_choice_list_pane_ParamLimits

0x71af,	// (0x00048ed8) scroll_pane_cp23

0x29cf,	// (0x000446f8) bg_popup_preview_window_pane_cp02_ParamLimits

0x77cd,	// (0x000494f6) list_preview_fixed_pane_ParamLimits

0x77e3,	// (0x0004950c) list_preview_fixed_pane_cp_ParamLimits

0x77e3,	// (0x0004950c) list_preview_fixed_pane_cp

0x77ef,	// (0x00049518) popup_preview_fixed_window_g1_ParamLimits

0x77ef,	// (0x00049518) popup_preview_fixed_window_g1

0x77fb,	// (0x00049524) popup_preview_fixed_window_g2_ParamLimits

0x77fb,	// (0x00049524) popup_preview_fixed_window_g2

0x0002,

0xfb80,	// (0x000518a9) popup_preview_fixed_window_g_ParamLimits

0xfb80,	// (0x000518a9) popup_preview_fixed_window_g

0x0f9a,	// (0x00042cc3) aid_navi_side_left_pane_ParamLimits

0x0faf,	// (0x00042cd8) aid_navi_side_right_pane_ParamLimits

0x0fc7,	// (0x00042cf0) navi_icon_pane_stacon_ParamLimits

0x0fdb,	// (0x00042d04) navi_navi_pane_stacon_ParamLimits

0x0fc7,	// (0x00042cf0) navi_text_pane_stacon_ParamLimits

0xda88,	// (0x0004f7b1) main_text_info_pane

0x7a1d,	// (0x00049746) listscroll_text_info_pane

0x7a25,	// (0x0004974e) list_text_info_pane_ParamLimits

0x7a25,	// (0x0004974e) list_text_info_pane

0x7a34,	// (0x0004975d) scroll_pane_cp24_ParamLimits

0x7a34,	// (0x0004975d) scroll_pane_cp24

0xdefe,	// (0x0004fc27) list_text_info_pane_t1_ParamLimits

0xdefe,	// (0x0004fc27) list_text_info_pane_t1

0xca5e,	// (0x0004e787) popup_fast_swap2_window_ParamLimits

0xca5e,	// (0x0004e787) popup_fast_swap2_window

0x7a77,	// (0x000497a0) aid_size_cell_fast2

0xda88,	// (0x0004f7b1) bg_popup_window_pane_cp17

0x4f7a,	// (0x00046ca3) heading_pane_cp2

0x2c2f,	// (0x00044958) listscroll_fast2_pane

0x7a81,	// (0x000497aa) grid_fast2_pane

0x7a8b,	// (0x000497b4) listscroll_fast2_pane_g1

0x7a95,	// (0x000497be) listscroll_fast2_pane_g2

0x0001,

0xfbfc,	// (0x00051925) listscroll_fast2_pane_g

0x315a,	// (0x00044e83) scroll_pane_cp26

0x7a9f,	// (0x000497c8) cell_fast2_pane_ParamLimits

0x7a9f,	// (0x000497c8) cell_fast2_pane

0x7ab6,	// (0x000497df) cell_fast2_pane_g1

0x7abf,	// (0x000497e8) cell_fast2_pane_g2

0x7ac8,	// (0x000497f1) cell_fast2_pane_g3

0x0002,

0xfc01,	// (0x0005192a) cell_fast2_pane_g

0x2d28,	// (0x00044a51) grid_highlight_pane_cp9

0x2d3d,	// (0x00044a66) main_eswt_pane_ParamLimits

0x2d3d,	// (0x00044a66) main_eswt_pane

0x7a49,	// (0x00049772) list_single_text_info_pane

0x7ad0,	// (0x000497f9) eswt_ctrl_button_pane

0x7ad0,	// (0x000497f9) eswt_ctrl_canvas_pane

0x7ad8,	// (0x00049801) eswt_ctrl_combo_pane

0x7ad0,	// (0x000497f9) eswt_ctrl_default_pane

0x7ad0,	// (0x000497f9) eswt_ctrl_label_pane

0x7ae0,	// (0x00049809) eswt_ctrl_wait_pane

0x7ae8,	// (0x00049811) eswt_shell_pane

0xda88,	// (0x0004f7b1) listscroll_eswt_app_pane

0x7b08,	// (0x00049831) popup_eswt_tasktip_window_ParamLimits

0x7b08,	// (0x00049831) popup_eswt_tasktip_window

0x4be2,	// (0x0004690b) bg_popup_window_pane_cp18

0x7b19,	// (0x00049842) eswt_control_pane_g1_ParamLimits

0x7b19,	// (0x00049842) eswt_control_pane_g1

0x7b26,	// (0x0004984f) eswt_control_pane_g2_ParamLimits

0x7b26,	// (0x0004984f) eswt_control_pane_g2

0x7b33,	// (0x0004985c) eswt_control_pane_g3_ParamLimits

0x7b33,	// (0x0004985c) eswt_control_pane_g3

0x7b40,	// (0x00049869) eswt_control_pane_g4_ParamLimits

0x7b40,	// (0x00049869) eswt_control_pane_g4

0x0003,

0xfc08,	// (0x00051931) eswt_control_pane_g_ParamLimits

0xfc08,	// (0x00051931) eswt_control_pane_g

0x2fd8,	// (0x00044d01) bg_button_pane_ParamLimits

0x2fd8,	// (0x00044d01) bg_button_pane

0x2d3d,	// (0x00044a66) common_borders_pane_copy2_ParamLimits

0x2d3d,	// (0x00044a66) common_borders_pane_copy2

0x7b4d,	// (0x00049876) control_button_pane_g1_ParamLimits

0x7b4d,	// (0x00049876) control_button_pane_g1

0x7b59,	// (0x00049882) control_button_pane_g2_ParamLimits

0x7b59,	// (0x00049882) control_button_pane_g2

0x7b65,	// (0x0004988e) control_button_pane_g3_ParamLimits

0x7b65,	// (0x0004988e) control_button_pane_g3

0x0002,

0xfc11,	// (0x0005193a) control_button_pane_g_ParamLimits

0xfc11,	// (0x0005193a) control_button_pane_g

0x7b79,	// (0x000498a2) control_button_pane_t1

0x7b87,	// (0x000498b0) control_button_pane_t2

0x0001,

0xfc18,	// (0x00051941) control_button_pane_t

0x4af0,	// (0x00046819) bg_button_pane_g1

0x4af8,	// (0x00046821) bg_button_pane_g2

0x4b00,	// (0x00046829) bg_button_pane_g3

0x4b08,	// (0x00046831) bg_button_pane_g4

0x4b10,	// (0x00046839) bg_button_pane_g5

0x4b18,	// (0x00046841) bg_button_pane_g6

0x4b20,	// (0x00046849) bg_button_pane_g7

0x4b28,	// (0x00046851) bg_button_pane_g8

0x4b30,	// (0x00046859) bg_button_pane_g9

0x0008,

0xf877,	// (0x000515a0) bg_button_pane_g

0x715b,	// (0x00048e84) common_borders_pane_ParamLimits

0x715b,	// (0x00048e84) common_borders_pane

0x7b19,	// (0x00049842) eswt_control_pane_g1_copy1_ParamLimits

0x7b19,	// (0x00049842) eswt_control_pane_g1_copy1

0x7b26,	// (0x0004984f) eswt_control_pane_g2_copy1_ParamLimits

0x7b26,	// (0x0004984f) eswt_control_pane_g2_copy1

0x7b33,	// (0x0004985c) eswt_control_pane_g3_copy1_ParamLimits

0x7b33,	// (0x0004985c) eswt_control_pane_g3_copy1

0x7b40,	// (0x00049869) eswt_control_pane_g4_copy1_ParamLimits

0x7b40,	// (0x00049869) eswt_control_pane_g4_copy1

0x7196,	// (0x00048ebf) bg_eswt_ctrl_canvas_pane_g1

0x715b,	// (0x00048e84) common_borders_pane_cp2_ParamLimits

0x715b,	// (0x00048e84) common_borders_pane_cp2

0x715b,	// (0x00048e84) common_borders_pane_cp3_ParamLimits

0x715b,	// (0x00048e84) common_borders_pane_cp3

0x7b95,	// (0x000498be) separator_horizontal_pane

0x7b9d,	// (0x000498c6) separator_vertical_pane

0x7b19,	// (0x00049842) eswt_control_pane_g1_copy2_ParamLimits

0x7b19,	// (0x00049842) eswt_control_pane_g1_copy2

0x7b26,	// (0x0004984f) eswt_control_pane_g2_copy2_ParamLimits

0x7b26,	// (0x0004984f) eswt_control_pane_g2_copy2

0x7b33,	// (0x0004985c) eswt_control_pane_g3_copy2_ParamLimits

0x7b33,	// (0x0004985c) eswt_control_pane_g3_copy2

0x7b40,	// (0x00049869) eswt_control_pane_g4_copy2_ParamLimits

0x7b40,	// (0x00049869) eswt_control_pane_g4_copy2

0xda88,	// (0x0004f7b1) common_borders_pane_cp4

0x7ba6,	// (0x000498cf) separator_horizontal_pane_g1

0x7baf,	// (0x000498d8) separator_horizontal_pane_g2

0x7bb8,	// (0x000498e1) separator_horizontal_pane_g3

0x0002,

0xfc1d,	// (0x00051946) separator_horizontal_pane_g

0x7b19,	// (0x00049842) eswt_control_pane_g1_copy3_ParamLimits

0x7b19,	// (0x00049842) eswt_control_pane_g1_copy3

0x7b26,	// (0x0004984f) eswt_control_pane_g2_copy3_ParamLimits

0x7b26,	// (0x0004984f) eswt_control_pane_g2_copy3

0x7b33,	// (0x0004985c) eswt_control_pane_g3_copy3_ParamLimits

0x7b33,	// (0x0004985c) eswt_control_pane_g3_copy3

0x7b40,	// (0x00049869) eswt_control_pane_g4_copy3_ParamLimits

0x7b40,	// (0x00049869) eswt_control_pane_g4_copy3

0xda88,	// (0x0004f7b1) common_borders_pane_cp5

0x7bc1,	// (0x000498ea) separator_vertical_pane_g1

0x7bca,	// (0x000498f3) separator_vertical_pane_g2

0x7bd3,	// (0x000498fc) separator_vertical_pane_g3

0x0002,

0xfc24,	// (0x0005194d) separator_vertical_pane_g

0x7b19,	// (0x00049842) eswt_control_pane_g1_copy4_ParamLimits

0x7b19,	// (0x00049842) eswt_control_pane_g1_copy4

0x7b26,	// (0x0004984f) eswt_control_pane_g2_copy4_ParamLimits

0x7b26,	// (0x0004984f) eswt_control_pane_g2_copy4

0x7b33,	// (0x0004985c) eswt_control_pane_g3_copy4_ParamLimits

0x7b33,	// (0x0004985c) eswt_control_pane_g3_copy4

0x7b40,	// (0x00049869) eswt_control_pane_g4_copy4_ParamLimits

0x7b40,	// (0x00049869) eswt_control_pane_g4_copy4

0xdf20,	// (0x0004fc49) eswt_ctrl_combo_button_pane

0xdf28,	// (0x0004fc51) eswt_ctrl_input_pane

0xdf30,	// (0x0004fc59) popup_choice_list_window_cp70

0xdf38,	// (0x0004fc61) eswt_ctrl_input_pane_t1

0xda88,	// (0x0004f7b1) input_focus_pane_cp70

0x715b,	// (0x00048e84) bg_button_pane_cp70_ParamLimits

0x715b,	// (0x00048e84) bg_button_pane_cp70

0xdf46,	// (0x0004fc6f) eswt_ctrl_combo_button_pane_g1

0x7c0a,	// (0x00049933) wait_bar_pane_cp70

0x4be2,	// (0x0004690b) bg_popup_window_pane_cp70_ParamLimits

0x4be2,	// (0x0004690b) bg_popup_window_pane_cp70

0x7c12,	// (0x0004993b) popup_eswt_tasktip_window_t1

0x7c28,	// (0x00049951) wait_bar_pane_cp71_ParamLimits

0x7c28,	// (0x00049951) wait_bar_pane_cp71

0x7c34,	// (0x0004995d) grid_eswt_app_pane

0x3485,	// (0x000451ae) scroll_pane_cp70

0xdf4e,	// (0x0004fc77) cell_eswt_app_pane_ParamLimits

0xdf4e,	// (0x0004fc77) cell_eswt_app_pane

0xdf80,	// (0x0004fca9) cell_eswt_app_pane_g1_ParamLimits

0xdf80,	// (0x0004fca9) cell_eswt_app_pane_g1

0xdfaf,	// (0x0004fcd8) cell_eswt_app_pane_g2_ParamLimits

0xdfaf,	// (0x0004fcd8) cell_eswt_app_pane_g2

0x0001,

0xfc2b,	// (0x00051954) cell_eswt_app_pane_g_ParamLimits

0xfc2b,	// (0x00051954) cell_eswt_app_pane_g

0xdfd8,	// (0x0004fd01) cell_eswt_app_pane_t1_ParamLimits

0xdfd8,	// (0x0004fd01) cell_eswt_app_pane_t1

0x7cf9,	// (0x00049a22) grid_highlight_pane_cp70_ParamLimits

0x7cf9,	// (0x00049a22) grid_highlight_pane_cp70

0x6073,	// (0x00047d9c) set_content_pane_g1

0x3ee6,	// (0x00045c0f) status_small_volume_pane

0x1d40,	// (0x00043a69) status_small_volume_pane_g1

0x1d48,	// (0x00043a71) volume_small2_pane

0x1d51,	// (0x00043a7a) volume_small2_pane_g1

0x1d5a,	// (0x00043a83) volume_small2_pane_g2

0x1d63,	// (0x00043a8c) volume_small2_pane_g3

0x1d6c,	// (0x00043a95) volume_small2_pane_g4

0x1d75,	// (0x00043a9e) volume_small2_pane_g5

0x1d7e,	// (0x00043aa7) volume_small2_pane_g6

0x1d87,	// (0x00043ab0) volume_small2_pane_g7

0x1d90,	// (0x00043ab9) volume_small2_pane_g8

0x1d99,	// (0x00043ac2) volume_small2_pane_g9

0x1da2,	// (0x00043acb) volume_small2_pane_g10

0x0009,

0xfc30,	// (0x00051959) volume_small2_pane_g

0x7574,	// (0x0004929d) fep_vkb_top_text_pane_g1_ParamLimits

0xdea6,	// (0x0004fbcf) fep_vkb_top_text_pane_t1_ParamLimits

0x7807,	// (0x00049530) popup_preview_fixed_window_g3_ParamLimits

0x7807,	// (0x00049530) popup_preview_fixed_window_g3

0xd0f4,	// (0x0004ee1d) popup_toolbar_trans_pane

0xd837,	// (0x0004f560) aid_height_set_list_ParamLimits

0x5f29,	// (0x00047c52) aid_size_parent_ParamLimits

0x3fb4,	// (0x00045cdd) list_highlight_pane_cp2_ParamLimits

0x6073,	// (0x00047d9c) set_content_pane_g1_ParamLimits

0xc449,	// (0x0004e172) list_single_image_pane_ParamLimits

0xc449,	// (0x0004e172) list_single_image_pane

0xe00a,	// (0x0004fd33) aid_size_cell_image_ParamLimits

0xe00a,	// (0x0004fd33) aid_size_cell_image

0xe017,	// (0x0004fd40) grid_single_image_pane_ParamLimits

0xe017,	// (0x0004fd40) grid_single_image_pane

0x2ff2,	// (0x00044d1b) list_single_image_pane_g1_ParamLimits

0x2ff2,	// (0x00044d1b) list_single_image_pane_g1

0x2ffe,	// (0x00044d27) list_single_image_pane_g2_ParamLimits

0x2ffe,	// (0x00044d27) list_single_image_pane_g2

0x0001,

0xfc45,	// (0x0005196e) list_single_image_pane_g_ParamLimits

0xfc45,	// (0x0005196e) list_single_image_pane_g

0x7d20,	// (0x00049a49) list_single_image_pane_t1_ParamLimits

0x7d20,	// (0x00049a49) list_single_image_pane_t1

0xe025,	// (0x0004fd4e) cell_image_list_pane_ParamLimits

0xe025,	// (0x0004fd4e) cell_image_list_pane

0xe03f,	// (0x0004fd68) cell_image_list_pane_g1

0xe048,	// (0x0004fd71) cell_image_list_pane_g2

0x0001,

0xfc4a,	// (0x00051973) cell_image_list_pane_g

0x7d5e,	// (0x00049a87) aid_size_cell_tb_trans_pane

0x2fd8,	// (0x00044d01) bg_tb_trans_pane

0x7d70,	// (0x00049a99) grid_tb_trans_pane

0x4af0,	// (0x00046819) bg_tb_trans_pane_g1

0x4af8,	// (0x00046821) bg_tb_trans_pane_g2

0x4b00,	// (0x00046829) bg_tb_trans_pane_g3

0x4b08,	// (0x00046831) bg_tb_trans_pane_g4

0x4b10,	// (0x00046839) bg_tb_trans_pane_g5

0x4b28,	// (0x00046851) bg_tb_trans_pane_g6

0x4b30,	// (0x00046859) bg_tb_trans_pane_g7

0x4b18,	// (0x00046841) bg_tb_trans_pane_g8

0x4b20,	// (0x00046849) bg_tb_trans_pane_g9

0x0008,

0xfc4f,	// (0x00051978) bg_tb_trans_pane_g

0x7d84,	// (0x00049aad) cell_toolbar_trans_pane_ParamLimits

0x7d84,	// (0x00049aad) cell_toolbar_trans_pane

0x7196,	// (0x00048ebf) cell_toolbar_trans_pane_g1

0xdc4e,	// (0x0004f977) list_form2_midp_pane_t1

0xdc5c,	// (0x0004f985) list_form2_midp_pane_t2

0x0001,

0xfaf8,	// (0x00051821) list_form2_midp_pane_t

0x6dd3,	// (0x00048afc) scroll_pane_cp51_ParamLimits

0x6f9a,	// (0x00048cc3) form2_midp_wait_pane_g1

0x6fa3,	// (0x00048ccc) form2_midp_wait_pane_g2

0x6fac,	// (0x00048cd5) form2_midp_wait_pane_g3

0x0002,

0xfb0d,	// (0x00051836) form2_midp_wait_pane_g

0x2745,	// (0x0004446e) list_highlight_pane_cp21_ParamLimits

0x6ff0,	// (0x00048d19) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x6fff,	// (0x00048d28) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6121,	// (0x00047e4a) list_single_2graphic_im_pane_ParamLimits

0x6121,	// (0x00047e4a) list_single_2graphic_im_pane

0xe051,	// (0x0004fd7a) list_single_2graphic_im_pane_g1_ParamLimits

0xe051,	// (0x0004fd7a) list_single_2graphic_im_pane_g1

0xe062,	// (0x0004fd8b) list_single_2graphic_im_pane_g2_ParamLimits

0xe062,	// (0x0004fd8b) list_single_2graphic_im_pane_g2

0xe06e,	// (0x0004fd97) list_single_2graphic_im_pane_g3_ParamLimits

0xe06e,	// (0x0004fd97) list_single_2graphic_im_pane_g3

0x0003,

0xfc62,	// (0x0005198b) list_single_2graphic_im_pane_g_ParamLimits

0xfc62,	// (0x0005198b) list_single_2graphic_im_pane_g

0xe082,	// (0x0004fdab) list_single_2graphic_im_pane_t1_ParamLimits

0xe082,	// (0x0004fdab) list_single_2graphic_im_pane_t1

0x7813,	// (0x0004953c) list_single_graphic_2heading_pane_fp_ParamLimits

0x7813,	// (0x0004953c) list_single_graphic_2heading_pane_fp

0x0708,	// (0x00042431) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0708,	// (0x00042431) list_single_graphic_2heading_pane_fp_g1

0x782c,	// (0x00049555) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x782c,	// (0x00049555) list_single_graphic_2heading_pane_fp_g2

0x0e64,	// (0x00042b8d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0e64,	// (0x00042b8d) list_single_graphic_2heading_pane_fp_g3

0x1c03,	// (0x0004392c) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x1c03,	// (0x0004392c) list_single_graphic_2heading_pane_fp_g4

0x7838,	// (0x00049561) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7838,	// (0x00049561) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb90,	// (0x000518b9) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb90,	// (0x000518b9) list_single_graphic_2heading_pane_fp_g

0x0851,	// (0x0004257a) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x0851,	// (0x0004257a) list_single_graphic_2heading_pane_fp_t1

0x0740,	// (0x00042469) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0740,	// (0x00042469) list_single_graphic_2heading_pane_fp_t2

0x0867,	// (0x00042590) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x0867,	// (0x00042590) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6b,	// (0x00051994) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6b,	// (0x00051994) list_single_graphic_2heading_pane_fp_t

0x7236,	// (0x00048f5f) fep_hwr_write_pane_g5_ParamLimits

0x7236,	// (0x00048f5f) fep_hwr_write_pane_g5

0x7242,	// (0x00048f6b) fep_hwr_write_pane_g6_ParamLimits

0x7242,	// (0x00048f6b) fep_hwr_write_pane_g6

0x7ae8,	// (0x00049811) eswt_shell_pane_ParamLimits

0x4be2,	// (0x0004690b) bg_popup_window_pane_cp18_ParamLimits

0x5e6f,	// (0x00047b98) heading_pane_cp70

0x7c12,	// (0x0004993b) popup_eswt_tasktip_window_t1_ParamLimits

0xd1b7,	// (0x0004eee0) aid_touch_tab_arrow_left

0xd1cd,	// (0x0004eef6) aid_touch_tab_arrow_right

0xba31,	// (0x0004d75a) title_pane_g3_ParamLimits

0xba31,	// (0x0004d75a) title_pane_g3

0x2f97,	// (0x00044cc0) set_value_pane_g1

0xd0f4,	// (0x0004ee1d) popup_toolbar_trans_pane_ParamLimits

0x7d5e,	// (0x00049a87) aid_size_cell_tb_trans_pane_ParamLimits

0x2fd8,	// (0x00044d01) bg_tb_trans_pane_ParamLimits

0x7d70,	// (0x00049a99) grid_tb_trans_pane_ParamLimits

0x29cf,	// (0x000446f8) cont_note_pane_ParamLimits

0x29cf,	// (0x000446f8) cont_note_pane

0x2d3d,	// (0x00044a66) cont_snote2_single_text_pane_ParamLimits

0x2d3d,	// (0x00044a66) cont_snote2_single_text_pane

0x2d3d,	// (0x00044a66) cont_snote2_single_graphic_pane_ParamLimits

0x2d3d,	// (0x00044a66) cont_snote2_single_graphic_pane

0x5196,	// (0x00046ebf) cont_note_wait_pane_ParamLimits

0x5196,	// (0x00046ebf) cont_note_wait_pane

0x5196,	// (0x00046ebf) cont_note_image_pane_ParamLimits

0x5196,	// (0x00046ebf) cont_note_image_pane

0x7e18,	// (0x00049b41) popup_note2_window_g1_ParamLimits

0x7e18,	// (0x00049b41) popup_note2_window_g1

0x7e49,	// (0x00049b72) popup_note2_window_t1_ParamLimits

0x7e49,	// (0x00049b72) popup_note2_window_t1

0x7e8e,	// (0x00049bb7) popup_note2_window_t2_ParamLimits

0x7e8e,	// (0x00049bb7) popup_note2_window_t2

0x7ed3,	// (0x00049bfc) popup_note2_window_t3_ParamLimits

0x7ed3,	// (0x00049bfc) popup_note2_window_t3

0x7f18,	// (0x00049c41) popup_note2_window_t4_ParamLimits

0x7f18,	// (0x00049c41) popup_note2_window_t4

0x2a53,	// (0x0004477c) popup_note2_window_t5_ParamLimits

0x2a53,	// (0x0004477c) popup_note2_window_t5

0x0004,

0xfc77,	// (0x000519a0) popup_note2_window_t_ParamLimits

0xfc77,	// (0x000519a0) popup_note2_window_t

0x7f47,	// (0x00049c70) popup_note2_image_window_g1_ParamLimits

0x7f47,	// (0x00049c70) popup_note2_image_window_g1

0x7f53,	// (0x00049c7c) popup_note2_image_window_g2_ParamLimits

0x7f53,	// (0x00049c7c) popup_note2_image_window_g2

0x0001,

0xfc82,	// (0x000519ab) popup_note2_image_window_g_ParamLimits

0xfc82,	// (0x000519ab) popup_note2_image_window_g

0x7f65,	// (0x00049c8e) popup_note2_image_window_t1_ParamLimits

0x7f65,	// (0x00049c8e) popup_note2_image_window_t1

0x7f7d,	// (0x00049ca6) popup_note2_image_window_t2_ParamLimits

0x7f7d,	// (0x00049ca6) popup_note2_image_window_t2

0x7f95,	// (0x00049cbe) popup_note2_image_window_t3_ParamLimits

0x7f95,	// (0x00049cbe) popup_note2_image_window_t3

0x0002,

0xfc87,	// (0x000519b0) popup_note2_image_window_t_ParamLimits

0xfc87,	// (0x000519b0) popup_note2_image_window_t

0x51a4,	// (0x00046ecd) popup_note2_wait_window_g1_ParamLimits

0x51a4,	// (0x00046ecd) popup_note2_wait_window_g1

0x7fb1,	// (0x00049cda) popup_note2_wait_window_g2_ParamLimits

0x7fb1,	// (0x00049cda) popup_note2_wait_window_g2

0x51bc,	// (0x00046ee5) popup_note2_wait_window_g3_ParamLimits

0x51bc,	// (0x00046ee5) popup_note2_wait_window_g3

0x0002,

0xfc8e,	// (0x000519b7) popup_note2_wait_window_g_ParamLimits

0xfc8e,	// (0x000519b7) popup_note2_wait_window_g

0x7fbd,	// (0x00049ce6) popup_note2_wait_window_t1_ParamLimits

0x7fbd,	// (0x00049ce6) popup_note2_wait_window_t1

0x7fdb,	// (0x00049d04) popup_note2_wait_window_t2_ParamLimits

0x7fdb,	// (0x00049d04) popup_note2_wait_window_t2

0x7ff9,	// (0x00049d22) popup_note2_wait_window_t3_ParamLimits

0x7ff9,	// (0x00049d22) popup_note2_wait_window_t3

0x800b,	// (0x00049d34) popup_note2_wait_window_t4_ParamLimits

0x800b,	// (0x00049d34) popup_note2_wait_window_t4

0x0003,

0xfc95,	// (0x000519be) popup_note2_wait_window_t_ParamLimits

0xfc95,	// (0x000519be) popup_note2_wait_window_t

0x801d,	// (0x00049d46) wait_bar2_pane_ParamLimits

0x801d,	// (0x00049d46) wait_bar2_pane

0x8035,	// (0x00049d5e) popup_snote2_single_text_window_g1_ParamLimits

0x8035,	// (0x00049d5e) popup_snote2_single_text_window_g1

0x805d,	// (0x00049d86) popup_snote2_single_text_window_t1_ParamLimits

0x805d,	// (0x00049d86) popup_snote2_single_text_window_t1

0x80a9,	// (0x00049dd2) popup_snote2_single_text_window_t2_ParamLimits

0x80a9,	// (0x00049dd2) popup_snote2_single_text_window_t2

0x80f5,	// (0x00049e1e) popup_snote2_single_text_window_t3_ParamLimits

0x80f5,	// (0x00049e1e) popup_snote2_single_text_window_t3

0x8136,	// (0x00049e5f) popup_snote2_single_text_window_t4_ParamLimits

0x8136,	// (0x00049e5f) popup_snote2_single_text_window_t4

0x816c,	// (0x00049e95) popup_snote2_single_text_window_t5_ParamLimits

0x816c,	// (0x00049e95) popup_snote2_single_text_window_t5

0x0004,

0xfc9e,	// (0x000519c7) popup_snote2_single_text_window_t_ParamLimits

0xfc9e,	// (0x000519c7) popup_snote2_single_text_window_t

0x8197,	// (0x00049ec0) popup_snote2_single_graphic_window_g1_ParamLimits

0x8197,	// (0x00049ec0) popup_snote2_single_graphic_window_g1

0x81bf,	// (0x00049ee8) popup_snote2_single_graphic_window_g2_ParamLimits

0x81bf,	// (0x00049ee8) popup_snote2_single_graphic_window_g2

0x0001,

0xfca9,	// (0x000519d2) popup_snote2_single_graphic_window_g_ParamLimits

0xfca9,	// (0x000519d2) popup_snote2_single_graphic_window_g

0x81e7,	// (0x00049f10) popup_snote2_single_graphic_window_t1_ParamLimits

0x81e7,	// (0x00049f10) popup_snote2_single_graphic_window_t1

0x8233,	// (0x00049f5c) popup_snote2_single_graphic_window_t2_ParamLimits

0x8233,	// (0x00049f5c) popup_snote2_single_graphic_window_t2

0x80f5,	// (0x00049e1e) popup_snote2_single_graphic_window_t3_ParamLimits

0x80f5,	// (0x00049e1e) popup_snote2_single_graphic_window_t3

0x8136,	// (0x00049e5f) popup_snote2_single_graphic_window_t4_ParamLimits

0x8136,	// (0x00049e5f) popup_snote2_single_graphic_window_t4

0x816c,	// (0x00049e95) popup_snote2_single_graphic_window_t5_ParamLimits

0x816c,	// (0x00049e95) popup_snote2_single_graphic_window_t5

0x0004,

0xfcae,	// (0x000519d7) popup_snote2_single_graphic_window_t_ParamLimits

0xfcae,	// (0x000519d7) popup_snote2_single_graphic_window_t

0x6c7d,	// (0x000489a6) clock_nsta_pane_cp2_t1

0x6c7d,	// (0x000489a6) clock_nsta_pane_cp2_t2

0x0001,

0xface,	// (0x000517f7) clock_nsta_pane_cp2_t

0x01b0,	// (0x00041ed9) form_field_data_wide_pane_g1_ParamLimits

0x2ff2,	// (0x00044d1b) form_field_data_wide_pane_g2_ParamLimits

0x2ff2,	// (0x00044d1b) form_field_data_wide_pane_g2

0x2ffe,	// (0x00044d27) form_field_data_wide_pane_g3_ParamLimits

0x2ffe,	// (0x00044d27) form_field_data_wide_pane_g3

0x0002,

0xf69c,	// (0x000513c5) form_field_data_wide_pane_g_ParamLimits

0xf69c,	// (0x000513c5) form_field_data_wide_pane_g

0xdb56,	// (0x0004f87f) grid_touch_3_pane_ParamLimits

0xdb56,	// (0x0004f87f) grid_touch_3_pane

0xe0b3,	// (0x0004fddc) cell_touch_3_pane_ParamLimits

0xe0b3,	// (0x0004fddc) cell_touch_3_pane

0x7196,	// (0x00048ebf) cell_touch_3_pane_g1

0x7196,	// (0x00048ebf) cell_touch_3_pane_g2

0x0001,

0xfb53,	// (0x0005187c) cell_touch_3_pane_g

0x2a85,	// (0x000447ae) cont_query_data_pane

0x2a8d,	// (0x000447b6) cont_query_data_pane_cp1

0x82b2,	// (0x00049fdb) button_value_adjust_pane_cp7

0x82ba,	// (0x00049fe3) query_popup_pane_cp3

0x3712,	// (0x0004543b) bg_popup_sub_pane_cp22_ParamLimits

0x10de,	// (0x00042e07) navi_navi_volume_pane_cp2

0x10f9,	// (0x00042e22) popup_side_volume_key_window_g2

0x1108,	// (0x00042e31) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x00051457) popup_side_volume_key_window_g

0x1125,	// (0x00042e4e) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x0005145e) popup_side_volume_key_window_t

0x39cd,	// (0x000456f6) popup_side_volume_key_window_ParamLimits

0xb198,	// (0x0004cec1) list_double_graphic_pane_g4_ParamLimits

0xb198,	// (0x0004cec1) list_double_graphic_pane_g4

0xc434,	// (0x0004e15d) list_single_2heading_msg_pane_ParamLimits

0xc434,	// (0x0004e15d) list_single_2heading_msg_pane

0xc4a7,	// (0x0004e1d0) list_single_2heading_msg_pane_g1_ParamLimits

0xc4a7,	// (0x0004e1d0) list_single_2heading_msg_pane_g1

0xc4b3,	// (0x0004e1dc) list_single_2heading_msg_pane_g2_ParamLimits

0xc4b3,	// (0x0004e1dc) list_single_2heading_msg_pane_g2

0xc4c6,	// (0x0004e1ef) list_single_2heading_msg_pane_g3_ParamLimits

0xc4c6,	// (0x0004e1ef) list_single_2heading_msg_pane_g3

0xc4d2,	// (0x0004e1fb) list_single_2heading_msg_pane_g4_ParamLimits

0xc4d2,	// (0x0004e1fb) list_single_2heading_msg_pane_g4

0x0003,

0xfcb9,	// (0x000519e2) list_single_2heading_msg_pane_g_ParamLimits

0xfcb9,	// (0x000519e2) list_single_2heading_msg_pane_g

0xb718,	// (0x0004d441) list_single_2heading_msg_pane_t1_ParamLimits

0xb718,	// (0x0004d441) list_single_2heading_msg_pane_t1

0xb740,	// (0x0004d469) list_single_2heading_msg_pane_t2_ParamLimits

0xb740,	// (0x0004d469) list_single_2heading_msg_pane_t2

0xb7ab,	// (0x0004d4d4) list_single_2heading_msg_pane_t3_ParamLimits

0xb7ab,	// (0x0004d4d4) list_single_2heading_msg_pane_t3

0x0917,	// (0x00042640) list_single_2heading_msg_pane_t4_ParamLimits

0x0917,	// (0x00042640) list_single_2heading_msg_pane_t4

0x0003,

0xfcc2,	// (0x000519eb) list_single_2heading_msg_pane_t_ParamLimits

0xfcc2,	// (0x000519eb) list_single_2heading_msg_pane_t

0xdaa6,	// (0x0004f7cf) title_pane_g4_ParamLimits

0xdaa6,	// (0x0004f7cf) title_pane_g4

0x0eea,	// (0x00042c13) title_pane_stacon_g3_ParamLimits

0x0eea,	// (0x00042c13) title_pane_stacon_g3

0x7ddb,	// (0x00049b04) list_single_2graphic_im_pane_g4_ParamLimits

0x7ddb,	// (0x00049b04) list_single_2graphic_im_pane_g4

0x5c0c,	// (0x00047935) popup_side_volume_key_window_cp

0x6482,	// (0x000481ab) main_idle_act2_pane_t1

0x14da,	// (0x00043203) toolbar_button_pane_g10

0xbdbe,	// (0x0004dae7) popup_toolbar_window_cp1

0x6c6e,	// (0x00048997) clock_nsta_pane_cp_t1

0x6c6e,	// (0x00048997) clock_nsta_pane_cp_t2

0x0001,

0xfac9,	// (0x000517f2) clock_nsta_pane_cp_t

0x10de,	// (0x00042e07) navi_navi_volume_pane_cp2_ParamLimits

0x10ed,	// (0x00042e16) popup_side_volume_key_window_g1_ParamLimits

0x10f9,	// (0x00042e22) popup_side_volume_key_window_g2_ParamLimits

0x1108,	// (0x00042e31) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x00051457) popup_side_volume_key_window_g_ParamLimits

0x199d,	// (0x000436c6) fep_hwr_aid_pane

0xdd5a,	// (0x0004fa83) bg_fep_hwr_top_pane_g4_ParamLimits

0x7206,	// (0x00048f2f) fep_hwr_top_pane_g1_ParamLimits

0x7218,	// (0x00048f41) fep_hwr_top_pane_g2_ParamLimits

0x1a58,	// (0x00043781) fep_hwr_top_pane_g3_ParamLimits

0xfb1e,	// (0x00051847) fep_hwr_top_pane_g_ParamLimits

0x1a6d,	// (0x00043796) fep_hwr_top_text_pane_ParamLimits

0x59c1,	// (0x000476ea) aid_touch_tab_arrow_arrow_2

0x59ca,	// (0x000476f3) aid_touch_tab_arrow_left_2

0x19b1,	// (0x000436da) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x19e8,	// (0x00043711) fep_hwr_prediction_pane

0x736e,	// (0x00049097) fep_vkb_prediction_pane

0xde86,	// (0x0004fbaf) fep_vkb_side_pane_g3_ParamLimits

0xde86,	// (0x0004fbaf) fep_vkb_side_pane_g3

0x7420,	// (0x00049149) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x78f4,	// (0x0004961d) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7901,	// (0x0004962a) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc8,	// (0x000518f1) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x82e1,	// (0x0004a00a) fep_hwr_prediction_pane_g1

0x1ddb,	// (0x00043b04) fep_hwr_prediction_pane_g2

0x1de3,	// (0x00043b0c) fep_hwr_prediction_pane_g3

0x1deb,	// (0x00043b14) fep_hwr_prediction_pane_g4

0x0003,

0xfccb,	// (0x000519f4) fep_hwr_prediction_pane_g

0x82e1,	// (0x0004a00a) fep_vkb_prediction_pane_g1

0x82eb,	// (0x0004a014) fep_vkb_prediction_pane_g2

0x82f3,	// (0x0004a01c) fep_vkb_prediction_pane_g3

0x82fb,	// (0x0004a024) fep_vkb_prediction_pane_g4

0x0003,

0xfcd4,	// (0x000519fd) fep_vkb_prediction_pane_g

0x6830,	// (0x00048559) slider_set_pane_g3

0x6844,	// (0x0004856d) slider_set_pane_g4

0x685c,	// (0x00048585) slider_set_pane_g5

0x6830,	// (0x00048559) slider_set_pane_g6

0x17cf,	// (0x000434f8) slider_set_pane_g7

0x60ba,	// (0x00047de3) slider_form_pane_g3

0x60c3,	// (0x00047dec) slider_form_pane_g4

0x60cb,	// (0x00047df4) slider_form_pane_g5

0x60ba,	// (0x00047de3) slider_form_pane_g6

0xd9a6,	// (0x0004f6cf) slider_form_pane_g7

0x6750,	// (0x00048479) slider_set_pane_vc_g3

0x6759,	// (0x00048482) slider_set_pane_vc_g4

0x6762,	// (0x0004848b) slider_set_pane_vc_g5

0x6750,	// (0x00048479) slider_set_pane_vc_g6

0x676b,	// (0x00048494) slider_set_pane_vc_g7

0x6750,	// (0x00048479) slider_form_pane_vc_g1

0x6759,	// (0x00048482) slider_form_pane_vc_g2

0x6762,	// (0x0004848b) slider_form_pane_vc_g3

0x6750,	// (0x00048479) slider_form_pane_vc_g4

0x6962,	// (0x0004868b) slider_form_pane_vc_g5

0x0004,

0xfaa2,	// (0x000517cb) slider_form_pane_vc_g

0xda88,	// (0x0004f7b1) main_idle_act3_pane

0x8303,	// (0x0004a02c) ai3_links_pane

0xe0fd,	// (0x0004fe26) popup_ai3_data_window_ParamLimits

0xe0fd,	// (0x0004fe26) popup_ai3_data_window

0xda88,	// (0x0004f7b1) grid_ai3_links_pane

0xe11b,	// (0x0004fe44) cell_ai3_links_pane_ParamLimits

0xe11b,	// (0x0004fe44) cell_ai3_links_pane

0x8344,	// (0x0004a06d) bg_popup_sub_pane_cp11

0x8351,	// (0x0004a07a) cell_ai3_links_pane_g1

0xda88,	// (0x0004f7b1) bg_popup_sub_pane_cp12

0x8376,	// (0x0004a09f) heading_ai3_data_pane

0x837e,	// (0x0004a0a7) list_ai3_gene_pane

0x838a,	// (0x0004a0b3) popup_ai3_data_window_g1

0x8392,	// (0x0004a0bb) heading_ai3_data_pane_g1

0x839a,	// (0x0004a0c3) heading_ai3_data_pane_t1

0x83a8,	// (0x0004a0d1) list_double_ai3_gene_pane_ParamLimits

0x83a8,	// (0x0004a0d1) list_double_ai3_gene_pane

0x83b5,	// (0x0004a0de) list_single_ai3_gene_pane_ParamLimits

0x83b5,	// (0x0004a0de) list_single_ai3_gene_pane

0x715b,	// (0x00048e84) list_highlight_pane_cp7_ParamLimits

0x715b,	// (0x00048e84) list_highlight_pane_cp7

0x83c2,	// (0x0004a0eb) list_single_a13_gene_pane_t1_ParamLimits

0x83c2,	// (0x0004a0eb) list_single_a13_gene_pane_t1

0x83d9,	// (0x0004a102) list_single_ai3_gene_pane_g1

0x83e2,	// (0x0004a10b) list_single_ai3_gene_pane_g2

0x0001,

0xfcdd,	// (0x00051a06) list_single_ai3_gene_pane_g

0x83ea,	// (0x0004a113) list_double_ai3_gene_pane_g1_ParamLimits

0x83ea,	// (0x0004a113) list_double_ai3_gene_pane_g1

0x83f6,	// (0x0004a11f) list_double_ai3_gene_pane_t1_ParamLimits

0x83f6,	// (0x0004a11f) list_double_ai3_gene_pane_t1

0x8412,	// (0x0004a13b) list_double_ai3_gene_pane_t2_ParamLimits

0x8412,	// (0x0004a13b) list_double_ai3_gene_pane_t2

0x8427,	// (0x0004a150) list_double_ai3_gene_pane_t3_ParamLimits

0x8427,	// (0x0004a150) list_double_ai3_gene_pane_t3

0x0002,

0xfce2,	// (0x00051a0b) list_double_ai3_gene_pane_t_ParamLimits

0xfce2,	// (0x00051a0b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x087d,	// (0x000425a6) aid_size_min_col_2

0xe0e7,	// (0x0004fe10) aid_size_min_msg_ParamLimits

0xe0e7,	// (0x0004fe10) aid_size_min_msg

0xde9a,	// (0x0004fbc3) fep_vkb_top_text_pane_g2_ParamLimits

0xde9a,	// (0x0004fbc3) fep_vkb_top_text_pane_g2

0x0001,

0xfb4e,	// (0x00051877) fep_vkb_top_text_pane_g_ParamLimits

0xfb4e,	// (0x00051877) fep_vkb_top_text_pane_g

0xda88,	// (0x0004f7b1) main_hc_apps_shell_pane

0x8444,	// (0x0004a16d) grid_hc_apps_pane_ParamLimits

0x8444,	// (0x0004a16d) grid_hc_apps_pane

0x8453,	// (0x0004a17c) list_hc_apps_pane

0x845b,	// (0x0004a184) scroll_pane_cp37_ParamLimits

0x845b,	// (0x0004a184) scroll_pane_cp37

0xe135,	// (0x0004fe5e) cell_hc_apps_pane_ParamLimits

0xe135,	// (0x0004fe5e) cell_hc_apps_pane

0xe1ff,	// (0x0004ff28) cell_hc_apps_pane_g1_ParamLimits

0xe1ff,	// (0x0004ff28) cell_hc_apps_pane_g1

0x8550,	// (0x0004a279) cell_hc_apps_pane_g2_ParamLimits

0x8550,	// (0x0004a279) cell_hc_apps_pane_g2

0x856c,	// (0x0004a295) cell_hc_apps_pane_g3_ParamLimits

0x856c,	// (0x0004a295) cell_hc_apps_pane_g3

0x0002,

0xfce9,	// (0x00051a12) cell_hc_apps_pane_g_ParamLimits

0xfce9,	// (0x00051a12) cell_hc_apps_pane_g

0xe22c,	// (0x0004ff55) cell_hc_apps_pane_t1_ParamLimits

0xe22c,	// (0x0004ff55) cell_hc_apps_pane_t1

0x29cf,	// (0x000446f8) grid_highlight_pane_cp10_ParamLimits

0x29cf,	// (0x000446f8) grid_highlight_pane_cp10

0xe26c,	// (0x0004ff95) list_single_hc_apps_pane_ParamLimits

0xe26c,	// (0x0004ff95) list_single_hc_apps_pane

0xe2a6,	// (0x0004ffcf) list_single_hc_apps_pane_g1

0xc4ea,	// (0x0004e213) list_single_hc_apps_pane_g2

0x0001,

0xfcf0,	// (0x00051a19) list_single_hc_apps_pane_g

0xc503,	// (0x0004e22c) list_single_hc_apps_pane_g2_copy1

0xb819,	// (0x0004d542) list_single_hc_apps_pane_t1

0x2745,	// (0x0004446e) bg_set_opt_pane_cp_ParamLimits

0x0d6b,	// (0x00042a94) setting_slider_pane_t1_ParamLimits

0x0d81,	// (0x00042aaa) setting_slider_pane_t2_ParamLimits

0x0d9b,	// (0x00042ac4) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x000512a3) setting_slider_pane_t_ParamLimits

0x0db3,	// (0x00042adc) slider_set_pane_ParamLimits

0x13aa,	// (0x000430d3) control_pane_g5_ParamLimits

0x13aa,	// (0x000430d3) control_pane_g5

0x5edb,	// (0x00047c04) slider_set_pane_g1_ParamLimits

0x17c3,	// (0x000434ec) slider_set_pane_g2_ParamLimits

0x6830,	// (0x00048559) slider_set_pane_g3_ParamLimits

0x6844,	// (0x0004856d) slider_set_pane_g4_ParamLimits

0x685c,	// (0x00048585) slider_set_pane_g5_ParamLimits

0x6830,	// (0x00048559) slider_set_pane_g6_ParamLimits

0x17cf,	// (0x000434f8) slider_set_pane_g7_ParamLimits

0xf975,	// (0x0005169e) slider_set_pane_g_ParamLimits

0x3ab2,	// (0x000457db) navi_icon_text_pane_ParamLimits

0xd181,	// (0x0004eeaa) aid_fill_nsta_2_ParamLimits

0xd1b7,	// (0x0004eee0) aid_touch_tab_arrow_left_ParamLimits

0xd1cd,	// (0x0004eef6) aid_touch_tab_arrow_right_ParamLimits

0xd268,	// (0x0004ef91) clock_nsta_pane_ParamLimits

0xd6f5,	// (0x0004f41e) navi_icon_pane_g1_ParamLimits

0xd701,	// (0x0004f42a) navi_text_pane_t1_ParamLimits

0xdc30,	// (0x0004f959) navi_icon_text_pane_g1_ParamLimits

0xdc3c,	// (0x0004f965) navi_icon_text_pane_t1_ParamLimits

0xe2a6,	// (0x0004ffcf) list_single_hc_apps_pane_g1_ParamLimits

0xc4ea,	// (0x0004e213) list_single_hc_apps_pane_g2_ParamLimits

0xfcf0,	// (0x00051a19) list_single_hc_apps_pane_g_ParamLimits

0xc503,	// (0x0004e22c) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb819,	// (0x0004d542) list_single_hc_apps_pane_t1_ParamLimits

0xb99d,	// (0x0004d6c6) popup_toolbar2_fixed_window_ParamLimits

0xb99d,	// (0x0004d6c6) popup_toolbar2_fixed_window

0xd0ea,	// (0x0004ee13) popup_toolbar2_float_window

0xda88,	// (0x0004f7b1) bg_popup_sub_pane_cp27

0x8626,	// (0x0004a34f) grid_toolbar2_float_pane

0xda88,	// (0x0004f7b1) bg_popup_sub_pane_cp26

0x8626,	// (0x0004a34f) grid_toolbar2_fixed_pane

0xe2bf,	// (0x0004ffe8) cell_toolbar2_fixed_pane_ParamLimits

0xe2bf,	// (0x0004ffe8) cell_toolbar2_fixed_pane

0xe2dc,	// (0x00050005) cell_toolbar2_fixed_pane_g1

0x8647,	// (0x0004a370) toolbar2_fixed_button_pane

0x4af0,	// (0x00046819) toolbar2_fixed_button_pane_g1

0x4af8,	// (0x00046821) toolbar2_fixed_button_pane_g2

0x4b00,	// (0x00046829) toolbar2_fixed_button_pane_g3

0x4b08,	// (0x00046831) toolbar2_fixed_button_pane_g4

0x4b10,	// (0x00046839) toolbar2_fixed_button_pane_g5

0x4b18,	// (0x00046841) toolbar2_fixed_button_pane_g6

0x4b20,	// (0x00046849) toolbar2_fixed_button_pane_g7

0x4b28,	// (0x00046851) toolbar2_fixed_button_pane_g8

0x4b30,	// (0x00046859) toolbar2_fixed_button_pane_g9

0x0008,

0xf877,	// (0x000515a0) toolbar2_fixed_button_pane_g

0x864f,	// (0x0004a378) cell_toolbar2_float_pane_ParamLimits

0x864f,	// (0x0004a378) cell_toolbar2_float_pane

0x8660,	// (0x0004a389) cell_toolbar2_float_pane_g1

0x8647,	// (0x0004a370) toolbar2_fixed_button_pane_cp

0xdd82,	// (0x0004faab) fep_vkb_accented_list_pane_ParamLimits

0xdd82,	// (0x0004faab) fep_vkb_accented_list_pane

0x1bcf,	// (0x000438f8) bg_popup_fep_shadow_pane_g9

0x3c36,	// (0x0004595f) bg_popup_fep_shadow_pane_cp3

0x3141,	// (0x00044e6a) list_accented_list_pane

0x8669,	// (0x0004a392) list_single_accented_list_pane_ParamLimits

0x8669,	// (0x0004a392) list_single_accented_list_pane

0x3c36,	// (0x0004595f) list_highlight_pane_cp10

0x867a,	// (0x0004a3a3) list_single_accented_list_pane_t1

0xd006,	// (0x0004ed2f) popup_slider_window_ParamLimits

0xd006,	// (0x0004ed2f) popup_slider_window

0x82c2,	// (0x00049feb) aid_indentation_list_msg

0xe3e7,	// (0x00050110) bg_popup_window_pane_cp19

0x87b4,	// (0x0004a4dd) popup_slider_window_g1

0x87d0,	// (0x0004a4f9) popup_slider_window_g2

0x87ec,	// (0x0004a515) popup_slider_window_g3

0x0005,

0xfcf5,	// (0x00051a1e) popup_slider_window_g

0x8848,	// (0x0004a571) popup_slider_window_t1

0x88bc,	// (0x0004a5e5) small_volume_slider_vertical_pane

0x7196,	// (0x00048ebf) small_volume_slider_vertical_pane_g1

0x7196,	// (0x00048ebf) small_volume_slider_vertical_pane_g2

0x88d8,	// (0x0004a601) small_volume_slider_vertical_pane_g3

0x0002,

0xfd07,	// (0x00051a30) small_volume_slider_vertical_pane_g

0xb907,	// (0x0004d630) area_side_right_pane_ParamLimits

0xb907,	// (0x0004d630) area_side_right_pane

0xc51f,	// (0x0004e248) aid_size_side_button_ParamLimits

0xc51f,	// (0x0004e248) aid_size_side_button

0xc538,	// (0x0004e261) grid_sctrl_middle_pane_ParamLimits

0xc538,	// (0x0004e261) grid_sctrl_middle_pane

0x1e5c,	// (0x00043b85) sctrl_sk_bottom_pane

0x1e6d,	// (0x00043b96) sctrl_sk_top_pane

0x1e7f,	// (0x00043ba8) aid_touch_sctrl_top

0x29cf,	// (0x000446f8) bg_sctrl_sk_pane_ParamLimits

0x29cf,	// (0x000446f8) bg_sctrl_sk_pane

0x1e8c,	// (0x00043bb5) sctrl_sk_top_pane_g1

0x1e99,	// (0x00043bc2) sctrl_sk_top_pane_t1

0x1e7f,	// (0x00043ba8) aid_touch_sctrl_bottom

0x29cf,	// (0x000446f8) bg_sctrl_sk_pane_cp_ParamLimits

0x29cf,	// (0x000446f8) bg_sctrl_sk_pane_cp

0x1eb4,	// (0x00043bdd) sctrl_sk_bottom_pane_g1

0x1e99,	// (0x00043bc2) sctrl_sk_bottom_pane_t1

0xc552,	// (0x0004e27b) cell_sctrl_middle_pane_ParamLimits

0xc552,	// (0x0004e27b) cell_sctrl_middle_pane

0xc565,	// (0x0004e28e) aid_touch_sctrl_middle_ParamLimits

0xc565,	// (0x0004e28e) aid_touch_sctrl_middle

0xc572,	// (0x0004e29b) bg_sctrl_middle_pane_ParamLimits

0xc572,	// (0x0004e29b) bg_sctrl_middle_pane

0x8984,	// (0x0004a6ad) cell_sctrl_middle_pane_g1_ParamLimits

0x8984,	// (0x0004a6ad) cell_sctrl_middle_pane_g1

0xc580,	// (0x0004e2a9) cell_sctrl_middle_pane_g2_ParamLimits

0xc580,	// (0x0004e2a9) cell_sctrl_middle_pane_g2

0x0001,

0xfd13,	// (0x00051a3c) cell_sctrl_middle_pane_g_ParamLimits

0xfd13,	// (0x00051a3c) cell_sctrl_middle_pane_g

0x4af0,	// (0x00046819) bg_sctrl_middle_pane_g1

0x4af8,	// (0x00046821) bg_sctrl_middle_pane_g2

0x4b00,	// (0x00046829) bg_sctrl_middle_pane_g3

0x4b08,	// (0x00046831) bg_sctrl_middle_pane_g4

0x4b10,	// (0x00046839) bg_sctrl_middle_pane_g5

0x4b18,	// (0x00046841) bg_sctrl_middle_pane_g6

0x4b20,	// (0x00046849) bg_sctrl_middle_pane_g7

0x4b28,	// (0x00046851) bg_sctrl_middle_pane_g8

0x0007,

0xfd18,	// (0x00051a41) bg_sctrl_middle_pane_g

0x4b30,	// (0x00046859) bg_sctrl_middle_pane_g8_copy1

0x4af0,	// (0x00046819) bg_sctrl_sk_pane_g1

0x4af8,	// (0x00046821) bg_sctrl_sk_pane_g2

0x4b00,	// (0x00046829) bg_sctrl_sk_pane_g3

0x0008,

0xf877,	// (0x000515a0) bg_sctrl_sk_pane_g

0x2efb,	// (0x00044c24) aid_size_touch_scroll_bar

0x4b08,	// (0x00046831) bg_sctrl_sk_pane_g4

0x4b10,	// (0x00046839) bg_sctrl_sk_pane_g5

0x4b18,	// (0x00046841) bg_sctrl_sk_pane_g6

0x4b20,	// (0x00046849) bg_sctrl_sk_pane_g7

0x4b28,	// (0x00046851) bg_sctrl_sk_pane_g8

0x4b30,	// (0x00046859) bg_sctrl_sk_pane_g9

0x405e,	// (0x00045d87) popup_fep_china_hwr2_fs_candidate_window

0xcac2,	// (0x0004e7eb) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xcac2,	// (0x0004e7eb) popup_fep_china_hwr2_fs_control_window

0x7420,	// (0x00049149) sctrl_sk_top_pane_g2

0x0001,

0xfd0e,	// (0x00051a37) sctrl_sk_top_pane_g

0xe49f,	// (0x000501c8) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe49f,	// (0x000501c8) aid_fep_china_hwr2_fs_cell

0xe4b5,	// (0x000501de) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe4b5,	// (0x000501de) bg_popup_fep_shadow_pane_cp4

0xe4cc,	// (0x000501f5) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe4cc,	// (0x000501f5) bg_popup_fep_shadow_pane_cp5

0xe4de,	// (0x00050207) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe4de,	// (0x00050207) popup_fep_china_hwr2_fs_control_bar_grid

0xe4f2,	// (0x0005021b) popup_fep_china_hwr2_fs_control_funtion_grid

0x8958,	// (0x0004a681) aid_fep_china_hwr2_fs_candi_cell

0xda88,	// (0x0004f7b1) bg_popup_fep_shadow_pane_cp6

0x8962,	// (0x0004a68b) popup_fep_china_hwr2_fs_candidate_grid

0xe4fa,	// (0x00050223) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe4fa,	// (0x00050223) cell_fep_china_hwr2_fs_funtion_grid

0x7196,	// (0x00048ebf) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8984,	// (0x0004a6ad) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8984,	// (0x0004a6ad) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8992,	// (0x0004a6bb) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8992,	// (0x0004a6bb) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd29,	// (0x00051a52) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd29,	// (0x00051a52) cell_fep_china_hwr2_fs_funtion_grid_g

0xe512,	// (0x0005023b) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe512,	// (0x0005023b) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe527,	// (0x00050250) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe527,	// (0x00050250) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2e,	// (0x00051a57) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2e,	// (0x00051a57) cell_fep_china_hwr2_fs_funtion_grid_t

0x89d9,	// (0x0004a702) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x89e1,	// (0x0004a70a) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x89e9,	// (0x0004a712) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd33,	// (0x00051a5c) popup_fep_china_hwr2_fs_control_bar_grid_g

0x89f1,	// (0x0004a71a) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x89f1,	// (0x0004a71a) cell_fep_china_hwr2_fs_candidate_grid

0x8a10,	// (0x0004a739) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8a18,	// (0x0004a741) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7196,	// (0x00048ebf) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7196,	// (0x00048ebf) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb53,	// (0x0005187c) cell_fep_china_hwr2_fs_candidate_grid_g

0x8a20,	// (0x0004a749) cell_fep_china_hwr2_fs_candidate_grid_t1

0x46cd,	// (0x000463f6) clock_nsta_pane_cp_24_ParamLimits

0x46cd,	// (0x000463f6) clock_nsta_pane_cp_24

0x474d,	// (0x00046476) indicator_nsta_pane_cp_24_ParamLimits

0x474d,	// (0x00046476) indicator_nsta_pane_cp_24

0x5819,	// (0x00047542) heading_pane_g1

0x0001,

0xf8dc,	// (0x00051605) heading_pane_g

0x62c9,	// (0x00047ff2) grid_sct_catagory_button_pane

0x62fb,	// (0x00048024) scroll_pane_cp5_ParamLimits

0x6ddf,	// (0x00048b08) button_value_adjust_pane_cp5_ParamLimits

0x6ddf,	// (0x00048b08) button_value_adjust_pane_cp5

0x6ec4,	// (0x00048bed) form2_midp_time_pane_ParamLimits

0x8a2e,	// (0x0004a757) cell_sct_catagory_button_pane_ParamLimits

0x8a2e,	// (0x0004a757) cell_sct_catagory_button_pane

0x715b,	// (0x00048e84) bg_button_pane_cp01_ParamLimits

0x715b,	// (0x00048e84) bg_button_pane_cp01

0x7196,	// (0x00048ebf) cell_sct_catagory_button_pane_g1

0xd087,	// (0x0004edb0) popup_tb_extension_window

0xe543,	// (0x0005026c) aid_size_cell_ext_ParamLimits

0xe543,	// (0x0005026c) aid_size_cell_ext

0x2d3d,	// (0x00044a66) bg_tb_trans_pane_cp1_ParamLimits

0x2d3d,	// (0x00044a66) bg_tb_trans_pane_cp1

0xe569,	// (0x00050292) grid_tb_ext_pane_ParamLimits

0xe569,	// (0x00050292) grid_tb_ext_pane

0xe5a9,	// (0x000502d2) cell_tb_ext_pane_ParamLimits

0xe5a9,	// (0x000502d2) cell_tb_ext_pane

0xe5d3,	// (0x000502fc) cell_tb_ext_pane_g1_ParamLimits

0xe5d3,	// (0x000502fc) cell_tb_ext_pane_g1

0x8ac4,	// (0x0004a7ed) cell_tb_ext_pane_t1

0x29cf,	// (0x000446f8) list_highlight_pane_cp11_ParamLimits

0x29cf,	// (0x000446f8) list_highlight_pane_cp11

0x0c94,	// (0x000429bd) popup_uni_indicator_window_ParamLimits

0x0c94,	// (0x000429bd) popup_uni_indicator_window

0x2fd8,	// (0x00044d01) bg_popup_sub_pane_cp14

0x8adf,	// (0x0004a808) list_uniindi_pane

0x8aeb,	// (0x0004a814) uniindi_top_pane

0x29cf,	// (0x000446f8) bg_uniindi_top_pane

0x8b0c,	// (0x0004a835) uniindi_top_pane_g1

0x8b22,	// (0x0004a84b) uniindi_top_pane_g2

0x0003,

0xfd3a,	// (0x00051a63) uniindi_top_pane_g

0x8b4c,	// (0x0004a875) uniindi_top_pane_t1

0x8b78,	// (0x0004a8a1) list_single_uniindi_pane_ParamLimits

0x8b78,	// (0x0004a8a1) list_single_uniindi_pane

0x7196,	// (0x00048ebf) bg_uniindi_top_pane_g1

0x8b8a,	// (0x0004a8b3) list_single_uniindi_pane_g1

0x8b9d,	// (0x0004a8c6) list_single_uniindi_pane_t1

0xda88,	// (0x0004f7b1) control_bg_pane

0x8bc2,	// (0x0004a8eb) bg_sctrl_sk_pane_cp1

0x8bcb,	// (0x0004a8f4) bg_sctrl_sk_pane_cp2

0x8bd4,	// (0x0004a8fd) control_bg_pane_g1

0x8bdd,	// (0x0004a906) control_bg_pane_g2

0x0001,

0xfd43,	// (0x00051a6c) control_bg_pane_g

0x6c02,	// (0x0004892b) cell_indicator_nsta_pane_g1_ParamLimits

0xdb89,	// (0x0004f8b2) cell_indicator_nsta_pane_g2_ParamLimits

0xfab7,	// (0x000517e0) cell_indicator_nsta_pane_g_ParamLimits

0x06de,	// (0x00042407) form2_midp_time_pane_t1_ParamLimits

0xca38,	// (0x0004e761) main_idle_act4_pane_ParamLimits

0xca38,	// (0x0004e761) main_idle_act4_pane

0xd087,	// (0x0004edb0) popup_tb_extension_window_ParamLimits

0xe591,	// (0x000502ba) tb_ext_find_pane_ParamLimits

0xe591,	// (0x000502ba) tb_ext_find_pane

0x8be6,	// (0x0004a90f) ai_gene_pane_1_cp1

0x3d7f,	// (0x00045aa8) ai_gene_pane_2_cp1

0x8bee,	// (0x0004a917) list_single_idle_plugin_calendar_pane

0x8bf7,	// (0x0004a920) list_single_idle_plugin_notification_pane

0x8c00,	// (0x0004a929) list_single_idle_plugin_player_pane

0xe5f0,	// (0x00050319) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe5f0,	// (0x00050319) list_single_idle_plugin_shortcut_pane

0xe618,	// (0x00050341) main_idle_act4_pane_t1

0xe630,	// (0x00050359) main_idle_act4_pane_t2

0x0001,

0xfd48,	// (0x00051a71) main_idle_act4_pane_t

0xe648,	// (0x00050371) middle_sk_idle_act4_pane_ParamLimits

0xe648,	// (0x00050371) middle_sk_idle_act4_pane

0xe664,	// (0x0005038d) popup_clock_digital_analogue_window_cp2

0xe68b,	// (0x000503b4) shortcut_wheel_idle_act4_pane_ParamLimits

0xe68b,	// (0x000503b4) shortcut_wheel_idle_act4_pane

0x7196,	// (0x00048ebf) shortcut_wheel_idle_act4_pane_g1

0x7196,	// (0x00048ebf) shortcut_wheel_idle_act4_pane_g2

0x7196,	// (0x00048ebf) shortcut_wheel_idle_act4_pane_g3

0x7196,	// (0x00048ebf) shortcut_wheel_idle_act4_pane_g4

0x7196,	// (0x00048ebf) shortcut_wheel_idle_act4_pane_g5

0x8c93,	// (0x0004a9bc) shortcut_wheel_idle_act4_pane_g6

0x8c9b,	// (0x0004a9c4) shortcut_wheel_idle_act4_pane_g7

0x8ca3,	// (0x0004a9cc) shortcut_wheel_idle_act4_pane_g8

0x8cab,	// (0x0004a9d4) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4d,	// (0x00051a76) shortcut_wheel_idle_act4_pane_g

0xdd5a,	// (0x0004fa83) middle_sk_idle_act4_pane_g1_ParamLimits

0xdd5a,	// (0x0004fa83) middle_sk_idle_act4_pane_g1

0xe708,	// (0x00050431) middle_sk_idle_act4_pane_g2_ParamLimits

0xe708,	// (0x00050431) middle_sk_idle_act4_pane_g2

0x0001,

0xfd70,	// (0x00051a99) middle_sk_idle_act4_pane_g_ParamLimits

0xfd70,	// (0x00051a99) middle_sk_idle_act4_pane_g

0xe720,	// (0x00050449) middle_sk_idle_act4_pane_t1_ParamLimits

0xe720,	// (0x00050449) middle_sk_idle_act4_pane_t1

0xe74f,	// (0x00050478) grid_ai_shortcut_pane_ParamLimits

0xe74f,	// (0x00050478) grid_ai_shortcut_pane

0xe76c,	// (0x00050495) list_highlight_pane_cp16_ParamLimits

0xe76c,	// (0x00050495) list_highlight_pane_cp16

0xe779,	// (0x000504a2) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe779,	// (0x000504a2) list_single_idle_plugin_shortcut_pane_g1

0xe785,	// (0x000504ae) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe785,	// (0x000504ae) list_single_idle_plugin_shortcut_pane_g2

0xe7a3,	// (0x000504cc) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe7a3,	// (0x000504cc) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd75,	// (0x00051a9e) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd75,	// (0x00051a9e) list_single_idle_plugin_shortcut_pane_g

0xe7b8,	// (0x000504e1) cell_ai_shortcut_pane_ParamLimits

0xe7b8,	// (0x000504e1) cell_ai_shortcut_pane

0xe7ce,	// (0x000504f7) cell_ai_shortcut_pane_g1_ParamLimits

0xe7ce,	// (0x000504f7) cell_ai_shortcut_pane_g1

0x8be6,	// (0x0004a90f) ai_gene_pane_1_cp2

0x8ddc,	// (0x0004ab05) ai_gene_pane_2_cp2

0x8de4,	// (0x0004ab0d) list_highlight_pane_cp15

0x8ded,	// (0x0004ab16) list_single_idle_plugin_calendar_pane_g1

0x8de4,	// (0x0004ab0d) list_highlight_pane_cp17

0x8df5,	// (0x0004ab1e) list_single_idle_plugin_calendar_pane_g1_copy1

0x8dfd,	// (0x0004ab26) list_single_idle_plugin_player_pane_g1

0x6530,	// (0x00048259) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7c,	// (0x00051aa5) list_single_idle_plugin_player_pane_g

0x8e05,	// (0x0004ab2e) list_single_idle_plugin_player_pane_t1

0x8e13,	// (0x0004ab3c) list_single_idle_plugin_player_pane_t2

0x8e21,	// (0x0004ab4a) list_single_idle_plugin_player_pane_t3

0x8e2f,	// (0x0004ab58) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd81,	// (0x00051aaa) list_single_idle_plugin_player_pane_t

0x8e3d,	// (0x0004ab66) wait_bar_pane_cp15

0x8e45,	// (0x0004ab6e) grid_ai_notification_pane

0x6530,	// (0x00048259) list_single_idle_plugin_notification_pane_g1

0xe7f0,	// (0x00050519) cell_ai_notification_pane_ParamLimits

0xe7f0,	// (0x00050519) cell_ai_notification_pane

0x8e5b,	// (0x0004ab84) cell_ai_notification_pane_g1

0x8e63,	// (0x0004ab8c) cell_ai_notification_pane_t1

0xe7fd,	// (0x00050526) tb_ext_find_button_pane

0xe805,	// (0x0005052e) tb_ext_find_pane_g1

0xe80d,	// (0x00050536) tb_ext_find_pane_t1

0x3648,	// (0x00045371) tb_ext_find_button_pane_g1

0x8e8f,	// (0x0004abb8) tb_ext_find_button_pane_g2

0x0001,

0xfd8a,	// (0x00051ab3) tb_ext_find_button_pane_g

0xe618,	// (0x00050341) main_idle_act4_pane_t1_ParamLimits

0xe630,	// (0x00050359) main_idle_act4_pane_t2_ParamLimits

0xfd48,	// (0x00051a71) main_idle_act4_pane_t_ParamLimits

0xe664,	// (0x0005038d) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe67b,	// (0x000503a4) sat_plugin_idle_act4_pane_ParamLimits

0xe67b,	// (0x000503a4) sat_plugin_idle_act4_pane

0xe81b,	// (0x00050544) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe81b,	// (0x00050544) sat_plugin_idle_act4_pane_t1

0xe833,	// (0x0005055c) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe833,	// (0x0005055c) sat_plugin_idle_act4_pane_t2

0xe84b,	// (0x00050574) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe84b,	// (0x00050574) sat_plugin_idle_act4_pane_t3

0xe863,	// (0x0005058c) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe863,	// (0x0005058c) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8f,	// (0x00051ab8) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8f,	// (0x00051ab8) sat_plugin_idle_act4_pane_t

0x0bc5,	// (0x000428ee) popup_battery_window_ParamLimits

0x0bc5,	// (0x000428ee) popup_battery_window

0x29cf,	// (0x000446f8) bg_popup_sub_pane_cp25_ParamLimits

0x29cf,	// (0x000446f8) bg_popup_sub_pane_cp25

0x8ee4,	// (0x0004ac0d) popup_battery_window_g1_ParamLimits

0x8ee4,	// (0x0004ac0d) popup_battery_window_g1

0x8ef0,	// (0x0004ac19) popup_battery_window_t1_ParamLimits

0x8ef0,	// (0x0004ac19) popup_battery_window_t1

0x8f02,	// (0x0004ac2b) popup_battery_window_t2_ParamLimits

0x8f02,	// (0x0004ac2b) popup_battery_window_t2

0x0001,

0xfd98,	// (0x00051ac1) popup_battery_window_t_ParamLimits

0xfd98,	// (0x00051ac1) popup_battery_window_t

0xc948,	// (0x0004e671) midp_canvas_pane_ParamLimits

0xc9a3,	// (0x0004e6cc) midp_keypad_pane_ParamLimits

0xc9a3,	// (0x0004e6cc) midp_keypad_pane

0x3fb4,	// (0x00045cdd) main_midp_pane_ParamLimits

0x6c8c,	// (0x000489b5) signal_pane_g2_cp_ParamLimits

0xe87b,	// (0x000505a4) aid_size_cell_midp_keypad_ParamLimits

0xe87b,	// (0x000505a4) aid_size_cell_midp_keypad

0xe899,	// (0x000505c2) midp_keyp_game_grid_pane_ParamLimits

0xe899,	// (0x000505c2) midp_keyp_game_grid_pane

0xe8c0,	// (0x000505e9) midp_keyp_rocker_pane_ParamLimits

0xe8c0,	// (0x000505e9) midp_keyp_rocker_pane

0xe905,	// (0x0005062e) midp_keyp_sk_left_pane_ParamLimits

0xe905,	// (0x0005062e) midp_keyp_sk_left_pane

0xe959,	// (0x00050682) midp_keyp_sk_right_pane_ParamLimits

0xe959,	// (0x00050682) midp_keyp_sk_right_pane

0xda88,	// (0x0004f7b1) bg_button_pane_cp03

0xe9ad,	// (0x000506d6) midp_keyp_sk_left_pane_g1

0xda88,	// (0x0004f7b1) bg_button_pane_cp04

0xe9ad,	// (0x000506d6) midp_keyp_sk_right_pane_g1

0x7196,	// (0x00048ebf) midp_keyp_rocker_pane_g1

0xe9b6,	// (0x000506df) keyp_game_cell_pane_ParamLimits

0xe9b6,	// (0x000506df) keyp_game_cell_pane

0xda88,	// (0x0004f7b1) bg_button_pane_cp02

0xe9dc,	// (0x00050705) keyp_game_cell_pane_g1

0xb949,	// (0x0004d672) popup_fep_vkb2_window_ParamLimits

0xb949,	// (0x0004d672) popup_fep_vkb2_window

0xc58c,	// (0x0004e2b5) aid_size_cell_vkb2_ParamLimits

0xc58c,	// (0x0004e2b5) aid_size_cell_vkb2

0xc5ba,	// (0x0004e2e3) popup_fep_vkb2_window_g1_ParamLimits

0xc5ba,	// (0x0004e2e3) popup_fep_vkb2_window_g1

0xc60a,	// (0x0004e333) vkb2_area_bottom_pane_ParamLimits

0xc60a,	// (0x0004e333) vkb2_area_bottom_pane

0xc666,	// (0x0004e38f) vkb2_area_keypad_pane_ParamLimits

0xc666,	// (0x0004e38f) vkb2_area_keypad_pane

0xc6b4,	// (0x0004e3dd) vkb2_area_top_pane_ParamLimits

0xc6b4,	// (0x0004e3dd) vkb2_area_top_pane

0xc73a,	// (0x0004e463) vkb2_top_entry_pane_ParamLimits

0xc73a,	// (0x0004e463) vkb2_top_entry_pane

0xc767,	// (0x0004e490) vkb2_top_grid_left_pane_ParamLimits

0xc767,	// (0x0004e490) vkb2_top_grid_left_pane

0xc787,	// (0x0004e4b0) vkb2_top_grid_right_pane_ParamLimits

0xc787,	// (0x0004e4b0) vkb2_top_grid_right_pane

0x211c,	// (0x00043e45) vkb2_cell_keypad_pane_ParamLimits

0x211c,	// (0x00043e45) vkb2_cell_keypad_pane

0xc7cd,	// (0x0004e4f6) vkb2_area_bottom_grid_pane_ParamLimits

0xc7cd,	// (0x0004e4f6) vkb2_area_bottom_grid_pane

0xc7f7,	// (0x0004e520) vkb2_area_bottom_pane_g1_ParamLimits

0xc7f7,	// (0x0004e520) vkb2_area_bottom_pane_g1

0xc81d,	// (0x0004e546) vkb2_area_bottom_pane_g2_ParamLimits

0xc81d,	// (0x0004e546) vkb2_area_bottom_pane_g2

0xc84e,	// (0x0004e577) vkb2_area_bottom_pane_g3_ParamLimits

0xc84e,	// (0x0004e577) vkb2_area_bottom_pane_g3

0x0002,

0xfd9d,	// (0x00051ac6) vkb2_area_bottom_pane_g_ParamLimits

0xfd9d,	// (0x00051ac6) vkb2_area_bottom_pane_g

0x22ab,	// (0x00043fd4) vkb2_top_cell_left_pane_ParamLimits

0x22ab,	// (0x00043fd4) vkb2_top_cell_left_pane

0xe9e5,	// (0x0005070e) vkb2_top_entry_pane_g1_ParamLimits

0xe9e5,	// (0x0005070e) vkb2_top_entry_pane_g1

0xe9f3,	// (0x0005071c) vkb2_top_entry_pane_t1_ParamLimits

0xe9f3,	// (0x0005071c) vkb2_top_entry_pane_t1

0x908f,	// (0x0004adb8) vkb2_top_entry_pane_t2_ParamLimits

0x908f,	// (0x0004adb8) vkb2_top_entry_pane_t2

0x90a7,	// (0x0004add0) vkb2_top_entry_pane_t3_ParamLimits

0x90a7,	// (0x0004add0) vkb2_top_entry_pane_t3

0x0002,

0xfda4,	// (0x00051acd) vkb2_top_entry_pane_t_ParamLimits

0xfda4,	// (0x00051acd) vkb2_top_entry_pane_t

0xc8b8,	// (0x0004e5e1) vkb2_top_grid_right_pane_g1_ParamLimits

0xc8b8,	// (0x0004e5e1) vkb2_top_grid_right_pane_g1

0x230e,	// (0x00044037) vkb2_top_grid_right_pane_g2_ParamLimits

0x230e,	// (0x00044037) vkb2_top_grid_right_pane_g2

0x2326,	// (0x0004404f) vkb2_top_grid_right_pane_g3_ParamLimits

0x2326,	// (0x0004404f) vkb2_top_grid_right_pane_g3

0xc8ce,	// (0x0004e5f7) vkb2_top_grid_right_pane_g4_ParamLimits

0xc8ce,	// (0x0004e5f7) vkb2_top_grid_right_pane_g4

0x0003,

0xfdab,	// (0x00051ad4) vkb2_top_grid_right_pane_g_ParamLimits

0xfdab,	// (0x00051ad4) vkb2_top_grid_right_pane_g

0x2354,	// (0x0004407d) vkb2_top_cell_left_pane_g1

0x236b,	// (0x00044094) vkb2_cell_keypad_pane_g1_ParamLimits

0x236b,	// (0x00044094) vkb2_cell_keypad_pane_g1

0x90bd,	// (0x0004ade6) vkb2_cell_keypad_pane_t1_ParamLimits

0x90bd,	// (0x0004ade6) vkb2_cell_keypad_pane_t1

0x238f,	// (0x000440b8) vkb2_cell_bottom_grid_pane_ParamLimits

0x238f,	// (0x000440b8) vkb2_cell_bottom_grid_pane

0x23c8,	// (0x000440f1) vkb2_cell_bottom_grid_pane_g1

0xe6ac,	// (0x000503d5) aid_call2_pane_cp02

0xe6b4,	// (0x000503dd) aid_call_pane_cp02

0xe6bc,	// (0x000503e5) clock_digital_number_pane_cp10

0xe6c4,	// (0x000503ed) clock_digital_number_pane_cp11

0xe6cc,	// (0x000503f5) clock_digital_number_pane_cp12

0xe6d4,	// (0x000503fd) clock_digital_number_pane_cp13

0xe6dc,	// (0x00050405) clock_digital_separator_pane_cp10

0x3648,	// (0x00045371) popup_clock_digital_analogue_window_cp2_g1

0x3648,	// (0x00045371) popup_clock_digital_analogue_window_cp2_g2

0xe6e4,	// (0x0005040d) popup_clock_digital_analogue_window_cp2_g3

0x3648,	// (0x00045371) popup_clock_digital_analogue_window_cp2_g4

0xe6e4,	// (0x0005040d) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd60,	// (0x00051a89) popup_clock_digital_analogue_window_cp2_g

0xe6ec,	// (0x00050415) popup_clock_digital_analogue_window_cp2_t1

0xe6fa,	// (0x00050423) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6b,	// (0x00051a94) popup_clock_digital_analogue_window_cp2_t

0x7196,	// (0x00048ebf) clock_digital_number_pane_cp10_g1

0x7196,	// (0x00048ebf) clock_digital_number_pane_cp10_g2

0x0001,

0xfb53,	// (0x0005187c) clock_digital_number_pane_cp10_g

0x7196,	// (0x00048ebf) clock_digital_separator_pane_cp10_g1

0x7196,	// (0x00048ebf) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb53,	// (0x0005187c) clock_digital_separator_pane_cp10_g

0x8b2e,	// (0x0004a857) uniindi_top_pane_g3

0x8b3f,	// (0x0004a868) uniindi_top_pane_g4

0x218c,	// (0x00043eb5) vkb2_row_keypad_pane_ParamLimits

0x218c,	// (0x00043eb5) vkb2_row_keypad_pane

0x23e4,	// (0x0004410d) vkb2_cell_t_keypad_pane_ParamLimits

0x23e4,	// (0x0004410d) vkb2_cell_t_keypad_pane

0x23f4,	// (0x0004411d) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x23f4,	// (0x0004411d) vkb2_cell_t_keypad_pane_cp08

0x2409,	// (0x00044132) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2409,	// (0x00044132) vkb2_cell_t_keypad_pane_cp09

0x241d,	// (0x00044146) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x241d,	// (0x00044146) vkb2_cell_t_keypad_pane_cp01

0x242e,	// (0x00044157) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x242e,	// (0x00044157) vkb2_cell_t_keypad_pane_cp02

0x243f,	// (0x00044168) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x243f,	// (0x00044168) vkb2_cell_t_keypad_pane_cp03

0x2450,	// (0x00044179) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2450,	// (0x00044179) vkb2_cell_t_keypad_pane_cp04

0x2461,	// (0x0004418a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2461,	// (0x0004418a) vkb2_cell_t_keypad_pane_cp05

0x2472,	// (0x0004419b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2472,	// (0x0004419b) vkb2_cell_t_keypad_pane_cp06

0x2485,	// (0x000441ae) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2485,	// (0x000441ae) vkb2_cell_t_keypad_pane_cp07

0x249a,	// (0x000441c3) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x249a,	// (0x000441c3) vkb2_cell_t_keypad_pane_cp10

0x7420,	// (0x00049149) vkb2_cell_t_keypad_pane_g1

0x90d4,	// (0x0004adfd) vkb2_cell_t_keypad_pane_t1

0xda88,	// (0x0004f7b1) popup_grid_graphic2_window

0xea2c,	// (0x00050755) aid_size_cell_graphic2_ParamLimits

0xea2c,	// (0x00050755) aid_size_cell_graphic2

0xea6a,	// (0x00050793) bg_popup_window_pane_cp21_ParamLimits

0xea6a,	// (0x00050793) bg_popup_window_pane_cp21

0xea78,	// (0x000507a1) graphic2_pages_pane_ParamLimits

0xea78,	// (0x000507a1) graphic2_pages_pane

0xead0,	// (0x000507f9) grid_graphic2_control_pane_ParamLimits

0xead0,	// (0x000507f9) grid_graphic2_control_pane

0xeb18,	// (0x00050841) grid_graphic2_pane_ParamLimits

0xeb18,	// (0x00050841) grid_graphic2_pane

0xebb0,	// (0x000508d9) cell_graphic2_pane

0xda88,	// (0x0004f7b1) main_comp_mode_pane

0x837e,	// (0x0004a0a7) list_ai3_gene_pane_ParamLimits

0xe3e7,	// (0x00050110) bg_popup_window_pane_cp19_ParamLimits

0x8752,	// (0x0004a47b) bg_touch_area_indi_pane_ParamLimits

0x8752,	// (0x0004a47b) bg_touch_area_indi_pane

0x8768,	// (0x0004a491) bg_touch_area_indi_pane_cp01_ParamLimits

0x8768,	// (0x0004a491) bg_touch_area_indi_pane_cp01

0x8780,	// (0x0004a4a9) bg_touch_area_indi_pane_cp02_ParamLimits

0x8780,	// (0x0004a4a9) bg_touch_area_indi_pane_cp02

0x879a,	// (0x0004a4c3) bg_touch_area_indi_pane_cp03_ParamLimits

0x879a,	// (0x0004a4c3) bg_touch_area_indi_pane_cp03

0x87b4,	// (0x0004a4dd) popup_slider_window_g1_ParamLimits

0x87d0,	// (0x0004a4f9) popup_slider_window_g2_ParamLimits

0x87ec,	// (0x0004a515) popup_slider_window_g3_ParamLimits

0xfcf5,	// (0x00051a1e) popup_slider_window_g_ParamLimits

0x8848,	// (0x0004a571) popup_slider_window_t1_ParamLimits

0x88bc,	// (0x0004a5e5) small_volume_slider_vertical_pane_ParamLimits

0xebb0,	// (0x000508d9) cell_graphic2_pane_ParamLimits

0xec13,	// (0x0005093c) bg_button_pane_cp10_ParamLimits

0xec13,	// (0x0005093c) bg_button_pane_cp10

0xec26,	// (0x0005094f) bg_button_pane_cp11_ParamLimits

0xec26,	// (0x0005094f) bg_button_pane_cp11

0xec39,	// (0x00050962) graphic2_pages_pane_g1_ParamLimits

0xec39,	// (0x00050962) graphic2_pages_pane_g1

0xec54,	// (0x0005097d) graphic2_pages_pane_g2_ParamLimits

0xec54,	// (0x0005097d) graphic2_pages_pane_g2

0x0001,

0xfdb9,	// (0x00051ae2) graphic2_pages_pane_g_ParamLimits

0xfdb9,	// (0x00051ae2) graphic2_pages_pane_g

0xec6c,	// (0x00050995) graphic2_pages_pane_t1_ParamLimits

0xec6c,	// (0x00050995) graphic2_pages_pane_t1

0xec84,	// (0x000509ad) cell_graphic2_control_pane_ParamLimits

0xec84,	// (0x000509ad) cell_graphic2_control_pane

0xeca0,	// (0x000509c9) cell_graphic2_pane_g1_ParamLimits

0xeca0,	// (0x000509c9) cell_graphic2_pane_g1

0xdd68,	// (0x0004fa91) cell_graphic2_pane_g2_ParamLimits

0xdd68,	// (0x0004fa91) cell_graphic2_pane_g2

0xeb88,	// (0x000508b1) cell_graphic2_pane_g3_ParamLimits

0xeb88,	// (0x000508b1) cell_graphic2_pane_g3

0xdd75,	// (0x0004fa9e) cell_graphic2_pane_g4_ParamLimits

0xdd75,	// (0x0004fa9e) cell_graphic2_pane_g4

0xecad,	// (0x000509d6) cell_graphic2_pane_g5_ParamLimits

0xecad,	// (0x000509d6) cell_graphic2_pane_g5

0x0004,

0xfdbe,	// (0x00051ae7) cell_graphic2_pane_g_ParamLimits

0xfdbe,	// (0x00051ae7) cell_graphic2_pane_g

0xeccd,	// (0x000509f6) cell_graphic2_pane_t1_ParamLimits

0xeccd,	// (0x000509f6) cell_graphic2_pane_t1

0x580d,	// (0x00047536) grid_highlight_pane_cp11_ParamLimits

0x580d,	// (0x00047536) grid_highlight_pane_cp11

0x29cf,	// (0x000446f8) bg_button_pane_cp05

0xed02,	// (0x00050a2b) cell_graphic2_control_pane_g1

0x7196,	// (0x00048ebf) bg_touch_area_indi_pane_g1

0x93a5,	// (0x0004b0ce) aid_cmod_rocker_key_size

0x93af,	// (0x0004b0d8) aid_cmode_itu_key_size

0x93b9,	// (0x0004b0e2) main_cmode_video_pane

0x93c3,	// (0x0004b0ec) main_comp_mode_itu_pane

0x93cf,	// (0x0004b0f8) main_comp_mode_rocker_pane

0x93db,	// (0x0004b104) cell_cmode_rocker_pane_ParamLimits

0x93db,	// (0x0004b104) cell_cmode_rocker_pane

0x93ef,	// (0x0004b118) cell_cmode_itu_pane_ParamLimits

0x93ef,	// (0x0004b118) cell_cmode_itu_pane

0x2fd8,	// (0x00044d01) bg_button_pane_cp06_ParamLimits

0x2fd8,	// (0x00044d01) bg_button_pane_cp06

0x7420,	// (0x00049149) cell_cmode_rocker_pane_g1_ParamLimits

0x7420,	// (0x00049149) cell_cmode_rocker_pane_g1

0x8984,	// (0x0004a6ad) cell_cmode_rocker_pane_g2_ParamLimits

0x8984,	// (0x0004a6ad) cell_cmode_rocker_pane_g2

0x0001,

0xfdce,	// (0x00051af7) cell_cmode_rocker_pane_g_ParamLimits

0xfdce,	// (0x00051af7) cell_cmode_rocker_pane_g

0xda88,	// (0x0004f7b1) bg_button_pane_cp07

0x9406,	// (0x0004b12f) cell_cmode_itu_pane_g1

0x940f,	// (0x0004b138) cell_cmode_itu_pane_t1

0x941d,	// (0x0004b146) cell_cmode_itu_pane_t2

0x0001,

0xfdd3,	// (0x00051afc) cell_cmode_itu_pane_t

0x8bb2,	// (0x0004a8db) aid_touch_ctrl_left

0x8bba,	// (0x0004a8e3) aid_touch_ctrl_right

0xda88,	// (0x0004f7b1) compa_mode_pane

0xed28,	// (0x00050a51) aid_cmod_rocker_key_size_cp

0xed32,	// (0x00050a5b) aid_cmode_itu_key_size_cp

0x943f,	// (0x0004b168) compa_mode_pane_g1

0x9447,	// (0x0004b170) compa_mode_pane_g2

0x944f,	// (0x0004b178) compa_mode_pane_g3

0x0002,

0xfdd8,	// (0x00051b01) compa_mode_pane_g

0xed3c,	// (0x00050a65) main_comp_mode_itu_pane_cp

0xed44,	// (0x00050a6d) main_comp_mode_rocker_pane_cp

0xed4c,	// (0x00050a75) cell_cmode_itu_pane_cp_ParamLimits

0xed4c,	// (0x00050a75) cell_cmode_itu_pane_cp

0xed61,	// (0x00050a8a) cell_cmode_rocker_pane_cp_ParamLimits

0xed61,	// (0x00050a8a) cell_cmode_rocker_pane_cp

0x2fd8,	// (0x00044d01) bg_button_pane_cp06_cp_ParamLimits

0x2fd8,	// (0x00044d01) bg_button_pane_cp06_cp

0x7420,	// (0x00049149) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7420,	// (0x00049149) cell_cmode_rocker_pane_g1_cp

0x7196,	// (0x00048ebf) cell_cmode_rocker_pane_g2_cp

0xda88,	// (0x0004f7b1) bg_button_pane_cp07_cp

0xed73,	// (0x00050a9c) cell_cmode_itu_pane_g1_cp

0xed7c,	// (0x00050aa5) cell_cmode_itu_pane_t1_cp

0xed7c,	// (0x00050aa5) cell_cmode_itu_pane_t2_cp

0xd99e,	// (0x0004f6c7) settings_code_pane_cp2

0x2745,	// (0x0004446e) bg_popup_window_pane_cp3_ParamLimits

0x2bbd,	// (0x000448e6) heading_pane_cp3_ParamLimits

0x2bc9,	// (0x000448f2) listscroll_popup_graphic_pane_ParamLimits

0x199d,	// (0x000436c6) fep_hwr_aid_pane_ParamLimits

0x1e7f,	// (0x00043ba8) aid_touch_sctrl_top_ParamLimits

0x1e8c,	// (0x00043bb5) sctrl_sk_top_pane_g1_ParamLimits

0x7420,	// (0x00049149) sctrl_sk_top_pane_g2_ParamLimits

0xfd0e,	// (0x00051a37) sctrl_sk_top_pane_g_ParamLimits

0x1e99,	// (0x00043bc2) sctrl_sk_top_pane_t1_ParamLimits

0x1e7f,	// (0x00043ba8) aid_touch_sctrl_bottom_ParamLimits

0x1e99,	// (0x00043bc2) sctrl_sk_bottom_pane_t1_ParamLimits

0x8af8,	// (0x0004a821) aid_area_touch_clock

0xc6fc,	// (0x0004e425) aid_vkb2_area_top_pane_cell_ParamLimits

0xc6fc,	// (0x0004e425) aid_vkb2_area_top_pane_cell

0xc7a7,	// (0x0004e4d0) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc7a7,	// (0x0004e4d0) aid_vkb2_area_bottom_pane_cell

0x9061,	// (0x0004ad8a) popup_char_count_window

0x94a5,	// (0x0004b1ce) popup_char_count_window_g1

0x94ae,	// (0x0004b1d7) popup_char_count_window_g2

0x94b7,	// (0x0004b1e0) popup_char_count_window_g3

0x0002,

0xfddf,	// (0x00051b08) popup_char_count_window_g

0x94c0,	// (0x0004b1e9) popup_char_count_window_t1

0x1f38,	// (0x00043c61) popup_fep_char_preview_window_ParamLimits

0x1f38,	// (0x00043c61) popup_fep_char_preview_window

0xc71c,	// (0x0004e445) vkb2_top_candi_pane_ParamLimits

0xc71c,	// (0x0004e445) vkb2_top_candi_pane

0xed8a,	// (0x00050ab3) cell_vkb2_top_candi_pane_ParamLimits

0xed8a,	// (0x00050ab3) cell_vkb2_top_candi_pane

0x5196,	// (0x00046ebf) bg_popup_fep_char_preview_window_ParamLimits

0x5196,	// (0x00046ebf) bg_popup_fep_char_preview_window

0x24af,	// (0x000441d8) popup_fep_char_preview_window_t1_ParamLimits

0x24af,	// (0x000441d8) popup_fep_char_preview_window_t1

0x951f,	// (0x0004b248) bg_popup_fep_char_preview_window_g1

0x9527,	// (0x0004b250) bg_popup_fep_char_preview_window_g2

0x952f,	// (0x0004b258) bg_popup_fep_char_preview_window_g3

0x9537,	// (0x0004b260) bg_popup_fep_char_preview_window_g4

0x953f,	// (0x0004b268) bg_popup_fep_char_preview_window_g5

0x24e9,	// (0x00044212) bg_popup_fep_char_preview_window_g6

0x9547,	// (0x0004b270) bg_popup_fep_char_preview_window_g7

0x954f,	// (0x0004b278) bg_popup_fep_char_preview_window_g8

0x9557,	// (0x0004b280) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde6,	// (0x00051b0f) bg_popup_fep_char_preview_window_g

0x7420,	// (0x00049149) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7420,	// (0x00049149) cell_vkb2_top_candi_pane_g1

0x78b2,	// (0x000495db) cell_vkb2_top_candi_pane_g2_ParamLimits

0x78b2,	// (0x000495db) cell_vkb2_top_candi_pane_g2

0x78d3,	// (0x000495fc) cell_vkb2_top_candi_pane_g3_ParamLimits

0x78d3,	// (0x000495fc) cell_vkb2_top_candi_pane_g3

0x24f1,	// (0x0004421a) cell_vkb2_top_candi_pane_g4_ParamLimits

0x24f1,	// (0x0004421a) cell_vkb2_top_candi_pane_g4

0x890d,	// (0x0004a636) cell_vkb2_top_candi_pane_g5_ParamLimits

0x890d,	// (0x0004a636) cell_vkb2_top_candi_pane_g5

0x8984,	// (0x0004a6ad) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8984,	// (0x0004a6ad) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf9,	// (0x00051b22) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf9,	// (0x00051b22) cell_vkb2_top_candi_pane_g

0x2512,	// (0x0004423b) cell_vkb2_top_candi_pane_t1

0x17af,	// (0x000434d8) aid_size_touch_slider_mark_ParamLimits

0x17af,	// (0x000434d8) aid_size_touch_slider_mark

0xeab4,	// (0x000507dd) grid_graphic2_catg_pane_ParamLimits

0xeab4,	// (0x000507dd) grid_graphic2_catg_pane

0xeb72,	// (0x0005089b) popup_grid_graphic2_window_t1_ParamLimits

0xeb72,	// (0x0005089b) popup_grid_graphic2_window_t1

0xeb95,	// (0x000508be) popup_grid_graphic2_window_t2_ParamLimits

0xeb95,	// (0x000508be) popup_grid_graphic2_window_t2

0x0001,

0xfdb4,	// (0x00051add) popup_grid_graphic2_window_t_ParamLimits

0xfdb4,	// (0x00051add) popup_grid_graphic2_window_t

0x29cf,	// (0x000446f8) bg_button_pane_cp05_ParamLimits

0xed02,	// (0x00050a2b) cell_graphic2_control_pane_g1_ParamLimits

0xedde,	// (0x00050b07) cell_graphic2_catg_pane_ParamLimits

0xedde,	// (0x00050b07) cell_graphic2_catg_pane

0xda88,	// (0x0004f7b1) bg_button_pane_cp12

0xedf0,	// (0x00050b19) cell_graphic2_catg_pane_g1

0x8ac4,	// (0x0004a7ed) cell_tb_ext_pane_t1_ParamLimits

0x22cb,	// (0x00043ff4) vkb2_top_cell_right_narrow_pane_ParamLimits

0x22cb,	// (0x00043ff4) vkb2_top_cell_right_narrow_pane

0x22e3,	// (0x0004400c) vkb2_top_cell_right_wide_pane_ParamLimits

0x22e3,	// (0x0004400c) vkb2_top_cell_right_wide_pane

0xca38,	// (0x0004e761) bg_vkb2_func_pane_ParamLimits

0xca38,	// (0x0004e761) bg_vkb2_func_pane

0x2354,	// (0x0004407d) vkb2_top_cell_left_pane_g1_ParamLimits

0xca38,	// (0x0004e761) bg_vkb2_fuc_pane_cp03_ParamLimits

0xca38,	// (0x0004e761) bg_vkb2_fuc_pane_cp03

0x23c8,	// (0x000440f1) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4af8,	// (0x00046821) bg_vkb2_func_pane_g1

0x4b00,	// (0x00046829) bg_vkb2_func_pane_g2

0x4b10,	// (0x00046839) bg_vkb2_func_pane_g3

0x4b08,	// (0x00046831) bg_vkb2_func_pane_g4

0x4b18,	// (0x00046841) bg_vkb2_func_pane_g5

0x4b20,	// (0x00046849) bg_vkb2_func_pane_g6

0x4b28,	// (0x00046851) bg_vkb2_func_pane_g7

0x4b30,	// (0x00046859) bg_vkb2_func_pane_g8

0x4af0,	// (0x00046819) bg_vkb2_func_pane_g9

0x0008,

0xfe06,	// (0x00051b2f) bg_vkb2_func_pane_g

0xca38,	// (0x0004e761) bg_vkb2_fuc_pane_cp01_ParamLimits

0xca38,	// (0x0004e761) bg_vkb2_fuc_pane_cp01

0x2354,	// (0x0004407d) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2354,	// (0x0004407d) vkb2_top_cell_right_wide_pane_g1

0xca38,	// (0x0004e761) bg_vkb2_fuc_pane_cp02_ParamLimits

0xca38,	// (0x0004e761) bg_vkb2_fuc_pane_cp02

0x23c8,	// (0x000440f1) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x23c8,	// (0x000440f1) vkb2_top_cell_right_narrow_pane_g1

0xe321,	// (0x0005004a) aid_touch_area_decrease_ParamLimits

0xe321,	// (0x0005004a) aid_touch_area_decrease

0xe35b,	// (0x00050084) aid_touch_area_increase_ParamLimits

0xe35b,	// (0x00050084) aid_touch_area_increase

0xe383,	// (0x000500ac) aid_touch_area_mute_ParamLimits

0xe383,	// (0x000500ac) aid_touch_area_mute

0xe3b3,	// (0x000500dc) aid_touch_area_slider_ParamLimits

0xe3b3,	// (0x000500dc) aid_touch_area_slider

0xe3f3,	// (0x0005011c) popup_slider_window_g4_ParamLimits

0xe3f3,	// (0x0005011c) popup_slider_window_g4

0xe41b,	// (0x00050144) popup_slider_window_g5_ParamLimits

0xe41b,	// (0x00050144) popup_slider_window_g5

0xe44f,	// (0x00050178) popup_slider_window_g6_ParamLimits

0xe44f,	// (0x00050178) popup_slider_window_g6

0x8876,	// (0x0004a59f) popup_slider_window_t2_ParamLimits

0x8876,	// (0x0004a59f) popup_slider_window_t2

0x0001,

0xfd02,	// (0x00051a2b) popup_slider_window_t_ParamLimits

0xfd02,	// (0x00051a2b) popup_slider_window_t

0xe46b,	// (0x00050194) slider_pane_ParamLimits

0xe46b,	// (0x00050194) slider_pane

0x957a,	// (0x0004b2a3) slider_pane_g1_ParamLimits

0x957a,	// (0x0004b2a3) slider_pane_g1

0x958e,	// (0x0004b2b7) slider_pane_g2_ParamLimits

0x958e,	// (0x0004b2b7) slider_pane_g2

0x95a4,	// (0x0004b2cd) slider_pane_g3_ParamLimits

0x95a4,	// (0x0004b2cd) slider_pane_g3

0x0003,

0xfe19,	// (0x00051b42) slider_pane_g_ParamLimits

0xfe19,	// (0x00051b42) slider_pane_g

0xd0d3,	// (0x0004edfc) popup_tb_float_extension_window_ParamLimits

0xd0d3,	// (0x0004edfc) popup_tb_float_extension_window

0x95d0,	// (0x0004b2f9) aid_size_cell_tb_float_ext

0xda88,	// (0x0004f7b1) bg_popup_sub_window_cp28

0x95dc,	// (0x0004b305) grid_tb_float_ext_pane

0x95e8,	// (0x0004b311) cell_tb_float_ext_pane_ParamLimits

0x95e8,	// (0x0004b311) cell_tb_float_ext_pane

0x9604,	// (0x0004b32d) cell_tb_float_ext_pane_g1

0x960d,	// (0x0004b336) grid_highlight_pane_cp12

0xc485,	// (0x0004e1ae) cell_last_hwr_side_pane_ParamLimits

0xc485,	// (0x0004e1ae) cell_last_hwr_side_pane

0x7196,	// (0x00048ebf) cell_last_hwr_side_pane_g1

0x9616,	// (0x0004b33f) cell_last_hwr_side_pane_g2

0x0001,

0xfe22,	// (0x00051b4b) cell_last_hwr_side_pane_g

0xc883,	// (0x0004e5ac) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc883,	// (0x0004e5ac) vkb2_area_bottom_space_btn_pane

0x7420,	// (0x00049149) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x90d4,	// (0x0004adfd) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2512,	// (0x0004423b) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2530,	// (0x00044259) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2530,	// (0x00044259) vkb2_area_bottom_space_btn_pane_g1

0x256a,	// (0x00044293) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x256a,	// (0x00044293) vkb2_area_bottom_space_btn_pane_g2

0x25a0,	// (0x000442c9) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x25a0,	// (0x000442c9) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe27,	// (0x00051b50) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe27,	// (0x00051b50) vkb2_area_bottom_space_btn_pane_g

0x1a46,	// (0x0004376f) cel_fep_hwr_func_pane_ParamLimits

0x1a46,	// (0x0004376f) cel_fep_hwr_func_pane

0xc45a,	// (0x0004e183) cell_hwr_side_button_pane_ParamLimits

0xc45a,	// (0x0004e183) cell_hwr_side_button_pane

0x8af8,	// (0x0004a821) aid_area_touch_clock_ParamLimits

0x29cf,	// (0x000446f8) bg_uniindi_top_pane_ParamLimits

0x8b0c,	// (0x0004a835) uniindi_top_pane_g1_ParamLimits

0x8b22,	// (0x0004a84b) uniindi_top_pane_g2_ParamLimits

0x8b2e,	// (0x0004a857) uniindi_top_pane_g3_ParamLimits

0x8b3f,	// (0x0004a868) uniindi_top_pane_g4_ParamLimits

0xfd3a,	// (0x00051a63) uniindi_top_pane_g_ParamLimits

0x8b4c,	// (0x0004a875) uniindi_top_pane_t1_ParamLimits

0x29cf,	// (0x000446f8) bg_vkb2_func_pane_cp01_ParamLimits

0x29cf,	// (0x000446f8) bg_vkb2_func_pane_cp01

0x961f,	// (0x0004b348) cel_fep_hwr_func_pane_g1_ParamLimits

0x961f,	// (0x0004b348) cel_fep_hwr_func_pane_g1

0x29cf,	// (0x000446f8) bg_vkb2_func_pane_cp02_ParamLimits

0x29cf,	// (0x000446f8) bg_vkb2_func_pane_cp02

0x961f,	// (0x0004b348) cell_hwr_side_button_pane_g1_ParamLimits

0x961f,	// (0x0004b348) cell_hwr_side_button_pane_g1

0x4971,	// (0x0004669a) status_pane_g4_ParamLimits

0x4971,	// (0x0004669a) status_pane_g4

0x498b,	// (0x000466b4) status_pane_t1

0x6f32,	// (0x00048c5b) form2_midp_gauge_slider_cont_pane

0x6f3a,	// (0x00048c63) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdc8b,	// (0x0004f9b4) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdc9d,	// (0x0004f9c6) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb06,	// (0x0005182f) form2_midp_gauge_slider_pane_t_ParamLimits

0x6f70,	// (0x00048c99) form2_midp_slider_pane_ParamLimits

0x1f00,	// (0x00043c29) aid_size_cell_func_vkb2_ParamLimits

0x1f00,	// (0x00043c29) aid_size_cell_func_vkb2

0x95bc,	// (0x0004b2e5) slider_pane_g4_ParamLimits

0x95bc,	// (0x0004b2e5) slider_pane_g4

0xc8e4,	// (0x0004e60d) form2_midp_gauge_slider_pane_t2_cp01

0xc8f2,	// (0x0004e61b) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc8f2,	// (0x0004e61b) form2_midp_gauge_slider_pane_t3_cp01

0x2615,	// (0x0004433e) form2_midp_slider_pane_cp01

0xda88,	// (0x0004f7b1) navi_smil_pane

0x9658,	// (0x0004b381) navi_smil_pane_g1

0x9660,	// (0x0004b389) navi_smil_pane_t1

0x962d,	// (0x0004b356) form2_midp_slider_pane_g1

0x9636,	// (0x0004b35f) form2_midp_slider_pane_g2

0x963e,	// (0x0004b367) form2_midp_slider_pane_g3

0x962d,	// (0x0004b356) form2_midp_slider_pane_g4

0xedf9,	// (0x00050b22) form2_midp_slider_pane_g5

0x0004,

0xfe30,	// (0x00051b59) form2_midp_slider_pane_g

0x25da,	// (0x00044303) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x25da,	// (0x00044303) vkb2_area_bottom_space_btn_pane_g4

0xd2b3,	// (0x0004efdc) lc0_navi_pane_ParamLimits

0xd2b3,	// (0x0004efdc) lc0_navi_pane

0xd323,	// (0x0004f04c) lc0_stat_indi_pane_ParamLimits

0xd323,	// (0x0004f04c) lc0_stat_indi_pane

0xd338,	// (0x0004f061) ls0_title_pane_ParamLimits

0xd338,	// (0x0004f061) ls0_title_pane

0x2fd8,	// (0x00044d01) bg_popup_sub_pane_cp14_ParamLimits

0x8adf,	// (0x0004a808) list_uniindi_pane_ParamLimits

0x8aeb,	// (0x0004a814) uniindi_top_pane_ParamLimits

0x8b8a,	// (0x0004a8b3) list_single_uniindi_pane_g1_ParamLimits

0x8b9d,	// (0x0004a8c6) list_single_uniindi_pane_t1_ParamLimits

0xc90f,	// (0x0004e638) lc0_stat_clock_pane_ParamLimits

0xc90f,	// (0x0004e638) lc0_stat_clock_pane

0xee02,	// (0x00050b2b) lc0_stat_indi_pane_g1_ParamLimits

0xee02,	// (0x00050b2b) lc0_stat_indi_pane_g1

0xee0f,	// (0x00050b38) lc0_stat_indi_pane_g2_ParamLimits

0xee0f,	// (0x00050b38) lc0_stat_indi_pane_g2

0x0001,

0xfe3b,	// (0x00051b64) lc0_stat_indi_pane_g_ParamLimits

0xfe3b,	// (0x00051b64) lc0_stat_indi_pane_g

0xc91c,	// (0x0004e645) lc0_uni_indicator_pane_ParamLimits

0xc91c,	// (0x0004e645) lc0_uni_indicator_pane

0xee1c,	// (0x00050b45) ls0_title_pane_g1_ParamLimits

0xee1c,	// (0x00050b45) ls0_title_pane_g1

0xee30,	// (0x00050b59) ls0_title_pane_t1_ParamLimits

0xee30,	// (0x00050b59) ls0_title_pane_t1

0xc929,	// (0x0004e652) lc0_uni_indicator_pane_g1_ParamLimits

0xc929,	// (0x0004e652) lc0_uni_indicator_pane_g1

0x96d2,	// (0x0004b3fb) lc0_stat_clock_pane_t1

0xda88,	// (0x0004f7b1) main_ai5_pane

0x96e0,	// (0x0004b409) ai5_sk_pane_ParamLimits

0x96e0,	// (0x0004b409) ai5_sk_pane

0xee5e,	// (0x00050b87) cell_ai5_widget_pane_ParamLimits

0xee5e,	// (0x00050b87) cell_ai5_widget_pane

0x9763,	// (0x0004b48c) aid_size_cell_widget_grid

0x9777,	// (0x0004b4a0) bg_ai5_widget_pane_ParamLimits

0x9777,	// (0x0004b4a0) bg_ai5_widget_pane

0xeeeb,	// (0x00050c14) cell_ai5_widget_pane_g2

0xeefb,	// (0x00050c24) cell_ai5_widget_pane_g3

0xef1a,	// (0x00050c43) cell_ai5_widget_pane_g4

0xef26,	// (0x00050c4f) cell_ai5_widget_pane_g5

0xef32,	// (0x00050c5b) cell_ai5_widget_pane_g6

0xef3e,	// (0x00050c67) cell_ai5_widget_pane_g7

0xef86,	// (0x00050caf) cell_ai5_widget_pane_t1_ParamLimits

0xef86,	// (0x00050caf) cell_ai5_widget_pane_t1

0xefa3,	// (0x00050ccc) cell_ai5_widget_pane_t2_ParamLimits

0xefa3,	// (0x00050ccc) cell_ai5_widget_pane_t2

0xefbb,	// (0x00050ce4) cell_ai5_widget_pane_t3_ParamLimits

0xefbb,	// (0x00050ce4) cell_ai5_widget_pane_t3

0xefd3,	// (0x00050cfc) cell_ai5_widget_pane_t4_ParamLimits

0xefd3,	// (0x00050cfc) cell_ai5_widget_pane_t4

0xefed,	// (0x00050d16) cell_ai5_widget_pane_t5_ParamLimits

0xefed,	// (0x00050d16) cell_ai5_widget_pane_t5

0x98c2,	// (0x0004b5eb) cell_ai5_widget_pane_t6_ParamLimits

0x98c2,	// (0x0004b5eb) cell_ai5_widget_pane_t6

0x98d4,	// (0x0004b5fd) cell_ai5_widget_pane_t7_ParamLimits

0x98d4,	// (0x0004b5fd) cell_ai5_widget_pane_t7

0xf00c,	// (0x00050d35) cell_ai5_widget_pane_t8_ParamLimits

0xf00c,	// (0x00050d35) cell_ai5_widget_pane_t8

0x0009,

0xfe55,	// (0x00051b7e) cell_ai5_widget_pane_t_ParamLimits

0xfe55,	// (0x00051b7e) cell_ai5_widget_pane_t

0xf058,	// (0x00050d81) grid_ai5_widget_pane

0x2fd8,	// (0x00044d01) highlight_cell_ai5_widget_pane_ParamLimits

0x2fd8,	// (0x00044d01) highlight_cell_ai5_widget_pane

0xf06f,	// (0x00050d98) ai5_sk_left_pane

0xf079,	// (0x00050da2) ai5_sk_middle_pane

0xf083,	// (0x00050dac) ai5_sk_right_pane

0x996e,	// (0x0004b697) bg_ai5_widget_pane_g1_ParamLimits

0x996e,	// (0x0004b697) bg_ai5_widget_pane_g1

0x997a,	// (0x0004b6a3) bg_ai5_widget_pane_g2_ParamLimits

0x997a,	// (0x0004b6a3) bg_ai5_widget_pane_g2

0x9986,	// (0x0004b6af) bg_ai5_widget_pane_g3_ParamLimits

0x9986,	// (0x0004b6af) bg_ai5_widget_pane_g3

0x9992,	// (0x0004b6bb) bg_ai5_widget_pane_g4_ParamLimits

0x9992,	// (0x0004b6bb) bg_ai5_widget_pane_g4

0x999e,	// (0x0004b6c7) bg_ai5_widget_pane_g5_ParamLimits

0x999e,	// (0x0004b6c7) bg_ai5_widget_pane_g5

0x99aa,	// (0x0004b6d3) bg_ai5_widget_pane_g6_ParamLimits

0x99aa,	// (0x0004b6d3) bg_ai5_widget_pane_g6

0x99b6,	// (0x0004b6df) bg_ai5_widget_pane_g7_ParamLimits

0x99b6,	// (0x0004b6df) bg_ai5_widget_pane_g7

0x99c2,	// (0x0004b6eb) bg_ai5_widget_pane_g8_ParamLimits

0x99c2,	// (0x0004b6eb) bg_ai5_widget_pane_g8

0x99ce,	// (0x0004b6f7) bg_ai5_widget_pane_g9_ParamLimits

0x99ce,	// (0x0004b6f7) bg_ai5_widget_pane_g9

0x0008,

0xfe6a,	// (0x00051b93) bg_ai5_widget_pane_g_ParamLimits

0xfe6a,	// (0x00051b93) bg_ai5_widget_pane_g

0x99f5,	// (0x0004b71e) cell_shortcut_ai5_widget_pane_ParamLimits

0x99f5,	// (0x0004b71e) cell_shortcut_ai5_widget_pane

0x2811,	// (0x0004453a) bg_cell_shortcut_ai5_widget_pane

0x9a07,	// (0x0004b730) cell_grid_ai5_widget_pane_g1

0x9a10,	// (0x0004b739) highlight_cell_shortcut_ai5_widget_pane

0x4b00,	// (0x00046829) ai5_sk_left_pane_g1

0x9a18,	// (0x0004b741) ai5_sk_left_pane_g2

0x9a20,	// (0x0004b749) ai5_sk_left_pane_g3

0x9a28,	// (0x0004b751) ai5_sk_left_pane_g4

0x0003,

0xfe7d,	// (0x00051ba6) ai5_sk_left_pane_g

0x9a30,	// (0x0004b759) ai5_sk_left_pane_t1

0x4af8,	// (0x00046821) ai5_sk_right_pane_g1

0x9a3e,	// (0x0004b767) ai5_sk_right_pane_g2

0x9a46,	// (0x0004b76f) ai5_sk_right_pane_g3

0x9a4e,	// (0x0004b777) ai5_sk_right_pane_g4

0x0003,

0xfe86,	// (0x00051baf) ai5_sk_right_pane_g

0x9a56,	// (0x0004b77f) ai5_sk_right_pane_t1

0x4af8,	// (0x00046821) ai5_sk_middle_pane_g1

0x4b00,	// (0x00046829) ai5_sk_middle_pane_g2

0x4b18,	// (0x00046841) ai5_sk_middle_pane_g3

0x9a46,	// (0x0004b76f) ai5_sk_middle_pane_g4

0x9a20,	// (0x0004b749) ai5_sk_middle_pane_g5

0x9a64,	// (0x0004b78d) ai5_sk_middle_pane_g6

0xf08d,	// (0x00050db6) ai5_sk_middle_pane_g7

0x0006,

0xfe8f,	// (0x00051bb8) ai5_sk_middle_pane_g

0xd19d,	// (0x0004eec6) aid_touch_area_size_lc0_ParamLimits

0xd19d,	// (0x0004eec6) aid_touch_area_size_lc0

0x1be5,	// (0x0004390e) cell_hwr_candidate_pane_t1_ParamLimits

0x4629,	// (0x00046352) aid_touch_navi_pane

0xd442,	// (0x0004f16b) status_dt_navi_pane_ParamLimits

0xd442,	// (0x0004f16b) status_dt_navi_pane

0xd45a,	// (0x0004f183) status_dt_sta_pane_ParamLimits

0xd45a,	// (0x0004f183) status_dt_sta_pane

0xf095,	// (0x00050dbe) dt_sta_controll_pane

0xf0a2,	// (0x00050dcb) dt_sta_indi_pane

0xf0af,	// (0x00050dd8) dt_sta_title_pane

0x29cf,	// (0x000446f8) bg_dt_sta_indi_pane_ParamLimits

0x29cf,	// (0x000446f8) bg_dt_sta_indi_pane

0xf0c1,	// (0x00050dea) dt_sta_battery_pane

0xf0c9,	// (0x00050df2) dt_sta_indi_pane_g1

0xf0d2,	// (0x00050dfb) dt_sta_indi_pane_g2

0xf0db,	// (0x00050e04) dt_sta_indi_pane_g3

0x0002,

0xfe9e,	// (0x00051bc7) dt_sta_indi_pane_g

0xf0e4,	// (0x00050e0d) dt_sta_signal_pane

0x2fd8,	// (0x00044d01) bg_dt_sta_title_pane_ParamLimits

0x2fd8,	// (0x00044d01) bg_dt_sta_title_pane

0xf0ed,	// (0x00050e16) dt_sta_title_pane_g1

0xf0f5,	// (0x00050e1e) dt_sta_title_pane_t1_ParamLimits

0xf0f5,	// (0x00050e1e) dt_sta_title_pane_t1

0xda88,	// (0x0004f7b1) bg_dt_sta_control_pane

0xf10a,	// (0x00050e33) dt_sta_controll_pane_g1

0xf113,	// (0x00050e3c) bg_dt_sta_title_pane_g1

0xf11c,	// (0x00050e45) bg_dt_sta_title_pane_g2

0xf125,	// (0x00050e4e) bg_dt_sta_title_pane_g3

0x0002,

0xfea5,	// (0x00051bce) bg_dt_sta_title_pane_g

0x7196,	// (0x00048ebf) bg_dt_sta_indi_pane_g1

0x9b12,	// (0x0004b83b) dt_sta_signal_pane_g1

0x9b1a,	// (0x0004b843) dt_sta_signal_pane_g2

0x0001,

0xfeac,	// (0x00051bd5) dt_sta_signal_pane_g

0x9b22,	// (0x0004b84b) dt_sta_battery_pane_g1

0x9b2b,	// (0x0004b854) dt_sta_battery_pane_t1

0x7196,	// (0x00048ebf) bg_dt_sta_control_pane_g1

0x3734,	// (0x0004545d) fep_china_uni_eep_pane

0x373c,	// (0x00045465) fep_china_uni_entry_pane_ParamLimits

0x374c,	// (0x00045475) popup_fep_china_uni_window_g1_ParamLimits

0x375c,	// (0x00045485) popup_fep_china_uni_window_g2_ParamLimits

0x375c,	// (0x00045485) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x00051463) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x00051463) popup_fep_china_uni_window_g

0x9b3a,	// (0x0004b863) fep_china_uni_eep_pane_g1

0x9b42,	// (0x0004b86b) fep_china_uni_eep_pane_t1

0x964f,	// (0x0004b378) aid_touch_area_size_smil_player

0x4781,	// (0x000464aa) lc0_clock_pane

0x497f,	// (0x000466a8) status_pane_g5_ParamLimits

0x497f,	// (0x000466a8) status_pane_g5

0xcbfd,	// (0x0004e926) popup_keymap_window

0x493d,	// (0x00046666) status_icon_pane

0xeefb,	// (0x00050c24) cell_ai5_widget_pane_g3_ParamLimits

0xef1a,	// (0x00050c43) cell_ai5_widget_pane_g4_ParamLimits

0xef26,	// (0x00050c4f) cell_ai5_widget_pane_g5_ParamLimits

0xef4a,	// (0x00050c73) cell_ai5_widget_pane_g8_ParamLimits

0xef4a,	// (0x00050c73) cell_ai5_widget_pane_g8

0xef5e,	// (0x00050c87) cell_ai5_widget_pane_g9_ParamLimits

0xef5e,	// (0x00050c87) cell_ai5_widget_pane_g9

0xef72,	// (0x00050c9b) cell_ai5_widget_pane_g10_ParamLimits

0xef72,	// (0x00050c9b) cell_ai5_widget_pane_g10

0x9b51,	// (0x0004b87a) status_icon_pane_g1

0xda88,	// (0x0004f7b1) bg_popup_sub_pane_cp13

0x9b59,	// (0x0004b882) popup_keymap_window_t1

0xc9fb,	// (0x0004e724) control_pane_g6_ParamLimits

0xc9fb,	// (0x0004e724) control_pane_g6

0xca08,	// (0x0004e731) control_pane_g7_ParamLimits

0xca08,	// (0x0004e731) control_pane_g7

0xca15,	// (0x0004e73e) control_pane_g8_ParamLimits

0xca15,	// (0x0004e73e) control_pane_g8

0xf095,	// (0x00050dbe) dt_sta_controll_pane_ParamLimits

0xf0a2,	// (0x00050dcb) dt_sta_indi_pane_ParamLimits

0xf0af,	// (0x00050dd8) dt_sta_title_pane_ParamLimits

0x2f04,	// (0x00044c2d) aid_size_touch_scroll_bar_cale

0x0bdd,	// (0x00042906) popup_discreet_window_ParamLimits

0x0bdd,	// (0x00042906) popup_discreet_window

0xb993,	// (0x0004d6bc) popup_sk_window

0x5196,	// (0x00046ebf) bg_popup_sub_pane_cp28_ParamLimits

0x5196,	// (0x00046ebf) bg_popup_sub_pane_cp28

0x9b67,	// (0x0004b890) popup_discreet_window_g1_ParamLimits

0x9b67,	// (0x0004b890) popup_discreet_window_g1

0x9b87,	// (0x0004b8b0) popup_discreet_window_t1_ParamLimits

0x9b87,	// (0x0004b8b0) popup_discreet_window_t1

0x9ba5,	// (0x0004b8ce) popup_discreet_window_t2_ParamLimits

0x9ba5,	// (0x0004b8ce) popup_discreet_window_t2

0x0002,

0xfeb1,	// (0x00051bda) popup_discreet_window_t_ParamLimits

0xfeb1,	// (0x00051bda) popup_discreet_window_t

0x264b,	// (0x00044374) popup_sk_window_g1

0x2655,	// (0x0004437e) popup_sk_window_g2

0x0001,

0xfeb8,	// (0x00051be1) popup_sk_window_g

0x9bf7,	// (0x0004b920) popup_sk_window_t1

0x9c05,	// (0x0004b92e) popup_sk_window_t1_copy1

0xeeeb,	// (0x00050c14) cell_ai5_widget_pane_g2_ParamLimits

0xf01e,	// (0x00050d47) cell_ai5_widget_pane_t9_ParamLimits

0xf01e,	// (0x00050d47) cell_ai5_widget_pane_t9

0xda88,	// (0x0004f7b1) main_fep_fshwr2_pane

0xf12e,	// (0x00050e57) aid_fshwr2_btn_pane

0xf136,	// (0x00050e5f) aid_fshwr2_syb_pane

0xf13e,	// (0x00050e67) aid_fshwr2_txt_pane

0xf146,	// (0x00050e6f) fshwr2_func_candi_pane

0xf150,	// (0x00050e79) fshwr2_hwr_syb_pane

0xf15c,	// (0x00050e85) fshwr2_icf_pane

0xda88,	// (0x0004f7b1) fshwr2_icf_bg_pane

0xf166,	// (0x00050e8f) fshwr2_icf_pane_t1_ParamLimits

0xf166,	// (0x00050e8f) fshwr2_icf_pane_t1

0x7196,	// (0x00048ebf) fshwr2_func_candi_pane_g1

0x9c78,	// (0x0004b9a1) fshwr2_func_candi_row_pane_ParamLimits

0x9c78,	// (0x0004b9a1) fshwr2_func_candi_row_pane

0xf17e,	// (0x00050ea7) cell_fshwr2_syb_pane_ParamLimits

0xf17e,	// (0x00050ea7) cell_fshwr2_syb_pane

0x7420,	// (0x00049149) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7420,	// (0x00049149) fshwr2_hwr_syb_pane_g1

0xda88,	// (0x0004f7b1) bg_popup_call_pane_cp01

0x9ca3,	// (0x0004b9cc) fshwr2_func_candi_cell_pane_ParamLimits

0x9ca3,	// (0x0004b9cc) fshwr2_func_candi_cell_pane

0x9cd5,	// (0x0004b9fe) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9cd5,	// (0x0004b9fe) fshwr2_func_candi_cell_bg_pane

0x9cef,	// (0x0004ba18) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9cef,	// (0x0004ba18) fshwr2_func_candi_cell_pane_g1

0x9d0f,	// (0x0004ba38) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9d0f,	// (0x0004ba38) fshwr2_func_candi_cell_pane_t1

0xda88,	// (0x0004f7b1) bg_button_pane_cp08

0x3c36,	// (0x0004595f) cell_fshwr2_syb_bg_pane

0xf197,	// (0x00050ec0) cell_fshwr2_syb_bg_pane_g1

0xf19f,	// (0x00050ec8) cell_fshwr2_syb_bg_pane_t1

0x2fd8,	// (0x00044d01) main_tmo_pane

0xd774,	// (0x0004f49d) uni_indicator_pane_g1_ParamLimits

0xd789,	// (0x0004f4b2) uni_indicator_pane_g2_ParamLimits

0xd79e,	// (0x0004f4c7) uni_indicator_pane_g3_ParamLimits

0xd7b4,	// (0x0004f4dd) uni_indicator_pane_g4_ParamLimits

0xd7b4,	// (0x0004f4dd) uni_indicator_pane_g4

0xd7c8,	// (0x0004f4f1) uni_indicator_pane_g5_ParamLimits

0xd7c8,	// (0x0004f4f1) uni_indicator_pane_g5

0xd7dc,	// (0x0004f505) uni_indicator_pane_g6_ParamLimits

0xd7dc,	// (0x0004f505) uni_indicator_pane_g6

0xf932,	// (0x0005165b) uni_indicator_pane_g_ParamLimits

0xe2f1,	// (0x0005001a) popup_tmo_note_window_ParamLimits

0xe2f1,	// (0x0005001a) popup_tmo_note_window

0xda88,	// (0x0004f7b1) fshwr2_bg_pane

0x9d00,	// (0x0004ba29) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9d00,	// (0x0004ba29) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebd,	// (0x00051be6) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebd,	// (0x00051be6) fshwr2_func_candi_cell_pane_g

0x7196,	// (0x00048ebf) bg_popup_window_pane_cp01

0x9d39,	// (0x0004ba62) bg_popup_window_pane_g1_cp01

0x9d42,	// (0x0004ba6b) bg_popup_window_pane_cp22_ParamLimits

0x9d42,	// (0x0004ba6b) bg_popup_window_pane_cp22

0x9d50,	// (0x0004ba79) listscroll_tmo_link_pane_ParamLimits

0x9d50,	// (0x0004ba79) listscroll_tmo_link_pane

0x9d90,	// (0x0004bab9) popup_tmo_note_window_g1_ParamLimits

0x9d90,	// (0x0004bab9) popup_tmo_note_window_g1

0x9d9d,	// (0x0004bac6) tmo_note_info_pane_ParamLimits

0x9d9d,	// (0x0004bac6) tmo_note_info_pane

0xf1ae,	// (0x00050ed7) list_tmo_note_info_pane_g1_ParamLimits

0xf1ae,	// (0x00050ed7) list_tmo_note_info_pane_g1

0x9dce,	// (0x0004baf7) list_tmo_note_info_pane_g2_ParamLimits

0x9dce,	// (0x0004baf7) list_tmo_note_info_pane_g2

0x0001,

0xfec2,	// (0x00051beb) list_tmo_note_info_pane_g_ParamLimits

0xfec2,	// (0x00051beb) list_tmo_note_info_pane_g

0x9dea,	// (0x0004bb13) list_tmo_note_info_text_pane_ParamLimits

0x9dea,	// (0x0004bb13) list_tmo_note_info_text_pane

0x9e6f,	// (0x0004bb98) list_tmo_link_pane

0x9e7c,	// (0x0004bba5) scroll_pane_cp20

0x9e89,	// (0x0004bbb2) list_single_tmo_link_pane_ParamLimits

0x9e89,	// (0x0004bbb2) list_single_tmo_link_pane

0x9e99,	// (0x0004bbc2) list_single_tmo_link_pane_t1

0x9ea7,	// (0x0004bbd0) list_tmo_note_info_text_pane_t1_ParamLimits

0x9ea7,	// (0x0004bbd0) list_tmo_note_info_text_pane_t1

0xbe0b,	// (0x0004db34) aid_size_touch_scroll_bar_cp01_ParamLimits

0xbe0b,	// (0x0004db34) aid_size_touch_scroll_bar_cp01

0xb530,	// (0x0004d259) aid_size_touch_slider_marker

0xb983,	// (0x0004d6ac) popup_settings_window_ParamLimits

0xb983,	// (0x0004d6ac) popup_settings_window

0x038e,	// (0x000420b7) popup_candi_list_indi_window

0x4629,	// (0x00046352) aid_touch_navi_pane_ParamLimits

0x1e53,	// (0x00043b7c) rs_clock_indi_pane

0x1e5c,	// (0x00043b85) sctrl_sk_bottom_pane_ParamLimits

0x1e6d,	// (0x00043b96) sctrl_sk_top_pane_ParamLimits

0x1f52,	// (0x00043c7b) popup_fep_tooltip_window

0x9763,	// (0x0004b48c) aid_size_cell_widget_grid_ParamLimits

0xeedf,	// (0x00050c08) cell_ai5_widget_pane_g1_ParamLimits

0xeedf,	// (0x00050c08) cell_ai5_widget_pane_g1

0xef32,	// (0x00050c5b) cell_ai5_widget_pane_g6_ParamLimits

0xef3e,	// (0x00050c67) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe40,	// (0x00051b69) cell_ai5_widget_pane_g_ParamLimits

0xfe40,	// (0x00051b69) cell_ai5_widget_pane_g

0xf042,	// (0x00050d6b) cell_ai5_widget_pane_t10_ParamLimits

0xf042,	// (0x00050d6b) cell_ai5_widget_pane_t10

0xf058,	// (0x00050d81) grid_ai5_widget_pane_ParamLimits

0x99da,	// (0x0004b703) cell_contacts_ai5_widget_pane_ParamLimits

0x99da,	// (0x0004b703) cell_contacts_ai5_widget_pane

0x9bba,	// (0x0004b8e3) popup_discreet_window_t3_ParamLimits

0x9bba,	// (0x0004b8e3) popup_discreet_window_t3

0x9c49,	// (0x0004b972) popup_fshwr2_char_preview_window_ParamLimits

0x9c49,	// (0x0004b972) popup_fshwr2_char_preview_window

0xf1c5,	// (0x00050eee) tmo_note_info_pane_t1

0xf1da,	// (0x00050f03) tmo_note_info_pane_t2

0xf1f3,	// (0x00050f1c) tmo_note_info_pane_t3

0x9e4b,	// (0x0004bb74) tmo_note_info_pane_t4

0x9e5d,	// (0x0004bb86) tmo_note_info_pane_t5

0x0004,

0xfec7,	// (0x00051bf0) tmo_note_info_pane_t

0x9e6f,	// (0x0004bb98) list_tmo_link_pane_ParamLimits

0x9e7c,	// (0x0004bba5) scroll_pane_cp20_ParamLimits

0xda88,	// (0x0004f7b1) bg_popup_fep_char_preview_window_cp01

0x9ec0,	// (0x0004bbe9) popup_fshwr2_char_preview_window_t1

0x9ece,	// (0x0004bbf7) popup_candi_list_indi_window_g1

0x9ed7,	// (0x0004bc00) bg_cell_contacts_ai5_widget_pane

0x9ee3,	// (0x0004bc0c) cell_contacts_ai5_widget_pane_g1

0x9ef7,	// (0x0004bc20) cell_contacts_ai5_widget_pane_g2

0x9f06,	// (0x0004bc2f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed2,	// (0x00051bfb) cell_contacts_ai5_widget_pane_g

0x9f19,	// (0x0004bc42) cell_contacts_ai5_widget_pane_t1

0x2fd8,	// (0x00044d01) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf26d,	// (0x00050f96) settings_container_pane

0x3c36,	// (0x0004595f) listscroll_set_pane_copy1

0x68dc,	// (0x00048605) scroll_pane_cp121_copy1

0x9f9f,	// (0x0004bcc8) set_content_pane_copy1

0xf279,	// (0x00050fa2) aid_height_set_list_copy1_ParamLimits

0xf279,	// (0x00050fa2) aid_height_set_list_copy1

0x5f29,	// (0x00047c52) aid_size_parent_copy1_ParamLimits

0x5f29,	// (0x00047c52) aid_size_parent_copy1

0xf285,	// (0x00050fae) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf285,	// (0x00050fae) button_value_adjust_pane_cp6_copy1

0x3fb4,	// (0x00045cdd) list_highlight_pane_cp2_copy1_ParamLimits

0x3fb4,	// (0x00045cdd) list_highlight_pane_cp2_copy1

0xf299,	// (0x00050fc2) list_set_pane_copy1_ParamLimits

0xf299,	// (0x00050fc2) list_set_pane_copy1

0xf208,	// (0x00050f31) main_pane_set_t1_copy1_ParamLimits

0xf208,	// (0x00050f31) main_pane_set_t1_copy1

0xf242,	// (0x00050f6b) main_pane_set_t2_copy1_ParamLimits

0xf242,	// (0x00050f6b) main_pane_set_t2_copy1

0xf360,	// (0x00051089) main_pane_set_t3_copy1

0xf36e,	// (0x00051097) main_pane_set_t4_copy1

0xf261,	// (0x00050f8a) set_content_pane_g1_copy1_ParamLimits

0xf261,	// (0x00050f8a) set_content_pane_g1_copy1

0xf37c,	// (0x000510a5) setting_code_pane_copy1

0xa0b4,	// (0x0004bddd) setting_slider_graphic_pane_copy1

0xa0b4,	// (0x0004bddd) setting_slider_pane_copy1

0xa0b4,	// (0x0004bddd) setting_text_pane_copy1

0xa0be,	// (0x0004bde7) setting_volume_pane_copy1

0xf386,	// (0x000510af) settings_code_pane_cp2_copy1

0xf38e,	// (0x000510b7) settings_code_pane_cp_copy1_ParamLimits

0xf38e,	// (0x000510b7) settings_code_pane_cp_copy1

0xf3a2,	// (0x000510cb) volume_set_pane_copy1

0xf3ae,	// (0x000510d7) volume_set_pane_g10_copy1

0xf3ba,	// (0x000510e3) volume_set_pane_g1_copy1

0xf3c4,	// (0x000510ed) volume_set_pane_g2_copy1

0xf3ce,	// (0x000510f7) volume_set_pane_g3_copy1

0xf3d8,	// (0x00051101) volume_set_pane_g4_copy1

0xf3e2,	// (0x0005110b) volume_set_pane_g5_copy1

0xf3ec,	// (0x00051115) volume_set_pane_g6_copy1

0xf3f6,	// (0x0005111f) volume_set_pane_g7_copy1

0xf400,	// (0x00051129) volume_set_pane_g8_copy1

0xf40a,	// (0x00051133) volume_set_pane_g9_copy1

0x2745,	// (0x0004446e) bg_set_opt_pane_cp_copy1_ParamLimits

0x2745,	// (0x0004446e) bg_set_opt_pane_cp_copy1

0xa155,	// (0x0004be7e) setting_slider_pane_t1_copy1_ParamLimits

0xa155,	// (0x0004be7e) setting_slider_pane_t1_copy1

0xf414,	// (0x0005113d) setting_slider_pane_t2_copy1_ParamLimits

0xf414,	// (0x0005113d) setting_slider_pane_t2_copy1

0xf42e,	// (0x00051157) setting_slider_pane_t3_copy1_ParamLimits

0xf42e,	// (0x00051157) setting_slider_pane_t3_copy1

0xf446,	// (0x0005116f) slider_set_pane_copy1_ParamLimits

0xf446,	// (0x0005116f) slider_set_pane_copy1

0x303f,	// (0x00044d68) set_opt_bg_pane_g1_copy2

0x3047,	// (0x00044d70) set_opt_bg_pane_g2_copy2

0xa1bb,	// (0x0004bee4) set_opt_bg_pane_g3_copy2

0x3057,	// (0x00044d80) set_opt_bg_pane_g4_copy2

0x305f,	// (0x00044d88) set_opt_bg_pane_g5_copy2

0x3067,	// (0x00044d90) set_opt_bg_pane_g6_copy2

0xf45c,	// (0x00051185) set_opt_bg_pane_g7_copy2

0xa1cf,	// (0x0004bef8) set_opt_bg_pane_g8_copy2

0xa1d9,	// (0x0004bf02) set_opt_bg_pane_g9_copy2

0xa1e3,	// (0x0004bf0c) aid_size_touch_slider_mark_copy1_ParamLimits

0xa1e3,	// (0x0004bf0c) aid_size_touch_slider_mark_copy1

0xa1f7,	// (0x0004bf20) slider_set_pane_g1_copy1

0xa200,	// (0x0004bf29) slider_set_pane_g2_copy1

0x6830,	// (0x00048559) slider_set_pane_g3_copy1_ParamLimits

0x6830,	// (0x00048559) slider_set_pane_g3_copy1

0x6844,	// (0x0004856d) slider_set_pane_g4_copy1_ParamLimits

0x6844,	// (0x0004856d) slider_set_pane_g4_copy1

0x685c,	// (0x00048585) slider_set_pane_g5_copy1_ParamLimits

0x685c,	// (0x00048585) slider_set_pane_g5_copy1

0x6830,	// (0x00048559) slider_set_pane_g6_copy1_ParamLimits

0x6830,	// (0x00048559) slider_set_pane_g6_copy1

0xf466,	// (0x0005118f) slider_set_pane_g7_copy1_ParamLimits

0xf466,	// (0x0005118f) slider_set_pane_g7_copy1

0xda9c,	// (0x0004f7c5) bg_set_opt_pane_cp2_copy1

0xa21e,	// (0x0004bf47) setting_slider_graphic_pane_g1_copy1

0xf47c,	// (0x000511a5) setting_slider_graphic_pane_t1_copy1

0xf48c,	// (0x000511b5) setting_slider_graphic_pane_t2_copy1

0xf49c,	// (0x000511c5) slider_set_pane_cp_copy1

0xa257,	// (0x0004bf80) input_focus_pane_cp1_copy1

0xa260,	// (0x0004bf89) list_set_text_pane_copy1

0xa268,	// (0x0004bf91) setting_text_pane_g1_copy1

0xf53b,	// (0x00051264) set_text_pane_t1_copy1

0xa257,	// (0x0004bf80) input_focus_pane_cp2_copy1

0xa268,	// (0x0004bf91) setting_code_pane_g1_copy1

0xf4a4,	// (0x000511cd) setting_code_pane_t1_copy1

0xf4b2,	// (0x000511db) list_set_graphic_pane_copy1

0xda9c,	// (0x0004f7c5) bg_set_opt_pane_cp4_copy1

0xc0c2,	// (0x0004ddeb) list_set_graphic_pane_g1_copy1_ParamLimits

0xc0c2,	// (0x0004ddeb) list_set_graphic_pane_g1_copy1

0xf4c4,	// (0x000511ed) list_set_graphic_pane_g2_copy1

0xc0da,	// (0x0004de03) list_set_graphic_pane_t1_copy1_ParamLimits

0xc0da,	// (0x0004de03) list_set_graphic_pane_t1_copy1

0x7196,	// (0x00048ebf) rs_clock_indi_pane_g1

0xa299,	// (0x0004bfc2) rs_clock_indi_pane_t1

0xa2a7,	// (0x0004bfd0) rs_indi_pane

0xa2af,	// (0x0004bfd8) rs_indi_pane_g1

0xa2b8,	// (0x0004bfe1) rs_indi_pane_g2

0xa2c1,	// (0x0004bfea) rs_indi_pane_g3

0x0002,

0xfed9,	// (0x00051c02) rs_indi_pane_g

0x3c36,	// (0x0004595f) bg_popup_preview_window_pane_cp03

0xa2ca,	// (0x0004bff3) popup_fep_tooltip_window_t1

0x7e3c,	// (0x00049b65) popup_note2_window_g2_ParamLimits

0x7e3c,	// (0x00049b65) popup_note2_window_g2

0x0001,

0xfc72,	// (0x0005199b) popup_note2_window_g_ParamLimits

0xfc72,	// (0x0005199b) popup_note2_window_g

0x8344,	// (0x0004a06d) bg_popup_sub_pane_cp11_ParamLimits

0x8351,	// (0x0004a07a) cell_ai3_links_pane_g1_ParamLimits

0x8368,	// (0x0004a091) cell_ai3_links_pane_t1

0xf53b,	// (0x00051264) set_text_pane_t1_copy1_ParamLimits

0x3b43,	// (0x0004586c) cell_graphic_popup_pane_cp2_ParamLimits

0x3b43,	// (0x0004586c) cell_graphic_popup_pane_cp2

0xa2d8,	// (0x0004c001) cell_graphic_popup_pane_g1_cp2

0x2d17,	// (0x00044a40) cell_graphic_popup_pane_g2_cp2

0xa2e0,	// (0x0004c009) cell_graphic_popup_pane_g3_cp2

0xa2e8,	// (0x0004c011) cell_graphic_popup_pane_t2_cp2

0x2d28,	// (0x00044a51) grid_highlight_pane_cp3_cp2

0x338b,	// (0x000450b4) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2fd8,	// (0x00044d01) main_tmo_pane_ParamLimits

0xe2e5,	// (0x0005000e) popup_tmo_big_image_note_window

0xeecf,	// (0x00050bf8) cell_ai5_widget_list_pane

0xeed7,	// (0x00050c00) cell_ai5_widget_lrg_icon_pane

0xf1c5,	// (0x00050eee) tmo_note_info_pane_t1_ParamLimits

0xf1da,	// (0x00050f03) tmo_note_info_pane_t2_ParamLimits

0xf1f3,	// (0x00050f1c) tmo_note_info_pane_t3_ParamLimits

0x9e4b,	// (0x0004bb74) tmo_note_info_pane_t4_ParamLimits

0x9e5d,	// (0x0004bb86) tmo_note_info_pane_t5_ParamLimits

0xfec7,	// (0x00051bf0) tmo_note_info_pane_t_ParamLimits

0xf26d,	// (0x00050f96) settings_container_pane_ParamLimits

0xa24f,	// (0x0004bf78) indicator_popup_pane_cp5

0xa24f,	// (0x0004bf78) indicator_popup_pane_cp6

0xf4b2,	// (0x000511db) list_set_graphic_pane_copy1_ParamLimits

0xda88,	// (0x0004f7b1) bg_popup_window_pane_cp23

0xa2f6,	// (0x0004c01f) popup_tmo_big_image_note_window_g1

0xa302,	// (0x0004c02b) popup_tmo_big_image_note_window_t1

0xa312,	// (0x0004c03b) popup_tmo_big_image_note_window_t2

0xa322,	// (0x0004c04b) popup_tmo_big_image_note_window_t3

0x0002,

0xfee0,	// (0x00051c09) popup_tmo_big_image_note_window_t

0xf4cc,	// (0x000511f5) cell_ai5_widget_lrg_icon_pane_g1

0xf4d4,	// (0x000511fd) cell_ai5_widget_lrg_icon_pane_t1

0xf4e2,	// (0x0005120b) cell_ai5_widget_list_row_pane_ParamLimits

0xf4e2,	// (0x0005120b) cell_ai5_widget_list_row_pane

0xf4fb,	// (0x00051224) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf4fb,	// (0x00051224) cell_ai5_widget_list_row_pane_g1

0xf508,	// (0x00051231) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf508,	// (0x00051231) cell_ai5_widget_list_row_pane_t1

0xf520,	// (0x00051249) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf520,	// (0x00051249) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee7,	// (0x00051c10) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee7,	// (0x00051c10) cell_ai5_widget_list_row_pane_t

0xda88,	// (0x0004f7b1) main_fep_vtchi_ss_pane

0xa398,	// (0x0004c0c1) popup_fep_char_pre_window

0xa3a0,	// (0x0004c0c9) popup_fep_ituss_window

0xa3c1,	// (0x0004c0ea) popup_fep_vkbss_window

0xa3e2,	// (0x0004c10b) grid_vkbss_keypad_pane_ParamLimits

0xa3e2,	// (0x0004c10b) grid_vkbss_keypad_pane

0xa3f2,	// (0x0004c11b) ituss_keypad_pane

0xa40a,	// (0x0004c133) aid_vkbss_key_offset_ParamLimits

0xa40a,	// (0x0004c133) aid_vkbss_key_offset

0xa416,	// (0x0004c13f) cell_vkbss_key_pane_ParamLimits

0xa416,	// (0x0004c13f) cell_vkbss_key_pane

0xa42c,	// (0x0004c155) bg_cell_vkbss_key_g1_ParamLimits

0xa42c,	// (0x0004c155) bg_cell_vkbss_key_g1

0xa438,	// (0x0004c161) cell_vkbss_key_3p_pane_ParamLimits

0xa438,	// (0x0004c161) cell_vkbss_key_3p_pane

0xa452,	// (0x0004c17b) cell_vkbss_key_g1_ParamLimits

0xa452,	// (0x0004c17b) cell_vkbss_key_g1

0xa46c,	// (0x0004c195) cell_vkbss_key_t1_ParamLimits

0xa46c,	// (0x0004c195) cell_vkbss_key_t1

0xa497,	// (0x0004c1c0) cell_ituss_key_pane_ParamLimits

0xa497,	// (0x0004c1c0) cell_ituss_key_pane

0xa4a7,	// (0x0004c1d0) bg_cell_ituss_key_g1_ParamLimits

0xa4a7,	// (0x0004c1d0) bg_cell_ituss_key_g1

0xa4b3,	// (0x0004c1dc) cell_ituss_key_pane_g1_ParamLimits

0xa4b3,	// (0x0004c1dc) cell_ituss_key_pane_g1

0xa4bf,	// (0x0004c1e8) cell_ituss_key_pane_g2_ParamLimits

0xa4bf,	// (0x0004c1e8) cell_ituss_key_pane_g2

0x0001,

0xfeec,	// (0x00051c15) cell_ituss_key_pane_g_ParamLimits

0xfeec,	// (0x00051c15) cell_ituss_key_pane_g

0xa4d8,	// (0x0004c201) cell_ituss_key_t1_ParamLimits

0xa4d8,	// (0x0004c201) cell_ituss_key_t1

0xa506,	// (0x0004c22f) cell_ituss_key_t2_ParamLimits

0xa506,	// (0x0004c22f) cell_ituss_key_t2

0xa537,	// (0x0004c260) cell_ituss_key_t3_ParamLimits

0xa537,	// (0x0004c260) cell_ituss_key_t3

0xa568,	// (0x0004c291) cell_ituss_key_t4_ParamLimits

0xa568,	// (0x0004c291) cell_ituss_key_t4

0x0003,

0xfef1,	// (0x00051c1a) cell_ituss_key_t_ParamLimits

0xfef1,	// (0x00051c1a) cell_ituss_key_t

0xa599,	// (0x0004c2c2) cell_vkbss_key_3p_pane_g1

0xa5a1,	// (0x0004c2ca) cell_vkbss_key_3p_pane_g2

0xa5a9,	// (0x0004c2d2) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefa,	// (0x00051c23) cell_vkbss_key_3p_pane_g

0xda88,	// (0x0004f7b1) bg_popup_fep_char_preview_window_cp02

0xa5b1,	// (0x0004c2da) popup_fep_char_pre_window_t1

0xeec5,	// (0x00050bee) main_ai5_sk_pane

0x9ed7,	// (0x0004bc00) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x9ee3,	// (0x0004bc0c) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x9ef7,	// (0x0004bc20) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x9f06,	// (0x0004bc2f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed2,	// (0x00051bfb) cell_contacts_ai5_widget_pane_g_ParamLimits

0x9f19,	// (0x0004bc42) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2fd8,	// (0x00044d01) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf532,	// (0x0005125b) main_ai5_sk_pane_g1

0x4fce,	// (0x00046cf7) popup_query_code_window_g1

0xa3b6,	// (0x0004c0df) popup_fep_vkb_icf_pane

0xa3cc,	// (0x0004c0f5) popup_fep_vtchi_icf_pane

0x2fd8,	// (0x00044d01) bg_icf_pane

0xa5d8,	// (0x0004c301) list_vkb_icf_pane

0x2fd8,	// (0x00044d01) bg_icf_pane_cp01

0xa5f0,	// (0x0004c319) vtchi_icf_list_pane

0xa600,	// (0x0004c329) list_vkb_icf_pane_t1_ParamLimits

0xa600,	// (0x0004c329) list_vkb_icf_pane_t1

0xa617,	// (0x0004c340) vtchi_icf_list_pane_t1_ParamLimits

0xa617,	// (0x0004c340) vtchi_icf_list_pane_t1

0xa3a0,	// (0x0004c0c9) popup_fep_ituss_window_ParamLimits

0xa3cc,	// (0x0004c0f5) popup_fep_vtchi_icf_pane_ParamLimits

0xa3f2,	// (0x0004c11b) ituss_keypad_pane_ParamLimits

0xa401,	// (0x0004c12a) ituss_sks_pane

0x2fd8,	// (0x00044d01) bg_icf_pane_ParamLimits

0xa5c9,	// (0x0004c2f2) icf_edit_indi_pane_ParamLimits

0xa5c9,	// (0x0004c2f2) icf_edit_indi_pane

0xa5d8,	// (0x0004c301) list_vkb_icf_pane_ParamLimits

0x2fd8,	// (0x00044d01) bg_icf_pane_cp01_ParamLimits

0xa5e4,	// (0x0004c30d) icf_edit_indi_pane_cp01_ParamLimits

0xa5e4,	// (0x0004c30d) icf_edit_indi_pane_cp01

0xa5f8,	// (0x0004c321) vtchi_query_pane

0x7420,	// (0x00049149) icf_edit_indi_pane_g1_ParamLimits

0x7420,	// (0x00049149) icf_edit_indi_pane_g1

0xa630,	// (0x0004c359) icf_edit_indi_pane_g2_ParamLimits

0xa630,	// (0x0004c359) icf_edit_indi_pane_g2

0x0001,

0xff01,	// (0x00051c2a) icf_edit_indi_pane_g_ParamLimits

0xff01,	// (0x00051c2a) icf_edit_indi_pane_g

0xa63c,	// (0x0004c365) icf_edit_indi_pane_t1

0xa64a,	// (0x0004c373) bg_input_focus_pane_cp042

0x2efb,	// (0x00044c24) vtchi_button_pane

0xa653,	// (0x0004c37c) vtchi_query_pane_t1

0xa661,	// (0x0004c38a) vtchi_query_pane_t2

0xa66f,	// (0x0004c398) vtchi_query_pane_t3

0x0002,

0xff06,	// (0x00051c2f) vtchi_query_pane_t

0xda88,	// (0x0004f7b1) bg_button_pane_cp13

0xa67d,	// (0x0004c3a6) vtchi_button_pane_g1

0x8bd4,	// (0x0004a8fd) ituss_sks_pane_g1

0xa685,	// (0x0004c3ae) ituss_sks_pane_g2

0x0001,

0xff0d,	// (0x00051c36) ituss_sks_pane_g

0xa68e,	// (0x0004c3b7) ituss_sks_pane_t1

0xa69c,	// (0x0004c3c5) ituss_sks_pane_t2

0x0001,

0xff12,	// (0x00051c3b) ituss_sks_pane_t

0x6c3d,	// (0x00048966) indicator_nsta_pane_cp_g1

0x6c46,	// (0x0004896f) indicator_nsta_pane_cp_g2

0x6c4e,	// (0x00048977) indicator_nsta_pane_cp_g3

0x6c56,	// (0x0004897f) indicator_nsta_pane_cp_g4

0x6c5e,	// (0x00048987) indicator_nsta_pane_cp_g5

0x6c66,	// (0x0004898f) indicator_nsta_pane_cp_g6

0x0005,

0xfabc,	// (0x000517e5) indicator_nsta_pane_cp_g

0xece4,	// (0x00050a0d) cell_graphic2_pane_t2_ParamLimits

0xece4,	// (0x00050a0d) cell_graphic2_pane_t2

0x0001,

0xfdc9,	// (0x00051af2) cell_graphic2_pane_t_ParamLimits

0xfdc9,	// (0x00051af2) cell_graphic2_pane_t

0xed1a,	// (0x00050a43) cell_graphic2_control_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Large
