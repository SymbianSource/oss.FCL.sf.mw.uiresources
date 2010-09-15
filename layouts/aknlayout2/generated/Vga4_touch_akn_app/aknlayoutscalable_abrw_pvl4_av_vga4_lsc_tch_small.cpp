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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0003652e };

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
0x93c4,	// (0x0003f8f2) Screen

0x93d0,	// (0x0003f8fe) application_window_ParamLimits

0x93d0,	// (0x0003f8fe) application_window

0xb76d,	// (0x00041c9b) screen_g1

0x9408,	// (0x0003f936) area_bottom_pane_ParamLimits

0x9408,	// (0x0003f936) area_bottom_pane

0xec63,	// (0x00045191) area_top_pane_ParamLimits

0xec63,	// (0x00045191) area_top_pane

0xed01,	// (0x0004522f) main_pane_ParamLimits

0xed01,	// (0x0004522f) main_pane

0xb777,	// (0x00041ca5) misc_graphics

0xc1a6,	// (0x000426d4) battery_pane_ParamLimits

0xc1a6,	// (0x000426d4) battery_pane

0x3651,	// (0x00039b7f) bg_status_flat_pane_g8

0x3659,	// (0x00039b87) bg_status_flat_pane_g9

0x2a51,	// (0x00038f7f) context_pane_ParamLimits

0x2a51,	// (0x00038f7f) context_pane

0xc31d,	// (0x0004284b) navi_pane_ParamLimits

0xc31d,	// (0x0004284b) navi_pane

0xc3a7,	// (0x000428d5) signal_pane_ParamLimits

0xc3a7,	// (0x000428d5) signal_pane

0x0008,

0xf84f,	// (0x00045d7d) bg_status_flat_pane_g

0xc437,	// (0x00042965) status_pane_g1_ParamLimits

0xc437,	// (0x00042965) status_pane_g1

0xc44d,	// (0x0004297b) status_pane_g2_ParamLimits

0xc44d,	// (0x0004297b) status_pane_g2

0x2c8a,	// (0x000391b8) status_pane_g3_ParamLimits

0x2c8a,	// (0x000391b8) status_pane_g3

0x0004,

0xf77b,	// (0x00045ca9) status_pane_g_ParamLimits

0xf77b,	// (0x00045ca9) status_pane_g

0xc459,	// (0x00042987) title_pane_ParamLimits

0xc459,	// (0x00042987) title_pane

0xc4c0,	// (0x000429ee) uni_indicator_pane_ParamLimits

0xc4c0,	// (0x000429ee) uni_indicator_pane

0x28bb,	// (0x00038de9) bg_list_pane_ParamLimits

0x28bb,	// (0x00038de9) bg_list_pane

0xa4a8,	// (0x000409d6) find_pane

0x2e85,	// (0x000393b3) listscroll_app_pane_ParamLimits

0x2e85,	// (0x000393b3) listscroll_app_pane

0x28e7,	// (0x00038e15) listscroll_form_pane

0x93b0,	// (0x0003f8de) listscroll_gen_pane_ParamLimits

0x93b0,	// (0x0003f8de) listscroll_gen_pane

0x0394,	// (0x000368c2) listscroll_set_pane

0x41ee,	// (0x0003a71c) main_idle_act_pane

0x25b4,	// (0x00038ae2) main_idle_trad_pane

0x25b4,	// (0x00038ae2) main_list_empty_pane

0x28db,	// (0x00038e09) main_midp_pane

0x2901,	// (0x00038e2f) main_pane_g1_ParamLimits

0x2901,	// (0x00038e2f) main_pane_g1

0xa4b0,	// (0x000409de) popup_ai_message_window_ParamLimits

0xa4b0,	// (0x000409de) popup_ai_message_window

0xa550,	// (0x00040a7e) popup_fep_china_uni_window_ParamLimits

0xa550,	// (0x00040a7e) popup_fep_china_uni_window

0x04be,	// (0x000369ec) popup_fep_japan_candidate_window_ParamLimits

0x04be,	// (0x000369ec) popup_fep_japan_candidate_window

0x04e8,	// (0x00036a16) popup_fep_japan_predictive_window_ParamLimits

0x04e8,	// (0x00036a16) popup_fep_japan_predictive_window

0xa5b0,	// (0x00040ade) popup_find_window

0xa5cd,	// (0x00040afb) popup_grid_graphic_window_ParamLimits

0xa5cd,	// (0x00040afb) popup_grid_graphic_window

0x055b,	// (0x00036a89) popup_large_graphic_colour_window

0xa677,	// (0x00040ba5) popup_menu_window_ParamLimits

0xa677,	// (0x00040ba5) popup_menu_window

0xa867,	// (0x00040d95) popup_note_image_window

0xa827,	// (0x00040d55) popup_note_wait_window_ParamLimits

0xa827,	// (0x00040d55) popup_note_wait_window

0xa87f,	// (0x00040dad) popup_note_window_ParamLimits

0xa87f,	// (0x00040dad) popup_note_window

0xa92d,	// (0x00040e5b) popup_query_code_window_ParamLimits

0xa92d,	// (0x00040e5b) popup_query_code_window

0x07c7,	// (0x00036cf5) popup_query_data_code_window_ParamLimits

0x07c7,	// (0x00036cf5) popup_query_data_code_window

0xa96d,	// (0x00040e9b) popup_query_data_window_ParamLimits

0xa96d,	// (0x00040e9b) popup_query_data_window

0xaa01,	// (0x00040f2f) popup_query_sat_info_window_ParamLimits

0xaa01,	// (0x00040f2f) popup_query_sat_info_window

0xaaac,	// (0x00040fda) popup_snote_single_graphic_window_ParamLimits

0xaaac,	// (0x00040fda) popup_snote_single_graphic_window

0xaaac,	// (0x00040fda) popup_snote_single_text_window_ParamLimits

0xaaac,	// (0x00040fda) popup_snote_single_text_window

0x0862,	// (0x00036d90) popup_sub_window_general

0x09a8,	// (0x00036ed6) popup_window_general_ParamLimits

0x09a8,	// (0x00036ed6) popup_window_general

0x290f,	// (0x00038e3d) power_save_pane

0x023b,	// (0x00036769) control_pane_g1_ParamLimits

0x023b,	// (0x00036769) control_pane_g1

0x025e,	// (0x0003678c) control_pane_g2_ParamLimits

0x025e,	// (0x0003678c) control_pane_g2

0x287e,	// (0x00038dac) control_pane_g3_ParamLimits

0x287e,	// (0x00038dac) control_pane_g3

0x0007,

0xf763,	// (0x00045c91) control_pane_g_ParamLimits

0xf763,	// (0x00045c91) control_pane_g

0xa3bf,	// (0x000408ed) control_pane_t1_ParamLimits

0xa3bf,	// (0x000408ed) control_pane_t1

0xa40f,	// (0x0004093d) control_pane_t2_ParamLimits

0xa40f,	// (0x0004093d) control_pane_t2

0x0002,

0xf774,	// (0x00045ca2) control_pane_t_ParamLimits

0xf774,	// (0x00045ca2) control_pane_t

0x27a3,	// (0x00038cd1) navi_navi_volume_pane_cp1

0x27ab,	// (0x00038cd9) status_small_icon_pane

0x27b3,	// (0x00038ce1) status_small_pane_g1_ParamLimits

0x27b3,	// (0x00038ce1) status_small_pane_g1

0x27e7,	// (0x00038d15) status_small_pane_g2_ParamLimits

0x27e7,	// (0x00038d15) status_small_pane_g2

0x27f3,	// (0x00038d21) status_small_pane_g3_ParamLimits

0x27f3,	// (0x00038d21) status_small_pane_g3

0xa371,	// (0x0004089f) status_small_pane_g4_ParamLimits

0xa371,	// (0x0004089f) status_small_pane_g4

0xa37f,	// (0x000408ad) status_small_pane_g5_ParamLimits

0xa37f,	// (0x000408ad) status_small_pane_g5

0x2819,	// (0x00038d47) status_small_pane_g6_ParamLimits

0x2819,	// (0x00038d47) status_small_pane_g6

0x0007,

0xf752,	// (0x00045c80) status_small_pane_g_ParamLimits

0xf752,	// (0x00045c80) status_small_pane_g

0x2848,	// (0x00038d76) status_small_pane_t1

0xa395,	// (0x000408c3) status_small_wait_pane_ParamLimits

0xa395,	// (0x000408c3) status_small_wait_pane

0xa162,	// (0x00040690) aid_levels_signal_ParamLimits

0xa162,	// (0x00040690) aid_levels_signal

0xa17a,	// (0x000406a8) signal_pane_g1_ParamLimits

0xa17a,	// (0x000406a8) signal_pane_g1

0xa195,	// (0x000406c3) signal_pane_g2_ParamLimits

0xa195,	// (0x000406c3) signal_pane_g2

0x0003,

0xf6e3,	// (0x00045c11) signal_pane_g_ParamLimits

0xf6e3,	// (0x00045c11) signal_pane_g

0xf35d,	// (0x0004588b) context_pane_g1

0x95f4,	// (0x0003fb22) title_pane_g1

0x9637,	// (0x0003fb65) title_pane_t1

0xb78d,	// (0x00041cbb) title_pane_t2

0xb7b3,	// (0x00041ce1) title_pane_t3

0x0002,

0xf532,	// (0x00045a60) title_pane_t

0xc4e8,	// (0x00042a16) aid_levels_battery_ParamLimits

0xc4e8,	// (0x00042a16) aid_levels_battery

0xc504,	// (0x00042a32) battery_pane_g1_ParamLimits

0xc504,	// (0x00042a32) battery_pane_g1

0xc521,	// (0x00042a4f) battery_pane_g2_ParamLimits

0xc521,	// (0x00042a4f) battery_pane_g2

0x0001,

0xf786,	// (0x00045cb4) battery_pane_g_ParamLimits

0xf786,	// (0x00045cb4) battery_pane_g

0xc753,	// (0x00042c81) uni_indicator_pane_g1

0xc769,	// (0x00042c97) uni_indicator_pane_g2

0xc77f,	// (0x00042cad) uni_indicator_pane_g3

0x0005,

0xf8f7,	// (0x00045e25) uni_indicator_pane_g

0x2417,	// (0x00038945) navi_icon_pane_ParamLimits

0x2417,	// (0x00038945) navi_icon_pane

0x235e,	// (0x0003888c) navi_midp_pane

0x2433,	// (0x00038961) navi_navi_pane

0x243d,	// (0x0003896b) navi_text_pane_ParamLimits

0x243d,	// (0x0003896b) navi_text_pane

0xb76d,	// (0x00041c9b) status_small_wait_pane_g1

0xbad4,	// (0x00042002) status_small_wait_pane_g2

0x0001,

0xf8f2,	// (0x00045e20) status_small_wait_pane_g

0xc6f2,	// (0x00042c20) navi_navi_icon_text_pane

0xc6fa,	// (0x00042c28) navi_navi_pane_g1_ParamLimits

0xc6fa,	// (0x00042c28) navi_navi_pane_g1

0xc70c,	// (0x00042c3a) navi_navi_pane_g2_ParamLimits

0xc70c,	// (0x00042c3a) navi_navi_pane_g2

0x0001,

0xf8c0,	// (0x00045dee) navi_navi_pane_g_ParamLimits

0xf8c0,	// (0x00045dee) navi_navi_pane_g

0x3cda,	// (0x0003a208) navi_navi_tabs_pane

0xc71e,	// (0x00042c4c) navi_navi_text_pane

0xc6f2,	// (0x00042c20) navi_navi_volume_pane

0xc6e0,	// (0x00042c0e) navi_text_pane_t1

0xc6d4,	// (0x00042c02) navi_icon_pane_g1

0x3bd1,	// (0x0003a0ff) navi_navi_text_pane_t1

0xadcc,	// (0x000412fa) navi_navi_volume_pane_g1

0xadd4,	// (0x00041302) volume_small_pane

0xc630,	// (0x00042b5e) navi_navi_icon_text_pane_g1

0xc638,	// (0x00042b66) navi_navi_icon_text_pane_t1

0x2433,	// (0x00038961) navi_tabs_2_long_pane

0x2433,	// (0x00038961) navi_tabs_2_pane

0x2433,	// (0x00038961) navi_tabs_3_long_pane

0x2433,	// (0x00038961) navi_tabs_3_pane

0x2433,	// (0x00038961) navi_tabs_4_pane

0xadac,	// (0x000412da) tabs_2_active_pane_ParamLimits

0xadac,	// (0x000412da) tabs_2_active_pane

0xadbc,	// (0x000412ea) tabs_2_passive_pane_ParamLimits

0xadbc,	// (0x000412ea) tabs_2_passive_pane

0xad7a,	// (0x000412a8) tabs_3_active_pane_ParamLimits

0xad7a,	// (0x000412a8) tabs_3_active_pane

0xad8a,	// (0x000412b8) tabs_3_passive_pane_ParamLimits

0xad8a,	// (0x000412b8) tabs_3_passive_pane

0xad9b,	// (0x000412c9) tabs_3_passive_pane_cp_ParamLimits

0xad9b,	// (0x000412c9) tabs_3_passive_pane_cp

0xad36,	// (0x00041264) tabs_4_active_pane_ParamLimits

0xad36,	// (0x00041264) tabs_4_active_pane

0xad47,	// (0x00041275) tabs_4_passive_pane_ParamLimits

0xad47,	// (0x00041275) tabs_4_passive_pane

0xad58,	// (0x00041286) tabs_4_passive_pane_cp_ParamLimits

0xad58,	// (0x00041286) tabs_4_passive_pane_cp

0xad69,	// (0x00041297) tabs_4_passive_pane_cp2_ParamLimits

0xad69,	// (0x00041297) tabs_4_passive_pane_cp2

0xad12,	// (0x00041240) tabs_2_long_active_pane_ParamLimits

0xad12,	// (0x00041240) tabs_2_long_active_pane

0xad24,	// (0x00041252) tabs_2_long_passive_pane_ParamLimits

0xad24,	// (0x00041252) tabs_2_long_passive_pane

0xacd9,	// (0x00041207) tabs_3_long_active_pane_ParamLimits

0xacd9,	// (0x00041207) tabs_3_long_active_pane

0xacec,	// (0x0004121a) tabs_3_long_passive_pane_ParamLimits

0xacec,	// (0x0004121a) tabs_3_long_passive_pane

0xacff,	// (0x0004122d) tabs_3_long_passive_pane_cp_ParamLimits

0xacff,	// (0x0004122d) tabs_3_long_passive_pane_cp

0x0b2a,	// (0x00037058) volume_small_pane_g1

0xac88,	// (0x000411b6) volume_small_pane_g2

0xac91,	// (0x000411bf) volume_small_pane_g3

0xac9a,	// (0x000411c8) volume_small_pane_g4

0xaca3,	// (0x000411d1) volume_small_pane_g5

0xacac,	// (0x000411da) volume_small_pane_g6

0xacb5,	// (0x000411e3) volume_small_pane_g7

0xacbe,	// (0x000411ec) volume_small_pane_g8

0xacc7,	// (0x000411f5) volume_small_pane_g9

0xacd0,	// (0x000411fe) volume_small_pane_g10

0x0009,

0xf88c,	// (0x00045dba) volume_small_pane_g

0xb7c5,	// (0x00041cf3) bg_active_tab_pane_cp2_ParamLimits

0xb7c5,	// (0x00041cf3) bg_active_tab_pane_cp2

0x96c3,	// (0x0003fbf1) tabs_3_active_pane_g1

0x96cb,	// (0x0003fbf9) tabs_3_active_pane_t1

0xb7c5,	// (0x00041cf3) bg_passive_tab_pane_cp2_ParamLimits

0xb7c5,	// (0x00041cf3) bg_passive_tab_pane_cp2

0x96c3,	// (0x0003fbf1) tabs_3_passive_pane_g1

0x96cb,	// (0x0003fbf9) tabs_3_passive_pane_t1

0xb7c5,	// (0x00041cf3) bg_active_tab_pane_cp3_ParamLimits

0xb7c5,	// (0x00041cf3) bg_active_tab_pane_cp3

0x96dd,	// (0x0003fc0b) tabs_4_active_pane_g1

0x96e5,	// (0x0003fc13) tabs_4_active_pane_t1

0xb7c5,	// (0x00041cf3) bg_passive_tab_pane_cp3_ParamLimits

0xb7c5,	// (0x00041cf3) bg_passive_tab_pane_cp3

0x96dd,	// (0x0003fc0b) tabs_4_1_passive_pane_g1

0x96e5,	// (0x0003fc13) tabs_4_1_passive_pane_t1

0x28db,	// (0x00038e09) list_highlight_pane_cp2

0xc812,	// (0x00042d40) list_set_pane_ParamLimits

0xc812,	// (0x00042d40) list_set_pane

0xc8d4,	// (0x00042e02) main_pane_set_t1_ParamLimits

0xc8d4,	// (0x00042e02) main_pane_set_t1

0xc8f4,	// (0x00042e22) main_pane_set_t2_ParamLimits

0xc8f4,	// (0x00042e22) main_pane_set_t2

0xc908,	// (0x00042e36) main_pane_set_t3_ParamLimits

0xc908,	// (0x00042e36) main_pane_set_t3

0xc91c,	// (0x00042e4a) main_pane_set_t4_ParamLimits

0xc91c,	// (0x00042e4a) main_pane_set_t4

0x0003,

0xf95c,	// (0x00045e8a) main_pane_set_t_ParamLimits

0xf95c,	// (0x00045e8a) main_pane_set_t

0xc930,	// (0x00042e5e) setting_code_pane

0x433c,	// (0x0003a86a) setting_slider_graphic_pane

0x433c,	// (0x0003a86a) setting_slider_pane

0x433c,	// (0x0003a86a) setting_text_pane

0x433c,	// (0x0003a86a) setting_volume_pane

0xee10,	// (0x0004533e) volume_set_pane

0xb7d3,	// (0x00041d01) bg_set_opt_pane_cp

0xee1a,	// (0x00045348) setting_slider_pane_t1

0xee33,	// (0x00045361) setting_slider_pane_t2

0xee4d,	// (0x0004537b) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00045a67) setting_slider_pane_t

0xee65,	// (0x00045393) slider_set_pane

0xb777,	// (0x00041ca5) bg_set_opt_pane_cp2

0xb7e1,	// (0x00041d0f) setting_slider_graphic_pane_g1

0xee7b,	// (0x000453a9) setting_slider_graphic_pane_t1

0xee8b,	// (0x000453b9) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00045a6e) setting_slider_graphic_pane_t

0xee9b,	// (0x000453c9) slider_set_pane_cp

0xb777,	// (0x00041ca5) input_focus_pane_cp1

0x41d5,	// (0x0003a703) list_set_text_pane

0xb76d,	// (0x00041c9b) setting_text_pane_g1

0xb777,	// (0x00041ca5) input_focus_pane_cp2

0xb76d,	// (0x00041c9b) setting_code_pane_g1

0xb7ea,	// (0x00041d18) setting_code_pane_t1

0xd270,	// (0x0004379e) set_text_pane_t1_ParamLimits

0xd270,	// (0x0004379e) set_text_pane_t1

0xbe6d,	// (0x0004239b) set_opt_bg_pane_g1

0xbe75,	// (0x000423a3) set_opt_bg_pane_g2

0x41ad,	// (0x0003a6db) set_opt_bg_pane_g3

0xbe85,	// (0x000423b3) set_opt_bg_pane_g4

0xbe8d,	// (0x000423bb) set_opt_bg_pane_g5

0xbe95,	// (0x000423c3) set_opt_bg_pane_g6

0x41b7,	// (0x0003a6e5) set_opt_bg_pane_g7

0x41c1,	// (0x0003a6ef) set_opt_bg_pane_g8

0x41cb,	// (0x0003a6f9) set_opt_bg_pane_g9

0x0008,

0xf949,	// (0x00045e77) set_opt_bg_pane_g

0x41a0,	// (0x0003a6ce) slider_set_pane_g1

0x0d36,	// (0x00037264) slider_set_pane_g2

0x0006,

0xf93a,	// (0x00045e68) slider_set_pane_g

0x0c96,	// (0x000371c4) volume_set_pane_g1

0x0ca0,	// (0x000371ce) volume_set_pane_g2

0x0caa,	// (0x000371d8) volume_set_pane_g3

0x0cb4,	// (0x000371e2) volume_set_pane_g4

0x0cbe,	// (0x000371ec) volume_set_pane_g5

0x0cc8,	// (0x000371f6) volume_set_pane_g6

0x0cd2,	// (0x00037200) volume_set_pane_g7

0x0cdc,	// (0x0003720a) volume_set_pane_g8

0x0ce6,	// (0x00037214) volume_set_pane_g9

0x0cf0,	// (0x0003721e) volume_set_pane_g10

0x0009,

0xf912,	// (0x00045e40) volume_set_pane_g

0x96f7,	// (0x0003fc25) indicator_pane_ParamLimits

0x96f7,	// (0x0003fc25) indicator_pane

0x9723,	// (0x0003fc51) main_idle_pane_g2_ParamLimits

0x9723,	// (0x0003fc51) main_idle_pane_g2

0x975b,	// (0x0003fc89) main_pane_idle_g1_ParamLimits

0x975b,	// (0x0003fc89) main_pane_idle_g1

0xb7f8,	// (0x00041d26) popup_clock_digital_analogue_window_ParamLimits

0xb7f8,	// (0x00041d26) popup_clock_digital_analogue_window

0x9785,	// (0x0003fcb3) soft_indicator_pane_ParamLimits

0x9785,	// (0x0003fcb3) soft_indicator_pane

0x97a1,	// (0x0003fccf) wallpaper_pane_ParamLimits

0x97a1,	// (0x0003fccf) wallpaper_pane

0xb76d,	// (0x00041c9b) wallpaper_pane_g1

0x97b3,	// (0x0003fce1) indicator_pane_g1_ParamLimits

0x97b3,	// (0x0003fce1) indicator_pane_g1

0x4616,	// (0x0003ab44) navi_navi_icon_text_pane_srt_g1

0xb826,	// (0x00041d54) soft_indicator_pane_t1

0xb840,	// (0x00041d6e) aid_ps_area_pane

0x97cc,	// (0x0003fcfa) aid_ps_clock_pane

0xb851,	// (0x00041d7f) aid_ps_indicator_pane

0xb85d,	// (0x00041d8b) indicator_ps_pane_ParamLimits

0xb85d,	// (0x00041d8b) indicator_ps_pane

0xb86c,	// (0x00041d9a) power_save_pane_g1_ParamLimits

0xb86c,	// (0x00041d9a) power_save_pane_g1

0xb878,	// (0x00041da6) power_save_pane_g2_ParamLimits

0xb878,	// (0x00041da6) power_save_pane_g2

0xec43,	// (0x00045171) aid_navinavi_width_pane

0xb840,	// (0x00041d6e) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00045a73) power_save_pane_g_ParamLimits

0xf545,	// (0x00045a73) power_save_pane_g

0xb886,	// (0x00041db4) power_save_pane_t1_ParamLimits

0xb886,	// (0x00041db4) power_save_pane_t1

0x97cc,	// (0x0003fcfa) aid_ps_clock_pane_ParamLimits

0xb851,	// (0x00041d7f) aid_ps_indicator_pane_ParamLimits

0xb898,	// (0x00041dc6) power_save_pane_t4_ParamLimits

0xb898,	// (0x00041dc6) power_save_pane_t4

0x0001,

0xf54a,	// (0x00045a78) power_save_pane_t_ParamLimits

0xf54a,	// (0x00045a78) power_save_pane_t

0xb8c2,	// (0x00041df0) power_save_t3_ParamLimits

0xb8c2,	// (0x00041df0) power_save_t3

0xb8ad,	// (0x00041ddb) power_save_t2_ParamLimits

0xb8ad,	// (0x00041ddb) power_save_t2

0xb8d7,	// (0x00041e05) indicator_ps_pane_g1

0x97da,	// (0x0003fd08) ai_gene_pane_ParamLimits

0x97da,	// (0x0003fd08) ai_gene_pane

0x97f1,	// (0x0003fd1f) ai_links_pane_ParamLimits

0x97f1,	// (0x0003fd1f) ai_links_pane

0x9809,	// (0x0003fd37) indicator_pane_cp1_ParamLimits

0x9809,	// (0x0003fd37) indicator_pane_cp1

0x9818,	// (0x0003fd46) main_pane_idle_g1_cp_ParamLimits

0x9818,	// (0x0003fd46) main_pane_idle_g1_cp

0xb8e0,	// (0x00041e0e) popup_ai_links_title_window

0x9830,	// (0x0003fd5e) soft_indicator_pane_cp1_ParamLimits

0x9830,	// (0x0003fd5e) soft_indicator_pane_cp1

0x3f89,	// (0x0003a4b7) ai_links_pane_g1

0x3f92,	// (0x0003a4c0) grid_ai_links_pane

0xc74a,	// (0x00042c78) ai_gene_pane_1

0x3f77,	// (0x0003a4a5) ai_gene_pane_2

0x3f80,	// (0x0003a4ae) list_highlight_pane_cp4

0xc726,	// (0x00042c54) cell_ai_link_pane_ParamLimits

0xc726,	// (0x00042c54) cell_ai_link_pane

0x3f46,	// (0x0003a474) cell_ai_link_pane_g1

0xbad4,	// (0x00042002) cell_ai_link_pane_g2

0x0001,

0xf8ed,	// (0x00045e1b) cell_ai_link_pane_g

0xb777,	// (0x00041ca5) grid_highlight_cp2

0xb777,	// (0x00041ca5) bg_popup_sub_pane_cp1

0xb8f7,	// (0x00041e25) popup_ai_links_title_window_t1

0x3e92,	// (0x0003a3c0) ai_gene_pane_1_g1_ParamLimits

0x3e92,	// (0x0003a3c0) ai_gene_pane_1_g1

0x3e9e,	// (0x0003a3cc) ai_gene_pane_1_g2_ParamLimits

0x3e9e,	// (0x0003a3cc) ai_gene_pane_1_g2

0x0001,

0xf8e3,	// (0x00045e11) ai_gene_pane_1_g_ParamLimits

0xf8e3,	// (0x00045e11) ai_gene_pane_1_g

0x3eab,	// (0x0003a3d9) ai_gene_pane_1_t1_ParamLimits

0x3eab,	// (0x0003a3d9) ai_gene_pane_1_t1

0x3edf,	// (0x0003a40d) grid_ai_soft_ind_pane

0x3e7d,	// (0x0003a3ab) ai_gene_pane_2_t1_ParamLimits

0x3e7d,	// (0x0003a3ab) ai_gene_pane_2_t1

0x9844,	// (0x0003fd72) main_pane_empty_t1_ParamLimits

0x9844,	// (0x0003fd72) main_pane_empty_t1

0x985c,	// (0x0003fd8a) main_pane_empty_t2_ParamLimits

0x985c,	// (0x0003fd8a) main_pane_empty_t2

0x9871,	// (0x0003fd9f) main_pane_empty_t3_ParamLimits

0x9871,	// (0x0003fd9f) main_pane_empty_t3

0x9883,	// (0x0003fdb1) main_pane_empty_t4_ParamLimits

0x9883,	// (0x0003fdb1) main_pane_empty_t4

0x9895,	// (0x0003fdc3) main_pane_empty_t5_ParamLimits

0x9895,	// (0x0003fdc3) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00045a7d) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00045a7d) main_pane_empty_t

0xbefc,	// (0x0004242a) bg_popup_window_pane_ParamLimits

0xbefc,	// (0x0004242a) bg_popup_window_pane

0x3bdf,	// (0x0003a10d) find_popup_pane_cp2_ParamLimits

0x3bdf,	// (0x0003a10d) find_popup_pane_cp2

0x3beb,	// (0x0003a119) heading_pane_ParamLimits

0x3beb,	// (0x0003a119) heading_pane

0xb777,	// (0x00041ca5) bg_popup_sub_pane

0xc655,	// (0x00042b83) bg_popup_window_pane_g1_ParamLimits

0xc655,	// (0x00042b83) bg_popup_window_pane_g1

0xc664,	// (0x00042b92) bg_popup_window_pane_g2_ParamLimits

0xc664,	// (0x00042b92) bg_popup_window_pane_g2

0xc670,	// (0x00042b9e) bg_popup_window_pane_g3_ParamLimits

0xc670,	// (0x00042b9e) bg_popup_window_pane_g3

0xc67c,	// (0x00042baa) bg_popup_window_pane_g4_ParamLimits

0xc67c,	// (0x00042baa) bg_popup_window_pane_g4

0xc68b,	// (0x00042bb9) bg_popup_window_pane_g5_ParamLimits

0xc68b,	// (0x00042bb9) bg_popup_window_pane_g5

0xc69b,	// (0x00042bc9) bg_popup_window_pane_g6_ParamLimits

0xc69b,	// (0x00042bc9) bg_popup_window_pane_g6

0xc6a7,	// (0x00042bd5) bg_popup_window_pane_g7_ParamLimits

0xc6a7,	// (0x00042bd5) bg_popup_window_pane_g7

0xc6b6,	// (0x00042be4) bg_popup_window_pane_g8_ParamLimits

0xc6b6,	// (0x00042be4) bg_popup_window_pane_g8

0xc6c5,	// (0x00042bf3) bg_popup_window_pane_g9_ParamLimits

0xc6c5,	// (0x00042bf3) bg_popup_window_pane_g9

0x3bc5,	// (0x0003a0f3) bg_popup_window_pane_g10_ParamLimits

0x3bc5,	// (0x0003a0f3) bg_popup_window_pane_g10

0x0009,

0xf8ab,	// (0x00045dd9) bg_popup_window_pane_g_ParamLimits

0xf8ab,	// (0x00045dd9) bg_popup_window_pane_g

0x3aee,	// (0x0003a01c) bg_popup_heading_pane_ParamLimits

0x3aee,	// (0x0003a01c) bg_popup_heading_pane

0x0e61,	// (0x0003738f) tabs_4_passive_pane_cp_srt_ParamLimits

0x0e61,	// (0x0003738f) tabs_4_passive_pane_cp_srt

0x0e73,	// (0x000373a1) tabs_4_passive_pane_srt_ParamLimits

0x3b02,	// (0x0003a030) heading_pane_g2

0x0e73,	// (0x000373a1) tabs_4_passive_pane_srt

0x2e85,	// (0x000393b3) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2e85,	// (0x000393b3) bg_passive_tab_pane_cp3_srt

0x3b0a,	// (0x0003a038) heading_pane_t1_ParamLimits

0x3b0a,	// (0x0003a038) heading_pane_t1

0x3b21,	// (0x0003a04f) heading_pane_t2_ParamLimits

0x3b21,	// (0x0003a04f) heading_pane_t2

0x0001,

0xf8a6,	// (0x00045dd4) heading_pane_t_ParamLimits

0xf8a6,	// (0x00045dd4) heading_pane_t

0x3619,	// (0x00039b47) bg_popup_heading_pane_g1

0x36c8,	// (0x00039bf6) bg_popup_heading_pane_g2

0x36d2,	// (0x00039c00) bg_popup_heading_pane_g3

0x36dc,	// (0x00039c0a) bg_popup_heading_pane_g4

0x36e6,	// (0x00039c14) bg_popup_heading_pane_g5

0x36f0,	// (0x00039c1e) bg_popup_heading_pane_g6

0x36f8,	// (0x00039c26) bg_popup_heading_pane_g7

0x3700,	// (0x00039c2e) bg_popup_heading_pane_g8

0x370a,	// (0x00039c38) bg_popup_heading_pane_g9

0x0008,

0xf862,	// (0x00045d90) bg_popup_heading_pane_g

0x2e11,	// (0x0003933f) bg_popup_sub_pane_g1

0x2e21,	// (0x0003934f) bg_popup_sub_pane_g2

0x2e19,	// (0x00039347) bg_popup_sub_pane_g3

0x2e31,	// (0x0003935f) bg_popup_sub_pane_g4

0x2e29,	// (0x00039357) bg_popup_sub_pane_g5

0x2e39,	// (0x00039367) bg_popup_sub_pane_g6

0x2e41,	// (0x0003936f) bg_popup_sub_pane_g7

0x2e51,	// (0x0003937f) bg_popup_sub_pane_g8

0x2e49,	// (0x00039377) bg_popup_sub_pane_g9

0x0008,

0xf83c,	// (0x00045d6a) bg_popup_sub_pane_g

0xb7c5,	// (0x00041cf3) bg_popup_window_pane_cp5_ParamLimits

0xb7c5,	// (0x00041cf3) bg_popup_window_pane_cp5

0xb914,	// (0x00041e42) popup_note_window_g1_ParamLimits

0xb914,	// (0x00041e42) popup_note_window_g1

0xb920,	// (0x00041e4e) popup_note_window_t1_ParamLimits

0xb920,	// (0x00041e4e) popup_note_window_t1

0xb936,	// (0x00041e64) popup_note_window_t2_ParamLimits

0xb936,	// (0x00041e64) popup_note_window_t2

0xb94c,	// (0x00041e7a) popup_note_window_t3_ParamLimits

0xb94c,	// (0x00041e7a) popup_note_window_t3

0xb962,	// (0x00041e90) popup_note_window_t4_ParamLimits

0xb962,	// (0x00041e90) popup_note_window_t4

0xb98a,	// (0x00041eb8) popup_note_window_t5_ParamLimits

0xb98a,	// (0x00041eb8) popup_note_window_t5

0x0004,

0xf55a,	// (0x00045a88) popup_note_window_t_ParamLimits

0xf55a,	// (0x00045a88) popup_note_window_t

0xb9d4,	// (0x00041f02) bg_popup_window_pane_cp6_ParamLimits

0xb9d4,	// (0x00041f02) bg_popup_window_pane_cp6

0x3595,	// (0x00039ac3) popup_note_image_window_g1_ParamLimits

0x3595,	// (0x00039ac3) popup_note_image_window_g1

0x35a1,	// (0x00039acf) popup_note_image_window_g2_ParamLimits

0x35a1,	// (0x00039acf) popup_note_image_window_g2

0x0001,

0xf830,	// (0x00045d5e) popup_note_image_window_g_ParamLimits

0xf830,	// (0x00045d5e) popup_note_image_window_g

0x35ba,	// (0x00039ae8) popup_note_image_window_t1_ParamLimits

0x35ba,	// (0x00039ae8) popup_note_image_window_t1

0x35d3,	// (0x00039b01) popup_note_image_window_t2_ParamLimits

0x35d3,	// (0x00039b01) popup_note_image_window_t2

0x35ec,	// (0x00039b1a) popup_note_image_window_t3_ParamLimits

0x35ec,	// (0x00039b1a) popup_note_image_window_t3

0x0002,

0xf835,	// (0x00045d63) popup_note_image_window_t_ParamLimits

0xf835,	// (0x00045d63) popup_note_image_window_t

0x3455,	// (0x00039983) bg_popup_window_pane_cp7_ParamLimits

0x3455,	// (0x00039983) bg_popup_window_pane_cp7

0x3485,	// (0x000399b3) popup_note_wait_window_g1_ParamLimits

0x3485,	// (0x000399b3) popup_note_wait_window_g1

0x3491,	// (0x000399bf) popup_note_wait_window_g2_ParamLimits

0x3491,	// (0x000399bf) popup_note_wait_window_g2

0x0002,

0xf81e,	// (0x00045d4c) popup_note_wait_window_g_ParamLimits

0xf81e,	// (0x00045d4c) popup_note_wait_window_g

0x34a9,	// (0x000399d7) popup_note_wait_window_t1_ParamLimits

0x34a9,	// (0x000399d7) popup_note_wait_window_t1

0x34d0,	// (0x000399fe) popup_note_wait_window_t2_ParamLimits

0x34d0,	// (0x000399fe) popup_note_wait_window_t2

0x34ee,	// (0x00039a1c) popup_note_wait_window_t3_ParamLimits

0x34ee,	// (0x00039a1c) popup_note_wait_window_t3

0x3501,	// (0x00039a2f) popup_note_wait_window_t4_ParamLimits

0x3501,	// (0x00039a2f) popup_note_wait_window_t4

0x0004,

0xf825,	// (0x00045d53) popup_note_wait_window_t_ParamLimits

0xf825,	// (0x00045d53) popup_note_wait_window_t

0x3526,	// (0x00039a54) wait_bar_pane_ParamLimits

0x3526,	// (0x00039a54) wait_bar_pane

0xb777,	// (0x00041ca5) wait_anim_pane

0xb777,	// (0x00041ca5) wait_border_pane

0xb76d,	// (0x00041c9b) wait_anim_pane_g1

0xb76d,	// (0x00041c9b) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x00045c0c) wait_anim_pane_g

0x33f9,	// (0x00039927) wait_border_pane_g1

0x3404,	// (0x00039932) wait_border_pane_g2

0x340d,	// (0x0003993b) wait_border_pane_g3

0x0002,

0xf817,	// (0x00045d45) wait_border_pane_g

0x3263,	// (0x00039791) bg_popup_window_pane_cp16_ParamLimits

0x3263,	// (0x00039791) bg_popup_window_pane_cp16

0x3363,	// (0x00039891) indicator_popup_pane_cp4_ParamLimits

0x3363,	// (0x00039891) indicator_popup_pane_cp4

0x3377,	// (0x000398a5) popup_query_data_window_t1_ParamLimits

0x3377,	// (0x000398a5) popup_query_data_window_t1

0x3389,	// (0x000398b7) popup_query_data_window_t2_ParamLimits

0x3389,	// (0x000398b7) popup_query_data_window_t2

0x33a2,	// (0x000398d0) popup_query_data_window_t3_ParamLimits

0x33a2,	// (0x000398d0) popup_query_data_window_t3

0x0002,

0xf810,	// (0x00045d3e) popup_query_data_window_t_ParamLimits

0xf810,	// (0x00045d3e) popup_query_data_window_t

0x33bc,	// (0x000398ea) query_popup_data_pane_ParamLimits

0x33bc,	// (0x000398ea) query_popup_data_pane

0x33d0,	// (0x000398fe) query_popup_data_pane_cp1_ParamLimits

0x33d0,	// (0x000398fe) query_popup_data_pane_cp1

0x3263,	// (0x00039791) bg_popup_window_pane_cp10_ParamLimits

0x3263,	// (0x00039791) bg_popup_window_pane_cp10

0x3295,	// (0x000397c3) indicator_popup_pane_ParamLimits

0x3295,	// (0x000397c3) indicator_popup_pane

0x32b7,	// (0x000397e5) popup_query_code_window_t1_ParamLimits

0x32b7,	// (0x000397e5) popup_query_code_window_t1

0x32d1,	// (0x000397ff) popup_query_code_window_t2_ParamLimits

0x32d1,	// (0x000397ff) popup_query_code_window_t2

0x331a,	// (0x00039848) popup_query_code_window_t3_ParamLimits

0x331a,	// (0x00039848) popup_query_code_window_t3

0x0002,

0xf809,	// (0x00045d37) popup_query_code_window_t_ParamLimits

0xf809,	// (0x00045d37) popup_query_code_window_t

0x3349,	// (0x00039877) query_popup_pane_ParamLimits

0x3349,	// (0x00039877) query_popup_pane

0xb9d4,	// (0x00041f02) bg_popup_window_pane_cp15_ParamLimits

0xb9d4,	// (0x00041f02) bg_popup_window_pane_cp15

0xb9f4,	// (0x00041f22) indicator_popup_pane_cp1_ParamLimits

0xb9f4,	// (0x00041f22) indicator_popup_pane_cp1

0xba07,	// (0x00041f35) indicator_popup_pane_cp2_ParamLimits

0xba07,	// (0x00041f35) indicator_popup_pane_cp2

0xba22,	// (0x00041f50) popup_query_data_code_window_g1_ParamLimits

0xba22,	// (0x00041f50) popup_query_data_code_window_g1

0xba35,	// (0x00041f63) popup_query_data_code_window_t1_ParamLimits

0xba35,	// (0x00041f63) popup_query_data_code_window_t1

0xba47,	// (0x00041f75) popup_query_data_code_window_t2_ParamLimits

0xba47,	// (0x00041f75) popup_query_data_code_window_t2

0xba59,	// (0x00041f87) popup_query_data_code_window_t3_ParamLimits

0xba59,	// (0x00041f87) popup_query_data_code_window_t3

0xba6f,	// (0x00041f9d) popup_query_data_code_window_t4_ParamLimits

0xba6f,	// (0x00041f9d) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00045a93) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00045a93) popup_query_data_code_window_t

0x0a16,	// (0x00036f44) list_single_midp_graphic_pane_g3

0xba89,	// (0x00041fb7) query_popup_data_pane_cp2_ParamLimits

0xba9c,	// (0x00041fca) query_popup_pane_cp2_ParamLimits

0xba9c,	// (0x00041fca) query_popup_pane_cp2

0xb777,	// (0x00041ca5) bg_popup_window_pane_cp11

0x3247,	// (0x00039775) heading_pane_cp5

0x324f,	// (0x0003977d) listscroll_popup_info_pane

0xb777,	// (0x00041ca5) input_focus_pane_cp3

0xbab7,	// (0x00041fe5) query_popup_pane_t1

0xbac5,	// (0x00041ff3) list_popup_info_pane_ParamLimits

0xbac5,	// (0x00041ff3) list_popup_info_pane

0xbad4,	// (0x00042002) listscroll_popup_info_pane_g1

0xbadc,	// (0x0004200a) scroll_pane_cp7

0xbae6,	// (0x00042014) popup_info_list_pane_t1_ParamLimits

0xbae6,	// (0x00042014) popup_info_list_pane_t1

0xbb00,	// (0x0004202e) popup_info_list_pane_t2_ParamLimits

0xbb00,	// (0x0004202e) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00045a9c) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00045a9c) popup_info_list_pane_t

0xb777,	// (0x00041ca5) bg_popup_window_pane_cp12

0x4630,	// (0x0003ab5e) find_popup_pane

0xb7d3,	// (0x00041d01) bg_popup_window_pane_cp3

0xbb1a,	// (0x00042048) heading_pane_cp3

0xbb29,	// (0x00042057) listscroll_popup_graphic_pane

0xb777,	// (0x00041ca5) bg_popup_window_pane_cp4

0x98f7,	// (0x0003fe25) heading_pane_cp4

0xbb39,	// (0x00042067) listscroll_popup_colour_pane

0x9901,	// (0x0003fe2f) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9901,	// (0x0003fe2f) cell_large_graphic_colour_none_popup_pane

0x9915,	// (0x0003fe43) grid_large_graphic_colour_popup_pane_ParamLimits

0x9915,	// (0x0003fe43) grid_large_graphic_colour_popup_pane

0x993d,	// (0x0003fe6b) listscroll_popup_colour_pane_g1_ParamLimits

0x993d,	// (0x0003fe6b) listscroll_popup_colour_pane_g1

0x9954,	// (0x0003fe82) listscroll_popup_colour_pane_g2_ParamLimits

0x9954,	// (0x0003fe82) listscroll_popup_colour_pane_g2

0x996b,	// (0x0003fe99) listscroll_popup_colour_pane_g3_ParamLimits

0x996b,	// (0x0003fe99) listscroll_popup_colour_pane_g3

0x997b,	// (0x0003fea9) listscroll_popup_colour_pane_g4_ParamLimits

0x997b,	// (0x0003fea9) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00045aa1) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00045aa1) listscroll_popup_colour_pane_g

0xbb41,	// (0x0004206f) scroll_pane_cp6_ParamLimits

0xbb41,	// (0x0004206f) scroll_pane_cp6

0x998b,	// (0x0003feb9) cell_large_graphic_colour_popup_pane_ParamLimits

0x998b,	// (0x0003feb9) cell_large_graphic_colour_popup_pane

0xbb53,	// (0x00042081) cell_large_graphic_colour_none_popup_pane_t1

0xb777,	// (0x00041ca5) grid_highlight_pane_cp5

0xbb62,	// (0x00042090) cell_large_graphic_colour_popup_pane_g1

0xbb6a,	// (0x00042098) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00045aaa) cell_large_graphic_colour_popup_pane_g

0xbb72,	// (0x000420a0) cell_large_graphic_colour_popup_pane_g2_copy1

0xbb7b,	// (0x000420a9) grid_highlight_pane_cp4

0xbb83,	// (0x000420b1) bg_popup_window_pane_cp8_ParamLimits

0xbb83,	// (0x000420b1) bg_popup_window_pane_cp8

0xbb9e,	// (0x000420cc) popup_snote_single_text_window_g1_ParamLimits

0xbb9e,	// (0x000420cc) popup_snote_single_text_window_g1

0xbbb0,	// (0x000420de) popup_snote_single_text_window_t1_ParamLimits

0xbbb0,	// (0x000420de) popup_snote_single_text_window_t1

0xbbc3,	// (0x000420f1) popup_snote_single_text_window_t2_ParamLimits

0xbbc3,	// (0x000420f1) popup_snote_single_text_window_t2

0xbbd6,	// (0x00042104) popup_snote_single_text_window_t3_ParamLimits

0xbbd6,	// (0x00042104) popup_snote_single_text_window_t3

0xbc0f,	// (0x0004213d) popup_snote_single_text_window_t4_ParamLimits

0xbc0f,	// (0x0004213d) popup_snote_single_text_window_t4

0xbc43,	// (0x00042171) popup_snote_single_text_window_t5_ParamLimits

0xbc43,	// (0x00042171) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00045aaf) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00045aaf) popup_snote_single_text_window_t

0xbc72,	// (0x000421a0) bg_popup_window_pane_cp9_ParamLimits

0xbc72,	// (0x000421a0) bg_popup_window_pane_cp9

0xbb9e,	// (0x000420cc) popup_snote_single_graphic_window_g1_ParamLimits

0xbb9e,	// (0x000420cc) popup_snote_single_graphic_window_g1

0xbc80,	// (0x000421ae) popup_snote_single_graphic_window_g2_ParamLimits

0xbc80,	// (0x000421ae) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00045aba) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00045aba) popup_snote_single_graphic_window_g

0xbc8c,	// (0x000421ba) popup_snote_single_graphic_window_t1_ParamLimits

0xbc8c,	// (0x000421ba) popup_snote_single_graphic_window_t1

0xbc9f,	// (0x000421cd) popup_snote_single_graphic_window_t2_ParamLimits

0xbc9f,	// (0x000421cd) popup_snote_single_graphic_window_t2

0xbcb2,	// (0x000421e0) popup_snote_single_graphic_window_t3_ParamLimits

0xbcb2,	// (0x000421e0) popup_snote_single_graphic_window_t3

0xbceb,	// (0x00042219) popup_snote_single_graphic_window_t4_ParamLimits

0xbceb,	// (0x00042219) popup_snote_single_graphic_window_t4

0xbd1f,	// (0x0004224d) popup_snote_single_graphic_window_t5_ParamLimits

0xbd1f,	// (0x0004224d) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00045abf) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00045abf) popup_snote_single_graphic_window_t

0x456e,	// (0x0003aa9c) grid_graphic_popup_pane_ParamLimits

0x456e,	// (0x0003aa9c) grid_graphic_popup_pane

0x459c,	// (0x0003aaca) listscroll_popup_graphic_pane_g1_ParamLimits

0x459c,	// (0x0003aaca) listscroll_popup_graphic_pane_g1

0xca3c,	// (0x00042f6a) listscroll_popup_graphic_pane_g2_ParamLimits

0xca3c,	// (0x00042f6a) listscroll_popup_graphic_pane_g2

0x0001,

0xf986,	// (0x00045eb4) listscroll_popup_graphic_pane_g_ParamLimits

0xf986,	// (0x00045eb4) listscroll_popup_graphic_pane_g

0x45c4,	// (0x0003aaf2) scroll_pane_cp5

0xc9f4,	// (0x00042f22) cell_graphic_popup_pane_ParamLimits

0xc9f4,	// (0x00042f22) cell_graphic_popup_pane

0x44e7,	// (0x0003aa15) cell_graphic_popup_pane_g1

0x44ef,	// (0x0003aa1d) cell_graphic_popup_pane_g2

0xbb72,	// (0x000420a0) cell_graphic_popup_pane_g3

0x0002,

0xf97f,	// (0x00045ead) cell_graphic_popup_pane_g

0x44f8,	// (0x0003aa26) cell_graphic_popup_pane_t2

0xbb7b,	// (0x000420a9) grid_highlight_pane_cp3

0xbd60,	// (0x0004228e) list_gen_pane_ParamLimits

0xbd60,	// (0x0004228e) list_gen_pane

0xbd88,	// (0x000422b6) scroll_pane

0xc9ab,	// (0x00042ed9) bg_list_pane_g1_ParamLimits

0xc9ab,	// (0x00042ed9) bg_list_pane_g1

0x445c,	// (0x0003a98a) bg_list_pane_g2_ParamLimits

0x445c,	// (0x0003a98a) bg_list_pane_g2

0x4471,	// (0x0003a99f) bg_list_pane_g3_ParamLimits

0x4471,	// (0x0003a99f) bg_list_pane_g3

0x4485,	// (0x0003a9b3) bg_list_pane_g4_ParamLimits

0x4485,	// (0x0003a9b3) bg_list_pane_g4

0xc9c8,	// (0x00042ef6) bg_list_pane_g5_ParamLimits

0xc9c8,	// (0x00042ef6) bg_list_pane_g5

0x0004,

0xf974,	// (0x00045ea2) bg_list_pane_g_ParamLimits

0xf974,	// (0x00045ea2) bg_list_pane_g

0xc96e,	// (0x00042e9c) list_double2_graphic_large_graphic_pane_ParamLimits

0xc96e,	// (0x00042e9c) list_double2_graphic_large_graphic_pane

0xc96e,	// (0x00042e9c) list_double2_graphic_pane_ParamLimits

0xc96e,	// (0x00042e9c) list_double2_graphic_pane

0xc96e,	// (0x00042e9c) list_double2_large_graphic_pane_ParamLimits

0xc96e,	// (0x00042e9c) list_double2_large_graphic_pane

0xc96e,	// (0x00042e9c) list_double2_pane_ParamLimits

0xc96e,	// (0x00042e9c) list_double2_pane

0xc96e,	// (0x00042e9c) list_double_graphic_heading_pane_ParamLimits

0xc96e,	// (0x00042e9c) list_double_graphic_heading_pane

0xc96e,	// (0x00042e9c) list_double_graphic_pane_ParamLimits

0xc96e,	// (0x00042e9c) list_double_graphic_pane

0xc96e,	// (0x00042e9c) list_double_heading_pane_ParamLimits

0xc96e,	// (0x00042e9c) list_double_heading_pane

0xc96e,	// (0x00042e9c) list_double_large_graphic_pane_ParamLimits

0xc96e,	// (0x00042e9c) list_double_large_graphic_pane

0xc96e,	// (0x00042e9c) list_double_number_pane_ParamLimits

0xc96e,	// (0x00042e9c) list_double_number_pane

0xc96e,	// (0x00042e9c) list_double_pane_ParamLimits

0xc96e,	// (0x00042e9c) list_double_pane

0xc96e,	// (0x00042e9c) list_double_time_pane_ParamLimits

0xc96e,	// (0x00042e9c) list_double_time_pane

0xc96e,	// (0x00042e9c) list_setting_number_pane_ParamLimits

0xc96e,	// (0x00042e9c) list_setting_number_pane

0xc96e,	// (0x00042e9c) list_setting_pane_ParamLimits

0xc96e,	// (0x00042e9c) list_setting_pane

0xae1b,	// (0x00041349) list_single_2graphic_pane_ParamLimits

0xae1b,	// (0x00041349) list_single_2graphic_pane

0xae1b,	// (0x00041349) list_single_graphic_heading_pane_ParamLimits

0xae1b,	// (0x00041349) list_single_graphic_heading_pane

0xae1b,	// (0x00041349) list_single_graphic_pane_ParamLimits

0xae1b,	// (0x00041349) list_single_graphic_pane

0xae1b,	// (0x00041349) list_single_heading_pane_ParamLimits

0xae1b,	// (0x00041349) list_single_heading_pane

0xc96e,	// (0x00042e9c) list_single_large_graphic_pane_ParamLimits

0xc96e,	// (0x00042e9c) list_single_large_graphic_pane

0xae1b,	// (0x00041349) list_single_number_heading_pane_ParamLimits

0xae1b,	// (0x00041349) list_single_number_heading_pane

0xae1b,	// (0x00041349) list_single_number_pane_ParamLimits

0xae1b,	// (0x00041349) list_single_number_pane

0xae1b,	// (0x00041349) list_single_pane_ParamLimits

0xae1b,	// (0x00041349) list_single_pane

0xb777,	// (0x00041ca5) list_highlight_pane_cp1

0xd28b,	// (0x000437b9) list_single_pane_g1_ParamLimits

0xd28b,	// (0x000437b9) list_single_pane_g1

0xd297,	// (0x000437c5) list_single_pane_g2_ParamLimits

0xd297,	// (0x000437c5) list_single_pane_g2

0x0001,

0xf5a3,	// (0x00045ad1) list_single_pane_g_ParamLimits

0xf5a3,	// (0x00045ad1) list_single_pane_g

0xd51e,	// (0x00043a4c) list_single_pane_t1_ParamLimits

0xd51e,	// (0x00043a4c) list_single_pane_t1

0xd28b,	// (0x000437b9) list_single_number_pane_g1_ParamLimits

0xd28b,	// (0x000437b9) list_single_number_pane_g1

0xd297,	// (0x000437c5) list_single_number_pane_g2_ParamLimits

0xd297,	// (0x000437c5) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x00045ad1) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x00045ad1) list_single_number_pane_g

0xd449,	// (0x00043977) list_single_number_pane_t1_ParamLimits

0xd449,	// (0x00043977) list_single_number_pane_t1

0xaddd,	// (0x0004130b) list_single_number_pane_t2_ParamLimits

0xaddd,	// (0x0004130b) list_single_number_pane_t2

0x0001,

0xf935,	// (0x00045e63) list_single_number_pane_t_ParamLimits

0xf935,	// (0x00045e63) list_single_number_pane_t

0x99b6,	// (0x0003fee4) list_single_graphic_pane_g1_ParamLimits

0x99b6,	// (0x0003fee4) list_single_graphic_pane_g1

0xd28b,	// (0x000437b9) list_single_graphic_pane_g2_ParamLimits

0xd28b,	// (0x000437b9) list_single_graphic_pane_g2

0xd297,	// (0x000437c5) list_single_graphic_pane_g3_ParamLimits

0xd297,	// (0x000437c5) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00045aca) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00045aca) list_single_graphic_pane_g

0x99c2,	// (0x0003fef0) list_single_graphic_pane_t1_ParamLimits

0x99c2,	// (0x0003fef0) list_single_graphic_pane_t1

0xd28b,	// (0x000437b9) list_single_heading_pane_g1_ParamLimits

0xd28b,	// (0x000437b9) list_single_heading_pane_g1

0xd297,	// (0x000437c5) list_single_heading_pane_g2_ParamLimits

0xd297,	// (0x000437c5) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00045ad1) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00045ad1) list_single_heading_pane_g

0xd2a3,	// (0x000437d1) list_single_heading_pane_t1_ParamLimits

0xd2a3,	// (0x000437d1) list_single_heading_pane_t1

0x99d8,	// (0x0003ff06) list_single_heading_pane_t2_ParamLimits

0x99d8,	// (0x0003ff06) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00045ad6) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00045ad6) list_single_heading_pane_t

0xd28b,	// (0x000437b9) list_single_number_heading_pane_g1_ParamLimits

0xd28b,	// (0x000437b9) list_single_number_heading_pane_g1

0xd297,	// (0x000437c5) list_single_number_heading_pane_g2_ParamLimits

0xd297,	// (0x000437c5) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x00045ad1) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x00045ad1) list_single_number_heading_pane_g

0xd2a3,	// (0x000437d1) list_single_number_heading_pane_t1_ParamLimits

0xd2a3,	// (0x000437d1) list_single_number_heading_pane_t1

0x99ea,	// (0x0003ff18) list_single_number_heading_pane_t2_ParamLimits

0x99ea,	// (0x0003ff18) list_single_number_heading_pane_t2

0xd2b9,	// (0x000437e7) list_single_number_heading_pane_t3_ParamLimits

0xd2b9,	// (0x000437e7) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x00045adb) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x00045adb) list_single_number_heading_pane_t

0xd2cb,	// (0x000437f9) list_single_graphic_heading_pane_g1_ParamLimits

0xd2cb,	// (0x000437f9) list_single_graphic_heading_pane_g1

0x99fc,	// (0x0003ff2a) list_single_graphic_heading_pane_g4_ParamLimits

0x99fc,	// (0x0003ff2a) list_single_graphic_heading_pane_g4

0xd297,	// (0x000437c5) list_single_graphic_heading_pane_g5_ParamLimits

0xd297,	// (0x000437c5) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x00045ae2) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x00045ae2) list_single_graphic_heading_pane_g

0xd2a3,	// (0x000437d1) list_single_graphic_heading_pane_t1_ParamLimits

0xd2a3,	// (0x000437d1) list_single_graphic_heading_pane_t1

0x9a0d,	// (0x0003ff3b) list_single_graphic_heading_pane_t2_ParamLimits

0x9a0d,	// (0x0003ff3b) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x00045ae9) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x00045ae9) list_single_graphic_heading_pane_t

0xd2d7,	// (0x00043805) list_single_large_graphic_pane_g1_ParamLimits

0xd2d7,	// (0x00043805) list_single_large_graphic_pane_g1

0xd2e3,	// (0x00043811) list_single_large_graphic_pane_g2_ParamLimits

0xd2e3,	// (0x00043811) list_single_large_graphic_pane_g2

0xd2ef,	// (0x0004381d) list_single_large_graphic_pane_g3_ParamLimits

0xd2ef,	// (0x0004381d) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x00045aee) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x00045aee) list_single_large_graphic_pane_g

0x3404,	// (0x00039932) wait_border_pane_g2_copy1

0x9a1f,	// (0x0003ff4d) list_single_large_graphic_pane_g4_cp2

0xd2fb,	// (0x00043829) list_single_large_graphic_pane_t1_ParamLimits

0xd2fb,	// (0x00043829) list_single_large_graphic_pane_t1

0x9a27,	// (0x0003ff55) list_double_pane_g1_ParamLimits

0x9a27,	// (0x0003ff55) list_double_pane_g1

0x9a33,	// (0x0003ff61) list_double_pane_g2_ParamLimits

0x9a33,	// (0x0003ff61) list_double_pane_g2

0x0001,

0xf5c7,	// (0x00045af5) list_double_pane_g_ParamLimits

0xf5c7,	// (0x00045af5) list_double_pane_g

0x9a3f,	// (0x0003ff6d) list_double_pane_t1_ParamLimits

0x9a3f,	// (0x0003ff6d) list_double_pane_t1

0x9a55,	// (0x0003ff83) list_double_pane_t2_ParamLimits

0x9a55,	// (0x0003ff83) list_double_pane_t2

0x0001,

0xf5cc,	// (0x00045afa) list_double_pane_t_ParamLimits

0xf5cc,	// (0x00045afa) list_double_pane_t

0x9a67,	// (0x0003ff95) list_double2_pane_g1_ParamLimits

0x9a67,	// (0x0003ff95) list_double2_pane_g1

0x9a78,	// (0x0003ffa6) list_double2_pane_g2_ParamLimits

0x9a78,	// (0x0003ffa6) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x00045aff) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x00045aff) list_double2_pane_g

0x9a84,	// (0x0003ffb2) list_double2_pane_t1_ParamLimits

0x9a84,	// (0x0003ffb2) list_double2_pane_t1

0x9a9a,	// (0x0003ffc8) list_double2_pane_t2_ParamLimits

0x9a9a,	// (0x0003ffc8) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x00045b04) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x00045b04) list_double2_pane_t

0x9a27,	// (0x0003ff55) list_double_number_pane_g1_ParamLimits

0x9a27,	// (0x0003ff55) list_double_number_pane_g1

0x9a33,	// (0x0003ff61) list_double_number_pane_g2_ParamLimits

0x9a33,	// (0x0003ff61) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x00045af5) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x00045af5) list_double_number_pane_g

0x9aac,	// (0x0003ffda) list_double_number_pane_t1_ParamLimits

0x9aac,	// (0x0003ffda) list_double_number_pane_t1

0x9abe,	// (0x0003ffec) list_double_number_pane_t2_ParamLimits

0x9abe,	// (0x0003ffec) list_double_number_pane_t2

0x9ad4,	// (0x00040002) list_double_number_pane_t3_ParamLimits

0x9ad4,	// (0x00040002) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x00045b09) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x00045b09) list_double_number_pane_t

0x9ae6,	// (0x00040014) list_double_graphic_pane_g1_ParamLimits

0x9ae6,	// (0x00040014) list_double_graphic_pane_g1

0x9af2,	// (0x00040020) list_double_graphic_pane_g2_ParamLimits

0x9af2,	// (0x00040020) list_double_graphic_pane_g2

0x9b01,	// (0x0004002f) list_double_graphic_pane_g3_ParamLimits

0x9b01,	// (0x0004002f) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x00045b10) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x00045b10) list_double_graphic_pane_g

0x9b19,	// (0x00040047) list_double_graphic_pane_t1_ParamLimits

0x9b19,	// (0x00040047) list_double_graphic_pane_t1

0x9b2f,	// (0x0004005d) list_double_graphic_pane_t2_ParamLimits

0x9b2f,	// (0x0004005d) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x00045b19) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x00045b19) list_double_graphic_pane_t

0x9b41,	// (0x0004006f) list_double2_graphic_pane_g1_ParamLimits

0x9b41,	// (0x0004006f) list_double2_graphic_pane_g1

0x9b4d,	// (0x0004007b) list_double2_graphic_pane_g2_ParamLimits

0x9b4d,	// (0x0004007b) list_double2_graphic_pane_g2

0x9b59,	// (0x00040087) list_double2_graphic_pane_g3_ParamLimits

0x9b59,	// (0x00040087) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x00045b1e) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x00045b1e) list_double2_graphic_pane_g

0x9b65,	// (0x00040093) list_double2_graphic_pane_t1_ParamLimits

0x9b65,	// (0x00040093) list_double2_graphic_pane_t1

0x9b7b,	// (0x000400a9) list_double2_graphic_pane_t2_ParamLimits

0x9b7b,	// (0x000400a9) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x00045b25) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x00045b25) list_double2_graphic_pane_t

0x9b8d,	// (0x000400bb) list_double_large_graphic_pane_g1_ParamLimits

0x9b8d,	// (0x000400bb) list_double_large_graphic_pane_g1

0x9bac,	// (0x000400da) list_double_large_graphic_pane_g2_ParamLimits

0x9bac,	// (0x000400da) list_double_large_graphic_pane_g2

0x9a33,	// (0x0003ff61) list_double_large_graphic_pane_g3_ParamLimits

0x9a33,	// (0x0003ff61) list_double_large_graphic_pane_g3

0x9bbd,	// (0x000400eb) list_double_large_graphic_pane_g4_ParamLimits

0x9bbd,	// (0x000400eb) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x00045b2a) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x00045b2a) list_double_large_graphic_pane_g

0x9bd0,	// (0x000400fe) list_double_large_graphic_pane_t1_ParamLimits

0x9bd0,	// (0x000400fe) list_double_large_graphic_pane_t1

0x9be9,	// (0x00040117) list_double_large_graphic_pane_t2_ParamLimits

0x9be9,	// (0x00040117) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x00045b35) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x00045b35) list_double_large_graphic_pane_t

0x9bfb,	// (0x00040129) list_double2_large_graphic_pane_g1_ParamLimits

0x9bfb,	// (0x00040129) list_double2_large_graphic_pane_g1

0x9a67,	// (0x0003ff95) list_double2_large_graphic_pane_g2_ParamLimits

0x9a67,	// (0x0003ff95) list_double2_large_graphic_pane_g2

0x9a78,	// (0x0003ffa6) list_double2_large_graphic_pane_g3_ParamLimits

0x9a78,	// (0x0003ffa6) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x00045b3a) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x00045b3a) list_double2_large_graphic_pane_g

0x9c07,	// (0x00040135) list_double2_large_graphic_pane_t1_ParamLimits

0x9c07,	// (0x00040135) list_double2_large_graphic_pane_t1

0x9c1d,	// (0x0004014b) list_double2_large_graphic_pane_t2_ParamLimits

0x9c1d,	// (0x0004014b) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x00045b41) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x00045b41) list_double2_large_graphic_pane_t

0x9c2f,	// (0x0004015d) list_double_heading_pane_g1_ParamLimits

0x9c2f,	// (0x0004015d) list_double_heading_pane_g1

0x9c40,	// (0x0004016e) list_double_heading_pane_g2_ParamLimits

0x9c40,	// (0x0004016e) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x00045b46) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x00045b46) list_double_heading_pane_g

0x9c4c,	// (0x0004017a) list_double_heading_pane_t1_ParamLimits

0x9c4c,	// (0x0004017a) list_double_heading_pane_t1

0x9a9a,	// (0x0003ffc8) list_double_heading_pane_t2_ParamLimits

0x9a9a,	// (0x0003ffc8) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x00045b4b) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x00045b4b) list_double_heading_pane_t

0x9c62,	// (0x00040190) list_double_graphic_heading_pane_g1_ParamLimits

0x9c62,	// (0x00040190) list_double_graphic_heading_pane_g1

0x9c2f,	// (0x0004015d) list_double_graphic_heading_pane_g2_ParamLimits

0x9c2f,	// (0x0004015d) list_double_graphic_heading_pane_g2

0x9c40,	// (0x0004016e) list_double_graphic_heading_pane_g3_ParamLimits

0x9c40,	// (0x0004016e) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x00045b50) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x00045b50) list_double_graphic_heading_pane_g

0x9c6e,	// (0x0004019c) list_double_graphic_heading_pane_t1_ParamLimits

0x9c6e,	// (0x0004019c) list_double_graphic_heading_pane_t1

0x9b7b,	// (0x000400a9) list_double_graphic_heading_pane_t2_ParamLimits

0x9b7b,	// (0x000400a9) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x00045b57) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x00045b57) list_double_graphic_heading_pane_t

0x9bac,	// (0x000400da) list_double_time_pane_g1_ParamLimits

0x9bac,	// (0x000400da) list_double_time_pane_g1

0x9a33,	// (0x0003ff61) list_double_time_pane_g2_ParamLimits

0x9a33,	// (0x0003ff61) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x00045b5c) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x00045b5c) list_double_time_pane_g

0x9c84,	// (0x000401b2) list_double_time_pane_t1_ParamLimits

0x9c84,	// (0x000401b2) list_double_time_pane_t1

0x9c9a,	// (0x000401c8) list_double_time_pane_t2_ParamLimits

0x9c9a,	// (0x000401c8) list_double_time_pane_t2

0x9cac,	// (0x000401da) list_double_time_pane_t3_ParamLimits

0x9cac,	// (0x000401da) list_double_time_pane_t3

0x9cbe,	// (0x000401ec) list_double_time_pane_t4_ParamLimits

0x9cbe,	// (0x000401ec) list_double_time_pane_t4

0x0003,

0xf633,	// (0x00045b61) list_double_time_pane_t_ParamLimits

0xf633,	// (0x00045b61) list_double_time_pane_t

0x9cd0,	// (0x000401fe) list_setting_pane_g1_ParamLimits

0x9cd0,	// (0x000401fe) list_setting_pane_g1

0x9cdc,	// (0x0004020a) list_setting_pane_g2_ParamLimits

0x9cdc,	// (0x0004020a) list_setting_pane_g2

0x0001,

0xf63c,	// (0x00045b6a) list_setting_pane_g_ParamLimits

0xf63c,	// (0x00045b6a) list_setting_pane_g

0x9ce8,	// (0x00040216) list_setting_pane_t1_ParamLimits

0x9ce8,	// (0x00040216) list_setting_pane_t1

0x9d02,	// (0x00040230) list_setting_pane_t2_ParamLimits

0x9d02,	// (0x00040230) list_setting_pane_t2

0x0002,

0xf641,	// (0x00045b6f) list_setting_pane_t_ParamLimits

0xf641,	// (0x00045b6f) list_setting_pane_t

0x9d41,	// (0x0004026f) set_value_pane_cp_ParamLimits

0x9d41,	// (0x0004026f) set_value_pane_cp

0x9d4f,	// (0x0004027d) list_setting_number_pane_g1_ParamLimits

0x9d4f,	// (0x0004027d) list_setting_number_pane_g1

0x9d5b,	// (0x00040289) list_setting_number_pane_g2_ParamLimits

0x9d5b,	// (0x00040289) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x00045b76) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x00045b76) list_setting_number_pane_g

0x9d67,	// (0x00040295) list_setting_number_pane_t1_ParamLimits

0x9d67,	// (0x00040295) list_setting_number_pane_t1

0x9d80,	// (0x000402ae) list_setting_number_pane_t2_ParamLimits

0x9d80,	// (0x000402ae) list_setting_number_pane_t2

0x9d9a,	// (0x000402c8) list_setting_number_pane_t3_ParamLimits

0x9d9a,	// (0x000402c8) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x00045b7b) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x00045b7b) list_setting_number_pane_t

0x9d41,	// (0x0004026f) set_value_pane_ParamLimits

0x9d41,	// (0x0004026f) set_value_pane

0xbdbc,	// (0x000422ea) bg_set_opt_pane_ParamLimits

0xbdbc,	// (0x000422ea) bg_set_opt_pane

0xd326,	// (0x00043854) set_value_pane_t1

0xbddd,	// (0x0004230b) slider_set_pane_cp3

0xbde6,	// (0x00042314) volume_small_pane_cp

0xbdef,	// (0x0004231d) list_form_gen_pane

0xbdf8,	// (0x00042326) scroll_pane_cp8

0x9ddd,	// (0x0004030b) form_field_data_pane_ParamLimits

0x9ddd,	// (0x0004030b) form_field_data_pane

0x9df8,	// (0x00040326) form_field_data_wide_pane_ParamLimits

0x9df8,	// (0x00040326) form_field_data_wide_pane

0xd344,	// (0x00043872) form_field_popup_pane_ParamLimits

0xd344,	// (0x00043872) form_field_popup_pane

0x9e1a,	// (0x00040348) form_field_popup_wide_pane_ParamLimits

0x9e1a,	// (0x00040348) form_field_popup_wide_pane

0xd366,	// (0x00043894) form_field_slider_pane_ParamLimits

0xd366,	// (0x00043894) form_field_slider_pane

0xd379,	// (0x000438a7) form_field_slider_wide_pane_ParamLimits

0xd379,	// (0x000438a7) form_field_slider_wide_pane

0xbe09,	// (0x00042337) data_form_pane

0x9e45,	// (0x00040373) form_field_data_pane_t1

0xbe15,	// (0x00042343) input_focus_pane

0xd38c,	// (0x000438ba) data_form_wide_pane

0xd3a9,	// (0x000438d7) form_field_data_wide_pane_t1

0xbb90,	// (0x000420be) input_focus_pane_cp6

0x9e5f,	// (0x0004038d) form_field_popup_pane_t1

0xbe15,	// (0x00042343) input_focus_pane_cp7

0xbe43,	// (0x00042371) list_form_pane

0xd3d3,	// (0x00043901) form_field_popup_wide_pane_t1

0xbe15,	// (0x00042343) input_focus_pane_cp8

0xbe4f,	// (0x0004237d) list_form_wide_pane

0x9e81,	// (0x000403af) form_field_slider_pane_t1_ParamLimits

0x9e81,	// (0x000403af) form_field_slider_pane_t1

0x9e99,	// (0x000403c7) form_field_slider_pane_t2_ParamLimits

0x9e99,	// (0x000403c7) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x00045b8b) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x00045b8b) form_field_slider_pane_t

0xb7c5,	// (0x00041cf3) input_focus_pane_cp9_ParamLimits

0xb7c5,	// (0x00041cf3) input_focus_pane_cp9

0x9eae,	// (0x000403dc) slider_cont_pane_ParamLimits

0x9eae,	// (0x000403dc) slider_cont_pane

0xbe5b,	// (0x00042389) form_field_slider_wide_pane_t1_ParamLimits

0xbe5b,	// (0x00042389) form_field_slider_wide_pane_t1

0xd3e8,	// (0x00043916) form_field_slider_wide_pane_t2_ParamLimits

0xd3e8,	// (0x00043916) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x00045b90) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x00045b90) form_field_slider_wide_pane_t

0xb7c5,	// (0x00041cf3) input_focus_pane_cp10_ParamLimits

0xb7c5,	// (0x00041cf3) input_focus_pane_cp10

0x9ec2,	// (0x000403f0) slider_cont_pane_cp1_ParamLimits

0x9ec2,	// (0x000403f0) slider_cont_pane_cp1

0x9ed6,	// (0x00040404) slider_form_pane_cp

0xbe6d,	// (0x0004239b) input_focus_pane_g1

0xbe75,	// (0x000423a3) input_focus_pane_g2

0xbe7d,	// (0x000423ab) input_focus_pane_g3

0xbe85,	// (0x000423b3) input_focus_pane_g4

0xbe8d,	// (0x000423bb) input_focus_pane_g5

0xbe95,	// (0x000423c3) input_focus_pane_g6

0xbe9d,	// (0x000423cb) input_focus_pane_g7

0xbea5,	// (0x000423d3) input_focus_pane_g8

0xbead,	// (0x000423db) input_focus_pane_g9

0xb76d,	// (0x00041c9b) input_focus_pane_g10

0x0009,

0xf667,	// (0x00045b95) input_focus_pane_g

0x340d,	// (0x0003993b) wait_border_pane_g3_copy1

0x9ede,	// (0x0004040c) data_form_pane_t1

0xb76d,	// (0x00041c9b) wait_anim_pane_g1_copy1

0xadef,	// (0x0004131d) data_form_wide_pane_t1

0xd3fa,	// (0x00043928) list_form_graphic_pane_cp_ParamLimits

0xd3fa,	// (0x00043928) list_form_graphic_pane_cp

0x4364,	// (0x0003a892) slider_form_pane_g1

0x436d,	// (0x0003a89b) slider_form_pane_g2

0x0006,

0xf965,	// (0x00045e93) slider_form_pane_g

0xd3fa,	// (0x00043928) list_form_graphic_pane_ParamLimits

0xd3fa,	// (0x00043928) list_form_graphic_pane

0xd40c,	// (0x0004393a) list_form_graphic_pane_g1

0xd414,	// (0x00043942) list_form_graphic_pane_t1_ParamLimits

0xd414,	// (0x00043942) list_form_graphic_pane_t1

0xb7d3,	// (0x00041d01) list_highlight_pane_cp5_ParamLimits

0xb7d3,	// (0x00041d01) list_highlight_pane_cp5

0x9ef8,	// (0x00040426) find_pane_g1

0xbeb5,	// (0x000423e3) input_find_pane

0x9f01,	// (0x0004042f) input_find_pane_g1_ParamLimits

0x9f01,	// (0x0004042f) input_find_pane_g1

0x9f0d,	// (0x0004043b) input_find_pane_t1_ParamLimits

0x9f0d,	// (0x0004043b) input_find_pane_t1

0x9f22,	// (0x00040450) input_find_pane_t2_ParamLimits

0x9f22,	// (0x00040450) input_find_pane_t2

0x0001,

0xf67c,	// (0x00045baa) input_find_pane_t_ParamLimits

0xf67c,	// (0x00045baa) input_find_pane_t

0xbebe,	// (0x000423ec) input_focus_pane_cp5_ParamLimits

0xbebe,	// (0x000423ec) input_focus_pane_cp5

0xbed1,	// (0x000423ff) bg_popup_window_pane_cp2_ParamLimits

0xbed1,	// (0x000423ff) bg_popup_window_pane_cp2

0xbede,	// (0x0004240c) listscroll_menu_pane_ParamLimits

0xbede,	// (0x0004240c) listscroll_menu_pane

0x9f43,	// (0x00040471) popup_submenu_window_ParamLimits

0x9f43,	// (0x00040471) popup_submenu_window

0xbeea,	// (0x00042418) find_popup_pane_g1

0xbef2,	// (0x00042420) input_popup_find_pane_cp

0xbefc,	// (0x0004242a) input_focus_pane_cp4_ParamLimits

0xbefc,	// (0x0004242a) input_focus_pane_cp4

0xbf0a,	// (0x00042438) input_popup_find_pane_t1_ParamLimits

0xbf0a,	// (0x00042438) input_popup_find_pane_t1

0xb777,	// (0x00041ca5) bg_popup_sub_pane_cp

0xbf38,	// (0x00042466) listscroll_popup_sub_pane

0xbf40,	// (0x0004246e) list_submenu_pane_ParamLimits

0xbf40,	// (0x0004246e) list_submenu_pane

0xbf51,	// (0x0004247f) scroll_pane_cp4

0xbf59,	// (0x00042487) list_single_popup_submenu_pane_ParamLimits

0xbf59,	// (0x00042487) list_single_popup_submenu_pane

0xbf6e,	// (0x0004249c) list_single_popup_submenu_pane_g1

0xbf76,	// (0x000424a4) list_single_popup_submenu_pane_t1_ParamLimits

0xbf76,	// (0x000424a4) list_single_popup_submenu_pane_t1

0xb7c5,	// (0x00041cf3) bg_active_tab_pane_cp1_ParamLimits

0xb7c5,	// (0x00041cf3) bg_active_tab_pane_cp1

0x9f81,	// (0x000404af) tabs_2_active_pane_g1

0x9f89,	// (0x000404b7) tabs_2_active_pane_t1

0xb7c5,	// (0x00041cf3) bg_passive_tab_pane_cp1_ParamLimits

0xb7c5,	// (0x00041cf3) bg_passive_tab_pane_cp1

0x9f81,	// (0x000404af) tabs_2_passive_pane_g1

0x9f89,	// (0x000404b7) tabs_2_passive_pane_t1

0xb7d3,	// (0x00041d01) bg_active_tab_pane_cp4

0x9f9b,	// (0x000404c9) tabs_2_long_active_pane_t1

0x28db,	// (0x00038e09) bg_passive_tab_pane_cp4

0x0a1e,	// (0x00036f4c) list_single_midp_graphic_pane_g4_ParamLimits

0xb7d3,	// (0x00041d01) bg_active_tab_pane_cp5

0x9fae,	// (0x000404dc) tabs_3_long_active_pane_t1

0x28db,	// (0x00038e09) bg_passive_tab_pane_cp5

0x0a1e,	// (0x00036f4c) list_single_midp_graphic_pane_g4

0xb7d3,	// (0x00041d01) bg_popup_window_pane_cp13_ParamLimits

0xb7d3,	// (0x00041d01) bg_popup_window_pane_cp13

0xbf94,	// (0x000424c2) listscroll_popup_fast_pane_ParamLimits

0xbf94,	// (0x000424c2) listscroll_popup_fast_pane

0xbfa3,	// (0x000424d1) grid_popup_fast_pane_ParamLimits

0xbfa3,	// (0x000424d1) grid_popup_fast_pane

0xbfb5,	// (0x000424e3) scroll_pane_cp9_ParamLimits

0xbfb5,	// (0x000424e3) scroll_pane_cp9

0x5cea,	// (0x0003c218) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5cea,	// (0x0003c218) list_single_graphic_hl_pane_t1_cp2

0xbfd9,	// (0x00042507) input_focus_pane_cp20_ParamLimits

0xbfd9,	// (0x00042507) input_focus_pane_cp20

0xbfe7,	// (0x00042515) query_popup_data_pane_t1_ParamLimits

0xbfe7,	// (0x00042515) query_popup_data_pane_t1

0xbffa,	// (0x00042528) query_popup_data_pane_t2_ParamLimits

0xbffa,	// (0x00042528) query_popup_data_pane_t2

0xc040,	// (0x0004256e) query_popup_data_pane_t3_ParamLimits

0xc040,	// (0x0004256e) query_popup_data_pane_t3

0xc081,	// (0x000425af) query_popup_data_pane_t4_ParamLimits

0xc081,	// (0x000425af) query_popup_data_pane_t4

0xc0bd,	// (0x000425eb) query_popup_data_pane_t5_ParamLimits

0xc0bd,	// (0x000425eb) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x00045baf) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x00045baf) query_popup_data_pane_t

0xbe6d,	// (0x0004239b) bg_set_opt_pane_g1

0xbe75,	// (0x000423a3) bg_set_opt_pane_g2

0xbe7d,	// (0x000423ab) bg_set_opt_pane_g3

0xbe85,	// (0x000423b3) bg_set_opt_pane_g4

0xbe8d,	// (0x000423bb) bg_set_opt_pane_g5

0xbe95,	// (0x000423c3) bg_set_opt_pane_g6

0xbe9d,	// (0x000423cb) bg_set_opt_pane_g7

0xbea5,	// (0x000423d3) bg_set_opt_pane_g8

0xbead,	// (0x000423db) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x00045bba) bg_set_opt_pane_g

0x0051,	// (0x0003657f) control_top_pane_stacon_ParamLimits

0x0051,	// (0x0003657f) control_top_pane_stacon

0x00a4,	// (0x000365d2) signal_pane_stacon_ParamLimits

0x00a4,	// (0x000365d2) signal_pane_stacon

0x223d,	// (0x0003876b) stacon_top_pane_g1_ParamLimits

0x223d,	// (0x0003876b) stacon_top_pane_g1

0x00c9,	// (0x000365f7) title_pane_stacon_ParamLimits

0x00c9,	// (0x000365f7) title_pane_stacon

0x00f3,	// (0x00036621) uni_indicator_pane_stacon_ParamLimits

0x00f3,	// (0x00036621) uni_indicator_pane_stacon

0x0108,	// (0x00036636) battery_pane_stacon_ParamLimits

0x0108,	// (0x00036636) battery_pane_stacon

0x014c,	// (0x0003667a) control_bottom_pane_stacon_ParamLimits

0x014c,	// (0x0003667a) control_bottom_pane_stacon

0x016f,	// (0x0003669d) navi_pane_stacon_ParamLimits

0x016f,	// (0x0003669d) navi_pane_stacon

0x225f,	// (0x0003878d) stacon_bottom_pane_g1_ParamLimits

0x225f,	// (0x0003878d) stacon_bottom_pane_g1

0xef17,	// (0x00045445) aid_levels_signal_lsc_ParamLimits

0xef17,	// (0x00045445) aid_levels_signal_lsc

0xef2e,	// (0x0004545c) signal_pane_stacon_g1_ParamLimits

0xef2e,	// (0x0004545c) signal_pane_stacon_g1

0xef42,	// (0x00045470) signal_pane_stacon_g2_ParamLimits

0xef42,	// (0x00045470) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x00045bcd) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x00045bcd) signal_pane_stacon_g

0xef77,	// (0x000454a5) title_pane_stacon_t1_ParamLimits

0xef77,	// (0x000454a5) title_pane_stacon_t1

0xc101,	// (0x0004262f) uni_indicator_pane_stacon_g1

0xc10b,	// (0x00042639) uni_indicator_pane_stacon_g2

0xc115,	// (0x00042643) uni_indicator_pane_stacon_g3

0xc11f,	// (0x0004264d) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x00045bd9) uni_indicator_pane_stacon_g

0xef9c,	// (0x000454ca) control_top_pane_stacon_g1

0xefa4,	// (0x000454d2) control_top_pane_stacon_t1_ParamLimits

0xefa4,	// (0x000454d2) control_top_pane_stacon_t1

0xefdb,	// (0x00045509) aid_levels_battery_lsc_ParamLimits

0xefdb,	// (0x00045509) aid_levels_battery_lsc

0xeff3,	// (0x00045521) battery_pane_stacon_g1_ParamLimits

0xeff3,	// (0x00045521) battery_pane_stacon_g1

0xf005,	// (0x00045533) battery_pane_stacon_g2_ParamLimits

0xf005,	// (0x00045533) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x00045be2) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x00045be2) battery_pane_stacon_g

0xf043,	// (0x00045571) navi_icon_pane_stacon

0xf057,	// (0x00045585) navi_navi_pane_stacon

0xf043,	// (0x00045571) navi_text_pane_stacon

0xf06d,	// (0x0004559b) control_bottom_pane_stacon_g1

0xf075,	// (0x000455a3) control_bottom_pane_stacon_t1_ParamLimits

0xf075,	// (0x000455a3) control_bottom_pane_stacon_t1

0x9fc0,	// (0x000404ee) grid_app_pane_ParamLimits

0x9fc0,	// (0x000404ee) grid_app_pane

0x9ff8,	// (0x00040526) scroll_pane_cp15_ParamLimits

0x9ff8,	// (0x00040526) scroll_pane_cp15

0xa00d,	// (0x0004053b) cell_app_pane_ParamLimits

0xa00d,	// (0x0004053b) cell_app_pane

0xa058,	// (0x00040586) cell_app_pane_g1_ParamLimits

0xa058,	// (0x00040586) cell_app_pane_g1

0xf0ac,	// (0x000455da) cell_app_pane_g2_ParamLimits

0xf0ac,	// (0x000455da) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x00045be7) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x00045be7) cell_app_pane_g

0xa07c,	// (0x000405aa) cell_app_pane_t1_ParamLimits

0xa07c,	// (0x000405aa) cell_app_pane_t1

0xf0b8,	// (0x000455e6) grid_highlight_pane_ParamLimits

0xf0b8,	// (0x000455e6) grid_highlight_pane

0xbe6d,	// (0x0004239b) cell_highlight_pane_g1

0xbe75,	// (0x000423a3) cell_highlight_pane_g2

0xbe7d,	// (0x000423ab) cell_highlight_pane_g3

0xbe85,	// (0x000423b3) cell_highlight_pane_g4

0xbe8d,	// (0x000423bb) cell_highlight_pane_g5

0xbe95,	// (0x000423c3) cell_highlight_pane_g6

0xbe9d,	// (0x000423cb) cell_highlight_pane_g7

0xbea5,	// (0x000423d3) cell_highlight_pane_g8

0xbead,	// (0x000423db) cell_highlight_pane_g9

0xb76d,	// (0x00041c9b) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x00045b95) cell_highlight_pane_g

0xf0d3,	// (0x00045601) bg_scroll_pane

0xf0f2,	// (0x00045620) scroll_handle_pane

0xf143,	// (0x00045671) scroll_bg_pane_g1

0xf158,	// (0x00045686) scroll_bg_pane_g2

0xf170,	// (0x0004569e) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x00045bec) scroll_bg_pane_g

0xf185,	// (0x000456b3) scroll_handle_focus_pane_ParamLimits

0xf185,	// (0x000456b3) scroll_handle_focus_pane

0xf143,	// (0x00045671) scroll_handle_pane_g1

0xf192,	// (0x000456c0) scroll_handle_pane_g2

0xf170,	// (0x0004569e) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x00045bf3) scroll_handle_pane_g

0xbefc,	// (0x0004242a) bg_popup_sub_pane_cp21_ParamLimits

0xbefc,	// (0x0004242a) bg_popup_sub_pane_cp21

0xf1a6,	// (0x000456d4) popup_fep_japan_predictive_window_t1_ParamLimits

0xf1a6,	// (0x000456d4) popup_fep_japan_predictive_window_t1

0xf1bd,	// (0x000456eb) popup_fep_japan_predictive_window_t2_ParamLimits

0xf1bd,	// (0x000456eb) popup_fep_japan_predictive_window_t2

0xf1f0,	// (0x0004571e) popup_fep_japan_predictive_window_t3_ParamLimits

0xf1f0,	// (0x0004571e) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x00045bfa) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x00045bfa) popup_fep_japan_predictive_window_t

0xb777,	// (0x00041ca5) bg_popup_sub_pane_cp23

0xf227,	// (0x00045755) listscroll_japin_cand_pane

0xf22f,	// (0x0004575d) popup_fep_japan_candidate_window_t1

0xf23d,	// (0x0004576b) candidate_pane_ParamLimits

0xf23d,	// (0x0004576b) candidate_pane

0xf24f,	// (0x0004577d) scroll_pane_cp30

0xf259,	// (0x00045787) list_single_popup_jap_candidate_pane_ParamLimits

0xf259,	// (0x00045787) list_single_popup_jap_candidate_pane

0xb777,	// (0x00041ca5) list_highlight_pane_cp30

0xf26d,	// (0x0004579b) list_single_popup_jap_candidate_pane_t1

0xa0b6,	// (0x000405e4) level_1_signal

0xa0c8,	// (0x000405f6) level_2_signal

0xa0db,	// (0x00040609) level_3_signal

0xa0ee,	// (0x0004061c) level_4_signal

0xa101,	// (0x0004062f) level_5_signal

0xa114,	// (0x00040642) level_6_signal

0xa127,	// (0x00040655) level_7_signal

0xa0b6,	// (0x000405e4) level_1_battery

0xa0c8,	// (0x000405f6) level_2_battery

0xa0db,	// (0x00040609) level_3_battery

0xa0ee,	// (0x0004061c) level_4_battery

0xa101,	// (0x0004062f) level_5_battery

0xa114,	// (0x00040642) level_6_battery

0xa127,	// (0x00040655) level_7_battery

0xf2b3,	// (0x000457e1) list_menu_pane_ParamLimits

0xf2b3,	// (0x000457e1) list_menu_pane

0xf2c9,	// (0x000457f7) scroll_pane_cp25_ParamLimits

0xf2c9,	// (0x000457f7) scroll_pane_cp25

0xf2e2,	// (0x00045810) list_double2_graphic_pane_cp2_ParamLimits

0xf2e2,	// (0x00045810) list_double2_graphic_pane_cp2

0xf2e2,	// (0x00045810) list_double2_large_graphic_pane_cp2_ParamLimits

0xf2e2,	// (0x00045810) list_double2_large_graphic_pane_cp2

0xf2e2,	// (0x00045810) list_double2_pane_cp2_ParamLimits

0xf2e2,	// (0x00045810) list_double2_pane_cp2

0xf2e2,	// (0x00045810) list_double_graphic_pane_cp2_ParamLimits

0xf2e2,	// (0x00045810) list_double_graphic_pane_cp2

0xf2e2,	// (0x00045810) list_double_large_graphic_pane_cp2_ParamLimits

0xf2e2,	// (0x00045810) list_double_large_graphic_pane_cp2

0xf2e2,	// (0x00045810) list_double_number_pane_cp2_ParamLimits

0xf2e2,	// (0x00045810) list_double_number_pane_cp2

0xf2e2,	// (0x00045810) list_double_pane_cp2_ParamLimits

0xf2e2,	// (0x00045810) list_double_pane_cp2

0xa13a,	// (0x00040668) list_single_2graphic_pane_cp2_ParamLimits

0xa13a,	// (0x00040668) list_single_2graphic_pane_cp2

0xa13a,	// (0x00040668) list_single_graphic_heading_pane_cp2_ParamLimits

0xa13a,	// (0x00040668) list_single_graphic_heading_pane_cp2

0xa13a,	// (0x00040668) list_single_graphic_pane_cp2_ParamLimits

0xa13a,	// (0x00040668) list_single_graphic_pane_cp2

0xa13a,	// (0x00040668) list_single_heading_pane_cp2_ParamLimits

0xa13a,	// (0x00040668) list_single_heading_pane_cp2

0xf2f2,	// (0x00045820) list_single_large_graphic_pane_cp2_ParamLimits

0xf2f2,	// (0x00045820) list_single_large_graphic_pane_cp2

0xa13a,	// (0x00040668) list_single_number_heading_pane_cp2_ParamLimits

0xa13a,	// (0x00040668) list_single_number_heading_pane_cp2

0xa13a,	// (0x00040668) list_single_number_pane_cp2_ParamLimits

0xa13a,	// (0x00040668) list_single_number_pane_cp2

0xa14e,	// (0x0004067c) list_single_pane_cp2_ParamLimits

0xa14e,	// (0x0004067c) list_single_pane_cp2

0xf366,	// (0x00045894) bg_popup_sub_pane_cp22

0xf38b,	// (0x000458b9) popup_side_volume_key_window_g1

0xf3b5,	// (0x000458e3) popup_side_volume_key_window_t1

0xf3d3,	// (0x00045901) volume_small_pane_cp1

0xb7c5,	// (0x00041cf3) bg_popup_sub_pane_cp24_ParamLimits

0xb7c5,	// (0x00041cf3) bg_popup_sub_pane_cp24

0xf3db,	// (0x00045909) fep_china_uni_candidate_pane_ParamLimits

0xf3db,	// (0x00045909) fep_china_uni_candidate_pane

0xf3ef,	// (0x0004591d) fep_china_uni_entry_pane

0xf3ff,	// (0x0004592d) popup_fep_china_uni_window_g1

0xf41b,	// (0x00045949) fep_china_uni_entry_pane_g1

0xf425,	// (0x00045953) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x00045c2b) fep_china_uni_entry_pane_g

0xf42f,	// (0x0004595d) fep_entry_item_pane

0xf439,	// (0x00045967) fep_candidate_item_pane

0xf441,	// (0x0004596f) fep_china_uni_candidate_pane_g1

0xf44b,	// (0x00045979) fep_china_uni_candidate_pane_g2

0xf453,	// (0x00045981) fep_china_uni_candidate_pane_g3

0xf45b,	// (0x00045989) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x00045c30) fep_china_uni_candidate_pane_g

0xb76d,	// (0x00041c9b) fep_entry_item_pane_g1

0xf465,	// (0x00045993) fep_entry_item_pane_t1_ParamLimits

0xf465,	// (0x00045993) fep_entry_item_pane_t1

0xf47b,	// (0x000459a9) fep_candidate_item_pane_t1_ParamLimits

0xf47b,	// (0x000459a9) fep_candidate_item_pane_t1

0xf490,	// (0x000459be) fep_candidate_item_pane_t2_ParamLimits

0xf490,	// (0x000459be) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x00045c39) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x00045c39) fep_candidate_item_pane_t

0xb7d3,	// (0x00041d01) list_highlight_pane_cp31_ParamLimits

0xb7d3,	// (0x00041d01) list_highlight_pane_cp31

0xf4a2,	// (0x000459d0) level_1_signal_lsc

0xf4ab,	// (0x000459d9) level_2_signal_lsc

0xf4b4,	// (0x000459e2) level_3_signal_lsc

0xf4bd,	// (0x000459eb) level_4_signal_lsc

0xf4c6,	// (0x000459f4) level_5_signal_lsc

0xf4cf,	// (0x000459fd) level_6_signal_lsc

0xf4d8,	// (0x00045a06) level_7_signal_lsc

0xf4d8,	// (0x00045a06) level_1_battery_lsc

0xf4e1,	// (0x00045a0f) level_2_battery_lsc

0xf4ea,	// (0x00045a18) level_3_battery_lsc

0xf4f3,	// (0x00045a21) level_4_battery_lsc

0xf4fc,	// (0x00045a2a) level_5_battery_lsc

0xf505,	// (0x00045a33) level_6_battery_lsc

0xf4a2,	// (0x000459d0) level_7_battery_lsc

0xf50e,	// (0x00045a3c) scroll_handle_focus_pane_g1

0xf517,	// (0x00045a45) scroll_handle_focus_pane_g2

0xf520,	// (0x00045a4e) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x00045c3e) scroll_handle_focus_pane_g

0xa1dd,	// (0x0004070b) list_single_2graphic_pane_g1_ParamLimits

0xa1dd,	// (0x0004070b) list_single_2graphic_pane_g1

0x99fc,	// (0x0003ff2a) list_single_2graphic_pane_g2_ParamLimits

0x99fc,	// (0x0003ff2a) list_single_2graphic_pane_g2

0xd297,	// (0x000437c5) list_single_2graphic_pane_g3_ParamLimits

0xd297,	// (0x000437c5) list_single_2graphic_pane_g3

0xa1e9,	// (0x00040717) list_single_2graphic_pane_g4_ParamLimits

0xa1e9,	// (0x00040717) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x00045c45) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x00045c45) list_single_2graphic_pane_g

0xa1f5,	// (0x00040723) list_single_2graphic_pane_t1_ParamLimits

0xa1f5,	// (0x00040723) list_single_2graphic_pane_t1

0xa223,	// (0x00040751) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa223,	// (0x00040751) list_double2_graphic_large_graphic_pane_g1

0x9a67,	// (0x0003ff95) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9a67,	// (0x0003ff95) list_double2_graphic_large_graphic_pane_g2

0x9a78,	// (0x0003ffa6) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9a78,	// (0x0003ffa6) list_double2_graphic_large_graphic_pane_g3

0xa235,	// (0x00040763) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa235,	// (0x00040763) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x00045c4e) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x00045c4e) list_double2_graphic_large_graphic_pane_g

0xa241,	// (0x0004076f) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa241,	// (0x0004076f) list_double2_graphic_large_graphic_pane_t1

0xa257,	// (0x00040785) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa257,	// (0x00040785) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x00045c57) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x00045c57) list_double2_graphic_large_graphic_pane_t

0x2322,	// (0x00038850) popup_fast_swap_window_ParamLimits

0x2322,	// (0x00038850) popup_fast_swap_window

0x2340,	// (0x0003886e) popup_side_volume_key_window

0x235e,	// (0x0003888c) stacon_top_pane

0x2368,	// (0x00038896) status_pane_ParamLimits

0x2368,	// (0x00038896) status_pane

0xb763,	// (0x00041c91) status_small_pane

0xb777,	// (0x00041ca5) control_pane

0xb777,	// (0x00041ca5) stacon_bottom_pane

0xbdf8,	// (0x00042326) scroll_pane_cp121

0xbdef,	// (0x0004231d) set_content_pane

0xa269,	// (0x00040797) bg_active_tab_pane_g1_cp1

0x0005,	// (0x00036533) bg_active_tab_pane_g2_cp1

0xa272,	// (0x000407a0) bg_active_tab_pane_g3_cp1

0xa269,	// (0x00040797) bg_passive_tab_pane_g1_cp1

0x0005,	// (0x00036533) bg_passive_tab_pane_g2_cp1

0xa272,	// (0x000407a0) bg_passive_tab_pane_g3_cp1

0xa27b,	// (0x000407a9) bg_active_tab_pane_g1_cp2

0x0005,	// (0x00036533) bg_active_tab_pane_g2_cp2

0xa284,	// (0x000407b2) bg_active_tab_pane_g3_cp2

0xa27b,	// (0x000407a9) bg_passive_tab_pane_g1_cp2

0x0005,	// (0x00036533) bg_passive_tab_pane_g2_cp2

0xa284,	// (0x000407b2) bg_passive_tab_pane_g3_cp2

0xa28d,	// (0x000407bb) bg_active_tab_pane_g1_cp3

0x0005,	// (0x00036533) bg_active_tab_pane_g2_cp3

0xa296,	// (0x000407c4) bg_active_tab_pane_g3_cp3

0xa28d,	// (0x000407bb) bg_passive_tab_pane_g1_cp3

0x0005,	// (0x00036533) bg_passive_tab_pane_g2_cp3

0xa296,	// (0x000407c4) bg_passive_tab_pane_g3_cp3

0xa29f,	// (0x000407cd) bg_active_tab_pane_g1_cp4

0x0005,	// (0x00036533) bg_active_tab_pane_g2_cp4

0xa2a8,	// (0x000407d6) bg_active_tab_pane_g3_cp4

0xa29f,	// (0x000407cd) bg_passive_tab_pane_g1_cp4

0x0005,	// (0x00036533) bg_passive_tab_pane_g2_cp4

0xa2a8,	// (0x000407d6) bg_passive_tab_pane_g3_cp4

0x227b,	// (0x000387a9) bg_active_tab_pane_g1_cp5

0x0005,	// (0x00036533) bg_active_tab_pane_g2_cp5

0x2284,	// (0x000387b2) bg_active_tab_pane_g3_cp5

0x227b,	// (0x000387a9) bg_passive_tab_pane_g1_cp5

0x0005,	// (0x00036533) bg_passive_tab_pane_g2_cp5

0x2284,	// (0x000387b2) bg_passive_tab_pane_g3_cp5

0x4992,	// (0x0003aec0) list_set_graphic_pane_ParamLimits

0x4992,	// (0x0003aec0) list_set_graphic_pane

0xb777,	// (0x00041ca5) bg_set_opt_pane_cp4

0x22a3,	// (0x000387d1) list_set_graphic_pane_g1_ParamLimits

0x22a3,	// (0x000387d1) list_set_graphic_pane_g1

0x22af,	// (0x000387dd) list_set_graphic_pane_g2_ParamLimits

0x22af,	// (0x000387dd) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x00045c5c) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x00045c5c) list_set_graphic_pane_g

0x0009,

0xfab3,	// (0x00045fe1) volume_small_pane_cp_g

0x22d3,	// (0x00038801) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x22d3,	// (0x00038801) list_double2_large_graphic_pane_g1_cp2

0x22e1,	// (0x0003880f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x22e1,	// (0x0003880f) list_double2_large_graphic_pane_g2_cp2

0x22f2,	// (0x00038820) list_double2_large_graphic_pane_g3_cp2

0x22fa,	// (0x00038828) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x22fa,	// (0x00038828) list_double2_large_graphic_pane_t1_cp2

0x2310,	// (0x0003883e) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2310,	// (0x0003883e) list_double2_large_graphic_pane_t2_cp2

0x3ef1,	// (0x0003a41f) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x3ef1,	// (0x0003a41f) list_double_large_graphic_pane_g1_cp2

0x3f04,	// (0x0003a432) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3f04,	// (0x0003a432) list_double_large_graphic_pane_g2_cp2

0x2486,	// (0x000389b4) list_double_large_graphic_pane_g3_cp2

0x3f15,	// (0x0003a443) list_double_large_graphic_pane_g4_cp

0x3f1d,	// (0x0003a44b) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3f1d,	// (0x0003a44b) list_double_large_graphic_pane_t1_cp2

0x3f34,	// (0x0003a462) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3f34,	// (0x0003a462) list_double_large_graphic_pane_t2_cp2

0x2376,	// (0x000388a4) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2376,	// (0x000388a4) list_double2_graphic_pane_g1_cp2

0x2384,	// (0x000388b2) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2384,	// (0x000388b2) list_double2_graphic_pane_g2_cp2

0x2395,	// (0x000388c3) list_double2_graphic_pane_g3_cp2

0x239f,	// (0x000388cd) list_double2_graphic_pane_t1_cp2_ParamLimits

0x239f,	// (0x000388cd) list_double2_graphic_pane_t1_cp2

0x23b5,	// (0x000388e3) list_double2_graphic_pane_t2_cp2_ParamLimits

0x23b5,	// (0x000388e3) list_double2_graphic_pane_t2_cp2

0x23c7,	// (0x000388f5) list_single_number_heading_pane_g1_cp2_ParamLimits

0x23c7,	// (0x000388f5) list_single_number_heading_pane_g1_cp2

0x23d3,	// (0x00038901) list_single_number_heading_pane_g2_cp2

0x23db,	// (0x00038909) list_single_number_heading_pane_t1_cp2_ParamLimits

0x23db,	// (0x00038909) list_single_number_heading_pane_t1_cp2

0x23f1,	// (0x0003891f) list_single_number_heading_pane_t2_cp2_ParamLimits

0x23f1,	// (0x0003891f) list_single_number_heading_pane_t2_cp2

0x2405,	// (0x00038933) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2405,	// (0x00038933) list_single_number_heading_pane_t3_cp2

0x23c7,	// (0x000388f5) list_single_heading_pane_g1_cp2_ParamLimits

0x23c7,	// (0x000388f5) list_single_heading_pane_g1_cp2

0x23d3,	// (0x00038901) list_single_heading_pane_g2_cp2

0x23db,	// (0x00038909) list_single_heading_pane_t1_cp2_ParamLimits

0x23db,	// (0x00038909) list_single_heading_pane_t1_cp2

0x3ceb,	// (0x0003a219) list_single_heading_pane_t2_cp2_ParamLimits

0x3ceb,	// (0x0003a219) list_single_heading_pane_t2_cp2

0x3c33,	// (0x0003a161) list_double_graphic_pane_g1_cp2_ParamLimits

0x3c33,	// (0x0003a161) list_double_graphic_pane_g1_cp2

0x3c3f,	// (0x0003a16d) list_double_graphic_pane_g2_cp2_ParamLimits

0x3c3f,	// (0x0003a16d) list_double_graphic_pane_g2_cp2

0x3c4e,	// (0x0003a17c) list_double_graphic_pane_g3_cp2

0x3c56,	// (0x0003a184) list_double_graphic_pane_t1_cp2_ParamLimits

0x3c56,	// (0x0003a184) list_double_graphic_pane_t1_cp2

0x3c6c,	// (0x0003a19a) list_double_graphic_pane_t2_cp2_ParamLimits

0x3c6c,	// (0x0003a19a) list_double_graphic_pane_t2_cp2

0x247a,	// (0x000389a8) list_double_number_pane_g1_cp2_ParamLimits

0x247a,	// (0x000389a8) list_double_number_pane_g1_cp2

0x2486,	// (0x000389b4) list_double_number_pane_g2_cp2

0x3bf7,	// (0x0003a125) list_double_number_pane_t1_cp2_ParamLimits

0x3bf7,	// (0x0003a125) list_double_number_pane_t1_cp2

0x3c0b,	// (0x0003a139) list_double_number_pane_t2_cp2_ParamLimits

0x3c0b,	// (0x0003a139) list_double_number_pane_t2_cp2

0x3c21,	// (0x0003a14f) list_double_number_pane_t3_cp2_ParamLimits

0x3c21,	// (0x0003a14f) list_double_number_pane_t3_cp2

0x3ae0,	// (0x0003a00e) list_single_graphic_pane_g1_cp2_ParamLimits

0x3ae0,	// (0x0003a00e) list_single_graphic_pane_g1_cp2

0x24eb,	// (0x00038a19) list_single_graphic_pane_g2_cp2_ParamLimits

0x24eb,	// (0x00038a19) list_single_graphic_pane_g2_cp2

0x24f7,	// (0x00038a25) list_single_graphic_pane_g3_cp2

0x3ab6,	// (0x00039fe4) list_single_graphic_pane_t1_cp2_ParamLimits

0x3ab6,	// (0x00039fe4) list_single_graphic_pane_t1_cp2

0x24eb,	// (0x00038a19) list_single_number_pane_g1_cp2_ParamLimits

0x24eb,	// (0x00038a19) list_single_number_pane_g1_cp2

0x24f7,	// (0x00038a25) list_single_number_pane_g2_cp2

0x3ab6,	// (0x00039fe4) list_single_number_pane_t1_cp2_ParamLimits

0x3ab6,	// (0x00039fe4) list_single_number_pane_t1_cp2

0x3acc,	// (0x00039ffa) list_single_number_pane_t2_cp2_ParamLimits

0x3acc,	// (0x00039ffa) list_single_number_pane_t2_cp2

0x22e1,	// (0x0003880f) list_double2_pane_g1_cp2_ParamLimits

0x22e1,	// (0x0003880f) list_double2_pane_g1_cp2

0x22f2,	// (0x00038820) list_double2_pane_g2_cp2

0x2452,	// (0x00038980) list_double2_pane_t1_cp2_ParamLimits

0x2452,	// (0x00038980) list_double2_pane_t1_cp2

0x2468,	// (0x00038996) list_double2_pane_t2_cp2_ParamLimits

0x2468,	// (0x00038996) list_double2_pane_t2_cp2

0x247a,	// (0x000389a8) list_double_pane_g1_cp2_ParamLimits

0x247a,	// (0x000389a8) list_double_pane_g1_cp2

0x2486,	// (0x000389b4) list_double_pane_g2_cp2

0x248e,	// (0x000389bc) list_double_pane_t1_cp2_ParamLimits

0x248e,	// (0x000389bc) list_double_pane_t1_cp2

0x24a4,	// (0x000389d2) list_double_pane_t2_cp2_ParamLimits

0x24a4,	// (0x000389d2) list_double_pane_t2_cp2

0x24db,	// (0x00038a09) list_single_pane_cp2_g3

0x24eb,	// (0x00038a19) list_single_pane_g1_cp2_ParamLimits

0x24eb,	// (0x00038a19) list_single_pane_g1_cp2

0x24f7,	// (0x00038a25) list_single_pane_g2_cp2

0x24ff,	// (0x00038a2d) list_single_pane_t1_cp2_ParamLimits

0x24ff,	// (0x00038a2d) list_single_pane_t1_cp2

0x2517,	// (0x00038a45) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x2517,	// (0x00038a45) list_single_large_graphic_pane_g1_cp2

0x2525,	// (0x00038a53) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2525,	// (0x00038a53) list_single_large_graphic_pane_g2_cp2

0x2531,	// (0x00038a5f) list_single_large_graphic_pane_g3_cp2

0x2539,	// (0x00038a67) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x2539,	// (0x00038a67) list_single_large_graphic_pane_g4_cp1

0x2553,	// (0x00038a81) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2553,	// (0x00038a81) list_single_large_graphic_pane_t1_cp2

0x3a80,	// (0x00039fae) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3a80,	// (0x00039fae) list_single_graphic_heading_pane_g1_cp2

0x3a4d,	// (0x00039f7b) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x3a4d,	// (0x00039f7b) list_single_graphic_heading_pane_g4_cp2

0x24f7,	// (0x00038a25) list_single_graphic_heading_pane_g5_cp2

0x3a8c,	// (0x00039fba) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3a8c,	// (0x00039fba) list_single_graphic_heading_pane_t1_cp2

0x3aa2,	// (0x00039fd0) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x3aa2,	// (0x00039fd0) list_single_graphic_heading_pane_t2_cp2

0x3a41,	// (0x00039f6f) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3a41,	// (0x00039f6f) list_single_2graphic_pane_g1_cp2

0x3a4d,	// (0x00039f7b) list_single_2graphic_pane_g2_cp2_ParamLimits

0x3a4d,	// (0x00039f7b) list_single_2graphic_pane_g2_cp2

0x24f7,	// (0x00038a25) list_single_2graphic_pane_g3_cp2

0x3a5e,	// (0x00039f8c) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3a5e,	// (0x00039f8c) list_single_2graphic_pane_g4_cp2

0x3a6a,	// (0x00039f98) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3a6a,	// (0x00039f98) list_single_2graphic_pane_t1_cp2

0xb76d,	// (0x00041c9b) list_highlight_pane_g10_cp1

0x3619,	// (0x00039b47) list_highlight_pane_g1_cp1

0x3621,	// (0x00039b4f) list_highlight_pane_g2_cp1

0x3629,	// (0x00039b57) list_highlight_pane_g3_cp1

0x3631,	// (0x00039b5f) list_highlight_pane_g4_cp1

0x3639,	// (0x00039b67) list_highlight_pane_g5_cp1

0x3641,	// (0x00039b6f) list_highlight_pane_g6_cp1

0x3649,	// (0x00039b77) list_highlight_pane_g7_cp1

0x3651,	// (0x00039b7f) list_highlight_pane_g8_cp1

0x3659,	// (0x00039b87) list_highlight_pane_g9_cp1

0xc5f6,	// (0x00042b24) form_field_slider_pane_t3

0xc604,	// (0x00042b32) form_field_slider_pane_t4

0x3555,	// (0x00039a83) slider_form_pane_ParamLimits

0x3555,	// (0x00039a83) slider_form_pane

0xb777,	// (0x00041ca5) control_abbreviations

0xb777,	// (0x00041ca5) control_conventions

0xb777,	// (0x00041ca5) control_definitions

0xb777,	// (0x00041ca5) format_table_attribute

0x3d41,	// (0x0003a26f) bg_popup_preview_window_pane_g9

0xb777,	// (0x00041ca5) format_table_data2

0xb777,	// (0x00041ca5) format_table_data3

0xb777,	// (0x00041ca5) format_table_data_example

0x0008,

0xb777,	// (0x00041ca5) intro_purpose

0xf8c5,	// (0x00045df3) bg_popup_preview_window_pane_g

0xb777,	// (0x00041ca5) texts_category

0xb777,	// (0x00041ca5) texts_graphics

0x2569,	// (0x00038a97) text_digital

0x2578,	// (0x00038aa6) text_primary

0x2587,	// (0x00038ab5) text_primary_small

0x2596,	// (0x00038ac4) text_secondary

0x25a5,	// (0x00038ad3) text_title

0x44bb,	// (0x0003a9e9) bg_passive_tab_pane_g1_cp3_srt

0x0005,	// (0x00036533) bg_passive_tab_pane_g2_cp3_srt

0x44c4,	// (0x0003a9f2) bg_passive_tab_pane_g3_cp3_srt

0xb7c5,	// (0x00041cf3) bg_active_tab_pane_cp3_srt_ParamLimits

0xb7c5,	// (0x00041cf3) bg_active_tab_pane_cp3_srt

0x44cd,	// (0x0003a9fb) tabs_4_active_pane_srt_g1

0xc9de,	// (0x00042f0c) tabs_4_active_pane_srt_t1_ParamLimits

0xc9de,	// (0x00042f0c) tabs_4_active_pane_srt_t1

0x44bb,	// (0x0003a9e9) bg_active_tab_pane_g1_cp3_copy1

0x0005,	// (0x00036533) bg_active_tab_pane_g2_cp3_copy1

0x44c4,	// (0x0003a9f2) bg_active_tab_pane_g3_cp3_copy1

0xb7d3,	// (0x00041d01) tabs_2_long_active_pane_srt_ParamLimits

0xb7d3,	// (0x00041d01) tabs_2_long_active_pane_srt

0xb7d3,	// (0x00041d01) tabs_2_long_passive_pane_srt_ParamLimits

0xb7d3,	// (0x00041d01) tabs_2_long_passive_pane_srt

0x28db,	// (0x00038e09) bg_passive_tab_pane_cp4_srt_ParamLimits

0x28db,	// (0x00038e09) bg_passive_tab_pane_cp4_srt

0x417b,	// (0x0003a6a9) bg_passive_tab_pane_g1_cp4_srt

0x0005,	// (0x00036533) bg_passive_tab_pane_g2_cp4_srt

0x4184,	// (0x0003a6b2) bg_passive_tab_pane_g3_cp4_srt

0xb7d3,	// (0x00041d01) bg_active_tab_pane_cp4_srt_ParamLimits

0xb7d3,	// (0x00041d01) bg_active_tab_pane_cp4_srt

0xc7d6,	// (0x00042d04) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc7d6,	// (0x00042d04) tabs_2_long_active_pane_srt_t1

0x417b,	// (0x0003a6a9) bg_active_tab_pane_g1_cp4_srt

0x0005,	// (0x00036533) bg_active_tab_pane_g2_cp4_srt

0x4184,	// (0x0003a6b2) bg_active_tab_pane_g3_cp4_srt

0xb7c5,	// (0x00041cf3) tabs_3_long_active_pane_srt_ParamLimits

0xb7c5,	// (0x00041cf3) tabs_3_long_active_pane_srt

0xb7c5,	// (0x00041cf3) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb7c5,	// (0x00041cf3) tabs_3_long_passive_pane_cp_srt

0xb7c5,	// (0x00041cf3) tabs_3_long_passive_pane_srt_ParamLimits

0xb7c5,	// (0x00041cf3) tabs_3_long_passive_pane_srt

0x28db,	// (0x00038e09) bg_passive_tab_pane_cp5_srt_ParamLimits

0x28db,	// (0x00038e09) bg_passive_tab_pane_cp5_srt

0x227b,	// (0x000387a9) bg_passive_tab_pane_g1_cp5_srt

0x0005,	// (0x00036533) bg_passive_tab_pane_g2_cp5_srt

0x2284,	// (0x000387b2) bg_passive_tab_pane_g3_cp5_srt

0xb7d3,	// (0x00041d01) bg_active_tab_pane_cp5_srt_ParamLimits

0xb7d3,	// (0x00041d01) bg_active_tab_pane_cp5_srt

0xc7c0,	// (0x00042cee) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc7c0,	// (0x00042cee) tabs_3_long_active_pane_srt_t1

0x227b,	// (0x000387a9) bg_active_tab_pane_g1_cp5_srt

0x0005,	// (0x00036533) bg_active_tab_pane_g2_cp5_srt

0x2284,	// (0x000387b2) bg_active_tab_pane_g3_cp5_srt

0x415b,	// (0x0003a689) navi_text_pane_srt_t1

0x4153,	// (0x0003a681) navi_icon_pane_srt_g1

0x277d,	// (0x00038cab) midp_editing_number_pane_srt

0x25b4,	// (0x00038ae2) midp_ticker_pane_srt

0x2785,	// (0x00038cb3) midp_ticker_pane_srt_g1

0x278d,	// (0x00038cbb) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x00045c7b) midp_ticker_pane_srt_g

0x2795,	// (0x00038cc3) midp_ticker_pane_srt_t1

0x4144,	// (0x0003a672) midp_editing_number_pane_t1_copy1

0xa2b1,	// (0x000407df) listscroll_midp_pane

0xa2b1,	// (0x000407df) midp_form_pane

0x262b,	// (0x00038b59) midp_info_popup_window_ParamLimits

0x262b,	// (0x00038b59) midp_info_popup_window

0xbefc,	// (0x0004242a) bg_popup_sub_pane_cp50_ParamLimits

0xbefc,	// (0x0004242a) bg_popup_sub_pane_cp50

0x323b,	// (0x00039769) listscroll_midp_info_pane_ParamLimits

0x323b,	// (0x00039769) listscroll_midp_info_pane

0x321b,	// (0x00039749) listscroll_form_midp_pane_ParamLimits

0x321b,	// (0x00039749) listscroll_form_midp_pane

0x3227,	// (0x00039755) scroll_bar_cp050

0x321b,	// (0x00039749) list_midp_pane

0x4f6f,	// (0x0003b49d) signal_pane_g2_cp

0x3135,	// (0x00039663) listscroll_midp_info_pane_t1_ParamLimits

0x3135,	// (0x00039663) listscroll_midp_info_pane_t1

0x314d,	// (0x0003967b) listscroll_midp_info_pane_t2_ParamLimits

0x314d,	// (0x0003967b) listscroll_midp_info_pane_t2

0x318b,	// (0x000396b9) listscroll_midp_info_pane_t3_ParamLimits

0x318b,	// (0x000396b9) listscroll_midp_info_pane_t3

0x31c5,	// (0x000396f3) listscroll_midp_info_pane_t4_ParamLimits

0x31c5,	// (0x000396f3) listscroll_midp_info_pane_t4

0x0003,

0xf800,	// (0x00045d2e) listscroll_midp_info_pane_t_ParamLimits

0xf800,	// (0x00045d2e) listscroll_midp_info_pane_t

0xbf51,	// (0x0004247f) scroll_pane_cp21

0x30cf,	// (0x000395fd) form_midp_field_choice_group_pane

0x30d8,	// (0x00039606) form_midp_field_text_pane

0x311b,	// (0x00039649) form_midp_field_time_pane

0x3123,	// (0x00039651) form_midp_gauge_slider_pane

0x312c,	// (0x0003965a) form_midp_gauge_wait_pane

0xb777,	// (0x00041ca5) form_midp_image_pane

0xac6b,	// (0x00041199) list_single_midp_pane_ParamLimits

0xac6b,	// (0x00041199) list_single_midp_pane

0xc5d1,	// (0x00042aff) form_midp_field_text_pane_t1

0x2e85,	// (0x000393b3) input_focus_pane_cp050

0x30be,	// (0x000395ec) list_midp_form_text_pane

0x3062,	// (0x00039590) form_midp_field_choice_group_pane_t1

0x3070,	// (0x0003959e) input_focus_pane_cp051

0x3084,	// (0x000395b2) list_midp_choice_pane

0xb777,	// (0x00041ca5) status_idle_pane

0x3046,	// (0x00039574) form_midp_field_time_pane_t1

0xb76d,	// (0x00041c9b) wait_anim_pane_g2_copy1

0x3054,	// (0x00039582) form_midp_field_time_pane_t2

0x0001,

0x26db,	// (0x00038c09) aid_navinavi_width_2_pane

0xf7fb,	// (0x00045d29) form_midp_field_time_pane_t

0xb777,	// (0x00041ca5) input_focus_pane_cp052

0xb777,	// (0x00041ca5) bg_input_focus_pane_cp040

0x3006,	// (0x00039534) form_midp_gauge_slider_pane_t1

0x3014,	// (0x00039542) form_midp_gauge_slider_pane_t2

0xc5b5,	// (0x00042ae3) form_midp_gauge_slider_pane_t3

0xc5c3,	// (0x00042af1) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f2,	// (0x00045d20) form_midp_gauge_slider_pane_t

0x303e,	// (0x0003956c) form_midp_slider_pane

0xb7d3,	// (0x00041d01) bg_input_focus_pane_cp041_ParamLimits

0xb7d3,	// (0x00041d01) bg_input_focus_pane_cp041

0x2fd3,	// (0x00039501) form_midp_gauge_wait_pane_t1_ParamLimits

0x2fd3,	// (0x00039501) form_midp_gauge_wait_pane_t1

0x2fe5,	// (0x00039513) form_midp_gauge_wait_pane_t2_ParamLimits

0x2fe5,	// (0x00039513) form_midp_gauge_wait_pane_t2

0x0001,

0xf7ed,	// (0x00045d1b) form_midp_gauge_wait_pane_t_ParamLimits

0xf7ed,	// (0x00045d1b) form_midp_gauge_wait_pane_t

0x2ff7,	// (0x00039525) form_midp_wait_pane_ParamLimits

0x2ff7,	// (0x00039525) form_midp_wait_pane

0x2f9b,	// (0x000394c9) form_midp_image_pane_g1

0x2fa4,	// (0x000394d2) form_midp_image_pane_t1

0x2fb3,	// (0x000394e1) form_midp_image_pane_t2

0x2fc2,	// (0x000394f0) form_midp_image_pane_t3

0x0002,

0xf7e6,	// (0x00045d14) form_midp_image_pane_t

0x2f92,	// (0x000394c0) list_single_midp_pane_g1

0xd50f,	// (0x00043a3d) list_single_midp_pane_t1

0xc59e,	// (0x00042acc) list_midp_form_item_pane_ParamLimits

0xc59e,	// (0x00042acc) list_midp_form_item_pane

0x2683,	// (0x00038bb1) list_midp_form_item_pane_t1

0x2692,	// (0x00038bc0) midp_ticker_pane_g1

0x269e,	// (0x00038bcc) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x00045c61) midp_ticker_pane_g

0xa355,	// (0x00040883) midp_ticker_pane_t1

0xc95f,	// (0x00042e8d) midp_editing_number_pane_t1

0x438f,	// (0x0003a8bd) midp_editing_number_pane

0x439e,	// (0x0003a8cc) midp_ticker_pane

0x4134,	// (0x0003a662) ai_message_heading_pane

0xb777,	// (0x00041ca5) bg_popup_window_pane_cp14

0x413c,	// (0x0003a66a) listscroll_ai_message_pane

0x40ba,	// (0x0003a5e8) ai_message_heading_pane_g1_ParamLimits

0x40ba,	// (0x0003a5e8) ai_message_heading_pane_g1

0x40c6,	// (0x0003a5f4) ai_message_heading_pane_g2_ParamLimits

0x40c6,	// (0x0003a5f4) ai_message_heading_pane_g2

0x40d4,	// (0x0003a602) ai_message_heading_pane_g3_ParamLimits

0x40d4,	// (0x0003a602) ai_message_heading_pane_g3

0x40e0,	// (0x0003a60e) ai_message_heading_pane_g4_ParamLimits

0x40e0,	// (0x0003a60e) ai_message_heading_pane_g4

0x0003,

0xf927,	// (0x00045e55) ai_message_heading_pane_g_ParamLimits

0xf927,	// (0x00045e55) ai_message_heading_pane_g

0x40ec,	// (0x0003a61a) ai_message_heading_pane_t1_ParamLimits

0x40ec,	// (0x0003a61a) ai_message_heading_pane_t1

0x4106,	// (0x0003a634) ai_message_heading_pane_t2_ParamLimits

0x4106,	// (0x0003a634) ai_message_heading_pane_t2

0x0001,

0xf930,	// (0x00045e5e) ai_message_heading_pane_t_ParamLimits

0xf930,	// (0x00045e5e) ai_message_heading_pane_t

0x411a,	// (0x0003a648) bg_popup_heading_pane_cp1_ParamLimits

0x411a,	// (0x0003a648) bg_popup_heading_pane_cp1

0x40a8,	// (0x0003a5d6) list_ai_message_pane_ParamLimits

0x40a8,	// (0x0003a5d6) list_ai_message_pane

0xbf51,	// (0x0004247f) scroll_pane_cp10

0x4044,	// (0x0003a572) list_ai_message_pane_g1

0x404c,	// (0x0003a57a) list_ai_message_pane_g2

0x0001,

0xf904,	// (0x00045e32) list_ai_message_pane_g

0x4054,	// (0x0003a582) list_ai_message_pane_t1_ParamLimits

0x4054,	// (0x0003a582) list_ai_message_pane_t1

0x4069,	// (0x0003a597) list_ai_message_pane_t2_ParamLimits

0x4069,	// (0x0003a597) list_ai_message_pane_t2

0x407e,	// (0x0003a5ac) list_ai_message_pane_t3_ParamLimits

0x407e,	// (0x0003a5ac) list_ai_message_pane_t3

0x4093,	// (0x0003a5c1) list_ai_message_pane_t4_ParamLimits

0x4093,	// (0x0003a5c1) list_ai_message_pane_t4

0x0003,

0xf909,	// (0x00045e37) list_ai_message_pane_t_ParamLimits

0xf909,	// (0x00045e37) list_ai_message_pane_t

0xc7a6,	// (0x00042cd4) cell_ai_soft_ind_pane_ParamLimits

0xc7a6,	// (0x00042cd4) cell_ai_soft_ind_pane

0x26bc,	// (0x00038bea) cell_ai_soft_ind_pane_g1_ParamLimits

0x26bc,	// (0x00038bea) cell_ai_soft_ind_pane_g1

0xb777,	// (0x00041ca5) grid_highlight_cp1

0x26c9,	// (0x00038bf7) text_secondary_cp56_ParamLimits

0x26c9,	// (0x00038bf7) text_secondary_cp56

0x4002,	// (0x0003a530) example_general_pane_ParamLimits

0x4002,	// (0x0003a530) example_general_pane

0x400e,	// (0x0003a53c) example_parent_pane_g1_ParamLimits

0x400e,	// (0x0003a53c) example_parent_pane_g1

0x401a,	// (0x0003a548) example_parent_pane_t1_ParamLimits

0x401a,	// (0x0003a548) example_parent_pane_t1

0xa8b7,	// (0x00040de5) popup_preview_text_window_ParamLimits

0xa8b7,	// (0x00040de5) popup_preview_text_window

0x24e3,	// (0x00038a11) list_single_pane_cp2_g4

0xb9d4,	// (0x00041f02) bg_popup_preview_window_pane_ParamLimits

0xb9d4,	// (0x00041f02) bg_popup_preview_window_pane

0x3d4b,	// (0x0003a279) popup_preview_text_window_t1_ParamLimits

0x3d4b,	// (0x0003a279) popup_preview_text_window_t1

0x3d69,	// (0x0003a297) popup_preview_text_window_t2_ParamLimits

0x3d69,	// (0x0003a297) popup_preview_text_window_t2

0x3db2,	// (0x0003a2e0) popup_preview_text_window_t3_ParamLimits

0x3db2,	// (0x0003a2e0) popup_preview_text_window_t3

0x3df7,	// (0x0003a325) popup_preview_text_window_t4_ParamLimits

0x3df7,	// (0x0003a325) popup_preview_text_window_t4

0x0004,

0xf8d8,	// (0x00045e06) popup_preview_text_window_t_ParamLimits

0xf8d8,	// (0x00045e06) popup_preview_text_window_t

0x3e75,	// (0x0003a3a3) scroll_pane_cp11

0x2e11,	// (0x0003933f) bg_popup_preview_window_pane_g1

0x3cff,	// (0x0003a22d) bg_popup_preview_window_pane_g2

0x3d09,	// (0x0003a237) bg_popup_preview_window_pane_g3

0x3d13,	// (0x0003a241) bg_popup_preview_window_pane_g4

0x3d1d,	// (0x0003a24b) bg_popup_preview_window_pane_g5

0x3d27,	// (0x0003a255) bg_popup_preview_window_pane_g6

0x3d2f,	// (0x0003a25d) bg_popup_preview_window_pane_g7

0x3d37,	// (0x0003a265) bg_popup_preview_window_pane_g8

0xec4f,	// (0x0004517d) aid_popup_width_pane

0xa827,	// (0x00040d55) popup_midp_note_alarm_window_ParamLimits

0xa827,	// (0x00040d55) popup_midp_note_alarm_window

0xbe09,	// (0x00042337) data_form_pane_ParamLimits

0x9e3b,	// (0x00040369) form_field_data_pane_g1

0x9e45,	// (0x00040373) form_field_data_pane_t1_ParamLimits

0xbe15,	// (0x00042343) input_focus_pane_ParamLimits

0xd38c,	// (0x000438ba) data_form_wide_pane_ParamLimits

0xd39d,	// (0x000438cb) form_field_data_wide_pane_g1

0xd3a9,	// (0x000438d7) form_field_data_wide_pane_t1_ParamLimits

0xbb90,	// (0x000420be) input_focus_pane_cp6_ParamLimits

0x9f73,	// (0x000404a1) input_popup_find_pane_g1_ParamLimits

0x9f73,	// (0x000404a1) input_popup_find_pane_g1

0xf016,	// (0x00045544) aid_navi_side_left_pane

0xf02b,	// (0x00045559) aid_navi_side_right_pane

0x3714,	// (0x00039c42) bg_popup_window_pane_cp30_ParamLimits

0x3714,	// (0x00039c42) bg_popup_window_pane_cp30

0x378e,	// (0x00039cbc) popup_midp_note_alarm_window_g1_ParamLimits

0x378e,	// (0x00039cbc) popup_midp_note_alarm_window_g1

0x37be,	// (0x00039cec) popup_midp_note_alarm_window_t1_ParamLimits

0x37be,	// (0x00039cec) popup_midp_note_alarm_window_t1

0x385f,	// (0x00039d8d) popup_midp_note_alarm_window_t2_ParamLimits

0x385f,	// (0x00039d8d) popup_midp_note_alarm_window_t2

0x390d,	// (0x00039e3b) popup_midp_note_alarm_window_t3_ParamLimits

0x390d,	// (0x00039e3b) popup_midp_note_alarm_window_t3

0x393f,	// (0x00039e6d) popup_midp_note_alarm_window_t4_ParamLimits

0x393f,	// (0x00039e6d) popup_midp_note_alarm_window_t4

0x3965,	// (0x00039e93) popup_midp_note_alarm_window_t5_ParamLimits

0x3965,	// (0x00039e93) popup_midp_note_alarm_window_t5

0x000a,

0xf875,	// (0x00045da3) popup_midp_note_alarm_window_t_ParamLimits

0xf875,	// (0x00045da3) popup_midp_note_alarm_window_t

0x3a11,	// (0x00039f3f) wait_bar_pane_cp1_ParamLimits

0x3a11,	// (0x00039f3f) wait_bar_pane_cp1

0xb777,	// (0x00041ca5) wait_anim_pane_copy1

0xb777,	// (0x00041ca5) wait_border_pane_copy1

0x33f9,	// (0x00039927) wait_border_pane_g1_copy1

0xd3c3,	// (0x000438f1) form_field_popup_pane_g1

0x9e5f,	// (0x0004038d) form_field_popup_pane_t1_ParamLimits

0xbe15,	// (0x00042343) input_focus_pane_cp7_ParamLimits

0xbe43,	// (0x00042371) list_form_pane_ParamLimits

0xd3cb,	// (0x000438f9) form_field_popup_wide_pane_g1

0xd3d3,	// (0x00043901) form_field_popup_wide_pane_t1_ParamLimits

0xbe15,	// (0x00042343) input_focus_pane_cp8_ParamLimits

0xbe4f,	// (0x0004237d) list_form_wide_pane_ParamLimits

0x4556,	// (0x0003aa84) aid_size_cell_graphic_pane

0x9ede,	// (0x0004040c) data_form_pane_t1_ParamLimits

0xadef,	// (0x0004131d) data_form_wide_pane_t1_ParamLimits

0xc205,	// (0x00042733) bg_status_flat_pane

0x9637,	// (0x0003fb65) title_pane_t1_ParamLimits

0xb78d,	// (0x00041cbb) title_pane_t2_ParamLimits

0xb7b3,	// (0x00041ce1) title_pane_t3_ParamLimits

0xf532,	// (0x00045a60) title_pane_t_ParamLimits

0xa0b6,	// (0x000405e4) level_1_signal_ParamLimits

0xa0c8,	// (0x000405f6) level_2_signal_ParamLimits

0xa0db,	// (0x00040609) level_3_signal_ParamLimits

0xa0ee,	// (0x0004061c) level_4_signal_ParamLimits

0xa101,	// (0x0004062f) level_5_signal_ParamLimits

0xa114,	// (0x00040642) level_6_signal_ParamLimits

0xa127,	// (0x00040655) level_7_signal_ParamLimits

0xa0b6,	// (0x000405e4) level_1_battery_ParamLimits

0xa0c8,	// (0x000405f6) level_2_battery_ParamLimits

0xa0db,	// (0x00040609) level_3_battery_ParamLimits

0xa0ee,	// (0x0004061c) level_4_battery_ParamLimits

0xa101,	// (0x0004062f) level_5_battery_ParamLimits

0xa114,	// (0x00040642) level_6_battery_ParamLimits

0xa127,	// (0x00040655) level_7_battery_ParamLimits

0x3619,	// (0x00039b47) bg_status_flat_pane_g1

0x3621,	// (0x00039b4f) bg_status_flat_pane_g2

0x3629,	// (0x00039b57) bg_status_flat_pane_g3

0x3631,	// (0x00039b5f) bg_status_flat_pane_g4

0x3639,	// (0x00039b67) bg_status_flat_pane_g5

0x3641,	// (0x00039b6f) bg_status_flat_pane_g6

0x3649,	// (0x00039b77) bg_status_flat_pane_g7

0x96cb,	// (0x0003fbf9) tabs_3_active_pane_t1_ParamLimits

0x96cb,	// (0x0003fbf9) tabs_3_passive_pane_t1_ParamLimits

0x96e5,	// (0x0003fc13) tabs_4_active_pane_t1_ParamLimits

0x96e5,	// (0x0003fc13) tabs_4_1_passive_pane_t1_ParamLimits

0x9f89,	// (0x000404b7) tabs_2_active_pane_t1_ParamLimits

0x9f89,	// (0x000404b7) tabs_2_passive_pane_t1_ParamLimits

0xb7d3,	// (0x00041d01) bg_active_tab_pane_cp4_ParamLimits

0x9f9b,	// (0x000404c9) tabs_2_long_active_pane_t1_ParamLimits

0x28db,	// (0x00038e09) bg_passive_tab_pane_cp4_ParamLimits

0x0a51,	// (0x00036f7f) list_single_midp_graphic_pane_t1_ParamLimits

0xb7d3,	// (0x00041d01) bg_active_tab_pane_cp5_ParamLimits

0x9fae,	// (0x000404dc) tabs_3_long_active_pane_t1_ParamLimits

0x28db,	// (0x00038e09) bg_passive_tab_pane_cp5_ParamLimits

0x0a51,	// (0x00036f7f) list_single_midp_graphic_pane_t1

0xc205,	// (0x00042733) bg_status_flat_pane_ParamLimits

0x2a95,	// (0x00038fc3) indicator_pane_cp2_ParamLimits

0x2a95,	// (0x00038fc3) indicator_pane_cp2

0xc39b,	// (0x000428c9) navi_pane_srt_ParamLimits

0xc39b,	// (0x000428c9) navi_pane_srt

0x2bfc,	// (0x0003912a) popup_clock_digital_analogue_window_cp1

0xb817,	// (0x00041d45) indicator_pane_t1

0x25b4,	// (0x00038ae2) copy_highlight_pane

0x25b4,	// (0x00038ae2) cursor_graphics_pane

0x25b4,	// (0x00038ae2) graphic_within_text_pane

0x25b4,	// (0x00038ae2) link_highlight_pane

0x3e38,	// (0x0003a366) popup_preview_text_window_t5_ParamLimits

0x3e38,	// (0x0003a366) popup_preview_text_window_t5

0x26e5,	// (0x00038c13) cursor_digital_pane

0x26e5,	// (0x00038c13) cursor_primary_pane

0x26f6,	// (0x00038c24) cursor_primary_small_pane

0x26fe,	// (0x00038c2c) cursor_secondary_pane

0x2706,	// (0x00038c34) cursor_title_pane

0x26e5,	// (0x00038c13) link_highlight_digital_pane

0x26ed,	// (0x00038c1b) link_highlight_primary_pane

0x26f6,	// (0x00038c24) link_highlight_primary_small_pane

0x26fe,	// (0x00038c2c) link_highlight_secondary_pane

0x2706,	// (0x00038c34) link_highlight_title_pane

0x26e5,	// (0x00038c13) copy_highlight_digital_pane

0x26e5,	// (0x00038c13) copy_highlight_primary_pane

0x26f6,	// (0x00038c24) copy_highlight_primary_small_pane

0x26fe,	// (0x00038c2c) copy_highlight_secondary_pane

0x2706,	// (0x00038c34) copy_highlight_title_pane

0x26fe,	// (0x00038c2c) graphic_text_digital_pane

0x36b7,	// (0x00039be5) graphic_text_primary_pane

0x36c0,	// (0x00039bee) graphic_text_primary_small_pane

0x26f6,	// (0x00038c24) graphic_text_secondary_pane

0x26e5,	// (0x00038c13) graphic_text_title_pane

0xa367,	// (0x00040895) cursor_primary_pane_g1

0x36a9,	// (0x00039bd7) cursor_text_primary_t1

0xc626,	// (0x00042b54) cursor_primary_small_pane_g1

0x369b,	// (0x00039bc9) cursor_text_primary_small_t1

0xc61c,	// (0x00042b4a) cursor_primary_small_pane_g1_copy1

0x3683,	// (0x00039bb1) cursor_text_primary_small_t1_copy1

0x3661,	// (0x00039b8f) cursor_text_title_t1

0xc612,	// (0x00042b40) cursor_title_pane_g1

0xa367,	// (0x00040895) cursor_digital_pane_g1

0x2718,	// (0x00038c46) cursor_text_digital_t1

0x2726,	// (0x00038c54) link_highlight_primary_pane_g1

0x360a,	// (0x00039b38) link_highlight_primary_pane_t1

0x2726,	// (0x00038c54) link_highlight_primary_small_pane_g1

0x272e,	// (0x00038c5c) link_highlight_primary_small_pane_t1

0x273d,	// (0x00038c6b) link_highlight_secondary_pane_g1

0x2745,	// (0x00038c73) link_highlight_secondary_pane_t1

0x357e,	// (0x00039aac) link_highlight_title_pane_g1

0x3586,	// (0x00039ab4) link_highlight_title_pane_t1

0x3567,	// (0x00039a95) link_highlight_digital_pane_g1

0x356f,	// (0x00039a9d) link_highlight_digital_pane_t1

0x342f,	// (0x0003995d) copy_highlight_primary_pane_g1

0x3446,	// (0x00039974) copy_highlight_primary_pane_t1

0x342f,	// (0x0003995d) copy_highlight_primary_small_pane_g1

0x3437,	// (0x00039965) copy_highlight_primary_small_pane_t1

0x2754,	// (0x00038c82) copy_highlight_secondary_pane_g1

0x275c,	// (0x00038c8a) copy_highlight_secondary_pane_t1

0x3418,	// (0x00039946) copy_highlight_title_pane_g1

0x3420,	// (0x0003994e) copy_highlight_title_pane_t1

0x342f,	// (0x0003995d) copy_highlight_digital_pane_g1

0x4728,	// (0x0003ac56) copy_highlight_digital_pane_t1

0x467c,	// (0x0003abaa) graphic_text_primary_pane_g1

0x470c,	// (0x0003ac3a) graphic_text_primary_pane_t1

0x471a,	// (0x0003ac48) graphic_text_primary_pane_t2

0x0001,

0xf9a4,	// (0x00045ed2) graphic_text_primary_pane_t

0x46e8,	// (0x0003ac16) graphic_text_primary_small_pane_g1

0x46f0,	// (0x0003ac1e) graphic_text_primary_small_pane_t1

0x46fe,	// (0x0003ac2c) graphic_text_primary_small_pane_t2

0x0001,

0xf99f,	// (0x00045ecd) graphic_text_primary_small_pane_t

0x46c4,	// (0x0003abf2) graphic_text_secondary_pane_g1

0x46cc,	// (0x0003abfa) graphic_text_secondary_pane_t1

0x46da,	// (0x0003ac08) graphic_text_secondary_pane_t2

0x0001,

0xf99a,	// (0x00045ec8) graphic_text_secondary_pane_t

0x46a0,	// (0x0003abce) graphic_text_title_pane_g1

0x46a8,	// (0x0003abd6) graphic_text_title_pane_t1

0x46b6,	// (0x0003abe4) graphic_text_title_pane_t2

0x0001,

0xf995,	// (0x00045ec3) graphic_text_title_pane_t

0x467c,	// (0x0003abaa) graphic_text_digital_pane_g1

0x4684,	// (0x0003abb2) graphic_text_digital_pane_t1

0x4692,	// (0x0003abc0) graphic_text_digital_pane_t2

0x0001,

0xf990,	// (0x00045ebe) graphic_text_digital_pane_t

0xb7d3,	// (0x00041d01) navi_icon_pane_srt_ParamLimits

0xb7d3,	// (0x00041d01) navi_icon_pane_srt

0xb777,	// (0x00041ca5) navi_midp_pane_srt

0xb777,	// (0x00041ca5) navi_navi_pane_srt

0xb7d3,	// (0x00041d01) navi_text_pane_srt_ParamLimits

0xb7d3,	// (0x00041d01) navi_text_pane_srt

0x4647,	// (0x0003ab75) navi_navi_icon_text_pane_srt

0x464f,	// (0x0003ab7d) navi_navi_pane_srt_g1_ParamLimits

0x464f,	// (0x0003ab7d) navi_navi_pane_srt_g1

0x4661,	// (0x0003ab8f) navi_navi_pane_srt_g2_ParamLimits

0x4661,	// (0x0003ab8f) navi_navi_pane_srt_g2

0x0001,

0xf98b,	// (0x00045eb9) navi_navi_pane_srt_g_ParamLimits

0xf98b,	// (0x00045eb9) navi_navi_pane_srt_g

0x4673,	// (0x0003aba1) navi_navi_tabs_pane_srt

0x4647,	// (0x0003ab75) navi_navi_text_pane_srt

0x4647,	// (0x0003ab75) navi_navi_volume_pane_srt

0x4638,	// (0x0003ab66) navi_navi_text_pane_srt_t1

0x0ed8,	// (0x00037406) navi_navi_volume_pane_srt_g1

0x0ee0,	// (0x0003740e) volume_small_pane_srt_ParamLimits

0x0ee0,	// (0x0003740e) volume_small_pane_srt

0x0192,	// (0x000366c0) volume_small_pane_srt_g1_ParamLimits

0x0192,	// (0x000366c0) volume_small_pane_srt_g1

0x01a2,	// (0x000366d0) volume_small_pane_srt_g2_ParamLimits

0x01a2,	// (0x000366d0) volume_small_pane_srt_g2

0x01b3,	// (0x000366e1) volume_small_pane_srt_g3_ParamLimits

0x01b3,	// (0x000366e1) volume_small_pane_srt_g3

0x01c4,	// (0x000366f2) volume_small_pane_srt_g4_ParamLimits

0x01c4,	// (0x000366f2) volume_small_pane_srt_g4

0x01d5,	// (0x00036703) volume_small_pane_srt_g5_ParamLimits

0x01d5,	// (0x00036703) volume_small_pane_srt_g5

0x01e6,	// (0x00036714) volume_small_pane_srt_g6_ParamLimits

0x01e6,	// (0x00036714) volume_small_pane_srt_g6

0x01f7,	// (0x00036725) volume_small_pane_srt_g7_ParamLimits

0x01f7,	// (0x00036725) volume_small_pane_srt_g7

0x0208,	// (0x00036736) volume_small_pane_srt_g8_ParamLimits

0x0208,	// (0x00036736) volume_small_pane_srt_g8

0x0219,	// (0x00036747) volume_small_pane_srt_g9_ParamLimits

0x0219,	// (0x00036747) volume_small_pane_srt_g9

0x022a,	// (0x00036758) volume_small_pane_srt_g10_ParamLimits

0x022a,	// (0x00036758) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x00045c66) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x00045c66) volume_small_pane_srt_g

0xba89,	// (0x00041fb7) query_popup_data_pane_cp2

0x461e,	// (0x0003ab4c) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x461e,	// (0x0003ab4c) navi_navi_icon_text_pane_srt_t1

0x36b7,	// (0x00039be5) navi_tabs_2_long_pane_srt

0x36b7,	// (0x00039be5) navi_tabs_2_pane_srt

0x36b7,	// (0x00039be5) navi_tabs_3_long_pane_srt

0x36b7,	// (0x00039be5) navi_tabs_3_pane_srt

0x36b7,	// (0x00039be5) navi_tabs_4_pane_srt

0x0eb8,	// (0x000373e6) tabs_2_active_pane_srt_ParamLimits

0x0eb8,	// (0x000373e6) tabs_2_active_pane_srt

0x0ec8,	// (0x000373f6) tabs_2_passive_pane_srt_ParamLimits

0x0ec8,	// (0x000373f6) tabs_2_passive_pane_srt

0x2e85,	// (0x000393b3) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2e85,	// (0x000393b3) bg_passive_tab_pane_cp1_srt

0x45ea,	// (0x0003ab18) bg_passive_tab_pane_g1_cp1_srt

0x0005,	// (0x00036533) bg_passive_tab_pane_g2_cp1_srt

0x45f3,	// (0x0003ab21) bg_passive_tab_pane_g3_cp1_srt

0xb7c5,	// (0x00041cf3) bg_active_tab_pane_cp1_srt_ParamLimits

0xb7c5,	// (0x00041cf3) bg_active_tab_pane_cp1_srt

0x45fc,	// (0x0003ab2a) tabs_2_active_pane_srt_g1

0xca66,	// (0x00042f94) tabs_2_active_pane_srt_t1_ParamLimits

0xca66,	// (0x00042f94) tabs_2_active_pane_srt_t1

0x45ea,	// (0x0003ab18) bg_active_tab_pane_g1_cp1_srt

0x0005,	// (0x00036533) bg_active_tab_pane_g2_cp1_srt

0x45f3,	// (0x0003ab21) bg_active_tab_pane_g3_cp1_srt

0x0e85,	// (0x000373b3) tabs_3_active_pane_srt_ParamLimits

0x0e85,	// (0x000373b3) tabs_3_active_pane_srt

0x0e96,	// (0x000373c4) tabs_3_passive_pane_cp_srt_ParamLimits

0x0e96,	// (0x000373c4) tabs_3_passive_pane_cp_srt

0x0ea7,	// (0x000373d5) tabs_3_passive_pane_srt_ParamLimits

0x0ea7,	// (0x000373d5) tabs_3_passive_pane_srt

0x2e85,	// (0x000393b3) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2e85,	// (0x000393b3) bg_passive_tab_pane_cp2_srt

0x276b,	// (0x00038c99) bg_passive_tab_pane_g1_cp2_srt

0x0005,	// (0x00036533) bg_passive_tab_pane_g2_cp2_srt

0x2774,	// (0x00038ca2) bg_passive_tab_pane_g3_cp2_srt

0xb7c5,	// (0x00041cf3) bg_active_tab_pane_cp2_srt_ParamLimits

0xb7c5,	// (0x00041cf3) bg_active_tab_pane_cp2_srt

0x45d0,	// (0x0003aafe) tabs_3_active_pane_srt_g1

0xca50,	// (0x00042f7e) tabs_3_active_pane_srt_t1_ParamLimits

0xca50,	// (0x00042f7e) tabs_3_active_pane_srt_t1

0x276b,	// (0x00038c99) bg_active_tab_pane_g1_cp2_srt

0x0005,	// (0x00036533) bg_active_tab_pane_g2_cp2_srt

0x2774,	// (0x00038ca2) bg_active_tab_pane_g3_cp2_srt

0x0e3d,	// (0x0003736b) tabs_4_active_pane_srt_ParamLimits

0x0e3d,	// (0x0003736b) tabs_4_active_pane_srt

0x0e4f,	// (0x0003737d) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0e4f,	// (0x0003737d) tabs_4_passive_pane_cp2_srt

0x037c,	// (0x000368aa) aid_size_cell_toolbar

0x41ee,	// (0x0003a71c) main_idle_act_pane_ParamLimits

0x055b,	// (0x00036a89) popup_large_graphic_colour_window_ParamLimits

0xab7d,	// (0x000410ab) popup_toolbar_window_ParamLimits

0xab7d,	// (0x000410ab) popup_toolbar_window

0xd534,	// (0x00043a62) list_single_graphic_2heading_pane_ParamLimits

0xd534,	// (0x00043a62) list_single_graphic_2heading_pane

0xc129,	// (0x00042657) aid_size_cell_apps_grid_lsc_pane

0xc13b,	// (0x00042669) aid_size_cell_apps_grid_prt_pane

0x28db,	// (0x00038e09) bg_wml_button_pane_cp1_ParamLimits

0x28db,	// (0x00038e09) bg_wml_button_pane_cp1

0xc5d1,	// (0x00042aff) form_midp_field_text_pane_t1_ParamLimits

0x2e85,	// (0x000393b3) input_focus_pane_cp050_ParamLimits

0x30be,	// (0x000395ec) list_midp_form_text_pane_ParamLimits

0x3070,	// (0x0003959e) input_focus_pane_cp051_ParamLimits

0x3084,	// (0x000395b2) list_midp_choice_pane_ParamLimits

0xc56a,	// (0x00042a98) list_single_2graphic_pane_cp3_ParamLimits

0xc56a,	// (0x00042a98) list_single_2graphic_pane_cp3

0xc57d,	// (0x00042aab) list_single_midp_graphic_pane_ParamLimits

0xc57d,	// (0x00042aab) list_single_midp_graphic_pane

0xeeab,	// (0x000453d9) list_single_graphic_2heading_pane_g1_ParamLimits

0xeeab,	// (0x000453d9) list_single_graphic_2heading_pane_g1

0xeeb7,	// (0x000453e5) list_single_graphic_2heading_pane_g4_ParamLimits

0xeeb7,	// (0x000453e5) list_single_graphic_2heading_pane_g4

0xeec3,	// (0x000453f1) list_single_graphic_2heading_pane_g5_ParamLimits

0xeec3,	// (0x000453f1) list_single_graphic_2heading_pane_g5

0x0002,

0xf78b,	// (0x00045cb9) list_single_graphic_2heading_pane_g_ParamLimits

0xf78b,	// (0x00045cb9) list_single_graphic_2heading_pane_g

0xeecf,	// (0x000453fd) list_single_graphic_2heading_pane_t1_ParamLimits

0xeecf,	// (0x000453fd) list_single_graphic_2heading_pane_t1

0xeee3,	// (0x00045411) list_single_graphic_2heading_pane_t2_ParamLimits

0xeee3,	// (0x00045411) list_single_graphic_2heading_pane_t2

0xeeff,	// (0x0004542d) list_single_graphic_2heading_pane_t3_ParamLimits

0xeeff,	// (0x0004542d) list_single_graphic_2heading_pane_t3

0x0002,

0xf792,	// (0x00045cc0) list_single_graphic_2heading_pane_t_ParamLimits

0xf792,	// (0x00045cc0) list_single_graphic_2heading_pane_t

0x2d4f,	// (0x0003927d) bg_popup_sub_pane_cp2

0x2d79,	// (0x000392a7) grid_toobar_pane

0x09c1,	// (0x00036eef) cell_toolbar_pane_ParamLimits

0x09c1,	// (0x00036eef) cell_toolbar_pane

0x2db5,	// (0x000392e3) cell_toolbar_pane_g1_ParamLimits

0x2db5,	// (0x000392e3) cell_toolbar_pane_g1

0x2dc9,	// (0x000392f7) cell_toolbar_pane_g2_ParamLimits

0x2dc9,	// (0x000392f7) cell_toolbar_pane_g2

0x0001,

0xf7a0,	// (0x00045cce) cell_toolbar_pane_g_ParamLimits

0xf7a0,	// (0x00045cce) cell_toolbar_pane_g

0x2deb,	// (0x00039319) grid_highlight_pane_cp2_ParamLimits

0x2deb,	// (0x00039319) grid_highlight_pane_cp2

0x2e05,	// (0x00039333) toolbar_button_pane

0x2e11,	// (0x0003933f) toolbar_button_pane_g1

0x2e19,	// (0x00039347) toolbar_button_pane_g2

0x2e21,	// (0x0003934f) toolbar_button_pane_g3

0x2e29,	// (0x00039357) toolbar_button_pane_g4

0x2e31,	// (0x0003935f) toolbar_button_pane_g5

0x2e39,	// (0x00039367) toolbar_button_pane_g6

0x2e41,	// (0x0003936f) toolbar_button_pane_g7

0x2e49,	// (0x00039377) toolbar_button_pane_g8

0x2e51,	// (0x0003937f) toolbar_button_pane_g9

0x0009,

0xf7a5,	// (0x00045cd3) toolbar_button_pane_g

0x09f9,	// (0x00036f27) list_single_2graphic_pane_g1_cp3_ParamLimits

0x09f9,	// (0x00036f27) list_single_2graphic_pane_g1_cp3

0xabf9,	// (0x00041127) list_single_2graphic_pane_g2_cp3_ParamLimits

0xabf9,	// (0x00041127) list_single_2graphic_pane_g2_cp3

0x0a16,	// (0x00036f44) list_single_2graphic_pane_g3_cp3

0x0a1e,	// (0x00036f4c) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0a1e,	// (0x00036f4c) list_single_2graphic_pane_g4_cp3

0x0a2a,	// (0x00036f58) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0a2a,	// (0x00036f58) list_single_2graphic_pane_t1_cp3

0x0a45,	// (0x00036f73) list_single_midp_graphic_pane_g2_ParamLimits

0x0a45,	// (0x00036f73) list_single_midp_graphic_pane_g2

0x0384,	// (0x000368b2) aid_zoom_text_primary

0xeea3,	// (0x000453d1) aid_zoom_text_secondary

0x2825,	// (0x00038d53) status_small_pane_g7_ParamLimits

0x2825,	// (0x00038d53) status_small_pane_g7

0x2848,	// (0x00038d76) status_small_pane_t1_ParamLimits

0x9607,	// (0x0003fb35) title_pane_g2

0x0003,

0xf529,	// (0x00045a57) title_pane_g

0x98a7,	// (0x0003fdd5) aid_size_cell_colour_1_pane_ParamLimits

0x98a7,	// (0x0003fdd5) aid_size_cell_colour_1_pane

0x98bb,	// (0x0003fde9) aid_size_cell_colour_2_pane_ParamLimits

0x98bb,	// (0x0003fde9) aid_size_cell_colour_2_pane

0x98cf,	// (0x0003fdfd) aid_size_cell_colour_3_pane_ParamLimits

0x98cf,	// (0x0003fdfd) aid_size_cell_colour_3_pane

0x98e3,	// (0x0003fe11) aid_size_cell_colour_4_pane_ParamLimits

0x98e3,	// (0x0003fe11) aid_size_cell_colour_4_pane

0xef53,	// (0x00045481) title_pane_stacon_g1_ParamLimits

0xef53,	// (0x00045481) title_pane_stacon_g1

0x349d,	// (0x000399cb) popup_note_wait_window_g3_ParamLimits

0x349d,	// (0x000399cb) popup_note_wait_window_g3

0x3514,	// (0x00039a42) popup_note_wait_window_t5_ParamLimits

0x3514,	// (0x00039a42) popup_note_wait_window_t5

0xb777,	// (0x00041ca5) main_feb_china_hwr_fs_writing_pane

0xa50e,	// (0x00040a3c) popup_feb_china_hwr_fs_window_ParamLimits

0xa50e,	// (0x00040a3c) popup_feb_china_hwr_fs_window

0xac0a,	// (0x00041138) aid_size_cell_hwr_fs_ParamLimits

0xac0a,	// (0x00041138) aid_size_cell_hwr_fs

0x2e85,	// (0x000393b3) bg_popup_sub_pane_cp3_ParamLimits

0x2e85,	// (0x000393b3) bg_popup_sub_pane_cp3

0xac1f,	// (0x0004114d) grid_hwr_fs_pane_ParamLimits

0xac1f,	// (0x0004114d) grid_hwr_fs_pane

0x0a94,	// (0x00036fc2) linegrid_hwr_fs_pane_ParamLimits

0x0a94,	// (0x00036fc2) linegrid_hwr_fs_pane

0xac37,	// (0x00041165) cell_hwr_fs_pane_ParamLimits

0xac37,	// (0x00041165) cell_hwr_fs_pane

0x2e91,	// (0x000393bf) linegrid_hwr_fs_pane_g1_ParamLimits

0x2e91,	// (0x000393bf) linegrid_hwr_fs_pane_g1

0xc53e,	// (0x00042a6c) linegrid_hwr_fs_pane_g2_ParamLimits

0xc53e,	// (0x00042a6c) linegrid_hwr_fs_pane_g2

0x2eaf,	// (0x000393dd) linegrid_hwr_fs_pane_g3_ParamLimits

0x2eaf,	// (0x000393dd) linegrid_hwr_fs_pane_g3

0x0ac8,	// (0x00036ff6) linegrid_hwr_fs_pane_g4_ParamLimits

0x0ac8,	// (0x00036ff6) linegrid_hwr_fs_pane_g4

0x0ae6,	// (0x00037014) linegrid_hwr_fs_pane_g5_ParamLimits

0x0ae6,	// (0x00037014) linegrid_hwr_fs_pane_g5

0x0004,

0xf7cb,	// (0x00045cf9) linegrid_hwr_fs_pane_g_ParamLimits

0xf7cb,	// (0x00045cf9) linegrid_hwr_fs_pane_g

0x2ebb,	// (0x000393e9) cell_hwr_fs_pane_g1_ParamLimits

0x2ebb,	// (0x000393e9) cell_hwr_fs_pane_g1

0x2c8a,	// (0x000391b8) cell_hwr_fs_pane_g2_ParamLimits

0x2c8a,	// (0x000391b8) cell_hwr_fs_pane_g2

0xc550,	// (0x00042a7e) cell_hwr_fs_pane_g3_ParamLimits

0xc550,	// (0x00042a7e) cell_hwr_fs_pane_g3

0xc55d,	// (0x00042a8b) cell_hwr_fs_pane_g4_ParamLimits

0xc55d,	// (0x00042a8b) cell_hwr_fs_pane_g4

0x0003,

0xf7d6,	// (0x00045d04) cell_hwr_fs_pane_g_ParamLimits

0xf7d6,	// (0x00045d04) cell_hwr_fs_pane_g

0xac5d,	// (0x0004118b) cell_hwr_fs_pane_t1

0xb777,	// (0x00041ca5) grid_highlight_pane_cp6

0xb777,	// (0x00041ca5) main_idle_act2_pane

0xbf38,	// (0x00042466) aid_inside_area_popup_secondary

0xc646,	// (0x00042b74) aid_inside_area_window_primary_ParamLimits

0xc646,	// (0x00042b74) aid_inside_area_window_primary

0x4737,	// (0x0003ac65) ai2_news_ticker_pane

0x473f,	// (0x0003ac6d) aid_size_cell_ai1_link_ParamLimits

0x473f,	// (0x0003ac6d) aid_size_cell_ai1_link

0x4759,	// (0x0003ac87) popup_ai2_data_window_ParamLimits

0x4759,	// (0x0003ac87) popup_ai2_data_window

0x4777,	// (0x0003aca5) popup_ai2_link_window_ParamLimits

0x4777,	// (0x0003aca5) popup_ai2_link_window

0x2e85,	// (0x000393b3) bg_popup_sub_pane_cp4_ParamLimits

0x2e85,	// (0x000393b3) bg_popup_sub_pane_cp4

0x478d,	// (0x0003acbb) grid_ai2_link_pane_ParamLimits

0x478d,	// (0x0003acbb) grid_ai2_link_pane

0x47a4,	// (0x0003acd2) popup_ai2_link_window_g1_ParamLimits

0x47a4,	// (0x0003acd2) popup_ai2_link_window_g1

0x47b0,	// (0x0003acde) popup_ai2_link_window_g2_ParamLimits

0x47b0,	// (0x0003acde) popup_ai2_link_window_g2

0x0001,

0xf9a9,	// (0x00045ed7) popup_ai2_link_window_g_ParamLimits

0xf9a9,	// (0x00045ed7) popup_ai2_link_window_g

0x47c1,	// (0x0003acef) ai2_mp_button_pane

0x47c9,	// (0x0003acf7) ai2_mp_volume_pane

0x3070,	// (0x0003959e) bg_popup_sub_pane_cp5_ParamLimits

0x3070,	// (0x0003959e) bg_popup_sub_pane_cp5

0x47d1,	// (0x0003acff) heading_ai2_gene_pane_ParamLimits

0x47d1,	// (0x0003acff) heading_ai2_gene_pane

0x47dd,	// (0x0003ad0b) list_ai2_gene_pane_ParamLimits

0x47dd,	// (0x0003ad0b) list_ai2_gene_pane

0x4825,	// (0x0003ad53) cell_ai2_link_pane_ParamLimits

0x4825,	// (0x0003ad53) cell_ai2_link_pane

0x483b,	// (0x0003ad69) cell_ai2_link_pane_g1

0xb777,	// (0x00041ca5) grid_highlight_pane_cp7

0x0ef5,	// (0x00037423) ai2_mp_volume_pane_g1

0x490e,	// (0x0003ae3c) ai2_mp_volume_pane_g2

0x4883,	// (0x0003adb1) list_ai2_gene_pane_t1

0x4916,	// (0x0003ae44) ai2_mp_volume_pane_g3

0x0002,

0xf9c2,	// (0x00045ef0) ai2_mp_volume_pane_g

0x0efd,	// (0x0003742b) volume_small_pane_cp3

0x491e,	// (0x0003ae4c) aid_size_cell_ai2_button

0x4926,	// (0x0003ae54) grid_ai2_button_pane

0x492f,	// (0x0003ae5d) cell_ai2_button_pane_ParamLimits

0x492f,	// (0x0003ae5d) cell_ai2_button_pane

0xb76d,	// (0x00041c9b) cell_ai2_button_pane_g1

0xb777,	// (0x00041ca5) grid_highlight_pane_cp8

0x48ce,	// (0x0003adfc) ai2_gene_pane_t1_ParamLimits

0x48ce,	// (0x0003adfc) ai2_gene_pane_t1

0xa49e,	// (0x000409cc) aid_height_parent_landscape

0xc7ed,	// (0x00042d1b) aid_height_set_list

0x41ee,	// (0x0003a71c) aid_size_parent

0x4556,	// (0x0003aa84) aid_size_cell_graphic_pane_ParamLimits

0x47ed,	// (0x0003ad1b) popup_ai2_data_window_g1_ParamLimits

0x47ed,	// (0x0003ad1b) popup_ai2_data_window_g1

0x47f9,	// (0x0003ad27) ai2_news_ticker_pane_g1

0x4801,	// (0x0003ad2f) ai2_news_ticker_pane_g2

0x0001,

0xf9ae,	// (0x00045edc) ai2_news_ticker_pane_g

0x4809,	// (0x0003ad37) ai2_news_ticker_pane_t1

0x4817,	// (0x0003ad45) ai2_news_ticker_pane_t2

0x0001,

0xf9b3,	// (0x00045ee1) ai2_news_ticker_pane_t

0x4844,	// (0x0003ad72) heading_ai2_gene_pane_g1

0x484c,	// (0x0003ad7a) heading_ai2_gene_pane_t1_ParamLimits

0x484c,	// (0x0003ad7a) heading_ai2_gene_pane_t1

0x4861,	// (0x0003ad8f) list_highlight_pane_cp6

0x4869,	// (0x0003ad97) ai2_gene_pane_ParamLimits

0x4869,	// (0x0003ad97) ai2_gene_pane

0x4891,	// (0x0003adbf) list_ai2_gene_pane_t2

0x0001,

0xf9b8,	// (0x00045ee6) list_ai2_gene_pane_t

0x489f,	// (0x0003adcd) list_highlight_pane_cp8_ParamLimits

0x489f,	// (0x0003adcd) list_highlight_pane_cp8

0x48b0,	// (0x0003adde) ai2_gene_pane_g1_ParamLimits

0x48b0,	// (0x0003adde) ai2_gene_pane_g1

0x48c2,	// (0x0003adf0) ai2_gene_pane_g2_ParamLimits

0x48c2,	// (0x0003adf0) ai2_gene_pane_g2

0x0001,

0xf9bd,	// (0x00045eeb) ai2_gene_pane_g_ParamLimits

0xf9bd,	// (0x00045eeb) ai2_gene_pane_g

0xbdab,	// (0x000422d9) scroll_pane_cp12

0xa45d,	// (0x0004098b) control_pane_t3_ParamLimits

0xa45d,	// (0x0004098b) control_pane_t3

0x2839,	// (0x00038d67) status_small_pane_g8_ParamLimits

0x2839,	// (0x00038d67) status_small_pane_g8

0xa5b0,	// (0x00040ade) popup_find_window_ParamLimits

0xa867,	// (0x00040d95) popup_note_image_window_ParamLimits

0xd2cb,	// (0x000437f9) list_double2_graphic_pane_vc_g1_ParamLimits

0xd2cb,	// (0x000437f9) list_double2_graphic_pane_vc_g1

0xd431,	// (0x0004395f) list_double2_graphic_pane_vc_g2_ParamLimits

0xd431,	// (0x0004395f) list_double2_graphic_pane_vc_g2

0xd43d,	// (0x0004396b) list_double2_graphic_pane_vc_g3_ParamLimits

0xd43d,	// (0x0004396b) list_double2_graphic_pane_vc_g3

0x0002,

0xf799,	// (0x00045cc7) list_double2_graphic_pane_vc_g_ParamLimits

0xf799,	// (0x00045cc7) list_double2_graphic_pane_vc_g

0xd449,	// (0x00043977) list_double2_graphic_pane_vc_t1_ParamLimits

0xd449,	// (0x00043977) list_double2_graphic_pane_vc_t1

0xd28b,	// (0x000437b9) list_single_heading_pane_vc_g1_ParamLimits

0xd28b,	// (0x000437b9) list_single_heading_pane_vc_g1

0xd297,	// (0x000437c5) list_single_heading_pane_vc_g2_ParamLimits

0xd297,	// (0x000437c5) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00045ad1) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00045ad1) list_single_heading_pane_vc_g

0xd45f,	// (0x0004398d) list_single_heading_pane_vc_t1_ParamLimits

0xd45f,	// (0x0004398d) list_single_heading_pane_vc_t1

0xd475,	// (0x000439a3) list_single_heading_pane_vc_t2_ParamLimits

0xd475,	// (0x000439a3) list_single_heading_pane_vc_t2

0x0001,

0xf7ba,	// (0x00045ce8) list_single_heading_pane_vc_t_ParamLimits

0xf7ba,	// (0x00045ce8) list_single_heading_pane_vc_t

0xd487,	// (0x000439b5) list_setting_number_pane_vc_g1_ParamLimits

0xd487,	// (0x000439b5) list_setting_number_pane_vc_g1

0xd493,	// (0x000439c1) list_setting_number_pane_vc_g2_ParamLimits

0xd493,	// (0x000439c1) list_setting_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x00045ced) list_setting_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x00045ced) list_setting_number_pane_vc_g

0xd49f,	// (0x000439cd) list_setting_number_pane_vc_t1_ParamLimits

0xd49f,	// (0x000439cd) list_setting_number_pane_vc_t1

0xd4b3,	// (0x000439e1) list_setting_number_pane_vc_t2_ParamLimits

0xd4b3,	// (0x000439e1) list_setting_number_pane_vc_t2

0xd4cf,	// (0x000439fd) list_setting_number_pane_vc_t3_ParamLimits

0xd4cf,	// (0x000439fd) list_setting_number_pane_vc_t3

0x0002,

0xf7c4,	// (0x00045cf2) list_setting_number_pane_vc_t_ParamLimits

0xf7c4,	// (0x00045cf2) list_setting_number_pane_vc_t

0xd4fd,	// (0x00043a2b) set_value_pane_vc_ParamLimits

0xd4fd,	// (0x00043a2b) set_value_pane_vc

0xd534,	// (0x00043a62) list_double2_graphic_pane_vc_ParamLimits

0xd534,	// (0x00043a62) list_double2_graphic_pane_vc

0x43d7,	// (0x0003a905) list_double2_large_graphic_pane_vc_ParamLimits

0x43d7,	// (0x0003a905) list_double2_large_graphic_pane_vc

0xd534,	// (0x00043a62) list_double2_pane_vc_ParamLimits

0xd534,	// (0x00043a62) list_double2_pane_vc

0xd534,	// (0x00043a62) list_double_graphic_heading_pane_vc_ParamLimits

0xd534,	// (0x00043a62) list_double_graphic_heading_pane_vc

0xd534,	// (0x00043a62) list_double_graphic_pane_vc_ParamLimits

0xd534,	// (0x00043a62) list_double_graphic_pane_vc

0xd534,	// (0x00043a62) list_double_heading_pane_vc_ParamLimits

0xd534,	// (0x00043a62) list_double_heading_pane_vc

0x43eb,	// (0x0003a919) list_double_large_graphic_pane_vc_ParamLimits

0x43eb,	// (0x0003a919) list_double_large_graphic_pane_vc

0xd534,	// (0x00043a62) list_double_number_pane_vc_ParamLimits

0xd534,	// (0x00043a62) list_double_number_pane_vc

0xd534,	// (0x00043a62) list_double_pane_vc_ParamLimits

0xd534,	// (0x00043a62) list_double_pane_vc

0xd534,	// (0x00043a62) list_double_time_pane_vc_ParamLimits

0xd534,	// (0x00043a62) list_double_time_pane_vc

0xd534,	// (0x00043a62) list_setting_number_pane_vc_ParamLimits

0xd534,	// (0x00043a62) list_setting_number_pane_vc

0xd534,	// (0x00043a62) list_setting_pane_vc_ParamLimits

0xd534,	// (0x00043a62) list_setting_pane_vc

0xd534,	// (0x00043a62) list_single_graphic_heading_pane_vc_ParamLimits

0xd534,	// (0x00043a62) list_single_graphic_heading_pane_vc

0xd534,	// (0x00043a62) list_single_heading_pane_vc_ParamLimits

0xd534,	// (0x00043a62) list_single_heading_pane_vc

0xd534,	// (0x00043a62) list_single_number_heading_pane_vc_ParamLimits

0xd534,	// (0x00043a62) list_single_number_heading_pane_vc

0xd2cb,	// (0x000437f9) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xd2cb,	// (0x000437f9) list_double_graphic_heading_pane_vc_g1

0xd28b,	// (0x000437b9) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xd28b,	// (0x000437b9) list_double_graphic_heading_pane_vc_g2

0xd297,	// (0x000437c5) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xd297,	// (0x000437c5) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c9,	// (0x00045ef7) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c9,	// (0x00045ef7) list_double_graphic_heading_pane_vc_g

0xd54b,	// (0x00043a79) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xd54b,	// (0x00043a79) list_double_graphic_heading_pane_vc_t1

0xd561,	// (0x00043a8f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xd561,	// (0x00043a8f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d0,	// (0x00045efe) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d0,	// (0x00045efe) list_double_graphic_heading_pane_vc_t

0xd487,	// (0x000439b5) list_setting_pane_vc_g1_ParamLimits

0xd487,	// (0x000439b5) list_setting_pane_vc_g1

0xd493,	// (0x000439c1) list_setting_pane_vc_g2_ParamLimits

0xd493,	// (0x000439c1) list_setting_pane_vc_g2

0x0001,

0xf7bf,	// (0x00045ced) list_setting_pane_vc_g_ParamLimits

0xf7bf,	// (0x00045ced) list_setting_pane_vc_g

0xd57f,	// (0x00043aad) list_setting_pane_vc_t1_ParamLimits

0xd57f,	// (0x00043aad) list_setting_pane_vc_t1

0xd59b,	// (0x00043ac9) list_setting_pane_vc_t2_ParamLimits

0xd59b,	// (0x00043ac9) list_setting_pane_vc_t2

0x0001,

0xfa13,	// (0x00045f41) list_setting_pane_vc_t_ParamLimits

0xfa13,	// (0x00045f41) list_setting_pane_vc_t

0xd4fd,	// (0x00043a2b) set_value_pane_cp_vc_ParamLimits

0xd4fd,	// (0x00043a2b) set_value_pane_cp_vc

0xd28b,	// (0x000437b9) list_single_number_heading_pane_vc_g1_ParamLimits

0xd28b,	// (0x000437b9) list_single_number_heading_pane_vc_g1

0xd297,	// (0x000437c5) list_single_number_heading_pane_vc_g2_ParamLimits

0xd297,	// (0x000437c5) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00045ad1) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00045ad1) list_single_number_heading_pane_vc_g

0xd2a3,	// (0x000437d1) list_single_number_heading_pane_vc_t1_ParamLimits

0xd2a3,	// (0x000437d1) list_single_number_heading_pane_vc_t1

0xd5b7,	// (0x00043ae5) list_single_number_heading_pane_vc_t2_ParamLimits

0xd5b7,	// (0x00043ae5) list_single_number_heading_pane_vc_t2

0xd2b9,	// (0x000437e7) list_single_number_heading_pane_vc_t3_ParamLimits

0xd2b9,	// (0x000437e7) list_single_number_heading_pane_vc_t3

0x0002,

0xfa18,	// (0x00045f46) list_single_number_heading_pane_vc_t_ParamLimits

0xfa18,	// (0x00045f46) list_single_number_heading_pane_vc_t

0xd2cb,	// (0x000437f9) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xd2cb,	// (0x000437f9) list_single_graphic_heading_pane_vc_g1

0xd28b,	// (0x000437b9) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xd28b,	// (0x000437b9) list_single_graphic_heading_pane_vc_g4

0xd297,	// (0x000437c5) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xd297,	// (0x000437c5) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9c9,	// (0x00045ef7) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9c9,	// (0x00045ef7) list_single_graphic_heading_pane_vc_g

0xd2a3,	// (0x000437d1) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xd2a3,	// (0x000437d1) list_single_graphic_heading_pane_vc_t1

0xd5cd,	// (0x00043afb) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xd5cd,	// (0x00043afb) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa1f,	// (0x00045f4d) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa1f,	// (0x00045f4d) list_single_graphic_heading_pane_vc_t

0xd28b,	// (0x000437b9) list_double2_pane_vc_g1_ParamLimits

0xd28b,	// (0x000437b9) list_double2_pane_vc_g1

0xd297,	// (0x000437c5) list_double2_pane_vc_g2_ParamLimits

0xd297,	// (0x000437c5) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x00045ad1) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x00045ad1) list_double2_pane_vc_g

0xd51e,	// (0x00043a4c) list_double2_pane_vc_t1_ParamLimits

0xd51e,	// (0x00043a4c) list_double2_pane_vc_t1

0xd2d7,	// (0x00043805) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xd2d7,	// (0x00043805) list_double2_large_graphic_pane_vc_g1

0xd2e3,	// (0x00043811) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xd2e3,	// (0x00043811) list_double2_large_graphic_pane_vc_g2

0xd2ef,	// (0x0004381d) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xd2ef,	// (0x0004381d) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x00045aee) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x00045aee) list_double2_large_graphic_pane_vc_g

0xd2fb,	// (0x00043829) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xd2fb,	// (0x00043829) list_double2_large_graphic_pane_vc_t1

0xd5df,	// (0x00043b0d) list_double_time_pane_vc_g1_ParamLimits

0xd5df,	// (0x00043b0d) list_double_time_pane_vc_g1

0xd5eb,	// (0x00043b19) list_double_time_pane_vc_g2_ParamLimits

0xd5eb,	// (0x00043b19) list_double_time_pane_vc_g2

0x0001,

0xfa24,	// (0x00045f52) list_double_time_pane_vc_g_ParamLimits

0xfa24,	// (0x00045f52) list_double_time_pane_vc_g

0xd5f7,	// (0x00043b25) list_double_time_pane_vc_t1_ParamLimits

0xd5f7,	// (0x00043b25) list_double_time_pane_vc_t1

0xd621,	// (0x00043b4f) list_double_time_pane_vc_t2_ParamLimits

0xd621,	// (0x00043b4f) list_double_time_pane_vc_t2

0xd66a,	// (0x00043b98) list_double_time_pane_vc_t3_ParamLimits

0xd66a,	// (0x00043b98) list_double_time_pane_vc_t3

0xd67c,	// (0x00043baa) list_double_time_pane_vc_t4_ParamLimits

0xd67c,	// (0x00043baa) list_double_time_pane_vc_t4

0x0003,

0xfa29,	// (0x00045f57) list_double_time_pane_vc_t_ParamLimits

0xfa29,	// (0x00045f57) list_double_time_pane_vc_t

0xd28b,	// (0x000437b9) list_double_pane_vc_g1_ParamLimits

0xd28b,	// (0x000437b9) list_double_pane_vc_g1

0xd297,	// (0x000437c5) list_double_pane_vc_g2_ParamLimits

0xd297,	// (0x000437c5) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x00045ad1) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x00045ad1) list_double_pane_vc_g

0xd690,	// (0x00043bbe) list_double_pane_vc_t1_ParamLimits

0xd690,	// (0x00043bbe) list_double_pane_vc_t1

0xd6a4,	// (0x00043bd2) list_double_pane_vc_t2_ParamLimits

0xd6a4,	// (0x00043bd2) list_double_pane_vc_t2

0x0001,

0xfa32,	// (0x00045f60) list_double_pane_vc_t_ParamLimits

0xfa32,	// (0x00045f60) list_double_pane_vc_t

0xd28b,	// (0x000437b9) list_double_number_pane_vc_g1_ParamLimits

0xd28b,	// (0x000437b9) list_double_number_pane_vc_g1

0xd297,	// (0x000437c5) list_double_number_pane_vc_g2_ParamLimits

0xd297,	// (0x000437c5) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x00045ad1) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x00045ad1) list_double_number_pane_vc_g

0xd6ba,	// (0x00043be8) list_double_number_pane_vc_t1_ParamLimits

0xd6ba,	// (0x00043be8) list_double_number_pane_vc_t1

0xd6cc,	// (0x00043bfa) list_double_number_pane_vc_t2_ParamLimits

0xd6cc,	// (0x00043bfa) list_double_number_pane_vc_t2

0xd6a4,	// (0x00043bd2) list_double_number_pane_vc_t3_ParamLimits

0xd6a4,	// (0x00043bd2) list_double_number_pane_vc_t3

0x0002,

0xfa37,	// (0x00045f65) list_double_number_pane_vc_t_ParamLimits

0xfa37,	// (0x00045f65) list_double_number_pane_vc_t

0xd6e0,	// (0x00043c0e) list_double_large_graphic_pane_vc_g1_ParamLimits

0xd6e0,	// (0x00043c0e) list_double_large_graphic_pane_vc_g1

0xd702,	// (0x00043c30) list_double_large_graphic_pane_vc_g2_ParamLimits

0xd702,	// (0x00043c30) list_double_large_graphic_pane_vc_g2

0xd716,	// (0x00043c44) list_double_large_graphic_pane_vc_g3_ParamLimits

0xd716,	// (0x00043c44) list_double_large_graphic_pane_vc_g3

0xd725,	// (0x00043c53) list_double_large_graphic_pane_vc_g4_ParamLimits

0xd725,	// (0x00043c53) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa3e,	// (0x00045f6c) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa3e,	// (0x00045f6c) list_double_large_graphic_pane_vc_g

0xd731,	// (0x00043c5f) list_double_large_graphic_pane_vc_t1_ParamLimits

0xd731,	// (0x00043c5f) list_double_large_graphic_pane_vc_t1

0xd74d,	// (0x00043c7b) list_double_large_graphic_pane_vc_t2_ParamLimits

0xd74d,	// (0x00043c7b) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa47,	// (0x00045f75) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa47,	// (0x00045f75) list_double_large_graphic_pane_vc_t

0xd28b,	// (0x000437b9) list_double_heading_pane_vc_g1_ParamLimits

0xd28b,	// (0x000437b9) list_double_heading_pane_vc_g1

0xd297,	// (0x000437c5) list_double_heading_pane_vc_g2_ParamLimits

0xd297,	// (0x000437c5) list_double_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00045ad1) list_double_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00045ad1) list_double_heading_pane_vc_g

0xd76d,	// (0x00043c9b) list_double_heading_pane_vc_t1_ParamLimits

0xd76d,	// (0x00043c9b) list_double_heading_pane_vc_t1

0xd77f,	// (0x00043cad) list_double_heading_pane_vc_t2_ParamLimits

0xd77f,	// (0x00043cad) list_double_heading_pane_vc_t2

0x0001,

0xfa4c,	// (0x00045f7a) list_double_heading_pane_vc_t_ParamLimits

0xfa4c,	// (0x00045f7a) list_double_heading_pane_vc_t

0xd797,	// (0x00043cc5) list_double_graphic_pane_vc_g1_ParamLimits

0xd797,	// (0x00043cc5) list_double_graphic_pane_vc_g1

0xd7aa,	// (0x00043cd8) list_double_graphic_pane_vc_g2_ParamLimits

0xd7aa,	// (0x00043cd8) list_double_graphic_pane_vc_g2

0xd28b,	// (0x000437b9) list_double_graphic_pane_vc_g3_ParamLimits

0xd28b,	// (0x000437b9) list_double_graphic_pane_vc_g3

0x0003,

0xfa51,	// (0x00045f7f) list_double_graphic_pane_vc_g_ParamLimits

0xfa51,	// (0x00045f7f) list_double_graphic_pane_vc_g

0xd7c7,	// (0x00043cf5) list_double_graphic_pane_vc_t1_ParamLimits

0xd7c7,	// (0x00043cf5) list_double_graphic_pane_vc_t1

0xd7f1,	// (0x00043d1f) list_double_graphic_pane_vc_t2_ParamLimits

0xd7f1,	// (0x00043d1f) list_double_graphic_pane_vc_t2

0x0001,

0xfa5a,	// (0x00045f88) list_double_graphic_pane_vc_t_ParamLimits

0xfa5a,	// (0x00045f88) list_double_graphic_pane_vc_t

0xec5b,	// (0x00045189) aid_size_cell_fastswap

0x93e0,	// (0x0003f90e) aid_size_cell_touch_ParamLimits

0x93e0,	// (0x0003f90e) aid_size_cell_touch

0xede2,	// (0x00045310) popup_fast_swap_wide_window_ParamLimits

0xede2,	// (0x00045310) popup_fast_swap_wide_window

0x959e,	// (0x0003facc) touch_pane_ParamLimits

0x959e,	// (0x0003facc) touch_pane

0xbe01,	// (0x0004232f) button_value_adjust_pane_cp2

0xd334,	// (0x00043862) button_value_adjust_pane_cp4

0xd33c,	// (0x0004386a) form_field_data_pane_cp2

0x9e10,	// (0x0004033e) form_field_data_wide_pane_cp2

0xf0d3,	// (0x00045601) bg_scroll_pane_ParamLimits

0xf0f2,	// (0x00045620) scroll_handle_pane_ParamLimits

0xf106,	// (0x00045634) scroll_sc2_down_pane_ParamLimits

0xf106,	// (0x00045634) scroll_sc2_down_pane

0xf12d,	// (0x0004565b) scroll_sc2_up_pane_ParamLimits

0xf12d,	// (0x0004565b) scroll_sc2_up_pane

0xcba8,	// (0x000430d6) grid_wheel_folder_pane_g1_ParamLimits

0xcba8,	// (0x000430d6) grid_wheel_folder_pane_g1

0x012a,	// (0x00036658) clock_nsta_pane_cp2_ParamLimits

0x012a,	// (0x00036658) clock_nsta_pane_cp2

0xa2b1,	// (0x000407df) listscroll_midp_pane_ParamLimits

0xa2bd,	// (0x000407eb) midp_canvas_pane

0x28b3,	// (0x00038de1) nsta_clock_indic_pane

0x28e7,	// (0x00038e15) listscroll_form_pane_vc

0x28ef,	// (0x00038e1d) listscroll_set_pane_vc_ParamLimits

0x28ef,	// (0x00038e1d) listscroll_set_pane_vc

0xc22d,	// (0x0004275b) clock_nsta_pane

0xc257,	// (0x00042785) indicator_nsta_pane

0x2d4f,	// (0x0003927d) bg_popup_sub_pane_cp2_ParamLimits

0x2d63,	// (0x00039291) find_pane_cp2_ParamLimits

0x2d63,	// (0x00039291) find_pane_cp2

0x2d79,	// (0x000392a7) grid_toobar_pane_ParamLimits

0x2e59,	// (0x00039387) list_form_gen_pane_vc_ParamLimits

0x2e59,	// (0x00039387) list_form_gen_pane_vc

0x2e6f,	// (0x0003939d) scroll_pane_cp8_vc_ParamLimits

0x2e6f,	// (0x0003939d) scroll_pane_cp8_vc

0x2eeb,	// (0x00039419) data_form_wide_pane_vc_ParamLimits

0x2eeb,	// (0x00039419) data_form_wide_pane_vc

0x2ef7,	// (0x00039425) form_field_data_wide_pane_vc_g1

0x2eff,	// (0x0003942d) form_field_data_wide_pane_vc_t1_ParamLimits

0x2eff,	// (0x0003942d) form_field_data_wide_pane_vc_t1

0xbe15,	// (0x00042343) input_focus_pane_cp6_vc_ParamLimits

0xbe15,	// (0x00042343) input_focus_pane_cp6_vc

0x321b,	// (0x00039749) list_midp_pane_ParamLimits

0x45c4,	// (0x0003aaf2) scroll_pane_cp16_ParamLimits

0x45c4,	// (0x0003aaf2) scroll_pane_cp16

0x3271,	// (0x0003979f) button_value_adjust_pane_ParamLimits

0x3271,	// (0x0003979f) button_value_adjust_pane

0xc7fe,	// (0x00042d2c) button_value_adjust_pane_cp6_ParamLimits

0xc7fe,	// (0x00042d2c) button_value_adjust_pane_cp6

0xc93a,	// (0x00042e68) settings_code_pane_cp_ParamLimits

0xc93a,	// (0x00042e68) settings_code_pane_cp

0xb76d,	// (0x00041c9b) cell_touch_pane_g1

0xb76d,	// (0x00041c9b) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x00045c0c) cell_touch_pane_g

0xca7c,	// (0x00042faa) cell_touch_pane_cp_ParamLimits

0xca7c,	// (0x00042faa) cell_touch_pane_cp

0xca98,	// (0x00042fc6) cell_touch_pane_ParamLimits

0xca98,	// (0x00042fc6) cell_touch_pane

0xb76d,	// (0x00041c9b) scroll_sc2_down_pane_g1

0xb76d,	// (0x00041c9b) scroll_sc2_up_pane_g1

0xb777,	// (0x00041ca5) bg_set_opt_pane_cp4_vc

0x4962,	// (0x0003ae90) list_set_graphic_pane_vc_g1_ParamLimits

0x4962,	// (0x0003ae90) list_set_graphic_pane_vc_g1

0x496e,	// (0x0003ae9c) list_set_graphic_pane_vc_g2_ParamLimits

0x496e,	// (0x0003ae9c) list_set_graphic_pane_vc_g2

0x0001,

0xf9d5,	// (0x00045f03) list_set_graphic_pane_vc_g_ParamLimits

0xf9d5,	// (0x00045f03) list_set_graphic_pane_vc_g

0x497a,	// (0x0003aea8) text_primary_small_cp13_vc_ParamLimits

0x497a,	// (0x0003aea8) text_primary_small_cp13_vc

0x4992,	// (0x0003aec0) list_set_graphic_pane_vc_ParamLimits

0x4992,	// (0x0003aec0) list_set_graphic_pane_vc

0xb777,	// (0x00041ca5) input_focus_pane_cp2_vc

0xb76d,	// (0x00041c9b) setting_code_pane_vc_g1

0xb7ea,	// (0x00041d18) setting_code_pane_vc_t1

0x49a5,	// (0x0003aed3) set_text_pane_vc_t1_ParamLimits

0x49a5,	// (0x0003aed3) set_text_pane_vc_t1

0xb777,	// (0x00041ca5) input_focus_pane_cp1_vc

0x49c6,	// (0x0003aef4) list_set_text_pane_vc

0xb76d,	// (0x00041c9b) setting_text_pane_vc_g1

0xb777,	// (0x00041ca5) bg_set_opt_pane_cp2_vc

0xb7e1,	// (0x00041d0f) setting_slider_graphic_pane_vc_g1

0x49d0,	// (0x0003aefe) setting_slider_graphic_pane_vc_t1

0x49e2,	// (0x0003af10) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9da,	// (0x00045f08) setting_slider_graphic_pane_vc_t

0x49f4,	// (0x0003af22) slider_set_pane_cp_vc

0x49fe,	// (0x0003af2c) slider_set_pane_vc_g1

0x4a07,	// (0x0003af35) slider_set_pane_vc_g2

0x0006,

0xf9df,	// (0x00045f0d) slider_set_pane_vc_g

0xbe6d,	// (0x0004239b) set_opt_bg_pane_g1_copy1

0xbe75,	// (0x000423a3) set_opt_bg_pane_g2_copy1

0x4a33,	// (0x0003af61) set_opt_bg_pane_g3_copy1

0xbe85,	// (0x000423b3) set_opt_bg_pane_g4_copy1

0xbe8d,	// (0x000423bb) set_opt_bg_pane_g5_copy1

0xbe95,	// (0x000423c3) set_opt_bg_pane_g6_copy1

0x4a3d,	// (0x0003af6b) set_opt_bg_pane_g7_copy1

0x4a47,	// (0x0003af75) set_opt_bg_pane_g8_copy1

0x4a51,	// (0x0003af7f) set_opt_bg_pane_g9_copy1

0xb777,	// (0x00041ca5) bg_set_opt_pane_cp_vc

0x4a5b,	// (0x0003af89) setting_slider_pane_vc_t1

0x4a6a,	// (0x0003af98) setting_slider_pane_vc_t2

0x4a7c,	// (0x0003afaa) setting_slider_pane_vc_t3

0x0002,

0xf9ee,	// (0x00045f1c) setting_slider_pane_vc_t

0x4a8e,	// (0x0003afbc) slider_set_pane_vc

0x0b2a,	// (0x00037058) volume_set_pane_vc_g1

0x0b33,	// (0x00037061) volume_set_pane_vc_g2

0x0b3c,	// (0x0003706a) volume_set_pane_vc_g3

0x0b45,	// (0x00037073) volume_set_pane_vc_g4

0x0b4e,	// (0x0003707c) volume_set_pane_vc_g5

0x0b57,	// (0x00037085) volume_set_pane_vc_g6

0x0b60,	// (0x0003708e) volume_set_pane_vc_g7

0x0b69,	// (0x00037097) volume_set_pane_vc_g8

0x0b72,	// (0x000370a0) volume_set_pane_vc_g9

0x0b7b,	// (0x000370a9) volume_set_pane_vc_g10

0x0009,

0xf9f5,	// (0x00045f23) volume_set_pane_vc_g

0x4a98,	// (0x0003afc6) volume_set_pane_vc

0x4aa2,	// (0x0003afd0) button_value_adjust_pane_cp1_vc

0x4aac,	// (0x0003afda) list_highlight_pane_cp2_vc

0x4ab5,	// (0x0003afe3) list_set_pane_vc_ParamLimits

0x4ab5,	// (0x0003afe3) list_set_pane_vc

0x4b23,	// (0x0003b051) main_pane_set_vc_t1_ParamLimits

0x4b23,	// (0x0003b051) main_pane_set_vc_t1

0x4b38,	// (0x0003b066) main_pane_set_vc_t2_ParamLimits

0x4b38,	// (0x0003b066) main_pane_set_vc_t2

0x4b4a,	// (0x0003b078) main_pane_set_vc_t3_ParamLimits

0x4b4a,	// (0x0003b078) main_pane_set_vc_t3

0x4b5e,	// (0x0003b08c) main_pane_set_vc_t4_ParamLimits

0x4b5e,	// (0x0003b08c) main_pane_set_vc_t4

0x0003,

0xfa0a,	// (0x00045f38) main_pane_set_vc_t_ParamLimits

0xfa0a,	// (0x00045f38) main_pane_set_vc_t

0x4b72,	// (0x0003b0a0) setting_code_pane_vc_ParamLimits

0x4b72,	// (0x0003b0a0) setting_code_pane_vc

0x4b83,	// (0x0003b0b1) setting_slider_graphic_pane_vc

0x4b83,	// (0x0003b0b1) setting_slider_pane_vc

0x4b83,	// (0x0003b0b1) setting_text_pane_vc

0x4b83,	// (0x0003b0b1) setting_volume_pane_vc

0x4b8d,	// (0x0003b0bb) scroll_pane_cp121_vc

0xbdef,	// (0x0004231d) set_content_pane_vc

0x4b95,	// (0x0003b0c3) button_value_adjust_pane_g1

0x4b9e,	// (0x0003b0cc) button_value_adjust_pane_g2

0x0001,

0xfa5f,	// (0x00045f8d) button_value_adjust_pane_g

0x4ba7,	// (0x0003b0d5) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4ba7,	// (0x0003b0d5) form_field_slider_wide_pane_vc_t1

0x4bb9,	// (0x0003b0e7) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4bb9,	// (0x0003b0e7) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa64,	// (0x00045f92) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa64,	// (0x00045f92) form_field_slider_wide_pane_vc_t

0xb7c5,	// (0x00041cf3) input_focus_pane_cp10_vc_ParamLimits

0xb7c5,	// (0x00041cf3) input_focus_pane_cp10_vc

0x4be5,	// (0x0003b113) slider_cont_pane_cp1_vc_ParamLimits

0x4be5,	// (0x0003b113) slider_cont_pane_cp1_vc

0x4bf7,	// (0x0003b125) slider_form_pane_g1_cp2

0x4a07,	// (0x0003af35) slider_form_pane_g2_cp2

0x4c24,	// (0x0003b152) form_field_slider_pane_vc_t3

0x4c32,	// (0x0003b160) form_field_slider_pane_vc_t4

0x4c40,	// (0x0003b16e) slider_form_pane_vc_ParamLimits

0x4c40,	// (0x0003b16e) slider_form_pane_vc

0x4c4d,	// (0x0003b17b) form_field_slider_pane_vc_t1_ParamLimits

0x4c4d,	// (0x0003b17b) form_field_slider_pane_vc_t1

0x4bb9,	// (0x0003b0e7) form_field_slider_pane_vc_t2_ParamLimits

0x4bb9,	// (0x0003b0e7) form_field_slider_pane_vc_t2

0x0001,

0xfa76,	// (0x00045fa4) form_field_slider_pane_vc_t_ParamLimits

0xfa76,	// (0x00045fa4) form_field_slider_pane_vc_t

0xb7c5,	// (0x00041cf3) input_focus_pane_cp9_vc_ParamLimits

0xb7c5,	// (0x00041cf3) input_focus_pane_cp9_vc

0x4c63,	// (0x0003b191) slider_cont_pane_vc_ParamLimits

0x4c63,	// (0x0003b191) slider_cont_pane_vc

0x4c77,	// (0x0003b1a5) list_form_graphic_pane_cp_vc_ParamLimits

0x4c77,	// (0x0003b1a5) list_form_graphic_pane_cp_vc

0x2ef7,	// (0x00039425) form_field_popup_wide_pane_vc_g1

0x4c8c,	// (0x0003b1ba) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4c8c,	// (0x0003b1ba) form_field_popup_wide_pane_vc_t1

0xbe15,	// (0x00042343) input_focus_pane_cp8_vc_ParamLimits

0xbe15,	// (0x00042343) input_focus_pane_cp8_vc

0x4cd1,	// (0x0003b1ff) list_form_wide_pane_vc_ParamLimits

0x4cd1,	// (0x0003b1ff) list_form_wide_pane_vc

0x4cdd,	// (0x0003b20b) list_form_graphic_pane_vc_g1

0x4ce5,	// (0x0003b213) list_form_graphic_pane_vc_t1_ParamLimits

0x4ce5,	// (0x0003b213) list_form_graphic_pane_vc_t1

0xb7d3,	// (0x00041d01) list_highlight_pane_cp5_vc_ParamLimits

0xb7d3,	// (0x00041d01) list_highlight_pane_cp5_vc

0x4d01,	// (0x0003b22f) list_form_graphic_pane_vc_ParamLimits

0x4d01,	// (0x0003b22f) list_form_graphic_pane_vc

0x2ef7,	// (0x00039425) form_field_popup_pane_vc_g1

0x4d17,	// (0x0003b245) form_field_popup_pane_vc_t1_ParamLimits

0x4d17,	// (0x0003b245) form_field_popup_pane_vc_t1

0xbe15,	// (0x00042343) input_focus_pane_cp7_vc_ParamLimits

0xbe15,	// (0x00042343) input_focus_pane_cp7_vc

0x4d2e,	// (0x0003b25c) list_form_pane_vc_ParamLimits

0x4d2e,	// (0x0003b25c) list_form_pane_vc

0x4d3a,	// (0x0003b268) data_form_pane_vc_t1_ParamLimits

0x4d3a,	// (0x0003b268) data_form_pane_vc_t1

0xbe6d,	// (0x0004239b) input_focus_pane_vc_g1

0xbe75,	// (0x000423a3) input_focus_pane_vc_g2

0xbe7d,	// (0x000423ab) input_focus_pane_vc_g3

0xbe85,	// (0x000423b3) input_focus_pane_vc_g4

0xbe8d,	// (0x000423bb) input_focus_pane_vc_g5

0xbe95,	// (0x000423c3) input_focus_pane_vc_g6

0xbe9d,	// (0x000423cb) input_focus_pane_vc_g7

0xbea5,	// (0x000423d3) input_focus_pane_vc_g8

0xbead,	// (0x000423db) input_focus_pane_vc_g9

0xb76d,	// (0x00041c9b) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x00045b95) input_focus_pane_vc_g

0x2eeb,	// (0x00039419) data_form_pane_vc_ParamLimits

0x2eeb,	// (0x00039419) data_form_pane_vc

0x2ef7,	// (0x00039425) form_field_data_pane_vc_g1

0x4d57,	// (0x0003b285) form_field_data_pane_vc_t1_ParamLimits

0x4d57,	// (0x0003b285) form_field_data_pane_vc_t1

0xbe15,	// (0x00042343) input_focus_pane_vc_ParamLimits

0xbe15,	// (0x00042343) input_focus_pane_vc

0x4d71,	// (0x0003b29f) button_value_adjust_pane_cp3_vc

0x4d79,	// (0x0003b2a7) button_value_adjust_pane_cp5_vc

0x4d81,	// (0x0003b2af) form_field_data_pane_vc_ParamLimits

0x4d81,	// (0x0003b2af) form_field_data_pane_vc

0x4d9c,	// (0x0003b2ca) form_field_data_pane_vc_cp2

0x4da4,	// (0x0003b2d2) form_field_data_wide_pane_vc_ParamLimits

0x4da4,	// (0x0003b2d2) form_field_data_wide_pane_vc

0x4dbe,	// (0x0003b2ec) form_field_data_wide_pane_vc_cp2

0x4dc6,	// (0x0003b2f4) form_field_popup_pane_vc_ParamLimits

0x4dc6,	// (0x0003b2f4) form_field_popup_pane_vc

0x4de1,	// (0x0003b30f) form_field_popup_wide_pane_vc_ParamLimits

0x4de1,	// (0x0003b30f) form_field_popup_wide_pane_vc

0x4dfb,	// (0x0003b329) form_field_slider_pane_vc_ParamLimits

0x4dfb,	// (0x0003b329) form_field_slider_pane_vc

0x4e0e,	// (0x0003b33c) form_field_slider_wide_pane_vc_ParamLimits

0x4e0e,	// (0x0003b33c) form_field_slider_wide_pane_vc

0xcab6,	// (0x00042fe4) grid_touch_1_pane_ParamLimits

0xcab6,	// (0x00042fe4) grid_touch_1_pane

0xcaca,	// (0x00042ff8) grid_touch_2_pane_ParamLimits

0xcaca,	// (0x00042ff8) grid_touch_2_pane

0x4ef4,	// (0x0003b422) touch_pane_g1_ParamLimits

0x4ef4,	// (0x0003b422) touch_pane_g1

0x4e47,	// (0x0003b375) cell_app_pane_cp_wide_ParamLimits

0x4e47,	// (0x0003b375) cell_app_pane_cp_wide

0x4e58,	// (0x0003b386) grid_popup_fast_wide_pane_ParamLimits

0x4e58,	// (0x0003b386) grid_popup_fast_wide_pane

0x4e6c,	// (0x0003b39a) scroll_pane_cp19_ParamLimits

0x4e6c,	// (0x0003b39a) scroll_pane_cp19

0xb777,	// (0x00041ca5) bg_popup_window_pane_cp20

0x4e80,	// (0x0003b3ae) listscroll_popup_fast_wide_pane

0xcaf6,	// (0x00043024) grid_indicator_nsta_pane

0x4e9a,	// (0x0003b3c8) clock_nsta_pane_g1

0x4ea3,	// (0x0003b3d1) clock_nsta_pane_t1

0xcb02,	// (0x00043030) cell_indicator_nsta_pane_ParamLimits

0xcb02,	// (0x00043030) cell_indicator_nsta_pane

0x4ef4,	// (0x0003b422) cell_indicator_nsta_pane_g1

0xcb1d,	// (0x0004304b) cell_indicator_nsta_pane_g2

0x0001,

0xfa87,	// (0x00045fb5) cell_indicator_nsta_pane_g

0x4f15,	// (0x0003b443) clock_nsta_pane_cp

0x4f1e,	// (0x0003b44c) indicator_nsta_pane_cp

0x4f28,	// (0x0003b456) nsta_clock_indic_pane_g1

0xb80f,	// (0x00041d3d) grid_indicator_pane

0xf21f,	// (0x0004574d) scroll_pane_cp29

0x0079,	// (0x000365a7) indicator_nsta_pane_cp2_ParamLimits

0x0079,	// (0x000365a7) indicator_nsta_pane_cp2

0xb7d3,	// (0x00041d01) main_apps_wheel_pane

0x30d8,	// (0x00039606) form_midp_field_text_pane_ParamLimits

0x3227,	// (0x00039755) scroll_bar_cp050_ParamLimits

0x4f81,	// (0x0003b4af) cell_indicator_pane_ParamLimits

0x4f81,	// (0x0003b4af) cell_indicator_pane

0x4f99,	// (0x0003b4c7) cell_indicator_pane_g1

0xcb2a,	// (0x00043058) grid_wheel_folder_pane_ParamLimits

0xcb2a,	// (0x00043058) grid_wheel_folder_pane

0xcb38,	// (0x00043066) list_wheel_apps_pane_ParamLimits

0xcb38,	// (0x00043066) list_wheel_apps_pane

0xcb46,	// (0x00043074) main_apps_wheel_pane_g1_ParamLimits

0xcb46,	// (0x00043074) main_apps_wheel_pane_g1

0xcb56,	// (0x00043084) main_apps_wheel_pane_g2_ParamLimits

0xcb56,	// (0x00043084) main_apps_wheel_pane_g2

0x0001,

0xfaa3,	// (0x00045fd1) main_apps_wheel_pane_g_ParamLimits

0xfaa3,	// (0x00045fd1) main_apps_wheel_pane_g

0xcb66,	// (0x00043094) main_apps_wheel_pane_t1_ParamLimits

0xcb66,	// (0x00043094) main_apps_wheel_pane_t1

0xcb7e,	// (0x000430ac) list_wheel_apps_pane_g1

0xcb86,	// (0x000430b4) list_wheel_apps_pane_g2

0xcb8e,	// (0x000430bc) list_wheel_apps_pane_g3

0xcb96,	// (0x000430c4) list_wheel_apps_pane_g4

0xcb9e,	// (0x000430cc) list_wheel_apps_pane_g5

0x0004,

0xfaa8,	// (0x00045fd6) list_wheel_apps_pane_g

0x2425,	// (0x00038953) navi_icon_text_pane

0xabd5,	// (0x00041103) aid_fill_nsta

0xcbb9,	// (0x000430e7) navi_icon_text_pane_g1

0xcbc5,	// (0x000430f3) navi_icon_text_pane_t1

0x22bb,	// (0x000387e9) list_set_graphic_pane_t1_ParamLimits

0x22bb,	// (0x000387e9) list_set_graphic_pane_t1

0x3994,	// (0x00039ec2) popup_midp_note_alarm_window_t6_ParamLimits

0x3994,	// (0x00039ec2) popup_midp_note_alarm_window_t6

0x39a6,	// (0x00039ed4) popup_midp_note_alarm_window_t7_ParamLimits

0x39a6,	// (0x00039ed4) popup_midp_note_alarm_window_t7

0x39b8,	// (0x00039ee6) popup_midp_note_alarm_window_t8_ParamLimits

0x39b8,	// (0x00039ee6) popup_midp_note_alarm_window_t8

0x39ca,	// (0x00039ef8) popup_midp_note_alarm_window_t9_ParamLimits

0x39ca,	// (0x00039ef8) popup_midp_note_alarm_window_t9

0x39dc,	// (0x00039f0a) popup_midp_note_alarm_window_t10_ParamLimits

0x39dc,	// (0x00039f0a) popup_midp_note_alarm_window_t10

0x39ee,	// (0x00039f1c) popup_midp_note_alarm_window_t11_ParamLimits

0x39ee,	// (0x00039f1c) popup_midp_note_alarm_window_t11

0x3a00,	// (0x00039f2e) scroll_pane_cp17_ParamLimits

0x3a00,	// (0x00039f2e) scroll_pane_cp17

0x0b2a,	// (0x00037058) volume_small_pane_cp_g1

0x0f06,	// (0x00037434) volume_small_pane_cp_g2

0x0f0f,	// (0x0003743d) volume_small_pane_cp_g3

0x0f18,	// (0x00037446) volume_small_pane_cp_g4

0x0f21,	// (0x0003744f) volume_small_pane_cp_g5

0x0f2a,	// (0x00037458) volume_small_pane_cp_g6

0x0f33,	// (0x00037461) volume_small_pane_cp_g7

0x0f3c,	// (0x0003746a) volume_small_pane_cp_g8

0x0f45,	// (0x00037473) volume_small_pane_cp_g9

0x0f4e,	// (0x0003747c) volume_small_pane_cp_g10

0x2692,	// (0x00038bc0) midp_ticker_pane_g1_ParamLimits

0x269e,	// (0x00038bcc) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x00045c61) midp_ticker_pane_g_ParamLimits

0xa355,	// (0x00040883) midp_ticker_pane_t1_ParamLimits

0xc143,	// (0x00042671) aid_fill_nsta_2

0x3213,	// (0x00039741) list_form2_midp_pane

0x438f,	// (0x0003a8bd) midp_editing_number_pane_ParamLimits

0x439e,	// (0x0003a8cc) midp_ticker_pane_ParamLimits

0x508c,	// (0x0003b5ba) form2_midp_field_pane

0x50b0,	// (0x0003b5de) scroll_pane_cp51

0x50d0,	// (0x0003b5fe) form2_midp_button_pane_ParamLimits

0x50d0,	// (0x0003b5fe) form2_midp_button_pane

0x50e2,	// (0x0003b610) form2_midp_content_pane_ParamLimits

0x50e2,	// (0x0003b610) form2_midp_content_pane

0x50fc,	// (0x0003b62a) form2_midp_field_choice_group_pane

0x5104,	// (0x0003b632) form2_midp_field_pane_g1

0x510c,	// (0x0003b63a) form2_midp_field_pane_g2

0x5114,	// (0x0003b642) form2_midp_field_pane_g3

0x511c,	// (0x0003b64a) form2_midp_field_pane_g4

0x0003,

0xfacd,	// (0x00045ffb) form2_midp_field_pane_g

0x5124,	// (0x0003b652) form2_midp_gauge_slider_pane

0x512c,	// (0x0003b65a) form2_midp_gauge_wait_pane

0x5134,	// (0x0003b662) form2_midp_image_pane_ParamLimits

0x5134,	// (0x0003b662) form2_midp_image_pane

0x514f,	// (0x0003b67d) form2_midp_label_pane_ParamLimits

0x514f,	// (0x0003b67d) form2_midp_label_pane

0xcbf3,	// (0x00043121) form2_midp_label_pane_cp_ParamLimits

0xcbf3,	// (0x00043121) form2_midp_label_pane_cp

0x518f,	// (0x0003b6bd) form2_midp_string_pane_ParamLimits

0x518f,	// (0x0003b6bd) form2_midp_string_pane

0xae4b,	// (0x00041379) form2_midp_text_pane_ParamLimits

0xae4b,	// (0x00041379) form2_midp_text_pane

0x51a1,	// (0x0003b6cf) form2_midp_time_pane

0x51b1,	// (0x0003b6df) input_focus_pane_cp51_ParamLimits

0x51b1,	// (0x0003b6df) input_focus_pane_cp51

0x51c9,	// (0x0003b6f7) form2_midp_label_pane_t1_ParamLimits

0x51c9,	// (0x0003b6f7) form2_midp_label_pane_t1

0xae6c,	// (0x0004139a) form2_mdip_text_pane_t1_ParamLimits

0xae6c,	// (0x0004139a) form2_mdip_text_pane_t1

0xd80f,	// (0x00043d3d) form2_midp_time_pane_t1

0x5217,	// (0x0003b745) form2_midp_gauge_slider_pane_t1

0xcc14,	// (0x00043142) form2_midp_gauge_slider_pane_t2

0xcc26,	// (0x00043154) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad6,	// (0x00046004) form2_midp_gauge_slider_pane_t

0x524d,	// (0x0003b77b) form2_midp_slider_pane

0x5259,	// (0x0003b787) form2_midp_gauge_wait_pane_t1

0x5267,	// (0x0003b795) form2_midp_wait_pane_ParamLimits

0x5267,	// (0x0003b795) form2_midp_wait_pane

0x2f3e,	// (0x0003946c) list_single_2graphic_pane_cp4_ParamLimits

0x2f3e,	// (0x0003946c) list_single_2graphic_pane_cp4

0xc57d,	// (0x00042aab) list_single_midp_graphic_pane_cp_ParamLimits

0xc57d,	// (0x00042aab) list_single_midp_graphic_pane_cp

0xb777,	// (0x00041ca5) list_highlight_pane_cp20

0x52ab,	// (0x0003b7d9) list_single_2graphic_pane_g1_cp4

0x4844,	// (0x0003ad72) list_single_2graphic_pane_g2_cp4

0x52b3,	// (0x0003b7e1) list_single_2graphic_pane_t1_cp4

0xb7d3,	// (0x00041d01) list_highlight_pane_cp21

0x52c2,	// (0x0003b7f0) list_single_midp_graphic_pane_g4_cp

0x52d1,	// (0x0003b7ff) list_single_midp_graphic_pane_t1_cp

0xcc38,	// (0x00043166) form2_mdip_string_pane_t1_ParamLimits

0xcc38,	// (0x00043166) form2_mdip_string_pane_t1

0xb777,	// (0x00041ca5) bg_wml_button_pane_cp2

0xb76d,	// (0x00041c9b) form2_midp_image_pane_g1

0xd311,	// (0x0004383f) list_double_large_graphic_pane_g5_ParamLimits

0xd311,	// (0x0004383f) list_double_large_graphic_pane_g5

0xa2b1,	// (0x000407df) midp_form_pane_ParamLimits

0xb7d3,	// (0x00041d01) main_apps_wheel_pane_ParamLimits

0xa8ed,	// (0x00040e1b) popup_preview_window_ParamLimits

0xa8ed,	// (0x00040e1b) popup_preview_window

0x095a,	// (0x00036e88) popup_touch_info_window_ParamLimits

0x095a,	// (0x00036e88) popup_touch_info_window

0x097c,	// (0x00036eaa) popup_touch_menu_window_ParamLimits

0x097c,	// (0x00036eaa) popup_touch_menu_window

0xb763,	// (0x00041c91) bg_popup_sub_pane_cp6

0x5382,	// (0x0003b8b0) list_touch_menu_pane

0x538a,	// (0x0003b8b8) list_single_touch_menu_pane_ParamLimits

0x538a,	// (0x0003b8b8) list_single_touch_menu_pane

0x53a2,	// (0x0003b8d0) list_single_touch_menu_pane_t1

0xb7d3,	// (0x00041d01) bg_popup_sub_pane_cp7_ParamLimits

0xb7d3,	// (0x00041d01) bg_popup_sub_pane_cp7

0x53b0,	// (0x0003b8de) heading_sub_pane

0x53b8,	// (0x0003b8e6) list_touch_info_pane_ParamLimits

0x53b8,	// (0x0003b8e6) list_touch_info_pane

0x53c7,	// (0x0003b8f5) list_single_touch_info_pane_ParamLimits

0x53c7,	// (0x0003b8f5) list_single_touch_info_pane

0x53d9,	// (0x0003b907) list_single_touch_info_pane_t1

0x53e7,	// (0x0003b915) list_single_touch_info_pane_t2

0x0001,

0xfae4,	// (0x00046012) list_single_touch_info_pane_t

0x25b4,	// (0x00038ae2) bg_popup_heading_pane_cp

0x53f5,	// (0x0003b923) heading_sub_pane_t1

0x2e85,	// (0x000393b3) bg_popup_preview_window_pane_cp_ParamLimits

0x2e85,	// (0x000393b3) bg_popup_preview_window_pane_cp

0x53b0,	// (0x0003b8de) heading_preview_pane

0x53b8,	// (0x0003b8e6) list_preview_pane_ParamLimits

0x53b8,	// (0x0003b8e6) list_preview_pane

0x5403,	// (0x0003b931) popup_preview_window_g1

0x53c7,	// (0x0003b8f5) list_single_preview_pane_ParamLimits

0x53c7,	// (0x0003b8f5) list_single_preview_pane

0x540b,	// (0x0003b939) list_single_preview_pane_g1

0x5413,	// (0x0003b941) list_single_preview_pane_t1

0x53d9,	// (0x0003b907) list_single_preview_pane_t2

0x0001,

0xfae9,	// (0x00046017) list_single_preview_pane_t

0x5421,	// (0x0003b94f) bg_popup_heading_pane_cp2_ParamLimits

0x5421,	// (0x0003b94f) bg_popup_heading_pane_cp2

0x5437,	// (0x0003b965) heading_preview_pane_g1

0x543f,	// (0x0003b96d) heading_preview_pane_t1_ParamLimits

0x543f,	// (0x0003b96d) heading_preview_pane_t1

0xb826,	// (0x00041d54) soft_indicator_pane_t1_ParamLimits

0xbd88,	// (0x000422b6) scroll_pane_ParamLimits

0xf11b,	// (0x00045649) scroll_sc2_left_pane

0xf124,	// (0x00045652) scroll_sc2_right_pane

0xf143,	// (0x00045671) scroll_bg_pane_g1_ParamLimits

0xf158,	// (0x00045686) scroll_bg_pane_g2_ParamLimits

0xf170,	// (0x0004569e) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x00045bec) scroll_bg_pane_g_ParamLimits

0xf143,	// (0x00045671) scroll_handle_pane_g1_ParamLimits

0xf192,	// (0x000456c0) scroll_handle_pane_g2_ParamLimits

0xf170,	// (0x0004569e) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x00045bf3) scroll_handle_pane_g_ParamLimits

0x03b8,	// (0x000368e6) popup_choice_list_window_ParamLimits

0x03b8,	// (0x000368e6) popup_choice_list_window

0x2d5b,	// (0x00039289) choice_list_pane

0x2ddd,	// (0x0003930b) cell_toolbar_pane_t1

0x2e05,	// (0x00039333) toolbar_button_pane_ParamLimits

0x3eca,	// (0x0003a3f8) ai_gene_pane_1_t2_ParamLimits

0x3eca,	// (0x0003a3f8) ai_gene_pane_1_t2

0x0001,

0xf8e8,	// (0x00045e16) ai_gene_pane_1_t_ParamLimits

0xf8e8,	// (0x00045e16) ai_gene_pane_1_t

0x545c,	// (0x0003b98a) scroll_sc2_left_pane_g1

0x545c,	// (0x0003b98a) scroll_sc2_right_pane_g1

0x28db,	// (0x00038e09) bg_popup_sub_pane_cp10

0x5466,	// (0x0003b994) list_choice_list_pane

0x547f,	// (0x0003b9ad) list_single_choice_list_pane_ParamLimits

0x547f,	// (0x0003b9ad) list_single_choice_list_pane

0x5497,	// (0x0003b9c5) list_single_choice_list_pane_g1

0xbf76,	// (0x000424a4) list_single_choice_list_pane_t1_ParamLimits

0xbf76,	// (0x000424a4) list_single_choice_list_pane_t1

0x549f,	// (0x0003b9cd) choice_list_pane_g1

0x54a7,	// (0x0003b9d5) choice_list_pane_t1

0xb763,	// (0x00041c91) input_focus_pane_cp11

0xc0f4,	// (0x00042622) title_pane_stacon_g2_ParamLimits

0xc0f4,	// (0x00042622) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x00045bd2) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x00045bd2) title_pane_stacon_g

0x25b4,	// (0x00038ae2) cursor_press_pane

0xa564,	// (0x00040a92) popup_fep_hwr_window_ParamLimits

0xa564,	// (0x00040a92) popup_fep_hwr_window

0x04fc,	// (0x00036a2a) popup_fep_vkb_window_ParamLimits

0x04fc,	// (0x00036a2a) popup_fep_vkb_window

0x54b5,	// (0x0003b9e3) cursor_press_pane_g1

0x0002,

0xfb12,	// (0x00046040) fep_vkb_side_pane_g_ParamLimits

0x0fd5,	// (0x00037503) fep_hwr_candidate_pane_ParamLimits

0x0fd5,	// (0x00037503) fep_hwr_candidate_pane

0x0fff,	// (0x0003752d) fep_hwr_side_pane_ParamLimits

0x0fff,	// (0x0003752d) fep_hwr_side_pane

0x1021,	// (0x0003754f) fep_hwr_top_pane_ParamLimits

0x1021,	// (0x0003754f) fep_hwr_top_pane

0x1039,	// (0x00037567) fep_hwr_write_pane_ParamLimits

0x1039,	// (0x00037567) fep_hwr_write_pane

0xfb12,	// (0x00046040) fep_vkb_side_pane_g

0x54bd,	// (0x0003b9eb) fep_hwr_top_pane_g1

0x54cf,	// (0x0003b9fd) fep_hwr_top_pane_g2

0x1073,	// (0x000375a1) fep_hwr_top_pane_g3

0x0002,

0xfaee,	// (0x0004601c) fep_hwr_top_pane_g

0x1088,	// (0x000375b6) fep_hwr_top_text_pane

0xf28c,	// (0x000457ba) fep_hwr_top_text_pane_g1

0x5505,	// (0x0003ba33) fep_hwr_top_text_pane_t1

0x1192,	// (0x000376c0) fep_hwr_candidate_pane_g1

0x5750,	// (0x0003bc7e) fep_vkb_keypad_pane_g3_ParamLimits

0x5750,	// (0x0003bc7e) fep_vkb_keypad_pane_g3

0x577c,	// (0x0003bcaa) fep_vkb_keypad_pane_g4_ParamLimits

0x577c,	// (0x0003bcaa) fep_vkb_keypad_pane_g4

0x57f3,	// (0x0003bd21) fep_vkb_bottom_pane_g2_ParamLimits

0x57f3,	// (0x0003bd21) fep_vkb_bottom_pane_g2

0x0001,

0xfb19,	// (0x00046047) fep_vkb_bottom_pane_g_ParamLimits

0xfb19,	// (0x00046047) fep_vkb_bottom_pane_g

0x545c,	// (0x0003b98a) cell_vkb_side_pane_g2

0x0001,

0xfb23,	// (0x00046051) cell_vkb_side_pane_g

0x587e,	// (0x0003bdac) cell_vkb_side_pane_t1

0x588c,	// (0x0003bdba) cell_vkb_side_pane_t1_copy1

0x545c,	// (0x0003b98a) bg_fep_vkb_candidate_pane_g2

0x59d0,	// (0x0003befe) cell_vkb_candidate_pane_ParamLimits

0x5513,	// (0x0003ba41) aid_size_cell_vkb_ParamLimits

0x5513,	// (0x0003ba41) aid_size_cell_vkb

0x59d0,	// (0x0003befe) cell_vkb_candidate_pane

0x11b9,	// (0x000376e7) bg_popup_fep_shadow_pane_g1

0xccce,	// (0x000431fc) fep_vkb_bottom_pane_ParamLimits

0xccce,	// (0x000431fc) fep_vkb_bottom_pane

0x55e2,	// (0x0003bb10) fep_vkb_candidate_pane_ParamLimits

0x55e2,	// (0x0003bb10) fep_vkb_candidate_pane

0xccfa,	// (0x00043228) fep_vkb_keypad_pane_ParamLimits

0xccfa,	// (0x00043228) fep_vkb_keypad_pane

0xcd21,	// (0x0004324f) fep_vkb_side_pane_ParamLimits

0xcd21,	// (0x0004324f) fep_vkb_side_pane

0xcd5d,	// (0x0004328b) fep_vkb_top_pane_ParamLimits

0xcd5d,	// (0x0004328b) fep_vkb_top_pane

0x56a9,	// (0x0003bbd7) fep_vkb_top_pane_g1_ParamLimits

0x56a9,	// (0x0003bbd7) fep_vkb_top_pane_g1

0x56b8,	// (0x0003bbe6) fep_vkb_top_pane_g2_ParamLimits

0x56b8,	// (0x0003bbe6) fep_vkb_top_pane_g2

0x56c7,	// (0x0003bbf5) fep_vkb_top_pane_g3_ParamLimits

0x56c7,	// (0x0003bbf5) fep_vkb_top_pane_g3

0x0003,

0xfb09,	// (0x00046037) fep_vkb_top_pane_g_ParamLimits

0xfb09,	// (0x00046037) fep_vkb_top_pane_g

0x56e5,	// (0x0003bc13) fep_vkb_top_text_pane_ParamLimits

0x56e5,	// (0x0003bc13) fep_vkb_top_text_pane

0xcd99,	// (0x000432c7) fep_vkb_side_pane_g1_ParamLimits

0xcd99,	// (0x000432c7) fep_vkb_side_pane_g1

0x573f,	// (0x0003bc6d) grid_vkb_side_pane_ParamLimits

0x573f,	// (0x0003bc6d) grid_vkb_side_pane

0x11c1,	// (0x000376ef) bg_popup_fep_shadow_pane_g2

0x11ca,	// (0x000376f8) bg_popup_fep_shadow_pane_g3

0x11d2,	// (0x00037700) bg_popup_fep_shadow_pane_g4

0x11db,	// (0x00037709) bg_popup_fep_shadow_pane_g5

0x11e5,	// (0x00037713) bg_popup_fep_shadow_pane_g6

0x11ed,	// (0x0003771b) bg_popup_fep_shadow_pane_g7

0xbe85,	// (0x000423b3) bg_popup_fep_shadow_pane_g8

0x579e,	// (0x0003bccc) grid_vkb_keypad_number_pane_ParamLimits

0x579e,	// (0x0003bccc) grid_vkb_keypad_number_pane

0x57b2,	// (0x0003bce0) grid_vkb_keypad_pane_ParamLimits

0x57b2,	// (0x0003bce0) grid_vkb_keypad_pane

0x57d8,	// (0x0003bd06) fep_vkb_bottom_pane_g1_ParamLimits

0x57d8,	// (0x0003bd06) fep_vkb_bottom_pane_g1

0x5801,	// (0x0003bd2f) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x5801,	// (0x0003bd2f) grid_vkb_keypad_bottom_left_pane

0x5816,	// (0x0003bd44) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x5816,	// (0x0003bd44) grid_vkb_keypad_bottom_right_pane

0x582b,	// (0x0003bd59) fep_vkb_top_text_pane_g1

0xcde0,	// (0x0004330e) fep_vkb_top_text_pane_t1

0xcdf2,	// (0x00043320) cell_vkb_side_pane_ParamLimits

0xcdf2,	// (0x00043320) cell_vkb_side_pane

0x545c,	// (0x0003b98a) cell_vkb_side_pane_g1

0x589a,	// (0x0003bdc8) cell_vkb_keypad_pane_ParamLimits

0x589a,	// (0x0003bdc8) cell_vkb_keypad_pane

0x5927,	// (0x0003be55) cell_vkb_keypad_pane_g1

0x0008,

0xfb36,	// (0x00046064) bg_popup_fep_shadow_pane_g

0x11ff,	// (0x0003772d) cell_hwr_side_pane_g1

0x11ff,	// (0x0003772d) cell_hwr_side_pane_g2

0x5931,	// (0x0003be5f) cell_vkb_keypad_pane_t1

0xce08,	// (0x00043336) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xce08,	// (0x00043336) cell_vkb_keypad_bottom_left_pane

0xce1d,	// (0x0004334b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xce1d,	// (0x0004334b) cell_vkb_keypad_bottom_right_pane

0x545c,	// (0x0003b98a) cell_vkb_keypad_bottom_left_pane_g1

0x545c,	// (0x0003b98a) cell_vkb_keypad_bottom_right_pane_g1

0x5995,	// (0x0003bec3) cell_vkb_keypad_number_pane_ParamLimits

0x5995,	// (0x0003bec3) cell_vkb_keypad_number_pane

0x59b4,	// (0x0003bee2) cell_vkb_keypad_number_pane_g1

0x59be,	// (0x0003beec) cell_vkb_keypad_number_pane_g2

0x59c7,	// (0x0003bef5) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb28,	// (0x00046056) cell_vkb_keypad_number_pane_g

0x5931,	// (0x0003be5f) cell_vkb_keypad_number_pane_t1

0x59f1,	// (0x0003bf1f) fep_vkb_candidate_pane_g1

0x0001,

0xfb49,	// (0x00046077) cell_hwr_side_pane_g

0x5a0a,	// (0x0003bf38) cell_hwr_side_pane_t1

0x1209,	// (0x00037737) cell_hwr_side_pane_t1_copy1

0x1217,	// (0x00037745) cell_hwr_candidate_pane_g1

0x1246,	// (0x00037774) cell_hwr_candidate_pane_t1

0x545c,	// (0x0003b98a) cell_vkb_candidate_pane_g2

0x5a4e,	// (0x0003bf7c) cell_vkb_candidate_pane_t1

0x0f9c,	// (0x000374ca) bg_popup_fep_shadow_pane_ParamLimits

0x0f9c,	// (0x000374ca) bg_popup_fep_shadow_pane

0x1053,	// (0x00037581) bg_fep_hwr_top_pane_g4

0x54e1,	// (0x0003ba0f) bg_hwr_side_pane_g1_ParamLimits

0x54e1,	// (0x0003ba0f) bg_hwr_side_pane_g1

0xaea5,	// (0x000413d3) cell_hwr_side_pane_ParamLimits

0xaea5,	// (0x000413d3) cell_hwr_side_pane

0x1103,	// (0x00037631) fep_hwr_write_pane_g1_ParamLimits

0x1103,	// (0x00037631) fep_hwr_write_pane_g1

0x1110,	// (0x0003763e) fep_hwr_write_pane_g2_ParamLimits

0x1110,	// (0x0003763e) fep_hwr_write_pane_g2

0x111d,	// (0x0003764b) fep_hwr_write_pane_g3_ParamLimits

0x111d,	// (0x0003764b) fep_hwr_write_pane_g3

0xaec5,	// (0x000413f3) fep_hwr_write_pane_g4_ParamLimits

0xaec5,	// (0x000413f3) fep_hwr_write_pane_g4

0x0005,

0xfaf5,	// (0x00046023) fep_hwr_write_pane_g_ParamLimits

0xfaf5,	// (0x00046023) fep_hwr_write_pane_g

0x1053,	// (0x00037581) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1053,	// (0x00037581) bg_fep_hwr_candidate_pane_g2

0x1140,	// (0x0003766e) cell_hwr_candidate_pane_ParamLimits

0x1140,	// (0x0003766e) cell_hwr_candidate_pane

0x1192,	// (0x000376c0) fep_hwr_candidate_pane_g1_ParamLimits

0x5541,	// (0x0003ba6f) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x5541,	// (0x0003ba6f) bg_popup_fep_shadow_pane_cp2

0x56d7,	// (0x0003bc05) fep_vkb_top_pane_g4_ParamLimits

0x56d7,	// (0x0003bc05) fep_vkb_top_pane_g4

0x571d,	// (0x0003bc4b) fep_vkb_side_pane_g2_ParamLimits

0x571d,	// (0x0003bc4b) fep_vkb_side_pane_g2

0x9d16,	// (0x00040244) list_setting_pane_t4_ParamLimits

0x9d16,	// (0x00040244) list_setting_pane_t4

0x9db2,	// (0x000402e0) list_setting_number_pane_t5_ParamLimits

0x9db2,	// (0x000402e0) list_setting_number_pane_t5

0xf2e2,	// (0x00045810) list_double_heading_pane_cp2_ParamLimits

0xf2e2,	// (0x00045810) list_double_heading_pane_cp2

0x5a5c,	// (0x0003bf8a) list_double_heading_pane_g1_cp2_ParamLimits

0x5a5c,	// (0x0003bf8a) list_double_heading_pane_g1_cp2

0x5a68,	// (0x0003bf96) list_double_heading_pane_g2_cp2_ParamLimits

0x5a68,	// (0x0003bf96) list_double_heading_pane_g2_cp2

0x5a7c,	// (0x0003bfaa) list_double_heading_pane_t1_cp2_ParamLimits

0x5a7c,	// (0x0003bfaa) list_double_heading_pane_t1_cp2

0x5a92,	// (0x0003bfc0) list_double_heading_pane_t2_cp2_ParamLimits

0x5a92,	// (0x0003bfc0) list_double_heading_pane_t2_cp2

0xb75b,	// (0x00041c89) aid_value_unit2

0xee06,	// (0x00045334) popup_preview_fixed_window

0xb906,	// (0x00041e34) bg_popup_preview_window_pane_cp02

0x5aa4,	// (0x0003bfd2) list_preview_fixed_pane

0x5aea,	// (0x0003c018) list_empty_pane_fp_ParamLimits

0x5aea,	// (0x0003c018) list_empty_pane_fp

0x5aea,	// (0x0003c018) list_single_cale_day_pane_fp_ParamLimits

0x5aea,	// (0x0003c018) list_single_cale_day_pane_fp

0x5aea,	// (0x0003c018) list_single_graphic_heading_pane_fp_ParamLimits

0x5aea,	// (0x0003c018) list_single_graphic_heading_pane_fp

0x5aea,	// (0x0003c018) list_single_graphic_pane_fp_ParamLimits

0x5aea,	// (0x0003c018) list_single_graphic_pane_fp

0x5aea,	// (0x0003c018) list_single_heading_pane_fp_ParamLimits

0x5aea,	// (0x0003c018) list_single_heading_pane_fp

0x5aea,	// (0x0003c018) list_single_pane_fp_ParamLimits

0x5aea,	// (0x0003c018) list_single_pane_fp

0x5b03,	// (0x0003c031) list_single_pane_fp_g1_ParamLimits

0x5b03,	// (0x0003c031) list_single_pane_fp_g1

0xd82f,	// (0x00043d5d) list_single_pane_fp_g2_ParamLimits

0xd82f,	// (0x00043d5d) list_single_pane_fp_g2

0xd83b,	// (0x00043d69) list_single_pane_fp_g3_ParamLimits

0xd83b,	// (0x00043d69) list_single_pane_fp_g3

0x5b0f,	// (0x0003c03d) list_single_pane_fp_g4_ParamLimits

0x5b0f,	// (0x0003c03d) list_single_pane_fp_g4

0x0003,

0xfb5c,	// (0x0004608a) list_single_pane_fp_g_ParamLimits

0xfb5c,	// (0x0004608a) list_single_pane_fp_g

0xd84f,	// (0x00043d7d) list_single_pane_fp_t1_ParamLimits

0xd84f,	// (0x00043d7d) list_single_pane_fp_t1

0xd866,	// (0x00043d94) list_single_graphic_pane_fp_g1_ParamLimits

0xd866,	// (0x00043d94) list_single_graphic_pane_fp_g1

0x5b03,	// (0x0003c031) list_single_graphic_pane_fp_g2_ParamLimits

0x5b03,	// (0x0003c031) list_single_graphic_pane_fp_g2

0xd82f,	// (0x00043d5d) list_single_graphic_pane_fp_g3_ParamLimits

0xd82f,	// (0x00043d5d) list_single_graphic_pane_fp_g3

0xd83b,	// (0x00043d69) list_single_graphic_pane_fp_g4_ParamLimits

0xd83b,	// (0x00043d69) list_single_graphic_pane_fp_g4

0x5b0f,	// (0x0003c03d) list_single_graphic_pane_fp_g5_ParamLimits

0x5b0f,	// (0x0003c03d) list_single_graphic_pane_fp_g5

0x0004,

0xfb65,	// (0x00046093) list_single_graphic_pane_fp_g_ParamLimits

0xfb65,	// (0x00046093) list_single_graphic_pane_fp_g

0xd872,	// (0x00043da0) list_single_graphic_pane_fp_t1_ParamLimits

0xd872,	// (0x00043da0) list_single_graphic_pane_fp_t1

0xd866,	// (0x00043d94) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xd866,	// (0x00043d94) list_single_graphic_heading_pane_fp_g1

0x5b03,	// (0x0003c031) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5b03,	// (0x0003c031) list_single_graphic_heading_pane_fp_g2

0xd82f,	// (0x00043d5d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd82f,	// (0x00043d5d) list_single_graphic_heading_pane_fp_g3

0xd83b,	// (0x00043d69) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xd83b,	// (0x00043d69) list_single_graphic_heading_pane_fp_g4

0x5b0f,	// (0x0003c03d) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5b0f,	// (0x0003c03d) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb65,	// (0x00046093) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb65,	// (0x00046093) list_single_graphic_heading_pane_fp_g

0xd888,	// (0x00043db6) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xd888,	// (0x00043db6) list_single_graphic_heading_pane_fp_t1

0xd89e,	// (0x00043dcc) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xd89e,	// (0x00043dcc) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb70,	// (0x0004609e) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb70,	// (0x0004609e) list_single_graphic_heading_pane_fp_t

0xd8b0,	// (0x00043dde) list_single_cale_day_pane_fp_g1_ParamLimits

0xd8b0,	// (0x00043dde) list_single_cale_day_pane_fp_g1

0x5b1b,	// (0x0003c049) list_single_cale_day_pane_fp_g2_ParamLimits

0x5b1b,	// (0x0003c049) list_single_cale_day_pane_fp_g2

0xd8e8,	// (0x00043e16) list_single_cale_day_pane_fp_g3_ParamLimits

0xd8e8,	// (0x00043e16) list_single_cale_day_pane_fp_g3

0xd910,	// (0x00043e3e) list_single_cale_day_pane_fp_g4_ParamLimits

0xd910,	// (0x00043e3e) list_single_cale_day_pane_fp_g4

0xd934,	// (0x00043e62) list_single_cale_day_pane_fp_g5_ParamLimits

0xd934,	// (0x00043e62) list_single_cale_day_pane_fp_g5

0x0004,

0xfb75,	// (0x000460a3) list_single_cale_day_pane_fp_g_ParamLimits

0xfb75,	// (0x000460a3) list_single_cale_day_pane_fp_g

0xd958,	// (0x00043e86) list_single_cale_day_pane_fp_t1_ParamLimits

0xd958,	// (0x00043e86) list_single_cale_day_pane_fp_t1

0xd97e,	// (0x00043eac) list_single_cale_day_pane_fp_t2_ParamLimits

0xd97e,	// (0x00043eac) list_single_cale_day_pane_fp_t2

0xd997,	// (0x00043ec5) list_single_cale_day_pane_fp_t3_ParamLimits

0xd997,	// (0x00043ec5) list_single_cale_day_pane_fp_t3

0x0002,

0xfb80,	// (0x000460ae) list_single_cale_day_pane_fp_t_ParamLimits

0xfb80,	// (0x000460ae) list_single_cale_day_pane_fp_t

0x5b03,	// (0x0003c031) list_empty_pane_fp_g1_ParamLimits

0x5b03,	// (0x0003c031) list_empty_pane_fp_g1

0xd9b0,	// (0x00043ede) list_empty_pane_fp_t1

0xd9be,	// (0x00043eec) list_empty_pane_fp_t2

0x0001,

0xfb87,	// (0x000460b5) list_empty_pane_fp_t

0x5b03,	// (0x0003c031) list_single_heading_pane_fp_g1_ParamLimits

0x5b03,	// (0x0003c031) list_single_heading_pane_fp_g1

0xd82f,	// (0x00043d5d) list_single_heading_pane_fp_g2_ParamLimits

0xd82f,	// (0x00043d5d) list_single_heading_pane_fp_g2

0xd83b,	// (0x00043d69) list_single_heading_pane_fp_g3_ParamLimits

0xd83b,	// (0x00043d69) list_single_heading_pane_fp_g3

0x0002,

0xfb8c,	// (0x000460ba) list_single_heading_pane_fp_g_ParamLimits

0xfb8c,	// (0x000460ba) list_single_heading_pane_fp_g

0xd9cc,	// (0x00043efa) list_single_heading_pane_fp_t1_ParamLimits

0xd9cc,	// (0x00043efa) list_single_heading_pane_fp_t1

0xd9de,	// (0x00043f0c) list_single_heading_pane_fp_t2_ParamLimits

0xd9de,	// (0x00043f0c) list_single_heading_pane_fp_t2

0x0001,

0xfb93,	// (0x000460c1) list_single_heading_pane_fp_t_ParamLimits

0xfb93,	// (0x000460c1) list_single_heading_pane_fp_t

0xbf8b,	// (0x000424b9) aid_size_cell_fast

0xb8e9,	// (0x00041e17) soft_indicator_pane_cp1_t1

0xbfc8,	// (0x000424f6) cell_app_pane_cp2_ParamLimits

0xbfc8,	// (0x000424f6) cell_app_pane_cp2

0x0fbe,	// (0x000374ec) fep_hwr_candidate_drop_down_list_pane

0x11ac,	// (0x000376da) fep_hwr_candidate_pane_g3_ParamLimits

0x11ac,	// (0x000376da) fep_hwr_candidate_pane_g3

0xd822,	// (0x00043d50) fep_hwr_candidate_pane_g4_ParamLimits

0xd822,	// (0x00043d50) fep_hwr_candidate_pane_g4

0x0002,

0xfb02,	// (0x00046030) fep_hwr_candidate_pane_g_ParamLimits

0xfb02,	// (0x00046030) fep_hwr_candidate_pane_g

0x55d1,	// (0x0003baff) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x55d1,	// (0x0003baff) fep_vkb_candidate_drop_down_list_pane

0x59f9,	// (0x0003bf27) fep_vkb_candidate_pane_g3

0x5a01,	// (0x0003bf2f) fep_vkb_candidate_pane_g4

0x0002,

0xfb2f,	// (0x0004605d) fep_vkb_candidate_pane_g

0x1217,	// (0x00037745) cell_hwr_candidate_pane_g1_ParamLimits

0x1225,	// (0x00037753) cell_hwr_candidate_pane_g3_ParamLimits

0x1225,	// (0x00037753) cell_hwr_candidate_pane_g3

0x7321,	// (0x0003d84f) cell_hwr_candidate_pane_g4_ParamLimits

0x7321,	// (0x0003d84f) cell_hwr_candidate_pane_g4

0x0002,

0xfb4e,	// (0x0004607c) cell_hwr_candidate_pane_g_ParamLimits

0xfb4e,	// (0x0004607c) cell_hwr_candidate_pane_g

0x5a18,	// (0x0003bf46) cell_vkb_candidate_pane_g3_ParamLimits

0x5a18,	// (0x0003bf46) cell_vkb_candidate_pane_g3

0x5a33,	// (0x0003bf61) cell_vkb_candidate_pane_g4_ParamLimits

0x5a33,	// (0x0003bf61) cell_vkb_candidate_pane_g4

0x5b27,	// (0x0003c055) cell_app_pane_cp2_g1_ParamLimits

0x5b27,	// (0x0003c055) cell_app_pane_cp2_g1

0x5b45,	// (0x0003c073) cell_app_pane_cp2_g2_ParamLimits

0x5b45,	// (0x0003c073) cell_app_pane_cp2_g2

0x0001,

0xfb98,	// (0x000460c6) cell_app_pane_cp2_g_ParamLimits

0xfb98,	// (0x000460c6) cell_app_pane_cp2_g

0x5b51,	// (0x0003c07f) cell_app_pane_cp2_t1_ParamLimits

0x5b51,	// (0x0003c07f) cell_app_pane_cp2_t1

0xbe15,	// (0x00042343) grid_highlight_pane_cp1_ParamLimits

0xbe15,	// (0x00042343) grid_highlight_pane_cp1

0x1264,	// (0x00037792) cell_hwr_candidate_pane_cp1_ParamLimits

0x1264,	// (0x00037792) cell_hwr_candidate_pane_cp1

0x1217,	// (0x00037745) fep_hwr_candidate_drop_down_list_pane_g1

0x1288,	// (0x000377b6) fep_hwr_candidate_drop_down_list_pane_g2

0x1295,	// (0x000377c3) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9d,	// (0x000460cb) fep_hwr_candidate_drop_down_list_pane_g

0x12a2,	// (0x000377d0) fep_hwr_candidate_drop_down_list_scroll_pane

0x12ab,	// (0x000377d9) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x12ab,	// (0x000377d9) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x12b8,	// (0x000377e6) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x12b8,	// (0x000377e6) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x12c5,	// (0x000377f3) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x12c5,	// (0x000377f3) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x12d2,	// (0x00037800) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x12d2,	// (0x00037800) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x12ed,	// (0x0003781b) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x12ed,	// (0x0003781b) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1308,	// (0x00037836) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1308,	// (0x00037836) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1323,	// (0x00037851) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1323,	// (0x00037851) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x133e,	// (0x0003786c) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x133e,	// (0x0003786c) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba4,	// (0x000460d2) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba4,	// (0x000460d2) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5b63,	// (0x0003c091) cell_vkb_candidate_pane_cp1_ParamLimits

0x5b63,	// (0x0003c091) cell_vkb_candidate_pane_cp1

0x56d7,	// (0x0003bc05) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x56d7,	// (0x0003bc05) fep_vkb_candidate_drop_down_list_pane_g1

0x5b89,	// (0x0003c0b7) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5b89,	// (0x0003c0b7) fep_vkb_candidate_drop_down_list_pane_g2

0x5b96,	// (0x0003c0c4) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5b96,	// (0x0003c0c4) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb5,	// (0x000460e3) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb5,	// (0x000460e3) fep_vkb_candidate_drop_down_list_pane_g

0x5ba3,	// (0x0003c0d1) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5ba3,	// (0x0003c0d1) fep_vkb_candidate_drop_down_list_scroll_pane

0x5bb0,	// (0x0003c0de) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5bb0,	// (0x0003c0de) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5bbd,	// (0x0003c0eb) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5bbd,	// (0x0003c0eb) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5bc9,	// (0x0003c0f7) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5bc9,	// (0x0003c0f7) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5bd5,	// (0x0003c103) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5bd5,	// (0x0003c103) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5bf6,	// (0x0003c124) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5bf6,	// (0x0003c124) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5c17,	// (0x0003c145) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5c17,	// (0x0003c145) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5c38,	// (0x0003c166) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5c38,	// (0x0003c166) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5c59,	// (0x0003c187) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5c59,	// (0x0003c187) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbc,	// (0x000460ea) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbc,	// (0x000460ea) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x95f4,	// (0x0003fb22) title_pane_g1_ParamLimits

0x9607,	// (0x0003fb35) title_pane_g2_ParamLimits

0xf529,	// (0x00045a57) title_pane_g_ParamLimits

0xf27c,	// (0x000457aa) aid_call2_pane

0xf284,	// (0x000457b2) aid_call_pane

0xf28c,	// (0x000457ba) popup_clock_analogue_window_g1

0xf28c,	// (0x000457ba) popup_clock_analogue_window_g2

0xf294,	// (0x000457c2) popup_clock_analogue_window_g3

0xf29d,	// (0x000457cb) popup_clock_analogue_window_g4

0xb76d,	// (0x00041c9b) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x00045c01) popup_clock_analogue_window_g

0xf2a5,	// (0x000457d3) popup_clock_analogue_window_t1

0xf302,	// (0x00045830) clock_digital_number_pane_ParamLimits

0xf302,	// (0x00045830) clock_digital_number_pane

0xf30e,	// (0x0004583c) clock_digital_number_pane_cp02_ParamLimits

0xf30e,	// (0x0004583c) clock_digital_number_pane_cp02

0xf31a,	// (0x00045848) clock_digital_number_pane_cp03_ParamLimits

0xf31a,	// (0x00045848) clock_digital_number_pane_cp03

0xf326,	// (0x00045854) clock_digital_number_pane_cp04_ParamLimits

0xf326,	// (0x00045854) clock_digital_number_pane_cp04

0xf332,	// (0x00045860) clock_digital_separator_pane_ParamLimits

0xf332,	// (0x00045860) clock_digital_separator_pane

0xf33e,	// (0x0004586c) popup_clock_digital_window_t1_ParamLimits

0xf33e,	// (0x0004586c) popup_clock_digital_window_t1

0xb76d,	// (0x00041c9b) clock_digital_number_pane_g1

0xb76d,	// (0x00041c9b) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x00045c0c) clock_digital_number_pane_g

0xb76d,	// (0x00041c9b) clock_digital_separator_pane_g1

0xb76d,	// (0x00041c9b) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x00045c0c) clock_digital_separator_pane_g

0xabd5,	// (0x00041103) aid_fill_nsta_ParamLimits

0xc257,	// (0x00042785) indicator_nsta_pane_ParamLimits

0x2bf4,	// (0x00039122) popup_clock_analogue_window

0x2bf4,	// (0x00039122) popup_clock_digital_window

0xcaf6,	// (0x00043024) grid_indicator_nsta_pane_ParamLimits

0x4eb1,	// (0x0003b3df) clock_nsta_pane_t2

0x0001,

0xfa82,	// (0x00045fb0) clock_nsta_pane_t

0xf0c9,	// (0x000455f7) aid_size_max_handle

0xa0ad,	// (0x000405db) aid_size_min_handle

0x25b4,	// (0x00038ae2) editor_scroll_pane

0x5c74,	// (0x0003c1a2) ex_editor_pane

0xbf51,	// (0x0004247f) scroll_pane_cp13

0xbdb4,	// (0x000422e2) scroll_pane_cp14

0xf2da,	// (0x00045808) scroll_pane_cp36

0xa13a,	// (0x00040668) list_single_graphic_hl_pane_cp2_ParamLimits

0xa13a,	// (0x00040668) list_single_graphic_hl_pane_cp2

0xc983,	// (0x00042eb1) list_single_graphic_hl_pane_ParamLimits

0xc983,	// (0x00042eb1) list_single_graphic_hl_pane

0xd9f4,	// (0x00043f22) aid_size_min_hl_cp1

0x5c7c,	// (0x0003c1aa) list_highlight_pane_cp34_ParamLimits

0x5c7c,	// (0x0003c1aa) list_highlight_pane_cp34

0x5c8d,	// (0x0003c1bb) list_single_graphic_hl_pane_g1_ParamLimits

0x5c8d,	// (0x0003c1bb) list_single_graphic_hl_pane_g1

0xaeda,	// (0x00041408) list_single_graphic_hl_pane_g2_ParamLimits

0xaeda,	// (0x00041408) list_single_graphic_hl_pane_g2

0xaeda,	// (0x00041408) list_single_graphic_hl_pane_g3_ParamLimits

0xaeda,	// (0x00041408) list_single_graphic_hl_pane_g3

0xaee6,	// (0x00041414) list_single_graphic_hl_pane_g4_ParamLimits

0xaee6,	// (0x00041414) list_single_graphic_hl_pane_g4

0xaef2,	// (0x00041420) list_single_graphic_hl_pane_g5_ParamLimits

0xaef2,	// (0x00041420) list_single_graphic_hl_pane_g5

0x0004,

0xfbcd,	// (0x000460fb) list_single_graphic_hl_pane_g_ParamLimits

0xfbcd,	// (0x000460fb) list_single_graphic_hl_pane_g

0xaf06,	// (0x00041434) list_single_graphic_hl_pane_t1_ParamLimits

0xaf06,	// (0x00041434) list_single_graphic_hl_pane_t1

0x5c9a,	// (0x0003c1c8) aid_size_min_hl_cp2

0x5ca3,	// (0x0003c1d1) list_highlight_pane_cp34_cp2_ParamLimits

0x5ca3,	// (0x0003c1d1) list_highlight_pane_cp34_cp2

0x5c8d,	// (0x0003c1bb) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5c8d,	// (0x0003c1bb) list_single_graphic_hl_pane_g1_cp2

0x5cb0,	// (0x0003c1de) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5cb0,	// (0x0003c1de) list_single_graphic_hl_pane_g2_cp2

0x5cbc,	// (0x0003c1ea) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x5cbc,	// (0x0003c1ea) list_single_graphic_hl_pane_g3_cp2

0x5cca,	// (0x0003c1f8) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5cca,	// (0x0003c1f8) list_single_graphic_hl_pane_g4_cp2

0x5cd6,	// (0x0003c204) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5cd6,	// (0x0003c204) list_single_graphic_hl_pane_g5_cp2

0xa3a9,	// (0x000408d7) control_pane_g4_ParamLimits

0xa3a9,	// (0x000408d7) control_pane_g4

0x28db,	// (0x00038e09) bg_popup_sub_pane_cp10_ParamLimits

0x5466,	// (0x0003b994) list_choice_list_pane_ParamLimits

0x5475,	// (0x0003b9a3) scroll_pane_cp23

0xb906,	// (0x00041e34) bg_popup_preview_window_pane_cp02_ParamLimits

0x5aa4,	// (0x0003bfd2) list_preview_fixed_pane_ParamLimits

0x5aba,	// (0x0003bfe8) list_preview_fixed_pane_cp_ParamLimits

0x5aba,	// (0x0003bfe8) list_preview_fixed_pane_cp

0x5ac6,	// (0x0003bff4) popup_preview_fixed_window_g1_ParamLimits

0x5ac6,	// (0x0003bff4) popup_preview_fixed_window_g1

0x5ad2,	// (0x0003c000) popup_preview_fixed_window_g2_ParamLimits

0x5ad2,	// (0x0003c000) popup_preview_fixed_window_g2

0x0002,

0xfb55,	// (0x00046083) popup_preview_fixed_window_g_ParamLimits

0xfb55,	// (0x00046083) popup_preview_fixed_window_g

0xf016,	// (0x00045544) aid_navi_side_left_pane_ParamLimits

0xf02b,	// (0x00045559) aid_navi_side_right_pane_ParamLimits

0xf043,	// (0x00045571) navi_icon_pane_stacon_ParamLimits

0xf057,	// (0x00045585) navi_navi_pane_stacon_ParamLimits

0xf043,	// (0x00045571) navi_text_pane_stacon_ParamLimits

0xecf7,	// (0x00045225) main_text_info_pane

0x5d00,	// (0x0003c22e) listscroll_text_info_pane

0x5d08,	// (0x0003c236) list_text_info_pane_ParamLimits

0x5d08,	// (0x0003c236) list_text_info_pane

0x5d17,	// (0x0003c245) scroll_pane_cp24_ParamLimits

0x5d17,	// (0x0003c245) scroll_pane_cp24

0xce38,	// (0x00043366) list_text_info_pane_t1_ParamLimits

0xce38,	// (0x00043366) list_text_info_pane_t1

0xa4c8,	// (0x000409f6) popup_fast_swap2_window_ParamLimits

0xa4c8,	// (0x000409f6) popup_fast_swap2_window

0x5d5a,	// (0x0003c288) aid_size_cell_fast2

0xb763,	// (0x00041c91) bg_popup_window_pane_cp17

0x5d64,	// (0x0003c292) heading_pane_cp2

0x5d6c,	// (0x0003c29a) listscroll_fast2_pane

0x5d74,	// (0x0003c2a2) grid_fast2_pane

0x5d7e,	// (0x0003c2ac) listscroll_fast2_pane_g1

0x5d88,	// (0x0003c2b6) listscroll_fast2_pane_g2

0x0001,

0xfbd8,	// (0x00046106) listscroll_fast2_pane_g

0xbf51,	// (0x0004247f) scroll_pane_cp26

0x5d92,	// (0x0003c2c0) cell_fast2_pane_ParamLimits

0x5d92,	// (0x0003c2c0) cell_fast2_pane

0x5da9,	// (0x0003c2d7) cell_fast2_pane_g1

0x5db2,	// (0x0003c2e0) cell_fast2_pane_g2

0x5dbb,	// (0x0003c2e9) cell_fast2_pane_g3

0x0002,

0xfbdd,	// (0x0004610b) cell_fast2_pane_g

0xbb7b,	// (0x000420a9) grid_highlight_pane_cp9

0x039c,	// (0x000368ca) main_eswt_pane_ParamLimits

0x039c,	// (0x000368ca) main_eswt_pane

0x5d2c,	// (0x0003c25a) list_single_text_info_pane

0x5dc3,	// (0x0003c2f1) eswt_ctrl_button_pane

0x5dc3,	// (0x0003c2f1) eswt_ctrl_canvas_pane

0x5dcb,	// (0x0003c2f9) eswt_ctrl_combo_pane

0x5dc3,	// (0x0003c2f1) eswt_ctrl_default_pane

0x5dc3,	// (0x0003c2f1) eswt_ctrl_label_pane

0x5dd3,	// (0x0003c301) eswt_ctrl_wait_pane

0x5ddb,	// (0x0003c309) eswt_shell_pane

0xb763,	// (0x00041c91) listscroll_eswt_app_pane

0x5dfb,	// (0x0003c329) popup_eswt_tasktip_window_ParamLimits

0x5dfb,	// (0x0003c329) popup_eswt_tasktip_window

0x2e85,	// (0x000393b3) bg_popup_window_pane_cp18

0x5e14,	// (0x0003c342) eswt_control_pane_g1_ParamLimits

0x5e14,	// (0x0003c342) eswt_control_pane_g1

0x5e21,	// (0x0003c34f) eswt_control_pane_g2_ParamLimits

0x5e21,	// (0x0003c34f) eswt_control_pane_g2

0x5e2e,	// (0x0003c35c) eswt_control_pane_g3_ParamLimits

0x5e2e,	// (0x0003c35c) eswt_control_pane_g3

0x5e3b,	// (0x0003c369) eswt_control_pane_g4_ParamLimits

0x5e3b,	// (0x0003c369) eswt_control_pane_g4

0x0003,

0xfbe4,	// (0x00046112) eswt_control_pane_g_ParamLimits

0xfbe4,	// (0x00046112) eswt_control_pane_g

0xbe15,	// (0x00042343) bg_button_pane_ParamLimits

0xbe15,	// (0x00042343) bg_button_pane

0xbb90,	// (0x000420be) common_borders_pane_copy2_ParamLimits

0xbb90,	// (0x000420be) common_borders_pane_copy2

0x5e48,	// (0x0003c376) control_button_pane_g1_ParamLimits

0x5e48,	// (0x0003c376) control_button_pane_g1

0x5e54,	// (0x0003c382) control_button_pane_g2_ParamLimits

0x5e54,	// (0x0003c382) control_button_pane_g2

0x5e60,	// (0x0003c38e) control_button_pane_g3_ParamLimits

0x5e60,	// (0x0003c38e) control_button_pane_g3

0x0002,

0xfbed,	// (0x0004611b) control_button_pane_g_ParamLimits

0xfbed,	// (0x0004611b) control_button_pane_g

0x5e74,	// (0x0003c3a2) control_button_pane_t1

0x5e82,	// (0x0003c3b0) control_button_pane_t2

0x0001,

0xfbf4,	// (0x00046122) control_button_pane_t

0x2e11,	// (0x0003933f) bg_button_pane_g1

0x2e21,	// (0x0003934f) bg_button_pane_g2

0x2e19,	// (0x00039347) bg_button_pane_g3

0x2e31,	// (0x0003935f) bg_button_pane_g4

0x2e29,	// (0x00039357) bg_button_pane_g5

0x2e39,	// (0x00039367) bg_button_pane_g6

0x2e41,	// (0x0003936f) bg_button_pane_g7

0x2e51,	// (0x0003937f) bg_button_pane_g8

0x2e49,	// (0x00039377) bg_button_pane_g9

0x0008,

0xf83c,	// (0x00045d6a) bg_button_pane_g

0x5421,	// (0x0003b94f) common_borders_pane_ParamLimits

0x5421,	// (0x0003b94f) common_borders_pane

0x5e14,	// (0x0003c342) eswt_control_pane_g1_copy1_ParamLimits

0x5e14,	// (0x0003c342) eswt_control_pane_g1_copy1

0x5e21,	// (0x0003c34f) eswt_control_pane_g2_copy1_ParamLimits

0x5e21,	// (0x0003c34f) eswt_control_pane_g2_copy1

0x5e2e,	// (0x0003c35c) eswt_control_pane_g3_copy1_ParamLimits

0x5e2e,	// (0x0003c35c) eswt_control_pane_g3_copy1

0x5e3b,	// (0x0003c369) eswt_control_pane_g4_copy1_ParamLimits

0x5e3b,	// (0x0003c369) eswt_control_pane_g4_copy1

0x545c,	// (0x0003b98a) bg_eswt_ctrl_canvas_pane_g1

0x5421,	// (0x0003b94f) common_borders_pane_cp2_ParamLimits

0x5421,	// (0x0003b94f) common_borders_pane_cp2

0x5421,	// (0x0003b94f) common_borders_pane_cp3_ParamLimits

0x5421,	// (0x0003b94f) common_borders_pane_cp3

0x5e90,	// (0x0003c3be) separator_horizontal_pane

0x5e98,	// (0x0003c3c6) separator_vertical_pane

0x5e14,	// (0x0003c342) eswt_control_pane_g1_copy2_ParamLimits

0x5e14,	// (0x0003c342) eswt_control_pane_g1_copy2

0x5e21,	// (0x0003c34f) eswt_control_pane_g2_copy2_ParamLimits

0x5e21,	// (0x0003c34f) eswt_control_pane_g2_copy2

0x5e2e,	// (0x0003c35c) eswt_control_pane_g3_copy2_ParamLimits

0x5e2e,	// (0x0003c35c) eswt_control_pane_g3_copy2

0x5e3b,	// (0x0003c369) eswt_control_pane_g4_copy2_ParamLimits

0x5e3b,	// (0x0003c369) eswt_control_pane_g4_copy2

0xb763,	// (0x00041c91) common_borders_pane_cp4

0x5ea1,	// (0x0003c3cf) separator_horizontal_pane_g1

0x5eaa,	// (0x0003c3d8) separator_horizontal_pane_g2

0x5eb3,	// (0x0003c3e1) separator_horizontal_pane_g3

0x0002,

0xfbf9,	// (0x00046127) separator_horizontal_pane_g

0x5e14,	// (0x0003c342) eswt_control_pane_g1_copy3_ParamLimits

0x5e14,	// (0x0003c342) eswt_control_pane_g1_copy3

0x5e21,	// (0x0003c34f) eswt_control_pane_g2_copy3_ParamLimits

0x5e21,	// (0x0003c34f) eswt_control_pane_g2_copy3

0x5e2e,	// (0x0003c35c) eswt_control_pane_g3_copy3_ParamLimits

0x5e2e,	// (0x0003c35c) eswt_control_pane_g3_copy3

0x5e3b,	// (0x0003c369) eswt_control_pane_g4_copy3_ParamLimits

0x5e3b,	// (0x0003c369) eswt_control_pane_g4_copy3

0xb763,	// (0x00041c91) common_borders_pane_cp5

0x5ebc,	// (0x0003c3ea) separator_vertical_pane_g1

0x5ec5,	// (0x0003c3f3) separator_vertical_pane_g2

0x5ece,	// (0x0003c3fc) separator_vertical_pane_g3

0x0002,

0xfc00,	// (0x0004612e) separator_vertical_pane_g

0x5e14,	// (0x0003c342) eswt_control_pane_g1_copy4_ParamLimits

0x5e14,	// (0x0003c342) eswt_control_pane_g1_copy4

0x5e21,	// (0x0003c34f) eswt_control_pane_g2_copy4_ParamLimits

0x5e21,	// (0x0003c34f) eswt_control_pane_g2_copy4

0x5e2e,	// (0x0003c35c) eswt_control_pane_g3_copy4_ParamLimits

0x5e2e,	// (0x0003c35c) eswt_control_pane_g3_copy4

0x5e3b,	// (0x0003c369) eswt_control_pane_g4_copy4_ParamLimits

0x5e3b,	// (0x0003c369) eswt_control_pane_g4_copy4

0xce5a,	// (0x00043388) eswt_ctrl_combo_button_pane

0xce62,	// (0x00043390) eswt_ctrl_input_pane

0xce6a,	// (0x00043398) popup_choice_list_window_cp70

0xce72,	// (0x000433a0) eswt_ctrl_input_pane_t1

0xb763,	// (0x00041c91) input_focus_pane_cp70

0x5421,	// (0x0003b94f) bg_button_pane_cp70_ParamLimits

0x5421,	// (0x0003b94f) bg_button_pane_cp70

0xce80,	// (0x000433ae) eswt_ctrl_combo_button_pane_g1

0x5f05,	// (0x0003c433) wait_bar_pane_cp70

0x2e85,	// (0x000393b3) bg_popup_window_pane_cp70_ParamLimits

0x2e85,	// (0x000393b3) bg_popup_window_pane_cp70

0x5f0d,	// (0x0003c43b) popup_eswt_tasktip_window_t1

0x5f23,	// (0x0003c451) wait_bar_pane_cp71_ParamLimits

0x5f23,	// (0x0003c451) wait_bar_pane_cp71

0x5f2f,	// (0x0003c45d) grid_eswt_app_pane

0xf11b,	// (0x00045649) scroll_pane_cp70

0xce88,	// (0x000433b6) cell_eswt_app_pane_ParamLimits

0xce88,	// (0x000433b6) cell_eswt_app_pane

0xceba,	// (0x000433e8) cell_eswt_app_pane_g1_ParamLimits

0xceba,	// (0x000433e8) cell_eswt_app_pane_g1

0xcee9,	// (0x00043417) cell_eswt_app_pane_g2_ParamLimits

0xcee9,	// (0x00043417) cell_eswt_app_pane_g2

0x0001,

0xfc07,	// (0x00046135) cell_eswt_app_pane_g_ParamLimits

0xfc07,	// (0x00046135) cell_eswt_app_pane_g

0xcf12,	// (0x00043440) cell_eswt_app_pane_t1_ParamLimits

0xcf12,	// (0x00043440) cell_eswt_app_pane_t1

0x5ff4,	// (0x0003c522) grid_highlight_pane_cp70_ParamLimits

0x5ff4,	// (0x0003c522) grid_highlight_pane_cp70

0x247a,	// (0x000389a8) set_content_pane_g1

0xa38d,	// (0x000408bb) status_small_volume_pane

0xaf1c,	// (0x0004144a) status_small_volume_pane_g1

0xaf24,	// (0x00041452) volume_small2_pane

0xaf2d,	// (0x0004145b) volume_small2_pane_g1

0xaf36,	// (0x00041464) volume_small2_pane_g2

0xaf3f,	// (0x0004146d) volume_small2_pane_g3

0xaf48,	// (0x00041476) volume_small2_pane_g4

0xaf51,	// (0x0004147f) volume_small2_pane_g5

0xaf5a,	// (0x00041488) volume_small2_pane_g6

0xaf63,	// (0x00041491) volume_small2_pane_g7

0xaf6c,	// (0x0004149a) volume_small2_pane_g8

0xaf75,	// (0x000414a3) volume_small2_pane_g9

0xaf7e,	// (0x000414ac) volume_small2_pane_g10

0x0009,

0xfc0c,	// (0x0004613a) volume_small2_pane_g

0x582b,	// (0x0003bd59) fep_vkb_top_text_pane_g1_ParamLimits

0xcde0,	// (0x0004330e) fep_vkb_top_text_pane_t1_ParamLimits

0x5ade,	// (0x0003c00c) popup_preview_fixed_window_g3_ParamLimits

0x5ade,	// (0x0003c00c) popup_preview_fixed_window_g3

0xab68,	// (0x00041096) popup_toolbar_trans_pane

0xc7ed,	// (0x00042d1b) aid_height_set_list_ParamLimits

0x41ee,	// (0x0003a71c) aid_size_parent_ParamLimits

0x28db,	// (0x00038e09) list_highlight_pane_cp2_ParamLimits

0x247a,	// (0x000389a8) set_content_pane_g1_ParamLimits

0xc997,	// (0x00042ec5) list_single_image_pane_ParamLimits

0xc997,	// (0x00042ec5) list_single_image_pane

0xcf44,	// (0x00043472) aid_size_cell_image_ParamLimits

0xcf44,	// (0x00043472) aid_size_cell_image

0xcf51,	// (0x0004347f) grid_single_image_pane_ParamLimits

0xcf51,	// (0x0004347f) grid_single_image_pane

0xbe23,	// (0x00042351) list_single_image_pane_g1_ParamLimits

0xbe23,	// (0x00042351) list_single_image_pane_g1

0xbe2f,	// (0x0004235d) list_single_image_pane_g2_ParamLimits

0xbe2f,	// (0x0004235d) list_single_image_pane_g2

0x0001,

0xfc21,	// (0x0004614f) list_single_image_pane_g_ParamLimits

0xfc21,	// (0x0004614f) list_single_image_pane_g

0x601b,	// (0x0003c549) list_single_image_pane_t1_ParamLimits

0x601b,	// (0x0003c549) list_single_image_pane_t1

0xcf5f,	// (0x0004348d) cell_image_list_pane_ParamLimits

0xcf5f,	// (0x0004348d) cell_image_list_pane

0xcf75,	// (0x000434a3) cell_image_list_pane_g1

0xcf7e,	// (0x000434ac) cell_image_list_pane_g2

0x0001,

0xfc26,	// (0x00046154) cell_image_list_pane_g

0x605b,	// (0x0003c589) aid_size_cell_tb_trans_pane

0xbe15,	// (0x00042343) bg_tb_trans_pane

0x606d,	// (0x0003c59b) grid_tb_trans_pane

0x2e11,	// (0x0003933f) bg_tb_trans_pane_g1

0x2e21,	// (0x0003934f) bg_tb_trans_pane_g2

0x2e19,	// (0x00039347) bg_tb_trans_pane_g3

0x2e31,	// (0x0003935f) bg_tb_trans_pane_g4

0x2e29,	// (0x00039357) bg_tb_trans_pane_g5

0x2e51,	// (0x0003937f) bg_tb_trans_pane_g6

0x2e49,	// (0x00039377) bg_tb_trans_pane_g7

0x2e39,	// (0x00039367) bg_tb_trans_pane_g8

0x2e41,	// (0x0003936f) bg_tb_trans_pane_g9

0x0008,

0xfc2b,	// (0x00046159) bg_tb_trans_pane_g

0x6081,	// (0x0003c5af) cell_toolbar_trans_pane_ParamLimits

0x6081,	// (0x0003c5af) cell_toolbar_trans_pane

0x545c,	// (0x0003b98a) cell_toolbar_trans_pane_g1

0xcbd7,	// (0x00043105) list_form2_midp_pane_t1

0xcbe5,	// (0x00043113) list_form2_midp_pane_t2

0x0001,

0xfac8,	// (0x00045ff6) list_form2_midp_pane_t

0x50b0,	// (0x0003b5de) scroll_pane_cp51_ParamLimits

0x5277,	// (0x0003b7a5) form2_midp_wait_pane_g1

0x5280,	// (0x0003b7ae) form2_midp_wait_pane_g2

0x5289,	// (0x0003b7b7) form2_midp_wait_pane_g3

0x0002,

0xfadd,	// (0x0004600b) form2_midp_wait_pane_g

0xb7d3,	// (0x00041d01) list_highlight_pane_cp21_ParamLimits

0x52c2,	// (0x0003b7f0) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x52d1,	// (0x0003b7ff) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xd534,	// (0x00043a62) list_single_2graphic_im_pane_ParamLimits

0xd534,	// (0x00043a62) list_single_2graphic_im_pane

0xcf87,	// (0x000434b5) list_single_2graphic_im_pane_g1_ParamLimits

0xcf87,	// (0x000434b5) list_single_2graphic_im_pane_g1

0xcf98,	// (0x000434c6) list_single_2graphic_im_pane_g2_ParamLimits

0xcf98,	// (0x000434c6) list_single_2graphic_im_pane_g2

0xcfa4,	// (0x000434d2) list_single_2graphic_im_pane_g3_ParamLimits

0xcfa4,	// (0x000434d2) list_single_2graphic_im_pane_g3

0x0003,

0xfc3e,	// (0x0004616c) list_single_2graphic_im_pane_g_ParamLimits

0xfc3e,	// (0x0004616c) list_single_2graphic_im_pane_g

0xcfb8,	// (0x000434e6) list_single_2graphic_im_pane_t1_ParamLimits

0xcfb8,	// (0x000434e6) list_single_2graphic_im_pane_t1

0x5aea,	// (0x0003c018) list_single_graphic_2heading_pane_fp_ParamLimits

0x5aea,	// (0x0003c018) list_single_graphic_2heading_pane_fp

0xd866,	// (0x00043d94) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xd866,	// (0x00043d94) list_single_graphic_2heading_pane_fp_g1

0x5b03,	// (0x0003c031) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5b03,	// (0x0003c031) list_single_graphic_2heading_pane_fp_g2

0xd82f,	// (0x00043d5d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd82f,	// (0x00043d5d) list_single_graphic_2heading_pane_fp_g3

0xd83b,	// (0x00043d69) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xd83b,	// (0x00043d69) list_single_graphic_2heading_pane_fp_g4

0x5b0f,	// (0x0003c03d) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5b0f,	// (0x0003c03d) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb65,	// (0x00046093) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb65,	// (0x00046093) list_single_graphic_2heading_pane_fp_g

0xd9fd,	// (0x00043f2b) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xd9fd,	// (0x00043f2b) list_single_graphic_2heading_pane_fp_t1

0xd89e,	// (0x00043dcc) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xd89e,	// (0x00043dcc) list_single_graphic_2heading_pane_fp_t2

0xda13,	// (0x00043f41) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xda13,	// (0x00043f41) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc47,	// (0x00046175) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc47,	// (0x00046175) list_single_graphic_2heading_pane_fp_t

0x54ed,	// (0x0003ba1b) fep_hwr_write_pane_g5_ParamLimits

0x54ed,	// (0x0003ba1b) fep_hwr_write_pane_g5

0x54f9,	// (0x0003ba27) fep_hwr_write_pane_g6_ParamLimits

0x54f9,	// (0x0003ba27) fep_hwr_write_pane_g6

0x5ddb,	// (0x0003c309) eswt_shell_pane_ParamLimits

0x2e85,	// (0x000393b3) bg_popup_window_pane_cp18_ParamLimits

0x5e0c,	// (0x0003c33a) heading_pane_cp70

0x5f0d,	// (0x0003c43b) popup_eswt_tasktip_window_t1_ParamLimits

0xc17c,	// (0x000426aa) aid_touch_tab_arrow_left

0xc192,	// (0x000426c0) aid_touch_tab_arrow_right

0x962b,	// (0x0003fb59) title_pane_g3_ParamLimits

0x962b,	// (0x0003fb59) title_pane_g3

0xbdd4,	// (0x00042302) set_value_pane_g1

0xab68,	// (0x00041096) popup_toolbar_trans_pane_ParamLimits

0x605b,	// (0x0003c589) aid_size_cell_tb_trans_pane_ParamLimits

0xbe15,	// (0x00042343) bg_tb_trans_pane_ParamLimits

0x606d,	// (0x0003c59b) grid_tb_trans_pane_ParamLimits

0xb906,	// (0x00041e34) cont_note_pane_ParamLimits

0xb906,	// (0x00041e34) cont_note_pane

0xbb90,	// (0x000420be) cont_snote2_single_text_pane_ParamLimits

0xbb90,	// (0x000420be) cont_snote2_single_text_pane

0xbb90,	// (0x000420be) cont_snote2_single_graphic_pane_ParamLimits

0xbb90,	// (0x000420be) cont_snote2_single_graphic_pane

0x3477,	// (0x000399a5) cont_note_wait_pane_ParamLimits

0x3477,	// (0x000399a5) cont_note_wait_pane

0x3477,	// (0x000399a5) cont_note_image_pane_ParamLimits

0x3477,	// (0x000399a5) cont_note_image_pane

0x6115,	// (0x0003c643) popup_note2_window_g1_ParamLimits

0x6115,	// (0x0003c643) popup_note2_window_g1

0x6146,	// (0x0003c674) popup_note2_window_t1_ParamLimits

0x6146,	// (0x0003c674) popup_note2_window_t1

0x618b,	// (0x0003c6b9) popup_note2_window_t2_ParamLimits

0x618b,	// (0x0003c6b9) popup_note2_window_t2

0x61d0,	// (0x0003c6fe) popup_note2_window_t3_ParamLimits

0x61d0,	// (0x0003c6fe) popup_note2_window_t3

0x6215,	// (0x0003c743) popup_note2_window_t4_ParamLimits

0x6215,	// (0x0003c743) popup_note2_window_t4

0xb98a,	// (0x00041eb8) popup_note2_window_t5_ParamLimits

0xb98a,	// (0x00041eb8) popup_note2_window_t5

0x0004,

0xfc53,	// (0x00046181) popup_note2_window_t_ParamLimits

0xfc53,	// (0x00046181) popup_note2_window_t

0x6244,	// (0x0003c772) popup_note2_image_window_g1_ParamLimits

0x6244,	// (0x0003c772) popup_note2_image_window_g1

0x6250,	// (0x0003c77e) popup_note2_image_window_g2_ParamLimits

0x6250,	// (0x0003c77e) popup_note2_image_window_g2

0x0001,

0xfc5e,	// (0x0004618c) popup_note2_image_window_g_ParamLimits

0xfc5e,	// (0x0004618c) popup_note2_image_window_g

0x6262,	// (0x0003c790) popup_note2_image_window_t1_ParamLimits

0x6262,	// (0x0003c790) popup_note2_image_window_t1

0x627a,	// (0x0003c7a8) popup_note2_image_window_t2_ParamLimits

0x627a,	// (0x0003c7a8) popup_note2_image_window_t2

0x6292,	// (0x0003c7c0) popup_note2_image_window_t3_ParamLimits

0x6292,	// (0x0003c7c0) popup_note2_image_window_t3

0x0002,

0xfc63,	// (0x00046191) popup_note2_image_window_t_ParamLimits

0xfc63,	// (0x00046191) popup_note2_image_window_t

0x3485,	// (0x000399b3) popup_note2_wait_window_g1_ParamLimits

0x3485,	// (0x000399b3) popup_note2_wait_window_g1

0x62ae,	// (0x0003c7dc) popup_note2_wait_window_g2_ParamLimits

0x62ae,	// (0x0003c7dc) popup_note2_wait_window_g2

0x349d,	// (0x000399cb) popup_note2_wait_window_g3_ParamLimits

0x349d,	// (0x000399cb) popup_note2_wait_window_g3

0x0002,

0xfc6a,	// (0x00046198) popup_note2_wait_window_g_ParamLimits

0xfc6a,	// (0x00046198) popup_note2_wait_window_g

0x62ba,	// (0x0003c7e8) popup_note2_wait_window_t1_ParamLimits

0x62ba,	// (0x0003c7e8) popup_note2_wait_window_t1

0x62d8,	// (0x0003c806) popup_note2_wait_window_t2_ParamLimits

0x62d8,	// (0x0003c806) popup_note2_wait_window_t2

0x62f6,	// (0x0003c824) popup_note2_wait_window_t3_ParamLimits

0x62f6,	// (0x0003c824) popup_note2_wait_window_t3

0x6308,	// (0x0003c836) popup_note2_wait_window_t4_ParamLimits

0x6308,	// (0x0003c836) popup_note2_wait_window_t4

0x0003,

0xfc71,	// (0x0004619f) popup_note2_wait_window_t_ParamLimits

0xfc71,	// (0x0004619f) popup_note2_wait_window_t

0x631a,	// (0x0003c848) wait_bar2_pane_ParamLimits

0x631a,	// (0x0003c848) wait_bar2_pane

0x6332,	// (0x0003c860) popup_snote2_single_text_window_g1_ParamLimits

0x6332,	// (0x0003c860) popup_snote2_single_text_window_g1

0x635a,	// (0x0003c888) popup_snote2_single_text_window_t1_ParamLimits

0x635a,	// (0x0003c888) popup_snote2_single_text_window_t1

0x63a6,	// (0x0003c8d4) popup_snote2_single_text_window_t2_ParamLimits

0x63a6,	// (0x0003c8d4) popup_snote2_single_text_window_t2

0x63f2,	// (0x0003c920) popup_snote2_single_text_window_t3_ParamLimits

0x63f2,	// (0x0003c920) popup_snote2_single_text_window_t3

0x6433,	// (0x0003c961) popup_snote2_single_text_window_t4_ParamLimits

0x6433,	// (0x0003c961) popup_snote2_single_text_window_t4

0x6469,	// (0x0003c997) popup_snote2_single_text_window_t5_ParamLimits

0x6469,	// (0x0003c997) popup_snote2_single_text_window_t5

0x0004,

0xfc7a,	// (0x000461a8) popup_snote2_single_text_window_t_ParamLimits

0xfc7a,	// (0x000461a8) popup_snote2_single_text_window_t

0x6494,	// (0x0003c9c2) popup_snote2_single_graphic_window_g1_ParamLimits

0x6494,	// (0x0003c9c2) popup_snote2_single_graphic_window_g1

0x64bc,	// (0x0003c9ea) popup_snote2_single_graphic_window_g2_ParamLimits

0x64bc,	// (0x0003c9ea) popup_snote2_single_graphic_window_g2

0x0001,

0xfc85,	// (0x000461b3) popup_snote2_single_graphic_window_g_ParamLimits

0xfc85,	// (0x000461b3) popup_snote2_single_graphic_window_g

0x64e4,	// (0x0003ca12) popup_snote2_single_graphic_window_t1_ParamLimits

0x64e4,	// (0x0003ca12) popup_snote2_single_graphic_window_t1

0x6530,	// (0x0003ca5e) popup_snote2_single_graphic_window_t2_ParamLimits

0x6530,	// (0x0003ca5e) popup_snote2_single_graphic_window_t2

0x63f2,	// (0x0003c920) popup_snote2_single_graphic_window_t3_ParamLimits

0x63f2,	// (0x0003c920) popup_snote2_single_graphic_window_t3

0x6433,	// (0x0003c961) popup_snote2_single_graphic_window_t4_ParamLimits

0x6433,	// (0x0003c961) popup_snote2_single_graphic_window_t4

0x6469,	// (0x0003c997) popup_snote2_single_graphic_window_t5_ParamLimits

0x6469,	// (0x0003c997) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8a,	// (0x000461b8) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8a,	// (0x000461b8) popup_snote2_single_graphic_window_t

0x4f60,	// (0x0003b48e) clock_nsta_pane_cp2_t1

0x4f60,	// (0x0003b48e) clock_nsta_pane_cp2_t2

0x0001,

0xfa9e,	// (0x00045fcc) clock_nsta_pane_cp2_t

0xd39d,	// (0x000438cb) form_field_data_wide_pane_g1_ParamLimits

0xbe23,	// (0x00042351) form_field_data_wide_pane_g2_ParamLimits

0xbe23,	// (0x00042351) form_field_data_wide_pane_g2

0xbe2f,	// (0x0004235d) form_field_data_wide_pane_g3_ParamLimits

0xbe2f,	// (0x0004235d) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x00045b84) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x00045b84) form_field_data_wide_pane_g

0xcae0,	// (0x0004300e) grid_touch_3_pane_ParamLimits

0xcae0,	// (0x0004300e) grid_touch_3_pane

0xcfe9,	// (0x00043517) cell_touch_3_pane_ParamLimits

0xcfe9,	// (0x00043517) cell_touch_3_pane

0x545c,	// (0x0003b98a) cell_touch_3_pane_g1

0x545c,	// (0x0003b98a) cell_touch_3_pane_g2

0x0001,

0xfb23,	// (0x00046051) cell_touch_3_pane_g

0xb9e2,	// (0x00041f10) cont_query_data_pane

0xb9ea,	// (0x00041f18) cont_query_data_pane_cp1

0x65af,	// (0x0003cadd) button_value_adjust_pane_cp7

0x65b7,	// (0x0003cae5) query_popup_pane_cp3

0xf366,	// (0x00045894) bg_popup_sub_pane_cp22_ParamLimits

0xf37c,	// (0x000458aa) navi_navi_volume_pane_cp2

0xf397,	// (0x000458c5) popup_side_volume_key_window_g2

0xf3a6,	// (0x000458d4) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x00045c1a) popup_side_volume_key_window_g

0xf3c3,	// (0x000458f1) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x00045c21) popup_side_volume_key_window_t

0x2340,	// (0x0003886e) popup_side_volume_key_window_ParamLimits

0x9b0d,	// (0x0004003b) list_double_graphic_pane_g4_ParamLimits

0x9b0d,	// (0x0004003b) list_double_graphic_pane_g4

0xae33,	// (0x00041361) list_single_2heading_msg_pane_ParamLimits

0xae33,	// (0x00041361) list_single_2heading_msg_pane

0xaf87,	// (0x000414b5) list_single_2heading_msg_pane_g1_ParamLimits

0xaf87,	// (0x000414b5) list_single_2heading_msg_pane_g1

0xaf93,	// (0x000414c1) list_single_2heading_msg_pane_g2_ParamLimits

0xaf93,	// (0x000414c1) list_single_2heading_msg_pane_g2

0xafa6,	// (0x000414d4) list_single_2heading_msg_pane_g3_ParamLimits

0xafa6,	// (0x000414d4) list_single_2heading_msg_pane_g3

0xafb2,	// (0x000414e0) list_single_2heading_msg_pane_g4_ParamLimits

0xafb2,	// (0x000414e0) list_single_2heading_msg_pane_g4

0x0003,

0xfc95,	// (0x000461c3) list_single_2heading_msg_pane_g_ParamLimits

0xfc95,	// (0x000461c3) list_single_2heading_msg_pane_g

0xafca,	// (0x000414f8) list_single_2heading_msg_pane_t1_ParamLimits

0xafca,	// (0x000414f8) list_single_2heading_msg_pane_t1

0xaff2,	// (0x00041520) list_single_2heading_msg_pane_t2_ParamLimits

0xaff2,	// (0x00041520) list_single_2heading_msg_pane_t2

0xb05d,	// (0x0004158b) list_single_2heading_msg_pane_t3_ParamLimits

0xb05d,	// (0x0004158b) list_single_2heading_msg_pane_t3

0xda33,	// (0x00043f61) list_single_2heading_msg_pane_t4_ParamLimits

0xda33,	// (0x00043f61) list_single_2heading_msg_pane_t4

0x0003,

0xfc9e,	// (0x000461cc) list_single_2heading_msg_pane_t_ParamLimits

0xfc9e,	// (0x000461cc) list_single_2heading_msg_pane_t

0xb781,	// (0x00041caf) title_pane_g4_ParamLimits

0xb781,	// (0x00041caf) title_pane_g4

0xef67,	// (0x00045495) title_pane_stacon_g3_ParamLimits

0xef67,	// (0x00045495) title_pane_stacon_g3

0x60d8,	// (0x0003c606) list_single_2graphic_im_pane_g4_ParamLimits

0x60d8,	// (0x0003c606) list_single_2graphic_im_pane_g4

0x3ee7,	// (0x0003a415) popup_side_volume_key_window_cp

0x474b,	// (0x0003ac79) main_idle_act2_pane_t1

0x09f1,	// (0x00036f1f) toolbar_button_pane_g10

0x99ac,	// (0x0003feda) popup_toolbar_window_cp1

0x4f51,	// (0x0003b47f) clock_nsta_pane_cp_t1

0x4f51,	// (0x0003b47f) clock_nsta_pane_cp_t2

0x0001,

0xfa99,	// (0x00045fc7) clock_nsta_pane_cp_t

0xf37c,	// (0x000458aa) navi_navi_volume_pane_cp2_ParamLimits

0xf38b,	// (0x000458b9) popup_side_volume_key_window_g1_ParamLimits

0xf397,	// (0x000458c5) popup_side_volume_key_window_g2_ParamLimits

0xf3a6,	// (0x000458d4) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x00045c1a) popup_side_volume_key_window_g_ParamLimits

0x0faa,	// (0x000374d8) fep_hwr_aid_pane

0x1053,	// (0x00037581) bg_fep_hwr_top_pane_g4_ParamLimits

0x54bd,	// (0x0003b9eb) fep_hwr_top_pane_g1_ParamLimits

0x54cf,	// (0x0003b9fd) fep_hwr_top_pane_g2_ParamLimits

0x1073,	// (0x000375a1) fep_hwr_top_pane_g3_ParamLimits

0xfaee,	// (0x0004601c) fep_hwr_top_pane_g_ParamLimits

0x1088,	// (0x000375b6) fep_hwr_top_text_pane_ParamLimits

0x3c9c,	// (0x0003a1ca) aid_touch_tab_arrow_arrow_2

0x3ca5,	// (0x0003a1d3) aid_touch_tab_arrow_left_2

0x0fbe,	// (0x000374ec) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0ff5,	// (0x00037523) fep_hwr_prediction_pane

0x5625,	// (0x0003bb53) fep_vkb_prediction_pane

0xcdc0,	// (0x000432ee) fep_vkb_side_pane_g3_ParamLimits

0xcdc0,	// (0x000432ee) fep_vkb_side_pane_g3

0x1217,	// (0x00037745) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1288,	// (0x000377b6) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1295,	// (0x000377c3) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9d,	// (0x000460cb) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x14bf,	// (0x000379ed) fep_hwr_prediction_pane_g1

0x14c9,	// (0x000379f7) fep_hwr_prediction_pane_g2

0x14d1,	// (0x000379ff) fep_hwr_prediction_pane_g3

0x14d9,	// (0x00037a07) fep_hwr_prediction_pane_g4

0x0003,

0xfca7,	// (0x000461d5) fep_hwr_prediction_pane_g

0x65de,	// (0x0003cb0c) fep_vkb_prediction_pane_g1

0x65e8,	// (0x0003cb16) fep_vkb_prediction_pane_g2

0x65f0,	// (0x0003cb1e) fep_vkb_prediction_pane_g3

0x65f8,	// (0x0003cb26) fep_vkb_prediction_pane_g4

0x0003,

0xfcb0,	// (0x000461de) fep_vkb_prediction_pane_g

0x0d42,	// (0x00037270) slider_set_pane_g3

0x0d56,	// (0x00037284) slider_set_pane_g4

0x0d6e,	// (0x0003729c) slider_set_pane_g5

0x0d42,	// (0x00037270) slider_set_pane_g6

0x0d84,	// (0x000372b2) slider_set_pane_g7

0x436d,	// (0x0003a89b) slider_form_pane_g3

0x4376,	// (0x0003a8a4) slider_form_pane_g4

0x437e,	// (0x0003a8ac) slider_form_pane_g5

0x436d,	// (0x0003a89b) slider_form_pane_g6

0xc956,	// (0x00042e84) slider_form_pane_g7

0x4a0f,	// (0x0003af3d) slider_set_pane_vc_g3

0x4a18,	// (0x0003af46) slider_set_pane_vc_g4

0x4a21,	// (0x0003af4f) slider_set_pane_vc_g5

0x4a0f,	// (0x0003af3d) slider_set_pane_vc_g6

0x4a2a,	// (0x0003af58) slider_set_pane_vc_g7

0x4c00,	// (0x0003b12e) slider_form_pane_vc_g1

0x4c09,	// (0x0003b137) slider_form_pane_vc_g2

0x4c12,	// (0x0003b140) slider_form_pane_vc_g3

0x4c00,	// (0x0003b12e) slider_form_pane_vc_g4

0x4c1b,	// (0x0003b149) slider_form_pane_vc_g5

0x0004,

0xfa6b,	// (0x00045f99) slider_form_pane_vc_g

0xecf7,	// (0x00045225) main_idle_act3_pane

0x6600,	// (0x0003cb2e) ai3_links_pane

0xd035,	// (0x00043563) popup_ai3_data_window_ParamLimits

0xd035,	// (0x00043563) popup_ai3_data_window

0xb763,	// (0x00041c91) grid_ai3_links_pane

0xd053,	// (0x00043581) cell_ai3_links_pane_ParamLimits

0xd053,	// (0x00043581) cell_ai3_links_pane

0x6641,	// (0x0003cb6f) bg_popup_sub_pane_cp11

0x664e,	// (0x0003cb7c) cell_ai3_links_pane_g1

0xb763,	// (0x00041c91) bg_popup_sub_pane_cp12

0x6673,	// (0x0003cba1) heading_ai3_data_pane

0x667b,	// (0x0003cba9) list_ai3_gene_pane

0x6687,	// (0x0003cbb5) popup_ai3_data_window_g1

0x668f,	// (0x0003cbbd) heading_ai3_data_pane_g1

0x6697,	// (0x0003cbc5) heading_ai3_data_pane_t1

0x66a5,	// (0x0003cbd3) list_double_ai3_gene_pane_ParamLimits

0x66a5,	// (0x0003cbd3) list_double_ai3_gene_pane

0x66b2,	// (0x0003cbe0) list_single_ai3_gene_pane_ParamLimits

0x66b2,	// (0x0003cbe0) list_single_ai3_gene_pane

0x5421,	// (0x0003b94f) list_highlight_pane_cp7_ParamLimits

0x5421,	// (0x0003b94f) list_highlight_pane_cp7

0x66bf,	// (0x0003cbed) list_single_a13_gene_pane_t1_ParamLimits

0x66bf,	// (0x0003cbed) list_single_a13_gene_pane_t1

0x66d6,	// (0x0003cc04) list_single_ai3_gene_pane_g1

0x66df,	// (0x0003cc0d) list_single_ai3_gene_pane_g2

0x0001,

0xfcb9,	// (0x000461e7) list_single_ai3_gene_pane_g

0x66e7,	// (0x0003cc15) list_double_ai3_gene_pane_g1_ParamLimits

0x66e7,	// (0x0003cc15) list_double_ai3_gene_pane_g1

0x66f3,	// (0x0003cc21) list_double_ai3_gene_pane_t1_ParamLimits

0x66f3,	// (0x0003cc21) list_double_ai3_gene_pane_t1

0x670f,	// (0x0003cc3d) list_double_ai3_gene_pane_t2_ParamLimits

0x670f,	// (0x0003cc3d) list_double_ai3_gene_pane_t2

0x6724,	// (0x0003cc52) list_double_ai3_gene_pane_t3_ParamLimits

0x6724,	// (0x0003cc52) list_double_ai3_gene_pane_t3

0x0002,

0xfcbe,	// (0x000461ec) list_double_ai3_gene_pane_t_ParamLimits

0xfcbe,	// (0x000461ec) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xda29,	// (0x00043f57) aid_size_min_col_2

0xd01f,	// (0x0004354d) aid_size_min_msg_ParamLimits

0xd01f,	// (0x0004354d) aid_size_min_msg

0xcdd4,	// (0x00043302) fep_vkb_top_text_pane_g2_ParamLimits

0xcdd4,	// (0x00043302) fep_vkb_top_text_pane_g2

0x0001,

0xfb1e,	// (0x0004604c) fep_vkb_top_text_pane_g_ParamLimits

0xfb1e,	// (0x0004604c) fep_vkb_top_text_pane_g

0xecf7,	// (0x00045225) main_hc_apps_shell_pane

0x6741,	// (0x0003cc6f) grid_hc_apps_pane_ParamLimits

0x6741,	// (0x0003cc6f) grid_hc_apps_pane

0x6753,	// (0x0003cc81) list_hc_apps_pane

0x675b,	// (0x0003cc89) scroll_pane_cp37_ParamLimits

0x675b,	// (0x0003cc89) scroll_pane_cp37

0xd06d,	// (0x0004359b) cell_hc_apps_pane_ParamLimits

0xd06d,	// (0x0004359b) cell_hc_apps_pane

0xd133,	// (0x00043661) cell_hc_apps_pane_g1_ParamLimits

0xd133,	// (0x00043661) cell_hc_apps_pane_g1

0x6847,	// (0x0003cd75) cell_hc_apps_pane_g2_ParamLimits

0x6847,	// (0x0003cd75) cell_hc_apps_pane_g2

0x6863,	// (0x0003cd91) cell_hc_apps_pane_g3_ParamLimits

0x6863,	// (0x0003cd91) cell_hc_apps_pane_g3

0x0002,

0xfcc5,	// (0x000461f3) cell_hc_apps_pane_g_ParamLimits

0xfcc5,	// (0x000461f3) cell_hc_apps_pane_g

0xd15f,	// (0x0004368d) cell_hc_apps_pane_t1_ParamLimits

0xd15f,	// (0x0004368d) cell_hc_apps_pane_t1

0xb906,	// (0x00041e34) grid_highlight_pane_cp10_ParamLimits

0xb906,	// (0x00041e34) grid_highlight_pane_cp10

0xd19d,	// (0x000436cb) list_single_hc_apps_pane_ParamLimits

0xd19d,	// (0x000436cb) list_single_hc_apps_pane

0xd1d0,	// (0x000436fe) list_single_hc_apps_pane_g1

0xb0cb,	// (0x000415f9) list_single_hc_apps_pane_g2

0x0001,

0xfccc,	// (0x000461fa) list_single_hc_apps_pane_g

0xb0e4,	// (0x00041612) list_single_hc_apps_pane_g2_copy1

0xb100,	// (0x0004162e) list_single_hc_apps_pane_t1

0xb7d3,	// (0x00041d01) bg_set_opt_pane_cp_ParamLimits

0xee1a,	// (0x00045348) setting_slider_pane_t1_ParamLimits

0xee33,	// (0x00045361) setting_slider_pane_t2_ParamLimits

0xee4d,	// (0x0004537b) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00045a67) setting_slider_pane_t_ParamLimits

0xee65,	// (0x00045393) slider_set_pane_ParamLimits

0x0294,	// (0x000367c2) control_pane_g5_ParamLimits

0x0294,	// (0x000367c2) control_pane_g5

0x41a0,	// (0x0003a6ce) slider_set_pane_g1_ParamLimits

0x0d36,	// (0x00037264) slider_set_pane_g2_ParamLimits

0x0d42,	// (0x00037270) slider_set_pane_g3_ParamLimits

0x0d56,	// (0x00037284) slider_set_pane_g4_ParamLimits

0x0d6e,	// (0x0003729c) slider_set_pane_g5_ParamLimits

0x0d42,	// (0x00037270) slider_set_pane_g6_ParamLimits

0x0d84,	// (0x000372b2) slider_set_pane_g7_ParamLimits

0xf93a,	// (0x00045e68) slider_set_pane_g_ParamLimits

0x2425,	// (0x00038953) navi_icon_text_pane_ParamLimits

0xc143,	// (0x00042671) aid_fill_nsta_2_ParamLimits

0xc17c,	// (0x000426aa) aid_touch_tab_arrow_left_ParamLimits

0xc192,	// (0x000426c0) aid_touch_tab_arrow_right_ParamLimits

0xc22d,	// (0x0004275b) clock_nsta_pane_ParamLimits

0xc6d4,	// (0x00042c02) navi_icon_pane_g1_ParamLimits

0xc6e0,	// (0x00042c0e) navi_text_pane_t1_ParamLimits

0xcbb9,	// (0x000430e7) navi_icon_text_pane_g1_ParamLimits

0xcbc5,	// (0x000430f3) navi_icon_text_pane_t1_ParamLimits

0xd1d0,	// (0x000436fe) list_single_hc_apps_pane_g1_ParamLimits

0xb0cb,	// (0x000415f9) list_single_hc_apps_pane_g2_ParamLimits

0xfccc,	// (0x000461fa) list_single_hc_apps_pane_g_ParamLimits

0xb0e4,	// (0x00041612) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb100,	// (0x0004162e) list_single_hc_apps_pane_t1_ParamLimits

0x951a,	// (0x0003fa48) popup_toolbar2_fixed_window_ParamLimits

0x951a,	// (0x0003fa48) popup_toolbar2_fixed_window

0xab5e,	// (0x0004108c) popup_toolbar2_float_window

0xb763,	// (0x00041c91) bg_popup_sub_pane_cp27

0x691d,	// (0x0003ce4b) grid_toolbar2_float_pane

0xb763,	// (0x00041c91) bg_popup_sub_pane_cp26

0x691d,	// (0x0003ce4b) grid_toolbar2_fixed_pane

0xd1e9,	// (0x00043717) cell_toolbar2_fixed_pane_ParamLimits

0xd1e9,	// (0x00043717) cell_toolbar2_fixed_pane

0xd203,	// (0x00043731) cell_toolbar2_fixed_pane_g1

0x693e,	// (0x0003ce6c) toolbar2_fixed_button_pane

0x2e11,	// (0x0003933f) toolbar2_fixed_button_pane_g1

0x2e21,	// (0x0003934f) toolbar2_fixed_button_pane_g2

0x2e19,	// (0x00039347) toolbar2_fixed_button_pane_g3

0x2e31,	// (0x0003935f) toolbar2_fixed_button_pane_g4

0x2e29,	// (0x00039357) toolbar2_fixed_button_pane_g5

0x2e39,	// (0x00039367) toolbar2_fixed_button_pane_g6

0x2e41,	// (0x0003936f) toolbar2_fixed_button_pane_g7

0x2e51,	// (0x0003937f) toolbar2_fixed_button_pane_g8

0x2e49,	// (0x00039377) toolbar2_fixed_button_pane_g9

0x0008,

0xf83c,	// (0x00045d6a) toolbar2_fixed_button_pane_g

0x6946,	// (0x0003ce74) cell_toolbar2_float_pane_ParamLimits

0x6946,	// (0x0003ce74) cell_toolbar2_float_pane

0x6957,	// (0x0003ce85) cell_toolbar2_float_pane_g1

0x693e,	// (0x0003ce6c) toolbar2_fixed_button_pane_cp

0xccbc,	// (0x000431ea) fep_vkb_accented_list_pane_ParamLimits

0xccbc,	// (0x000431ea) fep_vkb_accented_list_pane

0x11f7,	// (0x00037725) bg_popup_fep_shadow_pane_g9

0x25b4,	// (0x00038ae2) bg_popup_fep_shadow_pane_cp3

0xbf38,	// (0x00042466) list_accented_list_pane

0x6960,	// (0x0003ce8e) list_single_accented_list_pane_ParamLimits

0x6960,	// (0x0003ce8e) list_single_accented_list_pane

0x25b4,	// (0x00038ae2) list_highlight_pane_cp10

0x6971,	// (0x0003ce9f) list_single_accented_list_pane_t1

0xaa7a,	// (0x00040fa8) popup_slider_window_ParamLimits

0xaa7a,	// (0x00040fa8) popup_slider_window

0x65bf,	// (0x0003caed) aid_indentation_list_msg

0xdb16,	// (0x00044044) bg_popup_window_pane_cp19

0x6aad,	// (0x0003cfdb) popup_slider_window_g1

0x6ac9,	// (0x0003cff7) popup_slider_window_g2

0x6ae5,	// (0x0003d013) popup_slider_window_g3

0x0005,

0xfcd1,	// (0x000461ff) popup_slider_window_g

0x6b4b,	// (0x0003d079) popup_slider_window_t1

0x6bbf,	// (0x0003d0ed) small_volume_slider_vertical_pane

0x545c,	// (0x0003b98a) small_volume_slider_vertical_pane_g1

0x545c,	// (0x0003b98a) small_volume_slider_vertical_pane_g2

0x6bdb,	// (0x0003d109) small_volume_slider_vertical_pane_g3

0x0002,

0xfce3,	// (0x00046211) small_volume_slider_vertical_pane_g

0x9484,	// (0x0003f9b2) area_side_right_pane_ParamLimits

0x9484,	// (0x0003f9b2) area_side_right_pane

0xb12e,	// (0x0004165c) aid_size_side_button_ParamLimits

0xb12e,	// (0x0004165c) aid_size_side_button

0xb147,	// (0x00041675) grid_sctrl_middle_pane_ParamLimits

0xb147,	// (0x00041675) grid_sctrl_middle_pane

0x1577,	// (0x00037aa5) sctrl_sk_bottom_pane

0x1588,	// (0x00037ab6) sctrl_sk_top_pane

0x159a,	// (0x00037ac8) aid_touch_sctrl_top

0x15a7,	// (0x00037ad5) bg_sctrl_sk_pane_ParamLimits

0x15a7,	// (0x00037ad5) bg_sctrl_sk_pane

0x15b5,	// (0x00037ae3) sctrl_sk_top_pane_g1

0x15c2,	// (0x00037af0) sctrl_sk_top_pane_t1

0x159a,	// (0x00037ac8) aid_touch_sctrl_bottom

0x15a7,	// (0x00037ad5) bg_sctrl_sk_pane_cp_ParamLimits

0x15a7,	// (0x00037ad5) bg_sctrl_sk_pane_cp

0x15dd,	// (0x00037b0b) sctrl_sk_bottom_pane_g1

0x15c2,	// (0x00037af0) sctrl_sk_bottom_pane_t1

0xb161,	// (0x0004168f) cell_sctrl_middle_pane_ParamLimits

0xb161,	// (0x0004168f) cell_sctrl_middle_pane

0xb174,	// (0x000416a2) aid_touch_sctrl_middle_ParamLimits

0xb174,	// (0x000416a2) aid_touch_sctrl_middle

0xb181,	// (0x000416af) bg_sctrl_middle_pane_ParamLimits

0xb181,	// (0x000416af) bg_sctrl_middle_pane

0x1c60,	// (0x0003818e) cell_sctrl_middle_pane_g1_ParamLimits

0x1c60,	// (0x0003818e) cell_sctrl_middle_pane_g1

0xb18f,	// (0x000416bd) cell_sctrl_middle_pane_g2_ParamLimits

0xb18f,	// (0x000416bd) cell_sctrl_middle_pane_g2

0x0001,

0xfcef,	// (0x0004621d) cell_sctrl_middle_pane_g_ParamLimits

0xfcef,	// (0x0004621d) cell_sctrl_middle_pane_g

0x2e11,	// (0x0003933f) bg_sctrl_middle_pane_g1

0x2e19,	// (0x00039347) bg_sctrl_middle_pane_g2

0x2e21,	// (0x0003934f) bg_sctrl_middle_pane_g3

0x2e29,	// (0x00039357) bg_sctrl_middle_pane_g4

0x2e31,	// (0x0003935f) bg_sctrl_middle_pane_g5

0x2e39,	// (0x00039367) bg_sctrl_middle_pane_g6

0x2e41,	// (0x0003936f) bg_sctrl_middle_pane_g7

0x2e49,	// (0x00039377) bg_sctrl_middle_pane_g8

0x0007,

0xfcf4,	// (0x00046222) bg_sctrl_middle_pane_g

0x2e51,	// (0x0003937f) bg_sctrl_middle_pane_g8_copy1

0x2e11,	// (0x0003933f) bg_sctrl_sk_pane_g1

0x2e21,	// (0x0003934f) bg_sctrl_sk_pane_g2

0x2e19,	// (0x00039347) bg_sctrl_sk_pane_g3

0x0008,

0xf83c,	// (0x00045d6a) bg_sctrl_sk_pane_g

0xbd4e,	// (0x0004227c) aid_size_touch_scroll_bar

0x2e31,	// (0x0003935f) bg_sctrl_sk_pane_g4

0x2e29,	// (0x00039357) bg_sctrl_sk_pane_g5

0x2e39,	// (0x00039367) bg_sctrl_sk_pane_g6

0x2e41,	// (0x0003936f) bg_sctrl_sk_pane_g7

0x2e51,	// (0x0003937f) bg_sctrl_sk_pane_g8

0x2e49,	// (0x00039377) bg_sctrl_sk_pane_g9

0x043e,	// (0x0003696c) popup_fep_china_hwr2_fs_candidate_window

0xa52c,	// (0x00040a5a) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa52c,	// (0x00040a5a) popup_fep_china_hwr2_fs_control_window

0x1217,	// (0x00037745) sctrl_sk_top_pane_g2

0x0001,

0xfcea,	// (0x00046218) sctrl_sk_top_pane_g

0xdbce,	// (0x000440fc) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdbce,	// (0x000440fc) aid_fep_china_hwr2_fs_cell

0xdbe4,	// (0x00044112) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdbe4,	// (0x00044112) bg_popup_fep_shadow_pane_cp4

0xdbfb,	// (0x00044129) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdbfb,	// (0x00044129) bg_popup_fep_shadow_pane_cp5

0xdc0d,	// (0x0004413b) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdc0d,	// (0x0004413b) popup_fep_china_hwr2_fs_control_bar_grid

0xdc21,	// (0x0004414f) popup_fep_china_hwr2_fs_control_funtion_grid

0x6c3a,	// (0x0003d168) aid_fep_china_hwr2_fs_candi_cell

0xb763,	// (0x00041c91) bg_popup_fep_shadow_pane_cp6

0x6c44,	// (0x0003d172) popup_fep_china_hwr2_fs_candidate_grid

0xdc29,	// (0x00044157) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdc29,	// (0x00044157) cell_fep_china_hwr2_fs_funtion_grid

0x545c,	// (0x0003b98a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6c66,	// (0x0003d194) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6c66,	// (0x0003d194) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6c74,	// (0x0003d1a2) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6c74,	// (0x0003d1a2) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd05,	// (0x00046233) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd05,	// (0x00046233) cell_fep_china_hwr2_fs_funtion_grid_g

0xdc41,	// (0x0004416f) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdc41,	// (0x0004416f) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdc56,	// (0x00044184) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdc56,	// (0x00044184) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0a,	// (0x00046238) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0a,	// (0x00046238) cell_fep_china_hwr2_fs_funtion_grid_t

0x6cbb,	// (0x0003d1e9) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6cc3,	// (0x0003d1f1) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6ccb,	// (0x0003d1f9) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0f,	// (0x0004623d) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6cd3,	// (0x0003d201) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6cd3,	// (0x0003d201) cell_fep_china_hwr2_fs_candidate_grid

0x6cf2,	// (0x0003d220) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6cfa,	// (0x0003d228) popup_fep_china_hwr2_fs_candidate_grid_g21

0x545c,	// (0x0003b98a) cell_fep_china_hwr2_fs_candidate_grid_g1

0x545c,	// (0x0003b98a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb23,	// (0x00046051) cell_fep_china_hwr2_fs_candidate_grid_g

0x6d02,	// (0x0003d230) cell_fep_china_hwr2_fs_candidate_grid_t1

0x29f9,	// (0x00038f27) clock_nsta_pane_cp_24_ParamLimits

0x29f9,	// (0x00038f27) clock_nsta_pane_cp_24

0x2a79,	// (0x00038fa7) indicator_nsta_pane_cp_24_ParamLimits

0x2a79,	// (0x00038fa7) indicator_nsta_pane_cp_24

0x3afa,	// (0x0003a028) heading_pane_g1

0x0001,

0xf8a1,	// (0x00045dcf) heading_pane_g

0x4592,	// (0x0003aac0) grid_sct_catagory_button_pane

0x45c4,	// (0x0003aaf2) scroll_pane_cp5_ParamLimits

0x50bc,	// (0x0003b5ea) button_value_adjust_pane_cp5_ParamLimits

0x50bc,	// (0x0003b5ea) button_value_adjust_pane_cp5

0x51a1,	// (0x0003b6cf) form2_midp_time_pane_ParamLimits

0x6d10,	// (0x0003d23e) cell_sct_catagory_button_pane_ParamLimits

0x6d10,	// (0x0003d23e) cell_sct_catagory_button_pane

0x5421,	// (0x0003b94f) bg_button_pane_cp01_ParamLimits

0x5421,	// (0x0003b94f) bg_button_pane_cp01

0x545c,	// (0x0003b98a) cell_sct_catagory_button_pane_g1

0xaafb,	// (0x00041029) popup_tb_extension_window

0xdc72,	// (0x000441a0) aid_size_cell_ext_ParamLimits

0xdc72,	// (0x000441a0) aid_size_cell_ext

0xbb90,	// (0x000420be) bg_tb_trans_pane_cp1_ParamLimits

0xbb90,	// (0x000420be) bg_tb_trans_pane_cp1

0xdc98,	// (0x000441c6) grid_tb_ext_pane_ParamLimits

0xdc98,	// (0x000441c6) grid_tb_ext_pane

0xdcd5,	// (0x00044203) cell_tb_ext_pane_ParamLimits

0xdcd5,	// (0x00044203) cell_tb_ext_pane

0xdcfd,	// (0x0004422b) cell_tb_ext_pane_g1_ParamLimits

0xdcfd,	// (0x0004422b) cell_tb_ext_pane_g1

0x6da4,	// (0x0003d2d2) cell_tb_ext_pane_t1

0xb906,	// (0x00041e34) list_highlight_pane_cp11_ParamLimits

0xb906,	// (0x00041e34) list_highlight_pane_cp11

0x952f,	// (0x0003fa5d) popup_uni_indicator_window_ParamLimits

0x952f,	// (0x0003fa5d) popup_uni_indicator_window

0xbe15,	// (0x00042343) bg_popup_sub_pane_cp14

0x6dbf,	// (0x0003d2ed) list_uniindi_pane

0x6dcb,	// (0x0003d2f9) uniindi_top_pane

0xb906,	// (0x00041e34) bg_uniindi_top_pane

0x6dec,	// (0x0003d31a) uniindi_top_pane_g1

0x6e02,	// (0x0003d330) uniindi_top_pane_g2

0x0003,

0xfd16,	// (0x00046244) uniindi_top_pane_g

0x6e2c,	// (0x0003d35a) uniindi_top_pane_t1

0x6e58,	// (0x0003d386) list_single_uniindi_pane_ParamLimits

0x6e58,	// (0x0003d386) list_single_uniindi_pane

0x545c,	// (0x0003b98a) bg_uniindi_top_pane_g1

0x6e6b,	// (0x0003d399) list_single_uniindi_pane_g1

0x6e7e,	// (0x0003d3ac) list_single_uniindi_pane_t1

0xecf7,	// (0x00045225) control_bg_pane

0x6ea3,	// (0x0003d3d1) bg_sctrl_sk_pane_cp1

0x6eac,	// (0x0003d3da) bg_sctrl_sk_pane_cp2

0x6eb5,	// (0x0003d3e3) control_bg_pane_g1

0x6ebe,	// (0x0003d3ec) control_bg_pane_g2

0x0001,

0xfd1f,	// (0x0004624d) control_bg_pane_g

0x4ef4,	// (0x0003b422) cell_indicator_nsta_pane_g1_ParamLimits

0xcb1d,	// (0x0004304b) cell_indicator_nsta_pane_g2_ParamLimits

0xfa87,	// (0x00045fb5) cell_indicator_nsta_pane_g_ParamLimits

0xd80f,	// (0x00043d3d) form2_midp_time_pane_t1_ParamLimits

0x0f9c,	// (0x000374ca) main_idle_act4_pane_ParamLimits

0x0f9c,	// (0x000374ca) main_idle_act4_pane

0xaafb,	// (0x00041029) popup_tb_extension_window_ParamLimits

0xdcbd,	// (0x000441eb) tb_ext_find_pane_ParamLimits

0xdcbd,	// (0x000441eb) tb_ext_find_pane

0x6ec7,	// (0x0003d3f5) ai_gene_pane_1_cp1

0x26fe,	// (0x00038c2c) ai_gene_pane_2_cp1

0x6ecf,	// (0x0003d3fd) list_single_idle_plugin_calendar_pane

0x6ed8,	// (0x0003d406) list_single_idle_plugin_notification_pane

0x6ee1,	// (0x0003d40f) list_single_idle_plugin_player_pane

0xdd1a,	// (0x00044248) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdd1a,	// (0x00044248) list_single_idle_plugin_shortcut_pane

0xdd42,	// (0x00044270) main_idle_act4_pane_t1

0xdd5a,	// (0x00044288) main_idle_act4_pane_t2

0x0001,

0xfd24,	// (0x00046252) main_idle_act4_pane_t

0xdd72,	// (0x000442a0) middle_sk_idle_act4_pane_ParamLimits

0xdd72,	// (0x000442a0) middle_sk_idle_act4_pane

0xdd8e,	// (0x000442bc) popup_clock_digital_analogue_window_cp2

0xddb5,	// (0x000442e3) shortcut_wheel_idle_act4_pane_ParamLimits

0xddb5,	// (0x000442e3) shortcut_wheel_idle_act4_pane

0x545c,	// (0x0003b98a) shortcut_wheel_idle_act4_pane_g1

0x545c,	// (0x0003b98a) shortcut_wheel_idle_act4_pane_g2

0x545c,	// (0x0003b98a) shortcut_wheel_idle_act4_pane_g3

0x545c,	// (0x0003b98a) shortcut_wheel_idle_act4_pane_g4

0x545c,	// (0x0003b98a) shortcut_wheel_idle_act4_pane_g5

0x6f74,	// (0x0003d4a2) shortcut_wheel_idle_act4_pane_g6

0x6f7c,	// (0x0003d4aa) shortcut_wheel_idle_act4_pane_g7

0x6f84,	// (0x0003d4b2) shortcut_wheel_idle_act4_pane_g8

0x6f8c,	// (0x0003d4ba) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd29,	// (0x00046257) shortcut_wheel_idle_act4_pane_g

0xd248,	// (0x00043776) middle_sk_idle_act4_pane_g1_ParamLimits

0xd248,	// (0x00043776) middle_sk_idle_act4_pane_g1

0xde32,	// (0x00044360) middle_sk_idle_act4_pane_g2_ParamLimits

0xde32,	// (0x00044360) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4c,	// (0x0004627a) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4c,	// (0x0004627a) middle_sk_idle_act4_pane_g

0xde4a,	// (0x00044378) middle_sk_idle_act4_pane_t1_ParamLimits

0xde4a,	// (0x00044378) middle_sk_idle_act4_pane_t1

0xde79,	// (0x000443a7) grid_ai_shortcut_pane_ParamLimits

0xde79,	// (0x000443a7) grid_ai_shortcut_pane

0xde96,	// (0x000443c4) list_highlight_pane_cp16_ParamLimits

0xde96,	// (0x000443c4) list_highlight_pane_cp16

0xdea3,	// (0x000443d1) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdea3,	// (0x000443d1) list_single_idle_plugin_shortcut_pane_g1

0xdeaf,	// (0x000443dd) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdeaf,	// (0x000443dd) list_single_idle_plugin_shortcut_pane_g2

0xdecd,	// (0x000443fb) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdecd,	// (0x000443fb) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd51,	// (0x0004627f) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd51,	// (0x0004627f) list_single_idle_plugin_shortcut_pane_g

0xdee2,	// (0x00044410) cell_ai_shortcut_pane_ParamLimits

0xdee2,	// (0x00044410) cell_ai_shortcut_pane

0xdef8,	// (0x00044426) cell_ai_shortcut_pane_g1_ParamLimits

0xdef8,	// (0x00044426) cell_ai_shortcut_pane_g1

0x6ec7,	// (0x0003d3f5) ai_gene_pane_1_cp2

0x70bd,	// (0x0003d5eb) ai_gene_pane_2_cp2

0x70c5,	// (0x0003d5f3) list_highlight_pane_cp15

0x70ce,	// (0x0003d5fc) list_single_idle_plugin_calendar_pane_g1

0x70c5,	// (0x0003d5f3) list_highlight_pane_cp17

0x70d6,	// (0x0003d604) list_single_idle_plugin_calendar_pane_g1_copy1

0x70de,	// (0x0003d60c) list_single_idle_plugin_player_pane_g1

0x47f9,	// (0x0003ad27) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd58,	// (0x00046286) list_single_idle_plugin_player_pane_g

0x70e6,	// (0x0003d614) list_single_idle_plugin_player_pane_t1

0x70f4,	// (0x0003d622) list_single_idle_plugin_player_pane_t2

0x7102,	// (0x0003d630) list_single_idle_plugin_player_pane_t3

0x7110,	// (0x0003d63e) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5d,	// (0x0004628b) list_single_idle_plugin_player_pane_t

0x711e,	// (0x0003d64c) wait_bar_pane_cp15

0x7126,	// (0x0003d654) grid_ai_notification_pane

0x47f9,	// (0x0003ad27) list_single_idle_plugin_notification_pane_g1

0xdf1a,	// (0x00044448) cell_ai_notification_pane_ParamLimits

0xdf1a,	// (0x00044448) cell_ai_notification_pane

0x713c,	// (0x0003d66a) cell_ai_notification_pane_g1

0x7144,	// (0x0003d672) cell_ai_notification_pane_t1

0xdf27,	// (0x00044455) tb_ext_find_button_pane

0xdf2f,	// (0x0004445d) tb_ext_find_pane_g1

0xdf37,	// (0x00044465) tb_ext_find_pane_t1

0xf28c,	// (0x000457ba) tb_ext_find_button_pane_g1

0x7170,	// (0x0003d69e) tb_ext_find_button_pane_g2

0x0001,

0xfd66,	// (0x00046294) tb_ext_find_button_pane_g

0xdd42,	// (0x00044270) main_idle_act4_pane_t1_ParamLimits

0xdd5a,	// (0x00044288) main_idle_act4_pane_t2_ParamLimits

0xfd24,	// (0x00046252) main_idle_act4_pane_t_ParamLimits

0xdd8e,	// (0x000442bc) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdda5,	// (0x000442d3) sat_plugin_idle_act4_pane_ParamLimits

0xdda5,	// (0x000442d3) sat_plugin_idle_act4_pane

0xdf45,	// (0x00044473) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf45,	// (0x00044473) sat_plugin_idle_act4_pane_t1

0xdf5d,	// (0x0004448b) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf5d,	// (0x0004448b) sat_plugin_idle_act4_pane_t2

0xdf75,	// (0x000444a3) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf75,	// (0x000444a3) sat_plugin_idle_act4_pane_t3

0xdf8d,	// (0x000444bb) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf8d,	// (0x000444bb) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd6b,	// (0x00046299) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd6b,	// (0x00046299) sat_plugin_idle_act4_pane_t

0xedbc,	// (0x000452ea) popup_battery_window_ParamLimits

0xedbc,	// (0x000452ea) popup_battery_window

0xb906,	// (0x00041e34) bg_popup_sub_pane_cp25_ParamLimits

0xb906,	// (0x00041e34) bg_popup_sub_pane_cp25

0x71c5,	// (0x0003d6f3) popup_battery_window_g1_ParamLimits

0x71c5,	// (0x0003d6f3) popup_battery_window_g1

0x71d1,	// (0x0003d6ff) popup_battery_window_t1_ParamLimits

0x71d1,	// (0x0003d6ff) popup_battery_window_t1

0x71e3,	// (0x0003d711) popup_battery_window_t2_ParamLimits

0x71e3,	// (0x0003d711) popup_battery_window_t2

0x0001,

0xfd74,	// (0x000462a2) popup_battery_window_t_ParamLimits

0xfd74,	// (0x000462a2) popup_battery_window_t

0xa2bd,	// (0x000407eb) midp_canvas_pane_ParamLimits

0xa319,	// (0x00040847) midp_keypad_pane_ParamLimits

0xa319,	// (0x00040847) midp_keypad_pane

0x28db,	// (0x00038e09) main_midp_pane_ParamLimits

0x4f6f,	// (0x0003b49d) signal_pane_g2_cp_ParamLimits

0xdfa5,	// (0x000444d3) aid_size_cell_midp_keypad_ParamLimits

0xdfa5,	// (0x000444d3) aid_size_cell_midp_keypad

0xdfc3,	// (0x000444f1) midp_keyp_game_grid_pane_ParamLimits

0xdfc3,	// (0x000444f1) midp_keyp_game_grid_pane

0xdfea,	// (0x00044518) midp_keyp_rocker_pane_ParamLimits

0xdfea,	// (0x00044518) midp_keyp_rocker_pane

0xe039,	// (0x00044567) midp_keyp_sk_left_pane_ParamLimits

0xe039,	// (0x00044567) midp_keyp_sk_left_pane

0xe08f,	// (0x000445bd) midp_keyp_sk_right_pane_ParamLimits

0xe08f,	// (0x000445bd) midp_keyp_sk_right_pane

0xb763,	// (0x00041c91) bg_button_pane_cp03

0xe0e5,	// (0x00044613) midp_keyp_sk_left_pane_g1

0xb763,	// (0x00041c91) bg_button_pane_cp04

0xe0e5,	// (0x00044613) midp_keyp_sk_right_pane_g1

0x545c,	// (0x0003b98a) midp_keyp_rocker_pane_g1

0xe0ed,	// (0x0004461b) keyp_game_cell_pane_ParamLimits

0xe0ed,	// (0x0004461b) keyp_game_cell_pane

0xb763,	// (0x00041c91) bg_button_pane_cp02

0xe113,	// (0x00044641) keyp_game_cell_pane_g1

0x94c6,	// (0x0003f9f4) popup_fep_vkb2_window_ParamLimits

0x94c6,	// (0x0003f9f4) popup_fep_vkb2_window

0xb19b,	// (0x000416c9) aid_size_cell_vkb2_ParamLimits

0xb19b,	// (0x000416c9) aid_size_cell_vkb2

0xb1c7,	// (0x000416f5) popup_fep_vkb2_window_g1_ParamLimits

0xb1c7,	// (0x000416f5) popup_fep_vkb2_window_g1

0xb217,	// (0x00041745) vkb2_area_bottom_pane_ParamLimits

0xb217,	// (0x00041745) vkb2_area_bottom_pane

0xb273,	// (0x000417a1) vkb2_area_keypad_pane_ParamLimits

0xb273,	// (0x000417a1) vkb2_area_keypad_pane

0xb2c1,	// (0x000417ef) vkb2_area_top_pane_ParamLimits

0xb2c1,	// (0x000417ef) vkb2_area_top_pane

0xb34e,	// (0x0004187c) vkb2_top_entry_pane_ParamLimits

0xb34e,	// (0x0004187c) vkb2_top_entry_pane

0xb37b,	// (0x000418a9) vkb2_top_grid_left_pane_ParamLimits

0xb37b,	// (0x000418a9) vkb2_top_grid_left_pane

0xb39c,	// (0x000418ca) vkb2_top_grid_right_pane_ParamLimits

0xb39c,	// (0x000418ca) vkb2_top_grid_right_pane

0x1857,	// (0x00037d85) vkb2_cell_keypad_pane_ParamLimits

0x1857,	// (0x00037d85) vkb2_cell_keypad_pane

0xb3e4,	// (0x00041912) vkb2_area_bottom_grid_pane_ParamLimits

0xb3e4,	// (0x00041912) vkb2_area_bottom_grid_pane

0xb40e,	// (0x0004193c) vkb2_area_bottom_pane_g1_ParamLimits

0xb40e,	// (0x0004193c) vkb2_area_bottom_pane_g1

0xb434,	// (0x00041962) vkb2_area_bottom_pane_g2_ParamLimits

0xb434,	// (0x00041962) vkb2_area_bottom_pane_g2

0xb465,	// (0x00041993) vkb2_area_bottom_pane_g3_ParamLimits

0xb465,	// (0x00041993) vkb2_area_bottom_pane_g3

0x0002,

0xfd79,	// (0x000462a7) vkb2_area_bottom_pane_g_ParamLimits

0xfd79,	// (0x000462a7) vkb2_area_bottom_pane_g

0x1a01,	// (0x00037f2f) vkb2_top_cell_left_pane_ParamLimits

0x1a01,	// (0x00037f2f) vkb2_top_cell_left_pane

0xe11c,	// (0x0004464a) vkb2_top_entry_pane_g1_ParamLimits

0xe11c,	// (0x0004464a) vkb2_top_entry_pane_g1

0xe12a,	// (0x00044658) vkb2_top_entry_pane_t1_ParamLimits

0xe12a,	// (0x00044658) vkb2_top_entry_pane_t1

0x73ae,	// (0x0003d8dc) vkb2_top_entry_pane_t2_ParamLimits

0x73ae,	// (0x0003d8dc) vkb2_top_entry_pane_t2

0x73e0,	// (0x0003d90e) vkb2_top_entry_pane_t3_ParamLimits

0x73e0,	// (0x0003d90e) vkb2_top_entry_pane_t3

0x0002,

0xfd80,	// (0x000462ae) vkb2_top_entry_pane_t_ParamLimits

0xfd80,	// (0x000462ae) vkb2_top_entry_pane_t

0xb4cf,	// (0x000419fd) vkb2_top_grid_right_pane_g1_ParamLimits

0xb4cf,	// (0x000419fd) vkb2_top_grid_right_pane_g1

0x1a64,	// (0x00037f92) vkb2_top_grid_right_pane_g2_ParamLimits

0x1a64,	// (0x00037f92) vkb2_top_grid_right_pane_g2

0x1a7c,	// (0x00037faa) vkb2_top_grid_right_pane_g3_ParamLimits

0x1a7c,	// (0x00037faa) vkb2_top_grid_right_pane_g3

0xb4e5,	// (0x00041a13) vkb2_top_grid_right_pane_g4_ParamLimits

0xb4e5,	// (0x00041a13) vkb2_top_grid_right_pane_g4

0x0003,

0xfd87,	// (0x000462b5) vkb2_top_grid_right_pane_g_ParamLimits

0xfd87,	// (0x000462b5) vkb2_top_grid_right_pane_g

0x1aaa,	// (0x00037fd8) vkb2_top_cell_left_pane_g1

0x1ac1,	// (0x00037fef) vkb2_cell_keypad_pane_g1_ParamLimits

0x1ac1,	// (0x00037fef) vkb2_cell_keypad_pane_g1

0x7404,	// (0x0003d932) vkb2_cell_keypad_pane_t1_ParamLimits

0x7404,	// (0x0003d932) vkb2_cell_keypad_pane_t1

0x1acf,	// (0x00037ffd) vkb2_cell_bottom_grid_pane_ParamLimits

0x1acf,	// (0x00037ffd) vkb2_cell_bottom_grid_pane

0x1b08,	// (0x00038036) vkb2_cell_bottom_grid_pane_g1

0xddd6,	// (0x00044304) aid_call2_pane_cp02

0xddde,	// (0x0004430c) aid_call_pane_cp02

0xdde6,	// (0x00044314) clock_digital_number_pane_cp10

0xddee,	// (0x0004431c) clock_digital_number_pane_cp11

0xddf6,	// (0x00044324) clock_digital_number_pane_cp12

0xddfe,	// (0x0004432c) clock_digital_number_pane_cp13

0xde06,	// (0x00044334) clock_digital_separator_pane_cp10

0xf28c,	// (0x000457ba) popup_clock_digital_analogue_window_cp2_g1

0xf28c,	// (0x000457ba) popup_clock_digital_analogue_window_cp2_g2

0xde0e,	// (0x0004433c) popup_clock_digital_analogue_window_cp2_g3

0xf28c,	// (0x000457ba) popup_clock_digital_analogue_window_cp2_g4

0xde0e,	// (0x0004433c) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3c,	// (0x0004626a) popup_clock_digital_analogue_window_cp2_g

0xde16,	// (0x00044344) popup_clock_digital_analogue_window_cp2_t1

0xde24,	// (0x00044352) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd47,	// (0x00046275) popup_clock_digital_analogue_window_cp2_t

0x545c,	// (0x0003b98a) clock_digital_number_pane_cp10_g1

0x545c,	// (0x0003b98a) clock_digital_number_pane_cp10_g2

0x0001,

0xfb23,	// (0x00046051) clock_digital_number_pane_cp10_g

0x545c,	// (0x0003b98a) clock_digital_separator_pane_cp10_g1

0x545c,	// (0x0003b98a) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb23,	// (0x00046051) clock_digital_separator_pane_cp10_g

0x6e0e,	// (0x0003d33c) uniindi_top_pane_g3

0x6e1f,	// (0x0003d34d) uniindi_top_pane_g4

0x18e2,	// (0x00037e10) vkb2_row_keypad_pane_ParamLimits

0x18e2,	// (0x00037e10) vkb2_row_keypad_pane

0x1b24,	// (0x00038052) vkb2_cell_t_keypad_pane_ParamLimits

0x1b24,	// (0x00038052) vkb2_cell_t_keypad_pane

0x1b34,	// (0x00038062) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1b34,	// (0x00038062) vkb2_cell_t_keypad_pane_cp08

0x1b49,	// (0x00038077) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1b49,	// (0x00038077) vkb2_cell_t_keypad_pane_cp09

0x1b5d,	// (0x0003808b) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1b5d,	// (0x0003808b) vkb2_cell_t_keypad_pane_cp01

0x1b6e,	// (0x0003809c) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1b6e,	// (0x0003809c) vkb2_cell_t_keypad_pane_cp02

0x1b7f,	// (0x000380ad) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1b7f,	// (0x000380ad) vkb2_cell_t_keypad_pane_cp03

0x1b90,	// (0x000380be) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1b90,	// (0x000380be) vkb2_cell_t_keypad_pane_cp04

0x1ba1,	// (0x000380cf) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1ba1,	// (0x000380cf) vkb2_cell_t_keypad_pane_cp05

0x1bb2,	// (0x000380e0) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1bb2,	// (0x000380e0) vkb2_cell_t_keypad_pane_cp06

0x1bc5,	// (0x000380f3) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1bc5,	// (0x000380f3) vkb2_cell_t_keypad_pane_cp07

0x1bda,	// (0x00038108) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1bda,	// (0x00038108) vkb2_cell_t_keypad_pane_cp10

0x1217,	// (0x00037745) vkb2_cell_t_keypad_pane_g1

0x741b,	// (0x0003d949) vkb2_cell_t_keypad_pane_t1

0xecf7,	// (0x00045225) popup_grid_graphic2_window

0xe163,	// (0x00044691) aid_size_cell_graphic2_ParamLimits

0xe163,	// (0x00044691) aid_size_cell_graphic2

0xe1a1,	// (0x000446cf) bg_popup_window_pane_cp21_ParamLimits

0xe1a1,	// (0x000446cf) bg_popup_window_pane_cp21

0xe1af,	// (0x000446dd) graphic2_pages_pane_ParamLimits

0xe1af,	// (0x000446dd) graphic2_pages_pane

0xe207,	// (0x00044735) grid_graphic2_control_pane_ParamLimits

0xe207,	// (0x00044735) grid_graphic2_control_pane

0xe24f,	// (0x0004477d) grid_graphic2_pane_ParamLimits

0xe24f,	// (0x0004477d) grid_graphic2_pane

0xe2da,	// (0x00044808) cell_graphic2_pane

0xecf7,	// (0x00045225) main_comp_mode_pane

0x667b,	// (0x0003cba9) list_ai3_gene_pane_ParamLimits

0xdb16,	// (0x00044044) bg_popup_window_pane_cp19_ParamLimits

0x6a4d,	// (0x0003cf7b) bg_touch_area_indi_pane_ParamLimits

0x6a4d,	// (0x0003cf7b) bg_touch_area_indi_pane

0x6a63,	// (0x0003cf91) bg_touch_area_indi_pane_cp01_ParamLimits

0x6a63,	// (0x0003cf91) bg_touch_area_indi_pane_cp01

0x6a79,	// (0x0003cfa7) bg_touch_area_indi_pane_cp02_ParamLimits

0x6a79,	// (0x0003cfa7) bg_touch_area_indi_pane_cp02

0x6a93,	// (0x0003cfc1) bg_touch_area_indi_pane_cp03_ParamLimits

0x6a93,	// (0x0003cfc1) bg_touch_area_indi_pane_cp03

0x6aad,	// (0x0003cfdb) popup_slider_window_g1_ParamLimits

0x6ac9,	// (0x0003cff7) popup_slider_window_g2_ParamLimits

0x6ae5,	// (0x0003d013) popup_slider_window_g3_ParamLimits

0xfcd1,	// (0x000461ff) popup_slider_window_g_ParamLimits

0x6b4b,	// (0x0003d079) popup_slider_window_t1_ParamLimits

0x6bbf,	// (0x0003d0ed) small_volume_slider_vertical_pane_ParamLimits

0xe2da,	// (0x00044808) cell_graphic2_pane_ParamLimits

0xe33c,	// (0x0004486a) bg_button_pane_cp10_ParamLimits

0xe33c,	// (0x0004486a) bg_button_pane_cp10

0xe34f,	// (0x0004487d) bg_button_pane_cp11_ParamLimits

0xe34f,	// (0x0004487d) bg_button_pane_cp11

0xe362,	// (0x00044890) graphic2_pages_pane_g1_ParamLimits

0xe362,	// (0x00044890) graphic2_pages_pane_g1

0xe37d,	// (0x000448ab) graphic2_pages_pane_g2_ParamLimits

0xe37d,	// (0x000448ab) graphic2_pages_pane_g2

0x0001,

0xfd95,	// (0x000462c3) graphic2_pages_pane_g_ParamLimits

0xfd95,	// (0x000462c3) graphic2_pages_pane_g

0xe395,	// (0x000448c3) graphic2_pages_pane_t1_ParamLimits

0xe395,	// (0x000448c3) graphic2_pages_pane_t1

0xe3ad,	// (0x000448db) cell_graphic2_control_pane_ParamLimits

0xe3ad,	// (0x000448db) cell_graphic2_control_pane

0xe3e1,	// (0x0004490f) cell_graphic2_pane_g1_ParamLimits

0xe3e1,	// (0x0004490f) cell_graphic2_pane_g1

0xd256,	// (0x00043784) cell_graphic2_pane_g2_ParamLimits

0xd256,	// (0x00043784) cell_graphic2_pane_g2

0xd822,	// (0x00043d50) cell_graphic2_pane_g3_ParamLimits

0xd822,	// (0x00043d50) cell_graphic2_pane_g3

0xd263,	// (0x00043791) cell_graphic2_pane_g4_ParamLimits

0xd263,	// (0x00043791) cell_graphic2_pane_g4

0xe3ee,	// (0x0004491c) cell_graphic2_pane_g5_ParamLimits

0xe3ee,	// (0x0004491c) cell_graphic2_pane_g5

0x0004,

0xfd9a,	// (0x000462c8) cell_graphic2_pane_g_ParamLimits

0xfd9a,	// (0x000462c8) cell_graphic2_pane_g

0xe40a,	// (0x00044938) cell_graphic2_pane_t1_ParamLimits

0xe40a,	// (0x00044938) cell_graphic2_pane_t1

0x3aee,	// (0x0003a01c) grid_highlight_pane_cp11_ParamLimits

0x3aee,	// (0x0003a01c) grid_highlight_pane_cp11

0xb906,	// (0x00041e34) bg_button_pane_cp05

0xe453,	// (0x00044981) cell_graphic2_control_pane_g1

0x545c,	// (0x0003b98a) bg_touch_area_indi_pane_g1

0x76fe,	// (0x0003dc2c) aid_cmod_rocker_key_size

0x7708,	// (0x0003dc36) aid_cmode_itu_key_size

0x7712,	// (0x0003dc40) main_cmode_video_pane

0x771c,	// (0x0003dc4a) main_comp_mode_itu_pane

0x7728,	// (0x0003dc56) main_comp_mode_rocker_pane

0x7734,	// (0x0003dc62) cell_cmode_rocker_pane_ParamLimits

0x7734,	// (0x0003dc62) cell_cmode_rocker_pane

0x7748,	// (0x0003dc76) cell_cmode_itu_pane_ParamLimits

0x7748,	// (0x0003dc76) cell_cmode_itu_pane

0xbe15,	// (0x00042343) bg_button_pane_cp06_ParamLimits

0xbe15,	// (0x00042343) bg_button_pane_cp06

0x56d7,	// (0x0003bc05) cell_cmode_rocker_pane_g1_ParamLimits

0x56d7,	// (0x0003bc05) cell_cmode_rocker_pane_g1

0x6c66,	// (0x0003d194) cell_cmode_rocker_pane_g2_ParamLimits

0x6c66,	// (0x0003d194) cell_cmode_rocker_pane_g2

0x0001,

0xfdaa,	// (0x000462d8) cell_cmode_rocker_pane_g_ParamLimits

0xfdaa,	// (0x000462d8) cell_cmode_rocker_pane_g

0xb763,	// (0x00041c91) bg_button_pane_cp07

0x775f,	// (0x0003dc8d) cell_cmode_itu_pane_g1

0x7768,	// (0x0003dc96) cell_cmode_itu_pane_t1

0x7776,	// (0x0003dca4) cell_cmode_itu_pane_t2

0x0001,

0xfdaf,	// (0x000462dd) cell_cmode_itu_pane_t

0x6e93,	// (0x0003d3c1) aid_touch_ctrl_left

0x6e9b,	// (0x0003d3c9) aid_touch_ctrl_right

0xb763,	// (0x00041c91) compa_mode_pane

0xe47b,	// (0x000449a9) aid_cmod_rocker_key_size_cp

0xe485,	// (0x000449b3) aid_cmode_itu_key_size_cp

0x7798,	// (0x0003dcc6) compa_mode_pane_g1

0x77a0,	// (0x0003dcce) compa_mode_pane_g2

0x77a8,	// (0x0003dcd6) compa_mode_pane_g3

0x0002,

0xfdb4,	// (0x000462e2) compa_mode_pane_g

0xe48f,	// (0x000449bd) main_comp_mode_itu_pane_cp

0xe497,	// (0x000449c5) main_comp_mode_rocker_pane_cp

0xe49f,	// (0x000449cd) cell_cmode_itu_pane_cp_ParamLimits

0xe49f,	// (0x000449cd) cell_cmode_itu_pane_cp

0xe4b4,	// (0x000449e2) cell_cmode_rocker_pane_cp_ParamLimits

0xe4b4,	// (0x000449e2) cell_cmode_rocker_pane_cp

0xbe15,	// (0x00042343) bg_button_pane_cp06_cp_ParamLimits

0xbe15,	// (0x00042343) bg_button_pane_cp06_cp

0x56d7,	// (0x0003bc05) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x56d7,	// (0x0003bc05) cell_cmode_rocker_pane_g1_cp

0x545c,	// (0x0003b98a) cell_cmode_rocker_pane_g2_cp

0xb763,	// (0x00041c91) bg_button_pane_cp07_cp

0xe4c6,	// (0x000449f4) cell_cmode_itu_pane_g1_cp

0xe4cf,	// (0x000449fd) cell_cmode_itu_pane_t1_cp

0xe4cf,	// (0x000449fd) cell_cmode_itu_pane_t2_cp

0xc94e,	// (0x00042e7c) settings_code_pane_cp2

0xb7d3,	// (0x00041d01) bg_popup_window_pane_cp3_ParamLimits

0xbb1a,	// (0x00042048) heading_pane_cp3_ParamLimits

0xbb29,	// (0x00042057) listscroll_popup_graphic_pane_ParamLimits

0x0faa,	// (0x000374d8) fep_hwr_aid_pane_ParamLimits

0x159a,	// (0x00037ac8) aid_touch_sctrl_top_ParamLimits

0x15b5,	// (0x00037ae3) sctrl_sk_top_pane_g1_ParamLimits

0x1217,	// (0x00037745) sctrl_sk_top_pane_g2_ParamLimits

0xfcea,	// (0x00046218) sctrl_sk_top_pane_g_ParamLimits

0x15c2,	// (0x00037af0) sctrl_sk_top_pane_t1_ParamLimits

0x159a,	// (0x00037ac8) aid_touch_sctrl_bottom_ParamLimits

0x15c2,	// (0x00037af0) sctrl_sk_bottom_pane_t1_ParamLimits

0x6dd8,	// (0x0003d306) aid_area_touch_clock

0xb30d,	// (0x0004183b) aid_vkb2_area_top_pane_cell_ParamLimits

0xb30d,	// (0x0004183b) aid_vkb2_area_top_pane_cell

0xb3bd,	// (0x000418eb) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb3bd,	// (0x000418eb) aid_vkb2_area_bottom_pane_cell

0x7366,	// (0x0003d894) popup_char_count_window

0x77fe,	// (0x0003dd2c) popup_char_count_window_g1

0x7807,	// (0x0003dd35) popup_char_count_window_g2

0x7810,	// (0x0003dd3e) popup_char_count_window_g3

0x0002,

0xfdbb,	// (0x000462e9) popup_char_count_window_g

0x7819,	// (0x0003dd47) popup_char_count_window_t1

0x166b,	// (0x00037b99) popup_fep_char_preview_window_ParamLimits

0x166b,	// (0x00037b99) popup_fep_char_preview_window

0xb32d,	// (0x0004185b) vkb2_top_candi_pane_ParamLimits

0xb32d,	// (0x0004185b) vkb2_top_candi_pane

0xe4dd,	// (0x00044a0b) cell_vkb2_top_candi_pane_ParamLimits

0xe4dd,	// (0x00044a0b) cell_vkb2_top_candi_pane

0x1bef,	// (0x0003811d) bg_popup_fep_char_preview_window_ParamLimits

0x1bef,	// (0x0003811d) bg_popup_fep_char_preview_window

0x1bfd,	// (0x0003812b) popup_fep_char_preview_window_t1_ParamLimits

0x1bfd,	// (0x0003812b) popup_fep_char_preview_window_t1

0x7875,	// (0x0003dda3) bg_popup_fep_char_preview_window_g1

0x787d,	// (0x0003ddab) bg_popup_fep_char_preview_window_g2

0x7885,	// (0x0003ddb3) bg_popup_fep_char_preview_window_g3

0x788d,	// (0x0003ddbb) bg_popup_fep_char_preview_window_g4

0x7895,	// (0x0003ddc3) bg_popup_fep_char_preview_window_g5

0x789d,	// (0x0003ddcb) bg_popup_fep_char_preview_window_g6

0x78a5,	// (0x0003ddd3) bg_popup_fep_char_preview_window_g7

0x78ad,	// (0x0003dddb) bg_popup_fep_char_preview_window_g8

0x78b5,	// (0x0003dde3) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdc2,	// (0x000462f0) bg_popup_fep_char_preview_window_g

0x1217,	// (0x00037745) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1217,	// (0x00037745) cell_vkb2_top_candi_pane_g1

0x1225,	// (0x00037753) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1225,	// (0x00037753) cell_vkb2_top_candi_pane_g2

0x7321,	// (0x0003d84f) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7321,	// (0x0003d84f) cell_vkb2_top_candi_pane_g3

0x1c3f,	// (0x0003816d) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1c3f,	// (0x0003816d) cell_vkb2_top_candi_pane_g4

0x5bf6,	// (0x0003c124) cell_vkb2_top_candi_pane_g5_ParamLimits

0x5bf6,	// (0x0003c124) cell_vkb2_top_candi_pane_g5

0x1c60,	// (0x0003818e) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1c60,	// (0x0003818e) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd7,	// (0x00046305) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd7,	// (0x00046305) cell_vkb2_top_candi_pane_g

0x1c6e,	// (0x0003819c) cell_vkb2_top_candi_pane_t1

0x0d22,	// (0x00037250) aid_size_touch_slider_mark_ParamLimits

0x0d22,	// (0x00037250) aid_size_touch_slider_mark

0xe1eb,	// (0x00044719) grid_graphic2_catg_pane_ParamLimits

0xe1eb,	// (0x00044719) grid_graphic2_catg_pane

0xe2a9,	// (0x000447d7) popup_grid_graphic2_window_t1_ParamLimits

0xe2a9,	// (0x000447d7) popup_grid_graphic2_window_t1

0xe2bf,	// (0x000447ed) popup_grid_graphic2_window_t2_ParamLimits

0xe2bf,	// (0x000447ed) popup_grid_graphic2_window_t2

0x0001,

0xfd90,	// (0x000462be) popup_grid_graphic2_window_t_ParamLimits

0xfd90,	// (0x000462be) popup_grid_graphic2_window_t

0xb906,	// (0x00041e34) bg_button_pane_cp05_ParamLimits

0xe453,	// (0x00044981) cell_graphic2_control_pane_g1_ParamLimits

0xe541,	// (0x00044a6f) cell_graphic2_catg_pane_ParamLimits

0xe541,	// (0x00044a6f) cell_graphic2_catg_pane

0xb763,	// (0x00041c91) bg_button_pane_cp12

0xe553,	// (0x00044a81) cell_graphic2_catg_pane_g1

0x6da4,	// (0x0003d2d2) cell_tb_ext_pane_t1_ParamLimits

0x1a21,	// (0x00037f4f) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1a21,	// (0x00037f4f) vkb2_top_cell_right_narrow_pane

0x1a39,	// (0x00037f67) vkb2_top_cell_right_wide_pane_ParamLimits

0x1a39,	// (0x00037f67) vkb2_top_cell_right_wide_pane

0x0f9c,	// (0x000374ca) bg_vkb2_func_pane_ParamLimits

0x0f9c,	// (0x000374ca) bg_vkb2_func_pane

0x1aaa,	// (0x00037fd8) vkb2_top_cell_left_pane_g1_ParamLimits

0x0f9c,	// (0x000374ca) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0f9c,	// (0x000374ca) bg_vkb2_fuc_pane_cp03

0x1b08,	// (0x00038036) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2e19,	// (0x00039347) bg_vkb2_func_pane_g1

0x2e21,	// (0x0003934f) bg_vkb2_func_pane_g2

0x2e31,	// (0x0003935f) bg_vkb2_func_pane_g3

0x2e29,	// (0x00039357) bg_vkb2_func_pane_g4

0x2e39,	// (0x00039367) bg_vkb2_func_pane_g5

0x2e41,	// (0x0003936f) bg_vkb2_func_pane_g6

0x2e49,	// (0x00039377) bg_vkb2_func_pane_g7

0x2e51,	// (0x0003937f) bg_vkb2_func_pane_g8

0x2e11,	// (0x0003933f) bg_vkb2_func_pane_g9

0x0008,

0xfde4,	// (0x00046312) bg_vkb2_func_pane_g

0x0f9c,	// (0x000374ca) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0f9c,	// (0x000374ca) bg_vkb2_fuc_pane_cp01

0x1aaa,	// (0x00037fd8) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1aaa,	// (0x00037fd8) vkb2_top_cell_right_wide_pane_g1

0x0f9c,	// (0x000374ca) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0f9c,	// (0x000374ca) bg_vkb2_fuc_pane_cp02

0x1c8c,	// (0x000381ba) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1c8c,	// (0x000381ba) vkb2_top_cell_right_narrow_pane_g1

0xda58,	// (0x00043f86) aid_touch_area_decrease_ParamLimits

0xda58,	// (0x00043f86) aid_touch_area_decrease

0xda92,	// (0x00043fc0) aid_touch_area_increase_ParamLimits

0xda92,	// (0x00043fc0) aid_touch_area_increase

0xdaba,	// (0x00043fe8) aid_touch_area_mute_ParamLimits

0xdaba,	// (0x00043fe8) aid_touch_area_mute

0xdae2,	// (0x00044010) aid_touch_area_slider_ParamLimits

0xdae2,	// (0x00044010) aid_touch_area_slider

0xdb22,	// (0x00044050) popup_slider_window_g4_ParamLimits

0xdb22,	// (0x00044050) popup_slider_window_g4

0xdb4a,	// (0x00044078) popup_slider_window_g5_ParamLimits

0xdb4a,	// (0x00044078) popup_slider_window_g5

0xdb7e,	// (0x000440ac) popup_slider_window_g6_ParamLimits

0xdb7e,	// (0x000440ac) popup_slider_window_g6

0x6b79,	// (0x0003d0a7) popup_slider_window_t2_ParamLimits

0x6b79,	// (0x0003d0a7) popup_slider_window_t2

0x0001,

0xfcde,	// (0x0004620c) popup_slider_window_t_ParamLimits

0xfcde,	// (0x0004620c) popup_slider_window_t

0xdb9a,	// (0x000440c8) slider_pane_ParamLimits

0xdb9a,	// (0x000440c8) slider_pane

0x78d8,	// (0x0003de06) slider_pane_g1_ParamLimits

0x78d8,	// (0x0003de06) slider_pane_g1

0x78ec,	// (0x0003de1a) slider_pane_g2_ParamLimits

0x78ec,	// (0x0003de1a) slider_pane_g2

0x7902,	// (0x0003de30) slider_pane_g3_ParamLimits

0x7902,	// (0x0003de30) slider_pane_g3

0x0003,

0xfdf7,	// (0x00046325) slider_pane_g_ParamLimits

0xfdf7,	// (0x00046325) slider_pane_g

0xab47,	// (0x00041075) popup_tb_float_extension_window_ParamLimits

0xab47,	// (0x00041075) popup_tb_float_extension_window

0x792e,	// (0x0003de5c) aid_size_cell_tb_float_ext

0xb763,	// (0x00041c91) bg_popup_sub_window_cp28

0x793a,	// (0x0003de68) grid_tb_float_ext_pane

0x7946,	// (0x0003de74) cell_tb_float_ext_pane_ParamLimits

0x7946,	// (0x0003de74) cell_tb_float_ext_pane

0x7962,	// (0x0003de90) cell_tb_float_ext_pane_g1

0x796b,	// (0x0003de99) grid_highlight_pane_cp12

0xaeb8,	// (0x000413e6) cell_last_hwr_side_pane_ParamLimits

0xaeb8,	// (0x000413e6) cell_last_hwr_side_pane

0x545c,	// (0x0003b98a) cell_last_hwr_side_pane_g1

0x7974,	// (0x0003dea2) cell_last_hwr_side_pane_g2

0x0001,

0xfe00,	// (0x0004632e) cell_last_hwr_side_pane_g

0xb49a,	// (0x000419c8) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb49a,	// (0x000419c8) vkb2_area_bottom_space_btn_pane

0x1217,	// (0x00037745) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x741b,	// (0x0003d949) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1c6e,	// (0x0003819c) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1ca8,	// (0x000381d6) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1ca8,	// (0x000381d6) vkb2_area_bottom_space_btn_pane_g1

0x1ce2,	// (0x00038210) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1ce2,	// (0x00038210) vkb2_area_bottom_space_btn_pane_g2

0x1d18,	// (0x00038246) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1d18,	// (0x00038246) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe05,	// (0x00046333) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe05,	// (0x00046333) vkb2_area_bottom_space_btn_pane_g

0x1061,	// (0x0003758f) cel_fep_hwr_func_pane_ParamLimits

0x1061,	// (0x0003758f) cel_fep_hwr_func_pane

0xae8d,	// (0x000413bb) cell_hwr_side_button_pane_ParamLimits

0xae8d,	// (0x000413bb) cell_hwr_side_button_pane

0x6dd8,	// (0x0003d306) aid_area_touch_clock_ParamLimits

0xb906,	// (0x00041e34) bg_uniindi_top_pane_ParamLimits

0x6dec,	// (0x0003d31a) uniindi_top_pane_g1_ParamLimits

0x6e02,	// (0x0003d330) uniindi_top_pane_g2_ParamLimits

0x6e0e,	// (0x0003d33c) uniindi_top_pane_g3_ParamLimits

0x6e1f,	// (0x0003d34d) uniindi_top_pane_g4_ParamLimits

0xfd16,	// (0x00046244) uniindi_top_pane_g_ParamLimits

0x6e2c,	// (0x0003d35a) uniindi_top_pane_t1_ParamLimits

0xb906,	// (0x00041e34) bg_vkb2_func_pane_cp01_ParamLimits

0xb906,	// (0x00041e34) bg_vkb2_func_pane_cp01

0x797d,	// (0x0003deab) cel_fep_hwr_func_pane_g1_ParamLimits

0x797d,	// (0x0003deab) cel_fep_hwr_func_pane_g1

0xb906,	// (0x00041e34) bg_vkb2_func_pane_cp02_ParamLimits

0xb906,	// (0x00041e34) bg_vkb2_func_pane_cp02

0x797d,	// (0x0003deab) cell_hwr_side_button_pane_g1_ParamLimits

0x797d,	// (0x0003deab) cell_hwr_side_button_pane_g1

0x2c96,	// (0x000391c4) status_pane_g4_ParamLimits

0x2c96,	// (0x000391c4) status_pane_g4

0x2cb0,	// (0x000391de) status_pane_t1

0x520f,	// (0x0003b73d) form2_midp_gauge_slider_cont_pane

0x5217,	// (0x0003b745) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcc14,	// (0x00043142) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcc26,	// (0x00043154) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad6,	// (0x00046004) form2_midp_gauge_slider_pane_t_ParamLimits

0x524d,	// (0x0003b77b) form2_midp_slider_pane_ParamLimits

0x1633,	// (0x00037b61) aid_size_cell_func_vkb2_ParamLimits

0x1633,	// (0x00037b61) aid_size_cell_func_vkb2

0x791a,	// (0x0003de48) slider_pane_g4_ParamLimits

0x791a,	// (0x0003de48) slider_pane_g4

0xb503,	// (0x00041a31) form2_midp_gauge_slider_pane_t2_cp01

0xb511,	// (0x00041a3f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb511,	// (0x00041a3f) form2_midp_gauge_slider_pane_t3_cp01

0x1d8d,	// (0x000382bb) form2_midp_slider_pane_cp01

0xb763,	// (0x00041c91) navi_smil_pane

0x79b6,	// (0x0003dee4) navi_smil_pane_g1

0x79be,	// (0x0003deec) navi_smil_pane_t1

0x798b,	// (0x0003deb9) form2_midp_slider_pane_g1

0x7994,	// (0x0003dec2) form2_midp_slider_pane_g2

0x799c,	// (0x0003deca) form2_midp_slider_pane_g3

0x798b,	// (0x0003deb9) form2_midp_slider_pane_g4

0xe55c,	// (0x00044a8a) form2_midp_slider_pane_g5

0x0004,

0xfe0e,	// (0x0004633c) form2_midp_slider_pane_g

0x1d52,	// (0x00038280) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1d52,	// (0x00038280) vkb2_area_bottom_space_btn_pane_g4

0xc278,	// (0x000427a6) lc0_navi_pane_ParamLimits

0xc278,	// (0x000427a6) lc0_navi_pane

0xc2e8,	// (0x00042816) lc0_stat_indi_pane_ParamLimits

0xc2e8,	// (0x00042816) lc0_stat_indi_pane

0xc2fd,	// (0x0004282b) ls0_title_pane_ParamLimits

0xc2fd,	// (0x0004282b) ls0_title_pane

0xbe15,	// (0x00042343) bg_popup_sub_pane_cp14_ParamLimits

0x6dbf,	// (0x0003d2ed) list_uniindi_pane_ParamLimits

0x6dcb,	// (0x0003d2f9) uniindi_top_pane_ParamLimits

0x6e6b,	// (0x0003d399) list_single_uniindi_pane_g1_ParamLimits

0x6e7e,	// (0x0003d3ac) list_single_uniindi_pane_t1_ParamLimits

0xb52e,	// (0x00041a5c) lc0_stat_clock_pane_ParamLimits

0xb52e,	// (0x00041a5c) lc0_stat_clock_pane

0xe565,	// (0x00044a93) lc0_stat_indi_pane_g1_ParamLimits

0xe565,	// (0x00044a93) lc0_stat_indi_pane_g1

0xe572,	// (0x00044aa0) lc0_stat_indi_pane_g2_ParamLimits

0xe572,	// (0x00044aa0) lc0_stat_indi_pane_g2

0x0001,

0xfe19,	// (0x00046347) lc0_stat_indi_pane_g_ParamLimits

0xfe19,	// (0x00046347) lc0_stat_indi_pane_g

0xb53b,	// (0x00041a69) lc0_uni_indicator_pane_ParamLimits

0xb53b,	// (0x00041a69) lc0_uni_indicator_pane

0xe57f,	// (0x00044aad) ls0_title_pane_g1_ParamLimits

0xe57f,	// (0x00044aad) ls0_title_pane_g1

0xe593,	// (0x00044ac1) ls0_title_pane_t1_ParamLimits

0xe593,	// (0x00044ac1) ls0_title_pane_t1

0xb548,	// (0x00041a76) lc0_uni_indicator_pane_g1_ParamLimits

0xb548,	// (0x00041a76) lc0_uni_indicator_pane_g1

0x7a30,	// (0x0003df5e) lc0_stat_clock_pane_t1

0xecf7,	// (0x00045225) main_ai5_pane

0x7a3e,	// (0x0003df6c) ai5_sk_pane_ParamLimits

0x7a3e,	// (0x0003df6c) ai5_sk_pane

0xe5c1,	// (0x00044aef) cell_ai5_widget_pane_ParamLimits

0xe5c1,	// (0x00044aef) cell_ai5_widget_pane

0xe640,	// (0x00044b6e) aid_size_cell_widget_grid

0x7af8,	// (0x0003e026) bg_ai5_widget_pane_ParamLimits

0x7af8,	// (0x0003e026) bg_ai5_widget_pane

0xe674,	// (0x00044ba2) cell_ai5_widget_pane_g2

0xe688,	// (0x00044bb6) cell_ai5_widget_pane_g3

0xe6a2,	// (0x00044bd0) cell_ai5_widget_pane_g4

0xe6b2,	// (0x00044be0) cell_ai5_widget_pane_g5

0xe6c2,	// (0x00044bf0) cell_ai5_widget_pane_g6

0xe6ce,	// (0x00044bfc) cell_ai5_widget_pane_g7

0xe73a,	// (0x00044c68) cell_ai5_widget_pane_t1_ParamLimits

0xe73a,	// (0x00044c68) cell_ai5_widget_pane_t1

0xe757,	// (0x00044c85) cell_ai5_widget_pane_t2_ParamLimits

0xe757,	// (0x00044c85) cell_ai5_widget_pane_t2

0xe76f,	// (0x00044c9d) cell_ai5_widget_pane_t3_ParamLimits

0xe76f,	// (0x00044c9d) cell_ai5_widget_pane_t3

0xe787,	// (0x00044cb5) cell_ai5_widget_pane_t4_ParamLimits

0xe787,	// (0x00044cb5) cell_ai5_widget_pane_t4

0xe7ad,	// (0x00044cdb) cell_ai5_widget_pane_t5_ParamLimits

0xe7ad,	// (0x00044cdb) cell_ai5_widget_pane_t5

0x7ccd,	// (0x0003e1fb) cell_ai5_widget_pane_t6_ParamLimits

0x7ccd,	// (0x0003e1fb) cell_ai5_widget_pane_t6

0x7cdf,	// (0x0003e20d) cell_ai5_widget_pane_t7_ParamLimits

0x7cdf,	// (0x0003e20d) cell_ai5_widget_pane_t7

0xe7cd,	// (0x00044cfb) cell_ai5_widget_pane_t8_ParamLimits

0xe7cd,	// (0x00044cfb) cell_ai5_widget_pane_t8

0x000b,

0xfe39,	// (0x00046367) cell_ai5_widget_pane_t_ParamLimits

0xfe39,	// (0x00046367) cell_ai5_widget_pane_t

0xe851,	// (0x00044d7f) grid_ai5_widget_pane

0xbe15,	// (0x00042343) highlight_cell_ai5_widget_pane_ParamLimits

0xbe15,	// (0x00042343) highlight_cell_ai5_widget_pane

0xe85f,	// (0x00044d8d) ai5_sk_left_pane

0xe869,	// (0x00044d97) ai5_sk_middle_pane

0xe873,	// (0x00044da1) ai5_sk_right_pane

0x7dae,	// (0x0003e2dc) bg_ai5_widget_pane_g1_ParamLimits

0x7dae,	// (0x0003e2dc) bg_ai5_widget_pane_g1

0x7dba,	// (0x0003e2e8) bg_ai5_widget_pane_g2_ParamLimits

0x7dba,	// (0x0003e2e8) bg_ai5_widget_pane_g2

0x7dc6,	// (0x0003e2f4) bg_ai5_widget_pane_g3_ParamLimits

0x7dc6,	// (0x0003e2f4) bg_ai5_widget_pane_g3

0x7dd2,	// (0x0003e300) bg_ai5_widget_pane_g4_ParamLimits

0x7dd2,	// (0x0003e300) bg_ai5_widget_pane_g4

0x7dde,	// (0x0003e30c) bg_ai5_widget_pane_g5_ParamLimits

0x7dde,	// (0x0003e30c) bg_ai5_widget_pane_g5

0x7dea,	// (0x0003e318) bg_ai5_widget_pane_g6_ParamLimits

0x7dea,	// (0x0003e318) bg_ai5_widget_pane_g6

0x7df6,	// (0x0003e324) bg_ai5_widget_pane_g7_ParamLimits

0x7df6,	// (0x0003e324) bg_ai5_widget_pane_g7

0x7e02,	// (0x0003e330) bg_ai5_widget_pane_g8_ParamLimits

0x7e02,	// (0x0003e330) bg_ai5_widget_pane_g8

0x7e0e,	// (0x0003e33c) bg_ai5_widget_pane_g9_ParamLimits

0x7e0e,	// (0x0003e33c) bg_ai5_widget_pane_g9

0x0008,

0xfe52,	// (0x00046380) bg_ai5_widget_pane_g_ParamLimits

0xfe52,	// (0x00046380) bg_ai5_widget_pane_g

0xe8a7,	// (0x00044dd5) cell_shortcut_ai5_widget_pane_ParamLimits

0xe8a7,	// (0x00044dd5) cell_shortcut_ai5_widget_pane

0x25b4,	// (0x00038ae2) bg_cell_shortcut_ai5_widget_pane

0x7e59,	// (0x0003e387) cell_grid_ai5_widget_pane_g1

0x25b4,	// (0x00038ae2) highlight_cell_shortcut_ai5_widget_pane

0x2e19,	// (0x00039347) ai5_sk_left_pane_g1

0x7e62,	// (0x0003e390) ai5_sk_left_pane_g2

0x7e6a,	// (0x0003e398) ai5_sk_left_pane_g3

0x7e72,	// (0x0003e3a0) ai5_sk_left_pane_g4

0x0003,

0xfe65,	// (0x00046393) ai5_sk_left_pane_g

0x7e7a,	// (0x0003e3a8) ai5_sk_left_pane_t1

0x2e21,	// (0x0003934f) ai5_sk_right_pane_g1

0x7e88,	// (0x0003e3b6) ai5_sk_right_pane_g2

0x7e90,	// (0x0003e3be) ai5_sk_right_pane_g3

0x7e98,	// (0x0003e3c6) ai5_sk_right_pane_g4

0x0003,

0xfe6e,	// (0x0004639c) ai5_sk_right_pane_g

0x7ea0,	// (0x0003e3ce) ai5_sk_right_pane_t1

0x2e21,	// (0x0003934f) ai5_sk_middle_pane_g1

0x2e19,	// (0x00039347) ai5_sk_middle_pane_g2

0x2e39,	// (0x00039367) ai5_sk_middle_pane_g3

0x7e90,	// (0x0003e3be) ai5_sk_middle_pane_g4

0x7e6a,	// (0x0003e398) ai5_sk_middle_pane_g5

0x7eae,	// (0x0003e3dc) ai5_sk_middle_pane_g6

0xe8ba,	// (0x00044de8) ai5_sk_middle_pane_g7

0x0006,

0xfe77,	// (0x000463a5) ai5_sk_middle_pane_g

0xc162,	// (0x00042690) aid_touch_area_size_lc0_ParamLimits

0xc162,	// (0x00042690) aid_touch_area_size_lc0

0x1246,	// (0x00037774) cell_hwr_candidate_pane_t1_ParamLimits

0x2959,	// (0x00038e87) aid_touch_navi_pane

0xc408,	// (0x00042936) status_dt_navi_pane_ParamLimits

0xc408,	// (0x00042936) status_dt_navi_pane

0xc420,	// (0x0004294e) status_dt_sta_pane_ParamLimits

0xc420,	// (0x0004294e) status_dt_sta_pane

0xe8c2,	// (0x00044df0) dt_sta_controll_pane

0xe8cf,	// (0x00044dfd) dt_sta_indi_pane

0xe8dc,	// (0x00044e0a) dt_sta_title_pane

0xb906,	// (0x00041e34) bg_dt_sta_indi_pane_ParamLimits

0xb906,	// (0x00041e34) bg_dt_sta_indi_pane

0xe8ee,	// (0x00044e1c) dt_sta_battery_pane

0xe8f6,	// (0x00044e24) dt_sta_indi_pane_g1

0xe8ff,	// (0x00044e2d) dt_sta_indi_pane_g2

0xe908,	// (0x00044e36) dt_sta_indi_pane_g3

0x0002,

0xfe86,	// (0x000463b4) dt_sta_indi_pane_g

0xe911,	// (0x00044e3f) dt_sta_signal_pane

0xbe15,	// (0x00042343) bg_dt_sta_title_pane_ParamLimits

0xbe15,	// (0x00042343) bg_dt_sta_title_pane

0xe91a,	// (0x00044e48) dt_sta_title_pane_g1

0xe922,	// (0x00044e50) dt_sta_title_pane_t1_ParamLimits

0xe922,	// (0x00044e50) dt_sta_title_pane_t1

0xb763,	// (0x00041c91) bg_dt_sta_control_pane

0xe937,	// (0x00044e65) dt_sta_controll_pane_g1

0xe940,	// (0x00044e6e) bg_dt_sta_title_pane_g1

0xe949,	// (0x00044e77) bg_dt_sta_title_pane_g2

0xe952,	// (0x00044e80) bg_dt_sta_title_pane_g3

0x0002,

0xfe8d,	// (0x000463bb) bg_dt_sta_title_pane_g

0x545c,	// (0x0003b98a) bg_dt_sta_indi_pane_g1

0x7f5c,	// (0x0003e48a) dt_sta_signal_pane_g1

0x7f64,	// (0x0003e492) dt_sta_signal_pane_g2

0x0001,

0xfe94,	// (0x000463c2) dt_sta_signal_pane_g

0x7f6c,	// (0x0003e49a) dt_sta_battery_pane_g1

0x7f75,	// (0x0003e4a3) dt_sta_battery_pane_t1

0x545c,	// (0x0003b98a) bg_dt_sta_control_pane_g1

0xf3e7,	// (0x00045915) fep_china_uni_eep_pane

0xf3ef,	// (0x0004591d) fep_china_uni_entry_pane_ParamLimits

0xf3ff,	// (0x0004592d) popup_fep_china_uni_window_g1_ParamLimits

0xf40f,	// (0x0004593d) popup_fep_china_uni_window_g2_ParamLimits

0xf40f,	// (0x0004593d) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x00045c26) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x00045c26) popup_fep_china_uni_window_g

0x7f84,	// (0x0003e4b2) fep_china_uni_eep_pane_g1

0x7f8c,	// (0x0003e4ba) fep_china_uni_eep_pane_t1

0x79ad,	// (0x0003dedb) aid_touch_area_size_smil_player

0x2aad,	// (0x00038fdb) lc0_clock_pane

0x2ca4,	// (0x000391d2) status_pane_g5_ParamLimits

0x2ca4,	// (0x000391d2) status_pane_g5

0xa66d,	// (0x00040b9b) popup_keymap_window

0x2c6a,	// (0x00039198) status_icon_pane

0xe688,	// (0x00044bb6) cell_ai5_widget_pane_g3_ParamLimits

0xe6a2,	// (0x00044bd0) cell_ai5_widget_pane_g4_ParamLimits

0xe6b2,	// (0x00044be0) cell_ai5_widget_pane_g5_ParamLimits

0xe6da,	// (0x00044c08) cell_ai5_widget_pane_g8_ParamLimits

0xe6da,	// (0x00044c08) cell_ai5_widget_pane_g8

0xe6ee,	// (0x00044c1c) cell_ai5_widget_pane_g9_ParamLimits

0xe6ee,	// (0x00044c1c) cell_ai5_widget_pane_g9

0xe702,	// (0x00044c30) cell_ai5_widget_pane_g10_ParamLimits

0xe702,	// (0x00044c30) cell_ai5_widget_pane_g10

0x7f9b,	// (0x0003e4c9) status_icon_pane_g1

0xb763,	// (0x00041c91) bg_popup_sub_pane_cp13

0x7fa3,	// (0x0003e4d1) popup_keymap_window_t1

0x288c,	// (0x00038dba) control_pane_g6_ParamLimits

0x288c,	// (0x00038dba) control_pane_g6

0x2899,	// (0x00038dc7) control_pane_g7_ParamLimits

0x2899,	// (0x00038dc7) control_pane_g7

0x28a6,	// (0x00038dd4) control_pane_g8_ParamLimits

0x28a6,	// (0x00038dd4) control_pane_g8

0xe8c2,	// (0x00044df0) dt_sta_controll_pane_ParamLimits

0xe8cf,	// (0x00044dfd) dt_sta_indi_pane_ParamLimits

0xe8dc,	// (0x00044e0a) dt_sta_title_pane_ParamLimits

0xbd57,	// (0x00042285) aid_size_touch_scroll_bar_cale

0xedd4,	// (0x00045302) popup_discreet_window_ParamLimits

0xedd4,	// (0x00045302) popup_discreet_window

0x9510,	// (0x0003fa3e) popup_sk_window

0x3477,	// (0x000399a5) bg_popup_sub_pane_cp28_ParamLimits

0x3477,	// (0x000399a5) bg_popup_sub_pane_cp28

0x7fb1,	// (0x0003e4df) popup_discreet_window_g1_ParamLimits

0x7fb1,	// (0x0003e4df) popup_discreet_window_g1

0x7fd1,	// (0x0003e4ff) popup_discreet_window_t1_ParamLimits

0x7fd1,	// (0x0003e4ff) popup_discreet_window_t1

0x7fef,	// (0x0003e51d) popup_discreet_window_t2_ParamLimits

0x7fef,	// (0x0003e51d) popup_discreet_window_t2

0x0002,

0xfe99,	// (0x000463c7) popup_discreet_window_t_ParamLimits

0xfe99,	// (0x000463c7) popup_discreet_window_t

0x1dc3,	// (0x000382f1) popup_sk_window_g1

0x1dcd,	// (0x000382fb) popup_sk_window_g2

0x0001,

0xfea0,	// (0x000463ce) popup_sk_window_g

0x1dd5,	// (0x00038303) popup_sk_window_t1

0x1de3,	// (0x00038311) popup_sk_window_t1_copy1

0xe674,	// (0x00044ba2) cell_ai5_widget_pane_g2_ParamLimits

0xe7df,	// (0x00044d0d) cell_ai5_widget_pane_t9_ParamLimits

0xe7df,	// (0x00044d0d) cell_ai5_widget_pane_t9

0xb763,	// (0x00041c91) main_fep_fshwr2_pane

0xb567,	// (0x00041a95) aid_fshwr2_btn_pane

0xb57b,	// (0x00041aa9) aid_fshwr2_syb_pane

0xb58f,	// (0x00041abd) aid_fshwr2_txt_pane

0xb59f,	// (0x00041acd) fshwr2_func_candi_pane

0xb5c1,	// (0x00041aef) fshwr2_hwr_syb_pane

0xb5e5,	// (0x00041b13) fshwr2_icf_pane

0xecf7,	// (0x00045225) fshwr2_icf_bg_pane

0x1e8f,	// (0x000383bd) fshwr2_icf_pane_t1_ParamLimits

0x1e8f,	// (0x000383bd) fshwr2_icf_pane_t1

0xf28c,	// (0x000457ba) fshwr2_func_candi_pane_g1

0xe95b,	// (0x00044e89) fshwr2_func_candi_row_pane_ParamLimits

0xe95b,	// (0x00044e89) fshwr2_func_candi_row_pane

0xb615,	// (0x00041b43) cell_fshwr2_syb_pane_ParamLimits

0xb615,	// (0x00041b43) cell_fshwr2_syb_pane

0x1ec8,	// (0x000383f6) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1ec8,	// (0x000383f6) fshwr2_hwr_syb_pane_g1

0xecf7,	// (0x00045225) bg_popup_call_pane_cp01

0xb63d,	// (0x00041b6b) fshwr2_func_candi_cell_pane_ParamLimits

0xb63d,	// (0x00041b6b) fshwr2_func_candi_cell_pane

0x3257,	// (0x00039785) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x3257,	// (0x00039785) fshwr2_func_candi_cell_bg_pane

0xb688,	// (0x00041bb6) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb688,	// (0x00041bb6) fshwr2_func_candi_cell_pane_g1

0xb6bf,	// (0x00041bed) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xb6bf,	// (0x00041bed) fshwr2_func_candi_cell_pane_t1

0xecf7,	// (0x00045225) bg_button_pane_cp08

0x28db,	// (0x00038e09) cell_fshwr2_syb_bg_pane

0xb6da,	// (0x00041c08) cell_fshwr2_syb_bg_pane_g1

0xb6ee,	// (0x00041c1c) cell_fshwr2_syb_bg_pane_t1

0xbe15,	// (0x00042343) main_tmo_pane

0xc753,	// (0x00042c81) uni_indicator_pane_g1_ParamLimits

0xc769,	// (0x00042c97) uni_indicator_pane_g2_ParamLimits

0xc77f,	// (0x00042cad) uni_indicator_pane_g3_ParamLimits

0xc792,	// (0x00042cc0) uni_indicator_pane_g4_ParamLimits

0xc792,	// (0x00042cc0) uni_indicator_pane_g4

0x3fee,	// (0x0003a51c) uni_indicator_pane_g5_ParamLimits

0x3fee,	// (0x0003a51c) uni_indicator_pane_g5

0x3fee,	// (0x0003a51c) uni_indicator_pane_g6_ParamLimits

0x3fee,	// (0x0003a51c) uni_indicator_pane_g6

0xf8f7,	// (0x00045e25) uni_indicator_pane_g_ParamLimits

0xd218,	// (0x00043746) popup_tmo_note_window_ParamLimits

0xd218,	// (0x00043746) popup_tmo_note_window

0x1615,	// (0x00037b43) fshwr2_bg_pane

0xb6b0,	// (0x00041bde) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xb6b0,	// (0x00041bde) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea5,	// (0x000463d3) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea5,	// (0x000463d3) fshwr2_func_candi_cell_pane_g

0x11ff,	// (0x0003772d) bg_popup_window_pane_cp01

0x1f8f,	// (0x000384bd) bg_popup_window_pane_g1_cp01

0x8064,	// (0x0003e592) bg_popup_window_pane_cp22_ParamLimits

0x8064,	// (0x0003e592) bg_popup_window_pane_cp22

0x8072,	// (0x0003e5a0) listscroll_tmo_link_pane_ParamLimits

0x8072,	// (0x0003e5a0) listscroll_tmo_link_pane

0x80b2,	// (0x0003e5e0) popup_tmo_note_window_g1_ParamLimits

0x80b2,	// (0x0003e5e0) popup_tmo_note_window_g1

0x80bf,	// (0x0003e5ed) tmo_note_info_pane_ParamLimits

0x80bf,	// (0x0003e5ed) tmo_note_info_pane

0xe982,	// (0x00044eb0) list_tmo_note_info_pane_g1_ParamLimits

0xe982,	// (0x00044eb0) list_tmo_note_info_pane_g1

0x80f0,	// (0x0003e61e) list_tmo_note_info_pane_g2_ParamLimits

0x80f0,	// (0x0003e61e) list_tmo_note_info_pane_g2

0x0001,

0xfeaa,	// (0x000463d8) list_tmo_note_info_pane_g_ParamLimits

0xfeaa,	// (0x000463d8) list_tmo_note_info_pane_g

0x810c,	// (0x0003e63a) list_tmo_note_info_text_pane_ParamLimits

0x810c,	// (0x0003e63a) list_tmo_note_info_text_pane

0x8191,	// (0x0003e6bf) list_tmo_link_pane

0x819e,	// (0x0003e6cc) scroll_pane_cp20

0x81ab,	// (0x0003e6d9) list_single_tmo_link_pane_ParamLimits

0x81ab,	// (0x0003e6d9) list_single_tmo_link_pane

0x81bb,	// (0x0003e6e9) list_single_tmo_link_pane_t1

0x81c9,	// (0x0003e6f7) list_tmo_note_info_text_pane_t1_ParamLimits

0x81c9,	// (0x0003e6f7) list_tmo_note_info_text_pane_t1

0x9f37,	// (0x00040465) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9f37,	// (0x00040465) aid_size_touch_scroll_bar_cp01

0x9e79,	// (0x000403a7) aid_size_touch_slider_marker

0x9500,	// (0x0003fa2e) popup_settings_window_ParamLimits

0x9500,	// (0x0003fa2e) popup_settings_window

0xd429,	// (0x00043957) popup_candi_list_indi_window

0x2959,	// (0x00038e87) aid_touch_navi_pane_ParamLimits

0x156e,	// (0x00037a9c) rs_clock_indi_pane

0x1577,	// (0x00037aa5) sctrl_sk_bottom_pane_ParamLimits

0x1588,	// (0x00037ab6) sctrl_sk_top_pane_ParamLimits

0x1685,	// (0x00037bb3) popup_fep_tooltip_window

0xe640,	// (0x00044b6e) aid_size_cell_widget_grid_ParamLimits

0xe65f,	// (0x00044b8d) cell_ai5_widget_pane_g1_ParamLimits

0xe65f,	// (0x00044b8d) cell_ai5_widget_pane_g1

0xe6c2,	// (0x00044bf0) cell_ai5_widget_pane_g6_ParamLimits

0xe6ce,	// (0x00044bfc) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe1e,	// (0x0004634c) cell_ai5_widget_pane_g_ParamLimits

0xfe1e,	// (0x0004634c) cell_ai5_widget_pane_g

0xe80e,	// (0x00044d3c) cell_ai5_widget_pane_t10_ParamLimits

0xe80e,	// (0x00044d3c) cell_ai5_widget_pane_t10

0xe851,	// (0x00044d7f) grid_ai5_widget_pane_ParamLimits

0xe87d,	// (0x00044dab) cell_contacts_ai5_widget_pane_ParamLimits

0xe87d,	// (0x00044dab) cell_contacts_ai5_widget_pane

0x8004,	// (0x0003e532) popup_discreet_window_t3_ParamLimits

0x8004,	// (0x0003e532) popup_discreet_window_t3

0xb601,	// (0x00041b2f) popup_fshwr2_char_preview_window_ParamLimits

0xb601,	// (0x00041b2f) popup_fshwr2_char_preview_window

0xe999,	// (0x00044ec7) tmo_note_info_pane_t1

0xe9ae,	// (0x00044edc) tmo_note_info_pane_t2

0xe9c7,	// (0x00044ef5) tmo_note_info_pane_t3

0x816d,	// (0x0003e69b) tmo_note_info_pane_t4

0x817f,	// (0x0003e6ad) tmo_note_info_pane_t5

0x0004,

0xfeaf,	// (0x000463dd) tmo_note_info_pane_t

0x8191,	// (0x0003e6bf) list_tmo_link_pane_ParamLimits

0x819e,	// (0x0003e6cc) scroll_pane_cp20_ParamLimits

0xecf7,	// (0x00045225) bg_popup_fep_char_preview_window_cp01

0x81e2,	// (0x0003e710) popup_fshwr2_char_preview_window_t1

0x81f0,	// (0x0003e71e) popup_candi_list_indi_window_g1

0x81f9,	// (0x0003e727) bg_cell_contacts_ai5_widget_pane

0xe9dc,	// (0x00044f0a) cell_contacts_ai5_widget_pane_g1

0x821a,	// (0x0003e748) cell_contacts_ai5_widget_pane_g2

0x8226,	// (0x0003e754) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeba,	// (0x000463e8) cell_contacts_ai5_widget_pane_g

0x8232,	// (0x0003e760) cell_contacts_ai5_widget_pane_t1

0xbe15,	// (0x00042343) highlight_cell_shortcut_ai5_widget_pane_cp01

0x82a9,	// (0x0003e7d7) settings_container_pane

0x25b4,	// (0x00038ae2) listscroll_set_pane_copy1

0x4b8d,	// (0x0003b0bb) scroll_pane_cp121_copy1

0x82b5,	// (0x0003e7e3) set_content_pane_copy1

0x82bd,	// (0x0003e7eb) aid_height_set_list_copy1_ParamLimits

0x82bd,	// (0x0003e7eb) aid_height_set_list_copy1

0x41ee,	// (0x0003a71c) aid_size_parent_copy1_ParamLimits

0x41ee,	// (0x0003a71c) aid_size_parent_copy1

0x82c9,	// (0x0003e7f7) button_value_adjust_pane_cp6_copy1_ParamLimits

0x82c9,	// (0x0003e7f7) button_value_adjust_pane_cp6_copy1

0x28db,	// (0x00038e09) list_highlight_pane_cp2_copy1_ParamLimits

0x28db,	// (0x00038e09) list_highlight_pane_cp2_copy1

0x82dd,	// (0x0003e80b) list_set_pane_copy1_ParamLimits

0x82dd,	// (0x0003e80b) list_set_pane_copy1

0x8244,	// (0x0003e772) main_pane_set_t1_copy1_ParamLimits

0x8244,	// (0x0003e772) main_pane_set_t1_copy1

0x827e,	// (0x0003e7ac) main_pane_set_t2_copy1_ParamLimits

0x827e,	// (0x0003e7ac) main_pane_set_t2_copy1

0x839e,	// (0x0003e8cc) main_pane_set_t3_copy1

0x83ac,	// (0x0003e8da) main_pane_set_t4_copy1

0x829d,	// (0x0003e7cb) set_content_pane_g1_copy1_ParamLimits

0x829d,	// (0x0003e7cb) set_content_pane_g1_copy1

0x83ba,	// (0x0003e8e8) setting_code_pane_copy1

0x83c2,	// (0x0003e8f0) setting_slider_graphic_pane_copy1

0x83c2,	// (0x0003e8f0) setting_slider_pane_copy1

0x83ca,	// (0x0003e8f8) setting_text_pane_copy1

0x83ca,	// (0x0003e8f8) setting_volume_pane_copy1

0x83ba,	// (0x0003e8e8) settings_code_pane_cp2_copy1

0x83d2,	// (0x0003e900) settings_code_pane_cp_copy1_ParamLimits

0x83d2,	// (0x0003e900) settings_code_pane_cp_copy1

0x1f98,	// (0x000384c6) volume_set_pane_copy1

0x83e6,	// (0x0003e914) volume_set_pane_g10_copy1

0x83f2,	// (0x0003e920) volume_set_pane_g1_copy1

0x83fc,	// (0x0003e92a) volume_set_pane_g2_copy1

0x8406,	// (0x0003e934) volume_set_pane_g3_copy1

0x8410,	// (0x0003e93e) volume_set_pane_g4_copy1

0x841a,	// (0x0003e948) volume_set_pane_g5_copy1

0x8424,	// (0x0003e952) volume_set_pane_g6_copy1

0x842e,	// (0x0003e95c) volume_set_pane_g7_copy1

0x8438,	// (0x0003e966) volume_set_pane_g8_copy1

0x8442,	// (0x0003e970) volume_set_pane_g9_copy1

0xb7d3,	// (0x00041d01) bg_set_opt_pane_cp_copy1_ParamLimits

0xb7d3,	// (0x00041d01) bg_set_opt_pane_cp_copy1

0x1fa4,	// (0x000384d2) setting_slider_pane_t1_copy1_ParamLimits

0x1fa4,	// (0x000384d2) setting_slider_pane_t1_copy1

0x1fc3,	// (0x000384f1) setting_slider_pane_t2_copy1_ParamLimits

0x1fc3,	// (0x000384f1) setting_slider_pane_t2_copy1

0x1fdd,	// (0x0003850b) setting_slider_pane_t3_copy1_ParamLimits

0x1fdd,	// (0x0003850b) setting_slider_pane_t3_copy1

0x1ff5,	// (0x00038523) slider_set_pane_copy1_ParamLimits

0x1ff5,	// (0x00038523) slider_set_pane_copy1

0xbe6d,	// (0x0004239b) set_opt_bg_pane_g1_copy2

0xbe75,	// (0x000423a3) set_opt_bg_pane_g2_copy2

0x844e,	// (0x0003e97c) set_opt_bg_pane_g3_copy2

0xbe85,	// (0x000423b3) set_opt_bg_pane_g4_copy2

0xbe8d,	// (0x000423bb) set_opt_bg_pane_g5_copy2

0xbe95,	// (0x000423c3) set_opt_bg_pane_g6_copy2

0x8458,	// (0x0003e986) set_opt_bg_pane_g7_copy2

0x8462,	// (0x0003e990) set_opt_bg_pane_g8_copy2

0x846c,	// (0x0003e99a) set_opt_bg_pane_g9_copy2

0x200b,	// (0x00038539) aid_size_touch_slider_mark_copy1_ParamLimits

0x200b,	// (0x00038539) aid_size_touch_slider_mark_copy1

0x8476,	// (0x0003e9a4) slider_set_pane_g1_copy1

0x201f,	// (0x0003854d) slider_set_pane_g2_copy1

0x0d42,	// (0x00037270) slider_set_pane_g3_copy1_ParamLimits

0x0d42,	// (0x00037270) slider_set_pane_g3_copy1

0x0d56,	// (0x00037284) slider_set_pane_g4_copy1_ParamLimits

0x0d56,	// (0x00037284) slider_set_pane_g4_copy1

0x0d6e,	// (0x0003729c) slider_set_pane_g5_copy1_ParamLimits

0x0d6e,	// (0x0003729c) slider_set_pane_g5_copy1

0x0d42,	// (0x00037270) slider_set_pane_g6_copy1_ParamLimits

0x0d42,	// (0x00037270) slider_set_pane_g6_copy1

0x2027,	// (0x00038555) slider_set_pane_g7_copy1_ParamLimits

0x2027,	// (0x00038555) slider_set_pane_g7_copy1

0xb777,	// (0x00041ca5) bg_set_opt_pane_cp2_copy1

0x847f,	// (0x0003e9ad) setting_slider_graphic_pane_g1_copy1

0x8488,	// (0x0003e9b6) setting_slider_graphic_pane_t1_copy1

0x8498,	// (0x0003e9c6) setting_slider_graphic_pane_t2_copy1

0x84a8,	// (0x0003e9d6) slider_set_pane_cp_copy1

0x84b8,	// (0x0003e9e6) input_focus_pane_cp1_copy1

0x84c1,	// (0x0003e9ef) list_set_text_pane_copy1

0x84c9,	// (0x0003e9f7) setting_text_pane_g1_copy1

0xe9f1,	// (0x00044f1f) set_text_pane_t1_copy1

0x84b8,	// (0x0003e9e6) input_focus_pane_cp2_copy1

0x84c9,	// (0x0003e9f7) setting_code_pane_g1_copy1

0x84d2,	// (0x0003ea00) setting_code_pane_t1_copy1

0x4992,	// (0x0003aec0) list_set_graphic_pane_copy1

0xb777,	// (0x00041ca5) bg_set_opt_pane_cp4_copy1

0x22a3,	// (0x000387d1) list_set_graphic_pane_g1_copy1_ParamLimits

0x22a3,	// (0x000387d1) list_set_graphic_pane_g1_copy1

0x84e0,	// (0x0003ea0e) list_set_graphic_pane_g2_copy1

0x22bb,	// (0x000387e9) list_set_graphic_pane_t1_copy1_ParamLimits

0x22bb,	// (0x000387e9) list_set_graphic_pane_t1_copy1

0x545c,	// (0x0003b98a) rs_clock_indi_pane_g1

0x84e8,	// (0x0003ea16) rs_clock_indi_pane_t1

0x84f6,	// (0x0003ea24) rs_indi_pane

0x84fe,	// (0x0003ea2c) rs_indi_pane_g1

0x8507,	// (0x0003ea35) rs_indi_pane_g2

0x81f0,	// (0x0003e71e) rs_indi_pane_g3

0x0002,

0xfec1,	// (0x000463ef) rs_indi_pane_g

0x25b4,	// (0x00038ae2) bg_popup_preview_window_pane_cp03

0x8510,	// (0x0003ea3e) popup_fep_tooltip_window_t1

0x6139,	// (0x0003c667) popup_note2_window_g2_ParamLimits

0x6139,	// (0x0003c667) popup_note2_window_g2

0x0001,

0xfc4e,	// (0x0004617c) popup_note2_window_g_ParamLimits

0xfc4e,	// (0x0004617c) popup_note2_window_g

0x6641,	// (0x0003cb6f) bg_popup_sub_pane_cp11_ParamLimits

0x664e,	// (0x0003cb7c) cell_ai3_links_pane_g1_ParamLimits

0x6665,	// (0x0003cb93) cell_ai3_links_pane_t1

0xe9f1,	// (0x00044f1f) set_text_pane_t1_copy1_ParamLimits

0x24b6,	// (0x000389e4) cell_graphic_popup_pane_cp2_ParamLimits

0x24b6,	// (0x000389e4) cell_graphic_popup_pane_cp2

0x851e,	// (0x0003ea4c) cell_graphic_popup_pane_g1_cp2

0xbb6a,	// (0x00042098) cell_graphic_popup_pane_g2_cp2

0x8526,	// (0x0003ea54) cell_graphic_popup_pane_g3_cp2

0x852e,	// (0x0003ea5c) cell_graphic_popup_pane_t2_cp2

0xbb7b,	// (0x000420a9) grid_highlight_pane_cp3_cp2

0xc129,	// (0x00042657) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xbe15,	// (0x00042343) main_tmo_pane_ParamLimits

0xd20c,	// (0x0004373a) popup_tmo_big_image_note_window

0xe64e,	// (0x00044b7c) cell_ai5_widget_list_pane

0xe656,	// (0x00044b84) cell_ai5_widget_lrg_icon_pane

0xe999,	// (0x00044ec7) tmo_note_info_pane_t1_ParamLimits

0xe9ae,	// (0x00044edc) tmo_note_info_pane_t2_ParamLimits

0xe9c7,	// (0x00044ef5) tmo_note_info_pane_t3_ParamLimits

0x816d,	// (0x0003e69b) tmo_note_info_pane_t4_ParamLimits

0x817f,	// (0x0003e6ad) tmo_note_info_pane_t5_ParamLimits

0xfeaf,	// (0x000463dd) tmo_note_info_pane_t_ParamLimits

0x82a9,	// (0x0003e7d7) settings_container_pane_ParamLimits

0x84b0,	// (0x0003e9de) indicator_popup_pane_cp5

0x84b0,	// (0x0003e9de) indicator_popup_pane_cp6

0x4992,	// (0x0003aec0) list_set_graphic_pane_copy1_ParamLimits

0xb763,	// (0x00041c91) bg_popup_window_pane_cp23

0x853c,	// (0x0003ea6a) popup_tmo_big_image_note_window_g1

0x8548,	// (0x0003ea76) popup_tmo_big_image_note_window_t1

0x8558,	// (0x0003ea86) popup_tmo_big_image_note_window_t2

0x8568,	// (0x0003ea96) popup_tmo_big_image_note_window_t3

0x0002,

0xfec8,	// (0x000463f6) popup_tmo_big_image_note_window_t

0x545c,	// (0x0003b98a) cell_ai5_widget_lrg_icon_pane_g1

0xea0b,	// (0x00044f39) cell_ai5_widget_lrg_icon_pane_t1

0xea19,	// (0x00044f47) cell_ai5_widget_list_row_pane_ParamLimits

0xea19,	// (0x00044f47) cell_ai5_widget_list_row_pane

0xea31,	// (0x00044f5f) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xea31,	// (0x00044f5f) cell_ai5_widget_list_row_pane_g1

0xea3e,	// (0x00044f6c) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xea3e,	// (0x00044f6c) cell_ai5_widget_list_row_pane_t1

0xea69,	// (0x00044f97) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xea69,	// (0x00044f97) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecf,	// (0x000463fd) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecf,	// (0x000463fd) cell_ai5_widget_list_row_pane_t

0xecf7,	// (0x00045225) main_fep_vtchi_ss_pane

0x8626,	// (0x0003eb54) popup_fep_char_pre_window

0x862e,	// (0x0003eb5c) popup_fep_ituss_window

0xeabb,	// (0x00044fe9) popup_fep_vkbss_window

0x28db,	// (0x00038e09) grid_vkbss_keypad_pane_ParamLimits

0x28db,	// (0x00038e09) grid_vkbss_keypad_pane

0x869c,	// (0x0003ebca) ituss_keypad_pane

0x2047,	// (0x00038575) aid_vkbss_key_offset_ParamLimits

0x2047,	// (0x00038575) aid_vkbss_key_offset

0xb704,	// (0x00041c32) cell_vkbss_key_pane_ParamLimits

0xb704,	// (0x00041c32) cell_vkbss_key_pane

0x86a8,	// (0x0003ebd6) bg_cell_vkbss_key_g1_ParamLimits

0x86a8,	// (0x0003ebd6) bg_cell_vkbss_key_g1

0xeaca,	// (0x00044ff8) cell_vkbss_key_3p_pane_ParamLimits

0xeaca,	// (0x00044ff8) cell_vkbss_key_3p_pane

0xeb00,	// (0x0004502e) cell_vkbss_key_g1_ParamLimits

0xeb00,	// (0x0004502e) cell_vkbss_key_g1

0xeb36,	// (0x00045064) cell_vkbss_key_t1_ParamLimits

0xeb36,	// (0x00045064) cell_vkbss_key_t1

0x20b5,	// (0x000385e3) cell_ituss_key_pane_ParamLimits

0x20b5,	// (0x000385e3) cell_ituss_key_pane

0x877c,	// (0x0003ecaa) bg_cell_ituss_key_g1_ParamLimits

0x877c,	// (0x0003ecaa) bg_cell_ituss_key_g1

0x8788,	// (0x0003ecb6) cell_ituss_key_pane_g1_ParamLimits

0x8788,	// (0x0003ecb6) cell_ituss_key_pane_g1

0x20c6,	// (0x000385f4) cell_ituss_key_pane_g2_ParamLimits

0x20c6,	// (0x000385f4) cell_ituss_key_pane_g2

0x0005,

0xfed6,	// (0x00046404) cell_ituss_key_pane_g_ParamLimits

0xfed6,	// (0x00046404) cell_ituss_key_pane_g

0x214a,	// (0x00038678) cell_ituss_key_t1_ParamLimits

0x214a,	// (0x00038678) cell_ituss_key_t1

0x2184,	// (0x000386b2) cell_ituss_key_t2_ParamLimits

0x2184,	// (0x000386b2) cell_ituss_key_t2

0x21b6,	// (0x000386e4) cell_ituss_key_t3_ParamLimits

0x21b6,	// (0x000386e4) cell_ituss_key_t3

0x21e7,	// (0x00038715) cell_ituss_key_t4_ParamLimits

0x21e7,	// (0x00038715) cell_ituss_key_t4

0x0004,

0xfee3,	// (0x00046411) cell_ituss_key_t_ParamLimits

0xfee3,	// (0x00046411) cell_ituss_key_t

0xeb92,	// (0x000450c0) cell_vkbss_key_3p_pane_g1

0xeb9a,	// (0x000450c8) cell_vkbss_key_3p_pane_g2

0xeba2,	// (0x000450d0) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeee,	// (0x0004641c) cell_vkbss_key_3p_pane_g

0x25b4,	// (0x00038ae2) bg_popup_fep_char_preview_window_cp02

0x87c6,	// (0x0003ecf4) popup_fep_char_pre_window_t1

0xe62d,	// (0x00044b5b) main_ai5_sk_pane

0x81f9,	// (0x0003e727) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe9dc,	// (0x00044f0a) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x821a,	// (0x0003e748) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8226,	// (0x0003e754) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeba,	// (0x000463e8) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8232,	// (0x0003e760) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xbe15,	// (0x00042343) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xebaa,	// (0x000450d8) main_ai5_sk_pane_g1

0x32af,	// (0x000397dd) popup_query_code_window_g1

0xeaac,	// (0x00044fda) popup_fep_vkb_icf_pane

0x8673,	// (0x0003eba1) popup_fep_vtchi_icf_pane

0x87dd,	// (0x0003ed0b) bg_icf_pane

0x87dd,	// (0x0003ed0b) list_vkb_icf_pane

0x87e9,	// (0x0003ed17) bg_icf_pane_cp01

0x87fc,	// (0x0003ed2a) vtchi_icf_list_pane

0xebff,	// (0x0004512d) list_vkb_icf_pane_t1_ParamLimits

0xebff,	// (0x0004512d) list_vkb_icf_pane_t1

0x8875,	// (0x0003eda3) vtchi_icf_list_pane_t1_ParamLimits

0x8875,	// (0x0003eda3) vtchi_icf_list_pane_t1

0x862e,	// (0x0003eb5c) popup_fep_ituss_window_ParamLimits

0x8673,	// (0x0003eba1) popup_fep_vtchi_icf_pane_ParamLimits

0x869c,	// (0x0003ebca) ituss_keypad_pane_ParamLimits

0x203d,	// (0x0003856b) ituss_sks_pane

0x87dd,	// (0x0003ed0b) bg_icf_pane_ParamLimits

0xea91,	// (0x00044fbf) icf_edit_indi_pane_ParamLimits

0xea91,	// (0x00044fbf) icf_edit_indi_pane

0x87dd,	// (0x0003ed0b) list_vkb_icf_pane_ParamLimits

0x87e9,	// (0x0003ed17) bg_icf_pane_cp01_ParamLimits

0x8619,	// (0x0003eb47) icf_edit_indi_pane_cp01_ParamLimits

0x8619,	// (0x0003eb47) icf_edit_indi_pane_cp01

0x87fc,	// (0x0003ed2a) vtchi_query_pane

0x797d,	// (0x0003deab) icf_edit_indi_pane_g1_ParamLimits

0x797d,	// (0x0003deab) icf_edit_indi_pane_g1

0xec16,	// (0x00045144) icf_edit_indi_pane_g2_ParamLimits

0xec16,	// (0x00045144) icf_edit_indi_pane_g2

0x0001,

0xff19,	// (0x00046447) icf_edit_indi_pane_g_ParamLimits

0xff19,	// (0x00046447) icf_edit_indi_pane_g

0xec2a,	// (0x00045158) icf_edit_indi_pane_t1

0x888e,	// (0x0003edbc) bg_input_focus_pane_cp042

0xbd4e,	// (0x0004227c) vtchi_button_pane

0x8897,	// (0x0003edc5) vtchi_query_pane_t1

0x88a5,	// (0x0003edd3) vtchi_query_pane_t2

0x88b3,	// (0x0003ede1) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x00046436) vtchi_query_pane_t

0xecf7,	// (0x00045225) bg_button_pane_cp13

0x88c1,	// (0x0003edef) vtchi_button_pane_g1

0x222a,	// (0x00038758) ituss_sks_pane_g1

0x2235,	// (0x00038763) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x0004643d) ituss_sks_pane_g

0x88c9,	// (0x0003edf7) ituss_sks_pane_t1

0x88d7,	// (0x0003ee05) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x00046442) ituss_sks_pane_t

0x4f30,	// (0x0003b45e) indicator_nsta_pane_cp_g1

0x4f39,	// (0x0003b467) indicator_nsta_pane_cp_g2

0x4f41,	// (0x0003b46f) indicator_nsta_pane_cp_g3

0x4f49,	// (0x0003b477) indicator_nsta_pane_cp_g4

0x4f39,	// (0x0003b467) indicator_nsta_pane_cp_g5

0x4f41,	// (0x0003b46f) indicator_nsta_pane_cp_g6

0x0005,

0xfa8c,	// (0x00045fba) indicator_nsta_pane_cp_g

0xe435,	// (0x00044963) cell_graphic2_pane_t2_ParamLimits

0xe435,	// (0x00044963) cell_graphic2_pane_t2

0x0001,

0xfda5,	// (0x000462d3) cell_graphic2_pane_t_ParamLimits

0xfda5,	// (0x000462d3) cell_graphic2_pane_t

0xe46d,	// (0x0004499b) cell_graphic2_control_pane_t1

0xa1b1,	// (0x000406df) signal_pane_g3_ParamLimits

0xa1b1,	// (0x000406df) signal_pane_g3

0xa1c5,	// (0x000406f3) signal_pane_g4_ParamLimits

0xa1c5,	// (0x000406f3) signal_pane_g4

0xea7b,	// (0x00044fa9) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xea7b,	// (0x00044fa9) cell_ai5_widget_list_row_pane_t3

0x879c,	// (0x0003ecca) cell_ituss_key_pane_t1_ParamLimits

0x879c,	// (0x0003ecca) cell_ituss_key_pane_t1

0x2f16,	// (0x00039444) form_field_data_wide_pane_vc_t2_ParamLimits

0x2f16,	// (0x00039444) form_field_data_wide_pane_vc_t2

0x2f2a,	// (0x00039458) form_field_data_wide_pane_vc_t3_ParamLimits

0x2f2a,	// (0x00039458) form_field_data_wide_pane_vc_t3

0x0002,

0xf7df,	// (0x00045d0d) form_field_data_wide_pane_vc_t_ParamLimits

0xf7df,	// (0x00045d0d) form_field_data_wide_pane_vc_t

0x4bcd,	// (0x0003b0fb) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4bcd,	// (0x0003b0fb) form_field_slider_wide_pane_vc_t3

0x4ca3,	// (0x0003b1d1) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4ca3,	// (0x0003b1d1) form_field_popup_wide_pane_vc_t2

0x4cba,	// (0x0003b1e8) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4cba,	// (0x0003b1e8) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7b,	// (0x00045fa9) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7b,	// (0x00045fa9) form_field_popup_wide_pane_vc_t

0xb567,	// (0x00041a95) aid_fshwr2_btn_pane_ParamLimits

0xb57b,	// (0x00041aa9) aid_fshwr2_syb_pane_ParamLimits

0xb58f,	// (0x00041abd) aid_fshwr2_txt_pane_ParamLimits

0x1615,	// (0x00037b43) fshwr2_bg_pane_ParamLimits

0xb59f,	// (0x00041acd) fshwr2_func_candi_pane_ParamLimits

0xb5c1,	// (0x00041aef) fshwr2_hwr_syb_pane_ParamLimits

0xb5e5,	// (0x00041b13) fshwr2_icf_pane_ParamLimits

0xd7bb,	// (0x00043ce9) list_double_graphic_pane_vc_g4_ParamLimits

0xd7bb,	// (0x00043ce9) list_double_graphic_pane_vc_g4

0x20e6,	// (0x00038614) cell_ituss_key_pane_g3_ParamLimits

0x20e6,	// (0x00038614) cell_ituss_key_pane_g3

0x2218,	// (0x00038746) cell_ituss_key_t5_ParamLimits

0x2218,	// (0x00038746) cell_ituss_key_t5

0xeabb,	// (0x00044fe9) popup_fep_vkbss_window_ParamLimits

0xe637,	// (0x00044b65) aid_cell_ai5_quarter

0xec2a,	// (0x00045158) icf_edit_indi_pane_t1_ParamLimits

0xb9ae,	// (0x00041edc) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xb9ae,	// (0x00041edc) aid_tch_indicator_popup_pane_cp2

0xb9c1,	// (0x00041eef) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xb9c1,	// (0x00041eef) aid_tch_query_popup_data_pane_cp2

0x3257,	// (0x00039785) aid_tch_query_popup_pane_ParamLimits

0x3257,	// (0x00039785) aid_tch_query_popup_pane

0x3257,	// (0x00039785) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x3257,	// (0x00039785) aid_tch_query_popup_data_pane_cp1

0x28db,	// (0x00038e09) cell_fshwr2_syb_bg_pane_ParamLimits

0xb6da,	// (0x00041c08) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xb6ee,	// (0x00041c1c) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xeaac,	// (0x00044fda) popup_fep_vkb_icf_pane_ParamLimits

0xb4fb,	// (0x00041a29) bg_popup_fep_char_preview_window_g10

0xe716,	// (0x00044c44) cell_ai5_widget_pane_g11_ParamLimits

0xe716,	// (0x00044c44) cell_ai5_widget_pane_g11

0xe722,	// (0x00044c50) cell_ai5_widget_pane_g12_ParamLimits

0xe722,	// (0x00044c50) cell_ai5_widget_pane_g12

0xe72e,	// (0x00044c5c) cell_ai5_widget_pane_g13_ParamLimits

0xe72e,	// (0x00044c5c) cell_ai5_widget_pane_g13

0xe82d,	// (0x00044d5b) cell_ai5_widget_pane_t11_ParamLimits

0xe82d,	// (0x00044d5b) cell_ai5_widget_pane_t11

0xe83f,	// (0x00044d6d) cell_ai5_widget_pane_t12_ParamLimits

0xe83f,	// (0x00044d6d) cell_ai5_widget_pane_t12

0x20f2,	// (0x00038620) cell_ituss_key_pane_g4_ParamLimits

0x20f2,	// (0x00038620) cell_ituss_key_pane_g4

0x210e,	// (0x0003863c) cell_ituss_key_pane_g5_ParamLimits

0x210e,	// (0x0003863c) cell_ituss_key_pane_g5

0x212a,	// (0x00038658) cell_ituss_key_pane_g6_ParamLimits

0x212a,	// (0x00038658) cell_ituss_key_pane_g6

0x2e11,	// (0x0003933f) bg_icf_pane_g1

0xebb3,	// (0x000450e1) bg_icf_pane_g2

0xebbd,	// (0x000450eb) bg_icf_pane_g3

0xebc5,	// (0x000450f3) bg_icf_pane_g4

0xebcf,	// (0x000450fd) bg_icf_pane_g5

0xebd9,	// (0x00045107) bg_icf_pane_g6

0xebe3,	// (0x00045111) bg_icf_pane_g7

0xebeb,	// (0x00045119) bg_icf_pane_g8

0xebf5,	// (0x00045123) bg_icf_pane_g9

0x0008,

0xfef5,	// (0x00046423) bg_icf_pane_g

0x8689,	// (0x0003ebb7) popup_hyb_candi_window_ParamLimits

0x8689,	// (0x0003ebb7) popup_hyb_candi_window

0x2e85,	// (0x000393b3) bg_popup_sub_pane_cp01_ParamLimits

0x2e85,	// (0x000393b3) bg_popup_sub_pane_cp01

0x8912,	// (0x0003ee40) entry_hyb_candi_pane_ParamLimits

0x8912,	// (0x0003ee40) entry_hyb_candi_pane

0x8921,	// (0x0003ee4f) grid_hyb_candi_pane_ParamLimits

0x8921,	// (0x0003ee4f) grid_hyb_candi_pane

0x8936,	// (0x0003ee64) grid_hyb_phrase_pane_ParamLimits

0x8936,	// (0x0003ee64) grid_hyb_phrase_pane

0x8945,	// (0x0003ee73) cell_hyb_candi_pane_ParamLimits

0x8945,	// (0x0003ee73) cell_hyb_candi_pane

0xbd57,	// (0x00042285) cell_hyb_candi_scroll_pane

0xf28c,	// (0x000457ba) cell_hyb_candi_pane_g1

0x8961,	// (0x0003ee8f) cell_hyb_candi_pane_t1

0x896f,	// (0x0003ee9d) cell_hyb_phrase_pane

0xf28c,	// (0x000457ba) cell_hyb_phrase_pane_g1

0x8978,	// (0x0003eea6) cell_hyb_phrase_pane_t1

0x8986,	// (0x0003eeb4) entry_hyb_candi_pane_t1

0x25b4,	// (0x00038ae2) input_focus_pane_cp06

0x8994,	// (0x0003eec2) cell_hyb_candi_scroll_pane_g1

0x899c,	// (0x0003eeca) cell_hyb_candi_scroll_pane_g1_aid

0x89a4,	// (0x0003eed2) cell_hyb_candi_scroll_pane_g2

0x89ac,	// (0x0003eeda) cell_hyb_candi_scroll_pane_g2_aid

0x89b4,	// (0x0003eee2) cell_hyb_candi_scroll_pane_g3

0x89bc,	// (0x0003eeea) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Small
