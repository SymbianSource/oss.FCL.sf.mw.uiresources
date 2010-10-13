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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00047b3e };

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
0x9fb3,	// (0x00051af1) Screen

0x9fc7,	// (0x00051b05) application_window_ParamLimits

0x9fc7,	// (0x00051b05) application_window

0x9fe1,	// (0x00051b1f) screen_g1

0xa013,	// (0x00051b51) area_bottom_pane_ParamLimits

0xa013,	// (0x00051b51) area_bottom_pane

0xf2ce,	// (0x00056e0c) area_top_pane_ParamLimits

0xf2ce,	// (0x00056e0c) area_top_pane

0xf362,	// (0x00056ea0) main_pane_ParamLimits

0xf362,	// (0x00056ea0) main_pane

0xa0d1,	// (0x00051c0f) misc_graphics

0xc60d,	// (0x0005414b) battery_pane_ParamLimits

0xc60d,	// (0x0005414b) battery_pane

0x3a67,	// (0x0004b5a5) bg_status_flat_pane_g8

0x3a6f,	// (0x0004b5ad) bg_status_flat_pane_g9

0x2e65,	// (0x0004a9a3) context_pane_ParamLimits

0x2e65,	// (0x0004a9a3) context_pane

0xc784,	// (0x000542c2) navi_pane_ParamLimits

0xc784,	// (0x000542c2) navi_pane

0xc80e,	// (0x0005434c) signal_pane_ParamLimits

0xc80e,	// (0x0005434c) signal_pane

0x0008,

0xf854,	// (0x00057392) bg_status_flat_pane_g

0xc89e,	// (0x000543dc) status_pane_g1_ParamLimits

0xc89e,	// (0x000543dc) status_pane_g1

0xc8b4,	// (0x000543f2) status_pane_g2_ParamLimits

0xc8b4,	// (0x000543f2) status_pane_g2

0x309e,	// (0x0004abdc) status_pane_g3_ParamLimits

0x309e,	// (0x0004abdc) status_pane_g3

0x0004,

0xf780,	// (0x000572be) status_pane_g_ParamLimits

0xf780,	// (0x000572be) status_pane_g

0xc8c0,	// (0x000543fe) title_pane_ParamLimits

0xc8c0,	// (0x000543fe) title_pane

0xc929,	// (0x00054467) uni_indicator_pane_ParamLimits

0xc929,	// (0x00054467) uni_indicator_pane

0x2ccf,	// (0x0004a80d) bg_list_pane_ParamLimits

0x2ccf,	// (0x0004a80d) bg_list_pane

0xb422,	// (0x00052f60) find_pane

0x329b,	// (0x0004add9) listscroll_app_pane_ParamLimits

0x329b,	// (0x0004add9) listscroll_app_pane

0x2cfb,	// (0x0004a839) listscroll_form_pane

0xb42a,	// (0x00052f68) listscroll_gen_pane_ParamLimits

0xb42a,	// (0x00052f68) listscroll_gen_pane

0x092e,	// (0x0004846c) listscroll_set_pane

0x4604,	// (0x0004c142) main_idle_act_pane

0x29c8,	// (0x0004a506) main_idle_trad_pane

0x29c8,	// (0x0004a506) main_list_empty_pane

0x2cef,	// (0x0004a82d) main_midp_pane

0x2d15,	// (0x0004a853) main_pane_g1_ParamLimits

0x2d15,	// (0x0004a853) main_pane_g1

0xb43e,	// (0x00052f7c) popup_ai_message_window_ParamLimits

0xb43e,	// (0x00052f7c) popup_ai_message_window

0xb4de,	// (0x0005301c) popup_fep_china_uni_window_ParamLimits

0xb4de,	// (0x0005301c) popup_fep_china_uni_window

0x0a4a,	// (0x00048588) popup_fep_japan_candidate_window_ParamLimits

0x0a4a,	// (0x00048588) popup_fep_japan_candidate_window

0x0a74,	// (0x000485b2) popup_fep_japan_predictive_window_ParamLimits

0x0a74,	// (0x000485b2) popup_fep_japan_predictive_window

0xb53e,	// (0x0005307c) popup_find_window

0xb55b,	// (0x00053099) popup_grid_graphic_window_ParamLimits

0xb55b,	// (0x00053099) popup_grid_graphic_window

0x0ae7,	// (0x00048625) popup_large_graphic_colour_window

0xb605,	// (0x00053143) popup_menu_window_ParamLimits

0xb605,	// (0x00053143) popup_menu_window

0xb7f5,	// (0x00053333) popup_note_image_window

0xb7b5,	// (0x000532f3) popup_note_wait_window_ParamLimits

0xb7b5,	// (0x000532f3) popup_note_wait_window

0xb80d,	// (0x0005334b) popup_note_window_ParamLimits

0xb80d,	// (0x0005334b) popup_note_window

0xb8bb,	// (0x000533f9) popup_query_code_window_ParamLimits

0xb8bb,	// (0x000533f9) popup_query_code_window

0x0d53,	// (0x00048891) popup_query_data_code_window_ParamLimits

0x0d53,	// (0x00048891) popup_query_data_code_window

0xb8fb,	// (0x00053439) popup_query_data_window_ParamLimits

0xb8fb,	// (0x00053439) popup_query_data_window

0xb98f,	// (0x000534cd) popup_query_sat_info_window_ParamLimits

0xb98f,	// (0x000534cd) popup_query_sat_info_window

0xba3a,	// (0x00053578) popup_snote_single_graphic_window_ParamLimits

0xba3a,	// (0x00053578) popup_snote_single_graphic_window

0xba3a,	// (0x00053578) popup_snote_single_text_window_ParamLimits

0xba3a,	// (0x00053578) popup_snote_single_text_window

0x0dee,	// (0x0004892c) popup_sub_window_general

0x0f34,	// (0x00048a72) popup_window_general_ParamLimits

0x0f34,	// (0x00048a72) popup_window_general

0x2d23,	// (0x0004a861) power_save_pane

0x07c9,	// (0x00048307) control_pane_g1_ParamLimits

0x07c9,	// (0x00048307) control_pane_g1

0x07ec,	// (0x0004832a) control_pane_g2_ParamLimits

0x07ec,	// (0x0004832a) control_pane_g2

0x2c92,	// (0x0004a7d0) control_pane_g3_ParamLimits

0x2c92,	// (0x0004a7d0) control_pane_g3

0x0007,

0xf768,	// (0x000572a6) control_pane_g_ParamLimits

0xf768,	// (0x000572a6) control_pane_g

0xb339,	// (0x00052e77) control_pane_t1_ParamLimits

0xb339,	// (0x00052e77) control_pane_t1

0xb389,	// (0x00052ec7) control_pane_t2_ParamLimits

0xb389,	// (0x00052ec7) control_pane_t2

0x0002,

0xf779,	// (0x000572b7) control_pane_t_ParamLimits

0xf779,	// (0x000572b7) control_pane_t

0x2bb7,	// (0x0004a6f5) navi_navi_volume_pane_cp1

0x2bbf,	// (0x0004a6fd) status_small_icon_pane

0x2bc7,	// (0x0004a705) status_small_pane_g1_ParamLimits

0x2bc7,	// (0x0004a705) status_small_pane_g1

0x2bfb,	// (0x0004a739) status_small_pane_g2_ParamLimits

0x2bfb,	// (0x0004a739) status_small_pane_g2

0x2c07,	// (0x0004a745) status_small_pane_g3_ParamLimits

0x2c07,	// (0x0004a745) status_small_pane_g3

0xb2eb,	// (0x00052e29) status_small_pane_g4_ParamLimits

0xb2eb,	// (0x00052e29) status_small_pane_g4

0xb2f9,	// (0x00052e37) status_small_pane_g5_ParamLimits

0xb2f9,	// (0x00052e37) status_small_pane_g5

0x2c2d,	// (0x0004a76b) status_small_pane_g6_ParamLimits

0x2c2d,	// (0x0004a76b) status_small_pane_g6

0x0007,

0xf757,	// (0x00057295) status_small_pane_g_ParamLimits

0xf757,	// (0x00057295) status_small_pane_g

0x2c5c,	// (0x0004a79a) status_small_pane_t1

0xb30f,	// (0x00052e4d) status_small_wait_pane_ParamLimits

0xb30f,	// (0x00052e4d) status_small_wait_pane

0xb145,	// (0x00052c83) aid_levels_signal_ParamLimits

0xb145,	// (0x00052c83) aid_levels_signal

0xb15d,	// (0x00052c9b) signal_pane_g1_ParamLimits

0xb15d,	// (0x00052c9b) signal_pane_g1

0xb178,	// (0x00052cb6) signal_pane_g2_ParamLimits

0xb178,	// (0x00052cb6) signal_pane_g2

0x0003,

0xf6e8,	// (0x00057226) signal_pane_g_ParamLimits

0xf6e8,	// (0x00057226) signal_pane_g

0xe4d8,	// (0x00056016) context_pane_g1

0xa209,	// (0x00051d47) title_pane_g1

0xa258,	// (0x00051d96) title_pane_t1

0xa2e4,	// (0x00051e22) title_pane_t2

0xa30a,	// (0x00051e48) title_pane_t3

0x0002,

0xf532,	// (0x00057070) title_pane_t

0xc951,	// (0x0005448f) aid_levels_battery_ParamLimits

0xc951,	// (0x0005448f) aid_levels_battery

0xc96d,	// (0x000544ab) battery_pane_g1_ParamLimits

0xc96d,	// (0x000544ab) battery_pane_g1

0xc98a,	// (0x000544c8) battery_pane_g2_ParamLimits

0xc98a,	// (0x000544c8) battery_pane_g2

0x0001,

0xf78b,	// (0x000572c9) battery_pane_g_ParamLimits

0xf78b,	// (0x000572c9) battery_pane_g

0xcbbc,	// (0x000546fa) uni_indicator_pane_g1

0xcbd2,	// (0x00054710) uni_indicator_pane_g2

0xcbe8,	// (0x00054726) uni_indicator_pane_g3

0x0005,

0xf8fc,	// (0x0005743a) uni_indicator_pane_g

0x282b,	// (0x0004a369) navi_icon_pane_ParamLimits

0x282b,	// (0x0004a369) navi_icon_pane

0x277e,	// (0x0004a2bc) navi_midp_pane

0x2847,	// (0x0004a385) navi_navi_pane

0x2851,	// (0x0004a38f) navi_text_pane_ParamLimits

0x2851,	// (0x0004a38f) navi_text_pane

0x9fe1,	// (0x00051b1f) status_small_wait_pane_g1

0xa80f,	// (0x0005234d) status_small_wait_pane_g2

0x0001,

0xf8f7,	// (0x00057435) status_small_wait_pane_g

0xcb5b,	// (0x00054699) navi_navi_icon_text_pane

0xcb63,	// (0x000546a1) navi_navi_pane_g1_ParamLimits

0xcb63,	// (0x000546a1) navi_navi_pane_g1

0xcb75,	// (0x000546b3) navi_navi_pane_g2_ParamLimits

0xcb75,	// (0x000546b3) navi_navi_pane_g2

0x0001,

0xf8c5,	// (0x00057403) navi_navi_pane_g_ParamLimits

0xf8c5,	// (0x00057403) navi_navi_pane_g

0x40f0,	// (0x0004bc2e) navi_navi_tabs_pane

0xcb87,	// (0x000546c5) navi_navi_text_pane

0xcb5b,	// (0x00054699) navi_navi_volume_pane

0xcb49,	// (0x00054687) navi_text_pane_t1

0xcb3d,	// (0x0005467b) navi_icon_pane_g1

0x3fe7,	// (0x0004bb25) navi_navi_text_pane_t1

0xbd5c,	// (0x0005389a) navi_navi_volume_pane_g1

0xbd64,	// (0x000538a2) volume_small_pane

0xca99,	// (0x000545d7) navi_navi_icon_text_pane_g1

0xcaa1,	// (0x000545df) navi_navi_icon_text_pane_t1

0x2847,	// (0x0004a385) navi_tabs_2_long_pane

0x2847,	// (0x0004a385) navi_tabs_2_pane

0x2847,	// (0x0004a385) navi_tabs_3_long_pane

0x2847,	// (0x0004a385) navi_tabs_3_pane

0x2847,	// (0x0004a385) navi_tabs_4_pane

0xbd3c,	// (0x0005387a) tabs_2_active_pane_ParamLimits

0xbd3c,	// (0x0005387a) tabs_2_active_pane

0xbd4c,	// (0x0005388a) tabs_2_passive_pane_ParamLimits

0xbd4c,	// (0x0005388a) tabs_2_passive_pane

0xbd0a,	// (0x00053848) tabs_3_active_pane_ParamLimits

0xbd0a,	// (0x00053848) tabs_3_active_pane

0xbd1a,	// (0x00053858) tabs_3_passive_pane_ParamLimits

0xbd1a,	// (0x00053858) tabs_3_passive_pane

0xbd2b,	// (0x00053869) tabs_3_passive_pane_cp_ParamLimits

0xbd2b,	// (0x00053869) tabs_3_passive_pane_cp

0xbcc6,	// (0x00053804) tabs_4_active_pane_ParamLimits

0xbcc6,	// (0x00053804) tabs_4_active_pane

0xbcd7,	// (0x00053815) tabs_4_passive_pane_ParamLimits

0xbcd7,	// (0x00053815) tabs_4_passive_pane

0xbce8,	// (0x00053826) tabs_4_passive_pane_cp_ParamLimits

0xbce8,	// (0x00053826) tabs_4_passive_pane_cp

0xbcf9,	// (0x00053837) tabs_4_passive_pane_cp2_ParamLimits

0xbcf9,	// (0x00053837) tabs_4_passive_pane_cp2

0xbca2,	// (0x000537e0) tabs_2_long_active_pane_ParamLimits

0xbca2,	// (0x000537e0) tabs_2_long_active_pane

0xbcb4,	// (0x000537f2) tabs_2_long_passive_pane_ParamLimits

0xbcb4,	// (0x000537f2) tabs_2_long_passive_pane

0xbc69,	// (0x000537a7) tabs_3_long_active_pane_ParamLimits

0xbc69,	// (0x000537a7) tabs_3_long_active_pane

0xbc7c,	// (0x000537ba) tabs_3_long_passive_pane_ParamLimits

0xbc7c,	// (0x000537ba) tabs_3_long_passive_pane

0xbc8f,	// (0x000537cd) tabs_3_long_passive_pane_cp_ParamLimits

0xbc8f,	// (0x000537cd) tabs_3_long_passive_pane_cp

0x10b2,	// (0x00048bf0) volume_small_pane_g1

0xbc18,	// (0x00053756) volume_small_pane_g2

0xbc21,	// (0x0005375f) volume_small_pane_g3

0xbc2a,	// (0x00053768) volume_small_pane_g4

0xbc33,	// (0x00053771) volume_small_pane_g5

0xbc3c,	// (0x0005377a) volume_small_pane_g6

0xbc45,	// (0x00053783) volume_small_pane_g7

0xbc4e,	// (0x0005378c) volume_small_pane_g8

0xbc57,	// (0x00053795) volume_small_pane_g9

0xbc60,	// (0x0005379e) volume_small_pane_g10

0x0009,

0xf891,	// (0x000573cf) volume_small_pane_g

0xa31c,	// (0x00051e5a) bg_active_tab_pane_cp2_ParamLimits

0xa31c,	// (0x00051e5a) bg_active_tab_pane_cp2

0xa32a,	// (0x00051e68) tabs_3_active_pane_g1

0xa332,	// (0x00051e70) tabs_3_active_pane_t1

0xa31c,	// (0x00051e5a) bg_passive_tab_pane_cp2_ParamLimits

0xa31c,	// (0x00051e5a) bg_passive_tab_pane_cp2

0xa32a,	// (0x00051e68) tabs_3_passive_pane_g1

0xa332,	// (0x00051e70) tabs_3_passive_pane_t1

0xa31c,	// (0x00051e5a) bg_active_tab_pane_cp3_ParamLimits

0xa31c,	// (0x00051e5a) bg_active_tab_pane_cp3

0xa344,	// (0x00051e82) tabs_4_active_pane_g1

0xa34c,	// (0x00051e8a) tabs_4_active_pane_t1

0xa31c,	// (0x00051e5a) bg_passive_tab_pane_cp3_ParamLimits

0xa31c,	// (0x00051e5a) bg_passive_tab_pane_cp3

0xa344,	// (0x00051e82) tabs_4_1_passive_pane_g1

0xa34c,	// (0x00051e8a) tabs_4_1_passive_pane_t1

0x2cef,	// (0x0004a82d) list_highlight_pane_cp2

0xcc7b,	// (0x000547b9) list_set_pane_ParamLimits

0xcc7b,	// (0x000547b9) list_set_pane

0xcd3d,	// (0x0005487b) main_pane_set_t1_ParamLimits

0xcd3d,	// (0x0005487b) main_pane_set_t1

0xcd5d,	// (0x0005489b) main_pane_set_t2_ParamLimits

0xcd5d,	// (0x0005489b) main_pane_set_t2

0xcd71,	// (0x000548af) main_pane_set_t3_ParamLimits

0xcd71,	// (0x000548af) main_pane_set_t3

0xcd85,	// (0x000548c3) main_pane_set_t4_ParamLimits

0xcd85,	// (0x000548c3) main_pane_set_t4

0x0003,

0xf961,	// (0x0005749f) main_pane_set_t_ParamLimits

0xf961,	// (0x0005749f) main_pane_set_t

0xcd99,	// (0x000548d7) setting_code_pane

0x4752,	// (0x0004c290) setting_slider_graphic_pane

0x4752,	// (0x0004c290) setting_slider_pane

0x4752,	// (0x0004c290) setting_text_pane

0x4752,	// (0x0004c290) setting_volume_pane

0xf471,	// (0x00056faf) volume_set_pane

0xa35e,	// (0x00051e9c) bg_set_opt_pane_cp

0xf47b,	// (0x00056fb9) setting_slider_pane_t1

0xf494,	// (0x00056fd2) setting_slider_pane_t2

0xf4ae,	// (0x00056fec) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00057077) setting_slider_pane_t

0xf4c6,	// (0x00057004) slider_set_pane

0xa0d1,	// (0x00051c0f) bg_set_opt_pane_cp2

0xa36c,	// (0x00051eaa) setting_slider_graphic_pane_g1

0xf4dc,	// (0x0005701a) setting_slider_graphic_pane_t1

0xf4ec,	// (0x0005702a) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0005707e) setting_slider_graphic_pane_t

0xf4fc,	// (0x0005703a) slider_set_pane_cp

0xa0d1,	// (0x00051c0f) input_focus_pane_cp1

0x45eb,	// (0x0004c129) list_set_text_pane

0x9fe1,	// (0x00051b1f) setting_text_pane_g1

0xa0d1,	// (0x00051c0f) input_focus_pane_cp2

0x9fe1,	// (0x00051b1f) setting_code_pane_g1

0xa375,	// (0x00051eb3) setting_code_pane_t1

0xe2bb,	// (0x00055df9) set_text_pane_t1_ParamLimits

0xe2bb,	// (0x00055df9) set_text_pane_t1

0xad06,	// (0x00052844) set_opt_bg_pane_g1

0xad0e,	// (0x0005284c) set_opt_bg_pane_g2

0x45c3,	// (0x0004c101) set_opt_bg_pane_g3

0xad1e,	// (0x0005285c) set_opt_bg_pane_g4

0xad26,	// (0x00052864) set_opt_bg_pane_g5

0xad2e,	// (0x0005286c) set_opt_bg_pane_g6

0x45cd,	// (0x0004c10b) set_opt_bg_pane_g7

0x45d7,	// (0x0004c115) set_opt_bg_pane_g8

0x45e1,	// (0x0004c11f) set_opt_bg_pane_g9

0x0008,

0xf94e,	// (0x0005748c) set_opt_bg_pane_g

0x45b6,	// (0x0004c0f4) slider_set_pane_g1

0x1296,	// (0x00048dd4) slider_set_pane_g2

0x0006,

0xf93f,	// (0x0005747d) slider_set_pane_g

0x121e,	// (0x00048d5c) volume_set_pane_g1

0x1228,	// (0x00048d66) volume_set_pane_g2

0x1232,	// (0x00048d70) volume_set_pane_g3

0x123c,	// (0x00048d7a) volume_set_pane_g4

0x1246,	// (0x00048d84) volume_set_pane_g5

0x1250,	// (0x00048d8e) volume_set_pane_g6

0x125a,	// (0x00048d98) volume_set_pane_g7

0x1264,	// (0x00048da2) volume_set_pane_g8

0x126e,	// (0x00048dac) volume_set_pane_g9

0x1278,	// (0x00048db6) volume_set_pane_g10

0x0009,

0xf917,	// (0x00057455) volume_set_pane_g

0xa383,	// (0x00051ec1) indicator_pane_ParamLimits

0xa383,	// (0x00051ec1) indicator_pane

0xa3af,	// (0x00051eed) main_idle_pane_g2_ParamLimits

0xa3af,	// (0x00051eed) main_idle_pane_g2

0xa3e7,	// (0x00051f25) main_pane_idle_g1_ParamLimits

0xa3e7,	// (0x00051f25) main_pane_idle_g1

0xa411,	// (0x00051f4f) popup_clock_digital_analogue_window_ParamLimits

0xa411,	// (0x00051f4f) popup_clock_digital_analogue_window

0xa428,	// (0x00051f66) soft_indicator_pane_ParamLimits

0xa428,	// (0x00051f66) soft_indicator_pane

0xa444,	// (0x00051f82) wallpaper_pane_ParamLimits

0xa444,	// (0x00051f82) wallpaper_pane

0x9fe1,	// (0x00051b1f) wallpaper_pane_g1

0xa45e,	// (0x00051f9c) indicator_pane_g1_ParamLimits

0xa45e,	// (0x00051f9c) indicator_pane_g1

0x4a15,	// (0x0004c553) navi_navi_icon_text_pane_srt_g1

0xa486,	// (0x00051fc4) soft_indicator_pane_t1

0xa4a0,	// (0x00051fde) aid_ps_area_pane

0xa4b1,	// (0x00051fef) aid_ps_clock_pane

0xa4bf,	// (0x00051ffd) aid_ps_indicator_pane

0xa4cb,	// (0x00052009) indicator_ps_pane_ParamLimits

0xa4cb,	// (0x00052009) indicator_ps_pane

0xa4da,	// (0x00052018) power_save_pane_g1_ParamLimits

0xa4da,	// (0x00052018) power_save_pane_g1

0xa4e6,	// (0x00052024) power_save_pane_g2_ParamLimits

0xa4e6,	// (0x00052024) power_save_pane_g2

0xf2ae,	// (0x00056dec) aid_navinavi_width_pane

0xa4a0,	// (0x00051fde) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00057083) power_save_pane_g_ParamLimits

0xf545,	// (0x00057083) power_save_pane_g

0xa4f4,	// (0x00052032) power_save_pane_t1_ParamLimits

0xa4f4,	// (0x00052032) power_save_pane_t1

0xa4b1,	// (0x00051fef) aid_ps_clock_pane_ParamLimits

0xa4bf,	// (0x00051ffd) aid_ps_indicator_pane_ParamLimits

0xa506,	// (0x00052044) power_save_pane_t4_ParamLimits

0xa506,	// (0x00052044) power_save_pane_t4

0x0001,

0xf54a,	// (0x00057088) power_save_pane_t_ParamLimits

0xf54a,	// (0x00057088) power_save_pane_t

0xa530,	// (0x0005206e) power_save_t3_ParamLimits

0xa530,	// (0x0005206e) power_save_t3

0xa51b,	// (0x00052059) power_save_t2_ParamLimits

0xa51b,	// (0x00052059) power_save_t2

0xa545,	// (0x00052083) indicator_ps_pane_g1

0xa54e,	// (0x0005208c) ai_gene_pane_ParamLimits

0xa54e,	// (0x0005208c) ai_gene_pane

0xa565,	// (0x000520a3) ai_links_pane_ParamLimits

0xa565,	// (0x000520a3) ai_links_pane

0xa57d,	// (0x000520bb) indicator_pane_cp1_ParamLimits

0xa57d,	// (0x000520bb) indicator_pane_cp1

0xa58c,	// (0x000520ca) main_pane_idle_g1_cp_ParamLimits

0xa58c,	// (0x000520ca) main_pane_idle_g1_cp

0xa5a4,	// (0x000520e2) popup_ai_links_title_window

0xa5ad,	// (0x000520eb) soft_indicator_pane_cp1_ParamLimits

0xa5ad,	// (0x000520eb) soft_indicator_pane_cp1

0x439f,	// (0x0004bedd) ai_links_pane_g1

0x43a8,	// (0x0004bee6) grid_ai_links_pane

0xcbb3,	// (0x000546f1) ai_gene_pane_1

0x438d,	// (0x0004becb) ai_gene_pane_2

0x4396,	// (0x0004bed4) list_highlight_pane_cp4

0xcb8f,	// (0x000546cd) cell_ai_link_pane_ParamLimits

0xcb8f,	// (0x000546cd) cell_ai_link_pane

0x435c,	// (0x0004be9a) cell_ai_link_pane_g1

0xa80f,	// (0x0005234d) cell_ai_link_pane_g2

0x0001,

0xf8f2,	// (0x00057430) cell_ai_link_pane_g

0xa0d1,	// (0x00051c0f) grid_highlight_cp2

0xa0d1,	// (0x00051c0f) bg_popup_sub_pane_cp1

0xa5cf,	// (0x0005210d) popup_ai_links_title_window_t1

0x42a8,	// (0x0004bde6) ai_gene_pane_1_g1_ParamLimits

0x42a8,	// (0x0004bde6) ai_gene_pane_1_g1

0x42b4,	// (0x0004bdf2) ai_gene_pane_1_g2_ParamLimits

0x42b4,	// (0x0004bdf2) ai_gene_pane_1_g2

0x0001,

0xf8e8,	// (0x00057426) ai_gene_pane_1_g_ParamLimits

0xf8e8,	// (0x00057426) ai_gene_pane_1_g

0x42c1,	// (0x0004bdff) ai_gene_pane_1_t1_ParamLimits

0x42c1,	// (0x0004bdff) ai_gene_pane_1_t1

0x42f5,	// (0x0004be33) grid_ai_soft_ind_pane

0x4293,	// (0x0004bdd1) ai_gene_pane_2_t1_ParamLimits

0x4293,	// (0x0004bdd1) ai_gene_pane_2_t1

0xa5de,	// (0x0005211c) main_pane_empty_t1_ParamLimits

0xa5de,	// (0x0005211c) main_pane_empty_t1

0xa5f6,	// (0x00052134) main_pane_empty_t2_ParamLimits

0xa5f6,	// (0x00052134) main_pane_empty_t2

0xa60b,	// (0x00052149) main_pane_empty_t3_ParamLimits

0xa60b,	// (0x00052149) main_pane_empty_t3

0xa61d,	// (0x0005215b) main_pane_empty_t4_ParamLimits

0xa61d,	// (0x0005215b) main_pane_empty_t4

0xa62f,	// (0x0005216d) main_pane_empty_t5_ParamLimits

0xa62f,	// (0x0005216d) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0005708d) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0005708d) main_pane_empty_t

0xadd1,	// (0x0005290f) bg_popup_window_pane_ParamLimits

0xadd1,	// (0x0005290f) bg_popup_window_pane

0x3ff5,	// (0x0004bb33) find_popup_pane_cp2_ParamLimits

0x3ff5,	// (0x0004bb33) find_popup_pane_cp2

0x4001,	// (0x0004bb3f) heading_pane_ParamLimits

0x4001,	// (0x0004bb3f) heading_pane

0xa0d1,	// (0x00051c0f) bg_popup_sub_pane

0xcabe,	// (0x000545fc) bg_popup_window_pane_g1_ParamLimits

0xcabe,	// (0x000545fc) bg_popup_window_pane_g1

0xcacd,	// (0x0005460b) bg_popup_window_pane_g2_ParamLimits

0xcacd,	// (0x0005460b) bg_popup_window_pane_g2

0xcad9,	// (0x00054617) bg_popup_window_pane_g3_ParamLimits

0xcad9,	// (0x00054617) bg_popup_window_pane_g3

0xcae5,	// (0x00054623) bg_popup_window_pane_g4_ParamLimits

0xcae5,	// (0x00054623) bg_popup_window_pane_g4

0xcaf4,	// (0x00054632) bg_popup_window_pane_g5_ParamLimits

0xcaf4,	// (0x00054632) bg_popup_window_pane_g5

0xcb04,	// (0x00054642) bg_popup_window_pane_g6_ParamLimits

0xcb04,	// (0x00054642) bg_popup_window_pane_g6

0xcb10,	// (0x0005464e) bg_popup_window_pane_g7_ParamLimits

0xcb10,	// (0x0005464e) bg_popup_window_pane_g7

0xcb1f,	// (0x0005465d) bg_popup_window_pane_g8_ParamLimits

0xcb1f,	// (0x0005465d) bg_popup_window_pane_g8

0xcb2e,	// (0x0005466c) bg_popup_window_pane_g9_ParamLimits

0xcb2e,	// (0x0005466c) bg_popup_window_pane_g9

0x3fdb,	// (0x0004bb19) bg_popup_window_pane_g10_ParamLimits

0x3fdb,	// (0x0004bb19) bg_popup_window_pane_g10

0x0009,

0xf8b0,	// (0x000573ee) bg_popup_window_pane_g_ParamLimits

0xf8b0,	// (0x000573ee) bg_popup_window_pane_g

0x3f04,	// (0x0004ba42) bg_popup_heading_pane_ParamLimits

0x3f04,	// (0x0004ba42) bg_popup_heading_pane

0x1379,	// (0x00048eb7) tabs_4_passive_pane_cp_srt_ParamLimits

0x1379,	// (0x00048eb7) tabs_4_passive_pane_cp_srt

0x138b,	// (0x00048ec9) tabs_4_passive_pane_srt_ParamLimits

0x3f18,	// (0x0004ba56) heading_pane_g2

0x138b,	// (0x00048ec9) tabs_4_passive_pane_srt

0x329b,	// (0x0004add9) bg_passive_tab_pane_cp3_srt_ParamLimits

0x329b,	// (0x0004add9) bg_passive_tab_pane_cp3_srt

0x3f20,	// (0x0004ba5e) heading_pane_t1_ParamLimits

0x3f20,	// (0x0004ba5e) heading_pane_t1

0x3f37,	// (0x0004ba75) heading_pane_t2_ParamLimits

0x3f37,	// (0x0004ba75) heading_pane_t2

0x0001,

0xf8ab,	// (0x000573e9) heading_pane_t_ParamLimits

0xf8ab,	// (0x000573e9) heading_pane_t

0x3a2f,	// (0x0004b56d) bg_popup_heading_pane_g1

0x3ade,	// (0x0004b61c) bg_popup_heading_pane_g2

0x3ae8,	// (0x0004b626) bg_popup_heading_pane_g3

0x3af2,	// (0x0004b630) bg_popup_heading_pane_g4

0x3afc,	// (0x0004b63a) bg_popup_heading_pane_g5

0x3b06,	// (0x0004b644) bg_popup_heading_pane_g6

0x3b0e,	// (0x0004b64c) bg_popup_heading_pane_g7

0x3b16,	// (0x0004b654) bg_popup_heading_pane_g8

0x3b20,	// (0x0004b65e) bg_popup_heading_pane_g9

0x0008,

0xf867,	// (0x000573a5) bg_popup_heading_pane_g

0x3227,	// (0x0004ad65) bg_popup_sub_pane_g1

0x322f,	// (0x0004ad6d) bg_popup_sub_pane_g2

0x3237,	// (0x0004ad75) bg_popup_sub_pane_g3

0x323f,	// (0x0004ad7d) bg_popup_sub_pane_g4

0x3247,	// (0x0004ad85) bg_popup_sub_pane_g5

0x324f,	// (0x0004ad8d) bg_popup_sub_pane_g6

0x3257,	// (0x0004ad95) bg_popup_sub_pane_g7

0x325f,	// (0x0004ad9d) bg_popup_sub_pane_g8

0x3267,	// (0x0004ada5) bg_popup_sub_pane_g9

0x0008,

0xf841,	// (0x0005737f) bg_popup_sub_pane_g

0xa31c,	// (0x00051e5a) bg_popup_window_pane_cp5_ParamLimits

0xa31c,	// (0x00051e5a) bg_popup_window_pane_cp5

0xa64f,	// (0x0005218d) popup_note_window_g1_ParamLimits

0xa64f,	// (0x0005218d) popup_note_window_g1

0xa65b,	// (0x00052199) popup_note_window_t1_ParamLimits

0xa65b,	// (0x00052199) popup_note_window_t1

0xa671,	// (0x000521af) popup_note_window_t2_ParamLimits

0xa671,	// (0x000521af) popup_note_window_t2

0xa687,	// (0x000521c5) popup_note_window_t3_ParamLimits

0xa687,	// (0x000521c5) popup_note_window_t3

0xa69d,	// (0x000521db) popup_note_window_t4_ParamLimits

0xa69d,	// (0x000521db) popup_note_window_t4

0xa6c5,	// (0x00052203) popup_note_window_t5_ParamLimits

0xa6c5,	// (0x00052203) popup_note_window_t5

0x0004,

0xf55a,	// (0x00057098) popup_note_window_t_ParamLimits

0xf55a,	// (0x00057098) popup_note_window_t

0xa70f,	// (0x0005224d) bg_popup_window_pane_cp6_ParamLimits

0xa70f,	// (0x0005224d) bg_popup_window_pane_cp6

0x39ab,	// (0x0004b4e9) popup_note_image_window_g1_ParamLimits

0x39ab,	// (0x0004b4e9) popup_note_image_window_g1

0x39b7,	// (0x0004b4f5) popup_note_image_window_g2_ParamLimits

0x39b7,	// (0x0004b4f5) popup_note_image_window_g2

0x0001,

0xf835,	// (0x00057373) popup_note_image_window_g_ParamLimits

0xf835,	// (0x00057373) popup_note_image_window_g

0x39d0,	// (0x0004b50e) popup_note_image_window_t1_ParamLimits

0x39d0,	// (0x0004b50e) popup_note_image_window_t1

0x39e9,	// (0x0004b527) popup_note_image_window_t2_ParamLimits

0x39e9,	// (0x0004b527) popup_note_image_window_t2

0x3a02,	// (0x0004b540) popup_note_image_window_t3_ParamLimits

0x3a02,	// (0x0004b540) popup_note_image_window_t3

0x0002,

0xf83a,	// (0x00057378) popup_note_image_window_t_ParamLimits

0xf83a,	// (0x00057378) popup_note_image_window_t

0x386b,	// (0x0004b3a9) bg_popup_window_pane_cp7_ParamLimits

0x386b,	// (0x0004b3a9) bg_popup_window_pane_cp7

0x389b,	// (0x0004b3d9) popup_note_wait_window_g1_ParamLimits

0x389b,	// (0x0004b3d9) popup_note_wait_window_g1

0x38a7,	// (0x0004b3e5) popup_note_wait_window_g2_ParamLimits

0x38a7,	// (0x0004b3e5) popup_note_wait_window_g2

0x0002,

0xf823,	// (0x00057361) popup_note_wait_window_g_ParamLimits

0xf823,	// (0x00057361) popup_note_wait_window_g

0x38bf,	// (0x0004b3fd) popup_note_wait_window_t1_ParamLimits

0x38bf,	// (0x0004b3fd) popup_note_wait_window_t1

0x38e6,	// (0x0004b424) popup_note_wait_window_t2_ParamLimits

0x38e6,	// (0x0004b424) popup_note_wait_window_t2

0x3904,	// (0x0004b442) popup_note_wait_window_t3_ParamLimits

0x3904,	// (0x0004b442) popup_note_wait_window_t3

0x3917,	// (0x0004b455) popup_note_wait_window_t4_ParamLimits

0x3917,	// (0x0004b455) popup_note_wait_window_t4

0x0004,

0xf82a,	// (0x00057368) popup_note_wait_window_t_ParamLimits

0xf82a,	// (0x00057368) popup_note_wait_window_t

0x393c,	// (0x0004b47a) wait_bar_pane_ParamLimits

0x393c,	// (0x0004b47a) wait_bar_pane

0xa0d1,	// (0x00051c0f) wait_anim_pane

0xa0d1,	// (0x00051c0f) wait_border_pane

0x9fe1,	// (0x00051b1f) wait_anim_pane_g1

0x9fe1,	// (0x00051b1f) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x00057221) wait_anim_pane_g

0x380f,	// (0x0004b34d) wait_border_pane_g1

0x381a,	// (0x0004b358) wait_border_pane_g2

0x3823,	// (0x0004b361) wait_border_pane_g3

0x0002,

0xf81c,	// (0x0005735a) wait_border_pane_g

0x3679,	// (0x0004b1b7) bg_popup_window_pane_cp16_ParamLimits

0x3679,	// (0x0004b1b7) bg_popup_window_pane_cp16

0x3779,	// (0x0004b2b7) indicator_popup_pane_cp4_ParamLimits

0x3779,	// (0x0004b2b7) indicator_popup_pane_cp4

0x378d,	// (0x0004b2cb) popup_query_data_window_t1_ParamLimits

0x378d,	// (0x0004b2cb) popup_query_data_window_t1

0x379f,	// (0x0004b2dd) popup_query_data_window_t2_ParamLimits

0x379f,	// (0x0004b2dd) popup_query_data_window_t2

0x37b8,	// (0x0004b2f6) popup_query_data_window_t3_ParamLimits

0x37b8,	// (0x0004b2f6) popup_query_data_window_t3

0x0002,

0xf815,	// (0x00057353) popup_query_data_window_t_ParamLimits

0xf815,	// (0x00057353) popup_query_data_window_t

0x37d2,	// (0x0004b310) query_popup_data_pane_ParamLimits

0x37d2,	// (0x0004b310) query_popup_data_pane

0x37e6,	// (0x0004b324) query_popup_data_pane_cp1_ParamLimits

0x37e6,	// (0x0004b324) query_popup_data_pane_cp1

0x3679,	// (0x0004b1b7) bg_popup_window_pane_cp10_ParamLimits

0x3679,	// (0x0004b1b7) bg_popup_window_pane_cp10

0x36ab,	// (0x0004b1e9) indicator_popup_pane_ParamLimits

0x36ab,	// (0x0004b1e9) indicator_popup_pane

0x36cd,	// (0x0004b20b) popup_query_code_window_t1_ParamLimits

0x36cd,	// (0x0004b20b) popup_query_code_window_t1

0x36e7,	// (0x0004b225) popup_query_code_window_t2_ParamLimits

0x36e7,	// (0x0004b225) popup_query_code_window_t2

0x3730,	// (0x0004b26e) popup_query_code_window_t3_ParamLimits

0x3730,	// (0x0004b26e) popup_query_code_window_t3

0x0002,

0xf80e,	// (0x0005734c) popup_query_code_window_t_ParamLimits

0xf80e,	// (0x0005734c) popup_query_code_window_t

0x375f,	// (0x0004b29d) query_popup_pane_ParamLimits

0x375f,	// (0x0004b29d) query_popup_pane

0xa70f,	// (0x0005224d) bg_popup_window_pane_cp15_ParamLimits

0xa70f,	// (0x0005224d) bg_popup_window_pane_cp15

0xa72f,	// (0x0005226d) indicator_popup_pane_cp1_ParamLimits

0xa72f,	// (0x0005226d) indicator_popup_pane_cp1

0xa742,	// (0x00052280) indicator_popup_pane_cp2_ParamLimits

0xa742,	// (0x00052280) indicator_popup_pane_cp2

0xa75d,	// (0x0005229b) popup_query_data_code_window_g1_ParamLimits

0xa75d,	// (0x0005229b) popup_query_data_code_window_g1

0xa770,	// (0x000522ae) popup_query_data_code_window_t1_ParamLimits

0xa770,	// (0x000522ae) popup_query_data_code_window_t1

0xa782,	// (0x000522c0) popup_query_data_code_window_t2_ParamLimits

0xa782,	// (0x000522c0) popup_query_data_code_window_t2

0xa794,	// (0x000522d2) popup_query_data_code_window_t3_ParamLimits

0xa794,	// (0x000522d2) popup_query_data_code_window_t3

0xa7aa,	// (0x000522e8) popup_query_data_code_window_t4_ParamLimits

0xa7aa,	// (0x000522e8) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x000570a3) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x000570a3) popup_query_data_code_window_t

0x27e7,	// (0x0004a325) list_single_midp_graphic_pane_g3

0xa7c4,	// (0x00052302) query_popup_data_pane_cp2_ParamLimits

0xa7d7,	// (0x00052315) query_popup_pane_cp2_ParamLimits

0xa7d7,	// (0x00052315) query_popup_pane_cp2

0xa0d1,	// (0x00051c0f) bg_popup_window_pane_cp11

0x365d,	// (0x0004b19b) heading_pane_cp5

0x3665,	// (0x0004b1a3) listscroll_popup_info_pane

0xa0d1,	// (0x00051c0f) input_focus_pane_cp3

0xa7f2,	// (0x00052330) query_popup_pane_t1

0xa800,	// (0x0005233e) list_popup_info_pane_ParamLimits

0xa800,	// (0x0005233e) list_popup_info_pane

0xa80f,	// (0x0005234d) listscroll_popup_info_pane_g1

0xa817,	// (0x00052355) scroll_pane_cp7

0xa821,	// (0x0005235f) popup_info_list_pane_t1_ParamLimits

0xa821,	// (0x0005235f) popup_info_list_pane_t1

0xa83b,	// (0x00052379) popup_info_list_pane_t2_ParamLimits

0xa83b,	// (0x00052379) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x000570ac) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x000570ac) popup_info_list_pane_t

0xa0d1,	// (0x00051c0f) bg_popup_window_pane_cp12

0x4a2f,	// (0x0004c56d) find_popup_pane

0xa35e,	// (0x00051e9c) bg_popup_window_pane_cp3

0xa855,	// (0x00052393) heading_pane_cp3

0xa864,	// (0x000523a2) listscroll_popup_graphic_pane

0xa0d1,	// (0x00051c0f) bg_popup_window_pane_cp4

0xa8c4,	// (0x00052402) heading_pane_cp4

0xa8ce,	// (0x0005240c) listscroll_popup_colour_pane

0xa8d6,	// (0x00052414) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa8d6,	// (0x00052414) cell_large_graphic_colour_none_popup_pane

0xa8ea,	// (0x00052428) grid_large_graphic_colour_popup_pane_ParamLimits

0xa8ea,	// (0x00052428) grid_large_graphic_colour_popup_pane

0xa912,	// (0x00052450) listscroll_popup_colour_pane_g1_ParamLimits

0xa912,	// (0x00052450) listscroll_popup_colour_pane_g1

0xa929,	// (0x00052467) listscroll_popup_colour_pane_g2_ParamLimits

0xa929,	// (0x00052467) listscroll_popup_colour_pane_g2

0xa940,	// (0x0005247e) listscroll_popup_colour_pane_g3_ParamLimits

0xa940,	// (0x0005247e) listscroll_popup_colour_pane_g3

0xa950,	// (0x0005248e) listscroll_popup_colour_pane_g4_ParamLimits

0xa950,	// (0x0005248e) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x000570b1) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x000570b1) listscroll_popup_colour_pane_g

0xa960,	// (0x0005249e) scroll_pane_cp6_ParamLimits

0xa960,	// (0x0005249e) scroll_pane_cp6

0xa972,	// (0x000524b0) cell_large_graphic_colour_popup_pane_ParamLimits

0xa972,	// (0x000524b0) cell_large_graphic_colour_popup_pane

0xa993,	// (0x000524d1) cell_large_graphic_colour_none_popup_pane_t1

0xa0d1,	// (0x00051c0f) grid_highlight_pane_cp5

0xa9a2,	// (0x000524e0) cell_large_graphic_colour_popup_pane_g1

0xa9aa,	// (0x000524e8) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x000570ba) cell_large_graphic_colour_popup_pane_g

0xa9b2,	// (0x000524f0) cell_large_graphic_colour_popup_pane_g2_copy1

0xa9bb,	// (0x000524f9) grid_highlight_pane_cp4

0xa9c3,	// (0x00052501) bg_popup_window_pane_cp8_ParamLimits

0xa9c3,	// (0x00052501) bg_popup_window_pane_cp8

0xa9de,	// (0x0005251c) popup_snote_single_text_window_g1_ParamLimits

0xa9de,	// (0x0005251c) popup_snote_single_text_window_g1

0xa9f0,	// (0x0005252e) popup_snote_single_text_window_t1_ParamLimits

0xa9f0,	// (0x0005252e) popup_snote_single_text_window_t1

0xaa03,	// (0x00052541) popup_snote_single_text_window_t2_ParamLimits

0xaa03,	// (0x00052541) popup_snote_single_text_window_t2

0xaa16,	// (0x00052554) popup_snote_single_text_window_t3_ParamLimits

0xaa16,	// (0x00052554) popup_snote_single_text_window_t3

0xaa4f,	// (0x0005258d) popup_snote_single_text_window_t4_ParamLimits

0xaa4f,	// (0x0005258d) popup_snote_single_text_window_t4

0xaa83,	// (0x000525c1) popup_snote_single_text_window_t5_ParamLimits

0xaa83,	// (0x000525c1) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x000570bf) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x000570bf) popup_snote_single_text_window_t

0xaab2,	// (0x000525f0) bg_popup_window_pane_cp9_ParamLimits

0xaab2,	// (0x000525f0) bg_popup_window_pane_cp9

0xa9de,	// (0x0005251c) popup_snote_single_graphic_window_g1_ParamLimits

0xa9de,	// (0x0005251c) popup_snote_single_graphic_window_g1

0xaac0,	// (0x000525fe) popup_snote_single_graphic_window_g2_ParamLimits

0xaac0,	// (0x000525fe) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x000570ca) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x000570ca) popup_snote_single_graphic_window_g

0xaacc,	// (0x0005260a) popup_snote_single_graphic_window_t1_ParamLimits

0xaacc,	// (0x0005260a) popup_snote_single_graphic_window_t1

0xaadf,	// (0x0005261d) popup_snote_single_graphic_window_t2_ParamLimits

0xaadf,	// (0x0005261d) popup_snote_single_graphic_window_t2

0xaaf2,	// (0x00052630) popup_snote_single_graphic_window_t3_ParamLimits

0xaaf2,	// (0x00052630) popup_snote_single_graphic_window_t3

0xab2b,	// (0x00052669) popup_snote_single_graphic_window_t4_ParamLimits

0xab2b,	// (0x00052669) popup_snote_single_graphic_window_t4

0xab5f,	// (0x0005269d) popup_snote_single_graphic_window_t5_ParamLimits

0xab5f,	// (0x0005269d) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x000570cf) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x000570cf) popup_snote_single_graphic_window_t

0x496d,	// (0x0004c4ab) grid_graphic_popup_pane_ParamLimits

0x496d,	// (0x0004c4ab) grid_graphic_popup_pane

0x499b,	// (0x0004c4d9) listscroll_popup_graphic_pane_g1_ParamLimits

0x499b,	// (0x0004c4d9) listscroll_popup_graphic_pane_g1

0xcea5,	// (0x000549e3) listscroll_popup_graphic_pane_g2_ParamLimits

0xcea5,	// (0x000549e3) listscroll_popup_graphic_pane_g2

0x0001,

0xf98b,	// (0x000574c9) listscroll_popup_graphic_pane_g_ParamLimits

0xf98b,	// (0x000574c9) listscroll_popup_graphic_pane_g

0x49c3,	// (0x0004c501) scroll_pane_cp5

0xce5d,	// (0x0005499b) cell_graphic_popup_pane_ParamLimits

0xce5d,	// (0x0005499b) cell_graphic_popup_pane

0x48e6,	// (0x0004c424) cell_graphic_popup_pane_g1

0x48ee,	// (0x0004c42c) cell_graphic_popup_pane_g2

0xa9b2,	// (0x000524f0) cell_graphic_popup_pane_g3

0x0002,

0xf984,	// (0x000574c2) cell_graphic_popup_pane_g

0x48f7,	// (0x0004c435) cell_graphic_popup_pane_t2

0xa9bb,	// (0x000524f9) grid_highlight_pane_cp3

0xaba0,	// (0x000526de) list_gen_pane_ParamLimits

0xaba0,	// (0x000526de) list_gen_pane

0xabd2,	// (0x00052710) scroll_pane

0xce14,	// (0x00054952) bg_list_pane_g1_ParamLimits

0xce14,	// (0x00054952) bg_list_pane_g1

0x485b,	// (0x0004c399) bg_list_pane_g2_ParamLimits

0x485b,	// (0x0004c399) bg_list_pane_g2

0x4870,	// (0x0004c3ae) bg_list_pane_g3_ParamLimits

0x4870,	// (0x0004c3ae) bg_list_pane_g3

0x4884,	// (0x0004c3c2) bg_list_pane_g4_ParamLimits

0x4884,	// (0x0004c3c2) bg_list_pane_g4

0xce31,	// (0x0005496f) bg_list_pane_g5_ParamLimits

0xce31,	// (0x0005496f) bg_list_pane_g5

0x0004,

0xf979,	// (0x000574b7) bg_list_pane_g_ParamLimits

0xf979,	// (0x000574b7) bg_list_pane_g

0xbd6d,	// (0x000538ab) list_double2_graphic_large_graphic_pane_ParamLimits

0xbd6d,	// (0x000538ab) list_double2_graphic_large_graphic_pane

0xbd6d,	// (0x000538ab) list_double2_graphic_pane_ParamLimits

0xbd6d,	// (0x000538ab) list_double2_graphic_pane

0xbd6d,	// (0x000538ab) list_double2_large_graphic_pane_ParamLimits

0xbd6d,	// (0x000538ab) list_double2_large_graphic_pane

0xbd6d,	// (0x000538ab) list_double2_pane_ParamLimits

0xbd6d,	// (0x000538ab) list_double2_pane

0xbd6d,	// (0x000538ab) list_double_graphic_heading_pane_ParamLimits

0xbd6d,	// (0x000538ab) list_double_graphic_heading_pane

0xbd6d,	// (0x000538ab) list_double_graphic_pane_ParamLimits

0xbd6d,	// (0x000538ab) list_double_graphic_pane

0xbd6d,	// (0x000538ab) list_double_heading_pane_ParamLimits

0xbd6d,	// (0x000538ab) list_double_heading_pane

0xbd6d,	// (0x000538ab) list_double_large_graphic_pane_ParamLimits

0xbd6d,	// (0x000538ab) list_double_large_graphic_pane

0xbd6d,	// (0x000538ab) list_double_number_pane_ParamLimits

0xbd6d,	// (0x000538ab) list_double_number_pane

0xbd6d,	// (0x000538ab) list_double_pane_ParamLimits

0xbd6d,	// (0x000538ab) list_double_pane

0xbd6d,	// (0x000538ab) list_double_time_pane_ParamLimits

0xbd6d,	// (0x000538ab) list_double_time_pane

0xbd6d,	// (0x000538ab) list_setting_number_pane_ParamLimits

0xbd6d,	// (0x000538ab) list_setting_number_pane

0xbd6d,	// (0x000538ab) list_setting_pane_ParamLimits

0xbd6d,	// (0x000538ab) list_setting_pane

0xcdd7,	// (0x00054915) list_single_2graphic_pane_ParamLimits

0xcdd7,	// (0x00054915) list_single_2graphic_pane

0xcdd7,	// (0x00054915) list_single_graphic_heading_pane_ParamLimits

0xcdd7,	// (0x00054915) list_single_graphic_heading_pane

0xcdd7,	// (0x00054915) list_single_graphic_pane_ParamLimits

0xcdd7,	// (0x00054915) list_single_graphic_pane

0xcdd7,	// (0x00054915) list_single_heading_pane_ParamLimits

0xcdd7,	// (0x00054915) list_single_heading_pane

0xcdd7,	// (0x00054915) list_single_large_graphic_pane_ParamLimits

0xcdd7,	// (0x00054915) list_single_large_graphic_pane

0xcdd7,	// (0x00054915) list_single_number_heading_pane_ParamLimits

0xcdd7,	// (0x00054915) list_single_number_heading_pane

0xcdd7,	// (0x00054915) list_single_number_pane_ParamLimits

0xcdd7,	// (0x00054915) list_single_number_pane

0xcdd7,	// (0x00054915) list_single_pane_ParamLimits

0xcdd7,	// (0x00054915) list_single_pane

0xa0d1,	// (0x00051c0f) list_highlight_pane_cp1

0x0f7d,	// (0x00048abb) list_single_pane_g1_ParamLimits

0x0f7d,	// (0x00048abb) list_single_pane_g1

0x0f89,	// (0x00048ac7) list_single_pane_g2_ParamLimits

0x0f89,	// (0x00048ac7) list_single_pane_g2

0x0001,

0xf5ad,	// (0x000570eb) list_single_pane_g_ParamLimits

0xf5ad,	// (0x000570eb) list_single_pane_g

0xeee0,	// (0x00056a1e) list_single_pane_t1_ParamLimits

0xeee0,	// (0x00056a1e) list_single_pane_t1

0x0f7d,	// (0x00048abb) list_single_number_pane_g1_ParamLimits

0x0f7d,	// (0x00048abb) list_single_number_pane_g1

0x0f89,	// (0x00048ac7) list_single_number_pane_g2_ParamLimits

0x0f89,	// (0x00048ac7) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x000570eb) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x000570eb) list_single_number_pane_g

0xee11,	// (0x0005694f) list_single_number_pane_t1_ParamLimits

0xee11,	// (0x0005694f) list_single_number_pane_t1

0xeece,	// (0x00056a0c) list_single_number_pane_t2_ParamLimits

0xeece,	// (0x00056a0c) list_single_number_pane_t2

0x0001,

0xf93a,	// (0x00057478) list_single_number_pane_t_ParamLimits

0xf93a,	// (0x00057478) list_single_number_pane_t

0x97ad,	// (0x000512eb) list_single_graphic_pane_g1_ParamLimits

0x97ad,	// (0x000512eb) list_single_graphic_pane_g1

0x0f7d,	// (0x00048abb) list_single_graphic_pane_g2_ParamLimits

0x0f7d,	// (0x00048abb) list_single_graphic_pane_g2

0x0f89,	// (0x00048ac7) list_single_graphic_pane_g3_ParamLimits

0x0f89,	// (0x00048ac7) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x000570da) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x000570da) list_single_graphic_pane_g

0x97b9,	// (0x000512f7) list_single_graphic_pane_t1_ParamLimits

0x97b9,	// (0x000512f7) list_single_graphic_pane_t1

0x97cf,	// (0x0005130d) list_single_heading_pane_g1_ParamLimits

0x97cf,	// (0x0005130d) list_single_heading_pane_g1

0x0f89,	// (0x00048ac7) list_single_heading_pane_g2_ParamLimits

0x0f89,	// (0x00048ac7) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x000570e1) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x000570e1) list_single_heading_pane_g

0x97e2,	// (0x00051320) list_single_heading_pane_t1_ParamLimits

0x97e2,	// (0x00051320) list_single_heading_pane_t1

0xac06,	// (0x00052744) list_single_heading_pane_t2_ParamLimits

0xac06,	// (0x00052744) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x000570e6) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x000570e6) list_single_heading_pane_t

0x0f7d,	// (0x00048abb) list_single_number_heading_pane_g1_ParamLimits

0x0f7d,	// (0x00048abb) list_single_number_heading_pane_g1

0x0f89,	// (0x00048ac7) list_single_number_heading_pane_g2_ParamLimits

0x0f89,	// (0x00048ac7) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x000570eb) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x000570eb) list_single_number_heading_pane_g

0xec41,	// (0x0005677f) list_single_number_heading_pane_t1_ParamLimits

0xec41,	// (0x0005677f) list_single_number_heading_pane_t1

0x97f8,	// (0x00051336) list_single_number_heading_pane_t2_ParamLimits

0x97f8,	// (0x00051336) list_single_number_heading_pane_t2

0xec57,	// (0x00056795) list_single_number_heading_pane_t3_ParamLimits

0xec57,	// (0x00056795) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x000570f0) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x000570f0) list_single_number_heading_pane_t

0xec69,	// (0x000567a7) list_single_graphic_heading_pane_g1_ParamLimits

0xec69,	// (0x000567a7) list_single_graphic_heading_pane_g1

0xac18,	// (0x00052756) list_single_graphic_heading_pane_g4_ParamLimits

0xac18,	// (0x00052756) list_single_graphic_heading_pane_g4

0x0f89,	// (0x00048ac7) list_single_graphic_heading_pane_g5_ParamLimits

0x0f89,	// (0x00048ac7) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x000570f7) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x000570f7) list_single_graphic_heading_pane_g

0xec41,	// (0x0005677f) list_single_graphic_heading_pane_t1_ParamLimits

0xec41,	// (0x0005677f) list_single_graphic_heading_pane_t1

0x980a,	// (0x00051348) list_single_graphic_heading_pane_t2_ParamLimits

0x980a,	// (0x00051348) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x000570fe) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x000570fe) list_single_graphic_heading_pane_t

0x142a,	// (0x00048f68) list_single_large_graphic_pane_g1_ParamLimits

0x142a,	// (0x00048f68) list_single_large_graphic_pane_g1

0x0f7d,	// (0x00048abb) list_single_large_graphic_pane_g2_ParamLimits

0x0f7d,	// (0x00048abb) list_single_large_graphic_pane_g2

0x0f89,	// (0x00048ac7) list_single_large_graphic_pane_g3_ParamLimits

0x0f89,	// (0x00048ac7) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x00057103) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x00057103) list_single_large_graphic_pane_g

0x381a,	// (0x0004b358) wait_border_pane_g2_copy1

0xac29,	// (0x00052767) list_single_large_graphic_pane_g4_cp2

0xec75,	// (0x000567b3) list_single_large_graphic_pane_t1_ParamLimits

0xec75,	// (0x000567b3) list_single_large_graphic_pane_t1

0xac31,	// (0x0005276f) list_double_pane_g1_ParamLimits

0xac31,	// (0x0005276f) list_double_pane_g1

0xac3d,	// (0x0005277b) list_double_pane_g2_ParamLimits

0xac3d,	// (0x0005277b) list_double_pane_g2

0x0001,

0xf5cc,	// (0x0005710a) list_double_pane_g_ParamLimits

0xf5cc,	// (0x0005710a) list_double_pane_g

0x981c,	// (0x0005135a) list_double_pane_t1_ParamLimits

0x981c,	// (0x0005135a) list_double_pane_t1

0x9832,	// (0x00051370) list_double_pane_t2_ParamLimits

0x9832,	// (0x00051370) list_double_pane_t2

0x0001,

0xf5d1,	// (0x0005710f) list_double_pane_t_ParamLimits

0xf5d1,	// (0x0005710f) list_double_pane_t

0x9844,	// (0x00051382) list_double2_pane_g1_ParamLimits

0x9844,	// (0x00051382) list_double2_pane_g1

0x9855,	// (0x00051393) list_double2_pane_g2_ParamLimits

0x9855,	// (0x00051393) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x00057114) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x00057114) list_double2_pane_g

0x9861,	// (0x0005139f) list_double2_pane_t1_ParamLimits

0x9861,	// (0x0005139f) list_double2_pane_t1

0x9877,	// (0x000513b5) list_double2_pane_t2_ParamLimits

0x9877,	// (0x000513b5) list_double2_pane_t2

0x0001,

0xf5db,	// (0x00057119) list_double2_pane_t_ParamLimits

0xf5db,	// (0x00057119) list_double2_pane_t

0xac31,	// (0x0005276f) list_double_number_pane_g1_ParamLimits

0xac31,	// (0x0005276f) list_double_number_pane_g1

0xac3d,	// (0x0005277b) list_double_number_pane_g2_ParamLimits

0xac3d,	// (0x0005277b) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x0005710a) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x0005710a) list_double_number_pane_g

0x9889,	// (0x000513c7) list_double_number_pane_t1_ParamLimits

0x9889,	// (0x000513c7) list_double_number_pane_t1

0x989b,	// (0x000513d9) list_double_number_pane_t2_ParamLimits

0x989b,	// (0x000513d9) list_double_number_pane_t2

0x98b1,	// (0x000513ef) list_double_number_pane_t3_ParamLimits

0x98b1,	// (0x000513ef) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x0005711e) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x0005711e) list_double_number_pane_t

0x98c3,	// (0x00051401) list_double_graphic_pane_g1_ParamLimits

0x98c3,	// (0x00051401) list_double_graphic_pane_g1

0x98cf,	// (0x0005140d) list_double_graphic_pane_g2_ParamLimits

0x98cf,	// (0x0005140d) list_double_graphic_pane_g2

0x98de,	// (0x0005141c) list_double_graphic_pane_g3_ParamLimits

0x98de,	// (0x0005141c) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x00057125) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x00057125) list_double_graphic_pane_g

0x98f6,	// (0x00051434) list_double_graphic_pane_t1_ParamLimits

0x98f6,	// (0x00051434) list_double_graphic_pane_t1

0x990c,	// (0x0005144a) list_double_graphic_pane_t2_ParamLimits

0x990c,	// (0x0005144a) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x0005712e) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x0005712e) list_double_graphic_pane_t

0x991e,	// (0x0005145c) list_double2_graphic_pane_g1_ParamLimits

0x991e,	// (0x0005145c) list_double2_graphic_pane_g1

0x5e9d,	// (0x0004d9db) list_double2_graphic_pane_g2_ParamLimits

0x5e9d,	// (0x0004d9db) list_double2_graphic_pane_g2

0x992a,	// (0x00051468) list_double2_graphic_pane_g3_ParamLimits

0x992a,	// (0x00051468) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x00057133) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x00057133) list_double2_graphic_pane_g

0x9936,	// (0x00051474) list_double2_graphic_pane_t1_ParamLimits

0x9936,	// (0x00051474) list_double2_graphic_pane_t1

0x994c,	// (0x0005148a) list_double2_graphic_pane_t2_ParamLimits

0x994c,	// (0x0005148a) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x0005713a) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x0005713a) list_double2_graphic_pane_t

0x995e,	// (0x0005149c) list_double_large_graphic_pane_g1_ParamLimits

0x995e,	// (0x0005149c) list_double_large_graphic_pane_g1

0x997d,	// (0x000514bb) list_double_large_graphic_pane_g2_ParamLimits

0x997d,	// (0x000514bb) list_double_large_graphic_pane_g2

0xac3d,	// (0x0005277b) list_double_large_graphic_pane_g3_ParamLimits

0xac3d,	// (0x0005277b) list_double_large_graphic_pane_g3

0x9993,	// (0x000514d1) list_double_large_graphic_pane_g4_ParamLimits

0x9993,	// (0x000514d1) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x0005713f) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0005713f) list_double_large_graphic_pane_g

0x99a6,	// (0x000514e4) list_double_large_graphic_pane_t1_ParamLimits

0x99a6,	// (0x000514e4) list_double_large_graphic_pane_t1

0x99bf,	// (0x000514fd) list_double_large_graphic_pane_t2_ParamLimits

0x99bf,	// (0x000514fd) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x0005714a) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x0005714a) list_double_large_graphic_pane_t

0xac49,	// (0x00052787) list_double2_large_graphic_pane_g1_ParamLimits

0xac49,	// (0x00052787) list_double2_large_graphic_pane_g1

0x99d1,	// (0x0005150f) list_double2_large_graphic_pane_g2_ParamLimits

0x99d1,	// (0x0005150f) list_double2_large_graphic_pane_g2

0x992a,	// (0x00051468) list_double2_large_graphic_pane_g3_ParamLimits

0x992a,	// (0x00051468) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x0005714f) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x0005714f) list_double2_large_graphic_pane_g

0x99e2,	// (0x00051520) list_double2_large_graphic_pane_t1_ParamLimits

0x99e2,	// (0x00051520) list_double2_large_graphic_pane_t1

0x99f8,	// (0x00051536) list_double2_large_graphic_pane_t2_ParamLimits

0x99f8,	// (0x00051536) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x00057156) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x00057156) list_double2_large_graphic_pane_t

0x9a0a,	// (0x00051548) list_double_heading_pane_g1_ParamLimits

0x9a0a,	// (0x00051548) list_double_heading_pane_g1

0x9a1b,	// (0x00051559) list_double_heading_pane_g2_ParamLimits

0x9a1b,	// (0x00051559) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x0005715b) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x0005715b) list_double_heading_pane_g

0x9a27,	// (0x00051565) list_double_heading_pane_t1_ParamLimits

0x9a27,	// (0x00051565) list_double_heading_pane_t1

0x9a3d,	// (0x0005157b) list_double_heading_pane_t2_ParamLimits

0x9a3d,	// (0x0005157b) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x00057160) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x00057160) list_double_heading_pane_t

0x9a4f,	// (0x0005158d) list_double_graphic_heading_pane_g1_ParamLimits

0x9a4f,	// (0x0005158d) list_double_graphic_heading_pane_g1

0x9a0a,	// (0x00051548) list_double_graphic_heading_pane_g2_ParamLimits

0x9a0a,	// (0x00051548) list_double_graphic_heading_pane_g2

0x9a1b,	// (0x00051559) list_double_graphic_heading_pane_g3_ParamLimits

0x9a1b,	// (0x00051559) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x00057165) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x00057165) list_double_graphic_heading_pane_g

0x9a5b,	// (0x00051599) list_double_graphic_heading_pane_t1_ParamLimits

0x9a5b,	// (0x00051599) list_double_graphic_heading_pane_t1

0x9a71,	// (0x000515af) list_double_graphic_heading_pane_t2_ParamLimits

0x9a71,	// (0x000515af) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x0005716c) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x0005716c) list_double_graphic_heading_pane_t

0x9a83,	// (0x000515c1) list_double_time_pane_g1_ParamLimits

0x9a83,	// (0x000515c1) list_double_time_pane_g1

0x9a94,	// (0x000515d2) list_double_time_pane_g2_ParamLimits

0x9a94,	// (0x000515d2) list_double_time_pane_g2

0x0001,

0xf633,	// (0x00057171) list_double_time_pane_g_ParamLimits

0xf633,	// (0x00057171) list_double_time_pane_g

0x9aa0,	// (0x000515de) list_double_time_pane_t1_ParamLimits

0x9aa0,	// (0x000515de) list_double_time_pane_t1

0x9ab6,	// (0x000515f4) list_double_time_pane_t2_ParamLimits

0x9ab6,	// (0x000515f4) list_double_time_pane_t2

0x9ac8,	// (0x00051606) list_double_time_pane_t3_ParamLimits

0x9ac8,	// (0x00051606) list_double_time_pane_t3

0x9ada,	// (0x00051618) list_double_time_pane_t4_ParamLimits

0x9ada,	// (0x00051618) list_double_time_pane_t4

0x0003,

0xf638,	// (0x00057176) list_double_time_pane_t_ParamLimits

0xf638,	// (0x00057176) list_double_time_pane_t

0x9aec,	// (0x0005162a) list_setting_pane_g1_ParamLimits

0x9aec,	// (0x0005162a) list_setting_pane_g1

0x9af8,	// (0x00051636) list_setting_pane_g2_ParamLimits

0x9af8,	// (0x00051636) list_setting_pane_g2

0x0001,

0xf641,	// (0x0005717f) list_setting_pane_g_ParamLimits

0xf641,	// (0x0005717f) list_setting_pane_g

0x9b04,	// (0x00051642) list_setting_pane_t1_ParamLimits

0x9b04,	// (0x00051642) list_setting_pane_t1

0x9b1e,	// (0x0005165c) list_setting_pane_t2_ParamLimits

0x9b1e,	// (0x0005165c) list_setting_pane_t2

0x0002,

0xf646,	// (0x00057184) list_setting_pane_t_ParamLimits

0xf646,	// (0x00057184) list_setting_pane_t

0x9b5d,	// (0x0005169b) set_value_pane_cp_ParamLimits

0x9b5d,	// (0x0005169b) set_value_pane_cp

0x9b6b,	// (0x000516a9) list_setting_number_pane_g1_ParamLimits

0x9b6b,	// (0x000516a9) list_setting_number_pane_g1

0x9b77,	// (0x000516b5) list_setting_number_pane_g2_ParamLimits

0x9b77,	// (0x000516b5) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x0005718b) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x0005718b) list_setting_number_pane_g

0x9b83,	// (0x000516c1) list_setting_number_pane_t1_ParamLimits

0x9b83,	// (0x000516c1) list_setting_number_pane_t1

0x9b9c,	// (0x000516da) list_setting_number_pane_t2_ParamLimits

0x9b9c,	// (0x000516da) list_setting_number_pane_t2

0x9bb6,	// (0x000516f4) list_setting_number_pane_t3_ParamLimits

0x9bb6,	// (0x000516f4) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x00057190) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x00057190) list_setting_number_pane_t

0x9b5d,	// (0x0005169b) set_value_pane_ParamLimits

0x9b5d,	// (0x0005169b) set_value_pane

0xac55,	// (0x00052793) bg_set_opt_pane_ParamLimits

0xac55,	// (0x00052793) bg_set_opt_pane

0xec8b,	// (0x000567c9) set_value_pane_t1

0xac76,	// (0x000527b4) slider_set_pane_cp3

0xac7f,	// (0x000527bd) volume_small_pane_cp

0xac88,	// (0x000527c6) list_form_gen_pane

0xac91,	// (0x000527cf) scroll_pane_cp8

0x9bf9,	// (0x00051737) form_field_data_pane_ParamLimits

0x9bf9,	// (0x00051737) form_field_data_pane

0x9c16,	// (0x00051754) form_field_data_wide_pane_ParamLimits

0x9c16,	// (0x00051754) form_field_data_wide_pane

0x9c3a,	// (0x00051778) form_field_popup_pane_ParamLimits

0x9c3a,	// (0x00051778) form_field_popup_pane

0xeca9,	// (0x000567e7) form_field_popup_wide_pane_ParamLimits

0xeca9,	// (0x000567e7) form_field_popup_wide_pane

0xecca,	// (0x00056808) form_field_slider_pane_ParamLimits

0xecca,	// (0x00056808) form_field_slider_pane

0xecdd,	// (0x0005681b) form_field_slider_wide_pane_ParamLimits

0xecdd,	// (0x0005681b) form_field_slider_wide_pane

0xaca2,	// (0x000527e0) data_form_pane

0x9c66,	// (0x000517a4) form_field_data_pane_t1

0xacae,	// (0x000527ec) input_focus_pane

0xecf0,	// (0x0005682e) data_form_wide_pane

0xed0d,	// (0x0005684b) form_field_data_wide_pane_t1

0xa9d0,	// (0x0005250e) input_focus_pane_cp6

0x9c80,	// (0x000517be) form_field_popup_pane_t1

0xacae,	// (0x000527ec) input_focus_pane_cp7

0xacdc,	// (0x0005281a) list_form_pane

0xed37,	// (0x00056875) form_field_popup_wide_pane_t1

0xacae,	// (0x000527ec) input_focus_pane_cp8

0xace8,	// (0x00052826) list_form_wide_pane

0x9ca2,	// (0x000517e0) form_field_slider_pane_t1_ParamLimits

0x9ca2,	// (0x000517e0) form_field_slider_pane_t1

0x9cba,	// (0x000517f8) form_field_slider_pane_t2_ParamLimits

0x9cba,	// (0x000517f8) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x000571a0) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x000571a0) form_field_slider_pane_t

0xa31c,	// (0x00051e5a) input_focus_pane_cp9_ParamLimits

0xa31c,	// (0x00051e5a) input_focus_pane_cp9

0x9ccf,	// (0x0005180d) slider_cont_pane_ParamLimits

0x9ccf,	// (0x0005180d) slider_cont_pane

0xacf4,	// (0x00052832) form_field_slider_wide_pane_t1_ParamLimits

0xacf4,	// (0x00052832) form_field_slider_wide_pane_t1

0xed4c,	// (0x0005688a) form_field_slider_wide_pane_t2_ParamLimits

0xed4c,	// (0x0005688a) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x000571a5) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x000571a5) form_field_slider_wide_pane_t

0xa31c,	// (0x00051e5a) input_focus_pane_cp10_ParamLimits

0xa31c,	// (0x00051e5a) input_focus_pane_cp10

0x9ce3,	// (0x00051821) slider_cont_pane_cp1_ParamLimits

0x9ce3,	// (0x00051821) slider_cont_pane_cp1

0x9cf7,	// (0x00051835) slider_form_pane_cp

0xad06,	// (0x00052844) input_focus_pane_g1

0xad0e,	// (0x0005284c) input_focus_pane_g2

0xad16,	// (0x00052854) input_focus_pane_g3

0xad1e,	// (0x0005285c) input_focus_pane_g4

0xad26,	// (0x00052864) input_focus_pane_g5

0xad2e,	// (0x0005286c) input_focus_pane_g6

0xad36,	// (0x00052874) input_focus_pane_g7

0xad3e,	// (0x0005287c) input_focus_pane_g8

0xad46,	// (0x00052884) input_focus_pane_g9

0x9fe1,	// (0x00051b1f) input_focus_pane_g10

0x0009,

0xf66c,	// (0x000571aa) input_focus_pane_g

0x3823,	// (0x0004b361) wait_border_pane_g3_copy1

0x9cff,	// (0x0005183d) data_form_pane_t1

0x9fe1,	// (0x00051b1f) wait_anim_pane_g1_copy1

0x9df3,	// (0x00051931) data_form_wide_pane_t1

0xed5e,	// (0x0005689c) list_form_graphic_pane_cp_ParamLimits

0xed5e,	// (0x0005689c) list_form_graphic_pane_cp

0x477a,	// (0x0004c2b8) slider_form_pane_g1

0x4783,	// (0x0004c2c1) slider_form_pane_g2

0x0006,

0xf96a,	// (0x000574a8) slider_form_pane_g

0x9d1b,	// (0x00051859) list_form_graphic_pane_ParamLimits

0x9d1b,	// (0x00051859) list_form_graphic_pane

0xed70,	// (0x000568ae) list_form_graphic_pane_g1

0xed78,	// (0x000568b6) list_form_graphic_pane_t1_ParamLimits

0xed78,	// (0x000568b6) list_form_graphic_pane_t1

0xa35e,	// (0x00051e9c) list_highlight_pane_cp5_ParamLimits

0xa35e,	// (0x00051e9c) list_highlight_pane_cp5

0x9d2c,	// (0x0005186a) find_pane_g1

0xad4e,	// (0x0005288c) input_find_pane

0x9d35,	// (0x00051873) input_find_pane_g1_ParamLimits

0x9d35,	// (0x00051873) input_find_pane_g1

0x9d41,	// (0x0005187f) input_find_pane_t1_ParamLimits

0x9d41,	// (0x0005187f) input_find_pane_t1

0x9d56,	// (0x00051894) input_find_pane_t2_ParamLimits

0x9d56,	// (0x00051894) input_find_pane_t2

0x0001,

0xf681,	// (0x000571bf) input_find_pane_t_ParamLimits

0xf681,	// (0x000571bf) input_find_pane_t

0xad57,	// (0x00052895) input_focus_pane_cp5_ParamLimits

0xad57,	// (0x00052895) input_focus_pane_cp5

0xad76,	// (0x000528b4) bg_popup_window_pane_cp2_ParamLimits

0xad76,	// (0x000528b4) bg_popup_window_pane_cp2

0xad83,	// (0x000528c1) listscroll_menu_pane_ParamLimits

0xad83,	// (0x000528c1) listscroll_menu_pane

0xad8f,	// (0x000528cd) popup_submenu_window_ParamLimits

0xad8f,	// (0x000528cd) popup_submenu_window

0xadbf,	// (0x000528fd) find_popup_pane_g1

0xadc7,	// (0x00052905) input_popup_find_pane_cp

0xadd1,	// (0x0005290f) input_focus_pane_cp4_ParamLimits

0xadd1,	// (0x0005290f) input_focus_pane_cp4

0xaded,	// (0x0005292b) input_popup_find_pane_t1_ParamLimits

0xaded,	// (0x0005292b) input_popup_find_pane_t1

0xa0d1,	// (0x00051c0f) bg_popup_sub_pane_cp

0xae1b,	// (0x00052959) listscroll_popup_sub_pane

0xae23,	// (0x00052961) list_submenu_pane_ParamLimits

0xae23,	// (0x00052961) list_submenu_pane

0xae34,	// (0x00052972) scroll_pane_cp4

0xae3c,	// (0x0005297a) list_single_popup_submenu_pane_ParamLimits

0xae3c,	// (0x0005297a) list_single_popup_submenu_pane

0xae51,	// (0x0005298f) list_single_popup_submenu_pane_g1

0xae59,	// (0x00052997) list_single_popup_submenu_pane_t1_ParamLimits

0xae59,	// (0x00052997) list_single_popup_submenu_pane_t1

0xa31c,	// (0x00051e5a) bg_active_tab_pane_cp1_ParamLimits

0xa31c,	// (0x00051e5a) bg_active_tab_pane_cp1

0xae6e,	// (0x000529ac) tabs_2_active_pane_g1

0xae76,	// (0x000529b4) tabs_2_active_pane_t1

0xa31c,	// (0x00051e5a) bg_passive_tab_pane_cp1_ParamLimits

0xa31c,	// (0x00051e5a) bg_passive_tab_pane_cp1

0xae6e,	// (0x000529ac) tabs_2_passive_pane_g1

0xae76,	// (0x000529b4) tabs_2_passive_pane_t1

0xa35e,	// (0x00051e9c) bg_active_tab_pane_cp4

0xae88,	// (0x000529c6) tabs_2_long_active_pane_t1

0x2cef,	// (0x0004a82d) bg_passive_tab_pane_cp4

0x0fba,	// (0x00048af8) list_single_midp_graphic_pane_g4_ParamLimits

0xa35e,	// (0x00051e9c) bg_active_tab_pane_cp5

0xae9b,	// (0x000529d9) tabs_3_long_active_pane_t1

0x2cef,	// (0x0004a82d) bg_passive_tab_pane_cp5

0x0fba,	// (0x00048af8) list_single_midp_graphic_pane_g4

0xa35e,	// (0x00051e9c) bg_popup_window_pane_cp13_ParamLimits

0xa35e,	// (0x00051e9c) bg_popup_window_pane_cp13

0xaeb6,	// (0x000529f4) listscroll_popup_fast_pane_ParamLimits

0xaeb6,	// (0x000529f4) listscroll_popup_fast_pane

0xaec5,	// (0x00052a03) grid_popup_fast_pane_ParamLimits

0xaec5,	// (0x00052a03) grid_popup_fast_pane

0xaed7,	// (0x00052a15) scroll_pane_cp9_ParamLimits

0xaed7,	// (0x00052a15) scroll_pane_cp9

0x60e9,	// (0x0004dc27) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x60e9,	// (0x0004dc27) list_single_graphic_hl_pane_t1_cp2

0xaefb,	// (0x00052a39) input_focus_pane_cp20_ParamLimits

0xaefb,	// (0x00052a39) input_focus_pane_cp20

0xaf09,	// (0x00052a47) query_popup_data_pane_t1_ParamLimits

0xaf09,	// (0x00052a47) query_popup_data_pane_t1

0xaf1c,	// (0x00052a5a) query_popup_data_pane_t2_ParamLimits

0xaf1c,	// (0x00052a5a) query_popup_data_pane_t2

0xaf62,	// (0x00052aa0) query_popup_data_pane_t3_ParamLimits

0xaf62,	// (0x00052aa0) query_popup_data_pane_t3

0xc507,	// (0x00054045) query_popup_data_pane_t4_ParamLimits

0xc507,	// (0x00054045) query_popup_data_pane_t4

0xc543,	// (0x00054081) query_popup_data_pane_t5_ParamLimits

0xc543,	// (0x00054081) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x000571c4) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x000571c4) query_popup_data_pane_t

0xad06,	// (0x00052844) bg_set_opt_pane_g1

0xad0e,	// (0x0005284c) bg_set_opt_pane_g2

0xad16,	// (0x00052854) bg_set_opt_pane_g3

0xad1e,	// (0x0005285c) bg_set_opt_pane_g4

0xad26,	// (0x00052864) bg_set_opt_pane_g5

0xad2e,	// (0x0005286c) bg_set_opt_pane_g6

0xad36,	// (0x00052874) bg_set_opt_pane_g7

0xad3e,	// (0x0005287c) bg_set_opt_pane_g8

0xad46,	// (0x00052884) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x000571cf) bg_set_opt_pane_g

0x05df,	// (0x0004811d) control_top_pane_stacon_ParamLimits

0x05df,	// (0x0004811d) control_top_pane_stacon

0x0632,	// (0x00048170) signal_pane_stacon_ParamLimits

0x0632,	// (0x00048170) signal_pane_stacon

0x265d,	// (0x0004a19b) stacon_top_pane_g1_ParamLimits

0x265d,	// (0x0004a19b) stacon_top_pane_g1

0x0657,	// (0x00048195) title_pane_stacon_ParamLimits

0x0657,	// (0x00048195) title_pane_stacon

0x0681,	// (0x000481bf) uni_indicator_pane_stacon_ParamLimits

0x0681,	// (0x000481bf) uni_indicator_pane_stacon

0x0696,	// (0x000481d4) battery_pane_stacon_ParamLimits

0x0696,	// (0x000481d4) battery_pane_stacon

0x06da,	// (0x00048218) control_bottom_pane_stacon_ParamLimits

0x06da,	// (0x00048218) control_bottom_pane_stacon

0x06fd,	// (0x0004823b) navi_pane_stacon_ParamLimits

0x06fd,	// (0x0004823b) navi_pane_stacon

0x267f,	// (0x0004a1bd) stacon_bottom_pane_g1_ParamLimits

0x267f,	// (0x0004a1bd) stacon_bottom_pane_g1

0x00fb,	// (0x00047c39) aid_levels_signal_lsc_ParamLimits

0x00fb,	// (0x00047c39) aid_levels_signal_lsc

0x0112,	// (0x00047c50) signal_pane_stacon_g1_ParamLimits

0x0112,	// (0x00047c50) signal_pane_stacon_g1

0x0126,	// (0x00047c64) signal_pane_stacon_g2_ParamLimits

0x0126,	// (0x00047c64) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x000571e2) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x000571e2) signal_pane_stacon_g

0x015b,	// (0x00047c99) title_pane_stacon_t1_ParamLimits

0x015b,	// (0x00047c99) title_pane_stacon_t1

0xc587,	// (0x000540c5) uni_indicator_pane_stacon_g1

0xc591,	// (0x000540cf) uni_indicator_pane_stacon_g2

0xc59b,	// (0x000540d9) uni_indicator_pane_stacon_g3

0xc5a5,	// (0x000540e3) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x000571ee) uni_indicator_pane_stacon_g

0x0180,	// (0x00047cbe) control_top_pane_stacon_g1

0x0188,	// (0x00047cc6) control_top_pane_stacon_t1_ParamLimits

0x0188,	// (0x00047cc6) control_top_pane_stacon_t1

0x01bf,	// (0x00047cfd) aid_levels_battery_lsc_ParamLimits

0x01bf,	// (0x00047cfd) aid_levels_battery_lsc

0x01d7,	// (0x00047d15) battery_pane_stacon_g1_ParamLimits

0x01d7,	// (0x00047d15) battery_pane_stacon_g1

0x01e9,	// (0x00047d27) battery_pane_stacon_g2_ParamLimits

0x01e9,	// (0x00047d27) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x000571f7) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x000571f7) battery_pane_stacon_g

0x0227,	// (0x00047d65) navi_icon_pane_stacon

0x023b,	// (0x00047d79) navi_navi_pane_stacon

0x0227,	// (0x00047d65) navi_text_pane_stacon

0x0251,	// (0x00047d8f) control_bottom_pane_stacon_g1

0x0259,	// (0x00047d97) control_bottom_pane_stacon_t1_ParamLimits

0x0259,	// (0x00047d97) control_bottom_pane_stacon_t1

0xafa3,	// (0x00052ae1) grid_app_pane_ParamLimits

0xafa3,	// (0x00052ae1) grid_app_pane

0xafdb,	// (0x00052b19) scroll_pane_cp15_ParamLimits

0xafdb,	// (0x00052b19) scroll_pane_cp15

0xaff0,	// (0x00052b2e) cell_app_pane_ParamLimits

0xaff0,	// (0x00052b2e) cell_app_pane

0xb03b,	// (0x00052b79) cell_app_pane_g1_ParamLimits

0xb03b,	// (0x00052b79) cell_app_pane_g1

0xe2d4,	// (0x00055e12) cell_app_pane_g2_ParamLimits

0xe2d4,	// (0x00055e12) cell_app_pane_g2

0x0001,

0xf6be,	// (0x000571fc) cell_app_pane_g_ParamLimits

0xf6be,	// (0x000571fc) cell_app_pane_g

0xb05f,	// (0x00052b9d) cell_app_pane_t1_ParamLimits

0xb05f,	// (0x00052b9d) cell_app_pane_t1

0xe2e0,	// (0x00055e1e) grid_highlight_pane_ParamLimits

0xe2e0,	// (0x00055e1e) grid_highlight_pane

0xad06,	// (0x00052844) cell_highlight_pane_g1

0xad0e,	// (0x0005284c) cell_highlight_pane_g2

0xad16,	// (0x00052854) cell_highlight_pane_g3

0xad1e,	// (0x0005285c) cell_highlight_pane_g4

0xad26,	// (0x00052864) cell_highlight_pane_g5

0xad2e,	// (0x0005286c) cell_highlight_pane_g6

0xad36,	// (0x00052874) cell_highlight_pane_g7

0xad3e,	// (0x0005287c) cell_highlight_pane_g8

0xad46,	// (0x00052884) cell_highlight_pane_g9

0x9fe1,	// (0x00051b1f) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x000571aa) cell_highlight_pane_g

0xe2f1,	// (0x00055e2f) bg_scroll_pane

0x0359,	// (0x00047e97) scroll_handle_pane

0xe338,	// (0x00055e76) scroll_bg_pane_g1

0xe34d,	// (0x00055e8b) scroll_bg_pane_g2

0xe365,	// (0x00055ea3) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x00057201) scroll_bg_pane_g

0xe37a,	// (0x00055eb8) scroll_handle_focus_pane_ParamLimits

0xe37a,	// (0x00055eb8) scroll_handle_focus_pane

0xe338,	// (0x00055e76) scroll_handle_pane_g1

0xe387,	// (0x00055ec5) scroll_handle_pane_g2

0xe365,	// (0x00055ea3) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x00057208) scroll_handle_pane_g

0xadd1,	// (0x0005290f) bg_popup_sub_pane_cp21_ParamLimits

0xadd1,	// (0x0005290f) bg_popup_sub_pane_cp21

0xe39b,	// (0x00055ed9) popup_fep_japan_predictive_window_t1_ParamLimits

0xe39b,	// (0x00055ed9) popup_fep_japan_predictive_window_t1

0xe3b2,	// (0x00055ef0) popup_fep_japan_predictive_window_t2_ParamLimits

0xe3b2,	// (0x00055ef0) popup_fep_japan_predictive_window_t2

0xe3e5,	// (0x00055f23) popup_fep_japan_predictive_window_t3_ParamLimits

0xe3e5,	// (0x00055f23) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x0005720f) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x0005720f) popup_fep_japan_predictive_window_t

0xa0d1,	// (0x00051c0f) bg_popup_sub_pane_cp23

0xe41c,	// (0x00055f5a) listscroll_japin_cand_pane

0xe424,	// (0x00055f62) popup_fep_japan_candidate_window_t1

0xe432,	// (0x00055f70) candidate_pane_ParamLimits

0xe432,	// (0x00055f70) candidate_pane

0xe444,	// (0x00055f82) scroll_pane_cp30

0xe44e,	// (0x00055f8c) list_single_popup_jap_candidate_pane_ParamLimits

0xe44e,	// (0x00055f8c) list_single_popup_jap_candidate_pane

0xa0d1,	// (0x00051c0f) list_highlight_pane_cp30

0xe462,	// (0x00055fa0) list_single_popup_jap_candidate_pane_t1

0xb099,	// (0x00052bd7) level_1_signal

0xb0ab,	// (0x00052be9) level_2_signal

0xb0be,	// (0x00052bfc) level_3_signal

0xb0d1,	// (0x00052c0f) level_4_signal

0xb0e4,	// (0x00052c22) level_5_signal

0xb0f7,	// (0x00052c35) level_6_signal

0xb10a,	// (0x00052c48) level_7_signal

0xb099,	// (0x00052bd7) level_1_battery

0xb0ab,	// (0x00052be9) level_2_battery

0xb0be,	// (0x00052bfc) level_3_battery

0xb0d1,	// (0x00052c0f) level_4_battery

0xb0e4,	// (0x00052c22) level_5_battery

0xb0f7,	// (0x00052c35) level_6_battery

0xb10a,	// (0x00052c48) level_7_battery

0xe489,	// (0x00055fc7) list_menu_pane_ParamLimits

0xe489,	// (0x00055fc7) list_menu_pane

0xe49f,	// (0x00055fdd) scroll_pane_cp25_ParamLimits

0xe49f,	// (0x00055fdd) scroll_pane_cp25

0xe4b8,	// (0x00055ff6) list_double2_graphic_pane_cp2_ParamLimits

0xe4b8,	// (0x00055ff6) list_double2_graphic_pane_cp2

0xe4b8,	// (0x00055ff6) list_double2_large_graphic_pane_cp2_ParamLimits

0xe4b8,	// (0x00055ff6) list_double2_large_graphic_pane_cp2

0xe4b8,	// (0x00055ff6) list_double2_pane_cp2_ParamLimits

0xe4b8,	// (0x00055ff6) list_double2_pane_cp2

0xe4b8,	// (0x00055ff6) list_double_graphic_pane_cp2_ParamLimits

0xe4b8,	// (0x00055ff6) list_double_graphic_pane_cp2

0xe4b8,	// (0x00055ff6) list_double_large_graphic_pane_cp2_ParamLimits

0xe4b8,	// (0x00055ff6) list_double_large_graphic_pane_cp2

0xe4b8,	// (0x00055ff6) list_double_number_pane_cp2_ParamLimits

0xe4b8,	// (0x00055ff6) list_double_number_pane_cp2

0xe4b8,	// (0x00055ff6) list_double_pane_cp2_ParamLimits

0xe4b8,	// (0x00055ff6) list_double_pane_cp2

0xb11d,	// (0x00052c5b) list_single_2graphic_pane_cp2_ParamLimits

0xb11d,	// (0x00052c5b) list_single_2graphic_pane_cp2

0xb11d,	// (0x00052c5b) list_single_graphic_heading_pane_cp2_ParamLimits

0xb11d,	// (0x00052c5b) list_single_graphic_heading_pane_cp2

0xb11d,	// (0x00052c5b) list_single_graphic_pane_cp2_ParamLimits

0xb11d,	// (0x00052c5b) list_single_graphic_pane_cp2

0xb11d,	// (0x00052c5b) list_single_heading_pane_cp2_ParamLimits

0xb11d,	// (0x00052c5b) list_single_heading_pane_cp2

0xe4c8,	// (0x00056006) list_single_large_graphic_pane_cp2_ParamLimits

0xe4c8,	// (0x00056006) list_single_large_graphic_pane_cp2

0xb11d,	// (0x00052c5b) list_single_number_heading_pane_cp2_ParamLimits

0xb11d,	// (0x00052c5b) list_single_number_heading_pane_cp2

0xb11d,	// (0x00052c5b) list_single_number_pane_cp2_ParamLimits

0xb11d,	// (0x00052c5b) list_single_number_pane_cp2

0xb131,	// (0x00052c6f) list_single_pane_cp2_ParamLimits

0xb131,	// (0x00052c6f) list_single_pane_cp2

0xe4e1,	// (0x0005601f) bg_popup_sub_pane_cp22

0x050b,	// (0x00048049) popup_side_volume_key_window_g1

0x0535,	// (0x00048073) popup_side_volume_key_window_t1

0x0553,	// (0x00048091) volume_small_pane_cp1

0xa31c,	// (0x00051e5a) bg_popup_sub_pane_cp24_ParamLimits

0xa31c,	// (0x00051e5a) bg_popup_sub_pane_cp24

0xe4f7,	// (0x00056035) fep_china_uni_candidate_pane_ParamLimits

0xe4f7,	// (0x00056035) fep_china_uni_candidate_pane

0xe50b,	// (0x00056049) fep_china_uni_entry_pane

0xe51b,	// (0x00056059) popup_fep_china_uni_window_g1

0xe537,	// (0x00056075) fep_china_uni_entry_pane_g1

0xe541,	// (0x0005607f) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x00057240) fep_china_uni_entry_pane_g

0xe54b,	// (0x00056089) fep_entry_item_pane

0xe555,	// (0x00056093) fep_candidate_item_pane

0xe55d,	// (0x0005609b) fep_china_uni_candidate_pane_g1

0xe567,	// (0x000560a5) fep_china_uni_candidate_pane_g2

0xe56f,	// (0x000560ad) fep_china_uni_candidate_pane_g3

0xe577,	// (0x000560b5) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x00057245) fep_china_uni_candidate_pane_g

0x9fe1,	// (0x00051b1f) fep_entry_item_pane_g1

0xe581,	// (0x000560bf) fep_entry_item_pane_t1_ParamLimits

0xe581,	// (0x000560bf) fep_entry_item_pane_t1

0xe597,	// (0x000560d5) fep_candidate_item_pane_t1_ParamLimits

0xe597,	// (0x000560d5) fep_candidate_item_pane_t1

0xe5ac,	// (0x000560ea) fep_candidate_item_pane_t2_ParamLimits

0xe5ac,	// (0x000560ea) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x0005724e) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x0005724e) fep_candidate_item_pane_t

0xa35e,	// (0x00051e9c) list_highlight_pane_cp31_ParamLimits

0xa35e,	// (0x00051e9c) list_highlight_pane_cp31

0xe5be,	// (0x000560fc) level_1_signal_lsc

0xe5c7,	// (0x00056105) level_2_signal_lsc

0xe5d0,	// (0x0005610e) level_3_signal_lsc

0xe5d9,	// (0x00056117) level_4_signal_lsc

0xe5e2,	// (0x00056120) level_5_signal_lsc

0xe5eb,	// (0x00056129) level_6_signal_lsc

0xe5f4,	// (0x00056132) level_7_signal_lsc

0xe5f4,	// (0x00056132) level_1_battery_lsc

0xe5fd,	// (0x0005613b) level_2_battery_lsc

0xe606,	// (0x00056144) level_3_battery_lsc

0xe60f,	// (0x0005614d) level_4_battery_lsc

0xe618,	// (0x00056156) level_5_battery_lsc

0xe621,	// (0x0005615f) level_6_battery_lsc

0xe5be,	// (0x000560fc) level_7_battery_lsc

0xe62a,	// (0x00056168) scroll_handle_focus_pane_g1

0xe633,	// (0x00056171) scroll_handle_focus_pane_g2

0xe63c,	// (0x0005617a) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x00057253) scroll_handle_focus_pane_g

0x9d6b,	// (0x000518a9) list_single_2graphic_pane_g1_ParamLimits

0x9d6b,	// (0x000518a9) list_single_2graphic_pane_g1

0xac18,	// (0x00052756) list_single_2graphic_pane_g2_ParamLimits

0xac18,	// (0x00052756) list_single_2graphic_pane_g2

0x0f89,	// (0x00048ac7) list_single_2graphic_pane_g3_ParamLimits

0x0f89,	// (0x00048ac7) list_single_2graphic_pane_g3

0xb1c0,	// (0x00052cfe) list_single_2graphic_pane_g4_ParamLimits

0xb1c0,	// (0x00052cfe) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x0005725a) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x0005725a) list_single_2graphic_pane_g

0x9d77,	// (0x000518b5) list_single_2graphic_pane_t1_ParamLimits

0x9d77,	// (0x000518b5) list_single_2graphic_pane_t1

0xb1d1,	// (0x00052d0f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb1d1,	// (0x00052d0f) list_double2_graphic_large_graphic_pane_g1

0x99d1,	// (0x0005150f) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x99d1,	// (0x0005150f) list_double2_graphic_large_graphic_pane_g2

0x992a,	// (0x00051468) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x992a,	// (0x00051468) list_double2_graphic_large_graphic_pane_g3

0x9da5,	// (0x000518e3) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9da5,	// (0x000518e3) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x00057263) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x00057263) list_double2_graphic_large_graphic_pane_g

0x9db1,	// (0x000518ef) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9db1,	// (0x000518ef) list_double2_graphic_large_graphic_pane_t1

0x9dc7,	// (0x00051905) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9dc7,	// (0x00051905) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x0005726c) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x0005726c) list_double2_graphic_large_graphic_pane_t

0x2742,	// (0x0004a280) popup_fast_swap_window_ParamLimits

0x2742,	// (0x0004a280) popup_fast_swap_window

0x2760,	// (0x0004a29e) popup_side_volume_key_window

0x277e,	// (0x0004a2bc) stacon_top_pane

0x2788,	// (0x0004a2c6) status_pane_ParamLimits

0x2788,	// (0x0004a2c6) status_pane

0x9fd7,	// (0x00051b15) status_small_pane

0xa0d1,	// (0x00051c0f) control_pane

0xa0d1,	// (0x00051c0f) stacon_bottom_pane

0xac91,	// (0x000527cf) scroll_pane_cp121

0xac88,	// (0x000527c6) set_content_pane

0xb1e3,	// (0x00052d21) bg_active_tab_pane_g1_cp1

0x0593,	// (0x000480d1) bg_active_tab_pane_g2_cp1

0xb1ec,	// (0x00052d2a) bg_active_tab_pane_g3_cp1

0xb1e3,	// (0x00052d21) bg_passive_tab_pane_g1_cp1

0x0593,	// (0x000480d1) bg_passive_tab_pane_g2_cp1

0xb1ec,	// (0x00052d2a) bg_passive_tab_pane_g3_cp1

0xb1f5,	// (0x00052d33) bg_active_tab_pane_g1_cp2

0x0593,	// (0x000480d1) bg_active_tab_pane_g2_cp2

0xb1fe,	// (0x00052d3c) bg_active_tab_pane_g3_cp2

0xb1f5,	// (0x00052d33) bg_passive_tab_pane_g1_cp2

0x0593,	// (0x000480d1) bg_passive_tab_pane_g2_cp2

0xb1fe,	// (0x00052d3c) bg_passive_tab_pane_g3_cp2

0xb207,	// (0x00052d45) bg_active_tab_pane_g1_cp3

0x0593,	// (0x000480d1) bg_active_tab_pane_g2_cp3

0xb210,	// (0x00052d4e) bg_active_tab_pane_g3_cp3

0xb207,	// (0x00052d45) bg_passive_tab_pane_g1_cp3

0x0593,	// (0x000480d1) bg_passive_tab_pane_g2_cp3

0xb210,	// (0x00052d4e) bg_passive_tab_pane_g3_cp3

0xb219,	// (0x00052d57) bg_active_tab_pane_g1_cp4

0x0593,	// (0x000480d1) bg_active_tab_pane_g2_cp4

0xb222,	// (0x00052d60) bg_active_tab_pane_g3_cp4

0xb219,	// (0x00052d57) bg_passive_tab_pane_g1_cp4

0x0593,	// (0x000480d1) bg_passive_tab_pane_g2_cp4

0xb222,	// (0x00052d60) bg_passive_tab_pane_g3_cp4

0x269b,	// (0x0004a1d9) bg_active_tab_pane_g1_cp5

0x0593,	// (0x000480d1) bg_active_tab_pane_g2_cp5

0x26a4,	// (0x0004a1e2) bg_active_tab_pane_g3_cp5

0x269b,	// (0x0004a1d9) bg_passive_tab_pane_g1_cp5

0x0593,	// (0x000480d1) bg_passive_tab_pane_g2_cp5

0x26a4,	// (0x0004a1e2) bg_passive_tab_pane_g3_cp5

0x4d91,	// (0x0004c8cf) list_set_graphic_pane_ParamLimits

0x4d91,	// (0x0004c8cf) list_set_graphic_pane

0xa0d1,	// (0x00051c0f) bg_set_opt_pane_cp4

0x26c3,	// (0x0004a201) list_set_graphic_pane_g1_ParamLimits

0x26c3,	// (0x0004a201) list_set_graphic_pane_g1

0x26cf,	// (0x0004a20d) list_set_graphic_pane_g2_ParamLimits

0x26cf,	// (0x0004a20d) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x00057271) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x00057271) list_set_graphic_pane_g

0x0009,

0xfabd,	// (0x000575fb) volume_small_pane_cp_g

0x26f3,	// (0x0004a231) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x26f3,	// (0x0004a231) list_double2_large_graphic_pane_g1_cp2

0x2701,	// (0x0004a23f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2701,	// (0x0004a23f) list_double2_large_graphic_pane_g2_cp2

0x2712,	// (0x0004a250) list_double2_large_graphic_pane_g3_cp2

0x271a,	// (0x0004a258) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x271a,	// (0x0004a258) list_double2_large_graphic_pane_t1_cp2

0x2730,	// (0x0004a26e) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2730,	// (0x0004a26e) list_double2_large_graphic_pane_t2_cp2

0x4307,	// (0x0004be45) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4307,	// (0x0004be45) list_double_large_graphic_pane_g1_cp2

0x431a,	// (0x0004be58) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x431a,	// (0x0004be58) list_double_large_graphic_pane_g2_cp2

0x289a,	// (0x0004a3d8) list_double_large_graphic_pane_g3_cp2

0x432b,	// (0x0004be69) list_double_large_graphic_pane_g4_cp

0x4333,	// (0x0004be71) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4333,	// (0x0004be71) list_double_large_graphic_pane_t1_cp2

0x434a,	// (0x0004be88) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x434a,	// (0x0004be88) list_double_large_graphic_pane_t2_cp2

0x2796,	// (0x0004a2d4) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2796,	// (0x0004a2d4) list_double2_graphic_pane_g1_cp2

0x27a4,	// (0x0004a2e2) list_double2_graphic_pane_g2_cp2_ParamLimits

0x27a4,	// (0x0004a2e2) list_double2_graphic_pane_g2_cp2

0x27b5,	// (0x0004a2f3) list_double2_graphic_pane_g3_cp2

0x27bf,	// (0x0004a2fd) list_double2_graphic_pane_t1_cp2_ParamLimits

0x27bf,	// (0x0004a2fd) list_double2_graphic_pane_t1_cp2

0x27d5,	// (0x0004a313) list_double2_graphic_pane_t2_cp2_ParamLimits

0x27d5,	// (0x0004a313) list_double2_graphic_pane_t2_cp2

0x2651,	// (0x0004a18f) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2651,	// (0x0004a18f) list_single_number_heading_pane_g1_cp2

0x27e7,	// (0x0004a325) list_single_number_heading_pane_g2_cp2

0x27ef,	// (0x0004a32d) list_single_number_heading_pane_t1_cp2_ParamLimits

0x27ef,	// (0x0004a32d) list_single_number_heading_pane_t1_cp2

0x2805,	// (0x0004a343) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2805,	// (0x0004a343) list_single_number_heading_pane_t2_cp2

0x2819,	// (0x0004a357) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2819,	// (0x0004a357) list_single_number_heading_pane_t3_cp2

0x2651,	// (0x0004a18f) list_single_heading_pane_g1_cp2_ParamLimits

0x2651,	// (0x0004a18f) list_single_heading_pane_g1_cp2

0x27e7,	// (0x0004a325) list_single_heading_pane_g2_cp2

0x27ef,	// (0x0004a32d) list_single_heading_pane_t1_cp2_ParamLimits

0x27ef,	// (0x0004a32d) list_single_heading_pane_t1_cp2

0x4101,	// (0x0004bc3f) list_single_heading_pane_t2_cp2_ParamLimits

0x4101,	// (0x0004bc3f) list_single_heading_pane_t2_cp2

0x4049,	// (0x0004bb87) list_double_graphic_pane_g1_cp2_ParamLimits

0x4049,	// (0x0004bb87) list_double_graphic_pane_g1_cp2

0x4055,	// (0x0004bb93) list_double_graphic_pane_g2_cp2_ParamLimits

0x4055,	// (0x0004bb93) list_double_graphic_pane_g2_cp2

0x4064,	// (0x0004bba2) list_double_graphic_pane_g3_cp2

0x406c,	// (0x0004bbaa) list_double_graphic_pane_t1_cp2_ParamLimits

0x406c,	// (0x0004bbaa) list_double_graphic_pane_t1_cp2

0x4082,	// (0x0004bbc0) list_double_graphic_pane_t2_cp2_ParamLimits

0x4082,	// (0x0004bbc0) list_double_graphic_pane_t2_cp2

0x288e,	// (0x0004a3cc) list_double_number_pane_g1_cp2_ParamLimits

0x288e,	// (0x0004a3cc) list_double_number_pane_g1_cp2

0x289a,	// (0x0004a3d8) list_double_number_pane_g2_cp2

0x400d,	// (0x0004bb4b) list_double_number_pane_t1_cp2_ParamLimits

0x400d,	// (0x0004bb4b) list_double_number_pane_t1_cp2

0x4021,	// (0x0004bb5f) list_double_number_pane_t2_cp2_ParamLimits

0x4021,	// (0x0004bb5f) list_double_number_pane_t2_cp2

0x4037,	// (0x0004bb75) list_double_number_pane_t3_cp2_ParamLimits

0x4037,	// (0x0004bb75) list_double_number_pane_t3_cp2

0x3ef6,	// (0x0004ba34) list_single_graphic_pane_g1_cp2_ParamLimits

0x3ef6,	// (0x0004ba34) list_single_graphic_pane_g1_cp2

0x28ff,	// (0x0004a43d) list_single_graphic_pane_g2_cp2_ParamLimits

0x28ff,	// (0x0004a43d) list_single_graphic_pane_g2_cp2

0x290b,	// (0x0004a449) list_single_graphic_pane_g3_cp2

0x3ecc,	// (0x0004ba0a) list_single_graphic_pane_t1_cp2_ParamLimits

0x3ecc,	// (0x0004ba0a) list_single_graphic_pane_t1_cp2

0x28ff,	// (0x0004a43d) list_single_number_pane_g1_cp2_ParamLimits

0x28ff,	// (0x0004a43d) list_single_number_pane_g1_cp2

0x290b,	// (0x0004a449) list_single_number_pane_g2_cp2

0x3ecc,	// (0x0004ba0a) list_single_number_pane_t1_cp2_ParamLimits

0x3ecc,	// (0x0004ba0a) list_single_number_pane_t1_cp2

0x3ee2,	// (0x0004ba20) list_single_number_pane_t2_cp2_ParamLimits

0x3ee2,	// (0x0004ba20) list_single_number_pane_t2_cp2

0x2701,	// (0x0004a23f) list_double2_pane_g1_cp2_ParamLimits

0x2701,	// (0x0004a23f) list_double2_pane_g1_cp2

0x2712,	// (0x0004a250) list_double2_pane_g2_cp2

0x2866,	// (0x0004a3a4) list_double2_pane_t1_cp2_ParamLimits

0x2866,	// (0x0004a3a4) list_double2_pane_t1_cp2

0x287c,	// (0x0004a3ba) list_double2_pane_t2_cp2_ParamLimits

0x287c,	// (0x0004a3ba) list_double2_pane_t2_cp2

0x288e,	// (0x0004a3cc) list_double_pane_g1_cp2_ParamLimits

0x288e,	// (0x0004a3cc) list_double_pane_g1_cp2

0x289a,	// (0x0004a3d8) list_double_pane_g2_cp2

0x28a2,	// (0x0004a3e0) list_double_pane_t1_cp2_ParamLimits

0x28a2,	// (0x0004a3e0) list_double_pane_t1_cp2

0x28b8,	// (0x0004a3f6) list_double_pane_t2_cp2_ParamLimits

0x28b8,	// (0x0004a3f6) list_double_pane_t2_cp2

0x28ef,	// (0x0004a42d) list_single_pane_cp2_g3

0x28ff,	// (0x0004a43d) list_single_pane_g1_cp2_ParamLimits

0x28ff,	// (0x0004a43d) list_single_pane_g1_cp2

0x290b,	// (0x0004a449) list_single_pane_g2_cp2

0x2913,	// (0x0004a451) list_single_pane_t1_cp2_ParamLimits

0x2913,	// (0x0004a451) list_single_pane_t1_cp2

0x292b,	// (0x0004a469) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x292b,	// (0x0004a469) list_single_large_graphic_pane_g1_cp2

0x2939,	// (0x0004a477) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2939,	// (0x0004a477) list_single_large_graphic_pane_g2_cp2

0x2945,	// (0x0004a483) list_single_large_graphic_pane_g3_cp2

0x294d,	// (0x0004a48b) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x294d,	// (0x0004a48b) list_single_large_graphic_pane_g4_cp1

0x2967,	// (0x0004a4a5) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2967,	// (0x0004a4a5) list_single_large_graphic_pane_t1_cp2

0x3e96,	// (0x0004b9d4) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3e96,	// (0x0004b9d4) list_single_graphic_heading_pane_g1_cp2

0x3e63,	// (0x0004b9a1) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x3e63,	// (0x0004b9a1) list_single_graphic_heading_pane_g4_cp2

0x290b,	// (0x0004a449) list_single_graphic_heading_pane_g5_cp2

0x3ea2,	// (0x0004b9e0) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3ea2,	// (0x0004b9e0) list_single_graphic_heading_pane_t1_cp2

0x3eb8,	// (0x0004b9f6) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x3eb8,	// (0x0004b9f6) list_single_graphic_heading_pane_t2_cp2

0x3e57,	// (0x0004b995) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3e57,	// (0x0004b995) list_single_2graphic_pane_g1_cp2

0x3e63,	// (0x0004b9a1) list_single_2graphic_pane_g2_cp2_ParamLimits

0x3e63,	// (0x0004b9a1) list_single_2graphic_pane_g2_cp2

0x290b,	// (0x0004a449) list_single_2graphic_pane_g3_cp2

0x3e74,	// (0x0004b9b2) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3e74,	// (0x0004b9b2) list_single_2graphic_pane_g4_cp2

0x3e80,	// (0x0004b9be) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3e80,	// (0x0004b9be) list_single_2graphic_pane_t1_cp2

0x9fe1,	// (0x00051b1f) list_highlight_pane_g10_cp1

0x3a2f,	// (0x0004b56d) list_highlight_pane_g1_cp1

0x3a37,	// (0x0004b575) list_highlight_pane_g2_cp1

0x3a3f,	// (0x0004b57d) list_highlight_pane_g3_cp1

0x3a47,	// (0x0004b585) list_highlight_pane_g4_cp1

0x3a4f,	// (0x0004b58d) list_highlight_pane_g5_cp1

0x3a57,	// (0x0004b595) list_highlight_pane_g6_cp1

0x3a5f,	// (0x0004b59d) list_highlight_pane_g7_cp1

0x3a67,	// (0x0004b5a5) list_highlight_pane_g8_cp1

0x3a6f,	// (0x0004b5ad) list_highlight_pane_g9_cp1

0xca5f,	// (0x0005459d) form_field_slider_pane_t3

0xca6d,	// (0x000545ab) form_field_slider_pane_t4

0x396b,	// (0x0004b4a9) slider_form_pane_ParamLimits

0x396b,	// (0x0004b4a9) slider_form_pane

0xa0d1,	// (0x00051c0f) control_abbreviations

0xa0d1,	// (0x00051c0f) control_conventions

0xa0d1,	// (0x00051c0f) control_definitions

0xa0d1,	// (0x00051c0f) format_table_attribute

0x4157,	// (0x0004bc95) bg_popup_preview_window_pane_g9

0xa0d1,	// (0x00051c0f) format_table_data2

0xa0d1,	// (0x00051c0f) format_table_data3

0xa0d1,	// (0x00051c0f) format_table_data_example

0x0008,

0xa0d1,	// (0x00051c0f) intro_purpose

0xf8ca,	// (0x00057408) bg_popup_preview_window_pane_g

0xa0d1,	// (0x00051c0f) texts_category

0xa0d1,	// (0x00051c0f) texts_graphics

0x297d,	// (0x0004a4bb) text_digital

0x298c,	// (0x0004a4ca) text_primary

0x299b,	// (0x0004a4d9) text_primary_small

0x29aa,	// (0x0004a4e8) text_secondary

0x29b9,	// (0x0004a4f7) text_title

0x48ba,	// (0x0004c3f8) bg_passive_tab_pane_g1_cp3_srt

0x0593,	// (0x000480d1) bg_passive_tab_pane_g2_cp3_srt

0x48c3,	// (0x0004c401) bg_passive_tab_pane_g3_cp3_srt

0xa31c,	// (0x00051e5a) bg_active_tab_pane_cp3_srt_ParamLimits

0xa31c,	// (0x00051e5a) bg_active_tab_pane_cp3_srt

0x48cc,	// (0x0004c40a) tabs_4_active_pane_srt_g1

0xce47,	// (0x00054985) tabs_4_active_pane_srt_t1_ParamLimits

0xce47,	// (0x00054985) tabs_4_active_pane_srt_t1

0x48ba,	// (0x0004c3f8) bg_active_tab_pane_g1_cp3_copy1

0x0593,	// (0x000480d1) bg_active_tab_pane_g2_cp3_copy1

0x48c3,	// (0x0004c401) bg_active_tab_pane_g3_cp3_copy1

0xa35e,	// (0x00051e9c) tabs_2_long_active_pane_srt_ParamLimits

0xa35e,	// (0x00051e9c) tabs_2_long_active_pane_srt

0xa35e,	// (0x00051e9c) tabs_2_long_passive_pane_srt_ParamLimits

0xa35e,	// (0x00051e9c) tabs_2_long_passive_pane_srt

0x2cef,	// (0x0004a82d) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2cef,	// (0x0004a82d) bg_passive_tab_pane_cp4_srt

0x4591,	// (0x0004c0cf) bg_passive_tab_pane_g1_cp4_srt

0x0593,	// (0x000480d1) bg_passive_tab_pane_g2_cp4_srt

0x459a,	// (0x0004c0d8) bg_passive_tab_pane_g3_cp4_srt

0xa35e,	// (0x00051e9c) bg_active_tab_pane_cp4_srt_ParamLimits

0xa35e,	// (0x00051e9c) bg_active_tab_pane_cp4_srt

0xcc3f,	// (0x0005477d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xcc3f,	// (0x0005477d) tabs_2_long_active_pane_srt_t1

0x4591,	// (0x0004c0cf) bg_active_tab_pane_g1_cp4_srt

0x0593,	// (0x000480d1) bg_active_tab_pane_g2_cp4_srt

0x459a,	// (0x0004c0d8) bg_active_tab_pane_g3_cp4_srt

0xa31c,	// (0x00051e5a) tabs_3_long_active_pane_srt_ParamLimits

0xa31c,	// (0x00051e5a) tabs_3_long_active_pane_srt

0xa31c,	// (0x00051e5a) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xa31c,	// (0x00051e5a) tabs_3_long_passive_pane_cp_srt

0xa31c,	// (0x00051e5a) tabs_3_long_passive_pane_srt_ParamLimits

0xa31c,	// (0x00051e5a) tabs_3_long_passive_pane_srt

0x2cef,	// (0x0004a82d) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2cef,	// (0x0004a82d) bg_passive_tab_pane_cp5_srt

0x269b,	// (0x0004a1d9) bg_passive_tab_pane_g1_cp5_srt

0x0593,	// (0x000480d1) bg_passive_tab_pane_g2_cp5_srt

0x26a4,	// (0x0004a1e2) bg_passive_tab_pane_g3_cp5_srt

0xa35e,	// (0x00051e9c) bg_active_tab_pane_cp5_srt_ParamLimits

0xa35e,	// (0x00051e9c) bg_active_tab_pane_cp5_srt

0xcc29,	// (0x00054767) tabs_3_long_active_pane_srt_t1_ParamLimits

0xcc29,	// (0x00054767) tabs_3_long_active_pane_srt_t1

0x269b,	// (0x0004a1d9) bg_active_tab_pane_g1_cp5_srt

0x0593,	// (0x000480d1) bg_active_tab_pane_g2_cp5_srt

0x26a4,	// (0x0004a1e2) bg_active_tab_pane_g3_cp5_srt

0x4571,	// (0x0004c0af) navi_text_pane_srt_t1

0x4569,	// (0x0004c0a7) navi_icon_pane_srt_g1

0x2b91,	// (0x0004a6cf) midp_editing_number_pane_srt

0x29c8,	// (0x0004a506) midp_ticker_pane_srt

0x2b99,	// (0x0004a6d7) midp_ticker_pane_srt_g1

0x2ba1,	// (0x0004a6df) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x00057290) midp_ticker_pane_srt_g

0x2ba9,	// (0x0004a6e7) midp_ticker_pane_srt_t1

0x455a,	// (0x0004c098) midp_editing_number_pane_t1_copy1

0xb22b,	// (0x00052d69) listscroll_midp_pane

0xb22b,	// (0x00052d69) midp_form_pane

0x2a3f,	// (0x0004a57d) midp_info_popup_window_ParamLimits

0x2a3f,	// (0x0004a57d) midp_info_popup_window

0xadd1,	// (0x0005290f) bg_popup_sub_pane_cp50_ParamLimits

0xadd1,	// (0x0005290f) bg_popup_sub_pane_cp50

0x3651,	// (0x0004b18f) listscroll_midp_info_pane_ParamLimits

0x3651,	// (0x0004b18f) listscroll_midp_info_pane

0x3631,	// (0x0004b16f) listscroll_form_midp_pane_ParamLimits

0x3631,	// (0x0004b16f) listscroll_form_midp_pane

0x363d,	// (0x0004b17b) scroll_bar_cp050

0x3631,	// (0x0004b16f) list_midp_pane

0x536e,	// (0x0004ceac) signal_pane_g2_cp

0x354b,	// (0x0004b089) listscroll_midp_info_pane_t1_ParamLimits

0x354b,	// (0x0004b089) listscroll_midp_info_pane_t1

0x3563,	// (0x0004b0a1) listscroll_midp_info_pane_t2_ParamLimits

0x3563,	// (0x0004b0a1) listscroll_midp_info_pane_t2

0x35a1,	// (0x0004b0df) listscroll_midp_info_pane_t3_ParamLimits

0x35a1,	// (0x0004b0df) listscroll_midp_info_pane_t3

0x35db,	// (0x0004b119) listscroll_midp_info_pane_t4_ParamLimits

0x35db,	// (0x0004b119) listscroll_midp_info_pane_t4

0x0003,

0xf805,	// (0x00057343) listscroll_midp_info_pane_t_ParamLimits

0xf805,	// (0x00057343) listscroll_midp_info_pane_t

0xae34,	// (0x00052972) scroll_pane_cp21

0x34e5,	// (0x0004b023) form_midp_field_choice_group_pane

0x34ee,	// (0x0004b02c) form_midp_field_text_pane

0x3531,	// (0x0004b06f) form_midp_field_time_pane

0x3539,	// (0x0004b077) form_midp_gauge_slider_pane

0x3542,	// (0x0004b080) form_midp_gauge_wait_pane

0xa0d1,	// (0x00051c0f) form_midp_image_pane

0x9dd9,	// (0x00051917) list_single_midp_pane_ParamLimits

0x9dd9,	// (0x00051917) list_single_midp_pane

0xca3a,	// (0x00054578) form_midp_field_text_pane_t1

0x329b,	// (0x0004add9) input_focus_pane_cp050

0x34d4,	// (0x0004b012) list_midp_form_text_pane

0x3478,	// (0x0004afb6) form_midp_field_choice_group_pane_t1

0x3486,	// (0x0004afc4) input_focus_pane_cp051

0x349a,	// (0x0004afd8) list_midp_choice_pane

0xa0d1,	// (0x00051c0f) status_idle_pane

0x345c,	// (0x0004af9a) form_midp_field_time_pane_t1

0x9fe1,	// (0x00051b1f) wait_anim_pane_g2_copy1

0x346a,	// (0x0004afa8) form_midp_field_time_pane_t2

0x0001,

0x2aef,	// (0x0004a62d) aid_navinavi_width_2_pane

0xf800,	// (0x0005733e) form_midp_field_time_pane_t

0xa0d1,	// (0x00051c0f) input_focus_pane_cp052

0xa0d1,	// (0x00051c0f) bg_input_focus_pane_cp040

0x341c,	// (0x0004af5a) form_midp_gauge_slider_pane_t1

0x342a,	// (0x0004af68) form_midp_gauge_slider_pane_t2

0xca1e,	// (0x0005455c) form_midp_gauge_slider_pane_t3

0xca2c,	// (0x0005456a) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f7,	// (0x00057335) form_midp_gauge_slider_pane_t

0x3454,	// (0x0004af92) form_midp_slider_pane

0xa35e,	// (0x00051e9c) bg_input_focus_pane_cp041_ParamLimits

0xa35e,	// (0x00051e9c) bg_input_focus_pane_cp041

0x33e9,	// (0x0004af27) form_midp_gauge_wait_pane_t1_ParamLimits

0x33e9,	// (0x0004af27) form_midp_gauge_wait_pane_t1

0x33fb,	// (0x0004af39) form_midp_gauge_wait_pane_t2_ParamLimits

0x33fb,	// (0x0004af39) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f2,	// (0x00057330) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f2,	// (0x00057330) form_midp_gauge_wait_pane_t

0x340d,	// (0x0004af4b) form_midp_wait_pane_ParamLimits

0x340d,	// (0x0004af4b) form_midp_wait_pane

0x33b1,	// (0x0004aeef) form_midp_image_pane_g1

0x33ba,	// (0x0004aef8) form_midp_image_pane_t1

0x33c9,	// (0x0004af07) form_midp_image_pane_t2

0x33d8,	// (0x0004af16) form_midp_image_pane_t3

0x0002,

0xf7eb,	// (0x00057329) form_midp_image_pane_t

0x33a8,	// (0x0004aee6) list_single_midp_pane_g1

0xeebf,	// (0x000569fd) list_single_midp_pane_t1

0xca07,	// (0x00054545) list_midp_form_item_pane_ParamLimits

0xca07,	// (0x00054545) list_midp_form_item_pane

0x2a97,	// (0x0004a5d5) list_midp_form_item_pane_t1

0x2aa6,	// (0x0004a5e4) midp_ticker_pane_g1

0x2ab2,	// (0x0004a5f0) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x00057276) midp_ticker_pane_g

0xb2cf,	// (0x00052e0d) midp_ticker_pane_t1

0xcdc8,	// (0x00054906) midp_editing_number_pane_t1

0x47a5,	// (0x0004c2e3) midp_editing_number_pane

0x47b4,	// (0x0004c2f2) midp_ticker_pane

0x454a,	// (0x0004c088) ai_message_heading_pane

0xa0d1,	// (0x00051c0f) bg_popup_window_pane_cp14

0x4552,	// (0x0004c090) listscroll_ai_message_pane

0x44d0,	// (0x0004c00e) ai_message_heading_pane_g1_ParamLimits

0x44d0,	// (0x0004c00e) ai_message_heading_pane_g1

0x44dc,	// (0x0004c01a) ai_message_heading_pane_g2_ParamLimits

0x44dc,	// (0x0004c01a) ai_message_heading_pane_g2

0x44ea,	// (0x0004c028) ai_message_heading_pane_g3_ParamLimits

0x44ea,	// (0x0004c028) ai_message_heading_pane_g3

0x44f6,	// (0x0004c034) ai_message_heading_pane_g4_ParamLimits

0x44f6,	// (0x0004c034) ai_message_heading_pane_g4

0x0003,

0xf92c,	// (0x0005746a) ai_message_heading_pane_g_ParamLimits

0xf92c,	// (0x0005746a) ai_message_heading_pane_g

0x4502,	// (0x0004c040) ai_message_heading_pane_t1_ParamLimits

0x4502,	// (0x0004c040) ai_message_heading_pane_t1

0x451c,	// (0x0004c05a) ai_message_heading_pane_t2_ParamLimits

0x451c,	// (0x0004c05a) ai_message_heading_pane_t2

0x0001,

0xf935,	// (0x00057473) ai_message_heading_pane_t_ParamLimits

0xf935,	// (0x00057473) ai_message_heading_pane_t

0x4530,	// (0x0004c06e) bg_popup_heading_pane_cp1_ParamLimits

0x4530,	// (0x0004c06e) bg_popup_heading_pane_cp1

0x44be,	// (0x0004bffc) list_ai_message_pane_ParamLimits

0x44be,	// (0x0004bffc) list_ai_message_pane

0xae34,	// (0x00052972) scroll_pane_cp10

0x445a,	// (0x0004bf98) list_ai_message_pane_g1

0x4462,	// (0x0004bfa0) list_ai_message_pane_g2

0x0001,

0xf909,	// (0x00057447) list_ai_message_pane_g

0x446a,	// (0x0004bfa8) list_ai_message_pane_t1_ParamLimits

0x446a,	// (0x0004bfa8) list_ai_message_pane_t1

0x447f,	// (0x0004bfbd) list_ai_message_pane_t2_ParamLimits

0x447f,	// (0x0004bfbd) list_ai_message_pane_t2

0x4494,	// (0x0004bfd2) list_ai_message_pane_t3_ParamLimits

0x4494,	// (0x0004bfd2) list_ai_message_pane_t3

0x44a9,	// (0x0004bfe7) list_ai_message_pane_t4_ParamLimits

0x44a9,	// (0x0004bfe7) list_ai_message_pane_t4

0x0003,

0xf90e,	// (0x0005744c) list_ai_message_pane_t_ParamLimits

0xf90e,	// (0x0005744c) list_ai_message_pane_t

0xcc0f,	// (0x0005474d) cell_ai_soft_ind_pane_ParamLimits

0xcc0f,	// (0x0005474d) cell_ai_soft_ind_pane

0x2ad0,	// (0x0004a60e) cell_ai_soft_ind_pane_g1_ParamLimits

0x2ad0,	// (0x0004a60e) cell_ai_soft_ind_pane_g1

0xa0d1,	// (0x00051c0f) grid_highlight_cp1

0x2add,	// (0x0004a61b) text_secondary_cp56_ParamLimits

0x2add,	// (0x0004a61b) text_secondary_cp56

0x4418,	// (0x0004bf56) example_general_pane_ParamLimits

0x4418,	// (0x0004bf56) example_general_pane

0x4424,	// (0x0004bf62) example_parent_pane_g1_ParamLimits

0x4424,	// (0x0004bf62) example_parent_pane_g1

0x4430,	// (0x0004bf6e) example_parent_pane_t1_ParamLimits

0x4430,	// (0x0004bf6e) example_parent_pane_t1

0xb845,	// (0x00053383) popup_preview_text_window_ParamLimits

0xb845,	// (0x00053383) popup_preview_text_window

0x28f7,	// (0x0004a435) list_single_pane_cp2_g4

0xa70f,	// (0x0005224d) bg_popup_preview_window_pane_ParamLimits

0xa70f,	// (0x0005224d) bg_popup_preview_window_pane

0x4161,	// (0x0004bc9f) popup_preview_text_window_t1_ParamLimits

0x4161,	// (0x0004bc9f) popup_preview_text_window_t1

0x417f,	// (0x0004bcbd) popup_preview_text_window_t2_ParamLimits

0x417f,	// (0x0004bcbd) popup_preview_text_window_t2

0x41c8,	// (0x0004bd06) popup_preview_text_window_t3_ParamLimits

0x41c8,	// (0x0004bd06) popup_preview_text_window_t3

0x420d,	// (0x0004bd4b) popup_preview_text_window_t4_ParamLimits

0x420d,	// (0x0004bd4b) popup_preview_text_window_t4

0x0004,

0xf8dd,	// (0x0005741b) popup_preview_text_window_t_ParamLimits

0xf8dd,	// (0x0005741b) popup_preview_text_window_t

0x428b,	// (0x0004bdc9) scroll_pane_cp11

0x3227,	// (0x0004ad65) bg_popup_preview_window_pane_g1

0x4115,	// (0x0004bc53) bg_popup_preview_window_pane_g2

0x411f,	// (0x0004bc5d) bg_popup_preview_window_pane_g3

0x4129,	// (0x0004bc67) bg_popup_preview_window_pane_g4

0x4133,	// (0x0004bc71) bg_popup_preview_window_pane_g5

0x413d,	// (0x0004bc7b) bg_popup_preview_window_pane_g6

0x4145,	// (0x0004bc83) bg_popup_preview_window_pane_g7

0x414d,	// (0x0004bc8b) bg_popup_preview_window_pane_g8

0xf2ba,	// (0x00056df8) aid_popup_width_pane

0xb7b5,	// (0x000532f3) popup_midp_note_alarm_window_ParamLimits

0xb7b5,	// (0x000532f3) popup_midp_note_alarm_window

0xaca2,	// (0x000527e0) data_form_pane_ParamLimits

0x9c5c,	// (0x0005179a) form_field_data_pane_g1

0x9c66,	// (0x000517a4) form_field_data_pane_t1_ParamLimits

0xacae,	// (0x000527ec) input_focus_pane_ParamLimits

0xecf0,	// (0x0005682e) data_form_wide_pane_ParamLimits

0xed01,	// (0x0005683f) form_field_data_wide_pane_g1

0xed0d,	// (0x0005684b) form_field_data_wide_pane_t1_ParamLimits

0xa9d0,	// (0x0005250e) input_focus_pane_cp6_ParamLimits

0xaddf,	// (0x0005291d) input_popup_find_pane_g1_ParamLimits

0xaddf,	// (0x0005291d) input_popup_find_pane_g1

0x01fa,	// (0x00047d38) aid_navi_side_left_pane

0x020f,	// (0x00047d4d) aid_navi_side_right_pane

0x3b2a,	// (0x0004b668) bg_popup_window_pane_cp30_ParamLimits

0x3b2a,	// (0x0004b668) bg_popup_window_pane_cp30

0x3ba4,	// (0x0004b6e2) popup_midp_note_alarm_window_g1_ParamLimits

0x3ba4,	// (0x0004b6e2) popup_midp_note_alarm_window_g1

0x3bd4,	// (0x0004b712) popup_midp_note_alarm_window_t1_ParamLimits

0x3bd4,	// (0x0004b712) popup_midp_note_alarm_window_t1

0x3c75,	// (0x0004b7b3) popup_midp_note_alarm_window_t2_ParamLimits

0x3c75,	// (0x0004b7b3) popup_midp_note_alarm_window_t2

0x3d23,	// (0x0004b861) popup_midp_note_alarm_window_t3_ParamLimits

0x3d23,	// (0x0004b861) popup_midp_note_alarm_window_t3

0x3d55,	// (0x0004b893) popup_midp_note_alarm_window_t4_ParamLimits

0x3d55,	// (0x0004b893) popup_midp_note_alarm_window_t4

0x3d7b,	// (0x0004b8b9) popup_midp_note_alarm_window_t5_ParamLimits

0x3d7b,	// (0x0004b8b9) popup_midp_note_alarm_window_t5

0x000a,

0xf87a,	// (0x000573b8) popup_midp_note_alarm_window_t_ParamLimits

0xf87a,	// (0x000573b8) popup_midp_note_alarm_window_t

0x3e27,	// (0x0004b965) wait_bar_pane_cp1_ParamLimits

0x3e27,	// (0x0004b965) wait_bar_pane_cp1

0xa0d1,	// (0x00051c0f) wait_anim_pane_copy1

0xa0d1,	// (0x00051c0f) wait_border_pane_copy1

0x380f,	// (0x0004b34d) wait_border_pane_g1_copy1

0xed27,	// (0x00056865) form_field_popup_pane_g1

0x9c80,	// (0x000517be) form_field_popup_pane_t1_ParamLimits

0xacae,	// (0x000527ec) input_focus_pane_cp7_ParamLimits

0xacdc,	// (0x0005281a) list_form_pane_ParamLimits

0xed2f,	// (0x0005686d) form_field_popup_wide_pane_g1

0xed37,	// (0x00056875) form_field_popup_wide_pane_t1_ParamLimits

0xacae,	// (0x000527ec) input_focus_pane_cp8_ParamLimits

0xace8,	// (0x00052826) list_form_wide_pane_ParamLimits

0x4955,	// (0x0004c493) aid_size_cell_graphic_pane

0x9cff,	// (0x0005183d) data_form_pane_t1_ParamLimits

0x9df3,	// (0x00051931) data_form_wide_pane_t1_ParamLimits

0xc66c,	// (0x000541aa) bg_status_flat_pane

0xa258,	// (0x00051d96) title_pane_t1_ParamLimits

0xa2e4,	// (0x00051e22) title_pane_t2_ParamLimits

0xa30a,	// (0x00051e48) title_pane_t3_ParamLimits

0xf532,	// (0x00057070) title_pane_t_ParamLimits

0xb099,	// (0x00052bd7) level_1_signal_ParamLimits

0xb0ab,	// (0x00052be9) level_2_signal_ParamLimits

0xb0be,	// (0x00052bfc) level_3_signal_ParamLimits

0xb0d1,	// (0x00052c0f) level_4_signal_ParamLimits

0xb0e4,	// (0x00052c22) level_5_signal_ParamLimits

0xb0f7,	// (0x00052c35) level_6_signal_ParamLimits

0xb10a,	// (0x00052c48) level_7_signal_ParamLimits

0xb099,	// (0x00052bd7) level_1_battery_ParamLimits

0xb0ab,	// (0x00052be9) level_2_battery_ParamLimits

0xb0be,	// (0x00052bfc) level_3_battery_ParamLimits

0xb0d1,	// (0x00052c0f) level_4_battery_ParamLimits

0xb0e4,	// (0x00052c22) level_5_battery_ParamLimits

0xb0f7,	// (0x00052c35) level_6_battery_ParamLimits

0xb10a,	// (0x00052c48) level_7_battery_ParamLimits

0x3a2f,	// (0x0004b56d) bg_status_flat_pane_g1

0x3a37,	// (0x0004b575) bg_status_flat_pane_g2

0x3a3f,	// (0x0004b57d) bg_status_flat_pane_g3

0x3a47,	// (0x0004b585) bg_status_flat_pane_g4

0x3a4f,	// (0x0004b58d) bg_status_flat_pane_g5

0x3a57,	// (0x0004b595) bg_status_flat_pane_g6

0x3a5f,	// (0x0004b59d) bg_status_flat_pane_g7

0xa332,	// (0x00051e70) tabs_3_active_pane_t1_ParamLimits

0xa332,	// (0x00051e70) tabs_3_passive_pane_t1_ParamLimits

0xa34c,	// (0x00051e8a) tabs_4_active_pane_t1_ParamLimits

0xa34c,	// (0x00051e8a) tabs_4_1_passive_pane_t1_ParamLimits

0xae76,	// (0x000529b4) tabs_2_active_pane_t1_ParamLimits

0xae76,	// (0x000529b4) tabs_2_passive_pane_t1_ParamLimits

0xa35e,	// (0x00051e9c) bg_active_tab_pane_cp4_ParamLimits

0xae88,	// (0x000529c6) tabs_2_long_active_pane_t1_ParamLimits

0x2cef,	// (0x0004a82d) bg_passive_tab_pane_cp4_ParamLimits

0x0fe1,	// (0x00048b1f) list_single_midp_graphic_pane_t1_ParamLimits

0xa35e,	// (0x00051e9c) bg_active_tab_pane_cp5_ParamLimits

0xae9b,	// (0x000529d9) tabs_3_long_active_pane_t1_ParamLimits

0x2cef,	// (0x0004a82d) bg_passive_tab_pane_cp5_ParamLimits

0x0fe1,	// (0x00048b1f) list_single_midp_graphic_pane_t1

0xc66c,	// (0x000541aa) bg_status_flat_pane_ParamLimits

0x2ea9,	// (0x0004a9e7) indicator_pane_cp2_ParamLimits

0x2ea9,	// (0x0004a9e7) indicator_pane_cp2

0xc802,	// (0x00054340) navi_pane_srt_ParamLimits

0xc802,	// (0x00054340) navi_pane_srt

0x3010,	// (0x0004ab4e) popup_clock_digital_analogue_window_cp1

0xa477,	// (0x00051fb5) indicator_pane_t1

0x29c8,	// (0x0004a506) copy_highlight_pane

0x29c8,	// (0x0004a506) cursor_graphics_pane

0x29c8,	// (0x0004a506) graphic_within_text_pane

0x29c8,	// (0x0004a506) link_highlight_pane

0x424e,	// (0x0004bd8c) popup_preview_text_window_t5_ParamLimits

0x424e,	// (0x0004bd8c) popup_preview_text_window_t5

0x2af9,	// (0x0004a637) cursor_digital_pane

0x2af9,	// (0x0004a637) cursor_primary_pane

0x2b0a,	// (0x0004a648) cursor_primary_small_pane

0x2b12,	// (0x0004a650) cursor_secondary_pane

0x2b1a,	// (0x0004a658) cursor_title_pane

0x2af9,	// (0x0004a637) link_highlight_digital_pane

0x2b01,	// (0x0004a63f) link_highlight_primary_pane

0x2b0a,	// (0x0004a648) link_highlight_primary_small_pane

0x2b12,	// (0x0004a650) link_highlight_secondary_pane

0x2b1a,	// (0x0004a658) link_highlight_title_pane

0x2af9,	// (0x0004a637) copy_highlight_digital_pane

0x2af9,	// (0x0004a637) copy_highlight_primary_pane

0x2b0a,	// (0x0004a648) copy_highlight_primary_small_pane

0x2b12,	// (0x0004a650) copy_highlight_secondary_pane

0x2b1a,	// (0x0004a658) copy_highlight_title_pane

0x2b12,	// (0x0004a650) graphic_text_digital_pane

0x3acd,	// (0x0004b60b) graphic_text_primary_pane

0x3ad6,	// (0x0004b614) graphic_text_primary_small_pane

0x2b0a,	// (0x0004a648) graphic_text_secondary_pane

0x2af9,	// (0x0004a637) graphic_text_title_pane

0xb2e1,	// (0x00052e1f) cursor_primary_pane_g1

0x3abf,	// (0x0004b5fd) cursor_text_primary_t1

0xca8f,	// (0x000545cd) cursor_primary_small_pane_g1

0x3ab1,	// (0x0004b5ef) cursor_text_primary_small_t1

0xca85,	// (0x000545c3) cursor_primary_small_pane_g1_copy1

0x3a99,	// (0x0004b5d7) cursor_text_primary_small_t1_copy1

0x3a77,	// (0x0004b5b5) cursor_text_title_t1

0xca7b,	// (0x000545b9) cursor_title_pane_g1

0xb2e1,	// (0x00052e1f) cursor_digital_pane_g1

0x2b2c,	// (0x0004a66a) cursor_text_digital_t1

0x2b3a,	// (0x0004a678) link_highlight_primary_pane_g1

0x3a20,	// (0x0004b55e) link_highlight_primary_pane_t1

0x2b3a,	// (0x0004a678) link_highlight_primary_small_pane_g1

0x2b42,	// (0x0004a680) link_highlight_primary_small_pane_t1

0x2b51,	// (0x0004a68f) link_highlight_secondary_pane_g1

0x2b59,	// (0x0004a697) link_highlight_secondary_pane_t1

0x3994,	// (0x0004b4d2) link_highlight_title_pane_g1

0x399c,	// (0x0004b4da) link_highlight_title_pane_t1

0x397d,	// (0x0004b4bb) link_highlight_digital_pane_g1

0x3985,	// (0x0004b4c3) link_highlight_digital_pane_t1

0x3845,	// (0x0004b383) copy_highlight_primary_pane_g1

0x385c,	// (0x0004b39a) copy_highlight_primary_pane_t1

0x3845,	// (0x0004b383) copy_highlight_primary_small_pane_g1

0x384d,	// (0x0004b38b) copy_highlight_primary_small_pane_t1

0x2b68,	// (0x0004a6a6) copy_highlight_secondary_pane_g1

0x2b70,	// (0x0004a6ae) copy_highlight_secondary_pane_t1

0x382e,	// (0x0004b36c) copy_highlight_title_pane_g1

0x3836,	// (0x0004b374) copy_highlight_title_pane_t1

0x3845,	// (0x0004b383) copy_highlight_digital_pane_g1

0x4b27,	// (0x0004c665) copy_highlight_digital_pane_t1

0x4a7b,	// (0x0004c5b9) graphic_text_primary_pane_g1

0x4b0b,	// (0x0004c649) graphic_text_primary_pane_t1

0x4b19,	// (0x0004c657) graphic_text_primary_pane_t2

0x0001,

0xf9a9,	// (0x000574e7) graphic_text_primary_pane_t

0x4ae7,	// (0x0004c625) graphic_text_primary_small_pane_g1

0x4aef,	// (0x0004c62d) graphic_text_primary_small_pane_t1

0x4afd,	// (0x0004c63b) graphic_text_primary_small_pane_t2

0x0001,

0xf9a4,	// (0x000574e2) graphic_text_primary_small_pane_t

0x4ac3,	// (0x0004c601) graphic_text_secondary_pane_g1

0x4acb,	// (0x0004c609) graphic_text_secondary_pane_t1

0x4ad9,	// (0x0004c617) graphic_text_secondary_pane_t2

0x0001,

0xf99f,	// (0x000574dd) graphic_text_secondary_pane_t

0x4a9f,	// (0x0004c5dd) graphic_text_title_pane_g1

0x4aa7,	// (0x0004c5e5) graphic_text_title_pane_t1

0x4ab5,	// (0x0004c5f3) graphic_text_title_pane_t2

0x0001,

0xf99a,	// (0x000574d8) graphic_text_title_pane_t

0x4a7b,	// (0x0004c5b9) graphic_text_digital_pane_g1

0x4a83,	// (0x0004c5c1) graphic_text_digital_pane_t1

0x4a91,	// (0x0004c5cf) graphic_text_digital_pane_t2

0x0001,

0xf995,	// (0x000574d3) graphic_text_digital_pane_t

0xa35e,	// (0x00051e9c) navi_icon_pane_srt_ParamLimits

0xa35e,	// (0x00051e9c) navi_icon_pane_srt

0xa0d1,	// (0x00051c0f) navi_midp_pane_srt

0xa0d1,	// (0x00051c0f) navi_navi_pane_srt

0xa35e,	// (0x00051e9c) navi_text_pane_srt_ParamLimits

0xa35e,	// (0x00051e9c) navi_text_pane_srt

0x4a46,	// (0x0004c584) navi_navi_icon_text_pane_srt

0x4a4e,	// (0x0004c58c) navi_navi_pane_srt_g1_ParamLimits

0x4a4e,	// (0x0004c58c) navi_navi_pane_srt_g1

0x4a60,	// (0x0004c59e) navi_navi_pane_srt_g2_ParamLimits

0x4a60,	// (0x0004c59e) navi_navi_pane_srt_g2

0x0001,

0xf990,	// (0x000574ce) navi_navi_pane_srt_g_ParamLimits

0xf990,	// (0x000574ce) navi_navi_pane_srt_g

0x4a72,	// (0x0004c5b0) navi_navi_tabs_pane_srt

0x4a46,	// (0x0004c584) navi_navi_text_pane_srt

0x4a46,	// (0x0004c584) navi_navi_volume_pane_srt

0x4a37,	// (0x0004c575) navi_navi_text_pane_srt_t1

0x13f0,	// (0x00048f2e) navi_navi_volume_pane_srt_g1

0x13f8,	// (0x00048f36) volume_small_pane_srt_ParamLimits

0x13f8,	// (0x00048f36) volume_small_pane_srt

0x0720,	// (0x0004825e) volume_small_pane_srt_g1_ParamLimits

0x0720,	// (0x0004825e) volume_small_pane_srt_g1

0x0730,	// (0x0004826e) volume_small_pane_srt_g2_ParamLimits

0x0730,	// (0x0004826e) volume_small_pane_srt_g2

0x0741,	// (0x0004827f) volume_small_pane_srt_g3_ParamLimits

0x0741,	// (0x0004827f) volume_small_pane_srt_g3

0x0752,	// (0x00048290) volume_small_pane_srt_g4_ParamLimits

0x0752,	// (0x00048290) volume_small_pane_srt_g4

0x0763,	// (0x000482a1) volume_small_pane_srt_g5_ParamLimits

0x0763,	// (0x000482a1) volume_small_pane_srt_g5

0x0774,	// (0x000482b2) volume_small_pane_srt_g6_ParamLimits

0x0774,	// (0x000482b2) volume_small_pane_srt_g6

0x0785,	// (0x000482c3) volume_small_pane_srt_g7_ParamLimits

0x0785,	// (0x000482c3) volume_small_pane_srt_g7

0x0796,	// (0x000482d4) volume_small_pane_srt_g8_ParamLimits

0x0796,	// (0x000482d4) volume_small_pane_srt_g8

0x07a7,	// (0x000482e5) volume_small_pane_srt_g9_ParamLimits

0x07a7,	// (0x000482e5) volume_small_pane_srt_g9

0x07b8,	// (0x000482f6) volume_small_pane_srt_g10_ParamLimits

0x07b8,	// (0x000482f6) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x0005727b) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x0005727b) volume_small_pane_srt_g

0xa7c4,	// (0x00052302) query_popup_data_pane_cp2

0x4a1d,	// (0x0004c55b) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4a1d,	// (0x0004c55b) navi_navi_icon_text_pane_srt_t1

0x3acd,	// (0x0004b60b) navi_tabs_2_long_pane_srt

0x3acd,	// (0x0004b60b) navi_tabs_2_pane_srt

0x3acd,	// (0x0004b60b) navi_tabs_3_long_pane_srt

0x3acd,	// (0x0004b60b) navi_tabs_3_pane_srt

0x3acd,	// (0x0004b60b) navi_tabs_4_pane_srt

0x13d0,	// (0x00048f0e) tabs_2_active_pane_srt_ParamLimits

0x13d0,	// (0x00048f0e) tabs_2_active_pane_srt

0x13e0,	// (0x00048f1e) tabs_2_passive_pane_srt_ParamLimits

0x13e0,	// (0x00048f1e) tabs_2_passive_pane_srt

0x329b,	// (0x0004add9) bg_passive_tab_pane_cp1_srt_ParamLimits

0x329b,	// (0x0004add9) bg_passive_tab_pane_cp1_srt

0x49e9,	// (0x0004c527) bg_passive_tab_pane_g1_cp1_srt

0x0593,	// (0x000480d1) bg_passive_tab_pane_g2_cp1_srt

0x49f2,	// (0x0004c530) bg_passive_tab_pane_g3_cp1_srt

0xa31c,	// (0x00051e5a) bg_active_tab_pane_cp1_srt_ParamLimits

0xa31c,	// (0x00051e5a) bg_active_tab_pane_cp1_srt

0x49fb,	// (0x0004c539) tabs_2_active_pane_srt_g1

0xcecf,	// (0x00054a0d) tabs_2_active_pane_srt_t1_ParamLimits

0xcecf,	// (0x00054a0d) tabs_2_active_pane_srt_t1

0x49e9,	// (0x0004c527) bg_active_tab_pane_g1_cp1_srt

0x0593,	// (0x000480d1) bg_active_tab_pane_g2_cp1_srt

0x49f2,	// (0x0004c530) bg_active_tab_pane_g3_cp1_srt

0x139d,	// (0x00048edb) tabs_3_active_pane_srt_ParamLimits

0x139d,	// (0x00048edb) tabs_3_active_pane_srt

0x13ae,	// (0x00048eec) tabs_3_passive_pane_cp_srt_ParamLimits

0x13ae,	// (0x00048eec) tabs_3_passive_pane_cp_srt

0x13bf,	// (0x00048efd) tabs_3_passive_pane_srt_ParamLimits

0x13bf,	// (0x00048efd) tabs_3_passive_pane_srt

0x329b,	// (0x0004add9) bg_passive_tab_pane_cp2_srt_ParamLimits

0x329b,	// (0x0004add9) bg_passive_tab_pane_cp2_srt

0x2b7f,	// (0x0004a6bd) bg_passive_tab_pane_g1_cp2_srt

0x0593,	// (0x000480d1) bg_passive_tab_pane_g2_cp2_srt

0x2b88,	// (0x0004a6c6) bg_passive_tab_pane_g3_cp2_srt

0xa31c,	// (0x00051e5a) bg_active_tab_pane_cp2_srt_ParamLimits

0xa31c,	// (0x00051e5a) bg_active_tab_pane_cp2_srt

0x49cf,	// (0x0004c50d) tabs_3_active_pane_srt_g1

0xceb9,	// (0x000549f7) tabs_3_active_pane_srt_t1_ParamLimits

0xceb9,	// (0x000549f7) tabs_3_active_pane_srt_t1

0x2b7f,	// (0x0004a6bd) bg_active_tab_pane_g1_cp2_srt

0x0593,	// (0x000480d1) bg_active_tab_pane_g2_cp2_srt

0x2b88,	// (0x0004a6c6) bg_active_tab_pane_g3_cp2_srt

0x1355,	// (0x00048e93) tabs_4_active_pane_srt_ParamLimits

0x1355,	// (0x00048e93) tabs_4_active_pane_srt

0x1367,	// (0x00048ea5) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1367,	// (0x00048ea5) tabs_4_passive_pane_cp2_srt

0x090a,	// (0x00048448) aid_size_cell_toolbar

0x4604,	// (0x0004c142) main_idle_act_pane_ParamLimits

0x0ae7,	// (0x00048625) popup_large_graphic_colour_window_ParamLimits

0xbb0b,	// (0x00053649) popup_toolbar_window_ParamLimits

0xbb0b,	// (0x00053649) popup_toolbar_window

0x47ed,	// (0x0004c32b) list_single_graphic_2heading_pane_ParamLimits

0x47ed,	// (0x0004c32b) list_single_graphic_2heading_pane

0xc5af,	// (0x000540ed) aid_size_cell_apps_grid_lsc_pane

0xc5c1,	// (0x000540ff) aid_size_cell_apps_grid_prt_pane

0x2cef,	// (0x0004a82d) bg_wml_button_pane_cp1_ParamLimits

0x2cef,	// (0x0004a82d) bg_wml_button_pane_cp1

0xca3a,	// (0x00054578) form_midp_field_text_pane_t1_ParamLimits

0x329b,	// (0x0004add9) input_focus_pane_cp050_ParamLimits

0x34d4,	// (0x0004b012) list_midp_form_text_pane_ParamLimits

0x3486,	// (0x0004afc4) input_focus_pane_cp051_ParamLimits

0x349a,	// (0x0004afd8) list_midp_choice_pane_ParamLimits

0xc9d3,	// (0x00054511) list_single_2graphic_pane_cp3_ParamLimits

0xc9d3,	// (0x00054511) list_single_2graphic_pane_cp3

0xc9e6,	// (0x00054524) list_single_midp_graphic_pane_ParamLimits

0xc9e6,	// (0x00054524) list_single_midp_graphic_pane

0xeda5,	// (0x000568e3) list_single_graphic_2heading_pane_g1_ParamLimits

0xeda5,	// (0x000568e3) list_single_graphic_2heading_pane_g1

0xedb1,	// (0x000568ef) list_single_graphic_2heading_pane_g4_ParamLimits

0xedb1,	// (0x000568ef) list_single_graphic_2heading_pane_g4

0xedbd,	// (0x000568fb) list_single_graphic_2heading_pane_g5_ParamLimits

0xedbd,	// (0x000568fb) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x000572ce) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x000572ce) list_single_graphic_2heading_pane_g

0xedc9,	// (0x00056907) list_single_graphic_2heading_pane_t1_ParamLimits

0xedc9,	// (0x00056907) list_single_graphic_2heading_pane_t1

0xeddd,	// (0x0005691b) list_single_graphic_2heading_pane_t2_ParamLimits

0xeddd,	// (0x0005691b) list_single_graphic_2heading_pane_t2

0xedf9,	// (0x00056937) list_single_graphic_2heading_pane_t3_ParamLimits

0xedf9,	// (0x00056937) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x000572d5) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x000572d5) list_single_graphic_2heading_pane_t

0x3165,	// (0x0004aca3) bg_popup_sub_pane_cp2

0x318f,	// (0x0004accd) grid_toobar_pane

0x0f4d,	// (0x00048a8b) cell_toolbar_pane_ParamLimits

0x0f4d,	// (0x00048a8b) cell_toolbar_pane

0x31cb,	// (0x0004ad09) cell_toolbar_pane_g1_ParamLimits

0x31cb,	// (0x0004ad09) cell_toolbar_pane_g1

0x31df,	// (0x0004ad1d) cell_toolbar_pane_g2_ParamLimits

0x31df,	// (0x0004ad1d) cell_toolbar_pane_g2

0x0001,

0xf7a5,	// (0x000572e3) cell_toolbar_pane_g_ParamLimits

0xf7a5,	// (0x000572e3) cell_toolbar_pane_g

0x3201,	// (0x0004ad3f) grid_highlight_pane_cp2_ParamLimits

0x3201,	// (0x0004ad3f) grid_highlight_pane_cp2

0x321b,	// (0x0004ad59) toolbar_button_pane

0x3227,	// (0x0004ad65) toolbar_button_pane_g1

0x322f,	// (0x0004ad6d) toolbar_button_pane_g2

0x3237,	// (0x0004ad75) toolbar_button_pane_g3

0x323f,	// (0x0004ad7d) toolbar_button_pane_g4

0x3247,	// (0x0004ad85) toolbar_button_pane_g5

0x324f,	// (0x0004ad8d) toolbar_button_pane_g6

0x3257,	// (0x0004ad95) toolbar_button_pane_g7

0x325f,	// (0x0004ad9d) toolbar_button_pane_g8

0x3267,	// (0x0004ada5) toolbar_button_pane_g9

0x0009,

0xf7aa,	// (0x000572e8) toolbar_button_pane_g

0x0f9d,	// (0x00048adb) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0f9d,	// (0x00048adb) list_single_2graphic_pane_g1_cp3

0xbba6,	// (0x000536e4) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbba6,	// (0x000536e4) list_single_2graphic_pane_g2_cp3

0x27e7,	// (0x0004a325) list_single_2graphic_pane_g3_cp3

0x0fba,	// (0x00048af8) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0fba,	// (0x00048af8) list_single_2graphic_pane_g4_cp3

0x0fc6,	// (0x00048b04) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0fc6,	// (0x00048b04) list_single_2graphic_pane_t1_cp3

0x2651,	// (0x0004a18f) list_single_midp_graphic_pane_g2_ParamLimits

0x2651,	// (0x0004a18f) list_single_midp_graphic_pane_g2

0xed8d,	// (0x000568cb) aid_zoom_text_primary

0xed95,	// (0x000568d3) aid_zoom_text_secondary

0x2c39,	// (0x0004a777) status_small_pane_g7_ParamLimits

0x2c39,	// (0x0004a777) status_small_pane_g7

0x2c5c,	// (0x0004a79a) status_small_pane_t1_ParamLimits

0xa21c,	// (0x00051d5a) title_pane_g2

0x0003,

0xf529,	// (0x00057067) title_pane_g

0xa874,	// (0x000523b2) aid_size_cell_colour_1_pane_ParamLimits

0xa874,	// (0x000523b2) aid_size_cell_colour_1_pane

0xa888,	// (0x000523c6) aid_size_cell_colour_2_pane_ParamLimits

0xa888,	// (0x000523c6) aid_size_cell_colour_2_pane

0xa89c,	// (0x000523da) aid_size_cell_colour_3_pane_ParamLimits

0xa89c,	// (0x000523da) aid_size_cell_colour_3_pane

0xa8b0,	// (0x000523ee) aid_size_cell_colour_4_pane_ParamLimits

0xa8b0,	// (0x000523ee) aid_size_cell_colour_4_pane

0x0137,	// (0x00047c75) title_pane_stacon_g1_ParamLimits

0x0137,	// (0x00047c75) title_pane_stacon_g1

0x38b3,	// (0x0004b3f1) popup_note_wait_window_g3_ParamLimits

0x38b3,	// (0x0004b3f1) popup_note_wait_window_g3

0x392a,	// (0x0004b468) popup_note_wait_window_t5_ParamLimits

0x392a,	// (0x0004b468) popup_note_wait_window_t5

0xa0d1,	// (0x00051c0f) main_feb_china_hwr_fs_writing_pane

0xb49c,	// (0x00052fda) popup_feb_china_hwr_fs_window_ParamLimits

0xb49c,	// (0x00052fda) popup_feb_china_hwr_fs_window

0xbbb7,	// (0x000536f5) aid_size_cell_hwr_fs_ParamLimits

0xbbb7,	// (0x000536f5) aid_size_cell_hwr_fs

0x329b,	// (0x0004add9) bg_popup_sub_pane_cp3_ParamLimits

0x329b,	// (0x0004add9) bg_popup_sub_pane_cp3

0xbbcc,	// (0x0005370a) grid_hwr_fs_pane_ParamLimits

0xbbcc,	// (0x0005370a) grid_hwr_fs_pane

0x103c,	// (0x00048b7a) linegrid_hwr_fs_pane_ParamLimits

0x103c,	// (0x00048b7a) linegrid_hwr_fs_pane

0xbbe4,	// (0x00053722) cell_hwr_fs_pane_ParamLimits

0xbbe4,	// (0x00053722) cell_hwr_fs_pane

0x32a7,	// (0x0004ade5) linegrid_hwr_fs_pane_g1_ParamLimits

0x32a7,	// (0x0004ade5) linegrid_hwr_fs_pane_g1

0xc9a7,	// (0x000544e5) linegrid_hwr_fs_pane_g2_ParamLimits

0xc9a7,	// (0x000544e5) linegrid_hwr_fs_pane_g2

0x32c5,	// (0x0004ae03) linegrid_hwr_fs_pane_g3_ParamLimits

0x32c5,	// (0x0004ae03) linegrid_hwr_fs_pane_g3

0x1070,	// (0x00048bae) linegrid_hwr_fs_pane_g4_ParamLimits

0x1070,	// (0x00048bae) linegrid_hwr_fs_pane_g4

0x108e,	// (0x00048bcc) linegrid_hwr_fs_pane_g5_ParamLimits

0x108e,	// (0x00048bcc) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d0,	// (0x0005730e) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d0,	// (0x0005730e) linegrid_hwr_fs_pane_g

0x32d1,	// (0x0004ae0f) cell_hwr_fs_pane_g1_ParamLimits

0x32d1,	// (0x0004ae0f) cell_hwr_fs_pane_g1

0x309e,	// (0x0004abdc) cell_hwr_fs_pane_g2_ParamLimits

0x309e,	// (0x0004abdc) cell_hwr_fs_pane_g2

0xc9b9,	// (0x000544f7) cell_hwr_fs_pane_g3_ParamLimits

0xc9b9,	// (0x000544f7) cell_hwr_fs_pane_g3

0xc9c6,	// (0x00054504) cell_hwr_fs_pane_g4_ParamLimits

0xc9c6,	// (0x00054504) cell_hwr_fs_pane_g4

0x0003,

0xf7db,	// (0x00057319) cell_hwr_fs_pane_g_ParamLimits

0xf7db,	// (0x00057319) cell_hwr_fs_pane_g

0xbc0a,	// (0x00053748) cell_hwr_fs_pane_t1

0xa0d1,	// (0x00051c0f) grid_highlight_pane_cp6

0xa0d1,	// (0x00051c0f) main_idle_act2_pane

0xae1b,	// (0x00052959) aid_inside_area_popup_secondary

0xcaaf,	// (0x000545ed) aid_inside_area_window_primary_ParamLimits

0xcaaf,	// (0x000545ed) aid_inside_area_window_primary

0x4b36,	// (0x0004c674) ai2_news_ticker_pane

0x4b3e,	// (0x0004c67c) aid_size_cell_ai1_link_ParamLimits

0x4b3e,	// (0x0004c67c) aid_size_cell_ai1_link

0x4b58,	// (0x0004c696) popup_ai2_data_window_ParamLimits

0x4b58,	// (0x0004c696) popup_ai2_data_window

0x4b76,	// (0x0004c6b4) popup_ai2_link_window_ParamLimits

0x4b76,	// (0x0004c6b4) popup_ai2_link_window

0x329b,	// (0x0004add9) bg_popup_sub_pane_cp4_ParamLimits

0x329b,	// (0x0004add9) bg_popup_sub_pane_cp4

0x4b8c,	// (0x0004c6ca) grid_ai2_link_pane_ParamLimits

0x4b8c,	// (0x0004c6ca) grid_ai2_link_pane

0x4ba3,	// (0x0004c6e1) popup_ai2_link_window_g1_ParamLimits

0x4ba3,	// (0x0004c6e1) popup_ai2_link_window_g1

0x4baf,	// (0x0004c6ed) popup_ai2_link_window_g2_ParamLimits

0x4baf,	// (0x0004c6ed) popup_ai2_link_window_g2

0x0001,

0xf9ae,	// (0x000574ec) popup_ai2_link_window_g_ParamLimits

0xf9ae,	// (0x000574ec) popup_ai2_link_window_g

0x4bc0,	// (0x0004c6fe) ai2_mp_button_pane

0x4bc8,	// (0x0004c706) ai2_mp_volume_pane

0x3486,	// (0x0004afc4) bg_popup_sub_pane_cp5_ParamLimits

0x3486,	// (0x0004afc4) bg_popup_sub_pane_cp5

0x4bd0,	// (0x0004c70e) heading_ai2_gene_pane_ParamLimits

0x4bd0,	// (0x0004c70e) heading_ai2_gene_pane

0x4bdc,	// (0x0004c71a) list_ai2_gene_pane_ParamLimits

0x4bdc,	// (0x0004c71a) list_ai2_gene_pane

0x4c24,	// (0x0004c762) cell_ai2_link_pane_ParamLimits

0x4c24,	// (0x0004c762) cell_ai2_link_pane

0x4c3a,	// (0x0004c778) cell_ai2_link_pane_g1

0xa0d1,	// (0x00051c0f) grid_highlight_pane_cp7

0x140d,	// (0x00048f4b) ai2_mp_volume_pane_g1

0x4d0d,	// (0x0004c84b) ai2_mp_volume_pane_g2

0x4c82,	// (0x0004c7c0) list_ai2_gene_pane_t1

0x4d15,	// (0x0004c853) ai2_mp_volume_pane_g3

0x0002,

0xf9c7,	// (0x00057505) ai2_mp_volume_pane_g

0x1415,	// (0x00048f53) volume_small_pane_cp3

0x4d1d,	// (0x0004c85b) aid_size_cell_ai2_button

0x4d25,	// (0x0004c863) grid_ai2_button_pane

0x4d2e,	// (0x0004c86c) cell_ai2_button_pane_ParamLimits

0x4d2e,	// (0x0004c86c) cell_ai2_button_pane

0x9fe1,	// (0x00051b1f) cell_ai2_button_pane_g1

0xa0d1,	// (0x00051c0f) grid_highlight_pane_cp8

0x4ccd,	// (0x0004c80b) ai2_gene_pane_t1_ParamLimits

0x4ccd,	// (0x0004c80b) ai2_gene_pane_t1

0xb418,	// (0x00052f56) aid_height_parent_landscape

0xcc56,	// (0x00054794) aid_height_set_list

0x4604,	// (0x0004c142) aid_size_parent

0x4955,	// (0x0004c493) aid_size_cell_graphic_pane_ParamLimits

0x4bec,	// (0x0004c72a) popup_ai2_data_window_g1_ParamLimits

0x4bec,	// (0x0004c72a) popup_ai2_data_window_g1

0x4bf8,	// (0x0004c736) ai2_news_ticker_pane_g1

0x4c00,	// (0x0004c73e) ai2_news_ticker_pane_g2

0x0001,

0xf9b3,	// (0x000574f1) ai2_news_ticker_pane_g

0x4c08,	// (0x0004c746) ai2_news_ticker_pane_t1

0x4c16,	// (0x0004c754) ai2_news_ticker_pane_t2

0x0001,

0xf9b8,	// (0x000574f6) ai2_news_ticker_pane_t

0x4c43,	// (0x0004c781) heading_ai2_gene_pane_g1

0x4c4b,	// (0x0004c789) heading_ai2_gene_pane_t1_ParamLimits

0x4c4b,	// (0x0004c789) heading_ai2_gene_pane_t1

0x4c60,	// (0x0004c79e) list_highlight_pane_cp6

0x4c68,	// (0x0004c7a6) ai2_gene_pane_ParamLimits

0x4c68,	// (0x0004c7a6) ai2_gene_pane

0x4c90,	// (0x0004c7ce) list_ai2_gene_pane_t2

0x0001,

0xf9bd,	// (0x000574fb) list_ai2_gene_pane_t

0x4c9e,	// (0x0004c7dc) list_highlight_pane_cp8_ParamLimits

0x4c9e,	// (0x0004c7dc) list_highlight_pane_cp8

0x4caf,	// (0x0004c7ed) ai2_gene_pane_g1_ParamLimits

0x4caf,	// (0x0004c7ed) ai2_gene_pane_g1

0x4cc1,	// (0x0004c7ff) ai2_gene_pane_g2_ParamLimits

0x4cc1,	// (0x0004c7ff) ai2_gene_pane_g2

0x0001,

0xf9c2,	// (0x00057500) ai2_gene_pane_g_ParamLimits

0xf9c2,	// (0x00057500) ai2_gene_pane_g

0xabf5,	// (0x00052733) scroll_pane_cp12

0xb3d7,	// (0x00052f15) control_pane_t3_ParamLimits

0xb3d7,	// (0x00052f15) control_pane_t3

0x2c4d,	// (0x0004a78b) status_small_pane_g8_ParamLimits

0x2c4d,	// (0x0004a78b) status_small_pane_g8

0xb53e,	// (0x0005307c) popup_find_window_ParamLimits

0xb7f5,	// (0x00053333) popup_note_image_window_ParamLimits

0xec69,	// (0x000567a7) list_double2_graphic_pane_vc_g1_ParamLimits

0xec69,	// (0x000567a7) list_double2_graphic_pane_vc_g1

0x0f7d,	// (0x00048abb) list_double2_graphic_pane_vc_g2_ParamLimits

0x0f7d,	// (0x00048abb) list_double2_graphic_pane_vc_g2

0x0f89,	// (0x00048ac7) list_double2_graphic_pane_vc_g3_ParamLimits

0x0f89,	// (0x00048ac7) list_double2_graphic_pane_vc_g3

0x0002,

0xf79e,	// (0x000572dc) list_double2_graphic_pane_vc_g_ParamLimits

0xf79e,	// (0x000572dc) list_double2_graphic_pane_vc_g

0xee11,	// (0x0005694f) list_double2_graphic_pane_vc_t1_ParamLimits

0xee11,	// (0x0005694f) list_double2_graphic_pane_vc_t1

0x0f7d,	// (0x00048abb) list_single_heading_pane_vc_g1_ParamLimits

0x0f7d,	// (0x00048abb) list_single_heading_pane_vc_g1

0x0f89,	// (0x00048ac7) list_single_heading_pane_vc_g2_ParamLimits

0x0f89,	// (0x00048ac7) list_single_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x000570eb) list_single_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x000570eb) list_single_heading_pane_vc_g

0xee27,	// (0x00056965) list_single_heading_pane_vc_t1_ParamLimits

0xee27,	// (0x00056965) list_single_heading_pane_vc_t1

0xee3d,	// (0x0005697b) list_single_heading_pane_vc_t2_ParamLimits

0xee3d,	// (0x0005697b) list_single_heading_pane_vc_t2

0x0001,

0xf7bf,	// (0x000572fd) list_single_heading_pane_vc_t_ParamLimits

0xf7bf,	// (0x000572fd) list_single_heading_pane_vc_t

0x0ff7,	// (0x00048b35) list_setting_number_pane_vc_g1_ParamLimits

0x0ff7,	// (0x00048b35) list_setting_number_pane_vc_g1

0x1003,	// (0x00048b41) list_setting_number_pane_vc_g2_ParamLimits

0x1003,	// (0x00048b41) list_setting_number_pane_vc_g2

0x0001,

0xf7c4,	// (0x00057302) list_setting_number_pane_vc_g_ParamLimits

0xf7c4,	// (0x00057302) list_setting_number_pane_vc_g

0xee4f,	// (0x0005698d) list_setting_number_pane_vc_t1_ParamLimits

0xee4f,	// (0x0005698d) list_setting_number_pane_vc_t1

0xee63,	// (0x000569a1) list_setting_number_pane_vc_t2_ParamLimits

0xee63,	// (0x000569a1) list_setting_number_pane_vc_t2

0xee7f,	// (0x000569bd) list_setting_number_pane_vc_t3_ParamLimits

0xee7f,	// (0x000569bd) list_setting_number_pane_vc_t3

0x0002,

0xf7c9,	// (0x00057307) list_setting_number_pane_vc_t_ParamLimits

0xf7c9,	// (0x00057307) list_setting_number_pane_vc_t

0xeead,	// (0x000569eb) set_value_pane_vc_ParamLimits

0xeead,	// (0x000569eb) set_value_pane_vc

0x47ed,	// (0x0004c32b) list_double2_graphic_pane_vc_ParamLimits

0x47ed,	// (0x0004c32b) list_double2_graphic_pane_vc

0x47ed,	// (0x0004c32b) list_double2_large_graphic_pane_vc_ParamLimits

0x47ed,	// (0x0004c32b) list_double2_large_graphic_pane_vc

0x47ed,	// (0x0004c32b) list_double2_pane_vc_ParamLimits

0x47ed,	// (0x0004c32b) list_double2_pane_vc

0x47ed,	// (0x0004c32b) list_double_graphic_heading_pane_vc_ParamLimits

0x47ed,	// (0x0004c32b) list_double_graphic_heading_pane_vc

0x47ed,	// (0x0004c32b) list_double_graphic_pane_vc_ParamLimits

0x47ed,	// (0x0004c32b) list_double_graphic_pane_vc

0x47ed,	// (0x0004c32b) list_double_heading_pane_vc_ParamLimits

0x47ed,	// (0x0004c32b) list_double_heading_pane_vc

0x4801,	// (0x0004c33f) list_double_large_graphic_pane_vc_ParamLimits

0x4801,	// (0x0004c33f) list_double_large_graphic_pane_vc

0x47ed,	// (0x0004c32b) list_double_number_pane_vc_ParamLimits

0x47ed,	// (0x0004c32b) list_double_number_pane_vc

0x47ed,	// (0x0004c32b) list_double_pane_vc_ParamLimits

0x47ed,	// (0x0004c32b) list_double_pane_vc

0x47ed,	// (0x0004c32b) list_double_time_pane_vc_ParamLimits

0x47ed,	// (0x0004c32b) list_double_time_pane_vc

0x47ed,	// (0x0004c32b) list_setting_number_pane_vc_ParamLimits

0x47ed,	// (0x0004c32b) list_setting_number_pane_vc

0x47ed,	// (0x0004c32b) list_setting_pane_vc_ParamLimits

0x47ed,	// (0x0004c32b) list_setting_pane_vc

0x47ed,	// (0x0004c32b) list_single_graphic_heading_pane_vc_ParamLimits

0x47ed,	// (0x0004c32b) list_single_graphic_heading_pane_vc

0x47ed,	// (0x0004c32b) list_single_heading_pane_vc_ParamLimits

0x47ed,	// (0x0004c32b) list_single_heading_pane_vc

0x47ed,	// (0x0004c32b) list_single_number_heading_pane_vc_ParamLimits

0x47ed,	// (0x0004c32b) list_single_number_heading_pane_vc

0xec69,	// (0x000567a7) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xec69,	// (0x000567a7) list_double_graphic_heading_pane_vc_g1

0x2939,	// (0x0004a477) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x2939,	// (0x0004a477) list_double_graphic_heading_pane_vc_g2

0x141e,	// (0x00048f5c) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x141e,	// (0x00048f5c) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ce,	// (0x0005750c) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ce,	// (0x0005750c) list_double_graphic_heading_pane_vc_g

0xeef6,	// (0x00056a34) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xeef6,	// (0x00056a34) list_double_graphic_heading_pane_vc_t1

0xef0c,	// (0x00056a4a) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xef0c,	// (0x00056a4a) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d5,	// (0x00057513) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d5,	// (0x00057513) list_double_graphic_heading_pane_vc_t

0x0ff7,	// (0x00048b35) list_setting_pane_vc_g1_ParamLimits

0x0ff7,	// (0x00048b35) list_setting_pane_vc_g1

0x1003,	// (0x00048b41) list_setting_pane_vc_g2_ParamLimits

0x1003,	// (0x00048b41) list_setting_pane_vc_g2

0x0001,

0xf7c4,	// (0x00057302) list_setting_pane_vc_g_ParamLimits

0xf7c4,	// (0x00057302) list_setting_pane_vc_g

0xef2a,	// (0x00056a68) list_setting_pane_vc_t1_ParamLimits

0xef2a,	// (0x00056a68) list_setting_pane_vc_t1

0xef46,	// (0x00056a84) list_setting_pane_vc_t2_ParamLimits

0xef46,	// (0x00056a84) list_setting_pane_vc_t2

0x0001,

0xfa18,	// (0x00057556) list_setting_pane_vc_t_ParamLimits

0xfa18,	// (0x00057556) list_setting_pane_vc_t

0xeead,	// (0x000569eb) set_value_pane_cp_vc_ParamLimits

0xeead,	// (0x000569eb) set_value_pane_cp_vc

0x0f7d,	// (0x00048abb) list_single_number_heading_pane_vc_g1_ParamLimits

0x0f7d,	// (0x00048abb) list_single_number_heading_pane_vc_g1

0x0f89,	// (0x00048ac7) list_single_number_heading_pane_vc_g2_ParamLimits

0x0f89,	// (0x00048ac7) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x000570eb) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x000570eb) list_single_number_heading_pane_vc_g

0xec41,	// (0x0005677f) list_single_number_heading_pane_vc_t1_ParamLimits

0xec41,	// (0x0005677f) list_single_number_heading_pane_vc_t1

0xef62,	// (0x00056aa0) list_single_number_heading_pane_vc_t2_ParamLimits

0xef62,	// (0x00056aa0) list_single_number_heading_pane_vc_t2

0xec57,	// (0x00056795) list_single_number_heading_pane_vc_t3_ParamLimits

0xec57,	// (0x00056795) list_single_number_heading_pane_vc_t3

0x0002,

0xfa1d,	// (0x0005755b) list_single_number_heading_pane_vc_t_ParamLimits

0xfa1d,	// (0x0005755b) list_single_number_heading_pane_vc_t

0xec69,	// (0x000567a7) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xec69,	// (0x000567a7) list_single_graphic_heading_pane_vc_g1

0x0f7d,	// (0x00048abb) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0f7d,	// (0x00048abb) list_single_graphic_heading_pane_vc_g4

0x0f89,	// (0x00048ac7) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0f89,	// (0x00048ac7) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79e,	// (0x000572dc) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x000572dc) list_single_graphic_heading_pane_vc_g

0xec41,	// (0x0005677f) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xec41,	// (0x0005677f) list_single_graphic_heading_pane_vc_t1

0xef78,	// (0x00056ab6) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xef78,	// (0x00056ab6) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa24,	// (0x00057562) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa24,	// (0x00057562) list_single_graphic_heading_pane_vc_t

0x0f7d,	// (0x00048abb) list_double2_pane_vc_g1_ParamLimits

0x0f7d,	// (0x00048abb) list_double2_pane_vc_g1

0x0f89,	// (0x00048ac7) list_double2_pane_vc_g2_ParamLimits

0x0f89,	// (0x00048ac7) list_double2_pane_vc_g2

0x0001,

0xf5ad,	// (0x000570eb) list_double2_pane_vc_g_ParamLimits

0xf5ad,	// (0x000570eb) list_double2_pane_vc_g

0xeee0,	// (0x00056a1e) list_double2_pane_vc_t1_ParamLimits

0xeee0,	// (0x00056a1e) list_double2_pane_vc_t1

0x142a,	// (0x00048f68) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x142a,	// (0x00048f68) list_double2_large_graphic_pane_vc_g1

0x0f7d,	// (0x00048abb) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0f7d,	// (0x00048abb) list_double2_large_graphic_pane_vc_g2

0x0f89,	// (0x00048ac7) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0f89,	// (0x00048ac7) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c5,	// (0x00057103) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c5,	// (0x00057103) list_double2_large_graphic_pane_vc_g

0xec75,	// (0x000567b3) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xec75,	// (0x000567b3) list_double2_large_graphic_pane_vc_t1

0x1436,	// (0x00048f74) list_double_time_pane_vc_g1_ParamLimits

0x1436,	// (0x00048f74) list_double_time_pane_vc_g1

0x1442,	// (0x00048f80) list_double_time_pane_vc_g2_ParamLimits

0x1442,	// (0x00048f80) list_double_time_pane_vc_g2

0x0001,

0xfa29,	// (0x00057567) list_double_time_pane_vc_g_ParamLimits

0xfa29,	// (0x00057567) list_double_time_pane_vc_g

0xef8a,	// (0x00056ac8) list_double_time_pane_vc_t1_ParamLimits

0xef8a,	// (0x00056ac8) list_double_time_pane_vc_t1

0xefb4,	// (0x00056af2) list_double_time_pane_vc_t2_ParamLimits

0xefb4,	// (0x00056af2) list_double_time_pane_vc_t2

0xeffd,	// (0x00056b3b) list_double_time_pane_vc_t3_ParamLimits

0xeffd,	// (0x00056b3b) list_double_time_pane_vc_t3

0xf00f,	// (0x00056b4d) list_double_time_pane_vc_t4_ParamLimits

0xf00f,	// (0x00056b4d) list_double_time_pane_vc_t4

0x0003,

0xfa2e,	// (0x0005756c) list_double_time_pane_vc_t_ParamLimits

0xfa2e,	// (0x0005756c) list_double_time_pane_vc_t

0x0f7d,	// (0x00048abb) list_double_pane_vc_g1_ParamLimits

0x0f7d,	// (0x00048abb) list_double_pane_vc_g1

0x0f89,	// (0x00048ac7) list_double_pane_vc_g2_ParamLimits

0x0f89,	// (0x00048ac7) list_double_pane_vc_g2

0x0001,

0xf5ad,	// (0x000570eb) list_double_pane_vc_g_ParamLimits

0xf5ad,	// (0x000570eb) list_double_pane_vc_g

0xf023,	// (0x00056b61) list_double_pane_vc_t1_ParamLimits

0xf023,	// (0x00056b61) list_double_pane_vc_t1

0xf037,	// (0x00056b75) list_double_pane_vc_t2_ParamLimits

0xf037,	// (0x00056b75) list_double_pane_vc_t2

0x0001,

0xfa37,	// (0x00057575) list_double_pane_vc_t_ParamLimits

0xfa37,	// (0x00057575) list_double_pane_vc_t

0x0f7d,	// (0x00048abb) list_double_number_pane_vc_g1_ParamLimits

0x0f7d,	// (0x00048abb) list_double_number_pane_vc_g1

0x0f89,	// (0x00048ac7) list_double_number_pane_vc_g2_ParamLimits

0x0f89,	// (0x00048ac7) list_double_number_pane_vc_g2

0x0001,

0xf5ad,	// (0x000570eb) list_double_number_pane_vc_g_ParamLimits

0xf5ad,	// (0x000570eb) list_double_number_pane_vc_g

0xeece,	// (0x00056a0c) list_double_number_pane_vc_t1_ParamLimits

0xeece,	// (0x00056a0c) list_double_number_pane_vc_t1

0xf04d,	// (0x00056b8b) list_double_number_pane_vc_t2_ParamLimits

0xf04d,	// (0x00056b8b) list_double_number_pane_vc_t2

0xf037,	// (0x00056b75) list_double_number_pane_vc_t3_ParamLimits

0xf037,	// (0x00056b75) list_double_number_pane_vc_t3

0x0002,

0xfa3c,	// (0x0005757a) list_double_number_pane_vc_t_ParamLimits

0xfa3c,	// (0x0005757a) list_double_number_pane_vc_t

0x144e,	// (0x00048f8c) list_double_large_graphic_pane_vc_g1_ParamLimits

0x144e,	// (0x00048f8c) list_double_large_graphic_pane_vc_g1

0x1470,	// (0x00048fae) list_double_large_graphic_pane_vc_g2_ParamLimits

0x1470,	// (0x00048fae) list_double_large_graphic_pane_vc_g2

0x1484,	// (0x00048fc2) list_double_large_graphic_pane_vc_g3_ParamLimits

0x1484,	// (0x00048fc2) list_double_large_graphic_pane_vc_g3

0xf061,	// (0x00056b9f) list_double_large_graphic_pane_vc_g4_ParamLimits

0xf061,	// (0x00056b9f) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa43,	// (0x00057581) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa43,	// (0x00057581) list_double_large_graphic_pane_vc_g

0xf06d,	// (0x00056bab) list_double_large_graphic_pane_vc_t1_ParamLimits

0xf06d,	// (0x00056bab) list_double_large_graphic_pane_vc_t1

0xf089,	// (0x00056bc7) list_double_large_graphic_pane_vc_t2_ParamLimits

0xf089,	// (0x00056bc7) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa4c,	// (0x0005758a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa4c,	// (0x0005758a) list_double_large_graphic_pane_vc_t

0x2939,	// (0x0004a477) list_double_heading_pane_vc_g1_ParamLimits

0x2939,	// (0x0004a477) list_double_heading_pane_vc_g1

0x141e,	// (0x00048f5c) list_double_heading_pane_vc_g2_ParamLimits

0x141e,	// (0x00048f5c) list_double_heading_pane_vc_g2

0x0001,

0xfa51,	// (0x0005758f) list_double_heading_pane_vc_g_ParamLimits

0xfa51,	// (0x0005758f) list_double_heading_pane_vc_g

0xf0a9,	// (0x00056be7) list_double_heading_pane_vc_t1_ParamLimits

0xf0a9,	// (0x00056be7) list_double_heading_pane_vc_t1

0xf0bb,	// (0x00056bf9) list_double_heading_pane_vc_t2_ParamLimits

0xf0bb,	// (0x00056bf9) list_double_heading_pane_vc_t2

0x0001,

0xfa56,	// (0x00057594) list_double_heading_pane_vc_t_ParamLimits

0xfa56,	// (0x00057594) list_double_heading_pane_vc_t

0xf0d3,	// (0x00056c11) list_double_graphic_pane_vc_g1_ParamLimits

0xf0d3,	// (0x00056c11) list_double_graphic_pane_vc_g1

0x1493,	// (0x00048fd1) list_double_graphic_pane_vc_g2_ParamLimits

0x1493,	// (0x00048fd1) list_double_graphic_pane_vc_g2

0x0f7d,	// (0x00048abb) list_double_graphic_pane_vc_g3_ParamLimits

0x0f7d,	// (0x00048abb) list_double_graphic_pane_vc_g3

0x0003,

0xfa5b,	// (0x00057599) list_double_graphic_pane_vc_g_ParamLimits

0xfa5b,	// (0x00057599) list_double_graphic_pane_vc_g

0xf0df,	// (0x00056c1d) list_double_graphic_pane_vc_t1_ParamLimits

0xf0df,	// (0x00056c1d) list_double_graphic_pane_vc_t1

0xf109,	// (0x00056c47) list_double_graphic_pane_vc_t2_ParamLimits

0xf109,	// (0x00056c47) list_double_graphic_pane_vc_t2

0x0001,

0xfa64,	// (0x000575a2) list_double_graphic_pane_vc_t_ParamLimits

0xfa64,	// (0x000575a2) list_double_graphic_pane_vc_t

0xf2c6,	// (0x00056e04) aid_size_cell_fastswap

0x9feb,	// (0x00051b29) aid_size_cell_touch_ParamLimits

0x9feb,	// (0x00051b29) aid_size_cell_touch

0xf443,	// (0x00056f81) popup_fast_swap_wide_window_ParamLimits

0xf443,	// (0x00056f81) popup_fast_swap_wide_window

0xa1b3,	// (0x00051cf1) touch_pane_ParamLimits

0xa1b3,	// (0x00051cf1) touch_pane

0xac9a,	// (0x000527d8) button_value_adjust_pane_cp2

0xec99,	// (0x000567d7) button_value_adjust_pane_cp4

0xeca1,	// (0x000567df) form_field_data_pane_cp2

0x9c30,	// (0x0005176e) form_field_data_wide_pane_cp2

0xe2f1,	// (0x00055e2f) bg_scroll_pane_ParamLimits

0x0359,	// (0x00047e97) scroll_handle_pane_ParamLimits

0x036d,	// (0x00047eab) scroll_sc2_down_pane_ParamLimits

0x036d,	// (0x00047eab) scroll_sc2_down_pane

0xe322,	// (0x00055e60) scroll_sc2_up_pane_ParamLimits

0xe322,	// (0x00055e60) scroll_sc2_up_pane

0xd011,	// (0x00054b4f) grid_wheel_folder_pane_g1_ParamLimits

0xd011,	// (0x00054b4f) grid_wheel_folder_pane_g1

0x06b8,	// (0x000481f6) clock_nsta_pane_cp2_ParamLimits

0x06b8,	// (0x000481f6) clock_nsta_pane_cp2

0xb22b,	// (0x00052d69) listscroll_midp_pane_ParamLimits

0xb237,	// (0x00052d75) midp_canvas_pane

0x2cc7,	// (0x0004a805) nsta_clock_indic_pane

0x2cfb,	// (0x0004a839) listscroll_form_pane_vc

0x2d03,	// (0x0004a841) listscroll_set_pane_vc_ParamLimits

0x2d03,	// (0x0004a841) listscroll_set_pane_vc

0xc694,	// (0x000541d2) clock_nsta_pane

0xc6be,	// (0x000541fc) indicator_nsta_pane

0x3165,	// (0x0004aca3) bg_popup_sub_pane_cp2_ParamLimits

0x3179,	// (0x0004acb7) find_pane_cp2_ParamLimits

0x3179,	// (0x0004acb7) find_pane_cp2

0x318f,	// (0x0004accd) grid_toobar_pane_ParamLimits

0x326f,	// (0x0004adad) list_form_gen_pane_vc_ParamLimits

0x326f,	// (0x0004adad) list_form_gen_pane_vc

0x3285,	// (0x0004adc3) scroll_pane_cp8_vc_ParamLimits

0x3285,	// (0x0004adc3) scroll_pane_cp8_vc

0x3301,	// (0x0004ae3f) data_form_wide_pane_vc_ParamLimits

0x3301,	// (0x0004ae3f) data_form_wide_pane_vc

0x330d,	// (0x0004ae4b) form_field_data_wide_pane_vc_g1

0x3315,	// (0x0004ae53) form_field_data_wide_pane_vc_t1_ParamLimits

0x3315,	// (0x0004ae53) form_field_data_wide_pane_vc_t1

0xacae,	// (0x000527ec) input_focus_pane_cp6_vc_ParamLimits

0xacae,	// (0x000527ec) input_focus_pane_cp6_vc

0x3631,	// (0x0004b16f) list_midp_pane_ParamLimits

0x49c3,	// (0x0004c501) scroll_pane_cp16_ParamLimits

0x49c3,	// (0x0004c501) scroll_pane_cp16

0x3687,	// (0x0004b1c5) button_value_adjust_pane_ParamLimits

0x3687,	// (0x0004b1c5) button_value_adjust_pane

0xcc67,	// (0x000547a5) button_value_adjust_pane_cp6_ParamLimits

0xcc67,	// (0x000547a5) button_value_adjust_pane_cp6

0xcda3,	// (0x000548e1) settings_code_pane_cp_ParamLimits

0xcda3,	// (0x000548e1) settings_code_pane_cp

0x9fe1,	// (0x00051b1f) cell_touch_pane_g1

0x9fe1,	// (0x00051b1f) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x00057221) cell_touch_pane_g

0xcee5,	// (0x00054a23) cell_touch_pane_cp_ParamLimits

0xcee5,	// (0x00054a23) cell_touch_pane_cp

0xcf01,	// (0x00054a3f) cell_touch_pane_ParamLimits

0xcf01,	// (0x00054a3f) cell_touch_pane

0x9fe1,	// (0x00051b1f) scroll_sc2_down_pane_g1

0x9fe1,	// (0x00051b1f) scroll_sc2_up_pane_g1

0xa0d1,	// (0x00051c0f) bg_set_opt_pane_cp4_vc

0x4d61,	// (0x0004c89f) list_set_graphic_pane_vc_g1_ParamLimits

0x4d61,	// (0x0004c89f) list_set_graphic_pane_vc_g1

0x4d6d,	// (0x0004c8ab) list_set_graphic_pane_vc_g2_ParamLimits

0x4d6d,	// (0x0004c8ab) list_set_graphic_pane_vc_g2

0x0001,

0xf9da,	// (0x00057518) list_set_graphic_pane_vc_g_ParamLimits

0xf9da,	// (0x00057518) list_set_graphic_pane_vc_g

0x4d79,	// (0x0004c8b7) text_primary_small_cp13_vc_ParamLimits

0x4d79,	// (0x0004c8b7) text_primary_small_cp13_vc

0x4d91,	// (0x0004c8cf) list_set_graphic_pane_vc_ParamLimits

0x4d91,	// (0x0004c8cf) list_set_graphic_pane_vc

0xa0d1,	// (0x00051c0f) input_focus_pane_cp2_vc

0x9fe1,	// (0x00051b1f) setting_code_pane_vc_g1

0xa375,	// (0x00051eb3) setting_code_pane_vc_t1

0x4da4,	// (0x0004c8e2) set_text_pane_vc_t1_ParamLimits

0x4da4,	// (0x0004c8e2) set_text_pane_vc_t1

0xa0d1,	// (0x00051c0f) input_focus_pane_cp1_vc

0x4dc5,	// (0x0004c903) list_set_text_pane_vc

0x9fe1,	// (0x00051b1f) setting_text_pane_vc_g1

0xa0d1,	// (0x00051c0f) bg_set_opt_pane_cp2_vc

0xa36c,	// (0x00051eaa) setting_slider_graphic_pane_vc_g1

0x4dcf,	// (0x0004c90d) setting_slider_graphic_pane_vc_t1

0x4de1,	// (0x0004c91f) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9df,	// (0x0005751d) setting_slider_graphic_pane_vc_t

0x4df3,	// (0x0004c931) slider_set_pane_cp_vc

0x4dfd,	// (0x0004c93b) slider_set_pane_vc_g1

0x4e06,	// (0x0004c944) slider_set_pane_vc_g2

0x0006,

0xf9e4,	// (0x00057522) slider_set_pane_vc_g

0xad06,	// (0x00052844) set_opt_bg_pane_g1_copy1

0xad0e,	// (0x0005284c) set_opt_bg_pane_g2_copy1

0x4e32,	// (0x0004c970) set_opt_bg_pane_g3_copy1

0xad1e,	// (0x0005285c) set_opt_bg_pane_g4_copy1

0xad26,	// (0x00052864) set_opt_bg_pane_g5_copy1

0xad2e,	// (0x0005286c) set_opt_bg_pane_g6_copy1

0x4e3c,	// (0x0004c97a) set_opt_bg_pane_g7_copy1

0x4e46,	// (0x0004c984) set_opt_bg_pane_g8_copy1

0x4e50,	// (0x0004c98e) set_opt_bg_pane_g9_copy1

0xa0d1,	// (0x00051c0f) bg_set_opt_pane_cp_vc

0x4e5a,	// (0x0004c998) setting_slider_pane_vc_t1

0x4e69,	// (0x0004c9a7) setting_slider_pane_vc_t2

0x4e7b,	// (0x0004c9b9) setting_slider_pane_vc_t3

0x0002,

0xf9f3,	// (0x00057531) setting_slider_pane_vc_t

0x4e8d,	// (0x0004c9cb) slider_set_pane_vc

0x10b2,	// (0x00048bf0) volume_set_pane_vc_g1

0x10bb,	// (0x00048bf9) volume_set_pane_vc_g2

0x10c4,	// (0x00048c02) volume_set_pane_vc_g3

0x10cd,	// (0x00048c0b) volume_set_pane_vc_g4

0x10d6,	// (0x00048c14) volume_set_pane_vc_g5

0x10df,	// (0x00048c1d) volume_set_pane_vc_g6

0x10e8,	// (0x00048c26) volume_set_pane_vc_g7

0x10f1,	// (0x00048c2f) volume_set_pane_vc_g8

0x10fa,	// (0x00048c38) volume_set_pane_vc_g9

0x1103,	// (0x00048c41) volume_set_pane_vc_g10

0x0009,

0xf9fa,	// (0x00057538) volume_set_pane_vc_g

0x4e97,	// (0x0004c9d5) volume_set_pane_vc

0x4ea1,	// (0x0004c9df) button_value_adjust_pane_cp1_vc

0x4eab,	// (0x0004c9e9) list_highlight_pane_cp2_vc

0x4eb4,	// (0x0004c9f2) list_set_pane_vc_ParamLimits

0x4eb4,	// (0x0004c9f2) list_set_pane_vc

0x4f22,	// (0x0004ca60) main_pane_set_vc_t1_ParamLimits

0x4f22,	// (0x0004ca60) main_pane_set_vc_t1

0x4f37,	// (0x0004ca75) main_pane_set_vc_t2_ParamLimits

0x4f37,	// (0x0004ca75) main_pane_set_vc_t2

0x4f49,	// (0x0004ca87) main_pane_set_vc_t3_ParamLimits

0x4f49,	// (0x0004ca87) main_pane_set_vc_t3

0x4f5d,	// (0x0004ca9b) main_pane_set_vc_t4_ParamLimits

0x4f5d,	// (0x0004ca9b) main_pane_set_vc_t4

0x0003,

0xfa0f,	// (0x0005754d) main_pane_set_vc_t_ParamLimits

0xfa0f,	// (0x0005754d) main_pane_set_vc_t

0x4f71,	// (0x0004caaf) setting_code_pane_vc_ParamLimits

0x4f71,	// (0x0004caaf) setting_code_pane_vc

0x4f82,	// (0x0004cac0) setting_slider_graphic_pane_vc

0x4f82,	// (0x0004cac0) setting_slider_pane_vc

0x4f82,	// (0x0004cac0) setting_text_pane_vc

0x4f82,	// (0x0004cac0) setting_volume_pane_vc

0x4f8c,	// (0x0004caca) scroll_pane_cp121_vc

0xac88,	// (0x000527c6) set_content_pane_vc

0x4f94,	// (0x0004cad2) button_value_adjust_pane_g1

0x4f9d,	// (0x0004cadb) button_value_adjust_pane_g2

0x0001,

0xfa69,	// (0x000575a7) button_value_adjust_pane_g

0x4fa6,	// (0x0004cae4) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4fa6,	// (0x0004cae4) form_field_slider_wide_pane_vc_t1

0x4fb8,	// (0x0004caf6) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4fb8,	// (0x0004caf6) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa6e,	// (0x000575ac) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa6e,	// (0x000575ac) form_field_slider_wide_pane_vc_t

0xa31c,	// (0x00051e5a) input_focus_pane_cp10_vc_ParamLimits

0xa31c,	// (0x00051e5a) input_focus_pane_cp10_vc

0x4fe4,	// (0x0004cb22) slider_cont_pane_cp1_vc_ParamLimits

0x4fe4,	// (0x0004cb22) slider_cont_pane_cp1_vc

0x4ff6,	// (0x0004cb34) slider_form_pane_g1_cp2

0x4e06,	// (0x0004c944) slider_form_pane_g2_cp2

0x5023,	// (0x0004cb61) form_field_slider_pane_vc_t3

0x5031,	// (0x0004cb6f) form_field_slider_pane_vc_t4

0x503f,	// (0x0004cb7d) slider_form_pane_vc_ParamLimits

0x503f,	// (0x0004cb7d) slider_form_pane_vc

0x504c,	// (0x0004cb8a) form_field_slider_pane_vc_t1_ParamLimits

0x504c,	// (0x0004cb8a) form_field_slider_pane_vc_t1

0x4fb8,	// (0x0004caf6) form_field_slider_pane_vc_t2_ParamLimits

0x4fb8,	// (0x0004caf6) form_field_slider_pane_vc_t2

0x0001,

0xfa80,	// (0x000575be) form_field_slider_pane_vc_t_ParamLimits

0xfa80,	// (0x000575be) form_field_slider_pane_vc_t

0xa31c,	// (0x00051e5a) input_focus_pane_cp9_vc_ParamLimits

0xa31c,	// (0x00051e5a) input_focus_pane_cp9_vc

0x5062,	// (0x0004cba0) slider_cont_pane_vc_ParamLimits

0x5062,	// (0x0004cba0) slider_cont_pane_vc

0x5076,	// (0x0004cbb4) list_form_graphic_pane_cp_vc_ParamLimits

0x5076,	// (0x0004cbb4) list_form_graphic_pane_cp_vc

0x330d,	// (0x0004ae4b) form_field_popup_wide_pane_vc_g1

0x508b,	// (0x0004cbc9) form_field_popup_wide_pane_vc_t1_ParamLimits

0x508b,	// (0x0004cbc9) form_field_popup_wide_pane_vc_t1

0xacae,	// (0x000527ec) input_focus_pane_cp8_vc_ParamLimits

0xacae,	// (0x000527ec) input_focus_pane_cp8_vc

0x50d0,	// (0x0004cc0e) list_form_wide_pane_vc_ParamLimits

0x50d0,	// (0x0004cc0e) list_form_wide_pane_vc

0x50dc,	// (0x0004cc1a) list_form_graphic_pane_vc_g1

0x50e4,	// (0x0004cc22) list_form_graphic_pane_vc_t1_ParamLimits

0x50e4,	// (0x0004cc22) list_form_graphic_pane_vc_t1

0xa35e,	// (0x00051e9c) list_highlight_pane_cp5_vc_ParamLimits

0xa35e,	// (0x00051e9c) list_highlight_pane_cp5_vc

0x5100,	// (0x0004cc3e) list_form_graphic_pane_vc_ParamLimits

0x5100,	// (0x0004cc3e) list_form_graphic_pane_vc

0x330d,	// (0x0004ae4b) form_field_popup_pane_vc_g1

0x5116,	// (0x0004cc54) form_field_popup_pane_vc_t1_ParamLimits

0x5116,	// (0x0004cc54) form_field_popup_pane_vc_t1

0xacae,	// (0x000527ec) input_focus_pane_cp7_vc_ParamLimits

0xacae,	// (0x000527ec) input_focus_pane_cp7_vc

0x512d,	// (0x0004cc6b) list_form_pane_vc_ParamLimits

0x512d,	// (0x0004cc6b) list_form_pane_vc

0x5139,	// (0x0004cc77) data_form_pane_vc_t1_ParamLimits

0x5139,	// (0x0004cc77) data_form_pane_vc_t1

0xad06,	// (0x00052844) input_focus_pane_vc_g1

0xad0e,	// (0x0005284c) input_focus_pane_vc_g2

0xad16,	// (0x00052854) input_focus_pane_vc_g3

0xad1e,	// (0x0005285c) input_focus_pane_vc_g4

0xad26,	// (0x00052864) input_focus_pane_vc_g5

0xad2e,	// (0x0005286c) input_focus_pane_vc_g6

0xad36,	// (0x00052874) input_focus_pane_vc_g7

0xad3e,	// (0x0005287c) input_focus_pane_vc_g8

0xad46,	// (0x00052884) input_focus_pane_vc_g9

0x9fe1,	// (0x00051b1f) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x000571aa) input_focus_pane_vc_g

0x3301,	// (0x0004ae3f) data_form_pane_vc_ParamLimits

0x3301,	// (0x0004ae3f) data_form_pane_vc

0x330d,	// (0x0004ae4b) form_field_data_pane_vc_g1

0x5156,	// (0x0004cc94) form_field_data_pane_vc_t1_ParamLimits

0x5156,	// (0x0004cc94) form_field_data_pane_vc_t1

0xacae,	// (0x000527ec) input_focus_pane_vc_ParamLimits

0xacae,	// (0x000527ec) input_focus_pane_vc

0x5170,	// (0x0004ccae) button_value_adjust_pane_cp3_vc

0x5178,	// (0x0004ccb6) button_value_adjust_pane_cp5_vc

0x5180,	// (0x0004ccbe) form_field_data_pane_vc_ParamLimits

0x5180,	// (0x0004ccbe) form_field_data_pane_vc

0x519b,	// (0x0004ccd9) form_field_data_pane_vc_cp2

0x51a3,	// (0x0004cce1) form_field_data_wide_pane_vc_ParamLimits

0x51a3,	// (0x0004cce1) form_field_data_wide_pane_vc

0x51bd,	// (0x0004ccfb) form_field_data_wide_pane_vc_cp2

0x51c5,	// (0x0004cd03) form_field_popup_pane_vc_ParamLimits

0x51c5,	// (0x0004cd03) form_field_popup_pane_vc

0x51e0,	// (0x0004cd1e) form_field_popup_wide_pane_vc_ParamLimits

0x51e0,	// (0x0004cd1e) form_field_popup_wide_pane_vc

0x51fa,	// (0x0004cd38) form_field_slider_pane_vc_ParamLimits

0x51fa,	// (0x0004cd38) form_field_slider_pane_vc

0x520d,	// (0x0004cd4b) form_field_slider_wide_pane_vc_ParamLimits

0x520d,	// (0x0004cd4b) form_field_slider_wide_pane_vc

0xcf1f,	// (0x00054a5d) grid_touch_1_pane_ParamLimits

0xcf1f,	// (0x00054a5d) grid_touch_1_pane

0xcf33,	// (0x00054a71) grid_touch_2_pane_ParamLimits

0xcf33,	// (0x00054a71) grid_touch_2_pane

0x52f3,	// (0x0004ce31) touch_pane_g1_ParamLimits

0x52f3,	// (0x0004ce31) touch_pane_g1

0x5246,	// (0x0004cd84) cell_app_pane_cp_wide_ParamLimits

0x5246,	// (0x0004cd84) cell_app_pane_cp_wide

0x5257,	// (0x0004cd95) grid_popup_fast_wide_pane_ParamLimits

0x5257,	// (0x0004cd95) grid_popup_fast_wide_pane

0x526b,	// (0x0004cda9) scroll_pane_cp19_ParamLimits

0x526b,	// (0x0004cda9) scroll_pane_cp19

0xa0d1,	// (0x00051c0f) bg_popup_window_pane_cp20

0x527f,	// (0x0004cdbd) listscroll_popup_fast_wide_pane

0xcf5f,	// (0x00054a9d) grid_indicator_nsta_pane

0x5299,	// (0x0004cdd7) clock_nsta_pane_g1

0x52a2,	// (0x0004cde0) clock_nsta_pane_t1

0xcf6b,	// (0x00054aa9) cell_indicator_nsta_pane_ParamLimits

0xcf6b,	// (0x00054aa9) cell_indicator_nsta_pane

0x52f3,	// (0x0004ce31) cell_indicator_nsta_pane_g1

0xcf86,	// (0x00054ac4) cell_indicator_nsta_pane_g2

0x0001,

0xfa91,	// (0x000575cf) cell_indicator_nsta_pane_g

0x5314,	// (0x0004ce52) clock_nsta_pane_cp

0x531d,	// (0x0004ce5b) indicator_nsta_pane_cp

0x5327,	// (0x0004ce65) nsta_clock_indic_pane_g1

0xa456,	// (0x00051f94) grid_indicator_pane

0xe414,	// (0x00055f52) scroll_pane_cp29

0x0607,	// (0x00048145) indicator_nsta_pane_cp2_ParamLimits

0x0607,	// (0x00048145) indicator_nsta_pane_cp2

0xa35e,	// (0x00051e9c) main_apps_wheel_pane

0x34ee,	// (0x0004b02c) form_midp_field_text_pane_ParamLimits

0x363d,	// (0x0004b17b) scroll_bar_cp050_ParamLimits

0x5380,	// (0x0004cebe) cell_indicator_pane_ParamLimits

0x5380,	// (0x0004cebe) cell_indicator_pane

0x5398,	// (0x0004ced6) cell_indicator_pane_g1

0xcf93,	// (0x00054ad1) grid_wheel_folder_pane_ParamLimits

0xcf93,	// (0x00054ad1) grid_wheel_folder_pane

0xcfa1,	// (0x00054adf) list_wheel_apps_pane_ParamLimits

0xcfa1,	// (0x00054adf) list_wheel_apps_pane

0xcfaf,	// (0x00054aed) main_apps_wheel_pane_g1_ParamLimits

0xcfaf,	// (0x00054aed) main_apps_wheel_pane_g1

0xcfbf,	// (0x00054afd) main_apps_wheel_pane_g2_ParamLimits

0xcfbf,	// (0x00054afd) main_apps_wheel_pane_g2

0x0001,

0xfaad,	// (0x000575eb) main_apps_wheel_pane_g_ParamLimits

0xfaad,	// (0x000575eb) main_apps_wheel_pane_g

0xcfcf,	// (0x00054b0d) main_apps_wheel_pane_t1_ParamLimits

0xcfcf,	// (0x00054b0d) main_apps_wheel_pane_t1

0xcfe7,	// (0x00054b25) list_wheel_apps_pane_g1

0xcfef,	// (0x00054b2d) list_wheel_apps_pane_g2

0xcff7,	// (0x00054b35) list_wheel_apps_pane_g3

0xcfff,	// (0x00054b3d) list_wheel_apps_pane_g4

0xd007,	// (0x00054b45) list_wheel_apps_pane_g5

0x0004,

0xfab2,	// (0x000575f0) list_wheel_apps_pane_g

0x2839,	// (0x0004a377) navi_icon_text_pane

0xbb63,	// (0x000536a1) aid_fill_nsta

0xd022,	// (0x00054b60) navi_icon_text_pane_g1

0xd02e,	// (0x00054b6c) navi_icon_text_pane_t1

0x26db,	// (0x0004a219) list_set_graphic_pane_t1_ParamLimits

0x26db,	// (0x0004a219) list_set_graphic_pane_t1

0x3daa,	// (0x0004b8e8) popup_midp_note_alarm_window_t6_ParamLimits

0x3daa,	// (0x0004b8e8) popup_midp_note_alarm_window_t6

0x3dbc,	// (0x0004b8fa) popup_midp_note_alarm_window_t7_ParamLimits

0x3dbc,	// (0x0004b8fa) popup_midp_note_alarm_window_t7

0x3dce,	// (0x0004b90c) popup_midp_note_alarm_window_t8_ParamLimits

0x3dce,	// (0x0004b90c) popup_midp_note_alarm_window_t8

0x3de0,	// (0x0004b91e) popup_midp_note_alarm_window_t9_ParamLimits

0x3de0,	// (0x0004b91e) popup_midp_note_alarm_window_t9

0x3df2,	// (0x0004b930) popup_midp_note_alarm_window_t10_ParamLimits

0x3df2,	// (0x0004b930) popup_midp_note_alarm_window_t10

0x3e04,	// (0x0004b942) popup_midp_note_alarm_window_t11_ParamLimits

0x3e04,	// (0x0004b942) popup_midp_note_alarm_window_t11

0x3e16,	// (0x0004b954) scroll_pane_cp17_ParamLimits

0x3e16,	// (0x0004b954) scroll_pane_cp17

0x10b2,	// (0x00048bf0) volume_small_pane_cp_g1

0x14b0,	// (0x00048fee) volume_small_pane_cp_g2

0x14b9,	// (0x00048ff7) volume_small_pane_cp_g3

0x14c2,	// (0x00049000) volume_small_pane_cp_g4

0x14cb,	// (0x00049009) volume_small_pane_cp_g5

0x14d4,	// (0x00049012) volume_small_pane_cp_g6

0x14dd,	// (0x0004901b) volume_small_pane_cp_g7

0x14e6,	// (0x00049024) volume_small_pane_cp_g8

0x14ef,	// (0x0004902d) volume_small_pane_cp_g9

0x14f8,	// (0x00049036) volume_small_pane_cp_g10

0x2aa6,	// (0x0004a5e4) midp_ticker_pane_g1_ParamLimits

0x2ab2,	// (0x0004a5f0) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x00057276) midp_ticker_pane_g_ParamLimits

0xb2cf,	// (0x00052e0d) midp_ticker_pane_t1_ParamLimits

0xbb87,	// (0x000536c5) aid_fill_nsta_2

0x3629,	// (0x0004b167) list_form2_midp_pane

0x47a5,	// (0x0004c2e3) midp_editing_number_pane_ParamLimits

0x47b4,	// (0x0004c2f2) midp_ticker_pane_ParamLimits

0x548b,	// (0x0004cfc9) form2_midp_field_pane

0x54af,	// (0x0004cfed) scroll_pane_cp51

0x54cf,	// (0x0004d00d) form2_midp_button_pane_ParamLimits

0x54cf,	// (0x0004d00d) form2_midp_button_pane

0x54e1,	// (0x0004d01f) form2_midp_content_pane_ParamLimits

0x54e1,	// (0x0004d01f) form2_midp_content_pane

0x54fb,	// (0x0004d039) form2_midp_field_choice_group_pane

0x5503,	// (0x0004d041) form2_midp_field_pane_g1

0x550b,	// (0x0004d049) form2_midp_field_pane_g2

0x5513,	// (0x0004d051) form2_midp_field_pane_g3

0x551b,	// (0x0004d059) form2_midp_field_pane_g4

0x0003,

0xfad7,	// (0x00057615) form2_midp_field_pane_g

0x5523,	// (0x0004d061) form2_midp_gauge_slider_pane

0x552b,	// (0x0004d069) form2_midp_gauge_wait_pane

0x5533,	// (0x0004d071) form2_midp_image_pane_ParamLimits

0x5533,	// (0x0004d071) form2_midp_image_pane

0x554e,	// (0x0004d08c) form2_midp_label_pane_ParamLimits

0x554e,	// (0x0004d08c) form2_midp_label_pane

0xd05c,	// (0x00054b9a) form2_midp_label_pane_cp_ParamLimits

0xd05c,	// (0x00054b9a) form2_midp_label_pane_cp

0x558e,	// (0x0004d0cc) form2_midp_string_pane_ParamLimits

0x558e,	// (0x0004d0cc) form2_midp_string_pane

0x9e23,	// (0x00051961) form2_midp_text_pane_ParamLimits

0x9e23,	// (0x00051961) form2_midp_text_pane

0x55a0,	// (0x0004d0de) form2_midp_time_pane

0x55b0,	// (0x0004d0ee) input_focus_pane_cp51_ParamLimits

0x55b0,	// (0x0004d0ee) input_focus_pane_cp51

0x55c8,	// (0x0004d106) form2_midp_label_pane_t1_ParamLimits

0x55c8,	// (0x0004d106) form2_midp_label_pane_t1

0x9e46,	// (0x00051984) form2_mdip_text_pane_t1_ParamLimits

0x9e46,	// (0x00051984) form2_mdip_text_pane_t1

0xf127,	// (0x00056c65) form2_midp_time_pane_t1

0x5616,	// (0x0004d154) form2_midp_gauge_slider_pane_t1

0xd07d,	// (0x00054bbb) form2_midp_gauge_slider_pane_t2

0xd08f,	// (0x00054bcd) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae0,	// (0x0005761e) form2_midp_gauge_slider_pane_t

0x564c,	// (0x0004d18a) form2_midp_slider_pane

0x5658,	// (0x0004d196) form2_midp_gauge_wait_pane_t1

0x5666,	// (0x0004d1a4) form2_midp_wait_pane_ParamLimits

0x5666,	// (0x0004d1a4) form2_midp_wait_pane

0x3354,	// (0x0004ae92) list_single_2graphic_pane_cp4_ParamLimits

0x3354,	// (0x0004ae92) list_single_2graphic_pane_cp4

0xc9e6,	// (0x00054524) list_single_midp_graphic_pane_cp_ParamLimits

0xc9e6,	// (0x00054524) list_single_midp_graphic_pane_cp

0xa0d1,	// (0x00051c0f) list_highlight_pane_cp20

0x56aa,	// (0x0004d1e8) list_single_2graphic_pane_g1_cp4

0x4c43,	// (0x0004c781) list_single_2graphic_pane_g2_cp4

0x56b2,	// (0x0004d1f0) list_single_2graphic_pane_t1_cp4

0xa35e,	// (0x00051e9c) list_highlight_pane_cp21

0x56c1,	// (0x0004d1ff) list_single_midp_graphic_pane_g4_cp

0x56d0,	// (0x0004d20e) list_single_midp_graphic_pane_t1_cp

0xd0a1,	// (0x00054bdf) form2_mdip_string_pane_t1_ParamLimits

0xd0a1,	// (0x00054bdf) form2_mdip_string_pane_t1

0xa0d1,	// (0x00051c0f) bg_wml_button_pane_cp2

0x9fe1,	// (0x00051b1f) form2_midp_image_pane_g1

0x0026,	// (0x00047b64) list_double_large_graphic_pane_g5_ParamLimits

0x0026,	// (0x00047b64) list_double_large_graphic_pane_g5

0xb22b,	// (0x00052d69) midp_form_pane_ParamLimits

0xa35e,	// (0x00051e9c) main_apps_wheel_pane_ParamLimits

0xb87b,	// (0x000533b9) popup_preview_window_ParamLimits

0xb87b,	// (0x000533b9) popup_preview_window

0x0ee6,	// (0x00048a24) popup_touch_info_window_ParamLimits

0x0ee6,	// (0x00048a24) popup_touch_info_window

0x0f08,	// (0x00048a46) popup_touch_menu_window_ParamLimits

0x0f08,	// (0x00048a46) popup_touch_menu_window

0x9fd7,	// (0x00051b15) bg_popup_sub_pane_cp6

0x5781,	// (0x0004d2bf) list_touch_menu_pane

0x5789,	// (0x0004d2c7) list_single_touch_menu_pane_ParamLimits

0x5789,	// (0x0004d2c7) list_single_touch_menu_pane

0x57a1,	// (0x0004d2df) list_single_touch_menu_pane_t1

0xa35e,	// (0x00051e9c) bg_popup_sub_pane_cp7_ParamLimits

0xa35e,	// (0x00051e9c) bg_popup_sub_pane_cp7

0x57af,	// (0x0004d2ed) heading_sub_pane

0x57b7,	// (0x0004d2f5) list_touch_info_pane_ParamLimits

0x57b7,	// (0x0004d2f5) list_touch_info_pane

0x57c6,	// (0x0004d304) list_single_touch_info_pane_ParamLimits

0x57c6,	// (0x0004d304) list_single_touch_info_pane

0x57d8,	// (0x0004d316) list_single_touch_info_pane_t1

0x57e6,	// (0x0004d324) list_single_touch_info_pane_t2

0x0001,

0xfaee,	// (0x0005762c) list_single_touch_info_pane_t

0x29c8,	// (0x0004a506) bg_popup_heading_pane_cp

0x57f4,	// (0x0004d332) heading_sub_pane_t1

0x329b,	// (0x0004add9) bg_popup_preview_window_pane_cp_ParamLimits

0x329b,	// (0x0004add9) bg_popup_preview_window_pane_cp

0x57af,	// (0x0004d2ed) heading_preview_pane

0x57b7,	// (0x0004d2f5) list_preview_pane_ParamLimits

0x57b7,	// (0x0004d2f5) list_preview_pane

0x5802,	// (0x0004d340) popup_preview_window_g1

0x57c6,	// (0x0004d304) list_single_preview_pane_ParamLimits

0x57c6,	// (0x0004d304) list_single_preview_pane

0x580a,	// (0x0004d348) list_single_preview_pane_g1

0x5812,	// (0x0004d350) list_single_preview_pane_t1

0x57d8,	// (0x0004d316) list_single_preview_pane_t2

0x0001,

0xfaf3,	// (0x00057631) list_single_preview_pane_t

0x5820,	// (0x0004d35e) bg_popup_heading_pane_cp2_ParamLimits

0x5820,	// (0x0004d35e) bg_popup_heading_pane_cp2

0x5836,	// (0x0004d374) heading_preview_pane_g1

0x583e,	// (0x0004d37c) heading_preview_pane_t1_ParamLimits

0x583e,	// (0x0004d37c) heading_preview_pane_t1

0xa486,	// (0x00051fc4) soft_indicator_pane_t1_ParamLimits

0xabd2,	// (0x00052710) scroll_pane_ParamLimits

0xe310,	// (0x00055e4e) scroll_sc2_left_pane

0xe319,	// (0x00055e57) scroll_sc2_right_pane

0xe338,	// (0x00055e76) scroll_bg_pane_g1_ParamLimits

0xe34d,	// (0x00055e8b) scroll_bg_pane_g2_ParamLimits

0xe365,	// (0x00055ea3) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x00057201) scroll_bg_pane_g_ParamLimits

0xe338,	// (0x00055e76) scroll_handle_pane_g1_ParamLimits

0xe387,	// (0x00055ec5) scroll_handle_pane_g2_ParamLimits

0xe365,	// (0x00055ea3) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x00057208) scroll_handle_pane_g_ParamLimits

0x0944,	// (0x00048482) popup_choice_list_window_ParamLimits

0x0944,	// (0x00048482) popup_choice_list_window

0x3171,	// (0x0004acaf) choice_list_pane

0x31f3,	// (0x0004ad31) cell_toolbar_pane_t1

0x321b,	// (0x0004ad59) toolbar_button_pane_ParamLimits

0x42e0,	// (0x0004be1e) ai_gene_pane_1_t2_ParamLimits

0x42e0,	// (0x0004be1e) ai_gene_pane_1_t2

0x0001,

0xf8ed,	// (0x0005742b) ai_gene_pane_1_t_ParamLimits

0xf8ed,	// (0x0005742b) ai_gene_pane_1_t

0x585b,	// (0x0004d399) scroll_sc2_left_pane_g1

0x585b,	// (0x0004d399) scroll_sc2_right_pane_g1

0x2cef,	// (0x0004a82d) bg_popup_sub_pane_cp10

0x5865,	// (0x0004d3a3) list_choice_list_pane

0x587e,	// (0x0004d3bc) list_single_choice_list_pane_ParamLimits

0x587e,	// (0x0004d3bc) list_single_choice_list_pane

0x5896,	// (0x0004d3d4) list_single_choice_list_pane_g1

0xae59,	// (0x00052997) list_single_choice_list_pane_t1_ParamLimits

0xae59,	// (0x00052997) list_single_choice_list_pane_t1

0x589e,	// (0x0004d3dc) choice_list_pane_g1

0x58a6,	// (0x0004d3e4) choice_list_pane_t1

0x9fd7,	// (0x00051b15) input_focus_pane_cp11

0xc57a,	// (0x000540b8) title_pane_stacon_g2_ParamLimits

0xc57a,	// (0x000540b8) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x000571e7) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x000571e7) title_pane_stacon_g

0x29c8,	// (0x0004a506) cursor_press_pane

0xb4f2,	// (0x00053030) popup_fep_hwr_window_ParamLimits

0xb4f2,	// (0x00053030) popup_fep_hwr_window

0x0a88,	// (0x000485c6) popup_fep_vkb_window_ParamLimits

0x0a88,	// (0x000485c6) popup_fep_vkb_window

0x58b4,	// (0x0004d3f2) cursor_press_pane_g1

0x0002,

0xfb1c,	// (0x0005765a) fep_vkb_side_pane_g_ParamLimits

0x153a,	// (0x00049078) fep_hwr_candidate_pane_ParamLimits

0x153a,	// (0x00049078) fep_hwr_candidate_pane

0x1564,	// (0x000490a2) fep_hwr_side_pane_ParamLimits

0x1564,	// (0x000490a2) fep_hwr_side_pane

0x1586,	// (0x000490c4) fep_hwr_top_pane_ParamLimits

0x1586,	// (0x000490c4) fep_hwr_top_pane

0x159e,	// (0x000490dc) fep_hwr_write_pane_ParamLimits

0x159e,	// (0x000490dc) fep_hwr_write_pane

0xfb1c,	// (0x0005765a) fep_vkb_side_pane_g

0x58bc,	// (0x0004d3fa) fep_hwr_top_pane_g1

0x58ce,	// (0x0004d40c) fep_hwr_top_pane_g2

0x15ca,	// (0x00049108) fep_hwr_top_pane_g3

0x0002,

0xfaf8,	// (0x00057636) fep_hwr_top_pane_g

0x15df,	// (0x0004911d) fep_hwr_top_text_pane

0xe481,	// (0x00055fbf) fep_hwr_top_text_pane_g1

0x5904,	// (0x0004d442) fep_hwr_top_text_pane_t1

0x16e9,	// (0x00049227) fep_hwr_candidate_pane_g1

0x5b4f,	// (0x0004d68d) fep_vkb_keypad_pane_g3_ParamLimits

0x5b4f,	// (0x0004d68d) fep_vkb_keypad_pane_g3

0x5b7b,	// (0x0004d6b9) fep_vkb_keypad_pane_g4_ParamLimits

0x5b7b,	// (0x0004d6b9) fep_vkb_keypad_pane_g4

0x5bf2,	// (0x0004d730) fep_vkb_bottom_pane_g2_ParamLimits

0x5bf2,	// (0x0004d730) fep_vkb_bottom_pane_g2

0x0001,

0xfb23,	// (0x00057661) fep_vkb_bottom_pane_g_ParamLimits

0xfb23,	// (0x00057661) fep_vkb_bottom_pane_g

0x585b,	// (0x0004d399) cell_vkb_side_pane_g2

0x0001,

0xfb2d,	// (0x0005766b) cell_vkb_side_pane_g

0x5c7d,	// (0x0004d7bb) cell_vkb_side_pane_t1

0x5c8b,	// (0x0004d7c9) cell_vkb_side_pane_t1_copy1

0x585b,	// (0x0004d399) bg_fep_vkb_candidate_pane_g2

0x5dcf,	// (0x0004d90d) cell_vkb_candidate_pane_ParamLimits

0x5912,	// (0x0004d450) aid_size_cell_vkb_ParamLimits

0x5912,	// (0x0004d450) aid_size_cell_vkb

0x5dcf,	// (0x0004d90d) cell_vkb_candidate_pane

0x1703,	// (0x00049241) bg_popup_fep_shadow_pane_g1

0xd15f,	// (0x00054c9d) fep_vkb_bottom_pane_ParamLimits

0xd15f,	// (0x00054c9d) fep_vkb_bottom_pane

0x59e1,	// (0x0004d51f) fep_vkb_candidate_pane_ParamLimits

0x59e1,	// (0x0004d51f) fep_vkb_candidate_pane

0xd18b,	// (0x00054cc9) fep_vkb_keypad_pane_ParamLimits

0xd18b,	// (0x00054cc9) fep_vkb_keypad_pane

0xd1b2,	// (0x00054cf0) fep_vkb_side_pane_ParamLimits

0xd1b2,	// (0x00054cf0) fep_vkb_side_pane

0xd1ee,	// (0x00054d2c) fep_vkb_top_pane_ParamLimits

0xd1ee,	// (0x00054d2c) fep_vkb_top_pane

0x5aa8,	// (0x0004d5e6) fep_vkb_top_pane_g1_ParamLimits

0x5aa8,	// (0x0004d5e6) fep_vkb_top_pane_g1

0x5ab7,	// (0x0004d5f5) fep_vkb_top_pane_g2_ParamLimits

0x5ab7,	// (0x0004d5f5) fep_vkb_top_pane_g2

0x5ac6,	// (0x0004d604) fep_vkb_top_pane_g3_ParamLimits

0x5ac6,	// (0x0004d604) fep_vkb_top_pane_g3

0x0003,

0xfb13,	// (0x00057651) fep_vkb_top_pane_g_ParamLimits

0xfb13,	// (0x00057651) fep_vkb_top_pane_g

0x5ae4,	// (0x0004d622) fep_vkb_top_text_pane_ParamLimits

0x5ae4,	// (0x0004d622) fep_vkb_top_text_pane

0xd22a,	// (0x00054d68) fep_vkb_side_pane_g1_ParamLimits

0xd22a,	// (0x00054d68) fep_vkb_side_pane_g1

0x5b3e,	// (0x0004d67c) grid_vkb_side_pane_ParamLimits

0x5b3e,	// (0x0004d67c) grid_vkb_side_pane

0x170b,	// (0x00049249) bg_popup_fep_shadow_pane_g2

0x1714,	// (0x00049252) bg_popup_fep_shadow_pane_g3

0x171c,	// (0x0004925a) bg_popup_fep_shadow_pane_g4

0x1725,	// (0x00049263) bg_popup_fep_shadow_pane_g5

0x172f,	// (0x0004926d) bg_popup_fep_shadow_pane_g6

0x1737,	// (0x00049275) bg_popup_fep_shadow_pane_g7

0xad26,	// (0x00052864) bg_popup_fep_shadow_pane_g8

0x5b9d,	// (0x0004d6db) grid_vkb_keypad_number_pane_ParamLimits

0x5b9d,	// (0x0004d6db) grid_vkb_keypad_number_pane

0x5bb1,	// (0x0004d6ef) grid_vkb_keypad_pane_ParamLimits

0x5bb1,	// (0x0004d6ef) grid_vkb_keypad_pane

0x5bd7,	// (0x0004d715) fep_vkb_bottom_pane_g1_ParamLimits

0x5bd7,	// (0x0004d715) fep_vkb_bottom_pane_g1

0x5c00,	// (0x0004d73e) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x5c00,	// (0x0004d73e) grid_vkb_keypad_bottom_left_pane

0x5c15,	// (0x0004d753) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x5c15,	// (0x0004d753) grid_vkb_keypad_bottom_right_pane

0x5c2a,	// (0x0004d768) fep_vkb_top_text_pane_g1

0xd271,	// (0x00054daf) fep_vkb_top_text_pane_t1

0xd283,	// (0x00054dc1) cell_vkb_side_pane_ParamLimits

0xd283,	// (0x00054dc1) cell_vkb_side_pane

0x585b,	// (0x0004d399) cell_vkb_side_pane_g1

0x5c99,	// (0x0004d7d7) cell_vkb_keypad_pane_ParamLimits

0x5c99,	// (0x0004d7d7) cell_vkb_keypad_pane

0x5d26,	// (0x0004d864) cell_vkb_keypad_pane_g1

0x0008,

0xfb40,	// (0x0005767e) bg_popup_fep_shadow_pane_g

0x585b,	// (0x0004d399) cell_hwr_side_pane_g1

0x585b,	// (0x0004d399) cell_hwr_side_pane_g2

0x5d30,	// (0x0004d86e) cell_vkb_keypad_pane_t1

0xd299,	// (0x00054dd7) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd299,	// (0x00054dd7) cell_vkb_keypad_bottom_left_pane

0xd2ae,	// (0x00054dec) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd2ae,	// (0x00054dec) cell_vkb_keypad_bottom_right_pane

0x585b,	// (0x0004d399) cell_vkb_keypad_bottom_left_pane_g1

0x585b,	// (0x0004d399) cell_vkb_keypad_bottom_right_pane_g1

0x5d94,	// (0x0004d8d2) cell_vkb_keypad_number_pane_ParamLimits

0x5d94,	// (0x0004d8d2) cell_vkb_keypad_number_pane

0x5db3,	// (0x0004d8f1) cell_vkb_keypad_number_pane_g1

0x5dbd,	// (0x0004d8fb) cell_vkb_keypad_number_pane_g2

0x5dc6,	// (0x0004d904) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb32,	// (0x00057670) cell_vkb_keypad_number_pane_g

0x5d30,	// (0x0004d86e) cell_vkb_keypad_number_pane_t1

0x5df0,	// (0x0004d92e) fep_vkb_candidate_pane_g1

0x0001,

0xfb2d,	// (0x0005766b) cell_hwr_side_pane_g

0x5e09,	// (0x0004d947) cell_hwr_side_pane_t1

0x1749,	// (0x00049287) cell_hwr_side_pane_t1_copy1

0x5ad6,	// (0x0004d614) cell_hwr_candidate_pane_g1

0x1757,	// (0x00049295) cell_hwr_candidate_pane_t1

0x585b,	// (0x0004d399) cell_vkb_candidate_pane_g2

0x5e8f,	// (0x0004d9cd) cell_vkb_candidate_pane_t1

0x1501,	// (0x0004903f) bg_popup_fep_shadow_pane_ParamLimits

0x1501,	// (0x0004903f) bg_popup_fep_shadow_pane

0xd125,	// (0x00054c63) bg_fep_hwr_top_pane_g4

0x58e0,	// (0x0004d41e) bg_hwr_side_pane_g1_ParamLimits

0x58e0,	// (0x0004d41e) bg_hwr_side_pane_g1

0xbdae,	// (0x000538ec) cell_hwr_side_pane_ParamLimits

0xbdae,	// (0x000538ec) cell_hwr_side_pane

0x165a,	// (0x00049198) fep_hwr_write_pane_g1_ParamLimits

0x165a,	// (0x00049198) fep_hwr_write_pane_g1

0x1667,	// (0x000491a5) fep_hwr_write_pane_g2_ParamLimits

0x1667,	// (0x000491a5) fep_hwr_write_pane_g2

0x1674,	// (0x000491b2) fep_hwr_write_pane_g3_ParamLimits

0x1674,	// (0x000491b2) fep_hwr_write_pane_g3

0xbdce,	// (0x0005390c) fep_hwr_write_pane_g4_ParamLimits

0xbdce,	// (0x0005390c) fep_hwr_write_pane_g4

0x0005,

0xfaff,	// (0x0005763d) fep_hwr_write_pane_g_ParamLimits

0xfaff,	// (0x0005763d) fep_hwr_write_pane_g

0xd125,	// (0x00054c63) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xd125,	// (0x00054c63) bg_fep_hwr_candidate_pane_g2

0x1697,	// (0x000491d5) cell_hwr_candidate_pane_ParamLimits

0x1697,	// (0x000491d5) cell_hwr_candidate_pane

0x16e9,	// (0x00049227) fep_hwr_candidate_pane_g1_ParamLimits

0x5940,	// (0x0004d47e) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x5940,	// (0x0004d47e) bg_popup_fep_shadow_pane_cp2

0x5ad6,	// (0x0004d614) fep_vkb_top_pane_g4_ParamLimits

0x5ad6,	// (0x0004d614) fep_vkb_top_pane_g4

0x5b1c,	// (0x0004d65a) fep_vkb_side_pane_g2_ParamLimits

0x5b1c,	// (0x0004d65a) fep_vkb_side_pane_g2

0x9b32,	// (0x00051670) list_setting_pane_t4_ParamLimits

0x9b32,	// (0x00051670) list_setting_pane_t4

0x9bce,	// (0x0005170c) list_setting_number_pane_t5_ParamLimits

0x9bce,	// (0x0005170c) list_setting_number_pane_t5

0xe4b8,	// (0x00055ff6) list_double_heading_pane_cp2_ParamLimits

0xe4b8,	// (0x00055ff6) list_double_heading_pane_cp2

0x5e9d,	// (0x0004d9db) list_double_heading_pane_g1_cp2_ParamLimits

0x5e9d,	// (0x0004d9db) list_double_heading_pane_g1_cp2

0x5ea9,	// (0x0004d9e7) list_double_heading_pane_g2_cp2_ParamLimits

0x5ea9,	// (0x0004d9e7) list_double_heading_pane_g2_cp2

0x5ebd,	// (0x0004d9fb) list_double_heading_pane_t1_cp2_ParamLimits

0x5ebd,	// (0x0004d9fb) list_double_heading_pane_t1_cp2

0x5ed3,	// (0x0004da11) list_double_heading_pane_t2_cp2_ParamLimits

0x5ed3,	// (0x0004da11) list_double_heading_pane_t2_cp2

0x9fbf,	// (0x00051afd) aid_value_unit2

0xf467,	// (0x00056fa5) popup_preview_fixed_window

0xa641,	// (0x0005217f) bg_popup_preview_window_pane_cp02

0x5ee5,	// (0x0004da23) list_preview_fixed_pane

0x5f2b,	// (0x0004da69) list_empty_pane_fp_ParamLimits

0x5f2b,	// (0x0004da69) list_empty_pane_fp

0x5f2b,	// (0x0004da69) list_single_cale_day_pane_fp_ParamLimits

0x5f2b,	// (0x0004da69) list_single_cale_day_pane_fp

0x5f2b,	// (0x0004da69) list_single_graphic_heading_pane_fp_ParamLimits

0x5f2b,	// (0x0004da69) list_single_graphic_heading_pane_fp

0x5f2b,	// (0x0004da69) list_single_graphic_pane_fp_ParamLimits

0x5f2b,	// (0x0004da69) list_single_graphic_pane_fp

0x5f2b,	// (0x0004da69) list_single_heading_pane_fp_ParamLimits

0x5f2b,	// (0x0004da69) list_single_heading_pane_fp

0x5f2b,	// (0x0004da69) list_single_pane_fp_ParamLimits

0x5f2b,	// (0x0004da69) list_single_pane_fp

0x5f44,	// (0x0004da82) list_single_pane_fp_g1_ParamLimits

0x5f44,	// (0x0004da82) list_single_pane_fp_g1

0x1775,	// (0x000492b3) list_single_pane_fp_g2_ParamLimits

0x1775,	// (0x000492b3) list_single_pane_fp_g2

0x1781,	// (0x000492bf) list_single_pane_fp_g3_ParamLimits

0x1781,	// (0x000492bf) list_single_pane_fp_g3

0x5f50,	// (0x0004da8e) list_single_pane_fp_g4_ParamLimits

0x5f50,	// (0x0004da8e) list_single_pane_fp_g4

0x0003,

0xfb61,	// (0x0005769f) list_single_pane_fp_g_ParamLimits

0xfb61,	// (0x0005769f) list_single_pane_fp_g

0xf13a,	// (0x00056c78) list_single_pane_fp_t1_ParamLimits

0xf13a,	// (0x00056c78) list_single_pane_fp_t1

0xf151,	// (0x00056c8f) list_single_graphic_pane_fp_g1_ParamLimits

0xf151,	// (0x00056c8f) list_single_graphic_pane_fp_g1

0x5f44,	// (0x0004da82) list_single_graphic_pane_fp_g2_ParamLimits

0x5f44,	// (0x0004da82) list_single_graphic_pane_fp_g2

0x1775,	// (0x000492b3) list_single_graphic_pane_fp_g3_ParamLimits

0x1775,	// (0x000492b3) list_single_graphic_pane_fp_g3

0x1781,	// (0x000492bf) list_single_graphic_pane_fp_g4_ParamLimits

0x1781,	// (0x000492bf) list_single_graphic_pane_fp_g4

0x5f50,	// (0x0004da8e) list_single_graphic_pane_fp_g5_ParamLimits

0x5f50,	// (0x0004da8e) list_single_graphic_pane_fp_g5

0x0004,

0xfb6a,	// (0x000576a8) list_single_graphic_pane_fp_g_ParamLimits

0xfb6a,	// (0x000576a8) list_single_graphic_pane_fp_g

0xf15d,	// (0x00056c9b) list_single_graphic_pane_fp_t1_ParamLimits

0xf15d,	// (0x00056c9b) list_single_graphic_pane_fp_t1

0xf151,	// (0x00056c8f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf151,	// (0x00056c8f) list_single_graphic_heading_pane_fp_g1

0x5f44,	// (0x0004da82) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5f44,	// (0x0004da82) list_single_graphic_heading_pane_fp_g2

0x1775,	// (0x000492b3) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x1775,	// (0x000492b3) list_single_graphic_heading_pane_fp_g3

0x1781,	// (0x000492bf) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x1781,	// (0x000492bf) list_single_graphic_heading_pane_fp_g4

0x5f50,	// (0x0004da8e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5f50,	// (0x0004da8e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb6a,	// (0x000576a8) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb6a,	// (0x000576a8) list_single_graphic_heading_pane_fp_g

0xf173,	// (0x00056cb1) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf173,	// (0x00056cb1) list_single_graphic_heading_pane_fp_t1

0xf189,	// (0x00056cc7) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf189,	// (0x00056cc7) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb75,	// (0x000576b3) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb75,	// (0x000576b3) list_single_graphic_heading_pane_fp_t

0xf19b,	// (0x00056cd9) list_single_cale_day_pane_fp_g1_ParamLimits

0xf19b,	// (0x00056cd9) list_single_cale_day_pane_fp_g1

0x5f5c,	// (0x0004da9a) list_single_cale_day_pane_fp_g2_ParamLimits

0x5f5c,	// (0x0004da9a) list_single_cale_day_pane_fp_g2

0x1795,	// (0x000492d3) list_single_cale_day_pane_fp_g3_ParamLimits

0x1795,	// (0x000492d3) list_single_cale_day_pane_fp_g3

0x17bd,	// (0x000492fb) list_single_cale_day_pane_fp_g4_ParamLimits

0x17bd,	// (0x000492fb) list_single_cale_day_pane_fp_g4

0x17e1,	// (0x0004931f) list_single_cale_day_pane_fp_g5_ParamLimits

0x17e1,	// (0x0004931f) list_single_cale_day_pane_fp_g5

0x0004,

0xfb7a,	// (0x000576b8) list_single_cale_day_pane_fp_g_ParamLimits

0xfb7a,	// (0x000576b8) list_single_cale_day_pane_fp_g

0xf1d3,	// (0x00056d11) list_single_cale_day_pane_fp_t1_ParamLimits

0xf1d3,	// (0x00056d11) list_single_cale_day_pane_fp_t1

0xf1f9,	// (0x00056d37) list_single_cale_day_pane_fp_t2_ParamLimits

0xf1f9,	// (0x00056d37) list_single_cale_day_pane_fp_t2

0xf212,	// (0x00056d50) list_single_cale_day_pane_fp_t3_ParamLimits

0xf212,	// (0x00056d50) list_single_cale_day_pane_fp_t3

0x0002,

0xfb85,	// (0x000576c3) list_single_cale_day_pane_fp_t_ParamLimits

0xfb85,	// (0x000576c3) list_single_cale_day_pane_fp_t

0x5f44,	// (0x0004da82) list_empty_pane_fp_g1_ParamLimits

0x5f44,	// (0x0004da82) list_empty_pane_fp_g1

0xf22b,	// (0x00056d69) list_empty_pane_fp_t1

0xf239,	// (0x00056d77) list_empty_pane_fp_t2

0x0001,

0xfb8c,	// (0x000576ca) list_empty_pane_fp_t

0x5f44,	// (0x0004da82) list_single_heading_pane_fp_g1_ParamLimits

0x5f44,	// (0x0004da82) list_single_heading_pane_fp_g1

0x1775,	// (0x000492b3) list_single_heading_pane_fp_g2_ParamLimits

0x1775,	// (0x000492b3) list_single_heading_pane_fp_g2

0x1781,	// (0x000492bf) list_single_heading_pane_fp_g3_ParamLimits

0x1781,	// (0x000492bf) list_single_heading_pane_fp_g3

0x0002,

0xfb91,	// (0x000576cf) list_single_heading_pane_fp_g_ParamLimits

0xfb91,	// (0x000576cf) list_single_heading_pane_fp_g

0xf247,	// (0x00056d85) list_single_heading_pane_fp_t1_ParamLimits

0xf247,	// (0x00056d85) list_single_heading_pane_fp_t1

0xf259,	// (0x00056d97) list_single_heading_pane_fp_t2_ParamLimits

0xf259,	// (0x00056d97) list_single_heading_pane_fp_t2

0x0001,

0xfb98,	// (0x000576d6) list_single_heading_pane_fp_t_ParamLimits

0xfb98,	// (0x000576d6) list_single_heading_pane_fp_t

0xaead,	// (0x000529eb) aid_size_cell_fast

0xa5c1,	// (0x000520ff) soft_indicator_pane_cp1_t1

0xaeea,	// (0x00052a28) cell_app_pane_cp2_ParamLimits

0xaeea,	// (0x00052a28) cell_app_pane_cp2

0x1523,	// (0x00049061) fep_hwr_candidate_drop_down_list_pane

0xd133,	// (0x00054c71) fep_hwr_candidate_pane_g3_ParamLimits

0xd133,	// (0x00054c71) fep_hwr_candidate_pane_g3

0xd140,	// (0x00054c7e) fep_hwr_candidate_pane_g4_ParamLimits

0xd140,	// (0x00054c7e) fep_hwr_candidate_pane_g4

0x0002,

0xfb0c,	// (0x0005764a) fep_hwr_candidate_pane_g_ParamLimits

0xfb0c,	// (0x0005764a) fep_hwr_candidate_pane_g

0x59d0,	// (0x0004d50e) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x59d0,	// (0x0004d50e) fep_vkb_candidate_drop_down_list_pane

0x5df8,	// (0x0004d936) fep_vkb_candidate_pane_g3

0x5e00,	// (0x0004d93e) fep_vkb_candidate_pane_g4

0x0002,

0xfb39,	// (0x00057677) fep_vkb_candidate_pane_g

0x5ad6,	// (0x0004d614) cell_hwr_candidate_pane_g1_ParamLimits

0x5e17,	// (0x0004d955) cell_hwr_candidate_pane_g3_ParamLimits

0x5e17,	// (0x0004d955) cell_hwr_candidate_pane_g3

0x5e38,	// (0x0004d976) cell_hwr_candidate_pane_g4_ParamLimits

0x5e38,	// (0x0004d976) cell_hwr_candidate_pane_g4

0x0002,

0xfb53,	// (0x00057691) cell_hwr_candidate_pane_g_ParamLimits

0xfb53,	// (0x00057691) cell_hwr_candidate_pane_g

0x5e59,	// (0x0004d997) cell_vkb_candidate_pane_g3_ParamLimits

0x5e59,	// (0x0004d997) cell_vkb_candidate_pane_g3

0x5e74,	// (0x0004d9b2) cell_vkb_candidate_pane_g4_ParamLimits

0x5e74,	// (0x0004d9b2) cell_vkb_candidate_pane_g4

0x5f68,	// (0x0004daa6) cell_app_pane_cp2_g1_ParamLimits

0x5f68,	// (0x0004daa6) cell_app_pane_cp2_g1

0x5f86,	// (0x0004dac4) cell_app_pane_cp2_g2_ParamLimits

0x5f86,	// (0x0004dac4) cell_app_pane_cp2_g2

0x0001,

0xfb9d,	// (0x000576db) cell_app_pane_cp2_g_ParamLimits

0xfb9d,	// (0x000576db) cell_app_pane_cp2_g

0x5f92,	// (0x0004dad0) cell_app_pane_cp2_t1_ParamLimits

0x5f92,	// (0x0004dad0) cell_app_pane_cp2_t1

0xacae,	// (0x000527ec) grid_highlight_pane_cp1_ParamLimits

0xacae,	// (0x000527ec) grid_highlight_pane_cp1

0x1805,	// (0x00049343) cell_hwr_candidate_pane_cp1_ParamLimits

0x1805,	// (0x00049343) cell_hwr_candidate_pane_cp1

0x5ad6,	// (0x0004d614) fep_hwr_candidate_drop_down_list_pane_g1

0x5fa4,	// (0x0004dae2) fep_hwr_candidate_drop_down_list_pane_g2

0x5fb1,	// (0x0004daef) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba2,	// (0x000576e0) fep_hwr_candidate_drop_down_list_pane_g

0x1829,	// (0x00049367) fep_hwr_candidate_drop_down_list_scroll_pane

0x1832,	// (0x00049370) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1832,	// (0x00049370) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x183f,	// (0x0004937d) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x183f,	// (0x0004937d) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x184c,	// (0x0004938a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x184c,	// (0x0004938a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5e59,	// (0x0004d997) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5e59,	// (0x0004d997) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5e74,	// (0x0004d9b2) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5e74,	// (0x0004d9b2) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1859,	// (0x00049397) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1859,	// (0x00049397) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1874,	// (0x000493b2) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1874,	// (0x000493b2) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x188f,	// (0x000493cd) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x188f,	// (0x000493cd) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba9,	// (0x000576e7) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba9,	// (0x000576e7) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5fbe,	// (0x0004dafc) cell_vkb_candidate_pane_cp1_ParamLimits

0x5fbe,	// (0x0004dafc) cell_vkb_candidate_pane_cp1

0x5ad6,	// (0x0004d614) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x5ad6,	// (0x0004d614) fep_vkb_candidate_drop_down_list_pane_g1

0x5fa4,	// (0x0004dae2) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5fa4,	// (0x0004dae2) fep_vkb_candidate_drop_down_list_pane_g2

0x5fb1,	// (0x0004daef) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5fb1,	// (0x0004daef) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba2,	// (0x000576e0) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba2,	// (0x000576e0) fep_vkb_candidate_drop_down_list_pane_g

0x5fe4,	// (0x0004db22) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5fe4,	// (0x0004db22) fep_vkb_candidate_drop_down_list_scroll_pane

0x5ff1,	// (0x0004db2f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5ff1,	// (0x0004db2f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5ffe,	// (0x0004db3c) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5ffe,	// (0x0004db3c) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x600a,	// (0x0004db48) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x600a,	// (0x0004db48) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5e17,	// (0x0004d955) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5e17,	// (0x0004d955) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5e38,	// (0x0004d976) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5e38,	// (0x0004d976) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x6016,	// (0x0004db54) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6016,	// (0x0004db54) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x6037,	// (0x0004db75) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6037,	// (0x0004db75) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x6058,	// (0x0004db96) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6058,	// (0x0004db96) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbba,	// (0x000576f8) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbba,	// (0x000576f8) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa209,	// (0x00051d47) title_pane_g1_ParamLimits

0xa21c,	// (0x00051d5a) title_pane_g2_ParamLimits

0xf529,	// (0x00057067) title_pane_g_ParamLimits

0xe471,	// (0x00055faf) aid_call2_pane

0xe479,	// (0x00055fb7) aid_call_pane

0xe481,	// (0x00055fbf) popup_clock_analogue_window_g1

0xe481,	// (0x00055fbf) popup_clock_analogue_window_g2

0x03dd,	// (0x00047f1b) popup_clock_analogue_window_g3

0x03e6,	// (0x00047f24) popup_clock_analogue_window_g4

0x9fe1,	// (0x00051b1f) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x00057216) popup_clock_analogue_window_g

0x03ee,	// (0x00047f2c) popup_clock_analogue_window_t1

0x044c,	// (0x00047f8a) clock_digital_number_pane_ParamLimits

0x044c,	// (0x00047f8a) clock_digital_number_pane

0x0458,	// (0x00047f96) clock_digital_number_pane_cp02_ParamLimits

0x0458,	// (0x00047f96) clock_digital_number_pane_cp02

0x0464,	// (0x00047fa2) clock_digital_number_pane_cp03_ParamLimits

0x0464,	// (0x00047fa2) clock_digital_number_pane_cp03

0x0470,	// (0x00047fae) clock_digital_number_pane_cp04_ParamLimits

0x0470,	// (0x00047fae) clock_digital_number_pane_cp04

0x047c,	// (0x00047fba) clock_digital_separator_pane_ParamLimits

0x047c,	// (0x00047fba) clock_digital_separator_pane

0x0488,	// (0x00047fc6) popup_clock_digital_window_t1_ParamLimits

0x0488,	// (0x00047fc6) popup_clock_digital_window_t1

0x9fe1,	// (0x00051b1f) clock_digital_number_pane_g1

0x9fe1,	// (0x00051b1f) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x00057221) clock_digital_number_pane_g

0x9fe1,	// (0x00051b1f) clock_digital_separator_pane_g1

0x9fe1,	// (0x00051b1f) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x00057221) clock_digital_separator_pane_g

0xbb63,	// (0x000536a1) aid_fill_nsta_ParamLimits

0xc6be,	// (0x000541fc) indicator_nsta_pane_ParamLimits

0x3008,	// (0x0004ab46) popup_clock_analogue_window

0x3008,	// (0x0004ab46) popup_clock_digital_window

0xcf5f,	// (0x00054a9d) grid_indicator_nsta_pane_ParamLimits

0x52b0,	// (0x0004cdee) clock_nsta_pane_t2

0x0001,

0xfa8c,	// (0x000575ca) clock_nsta_pane_t

0x0346,	// (0x00047e84) aid_size_max_handle

0xb090,	// (0x00052bce) aid_size_min_handle

0x29c8,	// (0x0004a506) editor_scroll_pane

0x6073,	// (0x0004dbb1) ex_editor_pane

0xae34,	// (0x00052972) scroll_pane_cp13

0xabfe,	// (0x0005273c) scroll_pane_cp14

0xe4b0,	// (0x00055fee) scroll_pane_cp36

0xb11d,	// (0x00052c5b) list_single_graphic_hl_pane_cp2_ParamLimits

0xb11d,	// (0x00052c5b) list_single_graphic_hl_pane_cp2

0xcdec,	// (0x0005492a) list_single_graphic_hl_pane_ParamLimits

0xcdec,	// (0x0005492a) list_single_graphic_hl_pane

0xf26f,	// (0x00056dad) aid_size_min_hl_cp1

0x607b,	// (0x0004dbb9) list_highlight_pane_cp34_ParamLimits

0x607b,	// (0x0004dbb9) list_highlight_pane_cp34

0x608c,	// (0x0004dbca) list_single_graphic_hl_pane_g1_ParamLimits

0x608c,	// (0x0004dbca) list_single_graphic_hl_pane_g1

0x9e62,	// (0x000519a0) list_single_graphic_hl_pane_g2_ParamLimits

0x9e62,	// (0x000519a0) list_single_graphic_hl_pane_g2

0x9e62,	// (0x000519a0) list_single_graphic_hl_pane_g3_ParamLimits

0x9e62,	// (0x000519a0) list_single_graphic_hl_pane_g3

0x28ff,	// (0x0004a43d) list_single_graphic_hl_pane_g4_ParamLimits

0x28ff,	// (0x0004a43d) list_single_graphic_hl_pane_g4

0xbde3,	// (0x00053921) list_single_graphic_hl_pane_g5_ParamLimits

0xbde3,	// (0x00053921) list_single_graphic_hl_pane_g5

0x0004,

0xfbcb,	// (0x00057709) list_single_graphic_hl_pane_g_ParamLimits

0xfbcb,	// (0x00057709) list_single_graphic_hl_pane_g

0x9e6e,	// (0x000519ac) list_single_graphic_hl_pane_t1_ParamLimits

0x9e6e,	// (0x000519ac) list_single_graphic_hl_pane_t1

0x6099,	// (0x0004dbd7) aid_size_min_hl_cp2

0x60a2,	// (0x0004dbe0) list_highlight_pane_cp34_cp2_ParamLimits

0x60a2,	// (0x0004dbe0) list_highlight_pane_cp34_cp2

0x608c,	// (0x0004dbca) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x608c,	// (0x0004dbca) list_single_graphic_hl_pane_g1_cp2

0x60af,	// (0x0004dbed) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x60af,	// (0x0004dbed) list_single_graphic_hl_pane_g2_cp2

0x60bb,	// (0x0004dbf9) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x60bb,	// (0x0004dbf9) list_single_graphic_hl_pane_g3_cp2

0x60c9,	// (0x0004dc07) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x60c9,	// (0x0004dc07) list_single_graphic_hl_pane_g4_cp2

0x60d5,	// (0x0004dc13) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x60d5,	// (0x0004dc13) list_single_graphic_hl_pane_g5_cp2

0xb323,	// (0x00052e61) control_pane_g4_ParamLimits

0xb323,	// (0x00052e61) control_pane_g4

0x2cef,	// (0x0004a82d) bg_popup_sub_pane_cp10_ParamLimits

0x5865,	// (0x0004d3a3) list_choice_list_pane_ParamLimits

0x5874,	// (0x0004d3b2) scroll_pane_cp23

0xa641,	// (0x0005217f) bg_popup_preview_window_pane_cp02_ParamLimits

0x5ee5,	// (0x0004da23) list_preview_fixed_pane_ParamLimits

0x5efb,	// (0x0004da39) list_preview_fixed_pane_cp_ParamLimits

0x5efb,	// (0x0004da39) list_preview_fixed_pane_cp

0x5f07,	// (0x0004da45) popup_preview_fixed_window_g1_ParamLimits

0x5f07,	// (0x0004da45) popup_preview_fixed_window_g1

0x5f13,	// (0x0004da51) popup_preview_fixed_window_g2_ParamLimits

0x5f13,	// (0x0004da51) popup_preview_fixed_window_g2

0x0002,

0xfb5a,	// (0x00057698) popup_preview_fixed_window_g_ParamLimits

0xfb5a,	// (0x00057698) popup_preview_fixed_window_g

0x01fa,	// (0x00047d38) aid_navi_side_left_pane_ParamLimits

0x020f,	// (0x00047d4d) aid_navi_side_right_pane_ParamLimits

0x0227,	// (0x00047d65) navi_icon_pane_stacon_ParamLimits

0x023b,	// (0x00047d79) navi_navi_pane_stacon_ParamLimits

0x0227,	// (0x00047d65) navi_text_pane_stacon_ParamLimits

0x9fd7,	// (0x00051b15) main_text_info_pane

0x60ff,	// (0x0004dc3d) listscroll_text_info_pane

0x6107,	// (0x0004dc45) list_text_info_pane_ParamLimits

0x6107,	// (0x0004dc45) list_text_info_pane

0x6116,	// (0x0004dc54) scroll_pane_cp24_ParamLimits

0x6116,	// (0x0004dc54) scroll_pane_cp24

0xd2c9,	// (0x00054e07) list_text_info_pane_t1_ParamLimits

0xd2c9,	// (0x00054e07) list_text_info_pane_t1

0xb456,	// (0x00052f94) popup_fast_swap2_window_ParamLimits

0xb456,	// (0x00052f94) popup_fast_swap2_window

0x6159,	// (0x0004dc97) aid_size_cell_fast2

0x9fd7,	// (0x00051b15) bg_popup_window_pane_cp17

0x6163,	// (0x0004dca1) heading_pane_cp2

0x616b,	// (0x0004dca9) listscroll_fast2_pane

0x6173,	// (0x0004dcb1) grid_fast2_pane

0x617d,	// (0x0004dcbb) listscroll_fast2_pane_g1

0x6187,	// (0x0004dcc5) listscroll_fast2_pane_g2

0x0001,

0xfbd6,	// (0x00057714) listscroll_fast2_pane_g

0xae34,	// (0x00052972) scroll_pane_cp26

0x6191,	// (0x0004dccf) cell_fast2_pane_ParamLimits

0x6191,	// (0x0004dccf) cell_fast2_pane

0x61a8,	// (0x0004dce6) cell_fast2_pane_g1

0x61b1,	// (0x0004dcef) cell_fast2_pane_g2

0x61ba,	// (0x0004dcf8) cell_fast2_pane_g3

0x0002,

0xfbdb,	// (0x00057719) cell_fast2_pane_g

0xa9bb,	// (0x000524f9) grid_highlight_pane_cp9

0xa9d0,	// (0x0005250e) main_eswt_pane_ParamLimits

0xa9d0,	// (0x0005250e) main_eswt_pane

0x612b,	// (0x0004dc69) list_single_text_info_pane

0x61c2,	// (0x0004dd00) eswt_ctrl_button_pane

0x61c2,	// (0x0004dd00) eswt_ctrl_canvas_pane

0x61ca,	// (0x0004dd08) eswt_ctrl_combo_pane

0x61c2,	// (0x0004dd00) eswt_ctrl_default_pane

0x61c2,	// (0x0004dd00) eswt_ctrl_label_pane

0x61d2,	// (0x0004dd10) eswt_ctrl_wait_pane

0x61da,	// (0x0004dd18) eswt_shell_pane

0x9fd7,	// (0x00051b15) listscroll_eswt_app_pane

0x61fa,	// (0x0004dd38) popup_eswt_tasktip_window_ParamLimits

0x61fa,	// (0x0004dd38) popup_eswt_tasktip_window

0x329b,	// (0x0004add9) bg_popup_window_pane_cp18

0x6213,	// (0x0004dd51) eswt_control_pane_g1_ParamLimits

0x6213,	// (0x0004dd51) eswt_control_pane_g1

0x6220,	// (0x0004dd5e) eswt_control_pane_g2_ParamLimits

0x6220,	// (0x0004dd5e) eswt_control_pane_g2

0x622d,	// (0x0004dd6b) eswt_control_pane_g3_ParamLimits

0x622d,	// (0x0004dd6b) eswt_control_pane_g3

0x623a,	// (0x0004dd78) eswt_control_pane_g4_ParamLimits

0x623a,	// (0x0004dd78) eswt_control_pane_g4

0x0003,

0xfbe2,	// (0x00057720) eswt_control_pane_g_ParamLimits

0xfbe2,	// (0x00057720) eswt_control_pane_g

0xacae,	// (0x000527ec) bg_button_pane_ParamLimits

0xacae,	// (0x000527ec) bg_button_pane

0xa9d0,	// (0x0005250e) common_borders_pane_copy2_ParamLimits

0xa9d0,	// (0x0005250e) common_borders_pane_copy2

0x6247,	// (0x0004dd85) control_button_pane_g1_ParamLimits

0x6247,	// (0x0004dd85) control_button_pane_g1

0x6253,	// (0x0004dd91) control_button_pane_g2_ParamLimits

0x6253,	// (0x0004dd91) control_button_pane_g2

0x625f,	// (0x0004dd9d) control_button_pane_g3_ParamLimits

0x625f,	// (0x0004dd9d) control_button_pane_g3

0x0002,

0xfbeb,	// (0x00057729) control_button_pane_g_ParamLimits

0xfbeb,	// (0x00057729) control_button_pane_g

0x6273,	// (0x0004ddb1) control_button_pane_t1

0x6281,	// (0x0004ddbf) control_button_pane_t2

0x0001,

0xfbf2,	// (0x00057730) control_button_pane_t

0x3227,	// (0x0004ad65) bg_button_pane_g1

0x322f,	// (0x0004ad6d) bg_button_pane_g2

0x3237,	// (0x0004ad75) bg_button_pane_g3

0x323f,	// (0x0004ad7d) bg_button_pane_g4

0x3247,	// (0x0004ad85) bg_button_pane_g5

0x324f,	// (0x0004ad8d) bg_button_pane_g6

0x3257,	// (0x0004ad95) bg_button_pane_g7

0x325f,	// (0x0004ad9d) bg_button_pane_g8

0x3267,	// (0x0004ada5) bg_button_pane_g9

0x0008,

0xf841,	// (0x0005737f) bg_button_pane_g

0x5820,	// (0x0004d35e) common_borders_pane_ParamLimits

0x5820,	// (0x0004d35e) common_borders_pane

0x6213,	// (0x0004dd51) eswt_control_pane_g1_copy1_ParamLimits

0x6213,	// (0x0004dd51) eswt_control_pane_g1_copy1

0x6220,	// (0x0004dd5e) eswt_control_pane_g2_copy1_ParamLimits

0x6220,	// (0x0004dd5e) eswt_control_pane_g2_copy1

0x622d,	// (0x0004dd6b) eswt_control_pane_g3_copy1_ParamLimits

0x622d,	// (0x0004dd6b) eswt_control_pane_g3_copy1

0x623a,	// (0x0004dd78) eswt_control_pane_g4_copy1_ParamLimits

0x623a,	// (0x0004dd78) eswt_control_pane_g4_copy1

0x585b,	// (0x0004d399) bg_eswt_ctrl_canvas_pane_g1

0x5820,	// (0x0004d35e) common_borders_pane_cp2_ParamLimits

0x5820,	// (0x0004d35e) common_borders_pane_cp2

0x5820,	// (0x0004d35e) common_borders_pane_cp3_ParamLimits

0x5820,	// (0x0004d35e) common_borders_pane_cp3

0x628f,	// (0x0004ddcd) separator_horizontal_pane

0x6297,	// (0x0004ddd5) separator_vertical_pane

0x6213,	// (0x0004dd51) eswt_control_pane_g1_copy2_ParamLimits

0x6213,	// (0x0004dd51) eswt_control_pane_g1_copy2

0x6220,	// (0x0004dd5e) eswt_control_pane_g2_copy2_ParamLimits

0x6220,	// (0x0004dd5e) eswt_control_pane_g2_copy2

0x622d,	// (0x0004dd6b) eswt_control_pane_g3_copy2_ParamLimits

0x622d,	// (0x0004dd6b) eswt_control_pane_g3_copy2

0x623a,	// (0x0004dd78) eswt_control_pane_g4_copy2_ParamLimits

0x623a,	// (0x0004dd78) eswt_control_pane_g4_copy2

0x9fd7,	// (0x00051b15) common_borders_pane_cp4

0x62a0,	// (0x0004ddde) separator_horizontal_pane_g1

0x62a9,	// (0x0004dde7) separator_horizontal_pane_g2

0x62b2,	// (0x0004ddf0) separator_horizontal_pane_g3

0x0002,

0xfbf7,	// (0x00057735) separator_horizontal_pane_g

0x6213,	// (0x0004dd51) eswt_control_pane_g1_copy3_ParamLimits

0x6213,	// (0x0004dd51) eswt_control_pane_g1_copy3

0x6220,	// (0x0004dd5e) eswt_control_pane_g2_copy3_ParamLimits

0x6220,	// (0x0004dd5e) eswt_control_pane_g2_copy3

0x622d,	// (0x0004dd6b) eswt_control_pane_g3_copy3_ParamLimits

0x622d,	// (0x0004dd6b) eswt_control_pane_g3_copy3

0x623a,	// (0x0004dd78) eswt_control_pane_g4_copy3_ParamLimits

0x623a,	// (0x0004dd78) eswt_control_pane_g4_copy3

0x9fd7,	// (0x00051b15) common_borders_pane_cp5

0x62bb,	// (0x0004ddf9) separator_vertical_pane_g1

0x62c4,	// (0x0004de02) separator_vertical_pane_g2

0x62cd,	// (0x0004de0b) separator_vertical_pane_g3

0x0002,

0xfbfe,	// (0x0005773c) separator_vertical_pane_g

0x6213,	// (0x0004dd51) eswt_control_pane_g1_copy4_ParamLimits

0x6213,	// (0x0004dd51) eswt_control_pane_g1_copy4

0x6220,	// (0x0004dd5e) eswt_control_pane_g2_copy4_ParamLimits

0x6220,	// (0x0004dd5e) eswt_control_pane_g2_copy4

0x622d,	// (0x0004dd6b) eswt_control_pane_g3_copy4_ParamLimits

0x622d,	// (0x0004dd6b) eswt_control_pane_g3_copy4

0x623a,	// (0x0004dd78) eswt_control_pane_g4_copy4_ParamLimits

0x623a,	// (0x0004dd78) eswt_control_pane_g4_copy4

0xd2eb,	// (0x00054e29) eswt_ctrl_combo_button_pane

0xd2f3,	// (0x00054e31) eswt_ctrl_input_pane

0xd2fb,	// (0x00054e39) popup_choice_list_window_cp70

0xd303,	// (0x00054e41) eswt_ctrl_input_pane_t1

0x9fd7,	// (0x00051b15) input_focus_pane_cp70

0x5820,	// (0x0004d35e) bg_button_pane_cp70_ParamLimits

0x5820,	// (0x0004d35e) bg_button_pane_cp70

0xd311,	// (0x00054e4f) eswt_ctrl_combo_button_pane_g1

0x6304,	// (0x0004de42) wait_bar_pane_cp70

0x329b,	// (0x0004add9) bg_popup_window_pane_cp70_ParamLimits

0x329b,	// (0x0004add9) bg_popup_window_pane_cp70

0x630c,	// (0x0004de4a) popup_eswt_tasktip_window_t1

0x6322,	// (0x0004de60) wait_bar_pane_cp71_ParamLimits

0x6322,	// (0x0004de60) wait_bar_pane_cp71

0x632e,	// (0x0004de6c) grid_eswt_app_pane

0xe319,	// (0x00055e57) scroll_pane_cp70

0xd319,	// (0x00054e57) cell_eswt_app_pane_ParamLimits

0xd319,	// (0x00054e57) cell_eswt_app_pane

0xd34b,	// (0x00054e89) cell_eswt_app_pane_g1_ParamLimits

0xd34b,	// (0x00054e89) cell_eswt_app_pane_g1

0xd37a,	// (0x00054eb8) cell_eswt_app_pane_g2_ParamLimits

0xd37a,	// (0x00054eb8) cell_eswt_app_pane_g2

0x0001,

0xfc05,	// (0x00057743) cell_eswt_app_pane_g_ParamLimits

0xfc05,	// (0x00057743) cell_eswt_app_pane_g

0xd3a3,	// (0x00054ee1) cell_eswt_app_pane_t1_ParamLimits

0xd3a3,	// (0x00054ee1) cell_eswt_app_pane_t1

0x63f3,	// (0x0004df31) grid_highlight_pane_cp70_ParamLimits

0x63f3,	// (0x0004df31) grid_highlight_pane_cp70

0x288e,	// (0x0004a3cc) set_content_pane_g1

0xb307,	// (0x00052e45) status_small_volume_pane

0xbdf7,	// (0x00053935) status_small_volume_pane_g1

0xbdff,	// (0x0005393d) volume_small2_pane

0xbe08,	// (0x00053946) volume_small2_pane_g1

0xbe11,	// (0x0005394f) volume_small2_pane_g2

0xbe1a,	// (0x00053958) volume_small2_pane_g3

0xbe23,	// (0x00053961) volume_small2_pane_g4

0xbe2c,	// (0x0005396a) volume_small2_pane_g5

0xbe35,	// (0x00053973) volume_small2_pane_g6

0xbe3e,	// (0x0005397c) volume_small2_pane_g7

0xbe47,	// (0x00053985) volume_small2_pane_g8

0xbe50,	// (0x0005398e) volume_small2_pane_g9

0xbe59,	// (0x00053997) volume_small2_pane_g10

0x0009,

0xfc0a,	// (0x00057748) volume_small2_pane_g

0x5c2a,	// (0x0004d768) fep_vkb_top_text_pane_g1_ParamLimits

0xd271,	// (0x00054daf) fep_vkb_top_text_pane_t1_ParamLimits

0x5f1f,	// (0x0004da5d) popup_preview_fixed_window_g3_ParamLimits

0x5f1f,	// (0x0004da5d) popup_preview_fixed_window_g3

0xbaf6,	// (0x00053634) popup_toolbar_trans_pane

0xcc56,	// (0x00054794) aid_height_set_list_ParamLimits

0x4604,	// (0x0004c142) aid_size_parent_ParamLimits

0x2cef,	// (0x0004a82d) list_highlight_pane_cp2_ParamLimits

0x288e,	// (0x0004a3cc) set_content_pane_g1_ParamLimits

0xce00,	// (0x0005493e) list_single_image_pane_ParamLimits

0xce00,	// (0x0005493e) list_single_image_pane

0xd3d5,	// (0x00054f13) aid_size_cell_image_ParamLimits

0xd3d5,	// (0x00054f13) aid_size_cell_image

0xd3e2,	// (0x00054f20) grid_single_image_pane_ParamLimits

0xd3e2,	// (0x00054f20) grid_single_image_pane

0xacbc,	// (0x000527fa) list_single_image_pane_g1_ParamLimits

0xacbc,	// (0x000527fa) list_single_image_pane_g1

0xacc8,	// (0x00052806) list_single_image_pane_g2_ParamLimits

0xacc8,	// (0x00052806) list_single_image_pane_g2

0x0001,

0xfc1f,	// (0x0005775d) list_single_image_pane_g_ParamLimits

0xfc1f,	// (0x0005775d) list_single_image_pane_g

0x641a,	// (0x0004df58) list_single_image_pane_t1_ParamLimits

0x641a,	// (0x0004df58) list_single_image_pane_t1

0xd3f0,	// (0x00054f2e) cell_image_list_pane_ParamLimits

0xd3f0,	// (0x00054f2e) cell_image_list_pane

0xd406,	// (0x00054f44) cell_image_list_pane_g1

0xd40f,	// (0x00054f4d) cell_image_list_pane_g2

0x0001,

0xfc24,	// (0x00057762) cell_image_list_pane_g

0x645a,	// (0x0004df98) aid_size_cell_tb_trans_pane

0xacae,	// (0x000527ec) bg_tb_trans_pane

0x646c,	// (0x0004dfaa) grid_tb_trans_pane

0x3227,	// (0x0004ad65) bg_tb_trans_pane_g1

0x322f,	// (0x0004ad6d) bg_tb_trans_pane_g2

0x3237,	// (0x0004ad75) bg_tb_trans_pane_g3

0x323f,	// (0x0004ad7d) bg_tb_trans_pane_g4

0x3247,	// (0x0004ad85) bg_tb_trans_pane_g5

0x325f,	// (0x0004ad9d) bg_tb_trans_pane_g6

0x3267,	// (0x0004ada5) bg_tb_trans_pane_g7

0x324f,	// (0x0004ad8d) bg_tb_trans_pane_g8

0x3257,	// (0x0004ad95) bg_tb_trans_pane_g9

0x0008,

0xfc29,	// (0x00057767) bg_tb_trans_pane_g

0x6480,	// (0x0004dfbe) cell_toolbar_trans_pane_ParamLimits

0x6480,	// (0x0004dfbe) cell_toolbar_trans_pane

0x585b,	// (0x0004d399) cell_toolbar_trans_pane_g1

0xd040,	// (0x00054b7e) list_form2_midp_pane_t1

0xd04e,	// (0x00054b8c) list_form2_midp_pane_t2

0x0001,

0xfad2,	// (0x00057610) list_form2_midp_pane_t

0x54af,	// (0x0004cfed) scroll_pane_cp51_ParamLimits

0x5676,	// (0x0004d1b4) form2_midp_wait_pane_g1

0x567f,	// (0x0004d1bd) form2_midp_wait_pane_g2

0x5688,	// (0x0004d1c6) form2_midp_wait_pane_g3

0x0002,

0xfae7,	// (0x00057625) form2_midp_wait_pane_g

0xa35e,	// (0x00051e9c) list_highlight_pane_cp21_ParamLimits

0x56c1,	// (0x0004d1ff) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x56d0,	// (0x0004d20e) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x47ed,	// (0x0004c32b) list_single_2graphic_im_pane_ParamLimits

0x47ed,	// (0x0004c32b) list_single_2graphic_im_pane

0xd418,	// (0x00054f56) list_single_2graphic_im_pane_g1_ParamLimits

0xd418,	// (0x00054f56) list_single_2graphic_im_pane_g1

0xd429,	// (0x00054f67) list_single_2graphic_im_pane_g2_ParamLimits

0xd429,	// (0x00054f67) list_single_2graphic_im_pane_g2

0xd435,	// (0x00054f73) list_single_2graphic_im_pane_g3_ParamLimits

0xd435,	// (0x00054f73) list_single_2graphic_im_pane_g3

0x0003,

0xfc3c,	// (0x0005777a) list_single_2graphic_im_pane_g_ParamLimits

0xfc3c,	// (0x0005777a) list_single_2graphic_im_pane_g

0xd449,	// (0x00054f87) list_single_2graphic_im_pane_t1_ParamLimits

0xd449,	// (0x00054f87) list_single_2graphic_im_pane_t1

0x5f2b,	// (0x0004da69) list_single_graphic_2heading_pane_fp_ParamLimits

0x5f2b,	// (0x0004da69) list_single_graphic_2heading_pane_fp

0xf151,	// (0x00056c8f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf151,	// (0x00056c8f) list_single_graphic_2heading_pane_fp_g1

0x5f44,	// (0x0004da82) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5f44,	// (0x0004da82) list_single_graphic_2heading_pane_fp_g2

0x1775,	// (0x000492b3) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x1775,	// (0x000492b3) list_single_graphic_2heading_pane_fp_g3

0x1781,	// (0x000492bf) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x1781,	// (0x000492bf) list_single_graphic_2heading_pane_fp_g4

0x5f50,	// (0x0004da8e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5f50,	// (0x0004da8e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb6a,	// (0x000576a8) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb6a,	// (0x000576a8) list_single_graphic_2heading_pane_fp_g

0xf278,	// (0x00056db6) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf278,	// (0x00056db6) list_single_graphic_2heading_pane_fp_t1

0xf189,	// (0x00056cc7) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf189,	// (0x00056cc7) list_single_graphic_2heading_pane_fp_t2

0xf28e,	// (0x00056dcc) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf28e,	// (0x00056dcc) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc45,	// (0x00057783) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc45,	// (0x00057783) list_single_graphic_2heading_pane_fp_t

0x58ec,	// (0x0004d42a) fep_hwr_write_pane_g5_ParamLimits

0x58ec,	// (0x0004d42a) fep_hwr_write_pane_g5

0x58f8,	// (0x0004d436) fep_hwr_write_pane_g6_ParamLimits

0x58f8,	// (0x0004d436) fep_hwr_write_pane_g6

0x61da,	// (0x0004dd18) eswt_shell_pane_ParamLimits

0x329b,	// (0x0004add9) bg_popup_window_pane_cp18_ParamLimits

0x620b,	// (0x0004dd49) heading_pane_cp70

0x630c,	// (0x0004de4a) popup_eswt_tasktip_window_t1_ParamLimits

0xc5e3,	// (0x00054121) aid_touch_tab_arrow_left

0xc5f9,	// (0x00054137) aid_touch_tab_arrow_right

0xa240,	// (0x00051d7e) title_pane_g3_ParamLimits

0xa240,	// (0x00051d7e) title_pane_g3

0xac6d,	// (0x000527ab) set_value_pane_g1

0xbaf6,	// (0x00053634) popup_toolbar_trans_pane_ParamLimits

0x645a,	// (0x0004df98) aid_size_cell_tb_trans_pane_ParamLimits

0xacae,	// (0x000527ec) bg_tb_trans_pane_ParamLimits

0x646c,	// (0x0004dfaa) grid_tb_trans_pane_ParamLimits

0xa641,	// (0x0005217f) cont_note_pane_ParamLimits

0xa641,	// (0x0005217f) cont_note_pane

0xa9d0,	// (0x0005250e) cont_snote2_single_text_pane_ParamLimits

0xa9d0,	// (0x0005250e) cont_snote2_single_text_pane

0xa9d0,	// (0x0005250e) cont_snote2_single_graphic_pane_ParamLimits

0xa9d0,	// (0x0005250e) cont_snote2_single_graphic_pane

0x388d,	// (0x0004b3cb) cont_note_wait_pane_ParamLimits

0x388d,	// (0x0004b3cb) cont_note_wait_pane

0x388d,	// (0x0004b3cb) cont_note_image_pane_ParamLimits

0x388d,	// (0x0004b3cb) cont_note_image_pane

0x6514,	// (0x0004e052) popup_note2_window_g1_ParamLimits

0x6514,	// (0x0004e052) popup_note2_window_g1

0x6545,	// (0x0004e083) popup_note2_window_t1_ParamLimits

0x6545,	// (0x0004e083) popup_note2_window_t1

0x658a,	// (0x0004e0c8) popup_note2_window_t2_ParamLimits

0x658a,	// (0x0004e0c8) popup_note2_window_t2

0x65cf,	// (0x0004e10d) popup_note2_window_t3_ParamLimits

0x65cf,	// (0x0004e10d) popup_note2_window_t3

0x6614,	// (0x0004e152) popup_note2_window_t4_ParamLimits

0x6614,	// (0x0004e152) popup_note2_window_t4

0xa6c5,	// (0x00052203) popup_note2_window_t5_ParamLimits

0xa6c5,	// (0x00052203) popup_note2_window_t5

0x0004,

0xfc51,	// (0x0005778f) popup_note2_window_t_ParamLimits

0xfc51,	// (0x0005778f) popup_note2_window_t

0x6643,	// (0x0004e181) popup_note2_image_window_g1_ParamLimits

0x6643,	// (0x0004e181) popup_note2_image_window_g1

0x664f,	// (0x0004e18d) popup_note2_image_window_g2_ParamLimits

0x664f,	// (0x0004e18d) popup_note2_image_window_g2

0x0001,

0xfc5c,	// (0x0005779a) popup_note2_image_window_g_ParamLimits

0xfc5c,	// (0x0005779a) popup_note2_image_window_g

0x6661,	// (0x0004e19f) popup_note2_image_window_t1_ParamLimits

0x6661,	// (0x0004e19f) popup_note2_image_window_t1

0x6679,	// (0x0004e1b7) popup_note2_image_window_t2_ParamLimits

0x6679,	// (0x0004e1b7) popup_note2_image_window_t2

0x6691,	// (0x0004e1cf) popup_note2_image_window_t3_ParamLimits

0x6691,	// (0x0004e1cf) popup_note2_image_window_t3

0x0002,

0xfc61,	// (0x0005779f) popup_note2_image_window_t_ParamLimits

0xfc61,	// (0x0005779f) popup_note2_image_window_t

0x389b,	// (0x0004b3d9) popup_note2_wait_window_g1_ParamLimits

0x389b,	// (0x0004b3d9) popup_note2_wait_window_g1

0x66ad,	// (0x0004e1eb) popup_note2_wait_window_g2_ParamLimits

0x66ad,	// (0x0004e1eb) popup_note2_wait_window_g2

0x38b3,	// (0x0004b3f1) popup_note2_wait_window_g3_ParamLimits

0x38b3,	// (0x0004b3f1) popup_note2_wait_window_g3

0x0002,

0xfc68,	// (0x000577a6) popup_note2_wait_window_g_ParamLimits

0xfc68,	// (0x000577a6) popup_note2_wait_window_g

0x66b9,	// (0x0004e1f7) popup_note2_wait_window_t1_ParamLimits

0x66b9,	// (0x0004e1f7) popup_note2_wait_window_t1

0x66d7,	// (0x0004e215) popup_note2_wait_window_t2_ParamLimits

0x66d7,	// (0x0004e215) popup_note2_wait_window_t2

0x66f5,	// (0x0004e233) popup_note2_wait_window_t3_ParamLimits

0x66f5,	// (0x0004e233) popup_note2_wait_window_t3

0x6707,	// (0x0004e245) popup_note2_wait_window_t4_ParamLimits

0x6707,	// (0x0004e245) popup_note2_wait_window_t4

0x0003,

0xfc6f,	// (0x000577ad) popup_note2_wait_window_t_ParamLimits

0xfc6f,	// (0x000577ad) popup_note2_wait_window_t

0x6719,	// (0x0004e257) wait_bar2_pane_ParamLimits

0x6719,	// (0x0004e257) wait_bar2_pane

0x6731,	// (0x0004e26f) popup_snote2_single_text_window_g1_ParamLimits

0x6731,	// (0x0004e26f) popup_snote2_single_text_window_g1

0x6759,	// (0x0004e297) popup_snote2_single_text_window_t1_ParamLimits

0x6759,	// (0x0004e297) popup_snote2_single_text_window_t1

0x67a5,	// (0x0004e2e3) popup_snote2_single_text_window_t2_ParamLimits

0x67a5,	// (0x0004e2e3) popup_snote2_single_text_window_t2

0x67f1,	// (0x0004e32f) popup_snote2_single_text_window_t3_ParamLimits

0x67f1,	// (0x0004e32f) popup_snote2_single_text_window_t3

0x6832,	// (0x0004e370) popup_snote2_single_text_window_t4_ParamLimits

0x6832,	// (0x0004e370) popup_snote2_single_text_window_t4

0x6868,	// (0x0004e3a6) popup_snote2_single_text_window_t5_ParamLimits

0x6868,	// (0x0004e3a6) popup_snote2_single_text_window_t5

0x0004,

0xfc78,	// (0x000577b6) popup_snote2_single_text_window_t_ParamLimits

0xfc78,	// (0x000577b6) popup_snote2_single_text_window_t

0x6893,	// (0x0004e3d1) popup_snote2_single_graphic_window_g1_ParamLimits

0x6893,	// (0x0004e3d1) popup_snote2_single_graphic_window_g1

0x68bb,	// (0x0004e3f9) popup_snote2_single_graphic_window_g2_ParamLimits

0x68bb,	// (0x0004e3f9) popup_snote2_single_graphic_window_g2

0x0001,

0xfc83,	// (0x000577c1) popup_snote2_single_graphic_window_g_ParamLimits

0xfc83,	// (0x000577c1) popup_snote2_single_graphic_window_g

0x68e3,	// (0x0004e421) popup_snote2_single_graphic_window_t1_ParamLimits

0x68e3,	// (0x0004e421) popup_snote2_single_graphic_window_t1

0x692f,	// (0x0004e46d) popup_snote2_single_graphic_window_t2_ParamLimits

0x692f,	// (0x0004e46d) popup_snote2_single_graphic_window_t2

0x67f1,	// (0x0004e32f) popup_snote2_single_graphic_window_t3_ParamLimits

0x67f1,	// (0x0004e32f) popup_snote2_single_graphic_window_t3

0x6832,	// (0x0004e370) popup_snote2_single_graphic_window_t4_ParamLimits

0x6832,	// (0x0004e370) popup_snote2_single_graphic_window_t4

0x6868,	// (0x0004e3a6) popup_snote2_single_graphic_window_t5_ParamLimits

0x6868,	// (0x0004e3a6) popup_snote2_single_graphic_window_t5

0x0004,

0xfc88,	// (0x000577c6) popup_snote2_single_graphic_window_t_ParamLimits

0xfc88,	// (0x000577c6) popup_snote2_single_graphic_window_t

0x535f,	// (0x0004ce9d) clock_nsta_pane_cp2_t1

0x535f,	// (0x0004ce9d) clock_nsta_pane_cp2_t2

0x0001,

0xfaa8,	// (0x000575e6) clock_nsta_pane_cp2_t

0xed01,	// (0x0005683f) form_field_data_wide_pane_g1_ParamLimits

0xacbc,	// (0x000527fa) form_field_data_wide_pane_g2_ParamLimits

0xacbc,	// (0x000527fa) form_field_data_wide_pane_g2

0xacc8,	// (0x00052806) form_field_data_wide_pane_g3_ParamLimits

0xacc8,	// (0x00052806) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x00057199) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x00057199) form_field_data_wide_pane_g

0xcf49,	// (0x00054a87) grid_touch_3_pane_ParamLimits

0xcf49,	// (0x00054a87) grid_touch_3_pane

0xd47a,	// (0x00054fb8) cell_touch_3_pane_ParamLimits

0xd47a,	// (0x00054fb8) cell_touch_3_pane

0x585b,	// (0x0004d399) cell_touch_3_pane_g1

0x585b,	// (0x0004d399) cell_touch_3_pane_g2

0x0001,

0xfb2d,	// (0x0005766b) cell_touch_3_pane_g

0xa71d,	// (0x0005225b) cont_query_data_pane

0xa725,	// (0x00052263) cont_query_data_pane_cp1

0x69ae,	// (0x0004e4ec) button_value_adjust_pane_cp7

0x69b6,	// (0x0004e4f4) query_popup_pane_cp3

0xe4e1,	// (0x0005601f) bg_popup_sub_pane_cp22_ParamLimits

0x04fc,	// (0x0004803a) navi_navi_volume_pane_cp2

0x0517,	// (0x00048055) popup_side_volume_key_window_g2

0x0526,	// (0x00048064) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x0005722f) popup_side_volume_key_window_g

0x0543,	// (0x00048081) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x00057236) popup_side_volume_key_window_t

0x2760,	// (0x0004a29e) popup_side_volume_key_window_ParamLimits

0x98ea,	// (0x00051428) list_double_graphic_pane_g4_ParamLimits

0x98ea,	// (0x00051428) list_double_graphic_pane_g4

0xbd81,	// (0x000538bf) list_single_2heading_msg_pane_ParamLimits

0xbd81,	// (0x000538bf) list_single_2heading_msg_pane

0xbe62,	// (0x000539a0) list_single_2heading_msg_pane_g1_ParamLimits

0xbe62,	// (0x000539a0) list_single_2heading_msg_pane_g1

0xbe6e,	// (0x000539ac) list_single_2heading_msg_pane_g2_ParamLimits

0xbe6e,	// (0x000539ac) list_single_2heading_msg_pane_g2

0xbe81,	// (0x000539bf) list_single_2heading_msg_pane_g3_ParamLimits

0xbe81,	// (0x000539bf) list_single_2heading_msg_pane_g3

0xbe8d,	// (0x000539cb) list_single_2heading_msg_pane_g4_ParamLimits

0xbe8d,	// (0x000539cb) list_single_2heading_msg_pane_g4

0x0003,

0xfc93,	// (0x000577d1) list_single_2heading_msg_pane_g_ParamLimits

0xfc93,	// (0x000577d1) list_single_2heading_msg_pane_g

0x9e84,	// (0x000519c2) list_single_2heading_msg_pane_t1_ParamLimits

0x9e84,	// (0x000519c2) list_single_2heading_msg_pane_t1

0x9eac,	// (0x000519ea) list_single_2heading_msg_pane_t2_ParamLimits

0x9eac,	// (0x000519ea) list_single_2heading_msg_pane_t2

0x9f17,	// (0x00051a55) list_single_2heading_msg_pane_t3_ParamLimits

0x9f17,	// (0x00051a55) list_single_2heading_msg_pane_t3

0xf504,	// (0x00057042) list_single_2heading_msg_pane_t4_ParamLimits

0xf504,	// (0x00057042) list_single_2heading_msg_pane_t4

0x0003,

0xfc9c,	// (0x000577da) list_single_2heading_msg_pane_t_ParamLimits

0xfc9c,	// (0x000577da) list_single_2heading_msg_pane_t

0xa24c,	// (0x00051d8a) title_pane_g4_ParamLimits

0xa24c,	// (0x00051d8a) title_pane_g4

0x014b,	// (0x00047c89) title_pane_stacon_g3_ParamLimits

0x014b,	// (0x00047c89) title_pane_stacon_g3

0x64d7,	// (0x0004e015) list_single_2graphic_im_pane_g4_ParamLimits

0x64d7,	// (0x0004e015) list_single_2graphic_im_pane_g4

0x42fd,	// (0x0004be3b) popup_side_volume_key_window_cp

0x4b4a,	// (0x0004c688) main_idle_act2_pane_t1

0x0f95,	// (0x00048ad3) toolbar_button_pane_g10

0xabc8,	// (0x00052706) popup_toolbar_window_cp1

0x5350,	// (0x0004ce8e) clock_nsta_pane_cp_t1

0x5350,	// (0x0004ce8e) clock_nsta_pane_cp_t2

0x0001,

0xfaa3,	// (0x000575e1) clock_nsta_pane_cp_t

0x04fc,	// (0x0004803a) navi_navi_volume_pane_cp2_ParamLimits

0x050b,	// (0x00048049) popup_side_volume_key_window_g1_ParamLimits

0x0517,	// (0x00048055) popup_side_volume_key_window_g2_ParamLimits

0x0526,	// (0x00048064) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x0005722f) popup_side_volume_key_window_g_ParamLimits

0x150f,	// (0x0004904d) fep_hwr_aid_pane

0xd125,	// (0x00054c63) bg_fep_hwr_top_pane_g4_ParamLimits

0x58bc,	// (0x0004d3fa) fep_hwr_top_pane_g1_ParamLimits

0x58ce,	// (0x0004d40c) fep_hwr_top_pane_g2_ParamLimits

0x15ca,	// (0x00049108) fep_hwr_top_pane_g3_ParamLimits

0xfaf8,	// (0x00057636) fep_hwr_top_pane_g_ParamLimits

0x15df,	// (0x0004911d) fep_hwr_top_text_pane_ParamLimits

0x40b2,	// (0x0004bbf0) aid_touch_tab_arrow_arrow_2

0x40bb,	// (0x0004bbf9) aid_touch_tab_arrow_left_2

0x1523,	// (0x00049061) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x155a,	// (0x00049098) fep_hwr_prediction_pane

0x5a24,	// (0x0004d562) fep_vkb_prediction_pane

0xd251,	// (0x00054d8f) fep_vkb_side_pane_g3_ParamLimits

0xd251,	// (0x00054d8f) fep_vkb_side_pane_g3

0x5ad6,	// (0x0004d614) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5fa4,	// (0x0004dae2) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5fb1,	// (0x0004daef) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba2,	// (0x000576e0) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x69dd,	// (0x0004e51b) fep_hwr_prediction_pane_g1

0x1951,	// (0x0004948f) fep_hwr_prediction_pane_g2

0x1959,	// (0x00049497) fep_hwr_prediction_pane_g3

0x1961,	// (0x0004949f) fep_hwr_prediction_pane_g4

0x0003,

0xfca5,	// (0x000577e3) fep_hwr_prediction_pane_g

0x69dd,	// (0x0004e51b) fep_vkb_prediction_pane_g1

0x69e7,	// (0x0004e525) fep_vkb_prediction_pane_g2

0x69ef,	// (0x0004e52d) fep_vkb_prediction_pane_g3

0x69f7,	// (0x0004e535) fep_vkb_prediction_pane_g4

0x0003,

0xfcae,	// (0x000577ec) fep_vkb_prediction_pane_g

0x12a2,	// (0x00048de0) slider_set_pane_g3

0x12b6,	// (0x00048df4) slider_set_pane_g4

0x12ce,	// (0x00048e0c) slider_set_pane_g5

0x12a2,	// (0x00048de0) slider_set_pane_g6

0x12e4,	// (0x00048e22) slider_set_pane_g7

0x4783,	// (0x0004c2c1) slider_form_pane_g3

0x478c,	// (0x0004c2ca) slider_form_pane_g4

0x4794,	// (0x0004c2d2) slider_form_pane_g5

0x4783,	// (0x0004c2c1) slider_form_pane_g6

0xcdbf,	// (0x000548fd) slider_form_pane_g7

0x4e0e,	// (0x0004c94c) slider_set_pane_vc_g3

0x4e17,	// (0x0004c955) slider_set_pane_vc_g4

0x4e20,	// (0x0004c95e) slider_set_pane_vc_g5

0x4e0e,	// (0x0004c94c) slider_set_pane_vc_g6

0x4e29,	// (0x0004c967) slider_set_pane_vc_g7

0x4fff,	// (0x0004cb3d) slider_form_pane_vc_g1

0x5008,	// (0x0004cb46) slider_form_pane_vc_g2

0x5011,	// (0x0004cb4f) slider_form_pane_vc_g3

0x4fff,	// (0x0004cb3d) slider_form_pane_vc_g4

0x501a,	// (0x0004cb58) slider_form_pane_vc_g5

0x0004,

0xfa75,	// (0x000575b3) slider_form_pane_vc_g

0x9fd7,	// (0x00051b15) main_idle_act3_pane

0x69ff,	// (0x0004e53d) ai3_links_pane

0xd4c6,	// (0x00055004) popup_ai3_data_window_ParamLimits

0xd4c6,	// (0x00055004) popup_ai3_data_window

0x9fd7,	// (0x00051b15) grid_ai3_links_pane

0xd4e4,	// (0x00055022) cell_ai3_links_pane_ParamLimits

0xd4e4,	// (0x00055022) cell_ai3_links_pane

0x6a40,	// (0x0004e57e) bg_popup_sub_pane_cp11

0x6a4d,	// (0x0004e58b) cell_ai3_links_pane_g1

0x9fd7,	// (0x00051b15) bg_popup_sub_pane_cp12

0x6a72,	// (0x0004e5b0) heading_ai3_data_pane

0x6a7a,	// (0x0004e5b8) list_ai3_gene_pane

0x6a86,	// (0x0004e5c4) popup_ai3_data_window_g1

0x6a8e,	// (0x0004e5cc) heading_ai3_data_pane_g1

0x6a96,	// (0x0004e5d4) heading_ai3_data_pane_t1

0x6aa4,	// (0x0004e5e2) list_double_ai3_gene_pane_ParamLimits

0x6aa4,	// (0x0004e5e2) list_double_ai3_gene_pane

0x6ab1,	// (0x0004e5ef) list_single_ai3_gene_pane_ParamLimits

0x6ab1,	// (0x0004e5ef) list_single_ai3_gene_pane

0x5820,	// (0x0004d35e) list_highlight_pane_cp7_ParamLimits

0x5820,	// (0x0004d35e) list_highlight_pane_cp7

0x6abe,	// (0x0004e5fc) list_single_a13_gene_pane_t1_ParamLimits

0x6abe,	// (0x0004e5fc) list_single_a13_gene_pane_t1

0x6ad5,	// (0x0004e613) list_single_ai3_gene_pane_g1

0x6ade,	// (0x0004e61c) list_single_ai3_gene_pane_g2

0x0001,

0xfcb7,	// (0x000577f5) list_single_ai3_gene_pane_g

0x6ae6,	// (0x0004e624) list_double_ai3_gene_pane_g1_ParamLimits

0x6ae6,	// (0x0004e624) list_double_ai3_gene_pane_g1

0x6af2,	// (0x0004e630) list_double_ai3_gene_pane_t1_ParamLimits

0x6af2,	// (0x0004e630) list_double_ai3_gene_pane_t1

0x6b0e,	// (0x0004e64c) list_double_ai3_gene_pane_t2_ParamLimits

0x6b0e,	// (0x0004e64c) list_double_ai3_gene_pane_t2

0x6b23,	// (0x0004e661) list_double_ai3_gene_pane_t3_ParamLimits

0x6b23,	// (0x0004e661) list_double_ai3_gene_pane_t3

0x0002,

0xfcbc,	// (0x000577fa) list_double_ai3_gene_pane_t_ParamLimits

0xfcbc,	// (0x000577fa) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf2a4,	// (0x00056de2) aid_size_min_col_2

0xd4b0,	// (0x00054fee) aid_size_min_msg_ParamLimits

0xd4b0,	// (0x00054fee) aid_size_min_msg

0xd265,	// (0x00054da3) fep_vkb_top_text_pane_g2_ParamLimits

0xd265,	// (0x00054da3) fep_vkb_top_text_pane_g2

0x0001,

0xfb28,	// (0x00057666) fep_vkb_top_text_pane_g_ParamLimits

0xfb28,	// (0x00057666) fep_vkb_top_text_pane_g

0x9fd7,	// (0x00051b15) main_hc_apps_shell_pane

0x6b40,	// (0x0004e67e) grid_hc_apps_pane_ParamLimits

0x6b40,	// (0x0004e67e) grid_hc_apps_pane

0x6b52,	// (0x0004e690) list_hc_apps_pane

0x6b5a,	// (0x0004e698) scroll_pane_cp37_ParamLimits

0x6b5a,	// (0x0004e698) scroll_pane_cp37

0xd4fe,	// (0x0005503c) cell_hc_apps_pane_ParamLimits

0xd4fe,	// (0x0005503c) cell_hc_apps_pane

0xd5c4,	// (0x00055102) cell_hc_apps_pane_g1_ParamLimits

0xd5c4,	// (0x00055102) cell_hc_apps_pane_g1

0x6c46,	// (0x0004e784) cell_hc_apps_pane_g2_ParamLimits

0x6c46,	// (0x0004e784) cell_hc_apps_pane_g2

0x6c62,	// (0x0004e7a0) cell_hc_apps_pane_g3_ParamLimits

0x6c62,	// (0x0004e7a0) cell_hc_apps_pane_g3

0x0002,

0xfcc3,	// (0x00057801) cell_hc_apps_pane_g_ParamLimits

0xfcc3,	// (0x00057801) cell_hc_apps_pane_g

0xd5f0,	// (0x0005512e) cell_hc_apps_pane_t1_ParamLimits

0xd5f0,	// (0x0005512e) cell_hc_apps_pane_t1

0xa641,	// (0x0005217f) grid_highlight_pane_cp10_ParamLimits

0xa641,	// (0x0005217f) grid_highlight_pane_cp10

0xd62e,	// (0x0005516c) list_single_hc_apps_pane_ParamLimits

0xd62e,	// (0x0005516c) list_single_hc_apps_pane

0xd661,	// (0x0005519f) list_single_hc_apps_pane_g1

0xbea5,	// (0x000539e3) list_single_hc_apps_pane_g2

0x0001,

0xfcca,	// (0x00057808) list_single_hc_apps_pane_g

0xbebe,	// (0x000539fc) list_single_hc_apps_pane_g2_copy1

0x9f85,	// (0x00051ac3) list_single_hc_apps_pane_t1

0xa35e,	// (0x00051e9c) bg_set_opt_pane_cp_ParamLimits

0xf47b,	// (0x00056fb9) setting_slider_pane_t1_ParamLimits

0xf494,	// (0x00056fd2) setting_slider_pane_t2_ParamLimits

0xf4ae,	// (0x00056fec) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00057077) setting_slider_pane_t_ParamLimits

0xf4c6,	// (0x00057004) slider_set_pane_ParamLimits

0x0822,	// (0x00048360) control_pane_g5_ParamLimits

0x0822,	// (0x00048360) control_pane_g5

0x45b6,	// (0x0004c0f4) slider_set_pane_g1_ParamLimits

0x1296,	// (0x00048dd4) slider_set_pane_g2_ParamLimits

0x12a2,	// (0x00048de0) slider_set_pane_g3_ParamLimits

0x12b6,	// (0x00048df4) slider_set_pane_g4_ParamLimits

0x12ce,	// (0x00048e0c) slider_set_pane_g5_ParamLimits

0x12a2,	// (0x00048de0) slider_set_pane_g6_ParamLimits

0x12e4,	// (0x00048e22) slider_set_pane_g7_ParamLimits

0xf93f,	// (0x0005747d) slider_set_pane_g_ParamLimits

0x2839,	// (0x0004a377) navi_icon_text_pane_ParamLimits

0xbb87,	// (0x000536c5) aid_fill_nsta_2_ParamLimits

0xc5e3,	// (0x00054121) aid_touch_tab_arrow_left_ParamLimits

0xc5f9,	// (0x00054137) aid_touch_tab_arrow_right_ParamLimits

0xc694,	// (0x000541d2) clock_nsta_pane_ParamLimits

0xcb3d,	// (0x0005467b) navi_icon_pane_g1_ParamLimits

0xcb49,	// (0x00054687) navi_text_pane_t1_ParamLimits

0xd022,	// (0x00054b60) navi_icon_text_pane_g1_ParamLimits

0xd02e,	// (0x00054b6c) navi_icon_text_pane_t1_ParamLimits

0xd661,	// (0x0005519f) list_single_hc_apps_pane_g1_ParamLimits

0xbea5,	// (0x000539e3) list_single_hc_apps_pane_g2_ParamLimits

0xfcca,	// (0x00057808) list_single_hc_apps_pane_g_ParamLimits

0xbebe,	// (0x000539fc) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x9f85,	// (0x00051ac3) list_single_hc_apps_pane_t1_ParamLimits

0xa12f,	// (0x00051c6d) popup_toolbar2_fixed_window_ParamLimits

0xa12f,	// (0x00051c6d) popup_toolbar2_fixed_window

0xbaec,	// (0x0005362a) popup_toolbar2_float_window

0x9fd7,	// (0x00051b15) bg_popup_sub_pane_cp27

0x6d1c,	// (0x0004e85a) grid_toolbar2_float_pane

0x9fd7,	// (0x00051b15) bg_popup_sub_pane_cp26

0x6d1c,	// (0x0004e85a) grid_toolbar2_fixed_pane

0xd67a,	// (0x000551b8) cell_toolbar2_fixed_pane_ParamLimits

0xd67a,	// (0x000551b8) cell_toolbar2_fixed_pane

0xd694,	// (0x000551d2) cell_toolbar2_fixed_pane_g1

0x6d3d,	// (0x0004e87b) toolbar2_fixed_button_pane

0x3227,	// (0x0004ad65) toolbar2_fixed_button_pane_g1

0x322f,	// (0x0004ad6d) toolbar2_fixed_button_pane_g2

0x3237,	// (0x0004ad75) toolbar2_fixed_button_pane_g3

0x323f,	// (0x0004ad7d) toolbar2_fixed_button_pane_g4

0x3247,	// (0x0004ad85) toolbar2_fixed_button_pane_g5

0x324f,	// (0x0004ad8d) toolbar2_fixed_button_pane_g6

0x3257,	// (0x0004ad95) toolbar2_fixed_button_pane_g7

0x325f,	// (0x0004ad9d) toolbar2_fixed_button_pane_g8

0x3267,	// (0x0004ada5) toolbar2_fixed_button_pane_g9

0x0008,

0xf841,	// (0x0005737f) toolbar2_fixed_button_pane_g

0x6d45,	// (0x0004e883) cell_toolbar2_float_pane_ParamLimits

0x6d45,	// (0x0004e883) cell_toolbar2_float_pane

0x6d56,	// (0x0004e894) cell_toolbar2_float_pane_g1

0x6d3d,	// (0x0004e87b) toolbar2_fixed_button_pane_cp

0xd14d,	// (0x00054c8b) fep_vkb_accented_list_pane_ParamLimits

0xd14d,	// (0x00054c8b) fep_vkb_accented_list_pane

0x1741,	// (0x0004927f) bg_popup_fep_shadow_pane_g9

0x29c8,	// (0x0004a506) bg_popup_fep_shadow_pane_cp3

0xae1b,	// (0x00052959) list_accented_list_pane

0x6d5f,	// (0x0004e89d) list_single_accented_list_pane_ParamLimits

0x6d5f,	// (0x0004e89d) list_single_accented_list_pane

0x29c8,	// (0x0004a506) list_highlight_pane_cp10

0x6d70,	// (0x0004e8ae) list_single_accented_list_pane_t1

0xba08,	// (0x00053546) popup_slider_window_ParamLimits

0xba08,	// (0x00053546) popup_slider_window

0x69be,	// (0x0004e4fc) aid_indentation_list_msg

0xd797,	// (0x000552d5) bg_popup_window_pane_cp19

0x6eac,	// (0x0004e9ea) popup_slider_window_g1

0x6ec8,	// (0x0004ea06) popup_slider_window_g2

0x6ee4,	// (0x0004ea22) popup_slider_window_g3

0x0005,

0xfccf,	// (0x0005780d) popup_slider_window_g

0x6f4a,	// (0x0004ea88) popup_slider_window_t1

0x6fbe,	// (0x0004eafc) small_volume_slider_vertical_pane

0x585b,	// (0x0004d399) small_volume_slider_vertical_pane_g1

0x585b,	// (0x0004d399) small_volume_slider_vertical_pane_g2

0x6fda,	// (0x0004eb18) small_volume_slider_vertical_pane_g3

0x0002,

0xfce1,	// (0x0005781f) small_volume_slider_vertical_pane_g

0xa08f,	// (0x00051bcd) area_side_right_pane_ParamLimits

0xa08f,	// (0x00051bcd) area_side_right_pane

0xbeda,	// (0x00053a18) aid_size_side_button_ParamLimits

0xbeda,	// (0x00053a18) aid_size_side_button

0xbef3,	// (0x00053a31) grid_sctrl_middle_pane_ParamLimits

0xbef3,	// (0x00053a31) grid_sctrl_middle_pane

0x19d1,	// (0x0004950f) sctrl_sk_bottom_pane

0x19e2,	// (0x00049520) sctrl_sk_top_pane

0x19f4,	// (0x00049532) aid_touch_sctrl_top

0xa641,	// (0x0005217f) bg_sctrl_sk_pane_ParamLimits

0xa641,	// (0x0005217f) bg_sctrl_sk_pane

0x1a01,	// (0x0004953f) sctrl_sk_top_pane_g1

0x1a0e,	// (0x0004954c) sctrl_sk_top_pane_t1

0x19f4,	// (0x00049532) aid_touch_sctrl_bottom

0xa641,	// (0x0005217f) bg_sctrl_sk_pane_cp_ParamLimits

0xa641,	// (0x0005217f) bg_sctrl_sk_pane_cp

0x1a29,	// (0x00049567) sctrl_sk_bottom_pane_g1

0x1a0e,	// (0x0004954c) sctrl_sk_bottom_pane_t1

0xbf0d,	// (0x00053a4b) cell_sctrl_middle_pane_ParamLimits

0xbf0d,	// (0x00053a4b) cell_sctrl_middle_pane

0xbf20,	// (0x00053a5e) aid_touch_sctrl_middle_ParamLimits

0xbf20,	// (0x00053a5e) aid_touch_sctrl_middle

0xbf2d,	// (0x00053a6b) bg_sctrl_middle_pane_ParamLimits

0xbf2d,	// (0x00053a6b) bg_sctrl_middle_pane

0x7065,	// (0x0004eba3) cell_sctrl_middle_pane_g1_ParamLimits

0x7065,	// (0x0004eba3) cell_sctrl_middle_pane_g1

0xbf3b,	// (0x00053a79) cell_sctrl_middle_pane_g2_ParamLimits

0xbf3b,	// (0x00053a79) cell_sctrl_middle_pane_g2

0x0001,

0xfced,	// (0x0005782b) cell_sctrl_middle_pane_g_ParamLimits

0xfced,	// (0x0005782b) cell_sctrl_middle_pane_g

0x3227,	// (0x0004ad65) bg_sctrl_middle_pane_g1

0x322f,	// (0x0004ad6d) bg_sctrl_middle_pane_g2

0x3237,	// (0x0004ad75) bg_sctrl_middle_pane_g3

0x323f,	// (0x0004ad7d) bg_sctrl_middle_pane_g4

0x3247,	// (0x0004ad85) bg_sctrl_middle_pane_g5

0x324f,	// (0x0004ad8d) bg_sctrl_middle_pane_g6

0x3257,	// (0x0004ad95) bg_sctrl_middle_pane_g7

0x325f,	// (0x0004ad9d) bg_sctrl_middle_pane_g8

0x0007,

0xfcf2,	// (0x00057830) bg_sctrl_middle_pane_g

0x3267,	// (0x0004ada5) bg_sctrl_middle_pane_g8_copy1

0x3227,	// (0x0004ad65) bg_sctrl_sk_pane_g1

0x322f,	// (0x0004ad6d) bg_sctrl_sk_pane_g2

0x3237,	// (0x0004ad75) bg_sctrl_sk_pane_g3

0x0008,

0xf841,	// (0x0005737f) bg_sctrl_sk_pane_g

0xab8e,	// (0x000526cc) aid_size_touch_scroll_bar

0x323f,	// (0x0004ad7d) bg_sctrl_sk_pane_g4

0x3247,	// (0x0004ad85) bg_sctrl_sk_pane_g5

0x324f,	// (0x0004ad8d) bg_sctrl_sk_pane_g6

0x3257,	// (0x0004ad95) bg_sctrl_sk_pane_g7

0x325f,	// (0x0004ad9d) bg_sctrl_sk_pane_g8

0x3267,	// (0x0004ada5) bg_sctrl_sk_pane_g9

0x09ca,	// (0x00048508) popup_fep_china_hwr2_fs_candidate_window

0xb4ba,	// (0x00052ff8) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb4ba,	// (0x00052ff8) popup_fep_china_hwr2_fs_control_window

0x5ad6,	// (0x0004d614) sctrl_sk_top_pane_g2

0x0001,

0xfce8,	// (0x00057826) sctrl_sk_top_pane_g

0xd84f,	// (0x0005538d) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd84f,	// (0x0005538d) aid_fep_china_hwr2_fs_cell

0xd865,	// (0x000553a3) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd865,	// (0x000553a3) bg_popup_fep_shadow_pane_cp4

0xd87c,	// (0x000553ba) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd87c,	// (0x000553ba) bg_popup_fep_shadow_pane_cp5

0xd88e,	// (0x000553cc) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd88e,	// (0x000553cc) popup_fep_china_hwr2_fs_control_bar_grid

0xd8a2,	// (0x000553e0) popup_fep_china_hwr2_fs_control_funtion_grid

0x7039,	// (0x0004eb77) aid_fep_china_hwr2_fs_candi_cell

0x9fd7,	// (0x00051b15) bg_popup_fep_shadow_pane_cp6

0x7043,	// (0x0004eb81) popup_fep_china_hwr2_fs_candidate_grid

0xd8aa,	// (0x000553e8) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd8aa,	// (0x000553e8) cell_fep_china_hwr2_fs_funtion_grid

0x585b,	// (0x0004d399) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x7065,	// (0x0004eba3) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x7065,	// (0x0004eba3) cell_fep_china_hwr2_fs_funtion_grid_g1

0x7073,	// (0x0004ebb1) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x7073,	// (0x0004ebb1) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd03,	// (0x00057841) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd03,	// (0x00057841) cell_fep_china_hwr2_fs_funtion_grid_g

0xd8c2,	// (0x00055400) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd8c2,	// (0x00055400) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd8d7,	// (0x00055415) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd8d7,	// (0x00055415) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd08,	// (0x00057846) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd08,	// (0x00057846) cell_fep_china_hwr2_fs_funtion_grid_t

0x70ba,	// (0x0004ebf8) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x70c2,	// (0x0004ec00) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x70ca,	// (0x0004ec08) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0d,	// (0x0005784b) popup_fep_china_hwr2_fs_control_bar_grid_g

0x70d2,	// (0x0004ec10) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x70d2,	// (0x0004ec10) cell_fep_china_hwr2_fs_candidate_grid

0x70f1,	// (0x0004ec2f) popup_fep_china_hwr2_fs_candidate_grid_g20

0x70f9,	// (0x0004ec37) popup_fep_china_hwr2_fs_candidate_grid_g21

0x585b,	// (0x0004d399) cell_fep_china_hwr2_fs_candidate_grid_g1

0x585b,	// (0x0004d399) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb2d,	// (0x0005766b) cell_fep_china_hwr2_fs_candidate_grid_g

0x7101,	// (0x0004ec3f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x2e0d,	// (0x0004a94b) clock_nsta_pane_cp_24_ParamLimits

0x2e0d,	// (0x0004a94b) clock_nsta_pane_cp_24

0x2e8d,	// (0x0004a9cb) indicator_nsta_pane_cp_24_ParamLimits

0x2e8d,	// (0x0004a9cb) indicator_nsta_pane_cp_24

0x3f10,	// (0x0004ba4e) heading_pane_g1

0x0001,

0xf8a6,	// (0x000573e4) heading_pane_g

0x4991,	// (0x0004c4cf) grid_sct_catagory_button_pane

0x49c3,	// (0x0004c501) scroll_pane_cp5_ParamLimits

0x54bb,	// (0x0004cff9) button_value_adjust_pane_cp5_ParamLimits

0x54bb,	// (0x0004cff9) button_value_adjust_pane_cp5

0x55a0,	// (0x0004d0de) form2_midp_time_pane_ParamLimits

0x710f,	// (0x0004ec4d) cell_sct_catagory_button_pane_ParamLimits

0x710f,	// (0x0004ec4d) cell_sct_catagory_button_pane

0x5820,	// (0x0004d35e) bg_button_pane_cp01_ParamLimits

0x5820,	// (0x0004d35e) bg_button_pane_cp01

0x585b,	// (0x0004d399) cell_sct_catagory_button_pane_g1

0xba89,	// (0x000535c7) popup_tb_extension_window

0xd8f3,	// (0x00055431) aid_size_cell_ext_ParamLimits

0xd8f3,	// (0x00055431) aid_size_cell_ext

0xa9d0,	// (0x0005250e) bg_tb_trans_pane_cp1_ParamLimits

0xa9d0,	// (0x0005250e) bg_tb_trans_pane_cp1

0xd919,	// (0x00055457) grid_tb_ext_pane_ParamLimits

0xd919,	// (0x00055457) grid_tb_ext_pane

0xd956,	// (0x00055494) cell_tb_ext_pane_ParamLimits

0xd956,	// (0x00055494) cell_tb_ext_pane

0xd97e,	// (0x000554bc) cell_tb_ext_pane_g1_ParamLimits

0xd97e,	// (0x000554bc) cell_tb_ext_pane_g1

0x71a3,	// (0x0004ece1) cell_tb_ext_pane_t1

0xa641,	// (0x0005217f) list_highlight_pane_cp11_ParamLimits

0xa641,	// (0x0005217f) list_highlight_pane_cp11

0xa144,	// (0x00051c82) popup_uni_indicator_window_ParamLimits

0xa144,	// (0x00051c82) popup_uni_indicator_window

0xacae,	// (0x000527ec) bg_popup_sub_pane_cp14

0x71be,	// (0x0004ecfc) list_uniindi_pane

0x71ca,	// (0x0004ed08) uniindi_top_pane

0xa641,	// (0x0005217f) bg_uniindi_top_pane

0x71eb,	// (0x0004ed29) uniindi_top_pane_g1

0x7201,	// (0x0004ed3f) uniindi_top_pane_g2

0x0003,

0xfd14,	// (0x00057852) uniindi_top_pane_g

0x722b,	// (0x0004ed69) uniindi_top_pane_t1

0x7257,	// (0x0004ed95) list_single_uniindi_pane_ParamLimits

0x7257,	// (0x0004ed95) list_single_uniindi_pane

0x585b,	// (0x0004d399) bg_uniindi_top_pane_g1

0x726a,	// (0x0004eda8) list_single_uniindi_pane_g1

0x727d,	// (0x0004edbb) list_single_uniindi_pane_t1

0x9fd7,	// (0x00051b15) control_bg_pane

0x72a2,	// (0x0004ede0) bg_sctrl_sk_pane_cp1

0x72ab,	// (0x0004ede9) bg_sctrl_sk_pane_cp2

0x72b4,	// (0x0004edf2) control_bg_pane_g1

0x72bd,	// (0x0004edfb) control_bg_pane_g2

0x0001,

0xfd1d,	// (0x0005785b) control_bg_pane_g

0x52f3,	// (0x0004ce31) cell_indicator_nsta_pane_g1_ParamLimits

0xcf86,	// (0x00054ac4) cell_indicator_nsta_pane_g2_ParamLimits

0xfa91,	// (0x000575cf) cell_indicator_nsta_pane_g_ParamLimits

0xf127,	// (0x00056c65) form2_midp_time_pane_t1_ParamLimits

0x1501,	// (0x0004903f) main_idle_act4_pane_ParamLimits

0x1501,	// (0x0004903f) main_idle_act4_pane

0xba89,	// (0x000535c7) popup_tb_extension_window_ParamLimits

0xd93e,	// (0x0005547c) tb_ext_find_pane_ParamLimits

0xd93e,	// (0x0005547c) tb_ext_find_pane

0x72c6,	// (0x0004ee04) ai_gene_pane_1_cp1

0x2b12,	// (0x0004a650) ai_gene_pane_2_cp1

0x72ce,	// (0x0004ee0c) list_single_idle_plugin_calendar_pane

0x72d7,	// (0x0004ee15) list_single_idle_plugin_notification_pane

0x72e0,	// (0x0004ee1e) list_single_idle_plugin_player_pane

0xd99b,	// (0x000554d9) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd99b,	// (0x000554d9) list_single_idle_plugin_shortcut_pane

0xd9c3,	// (0x00055501) main_idle_act4_pane_t1

0xd9db,	// (0x00055519) main_idle_act4_pane_t2

0x0001,

0xfd22,	// (0x00057860) main_idle_act4_pane_t

0xd9f3,	// (0x00055531) middle_sk_idle_act4_pane_ParamLimits

0xd9f3,	// (0x00055531) middle_sk_idle_act4_pane

0xda0f,	// (0x0005554d) popup_clock_digital_analogue_window_cp2

0xda36,	// (0x00055574) shortcut_wheel_idle_act4_pane_ParamLimits

0xda36,	// (0x00055574) shortcut_wheel_idle_act4_pane

0x585b,	// (0x0004d399) shortcut_wheel_idle_act4_pane_g1

0x585b,	// (0x0004d399) shortcut_wheel_idle_act4_pane_g2

0x585b,	// (0x0004d399) shortcut_wheel_idle_act4_pane_g3

0x585b,	// (0x0004d399) shortcut_wheel_idle_act4_pane_g4

0x585b,	// (0x0004d399) shortcut_wheel_idle_act4_pane_g5

0x7373,	// (0x0004eeb1) shortcut_wheel_idle_act4_pane_g6

0x737b,	// (0x0004eeb9) shortcut_wheel_idle_act4_pane_g7

0x7383,	// (0x0004eec1) shortcut_wheel_idle_act4_pane_g8

0x738b,	// (0x0004eec9) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd27,	// (0x00057865) shortcut_wheel_idle_act4_pane_g

0xd125,	// (0x00054c63) middle_sk_idle_act4_pane_g1_ParamLimits

0xd125,	// (0x00054c63) middle_sk_idle_act4_pane_g1

0xdab3,	// (0x000555f1) middle_sk_idle_act4_pane_g2_ParamLimits

0xdab3,	// (0x000555f1) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4a,	// (0x00057888) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4a,	// (0x00057888) middle_sk_idle_act4_pane_g

0xdacb,	// (0x00055609) middle_sk_idle_act4_pane_t1_ParamLimits

0xdacb,	// (0x00055609) middle_sk_idle_act4_pane_t1

0xdafa,	// (0x00055638) grid_ai_shortcut_pane_ParamLimits

0xdafa,	// (0x00055638) grid_ai_shortcut_pane

0xdb17,	// (0x00055655) list_highlight_pane_cp16_ParamLimits

0xdb17,	// (0x00055655) list_highlight_pane_cp16

0xdb24,	// (0x00055662) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdb24,	// (0x00055662) list_single_idle_plugin_shortcut_pane_g1

0xdb30,	// (0x0005566e) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdb30,	// (0x0005566e) list_single_idle_plugin_shortcut_pane_g2

0xdb4e,	// (0x0005568c) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdb4e,	// (0x0005568c) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd4f,	// (0x0005788d) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd4f,	// (0x0005788d) list_single_idle_plugin_shortcut_pane_g

0xdb63,	// (0x000556a1) cell_ai_shortcut_pane_ParamLimits

0xdb63,	// (0x000556a1) cell_ai_shortcut_pane

0xdb79,	// (0x000556b7) cell_ai_shortcut_pane_g1_ParamLimits

0xdb79,	// (0x000556b7) cell_ai_shortcut_pane_g1

0x72c6,	// (0x0004ee04) ai_gene_pane_1_cp2

0x74bc,	// (0x0004effa) ai_gene_pane_2_cp2

0x74c4,	// (0x0004f002) list_highlight_pane_cp15

0x74cd,	// (0x0004f00b) list_single_idle_plugin_calendar_pane_g1

0x74c4,	// (0x0004f002) list_highlight_pane_cp17

0x74d5,	// (0x0004f013) list_single_idle_plugin_calendar_pane_g1_copy1

0x74dd,	// (0x0004f01b) list_single_idle_plugin_player_pane_g1

0x4bf8,	// (0x0004c736) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd56,	// (0x00057894) list_single_idle_plugin_player_pane_g

0x74e5,	// (0x0004f023) list_single_idle_plugin_player_pane_t1

0x74f3,	// (0x0004f031) list_single_idle_plugin_player_pane_t2

0x7501,	// (0x0004f03f) list_single_idle_plugin_player_pane_t3

0x750f,	// (0x0004f04d) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5b,	// (0x00057899) list_single_idle_plugin_player_pane_t

0x751d,	// (0x0004f05b) wait_bar_pane_cp15

0x7525,	// (0x0004f063) grid_ai_notification_pane

0x4bf8,	// (0x0004c736) list_single_idle_plugin_notification_pane_g1

0xdb9b,	// (0x000556d9) cell_ai_notification_pane_ParamLimits

0xdb9b,	// (0x000556d9) cell_ai_notification_pane

0x753b,	// (0x0004f079) cell_ai_notification_pane_g1

0x7543,	// (0x0004f081) cell_ai_notification_pane_t1

0xdba8,	// (0x000556e6) tb_ext_find_button_pane

0xdbb0,	// (0x000556ee) tb_ext_find_pane_g1

0xdbb8,	// (0x000556f6) tb_ext_find_pane_t1

0xe481,	// (0x00055fbf) tb_ext_find_button_pane_g1

0x756f,	// (0x0004f0ad) tb_ext_find_button_pane_g2

0x0001,

0xfd64,	// (0x000578a2) tb_ext_find_button_pane_g

0xd9c3,	// (0x00055501) main_idle_act4_pane_t1_ParamLimits

0xd9db,	// (0x00055519) main_idle_act4_pane_t2_ParamLimits

0xfd22,	// (0x00057860) main_idle_act4_pane_t_ParamLimits

0xda0f,	// (0x0005554d) popup_clock_digital_analogue_window_cp2_ParamLimits

0xda26,	// (0x00055564) sat_plugin_idle_act4_pane_ParamLimits

0xda26,	// (0x00055564) sat_plugin_idle_act4_pane

0xdbc6,	// (0x00055704) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdbc6,	// (0x00055704) sat_plugin_idle_act4_pane_t1

0xdbde,	// (0x0005571c) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdbde,	// (0x0005571c) sat_plugin_idle_act4_pane_t2

0xdbf6,	// (0x00055734) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdbf6,	// (0x00055734) sat_plugin_idle_act4_pane_t3

0xdc0e,	// (0x0005574c) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdc0e,	// (0x0005574c) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd69,	// (0x000578a7) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd69,	// (0x000578a7) sat_plugin_idle_act4_pane_t

0xf41d,	// (0x00056f5b) popup_battery_window_ParamLimits

0xf41d,	// (0x00056f5b) popup_battery_window

0xa641,	// (0x0005217f) bg_popup_sub_pane_cp25_ParamLimits

0xa641,	// (0x0005217f) bg_popup_sub_pane_cp25

0x75c4,	// (0x0004f102) popup_battery_window_g1_ParamLimits

0x75c4,	// (0x0004f102) popup_battery_window_g1

0x75d0,	// (0x0004f10e) popup_battery_window_t1_ParamLimits

0x75d0,	// (0x0004f10e) popup_battery_window_t1

0x75e2,	// (0x0004f120) popup_battery_window_t2_ParamLimits

0x75e2,	// (0x0004f120) popup_battery_window_t2

0x0001,

0xfd72,	// (0x000578b0) popup_battery_window_t_ParamLimits

0xfd72,	// (0x000578b0) popup_battery_window_t

0xb237,	// (0x00052d75) midp_canvas_pane_ParamLimits

0xb293,	// (0x00052dd1) midp_keypad_pane_ParamLimits

0xb293,	// (0x00052dd1) midp_keypad_pane

0x2cef,	// (0x0004a82d) main_midp_pane_ParamLimits

0x536e,	// (0x0004ceac) signal_pane_g2_cp_ParamLimits

0xdc26,	// (0x00055764) aid_size_cell_midp_keypad_ParamLimits

0xdc26,	// (0x00055764) aid_size_cell_midp_keypad

0xdc44,	// (0x00055782) midp_keyp_game_grid_pane_ParamLimits

0xdc44,	// (0x00055782) midp_keyp_game_grid_pane

0xdc6b,	// (0x000557a9) midp_keyp_rocker_pane_ParamLimits

0xdc6b,	// (0x000557a9) midp_keyp_rocker_pane

0xdcba,	// (0x000557f8) midp_keyp_sk_left_pane_ParamLimits

0xdcba,	// (0x000557f8) midp_keyp_sk_left_pane

0xdd10,	// (0x0005584e) midp_keyp_sk_right_pane_ParamLimits

0xdd10,	// (0x0005584e) midp_keyp_sk_right_pane

0x9fd7,	// (0x00051b15) bg_button_pane_cp03

0xdd66,	// (0x000558a4) midp_keyp_sk_left_pane_g1

0x9fd7,	// (0x00051b15) bg_button_pane_cp04

0xdd66,	// (0x000558a4) midp_keyp_sk_right_pane_g1

0x585b,	// (0x0004d399) midp_keyp_rocker_pane_g1

0xdd6e,	// (0x000558ac) keyp_game_cell_pane_ParamLimits

0xdd6e,	// (0x000558ac) keyp_game_cell_pane

0x9fd7,	// (0x00051b15) bg_button_pane_cp02

0xdd94,	// (0x000558d2) keyp_game_cell_pane_g1

0xa0db,	// (0x00051c19) popup_fep_vkb2_window_ParamLimits

0xa0db,	// (0x00051c19) popup_fep_vkb2_window

0xbf47,	// (0x00053a85) aid_size_cell_vkb2_ParamLimits

0xbf47,	// (0x00053a85) aid_size_cell_vkb2

0xbf73,	// (0x00053ab1) popup_fep_vkb2_window_g1_ParamLimits

0xbf73,	// (0x00053ab1) popup_fep_vkb2_window_g1

0xbfc3,	// (0x00053b01) vkb2_area_bottom_pane_ParamLimits

0xbfc3,	// (0x00053b01) vkb2_area_bottom_pane

0xc01f,	// (0x00053b5d) vkb2_area_keypad_pane_ParamLimits

0xc01f,	// (0x00053b5d) vkb2_area_keypad_pane

0xc06d,	// (0x00053bab) vkb2_area_top_pane_ParamLimits

0xc06d,	// (0x00053bab) vkb2_area_top_pane

0xc0fa,	// (0x00053c38) vkb2_top_entry_pane_ParamLimits

0xc0fa,	// (0x00053c38) vkb2_top_entry_pane

0xc127,	// (0x00053c65) vkb2_top_grid_left_pane_ParamLimits

0xc127,	// (0x00053c65) vkb2_top_grid_left_pane

0xc148,	// (0x00053c86) vkb2_top_grid_right_pane_ParamLimits

0xc148,	// (0x00053c86) vkb2_top_grid_right_pane

0x1c95,	// (0x000497d3) vkb2_cell_keypad_pane_ParamLimits

0x1c95,	// (0x000497d3) vkb2_cell_keypad_pane

0xc190,	// (0x00053cce) vkb2_area_bottom_grid_pane_ParamLimits

0xc190,	// (0x00053cce) vkb2_area_bottom_grid_pane

0xc1ba,	// (0x00053cf8) vkb2_area_bottom_pane_g1_ParamLimits

0xc1ba,	// (0x00053cf8) vkb2_area_bottom_pane_g1

0xc1e0,	// (0x00053d1e) vkb2_area_bottom_pane_g2_ParamLimits

0xc1e0,	// (0x00053d1e) vkb2_area_bottom_pane_g2

0xc211,	// (0x00053d4f) vkb2_area_bottom_pane_g3_ParamLimits

0xc211,	// (0x00053d4f) vkb2_area_bottom_pane_g3

0x0002,

0xfd77,	// (0x000578b5) vkb2_area_bottom_pane_g_ParamLimits

0xfd77,	// (0x000578b5) vkb2_area_bottom_pane_g

0x1e3f,	// (0x0004997d) vkb2_top_cell_left_pane_ParamLimits

0x1e3f,	// (0x0004997d) vkb2_top_cell_left_pane

0xdd9d,	// (0x000558db) vkb2_top_entry_pane_g1_ParamLimits

0xdd9d,	// (0x000558db) vkb2_top_entry_pane_g1

0xddab,	// (0x000558e9) vkb2_top_entry_pane_t1_ParamLimits

0xddab,	// (0x000558e9) vkb2_top_entry_pane_t1

0x778c,	// (0x0004f2ca) vkb2_top_entry_pane_t2_ParamLimits

0x778c,	// (0x0004f2ca) vkb2_top_entry_pane_t2

0x77be,	// (0x0004f2fc) vkb2_top_entry_pane_t3_ParamLimits

0x77be,	// (0x0004f2fc) vkb2_top_entry_pane_t3

0x0002,

0xfd7e,	// (0x000578bc) vkb2_top_entry_pane_t_ParamLimits

0xfd7e,	// (0x000578bc) vkb2_top_entry_pane_t

0xc27b,	// (0x00053db9) vkb2_top_grid_right_pane_g1_ParamLimits

0xc27b,	// (0x00053db9) vkb2_top_grid_right_pane_g1

0x1ea2,	// (0x000499e0) vkb2_top_grid_right_pane_g2_ParamLimits

0x1ea2,	// (0x000499e0) vkb2_top_grid_right_pane_g2

0x1eba,	// (0x000499f8) vkb2_top_grid_right_pane_g3_ParamLimits

0x1eba,	// (0x000499f8) vkb2_top_grid_right_pane_g3

0xc291,	// (0x00053dcf) vkb2_top_grid_right_pane_g4_ParamLimits

0xc291,	// (0x00053dcf) vkb2_top_grid_right_pane_g4

0x0003,

0xfd85,	// (0x000578c3) vkb2_top_grid_right_pane_g_ParamLimits

0xfd85,	// (0x000578c3) vkb2_top_grid_right_pane_g

0x1ee8,	// (0x00049a26) vkb2_top_cell_left_pane_g1

0x1eff,	// (0x00049a3d) vkb2_cell_keypad_pane_g1_ParamLimits

0x1eff,	// (0x00049a3d) vkb2_cell_keypad_pane_g1

0x77e2,	// (0x0004f320) vkb2_cell_keypad_pane_t1_ParamLimits

0x77e2,	// (0x0004f320) vkb2_cell_keypad_pane_t1

0x1f0d,	// (0x00049a4b) vkb2_cell_bottom_grid_pane_ParamLimits

0x1f0d,	// (0x00049a4b) vkb2_cell_bottom_grid_pane

0x1f46,	// (0x00049a84) vkb2_cell_bottom_grid_pane_g1

0xda57,	// (0x00055595) aid_call2_pane_cp02

0xda5f,	// (0x0005559d) aid_call_pane_cp02

0xda67,	// (0x000555a5) clock_digital_number_pane_cp10

0xda6f,	// (0x000555ad) clock_digital_number_pane_cp11

0xda77,	// (0x000555b5) clock_digital_number_pane_cp12

0xda7f,	// (0x000555bd) clock_digital_number_pane_cp13

0xda87,	// (0x000555c5) clock_digital_separator_pane_cp10

0xe481,	// (0x00055fbf) popup_clock_digital_analogue_window_cp2_g1

0xe481,	// (0x00055fbf) popup_clock_digital_analogue_window_cp2_g2

0xda8f,	// (0x000555cd) popup_clock_digital_analogue_window_cp2_g3

0xe481,	// (0x00055fbf) popup_clock_digital_analogue_window_cp2_g4

0xda8f,	// (0x000555cd) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3a,	// (0x00057878) popup_clock_digital_analogue_window_cp2_g

0xda97,	// (0x000555d5) popup_clock_digital_analogue_window_cp2_t1

0xdaa5,	// (0x000555e3) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd45,	// (0x00057883) popup_clock_digital_analogue_window_cp2_t

0x585b,	// (0x0004d399) clock_digital_number_pane_cp10_g1

0x585b,	// (0x0004d399) clock_digital_number_pane_cp10_g2

0x0001,

0xfb2d,	// (0x0005766b) clock_digital_number_pane_cp10_g

0x585b,	// (0x0004d399) clock_digital_separator_pane_cp10_g1

0x585b,	// (0x0004d399) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb2d,	// (0x0005766b) clock_digital_separator_pane_cp10_g

0x720d,	// (0x0004ed4b) uniindi_top_pane_g3

0x721e,	// (0x0004ed5c) uniindi_top_pane_g4

0x1d20,	// (0x0004985e) vkb2_row_keypad_pane_ParamLimits

0x1d20,	// (0x0004985e) vkb2_row_keypad_pane

0x1f62,	// (0x00049aa0) vkb2_cell_t_keypad_pane_ParamLimits

0x1f62,	// (0x00049aa0) vkb2_cell_t_keypad_pane

0x1f72,	// (0x00049ab0) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1f72,	// (0x00049ab0) vkb2_cell_t_keypad_pane_cp08

0x1f87,	// (0x00049ac5) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1f87,	// (0x00049ac5) vkb2_cell_t_keypad_pane_cp09

0x1f9b,	// (0x00049ad9) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1f9b,	// (0x00049ad9) vkb2_cell_t_keypad_pane_cp01

0x1fac,	// (0x00049aea) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1fac,	// (0x00049aea) vkb2_cell_t_keypad_pane_cp02

0x1fbd,	// (0x00049afb) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1fbd,	// (0x00049afb) vkb2_cell_t_keypad_pane_cp03

0x1fce,	// (0x00049b0c) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1fce,	// (0x00049b0c) vkb2_cell_t_keypad_pane_cp04

0x1fdf,	// (0x00049b1d) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1fdf,	// (0x00049b1d) vkb2_cell_t_keypad_pane_cp05

0x1ff0,	// (0x00049b2e) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1ff0,	// (0x00049b2e) vkb2_cell_t_keypad_pane_cp06

0x2003,	// (0x00049b41) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2003,	// (0x00049b41) vkb2_cell_t_keypad_pane_cp07

0x2018,	// (0x00049b56) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2018,	// (0x00049b56) vkb2_cell_t_keypad_pane_cp10

0x5ad6,	// (0x0004d614) vkb2_cell_t_keypad_pane_g1

0x77f9,	// (0x0004f337) vkb2_cell_t_keypad_pane_t1

0x9fd7,	// (0x00051b15) popup_grid_graphic2_window

0xdde4,	// (0x00055922) aid_size_cell_graphic2_ParamLimits

0xdde4,	// (0x00055922) aid_size_cell_graphic2

0xde22,	// (0x00055960) bg_popup_window_pane_cp21_ParamLimits

0xde22,	// (0x00055960) bg_popup_window_pane_cp21

0xde30,	// (0x0005596e) graphic2_pages_pane_ParamLimits

0xde30,	// (0x0005596e) graphic2_pages_pane

0xde88,	// (0x000559c6) grid_graphic2_control_pane_ParamLimits

0xde88,	// (0x000559c6) grid_graphic2_control_pane

0xded0,	// (0x00055a0e) grid_graphic2_pane_ParamLimits

0xded0,	// (0x00055a0e) grid_graphic2_pane

0xdf5b,	// (0x00055a99) cell_graphic2_pane

0x9fd7,	// (0x00051b15) main_comp_mode_pane

0x6a7a,	// (0x0004e5b8) list_ai3_gene_pane_ParamLimits

0xd797,	// (0x000552d5) bg_popup_window_pane_cp19_ParamLimits

0x6e4c,	// (0x0004e98a) bg_touch_area_indi_pane_ParamLimits

0x6e4c,	// (0x0004e98a) bg_touch_area_indi_pane

0x6e62,	// (0x0004e9a0) bg_touch_area_indi_pane_cp01_ParamLimits

0x6e62,	// (0x0004e9a0) bg_touch_area_indi_pane_cp01

0x6e78,	// (0x0004e9b6) bg_touch_area_indi_pane_cp02_ParamLimits

0x6e78,	// (0x0004e9b6) bg_touch_area_indi_pane_cp02

0x6e92,	// (0x0004e9d0) bg_touch_area_indi_pane_cp03_ParamLimits

0x6e92,	// (0x0004e9d0) bg_touch_area_indi_pane_cp03

0x6eac,	// (0x0004e9ea) popup_slider_window_g1_ParamLimits

0x6ec8,	// (0x0004ea06) popup_slider_window_g2_ParamLimits

0x6ee4,	// (0x0004ea22) popup_slider_window_g3_ParamLimits

0xfccf,	// (0x0005780d) popup_slider_window_g_ParamLimits

0x6f4a,	// (0x0004ea88) popup_slider_window_t1_ParamLimits

0x6fbe,	// (0x0004eafc) small_volume_slider_vertical_pane_ParamLimits

0xdf5b,	// (0x00055a99) cell_graphic2_pane_ParamLimits

0xdfbd,	// (0x00055afb) bg_button_pane_cp10_ParamLimits

0xdfbd,	// (0x00055afb) bg_button_pane_cp10

0xdfd0,	// (0x00055b0e) bg_button_pane_cp11_ParamLimits

0xdfd0,	// (0x00055b0e) bg_button_pane_cp11

0xdfe3,	// (0x00055b21) graphic2_pages_pane_g1_ParamLimits

0xdfe3,	// (0x00055b21) graphic2_pages_pane_g1

0xdffe,	// (0x00055b3c) graphic2_pages_pane_g2_ParamLimits

0xdffe,	// (0x00055b3c) graphic2_pages_pane_g2

0x0001,

0xfd93,	// (0x000578d1) graphic2_pages_pane_g_ParamLimits

0xfd93,	// (0x000578d1) graphic2_pages_pane_g

0xe016,	// (0x00055b54) graphic2_pages_pane_t1_ParamLimits

0xe016,	// (0x00055b54) graphic2_pages_pane_t1

0xe02e,	// (0x00055b6c) cell_graphic2_control_pane_ParamLimits

0xe02e,	// (0x00055b6c) cell_graphic2_control_pane

0xe062,	// (0x00055ba0) cell_graphic2_pane_g1_ParamLimits

0xe062,	// (0x00055ba0) cell_graphic2_pane_g1

0xd133,	// (0x00054c71) cell_graphic2_pane_g2_ParamLimits

0xd133,	// (0x00054c71) cell_graphic2_pane_g2

0xe06f,	// (0x00055bad) cell_graphic2_pane_g3_ParamLimits

0xe06f,	// (0x00055bad) cell_graphic2_pane_g3

0xd140,	// (0x00054c7e) cell_graphic2_pane_g4_ParamLimits

0xd140,	// (0x00054c7e) cell_graphic2_pane_g4

0xe07c,	// (0x00055bba) cell_graphic2_pane_g5_ParamLimits

0xe07c,	// (0x00055bba) cell_graphic2_pane_g5

0x0004,

0xfd98,	// (0x000578d6) cell_graphic2_pane_g_ParamLimits

0xfd98,	// (0x000578d6) cell_graphic2_pane_g

0xe098,	// (0x00055bd6) cell_graphic2_pane_t1_ParamLimits

0xe098,	// (0x00055bd6) cell_graphic2_pane_t1

0x3f04,	// (0x0004ba42) grid_highlight_pane_cp11_ParamLimits

0x3f04,	// (0x0004ba42) grid_highlight_pane_cp11

0xa641,	// (0x0005217f) bg_button_pane_cp05

0xe0e1,	// (0x00055c1f) cell_graphic2_control_pane_g1

0x585b,	// (0x0004d399) bg_touch_area_indi_pane_g1

0x7adc,	// (0x0004f61a) aid_cmod_rocker_key_size

0x7ae6,	// (0x0004f624) aid_cmode_itu_key_size

0x7af0,	// (0x0004f62e) main_cmode_video_pane

0x7afa,	// (0x0004f638) main_comp_mode_itu_pane

0x7b06,	// (0x0004f644) main_comp_mode_rocker_pane

0x7b12,	// (0x0004f650) cell_cmode_rocker_pane_ParamLimits

0x7b12,	// (0x0004f650) cell_cmode_rocker_pane

0x7b26,	// (0x0004f664) cell_cmode_itu_pane_ParamLimits

0x7b26,	// (0x0004f664) cell_cmode_itu_pane

0xacae,	// (0x000527ec) bg_button_pane_cp06_ParamLimits

0xacae,	// (0x000527ec) bg_button_pane_cp06

0x5ad6,	// (0x0004d614) cell_cmode_rocker_pane_g1_ParamLimits

0x5ad6,	// (0x0004d614) cell_cmode_rocker_pane_g1

0x7065,	// (0x0004eba3) cell_cmode_rocker_pane_g2_ParamLimits

0x7065,	// (0x0004eba3) cell_cmode_rocker_pane_g2

0x0001,

0xfda8,	// (0x000578e6) cell_cmode_rocker_pane_g_ParamLimits

0xfda8,	// (0x000578e6) cell_cmode_rocker_pane_g

0x9fd7,	// (0x00051b15) bg_button_pane_cp07

0x7b3d,	// (0x0004f67b) cell_cmode_itu_pane_g1

0x7b46,	// (0x0004f684) cell_cmode_itu_pane_t1

0x7b54,	// (0x0004f692) cell_cmode_itu_pane_t2

0x0001,

0xfdad,	// (0x000578eb) cell_cmode_itu_pane_t

0x7292,	// (0x0004edd0) aid_touch_ctrl_left

0x729a,	// (0x0004edd8) aid_touch_ctrl_right

0x9fd7,	// (0x00051b15) compa_mode_pane

0xe109,	// (0x00055c47) aid_cmod_rocker_key_size_cp

0xe113,	// (0x00055c51) aid_cmode_itu_key_size_cp

0x7b76,	// (0x0004f6b4) compa_mode_pane_g1

0x7b7e,	// (0x0004f6bc) compa_mode_pane_g2

0x7b86,	// (0x0004f6c4) compa_mode_pane_g3

0x0002,

0xfdb2,	// (0x000578f0) compa_mode_pane_g

0xe11d,	// (0x00055c5b) main_comp_mode_itu_pane_cp

0xe125,	// (0x00055c63) main_comp_mode_rocker_pane_cp

0xe12d,	// (0x00055c6b) cell_cmode_itu_pane_cp_ParamLimits

0xe12d,	// (0x00055c6b) cell_cmode_itu_pane_cp

0xe142,	// (0x00055c80) cell_cmode_rocker_pane_cp_ParamLimits

0xe142,	// (0x00055c80) cell_cmode_rocker_pane_cp

0xacae,	// (0x000527ec) bg_button_pane_cp06_cp_ParamLimits

0xacae,	// (0x000527ec) bg_button_pane_cp06_cp

0x5ad6,	// (0x0004d614) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x5ad6,	// (0x0004d614) cell_cmode_rocker_pane_g1_cp

0x585b,	// (0x0004d399) cell_cmode_rocker_pane_g2_cp

0x9fd7,	// (0x00051b15) bg_button_pane_cp07_cp

0xe154,	// (0x00055c92) cell_cmode_itu_pane_g1_cp

0xe15d,	// (0x00055c9b) cell_cmode_itu_pane_t1_cp

0xe15d,	// (0x00055c9b) cell_cmode_itu_pane_t2_cp

0xcdb7,	// (0x000548f5) settings_code_pane_cp2

0xa35e,	// (0x00051e9c) bg_popup_window_pane_cp3_ParamLimits

0xa855,	// (0x00052393) heading_pane_cp3_ParamLimits

0xa864,	// (0x000523a2) listscroll_popup_graphic_pane_ParamLimits

0x150f,	// (0x0004904d) fep_hwr_aid_pane_ParamLimits

0x19f4,	// (0x00049532) aid_touch_sctrl_top_ParamLimits

0x1a01,	// (0x0004953f) sctrl_sk_top_pane_g1_ParamLimits

0x5ad6,	// (0x0004d614) sctrl_sk_top_pane_g2_ParamLimits

0xfce8,	// (0x00057826) sctrl_sk_top_pane_g_ParamLimits

0x1a0e,	// (0x0004954c) sctrl_sk_top_pane_t1_ParamLimits

0x19f4,	// (0x00049532) aid_touch_sctrl_bottom_ParamLimits

0x1a0e,	// (0x0004954c) sctrl_sk_bottom_pane_t1_ParamLimits

0x71d7,	// (0x0004ed15) aid_area_touch_clock

0xc0b9,	// (0x00053bf7) aid_vkb2_area_top_pane_cell_ParamLimits

0xc0b9,	// (0x00053bf7) aid_vkb2_area_top_pane_cell

0xc169,	// (0x00053ca7) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc169,	// (0x00053ca7) aid_vkb2_area_bottom_pane_cell

0x7744,	// (0x0004f282) popup_char_count_window

0x7bdc,	// (0x0004f71a) popup_char_count_window_g1

0x7be5,	// (0x0004f723) popup_char_count_window_g2

0x7bee,	// (0x0004f72c) popup_char_count_window_g3

0x0002,

0xfdb9,	// (0x000578f7) popup_char_count_window_g

0x7bf7,	// (0x0004f735) popup_char_count_window_t1

0x1aa9,	// (0x000495e7) popup_fep_char_preview_window_ParamLimits

0x1aa9,	// (0x000495e7) popup_fep_char_preview_window

0xc0d9,	// (0x00053c17) vkb2_top_candi_pane_ParamLimits

0xc0d9,	// (0x00053c17) vkb2_top_candi_pane

0xe16b,	// (0x00055ca9) cell_vkb2_top_candi_pane_ParamLimits

0xe16b,	// (0x00055ca9) cell_vkb2_top_candi_pane

0x388d,	// (0x0004b3cb) bg_popup_fep_char_preview_window_ParamLimits

0x388d,	// (0x0004b3cb) bg_popup_fep_char_preview_window

0x202d,	// (0x00049b6b) popup_fep_char_preview_window_t1_ParamLimits

0x202d,	// (0x00049b6b) popup_fep_char_preview_window_t1

0x7c53,	// (0x0004f791) bg_popup_fep_char_preview_window_g1

0x7c5b,	// (0x0004f799) bg_popup_fep_char_preview_window_g2

0x7c63,	// (0x0004f7a1) bg_popup_fep_char_preview_window_g3

0x7c6b,	// (0x0004f7a9) bg_popup_fep_char_preview_window_g4

0x7c73,	// (0x0004f7b1) bg_popup_fep_char_preview_window_g5

0x7c7b,	// (0x0004f7b9) bg_popup_fep_char_preview_window_g6

0x7c83,	// (0x0004f7c1) bg_popup_fep_char_preview_window_g7

0x7c8b,	// (0x0004f7c9) bg_popup_fep_char_preview_window_g8

0x7c93,	// (0x0004f7d1) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdc0,	// (0x000578fe) bg_popup_fep_char_preview_window_g

0x5ad6,	// (0x0004d614) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5ad6,	// (0x0004d614) cell_vkb2_top_candi_pane_g1

0x5e17,	// (0x0004d955) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5e17,	// (0x0004d955) cell_vkb2_top_candi_pane_g2

0x5e38,	// (0x0004d976) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5e38,	// (0x0004d976) cell_vkb2_top_candi_pane_g3

0x206f,	// (0x00049bad) cell_vkb2_top_candi_pane_g4_ParamLimits

0x206f,	// (0x00049bad) cell_vkb2_top_candi_pane_g4

0x7c9b,	// (0x0004f7d9) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7c9b,	// (0x0004f7d9) cell_vkb2_top_candi_pane_g5

0x7065,	// (0x0004eba3) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7065,	// (0x0004eba3) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd5,	// (0x00057913) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd5,	// (0x00057913) cell_vkb2_top_candi_pane_g

0x2090,	// (0x00049bce) cell_vkb2_top_candi_pane_t1

0x1282,	// (0x00048dc0) aid_size_touch_slider_mark_ParamLimits

0x1282,	// (0x00048dc0) aid_size_touch_slider_mark

0xde6c,	// (0x000559aa) grid_graphic2_catg_pane_ParamLimits

0xde6c,	// (0x000559aa) grid_graphic2_catg_pane

0xdf2a,	// (0x00055a68) popup_grid_graphic2_window_t1_ParamLimits

0xdf2a,	// (0x00055a68) popup_grid_graphic2_window_t1

0xdf40,	// (0x00055a7e) popup_grid_graphic2_window_t2_ParamLimits

0xdf40,	// (0x00055a7e) popup_grid_graphic2_window_t2

0x0001,

0xfd8e,	// (0x000578cc) popup_grid_graphic2_window_t_ParamLimits

0xfd8e,	// (0x000578cc) popup_grid_graphic2_window_t

0xa641,	// (0x0005217f) bg_button_pane_cp05_ParamLimits

0xe0e1,	// (0x00055c1f) cell_graphic2_control_pane_g1_ParamLimits

0xe1cf,	// (0x00055d0d) cell_graphic2_catg_pane_ParamLimits

0xe1cf,	// (0x00055d0d) cell_graphic2_catg_pane

0x9fd7,	// (0x00051b15) bg_button_pane_cp12

0xe1e1,	// (0x00055d1f) cell_graphic2_catg_pane_g1

0x71a3,	// (0x0004ece1) cell_tb_ext_pane_t1_ParamLimits

0x1e5f,	// (0x0004999d) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1e5f,	// (0x0004999d) vkb2_top_cell_right_narrow_pane

0x1e77,	// (0x000499b5) vkb2_top_cell_right_wide_pane_ParamLimits

0x1e77,	// (0x000499b5) vkb2_top_cell_right_wide_pane

0x1501,	// (0x0004903f) bg_vkb2_func_pane_ParamLimits

0x1501,	// (0x0004903f) bg_vkb2_func_pane

0x1ee8,	// (0x00049a26) vkb2_top_cell_left_pane_g1_ParamLimits

0x1501,	// (0x0004903f) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1501,	// (0x0004903f) bg_vkb2_fuc_pane_cp03

0x1f46,	// (0x00049a84) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x322f,	// (0x0004ad6d) bg_vkb2_func_pane_g1

0x3237,	// (0x0004ad75) bg_vkb2_func_pane_g2

0x3247,	// (0x0004ad85) bg_vkb2_func_pane_g3

0x323f,	// (0x0004ad7d) bg_vkb2_func_pane_g4

0x324f,	// (0x0004ad8d) bg_vkb2_func_pane_g5

0x3257,	// (0x0004ad95) bg_vkb2_func_pane_g6

0x325f,	// (0x0004ad9d) bg_vkb2_func_pane_g7

0x3267,	// (0x0004ada5) bg_vkb2_func_pane_g8

0x3227,	// (0x0004ad65) bg_vkb2_func_pane_g9

0x0008,

0xfde2,	// (0x00057920) bg_vkb2_func_pane_g

0x1501,	// (0x0004903f) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1501,	// (0x0004903f) bg_vkb2_fuc_pane_cp01

0x1ee8,	// (0x00049a26) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1ee8,	// (0x00049a26) vkb2_top_cell_right_wide_pane_g1

0x1501,	// (0x0004903f) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1501,	// (0x0004903f) bg_vkb2_fuc_pane_cp02

0x20ae,	// (0x00049bec) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x20ae,	// (0x00049bec) vkb2_top_cell_right_narrow_pane_g1

0xd6d9,	// (0x00055217) aid_touch_area_decrease_ParamLimits

0xd6d9,	// (0x00055217) aid_touch_area_decrease

0xd713,	// (0x00055251) aid_touch_area_increase_ParamLimits

0xd713,	// (0x00055251) aid_touch_area_increase

0xd73b,	// (0x00055279) aid_touch_area_mute_ParamLimits

0xd73b,	// (0x00055279) aid_touch_area_mute

0xd763,	// (0x000552a1) aid_touch_area_slider_ParamLimits

0xd763,	// (0x000552a1) aid_touch_area_slider

0xd7a3,	// (0x000552e1) popup_slider_window_g4_ParamLimits

0xd7a3,	// (0x000552e1) popup_slider_window_g4

0xd7cb,	// (0x00055309) popup_slider_window_g5_ParamLimits

0xd7cb,	// (0x00055309) popup_slider_window_g5

0xd7ff,	// (0x0005533d) popup_slider_window_g6_ParamLimits

0xd7ff,	// (0x0005533d) popup_slider_window_g6

0x6f78,	// (0x0004eab6) popup_slider_window_t2_ParamLimits

0x6f78,	// (0x0004eab6) popup_slider_window_t2

0x0001,

0xfcdc,	// (0x0005781a) popup_slider_window_t_ParamLimits

0xfcdc,	// (0x0005781a) popup_slider_window_t

0xd81b,	// (0x00055359) slider_pane_ParamLimits

0xd81b,	// (0x00055359) slider_pane

0x7cd7,	// (0x0004f815) slider_pane_g1_ParamLimits

0x7cd7,	// (0x0004f815) slider_pane_g1

0x7ceb,	// (0x0004f829) slider_pane_g2_ParamLimits

0x7ceb,	// (0x0004f829) slider_pane_g2

0x7d01,	// (0x0004f83f) slider_pane_g3_ParamLimits

0x7d01,	// (0x0004f83f) slider_pane_g3

0x0003,

0xfdf5,	// (0x00057933) slider_pane_g_ParamLimits

0xfdf5,	// (0x00057933) slider_pane_g

0xbad5,	// (0x00053613) popup_tb_float_extension_window_ParamLimits

0xbad5,	// (0x00053613) popup_tb_float_extension_window

0x7d2d,	// (0x0004f86b) aid_size_cell_tb_float_ext

0x9fd7,	// (0x00051b15) bg_popup_sub_window_cp28

0x7d39,	// (0x0004f877) grid_tb_float_ext_pane

0x7d45,	// (0x0004f883) cell_tb_float_ext_pane_ParamLimits

0x7d45,	// (0x0004f883) cell_tb_float_ext_pane

0x7d61,	// (0x0004f89f) cell_tb_float_ext_pane_g1

0x7d6a,	// (0x0004f8a8) grid_highlight_pane_cp12

0xbdc1,	// (0x000538ff) cell_last_hwr_side_pane_ParamLimits

0xbdc1,	// (0x000538ff) cell_last_hwr_side_pane

0x585b,	// (0x0004d399) cell_last_hwr_side_pane_g1

0x7d73,	// (0x0004f8b1) cell_last_hwr_side_pane_g2

0x0001,

0xfdfe,	// (0x0005793c) cell_last_hwr_side_pane_g

0xc246,	// (0x00053d84) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc246,	// (0x00053d84) vkb2_area_bottom_space_btn_pane

0x5ad6,	// (0x0004d614) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x77f9,	// (0x0004f337) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2090,	// (0x00049bce) cell_vkb2_top_candi_pane_t1_ParamLimits

0x20ca,	// (0x00049c08) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x20ca,	// (0x00049c08) vkb2_area_bottom_space_btn_pane_g1

0x2104,	// (0x00049c42) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2104,	// (0x00049c42) vkb2_area_bottom_space_btn_pane_g2

0x213a,	// (0x00049c78) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x213a,	// (0x00049c78) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe03,	// (0x00057941) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe03,	// (0x00057941) vkb2_area_bottom_space_btn_pane_g

0x15b8,	// (0x000490f6) cel_fep_hwr_func_pane_ParamLimits

0x15b8,	// (0x000490f6) cel_fep_hwr_func_pane

0xbd96,	// (0x000538d4) cell_hwr_side_button_pane_ParamLimits

0xbd96,	// (0x000538d4) cell_hwr_side_button_pane

0x71d7,	// (0x0004ed15) aid_area_touch_clock_ParamLimits

0xa641,	// (0x0005217f) bg_uniindi_top_pane_ParamLimits

0x71eb,	// (0x0004ed29) uniindi_top_pane_g1_ParamLimits

0x7201,	// (0x0004ed3f) uniindi_top_pane_g2_ParamLimits

0x720d,	// (0x0004ed4b) uniindi_top_pane_g3_ParamLimits

0x721e,	// (0x0004ed5c) uniindi_top_pane_g4_ParamLimits

0xfd14,	// (0x00057852) uniindi_top_pane_g_ParamLimits

0x722b,	// (0x0004ed69) uniindi_top_pane_t1_ParamLimits

0xa641,	// (0x0005217f) bg_vkb2_func_pane_cp01_ParamLimits

0xa641,	// (0x0005217f) bg_vkb2_func_pane_cp01

0x7d7c,	// (0x0004f8ba) cel_fep_hwr_func_pane_g1_ParamLimits

0x7d7c,	// (0x0004f8ba) cel_fep_hwr_func_pane_g1

0xa641,	// (0x0005217f) bg_vkb2_func_pane_cp02_ParamLimits

0xa641,	// (0x0005217f) bg_vkb2_func_pane_cp02

0x7d7c,	// (0x0004f8ba) cell_hwr_side_button_pane_g1_ParamLimits

0x7d7c,	// (0x0004f8ba) cell_hwr_side_button_pane_g1

0x30aa,	// (0x0004abe8) status_pane_g4_ParamLimits

0x30aa,	// (0x0004abe8) status_pane_g4

0x30c4,	// (0x0004ac02) status_pane_t1

0x560e,	// (0x0004d14c) form2_midp_gauge_slider_cont_pane

0x5616,	// (0x0004d154) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd07d,	// (0x00054bbb) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd08f,	// (0x00054bcd) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae0,	// (0x0005761e) form2_midp_gauge_slider_pane_t_ParamLimits

0x564c,	// (0x0004d18a) form2_midp_slider_pane_ParamLimits

0x1a71,	// (0x000495af) aid_size_cell_func_vkb2_ParamLimits

0x1a71,	// (0x000495af) aid_size_cell_func_vkb2

0x7d19,	// (0x0004f857) slider_pane_g4_ParamLimits

0x7d19,	// (0x0004f857) slider_pane_g4

0xc2af,	// (0x00053ded) form2_midp_gauge_slider_pane_t2_cp01

0xc2bd,	// (0x00053dfb) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc2bd,	// (0x00053dfb) form2_midp_gauge_slider_pane_t3_cp01

0x21af,	// (0x00049ced) form2_midp_slider_pane_cp01

0x9fd7,	// (0x00051b15) navi_smil_pane

0x7db5,	// (0x0004f8f3) navi_smil_pane_g1

0x7dbd,	// (0x0004f8fb) navi_smil_pane_t1

0x7d8a,	// (0x0004f8c8) form2_midp_slider_pane_g1

0x7d93,	// (0x0004f8d1) form2_midp_slider_pane_g2

0x7d9b,	// (0x0004f8d9) form2_midp_slider_pane_g3

0x7d8a,	// (0x0004f8c8) form2_midp_slider_pane_g4

0xe1ea,	// (0x00055d28) form2_midp_slider_pane_g5

0x0004,

0xfe0c,	// (0x0005794a) form2_midp_slider_pane_g

0x2174,	// (0x00049cb2) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2174,	// (0x00049cb2) vkb2_area_bottom_space_btn_pane_g4

0xc6df,	// (0x0005421d) lc0_navi_pane_ParamLimits

0xc6df,	// (0x0005421d) lc0_navi_pane

0xc74f,	// (0x0005428d) lc0_stat_indi_pane_ParamLimits

0xc74f,	// (0x0005428d) lc0_stat_indi_pane

0xc764,	// (0x000542a2) ls0_title_pane_ParamLimits

0xc764,	// (0x000542a2) ls0_title_pane

0xacae,	// (0x000527ec) bg_popup_sub_pane_cp14_ParamLimits

0x71be,	// (0x0004ecfc) list_uniindi_pane_ParamLimits

0x71ca,	// (0x0004ed08) uniindi_top_pane_ParamLimits

0x726a,	// (0x0004eda8) list_single_uniindi_pane_g1_ParamLimits

0x727d,	// (0x0004edbb) list_single_uniindi_pane_t1_ParamLimits

0xc2da,	// (0x00053e18) lc0_stat_clock_pane_ParamLimits

0xc2da,	// (0x00053e18) lc0_stat_clock_pane

0xe1f3,	// (0x00055d31) lc0_stat_indi_pane_g1_ParamLimits

0xe1f3,	// (0x00055d31) lc0_stat_indi_pane_g1

0xe200,	// (0x00055d3e) lc0_stat_indi_pane_g2_ParamLimits

0xe200,	// (0x00055d3e) lc0_stat_indi_pane_g2

0x0001,

0xfe17,	// (0x00057955) lc0_stat_indi_pane_g_ParamLimits

0xfe17,	// (0x00057955) lc0_stat_indi_pane_g

0xc2e7,	// (0x00053e25) lc0_uni_indicator_pane_ParamLimits

0xc2e7,	// (0x00053e25) lc0_uni_indicator_pane

0xe20d,	// (0x00055d4b) ls0_title_pane_g1_ParamLimits

0xe20d,	// (0x00055d4b) ls0_title_pane_g1

0xe221,	// (0x00055d5f) ls0_title_pane_t1_ParamLimits

0xe221,	// (0x00055d5f) ls0_title_pane_t1

0xc2f4,	// (0x00053e32) lc0_uni_indicator_pane_g1_ParamLimits

0xc2f4,	// (0x00053e32) lc0_uni_indicator_pane_g1

0x7e2f,	// (0x0004f96d) lc0_stat_clock_pane_t1

0x9fd7,	// (0x00051b15) main_ai5_pane

0x7e3d,	// (0x0004f97b) ai5_sk_pane_ParamLimits

0x7e3d,	// (0x0004f97b) ai5_sk_pane

0xe24f,	// (0x00055d8d) cell_ai5_widget_pane_ParamLimits

0xe24f,	// (0x00055d8d) cell_ai5_widget_pane

0xe658,	// (0x00056196) aid_size_cell_widget_grid

0x7ef7,	// (0x0004fa35) bg_ai5_widget_pane_ParamLimits

0x7ef7,	// (0x0004fa35) bg_ai5_widget_pane

0xe68c,	// (0x000561ca) cell_ai5_widget_pane_g2

0xe6a0,	// (0x000561de) cell_ai5_widget_pane_g3

0xe6ba,	// (0x000561f8) cell_ai5_widget_pane_g4

0xe6ca,	// (0x00056208) cell_ai5_widget_pane_g5

0xe6da,	// (0x00056218) cell_ai5_widget_pane_g6

0xe6e6,	// (0x00056224) cell_ai5_widget_pane_g7

0xe752,	// (0x00056290) cell_ai5_widget_pane_t1_ParamLimits

0xe752,	// (0x00056290) cell_ai5_widget_pane_t1

0xe76f,	// (0x000562ad) cell_ai5_widget_pane_t2_ParamLimits

0xe76f,	// (0x000562ad) cell_ai5_widget_pane_t2

0xe787,	// (0x000562c5) cell_ai5_widget_pane_t3_ParamLimits

0xe787,	// (0x000562c5) cell_ai5_widget_pane_t3

0xe79f,	// (0x000562dd) cell_ai5_widget_pane_t4_ParamLimits

0xe79f,	// (0x000562dd) cell_ai5_widget_pane_t4

0xe7c5,	// (0x00056303) cell_ai5_widget_pane_t5_ParamLimits

0xe7c5,	// (0x00056303) cell_ai5_widget_pane_t5

0x80cc,	// (0x0004fc0a) cell_ai5_widget_pane_t6_ParamLimits

0x80cc,	// (0x0004fc0a) cell_ai5_widget_pane_t6

0x80de,	// (0x0004fc1c) cell_ai5_widget_pane_t7_ParamLimits

0x80de,	// (0x0004fc1c) cell_ai5_widget_pane_t7

0xe7e5,	// (0x00056323) cell_ai5_widget_pane_t8_ParamLimits

0xe7e5,	// (0x00056323) cell_ai5_widget_pane_t8

0x000b,

0xfe37,	// (0x00057975) cell_ai5_widget_pane_t_ParamLimits

0xfe37,	// (0x00057975) cell_ai5_widget_pane_t

0xe869,	// (0x000563a7) grid_ai5_widget_pane

0xacae,	// (0x000527ec) highlight_cell_ai5_widget_pane_ParamLimits

0xacae,	// (0x000527ec) highlight_cell_ai5_widget_pane

0xe877,	// (0x000563b5) ai5_sk_left_pane

0xe881,	// (0x000563bf) ai5_sk_middle_pane

0xe88b,	// (0x000563c9) ai5_sk_right_pane

0x81ad,	// (0x0004fceb) bg_ai5_widget_pane_g1_ParamLimits

0x81ad,	// (0x0004fceb) bg_ai5_widget_pane_g1

0x81b9,	// (0x0004fcf7) bg_ai5_widget_pane_g2_ParamLimits

0x81b9,	// (0x0004fcf7) bg_ai5_widget_pane_g2

0x81c5,	// (0x0004fd03) bg_ai5_widget_pane_g3_ParamLimits

0x81c5,	// (0x0004fd03) bg_ai5_widget_pane_g3

0x81d1,	// (0x0004fd0f) bg_ai5_widget_pane_g4_ParamLimits

0x81d1,	// (0x0004fd0f) bg_ai5_widget_pane_g4

0x81dd,	// (0x0004fd1b) bg_ai5_widget_pane_g5_ParamLimits

0x81dd,	// (0x0004fd1b) bg_ai5_widget_pane_g5

0x81e9,	// (0x0004fd27) bg_ai5_widget_pane_g6_ParamLimits

0x81e9,	// (0x0004fd27) bg_ai5_widget_pane_g6

0x81f5,	// (0x0004fd33) bg_ai5_widget_pane_g7_ParamLimits

0x81f5,	// (0x0004fd33) bg_ai5_widget_pane_g7

0x8201,	// (0x0004fd3f) bg_ai5_widget_pane_g8_ParamLimits

0x8201,	// (0x0004fd3f) bg_ai5_widget_pane_g8

0x820d,	// (0x0004fd4b) bg_ai5_widget_pane_g9_ParamLimits

0x820d,	// (0x0004fd4b) bg_ai5_widget_pane_g9

0x0008,

0xfe50,	// (0x0005798e) bg_ai5_widget_pane_g_ParamLimits

0xfe50,	// (0x0005798e) bg_ai5_widget_pane_g

0xe8bf,	// (0x000563fd) cell_shortcut_ai5_widget_pane_ParamLimits

0xe8bf,	// (0x000563fd) cell_shortcut_ai5_widget_pane

0x29c8,	// (0x0004a506) bg_cell_shortcut_ai5_widget_pane

0x8258,	// (0x0004fd96) cell_grid_ai5_widget_pane_g1

0x29c8,	// (0x0004a506) highlight_cell_shortcut_ai5_widget_pane

0x3237,	// (0x0004ad75) ai5_sk_left_pane_g1

0x8261,	// (0x0004fd9f) ai5_sk_left_pane_g2

0x8269,	// (0x0004fda7) ai5_sk_left_pane_g3

0x8271,	// (0x0004fdaf) ai5_sk_left_pane_g4

0x0003,

0xfe63,	// (0x000579a1) ai5_sk_left_pane_g

0x8279,	// (0x0004fdb7) ai5_sk_left_pane_t1

0x322f,	// (0x0004ad6d) ai5_sk_right_pane_g1

0x8287,	// (0x0004fdc5) ai5_sk_right_pane_g2

0x828f,	// (0x0004fdcd) ai5_sk_right_pane_g3

0x8297,	// (0x0004fdd5) ai5_sk_right_pane_g4

0x0003,

0xfe6c,	// (0x000579aa) ai5_sk_right_pane_g

0x829f,	// (0x0004fddd) ai5_sk_right_pane_t1

0x322f,	// (0x0004ad6d) ai5_sk_middle_pane_g1

0x3237,	// (0x0004ad75) ai5_sk_middle_pane_g2

0x324f,	// (0x0004ad8d) ai5_sk_middle_pane_g3

0x828f,	// (0x0004fdcd) ai5_sk_middle_pane_g4

0x8269,	// (0x0004fda7) ai5_sk_middle_pane_g5

0x82ad,	// (0x0004fdeb) ai5_sk_middle_pane_g6

0xe8d2,	// (0x00056410) ai5_sk_middle_pane_g7

0x0006,

0xfe75,	// (0x000579b3) ai5_sk_middle_pane_g

0xc5c9,	// (0x00054107) aid_touch_area_size_lc0_ParamLimits

0xc5c9,	// (0x00054107) aid_touch_area_size_lc0

0x1757,	// (0x00049295) cell_hwr_candidate_pane_t1_ParamLimits

0x2d6d,	// (0x0004a8ab) aid_touch_navi_pane

0xc86f,	// (0x000543ad) status_dt_navi_pane_ParamLimits

0xc86f,	// (0x000543ad) status_dt_navi_pane

0xc887,	// (0x000543c5) status_dt_sta_pane_ParamLimits

0xc887,	// (0x000543c5) status_dt_sta_pane

0xe8da,	// (0x00056418) dt_sta_controll_pane

0xe8e7,	// (0x00056425) dt_sta_indi_pane

0xe8f4,	// (0x00056432) dt_sta_title_pane

0xa641,	// (0x0005217f) bg_dt_sta_indi_pane_ParamLimits

0xa641,	// (0x0005217f) bg_dt_sta_indi_pane

0xe906,	// (0x00056444) dt_sta_battery_pane

0xe90e,	// (0x0005644c) dt_sta_indi_pane_g1

0xe917,	// (0x00056455) dt_sta_indi_pane_g2

0xe920,	// (0x0005645e) dt_sta_indi_pane_g3

0x0002,

0xfe84,	// (0x000579c2) dt_sta_indi_pane_g

0xe929,	// (0x00056467) dt_sta_signal_pane

0xacae,	// (0x000527ec) bg_dt_sta_title_pane_ParamLimits

0xacae,	// (0x000527ec) bg_dt_sta_title_pane

0xe932,	// (0x00056470) dt_sta_title_pane_g1

0xe93a,	// (0x00056478) dt_sta_title_pane_t1_ParamLimits

0xe93a,	// (0x00056478) dt_sta_title_pane_t1

0x9fd7,	// (0x00051b15) bg_dt_sta_control_pane

0xe94f,	// (0x0005648d) dt_sta_controll_pane_g1

0xe958,	// (0x00056496) bg_dt_sta_title_pane_g1

0xe961,	// (0x0005649f) bg_dt_sta_title_pane_g2

0xe96a,	// (0x000564a8) bg_dt_sta_title_pane_g3

0x0002,

0xfe8b,	// (0x000579c9) bg_dt_sta_title_pane_g

0x585b,	// (0x0004d399) bg_dt_sta_indi_pane_g1

0x835b,	// (0x0004fe99) dt_sta_signal_pane_g1

0x8363,	// (0x0004fea1) dt_sta_signal_pane_g2

0x0001,

0xfe92,	// (0x000579d0) dt_sta_signal_pane_g

0x836b,	// (0x0004fea9) dt_sta_battery_pane_g1

0x8374,	// (0x0004feb2) dt_sta_battery_pane_t1

0x585b,	// (0x0004d399) bg_dt_sta_control_pane_g1

0xe503,	// (0x00056041) fep_china_uni_eep_pane

0xe50b,	// (0x00056049) fep_china_uni_entry_pane_ParamLimits

0xe51b,	// (0x00056059) popup_fep_china_uni_window_g1_ParamLimits

0xe52b,	// (0x00056069) popup_fep_china_uni_window_g2_ParamLimits

0xe52b,	// (0x00056069) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x0005723b) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x0005723b) popup_fep_china_uni_window_g

0x8383,	// (0x0004fec1) fep_china_uni_eep_pane_g1

0x838b,	// (0x0004fec9) fep_china_uni_eep_pane_t1

0x7dac,	// (0x0004f8ea) aid_touch_area_size_smil_player

0x2ec1,	// (0x0004a9ff) lc0_clock_pane

0x30b8,	// (0x0004abf6) status_pane_g5_ParamLimits

0x30b8,	// (0x0004abf6) status_pane_g5

0xb5fb,	// (0x00053139) popup_keymap_window

0x307e,	// (0x0004abbc) status_icon_pane

0xe6a0,	// (0x000561de) cell_ai5_widget_pane_g3_ParamLimits

0xe6ba,	// (0x000561f8) cell_ai5_widget_pane_g4_ParamLimits

0xe6ca,	// (0x00056208) cell_ai5_widget_pane_g5_ParamLimits

0xe6f2,	// (0x00056230) cell_ai5_widget_pane_g8_ParamLimits

0xe6f2,	// (0x00056230) cell_ai5_widget_pane_g8

0xe706,	// (0x00056244) cell_ai5_widget_pane_g9_ParamLimits

0xe706,	// (0x00056244) cell_ai5_widget_pane_g9

0xe71a,	// (0x00056258) cell_ai5_widget_pane_g10_ParamLimits

0xe71a,	// (0x00056258) cell_ai5_widget_pane_g10

0x839a,	// (0x0004fed8) status_icon_pane_g1

0x9fd7,	// (0x00051b15) bg_popup_sub_pane_cp13

0x83a2,	// (0x0004fee0) popup_keymap_window_t1

0x2ca0,	// (0x0004a7de) control_pane_g6_ParamLimits

0x2ca0,	// (0x0004a7de) control_pane_g6

0x2cad,	// (0x0004a7eb) control_pane_g7_ParamLimits

0x2cad,	// (0x0004a7eb) control_pane_g7

0x2cba,	// (0x0004a7f8) control_pane_g8_ParamLimits

0x2cba,	// (0x0004a7f8) control_pane_g8

0xe8da,	// (0x00056418) dt_sta_controll_pane_ParamLimits

0xe8e7,	// (0x00056425) dt_sta_indi_pane_ParamLimits

0xe8f4,	// (0x00056432) dt_sta_title_pane_ParamLimits

0xab97,	// (0x000526d5) aid_size_touch_scroll_bar_cale

0xf435,	// (0x00056f73) popup_discreet_window_ParamLimits

0xf435,	// (0x00056f73) popup_discreet_window

0xa125,	// (0x00051c63) popup_sk_window

0x388d,	// (0x0004b3cb) bg_popup_sub_pane_cp28_ParamLimits

0x388d,	// (0x0004b3cb) bg_popup_sub_pane_cp28

0x83b0,	// (0x0004feee) popup_discreet_window_g1_ParamLimits

0x83b0,	// (0x0004feee) popup_discreet_window_g1

0x83d0,	// (0x0004ff0e) popup_discreet_window_t1_ParamLimits

0x83d0,	// (0x0004ff0e) popup_discreet_window_t1

0x83ee,	// (0x0004ff2c) popup_discreet_window_t2_ParamLimits

0x83ee,	// (0x0004ff2c) popup_discreet_window_t2

0x0002,

0xfe97,	// (0x000579d5) popup_discreet_window_t_ParamLimits

0xfe97,	// (0x000579d5) popup_discreet_window_t

0x21e5,	// (0x00049d23) popup_sk_window_g1

0x21ef,	// (0x00049d2d) popup_sk_window_g2

0x0001,

0xfe9e,	// (0x000579dc) popup_sk_window_g

0x21f7,	// (0x00049d35) popup_sk_window_t1

0x2205,	// (0x00049d43) popup_sk_window_t1_copy1

0xe68c,	// (0x000561ca) cell_ai5_widget_pane_g2_ParamLimits

0xe7f7,	// (0x00056335) cell_ai5_widget_pane_t9_ParamLimits

0xe7f7,	// (0x00056335) cell_ai5_widget_pane_t9

0x9fd7,	// (0x00051b15) main_fep_fshwr2_pane

0xc313,	// (0x00053e51) aid_fshwr2_btn_pane

0xc327,	// (0x00053e65) aid_fshwr2_syb_pane

0xc33b,	// (0x00053e79) aid_fshwr2_txt_pane

0xc34b,	// (0x00053e89) fshwr2_func_candi_pane

0xc36d,	// (0x00053eab) fshwr2_hwr_syb_pane

0xc391,	// (0x00053ecf) fshwr2_icf_pane

0x9fd7,	// (0x00051b15) fshwr2_icf_bg_pane

0x22b1,	// (0x00049def) fshwr2_icf_pane_t1_ParamLimits

0x22b1,	// (0x00049def) fshwr2_icf_pane_t1

0xe481,	// (0x00055fbf) fshwr2_func_candi_pane_g1

0xe973,	// (0x000564b1) fshwr2_func_candi_row_pane_ParamLimits

0xe973,	// (0x000564b1) fshwr2_func_candi_row_pane

0xc3c1,	// (0x00053eff) cell_fshwr2_syb_pane_ParamLimits

0xc3c1,	// (0x00053eff) cell_fshwr2_syb_pane

0x7d7c,	// (0x0004f8ba) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7d7c,	// (0x0004f8ba) fshwr2_hwr_syb_pane_g1

0x9fd7,	// (0x00051b15) bg_popup_call_pane_cp01

0xc3e9,	// (0x00053f27) fshwr2_func_candi_cell_pane_ParamLimits

0xc3e9,	// (0x00053f27) fshwr2_func_candi_cell_pane

0x366d,	// (0x0004b1ab) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x366d,	// (0x0004b1ab) fshwr2_func_candi_cell_bg_pane

0xc434,	// (0x00053f72) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc434,	// (0x00053f72) fshwr2_func_candi_cell_pane_g1

0xc46b,	// (0x00053fa9) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc46b,	// (0x00053fa9) fshwr2_func_candi_cell_pane_t1

0x9fd7,	// (0x00051b15) bg_button_pane_cp08

0x2cef,	// (0x0004a82d) cell_fshwr2_syb_bg_pane

0xc486,	// (0x00053fc4) cell_fshwr2_syb_bg_pane_g1

0xc49a,	// (0x00053fd8) cell_fshwr2_syb_bg_pane_t1

0xacae,	// (0x000527ec) main_tmo_pane

0xcbbc,	// (0x000546fa) uni_indicator_pane_g1_ParamLimits

0xcbd2,	// (0x00054710) uni_indicator_pane_g2_ParamLimits

0xcbe8,	// (0x00054726) uni_indicator_pane_g3_ParamLimits

0xcbfb,	// (0x00054739) uni_indicator_pane_g4_ParamLimits

0xcbfb,	// (0x00054739) uni_indicator_pane_g4

0x4404,	// (0x0004bf42) uni_indicator_pane_g5_ParamLimits

0x4404,	// (0x0004bf42) uni_indicator_pane_g5

0x4404,	// (0x0004bf42) uni_indicator_pane_g6_ParamLimits

0x4404,	// (0x0004bf42) uni_indicator_pane_g6

0xf8fc,	// (0x0005743a) uni_indicator_pane_g_ParamLimits

0xd6a9,	// (0x000551e7) popup_tmo_note_window_ParamLimits

0xd6a9,	// (0x000551e7) popup_tmo_note_window

0xacae,	// (0x000527ec) fshwr2_bg_pane

0xc45c,	// (0x00053f9a) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc45c,	// (0x00053f9a) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea3,	// (0x000579e1) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea3,	// (0x000579e1) fshwr2_func_candi_cell_pane_g

0x585b,	// (0x0004d399) bg_popup_window_pane_cp01

0x23a3,	// (0x00049ee1) bg_popup_window_pane_g1_cp01

0x8463,	// (0x0004ffa1) bg_popup_window_pane_cp22_ParamLimits

0x8463,	// (0x0004ffa1) bg_popup_window_pane_cp22

0x8471,	// (0x0004ffaf) listscroll_tmo_link_pane_ParamLimits

0x8471,	// (0x0004ffaf) listscroll_tmo_link_pane

0x84b1,	// (0x0004ffef) popup_tmo_note_window_g1_ParamLimits

0x84b1,	// (0x0004ffef) popup_tmo_note_window_g1

0x84be,	// (0x0004fffc) tmo_note_info_pane_ParamLimits

0x84be,	// (0x0004fffc) tmo_note_info_pane

0xe99a,	// (0x000564d8) list_tmo_note_info_pane_g1_ParamLimits

0xe99a,	// (0x000564d8) list_tmo_note_info_pane_g1

0x84ef,	// (0x0005002d) list_tmo_note_info_pane_g2_ParamLimits

0x84ef,	// (0x0005002d) list_tmo_note_info_pane_g2

0x0001,

0xfea8,	// (0x000579e6) list_tmo_note_info_pane_g_ParamLimits

0xfea8,	// (0x000579e6) list_tmo_note_info_pane_g

0x850b,	// (0x00050049) list_tmo_note_info_text_pane_ParamLimits

0x850b,	// (0x00050049) list_tmo_note_info_text_pane

0x8590,	// (0x000500ce) list_tmo_link_pane

0x859d,	// (0x000500db) scroll_pane_cp20

0x85aa,	// (0x000500e8) list_single_tmo_link_pane_ParamLimits

0x85aa,	// (0x000500e8) list_single_tmo_link_pane

0x85ba,	// (0x000500f8) list_single_tmo_link_pane_t1

0x85c8,	// (0x00050106) list_tmo_note_info_text_pane_t1_ParamLimits

0x85c8,	// (0x00050106) list_tmo_note_info_text_pane_t1

0xad6a,	// (0x000528a8) aid_size_touch_scroll_bar_cp01_ParamLimits

0xad6a,	// (0x000528a8) aid_size_touch_scroll_bar_cp01

0x9c9a,	// (0x000517d8) aid_size_touch_slider_marker

0xa115,	// (0x00051c53) popup_settings_window_ParamLimits

0xa115,	// (0x00051c53) popup_settings_window

0xed9d,	// (0x000568db) popup_candi_list_indi_window

0x2d6d,	// (0x0004a8ab) aid_touch_navi_pane_ParamLimits

0x19c8,	// (0x00049506) rs_clock_indi_pane

0x19d1,	// (0x0004950f) sctrl_sk_bottom_pane_ParamLimits

0x19e2,	// (0x00049520) sctrl_sk_top_pane_ParamLimits

0x1ac3,	// (0x00049601) popup_fep_tooltip_window

0xe658,	// (0x00056196) aid_size_cell_widget_grid_ParamLimits

0xe677,	// (0x000561b5) cell_ai5_widget_pane_g1_ParamLimits

0xe677,	// (0x000561b5) cell_ai5_widget_pane_g1

0xe6da,	// (0x00056218) cell_ai5_widget_pane_g6_ParamLimits

0xe6e6,	// (0x00056224) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe1c,	// (0x0005795a) cell_ai5_widget_pane_g_ParamLimits

0xfe1c,	// (0x0005795a) cell_ai5_widget_pane_g

0xe826,	// (0x00056364) cell_ai5_widget_pane_t10_ParamLimits

0xe826,	// (0x00056364) cell_ai5_widget_pane_t10

0xe869,	// (0x000563a7) grid_ai5_widget_pane_ParamLimits

0xe895,	// (0x000563d3) cell_contacts_ai5_widget_pane_ParamLimits

0xe895,	// (0x000563d3) cell_contacts_ai5_widget_pane

0x8403,	// (0x0004ff41) popup_discreet_window_t3_ParamLimits

0x8403,	// (0x0004ff41) popup_discreet_window_t3

0xc3ad,	// (0x00053eeb) popup_fshwr2_char_preview_window_ParamLimits

0xc3ad,	// (0x00053eeb) popup_fshwr2_char_preview_window

0xe9b1,	// (0x000564ef) tmo_note_info_pane_t1

0xe9c6,	// (0x00056504) tmo_note_info_pane_t2

0xe9df,	// (0x0005651d) tmo_note_info_pane_t3

0x856c,	// (0x000500aa) tmo_note_info_pane_t4

0x857e,	// (0x000500bc) tmo_note_info_pane_t5

0x0004,

0xfead,	// (0x000579eb) tmo_note_info_pane_t

0x8590,	// (0x000500ce) list_tmo_link_pane_ParamLimits

0x859d,	// (0x000500db) scroll_pane_cp20_ParamLimits

0x9fd7,	// (0x00051b15) bg_popup_fep_char_preview_window_cp01

0x85e1,	// (0x0005011f) popup_fshwr2_char_preview_window_t1

0x85ef,	// (0x0005012d) popup_candi_list_indi_window_g1

0x85f8,	// (0x00050136) bg_cell_contacts_ai5_widget_pane

0xe9f4,	// (0x00056532) cell_contacts_ai5_widget_pane_g1

0x8619,	// (0x00050157) cell_contacts_ai5_widget_pane_g2

0x8625,	// (0x00050163) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb8,	// (0x000579f6) cell_contacts_ai5_widget_pane_g

0x8631,	// (0x0005016f) cell_contacts_ai5_widget_pane_t1

0xacae,	// (0x000527ec) highlight_cell_shortcut_ai5_widget_pane_cp01

0x86a8,	// (0x000501e6) settings_container_pane

0x29c8,	// (0x0004a506) listscroll_set_pane_copy1

0x4f8c,	// (0x0004caca) scroll_pane_cp121_copy1

0x86b4,	// (0x000501f2) set_content_pane_copy1

0x86bc,	// (0x000501fa) aid_height_set_list_copy1_ParamLimits

0x86bc,	// (0x000501fa) aid_height_set_list_copy1

0x4604,	// (0x0004c142) aid_size_parent_copy1_ParamLimits

0x4604,	// (0x0004c142) aid_size_parent_copy1

0x86c8,	// (0x00050206) button_value_adjust_pane_cp6_copy1_ParamLimits

0x86c8,	// (0x00050206) button_value_adjust_pane_cp6_copy1

0x2cef,	// (0x0004a82d) list_highlight_pane_cp2_copy1_ParamLimits

0x2cef,	// (0x0004a82d) list_highlight_pane_cp2_copy1

0x86dc,	// (0x0005021a) list_set_pane_copy1_ParamLimits

0x86dc,	// (0x0005021a) list_set_pane_copy1

0x8643,	// (0x00050181) main_pane_set_t1_copy1_ParamLimits

0x8643,	// (0x00050181) main_pane_set_t1_copy1

0x867d,	// (0x000501bb) main_pane_set_t2_copy1_ParamLimits

0x867d,	// (0x000501bb) main_pane_set_t2_copy1

0x879d,	// (0x000502db) main_pane_set_t3_copy1

0x87ab,	// (0x000502e9) main_pane_set_t4_copy1

0x869c,	// (0x000501da) set_content_pane_g1_copy1_ParamLimits

0x869c,	// (0x000501da) set_content_pane_g1_copy1

0x87b9,	// (0x000502f7) setting_code_pane_copy1

0x87c1,	// (0x000502ff) setting_slider_graphic_pane_copy1

0x87c1,	// (0x000502ff) setting_slider_pane_copy1

0x87c9,	// (0x00050307) setting_text_pane_copy1

0x87c9,	// (0x00050307) setting_volume_pane_copy1

0x87b9,	// (0x000502f7) settings_code_pane_cp2_copy1

0x87d1,	// (0x0005030f) settings_code_pane_cp_copy1_ParamLimits

0x87d1,	// (0x0005030f) settings_code_pane_cp_copy1

0x23ac,	// (0x00049eea) volume_set_pane_copy1

0x87e5,	// (0x00050323) volume_set_pane_g10_copy1

0x87f1,	// (0x0005032f) volume_set_pane_g1_copy1

0x87fb,	// (0x00050339) volume_set_pane_g2_copy1

0x8805,	// (0x00050343) volume_set_pane_g3_copy1

0x880f,	// (0x0005034d) volume_set_pane_g4_copy1

0x8819,	// (0x00050357) volume_set_pane_g5_copy1

0x8823,	// (0x00050361) volume_set_pane_g6_copy1

0x882d,	// (0x0005036b) volume_set_pane_g7_copy1

0x8837,	// (0x00050375) volume_set_pane_g8_copy1

0x8841,	// (0x0005037f) volume_set_pane_g9_copy1

0xa35e,	// (0x00051e9c) bg_set_opt_pane_cp_copy1_ParamLimits

0xa35e,	// (0x00051e9c) bg_set_opt_pane_cp_copy1

0x23b8,	// (0x00049ef6) setting_slider_pane_t1_copy1_ParamLimits

0x23b8,	// (0x00049ef6) setting_slider_pane_t1_copy1

0x23d7,	// (0x00049f15) setting_slider_pane_t2_copy1_ParamLimits

0x23d7,	// (0x00049f15) setting_slider_pane_t2_copy1

0x23f1,	// (0x00049f2f) setting_slider_pane_t3_copy1_ParamLimits

0x23f1,	// (0x00049f2f) setting_slider_pane_t3_copy1

0x2409,	// (0x00049f47) slider_set_pane_copy1_ParamLimits

0x2409,	// (0x00049f47) slider_set_pane_copy1

0xad06,	// (0x00052844) set_opt_bg_pane_g1_copy2

0xad0e,	// (0x0005284c) set_opt_bg_pane_g2_copy2

0x884d,	// (0x0005038b) set_opt_bg_pane_g3_copy2

0xad1e,	// (0x0005285c) set_opt_bg_pane_g4_copy2

0xad26,	// (0x00052864) set_opt_bg_pane_g5_copy2

0xad2e,	// (0x0005286c) set_opt_bg_pane_g6_copy2

0x8857,	// (0x00050395) set_opt_bg_pane_g7_copy2

0x8861,	// (0x0005039f) set_opt_bg_pane_g8_copy2

0x886b,	// (0x000503a9) set_opt_bg_pane_g9_copy2

0x241f,	// (0x00049f5d) aid_size_touch_slider_mark_copy1_ParamLimits

0x241f,	// (0x00049f5d) aid_size_touch_slider_mark_copy1

0x8875,	// (0x000503b3) slider_set_pane_g1_copy1

0x2433,	// (0x00049f71) slider_set_pane_g2_copy1

0x12a2,	// (0x00048de0) slider_set_pane_g3_copy1_ParamLimits

0x12a2,	// (0x00048de0) slider_set_pane_g3_copy1

0x12b6,	// (0x00048df4) slider_set_pane_g4_copy1_ParamLimits

0x12b6,	// (0x00048df4) slider_set_pane_g4_copy1

0x12ce,	// (0x00048e0c) slider_set_pane_g5_copy1_ParamLimits

0x12ce,	// (0x00048e0c) slider_set_pane_g5_copy1

0x12a2,	// (0x00048de0) slider_set_pane_g6_copy1_ParamLimits

0x12a2,	// (0x00048de0) slider_set_pane_g6_copy1

0x243b,	// (0x00049f79) slider_set_pane_g7_copy1_ParamLimits

0x243b,	// (0x00049f79) slider_set_pane_g7_copy1

0xa0d1,	// (0x00051c0f) bg_set_opt_pane_cp2_copy1

0x887e,	// (0x000503bc) setting_slider_graphic_pane_g1_copy1

0x8887,	// (0x000503c5) setting_slider_graphic_pane_t1_copy1

0x8897,	// (0x000503d5) setting_slider_graphic_pane_t2_copy1

0x88a7,	// (0x000503e5) slider_set_pane_cp_copy1

0x88b7,	// (0x000503f5) input_focus_pane_cp1_copy1

0x88c0,	// (0x000503fe) list_set_text_pane_copy1

0x88c8,	// (0x00050406) setting_text_pane_g1_copy1

0xe2bb,	// (0x00055df9) set_text_pane_t1_copy1

0x88b7,	// (0x000503f5) input_focus_pane_cp2_copy1

0x88c8,	// (0x00050406) setting_code_pane_g1_copy1

0x88d1,	// (0x0005040f) setting_code_pane_t1_copy1

0x4d91,	// (0x0004c8cf) list_set_graphic_pane_copy1

0xa0d1,	// (0x00051c0f) bg_set_opt_pane_cp4_copy1

0x26c3,	// (0x0004a201) list_set_graphic_pane_g1_copy1_ParamLimits

0x26c3,	// (0x0004a201) list_set_graphic_pane_g1_copy1

0x88df,	// (0x0005041d) list_set_graphic_pane_g2_copy1

0x26db,	// (0x0004a219) list_set_graphic_pane_t1_copy1_ParamLimits

0x26db,	// (0x0004a219) list_set_graphic_pane_t1_copy1

0x585b,	// (0x0004d399) rs_clock_indi_pane_g1

0x88e7,	// (0x00050425) rs_clock_indi_pane_t1

0x88f5,	// (0x00050433) rs_indi_pane

0x88fd,	// (0x0005043b) rs_indi_pane_g1

0x8906,	// (0x00050444) rs_indi_pane_g2

0x85ef,	// (0x0005012d) rs_indi_pane_g3

0x0002,

0xfebf,	// (0x000579fd) rs_indi_pane_g

0x29c8,	// (0x0004a506) bg_popup_preview_window_pane_cp03

0x890f,	// (0x0005044d) popup_fep_tooltip_window_t1

0x6538,	// (0x0004e076) popup_note2_window_g2_ParamLimits

0x6538,	// (0x0004e076) popup_note2_window_g2

0x0001,

0xfc4c,	// (0x0005778a) popup_note2_window_g_ParamLimits

0xfc4c,	// (0x0005778a) popup_note2_window_g

0x6a40,	// (0x0004e57e) bg_popup_sub_pane_cp11_ParamLimits

0x6a4d,	// (0x0004e58b) cell_ai3_links_pane_g1_ParamLimits

0x6a64,	// (0x0004e5a2) cell_ai3_links_pane_t1

0xe2bb,	// (0x00055df9) set_text_pane_t1_copy1_ParamLimits

0x28ca,	// (0x0004a408) cell_graphic_popup_pane_cp2_ParamLimits

0x28ca,	// (0x0004a408) cell_graphic_popup_pane_cp2

0x891d,	// (0x0005045b) cell_graphic_popup_pane_g1_cp2

0xa9aa,	// (0x000524e8) cell_graphic_popup_pane_g2_cp2

0x8925,	// (0x00050463) cell_graphic_popup_pane_g3_cp2

0x892d,	// (0x0005046b) cell_graphic_popup_pane_t2_cp2

0xa9bb,	// (0x000524f9) grid_highlight_pane_cp3_cp2

0xc5af,	// (0x000540ed) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xacae,	// (0x000527ec) main_tmo_pane_ParamLimits

0xd69d,	// (0x000551db) popup_tmo_big_image_note_window

0xe666,	// (0x000561a4) cell_ai5_widget_list_pane

0xe66e,	// (0x000561ac) cell_ai5_widget_lrg_icon_pane

0xe9b1,	// (0x000564ef) tmo_note_info_pane_t1_ParamLimits

0xe9c6,	// (0x00056504) tmo_note_info_pane_t2_ParamLimits

0xe9df,	// (0x0005651d) tmo_note_info_pane_t3_ParamLimits

0x856c,	// (0x000500aa) tmo_note_info_pane_t4_ParamLimits

0x857e,	// (0x000500bc) tmo_note_info_pane_t5_ParamLimits

0xfead,	// (0x000579eb) tmo_note_info_pane_t_ParamLimits

0x86a8,	// (0x000501e6) settings_container_pane_ParamLimits

0x88af,	// (0x000503ed) indicator_popup_pane_cp5

0x88af,	// (0x000503ed) indicator_popup_pane_cp6

0x4d91,	// (0x0004c8cf) list_set_graphic_pane_copy1_ParamLimits

0x9fd7,	// (0x00051b15) bg_popup_window_pane_cp23

0x893b,	// (0x00050479) popup_tmo_big_image_note_window_g1

0x8947,	// (0x00050485) popup_tmo_big_image_note_window_t1

0x8957,	// (0x00050495) popup_tmo_big_image_note_window_t2

0x8967,	// (0x000504a5) popup_tmo_big_image_note_window_t3

0x0002,

0xfec6,	// (0x00057a04) popup_tmo_big_image_note_window_t

0x585b,	// (0x0004d399) cell_ai5_widget_lrg_icon_pane_g1

0xea09,	// (0x00056547) cell_ai5_widget_lrg_icon_pane_t1

0xea17,	// (0x00056555) cell_ai5_widget_list_row_pane_ParamLimits

0xea17,	// (0x00056555) cell_ai5_widget_list_row_pane

0xea2f,	// (0x0005656d) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xea2f,	// (0x0005656d) cell_ai5_widget_list_row_pane_g1

0xea3c,	// (0x0005657a) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xea3c,	// (0x0005657a) cell_ai5_widget_list_row_pane_t1

0xea67,	// (0x000565a5) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xea67,	// (0x000565a5) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecd,	// (0x00057a0b) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecd,	// (0x00057a0b) cell_ai5_widget_list_row_pane_t

0x9fd7,	// (0x00051b15) main_fep_vtchi_ss_pane

0x8a25,	// (0x00050563) popup_fep_char_pre_window

0x8a2d,	// (0x0005056b) popup_fep_ituss_window

0xeab9,	// (0x000565f7) popup_fep_vkbss_window

0x2cef,	// (0x0004a82d) grid_vkbss_keypad_pane_ParamLimits

0x2cef,	// (0x0004a82d) grid_vkbss_keypad_pane

0x8a9b,	// (0x000505d9) ituss_keypad_pane

0x245b,	// (0x00049f99) aid_vkbss_key_offset_ParamLimits

0x245b,	// (0x00049f99) aid_vkbss_key_offset

0xc4b0,	// (0x00053fee) cell_vkbss_key_pane_ParamLimits

0xc4b0,	// (0x00053fee) cell_vkbss_key_pane

0x8aa7,	// (0x000505e5) bg_cell_vkbss_key_g1_ParamLimits

0x8aa7,	// (0x000505e5) bg_cell_vkbss_key_g1

0xeac8,	// (0x00056606) cell_vkbss_key_3p_pane_ParamLimits

0xeac8,	// (0x00056606) cell_vkbss_key_3p_pane

0xeafe,	// (0x0005663c) cell_vkbss_key_g1_ParamLimits

0xeafe,	// (0x0005663c) cell_vkbss_key_g1

0xeb34,	// (0x00056672) cell_vkbss_key_t1_ParamLimits

0xeb34,	// (0x00056672) cell_vkbss_key_t1

0x24c9,	// (0x0004a007) cell_ituss_key_pane_ParamLimits

0x24c9,	// (0x0004a007) cell_ituss_key_pane

0x8b7b,	// (0x000506b9) bg_cell_ituss_key_g1_ParamLimits

0x8b7b,	// (0x000506b9) bg_cell_ituss_key_g1

0x8b87,	// (0x000506c5) cell_ituss_key_pane_g1_ParamLimits

0x8b87,	// (0x000506c5) cell_ituss_key_pane_g1

0x24da,	// (0x0004a018) cell_ituss_key_pane_g2_ParamLimits

0x24da,	// (0x0004a018) cell_ituss_key_pane_g2

0x0005,

0xfed4,	// (0x00057a12) cell_ituss_key_pane_g_ParamLimits

0xfed4,	// (0x00057a12) cell_ituss_key_pane_g

0x255e,	// (0x0004a09c) cell_ituss_key_t1_ParamLimits

0x255e,	// (0x0004a09c) cell_ituss_key_t1

0x2598,	// (0x0004a0d6) cell_ituss_key_t2_ParamLimits

0x2598,	// (0x0004a0d6) cell_ituss_key_t2

0x25ca,	// (0x0004a108) cell_ituss_key_t3_ParamLimits

0x25ca,	// (0x0004a108) cell_ituss_key_t3

0x25fb,	// (0x0004a139) cell_ituss_key_t4_ParamLimits

0x25fb,	// (0x0004a139) cell_ituss_key_t4

0x0004,

0xfee1,	// (0x00057a1f) cell_ituss_key_t_ParamLimits

0xfee1,	// (0x00057a1f) cell_ituss_key_t

0xeb90,	// (0x000566ce) cell_vkbss_key_3p_pane_g1

0xeb98,	// (0x000566d6) cell_vkbss_key_3p_pane_g2

0xeba0,	// (0x000566de) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeec,	// (0x00057a2a) cell_vkbss_key_3p_pane_g

0x29c8,	// (0x0004a506) bg_popup_fep_char_preview_window_cp02

0x8bc5,	// (0x00050703) popup_fep_char_pre_window_t1

0xe645,	// (0x00056183) main_ai5_sk_pane

0x85f8,	// (0x00050136) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe9f4,	// (0x00056532) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8619,	// (0x00050157) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8625,	// (0x00050163) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb8,	// (0x000579f6) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8631,	// (0x0005016f) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xacae,	// (0x000527ec) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xeba8,	// (0x000566e6) main_ai5_sk_pane_g1

0x36c5,	// (0x0004b203) popup_query_code_window_g1

0xeaaa,	// (0x000565e8) popup_fep_vkb_icf_pane

0x8a72,	// (0x000505b0) popup_fep_vtchi_icf_pane

0x8bdc,	// (0x0005071a) bg_icf_pane

0x8bdc,	// (0x0005071a) list_vkb_icf_pane

0x8be8,	// (0x00050726) bg_icf_pane_cp01

0x8bfb,	// (0x00050739) vtchi_icf_list_pane

0xebfd,	// (0x0005673b) list_vkb_icf_pane_t1_ParamLimits

0xebfd,	// (0x0005673b) list_vkb_icf_pane_t1

0x8c74,	// (0x000507b2) vtchi_icf_list_pane_t1_ParamLimits

0x8c74,	// (0x000507b2) vtchi_icf_list_pane_t1

0x8a2d,	// (0x0005056b) popup_fep_ituss_window_ParamLimits

0x8a72,	// (0x000505b0) popup_fep_vtchi_icf_pane_ParamLimits

0x8a9b,	// (0x000505d9) ituss_keypad_pane_ParamLimits

0x2451,	// (0x00049f8f) ituss_sks_pane

0x8bdc,	// (0x0005071a) bg_icf_pane_ParamLimits

0xea8f,	// (0x000565cd) icf_edit_indi_pane_ParamLimits

0xea8f,	// (0x000565cd) icf_edit_indi_pane

0x8bdc,	// (0x0005071a) list_vkb_icf_pane_ParamLimits

0x8be8,	// (0x00050726) bg_icf_pane_cp01_ParamLimits

0x8a18,	// (0x00050556) icf_edit_indi_pane_cp01_ParamLimits

0x8a18,	// (0x00050556) icf_edit_indi_pane_cp01

0x8bfb,	// (0x00050739) vtchi_query_pane

0x7d7c,	// (0x0004f8ba) icf_edit_indi_pane_g1_ParamLimits

0x7d7c,	// (0x0004f8ba) icf_edit_indi_pane_g1

0xec14,	// (0x00056752) icf_edit_indi_pane_g2_ParamLimits

0xec14,	// (0x00056752) icf_edit_indi_pane_g2

0x0001,

0xff17,	// (0x00057a55) icf_edit_indi_pane_g_ParamLimits

0xff17,	// (0x00057a55) icf_edit_indi_pane_g

0xec28,	// (0x00056766) icf_edit_indi_pane_t1

0x8c8d,	// (0x000507cb) bg_input_focus_pane_cp042

0xab8e,	// (0x000526cc) vtchi_button_pane

0x8c96,	// (0x000507d4) vtchi_query_pane_t1

0x8ca4,	// (0x000507e2) vtchi_query_pane_t2

0x8cb2,	// (0x000507f0) vtchi_query_pane_t3

0x0002,

0xff06,	// (0x00057a44) vtchi_query_pane_t

0x9fd7,	// (0x00051b15) bg_button_pane_cp13

0x8cc0,	// (0x000507fe) vtchi_button_pane_g1

0x263e,	// (0x0004a17c) ituss_sks_pane_g1

0x2649,	// (0x0004a187) ituss_sks_pane_g2

0x0001,

0xff0d,	// (0x00057a4b) ituss_sks_pane_g

0x8cc8,	// (0x00050806) ituss_sks_pane_t1

0x8cd6,	// (0x00050814) ituss_sks_pane_t2

0x0001,

0xff12,	// (0x00057a50) ituss_sks_pane_t

0x532f,	// (0x0004ce6d) indicator_nsta_pane_cp_g1

0x5338,	// (0x0004ce76) indicator_nsta_pane_cp_g2

0x5340,	// (0x0004ce7e) indicator_nsta_pane_cp_g3

0x5348,	// (0x0004ce86) indicator_nsta_pane_cp_g4

0x5338,	// (0x0004ce76) indicator_nsta_pane_cp_g5

0x5340,	// (0x0004ce7e) indicator_nsta_pane_cp_g6

0x0005,

0xfa96,	// (0x000575d4) indicator_nsta_pane_cp_g

0xe0c3,	// (0x00055c01) cell_graphic2_pane_t2_ParamLimits

0xe0c3,	// (0x00055c01) cell_graphic2_pane_t2

0x0001,

0xfda3,	// (0x000578e1) cell_graphic2_pane_t_ParamLimits

0xfda3,	// (0x000578e1) cell_graphic2_pane_t

0xe0fb,	// (0x00055c39) cell_graphic2_control_pane_t1

0xb194,	// (0x00052cd2) signal_pane_g3_ParamLimits

0xb194,	// (0x00052cd2) signal_pane_g3

0xb1a8,	// (0x00052ce6) signal_pane_g4_ParamLimits

0xb1a8,	// (0x00052ce6) signal_pane_g4

0xea79,	// (0x000565b7) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xea79,	// (0x000565b7) cell_ai5_widget_list_row_pane_t3

0x8b9b,	// (0x000506d9) cell_ituss_key_pane_t1_ParamLimits

0x8b9b,	// (0x000506d9) cell_ituss_key_pane_t1

0x332c,	// (0x0004ae6a) form_field_data_wide_pane_vc_t2_ParamLimits

0x332c,	// (0x0004ae6a) form_field_data_wide_pane_vc_t2

0x3340,	// (0x0004ae7e) form_field_data_wide_pane_vc_t3_ParamLimits

0x3340,	// (0x0004ae7e) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e4,	// (0x00057322) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e4,	// (0x00057322) form_field_data_wide_pane_vc_t

0x4fcc,	// (0x0004cb0a) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4fcc,	// (0x0004cb0a) form_field_slider_wide_pane_vc_t3

0x50a2,	// (0x0004cbe0) form_field_popup_wide_pane_vc_t2_ParamLimits

0x50a2,	// (0x0004cbe0) form_field_popup_wide_pane_vc_t2

0x50b9,	// (0x0004cbf7) form_field_popup_wide_pane_vc_t3_ParamLimits

0x50b9,	// (0x0004cbf7) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa85,	// (0x000575c3) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa85,	// (0x000575c3) form_field_popup_wide_pane_vc_t

0xc313,	// (0x00053e51) aid_fshwr2_btn_pane_ParamLimits

0xc327,	// (0x00053e65) aid_fshwr2_syb_pane_ParamLimits

0xc33b,	// (0x00053e79) aid_fshwr2_txt_pane_ParamLimits

0xacae,	// (0x000527ec) fshwr2_bg_pane_ParamLimits

0xc34b,	// (0x00053e89) fshwr2_func_candi_pane_ParamLimits

0xc36d,	// (0x00053eab) fshwr2_hwr_syb_pane_ParamLimits

0xc391,	// (0x00053ecf) fshwr2_icf_pane_ParamLimits

0x14a4,	// (0x00048fe2) list_double_graphic_pane_vc_g4_ParamLimits

0x14a4,	// (0x00048fe2) list_double_graphic_pane_vc_g4

0x24fa,	// (0x0004a038) cell_ituss_key_pane_g3_ParamLimits

0x24fa,	// (0x0004a038) cell_ituss_key_pane_g3

0x262c,	// (0x0004a16a) cell_ituss_key_t5_ParamLimits

0x262c,	// (0x0004a16a) cell_ituss_key_t5

0xeab9,	// (0x000565f7) popup_fep_vkbss_window_ParamLimits

0xe64f,	// (0x0005618d) aid_cell_ai5_quarter

0xec28,	// (0x00056766) icf_edit_indi_pane_t1_ParamLimits

0xa6e9,	// (0x00052227) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xa6e9,	// (0x00052227) aid_tch_indicator_popup_pane_cp2

0xa6fc,	// (0x0005223a) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xa6fc,	// (0x0005223a) aid_tch_query_popup_data_pane_cp2

0x366d,	// (0x0004b1ab) aid_tch_query_popup_pane_ParamLimits

0x366d,	// (0x0004b1ab) aid_tch_query_popup_pane

0x366d,	// (0x0004b1ab) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x366d,	// (0x0004b1ab) aid_tch_query_popup_data_pane_cp1

0x2cef,	// (0x0004a82d) cell_fshwr2_syb_bg_pane_ParamLimits

0xc486,	// (0x00053fc4) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xc49a,	// (0x00053fd8) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xeaaa,	// (0x000565e8) popup_fep_vkb_icf_pane_ParamLimits

0xc2a7,	// (0x00053de5) bg_popup_fep_char_preview_window_g10

0xe72e,	// (0x0005626c) cell_ai5_widget_pane_g11_ParamLimits

0xe72e,	// (0x0005626c) cell_ai5_widget_pane_g11

0xe73a,	// (0x00056278) cell_ai5_widget_pane_g12_ParamLimits

0xe73a,	// (0x00056278) cell_ai5_widget_pane_g12

0xe746,	// (0x00056284) cell_ai5_widget_pane_g13_ParamLimits

0xe746,	// (0x00056284) cell_ai5_widget_pane_g13

0xe845,	// (0x00056383) cell_ai5_widget_pane_t11_ParamLimits

0xe845,	// (0x00056383) cell_ai5_widget_pane_t11

0xe857,	// (0x00056395) cell_ai5_widget_pane_t12_ParamLimits

0xe857,	// (0x00056395) cell_ai5_widget_pane_t12

0x2506,	// (0x0004a044) cell_ituss_key_pane_g4_ParamLimits

0x2506,	// (0x0004a044) cell_ituss_key_pane_g4

0x2522,	// (0x0004a060) cell_ituss_key_pane_g5_ParamLimits

0x2522,	// (0x0004a060) cell_ituss_key_pane_g5

0x253e,	// (0x0004a07c) cell_ituss_key_pane_g6_ParamLimits

0x253e,	// (0x0004a07c) cell_ituss_key_pane_g6

0x3227,	// (0x0004ad65) bg_icf_pane_g1

0xebb1,	// (0x000566ef) bg_icf_pane_g2

0xebbb,	// (0x000566f9) bg_icf_pane_g3

0xebc3,	// (0x00056701) bg_icf_pane_g4

0xebcd,	// (0x0005670b) bg_icf_pane_g5

0xebd7,	// (0x00056715) bg_icf_pane_g6

0xebe1,	// (0x0005671f) bg_icf_pane_g7

0xebe9,	// (0x00056727) bg_icf_pane_g8

0xebf3,	// (0x00056731) bg_icf_pane_g9

0x0008,

0xfef3,	// (0x00057a31) bg_icf_pane_g

0x8a88,	// (0x000505c6) popup_hyb_candi_window_ParamLimits

0x8a88,	// (0x000505c6) popup_hyb_candi_window

0x329b,	// (0x0004add9) bg_popup_sub_pane_cp01_ParamLimits

0x329b,	// (0x0004add9) bg_popup_sub_pane_cp01

0x8d11,	// (0x0005084f) entry_hyb_candi_pane_ParamLimits

0x8d11,	// (0x0005084f) entry_hyb_candi_pane

0x8d20,	// (0x0005085e) grid_hyb_candi_pane_ParamLimits

0x8d20,	// (0x0005085e) grid_hyb_candi_pane

0x8d35,	// (0x00050873) grid_hyb_phrase_pane_ParamLimits

0x8d35,	// (0x00050873) grid_hyb_phrase_pane

0x8d44,	// (0x00050882) cell_hyb_candi_pane_ParamLimits

0x8d44,	// (0x00050882) cell_hyb_candi_pane

0xab97,	// (0x000526d5) cell_hyb_candi_scroll_pane

0xe481,	// (0x00055fbf) cell_hyb_candi_pane_g1

0x8d60,	// (0x0005089e) cell_hyb_candi_pane_t1

0x8d6e,	// (0x000508ac) cell_hyb_phrase_pane

0xe481,	// (0x00055fbf) cell_hyb_phrase_pane_g1

0x8d77,	// (0x000508b5) cell_hyb_phrase_pane_t1

0x8d85,	// (0x000508c3) entry_hyb_candi_pane_t1

0x29c8,	// (0x0004a506) input_focus_pane_cp06

0x8d93,	// (0x000508d1) cell_hyb_candi_scroll_pane_g1

0x8d9b,	// (0x000508d9) cell_hyb_candi_scroll_pane_g1_aid

0x8da3,	// (0x000508e1) cell_hyb_candi_scroll_pane_g2

0x8dab,	// (0x000508e9) cell_hyb_candi_scroll_pane_g2_aid

0x8db3,	// (0x000508f1) cell_hyb_candi_scroll_pane_g3

0x8dbb,	// (0x000508f9) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Large
