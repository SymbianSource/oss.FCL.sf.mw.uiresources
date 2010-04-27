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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0003f57b };

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
0xbd5a,	// (0x0004b2d5) Screen

0xbd66,	// (0x0004b2e1) application_window_ParamLimits

0xbd66,	// (0x0004b2e1) application_window

0x34ea,	// (0x00042a65) screen_g1

0xbd9e,	// (0x0004b319) area_bottom_pane_ParamLimits

0xbd9e,	// (0x0004b319) area_bottom_pane

0x0fc3,	// (0x0004053e) area_top_pane_ParamLimits

0x0fc3,	// (0x0004053e) area_top_pane

0x1057,	// (0x000405d2) main_pane_ParamLimits

0x1057,	// (0x000405d2) main_pane

0x34f4,	// (0x00042a6f) misc_graphics

0xd68b,	// (0x0004cc06) battery_pane_ParamLimits

0xd68b,	// (0x0004cc06) battery_pane

0x5b73,	// (0x000450ee) bg_status_flat_pane_g8

0x5b7b,	// (0x000450f6) bg_status_flat_pane_g9

0x4f6f,	// (0x000444ea) context_pane_ParamLimits

0x4f6f,	// (0x000444ea) context_pane

0xd7f6,	// (0x0004cd71) navi_pane_ParamLimits

0xd7f6,	// (0x0004cd71) navi_pane

0xd874,	// (0x0004cdef) signal_pane_ParamLimits

0xd874,	// (0x0004cdef) signal_pane

0x0008,

0xf879,	// (0x0004edf4) bg_status_flat_pane_g

0xd904,	// (0x0004ce7f) status_pane_g1_ParamLimits

0xd904,	// (0x0004ce7f) status_pane_g1

0xd91a,	// (0x0004ce95) status_pane_g2_ParamLimits

0xd91a,	// (0x0004ce95) status_pane_g2

0x5196,	// (0x00044711) status_pane_g3_ParamLimits

0x5196,	// (0x00044711) status_pane_g3

0x0004,

0xf7a5,	// (0x0004ed20) status_pane_g_ParamLimits

0xf7a5,	// (0x0004ed20) status_pane_g

0xd926,	// (0x0004cea1) title_pane_ParamLimits

0xd926,	// (0x0004cea1) title_pane

0xd989,	// (0x0004cf04) uni_indicator_pane_ParamLimits

0xd989,	// (0x0004cf04) uni_indicator_pane

0x4dd1,	// (0x0004434c) bg_list_pane_ParamLimits

0x4dd1,	// (0x0004434c) bg_list_pane

0xd5fe,	// (0x0004cb79) find_pane

0xc14f,	// (0x0004b6ca) listscroll_app_pane_ParamLimits

0xc14f,	// (0x0004b6ca) listscroll_app_pane

0x4dfd,	// (0x00044378) listscroll_form_pane

0xc15f,	// (0x0004b6da) listscroll_gen_pane_ParamLimits

0xc15f,	// (0x0004b6da) listscroll_gen_pane

0x1a06,	// (0x00040f81) listscroll_set_pane

0x6701,	// (0x00045c7c) main_idle_act_pane

0x4ad9,	// (0x00044054) main_idle_trad_pane

0x4ad9,	// (0x00044054) main_list_empty_pane

0x4e17,	// (0x00044392) main_midp_pane

0x4e23,	// (0x0004439e) main_pane_g1_ParamLimits

0x4e23,	// (0x0004439e) main_pane_g1

0xc173,	// (0x0004b6ee) popup_ai_message_window_ParamLimits

0xc173,	// (0x0004b6ee) popup_ai_message_window

0xc204,	// (0x0004b77f) popup_fep_china_uni_window_ParamLimits

0xc204,	// (0x0004b77f) popup_fep_china_uni_window

0x1b10,	// (0x0004108b) popup_fep_japan_candidate_window_ParamLimits

0x1b10,	// (0x0004108b) popup_fep_japan_candidate_window

0x1b30,	// (0x000410ab) popup_fep_japan_predictive_window_ParamLimits

0x1b30,	// (0x000410ab) popup_fep_japan_predictive_window

0xc260,	// (0x0004b7db) popup_find_window

0xc27d,	// (0x0004b7f8) popup_grid_graphic_window_ParamLimits

0xc27d,	// (0x0004b7f8) popup_grid_graphic_window

0x1b97,	// (0x00041112) popup_large_graphic_colour_window

0xc31b,	// (0x0004b896) popup_menu_window_ParamLimits

0xc31b,	// (0x0004b896) popup_menu_window

0xc4ed,	// (0x0004ba68) popup_note_image_window

0xc4b3,	// (0x0004ba2e) popup_note_wait_window_ParamLimits

0xc4b3,	// (0x0004ba2e) popup_note_wait_window

0xc505,	// (0x0004ba80) popup_note_window_ParamLimits

0xc505,	// (0x0004ba80) popup_note_window

0xc5ab,	// (0x0004bb26) popup_query_code_window_ParamLimits

0xc5ab,	// (0x0004bb26) popup_query_code_window

0x1ddf,	// (0x0004135a) popup_query_data_code_window_ParamLimits

0x1ddf,	// (0x0004135a) popup_query_data_code_window

0xc5e5,	// (0x0004bb60) popup_query_data_window_ParamLimits

0xc5e5,	// (0x0004bb60) popup_query_data_window

0xc667,	// (0x0004bbe2) popup_query_sat_info_window_ParamLimits

0xc667,	// (0x0004bbe2) popup_query_sat_info_window

0xc6fe,	// (0x0004bc79) popup_snote_single_graphic_window_ParamLimits

0xc6fe,	// (0x0004bc79) popup_snote_single_graphic_window

0xc6fe,	// (0x0004bc79) popup_snote_single_text_window_ParamLimits

0xc6fe,	// (0x0004bc79) popup_snote_single_text_window

0x1e66,	// (0x000413e1) popup_sub_window_general

0x1f96,	// (0x00041511) popup_window_general_ParamLimits

0x1f96,	// (0x00041511) popup_window_general

0x4e31,	// (0x000443ac) power_save_pane

0xbfde,	// (0x0004b559) control_pane_g1_ParamLimits

0xbfde,	// (0x0004b559) control_pane_g1

0xc007,	// (0x0004b582) control_pane_g2_ParamLimits

0xc007,	// (0x0004b582) control_pane_g2

0x4d94,	// (0x0004430f) control_pane_g3_ParamLimits

0x4d94,	// (0x0004430f) control_pane_g3

0x0007,

0xf78d,	// (0x0004ed08) control_pane_g_ParamLimits

0xf78d,	// (0x0004ed08) control_pane_g

0xc048,	// (0x0004b5c3) control_pane_t1_ParamLimits

0xc048,	// (0x0004b5c3) control_pane_t1

0xc0a6,	// (0x0004b621) control_pane_t2_ParamLimits

0xc0a6,	// (0x0004b621) control_pane_t2

0x0002,

0xf79e,	// (0x0004ed19) control_pane_t_ParamLimits

0xf79e,	// (0x0004ed19) control_pane_t

0xd530,	// (0x0004caab) navi_navi_volume_pane_cp1

0xd538,	// (0x0004cab3) status_small_icon_pane

0x4cc9,	// (0x00044244) status_small_pane_g1_ParamLimits

0x4cc9,	// (0x00044244) status_small_pane_g1

0xd540,	// (0x0004cabb) status_small_pane_g2_ParamLimits

0xd540,	// (0x0004cabb) status_small_pane_g2

0xd54c,	// (0x0004cac7) status_small_pane_g3_ParamLimits

0xd54c,	// (0x0004cac7) status_small_pane_g3

0xd558,	// (0x0004cad3) status_small_pane_g4_ParamLimits

0xd558,	// (0x0004cad3) status_small_pane_g4

0xd564,	// (0x0004cadf) status_small_pane_g5_ParamLimits

0xd564,	// (0x0004cadf) status_small_pane_g5

0xd572,	// (0x0004caed) status_small_pane_g6_ParamLimits

0xd572,	// (0x0004caed) status_small_pane_g6

0x0007,

0xf77c,	// (0x0004ecf7) status_small_pane_g_ParamLimits

0xf77c,	// (0x0004ecf7) status_small_pane_g

0xd5a1,	// (0x0004cb1c) status_small_pane_t1

0xd5c3,	// (0x0004cb3e) status_small_wait_pane_ParamLimits

0xd5c3,	// (0x0004cb3e) status_small_wait_pane

0xd3d7,	// (0x0004c952) aid_levels_signal_ParamLimits

0xd3d7,	// (0x0004c952) aid_levels_signal

0xd3ef,	// (0x0004c96a) signal_pane_g1_ParamLimits

0xd3ef,	// (0x0004c96a) signal_pane_g1

0xd40a,	// (0x0004c985) signal_pane_g2_ParamLimits

0xd40a,	// (0x0004c985) signal_pane_g2

0x0003,

0xf70d,	// (0x0004ec88) signal_pane_g_ParamLimits

0xf70d,	// (0x0004ec88) signal_pane_g

0x45ad,	// (0x00043b28) context_pane_g1

0xcf3b,	// (0x0004c4b6) title_pane_g1

0xcf72,	// (0x0004c4ed) title_pane_t1

0x359c,	// (0x00042b17) title_pane_t2

0x35c2,	// (0x00042b3d) title_pane_t3

0x0002,

0xf557,	// (0x0004ead2) title_pane_t

0xd9b1,	// (0x0004cf2c) aid_levels_battery_ParamLimits

0xd9b1,	// (0x0004cf2c) aid_levels_battery

0xd9cd,	// (0x0004cf48) battery_pane_g1_ParamLimits

0xd9cd,	// (0x0004cf48) battery_pane_g1

0xd9ea,	// (0x0004cf65) battery_pane_g2_ParamLimits

0xd9ea,	// (0x0004cf65) battery_pane_g2

0x0001,

0xf7b0,	// (0x0004ed2b) battery_pane_g_ParamLimits

0xf7b0,	// (0x0004ed2b) battery_pane_g

0xdbb9,	// (0x0004d134) uni_indicator_pane_g1

0xdbcf,	// (0x0004d14a) uni_indicator_pane_g2

0xdbe5,	// (0x0004d160) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0004ee9c) uni_indicator_pane_g

0x494b,	// (0x00043ec6) navi_icon_pane_ParamLimits

0x494b,	// (0x00043ec6) navi_icon_pane

0x4889,	// (0x00043e04) navi_midp_pane

0x4967,	// (0x00043ee2) navi_navi_pane

0x4971,	// (0x00043eec) navi_text_pane_ParamLimits

0x4971,	// (0x00043eec) navi_text_pane

0x34ea,	// (0x00042a65) status_small_wait_pane_g1

0x39f1,	// (0x00042f6c) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0004ee97) status_small_wait_pane_g

0x61da,	// (0x00045755) navi_navi_icon_text_pane

0x61e2,	// (0x0004575d) navi_navi_pane_g1_ParamLimits

0x61e2,	// (0x0004575d) navi_navi_pane_g1

0x61f4,	// (0x0004576f) navi_navi_pane_g2_ParamLimits

0x61f4,	// (0x0004576f) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0004ee65) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0004ee65) navi_navi_pane_g

0x6206,	// (0x00045781) navi_navi_tabs_pane

0x620f,	// (0x0004578a) navi_navi_text_pane

0x61da,	// (0x00045755) navi_navi_volume_pane

0x61b6,	// (0x00045731) navi_text_pane_t1

0x61aa,	// (0x00045725) navi_icon_pane_g1

0x60fd,	// (0x00045678) navi_navi_text_pane_t1

0x224e,	// (0x000417c9) navi_navi_volume_pane_g1

0x2256,	// (0x000417d1) volume_small_pane

0x6063,	// (0x000455de) navi_navi_icon_text_pane_g1

0x606b,	// (0x000455e6) navi_navi_icon_text_pane_t1

0x4967,	// (0x00043ee2) navi_tabs_2_long_pane

0x4967,	// (0x00043ee2) navi_tabs_2_pane

0x4967,	// (0x00043ee2) navi_tabs_3_long_pane

0x4967,	// (0x00043ee2) navi_tabs_3_pane

0x4967,	// (0x00043ee2) navi_tabs_4_pane

0x222e,	// (0x000417a9) tabs_2_active_pane_ParamLimits

0x222e,	// (0x000417a9) tabs_2_active_pane

0x223e,	// (0x000417b9) tabs_2_passive_pane_ParamLimits

0x223e,	// (0x000417b9) tabs_2_passive_pane

0x21fc,	// (0x00041777) tabs_3_active_pane_ParamLimits

0x21fc,	// (0x00041777) tabs_3_active_pane

0x220c,	// (0x00041787) tabs_3_passive_pane_ParamLimits

0x220c,	// (0x00041787) tabs_3_passive_pane

0x221d,	// (0x00041798) tabs_3_passive_pane_cp_ParamLimits

0x221d,	// (0x00041798) tabs_3_passive_pane_cp

0x21b8,	// (0x00041733) tabs_4_active_pane_ParamLimits

0x21b8,	// (0x00041733) tabs_4_active_pane

0x21c9,	// (0x00041744) tabs_4_passive_pane_ParamLimits

0x21c9,	// (0x00041744) tabs_4_passive_pane

0x21da,	// (0x00041755) tabs_4_passive_pane_cp_ParamLimits

0x21da,	// (0x00041755) tabs_4_passive_pane_cp

0x21eb,	// (0x00041766) tabs_4_passive_pane_cp2_ParamLimits

0x21eb,	// (0x00041766) tabs_4_passive_pane_cp2

0x2194,	// (0x0004170f) tabs_2_long_active_pane_ParamLimits

0x2194,	// (0x0004170f) tabs_2_long_active_pane

0x21a6,	// (0x00041721) tabs_2_long_passive_pane_ParamLimits

0x21a6,	// (0x00041721) tabs_2_long_passive_pane

0x2155,	// (0x000416d0) tabs_3_long_active_pane_ParamLimits

0x2155,	// (0x000416d0) tabs_3_long_active_pane

0x2168,	// (0x000416e3) tabs_3_long_passive_pane_ParamLimits

0x2168,	// (0x000416e3) tabs_3_long_passive_pane

0x2181,	// (0x000416fc) tabs_3_long_passive_pane_cp_ParamLimits

0x2181,	// (0x000416fc) tabs_3_long_passive_pane_cp

0x20fb,	// (0x00041676) volume_small_pane_g1

0x2104,	// (0x0004167f) volume_small_pane_g2

0x210d,	// (0x00041688) volume_small_pane_g3

0x2116,	// (0x00041691) volume_small_pane_g4

0x211f,	// (0x0004169a) volume_small_pane_g5

0x2128,	// (0x000416a3) volume_small_pane_g6

0x2131,	// (0x000416ac) volume_small_pane_g7

0x213a,	// (0x000416b5) volume_small_pane_g8

0x2143,	// (0x000416be) volume_small_pane_g9

0x214c,	// (0x000416c7) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0004ee31) volume_small_pane_g

0x384f,	// (0x00042dca) bg_active_tab_pane_cp2_ParamLimits

0x384f,	// (0x00042dca) bg_active_tab_pane_cp2

0x35e2,	// (0x00042b5d) tabs_3_active_pane_g1

0xcffe,	// (0x0004c579) tabs_3_active_pane_t1

0x384f,	// (0x00042dca) bg_passive_tab_pane_cp2_ParamLimits

0x384f,	// (0x00042dca) bg_passive_tab_pane_cp2

0x35e2,	// (0x00042b5d) tabs_3_passive_pane_g1

0xcffe,	// (0x0004c579) tabs_3_passive_pane_t1

0x384f,	// (0x00042dca) bg_active_tab_pane_cp3_ParamLimits

0x384f,	// (0x00042dca) bg_active_tab_pane_cp3

0x35fc,	// (0x00042b77) tabs_4_active_pane_g1

0xd010,	// (0x0004c58b) tabs_4_active_pane_t1

0x384f,	// (0x00042dca) bg_passive_tab_pane_cp3_ParamLimits

0x384f,	// (0x00042dca) bg_passive_tab_pane_cp3

0x35fc,	// (0x00042b77) tabs_4_1_passive_pane_g1

0xd010,	// (0x0004c58b) tabs_4_1_passive_pane_t1

0x4e17,	// (0x00044392) list_highlight_pane_cp2

0xdc6d,	// (0x0004d1e8) list_set_pane_ParamLimits

0xdc6d,	// (0x0004d1e8) list_set_pane

0xdd07,	// (0x0004d282) main_pane_set_t1_ParamLimits

0xdd07,	// (0x0004d282) main_pane_set_t1

0xdd27,	// (0x0004d2a2) main_pane_set_t2_ParamLimits

0xdd27,	// (0x0004d2a2) main_pane_set_t2

0xdd3b,	// (0x0004d2b6) main_pane_set_t3_ParamLimits

0xdd3b,	// (0x0004d2b6) main_pane_set_t3

0xdd4d,	// (0x0004d2c8) main_pane_set_t4_ParamLimits

0xdd4d,	// (0x0004d2c8) main_pane_set_t4

0x0003,

0xf986,	// (0x0004ef01) main_pane_set_t_ParamLimits

0xf986,	// (0x0004ef01) main_pane_set_t

0xdd5f,	// (0x0004d2da) setting_code_pane

0xdd69,	// (0x0004d2e4) setting_slider_graphic_pane

0xdd69,	// (0x0004d2e4) setting_slider_pane

0xdd69,	// (0x0004d2e4) setting_text_pane

0xdd69,	// (0x0004d2e4) setting_volume_pane

0x12a6,	// (0x00040821) volume_set_pane

0x35d4,	// (0x00042b4f) bg_set_opt_pane_cp

0x12ae,	// (0x00040829) setting_slider_pane_t1

0x12c7,	// (0x00040842) setting_slider_pane_t2

0x12e1,	// (0x0004085c) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0004ead9) setting_slider_pane_t

0x12f9,	// (0x00040874) slider_set_pane

0x34f4,	// (0x00042a6f) bg_set_opt_pane_cp2

0x3616,	// (0x00042b91) setting_slider_graphic_pane_g1

0x130f,	// (0x0004088a) setting_slider_graphic_pane_t1

0x131f,	// (0x0004089a) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0004eae0) setting_slider_graphic_pane_t

0x132f,	// (0x000408aa) slider_set_pane_cp

0x34f4,	// (0x00042a6f) input_focus_pane_cp1

0x66e8,	// (0x00045c63) list_set_text_pane

0x34ea,	// (0x00042a65) setting_text_pane_g1

0x34f4,	// (0x00042a6f) input_focus_pane_cp2

0x34ea,	// (0x00042a65) setting_code_pane_g1

0x361f,	// (0x00042b9a) setting_code_pane_t1

0xf535,	// (0x0004eab0) set_text_pane_t1_ParamLimits

0xf535,	// (0x0004eab0) set_text_pane_t1

0x3e9e,	// (0x00043419) set_opt_bg_pane_g1

0x3ea6,	// (0x00043421) set_opt_bg_pane_g2

0x66c2,	// (0x00045c3d) set_opt_bg_pane_g3

0x3eb6,	// (0x00043431) set_opt_bg_pane_g4

0x3ebe,	// (0x00043439) set_opt_bg_pane_g5

0x3ec6,	// (0x00043441) set_opt_bg_pane_g6

0x66cc,	// (0x00045c47) set_opt_bg_pane_g7

0x66d4,	// (0x00045c4f) set_opt_bg_pane_g8

0x66de,	// (0x00045c59) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0004eeee) set_opt_bg_pane_g

0x66b5,	// (0x00045c30) slider_set_pane_g1

0x22c3,	// (0x0004183e) slider_set_pane_g2

0x0006,

0xf964,	// (0x0004eedf) slider_set_pane_g

0x225f,	// (0x000417da) volume_set_pane_g1

0x2267,	// (0x000417e2) volume_set_pane_g2

0x226f,	// (0x000417ea) volume_set_pane_g3

0x2277,	// (0x000417f2) volume_set_pane_g4

0x227f,	// (0x000417fa) volume_set_pane_g5

0x2287,	// (0x00041802) volume_set_pane_g6

0x228f,	// (0x0004180a) volume_set_pane_g7

0x2297,	// (0x00041812) volume_set_pane_g8

0x229f,	// (0x0004181a) volume_set_pane_g9

0x22a7,	// (0x00041822) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0004eeb7) volume_set_pane_g

0xd022,	// (0x0004c59d) indicator_pane_ParamLimits

0xd022,	// (0x0004c59d) indicator_pane

0xd04a,	// (0x0004c5c5) main_idle_pane_g2_ParamLimits

0xd04a,	// (0x0004c5c5) main_idle_pane_g2

0xd082,	// (0x0004c5fd) main_pane_idle_g1_ParamLimits

0xd082,	// (0x0004c5fd) main_pane_idle_g1

0x366e,	// (0x00042be9) popup_clock_digital_analogue_window_ParamLimits

0x366e,	// (0x00042be9) popup_clock_digital_analogue_window

0xd0a9,	// (0x0004c624) soft_indicator_pane_ParamLimits

0xd0a9,	// (0x0004c624) soft_indicator_pane

0xd0c3,	// (0x0004c63e) wallpaper_pane_ParamLimits

0xd0c3,	// (0x0004c63e) wallpaper_pane

0x34ea,	// (0x00042a65) wallpaper_pane_g1

0xd0d5,	// (0x0004c650) indicator_pane_g1_ParamLimits

0xd0d5,	// (0x0004c650) indicator_pane_g1

0x6a97,	// (0x00046012) navi_navi_icon_text_pane_srt_g1

0x36c0,	// (0x00042c3b) soft_indicator_pane_t1

0x36da,	// (0x00042c55) aid_ps_area_pane

0xd0eb,	// (0x0004c666) aid_ps_clock_pane

0x36f9,	// (0x00042c74) aid_ps_indicator_pane

0x3705,	// (0x00042c80) indicator_ps_pane_ParamLimits

0x3705,	// (0x00042c80) indicator_ps_pane

0x3714,	// (0x00042c8f) power_save_pane_g1_ParamLimits

0x3714,	// (0x00042c8f) power_save_pane_g1

0x3720,	// (0x00042c9b) power_save_pane_g2_ParamLimits

0x3720,	// (0x00042c9b) power_save_pane_g2

0x0eb7,	// (0x00040432) aid_navinavi_width_pane

0x36da,	// (0x00042c55) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0004eae5) power_save_pane_g_ParamLimits

0xf56a,	// (0x0004eae5) power_save_pane_g

0x372e,	// (0x00042ca9) power_save_pane_t1_ParamLimits

0x372e,	// (0x00042ca9) power_save_pane_t1

0xd0eb,	// (0x0004c666) aid_ps_clock_pane_ParamLimits

0x36f9,	// (0x00042c74) aid_ps_indicator_pane_ParamLimits

0x3740,	// (0x00042cbb) power_save_pane_t4_ParamLimits

0x3740,	// (0x00042cbb) power_save_pane_t4

0x0001,

0xf56f,	// (0x0004eaea) power_save_pane_t_ParamLimits

0xf56f,	// (0x0004eaea) power_save_pane_t

0x376a,	// (0x00042ce5) power_save_t3_ParamLimits

0x376a,	// (0x00042ce5) power_save_t3

0x3755,	// (0x00042cd0) power_save_t2_ParamLimits

0x3755,	// (0x00042cd0) power_save_t2

0x377f,	// (0x00042cfa) indicator_ps_pane_g1

0xd0f9,	// (0x0004c674) ai_gene_pane_ParamLimits

0xd0f9,	// (0x0004c674) ai_gene_pane

0xd110,	// (0x0004c68b) ai_links_pane_ParamLimits

0xd110,	// (0x0004c68b) ai_links_pane

0xd128,	// (0x0004c6a3) indicator_pane_cp1_ParamLimits

0xd128,	// (0x0004c6a3) indicator_pane_cp1

0xd137,	// (0x0004c6b2) main_pane_idle_g1_cp_ParamLimits

0xd137,	// (0x0004c6b2) main_pane_idle_g1_cp

0x37b8,	// (0x00042d33) popup_ai_links_title_window

0xd14f,	// (0x0004c6ca) soft_indicator_pane_cp1_ParamLimits

0xd14f,	// (0x0004c6ca) soft_indicator_pane_cp1

0x64a3,	// (0x00045a1e) ai_links_pane_g1

0x64ac,	// (0x00045a27) grid_ai_links_pane

0xdbb0,	// (0x0004d12b) ai_gene_pane_1

0x6491,	// (0x00045a0c) ai_gene_pane_2

0x649a,	// (0x00045a15) list_highlight_pane_cp4

0xdb8c,	// (0x0004d107) cell_ai_link_pane_ParamLimits

0xdb8c,	// (0x0004d107) cell_ai_link_pane

0x6462,	// (0x000459dd) cell_ai_link_pane_g1

0x39f1,	// (0x00042f6c) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0004ee92) cell_ai_link_pane_g

0x34f4,	// (0x00042a6f) grid_highlight_cp2

0x34f4,	// (0x00042a6f) bg_popup_sub_pane_cp1

0x37db,	// (0x00042d56) popup_ai_links_title_window_t1

0x63b0,	// (0x0004592b) ai_gene_pane_1_g1_ParamLimits

0x63b0,	// (0x0004592b) ai_gene_pane_1_g1

0x63bc,	// (0x00045937) ai_gene_pane_1_g2_ParamLimits

0x63bc,	// (0x00045937) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0004ee88) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0004ee88) ai_gene_pane_1_g

0x63c9,	// (0x00045944) ai_gene_pane_1_t1_ParamLimits

0x63c9,	// (0x00045944) ai_gene_pane_1_t1

0x63fd,	// (0x00045978) grid_ai_soft_ind_pane

0x639b,	// (0x00045916) ai_gene_pane_2_t1_ParamLimits

0x639b,	// (0x00045916) ai_gene_pane_2_t1

0xd163,	// (0x0004c6de) main_pane_empty_t1_ParamLimits

0xd163,	// (0x0004c6de) main_pane_empty_t1

0xd17b,	// (0x0004c6f6) main_pane_empty_t2_ParamLimits

0xd17b,	// (0x0004c6f6) main_pane_empty_t2

0xd190,	// (0x0004c70b) main_pane_empty_t3_ParamLimits

0xd190,	// (0x0004c70b) main_pane_empty_t3

0xd1a2,	// (0x0004c71d) main_pane_empty_t4_ParamLimits

0xd1a2,	// (0x0004c71d) main_pane_empty_t4

0xd1b4,	// (0x0004c72f) main_pane_empty_t5_ParamLimits

0xd1b4,	// (0x0004c72f) main_pane_empty_t5

0x0004,

0xf574,	// (0x0004eaef) main_pane_empty_t_ParamLimits

0xf574,	// (0x0004eaef) main_pane_empty_t

0x3eef,	// (0x0004346a) bg_popup_window_pane_ParamLimits

0x3eef,	// (0x0004346a) bg_popup_window_pane

0x610b,	// (0x00045686) find_popup_pane_cp2_ParamLimits

0x610b,	// (0x00045686) find_popup_pane_cp2

0x6117,	// (0x00045692) heading_pane_ParamLimits

0x6117,	// (0x00045692) heading_pane

0x34f4,	// (0x00042a6f) bg_popup_sub_pane

0xdb0d,	// (0x0004d088) bg_popup_window_pane_g1_ParamLimits

0xdb0d,	// (0x0004d088) bg_popup_window_pane_g1

0xdb1c,	// (0x0004d097) bg_popup_window_pane_g2_ParamLimits

0xdb1c,	// (0x0004d097) bg_popup_window_pane_g2

0xdb28,	// (0x0004d0a3) bg_popup_window_pane_g3_ParamLimits

0xdb28,	// (0x0004d0a3) bg_popup_window_pane_g3

0xdb34,	// (0x0004d0af) bg_popup_window_pane_g4_ParamLimits

0xdb34,	// (0x0004d0af) bg_popup_window_pane_g4

0xdb43,	// (0x0004d0be) bg_popup_window_pane_g5_ParamLimits

0xdb43,	// (0x0004d0be) bg_popup_window_pane_g5

0xdb53,	// (0x0004d0ce) bg_popup_window_pane_g6_ParamLimits

0xdb53,	// (0x0004d0ce) bg_popup_window_pane_g6

0xdb5f,	// (0x0004d0da) bg_popup_window_pane_g7_ParamLimits

0xdb5f,	// (0x0004d0da) bg_popup_window_pane_g7

0xdb6e,	// (0x0004d0e9) bg_popup_window_pane_g8_ParamLimits

0xdb6e,	// (0x0004d0e9) bg_popup_window_pane_g8

0xdb7d,	// (0x0004d0f8) bg_popup_window_pane_g9_ParamLimits

0xdb7d,	// (0x0004d0f8) bg_popup_window_pane_g9

0x60f1,	// (0x0004566c) bg_popup_window_pane_g10_ParamLimits

0x60f1,	// (0x0004566c) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0004ee50) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0004ee50) bg_popup_window_pane_g

0x600e,	// (0x00045589) bg_popup_heading_pane_ParamLimits

0x600e,	// (0x00045589) bg_popup_heading_pane

0x23e1,	// (0x0004195c) tabs_4_passive_pane_cp_srt_ParamLimits

0x23e1,	// (0x0004195c) tabs_4_passive_pane_cp_srt

0x23f3,	// (0x0004196e) tabs_4_passive_pane_srt_ParamLimits

0x602e,	// (0x000455a9) heading_pane_g2

0x23f3,	// (0x0004196e) tabs_4_passive_pane_srt

0x5395,	// (0x00044910) bg_passive_tab_pane_cp3_srt_ParamLimits

0x5395,	// (0x00044910) bg_passive_tab_pane_cp3_srt

0x6036,	// (0x000455b1) heading_pane_t1_ParamLimits

0x6036,	// (0x000455b1) heading_pane_t1

0x604d,	// (0x000455c8) heading_pane_t2_ParamLimits

0x604d,	// (0x000455c8) heading_pane_t2

0x0001,

0xf8d0,	// (0x0004ee4b) heading_pane_t_ParamLimits

0xf8d0,	// (0x0004ee4b) heading_pane_t

0x5b3b,	// (0x000450b6) bg_popup_heading_pane_g1

0x5bea,	// (0x00045165) bg_popup_heading_pane_g2

0x5bf4,	// (0x0004516f) bg_popup_heading_pane_g3

0x5bfe,	// (0x00045179) bg_popup_heading_pane_g4

0x5c08,	// (0x00045183) bg_popup_heading_pane_g5

0x5c12,	// (0x0004518d) bg_popup_heading_pane_g6

0x5c1a,	// (0x00045195) bg_popup_heading_pane_g7

0x5c22,	// (0x0004519d) bg_popup_heading_pane_g8

0x5c2c,	// (0x000451a7) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0004ee07) bg_popup_heading_pane_g

0x5321,	// (0x0004489c) bg_popup_sub_pane_g1

0x5329,	// (0x000448a4) bg_popup_sub_pane_g2

0x5331,	// (0x000448ac) bg_popup_sub_pane_g3

0x5339,	// (0x000448b4) bg_popup_sub_pane_g4

0x5341,	// (0x000448bc) bg_popup_sub_pane_g5

0x5349,	// (0x000448c4) bg_popup_sub_pane_g6

0x5351,	// (0x000448cc) bg_popup_sub_pane_g7

0x5359,	// (0x000448d4) bg_popup_sub_pane_g8

0x5361,	// (0x000448dc) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0004ede1) bg_popup_sub_pane_g

0x384f,	// (0x00042dca) bg_popup_window_pane_cp5_ParamLimits

0x384f,	// (0x00042dca) bg_popup_window_pane_cp5

0x386b,	// (0x00042de6) popup_note_window_g1_ParamLimits

0x386b,	// (0x00042de6) popup_note_window_g1

0x3877,	// (0x00042df2) popup_note_window_t1_ParamLimits

0x3877,	// (0x00042df2) popup_note_window_t1

0x388d,	// (0x00042e08) popup_note_window_t2_ParamLimits

0x388d,	// (0x00042e08) popup_note_window_t2

0x38a3,	// (0x00042e1e) popup_note_window_t3_ParamLimits

0x38a3,	// (0x00042e1e) popup_note_window_t3

0x38b9,	// (0x00042e34) popup_note_window_t4_ParamLimits

0x38b9,	// (0x00042e34) popup_note_window_t4

0x38e1,	// (0x00042e5c) popup_note_window_t5_ParamLimits

0x38e1,	// (0x00042e5c) popup_note_window_t5

0x0004,

0xf57f,	// (0x0004eafa) popup_note_window_t_ParamLimits

0xf57f,	// (0x0004eafa) popup_note_window_t

0x3905,	// (0x00042e80) bg_popup_window_pane_cp6_ParamLimits

0x3905,	// (0x00042e80) bg_popup_window_pane_cp6

0x5ab7,	// (0x00045032) popup_note_image_window_g1_ParamLimits

0x5ab7,	// (0x00045032) popup_note_image_window_g1

0x5ac3,	// (0x0004503e) popup_note_image_window_g2_ParamLimits

0x5ac3,	// (0x0004503e) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0004edd5) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0004edd5) popup_note_image_window_g

0x5adc,	// (0x00045057) popup_note_image_window_t1_ParamLimits

0x5adc,	// (0x00045057) popup_note_image_window_t1

0x5af5,	// (0x00045070) popup_note_image_window_t2_ParamLimits

0x5af5,	// (0x00045070) popup_note_image_window_t2

0x5b0e,	// (0x00045089) popup_note_image_window_t3_ParamLimits

0x5b0e,	// (0x00045089) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0004edda) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0004edda) popup_note_image_window_t

0x5978,	// (0x00044ef3) bg_popup_window_pane_cp7_ParamLimits

0x5978,	// (0x00044ef3) bg_popup_window_pane_cp7

0x59a8,	// (0x00044f23) popup_note_wait_window_g1_ParamLimits

0x59a8,	// (0x00044f23) popup_note_wait_window_g1

0x59b4,	// (0x00044f2f) popup_note_wait_window_g2_ParamLimits

0x59b4,	// (0x00044f2f) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0004edc3) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0004edc3) popup_note_wait_window_g

0x59cc,	// (0x00044f47) popup_note_wait_window_t1_ParamLimits

0x59cc,	// (0x00044f47) popup_note_wait_window_t1

0x59f3,	// (0x00044f6e) popup_note_wait_window_t2_ParamLimits

0x59f3,	// (0x00044f6e) popup_note_wait_window_t2

0x5a10,	// (0x00044f8b) popup_note_wait_window_t3_ParamLimits

0x5a10,	// (0x00044f8b) popup_note_wait_window_t3

0x5a23,	// (0x00044f9e) popup_note_wait_window_t4_ParamLimits

0x5a23,	// (0x00044f9e) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0004edca) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0004edca) popup_note_wait_window_t

0x5a48,	// (0x00044fc3) wait_bar_pane_ParamLimits

0x5a48,	// (0x00044fc3) wait_bar_pane

0x34f4,	// (0x00042a6f) wait_anim_pane

0x34f4,	// (0x00042a6f) wait_border_pane

0x34ea,	// (0x00042a65) wait_anim_pane_g1

0x34ea,	// (0x00042a65) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0004ec83) wait_anim_pane_g

0x591c,	// (0x00044e97) wait_border_pane_g1

0x5927,	// (0x00044ea2) wait_border_pane_g2

0x5930,	// (0x00044eab) wait_border_pane_g3

0x0002,

0xf841,	// (0x0004edbc) wait_border_pane_g

0x5787,	// (0x00044d02) bg_popup_window_pane_cp16_ParamLimits

0x5787,	// (0x00044d02) bg_popup_window_pane_cp16

0x5887,	// (0x00044e02) indicator_popup_pane_cp4_ParamLimits

0x5887,	// (0x00044e02) indicator_popup_pane_cp4

0x589b,	// (0x00044e16) popup_query_data_window_t1_ParamLimits

0x589b,	// (0x00044e16) popup_query_data_window_t1

0x58ad,	// (0x00044e28) popup_query_data_window_t2_ParamLimits

0x58ad,	// (0x00044e28) popup_query_data_window_t2

0x58c6,	// (0x00044e41) popup_query_data_window_t3_ParamLimits

0x58c6,	// (0x00044e41) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0004edb5) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0004edb5) popup_query_data_window_t

0x58e0,	// (0x00044e5b) query_popup_data_pane_ParamLimits

0x58e0,	// (0x00044e5b) query_popup_data_pane

0x58f4,	// (0x00044e6f) query_popup_data_pane_cp1_ParamLimits

0x58f4,	// (0x00044e6f) query_popup_data_pane_cp1

0x5787,	// (0x00044d02) bg_popup_window_pane_cp10_ParamLimits

0x5787,	// (0x00044d02) bg_popup_window_pane_cp10

0x57b9,	// (0x00044d34) indicator_popup_pane_ParamLimits

0x57b9,	// (0x00044d34) indicator_popup_pane

0x57db,	// (0x00044d56) popup_query_code_window_t1_ParamLimits

0x57db,	// (0x00044d56) popup_query_code_window_t1

0x57f5,	// (0x00044d70) popup_query_code_window_t2_ParamLimits

0x57f5,	// (0x00044d70) popup_query_code_window_t2

0x583e,	// (0x00044db9) popup_query_code_window_t3_ParamLimits

0x583e,	// (0x00044db9) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0004edae) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0004edae) popup_query_code_window_t

0x586d,	// (0x00044de8) query_popup_pane_ParamLimits

0x586d,	// (0x00044de8) query_popup_pane

0x3905,	// (0x00042e80) bg_popup_window_pane_cp15_ParamLimits

0x3905,	// (0x00042e80) bg_popup_window_pane_cp15

0x3923,	// (0x00042e9e) indicator_popup_pane_cp1_ParamLimits

0x3923,	// (0x00042e9e) indicator_popup_pane_cp1

0x3936,	// (0x00042eb1) indicator_popup_pane_cp2_ParamLimits

0x3936,	// (0x00042eb1) indicator_popup_pane_cp2

0x3949,	// (0x00042ec4) popup_query_data_code_window_g1_ParamLimits

0x3949,	// (0x00042ec4) popup_query_data_code_window_g1

0x395c,	// (0x00042ed7) popup_query_data_code_window_t1_ParamLimits

0x395c,	// (0x00042ed7) popup_query_data_code_window_t1

0x396e,	// (0x00042ee9) popup_query_data_code_window_t2_ParamLimits

0x396e,	// (0x00042ee9) popup_query_data_code_window_t2

0x3980,	// (0x00042efb) popup_query_data_code_window_t3_ParamLimits

0x3980,	// (0x00042efb) popup_query_data_code_window_t3

0x3996,	// (0x00042f11) popup_query_data_code_window_t4_ParamLimits

0x3996,	// (0x00042f11) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0004eb05) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0004eb05) popup_query_data_code_window_t

0x200c,	// (0x00041587) list_single_midp_graphic_pane_g3

0x39ae,	// (0x00042f29) query_popup_data_pane_cp2_ParamLimits

0x39c1,	// (0x00042f3c) query_popup_pane_cp2_ParamLimits

0x39c1,	// (0x00042f3c) query_popup_pane_cp2

0x34f4,	// (0x00042a6f) bg_popup_window_pane_cp11

0x577f,	// (0x00044cfa) heading_pane_cp5

0x3aac,	// (0x00043027) listscroll_popup_info_pane

0x34f4,	// (0x00042a6f) input_focus_pane_cp3

0x39d4,	// (0x00042f4f) query_popup_pane_t1

0x39e2,	// (0x00042f5d) list_popup_info_pane_ParamLimits

0x39e2,	// (0x00042f5d) list_popup_info_pane

0x39f1,	// (0x00042f6c) listscroll_popup_info_pane_g1

0x39f9,	// (0x00042f74) scroll_pane_cp7

0x3a03,	// (0x00042f7e) popup_info_list_pane_t1_ParamLimits

0x3a03,	// (0x00042f7e) popup_info_list_pane_t1

0x3a1d,	// (0x00042f98) popup_info_list_pane_t2_ParamLimits

0x3a1d,	// (0x00042f98) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0004eb0e) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0004eb0e) popup_info_list_pane_t

0x34f4,	// (0x00042a6f) bg_popup_window_pane_cp12

0x6ab1,	// (0x0004602c) find_popup_pane

0x35d4,	// (0x00042b4f) bg_popup_window_pane_cp3

0x3a37,	// (0x00042fb2) heading_pane_cp3

0x3a43,	// (0x00042fbe) listscroll_popup_graphic_pane

0x34f4,	// (0x00042a6f) bg_popup_window_pane_cp4

0xd216,	// (0x0004c791) heading_pane_cp4

0x3aac,	// (0x00043027) listscroll_popup_colour_pane

0x3ab4,	// (0x0004302f) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3ab4,	// (0x0004302f) cell_large_graphic_colour_none_popup_pane

0xd21e,	// (0x0004c799) grid_large_graphic_colour_popup_pane_ParamLimits

0xd21e,	// (0x0004c799) grid_large_graphic_colour_popup_pane

0x3af4,	// (0x0004306f) listscroll_popup_colour_pane_g1_ParamLimits

0x3af4,	// (0x0004306f) listscroll_popup_colour_pane_g1

0x3b0b,	// (0x00043086) listscroll_popup_colour_pane_g2_ParamLimits

0x3b0b,	// (0x00043086) listscroll_popup_colour_pane_g2

0x3b22,	// (0x0004309d) listscroll_popup_colour_pane_g3_ParamLimits

0x3b22,	// (0x0004309d) listscroll_popup_colour_pane_g3

0xd242,	// (0x0004c7bd) listscroll_popup_colour_pane_g4_ParamLimits

0xd242,	// (0x0004c7bd) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0004eb13) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0004eb13) listscroll_popup_colour_pane_g

0x3b46,	// (0x000430c1) scroll_pane_cp6_ParamLimits

0x3b46,	// (0x000430c1) scroll_pane_cp6

0xd252,	// (0x0004c7cd) cell_large_graphic_colour_popup_pane_ParamLimits

0xd252,	// (0x0004c7cd) cell_large_graphic_colour_popup_pane

0x3b77,	// (0x000430f2) cell_large_graphic_colour_none_popup_pane_t1

0x34f4,	// (0x00042a6f) grid_highlight_pane_cp5

0x3b86,	// (0x00043101) cell_large_graphic_colour_popup_pane_g1

0x3b8e,	// (0x00043109) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0004eb1c) cell_large_graphic_colour_popup_pane_g

0x3b96,	// (0x00043111) cell_large_graphic_colour_popup_pane_g2_copy1

0x3b9f,	// (0x0004311a) grid_highlight_pane_cp4

0x3ba7,	// (0x00043122) bg_popup_window_pane_cp8_ParamLimits

0x3ba7,	// (0x00043122) bg_popup_window_pane_cp8

0x3bc2,	// (0x0004313d) popup_snote_single_text_window_g1_ParamLimits

0x3bc2,	// (0x0004313d) popup_snote_single_text_window_g1

0x3bd4,	// (0x0004314f) popup_snote_single_text_window_t1_ParamLimits

0x3bd4,	// (0x0004314f) popup_snote_single_text_window_t1

0x3be7,	// (0x00043162) popup_snote_single_text_window_t2_ParamLimits

0x3be7,	// (0x00043162) popup_snote_single_text_window_t2

0x3bfa,	// (0x00043175) popup_snote_single_text_window_t3_ParamLimits

0x3bfa,	// (0x00043175) popup_snote_single_text_window_t3

0x3c33,	// (0x000431ae) popup_snote_single_text_window_t4_ParamLimits

0x3c33,	// (0x000431ae) popup_snote_single_text_window_t4

0x3c67,	// (0x000431e2) popup_snote_single_text_window_t5_ParamLimits

0x3c67,	// (0x000431e2) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0004eb21) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0004eb21) popup_snote_single_text_window_t

0x3c96,	// (0x00043211) bg_popup_window_pane_cp9_ParamLimits

0x3c96,	// (0x00043211) bg_popup_window_pane_cp9

0x3bc2,	// (0x0004313d) popup_snote_single_graphic_window_g1_ParamLimits

0x3bc2,	// (0x0004313d) popup_snote_single_graphic_window_g1

0x3ca4,	// (0x0004321f) popup_snote_single_graphic_window_g2_ParamLimits

0x3ca4,	// (0x0004321f) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0004eb2c) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0004eb2c) popup_snote_single_graphic_window_g

0x3cb0,	// (0x0004322b) popup_snote_single_graphic_window_t1_ParamLimits

0x3cb0,	// (0x0004322b) popup_snote_single_graphic_window_t1

0x3cc3,	// (0x0004323e) popup_snote_single_graphic_window_t2_ParamLimits

0x3cc3,	// (0x0004323e) popup_snote_single_graphic_window_t2

0x3cd6,	// (0x00043251) popup_snote_single_graphic_window_t3_ParamLimits

0x3cd6,	// (0x00043251) popup_snote_single_graphic_window_t3

0x3d0f,	// (0x0004328a) popup_snote_single_graphic_window_t4_ParamLimits

0x3d0f,	// (0x0004328a) popup_snote_single_graphic_window_t4

0x3d43,	// (0x000432be) popup_snote_single_graphic_window_t5_ParamLimits

0x3d43,	// (0x000432be) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0004eb31) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0004eb31) popup_snote_single_graphic_window_t

0x69f5,	// (0x00045f70) grid_graphic_popup_pane_ParamLimits

0x69f5,	// (0x00045f70) grid_graphic_popup_pane

0x6a1d,	// (0x00045f98) listscroll_popup_graphic_pane_g1_ParamLimits

0x6a1d,	// (0x00045f98) listscroll_popup_graphic_pane_g1

0xde61,	// (0x0004d3dc) listscroll_popup_graphic_pane_g2_ParamLimits

0xde61,	// (0x0004d3dc) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0004ef2b) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0004ef2b) listscroll_popup_graphic_pane_g

0x6a45,	// (0x00045fc0) scroll_pane_cp5

0xde1d,	// (0x0004d398) cell_graphic_popup_pane_ParamLimits

0xde1d,	// (0x0004d398) cell_graphic_popup_pane

0x6973,	// (0x00045eee) cell_graphic_popup_pane_g1

0x697b,	// (0x00045ef6) cell_graphic_popup_pane_g2

0x3b96,	// (0x00043111) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0004ef24) cell_graphic_popup_pane_g

0x6984,	// (0x00045eff) cell_graphic_popup_pane_t2

0x3b9f,	// (0x0004311a) grid_highlight_pane_cp3

0x3d84,	// (0x000432ff) list_gen_pane_ParamLimits

0x3d84,	// (0x000432ff) list_gen_pane

0x3db6,	// (0x00043331) scroll_pane

0xddd4,	// (0x0004d34f) bg_list_pane_g1_ParamLimits

0xddd4,	// (0x0004d34f) bg_list_pane_g1

0x68e8,	// (0x00045e63) bg_list_pane_g2_ParamLimits

0x68e8,	// (0x00045e63) bg_list_pane_g2

0x68fd,	// (0x00045e78) bg_list_pane_g3_ParamLimits

0x68fd,	// (0x00045e78) bg_list_pane_g3

0x6911,	// (0x00045e8c) bg_list_pane_g4_ParamLimits

0x6911,	// (0x00045e8c) bg_list_pane_g4

0xddf1,	// (0x0004d36c) bg_list_pane_g5_ParamLimits

0xddf1,	// (0x0004d36c) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0004ef19) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0004ef19) bg_list_pane_g

0xdd9c,	// (0x0004d317) list_double2_graphic_large_graphic_pane_ParamLimits

0xdd9c,	// (0x0004d317) list_double2_graphic_large_graphic_pane

0xdd9c,	// (0x0004d317) list_double2_graphic_pane_ParamLimits

0xdd9c,	// (0x0004d317) list_double2_graphic_pane

0xdd9c,	// (0x0004d317) list_double2_large_graphic_pane_ParamLimits

0xdd9c,	// (0x0004d317) list_double2_large_graphic_pane

0xdd9c,	// (0x0004d317) list_double2_pane_ParamLimits

0xdd9c,	// (0x0004d317) list_double2_pane

0xdd9c,	// (0x0004d317) list_double_graphic_heading_pane_ParamLimits

0xdd9c,	// (0x0004d317) list_double_graphic_heading_pane

0xdd9c,	// (0x0004d317) list_double_graphic_pane_ParamLimits

0xdd9c,	// (0x0004d317) list_double_graphic_pane

0xdd9c,	// (0x0004d317) list_double_heading_pane_ParamLimits

0xdd9c,	// (0x0004d317) list_double_heading_pane

0xdd9c,	// (0x0004d317) list_double_large_graphic_pane_ParamLimits

0xdd9c,	// (0x0004d317) list_double_large_graphic_pane

0xdd9c,	// (0x0004d317) list_double_number_pane_ParamLimits

0xdd9c,	// (0x0004d317) list_double_number_pane

0xdd9c,	// (0x0004d317) list_double_pane_ParamLimits

0xdd9c,	// (0x0004d317) list_double_pane

0xdd9c,	// (0x0004d317) list_double_time_pane_ParamLimits

0xdd9c,	// (0x0004d317) list_double_time_pane

0xdd9c,	// (0x0004d317) list_setting_number_pane_ParamLimits

0xdd9c,	// (0x0004d317) list_setting_number_pane

0xdd9c,	// (0x0004d317) list_setting_pane_ParamLimits

0xdd9c,	// (0x0004d317) list_setting_pane

0xddae,	// (0x0004d329) list_single_2graphic_pane_ParamLimits

0xddae,	// (0x0004d329) list_single_2graphic_pane

0xddae,	// (0x0004d329) list_single_graphic_heading_pane_ParamLimits

0xddae,	// (0x0004d329) list_single_graphic_heading_pane

0xddae,	// (0x0004d329) list_single_graphic_pane_ParamLimits

0xddae,	// (0x0004d329) list_single_graphic_pane

0xddae,	// (0x0004d329) list_single_heading_pane_ParamLimits

0xddae,	// (0x0004d329) list_single_heading_pane

0xdd9c,	// (0x0004d317) list_single_large_graphic_pane_ParamLimits

0xdd9c,	// (0x0004d317) list_single_large_graphic_pane

0xddae,	// (0x0004d329) list_single_number_heading_pane_ParamLimits

0xddae,	// (0x0004d329) list_single_number_heading_pane

0xddae,	// (0x0004d329) list_single_number_pane_ParamLimits

0xddae,	// (0x0004d329) list_single_number_pane

0xddae,	// (0x0004d329) list_single_pane_ParamLimits

0xddae,	// (0x0004d329) list_single_pane

0x34f4,	// (0x00042a6f) list_highlight_pane_cp1

0x4a12,	// (0x00043f8d) list_single_pane_g1_ParamLimits

0x4a12,	// (0x00043f8d) list_single_pane_g1

0x1fdb,	// (0x00041556) list_single_pane_g2_ParamLimits

0x1fdb,	// (0x00041556) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0004eb4d) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0004eb4d) list_single_pane_g

0x0993,	// (0x0003ff0e) list_single_pane_t1_ParamLimits

0x0993,	// (0x0003ff0e) list_single_pane_t1

0x4a12,	// (0x00043f8d) list_single_number_pane_g1_ParamLimits

0x4a12,	// (0x00043f8d) list_single_number_pane_g1

0x1fdb,	// (0x00041556) list_single_number_pane_g2_ParamLimits

0x1fdb,	// (0x00041556) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0004eb4d) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0004eb4d) list_single_number_pane_g

0x0729,	// (0x0003fca4) list_single_number_pane_t1_ParamLimits

0x0729,	// (0x0003fca4) list_single_number_pane_t1

0xbba6,	// (0x0004b121) list_single_number_pane_t2_ParamLimits

0xbba6,	// (0x0004b121) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0004eeda) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0004eeda) list_single_number_pane_t

0xb547,	// (0x0004aac2) list_single_graphic_pane_g1_ParamLimits

0xb547,	// (0x0004aac2) list_single_graphic_pane_g1

0x4a12,	// (0x00043f8d) list_single_graphic_pane_g2_ParamLimits

0x4a12,	// (0x00043f8d) list_single_graphic_pane_g2

0x1fdb,	// (0x00041556) list_single_graphic_pane_g3_ParamLimits

0x1fdb,	// (0x00041556) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0004eb3c) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0004eb3c) list_single_graphic_pane_g

0xb553,	// (0x0004aace) list_single_graphic_pane_t1_ParamLimits

0xb553,	// (0x0004aace) list_single_graphic_pane_t1

0xb569,	// (0x0004aae4) list_single_heading_pane_g1_ParamLimits

0xb569,	// (0x0004aae4) list_single_heading_pane_g1

0x1fdb,	// (0x00041556) list_single_heading_pane_g2_ParamLimits

0x1fdb,	// (0x00041556) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0004eb43) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0004eb43) list_single_heading_pane_g

0xb57c,	// (0x0004aaf7) list_single_heading_pane_t1_ParamLimits

0xb57c,	// (0x0004aaf7) list_single_heading_pane_t1

0xbf7c,	// (0x0004b4f7) list_single_heading_pane_t2_ParamLimits

0xbf7c,	// (0x0004b4f7) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0004eb48) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0004eb48) list_single_heading_pane_t

0x4a12,	// (0x00043f8d) list_single_number_heading_pane_g1_ParamLimits

0x4a12,	// (0x00043f8d) list_single_number_heading_pane_g1

0x1fdb,	// (0x00041556) list_single_number_heading_pane_g2_ParamLimits

0x1fdb,	// (0x00041556) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0004eb4d) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0004eb4d) list_single_number_heading_pane_g

0xb592,	// (0x0004ab0d) list_single_number_heading_pane_t1_ParamLimits

0xb592,	// (0x0004ab0d) list_single_number_heading_pane_t1

0xb5a8,	// (0x0004ab23) list_single_number_heading_pane_t2_ParamLimits

0xb5a8,	// (0x0004ab23) list_single_number_heading_pane_t2

0x096d,	// (0x0003fee8) list_single_number_heading_pane_t3_ParamLimits

0x096d,	// (0x0003fee8) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0004eb52) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0004eb52) list_single_number_heading_pane_t

0xb5ba,	// (0x0004ab35) list_single_graphic_heading_pane_g1_ParamLimits

0xb5ba,	// (0x0004ab35) list_single_graphic_heading_pane_g1

0xbf8e,	// (0x0004b509) list_single_graphic_heading_pane_g4_ParamLimits

0xbf8e,	// (0x0004b509) list_single_graphic_heading_pane_g4

0x1fdb,	// (0x00041556) list_single_graphic_heading_pane_g5_ParamLimits

0x1fdb,	// (0x00041556) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0004eb59) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0004eb59) list_single_graphic_heading_pane_g

0xb592,	// (0x0004ab0d) list_single_graphic_heading_pane_t1_ParamLimits

0xb592,	// (0x0004ab0d) list_single_graphic_heading_pane_t1

0xb5d2,	// (0x0004ab4d) list_single_graphic_heading_pane_t2_ParamLimits

0xb5d2,	// (0x0004ab4d) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0004eb60) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0004eb60) list_single_graphic_heading_pane_t

0x09a9,	// (0x0003ff24) list_single_large_graphic_pane_g1_ParamLimits

0x09a9,	// (0x0003ff24) list_single_large_graphic_pane_g1

0x09b5,	// (0x0003ff30) list_single_large_graphic_pane_g2_ParamLimits

0x09b5,	// (0x0003ff30) list_single_large_graphic_pane_g2

0x09c1,	// (0x0003ff3c) list_single_large_graphic_pane_g3_ParamLimits

0x09c1,	// (0x0003ff3c) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0004eb65) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0004eb65) list_single_large_graphic_pane_g

0x5927,	// (0x00044ea2) wait_border_pane_g2_copy1

0x1396,	// (0x00040911) list_single_large_graphic_pane_g4_cp2

0x09cd,	// (0x0003ff48) list_single_large_graphic_pane_t1_ParamLimits

0x09cd,	// (0x0003ff48) list_single_large_graphic_pane_t1

0x48fd,	// (0x00043e78) list_double_pane_g1_ParamLimits

0x48fd,	// (0x00043e78) list_double_pane_g1

0xbf9f,	// (0x0004b51a) list_double_pane_g2_ParamLimits

0xbf9f,	// (0x0004b51a) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0004eb6c) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0004eb6c) list_double_pane_g

0xb5e8,	// (0x0004ab63) list_double_pane_t1_ParamLimits

0xb5e8,	// (0x0004ab63) list_double_pane_t1

0xb5fe,	// (0x0004ab79) list_double_pane_t2_ParamLimits

0xb5fe,	// (0x0004ab79) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0004eb71) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0004eb71) list_double_pane_t

0xb610,	// (0x0004ab8b) list_double2_pane_g1_ParamLimits

0xb610,	// (0x0004ab8b) list_double2_pane_g1

0xb621,	// (0x0004ab9c) list_double2_pane_g2_ParamLimits

0xb621,	// (0x0004ab9c) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0004eb76) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0004eb76) list_double2_pane_g

0xb62d,	// (0x0004aba8) list_double2_pane_t1_ParamLimits

0xb62d,	// (0x0004aba8) list_double2_pane_t1

0xb643,	// (0x0004abbe) list_double2_pane_t2_ParamLimits

0xb643,	// (0x0004abbe) list_double2_pane_t2

0x0001,

0xf600,	// (0x0004eb7b) list_double2_pane_t_ParamLimits

0xf600,	// (0x0004eb7b) list_double2_pane_t

0x48fd,	// (0x00043e78) list_double_number_pane_g1_ParamLimits

0x48fd,	// (0x00043e78) list_double_number_pane_g1

0xbf9f,	// (0x0004b51a) list_double_number_pane_g2_ParamLimits

0xbf9f,	// (0x0004b51a) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0004eb6c) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0004eb6c) list_double_number_pane_g

0xb655,	// (0x0004abd0) list_double_number_pane_t1_ParamLimits

0xb655,	// (0x0004abd0) list_double_number_pane_t1

0xb667,	// (0x0004abe2) list_double_number_pane_t2_ParamLimits

0xb667,	// (0x0004abe2) list_double_number_pane_t2

0xb67d,	// (0x0004abf8) list_double_number_pane_t3_ParamLimits

0xb67d,	// (0x0004abf8) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0004eb80) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0004eb80) list_double_number_pane_t

0xb68f,	// (0x0004ac0a) list_double_graphic_pane_g1_ParamLimits

0xb68f,	// (0x0004ac0a) list_double_graphic_pane_g1

0xb69b,	// (0x0004ac16) list_double_graphic_pane_g2_ParamLimits

0xb69b,	// (0x0004ac16) list_double_graphic_pane_g2

0xb6aa,	// (0x0004ac25) list_double_graphic_pane_g3_ParamLimits

0xb6aa,	// (0x0004ac25) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0004eb87) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0004eb87) list_double_graphic_pane_g

0xb6b6,	// (0x0004ac31) list_double_graphic_pane_t1_ParamLimits

0xb6b6,	// (0x0004ac31) list_double_graphic_pane_t1

0xb6cc,	// (0x0004ac47) list_double_graphic_pane_t2_ParamLimits

0xb6cc,	// (0x0004ac47) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0004eb90) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0004eb90) list_double_graphic_pane_t

0xb6de,	// (0x0004ac59) list_double2_graphic_pane_g1_ParamLimits

0xb6de,	// (0x0004ac59) list_double2_graphic_pane_g1

0xb6ea,	// (0x0004ac65) list_double2_graphic_pane_g2_ParamLimits

0xb6ea,	// (0x0004ac65) list_double2_graphic_pane_g2

0xbfb7,	// (0x0004b532) list_double2_graphic_pane_g3_ParamLimits

0xbfb7,	// (0x0004b532) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0004eb95) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0004eb95) list_double2_graphic_pane_g

0xb6f6,	// (0x0004ac71) list_double2_graphic_pane_t1_ParamLimits

0xb6f6,	// (0x0004ac71) list_double2_graphic_pane_t1

0xb70c,	// (0x0004ac87) list_double2_graphic_pane_t2_ParamLimits

0xb70c,	// (0x0004ac87) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0004eb9c) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0004eb9c) list_double2_graphic_pane_t

0xb71e,	// (0x0004ac99) list_double_large_graphic_pane_g1_ParamLimits

0xb71e,	// (0x0004ac99) list_double_large_graphic_pane_g1

0xb73d,	// (0x0004acb8) list_double_large_graphic_pane_g2_ParamLimits

0xb73d,	// (0x0004acb8) list_double_large_graphic_pane_g2

0xbf9f,	// (0x0004b51a) list_double_large_graphic_pane_g3_ParamLimits

0xbf9f,	// (0x0004b51a) list_double_large_graphic_pane_g3

0xb753,	// (0x0004acce) list_double_large_graphic_pane_g4_ParamLimits

0xb753,	// (0x0004acce) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0004eba1) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0004eba1) list_double_large_graphic_pane_g

0xb765,	// (0x0004ace0) list_double_large_graphic_pane_t1_ParamLimits

0xb765,	// (0x0004ace0) list_double_large_graphic_pane_t1

0xb77e,	// (0x0004acf9) list_double_large_graphic_pane_t2_ParamLimits

0xb77e,	// (0x0004acf9) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0004ebac) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0004ebac) list_double_large_graphic_pane_t

0xb790,	// (0x0004ad0b) list_double2_large_graphic_pane_g1_ParamLimits

0xb790,	// (0x0004ad0b) list_double2_large_graphic_pane_g1

0xb79c,	// (0x0004ad17) list_double2_large_graphic_pane_g2_ParamLimits

0xb79c,	// (0x0004ad17) list_double2_large_graphic_pane_g2

0xbfb7,	// (0x0004b532) list_double2_large_graphic_pane_g3_ParamLimits

0xbfb7,	// (0x0004b532) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0004ebb1) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0004ebb1) list_double2_large_graphic_pane_g

0xb7ad,	// (0x0004ad28) list_double2_large_graphic_pane_t1_ParamLimits

0xb7ad,	// (0x0004ad28) list_double2_large_graphic_pane_t1

0xb7c3,	// (0x0004ad3e) list_double2_large_graphic_pane_t2_ParamLimits

0xb7c3,	// (0x0004ad3e) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0004ebb8) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0004ebb8) list_double2_large_graphic_pane_t

0xb7d5,	// (0x0004ad50) list_double_heading_pane_g1_ParamLimits

0xb7d5,	// (0x0004ad50) list_double_heading_pane_g1

0xb7e6,	// (0x0004ad61) list_double_heading_pane_g2_ParamLimits

0xb7e6,	// (0x0004ad61) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0004ebbd) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0004ebbd) list_double_heading_pane_g

0xb7f2,	// (0x0004ad6d) list_double_heading_pane_t1_ParamLimits

0xb7f2,	// (0x0004ad6d) list_double_heading_pane_t1

0xb643,	// (0x0004abbe) list_double_heading_pane_t2_ParamLimits

0xb643,	// (0x0004abbe) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0004ebc2) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0004ebc2) list_double_heading_pane_t

0xb808,	// (0x0004ad83) list_double_graphic_heading_pane_g1_ParamLimits

0xb808,	// (0x0004ad83) list_double_graphic_heading_pane_g1

0xb7d5,	// (0x0004ad50) list_double_graphic_heading_pane_g2_ParamLimits

0xb7d5,	// (0x0004ad50) list_double_graphic_heading_pane_g2

0xb7e6,	// (0x0004ad61) list_double_graphic_heading_pane_g3_ParamLimits

0xb7e6,	// (0x0004ad61) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0004ebc7) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0004ebc7) list_double_graphic_heading_pane_g

0xb814,	// (0x0004ad8f) list_double_graphic_heading_pane_t1_ParamLimits

0xb814,	// (0x0004ad8f) list_double_graphic_heading_pane_t1

0xb70c,	// (0x0004ac87) list_double_graphic_heading_pane_t2_ParamLimits

0xb70c,	// (0x0004ac87) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0004ebce) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0004ebce) list_double_graphic_heading_pane_t

0xb82a,	// (0x0004ada5) list_double_time_pane_g1_ParamLimits

0xb82a,	// (0x0004ada5) list_double_time_pane_g1

0xb83b,	// (0x0004adb6) list_double_time_pane_g2_ParamLimits

0xb83b,	// (0x0004adb6) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0004ebd3) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0004ebd3) list_double_time_pane_g

0xb847,	// (0x0004adc2) list_double_time_pane_t1_ParamLimits

0xb847,	// (0x0004adc2) list_double_time_pane_t1

0xb85d,	// (0x0004add8) list_double_time_pane_t2_ParamLimits

0xb85d,	// (0x0004add8) list_double_time_pane_t2

0xb86f,	// (0x0004adea) list_double_time_pane_t3_ParamLimits

0xb86f,	// (0x0004adea) list_double_time_pane_t3

0xb881,	// (0x0004adfc) list_double_time_pane_t4_ParamLimits

0xb881,	// (0x0004adfc) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x0004ebd8) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x0004ebd8) list_double_time_pane_t

0xb893,	// (0x0004ae0e) list_setting_pane_g1_ParamLimits

0xb893,	// (0x0004ae0e) list_setting_pane_g1

0xb621,	// (0x0004ab9c) list_setting_pane_g2_ParamLimits

0xb621,	// (0x0004ab9c) list_setting_pane_g2

0x0001,

0xf666,	// (0x0004ebe1) list_setting_pane_g_ParamLimits

0xf666,	// (0x0004ebe1) list_setting_pane_g

0xb89f,	// (0x0004ae1a) list_setting_pane_t1_ParamLimits

0xb89f,	// (0x0004ae1a) list_setting_pane_t1

0xb8b9,	// (0x0004ae34) list_setting_pane_t2_ParamLimits

0xb8b9,	// (0x0004ae34) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0004ebe6) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0004ebe6) list_setting_pane_t

0xb8f8,	// (0x0004ae73) set_value_pane_cp_ParamLimits

0xb8f8,	// (0x0004ae73) set_value_pane_cp

0xb904,	// (0x0004ae7f) list_setting_number_pane_g1_ParamLimits

0xb904,	// (0x0004ae7f) list_setting_number_pane_g1

0xb910,	// (0x0004ae8b) list_setting_number_pane_g2_ParamLimits

0xb910,	// (0x0004ae8b) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0004ebed) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0004ebed) list_setting_number_pane_g

0xb91c,	// (0x0004ae97) list_setting_number_pane_t1_ParamLimits

0xb91c,	// (0x0004ae97) list_setting_number_pane_t1

0xb935,	// (0x0004aeb0) list_setting_number_pane_t2_ParamLimits

0xb935,	// (0x0004aeb0) list_setting_number_pane_t2

0xb94f,	// (0x0004aeca) list_setting_number_pane_t3_ParamLimits

0xb94f,	// (0x0004aeca) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0004ebf2) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0004ebf2) list_setting_number_pane_t

0xb8f8,	// (0x0004ae73) set_value_pane_ParamLimits

0xb8f8,	// (0x0004ae73) set_value_pane

0x3df6,	// (0x00043371) bg_set_opt_pane_ParamLimits

0x3df6,	// (0x00043371) bg_set_opt_pane

0x03ba,	// (0x0003f935) set_value_pane_t1

0x3e17,	// (0x00043392) slider_set_pane_cp3

0x3e20,	// (0x0004339b) volume_small_pane_cp

0x3e29,	// (0x000433a4) list_form_gen_pane

0x3e32,	// (0x000433ad) scroll_pane_cp8

0xb992,	// (0x0004af0d) form_field_data_pane_ParamLimits

0xb992,	// (0x0004af0d) form_field_data_pane

0xb9a9,	// (0x0004af24) form_field_data_wide_pane_ParamLimits

0xb9a9,	// (0x0004af24) form_field_data_wide_pane

0xb9c9,	// (0x0004af44) form_field_popup_pane_ParamLimits

0xb9c9,	// (0x0004af44) form_field_popup_pane

0xb9e1,	// (0x0004af5c) form_field_popup_wide_pane_ParamLimits

0xb9e1,	// (0x0004af5c) form_field_popup_wide_pane

0x0456,	// (0x0003f9d1) form_field_slider_pane_ParamLimits

0x0456,	// (0x0003f9d1) form_field_slider_pane

0x0469,	// (0x0003f9e4) form_field_slider_wide_pane_ParamLimits

0x0469,	// (0x0003f9e4) form_field_slider_wide_pane

0x3e43,	// (0x000433be) data_form_pane

0xba02,	// (0x0004af7d) form_field_data_pane_t1

0x3e4f,	// (0x000433ca) input_focus_pane

0x049e,	// (0x0003fa19) data_form_wide_pane

0x04bb,	// (0x0003fa36) form_field_data_wide_pane_t1

0x3bb4,	// (0x0004312f) input_focus_pane_cp6

0xba1c,	// (0x0004af97) form_field_popup_pane_t1

0x3e4f,	// (0x000433ca) input_focus_pane_cp7

0x3e71,	// (0x000433ec) list_form_pane

0x04fd,	// (0x0003fa78) form_field_popup_wide_pane_t1

0x3e4f,	// (0x000433ca) input_focus_pane_cp8

0x3e7d,	// (0x000433f8) list_form_wide_pane

0xba3e,	// (0x0004afb9) form_field_slider_pane_t1_ParamLimits

0xba3e,	// (0x0004afb9) form_field_slider_pane_t1

0xba56,	// (0x0004afd1) form_field_slider_pane_t2_ParamLimits

0xba56,	// (0x0004afd1) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0004ec02) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0004ec02) form_field_slider_pane_t

0x384f,	// (0x00042dca) input_focus_pane_cp9_ParamLimits

0x384f,	// (0x00042dca) input_focus_pane_cp9

0xba6b,	// (0x0004afe6) slider_cont_pane_ParamLimits

0xba6b,	// (0x0004afe6) slider_cont_pane

0x3e8c,	// (0x00043407) form_field_slider_wide_pane_t1_ParamLimits

0x3e8c,	// (0x00043407) form_field_slider_wide_pane_t1

0x0559,	// (0x0003fad4) form_field_slider_wide_pane_t2_ParamLimits

0x0559,	// (0x0003fad4) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0004ec07) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0004ec07) form_field_slider_wide_pane_t

0x384f,	// (0x00042dca) input_focus_pane_cp10_ParamLimits

0x384f,	// (0x00042dca) input_focus_pane_cp10

0xba7f,	// (0x0004affa) slider_cont_pane_cp1_ParamLimits

0xba7f,	// (0x0004affa) slider_cont_pane_cp1

0xba93,	// (0x0004b00e) slider_form_pane_cp

0x3e9e,	// (0x00043419) input_focus_pane_g1

0x3ea6,	// (0x00043421) input_focus_pane_g2

0x3eae,	// (0x00043429) input_focus_pane_g3

0x3eb6,	// (0x00043431) input_focus_pane_g4

0x3ebe,	// (0x00043439) input_focus_pane_g5

0x3ec6,	// (0x00043441) input_focus_pane_g6

0x3ece,	// (0x00043449) input_focus_pane_g7

0x3ed6,	// (0x00043451) input_focus_pane_g8

0x3ede,	// (0x00043459) input_focus_pane_g9

0x34ea,	// (0x00042a65) input_focus_pane_g10

0x0009,

0xf691,	// (0x0004ec0c) input_focus_pane_g

0x5930,	// (0x00044eab) wait_border_pane_g3_copy1

0xba9b,	// (0x0004b016) data_form_pane_t1

0x34ea,	// (0x00042a65) wait_anim_pane_g1_copy1

0xbbb8,	// (0x0004b133) data_form_wide_pane_t1

0xbab4,	// (0x0004b02f) list_form_graphic_pane_cp_ParamLimits

0xbab4,	// (0x0004b02f) list_form_graphic_pane_cp

0x685d,	// (0x00045dd8) slider_form_pane_g1

0x6866,	// (0x00045de1) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0004ef0a) slider_form_pane_g

0xbac5,	// (0x0004b040) list_form_graphic_pane_ParamLimits

0xbac5,	// (0x0004b040) list_form_graphic_pane

0x05d7,	// (0x0003fb52) list_form_graphic_pane_g1

0x05df,	// (0x0003fb5a) list_form_graphic_pane_t1_ParamLimits

0x05df,	// (0x0003fb5a) list_form_graphic_pane_t1

0x35d4,	// (0x00042b4f) list_highlight_pane_cp5_ParamLimits

0x35d4,	// (0x00042b4f) list_highlight_pane_cp5

0xbad7,	// (0x0004b052) find_pane_g1

0x3ee6,	// (0x00043461) input_find_pane

0xbae0,	// (0x0004b05b) input_find_pane_g1_ParamLimits

0xbae0,	// (0x0004b05b) input_find_pane_g1

0xbaec,	// (0x0004b067) input_find_pane_t1_ParamLimits

0xbaec,	// (0x0004b067) input_find_pane_t1

0xbb01,	// (0x0004b07c) input_find_pane_t2_ParamLimits

0xbb01,	// (0x0004b07c) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0004ec21) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0004ec21) input_find_pane_t

0x3eef,	// (0x0004346a) input_focus_pane_cp5_ParamLimits

0x3eef,	// (0x0004346a) input_focus_pane_cp5

0x3f09,	// (0x00043484) bg_popup_window_pane_cp2_ParamLimits

0x3f09,	// (0x00043484) bg_popup_window_pane_cp2

0x3f16,	// (0x00043491) listscroll_menu_pane_ParamLimits

0x3f16,	// (0x00043491) listscroll_menu_pane

0xd287,	// (0x0004c802) popup_submenu_window_ParamLimits

0xd287,	// (0x0004c802) popup_submenu_window

0x3f4e,	// (0x000434c9) find_popup_pane_g1

0x3f56,	// (0x000434d1) input_popup_find_pane_cp

0x3eef,	// (0x0004346a) input_focus_pane_cp4_ParamLimits

0x3eef,	// (0x0004346a) input_focus_pane_cp4

0x3f6c,	// (0x000434e7) input_popup_find_pane_t1_ParamLimits

0x3f6c,	// (0x000434e7) input_popup_find_pane_t1

0x34f4,	// (0x00042a6f) bg_popup_sub_pane_cp

0x3f9a,	// (0x00043515) listscroll_popup_sub_pane

0x3fa2,	// (0x0004351d) list_submenu_pane_ParamLimits

0x3fa2,	// (0x0004351d) list_submenu_pane

0x3fb3,	// (0x0004352e) scroll_pane_cp4

0x3fbb,	// (0x00043536) list_single_popup_submenu_pane_ParamLimits

0x3fbb,	// (0x00043536) list_single_popup_submenu_pane

0x3fcf,	// (0x0004354a) list_single_popup_submenu_pane_g1

0x3fd7,	// (0x00043552) list_single_popup_submenu_pane_t1_ParamLimits

0x3fd7,	// (0x00043552) list_single_popup_submenu_pane_t1

0x384f,	// (0x00042dca) bg_active_tab_pane_cp1_ParamLimits

0x384f,	// (0x00042dca) bg_active_tab_pane_cp1

0x3fec,	// (0x00043567) tabs_2_active_pane_g1

0xd2c1,	// (0x0004c83c) tabs_2_active_pane_t1

0x384f,	// (0x00042dca) bg_passive_tab_pane_cp1_ParamLimits

0x384f,	// (0x00042dca) bg_passive_tab_pane_cp1

0x3fec,	// (0x00043567) tabs_2_passive_pane_g1

0xd2c1,	// (0x0004c83c) tabs_2_passive_pane_t1

0x35d4,	// (0x00042b4f) bg_active_tab_pane_cp4

0xd2d3,	// (0x0004c84e) tabs_2_long_active_pane_t1

0x4e17,	// (0x00044392) bg_passive_tab_pane_cp4

0x1690,	// (0x00040c0b) list_single_midp_graphic_pane_g4_ParamLimits

0x35d4,	// (0x00042b4f) bg_active_tab_pane_cp5

0xd2e6,	// (0x0004c861) tabs_3_long_active_pane_t1

0x4e17,	// (0x00044392) bg_passive_tab_pane_cp5

0x1690,	// (0x00040c0b) list_single_midp_graphic_pane_g4

0x35d4,	// (0x00042b4f) bg_popup_window_pane_cp13_ParamLimits

0x35d4,	// (0x00042b4f) bg_popup_window_pane_cp13

0x404e,	// (0x000435c9) listscroll_popup_fast_pane_ParamLimits

0x404e,	// (0x000435c9) listscroll_popup_fast_pane

0x405d,	// (0x000435d8) grid_popup_fast_pane_ParamLimits

0x405d,	// (0x000435d8) grid_popup_fast_pane

0x406f,	// (0x000435ea) scroll_pane_cp9_ParamLimits

0x406f,	// (0x000435ea) scroll_pane_cp9

0x8123,	// (0x0004769e) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x8123,	// (0x0004769e) list_single_graphic_hl_pane_t1_cp2

0x4093,	// (0x0004360e) input_focus_pane_cp20_ParamLimits

0x4093,	// (0x0004360e) input_focus_pane_cp20

0x40a1,	// (0x0004361c) query_popup_data_pane_t1_ParamLimits

0x40a1,	// (0x0004361c) query_popup_data_pane_t1

0x40b4,	// (0x0004362f) query_popup_data_pane_t2_ParamLimits

0x40b4,	// (0x0004362f) query_popup_data_pane_t2

0x40fa,	// (0x00043675) query_popup_data_pane_t3_ParamLimits

0x40fa,	// (0x00043675) query_popup_data_pane_t3

0x413b,	// (0x000436b6) query_popup_data_pane_t4_ParamLimits

0x413b,	// (0x000436b6) query_popup_data_pane_t4

0x4177,	// (0x000436f2) query_popup_data_pane_t5_ParamLimits

0x4177,	// (0x000436f2) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0004ec26) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0004ec26) query_popup_data_pane_t

0x3e9e,	// (0x00043419) bg_set_opt_pane_g1

0x3ea6,	// (0x00043421) bg_set_opt_pane_g2

0x3eae,	// (0x00043429) bg_set_opt_pane_g3

0x3eb6,	// (0x00043431) bg_set_opt_pane_g4

0x3ebe,	// (0x00043439) bg_set_opt_pane_g5

0x3ec6,	// (0x00043441) bg_set_opt_pane_g6

0x3ece,	// (0x00043449) bg_set_opt_pane_g7

0x3ed6,	// (0x00043451) bg_set_opt_pane_g8

0x3ede,	// (0x00043459) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0004ec31) bg_set_opt_pane_g

0x169c,	// (0x00040c17) control_top_pane_stacon_ParamLimits

0x169c,	// (0x00040c17) control_top_pane_stacon

0x16ef,	// (0x00040c6a) signal_pane_stacon_ParamLimits

0x16ef,	// (0x00040c6a) signal_pane_stacon

0x4767,	// (0x00043ce2) stacon_top_pane_g1_ParamLimits

0x4767,	// (0x00043ce2) stacon_top_pane_g1

0x1714,	// (0x00040c8f) title_pane_stacon_ParamLimits

0x1714,	// (0x00040c8f) title_pane_stacon

0x173e,	// (0x00040cb9) uni_indicator_pane_stacon_ParamLimits

0x173e,	// (0x00040cb9) uni_indicator_pane_stacon

0x1753,	// (0x00040cce) battery_pane_stacon_ParamLimits

0x1753,	// (0x00040cce) battery_pane_stacon

0x1797,	// (0x00040d12) control_bottom_pane_stacon_ParamLimits

0x1797,	// (0x00040d12) control_bottom_pane_stacon

0x17ba,	// (0x00040d35) navi_pane_stacon_ParamLimits

0x17ba,	// (0x00040d35) navi_pane_stacon

0x4789,	// (0x00043d04) stacon_bottom_pane_g1_ParamLimits

0x4789,	// (0x00043d04) stacon_bottom_pane_g1

0x13e3,	// (0x0004095e) aid_levels_signal_lsc_ParamLimits

0x13e3,	// (0x0004095e) aid_levels_signal_lsc

0x13f9,	// (0x00040974) signal_pane_stacon_g1_ParamLimits

0x13f9,	// (0x00040974) signal_pane_stacon_g1

0x140d,	// (0x00040988) signal_pane_stacon_g2_ParamLimits

0x140d,	// (0x00040988) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x0004ec44) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0004ec44) signal_pane_stacon_g

0x1442,	// (0x000409bd) title_pane_stacon_t1_ParamLimits

0x1442,	// (0x000409bd) title_pane_stacon_t1

0x41bb,	// (0x00043736) uni_indicator_pane_stacon_g1

0x41c5,	// (0x00043740) uni_indicator_pane_stacon_g2

0x41cf,	// (0x0004374a) uni_indicator_pane_stacon_g3

0x41d9,	// (0x00043754) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0004ec50) uni_indicator_pane_stacon_g

0x1467,	// (0x000409e2) control_top_pane_stacon_g1

0x146f,	// (0x000409ea) control_top_pane_stacon_t1_ParamLimits

0x146f,	// (0x000409ea) control_top_pane_stacon_t1

0x14a6,	// (0x00040a21) aid_levels_battery_lsc_ParamLimits

0x14a6,	// (0x00040a21) aid_levels_battery_lsc

0x14bd,	// (0x00040a38) battery_pane_stacon_g1_ParamLimits

0x14bd,	// (0x00040a38) battery_pane_stacon_g1

0x14d0,	// (0x00040a4b) battery_pane_stacon_g2_ParamLimits

0x14d0,	// (0x00040a4b) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x0004ec59) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x0004ec59) battery_pane_stacon_g

0x150e,	// (0x00040a89) navi_icon_pane_stacon

0x1522,	// (0x00040a9d) navi_navi_pane_stacon

0x150e,	// (0x00040a89) navi_text_pane_stacon

0x1467,	// (0x000409e2) control_bottom_pane_stacon_g1

0x1536,	// (0x00040ab1) control_bottom_pane_stacon_t1_ParamLimits

0x1536,	// (0x00040ab1) control_bottom_pane_stacon_t1

0xd2f8,	// (0x0004c873) grid_app_pane_ParamLimits

0xd2f8,	// (0x0004c873) grid_app_pane

0xd330,	// (0x0004c8ab) scroll_pane_cp15_ParamLimits

0xd330,	// (0x0004c8ab) scroll_pane_cp15

0xd345,	// (0x0004c8c0) cell_app_pane_ParamLimits

0xd345,	// (0x0004c8c0) cell_app_pane

0xd38a,	// (0x0004c905) cell_app_pane_g1_ParamLimits

0xd38a,	// (0x0004c905) cell_app_pane_g1

0x427c,	// (0x000437f7) cell_app_pane_g2_ParamLimits

0x427c,	// (0x000437f7) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0004ec5e) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0004ec5e) cell_app_pane_g

0xd3ae,	// (0x0004c929) cell_app_pane_t1_ParamLimits

0xd3ae,	// (0x0004c929) cell_app_pane_t1

0x429f,	// (0x0004381a) grid_highlight_pane_ParamLimits

0x429f,	// (0x0004381a) grid_highlight_pane

0x3e9e,	// (0x00043419) cell_highlight_pane_g1

0x3ea6,	// (0x00043421) cell_highlight_pane_g2

0x3eae,	// (0x00043429) cell_highlight_pane_g3

0x3eb6,	// (0x00043431) cell_highlight_pane_g4

0x3ebe,	// (0x00043439) cell_highlight_pane_g5

0x3ec6,	// (0x00043441) cell_highlight_pane_g6

0x3ece,	// (0x00043449) cell_highlight_pane_g7

0x3ed6,	// (0x00043451) cell_highlight_pane_g8

0x3ede,	// (0x00043459) cell_highlight_pane_g9

0x34ea,	// (0x00042a65) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x0004ec0c) cell_highlight_pane_g

0x42b0,	// (0x0004382b) bg_scroll_pane

0x1580,	// (0x00040afb) scroll_handle_pane

0x42f7,	// (0x00043872) scroll_bg_pane_g1

0x430c,	// (0x00043887) scroll_bg_pane_g2

0x4324,	// (0x0004389f) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0004ec63) scroll_bg_pane_g

0x4339,	// (0x000438b4) scroll_handle_focus_pane_ParamLimits

0x4339,	// (0x000438b4) scroll_handle_focus_pane

0x42f7,	// (0x00043872) scroll_handle_pane_g1

0x4346,	// (0x000438c1) scroll_handle_pane_g2

0x4324,	// (0x0004389f) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0004ec6a) scroll_handle_pane_g

0x3eef,	// (0x0004346a) bg_popup_sub_pane_cp21_ParamLimits

0x3eef,	// (0x0004346a) bg_popup_sub_pane_cp21

0x435a,	// (0x000438d5) popup_fep_japan_predictive_window_t1_ParamLimits

0x435a,	// (0x000438d5) popup_fep_japan_predictive_window_t1

0x4374,	// (0x000438ef) popup_fep_japan_predictive_window_t2_ParamLimits

0x4374,	// (0x000438ef) popup_fep_japan_predictive_window_t2

0x43a7,	// (0x00043922) popup_fep_japan_predictive_window_t3_ParamLimits

0x43a7,	// (0x00043922) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0004ec71) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0004ec71) popup_fep_japan_predictive_window_t

0x34f4,	// (0x00042a6f) bg_popup_sub_pane_cp23

0x43de,	// (0x00043959) listscroll_japin_cand_pane

0x43e6,	// (0x00043961) popup_fep_japan_candidate_window_t1

0x43f4,	// (0x0004396f) candidate_pane_ParamLimits

0x43f4,	// (0x0004396f) candidate_pane

0x4406,	// (0x00043981) scroll_pane_cp30

0x440e,	// (0x00043989) list_single_popup_jap_candidate_pane_ParamLimits

0x440e,	// (0x00043989) list_single_popup_jap_candidate_pane

0x34f4,	// (0x00042a6f) list_highlight_pane_cp30

0x4423,	// (0x0004399e) list_single_popup_jap_candidate_pane_t1

0x4432,	// (0x000439ad) level_1_signal

0x4444,	// (0x000439bf) level_2_signal

0x4457,	// (0x000439d2) level_3_signal

0x446a,	// (0x000439e5) level_4_signal

0x447d,	// (0x000439f8) level_5_signal

0x4490,	// (0x00043a0b) level_6_signal

0x44a3,	// (0x00043a1e) level_7_signal

0x4432,	// (0x000439ad) level_1_battery

0x4444,	// (0x000439bf) level_2_battery

0x4457,	// (0x000439d2) level_3_battery

0x446a,	// (0x000439e5) level_4_battery

0x447d,	// (0x000439f8) level_5_battery

0x4490,	// (0x00043a0b) level_6_battery

0x44a3,	// (0x00043a1e) level_7_battery

0x44ce,	// (0x00043a49) list_menu_pane_ParamLimits

0x44ce,	// (0x00043a49) list_menu_pane

0x44e4,	// (0x00043a5f) scroll_pane_cp25_ParamLimits

0x44e4,	// (0x00043a5f) scroll_pane_cp25

0x44fd,	// (0x00043a78) list_double2_graphic_pane_cp2_ParamLimits

0x44fd,	// (0x00043a78) list_double2_graphic_pane_cp2

0x44fd,	// (0x00043a78) list_double2_large_graphic_pane_cp2_ParamLimits

0x44fd,	// (0x00043a78) list_double2_large_graphic_pane_cp2

0x44fd,	// (0x00043a78) list_double2_pane_cp2_ParamLimits

0x44fd,	// (0x00043a78) list_double2_pane_cp2

0x44fd,	// (0x00043a78) list_double_graphic_pane_cp2_ParamLimits

0x44fd,	// (0x00043a78) list_double_graphic_pane_cp2

0x44fd,	// (0x00043a78) list_double_large_graphic_pane_cp2_ParamLimits

0x44fd,	// (0x00043a78) list_double_large_graphic_pane_cp2

0x44fd,	// (0x00043a78) list_double_number_pane_cp2_ParamLimits

0x44fd,	// (0x00043a78) list_double_number_pane_cp2

0x44fd,	// (0x00043a78) list_double_pane_cp2_ParamLimits

0x44fd,	// (0x00043a78) list_double_pane_cp2

0xd3c5,	// (0x0004c940) list_single_2graphic_pane_cp2_ParamLimits

0xd3c5,	// (0x0004c940) list_single_2graphic_pane_cp2

0xd3c5,	// (0x0004c940) list_single_graphic_heading_pane_cp2_ParamLimits

0xd3c5,	// (0x0004c940) list_single_graphic_heading_pane_cp2

0xd3c5,	// (0x0004c940) list_single_graphic_pane_cp2_ParamLimits

0xd3c5,	// (0x0004c940) list_single_graphic_pane_cp2

0xd3c5,	// (0x0004c940) list_single_heading_pane_cp2_ParamLimits

0xd3c5,	// (0x0004c940) list_single_heading_pane_cp2

0x453a,	// (0x00043ab5) list_single_large_graphic_pane_cp2_ParamLimits

0x453a,	// (0x00043ab5) list_single_large_graphic_pane_cp2

0xd3c5,	// (0x0004c940) list_single_number_heading_pane_cp2_ParamLimits

0xd3c5,	// (0x0004c940) list_single_number_heading_pane_cp2

0xd3c5,	// (0x0004c940) list_single_number_pane_cp2_ParamLimits

0xd3c5,	// (0x0004c940) list_single_number_pane_cp2

0xd3c5,	// (0x0004c940) list_single_pane_cp2_ParamLimits

0xd3c5,	// (0x0004c940) list_single_pane_cp2

0x45b6,	// (0x00043b31) bg_popup_sub_pane_cp22

0x1632,	// (0x00040bad) popup_side_volume_key_window_g1

0x165c,	// (0x00040bd7) popup_side_volume_key_window_t1

0x1678,	// (0x00040bf3) volume_small_pane_cp1

0x384f,	// (0x00042dca) bg_popup_sub_pane_cp24_ParamLimits

0x384f,	// (0x00042dca) bg_popup_sub_pane_cp24

0x45cc,	// (0x00043b47) fep_china_uni_candidate_pane_ParamLimits

0x45cc,	// (0x00043b47) fep_china_uni_candidate_pane

0x45e0,	// (0x00043b5b) fep_china_uni_entry_pane

0x45f0,	// (0x00043b6b) popup_fep_china_uni_window_g1

0x460c,	// (0x00043b87) fep_china_uni_entry_pane_g1

0x4614,	// (0x00043b8f) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0004eca2) fep_china_uni_entry_pane_g

0x461c,	// (0x00043b97) fep_entry_item_pane

0x4626,	// (0x00043ba1) fep_candidate_item_pane

0x462e,	// (0x00043ba9) fep_china_uni_candidate_pane_g1

0x4636,	// (0x00043bb1) fep_china_uni_candidate_pane_g2

0x463e,	// (0x00043bb9) fep_china_uni_candidate_pane_g3

0x4646,	// (0x00043bc1) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0004eca7) fep_china_uni_candidate_pane_g

0x34ea,	// (0x00042a65) fep_entry_item_pane_g1

0x464e,	// (0x00043bc9) fep_entry_item_pane_t1_ParamLimits

0x464e,	// (0x00043bc9) fep_entry_item_pane_t1

0x4664,	// (0x00043bdf) fep_candidate_item_pane_t1_ParamLimits

0x4664,	// (0x00043bdf) fep_candidate_item_pane_t1

0x4679,	// (0x00043bf4) fep_candidate_item_pane_t2_ParamLimits

0x4679,	// (0x00043bf4) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0004ecb0) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0004ecb0) fep_candidate_item_pane_t

0x35d4,	// (0x00042b4f) list_highlight_pane_cp31_ParamLimits

0x35d4,	// (0x00042b4f) list_highlight_pane_cp31

0x468b,	// (0x00043c06) level_1_signal_lsc

0x4694,	// (0x00043c0f) level_2_signal_lsc

0x469d,	// (0x00043c18) level_3_signal_lsc

0x46a6,	// (0x00043c21) level_4_signal_lsc

0x46af,	// (0x00043c2a) level_5_signal_lsc

0x46b8,	// (0x00043c33) level_6_signal_lsc

0x46c1,	// (0x00043c3c) level_7_signal_lsc

0x46c1,	// (0x00043c3c) level_1_battery_lsc

0x46ca,	// (0x00043c45) level_2_battery_lsc

0x46d3,	// (0x00043c4e) level_3_battery_lsc

0x46dc,	// (0x00043c57) level_4_battery_lsc

0x46e5,	// (0x00043c60) level_5_battery_lsc

0x46ee,	// (0x00043c69) level_6_battery_lsc

0x468b,	// (0x00043c06) level_7_battery_lsc

0x46f7,	// (0x00043c72) scroll_handle_focus_pane_g1

0x4700,	// (0x00043c7b) scroll_handle_focus_pane_g2

0x4709,	// (0x00043c84) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0004ecb5) scroll_handle_focus_pane_g

0xbb16,	// (0x0004b091) list_single_2graphic_pane_g1_ParamLimits

0xbb16,	// (0x0004b091) list_single_2graphic_pane_g1

0xbf8e,	// (0x0004b509) list_single_2graphic_pane_g2_ParamLimits

0xbf8e,	// (0x0004b509) list_single_2graphic_pane_g2

0x1fdb,	// (0x00041556) list_single_2graphic_pane_g3_ParamLimits

0x1fdb,	// (0x00041556) list_single_2graphic_pane_g3

0xbb22,	// (0x0004b09d) list_single_2graphic_pane_g4_ParamLimits

0xbb22,	// (0x0004b09d) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0004ecbc) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0004ecbc) list_single_2graphic_pane_g

0xbb2e,	// (0x0004b0a9) list_single_2graphic_pane_t1_ParamLimits

0xbb2e,	// (0x0004b0a9) list_single_2graphic_pane_t1

0xbfcc,	// (0x0004b547) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbfcc,	// (0x0004b547) list_double2_graphic_large_graphic_pane_g1

0xb79c,	// (0x0004ad17) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb79c,	// (0x0004ad17) list_double2_graphic_large_graphic_pane_g2

0xbfb7,	// (0x0004b532) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xbfb7,	// (0x0004b532) list_double2_graphic_large_graphic_pane_g3

0xbb5c,	// (0x0004b0d7) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbb5c,	// (0x0004b0d7) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0004ecc5) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0004ecc5) list_double2_graphic_large_graphic_pane_g

0xbb68,	// (0x0004b0e3) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbb68,	// (0x0004b0e3) list_double2_graphic_large_graphic_pane_t1

0xbb7e,	// (0x0004b0f9) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbb7e,	// (0x0004b0f9) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0004ecce) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0004ecce) list_double2_graphic_large_graphic_pane_t

0x4851,	// (0x00043dcc) popup_fast_swap_window_ParamLimits

0x4851,	// (0x00043dcc) popup_fast_swap_window

0x486d,	// (0x00043de8) popup_side_volume_key_window

0x4889,	// (0x00043e04) stacon_top_pane

0x4893,	// (0x00043e0e) status_pane_ParamLimits

0x4893,	// (0x00043e0e) status_pane

0xd482,	// (0x0004c9fd) status_small_pane

0x34f4,	// (0x00042a6f) control_pane

0x34f4,	// (0x00042a6f) stacon_bottom_pane

0x3e32,	// (0x000433ad) scroll_pane_cp121

0x3e29,	// (0x000433a4) set_content_pane

0x4712,	// (0x00043c8d) bg_active_tab_pane_g1_cp1

0x471b,	// (0x00043c96) bg_active_tab_pane_g2_cp1

0x4724,	// (0x00043c9f) bg_active_tab_pane_g3_cp1

0x4712,	// (0x00043c8d) bg_passive_tab_pane_g1_cp1

0x471b,	// (0x00043c96) bg_passive_tab_pane_g2_cp1

0x4724,	// (0x00043c9f) bg_passive_tab_pane_g3_cp1

0x472d,	// (0x00043ca8) bg_active_tab_pane_g1_cp2

0x471b,	// (0x00043c96) bg_active_tab_pane_g2_cp2

0x4736,	// (0x00043cb1) bg_active_tab_pane_g3_cp2

0x472d,	// (0x00043ca8) bg_passive_tab_pane_g1_cp2

0x471b,	// (0x00043c96) bg_passive_tab_pane_g2_cp2

0x4736,	// (0x00043cb1) bg_passive_tab_pane_g3_cp2

0x473f,	// (0x00043cba) bg_active_tab_pane_g1_cp3

0x471b,	// (0x00043c96) bg_active_tab_pane_g2_cp3

0x4748,	// (0x00043cc3) bg_active_tab_pane_g3_cp3

0x473f,	// (0x00043cba) bg_passive_tab_pane_g1_cp3

0x471b,	// (0x00043c96) bg_passive_tab_pane_g2_cp3

0x4748,	// (0x00043cc3) bg_passive_tab_pane_g3_cp3

0x4751,	// (0x00043ccc) bg_active_tab_pane_g1_cp4

0x471b,	// (0x00043c96) bg_active_tab_pane_g2_cp4

0x475c,	// (0x00043cd7) bg_active_tab_pane_g3_cp4

0x4751,	// (0x00043ccc) bg_passive_tab_pane_g1_cp4

0x471b,	// (0x00043c96) bg_passive_tab_pane_g2_cp4

0x475c,	// (0x00043cd7) bg_passive_tab_pane_g3_cp4

0x47a5,	// (0x00043d20) bg_active_tab_pane_g1_cp5

0x471b,	// (0x00043c96) bg_active_tab_pane_g2_cp5

0x47ae,	// (0x00043d29) bg_active_tab_pane_g3_cp5

0x47a5,	// (0x00043d20) bg_passive_tab_pane_g1_cp5

0x471b,	// (0x00043c96) bg_passive_tab_pane_g2_cp5

0x47ae,	// (0x00043d29) bg_passive_tab_pane_g3_cp5

0x6e05,	// (0x00046380) list_set_graphic_pane_ParamLimits

0x6e05,	// (0x00046380) list_set_graphic_pane

0x34f4,	// (0x00042a6f) bg_set_opt_pane_cp4

0xd452,	// (0x0004c9cd) list_set_graphic_pane_g1_ParamLimits

0xd452,	// (0x0004c9cd) list_set_graphic_pane_g1

0xd45e,	// (0x0004c9d9) list_set_graphic_pane_g2_ParamLimits

0xd45e,	// (0x0004c9d9) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0004ecd3) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0004ecd3) list_set_graphic_pane_g

0x0009,

0xfac1,	// (0x0004f03c) volume_small_pane_cp_g

0x4804,	// (0x00043d7f) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4804,	// (0x00043d7f) list_double2_large_graphic_pane_g1_cp2

0x4810,	// (0x00043d8b) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4810,	// (0x00043d8b) list_double2_large_graphic_pane_g2_cp2

0x4821,	// (0x00043d9c) list_double2_large_graphic_pane_g3_cp2

0x4829,	// (0x00043da4) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4829,	// (0x00043da4) list_double2_large_graphic_pane_t1_cp2

0x483f,	// (0x00043dba) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x483f,	// (0x00043dba) list_double2_large_graphic_pane_t2_cp2

0x640f,	// (0x0004598a) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x640f,	// (0x0004598a) list_double_large_graphic_pane_g1_cp2

0x6420,	// (0x0004599b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x6420,	// (0x0004599b) list_double_large_graphic_pane_g2_cp2

0x49ba,	// (0x00043f35) list_double_large_graphic_pane_g3_cp2

0x6431,	// (0x000459ac) list_double_large_graphic_pane_g4_cp

0x6439,	// (0x000459b4) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6439,	// (0x000459b4) list_double_large_graphic_pane_t1_cp2

0x6450,	// (0x000459cb) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6450,	// (0x000459cb) list_double_large_graphic_pane_t2_cp2

0x48ac,	// (0x00043e27) list_double2_graphic_pane_g1_cp2_ParamLimits

0x48ac,	// (0x00043e27) list_double2_graphic_pane_g1_cp2

0x48ba,	// (0x00043e35) list_double2_graphic_pane_g2_cp2_ParamLimits

0x48ba,	// (0x00043e35) list_double2_graphic_pane_g2_cp2

0x48cb,	// (0x00043e46) list_double2_graphic_pane_g3_cp2

0x48d5,	// (0x00043e50) list_double2_graphic_pane_t1_cp2_ParamLimits

0x48d5,	// (0x00043e50) list_double2_graphic_pane_t1_cp2

0x48eb,	// (0x00043e66) list_double2_graphic_pane_t2_cp2_ParamLimits

0x48eb,	// (0x00043e66) list_double2_graphic_pane_t2_cp2

0x48fd,	// (0x00043e78) list_single_number_heading_pane_g1_cp2_ParamLimits

0x48fd,	// (0x00043e78) list_single_number_heading_pane_g1_cp2

0x4909,	// (0x00043e84) list_single_number_heading_pane_g2_cp2

0x4911,	// (0x00043e8c) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4911,	// (0x00043e8c) list_single_number_heading_pane_t1_cp2

0x4927,	// (0x00043ea2) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4927,	// (0x00043ea2) list_single_number_heading_pane_t2_cp2

0x4939,	// (0x00043eb4) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4939,	// (0x00043eb4) list_single_number_heading_pane_t3_cp2

0x48fd,	// (0x00043e78) list_single_heading_pane_g1_cp2_ParamLimits

0x48fd,	// (0x00043e78) list_single_heading_pane_g1_cp2

0x4909,	// (0x00043e84) list_single_heading_pane_g2_cp2

0x4911,	// (0x00043e8c) list_single_heading_pane_t1_cp2_ParamLimits

0x4911,	// (0x00043e8c) list_single_heading_pane_t1_cp2

0x6217,	// (0x00045792) list_single_heading_pane_t2_cp2_ParamLimits

0x6217,	// (0x00045792) list_single_heading_pane_t2_cp2

0x615f,	// (0x000456da) list_double_graphic_pane_g1_cp2_ParamLimits

0x615f,	// (0x000456da) list_double_graphic_pane_g1_cp2

0x616b,	// (0x000456e6) list_double_graphic_pane_g2_cp2_ParamLimits

0x616b,	// (0x000456e6) list_double_graphic_pane_g2_cp2

0x617a,	// (0x000456f5) list_double_graphic_pane_g3_cp2

0x6182,	// (0x000456fd) list_double_graphic_pane_t1_cp2_ParamLimits

0x6182,	// (0x000456fd) list_double_graphic_pane_t1_cp2

0x6198,	// (0x00045713) list_double_graphic_pane_t2_cp2_ParamLimits

0x6198,	// (0x00045713) list_double_graphic_pane_t2_cp2

0x49ae,	// (0x00043f29) list_double_number_pane_g1_cp2_ParamLimits

0x49ae,	// (0x00043f29) list_double_number_pane_g1_cp2

0x49ba,	// (0x00043f35) list_double_number_pane_g2_cp2

0x6123,	// (0x0004569e) list_double_number_pane_t1_cp2_ParamLimits

0x6123,	// (0x0004569e) list_double_number_pane_t1_cp2

0x6137,	// (0x000456b2) list_double_number_pane_t2_cp2_ParamLimits

0x6137,	// (0x000456b2) list_double_number_pane_t2_cp2

0x614d,	// (0x000456c8) list_double_number_pane_t3_cp2_ParamLimits

0x614d,	// (0x000456c8) list_double_number_pane_t3_cp2

0x6000,	// (0x0004557b) list_single_graphic_pane_g1_cp2_ParamLimits

0x6000,	// (0x0004557b) list_single_graphic_pane_g1_cp2

0x4a12,	// (0x00043f8d) list_single_graphic_pane_g2_cp2_ParamLimits

0x4a12,	// (0x00043f8d) list_single_graphic_pane_g2_cp2

0x4a1e,	// (0x00043f99) list_single_graphic_pane_g3_cp2

0x5fd6,	// (0x00045551) list_single_graphic_pane_t1_cp2_ParamLimits

0x5fd6,	// (0x00045551) list_single_graphic_pane_t1_cp2

0x4a12,	// (0x00043f8d) list_single_number_pane_g1_cp2_ParamLimits

0x4a12,	// (0x00043f8d) list_single_number_pane_g1_cp2

0x4a1e,	// (0x00043f99) list_single_number_pane_g2_cp2

0x5fd6,	// (0x00045551) list_single_number_pane_t1_cp2_ParamLimits

0x5fd6,	// (0x00045551) list_single_number_pane_t1_cp2

0x5fec,	// (0x00045567) list_single_number_pane_t2_cp2_ParamLimits

0x5fec,	// (0x00045567) list_single_number_pane_t2_cp2

0x4810,	// (0x00043d8b) list_double2_pane_g1_cp2_ParamLimits

0x4810,	// (0x00043d8b) list_double2_pane_g1_cp2

0x4821,	// (0x00043d9c) list_double2_pane_g2_cp2

0x4986,	// (0x00043f01) list_double2_pane_t1_cp2_ParamLimits

0x4986,	// (0x00043f01) list_double2_pane_t1_cp2

0x499c,	// (0x00043f17) list_double2_pane_t2_cp2_ParamLimits

0x499c,	// (0x00043f17) list_double2_pane_t2_cp2

0x49ae,	// (0x00043f29) list_double_pane_g1_cp2_ParamLimits

0x49ae,	// (0x00043f29) list_double_pane_g1_cp2

0x49ba,	// (0x00043f35) list_double_pane_g2_cp2

0x49c2,	// (0x00043f3d) list_double_pane_t1_cp2_ParamLimits

0x49c2,	// (0x00043f3d) list_double_pane_t1_cp2

0x49d8,	// (0x00043f53) list_double_pane_t2_cp2_ParamLimits

0x49d8,	// (0x00043f53) list_double_pane_t2_cp2

0x4a02,	// (0x00043f7d) list_single_pane_cp2_g3

0x4a12,	// (0x00043f8d) list_single_pane_g1_cp2_ParamLimits

0x4a12,	// (0x00043f8d) list_single_pane_g1_cp2

0x4a1e,	// (0x00043f99) list_single_pane_g2_cp2

0x4a26,	// (0x00043fa1) list_single_pane_t1_cp2_ParamLimits

0x4a26,	// (0x00043fa1) list_single_pane_t1_cp2

0x4a3e,	// (0x00043fb9) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4a3e,	// (0x00043fb9) list_single_large_graphic_pane_g1_cp2

0x4a4a,	// (0x00043fc5) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4a4a,	// (0x00043fc5) list_single_large_graphic_pane_g2_cp2

0x4a56,	// (0x00043fd1) list_single_large_graphic_pane_g3_cp2

0x4a5e,	// (0x00043fd9) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4a5e,	// (0x00043fd9) list_single_large_graphic_pane_g4_cp1

0x4a78,	// (0x00043ff3) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4a78,	// (0x00043ff3) list_single_large_graphic_pane_t1_cp2

0x5fa2,	// (0x0004551d) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5fa2,	// (0x0004551d) list_single_graphic_heading_pane_g1_cp2

0x5f6f,	// (0x000454ea) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5f6f,	// (0x000454ea) list_single_graphic_heading_pane_g4_cp2

0x4a1e,	// (0x00043f99) list_single_graphic_heading_pane_g5_cp2

0x5fae,	// (0x00045529) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5fae,	// (0x00045529) list_single_graphic_heading_pane_t1_cp2

0x5fc4,	// (0x0004553f) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5fc4,	// (0x0004553f) list_single_graphic_heading_pane_t2_cp2

0x5f63,	// (0x000454de) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5f63,	// (0x000454de) list_single_2graphic_pane_g1_cp2

0x5f6f,	// (0x000454ea) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5f6f,	// (0x000454ea) list_single_2graphic_pane_g2_cp2

0x4a1e,	// (0x00043f99) list_single_2graphic_pane_g3_cp2

0x5f80,	// (0x000454fb) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5f80,	// (0x000454fb) list_single_2graphic_pane_g4_cp2

0x5f8c,	// (0x00045507) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5f8c,	// (0x00045507) list_single_2graphic_pane_t1_cp2

0x34ea,	// (0x00042a65) list_highlight_pane_g10_cp1

0x5b3b,	// (0x000450b6) list_highlight_pane_g1_cp1

0x5b43,	// (0x000450be) list_highlight_pane_g2_cp1

0x5b4b,	// (0x000450c6) list_highlight_pane_g3_cp1

0x5b53,	// (0x000450ce) list_highlight_pane_g4_cp1

0x5b5b,	// (0x000450d6) list_highlight_pane_g5_cp1

0x5b63,	// (0x000450de) list_highlight_pane_g6_cp1

0x5b6b,	// (0x000450e6) list_highlight_pane_g7_cp1

0x5b73,	// (0x000450ee) list_highlight_pane_g8_cp1

0x5b7b,	// (0x000450f6) list_highlight_pane_g9_cp1

0xdac4,	// (0x0004d03f) form_field_slider_pane_t3

0xdad2,	// (0x0004d04d) form_field_slider_pane_t4

0x5a77,	// (0x00044ff2) slider_form_pane_ParamLimits

0x5a77,	// (0x00044ff2) slider_form_pane

0x34f4,	// (0x00042a6f) control_abbreviations

0x34f4,	// (0x00042a6f) control_conventions

0x34f4,	// (0x00042a6f) control_definitions

0x34f4,	// (0x00042a6f) format_table_attribute

0x6261,	// (0x000457dc) bg_popup_preview_window_pane_g9

0x34f4,	// (0x00042a6f) format_table_data2

0x34f4,	// (0x00042a6f) format_table_data3

0x34f4,	// (0x00042a6f) format_table_data_example

0x0008,

0x34f4,	// (0x00042a6f) intro_purpose

0xf8ef,	// (0x0004ee6a) bg_popup_preview_window_pane_g

0x34f4,	// (0x00042a6f) texts_category

0x34f4,	// (0x00042a6f) texts_graphics

0x4a8e,	// (0x00044009) text_digital

0x4a9d,	// (0x00044018) text_primary

0x4aac,	// (0x00044027) text_primary_small

0x4abb,	// (0x00044036) text_secondary

0x4aca,	// (0x00044045) text_title

0x6947,	// (0x00045ec2) bg_passive_tab_pane_g1_cp3_srt

0x471b,	// (0x00043c96) bg_passive_tab_pane_g2_cp3_srt

0x6950,	// (0x00045ecb) bg_passive_tab_pane_g3_cp3_srt

0x384f,	// (0x00042dca) bg_active_tab_pane_cp3_srt_ParamLimits

0x384f,	// (0x00042dca) bg_active_tab_pane_cp3_srt

0x6959,	// (0x00045ed4) tabs_4_active_pane_srt_g1

0xde07,	// (0x0004d382) tabs_4_active_pane_srt_t1_ParamLimits

0xde07,	// (0x0004d382) tabs_4_active_pane_srt_t1

0x6947,	// (0x00045ec2) bg_active_tab_pane_g1_cp3_copy1

0x471b,	// (0x00043c96) bg_active_tab_pane_g2_cp3_copy1

0x6950,	// (0x00045ecb) bg_active_tab_pane_g3_cp3_copy1

0x35d4,	// (0x00042b4f) tabs_2_long_active_pane_srt_ParamLimits

0x35d4,	// (0x00042b4f) tabs_2_long_active_pane_srt

0x35d4,	// (0x00042b4f) tabs_2_long_passive_pane_srt_ParamLimits

0x35d4,	// (0x00042b4f) tabs_2_long_passive_pane_srt

0x4e17,	// (0x00044392) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4e17,	// (0x00044392) bg_passive_tab_pane_cp4_srt

0x6690,	// (0x00045c0b) bg_passive_tab_pane_g1_cp4_srt

0x471b,	// (0x00043c96) bg_passive_tab_pane_g2_cp4_srt

0x6699,	// (0x00045c14) bg_passive_tab_pane_g3_cp4_srt

0x35d4,	// (0x00042b4f) bg_active_tab_pane_cp4_srt_ParamLimits

0x35d4,	// (0x00042b4f) bg_active_tab_pane_cp4_srt

0xdc31,	// (0x0004d1ac) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdc31,	// (0x0004d1ac) tabs_2_long_active_pane_srt_t1

0x6690,	// (0x00045c0b) bg_active_tab_pane_g1_cp4_srt

0x471b,	// (0x00043c96) bg_active_tab_pane_g2_cp4_srt

0x6699,	// (0x00045c14) bg_active_tab_pane_g3_cp4_srt

0x384f,	// (0x00042dca) tabs_3_long_active_pane_srt_ParamLimits

0x384f,	// (0x00042dca) tabs_3_long_active_pane_srt

0x384f,	// (0x00042dca) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x384f,	// (0x00042dca) tabs_3_long_passive_pane_cp_srt

0x384f,	// (0x00042dca) tabs_3_long_passive_pane_srt_ParamLimits

0x384f,	// (0x00042dca) tabs_3_long_passive_pane_srt

0x4e17,	// (0x00044392) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4e17,	// (0x00044392) bg_passive_tab_pane_cp5_srt

0x47a5,	// (0x00043d20) bg_passive_tab_pane_g1_cp5_srt

0x471b,	// (0x00043c96) bg_passive_tab_pane_g2_cp5_srt

0x47ae,	// (0x00043d29) bg_passive_tab_pane_g3_cp5_srt

0x35d4,	// (0x00042b4f) bg_active_tab_pane_cp5_srt_ParamLimits

0x35d4,	// (0x00042b4f) bg_active_tab_pane_cp5_srt

0xdc1b,	// (0x0004d196) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdc1b,	// (0x0004d196) tabs_3_long_active_pane_srt_t1

0x47a5,	// (0x00043d20) bg_active_tab_pane_g1_cp5_srt

0x471b,	// (0x00043c96) bg_active_tab_pane_g2_cp5_srt

0x47ae,	// (0x00043d29) bg_active_tab_pane_g3_cp5_srt

0x6670,	// (0x00045beb) navi_text_pane_srt_t1

0x6668,	// (0x00045be3) navi_icon_pane_srt_g1

0x4c93,	// (0x0004420e) midp_editing_number_pane_srt

0x4ad9,	// (0x00044054) midp_ticker_pane_srt

0x4c9b,	// (0x00044216) midp_ticker_pane_srt_g1

0x4ca3,	// (0x0004421e) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0004ecf2) midp_ticker_pane_srt_g

0x4cab,	// (0x00044226) midp_ticker_pane_srt_t1

0x6659,	// (0x00045bd4) midp_editing_number_pane_t1_copy1

0x4e17,	// (0x00044392) listscroll_midp_pane

0x4e17,	// (0x00044392) midp_form_pane

0x4b45,	// (0x000440c0) midp_info_popup_window_ParamLimits

0x4b45,	// (0x000440c0) midp_info_popup_window

0x3eef,	// (0x0004346a) bg_popup_sub_pane_cp50_ParamLimits

0x3eef,	// (0x0004346a) bg_popup_sub_pane_cp50

0x5773,	// (0x00044cee) listscroll_midp_info_pane_ParamLimits

0x5773,	// (0x00044cee) listscroll_midp_info_pane

0x575b,	// (0x00044cd6) listscroll_form_midp_pane_ParamLimits

0x575b,	// (0x00044cd6) listscroll_form_midp_pane

0x5767,	// (0x00044ce2) scroll_bar_cp050

0xdab8,	// (0x0004d033) list_midp_pane

0x739c,	// (0x00046917) signal_pane_g2_cp

0x5675,	// (0x00044bf0) listscroll_midp_info_pane_t1_ParamLimits

0x5675,	// (0x00044bf0) listscroll_midp_info_pane_t1

0x568d,	// (0x00044c08) listscroll_midp_info_pane_t2_ParamLimits

0x568d,	// (0x00044c08) listscroll_midp_info_pane_t2

0x56cb,	// (0x00044c46) listscroll_midp_info_pane_t3_ParamLimits

0x56cb,	// (0x00044c46) listscroll_midp_info_pane_t3

0x5705,	// (0x00044c80) listscroll_midp_info_pane_t4_ParamLimits

0x5705,	// (0x00044c80) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0004eda5) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0004eda5) listscroll_midp_info_pane_t

0x3fb3,	// (0x0004352e) scroll_pane_cp21

0x5613,	// (0x00044b8e) form_midp_field_choice_group_pane

0x561c,	// (0x00044b97) form_midp_field_text_pane

0x565b,	// (0x00044bd6) form_midp_field_time_pane

0x5663,	// (0x00044bde) form_midp_gauge_slider_pane

0x566c,	// (0x00044be7) form_midp_gauge_wait_pane

0x34f4,	// (0x00042a6f) form_midp_image_pane

0xbb90,	// (0x0004b10b) list_single_midp_pane_ParamLimits

0xbb90,	// (0x0004b10b) list_single_midp_pane

0xda96,	// (0x0004d011) form_midp_field_text_pane_t1

0x5395,	// (0x00044910) input_focus_pane_cp050

0x5602,	// (0x00044b7d) list_midp_form_text_pane

0x559a,	// (0x00044b15) form_midp_field_choice_group_pane_t1

0x55a8,	// (0x00044b23) input_focus_pane_cp051

0x55bc,	// (0x00044b37) list_midp_choice_pane

0x34f4,	// (0x00042a6f) status_idle_pane

0x557e,	// (0x00044af9) form_midp_field_time_pane_t1

0x34ea,	// (0x00042a65) wait_anim_pane_g2_copy1

0x558c,	// (0x00044b07) form_midp_field_time_pane_t2

0x0001,

0x4bf3,	// (0x0004416e) aid_navinavi_width_2_pane

0xf825,	// (0x0004eda0) form_midp_field_time_pane_t

0x34f4,	// (0x00042a6f) input_focus_pane_cp052

0x34f4,	// (0x00042a6f) bg_input_focus_pane_cp040

0x553e,	// (0x00044ab9) form_midp_gauge_slider_pane_t1

0x554c,	// (0x00044ac7) form_midp_gauge_slider_pane_t2

0xda7a,	// (0x0004cff5) form_midp_gauge_slider_pane_t3

0xda88,	// (0x0004d003) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0004ed97) form_midp_gauge_slider_pane_t

0x5576,	// (0x00044af1) form_midp_slider_pane

0x35d4,	// (0x00042b4f) bg_input_focus_pane_cp041_ParamLimits

0x35d4,	// (0x00042b4f) bg_input_focus_pane_cp041

0x550b,	// (0x00044a86) form_midp_gauge_wait_pane_t1_ParamLimits

0x550b,	// (0x00044a86) form_midp_gauge_wait_pane_t1

0x551d,	// (0x00044a98) form_midp_gauge_wait_pane_t2_ParamLimits

0x551d,	// (0x00044a98) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0004ed92) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0004ed92) form_midp_gauge_wait_pane_t

0x552f,	// (0x00044aaa) form_midp_wait_pane_ParamLimits

0x552f,	// (0x00044aaa) form_midp_wait_pane

0x54d5,	// (0x00044a50) form_midp_image_pane_g1

0x54de,	// (0x00044a59) form_midp_image_pane_t1

0x54ed,	// (0x00044a68) form_midp_image_pane_t2

0x54fc,	// (0x00044a77) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0004ed8b) form_midp_image_pane_t

0x54cc,	// (0x00044a47) list_single_midp_pane_g1

0x07df,	// (0x0003fd5a) list_single_midp_pane_t1

0xda65,	// (0x0004cfe0) list_midp_form_item_pane_ParamLimits

0xda65,	// (0x0004cfe0) list_midp_form_item_pane

0x4b9b,	// (0x00044116) list_midp_form_item_pane_t1

0x4baa,	// (0x00044125) midp_ticker_pane_g1

0x4bb6,	// (0x00044131) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x0004ecd8) midp_ticker_pane_g

0x4bc2,	// (0x0004413d) midp_ticker_pane_t1

0x68aa,	// (0x00045e25) midp_editing_number_pane_t1

0x6888,	// (0x00045e03) midp_editing_number_pane

0x6897,	// (0x00045e12) midp_ticker_pane

0x6649,	// (0x00045bc4) ai_message_heading_pane

0x34f4,	// (0x00042a6f) bg_popup_window_pane_cp14

0x6651,	// (0x00045bcc) listscroll_ai_message_pane

0x65d3,	// (0x00045b4e) ai_message_heading_pane_g1_ParamLimits

0x65d3,	// (0x00045b4e) ai_message_heading_pane_g1

0x65df,	// (0x00045b5a) ai_message_heading_pane_g2_ParamLimits

0x65df,	// (0x00045b5a) ai_message_heading_pane_g2

0x65eb,	// (0x00045b66) ai_message_heading_pane_g3_ParamLimits

0x65eb,	// (0x00045b66) ai_message_heading_pane_g3

0x65f7,	// (0x00045b72) ai_message_heading_pane_g4_ParamLimits

0x65f7,	// (0x00045b72) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0004eecc) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0004eecc) ai_message_heading_pane_g

0x6603,	// (0x00045b7e) ai_message_heading_pane_t1_ParamLimits

0x6603,	// (0x00045b7e) ai_message_heading_pane_t1

0x661d,	// (0x00045b98) ai_message_heading_pane_t2_ParamLimits

0x661d,	// (0x00045b98) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0004eed5) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0004eed5) ai_message_heading_pane_t

0x662f,	// (0x00045baa) bg_popup_heading_pane_cp1_ParamLimits

0x662f,	// (0x00045baa) bg_popup_heading_pane_cp1

0x65c1,	// (0x00045b3c) list_ai_message_pane_ParamLimits

0x65c1,	// (0x00045b3c) list_ai_message_pane

0x3fb3,	// (0x0004352e) scroll_pane_cp10

0x655d,	// (0x00045ad8) list_ai_message_pane_g1

0x6565,	// (0x00045ae0) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0004eea9) list_ai_message_pane_g

0x656d,	// (0x00045ae8) list_ai_message_pane_t1_ParamLimits

0x656d,	// (0x00045ae8) list_ai_message_pane_t1

0x6582,	// (0x00045afd) list_ai_message_pane_t2_ParamLimits

0x6582,	// (0x00045afd) list_ai_message_pane_t2

0x6597,	// (0x00045b12) list_ai_message_pane_t3_ParamLimits

0x6597,	// (0x00045b12) list_ai_message_pane_t3

0x65ac,	// (0x00045b27) list_ai_message_pane_t4_ParamLimits

0x65ac,	// (0x00045b27) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0004eeae) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0004eeae) list_ai_message_pane_t

0xdbfa,	// (0x0004d175) cell_ai_soft_ind_pane_ParamLimits

0xdbfa,	// (0x0004d175) cell_ai_soft_ind_pane

0x4bd4,	// (0x0004414f) cell_ai_soft_ind_pane_g1_ParamLimits

0x4bd4,	// (0x0004414f) cell_ai_soft_ind_pane_g1

0x34f4,	// (0x00042a6f) grid_highlight_cp1

0x4be1,	// (0x0004415c) text_secondary_cp56_ParamLimits

0x4be1,	// (0x0004415c) text_secondary_cp56

0x651d,	// (0x00045a98) example_general_pane_ParamLimits

0x651d,	// (0x00045a98) example_general_pane

0x6529,	// (0x00045aa4) example_parent_pane_g1_ParamLimits

0x6529,	// (0x00045aa4) example_parent_pane_g1

0x6535,	// (0x00045ab0) example_parent_pane_t1_ParamLimits

0x6535,	// (0x00045ab0) example_parent_pane_t1

0xc537,	// (0x0004bab2) popup_preview_text_window_ParamLimits

0xc537,	// (0x0004bab2) popup_preview_text_window

0x4a0a,	// (0x00043f85) list_single_pane_cp2_g4

0x3905,	// (0x00042e80) bg_popup_preview_window_pane_ParamLimits

0x3905,	// (0x00042e80) bg_popup_preview_window_pane

0x6269,	// (0x000457e4) popup_preview_text_window_t1_ParamLimits

0x6269,	// (0x000457e4) popup_preview_text_window_t1

0x6287,	// (0x00045802) popup_preview_text_window_t2_ParamLimits

0x6287,	// (0x00045802) popup_preview_text_window_t2

0x62d0,	// (0x0004584b) popup_preview_text_window_t3_ParamLimits

0x62d0,	// (0x0004584b) popup_preview_text_window_t3

0x6315,	// (0x00045890) popup_preview_text_window_t4_ParamLimits

0x6315,	// (0x00045890) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0004ee7d) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0004ee7d) popup_preview_text_window_t

0x6393,	// (0x0004590e) scroll_pane_cp11

0x5321,	// (0x0004489c) bg_popup_preview_window_pane_g1

0x6229,	// (0x000457a4) bg_popup_preview_window_pane_g2

0x6231,	// (0x000457ac) bg_popup_preview_window_pane_g3

0x6239,	// (0x000457b4) bg_popup_preview_window_pane_g4

0x6241,	// (0x000457bc) bg_popup_preview_window_pane_g5

0x6249,	// (0x000457c4) bg_popup_preview_window_pane_g6

0x6251,	// (0x000457cc) bg_popup_preview_window_pane_g7

0x6259,	// (0x000457d4) bg_popup_preview_window_pane_g8

0x0ec3,	// (0x0004043e) aid_popup_width_pane

0xc4b3,	// (0x0004ba2e) popup_midp_note_alarm_window_ParamLimits

0xc4b3,	// (0x0004ba2e) popup_midp_note_alarm_window

0x3e43,	// (0x000433be) data_form_pane_ParamLimits

0xb9f8,	// (0x0004af73) form_field_data_pane_g1

0xba02,	// (0x0004af7d) form_field_data_pane_t1_ParamLimits

0x3e4f,	// (0x000433ca) input_focus_pane_ParamLimits

0x049e,	// (0x0003fa19) data_form_wide_pane_ParamLimits

0x04af,	// (0x0003fa2a) form_field_data_wide_pane_g1

0x04bb,	// (0x0003fa36) form_field_data_wide_pane_t1_ParamLimits

0x3bb4,	// (0x0004312f) input_focus_pane_cp6_ParamLimits

0xd2b3,	// (0x0004c82e) input_popup_find_pane_g1_ParamLimits

0xd2b3,	// (0x0004c82e) input_popup_find_pane_g1

0x14e1,	// (0x00040a5c) aid_navi_side_left_pane

0x14f6,	// (0x00040a71) aid_navi_side_right_pane

0x5c36,	// (0x000451b1) bg_popup_window_pane_cp30_ParamLimits

0x5c36,	// (0x000451b1) bg_popup_window_pane_cp30

0x5cb0,	// (0x0004522b) popup_midp_note_alarm_window_g1_ParamLimits

0x5cb0,	// (0x0004522b) popup_midp_note_alarm_window_g1

0x5ce0,	// (0x0004525b) popup_midp_note_alarm_window_t1_ParamLimits

0x5ce0,	// (0x0004525b) popup_midp_note_alarm_window_t1

0x5d81,	// (0x000452fc) popup_midp_note_alarm_window_t2_ParamLimits

0x5d81,	// (0x000452fc) popup_midp_note_alarm_window_t2

0x5e2f,	// (0x000453aa) popup_midp_note_alarm_window_t3_ParamLimits

0x5e2f,	// (0x000453aa) popup_midp_note_alarm_window_t3

0x5e61,	// (0x000453dc) popup_midp_note_alarm_window_t4_ParamLimits

0x5e61,	// (0x000453dc) popup_midp_note_alarm_window_t4

0x5e87,	// (0x00045402) popup_midp_note_alarm_window_t5_ParamLimits

0x5e87,	// (0x00045402) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0004ee1a) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0004ee1a) popup_midp_note_alarm_window_t

0x5f33,	// (0x000454ae) wait_bar_pane_cp1_ParamLimits

0x5f33,	// (0x000454ae) wait_bar_pane_cp1

0x34f4,	// (0x00042a6f) wait_anim_pane_copy1

0x34f4,	// (0x00042a6f) wait_border_pane_copy1

0x591c,	// (0x00044e97) wait_border_pane_g1_copy1

0x04d5,	// (0x0003fa50) form_field_popup_pane_g1

0xba1c,	// (0x0004af97) form_field_popup_pane_t1_ParamLimits

0x3e4f,	// (0x000433ca) input_focus_pane_cp7_ParamLimits

0x3e71,	// (0x000433ec) list_form_pane_ParamLimits

0x04f5,	// (0x0003fa70) form_field_popup_wide_pane_g1

0x04fd,	// (0x0003fa78) form_field_popup_wide_pane_t1_ParamLimits

0x3e4f,	// (0x000433ca) input_focus_pane_cp8_ParamLimits

0x3e7d,	// (0x000433f8) list_form_wide_pane_ParamLimits

0x69df,	// (0x00045f5a) aid_size_cell_graphic_pane

0xba9b,	// (0x0004b016) data_form_pane_t1_ParamLimits

0xbbb8,	// (0x0004b133) data_form_wide_pane_t1_ParamLimits

0xd6ea,	// (0x0004cc65) bg_status_flat_pane

0xcf72,	// (0x0004c4ed) title_pane_t1_ParamLimits

0x359c,	// (0x00042b17) title_pane_t2_ParamLimits

0x35c2,	// (0x00042b3d) title_pane_t3_ParamLimits

0xf557,	// (0x0004ead2) title_pane_t_ParamLimits

0x4432,	// (0x000439ad) level_1_signal_ParamLimits

0x4444,	// (0x000439bf) level_2_signal_ParamLimits

0x4457,	// (0x000439d2) level_3_signal_ParamLimits

0x446a,	// (0x000439e5) level_4_signal_ParamLimits

0x447d,	// (0x000439f8) level_5_signal_ParamLimits

0x4490,	// (0x00043a0b) level_6_signal_ParamLimits

0x44a3,	// (0x00043a1e) level_7_signal_ParamLimits

0x4432,	// (0x000439ad) level_1_battery_ParamLimits

0x4444,	// (0x000439bf) level_2_battery_ParamLimits

0x4457,	// (0x000439d2) level_3_battery_ParamLimits

0x446a,	// (0x000439e5) level_4_battery_ParamLimits

0x447d,	// (0x000439f8) level_5_battery_ParamLimits

0x4490,	// (0x00043a0b) level_6_battery_ParamLimits

0x44a3,	// (0x00043a1e) level_7_battery_ParamLimits

0x5b3b,	// (0x000450b6) bg_status_flat_pane_g1

0x5b43,	// (0x000450be) bg_status_flat_pane_g2

0x5b4b,	// (0x000450c6) bg_status_flat_pane_g3

0x5b53,	// (0x000450ce) bg_status_flat_pane_g4

0x5b5b,	// (0x000450d6) bg_status_flat_pane_g5

0x5b63,	// (0x000450de) bg_status_flat_pane_g6

0x5b6b,	// (0x000450e6) bg_status_flat_pane_g7

0xcffe,	// (0x0004c579) tabs_3_active_pane_t1_ParamLimits

0xcffe,	// (0x0004c579) tabs_3_passive_pane_t1_ParamLimits

0xd010,	// (0x0004c58b) tabs_4_active_pane_t1_ParamLimits

0xd010,	// (0x0004c58b) tabs_4_1_passive_pane_t1_ParamLimits

0xd2c1,	// (0x0004c83c) tabs_2_active_pane_t1_ParamLimits

0xd2c1,	// (0x0004c83c) tabs_2_passive_pane_t1_ParamLimits

0x35d4,	// (0x00042b4f) bg_active_tab_pane_cp4_ParamLimits

0xd2d3,	// (0x0004c84e) tabs_2_long_active_pane_t1_ParamLimits

0x4e17,	// (0x00044392) bg_passive_tab_pane_cp4_ParamLimits

0x2030,	// (0x000415ab) list_single_midp_graphic_pane_t1_ParamLimits

0x35d4,	// (0x00042b4f) bg_active_tab_pane_cp5_ParamLimits

0xd2e6,	// (0x0004c861) tabs_3_long_active_pane_t1_ParamLimits

0x4e17,	// (0x00044392) bg_passive_tab_pane_cp5_ParamLimits

0x2030,	// (0x000415ab) list_single_midp_graphic_pane_t1

0xd6ea,	// (0x0004cc65) bg_status_flat_pane_ParamLimits

0x4fb1,	// (0x0004452c) indicator_pane_cp2_ParamLimits

0x4fb1,	// (0x0004452c) indicator_pane_cp2

0xd868,	// (0x0004cde3) navi_pane_srt_ParamLimits

0xd868,	// (0x0004cde3) navi_pane_srt

0x5100,	// (0x0004467b) popup_clock_digital_analogue_window_cp1

0x36b1,	// (0x00042c2c) indicator_pane_t1

0x4ad9,	// (0x00044054) copy_highlight_pane

0x4ad9,	// (0x00044054) cursor_graphics_pane

0x4ad9,	// (0x00044054) graphic_within_text_pane

0x4ad9,	// (0x00044054) link_highlight_pane

0x6356,	// (0x000458d1) popup_preview_text_window_t5_ParamLimits

0x6356,	// (0x000458d1) popup_preview_text_window_t5

0x4bfb,	// (0x00044176) cursor_digital_pane

0x4bfb,	// (0x00044176) cursor_primary_pane

0x4c0c,	// (0x00044187) cursor_primary_small_pane

0x4c14,	// (0x0004418f) cursor_secondary_pane

0x4c1c,	// (0x00044197) cursor_title_pane

0x4bfb,	// (0x00044176) link_highlight_digital_pane

0x4c03,	// (0x0004417e) link_highlight_primary_pane

0x4c0c,	// (0x00044187) link_highlight_primary_small_pane

0x4c14,	// (0x0004418f) link_highlight_secondary_pane

0x4c1c,	// (0x00044197) link_highlight_title_pane

0x4bfb,	// (0x00044176) copy_highlight_digital_pane

0x4bfb,	// (0x00044176) copy_highlight_primary_pane

0x4c0c,	// (0x00044187) copy_highlight_primary_small_pane

0x4c14,	// (0x0004418f) copy_highlight_secondary_pane

0x4c1c,	// (0x00044197) copy_highlight_title_pane

0x4c14,	// (0x0004418f) graphic_text_digital_pane

0x5bd9,	// (0x00045154) graphic_text_primary_pane

0x5be2,	// (0x0004515d) graphic_text_primary_small_pane

0x4c0c,	// (0x00044187) graphic_text_secondary_pane

0x4bfb,	// (0x00044176) graphic_text_title_pane

0xd526,	// (0x0004caa1) cursor_primary_pane_g1

0x5bcb,	// (0x00045146) cursor_text_primary_t1

0xdaf4,	// (0x0004d06f) cursor_primary_small_pane_g1

0x5bbd,	// (0x00045138) cursor_text_primary_small_t1

0xdaea,	// (0x0004d065) cursor_primary_small_pane_g1_copy1

0x5ba5,	// (0x00045120) cursor_text_primary_small_t1_copy1

0x5b83,	// (0x000450fe) cursor_text_title_t1

0xdae0,	// (0x0004d05b) cursor_title_pane_g1

0xd526,	// (0x0004caa1) cursor_digital_pane_g1

0x4c2e,	// (0x000441a9) cursor_text_digital_t1

0x4c53,	// (0x000441ce) link_highlight_primary_pane_g1

0x5b2c,	// (0x000450a7) link_highlight_primary_pane_t1

0x4c3c,	// (0x000441b7) link_highlight_primary_small_pane_g1

0x4c44,	// (0x000441bf) link_highlight_primary_small_pane_t1

0x4c53,	// (0x000441ce) link_highlight_secondary_pane_g1

0x4c5b,	// (0x000441d6) link_highlight_secondary_pane_t1

0x5aa0,	// (0x0004501b) link_highlight_title_pane_g1

0x5aa8,	// (0x00045023) link_highlight_title_pane_t1

0x5a89,	// (0x00045004) link_highlight_digital_pane_g1

0x5a91,	// (0x0004500c) link_highlight_digital_pane_t1

0x5961,	// (0x00044edc) copy_highlight_primary_pane_g1

0x5969,	// (0x00044ee4) copy_highlight_primary_pane_t1

0x593b,	// (0x00044eb6) copy_highlight_primary_small_pane_g1

0x5952,	// (0x00044ecd) copy_highlight_primary_small_pane_t1

0x4c6a,	// (0x000441e5) copy_highlight_secondary_pane_g1

0x4c72,	// (0x000441ed) copy_highlight_secondary_pane_t1

0x593b,	// (0x00044eb6) copy_highlight_title_pane_g1

0x5943,	// (0x00044ebe) copy_highlight_title_pane_t1

0x5961,	// (0x00044edc) copy_highlight_digital_pane_g1

0x6ba9,	// (0x00046124) copy_highlight_digital_pane_t1

0x6afd,	// (0x00046078) graphic_text_primary_pane_g1

0x6b8d,	// (0x00046108) graphic_text_primary_pane_t1

0x6b9b,	// (0x00046116) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0004ef49) graphic_text_primary_pane_t

0x6b69,	// (0x000460e4) graphic_text_primary_small_pane_g1

0x6b71,	// (0x000460ec) graphic_text_primary_small_pane_t1

0x6b7f,	// (0x000460fa) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0004ef44) graphic_text_primary_small_pane_t

0x6b45,	// (0x000460c0) graphic_text_secondary_pane_g1

0x6b4d,	// (0x000460c8) graphic_text_secondary_pane_t1

0x6b5b,	// (0x000460d6) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0004ef3f) graphic_text_secondary_pane_t

0x6b21,	// (0x0004609c) graphic_text_title_pane_g1

0x6b29,	// (0x000460a4) graphic_text_title_pane_t1

0x6b37,	// (0x000460b2) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0004ef3a) graphic_text_title_pane_t

0x6afd,	// (0x00046078) graphic_text_digital_pane_g1

0x6b05,	// (0x00046080) graphic_text_digital_pane_t1

0x6b13,	// (0x0004608e) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0004ef35) graphic_text_digital_pane_t

0x35d4,	// (0x00042b4f) navi_icon_pane_srt_ParamLimits

0x35d4,	// (0x00042b4f) navi_icon_pane_srt

0x34f4,	// (0x00042a6f) navi_midp_pane_srt

0x34f4,	// (0x00042a6f) navi_navi_pane_srt

0x35d4,	// (0x00042b4f) navi_text_pane_srt_ParamLimits

0x35d4,	// (0x00042b4f) navi_text_pane_srt

0x6ac8,	// (0x00046043) navi_navi_icon_text_pane_srt

0x6ad0,	// (0x0004604b) navi_navi_pane_srt_g1_ParamLimits

0x6ad0,	// (0x0004604b) navi_navi_pane_srt_g1

0x6ae2,	// (0x0004605d) navi_navi_pane_srt_g2_ParamLimits

0x6ae2,	// (0x0004605d) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0004ef30) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0004ef30) navi_navi_pane_srt_g

0x6af4,	// (0x0004606f) navi_navi_tabs_pane_srt

0x6ac8,	// (0x00046043) navi_navi_text_pane_srt

0x6ac8,	// (0x00046043) navi_navi_volume_pane_srt

0x6ab9,	// (0x00046034) navi_navi_text_pane_srt_t1

0x2458,	// (0x000419d3) navi_navi_volume_pane_srt_g1

0x2460,	// (0x000419db) volume_small_pane_srt_ParamLimits

0x2460,	// (0x000419db) volume_small_pane_srt

0x17dd,	// (0x00040d58) volume_small_pane_srt_g1_ParamLimits

0x17dd,	// (0x00040d58) volume_small_pane_srt_g1

0x17ed,	// (0x00040d68) volume_small_pane_srt_g2_ParamLimits

0x17ed,	// (0x00040d68) volume_small_pane_srt_g2

0x17fe,	// (0x00040d79) volume_small_pane_srt_g3_ParamLimits

0x17fe,	// (0x00040d79) volume_small_pane_srt_g3

0x180f,	// (0x00040d8a) volume_small_pane_srt_g4_ParamLimits

0x180f,	// (0x00040d8a) volume_small_pane_srt_g4

0x1820,	// (0x00040d9b) volume_small_pane_srt_g5_ParamLimits

0x1820,	// (0x00040d9b) volume_small_pane_srt_g5

0x1831,	// (0x00040dac) volume_small_pane_srt_g6_ParamLimits

0x1831,	// (0x00040dac) volume_small_pane_srt_g6

0x1842,	// (0x00040dbd) volume_small_pane_srt_g7_ParamLimits

0x1842,	// (0x00040dbd) volume_small_pane_srt_g7

0x1853,	// (0x00040dce) volume_small_pane_srt_g8_ParamLimits

0x1853,	// (0x00040dce) volume_small_pane_srt_g8

0x1864,	// (0x00040ddf) volume_small_pane_srt_g9_ParamLimits

0x1864,	// (0x00040ddf) volume_small_pane_srt_g9

0x1875,	// (0x00040df0) volume_small_pane_srt_g10_ParamLimits

0x1875,	// (0x00040df0) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0004ecdd) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0004ecdd) volume_small_pane_srt_g

0x39ae,	// (0x00042f29) query_popup_data_pane_cp2

0x6a9f,	// (0x0004601a) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6a9f,	// (0x0004601a) navi_navi_icon_text_pane_srt_t1

0x5bd9,	// (0x00045154) navi_tabs_2_long_pane_srt

0x5bd9,	// (0x00045154) navi_tabs_2_pane_srt

0x5bd9,	// (0x00045154) navi_tabs_3_long_pane_srt

0x5bd9,	// (0x00045154) navi_tabs_3_pane_srt

0x5bd9,	// (0x00045154) navi_tabs_4_pane_srt

0x2438,	// (0x000419b3) tabs_2_active_pane_srt_ParamLimits

0x2438,	// (0x000419b3) tabs_2_active_pane_srt

0x2448,	// (0x000419c3) tabs_2_passive_pane_srt_ParamLimits

0x2448,	// (0x000419c3) tabs_2_passive_pane_srt

0x5395,	// (0x00044910) bg_passive_tab_pane_cp1_srt_ParamLimits

0x5395,	// (0x00044910) bg_passive_tab_pane_cp1_srt

0x6a6b,	// (0x00045fe6) bg_passive_tab_pane_g1_cp1_srt

0x471b,	// (0x00043c96) bg_passive_tab_pane_g2_cp1_srt

0x6a74,	// (0x00045fef) bg_passive_tab_pane_g3_cp1_srt

0x384f,	// (0x00042dca) bg_active_tab_pane_cp1_srt_ParamLimits

0x384f,	// (0x00042dca) bg_active_tab_pane_cp1_srt

0x6a7d,	// (0x00045ff8) tabs_2_active_pane_srt_g1

0xde8b,	// (0x0004d406) tabs_2_active_pane_srt_t1_ParamLimits

0xde8b,	// (0x0004d406) tabs_2_active_pane_srt_t1

0x6a6b,	// (0x00045fe6) bg_active_tab_pane_g1_cp1_srt

0x471b,	// (0x00043c96) bg_active_tab_pane_g2_cp1_srt

0x6a74,	// (0x00045fef) bg_active_tab_pane_g3_cp1_srt

0x2405,	// (0x00041980) tabs_3_active_pane_srt_ParamLimits

0x2405,	// (0x00041980) tabs_3_active_pane_srt

0x2416,	// (0x00041991) tabs_3_passive_pane_cp_srt_ParamLimits

0x2416,	// (0x00041991) tabs_3_passive_pane_cp_srt

0x2427,	// (0x000419a2) tabs_3_passive_pane_srt_ParamLimits

0x2427,	// (0x000419a2) tabs_3_passive_pane_srt

0x5395,	// (0x00044910) bg_passive_tab_pane_cp2_srt_ParamLimits

0x5395,	// (0x00044910) bg_passive_tab_pane_cp2_srt

0x4c81,	// (0x000441fc) bg_passive_tab_pane_g1_cp2_srt

0x471b,	// (0x00043c96) bg_passive_tab_pane_g2_cp2_srt

0x4c8a,	// (0x00044205) bg_passive_tab_pane_g3_cp2_srt

0x384f,	// (0x00042dca) bg_active_tab_pane_cp2_srt_ParamLimits

0x384f,	// (0x00042dca) bg_active_tab_pane_cp2_srt

0x6a51,	// (0x00045fcc) tabs_3_active_pane_srt_g1

0xde75,	// (0x0004d3f0) tabs_3_active_pane_srt_t1_ParamLimits

0xde75,	// (0x0004d3f0) tabs_3_active_pane_srt_t1

0x4c81,	// (0x000441fc) bg_active_tab_pane_g1_cp2_srt

0x471b,	// (0x00043c96) bg_active_tab_pane_g2_cp2_srt

0x4c8a,	// (0x00044205) bg_active_tab_pane_g3_cp2_srt

0x23bd,	// (0x00041938) tabs_4_active_pane_srt_ParamLimits

0x23bd,	// (0x00041938) tabs_4_active_pane_srt

0x23cf,	// (0x0004194a) tabs_4_passive_pane_cp2_srt_ParamLimits

0x23cf,	// (0x0004194a) tabs_4_passive_pane_cp2_srt

0x19da,	// (0x00040f55) aid_size_cell_toolbar

0x6701,	// (0x00045c7c) main_idle_act_pane_ParamLimits

0x1b97,	// (0x00041112) popup_large_graphic_colour_window_ParamLimits

0xc7c3,	// (0x0004bd3e) popup_toolbar_window_ParamLimits

0xc7c3,	// (0x0004bd3e) popup_toolbar_window

0x68b9,	// (0x00045e34) list_single_graphic_2heading_pane_ParamLimits

0x68b9,	// (0x00045e34) list_single_graphic_2heading_pane

0x41e3,	// (0x0004375e) aid_size_cell_apps_grid_lsc_pane

0x41f5,	// (0x00043770) aid_size_cell_apps_grid_prt_pane

0x4e17,	// (0x00044392) bg_wml_button_pane_cp1_ParamLimits

0x4e17,	// (0x00044392) bg_wml_button_pane_cp1

0xda96,	// (0x0004d011) form_midp_field_text_pane_t1_ParamLimits

0x5395,	// (0x00044910) input_focus_pane_cp050_ParamLimits

0x5602,	// (0x00044b7d) list_midp_form_text_pane_ParamLimits

0x55a8,	// (0x00044b23) input_focus_pane_cp051_ParamLimits

0x55bc,	// (0x00044b37) list_midp_choice_pane_ParamLimits

0xda33,	// (0x0004cfae) list_single_2graphic_pane_cp3_ParamLimits

0xda33,	// (0x0004cfae) list_single_2graphic_pane_cp3

0xda46,	// (0x0004cfc1) list_single_midp_graphic_pane_ParamLimits

0xda46,	// (0x0004cfc1) list_single_midp_graphic_pane

0x06b1,	// (0x0003fc2c) list_single_graphic_2heading_pane_g1_ParamLimits

0x06b1,	// (0x0003fc2c) list_single_graphic_2heading_pane_g1

0x06bd,	// (0x0003fc38) list_single_graphic_2heading_pane_g4_ParamLimits

0x06bd,	// (0x0003fc38) list_single_graphic_2heading_pane_g4

0x06c9,	// (0x0003fc44) list_single_graphic_2heading_pane_g5_ParamLimits

0x06c9,	// (0x0003fc44) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0004ed30) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0004ed30) list_single_graphic_2heading_pane_g

0x06d5,	// (0x0003fc50) list_single_graphic_2heading_pane_t1_ParamLimits

0x06d5,	// (0x0003fc50) list_single_graphic_2heading_pane_t1

0x06e9,	// (0x0003fc64) list_single_graphic_2heading_pane_t2_ParamLimits

0x06e9,	// (0x0003fc64) list_single_graphic_2heading_pane_t2

0x0705,	// (0x0003fc80) list_single_graphic_2heading_pane_t3_ParamLimits

0x0705,	// (0x0003fc80) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0004ed37) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0004ed37) list_single_graphic_2heading_pane_t

0x525f,	// (0x000447da) bg_popup_sub_pane_cp2

0x5289,	// (0x00044804) grid_toobar_pane

0x1fab,	// (0x00041526) cell_toolbar_pane_ParamLimits

0x1fab,	// (0x00041526) cell_toolbar_pane

0x52c5,	// (0x00044840) cell_toolbar_pane_g1_ParamLimits

0x52c5,	// (0x00044840) cell_toolbar_pane_g1

0x52d9,	// (0x00044854) cell_toolbar_pane_g2_ParamLimits

0x52d9,	// (0x00044854) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x0004ed45) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x0004ed45) cell_toolbar_pane_g

0x52fb,	// (0x00044876) grid_highlight_pane_cp2_ParamLimits

0x52fb,	// (0x00044876) grid_highlight_pane_cp2

0x5315,	// (0x00044890) toolbar_button_pane

0x5321,	// (0x0004489c) toolbar_button_pane_g1

0x5329,	// (0x000448a4) toolbar_button_pane_g2

0x5331,	// (0x000448ac) toolbar_button_pane_g3

0x5339,	// (0x000448b4) toolbar_button_pane_g4

0x5341,	// (0x000448bc) toolbar_button_pane_g5

0x5349,	// (0x000448c4) toolbar_button_pane_g6

0x5351,	// (0x000448cc) toolbar_button_pane_g7

0x5359,	// (0x000448d4) toolbar_button_pane_g8

0x5361,	// (0x000448dc) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x0004ed4a) toolbar_button_pane_g

0x1fef,	// (0x0004156a) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1fef,	// (0x0004156a) list_single_2graphic_pane_g1_cp3

0xc81b,	// (0x0004bd96) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc81b,	// (0x0004bd96) list_single_2graphic_pane_g2_cp3

0x200c,	// (0x00041587) list_single_2graphic_pane_g3_cp3

0x1690,	// (0x00040c0b) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1690,	// (0x00040c0b) list_single_2graphic_pane_g4_cp3

0x2014,	// (0x0004158f) list_single_2graphic_pane_t1_cp3_ParamLimits

0x2014,	// (0x0004158f) list_single_2graphic_pane_t1_cp3

0x6022,	// (0x0004559d) list_single_midp_graphic_pane_g2_ParamLimits

0x6022,	// (0x0004559d) list_single_midp_graphic_pane_g2

0x06a1,	// (0x0003fc1c) aid_zoom_text_primary

0x19e2,	// (0x00040f5d) aid_zoom_text_secondary

0xd57e,	// (0x0004caf9) status_small_pane_g7_ParamLimits

0xd57e,	// (0x0004caf9) status_small_pane_g7

0xd5a1,	// (0x0004cb1c) status_small_pane_t1_ParamLimits

0xcf4e,	// (0x0004c4c9) title_pane_g2

0x0003,

0xf54e,	// (0x0004eac9) title_pane_g

0xd1c6,	// (0x0004c741) aid_size_cell_colour_1_pane_ParamLimits

0xd1c6,	// (0x0004c741) aid_size_cell_colour_1_pane

0xd1da,	// (0x0004c755) aid_size_cell_colour_2_pane_ParamLimits

0xd1da,	// (0x0004c755) aid_size_cell_colour_2_pane

0xd1ee,	// (0x0004c769) aid_size_cell_colour_3_pane_ParamLimits

0xd1ee,	// (0x0004c769) aid_size_cell_colour_3_pane

0xd202,	// (0x0004c77d) aid_size_cell_colour_4_pane_ParamLimits

0xd202,	// (0x0004c77d) aid_size_cell_colour_4_pane

0x141e,	// (0x00040999) title_pane_stacon_g1_ParamLimits

0x141e,	// (0x00040999) title_pane_stacon_g1

0x59c0,	// (0x00044f3b) popup_note_wait_window_g3_ParamLimits

0x59c0,	// (0x00044f3b) popup_note_wait_window_g3

0x5a36,	// (0x00044fb1) popup_note_wait_window_t5_ParamLimits

0x5a36,	// (0x00044fb1) popup_note_wait_window_t5

0x34f4,	// (0x00042a6f) main_feb_china_hwr_fs_writing_pane

0xc1cb,	// (0x0004b746) popup_feb_china_hwr_fs_window_ParamLimits

0xc1cb,	// (0x0004b746) popup_feb_china_hwr_fs_window

0xc82c,	// (0x0004bda7) aid_size_cell_hwr_fs_ParamLimits

0xc82c,	// (0x0004bda7) aid_size_cell_hwr_fs

0x5395,	// (0x00044910) bg_popup_sub_pane_cp3_ParamLimits

0x5395,	// (0x00044910) bg_popup_sub_pane_cp3

0xc841,	// (0x0004bdbc) grid_hwr_fs_pane_ParamLimits

0xc841,	// (0x0004bdbc) grid_hwr_fs_pane

0x208b,	// (0x00041606) linegrid_hwr_fs_pane_ParamLimits

0x208b,	// (0x00041606) linegrid_hwr_fs_pane

0xc859,	// (0x0004bdd4) cell_hwr_fs_pane_ParamLimits

0xc859,	// (0x0004bdd4) cell_hwr_fs_pane

0x53a1,	// (0x0004491c) linegrid_hwr_fs_pane_g1_ParamLimits

0x53a1,	// (0x0004491c) linegrid_hwr_fs_pane_g1

0xda07,	// (0x0004cf82) linegrid_hwr_fs_pane_g2_ParamLimits

0xda07,	// (0x0004cf82) linegrid_hwr_fs_pane_g2

0x53bf,	// (0x0004493a) linegrid_hwr_fs_pane_g3_ParamLimits

0x53bf,	// (0x0004493a) linegrid_hwr_fs_pane_g3

0x20bd,	// (0x00041638) linegrid_hwr_fs_pane_g4_ParamLimits

0x20bd,	// (0x00041638) linegrid_hwr_fs_pane_g4

0x20d7,	// (0x00041652) linegrid_hwr_fs_pane_g5_ParamLimits

0x20d7,	// (0x00041652) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x0004ed70) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x0004ed70) linegrid_hwr_fs_pane_g

0x53cb,	// (0x00044946) cell_hwr_fs_pane_g1_ParamLimits

0x53cb,	// (0x00044946) cell_hwr_fs_pane_g1

0x5196,	// (0x00044711) cell_hwr_fs_pane_g2_ParamLimits

0x5196,	// (0x00044711) cell_hwr_fs_pane_g2

0xda19,	// (0x0004cf94) cell_hwr_fs_pane_g3_ParamLimits

0xda19,	// (0x0004cf94) cell_hwr_fs_pane_g3

0xda26,	// (0x0004cfa1) cell_hwr_fs_pane_g4_ParamLimits

0xda26,	// (0x0004cfa1) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x0004ed7b) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0004ed7b) cell_hwr_fs_pane_g

0xc87f,	// (0x0004bdfa) cell_hwr_fs_pane_t1

0x34f4,	// (0x00042a6f) grid_highlight_pane_cp6

0x34f4,	// (0x00042a6f) main_idle_act2_pane

0x3f9a,	// (0x00043515) aid_inside_area_popup_secondary

0xdafe,	// (0x0004d079) aid_inside_area_window_primary_ParamLimits

0xdafe,	// (0x0004d079) aid_inside_area_window_primary

0x6bb8,	// (0x00046133) ai2_news_ticker_pane

0x6bc0,	// (0x0004613b) aid_size_cell_ai1_link_ParamLimits

0x6bc0,	// (0x0004613b) aid_size_cell_ai1_link

0xdea1,	// (0x0004d41c) popup_ai2_data_window_ParamLimits

0xdea1,	// (0x0004d41c) popup_ai2_data_window

0x6bf0,	// (0x0004616b) popup_ai2_link_window_ParamLimits

0x6bf0,	// (0x0004616b) popup_ai2_link_window

0x5395,	// (0x00044910) bg_popup_sub_pane_cp4_ParamLimits

0x5395,	// (0x00044910) bg_popup_sub_pane_cp4

0x6c04,	// (0x0004617f) grid_ai2_link_pane_ParamLimits

0x6c04,	// (0x0004617f) grid_ai2_link_pane

0x6c1b,	// (0x00046196) popup_ai2_link_window_g1_ParamLimits

0x6c1b,	// (0x00046196) popup_ai2_link_window_g1

0x6c27,	// (0x000461a2) popup_ai2_link_window_g2_ParamLimits

0x6c27,	// (0x000461a2) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0004ef4e) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0004ef4e) popup_ai2_link_window_g

0x6c36,	// (0x000461b1) ai2_mp_button_pane

0x6c3e,	// (0x000461b9) ai2_mp_volume_pane

0x55a8,	// (0x00044b23) bg_popup_sub_pane_cp5_ParamLimits

0x55a8,	// (0x00044b23) bg_popup_sub_pane_cp5

0x6c46,	// (0x000461c1) heading_ai2_gene_pane_ParamLimits

0x6c46,	// (0x000461c1) heading_ai2_gene_pane

0x6c52,	// (0x000461cd) list_ai2_gene_pane_ParamLimits

0x6c52,	// (0x000461cd) list_ai2_gene_pane

0x6c9a,	// (0x00046215) cell_ai2_link_pane_ParamLimits

0x6c9a,	// (0x00046215) cell_ai2_link_pane

0x6cb0,	// (0x0004622b) cell_ai2_link_pane_g1

0x34f4,	// (0x00042a6f) grid_highlight_pane_cp7

0x2475,	// (0x000419f0) ai2_mp_volume_pane_g1

0x6d80,	// (0x000462fb) ai2_mp_volume_pane_g2

0xdecb,	// (0x0004d446) list_ai2_gene_pane_t1

0x6d88,	// (0x00046303) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0004ef67) ai2_mp_volume_pane_g

0x247d,	// (0x000419f8) volume_small_pane_cp3

0x6d90,	// (0x0004630b) aid_size_cell_ai2_button

0x6d98,	// (0x00046313) grid_ai2_button_pane

0x6da1,	// (0x0004631c) cell_ai2_button_pane_ParamLimits

0x6da1,	// (0x0004631c) cell_ai2_button_pane

0x34ea,	// (0x00042a65) cell_ai2_button_pane_g1

0x34f4,	// (0x00042a6f) grid_highlight_pane_cp8

0x6d40,	// (0x000462bb) ai2_gene_pane_t1_ParamLimits

0x6d40,	// (0x000462bb) ai2_gene_pane_t1

0xc145,	// (0x0004b6c0) aid_height_parent_landscape

0xdc48,	// (0x0004d1c3) aid_height_set_list

0x6701,	// (0x00045c7c) aid_size_parent

0x69df,	// (0x00045f5a) aid_size_cell_graphic_pane_ParamLimits

0x6c62,	// (0x000461dd) popup_ai2_data_window_g1_ParamLimits

0x6c62,	// (0x000461dd) popup_ai2_data_window_g1

0x6c6e,	// (0x000461e9) ai2_news_ticker_pane_g1

0x6c76,	// (0x000461f1) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0004ef53) ai2_news_ticker_pane_g

0x6c7e,	// (0x000461f9) ai2_news_ticker_pane_t1

0x6c8c,	// (0x00046207) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0004ef58) ai2_news_ticker_pane_t

0x6cb9,	// (0x00046234) heading_ai2_gene_pane_g1

0x6cc1,	// (0x0004623c) heading_ai2_gene_pane_t1_ParamLimits

0x6cc1,	// (0x0004623c) heading_ai2_gene_pane_t1

0x6cd6,	// (0x00046251) list_highlight_pane_cp6

0xdeb5,	// (0x0004d430) ai2_gene_pane_ParamLimits

0xdeb5,	// (0x0004d430) ai2_gene_pane

0xded9,	// (0x0004d454) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0004ef5d) list_ai2_gene_pane_t

0x6d11,	// (0x0004628c) list_highlight_pane_cp8_ParamLimits

0x6d11,	// (0x0004628c) list_highlight_pane_cp8

0x6d22,	// (0x0004629d) ai2_gene_pane_g1_ParamLimits

0x6d22,	// (0x0004629d) ai2_gene_pane_g1

0x6d34,	// (0x000462af) ai2_gene_pane_g2_ParamLimits

0x6d34,	// (0x000462af) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0004ef62) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0004ef62) ai2_gene_pane_g

0x3dd9,	// (0x00043354) scroll_pane_cp12

0xc104,	// (0x0004b67f) control_pane_t3_ParamLimits

0xc104,	// (0x0004b67f) control_pane_t3

0xd592,	// (0x0004cb0d) status_small_pane_g8_ParamLimits

0xd592,	// (0x0004cb0d) status_small_pane_g8

0xc260,	// (0x0004b7db) popup_find_window_ParamLimits

0xc4ed,	// (0x0004ba68) popup_note_image_window_ParamLimits

0x071d,	// (0x0003fc98) list_double2_graphic_pane_vc_g1_ParamLimits

0x071d,	// (0x0003fc98) list_double2_graphic_pane_vc_g1

0x4a12,	// (0x00043f8d) list_double2_graphic_pane_vc_g2_ParamLimits

0x4a12,	// (0x00043f8d) list_double2_graphic_pane_vc_g2

0x1fdb,	// (0x00041556) list_double2_graphic_pane_vc_g3_ParamLimits

0x1fdb,	// (0x00041556) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0004ed3e) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0004ed3e) list_double2_graphic_pane_vc_g

0x0729,	// (0x0003fca4) list_double2_graphic_pane_vc_t1_ParamLimits

0x0729,	// (0x0003fca4) list_double2_graphic_pane_vc_t1

0x4a12,	// (0x00043f8d) list_single_heading_pane_vc_g1_ParamLimits

0x4a12,	// (0x00043f8d) list_single_heading_pane_vc_g1

0x1fdb,	// (0x00041556) list_single_heading_pane_vc_g2_ParamLimits

0x1fdb,	// (0x00041556) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004eb4d) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004eb4d) list_single_heading_pane_vc_g

0x073f,	// (0x0003fcba) list_single_heading_pane_vc_t1_ParamLimits

0x073f,	// (0x0003fcba) list_single_heading_pane_vc_t1

0x0757,	// (0x0003fcd2) list_single_heading_pane_vc_t2_ParamLimits

0x0757,	// (0x0003fcd2) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x0004ed5f) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x0004ed5f) list_single_heading_pane_vc_t

0x2046,	// (0x000415c1) list_setting_number_pane_vc_g1_ParamLimits

0x2046,	// (0x000415c1) list_setting_number_pane_vc_g1

0x2052,	// (0x000415cd) list_setting_number_pane_vc_g2_ParamLimits

0x2052,	// (0x000415cd) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x0004ed64) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x0004ed64) list_setting_number_pane_vc_g

0x0773,	// (0x0003fcee) list_setting_number_pane_vc_t1_ParamLimits

0x0773,	// (0x0003fcee) list_setting_number_pane_vc_t1

0x0787,	// (0x0003fd02) list_setting_number_pane_vc_t2_ParamLimits

0x0787,	// (0x0003fd02) list_setting_number_pane_vc_t2

0x07a3,	// (0x0003fd1e) list_setting_number_pane_vc_t3_ParamLimits

0x07a3,	// (0x0003fd1e) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x0004ed69) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x0004ed69) list_setting_number_pane_vc_t

0x07cf,	// (0x0003fd4a) set_value_pane_vc_ParamLimits

0x07cf,	// (0x0003fd4a) set_value_pane_vc

0x68b9,	// (0x00045e34) list_double2_graphic_pane_vc_ParamLimits

0x68b9,	// (0x00045e34) list_double2_graphic_pane_vc

0x0887,	// (0x0003fe02) list_double2_large_graphic_pane_vc_ParamLimits

0x0887,	// (0x0003fe02) list_double2_large_graphic_pane_vc

0x68b9,	// (0x00045e34) list_double2_pane_vc_ParamLimits

0x68b9,	// (0x00045e34) list_double2_pane_vc

0x68b9,	// (0x00045e34) list_double_graphic_heading_pane_vc_ParamLimits

0x68b9,	// (0x00045e34) list_double_graphic_heading_pane_vc

0x68b9,	// (0x00045e34) list_double_graphic_pane_vc_ParamLimits

0x68b9,	// (0x00045e34) list_double_graphic_pane_vc

0x68b9,	// (0x00045e34) list_double_heading_pane_vc_ParamLimits

0x68b9,	// (0x00045e34) list_double_heading_pane_vc

0x0898,	// (0x0003fe13) list_double_large_graphic_pane_vc_ParamLimits

0x0898,	// (0x0003fe13) list_double_large_graphic_pane_vc

0x68b9,	// (0x00045e34) list_double_number_pane_vc_ParamLimits

0x68b9,	// (0x00045e34) list_double_number_pane_vc

0x68b9,	// (0x00045e34) list_double_pane_vc_ParamLimits

0x68b9,	// (0x00045e34) list_double_pane_vc

0x68b9,	// (0x00045e34) list_double_time_pane_vc_ParamLimits

0x68b9,	// (0x00045e34) list_double_time_pane_vc

0x68b9,	// (0x00045e34) list_setting_number_pane_vc_ParamLimits

0x68b9,	// (0x00045e34) list_setting_number_pane_vc

0x68b9,	// (0x00045e34) list_setting_pane_vc_ParamLimits

0x68b9,	// (0x00045e34) list_setting_pane_vc

0x68b9,	// (0x00045e34) list_single_graphic_heading_pane_vc_ParamLimits

0x68b9,	// (0x00045e34) list_single_graphic_heading_pane_vc

0x68b9,	// (0x00045e34) list_single_heading_pane_vc_ParamLimits

0x68b9,	// (0x00045e34) list_single_heading_pane_vc

0x68b9,	// (0x00045e34) list_single_number_heading_pane_vc_ParamLimits

0x68b9,	// (0x00045e34) list_single_number_heading_pane_vc

0x071d,	// (0x0003fc98) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x071d,	// (0x0003fc98) list_double_graphic_heading_pane_vc_g1

0x4a12,	// (0x00043f8d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4a12,	// (0x00043f8d) list_double_graphic_heading_pane_vc_g2

0x1fdb,	// (0x00041556) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x1fdb,	// (0x00041556) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x0004ed3e) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0004ed3e) list_double_graphic_heading_pane_vc_g

0x08e7,	// (0x0003fe62) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x08e7,	// (0x0003fe62) list_double_graphic_heading_pane_vc_t1

0x0903,	// (0x0003fe7e) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0903,	// (0x0003fe7e) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x0004ef6e) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x0004ef6e) list_double_graphic_heading_pane_vc_t

0x2046,	// (0x000415c1) list_setting_pane_vc_g1_ParamLimits

0x2046,	// (0x000415c1) list_setting_pane_vc_g1

0x2052,	// (0x000415cd) list_setting_pane_vc_g2_ParamLimits

0x2052,	// (0x000415cd) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x0004ed64) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x0004ed64) list_setting_pane_vc_g

0x0921,	// (0x0003fe9c) list_setting_pane_vc_t1_ParamLimits

0x0921,	// (0x0003fe9c) list_setting_pane_vc_t1

0x093d,	// (0x0003feb8) list_setting_pane_vc_t2_ParamLimits

0x093d,	// (0x0003feb8) list_setting_pane_vc_t2

0x0001,

0xfa21,	// (0x0004ef9c) list_setting_pane_vc_t_ParamLimits

0xfa21,	// (0x0004ef9c) list_setting_pane_vc_t

0x07cf,	// (0x0003fd4a) set_value_pane_cp_vc_ParamLimits

0x07cf,	// (0x0003fd4a) set_value_pane_cp_vc

0x4a12,	// (0x00043f8d) list_single_number_heading_pane_vc_g1_ParamLimits

0x4a12,	// (0x00043f8d) list_single_number_heading_pane_vc_g1

0x1fdb,	// (0x00041556) list_single_number_heading_pane_vc_g2_ParamLimits

0x1fdb,	// (0x00041556) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004eb4d) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004eb4d) list_single_number_heading_pane_vc_g

0x073f,	// (0x0003fcba) list_single_number_heading_pane_vc_t1_ParamLimits

0x073f,	// (0x0003fcba) list_single_number_heading_pane_vc_t1

0x0959,	// (0x0003fed4) list_single_number_heading_pane_vc_t2_ParamLimits

0x0959,	// (0x0003fed4) list_single_number_heading_pane_vc_t2

0x096d,	// (0x0003fee8) list_single_number_heading_pane_vc_t3_ParamLimits

0x096d,	// (0x0003fee8) list_single_number_heading_pane_vc_t3

0x0002,

0xfa26,	// (0x0004efa1) list_single_number_heading_pane_vc_t_ParamLimits

0xfa26,	// (0x0004efa1) list_single_number_heading_pane_vc_t

0x071d,	// (0x0003fc98) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x071d,	// (0x0003fc98) list_single_graphic_heading_pane_vc_g1

0x4a12,	// (0x00043f8d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4a12,	// (0x00043f8d) list_single_graphic_heading_pane_vc_g4

0x1fdb,	// (0x00041556) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x1fdb,	// (0x00041556) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0004ed3e) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0004ed3e) list_single_graphic_heading_pane_vc_g

0x073f,	// (0x0003fcba) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x073f,	// (0x0003fcba) list_single_graphic_heading_pane_vc_t1

0x097f,	// (0x0003fefa) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x097f,	// (0x0003fefa) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2d,	// (0x0004efa8) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2d,	// (0x0004efa8) list_single_graphic_heading_pane_vc_t

0x4a12,	// (0x00043f8d) list_double2_pane_vc_g1_ParamLimits

0x4a12,	// (0x00043f8d) list_double2_pane_vc_g1

0x1fdb,	// (0x00041556) list_double2_pane_vc_g2_ParamLimits

0x1fdb,	// (0x00041556) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004eb4d) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004eb4d) list_double2_pane_vc_g

0x0993,	// (0x0003ff0e) list_double2_pane_vc_t1_ParamLimits

0x0993,	// (0x0003ff0e) list_double2_pane_vc_t1

0x09a9,	// (0x0003ff24) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x09a9,	// (0x0003ff24) list_double2_large_graphic_pane_vc_g1

0x09b5,	// (0x0003ff30) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x09b5,	// (0x0003ff30) list_double2_large_graphic_pane_vc_g2

0x09c1,	// (0x0003ff3c) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x09c1,	// (0x0003ff3c) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x0004eb65) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x0004eb65) list_double2_large_graphic_pane_vc_g

0x09cd,	// (0x0003ff48) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x09cd,	// (0x0003ff48) list_double2_large_graphic_pane_vc_t1

0x2486,	// (0x00041a01) list_double_time_pane_vc_g1_ParamLimits

0x2486,	// (0x00041a01) list_double_time_pane_vc_g1

0x2492,	// (0x00041a0d) list_double_time_pane_vc_g2_ParamLimits

0x2492,	// (0x00041a0d) list_double_time_pane_vc_g2

0x0001,

0xfa32,	// (0x0004efad) list_double_time_pane_vc_g_ParamLimits

0xfa32,	// (0x0004efad) list_double_time_pane_vc_g

0x09e3,	// (0x0003ff5e) list_double_time_pane_vc_t1_ParamLimits

0x09e3,	// (0x0003ff5e) list_double_time_pane_vc_t1

0x0a07,	// (0x0003ff82) list_double_time_pane_vc_t2_ParamLimits

0x0a07,	// (0x0003ff82) list_double_time_pane_vc_t2

0x0a56,	// (0x0003ffd1) list_double_time_pane_vc_t3_ParamLimits

0x0a56,	// (0x0003ffd1) list_double_time_pane_vc_t3

0x0a68,	// (0x0003ffe3) list_double_time_pane_vc_t4_ParamLimits

0x0a68,	// (0x0003ffe3) list_double_time_pane_vc_t4

0x0003,

0xfa37,	// (0x0004efb2) list_double_time_pane_vc_t_ParamLimits

0xfa37,	// (0x0004efb2) list_double_time_pane_vc_t

0x4a12,	// (0x00043f8d) list_double_pane_vc_g1_ParamLimits

0x4a12,	// (0x00043f8d) list_double_pane_vc_g1

0x1fdb,	// (0x00041556) list_double_pane_vc_g2_ParamLimits

0x1fdb,	// (0x00041556) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004eb4d) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004eb4d) list_double_pane_vc_g

0x0a7c,	// (0x0003fff7) list_double_pane_vc_t1_ParamLimits

0x0a7c,	// (0x0003fff7) list_double_pane_vc_t1

0x0a90,	// (0x0004000b) list_double_pane_vc_t2_ParamLimits

0x0a90,	// (0x0004000b) list_double_pane_vc_t2

0x0001,

0xfa40,	// (0x0004efbb) list_double_pane_vc_t_ParamLimits

0xfa40,	// (0x0004efbb) list_double_pane_vc_t

0x4a12,	// (0x00043f8d) list_double_number_pane_vc_g1_ParamLimits

0x4a12,	// (0x00043f8d) list_double_number_pane_vc_g1

0x1fdb,	// (0x00041556) list_double_number_pane_vc_g2_ParamLimits

0x1fdb,	// (0x00041556) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004eb4d) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004eb4d) list_double_number_pane_vc_g

0x0aa8,	// (0x00040023) list_double_number_pane_vc_t1_ParamLimits

0x0aa8,	// (0x00040023) list_double_number_pane_vc_t1

0x0aba,	// (0x00040035) list_double_number_pane_vc_t2_ParamLimits

0x0aba,	// (0x00040035) list_double_number_pane_vc_t2

0x0ace,	// (0x00040049) list_double_number_pane_vc_t3_ParamLimits

0x0ace,	// (0x00040049) list_double_number_pane_vc_t3

0x0002,

0xfa45,	// (0x0004efc0) list_double_number_pane_vc_t_ParamLimits

0xfa45,	// (0x0004efc0) list_double_number_pane_vc_t

0x0ae6,	// (0x00040061) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0ae6,	// (0x00040061) list_double_large_graphic_pane_vc_g1

0x0b08,	// (0x00040083) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0b08,	// (0x00040083) list_double_large_graphic_pane_vc_g2

0x0b1c,	// (0x00040097) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0b1c,	// (0x00040097) list_double_large_graphic_pane_vc_g3

0x0b2b,	// (0x000400a6) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0b2b,	// (0x000400a6) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4c,	// (0x0004efc7) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4c,	// (0x0004efc7) list_double_large_graphic_pane_vc_g

0x0b37,	// (0x000400b2) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0b37,	// (0x000400b2) list_double_large_graphic_pane_vc_t1

0x0b53,	// (0x000400ce) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0b53,	// (0x000400ce) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa55,	// (0x0004efd0) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa55,	// (0x0004efd0) list_double_large_graphic_pane_vc_t

0x4a12,	// (0x00043f8d) list_double_heading_pane_vc_g1_ParamLimits

0x4a12,	// (0x00043f8d) list_double_heading_pane_vc_g1

0x1fdb,	// (0x00041556) list_double_heading_pane_vc_g2_ParamLimits

0x1fdb,	// (0x00041556) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004eb4d) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004eb4d) list_double_heading_pane_vc_g

0x0b75,	// (0x000400f0) list_double_heading_pane_vc_t1_ParamLimits

0x0b75,	// (0x000400f0) list_double_heading_pane_vc_t1

0x073f,	// (0x0003fcba) list_double_heading_pane_vc_t2_ParamLimits

0x073f,	// (0x0003fcba) list_double_heading_pane_vc_t2

0x0001,

0xfa5a,	// (0x0004efd5) list_double_heading_pane_vc_t_ParamLimits

0xfa5a,	// (0x0004efd5) list_double_heading_pane_vc_t

0x0b89,	// (0x00040104) list_double_graphic_pane_vc_g1_ParamLimits

0x0b89,	// (0x00040104) list_double_graphic_pane_vc_g1

0x249e,	// (0x00041a19) list_double_graphic_pane_vc_g2_ParamLimits

0x249e,	// (0x00041a19) list_double_graphic_pane_vc_g2

0x4a12,	// (0x00043f8d) list_double_graphic_pane_vc_g3_ParamLimits

0x4a12,	// (0x00043f8d) list_double_graphic_pane_vc_g3

0x0003,

0xfa5f,	// (0x0004efda) list_double_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x0004efda) list_double_graphic_pane_vc_g

0x0b95,	// (0x00040110) list_double_graphic_pane_vc_t1_ParamLimits

0x0b95,	// (0x00040110) list_double_graphic_pane_vc_t1

0x0bbf,	// (0x0004013a) list_double_graphic_pane_vc_t2_ParamLimits

0x0bbf,	// (0x0004013a) list_double_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x0004efe3) list_double_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x0004efe3) list_double_graphic_pane_vc_t

0x0ecf,	// (0x0004044a) aid_size_cell_fastswap

0xbd76,	// (0x0004b2f1) aid_size_cell_touch_ParamLimits

0xbd76,	// (0x0004b2f1) aid_size_cell_touch

0x1132,	// (0x000406ad) popup_fast_swap_wide_window_ParamLimits

0x1132,	// (0x000406ad) popup_fast_swap_wide_window

0xbf26,	// (0x0004b4a1) touch_pane_ParamLimits

0xbf26,	// (0x0004b4a1) touch_pane

0x3e3b,	// (0x000433b6) button_value_adjust_pane_cp2

0x03c8,	// (0x0003f943) button_value_adjust_pane_cp4

0x03ec,	// (0x0003f967) form_field_data_pane_cp2

0xb9bf,	// (0x0004af3a) form_field_data_wide_pane_cp2

0x42b0,	// (0x0004382b) bg_scroll_pane_ParamLimits

0x1580,	// (0x00040afb) scroll_handle_pane_ParamLimits

0x1594,	// (0x00040b0f) scroll_sc2_down_pane_ParamLimits

0x1594,	// (0x00040b0f) scroll_sc2_down_pane

0x42e1,	// (0x0004385c) scroll_sc2_up_pane_ParamLimits

0x42e1,	// (0x0004385c) scroll_sc2_up_pane

0xdff9,	// (0x0004d574) grid_wheel_folder_pane_g1_ParamLimits

0xdff9,	// (0x0004d574) grid_wheel_folder_pane_g1

0x1775,	// (0x00040cf0) clock_nsta_pane_cp2_ParamLimits

0x1775,	// (0x00040cf0) clock_nsta_pane_cp2

0x4e17,	// (0x00044392) listscroll_midp_pane_ParamLimits

0xd48d,	// (0x0004ca08) midp_canvas_pane

0x4dc9,	// (0x00044344) nsta_clock_indic_pane

0x4dfd,	// (0x00044378) listscroll_form_pane_vc

0x4e05,	// (0x00044380) listscroll_set_pane_vc_ParamLimits

0x4e05,	// (0x00044380) listscroll_set_pane_vc

0xd712,	// (0x0004cc8d) clock_nsta_pane

0xd73c,	// (0x0004ccb7) indicator_nsta_pane

0x525f,	// (0x000447da) bg_popup_sub_pane_cp2_ParamLimits

0x5273,	// (0x000447ee) find_pane_cp2_ParamLimits

0x5273,	// (0x000447ee) find_pane_cp2

0x5289,	// (0x00044804) grid_toobar_pane_ParamLimits

0x5369,	// (0x000448e4) list_form_gen_pane_vc_ParamLimits

0x5369,	// (0x000448e4) list_form_gen_pane_vc

0x537f,	// (0x000448fa) scroll_pane_cp8_vc_ParamLimits

0x537f,	// (0x000448fa) scroll_pane_cp8_vc

0x53fb,	// (0x00044976) data_form_wide_pane_vc_ParamLimits

0x53fb,	// (0x00044976) data_form_wide_pane_vc

0x5407,	// (0x00044982) form_field_data_wide_pane_vc_g1

0x540f,	// (0x0004498a) form_field_data_wide_pane_vc_t1_ParamLimits

0x540f,	// (0x0004498a) form_field_data_wide_pane_vc_t1

0x3e4f,	// (0x000433ca) input_focus_pane_cp6_vc_ParamLimits

0x3e4f,	// (0x000433ca) input_focus_pane_cp6_vc

0xdab8,	// (0x0004d033) list_midp_pane_ParamLimits

0x6a45,	// (0x00045fc0) scroll_pane_cp16_ParamLimits

0x6a45,	// (0x00045fc0) scroll_pane_cp16

0x5795,	// (0x00044d10) button_value_adjust_pane_ParamLimits

0x5795,	// (0x00044d10) button_value_adjust_pane

0xdc59,	// (0x0004d1d4) button_value_adjust_pane_cp6_ParamLimits

0xdc59,	// (0x0004d1d4) button_value_adjust_pane_cp6

0xdd73,	// (0x0004d2ee) settings_code_pane_cp_ParamLimits

0xdd73,	// (0x0004d2ee) settings_code_pane_cp

0x34ea,	// (0x00042a65) cell_touch_pane_g1

0x34ea,	// (0x00042a65) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0004ec83) cell_touch_pane_g

0xdee7,	// (0x0004d462) cell_touch_pane_cp_ParamLimits

0xdee7,	// (0x0004d462) cell_touch_pane_cp

0xdf03,	// (0x0004d47e) cell_touch_pane_ParamLimits

0xdf03,	// (0x0004d47e) cell_touch_pane

0x34ea,	// (0x00042a65) scroll_sc2_down_pane_g1

0x34ea,	// (0x00042a65) scroll_sc2_up_pane_g1

0x34f4,	// (0x00042a6f) bg_set_opt_pane_cp4_vc

0x6dd5,	// (0x00046350) list_set_graphic_pane_vc_g1_ParamLimits

0x6dd5,	// (0x00046350) list_set_graphic_pane_vc_g1

0x6de1,	// (0x0004635c) list_set_graphic_pane_vc_g2_ParamLimits

0x6de1,	// (0x0004635c) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x0004ef73) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x0004ef73) list_set_graphic_pane_vc_g

0x6ded,	// (0x00046368) text_primary_small_cp13_vc_ParamLimits

0x6ded,	// (0x00046368) text_primary_small_cp13_vc

0x6e05,	// (0x00046380) list_set_graphic_pane_vc_ParamLimits

0x6e05,	// (0x00046380) list_set_graphic_pane_vc

0x34f4,	// (0x00042a6f) input_focus_pane_cp2_vc

0x34ea,	// (0x00042a65) setting_code_pane_vc_g1

0x361f,	// (0x00042b9a) setting_code_pane_vc_t1

0x6e18,	// (0x00046393) set_text_pane_vc_t1_ParamLimits

0x6e18,	// (0x00046393) set_text_pane_vc_t1

0x34f4,	// (0x00042a6f) input_focus_pane_cp1_vc

0x6e34,	// (0x000463af) list_set_text_pane_vc

0x34ea,	// (0x00042a65) setting_text_pane_vc_g1

0x34f4,	// (0x00042a6f) bg_set_opt_pane_cp2_vc

0x3616,	// (0x00042b91) setting_slider_graphic_pane_vc_g1

0x6e3e,	// (0x000463b9) setting_slider_graphic_pane_vc_t1

0x6e4e,	// (0x000463c9) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x0004ef78) setting_slider_graphic_pane_vc_t

0x6e5e,	// (0x000463d9) slider_set_pane_cp_vc

0x6e66,	// (0x000463e1) slider_set_pane_vc_g1

0x6e6f,	// (0x000463ea) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x0004ef7d) slider_set_pane_vc_g

0x3e9e,	// (0x00043419) set_opt_bg_pane_g1_copy1

0x3ea6,	// (0x00043421) set_opt_bg_pane_g2_copy1

0x6e9b,	// (0x00046416) set_opt_bg_pane_g3_copy1

0x3eb6,	// (0x00043431) set_opt_bg_pane_g4_copy1

0x3ebe,	// (0x00043439) set_opt_bg_pane_g5_copy1

0x3ec6,	// (0x00043441) set_opt_bg_pane_g6_copy1

0x6ea5,	// (0x00046420) set_opt_bg_pane_g7_copy1

0x6ead,	// (0x00046428) set_opt_bg_pane_g8_copy1

0x6eb7,	// (0x00046432) set_opt_bg_pane_g9_copy1

0x34f4,	// (0x00042a6f) bg_set_opt_pane_cp_vc

0x6ec1,	// (0x0004643c) setting_slider_pane_vc_t1

0x6ed0,	// (0x0004644b) setting_slider_pane_vc_t2

0x6ee0,	// (0x0004645b) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x0004ef8c) setting_slider_pane_vc_t

0x6ef0,	// (0x0004646b) slider_set_pane_vc

0x20fb,	// (0x00041676) volume_set_pane_vc_g1

0x2104,	// (0x0004167f) volume_set_pane_vc_g2

0x210d,	// (0x00041688) volume_set_pane_vc_g3

0x2116,	// (0x00041691) volume_set_pane_vc_g4

0x211f,	// (0x0004169a) volume_set_pane_vc_g5

0x2128,	// (0x000416a3) volume_set_pane_vc_g6

0x2131,	// (0x000416ac) volume_set_pane_vc_g7

0x213a,	// (0x000416b5) volume_set_pane_vc_g8

0x2143,	// (0x000416be) volume_set_pane_vc_g9

0x214c,	// (0x000416c7) volume_set_pane_vc_g10

0x0009,

0xf8b6,	// (0x0004ee31) volume_set_pane_vc_g

0x6ef8,	// (0x00046473) volume_set_pane_vc

0x6f00,	// (0x0004647b) button_value_adjust_pane_cp1_vc

0x6f0a,	// (0x00046485) list_highlight_pane_cp2_vc

0x6f13,	// (0x0004648e) list_set_pane_vc_ParamLimits

0x6f13,	// (0x0004648e) list_set_pane_vc

0x6f71,	// (0x000464ec) main_pane_set_vc_t1_ParamLimits

0x6f71,	// (0x000464ec) main_pane_set_vc_t1

0x6f86,	// (0x00046501) main_pane_set_vc_t2_ParamLimits

0x6f86,	// (0x00046501) main_pane_set_vc_t2

0x6f98,	// (0x00046513) main_pane_set_vc_t3_ParamLimits

0x6f98,	// (0x00046513) main_pane_set_vc_t3

0x6fac,	// (0x00046527) main_pane_set_vc_t4_ParamLimits

0x6fac,	// (0x00046527) main_pane_set_vc_t4

0x0003,

0xfa18,	// (0x0004ef93) main_pane_set_vc_t_ParamLimits

0xfa18,	// (0x0004ef93) main_pane_set_vc_t

0x6fc0,	// (0x0004653b) setting_code_pane_vc_ParamLimits

0x6fc0,	// (0x0004653b) setting_code_pane_vc

0x6fd1,	// (0x0004654c) setting_slider_graphic_pane_vc

0x6fd1,	// (0x0004654c) setting_slider_pane_vc

0x6fd1,	// (0x0004654c) setting_text_pane_vc

0x6fd1,	// (0x0004654c) setting_volume_pane_vc

0x6fdb,	// (0x00046556) scroll_pane_cp121_vc

0x3e29,	// (0x000433a4) set_content_pane_vc

0x6fe3,	// (0x0004655e) button_value_adjust_pane_g1

0x6fec,	// (0x00046567) button_value_adjust_pane_g2

0x0001,

0xfa6d,	// (0x0004efe8) button_value_adjust_pane_g

0x6ff5,	// (0x00046570) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6ff5,	// (0x00046570) form_field_slider_wide_pane_vc_t1

0x7009,	// (0x00046584) form_field_slider_wide_pane_vc_t2_ParamLimits

0x7009,	// (0x00046584) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa72,	// (0x0004efed) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0004efed) form_field_slider_wide_pane_vc_t

0x384f,	// (0x00042dca) input_focus_pane_cp10_vc_ParamLimits

0x384f,	// (0x00042dca) input_focus_pane_cp10_vc

0x7037,	// (0x000465b2) slider_cont_pane_cp1_vc_ParamLimits

0x7037,	// (0x000465b2) slider_cont_pane_cp1_vc

0x7049,	// (0x000465c4) slider_form_pane_g1_cp2

0x6e6f,	// (0x000463ea) slider_form_pane_g2_cp2

0x7076,	// (0x000465f1) form_field_slider_pane_vc_t3

0x7084,	// (0x000465ff) form_field_slider_pane_vc_t4

0x7092,	// (0x0004660d) slider_form_pane_vc_ParamLimits

0x7092,	// (0x0004660d) slider_form_pane_vc

0x709f,	// (0x0004661a) form_field_slider_pane_vc_t1_ParamLimits

0x709f,	// (0x0004661a) form_field_slider_pane_vc_t1

0x7009,	// (0x00046584) form_field_slider_pane_vc_t2_ParamLimits

0x7009,	// (0x00046584) form_field_slider_pane_vc_t2

0x0001,

0xfa84,	// (0x0004efff) form_field_slider_pane_vc_t_ParamLimits

0xfa84,	// (0x0004efff) form_field_slider_pane_vc_t

0x384f,	// (0x00042dca) input_focus_pane_cp9_vc_ParamLimits

0x384f,	// (0x00042dca) input_focus_pane_cp9_vc

0x70bb,	// (0x00046636) slider_cont_pane_vc_ParamLimits

0x70bb,	// (0x00046636) slider_cont_pane_vc

0x70cf,	// (0x0004664a) list_form_graphic_pane_cp_vc_ParamLimits

0x70cf,	// (0x0004664a) list_form_graphic_pane_cp_vc

0x5407,	// (0x00044982) form_field_popup_wide_pane_vc_g1

0x70e4,	// (0x0004665f) form_field_popup_wide_pane_vc_t1_ParamLimits

0x70e4,	// (0x0004665f) form_field_popup_wide_pane_vc_t1

0x3e4f,	// (0x000433ca) input_focus_pane_cp8_vc_ParamLimits

0x3e4f,	// (0x000433ca) input_focus_pane_cp8_vc

0x7129,	// (0x000466a4) list_form_wide_pane_vc_ParamLimits

0x7129,	// (0x000466a4) list_form_wide_pane_vc

0x7135,	// (0x000466b0) list_form_graphic_pane_vc_g1

0x713d,	// (0x000466b8) list_form_graphic_pane_vc_t1_ParamLimits

0x713d,	// (0x000466b8) list_form_graphic_pane_vc_t1

0x35d4,	// (0x00042b4f) list_highlight_pane_cp5_vc_ParamLimits

0x35d4,	// (0x00042b4f) list_highlight_pane_cp5_vc

0x7159,	// (0x000466d4) list_form_graphic_pane_vc_ParamLimits

0x7159,	// (0x000466d4) list_form_graphic_pane_vc

0x5407,	// (0x00044982) form_field_popup_pane_vc_g1

0x716f,	// (0x000466ea) form_field_popup_pane_vc_t1_ParamLimits

0x716f,	// (0x000466ea) form_field_popup_pane_vc_t1

0x3e4f,	// (0x000433ca) input_focus_pane_cp7_vc_ParamLimits

0x3e4f,	// (0x000433ca) input_focus_pane_cp7_vc

0x7186,	// (0x00046701) list_form_pane_vc_ParamLimits

0x7186,	// (0x00046701) list_form_pane_vc

0x7192,	// (0x0004670d) data_form_pane_vc_t1_ParamLimits

0x7192,	// (0x0004670d) data_form_pane_vc_t1

0x3e9e,	// (0x00043419) input_focus_pane_vc_g1

0x3ea6,	// (0x00043421) input_focus_pane_vc_g2

0x3eae,	// (0x00043429) input_focus_pane_vc_g3

0x3eb6,	// (0x00043431) input_focus_pane_vc_g4

0x3ebe,	// (0x00043439) input_focus_pane_vc_g5

0x3ec6,	// (0x00043441) input_focus_pane_vc_g6

0x3ece,	// (0x00043449) input_focus_pane_vc_g7

0x3ed6,	// (0x00043451) input_focus_pane_vc_g8

0x3ede,	// (0x00043459) input_focus_pane_vc_g9

0x34ea,	// (0x00042a65) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x0004ec0c) input_focus_pane_vc_g

0x53fb,	// (0x00044976) data_form_pane_vc_ParamLimits

0x53fb,	// (0x00044976) data_form_pane_vc

0x5407,	// (0x00044982) form_field_data_pane_vc_g1

0x71ad,	// (0x00046728) form_field_data_pane_vc_t1_ParamLimits

0x71ad,	// (0x00046728) form_field_data_pane_vc_t1

0x3e4f,	// (0x000433ca) input_focus_pane_vc_ParamLimits

0x3e4f,	// (0x000433ca) input_focus_pane_vc

0x71c7,	// (0x00046742) button_value_adjust_pane_cp3_vc

0x71cf,	// (0x0004674a) button_value_adjust_pane_cp5_vc

0x71d7,	// (0x00046752) form_field_data_pane_vc_ParamLimits

0x71d7,	// (0x00046752) form_field_data_pane_vc

0x71ee,	// (0x00046769) form_field_data_pane_vc_cp2

0x71f6,	// (0x00046771) form_field_data_wide_pane_vc_ParamLimits

0x71f6,	// (0x00046771) form_field_data_wide_pane_vc

0x720c,	// (0x00046787) form_field_data_wide_pane_vc_cp2

0x7214,	// (0x0004678f) form_field_popup_pane_vc_ParamLimits

0x7214,	// (0x0004678f) form_field_popup_pane_vc

0x722b,	// (0x000467a6) form_field_popup_wide_pane_vc_ParamLimits

0x722b,	// (0x000467a6) form_field_popup_wide_pane_vc

0x7241,	// (0x000467bc) form_field_slider_pane_vc_ParamLimits

0x7241,	// (0x000467bc) form_field_slider_pane_vc

0x7254,	// (0x000467cf) form_field_slider_wide_pane_vc_ParamLimits

0x7254,	// (0x000467cf) form_field_slider_wide_pane_vc

0xdf21,	// (0x0004d49c) grid_touch_1_pane_ParamLimits

0xdf21,	// (0x0004d49c) grid_touch_1_pane

0xdf35,	// (0x0004d4b0) grid_touch_2_pane_ParamLimits

0xdf35,	// (0x0004d4b0) grid_touch_2_pane

0x7322,	// (0x0004689d) touch_pane_g1_ParamLimits

0x7322,	// (0x0004689d) touch_pane_g1

0x728b,	// (0x00046806) cell_app_pane_cp_wide_ParamLimits

0x728b,	// (0x00046806) cell_app_pane_cp_wide

0x729c,	// (0x00046817) grid_popup_fast_wide_pane_ParamLimits

0x729c,	// (0x00046817) grid_popup_fast_wide_pane

0x72b0,	// (0x0004682b) scroll_pane_cp19_ParamLimits

0x72b0,	// (0x0004682b) scroll_pane_cp19

0x34f4,	// (0x00042a6f) bg_popup_window_pane_cp20

0x72c4,	// (0x0004683f) listscroll_popup_fast_wide_pane

0x4006,	// (0x00043581) grid_indicator_nsta_pane

0x72cc,	// (0x00046847) clock_nsta_pane_g1

0x72d5,	// (0x00046850) clock_nsta_pane_t1

0xdf5f,	// (0x0004d4da) cell_indicator_nsta_pane_ParamLimits

0xdf5f,	// (0x0004d4da) cell_indicator_nsta_pane

0x7322,	// (0x0004689d) cell_indicator_nsta_pane_g1

0xdf76,	// (0x0004d4f1) cell_indicator_nsta_pane_g2

0x0001,

0xfa95,	// (0x0004f010) cell_indicator_nsta_pane_g

0x733d,	// (0x000468b8) clock_nsta_pane_cp

0x7345,	// (0x000468c0) indicator_nsta_pane_cp

0x734d,	// (0x000468c8) nsta_clock_indic_pane_g1

0x369d,	// (0x00042c18) grid_indicator_pane

0x43d6,	// (0x00043951) scroll_pane_cp29

0x16c4,	// (0x00040c3f) indicator_nsta_pane_cp2_ParamLimits

0x16c4,	// (0x00040c3f) indicator_nsta_pane_cp2

0x35d4,	// (0x00042b4f) main_apps_wheel_pane

0x561c,	// (0x00044b97) form_midp_field_text_pane_ParamLimits

0x5767,	// (0x00044ce2) scroll_bar_cp050_ParamLimits

0x73ae,	// (0x00046929) cell_indicator_pane_ParamLimits

0x73ae,	// (0x00046929) cell_indicator_pane

0x73c5,	// (0x00046940) cell_indicator_pane_g1

0xdf83,	// (0x0004d4fe) grid_wheel_folder_pane_ParamLimits

0xdf83,	// (0x0004d4fe) grid_wheel_folder_pane

0xdf91,	// (0x0004d50c) list_wheel_apps_pane_ParamLimits

0xdf91,	// (0x0004d50c) list_wheel_apps_pane

0xdf9f,	// (0x0004d51a) main_apps_wheel_pane_g1_ParamLimits

0xdf9f,	// (0x0004d51a) main_apps_wheel_pane_g1

0xdfab,	// (0x0004d526) main_apps_wheel_pane_g2_ParamLimits

0xdfab,	// (0x0004d526) main_apps_wheel_pane_g2

0x0001,

0xfab1,	// (0x0004f02c) main_apps_wheel_pane_g_ParamLimits

0xfab1,	// (0x0004f02c) main_apps_wheel_pane_g

0xdfb9,	// (0x0004d534) main_apps_wheel_pane_t1_ParamLimits

0xdfb9,	// (0x0004d534) main_apps_wheel_pane_t1

0xdfcd,	// (0x0004d548) list_wheel_apps_pane_g1

0xdfd5,	// (0x0004d550) list_wheel_apps_pane_g2

0xdfdd,	// (0x0004d558) list_wheel_apps_pane_g3

0xdfe5,	// (0x0004d560) list_wheel_apps_pane_g4

0xdfef,	// (0x0004d56a) list_wheel_apps_pane_g5

0x0004,

0xfab6,	// (0x0004f031) list_wheel_apps_pane_g

0x4959,	// (0x00043ed4) navi_icon_text_pane

0xd606,	// (0x0004cb81) aid_fill_nsta

0x748a,	// (0x00046a05) navi_icon_text_pane_g1

0x7496,	// (0x00046a11) navi_icon_text_pane_t1

0xd46a,	// (0x0004c9e5) list_set_graphic_pane_t1_ParamLimits

0xd46a,	// (0x0004c9e5) list_set_graphic_pane_t1

0x5eb6,	// (0x00045431) popup_midp_note_alarm_window_t6_ParamLimits

0x5eb6,	// (0x00045431) popup_midp_note_alarm_window_t6

0x5ec8,	// (0x00045443) popup_midp_note_alarm_window_t7_ParamLimits

0x5ec8,	// (0x00045443) popup_midp_note_alarm_window_t7

0x5eda,	// (0x00045455) popup_midp_note_alarm_window_t8_ParamLimits

0x5eda,	// (0x00045455) popup_midp_note_alarm_window_t8

0x5eec,	// (0x00045467) popup_midp_note_alarm_window_t9_ParamLimits

0x5eec,	// (0x00045467) popup_midp_note_alarm_window_t9

0x5efe,	// (0x00045479) popup_midp_note_alarm_window_t10_ParamLimits

0x5efe,	// (0x00045479) popup_midp_note_alarm_window_t10

0x5f10,	// (0x0004548b) popup_midp_note_alarm_window_t11_ParamLimits

0x5f10,	// (0x0004548b) popup_midp_note_alarm_window_t11

0x5f22,	// (0x0004549d) scroll_pane_cp17_ParamLimits

0x5f22,	// (0x0004549d) scroll_pane_cp17

0x20fb,	// (0x00041676) volume_small_pane_cp_g1

0x24bb,	// (0x00041a36) volume_small_pane_cp_g2

0x24c4,	// (0x00041a3f) volume_small_pane_cp_g3

0x24cd,	// (0x00041a48) volume_small_pane_cp_g4

0x24d6,	// (0x00041a51) volume_small_pane_cp_g5

0x24df,	// (0x00041a5a) volume_small_pane_cp_g6

0x24e8,	// (0x00041a63) volume_small_pane_cp_g7

0x24f1,	// (0x00041a6c) volume_small_pane_cp_g8

0x24fa,	// (0x00041a75) volume_small_pane_cp_g9

0x2503,	// (0x00041a7e) volume_small_pane_cp_g10

0x4baa,	// (0x00044125) midp_ticker_pane_g1_ParamLimits

0x4bb6,	// (0x00044131) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x0004ecd8) midp_ticker_pane_g_ParamLimits

0x4bc2,	// (0x0004413d) midp_ticker_pane_t1_ParamLimits

0xd62a,	// (0x0004cba5) aid_fill_nsta_2

0x5753,	// (0x00044cce) list_form2_midp_pane

0x6888,	// (0x00045e03) midp_editing_number_pane_ParamLimits

0x6897,	// (0x00045e12) midp_ticker_pane_ParamLimits

0x74a8,	// (0x00046a23) form2_midp_field_pane

0x74cc,	// (0x00046a47) scroll_pane_cp51

0x74ec,	// (0x00046a67) form2_midp_button_pane_ParamLimits

0x74ec,	// (0x00046a67) form2_midp_button_pane

0x74fe,	// (0x00046a79) form2_midp_content_pane_ParamLimits

0x74fe,	// (0x00046a79) form2_midp_content_pane

0x7518,	// (0x00046a93) form2_midp_field_choice_group_pane

0x7520,	// (0x00046a9b) form2_midp_field_pane_g1

0x7534,	// (0x00046aaf) form2_midp_field_pane_g2

0x753c,	// (0x00046ab7) form2_midp_field_pane_g3

0x7544,	// (0x00046abf) form2_midp_field_pane_g4

0x0003,

0xfadb,	// (0x0004f056) form2_midp_field_pane_g

0x754c,	// (0x00046ac7) form2_midp_gauge_slider_pane

0x7554,	// (0x00046acf) form2_midp_gauge_wait_pane

0x755c,	// (0x00046ad7) form2_midp_image_pane_ParamLimits

0x755c,	// (0x00046ad7) form2_midp_image_pane

0x7577,	// (0x00046af2) form2_midp_label_pane_ParamLimits

0x7577,	// (0x00046af2) form2_midp_label_pane

0xe022,	// (0x0004d59d) form2_midp_label_pane_cp_ParamLimits

0xe022,	// (0x0004d59d) form2_midp_label_pane_cp

0x75b1,	// (0x00046b2c) form2_midp_string_pane_ParamLimits

0x75b1,	// (0x00046b2c) form2_midp_string_pane

0xbbe4,	// (0x0004b15f) form2_midp_text_pane_ParamLimits

0xbbe4,	// (0x0004b15f) form2_midp_text_pane

0x75c3,	// (0x00046b3e) form2_midp_time_pane

0x75d3,	// (0x00046b4e) input_focus_pane_cp51_ParamLimits

0x75d3,	// (0x00046b4e) input_focus_pane_cp51

0x75eb,	// (0x00046b66) form2_midp_label_pane_t1_ParamLimits

0x75eb,	// (0x00046b66) form2_midp_label_pane_t1

0xbc03,	// (0x0004b17e) form2_mdip_text_pane_t1_ParamLimits

0xbc03,	// (0x0004b17e) form2_mdip_text_pane_t1

0x0c26,	// (0x000401a1) form2_midp_time_pane_t1

0x7634,	// (0x00046baf) form2_midp_gauge_slider_pane_t1

0xe041,	// (0x0004d5bc) form2_midp_gauge_slider_pane_t2

0xe053,	// (0x0004d5ce) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae4,	// (0x0004f05f) form2_midp_gauge_slider_pane_t

0x766a,	// (0x00046be5) form2_midp_slider_pane

0x7676,	// (0x00046bf1) form2_midp_gauge_wait_pane_t1

0x7684,	// (0x00046bff) form2_midp_wait_pane_ParamLimits

0x7684,	// (0x00046bff) form2_midp_wait_pane

0xe065,	// (0x0004d5e0) list_single_2graphic_pane_cp4_ParamLimits

0xe065,	// (0x0004d5e0) list_single_2graphic_pane_cp4

0xda46,	// (0x0004cfc1) list_single_midp_graphic_pane_cp_ParamLimits

0xda46,	// (0x0004cfc1) list_single_midp_graphic_pane_cp

0x34f4,	// (0x00042a6f) list_highlight_pane_cp20

0x76de,	// (0x00046c59) list_single_2graphic_pane_g1_cp4

0x76e6,	// (0x00046c61) list_single_2graphic_pane_g2_cp4

0x76ee,	// (0x00046c69) list_single_2graphic_pane_t1_cp4

0x35d4,	// (0x00042b4f) list_highlight_pane_cp21

0x76fd,	// (0x00046c78) list_single_midp_graphic_pane_g4_cp

0x770c,	// (0x00046c87) list_single_midp_graphic_pane_t1_cp

0xe079,	// (0x0004d5f4) form2_mdip_string_pane_t1_ParamLimits

0xe079,	// (0x0004d5f4) form2_mdip_string_pane_t1

0x34f4,	// (0x00042a6f) bg_wml_button_pane_cp2

0x34ea,	// (0x00042a65) form2_midp_image_pane_g1

0x13b6,	// (0x00040931) list_double_large_graphic_pane_g5_ParamLimits

0x13b6,	// (0x00040931) list_double_large_graphic_pane_g5

0x4e17,	// (0x00044392) midp_form_pane_ParamLimits

0x35d4,	// (0x00042b4f) main_apps_wheel_pane_ParamLimits

0xc56b,	// (0x0004bae6) popup_preview_window_ParamLimits

0xc56b,	// (0x0004bae6) popup_preview_window

0x1f56,	// (0x000414d1) popup_touch_info_window_ParamLimits

0x1f56,	// (0x000414d1) popup_touch_info_window

0x1f74,	// (0x000414ef) popup_touch_menu_window_ParamLimits

0x1f74,	// (0x000414ef) popup_touch_menu_window

0x34e0,	// (0x00042a5b) bg_popup_sub_pane_cp6

0x781a,	// (0x00046d95) list_touch_menu_pane

0x7822,	// (0x00046d9d) list_single_touch_menu_pane_ParamLimits

0x7822,	// (0x00046d9d) list_single_touch_menu_pane

0x7838,	// (0x00046db3) list_single_touch_menu_pane_t1

0x35d4,	// (0x00042b4f) bg_popup_sub_pane_cp7_ParamLimits

0x35d4,	// (0x00042b4f) bg_popup_sub_pane_cp7

0x7846,	// (0x00046dc1) heading_sub_pane

0x784e,	// (0x00046dc9) list_touch_info_pane_ParamLimits

0x784e,	// (0x00046dc9) list_touch_info_pane

0x785d,	// (0x00046dd8) list_single_touch_info_pane_ParamLimits

0x785d,	// (0x00046dd8) list_single_touch_info_pane

0x786f,	// (0x00046dea) list_single_touch_info_pane_t1

0x787d,	// (0x00046df8) list_single_touch_info_pane_t2

0x0001,

0xfaf2,	// (0x0004f06d) list_single_touch_info_pane_t

0x4ad9,	// (0x00044054) bg_popup_heading_pane_cp

0x788b,	// (0x00046e06) heading_sub_pane_t1

0x5395,	// (0x00044910) bg_popup_preview_window_pane_cp_ParamLimits

0x5395,	// (0x00044910) bg_popup_preview_window_pane_cp

0x7846,	// (0x00046dc1) heading_preview_pane

0x784e,	// (0x00046dc9) list_preview_pane_ParamLimits

0x784e,	// (0x00046dc9) list_preview_pane

0x7899,	// (0x00046e14) popup_preview_window_g1

0x785d,	// (0x00046dd8) list_single_preview_pane_ParamLimits

0x785d,	// (0x00046dd8) list_single_preview_pane

0x78a1,	// (0x00046e1c) list_single_preview_pane_g1

0x78a9,	// (0x00046e24) list_single_preview_pane_t1

0x786f,	// (0x00046dea) list_single_preview_pane_t2

0x0001,

0xfaf7,	// (0x0004f072) list_single_preview_pane_t

0x78b7,	// (0x00046e32) bg_popup_heading_pane_cp2_ParamLimits

0x78b7,	// (0x00046e32) bg_popup_heading_pane_cp2

0x78cd,	// (0x00046e48) heading_preview_pane_g1

0x78d5,	// (0x00046e50) heading_preview_pane_t1_ParamLimits

0x78d5,	// (0x00046e50) heading_preview_pane_t1

0x36c0,	// (0x00042c3b) soft_indicator_pane_t1_ParamLimits

0x3db6,	// (0x00043331) scroll_pane_ParamLimits

0x42cf,	// (0x0004384a) scroll_sc2_left_pane

0x42d8,	// (0x00043853) scroll_sc2_right_pane

0x42f7,	// (0x00043872) scroll_bg_pane_g1_ParamLimits

0x430c,	// (0x00043887) scroll_bg_pane_g2_ParamLimits

0x4324,	// (0x0004389f) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0004ec63) scroll_bg_pane_g_ParamLimits

0x42f7,	// (0x00043872) scroll_handle_pane_g1_ParamLimits

0x4346,	// (0x000438c1) scroll_handle_pane_g2_ParamLimits

0x4324,	// (0x0004389f) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0004ec6a) scroll_handle_pane_g_ParamLimits

0x1a1c,	// (0x00040f97) popup_choice_list_window_ParamLimits

0x1a1c,	// (0x00040f97) popup_choice_list_window

0x526b,	// (0x000447e6) choice_list_pane

0x52ed,	// (0x00044868) cell_toolbar_pane_t1

0x5315,	// (0x00044890) toolbar_button_pane_ParamLimits

0x63e8,	// (0x00045963) ai_gene_pane_1_t2_ParamLimits

0x63e8,	// (0x00045963) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0004ee8d) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0004ee8d) ai_gene_pane_1_t

0x78f2,	// (0x00046e6d) scroll_sc2_left_pane_g1

0x78f2,	// (0x00046e6d) scroll_sc2_right_pane_g1

0x4e17,	// (0x00044392) bg_popup_sub_pane_cp10

0x78fc,	// (0x00046e77) list_choice_list_pane

0x7915,	// (0x00046e90) list_single_choice_list_pane_ParamLimits

0x7915,	// (0x00046e90) list_single_choice_list_pane

0x7928,	// (0x00046ea3) list_single_choice_list_pane_g1

0x3fd7,	// (0x00043552) list_single_choice_list_pane_t1_ParamLimits

0x3fd7,	// (0x00043552) list_single_choice_list_pane_t1

0x7930,	// (0x00046eab) choice_list_pane_g1

0x7938,	// (0x00046eb3) choice_list_pane_t1

0x34e0,	// (0x00042a5b) input_focus_pane_cp11

0x41ae,	// (0x00043729) title_pane_stacon_g2_ParamLimits

0x41ae,	// (0x00043729) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x0004ec49) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x0004ec49) title_pane_stacon_g

0x4ad9,	// (0x00044054) cursor_press_pane

0xc218,	// (0x0004b793) popup_fep_hwr_window_ParamLimits

0xc218,	// (0x0004b793) popup_fep_hwr_window

0x1b42,	// (0x000410bd) popup_fep_vkb_window_ParamLimits

0x1b42,	// (0x000410bd) popup_fep_vkb_window

0x7946,	// (0x00046ec1) cursor_press_pane_g1

0x0002,

0xfb20,	// (0x0004f09b) fep_vkb_side_pane_g_ParamLimits

0x2545,	// (0x00041ac0) fep_hwr_candidate_pane_ParamLimits

0x2545,	// (0x00041ac0) fep_hwr_candidate_pane

0x256f,	// (0x00041aea) fep_hwr_side_pane_ParamLimits

0x256f,	// (0x00041aea) fep_hwr_side_pane

0x258f,	// (0x00041b0a) fep_hwr_top_pane_ParamLimits

0x258f,	// (0x00041b0a) fep_hwr_top_pane

0x25a7,	// (0x00041b22) fep_hwr_write_pane_ParamLimits

0x25a7,	// (0x00041b22) fep_hwr_write_pane

0xfb20,	// (0x0004f09b) fep_vkb_side_pane_g

0x794e,	// (0x00046ec9) fep_hwr_top_pane_g1

0x7960,	// (0x00046edb) fep_hwr_top_pane_g2

0x25d3,	// (0x00041b4e) fep_hwr_top_pane_g3

0x0002,

0xfafc,	// (0x0004f077) fep_hwr_top_pane_g

0x25e8,	// (0x00041b63) fep_hwr_top_text_pane

0x44c6,	// (0x00043a41) fep_hwr_top_text_pane_g1

0x7996,	// (0x00046f11) fep_hwr_top_text_pane_t1

0x26de,	// (0x00041c59) fep_hwr_candidate_pane_g1

0x7be9,	// (0x00047164) fep_vkb_keypad_pane_g3_ParamLimits

0x7be9,	// (0x00047164) fep_vkb_keypad_pane_g3

0x7c11,	// (0x0004718c) fep_vkb_keypad_pane_g4_ParamLimits

0x7c11,	// (0x0004718c) fep_vkb_keypad_pane_g4

0x7c80,	// (0x000471fb) fep_vkb_bottom_pane_g2_ParamLimits

0x7c80,	// (0x000471fb) fep_vkb_bottom_pane_g2

0x0001,

0xfb27,	// (0x0004f0a2) fep_vkb_bottom_pane_g_ParamLimits

0xfb27,	// (0x0004f0a2) fep_vkb_bottom_pane_g

0x78f2,	// (0x00046e6d) cell_vkb_side_pane_g2

0x0001,

0xfb31,	// (0x0004f0ac) cell_vkb_side_pane_g

0x7d0b,	// (0x00047286) cell_vkb_side_pane_t1

0x7d19,	// (0x00047294) cell_vkb_side_pane_t1_copy1

0x78f2,	// (0x00046e6d) bg_fep_vkb_candidate_pane_g2

0x7e45,	// (0x000473c0) cell_vkb_candidate_pane_ParamLimits

0x79a4,	// (0x00046f1f) aid_size_cell_vkb_ParamLimits

0x79a4,	// (0x00046f1f) aid_size_cell_vkb

0x7e45,	// (0x000473c0) cell_vkb_candidate_pane

0x26f8,	// (0x00041c73) bg_popup_fep_shadow_pane_g1

0xe125,	// (0x0004d6a0) fep_vkb_bottom_pane_ParamLimits

0xe125,	// (0x0004d6a0) fep_vkb_bottom_pane

0x7a68,	// (0x00046fe3) fep_vkb_candidate_pane_ParamLimits

0x7a68,	// (0x00046fe3) fep_vkb_candidate_pane

0xe14a,	// (0x0004d6c5) fep_vkb_keypad_pane_ParamLimits

0xe14a,	// (0x0004d6c5) fep_vkb_keypad_pane

0xe186,	// (0x0004d701) fep_vkb_side_pane_ParamLimits

0xe186,	// (0x0004d701) fep_vkb_side_pane

0xe1c2,	// (0x0004d73d) fep_vkb_top_pane_ParamLimits

0xe1c2,	// (0x0004d73d) fep_vkb_top_pane

0x7b42,	// (0x000470bd) fep_vkb_top_pane_g1_ParamLimits

0x7b42,	// (0x000470bd) fep_vkb_top_pane_g1

0x7b51,	// (0x000470cc) fep_vkb_top_pane_g2_ParamLimits

0x7b51,	// (0x000470cc) fep_vkb_top_pane_g2

0x7b60,	// (0x000470db) fep_vkb_top_pane_g3_ParamLimits

0x7b60,	// (0x000470db) fep_vkb_top_pane_g3

0x0003,

0xfb17,	// (0x0004f092) fep_vkb_top_pane_g_ParamLimits

0xfb17,	// (0x0004f092) fep_vkb_top_pane_g

0x7b7e,	// (0x000470f9) fep_vkb_top_text_pane_ParamLimits

0x7b7e,	// (0x000470f9) fep_vkb_top_text_pane

0xe1fe,	// (0x0004d779) fep_vkb_side_pane_g1_ParamLimits

0xe1fe,	// (0x0004d779) fep_vkb_side_pane_g1

0x7bd8,	// (0x00047153) grid_vkb_side_pane_ParamLimits

0x7bd8,	// (0x00047153) grid_vkb_side_pane

0x2700,	// (0x00041c7b) bg_popup_fep_shadow_pane_g2

0x2709,	// (0x00041c84) bg_popup_fep_shadow_pane_g3

0x2711,	// (0x00041c8c) bg_popup_fep_shadow_pane_g4

0x271a,	// (0x00041c95) bg_popup_fep_shadow_pane_g5

0x2724,	// (0x00041c9f) bg_popup_fep_shadow_pane_g6

0x272c,	// (0x00041ca7) bg_popup_fep_shadow_pane_g7

0x3ebe,	// (0x00043439) bg_popup_fep_shadow_pane_g8

0x7c2f,	// (0x000471aa) grid_vkb_keypad_number_pane_ParamLimits

0x7c2f,	// (0x000471aa) grid_vkb_keypad_number_pane

0x7c3f,	// (0x000471ba) grid_vkb_keypad_pane_ParamLimits

0x7c3f,	// (0x000471ba) grid_vkb_keypad_pane

0x7c65,	// (0x000471e0) fep_vkb_bottom_pane_g1_ParamLimits

0x7c65,	// (0x000471e0) fep_vkb_bottom_pane_g1

0x7c8e,	// (0x00047209) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7c8e,	// (0x00047209) grid_vkb_keypad_bottom_left_pane

0x7ca3,	// (0x0004721e) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7ca3,	// (0x0004721e) grid_vkb_keypad_bottom_right_pane

0x7cb8,	// (0x00047233) fep_vkb_top_text_pane_g1

0xe245,	// (0x0004d7c0) fep_vkb_top_text_pane_t1

0xe257,	// (0x0004d7d2) cell_vkb_side_pane_ParamLimits

0xe257,	// (0x0004d7d2) cell_vkb_side_pane

0x78f2,	// (0x00046e6d) cell_vkb_side_pane_g1

0x7d27,	// (0x000472a2) cell_vkb_keypad_pane_ParamLimits

0x7d27,	// (0x000472a2) cell_vkb_keypad_pane

0x7d9c,	// (0x00047317) cell_vkb_keypad_pane_g1

0x0008,

0xfb44,	// (0x0004f0bf) bg_popup_fep_shadow_pane_g

0x78f2,	// (0x00046e6d) cell_hwr_side_pane_g1

0x78f2,	// (0x00046e6d) cell_hwr_side_pane_g2

0x7da6,	// (0x00047321) cell_vkb_keypad_pane_t1

0xe26d,	// (0x0004d7e8) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe26d,	// (0x0004d7e8) cell_vkb_keypad_bottom_left_pane

0xe282,	// (0x0004d7fd) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe282,	// (0x0004d7fd) cell_vkb_keypad_bottom_right_pane

0x78f2,	// (0x00046e6d) cell_vkb_keypad_bottom_left_pane_g1

0x78f2,	// (0x00046e6d) cell_vkb_keypad_bottom_right_pane_g1

0x7e0a,	// (0x00047385) cell_vkb_keypad_number_pane_ParamLimits

0x7e0a,	// (0x00047385) cell_vkb_keypad_number_pane

0x7e29,	// (0x000473a4) cell_vkb_keypad_number_pane_g1

0x7e33,	// (0x000473ae) cell_vkb_keypad_number_pane_g2

0x7e3c,	// (0x000473b7) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb36,	// (0x0004f0b1) cell_vkb_keypad_number_pane_g

0x7da6,	// (0x00047321) cell_vkb_keypad_number_pane_t1

0x7e60,	// (0x000473db) fep_vkb_candidate_pane_g1

0x0001,

0xfb31,	// (0x0004f0ac) cell_hwr_side_pane_g

0x7e79,	// (0x000473f4) cell_hwr_side_pane_t1

0x273e,	// (0x00041cb9) cell_hwr_side_pane_t1_copy1

0x7b70,	// (0x000470eb) cell_hwr_candidate_pane_g1

0x274c,	// (0x00041cc7) cell_hwr_candidate_pane_t1

0x78f2,	// (0x00046e6d) cell_vkb_candidate_pane_g2

0x7ebd,	// (0x00047438) cell_vkb_candidate_pane_t1

0x250c,	// (0x00041a87) bg_popup_fep_shadow_pane_ParamLimits

0x250c,	// (0x00041a87) bg_popup_fep_shadow_pane

0xe0eb,	// (0x0004d666) bg_fep_hwr_top_pane_g4

0x7972,	// (0x00046eed) bg_hwr_side_pane_g1_ParamLimits

0x7972,	// (0x00046eed) bg_hwr_side_pane_g1

0xc8c7,	// (0x0004be42) cell_hwr_side_pane_ParamLimits

0xc8c7,	// (0x0004be42) cell_hwr_side_pane

0x265f,	// (0x00041bda) fep_hwr_write_pane_g1_ParamLimits

0x265f,	// (0x00041bda) fep_hwr_write_pane_g1

0x266c,	// (0x00041be7) fep_hwr_write_pane_g2_ParamLimits

0x266c,	// (0x00041be7) fep_hwr_write_pane_g2

0x2679,	// (0x00041bf4) fep_hwr_write_pane_g3_ParamLimits

0x2679,	// (0x00041bf4) fep_hwr_write_pane_g3

0xc8e7,	// (0x0004be62) fep_hwr_write_pane_g4_ParamLimits

0xc8e7,	// (0x0004be62) fep_hwr_write_pane_g4

0x0005,

0xfb03,	// (0x0004f07e) fep_hwr_write_pane_g_ParamLimits

0xfb03,	// (0x0004f07e) fep_hwr_write_pane_g

0xe0eb,	// (0x0004d666) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xe0eb,	// (0x0004d666) bg_fep_hwr_candidate_pane_g2

0x269c,	// (0x00041c17) cell_hwr_candidate_pane_ParamLimits

0x269c,	// (0x00041c17) cell_hwr_candidate_pane

0x26de,	// (0x00041c59) fep_hwr_candidate_pane_g1_ParamLimits

0x79d2,	// (0x00046f4d) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x79d2,	// (0x00046f4d) bg_popup_fep_shadow_pane_cp2

0x7b70,	// (0x000470eb) fep_vkb_top_pane_g4_ParamLimits

0x7b70,	// (0x000470eb) fep_vkb_top_pane_g4

0x7bb6,	// (0x00047131) fep_vkb_side_pane_g2_ParamLimits

0x7bb6,	// (0x00047131) fep_vkb_side_pane_g2

0xb8cd,	// (0x0004ae48) list_setting_pane_t4_ParamLimits

0xb8cd,	// (0x0004ae48) list_setting_pane_t4

0xb967,	// (0x0004aee2) list_setting_number_pane_t5_ParamLimits

0xb967,	// (0x0004aee2) list_setting_number_pane_t5

0x44fd,	// (0x00043a78) list_double_heading_pane_cp2_ParamLimits

0x44fd,	// (0x00043a78) list_double_heading_pane_cp2

0x3dea,	// (0x00043365) list_double_heading_pane_g1_cp2_ParamLimits

0x3dea,	// (0x00043365) list_double_heading_pane_g1_cp2

0x3e5d,	// (0x000433d8) list_double_heading_pane_g2_cp2_ParamLimits

0x3e5d,	// (0x000433d8) list_double_heading_pane_g2_cp2

0x7ecb,	// (0x00047446) list_double_heading_pane_t1_cp2_ParamLimits

0x7ecb,	// (0x00047446) list_double_heading_pane_t1_cp2

0x7ee1,	// (0x0004745c) list_double_heading_pane_t2_cp2_ParamLimits

0x7ee1,	// (0x0004745c) list_double_heading_pane_t2_cp2

0x34c8,	// (0x00042a43) aid_value_unit2

0x118c,	// (0x00040707) popup_preview_fixed_window

0x385d,	// (0x00042dd8) bg_popup_preview_window_pane_cp02

0x7ef3,	// (0x0004746e) list_preview_fixed_pane

0x7f39,	// (0x000474b4) list_empty_pane_fp_ParamLimits

0x7f39,	// (0x000474b4) list_empty_pane_fp

0x7f39,	// (0x000474b4) list_single_cale_day_pane_fp_ParamLimits

0x7f39,	// (0x000474b4) list_single_cale_day_pane_fp

0x7f39,	// (0x000474b4) list_single_graphic_heading_pane_fp_ParamLimits

0x7f39,	// (0x000474b4) list_single_graphic_heading_pane_fp

0x7f39,	// (0x000474b4) list_single_graphic_pane_fp_ParamLimits

0x7f39,	// (0x000474b4) list_single_graphic_pane_fp

0x7f39,	// (0x000474b4) list_single_heading_pane_fp_ParamLimits

0x7f39,	// (0x000474b4) list_single_heading_pane_fp

0x7f39,	// (0x000474b4) list_single_pane_fp_ParamLimits

0x7f39,	// (0x000474b4) list_single_pane_fp

0x7f4e,	// (0x000474c9) list_single_pane_fp_g1_ParamLimits

0x7f4e,	// (0x000474c9) list_single_pane_fp_g1

0x3dea,	// (0x00043365) list_single_pane_fp_g2_ParamLimits

0x3dea,	// (0x00043365) list_single_pane_fp_g2

0x3e5d,	// (0x000433d8) list_single_pane_fp_g3_ParamLimits

0x3e5d,	// (0x000433d8) list_single_pane_fp_g3

0x7f5a,	// (0x000474d5) list_single_pane_fp_g4_ParamLimits

0x7f5a,	// (0x000474d5) list_single_pane_fp_g4

0x0003,

0xfb65,	// (0x0004f0e0) list_single_pane_fp_g_ParamLimits

0xfb65,	// (0x0004f0e0) list_single_pane_fp_g

0x0c39,	// (0x000401b4) list_single_pane_fp_t1_ParamLimits

0x0c39,	// (0x000401b4) list_single_pane_fp_t1

0x0c50,	// (0x000401cb) list_single_graphic_pane_fp_g1_ParamLimits

0x0c50,	// (0x000401cb) list_single_graphic_pane_fp_g1

0x7f4e,	// (0x000474c9) list_single_graphic_pane_fp_g2_ParamLimits

0x7f4e,	// (0x000474c9) list_single_graphic_pane_fp_g2

0x3dea,	// (0x00043365) list_single_graphic_pane_fp_g3_ParamLimits

0x3dea,	// (0x00043365) list_single_graphic_pane_fp_g3

0x3e5d,	// (0x000433d8) list_single_graphic_pane_fp_g4_ParamLimits

0x3e5d,	// (0x000433d8) list_single_graphic_pane_fp_g4

0x7f5a,	// (0x000474d5) list_single_graphic_pane_fp_g5_ParamLimits

0x7f5a,	// (0x000474d5) list_single_graphic_pane_fp_g5

0x0004,

0xfb6e,	// (0x0004f0e9) list_single_graphic_pane_fp_g_ParamLimits

0xfb6e,	// (0x0004f0e9) list_single_graphic_pane_fp_g

0x0c5c,	// (0x000401d7) list_single_graphic_pane_fp_t1_ParamLimits

0x0c5c,	// (0x000401d7) list_single_graphic_pane_fp_t1

0x0c50,	// (0x000401cb) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0c50,	// (0x000401cb) list_single_graphic_heading_pane_fp_g1

0x7f4e,	// (0x000474c9) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7f4e,	// (0x000474c9) list_single_graphic_heading_pane_fp_g2

0x3dea,	// (0x00043365) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3dea,	// (0x00043365) list_single_graphic_heading_pane_fp_g3

0x3e5d,	// (0x000433d8) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3e5d,	// (0x000433d8) list_single_graphic_heading_pane_fp_g4

0x7f5a,	// (0x000474d5) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7f5a,	// (0x000474d5) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0004f0e9) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0004f0e9) list_single_graphic_heading_pane_fp_g

0x0c72,	// (0x000401ed) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0c72,	// (0x000401ed) list_single_graphic_heading_pane_fp_t1

0x0c88,	// (0x00040203) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0c88,	// (0x00040203) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb79,	// (0x0004f0f4) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb79,	// (0x0004f0f4) list_single_graphic_heading_pane_fp_t

0x0c9a,	// (0x00040215) list_single_cale_day_pane_fp_g1_ParamLimits

0x0c9a,	// (0x00040215) list_single_cale_day_pane_fp_g1

0x7f66,	// (0x000474e1) list_single_cale_day_pane_fp_g2_ParamLimits

0x7f66,	// (0x000474e1) list_single_cale_day_pane_fp_g2

0x276a,	// (0x00041ce5) list_single_cale_day_pane_fp_g3_ParamLimits

0x276a,	// (0x00041ce5) list_single_cale_day_pane_fp_g3

0x2792,	// (0x00041d0d) list_single_cale_day_pane_fp_g4_ParamLimits

0x2792,	// (0x00041d0d) list_single_cale_day_pane_fp_g4

0x27b6,	// (0x00041d31) list_single_cale_day_pane_fp_g5_ParamLimits

0x27b6,	// (0x00041d31) list_single_cale_day_pane_fp_g5

0x0004,

0xfb7e,	// (0x0004f0f9) list_single_cale_day_pane_fp_g_ParamLimits

0xfb7e,	// (0x0004f0f9) list_single_cale_day_pane_fp_g

0x0cd2,	// (0x0004024d) list_single_cale_day_pane_fp_t1_ParamLimits

0x0cd2,	// (0x0004024d) list_single_cale_day_pane_fp_t1

0x0cf8,	// (0x00040273) list_single_cale_day_pane_fp_t2_ParamLimits

0x0cf8,	// (0x00040273) list_single_cale_day_pane_fp_t2

0x0d11,	// (0x0004028c) list_single_cale_day_pane_fp_t3_ParamLimits

0x0d11,	// (0x0004028c) list_single_cale_day_pane_fp_t3

0x0002,

0xfb89,	// (0x0004f104) list_single_cale_day_pane_fp_t_ParamLimits

0xfb89,	// (0x0004f104) list_single_cale_day_pane_fp_t

0x7f4e,	// (0x000474c9) list_empty_pane_fp_g1_ParamLimits

0x7f4e,	// (0x000474c9) list_empty_pane_fp_g1

0x0d2a,	// (0x000402a5) list_empty_pane_fp_t1

0x0d38,	// (0x000402b3) list_empty_pane_fp_t2

0x0001,

0xfb90,	// (0x0004f10b) list_empty_pane_fp_t

0x7f4e,	// (0x000474c9) list_single_heading_pane_fp_g1_ParamLimits

0x7f4e,	// (0x000474c9) list_single_heading_pane_fp_g1

0x3dea,	// (0x00043365) list_single_heading_pane_fp_g2_ParamLimits

0x3dea,	// (0x00043365) list_single_heading_pane_fp_g2

0x3e5d,	// (0x000433d8) list_single_heading_pane_fp_g3_ParamLimits

0x3e5d,	// (0x000433d8) list_single_heading_pane_fp_g3

0x0002,

0xfb95,	// (0x0004f110) list_single_heading_pane_fp_g_ParamLimits

0xfb95,	// (0x0004f110) list_single_heading_pane_fp_g

0x0d46,	// (0x000402c1) list_single_heading_pane_fp_t1_ParamLimits

0x0d46,	// (0x000402c1) list_single_heading_pane_fp_t1

0x0d58,	// (0x000402d3) list_single_heading_pane_fp_t2_ParamLimits

0x0d58,	// (0x000402d3) list_single_heading_pane_fp_t2

0x0001,

0xfb9c,	// (0x0004f117) list_single_heading_pane_fp_t_ParamLimits

0xfb9c,	// (0x0004f117) list_single_heading_pane_fp_t

0x4045,	// (0x000435c0) aid_size_cell_fast

0x37cd,	// (0x00042d48) soft_indicator_pane_cp1_t1

0x4082,	// (0x000435fd) cell_app_pane_cp2_ParamLimits

0x4082,	// (0x000435fd) cell_app_pane_cp2

0x252e,	// (0x00041aa9) fep_hwr_candidate_drop_down_list_pane

0xe0f9,	// (0x0004d674) fep_hwr_candidate_pane_g3_ParamLimits

0xe0f9,	// (0x0004d674) fep_hwr_candidate_pane_g3

0xe106,	// (0x0004d681) fep_hwr_candidate_pane_g4_ParamLimits

0xe106,	// (0x0004d681) fep_hwr_candidate_pane_g4

0x0002,

0xfb10,	// (0x0004f08b) fep_hwr_candidate_pane_g_ParamLimits

0xfb10,	// (0x0004f08b) fep_hwr_candidate_pane_g

0x7a57,	// (0x00046fd2) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7a57,	// (0x00046fd2) fep_vkb_candidate_drop_down_list_pane

0x7e68,	// (0x000473e3) fep_vkb_candidate_pane_g3

0x7e70,	// (0x000473eb) fep_vkb_candidate_pane_g4

0x0002,

0xfb3d,	// (0x0004f0b8) fep_vkb_candidate_pane_g

0x7b70,	// (0x000470eb) cell_hwr_candidate_pane_g1_ParamLimits

0x7fce,	// (0x00047549) cell_hwr_candidate_pane_g3_ParamLimits

0x7fce,	// (0x00047549) cell_hwr_candidate_pane_g3

0x7fef,	// (0x0004756a) cell_hwr_candidate_pane_g4_ParamLimits

0x7fef,	// (0x0004756a) cell_hwr_candidate_pane_g4

0x0002,

0xfb57,	// (0x0004f0d2) cell_hwr_candidate_pane_g_ParamLimits

0xfb57,	// (0x0004f0d2) cell_hwr_candidate_pane_g

0x7e87,	// (0x00047402) cell_vkb_candidate_pane_g3_ParamLimits

0x7e87,	// (0x00047402) cell_vkb_candidate_pane_g3

0x7ea2,	// (0x0004741d) cell_vkb_candidate_pane_g4_ParamLimits

0x7ea2,	// (0x0004741d) cell_vkb_candidate_pane_g4

0x7f72,	// (0x000474ed) cell_app_pane_cp2_g1_ParamLimits

0x7f72,	// (0x000474ed) cell_app_pane_cp2_g1

0x7f90,	// (0x0004750b) cell_app_pane_cp2_g2_ParamLimits

0x7f90,	// (0x0004750b) cell_app_pane_cp2_g2

0x0001,

0xfba1,	// (0x0004f11c) cell_app_pane_cp2_g_ParamLimits

0xfba1,	// (0x0004f11c) cell_app_pane_cp2_g

0x7f9c,	// (0x00047517) cell_app_pane_cp2_t1_ParamLimits

0x7f9c,	// (0x00047517) cell_app_pane_cp2_t1

0x3e4f,	// (0x000433ca) grid_highlight_pane_cp1_ParamLimits

0x3e4f,	// (0x000433ca) grid_highlight_pane_cp1

0x27da,	// (0x00041d55) cell_hwr_candidate_pane_cp1_ParamLimits

0x27da,	// (0x00041d55) cell_hwr_candidate_pane_cp1

0x7b70,	// (0x000470eb) fep_hwr_candidate_drop_down_list_pane_g1

0x8010,	// (0x0004758b) fep_hwr_candidate_drop_down_list_pane_g2

0x801d,	// (0x00047598) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x0004f121) fep_hwr_candidate_drop_down_list_pane_g

0x27f9,	// (0x00041d74) fep_hwr_candidate_drop_down_list_scroll_pane

0x2802,	// (0x00041d7d) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2802,	// (0x00041d7d) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x280f,	// (0x00041d8a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x280f,	// (0x00041d8a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x281c,	// (0x00041d97) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x281c,	// (0x00041d97) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7e87,	// (0x00047402) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7e87,	// (0x00047402) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7ea2,	// (0x0004741d) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7ea2,	// (0x0004741d) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2829,	// (0x00041da4) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2829,	// (0x00041da4) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2844,	// (0x00041dbf) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2844,	// (0x00041dbf) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x285f,	// (0x00041dda) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x285f,	// (0x00041dda) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbad,	// (0x0004f128) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbad,	// (0x0004f128) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7fae,	// (0x00047529) cell_vkb_candidate_pane_cp1_ParamLimits

0x7fae,	// (0x00047529) cell_vkb_candidate_pane_cp1

0x7b70,	// (0x000470eb) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7b70,	// (0x000470eb) fep_vkb_candidate_drop_down_list_pane_g1

0x8010,	// (0x0004758b) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x8010,	// (0x0004758b) fep_vkb_candidate_drop_down_list_pane_g2

0x801d,	// (0x00047598) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x801d,	// (0x00047598) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x0004f121) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba6,	// (0x0004f121) fep_vkb_candidate_drop_down_list_pane_g

0x802a,	// (0x000475a5) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x802a,	// (0x000475a5) fep_vkb_candidate_drop_down_list_scroll_pane

0x8037,	// (0x000475b2) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8037,	// (0x000475b2) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x8044,	// (0x000475bf) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8044,	// (0x000475bf) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x8050,	// (0x000475cb) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8050,	// (0x000475cb) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7fce,	// (0x00047549) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7fce,	// (0x00047549) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7fef,	// (0x0004756a) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7fef,	// (0x0004756a) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x805c,	// (0x000475d7) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x805c,	// (0x000475d7) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x807d,	// (0x000475f8) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x807d,	// (0x000475f8) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x809e,	// (0x00047619) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x809e,	// (0x00047619) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbe,	// (0x0004f139) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbe,	// (0x0004f139) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xcf3b,	// (0x0004c4b6) title_pane_g1_ParamLimits

0xcf4e,	// (0x0004c4c9) title_pane_g2_ParamLimits

0xf54e,	// (0x0004eac9) title_pane_g_ParamLimits

0x44b6,	// (0x00043a31) aid_call2_pane

0x44be,	// (0x00043a39) aid_call_pane

0x44c6,	// (0x00043a41) popup_clock_analogue_window_g1

0x44c6,	// (0x00043a41) popup_clock_analogue_window_g2

0x15a9,	// (0x00040b24) popup_clock_analogue_window_g3

0x15b2,	// (0x00040b2d) popup_clock_analogue_window_g4

0x34ea,	// (0x00042a65) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x0004ec78) popup_clock_analogue_window_g

0x15ba,	// (0x00040b35) popup_clock_analogue_window_t1

0x15c8,	// (0x00040b43) clock_digital_number_pane_ParamLimits

0x15c8,	// (0x00040b43) clock_digital_number_pane

0x15d4,	// (0x00040b4f) clock_digital_number_pane_cp02_ParamLimits

0x15d4,	// (0x00040b4f) clock_digital_number_pane_cp02

0x15e0,	// (0x00040b5b) clock_digital_number_pane_cp03_ParamLimits

0x15e0,	// (0x00040b5b) clock_digital_number_pane_cp03

0x15ec,	// (0x00040b67) clock_digital_number_pane_cp04_ParamLimits

0x15ec,	// (0x00040b67) clock_digital_number_pane_cp04

0x15f8,	// (0x00040b73) clock_digital_separator_pane_ParamLimits

0x15f8,	// (0x00040b73) clock_digital_separator_pane

0x1604,	// (0x00040b7f) popup_clock_digital_window_t1_ParamLimits

0x1604,	// (0x00040b7f) popup_clock_digital_window_t1

0x34ea,	// (0x00042a65) clock_digital_number_pane_g1

0x34ea,	// (0x00042a65) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0004ec83) clock_digital_number_pane_g

0x34ea,	// (0x00042a65) clock_digital_separator_pane_g1

0x34ea,	// (0x00042a65) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0004ec83) clock_digital_separator_pane_g

0xd606,	// (0x0004cb81) aid_fill_nsta_ParamLimits

0xd73c,	// (0x0004ccb7) indicator_nsta_pane_ParamLimits

0x50f8,	// (0x00044673) popup_clock_analogue_window

0x50f8,	// (0x00044673) popup_clock_digital_window

0x4006,	// (0x00043581) grid_indicator_nsta_pane_ParamLimits

0x72e3,	// (0x0004685e) clock_nsta_pane_t2

0x0001,

0xfa90,	// (0x0004f00b) clock_nsta_pane_t

0x156d,	// (0x00040ae8) aid_size_max_handle

0xbfc3,	// (0x0004b53e) aid_size_min_handle

0x4ad9,	// (0x00044054) editor_scroll_pane

0x80b9,	// (0x00047634) ex_editor_pane

0x3fb3,	// (0x0004352e) scroll_pane_cp13

0x3de2,	// (0x0004335d) scroll_pane_cp14

0x44f5,	// (0x00043a70) scroll_pane_cp36

0xd3c5,	// (0x0004c940) list_single_graphic_hl_pane_cp2_ParamLimits

0xd3c5,	// (0x0004c940) list_single_graphic_hl_pane_cp2

0xc88d,	// (0x0004be08) list_single_graphic_hl_pane_ParamLimits

0xc88d,	// (0x0004be08) list_single_graphic_hl_pane

0x0d6e,	// (0x000402e9) aid_size_min_hl_cp1

0x80c1,	// (0x0004763c) list_highlight_pane_cp34_ParamLimits

0x80c1,	// (0x0004763c) list_highlight_pane_cp34

0x80d2,	// (0x0004764d) list_single_graphic_hl_pane_g1_ParamLimits

0x80d2,	// (0x0004764d) list_single_graphic_hl_pane_g1

0xbc1d,	// (0x0004b198) list_single_graphic_hl_pane_g2_ParamLimits

0xbc1d,	// (0x0004b198) list_single_graphic_hl_pane_g2

0xbc1d,	// (0x0004b198) list_single_graphic_hl_pane_g3_ParamLimits

0xbc1d,	// (0x0004b198) list_single_graphic_hl_pane_g3

0x4a4a,	// (0x00043fc5) list_single_graphic_hl_pane_g4_ParamLimits

0x4a4a,	// (0x00043fc5) list_single_graphic_hl_pane_g4

0x287a,	// (0x00041df5) list_single_graphic_hl_pane_g5_ParamLimits

0x287a,	// (0x00041df5) list_single_graphic_hl_pane_g5

0x0004,

0xfbcf,	// (0x0004f14a) list_single_graphic_hl_pane_g_ParamLimits

0xfbcf,	// (0x0004f14a) list_single_graphic_hl_pane_g

0xbc29,	// (0x0004b1a4) list_single_graphic_hl_pane_t1_ParamLimits

0xbc29,	// (0x0004b1a4) list_single_graphic_hl_pane_t1

0x80df,	// (0x0004765a) aid_size_min_hl_cp2

0x80e8,	// (0x00047663) list_highlight_pane_cp34_cp2_ParamLimits

0x80e8,	// (0x00047663) list_highlight_pane_cp34_cp2

0x80d2,	// (0x0004764d) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x80d2,	// (0x0004764d) list_single_graphic_hl_pane_g1_cp2

0x80f5,	// (0x00047670) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x80f5,	// (0x00047670) list_single_graphic_hl_pane_g2_cp2

0x8101,	// (0x0004767c) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x8101,	// (0x0004767c) list_single_graphic_hl_pane_g3_cp2

0x7528,	// (0x00046aa3) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7528,	// (0x00046aa3) list_single_graphic_hl_pane_g4_cp2

0x810f,	// (0x0004768a) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x810f,	// (0x0004768a) list_single_graphic_hl_pane_g5_cp2

0xc030,	// (0x0004b5ab) control_pane_g4_ParamLimits

0xc030,	// (0x0004b5ab) control_pane_g4

0x4e17,	// (0x00044392) bg_popup_sub_pane_cp10_ParamLimits

0x78fc,	// (0x00046e77) list_choice_list_pane_ParamLimits

0x790b,	// (0x00046e86) scroll_pane_cp23

0x385d,	// (0x00042dd8) bg_popup_preview_window_pane_cp02_ParamLimits

0x7ef3,	// (0x0004746e) list_preview_fixed_pane_ParamLimits

0x7f09,	// (0x00047484) list_preview_fixed_pane_cp_ParamLimits

0x7f09,	// (0x00047484) list_preview_fixed_pane_cp

0x7f15,	// (0x00047490) popup_preview_fixed_window_g1_ParamLimits

0x7f15,	// (0x00047490) popup_preview_fixed_window_g1

0x7f21,	// (0x0004749c) popup_preview_fixed_window_g2_ParamLimits

0x7f21,	// (0x0004749c) popup_preview_fixed_window_g2

0x0002,

0xfb5e,	// (0x0004f0d9) popup_preview_fixed_window_g_ParamLimits

0xfb5e,	// (0x0004f0d9) popup_preview_fixed_window_g

0x14e1,	// (0x00040a5c) aid_navi_side_left_pane_ParamLimits

0x14f6,	// (0x00040a71) aid_navi_side_right_pane_ParamLimits

0x150e,	// (0x00040a89) navi_icon_pane_stacon_ParamLimits

0x1522,	// (0x00040a9d) navi_navi_pane_stacon_ParamLimits

0x150e,	// (0x00040a89) navi_text_pane_stacon_ParamLimits

0x34e0,	// (0x00042a5b) main_text_info_pane

0x8139,	// (0x000476b4) listscroll_text_info_pane

0x8141,	// (0x000476bc) list_text_info_pane_ParamLimits

0x8141,	// (0x000476bc) list_text_info_pane

0x8150,	// (0x000476cb) scroll_pane_cp24_ParamLimits

0x8150,	// (0x000476cb) scroll_pane_cp24

0xe29d,	// (0x0004d818) list_text_info_pane_t1_ParamLimits

0xe29d,	// (0x0004d818) list_text_info_pane_t1

0xc18b,	// (0x0004b706) popup_fast_swap2_window_ParamLimits

0xc18b,	// (0x0004b706) popup_fast_swap2_window

0x819f,	// (0x0004771a) aid_size_cell_fast2

0x34e0,	// (0x00042a5b) bg_popup_window_pane_cp17

0x577f,	// (0x00044cfa) heading_pane_cp2

0x3aac,	// (0x00043027) listscroll_fast2_pane

0x81a9,	// (0x00047724) grid_fast2_pane

0x81b3,	// (0x0004772e) listscroll_fast2_pane_g1

0x81bb,	// (0x00047736) listscroll_fast2_pane_g2

0x0001,

0xfbda,	// (0x0004f155) listscroll_fast2_pane_g

0x3fb3,	// (0x0004352e) scroll_pane_cp26

0x81c5,	// (0x00047740) cell_fast2_pane_ParamLimits

0x81c5,	// (0x00047740) cell_fast2_pane

0x81da,	// (0x00047755) cell_fast2_pane_g1

0x81e3,	// (0x0004775e) cell_fast2_pane_g2

0x81ec,	// (0x00047767) cell_fast2_pane_g3

0x0002,

0xfbdf,	// (0x0004f15a) cell_fast2_pane_g

0x3b9f,	// (0x0004311a) grid_highlight_pane_cp9

0x3bb4,	// (0x0004312f) main_eswt_pane_ParamLimits

0x3bb4,	// (0x0004312f) main_eswt_pane

0x8165,	// (0x000476e0) list_single_text_info_pane

0x81f4,	// (0x0004776f) eswt_ctrl_button_pane

0x81f4,	// (0x0004776f) eswt_ctrl_canvas_pane

0x81fc,	// (0x00047777) eswt_ctrl_combo_pane

0x81f4,	// (0x0004776f) eswt_ctrl_default_pane

0x81f4,	// (0x0004776f) eswt_ctrl_label_pane

0x8204,	// (0x0004777f) eswt_ctrl_wait_pane

0x820c,	// (0x00047787) eswt_shell_pane

0x34e0,	// (0x00042a5b) listscroll_eswt_app_pane

0x822c,	// (0x000477a7) popup_eswt_tasktip_window_ParamLimits

0x822c,	// (0x000477a7) popup_eswt_tasktip_window

0x5395,	// (0x00044910) bg_popup_window_pane_cp18

0x823d,	// (0x000477b8) eswt_control_pane_g1_ParamLimits

0x823d,	// (0x000477b8) eswt_control_pane_g1

0x824a,	// (0x000477c5) eswt_control_pane_g2_ParamLimits

0x824a,	// (0x000477c5) eswt_control_pane_g2

0x8257,	// (0x000477d2) eswt_control_pane_g3_ParamLimits

0x8257,	// (0x000477d2) eswt_control_pane_g3

0x8264,	// (0x000477df) eswt_control_pane_g4_ParamLimits

0x8264,	// (0x000477df) eswt_control_pane_g4

0x0003,

0xfbe6,	// (0x0004f161) eswt_control_pane_g_ParamLimits

0xfbe6,	// (0x0004f161) eswt_control_pane_g

0x3e4f,	// (0x000433ca) bg_button_pane_ParamLimits

0x3e4f,	// (0x000433ca) bg_button_pane

0x3bb4,	// (0x0004312f) common_borders_pane_copy2_ParamLimits

0x3bb4,	// (0x0004312f) common_borders_pane_copy2

0x8271,	// (0x000477ec) control_button_pane_g1_ParamLimits

0x8271,	// (0x000477ec) control_button_pane_g1

0x827d,	// (0x000477f8) control_button_pane_g2_ParamLimits

0x827d,	// (0x000477f8) control_button_pane_g2

0x8289,	// (0x00047804) control_button_pane_g3_ParamLimits

0x8289,	// (0x00047804) control_button_pane_g3

0x0002,

0xfbef,	// (0x0004f16a) control_button_pane_g_ParamLimits

0xfbef,	// (0x0004f16a) control_button_pane_g

0x829d,	// (0x00047818) control_button_pane_t1

0x82ab,	// (0x00047826) control_button_pane_t2

0x0001,

0xfbf6,	// (0x0004f171) control_button_pane_t

0x5321,	// (0x0004489c) bg_button_pane_g1

0x5329,	// (0x000448a4) bg_button_pane_g2

0x5331,	// (0x000448ac) bg_button_pane_g3

0x5339,	// (0x000448b4) bg_button_pane_g4

0x5341,	// (0x000448bc) bg_button_pane_g5

0x5349,	// (0x000448c4) bg_button_pane_g6

0x5351,	// (0x000448cc) bg_button_pane_g7

0x5359,	// (0x000448d4) bg_button_pane_g8

0x5361,	// (0x000448dc) bg_button_pane_g9

0x0008,

0xf866,	// (0x0004ede1) bg_button_pane_g

0x78b7,	// (0x00046e32) common_borders_pane_ParamLimits

0x78b7,	// (0x00046e32) common_borders_pane

0x823d,	// (0x000477b8) eswt_control_pane_g1_copy1_ParamLimits

0x823d,	// (0x000477b8) eswt_control_pane_g1_copy1

0x824a,	// (0x000477c5) eswt_control_pane_g2_copy1_ParamLimits

0x824a,	// (0x000477c5) eswt_control_pane_g2_copy1

0x8257,	// (0x000477d2) eswt_control_pane_g3_copy1_ParamLimits

0x8257,	// (0x000477d2) eswt_control_pane_g3_copy1

0x8264,	// (0x000477df) eswt_control_pane_g4_copy1_ParamLimits

0x8264,	// (0x000477df) eswt_control_pane_g4_copy1

0x78f2,	// (0x00046e6d) bg_eswt_ctrl_canvas_pane_g1

0x78b7,	// (0x00046e32) common_borders_pane_cp2_ParamLimits

0x78b7,	// (0x00046e32) common_borders_pane_cp2

0x78b7,	// (0x00046e32) common_borders_pane_cp3_ParamLimits

0x78b7,	// (0x00046e32) common_borders_pane_cp3

0x82b9,	// (0x00047834) separator_horizontal_pane

0x82c1,	// (0x0004783c) separator_vertical_pane

0x823d,	// (0x000477b8) eswt_control_pane_g1_copy2_ParamLimits

0x823d,	// (0x000477b8) eswt_control_pane_g1_copy2

0x824a,	// (0x000477c5) eswt_control_pane_g2_copy2_ParamLimits

0x824a,	// (0x000477c5) eswt_control_pane_g2_copy2

0x8257,	// (0x000477d2) eswt_control_pane_g3_copy2_ParamLimits

0x8257,	// (0x000477d2) eswt_control_pane_g3_copy2

0x8264,	// (0x000477df) eswt_control_pane_g4_copy2_ParamLimits

0x8264,	// (0x000477df) eswt_control_pane_g4_copy2

0x34e0,	// (0x00042a5b) common_borders_pane_cp4

0x82ca,	// (0x00047845) separator_horizontal_pane_g1

0x82d3,	// (0x0004784e) separator_horizontal_pane_g2

0x82dc,	// (0x00047857) separator_horizontal_pane_g3

0x0002,

0xfbfb,	// (0x0004f176) separator_horizontal_pane_g

0x823d,	// (0x000477b8) eswt_control_pane_g1_copy3_ParamLimits

0x823d,	// (0x000477b8) eswt_control_pane_g1_copy3

0x824a,	// (0x000477c5) eswt_control_pane_g2_copy3_ParamLimits

0x824a,	// (0x000477c5) eswt_control_pane_g2_copy3

0x8257,	// (0x000477d2) eswt_control_pane_g3_copy3_ParamLimits

0x8257,	// (0x000477d2) eswt_control_pane_g3_copy3

0x8264,	// (0x000477df) eswt_control_pane_g4_copy3_ParamLimits

0x8264,	// (0x000477df) eswt_control_pane_g4_copy3

0x34e0,	// (0x00042a5b) common_borders_pane_cp5

0x82e5,	// (0x00047860) separator_vertical_pane_g1

0x82ee,	// (0x00047869) separator_vertical_pane_g2

0x82f7,	// (0x00047872) separator_vertical_pane_g3

0x0002,

0xfc02,	// (0x0004f17d) separator_vertical_pane_g

0x823d,	// (0x000477b8) eswt_control_pane_g1_copy4_ParamLimits

0x823d,	// (0x000477b8) eswt_control_pane_g1_copy4

0x824a,	// (0x000477c5) eswt_control_pane_g2_copy4_ParamLimits

0x824a,	// (0x000477c5) eswt_control_pane_g2_copy4

0x8257,	// (0x000477d2) eswt_control_pane_g3_copy4_ParamLimits

0x8257,	// (0x000477d2) eswt_control_pane_g3_copy4

0x8264,	// (0x000477df) eswt_control_pane_g4_copy4_ParamLimits

0x8264,	// (0x000477df) eswt_control_pane_g4_copy4

0xe2b8,	// (0x0004d833) eswt_ctrl_combo_button_pane

0xe2c0,	// (0x0004d83b) eswt_ctrl_input_pane

0xe2c8,	// (0x0004d843) popup_choice_list_window_cp70

0xe2d0,	// (0x0004d84b) eswt_ctrl_input_pane_t1

0x34e0,	// (0x00042a5b) input_focus_pane_cp70

0x78b7,	// (0x00046e32) bg_button_pane_cp70_ParamLimits

0x78b7,	// (0x00046e32) bg_button_pane_cp70

0xe2de,	// (0x0004d859) eswt_ctrl_combo_button_pane_g1

0x832e,	// (0x000478a9) wait_bar_pane_cp70

0x5395,	// (0x00044910) bg_popup_window_pane_cp70_ParamLimits

0x5395,	// (0x00044910) bg_popup_window_pane_cp70

0x8336,	// (0x000478b1) popup_eswt_tasktip_window_t1

0x834c,	// (0x000478c7) wait_bar_pane_cp71_ParamLimits

0x834c,	// (0x000478c7) wait_bar_pane_cp71

0x8358,	// (0x000478d3) grid_eswt_app_pane

0x42d8,	// (0x00043853) scroll_pane_cp70

0xe2e6,	// (0x0004d861) cell_eswt_app_pane_ParamLimits

0xe2e6,	// (0x0004d861) cell_eswt_app_pane

0xe310,	// (0x0004d88b) cell_eswt_app_pane_g1_ParamLimits

0xe310,	// (0x0004d88b) cell_eswt_app_pane_g1

0xe33f,	// (0x0004d8ba) cell_eswt_app_pane_g2_ParamLimits

0xe33f,	// (0x0004d8ba) cell_eswt_app_pane_g2

0x0001,

0xfc09,	// (0x0004f184) cell_eswt_app_pane_g_ParamLimits

0xfc09,	// (0x0004f184) cell_eswt_app_pane_g

0xe368,	// (0x0004d8e3) cell_eswt_app_pane_t1_ParamLimits

0xe368,	// (0x0004d8e3) cell_eswt_app_pane_t1

0x841b,	// (0x00047996) grid_highlight_pane_cp70_ParamLimits

0x841b,	// (0x00047996) grid_highlight_pane_cp70

0x49ae,	// (0x00043f29) set_content_pane_g1

0xd5bb,	// (0x0004cb36) status_small_volume_pane

0x288e,	// (0x00041e09) status_small_volume_pane_g1

0x2896,	// (0x00041e11) volume_small2_pane

0x289f,	// (0x00041e1a) volume_small2_pane_g1

0x28a8,	// (0x00041e23) volume_small2_pane_g2

0x28b1,	// (0x00041e2c) volume_small2_pane_g3

0x28ba,	// (0x00041e35) volume_small2_pane_g4

0x28c3,	// (0x00041e3e) volume_small2_pane_g5

0x28cc,	// (0x00041e47) volume_small2_pane_g6

0x28d5,	// (0x00041e50) volume_small2_pane_g7

0x28de,	// (0x00041e59) volume_small2_pane_g8

0x28e7,	// (0x00041e62) volume_small2_pane_g9

0x28f0,	// (0x00041e6b) volume_small2_pane_g10

0x0009,

0xfc0e,	// (0x0004f189) volume_small2_pane_g

0x7cb8,	// (0x00047233) fep_vkb_top_text_pane_g1_ParamLimits

0xe245,	// (0x0004d7c0) fep_vkb_top_text_pane_t1_ParamLimits

0x7f2d,	// (0x000474a8) popup_preview_fixed_window_g3_ParamLimits

0x7f2d,	// (0x000474a8) popup_preview_fixed_window_g3

0xc7ae,	// (0x0004bd29) popup_toolbar_trans_pane

0xdc48,	// (0x0004d1c3) aid_height_set_list_ParamLimits

0x6701,	// (0x00045c7c) aid_size_parent_ParamLimits

0x4e17,	// (0x00044392) list_highlight_pane_cp2_ParamLimits

0x49ae,	// (0x00043f29) set_content_pane_g1_ParamLimits

0xc89e,	// (0x0004be19) list_single_image_pane_ParamLimits

0xc89e,	// (0x0004be19) list_single_image_pane

0xe39a,	// (0x0004d915) aid_size_cell_image_ParamLimits

0xe39a,	// (0x0004d915) aid_size_cell_image

0xe3a7,	// (0x0004d922) grid_single_image_pane_ParamLimits

0xe3a7,	// (0x0004d922) grid_single_image_pane

0x6022,	// (0x0004559d) list_single_image_pane_g1_ParamLimits

0x6022,	// (0x0004559d) list_single_image_pane_g1

0x8440,	// (0x000479bb) list_single_image_pane_g2_ParamLimits

0x8440,	// (0x000479bb) list_single_image_pane_g2

0x0001,

0xfc23,	// (0x0004f19e) list_single_image_pane_g_ParamLimits

0xfc23,	// (0x0004f19e) list_single_image_pane_g

0x8454,	// (0x000479cf) list_single_image_pane_t1_ParamLimits

0x8454,	// (0x000479cf) list_single_image_pane_t1

0xe3b5,	// (0x0004d930) cell_image_list_pane_ParamLimits

0xe3b5,	// (0x0004d930) cell_image_list_pane

0xe3cb,	// (0x0004d946) cell_image_list_pane_g1

0xe3d4,	// (0x0004d94f) cell_image_list_pane_g2

0x0001,

0xfc28,	// (0x0004f1a3) cell_image_list_pane_g

0x8490,	// (0x00047a0b) aid_size_cell_tb_trans_pane

0x3e4f,	// (0x000433ca) bg_tb_trans_pane

0x84a2,	// (0x00047a1d) grid_tb_trans_pane

0x5321,	// (0x0004489c) bg_tb_trans_pane_g1

0x5329,	// (0x000448a4) bg_tb_trans_pane_g2

0x5331,	// (0x000448ac) bg_tb_trans_pane_g3

0x5339,	// (0x000448b4) bg_tb_trans_pane_g4

0x5341,	// (0x000448bc) bg_tb_trans_pane_g5

0x5359,	// (0x000448d4) bg_tb_trans_pane_g6

0x5361,	// (0x000448dc) bg_tb_trans_pane_g7

0x5349,	// (0x000448c4) bg_tb_trans_pane_g8

0x5351,	// (0x000448cc) bg_tb_trans_pane_g9

0x0008,

0xfc2d,	// (0x0004f1a8) bg_tb_trans_pane_g

0x84b6,	// (0x00047a31) cell_toolbar_trans_pane_ParamLimits

0x84b6,	// (0x00047a31) cell_toolbar_trans_pane

0x78f2,	// (0x00046e6d) cell_toolbar_trans_pane_g1

0xe006,	// (0x0004d581) list_form2_midp_pane_t1

0xe014,	// (0x0004d58f) list_form2_midp_pane_t2

0x0001,

0xfad6,	// (0x0004f051) list_form2_midp_pane_t

0x74cc,	// (0x00046a47) scroll_pane_cp51_ParamLimits

0x7694,	// (0x00046c0f) form2_midp_wait_pane_g1

0x769d,	// (0x00046c18) form2_midp_wait_pane_g2

0x76a6,	// (0x00046c21) form2_midp_wait_pane_g3

0x0002,

0xfaeb,	// (0x0004f066) form2_midp_wait_pane_g

0x35d4,	// (0x00042b4f) list_highlight_pane_cp21_ParamLimits

0x76fd,	// (0x00046c78) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x770c,	// (0x00046c87) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x68b9,	// (0x00045e34) list_single_2graphic_im_pane_ParamLimits

0x68b9,	// (0x00045e34) list_single_2graphic_im_pane

0xe3dd,	// (0x0004d958) list_single_2graphic_im_pane_g1_ParamLimits

0xe3dd,	// (0x0004d958) list_single_2graphic_im_pane_g1

0xe3ee,	// (0x0004d969) list_single_2graphic_im_pane_g2_ParamLimits

0xe3ee,	// (0x0004d969) list_single_2graphic_im_pane_g2

0xe3fa,	// (0x0004d975) list_single_2graphic_im_pane_g3_ParamLimits

0xe3fa,	// (0x0004d975) list_single_2graphic_im_pane_g3

0x0003,

0xfc40,	// (0x0004f1bb) list_single_2graphic_im_pane_g_ParamLimits

0xfc40,	// (0x0004f1bb) list_single_2graphic_im_pane_g

0xe40e,	// (0x0004d989) list_single_2graphic_im_pane_t1_ParamLimits

0xe40e,	// (0x0004d989) list_single_2graphic_im_pane_t1

0x7f39,	// (0x000474b4) list_single_graphic_2heading_pane_fp_ParamLimits

0x7f39,	// (0x000474b4) list_single_graphic_2heading_pane_fp

0x0c50,	// (0x000401cb) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0c50,	// (0x000401cb) list_single_graphic_2heading_pane_fp_g1

0x7f4e,	// (0x000474c9) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7f4e,	// (0x000474c9) list_single_graphic_2heading_pane_fp_g2

0x3dea,	// (0x00043365) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3dea,	// (0x00043365) list_single_graphic_2heading_pane_fp_g3

0x3e5d,	// (0x000433d8) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3e5d,	// (0x000433d8) list_single_graphic_2heading_pane_fp_g4

0x7f5a,	// (0x000474d5) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7f5a,	// (0x000474d5) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0004f0e9) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0004f0e9) list_single_graphic_2heading_pane_fp_g

0x0d99,	// (0x00040314) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x0d99,	// (0x00040314) list_single_graphic_2heading_pane_fp_t1

0x0c88,	// (0x00040203) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0c88,	// (0x00040203) list_single_graphic_2heading_pane_fp_t2

0x0daf,	// (0x0004032a) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x0daf,	// (0x0004032a) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc49,	// (0x0004f1c4) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc49,	// (0x0004f1c4) list_single_graphic_2heading_pane_fp_t

0x797e,	// (0x00046ef9) fep_hwr_write_pane_g5_ParamLimits

0x797e,	// (0x00046ef9) fep_hwr_write_pane_g5

0x798a,	// (0x00046f05) fep_hwr_write_pane_g6_ParamLimits

0x798a,	// (0x00046f05) fep_hwr_write_pane_g6

0x820c,	// (0x00047787) eswt_shell_pane_ParamLimits

0x5395,	// (0x00044910) bg_popup_window_pane_cp18_ParamLimits

0x6649,	// (0x00045bc4) heading_pane_cp70

0x8336,	// (0x000478b1) popup_eswt_tasktip_window_t1_ParamLimits

0xd661,	// (0x0004cbdc) aid_touch_tab_arrow_left

0xd677,	// (0x0004cbf2) aid_touch_tab_arrow_right

0xcf66,	// (0x0004c4e1) title_pane_g3_ParamLimits

0xcf66,	// (0x0004c4e1) title_pane_g3

0x3e0e,	// (0x00043389) set_value_pane_g1

0xc7ae,	// (0x0004bd29) popup_toolbar_trans_pane_ParamLimits

0x8490,	// (0x00047a0b) aid_size_cell_tb_trans_pane_ParamLimits

0x3e4f,	// (0x000433ca) bg_tb_trans_pane_ParamLimits

0x84a2,	// (0x00047a1d) grid_tb_trans_pane_ParamLimits

0x385d,	// (0x00042dd8) cont_note_pane_ParamLimits

0x385d,	// (0x00042dd8) cont_note_pane

0x3bb4,	// (0x0004312f) cont_snote2_single_text_pane_ParamLimits

0x3bb4,	// (0x0004312f) cont_snote2_single_text_pane

0x3bb4,	// (0x0004312f) cont_snote2_single_graphic_pane_ParamLimits

0x3bb4,	// (0x0004312f) cont_snote2_single_graphic_pane

0x599a,	// (0x00044f15) cont_note_wait_pane_ParamLimits

0x599a,	// (0x00044f15) cont_note_wait_pane

0x599a,	// (0x00044f15) cont_note_image_pane_ParamLimits

0x599a,	// (0x00044f15) cont_note_image_pane

0x854a,	// (0x00047ac5) popup_note2_window_g1_ParamLimits

0x854a,	// (0x00047ac5) popup_note2_window_g1

0x857b,	// (0x00047af6) popup_note2_window_t1_ParamLimits

0x857b,	// (0x00047af6) popup_note2_window_t1

0x85c0,	// (0x00047b3b) popup_note2_window_t2_ParamLimits

0x85c0,	// (0x00047b3b) popup_note2_window_t2

0x8605,	// (0x00047b80) popup_note2_window_t3_ParamLimits

0x8605,	// (0x00047b80) popup_note2_window_t3

0x864a,	// (0x00047bc5) popup_note2_window_t4_ParamLimits

0x864a,	// (0x00047bc5) popup_note2_window_t4

0x38e1,	// (0x00042e5c) popup_note2_window_t5_ParamLimits

0x38e1,	// (0x00042e5c) popup_note2_window_t5

0x0004,

0xfc55,	// (0x0004f1d0) popup_note2_window_t_ParamLimits

0xfc55,	// (0x0004f1d0) popup_note2_window_t

0x8679,	// (0x00047bf4) popup_note2_image_window_g1_ParamLimits

0x8679,	// (0x00047bf4) popup_note2_image_window_g1

0x8685,	// (0x00047c00) popup_note2_image_window_g2_ParamLimits

0x8685,	// (0x00047c00) popup_note2_image_window_g2

0x0001,

0xfc60,	// (0x0004f1db) popup_note2_image_window_g_ParamLimits

0xfc60,	// (0x0004f1db) popup_note2_image_window_g

0x8697,	// (0x00047c12) popup_note2_image_window_t1_ParamLimits

0x8697,	// (0x00047c12) popup_note2_image_window_t1

0x86af,	// (0x00047c2a) popup_note2_image_window_t2_ParamLimits

0x86af,	// (0x00047c2a) popup_note2_image_window_t2

0x86c7,	// (0x00047c42) popup_note2_image_window_t3_ParamLimits

0x86c7,	// (0x00047c42) popup_note2_image_window_t3

0x0002,

0xfc65,	// (0x0004f1e0) popup_note2_image_window_t_ParamLimits

0xfc65,	// (0x0004f1e0) popup_note2_image_window_t

0x59a8,	// (0x00044f23) popup_note2_wait_window_g1_ParamLimits

0x59a8,	// (0x00044f23) popup_note2_wait_window_g1

0x86e3,	// (0x00047c5e) popup_note2_wait_window_g2_ParamLimits

0x86e3,	// (0x00047c5e) popup_note2_wait_window_g2

0x59c0,	// (0x00044f3b) popup_note2_wait_window_g3_ParamLimits

0x59c0,	// (0x00044f3b) popup_note2_wait_window_g3

0x0002,

0xfc6c,	// (0x0004f1e7) popup_note2_wait_window_g_ParamLimits

0xfc6c,	// (0x0004f1e7) popup_note2_wait_window_g

0x86ef,	// (0x00047c6a) popup_note2_wait_window_t1_ParamLimits

0x86ef,	// (0x00047c6a) popup_note2_wait_window_t1

0x870d,	// (0x00047c88) popup_note2_wait_window_t2_ParamLimits

0x870d,	// (0x00047c88) popup_note2_wait_window_t2

0x872b,	// (0x00047ca6) popup_note2_wait_window_t3_ParamLimits

0x872b,	// (0x00047ca6) popup_note2_wait_window_t3

0x873d,	// (0x00047cb8) popup_note2_wait_window_t4_ParamLimits

0x873d,	// (0x00047cb8) popup_note2_wait_window_t4

0x0003,

0xfc73,	// (0x0004f1ee) popup_note2_wait_window_t_ParamLimits

0xfc73,	// (0x0004f1ee) popup_note2_wait_window_t

0x874f,	// (0x00047cca) wait_bar2_pane_ParamLimits

0x874f,	// (0x00047cca) wait_bar2_pane

0x8767,	// (0x00047ce2) popup_snote2_single_text_window_g1_ParamLimits

0x8767,	// (0x00047ce2) popup_snote2_single_text_window_g1

0x878f,	// (0x00047d0a) popup_snote2_single_text_window_t1_ParamLimits

0x878f,	// (0x00047d0a) popup_snote2_single_text_window_t1

0x87db,	// (0x00047d56) popup_snote2_single_text_window_t2_ParamLimits

0x87db,	// (0x00047d56) popup_snote2_single_text_window_t2

0x8827,	// (0x00047da2) popup_snote2_single_text_window_t3_ParamLimits

0x8827,	// (0x00047da2) popup_snote2_single_text_window_t3

0x8868,	// (0x00047de3) popup_snote2_single_text_window_t4_ParamLimits

0x8868,	// (0x00047de3) popup_snote2_single_text_window_t4

0x889e,	// (0x00047e19) popup_snote2_single_text_window_t5_ParamLimits

0x889e,	// (0x00047e19) popup_snote2_single_text_window_t5

0x0004,

0xfc7c,	// (0x0004f1f7) popup_snote2_single_text_window_t_ParamLimits

0xfc7c,	// (0x0004f1f7) popup_snote2_single_text_window_t

0x88c9,	// (0x00047e44) popup_snote2_single_graphic_window_g1_ParamLimits

0x88c9,	// (0x00047e44) popup_snote2_single_graphic_window_g1

0x88f1,	// (0x00047e6c) popup_snote2_single_graphic_window_g2_ParamLimits

0x88f1,	// (0x00047e6c) popup_snote2_single_graphic_window_g2

0x0001,

0xfc87,	// (0x0004f202) popup_snote2_single_graphic_window_g_ParamLimits

0xfc87,	// (0x0004f202) popup_snote2_single_graphic_window_g

0x8919,	// (0x00047e94) popup_snote2_single_graphic_window_t1_ParamLimits

0x8919,	// (0x00047e94) popup_snote2_single_graphic_window_t1

0x8965,	// (0x00047ee0) popup_snote2_single_graphic_window_t2_ParamLimits

0x8965,	// (0x00047ee0) popup_snote2_single_graphic_window_t2

0x8827,	// (0x00047da2) popup_snote2_single_graphic_window_t3_ParamLimits

0x8827,	// (0x00047da2) popup_snote2_single_graphic_window_t3

0x8868,	// (0x00047de3) popup_snote2_single_graphic_window_t4_ParamLimits

0x8868,	// (0x00047de3) popup_snote2_single_graphic_window_t4

0x889e,	// (0x00047e19) popup_snote2_single_graphic_window_t5_ParamLimits

0x889e,	// (0x00047e19) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8c,	// (0x0004f207) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8c,	// (0x0004f207) popup_snote2_single_graphic_window_t

0x738d,	// (0x00046908) clock_nsta_pane_cp2_t1

0x738d,	// (0x00046908) clock_nsta_pane_cp2_t2

0x0001,

0xfaac,	// (0x0004f027) clock_nsta_pane_cp2_t

0x04af,	// (0x0003fa2a) form_field_data_wide_pane_g1_ParamLimits

0x3dea,	// (0x00043365) form_field_data_wide_pane_g2_ParamLimits

0x3dea,	// (0x00043365) form_field_data_wide_pane_g2

0x3e5d,	// (0x000433d8) form_field_data_wide_pane_g3_ParamLimits

0x3e5d,	// (0x000433d8) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x0004ebfb) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x0004ebfb) form_field_data_wide_pane_g

0xdf49,	// (0x0004d4c4) grid_touch_3_pane_ParamLimits

0xdf49,	// (0x0004d4c4) grid_touch_3_pane

0xe43f,	// (0x0004d9ba) cell_touch_3_pane_ParamLimits

0xe43f,	// (0x0004d9ba) cell_touch_3_pane

0x78f2,	// (0x00046e6d) cell_touch_3_pane_g1

0x78f2,	// (0x00046e6d) cell_touch_3_pane_g2

0x0001,

0xfb31,	// (0x0004f0ac) cell_touch_3_pane_g

0x3913,	// (0x00042e8e) cont_query_data_pane

0x391b,	// (0x00042e96) cont_query_data_pane_cp1

0x89df,	// (0x00047f5a) button_value_adjust_pane_cp7

0x89e7,	// (0x00047f62) query_popup_pane_cp3

0x45b6,	// (0x00043b31) bg_popup_sub_pane_cp22_ParamLimits

0x1623,	// (0x00040b9e) navi_navi_volume_pane_cp2

0x163e,	// (0x00040bb9) popup_side_volume_key_window_g2

0x164d,	// (0x00040bc8) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x0004ec91) popup_side_volume_key_window_g

0x166a,	// (0x00040be5) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0004ec98) popup_side_volume_key_window_t

0x486d,	// (0x00043de8) popup_side_volume_key_window_ParamLimits

0xbfab,	// (0x0004b526) list_double_graphic_pane_g4_ParamLimits

0xbfab,	// (0x0004b526) list_double_graphic_pane_g4

0xddc1,	// (0x0004d33c) list_single_2heading_msg_pane_ParamLimits

0xddc1,	// (0x0004d33c) list_single_2heading_msg_pane

0xc8fc,	// (0x0004be77) list_single_2heading_msg_pane_g1_ParamLimits

0xc8fc,	// (0x0004be77) list_single_2heading_msg_pane_g1

0xc908,	// (0x0004be83) list_single_2heading_msg_pane_g2_ParamLimits

0xc908,	// (0x0004be83) list_single_2heading_msg_pane_g2

0xc91b,	// (0x0004be96) list_single_2heading_msg_pane_g3_ParamLimits

0xc91b,	// (0x0004be96) list_single_2heading_msg_pane_g3

0xc927,	// (0x0004bea2) list_single_2heading_msg_pane_g4_ParamLimits

0xc927,	// (0x0004bea2) list_single_2heading_msg_pane_g4

0x0003,

0xfc97,	// (0x0004f212) list_single_2heading_msg_pane_g_ParamLimits

0xfc97,	// (0x0004f212) list_single_2heading_msg_pane_g

0xbc3f,	// (0x0004b1ba) list_single_2heading_msg_pane_t1_ParamLimits

0xbc3f,	// (0x0004b1ba) list_single_2heading_msg_pane_t1

0xbc67,	// (0x0004b1e2) list_single_2heading_msg_pane_t2_ParamLimits

0xbc67,	// (0x0004b1e2) list_single_2heading_msg_pane_t2

0xbcd2,	// (0x0004b24d) list_single_2heading_msg_pane_t3_ParamLimits

0xbcd2,	// (0x0004b24d) list_single_2heading_msg_pane_t3

0x0e64,	// (0x000403df) list_single_2heading_msg_pane_t4_ParamLimits

0x0e64,	// (0x000403df) list_single_2heading_msg_pane_t4

0x0003,

0xfca0,	// (0x0004f21b) list_single_2heading_msg_pane_t_ParamLimits

0xfca0,	// (0x0004f21b) list_single_2heading_msg_pane_t

0x3528,	// (0x00042aa3) title_pane_g4_ParamLimits

0x3528,	// (0x00042aa3) title_pane_g4

0x1432,	// (0x000409ad) title_pane_stacon_g3_ParamLimits

0x1432,	// (0x000409ad) title_pane_stacon_g3

0x850d,	// (0x00047a88) list_single_2graphic_im_pane_g4_ParamLimits

0x850d,	// (0x00047a88) list_single_2graphic_im_pane_g4

0x6405,	// (0x00045980) popup_side_volume_key_window_cp

0x6bcc,	// (0x00046147) main_idle_act2_pane_t1

0x1fe7,	// (0x00041562) toolbar_button_pane_g10

0xd271,	// (0x0004c7ec) popup_toolbar_window_cp1

0x737e,	// (0x000468f9) clock_nsta_pane_cp_t1

0x737e,	// (0x000468f9) clock_nsta_pane_cp_t2

0x0001,

0xfaa7,	// (0x0004f022) clock_nsta_pane_cp_t

0x1623,	// (0x00040b9e) navi_navi_volume_pane_cp2_ParamLimits

0x1632,	// (0x00040bad) popup_side_volume_key_window_g1_ParamLimits

0x163e,	// (0x00040bb9) popup_side_volume_key_window_g2_ParamLimits

0x164d,	// (0x00040bc8) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x0004ec91) popup_side_volume_key_window_g_ParamLimits

0x251a,	// (0x00041a95) fep_hwr_aid_pane

0xe0eb,	// (0x0004d666) bg_fep_hwr_top_pane_g4_ParamLimits

0x794e,	// (0x00046ec9) fep_hwr_top_pane_g1_ParamLimits

0x7960,	// (0x00046edb) fep_hwr_top_pane_g2_ParamLimits

0x25d3,	// (0x00041b4e) fep_hwr_top_pane_g3_ParamLimits

0xfafc,	// (0x0004f077) fep_hwr_top_pane_g_ParamLimits

0x25e8,	// (0x00041b63) fep_hwr_top_text_pane_ParamLimits

0x61c8,	// (0x00045743) aid_touch_tab_arrow_arrow_2

0x61d1,	// (0x0004574c) aid_touch_tab_arrow_left_2

0x252e,	// (0x00041aa9) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x2565,	// (0x00041ae0) fep_hwr_prediction_pane

0x7ac0,	// (0x0004703b) fep_vkb_prediction_pane

0xe225,	// (0x0004d7a0) fep_vkb_side_pane_g3_ParamLimits

0xe225,	// (0x0004d7a0) fep_vkb_side_pane_g3

0x7b70,	// (0x000470eb) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x8010,	// (0x0004758b) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x801d,	// (0x00047598) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba6,	// (0x0004f121) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8a0c,	// (0x00047f87) fep_hwr_prediction_pane_g1

0x291d,	// (0x00041e98) fep_hwr_prediction_pane_g2

0x2925,	// (0x00041ea0) fep_hwr_prediction_pane_g3

0x292d,	// (0x00041ea8) fep_hwr_prediction_pane_g4

0x0003,

0xfca9,	// (0x0004f224) fep_hwr_prediction_pane_g

0x8a0c,	// (0x00047f87) fep_vkb_prediction_pane_g1

0x8a16,	// (0x00047f91) fep_vkb_prediction_pane_g2

0x8a1e,	// (0x00047f99) fep_vkb_prediction_pane_g3

0x8a26,	// (0x00047fa1) fep_vkb_prediction_pane_g4

0x0003,

0xfcb2,	// (0x0004f22d) fep_vkb_prediction_pane_g

0x22cf,	// (0x0004184a) slider_set_pane_g3

0x22e3,	// (0x0004185e) slider_set_pane_g4

0x22fb,	// (0x00041876) slider_set_pane_g5

0x22cf,	// (0x0004184a) slider_set_pane_g6

0x2311,	// (0x0004188c) slider_set_pane_g7

0x6866,	// (0x00045de1) slider_form_pane_g3

0x686f,	// (0x00045dea) slider_form_pane_g4

0x6877,	// (0x00045df2) slider_form_pane_g5

0x6866,	// (0x00045de1) slider_form_pane_g6

0xdd93,	// (0x0004d30e) slider_form_pane_g7

0x6e77,	// (0x000463f2) slider_set_pane_vc_g3

0x6e80,	// (0x000463fb) slider_set_pane_vc_g4

0x6e89,	// (0x00046404) slider_set_pane_vc_g5

0x6e77,	// (0x000463f2) slider_set_pane_vc_g6

0x6e92,	// (0x0004640d) slider_set_pane_vc_g7

0x7052,	// (0x000465cd) slider_form_pane_vc_g1

0x705b,	// (0x000465d6) slider_form_pane_vc_g2

0x7064,	// (0x000465df) slider_form_pane_vc_g3

0x7052,	// (0x000465cd) slider_form_pane_vc_g4

0x706d,	// (0x000465e8) slider_form_pane_vc_g5

0x0004,

0xfa79,	// (0x0004eff4) slider_form_pane_vc_g

0x34e0,	// (0x00042a5b) main_idle_act3_pane

0x8a2e,	// (0x00047fa9) ai3_links_pane

0xe487,	// (0x0004da02) popup_ai3_data_window_ParamLimits

0xe487,	// (0x0004da02) popup_ai3_data_window

0x34e0,	// (0x00042a5b) grid_ai3_links_pane

0xe4a1,	// (0x0004da1c) cell_ai3_links_pane_ParamLimits

0xe4a1,	// (0x0004da1c) cell_ai3_links_pane

0x8a69,	// (0x00047fe4) bg_popup_sub_pane_cp11

0x8a76,	// (0x00047ff1) cell_ai3_links_pane_g1

0x34e0,	// (0x00042a5b) bg_popup_sub_pane_cp12

0x8a9b,	// (0x00048016) heading_ai3_data_pane

0x8aa3,	// (0x0004801e) list_ai3_gene_pane

0x8aaf,	// (0x0004802a) popup_ai3_data_window_g1

0x8ab7,	// (0x00048032) heading_ai3_data_pane_g1

0x8abf,	// (0x0004803a) heading_ai3_data_pane_t1

0x8acd,	// (0x00048048) list_double_ai3_gene_pane_ParamLimits

0x8acd,	// (0x00048048) list_double_ai3_gene_pane

0x8ada,	// (0x00048055) list_single_ai3_gene_pane_ParamLimits

0x8ada,	// (0x00048055) list_single_ai3_gene_pane

0x78b7,	// (0x00046e32) list_highlight_pane_cp7_ParamLimits

0x78b7,	// (0x00046e32) list_highlight_pane_cp7

0x8ae7,	// (0x00048062) list_single_a13_gene_pane_t1_ParamLimits

0x8ae7,	// (0x00048062) list_single_a13_gene_pane_t1

0x8afe,	// (0x00048079) list_single_ai3_gene_pane_g1

0x8b07,	// (0x00048082) list_single_ai3_gene_pane_g2

0x0001,

0xfcbb,	// (0x0004f236) list_single_ai3_gene_pane_g

0x8b0f,	// (0x0004808a) list_double_ai3_gene_pane_g1_ParamLimits

0x8b0f,	// (0x0004808a) list_double_ai3_gene_pane_g1

0x8b1b,	// (0x00048096) list_double_ai3_gene_pane_t1_ParamLimits

0x8b1b,	// (0x00048096) list_double_ai3_gene_pane_t1

0x8b37,	// (0x000480b2) list_double_ai3_gene_pane_t2_ParamLimits

0x8b37,	// (0x000480b2) list_double_ai3_gene_pane_t2

0x8b4d,	// (0x000480c8) list_double_ai3_gene_pane_t3_ParamLimits

0x8b4d,	// (0x000480c8) list_double_ai3_gene_pane_t3

0x0002,

0xfcc0,	// (0x0004f23b) list_double_ai3_gene_pane_t_ParamLimits

0xfcc0,	// (0x0004f23b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0dc5,	// (0x00040340) aid_size_min_col_2

0xe471,	// (0x0004d9ec) aid_size_min_msg_ParamLimits

0xe471,	// (0x0004d9ec) aid_size_min_msg

0xe239,	// (0x0004d7b4) fep_vkb_top_text_pane_g2_ParamLimits

0xe239,	// (0x0004d7b4) fep_vkb_top_text_pane_g2

0x0001,

0xfb2c,	// (0x0004f0a7) fep_vkb_top_text_pane_g_ParamLimits

0xfb2c,	// (0x0004f0a7) fep_vkb_top_text_pane_g

0x34e0,	// (0x00042a5b) main_hc_apps_shell_pane

0x8b6a,	// (0x000480e5) grid_hc_apps_pane_ParamLimits

0x8b6a,	// (0x000480e5) grid_hc_apps_pane

0x8b79,	// (0x000480f4) list_hc_apps_pane

0x8b81,	// (0x000480fc) scroll_pane_cp37_ParamLimits

0x8b81,	// (0x000480fc) scroll_pane_cp37

0xe4bb,	// (0x0004da36) cell_hc_apps_pane_ParamLimits

0xe4bb,	// (0x0004da36) cell_hc_apps_pane

0xe586,	// (0x0004db01) cell_hc_apps_pane_g1_ParamLimits

0xe586,	// (0x0004db01) cell_hc_apps_pane_g1

0x8c6c,	// (0x000481e7) cell_hc_apps_pane_g2_ParamLimits

0x8c6c,	// (0x000481e7) cell_hc_apps_pane_g2

0x8c88,	// (0x00048203) cell_hc_apps_pane_g3_ParamLimits

0x8c88,	// (0x00048203) cell_hc_apps_pane_g3

0x0002,

0xfcc7,	// (0x0004f242) cell_hc_apps_pane_g_ParamLimits

0xfcc7,	// (0x0004f242) cell_hc_apps_pane_g

0xe5b3,	// (0x0004db2e) cell_hc_apps_pane_t1_ParamLimits

0xe5b3,	// (0x0004db2e) cell_hc_apps_pane_t1

0x385d,	// (0x00042dd8) grid_highlight_pane_cp10_ParamLimits

0x385d,	// (0x00042dd8) grid_highlight_pane_cp10

0xe5f1,	// (0x0004db6c) list_single_hc_apps_pane_ParamLimits

0xe5f1,	// (0x0004db6c) list_single_hc_apps_pane

0xe61e,	// (0x0004db99) list_single_hc_apps_pane_g1

0xc93f,	// (0x0004beba) list_single_hc_apps_pane_g2

0x0001,

0xfcce,	// (0x0004f249) list_single_hc_apps_pane_g

0xc958,	// (0x0004bed3) list_single_hc_apps_pane_g2_copy1

0x0e89,	// (0x00040404) list_single_hc_apps_pane_t1

0x35d4,	// (0x00042b4f) bg_set_opt_pane_cp_ParamLimits

0x12ae,	// (0x00040829) setting_slider_pane_t1_ParamLimits

0x12c7,	// (0x00040842) setting_slider_pane_t2_ParamLimits

0x12e1,	// (0x0004085c) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0004ead9) setting_slider_pane_t_ParamLimits

0x12f9,	// (0x00040874) slider_set_pane_ParamLimits

0x18e8,	// (0x00040e63) control_pane_g5_ParamLimits

0x18e8,	// (0x00040e63) control_pane_g5

0x66b5,	// (0x00045c30) slider_set_pane_g1_ParamLimits

0x22c3,	// (0x0004183e) slider_set_pane_g2_ParamLimits

0x22cf,	// (0x0004184a) slider_set_pane_g3_ParamLimits

0x22e3,	// (0x0004185e) slider_set_pane_g4_ParamLimits

0x22fb,	// (0x00041876) slider_set_pane_g5_ParamLimits

0x22cf,	// (0x0004184a) slider_set_pane_g6_ParamLimits

0x2311,	// (0x0004188c) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0004eedf) slider_set_pane_g_ParamLimits

0x4959,	// (0x00043ed4) navi_icon_text_pane_ParamLimits

0xd62a,	// (0x0004cba5) aid_fill_nsta_2_ParamLimits

0xd661,	// (0x0004cbdc) aid_touch_tab_arrow_left_ParamLimits

0xd677,	// (0x0004cbf2) aid_touch_tab_arrow_right_ParamLimits

0xd712,	// (0x0004cc8d) clock_nsta_pane_ParamLimits

0x61aa,	// (0x00045725) navi_icon_pane_g1_ParamLimits

0x61b6,	// (0x00045731) navi_text_pane_t1_ParamLimits

0x748a,	// (0x00046a05) navi_icon_text_pane_g1_ParamLimits

0x7496,	// (0x00046a11) navi_icon_text_pane_t1_ParamLimits

0xe61e,	// (0x0004db99) list_single_hc_apps_pane_g1_ParamLimits

0xc93f,	// (0x0004beba) list_single_hc_apps_pane_g2_ParamLimits

0xfcce,	// (0x0004f249) list_single_hc_apps_pane_g_ParamLimits

0xc958,	// (0x0004bed3) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x0e89,	// (0x00040404) list_single_hc_apps_pane_t1_ParamLimits

0xbeac,	// (0x0004b427) popup_toolbar2_fixed_window_ParamLimits

0xbeac,	// (0x0004b427) popup_toolbar2_fixed_window

0xc7a4,	// (0x0004bd1f) popup_toolbar2_float_window

0x34e0,	// (0x00042a5b) bg_popup_sub_pane_cp27

0x8d5f,	// (0x000482da) grid_toolbar2_float_pane

0x34e0,	// (0x00042a5b) bg_popup_sub_pane_cp26

0x8d5f,	// (0x000482da) grid_toolbar2_fixed_pane

0xe637,	// (0x0004dbb2) cell_toolbar2_fixed_pane_ParamLimits

0xe637,	// (0x0004dbb2) cell_toolbar2_fixed_pane

0xe651,	// (0x0004dbcc) cell_toolbar2_fixed_pane_g1

0x8d80,	// (0x000482fb) toolbar2_fixed_button_pane

0x5321,	// (0x0004489c) toolbar2_fixed_button_pane_g1

0x5329,	// (0x000448a4) toolbar2_fixed_button_pane_g2

0x5331,	// (0x000448ac) toolbar2_fixed_button_pane_g3

0x5339,	// (0x000448b4) toolbar2_fixed_button_pane_g4

0x5341,	// (0x000448bc) toolbar2_fixed_button_pane_g5

0x5349,	// (0x000448c4) toolbar2_fixed_button_pane_g6

0x5351,	// (0x000448cc) toolbar2_fixed_button_pane_g7

0x5359,	// (0x000448d4) toolbar2_fixed_button_pane_g8

0x5361,	// (0x000448dc) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0004ede1) toolbar2_fixed_button_pane_g

0x8d88,	// (0x00048303) cell_toolbar2_float_pane_ParamLimits

0x8d88,	// (0x00048303) cell_toolbar2_float_pane

0x8d99,	// (0x00048314) cell_toolbar2_float_pane_g1

0x8d80,	// (0x000482fb) toolbar2_fixed_button_pane_cp

0xe113,	// (0x0004d68e) fep_vkb_accented_list_pane_ParamLimits

0xe113,	// (0x0004d68e) fep_vkb_accented_list_pane

0x2736,	// (0x00041cb1) bg_popup_fep_shadow_pane_g9

0x4ad9,	// (0x00044054) bg_popup_fep_shadow_pane_cp3

0x3f9a,	// (0x00043515) list_accented_list_pane

0x8da2,	// (0x0004831d) list_single_accented_list_pane_ParamLimits

0x8da2,	// (0x0004831d) list_single_accented_list_pane

0x4ad9,	// (0x00044054) list_highlight_pane_cp10

0x8db3,	// (0x0004832e) list_single_accented_list_pane_t1

0xc6ce,	// (0x0004bc49) popup_slider_window_ParamLimits

0xc6ce,	// (0x0004bc49) popup_slider_window

0x89ef,	// (0x00047f6a) aid_indentation_list_msg

0xe74a,	// (0x0004dcc5) bg_popup_window_pane_cp19

0x8ed7,	// (0x00048452) popup_slider_window_g1

0x8ef3,	// (0x0004846e) popup_slider_window_g2

0x8f0f,	// (0x0004848a) popup_slider_window_g3

0x0005,

0xfcd3,	// (0x0004f24e) popup_slider_window_g

0x8f6b,	// (0x000484e6) popup_slider_window_t1

0x8fdf,	// (0x0004855a) small_volume_slider_vertical_pane

0x78f2,	// (0x00046e6d) small_volume_slider_vertical_pane_g1

0x78f2,	// (0x00046e6d) small_volume_slider_vertical_pane_g2

0x8ffb,	// (0x00048576) small_volume_slider_vertical_pane_g3

0x0002,

0xfce5,	// (0x0004f260) small_volume_slider_vertical_pane_g

0xbe1a,	// (0x0004b395) area_side_right_pane_ParamLimits

0xbe1a,	// (0x0004b395) area_side_right_pane

0xc974,	// (0x0004beef) aid_size_side_button_ParamLimits

0xc974,	// (0x0004beef) aid_size_side_button

0xc98d,	// (0x0004bf08) grid_sctrl_middle_pane_ParamLimits

0xc98d,	// (0x0004bf08) grid_sctrl_middle_pane

0x299d,	// (0x00041f18) sctrl_sk_bottom_pane

0x29ae,	// (0x00041f29) sctrl_sk_top_pane

0x29c0,	// (0x00041f3b) aid_touch_sctrl_top

0x385d,	// (0x00042dd8) bg_sctrl_sk_pane_ParamLimits

0x385d,	// (0x00042dd8) bg_sctrl_sk_pane

0x29cd,	// (0x00041f48) sctrl_sk_top_pane_g1

0x29da,	// (0x00041f55) sctrl_sk_top_pane_t1

0x29c0,	// (0x00041f3b) aid_touch_sctrl_bottom

0x385d,	// (0x00042dd8) bg_sctrl_sk_pane_cp_ParamLimits

0x385d,	// (0x00042dd8) bg_sctrl_sk_pane_cp

0x29f5,	// (0x00041f70) sctrl_sk_bottom_pane_g1

0x29da,	// (0x00041f55) sctrl_sk_bottom_pane_t1

0xc9a7,	// (0x0004bf22) cell_sctrl_middle_pane_ParamLimits

0xc9a7,	// (0x0004bf22) cell_sctrl_middle_pane

0xc9b8,	// (0x0004bf33) aid_touch_sctrl_middle_ParamLimits

0xc9b8,	// (0x0004bf33) aid_touch_sctrl_middle

0xc9c5,	// (0x0004bf40) bg_sctrl_middle_pane_ParamLimits

0xc9c5,	// (0x0004bf40) bg_sctrl_middle_pane

0x9083,	// (0x000485fe) cell_sctrl_middle_pane_g1_ParamLimits

0x9083,	// (0x000485fe) cell_sctrl_middle_pane_g1

0xc9d3,	// (0x0004bf4e) cell_sctrl_middle_pane_g2_ParamLimits

0xc9d3,	// (0x0004bf4e) cell_sctrl_middle_pane_g2

0x0001,

0xfcf1,	// (0x0004f26c) cell_sctrl_middle_pane_g_ParamLimits

0xfcf1,	// (0x0004f26c) cell_sctrl_middle_pane_g

0x5321,	// (0x0004489c) bg_sctrl_middle_pane_g1

0x5329,	// (0x000448a4) bg_sctrl_middle_pane_g2

0x5331,	// (0x000448ac) bg_sctrl_middle_pane_g3

0x5339,	// (0x000448b4) bg_sctrl_middle_pane_g4

0x5341,	// (0x000448bc) bg_sctrl_middle_pane_g5

0x5349,	// (0x000448c4) bg_sctrl_middle_pane_g6

0x5351,	// (0x000448cc) bg_sctrl_middle_pane_g7

0x5359,	// (0x000448d4) bg_sctrl_middle_pane_g8

0x0007,

0xfcf6,	// (0x0004f271) bg_sctrl_middle_pane_g

0x5361,	// (0x000448dc) bg_sctrl_middle_pane_g8_copy1

0x5321,	// (0x0004489c) bg_sctrl_sk_pane_g1

0x5329,	// (0x000448a4) bg_sctrl_sk_pane_g2

0x5331,	// (0x000448ac) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0004ede1) bg_sctrl_sk_pane_g

0x3d72,	// (0x000432ed) aid_size_touch_scroll_bar

0x5339,	// (0x000448b4) bg_sctrl_sk_pane_g4

0x5341,	// (0x000448bc) bg_sctrl_sk_pane_g5

0x5349,	// (0x000448c4) bg_sctrl_sk_pane_g6

0x5351,	// (0x000448cc) bg_sctrl_sk_pane_g7

0x5359,	// (0x000448d4) bg_sctrl_sk_pane_g8

0x5361,	// (0x000448dc) bg_sctrl_sk_pane_g9

0x1a98,	// (0x00041013) popup_fep_china_hwr2_fs_candidate_window

0xc1e8,	// (0x0004b763) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc1e8,	// (0x0004b763) popup_fep_china_hwr2_fs_control_window

0x7b70,	// (0x000470eb) sctrl_sk_top_pane_g2

0x0001,

0xfcec,	// (0x0004f267) sctrl_sk_top_pane_g

0xe802,	// (0x0004dd7d) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe802,	// (0x0004dd7d) aid_fep_china_hwr2_fs_cell

0xe816,	// (0x0004dd91) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe816,	// (0x0004dd91) bg_popup_fep_shadow_pane_cp4

0xe82d,	// (0x0004dda8) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe82d,	// (0x0004dda8) bg_popup_fep_shadow_pane_cp5

0xe83f,	// (0x0004ddba) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe83f,	// (0x0004ddba) popup_fep_china_hwr2_fs_control_bar_grid

0xe853,	// (0x0004ddce) popup_fep_china_hwr2_fs_control_funtion_grid

0x9057,	// (0x000485d2) aid_fep_china_hwr2_fs_candi_cell

0x34e0,	// (0x00042a5b) bg_popup_fep_shadow_pane_cp6

0x9061,	// (0x000485dc) popup_fep_china_hwr2_fs_candidate_grid

0xe85b,	// (0x0004ddd6) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe85b,	// (0x0004ddd6) cell_fep_china_hwr2_fs_funtion_grid

0x78f2,	// (0x00046e6d) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x9083,	// (0x000485fe) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x9083,	// (0x000485fe) cell_fep_china_hwr2_fs_funtion_grid_g1

0x9091,	// (0x0004860c) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x9091,	// (0x0004860c) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd07,	// (0x0004f282) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd07,	// (0x0004f282) cell_fep_china_hwr2_fs_funtion_grid_g

0xe873,	// (0x0004ddee) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe873,	// (0x0004ddee) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe888,	// (0x0004de03) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe888,	// (0x0004de03) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0c,	// (0x0004f287) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0c,	// (0x0004f287) cell_fep_china_hwr2_fs_funtion_grid_t

0x90d8,	// (0x00048653) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x90e0,	// (0x0004865b) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x90e8,	// (0x00048663) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd11,	// (0x0004f28c) popup_fep_china_hwr2_fs_control_bar_grid_g

0x90f0,	// (0x0004866b) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x90f0,	// (0x0004866b) cell_fep_china_hwr2_fs_candidate_grid

0x9109,	// (0x00048684) popup_fep_china_hwr2_fs_candidate_grid_g20

0x9111,	// (0x0004868c) popup_fep_china_hwr2_fs_candidate_grid_g21

0x78f2,	// (0x00046e6d) cell_fep_china_hwr2_fs_candidate_grid_g1

0x78f2,	// (0x00046e6d) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb31,	// (0x0004f0ac) cell_fep_china_hwr2_fs_candidate_grid_g

0x9119,	// (0x00048694) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4f17,	// (0x00044492) clock_nsta_pane_cp_24_ParamLimits

0x4f17,	// (0x00044492) clock_nsta_pane_cp_24

0x4f95,	// (0x00044510) indicator_nsta_pane_cp_24_ParamLimits

0x4f95,	// (0x00044510) indicator_nsta_pane_cp_24

0x601a,	// (0x00045595) heading_pane_g1

0x0001,

0xf8cb,	// (0x0004ee46) heading_pane_g

0x6a15,	// (0x00045f90) grid_sct_catagory_button_pane

0x6a45,	// (0x00045fc0) scroll_pane_cp5_ParamLimits

0x74d8,	// (0x00046a53) button_value_adjust_pane_cp5_ParamLimits

0x74d8,	// (0x00046a53) button_value_adjust_pane_cp5

0x75c3,	// (0x00046b3e) form2_midp_time_pane_ParamLimits

0x9127,	// (0x000486a2) cell_sct_catagory_button_pane_ParamLimits

0x9127,	// (0x000486a2) cell_sct_catagory_button_pane

0x78b7,	// (0x00046e32) bg_button_pane_cp01_ParamLimits

0x78b7,	// (0x00046e32) bg_button_pane_cp01

0x78f2,	// (0x00046e6d) cell_sct_catagory_button_pane_g1

0xc747,	// (0x0004bcc2) popup_tb_extension_window

0xe8a4,	// (0x0004de1f) aid_size_cell_ext_ParamLimits

0xe8a4,	// (0x0004de1f) aid_size_cell_ext

0x3bb4,	// (0x0004312f) bg_tb_trans_pane_cp1_ParamLimits

0x3bb4,	// (0x0004312f) bg_tb_trans_pane_cp1

0xe8ca,	// (0x0004de45) grid_tb_ext_pane_ParamLimits

0xe8ca,	// (0x0004de45) grid_tb_ext_pane

0xe905,	// (0x0004de80) cell_tb_ext_pane_ParamLimits

0xe905,	// (0x0004de80) cell_tb_ext_pane

0xe92d,	// (0x0004dea8) cell_tb_ext_pane_g1_ParamLimits

0xe92d,	// (0x0004dea8) cell_tb_ext_pane_g1

0x91bb,	// (0x00048736) cell_tb_ext_pane_t1

0x385d,	// (0x00042dd8) list_highlight_pane_cp11_ParamLimits

0x385d,	// (0x00042dd8) list_highlight_pane_cp11

0xbec1,	// (0x0004b43c) popup_uni_indicator_window_ParamLimits

0xbec1,	// (0x0004b43c) popup_uni_indicator_window

0x3e4f,	// (0x000433ca) bg_popup_sub_pane_cp14

0x91d6,	// (0x00048751) list_uniindi_pane

0x91e2,	// (0x0004875d) uniindi_top_pane

0x385d,	// (0x00042dd8) bg_uniindi_top_pane

0x9201,	// (0x0004877c) uniindi_top_pane_g1

0x9217,	// (0x00048792) uniindi_top_pane_g2

0x0003,

0xfd18,	// (0x0004f293) uniindi_top_pane_g

0x9241,	// (0x000487bc) uniindi_top_pane_t1

0x926b,	// (0x000487e6) list_single_uniindi_pane_ParamLimits

0x926b,	// (0x000487e6) list_single_uniindi_pane

0x78f2,	// (0x00046e6d) bg_uniindi_top_pane_g1

0x927e,	// (0x000487f9) list_single_uniindi_pane_g1

0x9291,	// (0x0004880c) list_single_uniindi_pane_t1

0x34e0,	// (0x00042a5b) control_bg_pane

0x92b6,	// (0x00048831) bg_sctrl_sk_pane_cp1

0x92bf,	// (0x0004883a) bg_sctrl_sk_pane_cp2

0x92c8,	// (0x00048843) control_bg_pane_g1

0x92d1,	// (0x0004884c) control_bg_pane_g2

0x0001,

0xfd21,	// (0x0004f29c) control_bg_pane_g

0x7322,	// (0x0004689d) cell_indicator_nsta_pane_g1_ParamLimits

0xdf76,	// (0x0004d4f1) cell_indicator_nsta_pane_g2_ParamLimits

0xfa95,	// (0x0004f010) cell_indicator_nsta_pane_g_ParamLimits

0x0c26,	// (0x000401a1) form2_midp_time_pane_t1_ParamLimits

0x250c,	// (0x00041a87) main_idle_act4_pane_ParamLimits

0x250c,	// (0x00041a87) main_idle_act4_pane

0xc747,	// (0x0004bcc2) popup_tb_extension_window_ParamLimits

0xe8ec,	// (0x0004de67) tb_ext_find_pane_ParamLimits

0xe8ec,	// (0x0004de67) tb_ext_find_pane

0x92da,	// (0x00048855) ai_gene_pane_1_cp1

0x4c14,	// (0x0004418f) ai_gene_pane_2_cp1

0x92e2,	// (0x0004885d) list_single_idle_plugin_calendar_pane

0x92eb,	// (0x00048866) list_single_idle_plugin_notification_pane

0x92f4,	// (0x0004886f) list_single_idle_plugin_player_pane

0xe94a,	// (0x0004dec5) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe94a,	// (0x0004dec5) list_single_idle_plugin_shortcut_pane

0xe972,	// (0x0004deed) main_idle_act4_pane_t1

0xe988,	// (0x0004df03) main_idle_act4_pane_t2

0x0001,

0xfd26,	// (0x0004f2a1) main_idle_act4_pane_t

0xe99e,	// (0x0004df19) middle_sk_idle_act4_pane_ParamLimits

0xe99e,	// (0x0004df19) middle_sk_idle_act4_pane

0xe9ba,	// (0x0004df35) popup_clock_digital_analogue_window_cp2

0xe9e2,	// (0x0004df5d) shortcut_wheel_idle_act4_pane_ParamLimits

0xe9e2,	// (0x0004df5d) shortcut_wheel_idle_act4_pane

0x78f2,	// (0x00046e6d) shortcut_wheel_idle_act4_pane_g1

0x78f2,	// (0x00046e6d) shortcut_wheel_idle_act4_pane_g2

0x78f2,	// (0x00046e6d) shortcut_wheel_idle_act4_pane_g3

0x78f2,	// (0x00046e6d) shortcut_wheel_idle_act4_pane_g4

0x78f2,	// (0x00046e6d) shortcut_wheel_idle_act4_pane_g5

0x9387,	// (0x00048902) shortcut_wheel_idle_act4_pane_g6

0x938f,	// (0x0004890a) shortcut_wheel_idle_act4_pane_g7

0x9397,	// (0x00048912) shortcut_wheel_idle_act4_pane_g8

0x939f,	// (0x0004891a) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2b,	// (0x0004f2a6) shortcut_wheel_idle_act4_pane_g

0xe0eb,	// (0x0004d666) middle_sk_idle_act4_pane_g1_ParamLimits

0xe0eb,	// (0x0004d666) middle_sk_idle_act4_pane_g1

0xea5f,	// (0x0004dfda) middle_sk_idle_act4_pane_g2_ParamLimits

0xea5f,	// (0x0004dfda) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4e,	// (0x0004f2c9) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4e,	// (0x0004f2c9) middle_sk_idle_act4_pane_g

0xea77,	// (0x0004dff2) middle_sk_idle_act4_pane_t1_ParamLimits

0xea77,	// (0x0004dff2) middle_sk_idle_act4_pane_t1

0xeaa6,	// (0x0004e021) grid_ai_shortcut_pane_ParamLimits

0xeaa6,	// (0x0004e021) grid_ai_shortcut_pane

0xeac3,	// (0x0004e03e) list_highlight_pane_cp16_ParamLimits

0xeac3,	// (0x0004e03e) list_highlight_pane_cp16

0xead0,	// (0x0004e04b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xead0,	// (0x0004e04b) list_single_idle_plugin_shortcut_pane_g1

0xeadc,	// (0x0004e057) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xeadc,	// (0x0004e057) list_single_idle_plugin_shortcut_pane_g2

0xeaf8,	// (0x0004e073) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xeaf8,	// (0x0004e073) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd53,	// (0x0004f2ce) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd53,	// (0x0004f2ce) list_single_idle_plugin_shortcut_pane_g

0xeb0d,	// (0x0004e088) cell_ai_shortcut_pane_ParamLimits

0xeb0d,	// (0x0004e088) cell_ai_shortcut_pane

0xeb23,	// (0x0004e09e) cell_ai_shortcut_pane_g1_ParamLimits

0xeb23,	// (0x0004e09e) cell_ai_shortcut_pane_g1

0x92da,	// (0x00048855) ai_gene_pane_1_cp2

0x94f0,	// (0x00048a6b) ai_gene_pane_2_cp2

0x94f8,	// (0x00048a73) list_highlight_pane_cp15

0x9501,	// (0x00048a7c) list_single_idle_plugin_calendar_pane_g1

0x94f8,	// (0x00048a73) list_highlight_pane_cp17

0x9509,	// (0x00048a84) list_single_idle_plugin_calendar_pane_g1_copy1

0x9511,	// (0x00048a8c) list_single_idle_plugin_player_pane_g1

0x6c6e,	// (0x000461e9) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5a,	// (0x0004f2d5) list_single_idle_plugin_player_pane_g

0x9519,	// (0x00048a94) list_single_idle_plugin_player_pane_t1

0x9527,	// (0x00048aa2) list_single_idle_plugin_player_pane_t2

0x9535,	// (0x00048ab0) list_single_idle_plugin_player_pane_t3

0x9543,	// (0x00048abe) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5f,	// (0x0004f2da) list_single_idle_plugin_player_pane_t

0x9551,	// (0x00048acc) wait_bar_pane_cp15

0x9559,	// (0x00048ad4) grid_ai_notification_pane

0x6c6e,	// (0x000461e9) list_single_idle_plugin_notification_pane_g1

0xeb45,	// (0x0004e0c0) cell_ai_notification_pane_ParamLimits

0xeb45,	// (0x0004e0c0) cell_ai_notification_pane

0x956f,	// (0x00048aea) cell_ai_notification_pane_g1

0x9577,	// (0x00048af2) cell_ai_notification_pane_t1

0xeb52,	// (0x0004e0cd) tb_ext_find_button_pane

0xeb5a,	// (0x0004e0d5) tb_ext_find_pane_g1

0xeb62,	// (0x0004e0dd) tb_ext_find_pane_t1

0x44c6,	// (0x00043a41) tb_ext_find_button_pane_g1

0x95a3,	// (0x00048b1e) tb_ext_find_button_pane_g2

0x0001,

0xfd68,	// (0x0004f2e3) tb_ext_find_button_pane_g

0xe972,	// (0x0004deed) main_idle_act4_pane_t1_ParamLimits

0xe988,	// (0x0004df03) main_idle_act4_pane_t2_ParamLimits

0xfd26,	// (0x0004f2a1) main_idle_act4_pane_t_ParamLimits

0xe9ba,	// (0x0004df35) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe9d2,	// (0x0004df4d) sat_plugin_idle_act4_pane_ParamLimits

0xe9d2,	// (0x0004df4d) sat_plugin_idle_act4_pane

0xeb70,	// (0x0004e0eb) sat_plugin_idle_act4_pane_t1_ParamLimits

0xeb70,	// (0x0004e0eb) sat_plugin_idle_act4_pane_t1

0xeb88,	// (0x0004e103) sat_plugin_idle_act4_pane_t2_ParamLimits

0xeb88,	// (0x0004e103) sat_plugin_idle_act4_pane_t2

0xeba0,	// (0x0004e11b) sat_plugin_idle_act4_pane_t3_ParamLimits

0xeba0,	// (0x0004e11b) sat_plugin_idle_act4_pane_t3

0xebb8,	// (0x0004e133) sat_plugin_idle_act4_pane_t4_ParamLimits

0xebb8,	// (0x0004e133) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd6d,	// (0x0004f2e8) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd6d,	// (0x0004f2e8) sat_plugin_idle_act4_pane_t

0x1112,	// (0x0004068d) popup_battery_window_ParamLimits

0x1112,	// (0x0004068d) popup_battery_window

0x385d,	// (0x00042dd8) bg_popup_sub_pane_cp25_ParamLimits

0x385d,	// (0x00042dd8) bg_popup_sub_pane_cp25

0x95f8,	// (0x00048b73) popup_battery_window_g1_ParamLimits

0x95f8,	// (0x00048b73) popup_battery_window_g1

0x9604,	// (0x00048b7f) popup_battery_window_t1_ParamLimits

0x9604,	// (0x00048b7f) popup_battery_window_t1

0x9616,	// (0x00048b91) popup_battery_window_t2_ParamLimits

0x9616,	// (0x00048b91) popup_battery_window_t2

0x0001,

0xfd76,	// (0x0004f2f1) popup_battery_window_t_ParamLimits

0xfd76,	// (0x0004f2f1) popup_battery_window_t

0xd48d,	// (0x0004ca08) midp_canvas_pane_ParamLimits

0xd4ea,	// (0x0004ca65) midp_keypad_pane_ParamLimits

0xd4ea,	// (0x0004ca65) midp_keypad_pane

0x4e17,	// (0x00044392) main_midp_pane_ParamLimits

0x739c,	// (0x00046917) signal_pane_g2_cp_ParamLimits

0xebd0,	// (0x0004e14b) aid_size_cell_midp_keypad_ParamLimits

0xebd0,	// (0x0004e14b) aid_size_cell_midp_keypad

0xebee,	// (0x0004e169) midp_keyp_game_grid_pane_ParamLimits

0xebee,	// (0x0004e169) midp_keyp_game_grid_pane

0xec15,	// (0x0004e190) midp_keyp_rocker_pane_ParamLimits

0xec15,	// (0x0004e190) midp_keyp_rocker_pane

0xec66,	// (0x0004e1e1) midp_keyp_sk_left_pane_ParamLimits

0xec66,	// (0x0004e1e1) midp_keyp_sk_left_pane

0xecba,	// (0x0004e235) midp_keyp_sk_right_pane_ParamLimits

0xecba,	// (0x0004e235) midp_keyp_sk_right_pane

0x34e0,	// (0x00042a5b) bg_button_pane_cp03

0xed0e,	// (0x0004e289) midp_keyp_sk_left_pane_g1

0x34e0,	// (0x00042a5b) bg_button_pane_cp04

0xed0e,	// (0x0004e289) midp_keyp_sk_right_pane_g1

0x78f2,	// (0x00046e6d) midp_keyp_rocker_pane_g1

0xed17,	// (0x0004e292) keyp_game_cell_pane_ParamLimits

0xed17,	// (0x0004e292) keyp_game_cell_pane

0x34e0,	// (0x00042a5b) bg_button_pane_cp02

0xed3b,	// (0x0004e2b6) keyp_game_cell_pane_g1

0xbe5c,	// (0x0004b3d7) popup_fep_vkb2_window_ParamLimits

0xbe5c,	// (0x0004b3d7) popup_fep_vkb2_window

0xc9df,	// (0x0004bf5a) aid_size_cell_vkb2_ParamLimits

0xc9df,	// (0x0004bf5a) aid_size_cell_vkb2

0xca15,	// (0x0004bf90) popup_fep_vkb2_window_g1_ParamLimits

0xca15,	// (0x0004bf90) popup_fep_vkb2_window_g1

0xca65,	// (0x0004bfe0) vkb2_area_bottom_pane_ParamLimits

0xca65,	// (0x0004bfe0) vkb2_area_bottom_pane

0xcab9,	// (0x0004c034) vkb2_area_keypad_pane_ParamLimits

0xcab9,	// (0x0004c034) vkb2_area_keypad_pane

0xcb01,	// (0x0004c07c) vkb2_area_top_pane_ParamLimits

0xcb01,	// (0x0004c07c) vkb2_area_top_pane

0xcb87,	// (0x0004c102) vkb2_top_entry_pane_ParamLimits

0xcb87,	// (0x0004c102) vkb2_top_entry_pane

0xcbb4,	// (0x0004c12f) vkb2_top_grid_left_pane_ParamLimits

0xcbb4,	// (0x0004c12f) vkb2_top_grid_left_pane

0xcbd4,	// (0x0004c14f) vkb2_top_grid_right_pane_ParamLimits

0xcbd4,	// (0x0004c14f) vkb2_top_grid_right_pane

0x2c53,	// (0x000421ce) vkb2_cell_keypad_pane_ParamLimits

0x2c53,	// (0x000421ce) vkb2_cell_keypad_pane

0xcc1a,	// (0x0004c195) vkb2_area_bottom_grid_pane_ParamLimits

0xcc1a,	// (0x0004c195) vkb2_area_bottom_grid_pane

0xcc44,	// (0x0004c1bf) vkb2_area_bottom_pane_g1_ParamLimits

0xcc44,	// (0x0004c1bf) vkb2_area_bottom_pane_g1

0xcc6a,	// (0x0004c1e5) vkb2_area_bottom_pane_g2_ParamLimits

0xcc6a,	// (0x0004c1e5) vkb2_area_bottom_pane_g2

0xcc9b,	// (0x0004c216) vkb2_area_bottom_pane_g3_ParamLimits

0xcc9b,	// (0x0004c216) vkb2_area_bottom_pane_g3

0x0002,

0xfd7b,	// (0x0004f2f6) vkb2_area_bottom_pane_g_ParamLimits

0xfd7b,	// (0x0004f2f6) vkb2_area_bottom_pane_g

0x2dfd,	// (0x00042378) vkb2_top_cell_left_pane_ParamLimits

0x2dfd,	// (0x00042378) vkb2_top_cell_left_pane

0xed44,	// (0x0004e2bf) vkb2_top_entry_pane_g1_ParamLimits

0xed44,	// (0x0004e2bf) vkb2_top_entry_pane_g1

0xed52,	// (0x0004e2cd) vkb2_top_entry_pane_t1_ParamLimits

0xed52,	// (0x0004e2cd) vkb2_top_entry_pane_t1

0x97c7,	// (0x00048d42) vkb2_top_entry_pane_t2_ParamLimits

0x97c7,	// (0x00048d42) vkb2_top_entry_pane_t2

0x97f9,	// (0x00048d74) vkb2_top_entry_pane_t3_ParamLimits

0x97f9,	// (0x00048d74) vkb2_top_entry_pane_t3

0x0002,

0xfd82,	// (0x0004f2fd) vkb2_top_entry_pane_t_ParamLimits

0xfd82,	// (0x0004f2fd) vkb2_top_entry_pane_t

0xcd05,	// (0x0004c280) vkb2_top_grid_right_pane_g1_ParamLimits

0xcd05,	// (0x0004c280) vkb2_top_grid_right_pane_g1

0x2e60,	// (0x000423db) vkb2_top_grid_right_pane_g2_ParamLimits

0x2e60,	// (0x000423db) vkb2_top_grid_right_pane_g2

0x2e78,	// (0x000423f3) vkb2_top_grid_right_pane_g3_ParamLimits

0x2e78,	// (0x000423f3) vkb2_top_grid_right_pane_g3

0xcd1b,	// (0x0004c296) vkb2_top_grid_right_pane_g4_ParamLimits

0xcd1b,	// (0x0004c296) vkb2_top_grid_right_pane_g4

0x0003,

0xfd89,	// (0x0004f304) vkb2_top_grid_right_pane_g_ParamLimits

0xfd89,	// (0x0004f304) vkb2_top_grid_right_pane_g

0x2ea6,	// (0x00042421) vkb2_top_cell_left_pane_g1

0x2ebd,	// (0x00042438) vkb2_cell_keypad_pane_g1_ParamLimits

0x2ebd,	// (0x00042438) vkb2_cell_keypad_pane_g1

0x981d,	// (0x00048d98) vkb2_cell_keypad_pane_t1_ParamLimits

0x981d,	// (0x00048d98) vkb2_cell_keypad_pane_t1

0x2ecb,	// (0x00042446) vkb2_cell_bottom_grid_pane_ParamLimits

0x2ecb,	// (0x00042446) vkb2_cell_bottom_grid_pane

0x2f04,	// (0x0004247f) vkb2_cell_bottom_grid_pane_g1

0xea03,	// (0x0004df7e) aid_call2_pane_cp02

0xea0b,	// (0x0004df86) aid_call_pane_cp02

0xea13,	// (0x0004df8e) clock_digital_number_pane_cp10

0xea1b,	// (0x0004df96) clock_digital_number_pane_cp11

0xea23,	// (0x0004df9e) clock_digital_number_pane_cp12

0xea2b,	// (0x0004dfa6) clock_digital_number_pane_cp13

0xea33,	// (0x0004dfae) clock_digital_separator_pane_cp10

0x44c6,	// (0x00043a41) popup_clock_digital_analogue_window_cp2_g1

0x44c6,	// (0x00043a41) popup_clock_digital_analogue_window_cp2_g2

0xea3b,	// (0x0004dfb6) popup_clock_digital_analogue_window_cp2_g3

0x44c6,	// (0x00043a41) popup_clock_digital_analogue_window_cp2_g4

0xea3b,	// (0x0004dfb6) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3e,	// (0x0004f2b9) popup_clock_digital_analogue_window_cp2_g

0xea43,	// (0x0004dfbe) popup_clock_digital_analogue_window_cp2_t1

0xea51,	// (0x0004dfcc) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd49,	// (0x0004f2c4) popup_clock_digital_analogue_window_cp2_t

0x78f2,	// (0x00046e6d) clock_digital_number_pane_cp10_g1

0x78f2,	// (0x00046e6d) clock_digital_number_pane_cp10_g2

0x0001,

0xfb31,	// (0x0004f0ac) clock_digital_number_pane_cp10_g

0x78f2,	// (0x00046e6d) clock_digital_separator_pane_cp10_g1

0x78f2,	// (0x00046e6d) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb31,	// (0x0004f0ac) clock_digital_separator_pane_cp10_g

0x9223,	// (0x0004879e) uniindi_top_pane_g3

0x9234,	// (0x000487af) uniindi_top_pane_g4

0x2cde,	// (0x00042259) vkb2_row_keypad_pane_ParamLimits

0x2cde,	// (0x00042259) vkb2_row_keypad_pane

0x2f20,	// (0x0004249b) vkb2_cell_t_keypad_pane_ParamLimits

0x2f20,	// (0x0004249b) vkb2_cell_t_keypad_pane

0x2f30,	// (0x000424ab) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2f30,	// (0x000424ab) vkb2_cell_t_keypad_pane_cp08

0x2f43,	// (0x000424be) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2f43,	// (0x000424be) vkb2_cell_t_keypad_pane_cp09

0x2f57,	// (0x000424d2) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2f57,	// (0x000424d2) vkb2_cell_t_keypad_pane_cp01

0x2f68,	// (0x000424e3) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2f68,	// (0x000424e3) vkb2_cell_t_keypad_pane_cp02

0x2f79,	// (0x000424f4) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2f79,	// (0x000424f4) vkb2_cell_t_keypad_pane_cp03

0x2f8a,	// (0x00042505) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2f8a,	// (0x00042505) vkb2_cell_t_keypad_pane_cp04

0x2f9b,	// (0x00042516) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2f9b,	// (0x00042516) vkb2_cell_t_keypad_pane_cp05

0x2fac,	// (0x00042527) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2fac,	// (0x00042527) vkb2_cell_t_keypad_pane_cp06

0x2fbd,	// (0x00042538) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2fbd,	// (0x00042538) vkb2_cell_t_keypad_pane_cp07

0x2fce,	// (0x00042549) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2fce,	// (0x00042549) vkb2_cell_t_keypad_pane_cp10

0x7b70,	// (0x000470eb) vkb2_cell_t_keypad_pane_g1

0x9834,	// (0x00048daf) vkb2_cell_t_keypad_pane_t1

0x34e0,	// (0x00042a5b) popup_grid_graphic2_window

0xed8b,	// (0x0004e306) aid_size_cell_graphic2_ParamLimits

0xed8b,	// (0x0004e306) aid_size_cell_graphic2

0xedc9,	// (0x0004e344) bg_popup_window_pane_cp21_ParamLimits

0xedc9,	// (0x0004e344) bg_popup_window_pane_cp21

0xedd7,	// (0x0004e352) graphic2_pages_pane_ParamLimits

0xedd7,	// (0x0004e352) graphic2_pages_pane

0xee2d,	// (0x0004e3a8) grid_graphic2_control_pane_ParamLimits

0xee2d,	// (0x0004e3a8) grid_graphic2_control_pane

0xee75,	// (0x0004e3f0) grid_graphic2_pane_ParamLimits

0xee75,	// (0x0004e3f0) grid_graphic2_pane

0xeefc,	// (0x0004e477) cell_graphic2_pane

0x34e0,	// (0x00042a5b) main_comp_mode_pane

0x8aa3,	// (0x0004801e) list_ai3_gene_pane_ParamLimits

0xe74a,	// (0x0004dcc5) bg_popup_window_pane_cp19_ParamLimits

0x8e79,	// (0x000483f4) bg_touch_area_indi_pane_ParamLimits

0x8e79,	// (0x000483f4) bg_touch_area_indi_pane

0x8e8f,	// (0x0004840a) bg_touch_area_indi_pane_cp01_ParamLimits

0x8e8f,	// (0x0004840a) bg_touch_area_indi_pane_cp01

0x8ea5,	// (0x00048420) bg_touch_area_indi_pane_cp02_ParamLimits

0x8ea5,	// (0x00048420) bg_touch_area_indi_pane_cp02

0x8ebd,	// (0x00048438) bg_touch_area_indi_pane_cp03_ParamLimits

0x8ebd,	// (0x00048438) bg_touch_area_indi_pane_cp03

0x8ed7,	// (0x00048452) popup_slider_window_g1_ParamLimits

0x8ef3,	// (0x0004846e) popup_slider_window_g2_ParamLimits

0x8f0f,	// (0x0004848a) popup_slider_window_g3_ParamLimits

0xfcd3,	// (0x0004f24e) popup_slider_window_g_ParamLimits

0x8f6b,	// (0x000484e6) popup_slider_window_t1_ParamLimits

0x8fdf,	// (0x0004855a) small_volume_slider_vertical_pane_ParamLimits

0xeefc,	// (0x0004e477) cell_graphic2_pane_ParamLimits

0xef59,	// (0x0004e4d4) bg_button_pane_cp10_ParamLimits

0xef59,	// (0x0004e4d4) bg_button_pane_cp10

0xef6c,	// (0x0004e4e7) bg_button_pane_cp11_ParamLimits

0xef6c,	// (0x0004e4e7) bg_button_pane_cp11

0xef7f,	// (0x0004e4fa) graphic2_pages_pane_g1_ParamLimits

0xef7f,	// (0x0004e4fa) graphic2_pages_pane_g1

0xef9a,	// (0x0004e515) graphic2_pages_pane_g2_ParamLimits

0xef9a,	// (0x0004e515) graphic2_pages_pane_g2

0x0001,

0xfd97,	// (0x0004f312) graphic2_pages_pane_g_ParamLimits

0xfd97,	// (0x0004f312) graphic2_pages_pane_g

0xefb2,	// (0x0004e52d) graphic2_pages_pane_t1_ParamLimits

0xefb2,	// (0x0004e52d) graphic2_pages_pane_t1

0xefca,	// (0x0004e545) cell_graphic2_control_pane_ParamLimits

0xefca,	// (0x0004e545) cell_graphic2_control_pane

0xeffc,	// (0x0004e577) cell_graphic2_pane_g1_ParamLimits

0xeffc,	// (0x0004e577) cell_graphic2_pane_g1

0xe0f9,	// (0x0004d674) cell_graphic2_pane_g2_ParamLimits

0xe0f9,	// (0x0004d674) cell_graphic2_pane_g2

0xe579,	// (0x0004daf4) cell_graphic2_pane_g3_ParamLimits

0xe579,	// (0x0004daf4) cell_graphic2_pane_g3

0xe106,	// (0x0004d681) cell_graphic2_pane_g4_ParamLimits

0xe106,	// (0x0004d681) cell_graphic2_pane_g4

0xf009,	// (0x0004e584) cell_graphic2_pane_g5_ParamLimits

0xf009,	// (0x0004e584) cell_graphic2_pane_g5

0x0004,

0xfd9c,	// (0x0004f317) cell_graphic2_pane_g_ParamLimits

0xfd9c,	// (0x0004f317) cell_graphic2_pane_g

0xf029,	// (0x0004e5a4) cell_graphic2_pane_t1_ParamLimits

0xf029,	// (0x0004e5a4) cell_graphic2_pane_t1

0x600e,	// (0x00045589) grid_highlight_pane_cp11_ParamLimits

0x600e,	// (0x00045589) grid_highlight_pane_cp11

0x385d,	// (0x00042dd8) bg_button_pane_cp05

0xf05e,	// (0x0004e5d9) cell_graphic2_control_pane_g1

0x78f2,	// (0x00046e6d) bg_touch_area_indi_pane_g1

0x9b04,	// (0x0004907f) aid_cmod_rocker_key_size

0x9b0e,	// (0x00049089) aid_cmode_itu_key_size

0x9b18,	// (0x00049093) main_cmode_video_pane

0x9b22,	// (0x0004909d) main_comp_mode_itu_pane

0x9b2e,	// (0x000490a9) main_comp_mode_rocker_pane

0x9b3a,	// (0x000490b5) cell_cmode_rocker_pane_ParamLimits

0x9b3a,	// (0x000490b5) cell_cmode_rocker_pane

0x9b4c,	// (0x000490c7) cell_cmode_itu_pane_ParamLimits

0x9b4c,	// (0x000490c7) cell_cmode_itu_pane

0x3e4f,	// (0x000433ca) bg_button_pane_cp06_ParamLimits

0x3e4f,	// (0x000433ca) bg_button_pane_cp06

0x7b70,	// (0x000470eb) cell_cmode_rocker_pane_g1_ParamLimits

0x7b70,	// (0x000470eb) cell_cmode_rocker_pane_g1

0x9083,	// (0x000485fe) cell_cmode_rocker_pane_g2_ParamLimits

0x9083,	// (0x000485fe) cell_cmode_rocker_pane_g2

0x0001,

0xfdac,	// (0x0004f327) cell_cmode_rocker_pane_g_ParamLimits

0xfdac,	// (0x0004f327) cell_cmode_rocker_pane_g

0x34e0,	// (0x00042a5b) bg_button_pane_cp07

0x9b61,	// (0x000490dc) cell_cmode_itu_pane_g1

0x9b6a,	// (0x000490e5) cell_cmode_itu_pane_t1

0x9b78,	// (0x000490f3) cell_cmode_itu_pane_t2

0x0001,

0xfdb1,	// (0x0004f32c) cell_cmode_itu_pane_t

0x92a6,	// (0x00048821) aid_touch_ctrl_left

0x92ae,	// (0x00048829) aid_touch_ctrl_right

0x34e0,	// (0x00042a5b) compa_mode_pane

0xf084,	// (0x0004e5ff) aid_cmod_rocker_key_size_cp

0xf08e,	// (0x0004e609) aid_cmode_itu_key_size_cp

0x9b9a,	// (0x00049115) compa_mode_pane_g1

0x9ba2,	// (0x0004911d) compa_mode_pane_g2

0x9baa,	// (0x00049125) compa_mode_pane_g3

0x0002,

0xfdb6,	// (0x0004f331) compa_mode_pane_g

0xf098,	// (0x0004e613) main_comp_mode_itu_pane_cp

0xf0a0,	// (0x0004e61b) main_comp_mode_rocker_pane_cp

0xf0a8,	// (0x0004e623) cell_cmode_itu_pane_cp_ParamLimits

0xf0a8,	// (0x0004e623) cell_cmode_itu_pane_cp

0xf0bd,	// (0x0004e638) cell_cmode_rocker_pane_cp_ParamLimits

0xf0bd,	// (0x0004e638) cell_cmode_rocker_pane_cp

0x3e4f,	// (0x000433ca) bg_button_pane_cp06_cp_ParamLimits

0x3e4f,	// (0x000433ca) bg_button_pane_cp06_cp

0x7b70,	// (0x000470eb) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7b70,	// (0x000470eb) cell_cmode_rocker_pane_g1_cp

0x78f2,	// (0x00046e6d) cell_cmode_rocker_pane_g2_cp

0x34e0,	// (0x00042a5b) bg_button_pane_cp07_cp

0xf0cf,	// (0x0004e64a) cell_cmode_itu_pane_g1_cp

0xf0d8,	// (0x0004e653) cell_cmode_itu_pane_t1_cp

0xf0d8,	// (0x0004e653) cell_cmode_itu_pane_t2_cp

0xdd89,	// (0x0004d304) settings_code_pane_cp2

0x35d4,	// (0x00042b4f) bg_popup_window_pane_cp3_ParamLimits

0x3a37,	// (0x00042fb2) heading_pane_cp3_ParamLimits

0x3a43,	// (0x00042fbe) listscroll_popup_graphic_pane_ParamLimits

0x251a,	// (0x00041a95) fep_hwr_aid_pane_ParamLimits

0x29c0,	// (0x00041f3b) aid_touch_sctrl_top_ParamLimits

0x29cd,	// (0x00041f48) sctrl_sk_top_pane_g1_ParamLimits

0x7b70,	// (0x000470eb) sctrl_sk_top_pane_g2_ParamLimits

0xfcec,	// (0x0004f267) sctrl_sk_top_pane_g_ParamLimits

0x29da,	// (0x00041f55) sctrl_sk_top_pane_t1_ParamLimits

0x29c0,	// (0x00041f3b) aid_touch_sctrl_bottom_ParamLimits

0x29da,	// (0x00041f55) sctrl_sk_bottom_pane_t1_ParamLimits

0x91ef,	// (0x0004876a) aid_area_touch_clock

0xcb49,	// (0x0004c0c4) aid_vkb2_area_top_pane_cell_ParamLimits

0xcb49,	// (0x0004c0c4) aid_vkb2_area_top_pane_cell

0xcbf4,	// (0x0004c16f) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcbf4,	// (0x0004c16f) aid_vkb2_area_bottom_pane_cell

0x977f,	// (0x00048cfa) popup_char_count_window

0x9bf7,	// (0x00049172) popup_char_count_window_g1

0x9c00,	// (0x0004917b) popup_char_count_window_g2

0x9c09,	// (0x00049184) popup_char_count_window_g3

0x0002,

0xfdbd,	// (0x0004f338) popup_char_count_window_g

0x9c12,	// (0x0004918d) popup_char_count_window_t1

0x2a7b,	// (0x00041ff6) popup_fep_char_preview_window_ParamLimits

0x2a7b,	// (0x00041ff6) popup_fep_char_preview_window

0xcb69,	// (0x0004c0e4) vkb2_top_candi_pane_ParamLimits

0xcb69,	// (0x0004c0e4) vkb2_top_candi_pane

0xf0e6,	// (0x0004e661) cell_vkb2_top_candi_pane_ParamLimits

0xf0e6,	// (0x0004e661) cell_vkb2_top_candi_pane

0x599a,	// (0x00044f15) bg_popup_fep_char_preview_window_ParamLimits

0x599a,	// (0x00044f15) bg_popup_fep_char_preview_window

0x2fe3,	// (0x0004255e) popup_fep_char_preview_window_t1_ParamLimits

0x2fe3,	// (0x0004255e) popup_fep_char_preview_window_t1

0x9c6d,	// (0x000491e8) bg_popup_fep_char_preview_window_g1

0x9c75,	// (0x000491f0) bg_popup_fep_char_preview_window_g2

0x9c7d,	// (0x000491f8) bg_popup_fep_char_preview_window_g3

0x9c85,	// (0x00049200) bg_popup_fep_char_preview_window_g4

0x9c8d,	// (0x00049208) bg_popup_fep_char_preview_window_g5

0x301d,	// (0x00042598) bg_popup_fep_char_preview_window_g6

0x9c95,	// (0x00049210) bg_popup_fep_char_preview_window_g7

0x9c9d,	// (0x00049218) bg_popup_fep_char_preview_window_g8

0x9ca5,	// (0x00049220) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdc4,	// (0x0004f33f) bg_popup_fep_char_preview_window_g

0x7b70,	// (0x000470eb) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7b70,	// (0x000470eb) cell_vkb2_top_candi_pane_g1

0x7fce,	// (0x00047549) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7fce,	// (0x00047549) cell_vkb2_top_candi_pane_g2

0x7fef,	// (0x0004756a) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7fef,	// (0x0004756a) cell_vkb2_top_candi_pane_g3

0x3025,	// (0x000425a0) cell_vkb2_top_candi_pane_g4_ParamLimits

0x3025,	// (0x000425a0) cell_vkb2_top_candi_pane_g4

0x94cf,	// (0x00048a4a) cell_vkb2_top_candi_pane_g5_ParamLimits

0x94cf,	// (0x00048a4a) cell_vkb2_top_candi_pane_g5

0x9083,	// (0x000485fe) cell_vkb2_top_candi_pane_g6_ParamLimits

0x9083,	// (0x000485fe) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd7,	// (0x0004f352) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd7,	// (0x0004f352) cell_vkb2_top_candi_pane_g

0x3046,	// (0x000425c1) cell_vkb2_top_candi_pane_t1

0x22af,	// (0x0004182a) aid_size_touch_slider_mark_ParamLimits

0x22af,	// (0x0004182a) aid_size_touch_slider_mark

0xee13,	// (0x0004e38e) grid_graphic2_catg_pane_ParamLimits

0xee13,	// (0x0004e38e) grid_graphic2_catg_pane

0xeecf,	// (0x0004e44a) popup_grid_graphic2_window_t1_ParamLimits

0xeecf,	// (0x0004e44a) popup_grid_graphic2_window_t1

0xeee5,	// (0x0004e460) popup_grid_graphic2_window_t2_ParamLimits

0xeee5,	// (0x0004e460) popup_grid_graphic2_window_t2

0x0001,

0xfd92,	// (0x0004f30d) popup_grid_graphic2_window_t_ParamLimits

0xfd92,	// (0x0004f30d) popup_grid_graphic2_window_t

0x385d,	// (0x00042dd8) bg_button_pane_cp05_ParamLimits

0xf05e,	// (0x0004e5d9) cell_graphic2_control_pane_g1_ParamLimits

0xf14c,	// (0x0004e6c7) cell_graphic2_catg_pane_ParamLimits

0xf14c,	// (0x0004e6c7) cell_graphic2_catg_pane

0x34e0,	// (0x00042a5b) bg_button_pane_cp12

0xf15e,	// (0x0004e6d9) cell_graphic2_catg_pane_g1

0x91bb,	// (0x00048736) cell_tb_ext_pane_t1_ParamLimits

0x2e1d,	// (0x00042398) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2e1d,	// (0x00042398) vkb2_top_cell_right_narrow_pane

0x2e35,	// (0x000423b0) vkb2_top_cell_right_wide_pane_ParamLimits

0x2e35,	// (0x000423b0) vkb2_top_cell_right_wide_pane

0x250c,	// (0x00041a87) bg_vkb2_func_pane_ParamLimits

0x250c,	// (0x00041a87) bg_vkb2_func_pane

0x2ea6,	// (0x00042421) vkb2_top_cell_left_pane_g1_ParamLimits

0x250c,	// (0x00041a87) bg_vkb2_fuc_pane_cp03_ParamLimits

0x250c,	// (0x00041a87) bg_vkb2_fuc_pane_cp03

0x2f04,	// (0x0004247f) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x5329,	// (0x000448a4) bg_vkb2_func_pane_g1

0x5331,	// (0x000448ac) bg_vkb2_func_pane_g2

0x5341,	// (0x000448bc) bg_vkb2_func_pane_g3

0x5339,	// (0x000448b4) bg_vkb2_func_pane_g4

0x5349,	// (0x000448c4) bg_vkb2_func_pane_g5

0x5351,	// (0x000448cc) bg_vkb2_func_pane_g6

0x5359,	// (0x000448d4) bg_vkb2_func_pane_g7

0x5361,	// (0x000448dc) bg_vkb2_func_pane_g8

0x5321,	// (0x0004489c) bg_vkb2_func_pane_g9

0x0008,

0xfde4,	// (0x0004f35f) bg_vkb2_func_pane_g

0x250c,	// (0x00041a87) bg_vkb2_fuc_pane_cp01_ParamLimits

0x250c,	// (0x00041a87) bg_vkb2_fuc_pane_cp01

0x2ea6,	// (0x00042421) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2ea6,	// (0x00042421) vkb2_top_cell_right_wide_pane_g1

0x250c,	// (0x00041a87) bg_vkb2_fuc_pane_cp02_ParamLimits

0x250c,	// (0x00041a87) bg_vkb2_fuc_pane_cp02

0x2f04,	// (0x0004247f) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2f04,	// (0x0004247f) vkb2_top_cell_right_narrow_pane_g1

0xe68a,	// (0x0004dc05) aid_touch_area_decrease_ParamLimits

0xe68a,	// (0x0004dc05) aid_touch_area_decrease

0xe6be,	// (0x0004dc39) aid_touch_area_increase_ParamLimits

0xe6be,	// (0x0004dc39) aid_touch_area_increase

0xe6e6,	// (0x0004dc61) aid_touch_area_mute_ParamLimits

0xe6e6,	// (0x0004dc61) aid_touch_area_mute

0xe716,	// (0x0004dc91) aid_touch_area_slider_ParamLimits

0xe716,	// (0x0004dc91) aid_touch_area_slider

0xe756,	// (0x0004dcd1) popup_slider_window_g4_ParamLimits

0xe756,	// (0x0004dcd1) popup_slider_window_g4

0xe77e,	// (0x0004dcf9) popup_slider_window_g5_ParamLimits

0xe77e,	// (0x0004dcf9) popup_slider_window_g5

0xe7b2,	// (0x0004dd2d) popup_slider_window_g6_ParamLimits

0xe7b2,	// (0x0004dd2d) popup_slider_window_g6

0x8f99,	// (0x00048514) popup_slider_window_t2_ParamLimits

0x8f99,	// (0x00048514) popup_slider_window_t2

0x0001,

0xfce0,	// (0x0004f25b) popup_slider_window_t_ParamLimits

0xfce0,	// (0x0004f25b) popup_slider_window_t

0xe7ce,	// (0x0004dd49) slider_pane_ParamLimits

0xe7ce,	// (0x0004dd49) slider_pane

0x9cc8,	// (0x00049243) slider_pane_g1_ParamLimits

0x9cc8,	// (0x00049243) slider_pane_g1

0x9cdc,	// (0x00049257) slider_pane_g2_ParamLimits

0x9cdc,	// (0x00049257) slider_pane_g2

0x9cf2,	// (0x0004926d) slider_pane_g3_ParamLimits

0x9cf2,	// (0x0004926d) slider_pane_g3

0x0003,

0xfdf7,	// (0x0004f372) slider_pane_g_ParamLimits

0xfdf7,	// (0x0004f372) slider_pane_g

0xc78f,	// (0x0004bd0a) popup_tb_float_extension_window_ParamLimits

0xc78f,	// (0x0004bd0a) popup_tb_float_extension_window

0x9d1e,	// (0x00049299) aid_size_cell_tb_float_ext

0x34e0,	// (0x00042a5b) bg_popup_sub_window_cp28

0x9d2a,	// (0x000492a5) grid_tb_float_ext_pane

0x9d34,	// (0x000492af) cell_tb_float_ext_pane_ParamLimits

0x9d34,	// (0x000492af) cell_tb_float_ext_pane

0x9d4e,	// (0x000492c9) cell_tb_float_ext_pane_g1

0x9d57,	// (0x000492d2) grid_highlight_pane_cp12

0xc8da,	// (0x0004be55) cell_last_hwr_side_pane_ParamLimits

0xc8da,	// (0x0004be55) cell_last_hwr_side_pane

0x78f2,	// (0x00046e6d) cell_last_hwr_side_pane_g1

0x9d60,	// (0x000492db) cell_last_hwr_side_pane_g2

0x0001,

0xfe00,	// (0x0004f37b) cell_last_hwr_side_pane_g

0xccd0,	// (0x0004c24b) vkb2_area_bottom_space_btn_pane_ParamLimits

0xccd0,	// (0x0004c24b) vkb2_area_bottom_space_btn_pane

0x7b70,	// (0x000470eb) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9834,	// (0x00048daf) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x3046,	// (0x000425c1) cell_vkb2_top_candi_pane_t1_ParamLimits

0x3065,	// (0x000425e0) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x3065,	// (0x000425e0) vkb2_area_bottom_space_btn_pane_g1

0x309f,	// (0x0004261a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x309f,	// (0x0004261a) vkb2_area_bottom_space_btn_pane_g2

0x30d5,	// (0x00042650) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x30d5,	// (0x00042650) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe05,	// (0x0004f380) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe05,	// (0x0004f380) vkb2_area_bottom_space_btn_pane_g

0x25c1,	// (0x00041b3c) cel_fep_hwr_func_pane_ParamLimits

0x25c1,	// (0x00041b3c) cel_fep_hwr_func_pane

0xc8af,	// (0x0004be2a) cell_hwr_side_button_pane_ParamLimits

0xc8af,	// (0x0004be2a) cell_hwr_side_button_pane

0x91ef,	// (0x0004876a) aid_area_touch_clock_ParamLimits

0x385d,	// (0x00042dd8) bg_uniindi_top_pane_ParamLimits

0x9201,	// (0x0004877c) uniindi_top_pane_g1_ParamLimits

0x9217,	// (0x00048792) uniindi_top_pane_g2_ParamLimits

0x9223,	// (0x0004879e) uniindi_top_pane_g3_ParamLimits

0x9234,	// (0x000487af) uniindi_top_pane_g4_ParamLimits

0xfd18,	// (0x0004f293) uniindi_top_pane_g_ParamLimits

0x9241,	// (0x000487bc) uniindi_top_pane_t1_ParamLimits

0x385d,	// (0x00042dd8) bg_vkb2_func_pane_cp01_ParamLimits

0x385d,	// (0x00042dd8) bg_vkb2_func_pane_cp01

0x9d69,	// (0x000492e4) cel_fep_hwr_func_pane_g1_ParamLimits

0x9d69,	// (0x000492e4) cel_fep_hwr_func_pane_g1

0x385d,	// (0x00042dd8) bg_vkb2_func_pane_cp02_ParamLimits

0x385d,	// (0x00042dd8) bg_vkb2_func_pane_cp02

0x9d69,	// (0x000492e4) cell_hwr_side_button_pane_g1_ParamLimits

0x9d69,	// (0x000492e4) cell_hwr_side_button_pane_g1

0x51a2,	// (0x0004471d) status_pane_g4_ParamLimits

0x51a2,	// (0x0004471d) status_pane_g4

0x51bc,	// (0x00044737) status_pane_t1

0x762c,	// (0x00046ba7) form2_midp_gauge_slider_cont_pane

0x7634,	// (0x00046baf) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe041,	// (0x0004d5bc) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe053,	// (0x0004d5ce) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae4,	// (0x0004f05f) form2_midp_gauge_slider_pane_t_ParamLimits

0x766a,	// (0x00046be5) form2_midp_slider_pane_ParamLimits

0x2a3b,	// (0x00041fb6) aid_size_cell_func_vkb2_ParamLimits

0x2a3b,	// (0x00041fb6) aid_size_cell_func_vkb2

0x9d0a,	// (0x00049285) slider_pane_g4_ParamLimits

0x9d0a,	// (0x00049285) slider_pane_g4

0xcd31,	// (0x0004c2ac) form2_midp_gauge_slider_pane_t2_cp01

0xcd3f,	// (0x0004c2ba) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcd3f,	// (0x0004c2ba) form2_midp_gauge_slider_pane_t3_cp01

0x314a,	// (0x000426c5) form2_midp_slider_pane_cp01

0x34e0,	// (0x00042a5b) navi_smil_pane

0x9da2,	// (0x0004931d) navi_smil_pane_g1

0x9daa,	// (0x00049325) navi_smil_pane_t1

0x9d77,	// (0x000492f2) form2_midp_slider_pane_g1

0x9d80,	// (0x000492fb) form2_midp_slider_pane_g2

0x9d88,	// (0x00049303) form2_midp_slider_pane_g3

0x9d77,	// (0x000492f2) form2_midp_slider_pane_g4

0xf167,	// (0x0004e6e2) form2_midp_slider_pane_g5

0x0004,

0xfe0e,	// (0x0004f389) form2_midp_slider_pane_g

0x310f,	// (0x0004268a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x310f,	// (0x0004268a) vkb2_area_bottom_space_btn_pane_g4

0xd75d,	// (0x0004ccd8) lc0_navi_pane_ParamLimits

0xd75d,	// (0x0004ccd8) lc0_navi_pane

0xd7c7,	// (0x0004cd42) lc0_stat_indi_pane_ParamLimits

0xd7c7,	// (0x0004cd42) lc0_stat_indi_pane

0xd7dc,	// (0x0004cd57) ls0_title_pane_ParamLimits

0xd7dc,	// (0x0004cd57) ls0_title_pane

0x3e4f,	// (0x000433ca) bg_popup_sub_pane_cp14_ParamLimits

0x91d6,	// (0x00048751) list_uniindi_pane_ParamLimits

0x91e2,	// (0x0004875d) uniindi_top_pane_ParamLimits

0x927e,	// (0x000487f9) list_single_uniindi_pane_g1_ParamLimits

0x9291,	// (0x0004880c) list_single_uniindi_pane_t1_ParamLimits

0xcd5c,	// (0x0004c2d7) lc0_stat_clock_pane_ParamLimits

0xcd5c,	// (0x0004c2d7) lc0_stat_clock_pane

0xf172,	// (0x0004e6ed) lc0_stat_indi_pane_g1_ParamLimits

0xf172,	// (0x0004e6ed) lc0_stat_indi_pane_g1

0xf17f,	// (0x0004e6fa) lc0_stat_indi_pane_g2_ParamLimits

0xf17f,	// (0x0004e6fa) lc0_stat_indi_pane_g2

0x0001,

0xfe19,	// (0x0004f394) lc0_stat_indi_pane_g_ParamLimits

0xfe19,	// (0x0004f394) lc0_stat_indi_pane_g

0xcd69,	// (0x0004c2e4) lc0_uni_indicator_pane_ParamLimits

0xcd69,	// (0x0004c2e4) lc0_uni_indicator_pane

0xf18c,	// (0x0004e707) ls0_title_pane_g1_ParamLimits

0xf18c,	// (0x0004e707) ls0_title_pane_g1

0xf1a0,	// (0x0004e71b) ls0_title_pane_t1_ParamLimits

0xf1a0,	// (0x0004e71b) ls0_title_pane_t1

0xcd76,	// (0x0004c2f1) lc0_uni_indicator_pane_g1_ParamLimits

0xcd76,	// (0x0004c2f1) lc0_uni_indicator_pane_g1

0x9e1c,	// (0x00049397) lc0_stat_clock_pane_t1

0x34e0,	// (0x00042a5b) main_ai5_pane

0x9e2a,	// (0x000493a5) ai5_sk_pane_ParamLimits

0x9e2a,	// (0x000493a5) ai5_sk_pane

0xf1ce,	// (0x0004e749) cell_ai5_widget_pane_ParamLimits

0xf1ce,	// (0x0004e749) cell_ai5_widget_pane

0x9eed,	// (0x00049468) aid_size_cell_widget_grid

0x9f03,	// (0x0004947e) bg_ai5_widget_pane_ParamLimits

0x9f03,	// (0x0004947e) bg_ai5_widget_pane

0x9f77,	// (0x000494f2) cell_ai5_widget_pane_g2

0x9f87,	// (0x00049502) cell_ai5_widget_pane_g3

0x9f9e,	// (0x00049519) cell_ai5_widget_pane_g4

0x9faa,	// (0x00049525) cell_ai5_widget_pane_g5

0x9fb6,	// (0x00049531) cell_ai5_widget_pane_g6

0x9fc2,	// (0x0004953d) cell_ai5_widget_pane_g7

0xa00a,	// (0x00049585) cell_ai5_widget_pane_t1_ParamLimits

0xa00a,	// (0x00049585) cell_ai5_widget_pane_t1

0xa027,	// (0x000495a2) cell_ai5_widget_pane_t2_ParamLimits

0xa027,	// (0x000495a2) cell_ai5_widget_pane_t2

0xa03f,	// (0x000495ba) cell_ai5_widget_pane_t3_ParamLimits

0xa03f,	// (0x000495ba) cell_ai5_widget_pane_t3

0xa057,	// (0x000495d2) cell_ai5_widget_pane_t4_ParamLimits

0xa057,	// (0x000495d2) cell_ai5_widget_pane_t4

0xa074,	// (0x000495ef) cell_ai5_widget_pane_t5_ParamLimits

0xa074,	// (0x000495ef) cell_ai5_widget_pane_t5

0xa093,	// (0x0004960e) cell_ai5_widget_pane_t6_ParamLimits

0xa093,	// (0x0004960e) cell_ai5_widget_pane_t6

0xa0a5,	// (0x00049620) cell_ai5_widget_pane_t7_ParamLimits

0xa0a5,	// (0x00049620) cell_ai5_widget_pane_t7

0xa0be,	// (0x00049639) cell_ai5_widget_pane_t8_ParamLimits

0xa0be,	// (0x00049639) cell_ai5_widget_pane_t8

0x0009,

0xfe33,	// (0x0004f3ae) cell_ai5_widget_pane_t_ParamLimits

0xfe33,	// (0x0004f3ae) cell_ai5_widget_pane_t

0xa112,	// (0x0004968d) grid_ai5_widget_pane

0x3e4f,	// (0x000433ca) highlight_cell_ai5_widget_pane_ParamLimits

0x3e4f,	// (0x000433ca) highlight_cell_ai5_widget_pane

0xf238,	// (0x0004e7b3) ai5_sk_left_pane

0xf242,	// (0x0004e7bd) ai5_sk_middle_pane

0xf24c,	// (0x0004e7c7) ai5_sk_right_pane

0xa147,	// (0x000496c2) bg_ai5_widget_pane_g1_ParamLimits

0xa147,	// (0x000496c2) bg_ai5_widget_pane_g1

0xa153,	// (0x000496ce) bg_ai5_widget_pane_g2_ParamLimits

0xa153,	// (0x000496ce) bg_ai5_widget_pane_g2

0xa15f,	// (0x000496da) bg_ai5_widget_pane_g3_ParamLimits

0xa15f,	// (0x000496da) bg_ai5_widget_pane_g3

0xa16b,	// (0x000496e6) bg_ai5_widget_pane_g4_ParamLimits

0xa16b,	// (0x000496e6) bg_ai5_widget_pane_g4

0xa177,	// (0x000496f2) bg_ai5_widget_pane_g5_ParamLimits

0xa177,	// (0x000496f2) bg_ai5_widget_pane_g5

0xa183,	// (0x000496fe) bg_ai5_widget_pane_g6_ParamLimits

0xa183,	// (0x000496fe) bg_ai5_widget_pane_g6

0xa18f,	// (0x0004970a) bg_ai5_widget_pane_g7_ParamLimits

0xa18f,	// (0x0004970a) bg_ai5_widget_pane_g7

0xa19b,	// (0x00049716) bg_ai5_widget_pane_g8_ParamLimits

0xa19b,	// (0x00049716) bg_ai5_widget_pane_g8

0xa1a7,	// (0x00049722) bg_ai5_widget_pane_g9_ParamLimits

0xa1a7,	// (0x00049722) bg_ai5_widget_pane_g9

0x0008,

0xfe48,	// (0x0004f3c3) bg_ai5_widget_pane_g_ParamLimits

0xfe48,	// (0x0004f3c3) bg_ai5_widget_pane_g

0xa1d9,	// (0x00049754) cell_shortcut_ai5_widget_pane_ParamLimits

0xa1d9,	// (0x00049754) cell_shortcut_ai5_widget_pane

0x4ad9,	// (0x00044054) bg_cell_shortcut_ai5_widget_pane

0xa1ea,	// (0x00049765) cell_grid_ai5_widget_pane_g1

0x4ad9,	// (0x00044054) highlight_cell_shortcut_ai5_widget_pane

0x5331,	// (0x000448ac) ai5_sk_left_pane_g1

0xa1f3,	// (0x0004976e) ai5_sk_left_pane_g2

0xa1fb,	// (0x00049776) ai5_sk_left_pane_g3

0xa203,	// (0x0004977e) ai5_sk_left_pane_g4

0x0003,

0xfe5b,	// (0x0004f3d6) ai5_sk_left_pane_g

0xa20b,	// (0x00049786) ai5_sk_left_pane_t1

0x5329,	// (0x000448a4) ai5_sk_right_pane_g1

0xa219,	// (0x00049794) ai5_sk_right_pane_g2

0xa221,	// (0x0004979c) ai5_sk_right_pane_g3

0xa229,	// (0x000497a4) ai5_sk_right_pane_g4

0x0003,

0xfe64,	// (0x0004f3df) ai5_sk_right_pane_g

0xa231,	// (0x000497ac) ai5_sk_right_pane_t1

0x5329,	// (0x000448a4) ai5_sk_middle_pane_g1

0x5331,	// (0x000448ac) ai5_sk_middle_pane_g2

0x5349,	// (0x000448c4) ai5_sk_middle_pane_g3

0xa221,	// (0x0004979c) ai5_sk_middle_pane_g4

0xa1fb,	// (0x00049776) ai5_sk_middle_pane_g5

0xa23f,	// (0x000497ba) ai5_sk_middle_pane_g6

0xf256,	// (0x0004e7d1) ai5_sk_middle_pane_g7

0x0006,

0xfe6d,	// (0x0004f3e8) ai5_sk_middle_pane_g

0xd649,	// (0x0004cbc4) aid_touch_area_size_lc0_ParamLimits

0xd649,	// (0x0004cbc4) aid_touch_area_size_lc0

0x274c,	// (0x00041cc7) cell_hwr_candidate_pane_t1_ParamLimits

0x4e79,	// (0x000443f4) aid_touch_navi_pane

0xd8d5,	// (0x0004ce50) status_dt_navi_pane_ParamLimits

0xd8d5,	// (0x0004ce50) status_dt_navi_pane

0xd8ed,	// (0x0004ce68) status_dt_sta_pane_ParamLimits

0xd8ed,	// (0x0004ce68) status_dt_sta_pane

0xf25e,	// (0x0004e7d9) dt_sta_controll_pane

0xf26b,	// (0x0004e7e6) dt_sta_indi_pane

0xf278,	// (0x0004e7f3) dt_sta_title_pane

0x385d,	// (0x00042dd8) bg_dt_sta_indi_pane_ParamLimits

0x385d,	// (0x00042dd8) bg_dt_sta_indi_pane

0xf28a,	// (0x0004e805) dt_sta_battery_pane

0xf292,	// (0x0004e80d) dt_sta_indi_pane_g1

0xa291,	// (0x0004980c) dt_sta_indi_pane_g2

0xa29a,	// (0x00049815) dt_sta_indi_pane_g3

0x0002,

0xfe7c,	// (0x0004f3f7) dt_sta_indi_pane_g

0xa2a3,	// (0x0004981e) dt_sta_signal_pane

0x3e4f,	// (0x000433ca) bg_dt_sta_title_pane_ParamLimits

0x3e4f,	// (0x000433ca) bg_dt_sta_title_pane

0xa2ac,	// (0x00049827) dt_sta_title_pane_g1

0xa2b4,	// (0x0004982f) dt_sta_title_pane_t1_ParamLimits

0xa2b4,	// (0x0004982f) dt_sta_title_pane_t1

0x34e0,	// (0x00042a5b) bg_dt_sta_control_pane

0xf29b,	// (0x0004e816) dt_sta_controll_pane_g1

0xa2d2,	// (0x0004984d) bg_dt_sta_title_pane_g1

0xa2db,	// (0x00049856) bg_dt_sta_title_pane_g2

0xa2e4,	// (0x0004985f) bg_dt_sta_title_pane_g3

0x0002,

0xfe83,	// (0x0004f3fe) bg_dt_sta_title_pane_g

0x78f2,	// (0x00046e6d) bg_dt_sta_indi_pane_g1

0xa2ed,	// (0x00049868) dt_sta_signal_pane_g1

0xa2f5,	// (0x00049870) dt_sta_signal_pane_g2

0x0001,

0xfe8a,	// (0x0004f405) dt_sta_signal_pane_g

0xa2fd,	// (0x00049878) dt_sta_battery_pane_g1

0xa306,	// (0x00049881) dt_sta_battery_pane_t1

0x78f2,	// (0x00046e6d) bg_dt_sta_control_pane_g1

0x45d8,	// (0x00043b53) fep_china_uni_eep_pane

0x45e0,	// (0x00043b5b) fep_china_uni_entry_pane_ParamLimits

0x45f0,	// (0x00043b6b) popup_fep_china_uni_window_g1_ParamLimits

0x4600,	// (0x00043b7b) popup_fep_china_uni_window_g2_ParamLimits

0x4600,	// (0x00043b7b) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0004ec9d) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0004ec9d) popup_fep_china_uni_window_g

0xa315,	// (0x00049890) fep_china_uni_eep_pane_g1

0xa31d,	// (0x00049898) fep_china_uni_eep_pane_t1

0x9d99,	// (0x00049314) aid_touch_area_size_smil_player

0x4fc9,	// (0x00044544) lc0_clock_pane

0x51b0,	// (0x0004472b) status_pane_g5_ParamLimits

0x51b0,	// (0x0004472b) status_pane_g5

0xc311,	// (0x0004b88c) popup_keymap_window

0x516e,	// (0x000446e9) status_icon_pane

0x9f87,	// (0x00049502) cell_ai5_widget_pane_g3_ParamLimits

0x9f9e,	// (0x00049519) cell_ai5_widget_pane_g4_ParamLimits

0x9faa,	// (0x00049525) cell_ai5_widget_pane_g5_ParamLimits

0x9fce,	// (0x00049549) cell_ai5_widget_pane_g8_ParamLimits

0x9fce,	// (0x00049549) cell_ai5_widget_pane_g8

0x9fe2,	// (0x0004955d) cell_ai5_widget_pane_g9_ParamLimits

0x9fe2,	// (0x0004955d) cell_ai5_widget_pane_g9

0x9ff6,	// (0x00049571) cell_ai5_widget_pane_g10_ParamLimits

0x9ff6,	// (0x00049571) cell_ai5_widget_pane_g10

0xa32c,	// (0x000498a7) status_icon_pane_g1

0x34e0,	// (0x00042a5b) bg_popup_sub_pane_cp13

0xa334,	// (0x000498af) popup_keymap_window_t1

0xd5d7,	// (0x0004cb52) control_pane_g6_ParamLimits

0xd5d7,	// (0x0004cb52) control_pane_g6

0xd5e4,	// (0x0004cb5f) control_pane_g7_ParamLimits

0xd5e4,	// (0x0004cb5f) control_pane_g7

0xd5f1,	// (0x0004cb6c) control_pane_g8_ParamLimits

0xd5f1,	// (0x0004cb6c) control_pane_g8

0xf25e,	// (0x0004e7d9) dt_sta_controll_pane_ParamLimits

0xf26b,	// (0x0004e7e6) dt_sta_indi_pane_ParamLimits

0xf278,	// (0x0004e7f3) dt_sta_title_pane_ParamLimits

0x3d7b,	// (0x000432f6) aid_size_touch_scroll_bar_cale

0x1126,	// (0x000406a1) popup_discreet_window_ParamLimits

0x1126,	// (0x000406a1) popup_discreet_window

0xbea2,	// (0x0004b41d) popup_sk_window

0x599a,	// (0x00044f15) bg_popup_sub_pane_cp28_ParamLimits

0x599a,	// (0x00044f15) bg_popup_sub_pane_cp28

0xa342,	// (0x000498bd) popup_discreet_window_g1_ParamLimits

0xa342,	// (0x000498bd) popup_discreet_window_g1

0xa362,	// (0x000498dd) popup_discreet_window_t1_ParamLimits

0xa362,	// (0x000498dd) popup_discreet_window_t1

0xa380,	// (0x000498fb) popup_discreet_window_t2_ParamLimits

0xa380,	// (0x000498fb) popup_discreet_window_t2

0x0002,

0xfe8f,	// (0x0004f40a) popup_discreet_window_t_ParamLimits

0xfe8f,	// (0x0004f40a) popup_discreet_window_t

0x3181,	// (0x000426fc) popup_sk_window_g1

0x318b,	// (0x00042706) popup_sk_window_g2

0x0001,

0xfe96,	// (0x0004f411) popup_sk_window_g

0x3195,	// (0x00042710) popup_sk_window_t1

0x31a3,	// (0x0004271e) popup_sk_window_t1_copy1

0x9f77,	// (0x000494f2) cell_ai5_widget_pane_g2_ParamLimits

0xa0d0,	// (0x0004964b) cell_ai5_widget_pane_t9_ParamLimits

0xa0d0,	// (0x0004964b) cell_ai5_widget_pane_t9

0x34e0,	// (0x00042a5b) main_fep_fshwr2_pane

0xcd9d,	// (0x0004c318) aid_fshwr2_btn_pane

0xcdae,	// (0x0004c329) aid_fshwr2_syb_pane

0xcdbf,	// (0x0004c33a) aid_fshwr2_txt_pane

0xcdcb,	// (0x0004c346) fshwr2_func_candi_pane

0xcdea,	// (0x0004c365) fshwr2_hwr_syb_pane

0xce05,	// (0x0004c380) fshwr2_icf_pane

0x34e0,	// (0x00042a5b) fshwr2_icf_bg_pane

0x3223,	// (0x0004279e) fshwr2_icf_pane_t1_ParamLimits

0x3223,	// (0x0004279e) fshwr2_icf_pane_t1

0x44c6,	// (0x00043a41) fshwr2_func_candi_pane_g1

0xf2a4,	// (0x0004e81f) fshwr2_func_candi_row_pane_ParamLimits

0xf2a4,	// (0x0004e81f) fshwr2_func_candi_row_pane

0xce31,	// (0x0004c3ac) cell_fshwr2_syb_pane_ParamLimits

0xce31,	// (0x0004c3ac) cell_fshwr2_syb_pane

0x7b70,	// (0x000470eb) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7b70,	// (0x000470eb) fshwr2_hwr_syb_pane_g1

0x34e0,	// (0x00042a5b) bg_popup_call_pane_cp01

0xce47,	// (0x0004c3c2) fshwr2_func_candi_cell_pane_ParamLimits

0xce47,	// (0x0004c3c2) fshwr2_func_candi_cell_pane

0xf2bc,	// (0x0004e837) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf2bc,	// (0x0004e837) fshwr2_func_candi_cell_bg_pane

0xce7c,	// (0x0004c3f7) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xce7c,	// (0x0004c3f7) fshwr2_func_candi_cell_pane_g1

0xceab,	// (0x0004c426) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xceab,	// (0x0004c426) fshwr2_func_candi_cell_pane_t1

0x34e0,	// (0x00042a5b) bg_button_pane_cp08

0xa3ee,	// (0x00049969) cell_fshwr2_syb_bg_pane

0xcebe,	// (0x0004c439) cell_fshwr2_syb_bg_pane_g1

0xcec6,	// (0x0004c441) cell_fshwr2_syb_bg_pane_t1

0x3e4f,	// (0x000433ca) main_tmo_pane

0xdbb9,	// (0x0004d134) uni_indicator_pane_g1_ParamLimits

0xdbcf,	// (0x0004d14a) uni_indicator_pane_g2_ParamLimits

0xdbe5,	// (0x0004d160) uni_indicator_pane_g3_ParamLimits

0x64f5,	// (0x00045a70) uni_indicator_pane_g4_ParamLimits

0x64f5,	// (0x00045a70) uni_indicator_pane_g4

0x6509,	// (0x00045a84) uni_indicator_pane_g5_ParamLimits

0x6509,	// (0x00045a84) uni_indicator_pane_g5

0x6509,	// (0x00045a84) uni_indicator_pane_g6_ParamLimits

0x6509,	// (0x00045a84) uni_indicator_pane_g6

0xf921,	// (0x0004ee9c) uni_indicator_pane_g_ParamLimits

0xe666,	// (0x0004dbe1) popup_tmo_note_window_ParamLimits

0xe666,	// (0x0004dbe1) popup_tmo_note_window

0x3e4f,	// (0x000433ca) fshwr2_bg_pane

0xce9c,	// (0x0004c417) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xce9c,	// (0x0004c417) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9b,	// (0x0004f416) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9b,	// (0x0004f416) fshwr2_func_candi_cell_pane_g

0x78f2,	// (0x00046e6d) bg_popup_window_pane_cp01

0x32d8,	// (0x00042853) bg_popup_window_pane_g1_cp01

0xa3f6,	// (0x00049971) bg_popup_window_pane_cp22_ParamLimits

0xa3f6,	// (0x00049971) bg_popup_window_pane_cp22

0xa404,	// (0x0004997f) listscroll_tmo_link_pane_ParamLimits

0xa404,	// (0x0004997f) listscroll_tmo_link_pane

0xa444,	// (0x000499bf) popup_tmo_note_window_g1_ParamLimits

0xa444,	// (0x000499bf) popup_tmo_note_window_g1

0xa451,	// (0x000499cc) tmo_note_info_pane_ParamLimits

0xa451,	// (0x000499cc) tmo_note_info_pane

0xf2c8,	// (0x0004e843) list_tmo_note_info_pane_g1_ParamLimits

0xf2c8,	// (0x0004e843) list_tmo_note_info_pane_g1

0xa482,	// (0x000499fd) list_tmo_note_info_pane_g2_ParamLimits

0xa482,	// (0x000499fd) list_tmo_note_info_pane_g2

0x0001,

0xfea0,	// (0x0004f41b) list_tmo_note_info_pane_g_ParamLimits

0xfea0,	// (0x0004f41b) list_tmo_note_info_pane_g

0xa49e,	// (0x00049a19) list_tmo_note_info_text_pane_ParamLimits

0xa49e,	// (0x00049a19) list_tmo_note_info_text_pane

0xa51f,	// (0x00049a9a) list_tmo_link_pane

0xa52c,	// (0x00049aa7) scroll_pane_cp20

0xa539,	// (0x00049ab4) list_single_tmo_link_pane_ParamLimits

0xa539,	// (0x00049ab4) list_single_tmo_link_pane

0xa549,	// (0x00049ac4) list_single_tmo_link_pane_t1

0xa557,	// (0x00049ad2) list_tmo_note_info_text_pane_t1_ParamLimits

0xa557,	// (0x00049ad2) list_tmo_note_info_text_pane_t1

0xd27b,	// (0x0004c7f6) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd27b,	// (0x0004c7f6) aid_size_touch_scroll_bar_cp01

0xba36,	// (0x0004afb1) aid_size_touch_slider_marker

0xbe92,	// (0x0004b40d) popup_settings_window_ParamLimits

0xbe92,	// (0x0004b40d) popup_settings_window

0x06a9,	// (0x0003fc24) popup_candi_list_indi_window

0x4e79,	// (0x000443f4) aid_touch_navi_pane_ParamLimits

0x2994,	// (0x00041f0f) rs_clock_indi_pane

0x299d,	// (0x00041f18) sctrl_sk_bottom_pane_ParamLimits

0x29ae,	// (0x00041f29) sctrl_sk_top_pane_ParamLimits

0x2a95,	// (0x00042010) popup_fep_tooltip_window

0x9eed,	// (0x00049468) aid_size_cell_widget_grid_ParamLimits

0x9f62,	// (0x000494dd) cell_ai5_widget_pane_g1_ParamLimits

0x9f62,	// (0x000494dd) cell_ai5_widget_pane_g1

0x9fb6,	// (0x00049531) cell_ai5_widget_pane_g6_ParamLimits

0x9fc2,	// (0x0004953d) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe1e,	// (0x0004f399) cell_ai5_widget_pane_g_ParamLimits

0xfe1e,	// (0x0004f399) cell_ai5_widget_pane_g

0xa0f4,	// (0x0004966f) cell_ai5_widget_pane_t10_ParamLimits

0xa0f4,	// (0x0004966f) cell_ai5_widget_pane_t10

0xa112,	// (0x0004968d) grid_ai5_widget_pane_ParamLimits

0xa1b3,	// (0x0004972e) cell_contacts_ai5_widget_pane_ParamLimits

0xa1b3,	// (0x0004972e) cell_contacts_ai5_widget_pane

0xa395,	// (0x00049910) popup_discreet_window_t3_ParamLimits

0xa395,	// (0x00049910) popup_discreet_window_t3

0xce1d,	// (0x0004c398) popup_fshwr2_char_preview_window_ParamLimits

0xce1d,	// (0x0004c398) popup_fshwr2_char_preview_window

0xf2df,	// (0x0004e85a) tmo_note_info_pane_t1

0xf2f4,	// (0x0004e86f) tmo_note_info_pane_t2

0xf30b,	// (0x0004e886) tmo_note_info_pane_t3

0xa4fb,	// (0x00049a76) tmo_note_info_pane_t4

0xa50d,	// (0x00049a88) tmo_note_info_pane_t5

0x0004,

0xfea5,	// (0x0004f420) tmo_note_info_pane_t

0xa51f,	// (0x00049a9a) list_tmo_link_pane_ParamLimits

0xa52c,	// (0x00049aa7) scroll_pane_cp20_ParamLimits

0x34e0,	// (0x00042a5b) bg_popup_fep_char_preview_window_cp01

0xa570,	// (0x00049aeb) popup_fshwr2_char_preview_window_t1

0xa57e,	// (0x00049af9) popup_candi_list_indi_window_g1

0xa587,	// (0x00049b02) bg_cell_contacts_ai5_widget_pane

0xa593,	// (0x00049b0e) cell_contacts_ai5_widget_pane_g1

0x7f90,	// (0x0004750b) cell_contacts_ai5_widget_pane_g2

0xa5a8,	// (0x00049b23) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb0,	// (0x0004f42b) cell_contacts_ai5_widget_pane_g

0xa5b4,	// (0x00049b2f) cell_contacts_ai5_widget_pane_t1

0x3e4f,	// (0x000433ca) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf385,	// (0x0004e900) settings_container_pane

0x4ad9,	// (0x00044054) listscroll_set_pane_copy1

0x6fdb,	// (0x00046556) scroll_pane_cp121_copy1

0xa637,	// (0x00049bb2) set_content_pane_copy1

0xf391,	// (0x0004e90c) aid_height_set_list_copy1_ParamLimits

0xf391,	// (0x0004e90c) aid_height_set_list_copy1

0x6701,	// (0x00045c7c) aid_size_parent_copy1_ParamLimits

0x6701,	// (0x00045c7c) aid_size_parent_copy1

0xf39d,	// (0x0004e918) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf39d,	// (0x0004e918) button_value_adjust_pane_cp6_copy1

0x4e17,	// (0x00044392) list_highlight_pane_cp2_copy1_ParamLimits

0x4e17,	// (0x00044392) list_highlight_pane_cp2_copy1

0xf3b1,	// (0x0004e92c) list_set_pane_copy1_ParamLimits

0xf3b1,	// (0x0004e92c) list_set_pane_copy1

0xf320,	// (0x0004e89b) main_pane_set_t1_copy1_ParamLimits

0xf320,	// (0x0004e89b) main_pane_set_t1_copy1

0xf35a,	// (0x0004e8d5) main_pane_set_t2_copy1_ParamLimits

0xf35a,	// (0x0004e8d5) main_pane_set_t2_copy1

0xf45e,	// (0x0004e9d9) main_pane_set_t3_copy1

0xf46c,	// (0x0004e9e7) main_pane_set_t4_copy1

0xf379,	// (0x0004e8f4) set_content_pane_g1_copy1_ParamLimits

0xf379,	// (0x0004e8f4) set_content_pane_g1_copy1

0xf47a,	// (0x0004e9f5) setting_code_pane_copy1

0xa730,	// (0x00049cab) setting_slider_graphic_pane_copy1

0xa730,	// (0x00049cab) setting_slider_pane_copy1

0xa730,	// (0x00049cab) setting_text_pane_copy1

0xa730,	// (0x00049cab) setting_volume_pane_copy1

0xf47a,	// (0x0004e9f5) settings_code_pane_cp2_copy1

0xf482,	// (0x0004e9fd) settings_code_pane_cp_copy1_ParamLimits

0xf482,	// (0x0004e9fd) settings_code_pane_cp_copy1

0xced5,	// (0x0004c450) volume_set_pane_copy1

0xf496,	// (0x0004ea11) volume_set_pane_g10_copy1

0xf49e,	// (0x0004ea19) volume_set_pane_g1_copy1

0xf4a6,	// (0x0004ea21) volume_set_pane_g2_copy1

0xf4ae,	// (0x0004ea29) volume_set_pane_g3_copy1

0xf4b6,	// (0x0004ea31) volume_set_pane_g4_copy1

0xf4be,	// (0x0004ea39) volume_set_pane_g5_copy1

0xf4c6,	// (0x0004ea41) volume_set_pane_g6_copy1

0xf4ce,	// (0x0004ea49) volume_set_pane_g7_copy1

0xf4d6,	// (0x0004ea51) volume_set_pane_g8_copy1

0xf4de,	// (0x0004ea59) volume_set_pane_g9_copy1

0x35d4,	// (0x00042b4f) bg_set_opt_pane_cp_copy1_ParamLimits

0x35d4,	// (0x00042b4f) bg_set_opt_pane_cp_copy1

0x32e9,	// (0x00042864) setting_slider_pane_t1_copy1_ParamLimits

0x32e9,	// (0x00042864) setting_slider_pane_t1_copy1

0xcedd,	// (0x0004c458) setting_slider_pane_t2_copy1_ParamLimits

0xcedd,	// (0x0004c458) setting_slider_pane_t2_copy1

0xcef7,	// (0x0004c472) setting_slider_pane_t3_copy1_ParamLimits

0xcef7,	// (0x0004c472) setting_slider_pane_t3_copy1

0xcf0f,	// (0x0004c48a) slider_set_pane_copy1_ParamLimits

0xcf0f,	// (0x0004c48a) slider_set_pane_copy1

0x3e9e,	// (0x00043419) set_opt_bg_pane_g1_copy2

0x3ea6,	// (0x00043421) set_opt_bg_pane_g2_copy2

0xa79c,	// (0x00049d17) set_opt_bg_pane_g3_copy2

0x3eb6,	// (0x00043431) set_opt_bg_pane_g4_copy2

0x3ebe,	// (0x00043439) set_opt_bg_pane_g5_copy2

0x3ec6,	// (0x00043441) set_opt_bg_pane_g6_copy2

0xf4e6,	// (0x0004ea61) set_opt_bg_pane_g7_copy2

0xa7ae,	// (0x00049d29) set_opt_bg_pane_g8_copy2

0xa7b8,	// (0x00049d33) set_opt_bg_pane_g9_copy2

0x334f,	// (0x000428ca) aid_size_touch_slider_mark_copy1_ParamLimits

0x334f,	// (0x000428ca) aid_size_touch_slider_mark_copy1

0xa7c2,	// (0x00049d3d) slider_set_pane_g1_copy1

0x3363,	// (0x000428de) slider_set_pane_g2_copy1

0x22cf,	// (0x0004184a) slider_set_pane_g3_copy1_ParamLimits

0x22cf,	// (0x0004184a) slider_set_pane_g3_copy1

0x22e3,	// (0x0004185e) slider_set_pane_g4_copy1_ParamLimits

0x22e3,	// (0x0004185e) slider_set_pane_g4_copy1

0x22fb,	// (0x00041876) slider_set_pane_g5_copy1_ParamLimits

0x22fb,	// (0x00041876) slider_set_pane_g5_copy1

0x22cf,	// (0x0004184a) slider_set_pane_g6_copy1_ParamLimits

0x22cf,	// (0x0004184a) slider_set_pane_g6_copy1

0xcf25,	// (0x0004c4a0) slider_set_pane_g7_copy1_ParamLimits

0xcf25,	// (0x0004c4a0) slider_set_pane_g7_copy1

0x34f4,	// (0x00042a6f) bg_set_opt_pane_cp2_copy1

0xa7cb,	// (0x00049d46) setting_slider_graphic_pane_g1_copy1

0xf4ee,	// (0x0004ea69) setting_slider_graphic_pane_t1_copy1

0xf4fe,	// (0x0004ea79) setting_slider_graphic_pane_t2_copy1

0xf50e,	// (0x0004ea89) slider_set_pane_cp_copy1

0xa804,	// (0x00049d7f) input_focus_pane_cp1_copy1

0xa80d,	// (0x00049d88) list_set_text_pane_copy1

0xa815,	// (0x00049d90) setting_text_pane_g1_copy1

0xbd40,	// (0x0004b2bb) set_text_pane_t1_copy1

0xa804,	// (0x00049d7f) input_focus_pane_cp2_copy1

0xa815,	// (0x00049d90) setting_code_pane_g1_copy1

0xf516,	// (0x0004ea91) setting_code_pane_t1_copy1

0x6e05,	// (0x00046380) list_set_graphic_pane_copy1

0x34f4,	// (0x00042a6f) bg_set_opt_pane_cp4_copy1

0xd452,	// (0x0004c9cd) list_set_graphic_pane_g1_copy1_ParamLimits

0xd452,	// (0x0004c9cd) list_set_graphic_pane_g1_copy1

0xf524,	// (0x0004ea9f) list_set_graphic_pane_g2_copy1

0xd46a,	// (0x0004c9e5) list_set_graphic_pane_t1_copy1_ParamLimits

0xd46a,	// (0x0004c9e5) list_set_graphic_pane_t1_copy1

0x78f2,	// (0x00046e6d) rs_clock_indi_pane_g1

0xa846,	// (0x00049dc1) rs_clock_indi_pane_t1

0xa854,	// (0x00049dcf) rs_indi_pane

0xa85c,	// (0x00049dd7) rs_indi_pane_g1

0xa865,	// (0x00049de0) rs_indi_pane_g2

0xa86e,	// (0x00049de9) rs_indi_pane_g3

0x0002,

0xfeb7,	// (0x0004f432) rs_indi_pane_g

0x4ad9,	// (0x00044054) bg_popup_preview_window_pane_cp03

0xa877,	// (0x00049df2) popup_fep_tooltip_window_t1

0x856e,	// (0x00047ae9) popup_note2_window_g2_ParamLimits

0x856e,	// (0x00047ae9) popup_note2_window_g2

0x0001,

0xfc50,	// (0x0004f1cb) popup_note2_window_g_ParamLimits

0xfc50,	// (0x0004f1cb) popup_note2_window_g

0x8a69,	// (0x00047fe4) bg_popup_sub_pane_cp11_ParamLimits

0x8a76,	// (0x00047ff1) cell_ai3_links_pane_g1_ParamLimits

0x8a8d,	// (0x00048008) cell_ai3_links_pane_t1

0xbd40,	// (0x0004b2bb) set_text_pane_t1_copy1_ParamLimits

0x49ea,	// (0x00043f65) cell_graphic_popup_pane_cp2_ParamLimits

0x49ea,	// (0x00043f65) cell_graphic_popup_pane_cp2

0xa885,	// (0x00049e00) cell_graphic_popup_pane_g1_cp2

0x3b8e,	// (0x00043109) cell_graphic_popup_pane_g2_cp2

0xa88d,	// (0x00049e08) cell_graphic_popup_pane_g3_cp2

0xa895,	// (0x00049e10) cell_graphic_popup_pane_t2_cp2

0x3b9f,	// (0x0004311a) grid_highlight_pane_cp3_cp2

0x41e3,	// (0x0004375e) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3e4f,	// (0x000433ca) main_tmo_pane_ParamLimits

0xe65a,	// (0x0004dbd5) popup_tmo_big_image_note_window

0x9f51,	// (0x000494cc) cell_ai5_widget_list_pane

0x9f59,	// (0x000494d4) cell_ai5_widget_lrg_icon_pane

0xf2df,	// (0x0004e85a) tmo_note_info_pane_t1_ParamLimits

0xf2f4,	// (0x0004e86f) tmo_note_info_pane_t2_ParamLimits

0xf30b,	// (0x0004e886) tmo_note_info_pane_t3_ParamLimits

0xa4fb,	// (0x00049a76) tmo_note_info_pane_t4_ParamLimits

0xa50d,	// (0x00049a88) tmo_note_info_pane_t5_ParamLimits

0xfea5,	// (0x0004f420) tmo_note_info_pane_t_ParamLimits

0xf385,	// (0x0004e900) settings_container_pane_ParamLimits

0xa7fc,	// (0x00049d77) indicator_popup_pane_cp5

0xa7fc,	// (0x00049d77) indicator_popup_pane_cp6

0x6e05,	// (0x00046380) list_set_graphic_pane_copy1_ParamLimits

0x34e0,	// (0x00042a5b) bg_popup_window_pane_cp23

0xa8a3,	// (0x00049e1e) popup_tmo_big_image_note_window_g1

0xa8ad,	// (0x00049e28) popup_tmo_big_image_note_window_t1

0xa8bd,	// (0x00049e38) popup_tmo_big_image_note_window_t2

0xa8cd,	// (0x00049e48) popup_tmo_big_image_note_window_t3

0x0002,

0xfebe,	// (0x0004f439) popup_tmo_big_image_note_window_t

0x78f2,	// (0x00046e6d) cell_ai5_widget_lrg_icon_pane_g1

0xa8dd,	// (0x00049e58) cell_ai5_widget_lrg_icon_pane_t1

0xa8eb,	// (0x00049e66) cell_ai5_widget_list_row_pane_ParamLimits

0xa8eb,	// (0x00049e66) cell_ai5_widget_list_row_pane

0xa902,	// (0x00049e7d) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa902,	// (0x00049e7d) cell_ai5_widget_list_row_pane_g1

0xa90f,	// (0x00049e8a) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa90f,	// (0x00049e8a) cell_ai5_widget_list_row_pane_t1

0xa940,	// (0x00049ebb) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa940,	// (0x00049ebb) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec5,	// (0x0004f440) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec5,	// (0x0004f440) cell_ai5_widget_list_row_pane_t

0x34e0,	// (0x00042a5b) main_fep_vtchi_ss_pane

0xa984,	// (0x00049eff) popup_fep_char_pre_window

0xa98c,	// (0x00049f07) popup_fep_ituss_window

0xa9ad,	// (0x00049f28) popup_fep_vkbss_window

0xa9cc,	// (0x00049f47) grid_vkbss_keypad_pane_ParamLimits

0xa9cc,	// (0x00049f47) grid_vkbss_keypad_pane

0xa9dc,	// (0x00049f57) ituss_keypad_pane

0x338d,	// (0x00042908) aid_vkbss_key_offset_ParamLimits

0x338d,	// (0x00042908) aid_vkbss_key_offset

0x3399,	// (0x00042914) cell_vkbss_key_pane_ParamLimits

0x3399,	// (0x00042914) cell_vkbss_key_pane

0xa9eb,	// (0x00049f66) bg_cell_vkbss_key_g1_ParamLimits

0xa9eb,	// (0x00049f66) bg_cell_vkbss_key_g1

0xa9f7,	// (0x00049f72) cell_vkbss_key_3p_pane_ParamLimits

0xa9f7,	// (0x00049f72) cell_vkbss_key_3p_pane

0xaa11,	// (0x00049f8c) cell_vkbss_key_g1_ParamLimits

0xaa11,	// (0x00049f8c) cell_vkbss_key_g1

0xaa2b,	// (0x00049fa6) cell_vkbss_key_t1_ParamLimits

0xaa2b,	// (0x00049fa6) cell_vkbss_key_t1

0x33af,	// (0x0004292a) cell_ituss_key_pane_ParamLimits

0x33af,	// (0x0004292a) cell_ituss_key_pane

0xaa56,	// (0x00049fd1) bg_cell_ituss_key_g1_ParamLimits

0xaa56,	// (0x00049fd1) bg_cell_ituss_key_g1

0xaa62,	// (0x00049fdd) cell_ituss_key_pane_g1_ParamLimits

0xaa62,	// (0x00049fdd) cell_ituss_key_pane_g1

0x33c0,	// (0x0004293b) cell_ituss_key_pane_g2_ParamLimits

0x33c0,	// (0x0004293b) cell_ituss_key_pane_g2

0x0002,

0xfecc,	// (0x0004f447) cell_ituss_key_pane_g_ParamLimits

0xfecc,	// (0x0004f447) cell_ituss_key_pane_g

0x33ec,	// (0x00042967) cell_ituss_key_t1_ParamLimits

0x33ec,	// (0x00042967) cell_ituss_key_t1

0x3426,	// (0x000429a1) cell_ituss_key_t2_ParamLimits

0x3426,	// (0x000429a1) cell_ituss_key_t2

0x3457,	// (0x000429d2) cell_ituss_key_t3_ParamLimits

0x3457,	// (0x000429d2) cell_ituss_key_t3

0x3426,	// (0x000429a1) cell_ituss_key_t4_ParamLimits

0x3426,	// (0x000429a1) cell_ituss_key_t4

0x0004,

0xfed3,	// (0x0004f44e) cell_ituss_key_t_ParamLimits

0xfed3,	// (0x0004f44e) cell_ituss_key_t

0xaa8e,	// (0x0004a009) cell_vkbss_key_3p_pane_g1

0xaa96,	// (0x0004a011) cell_vkbss_key_3p_pane_g2

0xaa9e,	// (0x0004a019) cell_vkbss_key_3p_pane_g3

0x0002,

0xfede,	// (0x0004f459) cell_vkbss_key_3p_pane_g

0x34e0,	// (0x00042a5b) bg_popup_fep_char_preview_window_cp02

0x349a,	// (0x00042a15) popup_fep_char_pre_window_t1

0xf22e,	// (0x0004e7a9) main_ai5_sk_pane

0xa587,	// (0x00049b02) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa593,	// (0x00049b0e) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7f90,	// (0x0004750b) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa5a8,	// (0x00049b23) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb0,	// (0x0004f42b) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa5b4,	// (0x00049b2f) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3e4f,	// (0x000433ca) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf52c,	// (0x0004eaa7) main_ai5_sk_pane_g1

0x57d3,	// (0x00044d4e) popup_query_code_window_g1

0xa9a2,	// (0x00049f1d) popup_fep_vkb_icf_pane

0xa9b6,	// (0x00049f31) popup_fep_vtchi_icf_pane

0xaaaf,	// (0x0004a02a) bg_icf_pane

0xaabb,	// (0x0004a036) list_vkb_icf_pane

0xaac7,	// (0x0004a042) bg_icf_pane_cp01

0xaada,	// (0x0004a055) vtchi_icf_list_pane

0xaaea,	// (0x0004a065) list_vkb_icf_pane_t1_ParamLimits

0xaaea,	// (0x0004a065) list_vkb_icf_pane_t1

0xab00,	// (0x0004a07b) vtchi_icf_list_pane_t1_ParamLimits

0xab00,	// (0x0004a07b) vtchi_icf_list_pane_t1

0xa98c,	// (0x00049f07) popup_fep_ituss_window_ParamLimits

0xa9b6,	// (0x00049f31) popup_fep_vtchi_icf_pane_ParamLimits

0xa9dc,	// (0x00049f57) ituss_keypad_pane_ParamLimits

0x3381,	// (0x000428fc) ituss_sks_pane

0xaaaf,	// (0x0004a02a) bg_icf_pane_ParamLimits

0xa968,	// (0x00049ee3) icf_edit_indi_pane_ParamLimits

0xa968,	// (0x00049ee3) icf_edit_indi_pane

0xaabb,	// (0x0004a036) list_vkb_icf_pane_ParamLimits

0xaac7,	// (0x0004a042) bg_icf_pane_cp01_ParamLimits

0xa977,	// (0x00049ef2) icf_edit_indi_pane_cp01_ParamLimits

0xa977,	// (0x00049ef2) icf_edit_indi_pane_cp01

0xaae2,	// (0x0004a05d) vtchi_query_pane

0x7b70,	// (0x000470eb) icf_edit_indi_pane_g1_ParamLimits

0x7b70,	// (0x000470eb) icf_edit_indi_pane_g1

0xab71,	// (0x0004a0ec) icf_edit_indi_pane_g2_ParamLimits

0xab71,	// (0x0004a0ec) icf_edit_indi_pane_g2

0x0001,

0xfef6,	// (0x0004f471) icf_edit_indi_pane_g_ParamLimits

0xfef6,	// (0x0004f471) icf_edit_indi_pane_g

0xab80,	// (0x0004a0fb) icf_edit_indi_pane_t1

0xab1a,	// (0x0004a095) bg_input_focus_pane_cp042

0x3d72,	// (0x000432ed) vtchi_button_pane

0xab23,	// (0x0004a09e) vtchi_query_pane_t1

0xab31,	// (0x0004a0ac) vtchi_query_pane_t2

0xab3f,	// (0x0004a0ba) vtchi_query_pane_t3

0x0002,

0xfee5,	// (0x0004f460) vtchi_query_pane_t

0x34e0,	// (0x00042a5b) bg_button_pane_cp13

0xab4d,	// (0x0004a0c8) vtchi_button_pane_g1

0x34a9,	// (0x00042a24) ituss_sks_pane_g1

0x34b4,	// (0x00042a2f) ituss_sks_pane_g2

0x0001,

0xfeec,	// (0x0004f467) ituss_sks_pane_g

0xab55,	// (0x0004a0d0) ituss_sks_pane_t1

0xab63,	// (0x0004a0de) ituss_sks_pane_t2

0x0001,

0xfef1,	// (0x0004f46c) ituss_sks_pane_t

0x7355,	// (0x000468d0) indicator_nsta_pane_cp_g1

0x735e,	// (0x000468d9) indicator_nsta_pane_cp_g2

0x7366,	// (0x000468e1) indicator_nsta_pane_cp_g3

0x736e,	// (0x000468e9) indicator_nsta_pane_cp_g4

0x7376,	// (0x000468f1) indicator_nsta_pane_cp_g5

0x7376,	// (0x000468f1) indicator_nsta_pane_cp_g6

0x0005,

0xfa9a,	// (0x0004f015) indicator_nsta_pane_cp_g

0xf040,	// (0x0004e5bb) cell_graphic2_pane_t2_ParamLimits

0xf040,	// (0x0004e5bb) cell_graphic2_pane_t2

0x0001,

0xfda7,	// (0x0004f322) cell_graphic2_pane_t_ParamLimits

0xfda7,	// (0x0004f322) cell_graphic2_pane_t

0xf076,	// (0x0004e5f1) cell_graphic2_control_pane_t1

0xd426,	// (0x0004c9a1) signal_pane_g3_ParamLimits

0xd426,	// (0x0004c9a1) signal_pane_g3

0xd43a,	// (0x0004c9b5) signal_pane_g4_ParamLimits

0xd43a,	// (0x0004c9b5) signal_pane_g4

0xa952,	// (0x00049ecd) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa952,	// (0x00049ecd) cell_ai5_widget_list_row_pane_t3

0xaa7c,	// (0x00049ff7) cell_ituss_key_pane_t1_ParamLimits

0xaa7c,	// (0x00049ff7) cell_ituss_key_pane_t1

0x5426,	// (0x000449a1) form_field_data_wide_pane_vc_t2_ParamLimits

0x5426,	// (0x000449a1) form_field_data_wide_pane_vc_t2

0x543a,	// (0x000449b5) form_field_data_wide_pane_vc_t3_ParamLimits

0x543a,	// (0x000449b5) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x0004ed84) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x0004ed84) form_field_data_wide_pane_vc_t

0x701d,	// (0x00046598) form_field_slider_wide_pane_vc_t3_ParamLimits

0x701d,	// (0x00046598) form_field_slider_wide_pane_vc_t3

0x70fb,	// (0x00046676) form_field_popup_wide_pane_vc_t2_ParamLimits

0x70fb,	// (0x00046676) form_field_popup_wide_pane_vc_t2

0x7112,	// (0x0004668d) form_field_popup_wide_pane_vc_t3_ParamLimits

0x7112,	// (0x0004668d) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa89,	// (0x0004f004) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x0004f004) form_field_popup_wide_pane_vc_t

0xcd9d,	// (0x0004c318) aid_fshwr2_btn_pane_ParamLimits

0xcdae,	// (0x0004c329) aid_fshwr2_syb_pane_ParamLimits

0xcdbf,	// (0x0004c33a) aid_fshwr2_txt_pane_ParamLimits

0x3e4f,	// (0x000433ca) fshwr2_bg_pane_ParamLimits

0xcdcb,	// (0x0004c346) fshwr2_func_candi_pane_ParamLimits

0xcdea,	// (0x0004c365) fshwr2_hwr_syb_pane_ParamLimits

0xce05,	// (0x0004c380) fshwr2_icf_pane_ParamLimits

0x24af,	// (0x00041a2a) list_double_graphic_pane_vc_g4_ParamLimits

0x24af,	// (0x00041a2a) list_double_graphic_pane_vc_g4

0x33e0,	// (0x0004295b) cell_ituss_key_pane_g3_ParamLimits

0x33e0,	// (0x0004295b) cell_ituss_key_pane_g3

0x3488,	// (0x00042a03) cell_ituss_key_t5_ParamLimits

0x3488,	// (0x00042a03) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Large
