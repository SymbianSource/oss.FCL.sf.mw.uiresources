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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0004f245 };

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
0xb370,	// (0x0005a5b5) Screen

0xb37c,	// (0x0005a5c1) application_window_ParamLimits

0xb37c,	// (0x0005a5c1) application_window

0x2438,	// (0x0005167d) screen_g1

0xb3b4,	// (0x0005a5f9) area_bottom_pane_ParamLimits

0xb3b4,	// (0x0005a5f9) area_bottom_pane

0x0093,	// (0x0004f2d8) area_top_pane_ParamLimits

0x0093,	// (0x0004f2d8) area_top_pane

0x0131,	// (0x0004f376) main_pane_ParamLimits

0x0131,	// (0x0004f376) main_pane

0x2442,	// (0x00051687) misc_graphics

0xd2e3,	// (0x0005c528) battery_pane_ParamLimits

0xd2e3,	// (0x0005c528) battery_pane

0x57cd,	// (0x00054a12) bg_status_flat_pane_g8

0x57d5,	// (0x00054a1a) bg_status_flat_pane_g9

0x4b3f,	// (0x00053d84) context_pane_ParamLimits

0x4b3f,	// (0x00053d84) context_pane

0xd44e,	// (0x0005c693) navi_pane_ParamLimits

0xd44e,	// (0x0005c693) navi_pane

0xd4c5,	// (0x0005c70a) signal_pane_ParamLimits

0xd4c5,	// (0x0005c70a) signal_pane

0x0008,

0xf879,	// (0x0005eabe) bg_status_flat_pane_g

0xd555,	// (0x0005c79a) status_pane_g1_ParamLimits

0xd555,	// (0x0005c79a) status_pane_g1

0xd56b,	// (0x0005c7b0) status_pane_g2_ParamLimits

0xd56b,	// (0x0005c7b0) status_pane_g2

0x4d81,	// (0x00053fc6) status_pane_g3_ParamLimits

0x4d81,	// (0x00053fc6) status_pane_g3

0x0004,

0xf7b3,	// (0x0005e9f8) status_pane_g_ParamLimits

0xf7b3,	// (0x0005e9f8) status_pane_g

0xd577,	// (0x0005c7bc) title_pane_ParamLimits

0xd577,	// (0x0005c7bc) title_pane

0xd5d8,	// (0x0005c81d) uni_indicator_pane_ParamLimits

0xd5d8,	// (0x0005c81d) uni_indicator_pane

0x440e,	// (0x00053653) bg_list_pane_ParamLimits

0x440e,	// (0x00053653) bg_list_pane

0xcb28,	// (0x0005bd6d) find_pane

0xcb30,	// (0x0005bd75) listscroll_app_pane_ParamLimits

0xcb30,	// (0x0005bd75) listscroll_app_pane

0x443a,	// (0x0005367f) listscroll_form_pane

0xcb3c,	// (0x0005bd81) listscroll_gen_pane_ParamLimits

0xcb3c,	// (0x0005bd81) listscroll_gen_pane

0x443a,	// (0x0005367f) listscroll_set_pane

0x635b,	// (0x000555a0) main_idle_act_pane

0x40f6,	// (0x0005333b) main_idle_trad_pane

0x40f6,	// (0x0005333b) main_list_empty_pane

0x4454,	// (0x00053699) main_midp_pane

0x4460,	// (0x000536a5) main_pane_g1_ParamLimits

0x4460,	// (0x000536a5) main_pane_g1

0xcb5e,	// (0x0005bda3) popup_ai_message_window_ParamLimits

0xcb5e,	// (0x0005bda3) popup_ai_message_window

0xcbef,	// (0x0005be34) popup_fep_china_uni_window_ParamLimits

0xcbef,	// (0x0005be34) popup_fep_china_uni_window

0x456c,	// (0x000537b1) popup_fep_japan_candidate_window_ParamLimits

0x456c,	// (0x000537b1) popup_fep_japan_candidate_window

0x458c,	// (0x000537d1) popup_fep_japan_predictive_window_ParamLimits

0x458c,	// (0x000537d1) popup_fep_japan_predictive_window

0xcc4b,	// (0x0005be90) popup_find_window

0xcc68,	// (0x0005bead) popup_grid_graphic_window_ParamLimits

0xcc68,	// (0x0005bead) popup_grid_graphic_window

0x45f1,	// (0x00053836) popup_large_graphic_colour_window

0xcd00,	// (0x0005bf45) popup_menu_window_ParamLimits

0xcd00,	// (0x0005bf45) popup_menu_window

0xcf43,	// (0x0005c188) popup_note_image_window

0xcf09,	// (0x0005c14e) popup_note_wait_window_ParamLimits

0xcf09,	// (0x0005c14e) popup_note_wait_window

0xcf5b,	// (0x0005c1a0) popup_note_window_ParamLimits

0xcf5b,	// (0x0005c1a0) popup_note_window

0xd001,	// (0x0005c246) popup_query_code_window_ParamLimits

0xd001,	// (0x0005c246) popup_query_code_window

0x4839,	// (0x00053a7e) popup_query_data_code_window_ParamLimits

0x4839,	// (0x00053a7e) popup_query_data_code_window

0xd03b,	// (0x0005c280) popup_query_data_window_ParamLimits

0xd03b,	// (0x0005c280) popup_query_data_window

0xd0b1,	// (0x0005c2f6) popup_query_sat_info_window_ParamLimits

0xd0b1,	// (0x0005c2f6) popup_query_sat_info_window

0xd148,	// (0x0005c38d) popup_snote_single_graphic_window_ParamLimits

0xd148,	// (0x0005c38d) popup_snote_single_graphic_window

0xd148,	// (0x0005c38d) popup_snote_single_text_window_ParamLimits

0xd148,	// (0x0005c38d) popup_snote_single_text_window

0x48c0,	// (0x00053b05) popup_sub_window_general

0x49f0,	// (0x00053c35) popup_window_general_ParamLimits

0x49f0,	// (0x00053c35) popup_window_general

0x4a05,	// (0x00053c4a) power_save_pane

0xbb1c,	// (0x0005ad61) control_pane_g1_ParamLimits

0xbb1c,	// (0x0005ad61) control_pane_g1

0xbb45,	// (0x0005ad8a) control_pane_g2_ParamLimits

0xbb45,	// (0x0005ad8a) control_pane_g2

0x43bf,	// (0x00053604) control_pane_g3_ParamLimits

0x43bf,	// (0x00053604) control_pane_g3

0x0007,

0xf79b,	// (0x0005e9e0) control_pane_g_ParamLimits

0xf79b,	// (0x0005e9e0) control_pane_g

0xbb80,	// (0x0005adc5) control_pane_t1_ParamLimits

0xbb80,	// (0x0005adc5) control_pane_t1

0xbbde,	// (0x0005ae23) control_pane_t2_ParamLimits

0xbbde,	// (0x0005ae23) control_pane_t2

0x0002,

0xf7ac,	// (0x0005e9f1) control_pane_t_ParamLimits

0xf7ac,	// (0x0005e9f1) control_pane_t

0x42e0,	// (0x00053525) navi_navi_volume_pane_cp1

0x42e9,	// (0x0005352e) status_small_icon_pane

0x42f1,	// (0x00053536) status_small_pane_g1_ParamLimits

0x42f1,	// (0x00053536) status_small_pane_g1

0x4325,	// (0x0005356a) status_small_pane_g2_ParamLimits

0x4325,	// (0x0005356a) status_small_pane_g2

0x4331,	// (0x00053576) status_small_pane_g3_ParamLimits

0x4331,	// (0x00053576) status_small_pane_g3

0x433d,	// (0x00053582) status_small_pane_g4_ParamLimits

0x433d,	// (0x00053582) status_small_pane_g4

0x4349,	// (0x0005358e) status_small_pane_g5_ParamLimits

0x4349,	// (0x0005358e) status_small_pane_g5

0x4358,	// (0x0005359d) status_small_pane_g6_ParamLimits

0x4358,	// (0x0005359d) status_small_pane_g6

0x0007,

0xf78a,	// (0x0005e9cf) status_small_pane_g_ParamLimits

0xf78a,	// (0x0005e9cf) status_small_pane_g

0x4388,	// (0x000535cd) status_small_pane_t1

0x43ab,	// (0x000535f0) status_small_wait_pane_ParamLimits

0x43ab,	// (0x000535f0) status_small_wait_pane

0xc96c,	// (0x0005bbb1) aid_levels_signal_ParamLimits

0xc96c,	// (0x0005bbb1) aid_levels_signal

0xc984,	// (0x0005bbc9) signal_pane_g1_ParamLimits

0xc984,	// (0x0005bbc9) signal_pane_g1

0xc99f,	// (0x0005bbe4) signal_pane_g2_ParamLimits

0xc99f,	// (0x0005bbe4) signal_pane_g2

0x0001,

0xf71f,	// (0x0005e964) signal_pane_g_ParamLimits

0xf71f,	// (0x0005e964) signal_pane_g

0x3be1,	// (0x00052e26) context_pane_g1

0xb52d,	// (0x0005a772) title_pane_g1

0xc48b,	// (0x0005b6d0) title_pane_t1

0x24ea,	// (0x0005172f) title_pane_t2

0x2510,	// (0x00051755) title_pane_t3

0x0002,

0xf573,	// (0x0005e7b8) title_pane_t

0xd600,	// (0x0005c845) aid_levels_battery_ParamLimits

0xd600,	// (0x0005c845) aid_levels_battery

0xd61c,	// (0x0005c861) battery_pane_g1_ParamLimits

0xd61c,	// (0x0005c861) battery_pane_g1

0xd639,	// (0x0005c87e) battery_pane_g2_ParamLimits

0xd639,	// (0x0005c87e) battery_pane_g2

0x0001,

0xf7be,	// (0x0005ea03) battery_pane_g_ParamLimits

0xf7be,	// (0x0005ea03) battery_pane_g

0xd83e,	// (0x0005ca83) uni_indicator_pane_g1

0xd853,	// (0x0005ca98) uni_indicator_pane_g2

0xd868,	// (0x0005caad) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0005eb66) uni_indicator_pane_g

0x3f74,	// (0x000531b9) navi_icon_pane_ParamLimits

0x3f74,	// (0x000531b9) navi_icon_pane

0x3ebd,	// (0x00053102) navi_midp_pane

0x3f90,	// (0x000531d5) navi_navi_pane

0x3f9a,	// (0x000531df) navi_text_pane_ParamLimits

0x3f9a,	// (0x000531df) navi_text_pane

0x2438,	// (0x0005167d) status_small_wait_pane_g1

0x3064,	// (0x000522a9) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0005eb61) status_small_wait_pane_g

0x5e1f,	// (0x00055064) navi_navi_icon_text_pane

0x5e27,	// (0x0005506c) navi_navi_pane_g1_ParamLimits

0x5e27,	// (0x0005506c) navi_navi_pane_g1

0x5e39,	// (0x0005507e) navi_navi_pane_g2_ParamLimits

0x5e39,	// (0x0005507e) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0005eb2f) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0005eb2f) navi_navi_pane_g

0x5e4b,	// (0x00055090) navi_navi_tabs_pane

0x5e54,	// (0x00055099) navi_navi_text_pane

0x5e1f,	// (0x00055064) navi_navi_volume_pane

0xd7ff,	// (0x0005ca44) navi_text_pane_t1

0xd7f3,	// (0x0005ca38) navi_icon_pane_g1

0x5d4b,	// (0x00054f90) navi_navi_text_pane_t1

0xbe41,	// (0x0005b086) navi_navi_volume_pane_g1

0xbe49,	// (0x0005b08e) volume_small_pane

0xd74f,	// (0x0005c994) navi_navi_icon_text_pane_g1

0xd757,	// (0x0005c99c) navi_navi_icon_text_pane_t1

0x3f90,	// (0x000531d5) navi_tabs_2_long_pane

0x3f90,	// (0x000531d5) navi_tabs_2_pane

0x3f90,	// (0x000531d5) navi_tabs_3_long_pane

0x3f90,	// (0x000531d5) navi_tabs_3_pane

0x3f90,	// (0x000531d5) navi_tabs_4_pane

0xbe21,	// (0x0005b066) tabs_2_active_pane_ParamLimits

0xbe21,	// (0x0005b066) tabs_2_active_pane

0xbe31,	// (0x0005b076) tabs_2_passive_pane_ParamLimits

0xbe31,	// (0x0005b076) tabs_2_passive_pane

0xbdef,	// (0x0005b034) tabs_3_active_pane_ParamLimits

0xbdef,	// (0x0005b034) tabs_3_active_pane

0xbdff,	// (0x0005b044) tabs_3_passive_pane_ParamLimits

0xbdff,	// (0x0005b044) tabs_3_passive_pane

0xbe10,	// (0x0005b055) tabs_3_passive_pane_cp_ParamLimits

0xbe10,	// (0x0005b055) tabs_3_passive_pane_cp

0xbdab,	// (0x0005aff0) tabs_4_active_pane_ParamLimits

0xbdab,	// (0x0005aff0) tabs_4_active_pane

0xbdbc,	// (0x0005b001) tabs_4_passive_pane_ParamLimits

0xbdbc,	// (0x0005b001) tabs_4_passive_pane

0xbdcd,	// (0x0005b012) tabs_4_passive_pane_cp_ParamLimits

0xbdcd,	// (0x0005b012) tabs_4_passive_pane_cp

0xbdde,	// (0x0005b023) tabs_4_passive_pane_cp2_ParamLimits

0xbdde,	// (0x0005b023) tabs_4_passive_pane_cp2

0xbd8b,	// (0x0005afd0) tabs_2_long_active_pane_ParamLimits

0xbd8b,	// (0x0005afd0) tabs_2_long_active_pane

0xbd9b,	// (0x0005afe0) tabs_2_long_passive_pane_ParamLimits

0xbd9b,	// (0x0005afe0) tabs_2_long_passive_pane

0xbd58,	// (0x0005af9d) tabs_3_long_active_pane_ParamLimits

0xbd58,	// (0x0005af9d) tabs_3_long_active_pane

0xbd69,	// (0x0005afae) tabs_3_long_passive_pane_ParamLimits

0xbd69,	// (0x0005afae) tabs_3_long_passive_pane

0xbd7a,	// (0x0005afbf) tabs_3_long_passive_pane_cp_ParamLimits

0xbd7a,	// (0x0005afbf) tabs_3_long_passive_pane_cp

0x135e,	// (0x000505a3) volume_small_pane_g1

0xbd07,	// (0x0005af4c) volume_small_pane_g2

0xbd10,	// (0x0005af55) volume_small_pane_g3

0xbd19,	// (0x0005af5e) volume_small_pane_g4

0xbd22,	// (0x0005af67) volume_small_pane_g5

0xbd2b,	// (0x0005af70) volume_small_pane_g6

0xbd34,	// (0x0005af79) volume_small_pane_g7

0xbd3d,	// (0x0005af82) volume_small_pane_g8

0xbd46,	// (0x0005af8b) volume_small_pane_g9

0xbd4f,	// (0x0005af94) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0005eafb) volume_small_pane_g

0x2ec2,	// (0x00052107) bg_active_tab_pane_cp2_ParamLimits

0x2ec2,	// (0x00052107) bg_active_tab_pane_cp2

0xc517,	// (0x0005b75c) tabs_3_active_pane_g1

0xc51f,	// (0x0005b764) tabs_3_active_pane_t1

0x2ec2,	// (0x00052107) bg_passive_tab_pane_cp2_ParamLimits

0x2ec2,	// (0x00052107) bg_passive_tab_pane_cp2

0xc517,	// (0x0005b75c) tabs_3_passive_pane_g1

0xc51f,	// (0x0005b764) tabs_3_passive_pane_t1

0x2ec2,	// (0x00052107) bg_active_tab_pane_cp3_ParamLimits

0x2ec2,	// (0x00052107) bg_active_tab_pane_cp3

0xc531,	// (0x0005b776) tabs_4_active_pane_g1

0xc539,	// (0x0005b77e) tabs_4_active_pane_t1

0x2ec2,	// (0x00052107) bg_passive_tab_pane_cp3_ParamLimits

0x2ec2,	// (0x00052107) bg_passive_tab_pane_cp3

0xc531,	// (0x0005b776) tabs_4_1_passive_pane_g1

0xc539,	// (0x0005b77e) tabs_4_1_passive_pane_t1

0x4454,	// (0x00053699) list_highlight_pane_cp2

0xd8f1,	// (0x0005cb36) list_set_pane_ParamLimits

0xd8f1,	// (0x0005cb36) list_set_pane

0xd98b,	// (0x0005cbd0) main_pane_set_t1_ParamLimits

0xd98b,	// (0x0005cbd0) main_pane_set_t1

0xd9ab,	// (0x0005cbf0) main_pane_set_t2_ParamLimits

0xd9ab,	// (0x0005cbf0) main_pane_set_t2

0xd9bf,	// (0x0005cc04) main_pane_set_t3_ParamLimits

0xd9bf,	// (0x0005cc04) main_pane_set_t3

0xd9d1,	// (0x0005cc16) main_pane_set_t4_ParamLimits

0xd9d1,	// (0x0005cc16) main_pane_set_t4

0x0003,

0xf986,	// (0x0005ebcb) main_pane_set_t_ParamLimits

0xf986,	// (0x0005ebcb) main_pane_set_t

0xd9e3,	// (0x0005cc28) setting_code_pane

0xd9ed,	// (0x0005cc32) setting_slider_graphic_pane

0xd9ed,	// (0x0005cc32) setting_slider_pane

0xd9ed,	// (0x0005cc32) setting_text_pane

0xd9ed,	// (0x0005cc32) setting_volume_pane

0x0376,	// (0x0004f5bb) volume_set_pane

0x2522,	// (0x00051767) bg_set_opt_pane_cp

0x037e,	// (0x0004f5c3) setting_slider_pane_t1

0x0397,	// (0x0004f5dc) setting_slider_pane_t2

0x03b1,	// (0x0004f5f6) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0005e7bf) setting_slider_pane_t

0x03c9,	// (0x0004f60e) slider_set_pane

0x2442,	// (0x00051687) bg_set_opt_pane_cp2

0x2564,	// (0x000517a9) setting_slider_graphic_pane_g1

0x03df,	// (0x0004f624) setting_slider_graphic_pane_t1

0x03ef,	// (0x0004f634) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0005e7c6) setting_slider_graphic_pane_t

0x03ff,	// (0x0004f644) slider_set_pane_cp

0x2442,	// (0x00051687) input_focus_pane_cp1

0x6342,	// (0x00055587) list_set_text_pane

0x2438,	// (0x0005167d) setting_text_pane_g1

0x2442,	// (0x00051687) input_focus_pane_cp2

0x2438,	// (0x0005167d) setting_code_pane_g1

0x256d,	// (0x000517b2) setting_code_pane_t1

0x0407,	// (0x0004f64c) set_text_pane_t1_ParamLimits

0x0407,	// (0x0004f64c) set_text_pane_t1

0x351a,	// (0x0005275f) set_opt_bg_pane_g1

0x3522,	// (0x00052767) set_opt_bg_pane_g2

0x631c,	// (0x00055561) set_opt_bg_pane_g3

0x3532,	// (0x00052777) set_opt_bg_pane_g4

0x353a,	// (0x0005277f) set_opt_bg_pane_g5

0x3542,	// (0x00052787) set_opt_bg_pane_g6

0x6326,	// (0x0005556b) set_opt_bg_pane_g7

0x632e,	// (0x00055573) set_opt_bg_pane_g8

0x6338,	// (0x0005557d) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0005ebb8) set_opt_bg_pane_g

0x630f,	// (0x00055554) slider_set_pane_g1

0x154e,	// (0x00050793) slider_set_pane_g2

0x0006,

0xf964,	// (0x0005eba9) slider_set_pane_g

0x14c2,	// (0x00050707) volume_set_pane_g1

0x14ca,	// (0x0005070f) volume_set_pane_g2

0x14d2,	// (0x00050717) volume_set_pane_g3

0x14da,	// (0x0005071f) volume_set_pane_g4

0x14e2,	// (0x00050727) volume_set_pane_g5

0x14ea,	// (0x0005072f) volume_set_pane_g6

0x14f2,	// (0x00050737) volume_set_pane_g7

0x14fa,	// (0x0005073f) volume_set_pane_g8

0x1502,	// (0x00050747) volume_set_pane_g9

0x150a,	// (0x0005074f) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0005eb81) volume_set_pane_g

0xc54b,	// (0x0005b790) indicator_pane_ParamLimits

0xc54b,	// (0x0005b790) indicator_pane

0xc573,	// (0x0005b7b8) main_idle_pane_g2_ParamLimits

0xc573,	// (0x0005b7b8) main_idle_pane_g2

0xc5ab,	// (0x0005b7f0) main_pane_idle_g1_ParamLimits

0xc5ab,	// (0x0005b7f0) main_pane_idle_g1

0x25bc,	// (0x00051801) popup_clock_digital_analogue_window_ParamLimits

0x25bc,	// (0x00051801) popup_clock_digital_analogue_window

0xc5d2,	// (0x0005b817) soft_indicator_pane_ParamLimits

0xc5d2,	// (0x0005b817) soft_indicator_pane

0xc5ec,	// (0x0005b831) wallpaper_pane_ParamLimits

0xc5ec,	// (0x0005b831) wallpaper_pane

0x2438,	// (0x0005167d) wallpaper_pane_g1

0xc5fe,	// (0x0005b843) indicator_pane_g1_ParamLimits

0xc5fe,	// (0x0005b843) indicator_pane_g1

0x66f6,	// (0x0005593b) navi_navi_icon_text_pane_srt_g1

0x260e,	// (0x00051853) soft_indicator_pane_t1

0x2628,	// (0x0005186d) aid_ps_area_pane

0xc614,	// (0x0005b859) aid_ps_clock_pane

0x2647,	// (0x0005188c) aid_ps_indicator_pane

0x2653,	// (0x00051898) indicator_ps_pane_ParamLimits

0x2653,	// (0x00051898) indicator_ps_pane

0x2662,	// (0x000518a7) power_save_pane_g1_ParamLimits

0x2662,	// (0x000518a7) power_save_pane_g1

0x266e,	// (0x000518b3) power_save_pane_g2_ParamLimits

0x266e,	// (0x000518b3) power_save_pane_g2

0xf54a,	// (0x0005e78f) aid_navinavi_width_pane

0x2628,	// (0x0005186d) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0005e7cb) power_save_pane_g_ParamLimits

0xf586,	// (0x0005e7cb) power_save_pane_g

0x267c,	// (0x000518c1) power_save_pane_t1_ParamLimits

0x267c,	// (0x000518c1) power_save_pane_t1

0xc614,	// (0x0005b859) aid_ps_clock_pane_ParamLimits

0x2647,	// (0x0005188c) aid_ps_indicator_pane_ParamLimits

0x268e,	// (0x000518d3) power_save_pane_t4_ParamLimits

0x268e,	// (0x000518d3) power_save_pane_t4

0x0001,

0xf58b,	// (0x0005e7d0) power_save_pane_t_ParamLimits

0xf58b,	// (0x0005e7d0) power_save_pane_t

0x26b8,	// (0x000518fd) power_save_t3_ParamLimits

0x26b8,	// (0x000518fd) power_save_t3

0x26a3,	// (0x000518e8) power_save_t2_ParamLimits

0x26a3,	// (0x000518e8) power_save_t2

0x2df2,	// (0x00052037) indicator_ps_pane_g1

0xc622,	// (0x0005b867) ai_gene_pane_ParamLimits

0xc622,	// (0x0005b867) ai_gene_pane

0xc639,	// (0x0005b87e) ai_links_pane_ParamLimits

0xc639,	// (0x0005b87e) ai_links_pane

0xc651,	// (0x0005b896) indicator_pane_cp1_ParamLimits

0xc651,	// (0x0005b896) indicator_pane_cp1

0xc660,	// (0x0005b8a5) main_pane_idle_g1_cp_ParamLimits

0xc660,	// (0x0005b8a5) main_pane_idle_g1_cp

0x2e2b,	// (0x00052070) popup_ai_links_title_window

0xc678,	// (0x0005b8bd) soft_indicator_pane_cp1_ParamLimits

0xc678,	// (0x0005b8bd) soft_indicator_pane_cp1

0x60e8,	// (0x0005532d) ai_links_pane_g1

0x60f1,	// (0x00055336) grid_ai_links_pane

0xd835,	// (0x0005ca7a) ai_gene_pane_1

0x60d6,	// (0x0005531b) ai_gene_pane_2

0x60df,	// (0x00055324) list_highlight_pane_cp4

0xd811,	// (0x0005ca56) cell_ai_link_pane_ParamLimits

0xd811,	// (0x0005ca56) cell_ai_link_pane

0x60a7,	// (0x000552ec) cell_ai_link_pane_g1

0x3064,	// (0x000522a9) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0005eb5c) cell_ai_link_pane_g

0x2442,	// (0x00051687) grid_highlight_cp2

0x2442,	// (0x00051687) bg_popup_sub_pane_cp1

0x2e4e,	// (0x00052093) popup_ai_links_title_window_t1

0x5ff5,	// (0x0005523a) ai_gene_pane_1_g1_ParamLimits

0x5ff5,	// (0x0005523a) ai_gene_pane_1_g1

0x6001,	// (0x00055246) ai_gene_pane_1_g2_ParamLimits

0x6001,	// (0x00055246) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0005eb52) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0005eb52) ai_gene_pane_1_g

0x600e,	// (0x00055253) ai_gene_pane_1_t1_ParamLimits

0x600e,	// (0x00055253) ai_gene_pane_1_t1

0x6042,	// (0x00055287) grid_ai_soft_ind_pane

0x5fe0,	// (0x00055225) ai_gene_pane_2_t1_ParamLimits

0x5fe0,	// (0x00055225) ai_gene_pane_2_t1

0xc68c,	// (0x0005b8d1) main_pane_empty_t1_ParamLimits

0xc68c,	// (0x0005b8d1) main_pane_empty_t1

0xc6a4,	// (0x0005b8e9) main_pane_empty_t2_ParamLimits

0xc6a4,	// (0x0005b8e9) main_pane_empty_t2

0xc6b9,	// (0x0005b8fe) main_pane_empty_t3_ParamLimits

0xc6b9,	// (0x0005b8fe) main_pane_empty_t3

0xc6cb,	// (0x0005b910) main_pane_empty_t4_ParamLimits

0xc6cb,	// (0x0005b910) main_pane_empty_t4

0xc6dd,	// (0x0005b922) main_pane_empty_t5_ParamLimits

0xc6dd,	// (0x0005b922) main_pane_empty_t5

0x0004,

0xf590,	// (0x0005e7d5) main_pane_empty_t_ParamLimits

0xf590,	// (0x0005e7d5) main_pane_empty_t

0x356b,	// (0x000527b0) bg_popup_window_pane_ParamLimits

0x356b,	// (0x000527b0) bg_popup_window_pane

0x5d59,	// (0x00054f9e) find_popup_pane_cp2_ParamLimits

0x5d59,	// (0x00054f9e) find_popup_pane_cp2

0x5d65,	// (0x00054faa) heading_pane_ParamLimits

0x5d65,	// (0x00054faa) heading_pane

0x2442,	// (0x00051687) bg_popup_sub_pane

0xd774,	// (0x0005c9b9) bg_popup_window_pane_g1_ParamLimits

0xd774,	// (0x0005c9b9) bg_popup_window_pane_g1

0xd783,	// (0x0005c9c8) bg_popup_window_pane_g2_ParamLimits

0xd783,	// (0x0005c9c8) bg_popup_window_pane_g2

0xd78f,	// (0x0005c9d4) bg_popup_window_pane_g3_ParamLimits

0xd78f,	// (0x0005c9d4) bg_popup_window_pane_g3

0xd79b,	// (0x0005c9e0) bg_popup_window_pane_g4_ParamLimits

0xd79b,	// (0x0005c9e0) bg_popup_window_pane_g4

0xd7aa,	// (0x0005c9ef) bg_popup_window_pane_g5_ParamLimits

0xd7aa,	// (0x0005c9ef) bg_popup_window_pane_g5

0xd7ba,	// (0x0005c9ff) bg_popup_window_pane_g6_ParamLimits

0xd7ba,	// (0x0005c9ff) bg_popup_window_pane_g6

0xd7c6,	// (0x0005ca0b) bg_popup_window_pane_g7_ParamLimits

0xd7c6,	// (0x0005ca0b) bg_popup_window_pane_g7

0xd7d5,	// (0x0005ca1a) bg_popup_window_pane_g8_ParamLimits

0xd7d5,	// (0x0005ca1a) bg_popup_window_pane_g8

0xd7e4,	// (0x0005ca29) bg_popup_window_pane_g9_ParamLimits

0xd7e4,	// (0x0005ca29) bg_popup_window_pane_g9

0x5d3f,	// (0x00054f84) bg_popup_window_pane_g10_ParamLimits

0x5d3f,	// (0x00054f84) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0005eb1a) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0005eb1a) bg_popup_window_pane_g

0x5c68,	// (0x00054ead) bg_popup_heading_pane_ParamLimits

0x5c68,	// (0x00054ead) bg_popup_heading_pane

0x164f,	// (0x00050894) tabs_4_passive_pane_cp_srt_ParamLimits

0x164f,	// (0x00050894) tabs_4_passive_pane_cp_srt

0x1661,	// (0x000508a6) tabs_4_passive_pane_srt_ParamLimits

0x5c7c,	// (0x00054ec1) heading_pane_g2

0x1661,	// (0x000508a6) tabs_4_passive_pane_srt

0x5008,	// (0x0005424d) bg_passive_tab_pane_cp3_srt_ParamLimits

0x5008,	// (0x0005424d) bg_passive_tab_pane_cp3_srt

0x5c84,	// (0x00054ec9) heading_pane_t1_ParamLimits

0x5c84,	// (0x00054ec9) heading_pane_t1

0x5c9b,	// (0x00054ee0) heading_pane_t2_ParamLimits

0x5c9b,	// (0x00054ee0) heading_pane_t2

0x0001,

0xf8d0,	// (0x0005eb15) heading_pane_t_ParamLimits

0xf8d0,	// (0x0005eb15) heading_pane_t

0x5795,	// (0x000549da) bg_popup_heading_pane_g1

0x5844,	// (0x00054a89) bg_popup_heading_pane_g2

0x584e,	// (0x00054a93) bg_popup_heading_pane_g3

0x5858,	// (0x00054a9d) bg_popup_heading_pane_g4

0x5862,	// (0x00054aa7) bg_popup_heading_pane_g5

0x586c,	// (0x00054ab1) bg_popup_heading_pane_g6

0x5874,	// (0x00054ab9) bg_popup_heading_pane_g7

0x587c,	// (0x00054ac1) bg_popup_heading_pane_g8

0x5886,	// (0x00054acb) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0005ead1) bg_popup_heading_pane_g

0x4f18,	// (0x0005415d) bg_popup_sub_pane_g1

0x4f28,	// (0x0005416d) bg_popup_sub_pane_g2

0x4f20,	// (0x00054165) bg_popup_sub_pane_g3

0x4f38,	// (0x0005417d) bg_popup_sub_pane_g4

0x4f30,	// (0x00054175) bg_popup_sub_pane_g5

0x4f40,	// (0x00054185) bg_popup_sub_pane_g6

0x4f48,	// (0x0005418d) bg_popup_sub_pane_g7

0x4f58,	// (0x0005419d) bg_popup_sub_pane_g8

0x4f50,	// (0x00054195) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0005eaab) bg_popup_sub_pane_g

0x2ec2,	// (0x00052107) bg_popup_window_pane_cp5_ParamLimits

0x2ec2,	// (0x00052107) bg_popup_window_pane_cp5

0x2ede,	// (0x00052123) popup_note_window_g1_ParamLimits

0x2ede,	// (0x00052123) popup_note_window_g1

0x2eea,	// (0x0005212f) popup_note_window_t1_ParamLimits

0x2eea,	// (0x0005212f) popup_note_window_t1

0x2f00,	// (0x00052145) popup_note_window_t2_ParamLimits

0x2f00,	// (0x00052145) popup_note_window_t2

0x2f16,	// (0x0005215b) popup_note_window_t3_ParamLimits

0x2f16,	// (0x0005215b) popup_note_window_t3

0x2f2c,	// (0x00052171) popup_note_window_t4_ParamLimits

0x2f2c,	// (0x00052171) popup_note_window_t4

0x2f54,	// (0x00052199) popup_note_window_t5_ParamLimits

0x2f54,	// (0x00052199) popup_note_window_t5

0x0004,

0xf59b,	// (0x0005e7e0) popup_note_window_t_ParamLimits

0xf59b,	// (0x0005e7e0) popup_note_window_t

0x2f78,	// (0x000521bd) bg_popup_window_pane_cp6_ParamLimits

0x2f78,	// (0x000521bd) bg_popup_window_pane_cp6

0x5711,	// (0x00054956) popup_note_image_window_g1_ParamLimits

0x5711,	// (0x00054956) popup_note_image_window_g1

0x571d,	// (0x00054962) popup_note_image_window_g2_ParamLimits

0x571d,	// (0x00054962) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0005ea9f) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0005ea9f) popup_note_image_window_g

0x5736,	// (0x0005497b) popup_note_image_window_t1_ParamLimits

0x5736,	// (0x0005497b) popup_note_image_window_t1

0x574f,	// (0x00054994) popup_note_image_window_t2_ParamLimits

0x574f,	// (0x00054994) popup_note_image_window_t2

0x5768,	// (0x000549ad) popup_note_image_window_t3_ParamLimits

0x5768,	// (0x000549ad) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0005eaa4) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0005eaa4) popup_note_image_window_t

0x55d2,	// (0x00054817) bg_popup_window_pane_cp7_ParamLimits

0x55d2,	// (0x00054817) bg_popup_window_pane_cp7

0x5602,	// (0x00054847) popup_note_wait_window_g1_ParamLimits

0x5602,	// (0x00054847) popup_note_wait_window_g1

0x560e,	// (0x00054853) popup_note_wait_window_g2_ParamLimits

0x560e,	// (0x00054853) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0005ea8d) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0005ea8d) popup_note_wait_window_g

0x5626,	// (0x0005486b) popup_note_wait_window_t1_ParamLimits

0x5626,	// (0x0005486b) popup_note_wait_window_t1

0x564d,	// (0x00054892) popup_note_wait_window_t2_ParamLimits

0x564d,	// (0x00054892) popup_note_wait_window_t2

0x566a,	// (0x000548af) popup_note_wait_window_t3_ParamLimits

0x566a,	// (0x000548af) popup_note_wait_window_t3

0x567d,	// (0x000548c2) popup_note_wait_window_t4_ParamLimits

0x567d,	// (0x000548c2) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0005ea94) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0005ea94) popup_note_wait_window_t

0x56a2,	// (0x000548e7) wait_bar_pane_ParamLimits

0x56a2,	// (0x000548e7) wait_bar_pane

0x2442,	// (0x00051687) wait_anim_pane

0x2442,	// (0x00051687) wait_border_pane

0x2438,	// (0x0005167d) wait_anim_pane_g1

0x2438,	// (0x0005167d) wait_anim_pane_g2

0x0001,

0xf71a,	// (0x0005e95f) wait_anim_pane_g

0x5567,	// (0x000547ac) wait_border_pane_g1

0x5572,	// (0x000547b7) wait_border_pane_g2

0x557b,	// (0x000547c0) wait_border_pane_g3

0x0002,

0xf841,	// (0x0005ea86) wait_border_pane_g

0x53d2,	// (0x00054617) bg_popup_window_pane_cp16_ParamLimits

0x53d2,	// (0x00054617) bg_popup_window_pane_cp16

0x54d2,	// (0x00054717) indicator_popup_pane_cp4_ParamLimits

0x54d2,	// (0x00054717) indicator_popup_pane_cp4

0x54e6,	// (0x0005472b) popup_query_data_window_t1_ParamLimits

0x54e6,	// (0x0005472b) popup_query_data_window_t1

0x54f8,	// (0x0005473d) popup_query_data_window_t2_ParamLimits

0x54f8,	// (0x0005473d) popup_query_data_window_t2

0x5511,	// (0x00054756) popup_query_data_window_t3_ParamLimits

0x5511,	// (0x00054756) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0005ea7f) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0005ea7f) popup_query_data_window_t

0x552b,	// (0x00054770) query_popup_data_pane_ParamLimits

0x552b,	// (0x00054770) query_popup_data_pane

0x553f,	// (0x00054784) query_popup_data_pane_cp1_ParamLimits

0x553f,	// (0x00054784) query_popup_data_pane_cp1

0x53d2,	// (0x00054617) bg_popup_window_pane_cp10_ParamLimits

0x53d2,	// (0x00054617) bg_popup_window_pane_cp10

0x5404,	// (0x00054649) indicator_popup_pane_ParamLimits

0x5404,	// (0x00054649) indicator_popup_pane

0x5426,	// (0x0005466b) popup_query_code_window_t1_ParamLimits

0x5426,	// (0x0005466b) popup_query_code_window_t1

0x5440,	// (0x00054685) popup_query_code_window_t2_ParamLimits

0x5440,	// (0x00054685) popup_query_code_window_t2

0x5489,	// (0x000546ce) popup_query_code_window_t3_ParamLimits

0x5489,	// (0x000546ce) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0005ea78) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0005ea78) popup_query_code_window_t

0x54b8,	// (0x000546fd) query_popup_pane_ParamLimits

0x54b8,	// (0x000546fd) query_popup_pane

0x2f78,	// (0x000521bd) bg_popup_window_pane_cp15_ParamLimits

0x2f78,	// (0x000521bd) bg_popup_window_pane_cp15

0x2f96,	// (0x000521db) indicator_popup_pane_cp1_ParamLimits

0x2f96,	// (0x000521db) indicator_popup_pane_cp1

0x2fa9,	// (0x000521ee) indicator_popup_pane_cp2_ParamLimits

0x2fa9,	// (0x000521ee) indicator_popup_pane_cp2

0x2fbc,	// (0x00052201) popup_query_data_code_window_g1_ParamLimits

0x2fbc,	// (0x00052201) popup_query_data_code_window_g1

0x2fcf,	// (0x00052214) popup_query_data_code_window_t1_ParamLimits

0x2fcf,	// (0x00052214) popup_query_data_code_window_t1

0x2fe1,	// (0x00052226) popup_query_data_code_window_t2_ParamLimits

0x2fe1,	// (0x00052226) popup_query_data_code_window_t2

0x2ff3,	// (0x00052238) popup_query_data_code_window_t3_ParamLimits

0x2ff3,	// (0x00052238) popup_query_data_code_window_t3

0x3009,	// (0x0005224e) popup_query_data_code_window_t4_ParamLimits

0x3009,	// (0x0005224e) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0005e7eb) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0005e7eb) popup_query_data_code_window_t

0x120b,	// (0x00050450) list_single_midp_graphic_pane_g3

0x3021,	// (0x00052266) query_popup_data_pane_cp2_ParamLimits

0x3034,	// (0x00052279) query_popup_pane_cp2_ParamLimits

0x3034,	// (0x00052279) query_popup_pane_cp2

0x2442,	// (0x00051687) bg_popup_window_pane_cp11

0x53ca,	// (0x0005460f) heading_pane_cp5

0x311c,	// (0x00052361) listscroll_popup_info_pane

0x2442,	// (0x00051687) input_focus_pane_cp3

0x3047,	// (0x0005228c) query_popup_pane_t1

0x3055,	// (0x0005229a) list_popup_info_pane_ParamLimits

0x3055,	// (0x0005229a) list_popup_info_pane

0x3064,	// (0x000522a9) listscroll_popup_info_pane_g1

0x306c,	// (0x000522b1) scroll_pane_cp7

0x3076,	// (0x000522bb) popup_info_list_pane_t1_ParamLimits

0x3076,	// (0x000522bb) popup_info_list_pane_t1

0x3090,	// (0x000522d5) popup_info_list_pane_t2_ParamLimits

0x3090,	// (0x000522d5) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0005e7f4) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0005e7f4) popup_info_list_pane_t

0x2442,	// (0x00051687) bg_popup_window_pane_cp12

0x6710,	// (0x00055955) find_popup_pane

0x2522,	// (0x00051767) bg_popup_window_pane_cp3

0x30aa,	// (0x000522ef) heading_pane_cp3

0x30b6,	// (0x000522fb) listscroll_popup_graphic_pane

0x2442,	// (0x00051687) bg_popup_window_pane_cp4

0xc73f,	// (0x0005b984) heading_pane_cp4

0x311c,	// (0x00052361) listscroll_popup_colour_pane

0xc747,	// (0x0005b98c) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xc747,	// (0x0005b98c) cell_large_graphic_colour_none_popup_pane

0xc75b,	// (0x0005b9a0) grid_large_graphic_colour_popup_pane_ParamLimits

0xc75b,	// (0x0005b9a0) grid_large_graphic_colour_popup_pane

0xc77f,	// (0x0005b9c4) listscroll_popup_colour_pane_g1_ParamLimits

0xc77f,	// (0x0005b9c4) listscroll_popup_colour_pane_g1

0xc796,	// (0x0005b9db) listscroll_popup_colour_pane_g2_ParamLimits

0xc796,	// (0x0005b9db) listscroll_popup_colour_pane_g2

0xc7ad,	// (0x0005b9f2) listscroll_popup_colour_pane_g3_ParamLimits

0xc7ad,	// (0x0005b9f2) listscroll_popup_colour_pane_g3

0xc7bd,	// (0x0005ba02) listscroll_popup_colour_pane_g4_ParamLimits

0xc7bd,	// (0x0005ba02) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0005e7f9) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0005e7f9) listscroll_popup_colour_pane_g

0x31b6,	// (0x000523fb) scroll_pane_cp6_ParamLimits

0x31b6,	// (0x000523fb) scroll_pane_cp6

0xc7cd,	// (0x0005ba12) cell_large_graphic_colour_popup_pane_ParamLimits

0xc7cd,	// (0x0005ba12) cell_large_graphic_colour_popup_pane

0x31e7,	// (0x0005242c) cell_large_graphic_colour_none_popup_pane_t1

0x2442,	// (0x00051687) grid_highlight_pane_cp5

0x31f6,	// (0x0005243b) cell_large_graphic_colour_popup_pane_g1

0x31fe,	// (0x00052443) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0005e802) cell_large_graphic_colour_popup_pane_g

0x3206,	// (0x0005244b) cell_large_graphic_colour_popup_pane_g2_copy1

0x320f,	// (0x00052454) grid_highlight_pane_cp4

0x3217,	// (0x0005245c) bg_popup_window_pane_cp8_ParamLimits

0x3217,	// (0x0005245c) bg_popup_window_pane_cp8

0x3232,	// (0x00052477) popup_snote_single_text_window_g1_ParamLimits

0x3232,	// (0x00052477) popup_snote_single_text_window_g1

0x3244,	// (0x00052489) popup_snote_single_text_window_t1_ParamLimits

0x3244,	// (0x00052489) popup_snote_single_text_window_t1

0x3257,	// (0x0005249c) popup_snote_single_text_window_t2_ParamLimits

0x3257,	// (0x0005249c) popup_snote_single_text_window_t2

0x326a,	// (0x000524af) popup_snote_single_text_window_t3_ParamLimits

0x326a,	// (0x000524af) popup_snote_single_text_window_t3

0x32a3,	// (0x000524e8) popup_snote_single_text_window_t4_ParamLimits

0x32a3,	// (0x000524e8) popup_snote_single_text_window_t4

0x32d7,	// (0x0005251c) popup_snote_single_text_window_t5_ParamLimits

0x32d7,	// (0x0005251c) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0005e807) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0005e807) popup_snote_single_text_window_t

0x3306,	// (0x0005254b) bg_popup_window_pane_cp9_ParamLimits

0x3306,	// (0x0005254b) bg_popup_window_pane_cp9

0x3232,	// (0x00052477) popup_snote_single_graphic_window_g1_ParamLimits

0x3232,	// (0x00052477) popup_snote_single_graphic_window_g1

0x3314,	// (0x00052559) popup_snote_single_graphic_window_g2_ParamLimits

0x3314,	// (0x00052559) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0005e812) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0005e812) popup_snote_single_graphic_window_g

0x3320,	// (0x00052565) popup_snote_single_graphic_window_t1_ParamLimits

0x3320,	// (0x00052565) popup_snote_single_graphic_window_t1

0x3333,	// (0x00052578) popup_snote_single_graphic_window_t2_ParamLimits

0x3333,	// (0x00052578) popup_snote_single_graphic_window_t2

0x3346,	// (0x0005258b) popup_snote_single_graphic_window_t3_ParamLimits

0x3346,	// (0x0005258b) popup_snote_single_graphic_window_t3

0x337f,	// (0x000525c4) popup_snote_single_graphic_window_t4_ParamLimits

0x337f,	// (0x000525c4) popup_snote_single_graphic_window_t4

0x33b3,	// (0x000525f8) popup_snote_single_graphic_window_t5_ParamLimits

0x33b3,	// (0x000525f8) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0005e817) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0005e817) popup_snote_single_graphic_window_t

0x6654,	// (0x00055899) grid_graphic_popup_pane_ParamLimits

0x6654,	// (0x00055899) grid_graphic_popup_pane

0x667c,	// (0x000558c1) listscroll_popup_graphic_pane_g1_ParamLimits

0x667c,	// (0x000558c1) listscroll_popup_graphic_pane_g1

0xdaf9,	// (0x0005cd3e) listscroll_popup_graphic_pane_g2_ParamLimits

0xdaf9,	// (0x0005cd3e) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0005ebf5) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0005ebf5) listscroll_popup_graphic_pane_g

0x66a4,	// (0x000558e9) scroll_pane_cp5

0xdabd,	// (0x0005cd02) cell_graphic_popup_pane_ParamLimits

0xdabd,	// (0x0005cd02) cell_graphic_popup_pane

0x65de,	// (0x00055823) cell_graphic_popup_pane_g1

0x65e6,	// (0x0005582b) cell_graphic_popup_pane_g2

0x3206,	// (0x0005244b) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0005ebee) cell_graphic_popup_pane_g

0x65ef,	// (0x00055834) cell_graphic_popup_pane_t2

0x320f,	// (0x00052454) grid_highlight_pane_cp3

0x33f4,	// (0x00052639) list_gen_pane_ParamLimits

0x33f4,	// (0x00052639) list_gen_pane

0x3426,	// (0x0005266b) scroll_pane

0xda78,	// (0x0005ccbd) bg_list_pane_g1_ParamLimits

0xda78,	// (0x0005ccbd) bg_list_pane_g1

0x655b,	// (0x000557a0) bg_list_pane_g2_ParamLimits

0x655b,	// (0x000557a0) bg_list_pane_g2

0x656e,	// (0x000557b3) bg_list_pane_g3_ParamLimits

0x656e,	// (0x000557b3) bg_list_pane_g3

0x6580,	// (0x000557c5) bg_list_pane_g4_ParamLimits

0x6580,	// (0x000557c5) bg_list_pane_g4

0xda93,	// (0x0005ccd8) bg_list_pane_g5_ParamLimits

0xda93,	// (0x0005ccd8) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0005ebe3) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0005ebe3) bg_list_pane_g

0xbe90,	// (0x0005b0d5) list_double2_graphic_large_graphic_pane_ParamLimits

0xbe90,	// (0x0005b0d5) list_double2_graphic_large_graphic_pane

0xbe90,	// (0x0005b0d5) list_double2_graphic_pane_ParamLimits

0xbe90,	// (0x0005b0d5) list_double2_graphic_pane

0xbe90,	// (0x0005b0d5) list_double2_large_graphic_pane_ParamLimits

0xbe90,	// (0x0005b0d5) list_double2_large_graphic_pane

0xbe90,	// (0x0005b0d5) list_double2_pane_ParamLimits

0xbe90,	// (0x0005b0d5) list_double2_pane

0xbe90,	// (0x0005b0d5) list_double_graphic_heading_pane_ParamLimits

0xbe90,	// (0x0005b0d5) list_double_graphic_heading_pane

0xbe90,	// (0x0005b0d5) list_double_graphic_pane_ParamLimits

0xbe90,	// (0x0005b0d5) list_double_graphic_pane

0xbe90,	// (0x0005b0d5) list_double_heading_pane_ParamLimits

0xbe90,	// (0x0005b0d5) list_double_heading_pane

0xbe90,	// (0x0005b0d5) list_double_large_graphic_pane_ParamLimits

0xbe90,	// (0x0005b0d5) list_double_large_graphic_pane

0xbe90,	// (0x0005b0d5) list_double_number_pane_ParamLimits

0xbe90,	// (0x0005b0d5) list_double_number_pane

0xbe90,	// (0x0005b0d5) list_double_pane_ParamLimits

0xbe90,	// (0x0005b0d5) list_double_pane

0xbe90,	// (0x0005b0d5) list_double_time_pane_ParamLimits

0xbe90,	// (0x0005b0d5) list_double_time_pane

0xbe90,	// (0x0005b0d5) list_setting_number_pane_ParamLimits

0xbe90,	// (0x0005b0d5) list_setting_number_pane

0xbe90,	// (0x0005b0d5) list_setting_pane_ParamLimits

0xbe90,	// (0x0005b0d5) list_setting_pane

0xda2f,	// (0x0005cc74) list_single_2graphic_pane_ParamLimits

0xda2f,	// (0x0005cc74) list_single_2graphic_pane

0xda2f,	// (0x0005cc74) list_single_graphic_heading_pane_ParamLimits

0xda2f,	// (0x0005cc74) list_single_graphic_heading_pane

0xda2f,	// (0x0005cc74) list_single_graphic_pane_ParamLimits

0xda2f,	// (0x0005cc74) list_single_graphic_pane

0xda2f,	// (0x0005cc74) list_single_heading_pane_ParamLimits

0xda2f,	// (0x0005cc74) list_single_heading_pane

0xda66,	// (0x0005ccab) list_single_large_graphic_pane_ParamLimits

0xda66,	// (0x0005ccab) list_single_large_graphic_pane

0xda2f,	// (0x0005cc74) list_single_number_heading_pane_ParamLimits

0xda2f,	// (0x0005cc74) list_single_number_heading_pane

0xda2f,	// (0x0005cc74) list_single_number_pane_ParamLimits

0xda2f,	// (0x0005cc74) list_single_number_pane

0xda2f,	// (0x0005cc74) list_single_pane_ParamLimits

0xda2f,	// (0x0005cc74) list_single_pane

0x2442,	// (0x00051687) list_highlight_pane_cp1

0x4eb0,	// (0x000540f5) list_single_pane_g1_ParamLimits

0x4eb0,	// (0x000540f5) list_single_pane_g1

0x276d,	// (0x000519b2) list_single_pane_g2_ParamLimits

0x276d,	// (0x000519b2) list_single_pane_g2

0x0001,

0xf5ee,	// (0x0005e833) list_single_pane_g_ParamLimits

0xf5ee,	// (0x0005e833) list_single_pane_g

0x286b,	// (0x00051ab0) list_single_pane_t1_ParamLimits

0x286b,	// (0x00051ab0) list_single_pane_t1

0x4eb0,	// (0x000540f5) list_single_number_pane_g1_ParamLimits

0x4eb0,	// (0x000540f5) list_single_number_pane_g1

0x276d,	// (0x000519b2) list_single_number_pane_g2_ParamLimits

0x276d,	// (0x000519b2) list_single_number_pane_g2

0x0001,

0xf5ee,	// (0x0005e833) list_single_number_pane_g_ParamLimits

0xf5ee,	// (0x0005e833) list_single_number_pane_g

0x11d0,	// (0x00050415) list_single_number_pane_t1_ParamLimits

0x11d0,	// (0x00050415) list_single_number_pane_t1

0xbe52,	// (0x0005b097) list_single_number_pane_t2_ParamLimits

0xbe52,	// (0x0005b097) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0005eba4) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0005eba4) list_single_number_pane_t

0xb53e,	// (0x0005a783) list_single_graphic_pane_g1_ParamLimits

0xb53e,	// (0x0005a783) list_single_graphic_pane_g1

0x4eb0,	// (0x000540f5) list_single_graphic_pane_g2_ParamLimits

0x4eb0,	// (0x000540f5) list_single_graphic_pane_g2

0x276d,	// (0x000519b2) list_single_graphic_pane_g3_ParamLimits

0x276d,	// (0x000519b2) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0005e822) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0005e822) list_single_graphic_pane_g

0xb54a,	// (0x0005a78f) list_single_graphic_pane_t1_ParamLimits

0xb54a,	// (0x0005a78f) list_single_graphic_pane_t1

0xb560,	// (0x0005a7a5) list_single_heading_pane_g1_ParamLimits

0xb560,	// (0x0005a7a5) list_single_heading_pane_g1

0x276d,	// (0x000519b2) list_single_heading_pane_g2_ParamLimits

0x276d,	// (0x000519b2) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0005e829) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0005e829) list_single_heading_pane_g

0xb573,	// (0x0005a7b8) list_single_heading_pane_t1_ParamLimits

0xb573,	// (0x0005a7b8) list_single_heading_pane_t1

0xb589,	// (0x0005a7ce) list_single_heading_pane_t2_ParamLimits

0xb589,	// (0x0005a7ce) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0005e82e) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0005e82e) list_single_heading_pane_t

0x4eb0,	// (0x000540f5) list_single_number_heading_pane_g1_ParamLimits

0x4eb0,	// (0x000540f5) list_single_number_heading_pane_g1

0x276d,	// (0x000519b2) list_single_number_heading_pane_g2_ParamLimits

0x276d,	// (0x000519b2) list_single_number_heading_pane_g2

0x0001,

0xf5ee,	// (0x0005e833) list_single_number_heading_pane_g_ParamLimits

0xf5ee,	// (0x0005e833) list_single_number_heading_pane_g

0xb59b,	// (0x0005a7e0) list_single_number_heading_pane_t1_ParamLimits

0xb59b,	// (0x0005a7e0) list_single_number_heading_pane_t1

0xb5b1,	// (0x0005a7f6) list_single_number_heading_pane_t2_ParamLimits

0xb5b1,	// (0x0005a7f6) list_single_number_heading_pane_t2

0x2845,	// (0x00051a8a) list_single_number_heading_pane_t3_ParamLimits

0x2845,	// (0x00051a8a) list_single_number_heading_pane_t3

0x0002,

0xf5f3,	// (0x0005e838) list_single_number_heading_pane_t_ParamLimits

0xf5f3,	// (0x0005e838) list_single_number_heading_pane_t

0xb5c3,	// (0x0005a808) list_single_graphic_heading_pane_g1_ParamLimits

0xb5c3,	// (0x0005a808) list_single_graphic_heading_pane_g1

0xb5d9,	// (0x0005a81e) list_single_graphic_heading_pane_g4_ParamLimits

0xb5d9,	// (0x0005a81e) list_single_graphic_heading_pane_g4

0x276d,	// (0x000519b2) list_single_graphic_heading_pane_g5_ParamLimits

0x276d,	// (0x000519b2) list_single_graphic_heading_pane_g5

0x0002,

0xf5fa,	// (0x0005e83f) list_single_graphic_heading_pane_g_ParamLimits

0xf5fa,	// (0x0005e83f) list_single_graphic_heading_pane_g

0xb59b,	// (0x0005a7e0) list_single_graphic_heading_pane_t1_ParamLimits

0xb59b,	// (0x0005a7e0) list_single_graphic_heading_pane_t1

0xb5ea,	// (0x0005a82f) list_single_graphic_heading_pane_t2_ParamLimits

0xb5ea,	// (0x0005a82f) list_single_graphic_heading_pane_t2

0x0001,

0xf601,	// (0x0005e846) list_single_graphic_heading_pane_t_ParamLimits

0xf601,	// (0x0005e846) list_single_graphic_heading_pane_t

0x2881,	// (0x00051ac6) list_single_large_graphic_pane_g1_ParamLimits

0x2881,	// (0x00051ac6) list_single_large_graphic_pane_g1

0x288d,	// (0x00051ad2) list_single_large_graphic_pane_g2_ParamLimits

0x288d,	// (0x00051ad2) list_single_large_graphic_pane_g2

0x2899,	// (0x00051ade) list_single_large_graphic_pane_g3_ParamLimits

0x2899,	// (0x00051ade) list_single_large_graphic_pane_g3

0x0002,

0xf606,	// (0x0005e84b) list_single_large_graphic_pane_g_ParamLimits

0xf606,	// (0x0005e84b) list_single_large_graphic_pane_g

0x5572,	// (0x000547b7) wait_border_pane_g2_copy1

0xb600,	// (0x0005a845) list_single_large_graphic_pane_g4_cp2

0x28a5,	// (0x00051aea) list_single_large_graphic_pane_t1_ParamLimits

0x28a5,	// (0x00051aea) list_single_large_graphic_pane_t1

0x4eb0,	// (0x000540f5) list_double_pane_g1_ParamLimits

0x4eb0,	// (0x000540f5) list_double_pane_g1

0x276d,	// (0x000519b2) list_double_pane_g2_ParamLimits

0x276d,	// (0x000519b2) list_double_pane_g2

0x0001,

0xf5ee,	// (0x0005e833) list_double_pane_g_ParamLimits

0xf5ee,	// (0x0005e833) list_double_pane_g

0x286b,	// (0x00051ab0) list_double_pane_t1_ParamLimits

0x286b,	// (0x00051ab0) list_double_pane_t1

0xb608,	// (0x0005a84d) list_double_pane_t2_ParamLimits

0xb608,	// (0x0005a84d) list_double_pane_t2

0x0001,

0xf60d,	// (0x0005e852) list_double_pane_t_ParamLimits

0xf60d,	// (0x0005e852) list_double_pane_t

0xb61a,	// (0x0005a85f) list_double2_pane_g1_ParamLimits

0xb61a,	// (0x0005a85f) list_double2_pane_g1

0xb62b,	// (0x0005a870) list_double2_pane_g2_ParamLimits

0xb62b,	// (0x0005a870) list_double2_pane_g2

0x0001,

0xf612,	// (0x0005e857) list_double2_pane_g_ParamLimits

0xf612,	// (0x0005e857) list_double2_pane_g

0xb637,	// (0x0005a87c) list_double2_pane_t1_ParamLimits

0xb637,	// (0x0005a87c) list_double2_pane_t1

0xb64d,	// (0x0005a892) list_double2_pane_t2_ParamLimits

0xb64d,	// (0x0005a892) list_double2_pane_t2

0x0001,

0xf617,	// (0x0005e85c) list_double2_pane_t_ParamLimits

0xf617,	// (0x0005e85c) list_double2_pane_t

0x4eb0,	// (0x000540f5) list_double_number_pane_g1_ParamLimits

0x4eb0,	// (0x000540f5) list_double_number_pane_g1

0x276d,	// (0x000519b2) list_double_number_pane_g2_ParamLimits

0x276d,	// (0x000519b2) list_double_number_pane_g2

0x0001,

0xf5ee,	// (0x0005e833) list_double_number_pane_g_ParamLimits

0xf5ee,	// (0x0005e833) list_double_number_pane_g

0xb65f,	// (0x0005a8a4) list_double_number_pane_t1_ParamLimits

0xb65f,	// (0x0005a8a4) list_double_number_pane_t1

0x11d0,	// (0x00050415) list_double_number_pane_t2_ParamLimits

0x11d0,	// (0x00050415) list_double_number_pane_t2

0xb671,	// (0x0005a8b6) list_double_number_pane_t3_ParamLimits

0xb671,	// (0x0005a8b6) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x0005e861) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x0005e861) list_double_number_pane_t

0x11c4,	// (0x00050409) list_double_graphic_pane_g1_ParamLimits

0x11c4,	// (0x00050409) list_double_graphic_pane_g1

0x2a0e,	// (0x00051c53) list_double_graphic_pane_g2_ParamLimits

0x2a0e,	// (0x00051c53) list_double_graphic_pane_g2

0x2a1d,	// (0x00051c62) list_double_graphic_pane_g3_ParamLimits

0x2a1d,	// (0x00051c62) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x0005e868) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x0005e868) list_double_graphic_pane_g

0xb54a,	// (0x0005a78f) list_double_graphic_pane_t1_ParamLimits

0xb54a,	// (0x0005a78f) list_double_graphic_pane_t1

0xb68f,	// (0x0005a8d4) list_double_graphic_pane_t2_ParamLimits

0xb68f,	// (0x0005a8d4) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x0005e871) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x0005e871) list_double_graphic_pane_t

0x11c4,	// (0x00050409) list_double2_graphic_pane_g1_ParamLimits

0x11c4,	// (0x00050409) list_double2_graphic_pane_g1

0x4eb0,	// (0x000540f5) list_double2_graphic_pane_g2_ParamLimits

0x4eb0,	// (0x000540f5) list_double2_graphic_pane_g2

0x276d,	// (0x000519b2) list_double2_graphic_pane_g3_ParamLimits

0x276d,	// (0x000519b2) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x0005e876) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x0005e876) list_double2_graphic_pane_g

0x11d0,	// (0x00050415) list_double2_graphic_pane_t1_ParamLimits

0x11d0,	// (0x00050415) list_double2_graphic_pane_t1

0xb6a1,	// (0x0005a8e6) list_double2_graphic_pane_t2_ParamLimits

0xb6a1,	// (0x0005a8e6) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x0005e87d) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x0005e87d) list_double2_graphic_pane_t

0xb6b3,	// (0x0005a8f8) list_double_large_graphic_pane_g1_ParamLimits

0xb6b3,	// (0x0005a8f8) list_double_large_graphic_pane_g1

0xb6d9,	// (0x0005a91e) list_double_large_graphic_pane_g2_ParamLimits

0xb6d9,	// (0x0005a91e) list_double_large_graphic_pane_g2

0x276d,	// (0x000519b2) list_double_large_graphic_pane_g3_ParamLimits

0x276d,	// (0x000519b2) list_double_large_graphic_pane_g3

0xb6ef,	// (0x0005a934) list_double_large_graphic_pane_g4_ParamLimits

0xb6ef,	// (0x0005a934) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x0005e882) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x0005e882) list_double_large_graphic_pane_g

0xb702,	// (0x0005a947) list_double_large_graphic_pane_t1_ParamLimits

0xb702,	// (0x0005a947) list_double_large_graphic_pane_t1

0xb71b,	// (0x0005a960) list_double_large_graphic_pane_t2_ParamLimits

0xb71b,	// (0x0005a960) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x0005e88d) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x0005e88d) list_double_large_graphic_pane_t

0xb72d,	// (0x0005a972) list_double2_large_graphic_pane_g1_ParamLimits

0xb72d,	// (0x0005a972) list_double2_large_graphic_pane_g1

0xb5d9,	// (0x0005a81e) list_double2_large_graphic_pane_g2_ParamLimits

0xb5d9,	// (0x0005a81e) list_double2_large_graphic_pane_g2

0x276d,	// (0x000519b2) list_double2_large_graphic_pane_g3_ParamLimits

0x276d,	// (0x000519b2) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x0005e892) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x0005e892) list_double2_large_graphic_pane_g

0xb59b,	// (0x0005a7e0) list_double2_large_graphic_pane_t1_ParamLimits

0xb59b,	// (0x0005a7e0) list_double2_large_graphic_pane_t1

0xb739,	// (0x0005a97e) list_double2_large_graphic_pane_t2_ParamLimits

0xb739,	// (0x0005a97e) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x0005e899) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x0005e899) list_double2_large_graphic_pane_t

0xb74b,	// (0x0005a990) list_double_heading_pane_g1_ParamLimits

0xb74b,	// (0x0005a990) list_double_heading_pane_g1

0xb75c,	// (0x0005a9a1) list_double_heading_pane_g2_ParamLimits

0xb75c,	// (0x0005a9a1) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x0005e89e) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x0005e89e) list_double_heading_pane_g

0xb768,	// (0x0005a9ad) list_double_heading_pane_t1_ParamLimits

0xb768,	// (0x0005a9ad) list_double_heading_pane_t1

0xb77e,	// (0x0005a9c3) list_double_heading_pane_t2_ParamLimits

0xb77e,	// (0x0005a9c3) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x0005e8a3) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x0005e8a3) list_double_heading_pane_t

0x05e8,	// (0x0004f82d) list_double_graphic_heading_pane_g1_ParamLimits

0x05e8,	// (0x0004f82d) list_double_graphic_heading_pane_g1

0xb74b,	// (0x0005a990) list_double_graphic_heading_pane_g2_ParamLimits

0xb74b,	// (0x0005a990) list_double_graphic_heading_pane_g2

0xb75c,	// (0x0005a9a1) list_double_graphic_heading_pane_g3_ParamLimits

0xb75c,	// (0x0005a9a1) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x0005e8a8) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x0005e8a8) list_double_graphic_heading_pane_g

0xb790,	// (0x0005a9d5) list_double_graphic_heading_pane_t1_ParamLimits

0xb790,	// (0x0005a9d5) list_double_graphic_heading_pane_t1

0xb7a6,	// (0x0005a9eb) list_double_graphic_heading_pane_t2_ParamLimits

0xb7a6,	// (0x0005a9eb) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x0005e8af) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x0005e8af) list_double_graphic_heading_pane_t

0xb61a,	// (0x0005a85f) list_double_time_pane_g1_ParamLimits

0xb61a,	// (0x0005a85f) list_double_time_pane_g1

0xb62b,	// (0x0005a870) list_double_time_pane_g2_ParamLimits

0xb62b,	// (0x0005a870) list_double_time_pane_g2

0x0001,

0xf612,	// (0x0005e857) list_double_time_pane_g_ParamLimits

0xf612,	// (0x0005e857) list_double_time_pane_g

0xb7b8,	// (0x0005a9fd) list_double_time_pane_t1_ParamLimits

0xb7b8,	// (0x0005a9fd) list_double_time_pane_t1

0xb7ce,	// (0x0005aa13) list_double_time_pane_t2_ParamLimits

0xb7ce,	// (0x0005aa13) list_double_time_pane_t2

0xb7e0,	// (0x0005aa25) list_double_time_pane_t3_ParamLimits

0xb7e0,	// (0x0005aa25) list_double_time_pane_t3

0xb7f2,	// (0x0005aa37) list_double_time_pane_t4_ParamLimits

0xb7f2,	// (0x0005aa37) list_double_time_pane_t4

0x0003,

0xf66f,	// (0x0005e8b4) list_double_time_pane_t_ParamLimits

0xf66f,	// (0x0005e8b4) list_double_time_pane_t

0xb804,	// (0x0005aa49) list_setting_pane_g1_ParamLimits

0xb804,	// (0x0005aa49) list_setting_pane_g1

0x0760,	// (0x0004f9a5) list_setting_pane_g2_ParamLimits

0x0760,	// (0x0004f9a5) list_setting_pane_g2

0x0001,

0xf678,	// (0x0005e8bd) list_setting_pane_g_ParamLimits

0xf678,	// (0x0005e8bd) list_setting_pane_g

0xb810,	// (0x0005aa55) list_setting_pane_t1_ParamLimits

0xb810,	// (0x0005aa55) list_setting_pane_t1

0xb82a,	// (0x0005aa6f) list_setting_pane_t2_ParamLimits

0xb82a,	// (0x0005aa6f) list_setting_pane_t2

0x0002,

0xf67d,	// (0x0005e8c2) list_setting_pane_t_ParamLimits

0xf67d,	// (0x0005e8c2) list_setting_pane_t

0xb869,	// (0x0005aaae) set_value_pane_cp_ParamLimits

0xb869,	// (0x0005aaae) set_value_pane_cp

0xb875,	// (0x0005aaba) list_setting_number_pane_g1_ParamLimits

0xb875,	// (0x0005aaba) list_setting_number_pane_g1

0xb881,	// (0x0005aac6) list_setting_number_pane_g2_ParamLimits

0xb881,	// (0x0005aac6) list_setting_number_pane_g2

0x0001,

0xf684,	// (0x0005e8c9) list_setting_number_pane_g_ParamLimits

0xf684,	// (0x0005e8c9) list_setting_number_pane_g

0xb88d,	// (0x0005aad2) list_setting_number_pane_t1_ParamLimits

0xb88d,	// (0x0005aad2) list_setting_number_pane_t1

0xb8a6,	// (0x0005aaeb) list_setting_number_pane_t2_ParamLimits

0xb8a6,	// (0x0005aaeb) list_setting_number_pane_t2

0xb8c0,	// (0x0005ab05) list_setting_number_pane_t3_ParamLimits

0xb8c0,	// (0x0005ab05) list_setting_number_pane_t3

0x0003,

0xf689,	// (0x0005e8ce) list_setting_number_pane_t_ParamLimits

0xf689,	// (0x0005e8ce) list_setting_number_pane_t

0xb869,	// (0x0005aaae) set_value_pane_ParamLimits

0xb869,	// (0x0005aaae) set_value_pane

0x345a,	// (0x0005269f) bg_set_opt_pane_ParamLimits

0x345a,	// (0x0005269f) bg_set_opt_pane

0x08c3,	// (0x0004fb08) set_value_pane_t1

0x347b,	// (0x000526c0) slider_set_pane_cp3

0x3484,	// (0x000526c9) volume_small_pane_cp

0x348d,	// (0x000526d2) list_form_gen_pane

0x3496,	// (0x000526db) scroll_pane_cp8

0xb903,	// (0x0005ab48) form_field_data_pane_ParamLimits

0xb903,	// (0x0005ab48) form_field_data_pane

0xb91a,	// (0x0005ab5f) form_field_data_wide_pane_ParamLimits

0xb91a,	// (0x0005ab5f) form_field_data_wide_pane

0xb93a,	// (0x0005ab7f) form_field_popup_pane_ParamLimits

0xb93a,	// (0x0005ab7f) form_field_popup_pane

0xb952,	// (0x0005ab97) form_field_popup_wide_pane_ParamLimits

0xb952,	// (0x0005ab97) form_field_popup_wide_pane

0x095f,	// (0x0004fba4) form_field_slider_pane_ParamLimits

0x095f,	// (0x0004fba4) form_field_slider_pane

0x0972,	// (0x0004fbb7) form_field_slider_wide_pane_ParamLimits

0x0972,	// (0x0004fbb7) form_field_slider_wide_pane

0x34a7,	// (0x000526ec) data_form_pane

0xb973,	// (0x0005abb8) form_field_data_pane_t1

0x34b3,	// (0x000526f8) input_focus_pane

0x34c1,	// (0x00052706) data_form_wide_pane

0x09b3,	// (0x0004fbf8) form_field_data_wide_pane_t1

0x3224,	// (0x00052469) input_focus_pane_cp6

0xb98d,	// (0x0005abd2) form_field_popup_pane_t1

0x34b3,	// (0x000526f8) input_focus_pane_cp7

0x34ed,	// (0x00052732) list_form_pane

0x09f5,	// (0x0004fc3a) form_field_popup_wide_pane_t1

0x34b3,	// (0x000526f8) input_focus_pane_cp8

0x34f9,	// (0x0005273e) list_form_wide_pane

0xb9af,	// (0x0005abf4) form_field_slider_pane_t1_ParamLimits

0xb9af,	// (0x0005abf4) form_field_slider_pane_t1

0xb9c7,	// (0x0005ac0c) form_field_slider_pane_t2_ParamLimits

0xb9c7,	// (0x0005ac0c) form_field_slider_pane_t2

0x0001,

0xf699,	// (0x0005e8de) form_field_slider_pane_t_ParamLimits

0xf699,	// (0x0005e8de) form_field_slider_pane_t

0x2ec2,	// (0x00052107) input_focus_pane_cp9_ParamLimits

0x2ec2,	// (0x00052107) input_focus_pane_cp9

0xb9dc,	// (0x0005ac21) slider_cont_pane_ParamLimits

0xb9dc,	// (0x0005ac21) slider_cont_pane

0x3508,	// (0x0005274d) form_field_slider_wide_pane_t1_ParamLimits

0x3508,	// (0x0005274d) form_field_slider_wide_pane_t1

0x0a51,	// (0x0004fc96) form_field_slider_wide_pane_t2_ParamLimits

0x0a51,	// (0x0004fc96) form_field_slider_wide_pane_t2

0x0001,

0xf69e,	// (0x0005e8e3) form_field_slider_wide_pane_t_ParamLimits

0xf69e,	// (0x0005e8e3) form_field_slider_wide_pane_t

0x2ec2,	// (0x00052107) input_focus_pane_cp10_ParamLimits

0x2ec2,	// (0x00052107) input_focus_pane_cp10

0xb9f0,	// (0x0005ac35) slider_cont_pane_cp1_ParamLimits

0xb9f0,	// (0x0005ac35) slider_cont_pane_cp1

0xba04,	// (0x0005ac49) slider_form_pane_cp

0x351a,	// (0x0005275f) input_focus_pane_g1

0x3522,	// (0x00052767) input_focus_pane_g2

0x352a,	// (0x0005276f) input_focus_pane_g3

0x3532,	// (0x00052777) input_focus_pane_g4

0x353a,	// (0x0005277f) input_focus_pane_g5

0x3542,	// (0x00052787) input_focus_pane_g6

0x354a,	// (0x0005278f) input_focus_pane_g7

0x3552,	// (0x00052797) input_focus_pane_g8

0x355a,	// (0x0005279f) input_focus_pane_g9

0x2438,	// (0x0005167d) input_focus_pane_g10

0x0009,

0xf6a3,	// (0x0005e8e8) input_focus_pane_g

0x557b,	// (0x000547c0) wait_border_pane_g3_copy1

0xba0c,	// (0x0005ac51) data_form_pane_t1

0x2438,	// (0x0005167d) wait_anim_pane_g1_copy1

0xbe64,	// (0x0005b0a9) data_form_wide_pane_t1

0xba25,	// (0x0005ac6a) list_form_graphic_pane_cp_ParamLimits

0xba25,	// (0x0005ac6a) list_form_graphic_pane_cp

0x64b7,	// (0x000556fc) slider_form_pane_g1

0x64c0,	// (0x00055705) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0005ebd4) slider_form_pane_g

0xba36,	// (0x0005ac7b) list_form_graphic_pane_ParamLimits

0xba36,	// (0x0005ac7b) list_form_graphic_pane

0x0acf,	// (0x0004fd14) list_form_graphic_pane_g1

0x0ad7,	// (0x0004fd1c) list_form_graphic_pane_t1_ParamLimits

0x0ad7,	// (0x0004fd1c) list_form_graphic_pane_t1

0x2522,	// (0x00051767) list_highlight_pane_cp5_ParamLimits

0x2522,	// (0x00051767) list_highlight_pane_cp5

0xba48,	// (0x0005ac8d) find_pane_g1

0x3562,	// (0x000527a7) input_find_pane

0xba51,	// (0x0005ac96) input_find_pane_g1_ParamLimits

0xba51,	// (0x0005ac96) input_find_pane_g1

0xba5d,	// (0x0005aca2) input_find_pane_t1_ParamLimits

0xba5d,	// (0x0005aca2) input_find_pane_t1

0xba72,	// (0x0005acb7) input_find_pane_t2_ParamLimits

0xba72,	// (0x0005acb7) input_find_pane_t2

0x0001,

0xf6b8,	// (0x0005e8fd) input_find_pane_t_ParamLimits

0xf6b8,	// (0x0005e8fd) input_find_pane_t

0x356b,	// (0x000527b0) input_focus_pane_cp5_ParamLimits

0x356b,	// (0x000527b0) input_focus_pane_cp5

0xc802,	// (0x0005ba47) bg_popup_window_pane_cp2_ParamLimits

0xc802,	// (0x0005ba47) bg_popup_window_pane_cp2

0xc80f,	// (0x0005ba54) listscroll_menu_pane_ParamLimits

0xc80f,	// (0x0005ba54) listscroll_menu_pane

0xc81b,	// (0x0005ba60) popup_submenu_window_ParamLimits

0xc81b,	// (0x0005ba60) popup_submenu_window

0x35c8,	// (0x0005280d) find_popup_pane_g1

0x35d0,	// (0x00052815) input_popup_find_pane_cp

0x356b,	// (0x000527b0) input_focus_pane_cp4_ParamLimits

0x356b,	// (0x000527b0) input_focus_pane_cp4

0x35e6,	// (0x0005282b) input_popup_find_pane_t1_ParamLimits

0x35e6,	// (0x0005282b) input_popup_find_pane_t1

0x2442,	// (0x00051687) bg_popup_sub_pane_cp

0x3614,	// (0x00052859) listscroll_popup_sub_pane

0x361c,	// (0x00052861) list_submenu_pane_ParamLimits

0x361c,	// (0x00052861) list_submenu_pane

0x362d,	// (0x00052872) scroll_pane_cp4

0x3635,	// (0x0005287a) list_single_popup_submenu_pane_ParamLimits

0x3635,	// (0x0005287a) list_single_popup_submenu_pane

0x3649,	// (0x0005288e) list_single_popup_submenu_pane_g1

0x3651,	// (0x00052896) list_single_popup_submenu_pane_t1_ParamLimits

0x3651,	// (0x00052896) list_single_popup_submenu_pane_t1

0x2ec2,	// (0x00052107) bg_active_tab_pane_cp1_ParamLimits

0x2ec2,	// (0x00052107) bg_active_tab_pane_cp1

0xc853,	// (0x0005ba98) tabs_2_active_pane_g1

0xc85b,	// (0x0005baa0) tabs_2_active_pane_t1

0x2ec2,	// (0x00052107) bg_passive_tab_pane_cp1_ParamLimits

0x2ec2,	// (0x00052107) bg_passive_tab_pane_cp1

0xc853,	// (0x0005ba98) tabs_2_passive_pane_g1

0xc85b,	// (0x0005baa0) tabs_2_passive_pane_t1

0x2522,	// (0x00051767) bg_active_tab_pane_cp4

0xc86d,	// (0x0005bab2) tabs_2_long_active_pane_t1

0x4454,	// (0x00053699) bg_passive_tab_pane_cp4

0x1213,	// (0x00050458) list_single_midp_graphic_pane_g4_ParamLimits

0x2522,	// (0x00051767) bg_active_tab_pane_cp5

0xc880,	// (0x0005bac5) tabs_3_long_active_pane_t1

0x4454,	// (0x00053699) bg_passive_tab_pane_cp5

0x1213,	// (0x00050458) list_single_midp_graphic_pane_g4

0x2522,	// (0x00051767) bg_popup_window_pane_cp13_ParamLimits

0x2522,	// (0x00051767) bg_popup_window_pane_cp13

0x36c8,	// (0x0005290d) listscroll_popup_fast_pane_ParamLimits

0x36c8,	// (0x0005290d) listscroll_popup_fast_pane

0x36d7,	// (0x0005291c) grid_popup_fast_pane_ParamLimits

0x36d7,	// (0x0005291c) grid_popup_fast_pane

0x36e9,	// (0x0005292e) scroll_pane_cp9_ParamLimits

0x36e9,	// (0x0005292e) scroll_pane_cp9

0x7d76,	// (0x00056fbb) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7d76,	// (0x00056fbb) list_single_graphic_hl_pane_t1_cp2

0x370d,	// (0x00052952) input_focus_pane_cp20_ParamLimits

0x370d,	// (0x00052952) input_focus_pane_cp20

0x371b,	// (0x00052960) query_popup_data_pane_t1_ParamLimits

0x371b,	// (0x00052960) query_popup_data_pane_t1

0x372e,	// (0x00052973) query_popup_data_pane_t2_ParamLimits

0x372e,	// (0x00052973) query_popup_data_pane_t2

0x3774,	// (0x000529b9) query_popup_data_pane_t3_ParamLimits

0x3774,	// (0x000529b9) query_popup_data_pane_t3

0x37b5,	// (0x000529fa) query_popup_data_pane_t4_ParamLimits

0x37b5,	// (0x000529fa) query_popup_data_pane_t4

0x37fd,	// (0x00052a42) query_popup_data_pane_t5_ParamLimits

0x37fd,	// (0x00052a42) query_popup_data_pane_t5

0x0004,

0xf6bd,	// (0x0005e902) query_popup_data_pane_t_ParamLimits

0xf6bd,	// (0x0005e902) query_popup_data_pane_t

0x351a,	// (0x0005275f) bg_set_opt_pane_g1

0x3522,	// (0x00052767) bg_set_opt_pane_g2

0x352a,	// (0x0005276f) bg_set_opt_pane_g3

0x3532,	// (0x00052777) bg_set_opt_pane_g4

0x353a,	// (0x0005277f) bg_set_opt_pane_g5

0x3542,	// (0x00052787) bg_set_opt_pane_g6

0x354a,	// (0x0005278f) bg_set_opt_pane_g7

0x3552,	// (0x00052797) bg_set_opt_pane_g8

0x355a,	// (0x0005279f) bg_set_opt_pane_g9

0x0008,

0xf6c8,	// (0x0005e90d) bg_set_opt_pane_g

0x0e54,	// (0x00050099) control_top_pane_stacon_ParamLimits

0x0e54,	// (0x00050099) control_top_pane_stacon

0x0ea7,	// (0x000500ec) signal_pane_stacon_ParamLimits

0x0ea7,	// (0x000500ec) signal_pane_stacon

0x3d9b,	// (0x00052fe0) stacon_top_pane_g1_ParamLimits

0x3d9b,	// (0x00052fe0) stacon_top_pane_g1

0x0ecc,	// (0x00050111) title_pane_stacon_ParamLimits

0x0ecc,	// (0x00050111) title_pane_stacon

0x0ef6,	// (0x0005013b) uni_indicator_pane_stacon_ParamLimits

0x0ef6,	// (0x0005013b) uni_indicator_pane_stacon

0x0f0b,	// (0x00050150) battery_pane_stacon_ParamLimits

0x0f0b,	// (0x00050150) battery_pane_stacon

0x0f4f,	// (0x00050194) control_bottom_pane_stacon_ParamLimits

0x0f4f,	// (0x00050194) control_bottom_pane_stacon

0x0f72,	// (0x000501b7) navi_pane_stacon_ParamLimits

0x0f72,	// (0x000501b7) navi_pane_stacon

0x3dbd,	// (0x00053002) stacon_bottom_pane_g1_ParamLimits

0x3dbd,	// (0x00053002) stacon_bottom_pane_g1

0x0b2b,	// (0x0004fd70) aid_levels_signal_lsc_ParamLimits

0x0b2b,	// (0x0004fd70) aid_levels_signal_lsc

0x0b42,	// (0x0004fd87) signal_pane_stacon_g1_ParamLimits

0x0b42,	// (0x0004fd87) signal_pane_stacon_g1

0x0b56,	// (0x0004fd9b) signal_pane_stacon_g2_ParamLimits

0x0b56,	// (0x0004fd9b) signal_pane_stacon_g2

0x0001,

0xf6db,	// (0x0005e920) signal_pane_stacon_g_ParamLimits

0xf6db,	// (0x0005e920) signal_pane_stacon_g

0x0b8b,	// (0x0004fdd0) title_pane_stacon_t1_ParamLimits

0x0b8b,	// (0x0004fdd0) title_pane_stacon_t1

0x3841,	// (0x00052a86) uni_indicator_pane_stacon_g1

0x384b,	// (0x00052a90) uni_indicator_pane_stacon_g2

0x3855,	// (0x00052a9a) uni_indicator_pane_stacon_g3

0x385f,	// (0x00052aa4) uni_indicator_pane_stacon_g4

0x0003,

0xf6e7,	// (0x0005e92c) uni_indicator_pane_stacon_g

0x0bb0,	// (0x0004fdf5) control_top_pane_stacon_g1

0x0bb8,	// (0x0004fdfd) control_top_pane_stacon_t1_ParamLimits

0x0bb8,	// (0x0004fdfd) control_top_pane_stacon_t1

0x0bef,	// (0x0004fe34) aid_levels_battery_lsc_ParamLimits

0x0bef,	// (0x0004fe34) aid_levels_battery_lsc

0x0c07,	// (0x0004fe4c) battery_pane_stacon_g1_ParamLimits

0x0c07,	// (0x0004fe4c) battery_pane_stacon_g1

0x0c1a,	// (0x0004fe5f) battery_pane_stacon_g2_ParamLimits

0x0c1a,	// (0x0004fe5f) battery_pane_stacon_g2

0x0001,

0xf6f0,	// (0x0005e935) battery_pane_stacon_g_ParamLimits

0xf6f0,	// (0x0005e935) battery_pane_stacon_g

0x0c58,	// (0x0004fe9d) navi_icon_pane_stacon

0x0c6c,	// (0x0004feb1) navi_navi_pane_stacon

0x0c58,	// (0x0004fe9d) navi_text_pane_stacon

0x0bb0,	// (0x0004fdf5) control_bottom_pane_stacon_g1

0x0c80,	// (0x0004fec5) control_bottom_pane_stacon_t1_ParamLimits

0x0c80,	// (0x0004fec5) control_bottom_pane_stacon_t1

0xc892,	// (0x0005bad7) grid_app_pane_ParamLimits

0xc892,	// (0x0005bad7) grid_app_pane

0xc8ca,	// (0x0005bb0f) scroll_pane_cp15_ParamLimits

0xc8ca,	// (0x0005bb0f) scroll_pane_cp15

0xc8e3,	// (0x0005bb28) cell_app_pane_ParamLimits

0xc8e3,	// (0x0005bb28) cell_app_pane

0xc928,	// (0x0005bb6d) cell_app_pane_g1_ParamLimits

0xc928,	// (0x0005bb6d) cell_app_pane_g1

0x3904,	// (0x00052b49) cell_app_pane_g2_ParamLimits

0x3904,	// (0x00052b49) cell_app_pane_g2

0x0001,

0xf6f5,	// (0x0005e93a) cell_app_pane_g_ParamLimits

0xf6f5,	// (0x0005e93a) cell_app_pane_g

0x3910,	// (0x00052b55) cell_app_pane_t1_ParamLimits

0x3910,	// (0x00052b55) cell_app_pane_t1

0x3927,	// (0x00052b6c) grid_highlight_pane_ParamLimits

0x3927,	// (0x00052b6c) grid_highlight_pane

0x351a,	// (0x0005275f) cell_highlight_pane_g1

0x3522,	// (0x00052767) cell_highlight_pane_g2

0x352a,	// (0x0005276f) cell_highlight_pane_g3

0x3532,	// (0x00052777) cell_highlight_pane_g4

0x353a,	// (0x0005277f) cell_highlight_pane_g5

0x3542,	// (0x00052787) cell_highlight_pane_g6

0x354a,	// (0x0005278f) cell_highlight_pane_g7

0x3552,	// (0x00052797) cell_highlight_pane_g8

0x355a,	// (0x0005279f) cell_highlight_pane_g9

0x2438,	// (0x0005167d) cell_highlight_pane_g10

0x0009,

0xf6a3,	// (0x0005e8e8) cell_highlight_pane_g

0x3938,	// (0x00052b7d) bg_scroll_pane

0x0cca,	// (0x0004ff0f) scroll_handle_pane

0x397f,	// (0x00052bc4) scroll_bg_pane_g1

0x3994,	// (0x00052bd9) scroll_bg_pane_g2

0x39ac,	// (0x00052bf1) scroll_bg_pane_g3

0x0002,

0xf6fa,	// (0x0005e93f) scroll_bg_pane_g

0x39c1,	// (0x00052c06) scroll_handle_focus_pane_ParamLimits

0x39c1,	// (0x00052c06) scroll_handle_focus_pane

0x397f,	// (0x00052bc4) scroll_handle_pane_g1

0x39ce,	// (0x00052c13) scroll_handle_pane_g2

0x39ac,	// (0x00052bf1) scroll_handle_pane_g3

0x0002,

0xf701,	// (0x0005e946) scroll_handle_pane_g

0x356b,	// (0x000527b0) bg_popup_sub_pane_cp21_ParamLimits

0x356b,	// (0x000527b0) bg_popup_sub_pane_cp21

0x39e2,	// (0x00052c27) popup_fep_japan_predictive_window_t1_ParamLimits

0x39e2,	// (0x00052c27) popup_fep_japan_predictive_window_t1

0x39fc,	// (0x00052c41) popup_fep_japan_predictive_window_t2_ParamLimits

0x39fc,	// (0x00052c41) popup_fep_japan_predictive_window_t2

0x3a2f,	// (0x00052c74) popup_fep_japan_predictive_window_t3_ParamLimits

0x3a2f,	// (0x00052c74) popup_fep_japan_predictive_window_t3

0x0002,

0xf708,	// (0x0005e94d) popup_fep_japan_predictive_window_t_ParamLimits

0xf708,	// (0x0005e94d) popup_fep_japan_predictive_window_t

0x2442,	// (0x00051687) bg_popup_sub_pane_cp23

0x3a66,	// (0x00052cab) listscroll_japin_cand_pane

0x3a6e,	// (0x00052cb3) popup_fep_japan_candidate_window_t1

0x3a7c,	// (0x00052cc1) candidate_pane_ParamLimits

0x3a7c,	// (0x00052cc1) candidate_pane

0x3a8e,	// (0x00052cd3) scroll_pane_cp30

0x3a96,	// (0x00052cdb) list_single_popup_jap_candidate_pane_ParamLimits

0x3a96,	// (0x00052cdb) list_single_popup_jap_candidate_pane

0x2442,	// (0x00051687) list_highlight_pane_cp30

0x3aab,	// (0x00052cf0) list_single_popup_jap_candidate_pane_t1

0x3aba,	// (0x00052cff) level_1_signal

0x3ac7,	// (0x00052d0c) level_2_signal

0x3ad4,	// (0x00052d19) level_3_signal

0x3ae1,	// (0x00052d26) level_4_signal

0x3aee,	// (0x00052d33) level_5_signal

0x3afb,	// (0x00052d40) level_6_signal

0x3b08,	// (0x00052d4d) level_7_signal

0x3aba,	// (0x00052cff) level_1_battery

0x3ac7,	// (0x00052d0c) level_2_battery

0x3ad4,	// (0x00052d19) level_3_battery

0x3ae1,	// (0x00052d26) level_4_battery

0x3aee,	// (0x00052d33) level_5_battery

0x3afb,	// (0x00052d40) level_6_battery

0x3b08,	// (0x00052d4d) level_7_battery

0x3b2d,	// (0x00052d72) list_menu_pane_ParamLimits

0x3b2d,	// (0x00052d72) list_menu_pane

0x3b3e,	// (0x00052d83) scroll_pane_cp25_ParamLimits

0x3b3e,	// (0x00052d83) scroll_pane_cp25

0x3b57,	// (0x00052d9c) list_double2_graphic_pane_cp2_ParamLimits

0x3b57,	// (0x00052d9c) list_double2_graphic_pane_cp2

0x3b57,	// (0x00052d9c) list_double2_large_graphic_pane_cp2_ParamLimits

0x3b57,	// (0x00052d9c) list_double2_large_graphic_pane_cp2

0x3b57,	// (0x00052d9c) list_double2_pane_cp2_ParamLimits

0x3b57,	// (0x00052d9c) list_double2_pane_cp2

0x3b57,	// (0x00052d9c) list_double_graphic_pane_cp2_ParamLimits

0x3b57,	// (0x00052d9c) list_double_graphic_pane_cp2

0x3b57,	// (0x00052d9c) list_double_large_graphic_pane_cp2_ParamLimits

0x3b57,	// (0x00052d9c) list_double_large_graphic_pane_cp2

0x3b57,	// (0x00052d9c) list_double_number_pane_cp2_ParamLimits

0x3b57,	// (0x00052d9c) list_double_number_pane_cp2

0x3b57,	// (0x00052d9c) list_double_pane_cp2_ParamLimits

0x3b57,	// (0x00052d9c) list_double_pane_cp2

0xc95b,	// (0x0005bba0) list_single_2graphic_pane_cp2_ParamLimits

0xc95b,	// (0x0005bba0) list_single_2graphic_pane_cp2

0xc95b,	// (0x0005bba0) list_single_graphic_heading_pane_cp2_ParamLimits

0xc95b,	// (0x0005bba0) list_single_graphic_heading_pane_cp2

0xc95b,	// (0x0005bba0) list_single_graphic_pane_cp2_ParamLimits

0xc95b,	// (0x0005bba0) list_single_graphic_pane_cp2

0xc95b,	// (0x0005bba0) list_single_heading_pane_cp2_ParamLimits

0xc95b,	// (0x0005bba0) list_single_heading_pane_cp2

0x3b94,	// (0x00052dd9) list_single_large_graphic_pane_cp2_ParamLimits

0x3b94,	// (0x00052dd9) list_single_large_graphic_pane_cp2

0xc95b,	// (0x0005bba0) list_single_number_heading_pane_cp2_ParamLimits

0xc95b,	// (0x0005bba0) list_single_number_heading_pane_cp2

0xc95b,	// (0x0005bba0) list_single_number_pane_cp2_ParamLimits

0xc95b,	// (0x0005bba0) list_single_number_pane_cp2

0xc95b,	// (0x0005bba0) list_single_pane_cp2_ParamLimits

0xc95b,	// (0x0005bba0) list_single_pane_cp2

0x3bea,	// (0x00052e2f) bg_popup_sub_pane_cp22

0x0d7c,	// (0x0004ffc1) popup_side_volume_key_window_g1

0x0da6,	// (0x0004ffeb) popup_side_volume_key_window_t1

0x0dc2,	// (0x00050007) volume_small_pane_cp1

0x2ec2,	// (0x00052107) bg_popup_sub_pane_cp24_ParamLimits

0x2ec2,	// (0x00052107) bg_popup_sub_pane_cp24

0x3c00,	// (0x00052e45) fep_china_uni_candidate_pane_ParamLimits

0x3c00,	// (0x00052e45) fep_china_uni_candidate_pane

0x3c14,	// (0x00052e59) fep_china_uni_entry_pane

0x3c24,	// (0x00052e69) popup_fep_china_uni_window_g1

0x3c40,	// (0x00052e85) fep_china_uni_entry_pane_g1

0x3c48,	// (0x00052e8d) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x0005e97a) fep_china_uni_entry_pane_g

0x3c50,	// (0x00052e95) fep_entry_item_pane

0x3c5a,	// (0x00052e9f) fep_candidate_item_pane

0x3c62,	// (0x00052ea7) fep_china_uni_candidate_pane_g1

0x3c6a,	// (0x00052eaf) fep_china_uni_candidate_pane_g2

0x3c72,	// (0x00052eb7) fep_china_uni_candidate_pane_g3

0x3c7a,	// (0x00052ebf) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x0005e97f) fep_china_uni_candidate_pane_g

0x2438,	// (0x0005167d) fep_entry_item_pane_g1

0x3c82,	// (0x00052ec7) fep_entry_item_pane_t1_ParamLimits

0x3c82,	// (0x00052ec7) fep_entry_item_pane_t1

0x3c98,	// (0x00052edd) fep_candidate_item_pane_t1_ParamLimits

0x3c98,	// (0x00052edd) fep_candidate_item_pane_t1

0x3cad,	// (0x00052ef2) fep_candidate_item_pane_t2_ParamLimits

0x3cad,	// (0x00052ef2) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x0005e988) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x0005e988) fep_candidate_item_pane_t

0x2522,	// (0x00051767) list_highlight_pane_cp31_ParamLimits

0x2522,	// (0x00051767) list_highlight_pane_cp31

0x3cbf,	// (0x00052f04) level_1_signal_lsc

0x3cc8,	// (0x00052f0d) level_2_signal_lsc

0x3cd1,	// (0x00052f16) level_3_signal_lsc

0x3cda,	// (0x00052f1f) level_4_signal_lsc

0x3ce3,	// (0x00052f28) level_5_signal_lsc

0x3cec,	// (0x00052f31) level_6_signal_lsc

0x3cf5,	// (0x00052f3a) level_7_signal_lsc

0x3cf5,	// (0x00052f3a) level_1_battery_lsc

0x3cfe,	// (0x00052f43) level_2_battery_lsc

0x3d07,	// (0x00052f4c) level_3_battery_lsc

0x3d10,	// (0x00052f55) level_4_battery_lsc

0x3d19,	// (0x00052f5e) level_5_battery_lsc

0x3d22,	// (0x00052f67) level_6_battery_lsc

0x3cbf,	// (0x00052f04) level_7_battery_lsc

0x3d2b,	// (0x00052f70) scroll_handle_focus_pane_g1

0x3d34,	// (0x00052f79) scroll_handle_focus_pane_g2

0x3d3d,	// (0x00052f82) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x0005e98d) scroll_handle_focus_pane_g

0xba90,	// (0x0005acd5) list_single_2graphic_pane_g1_ParamLimits

0xba90,	// (0x0005acd5) list_single_2graphic_pane_g1

0xb5d9,	// (0x0005a81e) list_single_2graphic_pane_g2_ParamLimits

0xb5d9,	// (0x0005a81e) list_single_2graphic_pane_g2

0x276d,	// (0x000519b2) list_single_2graphic_pane_g3_ParamLimits

0x276d,	// (0x000519b2) list_single_2graphic_pane_g3

0xba9c,	// (0x0005ace1) list_single_2graphic_pane_g4_ParamLimits

0xba9c,	// (0x0005ace1) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x0005e994) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x0005e994) list_single_2graphic_pane_g

0xbaa8,	// (0x0005aced) list_single_2graphic_pane_t1_ParamLimits

0xbaa8,	// (0x0005aced) list_single_2graphic_pane_t1

0xbad6,	// (0x0005ad1b) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbad6,	// (0x0005ad1b) list_double2_graphic_large_graphic_pane_g1

0xb5d9,	// (0x0005a81e) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb5d9,	// (0x0005a81e) list_double2_graphic_large_graphic_pane_g2

0x276d,	// (0x000519b2) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x276d,	// (0x000519b2) list_double2_graphic_large_graphic_pane_g3

0xbae8,	// (0x0005ad2d) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbae8,	// (0x0005ad2d) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x0005e99d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x0005e99d) list_double2_graphic_large_graphic_pane_g

0xbaf4,	// (0x0005ad39) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbaf4,	// (0x0005ad39) list_double2_graphic_large_graphic_pane_t1

0xbb0a,	// (0x0005ad4f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbb0a,	// (0x0005ad4f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x0005e9a6) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x0005e9a6) list_double2_graphic_large_graphic_pane_t

0x3e85,	// (0x000530ca) popup_fast_swap_window_ParamLimits

0x3e85,	// (0x000530ca) popup_fast_swap_window

0x3ea1,	// (0x000530e6) popup_side_volume_key_window

0x3ebd,	// (0x00053102) stacon_top_pane

0x3ec7,	// (0x0005310c) status_pane_ParamLimits

0x3ec7,	// (0x0005310c) status_pane

0x3ebd,	// (0x00053102) status_small_pane

0x2442,	// (0x00051687) control_pane

0x2442,	// (0x00051687) stacon_bottom_pane

0x3496,	// (0x000526db) scroll_pane_cp121

0x348d,	// (0x000526d2) set_content_pane

0x3d61,	// (0x00052fa6) bg_active_tab_pane_g1_cp1

0x3d4f,	// (0x00052f94) bg_active_tab_pane_g2_cp1

0x3d6a,	// (0x00052faf) bg_active_tab_pane_g3_cp1

0x3d61,	// (0x00052fa6) bg_passive_tab_pane_g1_cp1

0x3d4f,	// (0x00052f94) bg_passive_tab_pane_g2_cp1

0x3d6a,	// (0x00052faf) bg_passive_tab_pane_g3_cp1

0xc9bb,	// (0x0005bc00) bg_active_tab_pane_g1_cp2

0x3d4f,	// (0x00052f94) bg_active_tab_pane_g2_cp2

0xc9c4,	// (0x0005bc09) bg_active_tab_pane_g3_cp2

0xc9bb,	// (0x0005bc00) bg_passive_tab_pane_g1_cp2

0x3d4f,	// (0x00052f94) bg_passive_tab_pane_g2_cp2

0xc9c4,	// (0x0005bc09) bg_passive_tab_pane_g3_cp2

0xc9cd,	// (0x0005bc12) bg_active_tab_pane_g1_cp3

0x3d4f,	// (0x00052f94) bg_active_tab_pane_g2_cp3

0xc9d6,	// (0x0005bc1b) bg_active_tab_pane_g3_cp3

0xc9cd,	// (0x0005bc12) bg_passive_tab_pane_g1_cp3

0x3d4f,	// (0x00052f94) bg_passive_tab_pane_g2_cp3

0xc9d6,	// (0x0005bc1b) bg_passive_tab_pane_g3_cp3

0xc9df,	// (0x0005bc24) bg_active_tab_pane_g1_cp4

0x3d4f,	// (0x00052f94) bg_active_tab_pane_g2_cp4

0xc9e8,	// (0x0005bc2d) bg_active_tab_pane_g3_cp4

0xc9df,	// (0x0005bc24) bg_passive_tab_pane_g1_cp4

0x3d4f,	// (0x00052f94) bg_passive_tab_pane_g2_cp4

0xc9e8,	// (0x0005bc2d) bg_passive_tab_pane_g3_cp4

0x3dd9,	// (0x0005301e) bg_active_tab_pane_g1_cp5

0x3d4f,	// (0x00052f94) bg_active_tab_pane_g2_cp5

0x3de2,	// (0x00053027) bg_active_tab_pane_g3_cp5

0x3dd9,	// (0x0005301e) bg_passive_tab_pane_g1_cp5

0x3d4f,	// (0x00052f94) bg_passive_tab_pane_g2_cp5

0x3de2,	// (0x00053027) bg_passive_tab_pane_g3_cp5

0xc9f1,	// (0x0005bc36) list_set_graphic_pane_ParamLimits

0xc9f1,	// (0x0005bc36) list_set_graphic_pane

0x2442,	// (0x00051687) bg_set_opt_pane_cp4

0xca03,	// (0x0005bc48) list_set_graphic_pane_g1_ParamLimits

0xca03,	// (0x0005bc48) list_set_graphic_pane_g1

0xca0f,	// (0x0005bc54) list_set_graphic_pane_g2_ParamLimits

0xca0f,	// (0x0005bc54) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x0005e9ab) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x0005e9ab) list_set_graphic_pane_g

0x0009,

0xfacb,	// (0x0005ed10) volume_small_pane_cp_g

0x3e38,	// (0x0005307d) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x3e38,	// (0x0005307d) list_double2_large_graphic_pane_g1_cp2

0x3e44,	// (0x00053089) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3e44,	// (0x00053089) list_double2_large_graphic_pane_g2_cp2

0x3e55,	// (0x0005309a) list_double2_large_graphic_pane_g3_cp2

0x3e5d,	// (0x000530a2) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3e5d,	// (0x000530a2) list_double2_large_graphic_pane_t1_cp2

0x3e73,	// (0x000530b8) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3e73,	// (0x000530b8) list_double2_large_graphic_pane_t2_cp2

0x6054,	// (0x00055299) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x6054,	// (0x00055299) list_double_large_graphic_pane_g1_cp2

0x6065,	// (0x000552aa) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x6065,	// (0x000552aa) list_double_large_graphic_pane_g2_cp2

0x3fd7,	// (0x0005321c) list_double_large_graphic_pane_g3_cp2

0x6076,	// (0x000552bb) list_double_large_graphic_pane_g4_cp

0x607e,	// (0x000552c3) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x607e,	// (0x000552c3) list_double_large_graphic_pane_t1_cp2

0x6095,	// (0x000552da) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6095,	// (0x000552da) list_double_large_graphic_pane_t2_cp2

0x3ed5,	// (0x0005311a) list_double2_graphic_pane_g1_cp2_ParamLimits

0x3ed5,	// (0x0005311a) list_double2_graphic_pane_g1_cp2

0x3ee3,	// (0x00053128) list_double2_graphic_pane_g2_cp2_ParamLimits

0x3ee3,	// (0x00053128) list_double2_graphic_pane_g2_cp2

0x3ef4,	// (0x00053139) list_double2_graphic_pane_g3_cp2

0x3efe,	// (0x00053143) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3efe,	// (0x00053143) list_double2_graphic_pane_t1_cp2

0x3f14,	// (0x00053159) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3f14,	// (0x00053159) list_double2_graphic_pane_t2_cp2

0x3f26,	// (0x0005316b) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3f26,	// (0x0005316b) list_single_number_heading_pane_g1_cp2

0x3f32,	// (0x00053177) list_single_number_heading_pane_g2_cp2

0x3f3a,	// (0x0005317f) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3f3a,	// (0x0005317f) list_single_number_heading_pane_t1_cp2

0x3f50,	// (0x00053195) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3f50,	// (0x00053195) list_single_number_heading_pane_t2_cp2

0x3f62,	// (0x000531a7) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3f62,	// (0x000531a7) list_single_number_heading_pane_t3_cp2

0x3f26,	// (0x0005316b) list_single_heading_pane_g1_cp2_ParamLimits

0x3f26,	// (0x0005316b) list_single_heading_pane_g1_cp2

0x3f32,	// (0x00053177) list_single_heading_pane_g2_cp2

0x3f3a,	// (0x0005317f) list_single_heading_pane_t1_cp2_ParamLimits

0x3f3a,	// (0x0005317f) list_single_heading_pane_t1_cp2

0x5e5c,	// (0x000550a1) list_single_heading_pane_t2_cp2_ParamLimits

0x5e5c,	// (0x000550a1) list_single_heading_pane_t2_cp2

0x5dad,	// (0x00054ff2) list_double_graphic_pane_g1_cp2_ParamLimits

0x5dad,	// (0x00054ff2) list_double_graphic_pane_g1_cp2

0x559d,	// (0x000547e2) list_double_graphic_pane_g2_cp2_ParamLimits

0x559d,	// (0x000547e2) list_double_graphic_pane_g2_cp2

0x5db9,	// (0x00054ffe) list_double_graphic_pane_g3_cp2

0x5dc1,	// (0x00055006) list_double_graphic_pane_t1_cp2_ParamLimits

0x5dc1,	// (0x00055006) list_double_graphic_pane_t1_cp2

0x5dd7,	// (0x0005501c) list_double_graphic_pane_t2_cp2_ParamLimits

0x5dd7,	// (0x0005501c) list_double_graphic_pane_t2_cp2

0x37f1,	// (0x00052a36) list_double_number_pane_g1_cp2_ParamLimits

0x37f1,	// (0x00052a36) list_double_number_pane_g1_cp2

0x3fd7,	// (0x0005321c) list_double_number_pane_g2_cp2

0x5d71,	// (0x00054fb6) list_double_number_pane_t1_cp2_ParamLimits

0x5d71,	// (0x00054fb6) list_double_number_pane_t1_cp2

0x5d85,	// (0x00054fca) list_double_number_pane_t2_cp2_ParamLimits

0x5d85,	// (0x00054fca) list_double_number_pane_t2_cp2

0x5d9b,	// (0x00054fe0) list_double_number_pane_t3_cp2_ParamLimits

0x5d9b,	// (0x00054fe0) list_double_number_pane_t3_cp2

0x5c5a,	// (0x00054e9f) list_single_graphic_pane_g1_cp2_ParamLimits

0x5c5a,	// (0x00054e9f) list_single_graphic_pane_g1_cp2

0x402f,	// (0x00053274) list_single_graphic_pane_g2_cp2_ParamLimits

0x402f,	// (0x00053274) list_single_graphic_pane_g2_cp2

0x403b,	// (0x00053280) list_single_graphic_pane_g3_cp2

0x5c30,	// (0x00054e75) list_single_graphic_pane_t1_cp2_ParamLimits

0x5c30,	// (0x00054e75) list_single_graphic_pane_t1_cp2

0x402f,	// (0x00053274) list_single_number_pane_g1_cp2_ParamLimits

0x402f,	// (0x00053274) list_single_number_pane_g1_cp2

0x403b,	// (0x00053280) list_single_number_pane_g2_cp2

0x5c30,	// (0x00054e75) list_single_number_pane_t1_cp2_ParamLimits

0x5c30,	// (0x00054e75) list_single_number_pane_t1_cp2

0x5c46,	// (0x00054e8b) list_single_number_pane_t2_cp2_ParamLimits

0x5c46,	// (0x00054e8b) list_single_number_pane_t2_cp2

0x3e44,	// (0x00053089) list_double2_pane_g1_cp2_ParamLimits

0x3e44,	// (0x00053089) list_double2_pane_g1_cp2

0x3e55,	// (0x0005309a) list_double2_pane_g2_cp2

0x3faf,	// (0x000531f4) list_double2_pane_t1_cp2_ParamLimits

0x3faf,	// (0x000531f4) list_double2_pane_t1_cp2

0x3fc5,	// (0x0005320a) list_double2_pane_t2_cp2_ParamLimits

0x3fc5,	// (0x0005320a) list_double2_pane_t2_cp2

0x37f1,	// (0x00052a36) list_double_pane_g1_cp2_ParamLimits

0x37f1,	// (0x00052a36) list_double_pane_g1_cp2

0x3fd7,	// (0x0005321c) list_double_pane_g2_cp2

0x3fdf,	// (0x00053224) list_double_pane_t1_cp2_ParamLimits

0x3fdf,	// (0x00053224) list_double_pane_t1_cp2

0x3ff5,	// (0x0005323a) list_double_pane_t2_cp2_ParamLimits

0x3ff5,	// (0x0005323a) list_double_pane_t2_cp2

0x401f,	// (0x00053264) list_single_pane_cp2_g3

0x402f,	// (0x00053274) list_single_pane_g1_cp2_ParamLimits

0x402f,	// (0x00053274) list_single_pane_g1_cp2

0x403b,	// (0x00053280) list_single_pane_g2_cp2

0x4043,	// (0x00053288) list_single_pane_t1_cp2_ParamLimits

0x4043,	// (0x00053288) list_single_pane_t1_cp2

0x405b,	// (0x000532a0) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x405b,	// (0x000532a0) list_single_large_graphic_pane_g1_cp2

0x4067,	// (0x000532ac) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4067,	// (0x000532ac) list_single_large_graphic_pane_g2_cp2

0x4073,	// (0x000532b8) list_single_large_graphic_pane_g3_cp2

0x407b,	// (0x000532c0) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x407b,	// (0x000532c0) list_single_large_graphic_pane_g4_cp1

0x4095,	// (0x000532da) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4095,	// (0x000532da) list_single_large_graphic_pane_t1_cp2

0x5bfc,	// (0x00054e41) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5bfc,	// (0x00054e41) list_single_graphic_heading_pane_g1_cp2

0x5bc9,	// (0x00054e0e) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5bc9,	// (0x00054e0e) list_single_graphic_heading_pane_g4_cp2

0x403b,	// (0x00053280) list_single_graphic_heading_pane_g5_cp2

0x5c08,	// (0x00054e4d) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5c08,	// (0x00054e4d) list_single_graphic_heading_pane_t1_cp2

0x5c1e,	// (0x00054e63) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5c1e,	// (0x00054e63) list_single_graphic_heading_pane_t2_cp2

0x5bbd,	// (0x00054e02) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5bbd,	// (0x00054e02) list_single_2graphic_pane_g1_cp2

0x5bc9,	// (0x00054e0e) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5bc9,	// (0x00054e0e) list_single_2graphic_pane_g2_cp2

0x403b,	// (0x00053280) list_single_2graphic_pane_g3_cp2

0x5bda,	// (0x00054e1f) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5bda,	// (0x00054e1f) list_single_2graphic_pane_g4_cp2

0x5be6,	// (0x00054e2b) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5be6,	// (0x00054e2b) list_single_2graphic_pane_t1_cp2

0x2438,	// (0x0005167d) list_highlight_pane_g10_cp1

0x5795,	// (0x000549da) list_highlight_pane_g1_cp1

0x579d,	// (0x000549e2) list_highlight_pane_g2_cp1

0x57a5,	// (0x000549ea) list_highlight_pane_g3_cp1

0x57ad,	// (0x000549f2) list_highlight_pane_g4_cp1

0x57b5,	// (0x000549fa) list_highlight_pane_g5_cp1

0x57bd,	// (0x00054a02) list_highlight_pane_g6_cp1

0x57c5,	// (0x00054a0a) list_highlight_pane_g7_cp1

0x57cd,	// (0x00054a12) list_highlight_pane_g8_cp1

0x57d5,	// (0x00054a1a) list_highlight_pane_g9_cp1

0xd715,	// (0x0005c95a) form_field_slider_pane_t3

0xd723,	// (0x0005c968) form_field_slider_pane_t4

0x56d1,	// (0x00054916) slider_form_pane_ParamLimits

0x56d1,	// (0x00054916) slider_form_pane

0x2442,	// (0x00051687) control_abbreviations

0x2442,	// (0x00051687) control_conventions

0x2442,	// (0x00051687) control_definitions

0x2442,	// (0x00051687) format_table_attribute

0x5ea6,	// (0x000550eb) bg_popup_preview_window_pane_g9

0x2442,	// (0x00051687) format_table_data2

0x2442,	// (0x00051687) format_table_data3

0x2442,	// (0x00051687) format_table_data_example

0x0008,

0x2442,	// (0x00051687) intro_purpose

0xf8ef,	// (0x0005eb34) bg_popup_preview_window_pane_g

0x2442,	// (0x00051687) texts_category

0x2442,	// (0x00051687) texts_graphics

0x40ab,	// (0x000532f0) text_digital

0x40ba,	// (0x000532ff) text_primary

0x40c9,	// (0x0005330e) text_primary_small

0x40d8,	// (0x0005331d) text_secondary

0x40e7,	// (0x0005332c) text_title

0x65b2,	// (0x000557f7) bg_passive_tab_pane_g1_cp3_srt

0x3d4f,	// (0x00052f94) bg_passive_tab_pane_g2_cp3_srt

0x65bb,	// (0x00055800) bg_passive_tab_pane_g3_cp3_srt

0x2ec2,	// (0x00052107) bg_active_tab_pane_cp3_srt_ParamLimits

0x2ec2,	// (0x00052107) bg_active_tab_pane_cp3_srt

0x65c4,	// (0x00055809) tabs_4_active_pane_srt_g1

0xdaa7,	// (0x0005ccec) tabs_4_active_pane_srt_t1_ParamLimits

0xdaa7,	// (0x0005ccec) tabs_4_active_pane_srt_t1

0x65b2,	// (0x000557f7) bg_active_tab_pane_g1_cp3_copy1

0x3d4f,	// (0x00052f94) bg_active_tab_pane_g2_cp3_copy1

0x65bb,	// (0x00055800) bg_active_tab_pane_g3_cp3_copy1

0x2522,	// (0x00051767) tabs_2_long_active_pane_srt_ParamLimits

0x2522,	// (0x00051767) tabs_2_long_active_pane_srt

0x2522,	// (0x00051767) tabs_2_long_passive_pane_srt_ParamLimits

0x2522,	// (0x00051767) tabs_2_long_passive_pane_srt

0x4454,	// (0x00053699) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4454,	// (0x00053699) bg_passive_tab_pane_cp4_srt

0x62ea,	// (0x0005552f) bg_passive_tab_pane_g1_cp4_srt

0x3d4f,	// (0x00052f94) bg_passive_tab_pane_g2_cp4_srt

0x62f3,	// (0x00055538) bg_passive_tab_pane_g3_cp4_srt

0x2522,	// (0x00051767) bg_active_tab_pane_cp4_srt_ParamLimits

0x2522,	// (0x00051767) bg_active_tab_pane_cp4_srt

0xd8b5,	// (0x0005cafa) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd8b5,	// (0x0005cafa) tabs_2_long_active_pane_srt_t1

0x62ea,	// (0x0005552f) bg_active_tab_pane_g1_cp4_srt

0x3d4f,	// (0x00052f94) bg_active_tab_pane_g2_cp4_srt

0x62f3,	// (0x00055538) bg_active_tab_pane_g3_cp4_srt

0x2ec2,	// (0x00052107) tabs_3_long_active_pane_srt_ParamLimits

0x2ec2,	// (0x00052107) tabs_3_long_active_pane_srt

0x2ec2,	// (0x00052107) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2ec2,	// (0x00052107) tabs_3_long_passive_pane_cp_srt

0x2ec2,	// (0x00052107) tabs_3_long_passive_pane_srt_ParamLimits

0x2ec2,	// (0x00052107) tabs_3_long_passive_pane_srt

0x4454,	// (0x00053699) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4454,	// (0x00053699) bg_passive_tab_pane_cp5_srt

0x3dd9,	// (0x0005301e) bg_passive_tab_pane_g1_cp5_srt

0x3d4f,	// (0x00052f94) bg_passive_tab_pane_g2_cp5_srt

0x3de2,	// (0x00053027) bg_passive_tab_pane_g3_cp5_srt

0x2522,	// (0x00051767) bg_active_tab_pane_cp5_srt_ParamLimits

0x2522,	// (0x00051767) bg_active_tab_pane_cp5_srt

0xd89f,	// (0x0005cae4) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd89f,	// (0x0005cae4) tabs_3_long_active_pane_srt_t1

0x3dd9,	// (0x0005301e) bg_active_tab_pane_g1_cp5_srt

0x3d4f,	// (0x00052f94) bg_active_tab_pane_g2_cp5_srt

0x3de2,	// (0x00053027) bg_active_tab_pane_g3_cp5_srt

0x62ca,	// (0x0005550f) navi_text_pane_srt_t1

0x62c2,	// (0x00055507) navi_icon_pane_srt_g1

0x42ba,	// (0x000534ff) midp_editing_number_pane_srt

0x40f6,	// (0x0005333b) midp_ticker_pane_srt

0x42c2,	// (0x00053507) midp_ticker_pane_srt_g1

0x42ca,	// (0x0005350f) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x0005e9ca) midp_ticker_pane_srt_g

0x42d2,	// (0x00053517) midp_ticker_pane_srt_t1

0x62b3,	// (0x000554f8) midp_editing_number_pane_t1_copy1

0xca33,	// (0x0005bc78) listscroll_midp_pane

0xca33,	// (0x0005bc78) midp_form_pane

0x416c,	// (0x000533b1) midp_info_popup_window_ParamLimits

0x416c,	// (0x000533b1) midp_info_popup_window

0x356b,	// (0x000527b0) bg_popup_sub_pane_cp50_ParamLimits

0x356b,	// (0x000527b0) bg_popup_sub_pane_cp50

0x53be,	// (0x00054603) listscroll_midp_info_pane_ParamLimits

0x53be,	// (0x00054603) listscroll_midp_info_pane

0x53a6,	// (0x000545eb) listscroll_form_midp_pane_ParamLimits

0x53a6,	// (0x000545eb) listscroll_form_midp_pane

0x53b2,	// (0x000545f7) scroll_bar_cp050

0xd709,	// (0x0005c94e) list_midp_pane

0x6fce,	// (0x00056213) signal_pane_g2_cp

0x52c0,	// (0x00054505) listscroll_midp_info_pane_t1_ParamLimits

0x52c0,	// (0x00054505) listscroll_midp_info_pane_t1

0x52d8,	// (0x0005451d) listscroll_midp_info_pane_t2_ParamLimits

0x52d8,	// (0x0005451d) listscroll_midp_info_pane_t2

0x5316,	// (0x0005455b) listscroll_midp_info_pane_t3_ParamLimits

0x5316,	// (0x0005455b) listscroll_midp_info_pane_t3

0x5350,	// (0x00054595) listscroll_midp_info_pane_t4_ParamLimits

0x5350,	// (0x00054595) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0005ea6f) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0005ea6f) listscroll_midp_info_pane_t

0x362d,	// (0x00052872) scroll_pane_cp21

0x525e,	// (0x000544a3) form_midp_field_choice_group_pane

0x5267,	// (0x000544ac) form_midp_field_text_pane

0x52a6,	// (0x000544eb) form_midp_field_time_pane

0x52ae,	// (0x000544f3) form_midp_gauge_slider_pane

0x52b7,	// (0x000544fc) form_midp_gauge_wait_pane

0x2442,	// (0x00051687) form_midp_image_pane

0xbcef,	// (0x0005af34) list_single_midp_pane_ParamLimits

0xbcef,	// (0x0005af34) list_single_midp_pane

0xd6e7,	// (0x0005c92c) form_midp_field_text_pane_t1

0x5008,	// (0x0005424d) input_focus_pane_cp050

0x524d,	// (0x00054492) list_midp_form_text_pane

0x51e5,	// (0x0005442a) form_midp_field_choice_group_pane_t1

0x51f3,	// (0x00054438) input_focus_pane_cp051

0x5207,	// (0x0005444c) list_midp_choice_pane

0x2442,	// (0x00051687) status_idle_pane

0x51c9,	// (0x0005440e) form_midp_field_time_pane_t1

0x2438,	// (0x0005167d) wait_anim_pane_g2_copy1

0x51d7,	// (0x0005441c) form_midp_field_time_pane_t2

0x0001,

0x421a,	// (0x0005345f) aid_navinavi_width_2_pane

0xf825,	// (0x0005ea6a) form_midp_field_time_pane_t

0x2442,	// (0x00051687) input_focus_pane_cp052

0x2442,	// (0x00051687) bg_input_focus_pane_cp040

0x5189,	// (0x000543ce) form_midp_gauge_slider_pane_t1

0x5197,	// (0x000543dc) form_midp_gauge_slider_pane_t2

0xd6cb,	// (0x0005c910) form_midp_gauge_slider_pane_t3

0xd6d9,	// (0x0005c91e) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0005ea61) form_midp_gauge_slider_pane_t

0x51c1,	// (0x00054406) form_midp_slider_pane

0x2522,	// (0x00051767) bg_input_focus_pane_cp041_ParamLimits

0x2522,	// (0x00051767) bg_input_focus_pane_cp041

0x5156,	// (0x0005439b) form_midp_gauge_wait_pane_t1_ParamLimits

0x5156,	// (0x0005439b) form_midp_gauge_wait_pane_t1

0x5168,	// (0x000543ad) form_midp_gauge_wait_pane_t2_ParamLimits

0x5168,	// (0x000543ad) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0005ea5c) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0005ea5c) form_midp_gauge_wait_pane_t

0x517a,	// (0x000543bf) form_midp_wait_pane_ParamLimits

0x517a,	// (0x000543bf) form_midp_wait_pane

0x5120,	// (0x00054365) form_midp_image_pane_g1

0x5129,	// (0x0005436e) form_midp_image_pane_t1

0x5138,	// (0x0005437d) form_midp_image_pane_t2

0x5147,	// (0x0005438c) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0005ea55) form_midp_image_pane_t

0x5117,	// (0x0005435c) list_single_midp_pane_g1

0x1324,	// (0x00050569) list_single_midp_pane_t1

0xd6b6,	// (0x0005c8fb) list_midp_form_item_pane_ParamLimits

0xd6b6,	// (0x0005c8fb) list_midp_form_item_pane

0x41c2,	// (0x00053407) list_midp_form_item_pane_t1

0x41d1,	// (0x00053416) midp_ticker_pane_g1

0x41dd,	// (0x00053422) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x0005e9b0) midp_ticker_pane_g

0xcadb,	// (0x0005bd20) midp_ticker_pane_t1

0xda20,	// (0x0005cc65) midp_editing_number_pane_t1

0x64e2,	// (0x00055727) midp_editing_number_pane

0x64f1,	// (0x00055736) midp_ticker_pane

0x62a3,	// (0x000554e8) ai_message_heading_pane

0x2442,	// (0x00051687) bg_popup_window_pane_cp14

0x62ab,	// (0x000554f0) listscroll_ai_message_pane

0x622d,	// (0x00055472) ai_message_heading_pane_g1_ParamLimits

0x622d,	// (0x00055472) ai_message_heading_pane_g1

0x6239,	// (0x0005547e) ai_message_heading_pane_g2_ParamLimits

0x6239,	// (0x0005547e) ai_message_heading_pane_g2

0x6245,	// (0x0005548a) ai_message_heading_pane_g3_ParamLimits

0x6245,	// (0x0005548a) ai_message_heading_pane_g3

0x6251,	// (0x00055496) ai_message_heading_pane_g4_ParamLimits

0x6251,	// (0x00055496) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0005eb96) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0005eb96) ai_message_heading_pane_g

0x625d,	// (0x000554a2) ai_message_heading_pane_t1_ParamLimits

0x625d,	// (0x000554a2) ai_message_heading_pane_t1

0x6277,	// (0x000554bc) ai_message_heading_pane_t2_ParamLimits

0x6277,	// (0x000554bc) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0005eb9f) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0005eb9f) ai_message_heading_pane_t

0x6289,	// (0x000554ce) bg_popup_heading_pane_cp1_ParamLimits

0x6289,	// (0x000554ce) bg_popup_heading_pane_cp1

0x621b,	// (0x00055460) list_ai_message_pane_ParamLimits

0x621b,	// (0x00055460) list_ai_message_pane

0x362d,	// (0x00052872) scroll_pane_cp10

0x61b7,	// (0x000553fc) list_ai_message_pane_g1

0x61bf,	// (0x00055404) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0005eb73) list_ai_message_pane_g

0x61c7,	// (0x0005540c) list_ai_message_pane_t1_ParamLimits

0x61c7,	// (0x0005540c) list_ai_message_pane_t1

0x61dc,	// (0x00055421) list_ai_message_pane_t2_ParamLimits

0x61dc,	// (0x00055421) list_ai_message_pane_t2

0x61f1,	// (0x00055436) list_ai_message_pane_t3_ParamLimits

0x61f1,	// (0x00055436) list_ai_message_pane_t3

0x6206,	// (0x0005544b) list_ai_message_pane_t4_ParamLimits

0x6206,	// (0x0005544b) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0005eb78) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0005eb78) list_ai_message_pane_t

0xd87e,	// (0x0005cac3) cell_ai_soft_ind_pane_ParamLimits

0xd87e,	// (0x0005cac3) cell_ai_soft_ind_pane

0x41fb,	// (0x00053440) cell_ai_soft_ind_pane_g1_ParamLimits

0x41fb,	// (0x00053440) cell_ai_soft_ind_pane_g1

0x2442,	// (0x00051687) grid_highlight_cp1

0x4208,	// (0x0005344d) text_secondary_cp56_ParamLimits

0x4208,	// (0x0005344d) text_secondary_cp56

0x6177,	// (0x000553bc) example_general_pane_ParamLimits

0x6177,	// (0x000553bc) example_general_pane

0x6183,	// (0x000553c8) example_parent_pane_g1_ParamLimits

0x6183,	// (0x000553c8) example_parent_pane_g1

0x618f,	// (0x000553d4) example_parent_pane_t1_ParamLimits

0x618f,	// (0x000553d4) example_parent_pane_t1

0xcf8d,	// (0x0005c1d2) popup_preview_text_window_ParamLimits

0xcf8d,	// (0x0005c1d2) popup_preview_text_window

0x4027,	// (0x0005326c) list_single_pane_cp2_g4

0x2f78,	// (0x000521bd) bg_popup_preview_window_pane_ParamLimits

0x2f78,	// (0x000521bd) bg_popup_preview_window_pane

0x5eae,	// (0x000550f3) popup_preview_text_window_t1_ParamLimits

0x5eae,	// (0x000550f3) popup_preview_text_window_t1

0x5ecc,	// (0x00055111) popup_preview_text_window_t2_ParamLimits

0x5ecc,	// (0x00055111) popup_preview_text_window_t2

0x5f15,	// (0x0005515a) popup_preview_text_window_t3_ParamLimits

0x5f15,	// (0x0005515a) popup_preview_text_window_t3

0x5f5a,	// (0x0005519f) popup_preview_text_window_t4_ParamLimits

0x5f5a,	// (0x0005519f) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0005eb47) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0005eb47) popup_preview_text_window_t

0x5fd8,	// (0x0005521d) scroll_pane_cp11

0x4f18,	// (0x0005415d) bg_popup_preview_window_pane_g1

0x5e6e,	// (0x000550b3) bg_popup_preview_window_pane_g2

0x5e76,	// (0x000550bb) bg_popup_preview_window_pane_g3

0x5e7e,	// (0x000550c3) bg_popup_preview_window_pane_g4

0x5e86,	// (0x000550cb) bg_popup_preview_window_pane_g5

0x5e8e,	// (0x000550d3) bg_popup_preview_window_pane_g6

0x5e96,	// (0x000550db) bg_popup_preview_window_pane_g7

0x5e9e,	// (0x000550e3) bg_popup_preview_window_pane_g8

0xf556,	// (0x0005e79b) aid_popup_width_pane

0xcf09,	// (0x0005c14e) popup_midp_note_alarm_window_ParamLimits

0xcf09,	// (0x0005c14e) popup_midp_note_alarm_window

0x34a7,	// (0x000526ec) data_form_pane_ParamLimits

0xb969,	// (0x0005abae) form_field_data_pane_g1

0xb973,	// (0x0005abb8) form_field_data_pane_t1_ParamLimits

0x34b3,	// (0x000526f8) input_focus_pane_ParamLimits

0x34c1,	// (0x00052706) data_form_wide_pane_ParamLimits

0x09a7,	// (0x0004fbec) form_field_data_wide_pane_g1

0x09b3,	// (0x0004fbf8) form_field_data_wide_pane_t1_ParamLimits

0x3224,	// (0x00052469) input_focus_pane_cp6_ParamLimits

0xc845,	// (0x0005ba8a) input_popup_find_pane_g1_ParamLimits

0xc845,	// (0x0005ba8a) input_popup_find_pane_g1

0x0c2b,	// (0x0004fe70) aid_navi_side_left_pane

0x0c40,	// (0x0004fe85) aid_navi_side_right_pane

0x5890,	// (0x00054ad5) bg_popup_window_pane_cp30_ParamLimits

0x5890,	// (0x00054ad5) bg_popup_window_pane_cp30

0x590a,	// (0x00054b4f) popup_midp_note_alarm_window_g1_ParamLimits

0x590a,	// (0x00054b4f) popup_midp_note_alarm_window_g1

0x593a,	// (0x00054b7f) popup_midp_note_alarm_window_t1_ParamLimits

0x593a,	// (0x00054b7f) popup_midp_note_alarm_window_t1

0x59db,	// (0x00054c20) popup_midp_note_alarm_window_t2_ParamLimits

0x59db,	// (0x00054c20) popup_midp_note_alarm_window_t2

0x5a89,	// (0x00054cce) popup_midp_note_alarm_window_t3_ParamLimits

0x5a89,	// (0x00054cce) popup_midp_note_alarm_window_t3

0x5abb,	// (0x00054d00) popup_midp_note_alarm_window_t4_ParamLimits

0x5abb,	// (0x00054d00) popup_midp_note_alarm_window_t4

0x5ae1,	// (0x00054d26) popup_midp_note_alarm_window_t5_ParamLimits

0x5ae1,	// (0x00054d26) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0005eae4) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0005eae4) popup_midp_note_alarm_window_t

0x5b8d,	// (0x00054dd2) wait_bar_pane_cp1_ParamLimits

0x5b8d,	// (0x00054dd2) wait_bar_pane_cp1

0x2442,	// (0x00051687) wait_anim_pane_copy1

0x2442,	// (0x00051687) wait_border_pane_copy1

0x5567,	// (0x000547ac) wait_border_pane_g1_copy1

0x09cd,	// (0x0004fc12) form_field_popup_pane_g1

0xb98d,	// (0x0005abd2) form_field_popup_pane_t1_ParamLimits

0x34b3,	// (0x000526f8) input_focus_pane_cp7_ParamLimits

0x34ed,	// (0x00052732) list_form_pane_ParamLimits

0x09ed,	// (0x0004fc32) form_field_popup_wide_pane_g1

0x09f5,	// (0x0004fc3a) form_field_popup_wide_pane_t1_ParamLimits

0x34b3,	// (0x000526f8) input_focus_pane_cp8_ParamLimits

0x34f9,	// (0x0005273e) list_form_wide_pane_ParamLimits

0x663e,	// (0x00055883) aid_size_cell_graphic_pane

0xba0c,	// (0x0005ac51) data_form_pane_t1_ParamLimits

0xbe64,	// (0x0005b0a9) data_form_wide_pane_t1_ParamLimits

0xd342,	// (0x0005c587) bg_status_flat_pane

0xc48b,	// (0x0005b6d0) title_pane_t1_ParamLimits

0x24ea,	// (0x0005172f) title_pane_t2_ParamLimits

0x2510,	// (0x00051755) title_pane_t3_ParamLimits

0xf573,	// (0x0005e7b8) title_pane_t_ParamLimits

0x3aba,	// (0x00052cff) level_1_signal_ParamLimits

0x3ac7,	// (0x00052d0c) level_2_signal_ParamLimits

0x3ad4,	// (0x00052d19) level_3_signal_ParamLimits

0x3ae1,	// (0x00052d26) level_4_signal_ParamLimits

0x3aee,	// (0x00052d33) level_5_signal_ParamLimits

0x3afb,	// (0x00052d40) level_6_signal_ParamLimits

0x3b08,	// (0x00052d4d) level_7_signal_ParamLimits

0x3aba,	// (0x00052cff) level_1_battery_ParamLimits

0x3ac7,	// (0x00052d0c) level_2_battery_ParamLimits

0x3ad4,	// (0x00052d19) level_3_battery_ParamLimits

0x3ae1,	// (0x00052d26) level_4_battery_ParamLimits

0x3aee,	// (0x00052d33) level_5_battery_ParamLimits

0x3afb,	// (0x00052d40) level_6_battery_ParamLimits

0x3b08,	// (0x00052d4d) level_7_battery_ParamLimits

0x5795,	// (0x000549da) bg_status_flat_pane_g1

0x579d,	// (0x000549e2) bg_status_flat_pane_g2

0x57a5,	// (0x000549ea) bg_status_flat_pane_g3

0x57ad,	// (0x000549f2) bg_status_flat_pane_g4

0x57b5,	// (0x000549fa) bg_status_flat_pane_g5

0x57bd,	// (0x00054a02) bg_status_flat_pane_g6

0x57c5,	// (0x00054a0a) bg_status_flat_pane_g7

0xc51f,	// (0x0005b764) tabs_3_active_pane_t1_ParamLimits

0xc51f,	// (0x0005b764) tabs_3_passive_pane_t1_ParamLimits

0xc539,	// (0x0005b77e) tabs_4_active_pane_t1_ParamLimits

0xc539,	// (0x0005b77e) tabs_4_1_passive_pane_t1_ParamLimits

0xc85b,	// (0x0005baa0) tabs_2_active_pane_t1_ParamLimits

0xc85b,	// (0x0005baa0) tabs_2_passive_pane_t1_ParamLimits

0x2522,	// (0x00051767) bg_active_tab_pane_cp4_ParamLimits

0xc86d,	// (0x0005bab2) tabs_2_long_active_pane_t1_ParamLimits

0x4454,	// (0x00053699) bg_passive_tab_pane_cp4_ParamLimits

0x1271,	// (0x000504b6) list_single_midp_graphic_pane_t1_ParamLimits

0x2522,	// (0x00051767) bg_active_tab_pane_cp5_ParamLimits

0xc880,	// (0x0005bac5) tabs_3_long_active_pane_t1_ParamLimits

0x4454,	// (0x00053699) bg_passive_tab_pane_cp5_ParamLimits

0x1271,	// (0x000504b6) list_single_midp_graphic_pane_t1

0xd342,	// (0x0005c587) bg_status_flat_pane_ParamLimits

0x4b81,	// (0x00053dc6) indicator_pane_cp2_ParamLimits

0x4b81,	// (0x00053dc6) indicator_pane_cp2

0xd4b9,	// (0x0005c6fe) navi_pane_srt_ParamLimits

0xd4b9,	// (0x0005c6fe) navi_pane_srt

0x4ceb,	// (0x00053f30) popup_clock_digital_analogue_window_cp1

0x25ff,	// (0x00051844) indicator_pane_t1

0x40f6,	// (0x0005333b) copy_highlight_pane

0x40f6,	// (0x0005333b) cursor_graphics_pane

0x40f6,	// (0x0005333b) graphic_within_text_pane

0x40f6,	// (0x0005333b) link_highlight_pane

0x5f9b,	// (0x000551e0) popup_preview_text_window_t5_ParamLimits

0x5f9b,	// (0x000551e0) popup_preview_text_window_t5

0x4222,	// (0x00053467) cursor_digital_pane

0x4222,	// (0x00053467) cursor_primary_pane

0x4233,	// (0x00053478) cursor_primary_small_pane

0x423b,	// (0x00053480) cursor_secondary_pane

0x4243,	// (0x00053488) cursor_title_pane

0x4222,	// (0x00053467) link_highlight_digital_pane

0x422a,	// (0x0005346f) link_highlight_primary_pane

0x4233,	// (0x00053478) link_highlight_primary_small_pane

0x423b,	// (0x00053480) link_highlight_secondary_pane

0x4243,	// (0x00053488) link_highlight_title_pane

0x4222,	// (0x00053467) copy_highlight_digital_pane

0x4222,	// (0x00053467) copy_highlight_primary_pane

0x4233,	// (0x00053478) copy_highlight_primary_small_pane

0x423b,	// (0x00053480) copy_highlight_secondary_pane

0x4243,	// (0x00053488) copy_highlight_title_pane

0x423b,	// (0x00053480) graphic_text_digital_pane

0x5833,	// (0x00054a78) graphic_text_primary_pane

0x583c,	// (0x00054a81) graphic_text_primary_small_pane

0x4233,	// (0x00053478) graphic_text_secondary_pane

0x4222,	// (0x00053467) graphic_text_title_pane

0xcaed,	// (0x0005bd32) cursor_primary_pane_g1

0x5825,	// (0x00054a6a) cursor_text_primary_t1

0xd745,	// (0x0005c98a) cursor_primary_small_pane_g1

0x5817,	// (0x00054a5c) cursor_text_primary_small_t1

0xd73b,	// (0x0005c980) cursor_primary_small_pane_g1_copy1

0x57ff,	// (0x00054a44) cursor_text_primary_small_t1_copy1

0x57dd,	// (0x00054a22) cursor_text_title_t1

0xd731,	// (0x0005c976) cursor_title_pane_g1

0xcaed,	// (0x0005bd32) cursor_digital_pane_g1

0x4255,	// (0x0005349a) cursor_text_digital_t1

0x427a,	// (0x000534bf) link_highlight_primary_pane_g1

0x5786,	// (0x000549cb) link_highlight_primary_pane_t1

0x4263,	// (0x000534a8) link_highlight_primary_small_pane_g1

0x426b,	// (0x000534b0) link_highlight_primary_small_pane_t1

0x427a,	// (0x000534bf) link_highlight_secondary_pane_g1

0x4282,	// (0x000534c7) link_highlight_secondary_pane_t1

0x56fa,	// (0x0005493f) link_highlight_title_pane_g1

0x5702,	// (0x00054947) link_highlight_title_pane_t1

0x56e3,	// (0x00054928) link_highlight_digital_pane_g1

0x56eb,	// (0x00054930) link_highlight_digital_pane_t1

0x55bb,	// (0x00054800) copy_highlight_primary_pane_g1

0x55c3,	// (0x00054808) copy_highlight_primary_pane_t1

0x5586,	// (0x000547cb) copy_highlight_primary_small_pane_g1

0x55ac,	// (0x000547f1) copy_highlight_primary_small_pane_t1

0x4291,	// (0x000534d6) copy_highlight_secondary_pane_g1

0x4299,	// (0x000534de) copy_highlight_secondary_pane_t1

0x5586,	// (0x000547cb) copy_highlight_title_pane_g1

0x558e,	// (0x000547d3) copy_highlight_title_pane_t1

0x55bb,	// (0x00054800) copy_highlight_digital_pane_g1

0x6808,	// (0x00055a4d) copy_highlight_digital_pane_t1

0x675c,	// (0x000559a1) graphic_text_primary_pane_g1

0x67ec,	// (0x00055a31) graphic_text_primary_pane_t1

0x67fa,	// (0x00055a3f) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0005ec13) graphic_text_primary_pane_t

0x67c8,	// (0x00055a0d) graphic_text_primary_small_pane_g1

0x67d0,	// (0x00055a15) graphic_text_primary_small_pane_t1

0x67de,	// (0x00055a23) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0005ec0e) graphic_text_primary_small_pane_t

0x67a4,	// (0x000559e9) graphic_text_secondary_pane_g1

0x67ac,	// (0x000559f1) graphic_text_secondary_pane_t1

0x67ba,	// (0x000559ff) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0005ec09) graphic_text_secondary_pane_t

0x6780,	// (0x000559c5) graphic_text_title_pane_g1

0x6788,	// (0x000559cd) graphic_text_title_pane_t1

0x6796,	// (0x000559db) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0005ec04) graphic_text_title_pane_t

0x675c,	// (0x000559a1) graphic_text_digital_pane_g1

0x6764,	// (0x000559a9) graphic_text_digital_pane_t1

0x6772,	// (0x000559b7) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0005ebff) graphic_text_digital_pane_t

0x2522,	// (0x00051767) navi_icon_pane_srt_ParamLimits

0x2522,	// (0x00051767) navi_icon_pane_srt

0x2442,	// (0x00051687) navi_midp_pane_srt

0x2442,	// (0x00051687) navi_navi_pane_srt

0x2522,	// (0x00051767) navi_text_pane_srt_ParamLimits

0x2522,	// (0x00051767) navi_text_pane_srt

0x6727,	// (0x0005596c) navi_navi_icon_text_pane_srt

0x672f,	// (0x00055974) navi_navi_pane_srt_g1_ParamLimits

0x672f,	// (0x00055974) navi_navi_pane_srt_g1

0x6741,	// (0x00055986) navi_navi_pane_srt_g2_ParamLimits

0x6741,	// (0x00055986) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0005ebfa) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0005ebfa) navi_navi_pane_srt_g

0x6753,	// (0x00055998) navi_navi_tabs_pane_srt

0x6727,	// (0x0005596c) navi_navi_text_pane_srt

0x6727,	// (0x0005596c) navi_navi_volume_pane_srt

0x6718,	// (0x0005595d) navi_navi_text_pane_srt_t1

0x16c6,	// (0x0005090b) navi_navi_volume_pane_srt_g1

0x16ce,	// (0x00050913) volume_small_pane_srt_ParamLimits

0x16ce,	// (0x00050913) volume_small_pane_srt

0x0f95,	// (0x000501da) volume_small_pane_srt_g1_ParamLimits

0x0f95,	// (0x000501da) volume_small_pane_srt_g1

0x0fa5,	// (0x000501ea) volume_small_pane_srt_g2_ParamLimits

0x0fa5,	// (0x000501ea) volume_small_pane_srt_g2

0x0fb6,	// (0x000501fb) volume_small_pane_srt_g3_ParamLimits

0x0fb6,	// (0x000501fb) volume_small_pane_srt_g3

0x0fc7,	// (0x0005020c) volume_small_pane_srt_g4_ParamLimits

0x0fc7,	// (0x0005020c) volume_small_pane_srt_g4

0x0fd8,	// (0x0005021d) volume_small_pane_srt_g5_ParamLimits

0x0fd8,	// (0x0005021d) volume_small_pane_srt_g5

0x0fe9,	// (0x0005022e) volume_small_pane_srt_g6_ParamLimits

0x0fe9,	// (0x0005022e) volume_small_pane_srt_g6

0x0ffa,	// (0x0005023f) volume_small_pane_srt_g7_ParamLimits

0x0ffa,	// (0x0005023f) volume_small_pane_srt_g7

0x100b,	// (0x00050250) volume_small_pane_srt_g8_ParamLimits

0x100b,	// (0x00050250) volume_small_pane_srt_g8

0x101c,	// (0x00050261) volume_small_pane_srt_g9_ParamLimits

0x101c,	// (0x00050261) volume_small_pane_srt_g9

0x102d,	// (0x00050272) volume_small_pane_srt_g10_ParamLimits

0x102d,	// (0x00050272) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x0005e9b5) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x0005e9b5) volume_small_pane_srt_g

0x3021,	// (0x00052266) query_popup_data_pane_cp2

0x66fe,	// (0x00055943) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x66fe,	// (0x00055943) navi_navi_icon_text_pane_srt_t1

0x5833,	// (0x00054a78) navi_tabs_2_long_pane_srt

0x5833,	// (0x00054a78) navi_tabs_2_pane_srt

0x5833,	// (0x00054a78) navi_tabs_3_long_pane_srt

0x5833,	// (0x00054a78) navi_tabs_3_pane_srt

0x5833,	// (0x00054a78) navi_tabs_4_pane_srt

0x16a6,	// (0x000508eb) tabs_2_active_pane_srt_ParamLimits

0x16a6,	// (0x000508eb) tabs_2_active_pane_srt

0x16b6,	// (0x000508fb) tabs_2_passive_pane_srt_ParamLimits

0x16b6,	// (0x000508fb) tabs_2_passive_pane_srt

0x5008,	// (0x0005424d) bg_passive_tab_pane_cp1_srt_ParamLimits

0x5008,	// (0x0005424d) bg_passive_tab_pane_cp1_srt

0x66ca,	// (0x0005590f) bg_passive_tab_pane_g1_cp1_srt

0x3d4f,	// (0x00052f94) bg_passive_tab_pane_g2_cp1_srt

0x66d3,	// (0x00055918) bg_passive_tab_pane_g3_cp1_srt

0x2ec2,	// (0x00052107) bg_active_tab_pane_cp1_srt_ParamLimits

0x2ec2,	// (0x00052107) bg_active_tab_pane_cp1_srt

0x66dc,	// (0x00055921) tabs_2_active_pane_srt_g1

0xdb23,	// (0x0005cd68) tabs_2_active_pane_srt_t1_ParamLimits

0xdb23,	// (0x0005cd68) tabs_2_active_pane_srt_t1

0x66ca,	// (0x0005590f) bg_active_tab_pane_g1_cp1_srt

0x3d4f,	// (0x00052f94) bg_active_tab_pane_g2_cp1_srt

0x66d3,	// (0x00055918) bg_active_tab_pane_g3_cp1_srt

0x1673,	// (0x000508b8) tabs_3_active_pane_srt_ParamLimits

0x1673,	// (0x000508b8) tabs_3_active_pane_srt

0x1684,	// (0x000508c9) tabs_3_passive_pane_cp_srt_ParamLimits

0x1684,	// (0x000508c9) tabs_3_passive_pane_cp_srt

0x1695,	// (0x000508da) tabs_3_passive_pane_srt_ParamLimits

0x1695,	// (0x000508da) tabs_3_passive_pane_srt

0x5008,	// (0x0005424d) bg_passive_tab_pane_cp2_srt_ParamLimits

0x5008,	// (0x0005424d) bg_passive_tab_pane_cp2_srt

0x42a8,	// (0x000534ed) bg_passive_tab_pane_g1_cp2_srt

0x3d4f,	// (0x00052f94) bg_passive_tab_pane_g2_cp2_srt

0x42b1,	// (0x000534f6) bg_passive_tab_pane_g3_cp2_srt

0x2ec2,	// (0x00052107) bg_active_tab_pane_cp2_srt_ParamLimits

0x2ec2,	// (0x00052107) bg_active_tab_pane_cp2_srt

0x66b0,	// (0x000558f5) tabs_3_active_pane_srt_g1

0xdb0d,	// (0x0005cd52) tabs_3_active_pane_srt_t1_ParamLimits

0xdb0d,	// (0x0005cd52) tabs_3_active_pane_srt_t1

0x42a8,	// (0x000534ed) bg_active_tab_pane_g1_cp2_srt

0x3d4f,	// (0x00052f94) bg_active_tab_pane_g2_cp2_srt

0x42b1,	// (0x000534f6) bg_active_tab_pane_g3_cp2_srt

0x162b,	// (0x00050870) tabs_4_active_pane_srt_ParamLimits

0x162b,	// (0x00050870) tabs_4_active_pane_srt

0x163d,	// (0x00050882) tabs_4_passive_pane_cp2_srt_ParamLimits

0x163d,	// (0x00050882) tabs_4_passive_pane_cp2_srt

0x4406,	// (0x0005364b) aid_size_cell_toolbar

0x635b,	// (0x000555a0) main_idle_act_pane_ParamLimits

0x45f1,	// (0x00053836) popup_large_graphic_colour_window_ParamLimits

0xd20d,	// (0x0005c452) popup_toolbar_window_ParamLimits

0xd20d,	// (0x0005c452) popup_toolbar_window

0x6513,	// (0x00055758) list_single_graphic_2heading_pane_ParamLimits

0x6513,	// (0x00055758) list_single_graphic_2heading_pane

0x3869,	// (0x00052aae) aid_size_cell_apps_grid_lsc_pane

0x387b,	// (0x00052ac0) aid_size_cell_apps_grid_prt_pane

0x4454,	// (0x00053699) bg_wml_button_pane_cp1_ParamLimits

0x4454,	// (0x00053699) bg_wml_button_pane_cp1

0xd6e7,	// (0x0005c92c) form_midp_field_text_pane_t1_ParamLimits

0x5008,	// (0x0005424d) input_focus_pane_cp050_ParamLimits

0x524d,	// (0x00054492) list_midp_form_text_pane_ParamLimits

0x51f3,	// (0x00054438) input_focus_pane_cp051_ParamLimits

0x5207,	// (0x0005444c) list_midp_choice_pane_ParamLimits

0xd682,	// (0x0005c8c7) list_single_2graphic_pane_cp3_ParamLimits

0xd682,	// (0x0005c8c7) list_single_2graphic_pane_cp3

0xd696,	// (0x0005c8db) list_single_midp_graphic_pane_ParamLimits

0xd696,	// (0x0005c8db) list_single_midp_graphic_pane

0xf4de,	// (0x0005e723) list_single_graphic_2heading_pane_g1_ParamLimits

0xf4de,	// (0x0005e723) list_single_graphic_2heading_pane_g1

0xf4ea,	// (0x0005e72f) list_single_graphic_2heading_pane_g4_ParamLimits

0xf4ea,	// (0x0005e72f) list_single_graphic_2heading_pane_g4

0xf4f6,	// (0x0005e73b) list_single_graphic_2heading_pane_g5_ParamLimits

0xf4f6,	// (0x0005e73b) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x0005ea08) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x0005ea08) list_single_graphic_2heading_pane_g

0xf502,	// (0x0005e747) list_single_graphic_2heading_pane_t1_ParamLimits

0xf502,	// (0x0005e747) list_single_graphic_2heading_pane_t1

0xf516,	// (0x0005e75b) list_single_graphic_2heading_pane_t2_ParamLimits

0xf516,	// (0x0005e75b) list_single_graphic_2heading_pane_t2

0xf532,	// (0x0005e777) list_single_graphic_2heading_pane_t3_ParamLimits

0xf532,	// (0x0005e777) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x0005ea0f) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x0005ea0f) list_single_graphic_2heading_pane_t

0x4e4a,	// (0x0005408f) bg_popup_sub_pane_cp2

0x4e74,	// (0x000540b9) grid_toobar_pane

0x1194,	// (0x000503d9) cell_toolbar_pane_ParamLimits

0x1194,	// (0x000503d9) cell_toolbar_pane

0x4ebc,	// (0x00054101) cell_toolbar_pane_g1_ParamLimits

0x4ebc,	// (0x00054101) cell_toolbar_pane_g1

0x4ed0,	// (0x00054115) cell_toolbar_pane_g2_ParamLimits

0x4ed0,	// (0x00054115) cell_toolbar_pane_g2

0x0001,

0xf7d1,	// (0x0005ea16) cell_toolbar_pane_g_ParamLimits

0xf7d1,	// (0x0005ea16) cell_toolbar_pane_g

0x4ef2,	// (0x00054137) grid_highlight_pane_cp2_ParamLimits

0x4ef2,	// (0x00054137) grid_highlight_pane_cp2

0x4f0c,	// (0x00054151) toolbar_button_pane

0x4f18,	// (0x0005415d) toolbar_button_pane_g1

0x4f20,	// (0x00054165) toolbar_button_pane_g2

0x4f28,	// (0x0005416d) toolbar_button_pane_g3

0x4f30,	// (0x00054175) toolbar_button_pane_g4

0x4f38,	// (0x0005417d) toolbar_button_pane_g5

0x4f40,	// (0x00054185) toolbar_button_pane_g6

0x4f48,	// (0x0005418d) toolbar_button_pane_g7

0x4f50,	// (0x00054195) toolbar_button_pane_g8

0x4f58,	// (0x0005419d) toolbar_button_pane_g9

0x0009,

0xf7d6,	// (0x0005ea1b) toolbar_button_pane_g

0x11ee,	// (0x00050433) list_single_2graphic_pane_g1_cp3_ParamLimits

0x11ee,	// (0x00050433) list_single_2graphic_pane_g1_cp3

0xbc7d,	// (0x0005aec2) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbc7d,	// (0x0005aec2) list_single_2graphic_pane_g2_cp3

0x120b,	// (0x00050450) list_single_2graphic_pane_g3_cp3

0x1213,	// (0x00050458) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1213,	// (0x00050458) list_single_2graphic_pane_g4_cp3

0x121f,	// (0x00050464) list_single_2graphic_pane_t1_cp3_ParamLimits

0x121f,	// (0x00050464) list_single_2graphic_pane_t1_cp3

0x1265,	// (0x000504aa) list_single_midp_graphic_pane_g2_ParamLimits

0x1265,	// (0x000504aa) list_single_midp_graphic_pane_g2

0x1184,	// (0x000503c9) aid_zoom_text_primary

0x2749,	// (0x0005198e) aid_zoom_text_secondary

0x4365,	// (0x000535aa) status_small_pane_g7_ParamLimits

0x4365,	// (0x000535aa) status_small_pane_g7

0x4388,	// (0x000535cd) status_small_pane_t1_ParamLimits

0xc467,	// (0x0005b6ac) title_pane_g2

0x0003,

0xf56a,	// (0x0005e7af) title_pane_g

0xc6ef,	// (0x0005b934) aid_size_cell_colour_1_pane_ParamLimits

0xc6ef,	// (0x0005b934) aid_size_cell_colour_1_pane

0xc703,	// (0x0005b948) aid_size_cell_colour_2_pane_ParamLimits

0xc703,	// (0x0005b948) aid_size_cell_colour_2_pane

0xc717,	// (0x0005b95c) aid_size_cell_colour_3_pane_ParamLimits

0xc717,	// (0x0005b95c) aid_size_cell_colour_3_pane

0xc72b,	// (0x0005b970) aid_size_cell_colour_4_pane_ParamLimits

0xc72b,	// (0x0005b970) aid_size_cell_colour_4_pane

0x0b67,	// (0x0004fdac) title_pane_stacon_g1_ParamLimits

0x0b67,	// (0x0004fdac) title_pane_stacon_g1

0x561a,	// (0x0005485f) popup_note_wait_window_g3_ParamLimits

0x561a,	// (0x0005485f) popup_note_wait_window_g3

0x5690,	// (0x000548d5) popup_note_wait_window_t5_ParamLimits

0x5690,	// (0x000548d5) popup_note_wait_window_t5

0x2442,	// (0x00051687) main_feb_china_hwr_fs_writing_pane

0xcbb6,	// (0x0005bdfb) popup_feb_china_hwr_fs_window_ParamLimits

0xcbb6,	// (0x0005bdfb) popup_feb_china_hwr_fs_window

0xbc8e,	// (0x0005aed3) aid_size_cell_hwr_fs_ParamLimits

0xbc8e,	// (0x0005aed3) aid_size_cell_hwr_fs

0x5008,	// (0x0005424d) bg_popup_sub_pane_cp3_ParamLimits

0x5008,	// (0x0005424d) bg_popup_sub_pane_cp3

0xbca3,	// (0x0005aee8) grid_hwr_fs_pane_ParamLimits

0xbca3,	// (0x0005aee8) grid_hwr_fs_pane

0x12b4,	// (0x000504f9) linegrid_hwr_fs_pane_ParamLimits

0x12b4,	// (0x000504f9) linegrid_hwr_fs_pane

0xbcbb,	// (0x0005af00) cell_hwr_fs_pane_ParamLimits

0xbcbb,	// (0x0005af00) cell_hwr_fs_pane

0x5014,	// (0x00054259) linegrid_hwr_fs_pane_g1_ParamLimits

0x5014,	// (0x00054259) linegrid_hwr_fs_pane_g1

0xd656,	// (0x0005c89b) linegrid_hwr_fs_pane_g2_ParamLimits

0xd656,	// (0x0005c89b) linegrid_hwr_fs_pane_g2

0x5032,	// (0x00054277) linegrid_hwr_fs_pane_g3_ParamLimits

0x5032,	// (0x00054277) linegrid_hwr_fs_pane_g3

0x12e6,	// (0x0005052b) linegrid_hwr_fs_pane_g4_ParamLimits

0x12e6,	// (0x0005052b) linegrid_hwr_fs_pane_g4

0x1300,	// (0x00050545) linegrid_hwr_fs_pane_g5_ParamLimits

0x1300,	// (0x00050545) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fc,	// (0x0005ea41) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fc,	// (0x0005ea41) linegrid_hwr_fs_pane_g

0x503e,	// (0x00054283) cell_hwr_fs_pane_g1_ParamLimits

0x503e,	// (0x00054283) cell_hwr_fs_pane_g1

0x4d81,	// (0x00053fc6) cell_hwr_fs_pane_g2_ParamLimits

0x4d81,	// (0x00053fc6) cell_hwr_fs_pane_g2

0xd668,	// (0x0005c8ad) cell_hwr_fs_pane_g3_ParamLimits

0xd668,	// (0x0005c8ad) cell_hwr_fs_pane_g3

0xd675,	// (0x0005c8ba) cell_hwr_fs_pane_g4_ParamLimits

0xd675,	// (0x0005c8ba) cell_hwr_fs_pane_g4

0x0003,

0xf807,	// (0x0005ea4c) cell_hwr_fs_pane_g_ParamLimits

0xf807,	// (0x0005ea4c) cell_hwr_fs_pane_g

0xbce1,	// (0x0005af26) cell_hwr_fs_pane_t1

0x2442,	// (0x00051687) grid_highlight_pane_cp6

0x2442,	// (0x00051687) main_idle_act2_pane

0x3614,	// (0x00052859) aid_inside_area_popup_secondary

0xd765,	// (0x0005c9aa) aid_inside_area_window_primary_ParamLimits

0xd765,	// (0x0005c9aa) aid_inside_area_window_primary

0x6817,	// (0x00055a5c) ai2_news_ticker_pane

0x681f,	// (0x00055a64) aid_size_cell_ai1_link_ParamLimits

0x681f,	// (0x00055a64) aid_size_cell_ai1_link

0xdb39,	// (0x0005cd7e) popup_ai2_data_window_ParamLimits

0xdb39,	// (0x0005cd7e) popup_ai2_data_window

0x684f,	// (0x00055a94) popup_ai2_link_window_ParamLimits

0x684f,	// (0x00055a94) popup_ai2_link_window

0x5008,	// (0x0005424d) bg_popup_sub_pane_cp4_ParamLimits

0x5008,	// (0x0005424d) bg_popup_sub_pane_cp4

0x6863,	// (0x00055aa8) grid_ai2_link_pane_ParamLimits

0x6863,	// (0x00055aa8) grid_ai2_link_pane

0x687a,	// (0x00055abf) popup_ai2_link_window_g1_ParamLimits

0x687a,	// (0x00055abf) popup_ai2_link_window_g1

0x6886,	// (0x00055acb) popup_ai2_link_window_g2_ParamLimits

0x6886,	// (0x00055acb) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0005ec18) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0005ec18) popup_ai2_link_window_g

0x6895,	// (0x00055ada) ai2_mp_button_pane

0x689d,	// (0x00055ae2) ai2_mp_volume_pane

0x51f3,	// (0x00054438) bg_popup_sub_pane_cp5_ParamLimits

0x51f3,	// (0x00054438) bg_popup_sub_pane_cp5

0x68a5,	// (0x00055aea) heading_ai2_gene_pane_ParamLimits

0x68a5,	// (0x00055aea) heading_ai2_gene_pane

0x68b1,	// (0x00055af6) list_ai2_gene_pane_ParamLimits

0x68b1,	// (0x00055af6) list_ai2_gene_pane

0x68f9,	// (0x00055b3e) cell_ai2_link_pane_ParamLimits

0x68f9,	// (0x00055b3e) cell_ai2_link_pane

0x690f,	// (0x00055b54) cell_ai2_link_pane_g1

0x2442,	// (0x00051687) grid_highlight_pane_cp7

0x16e3,	// (0x00050928) ai2_mp_volume_pane_g1

0x69df,	// (0x00055c24) ai2_mp_volume_pane_g2

0xdb63,	// (0x0005cda8) list_ai2_gene_pane_t1

0x69e7,	// (0x00055c2c) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0005ec31) ai2_mp_volume_pane_g

0x16eb,	// (0x00050930) volume_small_pane_cp3

0x69ef,	// (0x00055c34) aid_size_cell_ai2_button

0x69f7,	// (0x00055c3c) grid_ai2_button_pane

0x6a00,	// (0x00055c45) cell_ai2_button_pane_ParamLimits

0x6a00,	// (0x00055c45) cell_ai2_button_pane

0x2438,	// (0x0005167d) cell_ai2_button_pane_g1

0x2442,	// (0x00051687) grid_highlight_pane_cp8

0x699f,	// (0x00055be4) ai2_gene_pane_t1_ParamLimits

0x699f,	// (0x00055be4) ai2_gene_pane_t1

0xcb1e,	// (0x0005bd63) aid_height_parent_landscape

0xd8cc,	// (0x0005cb11) aid_height_set_list

0x635b,	// (0x000555a0) aid_size_parent

0x663e,	// (0x00055883) aid_size_cell_graphic_pane_ParamLimits

0x68c1,	// (0x00055b06) popup_ai2_data_window_g1_ParamLimits

0x68c1,	// (0x00055b06) popup_ai2_data_window_g1

0x68cd,	// (0x00055b12) ai2_news_ticker_pane_g1

0x68d5,	// (0x00055b1a) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0005ec1d) ai2_news_ticker_pane_g

0x68dd,	// (0x00055b22) ai2_news_ticker_pane_t1

0x68eb,	// (0x00055b30) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0005ec22) ai2_news_ticker_pane_t

0x6918,	// (0x00055b5d) heading_ai2_gene_pane_g1

0x6920,	// (0x00055b65) heading_ai2_gene_pane_t1_ParamLimits

0x6920,	// (0x00055b65) heading_ai2_gene_pane_t1

0x6935,	// (0x00055b7a) list_highlight_pane_cp6

0xdb4d,	// (0x0005cd92) ai2_gene_pane_ParamLimits

0xdb4d,	// (0x0005cd92) ai2_gene_pane

0xdb71,	// (0x0005cdb6) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0005ec27) list_ai2_gene_pane_t

0x6970,	// (0x00055bb5) list_highlight_pane_cp8_ParamLimits

0x6970,	// (0x00055bb5) list_highlight_pane_cp8

0x6981,	// (0x00055bc6) ai2_gene_pane_g1_ParamLimits

0x6981,	// (0x00055bc6) ai2_gene_pane_g1

0x6993,	// (0x00055bd8) ai2_gene_pane_g2_ParamLimits

0x6993,	// (0x00055bd8) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0005ec2c) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0005ec2c) ai2_gene_pane_g

0x3449,	// (0x0005268e) scroll_pane_cp12

0xbc3c,	// (0x0005ae81) control_pane_t3_ParamLimits

0xbc3c,	// (0x0005ae81) control_pane_t3

0x4379,	// (0x000535be) status_small_pane_g8_ParamLimits

0x4379,	// (0x000535be) status_small_pane_g8

0xcc4b,	// (0x0005be90) popup_find_window_ParamLimits

0xcf43,	// (0x0005c188) popup_note_image_window_ParamLimits

0x11c4,	// (0x00050409) list_double2_graphic_pane_vc_g1_ParamLimits

0x11c4,	// (0x00050409) list_double2_graphic_pane_vc_g1

0x4eb0,	// (0x000540f5) list_double2_graphic_pane_vc_g2_ParamLimits

0x4eb0,	// (0x000540f5) list_double2_graphic_pane_vc_g2

0x276d,	// (0x000519b2) list_double2_graphic_pane_vc_g3_ParamLimits

0x276d,	// (0x000519b2) list_double2_graphic_pane_vc_g3

0x0002,

0xf631,	// (0x0005e876) list_double2_graphic_pane_vc_g_ParamLimits

0xf631,	// (0x0005e876) list_double2_graphic_pane_vc_g

0x11d0,	// (0x00050415) list_double2_graphic_pane_vc_t1_ParamLimits

0x11d0,	// (0x00050415) list_double2_graphic_pane_vc_t1

0x4eb0,	// (0x000540f5) list_single_heading_pane_vc_g1_ParamLimits

0x4eb0,	// (0x000540f5) list_single_heading_pane_vc_g1

0x276d,	// (0x000519b2) list_single_heading_pane_vc_g2_ParamLimits

0x276d,	// (0x000519b2) list_single_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x0005e833) list_single_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x0005e833) list_single_heading_pane_vc_g

0x123b,	// (0x00050480) list_single_heading_pane_vc_t1_ParamLimits

0x123b,	// (0x00050480) list_single_heading_pane_vc_t1

0x1251,	// (0x00050496) list_single_heading_pane_vc_t2_ParamLimits

0x1251,	// (0x00050496) list_single_heading_pane_vc_t2

0x0001,

0xf7eb,	// (0x0005ea30) list_single_heading_pane_vc_t_ParamLimits

0xf7eb,	// (0x0005ea30) list_single_heading_pane_vc_t

0x4f60,	// (0x000541a5) list_setting_number_pane_vc_g1_ParamLimits

0x4f60,	// (0x000541a5) list_setting_number_pane_vc_g1

0x4f6c,	// (0x000541b1) list_setting_number_pane_vc_g2_ParamLimits

0x4f6c,	// (0x000541b1) list_setting_number_pane_vc_g2

0x0001,

0xf7f0,	// (0x0005ea35) list_setting_number_pane_vc_g_ParamLimits

0xf7f0,	// (0x0005ea35) list_setting_number_pane_vc_g

0x4f78,	// (0x000541bd) list_setting_number_pane_vc_t1_ParamLimits

0x4f78,	// (0x000541bd) list_setting_number_pane_vc_t1

0x4f8c,	// (0x000541d1) list_setting_number_pane_vc_t2_ParamLimits

0x4f8c,	// (0x000541d1) list_setting_number_pane_vc_t2

0x4fa8,	// (0x000541ed) list_setting_number_pane_vc_t3_ParamLimits

0x4fa8,	// (0x000541ed) list_setting_number_pane_vc_t3

0x0002,

0xf7f5,	// (0x0005ea3a) list_setting_number_pane_vc_t_ParamLimits

0xf7f5,	// (0x0005ea3a) list_setting_number_pane_vc_t

0x4fce,	// (0x00054213) set_value_pane_vc_ParamLimits

0x4fce,	// (0x00054213) set_value_pane_vc

0x6513,	// (0x00055758) list_double2_graphic_pane_vc_ParamLimits

0x6513,	// (0x00055758) list_double2_graphic_pane_vc

0x2779,	// (0x000519be) list_double2_large_graphic_pane_vc_ParamLimits

0x2779,	// (0x000519be) list_double2_large_graphic_pane_vc

0x6513,	// (0x00055758) list_double2_pane_vc_ParamLimits

0x6513,	// (0x00055758) list_double2_pane_vc

0x6513,	// (0x00055758) list_double_graphic_heading_pane_vc_ParamLimits

0x6513,	// (0x00055758) list_double_graphic_heading_pane_vc

0x6513,	// (0x00055758) list_double_graphic_pane_vc_ParamLimits

0x6513,	// (0x00055758) list_double_graphic_pane_vc

0x6513,	// (0x00055758) list_double_heading_pane_vc_ParamLimits

0x6513,	// (0x00055758) list_double_heading_pane_vc

0x2779,	// (0x000519be) list_double_large_graphic_pane_vc_ParamLimits

0x2779,	// (0x000519be) list_double_large_graphic_pane_vc

0x6513,	// (0x00055758) list_double_number_pane_vc_ParamLimits

0x6513,	// (0x00055758) list_double_number_pane_vc

0x6513,	// (0x00055758) list_double_pane_vc_ParamLimits

0x6513,	// (0x00055758) list_double_pane_vc

0x6513,	// (0x00055758) list_double_time_pane_vc_ParamLimits

0x6513,	// (0x00055758) list_double_time_pane_vc

0x6513,	// (0x00055758) list_setting_number_pane_vc_ParamLimits

0x6513,	// (0x00055758) list_setting_number_pane_vc

0x6513,	// (0x00055758) list_setting_pane_vc_ParamLimits

0x6513,	// (0x00055758) list_setting_pane_vc

0x6513,	// (0x00055758) list_single_graphic_heading_pane_vc_ParamLimits

0x6513,	// (0x00055758) list_single_graphic_heading_pane_vc

0x6513,	// (0x00055758) list_single_heading_pane_vc_ParamLimits

0x6513,	// (0x00055758) list_single_heading_pane_vc

0x6513,	// (0x00055758) list_single_number_heading_pane_vc_ParamLimits

0x6513,	// (0x00055758) list_single_number_heading_pane_vc

0x11c4,	// (0x00050409) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x11c4,	// (0x00050409) list_double_graphic_heading_pane_vc_g1

0x4eb0,	// (0x000540f5) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4eb0,	// (0x000540f5) list_double_graphic_heading_pane_vc_g2

0x276d,	// (0x000519b2) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x276d,	// (0x000519b2) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf631,	// (0x0005e876) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf631,	// (0x0005e876) list_double_graphic_heading_pane_vc_g

0x281d,	// (0x00051a62) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x281d,	// (0x00051a62) list_double_graphic_heading_pane_vc_t1

0x123b,	// (0x00050480) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x123b,	// (0x00050480) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x0005ec38) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x0005ec38) list_double_graphic_heading_pane_vc_t

0x4f60,	// (0x000541a5) list_setting_pane_vc_g1_ParamLimits

0x4f60,	// (0x000541a5) list_setting_pane_vc_g1

0x4f6c,	// (0x000541b1) list_setting_pane_vc_g2_ParamLimits

0x4f6c,	// (0x000541b1) list_setting_pane_vc_g2

0x0001,

0xf7f0,	// (0x0005ea35) list_setting_pane_vc_g_ParamLimits

0xf7f0,	// (0x0005ea35) list_setting_pane_vc_g

0x6c38,	// (0x00055e7d) list_setting_pane_vc_t1_ParamLimits

0x6c38,	// (0x00055e7d) list_setting_pane_vc_t1

0x6c4c,	// (0x00055e91) list_setting_pane_vc_t2_ParamLimits

0x6c4c,	// (0x00055e91) list_setting_pane_vc_t2

0x0001,

0xfa36,	// (0x0005ec7b) list_setting_pane_vc_t_ParamLimits

0xfa36,	// (0x0005ec7b) list_setting_pane_vc_t

0x4fce,	// (0x00054213) set_value_pane_cp_vc_ParamLimits

0x4fce,	// (0x00054213) set_value_pane_cp_vc

0x4eb0,	// (0x000540f5) list_single_number_heading_pane_vc_g1_ParamLimits

0x4eb0,	// (0x000540f5) list_single_number_heading_pane_vc_g1

0x276d,	// (0x000519b2) list_single_number_heading_pane_vc_g2_ParamLimits

0x276d,	// (0x000519b2) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x0005e833) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x0005e833) list_single_number_heading_pane_vc_g

0x123b,	// (0x00050480) list_single_number_heading_pane_vc_t1_ParamLimits

0x123b,	// (0x00050480) list_single_number_heading_pane_vc_t1

0x2831,	// (0x00051a76) list_single_number_heading_pane_vc_t2_ParamLimits

0x2831,	// (0x00051a76) list_single_number_heading_pane_vc_t2

0x2845,	// (0x00051a8a) list_single_number_heading_pane_vc_t3_ParamLimits

0x2845,	// (0x00051a8a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3b,	// (0x0005ec80) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3b,	// (0x0005ec80) list_single_number_heading_pane_vc_t

0x11c4,	// (0x00050409) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x11c4,	// (0x00050409) list_single_graphic_heading_pane_vc_g1

0x4eb0,	// (0x000540f5) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4eb0,	// (0x000540f5) list_single_graphic_heading_pane_vc_g4

0x276d,	// (0x000519b2) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x276d,	// (0x000519b2) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf631,	// (0x0005e876) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf631,	// (0x0005e876) list_single_graphic_heading_pane_vc_g

0x123b,	// (0x00050480) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x123b,	// (0x00050480) list_single_graphic_heading_pane_vc_t1

0x2857,	// (0x00051a9c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x2857,	// (0x00051a9c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa42,	// (0x0005ec87) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0005ec87) list_single_graphic_heading_pane_vc_t

0x4eb0,	// (0x000540f5) list_double2_pane_vc_g1_ParamLimits

0x4eb0,	// (0x000540f5) list_double2_pane_vc_g1

0x276d,	// (0x000519b2) list_double2_pane_vc_g2_ParamLimits

0x276d,	// (0x000519b2) list_double2_pane_vc_g2

0x0001,

0xf5ee,	// (0x0005e833) list_double2_pane_vc_g_ParamLimits

0xf5ee,	// (0x0005e833) list_double2_pane_vc_g

0x286b,	// (0x00051ab0) list_double2_pane_vc_t1_ParamLimits

0x286b,	// (0x00051ab0) list_double2_pane_vc_t1

0x2881,	// (0x00051ac6) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x2881,	// (0x00051ac6) list_double2_large_graphic_pane_vc_g1

0x288d,	// (0x00051ad2) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x288d,	// (0x00051ad2) list_double2_large_graphic_pane_vc_g2

0x2899,	// (0x00051ade) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2899,	// (0x00051ade) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf606,	// (0x0005e84b) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf606,	// (0x0005e84b) list_double2_large_graphic_pane_vc_g

0x28a5,	// (0x00051aea) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x28a5,	// (0x00051aea) list_double2_large_graphic_pane_vc_t1

0x28bb,	// (0x00051b00) list_double_time_pane_vc_g1_ParamLimits

0x28bb,	// (0x00051b00) list_double_time_pane_vc_g1

0x28c7,	// (0x00051b0c) list_double_time_pane_vc_g2_ParamLimits

0x28c7,	// (0x00051b0c) list_double_time_pane_vc_g2

0x0001,

0xfa47,	// (0x0005ec8c) list_double_time_pane_vc_g_ParamLimits

0xfa47,	// (0x0005ec8c) list_double_time_pane_vc_g

0x28d3,	// (0x00051b18) list_double_time_pane_vc_t1_ParamLimits

0x28d3,	// (0x00051b18) list_double_time_pane_vc_t1

0x28ec,	// (0x00051b31) list_double_time_pane_vc_t2_ParamLimits

0x28ec,	// (0x00051b31) list_double_time_pane_vc_t2

0x292c,	// (0x00051b71) list_double_time_pane_vc_t3_ParamLimits

0x292c,	// (0x00051b71) list_double_time_pane_vc_t3

0x2944,	// (0x00051b89) list_double_time_pane_vc_t4_ParamLimits

0x2944,	// (0x00051b89) list_double_time_pane_vc_t4

0x0003,

0xfa4c,	// (0x0005ec91) list_double_time_pane_vc_t_ParamLimits

0xfa4c,	// (0x0005ec91) list_double_time_pane_vc_t

0x4eb0,	// (0x000540f5) list_double_pane_vc_g1_ParamLimits

0x4eb0,	// (0x000540f5) list_double_pane_vc_g1

0x276d,	// (0x000519b2) list_double_pane_vc_g2_ParamLimits

0x276d,	// (0x000519b2) list_double_pane_vc_g2

0x0001,

0xf5ee,	// (0x0005e833) list_double_pane_vc_g_ParamLimits

0xf5ee,	// (0x0005e833) list_double_pane_vc_g

0x2958,	// (0x00051b9d) list_double_pane_vc_t1_ParamLimits

0x2958,	// (0x00051b9d) list_double_pane_vc_t1

0x296a,	// (0x00051baf) list_double_pane_vc_t2_ParamLimits

0x296a,	// (0x00051baf) list_double_pane_vc_t2

0x0001,

0xfa55,	// (0x0005ec9a) list_double_pane_vc_t_ParamLimits

0xfa55,	// (0x0005ec9a) list_double_pane_vc_t

0x4eb0,	// (0x000540f5) list_double_number_pane_vc_g1_ParamLimits

0x4eb0,	// (0x000540f5) list_double_number_pane_vc_g1

0x276d,	// (0x000519b2) list_double_number_pane_vc_g2_ParamLimits

0x276d,	// (0x000519b2) list_double_number_pane_vc_g2

0x0001,

0xf5ee,	// (0x0005e833) list_double_number_pane_vc_g_ParamLimits

0xf5ee,	// (0x0005e833) list_double_number_pane_vc_g

0x2982,	// (0x00051bc7) list_double_number_pane_vc_t1_ParamLimits

0x2982,	// (0x00051bc7) list_double_number_pane_vc_t1

0x2996,	// (0x00051bdb) list_double_number_pane_vc_t2_ParamLimits

0x2996,	// (0x00051bdb) list_double_number_pane_vc_t2

0x296a,	// (0x00051baf) list_double_number_pane_vc_t3_ParamLimits

0x296a,	// (0x00051baf) list_double_number_pane_vc_t3

0x0002,

0xfa5a,	// (0x0005ec9f) list_double_number_pane_vc_t_ParamLimits

0xfa5a,	// (0x0005ec9f) list_double_number_pane_vc_t

0x29a8,	// (0x00051bed) list_double_large_graphic_pane_vc_g1_ParamLimits

0x29a8,	// (0x00051bed) list_double_large_graphic_pane_vc_g1

0x29b4,	// (0x00051bf9) list_double_large_graphic_pane_vc_g2_ParamLimits

0x29b4,	// (0x00051bf9) list_double_large_graphic_pane_vc_g2

0x2899,	// (0x00051ade) list_double_large_graphic_pane_vc_g3_ParamLimits

0x2899,	// (0x00051ade) list_double_large_graphic_pane_vc_g3

0x29c3,	// (0x00051c08) list_double_large_graphic_pane_vc_g4_ParamLimits

0x29c3,	// (0x00051c08) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa61,	// (0x0005eca6) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa61,	// (0x0005eca6) list_double_large_graphic_pane_vc_g

0x29cf,	// (0x00051c14) list_double_large_graphic_pane_vc_t1_ParamLimits

0x29cf,	// (0x00051c14) list_double_large_graphic_pane_vc_t1

0x29e1,	// (0x00051c26) list_double_large_graphic_pane_vc_t2_ParamLimits

0x29e1,	// (0x00051c26) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6a,	// (0x0005ecaf) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6a,	// (0x0005ecaf) list_double_large_graphic_pane_vc_t

0x4eb0,	// (0x000540f5) list_double_heading_pane_vc_g1_ParamLimits

0x4eb0,	// (0x000540f5) list_double_heading_pane_vc_g1

0x276d,	// (0x000519b2) list_double_heading_pane_vc_g2_ParamLimits

0x276d,	// (0x000519b2) list_double_heading_pane_vc_g2

0x0001,

0xf5ee,	// (0x0005e833) list_double_heading_pane_vc_g_ParamLimits

0xf5ee,	// (0x0005e833) list_double_heading_pane_vc_g

0x29fa,	// (0x00051c3f) list_double_heading_pane_vc_t1_ParamLimits

0x29fa,	// (0x00051c3f) list_double_heading_pane_vc_t1

0x123b,	// (0x00050480) list_double_heading_pane_vc_t2_ParamLimits

0x123b,	// (0x00050480) list_double_heading_pane_vc_t2

0x0001,

0xfa6f,	// (0x0005ecb4) list_double_heading_pane_vc_t_ParamLimits

0xfa6f,	// (0x0005ecb4) list_double_heading_pane_vc_t

0x11c4,	// (0x00050409) list_double_graphic_pane_vc_g1_ParamLimits

0x11c4,	// (0x00050409) list_double_graphic_pane_vc_g1

0x2a0e,	// (0x00051c53) list_double_graphic_pane_vc_g2_ParamLimits

0x2a0e,	// (0x00051c53) list_double_graphic_pane_vc_g2

0x2a1d,	// (0x00051c62) list_double_graphic_pane_vc_g3_ParamLimits

0x2a1d,	// (0x00051c62) list_double_graphic_pane_vc_g3

0x0002,

0xfa74,	// (0x0005ecb9) list_double_graphic_pane_vc_g_ParamLimits

0xfa74,	// (0x0005ecb9) list_double_graphic_pane_vc_g

0x2a29,	// (0x00051c6e) list_double_graphic_pane_vc_t1_ParamLimits

0x2a29,	// (0x00051c6e) list_double_graphic_pane_vc_t1

0x296a,	// (0x00051baf) list_double_graphic_pane_vc_t2_ParamLimits

0x296a,	// (0x00051baf) list_double_graphic_pane_vc_t2

0x0001,

0xfa7b,	// (0x0005ecc0) list_double_graphic_pane_vc_t_ParamLimits

0xfa7b,	// (0x0005ecc0) list_double_graphic_pane_vc_t

0xf562,	// (0x0005e7a7) aid_size_cell_fastswap

0xb38c,	// (0x0005a5d1) aid_size_cell_touch_ParamLimits

0xb38c,	// (0x0005a5d1) aid_size_cell_touch

0x020c,	// (0x0004f451) popup_fast_swap_wide_window_ParamLimits

0x020c,	// (0x0004f451) popup_fast_swap_wide_window

0xb4d7,	// (0x0005a71c) touch_pane_ParamLimits

0xb4d7,	// (0x0005a71c) touch_pane

0x349f,	// (0x000526e4) button_value_adjust_pane_cp2

0x08d1,	// (0x0004fb16) button_value_adjust_pane_cp4

0x08f5,	// (0x0004fb3a) form_field_data_pane_cp2

0xb930,	// (0x0005ab75) form_field_data_wide_pane_cp2

0x3938,	// (0x00052b7d) bg_scroll_pane_ParamLimits

0x0cca,	// (0x0004ff0f) scroll_handle_pane_ParamLimits

0x0cde,	// (0x0004ff23) scroll_sc2_down_pane_ParamLimits

0x0cde,	// (0x0004ff23) scroll_sc2_down_pane

0x3969,	// (0x00052bae) scroll_sc2_up_pane_ParamLimits

0x3969,	// (0x00052bae) scroll_sc2_up_pane

0xdc9c,	// (0x0005cee1) grid_wheel_folder_pane_g1_ParamLimits

0xdc9c,	// (0x0005cee1) grid_wheel_folder_pane_g1

0x0f2d,	// (0x00050172) clock_nsta_pane_cp2_ParamLimits

0x0f2d,	// (0x00050172) clock_nsta_pane_cp2

0xca33,	// (0x0005bc78) listscroll_midp_pane_ParamLimits

0xca44,	// (0x0005bc89) midp_canvas_pane

0x43f4,	// (0x00053639) nsta_clock_indic_pane

0x443a,	// (0x0005367f) listscroll_form_pane_vc

0x4442,	// (0x00053687) listscroll_set_pane_vc_ParamLimits

0x4442,	// (0x00053687) listscroll_set_pane_vc

0xd36a,	// (0x0005c5af) clock_nsta_pane

0xd394,	// (0x0005c5d9) indicator_nsta_pane

0x4e4a,	// (0x0005408f) bg_popup_sub_pane_cp2_ParamLimits

0x4e5e,	// (0x000540a3) find_pane_cp2_ParamLimits

0x4e5e,	// (0x000540a3) find_pane_cp2

0x4e74,	// (0x000540b9) grid_toobar_pane_ParamLimits

0x4fdc,	// (0x00054221) list_form_gen_pane_vc_ParamLimits

0x4fdc,	// (0x00054221) list_form_gen_pane_vc

0x4ff2,	// (0x00054237) scroll_pane_cp8_vc_ParamLimits

0x4ff2,	// (0x00054237) scroll_pane_cp8_vc

0x506e,	// (0x000542b3) data_form_wide_pane_vc_ParamLimits

0x506e,	// (0x000542b3) data_form_wide_pane_vc

0x507a,	// (0x000542bf) form_field_data_wide_pane_vc_g1

0x5082,	// (0x000542c7) form_field_data_wide_pane_vc_t1_ParamLimits

0x5082,	// (0x000542c7) form_field_data_wide_pane_vc_t1

0x34b3,	// (0x000526f8) input_focus_pane_cp6_vc_ParamLimits

0x34b3,	// (0x000526f8) input_focus_pane_cp6_vc

0xd709,	// (0x0005c94e) list_midp_pane_ParamLimits

0x66a4,	// (0x000558e9) scroll_pane_cp16_ParamLimits

0x66a4,	// (0x000558e9) scroll_pane_cp16

0x53e0,	// (0x00054625) button_value_adjust_pane_ParamLimits

0x53e0,	// (0x00054625) button_value_adjust_pane

0xd8dd,	// (0x0005cb22) button_value_adjust_pane_cp6_ParamLimits

0xd8dd,	// (0x0005cb22) button_value_adjust_pane_cp6

0xd9f7,	// (0x0005cc3c) settings_code_pane_cp_ParamLimits

0xd9f7,	// (0x0005cc3c) settings_code_pane_cp

0x2438,	// (0x0005167d) cell_touch_pane_g1

0x2438,	// (0x0005167d) cell_touch_pane_g2

0x0001,

0xf71a,	// (0x0005e95f) cell_touch_pane_g

0xdb7f,	// (0x0005cdc4) cell_touch_pane_cp_ParamLimits

0xdb7f,	// (0x0005cdc4) cell_touch_pane_cp

0xdb9b,	// (0x0005cde0) cell_touch_pane_ParamLimits

0xdb9b,	// (0x0005cde0) cell_touch_pane

0x2438,	// (0x0005167d) scroll_sc2_down_pane_g1

0x2438,	// (0x0005167d) scroll_sc2_up_pane_g1

0x2442,	// (0x00051687) bg_set_opt_pane_cp4_vc

0x6a34,	// (0x00055c79) list_set_graphic_pane_vc_g1_ParamLimits

0x6a34,	// (0x00055c79) list_set_graphic_pane_vc_g1

0x6a40,	// (0x00055c85) list_set_graphic_pane_vc_g2_ParamLimits

0x6a40,	// (0x00055c85) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x0005ec3d) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x0005ec3d) list_set_graphic_pane_vc_g

0x6a4c,	// (0x00055c91) text_primary_small_cp13_vc_ParamLimits

0x6a4c,	// (0x00055c91) text_primary_small_cp13_vc

0x6a64,	// (0x00055ca9) list_set_graphic_pane_vc_ParamLimits

0x6a64,	// (0x00055ca9) list_set_graphic_pane_vc

0x2442,	// (0x00051687) input_focus_pane_cp2_vc

0x2438,	// (0x0005167d) setting_code_pane_vc_g1

0x6a78,	// (0x00055cbd) setting_code_pane_vc_t1

0x6a86,	// (0x00055ccb) set_text_pane_vc_t1_ParamLimits

0x6a86,	// (0x00055ccb) set_text_pane_vc_t1

0x2442,	// (0x00051687) input_focus_pane_cp1_vc

0x6aa1,	// (0x00055ce6) list_set_text_pane_vc

0x2438,	// (0x0005167d) setting_text_pane_vc_g1

0x2442,	// (0x00051687) bg_set_opt_pane_cp2_vc

0x6aab,	// (0x00055cf0) setting_slider_graphic_pane_vc_g1

0x6ab3,	// (0x00055cf8) setting_slider_graphic_pane_vc_t1

0x6ac1,	// (0x00055d06) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x0005ec42) setting_slider_graphic_pane_vc_t

0x6acf,	// (0x00055d14) slider_set_pane_cp_vc

0x6ad7,	// (0x00055d1c) slider_set_pane_vc_g1

0x6ae0,	// (0x00055d25) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x0005ec47) slider_set_pane_vc_g

0x351a,	// (0x0005275f) set_opt_bg_pane_g1_copy1

0x3522,	// (0x00052767) set_opt_bg_pane_g2_copy1

0x6b0c,	// (0x00055d51) set_opt_bg_pane_g3_copy1

0x3532,	// (0x00052777) set_opt_bg_pane_g4_copy1

0x353a,	// (0x0005277f) set_opt_bg_pane_g5_copy1

0x3542,	// (0x00052787) set_opt_bg_pane_g6_copy1

0x6b16,	// (0x00055d5b) set_opt_bg_pane_g7_copy1

0x6b1e,	// (0x00055d63) set_opt_bg_pane_g8_copy1

0x6b28,	// (0x00055d6d) set_opt_bg_pane_g9_copy1

0x2442,	// (0x00051687) bg_set_opt_pane_cp_vc

0x6b32,	// (0x00055d77) setting_slider_pane_vc_t1

0x6ab3,	// (0x00055cf8) setting_slider_pane_vc_t2

0x6ac1,	// (0x00055d06) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x0005ec56) setting_slider_pane_vc_t

0x6acf,	// (0x00055d14) slider_set_pane_vc

0x135e,	// (0x000505a3) volume_set_pane_vc_g1

0x1367,	// (0x000505ac) volume_set_pane_vc_g2

0x1370,	// (0x000505b5) volume_set_pane_vc_g3

0x1379,	// (0x000505be) volume_set_pane_vc_g4

0x1382,	// (0x000505c7) volume_set_pane_vc_g5

0x138b,	// (0x000505d0) volume_set_pane_vc_g6

0x1394,	// (0x000505d9) volume_set_pane_vc_g7

0x139d,	// (0x000505e2) volume_set_pane_vc_g8

0x13a6,	// (0x000505eb) volume_set_pane_vc_g9

0x13af,	// (0x000505f4) volume_set_pane_vc_g10

0x0009,

0xfa18,	// (0x0005ec5d) volume_set_pane_vc_g

0x6b41,	// (0x00055d86) volume_set_pane_vc

0x6b49,	// (0x00055d8e) button_value_adjust_pane_cp1_vc

0x6b53,	// (0x00055d98) list_highlight_pane_cp2_vc

0x6b5c,	// (0x00055da1) list_set_pane_vc_ParamLimits

0x6b5c,	// (0x00055da1) list_set_pane_vc

0x6bc6,	// (0x00055e0b) main_pane_set_vc_t1_ParamLimits

0x6bc6,	// (0x00055e0b) main_pane_set_vc_t1

0x6bdb,	// (0x00055e20) main_pane_set_vc_t2_ParamLimits

0x6bdb,	// (0x00055e20) main_pane_set_vc_t2

0x6bed,	// (0x00055e32) main_pane_set_vc_t3_ParamLimits

0x6bed,	// (0x00055e32) main_pane_set_vc_t3

0x6c01,	// (0x00055e46) main_pane_set_vc_t4_ParamLimits

0x6c01,	// (0x00055e46) main_pane_set_vc_t4

0x0003,

0xfa2d,	// (0x0005ec72) main_pane_set_vc_t_ParamLimits

0xfa2d,	// (0x0005ec72) main_pane_set_vc_t

0x6c15,	// (0x00055e5a) setting_code_pane_vc_ParamLimits

0x6c15,	// (0x00055e5a) setting_code_pane_vc

0x6c26,	// (0x00055e6b) setting_slider_graphic_pane_vc

0x6c26,	// (0x00055e6b) setting_slider_pane_vc

0x6c26,	// (0x00055e6b) setting_text_pane_vc

0x6c26,	// (0x00055e6b) setting_volume_pane_vc

0x6c30,	// (0x00055e75) scroll_pane_cp121_vc

0x348d,	// (0x000526d2) set_content_pane_vc

0x6c6e,	// (0x00055eb3) button_value_adjust_pane_g1

0x6c77,	// (0x00055ebc) button_value_adjust_pane_g2

0x0001,

0xfa80,	// (0x0005ecc5) button_value_adjust_pane_g

0x6c80,	// (0x00055ec5) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6c80,	// (0x00055ec5) form_field_slider_wide_pane_vc_t1

0x6c94,	// (0x00055ed9) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6c94,	// (0x00055ed9) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa85,	// (0x0005ecca) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa85,	// (0x0005ecca) form_field_slider_wide_pane_vc_t

0x2ec2,	// (0x00052107) input_focus_pane_cp10_vc_ParamLimits

0x2ec2,	// (0x00052107) input_focus_pane_cp10_vc

0x6ca6,	// (0x00055eeb) slider_cont_pane_cp1_vc_ParamLimits

0x6ca6,	// (0x00055eeb) slider_cont_pane_cp1_vc

0x6ad7,	// (0x00055d1c) slider_form_pane_g1_cp2

0x6ae0,	// (0x00055d25) slider_form_pane_g2_cp2

0x6cbf,	// (0x00055f04) form_field_slider_pane_vc_t3

0x6ccd,	// (0x00055f12) form_field_slider_pane_vc_t4

0x6cdb,	// (0x00055f20) slider_form_pane_vc_ParamLimits

0x6cdb,	// (0x00055f20) slider_form_pane_vc

0x6ce8,	// (0x00055f2d) form_field_slider_pane_vc_t1_ParamLimits

0x6ce8,	// (0x00055f2d) form_field_slider_pane_vc_t1

0x6c94,	// (0x00055ed9) form_field_slider_pane_vc_t2_ParamLimits

0x6c94,	// (0x00055ed9) form_field_slider_pane_vc_t2

0x0001,

0xfa95,	// (0x0005ecda) form_field_slider_pane_vc_t_ParamLimits

0xfa95,	// (0x0005ecda) form_field_slider_pane_vc_t

0x2ec2,	// (0x00052107) input_focus_pane_cp9_vc_ParamLimits

0x2ec2,	// (0x00052107) input_focus_pane_cp9_vc

0x6d04,	// (0x00055f49) slider_cont_pane_vc_ParamLimits

0x6d04,	// (0x00055f49) slider_cont_pane_vc

0x6d16,	// (0x00055f5b) list_form_graphic_pane_cp_vc_ParamLimits

0x6d16,	// (0x00055f5b) list_form_graphic_pane_cp_vc

0x507a,	// (0x000542bf) form_field_popup_wide_pane_vc_g1

0x6d2b,	// (0x00055f70) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6d2b,	// (0x00055f70) form_field_popup_wide_pane_vc_t1

0x34b3,	// (0x000526f8) input_focus_pane_cp8_vc_ParamLimits

0x34b3,	// (0x000526f8) input_focus_pane_cp8_vc

0x6d42,	// (0x00055f87) list_form_wide_pane_vc_ParamLimits

0x6d42,	// (0x00055f87) list_form_wide_pane_vc

0x6d4e,	// (0x00055f93) list_form_graphic_pane_vc_g1

0x6d56,	// (0x00055f9b) list_form_graphic_pane_vc_t1_ParamLimits

0x6d56,	// (0x00055f9b) list_form_graphic_pane_vc_t1

0x2522,	// (0x00051767) list_highlight_pane_cp5_vc_ParamLimits

0x2522,	// (0x00051767) list_highlight_pane_cp5_vc

0x6d72,	// (0x00055fb7) list_form_graphic_pane_vc_ParamLimits

0x6d72,	// (0x00055fb7) list_form_graphic_pane_vc

0x507a,	// (0x000542bf) form_field_popup_pane_vc_g1

0x6d88,	// (0x00055fcd) form_field_popup_pane_vc_t1_ParamLimits

0x6d88,	// (0x00055fcd) form_field_popup_pane_vc_t1

0x34b3,	// (0x000526f8) input_focus_pane_cp7_vc_ParamLimits

0x34b3,	// (0x000526f8) input_focus_pane_cp7_vc

0x6d9f,	// (0x00055fe4) list_form_pane_vc_ParamLimits

0x6d9f,	// (0x00055fe4) list_form_pane_vc

0x6dab,	// (0x00055ff0) data_form_pane_vc_t1_ParamLimits

0x6dab,	// (0x00055ff0) data_form_pane_vc_t1

0x351a,	// (0x0005275f) input_focus_pane_vc_g1

0x3522,	// (0x00052767) input_focus_pane_vc_g2

0x352a,	// (0x0005276f) input_focus_pane_vc_g3

0x3532,	// (0x00052777) input_focus_pane_vc_g4

0x353a,	// (0x0005277f) input_focus_pane_vc_g5

0x3542,	// (0x00052787) input_focus_pane_vc_g6

0x354a,	// (0x0005278f) input_focus_pane_vc_g7

0x3552,	// (0x00052797) input_focus_pane_vc_g8

0x355a,	// (0x0005279f) input_focus_pane_vc_g9

0x2438,	// (0x0005167d) input_focus_pane_vc_g10

0x0009,

0xf6a3,	// (0x0005e8e8) input_focus_pane_vc_g

0x506e,	// (0x000542b3) data_form_pane_vc_ParamLimits

0x506e,	// (0x000542b3) data_form_pane_vc

0x507a,	// (0x000542bf) form_field_data_pane_vc_g1

0x6dc6,	// (0x0005600b) form_field_data_pane_vc_t1_ParamLimits

0x6dc6,	// (0x0005600b) form_field_data_pane_vc_t1

0x34b3,	// (0x000526f8) input_focus_pane_vc_ParamLimits

0x34b3,	// (0x000526f8) input_focus_pane_vc

0x6de0,	// (0x00056025) button_value_adjust_pane_cp3_vc

0x6de8,	// (0x0005602d) button_value_adjust_pane_cp5_vc

0x6df0,	// (0x00056035) form_field_data_pane_vc_ParamLimits

0x6df0,	// (0x00056035) form_field_data_pane_vc

0x6e07,	// (0x0005604c) form_field_data_pane_vc_cp2

0x6e0f,	// (0x00056054) form_field_data_wide_pane_vc_ParamLimits

0x6e0f,	// (0x00056054) form_field_data_wide_pane_vc

0x6e25,	// (0x0005606a) form_field_data_wide_pane_vc_cp2

0x6e2d,	// (0x00056072) form_field_popup_pane_vc_ParamLimits

0x6e2d,	// (0x00056072) form_field_popup_pane_vc

0x6e44,	// (0x00056089) form_field_popup_wide_pane_vc_ParamLimits

0x6e44,	// (0x00056089) form_field_popup_wide_pane_vc

0x6e5a,	// (0x0005609f) form_field_slider_pane_vc_ParamLimits

0x6e5a,	// (0x0005609f) form_field_slider_pane_vc

0x6e6d,	// (0x000560b2) form_field_slider_wide_pane_vc_ParamLimits

0x6e6d,	// (0x000560b2) form_field_slider_wide_pane_vc

0xdbb9,	// (0x0005cdfe) grid_touch_1_pane_ParamLimits

0xdbb9,	// (0x0005cdfe) grid_touch_1_pane

0xdbcd,	// (0x0005ce12) grid_touch_2_pane_ParamLimits

0xdbcd,	// (0x0005ce12) grid_touch_2_pane

0x6f42,	// (0x00056187) touch_pane_g1_ParamLimits

0x6f42,	// (0x00056187) touch_pane_g1

0x6ea4,	// (0x000560e9) cell_app_pane_cp_wide_ParamLimits

0x6ea4,	// (0x000560e9) cell_app_pane_cp_wide

0x6eb5,	// (0x000560fa) grid_popup_fast_wide_pane_ParamLimits

0x6eb5,	// (0x000560fa) grid_popup_fast_wide_pane

0x6ec9,	// (0x0005610e) scroll_pane_cp19_ParamLimits

0x6ec9,	// (0x0005610e) scroll_pane_cp19

0x2442,	// (0x00051687) bg_popup_window_pane_cp20

0x6edd,	// (0x00056122) listscroll_popup_fast_wide_pane

0x3680,	// (0x000528c5) grid_indicator_nsta_pane

0x6ee5,	// (0x0005612a) clock_nsta_pane_g1

0x6eee,	// (0x00056133) clock_nsta_pane_t1

0xdbf7,	// (0x0005ce3c) cell_indicator_nsta_pane_ParamLimits

0xdbf7,	// (0x0005ce3c) cell_indicator_nsta_pane

0x6f42,	// (0x00056187) cell_indicator_nsta_pane_g1

0xdc10,	// (0x0005ce55) cell_indicator_nsta_pane_g2

0x0001,

0xfa9f,	// (0x0005ece4) cell_indicator_nsta_pane_g

0x6f66,	// (0x000561ab) clock_nsta_pane_cp

0x6f6e,	// (0x000561b3) indicator_nsta_pane_cp

0x6f77,	// (0x000561bc) nsta_clock_indic_pane_g1

0x25eb,	// (0x00051830) grid_indicator_pane

0x3a5e,	// (0x00052ca3) scroll_pane_cp29

0x0e7c,	// (0x000500c1) indicator_nsta_pane_cp2_ParamLimits

0x0e7c,	// (0x000500c1) indicator_nsta_pane_cp2

0x2522,	// (0x00051767) main_apps_wheel_pane

0x5267,	// (0x000544ac) form_midp_field_text_pane_ParamLimits

0x53b2,	// (0x000545f7) scroll_bar_cp050_ParamLimits

0x6fe0,	// (0x00056225) cell_indicator_pane_ParamLimits

0x6fe0,	// (0x00056225) cell_indicator_pane

0x6ff7,	// (0x0005623c) cell_indicator_pane_g1

0xdc26,	// (0x0005ce6b) grid_wheel_folder_pane_ParamLimits

0xdc26,	// (0x0005ce6b) grid_wheel_folder_pane

0xdc34,	// (0x0005ce79) list_wheel_apps_pane_ParamLimits

0xdc34,	// (0x0005ce79) list_wheel_apps_pane

0xdc42,	// (0x0005ce87) main_apps_wheel_pane_g1_ParamLimits

0xdc42,	// (0x0005ce87) main_apps_wheel_pane_g1

0xdc4e,	// (0x0005ce93) main_apps_wheel_pane_g2_ParamLimits

0xdc4e,	// (0x0005ce93) main_apps_wheel_pane_g2

0x0001,

0xfabb,	// (0x0005ed00) main_apps_wheel_pane_g_ParamLimits

0xfabb,	// (0x0005ed00) main_apps_wheel_pane_g

0xdc5c,	// (0x0005cea1) main_apps_wheel_pane_t1_ParamLimits

0xdc5c,	// (0x0005cea1) main_apps_wheel_pane_t1

0xdc70,	// (0x0005ceb5) list_wheel_apps_pane_g1

0xdc78,	// (0x0005cebd) list_wheel_apps_pane_g2

0xdc80,	// (0x0005cec5) list_wheel_apps_pane_g3

0xdc88,	// (0x0005cecd) list_wheel_apps_pane_g4

0xdc92,	// (0x0005ced7) list_wheel_apps_pane_g5

0x0004,

0xfac0,	// (0x0005ed05) list_wheel_apps_pane_g

0x3f82,	// (0x000531c7) navi_icon_text_pane

0xd265,	// (0x0005c4aa) aid_fill_nsta

0xdca9,	// (0x0005ceee) navi_icon_text_pane_g1

0xdcb5,	// (0x0005cefa) navi_icon_text_pane_t1

0xca1b,	// (0x0005bc60) list_set_graphic_pane_t1_ParamLimits

0xca1b,	// (0x0005bc60) list_set_graphic_pane_t1

0x5b10,	// (0x00054d55) popup_midp_note_alarm_window_t6_ParamLimits

0x5b10,	// (0x00054d55) popup_midp_note_alarm_window_t6

0x5b22,	// (0x00054d67) popup_midp_note_alarm_window_t7_ParamLimits

0x5b22,	// (0x00054d67) popup_midp_note_alarm_window_t7

0x5b34,	// (0x00054d79) popup_midp_note_alarm_window_t8_ParamLimits

0x5b34,	// (0x00054d79) popup_midp_note_alarm_window_t8

0x5b46,	// (0x00054d8b) popup_midp_note_alarm_window_t9_ParamLimits

0x5b46,	// (0x00054d8b) popup_midp_note_alarm_window_t9

0x5b58,	// (0x00054d9d) popup_midp_note_alarm_window_t10_ParamLimits

0x5b58,	// (0x00054d9d) popup_midp_note_alarm_window_t10

0x5b6a,	// (0x00054daf) popup_midp_note_alarm_window_t11_ParamLimits

0x5b6a,	// (0x00054daf) popup_midp_note_alarm_window_t11

0x5b7c,	// (0x00054dc1) scroll_pane_cp17_ParamLimits

0x5b7c,	// (0x00054dc1) scroll_pane_cp17

0x135e,	// (0x000505a3) volume_small_pane_cp_g1

0x16f4,	// (0x00050939) volume_small_pane_cp_g2

0x16fd,	// (0x00050942) volume_small_pane_cp_g3

0x1706,	// (0x0005094b) volume_small_pane_cp_g4

0x170f,	// (0x00050954) volume_small_pane_cp_g5

0x1718,	// (0x0005095d) volume_small_pane_cp_g6

0x1721,	// (0x00050966) volume_small_pane_cp_g7

0x172a,	// (0x0005096f) volume_small_pane_cp_g8

0x1733,	// (0x00050978) volume_small_pane_cp_g9

0x173c,	// (0x00050981) volume_small_pane_cp_g10

0x41d1,	// (0x00053416) midp_ticker_pane_g1_ParamLimits

0x41dd,	// (0x00053422) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x0005e9b0) midp_ticker_pane_g_ParamLimits

0xcadb,	// (0x0005bd20) midp_ticker_pane_t1_ParamLimits

0xd285,	// (0x0005c4ca) aid_fill_nsta_2

0x539e,	// (0x000545e3) list_form2_midp_pane

0x64e2,	// (0x00055727) midp_editing_number_pane_ParamLimits

0x64f1,	// (0x00055736) midp_ticker_pane_ParamLimits

0x70de,	// (0x00056323) form2_midp_field_pane

0x7102,	// (0x00056347) scroll_pane_cp51

0x7122,	// (0x00056367) form2_midp_button_pane_ParamLimits

0x7122,	// (0x00056367) form2_midp_button_pane

0x7134,	// (0x00056379) form2_midp_content_pane_ParamLimits

0x7134,	// (0x00056379) form2_midp_content_pane

0x714e,	// (0x00056393) form2_midp_field_choice_group_pane

0x7156,	// (0x0005639b) form2_midp_field_pane_g1

0x715e,	// (0x000563a3) form2_midp_field_pane_g2

0x7166,	// (0x000563ab) form2_midp_field_pane_g3

0x716e,	// (0x000563b3) form2_midp_field_pane_g4

0x0003,

0xfae5,	// (0x0005ed2a) form2_midp_field_pane_g

0x7176,	// (0x000563bb) form2_midp_gauge_slider_pane

0x717e,	// (0x000563c3) form2_midp_gauge_wait_pane

0x7186,	// (0x000563cb) form2_midp_image_pane_ParamLimits

0x7186,	// (0x000563cb) form2_midp_image_pane

0x71a1,	// (0x000563e6) form2_midp_label_pane_ParamLimits

0x71a1,	// (0x000563e6) form2_midp_label_pane

0xdce3,	// (0x0005cf28) form2_midp_label_pane_cp_ParamLimits

0xdce3,	// (0x0005cf28) form2_midp_label_pane_cp

0x71db,	// (0x00056420) form2_midp_string_pane_ParamLimits

0x71db,	// (0x00056420) form2_midp_string_pane

0xbea1,	// (0x0005b0e6) form2_midp_text_pane_ParamLimits

0xbea1,	// (0x0005b0e6) form2_midp_text_pane

0x71ed,	// (0x00056432) form2_midp_time_pane

0x71fd,	// (0x00056442) input_focus_pane_cp51_ParamLimits

0x71fd,	// (0x00056442) input_focus_pane_cp51

0x7215,	// (0x0005645a) form2_midp_label_pane_t1_ParamLimits

0x7215,	// (0x0005645a) form2_midp_label_pane_t1

0xbec0,	// (0x0005b105) form2_mdip_text_pane_t1_ParamLimits

0xbec0,	// (0x0005b105) form2_mdip_text_pane_t1

0x2a78,	// (0x00051cbd) form2_midp_time_pane_t1

0x725e,	// (0x000564a3) form2_midp_gauge_slider_pane_t1

0xdd04,	// (0x0005cf49) form2_midp_gauge_slider_pane_t2

0xdd16,	// (0x0005cf5b) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaee,	// (0x0005ed33) form2_midp_gauge_slider_pane_t

0x7294,	// (0x000564d9) form2_midp_slider_pane

0x72a0,	// (0x000564e5) form2_midp_gauge_wait_pane_t1

0x72ae,	// (0x000564f3) form2_midp_wait_pane_ParamLimits

0x72ae,	// (0x000564f3) form2_midp_wait_pane

0xdd28,	// (0x0005cf6d) list_single_2graphic_pane_cp4_ParamLimits

0xdd28,	// (0x0005cf6d) list_single_2graphic_pane_cp4

0xd696,	// (0x0005c8db) list_single_midp_graphic_pane_cp_ParamLimits

0xd696,	// (0x0005c8db) list_single_midp_graphic_pane_cp

0x2442,	// (0x00051687) list_highlight_pane_cp20

0x7308,	// (0x0005654d) list_single_2graphic_pane_g1_cp4

0x7310,	// (0x00056555) list_single_2graphic_pane_g2_cp4

0x7318,	// (0x0005655d) list_single_2graphic_pane_t1_cp4

0x2522,	// (0x00051767) list_highlight_pane_cp21

0x7327,	// (0x0005656c) list_single_midp_graphic_pane_g4_cp

0x7336,	// (0x0005657b) list_single_midp_graphic_pane_t1_cp

0xdd3d,	// (0x0005cf82) form2_mdip_string_pane_t1_ParamLimits

0xdd3d,	// (0x0005cf82) form2_mdip_string_pane_t1

0x2442,	// (0x00051687) bg_wml_button_pane_cp2

0x2438,	// (0x0005167d) form2_midp_image_pane_g1

0x2734,	// (0x00051979) list_double_large_graphic_pane_g5_ParamLimits

0x2734,	// (0x00051979) list_double_large_graphic_pane_g5

0xca33,	// (0x0005bc78) midp_form_pane_ParamLimits

0x2522,	// (0x00051767) main_apps_wheel_pane_ParamLimits

0xcfc1,	// (0x0005c206) popup_preview_window_ParamLimits

0xcfc1,	// (0x0005c206) popup_preview_window

0x49b0,	// (0x00053bf5) popup_touch_info_window_ParamLimits

0x49b0,	// (0x00053bf5) popup_touch_info_window

0x49ce,	// (0x00053c13) popup_touch_menu_window_ParamLimits

0x49ce,	// (0x00053c13) popup_touch_menu_window

0x242e,	// (0x00051673) bg_popup_sub_pane_cp6

0x7444,	// (0x00056689) list_touch_menu_pane

0x744c,	// (0x00056691) list_single_touch_menu_pane_ParamLimits

0x744c,	// (0x00056691) list_single_touch_menu_pane

0x7463,	// (0x000566a8) list_single_touch_menu_pane_t1

0x2522,	// (0x00051767) bg_popup_sub_pane_cp7_ParamLimits

0x2522,	// (0x00051767) bg_popup_sub_pane_cp7

0x7471,	// (0x000566b6) heading_sub_pane

0x7479,	// (0x000566be) list_touch_info_pane_ParamLimits

0x7479,	// (0x000566be) list_touch_info_pane

0x7488,	// (0x000566cd) list_single_touch_info_pane_ParamLimits

0x7488,	// (0x000566cd) list_single_touch_info_pane

0x749a,	// (0x000566df) list_single_touch_info_pane_t1

0x74a8,	// (0x000566ed) list_single_touch_info_pane_t2

0x0001,

0xfafc,	// (0x0005ed41) list_single_touch_info_pane_t

0x40f6,	// (0x0005333b) bg_popup_heading_pane_cp

0x74b6,	// (0x000566fb) heading_sub_pane_t1

0x5008,	// (0x0005424d) bg_popup_preview_window_pane_cp_ParamLimits

0x5008,	// (0x0005424d) bg_popup_preview_window_pane_cp

0x7471,	// (0x000566b6) heading_preview_pane

0x7479,	// (0x000566be) list_preview_pane_ParamLimits

0x7479,	// (0x000566be) list_preview_pane

0x74c4,	// (0x00056709) popup_preview_window_g1

0x7488,	// (0x000566cd) list_single_preview_pane_ParamLimits

0x7488,	// (0x000566cd) list_single_preview_pane

0x74cc,	// (0x00056711) list_single_preview_pane_g1

0x74d4,	// (0x00056719) list_single_preview_pane_t1

0x749a,	// (0x000566df) list_single_preview_pane_t2

0x0001,

0xfb01,	// (0x0005ed46) list_single_preview_pane_t

0x74e2,	// (0x00056727) bg_popup_heading_pane_cp2_ParamLimits

0x74e2,	// (0x00056727) bg_popup_heading_pane_cp2

0x74f8,	// (0x0005673d) heading_preview_pane_g1

0x7500,	// (0x00056745) heading_preview_pane_t1_ParamLimits

0x7500,	// (0x00056745) heading_preview_pane_t1

0x260e,	// (0x00051853) soft_indicator_pane_t1_ParamLimits

0x3426,	// (0x0005266b) scroll_pane_ParamLimits

0x3957,	// (0x00052b9c) scroll_sc2_left_pane

0x3960,	// (0x00052ba5) scroll_sc2_right_pane

0x397f,	// (0x00052bc4) scroll_bg_pane_g1_ParamLimits

0x3994,	// (0x00052bd9) scroll_bg_pane_g2_ParamLimits

0x39ac,	// (0x00052bf1) scroll_bg_pane_g3_ParamLimits

0xf6fa,	// (0x0005e93f) scroll_bg_pane_g_ParamLimits

0x397f,	// (0x00052bc4) scroll_handle_pane_g1_ParamLimits

0x39ce,	// (0x00052c13) scroll_handle_pane_g2_ParamLimits

0x39ac,	// (0x00052bf1) scroll_handle_pane_g3_ParamLimits

0xf701,	// (0x0005e946) scroll_handle_pane_g_ParamLimits

0x447c,	// (0x000536c1) popup_choice_list_window_ParamLimits

0x447c,	// (0x000536c1) popup_choice_list_window

0x4e56,	// (0x0005409b) choice_list_pane

0x4ee4,	// (0x00054129) cell_toolbar_pane_t1

0x4f0c,	// (0x00054151) toolbar_button_pane_ParamLimits

0x602d,	// (0x00055272) ai_gene_pane_1_t2_ParamLimits

0x602d,	// (0x00055272) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0005eb57) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0005eb57) ai_gene_pane_1_t

0x751d,	// (0x00056762) scroll_sc2_left_pane_g1

0x751d,	// (0x00056762) scroll_sc2_right_pane_g1

0x4454,	// (0x00053699) bg_popup_sub_pane_cp10

0x7527,	// (0x0005676c) list_choice_list_pane

0x753e,	// (0x00056783) list_single_choice_list_pane_ParamLimits

0x753e,	// (0x00056783) list_single_choice_list_pane

0x7552,	// (0x00056797) list_single_choice_list_pane_g1

0x755a,	// (0x0005679f) list_single_choice_list_pane_t1_ParamLimits

0x755a,	// (0x0005679f) list_single_choice_list_pane_t1

0x756f,	// (0x000567b4) choice_list_pane_g1

0x7577,	// (0x000567bc) choice_list_pane_t1

0x242e,	// (0x00051673) input_focus_pane_cp11

0x3834,	// (0x00052a79) title_pane_stacon_g2_ParamLimits

0x3834,	// (0x00052a79) title_pane_stacon_g2

0x0002,

0xf6e0,	// (0x0005e925) title_pane_stacon_g_ParamLimits

0xf6e0,	// (0x0005e925) title_pane_stacon_g

0x40f6,	// (0x0005333b) cursor_press_pane

0xcc03,	// (0x0005be48) popup_fep_hwr_window_ParamLimits

0xcc03,	// (0x0005be48) popup_fep_hwr_window

0x459e,	// (0x000537e3) popup_fep_vkb_window_ParamLimits

0x459e,	// (0x000537e3) popup_fep_vkb_window

0x7585,	// (0x000567ca) cursor_press_pane_g1

0x0002,

0xfb2a,	// (0x0005ed6f) fep_vkb_side_pane_g_ParamLimits

0x177e,	// (0x000509c3) fep_hwr_candidate_pane_ParamLimits

0x177e,	// (0x000509c3) fep_hwr_candidate_pane

0x17a8,	// (0x000509ed) fep_hwr_side_pane_ParamLimits

0x17a8,	// (0x000509ed) fep_hwr_side_pane

0x17c8,	// (0x00050a0d) fep_hwr_top_pane_ParamLimits

0x17c8,	// (0x00050a0d) fep_hwr_top_pane

0x17e0,	// (0x00050a25) fep_hwr_write_pane_ParamLimits

0x17e0,	// (0x00050a25) fep_hwr_write_pane

0xfb2a,	// (0x0005ed6f) fep_vkb_side_pane_g

0x758d,	// (0x000567d2) fep_hwr_top_pane_g1

0x759f,	// (0x000567e4) fep_hwr_top_pane_g2

0x181a,	// (0x00050a5f) fep_hwr_top_pane_g3

0x0002,

0xfb06,	// (0x0005ed4b) fep_hwr_top_pane_g

0x182f,	// (0x00050a74) fep_hwr_top_text_pane

0x3b25,	// (0x00052d6a) fep_hwr_top_text_pane_g1

0x75d5,	// (0x0005681a) fep_hwr_top_text_pane_t1

0x1925,	// (0x00050b6a) fep_hwr_candidate_pane_g1

0x7828,	// (0x00056a6d) fep_vkb_keypad_pane_g3_ParamLimits

0x7828,	// (0x00056a6d) fep_vkb_keypad_pane_g3

0x7850,	// (0x00056a95) fep_vkb_keypad_pane_g4_ParamLimits

0x7850,	// (0x00056a95) fep_vkb_keypad_pane_g4

0x78bf,	// (0x00056b04) fep_vkb_bottom_pane_g2_ParamLimits

0x78bf,	// (0x00056b04) fep_vkb_bottom_pane_g2

0x0001,

0xfb31,	// (0x0005ed76) fep_vkb_bottom_pane_g_ParamLimits

0xfb31,	// (0x0005ed76) fep_vkb_bottom_pane_g

0x751d,	// (0x00056762) cell_vkb_side_pane_g2

0x0001,

0xfb3b,	// (0x0005ed80) cell_vkb_side_pane_g

0x794a,	// (0x00056b8f) cell_vkb_side_pane_t1

0x7958,	// (0x00056b9d) cell_vkb_side_pane_t1_copy1

0x751d,	// (0x00056762) bg_fep_vkb_candidate_pane_g2

0x7a84,	// (0x00056cc9) cell_vkb_candidate_pane_ParamLimits

0x75e3,	// (0x00056828) aid_size_cell_vkb_ParamLimits

0x75e3,	// (0x00056828) aid_size_cell_vkb

0x7a84,	// (0x00056cc9) cell_vkb_candidate_pane

0x194c,	// (0x00050b91) bg_popup_fep_shadow_pane_g1

0xddcb,	// (0x0005d010) fep_vkb_bottom_pane_ParamLimits

0xddcb,	// (0x0005d010) fep_vkb_bottom_pane

0x76a7,	// (0x000568ec) fep_vkb_candidate_pane_ParamLimits

0x76a7,	// (0x000568ec) fep_vkb_candidate_pane

0xddf0,	// (0x0005d035) fep_vkb_keypad_pane_ParamLimits

0xddf0,	// (0x0005d035) fep_vkb_keypad_pane

0xde2c,	// (0x0005d071) fep_vkb_side_pane_ParamLimits

0xde2c,	// (0x0005d071) fep_vkb_side_pane

0xde68,	// (0x0005d0ad) fep_vkb_top_pane_ParamLimits

0xde68,	// (0x0005d0ad) fep_vkb_top_pane

0x7781,	// (0x000569c6) fep_vkb_top_pane_g1_ParamLimits

0x7781,	// (0x000569c6) fep_vkb_top_pane_g1

0x7790,	// (0x000569d5) fep_vkb_top_pane_g2_ParamLimits

0x7790,	// (0x000569d5) fep_vkb_top_pane_g2

0x779f,	// (0x000569e4) fep_vkb_top_pane_g3_ParamLimits

0x779f,	// (0x000569e4) fep_vkb_top_pane_g3

0x0003,

0xfb21,	// (0x0005ed66) fep_vkb_top_pane_g_ParamLimits

0xfb21,	// (0x0005ed66) fep_vkb_top_pane_g

0x77bd,	// (0x00056a02) fep_vkb_top_text_pane_ParamLimits

0x77bd,	// (0x00056a02) fep_vkb_top_text_pane

0xdea4,	// (0x0005d0e9) fep_vkb_side_pane_g1_ParamLimits

0xdea4,	// (0x0005d0e9) fep_vkb_side_pane_g1

0x7817,	// (0x00056a5c) grid_vkb_side_pane_ParamLimits

0x7817,	// (0x00056a5c) grid_vkb_side_pane

0x1954,	// (0x00050b99) bg_popup_fep_shadow_pane_g2

0x195d,	// (0x00050ba2) bg_popup_fep_shadow_pane_g3

0x1965,	// (0x00050baa) bg_popup_fep_shadow_pane_g4

0x196e,	// (0x00050bb3) bg_popup_fep_shadow_pane_g5

0x1978,	// (0x00050bbd) bg_popup_fep_shadow_pane_g6

0x1980,	// (0x00050bc5) bg_popup_fep_shadow_pane_g7

0x3532,	// (0x00052777) bg_popup_fep_shadow_pane_g8

0x786e,	// (0x00056ab3) grid_vkb_keypad_number_pane_ParamLimits

0x786e,	// (0x00056ab3) grid_vkb_keypad_number_pane

0x787e,	// (0x00056ac3) grid_vkb_keypad_pane_ParamLimits

0x787e,	// (0x00056ac3) grid_vkb_keypad_pane

0x78a4,	// (0x00056ae9) fep_vkb_bottom_pane_g1_ParamLimits

0x78a4,	// (0x00056ae9) fep_vkb_bottom_pane_g1

0x78cd,	// (0x00056b12) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x78cd,	// (0x00056b12) grid_vkb_keypad_bottom_left_pane

0x78e2,	// (0x00056b27) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x78e2,	// (0x00056b27) grid_vkb_keypad_bottom_right_pane

0x78f7,	// (0x00056b3c) fep_vkb_top_text_pane_g1

0xdeeb,	// (0x0005d130) fep_vkb_top_text_pane_t1

0xdefd,	// (0x0005d142) cell_vkb_side_pane_ParamLimits

0xdefd,	// (0x0005d142) cell_vkb_side_pane

0x751d,	// (0x00056762) cell_vkb_side_pane_g1

0x7966,	// (0x00056bab) cell_vkb_keypad_pane_ParamLimits

0x7966,	// (0x00056bab) cell_vkb_keypad_pane

0x79db,	// (0x00056c20) cell_vkb_keypad_pane_g1

0x0008,

0xfb4e,	// (0x0005ed93) bg_popup_fep_shadow_pane_g

0x1992,	// (0x00050bd7) cell_hwr_side_pane_g1

0x1992,	// (0x00050bd7) cell_hwr_side_pane_g2

0x79e5,	// (0x00056c2a) cell_vkb_keypad_pane_t1

0xdf13,	// (0x0005d158) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdf13,	// (0x0005d158) cell_vkb_keypad_bottom_left_pane

0xdf28,	// (0x0005d16d) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdf28,	// (0x0005d16d) cell_vkb_keypad_bottom_right_pane

0x751d,	// (0x00056762) cell_vkb_keypad_bottom_left_pane_g1

0x751d,	// (0x00056762) cell_vkb_keypad_bottom_right_pane_g1

0x7a49,	// (0x00056c8e) cell_vkb_keypad_number_pane_ParamLimits

0x7a49,	// (0x00056c8e) cell_vkb_keypad_number_pane

0x7a68,	// (0x00056cad) cell_vkb_keypad_number_pane_g1

0x7a72,	// (0x00056cb7) cell_vkb_keypad_number_pane_g2

0x7a7b,	// (0x00056cc0) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb40,	// (0x0005ed85) cell_vkb_keypad_number_pane_g

0x79e5,	// (0x00056c2a) cell_vkb_keypad_number_pane_t1

0x7a9f,	// (0x00056ce4) fep_vkb_candidate_pane_g1

0x0001,

0xfb61,	// (0x0005eda6) cell_hwr_side_pane_g

0x7ab8,	// (0x00056cfd) cell_hwr_side_pane_t1

0x199c,	// (0x00050be1) cell_hwr_side_pane_t1_copy1

0x19aa,	// (0x00050bef) cell_hwr_candidate_pane_g1

0x19d9,	// (0x00050c1e) cell_hwr_candidate_pane_t1

0x751d,	// (0x00056762) cell_vkb_candidate_pane_g2

0x7afc,	// (0x00056d41) cell_vkb_candidate_pane_t1

0x1745,	// (0x0005098a) bg_popup_fep_shadow_pane_ParamLimits

0x1745,	// (0x0005098a) bg_popup_fep_shadow_pane

0x17fa,	// (0x00050a3f) bg_fep_hwr_top_pane_g4

0x75b1,	// (0x000567f6) bg_hwr_side_pane_g1_ParamLimits

0x75b1,	// (0x000567f6) bg_hwr_side_pane_g1

0xbef2,	// (0x0005b137) cell_hwr_side_pane_ParamLimits

0xbef2,	// (0x0005b137) cell_hwr_side_pane

0x18a6,	// (0x00050aeb) fep_hwr_write_pane_g1_ParamLimits

0x18a6,	// (0x00050aeb) fep_hwr_write_pane_g1

0x18b3,	// (0x00050af8) fep_hwr_write_pane_g2_ParamLimits

0x18b3,	// (0x00050af8) fep_hwr_write_pane_g2

0x18c0,	// (0x00050b05) fep_hwr_write_pane_g3_ParamLimits

0x18c0,	// (0x00050b05) fep_hwr_write_pane_g3

0xbf12,	// (0x0005b157) fep_hwr_write_pane_g4_ParamLimits

0xbf12,	// (0x0005b157) fep_hwr_write_pane_g4

0x0005,

0xfb0d,	// (0x0005ed52) fep_hwr_write_pane_g_ParamLimits

0xfb0d,	// (0x0005ed52) fep_hwr_write_pane_g

0x17fa,	// (0x00050a3f) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x17fa,	// (0x00050a3f) bg_fep_hwr_candidate_pane_g2

0x18e3,	// (0x00050b28) cell_hwr_candidate_pane_ParamLimits

0x18e3,	// (0x00050b28) cell_hwr_candidate_pane

0x1925,	// (0x00050b6a) fep_hwr_candidate_pane_g1_ParamLimits

0x7611,	// (0x00056856) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7611,	// (0x00056856) bg_popup_fep_shadow_pane_cp2

0x77af,	// (0x000569f4) fep_vkb_top_pane_g4_ParamLimits

0x77af,	// (0x000569f4) fep_vkb_top_pane_g4

0x77f5,	// (0x00056a3a) fep_vkb_side_pane_g2_ParamLimits

0x77f5,	// (0x00056a3a) fep_vkb_side_pane_g2

0xb83e,	// (0x0005aa83) list_setting_pane_t4_ParamLimits

0xb83e,	// (0x0005aa83) list_setting_pane_t4

0xb8d8,	// (0x0005ab1d) list_setting_number_pane_t5_ParamLimits

0xb8d8,	// (0x0005ab1d) list_setting_number_pane_t5

0xc94c,	// (0x0005bb91) list_double_heading_pane_cp2_ParamLimits

0xc94c,	// (0x0005bb91) list_double_heading_pane_cp2

0x34cd,	// (0x00052712) list_double_heading_pane_g1_cp2_ParamLimits

0x34cd,	// (0x00052712) list_double_heading_pane_g1_cp2

0x34d9,	// (0x0005271e) list_double_heading_pane_g2_cp2_ParamLimits

0x34d9,	// (0x0005271e) list_double_heading_pane_g2_cp2

0x7b0a,	// (0x00056d4f) list_double_heading_pane_t1_cp2_ParamLimits

0x7b0a,	// (0x00056d4f) list_double_heading_pane_t1_cp2

0x7b20,	// (0x00056d65) list_double_heading_pane_t2_cp2_ParamLimits

0x7b20,	// (0x00056d65) list_double_heading_pane_t2_cp2

0x2416,	// (0x0005165b) aid_value_unit2

0x0266,	// (0x0004f4ab) popup_preview_fixed_window

0x2ed0,	// (0x00052115) bg_popup_preview_window_pane_cp02

0x7b32,	// (0x00056d77) list_preview_fixed_pane

0x7b78,	// (0x00056dbd) list_empty_pane_fp_ParamLimits

0x7b78,	// (0x00056dbd) list_empty_pane_fp

0x7b78,	// (0x00056dbd) list_single_cale_day_pane_fp_ParamLimits

0x7b78,	// (0x00056dbd) list_single_cale_day_pane_fp

0x7b78,	// (0x00056dbd) list_single_graphic_heading_pane_fp_ParamLimits

0x7b78,	// (0x00056dbd) list_single_graphic_heading_pane_fp

0x7b78,	// (0x00056dbd) list_single_graphic_pane_fp_ParamLimits

0x7b78,	// (0x00056dbd) list_single_graphic_pane_fp

0x7b78,	// (0x00056dbd) list_single_heading_pane_fp_ParamLimits

0x7b78,	// (0x00056dbd) list_single_heading_pane_fp

0x7b78,	// (0x00056dbd) list_single_pane_fp_ParamLimits

0x7b78,	// (0x00056dbd) list_single_pane_fp

0x7b8d,	// (0x00056dd2) list_single_pane_fp_g1_ParamLimits

0x7b8d,	// (0x00056dd2) list_single_pane_fp_g1

0x4b99,	// (0x00053dde) list_single_pane_fp_g2_ParamLimits

0x4b99,	// (0x00053dde) list_single_pane_fp_g2

0x7b99,	// (0x00056dde) list_single_pane_fp_g3_ParamLimits

0x7b99,	// (0x00056dde) list_single_pane_fp_g3

0x7bad,	// (0x00056df2) list_single_pane_fp_g4_ParamLimits

0x7bad,	// (0x00056df2) list_single_pane_fp_g4

0x0003,

0xfb74,	// (0x0005edb9) list_single_pane_fp_g_ParamLimits

0xfb74,	// (0x0005edb9) list_single_pane_fp_g

0x2a8b,	// (0x00051cd0) list_single_pane_fp_t1_ParamLimits

0x2a8b,	// (0x00051cd0) list_single_pane_fp_t1

0x2aa2,	// (0x00051ce7) list_single_graphic_pane_fp_g1_ParamLimits

0x2aa2,	// (0x00051ce7) list_single_graphic_pane_fp_g1

0x7b8d,	// (0x00056dd2) list_single_graphic_pane_fp_g2_ParamLimits

0x7b8d,	// (0x00056dd2) list_single_graphic_pane_fp_g2

0x4b99,	// (0x00053dde) list_single_graphic_pane_fp_g3_ParamLimits

0x4b99,	// (0x00053dde) list_single_graphic_pane_fp_g3

0x7b99,	// (0x00056dde) list_single_graphic_pane_fp_g4_ParamLimits

0x7b99,	// (0x00056dde) list_single_graphic_pane_fp_g4

0x7bad,	// (0x00056df2) list_single_graphic_pane_fp_g5_ParamLimits

0x7bad,	// (0x00056df2) list_single_graphic_pane_fp_g5

0x0004,

0xfb7d,	// (0x0005edc2) list_single_graphic_pane_fp_g_ParamLimits

0xfb7d,	// (0x0005edc2) list_single_graphic_pane_fp_g

0x2aae,	// (0x00051cf3) list_single_graphic_pane_fp_t1_ParamLimits

0x2aae,	// (0x00051cf3) list_single_graphic_pane_fp_t1

0x2aa2,	// (0x00051ce7) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x2aa2,	// (0x00051ce7) list_single_graphic_heading_pane_fp_g1

0x7b8d,	// (0x00056dd2) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7b8d,	// (0x00056dd2) list_single_graphic_heading_pane_fp_g2

0x4b99,	// (0x00053dde) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4b99,	// (0x00053dde) list_single_graphic_heading_pane_fp_g3

0x7b99,	// (0x00056dde) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7b99,	// (0x00056dde) list_single_graphic_heading_pane_fp_g4

0x7bad,	// (0x00056df2) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7bad,	// (0x00056df2) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7d,	// (0x0005edc2) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7d,	// (0x0005edc2) list_single_graphic_heading_pane_fp_g

0x2ac4,	// (0x00051d09) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x2ac4,	// (0x00051d09) list_single_graphic_heading_pane_fp_t1

0x2ada,	// (0x00051d1f) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x2ada,	// (0x00051d1f) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb88,	// (0x0005edcd) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb88,	// (0x0005edcd) list_single_graphic_heading_pane_fp_t

0x2aec,	// (0x00051d31) list_single_cale_day_pane_fp_g1_ParamLimits

0x2aec,	// (0x00051d31) list_single_cale_day_pane_fp_g1

0x7bb9,	// (0x00056dfe) list_single_cale_day_pane_fp_g2_ParamLimits

0x7bb9,	// (0x00056dfe) list_single_cale_day_pane_fp_g2

0x2b24,	// (0x00051d69) list_single_cale_day_pane_fp_g3_ParamLimits

0x2b24,	// (0x00051d69) list_single_cale_day_pane_fp_g3

0x2b4c,	// (0x00051d91) list_single_cale_day_pane_fp_g4_ParamLimits

0x2b4c,	// (0x00051d91) list_single_cale_day_pane_fp_g4

0x2b70,	// (0x00051db5) list_single_cale_day_pane_fp_g5_ParamLimits

0x2b70,	// (0x00051db5) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8d,	// (0x0005edd2) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8d,	// (0x0005edd2) list_single_cale_day_pane_fp_g

0x2b94,	// (0x00051dd9) list_single_cale_day_pane_fp_t1_ParamLimits

0x2b94,	// (0x00051dd9) list_single_cale_day_pane_fp_t1

0x2bba,	// (0x00051dff) list_single_cale_day_pane_fp_t2_ParamLimits

0x2bba,	// (0x00051dff) list_single_cale_day_pane_fp_t2

0x2bd3,	// (0x00051e18) list_single_cale_day_pane_fp_t3_ParamLimits

0x2bd3,	// (0x00051e18) list_single_cale_day_pane_fp_t3

0x0002,

0xfb98,	// (0x0005eddd) list_single_cale_day_pane_fp_t_ParamLimits

0xfb98,	// (0x0005eddd) list_single_cale_day_pane_fp_t

0x7b8d,	// (0x00056dd2) list_empty_pane_fp_g1_ParamLimits

0x7b8d,	// (0x00056dd2) list_empty_pane_fp_g1

0x2bec,	// (0x00051e31) list_empty_pane_fp_t1

0x2bfa,	// (0x00051e3f) list_empty_pane_fp_t2

0x0001,

0xfb9f,	// (0x0005ede4) list_empty_pane_fp_t

0x7b8d,	// (0x00056dd2) list_single_heading_pane_fp_g1_ParamLimits

0x7b8d,	// (0x00056dd2) list_single_heading_pane_fp_g1

0x4b99,	// (0x00053dde) list_single_heading_pane_fp_g2_ParamLimits

0x4b99,	// (0x00053dde) list_single_heading_pane_fp_g2

0x7b99,	// (0x00056dde) list_single_heading_pane_fp_g3_ParamLimits

0x7b99,	// (0x00056dde) list_single_heading_pane_fp_g3

0x0002,

0xfba4,	// (0x0005ede9) list_single_heading_pane_fp_g_ParamLimits

0xfba4,	// (0x0005ede9) list_single_heading_pane_fp_g

0x2c08,	// (0x00051e4d) list_single_heading_pane_fp_t1_ParamLimits

0x2c08,	// (0x00051e4d) list_single_heading_pane_fp_t1

0x2c1a,	// (0x00051e5f) list_single_heading_pane_fp_t2_ParamLimits

0x2c1a,	// (0x00051e5f) list_single_heading_pane_fp_t2

0x0001,

0xfbab,	// (0x0005edf0) list_single_heading_pane_fp_t_ParamLimits

0xfbab,	// (0x0005edf0) list_single_heading_pane_fp_t

0x36bf,	// (0x00052904) aid_size_cell_fast

0x2e40,	// (0x00052085) soft_indicator_pane_cp1_t1

0x36fc,	// (0x00052941) cell_app_pane_cp2_ParamLimits

0x36fc,	// (0x00052941) cell_app_pane_cp2

0x1767,	// (0x000509ac) fep_hwr_candidate_drop_down_list_pane

0x193f,	// (0x00050b84) fep_hwr_candidate_pane_g3_ParamLimits

0x193f,	// (0x00050b84) fep_hwr_candidate_pane_g3

0xe38a,	// (0x0005d5cf) fep_hwr_candidate_pane_g4_ParamLimits

0xe38a,	// (0x0005d5cf) fep_hwr_candidate_pane_g4

0x0002,

0xfb1a,	// (0x0005ed5f) fep_hwr_candidate_pane_g_ParamLimits

0xfb1a,	// (0x0005ed5f) fep_hwr_candidate_pane_g

0x7696,	// (0x000568db) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7696,	// (0x000568db) fep_vkb_candidate_drop_down_list_pane

0x7aa7,	// (0x00056cec) fep_vkb_candidate_pane_g3

0x7aaf,	// (0x00056cf4) fep_vkb_candidate_pane_g4

0x0002,

0xfb47,	// (0x0005ed8c) fep_vkb_candidate_pane_g

0x19aa,	// (0x00050bef) cell_hwr_candidate_pane_g1_ParamLimits

0x19b8,	// (0x00050bfd) cell_hwr_candidate_pane_g3_ParamLimits

0x19b8,	// (0x00050bfd) cell_hwr_candidate_pane_g3

0x923c,	// (0x00058481) cell_hwr_candidate_pane_g4_ParamLimits

0x923c,	// (0x00058481) cell_hwr_candidate_pane_g4

0x0002,

0xfb66,	// (0x0005edab) cell_hwr_candidate_pane_g_ParamLimits

0xfb66,	// (0x0005edab) cell_hwr_candidate_pane_g

0x7ac6,	// (0x00056d0b) cell_vkb_candidate_pane_g3_ParamLimits

0x7ac6,	// (0x00056d0b) cell_vkb_candidate_pane_g3

0x7ae1,	// (0x00056d26) cell_vkb_candidate_pane_g4_ParamLimits

0x7ae1,	// (0x00056d26) cell_vkb_candidate_pane_g4

0x7bc5,	// (0x00056e0a) cell_app_pane_cp2_g1_ParamLimits

0x7bc5,	// (0x00056e0a) cell_app_pane_cp2_g1

0x7be3,	// (0x00056e28) cell_app_pane_cp2_g2_ParamLimits

0x7be3,	// (0x00056e28) cell_app_pane_cp2_g2

0x0001,

0xfbb0,	// (0x0005edf5) cell_app_pane_cp2_g_ParamLimits

0xfbb0,	// (0x0005edf5) cell_app_pane_cp2_g

0x7bef,	// (0x00056e34) cell_app_pane_cp2_t1_ParamLimits

0x7bef,	// (0x00056e34) cell_app_pane_cp2_t1

0x34b3,	// (0x000526f8) grid_highlight_pane_cp1_ParamLimits

0x34b3,	// (0x000526f8) grid_highlight_pane_cp1

0x19f7,	// (0x00050c3c) cell_hwr_candidate_pane_cp1_ParamLimits

0x19f7,	// (0x00050c3c) cell_hwr_candidate_pane_cp1

0x19aa,	// (0x00050bef) fep_hwr_candidate_drop_down_list_pane_g1

0x1a16,	// (0x00050c5b) fep_hwr_candidate_drop_down_list_pane_g2

0x1a23,	// (0x00050c68) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb5,	// (0x0005edfa) fep_hwr_candidate_drop_down_list_pane_g

0x1a30,	// (0x00050c75) fep_hwr_candidate_drop_down_list_scroll_pane

0x1a39,	// (0x00050c7e) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1a39,	// (0x00050c7e) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1a46,	// (0x00050c8b) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1a46,	// (0x00050c8b) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1a53,	// (0x00050c98) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1a53,	// (0x00050c98) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1a60,	// (0x00050ca5) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1a60,	// (0x00050ca5) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1a7b,	// (0x00050cc0) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1a7b,	// (0x00050cc0) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1a96,	// (0x00050cdb) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1a96,	// (0x00050cdb) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1ab1,	// (0x00050cf6) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1ab1,	// (0x00050cf6) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1acc,	// (0x00050d11) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1acc,	// (0x00050d11) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbc,	// (0x0005ee01) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbc,	// (0x0005ee01) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7c01,	// (0x00056e46) cell_vkb_candidate_pane_cp1_ParamLimits

0x7c01,	// (0x00056e46) cell_vkb_candidate_pane_cp1

0x77af,	// (0x000569f4) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x77af,	// (0x000569f4) fep_vkb_candidate_drop_down_list_pane_g1

0x7c21,	// (0x00056e66) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7c21,	// (0x00056e66) fep_vkb_candidate_drop_down_list_pane_g2

0x7c2e,	// (0x00056e73) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7c2e,	// (0x00056e73) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbcd,	// (0x0005ee12) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbcd,	// (0x0005ee12) fep_vkb_candidate_drop_down_list_pane_g

0x7c3b,	// (0x00056e80) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7c3b,	// (0x00056e80) fep_vkb_candidate_drop_down_list_scroll_pane

0x7c48,	// (0x00056e8d) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7c48,	// (0x00056e8d) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7c55,	// (0x00056e9a) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7c55,	// (0x00056e9a) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7c61,	// (0x00056ea6) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7c61,	// (0x00056ea6) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7c6d,	// (0x00056eb2) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7c6d,	// (0x00056eb2) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7c8e,	// (0x00056ed3) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7c8e,	// (0x00056ed3) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7caf,	// (0x00056ef4) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7caf,	// (0x00056ef4) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7cd0,	// (0x00056f15) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7cd0,	// (0x00056f15) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7cf1,	// (0x00056f36) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7cf1,	// (0x00056f36) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd4,	// (0x0005ee19) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd4,	// (0x0005ee19) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb52d,	// (0x0005a772) title_pane_g1_ParamLimits

0xc467,	// (0x0005b6ac) title_pane_g2_ParamLimits

0xf56a,	// (0x0005e7af) title_pane_g_ParamLimits

0x3b15,	// (0x00052d5a) aid_call2_pane

0x3b1d,	// (0x00052d62) aid_call_pane

0x3b25,	// (0x00052d6a) popup_clock_analogue_window_g1

0x3b25,	// (0x00052d6a) popup_clock_analogue_window_g2

0x0cf3,	// (0x0004ff38) popup_clock_analogue_window_g3

0x0cfc,	// (0x0004ff41) popup_clock_analogue_window_g4

0x2438,	// (0x0005167d) popup_clock_analogue_window_g5

0x0004,

0xf70f,	// (0x0005e954) popup_clock_analogue_window_g

0x0d04,	// (0x0004ff49) popup_clock_analogue_window_t1

0x0d12,	// (0x0004ff57) clock_digital_number_pane_ParamLimits

0x0d12,	// (0x0004ff57) clock_digital_number_pane

0x0d1e,	// (0x0004ff63) clock_digital_number_pane_cp02_ParamLimits

0x0d1e,	// (0x0004ff63) clock_digital_number_pane_cp02

0x0d2a,	// (0x0004ff6f) clock_digital_number_pane_cp03_ParamLimits

0x0d2a,	// (0x0004ff6f) clock_digital_number_pane_cp03

0x0d36,	// (0x0004ff7b) clock_digital_number_pane_cp04_ParamLimits

0x0d36,	// (0x0004ff7b) clock_digital_number_pane_cp04

0x0d42,	// (0x0004ff87) clock_digital_separator_pane_ParamLimits

0x0d42,	// (0x0004ff87) clock_digital_separator_pane

0x0d4e,	// (0x0004ff93) popup_clock_digital_window_t1_ParamLimits

0x0d4e,	// (0x0004ff93) popup_clock_digital_window_t1

0x2438,	// (0x0005167d) clock_digital_number_pane_g1

0x2438,	// (0x0005167d) clock_digital_number_pane_g2

0x0001,

0xf71a,	// (0x0005e95f) clock_digital_number_pane_g

0x2438,	// (0x0005167d) clock_digital_separator_pane_g1

0x2438,	// (0x0005167d) clock_digital_separator_pane_g2

0x0001,

0xf71a,	// (0x0005e95f) clock_digital_separator_pane_g

0xd265,	// (0x0005c4aa) aid_fill_nsta_ParamLimits

0xd394,	// (0x0005c5d9) indicator_nsta_pane_ParamLimits

0x4ce3,	// (0x00053f28) popup_clock_analogue_window

0x4ce3,	// (0x00053f28) popup_clock_digital_window

0x3680,	// (0x000528c5) grid_indicator_nsta_pane_ParamLimits

0x6efc,	// (0x00056141) clock_nsta_pane_t2

0x0001,

0xfa9a,	// (0x0005ecdf) clock_nsta_pane_t

0x0cb7,	// (0x0004fefc) aid_size_max_handle

0xba87,	// (0x0005accc) aid_size_min_handle

0x40f6,	// (0x0005333b) editor_scroll_pane

0x7d0c,	// (0x00056f51) ex_editor_pane

0x362d,	// (0x00052872) scroll_pane_cp13

0x3452,	// (0x00052697) scroll_pane_cp14

0x3b4f,	// (0x00052d94) scroll_pane_cp36

0xc95b,	// (0x0005bba0) list_single_graphic_hl_pane_cp2_ParamLimits

0xc95b,	// (0x0005bba0) list_single_graphic_hl_pane_cp2

0xce80,	// (0x0005c0c5) list_single_graphic_hl_pane_ParamLimits

0xce80,	// (0x0005c0c5) list_single_graphic_hl_pane

0x2c30,	// (0x00051e75) aid_size_min_hl_cp1

0x7d14,	// (0x00056f59) list_highlight_pane_cp34_ParamLimits

0x7d14,	// (0x00056f59) list_highlight_pane_cp34

0x7d25,	// (0x00056f6a) list_single_graphic_hl_pane_g1_ParamLimits

0x7d25,	// (0x00056f6a) list_single_graphic_hl_pane_g1

0x2c39,	// (0x00051e7e) list_single_graphic_hl_pane_g2_ParamLimits

0x2c39,	// (0x00051e7e) list_single_graphic_hl_pane_g2

0x2c39,	// (0x00051e7e) list_single_graphic_hl_pane_g3_ParamLimits

0x2c39,	// (0x00051e7e) list_single_graphic_hl_pane_g3

0x4067,	// (0x000532ac) list_single_graphic_hl_pane_g4_ParamLimits

0x4067,	// (0x000532ac) list_single_graphic_hl_pane_g4

0x2c45,	// (0x00051e8a) list_single_graphic_hl_pane_g5_ParamLimits

0x2c45,	// (0x00051e8a) list_single_graphic_hl_pane_g5

0x0004,

0xfbe5,	// (0x0005ee2a) list_single_graphic_hl_pane_g_ParamLimits

0xfbe5,	// (0x0005ee2a) list_single_graphic_hl_pane_g

0x2c59,	// (0x00051e9e) list_single_graphic_hl_pane_t1_ParamLimits

0x2c59,	// (0x00051e9e) list_single_graphic_hl_pane_t1

0x7d32,	// (0x00056f77) aid_size_min_hl_cp2

0x7d3b,	// (0x00056f80) list_highlight_pane_cp34_cp2_ParamLimits

0x7d3b,	// (0x00056f80) list_highlight_pane_cp34_cp2

0x7d25,	// (0x00056f6a) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7d25,	// (0x00056f6a) list_single_graphic_hl_pane_g1_cp2

0x7d48,	// (0x00056f8d) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7d48,	// (0x00056f8d) list_single_graphic_hl_pane_g2_cp2

0x7d54,	// (0x00056f99) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7d54,	// (0x00056f99) list_single_graphic_hl_pane_g3_cp2

0x4eb0,	// (0x000540f5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x4eb0,	// (0x000540f5) list_single_graphic_hl_pane_g4_cp2

0x7d62,	// (0x00056fa7) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7d62,	// (0x00056fa7) list_single_graphic_hl_pane_g5_cp2

0xbb6a,	// (0x0005adaf) control_pane_g4_ParamLimits

0xbb6a,	// (0x0005adaf) control_pane_g4

0x4454,	// (0x00053699) bg_popup_sub_pane_cp10_ParamLimits

0x7527,	// (0x0005676c) list_choice_list_pane_ParamLimits

0x7536,	// (0x0005677b) scroll_pane_cp23

0x2ed0,	// (0x00052115) bg_popup_preview_window_pane_cp02_ParamLimits

0x7b32,	// (0x00056d77) list_preview_fixed_pane_ParamLimits

0x7b48,	// (0x00056d8d) list_preview_fixed_pane_cp_ParamLimits

0x7b48,	// (0x00056d8d) list_preview_fixed_pane_cp

0x7b54,	// (0x00056d99) popup_preview_fixed_window_g1_ParamLimits

0x7b54,	// (0x00056d99) popup_preview_fixed_window_g1

0x7b60,	// (0x00056da5) popup_preview_fixed_window_g2_ParamLimits

0x7b60,	// (0x00056da5) popup_preview_fixed_window_g2

0x0002,

0xfb6d,	// (0x0005edb2) popup_preview_fixed_window_g_ParamLimits

0xfb6d,	// (0x0005edb2) popup_preview_fixed_window_g

0x0c2b,	// (0x0004fe70) aid_navi_side_left_pane_ParamLimits

0x0c40,	// (0x0004fe85) aid_navi_side_right_pane_ParamLimits

0x0c58,	// (0x0004fe9d) navi_icon_pane_stacon_ParamLimits

0x0c6c,	// (0x0004feb1) navi_navi_pane_stacon_ParamLimits

0x0c58,	// (0x0004fe9d) navi_text_pane_stacon_ParamLimits

0x242e,	// (0x00051673) main_text_info_pane

0x7d8c,	// (0x00056fd1) listscroll_text_info_pane

0x7d94,	// (0x00056fd9) list_text_info_pane_ParamLimits

0x7d94,	// (0x00056fd9) list_text_info_pane

0x7da3,	// (0x00056fe8) scroll_pane_cp24_ParamLimits

0x7da3,	// (0x00056fe8) scroll_pane_cp24

0xdf43,	// (0x0005d188) list_text_info_pane_t1_ParamLimits

0xdf43,	// (0x0005d188) list_text_info_pane_t1

0xcb76,	// (0x0005bdbb) popup_fast_swap2_window_ParamLimits

0xcb76,	// (0x0005bdbb) popup_fast_swap2_window

0x7df2,	// (0x00057037) aid_size_cell_fast2

0x242e,	// (0x00051673) bg_popup_window_pane_cp17

0x53ca,	// (0x0005460f) heading_pane_cp2

0x311c,	// (0x00052361) listscroll_fast2_pane

0x7dfc,	// (0x00057041) grid_fast2_pane

0x7e06,	// (0x0005704b) listscroll_fast2_pane_g1

0x7e0e,	// (0x00057053) listscroll_fast2_pane_g2

0x0001,

0xfbf0,	// (0x0005ee35) listscroll_fast2_pane_g

0x362d,	// (0x00052872) scroll_pane_cp26

0x7e18,	// (0x0005705d) cell_fast2_pane_ParamLimits

0x7e18,	// (0x0005705d) cell_fast2_pane

0x7e2d,	// (0x00057072) cell_fast2_pane_g1

0x7e36,	// (0x0005707b) cell_fast2_pane_g2

0x7e3f,	// (0x00057084) cell_fast2_pane_g3

0x0002,

0xfbf5,	// (0x0005ee3a) cell_fast2_pane_g

0x320f,	// (0x00052454) grid_highlight_pane_cp9

0x3224,	// (0x00052469) main_eswt_pane_ParamLimits

0x3224,	// (0x00052469) main_eswt_pane

0x7db8,	// (0x00056ffd) list_single_text_info_pane

0x7e47,	// (0x0005708c) eswt_ctrl_button_pane

0x7e47,	// (0x0005708c) eswt_ctrl_canvas_pane

0x7e4f,	// (0x00057094) eswt_ctrl_combo_pane

0x7e47,	// (0x0005708c) eswt_ctrl_default_pane

0x7e47,	// (0x0005708c) eswt_ctrl_label_pane

0x7e57,	// (0x0005709c) eswt_ctrl_wait_pane

0x7e5f,	// (0x000570a4) eswt_shell_pane

0x242e,	// (0x00051673) listscroll_eswt_app_pane

0x7e7f,	// (0x000570c4) popup_eswt_tasktip_window_ParamLimits

0x7e7f,	// (0x000570c4) popup_eswt_tasktip_window

0x5008,	// (0x0005424d) bg_popup_window_pane_cp18

0x7e90,	// (0x000570d5) eswt_control_pane_g1_ParamLimits

0x7e90,	// (0x000570d5) eswt_control_pane_g1

0x7e9d,	// (0x000570e2) eswt_control_pane_g2_ParamLimits

0x7e9d,	// (0x000570e2) eswt_control_pane_g2

0x7eaa,	// (0x000570ef) eswt_control_pane_g3_ParamLimits

0x7eaa,	// (0x000570ef) eswt_control_pane_g3

0x7eb7,	// (0x000570fc) eswt_control_pane_g4_ParamLimits

0x7eb7,	// (0x000570fc) eswt_control_pane_g4

0x0003,

0xfbfc,	// (0x0005ee41) eswt_control_pane_g_ParamLimits

0xfbfc,	// (0x0005ee41) eswt_control_pane_g

0x34b3,	// (0x000526f8) bg_button_pane_ParamLimits

0x34b3,	// (0x000526f8) bg_button_pane

0x3224,	// (0x00052469) common_borders_pane_copy2_ParamLimits

0x3224,	// (0x00052469) common_borders_pane_copy2

0x7ec4,	// (0x00057109) control_button_pane_g1_ParamLimits

0x7ec4,	// (0x00057109) control_button_pane_g1

0x7ed0,	// (0x00057115) control_button_pane_g2_ParamLimits

0x7ed0,	// (0x00057115) control_button_pane_g2

0x7edc,	// (0x00057121) control_button_pane_g3_ParamLimits

0x7edc,	// (0x00057121) control_button_pane_g3

0x0002,

0xfc05,	// (0x0005ee4a) control_button_pane_g_ParamLimits

0xfc05,	// (0x0005ee4a) control_button_pane_g

0x7ef0,	// (0x00057135) control_button_pane_t1

0x7efe,	// (0x00057143) control_button_pane_t2

0x0001,

0xfc0c,	// (0x0005ee51) control_button_pane_t

0x4f18,	// (0x0005415d) bg_button_pane_g1

0x4f28,	// (0x0005416d) bg_button_pane_g2

0x4f20,	// (0x00054165) bg_button_pane_g3

0x4f38,	// (0x0005417d) bg_button_pane_g4

0x4f30,	// (0x00054175) bg_button_pane_g5

0x4f40,	// (0x00054185) bg_button_pane_g6

0x4f48,	// (0x0005418d) bg_button_pane_g7

0x4f58,	// (0x0005419d) bg_button_pane_g8

0x4f50,	// (0x00054195) bg_button_pane_g9

0x0008,

0xf866,	// (0x0005eaab) bg_button_pane_g

0x74e2,	// (0x00056727) common_borders_pane_ParamLimits

0x74e2,	// (0x00056727) common_borders_pane

0x7e90,	// (0x000570d5) eswt_control_pane_g1_copy1_ParamLimits

0x7e90,	// (0x000570d5) eswt_control_pane_g1_copy1

0x7e9d,	// (0x000570e2) eswt_control_pane_g2_copy1_ParamLimits

0x7e9d,	// (0x000570e2) eswt_control_pane_g2_copy1

0x7eaa,	// (0x000570ef) eswt_control_pane_g3_copy1_ParamLimits

0x7eaa,	// (0x000570ef) eswt_control_pane_g3_copy1

0x7eb7,	// (0x000570fc) eswt_control_pane_g4_copy1_ParamLimits

0x7eb7,	// (0x000570fc) eswt_control_pane_g4_copy1

0x751d,	// (0x00056762) bg_eswt_ctrl_canvas_pane_g1

0x74e2,	// (0x00056727) common_borders_pane_cp2_ParamLimits

0x74e2,	// (0x00056727) common_borders_pane_cp2

0x74e2,	// (0x00056727) common_borders_pane_cp3_ParamLimits

0x74e2,	// (0x00056727) common_borders_pane_cp3

0x7f0c,	// (0x00057151) separator_horizontal_pane

0x7f14,	// (0x00057159) separator_vertical_pane

0x7e90,	// (0x000570d5) eswt_control_pane_g1_copy2_ParamLimits

0x7e90,	// (0x000570d5) eswt_control_pane_g1_copy2

0x7e9d,	// (0x000570e2) eswt_control_pane_g2_copy2_ParamLimits

0x7e9d,	// (0x000570e2) eswt_control_pane_g2_copy2

0x7eaa,	// (0x000570ef) eswt_control_pane_g3_copy2_ParamLimits

0x7eaa,	// (0x000570ef) eswt_control_pane_g3_copy2

0x7eb7,	// (0x000570fc) eswt_control_pane_g4_copy2_ParamLimits

0x7eb7,	// (0x000570fc) eswt_control_pane_g4_copy2

0x242e,	// (0x00051673) common_borders_pane_cp4

0x7f1d,	// (0x00057162) separator_horizontal_pane_g1

0x7f26,	// (0x0005716b) separator_horizontal_pane_g2

0x7f2f,	// (0x00057174) separator_horizontal_pane_g3

0x0002,

0xfc11,	// (0x0005ee56) separator_horizontal_pane_g

0x7e90,	// (0x000570d5) eswt_control_pane_g1_copy3_ParamLimits

0x7e90,	// (0x000570d5) eswt_control_pane_g1_copy3

0x7e9d,	// (0x000570e2) eswt_control_pane_g2_copy3_ParamLimits

0x7e9d,	// (0x000570e2) eswt_control_pane_g2_copy3

0x7eaa,	// (0x000570ef) eswt_control_pane_g3_copy3_ParamLimits

0x7eaa,	// (0x000570ef) eswt_control_pane_g3_copy3

0x7eb7,	// (0x000570fc) eswt_control_pane_g4_copy3_ParamLimits

0x7eb7,	// (0x000570fc) eswt_control_pane_g4_copy3

0x242e,	// (0x00051673) common_borders_pane_cp5

0x7f38,	// (0x0005717d) separator_vertical_pane_g1

0x7f41,	// (0x00057186) separator_vertical_pane_g2

0x7f4a,	// (0x0005718f) separator_vertical_pane_g3

0x0002,

0xfc18,	// (0x0005ee5d) separator_vertical_pane_g

0x7e90,	// (0x000570d5) eswt_control_pane_g1_copy4_ParamLimits

0x7e90,	// (0x000570d5) eswt_control_pane_g1_copy4

0x7e9d,	// (0x000570e2) eswt_control_pane_g2_copy4_ParamLimits

0x7e9d,	// (0x000570e2) eswt_control_pane_g2_copy4

0x7eaa,	// (0x000570ef) eswt_control_pane_g3_copy4_ParamLimits

0x7eaa,	// (0x000570ef) eswt_control_pane_g3_copy4

0x7eb7,	// (0x000570fc) eswt_control_pane_g4_copy4_ParamLimits

0x7eb7,	// (0x000570fc) eswt_control_pane_g4_copy4

0xdf5e,	// (0x0005d1a3) eswt_ctrl_combo_button_pane

0xdf66,	// (0x0005d1ab) eswt_ctrl_input_pane

0xdf6e,	// (0x0005d1b3) popup_choice_list_window_cp70

0xdf76,	// (0x0005d1bb) eswt_ctrl_input_pane_t1

0x242e,	// (0x00051673) input_focus_pane_cp70

0x74e2,	// (0x00056727) bg_button_pane_cp70_ParamLimits

0x74e2,	// (0x00056727) bg_button_pane_cp70

0xdf84,	// (0x0005d1c9) eswt_ctrl_combo_button_pane_g1

0x7f81,	// (0x000571c6) wait_bar_pane_cp70

0x5008,	// (0x0005424d) bg_popup_window_pane_cp70_ParamLimits

0x5008,	// (0x0005424d) bg_popup_window_pane_cp70

0x7f89,	// (0x000571ce) popup_eswt_tasktip_window_t1

0x7f9f,	// (0x000571e4) wait_bar_pane_cp71_ParamLimits

0x7f9f,	// (0x000571e4) wait_bar_pane_cp71

0x7fab,	// (0x000571f0) grid_eswt_app_pane

0x3957,	// (0x00052b9c) scroll_pane_cp70

0xdf8c,	// (0x0005d1d1) cell_eswt_app_pane_ParamLimits

0xdf8c,	// (0x0005d1d1) cell_eswt_app_pane

0xdfb6,	// (0x0005d1fb) cell_eswt_app_pane_g1_ParamLimits

0xdfb6,	// (0x0005d1fb) cell_eswt_app_pane_g1

0xdfe5,	// (0x0005d22a) cell_eswt_app_pane_g2_ParamLimits

0xdfe5,	// (0x0005d22a) cell_eswt_app_pane_g2

0x0001,

0xfc1f,	// (0x0005ee64) cell_eswt_app_pane_g_ParamLimits

0xfc1f,	// (0x0005ee64) cell_eswt_app_pane_g

0xe00e,	// (0x0005d253) cell_eswt_app_pane_t1_ParamLimits

0xe00e,	// (0x0005d253) cell_eswt_app_pane_t1

0x806e,	// (0x000572b3) grid_highlight_pane_cp70_ParamLimits

0x806e,	// (0x000572b3) grid_highlight_pane_cp70

0x37f1,	// (0x00052a36) set_content_pane_g1

0x43a2,	// (0x000535e7) status_small_volume_pane

0x1ae7,	// (0x00050d2c) status_small_volume_pane_g1

0x1aef,	// (0x00050d34) volume_small2_pane

0x1af8,	// (0x00050d3d) volume_small2_pane_g1

0x1b01,	// (0x00050d46) volume_small2_pane_g2

0x1b0a,	// (0x00050d4f) volume_small2_pane_g3

0x1b13,	// (0x00050d58) volume_small2_pane_g4

0x1b1c,	// (0x00050d61) volume_small2_pane_g5

0x1b25,	// (0x00050d6a) volume_small2_pane_g6

0x1b2e,	// (0x00050d73) volume_small2_pane_g7

0x1b37,	// (0x00050d7c) volume_small2_pane_g8

0x1b40,	// (0x00050d85) volume_small2_pane_g9

0x1b49,	// (0x00050d8e) volume_small2_pane_g10

0x0009,

0xfc24,	// (0x0005ee69) volume_small2_pane_g

0x78f7,	// (0x00056b3c) fep_vkb_top_text_pane_g1_ParamLimits

0xdeeb,	// (0x0005d130) fep_vkb_top_text_pane_t1_ParamLimits

0x7b6c,	// (0x00056db1) popup_preview_fixed_window_g3_ParamLimits

0x7b6c,	// (0x00056db1) popup_preview_fixed_window_g3

0xd1f8,	// (0x0005c43d) popup_toolbar_trans_pane

0xd8cc,	// (0x0005cb11) aid_height_set_list_ParamLimits

0x635b,	// (0x000555a0) aid_size_parent_ParamLimits

0x4454,	// (0x00053699) list_highlight_pane_cp2_ParamLimits

0x37f1,	// (0x00052a36) set_content_pane_g1_ParamLimits

0xda55,	// (0x0005cc9a) list_single_image_pane_ParamLimits

0xda55,	// (0x0005cc9a) list_single_image_pane

0x807a,	// (0x000572bf) aid_size_cell_image_ParamLimits

0x807a,	// (0x000572bf) aid_size_cell_image

0xe040,	// (0x0005d285) grid_single_image_pane_ParamLimits

0xe040,	// (0x0005d285) grid_single_image_pane

0x4b99,	// (0x00053dde) list_single_image_pane_g1_ParamLimits

0x4b99,	// (0x00053dde) list_single_image_pane_g1

0x7b99,	// (0x00056dde) list_single_image_pane_g2_ParamLimits

0x7b99,	// (0x00056dde) list_single_image_pane_g2

0x0001,

0xfc39,	// (0x0005ee7e) list_single_image_pane_g_ParamLimits

0xfc39,	// (0x0005ee7e) list_single_image_pane_g

0x4ba5,	// (0x00053dea) list_single_image_pane_t1_ParamLimits

0x4ba5,	// (0x00053dea) list_single_image_pane_t1

0xe04e,	// (0x0005d293) cell_image_list_pane_ParamLimits

0xe04e,	// (0x0005d293) cell_image_list_pane

0x80a8,	// (0x000572ed) cell_image_list_pane_g1

0x80b1,	// (0x000572f6) cell_image_list_pane_g2

0x0001,

0xfc3e,	// (0x0005ee83) cell_image_list_pane_g

0x80ba,	// (0x000572ff) aid_size_cell_tb_trans_pane

0x34b3,	// (0x000526f8) bg_tb_trans_pane

0x80cc,	// (0x00057311) grid_tb_trans_pane

0x4f18,	// (0x0005415d) bg_tb_trans_pane_g1

0x4f28,	// (0x0005416d) bg_tb_trans_pane_g2

0x4f20,	// (0x00054165) bg_tb_trans_pane_g3

0x4f38,	// (0x0005417d) bg_tb_trans_pane_g4

0x4f30,	// (0x00054175) bg_tb_trans_pane_g5

0x4f58,	// (0x0005419d) bg_tb_trans_pane_g6

0x4f50,	// (0x00054195) bg_tb_trans_pane_g7

0x4f40,	// (0x00054185) bg_tb_trans_pane_g8

0x4f48,	// (0x0005418d) bg_tb_trans_pane_g9

0x0008,

0xfc43,	// (0x0005ee88) bg_tb_trans_pane_g

0x80e0,	// (0x00057325) cell_toolbar_trans_pane_ParamLimits

0x80e0,	// (0x00057325) cell_toolbar_trans_pane

0x751d,	// (0x00056762) cell_toolbar_trans_pane_g1

0xdcc7,	// (0x0005cf0c) list_form2_midp_pane_t1

0xdcd5,	// (0x0005cf1a) list_form2_midp_pane_t2

0x0001,

0xfae0,	// (0x0005ed25) list_form2_midp_pane_t

0x7102,	// (0x00056347) scroll_pane_cp51_ParamLimits

0x72be,	// (0x00056503) form2_midp_wait_pane_g1

0x72c7,	// (0x0005650c) form2_midp_wait_pane_g2

0x72d0,	// (0x00056515) form2_midp_wait_pane_g3

0x0002,

0xfaf5,	// (0x0005ed3a) form2_midp_wait_pane_g

0x2522,	// (0x00051767) list_highlight_pane_cp21_ParamLimits

0x7327,	// (0x0005656c) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7336,	// (0x0005657b) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6513,	// (0x00055758) list_single_2graphic_im_pane_ParamLimits

0x6513,	// (0x00055758) list_single_2graphic_im_pane

0xe064,	// (0x0005d2a9) list_single_2graphic_im_pane_g1_ParamLimits

0xe064,	// (0x0005d2a9) list_single_2graphic_im_pane_g1

0xe075,	// (0x0005d2ba) list_single_2graphic_im_pane_g2_ParamLimits

0xe075,	// (0x0005d2ba) list_single_2graphic_im_pane_g2

0xe081,	// (0x0005d2c6) list_single_2graphic_im_pane_g3_ParamLimits

0xe081,	// (0x0005d2c6) list_single_2graphic_im_pane_g3

0x0003,

0xfc56,	// (0x0005ee9b) list_single_2graphic_im_pane_g_ParamLimits

0xfc56,	// (0x0005ee9b) list_single_2graphic_im_pane_g

0xe095,	// (0x0005d2da) list_single_2graphic_im_pane_t1_ParamLimits

0xe095,	// (0x0005d2da) list_single_2graphic_im_pane_t1

0x7b78,	// (0x00056dbd) list_single_graphic_2heading_pane_fp_ParamLimits

0x7b78,	// (0x00056dbd) list_single_graphic_2heading_pane_fp

0x2aa2,	// (0x00051ce7) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x2aa2,	// (0x00051ce7) list_single_graphic_2heading_pane_fp_g1

0x7b8d,	// (0x00056dd2) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7b8d,	// (0x00056dd2) list_single_graphic_2heading_pane_fp_g2

0x4b99,	// (0x00053dde) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4b99,	// (0x00053dde) list_single_graphic_2heading_pane_fp_g3

0x7b99,	// (0x00056dde) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7b99,	// (0x00056dde) list_single_graphic_2heading_pane_fp_g4

0x7bad,	// (0x00056df2) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7bad,	// (0x00056df2) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7d,	// (0x0005edc2) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7d,	// (0x0005edc2) list_single_graphic_2heading_pane_fp_g

0x2c6f,	// (0x00051eb4) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x2c6f,	// (0x00051eb4) list_single_graphic_2heading_pane_fp_t1

0x2ada,	// (0x00051d1f) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x2ada,	// (0x00051d1f) list_single_graphic_2heading_pane_fp_t2

0x2c85,	// (0x00051eca) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x2c85,	// (0x00051eca) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5f,	// (0x0005eea4) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5f,	// (0x0005eea4) list_single_graphic_2heading_pane_fp_t

0x75bd,	// (0x00056802) fep_hwr_write_pane_g5_ParamLimits

0x75bd,	// (0x00056802) fep_hwr_write_pane_g5

0x75c9,	// (0x0005680e) fep_hwr_write_pane_g6_ParamLimits

0x75c9,	// (0x0005680e) fep_hwr_write_pane_g6

0x7e5f,	// (0x000570a4) eswt_shell_pane_ParamLimits

0x5008,	// (0x0005424d) bg_popup_window_pane_cp18_ParamLimits

0x62a3,	// (0x000554e8) heading_pane_cp70

0x7f89,	// (0x000571ce) popup_eswt_tasktip_window_t1_ParamLimits

0xd2b9,	// (0x0005c4fe) aid_touch_tab_arrow_left

0xd2cf,	// (0x0005c514) aid_touch_tab_arrow_right

0xc47f,	// (0x0005b6c4) title_pane_g3_ParamLimits

0xc47f,	// (0x0005b6c4) title_pane_g3

0x3472,	// (0x000526b7) set_value_pane_g1

0xd1f8,	// (0x0005c43d) popup_toolbar_trans_pane_ParamLimits

0x80ba,	// (0x000572ff) aid_size_cell_tb_trans_pane_ParamLimits

0x34b3,	// (0x000526f8) bg_tb_trans_pane_ParamLimits

0x80cc,	// (0x00057311) grid_tb_trans_pane_ParamLimits

0x2ed0,	// (0x00052115) cont_note_pane_ParamLimits

0x2ed0,	// (0x00052115) cont_note_pane

0x3224,	// (0x00052469) cont_snote2_single_text_pane_ParamLimits

0x3224,	// (0x00052469) cont_snote2_single_text_pane

0x3224,	// (0x00052469) cont_snote2_single_graphic_pane_ParamLimits

0x3224,	// (0x00052469) cont_snote2_single_graphic_pane

0x55f4,	// (0x00054839) cont_note_wait_pane_ParamLimits

0x55f4,	// (0x00054839) cont_note_wait_pane

0x55f4,	// (0x00054839) cont_note_image_pane_ParamLimits

0x55f4,	// (0x00054839) cont_note_image_pane

0x8174,	// (0x000573b9) popup_note2_window_g1_ParamLimits

0x8174,	// (0x000573b9) popup_note2_window_g1

0x81a5,	// (0x000573ea) popup_note2_window_t1_ParamLimits

0x81a5,	// (0x000573ea) popup_note2_window_t1

0x81ea,	// (0x0005742f) popup_note2_window_t2_ParamLimits

0x81ea,	// (0x0005742f) popup_note2_window_t2

0x822f,	// (0x00057474) popup_note2_window_t3_ParamLimits

0x822f,	// (0x00057474) popup_note2_window_t3

0x8274,	// (0x000574b9) popup_note2_window_t4_ParamLimits

0x8274,	// (0x000574b9) popup_note2_window_t4

0x2f54,	// (0x00052199) popup_note2_window_t5_ParamLimits

0x2f54,	// (0x00052199) popup_note2_window_t5

0x0004,

0xfc6b,	// (0x0005eeb0) popup_note2_window_t_ParamLimits

0xfc6b,	// (0x0005eeb0) popup_note2_window_t

0x82a3,	// (0x000574e8) popup_note2_image_window_g1_ParamLimits

0x82a3,	// (0x000574e8) popup_note2_image_window_g1

0x82af,	// (0x000574f4) popup_note2_image_window_g2_ParamLimits

0x82af,	// (0x000574f4) popup_note2_image_window_g2

0x0001,

0xfc76,	// (0x0005eebb) popup_note2_image_window_g_ParamLimits

0xfc76,	// (0x0005eebb) popup_note2_image_window_g

0x82c1,	// (0x00057506) popup_note2_image_window_t1_ParamLimits

0x82c1,	// (0x00057506) popup_note2_image_window_t1

0x82d9,	// (0x0005751e) popup_note2_image_window_t2_ParamLimits

0x82d9,	// (0x0005751e) popup_note2_image_window_t2

0x82f1,	// (0x00057536) popup_note2_image_window_t3_ParamLimits

0x82f1,	// (0x00057536) popup_note2_image_window_t3

0x0002,

0xfc7b,	// (0x0005eec0) popup_note2_image_window_t_ParamLimits

0xfc7b,	// (0x0005eec0) popup_note2_image_window_t

0x5602,	// (0x00054847) popup_note2_wait_window_g1_ParamLimits

0x5602,	// (0x00054847) popup_note2_wait_window_g1

0x830d,	// (0x00057552) popup_note2_wait_window_g2_ParamLimits

0x830d,	// (0x00057552) popup_note2_wait_window_g2

0x561a,	// (0x0005485f) popup_note2_wait_window_g3_ParamLimits

0x561a,	// (0x0005485f) popup_note2_wait_window_g3

0x0002,

0xfc82,	// (0x0005eec7) popup_note2_wait_window_g_ParamLimits

0xfc82,	// (0x0005eec7) popup_note2_wait_window_g

0x8319,	// (0x0005755e) popup_note2_wait_window_t1_ParamLimits

0x8319,	// (0x0005755e) popup_note2_wait_window_t1

0x8337,	// (0x0005757c) popup_note2_wait_window_t2_ParamLimits

0x8337,	// (0x0005757c) popup_note2_wait_window_t2

0x8355,	// (0x0005759a) popup_note2_wait_window_t3_ParamLimits

0x8355,	// (0x0005759a) popup_note2_wait_window_t3

0x8367,	// (0x000575ac) popup_note2_wait_window_t4_ParamLimits

0x8367,	// (0x000575ac) popup_note2_wait_window_t4

0x0003,

0xfc89,	// (0x0005eece) popup_note2_wait_window_t_ParamLimits

0xfc89,	// (0x0005eece) popup_note2_wait_window_t

0x8379,	// (0x000575be) wait_bar2_pane_ParamLimits

0x8379,	// (0x000575be) wait_bar2_pane

0x8391,	// (0x000575d6) popup_snote2_single_text_window_g1_ParamLimits

0x8391,	// (0x000575d6) popup_snote2_single_text_window_g1

0x83b9,	// (0x000575fe) popup_snote2_single_text_window_t1_ParamLimits

0x83b9,	// (0x000575fe) popup_snote2_single_text_window_t1

0x8405,	// (0x0005764a) popup_snote2_single_text_window_t2_ParamLimits

0x8405,	// (0x0005764a) popup_snote2_single_text_window_t2

0x8451,	// (0x00057696) popup_snote2_single_text_window_t3_ParamLimits

0x8451,	// (0x00057696) popup_snote2_single_text_window_t3

0x8492,	// (0x000576d7) popup_snote2_single_text_window_t4_ParamLimits

0x8492,	// (0x000576d7) popup_snote2_single_text_window_t4

0x84c8,	// (0x0005770d) popup_snote2_single_text_window_t5_ParamLimits

0x84c8,	// (0x0005770d) popup_snote2_single_text_window_t5

0x0004,

0xfc92,	// (0x0005eed7) popup_snote2_single_text_window_t_ParamLimits

0xfc92,	// (0x0005eed7) popup_snote2_single_text_window_t

0x84f3,	// (0x00057738) popup_snote2_single_graphic_window_g1_ParamLimits

0x84f3,	// (0x00057738) popup_snote2_single_graphic_window_g1

0x851b,	// (0x00057760) popup_snote2_single_graphic_window_g2_ParamLimits

0x851b,	// (0x00057760) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9d,	// (0x0005eee2) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9d,	// (0x0005eee2) popup_snote2_single_graphic_window_g

0x8543,	// (0x00057788) popup_snote2_single_graphic_window_t1_ParamLimits

0x8543,	// (0x00057788) popup_snote2_single_graphic_window_t1

0x858f,	// (0x000577d4) popup_snote2_single_graphic_window_t2_ParamLimits

0x858f,	// (0x000577d4) popup_snote2_single_graphic_window_t2

0x8451,	// (0x00057696) popup_snote2_single_graphic_window_t3_ParamLimits

0x8451,	// (0x00057696) popup_snote2_single_graphic_window_t3

0x8492,	// (0x000576d7) popup_snote2_single_graphic_window_t4_ParamLimits

0x8492,	// (0x000576d7) popup_snote2_single_graphic_window_t4

0x84c8,	// (0x0005770d) popup_snote2_single_graphic_window_t5_ParamLimits

0x84c8,	// (0x0005770d) popup_snote2_single_graphic_window_t5

0x0004,

0xfca2,	// (0x0005eee7) popup_snote2_single_graphic_window_t_ParamLimits

0xfca2,	// (0x0005eee7) popup_snote2_single_graphic_window_t

0x6fbf,	// (0x00056204) clock_nsta_pane_cp2_t1

0x6fbf,	// (0x00056204) clock_nsta_pane_cp2_t2

0x0001,

0xfab6,	// (0x0005ecfb) clock_nsta_pane_cp2_t

0x09a7,	// (0x0004fbec) form_field_data_wide_pane_g1_ParamLimits

0x34cd,	// (0x00052712) form_field_data_wide_pane_g2_ParamLimits

0x34cd,	// (0x00052712) form_field_data_wide_pane_g2

0x34d9,	// (0x0005271e) form_field_data_wide_pane_g3_ParamLimits

0x34d9,	// (0x0005271e) form_field_data_wide_pane_g3

0x0002,

0xf692,	// (0x0005e8d7) form_field_data_wide_pane_g_ParamLimits

0xf692,	// (0x0005e8d7) form_field_data_wide_pane_g

0xdbe1,	// (0x0005ce26) grid_touch_3_pane_ParamLimits

0xdbe1,	// (0x0005ce26) grid_touch_3_pane

0xe0c6,	// (0x0005d30b) cell_touch_3_pane_ParamLimits

0xe0c6,	// (0x0005d30b) cell_touch_3_pane

0x751d,	// (0x00056762) cell_touch_3_pane_g1

0x751d,	// (0x00056762) cell_touch_3_pane_g2

0x0001,

0xfb3b,	// (0x0005ed80) cell_touch_3_pane_g

0x2f86,	// (0x000521cb) cont_query_data_pane

0x2f8e,	// (0x000521d3) cont_query_data_pane_cp1

0x8609,	// (0x0005784e) button_value_adjust_pane_cp7

0x8611,	// (0x00057856) query_popup_pane_cp3

0x3bea,	// (0x00052e2f) bg_popup_sub_pane_cp22_ParamLimits

0x0d6d,	// (0x0004ffb2) navi_navi_volume_pane_cp2

0x0d88,	// (0x0004ffcd) popup_side_volume_key_window_g2

0x0d97,	// (0x0004ffdc) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x0005e969) popup_side_volume_key_window_g

0x0db4,	// (0x0004fff9) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x0005e970) popup_side_volume_key_window_t

0x3ea1,	// (0x000530e6) popup_side_volume_key_window_ParamLimits

0xb683,	// (0x0005a8c8) list_double_graphic_pane_g4_ParamLimits

0xb683,	// (0x0005a8c8) list_double_graphic_pane_g4

0xda42,	// (0x0005cc87) list_single_2heading_msg_pane_ParamLimits

0xda42,	// (0x0005cc87) list_single_2heading_msg_pane

0xce91,	// (0x0005c0d6) list_single_2heading_msg_pane_g1_ParamLimits

0xce91,	// (0x0005c0d6) list_single_2heading_msg_pane_g1

0xce9d,	// (0x0005c0e2) list_single_2heading_msg_pane_g2_ParamLimits

0xce9d,	// (0x0005c0e2) list_single_2heading_msg_pane_g2

0xceb0,	// (0x0005c0f5) list_single_2heading_msg_pane_g3_ParamLimits

0xceb0,	// (0x0005c0f5) list_single_2heading_msg_pane_g3

0xcebc,	// (0x0005c101) list_single_2heading_msg_pane_g4_ParamLimits

0xcebc,	// (0x0005c101) list_single_2heading_msg_pane_g4

0x0003,

0xfcad,	// (0x0005eef2) list_single_2heading_msg_pane_g_ParamLimits

0xfcad,	// (0x0005eef2) list_single_2heading_msg_pane_g

0xbf27,	// (0x0005b16c) list_single_2heading_msg_pane_t1_ParamLimits

0xbf27,	// (0x0005b16c) list_single_2heading_msg_pane_t1

0xbf4f,	// (0x0005b194) list_single_2heading_msg_pane_t2_ParamLimits

0xbf4f,	// (0x0005b194) list_single_2heading_msg_pane_t2

0xbfba,	// (0x0005b1ff) list_single_2heading_msg_pane_t3_ParamLimits

0xbfba,	// (0x0005b1ff) list_single_2heading_msg_pane_t3

0x2d6a,	// (0x00051faf) list_single_2heading_msg_pane_t4_ParamLimits

0x2d6a,	// (0x00051faf) list_single_2heading_msg_pane_t4

0x0003,

0xfcb6,	// (0x0005eefb) list_single_2heading_msg_pane_t_ParamLimits

0xfcb6,	// (0x0005eefb) list_single_2heading_msg_pane_t

0x2476,	// (0x000516bb) title_pane_g4_ParamLimits

0x2476,	// (0x000516bb) title_pane_g4

0x0b7b,	// (0x0004fdc0) title_pane_stacon_g3_ParamLimits

0x0b7b,	// (0x0004fdc0) title_pane_stacon_g3

0x8137,	// (0x0005737c) list_single_2graphic_im_pane_g4_ParamLimits

0x8137,	// (0x0005737c) list_single_2graphic_im_pane_g4

0x604a,	// (0x0005528f) popup_side_volume_key_window_cp

0x682b,	// (0x00055a70) main_idle_act2_pane_t1

0x11e6,	// (0x0005042b) toolbar_button_pane_g10

0xc7ec,	// (0x0005ba31) popup_toolbar_window_cp1

0x6fb0,	// (0x000561f5) clock_nsta_pane_cp_t1

0x6fb0,	// (0x000561f5) clock_nsta_pane_cp_t2

0x0001,

0xfab1,	// (0x0005ecf6) clock_nsta_pane_cp_t

0x0d6d,	// (0x0004ffb2) navi_navi_volume_pane_cp2_ParamLimits

0x0d7c,	// (0x0004ffc1) popup_side_volume_key_window_g1_ParamLimits

0x0d88,	// (0x0004ffcd) popup_side_volume_key_window_g2_ParamLimits

0x0d97,	// (0x0004ffdc) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x0005e969) popup_side_volume_key_window_g_ParamLimits

0x1753,	// (0x00050998) fep_hwr_aid_pane

0x17fa,	// (0x00050a3f) bg_fep_hwr_top_pane_g4_ParamLimits

0x758d,	// (0x000567d2) fep_hwr_top_pane_g1_ParamLimits

0x759f,	// (0x000567e4) fep_hwr_top_pane_g2_ParamLimits

0x181a,	// (0x00050a5f) fep_hwr_top_pane_g3_ParamLimits

0xfb06,	// (0x0005ed4b) fep_hwr_top_pane_g_ParamLimits

0x182f,	// (0x00050a74) fep_hwr_top_text_pane_ParamLimits

0x5e0d,	// (0x00055052) aid_touch_tab_arrow_arrow_2

0x5e16,	// (0x0005505b) aid_touch_tab_arrow_left_2

0x1767,	// (0x000509ac) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x179e,	// (0x000509e3) fep_hwr_prediction_pane

0x76ff,	// (0x00056944) fep_vkb_prediction_pane

0xdecb,	// (0x0005d110) fep_vkb_side_pane_g3_ParamLimits

0xdecb,	// (0x0005d110) fep_vkb_side_pane_g3

0x19aa,	// (0x00050bef) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1a16,	// (0x00050c5b) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1a23,	// (0x00050c68) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb5,	// (0x0005edfa) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1b52,	// (0x00050d97) fep_hwr_prediction_pane_g1

0x1b5c,	// (0x00050da1) fep_hwr_prediction_pane_g2

0x1b64,	// (0x00050da9) fep_hwr_prediction_pane_g3

0x1b6c,	// (0x00050db1) fep_hwr_prediction_pane_g4

0x0003,

0xfcbf,	// (0x0005ef04) fep_hwr_prediction_pane_g

0x8636,	// (0x0005787b) fep_vkb_prediction_pane_g1

0x8640,	// (0x00057885) fep_vkb_prediction_pane_g2

0x8648,	// (0x0005788d) fep_vkb_prediction_pane_g3

0x8650,	// (0x00057895) fep_vkb_prediction_pane_g4

0x0003,

0xfcc8,	// (0x0005ef0d) fep_vkb_prediction_pane_g

0x155a,	// (0x0005079f) slider_set_pane_g3

0x156e,	// (0x000507b3) slider_set_pane_g4

0x1586,	// (0x000507cb) slider_set_pane_g5

0x155a,	// (0x0005079f) slider_set_pane_g6

0x159c,	// (0x000507e1) slider_set_pane_g7

0x64c0,	// (0x00055705) slider_form_pane_g3

0x64c9,	// (0x0005570e) slider_form_pane_g4

0x64d1,	// (0x00055716) slider_form_pane_g5

0x64c0,	// (0x00055705) slider_form_pane_g6

0xda17,	// (0x0005cc5c) slider_form_pane_g7

0x6ae8,	// (0x00055d2d) slider_set_pane_vc_g3

0x6af1,	// (0x00055d36) slider_set_pane_vc_g4

0x6afa,	// (0x00055d3f) slider_set_pane_vc_g5

0x6ae8,	// (0x00055d2d) slider_set_pane_vc_g6

0x6b03,	// (0x00055d48) slider_set_pane_vc_g7

0x6ae8,	// (0x00055d2d) slider_form_pane_vc_g1

0x6af1,	// (0x00055d36) slider_form_pane_vc_g2

0x6afa,	// (0x00055d3f) slider_form_pane_vc_g3

0x6ae8,	// (0x00055d2d) slider_form_pane_vc_g4

0x6cb6,	// (0x00055efb) slider_form_pane_vc_g5

0x0004,

0xfa8a,	// (0x0005eccf) slider_form_pane_vc_g

0x242e,	// (0x00051673) main_idle_act3_pane

0x8658,	// (0x0005789d) ai3_links_pane

0xe10f,	// (0x0005d354) popup_ai3_data_window_ParamLimits

0xe10f,	// (0x0005d354) popup_ai3_data_window

0x242e,	// (0x00051673) grid_ai3_links_pane

0xe129,	// (0x0005d36e) cell_ai3_links_pane_ParamLimits

0xe129,	// (0x0005d36e) cell_ai3_links_pane

0x8693,	// (0x000578d8) bg_popup_sub_pane_cp11

0x86a0,	// (0x000578e5) cell_ai3_links_pane_g1

0x242e,	// (0x00051673) bg_popup_sub_pane_cp12

0x86c5,	// (0x0005790a) heading_ai3_data_pane

0x86cd,	// (0x00057912) list_ai3_gene_pane

0x86d9,	// (0x0005791e) popup_ai3_data_window_g1

0x86e1,	// (0x00057926) heading_ai3_data_pane_g1

0x86e9,	// (0x0005792e) heading_ai3_data_pane_t1

0x86f7,	// (0x0005793c) list_double_ai3_gene_pane_ParamLimits

0x86f7,	// (0x0005793c) list_double_ai3_gene_pane

0x8704,	// (0x00057949) list_single_ai3_gene_pane_ParamLimits

0x8704,	// (0x00057949) list_single_ai3_gene_pane

0x74e2,	// (0x00056727) list_highlight_pane_cp7_ParamLimits

0x74e2,	// (0x00056727) list_highlight_pane_cp7

0x8711,	// (0x00057956) list_single_a13_gene_pane_t1_ParamLimits

0x8711,	// (0x00057956) list_single_a13_gene_pane_t1

0x8728,	// (0x0005796d) list_single_ai3_gene_pane_g1

0x8731,	// (0x00057976) list_single_ai3_gene_pane_g2

0x0001,

0xfcd1,	// (0x0005ef16) list_single_ai3_gene_pane_g

0x8739,	// (0x0005797e) list_double_ai3_gene_pane_g1_ParamLimits

0x8739,	// (0x0005797e) list_double_ai3_gene_pane_g1

0x8745,	// (0x0005798a) list_double_ai3_gene_pane_t1_ParamLimits

0x8745,	// (0x0005798a) list_double_ai3_gene_pane_t1

0x8761,	// (0x000579a6) list_double_ai3_gene_pane_t2_ParamLimits

0x8761,	// (0x000579a6) list_double_ai3_gene_pane_t2

0x8777,	// (0x000579bc) list_double_ai3_gene_pane_t3_ParamLimits

0x8777,	// (0x000579bc) list_double_ai3_gene_pane_t3

0x0002,

0xfcd6,	// (0x0005ef1b) list_double_ai3_gene_pane_t_ParamLimits

0xfcd6,	// (0x0005ef1b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x2c9b,	// (0x00051ee0) aid_size_min_col_2

0xe0f9,	// (0x0005d33e) aid_size_min_msg_ParamLimits

0xe0f9,	// (0x0005d33e) aid_size_min_msg

0xdedf,	// (0x0005d124) fep_vkb_top_text_pane_g2_ParamLimits

0xdedf,	// (0x0005d124) fep_vkb_top_text_pane_g2

0x0001,

0xfb36,	// (0x0005ed7b) fep_vkb_top_text_pane_g_ParamLimits

0xfb36,	// (0x0005ed7b) fep_vkb_top_text_pane_g

0x242e,	// (0x00051673) main_hc_apps_shell_pane

0x8794,	// (0x000579d9) grid_hc_apps_pane_ParamLimits

0x8794,	// (0x000579d9) grid_hc_apps_pane

0x87a3,	// (0x000579e8) list_hc_apps_pane

0x87ab,	// (0x000579f0) scroll_pane_cp37_ParamLimits

0x87ab,	// (0x000579f0) scroll_pane_cp37

0xe143,	// (0x0005d388) cell_hc_apps_pane_ParamLimits

0xe143,	// (0x0005d388) cell_hc_apps_pane

0xe201,	// (0x0005d446) cell_hc_apps_pane_g1_ParamLimits

0xe201,	// (0x0005d446) cell_hc_apps_pane_g1

0x8896,	// (0x00057adb) cell_hc_apps_pane_g2_ParamLimits

0x8896,	// (0x00057adb) cell_hc_apps_pane_g2

0x88b2,	// (0x00057af7) cell_hc_apps_pane_g3_ParamLimits

0x88b2,	// (0x00057af7) cell_hc_apps_pane_g3

0x0002,

0xfcdd,	// (0x0005ef22) cell_hc_apps_pane_g_ParamLimits

0xfcdd,	// (0x0005ef22) cell_hc_apps_pane_g

0xe22e,	// (0x0005d473) cell_hc_apps_pane_t1_ParamLimits

0xe22e,	// (0x0005d473) cell_hc_apps_pane_t1

0x2ed0,	// (0x00052115) grid_highlight_pane_cp10_ParamLimits

0x2ed0,	// (0x00052115) grid_highlight_pane_cp10

0xe26c,	// (0x0005d4b1) list_single_hc_apps_pane_ParamLimits

0xe26c,	// (0x0005d4b1) list_single_hc_apps_pane

0xe299,	// (0x0005d4de) list_single_hc_apps_pane_g1

0xced4,	// (0x0005c119) list_single_hc_apps_pane_g2

0x0001,

0xfce4,	// (0x0005ef29) list_single_hc_apps_pane_g

0xceed,	// (0x0005c132) list_single_hc_apps_pane_g2_copy1

0x2dc4,	// (0x00052009) list_single_hc_apps_pane_t1

0x2522,	// (0x00051767) bg_set_opt_pane_cp_ParamLimits

0x037e,	// (0x0004f5c3) setting_slider_pane_t1_ParamLimits

0x0397,	// (0x0004f5dc) setting_slider_pane_t2_ParamLimits

0x03b1,	// (0x0004f5f6) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0005e7bf) setting_slider_pane_t_ParamLimits

0x03c9,	// (0x0004f60e) slider_set_pane_ParamLimits

0x109c,	// (0x000502e1) control_pane_g5_ParamLimits

0x109c,	// (0x000502e1) control_pane_g5

0x630f,	// (0x00055554) slider_set_pane_g1_ParamLimits

0x154e,	// (0x00050793) slider_set_pane_g2_ParamLimits

0x155a,	// (0x0005079f) slider_set_pane_g3_ParamLimits

0x156e,	// (0x000507b3) slider_set_pane_g4_ParamLimits

0x1586,	// (0x000507cb) slider_set_pane_g5_ParamLimits

0x155a,	// (0x0005079f) slider_set_pane_g6_ParamLimits

0x159c,	// (0x000507e1) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0005eba9) slider_set_pane_g_ParamLimits

0x3f82,	// (0x000531c7) navi_icon_text_pane_ParamLimits

0xd285,	// (0x0005c4ca) aid_fill_nsta_2_ParamLimits

0xd2b9,	// (0x0005c4fe) aid_touch_tab_arrow_left_ParamLimits

0xd2cf,	// (0x0005c514) aid_touch_tab_arrow_right_ParamLimits

0xd36a,	// (0x0005c5af) clock_nsta_pane_ParamLimits

0xd7f3,	// (0x0005ca38) navi_icon_pane_g1_ParamLimits

0xd7ff,	// (0x0005ca44) navi_text_pane_t1_ParamLimits

0xdca9,	// (0x0005ceee) navi_icon_text_pane_g1_ParamLimits

0xdcb5,	// (0x0005cefa) navi_icon_text_pane_t1_ParamLimits

0xe299,	// (0x0005d4de) list_single_hc_apps_pane_g1_ParamLimits

0xced4,	// (0x0005c119) list_single_hc_apps_pane_g2_ParamLimits

0xfce4,	// (0x0005ef29) list_single_hc_apps_pane_g_ParamLimits

0xceed,	// (0x0005c132) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x2dc4,	// (0x00052009) list_single_hc_apps_pane_t1_ParamLimits

0xb4c2,	// (0x0005a707) popup_toolbar2_fixed_window_ParamLimits

0xb4c2,	// (0x0005a707) popup_toolbar2_fixed_window

0xd1ee,	// (0x0005c433) popup_toolbar2_float_window

0x242e,	// (0x00051673) bg_popup_sub_pane_cp27

0x8989,	// (0x00057bce) grid_toolbar2_float_pane

0x242e,	// (0x00051673) bg_popup_sub_pane_cp26

0x8989,	// (0x00057bce) grid_toolbar2_fixed_pane

0xe2b2,	// (0x0005d4f7) cell_toolbar2_fixed_pane_ParamLimits

0xe2b2,	// (0x0005d4f7) cell_toolbar2_fixed_pane

0xe2cd,	// (0x0005d512) cell_toolbar2_fixed_pane_g1

0x89aa,	// (0x00057bef) toolbar2_fixed_button_pane

0x4f18,	// (0x0005415d) toolbar2_fixed_button_pane_g1

0x4f28,	// (0x0005416d) toolbar2_fixed_button_pane_g2

0x4f20,	// (0x00054165) toolbar2_fixed_button_pane_g3

0x4f38,	// (0x0005417d) toolbar2_fixed_button_pane_g4

0x4f30,	// (0x00054175) toolbar2_fixed_button_pane_g5

0x4f40,	// (0x00054185) toolbar2_fixed_button_pane_g6

0x4f48,	// (0x0005418d) toolbar2_fixed_button_pane_g7

0x4f58,	// (0x0005419d) toolbar2_fixed_button_pane_g8

0x4f50,	// (0x00054195) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0005eaab) toolbar2_fixed_button_pane_g

0x89b2,	// (0x00057bf7) cell_toolbar2_float_pane_ParamLimits

0x89b2,	// (0x00057bf7) cell_toolbar2_float_pane

0x89c3,	// (0x00057c08) cell_toolbar2_float_pane_g1

0x89aa,	// (0x00057bef) toolbar2_fixed_button_pane_cp

0xddb9,	// (0x0005cffe) fep_vkb_accented_list_pane_ParamLimits

0xddb9,	// (0x0005cffe) fep_vkb_accented_list_pane

0x198a,	// (0x00050bcf) bg_popup_fep_shadow_pane_g9

0x40f6,	// (0x0005333b) bg_popup_fep_shadow_pane_cp3

0x3614,	// (0x00052859) list_accented_list_pane

0x89cc,	// (0x00057c11) list_single_accented_list_pane_ParamLimits

0x89cc,	// (0x00057c11) list_single_accented_list_pane

0x40f6,	// (0x0005333b) list_highlight_pane_cp10

0x89dd,	// (0x00057c22) list_single_accented_list_pane_t1

0xd118,	// (0x0005c35d) popup_slider_window_ParamLimits

0xd118,	// (0x0005c35d) popup_slider_window

0x8619,	// (0x0005785e) aid_indentation_list_msg

0xe3fb,	// (0x0005d640) bg_popup_window_pane_cp19

0x8b01,	// (0x00057d46) popup_slider_window_g1

0x8b1d,	// (0x00057d62) popup_slider_window_g2

0x8b39,	// (0x00057d7e) popup_slider_window_g3

0x0005,

0xfce9,	// (0x0005ef2e) popup_slider_window_g

0x8b95,	// (0x00057dda) popup_slider_window_t1

0x8c09,	// (0x00057e4e) small_volume_slider_vertical_pane

0x751d,	// (0x00056762) small_volume_slider_vertical_pane_g1

0x751d,	// (0x00056762) small_volume_slider_vertical_pane_g2

0x8c25,	// (0x00057e6a) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfb,	// (0x0005ef40) small_volume_slider_vertical_pane_g

0xb430,	// (0x0005a675) area_side_right_pane_ParamLimits

0xb430,	// (0x0005a675) area_side_right_pane

0xc028,	// (0x0005b26d) aid_size_side_button_ParamLimits

0xc028,	// (0x0005b26d) aid_size_side_button

0xc041,	// (0x0005b286) grid_sctrl_middle_pane_ParamLimits

0xc041,	// (0x0005b286) grid_sctrl_middle_pane

0x1ba8,	// (0x00050ded) sctrl_sk_bottom_pane

0x1bb9,	// (0x00050dfe) sctrl_sk_top_pane

0x1bcb,	// (0x00050e10) aid_touch_sctrl_top

0x1bd8,	// (0x00050e1d) bg_sctrl_sk_pane_ParamLimits

0x1bd8,	// (0x00050e1d) bg_sctrl_sk_pane

0x1be6,	// (0x00050e2b) sctrl_sk_top_pane_g1

0x1bf3,	// (0x00050e38) sctrl_sk_top_pane_t1

0x1bcb,	// (0x00050e10) aid_touch_sctrl_bottom

0x1bd8,	// (0x00050e1d) bg_sctrl_sk_pane_cp_ParamLimits

0x1bd8,	// (0x00050e1d) bg_sctrl_sk_pane_cp

0x1c0e,	// (0x00050e53) sctrl_sk_bottom_pane_g1

0x1bf3,	// (0x00050e38) sctrl_sk_bottom_pane_t1

0xc05b,	// (0x0005b2a0) cell_sctrl_middle_pane_ParamLimits

0xc05b,	// (0x0005b2a0) cell_sctrl_middle_pane

0xc06c,	// (0x0005b2b1) aid_touch_sctrl_middle_ParamLimits

0xc06c,	// (0x0005b2b1) aid_touch_sctrl_middle

0xc079,	// (0x0005b2be) bg_sctrl_middle_pane_ParamLimits

0xc079,	// (0x0005b2be) bg_sctrl_middle_pane

0x227b,	// (0x000514c0) cell_sctrl_middle_pane_g1_ParamLimits

0x227b,	// (0x000514c0) cell_sctrl_middle_pane_g1

0xc087,	// (0x0005b2cc) cell_sctrl_middle_pane_g2_ParamLimits

0xc087,	// (0x0005b2cc) cell_sctrl_middle_pane_g2

0x0001,

0xfd07,	// (0x0005ef4c) cell_sctrl_middle_pane_g_ParamLimits

0xfd07,	// (0x0005ef4c) cell_sctrl_middle_pane_g

0x4f18,	// (0x0005415d) bg_sctrl_middle_pane_g1

0x4f20,	// (0x00054165) bg_sctrl_middle_pane_g2

0x4f28,	// (0x0005416d) bg_sctrl_middle_pane_g3

0x4f30,	// (0x00054175) bg_sctrl_middle_pane_g4

0x4f38,	// (0x0005417d) bg_sctrl_middle_pane_g5

0x4f40,	// (0x00054185) bg_sctrl_middle_pane_g6

0x4f48,	// (0x0005418d) bg_sctrl_middle_pane_g7

0x4f50,	// (0x00054195) bg_sctrl_middle_pane_g8

0x0007,

0xfd0c,	// (0x0005ef51) bg_sctrl_middle_pane_g

0x4f58,	// (0x0005419d) bg_sctrl_middle_pane_g8_copy1

0x4f18,	// (0x0005415d) bg_sctrl_sk_pane_g1

0x4f28,	// (0x0005416d) bg_sctrl_sk_pane_g2

0x4f20,	// (0x00054165) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0005eaab) bg_sctrl_sk_pane_g

0x33e2,	// (0x00052627) aid_size_touch_scroll_bar

0x4f38,	// (0x0005417d) bg_sctrl_sk_pane_g4

0x4f30,	// (0x00054175) bg_sctrl_sk_pane_g5

0x4f40,	// (0x00054185) bg_sctrl_sk_pane_g6

0x4f48,	// (0x0005418d) bg_sctrl_sk_pane_g7

0x4f58,	// (0x0005419d) bg_sctrl_sk_pane_g8

0x4f50,	// (0x00054195) bg_sctrl_sk_pane_g9

0x44f4,	// (0x00053739) popup_fep_china_hwr2_fs_candidate_window

0xcbd3,	// (0x0005be18) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xcbd3,	// (0x0005be18) popup_fep_china_hwr2_fs_control_window

0x19aa,	// (0x00050bef) sctrl_sk_top_pane_g2

0x0001,

0xfd02,	// (0x0005ef47) sctrl_sk_top_pane_g

0xe4b3,	// (0x0005d6f8) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe4b3,	// (0x0005d6f8) aid_fep_china_hwr2_fs_cell

0xe4c7,	// (0x0005d70c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe4c7,	// (0x0005d70c) bg_popup_fep_shadow_pane_cp4

0xe4de,	// (0x0005d723) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe4de,	// (0x0005d723) bg_popup_fep_shadow_pane_cp5

0xe4f0,	// (0x0005d735) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe4f0,	// (0x0005d735) popup_fep_china_hwr2_fs_control_bar_grid

0xe504,	// (0x0005d749) popup_fep_china_hwr2_fs_control_funtion_grid

0x8c81,	// (0x00057ec6) aid_fep_china_hwr2_fs_candi_cell

0x242e,	// (0x00051673) bg_popup_fep_shadow_pane_cp6

0x8c8b,	// (0x00057ed0) popup_fep_china_hwr2_fs_candidate_grid

0xe50c,	// (0x0005d751) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe50c,	// (0x0005d751) cell_fep_china_hwr2_fs_funtion_grid

0x751d,	// (0x00056762) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8cad,	// (0x00057ef2) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8cad,	// (0x00057ef2) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8cbb,	// (0x00057f00) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8cbb,	// (0x00057f00) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1d,	// (0x0005ef62) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1d,	// (0x0005ef62) cell_fep_china_hwr2_fs_funtion_grid_g

0xe524,	// (0x0005d769) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe524,	// (0x0005d769) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe539,	// (0x0005d77e) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe539,	// (0x0005d77e) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd22,	// (0x0005ef67) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd22,	// (0x0005ef67) cell_fep_china_hwr2_fs_funtion_grid_t

0x8d02,	// (0x00057f47) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8d0a,	// (0x00057f4f) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8d12,	// (0x00057f57) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd27,	// (0x0005ef6c) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8d1a,	// (0x00057f5f) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8d1a,	// (0x00057f5f) cell_fep_china_hwr2_fs_candidate_grid

0x8d33,	// (0x00057f78) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8d3b,	// (0x00057f80) popup_fep_china_hwr2_fs_candidate_grid_g21

0x751d,	// (0x00056762) cell_fep_china_hwr2_fs_candidate_grid_g1

0x751d,	// (0x00056762) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3b,	// (0x0005ed80) cell_fep_china_hwr2_fs_candidate_grid_g

0x8d43,	// (0x00057f88) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4ae7,	// (0x00053d2c) clock_nsta_pane_cp_24_ParamLimits

0x4ae7,	// (0x00053d2c) clock_nsta_pane_cp_24

0x4b65,	// (0x00053daa) indicator_nsta_pane_cp_24_ParamLimits

0x4b65,	// (0x00053daa) indicator_nsta_pane_cp_24

0x5c74,	// (0x00054eb9) heading_pane_g1

0x0001,

0xf8cb,	// (0x0005eb10) heading_pane_g

0x6674,	// (0x000558b9) grid_sct_catagory_button_pane

0x66a4,	// (0x000558e9) scroll_pane_cp5_ParamLimits

0x710e,	// (0x00056353) button_value_adjust_pane_cp5_ParamLimits

0x710e,	// (0x00056353) button_value_adjust_pane_cp5

0x71ed,	// (0x00056432) form2_midp_time_pane_ParamLimits

0x8d51,	// (0x00057f96) cell_sct_catagory_button_pane_ParamLimits

0x8d51,	// (0x00057f96) cell_sct_catagory_button_pane

0x74e2,	// (0x00056727) bg_button_pane_cp01_ParamLimits

0x74e2,	// (0x00056727) bg_button_pane_cp01

0x751d,	// (0x00056762) cell_sct_catagory_button_pane_g1

0xd191,	// (0x0005c3d6) popup_tb_extension_window

0xe555,	// (0x0005d79a) aid_size_cell_ext_ParamLimits

0xe555,	// (0x0005d79a) aid_size_cell_ext

0x3224,	// (0x00052469) bg_tb_trans_pane_cp1_ParamLimits

0x3224,	// (0x00052469) bg_tb_trans_pane_cp1

0xe57b,	// (0x0005d7c0) grid_tb_ext_pane_ParamLimits

0xe57b,	// (0x0005d7c0) grid_tb_ext_pane

0xe5b6,	// (0x0005d7fb) cell_tb_ext_pane_ParamLimits

0xe5b6,	// (0x0005d7fb) cell_tb_ext_pane

0xe5de,	// (0x0005d823) cell_tb_ext_pane_g1_ParamLimits

0xe5de,	// (0x0005d823) cell_tb_ext_pane_g1

0x8de5,	// (0x0005802a) cell_tb_ext_pane_t1

0x2ed0,	// (0x00052115) list_highlight_pane_cp11_ParamLimits

0x2ed0,	// (0x00052115) list_highlight_pane_cp11

0x02b1,	// (0x0004f4f6) popup_uni_indicator_window_ParamLimits

0x02b1,	// (0x0004f4f6) popup_uni_indicator_window

0x34b3,	// (0x000526f8) bg_popup_sub_pane_cp14

0x8e00,	// (0x00058045) list_uniindi_pane

0x8e0c,	// (0x00058051) uniindi_top_pane

0x2ed0,	// (0x00052115) bg_uniindi_top_pane

0x8e2b,	// (0x00058070) uniindi_top_pane_g1

0x8e41,	// (0x00058086) uniindi_top_pane_g2

0x0003,

0xfd2e,	// (0x0005ef73) uniindi_top_pane_g

0x8e6b,	// (0x000580b0) uniindi_top_pane_t1

0x8e95,	// (0x000580da) list_single_uniindi_pane_ParamLimits

0x8e95,	// (0x000580da) list_single_uniindi_pane

0x751d,	// (0x00056762) bg_uniindi_top_pane_g1

0x8ea8,	// (0x000580ed) list_single_uniindi_pane_g1

0x8ebb,	// (0x00058100) list_single_uniindi_pane_t1

0x0127,	// (0x0004f36c) control_bg_pane

0x8ee0,	// (0x00058125) bg_sctrl_sk_pane_cp1

0x8ee9,	// (0x0005812e) bg_sctrl_sk_pane_cp2

0x8ef2,	// (0x00058137) control_bg_pane_g1

0x8efb,	// (0x00058140) control_bg_pane_g2

0x0001,

0xfd37,	// (0x0005ef7c) control_bg_pane_g

0x6f42,	// (0x00056187) cell_indicator_nsta_pane_g1_ParamLimits

0xdc10,	// (0x0005ce55) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9f,	// (0x0005ece4) cell_indicator_nsta_pane_g_ParamLimits

0x2a78,	// (0x00051cbd) form2_midp_time_pane_t1_ParamLimits

0xcb50,	// (0x0005bd95) main_idle_act4_pane_ParamLimits

0xcb50,	// (0x0005bd95) main_idle_act4_pane

0xd191,	// (0x0005c3d6) popup_tb_extension_window_ParamLimits

0xe59d,	// (0x0005d7e2) tb_ext_find_pane_ParamLimits

0xe59d,	// (0x0005d7e2) tb_ext_find_pane

0x8f04,	// (0x00058149) ai_gene_pane_1_cp1

0x423b,	// (0x00053480) ai_gene_pane_2_cp1

0x8f0c,	// (0x00058151) list_single_idle_plugin_calendar_pane

0x8f15,	// (0x0005815a) list_single_idle_plugin_notification_pane

0x8f1e,	// (0x00058163) list_single_idle_plugin_player_pane

0xe5fb,	// (0x0005d840) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe5fb,	// (0x0005d840) list_single_idle_plugin_shortcut_pane

0xe623,	// (0x0005d868) main_idle_act4_pane_t1

0xe639,	// (0x0005d87e) main_idle_act4_pane_t2

0x0001,

0xfd3c,	// (0x0005ef81) main_idle_act4_pane_t

0xe64f,	// (0x0005d894) middle_sk_idle_act4_pane_ParamLimits

0xe64f,	// (0x0005d894) middle_sk_idle_act4_pane

0xe66b,	// (0x0005d8b0) popup_clock_digital_analogue_window_cp2

0xe693,	// (0x0005d8d8) shortcut_wheel_idle_act4_pane_ParamLimits

0xe693,	// (0x0005d8d8) shortcut_wheel_idle_act4_pane

0x751d,	// (0x00056762) shortcut_wheel_idle_act4_pane_g1

0x751d,	// (0x00056762) shortcut_wheel_idle_act4_pane_g2

0x751d,	// (0x00056762) shortcut_wheel_idle_act4_pane_g3

0x751d,	// (0x00056762) shortcut_wheel_idle_act4_pane_g4

0x751d,	// (0x00056762) shortcut_wheel_idle_act4_pane_g5

0x8fb1,	// (0x000581f6) shortcut_wheel_idle_act4_pane_g6

0x8fb9,	// (0x000581fe) shortcut_wheel_idle_act4_pane_g7

0x8fc1,	// (0x00058206) shortcut_wheel_idle_act4_pane_g8

0x8fc9,	// (0x0005820e) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd41,	// (0x0005ef86) shortcut_wheel_idle_act4_pane_g

0xe362,	// (0x0005d5a7) middle_sk_idle_act4_pane_g1_ParamLimits

0xe362,	// (0x0005d5a7) middle_sk_idle_act4_pane_g1

0xe710,	// (0x0005d955) middle_sk_idle_act4_pane_g2_ParamLimits

0xe710,	// (0x0005d955) middle_sk_idle_act4_pane_g2

0x0001,

0xfd64,	// (0x0005efa9) middle_sk_idle_act4_pane_g_ParamLimits

0xfd64,	// (0x0005efa9) middle_sk_idle_act4_pane_g

0xe728,	// (0x0005d96d) middle_sk_idle_act4_pane_t1_ParamLimits

0xe728,	// (0x0005d96d) middle_sk_idle_act4_pane_t1

0xe757,	// (0x0005d99c) grid_ai_shortcut_pane_ParamLimits

0xe757,	// (0x0005d99c) grid_ai_shortcut_pane

0xe774,	// (0x0005d9b9) list_highlight_pane_cp16_ParamLimits

0xe774,	// (0x0005d9b9) list_highlight_pane_cp16

0xe781,	// (0x0005d9c6) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe781,	// (0x0005d9c6) list_single_idle_plugin_shortcut_pane_g1

0xe78d,	// (0x0005d9d2) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe78d,	// (0x0005d9d2) list_single_idle_plugin_shortcut_pane_g2

0xe7a9,	// (0x0005d9ee) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe7a9,	// (0x0005d9ee) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd69,	// (0x0005efae) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd69,	// (0x0005efae) list_single_idle_plugin_shortcut_pane_g

0xe7be,	// (0x0005da03) cell_ai_shortcut_pane_ParamLimits

0xe7be,	// (0x0005da03) cell_ai_shortcut_pane

0xe7d4,	// (0x0005da19) cell_ai_shortcut_pane_g1_ParamLimits

0xe7d4,	// (0x0005da19) cell_ai_shortcut_pane_g1

0x8f04,	// (0x00058149) ai_gene_pane_1_cp2

0x90f9,	// (0x0005833e) ai_gene_pane_2_cp2

0x9101,	// (0x00058346) list_highlight_pane_cp15

0x910a,	// (0x0005834f) list_single_idle_plugin_calendar_pane_g1

0x9101,	// (0x00058346) list_highlight_pane_cp17

0x9112,	// (0x00058357) list_single_idle_plugin_calendar_pane_g1_copy1

0x911a,	// (0x0005835f) list_single_idle_plugin_player_pane_g1

0x68cd,	// (0x00055b12) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd70,	// (0x0005efb5) list_single_idle_plugin_player_pane_g

0x9122,	// (0x00058367) list_single_idle_plugin_player_pane_t1

0x9130,	// (0x00058375) list_single_idle_plugin_player_pane_t2

0x913e,	// (0x00058383) list_single_idle_plugin_player_pane_t3

0x914c,	// (0x00058391) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd75,	// (0x0005efba) list_single_idle_plugin_player_pane_t

0x915a,	// (0x0005839f) wait_bar_pane_cp15

0x9162,	// (0x000583a7) grid_ai_notification_pane

0x68cd,	// (0x00055b12) list_single_idle_plugin_notification_pane_g1

0xe7f6,	// (0x0005da3b) cell_ai_notification_pane_ParamLimits

0xe7f6,	// (0x0005da3b) cell_ai_notification_pane

0x9178,	// (0x000583bd) cell_ai_notification_pane_g1

0x9180,	// (0x000583c5) cell_ai_notification_pane_t1

0xe803,	// (0x0005da48) tb_ext_find_button_pane

0xe80b,	// (0x0005da50) tb_ext_find_pane_g1

0xe813,	// (0x0005da58) tb_ext_find_pane_t1

0x3b25,	// (0x00052d6a) tb_ext_find_button_pane_g1

0x91ac,	// (0x000583f1) tb_ext_find_button_pane_g2

0x0001,

0xfd7e,	// (0x0005efc3) tb_ext_find_button_pane_g

0xe623,	// (0x0005d868) main_idle_act4_pane_t1_ParamLimits

0xe639,	// (0x0005d87e) main_idle_act4_pane_t2_ParamLimits

0xfd3c,	// (0x0005ef81) main_idle_act4_pane_t_ParamLimits

0xe66b,	// (0x0005d8b0) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe683,	// (0x0005d8c8) sat_plugin_idle_act4_pane_ParamLimits

0xe683,	// (0x0005d8c8) sat_plugin_idle_act4_pane

0xe821,	// (0x0005da66) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe821,	// (0x0005da66) sat_plugin_idle_act4_pane_t1

0xe839,	// (0x0005da7e) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe839,	// (0x0005da7e) sat_plugin_idle_act4_pane_t2

0xe851,	// (0x0005da96) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe851,	// (0x0005da96) sat_plugin_idle_act4_pane_t3

0xe869,	// (0x0005daae) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe869,	// (0x0005daae) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd83,	// (0x0005efc8) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd83,	// (0x0005efc8) sat_plugin_idle_act4_pane_t

0x01ec,	// (0x0004f431) popup_battery_window_ParamLimits

0x01ec,	// (0x0004f431) popup_battery_window

0x2ed0,	// (0x00052115) bg_popup_sub_pane_cp25_ParamLimits

0x2ed0,	// (0x00052115) bg_popup_sub_pane_cp25

0x9201,	// (0x00058446) popup_battery_window_g1_ParamLimits

0x9201,	// (0x00058446) popup_battery_window_g1

0x920d,	// (0x00058452) popup_battery_window_t1_ParamLimits

0x920d,	// (0x00058452) popup_battery_window_t1

0x921f,	// (0x00058464) popup_battery_window_t2_ParamLimits

0x921f,	// (0x00058464) popup_battery_window_t2

0x0001,

0xfd8c,	// (0x0005efd1) popup_battery_window_t_ParamLimits

0xfd8c,	// (0x0005efd1) popup_battery_window_t

0xca44,	// (0x0005bc89) midp_canvas_pane_ParamLimits

0xca9f,	// (0x0005bce4) midp_keypad_pane_ParamLimits

0xca9f,	// (0x0005bce4) midp_keypad_pane

0x4454,	// (0x00053699) main_midp_pane_ParamLimits

0x6fce,	// (0x00056213) signal_pane_g2_cp_ParamLimits

0xe881,	// (0x0005dac6) aid_size_cell_midp_keypad_ParamLimits

0xe881,	// (0x0005dac6) aid_size_cell_midp_keypad

0xe89f,	// (0x0005dae4) midp_keyp_game_grid_pane_ParamLimits

0xe89f,	// (0x0005dae4) midp_keyp_game_grid_pane

0xe8c6,	// (0x0005db0b) midp_keyp_rocker_pane_ParamLimits

0xe8c6,	// (0x0005db0b) midp_keyp_rocker_pane

0xe91f,	// (0x0005db64) midp_keyp_sk_left_pane_ParamLimits

0xe91f,	// (0x0005db64) midp_keyp_sk_left_pane

0xe973,	// (0x0005dbb8) midp_keyp_sk_right_pane_ParamLimits

0xe973,	// (0x0005dbb8) midp_keyp_sk_right_pane

0x242e,	// (0x00051673) bg_button_pane_cp03

0xe9c7,	// (0x0005dc0c) midp_keyp_sk_left_pane_g1

0x242e,	// (0x00051673) bg_button_pane_cp04

0xe9c7,	// (0x0005dc0c) midp_keyp_sk_right_pane_g1

0x751d,	// (0x00056762) midp_keyp_rocker_pane_g1

0xe9d0,	// (0x0005dc15) keyp_game_cell_pane_ParamLimits

0xe9d0,	// (0x0005dc15) keyp_game_cell_pane

0x242e,	// (0x00051673) bg_button_pane_cp02

0xe9f4,	// (0x0005dc39) keyp_game_cell_pane_g1

0xb472,	// (0x0005a6b7) popup_fep_vkb2_window_ParamLimits

0xb472,	// (0x0005a6b7) popup_fep_vkb2_window

0xc093,	// (0x0005b2d8) aid_size_cell_vkb2_ParamLimits

0xc093,	// (0x0005b2d8) aid_size_cell_vkb2

0xc0c9,	// (0x0005b30e) popup_fep_vkb2_window_g1_ParamLimits

0xc0c9,	// (0x0005b30e) popup_fep_vkb2_window_g1

0xc119,	// (0x0005b35e) vkb2_area_bottom_pane_ParamLimits

0xc119,	// (0x0005b35e) vkb2_area_bottom_pane

0xc16d,	// (0x0005b3b2) vkb2_area_keypad_pane_ParamLimits

0xc16d,	// (0x0005b3b2) vkb2_area_keypad_pane

0xc1b5,	// (0x0005b3fa) vkb2_area_top_pane_ParamLimits

0xc1b5,	// (0x0005b3fa) vkb2_area_top_pane

0xc23b,	// (0x0005b480) vkb2_top_entry_pane_ParamLimits

0xc23b,	// (0x0005b480) vkb2_top_entry_pane

0xc268,	// (0x0005b4ad) vkb2_top_grid_left_pane_ParamLimits

0xc268,	// (0x0005b4ad) vkb2_top_grid_left_pane

0xc288,	// (0x0005b4cd) vkb2_top_grid_right_pane_ParamLimits

0xc288,	// (0x0005b4cd) vkb2_top_grid_right_pane

0x1e7a,	// (0x000510bf) vkb2_cell_keypad_pane_ParamLimits

0x1e7a,	// (0x000510bf) vkb2_cell_keypad_pane

0xc2ce,	// (0x0005b513) vkb2_area_bottom_grid_pane_ParamLimits

0xc2ce,	// (0x0005b513) vkb2_area_bottom_grid_pane

0xc2f8,	// (0x0005b53d) vkb2_area_bottom_pane_g1_ParamLimits

0xc2f8,	// (0x0005b53d) vkb2_area_bottom_pane_g1

0xc31e,	// (0x0005b563) vkb2_area_bottom_pane_g2_ParamLimits

0xc31e,	// (0x0005b563) vkb2_area_bottom_pane_g2

0xc34f,	// (0x0005b594) vkb2_area_bottom_pane_g3_ParamLimits

0xc34f,	// (0x0005b594) vkb2_area_bottom_pane_g3

0x0002,

0xfd91,	// (0x0005efd6) vkb2_area_bottom_pane_g_ParamLimits

0xfd91,	// (0x0005efd6) vkb2_area_bottom_pane_g

0x2024,	// (0x00051269) vkb2_top_cell_left_pane_ParamLimits

0x2024,	// (0x00051269) vkb2_top_cell_left_pane

0xe9fd,	// (0x0005dc42) vkb2_top_entry_pane_g1_ParamLimits

0xe9fd,	// (0x0005dc42) vkb2_top_entry_pane_g1

0xea0b,	// (0x0005dc50) vkb2_top_entry_pane_t1_ParamLimits

0xea0b,	// (0x0005dc50) vkb2_top_entry_pane_t1

0x93f1,	// (0x00058636) vkb2_top_entry_pane_t2_ParamLimits

0x93f1,	// (0x00058636) vkb2_top_entry_pane_t2

0x9423,	// (0x00058668) vkb2_top_entry_pane_t3_ParamLimits

0x9423,	// (0x00058668) vkb2_top_entry_pane_t3

0x0002,

0xfd98,	// (0x0005efdd) vkb2_top_entry_pane_t_ParamLimits

0xfd98,	// (0x0005efdd) vkb2_top_entry_pane_t

0xc3b9,	// (0x0005b5fe) vkb2_top_grid_right_pane_g1_ParamLimits

0xc3b9,	// (0x0005b5fe) vkb2_top_grid_right_pane_g1

0x2087,	// (0x000512cc) vkb2_top_grid_right_pane_g2_ParamLimits

0x2087,	// (0x000512cc) vkb2_top_grid_right_pane_g2

0x209f,	// (0x000512e4) vkb2_top_grid_right_pane_g3_ParamLimits

0x209f,	// (0x000512e4) vkb2_top_grid_right_pane_g3

0xc3cf,	// (0x0005b614) vkb2_top_grid_right_pane_g4_ParamLimits

0xc3cf,	// (0x0005b614) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9f,	// (0x0005efe4) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9f,	// (0x0005efe4) vkb2_top_grid_right_pane_g

0x20cd,	// (0x00051312) vkb2_top_cell_left_pane_g1

0x20e4,	// (0x00051329) vkb2_cell_keypad_pane_g1_ParamLimits

0x20e4,	// (0x00051329) vkb2_cell_keypad_pane_g1

0x9447,	// (0x0005868c) vkb2_cell_keypad_pane_t1_ParamLimits

0x9447,	// (0x0005868c) vkb2_cell_keypad_pane_t1

0x20f2,	// (0x00051337) vkb2_cell_bottom_grid_pane_ParamLimits

0x20f2,	// (0x00051337) vkb2_cell_bottom_grid_pane

0x212b,	// (0x00051370) vkb2_cell_bottom_grid_pane_g1

0xe6b4,	// (0x0005d8f9) aid_call2_pane_cp02

0xe6bc,	// (0x0005d901) aid_call_pane_cp02

0xe6c4,	// (0x0005d909) clock_digital_number_pane_cp10

0xe6cc,	// (0x0005d911) clock_digital_number_pane_cp11

0xe6d4,	// (0x0005d919) clock_digital_number_pane_cp12

0xe6dc,	// (0x0005d921) clock_digital_number_pane_cp13

0xe6e4,	// (0x0005d929) clock_digital_separator_pane_cp10

0x3b25,	// (0x00052d6a) popup_clock_digital_analogue_window_cp2_g1

0x3b25,	// (0x00052d6a) popup_clock_digital_analogue_window_cp2_g2

0xe6ec,	// (0x0005d931) popup_clock_digital_analogue_window_cp2_g3

0x3b25,	// (0x00052d6a) popup_clock_digital_analogue_window_cp2_g4

0xe6ec,	// (0x0005d931) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd54,	// (0x0005ef99) popup_clock_digital_analogue_window_cp2_g

0xe6f4,	// (0x0005d939) popup_clock_digital_analogue_window_cp2_t1

0xe702,	// (0x0005d947) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5f,	// (0x0005efa4) popup_clock_digital_analogue_window_cp2_t

0x751d,	// (0x00056762) clock_digital_number_pane_cp10_g1

0x751d,	// (0x00056762) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3b,	// (0x0005ed80) clock_digital_number_pane_cp10_g

0x751d,	// (0x00056762) clock_digital_separator_pane_cp10_g1

0x751d,	// (0x00056762) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3b,	// (0x0005ed80) clock_digital_separator_pane_cp10_g

0x8e4d,	// (0x00058092) uniindi_top_pane_g3

0x8e5e,	// (0x000580a3) uniindi_top_pane_g4

0x1f05,	// (0x0005114a) vkb2_row_keypad_pane_ParamLimits

0x1f05,	// (0x0005114a) vkb2_row_keypad_pane

0x2147,	// (0x0005138c) vkb2_cell_t_keypad_pane_ParamLimits

0x2147,	// (0x0005138c) vkb2_cell_t_keypad_pane

0x2157,	// (0x0005139c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2157,	// (0x0005139c) vkb2_cell_t_keypad_pane_cp08

0x216a,	// (0x000513af) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x216a,	// (0x000513af) vkb2_cell_t_keypad_pane_cp09

0x217e,	// (0x000513c3) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x217e,	// (0x000513c3) vkb2_cell_t_keypad_pane_cp01

0x218f,	// (0x000513d4) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x218f,	// (0x000513d4) vkb2_cell_t_keypad_pane_cp02

0x21a0,	// (0x000513e5) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x21a0,	// (0x000513e5) vkb2_cell_t_keypad_pane_cp03

0x21b1,	// (0x000513f6) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x21b1,	// (0x000513f6) vkb2_cell_t_keypad_pane_cp04

0x21c2,	// (0x00051407) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x21c2,	// (0x00051407) vkb2_cell_t_keypad_pane_cp05

0x21d3,	// (0x00051418) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x21d3,	// (0x00051418) vkb2_cell_t_keypad_pane_cp06

0x21e4,	// (0x00051429) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x21e4,	// (0x00051429) vkb2_cell_t_keypad_pane_cp07

0x21f5,	// (0x0005143a) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x21f5,	// (0x0005143a) vkb2_cell_t_keypad_pane_cp10

0x19aa,	// (0x00050bef) vkb2_cell_t_keypad_pane_g1

0x945e,	// (0x000586a3) vkb2_cell_t_keypad_pane_t1

0x0127,	// (0x0004f36c) popup_grid_graphic2_window

0xea44,	// (0x0005dc89) aid_size_cell_graphic2_ParamLimits

0xea44,	// (0x0005dc89) aid_size_cell_graphic2

0xea82,	// (0x0005dcc7) bg_popup_window_pane_cp21_ParamLimits

0xea82,	// (0x0005dcc7) bg_popup_window_pane_cp21

0xea90,	// (0x0005dcd5) graphic2_pages_pane_ParamLimits

0xea90,	// (0x0005dcd5) graphic2_pages_pane

0xeae6,	// (0x0005dd2b) grid_graphic2_control_pane_ParamLimits

0xeae6,	// (0x0005dd2b) grid_graphic2_control_pane

0xeb2e,	// (0x0005dd73) grid_graphic2_pane_ParamLimits

0xeb2e,	// (0x0005dd73) grid_graphic2_pane

0xebb5,	// (0x0005ddfa) cell_graphic2_pane

0x242e,	// (0x00051673) main_comp_mode_pane

0x86cd,	// (0x00057912) list_ai3_gene_pane_ParamLimits

0xe3fb,	// (0x0005d640) bg_popup_window_pane_cp19_ParamLimits

0x8aa3,	// (0x00057ce8) bg_touch_area_indi_pane_ParamLimits

0x8aa3,	// (0x00057ce8) bg_touch_area_indi_pane

0x8ab9,	// (0x00057cfe) bg_touch_area_indi_pane_cp01_ParamLimits

0x8ab9,	// (0x00057cfe) bg_touch_area_indi_pane_cp01

0x8acf,	// (0x00057d14) bg_touch_area_indi_pane_cp02_ParamLimits

0x8acf,	// (0x00057d14) bg_touch_area_indi_pane_cp02

0x8ae7,	// (0x00057d2c) bg_touch_area_indi_pane_cp03_ParamLimits

0x8ae7,	// (0x00057d2c) bg_touch_area_indi_pane_cp03

0x8b01,	// (0x00057d46) popup_slider_window_g1_ParamLimits

0x8b1d,	// (0x00057d62) popup_slider_window_g2_ParamLimits

0x8b39,	// (0x00057d7e) popup_slider_window_g3_ParamLimits

0xfce9,	// (0x0005ef2e) popup_slider_window_g_ParamLimits

0x8b95,	// (0x00057dda) popup_slider_window_t1_ParamLimits

0x8c09,	// (0x00057e4e) small_volume_slider_vertical_pane_ParamLimits

0xebb5,	// (0x0005ddfa) cell_graphic2_pane_ParamLimits

0xec12,	// (0x0005de57) bg_button_pane_cp10_ParamLimits

0xec12,	// (0x0005de57) bg_button_pane_cp10

0xec25,	// (0x0005de6a) bg_button_pane_cp11_ParamLimits

0xec25,	// (0x0005de6a) bg_button_pane_cp11

0xec38,	// (0x0005de7d) graphic2_pages_pane_g1_ParamLimits

0xec38,	// (0x0005de7d) graphic2_pages_pane_g1

0xec53,	// (0x0005de98) graphic2_pages_pane_g2_ParamLimits

0xec53,	// (0x0005de98) graphic2_pages_pane_g2

0x0001,

0xfdad,	// (0x0005eff2) graphic2_pages_pane_g_ParamLimits

0xfdad,	// (0x0005eff2) graphic2_pages_pane_g

0xec6b,	// (0x0005deb0) graphic2_pages_pane_t1_ParamLimits

0xec6b,	// (0x0005deb0) graphic2_pages_pane_t1

0xec83,	// (0x0005dec8) cell_graphic2_control_pane_ParamLimits

0xec83,	// (0x0005dec8) cell_graphic2_control_pane

0xecb5,	// (0x0005defa) cell_graphic2_pane_g1_ParamLimits

0xecb5,	// (0x0005defa) cell_graphic2_pane_g1

0xe370,	// (0x0005d5b5) cell_graphic2_pane_g2_ParamLimits

0xe370,	// (0x0005d5b5) cell_graphic2_pane_g2

0xe38a,	// (0x0005d5cf) cell_graphic2_pane_g3_ParamLimits

0xe38a,	// (0x0005d5cf) cell_graphic2_pane_g3

0xe37d,	// (0x0005d5c2) cell_graphic2_pane_g4_ParamLimits

0xe37d,	// (0x0005d5c2) cell_graphic2_pane_g4

0xecc2,	// (0x0005df07) cell_graphic2_pane_g5_ParamLimits

0xecc2,	// (0x0005df07) cell_graphic2_pane_g5

0x0004,

0xfdb2,	// (0x0005eff7) cell_graphic2_pane_g_ParamLimits

0xfdb2,	// (0x0005eff7) cell_graphic2_pane_g

0xece2,	// (0x0005df27) cell_graphic2_pane_t1_ParamLimits

0xece2,	// (0x0005df27) cell_graphic2_pane_t1

0x5c68,	// (0x00054ead) grid_highlight_pane_cp11_ParamLimits

0x5c68,	// (0x00054ead) grid_highlight_pane_cp11

0x2ed0,	// (0x00052115) bg_button_pane_cp05

0xed17,	// (0x0005df5c) cell_graphic2_control_pane_g1

0x751d,	// (0x00056762) bg_touch_area_indi_pane_g1

0x972e,	// (0x00058973) aid_cmod_rocker_key_size

0x9738,	// (0x0005897d) aid_cmode_itu_key_size

0x9742,	// (0x00058987) main_cmode_video_pane

0x974c,	// (0x00058991) main_comp_mode_itu_pane

0x9758,	// (0x0005899d) main_comp_mode_rocker_pane

0x9764,	// (0x000589a9) cell_cmode_rocker_pane_ParamLimits

0x9764,	// (0x000589a9) cell_cmode_rocker_pane

0x9776,	// (0x000589bb) cell_cmode_itu_pane_ParamLimits

0x9776,	// (0x000589bb) cell_cmode_itu_pane

0x34b3,	// (0x000526f8) bg_button_pane_cp06_ParamLimits

0x34b3,	// (0x000526f8) bg_button_pane_cp06

0x77af,	// (0x000569f4) cell_cmode_rocker_pane_g1_ParamLimits

0x77af,	// (0x000569f4) cell_cmode_rocker_pane_g1

0x8cad,	// (0x00057ef2) cell_cmode_rocker_pane_g2_ParamLimits

0x8cad,	// (0x00057ef2) cell_cmode_rocker_pane_g2

0x0001,

0xfdc2,	// (0x0005f007) cell_cmode_rocker_pane_g_ParamLimits

0xfdc2,	// (0x0005f007) cell_cmode_rocker_pane_g

0x242e,	// (0x00051673) bg_button_pane_cp07

0x978b,	// (0x000589d0) cell_cmode_itu_pane_g1

0x9794,	// (0x000589d9) cell_cmode_itu_pane_t1

0x97a2,	// (0x000589e7) cell_cmode_itu_pane_t2

0x0001,

0xfdc7,	// (0x0005f00c) cell_cmode_itu_pane_t

0x8ed0,	// (0x00058115) aid_touch_ctrl_left

0x8ed8,	// (0x0005811d) aid_touch_ctrl_right

0x242e,	// (0x00051673) compa_mode_pane

0xed3d,	// (0x0005df82) aid_cmod_rocker_key_size_cp

0xed47,	// (0x0005df8c) aid_cmode_itu_key_size_cp

0x97c4,	// (0x00058a09) compa_mode_pane_g1

0x97cc,	// (0x00058a11) compa_mode_pane_g2

0x97d4,	// (0x00058a19) compa_mode_pane_g3

0x0002,

0xfdcc,	// (0x0005f011) compa_mode_pane_g

0xed51,	// (0x0005df96) main_comp_mode_itu_pane_cp

0xed59,	// (0x0005df9e) main_comp_mode_rocker_pane_cp

0xed61,	// (0x0005dfa6) cell_cmode_itu_pane_cp_ParamLimits

0xed61,	// (0x0005dfa6) cell_cmode_itu_pane_cp

0xed76,	// (0x0005dfbb) cell_cmode_rocker_pane_cp_ParamLimits

0xed76,	// (0x0005dfbb) cell_cmode_rocker_pane_cp

0x34b3,	// (0x000526f8) bg_button_pane_cp06_cp_ParamLimits

0x34b3,	// (0x000526f8) bg_button_pane_cp06_cp

0x77af,	// (0x000569f4) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x77af,	// (0x000569f4) cell_cmode_rocker_pane_g1_cp

0x751d,	// (0x00056762) cell_cmode_rocker_pane_g2_cp

0x242e,	// (0x00051673) bg_button_pane_cp07_cp

0xed88,	// (0x0005dfcd) cell_cmode_itu_pane_g1_cp

0xed91,	// (0x0005dfd6) cell_cmode_itu_pane_t1_cp

0xed91,	// (0x0005dfd6) cell_cmode_itu_pane_t2_cp

0xda0d,	// (0x0005cc52) settings_code_pane_cp2

0x2522,	// (0x00051767) bg_popup_window_pane_cp3_ParamLimits

0x30aa,	// (0x000522ef) heading_pane_cp3_ParamLimits

0x30b6,	// (0x000522fb) listscroll_popup_graphic_pane_ParamLimits

0x1753,	// (0x00050998) fep_hwr_aid_pane_ParamLimits

0x1bcb,	// (0x00050e10) aid_touch_sctrl_top_ParamLimits

0x1be6,	// (0x00050e2b) sctrl_sk_top_pane_g1_ParamLimits

0x19aa,	// (0x00050bef) sctrl_sk_top_pane_g2_ParamLimits

0xfd02,	// (0x0005ef47) sctrl_sk_top_pane_g_ParamLimits

0x1bf3,	// (0x00050e38) sctrl_sk_top_pane_t1_ParamLimits

0x1bcb,	// (0x00050e10) aid_touch_sctrl_bottom_ParamLimits

0x1bf3,	// (0x00050e38) sctrl_sk_bottom_pane_t1_ParamLimits

0x8e19,	// (0x0005805e) aid_area_touch_clock

0xc1fd,	// (0x0005b442) aid_vkb2_area_top_pane_cell_ParamLimits

0xc1fd,	// (0x0005b442) aid_vkb2_area_top_pane_cell

0xc2a8,	// (0x0005b4ed) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc2a8,	// (0x0005b4ed) aid_vkb2_area_bottom_pane_cell

0x93a9,	// (0x000585ee) popup_char_count_window

0x9821,	// (0x00058a66) popup_char_count_window_g1

0x982a,	// (0x00058a6f) popup_char_count_window_g2

0x9833,	// (0x00058a78) popup_char_count_window_g3

0x0002,

0xfdd3,	// (0x0005f018) popup_char_count_window_g

0x983c,	// (0x00058a81) popup_char_count_window_t1

0x1ca2,	// (0x00050ee7) popup_fep_char_preview_window_ParamLimits

0x1ca2,	// (0x00050ee7) popup_fep_char_preview_window

0xc21d,	// (0x0005b462) vkb2_top_candi_pane_ParamLimits

0xc21d,	// (0x0005b462) vkb2_top_candi_pane

0xed9f,	// (0x0005dfe4) cell_vkb2_top_candi_pane_ParamLimits

0xed9f,	// (0x0005dfe4) cell_vkb2_top_candi_pane

0x220a,	// (0x0005144f) bg_popup_fep_char_preview_window_ParamLimits

0x220a,	// (0x0005144f) bg_popup_fep_char_preview_window

0x2218,	// (0x0005145d) popup_fep_char_preview_window_t1_ParamLimits

0x2218,	// (0x0005145d) popup_fep_char_preview_window_t1

0x9897,	// (0x00058adc) bg_popup_fep_char_preview_window_g1

0x989f,	// (0x00058ae4) bg_popup_fep_char_preview_window_g2

0x98a7,	// (0x00058aec) bg_popup_fep_char_preview_window_g3

0x98af,	// (0x00058af4) bg_popup_fep_char_preview_window_g4

0x98b7,	// (0x00058afc) bg_popup_fep_char_preview_window_g5

0x2252,	// (0x00051497) bg_popup_fep_char_preview_window_g6

0x98bf,	// (0x00058b04) bg_popup_fep_char_preview_window_g7

0x98c7,	// (0x00058b0c) bg_popup_fep_char_preview_window_g8

0x98cf,	// (0x00058b14) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdda,	// (0x0005f01f) bg_popup_fep_char_preview_window_g

0x19aa,	// (0x00050bef) cell_vkb2_top_candi_pane_g1_ParamLimits

0x19aa,	// (0x00050bef) cell_vkb2_top_candi_pane_g1

0x19b8,	// (0x00050bfd) cell_vkb2_top_candi_pane_g2_ParamLimits

0x19b8,	// (0x00050bfd) cell_vkb2_top_candi_pane_g2

0x923c,	// (0x00058481) cell_vkb2_top_candi_pane_g3_ParamLimits

0x923c,	// (0x00058481) cell_vkb2_top_candi_pane_g3

0x225a,	// (0x0005149f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x225a,	// (0x0005149f) cell_vkb2_top_candi_pane_g4

0x7c8e,	// (0x00056ed3) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7c8e,	// (0x00056ed3) cell_vkb2_top_candi_pane_g5

0x227b,	// (0x000514c0) cell_vkb2_top_candi_pane_g6_ParamLimits

0x227b,	// (0x000514c0) cell_vkb2_top_candi_pane_g6

0x0005,

0xfded,	// (0x0005f032) cell_vkb2_top_candi_pane_g_ParamLimits

0xfded,	// (0x0005f032) cell_vkb2_top_candi_pane_g

0x2289,	// (0x000514ce) cell_vkb2_top_candi_pane_t1

0x153a,	// (0x0005077f) aid_size_touch_slider_mark_ParamLimits

0x153a,	// (0x0005077f) aid_size_touch_slider_mark

0xeacc,	// (0x0005dd11) grid_graphic2_catg_pane_ParamLimits

0xeacc,	// (0x0005dd11) grid_graphic2_catg_pane

0xeb88,	// (0x0005ddcd) popup_grid_graphic2_window_t1_ParamLimits

0xeb88,	// (0x0005ddcd) popup_grid_graphic2_window_t1

0xeb9e,	// (0x0005dde3) popup_grid_graphic2_window_t2_ParamLimits

0xeb9e,	// (0x0005dde3) popup_grid_graphic2_window_t2

0x0001,

0xfda8,	// (0x0005efed) popup_grid_graphic2_window_t_ParamLimits

0xfda8,	// (0x0005efed) popup_grid_graphic2_window_t

0x2ed0,	// (0x00052115) bg_button_pane_cp05_ParamLimits

0xed17,	// (0x0005df5c) cell_graphic2_control_pane_g1_ParamLimits

0xee05,	// (0x0005e04a) cell_graphic2_catg_pane_ParamLimits

0xee05,	// (0x0005e04a) cell_graphic2_catg_pane

0x242e,	// (0x00051673) bg_button_pane_cp12

0xee17,	// (0x0005e05c) cell_graphic2_catg_pane_g1

0x8de5,	// (0x0005802a) cell_tb_ext_pane_t1_ParamLimits

0x2044,	// (0x00051289) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2044,	// (0x00051289) vkb2_top_cell_right_narrow_pane

0x205c,	// (0x000512a1) vkb2_top_cell_right_wide_pane_ParamLimits

0x205c,	// (0x000512a1) vkb2_top_cell_right_wide_pane

0x1745,	// (0x0005098a) bg_vkb2_func_pane_ParamLimits

0x1745,	// (0x0005098a) bg_vkb2_func_pane

0x20cd,	// (0x00051312) vkb2_top_cell_left_pane_g1_ParamLimits

0x1745,	// (0x0005098a) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1745,	// (0x0005098a) bg_vkb2_fuc_pane_cp03

0x212b,	// (0x00051370) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4f20,	// (0x00054165) bg_vkb2_func_pane_g1

0x4f28,	// (0x0005416d) bg_vkb2_func_pane_g2

0x4f38,	// (0x0005417d) bg_vkb2_func_pane_g3

0x4f30,	// (0x00054175) bg_vkb2_func_pane_g4

0x4f40,	// (0x00054185) bg_vkb2_func_pane_g5

0x4f48,	// (0x0005418d) bg_vkb2_func_pane_g6

0x4f50,	// (0x00054195) bg_vkb2_func_pane_g7

0x4f58,	// (0x0005419d) bg_vkb2_func_pane_g8

0x4f18,	// (0x0005415d) bg_vkb2_func_pane_g9

0x0008,

0xfdfa,	// (0x0005f03f) bg_vkb2_func_pane_g

0x1745,	// (0x0005098a) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1745,	// (0x0005098a) bg_vkb2_fuc_pane_cp01

0x20cd,	// (0x00051312) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x20cd,	// (0x00051312) vkb2_top_cell_right_wide_pane_g1

0x1745,	// (0x0005098a) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1745,	// (0x0005098a) bg_vkb2_fuc_pane_cp02

0x212b,	// (0x00051370) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x212b,	// (0x00051370) vkb2_top_cell_right_narrow_pane_g1

0xe306,	// (0x0005d54b) aid_touch_area_decrease_ParamLimits

0xe306,	// (0x0005d54b) aid_touch_area_decrease

0xe33a,	// (0x0005d57f) aid_touch_area_increase_ParamLimits

0xe33a,	// (0x0005d57f) aid_touch_area_increase

0xe397,	// (0x0005d5dc) aid_touch_area_mute_ParamLimits

0xe397,	// (0x0005d5dc) aid_touch_area_mute

0xe3c7,	// (0x0005d60c) aid_touch_area_slider_ParamLimits

0xe3c7,	// (0x0005d60c) aid_touch_area_slider

0xe407,	// (0x0005d64c) popup_slider_window_g4_ParamLimits

0xe407,	// (0x0005d64c) popup_slider_window_g4

0xe42f,	// (0x0005d674) popup_slider_window_g5_ParamLimits

0xe42f,	// (0x0005d674) popup_slider_window_g5

0xe463,	// (0x0005d6a8) popup_slider_window_g6_ParamLimits

0xe463,	// (0x0005d6a8) popup_slider_window_g6

0x8bc3,	// (0x00057e08) popup_slider_window_t2_ParamLimits

0x8bc3,	// (0x00057e08) popup_slider_window_t2

0x0001,

0xfcf6,	// (0x0005ef3b) popup_slider_window_t_ParamLimits

0xfcf6,	// (0x0005ef3b) popup_slider_window_t

0xe47f,	// (0x0005d6c4) slider_pane_ParamLimits

0xe47f,	// (0x0005d6c4) slider_pane

0x98f2,	// (0x00058b37) slider_pane_g1_ParamLimits

0x98f2,	// (0x00058b37) slider_pane_g1

0x9906,	// (0x00058b4b) slider_pane_g2_ParamLimits

0x9906,	// (0x00058b4b) slider_pane_g2

0x991c,	// (0x00058b61) slider_pane_g3_ParamLimits

0x991c,	// (0x00058b61) slider_pane_g3

0x0003,

0xfe0d,	// (0x0005f052) slider_pane_g_ParamLimits

0xfe0d,	// (0x0005f052) slider_pane_g

0xd1d9,	// (0x0005c41e) popup_tb_float_extension_window_ParamLimits

0xd1d9,	// (0x0005c41e) popup_tb_float_extension_window

0x9948,	// (0x00058b8d) aid_size_cell_tb_float_ext

0x242e,	// (0x00051673) bg_popup_sub_window_cp28

0x9954,	// (0x00058b99) grid_tb_float_ext_pane

0x995e,	// (0x00058ba3) cell_tb_float_ext_pane_ParamLimits

0x995e,	// (0x00058ba3) cell_tb_float_ext_pane

0x9978,	// (0x00058bbd) cell_tb_float_ext_pane_g1

0x9981,	// (0x00058bc6) grid_highlight_pane_cp12

0xbf05,	// (0x0005b14a) cell_last_hwr_side_pane_ParamLimits

0xbf05,	// (0x0005b14a) cell_last_hwr_side_pane

0x751d,	// (0x00056762) cell_last_hwr_side_pane_g1

0x998a,	// (0x00058bcf) cell_last_hwr_side_pane_g2

0x0001,

0xfe16,	// (0x0005f05b) cell_last_hwr_side_pane_g

0xc384,	// (0x0005b5c9) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc384,	// (0x0005b5c9) vkb2_area_bottom_space_btn_pane

0x19aa,	// (0x00050bef) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x945e,	// (0x000586a3) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2289,	// (0x000514ce) cell_vkb2_top_candi_pane_t1_ParamLimits

0x22a8,	// (0x000514ed) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x22a8,	// (0x000514ed) vkb2_area_bottom_space_btn_pane_g1

0x22e2,	// (0x00051527) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x22e2,	// (0x00051527) vkb2_area_bottom_space_btn_pane_g2

0x2318,	// (0x0005155d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2318,	// (0x0005155d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1b,	// (0x0005f060) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1b,	// (0x0005f060) vkb2_area_bottom_space_btn_pane_g

0x1808,	// (0x00050a4d) cel_fep_hwr_func_pane_ParamLimits

0x1808,	// (0x00050a4d) cel_fep_hwr_func_pane

0xbeda,	// (0x0005b11f) cell_hwr_side_button_pane_ParamLimits

0xbeda,	// (0x0005b11f) cell_hwr_side_button_pane

0x8e19,	// (0x0005805e) aid_area_touch_clock_ParamLimits

0x2ed0,	// (0x00052115) bg_uniindi_top_pane_ParamLimits

0x8e2b,	// (0x00058070) uniindi_top_pane_g1_ParamLimits

0x8e41,	// (0x00058086) uniindi_top_pane_g2_ParamLimits

0x8e4d,	// (0x00058092) uniindi_top_pane_g3_ParamLimits

0x8e5e,	// (0x000580a3) uniindi_top_pane_g4_ParamLimits

0xfd2e,	// (0x0005ef73) uniindi_top_pane_g_ParamLimits

0x8e6b,	// (0x000580b0) uniindi_top_pane_t1_ParamLimits

0x2ed0,	// (0x00052115) bg_vkb2_func_pane_cp01_ParamLimits

0x2ed0,	// (0x00052115) bg_vkb2_func_pane_cp01

0x9993,	// (0x00058bd8) cel_fep_hwr_func_pane_g1_ParamLimits

0x9993,	// (0x00058bd8) cel_fep_hwr_func_pane_g1

0x2ed0,	// (0x00052115) bg_vkb2_func_pane_cp02_ParamLimits

0x2ed0,	// (0x00052115) bg_vkb2_func_pane_cp02

0x9993,	// (0x00058bd8) cell_hwr_side_button_pane_g1_ParamLimits

0x9993,	// (0x00058bd8) cell_hwr_side_button_pane_g1

0x4d8d,	// (0x00053fd2) status_pane_g4_ParamLimits

0x4d8d,	// (0x00053fd2) status_pane_g4

0x4da7,	// (0x00053fec) status_pane_t1

0x7256,	// (0x0005649b) form2_midp_gauge_slider_cont_pane

0x725e,	// (0x000564a3) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdd04,	// (0x0005cf49) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdd16,	// (0x0005cf5b) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaee,	// (0x0005ed33) form2_midp_gauge_slider_pane_t_ParamLimits

0x7294,	// (0x000564d9) form2_midp_slider_pane_ParamLimits

0x1c62,	// (0x00050ea7) aid_size_cell_func_vkb2_ParamLimits

0x1c62,	// (0x00050ea7) aid_size_cell_func_vkb2

0x9934,	// (0x00058b79) slider_pane_g4_ParamLimits

0x9934,	// (0x00058b79) slider_pane_g4

0xc3e5,	// (0x0005b62a) form2_midp_gauge_slider_pane_t2_cp01

0xc3f3,	// (0x0005b638) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc3f3,	// (0x0005b638) form2_midp_gauge_slider_pane_t3_cp01

0x238d,	// (0x000515d2) form2_midp_slider_pane_cp01

0x242e,	// (0x00051673) navi_smil_pane

0x99cc,	// (0x00058c11) navi_smil_pane_g1

0x99d4,	// (0x00058c19) navi_smil_pane_t1

0x99a1,	// (0x00058be6) form2_midp_slider_pane_g1

0x99aa,	// (0x00058bef) form2_midp_slider_pane_g2

0x99b2,	// (0x00058bf7) form2_midp_slider_pane_g3

0x99a1,	// (0x00058be6) form2_midp_slider_pane_g4

0xee20,	// (0x0005e065) form2_midp_slider_pane_g5

0x0004,

0xfe24,	// (0x0005f069) form2_midp_slider_pane_g

0x2352,	// (0x00051597) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2352,	// (0x00051597) vkb2_area_bottom_space_btn_pane_g4

0xd3b5,	// (0x0005c5fa) lc0_navi_pane_ParamLimits

0xd3b5,	// (0x0005c5fa) lc0_navi_pane

0xd41f,	// (0x0005c664) lc0_stat_indi_pane_ParamLimits

0xd41f,	// (0x0005c664) lc0_stat_indi_pane

0xd434,	// (0x0005c679) ls0_title_pane_ParamLimits

0xd434,	// (0x0005c679) ls0_title_pane

0x34b3,	// (0x000526f8) bg_popup_sub_pane_cp14_ParamLimits

0x8e00,	// (0x00058045) list_uniindi_pane_ParamLimits

0x8e0c,	// (0x00058051) uniindi_top_pane_ParamLimits

0x8ea8,	// (0x000580ed) list_single_uniindi_pane_g1_ParamLimits

0x8ebb,	// (0x00058100) list_single_uniindi_pane_t1_ParamLimits

0xc410,	// (0x0005b655) lc0_stat_clock_pane_ParamLimits

0xc410,	// (0x0005b655) lc0_stat_clock_pane

0xee29,	// (0x0005e06e) lc0_stat_indi_pane_g1_ParamLimits

0xee29,	// (0x0005e06e) lc0_stat_indi_pane_g1

0xee36,	// (0x0005e07b) lc0_stat_indi_pane_g2_ParamLimits

0xee36,	// (0x0005e07b) lc0_stat_indi_pane_g2

0x0001,

0xfe2f,	// (0x0005f074) lc0_stat_indi_pane_g_ParamLimits

0xfe2f,	// (0x0005f074) lc0_stat_indi_pane_g

0xc41d,	// (0x0005b662) lc0_uni_indicator_pane_ParamLimits

0xc41d,	// (0x0005b662) lc0_uni_indicator_pane

0x99fc,	// (0x00058c41) ls0_title_pane_g1_ParamLimits

0x99fc,	// (0x00058c41) ls0_title_pane_g1

0xee43,	// (0x0005e088) ls0_title_pane_t1_ParamLimits

0xee43,	// (0x0005e088) ls0_title_pane_t1

0xc42a,	// (0x0005b66f) lc0_uni_indicator_pane_g1_ParamLimits

0xc42a,	// (0x0005b66f) lc0_uni_indicator_pane_g1

0x9a46,	// (0x00058c8b) lc0_stat_clock_pane_t1

0x242e,	// (0x00051673) main_ai5_pane

0x9a54,	// (0x00058c99) ai5_sk_pane_ParamLimits

0x9a54,	// (0x00058c99) ai5_sk_pane

0xee71,	// (0x0005e0b6) cell_ai5_widget_pane_ParamLimits

0xee71,	// (0x0005e0b6) cell_ai5_widget_pane

0x9ae3,	// (0x00058d28) aid_size_cell_widget_grid

0x9af7,	// (0x00058d3c) bg_ai5_widget_pane_ParamLimits

0x9af7,	// (0x00058d3c) bg_ai5_widget_pane

0xeefa,	// (0x0005e13f) cell_ai5_widget_pane_g2

0xef0a,	// (0x0005e14f) cell_ai5_widget_pane_g3

0xef29,	// (0x0005e16e) cell_ai5_widget_pane_g4

0xef35,	// (0x0005e17a) cell_ai5_widget_pane_g5

0xef41,	// (0x0005e186) cell_ai5_widget_pane_g6

0xef4d,	// (0x0005e192) cell_ai5_widget_pane_g7

0xef95,	// (0x0005e1da) cell_ai5_widget_pane_t1_ParamLimits

0xef95,	// (0x0005e1da) cell_ai5_widget_pane_t1

0xefb2,	// (0x0005e1f7) cell_ai5_widget_pane_t2_ParamLimits

0xefb2,	// (0x0005e1f7) cell_ai5_widget_pane_t2

0xefca,	// (0x0005e20f) cell_ai5_widget_pane_t3_ParamLimits

0xefca,	// (0x0005e20f) cell_ai5_widget_pane_t3

0xefe2,	// (0x0005e227) cell_ai5_widget_pane_t4_ParamLimits

0xefe2,	// (0x0005e227) cell_ai5_widget_pane_t4

0xeffc,	// (0x0005e241) cell_ai5_widget_pane_t5_ParamLimits

0xeffc,	// (0x0005e241) cell_ai5_widget_pane_t5

0x9c40,	// (0x00058e85) cell_ai5_widget_pane_t6_ParamLimits

0x9c40,	// (0x00058e85) cell_ai5_widget_pane_t6

0x9c52,	// (0x00058e97) cell_ai5_widget_pane_t7_ParamLimits

0x9c52,	// (0x00058e97) cell_ai5_widget_pane_t7

0xf01b,	// (0x0005e260) cell_ai5_widget_pane_t8_ParamLimits

0xf01b,	// (0x0005e260) cell_ai5_widget_pane_t8

0x0009,

0xfe49,	// (0x0005f08e) cell_ai5_widget_pane_t_ParamLimits

0xfe49,	// (0x0005f08e) cell_ai5_widget_pane_t

0xf067,	// (0x0005e2ac) grid_ai5_widget_pane

0x34b3,	// (0x000526f8) highlight_cell_ai5_widget_pane_ParamLimits

0x34b3,	// (0x000526f8) highlight_cell_ai5_widget_pane

0xf07f,	// (0x0005e2c4) ai5_sk_left_pane

0xf089,	// (0x0005e2ce) ai5_sk_middle_pane

0xf093,	// (0x0005e2d8) ai5_sk_right_pane

0x9ced,	// (0x00058f32) bg_ai5_widget_pane_g1_ParamLimits

0x9ced,	// (0x00058f32) bg_ai5_widget_pane_g1

0x9cf9,	// (0x00058f3e) bg_ai5_widget_pane_g2_ParamLimits

0x9cf9,	// (0x00058f3e) bg_ai5_widget_pane_g2

0x9d05,	// (0x00058f4a) bg_ai5_widget_pane_g3_ParamLimits

0x9d05,	// (0x00058f4a) bg_ai5_widget_pane_g3

0x9d11,	// (0x00058f56) bg_ai5_widget_pane_g4_ParamLimits

0x9d11,	// (0x00058f56) bg_ai5_widget_pane_g4

0x9d1d,	// (0x00058f62) bg_ai5_widget_pane_g5_ParamLimits

0x9d1d,	// (0x00058f62) bg_ai5_widget_pane_g5

0x9d29,	// (0x00058f6e) bg_ai5_widget_pane_g6_ParamLimits

0x9d29,	// (0x00058f6e) bg_ai5_widget_pane_g6

0x9d35,	// (0x00058f7a) bg_ai5_widget_pane_g7_ParamLimits

0x9d35,	// (0x00058f7a) bg_ai5_widget_pane_g7

0x9d41,	// (0x00058f86) bg_ai5_widget_pane_g8_ParamLimits

0x9d41,	// (0x00058f86) bg_ai5_widget_pane_g8

0x9d4d,	// (0x00058f92) bg_ai5_widget_pane_g9_ParamLimits

0x9d4d,	// (0x00058f92) bg_ai5_widget_pane_g9

0x0008,

0xfe5e,	// (0x0005f0a3) bg_ai5_widget_pane_g_ParamLimits

0xfe5e,	// (0x0005f0a3) bg_ai5_widget_pane_g

0x9d80,	// (0x00058fc5) cell_shortcut_ai5_widget_pane_ParamLimits

0x9d80,	// (0x00058fc5) cell_shortcut_ai5_widget_pane

0x25eb,	// (0x00051830) bg_cell_shortcut_ai5_widget_pane

0x9d91,	// (0x00058fd6) cell_grid_ai5_widget_pane_g1

0x9d9a,	// (0x00058fdf) highlight_cell_shortcut_ai5_widget_pane

0x4f20,	// (0x00054165) ai5_sk_left_pane_g1

0x9da2,	// (0x00058fe7) ai5_sk_left_pane_g2

0x9daa,	// (0x00058fef) ai5_sk_left_pane_g3

0x9db2,	// (0x00058ff7) ai5_sk_left_pane_g4

0x0003,

0xfe71,	// (0x0005f0b6) ai5_sk_left_pane_g

0x9dba,	// (0x00058fff) ai5_sk_left_pane_t1

0x4f28,	// (0x0005416d) ai5_sk_right_pane_g1

0x9dc8,	// (0x0005900d) ai5_sk_right_pane_g2

0x9dd0,	// (0x00059015) ai5_sk_right_pane_g3

0x9dd8,	// (0x0005901d) ai5_sk_right_pane_g4

0x0003,

0xfe7a,	// (0x0005f0bf) ai5_sk_right_pane_g

0x9de0,	// (0x00059025) ai5_sk_right_pane_t1

0x4f28,	// (0x0005416d) ai5_sk_middle_pane_g1

0x4f20,	// (0x00054165) ai5_sk_middle_pane_g2

0x4f40,	// (0x00054185) ai5_sk_middle_pane_g3

0x9dd0,	// (0x00059015) ai5_sk_middle_pane_g4

0x9daa,	// (0x00058fef) ai5_sk_middle_pane_g5

0x9dee,	// (0x00059033) ai5_sk_middle_pane_g6

0xf09d,	// (0x0005e2e2) ai5_sk_middle_pane_g7

0x0006,

0xfe83,	// (0x0005f0c8) ai5_sk_middle_pane_g

0xd2a1,	// (0x0005c4e6) aid_touch_area_size_lc0_ParamLimits

0xd2a1,	// (0x0005c4e6) aid_touch_area_size_lc0

0x19d9,	// (0x00050c1e) cell_hwr_candidate_pane_t1_ParamLimits

0x4a4d,	// (0x00053c92) aid_touch_navi_pane

0xd526,	// (0x0005c76b) status_dt_navi_pane_ParamLimits

0xd526,	// (0x0005c76b) status_dt_navi_pane

0xd53e,	// (0x0005c783) status_dt_sta_pane_ParamLimits

0xd53e,	// (0x0005c783) status_dt_sta_pane

0xf0a5,	// (0x0005e2ea) dt_sta_controll_pane

0xf0b2,	// (0x0005e2f7) dt_sta_indi_pane

0xf0bf,	// (0x0005e304) dt_sta_title_pane

0x2ed0,	// (0x00052115) bg_dt_sta_indi_pane_ParamLimits

0x2ed0,	// (0x00052115) bg_dt_sta_indi_pane

0x9e2f,	// (0x00059074) dt_sta_battery_pane

0xf0d1,	// (0x0005e316) dt_sta_indi_pane_g1

0xf0da,	// (0x0005e31f) dt_sta_indi_pane_g2

0xf0e3,	// (0x0005e328) dt_sta_indi_pane_g3

0x0002,

0xfe92,	// (0x0005f0d7) dt_sta_indi_pane_g

0xf0ec,	// (0x0005e331) dt_sta_signal_pane

0x34b3,	// (0x000526f8) bg_dt_sta_title_pane_ParamLimits

0x34b3,	// (0x000526f8) bg_dt_sta_title_pane

0x5db9,	// (0x00054ffe) dt_sta_title_pane_g1

0xf0f5,	// (0x0005e33a) dt_sta_title_pane_t1_ParamLimits

0xf0f5,	// (0x0005e33a) dt_sta_title_pane_t1

0x242e,	// (0x00051673) bg_dt_sta_control_pane

0xf10a,	// (0x0005e34f) dt_sta_controll_pane_g1

0xf113,	// (0x0005e358) bg_dt_sta_title_pane_g1

0xf11c,	// (0x0005e361) bg_dt_sta_title_pane_g2

0xf125,	// (0x0005e36a) bg_dt_sta_title_pane_g3

0x0002,

0xfe99,	// (0x0005f0de) bg_dt_sta_title_pane_g

0x751d,	// (0x00056762) bg_dt_sta_indi_pane_g1

0x9e9c,	// (0x000590e1) dt_sta_signal_pane_g1

0x9ea4,	// (0x000590e9) dt_sta_signal_pane_g2

0x0001,

0xfea0,	// (0x0005f0e5) dt_sta_signal_pane_g

0x9eac,	// (0x000590f1) dt_sta_battery_pane_g1

0x9eb5,	// (0x000590fa) dt_sta_battery_pane_t1

0x751d,	// (0x00056762) bg_dt_sta_control_pane_g1

0x3c0c,	// (0x00052e51) fep_china_uni_eep_pane

0x3c14,	// (0x00052e59) fep_china_uni_entry_pane_ParamLimits

0x3c24,	// (0x00052e69) popup_fep_china_uni_window_g1_ParamLimits

0x3c34,	// (0x00052e79) popup_fep_china_uni_window_g2_ParamLimits

0x3c34,	// (0x00052e79) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x0005e975) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x0005e975) popup_fep_china_uni_window_g

0x9ec4,	// (0x00059109) fep_china_uni_eep_pane_g1

0x9ecc,	// (0x00059111) fep_china_uni_eep_pane_t1

0x99c3,	// (0x00058c08) aid_touch_area_size_smil_player

0x4bbb,	// (0x00053e00) lc0_clock_pane

0x4d9b,	// (0x00053fe0) status_pane_g5_ParamLimits

0x4d9b,	// (0x00053fe0) status_pane_g5

0xccf6,	// (0x0005bf3b) popup_keymap_window

0x4d59,	// (0x00053f9e) status_icon_pane

0xef0a,	// (0x0005e14f) cell_ai5_widget_pane_g3_ParamLimits

0xef29,	// (0x0005e16e) cell_ai5_widget_pane_g4_ParamLimits

0xef35,	// (0x0005e17a) cell_ai5_widget_pane_g5_ParamLimits

0xef59,	// (0x0005e19e) cell_ai5_widget_pane_g8_ParamLimits

0xef59,	// (0x0005e19e) cell_ai5_widget_pane_g8

0xef6d,	// (0x0005e1b2) cell_ai5_widget_pane_g9_ParamLimits

0xef6d,	// (0x0005e1b2) cell_ai5_widget_pane_g9

0xef81,	// (0x0005e1c6) cell_ai5_widget_pane_g10_ParamLimits

0xef81,	// (0x0005e1c6) cell_ai5_widget_pane_g10

0x9edb,	// (0x00059120) status_icon_pane_g1

0x242e,	// (0x00051673) bg_popup_sub_pane_cp13

0x9ee3,	// (0x00059128) popup_keymap_window_t1

0xcaf7,	// (0x0005bd3c) control_pane_g6_ParamLimits

0xcaf7,	// (0x0005bd3c) control_pane_g6

0xcb04,	// (0x0005bd49) control_pane_g7_ParamLimits

0xcb04,	// (0x0005bd49) control_pane_g7

0xcb11,	// (0x0005bd56) control_pane_g8_ParamLimits

0xcb11,	// (0x0005bd56) control_pane_g8

0xf0a5,	// (0x0005e2ea) dt_sta_controll_pane_ParamLimits

0xf0b2,	// (0x0005e2f7) dt_sta_indi_pane_ParamLimits

0xf0bf,	// (0x0005e304) dt_sta_title_pane_ParamLimits

0x33eb,	// (0x00052630) aid_size_touch_scroll_bar_cale

0x0200,	// (0x0004f445) popup_discreet_window_ParamLimits

0x0200,	// (0x0004f445) popup_discreet_window

0xb4b8,	// (0x0005a6fd) popup_sk_window

0x55f4,	// (0x00054839) bg_popup_sub_pane_cp28_ParamLimits

0x55f4,	// (0x00054839) bg_popup_sub_pane_cp28

0x9ef1,	// (0x00059136) popup_discreet_window_g1_ParamLimits

0x9ef1,	// (0x00059136) popup_discreet_window_g1

0x9f11,	// (0x00059156) popup_discreet_window_t1_ParamLimits

0x9f11,	// (0x00059156) popup_discreet_window_t1

0x9f2f,	// (0x00059174) popup_discreet_window_t2_ParamLimits

0x9f2f,	// (0x00059174) popup_discreet_window_t2

0x0002,

0xfea5,	// (0x0005f0ea) popup_discreet_window_t_ParamLimits

0xfea5,	// (0x0005f0ea) popup_discreet_window_t

0x23c4,	// (0x00051609) popup_sk_window_g1

0x23ce,	// (0x00051613) popup_sk_window_g2

0x0001,

0xfeac,	// (0x0005f0f1) popup_sk_window_g

0x9f81,	// (0x000591c6) popup_sk_window_t1

0x9f8f,	// (0x000591d4) popup_sk_window_t1_copy1

0xeefa,	// (0x0005e13f) cell_ai5_widget_pane_g2_ParamLimits

0xf02d,	// (0x0005e272) cell_ai5_widget_pane_t9_ParamLimits

0xf02d,	// (0x0005e272) cell_ai5_widget_pane_t9

0x242e,	// (0x00051673) main_fep_fshwr2_pane

0xf12e,	// (0x0005e373) aid_fshwr2_btn_pane

0xf136,	// (0x0005e37b) aid_fshwr2_syb_pane

0xf13e,	// (0x0005e383) aid_fshwr2_txt_pane

0xf146,	// (0x0005e38b) fshwr2_func_candi_pane

0xf150,	// (0x0005e395) fshwr2_hwr_syb_pane

0xf15e,	// (0x0005e3a3) fshwr2_icf_pane

0x242e,	// (0x00051673) fshwr2_icf_bg_pane

0xf168,	// (0x0005e3ad) fshwr2_icf_pane_t1_ParamLimits

0xf168,	// (0x0005e3ad) fshwr2_icf_pane_t1

0x751d,	// (0x00056762) fshwr2_func_candi_pane_g1

0xa002,	// (0x00059247) fshwr2_func_candi_row_pane_ParamLimits

0xa002,	// (0x00059247) fshwr2_func_candi_row_pane

0xf180,	// (0x0005e3c5) cell_fshwr2_syb_pane_ParamLimits

0xf180,	// (0x0005e3c5) cell_fshwr2_syb_pane

0x77af,	// (0x000569f4) fshwr2_hwr_syb_pane_g1_ParamLimits

0x77af,	// (0x000569f4) fshwr2_hwr_syb_pane_g1

0x242e,	// (0x00051673) bg_popup_call_pane_cp01

0xa02d,	// (0x00059272) fshwr2_func_candi_cell_pane_ParamLimits

0xa02d,	// (0x00059272) fshwr2_func_candi_cell_pane

0xa05e,	// (0x000592a3) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa05e,	// (0x000592a3) fshwr2_func_candi_cell_bg_pane

0xa078,	// (0x000592bd) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xa078,	// (0x000592bd) fshwr2_func_candi_cell_pane_g1

0xa0a0,	// (0x000592e5) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa0a0,	// (0x000592e5) fshwr2_func_candi_cell_pane_t1

0x242e,	// (0x00051673) bg_button_pane_cp08

0x40f6,	// (0x0005333b) cell_fshwr2_syb_bg_pane

0xf19a,	// (0x0005e3df) cell_fshwr2_syb_bg_pane_g1

0xf1a2,	// (0x0005e3e7) cell_fshwr2_syb_bg_pane_t1

0x34b3,	// (0x000526f8) main_tmo_pane

0xd83e,	// (0x0005ca83) uni_indicator_pane_g1_ParamLimits

0xd853,	// (0x0005ca98) uni_indicator_pane_g2_ParamLimits

0xd868,	// (0x0005caad) uni_indicator_pane_g3_ParamLimits

0x613b,	// (0x00055380) uni_indicator_pane_g4_ParamLimits

0x613b,	// (0x00055380) uni_indicator_pane_g4

0x614f,	// (0x00055394) uni_indicator_pane_g5_ParamLimits

0x614f,	// (0x00055394) uni_indicator_pane_g5

0x6163,	// (0x000553a8) uni_indicator_pane_g6_ParamLimits

0x6163,	// (0x000553a8) uni_indicator_pane_g6

0xf921,	// (0x0005eb66) uni_indicator_pane_g_ParamLimits

0xe2e2,	// (0x0005d527) popup_tmo_note_window_ParamLimits

0xe2e2,	// (0x0005d527) popup_tmo_note_window

0x242e,	// (0x00051673) fshwr2_bg_pane

0xa091,	// (0x000592d6) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa091,	// (0x000592d6) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb1,	// (0x0005f0f6) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb1,	// (0x0005f0f6) fshwr2_func_candi_cell_pane_g

0x751d,	// (0x00056762) bg_popup_window_pane_cp01

0xa0ca,	// (0x0005930f) bg_popup_window_pane_g1_cp01

0xa0d3,	// (0x00059318) bg_popup_window_pane_cp22_ParamLimits

0xa0d3,	// (0x00059318) bg_popup_window_pane_cp22

0xa0e1,	// (0x00059326) listscroll_tmo_link_pane_ParamLimits

0xa0e1,	// (0x00059326) listscroll_tmo_link_pane

0xa121,	// (0x00059366) popup_tmo_note_window_g1_ParamLimits

0xa121,	// (0x00059366) popup_tmo_note_window_g1

0xa12e,	// (0x00059373) tmo_note_info_pane_ParamLimits

0xa12e,	// (0x00059373) tmo_note_info_pane

0xf1b1,	// (0x0005e3f6) list_tmo_note_info_pane_g1_ParamLimits

0xf1b1,	// (0x0005e3f6) list_tmo_note_info_pane_g1

0xa15f,	// (0x000593a4) list_tmo_note_info_pane_g2_ParamLimits

0xa15f,	// (0x000593a4) list_tmo_note_info_pane_g2

0x0001,

0xfeb6,	// (0x0005f0fb) list_tmo_note_info_pane_g_ParamLimits

0xfeb6,	// (0x0005f0fb) list_tmo_note_info_pane_g

0xa17b,	// (0x000593c0) list_tmo_note_info_text_pane_ParamLimits

0xa17b,	// (0x000593c0) list_tmo_note_info_text_pane

0xa1fc,	// (0x00059441) list_tmo_link_pane

0xa209,	// (0x0005944e) scroll_pane_cp20

0xa216,	// (0x0005945b) list_single_tmo_link_pane_ParamLimits

0xa216,	// (0x0005945b) list_single_tmo_link_pane

0xa226,	// (0x0005946b) list_single_tmo_link_pane_t1

0xa234,	// (0x00059479) list_tmo_note_info_text_pane_t1_ParamLimits

0xa234,	// (0x00059479) list_tmo_note_info_text_pane_t1

0xc7f6,	// (0x0005ba3b) aid_size_touch_scroll_bar_cp01_ParamLimits

0xc7f6,	// (0x0005ba3b) aid_size_touch_scroll_bar_cp01

0xb9a7,	// (0x0005abec) aid_size_touch_slider_marker

0xb4a8,	// (0x0005a6ed) popup_settings_window_ParamLimits

0xb4a8,	// (0x0005a6ed) popup_settings_window

0x118c,	// (0x000503d1) popup_candi_list_indi_window

0x4a4d,	// (0x00053c92) aid_touch_navi_pane_ParamLimits

0x1b9f,	// (0x00050de4) rs_clock_indi_pane

0x1ba8,	// (0x00050ded) sctrl_sk_bottom_pane_ParamLimits

0x1bb9,	// (0x00050dfe) sctrl_sk_top_pane_ParamLimits

0x1cbc,	// (0x00050f01) popup_fep_tooltip_window

0x9ae3,	// (0x00058d28) aid_size_cell_widget_grid_ParamLimits

0xeeee,	// (0x0005e133) cell_ai5_widget_pane_g1_ParamLimits

0xeeee,	// (0x0005e133) cell_ai5_widget_pane_g1

0xef41,	// (0x0005e186) cell_ai5_widget_pane_g6_ParamLimits

0xef4d,	// (0x0005e192) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe34,	// (0x0005f079) cell_ai5_widget_pane_g_ParamLimits

0xfe34,	// (0x0005f079) cell_ai5_widget_pane_g

0xf051,	// (0x0005e296) cell_ai5_widget_pane_t10_ParamLimits

0xf051,	// (0x0005e296) cell_ai5_widget_pane_t10

0xf067,	// (0x0005e2ac) grid_ai5_widget_pane_ParamLimits

0x9d59,	// (0x00058f9e) cell_contacts_ai5_widget_pane_ParamLimits

0x9d59,	// (0x00058f9e) cell_contacts_ai5_widget_pane

0x9f44,	// (0x00059189) popup_discreet_window_t3_ParamLimits

0x9f44,	// (0x00059189) popup_discreet_window_t3

0x9fd7,	// (0x0005921c) popup_fshwr2_char_preview_window_ParamLimits

0x9fd7,	// (0x0005921c) popup_fshwr2_char_preview_window

0xf1c8,	// (0x0005e40d) tmo_note_info_pane_t1

0xf1dd,	// (0x0005e422) tmo_note_info_pane_t2

0xf1f4,	// (0x0005e439) tmo_note_info_pane_t3

0xa1d8,	// (0x0005941d) tmo_note_info_pane_t4

0xa1ea,	// (0x0005942f) tmo_note_info_pane_t5

0x0004,

0xfebb,	// (0x0005f100) tmo_note_info_pane_t

0xa1fc,	// (0x00059441) list_tmo_link_pane_ParamLimits

0xa209,	// (0x0005944e) scroll_pane_cp20_ParamLimits

0x242e,	// (0x00051673) bg_popup_fep_char_preview_window_cp01

0xa24d,	// (0x00059492) popup_fshwr2_char_preview_window_t1

0xa25b,	// (0x000594a0) popup_candi_list_indi_window_g1

0xa264,	// (0x000594a9) bg_cell_contacts_ai5_widget_pane

0xa270,	// (0x000594b5) cell_contacts_ai5_widget_pane_g1

0xa284,	// (0x000594c9) cell_contacts_ai5_widget_pane_g2

0xa293,	// (0x000594d8) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec6,	// (0x0005f10b) cell_contacts_ai5_widget_pane_g

0xa2a6,	// (0x000594eb) cell_contacts_ai5_widget_pane_t1

0x34b3,	// (0x000526f8) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf26e,	// (0x0005e4b3) settings_container_pane

0x40f6,	// (0x0005333b) listscroll_set_pane_copy1

0x6c30,	// (0x00055e75) scroll_pane_cp121_copy1

0xa32c,	// (0x00059571) set_content_pane_copy1

0xf27a,	// (0x0005e4bf) aid_height_set_list_copy1_ParamLimits

0xf27a,	// (0x0005e4bf) aid_height_set_list_copy1

0x635b,	// (0x000555a0) aid_size_parent_copy1_ParamLimits

0x635b,	// (0x000555a0) aid_size_parent_copy1

0xf286,	// (0x0005e4cb) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf286,	// (0x0005e4cb) button_value_adjust_pane_cp6_copy1

0x4454,	// (0x00053699) list_highlight_pane_cp2_copy1_ParamLimits

0x4454,	// (0x00053699) list_highlight_pane_cp2_copy1

0xf29a,	// (0x0005e4df) list_set_pane_copy1_ParamLimits

0xf29a,	// (0x0005e4df) list_set_pane_copy1

0xf209,	// (0x0005e44e) main_pane_set_t1_copy1_ParamLimits

0xf209,	// (0x0005e44e) main_pane_set_t1_copy1

0xf243,	// (0x0005e488) main_pane_set_t2_copy1_ParamLimits

0xf243,	// (0x0005e488) main_pane_set_t2_copy1

0xf347,	// (0x0005e58c) main_pane_set_t3_copy1

0xf355,	// (0x0005e59a) main_pane_set_t4_copy1

0xf262,	// (0x0005e4a7) set_content_pane_g1_copy1_ParamLimits

0xf262,	// (0x0005e4a7) set_content_pane_g1_copy1

0xf363,	// (0x0005e5a8) setting_code_pane_copy1

0xa427,	// (0x0005966c) setting_slider_graphic_pane_copy1

0xa427,	// (0x0005966c) setting_slider_pane_copy1

0xa427,	// (0x0005966c) setting_text_pane_copy1

0xa431,	// (0x00059676) setting_volume_pane_copy1

0xf36d,	// (0x0005e5b2) settings_code_pane_cp2_copy1

0xf375,	// (0x0005e5ba) settings_code_pane_cp_copy1_ParamLimits

0xf375,	// (0x0005e5ba) settings_code_pane_cp_copy1

0xf389,	// (0x0005e5ce) volume_set_pane_copy1

0xf391,	// (0x0005e5d6) volume_set_pane_g10_copy1

0xf399,	// (0x0005e5de) volume_set_pane_g1_copy1

0xf3a1,	// (0x0005e5e6) volume_set_pane_g2_copy1

0xf3a9,	// (0x0005e5ee) volume_set_pane_g3_copy1

0xf3b1,	// (0x0005e5f6) volume_set_pane_g4_copy1

0xf3b9,	// (0x0005e5fe) volume_set_pane_g5_copy1

0xf3c1,	// (0x0005e606) volume_set_pane_g6_copy1

0xf3c9,	// (0x0005e60e) volume_set_pane_g7_copy1

0xf3d1,	// (0x0005e616) volume_set_pane_g8_copy1

0xf3d9,	// (0x0005e61e) volume_set_pane_g9_copy1

0x2522,	// (0x00051767) bg_set_opt_pane_cp_copy1_ParamLimits

0x2522,	// (0x00051767) bg_set_opt_pane_cp_copy1

0xa4ae,	// (0x000596f3) setting_slider_pane_t1_copy1_ParamLimits

0xa4ae,	// (0x000596f3) setting_slider_pane_t1_copy1

0xf3e1,	// (0x0005e626) setting_slider_pane_t2_copy1_ParamLimits

0xf3e1,	// (0x0005e626) setting_slider_pane_t2_copy1

0xf3fb,	// (0x0005e640) setting_slider_pane_t3_copy1_ParamLimits

0xf3fb,	// (0x0005e640) setting_slider_pane_t3_copy1

0xf413,	// (0x0005e658) slider_set_pane_copy1_ParamLimits

0xf413,	// (0x0005e658) slider_set_pane_copy1

0x351a,	// (0x0005275f) set_opt_bg_pane_g1_copy2

0x3522,	// (0x00052767) set_opt_bg_pane_g2_copy2

0xa514,	// (0x00059759) set_opt_bg_pane_g3_copy2

0x3532,	// (0x00052777) set_opt_bg_pane_g4_copy2

0x353a,	// (0x0005277f) set_opt_bg_pane_g5_copy2

0x3542,	// (0x00052787) set_opt_bg_pane_g6_copy2

0xf429,	// (0x0005e66e) set_opt_bg_pane_g7_copy2

0xa526,	// (0x0005976b) set_opt_bg_pane_g8_copy2

0xa530,	// (0x00059775) set_opt_bg_pane_g9_copy2

0x23d8,	// (0x0005161d) aid_size_touch_slider_mark_copy1_ParamLimits

0x23d8,	// (0x0005161d) aid_size_touch_slider_mark_copy1

0xa53a,	// (0x0005977f) slider_set_pane_g1_copy1

0x23ec,	// (0x00051631) slider_set_pane_g2_copy1

0x155a,	// (0x0005079f) slider_set_pane_g3_copy1_ParamLimits

0x155a,	// (0x0005079f) slider_set_pane_g3_copy1

0x156e,	// (0x000507b3) slider_set_pane_g4_copy1_ParamLimits

0x156e,	// (0x000507b3) slider_set_pane_g4_copy1

0x1586,	// (0x000507cb) slider_set_pane_g5_copy1_ParamLimits

0x1586,	// (0x000507cb) slider_set_pane_g5_copy1

0x155a,	// (0x0005079f) slider_set_pane_g6_copy1_ParamLimits

0x155a,	// (0x0005079f) slider_set_pane_g6_copy1

0xc451,	// (0x0005b696) slider_set_pane_g7_copy1_ParamLimits

0xc451,	// (0x0005b696) slider_set_pane_g7_copy1

0x2442,	// (0x00051687) bg_set_opt_pane_cp2_copy1

0xa543,	// (0x00059788) setting_slider_graphic_pane_g1_copy1

0xf431,	// (0x0005e676) setting_slider_graphic_pane_t1_copy1

0xf441,	// (0x0005e686) setting_slider_graphic_pane_t2_copy1

0xf451,	// (0x0005e696) slider_set_pane_cp_copy1

0xa57c,	// (0x000597c1) input_focus_pane_cp1_copy1

0xa585,	// (0x000597ca) list_set_text_pane_copy1

0xa58d,	// (0x000597d2) setting_text_pane_g1_copy1

0x0407,	// (0x0004f64c) set_text_pane_t1_copy1

0xa57c,	// (0x000597c1) input_focus_pane_cp2_copy1

0xa58d,	// (0x000597d2) setting_code_pane_g1_copy1

0xf459,	// (0x0005e69e) setting_code_pane_t1_copy1

0xc9f1,	// (0x0005bc36) list_set_graphic_pane_copy1

0x2442,	// (0x00051687) bg_set_opt_pane_cp4_copy1

0xca03,	// (0x0005bc48) list_set_graphic_pane_g1_copy1_ParamLimits

0xca03,	// (0x0005bc48) list_set_graphic_pane_g1_copy1

0xf467,	// (0x0005e6ac) list_set_graphic_pane_g2_copy1

0xca1b,	// (0x0005bc60) list_set_graphic_pane_t1_copy1_ParamLimits

0xca1b,	// (0x0005bc60) list_set_graphic_pane_t1_copy1

0x751d,	// (0x00056762) rs_clock_indi_pane_g1

0xa5be,	// (0x00059803) rs_clock_indi_pane_t1

0x9e2f,	// (0x00059074) rs_indi_pane

0xa5cc,	// (0x00059811) rs_indi_pane_g1

0xa5d5,	// (0x0005981a) rs_indi_pane_g2

0xa5de,	// (0x00059823) rs_indi_pane_g3

0x0002,

0xfecd,	// (0x0005f112) rs_indi_pane_g

0x40f6,	// (0x0005333b) bg_popup_preview_window_pane_cp03

0xa5e7,	// (0x0005982c) popup_fep_tooltip_window_t1

0x8198,	// (0x000573dd) popup_note2_window_g2_ParamLimits

0x8198,	// (0x000573dd) popup_note2_window_g2

0x0001,

0xfc66,	// (0x0005eeab) popup_note2_window_g_ParamLimits

0xfc66,	// (0x0005eeab) popup_note2_window_g

0x8693,	// (0x000578d8) bg_popup_sub_pane_cp11_ParamLimits

0x86a0,	// (0x000578e5) cell_ai3_links_pane_g1_ParamLimits

0x86b7,	// (0x000578fc) cell_ai3_links_pane_t1

0x0407,	// (0x0004f64c) set_text_pane_t1_copy1_ParamLimits

0x4007,	// (0x0005324c) cell_graphic_popup_pane_cp2_ParamLimits

0x4007,	// (0x0005324c) cell_graphic_popup_pane_cp2

0xa5f5,	// (0x0005983a) cell_graphic_popup_pane_g1_cp2

0x31fe,	// (0x00052443) cell_graphic_popup_pane_g2_cp2

0xa5fd,	// (0x00059842) cell_graphic_popup_pane_g3_cp2

0xa605,	// (0x0005984a) cell_graphic_popup_pane_t2_cp2

0x320f,	// (0x00052454) grid_highlight_pane_cp3_cp2

0x3869,	// (0x00052aae) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x34b3,	// (0x000526f8) main_tmo_pane_ParamLimits

0xe2d6,	// (0x0005d51b) popup_tmo_big_image_note_window

0xeede,	// (0x0005e123) cell_ai5_widget_list_pane

0xeee6,	// (0x0005e12b) cell_ai5_widget_lrg_icon_pane

0xf1c8,	// (0x0005e40d) tmo_note_info_pane_t1_ParamLimits

0xf1dd,	// (0x0005e422) tmo_note_info_pane_t2_ParamLimits

0xf1f4,	// (0x0005e439) tmo_note_info_pane_t3_ParamLimits

0xa1d8,	// (0x0005941d) tmo_note_info_pane_t4_ParamLimits

0xa1ea,	// (0x0005942f) tmo_note_info_pane_t5_ParamLimits

0xfebb,	// (0x0005f100) tmo_note_info_pane_t_ParamLimits

0xf26e,	// (0x0005e4b3) settings_container_pane_ParamLimits

0xa574,	// (0x000597b9) indicator_popup_pane_cp5

0xa574,	// (0x000597b9) indicator_popup_pane_cp6

0xc9f1,	// (0x0005bc36) list_set_graphic_pane_copy1_ParamLimits

0x242e,	// (0x00051673) bg_popup_window_pane_cp23

0xa613,	// (0x00059858) popup_tmo_big_image_note_window_g1

0xa61d,	// (0x00059862) popup_tmo_big_image_note_window_t1

0xa62d,	// (0x00059872) popup_tmo_big_image_note_window_t2

0xa63d,	// (0x00059882) popup_tmo_big_image_note_window_t3

0x0002,

0xfed4,	// (0x0005f119) popup_tmo_big_image_note_window_t

0xf46f,	// (0x0005e6b4) cell_ai5_widget_lrg_icon_pane_g1

0xf477,	// (0x0005e6bc) cell_ai5_widget_lrg_icon_pane_t1

0xf485,	// (0x0005e6ca) cell_ai5_widget_list_row_pane_ParamLimits

0xf485,	// (0x0005e6ca) cell_ai5_widget_list_row_pane

0xf49e,	// (0x0005e6e3) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf49e,	// (0x0005e6e3) cell_ai5_widget_list_row_pane_g1

0xf4ab,	// (0x0005e6f0) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf4ab,	// (0x0005e6f0) cell_ai5_widget_list_row_pane_t1

0xf4c3,	// (0x0005e708) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf4c3,	// (0x0005e708) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfedb,	// (0x0005f120) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedb,	// (0x0005f120) cell_ai5_widget_list_row_pane_t

0x0127,	// (0x0004f36c) main_fep_vtchi_ss_pane

0xa6b3,	// (0x000598f8) popup_fep_char_pre_window

0xa6bb,	// (0x00059900) popup_fep_ituss_window

0xa6dc,	// (0x00059921) popup_fep_vkbss_window

0xa6fb,	// (0x00059940) grid_vkbss_keypad_pane_ParamLimits

0xa6fb,	// (0x00059940) grid_vkbss_keypad_pane

0xa70b,	// (0x00059950) ituss_keypad_pane

0xa724,	// (0x00059969) aid_vkbss_key_offset_ParamLimits

0xa724,	// (0x00059969) aid_vkbss_key_offset

0xa730,	// (0x00059975) cell_vkbss_key_pane_ParamLimits

0xa730,	// (0x00059975) cell_vkbss_key_pane

0xa746,	// (0x0005998b) bg_cell_vkbss_key_g1_ParamLimits

0xa746,	// (0x0005998b) bg_cell_vkbss_key_g1

0xa752,	// (0x00059997) cell_vkbss_key_3p_pane_ParamLimits

0xa752,	// (0x00059997) cell_vkbss_key_3p_pane

0xa76c,	// (0x000599b1) cell_vkbss_key_g1_ParamLimits

0xa76c,	// (0x000599b1) cell_vkbss_key_g1

0xa786,	// (0x000599cb) cell_vkbss_key_t1_ParamLimits

0xa786,	// (0x000599cb) cell_vkbss_key_t1

0xa7b1,	// (0x000599f6) cell_ituss_key_pane_ParamLimits

0xa7b1,	// (0x000599f6) cell_ituss_key_pane

0xa7c1,	// (0x00059a06) bg_cell_ituss_key_g1_ParamLimits

0xa7c1,	// (0x00059a06) bg_cell_ituss_key_g1

0xa7cd,	// (0x00059a12) cell_ituss_key_pane_g1_ParamLimits

0xa7cd,	// (0x00059a12) cell_ituss_key_pane_g1

0xa7d9,	// (0x00059a1e) cell_ituss_key_pane_g2_ParamLimits

0xa7d9,	// (0x00059a1e) cell_ituss_key_pane_g2

0x0001,

0xfee0,	// (0x0005f125) cell_ituss_key_pane_g_ParamLimits

0xfee0,	// (0x0005f125) cell_ituss_key_pane_g

0xa7f2,	// (0x00059a37) cell_ituss_key_t1_ParamLimits

0xa7f2,	// (0x00059a37) cell_ituss_key_t1

0xa820,	// (0x00059a65) cell_ituss_key_t2_ParamLimits

0xa820,	// (0x00059a65) cell_ituss_key_t2

0xa851,	// (0x00059a96) cell_ituss_key_t3_ParamLimits

0xa851,	// (0x00059a96) cell_ituss_key_t3

0xa882,	// (0x00059ac7) cell_ituss_key_t4_ParamLimits

0xa882,	// (0x00059ac7) cell_ituss_key_t4

0x0003,

0xfee5,	// (0x0005f12a) cell_ituss_key_t_ParamLimits

0xfee5,	// (0x0005f12a) cell_ituss_key_t

0xa8b3,	// (0x00059af8) cell_vkbss_key_3p_pane_g1

0xa8bb,	// (0x00059b00) cell_vkbss_key_3p_pane_g2

0xa8c3,	// (0x00059b08) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeee,	// (0x0005f133) cell_vkbss_key_3p_pane_g

0x242e,	// (0x00051673) bg_popup_fep_char_preview_window_cp02

0xa8cb,	// (0x00059b10) popup_fep_char_pre_window_t1

0xeed4,	// (0x0005e119) main_ai5_sk_pane

0xa264,	// (0x000594a9) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa270,	// (0x000594b5) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa284,	// (0x000594c9) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa293,	// (0x000594d8) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec6,	// (0x0005f10b) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa2a6,	// (0x000594eb) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x34b3,	// (0x000526f8) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf4d5,	// (0x0005e71a) main_ai5_sk_pane_g1

0x541e,	// (0x00054663) popup_query_code_window_g1

0xa6d1,	// (0x00059916) popup_fep_vkb_icf_pane

0xa6e5,	// (0x0005992a) popup_fep_vtchi_icf_pane

0x34b3,	// (0x000526f8) bg_icf_pane

0xa8f2,	// (0x00059b37) list_vkb_icf_pane

0x34b3,	// (0x000526f8) bg_icf_pane_cp01

0xa90a,	// (0x00059b4f) vtchi_icf_list_pane

0xa91a,	// (0x00059b5f) list_vkb_icf_pane_t1_ParamLimits

0xa91a,	// (0x00059b5f) list_vkb_icf_pane_t1

0xa931,	// (0x00059b76) vtchi_icf_list_pane_t1_ParamLimits

0xa931,	// (0x00059b76) vtchi_icf_list_pane_t1

0xa6bb,	// (0x00059900) popup_fep_ituss_window_ParamLimits

0xa6e5,	// (0x0005992a) popup_fep_vtchi_icf_pane_ParamLimits

0xa70b,	// (0x00059950) ituss_keypad_pane_ParamLimits

0xa71b,	// (0x00059960) ituss_sks_pane

0x34b3,	// (0x000526f8) bg_icf_pane_ParamLimits

0xa8e3,	// (0x00059b28) icf_edit_indi_pane_ParamLimits

0xa8e3,	// (0x00059b28) icf_edit_indi_pane

0xa8f2,	// (0x00059b37) list_vkb_icf_pane_ParamLimits

0x34b3,	// (0x000526f8) bg_icf_pane_cp01_ParamLimits

0xa8fe,	// (0x00059b43) icf_edit_indi_pane_cp01_ParamLimits

0xa8fe,	// (0x00059b43) icf_edit_indi_pane_cp01

0xa912,	// (0x00059b57) vtchi_query_pane

0x77af,	// (0x000569f4) icf_edit_indi_pane_g1_ParamLimits

0x77af,	// (0x000569f4) icf_edit_indi_pane_g1

0xa94d,	// (0x00059b92) icf_edit_indi_pane_g2_ParamLimits

0xa94d,	// (0x00059b92) icf_edit_indi_pane_g2

0x0001,

0xfef5,	// (0x0005f13a) icf_edit_indi_pane_g_ParamLimits

0xfef5,	// (0x0005f13a) icf_edit_indi_pane_g

0xa959,	// (0x00059b9e) icf_edit_indi_pane_t1

0xa967,	// (0x00059bac) bg_input_focus_pane_cp042

0x33e2,	// (0x00052627) vtchi_button_pane

0xa970,	// (0x00059bb5) vtchi_query_pane_t1

0xa97e,	// (0x00059bc3) vtchi_query_pane_t2

0xa98c,	// (0x00059bd1) vtchi_query_pane_t3

0x0002,

0xfefa,	// (0x0005f13f) vtchi_query_pane_t

0x242e,	// (0x00051673) bg_button_pane_cp13

0xa99a,	// (0x00059bdf) vtchi_button_pane_g1

0x8ef2,	// (0x00058137) ituss_sks_pane_g1

0xa9a2,	// (0x00059be7) ituss_sks_pane_g2

0x0001,

0xff01,	// (0x0005f146) ituss_sks_pane_g

0xa9ab,	// (0x00059bf0) ituss_sks_pane_t1

0xa9b9,	// (0x00059bfe) ituss_sks_pane_t2

0x0001,

0xff06,	// (0x0005f14b) ituss_sks_pane_t

0x6f7f,	// (0x000561c4) indicator_nsta_pane_cp_g1

0x6f88,	// (0x000561cd) indicator_nsta_pane_cp_g2

0x6f90,	// (0x000561d5) indicator_nsta_pane_cp_g3

0x6f98,	// (0x000561dd) indicator_nsta_pane_cp_g4

0x6fa0,	// (0x000561e5) indicator_nsta_pane_cp_g5

0x6fa8,	// (0x000561ed) indicator_nsta_pane_cp_g6

0x0005,

0xfaa4,	// (0x0005ece9) indicator_nsta_pane_cp_g

0xecf9,	// (0x0005df3e) cell_graphic2_pane_t2_ParamLimits

0xecf9,	// (0x0005df3e) cell_graphic2_pane_t2

0x0001,

0xfdbd,	// (0x0005f002) cell_graphic2_pane_t_ParamLimits

0xfdbd,	// (0x0005f002) cell_graphic2_pane_t

0xed2f,	// (0x0005df74) cell_graphic2_control_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Large
