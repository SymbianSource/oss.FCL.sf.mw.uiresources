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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0004d2f9 };

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
0x7396,	// (0x0005468f) Screen

0x73a2,	// (0x0005469b) application_window_ParamLimits

0x73a2,	// (0x0005469b) application_window

0x25b9,	// (0x0004f8b2) screen_g1

0x4b10,	// (0x00051e09) area_bottom_pane_ParamLimits

0x4b10,	// (0x00051e09) area_bottom_pane

0x4bd0,	// (0x00051ec9) area_top_pane_ParamLimits

0x4bd0,	// (0x00051ec9) area_top_pane

0x4c6e,	// (0x00051f67) main_pane_ParamLimits

0x4c6e,	// (0x00051f67) main_pane

0x25c3,	// (0x0004f8bc) misc_graphics

0x962d,	// (0x00056926) battery_pane_ParamLimits

0x962d,	// (0x00056926) battery_pane

0xa315,	// (0x0005760e) bg_status_flat_pane_g8

0xa31d,	// (0x00057616) bg_status_flat_pane_g9

0x96f5,	// (0x000569ee) context_pane_ParamLimits

0x96f5,	// (0x000569ee) context_pane

0x9819,	// (0x00056b12) navi_pane_ParamLimits

0x9819,	// (0x00056b12) navi_pane

0x98a9,	// (0x00056ba2) signal_pane_ParamLimits

0x98a9,	// (0x00056ba2) signal_pane

0x0008,

0xf88f,	// (0x0005cb88) bg_status_flat_pane_g

0x9916,	// (0x00056c0f) status_pane_g1_ParamLimits

0x9916,	// (0x00056c0f) status_pane_g1

0x992a,	// (0x00056c23) status_pane_g2_ParamLimits

0x992a,	// (0x00056c23) status_pane_g2

0x9936,	// (0x00056c2f) status_pane_g3_ParamLimits

0x9936,	// (0x00056c2f) status_pane_g3

0x0004,

0xf7bd,	// (0x0005cab6) status_pane_g_ParamLimits

0xf7bd,	// (0x0005cab6) status_pane_g

0x996a,	// (0x00056c63) title_pane_ParamLimits

0x996a,	// (0x00056c63) title_pane

0x99a7,	// (0x00056ca0) uni_indicator_pane_ParamLimits

0x99a7,	// (0x00056ca0) uni_indicator_pane

0x8f22,	// (0x0005621b) bg_list_pane_ParamLimits

0x8f22,	// (0x0005621b) bg_list_pane

0x8f42,	// (0x0005623b) find_pane

0x8f4a,	// (0x00056243) listscroll_app_pane_ParamLimits

0x8f4a,	// (0x00056243) listscroll_app_pane

0x8f56,	// (0x0005624f) listscroll_form_pane

0x8f5e,	// (0x00056257) listscroll_gen_pane_ParamLimits

0x8f5e,	// (0x00056257) listscroll_gen_pane

0x8f56,	// (0x0005624f) listscroll_set_pane

0x7faf,	// (0x000552a8) main_idle_act_pane

0x8c06,	// (0x00055eff) main_idle_trad_pane

0x8c06,	// (0x00055eff) main_list_empty_pane

0x8f84,	// (0x0005627d) main_midp_pane

0x8f90,	// (0x00056289) main_pane_g1_ParamLimits

0x8f90,	// (0x00056289) main_pane_g1

0x8f9e,	// (0x00056297) popup_ai_message_window_ParamLimits

0x8f9e,	// (0x00056297) popup_ai_message_window

0x904e,	// (0x00056347) popup_fep_china_uni_window_ParamLimits

0x904e,	// (0x00056347) popup_fep_china_uni_window

0x90ae,	// (0x000563a7) popup_fep_japan_candidate_window_ParamLimits

0x90ae,	// (0x000563a7) popup_fep_japan_candidate_window

0x90d8,	// (0x000563d1) popup_fep_japan_predictive_window_ParamLimits

0x90d8,	// (0x000563d1) popup_fep_japan_predictive_window

0x910e,	// (0x00056407) popup_find_window

0x911b,	// (0x00056414) popup_grid_graphic_window_ParamLimits

0x911b,	// (0x00056414) popup_grid_graphic_window

0x9149,	// (0x00056442) popup_large_graphic_colour_window

0x916f,	// (0x00056468) popup_menu_window_ParamLimits

0x916f,	// (0x00056468) popup_menu_window

0x9339,	// (0x00056632) popup_note_image_window

0x9323,	// (0x0005661c) popup_note_wait_window_ParamLimits

0x9323,	// (0x0005661c) popup_note_wait_window

0x9323,	// (0x0005661c) popup_note_window_ParamLimits

0x9323,	// (0x0005661c) popup_note_window

0x939f,	// (0x00056698) popup_query_code_window_ParamLimits

0x939f,	// (0x00056698) popup_query_code_window

0x93b5,	// (0x000566ae) popup_query_data_code_window_ParamLimits

0x93b5,	// (0x000566ae) popup_query_data_code_window

0x93d8,	// (0x000566d1) popup_query_data_window_ParamLimits

0x93d8,	// (0x000566d1) popup_query_data_window

0x93fa,	// (0x000566f3) popup_query_sat_info_window_ParamLimits

0x93fa,	// (0x000566f3) popup_query_sat_info_window

0x9439,	// (0x00056732) popup_snote_single_graphic_window_ParamLimits

0x9439,	// (0x00056732) popup_snote_single_graphic_window

0x9439,	// (0x00056732) popup_snote_single_text_window_ParamLimits

0x9439,	// (0x00056732) popup_snote_single_text_window

0x9450,	// (0x00056749) popup_sub_window_general

0x9596,	// (0x0005688f) popup_window_general_ParamLimits

0x9596,	// (0x0005688f) popup_window_general

0x95af,	// (0x000568a8) power_save_pane

0x5b59,	// (0x00052e52) control_pane_g1_ParamLimits

0x5b59,	// (0x00052e52) control_pane_g1

0x5b82,	// (0x00052e7b) control_pane_g2_ParamLimits

0x5b82,	// (0x00052e7b) control_pane_g2

0x8ed3,	// (0x000561cc) control_pane_g3_ParamLimits

0x8ed3,	// (0x000561cc) control_pane_g3

0x0007,

0xf7a5,	// (0x0005ca9e) control_pane_g_ParamLimits

0xf7a5,	// (0x0005ca9e) control_pane_g

0x5bca,	// (0x00052ec3) control_pane_t1_ParamLimits

0x5bca,	// (0x00052ec3) control_pane_t1

0x5c16,	// (0x00052f0f) control_pane_t2_ParamLimits

0x5c16,	// (0x00052f0f) control_pane_t2

0x0002,

0xf7b6,	// (0x0005caaf) control_pane_t_ParamLimits

0xf7b6,	// (0x0005caaf) control_pane_t

0x8df4,	// (0x000560ed) navi_navi_volume_pane_cp1

0x8dfd,	// (0x000560f6) status_small_icon_pane

0x8e05,	// (0x000560fe) status_small_pane_g1_ParamLimits

0x8e05,	// (0x000560fe) status_small_pane_g1

0x8e39,	// (0x00056132) status_small_pane_g2_ParamLimits

0x8e39,	// (0x00056132) status_small_pane_g2

0x8e45,	// (0x0005613e) status_small_pane_g3_ParamLimits

0x8e45,	// (0x0005613e) status_small_pane_g3

0x8e51,	// (0x0005614a) status_small_pane_g4_ParamLimits

0x8e51,	// (0x0005614a) status_small_pane_g4

0x8e5d,	// (0x00056156) status_small_pane_g5_ParamLimits

0x8e5d,	// (0x00056156) status_small_pane_g5

0x8e6c,	// (0x00056165) status_small_pane_g6_ParamLimits

0x8e6c,	// (0x00056165) status_small_pane_g6

0x0007,

0xf794,	// (0x0005ca8d) status_small_pane_g_ParamLimits

0xf794,	// (0x0005ca8d) status_small_pane_g

0x8e9c,	// (0x00056195) status_small_pane_t1

0x8ebf,	// (0x000561b8) status_small_wait_pane_ParamLimits

0x8ebf,	// (0x000561b8) status_small_wait_pane

0x8677,	// (0x00055970) aid_levels_signal_ParamLimits

0x8677,	// (0x00055970) aid_levels_signal

0x8689,	// (0x00055982) signal_pane_g1_ParamLimits

0x8689,	// (0x00055982) signal_pane_g1

0x869e,	// (0x00055997) signal_pane_g2_ParamLimits

0x869e,	// (0x00055997) signal_pane_g2

0x0003,

0xf725,	// (0x0005ca1e) signal_pane_g_ParamLimits

0xf725,	// (0x0005ca1e) signal_pane_g

0x86d9,	// (0x000559d2) context_pane_g1

0x73b2,	// (0x000546ab) title_pane_g1

0x73dc,	// (0x000546d5) title_pane_t1

0x7444,	// (0x0005473d) title_pane_t2

0x746a,	// (0x00054763) title_pane_t3

0x0002,

0xf56f,	// (0x0005c868) title_pane_t

0x99bf,	// (0x00056cb8) aid_levels_battery_ParamLimits

0x99bf,	// (0x00056cb8) aid_levels_battery

0x99d3,	// (0x00056ccc) battery_pane_g1_ParamLimits

0x99d3,	// (0x00056ccc) battery_pane_g1

0x99e9,	// (0x00056ce2) battery_pane_g2_ParamLimits

0x99e9,	// (0x00056ce2) battery_pane_g2

0x0001,

0xf7c8,	// (0x0005cac1) battery_pane_g_ParamLimits

0xf7c8,	// (0x0005cac1) battery_pane_g

0xac65,	// (0x00057f5e) uni_indicator_pane_g1

0xac7a,	// (0x00057f73) uni_indicator_pane_g2

0xac90,	// (0x00057f89) uni_indicator_pane_g3

0x0005,

0xf937,	// (0x0005cc30) uni_indicator_pane_g

0x8a74,	// (0x00055d6d) navi_icon_pane_ParamLimits

0x8a74,	// (0x00055d6d) navi_icon_pane

0x89bb,	// (0x00055cb4) navi_midp_pane

0x8a90,	// (0x00055d89) navi_navi_pane

0x8a9a,	// (0x00055d93) navi_text_pane_ParamLimits

0x8a9a,	// (0x00055d93) navi_text_pane

0x25b9,	// (0x0004f8b2) status_small_wait_pane_g1

0x78ae,	// (0x00054ba7) status_small_wait_pane_g2

0x0001,

0xf932,	// (0x0005cc2b) status_small_wait_pane_g

0xa978,	// (0x00057c71) navi_navi_icon_text_pane

0xa980,	// (0x00057c79) navi_navi_pane_g1_ParamLimits

0xa980,	// (0x00057c79) navi_navi_pane_g1

0xa992,	// (0x00057c8b) navi_navi_pane_g2_ParamLimits

0xa992,	// (0x00057c8b) navi_navi_pane_g2

0x0001,

0xf900,	// (0x0005cbf9) navi_navi_pane_g_ParamLimits

0xf900,	// (0x0005cbf9) navi_navi_pane_g

0xa9a4,	// (0x00057c9d) navi_navi_tabs_pane

0xa9ad,	// (0x00057ca6) navi_navi_text_pane

0xa978,	// (0x00057c71) navi_navi_volume_pane

0xa951,	// (0x00057c4a) navi_text_pane_t1

0xa942,	// (0x00057c3b) navi_icon_pane_g1

0xa895,	// (0x00057b8e) navi_navi_text_pane_t1

0x5fcc,	// (0x000532c5) navi_navi_volume_pane_g1

0x5fd4,	// (0x000532cd) volume_small_pane

0xa7fb,	// (0x00057af4) navi_navi_icon_text_pane_g1

0xa803,	// (0x00057afc) navi_navi_icon_text_pane_t1

0x8a90,	// (0x00055d89) navi_tabs_2_long_pane

0x8a90,	// (0x00055d89) navi_tabs_2_pane

0x8a90,	// (0x00055d89) navi_tabs_3_long_pane

0x8a90,	// (0x00055d89) navi_tabs_3_pane

0x8a90,	// (0x00055d89) navi_tabs_4_pane

0x5fac,	// (0x000532a5) tabs_2_active_pane_ParamLimits

0x5fac,	// (0x000532a5) tabs_2_active_pane

0x5fbc,	// (0x000532b5) tabs_2_passive_pane_ParamLimits

0x5fbc,	// (0x000532b5) tabs_2_passive_pane

0x5f7a,	// (0x00053273) tabs_3_active_pane_ParamLimits

0x5f7a,	// (0x00053273) tabs_3_active_pane

0x5f8a,	// (0x00053283) tabs_3_passive_pane_ParamLimits

0x5f8a,	// (0x00053283) tabs_3_passive_pane

0x5f9b,	// (0x00053294) tabs_3_passive_pane_cp_ParamLimits

0x5f9b,	// (0x00053294) tabs_3_passive_pane_cp

0x5f2e,	// (0x00053227) tabs_4_active_pane_ParamLimits

0x5f2e,	// (0x00053227) tabs_4_active_pane

0x5f41,	// (0x0005323a) tabs_4_passive_pane_ParamLimits

0x5f41,	// (0x0005323a) tabs_4_passive_pane

0x5f52,	// (0x0005324b) tabs_4_passive_pane_cp_ParamLimits

0x5f52,	// (0x0005324b) tabs_4_passive_pane_cp

0x5f63,	// (0x0005325c) tabs_4_passive_pane_cp2_ParamLimits

0x5f63,	// (0x0005325c) tabs_4_passive_pane_cp2

0x5f0a,	// (0x00053203) tabs_2_long_active_pane_ParamLimits

0x5f0a,	// (0x00053203) tabs_2_long_active_pane

0x5f1c,	// (0x00053215) tabs_2_long_passive_pane_ParamLimits

0x5f1c,	// (0x00053215) tabs_2_long_passive_pane

0x5ecb,	// (0x000531c4) tabs_3_long_active_pane_ParamLimits

0x5ecb,	// (0x000531c4) tabs_3_long_active_pane

0x5ede,	// (0x000531d7) tabs_3_long_passive_pane_ParamLimits

0x5ede,	// (0x000531d7) tabs_3_long_passive_pane

0x5ef7,	// (0x000531f0) tabs_3_long_passive_pane_cp_ParamLimits

0x5ef7,	// (0x000531f0) tabs_3_long_passive_pane_cp

0x5e71,	// (0x0005316a) volume_small_pane_g1

0x5e7a,	// (0x00053173) volume_small_pane_g2

0x5e83,	// (0x0005317c) volume_small_pane_g3

0x5e8c,	// (0x00053185) volume_small_pane_g4

0x5e95,	// (0x0005318e) volume_small_pane_g5

0x5e9e,	// (0x00053197) volume_small_pane_g6

0x5ea7,	// (0x000531a0) volume_small_pane_g7

0x5eb0,	// (0x000531a9) volume_small_pane_g8

0x5eb9,	// (0x000531b2) volume_small_pane_g9

0x5ec2,	// (0x000531bb) volume_small_pane_g10

0x0009,

0xf8cc,	// (0x0005cbc5) volume_small_pane_g

0x747c,	// (0x00054775) bg_active_tab_pane_cp2_ParamLimits

0x747c,	// (0x00054775) bg_active_tab_pane_cp2

0x748a,	// (0x00054783) tabs_3_active_pane_g1

0x7492,	// (0x0005478b) tabs_3_active_pane_t1

0x747c,	// (0x00054775) bg_passive_tab_pane_cp2_ParamLimits

0x747c,	// (0x00054775) bg_passive_tab_pane_cp2

0x748a,	// (0x00054783) tabs_3_passive_pane_g1

0x7492,	// (0x0005478b) tabs_3_passive_pane_t1

0x747c,	// (0x00054775) bg_active_tab_pane_cp3_ParamLimits

0x747c,	// (0x00054775) bg_active_tab_pane_cp3

0x74a4,	// (0x0005479d) tabs_4_active_pane_g1

0x74ac,	// (0x000547a5) tabs_4_active_pane_t1

0x747c,	// (0x00054775) bg_passive_tab_pane_cp3_ParamLimits

0x747c,	// (0x00054775) bg_passive_tab_pane_cp3

0x74a4,	// (0x0005479d) tabs_4_1_passive_pane_g1

0x74ac,	// (0x000547a5) tabs_4_1_passive_pane_t1

0x8f84,	// (0x0005627d) list_highlight_pane_cp2

0xaef4,	// (0x000581ed) list_set_pane_ParamLimits

0xaef4,	// (0x000581ed) list_set_pane

0xafbc,	// (0x000582b5) main_pane_set_t1_ParamLimits

0xafbc,	// (0x000582b5) main_pane_set_t1

0xafdc,	// (0x000582d5) main_pane_set_t2_ParamLimits

0xafdc,	// (0x000582d5) main_pane_set_t2

0xaff0,	// (0x000582e9) main_pane_set_t3_ParamLimits

0xaff0,	// (0x000582e9) main_pane_set_t3

0xb004,	// (0x000582fd) main_pane_set_t4_ParamLimits

0xb004,	// (0x000582fd) main_pane_set_t4

0x0003,

0xf99c,	// (0x0005cc95) main_pane_set_t_ParamLimits

0xf99c,	// (0x0005cc95) main_pane_set_t

0xb024,	// (0x0005831d) setting_code_pane

0xb02e,	// (0x00058327) setting_slider_graphic_pane

0xb02e,	// (0x00058327) setting_slider_pane

0xb02e,	// (0x00058327) setting_text_pane

0xb02e,	// (0x00058327) setting_volume_pane

0x4ec5,	// (0x000521be) volume_set_pane

0x747c,	// (0x00054775) bg_set_opt_pane_cp

0x4ecf,	// (0x000521c8) setting_slider_pane_t1

0x4ee5,	// (0x000521de) setting_slider_pane_t2

0x4eff,	// (0x000521f8) setting_slider_pane_t3

0x0002,

0xf576,	// (0x0005c86f) setting_slider_pane_t

0x4f17,	// (0x00052210) slider_set_pane

0x25c3,	// (0x0004f8bc) bg_set_opt_pane_cp2

0x74be,	// (0x000547b7) setting_slider_graphic_pane_g1

0x4f2d,	// (0x00052226) setting_slider_graphic_pane_t1

0x4f3d,	// (0x00052236) setting_slider_graphic_pane_t2

0x0001,

0xf57d,	// (0x0005c876) setting_slider_graphic_pane_t

0x4f4d,	// (0x00052246) slider_set_pane_cp

0x25c3,	// (0x0004f8bc) input_focus_pane_cp1

0xaeb5,	// (0x000581ae) list_set_text_pane

0x25b9,	// (0x0004f8b2) setting_text_pane_g1

0x25c3,	// (0x0004f8bc) input_focus_pane_cp2

0x25b9,	// (0x0004f8b2) setting_code_pane_g1

0x74c7,	// (0x000547c0) setting_code_pane_t1

0x4089,	// (0x00051382) set_text_pane_t1_ParamLimits

0x4089,	// (0x00051382) set_text_pane_t1

0x7e16,	// (0x0005510f) set_opt_bg_pane_g1

0x7e1e,	// (0x00055117) set_opt_bg_pane_g2

0xae8d,	// (0x00058186) set_opt_bg_pane_g3

0x7e2e,	// (0x00055127) set_opt_bg_pane_g4

0x7e36,	// (0x0005512f) set_opt_bg_pane_g5

0x7e3e,	// (0x00055137) set_opt_bg_pane_g6

0xae97,	// (0x00058190) set_opt_bg_pane_g7

0xaea1,	// (0x0005819a) set_opt_bg_pane_g8

0xaeab,	// (0x000581a4) set_opt_bg_pane_g9

0x0008,

0xf989,	// (0x0005cc82) set_opt_bg_pane_g

0xae80,	// (0x00058179) slider_set_pane_g1

0x607d,	// (0x00053376) slider_set_pane_g2

0x0006,

0xf97a,	// (0x0005cc73) slider_set_pane_g

0x5fdd,	// (0x000532d6) volume_set_pane_g1

0x5fe7,	// (0x000532e0) volume_set_pane_g2

0x5ff1,	// (0x000532ea) volume_set_pane_g3

0x5ffb,	// (0x000532f4) volume_set_pane_g4

0x6005,	// (0x000532fe) volume_set_pane_g5

0x600f,	// (0x00053308) volume_set_pane_g6

0x6019,	// (0x00053312) volume_set_pane_g7

0x6023,	// (0x0005331c) volume_set_pane_g8

0x602d,	// (0x00053326) volume_set_pane_g9

0x6037,	// (0x00053330) volume_set_pane_g10

0x0009,

0xf952,	// (0x0005cc4b) volume_set_pane_g

0x74d5,	// (0x000547ce) indicator_pane_ParamLimits

0x74d5,	// (0x000547ce) indicator_pane

0x74e1,	// (0x000547da) main_idle_pane_g2_ParamLimits

0x74e1,	// (0x000547da) main_idle_pane_g2

0x7509,	// (0x00054802) main_pane_idle_g1_ParamLimits

0x7509,	// (0x00054802) main_pane_idle_g1

0x7517,	// (0x00054810) popup_clock_digital_analogue_window_ParamLimits

0x7517,	// (0x00054810) popup_clock_digital_analogue_window

0x752e,	// (0x00054827) soft_indicator_pane_ParamLimits

0x752e,	// (0x00054827) soft_indicator_pane

0x753c,	// (0x00054835) wallpaper_pane_ParamLimits

0x753c,	// (0x00054835) wallpaper_pane

0x25b9,	// (0x0004f8b2) wallpaper_pane_g1

0x7550,	// (0x00054849) indicator_pane_g1_ParamLimits

0x7550,	// (0x00054849) indicator_pane_g1

0xb2f2,	// (0x000585eb) navi_navi_icon_text_pane_srt_g1

0x756b,	// (0x00054864) soft_indicator_pane_t1

0x7585,	// (0x0005487e) aid_ps_area_pane

0x7596,	// (0x0005488f) aid_ps_clock_pane

0x75a4,	// (0x0005489d) aid_ps_indicator_pane

0x75b0,	// (0x000548a9) indicator_ps_pane_ParamLimits

0x75b0,	// (0x000548a9) indicator_ps_pane

0x75bf,	// (0x000548b8) power_save_pane_g1_ParamLimits

0x75bf,	// (0x000548b8) power_save_pane_g1

0x75cb,	// (0x000548c4) power_save_pane_g2_ParamLimits

0x75cb,	// (0x000548c4) power_save_pane_g2

0x4ac4,	// (0x00051dbd) aid_navinavi_width_pane

0x7585,	// (0x0005487e) aid_ps_area_pane_ParamLimits

0x0001,

0xf582,	// (0x0005c87b) power_save_pane_g_ParamLimits

0xf582,	// (0x0005c87b) power_save_pane_g

0x75d9,	// (0x000548d2) power_save_pane_t1_ParamLimits

0x75d9,	// (0x000548d2) power_save_pane_t1

0x7596,	// (0x0005488f) aid_ps_clock_pane_ParamLimits

0x75a4,	// (0x0005489d) aid_ps_indicator_pane_ParamLimits

0x75eb,	// (0x000548e4) power_save_pane_t4_ParamLimits

0x75eb,	// (0x000548e4) power_save_pane_t4

0x0001,

0xf587,	// (0x0005c880) power_save_pane_t_ParamLimits

0xf587,	// (0x0005c880) power_save_pane_t

0x7615,	// (0x0005490e) power_save_t3_ParamLimits

0x7615,	// (0x0005490e) power_save_t3

0x7600,	// (0x000548f9) power_save_t2_ParamLimits

0x7600,	// (0x000548f9) power_save_t2

0x762a,	// (0x00054923) indicator_ps_pane_g1

0x7633,	// (0x0005492c) ai_gene_pane_ParamLimits

0x7633,	// (0x0005492c) ai_gene_pane

0x763f,	// (0x00054938) ai_links_pane_ParamLimits

0x763f,	// (0x00054938) ai_links_pane

0x764b,	// (0x00054944) indicator_pane_cp1_ParamLimits

0x764b,	// (0x00054944) indicator_pane_cp1

0x7657,	// (0x00054950) main_pane_idle_g1_cp_ParamLimits

0x7657,	// (0x00054950) main_pane_idle_g1_cp

0x7663,	// (0x0005495c) popup_ai_links_title_window

0x766c,	// (0x00054965) soft_indicator_pane_cp1_ParamLimits

0x766c,	// (0x00054965) soft_indicator_pane_cp1

0xac53,	// (0x00057f4c) ai_links_pane_g1

0xac5c,	// (0x00057f55) grid_ai_links_pane

0xac38,	// (0x00057f31) ai_gene_pane_1

0xac41,	// (0x00057f3a) ai_gene_pane_2

0xac4a,	// (0x00057f43) list_highlight_pane_cp4

0xac18,	// (0x00057f11) cell_ai_link_pane_ParamLimits

0xac18,	// (0x00057f11) cell_ai_link_pane

0xac10,	// (0x00057f09) cell_ai_link_pane_g1

0x78ae,	// (0x00054ba7) cell_ai_link_pane_g2

0x0001,

0xf92d,	// (0x0005cc26) cell_ai_link_pane_g

0x25c3,	// (0x0004f8bc) grid_highlight_cp2

0x25c3,	// (0x0004f8bc) bg_popup_sub_pane_cp1

0x7686,	// (0x0005497f) popup_ai_links_title_window_t1

0xab5c,	// (0x00057e55) ai_gene_pane_1_g1_ParamLimits

0xab5c,	// (0x00057e55) ai_gene_pane_1_g1

0xab68,	// (0x00057e61) ai_gene_pane_1_g2_ParamLimits

0xab68,	// (0x00057e61) ai_gene_pane_1_g2

0x0001,

0xf923,	// (0x0005cc1c) ai_gene_pane_1_g_ParamLimits

0xf923,	// (0x0005cc1c) ai_gene_pane_1_g

0xab75,	// (0x00057e6e) ai_gene_pane_1_t1_ParamLimits

0xab75,	// (0x00057e6e) ai_gene_pane_1_t1

0xaba9,	// (0x00057ea2) grid_ai_soft_ind_pane

0xab47,	// (0x00057e40) ai_gene_pane_2_t1_ParamLimits

0xab47,	// (0x00057e40) ai_gene_pane_2_t1

0x7695,	// (0x0005498e) main_pane_empty_t1_ParamLimits

0x7695,	// (0x0005498e) main_pane_empty_t1

0x76ad,	// (0x000549a6) main_pane_empty_t2_ParamLimits

0x76ad,	// (0x000549a6) main_pane_empty_t2

0x76c2,	// (0x000549bb) main_pane_empty_t3_ParamLimits

0x76c2,	// (0x000549bb) main_pane_empty_t3

0x76d4,	// (0x000549cd) main_pane_empty_t4_ParamLimits

0x76d4,	// (0x000549cd) main_pane_empty_t4

0x76e6,	// (0x000549df) main_pane_empty_t5_ParamLimits

0x76e6,	// (0x000549df) main_pane_empty_t5

0x0004,

0xf58c,	// (0x0005c885) main_pane_empty_t_ParamLimits

0xf58c,	// (0x0005c885) main_pane_empty_t

0x7e70,	// (0x00055169) bg_popup_window_pane_ParamLimits

0x7e70,	// (0x00055169) bg_popup_window_pane

0xa8a3,	// (0x00057b9c) find_popup_pane_cp2_ParamLimits

0xa8a3,	// (0x00057b9c) find_popup_pane_cp2

0xa8af,	// (0x00057ba8) heading_pane_ParamLimits

0xa8af,	// (0x00057ba8) heading_pane

0x25c3,	// (0x0004f8bc) bg_popup_sub_pane

0xa81d,	// (0x00057b16) bg_popup_window_pane_g1_ParamLimits

0xa81d,	// (0x00057b16) bg_popup_window_pane_g1

0xa829,	// (0x00057b22) bg_popup_window_pane_g2_ParamLimits

0xa829,	// (0x00057b22) bg_popup_window_pane_g2

0xa835,	// (0x00057b2e) bg_popup_window_pane_g3_ParamLimits

0xa835,	// (0x00057b2e) bg_popup_window_pane_g3

0xa841,	// (0x00057b3a) bg_popup_window_pane_g4_ParamLimits

0xa841,	// (0x00057b3a) bg_popup_window_pane_g4

0xa84d,	// (0x00057b46) bg_popup_window_pane_g5_ParamLimits

0xa84d,	// (0x00057b46) bg_popup_window_pane_g5

0xa859,	// (0x00057b52) bg_popup_window_pane_g6_ParamLimits

0xa859,	// (0x00057b52) bg_popup_window_pane_g6

0xa865,	// (0x00057b5e) bg_popup_window_pane_g7_ParamLimits

0xa865,	// (0x00057b5e) bg_popup_window_pane_g7

0xa871,	// (0x00057b6a) bg_popup_window_pane_g8_ParamLimits

0xa871,	// (0x00057b6a) bg_popup_window_pane_g8

0xa87d,	// (0x00057b76) bg_popup_window_pane_g9_ParamLimits

0xa87d,	// (0x00057b76) bg_popup_window_pane_g9

0xa889,	// (0x00057b82) bg_popup_window_pane_g10_ParamLimits

0xa889,	// (0x00057b82) bg_popup_window_pane_g10

0x0009,

0xf8eb,	// (0x0005cbe4) bg_popup_window_pane_g_ParamLimits

0xf8eb,	// (0x0005cbe4) bg_popup_window_pane_g

0xa7b2,	// (0x00057aab) bg_popup_heading_pane_ParamLimits

0xa7b2,	// (0x00057aab) bg_popup_heading_pane

0x6151,	// (0x0005344a) tabs_4_passive_pane_cp_srt_ParamLimits

0x6151,	// (0x0005344a) tabs_4_passive_pane_cp_srt

0x6163,	// (0x0005345c) tabs_4_passive_pane_srt_ParamLimits

0xa7c6,	// (0x00057abf) heading_pane_g2

0x6163,	// (0x0005345c) tabs_4_passive_pane_srt

0x8f84,	// (0x0005627d) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8f84,	// (0x0005627d) bg_passive_tab_pane_cp3_srt

0xa7ce,	// (0x00057ac7) heading_pane_t1_ParamLimits

0xa7ce,	// (0x00057ac7) heading_pane_t1

0xa7e5,	// (0x00057ade) heading_pane_t2_ParamLimits

0xa7e5,	// (0x00057ade) heading_pane_t2

0x0001,

0xf8e6,	// (0x0005cbdf) heading_pane_t_ParamLimits

0xf8e6,	// (0x0005cbdf) heading_pane_t

0xa2dd,	// (0x000575d6) bg_popup_heading_pane_g1

0xa38c,	// (0x00057685) bg_popup_heading_pane_g2

0xa396,	// (0x0005768f) bg_popup_heading_pane_g3

0xa3a0,	// (0x00057699) bg_popup_heading_pane_g4

0xa3aa,	// (0x000576a3) bg_popup_heading_pane_g5

0xa3b4,	// (0x000576ad) bg_popup_heading_pane_g6

0xa3bc,	// (0x000576b5) bg_popup_heading_pane_g7

0xa3c4,	// (0x000576bd) bg_popup_heading_pane_g8

0xa3ce,	// (0x000576c7) bg_popup_heading_pane_g9

0x0008,

0xf8a2,	// (0x0005cb9b) bg_popup_heading_pane_g

0x9ac1,	// (0x00056dba) bg_popup_sub_pane_g1

0x9ad1,	// (0x00056dca) bg_popup_sub_pane_g2

0x9ac9,	// (0x00056dc2) bg_popup_sub_pane_g3

0x9ae1,	// (0x00056dda) bg_popup_sub_pane_g4

0x9ad9,	// (0x00056dd2) bg_popup_sub_pane_g5

0x9ae9,	// (0x00056de2) bg_popup_sub_pane_g6

0x9af1,	// (0x00056dea) bg_popup_sub_pane_g7

0x9b01,	// (0x00056dfa) bg_popup_sub_pane_g8

0x9af9,	// (0x00056df2) bg_popup_sub_pane_g9

0x0008,

0xf87c,	// (0x0005cb75) bg_popup_sub_pane_g

0x76f8,	// (0x000549f1) bg_popup_window_pane_cp5_ParamLimits

0x76f8,	// (0x000549f1) bg_popup_window_pane_cp5

0x7714,	// (0x00054a0d) popup_note_window_g1_ParamLimits

0x7714,	// (0x00054a0d) popup_note_window_g1

0x7720,	// (0x00054a19) popup_note_window_t1_ParamLimits

0x7720,	// (0x00054a19) popup_note_window_t1

0x7736,	// (0x00054a2f) popup_note_window_t2_ParamLimits

0x7736,	// (0x00054a2f) popup_note_window_t2

0x774c,	// (0x00054a45) popup_note_window_t3_ParamLimits

0x774c,	// (0x00054a45) popup_note_window_t3

0x7762,	// (0x00054a5b) popup_note_window_t4_ParamLimits

0x7762,	// (0x00054a5b) popup_note_window_t4

0x778a,	// (0x00054a83) popup_note_window_t5_ParamLimits

0x778a,	// (0x00054a83) popup_note_window_t5

0x0004,

0xf597,	// (0x0005c890) popup_note_window_t_ParamLimits

0xf597,	// (0x0005c890) popup_note_window_t

0x77ae,	// (0x00054aa7) bg_popup_window_pane_cp6_ParamLimits

0x77ae,	// (0x00054aa7) bg_popup_window_pane_cp6

0xa259,	// (0x00057552) popup_note_image_window_g1_ParamLimits

0xa259,	// (0x00057552) popup_note_image_window_g1

0xa265,	// (0x0005755e) popup_note_image_window_g2_ParamLimits

0xa265,	// (0x0005755e) popup_note_image_window_g2

0x0001,

0xf870,	// (0x0005cb69) popup_note_image_window_g_ParamLimits

0xf870,	// (0x0005cb69) popup_note_image_window_g

0xa27e,	// (0x00057577) popup_note_image_window_t1_ParamLimits

0xa27e,	// (0x00057577) popup_note_image_window_t1

0xa297,	// (0x00057590) popup_note_image_window_t2_ParamLimits

0xa297,	// (0x00057590) popup_note_image_window_t2

0xa2b0,	// (0x000575a9) popup_note_image_window_t3_ParamLimits

0xa2b0,	// (0x000575a9) popup_note_image_window_t3

0x0002,

0xf875,	// (0x0005cb6e) popup_note_image_window_t_ParamLimits

0xf875,	// (0x0005cb6e) popup_note_image_window_t

0xa119,	// (0x00057412) bg_popup_window_pane_cp7_ParamLimits

0xa119,	// (0x00057412) bg_popup_window_pane_cp7

0xa149,	// (0x00057442) popup_note_wait_window_g1_ParamLimits

0xa149,	// (0x00057442) popup_note_wait_window_g1

0xa155,	// (0x0005744e) popup_note_wait_window_g2_ParamLimits

0xa155,	// (0x0005744e) popup_note_wait_window_g2

0x0002,

0xf85e,	// (0x0005cb57) popup_note_wait_window_g_ParamLimits

0xf85e,	// (0x0005cb57) popup_note_wait_window_g

0xa16d,	// (0x00057466) popup_note_wait_window_t1_ParamLimits

0xa16d,	// (0x00057466) popup_note_wait_window_t1

0xa194,	// (0x0005748d) popup_note_wait_window_t2_ParamLimits

0xa194,	// (0x0005748d) popup_note_wait_window_t2

0xa1b2,	// (0x000574ab) popup_note_wait_window_t3_ParamLimits

0xa1b2,	// (0x000574ab) popup_note_wait_window_t3

0xa1c5,	// (0x000574be) popup_note_wait_window_t4_ParamLimits

0xa1c5,	// (0x000574be) popup_note_wait_window_t4

0x0004,

0xf865,	// (0x0005cb5e) popup_note_wait_window_t_ParamLimits

0xf865,	// (0x0005cb5e) popup_note_wait_window_t

0xa1ea,	// (0x000574e3) wait_bar_pane_ParamLimits

0xa1ea,	// (0x000574e3) wait_bar_pane

0x25c3,	// (0x0004f8bc) wait_anim_pane

0x25c3,	// (0x0004f8bc) wait_border_pane

0x25b9,	// (0x0004f8b2) wait_anim_pane_g1

0x25b9,	// (0x0004f8b2) wait_anim_pane_g2

0x0001,

0xf720,	// (0x0005ca19) wait_anim_pane_g

0xa0bd,	// (0x000573b6) wait_border_pane_g1

0xa0c8,	// (0x000573c1) wait_border_pane_g2

0xa0d1,	// (0x000573ca) wait_border_pane_g3

0x0002,

0xf857,	// (0x0005cb50) wait_border_pane_g

0x9f27,	// (0x00057220) bg_popup_window_pane_cp16_ParamLimits

0x9f27,	// (0x00057220) bg_popup_window_pane_cp16

0xa027,	// (0x00057320) indicator_popup_pane_cp4_ParamLimits

0xa027,	// (0x00057320) indicator_popup_pane_cp4

0xa03b,	// (0x00057334) popup_query_data_window_t1_ParamLimits

0xa03b,	// (0x00057334) popup_query_data_window_t1

0xa04d,	// (0x00057346) popup_query_data_window_t2_ParamLimits

0xa04d,	// (0x00057346) popup_query_data_window_t2

0xa066,	// (0x0005735f) popup_query_data_window_t3_ParamLimits

0xa066,	// (0x0005735f) popup_query_data_window_t3

0x0002,

0xf850,	// (0x0005cb49) popup_query_data_window_t_ParamLimits

0xf850,	// (0x0005cb49) popup_query_data_window_t

0xa080,	// (0x00057379) query_popup_data_pane_ParamLimits

0xa080,	// (0x00057379) query_popup_data_pane

0xa094,	// (0x0005738d) query_popup_data_pane_cp1_ParamLimits

0xa094,	// (0x0005738d) query_popup_data_pane_cp1

0x9f27,	// (0x00057220) bg_popup_window_pane_cp10_ParamLimits

0x9f27,	// (0x00057220) bg_popup_window_pane_cp10

0x9f59,	// (0x00057252) indicator_popup_pane_ParamLimits

0x9f59,	// (0x00057252) indicator_popup_pane

0x9f7b,	// (0x00057274) popup_query_code_window_t1_ParamLimits

0x9f7b,	// (0x00057274) popup_query_code_window_t1

0x9f95,	// (0x0005728e) popup_query_code_window_t2_ParamLimits

0x9f95,	// (0x0005728e) popup_query_code_window_t2

0x9fde,	// (0x000572d7) popup_query_code_window_t3_ParamLimits

0x9fde,	// (0x000572d7) popup_query_code_window_t3

0x0002,

0xf849,	// (0x0005cb42) popup_query_code_window_t_ParamLimits

0xf849,	// (0x0005cb42) popup_query_code_window_t

0xa00d,	// (0x00057306) query_popup_pane_ParamLimits

0xa00d,	// (0x00057306) query_popup_pane

0x77ae,	// (0x00054aa7) bg_popup_window_pane_cp15_ParamLimits

0x77ae,	// (0x00054aa7) bg_popup_window_pane_cp15

0x77ce,	// (0x00054ac7) indicator_popup_pane_cp1_ParamLimits

0x77ce,	// (0x00054ac7) indicator_popup_pane_cp1

0x77e1,	// (0x00054ada) indicator_popup_pane_cp2_ParamLimits

0x77e1,	// (0x00054ada) indicator_popup_pane_cp2

0x77fc,	// (0x00054af5) popup_query_data_code_window_g1_ParamLimits

0x77fc,	// (0x00054af5) popup_query_data_code_window_g1

0x780f,	// (0x00054b08) popup_query_data_code_window_t1_ParamLimits

0x780f,	// (0x00054b08) popup_query_data_code_window_t1

0x7821,	// (0x00054b1a) popup_query_data_code_window_t2_ParamLimits

0x7821,	// (0x00054b1a) popup_query_data_code_window_t2

0x7833,	// (0x00054b2c) popup_query_data_code_window_t3_ParamLimits

0x7833,	// (0x00054b2c) popup_query_data_code_window_t3

0x7849,	// (0x00054b42) popup_query_data_code_window_t4_ParamLimits

0x7849,	// (0x00054b42) popup_query_data_code_window_t4

0x0003,

0xf5a2,	// (0x0005c89b) popup_query_data_code_window_t_ParamLimits

0xf5a2,	// (0x0005c89b) popup_query_data_code_window_t

0x5d32,	// (0x0005302b) list_single_midp_graphic_pane_g3

0x7863,	// (0x00054b5c) query_popup_data_pane_cp2_ParamLimits

0x7876,	// (0x00054b6f) query_popup_pane_cp2_ParamLimits

0x7876,	// (0x00054b6f) query_popup_pane_cp2

0x25c3,	// (0x0004f8bc) bg_popup_window_pane_cp11

0x9f1f,	// (0x00057218) heading_pane_cp5

0x7966,	// (0x00054c5f) listscroll_popup_info_pane

0x25c3,	// (0x0004f8bc) input_focus_pane_cp3

0x7891,	// (0x00054b8a) query_popup_pane_t1

0x789f,	// (0x00054b98) list_popup_info_pane_ParamLimits

0x789f,	// (0x00054b98) list_popup_info_pane

0x78ae,	// (0x00054ba7) listscroll_popup_info_pane_g1

0x78b6,	// (0x00054baf) scroll_pane_cp7

0x78c0,	// (0x00054bb9) popup_info_list_pane_t1_ParamLimits

0x78c0,	// (0x00054bb9) popup_info_list_pane_t1

0x78da,	// (0x00054bd3) popup_info_list_pane_t2_ParamLimits

0x78da,	// (0x00054bd3) popup_info_list_pane_t2

0x0001,

0xf5ab,	// (0x0005c8a4) popup_info_list_pane_t_ParamLimits

0xf5ab,	// (0x0005c8a4) popup_info_list_pane_t

0x25c3,	// (0x0004f8bc) bg_popup_window_pane_cp12

0xb30c,	// (0x00058605) find_popup_pane

0x747c,	// (0x00054775) bg_popup_window_pane_cp3

0x78f4,	// (0x00054bed) heading_pane_cp3

0x7900,	// (0x00054bf9) listscroll_popup_graphic_pane

0x25c3,	// (0x0004f8bc) bg_popup_window_pane_cp4

0x795c,	// (0x00054c55) heading_pane_cp4

0x7966,	// (0x00054c5f) listscroll_popup_colour_pane

0x796e,	// (0x00054c67) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x796e,	// (0x00054c67) cell_large_graphic_colour_none_popup_pane

0x7982,	// (0x00054c7b) grid_large_graphic_colour_popup_pane_ParamLimits

0x7982,	// (0x00054c7b) grid_large_graphic_colour_popup_pane

0x79ae,	// (0x00054ca7) listscroll_popup_colour_pane_g1_ParamLimits

0x79ae,	// (0x00054ca7) listscroll_popup_colour_pane_g1

0x79c5,	// (0x00054cbe) listscroll_popup_colour_pane_g2_ParamLimits

0x79c5,	// (0x00054cbe) listscroll_popup_colour_pane_g2

0x79dc,	// (0x00054cd5) listscroll_popup_colour_pane_g3_ParamLimits

0x79dc,	// (0x00054cd5) listscroll_popup_colour_pane_g3

0x79ec,	// (0x00054ce5) listscroll_popup_colour_pane_g4_ParamLimits

0x79ec,	// (0x00054ce5) listscroll_popup_colour_pane_g4

0x0003,

0xf5b0,	// (0x0005c8a9) listscroll_popup_colour_pane_g_ParamLimits

0xf5b0,	// (0x0005c8a9) listscroll_popup_colour_pane_g

0x7a00,	// (0x00054cf9) scroll_pane_cp6_ParamLimits

0x7a00,	// (0x00054cf9) scroll_pane_cp6

0x7a12,	// (0x00054d0b) cell_large_graphic_colour_popup_pane_ParamLimits

0x7a12,	// (0x00054d0b) cell_large_graphic_colour_popup_pane

0x7a37,	// (0x00054d30) cell_large_graphic_colour_none_popup_pane_t1

0x25c3,	// (0x0004f8bc) grid_highlight_pane_cp5

0x7a46,	// (0x00054d3f) cell_large_graphic_colour_popup_pane_g1

0x7a4e,	// (0x00054d47) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5b9,	// (0x0005c8b2) cell_large_graphic_colour_popup_pane_g

0x7a56,	// (0x00054d4f) cell_large_graphic_colour_popup_pane_g2_copy1

0x7a5f,	// (0x00054d58) grid_highlight_pane_cp4

0x7a67,	// (0x00054d60) bg_popup_window_pane_cp8_ParamLimits

0x7a67,	// (0x00054d60) bg_popup_window_pane_cp8

0x7a82,	// (0x00054d7b) popup_snote_single_text_window_g1_ParamLimits

0x7a82,	// (0x00054d7b) popup_snote_single_text_window_g1

0x7a94,	// (0x00054d8d) popup_snote_single_text_window_t1_ParamLimits

0x7a94,	// (0x00054d8d) popup_snote_single_text_window_t1

0x7aa7,	// (0x00054da0) popup_snote_single_text_window_t2_ParamLimits

0x7aa7,	// (0x00054da0) popup_snote_single_text_window_t2

0x7aba,	// (0x00054db3) popup_snote_single_text_window_t3_ParamLimits

0x7aba,	// (0x00054db3) popup_snote_single_text_window_t3

0x7af3,	// (0x00054dec) popup_snote_single_text_window_t4_ParamLimits

0x7af3,	// (0x00054dec) popup_snote_single_text_window_t4

0x7b27,	// (0x00054e20) popup_snote_single_text_window_t5_ParamLimits

0x7b27,	// (0x00054e20) popup_snote_single_text_window_t5

0x0004,

0xf5be,	// (0x0005c8b7) popup_snote_single_text_window_t_ParamLimits

0xf5be,	// (0x0005c8b7) popup_snote_single_text_window_t

0x7b56,	// (0x00054e4f) bg_popup_window_pane_cp9_ParamLimits

0x7b56,	// (0x00054e4f) bg_popup_window_pane_cp9

0x7a82,	// (0x00054d7b) popup_snote_single_graphic_window_g1_ParamLimits

0x7a82,	// (0x00054d7b) popup_snote_single_graphic_window_g1

0x7b64,	// (0x00054e5d) popup_snote_single_graphic_window_g2_ParamLimits

0x7b64,	// (0x00054e5d) popup_snote_single_graphic_window_g2

0x0001,

0xf5c9,	// (0x0005c8c2) popup_snote_single_graphic_window_g_ParamLimits

0xf5c9,	// (0x0005c8c2) popup_snote_single_graphic_window_g

0x7b70,	// (0x00054e69) popup_snote_single_graphic_window_t1_ParamLimits

0x7b70,	// (0x00054e69) popup_snote_single_graphic_window_t1

0x7b83,	// (0x00054e7c) popup_snote_single_graphic_window_t2_ParamLimits

0x7b83,	// (0x00054e7c) popup_snote_single_graphic_window_t2

0x7b96,	// (0x00054e8f) popup_snote_single_graphic_window_t3_ParamLimits

0x7b96,	// (0x00054e8f) popup_snote_single_graphic_window_t3

0x7bcf,	// (0x00054ec8) popup_snote_single_graphic_window_t4_ParamLimits

0x7bcf,	// (0x00054ec8) popup_snote_single_graphic_window_t4

0x7c03,	// (0x00054efc) popup_snote_single_graphic_window_t5_ParamLimits

0x7c03,	// (0x00054efc) popup_snote_single_graphic_window_t5

0x0004,

0xf5ce,	// (0x0005c8c7) popup_snote_single_graphic_window_t_ParamLimits

0xf5ce,	// (0x0005c8c7) popup_snote_single_graphic_window_t

0xb24a,	// (0x00058543) grid_graphic_popup_pane_ParamLimits

0xb24a,	// (0x00058543) grid_graphic_popup_pane

0xb278,	// (0x00058571) listscroll_popup_graphic_pane_g1_ParamLimits

0xb278,	// (0x00058571) listscroll_popup_graphic_pane_g1

0xb28c,	// (0x00058585) listscroll_popup_graphic_pane_g2_ParamLimits

0xb28c,	// (0x00058585) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c6,	// (0x0005ccbf) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c6,	// (0x0005ccbf) listscroll_popup_graphic_pane_g

0xb2a0,	// (0x00058599) scroll_pane_cp5

0xb1f2,	// (0x000584eb) cell_graphic_popup_pane_ParamLimits

0xb1f2,	// (0x000584eb) cell_graphic_popup_pane

0xb1d3,	// (0x000584cc) cell_graphic_popup_pane_g1

0xb1db,	// (0x000584d4) cell_graphic_popup_pane_g2

0x7a56,	// (0x00054d4f) cell_graphic_popup_pane_g3

0x0002,

0xf9bf,	// (0x0005ccb8) cell_graphic_popup_pane_g

0xb1e4,	// (0x000584dd) cell_graphic_popup_pane_t2

0x7a5f,	// (0x00054d58) grid_highlight_pane_cp3

0x7c44,	// (0x00054f3d) list_gen_pane_ParamLimits

0x7c44,	// (0x00054f3d) list_gen_pane

0x7c76,	// (0x00054f6f) scroll_pane

0xb135,	// (0x0005842e) bg_list_pane_g1_ParamLimits

0xb135,	// (0x0005842e) bg_list_pane_g1

0xb150,	// (0x00058449) bg_list_pane_g2_ParamLimits

0xb150,	// (0x00058449) bg_list_pane_g2

0xb163,	// (0x0005845c) bg_list_pane_g3_ParamLimits

0xb163,	// (0x0005845c) bg_list_pane_g3

0xb175,	// (0x0005846e) bg_list_pane_g4_ParamLimits

0xb175,	// (0x0005846e) bg_list_pane_g4

0xb187,	// (0x00058480) bg_list_pane_g5_ParamLimits

0xb187,	// (0x00058480) bg_list_pane_g5

0x0004,

0xf9b4,	// (0x0005ccad) bg_list_pane_g_ParamLimits

0xf9b4,	// (0x0005ccad) bg_list_pane_g

0xb0b2,	// (0x000583ab) list_double2_graphic_large_graphic_pane_ParamLimits

0xb0b2,	// (0x000583ab) list_double2_graphic_large_graphic_pane

0xb0b2,	// (0x000583ab) list_double2_graphic_pane_ParamLimits

0xb0b2,	// (0x000583ab) list_double2_graphic_pane

0xb0b2,	// (0x000583ab) list_double2_large_graphic_pane_ParamLimits

0xb0b2,	// (0x000583ab) list_double2_large_graphic_pane

0xb0b2,	// (0x000583ab) list_double2_pane_ParamLimits

0xb0b2,	// (0x000583ab) list_double2_pane

0xb0b2,	// (0x000583ab) list_double_graphic_heading_pane_ParamLimits

0xb0b2,	// (0x000583ab) list_double_graphic_heading_pane

0xb0b2,	// (0x000583ab) list_double_graphic_pane_ParamLimits

0xb0b2,	// (0x000583ab) list_double_graphic_pane

0xb0b2,	// (0x000583ab) list_double_heading_pane_ParamLimits

0xb0b2,	// (0x000583ab) list_double_heading_pane

0xb0b2,	// (0x000583ab) list_double_large_graphic_pane_ParamLimits

0xb0b2,	// (0x000583ab) list_double_large_graphic_pane

0xb0b2,	// (0x000583ab) list_double_number_pane_ParamLimits

0xb0b2,	// (0x000583ab) list_double_number_pane

0xb0b2,	// (0x000583ab) list_double_pane_ParamLimits

0xb0b2,	// (0x000583ab) list_double_pane

0xb0b2,	// (0x000583ab) list_double_time_pane_ParamLimits

0xb0b2,	// (0x000583ab) list_double_time_pane

0xb0b2,	// (0x000583ab) list_setting_number_pane_ParamLimits

0xb0b2,	// (0x000583ab) list_setting_number_pane

0xb0b2,	// (0x000583ab) list_setting_pane_ParamLimits

0xb0b2,	// (0x000583ab) list_setting_pane

0xb0f1,	// (0x000583ea) list_single_2graphic_pane_ParamLimits

0xb0f1,	// (0x000583ea) list_single_2graphic_pane

0xb0f1,	// (0x000583ea) list_single_graphic_heading_pane_ParamLimits

0xb0f1,	// (0x000583ea) list_single_graphic_heading_pane

0xb0f1,	// (0x000583ea) list_single_graphic_pane_ParamLimits

0xb0f1,	// (0x000583ea) list_single_graphic_pane

0xb0f1,	// (0x000583ea) list_single_heading_pane_ParamLimits

0xb0f1,	// (0x000583ea) list_single_heading_pane

0x813d,	// (0x00055436) list_single_large_graphic_pane_ParamLimits

0x813d,	// (0x00055436) list_single_large_graphic_pane

0xb0f1,	// (0x000583ea) list_single_number_heading_pane_ParamLimits

0xb0f1,	// (0x000583ea) list_single_number_heading_pane

0xb0f1,	// (0x000583ea) list_single_number_pane_ParamLimits

0xb0f1,	// (0x000583ea) list_single_number_pane

0xb0f1,	// (0x000583ea) list_single_pane_ParamLimits

0xb0f1,	// (0x000583ea) list_single_pane

0x25c3,	// (0x0004f8bc) list_highlight_pane_cp1

0x7caa,	// (0x00054fa3) list_single_pane_g1_ParamLimits

0x7caa,	// (0x00054fa3) list_single_pane_g1

0x7cb6,	// (0x00054faf) list_single_pane_g2_ParamLimits

0x7cb6,	// (0x00054faf) list_single_pane_g2

0x0001,

0xf5ea,	// (0x0005c8e3) list_single_pane_g_ParamLimits

0xf5ea,	// (0x0005c8e3) list_single_pane_g

0x6117,	// (0x00053410) list_single_pane_t1_ParamLimits

0x6117,	// (0x00053410) list_single_pane_t1

0x7caa,	// (0x00054fa3) list_single_number_pane_g1_ParamLimits

0x7caa,	// (0x00054fa3) list_single_number_pane_g1

0x7cb6,	// (0x00054faf) list_single_number_pane_g2_ParamLimits

0x7cb6,	// (0x00054faf) list_single_number_pane_g2

0x0001,

0xf5ea,	// (0x0005c8e3) list_single_number_pane_g_ParamLimits

0xf5ea,	// (0x0005c8e3) list_single_number_pane_g

0x6041,	// (0x0005333a) list_single_number_pane_t1_ParamLimits

0x6041,	// (0x0005333a) list_single_number_pane_t1

0x6057,	// (0x00053350) list_single_number_pane_t2_ParamLimits

0x6057,	// (0x00053350) list_single_number_pane_t2

0x0001,

0xf975,	// (0x0005cc6e) list_single_number_pane_t_ParamLimits

0xf975,	// (0x0005cc6e) list_single_number_pane_t

0x4f55,	// (0x0005224e) list_single_graphic_pane_g1_ParamLimits

0x4f55,	// (0x0005224e) list_single_graphic_pane_g1

0x7caa,	// (0x00054fa3) list_single_graphic_pane_g2_ParamLimits

0x7caa,	// (0x00054fa3) list_single_graphic_pane_g2

0x7cb6,	// (0x00054faf) list_single_graphic_pane_g3_ParamLimits

0x7cb6,	// (0x00054faf) list_single_graphic_pane_g3

0x0002,

0xf5d9,	// (0x0005c8d2) list_single_graphic_pane_g_ParamLimits

0xf5d9,	// (0x0005c8d2) list_single_graphic_pane_g

0x4f61,	// (0x0005225a) list_single_graphic_pane_t1_ParamLimits

0x4f61,	// (0x0005225a) list_single_graphic_pane_t1

0x4f77,	// (0x00052270) list_single_heading_pane_g1_ParamLimits

0x4f77,	// (0x00052270) list_single_heading_pane_g1

0x7cb6,	// (0x00054faf) list_single_heading_pane_g2_ParamLimits

0x7cb6,	// (0x00054faf) list_single_heading_pane_g2

0x0001,

0xf5e0,	// (0x0005c8d9) list_single_heading_pane_g_ParamLimits

0xf5e0,	// (0x0005c8d9) list_single_heading_pane_g

0x4f8a,	// (0x00052283) list_single_heading_pane_t1_ParamLimits

0x4f8a,	// (0x00052283) list_single_heading_pane_t1

0x7cc2,	// (0x00054fbb) list_single_heading_pane_t2_ParamLimits

0x7cc2,	// (0x00054fbb) list_single_heading_pane_t2

0x0001,

0xf5e5,	// (0x0005c8de) list_single_heading_pane_t_ParamLimits

0xf5e5,	// (0x0005c8de) list_single_heading_pane_t

0x7caa,	// (0x00054fa3) list_single_number_heading_pane_g1_ParamLimits

0x7caa,	// (0x00054fa3) list_single_number_heading_pane_g1

0x7cb6,	// (0x00054faf) list_single_number_heading_pane_g2_ParamLimits

0x7cb6,	// (0x00054faf) list_single_number_heading_pane_g2

0x0001,

0xf5ea,	// (0x0005c8e3) list_single_number_heading_pane_g_ParamLimits

0xf5ea,	// (0x0005c8e3) list_single_number_heading_pane_g

0x4fa0,	// (0x00052299) list_single_number_heading_pane_t1_ParamLimits

0x4fa0,	// (0x00052299) list_single_number_heading_pane_t1

0x4fb6,	// (0x000522af) list_single_number_heading_pane_t2_ParamLimits

0x4fb6,	// (0x000522af) list_single_number_heading_pane_t2

0x4fc8,	// (0x000522c1) list_single_number_heading_pane_t3_ParamLimits

0x4fc8,	// (0x000522c1) list_single_number_heading_pane_t3

0x0002,

0xf5ef,	// (0x0005c8e8) list_single_number_heading_pane_t_ParamLimits

0xf5ef,	// (0x0005c8e8) list_single_number_heading_pane_t

0x4fda,	// (0x000522d3) list_single_graphic_heading_pane_g1_ParamLimits

0x4fda,	// (0x000522d3) list_single_graphic_heading_pane_g1

0x7cd4,	// (0x00054fcd) list_single_graphic_heading_pane_g4_ParamLimits

0x7cd4,	// (0x00054fcd) list_single_graphic_heading_pane_g4

0x7cb6,	// (0x00054faf) list_single_graphic_heading_pane_g5_ParamLimits

0x7cb6,	// (0x00054faf) list_single_graphic_heading_pane_g5

0x0002,

0xf5f6,	// (0x0005c8ef) list_single_graphic_heading_pane_g_ParamLimits

0xf5f6,	// (0x0005c8ef) list_single_graphic_heading_pane_g

0x4fa0,	// (0x00052299) list_single_graphic_heading_pane_t1_ParamLimits

0x4fa0,	// (0x00052299) list_single_graphic_heading_pane_t1

0x4ff2,	// (0x000522eb) list_single_graphic_heading_pane_t2_ParamLimits

0x4ff2,	// (0x000522eb) list_single_graphic_heading_pane_t2

0x0001,

0xf5fd,	// (0x0005c8f6) list_single_graphic_heading_pane_t_ParamLimits

0xf5fd,	// (0x0005c8f6) list_single_graphic_heading_pane_t

0x7ce5,	// (0x00054fde) list_single_large_graphic_pane_g1_ParamLimits

0x7ce5,	// (0x00054fde) list_single_large_graphic_pane_g1

0x7cf1,	// (0x00054fea) list_single_large_graphic_pane_g2_ParamLimits

0x7cf1,	// (0x00054fea) list_single_large_graphic_pane_g2

0x7cfd,	// (0x00054ff6) list_single_large_graphic_pane_g3_ParamLimits

0x7cfd,	// (0x00054ff6) list_single_large_graphic_pane_g3

0x0002,

0xf602,	// (0x0005c8fb) list_single_large_graphic_pane_g_ParamLimits

0xf602,	// (0x0005c8fb) list_single_large_graphic_pane_g

0xa0c8,	// (0x000573c1) wait_border_pane_g2_copy1

0x7d09,	// (0x00055002) list_single_large_graphic_pane_g4_cp2

0x500a,	// (0x00052303) list_single_large_graphic_pane_t1_ParamLimits

0x500a,	// (0x00052303) list_single_large_graphic_pane_t1

0x7d11,	// (0x0005500a) list_double_pane_g1_ParamLimits

0x7d11,	// (0x0005500a) list_double_pane_g1

0x7d1d,	// (0x00055016) list_double_pane_g2_ParamLimits

0x7d1d,	// (0x00055016) list_double_pane_g2

0x0001,

0xf609,	// (0x0005c902) list_double_pane_g_ParamLimits

0xf609,	// (0x0005c902) list_double_pane_g

0x5020,	// (0x00052319) list_double_pane_t1_ParamLimits

0x5020,	// (0x00052319) list_double_pane_t1

0x5036,	// (0x0005232f) list_double_pane_t2_ParamLimits

0x5036,	// (0x0005232f) list_double_pane_t2

0x0001,

0xf60e,	// (0x0005c907) list_double_pane_t_ParamLimits

0xf60e,	// (0x0005c907) list_double_pane_t

0x5048,	// (0x00052341) list_double2_pane_g1_ParamLimits

0x5048,	// (0x00052341) list_double2_pane_g1

0x5059,	// (0x00052352) list_double2_pane_g2_ParamLimits

0x5059,	// (0x00052352) list_double2_pane_g2

0x0001,

0xf613,	// (0x0005c90c) list_double2_pane_g_ParamLimits

0xf613,	// (0x0005c90c) list_double2_pane_g

0x5065,	// (0x0005235e) list_double2_pane_t1_ParamLimits

0x5065,	// (0x0005235e) list_double2_pane_t1

0x507b,	// (0x00052374) list_double2_pane_t2_ParamLimits

0x507b,	// (0x00052374) list_double2_pane_t2

0x0001,

0xf618,	// (0x0005c911) list_double2_pane_t_ParamLimits

0xf618,	// (0x0005c911) list_double2_pane_t

0x7d11,	// (0x0005500a) list_double_number_pane_g1_ParamLimits

0x7d11,	// (0x0005500a) list_double_number_pane_g1

0x7d1d,	// (0x00055016) list_double_number_pane_g2_ParamLimits

0x7d1d,	// (0x00055016) list_double_number_pane_g2

0x0001,

0xf609,	// (0x0005c902) list_double_number_pane_g_ParamLimits

0xf609,	// (0x0005c902) list_double_number_pane_g

0x508d,	// (0x00052386) list_double_number_pane_t1_ParamLimits

0x508d,	// (0x00052386) list_double_number_pane_t1

0x509f,	// (0x00052398) list_double_number_pane_t2_ParamLimits

0x509f,	// (0x00052398) list_double_number_pane_t2

0x50b5,	// (0x000523ae) list_double_number_pane_t3_ParamLimits

0x50b5,	// (0x000523ae) list_double_number_pane_t3

0x0002,

0xf61d,	// (0x0005c916) list_double_number_pane_t_ParamLimits

0xf61d,	// (0x0005c916) list_double_number_pane_t

0x50c7,	// (0x000523c0) list_double_graphic_pane_g1_ParamLimits

0x50c7,	// (0x000523c0) list_double_graphic_pane_g1

0x50d3,	// (0x000523cc) list_double_graphic_pane_g2_ParamLimits

0x50d3,	// (0x000523cc) list_double_graphic_pane_g2

0x50e2,	// (0x000523db) list_double_graphic_pane_g3_ParamLimits

0x50e2,	// (0x000523db) list_double_graphic_pane_g3

0x0003,

0xf624,	// (0x0005c91d) list_double_graphic_pane_g_ParamLimits

0xf624,	// (0x0005c91d) list_double_graphic_pane_g

0x50fa,	// (0x000523f3) list_double_graphic_pane_t1_ParamLimits

0x50fa,	// (0x000523f3) list_double_graphic_pane_t1

0x5110,	// (0x00052409) list_double_graphic_pane_t2_ParamLimits

0x5110,	// (0x00052409) list_double_graphic_pane_t2

0x0001,

0xf62d,	// (0x0005c926) list_double_graphic_pane_t_ParamLimits

0xf62d,	// (0x0005c926) list_double_graphic_pane_t

0x5122,	// (0x0005241b) list_double2_graphic_pane_g1_ParamLimits

0x5122,	// (0x0005241b) list_double2_graphic_pane_g1

0x7d29,	// (0x00055022) list_double2_graphic_pane_g2_ParamLimits

0x7d29,	// (0x00055022) list_double2_graphic_pane_g2

0x512e,	// (0x00052427) list_double2_graphic_pane_g3_ParamLimits

0x512e,	// (0x00052427) list_double2_graphic_pane_g3

0x0002,

0xf632,	// (0x0005c92b) list_double2_graphic_pane_g_ParamLimits

0xf632,	// (0x0005c92b) list_double2_graphic_pane_g

0x513a,	// (0x00052433) list_double2_graphic_pane_t1_ParamLimits

0x513a,	// (0x00052433) list_double2_graphic_pane_t1

0x5150,	// (0x00052449) list_double2_graphic_pane_t2_ParamLimits

0x5150,	// (0x00052449) list_double2_graphic_pane_t2

0x0001,

0xf639,	// (0x0005c932) list_double2_graphic_pane_t_ParamLimits

0xf639,	// (0x0005c932) list_double2_graphic_pane_t

0x5162,	// (0x0005245b) list_double_large_graphic_pane_g1_ParamLimits

0x5162,	// (0x0005245b) list_double_large_graphic_pane_g1

0x518d,	// (0x00052486) list_double_large_graphic_pane_g2_ParamLimits

0x518d,	// (0x00052486) list_double_large_graphic_pane_g2

0x7d1d,	// (0x00055016) list_double_large_graphic_pane_g3_ParamLimits

0x7d1d,	// (0x00055016) list_double_large_graphic_pane_g3

0x51a3,	// (0x0005249c) list_double_large_graphic_pane_g4_ParamLimits

0x51a3,	// (0x0005249c) list_double_large_graphic_pane_g4

0x0004,

0xf63e,	// (0x0005c937) list_double_large_graphic_pane_g_ParamLimits

0xf63e,	// (0x0005c937) list_double_large_graphic_pane_g

0x51b6,	// (0x000524af) list_double_large_graphic_pane_t1_ParamLimits

0x51b6,	// (0x000524af) list_double_large_graphic_pane_t1

0x51cf,	// (0x000524c8) list_double_large_graphic_pane_t2_ParamLimits

0x51cf,	// (0x000524c8) list_double_large_graphic_pane_t2

0x0001,

0xf649,	// (0x0005c942) list_double_large_graphic_pane_t_ParamLimits

0xf649,	// (0x0005c942) list_double_large_graphic_pane_t

0x7d4a,	// (0x00055043) list_double2_large_graphic_pane_g1_ParamLimits

0x7d4a,	// (0x00055043) list_double2_large_graphic_pane_g1

0x51e1,	// (0x000524da) list_double2_large_graphic_pane_g2_ParamLimits

0x51e1,	// (0x000524da) list_double2_large_graphic_pane_g2

0x512e,	// (0x00052427) list_double2_large_graphic_pane_g3_ParamLimits

0x512e,	// (0x00052427) list_double2_large_graphic_pane_g3

0x0002,

0xf64e,	// (0x0005c947) list_double2_large_graphic_pane_g_ParamLimits

0xf64e,	// (0x0005c947) list_double2_large_graphic_pane_g

0x51f2,	// (0x000524eb) list_double2_large_graphic_pane_t1_ParamLimits

0x51f2,	// (0x000524eb) list_double2_large_graphic_pane_t1

0x5208,	// (0x00052501) list_double2_large_graphic_pane_t2_ParamLimits

0x5208,	// (0x00052501) list_double2_large_graphic_pane_t2

0x0001,

0xf655,	// (0x0005c94e) list_double2_large_graphic_pane_t_ParamLimits

0xf655,	// (0x0005c94e) list_double2_large_graphic_pane_t

0x521a,	// (0x00052513) list_double_heading_pane_g1_ParamLimits

0x521a,	// (0x00052513) list_double_heading_pane_g1

0x522b,	// (0x00052524) list_double_heading_pane_g2_ParamLimits

0x522b,	// (0x00052524) list_double_heading_pane_g2

0x0001,

0xf65a,	// (0x0005c953) list_double_heading_pane_g_ParamLimits

0xf65a,	// (0x0005c953) list_double_heading_pane_g

0x5237,	// (0x00052530) list_double_heading_pane_t1_ParamLimits

0x5237,	// (0x00052530) list_double_heading_pane_t1

0x524d,	// (0x00052546) list_double_heading_pane_t2_ParamLimits

0x524d,	// (0x00052546) list_double_heading_pane_t2

0x0001,

0xf65f,	// (0x0005c958) list_double_heading_pane_t_ParamLimits

0xf65f,	// (0x0005c958) list_double_heading_pane_t

0x525f,	// (0x00052558) list_double_graphic_heading_pane_g1_ParamLimits

0x525f,	// (0x00052558) list_double_graphic_heading_pane_g1

0x521a,	// (0x00052513) list_double_graphic_heading_pane_g2_ParamLimits

0x521a,	// (0x00052513) list_double_graphic_heading_pane_g2

0x522b,	// (0x00052524) list_double_graphic_heading_pane_g3_ParamLimits

0x522b,	// (0x00052524) list_double_graphic_heading_pane_g3

0x0002,

0xf664,	// (0x0005c95d) list_double_graphic_heading_pane_g_ParamLimits

0xf664,	// (0x0005c95d) list_double_graphic_heading_pane_g

0x526b,	// (0x00052564) list_double_graphic_heading_pane_t1_ParamLimits

0x526b,	// (0x00052564) list_double_graphic_heading_pane_t1

0x5281,	// (0x0005257a) list_double_graphic_heading_pane_t2_ParamLimits

0x5281,	// (0x0005257a) list_double_graphic_heading_pane_t2

0x0001,

0xf66b,	// (0x0005c964) list_double_graphic_heading_pane_t_ParamLimits

0xf66b,	// (0x0005c964) list_double_graphic_heading_pane_t

0x5293,	// (0x0005258c) list_double_time_pane_g1_ParamLimits

0x5293,	// (0x0005258c) list_double_time_pane_g1

0x52a4,	// (0x0005259d) list_double_time_pane_g2_ParamLimits

0x52a4,	// (0x0005259d) list_double_time_pane_g2

0x0001,

0xf670,	// (0x0005c969) list_double_time_pane_g_ParamLimits

0xf670,	// (0x0005c969) list_double_time_pane_g

0x52b0,	// (0x000525a9) list_double_time_pane_t1_ParamLimits

0x52b0,	// (0x000525a9) list_double_time_pane_t1

0x52c6,	// (0x000525bf) list_double_time_pane_t2_ParamLimits

0x52c6,	// (0x000525bf) list_double_time_pane_t2

0x52d8,	// (0x000525d1) list_double_time_pane_t3_ParamLimits

0x52d8,	// (0x000525d1) list_double_time_pane_t3

0x52ea,	// (0x000525e3) list_double_time_pane_t4_ParamLimits

0x52ea,	// (0x000525e3) list_double_time_pane_t4

0x0003,

0xf675,	// (0x0005c96e) list_double_time_pane_t_ParamLimits

0xf675,	// (0x0005c96e) list_double_time_pane_t

0x52fc,	// (0x000525f5) list_setting_pane_g1_ParamLimits

0x52fc,	// (0x000525f5) list_setting_pane_g1

0x5308,	// (0x00052601) list_setting_pane_g2_ParamLimits

0x5308,	// (0x00052601) list_setting_pane_g2

0x0001,

0xf67e,	// (0x0005c977) list_setting_pane_g_ParamLimits

0xf67e,	// (0x0005c977) list_setting_pane_g

0x5314,	// (0x0005260d) list_setting_pane_t1_ParamLimits

0x5314,	// (0x0005260d) list_setting_pane_t1

0x532e,	// (0x00052627) list_setting_pane_t2_ParamLimits

0x532e,	// (0x00052627) list_setting_pane_t2

0x0002,

0xf683,	// (0x0005c97c) list_setting_pane_t_ParamLimits

0xf683,	// (0x0005c97c) list_setting_pane_t

0x536d,	// (0x00052666) set_value_pane_cp_ParamLimits

0x536d,	// (0x00052666) set_value_pane_cp

0x537b,	// (0x00052674) list_setting_number_pane_g1_ParamLimits

0x537b,	// (0x00052674) list_setting_number_pane_g1

0x5387,	// (0x00052680) list_setting_number_pane_g2_ParamLimits

0x5387,	// (0x00052680) list_setting_number_pane_g2

0x0001,

0xf68a,	// (0x0005c983) list_setting_number_pane_g_ParamLimits

0xf68a,	// (0x0005c983) list_setting_number_pane_g

0x5393,	// (0x0005268c) list_setting_number_pane_t1_ParamLimits

0x5393,	// (0x0005268c) list_setting_number_pane_t1

0x53ac,	// (0x000526a5) list_setting_number_pane_t2_ParamLimits

0x53ac,	// (0x000526a5) list_setting_number_pane_t2

0x53c6,	// (0x000526bf) list_setting_number_pane_t3_ParamLimits

0x53c6,	// (0x000526bf) list_setting_number_pane_t3

0x0003,

0xf68f,	// (0x0005c988) list_setting_number_pane_t_ParamLimits

0xf68f,	// (0x0005c988) list_setting_number_pane_t

0x536d,	// (0x00052666) set_value_pane_ParamLimits

0x536d,	// (0x00052666) set_value_pane

0x7d56,	// (0x0005504f) bg_set_opt_pane_ParamLimits

0x7d56,	// (0x0005504f) bg_set_opt_pane

0x5409,	// (0x00052702) set_value_pane_t1

0x7d77,	// (0x00055070) slider_set_pane_cp3

0x7d80,	// (0x00055079) volume_small_pane_cp

0x7d89,	// (0x00055082) list_form_gen_pane

0x7d92,	// (0x0005508b) scroll_pane_cp8

0x541f,	// (0x00052718) form_field_data_pane_ParamLimits

0x541f,	// (0x00052718) form_field_data_pane

0x5447,	// (0x00052740) form_field_data_wide_pane_ParamLimits

0x5447,	// (0x00052740) form_field_data_wide_pane

0x546e,	// (0x00052767) form_field_popup_pane_ParamLimits

0x546e,	// (0x00052767) form_field_popup_pane

0x5490,	// (0x00052789) form_field_popup_wide_pane_ParamLimits

0x5490,	// (0x00052789) form_field_popup_wide_pane

0x54b1,	// (0x000527aa) form_field_slider_pane_ParamLimits

0x54b1,	// (0x000527aa) form_field_slider_pane

0x54c4,	// (0x000527bd) form_field_slider_wide_pane_ParamLimits

0x54c4,	// (0x000527bd) form_field_slider_wide_pane

0x7da3,	// (0x0005509c) data_form_pane

0x54e1,	// (0x000527da) form_field_data_pane_t1

0x7daf,	// (0x000550a8) input_focus_pane

0x7dbd,	// (0x000550b6) data_form_wide_pane

0x5507,	// (0x00052800) form_field_data_wide_pane_t1

0x7a74,	// (0x00054d6d) input_focus_pane_cp6

0x5529,	// (0x00052822) form_field_popup_pane_t1

0x7daf,	// (0x000550a8) input_focus_pane_cp7

0x7de9,	// (0x000550e2) list_form_pane

0x554b,	// (0x00052844) form_field_popup_wide_pane_t1

0x7daf,	// (0x000550a8) input_focus_pane_cp8

0x7df5,	// (0x000550ee) list_form_wide_pane

0x5568,	// (0x00052861) form_field_slider_pane_t1_ParamLimits

0x5568,	// (0x00052861) form_field_slider_pane_t1

0x5580,	// (0x00052879) form_field_slider_pane_t2_ParamLimits

0x5580,	// (0x00052879) form_field_slider_pane_t2

0x0001,

0xf69f,	// (0x0005c998) form_field_slider_pane_t_ParamLimits

0xf69f,	// (0x0005c998) form_field_slider_pane_t

0x76f8,	// (0x000549f1) input_focus_pane_cp9_ParamLimits

0x76f8,	// (0x000549f1) input_focus_pane_cp9

0x5595,	// (0x0005288e) slider_cont_pane_ParamLimits

0x5595,	// (0x0005288e) slider_cont_pane

0x7e04,	// (0x000550fd) form_field_slider_wide_pane_t1_ParamLimits

0x7e04,	// (0x000550fd) form_field_slider_wide_pane_t1

0x55a9,	// (0x000528a2) form_field_slider_wide_pane_t2_ParamLimits

0x55a9,	// (0x000528a2) form_field_slider_wide_pane_t2

0x0001,

0xf6a4,	// (0x0005c99d) form_field_slider_wide_pane_t_ParamLimits

0xf6a4,	// (0x0005c99d) form_field_slider_wide_pane_t

0x76f8,	// (0x000549f1) input_focus_pane_cp10_ParamLimits

0x76f8,	// (0x000549f1) input_focus_pane_cp10

0x55bb,	// (0x000528b4) slider_cont_pane_cp1_ParamLimits

0x55bb,	// (0x000528b4) slider_cont_pane_cp1

0x55cf,	// (0x000528c8) slider_form_pane_cp

0x7e16,	// (0x0005510f) input_focus_pane_g1

0x7e1e,	// (0x00055117) input_focus_pane_g2

0x7e26,	// (0x0005511f) input_focus_pane_g3

0x7e2e,	// (0x00055127) input_focus_pane_g4

0x7e36,	// (0x0005512f) input_focus_pane_g5

0x7e3e,	// (0x00055137) input_focus_pane_g6

0x7e46,	// (0x0005513f) input_focus_pane_g7

0x7e4e,	// (0x00055147) input_focus_pane_g8

0x7e56,	// (0x0005514f) input_focus_pane_g9

0x25b9,	// (0x0004f8b2) input_focus_pane_g10

0x0009,

0xf6a9,	// (0x0005c9a2) input_focus_pane_g

0xa0d1,	// (0x000573ca) wait_border_pane_g3_copy1

0x55d7,	// (0x000528d0) data_form_pane_t1

0x25b9,	// (0x0004f8b2) wait_anim_pane_g1_copy1

0x60e1,	// (0x000533da) data_form_wide_pane_t1

0x55f6,	// (0x000528ef) list_form_graphic_pane_cp_ParamLimits

0x55f6,	// (0x000528ef) list_form_graphic_pane_cp

0xb056,	// (0x0005834f) slider_form_pane_g1

0xb05f,	// (0x00058358) slider_form_pane_g2

0x0006,

0xf9a5,	// (0x0005cc9e) slider_form_pane_g

0x55f6,	// (0x000528ef) list_form_graphic_pane_ParamLimits

0x55f6,	// (0x000528ef) list_form_graphic_pane

0x5608,	// (0x00052901) list_form_graphic_pane_g1

0x5610,	// (0x00052909) list_form_graphic_pane_t1_ParamLimits

0x5610,	// (0x00052909) list_form_graphic_pane_t1

0x747c,	// (0x00054775) list_highlight_pane_cp5_ParamLimits

0x747c,	// (0x00054775) list_highlight_pane_cp5

0x7e5e,	// (0x00055157) find_pane_g1

0x7e67,	// (0x00055160) input_find_pane

0x5625,	// (0x0005291e) input_find_pane_g1_ParamLimits

0x5625,	// (0x0005291e) input_find_pane_g1

0x5631,	// (0x0005292a) input_find_pane_t1_ParamLimits

0x5631,	// (0x0005292a) input_find_pane_t1

0x5646,	// (0x0005293f) input_find_pane_t2_ParamLimits

0x5646,	// (0x0005293f) input_find_pane_t2

0x0001,

0xf6be,	// (0x0005c9b7) input_find_pane_t_ParamLimits

0xf6be,	// (0x0005c9b7) input_find_pane_t

0x7e70,	// (0x00055169) input_focus_pane_cp5_ParamLimits

0x7e70,	// (0x00055169) input_focus_pane_cp5

0x7e8a,	// (0x00055183) bg_popup_window_pane_cp2_ParamLimits

0x7e8a,	// (0x00055183) bg_popup_window_pane_cp2

0x7e97,	// (0x00055190) listscroll_menu_pane_ParamLimits

0x7e97,	// (0x00055190) listscroll_menu_pane

0x7ea3,	// (0x0005519c) popup_submenu_window_ParamLimits

0x7ea3,	// (0x0005519c) popup_submenu_window

0x7ed3,	// (0x000551cc) find_popup_pane_g1

0x7edb,	// (0x000551d4) input_popup_find_pane_cp

0x7e70,	// (0x00055169) input_focus_pane_cp4_ParamLimits

0x7e70,	// (0x00055169) input_focus_pane_cp4

0x7ef3,	// (0x000551ec) input_popup_find_pane_t1_ParamLimits

0x7ef3,	// (0x000551ec) input_popup_find_pane_t1

0x25c3,	// (0x0004f8bc) bg_popup_sub_pane_cp

0x7f21,	// (0x0005521a) listscroll_popup_sub_pane

0x7f29,	// (0x00055222) list_submenu_pane_ParamLimits

0x7f29,	// (0x00055222) list_submenu_pane

0x7f3a,	// (0x00055233) scroll_pane_cp4

0x7f42,	// (0x0005523b) list_single_popup_submenu_pane_ParamLimits

0x7f42,	// (0x0005523b) list_single_popup_submenu_pane

0x7f57,	// (0x00055250) list_single_popup_submenu_pane_g1

0x7f5f,	// (0x00055258) list_single_popup_submenu_pane_t1_ParamLimits

0x7f5f,	// (0x00055258) list_single_popup_submenu_pane_t1

0x747c,	// (0x00054775) bg_active_tab_pane_cp1_ParamLimits

0x747c,	// (0x00054775) bg_active_tab_pane_cp1

0x7f74,	// (0x0005526d) tabs_2_active_pane_g1

0x7f7c,	// (0x00055275) tabs_2_active_pane_t1

0x747c,	// (0x00054775) bg_passive_tab_pane_cp1_ParamLimits

0x747c,	// (0x00054775) bg_passive_tab_pane_cp1

0x7f74,	// (0x0005526d) tabs_2_passive_pane_g1

0x7f7c,	// (0x00055275) tabs_2_passive_pane_t1

0x7f8e,	// (0x00055287) bg_active_tab_pane_cp4

0x7f9c,	// (0x00055295) tabs_2_long_active_pane_t1

0x7faf,	// (0x000552a8) bg_passive_tab_pane_cp4

0x5d3a,	// (0x00053033) list_single_midp_graphic_pane_g4_ParamLimits

0x7f8e,	// (0x00055287) bg_active_tab_pane_cp5

0x7fbb,	// (0x000552b4) tabs_3_long_active_pane_t1

0x7faf,	// (0x000552a8) bg_passive_tab_pane_cp5

0x5d3a,	// (0x00053033) list_single_midp_graphic_pane_g4

0x747c,	// (0x00054775) bg_popup_window_pane_cp13_ParamLimits

0x747c,	// (0x00054775) bg_popup_window_pane_cp13

0x7fd6,	// (0x000552cf) listscroll_popup_fast_pane_ParamLimits

0x7fd6,	// (0x000552cf) listscroll_popup_fast_pane

0x7fe5,	// (0x000552de) grid_popup_fast_pane_ParamLimits

0x7fe5,	// (0x000552de) grid_popup_fast_pane

0x7ff7,	// (0x000552f0) scroll_pane_cp9_ParamLimits

0x7ff7,	// (0x000552f0) scroll_pane_cp9

0xc8f5,	// (0x00059bee) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc8f5,	// (0x00059bee) list_single_graphic_hl_pane_t1_cp2

0x801b,	// (0x00055314) input_focus_pane_cp20_ParamLimits

0x801b,	// (0x00055314) input_focus_pane_cp20

0x8029,	// (0x00055322) query_popup_data_pane_t1_ParamLimits

0x8029,	// (0x00055322) query_popup_data_pane_t1

0x803c,	// (0x00055335) query_popup_data_pane_t2_ParamLimits

0x803c,	// (0x00055335) query_popup_data_pane_t2

0x8082,	// (0x0005537b) query_popup_data_pane_t3_ParamLimits

0x8082,	// (0x0005537b) query_popup_data_pane_t3

0x80c3,	// (0x000553bc) query_popup_data_pane_t4_ParamLimits

0x80c3,	// (0x000553bc) query_popup_data_pane_t4

0x82c4,	// (0x000555bd) query_popup_data_pane_t5_ParamLimits

0x82c4,	// (0x000555bd) query_popup_data_pane_t5

0x0004,

0xf6c3,	// (0x0005c9bc) query_popup_data_pane_t_ParamLimits

0xf6c3,	// (0x0005c9bc) query_popup_data_pane_t

0x7e16,	// (0x0005510f) bg_set_opt_pane_g1

0x7e1e,	// (0x00055117) bg_set_opt_pane_g2

0x7e26,	// (0x0005511f) bg_set_opt_pane_g3

0x7e2e,	// (0x00055127) bg_set_opt_pane_g4

0x7e36,	// (0x0005512f) bg_set_opt_pane_g5

0x7e3e,	// (0x00055137) bg_set_opt_pane_g6

0x7e46,	// (0x0005513f) bg_set_opt_pane_g7

0x7e4e,	// (0x00055147) bg_set_opt_pane_g8

0x7e56,	// (0x0005514f) bg_set_opt_pane_g9

0x0008,

0xf6ce,	// (0x0005c9c7) bg_set_opt_pane_g

0x596c,	// (0x00052c65) control_top_pane_stacon_ParamLimits

0x596c,	// (0x00052c65) control_top_pane_stacon

0x59bf,	// (0x00052cb8) signal_pane_stacon_ParamLimits

0x59bf,	// (0x00052cb8) signal_pane_stacon

0x889b,	// (0x00055b94) stacon_top_pane_g1_ParamLimits

0x889b,	// (0x00055b94) stacon_top_pane_g1

0x59e4,	// (0x00052cdd) title_pane_stacon_ParamLimits

0x59e4,	// (0x00052cdd) title_pane_stacon

0x5a0e,	// (0x00052d07) uni_indicator_pane_stacon_ParamLimits

0x5a0e,	// (0x00052d07) uni_indicator_pane_stacon

0x5a26,	// (0x00052d1f) battery_pane_stacon_ParamLimits

0x5a26,	// (0x00052d1f) battery_pane_stacon

0x5a6a,	// (0x00052d63) control_bottom_pane_stacon_ParamLimits

0x5a6a,	// (0x00052d63) control_bottom_pane_stacon

0x5a8d,	// (0x00052d86) navi_pane_stacon_ParamLimits

0x5a8d,	// (0x00052d86) navi_pane_stacon

0x88bd,	// (0x00055bb6) stacon_bottom_pane_g1_ParamLimits

0x88bd,	// (0x00055bb6) stacon_bottom_pane_g1

0x565b,	// (0x00052954) aid_levels_signal_lsc_ParamLimits

0x565b,	// (0x00052954) aid_levels_signal_lsc

0x5672,	// (0x0005296b) signal_pane_stacon_g1_ParamLimits

0x5672,	// (0x0005296b) signal_pane_stacon_g1

0x5686,	// (0x0005297f) signal_pane_stacon_g2_ParamLimits

0x5686,	// (0x0005297f) signal_pane_stacon_g2

0x0001,

0xf6e1,	// (0x0005c9da) signal_pane_stacon_g_ParamLimits

0xf6e1,	// (0x0005c9da) signal_pane_stacon_g

0x56bb,	// (0x000529b4) title_pane_stacon_t1_ParamLimits

0x56bb,	// (0x000529b4) title_pane_stacon_t1

0x8308,	// (0x00055601) uni_indicator_pane_stacon_g1

0x8312,	// (0x0005560b) uni_indicator_pane_stacon_g2

0x831c,	// (0x00055615) uni_indicator_pane_stacon_g3

0x8326,	// (0x0005561f) uni_indicator_pane_stacon_g4

0x0003,

0xf6ed,	// (0x0005c9e6) uni_indicator_pane_stacon_g

0x56e0,	// (0x000529d9) control_top_pane_stacon_g1

0x56e8,	// (0x000529e1) control_top_pane_stacon_t1_ParamLimits

0x56e8,	// (0x000529e1) control_top_pane_stacon_t1

0x571f,	// (0x00052a18) aid_levels_battery_lsc_ParamLimits

0x571f,	// (0x00052a18) aid_levels_battery_lsc

0x5737,	// (0x00052a30) battery_pane_stacon_g1_ParamLimits

0x5737,	// (0x00052a30) battery_pane_stacon_g1

0x574a,	// (0x00052a43) battery_pane_stacon_g2_ParamLimits

0x574a,	// (0x00052a43) battery_pane_stacon_g2

0x0001,

0xf6f6,	// (0x0005c9ef) battery_pane_stacon_g_ParamLimits

0xf6f6,	// (0x0005c9ef) battery_pane_stacon_g

0x5788,	// (0x00052a81) navi_icon_pane_stacon

0x579c,	// (0x00052a95) navi_navi_pane_stacon

0x5788,	// (0x00052a81) navi_text_pane_stacon

0x56e0,	// (0x000529d9) control_bottom_pane_stacon_g1

0x57b2,	// (0x00052aab) control_bottom_pane_stacon_t1_ParamLimits

0x57b2,	// (0x00052aab) control_bottom_pane_stacon_t1

0x834a,	// (0x00055643) grid_app_pane_ParamLimits

0x834a,	// (0x00055643) grid_app_pane

0x836e,	// (0x00055667) scroll_pane_cp15_ParamLimits

0x836e,	// (0x00055667) scroll_pane_cp15

0x8383,	// (0x0005567c) cell_app_pane_ParamLimits

0x8383,	// (0x0005567c) cell_app_pane

0x83af,	// (0x000556a8) cell_app_pane_g1_ParamLimits

0x83af,	// (0x000556a8) cell_app_pane_g1

0x83d3,	// (0x000556cc) cell_app_pane_g2_ParamLimits

0x83d3,	// (0x000556cc) cell_app_pane_g2

0x0001,

0xf6fb,	// (0x0005c9f4) cell_app_pane_g_ParamLimits

0xf6fb,	// (0x0005c9f4) cell_app_pane_g

0x83df,	// (0x000556d8) cell_app_pane_t1_ParamLimits

0x83df,	// (0x000556d8) cell_app_pane_t1

0x83f1,	// (0x000556ea) grid_highlight_pane_ParamLimits

0x83f1,	// (0x000556ea) grid_highlight_pane

0x7e16,	// (0x0005510f) cell_highlight_pane_g1

0x7e1e,	// (0x00055117) cell_highlight_pane_g2

0x7e26,	// (0x0005511f) cell_highlight_pane_g3

0x7e2e,	// (0x00055127) cell_highlight_pane_g4

0x7e36,	// (0x0005512f) cell_highlight_pane_g5

0x7e3e,	// (0x00055137) cell_highlight_pane_g6

0x7e46,	// (0x0005513f) cell_highlight_pane_g7

0x7e4e,	// (0x00055147) cell_highlight_pane_g8

0x7e56,	// (0x0005514f) cell_highlight_pane_g9

0x25b9,	// (0x0004f8b2) cell_highlight_pane_g10

0x0009,

0xf6a9,	// (0x0005c9a2) cell_highlight_pane_g

0x8402,	// (0x000556fb) bg_scroll_pane

0x57fc,	// (0x00052af5) scroll_handle_pane

0x8449,	// (0x00055742) scroll_bg_pane_g1

0x845e,	// (0x00055757) scroll_bg_pane_g2

0x8476,	// (0x0005576f) scroll_bg_pane_g3

0x0002,

0xf700,	// (0x0005c9f9) scroll_bg_pane_g

0x848b,	// (0x00055784) scroll_handle_focus_pane_ParamLimits

0x848b,	// (0x00055784) scroll_handle_focus_pane

0x8449,	// (0x00055742) scroll_handle_pane_g1

0x8498,	// (0x00055791) scroll_handle_pane_g2

0x8476,	// (0x0005576f) scroll_handle_pane_g3

0x0002,

0xf707,	// (0x0005ca00) scroll_handle_pane_g

0x7e70,	// (0x00055169) bg_popup_sub_pane_cp21_ParamLimits

0x7e70,	// (0x00055169) bg_popup_sub_pane_cp21

0x84ac,	// (0x000557a5) popup_fep_japan_predictive_window_t1_ParamLimits

0x84ac,	// (0x000557a5) popup_fep_japan_predictive_window_t1

0x84c3,	// (0x000557bc) popup_fep_japan_predictive_window_t2_ParamLimits

0x84c3,	// (0x000557bc) popup_fep_japan_predictive_window_t2

0x84f6,	// (0x000557ef) popup_fep_japan_predictive_window_t3_ParamLimits

0x84f6,	// (0x000557ef) popup_fep_japan_predictive_window_t3

0x0002,

0xf70e,	// (0x0005ca07) popup_fep_japan_predictive_window_t_ParamLimits

0xf70e,	// (0x0005ca07) popup_fep_japan_predictive_window_t

0x25c3,	// (0x0004f8bc) bg_popup_sub_pane_cp23

0x852d,	// (0x00055826) listscroll_japin_cand_pane

0x8535,	// (0x0005582e) popup_fep_japan_candidate_window_t1

0x8543,	// (0x0005583c) candidate_pane_ParamLimits

0x8543,	// (0x0005583c) candidate_pane

0x8555,	// (0x0005584e) scroll_pane_cp30

0x855f,	// (0x00055858) list_single_popup_jap_candidate_pane_ParamLimits

0x855f,	// (0x00055858) list_single_popup_jap_candidate_pane

0x25c3,	// (0x0004f8bc) list_highlight_pane_cp30

0x8573,	// (0x0005586c) list_single_popup_jap_candidate_pane_t1

0x8582,	// (0x0005587b) level_1_signal

0x858f,	// (0x00055888) level_2_signal

0x859c,	// (0x00055895) level_3_signal

0x85a9,	// (0x000558a2) level_4_signal

0x85b6,	// (0x000558af) level_5_signal

0x85c3,	// (0x000558bc) level_6_signal

0x85d0,	// (0x000558c9) level_7_signal

0x8582,	// (0x0005587b) level_1_battery

0x858f,	// (0x00055888) level_2_battery

0x859c,	// (0x00055895) level_3_battery

0x85a9,	// (0x000558a2) level_4_battery

0x85b6,	// (0x000558af) level_5_battery

0x85c3,	// (0x000558bc) level_6_battery

0x85d0,	// (0x000558c9) level_7_battery

0x85f5,	// (0x000558ee) list_menu_pane_ParamLimits

0x85f5,	// (0x000558ee) list_menu_pane

0x860b,	// (0x00055904) scroll_pane_cp25_ParamLimits

0x860b,	// (0x00055904) scroll_pane_cp25

0x8624,	// (0x0005591d) list_double2_graphic_pane_cp2_ParamLimits

0x8624,	// (0x0005591d) list_double2_graphic_pane_cp2

0x8624,	// (0x0005591d) list_double2_large_graphic_pane_cp2_ParamLimits

0x8624,	// (0x0005591d) list_double2_large_graphic_pane_cp2

0x8624,	// (0x0005591d) list_double2_pane_cp2_ParamLimits

0x8624,	// (0x0005591d) list_double2_pane_cp2

0x8624,	// (0x0005591d) list_double_graphic_pane_cp2_ParamLimits

0x8624,	// (0x0005591d) list_double_graphic_pane_cp2

0x8624,	// (0x0005591d) list_double_large_graphic_pane_cp2_ParamLimits

0x8624,	// (0x0005591d) list_double_large_graphic_pane_cp2

0x8624,	// (0x0005591d) list_double_number_pane_cp2_ParamLimits

0x8624,	// (0x0005591d) list_double_number_pane_cp2

0x8624,	// (0x0005591d) list_double_pane_cp2_ParamLimits

0x8624,	// (0x0005591d) list_double_pane_cp2

0x864a,	// (0x00055943) list_single_2graphic_pane_cp2_ParamLimits

0x864a,	// (0x00055943) list_single_2graphic_pane_cp2

0x864a,	// (0x00055943) list_single_graphic_heading_pane_cp2_ParamLimits

0x864a,	// (0x00055943) list_single_graphic_heading_pane_cp2

0x864a,	// (0x00055943) list_single_graphic_pane_cp2_ParamLimits

0x864a,	// (0x00055943) list_single_graphic_pane_cp2

0x864a,	// (0x00055943) list_single_heading_pane_cp2_ParamLimits

0x864a,	// (0x00055943) list_single_heading_pane_cp2

0x8667,	// (0x00055960) list_single_large_graphic_pane_cp2_ParamLimits

0x8667,	// (0x00055960) list_single_large_graphic_pane_cp2

0x864a,	// (0x00055943) list_single_number_heading_pane_cp2_ParamLimits

0x864a,	// (0x00055943) list_single_number_heading_pane_cp2

0x864a,	// (0x00055943) list_single_number_pane_cp2_ParamLimits

0x864a,	// (0x00055943) list_single_number_pane_cp2

0x864a,	// (0x00055943) list_single_pane_cp2_ParamLimits

0x864a,	// (0x00055943) list_single_pane_cp2

0x86e2,	// (0x000559db) bg_popup_sub_pane_cp22

0x58ae,	// (0x00052ba7) popup_side_volume_key_window_g1

0x58d8,	// (0x00052bd1) popup_side_volume_key_window_t1

0x58f6,	// (0x00052bef) volume_small_pane_cp1

0x76f8,	// (0x000549f1) bg_popup_sub_pane_cp24_ParamLimits

0x76f8,	// (0x000549f1) bg_popup_sub_pane_cp24

0x86f8,	// (0x000559f1) fep_china_uni_candidate_pane_ParamLimits

0x86f8,	// (0x000559f1) fep_china_uni_candidate_pane

0x870c,	// (0x00055a05) fep_china_uni_entry_pane

0x871c,	// (0x00055a15) popup_fep_china_uni_window_g1

0x8738,	// (0x00055a31) fep_china_uni_entry_pane_g1

0x8742,	// (0x00055a3b) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x0005ca38) fep_china_uni_entry_pane_g

0x874c,	// (0x00055a45) fep_entry_item_pane

0x8756,	// (0x00055a4f) fep_candidate_item_pane

0x875e,	// (0x00055a57) fep_china_uni_candidate_pane_g1

0x8768,	// (0x00055a61) fep_china_uni_candidate_pane_g2

0x8770,	// (0x00055a69) fep_china_uni_candidate_pane_g3

0x8778,	// (0x00055a71) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x0005ca3d) fep_china_uni_candidate_pane_g

0x25b9,	// (0x0004f8b2) fep_entry_item_pane_g1

0x8782,	// (0x00055a7b) fep_entry_item_pane_t1_ParamLimits

0x8782,	// (0x00055a7b) fep_entry_item_pane_t1

0x8798,	// (0x00055a91) fep_candidate_item_pane_t1_ParamLimits

0x8798,	// (0x00055a91) fep_candidate_item_pane_t1

0x87ad,	// (0x00055aa6) fep_candidate_item_pane_t2_ParamLimits

0x87ad,	// (0x00055aa6) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x0005ca46) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x0005ca46) fep_candidate_item_pane_t

0x747c,	// (0x00054775) list_highlight_pane_cp31_ParamLimits

0x747c,	// (0x00054775) list_highlight_pane_cp31

0x87bf,	// (0x00055ab8) level_1_signal_lsc

0x87c8,	// (0x00055ac1) level_2_signal_lsc

0x87d1,	// (0x00055aca) level_3_signal_lsc

0x87da,	// (0x00055ad3) level_4_signal_lsc

0x87e3,	// (0x00055adc) level_5_signal_lsc

0x87ec,	// (0x00055ae5) level_6_signal_lsc

0x87f5,	// (0x00055aee) level_7_signal_lsc

0x87f5,	// (0x00055aee) level_1_battery_lsc

0x87fe,	// (0x00055af7) level_2_battery_lsc

0x8807,	// (0x00055b00) level_3_battery_lsc

0x8810,	// (0x00055b09) level_4_battery_lsc

0x8819,	// (0x00055b12) level_5_battery_lsc

0x8822,	// (0x00055b1b) level_6_battery_lsc

0x87bf,	// (0x00055ab8) level_7_battery_lsc

0x882b,	// (0x00055b24) scroll_handle_focus_pane_g1

0x8834,	// (0x00055b2d) scroll_handle_focus_pane_g2

0x883d,	// (0x00055b36) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x0005ca4b) scroll_handle_focus_pane_g

0x58fe,	// (0x00052bf7) list_single_2graphic_pane_g1_ParamLimits

0x58fe,	// (0x00052bf7) list_single_2graphic_pane_g1

0x7cd4,	// (0x00054fcd) list_single_2graphic_pane_g2_ParamLimits

0x7cd4,	// (0x00054fcd) list_single_2graphic_pane_g2

0x7cb6,	// (0x00054faf) list_single_2graphic_pane_g3_ParamLimits

0x7cb6,	// (0x00054faf) list_single_2graphic_pane_g3

0x80ff,	// (0x000553f8) list_single_2graphic_pane_g4_ParamLimits

0x80ff,	// (0x000553f8) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x0005ca52) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x0005ca52) list_single_2graphic_pane_g

0x590a,	// (0x00052c03) list_single_2graphic_pane_t1_ParamLimits

0x590a,	// (0x00052c03) list_single_2graphic_pane_t1

0x810b,	// (0x00055404) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x810b,	// (0x00055404) list_double2_graphic_large_graphic_pane_g1

0x51e1,	// (0x000524da) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x51e1,	// (0x000524da) list_double2_graphic_large_graphic_pane_g2

0x512e,	// (0x00052427) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x512e,	// (0x00052427) list_double2_graphic_large_graphic_pane_g3

0x5938,	// (0x00052c31) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5938,	// (0x00052c31) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x0005ca5b) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x0005ca5b) list_double2_graphic_large_graphic_pane_g

0x5944,	// (0x00052c3d) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5944,	// (0x00052c3d) list_double2_graphic_large_graphic_pane_t1

0x595a,	// (0x00052c53) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x595a,	// (0x00052c53) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x0005ca64) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x0005ca64) list_double2_graphic_large_graphic_pane_t

0x897f,	// (0x00055c78) popup_fast_swap_window_ParamLimits

0x897f,	// (0x00055c78) popup_fast_swap_window

0x899d,	// (0x00055c96) popup_side_volume_key_window

0x89bb,	// (0x00055cb4) stacon_top_pane

0x89c5,	// (0x00055cbe) status_pane_ParamLimits

0x89c5,	// (0x00055cbe) status_pane

0x89bb,	// (0x00055cb4) status_small_pane

0x25c3,	// (0x0004f8bc) control_pane

0x25c3,	// (0x0004f8bc) stacon_bottom_pane

0x7d92,	// (0x0005508b) scroll_pane_cp121

0x7d89,	// (0x00055082) set_content_pane

0x8846,	// (0x00055b3f) bg_active_tab_pane_g1_cp1

0x884f,	// (0x00055b48) bg_active_tab_pane_g2_cp1

0x8858,	// (0x00055b51) bg_active_tab_pane_g3_cp1

0x8846,	// (0x00055b3f) bg_passive_tab_pane_g1_cp1

0x884f,	// (0x00055b48) bg_passive_tab_pane_g2_cp1

0x8858,	// (0x00055b51) bg_passive_tab_pane_g3_cp1

0x8861,	// (0x00055b5a) bg_active_tab_pane_g1_cp2

0x884f,	// (0x00055b48) bg_active_tab_pane_g2_cp2

0x886a,	// (0x00055b63) bg_active_tab_pane_g3_cp2

0x8861,	// (0x00055b5a) bg_passive_tab_pane_g1_cp2

0x884f,	// (0x00055b48) bg_passive_tab_pane_g2_cp2

0x886a,	// (0x00055b63) bg_passive_tab_pane_g3_cp2

0x8873,	// (0x00055b6c) bg_active_tab_pane_g1_cp3

0x884f,	// (0x00055b48) bg_active_tab_pane_g2_cp3

0x887c,	// (0x00055b75) bg_active_tab_pane_g3_cp3

0x8873,	// (0x00055b6c) bg_passive_tab_pane_g1_cp3

0x884f,	// (0x00055b48) bg_passive_tab_pane_g2_cp3

0x887c,	// (0x00055b75) bg_passive_tab_pane_g3_cp3

0x8885,	// (0x00055b7e) bg_active_tab_pane_g1_cp4

0x884f,	// (0x00055b48) bg_active_tab_pane_g2_cp4

0x8890,	// (0x00055b89) bg_active_tab_pane_g3_cp4

0x8885,	// (0x00055b7e) bg_passive_tab_pane_g1_cp4

0x884f,	// (0x00055b48) bg_passive_tab_pane_g2_cp4

0x8890,	// (0x00055b89) bg_passive_tab_pane_g3_cp4

0x88d9,	// (0x00055bd2) bg_active_tab_pane_g1_cp5

0x884f,	// (0x00055b48) bg_active_tab_pane_g2_cp5

0x88e2,	// (0x00055bdb) bg_active_tab_pane_g3_cp5

0x88d9,	// (0x00055bd2) bg_passive_tab_pane_g1_cp5

0x884f,	// (0x00055b48) bg_passive_tab_pane_g2_cp5

0x88e2,	// (0x00055bdb) bg_passive_tab_pane_g3_cp5

0x88eb,	// (0x00055be4) list_set_graphic_pane_ParamLimits

0x88eb,	// (0x00055be4) list_set_graphic_pane

0x25c3,	// (0x0004f8bc) bg_set_opt_pane_cp4

0x8900,	// (0x00055bf9) list_set_graphic_pane_g1_ParamLimits

0x8900,	// (0x00055bf9) list_set_graphic_pane_g1

0x890c,	// (0x00055c05) list_set_graphic_pane_g2_ParamLimits

0x890c,	// (0x00055c05) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x0005ca69) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x0005ca69) list_set_graphic_pane_g

0x0009,

0xfadf,	// (0x0005cdd8) volume_small_pane_cp_g

0x8930,	// (0x00055c29) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8930,	// (0x00055c29) list_double2_large_graphic_pane_g1_cp2

0x893e,	// (0x00055c37) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x893e,	// (0x00055c37) list_double2_large_graphic_pane_g2_cp2

0x894f,	// (0x00055c48) list_double2_large_graphic_pane_g3_cp2

0x8957,	// (0x00055c50) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8957,	// (0x00055c50) list_double2_large_graphic_pane_t1_cp2

0x896d,	// (0x00055c66) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x896d,	// (0x00055c66) list_double2_large_graphic_pane_t2_cp2

0xabbb,	// (0x00057eb4) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xabbb,	// (0x00057eb4) list_double_large_graphic_pane_g1_cp2

0xabce,	// (0x00057ec7) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xabce,	// (0x00057ec7) list_double_large_graphic_pane_g2_cp2

0x8ae3,	// (0x00055ddc) list_double_large_graphic_pane_g3_cp2

0xabdf,	// (0x00057ed8) list_double_large_graphic_pane_g4_cp

0xabe7,	// (0x00057ee0) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xabe7,	// (0x00057ee0) list_double_large_graphic_pane_t1_cp2

0xabfe,	// (0x00057ef7) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xabfe,	// (0x00057ef7) list_double_large_graphic_pane_t2_cp2

0x89d3,	// (0x00055ccc) list_double2_graphic_pane_g1_cp2_ParamLimits

0x89d3,	// (0x00055ccc) list_double2_graphic_pane_g1_cp2

0x89e1,	// (0x00055cda) list_double2_graphic_pane_g2_cp2_ParamLimits

0x89e1,	// (0x00055cda) list_double2_graphic_pane_g2_cp2

0x89f2,	// (0x00055ceb) list_double2_graphic_pane_g3_cp2

0x89fc,	// (0x00055cf5) list_double2_graphic_pane_t1_cp2_ParamLimits

0x89fc,	// (0x00055cf5) list_double2_graphic_pane_t1_cp2

0x8a12,	// (0x00055d0b) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8a12,	// (0x00055d0b) list_double2_graphic_pane_t2_cp2

0x8a24,	// (0x00055d1d) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8a24,	// (0x00055d1d) list_single_number_heading_pane_g1_cp2

0x8a30,	// (0x00055d29) list_single_number_heading_pane_g2_cp2

0x8a38,	// (0x00055d31) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8a38,	// (0x00055d31) list_single_number_heading_pane_t1_cp2

0x8a4e,	// (0x00055d47) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8a4e,	// (0x00055d47) list_single_number_heading_pane_t2_cp2

0x8a62,	// (0x00055d5b) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8a62,	// (0x00055d5b) list_single_number_heading_pane_t3_cp2

0x8a24,	// (0x00055d1d) list_single_heading_pane_g1_cp2_ParamLimits

0x8a24,	// (0x00055d1d) list_single_heading_pane_g1_cp2

0x8a30,	// (0x00055d29) list_single_heading_pane_g2_cp2

0x8a38,	// (0x00055d31) list_single_heading_pane_t1_cp2_ParamLimits

0x8a38,	// (0x00055d31) list_single_heading_pane_t1_cp2

0xa9b5,	// (0x00057cae) list_single_heading_pane_t2_cp2_ParamLimits

0xa9b5,	// (0x00057cae) list_single_heading_pane_t2_cp2

0xa8f7,	// (0x00057bf0) list_double_graphic_pane_g1_cp2_ParamLimits

0xa8f7,	// (0x00057bf0) list_double_graphic_pane_g1_cp2

0xa903,	// (0x00057bfc) list_double_graphic_pane_g2_cp2_ParamLimits

0xa903,	// (0x00057bfc) list_double_graphic_pane_g2_cp2

0xa912,	// (0x00057c0b) list_double_graphic_pane_g3_cp2

0xa91a,	// (0x00057c13) list_double_graphic_pane_t1_cp2_ParamLimits

0xa91a,	// (0x00057c13) list_double_graphic_pane_t1_cp2

0xa930,	// (0x00057c29) list_double_graphic_pane_t2_cp2_ParamLimits

0xa930,	// (0x00057c29) list_double_graphic_pane_t2_cp2

0x8ad7,	// (0x00055dd0) list_double_number_pane_g1_cp2_ParamLimits

0x8ad7,	// (0x00055dd0) list_double_number_pane_g1_cp2

0x8ae3,	// (0x00055ddc) list_double_number_pane_g2_cp2

0xa8bb,	// (0x00057bb4) list_double_number_pane_t1_cp2_ParamLimits

0xa8bb,	// (0x00057bb4) list_double_number_pane_t1_cp2

0xa8cf,	// (0x00057bc8) list_double_number_pane_t2_cp2_ParamLimits

0xa8cf,	// (0x00057bc8) list_double_number_pane_t2_cp2

0xa8e5,	// (0x00057bde) list_double_number_pane_t3_cp2_ParamLimits

0xa8e5,	// (0x00057bde) list_double_number_pane_t3_cp2

0xa7a4,	// (0x00057a9d) list_single_graphic_pane_g1_cp2_ParamLimits

0xa7a4,	// (0x00057a9d) list_single_graphic_pane_g1_cp2

0x8b3d,	// (0x00055e36) list_single_graphic_pane_g2_cp2_ParamLimits

0x8b3d,	// (0x00055e36) list_single_graphic_pane_g2_cp2

0x8b49,	// (0x00055e42) list_single_graphic_pane_g3_cp2

0xa77a,	// (0x00057a73) list_single_graphic_pane_t1_cp2_ParamLimits

0xa77a,	// (0x00057a73) list_single_graphic_pane_t1_cp2

0x8b3d,	// (0x00055e36) list_single_number_pane_g1_cp2_ParamLimits

0x8b3d,	// (0x00055e36) list_single_number_pane_g1_cp2

0x8b49,	// (0x00055e42) list_single_number_pane_g2_cp2

0xa77a,	// (0x00057a73) list_single_number_pane_t1_cp2_ParamLimits

0xa77a,	// (0x00057a73) list_single_number_pane_t1_cp2

0xa790,	// (0x00057a89) list_single_number_pane_t2_cp2_ParamLimits

0xa790,	// (0x00057a89) list_single_number_pane_t2_cp2

0x893e,	// (0x00055c37) list_double2_pane_g1_cp2_ParamLimits

0x893e,	// (0x00055c37) list_double2_pane_g1_cp2

0x894f,	// (0x00055c48) list_double2_pane_g2_cp2

0x8aaf,	// (0x00055da8) list_double2_pane_t1_cp2_ParamLimits

0x8aaf,	// (0x00055da8) list_double2_pane_t1_cp2

0x8ac5,	// (0x00055dbe) list_double2_pane_t2_cp2_ParamLimits

0x8ac5,	// (0x00055dbe) list_double2_pane_t2_cp2

0x8ad7,	// (0x00055dd0) list_double_pane_g1_cp2_ParamLimits

0x8ad7,	// (0x00055dd0) list_double_pane_g1_cp2

0x8ae3,	// (0x00055ddc) list_double_pane_g2_cp2

0x8aeb,	// (0x00055de4) list_double_pane_t1_cp2_ParamLimits

0x8aeb,	// (0x00055de4) list_double_pane_t1_cp2

0x8b01,	// (0x00055dfa) list_double_pane_t2_cp2_ParamLimits

0x8b01,	// (0x00055dfa) list_double_pane_t2_cp2

0x8b2d,	// (0x00055e26) list_single_pane_cp2_g3

0x8b3d,	// (0x00055e36) list_single_pane_g1_cp2_ParamLimits

0x8b3d,	// (0x00055e36) list_single_pane_g1_cp2

0x8b49,	// (0x00055e42) list_single_pane_g2_cp2

0x8b51,	// (0x00055e4a) list_single_pane_t1_cp2_ParamLimits

0x8b51,	// (0x00055e4a) list_single_pane_t1_cp2

0x8b69,	// (0x00055e62) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8b69,	// (0x00055e62) list_single_large_graphic_pane_g1_cp2

0x8b77,	// (0x00055e70) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8b77,	// (0x00055e70) list_single_large_graphic_pane_g2_cp2

0x8b83,	// (0x00055e7c) list_single_large_graphic_pane_g3_cp2

0x8b8b,	// (0x00055e84) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8b8b,	// (0x00055e84) list_single_large_graphic_pane_g4_cp1

0x8ba5,	// (0x00055e9e) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8ba5,	// (0x00055e9e) list_single_large_graphic_pane_t1_cp2

0xa744,	// (0x00057a3d) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa744,	// (0x00057a3d) list_single_graphic_heading_pane_g1_cp2

0xa711,	// (0x00057a0a) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa711,	// (0x00057a0a) list_single_graphic_heading_pane_g4_cp2

0x8b49,	// (0x00055e42) list_single_graphic_heading_pane_g5_cp2

0xa750,	// (0x00057a49) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa750,	// (0x00057a49) list_single_graphic_heading_pane_t1_cp2

0xa766,	// (0x00057a5f) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa766,	// (0x00057a5f) list_single_graphic_heading_pane_t2_cp2

0xa705,	// (0x000579fe) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa705,	// (0x000579fe) list_single_2graphic_pane_g1_cp2

0xa711,	// (0x00057a0a) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa711,	// (0x00057a0a) list_single_2graphic_pane_g2_cp2

0x8b49,	// (0x00055e42) list_single_2graphic_pane_g3_cp2

0xa722,	// (0x00057a1b) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa722,	// (0x00057a1b) list_single_2graphic_pane_g4_cp2

0xa72e,	// (0x00057a27) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa72e,	// (0x00057a27) list_single_2graphic_pane_t1_cp2

0x25b9,	// (0x0004f8b2) list_highlight_pane_g10_cp1

0xa2dd,	// (0x000575d6) list_highlight_pane_g1_cp1

0xa2e5,	// (0x000575de) list_highlight_pane_g2_cp1

0xa2ed,	// (0x000575e6) list_highlight_pane_g3_cp1

0xa2f5,	// (0x000575ee) list_highlight_pane_g4_cp1

0xa2fd,	// (0x000575f6) list_highlight_pane_g5_cp1

0xa305,	// (0x000575fe) list_highlight_pane_g6_cp1

0xa30d,	// (0x00057606) list_highlight_pane_g7_cp1

0xa315,	// (0x0005760e) list_highlight_pane_g8_cp1

0xa31d,	// (0x00057616) list_highlight_pane_g9_cp1

0xa1fd,	// (0x000574f6) form_field_slider_pane_t3

0xa20b,	// (0x00057504) form_field_slider_pane_t4

0xa219,	// (0x00057512) slider_form_pane_ParamLimits

0xa219,	// (0x00057512) slider_form_pane

0x25c3,	// (0x0004f8bc) control_abbreviations

0x25c3,	// (0x0004f8bc) control_conventions

0x25c3,	// (0x0004f8bc) control_definitions

0x25c3,	// (0x0004f8bc) format_table_attribute

0xaa0b,	// (0x00057d04) bg_popup_preview_window_pane_g9

0x25c3,	// (0x0004f8bc) format_table_data2

0x25c3,	// (0x0004f8bc) format_table_data3

0x25c3,	// (0x0004f8bc) format_table_data_example

0x0008,

0x25c3,	// (0x0004f8bc) intro_purpose

0xf905,	// (0x0005cbfe) bg_popup_preview_window_pane_g

0x25c3,	// (0x0004f8bc) texts_category

0x25c3,	// (0x0004f8bc) texts_graphics

0x8bbb,	// (0x00055eb4) text_digital

0x8bca,	// (0x00055ec3) text_primary

0x8bd9,	// (0x00055ed2) text_primary_small

0x8be8,	// (0x00055ee1) text_secondary

0x8bf7,	// (0x00055ef0) text_title

0xb1a7,	// (0x000584a0) bg_passive_tab_pane_g1_cp3_srt

0x884f,	// (0x00055b48) bg_passive_tab_pane_g2_cp3_srt

0xb1b0,	// (0x000584a9) bg_passive_tab_pane_g3_cp3_srt

0x747c,	// (0x00054775) bg_active_tab_pane_cp3_srt_ParamLimits

0x747c,	// (0x00054775) bg_active_tab_pane_cp3_srt

0xb1b9,	// (0x000584b2) tabs_4_active_pane_srt_g1

0xb1c1,	// (0x000584ba) tabs_4_active_pane_srt_t1_ParamLimits

0xb1c1,	// (0x000584ba) tabs_4_active_pane_srt_t1

0xb1a7,	// (0x000584a0) bg_active_tab_pane_g1_cp3_copy1

0x884f,	// (0x00055b48) bg_active_tab_pane_g2_cp3_copy1

0xb1b0,	// (0x000584a9) bg_active_tab_pane_g3_cp3_copy1

0x747c,	// (0x00054775) tabs_2_long_active_pane_srt_ParamLimits

0x747c,	// (0x00054775) tabs_2_long_active_pane_srt

0x747c,	// (0x00054775) tabs_2_long_passive_pane_srt_ParamLimits

0x747c,	// (0x00054775) tabs_2_long_passive_pane_srt

0x7faf,	// (0x000552a8) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7faf,	// (0x000552a8) bg_passive_tab_pane_cp4_srt

0xae5b,	// (0x00058154) bg_passive_tab_pane_g1_cp4_srt

0x884f,	// (0x00055b48) bg_passive_tab_pane_g2_cp4_srt

0xae64,	// (0x0005815d) bg_passive_tab_pane_g3_cp4_srt

0x7f8e,	// (0x00055287) bg_active_tab_pane_cp4_srt_ParamLimits

0x7f8e,	// (0x00055287) bg_active_tab_pane_cp4_srt

0xae6d,	// (0x00058166) tabs_2_long_active_pane_srt_t1_ParamLimits

0xae6d,	// (0x00058166) tabs_2_long_active_pane_srt_t1

0xae5b,	// (0x00058154) bg_active_tab_pane_g1_cp4_srt

0x884f,	// (0x00055b48) bg_active_tab_pane_g2_cp4_srt

0xae64,	// (0x0005815d) bg_active_tab_pane_g3_cp4_srt

0x76f8,	// (0x000549f1) tabs_3_long_active_pane_srt_ParamLimits

0x76f8,	// (0x000549f1) tabs_3_long_active_pane_srt

0x76f8,	// (0x000549f1) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x76f8,	// (0x000549f1) tabs_3_long_passive_pane_cp_srt

0x76f8,	// (0x000549f1) tabs_3_long_passive_pane_srt_ParamLimits

0x76f8,	// (0x000549f1) tabs_3_long_passive_pane_srt

0x7faf,	// (0x000552a8) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7faf,	// (0x000552a8) bg_passive_tab_pane_cp5_srt

0x88d9,	// (0x00055bd2) bg_passive_tab_pane_g1_cp5_srt

0x884f,	// (0x00055b48) bg_passive_tab_pane_g2_cp5_srt

0x88e2,	// (0x00055bdb) bg_passive_tab_pane_g3_cp5_srt

0x7f8e,	// (0x00055287) bg_active_tab_pane_cp5_srt_ParamLimits

0x7f8e,	// (0x00055287) bg_active_tab_pane_cp5_srt

0xae49,	// (0x00058142) tabs_3_long_active_pane_srt_t1_ParamLimits

0xae49,	// (0x00058142) tabs_3_long_active_pane_srt_t1

0x88d9,	// (0x00055bd2) bg_active_tab_pane_g1_cp5_srt

0x884f,	// (0x00055b48) bg_active_tab_pane_g2_cp5_srt

0x88e2,	// (0x00055bdb) bg_active_tab_pane_g3_cp5_srt

0xae3b,	// (0x00058134) navi_text_pane_srt_t1

0xae33,	// (0x0005812c) navi_icon_pane_srt_g1

0x8dce,	// (0x000560c7) midp_editing_number_pane_srt

0x8c06,	// (0x00055eff) midp_ticker_pane_srt

0x8dd6,	// (0x000560cf) midp_ticker_pane_srt_g1

0x8dde,	// (0x000560d7) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x0005ca88) midp_ticker_pane_srt_g

0x8de6,	// (0x000560df) midp_ticker_pane_srt_t1

0xae24,	// (0x0005811d) midp_editing_number_pane_t1_copy1

0x8c0e,	// (0x00055f07) listscroll_midp_pane

0x8c0e,	// (0x00055f07) midp_form_pane

0x8c7c,	// (0x00055f75) midp_info_popup_window_ParamLimits

0x8c7c,	// (0x00055f75) midp_info_popup_window

0x7e70,	// (0x00055169) bg_popup_sub_pane_cp50_ParamLimits

0x7e70,	// (0x00055169) bg_popup_sub_pane_cp50

0x9f13,	// (0x0005720c) listscroll_midp_info_pane_ParamLimits

0x9f13,	// (0x0005720c) listscroll_midp_info_pane

0x9efb,	// (0x000571f4) listscroll_form_midp_pane_ParamLimits

0x9efb,	// (0x000571f4) listscroll_form_midp_pane

0x9f07,	// (0x00057200) scroll_bar_cp050

0x9edb,	// (0x000571d4) list_midp_pane

0xbbf0,	// (0x00058ee9) signal_pane_g2_cp

0x9e15,	// (0x0005710e) listscroll_midp_info_pane_t1_ParamLimits

0x9e15,	// (0x0005710e) listscroll_midp_info_pane_t1

0x9e2d,	// (0x00057126) listscroll_midp_info_pane_t2_ParamLimits

0x9e2d,	// (0x00057126) listscroll_midp_info_pane_t2

0x9e6b,	// (0x00057164) listscroll_midp_info_pane_t3_ParamLimits

0x9e6b,	// (0x00057164) listscroll_midp_info_pane_t3

0x9ea5,	// (0x0005719e) listscroll_midp_info_pane_t4_ParamLimits

0x9ea5,	// (0x0005719e) listscroll_midp_info_pane_t4

0x0003,

0xf840,	// (0x0005cb39) listscroll_midp_info_pane_t_ParamLimits

0xf840,	// (0x0005cb39) listscroll_midp_info_pane_t

0x7f3a,	// (0x00055233) scroll_pane_cp21

0x9daf,	// (0x000570a8) form_midp_field_choice_group_pane

0x9db8,	// (0x000570b1) form_midp_field_text_pane

0x9dfb,	// (0x000570f4) form_midp_field_time_pane

0x9e03,	// (0x000570fc) form_midp_gauge_slider_pane

0x9e0c,	// (0x00057105) form_midp_gauge_wait_pane

0x25c3,	// (0x0004f8bc) form_midp_image_pane

0x5e5f,	// (0x00053158) list_single_midp_pane_ParamLimits

0x5e5f,	// (0x00053158) list_single_midp_pane

0x9d80,	// (0x00057079) form_midp_field_text_pane_t1

0x9bb3,	// (0x00056eac) input_focus_pane_cp050

0x9d9e,	// (0x00057097) list_midp_form_text_pane

0x9d4f,	// (0x00057048) form_midp_field_choice_group_pane_t1

0x9d5d,	// (0x00057056) input_focus_pane_cp051

0x9d71,	// (0x0005706a) list_midp_choice_pane

0x25c3,	// (0x0004f8bc) status_idle_pane

0x9d33,	// (0x0005702c) form_midp_field_time_pane_t1

0x25b9,	// (0x0004f8b2) wait_anim_pane_g2_copy1

0x9d41,	// (0x0005703a) form_midp_field_time_pane_t2

0x0001,

0x8d2c,	// (0x00056025) aid_navinavi_width_2_pane

0xf83b,	// (0x0005cb34) form_midp_field_time_pane_t

0x25c3,	// (0x0004f8bc) input_focus_pane_cp052

0x25c3,	// (0x0004f8bc) bg_input_focus_pane_cp040

0x9cf3,	// (0x00056fec) form_midp_gauge_slider_pane_t1

0x9d01,	// (0x00056ffa) form_midp_gauge_slider_pane_t2

0x9d0f,	// (0x00057008) form_midp_gauge_slider_pane_t3

0x9d1d,	// (0x00057016) form_midp_gauge_slider_pane_t4

0x0003,

0xf832,	// (0x0005cb2b) form_midp_gauge_slider_pane_t

0x9d2b,	// (0x00057024) form_midp_slider_pane

0x747c,	// (0x00054775) bg_input_focus_pane_cp041_ParamLimits

0x747c,	// (0x00054775) bg_input_focus_pane_cp041

0x9cc0,	// (0x00056fb9) form_midp_gauge_wait_pane_t1_ParamLimits

0x9cc0,	// (0x00056fb9) form_midp_gauge_wait_pane_t1

0x9cd2,	// (0x00056fcb) form_midp_gauge_wait_pane_t2_ParamLimits

0x9cd2,	// (0x00056fcb) form_midp_gauge_wait_pane_t2

0x0001,

0xf82d,	// (0x0005cb26) form_midp_gauge_wait_pane_t_ParamLimits

0xf82d,	// (0x0005cb26) form_midp_gauge_wait_pane_t

0x9ce4,	// (0x00056fdd) form_midp_wait_pane_ParamLimits

0x9ce4,	// (0x00056fdd) form_midp_wait_pane

0x9c8a,	// (0x00056f83) form_midp_image_pane_g1

0x9c93,	// (0x00056f8c) form_midp_image_pane_t1

0x9ca2,	// (0x00056f9b) form_midp_image_pane_t2

0x9cb1,	// (0x00056faa) form_midp_image_pane_t3

0x0002,

0xf826,	// (0x0005cb1f) form_midp_image_pane_t

0x9c81,	// (0x00056f7a) list_single_midp_pane_g1

0x5e50,	// (0x00053149) list_single_midp_pane_t1

0x9c70,	// (0x00056f69) list_midp_form_item_pane_ParamLimits

0x9c70,	// (0x00056f69) list_midp_form_item_pane

0x8cd4,	// (0x00055fcd) list_midp_form_item_pane_t1

0x8ce3,	// (0x00055fdc) midp_ticker_pane_g1

0x8cef,	// (0x00055fe8) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x0005ca6e) midp_ticker_pane_g

0x8cfb,	// (0x00055ff4) midp_ticker_pane_t1

0xb0a3,	// (0x0005839c) midp_editing_number_pane_t1

0xb081,	// (0x0005837a) midp_editing_number_pane

0xb090,	// (0x00058389) midp_ticker_pane

0xae14,	// (0x0005810d) ai_message_heading_pane

0x25c3,	// (0x0004f8bc) bg_popup_window_pane_cp14

0xae1c,	// (0x00058115) listscroll_ai_message_pane

0xad9a,	// (0x00058093) ai_message_heading_pane_g1_ParamLimits

0xad9a,	// (0x00058093) ai_message_heading_pane_g1

0xada6,	// (0x0005809f) ai_message_heading_pane_g2_ParamLimits

0xada6,	// (0x0005809f) ai_message_heading_pane_g2

0xadb4,	// (0x000580ad) ai_message_heading_pane_g3_ParamLimits

0xadb4,	// (0x000580ad) ai_message_heading_pane_g3

0xadc0,	// (0x000580b9) ai_message_heading_pane_g4_ParamLimits

0xadc0,	// (0x000580b9) ai_message_heading_pane_g4

0x0003,

0xf967,	// (0x0005cc60) ai_message_heading_pane_g_ParamLimits

0xf967,	// (0x0005cc60) ai_message_heading_pane_g

0xadcc,	// (0x000580c5) ai_message_heading_pane_t1_ParamLimits

0xadcc,	// (0x000580c5) ai_message_heading_pane_t1

0xade6,	// (0x000580df) ai_message_heading_pane_t2_ParamLimits

0xade6,	// (0x000580df) ai_message_heading_pane_t2

0x0001,

0xf970,	// (0x0005cc69) ai_message_heading_pane_t_ParamLimits

0xf970,	// (0x0005cc69) ai_message_heading_pane_t

0xadfa,	// (0x000580f3) bg_popup_heading_pane_cp1_ParamLimits

0xadfa,	// (0x000580f3) bg_popup_heading_pane_cp1

0xad88,	// (0x00058081) list_ai_message_pane_ParamLimits

0xad88,	// (0x00058081) list_ai_message_pane

0x7f3a,	// (0x00055233) scroll_pane_cp10

0xad24,	// (0x0005801d) list_ai_message_pane_g1

0xad2c,	// (0x00058025) list_ai_message_pane_g2

0x0001,

0xf944,	// (0x0005cc3d) list_ai_message_pane_g

0xad34,	// (0x0005802d) list_ai_message_pane_t1_ParamLimits

0xad34,	// (0x0005802d) list_ai_message_pane_t1

0xad49,	// (0x00058042) list_ai_message_pane_t2_ParamLimits

0xad49,	// (0x00058042) list_ai_message_pane_t2

0xad5e,	// (0x00058057) list_ai_message_pane_t3_ParamLimits

0xad5e,	// (0x00058057) list_ai_message_pane_t3

0xad73,	// (0x0005806c) list_ai_message_pane_t4_ParamLimits

0xad73,	// (0x0005806c) list_ai_message_pane_t4

0x0003,

0xf949,	// (0x0005cc42) list_ai_message_pane_t_ParamLimits

0xf949,	// (0x0005cc42) list_ai_message_pane_t

0xad0d,	// (0x00058006) cell_ai_soft_ind_pane_ParamLimits

0xad0d,	// (0x00058006) cell_ai_soft_ind_pane

0x8d0d,	// (0x00056006) cell_ai_soft_ind_pane_g1_ParamLimits

0x8d0d,	// (0x00056006) cell_ai_soft_ind_pane_g1

0x25c3,	// (0x0004f8bc) grid_highlight_cp1

0x8d1a,	// (0x00056013) text_secondary_cp56_ParamLimits

0x8d1a,	// (0x00056013) text_secondary_cp56

0xace2,	// (0x00057fdb) example_general_pane_ParamLimits

0xace2,	// (0x00057fdb) example_general_pane

0xacee,	// (0x00057fe7) example_parent_pane_g1_ParamLimits

0xacee,	// (0x00057fe7) example_parent_pane_g1

0xacfa,	// (0x00057ff3) example_parent_pane_t1_ParamLimits

0xacfa,	// (0x00057ff3) example_parent_pane_t1

0x9347,	// (0x00056640) popup_preview_text_window_ParamLimits

0x9347,	// (0x00056640) popup_preview_text_window

0x8b35,	// (0x00055e2e) list_single_pane_cp2_g4

0x77ae,	// (0x00054aa7) bg_popup_preview_window_pane_ParamLimits

0x77ae,	// (0x00054aa7) bg_popup_preview_window_pane

0xaa15,	// (0x00057d0e) popup_preview_text_window_t1_ParamLimits

0xaa15,	// (0x00057d0e) popup_preview_text_window_t1

0xaa33,	// (0x00057d2c) popup_preview_text_window_t2_ParamLimits

0xaa33,	// (0x00057d2c) popup_preview_text_window_t2

0xaa7c,	// (0x00057d75) popup_preview_text_window_t3_ParamLimits

0xaa7c,	// (0x00057d75) popup_preview_text_window_t3

0xaac1,	// (0x00057dba) popup_preview_text_window_t4_ParamLimits

0xaac1,	// (0x00057dba) popup_preview_text_window_t4

0x0004,

0xf918,	// (0x0005cc11) popup_preview_text_window_t_ParamLimits

0xf918,	// (0x0005cc11) popup_preview_text_window_t

0xab3f,	// (0x00057e38) scroll_pane_cp11

0x9ac1,	// (0x00056dba) bg_popup_preview_window_pane_g1

0xa9c9,	// (0x00057cc2) bg_popup_preview_window_pane_g2

0xa9d3,	// (0x00057ccc) bg_popup_preview_window_pane_g3

0xa9dd,	// (0x00057cd6) bg_popup_preview_window_pane_g4

0xa9e7,	// (0x00057ce0) bg_popup_preview_window_pane_g5

0xa9f1,	// (0x00057cea) bg_popup_preview_window_pane_g6

0xa9f9,	// (0x00057cf2) bg_popup_preview_window_pane_g7

0xaa01,	// (0x00057cfa) bg_popup_preview_window_pane_g8

0x4ad0,	// (0x00051dc9) aid_popup_width_pane

0x9323,	// (0x0005661c) popup_midp_note_alarm_window_ParamLimits

0x9323,	// (0x0005661c) popup_midp_note_alarm_window

0x7da3,	// (0x0005509c) data_form_pane_ParamLimits

0x54d7,	// (0x000527d0) form_field_data_pane_g1

0x54e1,	// (0x000527da) form_field_data_pane_t1_ParamLimits

0x7daf,	// (0x000550a8) input_focus_pane_ParamLimits

0x7dbd,	// (0x000550b6) data_form_wide_pane_ParamLimits

0x54fb,	// (0x000527f4) form_field_data_wide_pane_g1

0x5507,	// (0x00052800) form_field_data_wide_pane_t1_ParamLimits

0x7a74,	// (0x00054d6d) input_focus_pane_cp6_ParamLimits

0x7ee5,	// (0x000551de) input_popup_find_pane_g1_ParamLimits

0x7ee5,	// (0x000551de) input_popup_find_pane_g1

0x575b,	// (0x00052a54) aid_navi_side_left_pane

0x5770,	// (0x00052a69) aid_navi_side_right_pane

0xa3d8,	// (0x000576d1) bg_popup_window_pane_cp30_ParamLimits

0xa3d8,	// (0x000576d1) bg_popup_window_pane_cp30

0xa452,	// (0x0005774b) popup_midp_note_alarm_window_g1_ParamLimits

0xa452,	// (0x0005774b) popup_midp_note_alarm_window_g1

0xa482,	// (0x0005777b) popup_midp_note_alarm_window_t1_ParamLimits

0xa482,	// (0x0005777b) popup_midp_note_alarm_window_t1

0xa523,	// (0x0005781c) popup_midp_note_alarm_window_t2_ParamLimits

0xa523,	// (0x0005781c) popup_midp_note_alarm_window_t2

0xa5d1,	// (0x000578ca) popup_midp_note_alarm_window_t3_ParamLimits

0xa5d1,	// (0x000578ca) popup_midp_note_alarm_window_t3

0xa603,	// (0x000578fc) popup_midp_note_alarm_window_t4_ParamLimits

0xa603,	// (0x000578fc) popup_midp_note_alarm_window_t4

0xa629,	// (0x00057922) popup_midp_note_alarm_window_t5_ParamLimits

0xa629,	// (0x00057922) popup_midp_note_alarm_window_t5

0x000a,

0xf8b5,	// (0x0005cbae) popup_midp_note_alarm_window_t_ParamLimits

0xf8b5,	// (0x0005cbae) popup_midp_note_alarm_window_t

0xa6d5,	// (0x000579ce) wait_bar_pane_cp1_ParamLimits

0xa6d5,	// (0x000579ce) wait_bar_pane_cp1

0x25c3,	// (0x0004f8bc) wait_anim_pane_copy1

0x25c3,	// (0x0004f8bc) wait_border_pane_copy1

0xa0bd,	// (0x000573b6) wait_border_pane_g1_copy1

0x5521,	// (0x0005281a) form_field_popup_pane_g1

0x5529,	// (0x00052822) form_field_popup_pane_t1_ParamLimits

0x7daf,	// (0x000550a8) input_focus_pane_cp7_ParamLimits

0x7de9,	// (0x000550e2) list_form_pane_ParamLimits

0x5543,	// (0x0005283c) form_field_popup_wide_pane_g1

0x554b,	// (0x00052844) form_field_popup_wide_pane_t1_ParamLimits

0x7daf,	// (0x000550a8) input_focus_pane_cp8_ParamLimits

0x7df5,	// (0x000550ee) list_form_wide_pane_ParamLimits

0xb234,	// (0x0005852d) aid_size_cell_graphic_pane

0x55d7,	// (0x000528d0) data_form_pane_t1_ParamLimits

0x60e1,	// (0x000533da) data_form_wide_pane_t1_ParamLimits

0x966e,	// (0x00056967) bg_status_flat_pane

0x73dc,	// (0x000546d5) title_pane_t1_ParamLimits

0x7444,	// (0x0005473d) title_pane_t2_ParamLimits

0x746a,	// (0x00054763) title_pane_t3_ParamLimits

0xf56f,	// (0x0005c868) title_pane_t_ParamLimits

0x8582,	// (0x0005587b) level_1_signal_ParamLimits

0x858f,	// (0x00055888) level_2_signal_ParamLimits

0x859c,	// (0x00055895) level_3_signal_ParamLimits

0x85a9,	// (0x000558a2) level_4_signal_ParamLimits

0x85b6,	// (0x000558af) level_5_signal_ParamLimits

0x85c3,	// (0x000558bc) level_6_signal_ParamLimits

0x85d0,	// (0x000558c9) level_7_signal_ParamLimits

0x8582,	// (0x0005587b) level_1_battery_ParamLimits

0x858f,	// (0x00055888) level_2_battery_ParamLimits

0x859c,	// (0x00055895) level_3_battery_ParamLimits

0x85a9,	// (0x000558a2) level_4_battery_ParamLimits

0x85b6,	// (0x000558af) level_5_battery_ParamLimits

0x85c3,	// (0x000558bc) level_6_battery_ParamLimits

0x85d0,	// (0x000558c9) level_7_battery_ParamLimits

0xa2dd,	// (0x000575d6) bg_status_flat_pane_g1

0xa2e5,	// (0x000575de) bg_status_flat_pane_g2

0xa2ed,	// (0x000575e6) bg_status_flat_pane_g3

0xa2f5,	// (0x000575ee) bg_status_flat_pane_g4

0xa2fd,	// (0x000575f6) bg_status_flat_pane_g5

0xa305,	// (0x000575fe) bg_status_flat_pane_g6

0xa30d,	// (0x00057606) bg_status_flat_pane_g7

0x7492,	// (0x0005478b) tabs_3_active_pane_t1_ParamLimits

0x7492,	// (0x0005478b) tabs_3_passive_pane_t1_ParamLimits

0x74ac,	// (0x000547a5) tabs_4_active_pane_t1_ParamLimits

0x74ac,	// (0x000547a5) tabs_4_1_passive_pane_t1_ParamLimits

0x7f7c,	// (0x00055275) tabs_2_active_pane_t1_ParamLimits

0x7f7c,	// (0x00055275) tabs_2_passive_pane_t1_ParamLimits

0x7f8e,	// (0x00055287) bg_active_tab_pane_cp4_ParamLimits

0x7f9c,	// (0x00055295) tabs_2_long_active_pane_t1_ParamLimits

0x7faf,	// (0x000552a8) bg_passive_tab_pane_cp4_ParamLimits

0x5d97,	// (0x00053090) list_single_midp_graphic_pane_t1_ParamLimits

0x7f8e,	// (0x00055287) bg_active_tab_pane_cp5_ParamLimits

0x7fbb,	// (0x000552b4) tabs_3_long_active_pane_t1_ParamLimits

0x7faf,	// (0x000552a8) bg_passive_tab_pane_cp5_ParamLimits

0x5d97,	// (0x00053090) list_single_midp_graphic_pane_t1

0x966e,	// (0x00056967) bg_status_flat_pane_ParamLimits

0x9739,	// (0x00056a32) indicator_pane_cp2_ParamLimits

0x9739,	// (0x00056a32) indicator_pane_cp2

0x987c,	// (0x00056b75) navi_pane_srt_ParamLimits

0x987c,	// (0x00056b75) navi_pane_srt

0x98a0,	// (0x00056b99) popup_clock_digital_analogue_window_cp1

0x755c,	// (0x00054855) indicator_pane_t1

0x8c06,	// (0x00055eff) copy_highlight_pane

0x8c06,	// (0x00055eff) cursor_graphics_pane

0x8c06,	// (0x00055eff) graphic_within_text_pane

0x8c06,	// (0x00055eff) link_highlight_pane

0xab02,	// (0x00057dfb) popup_preview_text_window_t5_ParamLimits

0xab02,	// (0x00057dfb) popup_preview_text_window_t5

0x8d36,	// (0x0005602f) cursor_digital_pane

0x8d36,	// (0x0005602f) cursor_primary_pane

0x8d47,	// (0x00056040) cursor_primary_small_pane

0x8d4f,	// (0x00056048) cursor_secondary_pane

0x8d57,	// (0x00056050) cursor_title_pane

0x8d36,	// (0x0005602f) link_highlight_digital_pane

0x8d3e,	// (0x00056037) link_highlight_primary_pane

0x8d47,	// (0x00056040) link_highlight_primary_small_pane

0x8d4f,	// (0x00056048) link_highlight_secondary_pane

0x8d57,	// (0x00056050) link_highlight_title_pane

0x8d36,	// (0x0005602f) copy_highlight_digital_pane

0x8d36,	// (0x0005602f) copy_highlight_primary_pane

0x8d47,	// (0x00056040) copy_highlight_primary_small_pane

0x8d4f,	// (0x00056048) copy_highlight_secondary_pane

0x8d57,	// (0x00056050) copy_highlight_title_pane

0x8d4f,	// (0x00056048) graphic_text_digital_pane

0xa37b,	// (0x00057674) graphic_text_primary_pane

0xa384,	// (0x0005767d) graphic_text_primary_small_pane

0x8d47,	// (0x00056040) graphic_text_secondary_pane

0x8d36,	// (0x0005602f) graphic_text_title_pane

0x8d5f,	// (0x00056058) cursor_primary_pane_g1

0xa36d,	// (0x00057666) cursor_text_primary_t1

0xa355,	// (0x0005764e) cursor_primary_small_pane_g1

0xa35f,	// (0x00057658) cursor_text_primary_small_t1

0xa33d,	// (0x00057636) cursor_primary_small_pane_g1_copy1

0xa347,	// (0x00057640) cursor_text_primary_small_t1_copy1

0xa325,	// (0x0005761e) cursor_text_title_t1

0xa333,	// (0x0005762c) cursor_title_pane_g1

0x8d5f,	// (0x00056058) cursor_digital_pane_g1

0x8d69,	// (0x00056062) cursor_text_digital_t1

0x8d77,	// (0x00056070) link_highlight_primary_pane_g1

0xa2ce,	// (0x000575c7) link_highlight_primary_pane_t1

0x8d77,	// (0x00056070) link_highlight_primary_small_pane_g1

0x8d7f,	// (0x00056078) link_highlight_primary_small_pane_t1

0x8d8e,	// (0x00056087) link_highlight_secondary_pane_g1

0x8d96,	// (0x0005608f) link_highlight_secondary_pane_t1

0xa242,	// (0x0005753b) link_highlight_title_pane_g1

0xa24a,	// (0x00057543) link_highlight_title_pane_t1

0xa22b,	// (0x00057524) link_highlight_digital_pane_g1

0xa233,	// (0x0005752c) link_highlight_digital_pane_t1

0xa0f3,	// (0x000573ec) copy_highlight_primary_pane_g1

0xa10a,	// (0x00057403) copy_highlight_primary_pane_t1

0xa0f3,	// (0x000573ec) copy_highlight_primary_small_pane_g1

0xa0fb,	// (0x000573f4) copy_highlight_primary_small_pane_t1

0x8da5,	// (0x0005609e) copy_highlight_secondary_pane_g1

0x8dad,	// (0x000560a6) copy_highlight_secondary_pane_t1

0xa0dc,	// (0x000573d5) copy_highlight_title_pane_g1

0xa0e4,	// (0x000573dd) copy_highlight_title_pane_t1

0xa0f3,	// (0x000573ec) copy_highlight_digital_pane_g1

0xb404,	// (0x000586fd) copy_highlight_digital_pane_t1

0xb358,	// (0x00058651) graphic_text_primary_pane_g1

0xb3e8,	// (0x000586e1) graphic_text_primary_pane_t1

0xb3f6,	// (0x000586ef) graphic_text_primary_pane_t2

0x0001,

0xf9e4,	// (0x0005ccdd) graphic_text_primary_pane_t

0xb3c4,	// (0x000586bd) graphic_text_primary_small_pane_g1

0xb3cc,	// (0x000586c5) graphic_text_primary_small_pane_t1

0xb3da,	// (0x000586d3) graphic_text_primary_small_pane_t2

0x0001,

0xf9df,	// (0x0005ccd8) graphic_text_primary_small_pane_t

0xb3a0,	// (0x00058699) graphic_text_secondary_pane_g1

0xb3a8,	// (0x000586a1) graphic_text_secondary_pane_t1

0xb3b6,	// (0x000586af) graphic_text_secondary_pane_t2

0x0001,

0xf9da,	// (0x0005ccd3) graphic_text_secondary_pane_t

0xb37c,	// (0x00058675) graphic_text_title_pane_g1

0xb384,	// (0x0005867d) graphic_text_title_pane_t1

0xb392,	// (0x0005868b) graphic_text_title_pane_t2

0x0001,

0xf9d5,	// (0x0005ccce) graphic_text_title_pane_t

0xb358,	// (0x00058651) graphic_text_digital_pane_g1

0xb360,	// (0x00058659) graphic_text_digital_pane_t1

0xb36e,	// (0x00058667) graphic_text_digital_pane_t2

0x0001,

0xf9d0,	// (0x0005ccc9) graphic_text_digital_pane_t

0x747c,	// (0x00054775) navi_icon_pane_srt_ParamLimits

0x747c,	// (0x00054775) navi_icon_pane_srt

0x25c3,	// (0x0004f8bc) navi_midp_pane_srt

0x25c3,	// (0x0004f8bc) navi_navi_pane_srt

0x747c,	// (0x00054775) navi_text_pane_srt_ParamLimits

0x747c,	// (0x00054775) navi_text_pane_srt

0xb323,	// (0x0005861c) navi_navi_icon_text_pane_srt

0xb32b,	// (0x00058624) navi_navi_pane_srt_g1_ParamLimits

0xb32b,	// (0x00058624) navi_navi_pane_srt_g1

0xb33d,	// (0x00058636) navi_navi_pane_srt_g2_ParamLimits

0xb33d,	// (0x00058636) navi_navi_pane_srt_g2

0x0001,

0xf9cb,	// (0x0005ccc4) navi_navi_pane_srt_g_ParamLimits

0xf9cb,	// (0x0005ccc4) navi_navi_pane_srt_g

0xb34f,	// (0x00058648) navi_navi_tabs_pane_srt

0xb323,	// (0x0005861c) navi_navi_text_pane_srt

0xb323,	// (0x0005861c) navi_navi_volume_pane_srt

0xb314,	// (0x0005860d) navi_navi_text_pane_srt_t1

0x61c8,	// (0x000534c1) navi_navi_volume_pane_srt_g1

0x61d0,	// (0x000534c9) volume_small_pane_srt_ParamLimits

0x61d0,	// (0x000534c9) volume_small_pane_srt

0x5ab0,	// (0x00052da9) volume_small_pane_srt_g1_ParamLimits

0x5ab0,	// (0x00052da9) volume_small_pane_srt_g1

0x5ac0,	// (0x00052db9) volume_small_pane_srt_g2_ParamLimits

0x5ac0,	// (0x00052db9) volume_small_pane_srt_g2

0x5ad1,	// (0x00052dca) volume_small_pane_srt_g3_ParamLimits

0x5ad1,	// (0x00052dca) volume_small_pane_srt_g3

0x5ae2,	// (0x00052ddb) volume_small_pane_srt_g4_ParamLimits

0x5ae2,	// (0x00052ddb) volume_small_pane_srt_g4

0x5af3,	// (0x00052dec) volume_small_pane_srt_g5_ParamLimits

0x5af3,	// (0x00052dec) volume_small_pane_srt_g5

0x5b04,	// (0x00052dfd) volume_small_pane_srt_g6_ParamLimits

0x5b04,	// (0x00052dfd) volume_small_pane_srt_g6

0x5b15,	// (0x00052e0e) volume_small_pane_srt_g7_ParamLimits

0x5b15,	// (0x00052e0e) volume_small_pane_srt_g7

0x5b26,	// (0x00052e1f) volume_small_pane_srt_g8_ParamLimits

0x5b26,	// (0x00052e1f) volume_small_pane_srt_g8

0x5b37,	// (0x00052e30) volume_small_pane_srt_g9_ParamLimits

0x5b37,	// (0x00052e30) volume_small_pane_srt_g9

0x5b48,	// (0x00052e41) volume_small_pane_srt_g10_ParamLimits

0x5b48,	// (0x00052e41) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x0005ca73) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x0005ca73) volume_small_pane_srt_g

0x7863,	// (0x00054b5c) query_popup_data_pane_cp2

0xb2fa,	// (0x000585f3) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb2fa,	// (0x000585f3) navi_navi_icon_text_pane_srt_t1

0xa37b,	// (0x00057674) navi_tabs_2_long_pane_srt

0xa37b,	// (0x00057674) navi_tabs_2_pane_srt

0xa37b,	// (0x00057674) navi_tabs_3_long_pane_srt

0xa37b,	// (0x00057674) navi_tabs_3_pane_srt

0xa37b,	// (0x00057674) navi_tabs_4_pane_srt

0x61a8,	// (0x000534a1) tabs_2_active_pane_srt_ParamLimits

0x61a8,	// (0x000534a1) tabs_2_active_pane_srt

0x61b8,	// (0x000534b1) tabs_2_passive_pane_srt_ParamLimits

0x61b8,	// (0x000534b1) tabs_2_passive_pane_srt

0x8f84,	// (0x0005627d) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8f84,	// (0x0005627d) bg_passive_tab_pane_cp1_srt

0xb2c6,	// (0x000585bf) bg_passive_tab_pane_g1_cp1_srt

0x884f,	// (0x00055b48) bg_passive_tab_pane_g2_cp1_srt

0xb2cf,	// (0x000585c8) bg_passive_tab_pane_g3_cp1_srt

0x747c,	// (0x00054775) bg_active_tab_pane_cp1_srt_ParamLimits

0x747c,	// (0x00054775) bg_active_tab_pane_cp1_srt

0xb2d8,	// (0x000585d1) tabs_2_active_pane_srt_g1

0xb2e0,	// (0x000585d9) tabs_2_active_pane_srt_t1_ParamLimits

0xb2e0,	// (0x000585d9) tabs_2_active_pane_srt_t1

0xb2c6,	// (0x000585bf) bg_active_tab_pane_g1_cp1_srt

0x884f,	// (0x00055b48) bg_active_tab_pane_g2_cp1_srt

0xb2cf,	// (0x000585c8) bg_active_tab_pane_g3_cp1_srt

0x6175,	// (0x0005346e) tabs_3_active_pane_srt_ParamLimits

0x6175,	// (0x0005346e) tabs_3_active_pane_srt

0x6186,	// (0x0005347f) tabs_3_passive_pane_cp_srt_ParamLimits

0x6186,	// (0x0005347f) tabs_3_passive_pane_cp_srt

0x6197,	// (0x00053490) tabs_3_passive_pane_srt_ParamLimits

0x6197,	// (0x00053490) tabs_3_passive_pane_srt

0x8f84,	// (0x0005627d) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8f84,	// (0x0005627d) bg_passive_tab_pane_cp2_srt

0x8dbc,	// (0x000560b5) bg_passive_tab_pane_g1_cp2_srt

0x884f,	// (0x00055b48) bg_passive_tab_pane_g2_cp2_srt

0x8dc5,	// (0x000560be) bg_passive_tab_pane_g3_cp2_srt

0x747c,	// (0x00054775) bg_active_tab_pane_cp2_srt_ParamLimits

0x747c,	// (0x00054775) bg_active_tab_pane_cp2_srt

0xb2ac,	// (0x000585a5) tabs_3_active_pane_srt_g1

0xb2b4,	// (0x000585ad) tabs_3_active_pane_srt_t1_ParamLimits

0xb2b4,	// (0x000585ad) tabs_3_active_pane_srt_t1

0x8dbc,	// (0x000560b5) bg_active_tab_pane_g1_cp2_srt

0x884f,	// (0x00055b48) bg_active_tab_pane_g2_cp2_srt

0x8dc5,	// (0x000560be) bg_active_tab_pane_g3_cp2_srt

0x612d,	// (0x00053426) tabs_4_active_pane_srt_ParamLimits

0x612d,	// (0x00053426) tabs_4_active_pane_srt

0x613f,	// (0x00053438) tabs_4_passive_pane_cp2_srt_ParamLimits

0x613f,	// (0x00053438) tabs_4_passive_pane_cp2_srt

0x8f1a,	// (0x00056213) aid_size_cell_toolbar

0x7faf,	// (0x000552a8) main_idle_act_pane_ParamLimits

0x9149,	// (0x00056442) popup_large_graphic_colour_window_ParamLimits

0x94f0,	// (0x000567e9) popup_toolbar_window_ParamLimits

0x94f0,	// (0x000567e9) popup_toolbar_window

0xb0c6,	// (0x000583bf) list_single_graphic_2heading_pane_ParamLimits

0xb0c6,	// (0x000583bf) list_single_graphic_2heading_pane

0x8330,	// (0x00055629) aid_size_cell_apps_grid_lsc_pane

0x8342,	// (0x0005563b) aid_size_cell_apps_grid_prt_pane

0x8f84,	// (0x0005627d) bg_wml_button_pane_cp1_ParamLimits

0x8f84,	// (0x0005627d) bg_wml_button_pane_cp1

0x9d80,	// (0x00057079) form_midp_field_text_pane_t1_ParamLimits

0x9bb3,	// (0x00056eac) input_focus_pane_cp050_ParamLimits

0x9d9e,	// (0x00057097) list_midp_form_text_pane_ParamLimits

0x9d5d,	// (0x00057056) input_focus_pane_cp051_ParamLimits

0x9d71,	// (0x0005706a) list_midp_choice_pane_ParamLimits

0x9c44,	// (0x00056f3d) list_single_2graphic_pane_cp3_ParamLimits

0x9c44,	// (0x00056f3d) list_single_2graphic_pane_cp3

0x9c54,	// (0x00056f4d) list_single_midp_graphic_pane_ParamLimits

0x9c54,	// (0x00056f4d) list_single_midp_graphic_pane

0x4a58,	// (0x00051d51) list_single_graphic_2heading_pane_g1_ParamLimits

0x4a58,	// (0x00051d51) list_single_graphic_2heading_pane_g1

0x4a64,	// (0x00051d5d) list_single_graphic_2heading_pane_g4_ParamLimits

0x4a64,	// (0x00051d5d) list_single_graphic_2heading_pane_g4

0x4a70,	// (0x00051d69) list_single_graphic_2heading_pane_g5_ParamLimits

0x4a70,	// (0x00051d69) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x0005cac6) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x0005cac6) list_single_graphic_2heading_pane_g

0x4a7c,	// (0x00051d75) list_single_graphic_2heading_pane_t1_ParamLimits

0x4a7c,	// (0x00051d75) list_single_graphic_2heading_pane_t1

0x4a90,	// (0x00051d89) list_single_graphic_2heading_pane_t2_ParamLimits

0x4a90,	// (0x00051d89) list_single_graphic_2heading_pane_t2

0x4aac,	// (0x00051da5) list_single_graphic_2heading_pane_t3_ParamLimits

0x4aac,	// (0x00051da5) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x0005cacd) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x0005cacd) list_single_graphic_2heading_pane_t

0x99ff,	// (0x00056cf8) bg_popup_sub_pane_cp2

0x9a29,	// (0x00056d22) grid_toobar_pane

0x5cbb,	// (0x00052fb4) cell_toolbar_pane_ParamLimits

0x5cbb,	// (0x00052fb4) cell_toolbar_pane

0x9a65,	// (0x00056d5e) cell_toolbar_pane_g1_ParamLimits

0x9a65,	// (0x00056d5e) cell_toolbar_pane_g1

0x9a79,	// (0x00056d72) cell_toolbar_pane_g2_ParamLimits

0x9a79,	// (0x00056d72) cell_toolbar_pane_g2

0x0001,

0xf7e2,	// (0x0005cadb) cell_toolbar_pane_g_ParamLimits

0xf7e2,	// (0x0005cadb) cell_toolbar_pane_g

0x9a9b,	// (0x00056d94) grid_highlight_pane_cp2_ParamLimits

0x9a9b,	// (0x00056d94) grid_highlight_pane_cp2

0x9ab5,	// (0x00056dae) toolbar_button_pane

0x9ac1,	// (0x00056dba) toolbar_button_pane_g1

0x9ac9,	// (0x00056dc2) toolbar_button_pane_g2

0x9ad1,	// (0x00056dca) toolbar_button_pane_g3

0x9ad9,	// (0x00056dd2) toolbar_button_pane_g4

0x9ae1,	// (0x00056dda) toolbar_button_pane_g5

0x9ae9,	// (0x00056de2) toolbar_button_pane_g6

0x9af1,	// (0x00056dea) toolbar_button_pane_g7

0x9af9,	// (0x00056df2) toolbar_button_pane_g8

0x9b01,	// (0x00056dfa) toolbar_button_pane_g9

0x0009,

0xf7e7,	// (0x0005cae0) toolbar_button_pane_g

0x5d15,	// (0x0005300e) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5d15,	// (0x0005300e) list_single_2graphic_pane_g1_cp3

0x5d21,	// (0x0005301a) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5d21,	// (0x0005301a) list_single_2graphic_pane_g2_cp3

0x5d32,	// (0x0005302b) list_single_2graphic_pane_g3_cp3

0x5d3a,	// (0x00053033) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5d3a,	// (0x00053033) list_single_2graphic_pane_g4_cp3

0x5d46,	// (0x0005303f) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5d46,	// (0x0005303f) list_single_2graphic_pane_t1_cp3

0x5d8b,	// (0x00053084) list_single_midp_graphic_pane_g2_ParamLimits

0x5d8b,	// (0x00053084) list_single_midp_graphic_pane_g2

0x5ca3,	// (0x00052f9c) aid_zoom_text_primary

0x5cab,	// (0x00052fa4) aid_zoom_text_secondary

0x8e79,	// (0x00056172) status_small_pane_g7_ParamLimits

0x8e79,	// (0x00056172) status_small_pane_g7

0x8e9c,	// (0x00056195) status_small_pane_t1_ParamLimits

0x73bf,	// (0x000546b8) title_pane_g2

0x0003,

0xf566,	// (0x0005c85f) title_pane_g

0x790c,	// (0x00054c05) aid_size_cell_colour_1_pane_ParamLimits

0x790c,	// (0x00054c05) aid_size_cell_colour_1_pane

0x7920,	// (0x00054c19) aid_size_cell_colour_2_pane_ParamLimits

0x7920,	// (0x00054c19) aid_size_cell_colour_2_pane

0x7934,	// (0x00054c2d) aid_size_cell_colour_3_pane_ParamLimits

0x7934,	// (0x00054c2d) aid_size_cell_colour_3_pane

0x7948,	// (0x00054c41) aid_size_cell_colour_4_pane_ParamLimits

0x7948,	// (0x00054c41) aid_size_cell_colour_4_pane

0x5697,	// (0x00052990) title_pane_stacon_g1_ParamLimits

0x5697,	// (0x00052990) title_pane_stacon_g1

0xa161,	// (0x0005745a) popup_note_wait_window_g3_ParamLimits

0xa161,	// (0x0005745a) popup_note_wait_window_g3

0xa1d8,	// (0x000574d1) popup_note_wait_window_t5_ParamLimits

0xa1d8,	// (0x000574d1) popup_note_wait_window_t5

0x25c3,	// (0x0004f8bc) main_feb_china_hwr_fs_writing_pane

0x9010,	// (0x00056309) popup_feb_china_hwr_fs_window_ParamLimits

0x9010,	// (0x00056309) popup_feb_china_hwr_fs_window

0x5dad,	// (0x000530a6) aid_size_cell_hwr_fs_ParamLimits

0x5dad,	// (0x000530a6) aid_size_cell_hwr_fs

0x9bb3,	// (0x00056eac) bg_popup_sub_pane_cp3_ParamLimits

0x9bb3,	// (0x00056eac) bg_popup_sub_pane_cp3

0x5dc2,	// (0x000530bb) grid_hwr_fs_pane_ParamLimits

0x5dc2,	// (0x000530bb) grid_hwr_fs_pane

0x5dda,	// (0x000530d3) linegrid_hwr_fs_pane_ParamLimits

0x5dda,	// (0x000530d3) linegrid_hwr_fs_pane

0x5dea,	// (0x000530e3) cell_hwr_fs_pane_ParamLimits

0x5dea,	// (0x000530e3) cell_hwr_fs_pane

0x9bbf,	// (0x00056eb8) linegrid_hwr_fs_pane_g1_ParamLimits

0x9bbf,	// (0x00056eb8) linegrid_hwr_fs_pane_g1

0x9bcb,	// (0x00056ec4) linegrid_hwr_fs_pane_g2_ParamLimits

0x9bcb,	// (0x00056ec4) linegrid_hwr_fs_pane_g2

0x9bdd,	// (0x00056ed6) linegrid_hwr_fs_pane_g3_ParamLimits

0x9bdd,	// (0x00056ed6) linegrid_hwr_fs_pane_g3

0x5e0e,	// (0x00053107) linegrid_hwr_fs_pane_g4_ParamLimits

0x5e0e,	// (0x00053107) linegrid_hwr_fs_pane_g4

0x5e2c,	// (0x00053125) linegrid_hwr_fs_pane_g5_ParamLimits

0x5e2c,	// (0x00053125) linegrid_hwr_fs_pane_g5

0x0004,

0xf812,	// (0x0005cb0b) linegrid_hwr_fs_pane_g_ParamLimits

0xf812,	// (0x0005cb0b) linegrid_hwr_fs_pane_g

0x9be9,	// (0x00056ee2) cell_hwr_fs_pane_g1_ParamLimits

0x9be9,	// (0x00056ee2) cell_hwr_fs_pane_g1

0x9936,	// (0x00056c2f) cell_hwr_fs_pane_g2_ParamLimits

0x9936,	// (0x00056c2f) cell_hwr_fs_pane_g2

0x9bff,	// (0x00056ef8) cell_hwr_fs_pane_g3_ParamLimits

0x9bff,	// (0x00056ef8) cell_hwr_fs_pane_g3

0x9c0c,	// (0x00056f05) cell_hwr_fs_pane_g4_ParamLimits

0x9c0c,	// (0x00056f05) cell_hwr_fs_pane_g4

0x0003,

0xf81d,	// (0x0005cb16) cell_hwr_fs_pane_g_ParamLimits

0xf81d,	// (0x0005cb16) cell_hwr_fs_pane_g

0x5e42,	// (0x0005313b) cell_hwr_fs_pane_t1

0x25c3,	// (0x0004f8bc) grid_highlight_pane_cp6

0x25c3,	// (0x0004f8bc) main_idle_act2_pane

0x7f21,	// (0x0005521a) aid_inside_area_popup_secondary

0xa811,	// (0x00057b0a) aid_inside_area_window_primary_ParamLimits

0xa811,	// (0x00057b0a) aid_inside_area_window_primary

0xb413,	// (0x0005870c) ai2_news_ticker_pane

0xb41b,	// (0x00058714) aid_size_cell_ai1_link_ParamLimits

0xb41b,	// (0x00058714) aid_size_cell_ai1_link

0xb435,	// (0x0005872e) popup_ai2_data_window_ParamLimits

0xb435,	// (0x0005872e) popup_ai2_data_window

0xb453,	// (0x0005874c) popup_ai2_link_window_ParamLimits

0xb453,	// (0x0005874c) popup_ai2_link_window

0x9bb3,	// (0x00056eac) bg_popup_sub_pane_cp4_ParamLimits

0x9bb3,	// (0x00056eac) bg_popup_sub_pane_cp4

0xb469,	// (0x00058762) grid_ai2_link_pane_ParamLimits

0xb469,	// (0x00058762) grid_ai2_link_pane

0xb480,	// (0x00058779) popup_ai2_link_window_g1_ParamLimits

0xb480,	// (0x00058779) popup_ai2_link_window_g1

0xb48c,	// (0x00058785) popup_ai2_link_window_g2_ParamLimits

0xb48c,	// (0x00058785) popup_ai2_link_window_g2

0x0001,

0xf9e9,	// (0x0005cce2) popup_ai2_link_window_g_ParamLimits

0xf9e9,	// (0x0005cce2) popup_ai2_link_window_g

0xb49d,	// (0x00058796) ai2_mp_button_pane

0xb4a5,	// (0x0005879e) ai2_mp_volume_pane

0x9d5d,	// (0x00057056) bg_popup_sub_pane_cp5_ParamLimits

0x9d5d,	// (0x00057056) bg_popup_sub_pane_cp5

0xb4ad,	// (0x000587a6) heading_ai2_gene_pane_ParamLimits

0xb4ad,	// (0x000587a6) heading_ai2_gene_pane

0xb4b9,	// (0x000587b2) list_ai2_gene_pane_ParamLimits

0xb4b9,	// (0x000587b2) list_ai2_gene_pane

0xb501,	// (0x000587fa) cell_ai2_link_pane_ParamLimits

0xb501,	// (0x000587fa) cell_ai2_link_pane

0xb517,	// (0x00058810) cell_ai2_link_pane_g1

0x25c3,	// (0x0004f8bc) grid_highlight_pane_cp7

0x61e5,	// (0x000534de) ai2_mp_volume_pane_g1

0xb5ea,	// (0x000588e3) ai2_mp_volume_pane_g2

0xb55f,	// (0x00058858) list_ai2_gene_pane_t1

0xb5f2,	// (0x000588eb) ai2_mp_volume_pane_g3

0x0002,

0xfa02,	// (0x0005ccfb) ai2_mp_volume_pane_g

0x61ed,	// (0x000534e6) volume_small_pane_cp3

0xb5fa,	// (0x000588f3) aid_size_cell_ai2_button

0xb602,	// (0x000588fb) grid_ai2_button_pane

0xb60b,	// (0x00058904) cell_ai2_button_pane_ParamLimits

0xb60b,	// (0x00058904) cell_ai2_button_pane

0x25b9,	// (0x0004f8b2) cell_ai2_button_pane_g1

0x25c3,	// (0x0004f8bc) grid_highlight_pane_cp8

0xb5aa,	// (0x000588a3) ai2_gene_pane_t1_ParamLimits

0xb5aa,	// (0x000588a3) ai2_gene_pane_t1

0x8f10,	// (0x00056209) aid_height_parent_landscape

0xaebd,	// (0x000581b6) aid_height_set_list

0xaece,	// (0x000581c7) aid_size_parent

0xb234,	// (0x0005852d) aid_size_cell_graphic_pane_ParamLimits

0xb4c9,	// (0x000587c2) popup_ai2_data_window_g1_ParamLimits

0xb4c9,	// (0x000587c2) popup_ai2_data_window_g1

0xb4d5,	// (0x000587ce) ai2_news_ticker_pane_g1

0xb4dd,	// (0x000587d6) ai2_news_ticker_pane_g2

0x0001,

0xf9ee,	// (0x0005cce7) ai2_news_ticker_pane_g

0xb4e5,	// (0x000587de) ai2_news_ticker_pane_t1

0xb4f3,	// (0x000587ec) ai2_news_ticker_pane_t2

0x0001,

0xf9f3,	// (0x0005ccec) ai2_news_ticker_pane_t

0xb520,	// (0x00058819) heading_ai2_gene_pane_g1

0xb528,	// (0x00058821) heading_ai2_gene_pane_t1_ParamLimits

0xb528,	// (0x00058821) heading_ai2_gene_pane_t1

0xb53d,	// (0x00058836) list_highlight_pane_cp6

0xb545,	// (0x0005883e) ai2_gene_pane_ParamLimits

0xb545,	// (0x0005883e) ai2_gene_pane

0xb56d,	// (0x00058866) list_ai2_gene_pane_t2

0x0001,

0xf9f8,	// (0x0005ccf1) list_ai2_gene_pane_t

0xb57b,	// (0x00058874) list_highlight_pane_cp8_ParamLimits

0xb57b,	// (0x00058874) list_highlight_pane_cp8

0xb58c,	// (0x00058885) ai2_gene_pane_g1_ParamLimits

0xb58c,	// (0x00058885) ai2_gene_pane_g1

0xb59e,	// (0x00058897) ai2_gene_pane_g2_ParamLimits

0xb59e,	// (0x00058897) ai2_gene_pane_g2

0x0001,

0xf9fd,	// (0x0005ccf6) ai2_gene_pane_g_ParamLimits

0xf9fd,	// (0x0005ccf6) ai2_gene_pane_g

0x7c99,	// (0x00054f92) scroll_pane_cp12

0x5c62,	// (0x00052f5b) control_pane_t3_ParamLimits

0x5c62,	// (0x00052f5b) control_pane_t3

0x8e8d,	// (0x00056186) status_small_pane_g8_ParamLimits

0x8e8d,	// (0x00056186) status_small_pane_g8

0x910e,	// (0x00056407) popup_find_window_ParamLimits

0x9339,	// (0x00056632) popup_note_image_window_ParamLimits

0x5ceb,	// (0x00052fe4) list_double2_graphic_pane_vc_g1_ParamLimits

0x5ceb,	// (0x00052fe4) list_double2_graphic_pane_vc_g1

0x8b77,	// (0x00055e70) list_double2_graphic_pane_vc_g2_ParamLimits

0x8b77,	// (0x00055e70) list_double2_graphic_pane_vc_g2

0x811d,	// (0x00055416) list_double2_graphic_pane_vc_g3_ParamLimits

0x811d,	// (0x00055416) list_double2_graphic_pane_vc_g3

0x0002,

0xf7db,	// (0x0005cad4) list_double2_graphic_pane_vc_g_ParamLimits

0xf7db,	// (0x0005cad4) list_double2_graphic_pane_vc_g

0x5cf7,	// (0x00052ff0) list_double2_graphic_pane_vc_t1_ParamLimits

0x5cf7,	// (0x00052ff0) list_double2_graphic_pane_vc_t1

0x8b77,	// (0x00055e70) list_single_heading_pane_vc_g1_ParamLimits

0x8b77,	// (0x00055e70) list_single_heading_pane_vc_g1

0x811d,	// (0x00055416) list_single_heading_pane_vc_g2_ParamLimits

0x811d,	// (0x00055416) list_single_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0005caf5) list_single_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0005caf5) list_single_heading_pane_vc_g

0x5d61,	// (0x0005305a) list_single_heading_pane_vc_t1_ParamLimits

0x5d61,	// (0x0005305a) list_single_heading_pane_vc_t1

0x5d79,	// (0x00053072) list_single_heading_pane_vc_t2_ParamLimits

0x5d79,	// (0x00053072) list_single_heading_pane_vc_t2

0x0001,

0xf801,	// (0x0005cafa) list_single_heading_pane_vc_t_ParamLimits

0xf801,	// (0x0005cafa) list_single_heading_pane_vc_t

0x9b09,	// (0x00056e02) list_setting_number_pane_vc_g1_ParamLimits

0x9b09,	// (0x00056e02) list_setting_number_pane_vc_g1

0x9b15,	// (0x00056e0e) list_setting_number_pane_vc_g2_ParamLimits

0x9b15,	// (0x00056e0e) list_setting_number_pane_vc_g2

0x0001,

0xf806,	// (0x0005caff) list_setting_number_pane_vc_g_ParamLimits

0xf806,	// (0x0005caff) list_setting_number_pane_vc_g

0x9b21,	// (0x00056e1a) list_setting_number_pane_vc_t1_ParamLimits

0x9b21,	// (0x00056e1a) list_setting_number_pane_vc_t1

0x9b35,	// (0x00056e2e) list_setting_number_pane_vc_t2_ParamLimits

0x9b35,	// (0x00056e2e) list_setting_number_pane_vc_t2

0x9b51,	// (0x00056e4a) list_setting_number_pane_vc_t3_ParamLimits

0x9b51,	// (0x00056e4a) list_setting_number_pane_vc_t3

0x0002,

0xf80b,	// (0x0005cb04) list_setting_number_pane_vc_t_ParamLimits

0xf80b,	// (0x0005cb04) list_setting_number_pane_vc_t

0x9b79,	// (0x00056e72) set_value_pane_vc_ParamLimits

0x9b79,	// (0x00056e72) set_value_pane_vc

0xb0c6,	// (0x000583bf) list_double2_graphic_pane_vc_ParamLimits

0xb0c6,	// (0x000583bf) list_double2_graphic_pane_vc

0xb0c6,	// (0x000583bf) list_double2_large_graphic_pane_vc_ParamLimits

0xb0c6,	// (0x000583bf) list_double2_large_graphic_pane_vc

0xb0c6,	// (0x000583bf) list_double2_pane_vc_ParamLimits

0xb0c6,	// (0x000583bf) list_double2_pane_vc

0xb0c6,	// (0x000583bf) list_double_graphic_heading_pane_vc_ParamLimits

0xb0c6,	// (0x000583bf) list_double_graphic_heading_pane_vc

0xb0c6,	// (0x000583bf) list_double_graphic_pane_vc_ParamLimits

0xb0c6,	// (0x000583bf) list_double_graphic_pane_vc

0xb0c6,	// (0x000583bf) list_double_heading_pane_vc_ParamLimits

0xb0c6,	// (0x000583bf) list_double_heading_pane_vc

0xb0c6,	// (0x000583bf) list_double_large_graphic_pane_vc_ParamLimits

0xb0c6,	// (0x000583bf) list_double_large_graphic_pane_vc

0xb0c6,	// (0x000583bf) list_double_number_pane_vc_ParamLimits

0xb0c6,	// (0x000583bf) list_double_number_pane_vc

0xb0c6,	// (0x000583bf) list_double_pane_vc_ParamLimits

0xb0c6,	// (0x000583bf) list_double_pane_vc

0xb0c6,	// (0x000583bf) list_double_time_pane_vc_ParamLimits

0xb0c6,	// (0x000583bf) list_double_time_pane_vc

0xb0c6,	// (0x000583bf) list_setting_number_pane_vc_ParamLimits

0xb0c6,	// (0x000583bf) list_setting_number_pane_vc

0xb0c6,	// (0x000583bf) list_setting_pane_vc_ParamLimits

0xb0c6,	// (0x000583bf) list_setting_pane_vc

0xb0c6,	// (0x000583bf) list_single_graphic_heading_pane_vc_ParamLimits

0xb0c6,	// (0x000583bf) list_single_graphic_heading_pane_vc

0xb0c6,	// (0x000583bf) list_single_heading_pane_vc_ParamLimits

0xb0c6,	// (0x000583bf) list_single_heading_pane_vc

0xb0da,	// (0x000583d3) list_single_number_heading_pane_vc_ParamLimits

0xb0da,	// (0x000583d3) list_single_number_heading_pane_vc

0x5ceb,	// (0x00052fe4) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5ceb,	// (0x00052fe4) list_double_graphic_heading_pane_vc_g1

0x8155,	// (0x0005544e) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x8155,	// (0x0005544e) list_double_graphic_heading_pane_vc_g2

0x8161,	// (0x0005545a) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x8161,	// (0x0005545a) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa09,	// (0x0005cd02) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa09,	// (0x0005cd02) list_double_graphic_heading_pane_vc_g

0x61f6,	// (0x000534ef) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x61f6,	// (0x000534ef) list_double_graphic_heading_pane_vc_t1

0x5d61,	// (0x0005305a) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5d61,	// (0x0005305a) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa10,	// (0x0005cd09) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa10,	// (0x0005cd09) list_double_graphic_heading_pane_vc_t

0x9b09,	// (0x00056e02) list_setting_pane_vc_g1_ParamLimits

0x9b09,	// (0x00056e02) list_setting_pane_vc_g1

0x9b15,	// (0x00056e0e) list_setting_pane_vc_g2_ParamLimits

0x9b15,	// (0x00056e0e) list_setting_pane_vc_g2

0x0001,

0xf806,	// (0x0005caff) list_setting_pane_vc_g_ParamLimits

0xf806,	// (0x0005caff) list_setting_pane_vc_g

0xb847,	// (0x00058b40) list_setting_pane_vc_t1_ParamLimits

0xb847,	// (0x00058b40) list_setting_pane_vc_t1

0xb85b,	// (0x00058b54) list_setting_pane_vc_t2_ParamLimits

0xb85b,	// (0x00058b54) list_setting_pane_vc_t2

0x0001,

0xfa3e,	// (0x0005cd37) list_setting_pane_vc_t_ParamLimits

0xfa3e,	// (0x0005cd37) list_setting_pane_vc_t

0x9b79,	// (0x00056e72) set_value_pane_cp_vc_ParamLimits

0x9b79,	// (0x00056e72) set_value_pane_cp_vc

0x8b77,	// (0x00055e70) list_single_number_heading_pane_vc_g1_ParamLimits

0x8b77,	// (0x00055e70) list_single_number_heading_pane_vc_g1

0x811d,	// (0x00055416) list_single_number_heading_pane_vc_g2_ParamLimits

0x811d,	// (0x00055416) list_single_number_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0005caf5) list_single_number_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0005caf5) list_single_number_heading_pane_vc_g

0x5d61,	// (0x0005305a) list_single_number_heading_pane_vc_t1_ParamLimits

0x5d61,	// (0x0005305a) list_single_number_heading_pane_vc_t1

0x6208,	// (0x00053501) list_single_number_heading_pane_vc_t2_ParamLimits

0x6208,	// (0x00053501) list_single_number_heading_pane_vc_t2

0x621a,	// (0x00053513) list_single_number_heading_pane_vc_t3_ParamLimits

0x621a,	// (0x00053513) list_single_number_heading_pane_vc_t3

0x0002,

0xfa43,	// (0x0005cd3c) list_single_number_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x0005cd3c) list_single_number_heading_pane_vc_t

0x5ceb,	// (0x00052fe4) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5ceb,	// (0x00052fe4) list_single_graphic_heading_pane_vc_g1

0x8b77,	// (0x00055e70) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x8b77,	// (0x00055e70) list_single_graphic_heading_pane_vc_g4

0x811d,	// (0x00055416) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x811d,	// (0x00055416) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7db,	// (0x0005cad4) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x0005cad4) list_single_graphic_heading_pane_vc_g

0x5d61,	// (0x0005305a) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5d61,	// (0x0005305a) list_single_graphic_heading_pane_vc_t1

0x622c,	// (0x00053525) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x622c,	// (0x00053525) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4a,	// (0x0005cd43) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4a,	// (0x0005cd43) list_single_graphic_heading_pane_vc_t

0x8b77,	// (0x00055e70) list_double2_pane_vc_g1_ParamLimits

0x8b77,	// (0x00055e70) list_double2_pane_vc_g1

0x811d,	// (0x00055416) list_double2_pane_vc_g2_ParamLimits

0x811d,	// (0x00055416) list_double2_pane_vc_g2

0x0001,

0xf7fc,	// (0x0005caf5) list_double2_pane_vc_g_ParamLimits

0xf7fc,	// (0x0005caf5) list_double2_pane_vc_g

0x623e,	// (0x00053537) list_double2_pane_vc_t1_ParamLimits

0x623e,	// (0x00053537) list_double2_pane_vc_t1

0x816d,	// (0x00055466) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x816d,	// (0x00055466) list_double2_large_graphic_pane_vc_g1

0x8b77,	// (0x00055e70) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8b77,	// (0x00055e70) list_double2_large_graphic_pane_vc_g2

0x811d,	// (0x00055416) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x811d,	// (0x00055416) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa4f,	// (0x0005cd48) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa4f,	// (0x0005cd48) list_double2_large_graphic_pane_vc_g

0x6254,	// (0x0005354d) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x6254,	// (0x0005354d) list_double2_large_graphic_pane_vc_t1

0x8179,	// (0x00055472) list_double_time_pane_vc_g1_ParamLimits

0x8179,	// (0x00055472) list_double_time_pane_vc_g1

0x8185,	// (0x0005547e) list_double_time_pane_vc_g2_ParamLimits

0x8185,	// (0x0005547e) list_double_time_pane_vc_g2

0x0001,

0xfa56,	// (0x0005cd4f) list_double_time_pane_vc_g_ParamLimits

0xfa56,	// (0x0005cd4f) list_double_time_pane_vc_g

0x626a,	// (0x00053563) list_double_time_pane_vc_t1_ParamLimits

0x626a,	// (0x00053563) list_double_time_pane_vc_t1

0x6285,	// (0x0005357e) list_double_time_pane_vc_t2_ParamLimits

0x6285,	// (0x0005357e) list_double_time_pane_vc_t2

0x62c3,	// (0x000535bc) list_double_time_pane_vc_t3_ParamLimits

0x62c3,	// (0x000535bc) list_double_time_pane_vc_t3

0x62db,	// (0x000535d4) list_double_time_pane_vc_t4_ParamLimits

0x62db,	// (0x000535d4) list_double_time_pane_vc_t4

0x0003,

0xfa5b,	// (0x0005cd54) list_double_time_pane_vc_t_ParamLimits

0xfa5b,	// (0x0005cd54) list_double_time_pane_vc_t

0x8b77,	// (0x00055e70) list_double_pane_vc_g1_ParamLimits

0x8b77,	// (0x00055e70) list_double_pane_vc_g1

0x811d,	// (0x00055416) list_double_pane_vc_g2_ParamLimits

0x811d,	// (0x00055416) list_double_pane_vc_g2

0x0001,

0xf7fc,	// (0x0005caf5) list_double_pane_vc_g_ParamLimits

0xf7fc,	// (0x0005caf5) list_double_pane_vc_g

0x62ef,	// (0x000535e8) list_double_pane_vc_t1_ParamLimits

0x62ef,	// (0x000535e8) list_double_pane_vc_t1

0x6303,	// (0x000535fc) list_double_pane_vc_t2_ParamLimits

0x6303,	// (0x000535fc) list_double_pane_vc_t2

0x0001,

0xfa64,	// (0x0005cd5d) list_double_pane_vc_t_ParamLimits

0xfa64,	// (0x0005cd5d) list_double_pane_vc_t

0x8b77,	// (0x00055e70) list_double_number_pane_vc_g1_ParamLimits

0x8b77,	// (0x00055e70) list_double_number_pane_vc_g1

0x811d,	// (0x00055416) list_double_number_pane_vc_g2_ParamLimits

0x811d,	// (0x00055416) list_double_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x0005caf5) list_double_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x0005caf5) list_double_number_pane_vc_g

0x6319,	// (0x00053612) list_double_number_pane_vc_t1_ParamLimits

0x6319,	// (0x00053612) list_double_number_pane_vc_t1

0x632d,	// (0x00053626) list_double_number_pane_vc_t2_ParamLimits

0x632d,	// (0x00053626) list_double_number_pane_vc_t2

0x6303,	// (0x000535fc) list_double_number_pane_vc_t3_ParamLimits

0x6303,	// (0x000535fc) list_double_number_pane_vc_t3

0x0002,

0xfa69,	// (0x0005cd62) list_double_number_pane_vc_t_ParamLimits

0xfa69,	// (0x0005cd62) list_double_number_pane_vc_t

0x8191,	// (0x0005548a) list_double_large_graphic_pane_vc_g1_ParamLimits

0x8191,	// (0x0005548a) list_double_large_graphic_pane_vc_g1

0x819d,	// (0x00055496) list_double_large_graphic_pane_vc_g2_ParamLimits

0x819d,	// (0x00055496) list_double_large_graphic_pane_vc_g2

0x811d,	// (0x00055416) list_double_large_graphic_pane_vc_g3_ParamLimits

0x811d,	// (0x00055416) list_double_large_graphic_pane_vc_g3

0x6341,	// (0x0005363a) list_double_large_graphic_pane_vc_g4_ParamLimits

0x6341,	// (0x0005363a) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa70,	// (0x0005cd69) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa70,	// (0x0005cd69) list_double_large_graphic_pane_vc_g

0x634d,	// (0x00053646) list_double_large_graphic_pane_vc_t1_ParamLimits

0x634d,	// (0x00053646) list_double_large_graphic_pane_vc_t1

0x6361,	// (0x0005365a) list_double_large_graphic_pane_vc_t2_ParamLimits

0x6361,	// (0x0005365a) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa79,	// (0x0005cd72) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa79,	// (0x0005cd72) list_double_large_graphic_pane_vc_t

0x8155,	// (0x0005544e) list_double_heading_pane_vc_g1_ParamLimits

0x8155,	// (0x0005544e) list_double_heading_pane_vc_g1

0x8161,	// (0x0005545a) list_double_heading_pane_vc_g2_ParamLimits

0x8161,	// (0x0005545a) list_double_heading_pane_vc_g2

0x0001,

0xfa7e,	// (0x0005cd77) list_double_heading_pane_vc_g_ParamLimits

0xfa7e,	// (0x0005cd77) list_double_heading_pane_vc_g

0x6378,	// (0x00053671) list_double_heading_pane_vc_t1_ParamLimits

0x6378,	// (0x00053671) list_double_heading_pane_vc_t1

0x5d61,	// (0x0005305a) list_double_heading_pane_vc_t2_ParamLimits

0x5d61,	// (0x0005305a) list_double_heading_pane_vc_t2

0x0001,

0xfa83,	// (0x0005cd7c) list_double_heading_pane_vc_t_ParamLimits

0xfa83,	// (0x0005cd7c) list_double_heading_pane_vc_t

0x5ceb,	// (0x00052fe4) list_double_graphic_pane_vc_g1_ParamLimits

0x5ceb,	// (0x00052fe4) list_double_graphic_pane_vc_g1

0x81ac,	// (0x000554a5) list_double_graphic_pane_vc_g2_ParamLimits

0x81ac,	// (0x000554a5) list_double_graphic_pane_vc_g2

0x81bb,	// (0x000554b4) list_double_graphic_pane_vc_g3_ParamLimits

0x81bb,	// (0x000554b4) list_double_graphic_pane_vc_g3

0x0002,

0xfa88,	// (0x0005cd81) list_double_graphic_pane_vc_g_ParamLimits

0xfa88,	// (0x0005cd81) list_double_graphic_pane_vc_g

0x638a,	// (0x00053683) list_double_graphic_pane_vc_t1_ParamLimits

0x638a,	// (0x00053683) list_double_graphic_pane_vc_t1

0x6303,	// (0x000535fc) list_double_graphic_pane_vc_t2_ParamLimits

0x6303,	// (0x000535fc) list_double_graphic_pane_vc_t2

0x0001,

0xfa8f,	// (0x0005cd88) list_double_graphic_pane_vc_t_ParamLimits

0xfa8f,	// (0x0005cd88) list_double_graphic_pane_vc_t

0x4adc,	// (0x00051dd5) aid_size_cell_fastswap

0x4ae4,	// (0x00051ddd) aid_size_cell_touch_ParamLimits

0x4ae4,	// (0x00051ddd) aid_size_cell_touch

0x4d4f,	// (0x00052048) popup_fast_swap_wide_window_ParamLimits

0x4d4f,	// (0x00052048) popup_fast_swap_wide_window

0x4e65,	// (0x0005215e) touch_pane_ParamLimits

0x4e65,	// (0x0005215e) touch_pane

0x7d9b,	// (0x00055094) button_value_adjust_pane_cp2

0x5417,	// (0x00052710) button_value_adjust_pane_cp4

0x543f,	// (0x00052738) form_field_data_pane_cp2

0x5464,	// (0x0005275d) form_field_data_wide_pane_cp2

0x8402,	// (0x000556fb) bg_scroll_pane_ParamLimits

0x57fc,	// (0x00052af5) scroll_handle_pane_ParamLimits

0x5810,	// (0x00052b09) scroll_sc2_down_pane_ParamLimits

0x5810,	// (0x00052b09) scroll_sc2_down_pane

0x8433,	// (0x0005572c) scroll_sc2_up_pane_ParamLimits

0x8433,	// (0x0005572c) scroll_sc2_up_pane

0xbcd8,	// (0x00058fd1) grid_wheel_folder_pane_g1_ParamLimits

0xbcd8,	// (0x00058fd1) grid_wheel_folder_pane_g1

0x5a48,	// (0x00052d41) clock_nsta_pane_cp2_ParamLimits

0x5a48,	// (0x00052d41) clock_nsta_pane_cp2

0x8c0e,	// (0x00055f07) listscroll_midp_pane_ParamLimits

0x8c1a,	// (0x00055f13) midp_canvas_pane

0x8f08,	// (0x00056201) nsta_clock_indic_pane

0x8f56,	// (0x0005624f) listscroll_form_pane_vc

0x8f72,	// (0x0005626b) listscroll_set_pane_vc_ParamLimits

0x8f72,	// (0x0005626b) listscroll_set_pane_vc

0x968a,	// (0x00056983) clock_nsta_pane

0x9707,	// (0x00056a00) indicator_nsta_pane

0x99ff,	// (0x00056cf8) bg_popup_sub_pane_cp2_ParamLimits

0x9a13,	// (0x00056d0c) find_pane_cp2_ParamLimits

0x9a13,	// (0x00056d0c) find_pane_cp2

0x9a29,	// (0x00056d22) grid_toobar_pane_ParamLimits

0x9b87,	// (0x00056e80) list_form_gen_pane_vc_ParamLimits

0x9b87,	// (0x00056e80) list_form_gen_pane_vc

0x9b9d,	// (0x00056e96) scroll_pane_cp8_vc_ParamLimits

0x9b9d,	// (0x00056e96) scroll_pane_cp8_vc

0x9c19,	// (0x00056f12) data_form_wide_pane_vc_ParamLimits

0x9c19,	// (0x00056f12) data_form_wide_pane_vc

0x9c25,	// (0x00056f1e) form_field_data_wide_pane_vc_g1

0x9c2d,	// (0x00056f26) form_field_data_wide_pane_vc_t1_ParamLimits

0x9c2d,	// (0x00056f26) form_field_data_wide_pane_vc_t1

0x7daf,	// (0x000550a8) input_focus_pane_cp6_vc_ParamLimits

0x7daf,	// (0x000550a8) input_focus_pane_cp6_vc

0x9edb,	// (0x000571d4) list_midp_pane_ParamLimits

0x9ee7,	// (0x000571e0) scroll_pane_cp16_ParamLimits

0x9ee7,	// (0x000571e0) scroll_pane_cp16

0x9f35,	// (0x0005722e) button_value_adjust_pane_ParamLimits

0x9f35,	// (0x0005722e) button_value_adjust_pane

0xaee0,	// (0x000581d9) button_value_adjust_pane_cp6_ParamLimits

0xaee0,	// (0x000581d9) button_value_adjust_pane_cp6

0xb03a,	// (0x00058333) settings_code_pane_cp_ParamLimits

0xb03a,	// (0x00058333) settings_code_pane_cp

0x25b9,	// (0x0004f8b2) cell_touch_pane_g1

0x25b9,	// (0x0004f8b2) cell_touch_pane_g2

0x0001,

0xf720,	// (0x0005ca19) cell_touch_pane_g

0xb61d,	// (0x00058916) cell_touch_pane_cp_ParamLimits

0xb61d,	// (0x00058916) cell_touch_pane_cp

0xb62d,	// (0x00058926) cell_touch_pane_ParamLimits

0xb62d,	// (0x00058926) cell_touch_pane

0x25b9,	// (0x0004f8b2) scroll_sc2_down_pane_g1

0x25b9,	// (0x0004f8b2) scroll_sc2_up_pane_g1

0x25c3,	// (0x0004f8bc) bg_set_opt_pane_cp4_vc

0xb63e,	// (0x00058937) list_set_graphic_pane_vc_g1_ParamLimits

0xb63e,	// (0x00058937) list_set_graphic_pane_vc_g1

0xb64a,	// (0x00058943) list_set_graphic_pane_vc_g2_ParamLimits

0xb64a,	// (0x00058943) list_set_graphic_pane_vc_g2

0x0001,

0xfa15,	// (0x0005cd0e) list_set_graphic_pane_vc_g_ParamLimits

0xfa15,	// (0x0005cd0e) list_set_graphic_pane_vc_g

0xb656,	// (0x0005894f) text_primary_small_cp13_vc_ParamLimits

0xb656,	// (0x0005894f) text_primary_small_cp13_vc

0xb66e,	// (0x00058967) list_set_graphic_pane_vc_ParamLimits

0xb66e,	// (0x00058967) list_set_graphic_pane_vc

0x25c3,	// (0x0004f8bc) input_focus_pane_cp2_vc

0x25b9,	// (0x0004f8b2) setting_code_pane_vc_g1

0xb682,	// (0x0005897b) setting_code_pane_vc_t1

0xb690,	// (0x00058989) set_text_pane_vc_t1_ParamLimits

0xb690,	// (0x00058989) set_text_pane_vc_t1

0x25c3,	// (0x0004f8bc) input_focus_pane_cp1_vc

0xb6ae,	// (0x000589a7) list_set_text_pane_vc

0x25b9,	// (0x0004f8b2) setting_text_pane_vc_g1

0x25c3,	// (0x0004f8bc) bg_set_opt_pane_cp2_vc

0xb6b8,	// (0x000589b1) setting_slider_graphic_pane_vc_g1

0xb6c0,	// (0x000589b9) setting_slider_graphic_pane_vc_t1

0xb6ce,	// (0x000589c7) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa1a,	// (0x0005cd13) setting_slider_graphic_pane_vc_t

0xb6dc,	// (0x000589d5) slider_set_pane_cp_vc

0xb6e4,	// (0x000589dd) slider_set_pane_vc_g1

0xb6ed,	// (0x000589e6) slider_set_pane_vc_g2

0x0006,

0xfa1f,	// (0x0005cd18) slider_set_pane_vc_g

0x7e16,	// (0x0005510f) set_opt_bg_pane_g1_copy1

0x7e1e,	// (0x00055117) set_opt_bg_pane_g2_copy1

0xb719,	// (0x00058a12) set_opt_bg_pane_g3_copy1

0x7e2e,	// (0x00055127) set_opt_bg_pane_g4_copy1

0x7e36,	// (0x0005512f) set_opt_bg_pane_g5_copy1

0x7e3e,	// (0x00055137) set_opt_bg_pane_g6_copy1

0xb723,	// (0x00058a1c) set_opt_bg_pane_g7_copy1

0xb72d,	// (0x00058a26) set_opt_bg_pane_g8_copy1

0xb737,	// (0x00058a30) set_opt_bg_pane_g9_copy1

0x25c3,	// (0x0004f8bc) bg_set_opt_pane_cp_vc

0xb741,	// (0x00058a3a) setting_slider_pane_vc_t1

0xb6c0,	// (0x000589b9) setting_slider_pane_vc_t2

0xb6ce,	// (0x000589c7) setting_slider_pane_vc_t3

0x0002,

0xfa2e,	// (0x0005cd27) setting_slider_pane_vc_t

0xb6dc,	// (0x000589d5) slider_set_pane_vc

0x5e71,	// (0x0005316a) volume_set_pane_vc_g1

0x5e7a,	// (0x00053173) volume_set_pane_vc_g2

0x5e83,	// (0x0005317c) volume_set_pane_vc_g3

0x5e8c,	// (0x00053185) volume_set_pane_vc_g4

0x5e95,	// (0x0005318e) volume_set_pane_vc_g5

0x5e9e,	// (0x00053197) volume_set_pane_vc_g6

0x5ea7,	// (0x000531a0) volume_set_pane_vc_g7

0x5eb0,	// (0x000531a9) volume_set_pane_vc_g8

0x5eb9,	// (0x000531b2) volume_set_pane_vc_g9

0x5ec2,	// (0x000531bb) volume_set_pane_vc_g10

0x0009,

0xf8cc,	// (0x0005cbc5) volume_set_pane_vc_g

0xb750,	// (0x00058a49) volume_set_pane_vc

0xb758,	// (0x00058a51) button_value_adjust_pane_cp1_vc

0xb762,	// (0x00058a5b) list_highlight_pane_cp2_vc

0xb76b,	// (0x00058a64) list_set_pane_vc_ParamLimits

0xb76b,	// (0x00058a64) list_set_pane_vc

0xb7d5,	// (0x00058ace) main_pane_set_vc_t1_ParamLimits

0xb7d5,	// (0x00058ace) main_pane_set_vc_t1

0xb7ea,	// (0x00058ae3) main_pane_set_vc_t2_ParamLimits

0xb7ea,	// (0x00058ae3) main_pane_set_vc_t2

0xb7fc,	// (0x00058af5) main_pane_set_vc_t3_ParamLimits

0xb7fc,	// (0x00058af5) main_pane_set_vc_t3

0xb810,	// (0x00058b09) main_pane_set_vc_t4_ParamLimits

0xb810,	// (0x00058b09) main_pane_set_vc_t4

0x0003,

0xfa35,	// (0x0005cd2e) main_pane_set_vc_t_ParamLimits

0xfa35,	// (0x0005cd2e) main_pane_set_vc_t

0xb824,	// (0x00058b1d) setting_code_pane_vc_ParamLimits

0xb824,	// (0x00058b1d) setting_code_pane_vc

0xb835,	// (0x00058b2e) setting_slider_graphic_pane_vc

0xb835,	// (0x00058b2e) setting_slider_pane_vc

0xb835,	// (0x00058b2e) setting_text_pane_vc

0xb835,	// (0x00058b2e) setting_volume_pane_vc

0xb83f,	// (0x00058b38) scroll_pane_cp121_vc

0x7d89,	// (0x00055082) set_content_pane_vc

0xb87d,	// (0x00058b76) button_value_adjust_pane_g1

0xb886,	// (0x00058b7f) button_value_adjust_pane_g2

0x0001,

0xfa94,	// (0x0005cd8d) button_value_adjust_pane_g

0xb88f,	// (0x00058b88) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb88f,	// (0x00058b88) form_field_slider_wide_pane_vc_t1

0xb8a3,	// (0x00058b9c) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb8a3,	// (0x00058b9c) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa99,	// (0x0005cd92) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa99,	// (0x0005cd92) form_field_slider_wide_pane_vc_t

0x76f8,	// (0x000549f1) input_focus_pane_cp10_vc_ParamLimits

0x76f8,	// (0x000549f1) input_focus_pane_cp10_vc

0xb8b5,	// (0x00058bae) slider_cont_pane_cp1_vc_ParamLimits

0xb8b5,	// (0x00058bae) slider_cont_pane_cp1_vc

0xb6e4,	// (0x000589dd) slider_form_pane_g1_cp2

0xb6ed,	// (0x000589e6) slider_form_pane_g2_cp2

0xb8ce,	// (0x00058bc7) form_field_slider_pane_vc_t3

0xb8dc,	// (0x00058bd5) form_field_slider_pane_vc_t4

0xb8ea,	// (0x00058be3) slider_form_pane_vc_ParamLimits

0xb8ea,	// (0x00058be3) slider_form_pane_vc

0xb8f7,	// (0x00058bf0) form_field_slider_pane_vc_t1_ParamLimits

0xb8f7,	// (0x00058bf0) form_field_slider_pane_vc_t1

0xb8a3,	// (0x00058b9c) form_field_slider_pane_vc_t2_ParamLimits

0xb8a3,	// (0x00058b9c) form_field_slider_pane_vc_t2

0x0001,

0xfaa9,	// (0x0005cda2) form_field_slider_pane_vc_t_ParamLimits

0xfaa9,	// (0x0005cda2) form_field_slider_pane_vc_t

0x76f8,	// (0x000549f1) input_focus_pane_cp9_vc_ParamLimits

0x76f8,	// (0x000549f1) input_focus_pane_cp9_vc

0xb913,	// (0x00058c0c) slider_cont_pane_vc_ParamLimits

0xb913,	// (0x00058c0c) slider_cont_pane_vc

0xb925,	// (0x00058c1e) list_form_graphic_pane_cp_vc_ParamLimits

0xb925,	// (0x00058c1e) list_form_graphic_pane_cp_vc

0x9c25,	// (0x00056f1e) form_field_popup_wide_pane_vc_g1

0xb93a,	// (0x00058c33) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb93a,	// (0x00058c33) form_field_popup_wide_pane_vc_t1

0x7daf,	// (0x000550a8) input_focus_pane_cp8_vc_ParamLimits

0x7daf,	// (0x000550a8) input_focus_pane_cp8_vc

0xb951,	// (0x00058c4a) list_form_wide_pane_vc_ParamLimits

0xb951,	// (0x00058c4a) list_form_wide_pane_vc

0xb95d,	// (0x00058c56) list_form_graphic_pane_vc_g1

0xb965,	// (0x00058c5e) list_form_graphic_pane_vc_t1_ParamLimits

0xb965,	// (0x00058c5e) list_form_graphic_pane_vc_t1

0x747c,	// (0x00054775) list_highlight_pane_cp5_vc_ParamLimits

0x747c,	// (0x00054775) list_highlight_pane_cp5_vc

0xb981,	// (0x00058c7a) list_form_graphic_pane_vc_ParamLimits

0xb981,	// (0x00058c7a) list_form_graphic_pane_vc

0x9c25,	// (0x00056f1e) form_field_popup_pane_vc_g1

0xb997,	// (0x00058c90) form_field_popup_pane_vc_t1_ParamLimits

0xb997,	// (0x00058c90) form_field_popup_pane_vc_t1

0x7daf,	// (0x000550a8) input_focus_pane_cp7_vc_ParamLimits

0x7daf,	// (0x000550a8) input_focus_pane_cp7_vc

0xb9ae,	// (0x00058ca7) list_form_pane_vc_ParamLimits

0xb9ae,	// (0x00058ca7) list_form_pane_vc

0xb9ba,	// (0x00058cb3) data_form_pane_vc_t1_ParamLimits

0xb9ba,	// (0x00058cb3) data_form_pane_vc_t1

0x7e16,	// (0x0005510f) input_focus_pane_vc_g1

0x7e1e,	// (0x00055117) input_focus_pane_vc_g2

0x7e26,	// (0x0005511f) input_focus_pane_vc_g3

0x7e2e,	// (0x00055127) input_focus_pane_vc_g4

0x7e36,	// (0x0005512f) input_focus_pane_vc_g5

0x7e3e,	// (0x00055137) input_focus_pane_vc_g6

0x7e46,	// (0x0005513f) input_focus_pane_vc_g7

0x7e4e,	// (0x00055147) input_focus_pane_vc_g8

0x7e56,	// (0x0005514f) input_focus_pane_vc_g9

0x25b9,	// (0x0004f8b2) input_focus_pane_vc_g10

0x0009,

0xf6a9,	// (0x0005c9a2) input_focus_pane_vc_g

0x9c19,	// (0x00056f12) data_form_pane_vc_ParamLimits

0x9c19,	// (0x00056f12) data_form_pane_vc

0x9c25,	// (0x00056f1e) form_field_data_pane_vc_g1

0xb9d7,	// (0x00058cd0) form_field_data_pane_vc_t1_ParamLimits

0xb9d7,	// (0x00058cd0) form_field_data_pane_vc_t1

0x7daf,	// (0x000550a8) input_focus_pane_vc_ParamLimits

0x7daf,	// (0x000550a8) input_focus_pane_vc

0xb9f1,	// (0x00058cea) button_value_adjust_pane_cp3_vc

0xb9f9,	// (0x00058cf2) button_value_adjust_pane_cp5_vc

0xba01,	// (0x00058cfa) form_field_data_pane_vc_ParamLimits

0xba01,	// (0x00058cfa) form_field_data_pane_vc

0xba1c,	// (0x00058d15) form_field_data_pane_vc_cp2

0xba24,	// (0x00058d1d) form_field_data_wide_pane_vc_ParamLimits

0xba24,	// (0x00058d1d) form_field_data_wide_pane_vc

0xba3e,	// (0x00058d37) form_field_data_wide_pane_vc_cp2

0xba46,	// (0x00058d3f) form_field_popup_pane_vc_ParamLimits

0xba46,	// (0x00058d3f) form_field_popup_pane_vc

0xba61,	// (0x00058d5a) form_field_popup_wide_pane_vc_ParamLimits

0xba61,	// (0x00058d5a) form_field_popup_wide_pane_vc

0xba7b,	// (0x00058d74) form_field_slider_pane_vc_ParamLimits

0xba7b,	// (0x00058d74) form_field_slider_pane_vc

0xba8e,	// (0x00058d87) form_field_slider_wide_pane_vc_ParamLimits

0xba8e,	// (0x00058d87) form_field_slider_wide_pane_vc

0xbaa1,	// (0x00058d9a) grid_touch_1_pane_ParamLimits

0xbaa1,	// (0x00058d9a) grid_touch_1_pane

0xbaad,	// (0x00058da6) grid_touch_2_pane_ParamLimits

0xbaad,	// (0x00058da6) grid_touch_2_pane

0x8ed3,	// (0x000561cc) touch_pane_g1_ParamLimits

0x8ed3,	// (0x000561cc) touch_pane_g1

0xbac7,	// (0x00058dc0) cell_app_pane_cp_wide_ParamLimits

0xbac7,	// (0x00058dc0) cell_app_pane_cp_wide

0xbad8,	// (0x00058dd1) grid_popup_fast_wide_pane_ParamLimits

0xbad8,	// (0x00058dd1) grid_popup_fast_wide_pane

0xbaec,	// (0x00058de5) scroll_pane_cp19_ParamLimits

0xbaec,	// (0x00058de5) scroll_pane_cp19

0x25c3,	// (0x0004f8bc) bg_popup_window_pane_cp20

0xbb00,	// (0x00058df9) listscroll_popup_fast_wide_pane

0x747c,	// (0x00054775) grid_indicator_nsta_pane

0xbb08,	// (0x00058e01) clock_nsta_pane_g1

0xbb11,	// (0x00058e0a) clock_nsta_pane_t1

0xbb2d,	// (0x00058e26) cell_indicator_nsta_pane_ParamLimits

0xbb2d,	// (0x00058e26) cell_indicator_nsta_pane

0xbb65,	// (0x00058e5e) cell_indicator_nsta_pane_g1

0xbb73,	// (0x00058e6c) cell_indicator_nsta_pane_g2

0x0001,

0xfab3,	// (0x0005cdac) cell_indicator_nsta_pane_g

0xbb89,	// (0x00058e82) clock_nsta_pane_cp

0xbb91,	// (0x00058e8a) indicator_nsta_pane_cp

0xbb99,	// (0x00058e92) nsta_clock_indic_pane_g1

0x7548,	// (0x00054841) grid_indicator_pane

0x8525,	// (0x0005581e) scroll_pane_cp29

0x5994,	// (0x00052c8d) indicator_nsta_pane_cp2_ParamLimits

0x5994,	// (0x00052c8d) indicator_nsta_pane_cp2

0x747c,	// (0x00054775) main_apps_wheel_pane

0x9db8,	// (0x000570b1) form_midp_field_text_pane_ParamLimits

0x9f07,	// (0x00057200) scroll_bar_cp050_ParamLimits

0xbc02,	// (0x00058efb) cell_indicator_pane_ParamLimits

0xbc02,	// (0x00058efb) cell_indicator_pane

0xbc1a,	// (0x00058f13) cell_indicator_pane_g1

0xbc24,	// (0x00058f1d) grid_wheel_folder_pane_ParamLimits

0xbc24,	// (0x00058f1d) grid_wheel_folder_pane

0xbc38,	// (0x00058f31) list_wheel_apps_pane_ParamLimits

0xbc38,	// (0x00058f31) list_wheel_apps_pane

0xbc4b,	// (0x00058f44) main_apps_wheel_pane_g1_ParamLimits

0xbc4b,	// (0x00058f44) main_apps_wheel_pane_g1

0xbc67,	// (0x00058f60) main_apps_wheel_pane_g2_ParamLimits

0xbc67,	// (0x00058f60) main_apps_wheel_pane_g2

0x0001,

0xfacf,	// (0x0005cdc8) main_apps_wheel_pane_g_ParamLimits

0xfacf,	// (0x0005cdc8) main_apps_wheel_pane_g

0xbc83,	// (0x00058f7c) main_apps_wheel_pane_t1_ParamLimits

0xbc83,	// (0x00058f7c) main_apps_wheel_pane_t1

0xbcac,	// (0x00058fa5) list_wheel_apps_pane_g1

0xbcb4,	// (0x00058fad) list_wheel_apps_pane_g2

0xbcbc,	// (0x00058fb5) list_wheel_apps_pane_g3

0xbcc4,	// (0x00058fbd) list_wheel_apps_pane_g4

0xbcce,	// (0x00058fc7) list_wheel_apps_pane_g5

0x0004,

0xfad4,	// (0x0005cdcd) list_wheel_apps_pane_g

0x8a82,	// (0x00055d7b) navi_icon_text_pane

0x95b7,	// (0x000568b0) aid_fill_nsta

0xbcef,	// (0x00058fe8) navi_icon_text_pane_g1

0xbcfe,	// (0x00058ff7) navi_icon_text_pane_t1

0x8918,	// (0x00055c11) list_set_graphic_pane_t1_ParamLimits

0x8918,	// (0x00055c11) list_set_graphic_pane_t1

0xa658,	// (0x00057951) popup_midp_note_alarm_window_t6_ParamLimits

0xa658,	// (0x00057951) popup_midp_note_alarm_window_t6

0xa66a,	// (0x00057963) popup_midp_note_alarm_window_t7_ParamLimits

0xa66a,	// (0x00057963) popup_midp_note_alarm_window_t7

0xa67c,	// (0x00057975) popup_midp_note_alarm_window_t8_ParamLimits

0xa67c,	// (0x00057975) popup_midp_note_alarm_window_t8

0xa68e,	// (0x00057987) popup_midp_note_alarm_window_t9_ParamLimits

0xa68e,	// (0x00057987) popup_midp_note_alarm_window_t9

0xa6a0,	// (0x00057999) popup_midp_note_alarm_window_t10_ParamLimits

0xa6a0,	// (0x00057999) popup_midp_note_alarm_window_t10

0xa6b2,	// (0x000579ab) popup_midp_note_alarm_window_t11_ParamLimits

0xa6b2,	// (0x000579ab) popup_midp_note_alarm_window_t11

0xa6c4,	// (0x000579bd) scroll_pane_cp17_ParamLimits

0xa6c4,	// (0x000579bd) scroll_pane_cp17

0x5e71,	// (0x0005316a) volume_small_pane_cp_g1

0x639e,	// (0x00053697) volume_small_pane_cp_g2

0x63a7,	// (0x000536a0) volume_small_pane_cp_g3

0x63b0,	// (0x000536a9) volume_small_pane_cp_g4

0x63b9,	// (0x000536b2) volume_small_pane_cp_g5

0x63c2,	// (0x000536bb) volume_small_pane_cp_g6

0x63cb,	// (0x000536c4) volume_small_pane_cp_g7

0x63d4,	// (0x000536cd) volume_small_pane_cp_g8

0x63dd,	// (0x000536d6) volume_small_pane_cp_g9

0x63e6,	// (0x000536df) volume_small_pane_cp_g10

0x8ce3,	// (0x00055fdc) midp_ticker_pane_g1_ParamLimits

0x8cef,	// (0x00055fe8) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x0005ca6e) midp_ticker_pane_g_ParamLimits

0x8cfb,	// (0x00055ff4) midp_ticker_pane_t1_ParamLimits

0x95cd,	// (0x000568c6) aid_fill_nsta_2

0x9ef3,	// (0x000571ec) list_form2_midp_pane

0xb081,	// (0x0005837a) midp_editing_number_pane_ParamLimits

0xb090,	// (0x00058389) midp_ticker_pane_ParamLimits

0xbd13,	// (0x0005900c) form2_midp_field_pane

0xbd37,	// (0x00059030) scroll_pane_cp51

0xbd57,	// (0x00059050) form2_midp_button_pane_ParamLimits

0xbd57,	// (0x00059050) form2_midp_button_pane

0xbd69,	// (0x00059062) form2_midp_content_pane_ParamLimits

0xbd69,	// (0x00059062) form2_midp_content_pane

0xbd83,	// (0x0005907c) form2_midp_field_choice_group_pane

0xbd8b,	// (0x00059084) form2_midp_field_pane_g1

0xbd93,	// (0x0005908c) form2_midp_field_pane_g2

0xbd9b,	// (0x00059094) form2_midp_field_pane_g3

0xbda3,	// (0x0005909c) form2_midp_field_pane_g4

0x0003,

0xfaf9,	// (0x0005cdf2) form2_midp_field_pane_g

0xbdab,	// (0x000590a4) form2_midp_gauge_slider_pane

0xbdb3,	// (0x000590ac) form2_midp_gauge_wait_pane

0xbdbb,	// (0x000590b4) form2_midp_image_pane_ParamLimits

0xbdbb,	// (0x000590b4) form2_midp_image_pane

0xbdd6,	// (0x000590cf) form2_midp_label_pane_ParamLimits

0xbdd6,	// (0x000590cf) form2_midp_label_pane

0xbdef,	// (0x000590e8) form2_midp_label_pane_cp_ParamLimits

0xbdef,	// (0x000590e8) form2_midp_label_pane_cp

0xbe0e,	// (0x00059107) form2_midp_string_pane_ParamLimits

0xbe0e,	// (0x00059107) form2_midp_string_pane

0x63ef,	// (0x000536e8) form2_midp_text_pane_ParamLimits

0x63ef,	// (0x000536e8) form2_midp_text_pane

0xbe20,	// (0x00059119) form2_midp_time_pane

0xbe30,	// (0x00059129) input_focus_pane_cp51_ParamLimits

0xbe30,	// (0x00059129) input_focus_pane_cp51

0xbe48,	// (0x00059141) form2_midp_label_pane_t1_ParamLimits

0xbe48,	// (0x00059141) form2_midp_label_pane_t1

0x6408,	// (0x00053701) form2_mdip_text_pane_t1_ParamLimits

0x6408,	// (0x00053701) form2_mdip_text_pane_t1

0x641f,	// (0x00053718) form2_midp_time_pane_t1

0xbe86,	// (0x0005917f) form2_midp_gauge_slider_pane_t1

0xbe98,	// (0x00059191) form2_midp_gauge_slider_pane_t2

0xbeaa,	// (0x000591a3) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb02,	// (0x0005cdfb) form2_midp_gauge_slider_pane_t

0xbebc,	// (0x000591b5) form2_midp_slider_pane

0xbec8,	// (0x000591c1) form2_midp_gauge_wait_pane_t1

0xbed6,	// (0x000591cf) form2_midp_wait_pane_ParamLimits

0xbed6,	// (0x000591cf) form2_midp_wait_pane

0xbf01,	// (0x000591fa) list_single_2graphic_pane_cp4_ParamLimits

0xbf01,	// (0x000591fa) list_single_2graphic_pane_cp4

0x9c54,	// (0x00056f4d) list_single_midp_graphic_pane_cp_ParamLimits

0x9c54,	// (0x00056f4d) list_single_midp_graphic_pane_cp

0x25c3,	// (0x0004f8bc) list_highlight_pane_cp20

0xbf12,	// (0x0005920b) list_single_2graphic_pane_g1_cp4

0xb520,	// (0x00058819) list_single_2graphic_pane_g2_cp4

0xbf1a,	// (0x00059213) list_single_2graphic_pane_t1_cp4

0x747c,	// (0x00054775) list_highlight_pane_cp21

0xbf29,	// (0x00059222) list_single_midp_graphic_pane_g4_cp

0xbf38,	// (0x00059231) list_single_midp_graphic_pane_t1_cp

0xbf4d,	// (0x00059246) form2_mdip_string_pane_t1_ParamLimits

0xbf4d,	// (0x00059246) form2_mdip_string_pane_t1

0x25c3,	// (0x0004f8bc) bg_wml_button_pane_cp2

0x25b9,	// (0x0004f8b2) form2_midp_image_pane_g1

0x7d35,	// (0x0005502e) list_double_large_graphic_pane_g5_ParamLimits

0x7d35,	// (0x0005502e) list_double_large_graphic_pane_g5

0x8c0e,	// (0x00055f07) midp_form_pane_ParamLimits

0x747c,	// (0x00054775) main_apps_wheel_pane_ParamLimits

0x9361,	// (0x0005665a) popup_preview_window_ParamLimits

0x9361,	// (0x0005665a) popup_preview_window

0x9548,	// (0x00056841) popup_touch_info_window_ParamLimits

0x9548,	// (0x00056841) popup_touch_info_window

0x956a,	// (0x00056863) popup_touch_menu_window_ParamLimits

0x956a,	// (0x00056863) popup_touch_menu_window

0x25af,	// (0x0004f8a8) bg_popup_sub_pane_cp6

0xbfa7,	// (0x000592a0) list_touch_menu_pane

0xbfaf,	// (0x000592a8) list_single_touch_menu_pane_ParamLimits

0xbfaf,	// (0x000592a8) list_single_touch_menu_pane

0xbfca,	// (0x000592c3) list_single_touch_menu_pane_t1

0x747c,	// (0x00054775) bg_popup_sub_pane_cp7_ParamLimits

0x747c,	// (0x00054775) bg_popup_sub_pane_cp7

0xbfd8,	// (0x000592d1) heading_sub_pane

0xbfe0,	// (0x000592d9) list_touch_info_pane_ParamLimits

0xbfe0,	// (0x000592d9) list_touch_info_pane

0xbfef,	// (0x000592e8) list_single_touch_info_pane_ParamLimits

0xbfef,	// (0x000592e8) list_single_touch_info_pane

0xc001,	// (0x000592fa) list_single_touch_info_pane_t1

0xc00f,	// (0x00059308) list_single_touch_info_pane_t2

0x0001,

0xfb10,	// (0x0005ce09) list_single_touch_info_pane_t

0x8c06,	// (0x00055eff) bg_popup_heading_pane_cp

0xc01d,	// (0x00059316) heading_sub_pane_t1

0x9bb3,	// (0x00056eac) bg_popup_preview_window_pane_cp_ParamLimits

0x9bb3,	// (0x00056eac) bg_popup_preview_window_pane_cp

0xbfd8,	// (0x000592d1) heading_preview_pane

0xbfe0,	// (0x000592d9) list_preview_pane_ParamLimits

0xbfe0,	// (0x000592d9) list_preview_pane

0xc02b,	// (0x00059324) popup_preview_window_g1

0xbfef,	// (0x000592e8) list_single_preview_pane_ParamLimits

0xbfef,	// (0x000592e8) list_single_preview_pane

0xc033,	// (0x0005932c) list_single_preview_pane_g1

0xc03b,	// (0x00059334) list_single_preview_pane_t1

0xc001,	// (0x000592fa) list_single_preview_pane_t2

0x0001,

0xfb15,	// (0x0005ce0e) list_single_preview_pane_t

0xc049,	// (0x00059342) bg_popup_heading_pane_cp2_ParamLimits

0xc049,	// (0x00059342) bg_popup_heading_pane_cp2

0xc05f,	// (0x00059358) heading_preview_pane_g1

0xc067,	// (0x00059360) heading_preview_pane_t1_ParamLimits

0xc067,	// (0x00059360) heading_preview_pane_t1

0x756b,	// (0x00054864) soft_indicator_pane_t1_ParamLimits

0x7c76,	// (0x00054f6f) scroll_pane_ParamLimits

0x8421,	// (0x0005571a) scroll_sc2_left_pane

0x842a,	// (0x00055723) scroll_sc2_right_pane

0x8449,	// (0x00055742) scroll_bg_pane_g1_ParamLimits

0x845e,	// (0x00055757) scroll_bg_pane_g2_ParamLimits

0x8476,	// (0x0005576f) scroll_bg_pane_g3_ParamLimits

0xf700,	// (0x0005c9f9) scroll_bg_pane_g_ParamLimits

0x8449,	// (0x00055742) scroll_handle_pane_g1_ParamLimits

0x8498,	// (0x00055791) scroll_handle_pane_g2_ParamLimits

0x8476,	// (0x0005576f) scroll_handle_pane_g3_ParamLimits

0xf707,	// (0x0005ca00) scroll_handle_pane_g_ParamLimits

0x8fac,	// (0x000562a5) popup_choice_list_window_ParamLimits

0x8fac,	// (0x000562a5) popup_choice_list_window

0x9a0b,	// (0x00056d04) choice_list_pane

0x9a8d,	// (0x00056d86) cell_toolbar_pane_t1

0x9ab5,	// (0x00056dae) toolbar_button_pane_ParamLimits

0xab94,	// (0x00057e8d) ai_gene_pane_1_t2_ParamLimits

0xab94,	// (0x00057e8d) ai_gene_pane_1_t2

0x0001,

0xf928,	// (0x0005cc21) ai_gene_pane_1_t_ParamLimits

0xf928,	// (0x0005cc21) ai_gene_pane_1_t

0xc084,	// (0x0005937d) scroll_sc2_left_pane_g1

0xc084,	// (0x0005937d) scroll_sc2_right_pane_g1

0x8f84,	// (0x0005627d) bg_popup_sub_pane_cp10

0xc08e,	// (0x00059387) list_choice_list_pane

0xc0a5,	// (0x0005939e) list_single_choice_list_pane_ParamLimits

0xc0a5,	// (0x0005939e) list_single_choice_list_pane

0xc0b9,	// (0x000593b2) list_single_choice_list_pane_g1

0xc0c1,	// (0x000593ba) list_single_choice_list_pane_t1_ParamLimits

0xc0c1,	// (0x000593ba) list_single_choice_list_pane_t1

0xc0d6,	// (0x000593cf) choice_list_pane_g1

0xc0de,	// (0x000593d7) choice_list_pane_t1

0x25af,	// (0x0004f8a8) input_focus_pane_cp11

0x82fb,	// (0x000555f4) title_pane_stacon_g2_ParamLimits

0x82fb,	// (0x000555f4) title_pane_stacon_g2

0x0002,

0xf6e6,	// (0x0005c9df) title_pane_stacon_g_ParamLimits

0xf6e6,	// (0x0005c9df) title_pane_stacon_g

0x8c06,	// (0x00055eff) cursor_press_pane

0x9062,	// (0x0005635b) popup_fep_hwr_window_ParamLimits

0x9062,	// (0x0005635b) popup_fep_hwr_window

0x90ec,	// (0x000563e5) popup_fep_vkb_window_ParamLimits

0x90ec,	// (0x000563e5) popup_fep_vkb_window

0xc0ec,	// (0x000593e5) cursor_press_pane_g1

0x0002,

0xfb3e,	// (0x0005ce37) fep_vkb_side_pane_g_ParamLimits

0x646b,	// (0x00053764) fep_hwr_candidate_pane_ParamLimits

0x646b,	// (0x00053764) fep_hwr_candidate_pane

0x6495,	// (0x0005378e) fep_hwr_side_pane_ParamLimits

0x6495,	// (0x0005378e) fep_hwr_side_pane

0x64b7,	// (0x000537b0) fep_hwr_top_pane_ParamLimits

0x64b7,	// (0x000537b0) fep_hwr_top_pane

0x64cf,	// (0x000537c8) fep_hwr_write_pane_ParamLimits

0x64cf,	// (0x000537c8) fep_hwr_write_pane

0xfb3e,	// (0x0005ce37) fep_vkb_side_pane_g

0xc0f4,	// (0x000593ed) fep_hwr_top_pane_g1

0xc106,	// (0x000593ff) fep_hwr_top_pane_g2

0x6509,	// (0x00053802) fep_hwr_top_pane_g3

0x0002,

0xfb1a,	// (0x0005ce13) fep_hwr_top_pane_g

0x651e,	// (0x00053817) fep_hwr_top_text_pane

0x85ed,	// (0x000558e6) fep_hwr_top_text_pane_g1

0xc13c,	// (0x00059435) fep_hwr_top_text_pane_t1

0x6628,	// (0x00053921) fep_hwr_candidate_pane_g1

0xc387,	// (0x00059680) fep_vkb_keypad_pane_g3_ParamLimits

0xc387,	// (0x00059680) fep_vkb_keypad_pane_g3

0xc3b3,	// (0x000596ac) fep_vkb_keypad_pane_g4_ParamLimits

0xc3b3,	// (0x000596ac) fep_vkb_keypad_pane_g4

0xc42a,	// (0x00059723) fep_vkb_bottom_pane_g2_ParamLimits

0xc42a,	// (0x00059723) fep_vkb_bottom_pane_g2

0x0001,

0xfb45,	// (0x0005ce3e) fep_vkb_bottom_pane_g_ParamLimits

0xfb45,	// (0x0005ce3e) fep_vkb_bottom_pane_g

0xc084,	// (0x0005937d) cell_vkb_side_pane_g2

0x0001,

0xfb4f,	// (0x0005ce48) cell_vkb_side_pane_g

0xc4b5,	// (0x000597ae) cell_vkb_side_pane_t1

0xc4c3,	// (0x000597bc) cell_vkb_side_pane_t1_copy1

0xc084,	// (0x0005937d) bg_fep_vkb_candidate_pane_g2

0xc607,	// (0x00059900) cell_vkb_candidate_pane_ParamLimits

0xc14a,	// (0x00059443) aid_size_cell_vkb_ParamLimits

0xc14a,	// (0x00059443) aid_size_cell_vkb

0xc607,	// (0x00059900) cell_vkb_candidate_pane

0x664f,	// (0x00053948) bg_popup_fep_shadow_pane_g1

0xc1dc,	// (0x000594d5) fep_vkb_bottom_pane_ParamLimits

0xc1dc,	// (0x000594d5) fep_vkb_bottom_pane

0xc219,	// (0x00059512) fep_vkb_candidate_pane_ParamLimits

0xc219,	// (0x00059512) fep_vkb_candidate_pane

0xc235,	// (0x0005952e) fep_vkb_keypad_pane_ParamLimits

0xc235,	// (0x0005952e) fep_vkb_keypad_pane

0xc268,	// (0x00059561) fep_vkb_side_pane_ParamLimits

0xc268,	// (0x00059561) fep_vkb_side_pane

0xc2a4,	// (0x0005959d) fep_vkb_top_pane_ParamLimits

0xc2a4,	// (0x0005959d) fep_vkb_top_pane

0xc2e0,	// (0x000595d9) fep_vkb_top_pane_g1_ParamLimits

0xc2e0,	// (0x000595d9) fep_vkb_top_pane_g1

0xc2ef,	// (0x000595e8) fep_vkb_top_pane_g2_ParamLimits

0xc2ef,	// (0x000595e8) fep_vkb_top_pane_g2

0xc2fe,	// (0x000595f7) fep_vkb_top_pane_g3_ParamLimits

0xc2fe,	// (0x000595f7) fep_vkb_top_pane_g3

0x0003,

0xfb35,	// (0x0005ce2e) fep_vkb_top_pane_g_ParamLimits

0xfb35,	// (0x0005ce2e) fep_vkb_top_pane_g

0xc31c,	// (0x00059615) fep_vkb_top_text_pane_ParamLimits

0xc31c,	// (0x00059615) fep_vkb_top_text_pane

0xc32d,	// (0x00059626) fep_vkb_side_pane_g1_ParamLimits

0xc32d,	// (0x00059626) fep_vkb_side_pane_g1

0xc376,	// (0x0005966f) grid_vkb_side_pane_ParamLimits

0xc376,	// (0x0005966f) grid_vkb_side_pane

0x6657,	// (0x00053950) bg_popup_fep_shadow_pane_g2

0x6660,	// (0x00053959) bg_popup_fep_shadow_pane_g3

0x6668,	// (0x00053961) bg_popup_fep_shadow_pane_g4

0x6671,	// (0x0005396a) bg_popup_fep_shadow_pane_g5

0x667b,	// (0x00053974) bg_popup_fep_shadow_pane_g6

0x6683,	// (0x0005397c) bg_popup_fep_shadow_pane_g7

0x7e2e,	// (0x00055127) bg_popup_fep_shadow_pane_g8

0xc3d5,	// (0x000596ce) grid_vkb_keypad_number_pane_ParamLimits

0xc3d5,	// (0x000596ce) grid_vkb_keypad_number_pane

0xc3e9,	// (0x000596e2) grid_vkb_keypad_pane_ParamLimits

0xc3e9,	// (0x000596e2) grid_vkb_keypad_pane

0xc40f,	// (0x00059708) fep_vkb_bottom_pane_g1_ParamLimits

0xc40f,	// (0x00059708) fep_vkb_bottom_pane_g1

0xc438,	// (0x00059731) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc438,	// (0x00059731) grid_vkb_keypad_bottom_left_pane

0xc44d,	// (0x00059746) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc44d,	// (0x00059746) grid_vkb_keypad_bottom_right_pane

0xc462,	// (0x0005975b) fep_vkb_top_text_pane_g1

0xc47d,	// (0x00059776) fep_vkb_top_text_pane_t1

0xc492,	// (0x0005978b) cell_vkb_side_pane_ParamLimits

0xc492,	// (0x0005978b) cell_vkb_side_pane

0xc084,	// (0x0005937d) cell_vkb_side_pane_g1

0xc4d1,	// (0x000597ca) cell_vkb_keypad_pane_ParamLimits

0xc4d1,	// (0x000597ca) cell_vkb_keypad_pane

0xc55e,	// (0x00059857) cell_vkb_keypad_pane_g1

0x0008,

0xfb62,	// (0x0005ce5b) bg_popup_fep_shadow_pane_g

0x6695,	// (0x0005398e) cell_hwr_side_pane_g1

0x6695,	// (0x0005398e) cell_hwr_side_pane_g2

0xc568,	// (0x00059861) cell_vkb_keypad_pane_t1

0xc576,	// (0x0005986f) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc576,	// (0x0005986f) cell_vkb_keypad_bottom_left_pane

0xc593,	// (0x0005988c) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc593,	// (0x0005988c) cell_vkb_keypad_bottom_right_pane

0xc084,	// (0x0005937d) cell_vkb_keypad_bottom_left_pane_g1

0xc084,	// (0x0005937d) cell_vkb_keypad_bottom_right_pane_g1

0xc5cc,	// (0x000598c5) cell_vkb_keypad_number_pane_ParamLimits

0xc5cc,	// (0x000598c5) cell_vkb_keypad_number_pane

0xc5eb,	// (0x000598e4) cell_vkb_keypad_number_pane_g1

0xc5f5,	// (0x000598ee) cell_vkb_keypad_number_pane_g2

0xc5fe,	// (0x000598f7) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb54,	// (0x0005ce4d) cell_vkb_keypad_number_pane_g

0xc568,	// (0x00059861) cell_vkb_keypad_number_pane_t1

0xc628,	// (0x00059921) fep_vkb_candidate_pane_g1

0x0001,

0xfb75,	// (0x0005ce6e) cell_hwr_side_pane_g

0xc641,	// (0x0005993a) cell_hwr_side_pane_t1

0x669f,	// (0x00053998) cell_hwr_side_pane_t1_copy1

0x66ad,	// (0x000539a6) cell_hwr_candidate_pane_g1

0x66dc,	// (0x000539d5) cell_hwr_candidate_pane_t1

0xc084,	// (0x0005937d) cell_vkb_candidate_pane_g2

0xc685,	// (0x0005997e) cell_vkb_candidate_pane_t1

0x6432,	// (0x0005372b) bg_popup_fep_shadow_pane_ParamLimits

0x6432,	// (0x0005372b) bg_popup_fep_shadow_pane

0x64e9,	// (0x000537e2) bg_fep_hwr_top_pane_g4

0xc118,	// (0x00059411) bg_hwr_side_pane_g1_ParamLimits

0xc118,	// (0x00059411) bg_hwr_side_pane_g1

0x655c,	// (0x00053855) cell_hwr_side_pane_ParamLimits

0x655c,	// (0x00053855) cell_hwr_side_pane

0x6599,	// (0x00053892) fep_hwr_write_pane_g1_ParamLimits

0x6599,	// (0x00053892) fep_hwr_write_pane_g1

0x65a6,	// (0x0005389f) fep_hwr_write_pane_g2_ParamLimits

0x65a6,	// (0x0005389f) fep_hwr_write_pane_g2

0x65b3,	// (0x000538ac) fep_hwr_write_pane_g3_ParamLimits

0x65b3,	// (0x000538ac) fep_hwr_write_pane_g3

0x65c1,	// (0x000538ba) fep_hwr_write_pane_g4_ParamLimits

0x65c1,	// (0x000538ba) fep_hwr_write_pane_g4

0x0005,

0xfb21,	// (0x0005ce1a) fep_hwr_write_pane_g_ParamLimits

0xfb21,	// (0x0005ce1a) fep_hwr_write_pane_g

0x64e9,	// (0x000537e2) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x64e9,	// (0x000537e2) bg_fep_hwr_candidate_pane_g2

0x65d6,	// (0x000538cf) cell_hwr_candidate_pane_ParamLimits

0x65d6,	// (0x000538cf) cell_hwr_candidate_pane

0x6628,	// (0x00053921) fep_hwr_candidate_pane_g1_ParamLimits

0xc178,	// (0x00059471) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc178,	// (0x00059471) bg_popup_fep_shadow_pane_cp2

0xc30e,	// (0x00059607) fep_vkb_top_pane_g4_ParamLimits

0xc30e,	// (0x00059607) fep_vkb_top_pane_g4

0xc354,	// (0x0005964d) fep_vkb_side_pane_g2_ParamLimits

0xc354,	// (0x0005964d) fep_vkb_side_pane_g2

0x5342,	// (0x0005263b) list_setting_pane_t4_ParamLimits

0x5342,	// (0x0005263b) list_setting_pane_t4

0x53de,	// (0x000526d7) list_setting_number_pane_t5_ParamLimits

0x53de,	// (0x000526d7) list_setting_number_pane_t5

0x8634,	// (0x0005592d) list_double_heading_pane_cp2_ParamLimits

0x8634,	// (0x0005592d) list_double_heading_pane_cp2

0x7dc9,	// (0x000550c2) list_double_heading_pane_g1_cp2_ParamLimits

0x7dc9,	// (0x000550c2) list_double_heading_pane_g1_cp2

0x7dd5,	// (0x000550ce) list_double_heading_pane_g2_cp2_ParamLimits

0x7dd5,	// (0x000550ce) list_double_heading_pane_g2_cp2

0xc693,	// (0x0005998c) list_double_heading_pane_t1_cp2_ParamLimits

0xc693,	// (0x0005998c) list_double_heading_pane_t1_cp2

0xc6a9,	// (0x000599a2) list_double_heading_pane_t2_cp2_ParamLimits

0xc6a9,	// (0x000599a2) list_double_heading_pane_t2_cp2

0x25a7,	// (0x0004f8a0) aid_value_unit2

0x4dad,	// (0x000520a6) popup_preview_fixed_window

0x7706,	// (0x000549ff) bg_popup_preview_window_pane_cp02

0xc6bb,	// (0x000599b4) list_preview_fixed_pane

0xc701,	// (0x000599fa) list_empty_pane_fp_ParamLimits

0xc701,	// (0x000599fa) list_empty_pane_fp

0xc701,	// (0x000599fa) list_single_cale_day_pane_fp_ParamLimits

0xc701,	// (0x000599fa) list_single_cale_day_pane_fp

0xc701,	// (0x000599fa) list_single_graphic_heading_pane_fp_ParamLimits

0xc701,	// (0x000599fa) list_single_graphic_heading_pane_fp

0xc701,	// (0x000599fa) list_single_graphic_pane_fp_ParamLimits

0xc701,	// (0x000599fa) list_single_graphic_pane_fp

0xc701,	// (0x000599fa) list_single_heading_pane_fp_ParamLimits

0xc701,	// (0x000599fa) list_single_heading_pane_fp

0xc701,	// (0x000599fa) list_single_pane_fp_ParamLimits

0xc701,	// (0x000599fa) list_single_pane_fp

0xc71a,	// (0x00059a13) list_single_pane_fp_g1_ParamLimits

0xc71a,	// (0x00059a13) list_single_pane_fp_g1

0x7d29,	// (0x00055022) list_single_pane_fp_g2_ParamLimits

0x7d29,	// (0x00055022) list_single_pane_fp_g2

0x81c7,	// (0x000554c0) list_single_pane_fp_g3_ParamLimits

0x81c7,	// (0x000554c0) list_single_pane_fp_g3

0xc726,	// (0x00059a1f) list_single_pane_fp_g4_ParamLimits

0xc726,	// (0x00059a1f) list_single_pane_fp_g4

0x0003,

0xfb88,	// (0x0005ce81) list_single_pane_fp_g_ParamLimits

0xfb88,	// (0x0005ce81) list_single_pane_fp_g

0x66fa,	// (0x000539f3) list_single_pane_fp_t1_ParamLimits

0x66fa,	// (0x000539f3) list_single_pane_fp_t1

0x6711,	// (0x00053a0a) list_single_graphic_pane_fp_g1_ParamLimits

0x6711,	// (0x00053a0a) list_single_graphic_pane_fp_g1

0xc71a,	// (0x00059a13) list_single_graphic_pane_fp_g2_ParamLimits

0xc71a,	// (0x00059a13) list_single_graphic_pane_fp_g2

0x7d29,	// (0x00055022) list_single_graphic_pane_fp_g3_ParamLimits

0x7d29,	// (0x00055022) list_single_graphic_pane_fp_g3

0x81c7,	// (0x000554c0) list_single_graphic_pane_fp_g4_ParamLimits

0x81c7,	// (0x000554c0) list_single_graphic_pane_fp_g4

0xc726,	// (0x00059a1f) list_single_graphic_pane_fp_g5_ParamLimits

0xc726,	// (0x00059a1f) list_single_graphic_pane_fp_g5

0x0004,

0xfb91,	// (0x0005ce8a) list_single_graphic_pane_fp_g_ParamLimits

0xfb91,	// (0x0005ce8a) list_single_graphic_pane_fp_g

0x671d,	// (0x00053a16) list_single_graphic_pane_fp_t1_ParamLimits

0x671d,	// (0x00053a16) list_single_graphic_pane_fp_t1

0x6711,	// (0x00053a0a) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6711,	// (0x00053a0a) list_single_graphic_heading_pane_fp_g1

0xc71a,	// (0x00059a13) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc71a,	// (0x00059a13) list_single_graphic_heading_pane_fp_g2

0x7d29,	// (0x00055022) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7d29,	// (0x00055022) list_single_graphic_heading_pane_fp_g3

0x81c7,	// (0x000554c0) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x81c7,	// (0x000554c0) list_single_graphic_heading_pane_fp_g4

0xc726,	// (0x00059a1f) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc726,	// (0x00059a1f) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb91,	// (0x0005ce8a) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb91,	// (0x0005ce8a) list_single_graphic_heading_pane_fp_g

0x6733,	// (0x00053a2c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6733,	// (0x00053a2c) list_single_graphic_heading_pane_fp_t1

0x6749,	// (0x00053a42) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6749,	// (0x00053a42) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9c,	// (0x0005ce95) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9c,	// (0x0005ce95) list_single_graphic_heading_pane_fp_t

0x675b,	// (0x00053a54) list_single_cale_day_pane_fp_g1_ParamLimits

0x675b,	// (0x00053a54) list_single_cale_day_pane_fp_g1

0xc732,	// (0x00059a2b) list_single_cale_day_pane_fp_g2_ParamLimits

0xc732,	// (0x00059a2b) list_single_cale_day_pane_fp_g2

0x81db,	// (0x000554d4) list_single_cale_day_pane_fp_g3_ParamLimits

0x81db,	// (0x000554d4) list_single_cale_day_pane_fp_g3

0x8203,	// (0x000554fc) list_single_cale_day_pane_fp_g4_ParamLimits

0x8203,	// (0x000554fc) list_single_cale_day_pane_fp_g4

0x8227,	// (0x00055520) list_single_cale_day_pane_fp_g5_ParamLimits

0x8227,	// (0x00055520) list_single_cale_day_pane_fp_g5

0x0004,

0xfba1,	// (0x0005ce9a) list_single_cale_day_pane_fp_g_ParamLimits

0xfba1,	// (0x0005ce9a) list_single_cale_day_pane_fp_g

0x6793,	// (0x00053a8c) list_single_cale_day_pane_fp_t1_ParamLimits

0x6793,	// (0x00053a8c) list_single_cale_day_pane_fp_t1

0x67b9,	// (0x00053ab2) list_single_cale_day_pane_fp_t2_ParamLimits

0x67b9,	// (0x00053ab2) list_single_cale_day_pane_fp_t2

0x67d2,	// (0x00053acb) list_single_cale_day_pane_fp_t3_ParamLimits

0x67d2,	// (0x00053acb) list_single_cale_day_pane_fp_t3

0x0002,

0xfbac,	// (0x0005cea5) list_single_cale_day_pane_fp_t_ParamLimits

0xfbac,	// (0x0005cea5) list_single_cale_day_pane_fp_t

0xc71a,	// (0x00059a13) list_empty_pane_fp_g1_ParamLimits

0xc71a,	// (0x00059a13) list_empty_pane_fp_g1

0x67eb,	// (0x00053ae4) list_empty_pane_fp_t1

0x67f9,	// (0x00053af2) list_empty_pane_fp_t2

0x0001,

0xfbb3,	// (0x0005ceac) list_empty_pane_fp_t

0xc71a,	// (0x00059a13) list_single_heading_pane_fp_g1_ParamLimits

0xc71a,	// (0x00059a13) list_single_heading_pane_fp_g1

0x7d29,	// (0x00055022) list_single_heading_pane_fp_g2_ParamLimits

0x7d29,	// (0x00055022) list_single_heading_pane_fp_g2

0x81c7,	// (0x000554c0) list_single_heading_pane_fp_g3_ParamLimits

0x81c7,	// (0x000554c0) list_single_heading_pane_fp_g3

0x0002,

0xfbb8,	// (0x0005ceb1) list_single_heading_pane_fp_g_ParamLimits

0xfbb8,	// (0x0005ceb1) list_single_heading_pane_fp_g

0x6807,	// (0x00053b00) list_single_heading_pane_fp_t1_ParamLimits

0x6807,	// (0x00053b00) list_single_heading_pane_fp_t1

0x6819,	// (0x00053b12) list_single_heading_pane_fp_t2_ParamLimits

0x6819,	// (0x00053b12) list_single_heading_pane_fp_t2

0x0001,

0xfbbf,	// (0x0005ceb8) list_single_heading_pane_fp_t_ParamLimits

0xfbbf,	// (0x0005ceb8) list_single_heading_pane_fp_t

0x7fcd,	// (0x000552c6) aid_size_cell_fast

0x7678,	// (0x00054971) soft_indicator_pane_cp1_t1

0x800a,	// (0x00055303) cell_app_pane_cp2_ParamLimits

0x800a,	// (0x00055303) cell_app_pane_cp2

0x6454,	// (0x0005374d) fep_hwr_candidate_drop_down_list_pane

0x6642,	// (0x0005393b) fep_hwr_candidate_pane_g3_ParamLimits

0x6642,	// (0x0005393b) fep_hwr_candidate_pane_g3

0x374d,	// (0x00050a46) fep_hwr_candidate_pane_g4_ParamLimits

0x374d,	// (0x00050a46) fep_hwr_candidate_pane_g4

0x0002,

0xfb2e,	// (0x0005ce27) fep_hwr_candidate_pane_g_ParamLimits

0xfb2e,	// (0x0005ce27) fep_hwr_candidate_pane_g

0xc208,	// (0x00059501) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc208,	// (0x00059501) fep_vkb_candidate_drop_down_list_pane

0xc630,	// (0x00059929) fep_vkb_candidate_pane_g3

0xc638,	// (0x00059931) fep_vkb_candidate_pane_g4

0x0002,

0xfb5b,	// (0x0005ce54) fep_vkb_candidate_pane_g

0x66ad,	// (0x000539a6) cell_hwr_candidate_pane_g1_ParamLimits

0x66bb,	// (0x000539b4) cell_hwr_candidate_pane_g3_ParamLimits

0x66bb,	// (0x000539b4) cell_hwr_candidate_pane_g3

0xdeaf,	// (0x0005b1a8) cell_hwr_candidate_pane_g4_ParamLimits

0xdeaf,	// (0x0005b1a8) cell_hwr_candidate_pane_g4

0x0002,

0xfb7a,	// (0x0005ce73) cell_hwr_candidate_pane_g_ParamLimits

0xfb7a,	// (0x0005ce73) cell_hwr_candidate_pane_g

0xc64f,	// (0x00059948) cell_vkb_candidate_pane_g3_ParamLimits

0xc64f,	// (0x00059948) cell_vkb_candidate_pane_g3

0xc66a,	// (0x00059963) cell_vkb_candidate_pane_g4_ParamLimits

0xc66a,	// (0x00059963) cell_vkb_candidate_pane_g4

0xc73e,	// (0x00059a37) cell_app_pane_cp2_g1_ParamLimits

0xc73e,	// (0x00059a37) cell_app_pane_cp2_g1

0xc75c,	// (0x00059a55) cell_app_pane_cp2_g2_ParamLimits

0xc75c,	// (0x00059a55) cell_app_pane_cp2_g2

0x0001,

0xfbc4,	// (0x0005cebd) cell_app_pane_cp2_g_ParamLimits

0xfbc4,	// (0x0005cebd) cell_app_pane_cp2_g

0xc768,	// (0x00059a61) cell_app_pane_cp2_t1_ParamLimits

0xc768,	// (0x00059a61) cell_app_pane_cp2_t1

0x7daf,	// (0x000550a8) grid_highlight_pane_cp1_ParamLimits

0x7daf,	// (0x000550a8) grid_highlight_pane_cp1

0x682f,	// (0x00053b28) cell_hwr_candidate_pane_cp1_ParamLimits

0x682f,	// (0x00053b28) cell_hwr_candidate_pane_cp1

0x66ad,	// (0x000539a6) fep_hwr_candidate_drop_down_list_pane_g1

0x6853,	// (0x00053b4c) fep_hwr_candidate_drop_down_list_pane_g2

0x6860,	// (0x00053b59) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc9,	// (0x0005cec2) fep_hwr_candidate_drop_down_list_pane_g

0x686d,	// (0x00053b66) fep_hwr_candidate_drop_down_list_scroll_pane

0x6876,	// (0x00053b6f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6876,	// (0x00053b6f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6883,	// (0x00053b7c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6883,	// (0x00053b7c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6890,	// (0x00053b89) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6890,	// (0x00053b89) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x689d,	// (0x00053b96) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x689d,	// (0x00053b96) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x68b8,	// (0x00053bb1) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x68b8,	// (0x00053bb1) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x68d3,	// (0x00053bcc) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x68d3,	// (0x00053bcc) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x68ee,	// (0x00053be7) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x68ee,	// (0x00053be7) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6909,	// (0x00053c02) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6909,	// (0x00053c02) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd0,	// (0x0005cec9) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd0,	// (0x0005cec9) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc77a,	// (0x00059a73) cell_vkb_candidate_pane_cp1_ParamLimits

0xc77a,	// (0x00059a73) cell_vkb_candidate_pane_cp1

0xc30e,	// (0x00059607) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc30e,	// (0x00059607) fep_vkb_candidate_drop_down_list_pane_g1

0xc7a0,	// (0x00059a99) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc7a0,	// (0x00059a99) fep_vkb_candidate_drop_down_list_pane_g2

0xc7ad,	// (0x00059aa6) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc7ad,	// (0x00059aa6) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe1,	// (0x0005ceda) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe1,	// (0x0005ceda) fep_vkb_candidate_drop_down_list_pane_g

0xc7ba,	// (0x00059ab3) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc7ba,	// (0x00059ab3) fep_vkb_candidate_drop_down_list_scroll_pane

0xc7c7,	// (0x00059ac0) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc7c7,	// (0x00059ac0) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc7d4,	// (0x00059acd) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc7d4,	// (0x00059acd) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc7e0,	// (0x00059ad9) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc7e0,	// (0x00059ad9) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc7ec,	// (0x00059ae5) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc7ec,	// (0x00059ae5) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc80d,	// (0x00059b06) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc80d,	// (0x00059b06) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc82e,	// (0x00059b27) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc82e,	// (0x00059b27) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc84f,	// (0x00059b48) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc84f,	// (0x00059b48) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc870,	// (0x00059b69) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc870,	// (0x00059b69) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe8,	// (0x0005cee1) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe8,	// (0x0005cee1) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x73b2,	// (0x000546ab) title_pane_g1_ParamLimits

0x73bf,	// (0x000546b8) title_pane_g2_ParamLimits

0xf566,	// (0x0005c85f) title_pane_g_ParamLimits

0x85dd,	// (0x000558d6) aid_call2_pane

0x85e5,	// (0x000558de) aid_call_pane

0x85ed,	// (0x000558e6) popup_clock_analogue_window_g1

0x85ed,	// (0x000558e6) popup_clock_analogue_window_g2

0x5825,	// (0x00052b1e) popup_clock_analogue_window_g3

0x582e,	// (0x00052b27) popup_clock_analogue_window_g4

0x25b9,	// (0x0004f8b2) popup_clock_analogue_window_g5

0x0004,

0xf715,	// (0x0005ca0e) popup_clock_analogue_window_g

0x5836,	// (0x00052b2f) popup_clock_analogue_window_t1

0x5844,	// (0x00052b3d) clock_digital_number_pane_ParamLimits

0x5844,	// (0x00052b3d) clock_digital_number_pane

0x5850,	// (0x00052b49) clock_digital_number_pane_cp02_ParamLimits

0x5850,	// (0x00052b49) clock_digital_number_pane_cp02

0x585c,	// (0x00052b55) clock_digital_number_pane_cp03_ParamLimits

0x585c,	// (0x00052b55) clock_digital_number_pane_cp03

0x5868,	// (0x00052b61) clock_digital_number_pane_cp04_ParamLimits

0x5868,	// (0x00052b61) clock_digital_number_pane_cp04

0x5874,	// (0x00052b6d) clock_digital_separator_pane_ParamLimits

0x5874,	// (0x00052b6d) clock_digital_separator_pane

0x5880,	// (0x00052b79) popup_clock_digital_window_t1_ParamLimits

0x5880,	// (0x00052b79) popup_clock_digital_window_t1

0x25b9,	// (0x0004f8b2) clock_digital_number_pane_g1

0x25b9,	// (0x0004f8b2) clock_digital_number_pane_g2

0x0001,

0xf720,	// (0x0005ca19) clock_digital_number_pane_g

0x25b9,	// (0x0004f8b2) clock_digital_separator_pane_g1

0x25b9,	// (0x0004f8b2) clock_digital_separator_pane_g2

0x0001,

0xf720,	// (0x0005ca19) clock_digital_separator_pane_g

0x95b7,	// (0x000568b0) aid_fill_nsta_ParamLimits

0x9707,	// (0x00056a00) indicator_nsta_pane_ParamLimits

0x9898,	// (0x00056b91) popup_clock_analogue_window

0x9898,	// (0x00056b91) popup_clock_digital_window

0x747c,	// (0x00054775) grid_indicator_nsta_pane_ParamLimits

0xbb1f,	// (0x00058e18) clock_nsta_pane_t2

0x0001,

0xfaae,	// (0x0005cda7) clock_nsta_pane_t

0x57e9,	// (0x00052ae2) aid_size_max_handle

0x57f3,	// (0x00052aec) aid_size_min_handle

0x8c06,	// (0x00055eff) editor_scroll_pane

0xc88b,	// (0x00059b84) ex_editor_pane

0x7f3a,	// (0x00055233) scroll_pane_cp13

0x7ca2,	// (0x00054f9b) scroll_pane_cp14

0x861c,	// (0x00055915) scroll_pane_cp36

0x864a,	// (0x00055943) list_single_graphic_hl_pane_cp2_ParamLimits

0x864a,	// (0x00055943) list_single_graphic_hl_pane_cp2

0x8129,	// (0x00055422) list_single_graphic_hl_pane_ParamLimits

0x8129,	// (0x00055422) list_single_graphic_hl_pane

0x6924,	// (0x00053c1d) aid_size_min_hl_cp1

0xc893,	// (0x00059b8c) list_highlight_pane_cp34_ParamLimits

0xc893,	// (0x00059b8c) list_highlight_pane_cp34

0xc8a4,	// (0x00059b9d) list_single_graphic_hl_pane_g1_ParamLimits

0xc8a4,	// (0x00059b9d) list_single_graphic_hl_pane_g1

0x692d,	// (0x00053c26) list_single_graphic_hl_pane_g2_ParamLimits

0x692d,	// (0x00053c26) list_single_graphic_hl_pane_g2

0x692d,	// (0x00053c26) list_single_graphic_hl_pane_g3_ParamLimits

0x692d,	// (0x00053c26) list_single_graphic_hl_pane_g3

0x8155,	// (0x0005544e) list_single_graphic_hl_pane_g4_ParamLimits

0x8155,	// (0x0005544e) list_single_graphic_hl_pane_g4

0x824b,	// (0x00055544) list_single_graphic_hl_pane_g5_ParamLimits

0x824b,	// (0x00055544) list_single_graphic_hl_pane_g5

0x0004,

0xfbf9,	// (0x0005cef2) list_single_graphic_hl_pane_g_ParamLimits

0xfbf9,	// (0x0005cef2) list_single_graphic_hl_pane_g

0x6939,	// (0x00053c32) list_single_graphic_hl_pane_t1_ParamLimits

0x6939,	// (0x00053c32) list_single_graphic_hl_pane_t1

0xc8b1,	// (0x00059baa) aid_size_min_hl_cp2

0xc8ba,	// (0x00059bb3) list_highlight_pane_cp34_cp2_ParamLimits

0xc8ba,	// (0x00059bb3) list_highlight_pane_cp34_cp2

0xc8a4,	// (0x00059b9d) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc8a4,	// (0x00059b9d) list_single_graphic_hl_pane_g1_cp2

0xc8c7,	// (0x00059bc0) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc8c7,	// (0x00059bc0) list_single_graphic_hl_pane_g2_cp2

0xc8d3,	// (0x00059bcc) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc8d3,	// (0x00059bcc) list_single_graphic_hl_pane_g3_cp2

0x7caa,	// (0x00054fa3) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7caa,	// (0x00054fa3) list_single_graphic_hl_pane_g4_cp2

0xc8e1,	// (0x00059bda) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc8e1,	// (0x00059bda) list_single_graphic_hl_pane_g5_cp2

0x5ba7,	// (0x00052ea0) control_pane_g4_ParamLimits

0x5ba7,	// (0x00052ea0) control_pane_g4

0x8f84,	// (0x0005627d) bg_popup_sub_pane_cp10_ParamLimits

0xc08e,	// (0x00059387) list_choice_list_pane_ParamLimits

0xc09d,	// (0x00059396) scroll_pane_cp23

0x7706,	// (0x000549ff) bg_popup_preview_window_pane_cp02_ParamLimits

0xc6bb,	// (0x000599b4) list_preview_fixed_pane_ParamLimits

0xc6d1,	// (0x000599ca) list_preview_fixed_pane_cp_ParamLimits

0xc6d1,	// (0x000599ca) list_preview_fixed_pane_cp

0xc6dd,	// (0x000599d6) popup_preview_fixed_window_g1_ParamLimits

0xc6dd,	// (0x000599d6) popup_preview_fixed_window_g1

0xc6e9,	// (0x000599e2) popup_preview_fixed_window_g2_ParamLimits

0xc6e9,	// (0x000599e2) popup_preview_fixed_window_g2

0x0002,

0xfb81,	// (0x0005ce7a) popup_preview_fixed_window_g_ParamLimits

0xfb81,	// (0x0005ce7a) popup_preview_fixed_window_g

0x575b,	// (0x00052a54) aid_navi_side_left_pane_ParamLimits

0x5770,	// (0x00052a69) aid_navi_side_right_pane_ParamLimits

0x5788,	// (0x00052a81) navi_icon_pane_stacon_ParamLimits

0x579c,	// (0x00052a95) navi_navi_pane_stacon_ParamLimits

0x5788,	// (0x00052a81) navi_text_pane_stacon_ParamLimits

0x25af,	// (0x0004f8a8) main_text_info_pane

0xc90b,	// (0x00059c04) listscroll_text_info_pane

0xc913,	// (0x00059c0c) list_text_info_pane_ParamLimits

0xc913,	// (0x00059c0c) list_text_info_pane

0xc922,	// (0x00059c1b) scroll_pane_cp24_ParamLimits

0xc922,	// (0x00059c1b) scroll_pane_cp24

0xc940,	// (0x00059c39) list_text_info_pane_t1_ParamLimits

0xc940,	// (0x00059c39) list_text_info_pane_t1

0x8fca,	// (0x000562c3) popup_fast_swap2_window_ParamLimits

0x8fca,	// (0x000562c3) popup_fast_swap2_window

0xc965,	// (0x00059c5e) aid_size_cell_fast2

0x25af,	// (0x0004f8a8) bg_popup_window_pane_cp17

0x9f1f,	// (0x00057218) heading_pane_cp2

0x7966,	// (0x00054c5f) listscroll_fast2_pane

0xc96f,	// (0x00059c68) grid_fast2_pane

0xc979,	// (0x00059c72) listscroll_fast2_pane_g1

0xc983,	// (0x00059c7c) listscroll_fast2_pane_g2

0x0001,

0xfc04,	// (0x0005cefd) listscroll_fast2_pane_g

0x7f3a,	// (0x00055233) scroll_pane_cp26

0xc98d,	// (0x00059c86) cell_fast2_pane_ParamLimits

0xc98d,	// (0x00059c86) cell_fast2_pane

0xc9a4,	// (0x00059c9d) cell_fast2_pane_g1

0xc9ad,	// (0x00059ca6) cell_fast2_pane_g2

0xc9b6,	// (0x00059caf) cell_fast2_pane_g3

0x0002,

0xfc09,	// (0x0005cf02) cell_fast2_pane_g

0x7a5f,	// (0x00054d58) grid_highlight_pane_cp9

0x7a74,	// (0x00054d6d) main_eswt_pane_ParamLimits

0x7a74,	// (0x00054d6d) main_eswt_pane

0xc937,	// (0x00059c30) list_single_text_info_pane

0xc9be,	// (0x00059cb7) eswt_ctrl_button_pane

0xc9be,	// (0x00059cb7) eswt_ctrl_canvas_pane

0xc9c6,	// (0x00059cbf) eswt_ctrl_combo_pane

0xc9be,	// (0x00059cb7) eswt_ctrl_default_pane

0xc9be,	// (0x00059cb7) eswt_ctrl_label_pane

0xc9ce,	// (0x00059cc7) eswt_ctrl_wait_pane

0xc9d6,	// (0x00059ccf) eswt_shell_pane

0x25af,	// (0x0004f8a8) listscroll_eswt_app_pane

0xc9f6,	// (0x00059cef) popup_eswt_tasktip_window_ParamLimits

0xc9f6,	// (0x00059cef) popup_eswt_tasktip_window

0x9bb3,	// (0x00056eac) bg_popup_window_pane_cp18

0xca07,	// (0x00059d00) eswt_control_pane_g1_ParamLimits

0xca07,	// (0x00059d00) eswt_control_pane_g1

0xca14,	// (0x00059d0d) eswt_control_pane_g2_ParamLimits

0xca14,	// (0x00059d0d) eswt_control_pane_g2

0xca21,	// (0x00059d1a) eswt_control_pane_g3_ParamLimits

0xca21,	// (0x00059d1a) eswt_control_pane_g3

0xca2e,	// (0x00059d27) eswt_control_pane_g4_ParamLimits

0xca2e,	// (0x00059d27) eswt_control_pane_g4

0x0003,

0xfc10,	// (0x0005cf09) eswt_control_pane_g_ParamLimits

0xfc10,	// (0x0005cf09) eswt_control_pane_g

0x7daf,	// (0x000550a8) bg_button_pane_ParamLimits

0x7daf,	// (0x000550a8) bg_button_pane

0x7a74,	// (0x00054d6d) common_borders_pane_copy2_ParamLimits

0x7a74,	// (0x00054d6d) common_borders_pane_copy2

0xca3b,	// (0x00059d34) control_button_pane_g1_ParamLimits

0xca3b,	// (0x00059d34) control_button_pane_g1

0xca47,	// (0x00059d40) control_button_pane_g2_ParamLimits

0xca47,	// (0x00059d40) control_button_pane_g2

0xca53,	// (0x00059d4c) control_button_pane_g3_ParamLimits

0xca53,	// (0x00059d4c) control_button_pane_g3

0x0002,

0xfc19,	// (0x0005cf12) control_button_pane_g_ParamLimits

0xfc19,	// (0x0005cf12) control_button_pane_g

0xca67,	// (0x00059d60) control_button_pane_t1

0xca75,	// (0x00059d6e) control_button_pane_t2

0x0001,

0xfc20,	// (0x0005cf19) control_button_pane_t

0x9ac1,	// (0x00056dba) bg_button_pane_g1

0x9ad1,	// (0x00056dca) bg_button_pane_g2

0x9ac9,	// (0x00056dc2) bg_button_pane_g3

0x9ae1,	// (0x00056dda) bg_button_pane_g4

0x9ad9,	// (0x00056dd2) bg_button_pane_g5

0x9ae9,	// (0x00056de2) bg_button_pane_g6

0x9af1,	// (0x00056dea) bg_button_pane_g7

0x9b01,	// (0x00056dfa) bg_button_pane_g8

0x9af9,	// (0x00056df2) bg_button_pane_g9

0x0008,

0xf87c,	// (0x0005cb75) bg_button_pane_g

0xc049,	// (0x00059342) common_borders_pane_ParamLimits

0xc049,	// (0x00059342) common_borders_pane

0xca07,	// (0x00059d00) eswt_control_pane_g1_copy1_ParamLimits

0xca07,	// (0x00059d00) eswt_control_pane_g1_copy1

0xca14,	// (0x00059d0d) eswt_control_pane_g2_copy1_ParamLimits

0xca14,	// (0x00059d0d) eswt_control_pane_g2_copy1

0xca21,	// (0x00059d1a) eswt_control_pane_g3_copy1_ParamLimits

0xca21,	// (0x00059d1a) eswt_control_pane_g3_copy1

0xca2e,	// (0x00059d27) eswt_control_pane_g4_copy1_ParamLimits

0xca2e,	// (0x00059d27) eswt_control_pane_g4_copy1

0xc084,	// (0x0005937d) bg_eswt_ctrl_canvas_pane_g1

0xc049,	// (0x00059342) common_borders_pane_cp2_ParamLimits

0xc049,	// (0x00059342) common_borders_pane_cp2

0xc049,	// (0x00059342) common_borders_pane_cp3_ParamLimits

0xc049,	// (0x00059342) common_borders_pane_cp3

0xca83,	// (0x00059d7c) separator_horizontal_pane

0xca8b,	// (0x00059d84) separator_vertical_pane

0xca07,	// (0x00059d00) eswt_control_pane_g1_copy2_ParamLimits

0xca07,	// (0x00059d00) eswt_control_pane_g1_copy2

0xca14,	// (0x00059d0d) eswt_control_pane_g2_copy2_ParamLimits

0xca14,	// (0x00059d0d) eswt_control_pane_g2_copy2

0xca21,	// (0x00059d1a) eswt_control_pane_g3_copy2_ParamLimits

0xca21,	// (0x00059d1a) eswt_control_pane_g3_copy2

0xca2e,	// (0x00059d27) eswt_control_pane_g4_copy2_ParamLimits

0xca2e,	// (0x00059d27) eswt_control_pane_g4_copy2

0x25af,	// (0x0004f8a8) common_borders_pane_cp4

0xca94,	// (0x00059d8d) separator_horizontal_pane_g1

0xca9d,	// (0x00059d96) separator_horizontal_pane_g2

0xcaa6,	// (0x00059d9f) separator_horizontal_pane_g3

0x0002,

0xfc25,	// (0x0005cf1e) separator_horizontal_pane_g

0xca07,	// (0x00059d00) eswt_control_pane_g1_copy3_ParamLimits

0xca07,	// (0x00059d00) eswt_control_pane_g1_copy3

0xca14,	// (0x00059d0d) eswt_control_pane_g2_copy3_ParamLimits

0xca14,	// (0x00059d0d) eswt_control_pane_g2_copy3

0xca21,	// (0x00059d1a) eswt_control_pane_g3_copy3_ParamLimits

0xca21,	// (0x00059d1a) eswt_control_pane_g3_copy3

0xca2e,	// (0x00059d27) eswt_control_pane_g4_copy3_ParamLimits

0xca2e,	// (0x00059d27) eswt_control_pane_g4_copy3

0x25af,	// (0x0004f8a8) common_borders_pane_cp5

0xcaaf,	// (0x00059da8) separator_vertical_pane_g1

0xcab8,	// (0x00059db1) separator_vertical_pane_g2

0xcac1,	// (0x00059dba) separator_vertical_pane_g3

0x0002,

0xfc2c,	// (0x0005cf25) separator_vertical_pane_g

0xca07,	// (0x00059d00) eswt_control_pane_g1_copy4_ParamLimits

0xca07,	// (0x00059d00) eswt_control_pane_g1_copy4

0xca14,	// (0x00059d0d) eswt_control_pane_g2_copy4_ParamLimits

0xca14,	// (0x00059d0d) eswt_control_pane_g2_copy4

0xca21,	// (0x00059d1a) eswt_control_pane_g3_copy4_ParamLimits

0xca21,	// (0x00059d1a) eswt_control_pane_g3_copy4

0xca2e,	// (0x00059d27) eswt_control_pane_g4_copy4_ParamLimits

0xca2e,	// (0x00059d27) eswt_control_pane_g4_copy4

0xcaca,	// (0x00059dc3) eswt_ctrl_combo_button_pane

0xcad2,	// (0x00059dcb) eswt_ctrl_input_pane

0xcada,	// (0x00059dd3) popup_choice_list_window_cp70

0xcae2,	// (0x00059ddb) eswt_ctrl_input_pane_t1

0x25af,	// (0x0004f8a8) input_focus_pane_cp70

0xc049,	// (0x00059342) bg_button_pane_cp70_ParamLimits

0xc049,	// (0x00059342) bg_button_pane_cp70

0xcaf0,	// (0x00059de9) eswt_ctrl_combo_button_pane_g1

0xcaf8,	// (0x00059df1) wait_bar_pane_cp70

0x9bb3,	// (0x00056eac) bg_popup_window_pane_cp70_ParamLimits

0x9bb3,	// (0x00056eac) bg_popup_window_pane_cp70

0xcb00,	// (0x00059df9) popup_eswt_tasktip_window_t1

0xcb16,	// (0x00059e0f) wait_bar_pane_cp71_ParamLimits

0xcb16,	// (0x00059e0f) wait_bar_pane_cp71

0xcb22,	// (0x00059e1b) grid_eswt_app_pane

0x8421,	// (0x0005571a) scroll_pane_cp70

0xcb2b,	// (0x00059e24) cell_eswt_app_pane_ParamLimits

0xcb2b,	// (0x00059e24) cell_eswt_app_pane

0xcb5d,	// (0x00059e56) cell_eswt_app_pane_g1_ParamLimits

0xcb5d,	// (0x00059e56) cell_eswt_app_pane_g1

0xcb8c,	// (0x00059e85) cell_eswt_app_pane_g2_ParamLimits

0xcb8c,	// (0x00059e85) cell_eswt_app_pane_g2

0x0001,

0xfc33,	// (0x0005cf2c) cell_eswt_app_pane_g_ParamLimits

0xfc33,	// (0x0005cf2c) cell_eswt_app_pane_g

0xcbb5,	// (0x00059eae) cell_eswt_app_pane_t1_ParamLimits

0xcbb5,	// (0x00059eae) cell_eswt_app_pane_t1

0xcbe7,	// (0x00059ee0) grid_highlight_pane_cp70_ParamLimits

0xcbe7,	// (0x00059ee0) grid_highlight_pane_cp70

0xb018,	// (0x00058311) set_content_pane_g1

0x8eb6,	// (0x000561af) status_small_volume_pane

0x694f,	// (0x00053c48) status_small_volume_pane_g1

0x6957,	// (0x00053c50) volume_small2_pane

0x6960,	// (0x00053c59) volume_small2_pane_g1

0x6969,	// (0x00053c62) volume_small2_pane_g2

0x6972,	// (0x00053c6b) volume_small2_pane_g3

0x697b,	// (0x00053c74) volume_small2_pane_g4

0x6984,	// (0x00053c7d) volume_small2_pane_g5

0x698d,	// (0x00053c86) volume_small2_pane_g6

0x6996,	// (0x00053c8f) volume_small2_pane_g7

0x699f,	// (0x00053c98) volume_small2_pane_g8

0x69a8,	// (0x00053ca1) volume_small2_pane_g9

0x69b1,	// (0x00053caa) volume_small2_pane_g10

0x0009,

0xfc38,	// (0x0005cf31) volume_small2_pane_g

0xc462,	// (0x0005975b) fep_vkb_top_text_pane_g1_ParamLimits

0xc47d,	// (0x00059776) fep_vkb_top_text_pane_t1_ParamLimits

0xc6f5,	// (0x000599ee) popup_preview_fixed_window_g3_ParamLimits

0xc6f5,	// (0x000599ee) popup_preview_fixed_window_g3

0x94db,	// (0x000567d4) popup_toolbar_trans_pane

0xaebd,	// (0x000581b6) aid_height_set_list_ParamLimits

0xaece,	// (0x000581c7) aid_size_parent_ParamLimits

0x8f84,	// (0x0005627d) list_highlight_pane_cp2_ParamLimits

0xb018,	// (0x00058311) set_content_pane_g1_ParamLimits

0xb121,	// (0x0005841a) list_single_image_pane_ParamLimits

0xb121,	// (0x0005841a) list_single_image_pane

0xcbf3,	// (0x00059eec) aid_size_cell_image_ParamLimits

0xcbf3,	// (0x00059eec) aid_size_cell_image

0xcc00,	// (0x00059ef9) grid_single_image_pane_ParamLimits

0xcc00,	// (0x00059ef9) grid_single_image_pane

0x7dc9,	// (0x000550c2) list_single_image_pane_g1_ParamLimits

0x7dc9,	// (0x000550c2) list_single_image_pane_g1

0x7dd5,	// (0x000550ce) list_single_image_pane_g2_ParamLimits

0x7dd5,	// (0x000550ce) list_single_image_pane_g2

0x0001,

0xfc4d,	// (0x0005cf46) list_single_image_pane_g_ParamLimits

0xfc4d,	// (0x0005cf46) list_single_image_pane_g

0xcc0e,	// (0x00059f07) list_single_image_pane_t1_ParamLimits

0xcc0e,	// (0x00059f07) list_single_image_pane_t1

0xcc24,	// (0x00059f1d) cell_image_list_pane_ParamLimits

0xcc24,	// (0x00059f1d) cell_image_list_pane

0xcc3a,	// (0x00059f33) cell_image_list_pane_g1

0xcc43,	// (0x00059f3c) cell_image_list_pane_g2

0x0001,

0xfc52,	// (0x0005cf4b) cell_image_list_pane_g

0xcc4c,	// (0x00059f45) aid_size_cell_tb_trans_pane

0x7daf,	// (0x000550a8) bg_tb_trans_pane

0xcc5e,	// (0x00059f57) grid_tb_trans_pane

0x9ac1,	// (0x00056dba) bg_tb_trans_pane_g1

0x9ad1,	// (0x00056dca) bg_tb_trans_pane_g2

0x9ac9,	// (0x00056dc2) bg_tb_trans_pane_g3

0x9ae1,	// (0x00056dda) bg_tb_trans_pane_g4

0x9ad9,	// (0x00056dd2) bg_tb_trans_pane_g5

0x9b01,	// (0x00056dfa) bg_tb_trans_pane_g6

0x9af9,	// (0x00056df2) bg_tb_trans_pane_g7

0x9ae9,	// (0x00056de2) bg_tb_trans_pane_g8

0x9af1,	// (0x00056dea) bg_tb_trans_pane_g9

0x0008,

0xfc57,	// (0x0005cf50) bg_tb_trans_pane_g

0xcc72,	// (0x00059f6b) cell_toolbar_trans_pane_ParamLimits

0xcc72,	// (0x00059f6b) cell_toolbar_trans_pane

0xc084,	// (0x0005937d) cell_toolbar_trans_pane_g1

0xbd1b,	// (0x00059014) list_form2_midp_pane_t1

0xbd29,	// (0x00059022) list_form2_midp_pane_t2

0x0001,

0xfaf4,	// (0x0005cded) list_form2_midp_pane_t

0xbd37,	// (0x00059030) scroll_pane_cp51_ParamLimits

0xbee6,	// (0x000591df) form2_midp_wait_pane_g1

0xbeef,	// (0x000591e8) form2_midp_wait_pane_g2

0xbef8,	// (0x000591f1) form2_midp_wait_pane_g3

0x0002,

0xfb09,	// (0x0005ce02) form2_midp_wait_pane_g

0x747c,	// (0x00054775) list_highlight_pane_cp21_ParamLimits

0xbf29,	// (0x00059222) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbf38,	// (0x00059231) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xb0da,	// (0x000583d3) list_single_2graphic_im_pane_ParamLimits

0xb0da,	// (0x000583d3) list_single_2graphic_im_pane

0xcc98,	// (0x00059f91) list_single_2graphic_im_pane_g1_ParamLimits

0xcc98,	// (0x00059f91) list_single_2graphic_im_pane_g1

0xcca9,	// (0x00059fa2) list_single_2graphic_im_pane_g2_ParamLimits

0xcca9,	// (0x00059fa2) list_single_2graphic_im_pane_g2

0xccb5,	// (0x00059fae) list_single_2graphic_im_pane_g3_ParamLimits

0xccb5,	// (0x00059fae) list_single_2graphic_im_pane_g3

0x0003,

0xfc6a,	// (0x0005cf63) list_single_2graphic_im_pane_g_ParamLimits

0xfc6a,	// (0x0005cf63) list_single_2graphic_im_pane_g

0xccd5,	// (0x00059fce) list_single_2graphic_im_pane_t1_ParamLimits

0xccd5,	// (0x00059fce) list_single_2graphic_im_pane_t1

0xc701,	// (0x000599fa) list_single_graphic_2heading_pane_fp_ParamLimits

0xc701,	// (0x000599fa) list_single_graphic_2heading_pane_fp

0x6711,	// (0x00053a0a) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6711,	// (0x00053a0a) list_single_graphic_2heading_pane_fp_g1

0xc71a,	// (0x00059a13) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc71a,	// (0x00059a13) list_single_graphic_2heading_pane_fp_g2

0x7d29,	// (0x00055022) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7d29,	// (0x00055022) list_single_graphic_2heading_pane_fp_g3

0x81c7,	// (0x000554c0) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x81c7,	// (0x000554c0) list_single_graphic_2heading_pane_fp_g4

0xc726,	// (0x00059a1f) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc726,	// (0x00059a1f) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb91,	// (0x0005ce8a) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb91,	// (0x0005ce8a) list_single_graphic_2heading_pane_fp_g

0x69ba,	// (0x00053cb3) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x69ba,	// (0x00053cb3) list_single_graphic_2heading_pane_fp_t1

0x6749,	// (0x00053a42) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6749,	// (0x00053a42) list_single_graphic_2heading_pane_fp_t2

0x69d0,	// (0x00053cc9) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x69d0,	// (0x00053cc9) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc73,	// (0x0005cf6c) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc73,	// (0x0005cf6c) list_single_graphic_2heading_pane_fp_t

0xc124,	// (0x0005941d) fep_hwr_write_pane_g5_ParamLimits

0xc124,	// (0x0005941d) fep_hwr_write_pane_g5

0xc130,	// (0x00059429) fep_hwr_write_pane_g6_ParamLimits

0xc130,	// (0x00059429) fep_hwr_write_pane_g6

0xc9d6,	// (0x00059ccf) eswt_shell_pane_ParamLimits

0x9bb3,	// (0x00056eac) bg_popup_window_pane_cp18_ParamLimits

0xae14,	// (0x0005810d) heading_pane_cp70

0xcb00,	// (0x00059df9) popup_eswt_tasktip_window_t1_ParamLimits

0x960e,	// (0x00056907) aid_touch_tab_arrow_left

0x961d,	// (0x00056916) aid_touch_tab_arrow_right

0x73d0,	// (0x000546c9) title_pane_g3_ParamLimits

0x73d0,	// (0x000546c9) title_pane_g3

0x7d6e,	// (0x00055067) set_value_pane_g1

0x94db,	// (0x000567d4) popup_toolbar_trans_pane_ParamLimits

0xcc4c,	// (0x00059f45) aid_size_cell_tb_trans_pane_ParamLimits

0x7daf,	// (0x000550a8) bg_tb_trans_pane_ParamLimits

0xcc5e,	// (0x00059f57) grid_tb_trans_pane_ParamLimits

0x7706,	// (0x000549ff) cont_note_pane_ParamLimits

0x7706,	// (0x000549ff) cont_note_pane

0x7a74,	// (0x00054d6d) cont_snote2_single_text_pane_ParamLimits

0x7a74,	// (0x00054d6d) cont_snote2_single_text_pane

0x7a74,	// (0x00054d6d) cont_snote2_single_graphic_pane_ParamLimits

0x7a74,	// (0x00054d6d) cont_snote2_single_graphic_pane

0xa13b,	// (0x00057434) cont_note_wait_pane_ParamLimits

0xa13b,	// (0x00057434) cont_note_wait_pane

0xa13b,	// (0x00057434) cont_note_image_pane_ParamLimits

0xa13b,	// (0x00057434) cont_note_image_pane

0xcd06,	// (0x00059fff) popup_note2_window_g1_ParamLimits

0xcd06,	// (0x00059fff) popup_note2_window_g1

0xcd37,	// (0x0005a030) popup_note2_window_t1_ParamLimits

0xcd37,	// (0x0005a030) popup_note2_window_t1

0xcd7c,	// (0x0005a075) popup_note2_window_t2_ParamLimits

0xcd7c,	// (0x0005a075) popup_note2_window_t2

0xcdc1,	// (0x0005a0ba) popup_note2_window_t3_ParamLimits

0xcdc1,	// (0x0005a0ba) popup_note2_window_t3

0xce06,	// (0x0005a0ff) popup_note2_window_t4_ParamLimits

0xce06,	// (0x0005a0ff) popup_note2_window_t4

0x778a,	// (0x00054a83) popup_note2_window_t5_ParamLimits

0x778a,	// (0x00054a83) popup_note2_window_t5

0x0004,

0xfc7f,	// (0x0005cf78) popup_note2_window_t_ParamLimits

0xfc7f,	// (0x0005cf78) popup_note2_window_t

0xce35,	// (0x0005a12e) popup_note2_image_window_g1_ParamLimits

0xce35,	// (0x0005a12e) popup_note2_image_window_g1

0xce41,	// (0x0005a13a) popup_note2_image_window_g2_ParamLimits

0xce41,	// (0x0005a13a) popup_note2_image_window_g2

0x0001,

0xfc8a,	// (0x0005cf83) popup_note2_image_window_g_ParamLimits

0xfc8a,	// (0x0005cf83) popup_note2_image_window_g

0xce53,	// (0x0005a14c) popup_note2_image_window_t1_ParamLimits

0xce53,	// (0x0005a14c) popup_note2_image_window_t1

0xce6b,	// (0x0005a164) popup_note2_image_window_t2_ParamLimits

0xce6b,	// (0x0005a164) popup_note2_image_window_t2

0xce83,	// (0x0005a17c) popup_note2_image_window_t3_ParamLimits

0xce83,	// (0x0005a17c) popup_note2_image_window_t3

0x0002,

0xfc8f,	// (0x0005cf88) popup_note2_image_window_t_ParamLimits

0xfc8f,	// (0x0005cf88) popup_note2_image_window_t

0xa149,	// (0x00057442) popup_note2_wait_window_g1_ParamLimits

0xa149,	// (0x00057442) popup_note2_wait_window_g1

0xce9f,	// (0x0005a198) popup_note2_wait_window_g2_ParamLimits

0xce9f,	// (0x0005a198) popup_note2_wait_window_g2

0xa161,	// (0x0005745a) popup_note2_wait_window_g3_ParamLimits

0xa161,	// (0x0005745a) popup_note2_wait_window_g3

0x0002,

0xfc96,	// (0x0005cf8f) popup_note2_wait_window_g_ParamLimits

0xfc96,	// (0x0005cf8f) popup_note2_wait_window_g

0xceab,	// (0x0005a1a4) popup_note2_wait_window_t1_ParamLimits

0xceab,	// (0x0005a1a4) popup_note2_wait_window_t1

0xcec9,	// (0x0005a1c2) popup_note2_wait_window_t2_ParamLimits

0xcec9,	// (0x0005a1c2) popup_note2_wait_window_t2

0xcee7,	// (0x0005a1e0) popup_note2_wait_window_t3_ParamLimits

0xcee7,	// (0x0005a1e0) popup_note2_wait_window_t3

0xcef9,	// (0x0005a1f2) popup_note2_wait_window_t4_ParamLimits

0xcef9,	// (0x0005a1f2) popup_note2_wait_window_t4

0x0003,

0xfc9d,	// (0x0005cf96) popup_note2_wait_window_t_ParamLimits

0xfc9d,	// (0x0005cf96) popup_note2_wait_window_t

0xcf0b,	// (0x0005a204) wait_bar2_pane_ParamLimits

0xcf0b,	// (0x0005a204) wait_bar2_pane

0xcf23,	// (0x0005a21c) popup_snote2_single_text_window_g1_ParamLimits

0xcf23,	// (0x0005a21c) popup_snote2_single_text_window_g1

0xcf4b,	// (0x0005a244) popup_snote2_single_text_window_t1_ParamLimits

0xcf4b,	// (0x0005a244) popup_snote2_single_text_window_t1

0xcf97,	// (0x0005a290) popup_snote2_single_text_window_t2_ParamLimits

0xcf97,	// (0x0005a290) popup_snote2_single_text_window_t2

0xcfe3,	// (0x0005a2dc) popup_snote2_single_text_window_t3_ParamLimits

0xcfe3,	// (0x0005a2dc) popup_snote2_single_text_window_t3

0xd024,	// (0x0005a31d) popup_snote2_single_text_window_t4_ParamLimits

0xd024,	// (0x0005a31d) popup_snote2_single_text_window_t4

0xd05a,	// (0x0005a353) popup_snote2_single_text_window_t5_ParamLimits

0xd05a,	// (0x0005a353) popup_snote2_single_text_window_t5

0x0004,

0xfca6,	// (0x0005cf9f) popup_snote2_single_text_window_t_ParamLimits

0xfca6,	// (0x0005cf9f) popup_snote2_single_text_window_t

0xd085,	// (0x0005a37e) popup_snote2_single_graphic_window_g1_ParamLimits

0xd085,	// (0x0005a37e) popup_snote2_single_graphic_window_g1

0xd0ad,	// (0x0005a3a6) popup_snote2_single_graphic_window_g2_ParamLimits

0xd0ad,	// (0x0005a3a6) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb1,	// (0x0005cfaa) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb1,	// (0x0005cfaa) popup_snote2_single_graphic_window_g

0xd0d5,	// (0x0005a3ce) popup_snote2_single_graphic_window_t1_ParamLimits

0xd0d5,	// (0x0005a3ce) popup_snote2_single_graphic_window_t1

0xd121,	// (0x0005a41a) popup_snote2_single_graphic_window_t2_ParamLimits

0xd121,	// (0x0005a41a) popup_snote2_single_graphic_window_t2

0xcfe3,	// (0x0005a2dc) popup_snote2_single_graphic_window_t3_ParamLimits

0xcfe3,	// (0x0005a2dc) popup_snote2_single_graphic_window_t3

0xd024,	// (0x0005a31d) popup_snote2_single_graphic_window_t4_ParamLimits

0xd024,	// (0x0005a31d) popup_snote2_single_graphic_window_t4

0xd05a,	// (0x0005a353) popup_snote2_single_graphic_window_t5_ParamLimits

0xd05a,	// (0x0005a353) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb6,	// (0x0005cfaf) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb6,	// (0x0005cfaf) popup_snote2_single_graphic_window_t

0xbbe1,	// (0x00058eda) clock_nsta_pane_cp2_t1

0xbbe1,	// (0x00058eda) clock_nsta_pane_cp2_t2

0x0001,

0xfaca,	// (0x0005cdc3) clock_nsta_pane_cp2_t

0x54fb,	// (0x000527f4) form_field_data_wide_pane_g1_ParamLimits

0x7dc9,	// (0x000550c2) form_field_data_wide_pane_g2_ParamLimits

0x7dc9,	// (0x000550c2) form_field_data_wide_pane_g2

0x7dd5,	// (0x000550ce) form_field_data_wide_pane_g3_ParamLimits

0x7dd5,	// (0x000550ce) form_field_data_wide_pane_g3

0x0002,

0xf698,	// (0x0005c991) form_field_data_wide_pane_g_ParamLimits

0xf698,	// (0x0005c991) form_field_data_wide_pane_g

0xbabb,	// (0x00058db4) grid_touch_3_pane_ParamLimits

0xbabb,	// (0x00058db4) grid_touch_3_pane

0xd16d,	// (0x0005a466) cell_touch_3_pane_ParamLimits

0xd16d,	// (0x0005a466) cell_touch_3_pane

0xc084,	// (0x0005937d) cell_touch_3_pane_g1

0xc084,	// (0x0005937d) cell_touch_3_pane_g2

0x0001,

0xfb4f,	// (0x0005ce48) cell_touch_3_pane_g

0x77bc,	// (0x00054ab5) cont_query_data_pane

0x77c4,	// (0x00054abd) cont_query_data_pane_cp1

0xd1a0,	// (0x0005a499) button_value_adjust_pane_cp7

0xd1a8,	// (0x0005a4a1) query_popup_pane_cp3

0x86e2,	// (0x000559db) bg_popup_sub_pane_cp22_ParamLimits

0x589f,	// (0x00052b98) navi_navi_volume_pane_cp2

0x58ba,	// (0x00052bb3) popup_side_volume_key_window_g2

0x58c9,	// (0x00052bc2) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x0005ca27) popup_side_volume_key_window_g

0x58e6,	// (0x00052bdf) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x0005ca2e) popup_side_volume_key_window_t

0x899d,	// (0x00055c96) popup_side_volume_key_window_ParamLimits

0x50ee,	// (0x000523e7) list_double_graphic_pane_g4_ParamLimits

0x50ee,	// (0x000523e7) list_double_graphic_pane_g4

0xb109,	// (0x00058402) list_single_2heading_msg_pane_ParamLimits

0xb109,	// (0x00058402) list_single_2heading_msg_pane

0x825f,	// (0x00055558) list_single_2heading_msg_pane_g1_ParamLimits

0x825f,	// (0x00055558) list_single_2heading_msg_pane_g1

0x7caa,	// (0x00054fa3) list_single_2heading_msg_pane_g2_ParamLimits

0x7caa,	// (0x00054fa3) list_single_2heading_msg_pane_g2

0x826b,	// (0x00055564) list_single_2heading_msg_pane_g3_ParamLimits

0x826b,	// (0x00055564) list_single_2heading_msg_pane_g3

0x8277,	// (0x00055570) list_single_2heading_msg_pane_g4_ParamLimits

0x8277,	// (0x00055570) list_single_2heading_msg_pane_g4

0x0003,

0xfcc1,	// (0x0005cfba) list_single_2heading_msg_pane_g_ParamLimits

0xfcc1,	// (0x0005cfba) list_single_2heading_msg_pane_g

0x69f0,	// (0x00053ce9) list_single_2heading_msg_pane_t1_ParamLimits

0x69f0,	// (0x00053ce9) list_single_2heading_msg_pane_t1

0x6a18,	// (0x00053d11) list_single_2heading_msg_pane_t2_ParamLimits

0x6a18,	// (0x00053d11) list_single_2heading_msg_pane_t2

0x6a47,	// (0x00053d40) list_single_2heading_msg_pane_t3_ParamLimits

0x6a47,	// (0x00053d40) list_single_2heading_msg_pane_t3

0x6a80,	// (0x00053d79) list_single_2heading_msg_pane_t4_ParamLimits

0x6a80,	// (0x00053d79) list_single_2heading_msg_pane_t4

0x0003,

0xfcca,	// (0x0005cfc3) list_single_2heading_msg_pane_t_ParamLimits

0xfcca,	// (0x0005cfc3) list_single_2heading_msg_pane_t

0x25cd,	// (0x0004f8c6) title_pane_g4_ParamLimits

0x25cd,	// (0x0004f8c6) title_pane_g4

0x56ab,	// (0x000529a4) title_pane_stacon_g3_ParamLimits

0x56ab,	// (0x000529a4) title_pane_stacon_g3

0xccc9,	// (0x00059fc2) list_single_2graphic_im_pane_g4_ParamLimits

0xccc9,	// (0x00059fc2) list_single_2graphic_im_pane_g4

0xabb1,	// (0x00057eaa) popup_side_volume_key_window_cp

0xb427,	// (0x00058720) main_idle_act2_pane_t1

0x5d0d,	// (0x00053006) toolbar_button_pane_g10

0x7c6c,	// (0x00054f65) popup_toolbar_window_cp1

0xbbd2,	// (0x00058ecb) clock_nsta_pane_cp_t1

0xbbd2,	// (0x00058ecb) clock_nsta_pane_cp_t2

0x0001,

0xfac5,	// (0x0005cdbe) clock_nsta_pane_cp_t

0x589f,	// (0x00052b98) navi_navi_volume_pane_cp2_ParamLimits

0x58ae,	// (0x00052ba7) popup_side_volume_key_window_g1_ParamLimits

0x58ba,	// (0x00052bb3) popup_side_volume_key_window_g2_ParamLimits

0x58c9,	// (0x00052bc2) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x0005ca27) popup_side_volume_key_window_g_ParamLimits

0x6440,	// (0x00053739) fep_hwr_aid_pane

0x64e9,	// (0x000537e2) bg_fep_hwr_top_pane_g4_ParamLimits

0xc0f4,	// (0x000593ed) fep_hwr_top_pane_g1_ParamLimits

0xc106,	// (0x000593ff) fep_hwr_top_pane_g2_ParamLimits

0x6509,	// (0x00053802) fep_hwr_top_pane_g3_ParamLimits

0xfb1a,	// (0x0005ce13) fep_hwr_top_pane_g_ParamLimits

0x651e,	// (0x00053817) fep_hwr_top_text_pane_ParamLimits

0xa966,	// (0x00057c5f) aid_touch_tab_arrow_arrow_2

0xa96f,	// (0x00057c68) aid_touch_tab_arrow_left_2

0x6454,	// (0x0005374d) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x648b,	// (0x00053784) fep_hwr_prediction_pane

0xc25c,	// (0x00059555) fep_vkb_prediction_pane

0xc362,	// (0x0005965b) fep_vkb_side_pane_g3_ParamLimits

0xc362,	// (0x0005965b) fep_vkb_side_pane_g3

0x66ad,	// (0x000539a6) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6853,	// (0x00053b4c) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6860,	// (0x00053b59) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc9,	// (0x0005cec2) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6aa5,	// (0x00053d9e) fep_hwr_prediction_pane_g1

0x6aaf,	// (0x00053da8) fep_hwr_prediction_pane_g2

0x6ab7,	// (0x00053db0) fep_hwr_prediction_pane_g3

0x6abf,	// (0x00053db8) fep_hwr_prediction_pane_g4

0x0003,

0xfcd3,	// (0x0005cfcc) fep_hwr_prediction_pane_g

0xd1cf,	// (0x0005a4c8) fep_vkb_prediction_pane_g1

0xd1d9,	// (0x0005a4d2) fep_vkb_prediction_pane_g2

0xd1e1,	// (0x0005a4da) fep_vkb_prediction_pane_g3

0xd1e9,	// (0x0005a4e2) fep_vkb_prediction_pane_g4

0x0003,

0xfcdc,	// (0x0005cfd5) fep_vkb_prediction_pane_g

0x6089,	// (0x00053382) slider_set_pane_g3

0x609d,	// (0x00053396) slider_set_pane_g4

0x60b5,	// (0x000533ae) slider_set_pane_g5

0x6089,	// (0x00053382) slider_set_pane_g6

0x60cb,	// (0x000533c4) slider_set_pane_g7

0xb05f,	// (0x00058358) slider_form_pane_g3

0xb068,	// (0x00058361) slider_form_pane_g4

0xb070,	// (0x00058369) slider_form_pane_g5

0xb05f,	// (0x00058358) slider_form_pane_g6

0xb078,	// (0x00058371) slider_form_pane_g7

0xb6f5,	// (0x000589ee) slider_set_pane_vc_g3

0xb6fe,	// (0x000589f7) slider_set_pane_vc_g4

0xb707,	// (0x00058a00) slider_set_pane_vc_g5

0xb6f5,	// (0x000589ee) slider_set_pane_vc_g6

0xb710,	// (0x00058a09) slider_set_pane_vc_g7

0xb6f5,	// (0x000589ee) slider_form_pane_vc_g1

0xb6fe,	// (0x000589f7) slider_form_pane_vc_g2

0xb707,	// (0x00058a00) slider_form_pane_vc_g3

0xb6f5,	// (0x000589ee) slider_form_pane_vc_g4

0xb8c5,	// (0x00058bbe) slider_form_pane_vc_g5

0x0004,

0xfa9e,	// (0x0005cd97) slider_form_pane_vc_g

0x25af,	// (0x0004f8a8) main_idle_act3_pane

0xd1f1,	// (0x0005a4ea) ai3_links_pane

0xd1fa,	// (0x0005a4f3) popup_ai3_data_window_ParamLimits

0xd1fa,	// (0x0005a4f3) popup_ai3_data_window

0x25af,	// (0x0004f8a8) grid_ai3_links_pane

0xd218,	// (0x0005a511) cell_ai3_links_pane_ParamLimits

0xd218,	// (0x0005a511) cell_ai3_links_pane

0xd232,	// (0x0005a52b) bg_popup_sub_pane_cp11

0xd23f,	// (0x0005a538) cell_ai3_links_pane_g1

0x25af,	// (0x0004f8a8) bg_popup_sub_pane_cp12

0xd264,	// (0x0005a55d) heading_ai3_data_pane

0xd26c,	// (0x0005a565) list_ai3_gene_pane

0xd278,	// (0x0005a571) popup_ai3_data_window_g1

0xd280,	// (0x0005a579) heading_ai3_data_pane_g1

0xd288,	// (0x0005a581) heading_ai3_data_pane_t1

0xd296,	// (0x0005a58f) list_double_ai3_gene_pane_ParamLimits

0xd296,	// (0x0005a58f) list_double_ai3_gene_pane

0xd2a3,	// (0x0005a59c) list_single_ai3_gene_pane_ParamLimits

0xd2a3,	// (0x0005a59c) list_single_ai3_gene_pane

0xc049,	// (0x00059342) list_highlight_pane_cp7_ParamLimits

0xc049,	// (0x00059342) list_highlight_pane_cp7

0xd2b0,	// (0x0005a5a9) list_single_a13_gene_pane_t1_ParamLimits

0xd2b0,	// (0x0005a5a9) list_single_a13_gene_pane_t1

0xd2c7,	// (0x0005a5c0) list_single_ai3_gene_pane_g1

0xd2d0,	// (0x0005a5c9) list_single_ai3_gene_pane_g2

0x0001,

0xfce5,	// (0x0005cfde) list_single_ai3_gene_pane_g

0xd2d8,	// (0x0005a5d1) list_double_ai3_gene_pane_g1_ParamLimits

0xd2d8,	// (0x0005a5d1) list_double_ai3_gene_pane_g1

0xd2e4,	// (0x0005a5dd) list_double_ai3_gene_pane_t1_ParamLimits

0xd2e4,	// (0x0005a5dd) list_double_ai3_gene_pane_t1

0xd300,	// (0x0005a5f9) list_double_ai3_gene_pane_t2_ParamLimits

0xd300,	// (0x0005a5f9) list_double_ai3_gene_pane_t2

0xd315,	// (0x0005a60e) list_double_ai3_gene_pane_t3_ParamLimits

0xd315,	// (0x0005a60e) list_double_ai3_gene_pane_t3

0x0002,

0xfcea,	// (0x0005cfe3) list_double_ai3_gene_pane_t_ParamLimits

0xfcea,	// (0x0005cfe3) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x69e6,	// (0x00053cdf) aid_size_min_col_2

0xd1b9,	// (0x0005a4b2) aid_size_min_msg_ParamLimits

0xd1b9,	// (0x0005a4b2) aid_size_min_msg

0xc46e,	// (0x00059767) fep_vkb_top_text_pane_g2_ParamLimits

0xc46e,	// (0x00059767) fep_vkb_top_text_pane_g2

0x0001,

0xfb4a,	// (0x0005ce43) fep_vkb_top_text_pane_g_ParamLimits

0xfb4a,	// (0x0005ce43) fep_vkb_top_text_pane_g

0x25af,	// (0x0004f8a8) main_hc_apps_shell_pane

0xd332,	// (0x0005a62b) grid_hc_apps_pane_ParamLimits

0xd332,	// (0x0005a62b) grid_hc_apps_pane

0xd341,	// (0x0005a63a) list_hc_apps_pane

0xd349,	// (0x0005a642) scroll_pane_cp37_ParamLimits

0xd349,	// (0x0005a642) scroll_pane_cp37

0xd355,	// (0x0005a64e) cell_hc_apps_pane_ParamLimits

0xd355,	// (0x0005a64e) cell_hc_apps_pane

0xd40d,	// (0x0005a706) cell_hc_apps_pane_g1_ParamLimits

0xd40d,	// (0x0005a706) cell_hc_apps_pane_g1

0xd43e,	// (0x0005a737) cell_hc_apps_pane_g2_ParamLimits

0xd43e,	// (0x0005a737) cell_hc_apps_pane_g2

0xd45a,	// (0x0005a753) cell_hc_apps_pane_g3_ParamLimits

0xd45a,	// (0x0005a753) cell_hc_apps_pane_g3

0x0002,

0xfcf1,	// (0x0005cfea) cell_hc_apps_pane_g_ParamLimits

0xfcf1,	// (0x0005cfea) cell_hc_apps_pane_g

0xd47c,	// (0x0005a775) cell_hc_apps_pane_t1_ParamLimits

0xd47c,	// (0x0005a775) cell_hc_apps_pane_t1

0x7706,	// (0x000549ff) grid_highlight_pane_cp10_ParamLimits

0x7706,	// (0x000549ff) grid_highlight_pane_cp10

0xd4bc,	// (0x0005a7b5) list_single_hc_apps_pane_ParamLimits

0xd4bc,	// (0x0005a7b5) list_single_hc_apps_pane

0xd4fb,	// (0x0005a7f4) list_single_hc_apps_pane_g1

0x828f,	// (0x00055588) list_single_hc_apps_pane_g2

0x0001,

0xfcf8,	// (0x0005cff1) list_single_hc_apps_pane_g

0x82a8,	// (0x000555a1) list_single_hc_apps_pane_g2_copy1

0x6ac7,	// (0x00053dc0) list_single_hc_apps_pane_t1

0x747c,	// (0x00054775) bg_set_opt_pane_cp_ParamLimits

0x4ecf,	// (0x000521c8) setting_slider_pane_t1_ParamLimits

0x4ee5,	// (0x000521de) setting_slider_pane_t2_ParamLimits

0x4eff,	// (0x000521f8) setting_slider_pane_t3_ParamLimits

0xf576,	// (0x0005c86f) setting_slider_pane_t_ParamLimits

0x4f17,	// (0x00052210) slider_set_pane_ParamLimits

0x5bbb,	// (0x00052eb4) control_pane_g5_ParamLimits

0x5bbb,	// (0x00052eb4) control_pane_g5

0xae80,	// (0x00058179) slider_set_pane_g1_ParamLimits

0x607d,	// (0x00053376) slider_set_pane_g2_ParamLimits

0x6089,	// (0x00053382) slider_set_pane_g3_ParamLimits

0x609d,	// (0x00053396) slider_set_pane_g4_ParamLimits

0x60b5,	// (0x000533ae) slider_set_pane_g5_ParamLimits

0x6089,	// (0x00053382) slider_set_pane_g6_ParamLimits

0x60cb,	// (0x000533c4) slider_set_pane_g7_ParamLimits

0xf97a,	// (0x0005cc73) slider_set_pane_g_ParamLimits

0x8a82,	// (0x00055d7b) navi_icon_text_pane_ParamLimits

0x95cd,	// (0x000568c6) aid_fill_nsta_2_ParamLimits

0x960e,	// (0x00056907) aid_touch_tab_arrow_left_ParamLimits

0x961d,	// (0x00056916) aid_touch_tab_arrow_right_ParamLimits

0x968a,	// (0x00056983) clock_nsta_pane_ParamLimits

0xa942,	// (0x00057c3b) navi_icon_pane_g1_ParamLimits

0xa951,	// (0x00057c4a) navi_text_pane_t1_ParamLimits

0xbcef,	// (0x00058fe8) navi_icon_text_pane_g1_ParamLimits

0xbcfe,	// (0x00058ff7) navi_icon_text_pane_t1_ParamLimits

0xd4fb,	// (0x0005a7f4) list_single_hc_apps_pane_g1_ParamLimits

0x828f,	// (0x00055588) list_single_hc_apps_pane_g2_ParamLimits

0xfcf8,	// (0x0005cff1) list_single_hc_apps_pane_g_ParamLimits

0x82a8,	// (0x000555a1) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x6ac7,	// (0x00053dc0) list_single_hc_apps_pane_t1_ParamLimits

0x4dd9,	// (0x000520d2) popup_toolbar2_fixed_window_ParamLimits

0x4dd9,	// (0x000520d2) popup_toolbar2_fixed_window

0x94d1,	// (0x000567ca) popup_toolbar2_float_window

0x25af,	// (0x0004f8a8) bg_popup_sub_pane_cp27

0xd514,	// (0x0005a80d) grid_toolbar2_float_pane

0x25af,	// (0x0004f8a8) bg_popup_sub_pane_cp26

0xd514,	// (0x0005a80d) grid_toolbar2_fixed_pane

0xd51c,	// (0x0005a815) cell_toolbar2_fixed_pane_ParamLimits

0xd51c,	// (0x0005a815) cell_toolbar2_fixed_pane

0xd52c,	// (0x0005a825) cell_toolbar2_fixed_pane_g1

0xd535,	// (0x0005a82e) toolbar2_fixed_button_pane

0x9ac1,	// (0x00056dba) toolbar2_fixed_button_pane_g1

0x9ad1,	// (0x00056dca) toolbar2_fixed_button_pane_g2

0x9ac9,	// (0x00056dc2) toolbar2_fixed_button_pane_g3

0x9ae1,	// (0x00056dda) toolbar2_fixed_button_pane_g4

0x9ad9,	// (0x00056dd2) toolbar2_fixed_button_pane_g5

0x9ae9,	// (0x00056de2) toolbar2_fixed_button_pane_g6

0x9af1,	// (0x00056dea) toolbar2_fixed_button_pane_g7

0x9b01,	// (0x00056dfa) toolbar2_fixed_button_pane_g8

0x9af9,	// (0x00056df2) toolbar2_fixed_button_pane_g9

0x0008,

0xf87c,	// (0x0005cb75) toolbar2_fixed_button_pane_g

0xd53d,	// (0x0005a836) cell_toolbar2_float_pane_ParamLimits

0xd53d,	// (0x0005a836) cell_toolbar2_float_pane

0xd54e,	// (0x0005a847) cell_toolbar2_float_pane_g1

0xd535,	// (0x0005a82e) toolbar2_fixed_button_pane_cp

0xc1ca,	// (0x000594c3) fep_vkb_accented_list_pane_ParamLimits

0xc1ca,	// (0x000594c3) fep_vkb_accented_list_pane

0x668d,	// (0x00053986) bg_popup_fep_shadow_pane_g9

0x8c06,	// (0x00055eff) bg_popup_fep_shadow_pane_cp3

0x7f21,	// (0x0005521a) list_accented_list_pane

0xd557,	// (0x0005a850) list_single_accented_list_pane_ParamLimits

0xd557,	// (0x0005a850) list_single_accented_list_pane

0x8c06,	// (0x00055eff) list_highlight_pane_cp10

0xd568,	// (0x0005a861) list_single_accented_list_pane_t1

0x9417,	// (0x00056710) popup_slider_window_ParamLimits

0x9417,	// (0x00056710) popup_slider_window

0xd1b0,	// (0x0005a4a9) aid_indentation_list_msg

0xd634,	// (0x0005a92d) bg_popup_window_pane_cp19

0xd6a2,	// (0x0005a99b) popup_slider_window_g1

0xd6be,	// (0x0005a9b7) popup_slider_window_g2

0xd6da,	// (0x0005a9d3) popup_slider_window_g3

0x0005,

0xfcfd,	// (0x0005cff6) popup_slider_window_g

0xd736,	// (0x0005aa2f) popup_slider_window_t1

0xd7aa,	// (0x0005aaa3) small_volume_slider_vertical_pane

0xc084,	// (0x0005937d) small_volume_slider_vertical_pane_g1

0xc084,	// (0x0005937d) small_volume_slider_vertical_pane_g2

0xd7c6,	// (0x0005aabf) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0f,	// (0x0005d008) small_volume_slider_vertical_pane_g

0x4b87,	// (0x00051e80) area_side_right_pane_ParamLimits

0x4b87,	// (0x00051e80) area_side_right_pane

0x6af5,	// (0x00053dee) aid_size_side_button_ParamLimits

0x6af5,	// (0x00053dee) aid_size_side_button

0x6b09,	// (0x00053e02) grid_sctrl_middle_pane_ParamLimits

0x6b09,	// (0x00053e02) grid_sctrl_middle_pane

0x6b29,	// (0x00053e22) sctrl_sk_bottom_pane

0x6b3a,	// (0x00053e33) sctrl_sk_top_pane

0x6b4c,	// (0x00053e45) aid_touch_sctrl_top

0x6b59,	// (0x00053e52) bg_sctrl_sk_pane_ParamLimits

0x6b59,	// (0x00053e52) bg_sctrl_sk_pane

0x6b67,	// (0x00053e60) sctrl_sk_top_pane_g1

0x6b74,	// (0x00053e6d) sctrl_sk_top_pane_t1

0x6b4c,	// (0x00053e45) aid_touch_sctrl_bottom

0x6b59,	// (0x00053e52) bg_sctrl_sk_pane_cp_ParamLimits

0x6b59,	// (0x00053e52) bg_sctrl_sk_pane_cp

0x6b8f,	// (0x00053e88) sctrl_sk_bottom_pane_g1

0x6b74,	// (0x00053e6d) sctrl_sk_bottom_pane_t1

0x6b98,	// (0x00053e91) cell_sctrl_middle_pane_ParamLimits

0x6b98,	// (0x00053e91) cell_sctrl_middle_pane

0x6bb5,	// (0x00053eae) aid_touch_sctrl_middle_ParamLimits

0x6bb5,	// (0x00053eae) aid_touch_sctrl_middle

0x6bc7,	// (0x00053ec0) bg_sctrl_middle_pane_ParamLimits

0x6bc7,	// (0x00053ec0) bg_sctrl_middle_pane

0x66ad,	// (0x000539a6) cell_sctrl_middle_pane_g1_ParamLimits

0x66ad,	// (0x000539a6) cell_sctrl_middle_pane_g1

0x6bd5,	// (0x00053ece) cell_sctrl_middle_pane_g2_ParamLimits

0x6bd5,	// (0x00053ece) cell_sctrl_middle_pane_g2

0x0001,

0xfd1b,	// (0x0005d014) cell_sctrl_middle_pane_g_ParamLimits

0xfd1b,	// (0x0005d014) cell_sctrl_middle_pane_g

0x9ac1,	// (0x00056dba) bg_sctrl_middle_pane_g1

0x9ac9,	// (0x00056dc2) bg_sctrl_middle_pane_g2

0x9ad1,	// (0x00056dca) bg_sctrl_middle_pane_g3

0x9ad9,	// (0x00056dd2) bg_sctrl_middle_pane_g4

0x9ae1,	// (0x00056dda) bg_sctrl_middle_pane_g5

0x9ae9,	// (0x00056de2) bg_sctrl_middle_pane_g6

0x9af1,	// (0x00056dea) bg_sctrl_middle_pane_g7

0x9af9,	// (0x00056df2) bg_sctrl_middle_pane_g8

0x0007,

0xfd20,	// (0x0005d019) bg_sctrl_middle_pane_g

0x9b01,	// (0x00056dfa) bg_sctrl_middle_pane_g8_copy1

0x9ac1,	// (0x00056dba) bg_sctrl_sk_pane_g1

0x9ad1,	// (0x00056dca) bg_sctrl_sk_pane_g2

0x9ac9,	// (0x00056dc2) bg_sctrl_sk_pane_g3

0x0008,

0xf87c,	// (0x0005cb75) bg_sctrl_sk_pane_g

0x7c32,	// (0x00054f2b) aid_size_touch_scroll_bar

0x9ae1,	// (0x00056dda) bg_sctrl_sk_pane_g4

0x9ad9,	// (0x00056dd2) bg_sctrl_sk_pane_g5

0x9ae9,	// (0x00056de2) bg_sctrl_sk_pane_g6

0x9af1,	// (0x00056dea) bg_sctrl_sk_pane_g7

0x9b01,	// (0x00056dfa) bg_sctrl_sk_pane_g8

0x9af9,	// (0x00056df2) bg_sctrl_sk_pane_g9

0x902e,	// (0x00056327) popup_fep_china_hwr2_fs_candidate_window

0x9038,	// (0x00056331) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9038,	// (0x00056331) popup_fep_china_hwr2_fs_control_window

0x66ad,	// (0x000539a6) sctrl_sk_top_pane_g2

0x0001,

0xfd16,	// (0x0005d00f) sctrl_sk_top_pane_g

0xd7cf,	// (0x0005aac8) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd7cf,	// (0x0005aac8) aid_fep_china_hwr2_fs_cell

0xd7e2,	// (0x0005aadb) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd7e2,	// (0x0005aadb) bg_popup_fep_shadow_pane_cp4

0xd7fb,	// (0x0005aaf4) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd7fb,	// (0x0005aaf4) bg_popup_fep_shadow_pane_cp5

0xd80d,	// (0x0005ab06) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd80d,	// (0x0005ab06) popup_fep_china_hwr2_fs_control_bar_grid

0xd81d,	// (0x0005ab16) popup_fep_china_hwr2_fs_control_funtion_grid

0xd825,	// (0x0005ab1e) aid_fep_china_hwr2_fs_candi_cell

0x25af,	// (0x0004f8a8) bg_popup_fep_shadow_pane_cp6

0xd82f,	// (0x0005ab28) popup_fep_china_hwr2_fs_candidate_grid

0xd839,	// (0x0005ab32) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd839,	// (0x0005ab32) cell_fep_china_hwr2_fs_funtion_grid

0xc084,	// (0x0005937d) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd851,	// (0x0005ab4a) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd851,	// (0x0005ab4a) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd85f,	// (0x0005ab58) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd85f,	// (0x0005ab58) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd31,	// (0x0005d02a) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd31,	// (0x0005d02a) cell_fep_china_hwr2_fs_funtion_grid_g

0xd875,	// (0x0005ab6e) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd875,	// (0x0005ab6e) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd88a,	// (0x0005ab83) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd88a,	// (0x0005ab83) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd36,	// (0x0005d02f) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd36,	// (0x0005d02f) cell_fep_china_hwr2_fs_funtion_grid_t

0xd8a6,	// (0x0005ab9f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd8ae,	// (0x0005aba7) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd8b6,	// (0x0005abaf) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd3b,	// (0x0005d034) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd8be,	// (0x0005abb7) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd8be,	// (0x0005abb7) cell_fep_china_hwr2_fs_candidate_grid

0xd8dd,	// (0x0005abd6) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd8e5,	// (0x0005abde) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc084,	// (0x0005937d) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc084,	// (0x0005937d) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4f,	// (0x0005ce48) cell_fep_china_hwr2_fs_candidate_grid_g

0xd8ed,	// (0x0005abe6) cell_fep_china_hwr2_fs_candidate_grid_t1

0x969d,	// (0x00056996) clock_nsta_pane_cp_24_ParamLimits

0x969d,	// (0x00056996) clock_nsta_pane_cp_24

0x971d,	// (0x00056a16) indicator_nsta_pane_cp_24_ParamLimits

0x971d,	// (0x00056a16) indicator_nsta_pane_cp_24

0xa7be,	// (0x00057ab7) heading_pane_g1

0x0001,

0xf8e1,	// (0x0005cbda) heading_pane_g

0xb26e,	// (0x00058567) grid_sct_catagory_button_pane

0xb2a0,	// (0x00058599) scroll_pane_cp5_ParamLimits

0xbd43,	// (0x0005903c) button_value_adjust_pane_cp5_ParamLimits

0xbd43,	// (0x0005903c) button_value_adjust_pane_cp5

0xbe20,	// (0x00059119) form2_midp_time_pane_ParamLimits

0xd8fb,	// (0x0005abf4) cell_sct_catagory_button_pane_ParamLimits

0xd8fb,	// (0x0005abf4) cell_sct_catagory_button_pane

0xc049,	// (0x00059342) bg_button_pane_cp01_ParamLimits

0xc049,	// (0x00059342) bg_button_pane_cp01

0xc084,	// (0x0005937d) cell_sct_catagory_button_pane_g1

0x9458,	// (0x00056751) popup_tb_extension_window

0xd90d,	// (0x0005ac06) aid_size_cell_ext_ParamLimits

0xd90d,	// (0x0005ac06) aid_size_cell_ext

0x7706,	// (0x000549ff) bg_tb_trans_pane_cp1_ParamLimits

0x7706,	// (0x000549ff) bg_tb_trans_pane_cp1

0xd92d,	// (0x0005ac26) grid_tb_ext_pane_ParamLimits

0xd92d,	// (0x0005ac26) grid_tb_ext_pane

0xd95d,	// (0x0005ac56) cell_tb_ext_pane_ParamLimits

0xd95d,	// (0x0005ac56) cell_tb_ext_pane

0xd974,	// (0x0005ac6d) cell_tb_ext_pane_g1_ParamLimits

0xd974,	// (0x0005ac6d) cell_tb_ext_pane_g1

0xd991,	// (0x0005ac8a) cell_tb_ext_pane_t1

0x7706,	// (0x000549ff) list_highlight_pane_cp11_ParamLimits

0x7706,	// (0x000549ff) list_highlight_pane_cp11

0x4df8,	// (0x000520f1) popup_uni_indicator_window_ParamLimits

0x4df8,	// (0x000520f1) popup_uni_indicator_window

0x7daf,	// (0x000550a8) bg_popup_sub_pane_cp14

0xd9ac,	// (0x0005aca5) list_uniindi_pane

0xd9b8,	// (0x0005acb1) uniindi_top_pane

0x7706,	// (0x000549ff) bg_uniindi_top_pane

0xd9d9,	// (0x0005acd2) uniindi_top_pane_g1

0xd9ef,	// (0x0005ace8) uniindi_top_pane_g2

0x0003,

0xfd42,	// (0x0005d03b) uniindi_top_pane_g

0xda19,	// (0x0005ad12) uniindi_top_pane_t1

0xda45,	// (0x0005ad3e) list_single_uniindi_pane_ParamLimits

0xda45,	// (0x0005ad3e) list_single_uniindi_pane

0xc084,	// (0x0005937d) bg_uniindi_top_pane_g1

0xda57,	// (0x0005ad50) list_single_uniindi_pane_g1

0xda6a,	// (0x0005ad63) list_single_uniindi_pane_t1

0x4c64,	// (0x00051f5d) control_bg_pane

0xda8f,	// (0x0005ad88) bg_sctrl_sk_pane_cp1

0xda98,	// (0x0005ad91) bg_sctrl_sk_pane_cp2

0xdaa1,	// (0x0005ad9a) control_bg_pane_g1

0xdaaa,	// (0x0005ada3) control_bg_pane_g2

0x0001,

0xfd4b,	// (0x0005d044) control_bg_pane_g

0xbb65,	// (0x00058e5e) cell_indicator_nsta_pane_g1_ParamLimits

0xbb73,	// (0x00058e6c) cell_indicator_nsta_pane_g2_ParamLimits

0xfab3,	// (0x0005cdac) cell_indicator_nsta_pane_g_ParamLimits

0x641f,	// (0x00053718) form2_midp_time_pane_t1_ParamLimits

0x7a74,	// (0x00054d6d) main_idle_act4_pane_ParamLimits

0x7a74,	// (0x00054d6d) main_idle_act4_pane

0x9458,	// (0x00056751) popup_tb_extension_window_ParamLimits

0xd94f,	// (0x0005ac48) tb_ext_find_pane_ParamLimits

0xd94f,	// (0x0005ac48) tb_ext_find_pane

0xdab3,	// (0x0005adac) ai_gene_pane_1_cp1

0x8d4f,	// (0x00056048) ai_gene_pane_2_cp1

0xdabb,	// (0x0005adb4) list_single_idle_plugin_calendar_pane

0xdac4,	// (0x0005adbd) list_single_idle_plugin_notification_pane

0xdacd,	// (0x0005adc6) list_single_idle_plugin_player_pane

0xdad6,	// (0x0005adcf) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdad6,	// (0x0005adcf) list_single_idle_plugin_shortcut_pane

0xdaf8,	// (0x0005adf1) main_idle_act4_pane_t1

0xdb0a,	// (0x0005ae03) main_idle_act4_pane_t2

0x0001,

0xfd50,	// (0x0005d049) main_idle_act4_pane_t

0xdb1c,	// (0x0005ae15) middle_sk_idle_act4_pane_ParamLimits

0xdb1c,	// (0x0005ae15) middle_sk_idle_act4_pane

0xdb32,	// (0x0005ae2b) popup_clock_digital_analogue_window_cp2

0xdb4c,	// (0x0005ae45) shortcut_wheel_idle_act4_pane_ParamLimits

0xdb4c,	// (0x0005ae45) shortcut_wheel_idle_act4_pane

0xc084,	// (0x0005937d) shortcut_wheel_idle_act4_pane_g1

0xc084,	// (0x0005937d) shortcut_wheel_idle_act4_pane_g2

0xc084,	// (0x0005937d) shortcut_wheel_idle_act4_pane_g3

0xc084,	// (0x0005937d) shortcut_wheel_idle_act4_pane_g4

0xc084,	// (0x0005937d) shortcut_wheel_idle_act4_pane_g5

0xdb60,	// (0x0005ae59) shortcut_wheel_idle_act4_pane_g6

0xdb68,	// (0x0005ae61) shortcut_wheel_idle_act4_pane_g7

0xdb70,	// (0x0005ae69) shortcut_wheel_idle_act4_pane_g8

0xdb78,	// (0x0005ae71) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd55,	// (0x0005d04e) shortcut_wheel_idle_act4_pane_g

0xc30e,	// (0x00059607) middle_sk_idle_act4_pane_g1_ParamLimits

0xc30e,	// (0x00059607) middle_sk_idle_act4_pane_g1

0xdbdc,	// (0x0005aed5) middle_sk_idle_act4_pane_g2_ParamLimits

0xdbdc,	// (0x0005aed5) middle_sk_idle_act4_pane_g2

0x0001,

0xfd78,	// (0x0005d071) middle_sk_idle_act4_pane_g_ParamLimits

0xfd78,	// (0x0005d071) middle_sk_idle_act4_pane_g

0xdbe8,	// (0x0005aee1) middle_sk_idle_act4_pane_t1_ParamLimits

0xdbe8,	// (0x0005aee1) middle_sk_idle_act4_pane_t1

0xdc05,	// (0x0005aefe) grid_ai_shortcut_pane_ParamLimits

0xdc05,	// (0x0005aefe) grid_ai_shortcut_pane

0xdc1e,	// (0x0005af17) list_highlight_pane_cp16_ParamLimits

0xdc1e,	// (0x0005af17) list_highlight_pane_cp16

0xdc2b,	// (0x0005af24) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc2b,	// (0x0005af24) list_single_idle_plugin_shortcut_pane_g1

0xdc37,	// (0x0005af30) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc37,	// (0x0005af30) list_single_idle_plugin_shortcut_pane_g2

0xdc51,	// (0x0005af4a) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdc51,	// (0x0005af4a) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7d,	// (0x0005d076) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7d,	// (0x0005d076) list_single_idle_plugin_shortcut_pane_g

0xdc64,	// (0x0005af5d) cell_ai_shortcut_pane_ParamLimits

0xdc64,	// (0x0005af5d) cell_ai_shortcut_pane

0xdc87,	// (0x0005af80) cell_ai_shortcut_pane_g1_ParamLimits

0xdc87,	// (0x0005af80) cell_ai_shortcut_pane_g1

0xdab3,	// (0x0005adac) ai_gene_pane_1_cp2

0xdca9,	// (0x0005afa2) ai_gene_pane_2_cp2

0xdcb1,	// (0x0005afaa) list_highlight_pane_cp15

0xdcba,	// (0x0005afb3) list_single_idle_plugin_calendar_pane_g1

0xdcb1,	// (0x0005afaa) list_highlight_pane_cp17

0xdcc2,	// (0x0005afbb) list_single_idle_plugin_calendar_pane_g1_copy1

0xdcca,	// (0x0005afc3) list_single_idle_plugin_player_pane_g1

0xb4d5,	// (0x000587ce) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd84,	// (0x0005d07d) list_single_idle_plugin_player_pane_g

0xdcd2,	// (0x0005afcb) list_single_idle_plugin_player_pane_t1

0xdce0,	// (0x0005afd9) list_single_idle_plugin_player_pane_t2

0xdcee,	// (0x0005afe7) list_single_idle_plugin_player_pane_t3

0xdcfc,	// (0x0005aff5) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd89,	// (0x0005d082) list_single_idle_plugin_player_pane_t

0xdd0a,	// (0x0005b003) wait_bar_pane_cp15

0xdd12,	// (0x0005b00b) grid_ai_notification_pane

0xb4d5,	// (0x000587ce) list_single_idle_plugin_notification_pane_g1

0xdd1b,	// (0x0005b014) cell_ai_notification_pane_ParamLimits

0xdd1b,	// (0x0005b014) cell_ai_notification_pane

0xdd28,	// (0x0005b021) cell_ai_notification_pane_g1

0xdd30,	// (0x0005b029) cell_ai_notification_pane_t1

0xdd3e,	// (0x0005b037) tb_ext_find_button_pane

0xdd46,	// (0x0005b03f) tb_ext_find_pane_g1

0xdd4e,	// (0x0005b047) tb_ext_find_pane_t1

0x85ed,	// (0x000558e6) tb_ext_find_button_pane_g1

0xdd5c,	// (0x0005b055) tb_ext_find_button_pane_g2

0x0001,

0xfd92,	// (0x0005d08b) tb_ext_find_button_pane_g

0xdaf8,	// (0x0005adf1) main_idle_act4_pane_t1_ParamLimits

0xdb0a,	// (0x0005ae03) main_idle_act4_pane_t2_ParamLimits

0xfd50,	// (0x0005d049) main_idle_act4_pane_t_ParamLimits

0xdb32,	// (0x0005ae2b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdb40,	// (0x0005ae39) sat_plugin_idle_act4_pane_ParamLimits

0xdb40,	// (0x0005ae39) sat_plugin_idle_act4_pane

0xdd65,	// (0x0005b05e) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd65,	// (0x0005b05e) sat_plugin_idle_act4_pane_t1

0xdd78,	// (0x0005b071) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd78,	// (0x0005b071) sat_plugin_idle_act4_pane_t2

0xdd8b,	// (0x0005b084) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd8b,	// (0x0005b084) sat_plugin_idle_act4_pane_t3

0xdd9e,	// (0x0005b097) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd9e,	// (0x0005b097) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd97,	// (0x0005d090) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd97,	// (0x0005d090) sat_plugin_idle_act4_pane_t

0x4d29,	// (0x00052022) popup_battery_window_ParamLimits

0x4d29,	// (0x00052022) popup_battery_window

0x7706,	// (0x000549ff) bg_popup_sub_pane_cp25_ParamLimits

0x7706,	// (0x000549ff) bg_popup_sub_pane_cp25

0xddb1,	// (0x0005b0aa) popup_battery_window_g1_ParamLimits

0xddb1,	// (0x0005b0aa) popup_battery_window_g1

0xddbd,	// (0x0005b0b6) popup_battery_window_t1_ParamLimits

0xddbd,	// (0x0005b0b6) popup_battery_window_t1

0xddcf,	// (0x0005b0c8) popup_battery_window_t2_ParamLimits

0xddcf,	// (0x0005b0c8) popup_battery_window_t2

0x0001,

0xfda0,	// (0x0005d099) popup_battery_window_t_ParamLimits

0xfda0,	// (0x0005d099) popup_battery_window_t

0x8c1a,	// (0x00055f13) midp_canvas_pane_ParamLimits

0x8c91,	// (0x00055f8a) midp_keypad_pane_ParamLimits

0x8c91,	// (0x00055f8a) midp_keypad_pane

0x8f84,	// (0x0005627d) main_midp_pane_ParamLimits

0xbbf0,	// (0x00058ee9) signal_pane_g2_cp_ParamLimits

0xddec,	// (0x0005b0e5) aid_size_cell_midp_keypad_ParamLimits

0xddec,	// (0x0005b0e5) aid_size_cell_midp_keypad

0xde06,	// (0x0005b0ff) midp_keyp_game_grid_pane_ParamLimits

0xde06,	// (0x0005b0ff) midp_keyp_game_grid_pane

0xde26,	// (0x0005b11f) midp_keyp_rocker_pane_ParamLimits

0xde26,	// (0x0005b11f) midp_keyp_rocker_pane

0xde55,	// (0x0005b14e) midp_keyp_sk_left_pane_ParamLimits

0xde55,	// (0x0005b14e) midp_keyp_sk_left_pane

0xded0,	// (0x0005b1c9) midp_keyp_sk_right_pane_ParamLimits

0xded0,	// (0x0005b1c9) midp_keyp_sk_right_pane

0x25af,	// (0x0004f8a8) bg_button_pane_cp03

0xdf2a,	// (0x0005b223) midp_keyp_sk_left_pane_g1

0x25af,	// (0x0004f8a8) bg_button_pane_cp04

0xdf2a,	// (0x0005b223) midp_keyp_sk_right_pane_g1

0xc084,	// (0x0005937d) midp_keyp_rocker_pane_g1

0xdf33,	// (0x0005b22c) keyp_game_cell_pane_ParamLimits

0xdf33,	// (0x0005b22c) keyp_game_cell_pane

0x25af,	// (0x0004f8a8) bg_button_pane_cp02

0xdf46,	// (0x0005b23f) keyp_game_cell_pane_g1

0x4d73,	// (0x0005206c) popup_fep_vkb2_window_ParamLimits

0x4d73,	// (0x0005206c) popup_fep_vkb2_window

0x6bf7,	// (0x00053ef0) aid_size_cell_vkb2_ParamLimits

0x6bf7,	// (0x00053ef0) aid_size_cell_vkb2

0x6c43,	// (0x00053f3c) popup_fep_vkb2_window_g1_ParamLimits

0x6c43,	// (0x00053f3c) popup_fep_vkb2_window_g1

0x6c8b,	// (0x00053f84) vkb2_area_bottom_pane_ParamLimits

0x6c8b,	// (0x00053f84) vkb2_area_bottom_pane

0x6cdf,	// (0x00053fd8) vkb2_area_keypad_pane_ParamLimits

0x6cdf,	// (0x00053fd8) vkb2_area_keypad_pane

0x6d25,	// (0x0005401e) vkb2_area_top_pane_ParamLimits

0x6d25,	// (0x0005401e) vkb2_area_top_pane

0x6d9f,	// (0x00054098) vkb2_top_entry_pane_ParamLimits

0x6d9f,	// (0x00054098) vkb2_top_entry_pane

0x6dc9,	// (0x000540c2) vkb2_top_grid_left_pane_ParamLimits

0x6dc9,	// (0x000540c2) vkb2_top_grid_left_pane

0x6de7,	// (0x000540e0) vkb2_top_grid_right_pane_ParamLimits

0x6de7,	// (0x000540e0) vkb2_top_grid_right_pane

0x6e05,	// (0x000540fe) vkb2_cell_keypad_pane_ParamLimits

0x6e05,	// (0x000540fe) vkb2_cell_keypad_pane

0x6ebb,	// (0x000541b4) vkb2_area_bottom_grid_pane_ParamLimits

0x6ebb,	// (0x000541b4) vkb2_area_bottom_grid_pane

0x6ee1,	// (0x000541da) vkb2_area_bottom_pane_g1_ParamLimits

0x6ee1,	// (0x000541da) vkb2_area_bottom_pane_g1

0x6f05,	// (0x000541fe) vkb2_area_bottom_pane_g2_ParamLimits

0x6f05,	// (0x000541fe) vkb2_area_bottom_pane_g2

0x6f33,	// (0x0005422c) vkb2_area_bottom_pane_g3_ParamLimits

0x6f33,	// (0x0005422c) vkb2_area_bottom_pane_g3

0x0002,

0xfda5,	// (0x0005d09e) vkb2_area_bottom_pane_g_ParamLimits

0xfda5,	// (0x0005d09e) vkb2_area_bottom_pane_g

0x6f94,	// (0x0005428d) vkb2_top_cell_left_pane_ParamLimits

0x6f94,	// (0x0005428d) vkb2_top_cell_left_pane

0xdf57,	// (0x0005b250) vkb2_top_entry_pane_g1_ParamLimits

0xdf57,	// (0x0005b250) vkb2_top_entry_pane_g1

0xdf65,	// (0x0005b25e) vkb2_top_entry_pane_t1_ParamLimits

0xdf65,	// (0x0005b25e) vkb2_top_entry_pane_t1

0xdf7d,	// (0x0005b276) vkb2_top_entry_pane_t2_ParamLimits

0xdf7d,	// (0x0005b276) vkb2_top_entry_pane_t2

0xdf95,	// (0x0005b28e) vkb2_top_entry_pane_t3_ParamLimits

0xdf95,	// (0x0005b28e) vkb2_top_entry_pane_t3

0x0002,

0xfdac,	// (0x0005d0a5) vkb2_top_entry_pane_t_ParamLimits

0xfdac,	// (0x0005d0a5) vkb2_top_entry_pane_t

0x6fe1,	// (0x000542da) vkb2_top_grid_right_pane_g1_ParamLimits

0x6fe1,	// (0x000542da) vkb2_top_grid_right_pane_g1

0x6ff7,	// (0x000542f0) vkb2_top_grid_right_pane_g2_ParamLimits

0x6ff7,	// (0x000542f0) vkb2_top_grid_right_pane_g2

0x700f,	// (0x00054308) vkb2_top_grid_right_pane_g3_ParamLimits

0x700f,	// (0x00054308) vkb2_top_grid_right_pane_g3

0x7027,	// (0x00054320) vkb2_top_grid_right_pane_g4_ParamLimits

0x7027,	// (0x00054320) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb3,	// (0x0005d0ac) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb3,	// (0x0005d0ac) vkb2_top_grid_right_pane_g

0x703d,	// (0x00054336) vkb2_top_cell_left_pane_g1

0x7054,	// (0x0005434d) vkb2_cell_keypad_pane_g1_ParamLimits

0x7054,	// (0x0005434d) vkb2_cell_keypad_pane_g1

0xdfab,	// (0x0005b2a4) vkb2_cell_keypad_pane_t1_ParamLimits

0xdfab,	// (0x0005b2a4) vkb2_cell_keypad_pane_t1

0x7078,	// (0x00054371) vkb2_cell_bottom_grid_pane_ParamLimits

0x7078,	// (0x00054371) vkb2_cell_bottom_grid_pane

0x70b1,	// (0x000543aa) vkb2_cell_bottom_grid_pane_g1

0xdb80,	// (0x0005ae79) aid_call2_pane_cp02

0xdb88,	// (0x0005ae81) aid_call_pane_cp02

0xdb90,	// (0x0005ae89) clock_digital_number_pane_cp10

0xdb98,	// (0x0005ae91) clock_digital_number_pane_cp11

0xdba0,	// (0x0005ae99) clock_digital_number_pane_cp12

0xdba8,	// (0x0005aea1) clock_digital_number_pane_cp13

0xdbb0,	// (0x0005aea9) clock_digital_separator_pane_cp10

0x85ed,	// (0x000558e6) popup_clock_digital_analogue_window_cp2_g1

0x85ed,	// (0x000558e6) popup_clock_digital_analogue_window_cp2_g2

0xdbb8,	// (0x0005aeb1) popup_clock_digital_analogue_window_cp2_g3

0x85ed,	// (0x000558e6) popup_clock_digital_analogue_window_cp2_g4

0xdbb8,	// (0x0005aeb1) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd68,	// (0x0005d061) popup_clock_digital_analogue_window_cp2_g

0xdbc0,	// (0x0005aeb9) popup_clock_digital_analogue_window_cp2_t1

0xdbce,	// (0x0005aec7) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd73,	// (0x0005d06c) popup_clock_digital_analogue_window_cp2_t

0xc084,	// (0x0005937d) clock_digital_number_pane_cp10_g1

0xc084,	// (0x0005937d) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4f,	// (0x0005ce48) clock_digital_number_pane_cp10_g

0xc084,	// (0x0005937d) clock_digital_separator_pane_cp10_g1

0xc084,	// (0x0005937d) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4f,	// (0x0005ce48) clock_digital_separator_pane_cp10_g

0xd9fb,	// (0x0005acf4) uniindi_top_pane_g3

0xda0c,	// (0x0005ad05) uniindi_top_pane_g4

0x6e75,	// (0x0005416e) vkb2_row_keypad_pane_ParamLimits

0x6e75,	// (0x0005416e) vkb2_row_keypad_pane

0x70cd,	// (0x000543c6) vkb2_cell_t_keypad_pane_ParamLimits

0x70cd,	// (0x000543c6) vkb2_cell_t_keypad_pane

0x70dd,	// (0x000543d6) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x70dd,	// (0x000543d6) vkb2_cell_t_keypad_pane_cp08

0x70f2,	// (0x000543eb) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x70f2,	// (0x000543eb) vkb2_cell_t_keypad_pane_cp09

0x7106,	// (0x000543ff) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7106,	// (0x000543ff) vkb2_cell_t_keypad_pane_cp01

0x7117,	// (0x00054410) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7117,	// (0x00054410) vkb2_cell_t_keypad_pane_cp02

0x7128,	// (0x00054421) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7128,	// (0x00054421) vkb2_cell_t_keypad_pane_cp03

0x7139,	// (0x00054432) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7139,	// (0x00054432) vkb2_cell_t_keypad_pane_cp04

0x714a,	// (0x00054443) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x714a,	// (0x00054443) vkb2_cell_t_keypad_pane_cp05

0x715b,	// (0x00054454) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x715b,	// (0x00054454) vkb2_cell_t_keypad_pane_cp06

0x716e,	// (0x00054467) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x716e,	// (0x00054467) vkb2_cell_t_keypad_pane_cp07

0x7183,	// (0x0005447c) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7183,	// (0x0005447c) vkb2_cell_t_keypad_pane_cp10

0x66ad,	// (0x000539a6) vkb2_cell_t_keypad_pane_g1

0xdfc2,	// (0x0005b2bb) vkb2_cell_t_keypad_pane_t1

0x4c64,	// (0x00051f5d) popup_grid_graphic2_window

0xdfd4,	// (0x0005b2cd) aid_size_cell_graphic2_ParamLimits

0xdfd4,	// (0x0005b2cd) aid_size_cell_graphic2

0xe00c,	// (0x0005b305) bg_popup_window_pane_cp21_ParamLimits

0xe00c,	// (0x0005b305) bg_popup_window_pane_cp21

0xe01a,	// (0x0005b313) graphic2_pages_pane_ParamLimits

0xe01a,	// (0x0005b313) graphic2_pages_pane

0xe060,	// (0x0005b359) grid_graphic2_control_pane_ParamLimits

0xe060,	// (0x0005b359) grid_graphic2_control_pane

0xe09e,	// (0x0005b397) grid_graphic2_pane_ParamLimits

0xe09e,	// (0x0005b397) grid_graphic2_pane

0xe114,	// (0x0005b40d) cell_graphic2_pane

0x25af,	// (0x0004f8a8) main_comp_mode_pane

0xd26c,	// (0x0005a565) list_ai3_gene_pane_ParamLimits

0xd634,	// (0x0005a92d) bg_popup_window_pane_cp19_ParamLimits

0xd640,	// (0x0005a939) bg_touch_area_indi_pane_ParamLimits

0xd640,	// (0x0005a939) bg_touch_area_indi_pane

0xd656,	// (0x0005a94f) bg_touch_area_indi_pane_cp01_ParamLimits

0xd656,	// (0x0005a94f) bg_touch_area_indi_pane_cp01

0xd66e,	// (0x0005a967) bg_touch_area_indi_pane_cp02_ParamLimits

0xd66e,	// (0x0005a967) bg_touch_area_indi_pane_cp02

0xd688,	// (0x0005a981) bg_touch_area_indi_pane_cp03_ParamLimits

0xd688,	// (0x0005a981) bg_touch_area_indi_pane_cp03

0xd6a2,	// (0x0005a99b) popup_slider_window_g1_ParamLimits

0xd6be,	// (0x0005a9b7) popup_slider_window_g2_ParamLimits

0xd6da,	// (0x0005a9d3) popup_slider_window_g3_ParamLimits

0xfcfd,	// (0x0005cff6) popup_slider_window_g_ParamLimits

0xd736,	// (0x0005aa2f) popup_slider_window_t1_ParamLimits

0xd7aa,	// (0x0005aaa3) small_volume_slider_vertical_pane_ParamLimits

0xe114,	// (0x0005b40d) cell_graphic2_pane_ParamLimits

0xe166,	// (0x0005b45f) bg_button_pane_cp10_ParamLimits

0xe166,	// (0x0005b45f) bg_button_pane_cp10

0xe17b,	// (0x0005b474) bg_button_pane_cp11_ParamLimits

0xe17b,	// (0x0005b474) bg_button_pane_cp11

0xe190,	// (0x0005b489) graphic2_pages_pane_g1_ParamLimits

0xe190,	// (0x0005b489) graphic2_pages_pane_g1

0xe1ab,	// (0x0005b4a4) graphic2_pages_pane_g2_ParamLimits

0xe1ab,	// (0x0005b4a4) graphic2_pages_pane_g2

0x0001,

0xfdc1,	// (0x0005d0ba) graphic2_pages_pane_g_ParamLimits

0xfdc1,	// (0x0005d0ba) graphic2_pages_pane_g

0xe1c3,	// (0x0005b4bc) graphic2_pages_pane_t1_ParamLimits

0xe1c3,	// (0x0005b4bc) graphic2_pages_pane_t1

0xe1d9,	// (0x0005b4d2) cell_graphic2_control_pane_ParamLimits

0xe1d9,	// (0x0005b4d2) cell_graphic2_control_pane

0xe1f3,	// (0x0005b4ec) cell_graphic2_pane_g1_ParamLimits

0xe1f3,	// (0x0005b4ec) cell_graphic2_pane_g1

0xe200,	// (0x0005b4f9) cell_graphic2_pane_g2_ParamLimits

0xe200,	// (0x0005b4f9) cell_graphic2_pane_g2

0xe20d,	// (0x0005b506) cell_graphic2_pane_g3_ParamLimits

0xe20d,	// (0x0005b506) cell_graphic2_pane_g3

0xe21a,	// (0x0005b513) cell_graphic2_pane_g4_ParamLimits

0xe21a,	// (0x0005b513) cell_graphic2_pane_g4

0xe227,	// (0x0005b520) cell_graphic2_pane_g5_ParamLimits

0xe227,	// (0x0005b520) cell_graphic2_pane_g5

0x0004,

0xfdc6,	// (0x0005d0bf) cell_graphic2_pane_g_ParamLimits

0xfdc6,	// (0x0005d0bf) cell_graphic2_pane_g

0xe242,	// (0x0005b53b) cell_graphic2_pane_t1_ParamLimits

0xe242,	// (0x0005b53b) cell_graphic2_pane_t1

0x9bb3,	// (0x00056eac) grid_highlight_pane_cp11_ParamLimits

0x9bb3,	// (0x00056eac) grid_highlight_pane_cp11

0x7706,	// (0x000549ff) bg_button_pane_cp05

0xe26b,	// (0x0005b564) cell_graphic2_control_pane_g1

0xc084,	// (0x0005937d) bg_touch_area_indi_pane_g1

0xe293,	// (0x0005b58c) aid_cmod_rocker_key_size

0xe29d,	// (0x0005b596) aid_cmode_itu_key_size

0xe2a7,	// (0x0005b5a0) main_cmode_video_pane

0xe2b1,	// (0x0005b5aa) main_comp_mode_itu_pane

0xe2bd,	// (0x0005b5b6) main_comp_mode_rocker_pane

0xe2c9,	// (0x0005b5c2) cell_cmode_rocker_pane_ParamLimits

0xe2c9,	// (0x0005b5c2) cell_cmode_rocker_pane

0xe2dd,	// (0x0005b5d6) cell_cmode_itu_pane_ParamLimits

0xe2dd,	// (0x0005b5d6) cell_cmode_itu_pane

0x7daf,	// (0x000550a8) bg_button_pane_cp06_ParamLimits

0x7daf,	// (0x000550a8) bg_button_pane_cp06

0xc30e,	// (0x00059607) cell_cmode_rocker_pane_g1_ParamLimits

0xc30e,	// (0x00059607) cell_cmode_rocker_pane_g1

0xd851,	// (0x0005ab4a) cell_cmode_rocker_pane_g2_ParamLimits

0xd851,	// (0x0005ab4a) cell_cmode_rocker_pane_g2

0x0001,

0xfdd6,	// (0x0005d0cf) cell_cmode_rocker_pane_g_ParamLimits

0xfdd6,	// (0x0005d0cf) cell_cmode_rocker_pane_g

0x25af,	// (0x0004f8a8) bg_button_pane_cp07

0xe2f4,	// (0x0005b5ed) cell_cmode_itu_pane_g1

0xe2fd,	// (0x0005b5f6) cell_cmode_itu_pane_t1

0xe30b,	// (0x0005b604) cell_cmode_itu_pane_t2

0x0001,

0xfddb,	// (0x0005d0d4) cell_cmode_itu_pane_t

0xda7f,	// (0x0005ad78) aid_touch_ctrl_left

0xda87,	// (0x0005ad80) aid_touch_ctrl_right

0x25af,	// (0x0004f8a8) compa_mode_pane

0xe319,	// (0x0005b612) aid_cmod_rocker_key_size_cp

0xe323,	// (0x0005b61c) aid_cmode_itu_key_size_cp

0xe32d,	// (0x0005b626) compa_mode_pane_g1

0xe335,	// (0x0005b62e) compa_mode_pane_g2

0xe33d,	// (0x0005b636) compa_mode_pane_g3

0x0002,

0xfde0,	// (0x0005d0d9) compa_mode_pane_g

0xe345,	// (0x0005b63e) main_comp_mode_itu_pane_cp

0xe34d,	// (0x0005b646) main_comp_mode_rocker_pane_cp

0xe355,	// (0x0005b64e) cell_cmode_itu_pane_cp_ParamLimits

0xe355,	// (0x0005b64e) cell_cmode_itu_pane_cp

0xe36a,	// (0x0005b663) cell_cmode_rocker_pane_cp_ParamLimits

0xe36a,	// (0x0005b663) cell_cmode_rocker_pane_cp

0x7daf,	// (0x000550a8) bg_button_pane_cp06_cp_ParamLimits

0x7daf,	// (0x000550a8) bg_button_pane_cp06_cp

0xc30e,	// (0x00059607) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc30e,	// (0x00059607) cell_cmode_rocker_pane_g1_cp

0xc084,	// (0x0005937d) cell_cmode_rocker_pane_g2_cp

0x25af,	// (0x0004f8a8) bg_button_pane_cp07_cp

0xe37c,	// (0x0005b675) cell_cmode_itu_pane_g1_cp

0xe385,	// (0x0005b67e) cell_cmode_itu_pane_t1_cp

0xe385,	// (0x0005b67e) cell_cmode_itu_pane_t2_cp

0xb04e,	// (0x00058347) settings_code_pane_cp2

0x747c,	// (0x00054775) bg_popup_window_pane_cp3_ParamLimits

0x78f4,	// (0x00054bed) heading_pane_cp3_ParamLimits

0x7900,	// (0x00054bf9) listscroll_popup_graphic_pane_ParamLimits

0x6440,	// (0x00053739) fep_hwr_aid_pane_ParamLimits

0x6b4c,	// (0x00053e45) aid_touch_sctrl_top_ParamLimits

0x6b67,	// (0x00053e60) sctrl_sk_top_pane_g1_ParamLimits

0x66ad,	// (0x000539a6) sctrl_sk_top_pane_g2_ParamLimits

0xfd16,	// (0x0005d00f) sctrl_sk_top_pane_g_ParamLimits

0x6b74,	// (0x00053e6d) sctrl_sk_top_pane_t1_ParamLimits

0x6b4c,	// (0x00053e45) aid_touch_sctrl_bottom_ParamLimits

0x6b74,	// (0x00053e6d) sctrl_sk_bottom_pane_t1_ParamLimits

0xd9c5,	// (0x0005acbe) aid_area_touch_clock

0x6d67,	// (0x00054060) aid_vkb2_area_top_pane_cell_ParamLimits

0x6d67,	// (0x00054060) aid_vkb2_area_top_pane_cell

0x6e97,	// (0x00054190) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6e97,	// (0x00054190) aid_vkb2_area_bottom_pane_cell

0xdf4f,	// (0x0005b248) popup_char_count_window

0xe393,	// (0x0005b68c) popup_char_count_window_g1

0xe39c,	// (0x0005b695) popup_char_count_window_g2

0xe3a5,	// (0x0005b69e) popup_char_count_window_g3

0x0002,

0xfde7,	// (0x0005d0e0) popup_char_count_window_g

0xe3ae,	// (0x0005b6a7) popup_char_count_window_t1

0x6c21,	// (0x00053f1a) popup_fep_char_preview_window_ParamLimits

0x6c21,	// (0x00053f1a) popup_fep_char_preview_window

0x6d85,	// (0x0005407e) vkb2_top_candi_pane_ParamLimits

0x6d85,	// (0x0005407e) vkb2_top_candi_pane

0xe3bc,	// (0x0005b6b5) cell_vkb2_top_candi_pane_ParamLimits

0xe3bc,	// (0x0005b6b5) cell_vkb2_top_candi_pane

0x7198,	// (0x00054491) bg_popup_fep_char_preview_window_ParamLimits

0x7198,	// (0x00054491) bg_popup_fep_char_preview_window

0x71a6,	// (0x0005449f) popup_fep_char_preview_window_t1_ParamLimits

0x71a6,	// (0x0005449f) popup_fep_char_preview_window_t1

0xe40d,	// (0x0005b706) bg_popup_fep_char_preview_window_g1

0xe415,	// (0x0005b70e) bg_popup_fep_char_preview_window_g2

0xe41d,	// (0x0005b716) bg_popup_fep_char_preview_window_g3

0xe425,	// (0x0005b71e) bg_popup_fep_char_preview_window_g4

0xe42d,	// (0x0005b726) bg_popup_fep_char_preview_window_g5

0x71e0,	// (0x000544d9) bg_popup_fep_char_preview_window_g6

0xe435,	// (0x0005b72e) bg_popup_fep_char_preview_window_g7

0xe43d,	// (0x0005b736) bg_popup_fep_char_preview_window_g8

0xe445,	// (0x0005b73e) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdee,	// (0x0005d0e7) bg_popup_fep_char_preview_window_g

0x66ad,	// (0x000539a6) cell_vkb2_top_candi_pane_g1_ParamLimits

0x66ad,	// (0x000539a6) cell_vkb2_top_candi_pane_g1

0x66bb,	// (0x000539b4) cell_vkb2_top_candi_pane_g2_ParamLimits

0x66bb,	// (0x000539b4) cell_vkb2_top_candi_pane_g2

0xdeaf,	// (0x0005b1a8) cell_vkb2_top_candi_pane_g3_ParamLimits

0xdeaf,	// (0x0005b1a8) cell_vkb2_top_candi_pane_g3

0x71e8,	// (0x000544e1) cell_vkb2_top_candi_pane_g4_ParamLimits

0x71e8,	// (0x000544e1) cell_vkb2_top_candi_pane_g4

0xc80d,	// (0x00059b06) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc80d,	// (0x00059b06) cell_vkb2_top_candi_pane_g5

0x7209,	// (0x00054502) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7209,	// (0x00054502) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe01,	// (0x0005d0fa) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe01,	// (0x0005d0fa) cell_vkb2_top_candi_pane_g

0x7217,	// (0x00054510) cell_vkb2_top_candi_pane_t1

0x6069,	// (0x00053362) aid_size_touch_slider_mark_ParamLimits

0x6069,	// (0x00053362) aid_size_touch_slider_mark

0xe050,	// (0x0005b349) grid_graphic2_catg_pane_ParamLimits

0xe050,	// (0x0005b349) grid_graphic2_catg_pane

0xe0ee,	// (0x0005b3e7) popup_grid_graphic2_window_t1_ParamLimits

0xe0ee,	// (0x0005b3e7) popup_grid_graphic2_window_t1

0xe100,	// (0x0005b3f9) popup_grid_graphic2_window_t2_ParamLimits

0xe100,	// (0x0005b3f9) popup_grid_graphic2_window_t2

0x0001,

0xfdbc,	// (0x0005d0b5) popup_grid_graphic2_window_t_ParamLimits

0xfdbc,	// (0x0005d0b5) popup_grid_graphic2_window_t

0x7706,	// (0x000549ff) bg_button_pane_cp05_ParamLimits

0xe26b,	// (0x0005b564) cell_graphic2_control_pane_g1_ParamLimits

0xe44d,	// (0x0005b746) cell_graphic2_catg_pane_ParamLimits

0xe44d,	// (0x0005b746) cell_graphic2_catg_pane

0x25af,	// (0x0004f8a8) bg_button_pane_cp12

0xe45f,	// (0x0005b758) cell_graphic2_catg_pane_g1

0xd991,	// (0x0005ac8a) cell_tb_ext_pane_t1_ParamLimits

0x6fb4,	// (0x000542ad) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6fb4,	// (0x000542ad) vkb2_top_cell_right_narrow_pane

0x6fcc,	// (0x000542c5) vkb2_top_cell_right_wide_pane_ParamLimits

0x6fcc,	// (0x000542c5) vkb2_top_cell_right_wide_pane

0x6432,	// (0x0005372b) bg_vkb2_func_pane_ParamLimits

0x6432,	// (0x0005372b) bg_vkb2_func_pane

0x703d,	// (0x00054336) vkb2_top_cell_left_pane_g1_ParamLimits

0x6432,	// (0x0005372b) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6432,	// (0x0005372b) bg_vkb2_fuc_pane_cp03

0x70b1,	// (0x000543aa) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9ac9,	// (0x00056dc2) bg_vkb2_func_pane_g1

0x9ad1,	// (0x00056dca) bg_vkb2_func_pane_g2

0x9ae1,	// (0x00056dda) bg_vkb2_func_pane_g3

0x9ad9,	// (0x00056dd2) bg_vkb2_func_pane_g4

0x9ae9,	// (0x00056de2) bg_vkb2_func_pane_g5

0x9af1,	// (0x00056dea) bg_vkb2_func_pane_g6

0x9af9,	// (0x00056df2) bg_vkb2_func_pane_g7

0x9b01,	// (0x00056dfa) bg_vkb2_func_pane_g8

0x9ac1,	// (0x00056dba) bg_vkb2_func_pane_g9

0x0008,

0xfe0e,	// (0x0005d107) bg_vkb2_func_pane_g

0x6432,	// (0x0005372b) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6432,	// (0x0005372b) bg_vkb2_fuc_pane_cp01

0x703d,	// (0x00054336) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x703d,	// (0x00054336) vkb2_top_cell_right_wide_pane_g1

0x6432,	// (0x0005372b) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6432,	// (0x0005372b) bg_vkb2_fuc_pane_cp02

0x70b1,	// (0x000543aa) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x70b1,	// (0x000543aa) vkb2_top_cell_right_narrow_pane_g1

0xd5b2,	// (0x0005a8ab) aid_touch_area_decrease_ParamLimits

0xd5b2,	// (0x0005a8ab) aid_touch_area_decrease

0xd5d6,	// (0x0005a8cf) aid_touch_area_increase_ParamLimits

0xd5d6,	// (0x0005a8cf) aid_touch_area_increase

0xd5e2,	// (0x0005a8db) aid_touch_area_mute_ParamLimits

0xd5e2,	// (0x0005a8db) aid_touch_area_mute

0xd606,	// (0x0005a8ff) aid_touch_area_slider_ParamLimits

0xd606,	// (0x0005a8ff) aid_touch_area_slider

0xd6f6,	// (0x0005a9ef) popup_slider_window_g4_ParamLimits

0xd6f6,	// (0x0005a9ef) popup_slider_window_g4

0xd702,	// (0x0005a9fb) popup_slider_window_g5_ParamLimits

0xd702,	// (0x0005a9fb) popup_slider_window_g5

0xd724,	// (0x0005aa1d) popup_slider_window_g6_ParamLimits

0xd724,	// (0x0005aa1d) popup_slider_window_g6

0xd764,	// (0x0005aa5d) popup_slider_window_t2_ParamLimits

0xd764,	// (0x0005aa5d) popup_slider_window_t2

0x0001,

0xfd0a,	// (0x0005d003) popup_slider_window_t_ParamLimits

0xfd0a,	// (0x0005d003) popup_slider_window_t

0xd77c,	// (0x0005aa75) slider_pane_ParamLimits

0xd77c,	// (0x0005aa75) slider_pane

0xe468,	// (0x0005b761) slider_pane_g1_ParamLimits

0xe468,	// (0x0005b761) slider_pane_g1

0xe47c,	// (0x0005b775) slider_pane_g2_ParamLimits

0xe47c,	// (0x0005b775) slider_pane_g2

0xe492,	// (0x0005b78b) slider_pane_g3_ParamLimits

0xe492,	// (0x0005b78b) slider_pane_g3

0x0003,

0xfe21,	// (0x0005d11a) slider_pane_g_ParamLimits

0xfe21,	// (0x0005d11a) slider_pane_g

0x94ba,	// (0x000567b3) popup_tb_float_extension_window_ParamLimits

0x94ba,	// (0x000567b3) popup_tb_float_extension_window

0xe4be,	// (0x0005b7b7) aid_size_cell_tb_float_ext

0x25af,	// (0x0004f8a8) bg_popup_sub_window_cp28

0xe4ca,	// (0x0005b7c3) grid_tb_float_ext_pane

0xe4d6,	// (0x0005b7cf) cell_tb_float_ext_pane_ParamLimits

0xe4d6,	// (0x0005b7cf) cell_tb_float_ext_pane

0xe4f2,	// (0x0005b7eb) cell_tb_float_ext_pane_g1

0xe4fb,	// (0x0005b7f4) grid_highlight_pane_cp12

0x6587,	// (0x00053880) cell_last_hwr_side_pane_ParamLimits

0x6587,	// (0x00053880) cell_last_hwr_side_pane

0xc084,	// (0x0005937d) cell_last_hwr_side_pane_g1

0xe504,	// (0x0005b7fd) cell_last_hwr_side_pane_g2

0x0001,

0xfe2a,	// (0x0005d123) cell_last_hwr_side_pane_g

0x6f63,	// (0x0005425c) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6f63,	// (0x0005425c) vkb2_area_bottom_space_btn_pane

0x66ad,	// (0x000539a6) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdfc2,	// (0x0005b2bb) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7217,	// (0x00054510) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7235,	// (0x0005452e) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7235,	// (0x0005452e) vkb2_area_bottom_space_btn_pane_g1

0x726f,	// (0x00054568) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x726f,	// (0x00054568) vkb2_area_bottom_space_btn_pane_g2

0x72a5,	// (0x0005459e) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x72a5,	// (0x0005459e) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2f,	// (0x0005d128) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2f,	// (0x0005d128) vkb2_area_bottom_space_btn_pane_g

0x64f7,	// (0x000537f0) cel_fep_hwr_func_pane_ParamLimits

0x64f7,	// (0x000537f0) cel_fep_hwr_func_pane

0x6533,	// (0x0005382c) cell_hwr_side_button_pane_ParamLimits

0x6533,	// (0x0005382c) cell_hwr_side_button_pane

0xd9c5,	// (0x0005acbe) aid_area_touch_clock_ParamLimits

0x7706,	// (0x000549ff) bg_uniindi_top_pane_ParamLimits

0xd9d9,	// (0x0005acd2) uniindi_top_pane_g1_ParamLimits

0xd9ef,	// (0x0005ace8) uniindi_top_pane_g2_ParamLimits

0xd9fb,	// (0x0005acf4) uniindi_top_pane_g3_ParamLimits

0xda0c,	// (0x0005ad05) uniindi_top_pane_g4_ParamLimits

0xfd42,	// (0x0005d03b) uniindi_top_pane_g_ParamLimits

0xda19,	// (0x0005ad12) uniindi_top_pane_t1_ParamLimits

0x7706,	// (0x000549ff) bg_vkb2_func_pane_cp01_ParamLimits

0x7706,	// (0x000549ff) bg_vkb2_func_pane_cp01

0xe50d,	// (0x0005b806) cel_fep_hwr_func_pane_g1_ParamLimits

0xe50d,	// (0x0005b806) cel_fep_hwr_func_pane_g1

0x7706,	// (0x000549ff) bg_vkb2_func_pane_cp02_ParamLimits

0x7706,	// (0x000549ff) bg_vkb2_func_pane_cp02

0xe50d,	// (0x0005b806) cell_hwr_side_button_pane_g1_ParamLimits

0xe50d,	// (0x0005b806) cell_hwr_side_button_pane_g1

0x9942,	// (0x00056c3b) status_pane_g4_ParamLimits

0x9942,	// (0x00056c3b) status_pane_g4

0x995c,	// (0x00056c55) status_pane_t1

0xbe7e,	// (0x00059177) form2_midp_gauge_slider_cont_pane

0xbe86,	// (0x0005917f) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbe98,	// (0x00059191) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbeaa,	// (0x000591a3) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb02,	// (0x0005cdfb) form2_midp_gauge_slider_pane_t_ParamLimits

0xbebc,	// (0x000591b5) form2_midp_slider_pane_ParamLimits

0x6be9,	// (0x00053ee2) aid_size_cell_func_vkb2_ParamLimits

0x6be9,	// (0x00053ee2) aid_size_cell_func_vkb2

0xe4aa,	// (0x0005b7a3) slider_pane_g4_ParamLimits

0xe4aa,	// (0x0005b7a3) slider_pane_g4

0x72ef,	// (0x000545e8) form2_midp_gauge_slider_pane_t2_cp01

0x72fd,	// (0x000545f6) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x72fd,	// (0x000545f6) form2_midp_gauge_slider_pane_t3_cp01

0x731a,	// (0x00054613) form2_midp_slider_pane_cp01

0x25af,	// (0x0004f8a8) navi_smil_pane

0xe546,	// (0x0005b83f) navi_smil_pane_g1

0xe54e,	// (0x0005b847) navi_smil_pane_t1

0xe51b,	// (0x0005b814) form2_midp_slider_pane_g1

0xe524,	// (0x0005b81d) form2_midp_slider_pane_g2

0xe52c,	// (0x0005b825) form2_midp_slider_pane_g3

0xe51b,	// (0x0005b814) form2_midp_slider_pane_g4

0xe534,	// (0x0005b82d) form2_midp_slider_pane_g5

0x0004,

0xfe38,	// (0x0005d131) form2_midp_slider_pane_g

0x72df,	// (0x000545d8) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x72df,	// (0x000545d8) vkb2_area_bottom_space_btn_pane_g4

0x9759,	// (0x00056a52) lc0_navi_pane_ParamLimits

0x9759,	// (0x00056a52) lc0_navi_pane

0x97d5,	// (0x00056ace) lc0_stat_indi_pane_ParamLimits

0x97d5,	// (0x00056ace) lc0_stat_indi_pane

0x97ec,	// (0x00056ae5) ls0_title_pane_ParamLimits

0x97ec,	// (0x00056ae5) ls0_title_pane

0x7daf,	// (0x000550a8) bg_popup_sub_pane_cp14_ParamLimits

0xd9ac,	// (0x0005aca5) list_uniindi_pane_ParamLimits

0xd9b8,	// (0x0005acb1) uniindi_top_pane_ParamLimits

0xda57,	// (0x0005ad50) list_single_uniindi_pane_g1_ParamLimits

0xda6a,	// (0x0005ad63) list_single_uniindi_pane_t1_ParamLimits

0x7323,	// (0x0005461c) lc0_stat_clock_pane_ParamLimits

0x7323,	// (0x0005461c) lc0_stat_clock_pane

0xe55c,	// (0x0005b855) lc0_stat_indi_pane_g1_ParamLimits

0xe55c,	// (0x0005b855) lc0_stat_indi_pane_g1

0xe569,	// (0x0005b862) lc0_stat_indi_pane_g2_ParamLimits

0xe569,	// (0x0005b862) lc0_stat_indi_pane_g2

0x0001,

0xfe43,	// (0x0005d13c) lc0_stat_indi_pane_g_ParamLimits

0xfe43,	// (0x0005d13c) lc0_stat_indi_pane_g

0x7330,	// (0x00054629) lc0_uni_indicator_pane_ParamLimits

0x7330,	// (0x00054629) lc0_uni_indicator_pane

0xe576,	// (0x0005b86f) ls0_title_pane_g1_ParamLimits

0xe576,	// (0x0005b86f) ls0_title_pane_g1

0xe58a,	// (0x0005b883) ls0_title_pane_t1_ParamLimits

0xe58a,	// (0x0005b883) ls0_title_pane_t1

0x733d,	// (0x00054636) lc0_uni_indicator_pane_g1_ParamLimits

0x733d,	// (0x00054636) lc0_uni_indicator_pane_g1

0xe5c0,	// (0x0005b8b9) lc0_stat_clock_pane_t1

0x25af,	// (0x0004f8a8) main_ai5_pane

0xe5ce,	// (0x0005b8c7) ai5_sk_pane_ParamLimits

0xe5ce,	// (0x0005b8c7) ai5_sk_pane

0xe5db,	// (0x0005b8d4) cell_ai5_widget_pane_ParamLimits

0xe5db,	// (0x0005b8d4) cell_ai5_widget_pane

0xe651,	// (0x0005b94a) aid_size_cell_widget_grid

0xe665,	// (0x0005b95e) bg_ai5_widget_pane_ParamLimits

0xe665,	// (0x0005b95e) bg_ai5_widget_pane

0xe68d,	// (0x0005b986) cell_ai5_widget_pane_g2

0xe69d,	// (0x0005b996) cell_ai5_widget_pane_g3

0xe6bc,	// (0x0005b9b5) cell_ai5_widget_pane_g4

0xe6c8,	// (0x0005b9c1) cell_ai5_widget_pane_g5

0xe6d4,	// (0x0005b9cd) cell_ai5_widget_pane_g6

0xe6e2,	// (0x0005b9db) cell_ai5_widget_pane_g7

0xe72a,	// (0x0005ba23) cell_ai5_widget_pane_t1_ParamLimits

0xe72a,	// (0x0005ba23) cell_ai5_widget_pane_t1

0xe747,	// (0x0005ba40) cell_ai5_widget_pane_t2_ParamLimits

0xe747,	// (0x0005ba40) cell_ai5_widget_pane_t2

0xe75f,	// (0x0005ba58) cell_ai5_widget_pane_t3_ParamLimits

0xe75f,	// (0x0005ba58) cell_ai5_widget_pane_t3

0xe777,	// (0x0005ba70) cell_ai5_widget_pane_t4_ParamLimits

0xe777,	// (0x0005ba70) cell_ai5_widget_pane_t4

0xe791,	// (0x0005ba8a) cell_ai5_widget_pane_t5_ParamLimits

0xe791,	// (0x0005ba8a) cell_ai5_widget_pane_t5

0xe7b0,	// (0x0005baa9) cell_ai5_widget_pane_t6_ParamLimits

0xe7b0,	// (0x0005baa9) cell_ai5_widget_pane_t6

0xe7c2,	// (0x0005babb) cell_ai5_widget_pane_t7_ParamLimits

0xe7c2,	// (0x0005babb) cell_ai5_widget_pane_t7

0xe7db,	// (0x0005bad4) cell_ai5_widget_pane_t8_ParamLimits

0xe7db,	// (0x0005bad4) cell_ai5_widget_pane_t8

0x0009,

0xfe5d,	// (0x0005d156) cell_ai5_widget_pane_t_ParamLimits

0xfe5d,	// (0x0005d156) cell_ai5_widget_pane_t

0xe827,	// (0x0005bb20) grid_ai5_widget_pane

0x7daf,	// (0x000550a8) highlight_cell_ai5_widget_pane_ParamLimits

0x7daf,	// (0x000550a8) highlight_cell_ai5_widget_pane

0xe83e,	// (0x0005bb37) ai5_sk_left_pane

0xe848,	// (0x0005bb41) ai5_sk_middle_pane

0xe852,	// (0x0005bb4b) ai5_sk_right_pane

0xe85c,	// (0x0005bb55) bg_ai5_widget_pane_g1_ParamLimits

0xe85c,	// (0x0005bb55) bg_ai5_widget_pane_g1

0xe868,	// (0x0005bb61) bg_ai5_widget_pane_g2_ParamLimits

0xe868,	// (0x0005bb61) bg_ai5_widget_pane_g2

0xe874,	// (0x0005bb6d) bg_ai5_widget_pane_g3_ParamLimits

0xe874,	// (0x0005bb6d) bg_ai5_widget_pane_g3

0xe880,	// (0x0005bb79) bg_ai5_widget_pane_g4_ParamLimits

0xe880,	// (0x0005bb79) bg_ai5_widget_pane_g4

0xe88c,	// (0x0005bb85) bg_ai5_widget_pane_g5_ParamLimits

0xe88c,	// (0x0005bb85) bg_ai5_widget_pane_g5

0xe898,	// (0x0005bb91) bg_ai5_widget_pane_g6_ParamLimits

0xe898,	// (0x0005bb91) bg_ai5_widget_pane_g6

0xe8a4,	// (0x0005bb9d) bg_ai5_widget_pane_g7_ParamLimits

0xe8a4,	// (0x0005bb9d) bg_ai5_widget_pane_g7

0xe8b0,	// (0x0005bba9) bg_ai5_widget_pane_g8_ParamLimits

0xe8b0,	// (0x0005bba9) bg_ai5_widget_pane_g8

0xe8bc,	// (0x0005bbb5) bg_ai5_widget_pane_g9_ParamLimits

0xe8bc,	// (0x0005bbb5) bg_ai5_widget_pane_g9

0x0008,

0xfe72,	// (0x0005d16b) bg_ai5_widget_pane_g_ParamLimits

0xfe72,	// (0x0005d16b) bg_ai5_widget_pane_g

0xe8e3,	// (0x0005bbdc) cell_shortcut_ai5_widget_pane_ParamLimits

0xe8e3,	// (0x0005bbdc) cell_shortcut_ai5_widget_pane

0x7548,	// (0x00054841) bg_cell_shortcut_ai5_widget_pane

0xe8f5,	// (0x0005bbee) cell_grid_ai5_widget_pane_g1

0xe8fe,	// (0x0005bbf7) highlight_cell_shortcut_ai5_widget_pane

0x9ac9,	// (0x00056dc2) ai5_sk_left_pane_g1

0xe906,	// (0x0005bbff) ai5_sk_left_pane_g2

0xe90e,	// (0x0005bc07) ai5_sk_left_pane_g3

0xe916,	// (0x0005bc0f) ai5_sk_left_pane_g4

0x0003,

0xfe85,	// (0x0005d17e) ai5_sk_left_pane_g

0xe91e,	// (0x0005bc17) ai5_sk_left_pane_t1

0x9ad1,	// (0x00056dca) ai5_sk_right_pane_g1

0xe92c,	// (0x0005bc25) ai5_sk_right_pane_g2

0xe934,	// (0x0005bc2d) ai5_sk_right_pane_g3

0xe93c,	// (0x0005bc35) ai5_sk_right_pane_g4

0x0003,

0xfe8e,	// (0x0005d187) ai5_sk_right_pane_g

0xe944,	// (0x0005bc3d) ai5_sk_right_pane_t1

0x9ad1,	// (0x00056dca) ai5_sk_middle_pane_g1

0x9ac9,	// (0x00056dc2) ai5_sk_middle_pane_g2

0x9ae9,	// (0x00056de2) ai5_sk_middle_pane_g3

0xe934,	// (0x0005bc2d) ai5_sk_middle_pane_g4

0xe90e,	// (0x0005bc07) ai5_sk_middle_pane_g5

0xe952,	// (0x0005bc4b) ai5_sk_middle_pane_g6

0xe95a,	// (0x0005bc53) ai5_sk_middle_pane_g7

0x0006,

0xfe97,	// (0x0005d190) ai5_sk_middle_pane_g

0x95db,	// (0x000568d4) aid_touch_area_size_lc0_ParamLimits

0x95db,	// (0x000568d4) aid_touch_area_size_lc0

0x66dc,	// (0x000539d5) cell_hwr_candidate_pane_t1_ParamLimits

0x95f9,	// (0x000568f2) aid_touch_navi_pane

0x98ec,	// (0x00056be5) status_dt_navi_pane_ParamLimits

0x98ec,	// (0x00056be5) status_dt_navi_pane

0x98f9,	// (0x00056bf2) status_dt_sta_pane_ParamLimits

0x98f9,	// (0x00056bf2) status_dt_sta_pane

0xe962,	// (0x0005bc5b) dt_sta_controll_pane

0xe96f,	// (0x0005bc68) dt_sta_indi_pane

0xe980,	// (0x0005bc79) dt_sta_title_pane

0x7706,	// (0x000549ff) bg_dt_sta_indi_pane_ParamLimits

0x7706,	// (0x000549ff) bg_dt_sta_indi_pane

0xe993,	// (0x0005bc8c) dt_sta_battery_pane

0xe99b,	// (0x0005bc94) dt_sta_indi_pane_g1

0xe9a4,	// (0x0005bc9d) dt_sta_indi_pane_g2

0xe9ad,	// (0x0005bca6) dt_sta_indi_pane_g3

0x0002,

0xfea6,	// (0x0005d19f) dt_sta_indi_pane_g

0xe9b6,	// (0x0005bcaf) dt_sta_signal_pane

0x7daf,	// (0x000550a8) bg_dt_sta_title_pane_ParamLimits

0x7daf,	// (0x000550a8) bg_dt_sta_title_pane

0xe9bf,	// (0x0005bcb8) dt_sta_title_pane_g1

0xe9c7,	// (0x0005bcc0) dt_sta_title_pane_t1_ParamLimits

0xe9c7,	// (0x0005bcc0) dt_sta_title_pane_t1

0x25af,	// (0x0004f8a8) bg_dt_sta_control_pane

0xe9dc,	// (0x0005bcd5) dt_sta_controll_pane_g1

0xe9e5,	// (0x0005bcde) bg_dt_sta_title_pane_g1

0xe9ee,	// (0x0005bce7) bg_dt_sta_title_pane_g2

0xe9f7,	// (0x0005bcf0) bg_dt_sta_title_pane_g3

0x0002,

0xfead,	// (0x0005d1a6) bg_dt_sta_title_pane_g

0xc084,	// (0x0005937d) bg_dt_sta_indi_pane_g1

0xea00,	// (0x0005bcf9) dt_sta_signal_pane_g1

0xea08,	// (0x0005bd01) dt_sta_signal_pane_g2

0x0001,

0xfeb4,	// (0x0005d1ad) dt_sta_signal_pane_g

0xea10,	// (0x0005bd09) dt_sta_battery_pane_g1

0xea19,	// (0x0005bd12) dt_sta_battery_pane_t1

0xc084,	// (0x0005937d) bg_dt_sta_control_pane_g1

0x8704,	// (0x000559fd) fep_china_uni_eep_pane

0x870c,	// (0x00055a05) fep_china_uni_entry_pane_ParamLimits

0x871c,	// (0x00055a15) popup_fep_china_uni_window_g1_ParamLimits

0x872c,	// (0x00055a25) popup_fep_china_uni_window_g2_ParamLimits

0x872c,	// (0x00055a25) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x0005ca33) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x0005ca33) popup_fep_china_uni_window_g

0xea28,	// (0x0005bd21) fep_china_uni_eep_pane_g1

0xea30,	// (0x0005bd29) fep_china_uni_eep_pane_t1

0xe53d,	// (0x0005b836) aid_touch_area_size_smil_player

0x9751,	// (0x00056a4a) lc0_clock_pane

0x9950,	// (0x00056c49) status_pane_g5_ParamLimits

0x9950,	// (0x00056c49) status_pane_g5

0x913f,	// (0x00056438) popup_keymap_window

0x990e,	// (0x00056c07) status_icon_pane

0xe69d,	// (0x0005b996) cell_ai5_widget_pane_g3_ParamLimits

0xe6bc,	// (0x0005b9b5) cell_ai5_widget_pane_g4_ParamLimits

0xe6c8,	// (0x0005b9c1) cell_ai5_widget_pane_g5_ParamLimits

0xe6ee,	// (0x0005b9e7) cell_ai5_widget_pane_g8_ParamLimits

0xe6ee,	// (0x0005b9e7) cell_ai5_widget_pane_g8

0xe702,	// (0x0005b9fb) cell_ai5_widget_pane_g9_ParamLimits

0xe702,	// (0x0005b9fb) cell_ai5_widget_pane_g9

0xe716,	// (0x0005ba0f) cell_ai5_widget_pane_g10_ParamLimits

0xe716,	// (0x0005ba0f) cell_ai5_widget_pane_g10

0xea3f,	// (0x0005bd38) status_icon_pane_g1

0x25af,	// (0x0004f8a8) bg_popup_sub_pane_cp13

0xea47,	// (0x0005bd40) popup_keymap_window_t1

0x8ee1,	// (0x000561da) control_pane_g6_ParamLimits

0x8ee1,	// (0x000561da) control_pane_g6

0x8eee,	// (0x000561e7) control_pane_g7_ParamLimits

0x8eee,	// (0x000561e7) control_pane_g7

0x8efb,	// (0x000561f4) control_pane_g8_ParamLimits

0x8efb,	// (0x000561f4) control_pane_g8

0xe962,	// (0x0005bc5b) dt_sta_controll_pane_ParamLimits

0xe96f,	// (0x0005bc68) dt_sta_indi_pane_ParamLimits

0xe980,	// (0x0005bc79) dt_sta_title_pane_ParamLimits

0x7c3b,	// (0x00054f34) aid_size_touch_scroll_bar_cale

0x4d41,	// (0x0005203a) popup_discreet_window_ParamLimits

0x4d41,	// (0x0005203a) popup_discreet_window

0x4dcf,	// (0x000520c8) popup_sk_window

0xa13b,	// (0x00057434) bg_popup_sub_pane_cp28_ParamLimits

0xa13b,	// (0x00057434) bg_popup_sub_pane_cp28

0xea55,	// (0x0005bd4e) popup_discreet_window_g1_ParamLimits

0xea55,	// (0x0005bd4e) popup_discreet_window_g1

0xea75,	// (0x0005bd6e) popup_discreet_window_t1_ParamLimits

0xea75,	// (0x0005bd6e) popup_discreet_window_t1

0xea93,	// (0x0005bd8c) popup_discreet_window_t2_ParamLimits

0xea93,	// (0x0005bd8c) popup_discreet_window_t2

0x0002,

0xfeb9,	// (0x0005d1b2) popup_discreet_window_t_ParamLimits

0xfeb9,	// (0x0005d1b2) popup_discreet_window_t

0x7350,	// (0x00054649) popup_sk_window_g1

0x735a,	// (0x00054653) popup_sk_window_g2

0x0001,

0xfec0,	// (0x0005d1b9) popup_sk_window_g

0xeae5,	// (0x0005bdde) popup_sk_window_t1

0xeaf3,	// (0x0005bdec) popup_sk_window_t1_copy1

0xe68d,	// (0x0005b986) cell_ai5_widget_pane_g2_ParamLimits

0xe7ed,	// (0x0005bae6) cell_ai5_widget_pane_t9_ParamLimits

0xe7ed,	// (0x0005bae6) cell_ai5_widget_pane_t9

0x25af,	// (0x0004f8a8) main_fep_fshwr2_pane

0xeb01,	// (0x0005bdfa) aid_fshwr2_btn_pane

0xeb09,	// (0x0005be02) aid_fshwr2_syb_pane

0xeb11,	// (0x0005be0a) aid_fshwr2_txt_pane

0xeb19,	// (0x0005be12) fshwr2_func_candi_pane

0xeb23,	// (0x0005be1c) fshwr2_hwr_syb_pane

0xeb2d,	// (0x0005be26) fshwr2_icf_pane

0x25af,	// (0x0004f8a8) fshwr2_icf_bg_pane

0xeb4f,	// (0x0005be48) fshwr2_icf_pane_t1_ParamLimits

0xeb4f,	// (0x0005be48) fshwr2_icf_pane_t1

0xc084,	// (0x0005937d) fshwr2_func_candi_pane_g1

0xeb66,	// (0x0005be5f) fshwr2_func_candi_row_pane_ParamLimits

0xeb66,	// (0x0005be5f) fshwr2_func_candi_row_pane

0xeb77,	// (0x0005be70) cell_fshwr2_syb_pane_ParamLimits

0xeb77,	// (0x0005be70) cell_fshwr2_syb_pane

0xc30e,	// (0x00059607) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc30e,	// (0x00059607) fshwr2_hwr_syb_pane_g1

0x25af,	// (0x0004f8a8) bg_popup_call_pane_cp01

0xeb91,	// (0x0005be8a) fshwr2_func_candi_cell_pane_ParamLimits

0xeb91,	// (0x0005be8a) fshwr2_func_candi_cell_pane

0xebc3,	// (0x0005bebc) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xebc3,	// (0x0005bebc) fshwr2_func_candi_cell_bg_pane

0xebdd,	// (0x0005bed6) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xebdd,	// (0x0005bed6) fshwr2_func_candi_cell_pane_g1

0xebfd,	// (0x0005bef6) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xebfd,	// (0x0005bef6) fshwr2_func_candi_cell_pane_t1

0x25af,	// (0x0004f8a8) bg_button_pane_cp08

0x8c06,	// (0x00055eff) cell_fshwr2_syb_bg_pane

0xec10,	// (0x0005bf09) cell_fshwr2_syb_bg_pane_g1

0xec18,	// (0x0005bf11) cell_fshwr2_syb_bg_pane_t1

0x7daf,	// (0x000550a8) main_tmo_pane

0xac65,	// (0x00057f5e) uni_indicator_pane_g1_ParamLimits

0xac7a,	// (0x00057f73) uni_indicator_pane_g2_ParamLimits

0xac90,	// (0x00057f89) uni_indicator_pane_g3_ParamLimits

0xaca6,	// (0x00057f9f) uni_indicator_pane_g4_ParamLimits

0xaca6,	// (0x00057f9f) uni_indicator_pane_g4

0xacba,	// (0x00057fb3) uni_indicator_pane_g5_ParamLimits

0xacba,	// (0x00057fb3) uni_indicator_pane_g5

0xacce,	// (0x00057fc7) uni_indicator_pane_g6_ParamLimits

0xacce,	// (0x00057fc7) uni_indicator_pane_g6

0xf937,	// (0x0005cc30) uni_indicator_pane_g_ParamLimits

0xd582,	// (0x0005a87b) popup_tmo_note_window_ParamLimits

0xd582,	// (0x0005a87b) popup_tmo_note_window

0x25af,	// (0x0004f8a8) fshwr2_bg_pane

0xebee,	// (0x0005bee7) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xebee,	// (0x0005bee7) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec5,	// (0x0005d1be) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec5,	// (0x0005d1be) fshwr2_func_candi_cell_pane_g

0xc084,	// (0x0005937d) bg_popup_window_pane_cp01

0xec27,	// (0x0005bf20) bg_popup_window_pane_g1_cp01

0xec30,	// (0x0005bf29) bg_popup_window_pane_cp22_ParamLimits

0xec30,	// (0x0005bf29) bg_popup_window_pane_cp22

0xec3e,	// (0x0005bf37) listscroll_tmo_link_pane_ParamLimits

0xec3e,	// (0x0005bf37) listscroll_tmo_link_pane

0xec7e,	// (0x0005bf77) popup_tmo_note_window_g1_ParamLimits

0xec7e,	// (0x0005bf77) popup_tmo_note_window_g1

0xec8b,	// (0x0005bf84) tmo_note_info_pane_ParamLimits

0xec8b,	// (0x0005bf84) tmo_note_info_pane

0xeca5,	// (0x0005bf9e) list_tmo_note_info_pane_g1_ParamLimits

0xeca5,	// (0x0005bf9e) list_tmo_note_info_pane_g1

0xecbc,	// (0x0005bfb5) list_tmo_note_info_pane_g2_ParamLimits

0xecbc,	// (0x0005bfb5) list_tmo_note_info_pane_g2

0x0001,

0xfeca,	// (0x0005d1c3) list_tmo_note_info_pane_g_ParamLimits

0xfeca,	// (0x0005d1c3) list_tmo_note_info_pane_g

0xecd8,	// (0x0005bfd1) list_tmo_note_info_text_pane_ParamLimits

0xecd8,	// (0x0005bfd1) list_tmo_note_info_text_pane

0xed5d,	// (0x0005c056) list_tmo_link_pane

0xed6a,	// (0x0005c063) scroll_pane_cp20

0xed77,	// (0x0005c070) list_single_tmo_link_pane_ParamLimits

0xed77,	// (0x0005c070) list_single_tmo_link_pane

0xed87,	// (0x0005c080) list_single_tmo_link_pane_t1

0xed95,	// (0x0005c08e) list_tmo_note_info_text_pane_t1_ParamLimits

0xed95,	// (0x0005c08e) list_tmo_note_info_text_pane_t1

0x7e7e,	// (0x00055177) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7e7e,	// (0x00055177) aid_size_touch_scroll_bar_cp01

0x5560,	// (0x00052859) aid_size_touch_slider_marker

0x4db7,	// (0x000520b0) popup_settings_window_ParamLimits

0x4db7,	// (0x000520b0) popup_settings_window

0x5cb3,	// (0x00052fac) popup_candi_list_indi_window

0x95f9,	// (0x000568f2) aid_touch_navi_pane_ParamLimits

0x6b20,	// (0x00053e19) rs_clock_indi_pane

0x6b29,	// (0x00053e22) sctrl_sk_bottom_pane_ParamLimits

0x6b3a,	// (0x00053e33) sctrl_sk_top_pane_ParamLimits

0x6c3b,	// (0x00053f34) popup_fep_tooltip_window

0xe651,	// (0x0005b94a) aid_size_cell_widget_grid_ParamLimits

0xe681,	// (0x0005b97a) cell_ai5_widget_pane_g1_ParamLimits

0xe681,	// (0x0005b97a) cell_ai5_widget_pane_g1

0xe6d4,	// (0x0005b9cd) cell_ai5_widget_pane_g6_ParamLimits

0xe6e2,	// (0x0005b9db) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe48,	// (0x0005d141) cell_ai5_widget_pane_g_ParamLimits

0xfe48,	// (0x0005d141) cell_ai5_widget_pane_g

0xe811,	// (0x0005bb0a) cell_ai5_widget_pane_t10_ParamLimits

0xe811,	// (0x0005bb0a) cell_ai5_widget_pane_t10

0xe827,	// (0x0005bb20) grid_ai5_widget_pane_ParamLimits

0xe8c8,	// (0x0005bbc1) cell_contacts_ai5_widget_pane_ParamLimits

0xe8c8,	// (0x0005bbc1) cell_contacts_ai5_widget_pane

0xeaa8,	// (0x0005bda1) popup_discreet_window_t3_ParamLimits

0xeaa8,	// (0x0005bda1) popup_discreet_window_t3

0xeb37,	// (0x0005be30) popup_fshwr2_char_preview_window_ParamLimits

0xeb37,	// (0x0005be30) popup_fshwr2_char_preview_window

0xecf6,	// (0x0005bfef) tmo_note_info_pane_t1

0xed0b,	// (0x0005c004) tmo_note_info_pane_t2

0xed24,	// (0x0005c01d) tmo_note_info_pane_t3

0xed39,	// (0x0005c032) tmo_note_info_pane_t4

0xed4b,	// (0x0005c044) tmo_note_info_pane_t5

0x0004,

0xfecf,	// (0x0005d1c8) tmo_note_info_pane_t

0xed5d,	// (0x0005c056) list_tmo_link_pane_ParamLimits

0xed6a,	// (0x0005c063) scroll_pane_cp20_ParamLimits

0x25af,	// (0x0004f8a8) bg_popup_fep_char_preview_window_cp01

0xedae,	// (0x0005c0a7) popup_fshwr2_char_preview_window_t1

0xedbc,	// (0x0005c0b5) popup_candi_list_indi_window_g1

0xedc5,	// (0x0005c0be) bg_cell_contacts_ai5_widget_pane

0xedd1,	// (0x0005c0ca) cell_contacts_ai5_widget_pane_g1

0xede5,	// (0x0005c0de) cell_contacts_ai5_widget_pane_g2

0xedf4,	// (0x0005c0ed) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeda,	// (0x0005d1d3) cell_contacts_ai5_widget_pane_g

0xee07,	// (0x0005c100) cell_contacts_ai5_widget_pane_t1

0x7daf,	// (0x000550a8) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee81,	// (0x0005c17a) settings_container_pane

0x8c06,	// (0x00055eff) listscroll_set_pane_copy1

0xb83f,	// (0x00058b38) scroll_pane_cp121_copy1

0xee8d,	// (0x0005c186) set_content_pane_copy1

0xee95,	// (0x0005c18e) aid_height_set_list_copy1_ParamLimits

0xee95,	// (0x0005c18e) aid_height_set_list_copy1

0xaece,	// (0x000581c7) aid_size_parent_copy1_ParamLimits

0xaece,	// (0x000581c7) aid_size_parent_copy1

0xeea1,	// (0x0005c19a) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeea1,	// (0x0005c19a) button_value_adjust_pane_cp6_copy1

0x8f84,	// (0x0005627d) list_highlight_pane_cp2_copy1_ParamLimits

0x8f84,	// (0x0005627d) list_highlight_pane_cp2_copy1

0xeeb5,	// (0x0005c1ae) list_set_pane_copy1_ParamLimits

0xeeb5,	// (0x0005c1ae) list_set_pane_copy1

0xee1c,	// (0x0005c115) main_pane_set_t1_copy1_ParamLimits

0xee1c,	// (0x0005c115) main_pane_set_t1_copy1

0xee56,	// (0x0005c14f) main_pane_set_t2_copy1_ParamLimits

0xee56,	// (0x0005c14f) main_pane_set_t2_copy1

0xef7c,	// (0x0005c275) main_pane_set_t3_copy1

0xef8a,	// (0x0005c283) main_pane_set_t4_copy1

0xee75,	// (0x0005c16e) set_content_pane_g1_copy1_ParamLimits

0xee75,	// (0x0005c16e) set_content_pane_g1_copy1

0xef98,	// (0x0005c291) setting_code_pane_copy1

0xefa2,	// (0x0005c29b) setting_slider_graphic_pane_copy1

0xefa2,	// (0x0005c29b) setting_slider_pane_copy1

0xefa2,	// (0x0005c29b) setting_text_pane_copy1

0xefac,	// (0x0005c2a5) setting_volume_pane_copy1

0xefb5,	// (0x0005c2ae) settings_code_pane_cp2_copy1

0xefbd,	// (0x0005c2b6) settings_code_pane_cp_copy1_ParamLimits

0xefbd,	// (0x0005c2b6) settings_code_pane_cp_copy1

0xefd1,	// (0x0005c2ca) volume_set_pane_copy1

0xefdd,	// (0x0005c2d6) volume_set_pane_g10_copy1

0xefe9,	// (0x0005c2e2) volume_set_pane_g1_copy1

0xeff3,	// (0x0005c2ec) volume_set_pane_g2_copy1

0xeffd,	// (0x0005c2f6) volume_set_pane_g3_copy1

0xf007,	// (0x0005c300) volume_set_pane_g4_copy1

0xf011,	// (0x0005c30a) volume_set_pane_g5_copy1

0xf01b,	// (0x0005c314) volume_set_pane_g6_copy1

0xf025,	// (0x0005c31e) volume_set_pane_g7_copy1

0xf02f,	// (0x0005c328) volume_set_pane_g8_copy1

0xf039,	// (0x0005c332) volume_set_pane_g9_copy1

0x747c,	// (0x00054775) bg_set_opt_pane_cp_copy1_ParamLimits

0x747c,	// (0x00054775) bg_set_opt_pane_cp_copy1

0xf043,	// (0x0005c33c) setting_slider_pane_t1_copy1_ParamLimits

0xf043,	// (0x0005c33c) setting_slider_pane_t1_copy1

0xf061,	// (0x0005c35a) setting_slider_pane_t2_copy1_ParamLimits

0xf061,	// (0x0005c35a) setting_slider_pane_t2_copy1

0xf07b,	// (0x0005c374) setting_slider_pane_t3_copy1_ParamLimits

0xf07b,	// (0x0005c374) setting_slider_pane_t3_copy1

0xf093,	// (0x0005c38c) slider_set_pane_copy1_ParamLimits

0xf093,	// (0x0005c38c) slider_set_pane_copy1

0x7e16,	// (0x0005510f) set_opt_bg_pane_g1_copy2

0x7e1e,	// (0x00055117) set_opt_bg_pane_g2_copy2

0xf0a9,	// (0x0005c3a2) set_opt_bg_pane_g3_copy2

0x7e2e,	// (0x00055127) set_opt_bg_pane_g4_copy2

0x7e36,	// (0x0005512f) set_opt_bg_pane_g5_copy2

0x7e3e,	// (0x00055137) set_opt_bg_pane_g6_copy2

0xf0b3,	// (0x0005c3ac) set_opt_bg_pane_g7_copy2

0xf0bd,	// (0x0005c3b6) set_opt_bg_pane_g8_copy2

0xf0c7,	// (0x0005c3c0) set_opt_bg_pane_g9_copy2

0x7364,	// (0x0005465d) aid_size_touch_slider_mark_copy1_ParamLimits

0x7364,	// (0x0005465d) aid_size_touch_slider_mark_copy1

0xf0d1,	// (0x0005c3ca) slider_set_pane_g1_copy1

0x7378,	// (0x00054671) slider_set_pane_g2_copy1

0x6089,	// (0x00053382) slider_set_pane_g3_copy1_ParamLimits

0x6089,	// (0x00053382) slider_set_pane_g3_copy1

0x609d,	// (0x00053396) slider_set_pane_g4_copy1_ParamLimits

0x609d,	// (0x00053396) slider_set_pane_g4_copy1

0x60b5,	// (0x000533ae) slider_set_pane_g5_copy1_ParamLimits

0x60b5,	// (0x000533ae) slider_set_pane_g5_copy1

0x6089,	// (0x00053382) slider_set_pane_g6_copy1_ParamLimits

0x6089,	// (0x00053382) slider_set_pane_g6_copy1

0x7380,	// (0x00054679) slider_set_pane_g7_copy1_ParamLimits

0x7380,	// (0x00054679) slider_set_pane_g7_copy1

0x25c3,	// (0x0004f8bc) bg_set_opt_pane_cp2_copy1

0xf0da,	// (0x0005c3d3) setting_slider_graphic_pane_g1_copy1

0xf0e3,	// (0x0005c3dc) setting_slider_graphic_pane_t1_copy1

0xf0f3,	// (0x0005c3ec) setting_slider_graphic_pane_t2_copy1

0xf103,	// (0x0005c3fc) slider_set_pane_cp_copy1

0xf113,	// (0x0005c40c) input_focus_pane_cp1_copy1

0xf11c,	// (0x0005c415) list_set_text_pane_copy1

0xf124,	// (0x0005c41d) setting_text_pane_g1_copy1

0x4089,	// (0x00051382) set_text_pane_t1_copy1

0xf113,	// (0x0005c40c) input_focus_pane_cp2_copy1

0xf124,	// (0x0005c41d) setting_code_pane_g1_copy1

0xf12d,	// (0x0005c426) setting_code_pane_t1_copy1

0xf13b,	// (0x0005c434) list_set_graphic_pane_copy1

0x25c3,	// (0x0004f8bc) bg_set_opt_pane_cp4_copy1

0x8900,	// (0x00055bf9) list_set_graphic_pane_g1_copy1_ParamLimits

0x8900,	// (0x00055bf9) list_set_graphic_pane_g1_copy1

0xf14d,	// (0x0005c446) list_set_graphic_pane_g2_copy1

0x8918,	// (0x00055c11) list_set_graphic_pane_t1_copy1_ParamLimits

0x8918,	// (0x00055c11) list_set_graphic_pane_t1_copy1

0xc084,	// (0x0005937d) rs_clock_indi_pane_g1

0xf155,	// (0x0005c44e) rs_clock_indi_pane_t1

0xf163,	// (0x0005c45c) rs_indi_pane

0xf16b,	// (0x0005c464) rs_indi_pane_g1

0xf174,	// (0x0005c46d) rs_indi_pane_g2

0xf17d,	// (0x0005c476) rs_indi_pane_g3

0x0002,

0xfee1,	// (0x0005d1da) rs_indi_pane_g

0x8c06,	// (0x00055eff) bg_popup_preview_window_pane_cp03

0xf186,	// (0x0005c47f) popup_fep_tooltip_window_t1

0xcd2a,	// (0x0005a023) popup_note2_window_g2_ParamLimits

0xcd2a,	// (0x0005a023) popup_note2_window_g2

0x0001,

0xfc7a,	// (0x0005cf73) popup_note2_window_g_ParamLimits

0xfc7a,	// (0x0005cf73) popup_note2_window_g

0xd232,	// (0x0005a52b) bg_popup_sub_pane_cp11_ParamLimits

0xd23f,	// (0x0005a538) cell_ai3_links_pane_g1_ParamLimits

0xd256,	// (0x0005a54f) cell_ai3_links_pane_t1

0x4089,	// (0x00051382) set_text_pane_t1_copy1_ParamLimits

0x8b13,	// (0x00055e0c) cell_graphic_popup_pane_cp2_ParamLimits

0x8b13,	// (0x00055e0c) cell_graphic_popup_pane_cp2

0xf194,	// (0x0005c48d) cell_graphic_popup_pane_g1_cp2

0x7a4e,	// (0x00054d47) cell_graphic_popup_pane_g2_cp2

0xf19c,	// (0x0005c495) cell_graphic_popup_pane_g3_cp2

0xf1a4,	// (0x0005c49d) cell_graphic_popup_pane_t2_cp2

0x7a5f,	// (0x00054d58) grid_highlight_pane_cp3_cp2

0x8330,	// (0x00055629) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x7daf,	// (0x000550a8) main_tmo_pane_ParamLimits

0xd576,	// (0x0005a86f) popup_tmo_big_image_note_window

0xe671,	// (0x0005b96a) cell_ai5_widget_list_pane

0xe679,	// (0x0005b972) cell_ai5_widget_lrg_icon_pane

0xecf6,	// (0x0005bfef) tmo_note_info_pane_t1_ParamLimits

0xed0b,	// (0x0005c004) tmo_note_info_pane_t2_ParamLimits

0xed24,	// (0x0005c01d) tmo_note_info_pane_t3_ParamLimits

0xed39,	// (0x0005c032) tmo_note_info_pane_t4_ParamLimits

0xed4b,	// (0x0005c044) tmo_note_info_pane_t5_ParamLimits

0xfecf,	// (0x0005d1c8) tmo_note_info_pane_t_ParamLimits

0xee81,	// (0x0005c17a) settings_container_pane_ParamLimits

0xf10b,	// (0x0005c404) indicator_popup_pane_cp5

0xf10b,	// (0x0005c404) indicator_popup_pane_cp6

0xf13b,	// (0x0005c434) list_set_graphic_pane_copy1_ParamLimits

0x25af,	// (0x0004f8a8) bg_popup_window_pane_cp23

0xf1b2,	// (0x0005c4ab) popup_tmo_big_image_note_window_g1

0xf1be,	// (0x0005c4b7) popup_tmo_big_image_note_window_t1

0xf1ce,	// (0x0005c4c7) popup_tmo_big_image_note_window_t2

0xf1de,	// (0x0005c4d7) popup_tmo_big_image_note_window_t3

0x0002,

0xfee8,	// (0x0005d1e1) popup_tmo_big_image_note_window_t

0xf1ee,	// (0x0005c4e7) cell_ai5_widget_lrg_icon_pane_g1

0xf1f6,	// (0x0005c4ef) cell_ai5_widget_lrg_icon_pane_t1

0xf204,	// (0x0005c4fd) cell_ai5_widget_list_row_pane_ParamLimits

0xf204,	// (0x0005c4fd) cell_ai5_widget_list_row_pane

0xf21d,	// (0x0005c516) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf21d,	// (0x0005c516) cell_ai5_widget_list_row_pane_g1

0xf22a,	// (0x0005c523) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf22a,	// (0x0005c523) cell_ai5_widget_list_row_pane_t1

0xf242,	// (0x0005c53b) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf242,	// (0x0005c53b) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfeef,	// (0x0005d1e8) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeef,	// (0x0005d1e8) cell_ai5_widget_list_row_pane_t

0x4c64,	// (0x00051f5d) main_fep_vtchi_ss_pane

0xf254,	// (0x0005c54d) popup_fep_char_pre_window

0xf25c,	// (0x0005c555) popup_fep_ituss_window

0xf276,	// (0x0005c56f) popup_fep_vkbss_window

0xf296,	// (0x0005c58f) grid_vkbss_keypad_pane_ParamLimits

0xf296,	// (0x0005c58f) grid_vkbss_keypad_pane

0xf2a6,	// (0x0005c59f) ituss_keypad_pane

0xf2bc,	// (0x0005c5b5) aid_vkbss_key_offset_ParamLimits

0xf2bc,	// (0x0005c5b5) aid_vkbss_key_offset

0xf2c8,	// (0x0005c5c1) cell_vkbss_key_pane_ParamLimits

0xf2c8,	// (0x0005c5c1) cell_vkbss_key_pane

0xf2de,	// (0x0005c5d7) bg_cell_vkbss_key_g1_ParamLimits

0xf2de,	// (0x0005c5d7) bg_cell_vkbss_key_g1

0xf2ea,	// (0x0005c5e3) cell_vkbss_key_3p_pane_ParamLimits

0xf2ea,	// (0x0005c5e3) cell_vkbss_key_3p_pane

0xf304,	// (0x0005c5fd) cell_vkbss_key_g1_ParamLimits

0xf304,	// (0x0005c5fd) cell_vkbss_key_g1

0xf31e,	// (0x0005c617) cell_vkbss_key_t1_ParamLimits

0xf31e,	// (0x0005c617) cell_vkbss_key_t1

0xf349,	// (0x0005c642) cell_ituss_key_pane_ParamLimits

0xf349,	// (0x0005c642) cell_ituss_key_pane

0xf359,	// (0x0005c652) bg_cell_ituss_key_g1_ParamLimits

0xf359,	// (0x0005c652) bg_cell_ituss_key_g1

0xf365,	// (0x0005c65e) cell_ituss_key_pane_g1_ParamLimits

0xf365,	// (0x0005c65e) cell_ituss_key_pane_g1

0xf371,	// (0x0005c66a) cell_ituss_key_pane_g2_ParamLimits

0xf371,	// (0x0005c66a) cell_ituss_key_pane_g2

0x0001,

0xfef4,	// (0x0005d1ed) cell_ituss_key_pane_g_ParamLimits

0xfef4,	// (0x0005d1ed) cell_ituss_key_pane_g

0xf38a,	// (0x0005c683) cell_ituss_key_t1_ParamLimits

0xf38a,	// (0x0005c683) cell_ituss_key_t1

0xf3b8,	// (0x0005c6b1) cell_ituss_key_t2_ParamLimits

0xf3b8,	// (0x0005c6b1) cell_ituss_key_t2

0xf3e9,	// (0x0005c6e2) cell_ituss_key_t3_ParamLimits

0xf3e9,	// (0x0005c6e2) cell_ituss_key_t3

0xf41a,	// (0x0005c713) cell_ituss_key_t4_ParamLimits

0xf41a,	// (0x0005c713) cell_ituss_key_t4

0x0003,

0xfef9,	// (0x0005d1f2) cell_ituss_key_t_ParamLimits

0xfef9,	// (0x0005d1f2) cell_ituss_key_t

0xf44b,	// (0x0005c744) cell_vkbss_key_3p_pane_g1

0xf453,	// (0x0005c74c) cell_vkbss_key_3p_pane_g2

0xf45b,	// (0x0005c754) cell_vkbss_key_3p_pane_g3

0x0002,

0xff02,	// (0x0005d1fb) cell_vkbss_key_3p_pane_g

0x25af,	// (0x0004f8a8) bg_popup_fep_char_preview_window_cp02

0xf463,	// (0x0005c75c) popup_fep_char_pre_window_t1

0xe647,	// (0x0005b940) main_ai5_sk_pane

0xedc5,	// (0x0005c0be) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xedd1,	// (0x0005c0ca) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xede5,	// (0x0005c0de) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xedf4,	// (0x0005c0ed) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeda,	// (0x0005d1d3) cell_contacts_ai5_widget_pane_g_ParamLimits

0xee07,	// (0x0005c100) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x7daf,	// (0x000550a8) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf472,	// (0x0005c76b) main_ai5_sk_pane_g1

0x9f73,	// (0x0005726c) popup_query_code_window_g1

0xf26b,	// (0x0005c564) popup_fep_vkb_icf_pane

0xf281,	// (0x0005c57a) popup_fep_vtchi_icf_pane

0x7daf,	// (0x000550a8) bg_icf_pane

0xf48a,	// (0x0005c783) list_vkb_icf_pane

0x7daf,	// (0x000550a8) bg_icf_pane_cp01

0xf4a2,	// (0x0005c79b) vtchi_icf_list_pane

0xf4b2,	// (0x0005c7ab) list_vkb_icf_pane_t1_ParamLimits

0xf4b2,	// (0x0005c7ab) list_vkb_icf_pane_t1

0xf4c9,	// (0x0005c7c2) vtchi_icf_list_pane_t1_ParamLimits

0xf4c9,	// (0x0005c7c2) vtchi_icf_list_pane_t1

0xf25c,	// (0x0005c555) popup_fep_ituss_window_ParamLimits

0xf281,	// (0x0005c57a) popup_fep_vtchi_icf_pane_ParamLimits

0xf2a6,	// (0x0005c59f) ituss_keypad_pane_ParamLimits

0xf2b2,	// (0x0005c5ab) ituss_sks_pane

0x7daf,	// (0x000550a8) bg_icf_pane_ParamLimits

0xf47b,	// (0x0005c774) icf_edit_indi_pane_ParamLimits

0xf47b,	// (0x0005c774) icf_edit_indi_pane

0xf48a,	// (0x0005c783) list_vkb_icf_pane_ParamLimits

0x7daf,	// (0x000550a8) bg_icf_pane_cp01_ParamLimits

0xf496,	// (0x0005c78f) icf_edit_indi_pane_cp01_ParamLimits

0xf496,	// (0x0005c78f) icf_edit_indi_pane_cp01

0xf4aa,	// (0x0005c7a3) vtchi_query_pane

0xc30e,	// (0x00059607) icf_edit_indi_pane_g1_ParamLimits

0xc30e,	// (0x00059607) icf_edit_indi_pane_g1

0xf4e2,	// (0x0005c7db) icf_edit_indi_pane_g2_ParamLimits

0xf4e2,	// (0x0005c7db) icf_edit_indi_pane_g2

0x0001,

0xff09,	// (0x0005d202) icf_edit_indi_pane_g_ParamLimits

0xff09,	// (0x0005d202) icf_edit_indi_pane_g

0xf4ee,	// (0x0005c7e7) icf_edit_indi_pane_t1

0xf4fc,	// (0x0005c7f5) bg_input_focus_pane_cp042

0x7c32,	// (0x00054f2b) vtchi_button_pane

0xf505,	// (0x0005c7fe) vtchi_query_pane_t1

0xf513,	// (0x0005c80c) vtchi_query_pane_t2

0xf521,	// (0x0005c81a) vtchi_query_pane_t3

0x0002,

0xff0e,	// (0x0005d207) vtchi_query_pane_t

0x25af,	// (0x0004f8a8) bg_button_pane_cp13

0xf52f,	// (0x0005c828) vtchi_button_pane_g1

0xf537,	// (0x0005c830) ituss_sks_pane_g1

0xf542,	// (0x0005c83b) ituss_sks_pane_g2

0x0001,

0xff15,	// (0x0005d20e) ituss_sks_pane_g

0xf54a,	// (0x0005c843) ituss_sks_pane_t1

0xf558,	// (0x0005c851) ituss_sks_pane_t2

0x0001,

0xff1a,	// (0x0005d213) ituss_sks_pane_t

0xbba1,	// (0x00058e9a) indicator_nsta_pane_cp_g1

0xbbaa,	// (0x00058ea3) indicator_nsta_pane_cp_g2

0xbbb2,	// (0x00058eab) indicator_nsta_pane_cp_g3

0xbbba,	// (0x00058eb3) indicator_nsta_pane_cp_g4

0xbbc2,	// (0x00058ebb) indicator_nsta_pane_cp_g5

0xbbca,	// (0x00058ec3) indicator_nsta_pane_cp_g6

0x0005,

0xfab8,	// (0x0005cdb1) indicator_nsta_pane_cp_g

0xe258,	// (0x0005b551) cell_graphic2_pane_t2_ParamLimits

0xe258,	// (0x0005b551) cell_graphic2_pane_t2

0x0001,

0xfdd1,	// (0x0005d0ca) cell_graphic2_pane_t_ParamLimits

0xfdd1,	// (0x0005d0ca) cell_graphic2_pane_t

0xe285,	// (0x0005b57e) cell_graphic2_control_pane_t1

0x86b3,	// (0x000559ac) signal_pane_g3_ParamLimits

0x86b3,	// (0x000559ac) signal_pane_g3

0x86c5,	// (0x000559be) signal_pane_g4_ParamLimits

0x86c5,	// (0x000559be) signal_pane_g4
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Large
