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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0000f3c0 };

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
0xc744,	// (0x0001bb04) Screen

0xc750,	// (0x0001bb10) application_window_ParamLimits

0xc750,	// (0x0001bb10) application_window

0x2500,	// (0x000118c0) screen_g1

0xb756,	// (0x0001ab16) area_bottom_pane_ParamLimits

0xb756,	// (0x0001ab16) area_bottom_pane

0x0273,	// (0x0000f633) area_top_pane_ParamLimits

0x0273,	// (0x0000f633) area_top_pane

0x0311,	// (0x0000f6d1) main_pane_ParamLimits

0x0311,	// (0x0000f6d1) main_pane

0x250a,	// (0x000118ca) misc_graphics

0xd402,	// (0x0001c7c2) battery_pane_ParamLimits

0xd402,	// (0x0001c7c2) battery_pane

0x5459,	// (0x00014819) bg_status_flat_pane_g8

0x5461,	// (0x00014821) bg_status_flat_pane_g9

0x4723,	// (0x00013ae3) context_pane_ParamLimits

0x4723,	// (0x00013ae3) context_pane

0xd56d,	// (0x0001c92d) navi_pane_ParamLimits

0xd56d,	// (0x0001c92d) navi_pane

0xd5eb,	// (0x0001c9ab) signal_pane_ParamLimits

0xd5eb,	// (0x0001c9ab) signal_pane

0x0008,

0xf875,	// (0x0001ec35) bg_status_flat_pane_g

0xd67b,	// (0x0001ca3b) status_pane_g1_ParamLimits

0xd67b,	// (0x0001ca3b) status_pane_g1

0xd691,	// (0x0001ca51) status_pane_g2_ParamLimits

0xd691,	// (0x0001ca51) status_pane_g2

0x494a,	// (0x00013d0a) status_pane_g3_ParamLimits

0x494a,	// (0x00013d0a) status_pane_g3

0x0004,

0xf7a1,	// (0x0001eb61) status_pane_g_ParamLimits

0xf7a1,	// (0x0001eb61) status_pane_g

0xd69d,	// (0x0001ca5d) title_pane_ParamLimits

0xd69d,	// (0x0001ca5d) title_pane

0xd700,	// (0x0001cac0) uni_indicator_pane_ParamLimits

0xd700,	// (0x0001cac0) uni_indicator_pane

0x4575,	// (0x00013935) bg_list_pane_ParamLimits

0x4575,	// (0x00013935) bg_list_pane

0xd34d,	// (0x0001c70d) find_pane

0xbaae,	// (0x0001ae6e) listscroll_app_pane_ParamLimits

0xbaae,	// (0x0001ae6e) listscroll_app_pane

0x45a9,	// (0x00013969) listscroll_form_pane

0xbabe,	// (0x0001ae7e) listscroll_gen_pane_ParamLimits

0xbabe,	// (0x0001ae7e) listscroll_gen_pane

0x0bf8,	// (0x0000ffb8) listscroll_set_pane

0x5fff,	// (0x000153bf) main_idle_act_pane

0x427b,	// (0x0001363b) main_idle_trad_pane

0x427b,	// (0x0001363b) main_list_empty_pane

0x45c3,	// (0x00013983) main_midp_pane

0x45cf,	// (0x0001398f) main_pane_g1_ParamLimits

0x45cf,	// (0x0001398f) main_pane_g1

0xbad2,	// (0x0001ae92) popup_ai_message_window_ParamLimits

0xbad2,	// (0x0001ae92) popup_ai_message_window

0xbb63,	// (0x0001af23) popup_fep_china_uni_window_ParamLimits

0xbb63,	// (0x0001af23) popup_fep_china_uni_window

0x0d10,	// (0x000100d0) popup_fep_japan_candidate_window_ParamLimits

0x0d10,	// (0x000100d0) popup_fep_japan_candidate_window

0x0d30,	// (0x000100f0) popup_fep_japan_predictive_window_ParamLimits

0x0d30,	// (0x000100f0) popup_fep_japan_predictive_window

0xbbbf,	// (0x0001af7f) popup_find_window

0xbbdc,	// (0x0001af9c) popup_grid_graphic_window_ParamLimits

0xbbdc,	// (0x0001af9c) popup_grid_graphic_window

0x0d95,	// (0x00010155) popup_large_graphic_colour_window

0xbc74,	// (0x0001b034) popup_menu_window_ParamLimits

0xbc74,	// (0x0001b034) popup_menu_window

0xbe46,	// (0x0001b206) popup_note_image_window

0xbe0c,	// (0x0001b1cc) popup_note_wait_window_ParamLimits

0xbe0c,	// (0x0001b1cc) popup_note_wait_window

0xbe5e,	// (0x0001b21e) popup_note_window_ParamLimits

0xbe5e,	// (0x0001b21e) popup_note_window

0xbf04,	// (0x0001b2c4) popup_query_code_window_ParamLimits

0xbf04,	// (0x0001b2c4) popup_query_code_window

0x0fdd,	// (0x0001039d) popup_query_data_code_window_ParamLimits

0x0fdd,	// (0x0001039d) popup_query_data_code_window

0xbf3e,	// (0x0001b2fe) popup_query_data_window_ParamLimits

0xbf3e,	// (0x0001b2fe) popup_query_data_window

0xbfc0,	// (0x0001b380) popup_query_sat_info_window_ParamLimits

0xbfc0,	// (0x0001b380) popup_query_sat_info_window

0xc057,	// (0x0001b417) popup_snote_single_graphic_window_ParamLimits

0xc057,	// (0x0001b417) popup_snote_single_graphic_window

0xc057,	// (0x0001b417) popup_snote_single_text_window_ParamLimits

0xc057,	// (0x0001b417) popup_snote_single_text_window

0x1064,	// (0x00010424) popup_sub_window_general

0x1194,	// (0x00010554) popup_window_general_ParamLimits

0x1194,	// (0x00010554) popup_window_general

0x45e5,	// (0x000139a5) power_save_pane

0xb93d,	// (0x0001acfd) control_pane_g1_ParamLimits

0xb93d,	// (0x0001acfd) control_pane_g1

0xb966,	// (0x0001ad26) control_pane_g2_ParamLimits

0xb966,	// (0x0001ad26) control_pane_g2

0x4538,	// (0x000138f8) control_pane_g3_ParamLimits

0x4538,	// (0x000138f8) control_pane_g3

0x0007,

0xf789,	// (0x0001eb49) control_pane_g_ParamLimits

0xf789,	// (0x0001eb49) control_pane_g

0xb9a7,	// (0x0001ad67) control_pane_t1_ParamLimits

0xb9a7,	// (0x0001ad67) control_pane_t1

0xba05,	// (0x0001adc5) control_pane_t2_ParamLimits

0xba05,	// (0x0001adc5) control_pane_t2

0x0002,

0xf79a,	// (0x0001eb5a) control_pane_t_ParamLimits

0xf79a,	// (0x0001eb5a) control_pane_t

0x4459,	// (0x00013819) navi_navi_volume_pane_cp1

0x4462,	// (0x00013822) status_small_icon_pane

0x446a,	// (0x0001382a) status_small_pane_g1_ParamLimits

0x446a,	// (0x0001382a) status_small_pane_g1

0x449e,	// (0x0001385e) status_small_pane_g2_ParamLimits

0x449e,	// (0x0001385e) status_small_pane_g2

0x44aa,	// (0x0001386a) status_small_pane_g3_ParamLimits

0x44aa,	// (0x0001386a) status_small_pane_g3

0x44b6,	// (0x00013876) status_small_pane_g4_ParamLimits

0x44b6,	// (0x00013876) status_small_pane_g4

0x44c2,	// (0x00013882) status_small_pane_g5_ParamLimits

0x44c2,	// (0x00013882) status_small_pane_g5

0x44d1,	// (0x00013891) status_small_pane_g6_ParamLimits

0x44d1,	// (0x00013891) status_small_pane_g6

0x0007,

0xf778,	// (0x0001eb38) status_small_pane_g_ParamLimits

0xf778,	// (0x0001eb38) status_small_pane_g

0x4501,	// (0x000138c1) status_small_pane_t1

0x4524,	// (0x000138e4) status_small_wait_pane_ParamLimits

0x4524,	// (0x000138e4) status_small_wait_pane

0xd149,	// (0x0001c509) aid_levels_signal_ParamLimits

0xd149,	// (0x0001c509) aid_levels_signal

0xd161,	// (0x0001c521) signal_pane_g1_ParamLimits

0xd161,	// (0x0001c521) signal_pane_g1

0xd17c,	// (0x0001c53c) signal_pane_g2_ParamLimits

0xd17c,	// (0x0001c53c) signal_pane_g2

0x0003,

0xf709,	// (0x0001eac9) signal_pane_g_ParamLimits

0xf709,	// (0x0001eac9) signal_pane_g

0x3ccb,	// (0x0001308b) context_pane_g1

0xc760,	// (0x0001bb20) title_pane_g1

0xc797,	// (0x0001bb57) title_pane_t1

0x25b2,	// (0x00011972) title_pane_t2

0x25d8,	// (0x00011998) title_pane_t3

0x0002,

0xf55d,	// (0x0001e91d) title_pane_t

0xd728,	// (0x0001cae8) aid_levels_battery_ParamLimits

0xd728,	// (0x0001cae8) aid_levels_battery

0xd744,	// (0x0001cb04) battery_pane_g1_ParamLimits

0xd744,	// (0x0001cb04) battery_pane_g1

0xd761,	// (0x0001cb21) battery_pane_g2_ParamLimits

0xd761,	// (0x0001cb21) battery_pane_g2

0x0001,

0xf7ac,	// (0x0001eb6c) battery_pane_g_ParamLimits

0xf7ac,	// (0x0001eb6c) battery_pane_g

0xd947,	// (0x0001cd07) uni_indicator_pane_g1

0xd95e,	// (0x0001cd1e) uni_indicator_pane_g2

0xd974,	// (0x0001cd34) uni_indicator_pane_g3

0x0005,

0xf91d,	// (0x0001ecdd) uni_indicator_pane_g

0x40ed,	// (0x000134ad) navi_icon_pane_ParamLimits

0x40ed,	// (0x000134ad) navi_icon_pane

0x4036,	// (0x000133f6) navi_midp_pane

0x4109,	// (0x000134c9) navi_navi_pane

0x4113,	// (0x000134d3) navi_text_pane_ParamLimits

0x4113,	// (0x000134d3) navi_text_pane

0x2500,	// (0x000118c0) status_small_wait_pane_g1

0x2a21,	// (0x00011de1) status_small_wait_pane_g2

0x0001,

0xf918,	// (0x0001ecd8) status_small_wait_pane_g

0x5ab4,	// (0x00014e74) navi_navi_icon_text_pane

0x5abc,	// (0x00014e7c) navi_navi_pane_g1_ParamLimits

0x5abc,	// (0x00014e7c) navi_navi_pane_g1

0x5ace,	// (0x00014e8e) navi_navi_pane_g2_ParamLimits

0x5ace,	// (0x00014e8e) navi_navi_pane_g2

0x0001,

0xf8e6,	// (0x0001eca6) navi_navi_pane_g_ParamLimits

0xf8e6,	// (0x0001eca6) navi_navi_pane_g

0x5ae0,	// (0x00014ea0) navi_navi_tabs_pane

0x5ae9,	// (0x00014ea9) navi_navi_text_pane

0x5ab4,	// (0x00014e74) navi_navi_volume_pane

0x5a90,	// (0x00014e50) navi_text_pane_t1

0x5a84,	// (0x00014e44) navi_icon_pane_g1

0x59d7,	// (0x00014d97) navi_navi_text_pane_t1

0x14ac,	// (0x0001086c) navi_navi_volume_pane_g1

0x14b4,	// (0x00010874) volume_small_pane

0x593d,	// (0x00014cfd) navi_navi_icon_text_pane_g1

0x5945,	// (0x00014d05) navi_navi_icon_text_pane_t1

0x4109,	// (0x000134c9) navi_tabs_2_long_pane

0x4109,	// (0x000134c9) navi_tabs_2_pane

0x4109,	// (0x000134c9) navi_tabs_3_long_pane

0x4109,	// (0x000134c9) navi_tabs_3_pane

0x4109,	// (0x000134c9) navi_tabs_4_pane

0x148c,	// (0x0001084c) tabs_2_active_pane_ParamLimits

0x148c,	// (0x0001084c) tabs_2_active_pane

0x149c,	// (0x0001085c) tabs_2_passive_pane_ParamLimits

0x149c,	// (0x0001085c) tabs_2_passive_pane

0x145a,	// (0x0001081a) tabs_3_active_pane_ParamLimits

0x145a,	// (0x0001081a) tabs_3_active_pane

0x146a,	// (0x0001082a) tabs_3_passive_pane_ParamLimits

0x146a,	// (0x0001082a) tabs_3_passive_pane

0x147b,	// (0x0001083b) tabs_3_passive_pane_cp_ParamLimits

0x147b,	// (0x0001083b) tabs_3_passive_pane_cp

0x1416,	// (0x000107d6) tabs_4_active_pane_ParamLimits

0x1416,	// (0x000107d6) tabs_4_active_pane

0x1427,	// (0x000107e7) tabs_4_passive_pane_ParamLimits

0x1427,	// (0x000107e7) tabs_4_passive_pane

0x1438,	// (0x000107f8) tabs_4_passive_pane_cp_ParamLimits

0x1438,	// (0x000107f8) tabs_4_passive_pane_cp

0x1449,	// (0x00010809) tabs_4_passive_pane_cp2_ParamLimits

0x1449,	// (0x00010809) tabs_4_passive_pane_cp2

0x13f2,	// (0x000107b2) tabs_2_long_active_pane_ParamLimits

0x13f2,	// (0x000107b2) tabs_2_long_active_pane

0x1404,	// (0x000107c4) tabs_2_long_passive_pane_ParamLimits

0x1404,	// (0x000107c4) tabs_2_long_passive_pane

0x13b3,	// (0x00010773) tabs_3_long_active_pane_ParamLimits

0x13b3,	// (0x00010773) tabs_3_long_active_pane

0x13c6,	// (0x00010786) tabs_3_long_passive_pane_ParamLimits

0x13c6,	// (0x00010786) tabs_3_long_passive_pane

0x13df,	// (0x0001079f) tabs_3_long_passive_pane_cp_ParamLimits

0x13df,	// (0x0001079f) tabs_3_long_passive_pane_cp

0x1359,	// (0x00010719) volume_small_pane_g1

0x1362,	// (0x00010722) volume_small_pane_g2

0x136b,	// (0x0001072b) volume_small_pane_g3

0x1374,	// (0x00010734) volume_small_pane_g4

0x137d,	// (0x0001073d) volume_small_pane_g5

0x1386,	// (0x00010746) volume_small_pane_g6

0x138f,	// (0x0001074f) volume_small_pane_g7

0x1398,	// (0x00010758) volume_small_pane_g8

0x13a1,	// (0x00010761) volume_small_pane_g9

0x13aa,	// (0x0001076a) volume_small_pane_g10

0x0009,

0xf8b2,	// (0x0001ec72) volume_small_pane_g

0x287f,	// (0x00011c3f) bg_active_tab_pane_cp2_ParamLimits

0x287f,	// (0x00011c3f) bg_active_tab_pane_cp2

0x25f8,	// (0x000119b8) tabs_3_active_pane_g1

0xc823,	// (0x0001bbe3) tabs_3_active_pane_t1

0x287f,	// (0x00011c3f) bg_passive_tab_pane_cp2_ParamLimits

0x287f,	// (0x00011c3f) bg_passive_tab_pane_cp2

0x25f8,	// (0x000119b8) tabs_3_passive_pane_g1

0xc823,	// (0x0001bbe3) tabs_3_passive_pane_t1

0x287f,	// (0x00011c3f) bg_active_tab_pane_cp3_ParamLimits

0x287f,	// (0x00011c3f) bg_active_tab_pane_cp3

0x2612,	// (0x000119d2) tabs_4_active_pane_g1

0xc835,	// (0x0001bbf5) tabs_4_active_pane_t1

0x287f,	// (0x00011c3f) bg_passive_tab_pane_cp3_ParamLimits

0x287f,	// (0x00011c3f) bg_passive_tab_pane_cp3

0x2612,	// (0x000119d2) tabs_4_1_passive_pane_g1

0xc835,	// (0x0001bbf5) tabs_4_1_passive_pane_t1

0x45c3,	// (0x00013983) list_highlight_pane_cp2

0xda0e,	// (0x0001cdce) list_set_pane_ParamLimits

0xda0e,	// (0x0001cdce) list_set_pane

0xdaa8,	// (0x0001ce68) main_pane_set_t1_ParamLimits

0xdaa8,	// (0x0001ce68) main_pane_set_t1

0xdac8,	// (0x0001ce88) main_pane_set_t2_ParamLimits

0xdac8,	// (0x0001ce88) main_pane_set_t2

0xdadc,	// (0x0001ce9c) main_pane_set_t3_ParamLimits

0xdadc,	// (0x0001ce9c) main_pane_set_t3

0xdaee,	// (0x0001ceae) main_pane_set_t4_ParamLimits

0xdaee,	// (0x0001ceae) main_pane_set_t4

0x0003,

0xf982,	// (0x0001ed42) main_pane_set_t_ParamLimits

0xf982,	// (0x0001ed42) main_pane_set_t

0xdb00,	// (0x0001cec0) setting_code_pane

0xdb0a,	// (0x0001ceca) setting_slider_graphic_pane

0xdb0a,	// (0x0001ceca) setting_slider_pane

0xdb0a,	// (0x0001ceca) setting_text_pane

0xdb0a,	// (0x0001ceca) setting_volume_pane

0x0560,	// (0x0000f920) volume_set_pane

0x25ea,	// (0x000119aa) bg_set_opt_pane_cp

0x0568,	// (0x0000f928) setting_slider_pane_t1

0x0581,	// (0x0000f941) setting_slider_pane_t2

0x059b,	// (0x0000f95b) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0001e924) setting_slider_pane_t

0x05b3,	// (0x0000f973) slider_set_pane

0x250a,	// (0x000118ca) bg_set_opt_pane_cp2

0x262c,	// (0x000119ec) setting_slider_graphic_pane_g1

0x05c9,	// (0x0000f989) setting_slider_graphic_pane_t1

0x05d9,	// (0x0000f999) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0001e92b) setting_slider_graphic_pane_t

0x05e9,	// (0x0000f9a9) slider_set_pane_cp

0x250a,	// (0x000118ca) input_focus_pane_cp1

0x5fe6,	// (0x000153a6) list_set_text_pane

0x2500,	// (0x000118c0) setting_text_pane_g1

0x250a,	// (0x000118ca) input_focus_pane_cp2

0x2500,	// (0x000118c0) setting_code_pane_g1

0x2635,	// (0x000119f5) setting_code_pane_t1

0x2643,	// (0x00011a03) set_text_pane_t1_ParamLimits

0x2643,	// (0x00011a03) set_text_pane_t1

0x3514,	// (0x000128d4) set_opt_bg_pane_g1

0x351c,	// (0x000128dc) set_opt_bg_pane_g2

0x5fc0,	// (0x00015380) set_opt_bg_pane_g3

0x352c,	// (0x000128ec) set_opt_bg_pane_g4

0x3534,	// (0x000128f4) set_opt_bg_pane_g5

0x353c,	// (0x000128fc) set_opt_bg_pane_g6

0x5fca,	// (0x0001538a) set_opt_bg_pane_g7

0x5fd2,	// (0x00015392) set_opt_bg_pane_g8

0x5fdc,	// (0x0001539c) set_opt_bg_pane_g9

0x0008,

0xf96f,	// (0x0001ed2f) set_opt_bg_pane_g

0x5fb3,	// (0x00015373) slider_set_pane_g1

0x1521,	// (0x000108e1) slider_set_pane_g2

0x0006,

0xf960,	// (0x0001ed20) slider_set_pane_g

0x14bd,	// (0x0001087d) volume_set_pane_g1

0x14c5,	// (0x00010885) volume_set_pane_g2

0x14cd,	// (0x0001088d) volume_set_pane_g3

0x14d5,	// (0x00010895) volume_set_pane_g4

0x14dd,	// (0x0001089d) volume_set_pane_g5

0x14e5,	// (0x000108a5) volume_set_pane_g6

0x14ed,	// (0x000108ad) volume_set_pane_g7

0x14f5,	// (0x000108b5) volume_set_pane_g8

0x14fd,	// (0x000108bd) volume_set_pane_g9

0x1505,	// (0x000108c5) volume_set_pane_g10

0x0009,

0xf938,	// (0x0001ecf8) volume_set_pane_g

0xc847,	// (0x0001bc07) indicator_pane_ParamLimits

0xc847,	// (0x0001bc07) indicator_pane

0xc86f,	// (0x0001bc2f) main_idle_pane_g2_ParamLimits

0xc86f,	// (0x0001bc2f) main_idle_pane_g2

0xc8a7,	// (0x0001bc67) main_pane_idle_g1_ParamLimits

0xc8a7,	// (0x0001bc67) main_pane_idle_g1

0x269e,	// (0x00011a5e) popup_clock_digital_analogue_window_ParamLimits

0x269e,	// (0x00011a5e) popup_clock_digital_analogue_window

0xc8ce,	// (0x0001bc8e) soft_indicator_pane_ParamLimits

0xc8ce,	// (0x0001bc8e) soft_indicator_pane

0xc8e8,	// (0x0001bca8) wallpaper_pane_ParamLimits

0xc8e8,	// (0x0001bca8) wallpaper_pane

0x2500,	// (0x000118c0) wallpaper_pane_g1

0xc8fa,	// (0x0001bcba) indicator_pane_g1_ParamLimits

0xc8fa,	// (0x0001bcba) indicator_pane_g1

0x64cb,	// (0x0001588b) navi_navi_icon_text_pane_srt_g1

0x26f0,	// (0x00011ab0) soft_indicator_pane_t1

0x270a,	// (0x00011aca) aid_ps_area_pane

0xc910,	// (0x0001bcd0) aid_ps_clock_pane

0x2729,	// (0x00011ae9) aid_ps_indicator_pane

0x2735,	// (0x00011af5) indicator_ps_pane_ParamLimits

0x2735,	// (0x00011af5) indicator_ps_pane

0x2744,	// (0x00011b04) power_save_pane_g1_ParamLimits

0x2744,	// (0x00011b04) power_save_pane_g1

0x2750,	// (0x00011b10) power_save_pane_g2_ParamLimits

0x2750,	// (0x00011b10) power_save_pane_g2

0x0167,	// (0x0000f527) aid_navinavi_width_pane

0x270a,	// (0x00011aca) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0001e930) power_save_pane_g_ParamLimits

0xf570,	// (0x0001e930) power_save_pane_g

0x275e,	// (0x00011b1e) power_save_pane_t1_ParamLimits

0x275e,	// (0x00011b1e) power_save_pane_t1

0xc910,	// (0x0001bcd0) aid_ps_clock_pane_ParamLimits

0x2729,	// (0x00011ae9) aid_ps_indicator_pane_ParamLimits

0x2770,	// (0x00011b30) power_save_pane_t4_ParamLimits

0x2770,	// (0x00011b30) power_save_pane_t4

0x0001,

0xf575,	// (0x0001e935) power_save_pane_t_ParamLimits

0xf575,	// (0x0001e935) power_save_pane_t

0x279a,	// (0x00011b5a) power_save_t3_ParamLimits

0x279a,	// (0x00011b5a) power_save_t3

0x2785,	// (0x00011b45) power_save_t2_ParamLimits

0x2785,	// (0x00011b45) power_save_t2

0x27af,	// (0x00011b6f) indicator_ps_pane_g1

0xc91e,	// (0x0001bcde) ai_gene_pane_ParamLimits

0xc91e,	// (0x0001bcde) ai_gene_pane

0xc935,	// (0x0001bcf5) ai_links_pane_ParamLimits

0xc935,	// (0x0001bcf5) ai_links_pane

0xc94d,	// (0x0001bd0d) indicator_pane_cp1_ParamLimits

0xc94d,	// (0x0001bd0d) indicator_pane_cp1

0xc95c,	// (0x0001bd1c) main_pane_idle_g1_cp_ParamLimits

0xc95c,	// (0x0001bd1c) main_pane_idle_g1_cp

0x27e8,	// (0x00011ba8) popup_ai_links_title_window

0xc974,	// (0x0001bd34) soft_indicator_pane_cp1_ParamLimits

0xc974,	// (0x0001bd34) soft_indicator_pane_cp1

0x5d7d,	// (0x0001513d) ai_links_pane_g1

0x5d86,	// (0x00015146) grid_ai_links_pane

0xd93e,	// (0x0001ccfe) ai_gene_pane_1

0x5d6b,	// (0x0001512b) ai_gene_pane_2

0x5d74,	// (0x00015134) list_highlight_pane_cp4

0xd91a,	// (0x0001ccda) cell_ai_link_pane_ParamLimits

0xd91a,	// (0x0001ccda) cell_ai_link_pane

0x5d3c,	// (0x000150fc) cell_ai_link_pane_g1

0x2a21,	// (0x00011de1) cell_ai_link_pane_g2

0x0001,

0xf913,	// (0x0001ecd3) cell_ai_link_pane_g

0x250a,	// (0x000118ca) grid_highlight_cp2

0x250a,	// (0x000118ca) bg_popup_sub_pane_cp1

0x280b,	// (0x00011bcb) popup_ai_links_title_window_t1

0x5c8a,	// (0x0001504a) ai_gene_pane_1_g1_ParamLimits

0x5c8a,	// (0x0001504a) ai_gene_pane_1_g1

0x5c96,	// (0x00015056) ai_gene_pane_1_g2_ParamLimits

0x5c96,	// (0x00015056) ai_gene_pane_1_g2

0x0001,

0xf909,	// (0x0001ecc9) ai_gene_pane_1_g_ParamLimits

0xf909,	// (0x0001ecc9) ai_gene_pane_1_g

0x5ca3,	// (0x00015063) ai_gene_pane_1_t1_ParamLimits

0x5ca3,	// (0x00015063) ai_gene_pane_1_t1

0x5cd7,	// (0x00015097) grid_ai_soft_ind_pane

0x5c75,	// (0x00015035) ai_gene_pane_2_t1_ParamLimits

0x5c75,	// (0x00015035) ai_gene_pane_2_t1

0xc988,	// (0x0001bd48) main_pane_empty_t1_ParamLimits

0xc988,	// (0x0001bd48) main_pane_empty_t1

0xc9a0,	// (0x0001bd60) main_pane_empty_t2_ParamLimits

0xc9a0,	// (0x0001bd60) main_pane_empty_t2

0xc9b5,	// (0x0001bd75) main_pane_empty_t3_ParamLimits

0xc9b5,	// (0x0001bd75) main_pane_empty_t3

0xc9c7,	// (0x0001bd87) main_pane_empty_t4_ParamLimits

0xc9c7,	// (0x0001bd87) main_pane_empty_t4

0xc9d9,	// (0x0001bd99) main_pane_empty_t5_ParamLimits

0xc9d9,	// (0x0001bd99) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0001e93a) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0001e93a) main_pane_empty_t

0x3611,	// (0x000129d1) bg_popup_window_pane_ParamLimits

0x3611,	// (0x000129d1) bg_popup_window_pane

0x59e5,	// (0x00014da5) find_popup_pane_cp2_ParamLimits

0x59e5,	// (0x00014da5) find_popup_pane_cp2

0x59f1,	// (0x00014db1) heading_pane_ParamLimits

0x59f1,	// (0x00014db1) heading_pane

0x250a,	// (0x000118ca) bg_popup_sub_pane

0xd89b,	// (0x0001cc5b) bg_popup_window_pane_g1_ParamLimits

0xd89b,	// (0x0001cc5b) bg_popup_window_pane_g1

0xd8aa,	// (0x0001cc6a) bg_popup_window_pane_g2_ParamLimits

0xd8aa,	// (0x0001cc6a) bg_popup_window_pane_g2

0xd8b6,	// (0x0001cc76) bg_popup_window_pane_g3_ParamLimits

0xd8b6,	// (0x0001cc76) bg_popup_window_pane_g3

0xd8c2,	// (0x0001cc82) bg_popup_window_pane_g4_ParamLimits

0xd8c2,	// (0x0001cc82) bg_popup_window_pane_g4

0xd8d1,	// (0x0001cc91) bg_popup_window_pane_g5_ParamLimits

0xd8d1,	// (0x0001cc91) bg_popup_window_pane_g5

0xd8e1,	// (0x0001cca1) bg_popup_window_pane_g6_ParamLimits

0xd8e1,	// (0x0001cca1) bg_popup_window_pane_g6

0xd8ed,	// (0x0001ccad) bg_popup_window_pane_g7_ParamLimits

0xd8ed,	// (0x0001ccad) bg_popup_window_pane_g7

0xd8fc,	// (0x0001ccbc) bg_popup_window_pane_g8_ParamLimits

0xd8fc,	// (0x0001ccbc) bg_popup_window_pane_g8

0xd90b,	// (0x0001cccb) bg_popup_window_pane_g9_ParamLimits

0xd90b,	// (0x0001cccb) bg_popup_window_pane_g9

0x59cb,	// (0x00014d8b) bg_popup_window_pane_g10_ParamLimits

0x59cb,	// (0x00014d8b) bg_popup_window_pane_g10

0x0009,

0xf8d1,	// (0x0001ec91) bg_popup_window_pane_g_ParamLimits

0xf8d1,	// (0x0001ec91) bg_popup_window_pane_g

0x58f4,	// (0x00014cb4) bg_popup_heading_pane_ParamLimits

0x58f4,	// (0x00014cb4) bg_popup_heading_pane

0x15a9,	// (0x00010969) tabs_4_passive_pane_cp_srt_ParamLimits

0x15a9,	// (0x00010969) tabs_4_passive_pane_cp_srt

0x15bb,	// (0x0001097b) tabs_4_passive_pane_srt_ParamLimits

0x5908,	// (0x00014cc8) heading_pane_g2

0x15bb,	// (0x0001097b) tabs_4_passive_pane_srt

0x4c31,	// (0x00013ff1) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4c31,	// (0x00013ff1) bg_passive_tab_pane_cp3_srt

0x5910,	// (0x00014cd0) heading_pane_t1_ParamLimits

0x5910,	// (0x00014cd0) heading_pane_t1

0x5927,	// (0x00014ce7) heading_pane_t2_ParamLimits

0x5927,	// (0x00014ce7) heading_pane_t2

0x0001,

0xf8cc,	// (0x0001ec8c) heading_pane_t_ParamLimits

0xf8cc,	// (0x0001ec8c) heading_pane_t

0x5421,	// (0x000147e1) bg_popup_heading_pane_g1

0x54d0,	// (0x00014890) bg_popup_heading_pane_g2

0x54da,	// (0x0001489a) bg_popup_heading_pane_g3

0x54e4,	// (0x000148a4) bg_popup_heading_pane_g4

0x54ee,	// (0x000148ae) bg_popup_heading_pane_g5

0x54f8,	// (0x000148b8) bg_popup_heading_pane_g6

0x5500,	// (0x000148c0) bg_popup_heading_pane_g7

0x5508,	// (0x000148c8) bg_popup_heading_pane_g8

0x5512,	// (0x000148d2) bg_popup_heading_pane_g9

0x0008,

0xf888,	// (0x0001ec48) bg_popup_heading_pane_g

0x4b03,	// (0x00013ec3) bg_popup_sub_pane_g1

0x4b13,	// (0x00013ed3) bg_popup_sub_pane_g2

0x4b0b,	// (0x00013ecb) bg_popup_sub_pane_g3

0x4b23,	// (0x00013ee3) bg_popup_sub_pane_g4

0x4b1b,	// (0x00013edb) bg_popup_sub_pane_g5

0x4b2b,	// (0x00013eeb) bg_popup_sub_pane_g6

0x4b33,	// (0x00013ef3) bg_popup_sub_pane_g7

0x4b43,	// (0x00013f03) bg_popup_sub_pane_g8

0x4b3b,	// (0x00013efb) bg_popup_sub_pane_g9

0x0008,

0xf862,	// (0x0001ec22) bg_popup_sub_pane_g

0x287f,	// (0x00011c3f) bg_popup_window_pane_cp5_ParamLimits

0x287f,	// (0x00011c3f) bg_popup_window_pane_cp5

0x289b,	// (0x00011c5b) popup_note_window_g1_ParamLimits

0x289b,	// (0x00011c5b) popup_note_window_g1

0x28a7,	// (0x00011c67) popup_note_window_t1_ParamLimits

0x28a7,	// (0x00011c67) popup_note_window_t1

0x28bd,	// (0x00011c7d) popup_note_window_t2_ParamLimits

0x28bd,	// (0x00011c7d) popup_note_window_t2

0x28d3,	// (0x00011c93) popup_note_window_t3_ParamLimits

0x28d3,	// (0x00011c93) popup_note_window_t3

0x28e9,	// (0x00011ca9) popup_note_window_t4_ParamLimits

0x28e9,	// (0x00011ca9) popup_note_window_t4

0x2911,	// (0x00011cd1) popup_note_window_t5_ParamLimits

0x2911,	// (0x00011cd1) popup_note_window_t5

0x0004,

0xf585,	// (0x0001e945) popup_note_window_t_ParamLimits

0xf585,	// (0x0001e945) popup_note_window_t

0x2935,	// (0x00011cf5) bg_popup_window_pane_cp6_ParamLimits

0x2935,	// (0x00011cf5) bg_popup_window_pane_cp6

0x539d,	// (0x0001475d) popup_note_image_window_g1_ParamLimits

0x539d,	// (0x0001475d) popup_note_image_window_g1

0x53a9,	// (0x00014769) popup_note_image_window_g2_ParamLimits

0x53a9,	// (0x00014769) popup_note_image_window_g2

0x0001,

0xf856,	// (0x0001ec16) popup_note_image_window_g_ParamLimits

0xf856,	// (0x0001ec16) popup_note_image_window_g

0x53c2,	// (0x00014782) popup_note_image_window_t1_ParamLimits

0x53c2,	// (0x00014782) popup_note_image_window_t1

0x53db,	// (0x0001479b) popup_note_image_window_t2_ParamLimits

0x53db,	// (0x0001479b) popup_note_image_window_t2

0x53f4,	// (0x000147b4) popup_note_image_window_t3_ParamLimits

0x53f4,	// (0x000147b4) popup_note_image_window_t3

0x0002,

0xf85b,	// (0x0001ec1b) popup_note_image_window_t_ParamLimits

0xf85b,	// (0x0001ec1b) popup_note_image_window_t

0x525e,	// (0x0001461e) bg_popup_window_pane_cp7_ParamLimits

0x525e,	// (0x0001461e) bg_popup_window_pane_cp7

0x528e,	// (0x0001464e) popup_note_wait_window_g1_ParamLimits

0x528e,	// (0x0001464e) popup_note_wait_window_g1

0x529a,	// (0x0001465a) popup_note_wait_window_g2_ParamLimits

0x529a,	// (0x0001465a) popup_note_wait_window_g2

0x0002,

0xf844,	// (0x0001ec04) popup_note_wait_window_g_ParamLimits

0xf844,	// (0x0001ec04) popup_note_wait_window_g

0x52b2,	// (0x00014672) popup_note_wait_window_t1_ParamLimits

0x52b2,	// (0x00014672) popup_note_wait_window_t1

0x52d9,	// (0x00014699) popup_note_wait_window_t2_ParamLimits

0x52d9,	// (0x00014699) popup_note_wait_window_t2

0x52f6,	// (0x000146b6) popup_note_wait_window_t3_ParamLimits

0x52f6,	// (0x000146b6) popup_note_wait_window_t3

0x5309,	// (0x000146c9) popup_note_wait_window_t4_ParamLimits

0x5309,	// (0x000146c9) popup_note_wait_window_t4

0x0004,

0xf84b,	// (0x0001ec0b) popup_note_wait_window_t_ParamLimits

0xf84b,	// (0x0001ec0b) popup_note_wait_window_t

0x532e,	// (0x000146ee) wait_bar_pane_ParamLimits

0x532e,	// (0x000146ee) wait_bar_pane

0x250a,	// (0x000118ca) wait_anim_pane

0x250a,	// (0x000118ca) wait_border_pane

0x2500,	// (0x000118c0) wait_anim_pane_g1

0x2500,	// (0x000118c0) wait_anim_pane_g2

0x0001,

0xf704,	// (0x0001eac4) wait_anim_pane_g

0x5202,	// (0x000145c2) wait_border_pane_g1

0x520d,	// (0x000145cd) wait_border_pane_g2

0x5216,	// (0x000145d6) wait_border_pane_g3

0x0002,

0xf83d,	// (0x0001ebfd) wait_border_pane_g

0x5061,	// (0x00014421) bg_popup_window_pane_cp16_ParamLimits

0x5061,	// (0x00014421) bg_popup_window_pane_cp16

0x516d,	// (0x0001452d) indicator_popup_pane_cp4_ParamLimits

0x516d,	// (0x0001452d) indicator_popup_pane_cp4

0x5181,	// (0x00014541) popup_query_data_window_t1_ParamLimits

0x5181,	// (0x00014541) popup_query_data_window_t1

0x5193,	// (0x00014553) popup_query_data_window_t2_ParamLimits

0x5193,	// (0x00014553) popup_query_data_window_t2

0x51ac,	// (0x0001456c) popup_query_data_window_t3_ParamLimits

0x51ac,	// (0x0001456c) popup_query_data_window_t3

0x0002,

0xf836,	// (0x0001ebf6) popup_query_data_window_t_ParamLimits

0xf836,	// (0x0001ebf6) popup_query_data_window_t

0x51c6,	// (0x00014586) query_popup_data_pane_ParamLimits

0x51c6,	// (0x00014586) query_popup_data_pane

0x51da,	// (0x0001459a) query_popup_data_pane_cp1_ParamLimits

0x51da,	// (0x0001459a) query_popup_data_pane_cp1

0x5061,	// (0x00014421) bg_popup_window_pane_cp10_ParamLimits

0x5061,	// (0x00014421) bg_popup_window_pane_cp10

0x5093,	// (0x00014453) indicator_popup_pane_ParamLimits

0x5093,	// (0x00014453) indicator_popup_pane

0x50b5,	// (0x00014475) popup_query_code_window_t1_ParamLimits

0x50b5,	// (0x00014475) popup_query_code_window_t1

0x50cf,	// (0x0001448f) popup_query_code_window_t2_ParamLimits

0x50cf,	// (0x0001448f) popup_query_code_window_t2

0x5118,	// (0x000144d8) popup_query_code_window_t3_ParamLimits

0x5118,	// (0x000144d8) popup_query_code_window_t3

0x0002,

0xf82f,	// (0x0001ebef) popup_query_code_window_t_ParamLimits

0xf82f,	// (0x0001ebef) popup_query_code_window_t

0x5153,	// (0x00014513) query_popup_pane_ParamLimits

0x5153,	// (0x00014513) query_popup_pane

0x2935,	// (0x00011cf5) bg_popup_window_pane_cp15_ParamLimits

0x2935,	// (0x00011cf5) bg_popup_window_pane_cp15

0x2953,	// (0x00011d13) indicator_popup_pane_cp1_ParamLimits

0x2953,	// (0x00011d13) indicator_popup_pane_cp1

0x2966,	// (0x00011d26) indicator_popup_pane_cp2_ParamLimits

0x2966,	// (0x00011d26) indicator_popup_pane_cp2

0x2979,	// (0x00011d39) popup_query_data_code_window_g1_ParamLimits

0x2979,	// (0x00011d39) popup_query_data_code_window_g1

0x298c,	// (0x00011d4c) popup_query_data_code_window_t1_ParamLimits

0x298c,	// (0x00011d4c) popup_query_data_code_window_t1

0x299e,	// (0x00011d5e) popup_query_data_code_window_t2_ParamLimits

0x299e,	// (0x00011d5e) popup_query_data_code_window_t2

0x29b0,	// (0x00011d70) popup_query_data_code_window_t3_ParamLimits

0x29b0,	// (0x00011d70) popup_query_data_code_window_t3

0x29c6,	// (0x00011d86) popup_query_data_code_window_t4_ParamLimits

0x29c6,	// (0x00011d86) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0001e950) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0001e950) popup_query_data_code_window_t

0x126a,	// (0x0001062a) list_single_midp_graphic_pane_g3

0x29de,	// (0x00011d9e) query_popup_data_pane_cp2_ParamLimits

0x29f1,	// (0x00011db1) query_popup_pane_cp2_ParamLimits

0x29f1,	// (0x00011db1) query_popup_pane_cp2

0x250a,	// (0x000118ca) bg_popup_window_pane_cp11

0x5059,	// (0x00014419) heading_pane_cp5

0x2ad9,	// (0x00011e99) listscroll_popup_info_pane

0x250a,	// (0x000118ca) input_focus_pane_cp3

0x2a04,	// (0x00011dc4) query_popup_pane_t1

0x2a12,	// (0x00011dd2) list_popup_info_pane_ParamLimits

0x2a12,	// (0x00011dd2) list_popup_info_pane

0x2a21,	// (0x00011de1) listscroll_popup_info_pane_g1

0x2a29,	// (0x00011de9) scroll_pane_cp7

0x2a33,	// (0x00011df3) popup_info_list_pane_t1_ParamLimits

0x2a33,	// (0x00011df3) popup_info_list_pane_t1

0x2a4d,	// (0x00011e0d) popup_info_list_pane_t2_ParamLimits

0x2a4d,	// (0x00011e0d) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0001e959) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0001e959) popup_info_list_pane_t

0x250a,	// (0x000118ca) bg_popup_window_pane_cp12

0x64e5,	// (0x000158a5) find_popup_pane

0x25ea,	// (0x000119aa) bg_popup_window_pane_cp3

0x2a67,	// (0x00011e27) heading_pane_cp3

0x2a73,	// (0x00011e33) listscroll_popup_graphic_pane

0x250a,	// (0x000118ca) bg_popup_window_pane_cp4

0xca3b,	// (0x0001bdfb) heading_pane_cp4

0x2ad9,	// (0x00011e99) listscroll_popup_colour_pane

0x2ae1,	// (0x00011ea1) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x2ae1,	// (0x00011ea1) cell_large_graphic_colour_none_popup_pane

0xca43,	// (0x0001be03) grid_large_graphic_colour_popup_pane_ParamLimits

0xca43,	// (0x0001be03) grid_large_graphic_colour_popup_pane

0x2b21,	// (0x00011ee1) listscroll_popup_colour_pane_g1_ParamLimits

0x2b21,	// (0x00011ee1) listscroll_popup_colour_pane_g1

0x2b38,	// (0x00011ef8) listscroll_popup_colour_pane_g2_ParamLimits

0x2b38,	// (0x00011ef8) listscroll_popup_colour_pane_g2

0x2b4f,	// (0x00011f0f) listscroll_popup_colour_pane_g3_ParamLimits

0x2b4f,	// (0x00011f0f) listscroll_popup_colour_pane_g3

0xca67,	// (0x0001be27) listscroll_popup_colour_pane_g4_ParamLimits

0xca67,	// (0x0001be27) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0001e95e) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0001e95e) listscroll_popup_colour_pane_g

0x2b73,	// (0x00011f33) scroll_pane_cp6_ParamLimits

0x2b73,	// (0x00011f33) scroll_pane_cp6

0xca77,	// (0x0001be37) cell_large_graphic_colour_popup_pane_ParamLimits

0xca77,	// (0x0001be37) cell_large_graphic_colour_popup_pane

0x2ba4,	// (0x00011f64) cell_large_graphic_colour_none_popup_pane_t1

0x250a,	// (0x000118ca) grid_highlight_pane_cp5

0x2bb3,	// (0x00011f73) cell_large_graphic_colour_popup_pane_g1

0x2bbb,	// (0x00011f7b) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0001e967) cell_large_graphic_colour_popup_pane_g

0x2bc3,	// (0x00011f83) cell_large_graphic_colour_popup_pane_g2_copy1

0x2bcc,	// (0x00011f8c) grid_highlight_pane_cp4

0x2bd4,	// (0x00011f94) bg_popup_window_pane_cp8_ParamLimits

0x2bd4,	// (0x00011f94) bg_popup_window_pane_cp8

0x2bef,	// (0x00011faf) popup_snote_single_text_window_g1_ParamLimits

0x2bef,	// (0x00011faf) popup_snote_single_text_window_g1

0x2c01,	// (0x00011fc1) popup_snote_single_text_window_t1_ParamLimits

0x2c01,	// (0x00011fc1) popup_snote_single_text_window_t1

0x2c14,	// (0x00011fd4) popup_snote_single_text_window_t2_ParamLimits

0x2c14,	// (0x00011fd4) popup_snote_single_text_window_t2

0x2c27,	// (0x00011fe7) popup_snote_single_text_window_t3_ParamLimits

0x2c27,	// (0x00011fe7) popup_snote_single_text_window_t3

0x2c60,	// (0x00012020) popup_snote_single_text_window_t4_ParamLimits

0x2c60,	// (0x00012020) popup_snote_single_text_window_t4

0x2c94,	// (0x00012054) popup_snote_single_text_window_t5_ParamLimits

0x2c94,	// (0x00012054) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0001e96c) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0001e96c) popup_snote_single_text_window_t

0x2cc3,	// (0x00012083) bg_popup_window_pane_cp9_ParamLimits

0x2cc3,	// (0x00012083) bg_popup_window_pane_cp9

0x2bef,	// (0x00011faf) popup_snote_single_graphic_window_g1_ParamLimits

0x2bef,	// (0x00011faf) popup_snote_single_graphic_window_g1

0x2cd1,	// (0x00012091) popup_snote_single_graphic_window_g2_ParamLimits

0x2cd1,	// (0x00012091) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0001e977) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0001e977) popup_snote_single_graphic_window_g

0x2cdd,	// (0x0001209d) popup_snote_single_graphic_window_t1_ParamLimits

0x2cdd,	// (0x0001209d) popup_snote_single_graphic_window_t1

0x2cf0,	// (0x000120b0) popup_snote_single_graphic_window_t2_ParamLimits

0x2cf0,	// (0x000120b0) popup_snote_single_graphic_window_t2

0x2d03,	// (0x000120c3) popup_snote_single_graphic_window_t3_ParamLimits

0x2d03,	// (0x000120c3) popup_snote_single_graphic_window_t3

0x2d3c,	// (0x000120fc) popup_snote_single_graphic_window_t4_ParamLimits

0x2d3c,	// (0x000120fc) popup_snote_single_graphic_window_t4

0x2d70,	// (0x00012130) popup_snote_single_graphic_window_t5_ParamLimits

0x2d70,	// (0x00012130) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0001e97c) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0001e97c) popup_snote_single_graphic_window_t

0x6429,	// (0x000157e9) grid_graphic_popup_pane_ParamLimits

0x6429,	// (0x000157e9) grid_graphic_popup_pane

0x6451,	// (0x00015811) listscroll_popup_graphic_pane_g1_ParamLimits

0x6451,	// (0x00015811) listscroll_popup_graphic_pane_g1

0xdc39,	// (0x0001cff9) listscroll_popup_graphic_pane_g2_ParamLimits

0xdc39,	// (0x0001cff9) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ac,	// (0x0001ed6c) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ac,	// (0x0001ed6c) listscroll_popup_graphic_pane_g

0x6479,	// (0x00015839) scroll_pane_cp5

0xdbfc,	// (0x0001cfbc) cell_graphic_popup_pane_ParamLimits

0xdbfc,	// (0x0001cfbc) cell_graphic_popup_pane

0x63b3,	// (0x00015773) cell_graphic_popup_pane_g1

0x63bb,	// (0x0001577b) cell_graphic_popup_pane_g2

0x2bc3,	// (0x00011f83) cell_graphic_popup_pane_g3

0x0002,

0xf9a5,	// (0x0001ed65) cell_graphic_popup_pane_g

0x63c4,	// (0x00015784) cell_graphic_popup_pane_t2

0x2bcc,	// (0x00011f8c) grid_highlight_pane_cp3

0x2db1,	// (0x00012171) list_gen_pane_ParamLimits

0x2db1,	// (0x00012171) list_gen_pane

0x2de3,	// (0x000121a3) scroll_pane

0xdbb3,	// (0x0001cf73) bg_list_pane_g1_ParamLimits

0xdbb3,	// (0x0001cf73) bg_list_pane_g1

0x6328,	// (0x000156e8) bg_list_pane_g2_ParamLimits

0x6328,	// (0x000156e8) bg_list_pane_g2

0x633d,	// (0x000156fd) bg_list_pane_g3_ParamLimits

0x633d,	// (0x000156fd) bg_list_pane_g3

0x6351,	// (0x00015711) bg_list_pane_g4_ParamLimits

0x6351,	// (0x00015711) bg_list_pane_g4

0xdbd0,	// (0x0001cf90) bg_list_pane_g5_ParamLimits

0xdbd0,	// (0x0001cf90) bg_list_pane_g5

0x0004,

0xf99a,	// (0x0001ed5a) bg_list_pane_g_ParamLimits

0xf99a,	// (0x0001ed5a) bg_list_pane_g

0xdb59,	// (0x0001cf19) list_double2_graphic_large_graphic_pane_ParamLimits

0xdb59,	// (0x0001cf19) list_double2_graphic_large_graphic_pane

0xdb59,	// (0x0001cf19) list_double2_graphic_pane_ParamLimits

0xdb59,	// (0x0001cf19) list_double2_graphic_pane

0xdb59,	// (0x0001cf19) list_double2_large_graphic_pane_ParamLimits

0xdb59,	// (0x0001cf19) list_double2_large_graphic_pane

0xdb59,	// (0x0001cf19) list_double2_pane_ParamLimits

0xdb59,	// (0x0001cf19) list_double2_pane

0xdb59,	// (0x0001cf19) list_double_graphic_heading_pane_ParamLimits

0xdb59,	// (0x0001cf19) list_double_graphic_heading_pane

0xdb59,	// (0x0001cf19) list_double_graphic_pane_ParamLimits

0xdb59,	// (0x0001cf19) list_double_graphic_pane

0xdb59,	// (0x0001cf19) list_double_heading_pane_ParamLimits

0xdb59,	// (0x0001cf19) list_double_heading_pane

0xdb59,	// (0x0001cf19) list_double_large_graphic_pane_ParamLimits

0xdb59,	// (0x0001cf19) list_double_large_graphic_pane

0xdb59,	// (0x0001cf19) list_double_number_pane_ParamLimits

0xdb59,	// (0x0001cf19) list_double_number_pane

0xdb59,	// (0x0001cf19) list_double_pane_ParamLimits

0xdb59,	// (0x0001cf19) list_double_pane

0xdb59,	// (0x0001cf19) list_double_time_pane_ParamLimits

0xdb59,	// (0x0001cf19) list_double_time_pane

0xdb59,	// (0x0001cf19) list_setting_number_pane_ParamLimits

0xdb59,	// (0x0001cf19) list_setting_number_pane

0xdb59,	// (0x0001cf19) list_setting_pane_ParamLimits

0xdb59,	// (0x0001cf19) list_setting_pane

0xdb6b,	// (0x0001cf2b) list_single_2graphic_pane_ParamLimits

0xdb6b,	// (0x0001cf2b) list_single_2graphic_pane

0xdb6b,	// (0x0001cf2b) list_single_graphic_heading_pane_ParamLimits

0xdb6b,	// (0x0001cf2b) list_single_graphic_heading_pane

0xdb6b,	// (0x0001cf2b) list_single_graphic_pane_ParamLimits

0xdb6b,	// (0x0001cf2b) list_single_graphic_pane

0xdb6b,	// (0x0001cf2b) list_single_heading_pane_ParamLimits

0xdb6b,	// (0x0001cf2b) list_single_heading_pane

0xdb6b,	// (0x0001cf2b) list_single_large_graphic_pane_ParamLimits

0xdb6b,	// (0x0001cf2b) list_single_large_graphic_pane

0xdb6b,	// (0x0001cf2b) list_single_number_heading_pane_ParamLimits

0xdb6b,	// (0x0001cf2b) list_single_number_heading_pane

0xdb6b,	// (0x0001cf2b) list_single_number_pane_ParamLimits

0xdb6b,	// (0x0001cf2b) list_single_number_pane

0xdb6b,	// (0x0001cf2b) list_single_pane_ParamLimits

0xdb6b,	// (0x0001cf2b) list_single_pane

0x250a,	// (0x000118ca) list_highlight_pane_cp1

0x41b4,	// (0x00013574) list_single_pane_g1_ParamLimits

0x41b4,	// (0x00013574) list_single_pane_g1

0x4a85,	// (0x00013e45) list_single_pane_g2_ParamLimits

0x4a85,	// (0x00013e45) list_single_pane_g2

0x0001,

0xf5ce,	// (0x0001e98e) list_single_pane_g_ParamLimits

0xf5ce,	// (0x0001e98e) list_single_pane_g

0x6ada,	// (0x00015e9a) list_single_pane_t1_ParamLimits

0x6ada,	// (0x00015e9a) list_single_pane_t1

0x41b4,	// (0x00013574) list_single_number_pane_g1_ParamLimits

0x41b4,	// (0x00013574) list_single_number_pane_g1

0x4a85,	// (0x00013e45) list_single_number_pane_g2_ParamLimits

0x4a85,	// (0x00013e45) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x0001e98e) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x0001e98e) list_single_number_pane_g

0x4a91,	// (0x00013e51) list_single_number_pane_t1_ParamLimits

0x4a91,	// (0x00013e51) list_single_number_pane_t1

0xd9aa,	// (0x0001cd6a) list_single_number_pane_t2_ParamLimits

0xd9aa,	// (0x0001cd6a) list_single_number_pane_t2

0x0001,

0xf95b,	// (0x0001ed1b) list_single_number_pane_t_ParamLimits

0xf95b,	// (0x0001ed1b) list_single_number_pane_t

0xcaa0,	// (0x0001be60) list_single_graphic_pane_g1_ParamLimits

0xcaa0,	// (0x0001be60) list_single_graphic_pane_g1

0x41b4,	// (0x00013574) list_single_graphic_pane_g2_ParamLimits

0x41b4,	// (0x00013574) list_single_graphic_pane_g2

0x4a85,	// (0x00013e45) list_single_graphic_pane_g3_ParamLimits

0x4a85,	// (0x00013e45) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0001e987) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0001e987) list_single_graphic_pane_g

0xcaac,	// (0x0001be6c) list_single_graphic_pane_t1_ParamLimits

0xcaac,	// (0x0001be6c) list_single_graphic_pane_t1

0x41b4,	// (0x00013574) list_single_heading_pane_g1_ParamLimits

0x41b4,	// (0x00013574) list_single_heading_pane_g1

0x4a85,	// (0x00013e45) list_single_heading_pane_g2_ParamLimits

0x4a85,	// (0x00013e45) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0001e98e) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0001e98e) list_single_heading_pane_g

0xcac2,	// (0x0001be82) list_single_heading_pane_t1_ParamLimits

0xcac2,	// (0x0001be82) list_single_heading_pane_t1

0xcad8,	// (0x0001be98) list_single_heading_pane_t2_ParamLimits

0xcad8,	// (0x0001be98) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0001e993) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0001e993) list_single_heading_pane_t

0x41b4,	// (0x00013574) list_single_number_heading_pane_g1_ParamLimits

0x41b4,	// (0x00013574) list_single_number_heading_pane_g1

0x4a85,	// (0x00013e45) list_single_number_heading_pane_g2_ParamLimits

0x4a85,	// (0x00013e45) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x0001e98e) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x0001e98e) list_single_number_heading_pane_g

0xcac2,	// (0x0001be82) list_single_number_heading_pane_t1_ParamLimits

0xcac2,	// (0x0001be82) list_single_number_heading_pane_t1

0xcaea,	// (0x0001beaa) list_single_number_heading_pane_t2_ParamLimits

0xcaea,	// (0x0001beaa) list_single_number_heading_pane_t2

0x6ab4,	// (0x00015e74) list_single_number_heading_pane_t3_ParamLimits

0x6ab4,	// (0x00015e74) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0001e998) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0001e998) list_single_number_heading_pane_t

0x4a79,	// (0x00013e39) list_single_graphic_heading_pane_g1_ParamLimits

0x4a79,	// (0x00013e39) list_single_graphic_heading_pane_g1

0xcafc,	// (0x0001bebc) list_single_graphic_heading_pane_g4_ParamLimits

0xcafc,	// (0x0001bebc) list_single_graphic_heading_pane_g4

0x4a85,	// (0x00013e45) list_single_graphic_heading_pane_g5_ParamLimits

0x4a85,	// (0x00013e45) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x0001e99f) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x0001e99f) list_single_graphic_heading_pane_g

0xcac2,	// (0x0001be82) list_single_graphic_heading_pane_t1_ParamLimits

0xcac2,	// (0x0001be82) list_single_graphic_heading_pane_t1

0xcb0d,	// (0x0001becd) list_single_graphic_heading_pane_t2_ParamLimits

0xcb0d,	// (0x0001becd) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x0001e9a6) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x0001e9a6) list_single_graphic_heading_pane_t

0x6af0,	// (0x00015eb0) list_single_large_graphic_pane_g1_ParamLimits

0x6af0,	// (0x00015eb0) list_single_large_graphic_pane_g1

0x41b4,	// (0x00013574) list_single_large_graphic_pane_g2_ParamLimits

0x41b4,	// (0x00013574) list_single_large_graphic_pane_g2

0x4a85,	// (0x00013e45) list_single_large_graphic_pane_g3_ParamLimits

0x4a85,	// (0x00013e45) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x0001e9ab) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x0001e9ab) list_single_large_graphic_pane_g

0x520d,	// (0x000145cd) wait_border_pane_g2_copy1

0xcb1f,	// (0x0001bedf) list_single_large_graphic_pane_g4_cp2

0x6afc,	// (0x00015ebc) list_single_large_graphic_pane_t1_ParamLimits

0x6afc,	// (0x00015ebc) list_single_large_graphic_pane_t1

0x5147,	// (0x00014507) list_double_pane_g1_ParamLimits

0x5147,	// (0x00014507) list_double_pane_g1

0xcb27,	// (0x0001bee7) list_double_pane_g2_ParamLimits

0xcb27,	// (0x0001bee7) list_double_pane_g2

0x0001,

0xf5f2,	// (0x0001e9b2) list_double_pane_g_ParamLimits

0xf5f2,	// (0x0001e9b2) list_double_pane_g

0x833c,	// (0x000176fc) list_double_pane_t1_ParamLimits

0x833c,	// (0x000176fc) list_double_pane_t1

0xcb33,	// (0x0001bef3) list_double_pane_t2_ParamLimits

0xcb33,	// (0x0001bef3) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0001e9b7) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0001e9b7) list_double_pane_t

0xcb45,	// (0x0001bf05) list_double2_pane_g1_ParamLimits

0xcb45,	// (0x0001bf05) list_double2_pane_g1

0xcb56,	// (0x0001bf16) list_double2_pane_g2_ParamLimits

0xcb56,	// (0x0001bf16) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x0001e9bc) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x0001e9bc) list_double2_pane_g

0xcb62,	// (0x0001bf22) list_double2_pane_t1_ParamLimits

0xcb62,	// (0x0001bf22) list_double2_pane_t1

0xcb78,	// (0x0001bf38) list_double2_pane_t2_ParamLimits

0xcb78,	// (0x0001bf38) list_double2_pane_t2

0x0001,

0xf601,	// (0x0001e9c1) list_double2_pane_t_ParamLimits

0xf601,	// (0x0001e9c1) list_double2_pane_t

0x5147,	// (0x00014507) list_double_number_pane_g1_ParamLimits

0x5147,	// (0x00014507) list_double_number_pane_g1

0xcb27,	// (0x0001bee7) list_double_number_pane_g2_ParamLimits

0xcb27,	// (0x0001bee7) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x0001e9b2) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x0001e9b2) list_double_number_pane_g

0xcb8a,	// (0x0001bf4a) list_double_number_pane_t1_ParamLimits

0xcb8a,	// (0x0001bf4a) list_double_number_pane_t1

0xcb9c,	// (0x0001bf5c) list_double_number_pane_t2_ParamLimits

0xcb9c,	// (0x0001bf5c) list_double_number_pane_t2

0xcbb2,	// (0x0001bf72) list_double_number_pane_t3_ParamLimits

0xcbb2,	// (0x0001bf72) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0001e9c6) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0001e9c6) list_double_number_pane_t

0xcbc4,	// (0x0001bf84) list_double_graphic_pane_g1_ParamLimits

0xcbc4,	// (0x0001bf84) list_double_graphic_pane_g1

0xcbd0,	// (0x0001bf90) list_double_graphic_pane_g2_ParamLimits

0xcbd0,	// (0x0001bf90) list_double_graphic_pane_g2

0xcbdf,	// (0x0001bf9f) list_double_graphic_pane_g3_ParamLimits

0xcbdf,	// (0x0001bf9f) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x0001e9cd) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x0001e9cd) list_double_graphic_pane_g

0xcbf7,	// (0x0001bfb7) list_double_graphic_pane_t1_ParamLimits

0xcbf7,	// (0x0001bfb7) list_double_graphic_pane_t1

0xcc0d,	// (0x0001bfcd) list_double_graphic_pane_t2_ParamLimits

0xcc0d,	// (0x0001bfcd) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x0001e9d6) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x0001e9d6) list_double_graphic_pane_t

0xcc1f,	// (0x0001bfdf) list_double2_graphic_pane_g1_ParamLimits

0xcc1f,	// (0x0001bfdf) list_double2_graphic_pane_g1

0x409f,	// (0x0001345f) list_double2_graphic_pane_g2_ParamLimits

0x409f,	// (0x0001345f) list_double2_graphic_pane_g2

0xcb56,	// (0x0001bf16) list_double2_graphic_pane_g3_ParamLimits

0xcb56,	// (0x0001bf16) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0001e9db) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0001e9db) list_double2_graphic_pane_g

0xcc2b,	// (0x0001bfeb) list_double2_graphic_pane_t1_ParamLimits

0xcc2b,	// (0x0001bfeb) list_double2_graphic_pane_t1

0xcc41,	// (0x0001c001) list_double2_graphic_pane_t2_ParamLimits

0xcc41,	// (0x0001c001) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x0001e9e2) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x0001e9e2) list_double2_graphic_pane_t

0xcc53,	// (0x0001c013) list_double_large_graphic_pane_g1_ParamLimits

0xcc53,	// (0x0001c013) list_double_large_graphic_pane_g1

0xcc72,	// (0x0001c032) list_double_large_graphic_pane_g2_ParamLimits

0xcc72,	// (0x0001c032) list_double_large_graphic_pane_g2

0xcb27,	// (0x0001bee7) list_double_large_graphic_pane_g3_ParamLimits

0xcb27,	// (0x0001bee7) list_double_large_graphic_pane_g3

0xcc83,	// (0x0001c043) list_double_large_graphic_pane_g4_ParamLimits

0xcc83,	// (0x0001c043) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0001e9e7) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0001e9e7) list_double_large_graphic_pane_g

0xcc95,	// (0x0001c055) list_double_large_graphic_pane_t1_ParamLimits

0xcc95,	// (0x0001c055) list_double_large_graphic_pane_t1

0xccae,	// (0x0001c06e) list_double_large_graphic_pane_t2_ParamLimits

0xccae,	// (0x0001c06e) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x0001e9f2) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x0001e9f2) list_double_large_graphic_pane_t

0xccc0,	// (0x0001c080) list_double2_large_graphic_pane_g1_ParamLimits

0xccc0,	// (0x0001c080) list_double2_large_graphic_pane_g1

0xcb45,	// (0x0001bf05) list_double2_large_graphic_pane_g2_ParamLimits

0xcb45,	// (0x0001bf05) list_double2_large_graphic_pane_g2

0xcb56,	// (0x0001bf16) list_double2_large_graphic_pane_g3_ParamLimits

0xcb56,	// (0x0001bf16) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x0001e9f7) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x0001e9f7) list_double2_large_graphic_pane_g

0xcccc,	// (0x0001c08c) list_double2_large_graphic_pane_t1_ParamLimits

0xcccc,	// (0x0001c08c) list_double2_large_graphic_pane_t1

0xcce2,	// (0x0001c0a2) list_double2_large_graphic_pane_t2_ParamLimits

0xcce2,	// (0x0001c0a2) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0001e9fe) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0001e9fe) list_double2_large_graphic_pane_t

0xccf4,	// (0x0001c0b4) list_double_heading_pane_g1_ParamLimits

0xccf4,	// (0x0001c0b4) list_double_heading_pane_g1

0xcd05,	// (0x0001c0c5) list_double_heading_pane_g2_ParamLimits

0xcd05,	// (0x0001c0c5) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x0001ea03) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x0001ea03) list_double_heading_pane_g

0xcd11,	// (0x0001c0d1) list_double_heading_pane_t1_ParamLimits

0xcd11,	// (0x0001c0d1) list_double_heading_pane_t1

0xcd27,	// (0x0001c0e7) list_double_heading_pane_t2_ParamLimits

0xcd27,	// (0x0001c0e7) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0001ea08) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0001ea08) list_double_heading_pane_t

0x2fcd,	// (0x0001238d) list_double_graphic_heading_pane_g1_ParamLimits

0x2fcd,	// (0x0001238d) list_double_graphic_heading_pane_g1

0xccf4,	// (0x0001c0b4) list_double_graphic_heading_pane_g2_ParamLimits

0xccf4,	// (0x0001c0b4) list_double_graphic_heading_pane_g2

0xcd05,	// (0x0001c0c5) list_double_graphic_heading_pane_g3_ParamLimits

0xcd05,	// (0x0001c0c5) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0001ea0d) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0001ea0d) list_double_graphic_heading_pane_g

0xcd39,	// (0x0001c0f9) list_double_graphic_heading_pane_t1_ParamLimits

0xcd39,	// (0x0001c0f9) list_double_graphic_heading_pane_t1

0xcd4f,	// (0x0001c10f) list_double_graphic_heading_pane_t2_ParamLimits

0xcd4f,	// (0x0001c10f) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x0001ea14) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x0001ea14) list_double_graphic_heading_pane_t

0xcc72,	// (0x0001c032) list_double_time_pane_g1_ParamLimits

0xcc72,	// (0x0001c032) list_double_time_pane_g1

0xcb27,	// (0x0001bee7) list_double_time_pane_g2_ParamLimits

0xcb27,	// (0x0001bee7) list_double_time_pane_g2

0x0001,

0xf659,	// (0x0001ea19) list_double_time_pane_g_ParamLimits

0xf659,	// (0x0001ea19) list_double_time_pane_g

0xcd61,	// (0x0001c121) list_double_time_pane_t1_ParamLimits

0xcd61,	// (0x0001c121) list_double_time_pane_t1

0xcd77,	// (0x0001c137) list_double_time_pane_t2_ParamLimits

0xcd77,	// (0x0001c137) list_double_time_pane_t2

0xcd89,	// (0x0001c149) list_double_time_pane_t3_ParamLimits

0xcd89,	// (0x0001c149) list_double_time_pane_t3

0xcd9b,	// (0x0001c15b) list_double_time_pane_t4_ParamLimits

0xcd9b,	// (0x0001c15b) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x0001ea1e) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x0001ea1e) list_double_time_pane_t

0x409f,	// (0x0001345f) list_setting_pane_g1_ParamLimits

0x409f,	// (0x0001345f) list_setting_pane_g1

0xcb56,	// (0x0001bf16) list_setting_pane_g2_ParamLimits

0xcb56,	// (0x0001bf16) list_setting_pane_g2

0x0001,

0xf667,	// (0x0001ea27) list_setting_pane_g_ParamLimits

0xf667,	// (0x0001ea27) list_setting_pane_g

0xcdad,	// (0x0001c16d) list_setting_pane_t1_ParamLimits

0xcdad,	// (0x0001c16d) list_setting_pane_t1

0xcdc4,	// (0x0001c184) list_setting_pane_t2_ParamLimits

0xcdc4,	// (0x0001c184) list_setting_pane_t2

0x0002,

0xf66c,	// (0x0001ea2c) list_setting_pane_t_ParamLimits

0xf66c,	// (0x0001ea2c) list_setting_pane_t

0xce03,	// (0x0001c1c3) set_value_pane_cp_ParamLimits

0xce03,	// (0x0001c1c3) set_value_pane_cp

0x409f,	// (0x0001345f) list_setting_number_pane_g1_ParamLimits

0x409f,	// (0x0001345f) list_setting_number_pane_g1

0xcb56,	// (0x0001bf16) list_setting_number_pane_g2_ParamLimits

0xcb56,	// (0x0001bf16) list_setting_number_pane_g2

0x0001,

0xf667,	// (0x0001ea27) list_setting_number_pane_g_ParamLimits

0xf667,	// (0x0001ea27) list_setting_number_pane_g

0xce0f,	// (0x0001c1cf) list_setting_number_pane_t1_ParamLimits

0xce0f,	// (0x0001c1cf) list_setting_number_pane_t1

0xce23,	// (0x0001c1e3) list_setting_number_pane_t2_ParamLimits

0xce23,	// (0x0001c1e3) list_setting_number_pane_t2

0xce3a,	// (0x0001c1fa) list_setting_number_pane_t3_ParamLimits

0xce3a,	// (0x0001c1fa) list_setting_number_pane_t3

0x0003,

0xf673,	// (0x0001ea33) list_setting_number_pane_t_ParamLimits

0xf673,	// (0x0001ea33) list_setting_number_pane_t

0xce03,	// (0x0001c1c3) set_value_pane_ParamLimits

0xce03,	// (0x0001c1c3) set_value_pane

0x32b2,	// (0x00012672) bg_set_opt_pane_ParamLimits

0x32b2,	// (0x00012672) bg_set_opt_pane

0x32d3,	// (0x00012693) set_value_pane_t1

0x32e1,	// (0x000126a1) slider_set_pane_cp3

0x32ea,	// (0x000126aa) volume_small_pane_cp

0x32f3,	// (0x000126b3) list_form_gen_pane

0x32fc,	// (0x000126bc) scroll_pane_cp8

0xce7d,	// (0x0001c23d) form_field_data_pane_ParamLimits

0xce7d,	// (0x0001c23d) form_field_data_pane

0xce94,	// (0x0001c254) form_field_data_wide_pane_ParamLimits

0xce94,	// (0x0001c254) form_field_data_wide_pane

0xceb4,	// (0x0001c274) form_field_popup_pane_ParamLimits

0xceb4,	// (0x0001c274) form_field_popup_pane

0xcecc,	// (0x0001c28c) form_field_popup_wide_pane_ParamLimits

0xcecc,	// (0x0001c28c) form_field_popup_wide_pane

0x3397,	// (0x00012757) form_field_slider_pane_ParamLimits

0x3397,	// (0x00012757) form_field_slider_pane

0x33aa,	// (0x0001276a) form_field_slider_wide_pane_ParamLimits

0x33aa,	// (0x0001276a) form_field_slider_wide_pane

0x33bd,	// (0x0001277d) data_form_pane

0xceed,	// (0x0001c2ad) form_field_data_pane_t1

0x33eb,	// (0x000127ab) input_focus_pane

0x33f9,	// (0x000127b9) data_form_wide_pane

0x3425,	// (0x000127e5) form_field_data_wide_pane_t1

0x2be1,	// (0x00011fa1) input_focus_pane_cp6

0xcf07,	// (0x0001c2c7) form_field_popup_pane_t1

0x33eb,	// (0x000127ab) input_focus_pane_cp7

0x345c,	// (0x0001281c) list_form_pane

0x3470,	// (0x00012830) form_field_popup_wide_pane_t1

0x33eb,	// (0x000127ab) input_focus_pane_cp8

0x3485,	// (0x00012845) list_form_wide_pane

0xcf29,	// (0x0001c2e9) form_field_slider_pane_t1_ParamLimits

0xcf29,	// (0x0001c2e9) form_field_slider_pane_t1

0xcf41,	// (0x0001c301) form_field_slider_pane_t2_ParamLimits

0xcf41,	// (0x0001c301) form_field_slider_pane_t2

0x0001,

0xf683,	// (0x0001ea43) form_field_slider_pane_t_ParamLimits

0xf683,	// (0x0001ea43) form_field_slider_pane_t

0x287f,	// (0x00011c3f) input_focus_pane_cp9_ParamLimits

0x287f,	// (0x00011c3f) input_focus_pane_cp9

0xcf56,	// (0x0001c316) slider_cont_pane_ParamLimits

0xcf56,	// (0x0001c316) slider_cont_pane

0x34d4,	// (0x00012894) form_field_slider_wide_pane_t1_ParamLimits

0x34d4,	// (0x00012894) form_field_slider_wide_pane_t1

0x34e6,	// (0x000128a6) form_field_slider_wide_pane_t2_ParamLimits

0x34e6,	// (0x000128a6) form_field_slider_wide_pane_t2

0x0001,

0xf688,	// (0x0001ea48) form_field_slider_wide_pane_t_ParamLimits

0xf688,	// (0x0001ea48) form_field_slider_wide_pane_t

0x287f,	// (0x00011c3f) input_focus_pane_cp10_ParamLimits

0x287f,	// (0x00011c3f) input_focus_pane_cp10

0xcf6a,	// (0x0001c32a) slider_cont_pane_cp1_ParamLimits

0xcf6a,	// (0x0001c32a) slider_cont_pane_cp1

0xcf7e,	// (0x0001c33e) slider_form_pane_cp

0x3514,	// (0x000128d4) input_focus_pane_g1

0x351c,	// (0x000128dc) input_focus_pane_g2

0x3524,	// (0x000128e4) input_focus_pane_g3

0x352c,	// (0x000128ec) input_focus_pane_g4

0x3534,	// (0x000128f4) input_focus_pane_g5

0x353c,	// (0x000128fc) input_focus_pane_g6

0x3544,	// (0x00012904) input_focus_pane_g7

0x354c,	// (0x0001290c) input_focus_pane_g8

0x3554,	// (0x00012914) input_focus_pane_g9

0x2500,	// (0x000118c0) input_focus_pane_g10

0x0009,

0xf68d,	// (0x0001ea4d) input_focus_pane_g

0x5216,	// (0x000145d6) wait_border_pane_g3_copy1

0xcf86,	// (0x0001c346) data_form_pane_t1

0x2500,	// (0x000118c0) wait_anim_pane_g1_copy1

0xdb3d,	// (0x0001cefd) data_form_wide_pane_t1

0xcfa0,	// (0x0001c360) list_form_graphic_pane_cp_ParamLimits

0xcfa0,	// (0x0001c360) list_form_graphic_pane_cp

0x619d,	// (0x0001555d) slider_form_pane_g1

0x61a6,	// (0x00015566) slider_form_pane_g2

0x0006,

0xf98b,	// (0x0001ed4b) slider_form_pane_g

0xcfa0,	// (0x0001c360) list_form_graphic_pane_ParamLimits

0xcfa0,	// (0x0001c360) list_form_graphic_pane

0x35ac,	// (0x0001296c) list_form_graphic_pane_g1

0x35b4,	// (0x00012974) list_form_graphic_pane_t1_ParamLimits

0x35b4,	// (0x00012974) list_form_graphic_pane_t1

0x25ea,	// (0x000119aa) list_highlight_pane_cp5_ParamLimits

0x25ea,	// (0x000119aa) list_highlight_pane_cp5

0xcfb2,	// (0x0001c372) find_pane_g1

0x35d2,	// (0x00012992) input_find_pane

0xcfbb,	// (0x0001c37b) input_find_pane_g1_ParamLimits

0xcfbb,	// (0x0001c37b) input_find_pane_g1

0xcfc7,	// (0x0001c387) input_find_pane_t1_ParamLimits

0xcfc7,	// (0x0001c387) input_find_pane_t1

0xcfdc,	// (0x0001c39c) input_find_pane_t2_ParamLimits

0xcfdc,	// (0x0001c39c) input_find_pane_t2

0x0001,

0xf6a2,	// (0x0001ea62) input_find_pane_t_ParamLimits

0xf6a2,	// (0x0001ea62) input_find_pane_t

0x3611,	// (0x000129d1) input_focus_pane_cp5_ParamLimits

0x3611,	// (0x000129d1) input_focus_pane_cp5

0x362b,	// (0x000129eb) bg_popup_window_pane_cp2_ParamLimits

0x362b,	// (0x000129eb) bg_popup_window_pane_cp2

0x3638,	// (0x000129f8) listscroll_menu_pane_ParamLimits

0x3638,	// (0x000129f8) listscroll_menu_pane

0xcffd,	// (0x0001c3bd) popup_submenu_window_ParamLimits

0xcffd,	// (0x0001c3bd) popup_submenu_window

0x3670,	// (0x00012a30) find_popup_pane_g1

0x3678,	// (0x00012a38) input_popup_find_pane_cp

0x3611,	// (0x000129d1) input_focus_pane_cp4_ParamLimits

0x3611,	// (0x000129d1) input_focus_pane_cp4

0x368e,	// (0x00012a4e) input_popup_find_pane_t1_ParamLimits

0x368e,	// (0x00012a4e) input_popup_find_pane_t1

0x250a,	// (0x000118ca) bg_popup_sub_pane_cp

0x36bc,	// (0x00012a7c) listscroll_popup_sub_pane

0x36c4,	// (0x00012a84) list_submenu_pane_ParamLimits

0x36c4,	// (0x00012a84) list_submenu_pane

0x36d5,	// (0x00012a95) scroll_pane_cp4

0x36dd,	// (0x00012a9d) list_single_popup_submenu_pane_ParamLimits

0x36dd,	// (0x00012a9d) list_single_popup_submenu_pane

0x36f1,	// (0x00012ab1) list_single_popup_submenu_pane_g1

0x36f9,	// (0x00012ab9) list_single_popup_submenu_pane_t1_ParamLimits

0x36f9,	// (0x00012ab9) list_single_popup_submenu_pane_t1

0x287f,	// (0x00011c3f) bg_active_tab_pane_cp1_ParamLimits

0x287f,	// (0x00011c3f) bg_active_tab_pane_cp1

0x370e,	// (0x00012ace) tabs_2_active_pane_g1

0xd037,	// (0x0001c3f7) tabs_2_active_pane_t1

0x287f,	// (0x00011c3f) bg_passive_tab_pane_cp1_ParamLimits

0x287f,	// (0x00011c3f) bg_passive_tab_pane_cp1

0x370e,	// (0x00012ace) tabs_2_passive_pane_g1

0xd037,	// (0x0001c3f7) tabs_2_passive_pane_t1

0x25ea,	// (0x000119aa) bg_active_tab_pane_cp4

0xd049,	// (0x0001c409) tabs_2_long_active_pane_t1

0x45c3,	// (0x00013983) bg_passive_tab_pane_cp4

0x1272,	// (0x00010632) list_single_midp_graphic_pane_g4_ParamLimits

0x25ea,	// (0x000119aa) bg_active_tab_pane_cp5

0xd05c,	// (0x0001c41c) tabs_3_long_active_pane_t1

0x45c3,	// (0x00013983) bg_passive_tab_pane_cp5

0x1272,	// (0x00010632) list_single_midp_graphic_pane_g4

0x25ea,	// (0x000119aa) bg_popup_window_pane_cp13_ParamLimits

0x25ea,	// (0x000119aa) bg_popup_window_pane_cp13

0x3770,	// (0x00012b30) listscroll_popup_fast_pane_ParamLimits

0x3770,	// (0x00012b30) listscroll_popup_fast_pane

0x377f,	// (0x00012b3f) grid_popup_fast_pane_ParamLimits

0x377f,	// (0x00012b3f) grid_popup_fast_pane

0x3791,	// (0x00012b51) scroll_pane_cp9_ParamLimits

0x3791,	// (0x00012b51) scroll_pane_cp9

0x800b,	// (0x000173cb) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x800b,	// (0x000173cb) list_single_graphic_hl_pane_t1_cp2

0x37b5,	// (0x00012b75) input_focus_pane_cp20_ParamLimits

0x37b5,	// (0x00012b75) input_focus_pane_cp20

0x37c3,	// (0x00012b83) query_popup_data_pane_t1_ParamLimits

0x37c3,	// (0x00012b83) query_popup_data_pane_t1

0x37d6,	// (0x00012b96) query_popup_data_pane_t2_ParamLimits

0x37d6,	// (0x00012b96) query_popup_data_pane_t2

0x381c,	// (0x00012bdc) query_popup_data_pane_t3_ParamLimits

0x381c,	// (0x00012bdc) query_popup_data_pane_t3

0x385d,	// (0x00012c1d) query_popup_data_pane_t4_ParamLimits

0x385d,	// (0x00012c1d) query_popup_data_pane_t4

0x3899,	// (0x00012c59) query_popup_data_pane_t5_ParamLimits

0x3899,	// (0x00012c59) query_popup_data_pane_t5

0x0004,

0xf6a7,	// (0x0001ea67) query_popup_data_pane_t_ParamLimits

0xf6a7,	// (0x0001ea67) query_popup_data_pane_t

0x3514,	// (0x000128d4) bg_set_opt_pane_g1

0x351c,	// (0x000128dc) bg_set_opt_pane_g2

0x3524,	// (0x000128e4) bg_set_opt_pane_g3

0x352c,	// (0x000128ec) bg_set_opt_pane_g4

0x3534,	// (0x000128f4) bg_set_opt_pane_g5

0x353c,	// (0x000128fc) bg_set_opt_pane_g6

0x3544,	// (0x00012904) bg_set_opt_pane_g7

0x354c,	// (0x0001290c) bg_set_opt_pane_g8

0x3554,	// (0x00012914) bg_set_opt_pane_g9

0x0008,

0xf6b2,	// (0x0001ea72) bg_set_opt_pane_g

0x088e,	// (0x0000fc4e) control_top_pane_stacon_ParamLimits

0x088e,	// (0x0000fc4e) control_top_pane_stacon

0x08e1,	// (0x0000fca1) signal_pane_stacon_ParamLimits

0x08e1,	// (0x0000fca1) signal_pane_stacon

0x3f14,	// (0x000132d4) stacon_top_pane_g1_ParamLimits

0x3f14,	// (0x000132d4) stacon_top_pane_g1

0x0906,	// (0x0000fcc6) title_pane_stacon_ParamLimits

0x0906,	// (0x0000fcc6) title_pane_stacon

0x0930,	// (0x0000fcf0) uni_indicator_pane_stacon_ParamLimits

0x0930,	// (0x0000fcf0) uni_indicator_pane_stacon

0x0945,	// (0x0000fd05) battery_pane_stacon_ParamLimits

0x0945,	// (0x0000fd05) battery_pane_stacon

0x0989,	// (0x0000fd49) control_bottom_pane_stacon_ParamLimits

0x0989,	// (0x0000fd49) control_bottom_pane_stacon

0x09ac,	// (0x0000fd6c) navi_pane_stacon_ParamLimits

0x09ac,	// (0x0000fd6c) navi_pane_stacon

0x3f36,	// (0x000132f6) stacon_bottom_pane_g1_ParamLimits

0x3f36,	// (0x000132f6) stacon_bottom_pane_g1

0x05f1,	// (0x0000f9b1) aid_levels_signal_lsc_ParamLimits

0x05f1,	// (0x0000f9b1) aid_levels_signal_lsc

0x0607,	// (0x0000f9c7) signal_pane_stacon_g1_ParamLimits

0x0607,	// (0x0000f9c7) signal_pane_stacon_g1

0x061b,	// (0x0000f9db) signal_pane_stacon_g2_ParamLimits

0x061b,	// (0x0000f9db) signal_pane_stacon_g2

0x0001,

0xf6c5,	// (0x0001ea85) signal_pane_stacon_g_ParamLimits

0xf6c5,	// (0x0001ea85) signal_pane_stacon_g

0x0650,	// (0x0000fa10) title_pane_stacon_t1_ParamLimits

0x0650,	// (0x0000fa10) title_pane_stacon_t1

0x38dd,	// (0x00012c9d) uni_indicator_pane_stacon_g1

0x38e7,	// (0x00012ca7) uni_indicator_pane_stacon_g2

0x38f1,	// (0x00012cb1) uni_indicator_pane_stacon_g3

0x38fb,	// (0x00012cbb) uni_indicator_pane_stacon_g4

0x0003,

0xf6d1,	// (0x0001ea91) uni_indicator_pane_stacon_g

0x0675,	// (0x0000fa35) control_top_pane_stacon_g1

0x067d,	// (0x0000fa3d) control_top_pane_stacon_t1_ParamLimits

0x067d,	// (0x0000fa3d) control_top_pane_stacon_t1

0x06b4,	// (0x0000fa74) aid_levels_battery_lsc_ParamLimits

0x06b4,	// (0x0000fa74) aid_levels_battery_lsc

0x06cb,	// (0x0000fa8b) battery_pane_stacon_g1_ParamLimits

0x06cb,	// (0x0000fa8b) battery_pane_stacon_g1

0x06de,	// (0x0000fa9e) battery_pane_stacon_g2_ParamLimits

0x06de,	// (0x0000fa9e) battery_pane_stacon_g2

0x0001,

0xf6da,	// (0x0001ea9a) battery_pane_stacon_g_ParamLimits

0xf6da,	// (0x0001ea9a) battery_pane_stacon_g

0x071c,	// (0x0000fadc) navi_icon_pane_stacon

0x0730,	// (0x0000faf0) navi_navi_pane_stacon

0x071c,	// (0x0000fadc) navi_text_pane_stacon

0x0675,	// (0x0000fa35) control_bottom_pane_stacon_g1

0x0744,	// (0x0000fb04) control_bottom_pane_stacon_t1_ParamLimits

0x0744,	// (0x0000fb04) control_bottom_pane_stacon_t1

0xd06e,	// (0x0001c42e) grid_app_pane_ParamLimits

0xd06e,	// (0x0001c42e) grid_app_pane

0xd0a6,	// (0x0001c466) scroll_pane_cp15_ParamLimits

0xd0a6,	// (0x0001c466) scroll_pane_cp15

0xd0bb,	// (0x0001c47b) cell_app_pane_ParamLimits

0xd0bb,	// (0x0001c47b) cell_app_pane

0xd100,	// (0x0001c4c0) cell_app_pane_g1_ParamLimits

0xd100,	// (0x0001c4c0) cell_app_pane_g1

0x399a,	// (0x00012d5a) cell_app_pane_g2_ParamLimits

0x399a,	// (0x00012d5a) cell_app_pane_g2

0x0001,

0xf6df,	// (0x0001ea9f) cell_app_pane_g_ParamLimits

0xf6df,	// (0x0001ea9f) cell_app_pane_g

0xd120,	// (0x0001c4e0) cell_app_pane_t1_ParamLimits

0xd120,	// (0x0001c4e0) cell_app_pane_t1

0x39bd,	// (0x00012d7d) grid_highlight_pane_ParamLimits

0x39bd,	// (0x00012d7d) grid_highlight_pane

0x3514,	// (0x000128d4) cell_highlight_pane_g1

0x351c,	// (0x000128dc) cell_highlight_pane_g2

0x3524,	// (0x000128e4) cell_highlight_pane_g3

0x352c,	// (0x000128ec) cell_highlight_pane_g4

0x3534,	// (0x000128f4) cell_highlight_pane_g5

0x353c,	// (0x000128fc) cell_highlight_pane_g6

0x3544,	// (0x00012904) cell_highlight_pane_g7

0x354c,	// (0x0001290c) cell_highlight_pane_g8

0x3554,	// (0x00012914) cell_highlight_pane_g9

0x2500,	// (0x000118c0) cell_highlight_pane_g10

0x0009,

0xf68d,	// (0x0001ea4d) cell_highlight_pane_g

0x39ce,	// (0x00012d8e) bg_scroll_pane

0x078e,	// (0x0000fb4e) scroll_handle_pane

0x3a15,	// (0x00012dd5) scroll_bg_pane_g1

0x3a2a,	// (0x00012dea) scroll_bg_pane_g2

0x3a42,	// (0x00012e02) scroll_bg_pane_g3

0x0002,

0xf6e4,	// (0x0001eaa4) scroll_bg_pane_g

0x3a57,	// (0x00012e17) scroll_handle_focus_pane_ParamLimits

0x3a57,	// (0x00012e17) scroll_handle_focus_pane

0x3a15,	// (0x00012dd5) scroll_handle_pane_g1

0x3a64,	// (0x00012e24) scroll_handle_pane_g2

0x3a42,	// (0x00012e02) scroll_handle_pane_g3

0x0002,

0xf6eb,	// (0x0001eaab) scroll_handle_pane_g

0x3611,	// (0x000129d1) bg_popup_sub_pane_cp21_ParamLimits

0x3611,	// (0x000129d1) bg_popup_sub_pane_cp21

0x3a78,	// (0x00012e38) popup_fep_japan_predictive_window_t1_ParamLimits

0x3a78,	// (0x00012e38) popup_fep_japan_predictive_window_t1

0x3a92,	// (0x00012e52) popup_fep_japan_predictive_window_t2_ParamLimits

0x3a92,	// (0x00012e52) popup_fep_japan_predictive_window_t2

0x3ac5,	// (0x00012e85) popup_fep_japan_predictive_window_t3_ParamLimits

0x3ac5,	// (0x00012e85) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f2,	// (0x0001eab2) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f2,	// (0x0001eab2) popup_fep_japan_predictive_window_t

0x250a,	// (0x000118ca) bg_popup_sub_pane_cp23

0x3afc,	// (0x00012ebc) listscroll_japin_cand_pane

0x3b04,	// (0x00012ec4) popup_fep_japan_candidate_window_t1

0x3b12,	// (0x00012ed2) candidate_pane_ParamLimits

0x3b12,	// (0x00012ed2) candidate_pane

0x3b24,	// (0x00012ee4) scroll_pane_cp30

0x3b2c,	// (0x00012eec) list_single_popup_jap_candidate_pane_ParamLimits

0x3b2c,	// (0x00012eec) list_single_popup_jap_candidate_pane

0x250a,	// (0x000118ca) list_highlight_pane_cp30

0x3b41,	// (0x00012f01) list_single_popup_jap_candidate_pane_t1

0x3b50,	// (0x00012f10) level_1_signal

0x3b62,	// (0x00012f22) level_2_signal

0x3b75,	// (0x00012f35) level_3_signal

0x3b88,	// (0x00012f48) level_4_signal

0x3b9b,	// (0x00012f5b) level_5_signal

0x3bae,	// (0x00012f6e) level_6_signal

0x3bc1,	// (0x00012f81) level_7_signal

0x3b50,	// (0x00012f10) level_1_battery

0x3b62,	// (0x00012f22) level_2_battery

0x3b75,	// (0x00012f35) level_3_battery

0x3b88,	// (0x00012f48) level_4_battery

0x3b9b,	// (0x00012f5b) level_5_battery

0x3bae,	// (0x00012f6e) level_6_battery

0x3bc1,	// (0x00012f81) level_7_battery

0x3bec,	// (0x00012fac) list_menu_pane_ParamLimits

0x3bec,	// (0x00012fac) list_menu_pane

0x3c02,	// (0x00012fc2) scroll_pane_cp25_ParamLimits

0x3c02,	// (0x00012fc2) scroll_pane_cp25

0x3c1b,	// (0x00012fdb) list_double2_graphic_pane_cp2_ParamLimits

0x3c1b,	// (0x00012fdb) list_double2_graphic_pane_cp2

0x3c1b,	// (0x00012fdb) list_double2_large_graphic_pane_cp2_ParamLimits

0x3c1b,	// (0x00012fdb) list_double2_large_graphic_pane_cp2

0x3c1b,	// (0x00012fdb) list_double2_pane_cp2_ParamLimits

0x3c1b,	// (0x00012fdb) list_double2_pane_cp2

0x3c1b,	// (0x00012fdb) list_double_graphic_pane_cp2_ParamLimits

0x3c1b,	// (0x00012fdb) list_double_graphic_pane_cp2

0x3c1b,	// (0x00012fdb) list_double_large_graphic_pane_cp2_ParamLimits

0x3c1b,	// (0x00012fdb) list_double_large_graphic_pane_cp2

0x3c1b,	// (0x00012fdb) list_double_number_pane_cp2_ParamLimits

0x3c1b,	// (0x00012fdb) list_double_number_pane_cp2

0x3c1b,	// (0x00012fdb) list_double_pane_cp2_ParamLimits

0x3c1b,	// (0x00012fdb) list_double_pane_cp2

0xd137,	// (0x0001c4f7) list_single_2graphic_pane_cp2_ParamLimits

0xd137,	// (0x0001c4f7) list_single_2graphic_pane_cp2

0xd137,	// (0x0001c4f7) list_single_graphic_heading_pane_cp2_ParamLimits

0xd137,	// (0x0001c4f7) list_single_graphic_heading_pane_cp2

0xd137,	// (0x0001c4f7) list_single_graphic_pane_cp2_ParamLimits

0xd137,	// (0x0001c4f7) list_single_graphic_pane_cp2

0xd137,	// (0x0001c4f7) list_single_heading_pane_cp2_ParamLimits

0xd137,	// (0x0001c4f7) list_single_heading_pane_cp2

0x3c58,	// (0x00013018) list_single_large_graphic_pane_cp2_ParamLimits

0x3c58,	// (0x00013018) list_single_large_graphic_pane_cp2

0xd137,	// (0x0001c4f7) list_single_number_heading_pane_cp2_ParamLimits

0xd137,	// (0x0001c4f7) list_single_number_heading_pane_cp2

0xd137,	// (0x0001c4f7) list_single_number_pane_cp2_ParamLimits

0xd137,	// (0x0001c4f7) list_single_number_pane_cp2

0xd137,	// (0x0001c4f7) list_single_pane_cp2_ParamLimits

0xd137,	// (0x0001c4f7) list_single_pane_cp2

0x3cd4,	// (0x00013094) bg_popup_sub_pane_cp22

0x0840,	// (0x0000fc00) popup_side_volume_key_window_g1

0x086a,	// (0x0000fc2a) popup_side_volume_key_window_t1

0x0886,	// (0x0000fc46) volume_small_pane_cp1

0x287f,	// (0x00011c3f) bg_popup_sub_pane_cp24_ParamLimits

0x287f,	// (0x00011c3f) bg_popup_sub_pane_cp24

0x3cea,	// (0x000130aa) fep_china_uni_candidate_pane_ParamLimits

0x3cea,	// (0x000130aa) fep_china_uni_candidate_pane

0x3cfe,	// (0x000130be) fep_china_uni_entry_pane

0x3d0e,	// (0x000130ce) popup_fep_china_uni_window_g1

0x3d2a,	// (0x000130ea) fep_china_uni_entry_pane_g1

0x3d32,	// (0x000130f2) fep_china_uni_entry_pane_g2

0x0001,

0xf723,	// (0x0001eae3) fep_china_uni_entry_pane_g

0x3d3a,	// (0x000130fa) fep_entry_item_pane

0x3d44,	// (0x00013104) fep_candidate_item_pane

0x3d4c,	// (0x0001310c) fep_china_uni_candidate_pane_g1

0x3d54,	// (0x00013114) fep_china_uni_candidate_pane_g2

0x3d5c,	// (0x0001311c) fep_china_uni_candidate_pane_g3

0x3d64,	// (0x00013124) fep_china_uni_candidate_pane_g4

0x0003,

0xf728,	// (0x0001eae8) fep_china_uni_candidate_pane_g

0x2500,	// (0x000118c0) fep_entry_item_pane_g1

0x3d6c,	// (0x0001312c) fep_entry_item_pane_t1_ParamLimits

0x3d6c,	// (0x0001312c) fep_entry_item_pane_t1

0x3d82,	// (0x00013142) fep_candidate_item_pane_t1_ParamLimits

0x3d82,	// (0x00013142) fep_candidate_item_pane_t1

0x3d97,	// (0x00013157) fep_candidate_item_pane_t2_ParamLimits

0x3d97,	// (0x00013157) fep_candidate_item_pane_t2

0x0001,

0xf731,	// (0x0001eaf1) fep_candidate_item_pane_t_ParamLimits

0xf731,	// (0x0001eaf1) fep_candidate_item_pane_t

0x25ea,	// (0x000119aa) list_highlight_pane_cp31_ParamLimits

0x25ea,	// (0x000119aa) list_highlight_pane_cp31

0x3da9,	// (0x00013169) level_1_signal_lsc

0x3db2,	// (0x00013172) level_2_signal_lsc

0x3dbb,	// (0x0001317b) level_3_signal_lsc

0x3dc4,	// (0x00013184) level_4_signal_lsc

0x3dcd,	// (0x0001318d) level_5_signal_lsc

0x3dd6,	// (0x00013196) level_6_signal_lsc

0x3ddf,	// (0x0001319f) level_7_signal_lsc

0x3ddf,	// (0x0001319f) level_1_battery_lsc

0x3de8,	// (0x000131a8) level_2_battery_lsc

0x3df1,	// (0x000131b1) level_3_battery_lsc

0x3dfa,	// (0x000131ba) level_4_battery_lsc

0x3e03,	// (0x000131c3) level_5_battery_lsc

0x3e0c,	// (0x000131cc) level_6_battery_lsc

0x3da9,	// (0x00013169) level_7_battery_lsc

0x3e15,	// (0x000131d5) scroll_handle_focus_pane_g1

0x3e1e,	// (0x000131de) scroll_handle_focus_pane_g2

0x3e27,	// (0x000131e7) scroll_handle_focus_pane_g3

0x0002,

0xf736,	// (0x0001eaf6) scroll_handle_focus_pane_g

0xd1c4,	// (0x0001c584) list_single_2graphic_pane_g1_ParamLimits

0xd1c4,	// (0x0001c584) list_single_2graphic_pane_g1

0xcafc,	// (0x0001bebc) list_single_2graphic_pane_g2_ParamLimits

0xcafc,	// (0x0001bebc) list_single_2graphic_pane_g2

0x4a85,	// (0x00013e45) list_single_2graphic_pane_g3_ParamLimits

0x4a85,	// (0x00013e45) list_single_2graphic_pane_g3

0xd1d0,	// (0x0001c590) list_single_2graphic_pane_g4_ParamLimits

0xd1d0,	// (0x0001c590) list_single_2graphic_pane_g4

0x0003,

0xf73d,	// (0x0001eafd) list_single_2graphic_pane_g_ParamLimits

0xf73d,	// (0x0001eafd) list_single_2graphic_pane_g

0xd1e1,	// (0x0001c5a1) list_single_2graphic_pane_t1_ParamLimits

0xd1e1,	// (0x0001c5a1) list_single_2graphic_pane_t1

0xd20f,	// (0x0001c5cf) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xd20f,	// (0x0001c5cf) list_double2_graphic_large_graphic_pane_g1

0xcb45,	// (0x0001bf05) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xcb45,	// (0x0001bf05) list_double2_graphic_large_graphic_pane_g2

0xcb56,	// (0x0001bf16) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xcb56,	// (0x0001bf16) list_double2_graphic_large_graphic_pane_g3

0xd221,	// (0x0001c5e1) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xd221,	// (0x0001c5e1) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf746,	// (0x0001eb06) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf746,	// (0x0001eb06) list_double2_graphic_large_graphic_pane_g

0xd22d,	// (0x0001c5ed) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xd22d,	// (0x0001c5ed) list_double2_graphic_large_graphic_pane_t1

0xd243,	// (0x0001c603) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xd243,	// (0x0001c603) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74f,	// (0x0001eb0f) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74f,	// (0x0001eb0f) list_double2_graphic_large_graphic_pane_t

0x3ffe,	// (0x000133be) popup_fast_swap_window_ParamLimits

0x3ffe,	// (0x000133be) popup_fast_swap_window

0x401a,	// (0x000133da) popup_side_volume_key_window

0x4036,	// (0x000133f6) stacon_top_pane

0x4040,	// (0x00013400) status_pane_ParamLimits

0x4040,	// (0x00013400) status_pane

0x4036,	// (0x000133f6) status_small_pane

0x250a,	// (0x000118ca) control_pane

0x250a,	// (0x000118ca) stacon_bottom_pane

0x32fc,	// (0x000126bc) scroll_pane_cp121

0x32f3,	// (0x000126b3) set_content_pane

0x3ebf,	// (0x0001327f) bg_active_tab_pane_g1_cp1

0x3ec8,	// (0x00013288) bg_active_tab_pane_g2_cp1

0x3ed1,	// (0x00013291) bg_active_tab_pane_g3_cp1

0x3ebf,	// (0x0001327f) bg_passive_tab_pane_g1_cp1

0x3ec8,	// (0x00013288) bg_passive_tab_pane_g2_cp1

0x3ed1,	// (0x00013291) bg_passive_tab_pane_g3_cp1

0x3eda,	// (0x0001329a) bg_active_tab_pane_g1_cp2

0x3ec8,	// (0x00013288) bg_active_tab_pane_g2_cp2

0x3ee3,	// (0x000132a3) bg_active_tab_pane_g3_cp2

0x3eda,	// (0x0001329a) bg_passive_tab_pane_g1_cp2

0x3ec8,	// (0x00013288) bg_passive_tab_pane_g2_cp2

0x3ee3,	// (0x000132a3) bg_passive_tab_pane_g3_cp2

0x3eec,	// (0x000132ac) bg_active_tab_pane_g1_cp3

0x3ec8,	// (0x00013288) bg_active_tab_pane_g2_cp3

0x3ef5,	// (0x000132b5) bg_active_tab_pane_g3_cp3

0x3eec,	// (0x000132ac) bg_passive_tab_pane_g1_cp3

0x3ec8,	// (0x00013288) bg_passive_tab_pane_g2_cp3

0x3ef5,	// (0x000132b5) bg_passive_tab_pane_g3_cp3

0x3efe,	// (0x000132be) bg_active_tab_pane_g1_cp4

0x3ec8,	// (0x00013288) bg_active_tab_pane_g2_cp4

0x3f09,	// (0x000132c9) bg_active_tab_pane_g3_cp4

0x3efe,	// (0x000132be) bg_passive_tab_pane_g1_cp4

0x3ec8,	// (0x00013288) bg_passive_tab_pane_g2_cp4

0x3f09,	// (0x000132c9) bg_passive_tab_pane_g3_cp4

0x3f52,	// (0x00013312) bg_active_tab_pane_g1_cp5

0x3ec8,	// (0x00013288) bg_active_tab_pane_g2_cp5

0x3f5b,	// (0x0001331b) bg_active_tab_pane_g3_cp5

0x3f52,	// (0x00013312) bg_passive_tab_pane_g1_cp5

0x3ec8,	// (0x00013288) bg_passive_tab_pane_g2_cp5

0x3f5b,	// (0x0001331b) bg_passive_tab_pane_g3_cp5

0x688b,	// (0x00015c4b) list_set_graphic_pane_ParamLimits

0x688b,	// (0x00015c4b) list_set_graphic_pane

0x250a,	// (0x000118ca) bg_set_opt_pane_cp4

0xd255,	// (0x0001c615) list_set_graphic_pane_g1_ParamLimits

0xd255,	// (0x0001c615) list_set_graphic_pane_g1

0xd261,	// (0x0001c621) list_set_graphic_pane_g2_ParamLimits

0xd261,	// (0x0001c621) list_set_graphic_pane_g2

0x0001,

0xf754,	// (0x0001eb14) list_set_graphic_pane_g_ParamLimits

0xf754,	// (0x0001eb14) list_set_graphic_pane_g

0x0009,

0xfac7,	// (0x0001ee87) volume_small_pane_cp_g

0x3fb1,	// (0x00013371) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x3fb1,	// (0x00013371) list_double2_large_graphic_pane_g1_cp2

0x3fbd,	// (0x0001337d) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3fbd,	// (0x0001337d) list_double2_large_graphic_pane_g2_cp2

0x3fce,	// (0x0001338e) list_double2_large_graphic_pane_g3_cp2

0x3fd6,	// (0x00013396) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3fd6,	// (0x00013396) list_double2_large_graphic_pane_t1_cp2

0x3fec,	// (0x000133ac) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3fec,	// (0x000133ac) list_double2_large_graphic_pane_t2_cp2

0x5ce9,	// (0x000150a9) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5ce9,	// (0x000150a9) list_double_large_graphic_pane_g1_cp2

0x5cfa,	// (0x000150ba) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5cfa,	// (0x000150ba) list_double_large_graphic_pane_g2_cp2

0x415c,	// (0x0001351c) list_double_large_graphic_pane_g3_cp2

0x5d0b,	// (0x000150cb) list_double_large_graphic_pane_g4_cp

0x5d13,	// (0x000150d3) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5d13,	// (0x000150d3) list_double_large_graphic_pane_t1_cp2

0x5d2a,	// (0x000150ea) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5d2a,	// (0x000150ea) list_double_large_graphic_pane_t2_cp2

0x404e,	// (0x0001340e) list_double2_graphic_pane_g1_cp2_ParamLimits

0x404e,	// (0x0001340e) list_double2_graphic_pane_g1_cp2

0x405c,	// (0x0001341c) list_double2_graphic_pane_g2_cp2_ParamLimits

0x405c,	// (0x0001341c) list_double2_graphic_pane_g2_cp2

0x406d,	// (0x0001342d) list_double2_graphic_pane_g3_cp2

0x4077,	// (0x00013437) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4077,	// (0x00013437) list_double2_graphic_pane_t1_cp2

0x408d,	// (0x0001344d) list_double2_graphic_pane_t2_cp2_ParamLimits

0x408d,	// (0x0001344d) list_double2_graphic_pane_t2_cp2

0x409f,	// (0x0001345f) list_single_number_heading_pane_g1_cp2_ParamLimits

0x409f,	// (0x0001345f) list_single_number_heading_pane_g1_cp2

0x40ab,	// (0x0001346b) list_single_number_heading_pane_g2_cp2

0x40b3,	// (0x00013473) list_single_number_heading_pane_t1_cp2_ParamLimits

0x40b3,	// (0x00013473) list_single_number_heading_pane_t1_cp2

0x40c9,	// (0x00013489) list_single_number_heading_pane_t2_cp2_ParamLimits

0x40c9,	// (0x00013489) list_single_number_heading_pane_t2_cp2

0x40db,	// (0x0001349b) list_single_number_heading_pane_t3_cp2_ParamLimits

0x40db,	// (0x0001349b) list_single_number_heading_pane_t3_cp2

0x409f,	// (0x0001345f) list_single_heading_pane_g1_cp2_ParamLimits

0x409f,	// (0x0001345f) list_single_heading_pane_g1_cp2

0x40ab,	// (0x0001346b) list_single_heading_pane_g2_cp2

0x40b3,	// (0x00013473) list_single_heading_pane_t1_cp2_ParamLimits

0x40b3,	// (0x00013473) list_single_heading_pane_t1_cp2

0x5af1,	// (0x00014eb1) list_single_heading_pane_t2_cp2_ParamLimits

0x5af1,	// (0x00014eb1) list_single_heading_pane_t2_cp2

0x5a39,	// (0x00014df9) list_double_graphic_pane_g1_cp2_ParamLimits

0x5a39,	// (0x00014df9) list_double_graphic_pane_g1_cp2

0x5a45,	// (0x00014e05) list_double_graphic_pane_g2_cp2_ParamLimits

0x5a45,	// (0x00014e05) list_double_graphic_pane_g2_cp2

0x5a54,	// (0x00014e14) list_double_graphic_pane_g3_cp2

0x5a5c,	// (0x00014e1c) list_double_graphic_pane_t1_cp2_ParamLimits

0x5a5c,	// (0x00014e1c) list_double_graphic_pane_t1_cp2

0x5a72,	// (0x00014e32) list_double_graphic_pane_t2_cp2_ParamLimits

0x5a72,	// (0x00014e32) list_double_graphic_pane_t2_cp2

0x4150,	// (0x00013510) list_double_number_pane_g1_cp2_ParamLimits

0x4150,	// (0x00013510) list_double_number_pane_g1_cp2

0x415c,	// (0x0001351c) list_double_number_pane_g2_cp2

0x59fd,	// (0x00014dbd) list_double_number_pane_t1_cp2_ParamLimits

0x59fd,	// (0x00014dbd) list_double_number_pane_t1_cp2

0x5a11,	// (0x00014dd1) list_double_number_pane_t2_cp2_ParamLimits

0x5a11,	// (0x00014dd1) list_double_number_pane_t2_cp2

0x5a27,	// (0x00014de7) list_double_number_pane_t3_cp2_ParamLimits

0x5a27,	// (0x00014de7) list_double_number_pane_t3_cp2

0x58e6,	// (0x00014ca6) list_single_graphic_pane_g1_cp2_ParamLimits

0x58e6,	// (0x00014ca6) list_single_graphic_pane_g1_cp2

0x41b4,	// (0x00013574) list_single_graphic_pane_g2_cp2_ParamLimits

0x41b4,	// (0x00013574) list_single_graphic_pane_g2_cp2

0x41c0,	// (0x00013580) list_single_graphic_pane_g3_cp2

0x58bc,	// (0x00014c7c) list_single_graphic_pane_t1_cp2_ParamLimits

0x58bc,	// (0x00014c7c) list_single_graphic_pane_t1_cp2

0x41b4,	// (0x00013574) list_single_number_pane_g1_cp2_ParamLimits

0x41b4,	// (0x00013574) list_single_number_pane_g1_cp2

0x41c0,	// (0x00013580) list_single_number_pane_g2_cp2

0x58bc,	// (0x00014c7c) list_single_number_pane_t1_cp2_ParamLimits

0x58bc,	// (0x00014c7c) list_single_number_pane_t1_cp2

0x58d2,	// (0x00014c92) list_single_number_pane_t2_cp2_ParamLimits

0x58d2,	// (0x00014c92) list_single_number_pane_t2_cp2

0x3fbd,	// (0x0001337d) list_double2_pane_g1_cp2_ParamLimits

0x3fbd,	// (0x0001337d) list_double2_pane_g1_cp2

0x3fce,	// (0x0001338e) list_double2_pane_g2_cp2

0x4128,	// (0x000134e8) list_double2_pane_t1_cp2_ParamLimits

0x4128,	// (0x000134e8) list_double2_pane_t1_cp2

0x413e,	// (0x000134fe) list_double2_pane_t2_cp2_ParamLimits

0x413e,	// (0x000134fe) list_double2_pane_t2_cp2

0x4150,	// (0x00013510) list_double_pane_g1_cp2_ParamLimits

0x4150,	// (0x00013510) list_double_pane_g1_cp2

0x415c,	// (0x0001351c) list_double_pane_g2_cp2

0x4164,	// (0x00013524) list_double_pane_t1_cp2_ParamLimits

0x4164,	// (0x00013524) list_double_pane_t1_cp2

0x417a,	// (0x0001353a) list_double_pane_t2_cp2_ParamLimits

0x417a,	// (0x0001353a) list_double_pane_t2_cp2

0x41a4,	// (0x00013564) list_single_pane_cp2_g3

0x41b4,	// (0x00013574) list_single_pane_g1_cp2_ParamLimits

0x41b4,	// (0x00013574) list_single_pane_g1_cp2

0x41c0,	// (0x00013580) list_single_pane_g2_cp2

0x41c8,	// (0x00013588) list_single_pane_t1_cp2_ParamLimits

0x41c8,	// (0x00013588) list_single_pane_t1_cp2

0x41e0,	// (0x000135a0) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x41e0,	// (0x000135a0) list_single_large_graphic_pane_g1_cp2

0x41ec,	// (0x000135ac) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x41ec,	// (0x000135ac) list_single_large_graphic_pane_g2_cp2

0x41f8,	// (0x000135b8) list_single_large_graphic_pane_g3_cp2

0x4200,	// (0x000135c0) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4200,	// (0x000135c0) list_single_large_graphic_pane_g4_cp1

0x421a,	// (0x000135da) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x421a,	// (0x000135da) list_single_large_graphic_pane_t1_cp2

0x5888,	// (0x00014c48) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5888,	// (0x00014c48) list_single_graphic_heading_pane_g1_cp2

0x5855,	// (0x00014c15) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5855,	// (0x00014c15) list_single_graphic_heading_pane_g4_cp2

0x41c0,	// (0x00013580) list_single_graphic_heading_pane_g5_cp2

0x5894,	// (0x00014c54) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5894,	// (0x00014c54) list_single_graphic_heading_pane_t1_cp2

0x58aa,	// (0x00014c6a) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x58aa,	// (0x00014c6a) list_single_graphic_heading_pane_t2_cp2

0x5849,	// (0x00014c09) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5849,	// (0x00014c09) list_single_2graphic_pane_g1_cp2

0x5855,	// (0x00014c15) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5855,	// (0x00014c15) list_single_2graphic_pane_g2_cp2

0x41c0,	// (0x00013580) list_single_2graphic_pane_g3_cp2

0x5866,	// (0x00014c26) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5866,	// (0x00014c26) list_single_2graphic_pane_g4_cp2

0x5872,	// (0x00014c32) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5872,	// (0x00014c32) list_single_2graphic_pane_t1_cp2

0x2500,	// (0x000118c0) list_highlight_pane_g10_cp1

0x5421,	// (0x000147e1) list_highlight_pane_g1_cp1

0x5429,	// (0x000147e9) list_highlight_pane_g2_cp1

0x5431,	// (0x000147f1) list_highlight_pane_g3_cp1

0x5439,	// (0x000147f9) list_highlight_pane_g4_cp1

0x5441,	// (0x00014801) list_highlight_pane_g5_cp1

0x5449,	// (0x00014809) list_highlight_pane_g6_cp1

0x5451,	// (0x00014811) list_highlight_pane_g7_cp1

0x5459,	// (0x00014819) list_highlight_pane_g8_cp1

0x5461,	// (0x00014821) list_highlight_pane_g9_cp1

0xd852,	// (0x0001cc12) form_field_slider_pane_t3

0xd860,	// (0x0001cc20) form_field_slider_pane_t4

0x535d,	// (0x0001471d) slider_form_pane_ParamLimits

0x535d,	// (0x0001471d) slider_form_pane

0x250a,	// (0x000118ca) control_abbreviations

0x250a,	// (0x000118ca) control_conventions

0x250a,	// (0x000118ca) control_definitions

0x250a,	// (0x000118ca) format_table_attribute

0x5b3b,	// (0x00014efb) bg_popup_preview_window_pane_g9

0x250a,	// (0x000118ca) format_table_data2

0x250a,	// (0x000118ca) format_table_data3

0x250a,	// (0x000118ca) format_table_data_example

0x0008,

0x250a,	// (0x000118ca) intro_purpose

0xf8eb,	// (0x0001ecab) bg_popup_preview_window_pane_g

0x250a,	// (0x000118ca) texts_category

0x250a,	// (0x000118ca) texts_graphics

0x4230,	// (0x000135f0) text_digital

0x423f,	// (0x000135ff) text_primary

0x424e,	// (0x0001360e) text_primary_small

0x425d,	// (0x0001361d) text_secondary

0x426c,	// (0x0001362c) text_title

0x6387,	// (0x00015747) bg_passive_tab_pane_g1_cp3_srt

0x3ec8,	// (0x00013288) bg_passive_tab_pane_g2_cp3_srt

0x6390,	// (0x00015750) bg_passive_tab_pane_g3_cp3_srt

0x287f,	// (0x00011c3f) bg_active_tab_pane_cp3_srt_ParamLimits

0x287f,	// (0x00011c3f) bg_active_tab_pane_cp3_srt

0x6399,	// (0x00015759) tabs_4_active_pane_srt_g1

0xdbe6,	// (0x0001cfa6) tabs_4_active_pane_srt_t1_ParamLimits

0xdbe6,	// (0x0001cfa6) tabs_4_active_pane_srt_t1

0x6387,	// (0x00015747) bg_active_tab_pane_g1_cp3_copy1

0x3ec8,	// (0x00013288) bg_active_tab_pane_g2_cp3_copy1

0x6390,	// (0x00015750) bg_active_tab_pane_g3_cp3_copy1

0x25ea,	// (0x000119aa) tabs_2_long_active_pane_srt_ParamLimits

0x25ea,	// (0x000119aa) tabs_2_long_active_pane_srt

0x25ea,	// (0x000119aa) tabs_2_long_passive_pane_srt_ParamLimits

0x25ea,	// (0x000119aa) tabs_2_long_passive_pane_srt

0x45c3,	// (0x00013983) bg_passive_tab_pane_cp4_srt_ParamLimits

0x45c3,	// (0x00013983) bg_passive_tab_pane_cp4_srt

0x5f8e,	// (0x0001534e) bg_passive_tab_pane_g1_cp4_srt

0x3ec8,	// (0x00013288) bg_passive_tab_pane_g2_cp4_srt

0x5f97,	// (0x00015357) bg_passive_tab_pane_g3_cp4_srt

0x25ea,	// (0x000119aa) bg_active_tab_pane_cp4_srt_ParamLimits

0x25ea,	// (0x000119aa) bg_active_tab_pane_cp4_srt

0xd9d2,	// (0x0001cd92) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd9d2,	// (0x0001cd92) tabs_2_long_active_pane_srt_t1

0x5f8e,	// (0x0001534e) bg_active_tab_pane_g1_cp4_srt

0x3ec8,	// (0x00013288) bg_active_tab_pane_g2_cp4_srt

0x5f97,	// (0x00015357) bg_active_tab_pane_g3_cp4_srt

0x287f,	// (0x00011c3f) tabs_3_long_active_pane_srt_ParamLimits

0x287f,	// (0x00011c3f) tabs_3_long_active_pane_srt

0x287f,	// (0x00011c3f) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x287f,	// (0x00011c3f) tabs_3_long_passive_pane_cp_srt

0x287f,	// (0x00011c3f) tabs_3_long_passive_pane_srt_ParamLimits

0x287f,	// (0x00011c3f) tabs_3_long_passive_pane_srt

0x45c3,	// (0x00013983) bg_passive_tab_pane_cp5_srt_ParamLimits

0x45c3,	// (0x00013983) bg_passive_tab_pane_cp5_srt

0x3f52,	// (0x00013312) bg_passive_tab_pane_g1_cp5_srt

0x3ec8,	// (0x00013288) bg_passive_tab_pane_g2_cp5_srt

0x3f5b,	// (0x0001331b) bg_passive_tab_pane_g3_cp5_srt

0x25ea,	// (0x000119aa) bg_active_tab_pane_cp5_srt_ParamLimits

0x25ea,	// (0x000119aa) bg_active_tab_pane_cp5_srt

0xd9bc,	// (0x0001cd7c) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd9bc,	// (0x0001cd7c) tabs_3_long_active_pane_srt_t1

0x3f52,	// (0x00013312) bg_active_tab_pane_g1_cp5_srt

0x3ec8,	// (0x00013288) bg_active_tab_pane_g2_cp5_srt

0x3f5b,	// (0x0001331b) bg_active_tab_pane_g3_cp5_srt

0x5f6e,	// (0x0001532e) navi_text_pane_srt_t1

0x5f66,	// (0x00015326) navi_icon_pane_srt_g1

0x4433,	// (0x000137f3) midp_editing_number_pane_srt

0x427b,	// (0x0001363b) midp_ticker_pane_srt

0x443b,	// (0x000137fb) midp_ticker_pane_srt_g1

0x4443,	// (0x00013803) midp_ticker_pane_srt_g2

0x0001,

0xf773,	// (0x0001eb33) midp_ticker_pane_srt_g

0x444b,	// (0x0001380b) midp_ticker_pane_srt_t1

0x5f57,	// (0x00015317) midp_editing_number_pane_t1_copy1

0x45c3,	// (0x00013983) listscroll_midp_pane

0x45c3,	// (0x00013983) midp_form_pane

0x42e5,	// (0x000136a5) midp_info_popup_window_ParamLimits

0x42e5,	// (0x000136a5) midp_info_popup_window

0x3611,	// (0x000129d1) bg_popup_sub_pane_cp50_ParamLimits

0x3611,	// (0x000129d1) bg_popup_sub_pane_cp50

0x504d,	// (0x0001440d) listscroll_midp_info_pane_ParamLimits

0x504d,	// (0x0001440d) listscroll_midp_info_pane

0x5035,	// (0x000143f5) listscroll_form_midp_pane_ParamLimits

0x5035,	// (0x000143f5) listscroll_form_midp_pane

0x5041,	// (0x00014401) scroll_bar_cp050

0xd846,	// (0x0001cc06) list_midp_pane

0x7071,	// (0x00016431) signal_pane_g2_cp

0x4f4f,	// (0x0001430f) listscroll_midp_info_pane_t1_ParamLimits

0x4f4f,	// (0x0001430f) listscroll_midp_info_pane_t1

0x4f67,	// (0x00014327) listscroll_midp_info_pane_t2_ParamLimits

0x4f67,	// (0x00014327) listscroll_midp_info_pane_t2

0x4fa5,	// (0x00014365) listscroll_midp_info_pane_t3_ParamLimits

0x4fa5,	// (0x00014365) listscroll_midp_info_pane_t3

0x4fdf,	// (0x0001439f) listscroll_midp_info_pane_t4_ParamLimits

0x4fdf,	// (0x0001439f) listscroll_midp_info_pane_t4

0x0003,

0xf826,	// (0x0001ebe6) listscroll_midp_info_pane_t_ParamLimits

0xf826,	// (0x0001ebe6) listscroll_midp_info_pane_t

0x36d5,	// (0x00012a95) scroll_pane_cp21

0x4eed,	// (0x000142ad) form_midp_field_choice_group_pane

0x4ef6,	// (0x000142b6) form_midp_field_text_pane

0x4f35,	// (0x000142f5) form_midp_field_time_pane

0x4f3d,	// (0x000142fd) form_midp_gauge_slider_pane

0x4f46,	// (0x00014306) form_midp_gauge_wait_pane

0x250a,	// (0x000118ca) form_midp_image_pane

0xd82f,	// (0x0001cbef) list_single_midp_pane_ParamLimits

0xd82f,	// (0x0001cbef) list_single_midp_pane

0xd80d,	// (0x0001cbcd) form_midp_field_text_pane_t1

0x4c31,	// (0x00013ff1) input_focus_pane_cp050

0x4ead,	// (0x0001426d) list_midp_form_text_pane

0x4e45,	// (0x00014205) form_midp_field_choice_group_pane_t1

0x4e53,	// (0x00014213) input_focus_pane_cp051

0x4e67,	// (0x00014227) list_midp_choice_pane

0x250a,	// (0x000118ca) status_idle_pane

0x4e29,	// (0x000141e9) form_midp_field_time_pane_t1

0x2500,	// (0x000118c0) wait_anim_pane_g2_copy1

0x4e37,	// (0x000141f7) form_midp_field_time_pane_t2

0x0001,

0x4393,	// (0x00013753) aid_navinavi_width_2_pane

0xf821,	// (0x0001ebe1) form_midp_field_time_pane_t

0x250a,	// (0x000118ca) input_focus_pane_cp052

0x250a,	// (0x000118ca) bg_input_focus_pane_cp040

0x4de9,	// (0x000141a9) form_midp_gauge_slider_pane_t1

0x4df7,	// (0x000141b7) form_midp_gauge_slider_pane_t2

0xd7f1,	// (0x0001cbb1) form_midp_gauge_slider_pane_t3

0xd7ff,	// (0x0001cbbf) form_midp_gauge_slider_pane_t4

0x0003,

0xf818,	// (0x0001ebd8) form_midp_gauge_slider_pane_t

0x4e21,	// (0x000141e1) form_midp_slider_pane

0x25ea,	// (0x000119aa) bg_input_focus_pane_cp041_ParamLimits

0x25ea,	// (0x000119aa) bg_input_focus_pane_cp041

0x4db6,	// (0x00014176) form_midp_gauge_wait_pane_t1_ParamLimits

0x4db6,	// (0x00014176) form_midp_gauge_wait_pane_t1

0x4dc8,	// (0x00014188) form_midp_gauge_wait_pane_t2_ParamLimits

0x4dc8,	// (0x00014188) form_midp_gauge_wait_pane_t2

0x0001,

0xf813,	// (0x0001ebd3) form_midp_gauge_wait_pane_t_ParamLimits

0xf813,	// (0x0001ebd3) form_midp_gauge_wait_pane_t

0x4dda,	// (0x0001419a) form_midp_wait_pane_ParamLimits

0x4dda,	// (0x0001419a) form_midp_wait_pane

0x4d80,	// (0x00014140) form_midp_image_pane_g1

0x4d89,	// (0x00014149) form_midp_image_pane_t1

0x4d98,	// (0x00014158) form_midp_image_pane_t2

0x4da7,	// (0x00014167) form_midp_image_pane_t3

0x0002,

0xf80c,	// (0x0001ebcc) form_midp_image_pane_t

0x4d68,	// (0x00014128) list_single_midp_pane_g1

0x4d71,	// (0x00014131) list_single_midp_pane_t1

0xd7dc,	// (0x0001cb9c) list_midp_form_item_pane_ParamLimits

0xd7dc,	// (0x0001cb9c) list_midp_form_item_pane

0x433b,	// (0x000136fb) list_midp_form_item_pane_t1

0x434a,	// (0x0001370a) midp_ticker_pane_g1

0x4356,	// (0x00013716) midp_ticker_pane_g2

0x0001,

0xf759,	// (0x0001eb19) midp_ticker_pane_g

0x4362,	// (0x00013722) midp_ticker_pane_t1

0x621d,	// (0x000155dd) midp_editing_number_pane_t1

0x61fb,	// (0x000155bb) midp_editing_number_pane

0x620a,	// (0x000155ca) midp_ticker_pane

0x5f1f,	// (0x000152df) ai_message_heading_pane

0x250a,	// (0x000118ca) bg_popup_window_pane_cp14

0x5f27,	// (0x000152e7) listscroll_ai_message_pane

0x5ea9,	// (0x00015269) ai_message_heading_pane_g1_ParamLimits

0x5ea9,	// (0x00015269) ai_message_heading_pane_g1

0x5eb5,	// (0x00015275) ai_message_heading_pane_g2_ParamLimits

0x5eb5,	// (0x00015275) ai_message_heading_pane_g2

0x5ec1,	// (0x00015281) ai_message_heading_pane_g3_ParamLimits

0x5ec1,	// (0x00015281) ai_message_heading_pane_g3

0x5ecd,	// (0x0001528d) ai_message_heading_pane_g4_ParamLimits

0x5ecd,	// (0x0001528d) ai_message_heading_pane_g4

0x0003,

0xf94d,	// (0x0001ed0d) ai_message_heading_pane_g_ParamLimits

0xf94d,	// (0x0001ed0d) ai_message_heading_pane_g

0x5ed9,	// (0x00015299) ai_message_heading_pane_t1_ParamLimits

0x5ed9,	// (0x00015299) ai_message_heading_pane_t1

0x5ef3,	// (0x000152b3) ai_message_heading_pane_t2_ParamLimits

0x5ef3,	// (0x000152b3) ai_message_heading_pane_t2

0x0001,

0xf956,	// (0x0001ed16) ai_message_heading_pane_t_ParamLimits

0xf956,	// (0x0001ed16) ai_message_heading_pane_t

0x5f05,	// (0x000152c5) bg_popup_heading_pane_cp1_ParamLimits

0x5f05,	// (0x000152c5) bg_popup_heading_pane_cp1

0x5e97,	// (0x00015257) list_ai_message_pane_ParamLimits

0x5e97,	// (0x00015257) list_ai_message_pane

0x36d5,	// (0x00012a95) scroll_pane_cp10

0x5e33,	// (0x000151f3) list_ai_message_pane_g1

0x5e3b,	// (0x000151fb) list_ai_message_pane_g2

0x0001,

0xf92a,	// (0x0001ecea) list_ai_message_pane_g

0x5e43,	// (0x00015203) list_ai_message_pane_t1_ParamLimits

0x5e43,	// (0x00015203) list_ai_message_pane_t1

0x5e58,	// (0x00015218) list_ai_message_pane_t2_ParamLimits

0x5e58,	// (0x00015218) list_ai_message_pane_t2

0x5e6d,	// (0x0001522d) list_ai_message_pane_t3_ParamLimits

0x5e6d,	// (0x0001522d) list_ai_message_pane_t3

0x5e82,	// (0x00015242) list_ai_message_pane_t4_ParamLimits

0x5e82,	// (0x00015242) list_ai_message_pane_t4

0x0003,

0xf92f,	// (0x0001ecef) list_ai_message_pane_t_ParamLimits

0xf92f,	// (0x0001ecef) list_ai_message_pane_t

0xd989,	// (0x0001cd49) cell_ai_soft_ind_pane_ParamLimits

0xd989,	// (0x0001cd49) cell_ai_soft_ind_pane

0x4374,	// (0x00013734) cell_ai_soft_ind_pane_g1_ParamLimits

0x4374,	// (0x00013734) cell_ai_soft_ind_pane_g1

0x250a,	// (0x000118ca) grid_highlight_cp1

0x4381,	// (0x00013741) text_secondary_cp56_ParamLimits

0x4381,	// (0x00013741) text_secondary_cp56

0x5df3,	// (0x000151b3) example_general_pane_ParamLimits

0x5df3,	// (0x000151b3) example_general_pane

0x5dff,	// (0x000151bf) example_parent_pane_g1_ParamLimits

0x5dff,	// (0x000151bf) example_parent_pane_g1

0x5e0b,	// (0x000151cb) example_parent_pane_t1_ParamLimits

0x5e0b,	// (0x000151cb) example_parent_pane_t1

0xbe90,	// (0x0001b250) popup_preview_text_window_ParamLimits

0xbe90,	// (0x0001b250) popup_preview_text_window

0x41ac,	// (0x0001356c) list_single_pane_cp2_g4

0x2935,	// (0x00011cf5) bg_popup_preview_window_pane_ParamLimits

0x2935,	// (0x00011cf5) bg_popup_preview_window_pane

0x5b43,	// (0x00014f03) popup_preview_text_window_t1_ParamLimits

0x5b43,	// (0x00014f03) popup_preview_text_window_t1

0x5b61,	// (0x00014f21) popup_preview_text_window_t2_ParamLimits

0x5b61,	// (0x00014f21) popup_preview_text_window_t2

0x5baa,	// (0x00014f6a) popup_preview_text_window_t3_ParamLimits

0x5baa,	// (0x00014f6a) popup_preview_text_window_t3

0x5bef,	// (0x00014faf) popup_preview_text_window_t4_ParamLimits

0x5bef,	// (0x00014faf) popup_preview_text_window_t4

0x0004,

0xf8fe,	// (0x0001ecbe) popup_preview_text_window_t_ParamLimits

0xf8fe,	// (0x0001ecbe) popup_preview_text_window_t

0x5c6d,	// (0x0001502d) scroll_pane_cp11

0x4b03,	// (0x00013ec3) bg_popup_preview_window_pane_g1

0x5b03,	// (0x00014ec3) bg_popup_preview_window_pane_g2

0x5b0b,	// (0x00014ecb) bg_popup_preview_window_pane_g3

0x5b13,	// (0x00014ed3) bg_popup_preview_window_pane_g4

0x5b1b,	// (0x00014edb) bg_popup_preview_window_pane_g5

0x5b23,	// (0x00014ee3) bg_popup_preview_window_pane_g6

0x5b2b,	// (0x00014eeb) bg_popup_preview_window_pane_g7

0x5b33,	// (0x00014ef3) bg_popup_preview_window_pane_g8

0x0173,	// (0x0000f533) aid_popup_width_pane

0xbe0c,	// (0x0001b1cc) popup_midp_note_alarm_window_ParamLimits

0xbe0c,	// (0x0001b1cc) popup_midp_note_alarm_window

0x33bd,	// (0x0001277d) data_form_pane_ParamLimits

0xcee3,	// (0x0001c2a3) form_field_data_pane_g1

0xceed,	// (0x0001c2ad) form_field_data_pane_t1_ParamLimits

0x33eb,	// (0x000127ab) input_focus_pane_ParamLimits

0x33f9,	// (0x000127b9) data_form_wide_pane_ParamLimits

0x3405,	// (0x000127c5) form_field_data_wide_pane_g1

0x3425,	// (0x000127e5) form_field_data_wide_pane_t1_ParamLimits

0x2be1,	// (0x00011fa1) input_focus_pane_cp6_ParamLimits

0xd029,	// (0x0001c3e9) input_popup_find_pane_g1_ParamLimits

0xd029,	// (0x0001c3e9) input_popup_find_pane_g1

0x06ef,	// (0x0000faaf) aid_navi_side_left_pane

0x0704,	// (0x0000fac4) aid_navi_side_right_pane

0x551c,	// (0x000148dc) bg_popup_window_pane_cp30_ParamLimits

0x551c,	// (0x000148dc) bg_popup_window_pane_cp30

0x5596,	// (0x00014956) popup_midp_note_alarm_window_g1_ParamLimits

0x5596,	// (0x00014956) popup_midp_note_alarm_window_g1

0x55c6,	// (0x00014986) popup_midp_note_alarm_window_t1_ParamLimits

0x55c6,	// (0x00014986) popup_midp_note_alarm_window_t1

0x5667,	// (0x00014a27) popup_midp_note_alarm_window_t2_ParamLimits

0x5667,	// (0x00014a27) popup_midp_note_alarm_window_t2

0x5715,	// (0x00014ad5) popup_midp_note_alarm_window_t3_ParamLimits

0x5715,	// (0x00014ad5) popup_midp_note_alarm_window_t3

0x5747,	// (0x00014b07) popup_midp_note_alarm_window_t4_ParamLimits

0x5747,	// (0x00014b07) popup_midp_note_alarm_window_t4

0x576d,	// (0x00014b2d) popup_midp_note_alarm_window_t5_ParamLimits

0x576d,	// (0x00014b2d) popup_midp_note_alarm_window_t5

0x000a,

0xf89b,	// (0x0001ec5b) popup_midp_note_alarm_window_t_ParamLimits

0xf89b,	// (0x0001ec5b) popup_midp_note_alarm_window_t

0x5819,	// (0x00014bd9) wait_bar_pane_cp1_ParamLimits

0x5819,	// (0x00014bd9) wait_bar_pane_cp1

0x250a,	// (0x000118ca) wait_anim_pane_copy1

0x250a,	// (0x000118ca) wait_border_pane_copy1

0x5202,	// (0x000145c2) wait_border_pane_g1_copy1

0x343c,	// (0x000127fc) form_field_popup_pane_g1

0xcf07,	// (0x0001c2c7) form_field_popup_pane_t1_ParamLimits

0x33eb,	// (0x000127ab) input_focus_pane_cp7_ParamLimits

0x345c,	// (0x0001281c) list_form_pane_ParamLimits

0x3468,	// (0x00012828) form_field_popup_wide_pane_g1

0x3470,	// (0x00012830) form_field_popup_wide_pane_t1_ParamLimits

0x33eb,	// (0x000127ab) input_focus_pane_cp8_ParamLimits

0x3485,	// (0x00012845) list_form_wide_pane_ParamLimits

0x6413,	// (0x000157d3) aid_size_cell_graphic_pane

0xcf86,	// (0x0001c346) data_form_pane_t1_ParamLimits

0xdb3d,	// (0x0001cefd) data_form_wide_pane_t1_ParamLimits

0xd461,	// (0x0001c821) bg_status_flat_pane

0xc797,	// (0x0001bb57) title_pane_t1_ParamLimits

0x25b2,	// (0x00011972) title_pane_t2_ParamLimits

0x25d8,	// (0x00011998) title_pane_t3_ParamLimits

0xf55d,	// (0x0001e91d) title_pane_t_ParamLimits

0x3b50,	// (0x00012f10) level_1_signal_ParamLimits

0x3b62,	// (0x00012f22) level_2_signal_ParamLimits

0x3b75,	// (0x00012f35) level_3_signal_ParamLimits

0x3b88,	// (0x00012f48) level_4_signal_ParamLimits

0x3b9b,	// (0x00012f5b) level_5_signal_ParamLimits

0x3bae,	// (0x00012f6e) level_6_signal_ParamLimits

0x3bc1,	// (0x00012f81) level_7_signal_ParamLimits

0x3b50,	// (0x00012f10) level_1_battery_ParamLimits

0x3b62,	// (0x00012f22) level_2_battery_ParamLimits

0x3b75,	// (0x00012f35) level_3_battery_ParamLimits

0x3b88,	// (0x00012f48) level_4_battery_ParamLimits

0x3b9b,	// (0x00012f5b) level_5_battery_ParamLimits

0x3bae,	// (0x00012f6e) level_6_battery_ParamLimits

0x3bc1,	// (0x00012f81) level_7_battery_ParamLimits

0x5421,	// (0x000147e1) bg_status_flat_pane_g1

0x5429,	// (0x000147e9) bg_status_flat_pane_g2

0x5431,	// (0x000147f1) bg_status_flat_pane_g3

0x5439,	// (0x000147f9) bg_status_flat_pane_g4

0x5441,	// (0x00014801) bg_status_flat_pane_g5

0x5449,	// (0x00014809) bg_status_flat_pane_g6

0x5451,	// (0x00014811) bg_status_flat_pane_g7

0xc823,	// (0x0001bbe3) tabs_3_active_pane_t1_ParamLimits

0xc823,	// (0x0001bbe3) tabs_3_passive_pane_t1_ParamLimits

0xc835,	// (0x0001bbf5) tabs_4_active_pane_t1_ParamLimits

0xc835,	// (0x0001bbf5) tabs_4_1_passive_pane_t1_ParamLimits

0xd037,	// (0x0001c3f7) tabs_2_active_pane_t1_ParamLimits

0xd037,	// (0x0001c3f7) tabs_2_passive_pane_t1_ParamLimits

0x25ea,	// (0x000119aa) bg_active_tab_pane_cp4_ParamLimits

0xd049,	// (0x0001c409) tabs_2_long_active_pane_t1_ParamLimits

0x45c3,	// (0x00013983) bg_passive_tab_pane_cp4_ParamLimits

0x12a6,	// (0x00010666) list_single_midp_graphic_pane_t1_ParamLimits

0x25ea,	// (0x000119aa) bg_active_tab_pane_cp5_ParamLimits

0xd05c,	// (0x0001c41c) tabs_3_long_active_pane_t1_ParamLimits

0x45c3,	// (0x00013983) bg_passive_tab_pane_cp5_ParamLimits

0x12a6,	// (0x00010666) list_single_midp_graphic_pane_t1

0xd461,	// (0x0001c821) bg_status_flat_pane_ParamLimits

0x4765,	// (0x00013b25) indicator_pane_cp2_ParamLimits

0x4765,	// (0x00013b25) indicator_pane_cp2

0xd5df,	// (0x0001c99f) navi_pane_srt_ParamLimits

0xd5df,	// (0x0001c99f) navi_pane_srt

0x48b4,	// (0x00013c74) popup_clock_digital_analogue_window_cp1

0x26e1,	// (0x00011aa1) indicator_pane_t1

0x427b,	// (0x0001363b) copy_highlight_pane

0x427b,	// (0x0001363b) cursor_graphics_pane

0x427b,	// (0x0001363b) graphic_within_text_pane

0x427b,	// (0x0001363b) link_highlight_pane

0x5c30,	// (0x00014ff0) popup_preview_text_window_t5_ParamLimits

0x5c30,	// (0x00014ff0) popup_preview_text_window_t5

0x439b,	// (0x0001375b) cursor_digital_pane

0x439b,	// (0x0001375b) cursor_primary_pane

0x43ac,	// (0x0001376c) cursor_primary_small_pane

0x43b4,	// (0x00013774) cursor_secondary_pane

0x43bc,	// (0x0001377c) cursor_title_pane

0x439b,	// (0x0001375b) link_highlight_digital_pane

0x43a3,	// (0x00013763) link_highlight_primary_pane

0x43ac,	// (0x0001376c) link_highlight_primary_small_pane

0x43b4,	// (0x00013774) link_highlight_secondary_pane

0x43bc,	// (0x0001377c) link_highlight_title_pane

0x439b,	// (0x0001375b) copy_highlight_digital_pane

0x439b,	// (0x0001375b) copy_highlight_primary_pane

0x43ac,	// (0x0001376c) copy_highlight_primary_small_pane

0x43b4,	// (0x00013774) copy_highlight_secondary_pane

0x43bc,	// (0x0001377c) copy_highlight_title_pane

0x43b4,	// (0x00013774) graphic_text_digital_pane

0x54bf,	// (0x0001487f) graphic_text_primary_pane

0x54c8,	// (0x00014888) graphic_text_primary_small_pane

0x43ac,	// (0x0001376c) graphic_text_secondary_pane

0x439b,	// (0x0001375b) graphic_text_title_pane

0xd31c,	// (0x0001c6dc) cursor_primary_pane_g1

0x54b1,	// (0x00014871) cursor_text_primary_t1

0xd882,	// (0x0001cc42) cursor_primary_small_pane_g1

0x54a3,	// (0x00014863) cursor_text_primary_small_t1

0xd878,	// (0x0001cc38) cursor_primary_small_pane_g1_copy1

0x548b,	// (0x0001484b) cursor_text_primary_small_t1_copy1

0x5469,	// (0x00014829) cursor_text_title_t1

0xd86e,	// (0x0001cc2e) cursor_title_pane_g1

0xd31c,	// (0x0001c6dc) cursor_digital_pane_g1

0x43ce,	// (0x0001378e) cursor_text_digital_t1

0x43f3,	// (0x000137b3) link_highlight_primary_pane_g1

0x5412,	// (0x000147d2) link_highlight_primary_pane_t1

0x43dc,	// (0x0001379c) link_highlight_primary_small_pane_g1

0x43e4,	// (0x000137a4) link_highlight_primary_small_pane_t1

0x43f3,	// (0x000137b3) link_highlight_secondary_pane_g1

0x43fb,	// (0x000137bb) link_highlight_secondary_pane_t1

0x5386,	// (0x00014746) link_highlight_title_pane_g1

0x538e,	// (0x0001474e) link_highlight_title_pane_t1

0x536f,	// (0x0001472f) link_highlight_digital_pane_g1

0x5377,	// (0x00014737) link_highlight_digital_pane_t1

0x5247,	// (0x00014607) copy_highlight_primary_pane_g1

0x524f,	// (0x0001460f) copy_highlight_primary_pane_t1

0x5221,	// (0x000145e1) copy_highlight_primary_small_pane_g1

0x5238,	// (0x000145f8) copy_highlight_primary_small_pane_t1

0x440a,	// (0x000137ca) copy_highlight_secondary_pane_g1

0x4412,	// (0x000137d2) copy_highlight_secondary_pane_t1

0x5221,	// (0x000145e1) copy_highlight_title_pane_g1

0x5229,	// (0x000145e9) copy_highlight_title_pane_t1

0x5247,	// (0x00014607) copy_highlight_digital_pane_g1

0x65dd,	// (0x0001599d) copy_highlight_digital_pane_t1

0x6531,	// (0x000158f1) graphic_text_primary_pane_g1

0x65c1,	// (0x00015981) graphic_text_primary_pane_t1

0x65cf,	// (0x0001598f) graphic_text_primary_pane_t2

0x0001,

0xf9ca,	// (0x0001ed8a) graphic_text_primary_pane_t

0x659d,	// (0x0001595d) graphic_text_primary_small_pane_g1

0x65a5,	// (0x00015965) graphic_text_primary_small_pane_t1

0x65b3,	// (0x00015973) graphic_text_primary_small_pane_t2

0x0001,

0xf9c5,	// (0x0001ed85) graphic_text_primary_small_pane_t

0x6579,	// (0x00015939) graphic_text_secondary_pane_g1

0x6581,	// (0x00015941) graphic_text_secondary_pane_t1

0x658f,	// (0x0001594f) graphic_text_secondary_pane_t2

0x0001,

0xf9c0,	// (0x0001ed80) graphic_text_secondary_pane_t

0x6555,	// (0x00015915) graphic_text_title_pane_g1

0x655d,	// (0x0001591d) graphic_text_title_pane_t1

0x656b,	// (0x0001592b) graphic_text_title_pane_t2

0x0001,

0xf9bb,	// (0x0001ed7b) graphic_text_title_pane_t

0x6531,	// (0x000158f1) graphic_text_digital_pane_g1

0x6539,	// (0x000158f9) graphic_text_digital_pane_t1

0x6547,	// (0x00015907) graphic_text_digital_pane_t2

0x0001,

0xf9b6,	// (0x0001ed76) graphic_text_digital_pane_t

0x25ea,	// (0x000119aa) navi_icon_pane_srt_ParamLimits

0x25ea,	// (0x000119aa) navi_icon_pane_srt

0x250a,	// (0x000118ca) navi_midp_pane_srt

0x250a,	// (0x000118ca) navi_navi_pane_srt

0x25ea,	// (0x000119aa) navi_text_pane_srt_ParamLimits

0x25ea,	// (0x000119aa) navi_text_pane_srt

0x64fc,	// (0x000158bc) navi_navi_icon_text_pane_srt

0x6504,	// (0x000158c4) navi_navi_pane_srt_g1_ParamLimits

0x6504,	// (0x000158c4) navi_navi_pane_srt_g1

0x6516,	// (0x000158d6) navi_navi_pane_srt_g2_ParamLimits

0x6516,	// (0x000158d6) navi_navi_pane_srt_g2

0x0001,

0xf9b1,	// (0x0001ed71) navi_navi_pane_srt_g_ParamLimits

0xf9b1,	// (0x0001ed71) navi_navi_pane_srt_g

0x6528,	// (0x000158e8) navi_navi_tabs_pane_srt

0x64fc,	// (0x000158bc) navi_navi_text_pane_srt

0x64fc,	// (0x000158bc) navi_navi_volume_pane_srt

0x64ed,	// (0x000158ad) navi_navi_text_pane_srt_t1

0x1620,	// (0x000109e0) navi_navi_volume_pane_srt_g1

0x1628,	// (0x000109e8) volume_small_pane_srt_ParamLimits

0x1628,	// (0x000109e8) volume_small_pane_srt

0x09cf,	// (0x0000fd8f) volume_small_pane_srt_g1_ParamLimits

0x09cf,	// (0x0000fd8f) volume_small_pane_srt_g1

0x09df,	// (0x0000fd9f) volume_small_pane_srt_g2_ParamLimits

0x09df,	// (0x0000fd9f) volume_small_pane_srt_g2

0x09f0,	// (0x0000fdb0) volume_small_pane_srt_g3_ParamLimits

0x09f0,	// (0x0000fdb0) volume_small_pane_srt_g3

0x0a01,	// (0x0000fdc1) volume_small_pane_srt_g4_ParamLimits

0x0a01,	// (0x0000fdc1) volume_small_pane_srt_g4

0x0a12,	// (0x0000fdd2) volume_small_pane_srt_g5_ParamLimits

0x0a12,	// (0x0000fdd2) volume_small_pane_srt_g5

0x0a23,	// (0x0000fde3) volume_small_pane_srt_g6_ParamLimits

0x0a23,	// (0x0000fde3) volume_small_pane_srt_g6

0x0a34,	// (0x0000fdf4) volume_small_pane_srt_g7_ParamLimits

0x0a34,	// (0x0000fdf4) volume_small_pane_srt_g7

0x0a45,	// (0x0000fe05) volume_small_pane_srt_g8_ParamLimits

0x0a45,	// (0x0000fe05) volume_small_pane_srt_g8

0x0a56,	// (0x0000fe16) volume_small_pane_srt_g9_ParamLimits

0x0a56,	// (0x0000fe16) volume_small_pane_srt_g9

0x0a67,	// (0x0000fe27) volume_small_pane_srt_g10_ParamLimits

0x0a67,	// (0x0000fe27) volume_small_pane_srt_g10

0x0009,

0xf75e,	// (0x0001eb1e) volume_small_pane_srt_g_ParamLimits

0xf75e,	// (0x0001eb1e) volume_small_pane_srt_g

0x29de,	// (0x00011d9e) query_popup_data_pane_cp2

0x64d3,	// (0x00015893) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x64d3,	// (0x00015893) navi_navi_icon_text_pane_srt_t1

0x54bf,	// (0x0001487f) navi_tabs_2_long_pane_srt

0x54bf,	// (0x0001487f) navi_tabs_2_pane_srt

0x54bf,	// (0x0001487f) navi_tabs_3_long_pane_srt

0x54bf,	// (0x0001487f) navi_tabs_3_pane_srt

0x54bf,	// (0x0001487f) navi_tabs_4_pane_srt

0x1600,	// (0x000109c0) tabs_2_active_pane_srt_ParamLimits

0x1600,	// (0x000109c0) tabs_2_active_pane_srt

0x1610,	// (0x000109d0) tabs_2_passive_pane_srt_ParamLimits

0x1610,	// (0x000109d0) tabs_2_passive_pane_srt

0x4c31,	// (0x00013ff1) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4c31,	// (0x00013ff1) bg_passive_tab_pane_cp1_srt

0x649f,	// (0x0001585f) bg_passive_tab_pane_g1_cp1_srt

0x3ec8,	// (0x00013288) bg_passive_tab_pane_g2_cp1_srt

0x64a8,	// (0x00015868) bg_passive_tab_pane_g3_cp1_srt

0x287f,	// (0x00011c3f) bg_active_tab_pane_cp1_srt_ParamLimits

0x287f,	// (0x00011c3f) bg_active_tab_pane_cp1_srt

0x64b1,	// (0x00015871) tabs_2_active_pane_srt_g1

0xdc63,	// (0x0001d023) tabs_2_active_pane_srt_t1_ParamLimits

0xdc63,	// (0x0001d023) tabs_2_active_pane_srt_t1

0x649f,	// (0x0001585f) bg_active_tab_pane_g1_cp1_srt

0x3ec8,	// (0x00013288) bg_active_tab_pane_g2_cp1_srt

0x64a8,	// (0x00015868) bg_active_tab_pane_g3_cp1_srt

0x15cd,	// (0x0001098d) tabs_3_active_pane_srt_ParamLimits

0x15cd,	// (0x0001098d) tabs_3_active_pane_srt

0x15de,	// (0x0001099e) tabs_3_passive_pane_cp_srt_ParamLimits

0x15de,	// (0x0001099e) tabs_3_passive_pane_cp_srt

0x15ef,	// (0x000109af) tabs_3_passive_pane_srt_ParamLimits

0x15ef,	// (0x000109af) tabs_3_passive_pane_srt

0x4c31,	// (0x00013ff1) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4c31,	// (0x00013ff1) bg_passive_tab_pane_cp2_srt

0x4421,	// (0x000137e1) bg_passive_tab_pane_g1_cp2_srt

0x3ec8,	// (0x00013288) bg_passive_tab_pane_g2_cp2_srt

0x442a,	// (0x000137ea) bg_passive_tab_pane_g3_cp2_srt

0x287f,	// (0x00011c3f) bg_active_tab_pane_cp2_srt_ParamLimits

0x287f,	// (0x00011c3f) bg_active_tab_pane_cp2_srt

0x6485,	// (0x00015845) tabs_3_active_pane_srt_g1

0xdc4d,	// (0x0001d00d) tabs_3_active_pane_srt_t1_ParamLimits

0xdc4d,	// (0x0001d00d) tabs_3_active_pane_srt_t1

0x4421,	// (0x000137e1) bg_active_tab_pane_g1_cp2_srt

0x3ec8,	// (0x00013288) bg_active_tab_pane_g2_cp2_srt

0x442a,	// (0x000137ea) bg_active_tab_pane_g3_cp2_srt

0x1585,	// (0x00010945) tabs_4_active_pane_srt_ParamLimits

0x1585,	// (0x00010945) tabs_4_active_pane_srt

0x1597,	// (0x00010957) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1597,	// (0x00010957) tabs_4_passive_pane_cp2_srt

0x0bcc,	// (0x0000ff8c) aid_size_cell_toolbar

0x5fff,	// (0x000153bf) main_idle_act_pane_ParamLimits

0x0d95,	// (0x00010155) popup_large_graphic_colour_window_ParamLimits

0xc11c,	// (0x0001b4dc) popup_toolbar_window_ParamLimits

0xc11c,	// (0x0001b4dc) popup_toolbar_window

0x6247,	// (0x00015607) list_single_graphic_2heading_pane_ParamLimits

0x6247,	// (0x00015607) list_single_graphic_2heading_pane

0x3905,	// (0x00012cc5) aid_size_cell_apps_grid_lsc_pane

0x3917,	// (0x00012cd7) aid_size_cell_apps_grid_prt_pane

0x45c3,	// (0x00013983) bg_wml_button_pane_cp1_ParamLimits

0x45c3,	// (0x00013983) bg_wml_button_pane_cp1

0xd80d,	// (0x0001cbcd) form_midp_field_text_pane_t1_ParamLimits

0x4c31,	// (0x00013ff1) input_focus_pane_cp050_ParamLimits

0x4ead,	// (0x0001426d) list_midp_form_text_pane_ParamLimits

0x4e53,	// (0x00014213) input_focus_pane_cp051_ParamLimits

0x4e67,	// (0x00014227) list_midp_choice_pane_ParamLimits

0xd7aa,	// (0x0001cb6a) list_single_2graphic_pane_cp3_ParamLimits

0xd7aa,	// (0x0001cb6a) list_single_2graphic_pane_cp3

0xd7bd,	// (0x0001cb7d) list_single_midp_graphic_pane_ParamLimits

0xd7bd,	// (0x0001cb7d) list_single_midp_graphic_pane

0x11a9,	// (0x00010569) list_single_graphic_2heading_pane_g1_ParamLimits

0x11a9,	// (0x00010569) list_single_graphic_2heading_pane_g1

0x11b5,	// (0x00010575) list_single_graphic_2heading_pane_g4_ParamLimits

0x11b5,	// (0x00010575) list_single_graphic_2heading_pane_g4

0x11c1,	// (0x00010581) list_single_graphic_2heading_pane_g5_ParamLimits

0x11c1,	// (0x00010581) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b1,	// (0x0001eb71) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b1,	// (0x0001eb71) list_single_graphic_2heading_pane_g

0x11cd,	// (0x0001058d) list_single_graphic_2heading_pane_t1_ParamLimits

0x11cd,	// (0x0001058d) list_single_graphic_2heading_pane_t1

0x11e1,	// (0x000105a1) list_single_graphic_2heading_pane_t2_ParamLimits

0x11e1,	// (0x000105a1) list_single_graphic_2heading_pane_t2

0x11fd,	// (0x000105bd) list_single_graphic_2heading_pane_t3_ParamLimits

0x11fd,	// (0x000105bd) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b8,	// (0x0001eb78) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b8,	// (0x0001eb78) list_single_graphic_2heading_pane_t

0x4a13,	// (0x00013dd3) bg_popup_sub_pane_cp2

0x4a3d,	// (0x00013dfd) grid_toobar_pane

0x1215,	// (0x000105d5) cell_toolbar_pane_ParamLimits

0x1215,	// (0x000105d5) cell_toolbar_pane

0x4aa7,	// (0x00013e67) cell_toolbar_pane_g1_ParamLimits

0x4aa7,	// (0x00013e67) cell_toolbar_pane_g1

0x4abb,	// (0x00013e7b) cell_toolbar_pane_g2_ParamLimits

0x4abb,	// (0x00013e7b) cell_toolbar_pane_g2

0x0001,

0xf7c6,	// (0x0001eb86) cell_toolbar_pane_g_ParamLimits

0xf7c6,	// (0x0001eb86) cell_toolbar_pane_g

0x4add,	// (0x00013e9d) grid_highlight_pane_cp2_ParamLimits

0x4add,	// (0x00013e9d) grid_highlight_pane_cp2

0x4af7,	// (0x00013eb7) toolbar_button_pane

0x4b03,	// (0x00013ec3) toolbar_button_pane_g1

0x4b0b,	// (0x00013ecb) toolbar_button_pane_g2

0x4b13,	// (0x00013ed3) toolbar_button_pane_g3

0x4b1b,	// (0x00013edb) toolbar_button_pane_g4

0x4b23,	// (0x00013ee3) toolbar_button_pane_g5

0x4b2b,	// (0x00013eeb) toolbar_button_pane_g6

0x4b33,	// (0x00013ef3) toolbar_button_pane_g7

0x4b3b,	// (0x00013efb) toolbar_button_pane_g8

0x4b43,	// (0x00013f03) toolbar_button_pane_g9

0x0009,

0xf7cb,	// (0x0001eb8b) toolbar_button_pane_g

0x124d,	// (0x0001060d) list_single_2graphic_pane_g1_cp3_ParamLimits

0x124d,	// (0x0001060d) list_single_2graphic_pane_g1_cp3

0xc174,	// (0x0001b534) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc174,	// (0x0001b534) list_single_2graphic_pane_g2_cp3

0x126a,	// (0x0001062a) list_single_2graphic_pane_g3_cp3

0x1272,	// (0x00010632) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1272,	// (0x00010632) list_single_2graphic_pane_g4_cp3

0x127e,	// (0x0001063e) list_single_2graphic_pane_t1_cp3_ParamLimits

0x127e,	// (0x0001063e) list_single_2graphic_pane_t1_cp3

0x129a,	// (0x0001065a) list_single_midp_graphic_pane_g2_ParamLimits

0x129a,	// (0x0001065a) list_single_midp_graphic_pane_g2

0x0bd4,	// (0x0000ff94) aid_zoom_text_primary

0x0bdc,	// (0x0000ff9c) aid_zoom_text_secondary

0x44de,	// (0x0001389e) status_small_pane_g7_ParamLimits

0x44de,	// (0x0001389e) status_small_pane_g7

0x4501,	// (0x000138c1) status_small_pane_t1_ParamLimits

0xc773,	// (0x0001bb33) title_pane_g2

0x0003,

0xf554,	// (0x0001e914) title_pane_g

0xc9eb,	// (0x0001bdab) aid_size_cell_colour_1_pane_ParamLimits

0xc9eb,	// (0x0001bdab) aid_size_cell_colour_1_pane

0xc9ff,	// (0x0001bdbf) aid_size_cell_colour_2_pane_ParamLimits

0xc9ff,	// (0x0001bdbf) aid_size_cell_colour_2_pane

0xca13,	// (0x0001bdd3) aid_size_cell_colour_3_pane_ParamLimits

0xca13,	// (0x0001bdd3) aid_size_cell_colour_3_pane

0xca27,	// (0x0001bde7) aid_size_cell_colour_4_pane_ParamLimits

0xca27,	// (0x0001bde7) aid_size_cell_colour_4_pane

0x062c,	// (0x0000f9ec) title_pane_stacon_g1_ParamLimits

0x062c,	// (0x0000f9ec) title_pane_stacon_g1

0x52a6,	// (0x00014666) popup_note_wait_window_g3_ParamLimits

0x52a6,	// (0x00014666) popup_note_wait_window_g3

0x531c,	// (0x000146dc) popup_note_wait_window_t5_ParamLimits

0x531c,	// (0x000146dc) popup_note_wait_window_t5

0x250a,	// (0x000118ca) main_feb_china_hwr_fs_writing_pane

0xbb2a,	// (0x0001aeea) popup_feb_china_hwr_fs_window_ParamLimits

0xbb2a,	// (0x0001aeea) popup_feb_china_hwr_fs_window

0xc185,	// (0x0001b545) aid_size_cell_hwr_fs_ParamLimits

0xc185,	// (0x0001b545) aid_size_cell_hwr_fs

0x4c31,	// (0x00013ff1) bg_popup_sub_pane_cp3_ParamLimits

0x4c31,	// (0x00013ff1) bg_popup_sub_pane_cp3

0xc19a,	// (0x0001b55a) grid_hwr_fs_pane_ParamLimits

0xc19a,	// (0x0001b55a) grid_hwr_fs_pane

0x12e9,	// (0x000106a9) linegrid_hwr_fs_pane_ParamLimits

0x12e9,	// (0x000106a9) linegrid_hwr_fs_pane

0xc1b2,	// (0x0001b572) cell_hwr_fs_pane_ParamLimits

0xc1b2,	// (0x0001b572) cell_hwr_fs_pane

0x4c3d,	// (0x00013ffd) linegrid_hwr_fs_pane_g1_ParamLimits

0x4c3d,	// (0x00013ffd) linegrid_hwr_fs_pane_g1

0xd77e,	// (0x0001cb3e) linegrid_hwr_fs_pane_g2_ParamLimits

0xd77e,	// (0x0001cb3e) linegrid_hwr_fs_pane_g2

0x4c5b,	// (0x0001401b) linegrid_hwr_fs_pane_g3_ParamLimits

0x4c5b,	// (0x0001401b) linegrid_hwr_fs_pane_g3

0x131b,	// (0x000106db) linegrid_hwr_fs_pane_g4_ParamLimits

0x131b,	// (0x000106db) linegrid_hwr_fs_pane_g4

0x1335,	// (0x000106f5) linegrid_hwr_fs_pane_g5_ParamLimits

0x1335,	// (0x000106f5) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f1,	// (0x0001ebb1) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f1,	// (0x0001ebb1) linegrid_hwr_fs_pane_g

0x4c67,	// (0x00014027) cell_hwr_fs_pane_g1_ParamLimits

0x4c67,	// (0x00014027) cell_hwr_fs_pane_g1

0x494a,	// (0x00013d0a) cell_hwr_fs_pane_g2_ParamLimits

0x494a,	// (0x00013d0a) cell_hwr_fs_pane_g2

0xd790,	// (0x0001cb50) cell_hwr_fs_pane_g3_ParamLimits

0xd790,	// (0x0001cb50) cell_hwr_fs_pane_g3

0xd79d,	// (0x0001cb5d) cell_hwr_fs_pane_g4_ParamLimits

0xd79d,	// (0x0001cb5d) cell_hwr_fs_pane_g4

0x0003,

0xf7fc,	// (0x0001ebbc) cell_hwr_fs_pane_g_ParamLimits

0xf7fc,	// (0x0001ebbc) cell_hwr_fs_pane_g

0xc1d8,	// (0x0001b598) cell_hwr_fs_pane_t1

0x250a,	// (0x000118ca) grid_highlight_pane_cp6

0x250a,	// (0x000118ca) main_idle_act2_pane

0x36bc,	// (0x00012a7c) aid_inside_area_popup_secondary

0xd88c,	// (0x0001cc4c) aid_inside_area_window_primary_ParamLimits

0xd88c,	// (0x0001cc4c) aid_inside_area_window_primary

0x65ec,	// (0x000159ac) ai2_news_ticker_pane

0x65f4,	// (0x000159b4) aid_size_cell_ai1_link_ParamLimits

0x65f4,	// (0x000159b4) aid_size_cell_ai1_link

0xdc79,	// (0x0001d039) popup_ai2_data_window_ParamLimits

0xdc79,	// (0x0001d039) popup_ai2_data_window

0x6624,	// (0x000159e4) popup_ai2_link_window_ParamLimits

0x6624,	// (0x000159e4) popup_ai2_link_window

0x4c31,	// (0x00013ff1) bg_popup_sub_pane_cp4_ParamLimits

0x4c31,	// (0x00013ff1) bg_popup_sub_pane_cp4

0x6638,	// (0x000159f8) grid_ai2_link_pane_ParamLimits

0x6638,	// (0x000159f8) grid_ai2_link_pane

0x664f,	// (0x00015a0f) popup_ai2_link_window_g1_ParamLimits

0x664f,	// (0x00015a0f) popup_ai2_link_window_g1

0x665b,	// (0x00015a1b) popup_ai2_link_window_g2_ParamLimits

0x665b,	// (0x00015a1b) popup_ai2_link_window_g2

0x0001,

0xf9cf,	// (0x0001ed8f) popup_ai2_link_window_g_ParamLimits

0xf9cf,	// (0x0001ed8f) popup_ai2_link_window_g

0x666a,	// (0x00015a2a) ai2_mp_button_pane

0x6672,	// (0x00015a32) ai2_mp_volume_pane

0x4e53,	// (0x00014213) bg_popup_sub_pane_cp5_ParamLimits

0x4e53,	// (0x00014213) bg_popup_sub_pane_cp5

0x667a,	// (0x00015a3a) heading_ai2_gene_pane_ParamLimits

0x667a,	// (0x00015a3a) heading_ai2_gene_pane

0x6686,	// (0x00015a46) list_ai2_gene_pane_ParamLimits

0x6686,	// (0x00015a46) list_ai2_gene_pane

0x66ce,	// (0x00015a8e) cell_ai2_link_pane_ParamLimits

0x66ce,	// (0x00015a8e) cell_ai2_link_pane

0x66e4,	// (0x00015aa4) cell_ai2_link_pane_g1

0x250a,	// (0x000118ca) grid_highlight_pane_cp7

0x163d,	// (0x000109fd) ai2_mp_volume_pane_g1

0x67b4,	// (0x00015b74) ai2_mp_volume_pane_g2

0xdca3,	// (0x0001d063) list_ai2_gene_pane_t1

0x67bc,	// (0x00015b7c) ai2_mp_volume_pane_g3

0x0002,

0xf9e8,	// (0x0001eda8) ai2_mp_volume_pane_g

0x1645,	// (0x00010a05) volume_small_pane_cp3

0x67c4,	// (0x00015b84) aid_size_cell_ai2_button

0x67cc,	// (0x00015b8c) grid_ai2_button_pane

0x67d5,	// (0x00015b95) cell_ai2_button_pane_ParamLimits

0x67d5,	// (0x00015b95) cell_ai2_button_pane

0x2500,	// (0x000118c0) cell_ai2_button_pane_g1

0x250a,	// (0x000118ca) grid_highlight_pane_cp8

0x6774,	// (0x00015b34) ai2_gene_pane_t1_ParamLimits

0x6774,	// (0x00015b34) ai2_gene_pane_t1

0xbaa4,	// (0x0001ae64) aid_height_parent_landscape

0xd9e9,	// (0x0001cda9) aid_height_set_list

0x5fff,	// (0x000153bf) aid_size_parent

0x6413,	// (0x000157d3) aid_size_cell_graphic_pane_ParamLimits

0x6696,	// (0x00015a56) popup_ai2_data_window_g1_ParamLimits

0x6696,	// (0x00015a56) popup_ai2_data_window_g1

0x66a2,	// (0x00015a62) ai2_news_ticker_pane_g1

0x66aa,	// (0x00015a6a) ai2_news_ticker_pane_g2

0x0001,

0xf9d4,	// (0x0001ed94) ai2_news_ticker_pane_g

0x66b2,	// (0x00015a72) ai2_news_ticker_pane_t1

0x66c0,	// (0x00015a80) ai2_news_ticker_pane_t2

0x0001,

0xf9d9,	// (0x0001ed99) ai2_news_ticker_pane_t

0x66ed,	// (0x00015aad) heading_ai2_gene_pane_g1

0x66f5,	// (0x00015ab5) heading_ai2_gene_pane_t1_ParamLimits

0x66f5,	// (0x00015ab5) heading_ai2_gene_pane_t1

0x670a,	// (0x00015aca) list_highlight_pane_cp6

0xdc8d,	// (0x0001d04d) ai2_gene_pane_ParamLimits

0xdc8d,	// (0x0001d04d) ai2_gene_pane

0xdcb1,	// (0x0001d071) list_ai2_gene_pane_t2

0x0001,

0xf9de,	// (0x0001ed9e) list_ai2_gene_pane_t

0x6745,	// (0x00015b05) list_highlight_pane_cp8_ParamLimits

0x6745,	// (0x00015b05) list_highlight_pane_cp8

0x6756,	// (0x00015b16) ai2_gene_pane_g1_ParamLimits

0x6756,	// (0x00015b16) ai2_gene_pane_g1

0x6768,	// (0x00015b28) ai2_gene_pane_g2_ParamLimits

0x6768,	// (0x00015b28) ai2_gene_pane_g2

0x0001,

0xf9e3,	// (0x0001eda3) ai2_gene_pane_g_ParamLimits

0xf9e3,	// (0x0001eda3) ai2_gene_pane_g

0x2e06,	// (0x000121c6) scroll_pane_cp12

0xba63,	// (0x0001ae23) control_pane_t3_ParamLimits

0xba63,	// (0x0001ae23) control_pane_t3

0x44f2,	// (0x000138b2) status_small_pane_g8_ParamLimits

0x44f2,	// (0x000138b2) status_small_pane_g8

0xbbbf,	// (0x0001af7f) popup_find_window_ParamLimits

0xbe46,	// (0x0001b206) popup_note_image_window_ParamLimits

0x4a79,	// (0x00013e39) list_double2_graphic_pane_vc_g1_ParamLimits

0x4a79,	// (0x00013e39) list_double2_graphic_pane_vc_g1

0x41b4,	// (0x00013574) list_double2_graphic_pane_vc_g2_ParamLimits

0x41b4,	// (0x00013574) list_double2_graphic_pane_vc_g2

0x4a85,	// (0x00013e45) list_double2_graphic_pane_vc_g3_ParamLimits

0x4a85,	// (0x00013e45) list_double2_graphic_pane_vc_g3

0x0002,

0xf7bf,	// (0x0001eb7f) list_double2_graphic_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001eb7f) list_double2_graphic_pane_vc_g

0x4a91,	// (0x00013e51) list_double2_graphic_pane_vc_t1_ParamLimits

0x4a91,	// (0x00013e51) list_double2_graphic_pane_vc_t1

0x41b4,	// (0x00013574) list_single_heading_pane_vc_g1_ParamLimits

0x41b4,	// (0x00013574) list_single_heading_pane_vc_g1

0x4a85,	// (0x00013e45) list_single_heading_pane_vc_g2_ParamLimits

0x4a85,	// (0x00013e45) list_single_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001e98e) list_single_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001e98e) list_single_heading_pane_vc_g

0x4b4b,	// (0x00013f0b) list_single_heading_pane_vc_t1_ParamLimits

0x4b4b,	// (0x00013f0b) list_single_heading_pane_vc_t1

0x4b63,	// (0x00013f23) list_single_heading_pane_vc_t2_ParamLimits

0x4b63,	// (0x00013f23) list_single_heading_pane_vc_t2

0x0001,

0xf7e0,	// (0x0001eba0) list_single_heading_pane_vc_t_ParamLimits

0xf7e0,	// (0x0001eba0) list_single_heading_pane_vc_t

0x4b7f,	// (0x00013f3f) list_setting_number_pane_vc_g1_ParamLimits

0x4b7f,	// (0x00013f3f) list_setting_number_pane_vc_g1

0x4b8b,	// (0x00013f4b) list_setting_number_pane_vc_g2_ParamLimits

0x4b8b,	// (0x00013f4b) list_setting_number_pane_vc_g2

0x0001,

0xf7e5,	// (0x0001eba5) list_setting_number_pane_vc_g_ParamLimits

0xf7e5,	// (0x0001eba5) list_setting_number_pane_vc_g

0x4b97,	// (0x00013f57) list_setting_number_pane_vc_t1_ParamLimits

0x4b97,	// (0x00013f57) list_setting_number_pane_vc_t1

0x4bab,	// (0x00013f6b) list_setting_number_pane_vc_t2_ParamLimits

0x4bab,	// (0x00013f6b) list_setting_number_pane_vc_t2

0x4bc7,	// (0x00013f87) list_setting_number_pane_vc_t3_ParamLimits

0x4bc7,	// (0x00013f87) list_setting_number_pane_vc_t3

0x0002,

0xf7ea,	// (0x0001ebaa) list_setting_number_pane_vc_t_ParamLimits

0xf7ea,	// (0x0001ebaa) list_setting_number_pane_vc_t

0x4bf5,	// (0x00013fb5) set_value_pane_vc_ParamLimits

0x4bf5,	// (0x00013fb5) set_value_pane_vc

0x6247,	// (0x00015607) list_double2_graphic_pane_vc_ParamLimits

0x6247,	// (0x00015607) list_double2_graphic_pane_vc

0x6247,	// (0x00015607) list_double2_large_graphic_pane_vc_ParamLimits

0x6247,	// (0x00015607) list_double2_large_graphic_pane_vc

0x6247,	// (0x00015607) list_double2_pane_vc_ParamLimits

0x6247,	// (0x00015607) list_double2_pane_vc

0x6247,	// (0x00015607) list_double_graphic_heading_pane_vc_ParamLimits

0x6247,	// (0x00015607) list_double_graphic_heading_pane_vc

0x6247,	// (0x00015607) list_double_graphic_pane_vc_ParamLimits

0x6247,	// (0x00015607) list_double_graphic_pane_vc

0x6247,	// (0x00015607) list_double_heading_pane_vc_ParamLimits

0x6247,	// (0x00015607) list_double_heading_pane_vc

0x6247,	// (0x00015607) list_double_large_graphic_pane_vc_ParamLimits

0x6247,	// (0x00015607) list_double_large_graphic_pane_vc

0x6247,	// (0x00015607) list_double_number_pane_vc_ParamLimits

0x6247,	// (0x00015607) list_double_number_pane_vc

0x6247,	// (0x00015607) list_double_pane_vc_ParamLimits

0x6247,	// (0x00015607) list_double_pane_vc

0x6247,	// (0x00015607) list_double_time_pane_vc_ParamLimits

0x6247,	// (0x00015607) list_double_time_pane_vc

0x6247,	// (0x00015607) list_setting_number_pane_vc_ParamLimits

0x6247,	// (0x00015607) list_setting_number_pane_vc

0x6247,	// (0x00015607) list_setting_pane_vc_ParamLimits

0x6247,	// (0x00015607) list_setting_pane_vc

0x6247,	// (0x00015607) list_single_graphic_heading_pane_vc_ParamLimits

0x6247,	// (0x00015607) list_single_graphic_heading_pane_vc

0x6247,	// (0x00015607) list_single_heading_pane_vc_ParamLimits

0x6247,	// (0x00015607) list_single_heading_pane_vc

0x6247,	// (0x00015607) list_single_number_heading_pane_vc_ParamLimits

0x6247,	// (0x00015607) list_single_number_heading_pane_vc

0x4a79,	// (0x00013e39) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4a79,	// (0x00013e39) list_double_graphic_heading_pane_vc_g1

0x6809,	// (0x00015bc9) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x6809,	// (0x00015bc9) list_double_graphic_heading_pane_vc_g2

0x6815,	// (0x00015bd5) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x6815,	// (0x00015bd5) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ef,	// (0x0001edaf) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ef,	// (0x0001edaf) list_double_graphic_heading_pane_vc_g

0x6821,	// (0x00015be1) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x6821,	// (0x00015be1) list_double_graphic_heading_pane_vc_t1

0x683d,	// (0x00015bfd) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x683d,	// (0x00015bfd) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f6,	// (0x0001edb6) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f6,	// (0x0001edb6) list_double_graphic_heading_pane_vc_t

0x4b7f,	// (0x00013f3f) list_setting_pane_vc_g1_ParamLimits

0x4b7f,	// (0x00013f3f) list_setting_pane_vc_g1

0x4b8b,	// (0x00013f4b) list_setting_pane_vc_g2_ParamLimits

0x4b8b,	// (0x00013f4b) list_setting_pane_vc_g2

0x0001,

0xf7e5,	// (0x0001eba5) list_setting_pane_vc_g_ParamLimits

0xf7e5,	// (0x0001eba5) list_setting_pane_vc_g

0x6a68,	// (0x00015e28) list_setting_pane_vc_t1_ParamLimits

0x6a68,	// (0x00015e28) list_setting_pane_vc_t1

0x6a84,	// (0x00015e44) list_setting_pane_vc_t2_ParamLimits

0x6a84,	// (0x00015e44) list_setting_pane_vc_t2

0x0001,

0xfa24,	// (0x0001ede4) list_setting_pane_vc_t_ParamLimits

0xfa24,	// (0x0001ede4) list_setting_pane_vc_t

0x4bf5,	// (0x00013fb5) set_value_pane_cp_vc_ParamLimits

0x4bf5,	// (0x00013fb5) set_value_pane_cp_vc

0x41b4,	// (0x00013574) list_single_number_heading_pane_vc_g1_ParamLimits

0x41b4,	// (0x00013574) list_single_number_heading_pane_vc_g1

0x4a85,	// (0x00013e45) list_single_number_heading_pane_vc_g2_ParamLimits

0x4a85,	// (0x00013e45) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001e98e) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001e98e) list_single_number_heading_pane_vc_g

0x4b4b,	// (0x00013f0b) list_single_number_heading_pane_vc_t1_ParamLimits

0x4b4b,	// (0x00013f0b) list_single_number_heading_pane_vc_t1

0x6aa0,	// (0x00015e60) list_single_number_heading_pane_vc_t2_ParamLimits

0x6aa0,	// (0x00015e60) list_single_number_heading_pane_vc_t2

0x6ab4,	// (0x00015e74) list_single_number_heading_pane_vc_t3_ParamLimits

0x6ab4,	// (0x00015e74) list_single_number_heading_pane_vc_t3

0x0002,

0xfa29,	// (0x0001ede9) list_single_number_heading_pane_vc_t_ParamLimits

0xfa29,	// (0x0001ede9) list_single_number_heading_pane_vc_t

0x4a79,	// (0x00013e39) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4a79,	// (0x00013e39) list_single_graphic_heading_pane_vc_g1

0x41b4,	// (0x00013574) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x41b4,	// (0x00013574) list_single_graphic_heading_pane_vc_g4

0x4a85,	// (0x00013e45) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4a85,	// (0x00013e45) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7bf,	// (0x0001eb7f) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001eb7f) list_single_graphic_heading_pane_vc_g

0x4b4b,	// (0x00013f0b) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4b4b,	// (0x00013f0b) list_single_graphic_heading_pane_vc_t1

0x6ac6,	// (0x00015e86) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x6ac6,	// (0x00015e86) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa30,	// (0x0001edf0) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa30,	// (0x0001edf0) list_single_graphic_heading_pane_vc_t

0x41b4,	// (0x00013574) list_double2_pane_vc_g1_ParamLimits

0x41b4,	// (0x00013574) list_double2_pane_vc_g1

0x4a85,	// (0x00013e45) list_double2_pane_vc_g2_ParamLimits

0x4a85,	// (0x00013e45) list_double2_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001e98e) list_double2_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001e98e) list_double2_pane_vc_g

0x6ada,	// (0x00015e9a) list_double2_pane_vc_t1_ParamLimits

0x6ada,	// (0x00015e9a) list_double2_pane_vc_t1

0x6af0,	// (0x00015eb0) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6af0,	// (0x00015eb0) list_double2_large_graphic_pane_vc_g1

0x41b4,	// (0x00013574) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x41b4,	// (0x00013574) list_double2_large_graphic_pane_vc_g2

0x4a85,	// (0x00013e45) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x4a85,	// (0x00013e45) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5eb,	// (0x0001e9ab) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5eb,	// (0x0001e9ab) list_double2_large_graphic_pane_vc_g

0x6afc,	// (0x00015ebc) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x6afc,	// (0x00015ebc) list_double2_large_graphic_pane_vc_t1

0x6b12,	// (0x00015ed2) list_double_time_pane_vc_g1_ParamLimits

0x6b12,	// (0x00015ed2) list_double_time_pane_vc_g1

0x6b1e,	// (0x00015ede) list_double_time_pane_vc_g2_ParamLimits

0x6b1e,	// (0x00015ede) list_double_time_pane_vc_g2

0x0001,

0xfa35,	// (0x0001edf5) list_double_time_pane_vc_g_ParamLimits

0xfa35,	// (0x0001edf5) list_double_time_pane_vc_g

0x6b2a,	// (0x00015eea) list_double_time_pane_vc_t1_ParamLimits

0x6b2a,	// (0x00015eea) list_double_time_pane_vc_t1

0x6b4e,	// (0x00015f0e) list_double_time_pane_vc_t2_ParamLimits

0x6b4e,	// (0x00015f0e) list_double_time_pane_vc_t2

0x6b7d,	// (0x00015f3d) list_double_time_pane_vc_t3_ParamLimits

0x6b7d,	// (0x00015f3d) list_double_time_pane_vc_t3

0x6b8f,	// (0x00015f4f) list_double_time_pane_vc_t4_ParamLimits

0x6b8f,	// (0x00015f4f) list_double_time_pane_vc_t4

0x0003,

0xfa3a,	// (0x0001edfa) list_double_time_pane_vc_t_ParamLimits

0xfa3a,	// (0x0001edfa) list_double_time_pane_vc_t

0x41b4,	// (0x00013574) list_double_pane_vc_g1_ParamLimits

0x41b4,	// (0x00013574) list_double_pane_vc_g1

0x4a85,	// (0x00013e45) list_double_pane_vc_g2_ParamLimits

0x4a85,	// (0x00013e45) list_double_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001e98e) list_double_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001e98e) list_double_pane_vc_g

0x6ba3,	// (0x00015f63) list_double_pane_vc_t1_ParamLimits

0x6ba3,	// (0x00015f63) list_double_pane_vc_t1

0x6bb7,	// (0x00015f77) list_double_pane_vc_t2_ParamLimits

0x6bb7,	// (0x00015f77) list_double_pane_vc_t2

0x0001,

0xfa43,	// (0x0001ee03) list_double_pane_vc_t_ParamLimits

0xfa43,	// (0x0001ee03) list_double_pane_vc_t

0x41b4,	// (0x00013574) list_double_number_pane_vc_g1_ParamLimits

0x41b4,	// (0x00013574) list_double_number_pane_vc_g1

0x4a85,	// (0x00013e45) list_double_number_pane_vc_g2_ParamLimits

0x4a85,	// (0x00013e45) list_double_number_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001e98e) list_double_number_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001e98e) list_double_number_pane_vc_g

0x6bcf,	// (0x00015f8f) list_double_number_pane_vc_t1_ParamLimits

0x6bcf,	// (0x00015f8f) list_double_number_pane_vc_t1

0x6be1,	// (0x00015fa1) list_double_number_pane_vc_t2_ParamLimits

0x6be1,	// (0x00015fa1) list_double_number_pane_vc_t2

0x6bf5,	// (0x00015fb5) list_double_number_pane_vc_t3_ParamLimits

0x6bf5,	// (0x00015fb5) list_double_number_pane_vc_t3

0x0002,

0xfa48,	// (0x0001ee08) list_double_number_pane_vc_t_ParamLimits

0xfa48,	// (0x0001ee08) list_double_number_pane_vc_t

0x6c0d,	// (0x00015fcd) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6c0d,	// (0x00015fcd) list_double_large_graphic_pane_vc_g1

0x6c19,	// (0x00015fd9) list_double_large_graphic_pane_vc_g2_ParamLimits

0x6c19,	// (0x00015fd9) list_double_large_graphic_pane_vc_g2

0x4a85,	// (0x00013e45) list_double_large_graphic_pane_vc_g3_ParamLimits

0x4a85,	// (0x00013e45) list_double_large_graphic_pane_vc_g3

0x6c28,	// (0x00015fe8) list_double_large_graphic_pane_vc_g4_ParamLimits

0x6c28,	// (0x00015fe8) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4f,	// (0x0001ee0f) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4f,	// (0x0001ee0f) list_double_large_graphic_pane_vc_g

0x6c34,	// (0x00015ff4) list_double_large_graphic_pane_vc_t1_ParamLimits

0x6c34,	// (0x00015ff4) list_double_large_graphic_pane_vc_t1

0x6c48,	// (0x00016008) list_double_large_graphic_pane_vc_t2_ParamLimits

0x6c48,	// (0x00016008) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa58,	// (0x0001ee18) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa58,	// (0x0001ee18) list_double_large_graphic_pane_vc_t

0x6809,	// (0x00015bc9) list_double_heading_pane_vc_g1_ParamLimits

0x6809,	// (0x00015bc9) list_double_heading_pane_vc_g1

0x6815,	// (0x00015bd5) list_double_heading_pane_vc_g2_ParamLimits

0x6815,	// (0x00015bd5) list_double_heading_pane_vc_g2

0x0001,

0xfa5d,	// (0x0001ee1d) list_double_heading_pane_vc_g_ParamLimits

0xfa5d,	// (0x0001ee1d) list_double_heading_pane_vc_g

0x6c61,	// (0x00016021) list_double_heading_pane_vc_t1_ParamLimits

0x6c61,	// (0x00016021) list_double_heading_pane_vc_t1

0x4b4b,	// (0x00013f0b) list_double_heading_pane_vc_t2_ParamLimits

0x4b4b,	// (0x00013f0b) list_double_heading_pane_vc_t2

0x0001,

0xfa62,	// (0x0001ee22) list_double_heading_pane_vc_t_ParamLimits

0xfa62,	// (0x0001ee22) list_double_heading_pane_vc_t

0x4a79,	// (0x00013e39) list_double_graphic_pane_vc_g1_ParamLimits

0x4a79,	// (0x00013e39) list_double_graphic_pane_vc_g1

0x6c75,	// (0x00016035) list_double_graphic_pane_vc_g2_ParamLimits

0x6c75,	// (0x00016035) list_double_graphic_pane_vc_g2

0x6867,	// (0x00015c27) list_double_graphic_pane_vc_g3_ParamLimits

0x6867,	// (0x00015c27) list_double_graphic_pane_vc_g3

0x0002,

0xfa67,	// (0x0001ee27) list_double_graphic_pane_vc_g_ParamLimits

0xfa67,	// (0x0001ee27) list_double_graphic_pane_vc_g

0x6c84,	// (0x00016044) list_double_graphic_pane_vc_t1_ParamLimits

0x6c84,	// (0x00016044) list_double_graphic_pane_vc_t1

0x6c98,	// (0x00016058) list_double_graphic_pane_vc_t2_ParamLimits

0x6c98,	// (0x00016058) list_double_graphic_pane_vc_t2

0x0001,

0xfa6e,	// (0x0001ee2e) list_double_graphic_pane_vc_t_ParamLimits

0xfa6e,	// (0x0001ee2e) list_double_graphic_pane_vc_t

0x017f,	// (0x0000f53f) aid_size_cell_fastswap

0xb72e,	// (0x0001aaee) aid_size_cell_touch_ParamLimits

0xb72e,	// (0x0001aaee) aid_size_cell_touch

0x03ec,	// (0x0000f7ac) popup_fast_swap_wide_window_ParamLimits

0x03ec,	// (0x0000f7ac) popup_fast_swap_wide_window

0xb8de,	// (0x0001ac9e) touch_pane_ParamLimits

0xb8de,	// (0x0001ac9e) touch_pane

0x3305,	// (0x000126c5) button_value_adjust_pane_cp2

0x330d,	// (0x000126cd) button_value_adjust_pane_cp4

0x332f,	// (0x000126ef) form_field_data_pane_cp2

0xceaa,	// (0x0001c26a) form_field_data_wide_pane_cp2

0x39ce,	// (0x00012d8e) bg_scroll_pane_ParamLimits

0x078e,	// (0x0000fb4e) scroll_handle_pane_ParamLimits

0x07a2,	// (0x0000fb62) scroll_sc2_down_pane_ParamLimits

0x07a2,	// (0x0000fb62) scroll_sc2_down_pane

0x39ff,	// (0x00012dbf) scroll_sc2_up_pane_ParamLimits

0x39ff,	// (0x00012dbf) scroll_sc2_up_pane

0xdddb,	// (0x0001d19b) grid_wheel_folder_pane_g1_ParamLimits

0xdddb,	// (0x0001d19b) grid_wheel_folder_pane_g1

0x0967,	// (0x0000fd27) clock_nsta_pane_cp2_ParamLimits

0x0967,	// (0x0000fd27) clock_nsta_pane_cp2

0x45c3,	// (0x00013983) listscroll_midp_pane_ParamLimits

0xd285,	// (0x0001c645) midp_canvas_pane

0x456d,	// (0x0001392d) nsta_clock_indic_pane

0x45a9,	// (0x00013969) listscroll_form_pane_vc

0x45b1,	// (0x00013971) listscroll_set_pane_vc_ParamLimits

0x45b1,	// (0x00013971) listscroll_set_pane_vc

0xd489,	// (0x0001c849) clock_nsta_pane

0xd4b3,	// (0x0001c873) indicator_nsta_pane

0x4a13,	// (0x00013dd3) bg_popup_sub_pane_cp2_ParamLimits

0x4a27,	// (0x00013de7) find_pane_cp2_ParamLimits

0x4a27,	// (0x00013de7) find_pane_cp2

0x4a3d,	// (0x00013dfd) grid_toobar_pane_ParamLimits

0x4c05,	// (0x00013fc5) list_form_gen_pane_vc_ParamLimits

0x4c05,	// (0x00013fc5) list_form_gen_pane_vc

0x4c1b,	// (0x00013fdb) scroll_pane_cp8_vc_ParamLimits

0x4c1b,	// (0x00013fdb) scroll_pane_cp8_vc

0x4c97,	// (0x00014057) data_form_wide_pane_vc_ParamLimits

0x4c97,	// (0x00014057) data_form_wide_pane_vc

0x4ca3,	// (0x00014063) form_field_data_wide_pane_vc_g1

0x4cab,	// (0x0001406b) form_field_data_wide_pane_vc_t1_ParamLimits

0x4cab,	// (0x0001406b) form_field_data_wide_pane_vc_t1

0x33eb,	// (0x000127ab) input_focus_pane_cp6_vc_ParamLimits

0x33eb,	// (0x000127ab) input_focus_pane_cp6_vc

0xd846,	// (0x0001cc06) list_midp_pane_ParamLimits

0x6479,	// (0x00015839) scroll_pane_cp16_ParamLimits

0x6479,	// (0x00015839) scroll_pane_cp16

0x506f,	// (0x0001442f) button_value_adjust_pane_ParamLimits

0x506f,	// (0x0001442f) button_value_adjust_pane

0xd9fa,	// (0x0001cdba) button_value_adjust_pane_cp6_ParamLimits

0xd9fa,	// (0x0001cdba) button_value_adjust_pane_cp6

0xdb14,	// (0x0001ced4) settings_code_pane_cp_ParamLimits

0xdb14,	// (0x0001ced4) settings_code_pane_cp

0x2500,	// (0x000118c0) cell_touch_pane_g1

0x2500,	// (0x000118c0) cell_touch_pane_g2

0x0001,

0xf704,	// (0x0001eac4) cell_touch_pane_g

0xdcbf,	// (0x0001d07f) cell_touch_pane_cp_ParamLimits

0xdcbf,	// (0x0001d07f) cell_touch_pane_cp

0xdcdb,	// (0x0001d09b) cell_touch_pane_ParamLimits

0xdcdb,	// (0x0001d09b) cell_touch_pane

0x2500,	// (0x000118c0) scroll_sc2_down_pane_g1

0x2500,	// (0x000118c0) scroll_sc2_up_pane_g1

0x250a,	// (0x000118ca) bg_set_opt_pane_cp4_vc

0x685b,	// (0x00015c1b) list_set_graphic_pane_vc_g1_ParamLimits

0x685b,	// (0x00015c1b) list_set_graphic_pane_vc_g1

0x6867,	// (0x00015c27) list_set_graphic_pane_vc_g2_ParamLimits

0x6867,	// (0x00015c27) list_set_graphic_pane_vc_g2

0x0001,

0xf9fb,	// (0x0001edbb) list_set_graphic_pane_vc_g_ParamLimits

0xf9fb,	// (0x0001edbb) list_set_graphic_pane_vc_g

0x6873,	// (0x00015c33) text_primary_small_cp13_vc_ParamLimits

0x6873,	// (0x00015c33) text_primary_small_cp13_vc

0x688b,	// (0x00015c4b) list_set_graphic_pane_vc_ParamLimits

0x688b,	// (0x00015c4b) list_set_graphic_pane_vc

0x250a,	// (0x000118ca) input_focus_pane_cp2_vc

0x2500,	// (0x000118c0) setting_code_pane_vc_g1

0x2635,	// (0x000119f5) setting_code_pane_vc_t1

0x689d,	// (0x00015c5d) set_text_pane_vc_t1_ParamLimits

0x689d,	// (0x00015c5d) set_text_pane_vc_t1

0x250a,	// (0x000118ca) input_focus_pane_cp1_vc

0x68b9,	// (0x00015c79) list_set_text_pane_vc

0x2500,	// (0x000118c0) setting_text_pane_vc_g1

0x250a,	// (0x000118ca) bg_set_opt_pane_cp2_vc

0x262c,	// (0x000119ec) setting_slider_graphic_pane_vc_g1

0x68c3,	// (0x00015c83) setting_slider_graphic_pane_vc_t1

0x68d3,	// (0x00015c93) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa00,	// (0x0001edc0) setting_slider_graphic_pane_vc_t

0x68e3,	// (0x00015ca3) slider_set_pane_cp_vc

0x68eb,	// (0x00015cab) slider_set_pane_vc_g1

0x68f4,	// (0x00015cb4) slider_set_pane_vc_g2

0x0006,

0xfa05,	// (0x0001edc5) slider_set_pane_vc_g

0x3514,	// (0x000128d4) set_opt_bg_pane_g1_copy1

0x351c,	// (0x000128dc) set_opt_bg_pane_g2_copy1

0x6920,	// (0x00015ce0) set_opt_bg_pane_g3_copy1

0x352c,	// (0x000128ec) set_opt_bg_pane_g4_copy1

0x3534,	// (0x000128f4) set_opt_bg_pane_g5_copy1

0x353c,	// (0x000128fc) set_opt_bg_pane_g6_copy1

0x692a,	// (0x00015cea) set_opt_bg_pane_g7_copy1

0x6932,	// (0x00015cf2) set_opt_bg_pane_g8_copy1

0x693c,	// (0x00015cfc) set_opt_bg_pane_g9_copy1

0x250a,	// (0x000118ca) bg_set_opt_pane_cp_vc

0x6946,	// (0x00015d06) setting_slider_pane_vc_t1

0x6955,	// (0x00015d15) setting_slider_pane_vc_t2

0x6965,	// (0x00015d25) setting_slider_pane_vc_t3

0x0002,

0xfa14,	// (0x0001edd4) setting_slider_pane_vc_t

0x6975,	// (0x00015d35) slider_set_pane_vc

0x1359,	// (0x00010719) volume_set_pane_vc_g1

0x1362,	// (0x00010722) volume_set_pane_vc_g2

0x136b,	// (0x0001072b) volume_set_pane_vc_g3

0x1374,	// (0x00010734) volume_set_pane_vc_g4

0x137d,	// (0x0001073d) volume_set_pane_vc_g5

0x1386,	// (0x00010746) volume_set_pane_vc_g6

0x138f,	// (0x0001074f) volume_set_pane_vc_g7

0x1398,	// (0x00010758) volume_set_pane_vc_g8

0x13a1,	// (0x00010761) volume_set_pane_vc_g9

0x13aa,	// (0x0001076a) volume_set_pane_vc_g10

0x0009,

0xf8b2,	// (0x0001ec72) volume_set_pane_vc_g

0x697d,	// (0x00015d3d) volume_set_pane_vc

0x6985,	// (0x00015d45) button_value_adjust_pane_cp1_vc

0x698f,	// (0x00015d4f) list_highlight_pane_cp2_vc

0x6998,	// (0x00015d58) list_set_pane_vc_ParamLimits

0x6998,	// (0x00015d58) list_set_pane_vc

0x69f6,	// (0x00015db6) main_pane_set_vc_t1_ParamLimits

0x69f6,	// (0x00015db6) main_pane_set_vc_t1

0x6a0b,	// (0x00015dcb) main_pane_set_vc_t2_ParamLimits

0x6a0b,	// (0x00015dcb) main_pane_set_vc_t2

0x6a1d,	// (0x00015ddd) main_pane_set_vc_t3_ParamLimits

0x6a1d,	// (0x00015ddd) main_pane_set_vc_t3

0x6a31,	// (0x00015df1) main_pane_set_vc_t4_ParamLimits

0x6a31,	// (0x00015df1) main_pane_set_vc_t4

0x0003,

0xfa1b,	// (0x0001eddb) main_pane_set_vc_t_ParamLimits

0xfa1b,	// (0x0001eddb) main_pane_set_vc_t

0x6a45,	// (0x00015e05) setting_code_pane_vc_ParamLimits

0x6a45,	// (0x00015e05) setting_code_pane_vc

0x6a56,	// (0x00015e16) setting_slider_graphic_pane_vc

0x6a56,	// (0x00015e16) setting_slider_pane_vc

0x6a56,	// (0x00015e16) setting_text_pane_vc

0x6a56,	// (0x00015e16) setting_volume_pane_vc

0x6a60,	// (0x00015e20) scroll_pane_cp121_vc

0x32f3,	// (0x000126b3) set_content_pane_vc

0x6cb0,	// (0x00016070) button_value_adjust_pane_g1

0x6cb9,	// (0x00016079) button_value_adjust_pane_g2

0x0001,

0xfa73,	// (0x0001ee33) button_value_adjust_pane_g

0x6cc2,	// (0x00016082) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6cc2,	// (0x00016082) form_field_slider_wide_pane_vc_t1

0x6cd6,	// (0x00016096) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6cd6,	// (0x00016096) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa78,	// (0x0001ee38) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa78,	// (0x0001ee38) form_field_slider_wide_pane_vc_t

0x287f,	// (0x00011c3f) input_focus_pane_cp10_vc_ParamLimits

0x287f,	// (0x00011c3f) input_focus_pane_cp10_vc

0x6d04,	// (0x000160c4) slider_cont_pane_cp1_vc_ParamLimits

0x6d04,	// (0x000160c4) slider_cont_pane_cp1_vc

0x6d16,	// (0x000160d6) slider_form_pane_g1_cp2

0x68f4,	// (0x00015cb4) slider_form_pane_g2_cp2

0x6d43,	// (0x00016103) form_field_slider_pane_vc_t3

0x6d51,	// (0x00016111) form_field_slider_pane_vc_t4

0x6d5f,	// (0x0001611f) slider_form_pane_vc_ParamLimits

0x6d5f,	// (0x0001611f) slider_form_pane_vc

0x6d6c,	// (0x0001612c) form_field_slider_pane_vc_t1_ParamLimits

0x6d6c,	// (0x0001612c) form_field_slider_pane_vc_t1

0x6cd6,	// (0x00016096) form_field_slider_pane_vc_t2_ParamLimits

0x6cd6,	// (0x00016096) form_field_slider_pane_vc_t2

0x0001,

0xfa8a,	// (0x0001ee4a) form_field_slider_pane_vc_t_ParamLimits

0xfa8a,	// (0x0001ee4a) form_field_slider_pane_vc_t

0x287f,	// (0x00011c3f) input_focus_pane_cp9_vc_ParamLimits

0x287f,	// (0x00011c3f) input_focus_pane_cp9_vc

0x6d88,	// (0x00016148) slider_cont_pane_vc_ParamLimits

0x6d88,	// (0x00016148) slider_cont_pane_vc

0x6d9c,	// (0x0001615c) list_form_graphic_pane_cp_vc_ParamLimits

0x6d9c,	// (0x0001615c) list_form_graphic_pane_cp_vc

0x4ca3,	// (0x00014063) form_field_popup_wide_pane_vc_g1

0x6db1,	// (0x00016171) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6db1,	// (0x00016171) form_field_popup_wide_pane_vc_t1

0x33eb,	// (0x000127ab) input_focus_pane_cp8_vc_ParamLimits

0x33eb,	// (0x000127ab) input_focus_pane_cp8_vc

0x6df6,	// (0x000161b6) list_form_wide_pane_vc_ParamLimits

0x6df6,	// (0x000161b6) list_form_wide_pane_vc

0x6e02,	// (0x000161c2) list_form_graphic_pane_vc_g1

0x6e0a,	// (0x000161ca) list_form_graphic_pane_vc_t1_ParamLimits

0x6e0a,	// (0x000161ca) list_form_graphic_pane_vc_t1

0x25ea,	// (0x000119aa) list_highlight_pane_cp5_vc_ParamLimits

0x25ea,	// (0x000119aa) list_highlight_pane_cp5_vc

0x6e26,	// (0x000161e6) list_form_graphic_pane_vc_ParamLimits

0x6e26,	// (0x000161e6) list_form_graphic_pane_vc

0x4ca3,	// (0x00014063) form_field_popup_pane_vc_g1

0x6e3c,	// (0x000161fc) form_field_popup_pane_vc_t1_ParamLimits

0x6e3c,	// (0x000161fc) form_field_popup_pane_vc_t1

0x33eb,	// (0x000127ab) input_focus_pane_cp7_vc_ParamLimits

0x33eb,	// (0x000127ab) input_focus_pane_cp7_vc

0x6e53,	// (0x00016213) list_form_pane_vc_ParamLimits

0x6e53,	// (0x00016213) list_form_pane_vc

0x6e5f,	// (0x0001621f) data_form_pane_vc_t1_ParamLimits

0x6e5f,	// (0x0001621f) data_form_pane_vc_t1

0x3514,	// (0x000128d4) input_focus_pane_vc_g1

0x351c,	// (0x000128dc) input_focus_pane_vc_g2

0x3524,	// (0x000128e4) input_focus_pane_vc_g3

0x352c,	// (0x000128ec) input_focus_pane_vc_g4

0x3534,	// (0x000128f4) input_focus_pane_vc_g5

0x353c,	// (0x000128fc) input_focus_pane_vc_g6

0x3544,	// (0x00012904) input_focus_pane_vc_g7

0x354c,	// (0x0001290c) input_focus_pane_vc_g8

0x3554,	// (0x00012914) input_focus_pane_vc_g9

0x2500,	// (0x000118c0) input_focus_pane_vc_g10

0x0009,

0xf68d,	// (0x0001ea4d) input_focus_pane_vc_g

0x4c97,	// (0x00014057) data_form_pane_vc_ParamLimits

0x4c97,	// (0x00014057) data_form_pane_vc

0x4ca3,	// (0x00014063) form_field_data_pane_vc_g1

0x6e7a,	// (0x0001623a) form_field_data_pane_vc_t1_ParamLimits

0x6e7a,	// (0x0001623a) form_field_data_pane_vc_t1

0x33eb,	// (0x000127ab) input_focus_pane_vc_ParamLimits

0x33eb,	// (0x000127ab) input_focus_pane_vc

0x6e94,	// (0x00016254) button_value_adjust_pane_cp3_vc

0x6e9c,	// (0x0001625c) button_value_adjust_pane_cp5_vc

0x6ea4,	// (0x00016264) form_field_data_pane_vc_ParamLimits

0x6ea4,	// (0x00016264) form_field_data_pane_vc

0x6ebb,	// (0x0001627b) form_field_data_pane_vc_cp2

0x6ec3,	// (0x00016283) form_field_data_wide_pane_vc_ParamLimits

0x6ec3,	// (0x00016283) form_field_data_wide_pane_vc

0x6ed9,	// (0x00016299) form_field_data_wide_pane_vc_cp2

0x6ee1,	// (0x000162a1) form_field_popup_pane_vc_ParamLimits

0x6ee1,	// (0x000162a1) form_field_popup_pane_vc

0x6ef8,	// (0x000162b8) form_field_popup_wide_pane_vc_ParamLimits

0x6ef8,	// (0x000162b8) form_field_popup_wide_pane_vc

0x6f0e,	// (0x000162ce) form_field_slider_pane_vc_ParamLimits

0x6f0e,	// (0x000162ce) form_field_slider_pane_vc

0x6f21,	// (0x000162e1) form_field_slider_wide_pane_vc_ParamLimits

0x6f21,	// (0x000162e1) form_field_slider_wide_pane_vc

0xdcf9,	// (0x0001d0b9) grid_touch_1_pane_ParamLimits

0xdcf9,	// (0x0001d0b9) grid_touch_1_pane

0xdd0d,	// (0x0001d0cd) grid_touch_2_pane_ParamLimits

0xdd0d,	// (0x0001d0cd) grid_touch_2_pane

0x6ff6,	// (0x000163b6) touch_pane_g1_ParamLimits

0x6ff6,	// (0x000163b6) touch_pane_g1

0x6f58,	// (0x00016318) cell_app_pane_cp_wide_ParamLimits

0x6f58,	// (0x00016318) cell_app_pane_cp_wide

0x6f69,	// (0x00016329) grid_popup_fast_wide_pane_ParamLimits

0x6f69,	// (0x00016329) grid_popup_fast_wide_pane

0x6f7d,	// (0x0001633d) scroll_pane_cp19_ParamLimits

0x6f7d,	// (0x0001633d) scroll_pane_cp19

0x250a,	// (0x000118ca) bg_popup_window_pane_cp20

0x6f91,	// (0x00016351) listscroll_popup_fast_wide_pane

0x3728,	// (0x00012ae8) grid_indicator_nsta_pane

0x6f99,	// (0x00016359) clock_nsta_pane_g1

0x6fa2,	// (0x00016362) clock_nsta_pane_t1

0xdd37,	// (0x0001d0f7) cell_indicator_nsta_pane_ParamLimits

0xdd37,	// (0x0001d0f7) cell_indicator_nsta_pane

0x6ff6,	// (0x000163b6) cell_indicator_nsta_pane_g1

0xdd50,	// (0x0001d110) cell_indicator_nsta_pane_g2

0x0001,

0xfa9b,	// (0x0001ee5b) cell_indicator_nsta_pane_g

0x701a,	// (0x000163da) clock_nsta_pane_cp

0x7022,	// (0x000163e2) indicator_nsta_pane_cp

0x702a,	// (0x000163ea) nsta_clock_indic_pane_g1

0x26cd,	// (0x00011a8d) grid_indicator_pane

0x3af4,	// (0x00012eb4) scroll_pane_cp29

0x08b6,	// (0x0000fc76) indicator_nsta_pane_cp2_ParamLimits

0x08b6,	// (0x0000fc76) indicator_nsta_pane_cp2

0x25ea,	// (0x000119aa) main_apps_wheel_pane

0x4ef6,	// (0x000142b6) form_midp_field_text_pane_ParamLimits

0x5041,	// (0x00014401) scroll_bar_cp050_ParamLimits

0x7083,	// (0x00016443) cell_indicator_pane_ParamLimits

0x7083,	// (0x00016443) cell_indicator_pane

0x709a,	// (0x0001645a) cell_indicator_pane_g1

0xdd65,	// (0x0001d125) grid_wheel_folder_pane_ParamLimits

0xdd65,	// (0x0001d125) grid_wheel_folder_pane

0xdd73,	// (0x0001d133) list_wheel_apps_pane_ParamLimits

0xdd73,	// (0x0001d133) list_wheel_apps_pane

0xdd81,	// (0x0001d141) main_apps_wheel_pane_g1_ParamLimits

0xdd81,	// (0x0001d141) main_apps_wheel_pane_g1

0xdd8d,	// (0x0001d14d) main_apps_wheel_pane_g2_ParamLimits

0xdd8d,	// (0x0001d14d) main_apps_wheel_pane_g2

0x0001,

0xfab7,	// (0x0001ee77) main_apps_wheel_pane_g_ParamLimits

0xfab7,	// (0x0001ee77) main_apps_wheel_pane_g

0xdd9b,	// (0x0001d15b) main_apps_wheel_pane_t1_ParamLimits

0xdd9b,	// (0x0001d15b) main_apps_wheel_pane_t1

0xddaf,	// (0x0001d16f) list_wheel_apps_pane_g1

0xddb7,	// (0x0001d177) list_wheel_apps_pane_g2

0xddbf,	// (0x0001d17f) list_wheel_apps_pane_g3

0xddc7,	// (0x0001d187) list_wheel_apps_pane_g4

0xddd1,	// (0x0001d191) list_wheel_apps_pane_g5

0x0004,

0xfabc,	// (0x0001ee7c) list_wheel_apps_pane_g

0x40fb,	// (0x000134bb) navi_icon_text_pane

0xd37d,	// (0x0001c73d) aid_fill_nsta

0x715f,	// (0x0001651f) navi_icon_text_pane_g1

0x716b,	// (0x0001652b) navi_icon_text_pane_t1

0xd26d,	// (0x0001c62d) list_set_graphic_pane_t1_ParamLimits

0xd26d,	// (0x0001c62d) list_set_graphic_pane_t1

0x579c,	// (0x00014b5c) popup_midp_note_alarm_window_t6_ParamLimits

0x579c,	// (0x00014b5c) popup_midp_note_alarm_window_t6

0x57ae,	// (0x00014b6e) popup_midp_note_alarm_window_t7_ParamLimits

0x57ae,	// (0x00014b6e) popup_midp_note_alarm_window_t7

0x57c0,	// (0x00014b80) popup_midp_note_alarm_window_t8_ParamLimits

0x57c0,	// (0x00014b80) popup_midp_note_alarm_window_t8

0x57d2,	// (0x00014b92) popup_midp_note_alarm_window_t9_ParamLimits

0x57d2,	// (0x00014b92) popup_midp_note_alarm_window_t9

0x57e4,	// (0x00014ba4) popup_midp_note_alarm_window_t10_ParamLimits

0x57e4,	// (0x00014ba4) popup_midp_note_alarm_window_t10

0x57f6,	// (0x00014bb6) popup_midp_note_alarm_window_t11_ParamLimits

0x57f6,	// (0x00014bb6) popup_midp_note_alarm_window_t11

0x5808,	// (0x00014bc8) scroll_pane_cp17_ParamLimits

0x5808,	// (0x00014bc8) scroll_pane_cp17

0x1359,	// (0x00010719) volume_small_pane_cp_g1

0x164e,	// (0x00010a0e) volume_small_pane_cp_g2

0x1657,	// (0x00010a17) volume_small_pane_cp_g3

0x1660,	// (0x00010a20) volume_small_pane_cp_g4

0x1669,	// (0x00010a29) volume_small_pane_cp_g5

0x1672,	// (0x00010a32) volume_small_pane_cp_g6

0x167b,	// (0x00010a3b) volume_small_pane_cp_g7

0x1684,	// (0x00010a44) volume_small_pane_cp_g8

0x168d,	// (0x00010a4d) volume_small_pane_cp_g9

0x1696,	// (0x00010a56) volume_small_pane_cp_g10

0x434a,	// (0x0001370a) midp_ticker_pane_g1_ParamLimits

0x4356,	// (0x00013716) midp_ticker_pane_g2_ParamLimits

0xf759,	// (0x0001eb19) midp_ticker_pane_g_ParamLimits

0x4362,	// (0x00013722) midp_ticker_pane_t1_ParamLimits

0xd3a1,	// (0x0001c761) aid_fill_nsta_2

0x502d,	// (0x000143ed) list_form2_midp_pane

0x61fb,	// (0x000155bb) midp_editing_number_pane_ParamLimits

0x620a,	// (0x000155ca) midp_ticker_pane_ParamLimits

0x717d,	// (0x0001653d) form2_midp_field_pane

0x71a1,	// (0x00016561) scroll_pane_cp51

0x71c1,	// (0x00016581) form2_midp_button_pane_ParamLimits

0x71c1,	// (0x00016581) form2_midp_button_pane

0x71d3,	// (0x00016593) form2_midp_content_pane_ParamLimits

0x71d3,	// (0x00016593) form2_midp_content_pane

0x71ed,	// (0x000165ad) form2_midp_field_choice_group_pane

0x71f5,	// (0x000165b5) form2_midp_field_pane_g1

0x71fd,	// (0x000165bd) form2_midp_field_pane_g2

0x7205,	// (0x000165c5) form2_midp_field_pane_g3

0x720d,	// (0x000165cd) form2_midp_field_pane_g4

0x0003,

0xfae1,	// (0x0001eea1) form2_midp_field_pane_g

0x7215,	// (0x000165d5) form2_midp_gauge_slider_pane

0x721d,	// (0x000165dd) form2_midp_gauge_wait_pane

0x7225,	// (0x000165e5) form2_midp_image_pane_ParamLimits

0x7225,	// (0x000165e5) form2_midp_image_pane

0x7240,	// (0x00016600) form2_midp_label_pane_ParamLimits

0x7240,	// (0x00016600) form2_midp_label_pane

0xde04,	// (0x0001d1c4) form2_midp_label_pane_cp_ParamLimits

0xde04,	// (0x0001d1c4) form2_midp_label_pane_cp

0x727a,	// (0x0001663a) form2_midp_string_pane_ParamLimits

0x727a,	// (0x0001663a) form2_midp_string_pane

0xde23,	// (0x0001d1e3) form2_midp_text_pane_ParamLimits

0xde23,	// (0x0001d1e3) form2_midp_text_pane

0x72a9,	// (0x00016669) form2_midp_time_pane

0x72b9,	// (0x00016679) input_focus_pane_cp51_ParamLimits

0x72b9,	// (0x00016679) input_focus_pane_cp51

0x72d1,	// (0x00016691) form2_midp_label_pane_t1_ParamLimits

0x72d1,	// (0x00016691) form2_midp_label_pane_t1

0xde3c,	// (0x0001d1fc) form2_mdip_text_pane_t1_ParamLimits

0xde3c,	// (0x0001d1fc) form2_mdip_text_pane_t1

0x7331,	// (0x000166f1) form2_midp_time_pane_t1

0x734c,	// (0x0001670c) form2_midp_gauge_slider_pane_t1

0xde57,	// (0x0001d217) form2_midp_gauge_slider_pane_t2

0xde69,	// (0x0001d229) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaea,	// (0x0001eeaa) form2_midp_gauge_slider_pane_t

0x7382,	// (0x00016742) form2_midp_slider_pane

0x738e,	// (0x0001674e) form2_midp_gauge_wait_pane_t1

0x739c,	// (0x0001675c) form2_midp_wait_pane_ParamLimits

0x739c,	// (0x0001675c) form2_midp_wait_pane

0xde7b,	// (0x0001d23b) list_single_2graphic_pane_cp4_ParamLimits

0xde7b,	// (0x0001d23b) list_single_2graphic_pane_cp4

0xd7bd,	// (0x0001cb7d) list_single_midp_graphic_pane_cp_ParamLimits

0xd7bd,	// (0x0001cb7d) list_single_midp_graphic_pane_cp

0x250a,	// (0x000118ca) list_highlight_pane_cp20

0x73f6,	// (0x000167b6) list_single_2graphic_pane_g1_cp4

0x73fe,	// (0x000167be) list_single_2graphic_pane_g2_cp4

0x7406,	// (0x000167c6) list_single_2graphic_pane_t1_cp4

0x25ea,	// (0x000119aa) list_highlight_pane_cp21

0x7415,	// (0x000167d5) list_single_midp_graphic_pane_g4_cp

0x7424,	// (0x000167e4) list_single_midp_graphic_pane_t1_cp

0xde8f,	// (0x0001d24f) form2_mdip_string_pane_t1_ParamLimits

0xde8f,	// (0x0001d24f) form2_mdip_string_pane_t1

0x250a,	// (0x000118ca) bg_wml_button_pane_cp2

0x2500,	// (0x000118c0) form2_midp_image_pane_g1

0x30a9,	// (0x00012469) list_double_large_graphic_pane_g5_ParamLimits

0x30a9,	// (0x00012469) list_double_large_graphic_pane_g5

0x45c3,	// (0x00013983) midp_form_pane_ParamLimits

0x25ea,	// (0x000119aa) main_apps_wheel_pane_ParamLimits

0xbec4,	// (0x0001b284) popup_preview_window_ParamLimits

0xbec4,	// (0x0001b284) popup_preview_window

0x1154,	// (0x00010514) popup_touch_info_window_ParamLimits

0x1154,	// (0x00010514) popup_touch_info_window

0x1172,	// (0x00010532) popup_touch_menu_window_ParamLimits

0x1172,	// (0x00010532) popup_touch_menu_window

0x24f6,	// (0x000118b6) bg_popup_sub_pane_cp6

0x7532,	// (0x000168f2) list_touch_menu_pane

0x753a,	// (0x000168fa) list_single_touch_menu_pane_ParamLimits

0x753a,	// (0x000168fa) list_single_touch_menu_pane

0x7550,	// (0x00016910) list_single_touch_menu_pane_t1

0x25ea,	// (0x000119aa) bg_popup_sub_pane_cp7_ParamLimits

0x25ea,	// (0x000119aa) bg_popup_sub_pane_cp7

0x755e,	// (0x0001691e) heading_sub_pane

0x7566,	// (0x00016926) list_touch_info_pane_ParamLimits

0x7566,	// (0x00016926) list_touch_info_pane

0x7575,	// (0x00016935) list_single_touch_info_pane_ParamLimits

0x7575,	// (0x00016935) list_single_touch_info_pane

0x7587,	// (0x00016947) list_single_touch_info_pane_t1

0x7595,	// (0x00016955) list_single_touch_info_pane_t2

0x0001,

0xfaf8,	// (0x0001eeb8) list_single_touch_info_pane_t

0x427b,	// (0x0001363b) bg_popup_heading_pane_cp

0x75a3,	// (0x00016963) heading_sub_pane_t1

0x4c31,	// (0x00013ff1) bg_popup_preview_window_pane_cp_ParamLimits

0x4c31,	// (0x00013ff1) bg_popup_preview_window_pane_cp

0x755e,	// (0x0001691e) heading_preview_pane

0x7566,	// (0x00016926) list_preview_pane_ParamLimits

0x7566,	// (0x00016926) list_preview_pane

0x75b1,	// (0x00016971) popup_preview_window_g1

0x7575,	// (0x00016935) list_single_preview_pane_ParamLimits

0x7575,	// (0x00016935) list_single_preview_pane

0x75b9,	// (0x00016979) list_single_preview_pane_g1

0x75c1,	// (0x00016981) list_single_preview_pane_t1

0x7587,	// (0x00016947) list_single_preview_pane_t2

0x0001,

0xfafd,	// (0x0001eebd) list_single_preview_pane_t

0x75cf,	// (0x0001698f) bg_popup_heading_pane_cp2_ParamLimits

0x75cf,	// (0x0001698f) bg_popup_heading_pane_cp2

0x75e5,	// (0x000169a5) heading_preview_pane_g1

0x75ed,	// (0x000169ad) heading_preview_pane_t1_ParamLimits

0x75ed,	// (0x000169ad) heading_preview_pane_t1

0x26f0,	// (0x00011ab0) soft_indicator_pane_t1_ParamLimits

0x2de3,	// (0x000121a3) scroll_pane_ParamLimits

0x39ed,	// (0x00012dad) scroll_sc2_left_pane

0x39f6,	// (0x00012db6) scroll_sc2_right_pane

0x3a15,	// (0x00012dd5) scroll_bg_pane_g1_ParamLimits

0x3a2a,	// (0x00012dea) scroll_bg_pane_g2_ParamLimits

0x3a42,	// (0x00012e02) scroll_bg_pane_g3_ParamLimits

0xf6e4,	// (0x0001eaa4) scroll_bg_pane_g_ParamLimits

0x3a15,	// (0x00012dd5) scroll_handle_pane_g1_ParamLimits

0x3a64,	// (0x00012e24) scroll_handle_pane_g2_ParamLimits

0x3a42,	// (0x00012e02) scroll_handle_pane_g3_ParamLimits

0xf6eb,	// (0x0001eaab) scroll_handle_pane_g_ParamLimits

0x0c1c,	// (0x0000ffdc) popup_choice_list_window_ParamLimits

0x0c1c,	// (0x0000ffdc) popup_choice_list_window

0x4a1f,	// (0x00013ddf) choice_list_pane

0x4acf,	// (0x00013e8f) cell_toolbar_pane_t1

0x4af7,	// (0x00013eb7) toolbar_button_pane_ParamLimits

0x5cc2,	// (0x00015082) ai_gene_pane_1_t2_ParamLimits

0x5cc2,	// (0x00015082) ai_gene_pane_1_t2

0x0001,

0xf90e,	// (0x0001ecce) ai_gene_pane_1_t_ParamLimits

0xf90e,	// (0x0001ecce) ai_gene_pane_1_t

0x760a,	// (0x000169ca) scroll_sc2_left_pane_g1

0x760a,	// (0x000169ca) scroll_sc2_right_pane_g1

0x45c3,	// (0x00013983) bg_popup_sub_pane_cp10

0x7614,	// (0x000169d4) list_choice_list_pane

0x762d,	// (0x000169ed) list_single_choice_list_pane_ParamLimits

0x762d,	// (0x000169ed) list_single_choice_list_pane

0x7640,	// (0x00016a00) list_single_choice_list_pane_g1

0x36f9,	// (0x00012ab9) list_single_choice_list_pane_t1_ParamLimits

0x36f9,	// (0x00012ab9) list_single_choice_list_pane_t1

0x7648,	// (0x00016a08) choice_list_pane_g1

0x7650,	// (0x00016a10) choice_list_pane_t1

0x24f6,	// (0x000118b6) input_focus_pane_cp11

0x38d0,	// (0x00012c90) title_pane_stacon_g2_ParamLimits

0x38d0,	// (0x00012c90) title_pane_stacon_g2

0x0002,

0xf6ca,	// (0x0001ea8a) title_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0001ea8a) title_pane_stacon_g

0x427b,	// (0x0001363b) cursor_press_pane

0xbb77,	// (0x0001af37) popup_fep_hwr_window_ParamLimits

0xbb77,	// (0x0001af37) popup_fep_hwr_window

0x0d42,	// (0x00010102) popup_fep_vkb_window_ParamLimits

0x0d42,	// (0x00010102) popup_fep_vkb_window

0x765e,	// (0x00016a1e) cursor_press_pane_g1

0x0002,

0xfb26,	// (0x0001eee6) fep_vkb_side_pane_g_ParamLimits

0x16d8,	// (0x00010a98) fep_hwr_candidate_pane_ParamLimits

0x16d8,	// (0x00010a98) fep_hwr_candidate_pane

0x1702,	// (0x00010ac2) fep_hwr_side_pane_ParamLimits

0x1702,	// (0x00010ac2) fep_hwr_side_pane

0x1722,	// (0x00010ae2) fep_hwr_top_pane_ParamLimits

0x1722,	// (0x00010ae2) fep_hwr_top_pane

0x173a,	// (0x00010afa) fep_hwr_write_pane_ParamLimits

0x173a,	// (0x00010afa) fep_hwr_write_pane

0xfb26,	// (0x0001eee6) fep_vkb_side_pane_g

0x7666,	// (0x00016a26) fep_hwr_top_pane_g1

0x7678,	// (0x00016a38) fep_hwr_top_pane_g2

0x1774,	// (0x00010b34) fep_hwr_top_pane_g3

0x0002,

0xfb02,	// (0x0001eec2) fep_hwr_top_pane_g

0x1789,	// (0x00010b49) fep_hwr_top_text_pane

0x3be4,	// (0x00012fa4) fep_hwr_top_text_pane_g1

0x76ae,	// (0x00016a6e) fep_hwr_top_text_pane_t1

0x187f,	// (0x00010c3f) fep_hwr_candidate_pane_g1

0x7901,	// (0x00016cc1) fep_vkb_keypad_pane_g3_ParamLimits

0x7901,	// (0x00016cc1) fep_vkb_keypad_pane_g3

0x7929,	// (0x00016ce9) fep_vkb_keypad_pane_g4_ParamLimits

0x7929,	// (0x00016ce9) fep_vkb_keypad_pane_g4

0x7998,	// (0x00016d58) fep_vkb_bottom_pane_g2_ParamLimits

0x7998,	// (0x00016d58) fep_vkb_bottom_pane_g2

0x0001,

0xfb2d,	// (0x0001eeed) fep_vkb_bottom_pane_g_ParamLimits

0xfb2d,	// (0x0001eeed) fep_vkb_bottom_pane_g

0x760a,	// (0x000169ca) cell_vkb_side_pane_g2

0x0001,

0xfb37,	// (0x0001eef7) cell_vkb_side_pane_g

0x7a23,	// (0x00016de3) cell_vkb_side_pane_t1

0x7a31,	// (0x00016df1) cell_vkb_side_pane_t1_copy1

0x760a,	// (0x000169ca) bg_fep_vkb_candidate_pane_g2

0x7b5d,	// (0x00016f1d) cell_vkb_candidate_pane_ParamLimits

0x76bc,	// (0x00016a7c) aid_size_cell_vkb_ParamLimits

0x76bc,	// (0x00016a7c) aid_size_cell_vkb

0x7b5d,	// (0x00016f1d) cell_vkb_candidate_pane

0x18a6,	// (0x00010c66) bg_popup_fep_shadow_pane_g1

0xdf13,	// (0x0001d2d3) fep_vkb_bottom_pane_ParamLimits

0xdf13,	// (0x0001d2d3) fep_vkb_bottom_pane

0x7780,	// (0x00016b40) fep_vkb_candidate_pane_ParamLimits

0x7780,	// (0x00016b40) fep_vkb_candidate_pane

0xdf38,	// (0x0001d2f8) fep_vkb_keypad_pane_ParamLimits

0xdf38,	// (0x0001d2f8) fep_vkb_keypad_pane

0xdf74,	// (0x0001d334) fep_vkb_side_pane_ParamLimits

0xdf74,	// (0x0001d334) fep_vkb_side_pane

0xdfb0,	// (0x0001d370) fep_vkb_top_pane_ParamLimits

0xdfb0,	// (0x0001d370) fep_vkb_top_pane

0x785a,	// (0x00016c1a) fep_vkb_top_pane_g1_ParamLimits

0x785a,	// (0x00016c1a) fep_vkb_top_pane_g1

0x7869,	// (0x00016c29) fep_vkb_top_pane_g2_ParamLimits

0x7869,	// (0x00016c29) fep_vkb_top_pane_g2

0x7878,	// (0x00016c38) fep_vkb_top_pane_g3_ParamLimits

0x7878,	// (0x00016c38) fep_vkb_top_pane_g3

0x0003,

0xfb1d,	// (0x0001eedd) fep_vkb_top_pane_g_ParamLimits

0xfb1d,	// (0x0001eedd) fep_vkb_top_pane_g

0x7896,	// (0x00016c56) fep_vkb_top_text_pane_ParamLimits

0x7896,	// (0x00016c56) fep_vkb_top_text_pane

0xdfec,	// (0x0001d3ac) fep_vkb_side_pane_g1_ParamLimits

0xdfec,	// (0x0001d3ac) fep_vkb_side_pane_g1

0x78f0,	// (0x00016cb0) grid_vkb_side_pane_ParamLimits

0x78f0,	// (0x00016cb0) grid_vkb_side_pane

0x18ae,	// (0x00010c6e) bg_popup_fep_shadow_pane_g2

0x18b7,	// (0x00010c77) bg_popup_fep_shadow_pane_g3

0x18bf,	// (0x00010c7f) bg_popup_fep_shadow_pane_g4

0x18c8,	// (0x00010c88) bg_popup_fep_shadow_pane_g5

0x18d2,	// (0x00010c92) bg_popup_fep_shadow_pane_g6

0x18da,	// (0x00010c9a) bg_popup_fep_shadow_pane_g7

0x352c,	// (0x000128ec) bg_popup_fep_shadow_pane_g8

0x7947,	// (0x00016d07) grid_vkb_keypad_number_pane_ParamLimits

0x7947,	// (0x00016d07) grid_vkb_keypad_number_pane

0x7957,	// (0x00016d17) grid_vkb_keypad_pane_ParamLimits

0x7957,	// (0x00016d17) grid_vkb_keypad_pane

0x797d,	// (0x00016d3d) fep_vkb_bottom_pane_g1_ParamLimits

0x797d,	// (0x00016d3d) fep_vkb_bottom_pane_g1

0x79a6,	// (0x00016d66) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x79a6,	// (0x00016d66) grid_vkb_keypad_bottom_left_pane

0x79bb,	// (0x00016d7b) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x79bb,	// (0x00016d7b) grid_vkb_keypad_bottom_right_pane

0x79d0,	// (0x00016d90) fep_vkb_top_text_pane_g1

0xe033,	// (0x0001d3f3) fep_vkb_top_text_pane_t1

0xe045,	// (0x0001d405) cell_vkb_side_pane_ParamLimits

0xe045,	// (0x0001d405) cell_vkb_side_pane

0x760a,	// (0x000169ca) cell_vkb_side_pane_g1

0x7a3f,	// (0x00016dff) cell_vkb_keypad_pane_ParamLimits

0x7a3f,	// (0x00016dff) cell_vkb_keypad_pane

0x7ab4,	// (0x00016e74) cell_vkb_keypad_pane_g1

0x0008,

0xfb4a,	// (0x0001ef0a) bg_popup_fep_shadow_pane_g

0x18ec,	// (0x00010cac) cell_hwr_side_pane_g1

0x18ec,	// (0x00010cac) cell_hwr_side_pane_g2

0x7abe,	// (0x00016e7e) cell_vkb_keypad_pane_t1

0xe05b,	// (0x0001d41b) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe05b,	// (0x0001d41b) cell_vkb_keypad_bottom_left_pane

0xe070,	// (0x0001d430) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe070,	// (0x0001d430) cell_vkb_keypad_bottom_right_pane

0x760a,	// (0x000169ca) cell_vkb_keypad_bottom_left_pane_g1

0x760a,	// (0x000169ca) cell_vkb_keypad_bottom_right_pane_g1

0x7b22,	// (0x00016ee2) cell_vkb_keypad_number_pane_ParamLimits

0x7b22,	// (0x00016ee2) cell_vkb_keypad_number_pane

0x7b41,	// (0x00016f01) cell_vkb_keypad_number_pane_g1

0x7b4b,	// (0x00016f0b) cell_vkb_keypad_number_pane_g2

0x7b54,	// (0x00016f14) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3c,	// (0x0001eefc) cell_vkb_keypad_number_pane_g

0x7abe,	// (0x00016e7e) cell_vkb_keypad_number_pane_t1

0x7b78,	// (0x00016f38) fep_vkb_candidate_pane_g1

0x0001,

0xfb5d,	// (0x0001ef1d) cell_hwr_side_pane_g

0x7b91,	// (0x00016f51) cell_hwr_side_pane_t1

0x18f6,	// (0x00010cb6) cell_hwr_side_pane_t1_copy1

0x1904,	// (0x00010cc4) cell_hwr_candidate_pane_g1

0x1933,	// (0x00010cf3) cell_hwr_candidate_pane_t1

0x760a,	// (0x000169ca) cell_vkb_candidate_pane_g2

0x7c17,	// (0x00016fd7) cell_vkb_candidate_pane_t1

0x169f,	// (0x00010a5f) bg_popup_fep_shadow_pane_ParamLimits

0x169f,	// (0x00010a5f) bg_popup_fep_shadow_pane

0x1754,	// (0x00010b14) bg_fep_hwr_top_pane_g4

0x768a,	// (0x00016a4a) bg_hwr_side_pane_g1_ParamLimits

0x768a,	// (0x00016a4a) bg_hwr_side_pane_g1

0xc1fe,	// (0x0001b5be) cell_hwr_side_pane_ParamLimits

0xc1fe,	// (0x0001b5be) cell_hwr_side_pane

0x1800,	// (0x00010bc0) fep_hwr_write_pane_g1_ParamLimits

0x1800,	// (0x00010bc0) fep_hwr_write_pane_g1

0x180d,	// (0x00010bcd) fep_hwr_write_pane_g2_ParamLimits

0x180d,	// (0x00010bcd) fep_hwr_write_pane_g2

0x181a,	// (0x00010bda) fep_hwr_write_pane_g3_ParamLimits

0x181a,	// (0x00010bda) fep_hwr_write_pane_g3

0xc21e,	// (0x0001b5de) fep_hwr_write_pane_g4_ParamLimits

0xc21e,	// (0x0001b5de) fep_hwr_write_pane_g4

0x0005,

0xfb09,	// (0x0001eec9) fep_hwr_write_pane_g_ParamLimits

0xfb09,	// (0x0001eec9) fep_hwr_write_pane_g

0x1754,	// (0x00010b14) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1754,	// (0x00010b14) bg_fep_hwr_candidate_pane_g2

0x183d,	// (0x00010bfd) cell_hwr_candidate_pane_ParamLimits

0x183d,	// (0x00010bfd) cell_hwr_candidate_pane

0x187f,	// (0x00010c3f) fep_hwr_candidate_pane_g1_ParamLimits

0x76ea,	// (0x00016aaa) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x76ea,	// (0x00016aaa) bg_popup_fep_shadow_pane_cp2

0x7888,	// (0x00016c48) fep_vkb_top_pane_g4_ParamLimits

0x7888,	// (0x00016c48) fep_vkb_top_pane_g4

0x78ce,	// (0x00016c8e) fep_vkb_side_pane_g2_ParamLimits

0x78ce,	// (0x00016c8e) fep_vkb_side_pane_g2

0xcdd8,	// (0x0001c198) list_setting_pane_t4_ParamLimits

0xcdd8,	// (0x0001c198) list_setting_pane_t4

0xce52,	// (0x0001c212) list_setting_number_pane_t5_ParamLimits

0xce52,	// (0x0001c212) list_setting_number_pane_t5

0x3c1b,	// (0x00012fdb) list_double_heading_pane_cp2_ParamLimits

0x3c1b,	// (0x00012fdb) list_double_heading_pane_cp2

0x3034,	// (0x000123f4) list_double_heading_pane_g1_cp2_ParamLimits

0x3034,	// (0x000123f4) list_double_heading_pane_g1_cp2

0x3411,	// (0x000127d1) list_double_heading_pane_g2_cp2_ParamLimits

0x3411,	// (0x000127d1) list_double_heading_pane_g2_cp2

0x7c25,	// (0x00016fe5) list_double_heading_pane_t1_cp2_ParamLimits

0x7c25,	// (0x00016fe5) list_double_heading_pane_t1_cp2

0x7c3b,	// (0x00016ffb) list_double_heading_pane_t2_cp2_ParamLimits

0x7c3b,	// (0x00016ffb) list_double_heading_pane_t2_cp2

0x24de,	// (0x0001189e) aid_value_unit2

0x0446,	// (0x0000f806) popup_preview_fixed_window

0x288d,	// (0x00011c4d) bg_popup_preview_window_pane_cp02

0x7c4d,	// (0x0001700d) list_preview_fixed_pane

0x7c93,	// (0x00017053) list_empty_pane_fp_ParamLimits

0x7c93,	// (0x00017053) list_empty_pane_fp

0x7c93,	// (0x00017053) list_single_cale_day_pane_fp_ParamLimits

0x7c93,	// (0x00017053) list_single_cale_day_pane_fp

0x7c93,	// (0x00017053) list_single_graphic_heading_pane_fp_ParamLimits

0x7c93,	// (0x00017053) list_single_graphic_heading_pane_fp

0x7c93,	// (0x00017053) list_single_graphic_pane_fp_ParamLimits

0x7c93,	// (0x00017053) list_single_graphic_pane_fp

0x7c93,	// (0x00017053) list_single_heading_pane_fp_ParamLimits

0x7c93,	// (0x00017053) list_single_heading_pane_fp

0x7c93,	// (0x00017053) list_single_pane_fp_ParamLimits

0x7c93,	// (0x00017053) list_single_pane_fp

0x7ca8,	// (0x00017068) list_single_pane_fp_g1_ParamLimits

0x7ca8,	// (0x00017068) list_single_pane_fp_g1

0x3034,	// (0x000123f4) list_single_pane_fp_g2_ParamLimits

0x3034,	// (0x000123f4) list_single_pane_fp_g2

0x3411,	// (0x000127d1) list_single_pane_fp_g3_ParamLimits

0x3411,	// (0x000127d1) list_single_pane_fp_g3

0x7cb4,	// (0x00017074) list_single_pane_fp_g4_ParamLimits

0x7cb4,	// (0x00017074) list_single_pane_fp_g4

0x0003,

0xfb70,	// (0x0001ef30) list_single_pane_fp_g_ParamLimits

0xfb70,	// (0x0001ef30) list_single_pane_fp_g

0x7cc0,	// (0x00017080) list_single_pane_fp_t1_ParamLimits

0x7cc0,	// (0x00017080) list_single_pane_fp_t1

0x7cd7,	// (0x00017097) list_single_graphic_pane_fp_g1_ParamLimits

0x7cd7,	// (0x00017097) list_single_graphic_pane_fp_g1

0x7ca8,	// (0x00017068) list_single_graphic_pane_fp_g2_ParamLimits

0x7ca8,	// (0x00017068) list_single_graphic_pane_fp_g2

0x3034,	// (0x000123f4) list_single_graphic_pane_fp_g3_ParamLimits

0x3034,	// (0x000123f4) list_single_graphic_pane_fp_g3

0x3411,	// (0x000127d1) list_single_graphic_pane_fp_g4_ParamLimits

0x3411,	// (0x000127d1) list_single_graphic_pane_fp_g4

0x7cb4,	// (0x00017074) list_single_graphic_pane_fp_g5_ParamLimits

0x7cb4,	// (0x00017074) list_single_graphic_pane_fp_g5

0x0004,

0xfb79,	// (0x0001ef39) list_single_graphic_pane_fp_g_ParamLimits

0xfb79,	// (0x0001ef39) list_single_graphic_pane_fp_g

0x7ce3,	// (0x000170a3) list_single_graphic_pane_fp_t1_ParamLimits

0x7ce3,	// (0x000170a3) list_single_graphic_pane_fp_t1

0x7cd7,	// (0x00017097) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7cd7,	// (0x00017097) list_single_graphic_heading_pane_fp_g1

0x7ca8,	// (0x00017068) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7ca8,	// (0x00017068) list_single_graphic_heading_pane_fp_g2

0x3034,	// (0x000123f4) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3034,	// (0x000123f4) list_single_graphic_heading_pane_fp_g3

0x3411,	// (0x000127d1) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3411,	// (0x000127d1) list_single_graphic_heading_pane_fp_g4

0x7cb4,	// (0x00017074) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7cb4,	// (0x00017074) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb79,	// (0x0001ef39) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb79,	// (0x0001ef39) list_single_graphic_heading_pane_fp_g

0x7cf9,	// (0x000170b9) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7cf9,	// (0x000170b9) list_single_graphic_heading_pane_fp_t1

0x7d0f,	// (0x000170cf) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7d0f,	// (0x000170cf) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb84,	// (0x0001ef44) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb84,	// (0x0001ef44) list_single_graphic_heading_pane_fp_t

0x7d21,	// (0x000170e1) list_single_cale_day_pane_fp_g1_ParamLimits

0x7d21,	// (0x000170e1) list_single_cale_day_pane_fp_g1

0x7d59,	// (0x00017119) list_single_cale_day_pane_fp_g2_ParamLimits

0x7d59,	// (0x00017119) list_single_cale_day_pane_fp_g2

0x7d65,	// (0x00017125) list_single_cale_day_pane_fp_g3_ParamLimits

0x7d65,	// (0x00017125) list_single_cale_day_pane_fp_g3

0x7d8d,	// (0x0001714d) list_single_cale_day_pane_fp_g4_ParamLimits

0x7d8d,	// (0x0001714d) list_single_cale_day_pane_fp_g4

0x7db1,	// (0x00017171) list_single_cale_day_pane_fp_g5_ParamLimits

0x7db1,	// (0x00017171) list_single_cale_day_pane_fp_g5

0x0004,

0xfb89,	// (0x0001ef49) list_single_cale_day_pane_fp_g_ParamLimits

0xfb89,	// (0x0001ef49) list_single_cale_day_pane_fp_g

0x7dd5,	// (0x00017195) list_single_cale_day_pane_fp_t1_ParamLimits

0x7dd5,	// (0x00017195) list_single_cale_day_pane_fp_t1

0x7dfb,	// (0x000171bb) list_single_cale_day_pane_fp_t2_ParamLimits

0x7dfb,	// (0x000171bb) list_single_cale_day_pane_fp_t2

0x7e14,	// (0x000171d4) list_single_cale_day_pane_fp_t3_ParamLimits

0x7e14,	// (0x000171d4) list_single_cale_day_pane_fp_t3

0x0002,

0xfb94,	// (0x0001ef54) list_single_cale_day_pane_fp_t_ParamLimits

0xfb94,	// (0x0001ef54) list_single_cale_day_pane_fp_t

0x7ca8,	// (0x00017068) list_empty_pane_fp_g1_ParamLimits

0x7ca8,	// (0x00017068) list_empty_pane_fp_g1

0x7e2d,	// (0x000171ed) list_empty_pane_fp_t1

0x7e3b,	// (0x000171fb) list_empty_pane_fp_t2

0x0001,

0xfb9b,	// (0x0001ef5b) list_empty_pane_fp_t

0x7ca8,	// (0x00017068) list_single_heading_pane_fp_g1_ParamLimits

0x7ca8,	// (0x00017068) list_single_heading_pane_fp_g1

0x3034,	// (0x000123f4) list_single_heading_pane_fp_g2_ParamLimits

0x3034,	// (0x000123f4) list_single_heading_pane_fp_g2

0x3411,	// (0x000127d1) list_single_heading_pane_fp_g3_ParamLimits

0x3411,	// (0x000127d1) list_single_heading_pane_fp_g3

0x0002,

0xfba0,	// (0x0001ef60) list_single_heading_pane_fp_g_ParamLimits

0xfba0,	// (0x0001ef60) list_single_heading_pane_fp_g

0x7e49,	// (0x00017209) list_single_heading_pane_fp_t1_ParamLimits

0x7e49,	// (0x00017209) list_single_heading_pane_fp_t1

0x7e5b,	// (0x0001721b) list_single_heading_pane_fp_t2_ParamLimits

0x7e5b,	// (0x0001721b) list_single_heading_pane_fp_t2

0x0001,

0xfba7,	// (0x0001ef67) list_single_heading_pane_fp_t_ParamLimits

0xfba7,	// (0x0001ef67) list_single_heading_pane_fp_t

0x3767,	// (0x00012b27) aid_size_cell_fast

0x27fd,	// (0x00011bbd) soft_indicator_pane_cp1_t1

0x37a4,	// (0x00012b64) cell_app_pane_cp2_ParamLimits

0x37a4,	// (0x00012b64) cell_app_pane_cp2

0x16c1,	// (0x00010a81) fep_hwr_candidate_drop_down_list_pane

0x1899,	// (0x00010c59) fep_hwr_candidate_pane_g3_ParamLimits

0x1899,	// (0x00010c59) fep_hwr_candidate_pane_g3

0xef80,	// (0x0001e340) fep_hwr_candidate_pane_g4_ParamLimits

0xef80,	// (0x0001e340) fep_hwr_candidate_pane_g4

0x0002,

0xfb16,	// (0x0001eed6) fep_hwr_candidate_pane_g_ParamLimits

0xfb16,	// (0x0001eed6) fep_hwr_candidate_pane_g

0x776f,	// (0x00016b2f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x776f,	// (0x00016b2f) fep_vkb_candidate_drop_down_list_pane

0x7b80,	// (0x00016f40) fep_vkb_candidate_pane_g3

0x7b88,	// (0x00016f48) fep_vkb_candidate_pane_g4

0x0002,

0xfb43,	// (0x0001ef03) fep_vkb_candidate_pane_g

0x1904,	// (0x00010cc4) cell_hwr_candidate_pane_g1_ParamLimits

0x1912,	// (0x00010cd2) cell_hwr_candidate_pane_g3_ParamLimits

0x1912,	// (0x00010cd2) cell_hwr_candidate_pane_g3

0x9c28,	// (0x00018fe8) cell_hwr_candidate_pane_g4_ParamLimits

0x9c28,	// (0x00018fe8) cell_hwr_candidate_pane_g4

0x0002,

0xfb62,	// (0x0001ef22) cell_hwr_candidate_pane_g_ParamLimits

0xfb62,	// (0x0001ef22) cell_hwr_candidate_pane_g

0x7b9f,	// (0x00016f5f) cell_vkb_candidate_pane_g3_ParamLimits

0x7b9f,	// (0x00016f5f) cell_vkb_candidate_pane_g3

0x7bba,	// (0x00016f7a) cell_vkb_candidate_pane_g4_ParamLimits

0x7bba,	// (0x00016f7a) cell_vkb_candidate_pane_g4

0x7e71,	// (0x00017231) cell_app_pane_cp2_g1_ParamLimits

0x7e71,	// (0x00017231) cell_app_pane_cp2_g1

0x7e8f,	// (0x0001724f) cell_app_pane_cp2_g2_ParamLimits

0x7e8f,	// (0x0001724f) cell_app_pane_cp2_g2

0x0001,

0xfbac,	// (0x0001ef6c) cell_app_pane_cp2_g_ParamLimits

0xfbac,	// (0x0001ef6c) cell_app_pane_cp2_g

0x7e9b,	// (0x0001725b) cell_app_pane_cp2_t1_ParamLimits

0x7e9b,	// (0x0001725b) cell_app_pane_cp2_t1

0x33eb,	// (0x000127ab) grid_highlight_pane_cp1_ParamLimits

0x33eb,	// (0x000127ab) grid_highlight_pane_cp1

0x1951,	// (0x00010d11) cell_hwr_candidate_pane_cp1_ParamLimits

0x1951,	// (0x00010d11) cell_hwr_candidate_pane_cp1

0x1904,	// (0x00010cc4) fep_hwr_candidate_drop_down_list_pane_g1

0x1970,	// (0x00010d30) fep_hwr_candidate_drop_down_list_pane_g2

0x197d,	// (0x00010d3d) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb1,	// (0x0001ef71) fep_hwr_candidate_drop_down_list_pane_g

0x198a,	// (0x00010d4a) fep_hwr_candidate_drop_down_list_scroll_pane

0x1993,	// (0x00010d53) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1993,	// (0x00010d53) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x19a0,	// (0x00010d60) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x19a0,	// (0x00010d60) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x19ad,	// (0x00010d6d) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x19ad,	// (0x00010d6d) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x19ba,	// (0x00010d7a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x19ba,	// (0x00010d7a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x19d5,	// (0x00010d95) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x19d5,	// (0x00010d95) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x19f0,	// (0x00010db0) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x19f0,	// (0x00010db0) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1a0b,	// (0x00010dcb) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1a0b,	// (0x00010dcb) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1a26,	// (0x00010de6) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1a26,	// (0x00010de6) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb8,	// (0x0001ef78) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb8,	// (0x0001ef78) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7ead,	// (0x0001726d) cell_vkb_candidate_pane_cp1_ParamLimits

0x7ead,	// (0x0001726d) cell_vkb_candidate_pane_cp1

0x7888,	// (0x00016c48) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7888,	// (0x00016c48) fep_vkb_candidate_drop_down_list_pane_g1

0x7ecd,	// (0x0001728d) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7ecd,	// (0x0001728d) fep_vkb_candidate_drop_down_list_pane_g2

0x7eda,	// (0x0001729a) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7eda,	// (0x0001729a) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc9,	// (0x0001ef89) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc9,	// (0x0001ef89) fep_vkb_candidate_drop_down_list_pane_g

0x7ee7,	// (0x000172a7) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7ee7,	// (0x000172a7) fep_vkb_candidate_drop_down_list_scroll_pane

0x7ef4,	// (0x000172b4) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7ef4,	// (0x000172b4) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7f01,	// (0x000172c1) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7f01,	// (0x000172c1) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7f0d,	// (0x000172cd) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7f0d,	// (0x000172cd) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7bd5,	// (0x00016f95) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7bd5,	// (0x00016f95) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7bf6,	// (0x00016fb6) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7bf6,	// (0x00016fb6) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7f19,	// (0x000172d9) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7f19,	// (0x000172d9) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7f3a,	// (0x000172fa) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7f3a,	// (0x000172fa) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7f5b,	// (0x0001731b) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7f5b,	// (0x0001731b) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd0,	// (0x0001ef90) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd0,	// (0x0001ef90) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xc760,	// (0x0001bb20) title_pane_g1_ParamLimits

0xc773,	// (0x0001bb33) title_pane_g2_ParamLimits

0xf554,	// (0x0001e914) title_pane_g_ParamLimits

0x3bd4,	// (0x00012f94) aid_call2_pane

0x3bdc,	// (0x00012f9c) aid_call_pane

0x3be4,	// (0x00012fa4) popup_clock_analogue_window_g1

0x3be4,	// (0x00012fa4) popup_clock_analogue_window_g2

0x07b7,	// (0x0000fb77) popup_clock_analogue_window_g3

0x07c0,	// (0x0000fb80) popup_clock_analogue_window_g4

0x2500,	// (0x000118c0) popup_clock_analogue_window_g5

0x0004,

0xf6f9,	// (0x0001eab9) popup_clock_analogue_window_g

0x07c8,	// (0x0000fb88) popup_clock_analogue_window_t1

0x07d6,	// (0x0000fb96) clock_digital_number_pane_ParamLimits

0x07d6,	// (0x0000fb96) clock_digital_number_pane

0x07e2,	// (0x0000fba2) clock_digital_number_pane_cp02_ParamLimits

0x07e2,	// (0x0000fba2) clock_digital_number_pane_cp02

0x07ee,	// (0x0000fbae) clock_digital_number_pane_cp03_ParamLimits

0x07ee,	// (0x0000fbae) clock_digital_number_pane_cp03

0x07fa,	// (0x0000fbba) clock_digital_number_pane_cp04_ParamLimits

0x07fa,	// (0x0000fbba) clock_digital_number_pane_cp04

0x0806,	// (0x0000fbc6) clock_digital_separator_pane_ParamLimits

0x0806,	// (0x0000fbc6) clock_digital_separator_pane

0x0812,	// (0x0000fbd2) popup_clock_digital_window_t1_ParamLimits

0x0812,	// (0x0000fbd2) popup_clock_digital_window_t1

0x2500,	// (0x000118c0) clock_digital_number_pane_g1

0x2500,	// (0x000118c0) clock_digital_number_pane_g2

0x0001,

0xf704,	// (0x0001eac4) clock_digital_number_pane_g

0x2500,	// (0x000118c0) clock_digital_separator_pane_g1

0x2500,	// (0x000118c0) clock_digital_separator_pane_g2

0x0001,

0xf704,	// (0x0001eac4) clock_digital_separator_pane_g

0xd37d,	// (0x0001c73d) aid_fill_nsta_ParamLimits

0xd4b3,	// (0x0001c873) indicator_nsta_pane_ParamLimits

0x48ac,	// (0x00013c6c) popup_clock_analogue_window

0x48ac,	// (0x00013c6c) popup_clock_digital_window

0x3728,	// (0x00012ae8) grid_indicator_nsta_pane_ParamLimits

0x6fb0,	// (0x00016370) clock_nsta_pane_t2

0x0001,

0xfa96,	// (0x0001ee56) clock_nsta_pane_t

0x077b,	// (0x0000fb3b) aid_size_max_handle

0xb934,	// (0x0001acf4) aid_size_min_handle

0x427b,	// (0x0001363b) editor_scroll_pane

0x7f76,	// (0x00017336) ex_editor_pane

0x36d5,	// (0x00012a95) scroll_pane_cp13

0x2e0f,	// (0x000121cf) scroll_pane_cp14

0x3c13,	// (0x00012fd3) scroll_pane_cp36

0xd137,	// (0x0001c4f7) list_single_graphic_hl_pane_cp2_ParamLimits

0xd137,	// (0x0001c4f7) list_single_graphic_hl_pane_cp2

0xdb91,	// (0x0001cf51) list_single_graphic_hl_pane_ParamLimits

0xdb91,	// (0x0001cf51) list_single_graphic_hl_pane

0x7f7e,	// (0x0001733e) aid_size_min_hl_cp1

0x7f87,	// (0x00017347) list_highlight_pane_cp34_ParamLimits

0x7f87,	// (0x00017347) list_highlight_pane_cp34

0x7f98,	// (0x00017358) list_single_graphic_hl_pane_g1_ParamLimits

0x7f98,	// (0x00017358) list_single_graphic_hl_pane_g1

0xe08b,	// (0x0001d44b) list_single_graphic_hl_pane_g2_ParamLimits

0xe08b,	// (0x0001d44b) list_single_graphic_hl_pane_g2

0xe08b,	// (0x0001d44b) list_single_graphic_hl_pane_g3_ParamLimits

0xe08b,	// (0x0001d44b) list_single_graphic_hl_pane_g3

0x41ec,	// (0x000135ac) list_single_graphic_hl_pane_g4_ParamLimits

0x41ec,	// (0x000135ac) list_single_graphic_hl_pane_g4

0xe097,	// (0x0001d457) list_single_graphic_hl_pane_g5_ParamLimits

0xe097,	// (0x0001d457) list_single_graphic_hl_pane_g5

0x0004,

0xfbe1,	// (0x0001efa1) list_single_graphic_hl_pane_g_ParamLimits

0xfbe1,	// (0x0001efa1) list_single_graphic_hl_pane_g

0xe0ab,	// (0x0001d46b) list_single_graphic_hl_pane_t1_ParamLimits

0xe0ab,	// (0x0001d46b) list_single_graphic_hl_pane_t1

0x7fdb,	// (0x0001739b) aid_size_min_hl_cp2

0x7fe4,	// (0x000173a4) list_highlight_pane_cp34_cp2_ParamLimits

0x7fe4,	// (0x000173a4) list_highlight_pane_cp34_cp2

0x7f98,	// (0x00017358) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7f98,	// (0x00017358) list_single_graphic_hl_pane_g1_cp2

0x7ff1,	// (0x000173b1) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7ff1,	// (0x000173b1) list_single_graphic_hl_pane_g2_cp2

0x7ffd,	// (0x000173bd) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7ffd,	// (0x000173bd) list_single_graphic_hl_pane_g3_cp2

0x6809,	// (0x00015bc9) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x6809,	// (0x00015bc9) list_single_graphic_hl_pane_g4_cp2

0x7fb1,	// (0x00017371) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7fb1,	// (0x00017371) list_single_graphic_hl_pane_g5_cp2

0xb98f,	// (0x0001ad4f) control_pane_g4_ParamLimits

0xb98f,	// (0x0001ad4f) control_pane_g4

0x45c3,	// (0x00013983) bg_popup_sub_pane_cp10_ParamLimits

0x7614,	// (0x000169d4) list_choice_list_pane_ParamLimits

0x7623,	// (0x000169e3) scroll_pane_cp23

0x288d,	// (0x00011c4d) bg_popup_preview_window_pane_cp02_ParamLimits

0x7c4d,	// (0x0001700d) list_preview_fixed_pane_ParamLimits

0x7c63,	// (0x00017023) list_preview_fixed_pane_cp_ParamLimits

0x7c63,	// (0x00017023) list_preview_fixed_pane_cp

0x7c6f,	// (0x0001702f) popup_preview_fixed_window_g1_ParamLimits

0x7c6f,	// (0x0001702f) popup_preview_fixed_window_g1

0x7c7b,	// (0x0001703b) popup_preview_fixed_window_g2_ParamLimits

0x7c7b,	// (0x0001703b) popup_preview_fixed_window_g2

0x0002,

0xfb69,	// (0x0001ef29) popup_preview_fixed_window_g_ParamLimits

0xfb69,	// (0x0001ef29) popup_preview_fixed_window_g

0x06ef,	// (0x0000faaf) aid_navi_side_left_pane_ParamLimits

0x0704,	// (0x0000fac4) aid_navi_side_right_pane_ParamLimits

0x071c,	// (0x0000fadc) navi_icon_pane_stacon_ParamLimits

0x0730,	// (0x0000faf0) navi_navi_pane_stacon_ParamLimits

0x071c,	// (0x0000fadc) navi_text_pane_stacon_ParamLimits

0x0307,	// (0x0000f6c7) main_text_info_pane

0x8021,	// (0x000173e1) listscroll_text_info_pane

0x8029,	// (0x000173e9) list_text_info_pane_ParamLimits

0x8029,	// (0x000173e9) list_text_info_pane

0x8038,	// (0x000173f8) scroll_pane_cp24_ParamLimits

0x8038,	// (0x000173f8) scroll_pane_cp24

0xe0c1,	// (0x0001d481) list_text_info_pane_t1_ParamLimits

0xe0c1,	// (0x0001d481) list_text_info_pane_t1

0xbaea,	// (0x0001aeaa) popup_fast_swap2_window_ParamLimits

0xbaea,	// (0x0001aeaa) popup_fast_swap2_window

0x8087,	// (0x00017447) aid_size_cell_fast2

0x24f6,	// (0x000118b6) bg_popup_window_pane_cp17

0x5059,	// (0x00014419) heading_pane_cp2

0x2ad9,	// (0x00011e99) listscroll_fast2_pane

0x8091,	// (0x00017451) grid_fast2_pane

0x809b,	// (0x0001745b) listscroll_fast2_pane_g1

0x80a3,	// (0x00017463) listscroll_fast2_pane_g2

0x0001,

0xfbec,	// (0x0001efac) listscroll_fast2_pane_g

0x36d5,	// (0x00012a95) scroll_pane_cp26

0x80ad,	// (0x0001746d) cell_fast2_pane_ParamLimits

0x80ad,	// (0x0001746d) cell_fast2_pane

0x80c2,	// (0x00017482) cell_fast2_pane_g1

0x80cb,	// (0x0001748b) cell_fast2_pane_g2

0x80d4,	// (0x00017494) cell_fast2_pane_g3

0x0002,

0xfbf1,	// (0x0001efb1) cell_fast2_pane_g

0x2bcc,	// (0x00011f8c) grid_highlight_pane_cp9

0x0c00,	// (0x0000ffc0) main_eswt_pane_ParamLimits

0x0c00,	// (0x0000ffc0) main_eswt_pane

0x804d,	// (0x0001740d) list_single_text_info_pane

0x80dc,	// (0x0001749c) eswt_ctrl_button_pane

0x80dc,	// (0x0001749c) eswt_ctrl_canvas_pane

0x80e4,	// (0x000174a4) eswt_ctrl_combo_pane

0x80dc,	// (0x0001749c) eswt_ctrl_default_pane

0x80dc,	// (0x0001749c) eswt_ctrl_label_pane

0x80ec,	// (0x000174ac) eswt_ctrl_wait_pane

0x80f4,	// (0x000174b4) eswt_shell_pane

0x24f6,	// (0x000118b6) listscroll_eswt_app_pane

0x8114,	// (0x000174d4) popup_eswt_tasktip_window_ParamLimits

0x8114,	// (0x000174d4) popup_eswt_tasktip_window

0x4c31,	// (0x00013ff1) bg_popup_window_pane_cp18

0x8125,	// (0x000174e5) eswt_control_pane_g1_ParamLimits

0x8125,	// (0x000174e5) eswt_control_pane_g1

0x8132,	// (0x000174f2) eswt_control_pane_g2_ParamLimits

0x8132,	// (0x000174f2) eswt_control_pane_g2

0x813f,	// (0x000174ff) eswt_control_pane_g3_ParamLimits

0x813f,	// (0x000174ff) eswt_control_pane_g3

0x814c,	// (0x0001750c) eswt_control_pane_g4_ParamLimits

0x814c,	// (0x0001750c) eswt_control_pane_g4

0x0003,

0xfbf8,	// (0x0001efb8) eswt_control_pane_g_ParamLimits

0xfbf8,	// (0x0001efb8) eswt_control_pane_g

0x33eb,	// (0x000127ab) bg_button_pane_ParamLimits

0x33eb,	// (0x000127ab) bg_button_pane

0x2be1,	// (0x00011fa1) common_borders_pane_copy2_ParamLimits

0x2be1,	// (0x00011fa1) common_borders_pane_copy2

0x8159,	// (0x00017519) control_button_pane_g1_ParamLimits

0x8159,	// (0x00017519) control_button_pane_g1

0x8165,	// (0x00017525) control_button_pane_g2_ParamLimits

0x8165,	// (0x00017525) control_button_pane_g2

0x8171,	// (0x00017531) control_button_pane_g3_ParamLimits

0x8171,	// (0x00017531) control_button_pane_g3

0x0002,

0xfc01,	// (0x0001efc1) control_button_pane_g_ParamLimits

0xfc01,	// (0x0001efc1) control_button_pane_g

0x8185,	// (0x00017545) control_button_pane_t1

0x8193,	// (0x00017553) control_button_pane_t2

0x0001,

0xfc08,	// (0x0001efc8) control_button_pane_t

0x4b03,	// (0x00013ec3) bg_button_pane_g1

0x4b13,	// (0x00013ed3) bg_button_pane_g2

0x4b0b,	// (0x00013ecb) bg_button_pane_g3

0x4b23,	// (0x00013ee3) bg_button_pane_g4

0x4b1b,	// (0x00013edb) bg_button_pane_g5

0x4b2b,	// (0x00013eeb) bg_button_pane_g6

0x4b33,	// (0x00013ef3) bg_button_pane_g7

0x4b43,	// (0x00013f03) bg_button_pane_g8

0x4b3b,	// (0x00013efb) bg_button_pane_g9

0x0008,

0xf862,	// (0x0001ec22) bg_button_pane_g

0x75cf,	// (0x0001698f) common_borders_pane_ParamLimits

0x75cf,	// (0x0001698f) common_borders_pane

0x8125,	// (0x000174e5) eswt_control_pane_g1_copy1_ParamLimits

0x8125,	// (0x000174e5) eswt_control_pane_g1_copy1

0x8132,	// (0x000174f2) eswt_control_pane_g2_copy1_ParamLimits

0x8132,	// (0x000174f2) eswt_control_pane_g2_copy1

0x813f,	// (0x000174ff) eswt_control_pane_g3_copy1_ParamLimits

0x813f,	// (0x000174ff) eswt_control_pane_g3_copy1

0x814c,	// (0x0001750c) eswt_control_pane_g4_copy1_ParamLimits

0x814c,	// (0x0001750c) eswt_control_pane_g4_copy1

0x760a,	// (0x000169ca) bg_eswt_ctrl_canvas_pane_g1

0x75cf,	// (0x0001698f) common_borders_pane_cp2_ParamLimits

0x75cf,	// (0x0001698f) common_borders_pane_cp2

0x75cf,	// (0x0001698f) common_borders_pane_cp3_ParamLimits

0x75cf,	// (0x0001698f) common_borders_pane_cp3

0x81a1,	// (0x00017561) separator_horizontal_pane

0x81a9,	// (0x00017569) separator_vertical_pane

0x8125,	// (0x000174e5) eswt_control_pane_g1_copy2_ParamLimits

0x8125,	// (0x000174e5) eswt_control_pane_g1_copy2

0x8132,	// (0x000174f2) eswt_control_pane_g2_copy2_ParamLimits

0x8132,	// (0x000174f2) eswt_control_pane_g2_copy2

0x813f,	// (0x000174ff) eswt_control_pane_g3_copy2_ParamLimits

0x813f,	// (0x000174ff) eswt_control_pane_g3_copy2

0x814c,	// (0x0001750c) eswt_control_pane_g4_copy2_ParamLimits

0x814c,	// (0x0001750c) eswt_control_pane_g4_copy2

0x24f6,	// (0x000118b6) common_borders_pane_cp4

0x81b2,	// (0x00017572) separator_horizontal_pane_g1

0x81bb,	// (0x0001757b) separator_horizontal_pane_g2

0x81c4,	// (0x00017584) separator_horizontal_pane_g3

0x0002,

0xfc0d,	// (0x0001efcd) separator_horizontal_pane_g

0x8125,	// (0x000174e5) eswt_control_pane_g1_copy3_ParamLimits

0x8125,	// (0x000174e5) eswt_control_pane_g1_copy3

0x8132,	// (0x000174f2) eswt_control_pane_g2_copy3_ParamLimits

0x8132,	// (0x000174f2) eswt_control_pane_g2_copy3

0x813f,	// (0x000174ff) eswt_control_pane_g3_copy3_ParamLimits

0x813f,	// (0x000174ff) eswt_control_pane_g3_copy3

0x814c,	// (0x0001750c) eswt_control_pane_g4_copy3_ParamLimits

0x814c,	// (0x0001750c) eswt_control_pane_g4_copy3

0x24f6,	// (0x000118b6) common_borders_pane_cp5

0x81cd,	// (0x0001758d) separator_vertical_pane_g1

0x81d6,	// (0x00017596) separator_vertical_pane_g2

0x81df,	// (0x0001759f) separator_vertical_pane_g3

0x0002,

0xfc14,	// (0x0001efd4) separator_vertical_pane_g

0x8125,	// (0x000174e5) eswt_control_pane_g1_copy4_ParamLimits

0x8125,	// (0x000174e5) eswt_control_pane_g1_copy4

0x8132,	// (0x000174f2) eswt_control_pane_g2_copy4_ParamLimits

0x8132,	// (0x000174f2) eswt_control_pane_g2_copy4

0x813f,	// (0x000174ff) eswt_control_pane_g3_copy4_ParamLimits

0x813f,	// (0x000174ff) eswt_control_pane_g3_copy4

0x814c,	// (0x0001750c) eswt_control_pane_g4_copy4_ParamLimits

0x814c,	// (0x0001750c) eswt_control_pane_g4_copy4

0xe0dc,	// (0x0001d49c) eswt_ctrl_combo_button_pane

0xe0e4,	// (0x0001d4a4) eswt_ctrl_input_pane

0xe0ec,	// (0x0001d4ac) popup_choice_list_window_cp70

0xe0f4,	// (0x0001d4b4) eswt_ctrl_input_pane_t1

0x24f6,	// (0x000118b6) input_focus_pane_cp70

0x75cf,	// (0x0001698f) bg_button_pane_cp70_ParamLimits

0x75cf,	// (0x0001698f) bg_button_pane_cp70

0xe102,	// (0x0001d4c2) eswt_ctrl_combo_button_pane_g1

0x8216,	// (0x000175d6) wait_bar_pane_cp70

0x4c31,	// (0x00013ff1) bg_popup_window_pane_cp70_ParamLimits

0x4c31,	// (0x00013ff1) bg_popup_window_pane_cp70

0x821e,	// (0x000175de) popup_eswt_tasktip_window_t1

0x8234,	// (0x000175f4) wait_bar_pane_cp71_ParamLimits

0x8234,	// (0x000175f4) wait_bar_pane_cp71

0x8240,	// (0x00017600) grid_eswt_app_pane

0x39ed,	// (0x00012dad) scroll_pane_cp70

0xe10a,	// (0x0001d4ca) cell_eswt_app_pane_ParamLimits

0xe10a,	// (0x0001d4ca) cell_eswt_app_pane

0xe134,	// (0x0001d4f4) cell_eswt_app_pane_g1_ParamLimits

0xe134,	// (0x0001d4f4) cell_eswt_app_pane_g1

0xe163,	// (0x0001d523) cell_eswt_app_pane_g2_ParamLimits

0xe163,	// (0x0001d523) cell_eswt_app_pane_g2

0x0001,

0xfc1b,	// (0x0001efdb) cell_eswt_app_pane_g_ParamLimits

0xfc1b,	// (0x0001efdb) cell_eswt_app_pane_g

0xe18c,	// (0x0001d54c) cell_eswt_app_pane_t1_ParamLimits

0xe18c,	// (0x0001d54c) cell_eswt_app_pane_t1

0x8303,	// (0x000176c3) grid_highlight_pane_cp70_ParamLimits

0x8303,	// (0x000176c3) grid_highlight_pane_cp70

0x4150,	// (0x00013510) set_content_pane_g1

0x451b,	// (0x000138db) status_small_volume_pane

0x1a41,	// (0x00010e01) status_small_volume_pane_g1

0x1a49,	// (0x00010e09) volume_small2_pane

0x1a52,	// (0x00010e12) volume_small2_pane_g1

0x1a5b,	// (0x00010e1b) volume_small2_pane_g2

0x1a64,	// (0x00010e24) volume_small2_pane_g3

0x1a6d,	// (0x00010e2d) volume_small2_pane_g4

0x1a76,	// (0x00010e36) volume_small2_pane_g5

0x1a7f,	// (0x00010e3f) volume_small2_pane_g6

0x1a88,	// (0x00010e48) volume_small2_pane_g7

0x1a91,	// (0x00010e51) volume_small2_pane_g8

0x1a9a,	// (0x00010e5a) volume_small2_pane_g9

0x1aa3,	// (0x00010e63) volume_small2_pane_g10

0x0009,

0xfc20,	// (0x0001efe0) volume_small2_pane_g

0x79d0,	// (0x00016d90) fep_vkb_top_text_pane_g1_ParamLimits

0xe033,	// (0x0001d3f3) fep_vkb_top_text_pane_t1_ParamLimits

0x7c87,	// (0x00017047) popup_preview_fixed_window_g3_ParamLimits

0x7c87,	// (0x00017047) popup_preview_fixed_window_g3

0xc107,	// (0x0001b4c7) popup_toolbar_trans_pane

0xd9e9,	// (0x0001cda9) aid_height_set_list_ParamLimits

0x5fff,	// (0x000153bf) aid_size_parent_ParamLimits

0x45c3,	// (0x00013983) list_highlight_pane_cp2_ParamLimits

0x4150,	// (0x00013510) set_content_pane_g1_ParamLimits

0xdba2,	// (0x0001cf62) list_single_image_pane_ParamLimits

0xdba2,	// (0x0001cf62) list_single_image_pane

0xe1be,	// (0x0001d57e) aid_size_cell_image_ParamLimits

0xe1be,	// (0x0001d57e) aid_size_cell_image

0xe1cb,	// (0x0001d58b) grid_single_image_pane_ParamLimits

0xe1cb,	// (0x0001d58b) grid_single_image_pane

0x5147,	// (0x00014507) list_single_image_pane_g1_ParamLimits

0x5147,	// (0x00014507) list_single_image_pane_g1

0x8328,	// (0x000176e8) list_single_image_pane_g2_ParamLimits

0x8328,	// (0x000176e8) list_single_image_pane_g2

0x0001,

0xfc35,	// (0x0001eff5) list_single_image_pane_g_ParamLimits

0xfc35,	// (0x0001eff5) list_single_image_pane_g

0x833c,	// (0x000176fc) list_single_image_pane_t1_ParamLimits

0x833c,	// (0x000176fc) list_single_image_pane_t1

0xe1d9,	// (0x0001d599) cell_image_list_pane_ParamLimits

0xe1d9,	// (0x0001d599) cell_image_list_pane

0xe1ef,	// (0x0001d5af) cell_image_list_pane_g1

0xe1f8,	// (0x0001d5b8) cell_image_list_pane_g2

0x0001,

0xfc3a,	// (0x0001effa) cell_image_list_pane_g

0x8378,	// (0x00017738) aid_size_cell_tb_trans_pane

0x33eb,	// (0x000127ab) bg_tb_trans_pane

0x838a,	// (0x0001774a) grid_tb_trans_pane

0x4b03,	// (0x00013ec3) bg_tb_trans_pane_g1

0x4b13,	// (0x00013ed3) bg_tb_trans_pane_g2

0x4b0b,	// (0x00013ecb) bg_tb_trans_pane_g3

0x4b23,	// (0x00013ee3) bg_tb_trans_pane_g4

0x4b1b,	// (0x00013edb) bg_tb_trans_pane_g5

0x4b43,	// (0x00013f03) bg_tb_trans_pane_g6

0x4b3b,	// (0x00013efb) bg_tb_trans_pane_g7

0x4b2b,	// (0x00013eeb) bg_tb_trans_pane_g8

0x4b33,	// (0x00013ef3) bg_tb_trans_pane_g9

0x0008,

0xfc3f,	// (0x0001efff) bg_tb_trans_pane_g

0x839e,	// (0x0001775e) cell_toolbar_trans_pane_ParamLimits

0x839e,	// (0x0001775e) cell_toolbar_trans_pane

0x760a,	// (0x000169ca) cell_toolbar_trans_pane_g1

0xdde8,	// (0x0001d1a8) list_form2_midp_pane_t1

0xddf6,	// (0x0001d1b6) list_form2_midp_pane_t2

0x0001,

0xfadc,	// (0x0001ee9c) list_form2_midp_pane_t

0x71a1,	// (0x00016561) scroll_pane_cp51_ParamLimits

0x73ac,	// (0x0001676c) form2_midp_wait_pane_g1

0x73b5,	// (0x00016775) form2_midp_wait_pane_g2

0x73be,	// (0x0001677e) form2_midp_wait_pane_g3

0x0002,

0xfaf1,	// (0x0001eeb1) form2_midp_wait_pane_g

0x25ea,	// (0x000119aa) list_highlight_pane_cp21_ParamLimits

0x7415,	// (0x000167d5) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7424,	// (0x000167e4) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6247,	// (0x00015607) list_single_2graphic_im_pane_ParamLimits

0x6247,	// (0x00015607) list_single_2graphic_im_pane

0xe201,	// (0x0001d5c1) list_single_2graphic_im_pane_g1_ParamLimits

0xe201,	// (0x0001d5c1) list_single_2graphic_im_pane_g1

0xe212,	// (0x0001d5d2) list_single_2graphic_im_pane_g2_ParamLimits

0xe212,	// (0x0001d5d2) list_single_2graphic_im_pane_g2

0xe21e,	// (0x0001d5de) list_single_2graphic_im_pane_g3_ParamLimits

0xe21e,	// (0x0001d5de) list_single_2graphic_im_pane_g3

0x0003,

0xfc52,	// (0x0001f012) list_single_2graphic_im_pane_g_ParamLimits

0xfc52,	// (0x0001f012) list_single_2graphic_im_pane_g

0xe232,	// (0x0001d5f2) list_single_2graphic_im_pane_t1_ParamLimits

0xe232,	// (0x0001d5f2) list_single_2graphic_im_pane_t1

0x7c93,	// (0x00017053) list_single_graphic_2heading_pane_fp_ParamLimits

0x7c93,	// (0x00017053) list_single_graphic_2heading_pane_fp

0x7cd7,	// (0x00017097) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7cd7,	// (0x00017097) list_single_graphic_2heading_pane_fp_g1

0x7ca8,	// (0x00017068) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7ca8,	// (0x00017068) list_single_graphic_2heading_pane_fp_g2

0x3034,	// (0x000123f4) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3034,	// (0x000123f4) list_single_graphic_2heading_pane_fp_g3

0x3411,	// (0x000127d1) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3411,	// (0x000127d1) list_single_graphic_2heading_pane_fp_g4

0x7cb4,	// (0x00017074) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7cb4,	// (0x00017074) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb79,	// (0x0001ef39) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb79,	// (0x0001ef39) list_single_graphic_2heading_pane_fp_g

0x8432,	// (0x000177f2) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x8432,	// (0x000177f2) list_single_graphic_2heading_pane_fp_t1

0x7d0f,	// (0x000170cf) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7d0f,	// (0x000170cf) list_single_graphic_2heading_pane_fp_t2

0x8448,	// (0x00017808) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x8448,	// (0x00017808) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5b,	// (0x0001f01b) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5b,	// (0x0001f01b) list_single_graphic_2heading_pane_fp_t

0x7696,	// (0x00016a56) fep_hwr_write_pane_g5_ParamLimits

0x7696,	// (0x00016a56) fep_hwr_write_pane_g5

0x76a2,	// (0x00016a62) fep_hwr_write_pane_g6_ParamLimits

0x76a2,	// (0x00016a62) fep_hwr_write_pane_g6

0x80f4,	// (0x000174b4) eswt_shell_pane_ParamLimits

0x4c31,	// (0x00013ff1) bg_popup_window_pane_cp18_ParamLimits

0x5f1f,	// (0x000152df) heading_pane_cp70

0x821e,	// (0x000175de) popup_eswt_tasktip_window_t1_ParamLimits

0xd3d8,	// (0x0001c798) aid_touch_tab_arrow_left

0xd3ee,	// (0x0001c7ae) aid_touch_tab_arrow_right

0xc78b,	// (0x0001bb4b) title_pane_g3_ParamLimits

0xc78b,	// (0x0001bb4b) title_pane_g3

0x32ca,	// (0x0001268a) set_value_pane_g1

0xc107,	// (0x0001b4c7) popup_toolbar_trans_pane_ParamLimits

0x8378,	// (0x00017738) aid_size_cell_tb_trans_pane_ParamLimits

0x33eb,	// (0x000127ab) bg_tb_trans_pane_ParamLimits

0x838a,	// (0x0001774a) grid_tb_trans_pane_ParamLimits

0x288d,	// (0x00011c4d) cont_note_pane_ParamLimits

0x288d,	// (0x00011c4d) cont_note_pane

0x2be1,	// (0x00011fa1) cont_snote2_single_text_pane_ParamLimits

0x2be1,	// (0x00011fa1) cont_snote2_single_text_pane

0x2be1,	// (0x00011fa1) cont_snote2_single_graphic_pane_ParamLimits

0x2be1,	// (0x00011fa1) cont_snote2_single_graphic_pane

0x5280,	// (0x00014640) cont_note_wait_pane_ParamLimits

0x5280,	// (0x00014640) cont_note_wait_pane

0x5280,	// (0x00014640) cont_note_image_pane_ParamLimits

0x5280,	// (0x00014640) cont_note_image_pane

0x845e,	// (0x0001781e) popup_note2_window_g1_ParamLimits

0x845e,	// (0x0001781e) popup_note2_window_g1

0x848f,	// (0x0001784f) popup_note2_window_t1_ParamLimits

0x848f,	// (0x0001784f) popup_note2_window_t1

0x84d4,	// (0x00017894) popup_note2_window_t2_ParamLimits

0x84d4,	// (0x00017894) popup_note2_window_t2

0x8519,	// (0x000178d9) popup_note2_window_t3_ParamLimits

0x8519,	// (0x000178d9) popup_note2_window_t3

0x855e,	// (0x0001791e) popup_note2_window_t4_ParamLimits

0x855e,	// (0x0001791e) popup_note2_window_t4

0x2911,	// (0x00011cd1) popup_note2_window_t5_ParamLimits

0x2911,	// (0x00011cd1) popup_note2_window_t5

0x0004,

0xfc67,	// (0x0001f027) popup_note2_window_t_ParamLimits

0xfc67,	// (0x0001f027) popup_note2_window_t

0x858d,	// (0x0001794d) popup_note2_image_window_g1_ParamLimits

0x858d,	// (0x0001794d) popup_note2_image_window_g1

0x8599,	// (0x00017959) popup_note2_image_window_g2_ParamLimits

0x8599,	// (0x00017959) popup_note2_image_window_g2

0x0001,

0xfc72,	// (0x0001f032) popup_note2_image_window_g_ParamLimits

0xfc72,	// (0x0001f032) popup_note2_image_window_g

0x85ab,	// (0x0001796b) popup_note2_image_window_t1_ParamLimits

0x85ab,	// (0x0001796b) popup_note2_image_window_t1

0x85c3,	// (0x00017983) popup_note2_image_window_t2_ParamLimits

0x85c3,	// (0x00017983) popup_note2_image_window_t2

0x85db,	// (0x0001799b) popup_note2_image_window_t3_ParamLimits

0x85db,	// (0x0001799b) popup_note2_image_window_t3

0x0002,

0xfc77,	// (0x0001f037) popup_note2_image_window_t_ParamLimits

0xfc77,	// (0x0001f037) popup_note2_image_window_t

0x528e,	// (0x0001464e) popup_note2_wait_window_g1_ParamLimits

0x528e,	// (0x0001464e) popup_note2_wait_window_g1

0x85f7,	// (0x000179b7) popup_note2_wait_window_g2_ParamLimits

0x85f7,	// (0x000179b7) popup_note2_wait_window_g2

0x52a6,	// (0x00014666) popup_note2_wait_window_g3_ParamLimits

0x52a6,	// (0x00014666) popup_note2_wait_window_g3

0x0002,

0xfc7e,	// (0x0001f03e) popup_note2_wait_window_g_ParamLimits

0xfc7e,	// (0x0001f03e) popup_note2_wait_window_g

0x8603,	// (0x000179c3) popup_note2_wait_window_t1_ParamLimits

0x8603,	// (0x000179c3) popup_note2_wait_window_t1

0x8621,	// (0x000179e1) popup_note2_wait_window_t2_ParamLimits

0x8621,	// (0x000179e1) popup_note2_wait_window_t2

0x863f,	// (0x000179ff) popup_note2_wait_window_t3_ParamLimits

0x863f,	// (0x000179ff) popup_note2_wait_window_t3

0x8651,	// (0x00017a11) popup_note2_wait_window_t4_ParamLimits

0x8651,	// (0x00017a11) popup_note2_wait_window_t4

0x0003,

0xfc85,	// (0x0001f045) popup_note2_wait_window_t_ParamLimits

0xfc85,	// (0x0001f045) popup_note2_wait_window_t

0x8663,	// (0x00017a23) wait_bar2_pane_ParamLimits

0x8663,	// (0x00017a23) wait_bar2_pane

0x867b,	// (0x00017a3b) popup_snote2_single_text_window_g1_ParamLimits

0x867b,	// (0x00017a3b) popup_snote2_single_text_window_g1

0x86a3,	// (0x00017a63) popup_snote2_single_text_window_t1_ParamLimits

0x86a3,	// (0x00017a63) popup_snote2_single_text_window_t1

0x86ef,	// (0x00017aaf) popup_snote2_single_text_window_t2_ParamLimits

0x86ef,	// (0x00017aaf) popup_snote2_single_text_window_t2

0x873b,	// (0x00017afb) popup_snote2_single_text_window_t3_ParamLimits

0x873b,	// (0x00017afb) popup_snote2_single_text_window_t3

0x877c,	// (0x00017b3c) popup_snote2_single_text_window_t4_ParamLimits

0x877c,	// (0x00017b3c) popup_snote2_single_text_window_t4

0x87b2,	// (0x00017b72) popup_snote2_single_text_window_t5_ParamLimits

0x87b2,	// (0x00017b72) popup_snote2_single_text_window_t5

0x0004,

0xfc8e,	// (0x0001f04e) popup_snote2_single_text_window_t_ParamLimits

0xfc8e,	// (0x0001f04e) popup_snote2_single_text_window_t

0x87dd,	// (0x00017b9d) popup_snote2_single_graphic_window_g1_ParamLimits

0x87dd,	// (0x00017b9d) popup_snote2_single_graphic_window_g1

0x8805,	// (0x00017bc5) popup_snote2_single_graphic_window_g2_ParamLimits

0x8805,	// (0x00017bc5) popup_snote2_single_graphic_window_g2

0x0001,

0xfc99,	// (0x0001f059) popup_snote2_single_graphic_window_g_ParamLimits

0xfc99,	// (0x0001f059) popup_snote2_single_graphic_window_g

0x882d,	// (0x00017bed) popup_snote2_single_graphic_window_t1_ParamLimits

0x882d,	// (0x00017bed) popup_snote2_single_graphic_window_t1

0x8879,	// (0x00017c39) popup_snote2_single_graphic_window_t2_ParamLimits

0x8879,	// (0x00017c39) popup_snote2_single_graphic_window_t2

0x873b,	// (0x00017afb) popup_snote2_single_graphic_window_t3_ParamLimits

0x873b,	// (0x00017afb) popup_snote2_single_graphic_window_t3

0x877c,	// (0x00017b3c) popup_snote2_single_graphic_window_t4_ParamLimits

0x877c,	// (0x00017b3c) popup_snote2_single_graphic_window_t4

0x87b2,	// (0x00017b72) popup_snote2_single_graphic_window_t5_ParamLimits

0x87b2,	// (0x00017b72) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9e,	// (0x0001f05e) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9e,	// (0x0001f05e) popup_snote2_single_graphic_window_t

0x7062,	// (0x00016422) clock_nsta_pane_cp2_t1

0x7062,	// (0x00016422) clock_nsta_pane_cp2_t2

0x0001,

0xfab2,	// (0x0001ee72) clock_nsta_pane_cp2_t

0x3405,	// (0x000127c5) form_field_data_wide_pane_g1_ParamLimits

0x3034,	// (0x000123f4) form_field_data_wide_pane_g2_ParamLimits

0x3034,	// (0x000123f4) form_field_data_wide_pane_g2

0x3411,	// (0x000127d1) form_field_data_wide_pane_g3_ParamLimits

0x3411,	// (0x000127d1) form_field_data_wide_pane_g3

0x0002,

0xf67c,	// (0x0001ea3c) form_field_data_wide_pane_g_ParamLimits

0xf67c,	// (0x0001ea3c) form_field_data_wide_pane_g

0xdd21,	// (0x0001d0e1) grid_touch_3_pane_ParamLimits

0xdd21,	// (0x0001d0e1) grid_touch_3_pane

0xe263,	// (0x0001d623) cell_touch_3_pane_ParamLimits

0xe263,	// (0x0001d623) cell_touch_3_pane

0x760a,	// (0x000169ca) cell_touch_3_pane_g1

0x760a,	// (0x000169ca) cell_touch_3_pane_g2

0x0001,

0xfb37,	// (0x0001eef7) cell_touch_3_pane_g

0x2943,	// (0x00011d03) cont_query_data_pane

0x294b,	// (0x00011d0b) cont_query_data_pane_cp1

0x88f3,	// (0x00017cb3) button_value_adjust_pane_cp7

0x88fb,	// (0x00017cbb) query_popup_pane_cp3

0x3cd4,	// (0x00013094) bg_popup_sub_pane_cp22_ParamLimits

0x0831,	// (0x0000fbf1) navi_navi_volume_pane_cp2

0x084c,	// (0x0000fc0c) popup_side_volume_key_window_g2

0x085b,	// (0x0000fc1b) popup_side_volume_key_window_g3

0x0002,

0xf712,	// (0x0001ead2) popup_side_volume_key_window_g

0x0878,	// (0x0000fc38) popup_side_volume_key_window_t2

0x0001,

0xf719,	// (0x0001ead9) popup_side_volume_key_window_t

0x401a,	// (0x000133da) popup_side_volume_key_window_ParamLimits

0xcbeb,	// (0x0001bfab) list_double_graphic_pane_g4_ParamLimits

0xcbeb,	// (0x0001bfab) list_double_graphic_pane_g4

0xdb7e,	// (0x0001cf3e) list_single_2heading_msg_pane_ParamLimits

0xdb7e,	// (0x0001cf3e) list_single_2heading_msg_pane

0xe2ab,	// (0x0001d66b) list_single_2heading_msg_pane_g1_ParamLimits

0xe2ab,	// (0x0001d66b) list_single_2heading_msg_pane_g1

0xe2b7,	// (0x0001d677) list_single_2heading_msg_pane_g2_ParamLimits

0xe2b7,	// (0x0001d677) list_single_2heading_msg_pane_g2

0xe2ca,	// (0x0001d68a) list_single_2heading_msg_pane_g3_ParamLimits

0xe2ca,	// (0x0001d68a) list_single_2heading_msg_pane_g3

0xe2d6,	// (0x0001d696) list_single_2heading_msg_pane_g4_ParamLimits

0xe2d6,	// (0x0001d696) list_single_2heading_msg_pane_g4

0x0003,

0xfca9,	// (0x0001f069) list_single_2heading_msg_pane_g_ParamLimits

0xfca9,	// (0x0001f069) list_single_2heading_msg_pane_g

0xe2ee,	// (0x0001d6ae) list_single_2heading_msg_pane_t1_ParamLimits

0xe2ee,	// (0x0001d6ae) list_single_2heading_msg_pane_t1

0xe316,	// (0x0001d6d6) list_single_2heading_msg_pane_t2_ParamLimits

0xe316,	// (0x0001d6d6) list_single_2heading_msg_pane_t2

0xe381,	// (0x0001d741) list_single_2heading_msg_pane_t3_ParamLimits

0xe381,	// (0x0001d741) list_single_2heading_msg_pane_t3

0x89de,	// (0x00017d9e) list_single_2heading_msg_pane_t4_ParamLimits

0x89de,	// (0x00017d9e) list_single_2heading_msg_pane_t4

0x0003,

0xfcb2,	// (0x0001f072) list_single_2heading_msg_pane_t_ParamLimits

0xfcb2,	// (0x0001f072) list_single_2heading_msg_pane_t

0x253e,	// (0x000118fe) title_pane_g4_ParamLimits

0x253e,	// (0x000118fe) title_pane_g4

0x0640,	// (0x0000fa00) title_pane_stacon_g3_ParamLimits

0x0640,	// (0x0000fa00) title_pane_stacon_g3

0x83f5,	// (0x000177b5) list_single_2graphic_im_pane_g4_ParamLimits

0x83f5,	// (0x000177b5) list_single_2graphic_im_pane_g4

0x5cdf,	// (0x0001509f) popup_side_volume_key_window_cp

0x6600,	// (0x000159c0) main_idle_act2_pane_t1

0x1245,	// (0x00010605) toolbar_button_pane_g10

0xca96,	// (0x0001be56) popup_toolbar_window_cp1

0x7053,	// (0x00016413) clock_nsta_pane_cp_t1

0x7053,	// (0x00016413) clock_nsta_pane_cp_t2

0x0001,

0xfaad,	// (0x0001ee6d) clock_nsta_pane_cp_t

0x0831,	// (0x0000fbf1) navi_navi_volume_pane_cp2_ParamLimits

0x0840,	// (0x0000fc00) popup_side_volume_key_window_g1_ParamLimits

0x084c,	// (0x0000fc0c) popup_side_volume_key_window_g2_ParamLimits

0x085b,	// (0x0000fc1b) popup_side_volume_key_window_g3_ParamLimits

0xf712,	// (0x0001ead2) popup_side_volume_key_window_g_ParamLimits

0x16ad,	// (0x00010a6d) fep_hwr_aid_pane

0x1754,	// (0x00010b14) bg_fep_hwr_top_pane_g4_ParamLimits

0x7666,	// (0x00016a26) fep_hwr_top_pane_g1_ParamLimits

0x7678,	// (0x00016a38) fep_hwr_top_pane_g2_ParamLimits

0x1774,	// (0x00010b34) fep_hwr_top_pane_g3_ParamLimits

0xfb02,	// (0x0001eec2) fep_hwr_top_pane_g_ParamLimits

0x1789,	// (0x00010b49) fep_hwr_top_text_pane_ParamLimits

0x5aa2,	// (0x00014e62) aid_touch_tab_arrow_arrow_2

0x5aab,	// (0x00014e6b) aid_touch_tab_arrow_left_2

0x16c1,	// (0x00010a81) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x16f8,	// (0x00010ab8) fep_hwr_prediction_pane

0x77d8,	// (0x00016b98) fep_vkb_prediction_pane

0xe013,	// (0x0001d3d3) fep_vkb_side_pane_g3_ParamLimits

0xe013,	// (0x0001d3d3) fep_vkb_side_pane_g3

0x1904,	// (0x00010cc4) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1970,	// (0x00010d30) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x197d,	// (0x00010d3d) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb1,	// (0x0001ef71) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1aac,	// (0x00010e6c) fep_hwr_prediction_pane_g1

0x1ab6,	// (0x00010e76) fep_hwr_prediction_pane_g2

0x1abe,	// (0x00010e7e) fep_hwr_prediction_pane_g3

0x1ac6,	// (0x00010e86) fep_hwr_prediction_pane_g4

0x0003,

0xfcbb,	// (0x0001f07b) fep_hwr_prediction_pane_g

0x8a03,	// (0x00017dc3) fep_vkb_prediction_pane_g1

0x8a0d,	// (0x00017dcd) fep_vkb_prediction_pane_g2

0x8a15,	// (0x00017dd5) fep_vkb_prediction_pane_g3

0x8a1d,	// (0x00017ddd) fep_vkb_prediction_pane_g4

0x0003,

0xfcc4,	// (0x0001f084) fep_vkb_prediction_pane_g

0x152d,	// (0x000108ed) slider_set_pane_g3

0x1541,	// (0x00010901) slider_set_pane_g4

0x1559,	// (0x00010919) slider_set_pane_g5

0x152d,	// (0x000108ed) slider_set_pane_g6

0x156f,	// (0x0001092f) slider_set_pane_g7

0x61a6,	// (0x00015566) slider_form_pane_g3

0x61af,	// (0x0001556f) slider_form_pane_g4

0x61b7,	// (0x00015577) slider_form_pane_g5

0x61a6,	// (0x00015566) slider_form_pane_g6

0xdb34,	// (0x0001cef4) slider_form_pane_g7

0x68fc,	// (0x00015cbc) slider_set_pane_vc_g3

0x6905,	// (0x00015cc5) slider_set_pane_vc_g4

0x690e,	// (0x00015cce) slider_set_pane_vc_g5

0x68fc,	// (0x00015cbc) slider_set_pane_vc_g6

0x6917,	// (0x00015cd7) slider_set_pane_vc_g7

0x6d1f,	// (0x000160df) slider_form_pane_vc_g1

0x6d28,	// (0x000160e8) slider_form_pane_vc_g2

0x6d31,	// (0x000160f1) slider_form_pane_vc_g3

0x6d1f,	// (0x000160df) slider_form_pane_vc_g4

0x6d3a,	// (0x000160fa) slider_form_pane_vc_g5

0x0004,

0xfa7f,	// (0x0001ee3f) slider_form_pane_vc_g

0x0307,	// (0x0000f6c7) main_idle_act3_pane

0x8a25,	// (0x00017de5) ai3_links_pane

0xe3ef,	// (0x0001d7af) popup_ai3_data_window_ParamLimits

0xe3ef,	// (0x0001d7af) popup_ai3_data_window

0x24f6,	// (0x000118b6) grid_ai3_links_pane

0xe409,	// (0x0001d7c9) cell_ai3_links_pane_ParamLimits

0xe409,	// (0x0001d7c9) cell_ai3_links_pane

0x8a60,	// (0x00017e20) bg_popup_sub_pane_cp11

0x8a6d,	// (0x00017e2d) cell_ai3_links_pane_g1

0x24f6,	// (0x000118b6) bg_popup_sub_pane_cp12

0x8a92,	// (0x00017e52) heading_ai3_data_pane

0x8a9a,	// (0x00017e5a) list_ai3_gene_pane

0x8aa6,	// (0x00017e66) popup_ai3_data_window_g1

0x8aae,	// (0x00017e6e) heading_ai3_data_pane_g1

0x8ab6,	// (0x00017e76) heading_ai3_data_pane_t1

0x8ac4,	// (0x00017e84) list_double_ai3_gene_pane_ParamLimits

0x8ac4,	// (0x00017e84) list_double_ai3_gene_pane

0x8ad1,	// (0x00017e91) list_single_ai3_gene_pane_ParamLimits

0x8ad1,	// (0x00017e91) list_single_ai3_gene_pane

0x75cf,	// (0x0001698f) list_highlight_pane_cp7_ParamLimits

0x75cf,	// (0x0001698f) list_highlight_pane_cp7

0x8ade,	// (0x00017e9e) list_single_a13_gene_pane_t1_ParamLimits

0x8ade,	// (0x00017e9e) list_single_a13_gene_pane_t1

0x8af5,	// (0x00017eb5) list_single_ai3_gene_pane_g1

0x8afe,	// (0x00017ebe) list_single_ai3_gene_pane_g2

0x0001,

0xfccd,	// (0x0001f08d) list_single_ai3_gene_pane_g

0x8b06,	// (0x00017ec6) list_double_ai3_gene_pane_g1_ParamLimits

0x8b06,	// (0x00017ec6) list_double_ai3_gene_pane_g1

0x8b12,	// (0x00017ed2) list_double_ai3_gene_pane_t1_ParamLimits

0x8b12,	// (0x00017ed2) list_double_ai3_gene_pane_t1

0x8b2e,	// (0x00017eee) list_double_ai3_gene_pane_t2_ParamLimits

0x8b2e,	// (0x00017eee) list_double_ai3_gene_pane_t2

0x8b44,	// (0x00017f04) list_double_ai3_gene_pane_t3_ParamLimits

0x8b44,	// (0x00017f04) list_double_ai3_gene_pane_t3

0x0002,

0xfcd2,	// (0x0001f092) list_double_ai3_gene_pane_t_ParamLimits

0xfcd2,	// (0x0001f092) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x890c,	// (0x00017ccc) aid_size_min_col_2

0xe295,	// (0x0001d655) aid_size_min_msg_ParamLimits

0xe295,	// (0x0001d655) aid_size_min_msg

0xe027,	// (0x0001d3e7) fep_vkb_top_text_pane_g2_ParamLimits

0xe027,	// (0x0001d3e7) fep_vkb_top_text_pane_g2

0x0001,

0xfb32,	// (0x0001eef2) fep_vkb_top_text_pane_g_ParamLimits

0xfb32,	// (0x0001eef2) fep_vkb_top_text_pane_g

0x0307,	// (0x0000f6c7) main_hc_apps_shell_pane

0x8b61,	// (0x00017f21) grid_hc_apps_pane_ParamLimits

0x8b61,	// (0x00017f21) grid_hc_apps_pane

0x8b70,	// (0x00017f30) list_hc_apps_pane

0x8b78,	// (0x00017f38) scroll_pane_cp37_ParamLimits

0x8b78,	// (0x00017f38) scroll_pane_cp37

0xe423,	// (0x0001d7e3) cell_hc_apps_pane_ParamLimits

0xe423,	// (0x0001d7e3) cell_hc_apps_pane

0xe4e1,	// (0x0001d8a1) cell_hc_apps_pane_g1_ParamLimits

0xe4e1,	// (0x0001d8a1) cell_hc_apps_pane_g1

0x8c63,	// (0x00018023) cell_hc_apps_pane_g2_ParamLimits

0x8c63,	// (0x00018023) cell_hc_apps_pane_g2

0x8c7f,	// (0x0001803f) cell_hc_apps_pane_g3_ParamLimits

0x8c7f,	// (0x0001803f) cell_hc_apps_pane_g3

0x0002,

0xfcd9,	// (0x0001f099) cell_hc_apps_pane_g_ParamLimits

0xfcd9,	// (0x0001f099) cell_hc_apps_pane_g

0xe50e,	// (0x0001d8ce) cell_hc_apps_pane_t1_ParamLimits

0xe50e,	// (0x0001d8ce) cell_hc_apps_pane_t1

0x288d,	// (0x00011c4d) grid_highlight_pane_cp10_ParamLimits

0x288d,	// (0x00011c4d) grid_highlight_pane_cp10

0xe54c,	// (0x0001d90c) list_single_hc_apps_pane_ParamLimits

0xe54c,	// (0x0001d90c) list_single_hc_apps_pane

0xe579,	// (0x0001d939) list_single_hc_apps_pane_g1

0xe592,	// (0x0001d952) list_single_hc_apps_pane_g2

0x0001,

0xfce0,	// (0x0001f0a0) list_single_hc_apps_pane_g

0xe5ab,	// (0x0001d96b) list_single_hc_apps_pane_g2_copy1

0x8d8b,	// (0x0001814b) list_single_hc_apps_pane_t1

0x25ea,	// (0x000119aa) bg_set_opt_pane_cp_ParamLimits

0x0568,	// (0x0000f928) setting_slider_pane_t1_ParamLimits

0x0581,	// (0x0000f941) setting_slider_pane_t2_ParamLimits

0x059b,	// (0x0000f95b) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0001e924) setting_slider_pane_t_ParamLimits

0x05b3,	// (0x0000f973) slider_set_pane_ParamLimits

0x0ada,	// (0x0000fe9a) control_pane_g5_ParamLimits

0x0ada,	// (0x0000fe9a) control_pane_g5

0x5fb3,	// (0x00015373) slider_set_pane_g1_ParamLimits

0x1521,	// (0x000108e1) slider_set_pane_g2_ParamLimits

0x152d,	// (0x000108ed) slider_set_pane_g3_ParamLimits

0x1541,	// (0x00010901) slider_set_pane_g4_ParamLimits

0x1559,	// (0x00010919) slider_set_pane_g5_ParamLimits

0x152d,	// (0x000108ed) slider_set_pane_g6_ParamLimits

0x156f,	// (0x0001092f) slider_set_pane_g7_ParamLimits

0xf960,	// (0x0001ed20) slider_set_pane_g_ParamLimits

0x40fb,	// (0x000134bb) navi_icon_text_pane_ParamLimits

0xd3a1,	// (0x0001c761) aid_fill_nsta_2_ParamLimits

0xd3d8,	// (0x0001c798) aid_touch_tab_arrow_left_ParamLimits

0xd3ee,	// (0x0001c7ae) aid_touch_tab_arrow_right_ParamLimits

0xd489,	// (0x0001c849) clock_nsta_pane_ParamLimits

0x5a84,	// (0x00014e44) navi_icon_pane_g1_ParamLimits

0x5a90,	// (0x00014e50) navi_text_pane_t1_ParamLimits

0x715f,	// (0x0001651f) navi_icon_text_pane_g1_ParamLimits

0x716b,	// (0x0001652b) navi_icon_text_pane_t1_ParamLimits

0xe579,	// (0x0001d939) list_single_hc_apps_pane_g1_ParamLimits

0xe592,	// (0x0001d952) list_single_hc_apps_pane_g2_ParamLimits

0xfce0,	// (0x0001f0a0) list_single_hc_apps_pane_g_ParamLimits

0xe5ab,	// (0x0001d96b) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8d8b,	// (0x0001814b) list_single_hc_apps_pane_t1_ParamLimits

0xb864,	// (0x0001ac24) popup_toolbar2_fixed_window_ParamLimits

0xb864,	// (0x0001ac24) popup_toolbar2_fixed_window

0xc0fd,	// (0x0001b4bd) popup_toolbar2_float_window

0x24f6,	// (0x000118b6) bg_popup_sub_pane_cp27

0x8db9,	// (0x00018179) grid_toolbar2_float_pane

0x24f6,	// (0x000118b6) bg_popup_sub_pane_cp26

0x8db9,	// (0x00018179) grid_toolbar2_fixed_pane

0xe5c7,	// (0x0001d987) cell_toolbar2_fixed_pane_ParamLimits

0xe5c7,	// (0x0001d987) cell_toolbar2_fixed_pane

0xe5e1,	// (0x0001d9a1) cell_toolbar2_fixed_pane_g1

0x8dda,	// (0x0001819a) toolbar2_fixed_button_pane

0x4b03,	// (0x00013ec3) toolbar2_fixed_button_pane_g1

0x4b13,	// (0x00013ed3) toolbar2_fixed_button_pane_g2

0x4b0b,	// (0x00013ecb) toolbar2_fixed_button_pane_g3

0x4b23,	// (0x00013ee3) toolbar2_fixed_button_pane_g4

0x4b1b,	// (0x00013edb) toolbar2_fixed_button_pane_g5

0x4b2b,	// (0x00013eeb) toolbar2_fixed_button_pane_g6

0x4b33,	// (0x00013ef3) toolbar2_fixed_button_pane_g7

0x4b43,	// (0x00013f03) toolbar2_fixed_button_pane_g8

0x4b3b,	// (0x00013efb) toolbar2_fixed_button_pane_g9

0x0008,

0xf862,	// (0x0001ec22) toolbar2_fixed_button_pane_g

0x8de2,	// (0x000181a2) cell_toolbar2_float_pane_ParamLimits

0x8de2,	// (0x000181a2) cell_toolbar2_float_pane

0x8df3,	// (0x000181b3) cell_toolbar2_float_pane_g1

0x8dda,	// (0x0001819a) toolbar2_fixed_button_pane_cp

0xdf01,	// (0x0001d2c1) fep_vkb_accented_list_pane_ParamLimits

0xdf01,	// (0x0001d2c1) fep_vkb_accented_list_pane

0x18e4,	// (0x00010ca4) bg_popup_fep_shadow_pane_g9

0x427b,	// (0x0001363b) bg_popup_fep_shadow_pane_cp3

0x36bc,	// (0x00012a7c) list_accented_list_pane

0x8dfc,	// (0x000181bc) list_single_accented_list_pane_ParamLimits

0x8dfc,	// (0x000181bc) list_single_accented_list_pane

0x427b,	// (0x0001363b) list_highlight_pane_cp10

0x8e0d,	// (0x000181cd) list_single_accented_list_pane_t1

0xc027,	// (0x0001b3e7) popup_slider_window_ParamLimits

0xc027,	// (0x0001b3e7) popup_slider_window

0x8903,	// (0x00017cc3) aid_indentation_list_msg

0xe6da,	// (0x0001da9a) bg_popup_window_pane_cp19

0x8f31,	// (0x000182f1) popup_slider_window_g1

0x8f4d,	// (0x0001830d) popup_slider_window_g2

0x8f69,	// (0x00018329) popup_slider_window_g3

0x0005,

0xfce5,	// (0x0001f0a5) popup_slider_window_g

0x8fc5,	// (0x00018385) popup_slider_window_t1

0x9039,	// (0x000183f9) small_volume_slider_vertical_pane

0x760a,	// (0x000169ca) small_volume_slider_vertical_pane_g1

0x760a,	// (0x000169ca) small_volume_slider_vertical_pane_g2

0x9055,	// (0x00018415) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf7,	// (0x0001f0b7) small_volume_slider_vertical_pane_g

0xb7d2,	// (0x0001ab92) area_side_right_pane_ParamLimits

0xb7d2,	// (0x0001ab92) area_side_right_pane

0xc233,	// (0x0001b5f3) aid_size_side_button_ParamLimits

0xc233,	// (0x0001b5f3) aid_size_side_button

0xc24c,	// (0x0001b60c) grid_sctrl_middle_pane_ParamLimits

0xc24c,	// (0x0001b60c) grid_sctrl_middle_pane

0x1b01,	// (0x00010ec1) sctrl_sk_bottom_pane

0x1b12,	// (0x00010ed2) sctrl_sk_top_pane

0x1b24,	// (0x00010ee4) aid_touch_sctrl_top

0x1b31,	// (0x00010ef1) bg_sctrl_sk_pane_ParamLimits

0x1b31,	// (0x00010ef1) bg_sctrl_sk_pane

0x1b3f,	// (0x00010eff) sctrl_sk_top_pane_g1

0x1b4c,	// (0x00010f0c) sctrl_sk_top_pane_t1

0x1b24,	// (0x00010ee4) aid_touch_sctrl_bottom

0x1b31,	// (0x00010ef1) bg_sctrl_sk_pane_cp_ParamLimits

0x1b31,	// (0x00010ef1) bg_sctrl_sk_pane_cp

0x1b67,	// (0x00010f27) sctrl_sk_bottom_pane_g1

0x1b4c,	// (0x00010f0c) sctrl_sk_bottom_pane_t1

0xc266,	// (0x0001b626) cell_sctrl_middle_pane_ParamLimits

0xc266,	// (0x0001b626) cell_sctrl_middle_pane

0xc277,	// (0x0001b637) aid_touch_sctrl_middle_ParamLimits

0xc277,	// (0x0001b637) aid_touch_sctrl_middle

0xc284,	// (0x0001b644) bg_sctrl_middle_pane_ParamLimits

0xc284,	// (0x0001b644) bg_sctrl_middle_pane

0x21d4,	// (0x00011594) cell_sctrl_middle_pane_g1_ParamLimits

0x21d4,	// (0x00011594) cell_sctrl_middle_pane_g1

0xc292,	// (0x0001b652) cell_sctrl_middle_pane_g2_ParamLimits

0xc292,	// (0x0001b652) cell_sctrl_middle_pane_g2

0x0001,

0xfd03,	// (0x0001f0c3) cell_sctrl_middle_pane_g_ParamLimits

0xfd03,	// (0x0001f0c3) cell_sctrl_middle_pane_g

0x4b03,	// (0x00013ec3) bg_sctrl_middle_pane_g1

0x4b0b,	// (0x00013ecb) bg_sctrl_middle_pane_g2

0x4b13,	// (0x00013ed3) bg_sctrl_middle_pane_g3

0x4b1b,	// (0x00013edb) bg_sctrl_middle_pane_g4

0x4b23,	// (0x00013ee3) bg_sctrl_middle_pane_g5

0x4b2b,	// (0x00013eeb) bg_sctrl_middle_pane_g6

0x4b33,	// (0x00013ef3) bg_sctrl_middle_pane_g7

0x4b3b,	// (0x00013efb) bg_sctrl_middle_pane_g8

0x0007,

0xfd08,	// (0x0001f0c8) bg_sctrl_middle_pane_g

0x4b43,	// (0x00013f03) bg_sctrl_middle_pane_g8_copy1

0x4b03,	// (0x00013ec3) bg_sctrl_sk_pane_g1

0x4b13,	// (0x00013ed3) bg_sctrl_sk_pane_g2

0x4b0b,	// (0x00013ecb) bg_sctrl_sk_pane_g3

0x0008,

0xf862,	// (0x0001ec22) bg_sctrl_sk_pane_g

0x2d9f,	// (0x0001215f) aid_size_touch_scroll_bar

0x4b23,	// (0x00013ee3) bg_sctrl_sk_pane_g4

0x4b1b,	// (0x00013edb) bg_sctrl_sk_pane_g5

0x4b2b,	// (0x00013eeb) bg_sctrl_sk_pane_g6

0x4b33,	// (0x00013ef3) bg_sctrl_sk_pane_g7

0x4b43,	// (0x00013f03) bg_sctrl_sk_pane_g8

0x4b3b,	// (0x00013efb) bg_sctrl_sk_pane_g9

0x0c98,	// (0x00010058) popup_fep_china_hwr2_fs_candidate_window

0xbb47,	// (0x0001af07) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xbb47,	// (0x0001af07) popup_fep_china_hwr2_fs_control_window

0x1904,	// (0x00010cc4) sctrl_sk_top_pane_g2

0x0001,

0xfcfe,	// (0x0001f0be) sctrl_sk_top_pane_g

0xe792,	// (0x0001db52) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe792,	// (0x0001db52) aid_fep_china_hwr2_fs_cell

0xe7a6,	// (0x0001db66) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe7a6,	// (0x0001db66) bg_popup_fep_shadow_pane_cp4

0xe7bd,	// (0x0001db7d) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe7bd,	// (0x0001db7d) bg_popup_fep_shadow_pane_cp5

0xe7cf,	// (0x0001db8f) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe7cf,	// (0x0001db8f) popup_fep_china_hwr2_fs_control_bar_grid

0xe7e3,	// (0x0001dba3) popup_fep_china_hwr2_fs_control_funtion_grid

0x90b1,	// (0x00018471) aid_fep_china_hwr2_fs_candi_cell

0x24f6,	// (0x000118b6) bg_popup_fep_shadow_pane_cp6

0x90bb,	// (0x0001847b) popup_fep_china_hwr2_fs_candidate_grid

0xe7eb,	// (0x0001dbab) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe7eb,	// (0x0001dbab) cell_fep_china_hwr2_fs_funtion_grid

0x760a,	// (0x000169ca) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x90dd,	// (0x0001849d) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x90dd,	// (0x0001849d) cell_fep_china_hwr2_fs_funtion_grid_g1

0x90eb,	// (0x000184ab) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x90eb,	// (0x000184ab) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd19,	// (0x0001f0d9) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd19,	// (0x0001f0d9) cell_fep_china_hwr2_fs_funtion_grid_g

0xe803,	// (0x0001dbc3) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe803,	// (0x0001dbc3) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe818,	// (0x0001dbd8) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe818,	// (0x0001dbd8) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1e,	// (0x0001f0de) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1e,	// (0x0001f0de) cell_fep_china_hwr2_fs_funtion_grid_t

0x9132,	// (0x000184f2) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x913a,	// (0x000184fa) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x9142,	// (0x00018502) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd23,	// (0x0001f0e3) popup_fep_china_hwr2_fs_control_bar_grid_g

0x914a,	// (0x0001850a) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x914a,	// (0x0001850a) cell_fep_china_hwr2_fs_candidate_grid

0x9163,	// (0x00018523) popup_fep_china_hwr2_fs_candidate_grid_g20

0x916b,	// (0x0001852b) popup_fep_china_hwr2_fs_candidate_grid_g21

0x760a,	// (0x000169ca) cell_fep_china_hwr2_fs_candidate_grid_g1

0x760a,	// (0x000169ca) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb37,	// (0x0001eef7) cell_fep_china_hwr2_fs_candidate_grid_g

0x9173,	// (0x00018533) cell_fep_china_hwr2_fs_candidate_grid_t1

0x46cb,	// (0x00013a8b) clock_nsta_pane_cp_24_ParamLimits

0x46cb,	// (0x00013a8b) clock_nsta_pane_cp_24

0x4749,	// (0x00013b09) indicator_nsta_pane_cp_24_ParamLimits

0x4749,	// (0x00013b09) indicator_nsta_pane_cp_24

0x5900,	// (0x00014cc0) heading_pane_g1

0x0001,

0xf8c7,	// (0x0001ec87) heading_pane_g

0x6449,	// (0x00015809) grid_sct_catagory_button_pane

0x6479,	// (0x00015839) scroll_pane_cp5_ParamLimits

0x71ad,	// (0x0001656d) button_value_adjust_pane_cp5_ParamLimits

0x71ad,	// (0x0001656d) button_value_adjust_pane_cp5

0x72a9,	// (0x00016669) form2_midp_time_pane_ParamLimits

0x9181,	// (0x00018541) cell_sct_catagory_button_pane_ParamLimits

0x9181,	// (0x00018541) cell_sct_catagory_button_pane

0x75cf,	// (0x0001698f) bg_button_pane_cp01_ParamLimits

0x75cf,	// (0x0001698f) bg_button_pane_cp01

0x760a,	// (0x000169ca) cell_sct_catagory_button_pane_g1

0xc0a0,	// (0x0001b460) popup_tb_extension_window

0xe834,	// (0x0001dbf4) aid_size_cell_ext_ParamLimits

0xe834,	// (0x0001dbf4) aid_size_cell_ext

0x2be1,	// (0x00011fa1) bg_tb_trans_pane_cp1_ParamLimits

0x2be1,	// (0x00011fa1) bg_tb_trans_pane_cp1

0xe85a,	// (0x0001dc1a) grid_tb_ext_pane_ParamLimits

0xe85a,	// (0x0001dc1a) grid_tb_ext_pane

0xe895,	// (0x0001dc55) cell_tb_ext_pane_ParamLimits

0xe895,	// (0x0001dc55) cell_tb_ext_pane

0xe8bd,	// (0x0001dc7d) cell_tb_ext_pane_g1_ParamLimits

0xe8bd,	// (0x0001dc7d) cell_tb_ext_pane_g1

0x9215,	// (0x000185d5) cell_tb_ext_pane_t1

0x288d,	// (0x00011c4d) list_highlight_pane_cp11_ParamLimits

0x288d,	// (0x00011c4d) list_highlight_pane_cp11

0xb879,	// (0x0001ac39) popup_uni_indicator_window_ParamLimits

0xb879,	// (0x0001ac39) popup_uni_indicator_window

0x33eb,	// (0x000127ab) bg_popup_sub_pane_cp14

0x9230,	// (0x000185f0) list_uniindi_pane

0x923c,	// (0x000185fc) uniindi_top_pane

0x288d,	// (0x00011c4d) bg_uniindi_top_pane

0x925b,	// (0x0001861b) uniindi_top_pane_g1

0x9271,	// (0x00018631) uniindi_top_pane_g2

0x0003,

0xfd2a,	// (0x0001f0ea) uniindi_top_pane_g

0x929b,	// (0x0001865b) uniindi_top_pane_t1

0x92c5,	// (0x00018685) list_single_uniindi_pane_ParamLimits

0x92c5,	// (0x00018685) list_single_uniindi_pane

0x760a,	// (0x000169ca) bg_uniindi_top_pane_g1

0x92d8,	// (0x00018698) list_single_uniindi_pane_g1

0x92eb,	// (0x000186ab) list_single_uniindi_pane_t1

0x0307,	// (0x0000f6c7) control_bg_pane

0x9310,	// (0x000186d0) bg_sctrl_sk_pane_cp1

0x9319,	// (0x000186d9) bg_sctrl_sk_pane_cp2

0x9322,	// (0x000186e2) control_bg_pane_g1

0x932b,	// (0x000186eb) control_bg_pane_g2

0x0001,

0xfd33,	// (0x0001f0f3) control_bg_pane_g

0x6ff6,	// (0x000163b6) cell_indicator_nsta_pane_g1_ParamLimits

0xdd50,	// (0x0001d110) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9b,	// (0x0001ee5b) cell_indicator_nsta_pane_g_ParamLimits

0x7331,	// (0x000166f1) form2_midp_time_pane_t1_ParamLimits

0x169f,	// (0x00010a5f) main_idle_act4_pane_ParamLimits

0x169f,	// (0x00010a5f) main_idle_act4_pane

0xc0a0,	// (0x0001b460) popup_tb_extension_window_ParamLimits

0xe87c,	// (0x0001dc3c) tb_ext_find_pane_ParamLimits

0xe87c,	// (0x0001dc3c) tb_ext_find_pane

0x9334,	// (0x000186f4) ai_gene_pane_1_cp1

0x43b4,	// (0x00013774) ai_gene_pane_2_cp1

0x933c,	// (0x000186fc) list_single_idle_plugin_calendar_pane

0x9345,	// (0x00018705) list_single_idle_plugin_notification_pane

0x934e,	// (0x0001870e) list_single_idle_plugin_player_pane

0xe8da,	// (0x0001dc9a) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe8da,	// (0x0001dc9a) list_single_idle_plugin_shortcut_pane

0xe902,	// (0x0001dcc2) main_idle_act4_pane_t1

0xe918,	// (0x0001dcd8) main_idle_act4_pane_t2

0x0001,

0xfd38,	// (0x0001f0f8) main_idle_act4_pane_t

0xe92e,	// (0x0001dcee) middle_sk_idle_act4_pane_ParamLimits

0xe92e,	// (0x0001dcee) middle_sk_idle_act4_pane

0xe94a,	// (0x0001dd0a) popup_clock_digital_analogue_window_cp2

0xe972,	// (0x0001dd32) shortcut_wheel_idle_act4_pane_ParamLimits

0xe972,	// (0x0001dd32) shortcut_wheel_idle_act4_pane

0x760a,	// (0x000169ca) shortcut_wheel_idle_act4_pane_g1

0x760a,	// (0x000169ca) shortcut_wheel_idle_act4_pane_g2

0x760a,	// (0x000169ca) shortcut_wheel_idle_act4_pane_g3

0x760a,	// (0x000169ca) shortcut_wheel_idle_act4_pane_g4

0x760a,	// (0x000169ca) shortcut_wheel_idle_act4_pane_g5

0x93e1,	// (0x000187a1) shortcut_wheel_idle_act4_pane_g6

0x93e9,	// (0x000187a9) shortcut_wheel_idle_act4_pane_g7

0x93f1,	// (0x000187b1) shortcut_wheel_idle_act4_pane_g8

0x93f9,	// (0x000187b9) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3d,	// (0x0001f0fd) shortcut_wheel_idle_act4_pane_g

0xd355,	// (0x0001c715) middle_sk_idle_act4_pane_g1_ParamLimits

0xd355,	// (0x0001c715) middle_sk_idle_act4_pane_g1

0xe9ef,	// (0x0001ddaf) middle_sk_idle_act4_pane_g2_ParamLimits

0xe9ef,	// (0x0001ddaf) middle_sk_idle_act4_pane_g2

0x0001,

0xfd60,	// (0x0001f120) middle_sk_idle_act4_pane_g_ParamLimits

0xfd60,	// (0x0001f120) middle_sk_idle_act4_pane_g

0xea07,	// (0x0001ddc7) middle_sk_idle_act4_pane_t1_ParamLimits

0xea07,	// (0x0001ddc7) middle_sk_idle_act4_pane_t1

0xea36,	// (0x0001ddf6) grid_ai_shortcut_pane_ParamLimits

0xea36,	// (0x0001ddf6) grid_ai_shortcut_pane

0xea53,	// (0x0001de13) list_highlight_pane_cp16_ParamLimits

0xea53,	// (0x0001de13) list_highlight_pane_cp16

0xea60,	// (0x0001de20) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xea60,	// (0x0001de20) list_single_idle_plugin_shortcut_pane_g1

0xea6c,	// (0x0001de2c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xea6c,	// (0x0001de2c) list_single_idle_plugin_shortcut_pane_g2

0xea88,	// (0x0001de48) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xea88,	// (0x0001de48) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd65,	// (0x0001f125) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd65,	// (0x0001f125) list_single_idle_plugin_shortcut_pane_g

0xea9d,	// (0x0001de5d) cell_ai_shortcut_pane_ParamLimits

0xea9d,	// (0x0001de5d) cell_ai_shortcut_pane

0xeab3,	// (0x0001de73) cell_ai_shortcut_pane_g1_ParamLimits

0xeab3,	// (0x0001de73) cell_ai_shortcut_pane_g1

0x9334,	// (0x000186f4) ai_gene_pane_1_cp2

0x9529,	// (0x000188e9) ai_gene_pane_2_cp2

0x9531,	// (0x000188f1) list_highlight_pane_cp15

0x953a,	// (0x000188fa) list_single_idle_plugin_calendar_pane_g1

0x9531,	// (0x000188f1) list_highlight_pane_cp17

0x9542,	// (0x00018902) list_single_idle_plugin_calendar_pane_g1_copy1

0x954a,	// (0x0001890a) list_single_idle_plugin_player_pane_g1

0x66a2,	// (0x00015a62) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6c,	// (0x0001f12c) list_single_idle_plugin_player_pane_g

0x9552,	// (0x00018912) list_single_idle_plugin_player_pane_t1

0x9560,	// (0x00018920) list_single_idle_plugin_player_pane_t2

0x956e,	// (0x0001892e) list_single_idle_plugin_player_pane_t3

0x957c,	// (0x0001893c) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd71,	// (0x0001f131) list_single_idle_plugin_player_pane_t

0x958a,	// (0x0001894a) wait_bar_pane_cp15

0x9592,	// (0x00018952) grid_ai_notification_pane

0x66a2,	// (0x00015a62) list_single_idle_plugin_notification_pane_g1

0xead5,	// (0x0001de95) cell_ai_notification_pane_ParamLimits

0xead5,	// (0x0001de95) cell_ai_notification_pane

0x95a8,	// (0x00018968) cell_ai_notification_pane_g1

0x95b0,	// (0x00018970) cell_ai_notification_pane_t1

0xeae2,	// (0x0001dea2) tb_ext_find_button_pane

0xeaea,	// (0x0001deaa) tb_ext_find_pane_g1

0xeaf2,	// (0x0001deb2) tb_ext_find_pane_t1

0x3be4,	// (0x00012fa4) tb_ext_find_button_pane_g1

0x95dc,	// (0x0001899c) tb_ext_find_button_pane_g2

0x0001,

0xfd7a,	// (0x0001f13a) tb_ext_find_button_pane_g

0xe902,	// (0x0001dcc2) main_idle_act4_pane_t1_ParamLimits

0xe918,	// (0x0001dcd8) main_idle_act4_pane_t2_ParamLimits

0xfd38,	// (0x0001f0f8) main_idle_act4_pane_t_ParamLimits

0xe94a,	// (0x0001dd0a) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe962,	// (0x0001dd22) sat_plugin_idle_act4_pane_ParamLimits

0xe962,	// (0x0001dd22) sat_plugin_idle_act4_pane

0xeb00,	// (0x0001dec0) sat_plugin_idle_act4_pane_t1_ParamLimits

0xeb00,	// (0x0001dec0) sat_plugin_idle_act4_pane_t1

0xeb18,	// (0x0001ded8) sat_plugin_idle_act4_pane_t2_ParamLimits

0xeb18,	// (0x0001ded8) sat_plugin_idle_act4_pane_t2

0xeb30,	// (0x0001def0) sat_plugin_idle_act4_pane_t3_ParamLimits

0xeb30,	// (0x0001def0) sat_plugin_idle_act4_pane_t3

0xeb48,	// (0x0001df08) sat_plugin_idle_act4_pane_t4_ParamLimits

0xeb48,	// (0x0001df08) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7f,	// (0x0001f13f) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7f,	// (0x0001f13f) sat_plugin_idle_act4_pane_t

0x03cc,	// (0x0000f78c) popup_battery_window_ParamLimits

0x03cc,	// (0x0000f78c) popup_battery_window

0x288d,	// (0x00011c4d) bg_popup_sub_pane_cp25_ParamLimits

0x288d,	// (0x00011c4d) bg_popup_sub_pane_cp25

0x9631,	// (0x000189f1) popup_battery_window_g1_ParamLimits

0x9631,	// (0x000189f1) popup_battery_window_g1

0x963d,	// (0x000189fd) popup_battery_window_t1_ParamLimits

0x963d,	// (0x000189fd) popup_battery_window_t1

0x964f,	// (0x00018a0f) popup_battery_window_t2_ParamLimits

0x964f,	// (0x00018a0f) popup_battery_window_t2

0x0001,

0xfd88,	// (0x0001f148) popup_battery_window_t_ParamLimits

0xfd88,	// (0x0001f148) popup_battery_window_t

0xd285,	// (0x0001c645) midp_canvas_pane_ParamLimits

0xd2e0,	// (0x0001c6a0) midp_keypad_pane_ParamLimits

0xd2e0,	// (0x0001c6a0) midp_keypad_pane

0x45c3,	// (0x00013983) main_midp_pane_ParamLimits

0x7071,	// (0x00016431) signal_pane_g2_cp_ParamLimits

0xeb60,	// (0x0001df20) aid_size_cell_midp_keypad_ParamLimits

0xeb60,	// (0x0001df20) aid_size_cell_midp_keypad

0xeb7e,	// (0x0001df3e) midp_keyp_game_grid_pane_ParamLimits

0xeb7e,	// (0x0001df3e) midp_keyp_game_grid_pane

0xeba5,	// (0x0001df65) midp_keyp_rocker_pane_ParamLimits

0xeba5,	// (0x0001df65) midp_keyp_rocker_pane

0xebee,	// (0x0001dfae) midp_keyp_sk_left_pane_ParamLimits

0xebee,	// (0x0001dfae) midp_keyp_sk_left_pane

0xec40,	// (0x0001e000) midp_keyp_sk_right_pane_ParamLimits

0xec40,	// (0x0001e000) midp_keyp_sk_right_pane

0x24f6,	// (0x000118b6) bg_button_pane_cp03

0xec92,	// (0x0001e052) midp_keyp_sk_left_pane_g1

0x24f6,	// (0x000118b6) bg_button_pane_cp04

0xec92,	// (0x0001e052) midp_keyp_sk_right_pane_g1

0x760a,	// (0x000169ca) midp_keyp_rocker_pane_g1

0xec9b,	// (0x0001e05b) keyp_game_cell_pane_ParamLimits

0xec9b,	// (0x0001e05b) keyp_game_cell_pane

0x24f6,	// (0x000118b6) bg_button_pane_cp02

0xecbf,	// (0x0001e07f) keyp_game_cell_pane_g1

0xb814,	// (0x0001abd4) popup_fep_vkb2_window_ParamLimits

0xb814,	// (0x0001abd4) popup_fep_vkb2_window

0xc29e,	// (0x0001b65e) aid_size_cell_vkb2_ParamLimits

0xc29e,	// (0x0001b65e) aid_size_cell_vkb2

0xc2d4,	// (0x0001b694) popup_fep_vkb2_window_g1_ParamLimits

0xc2d4,	// (0x0001b694) popup_fep_vkb2_window_g1

0xc324,	// (0x0001b6e4) vkb2_area_bottom_pane_ParamLimits

0xc324,	// (0x0001b6e4) vkb2_area_bottom_pane

0xc378,	// (0x0001b738) vkb2_area_keypad_pane_ParamLimits

0xc378,	// (0x0001b738) vkb2_area_keypad_pane

0xc3c0,	// (0x0001b780) vkb2_area_top_pane_ParamLimits

0xc3c0,	// (0x0001b780) vkb2_area_top_pane

0xc446,	// (0x0001b806) vkb2_top_entry_pane_ParamLimits

0xc446,	// (0x0001b806) vkb2_top_entry_pane

0xc473,	// (0x0001b833) vkb2_top_grid_left_pane_ParamLimits

0xc473,	// (0x0001b833) vkb2_top_grid_left_pane

0xc493,	// (0x0001b853) vkb2_top_grid_right_pane_ParamLimits

0xc493,	// (0x0001b853) vkb2_top_grid_right_pane

0x1dd3,	// (0x00011193) vkb2_cell_keypad_pane_ParamLimits

0x1dd3,	// (0x00011193) vkb2_cell_keypad_pane

0xc4d9,	// (0x0001b899) vkb2_area_bottom_grid_pane_ParamLimits

0xc4d9,	// (0x0001b899) vkb2_area_bottom_grid_pane

0xc503,	// (0x0001b8c3) vkb2_area_bottom_pane_g1_ParamLimits

0xc503,	// (0x0001b8c3) vkb2_area_bottom_pane_g1

0xc529,	// (0x0001b8e9) vkb2_area_bottom_pane_g2_ParamLimits

0xc529,	// (0x0001b8e9) vkb2_area_bottom_pane_g2

0xc55a,	// (0x0001b91a) vkb2_area_bottom_pane_g3_ParamLimits

0xc55a,	// (0x0001b91a) vkb2_area_bottom_pane_g3

0x0002,

0xfd8d,	// (0x0001f14d) vkb2_area_bottom_pane_g_ParamLimits

0xfd8d,	// (0x0001f14d) vkb2_area_bottom_pane_g

0x1f7d,	// (0x0001133d) vkb2_top_cell_left_pane_ParamLimits

0x1f7d,	// (0x0001133d) vkb2_top_cell_left_pane

0xecc8,	// (0x0001e088) vkb2_top_entry_pane_g1_ParamLimits

0xecc8,	// (0x0001e088) vkb2_top_entry_pane_g1

0xecd6,	// (0x0001e096) vkb2_top_entry_pane_t1_ParamLimits

0xecd6,	// (0x0001e096) vkb2_top_entry_pane_t1

0x97f8,	// (0x00018bb8) vkb2_top_entry_pane_t2_ParamLimits

0x97f8,	// (0x00018bb8) vkb2_top_entry_pane_t2

0x982a,	// (0x00018bea) vkb2_top_entry_pane_t3_ParamLimits

0x982a,	// (0x00018bea) vkb2_top_entry_pane_t3

0x0002,

0xfd94,	// (0x0001f154) vkb2_top_entry_pane_t_ParamLimits

0xfd94,	// (0x0001f154) vkb2_top_entry_pane_t

0xc5c4,	// (0x0001b984) vkb2_top_grid_right_pane_g1_ParamLimits

0xc5c4,	// (0x0001b984) vkb2_top_grid_right_pane_g1

0x1fe0,	// (0x000113a0) vkb2_top_grid_right_pane_g2_ParamLimits

0x1fe0,	// (0x000113a0) vkb2_top_grid_right_pane_g2

0x1ff8,	// (0x000113b8) vkb2_top_grid_right_pane_g3_ParamLimits

0x1ff8,	// (0x000113b8) vkb2_top_grid_right_pane_g3

0xc5da,	// (0x0001b99a) vkb2_top_grid_right_pane_g4_ParamLimits

0xc5da,	// (0x0001b99a) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9b,	// (0x0001f15b) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9b,	// (0x0001f15b) vkb2_top_grid_right_pane_g

0x2026,	// (0x000113e6) vkb2_top_cell_left_pane_g1

0x203d,	// (0x000113fd) vkb2_cell_keypad_pane_g1_ParamLimits

0x203d,	// (0x000113fd) vkb2_cell_keypad_pane_g1

0x984e,	// (0x00018c0e) vkb2_cell_keypad_pane_t1_ParamLimits

0x984e,	// (0x00018c0e) vkb2_cell_keypad_pane_t1

0x204b,	// (0x0001140b) vkb2_cell_bottom_grid_pane_ParamLimits

0x204b,	// (0x0001140b) vkb2_cell_bottom_grid_pane

0x2084,	// (0x00011444) vkb2_cell_bottom_grid_pane_g1

0xe993,	// (0x0001dd53) aid_call2_pane_cp02

0xe99b,	// (0x0001dd5b) aid_call_pane_cp02

0xe9a3,	// (0x0001dd63) clock_digital_number_pane_cp10

0xe9ab,	// (0x0001dd6b) clock_digital_number_pane_cp11

0xe9b3,	// (0x0001dd73) clock_digital_number_pane_cp12

0xe9bb,	// (0x0001dd7b) clock_digital_number_pane_cp13

0xe9c3,	// (0x0001dd83) clock_digital_separator_pane_cp10

0x3be4,	// (0x00012fa4) popup_clock_digital_analogue_window_cp2_g1

0x3be4,	// (0x00012fa4) popup_clock_digital_analogue_window_cp2_g2

0xe9cb,	// (0x0001dd8b) popup_clock_digital_analogue_window_cp2_g3

0x3be4,	// (0x00012fa4) popup_clock_digital_analogue_window_cp2_g4

0xe9cb,	// (0x0001dd8b) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd50,	// (0x0001f110) popup_clock_digital_analogue_window_cp2_g

0xe9d3,	// (0x0001dd93) popup_clock_digital_analogue_window_cp2_t1

0xe9e1,	// (0x0001dda1) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5b,	// (0x0001f11b) popup_clock_digital_analogue_window_cp2_t

0x760a,	// (0x000169ca) clock_digital_number_pane_cp10_g1

0x760a,	// (0x000169ca) clock_digital_number_pane_cp10_g2

0x0001,

0xfb37,	// (0x0001eef7) clock_digital_number_pane_cp10_g

0x760a,	// (0x000169ca) clock_digital_separator_pane_cp10_g1

0x760a,	// (0x000169ca) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb37,	// (0x0001eef7) clock_digital_separator_pane_cp10_g

0x927d,	// (0x0001863d) uniindi_top_pane_g3

0x928e,	// (0x0001864e) uniindi_top_pane_g4

0x1e5e,	// (0x0001121e) vkb2_row_keypad_pane_ParamLimits

0x1e5e,	// (0x0001121e) vkb2_row_keypad_pane

0x20a0,	// (0x00011460) vkb2_cell_t_keypad_pane_ParamLimits

0x20a0,	// (0x00011460) vkb2_cell_t_keypad_pane

0x20b0,	// (0x00011470) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x20b0,	// (0x00011470) vkb2_cell_t_keypad_pane_cp08

0x20c3,	// (0x00011483) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x20c3,	// (0x00011483) vkb2_cell_t_keypad_pane_cp09

0x20d7,	// (0x00011497) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x20d7,	// (0x00011497) vkb2_cell_t_keypad_pane_cp01

0x20e8,	// (0x000114a8) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x20e8,	// (0x000114a8) vkb2_cell_t_keypad_pane_cp02

0x20f9,	// (0x000114b9) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x20f9,	// (0x000114b9) vkb2_cell_t_keypad_pane_cp03

0x210a,	// (0x000114ca) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x210a,	// (0x000114ca) vkb2_cell_t_keypad_pane_cp04

0x211b,	// (0x000114db) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x211b,	// (0x000114db) vkb2_cell_t_keypad_pane_cp05

0x212c,	// (0x000114ec) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x212c,	// (0x000114ec) vkb2_cell_t_keypad_pane_cp06

0x213d,	// (0x000114fd) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x213d,	// (0x000114fd) vkb2_cell_t_keypad_pane_cp07

0x214e,	// (0x0001150e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x214e,	// (0x0001150e) vkb2_cell_t_keypad_pane_cp10

0x1904,	// (0x00010cc4) vkb2_cell_t_keypad_pane_g1

0x9865,	// (0x00018c25) vkb2_cell_t_keypad_pane_t1

0x0307,	// (0x0000f6c7) popup_grid_graphic2_window

0xed0f,	// (0x0001e0cf) aid_size_cell_graphic2_ParamLimits

0xed0f,	// (0x0001e0cf) aid_size_cell_graphic2

0xed4d,	// (0x0001e10d) bg_popup_window_pane_cp21_ParamLimits

0xed4d,	// (0x0001e10d) bg_popup_window_pane_cp21

0xed5b,	// (0x0001e11b) graphic2_pages_pane_ParamLimits

0xed5b,	// (0x0001e11b) graphic2_pages_pane

0xedb1,	// (0x0001e171) grid_graphic2_control_pane_ParamLimits

0xedb1,	// (0x0001e171) grid_graphic2_control_pane

0xedf9,	// (0x0001e1b9) grid_graphic2_pane_ParamLimits

0xedf9,	// (0x0001e1b9) grid_graphic2_pane

0xee80,	// (0x0001e240) cell_graphic2_pane

0x0307,	// (0x0000f6c7) main_comp_mode_pane

0x8a9a,	// (0x00017e5a) list_ai3_gene_pane_ParamLimits

0xe6da,	// (0x0001da9a) bg_popup_window_pane_cp19_ParamLimits

0x8ed3,	// (0x00018293) bg_touch_area_indi_pane_ParamLimits

0x8ed3,	// (0x00018293) bg_touch_area_indi_pane

0x8ee9,	// (0x000182a9) bg_touch_area_indi_pane_cp01_ParamLimits

0x8ee9,	// (0x000182a9) bg_touch_area_indi_pane_cp01

0x8eff,	// (0x000182bf) bg_touch_area_indi_pane_cp02_ParamLimits

0x8eff,	// (0x000182bf) bg_touch_area_indi_pane_cp02

0x8f17,	// (0x000182d7) bg_touch_area_indi_pane_cp03_ParamLimits

0x8f17,	// (0x000182d7) bg_touch_area_indi_pane_cp03

0x8f31,	// (0x000182f1) popup_slider_window_g1_ParamLimits

0x8f4d,	// (0x0001830d) popup_slider_window_g2_ParamLimits

0x8f69,	// (0x00018329) popup_slider_window_g3_ParamLimits

0xfce5,	// (0x0001f0a5) popup_slider_window_g_ParamLimits

0x8fc5,	// (0x00018385) popup_slider_window_t1_ParamLimits

0x9039,	// (0x000183f9) small_volume_slider_vertical_pane_ParamLimits

0xee80,	// (0x0001e240) cell_graphic2_pane_ParamLimits

0xeedd,	// (0x0001e29d) bg_button_pane_cp10_ParamLimits

0xeedd,	// (0x0001e29d) bg_button_pane_cp10

0xeef0,	// (0x0001e2b0) bg_button_pane_cp11_ParamLimits

0xeef0,	// (0x0001e2b0) bg_button_pane_cp11

0xef03,	// (0x0001e2c3) graphic2_pages_pane_g1_ParamLimits

0xef03,	// (0x0001e2c3) graphic2_pages_pane_g1

0xef1e,	// (0x0001e2de) graphic2_pages_pane_g2_ParamLimits

0xef1e,	// (0x0001e2de) graphic2_pages_pane_g2

0x0001,

0xfda9,	// (0x0001f169) graphic2_pages_pane_g_ParamLimits

0xfda9,	// (0x0001f169) graphic2_pages_pane_g

0xef36,	// (0x0001e2f6) graphic2_pages_pane_t1_ParamLimits

0xef36,	// (0x0001e2f6) graphic2_pages_pane_t1

0xef4e,	// (0x0001e30e) cell_graphic2_control_pane_ParamLimits

0xef4e,	// (0x0001e30e) cell_graphic2_control_pane

0xef8d,	// (0x0001e34d) cell_graphic2_pane_g1_ParamLimits

0xef8d,	// (0x0001e34d) cell_graphic2_pane_g1

0xd363,	// (0x0001c723) cell_graphic2_pane_g2_ParamLimits

0xd363,	// (0x0001c723) cell_graphic2_pane_g2

0xef80,	// (0x0001e340) cell_graphic2_pane_g3_ParamLimits

0xef80,	// (0x0001e340) cell_graphic2_pane_g3

0xd370,	// (0x0001c730) cell_graphic2_pane_g4_ParamLimits

0xd370,	// (0x0001c730) cell_graphic2_pane_g4

0xef9a,	// (0x0001e35a) cell_graphic2_pane_g5_ParamLimits

0xef9a,	// (0x0001e35a) cell_graphic2_pane_g5

0x0004,

0xfdae,	// (0x0001f16e) cell_graphic2_pane_g_ParamLimits

0xfdae,	// (0x0001f16e) cell_graphic2_pane_g

0xefba,	// (0x0001e37a) cell_graphic2_pane_t1_ParamLimits

0xefba,	// (0x0001e37a) cell_graphic2_pane_t1

0x58f4,	// (0x00014cb4) grid_highlight_pane_cp11_ParamLimits

0x58f4,	// (0x00014cb4) grid_highlight_pane_cp11

0x288d,	// (0x00011c4d) bg_button_pane_cp05

0xefef,	// (0x0001e3af) cell_graphic2_control_pane_g1

0x760a,	// (0x000169ca) bg_touch_area_indi_pane_g1

0x9b35,	// (0x00018ef5) aid_cmod_rocker_key_size

0x9b3f,	// (0x00018eff) aid_cmode_itu_key_size

0x9b49,	// (0x00018f09) main_cmode_video_pane

0x9b53,	// (0x00018f13) main_comp_mode_itu_pane

0x9b5f,	// (0x00018f1f) main_comp_mode_rocker_pane

0x9b6b,	// (0x00018f2b) cell_cmode_rocker_pane_ParamLimits

0x9b6b,	// (0x00018f2b) cell_cmode_rocker_pane

0x9b7d,	// (0x00018f3d) cell_cmode_itu_pane_ParamLimits

0x9b7d,	// (0x00018f3d) cell_cmode_itu_pane

0x33eb,	// (0x000127ab) bg_button_pane_cp06_ParamLimits

0x33eb,	// (0x000127ab) bg_button_pane_cp06

0x7888,	// (0x00016c48) cell_cmode_rocker_pane_g1_ParamLimits

0x7888,	// (0x00016c48) cell_cmode_rocker_pane_g1

0x90dd,	// (0x0001849d) cell_cmode_rocker_pane_g2_ParamLimits

0x90dd,	// (0x0001849d) cell_cmode_rocker_pane_g2

0x0001,

0xfdbe,	// (0x0001f17e) cell_cmode_rocker_pane_g_ParamLimits

0xfdbe,	// (0x0001f17e) cell_cmode_rocker_pane_g

0x24f6,	// (0x000118b6) bg_button_pane_cp07

0x9b92,	// (0x00018f52) cell_cmode_itu_pane_g1

0x9b9b,	// (0x00018f5b) cell_cmode_itu_pane_t1

0x9ba9,	// (0x00018f69) cell_cmode_itu_pane_t2

0x0001,

0xfdc3,	// (0x0001f183) cell_cmode_itu_pane_t

0x9300,	// (0x000186c0) aid_touch_ctrl_left

0x9308,	// (0x000186c8) aid_touch_ctrl_right

0x24f6,	// (0x000118b6) compa_mode_pane

0xf015,	// (0x0001e3d5) aid_cmod_rocker_key_size_cp

0xf01f,	// (0x0001e3df) aid_cmode_itu_key_size_cp

0x9bcb,	// (0x00018f8b) compa_mode_pane_g1

0x9bd3,	// (0x00018f93) compa_mode_pane_g2

0x9bdb,	// (0x00018f9b) compa_mode_pane_g3

0x0002,

0xfdc8,	// (0x0001f188) compa_mode_pane_g

0xf029,	// (0x0001e3e9) main_comp_mode_itu_pane_cp

0xf031,	// (0x0001e3f1) main_comp_mode_rocker_pane_cp

0xf039,	// (0x0001e3f9) cell_cmode_itu_pane_cp_ParamLimits

0xf039,	// (0x0001e3f9) cell_cmode_itu_pane_cp

0xf04e,	// (0x0001e40e) cell_cmode_rocker_pane_cp_ParamLimits

0xf04e,	// (0x0001e40e) cell_cmode_rocker_pane_cp

0x33eb,	// (0x000127ab) bg_button_pane_cp06_cp_ParamLimits

0x33eb,	// (0x000127ab) bg_button_pane_cp06_cp

0x7888,	// (0x00016c48) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7888,	// (0x00016c48) cell_cmode_rocker_pane_g1_cp

0x760a,	// (0x000169ca) cell_cmode_rocker_pane_g2_cp

0x24f6,	// (0x000118b6) bg_button_pane_cp07_cp

0xf060,	// (0x0001e420) cell_cmode_itu_pane_g1_cp

0xf069,	// (0x0001e429) cell_cmode_itu_pane_t1_cp

0xf069,	// (0x0001e429) cell_cmode_itu_pane_t2_cp

0xdb2a,	// (0x0001ceea) settings_code_pane_cp2

0x25ea,	// (0x000119aa) bg_popup_window_pane_cp3_ParamLimits

0x2a67,	// (0x00011e27) heading_pane_cp3_ParamLimits

0x2a73,	// (0x00011e33) listscroll_popup_graphic_pane_ParamLimits

0x16ad,	// (0x00010a6d) fep_hwr_aid_pane_ParamLimits

0x1b24,	// (0x00010ee4) aid_touch_sctrl_top_ParamLimits

0x1b3f,	// (0x00010eff) sctrl_sk_top_pane_g1_ParamLimits

0x1904,	// (0x00010cc4) sctrl_sk_top_pane_g2_ParamLimits

0xfcfe,	// (0x0001f0be) sctrl_sk_top_pane_g_ParamLimits

0x1b4c,	// (0x00010f0c) sctrl_sk_top_pane_t1_ParamLimits

0x1b24,	// (0x00010ee4) aid_touch_sctrl_bottom_ParamLimits

0x1b4c,	// (0x00010f0c) sctrl_sk_bottom_pane_t1_ParamLimits

0x9249,	// (0x00018609) aid_area_touch_clock

0xc408,	// (0x0001b7c8) aid_vkb2_area_top_pane_cell_ParamLimits

0xc408,	// (0x0001b7c8) aid_vkb2_area_top_pane_cell

0xc4b3,	// (0x0001b873) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc4b3,	// (0x0001b873) aid_vkb2_area_bottom_pane_cell

0x97b0,	// (0x00018b70) popup_char_count_window

0x9c49,	// (0x00019009) popup_char_count_window_g1

0x9c52,	// (0x00019012) popup_char_count_window_g2

0x9c5b,	// (0x0001901b) popup_char_count_window_g3

0x0002,

0xfdcf,	// (0x0001f18f) popup_char_count_window_g

0x9c64,	// (0x00019024) popup_char_count_window_t1

0x1bfb,	// (0x00010fbb) popup_fep_char_preview_window_ParamLimits

0x1bfb,	// (0x00010fbb) popup_fep_char_preview_window

0xc428,	// (0x0001b7e8) vkb2_top_candi_pane_ParamLimits

0xc428,	// (0x0001b7e8) vkb2_top_candi_pane

0xf077,	// (0x0001e437) cell_vkb2_top_candi_pane_ParamLimits

0xf077,	// (0x0001e437) cell_vkb2_top_candi_pane

0x2163,	// (0x00011523) bg_popup_fep_char_preview_window_ParamLimits

0x2163,	// (0x00011523) bg_popup_fep_char_preview_window

0x2171,	// (0x00011531) popup_fep_char_preview_window_t1_ParamLimits

0x2171,	// (0x00011531) popup_fep_char_preview_window_t1

0x9cbf,	// (0x0001907f) bg_popup_fep_char_preview_window_g1

0x9cc7,	// (0x00019087) bg_popup_fep_char_preview_window_g2

0x9ccf,	// (0x0001908f) bg_popup_fep_char_preview_window_g3

0x9cd7,	// (0x00019097) bg_popup_fep_char_preview_window_g4

0x9cdf,	// (0x0001909f) bg_popup_fep_char_preview_window_g5

0x21ab,	// (0x0001156b) bg_popup_fep_char_preview_window_g6

0x9ce7,	// (0x000190a7) bg_popup_fep_char_preview_window_g7

0x9cef,	// (0x000190af) bg_popup_fep_char_preview_window_g8

0x9cf7,	// (0x000190b7) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd6,	// (0x0001f196) bg_popup_fep_char_preview_window_g

0x1904,	// (0x00010cc4) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1904,	// (0x00010cc4) cell_vkb2_top_candi_pane_g1

0x1912,	// (0x00010cd2) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1912,	// (0x00010cd2) cell_vkb2_top_candi_pane_g2

0x9c28,	// (0x00018fe8) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9c28,	// (0x00018fe8) cell_vkb2_top_candi_pane_g3

0x21b3,	// (0x00011573) cell_vkb2_top_candi_pane_g4_ParamLimits

0x21b3,	// (0x00011573) cell_vkb2_top_candi_pane_g4

0x7bf6,	// (0x00016fb6) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7bf6,	// (0x00016fb6) cell_vkb2_top_candi_pane_g5

0x21d4,	// (0x00011594) cell_vkb2_top_candi_pane_g6_ParamLimits

0x21d4,	// (0x00011594) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde9,	// (0x0001f1a9) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde9,	// (0x0001f1a9) cell_vkb2_top_candi_pane_g

0x21e2,	// (0x000115a2) cell_vkb2_top_candi_pane_t1

0x150d,	// (0x000108cd) aid_size_touch_slider_mark_ParamLimits

0x150d,	// (0x000108cd) aid_size_touch_slider_mark

0xed97,	// (0x0001e157) grid_graphic2_catg_pane_ParamLimits

0xed97,	// (0x0001e157) grid_graphic2_catg_pane

0xee53,	// (0x0001e213) popup_grid_graphic2_window_t1_ParamLimits

0xee53,	// (0x0001e213) popup_grid_graphic2_window_t1

0xee69,	// (0x0001e229) popup_grid_graphic2_window_t2_ParamLimits

0xee69,	// (0x0001e229) popup_grid_graphic2_window_t2

0x0001,

0xfda4,	// (0x0001f164) popup_grid_graphic2_window_t_ParamLimits

0xfda4,	// (0x0001f164) popup_grid_graphic2_window_t

0x288d,	// (0x00011c4d) bg_button_pane_cp05_ParamLimits

0xefef,	// (0x0001e3af) cell_graphic2_control_pane_g1_ParamLimits

0xf0dd,	// (0x0001e49d) cell_graphic2_catg_pane_ParamLimits

0xf0dd,	// (0x0001e49d) cell_graphic2_catg_pane

0x24f6,	// (0x000118b6) bg_button_pane_cp12

0xf0ef,	// (0x0001e4af) cell_graphic2_catg_pane_g1

0x9215,	// (0x000185d5) cell_tb_ext_pane_t1_ParamLimits

0x1f9d,	// (0x0001135d) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1f9d,	// (0x0001135d) vkb2_top_cell_right_narrow_pane

0x1fb5,	// (0x00011375) vkb2_top_cell_right_wide_pane_ParamLimits

0x1fb5,	// (0x00011375) vkb2_top_cell_right_wide_pane

0x169f,	// (0x00010a5f) bg_vkb2_func_pane_ParamLimits

0x169f,	// (0x00010a5f) bg_vkb2_func_pane

0x2026,	// (0x000113e6) vkb2_top_cell_left_pane_g1_ParamLimits

0x169f,	// (0x00010a5f) bg_vkb2_fuc_pane_cp03_ParamLimits

0x169f,	// (0x00010a5f) bg_vkb2_fuc_pane_cp03

0x2084,	// (0x00011444) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4b0b,	// (0x00013ecb) bg_vkb2_func_pane_g1

0x4b13,	// (0x00013ed3) bg_vkb2_func_pane_g2

0x4b23,	// (0x00013ee3) bg_vkb2_func_pane_g3

0x4b1b,	// (0x00013edb) bg_vkb2_func_pane_g4

0x4b2b,	// (0x00013eeb) bg_vkb2_func_pane_g5

0x4b33,	// (0x00013ef3) bg_vkb2_func_pane_g6

0x4b3b,	// (0x00013efb) bg_vkb2_func_pane_g7

0x4b43,	// (0x00013f03) bg_vkb2_func_pane_g8

0x4b03,	// (0x00013ec3) bg_vkb2_func_pane_g9

0x0008,

0xfdf6,	// (0x0001f1b6) bg_vkb2_func_pane_g

0x169f,	// (0x00010a5f) bg_vkb2_fuc_pane_cp01_ParamLimits

0x169f,	// (0x00010a5f) bg_vkb2_fuc_pane_cp01

0x2026,	// (0x000113e6) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2026,	// (0x000113e6) vkb2_top_cell_right_wide_pane_g1

0x169f,	// (0x00010a5f) bg_vkb2_fuc_pane_cp02_ParamLimits

0x169f,	// (0x00010a5f) bg_vkb2_fuc_pane_cp02

0x2084,	// (0x00011444) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2084,	// (0x00011444) vkb2_top_cell_right_narrow_pane_g1

0xe61a,	// (0x0001d9da) aid_touch_area_decrease_ParamLimits

0xe61a,	// (0x0001d9da) aid_touch_area_decrease

0xe64e,	// (0x0001da0e) aid_touch_area_increase_ParamLimits

0xe64e,	// (0x0001da0e) aid_touch_area_increase

0xe676,	// (0x0001da36) aid_touch_area_mute_ParamLimits

0xe676,	// (0x0001da36) aid_touch_area_mute

0xe6a6,	// (0x0001da66) aid_touch_area_slider_ParamLimits

0xe6a6,	// (0x0001da66) aid_touch_area_slider

0xe6e6,	// (0x0001daa6) popup_slider_window_g4_ParamLimits

0xe6e6,	// (0x0001daa6) popup_slider_window_g4

0xe70e,	// (0x0001dace) popup_slider_window_g5_ParamLimits

0xe70e,	// (0x0001dace) popup_slider_window_g5

0xe742,	// (0x0001db02) popup_slider_window_g6_ParamLimits

0xe742,	// (0x0001db02) popup_slider_window_g6

0x8ff3,	// (0x000183b3) popup_slider_window_t2_ParamLimits

0x8ff3,	// (0x000183b3) popup_slider_window_t2

0x0001,

0xfcf2,	// (0x0001f0b2) popup_slider_window_t_ParamLimits

0xfcf2,	// (0x0001f0b2) popup_slider_window_t

0xe75e,	// (0x0001db1e) slider_pane_ParamLimits

0xe75e,	// (0x0001db1e) slider_pane

0x9d1a,	// (0x000190da) slider_pane_g1_ParamLimits

0x9d1a,	// (0x000190da) slider_pane_g1

0x9d2e,	// (0x000190ee) slider_pane_g2_ParamLimits

0x9d2e,	// (0x000190ee) slider_pane_g2

0x9d44,	// (0x00019104) slider_pane_g3_ParamLimits

0x9d44,	// (0x00019104) slider_pane_g3

0x0003,

0xfe09,	// (0x0001f1c9) slider_pane_g_ParamLimits

0xfe09,	// (0x0001f1c9) slider_pane_g

0xc0e8,	// (0x0001b4a8) popup_tb_float_extension_window_ParamLimits

0xc0e8,	// (0x0001b4a8) popup_tb_float_extension_window

0x9d70,	// (0x00019130) aid_size_cell_tb_float_ext

0x24f6,	// (0x000118b6) bg_popup_sub_window_cp28

0x9d7c,	// (0x0001913c) grid_tb_float_ext_pane

0x9d86,	// (0x00019146) cell_tb_float_ext_pane_ParamLimits

0x9d86,	// (0x00019146) cell_tb_float_ext_pane

0x9da0,	// (0x00019160) cell_tb_float_ext_pane_g1

0x9da9,	// (0x00019169) grid_highlight_pane_cp12

0xc211,	// (0x0001b5d1) cell_last_hwr_side_pane_ParamLimits

0xc211,	// (0x0001b5d1) cell_last_hwr_side_pane

0x760a,	// (0x000169ca) cell_last_hwr_side_pane_g1

0x9db2,	// (0x00019172) cell_last_hwr_side_pane_g2

0x0001,

0xfe12,	// (0x0001f1d2) cell_last_hwr_side_pane_g

0xc58f,	// (0x0001b94f) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc58f,	// (0x0001b94f) vkb2_area_bottom_space_btn_pane

0x1904,	// (0x00010cc4) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9865,	// (0x00018c25) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x21e2,	// (0x000115a2) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2201,	// (0x000115c1) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2201,	// (0x000115c1) vkb2_area_bottom_space_btn_pane_g1

0x223b,	// (0x000115fb) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x223b,	// (0x000115fb) vkb2_area_bottom_space_btn_pane_g2

0x2271,	// (0x00011631) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2271,	// (0x00011631) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe17,	// (0x0001f1d7) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe17,	// (0x0001f1d7) vkb2_area_bottom_space_btn_pane_g

0x1762,	// (0x00010b22) cel_fep_hwr_func_pane_ParamLimits

0x1762,	// (0x00010b22) cel_fep_hwr_func_pane

0xc1e6,	// (0x0001b5a6) cell_hwr_side_button_pane_ParamLimits

0xc1e6,	// (0x0001b5a6) cell_hwr_side_button_pane

0x9249,	// (0x00018609) aid_area_touch_clock_ParamLimits

0x288d,	// (0x00011c4d) bg_uniindi_top_pane_ParamLimits

0x925b,	// (0x0001861b) uniindi_top_pane_g1_ParamLimits

0x9271,	// (0x00018631) uniindi_top_pane_g2_ParamLimits

0x927d,	// (0x0001863d) uniindi_top_pane_g3_ParamLimits

0x928e,	// (0x0001864e) uniindi_top_pane_g4_ParamLimits

0xfd2a,	// (0x0001f0ea) uniindi_top_pane_g_ParamLimits

0x929b,	// (0x0001865b) uniindi_top_pane_t1_ParamLimits

0x288d,	// (0x00011c4d) bg_vkb2_func_pane_cp01_ParamLimits

0x288d,	// (0x00011c4d) bg_vkb2_func_pane_cp01

0x9dbb,	// (0x0001917b) cel_fep_hwr_func_pane_g1_ParamLimits

0x9dbb,	// (0x0001917b) cel_fep_hwr_func_pane_g1

0x288d,	// (0x00011c4d) bg_vkb2_func_pane_cp02_ParamLimits

0x288d,	// (0x00011c4d) bg_vkb2_func_pane_cp02

0x9dbb,	// (0x0001917b) cell_hwr_side_button_pane_g1_ParamLimits

0x9dbb,	// (0x0001917b) cell_hwr_side_button_pane_g1

0x4956,	// (0x00013d16) status_pane_g4_ParamLimits

0x4956,	// (0x00013d16) status_pane_g4

0x4970,	// (0x00013d30) status_pane_t1

0x7344,	// (0x00016704) form2_midp_gauge_slider_cont_pane

0x734c,	// (0x0001670c) form2_midp_gauge_slider_pane_t1_ParamLimits

0xde57,	// (0x0001d217) form2_midp_gauge_slider_pane_t2_ParamLimits

0xde69,	// (0x0001d229) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaea,	// (0x0001eeaa) form2_midp_gauge_slider_pane_t_ParamLimits

0x7382,	// (0x00016742) form2_midp_slider_pane_ParamLimits

0x1bbb,	// (0x00010f7b) aid_size_cell_func_vkb2_ParamLimits

0x1bbb,	// (0x00010f7b) aid_size_cell_func_vkb2

0x9d5c,	// (0x0001911c) slider_pane_g4_ParamLimits

0x9d5c,	// (0x0001911c) slider_pane_g4

0xc5f0,	// (0x0001b9b0) form2_midp_gauge_slider_pane_t2_cp01

0xc5fe,	// (0x0001b9be) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc5fe,	// (0x0001b9be) form2_midp_gauge_slider_pane_t3_cp01

0x22e6,	// (0x000116a6) form2_midp_slider_pane_cp01

0x24f6,	// (0x000118b6) navi_smil_pane

0x9df4,	// (0x000191b4) navi_smil_pane_g1

0x9dfc,	// (0x000191bc) navi_smil_pane_t1

0x9dc9,	// (0x00019189) form2_midp_slider_pane_g1

0x9dd2,	// (0x00019192) form2_midp_slider_pane_g2

0x9dda,	// (0x0001919a) form2_midp_slider_pane_g3

0x9dc9,	// (0x00019189) form2_midp_slider_pane_g4

0xf0f8,	// (0x0001e4b8) form2_midp_slider_pane_g5

0x0004,

0xfe20,	// (0x0001f1e0) form2_midp_slider_pane_g

0x22ab,	// (0x0001166b) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x22ab,	// (0x0001166b) vkb2_area_bottom_space_btn_pane_g4

0xd4d4,	// (0x0001c894) lc0_navi_pane_ParamLimits

0xd4d4,	// (0x0001c894) lc0_navi_pane

0xd53e,	// (0x0001c8fe) lc0_stat_indi_pane_ParamLimits

0xd53e,	// (0x0001c8fe) lc0_stat_indi_pane

0xd553,	// (0x0001c913) ls0_title_pane_ParamLimits

0xd553,	// (0x0001c913) ls0_title_pane

0x33eb,	// (0x000127ab) bg_popup_sub_pane_cp14_ParamLimits

0x9230,	// (0x000185f0) list_uniindi_pane_ParamLimits

0x923c,	// (0x000185fc) uniindi_top_pane_ParamLimits

0x92d8,	// (0x00018698) list_single_uniindi_pane_g1_ParamLimits

0x92eb,	// (0x000186ab) list_single_uniindi_pane_t1_ParamLimits

0xc61b,	// (0x0001b9db) lc0_stat_clock_pane_ParamLimits

0xc61b,	// (0x0001b9db) lc0_stat_clock_pane

0xf103,	// (0x0001e4c3) lc0_stat_indi_pane_g1_ParamLimits

0xf103,	// (0x0001e4c3) lc0_stat_indi_pane_g1

0xf110,	// (0x0001e4d0) lc0_stat_indi_pane_g2_ParamLimits

0xf110,	// (0x0001e4d0) lc0_stat_indi_pane_g2

0x0001,

0xfe2b,	// (0x0001f1eb) lc0_stat_indi_pane_g_ParamLimits

0xfe2b,	// (0x0001f1eb) lc0_stat_indi_pane_g

0xc628,	// (0x0001b9e8) lc0_uni_indicator_pane_ParamLimits

0xc628,	// (0x0001b9e8) lc0_uni_indicator_pane

0xf11d,	// (0x0001e4dd) ls0_title_pane_g1_ParamLimits

0xf11d,	// (0x0001e4dd) ls0_title_pane_g1

0xf131,	// (0x0001e4f1) ls0_title_pane_t1_ParamLimits

0xf131,	// (0x0001e4f1) ls0_title_pane_t1

0xc635,	// (0x0001b9f5) lc0_uni_indicator_pane_g1_ParamLimits

0xc635,	// (0x0001b9f5) lc0_uni_indicator_pane_g1

0x9e6e,	// (0x0001922e) lc0_stat_clock_pane_t1

0x0307,	// (0x0000f6c7) main_ai5_pane

0x9e7c,	// (0x0001923c) ai5_sk_pane_ParamLimits

0x9e7c,	// (0x0001923c) ai5_sk_pane

0xf15f,	// (0x0001e51f) cell_ai5_widget_pane_ParamLimits

0xf15f,	// (0x0001e51f) cell_ai5_widget_pane

0x9f3f,	// (0x000192ff) aid_size_cell_widget_grid

0x9f55,	// (0x00019315) bg_ai5_widget_pane_ParamLimits

0x9f55,	// (0x00019315) bg_ai5_widget_pane

0x9fc9,	// (0x00019389) cell_ai5_widget_pane_g2

0x9fd9,	// (0x00019399) cell_ai5_widget_pane_g3

0x9ff0,	// (0x000193b0) cell_ai5_widget_pane_g4

0x9ffc,	// (0x000193bc) cell_ai5_widget_pane_g5

0xa008,	// (0x000193c8) cell_ai5_widget_pane_g6

0xa014,	// (0x000193d4) cell_ai5_widget_pane_g7

0xa05c,	// (0x0001941c) cell_ai5_widget_pane_t1_ParamLimits

0xa05c,	// (0x0001941c) cell_ai5_widget_pane_t1

0xa079,	// (0x00019439) cell_ai5_widget_pane_t2_ParamLimits

0xa079,	// (0x00019439) cell_ai5_widget_pane_t2

0xa091,	// (0x00019451) cell_ai5_widget_pane_t3_ParamLimits

0xa091,	// (0x00019451) cell_ai5_widget_pane_t3

0xa0a9,	// (0x00019469) cell_ai5_widget_pane_t4_ParamLimits

0xa0a9,	// (0x00019469) cell_ai5_widget_pane_t4

0xa0c6,	// (0x00019486) cell_ai5_widget_pane_t5_ParamLimits

0xa0c6,	// (0x00019486) cell_ai5_widget_pane_t5

0xa0e5,	// (0x000194a5) cell_ai5_widget_pane_t6_ParamLimits

0xa0e5,	// (0x000194a5) cell_ai5_widget_pane_t6

0xa0f7,	// (0x000194b7) cell_ai5_widget_pane_t7_ParamLimits

0xa0f7,	// (0x000194b7) cell_ai5_widget_pane_t7

0xa110,	// (0x000194d0) cell_ai5_widget_pane_t8_ParamLimits

0xa110,	// (0x000194d0) cell_ai5_widget_pane_t8

0x0009,

0xfe45,	// (0x0001f205) cell_ai5_widget_pane_t_ParamLimits

0xfe45,	// (0x0001f205) cell_ai5_widget_pane_t

0xa164,	// (0x00019524) grid_ai5_widget_pane

0x33eb,	// (0x000127ab) highlight_cell_ai5_widget_pane_ParamLimits

0x33eb,	// (0x000127ab) highlight_cell_ai5_widget_pane

0xf1c9,	// (0x0001e589) ai5_sk_left_pane

0xf1d3,	// (0x0001e593) ai5_sk_middle_pane

0xf1dd,	// (0x0001e59d) ai5_sk_right_pane

0xa19a,	// (0x0001955a) bg_ai5_widget_pane_g1_ParamLimits

0xa19a,	// (0x0001955a) bg_ai5_widget_pane_g1

0xa1a6,	// (0x00019566) bg_ai5_widget_pane_g2_ParamLimits

0xa1a6,	// (0x00019566) bg_ai5_widget_pane_g2

0xa1b2,	// (0x00019572) bg_ai5_widget_pane_g3_ParamLimits

0xa1b2,	// (0x00019572) bg_ai5_widget_pane_g3

0xa1be,	// (0x0001957e) bg_ai5_widget_pane_g4_ParamLimits

0xa1be,	// (0x0001957e) bg_ai5_widget_pane_g4

0xa1ca,	// (0x0001958a) bg_ai5_widget_pane_g5_ParamLimits

0xa1ca,	// (0x0001958a) bg_ai5_widget_pane_g5

0xa1d6,	// (0x00019596) bg_ai5_widget_pane_g6_ParamLimits

0xa1d6,	// (0x00019596) bg_ai5_widget_pane_g6

0xa1e2,	// (0x000195a2) bg_ai5_widget_pane_g7_ParamLimits

0xa1e2,	// (0x000195a2) bg_ai5_widget_pane_g7

0xa1ee,	// (0x000195ae) bg_ai5_widget_pane_g8_ParamLimits

0xa1ee,	// (0x000195ae) bg_ai5_widget_pane_g8

0xa1fa,	// (0x000195ba) bg_ai5_widget_pane_g9_ParamLimits

0xa1fa,	// (0x000195ba) bg_ai5_widget_pane_g9

0x0008,

0xfe5a,	// (0x0001f21a) bg_ai5_widget_pane_g_ParamLimits

0xfe5a,	// (0x0001f21a) bg_ai5_widget_pane_g

0xa22c,	// (0x000195ec) cell_shortcut_ai5_widget_pane_ParamLimits

0xa22c,	// (0x000195ec) cell_shortcut_ai5_widget_pane

0x427b,	// (0x0001363b) bg_cell_shortcut_ai5_widget_pane

0xa23d,	// (0x000195fd) cell_grid_ai5_widget_pane_g1

0xa246,	// (0x00019606) highlight_cell_shortcut_ai5_widget_pane

0x4b0b,	// (0x00013ecb) ai5_sk_left_pane_g1

0xa24e,	// (0x0001960e) ai5_sk_left_pane_g2

0xa256,	// (0x00019616) ai5_sk_left_pane_g3

0xa25e,	// (0x0001961e) ai5_sk_left_pane_g4

0x0003,

0xfe6d,	// (0x0001f22d) ai5_sk_left_pane_g

0xa266,	// (0x00019626) ai5_sk_left_pane_t1

0x4b13,	// (0x00013ed3) ai5_sk_right_pane_g1

0xa274,	// (0x00019634) ai5_sk_right_pane_g2

0xa27c,	// (0x0001963c) ai5_sk_right_pane_g3

0xa284,	// (0x00019644) ai5_sk_right_pane_g4

0x0003,

0xfe76,	// (0x0001f236) ai5_sk_right_pane_g

0xa28c,	// (0x0001964c) ai5_sk_right_pane_t1

0x4b13,	// (0x00013ed3) ai5_sk_middle_pane_g1

0x4b0b,	// (0x00013ecb) ai5_sk_middle_pane_g2

0x4b2b,	// (0x00013eeb) ai5_sk_middle_pane_g3

0xa27c,	// (0x0001963c) ai5_sk_middle_pane_g4

0xa256,	// (0x00019616) ai5_sk_middle_pane_g5

0xa29a,	// (0x0001965a) ai5_sk_middle_pane_g6

0xf1e7,	// (0x0001e5a7) ai5_sk_middle_pane_g7

0x0006,

0xfe7f,	// (0x0001f23f) ai5_sk_middle_pane_g

0xd3c0,	// (0x0001c780) aid_touch_area_size_lc0_ParamLimits

0xd3c0,	// (0x0001c780) aid_touch_area_size_lc0

0x1933,	// (0x00010cf3) cell_hwr_candidate_pane_t1_ParamLimits

0x462d,	// (0x000139ed) aid_touch_navi_pane

0xd64c,	// (0x0001ca0c) status_dt_navi_pane_ParamLimits

0xd64c,	// (0x0001ca0c) status_dt_navi_pane

0xd664,	// (0x0001ca24) status_dt_sta_pane_ParamLimits

0xd664,	// (0x0001ca24) status_dt_sta_pane

0xf1ef,	// (0x0001e5af) dt_sta_controll_pane

0xf1fc,	// (0x0001e5bc) dt_sta_indi_pane

0xf209,	// (0x0001e5c9) dt_sta_title_pane

0x288d,	// (0x00011c4d) bg_dt_sta_indi_pane_ParamLimits

0x288d,	// (0x00011c4d) bg_dt_sta_indi_pane

0xf21b,	// (0x0001e5db) dt_sta_battery_pane

0xf223,	// (0x0001e5e3) dt_sta_indi_pane_g1

0xa2ec,	// (0x000196ac) dt_sta_indi_pane_g2

0xa2f5,	// (0x000196b5) dt_sta_indi_pane_g3

0x0002,

0xfe8e,	// (0x0001f24e) dt_sta_indi_pane_g

0xa2fe,	// (0x000196be) dt_sta_signal_pane

0x33eb,	// (0x000127ab) bg_dt_sta_title_pane_ParamLimits

0x33eb,	// (0x000127ab) bg_dt_sta_title_pane

0xa307,	// (0x000196c7) dt_sta_title_pane_g1

0xa30f,	// (0x000196cf) dt_sta_title_pane_t1_ParamLimits

0xa30f,	// (0x000196cf) dt_sta_title_pane_t1

0x24f6,	// (0x000118b6) bg_dt_sta_control_pane

0xf22c,	// (0x0001e5ec) dt_sta_controll_pane_g1

0xa32d,	// (0x000196ed) bg_dt_sta_title_pane_g1

0xa336,	// (0x000196f6) bg_dt_sta_title_pane_g2

0xa33f,	// (0x000196ff) bg_dt_sta_title_pane_g3

0x0002,

0xfe95,	// (0x0001f255) bg_dt_sta_title_pane_g

0x760a,	// (0x000169ca) bg_dt_sta_indi_pane_g1

0xa348,	// (0x00019708) dt_sta_signal_pane_g1

0xa350,	// (0x00019710) dt_sta_signal_pane_g2

0x0001,

0xfe9c,	// (0x0001f25c) dt_sta_signal_pane_g

0xa358,	// (0x00019718) dt_sta_battery_pane_g1

0xa361,	// (0x00019721) dt_sta_battery_pane_t1

0x760a,	// (0x000169ca) bg_dt_sta_control_pane_g1

0x3cf6,	// (0x000130b6) fep_china_uni_eep_pane

0x3cfe,	// (0x000130be) fep_china_uni_entry_pane_ParamLimits

0x3d0e,	// (0x000130ce) popup_fep_china_uni_window_g1_ParamLimits

0x3d1e,	// (0x000130de) popup_fep_china_uni_window_g2_ParamLimits

0x3d1e,	// (0x000130de) popup_fep_china_uni_window_g2

0x0001,

0xf71e,	// (0x0001eade) popup_fep_china_uni_window_g_ParamLimits

0xf71e,	// (0x0001eade) popup_fep_china_uni_window_g

0xa370,	// (0x00019730) fep_china_uni_eep_pane_g1

0xa378,	// (0x00019738) fep_china_uni_eep_pane_t1

0x9deb,	// (0x000191ab) aid_touch_area_size_smil_player

0x477d,	// (0x00013b3d) lc0_clock_pane

0x4964,	// (0x00013d24) status_pane_g5_ParamLimits

0x4964,	// (0x00013d24) status_pane_g5

0xbc6a,	// (0x0001b02a) popup_keymap_window

0x4922,	// (0x00013ce2) status_icon_pane

0x9fd9,	// (0x00019399) cell_ai5_widget_pane_g3_ParamLimits

0x9ff0,	// (0x000193b0) cell_ai5_widget_pane_g4_ParamLimits

0x9ffc,	// (0x000193bc) cell_ai5_widget_pane_g5_ParamLimits

0xa020,	// (0x000193e0) cell_ai5_widget_pane_g8_ParamLimits

0xa020,	// (0x000193e0) cell_ai5_widget_pane_g8

0xa034,	// (0x000193f4) cell_ai5_widget_pane_g9_ParamLimits

0xa034,	// (0x000193f4) cell_ai5_widget_pane_g9

0xa048,	// (0x00019408) cell_ai5_widget_pane_g10_ParamLimits

0xa048,	// (0x00019408) cell_ai5_widget_pane_g10

0xa387,	// (0x00019747) status_icon_pane_g1

0x24f6,	// (0x000118b6) bg_popup_sub_pane_cp13

0xa38f,	// (0x0001974f) popup_keymap_window_t1

0xd326,	// (0x0001c6e6) control_pane_g6_ParamLimits

0xd326,	// (0x0001c6e6) control_pane_g6

0xd333,	// (0x0001c6f3) control_pane_g7_ParamLimits

0xd333,	// (0x0001c6f3) control_pane_g7

0xd340,	// (0x0001c700) control_pane_g8_ParamLimits

0xd340,	// (0x0001c700) control_pane_g8

0xf1ef,	// (0x0001e5af) dt_sta_controll_pane_ParamLimits

0xf1fc,	// (0x0001e5bc) dt_sta_indi_pane_ParamLimits

0xf209,	// (0x0001e5c9) dt_sta_title_pane_ParamLimits

0x2da8,	// (0x00012168) aid_size_touch_scroll_bar_cale

0x03e0,	// (0x0000f7a0) popup_discreet_window_ParamLimits

0x03e0,	// (0x0000f7a0) popup_discreet_window

0xb85a,	// (0x0001ac1a) popup_sk_window

0x5280,	// (0x00014640) bg_popup_sub_pane_cp28_ParamLimits

0x5280,	// (0x00014640) bg_popup_sub_pane_cp28

0xa39d,	// (0x0001975d) popup_discreet_window_g1_ParamLimits

0xa39d,	// (0x0001975d) popup_discreet_window_g1

0xa3bd,	// (0x0001977d) popup_discreet_window_t1_ParamLimits

0xa3bd,	// (0x0001977d) popup_discreet_window_t1

0xa3db,	// (0x0001979b) popup_discreet_window_t2_ParamLimits

0xa3db,	// (0x0001979b) popup_discreet_window_t2

0x0002,

0xfea1,	// (0x0001f261) popup_discreet_window_t_ParamLimits

0xfea1,	// (0x0001f261) popup_discreet_window_t

0x231d,	// (0x000116dd) popup_sk_window_g1

0x2327,	// (0x000116e7) popup_sk_window_g2

0x0001,

0xfea8,	// (0x0001f268) popup_sk_window_g

0x2331,	// (0x000116f1) popup_sk_window_t1

0x233f,	// (0x000116ff) popup_sk_window_t1_copy1

0x9fc9,	// (0x00019389) cell_ai5_widget_pane_g2_ParamLimits

0xa122,	// (0x000194e2) cell_ai5_widget_pane_t9_ParamLimits

0xa122,	// (0x000194e2) cell_ai5_widget_pane_t9

0x24f6,	// (0x000118b6) main_fep_fshwr2_pane

0xc65c,	// (0x0001ba1c) aid_fshwr2_btn_pane

0xc66d,	// (0x0001ba2d) aid_fshwr2_syb_pane

0xc67e,	// (0x0001ba3e) aid_fshwr2_txt_pane

0xc68a,	// (0x0001ba4a) fshwr2_func_candi_pane

0xc6a9,	// (0x0001ba69) fshwr2_hwr_syb_pane

0xc6c4,	// (0x0001ba84) fshwr2_icf_pane

0x24f6,	// (0x000118b6) fshwr2_icf_bg_pane

0xa42d,	// (0x000197ed) fshwr2_icf_pane_t1_ParamLimits

0xa42d,	// (0x000197ed) fshwr2_icf_pane_t1

0x3be4,	// (0x00012fa4) fshwr2_func_candi_pane_g1

0xf235,	// (0x0001e5f5) fshwr2_func_candi_row_pane_ParamLimits

0xf235,	// (0x0001e5f5) fshwr2_func_candi_row_pane

0xf24d,	// (0x0001e60d) cell_fshwr2_syb_pane_ParamLimits

0xf24d,	// (0x0001e60d) cell_fshwr2_syb_pane

0x7888,	// (0x00016c48) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7888,	// (0x00016c48) fshwr2_hwr_syb_pane_g1

0x24f6,	// (0x000118b6) bg_popup_call_pane_cp01

0xf267,	// (0x0001e627) fshwr2_func_candi_cell_pane_ParamLimits

0xf267,	// (0x0001e627) fshwr2_func_candi_cell_pane

0xa49a,	// (0x0001985a) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa49a,	// (0x0001985a) fshwr2_func_candi_cell_bg_pane

0xf292,	// (0x0001e652) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xf292,	// (0x0001e652) fshwr2_func_candi_cell_pane_g1

0xa4ce,	// (0x0001988e) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa4ce,	// (0x0001988e) fshwr2_func_candi_cell_pane_t1

0x24f6,	// (0x000118b6) bg_button_pane_cp08

0x427b,	// (0x0001363b) cell_fshwr2_syb_bg_pane

0xf2ba,	// (0x0001e67a) cell_fshwr2_syb_bg_pane_g1

0xf2c2,	// (0x0001e682) cell_fshwr2_syb_bg_pane_t1

0x33eb,	// (0x000127ab) main_tmo_pane

0xd947,	// (0x0001cd07) uni_indicator_pane_g1_ParamLimits

0xd95e,	// (0x0001cd1e) uni_indicator_pane_g2_ParamLimits

0xd974,	// (0x0001cd34) uni_indicator_pane_g3_ParamLimits

0x5dcb,	// (0x0001518b) uni_indicator_pane_g4_ParamLimits

0x5dcb,	// (0x0001518b) uni_indicator_pane_g4

0x5ddf,	// (0x0001519f) uni_indicator_pane_g5_ParamLimits

0x5ddf,	// (0x0001519f) uni_indicator_pane_g5

0x5ddf,	// (0x0001519f) uni_indicator_pane_g6_ParamLimits

0x5ddf,	// (0x0001519f) uni_indicator_pane_g6

0xf91d,	// (0x0001ecdd) uni_indicator_pane_g_ParamLimits

0xe5f6,	// (0x0001d9b6) popup_tmo_note_window_ParamLimits

0xe5f6,	// (0x0001d9b6) popup_tmo_note_window

0x1b9d,	// (0x00010f5d) fshwr2_bg_pane

0xf2ab,	// (0x0001e66b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xf2ab,	// (0x0001e66b) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfead,	// (0x0001f26d) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfead,	// (0x0001f26d) fshwr2_func_candi_cell_pane_g

0x760a,	// (0x000169ca) bg_popup_window_pane_cp01

0xa4f8,	// (0x000198b8) bg_popup_window_pane_g1_cp01

0xa501,	// (0x000198c1) bg_popup_window_pane_cp22_ParamLimits

0xa501,	// (0x000198c1) bg_popup_window_pane_cp22

0xa50f,	// (0x000198cf) listscroll_tmo_link_pane_ParamLimits

0xa50f,	// (0x000198cf) listscroll_tmo_link_pane

0xa54f,	// (0x0001990f) popup_tmo_note_window_g1_ParamLimits

0xa54f,	// (0x0001990f) popup_tmo_note_window_g1

0xa55c,	// (0x0001991c) tmo_note_info_pane_ParamLimits

0xa55c,	// (0x0001991c) tmo_note_info_pane

0xf2d1,	// (0x0001e691) list_tmo_note_info_pane_g1_ParamLimits

0xf2d1,	// (0x0001e691) list_tmo_note_info_pane_g1

0xa58d,	// (0x0001994d) list_tmo_note_info_pane_g2_ParamLimits

0xa58d,	// (0x0001994d) list_tmo_note_info_pane_g2

0x0001,

0xfeb2,	// (0x0001f272) list_tmo_note_info_pane_g_ParamLimits

0xfeb2,	// (0x0001f272) list_tmo_note_info_pane_g

0xa5a9,	// (0x00019969) list_tmo_note_info_text_pane_ParamLimits

0xa5a9,	// (0x00019969) list_tmo_note_info_text_pane

0xa62a,	// (0x000199ea) list_tmo_link_pane

0xa637,	// (0x000199f7) scroll_pane_cp20

0xa644,	// (0x00019a04) list_single_tmo_link_pane_ParamLimits

0xa644,	// (0x00019a04) list_single_tmo_link_pane

0xa654,	// (0x00019a14) list_single_tmo_link_pane_t1

0xa662,	// (0x00019a22) list_tmo_note_info_text_pane_t1_ParamLimits

0xa662,	// (0x00019a22) list_tmo_note_info_text_pane_t1

0xcff1,	// (0x0001c3b1) aid_size_touch_scroll_bar_cp01_ParamLimits

0xcff1,	// (0x0001c3b1) aid_size_touch_scroll_bar_cp01

0xcf21,	// (0x0001c2e1) aid_size_touch_slider_marker

0xb84a,	// (0x0001ac0a) popup_settings_window_ParamLimits

0xb84a,	// (0x0001ac0a) popup_settings_window

0x45dd,	// (0x0001399d) popup_candi_list_indi_window

0x462d,	// (0x000139ed) aid_touch_navi_pane_ParamLimits

0x1af8,	// (0x00010eb8) rs_clock_indi_pane

0x1b01,	// (0x00010ec1) sctrl_sk_bottom_pane_ParamLimits

0x1b12,	// (0x00010ed2) sctrl_sk_top_pane_ParamLimits

0x1c15,	// (0x00010fd5) popup_fep_tooltip_window

0x9f3f,	// (0x000192ff) aid_size_cell_widget_grid_ParamLimits

0x9fb4,	// (0x00019374) cell_ai5_widget_pane_g1_ParamLimits

0x9fb4,	// (0x00019374) cell_ai5_widget_pane_g1

0xa008,	// (0x000193c8) cell_ai5_widget_pane_g6_ParamLimits

0xa014,	// (0x000193d4) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe30,	// (0x0001f1f0) cell_ai5_widget_pane_g_ParamLimits

0xfe30,	// (0x0001f1f0) cell_ai5_widget_pane_g

0xa146,	// (0x00019506) cell_ai5_widget_pane_t10_ParamLimits

0xa146,	// (0x00019506) cell_ai5_widget_pane_t10

0xa164,	// (0x00019524) grid_ai5_widget_pane_ParamLimits

0xa206,	// (0x000195c6) cell_contacts_ai5_widget_pane_ParamLimits

0xa206,	// (0x000195c6) cell_contacts_ai5_widget_pane

0xa3f0,	// (0x000197b0) popup_discreet_window_t3_ParamLimits

0xa3f0,	// (0x000197b0) popup_discreet_window_t3

0xc6dc,	// (0x0001ba9c) popup_fshwr2_char_preview_window_ParamLimits

0xc6dc,	// (0x0001ba9c) popup_fshwr2_char_preview_window

0xf2e8,	// (0x0001e6a8) tmo_note_info_pane_t1

0xf2fd,	// (0x0001e6bd) tmo_note_info_pane_t2

0xf314,	// (0x0001e6d4) tmo_note_info_pane_t3

0xa606,	// (0x000199c6) tmo_note_info_pane_t4

0xa618,	// (0x000199d8) tmo_note_info_pane_t5

0x0004,

0xfeb7,	// (0x0001f277) tmo_note_info_pane_t

0xa62a,	// (0x000199ea) list_tmo_link_pane_ParamLimits

0xa637,	// (0x000199f7) scroll_pane_cp20_ParamLimits

0x24f6,	// (0x000118b6) bg_popup_fep_char_preview_window_cp01

0xa67b,	// (0x00019a3b) popup_fshwr2_char_preview_window_t1

0xa689,	// (0x00019a49) popup_candi_list_indi_window_g1

0xa692,	// (0x00019a52) bg_cell_contacts_ai5_widget_pane

0xa69e,	// (0x00019a5e) cell_contacts_ai5_widget_pane_g1

0x7e8f,	// (0x0001724f) cell_contacts_ai5_widget_pane_g2

0xa6b1,	// (0x00019a71) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec2,	// (0x0001f282) cell_contacts_ai5_widget_pane_g

0xa6c3,	// (0x00019a83) cell_contacts_ai5_widget_pane_t1

0x33eb,	// (0x000127ab) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf38e,	// (0x0001e74e) settings_container_pane

0x427b,	// (0x0001363b) listscroll_set_pane_copy1

0x6a60,	// (0x00015e20) scroll_pane_cp121_copy1

0xa746,	// (0x00019b06) set_content_pane_copy1

0xf39a,	// (0x0001e75a) aid_height_set_list_copy1_ParamLimits

0xf39a,	// (0x0001e75a) aid_height_set_list_copy1

0x5fff,	// (0x000153bf) aid_size_parent_copy1_ParamLimits

0x5fff,	// (0x000153bf) aid_size_parent_copy1

0xf3a6,	// (0x0001e766) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf3a6,	// (0x0001e766) button_value_adjust_pane_cp6_copy1

0x45c3,	// (0x00013983) list_highlight_pane_cp2_copy1_ParamLimits

0x45c3,	// (0x00013983) list_highlight_pane_cp2_copy1

0xf3ba,	// (0x0001e77a) list_set_pane_copy1_ParamLimits

0xf3ba,	// (0x0001e77a) list_set_pane_copy1

0xf329,	// (0x0001e6e9) main_pane_set_t1_copy1_ParamLimits

0xf329,	// (0x0001e6e9) main_pane_set_t1_copy1

0xf363,	// (0x0001e723) main_pane_set_t2_copy1_ParamLimits

0xf363,	// (0x0001e723) main_pane_set_t2_copy1

0xf467,	// (0x0001e827) main_pane_set_t3_copy1

0xf475,	// (0x0001e835) main_pane_set_t4_copy1

0xf382,	// (0x0001e742) set_content_pane_g1_copy1_ParamLimits

0xf382,	// (0x0001e742) set_content_pane_g1_copy1

0xf483,	// (0x0001e843) setting_code_pane_copy1

0xa83f,	// (0x00019bff) setting_slider_graphic_pane_copy1

0xa83f,	// (0x00019bff) setting_slider_pane_copy1

0xa83f,	// (0x00019bff) setting_text_pane_copy1

0xa83f,	// (0x00019bff) setting_volume_pane_copy1

0xf483,	// (0x0001e843) settings_code_pane_cp2_copy1

0xf48b,	// (0x0001e84b) settings_code_pane_cp_copy1_ParamLimits

0xf48b,	// (0x0001e84b) settings_code_pane_cp_copy1

0xc6f4,	// (0x0001bab4) volume_set_pane_copy1

0xf49f,	// (0x0001e85f) volume_set_pane_g10_copy1

0xf4a7,	// (0x0001e867) volume_set_pane_g1_copy1

0xf4af,	// (0x0001e86f) volume_set_pane_g2_copy1

0xf4b7,	// (0x0001e877) volume_set_pane_g3_copy1

0xf4bf,	// (0x0001e87f) volume_set_pane_g4_copy1

0xf4c7,	// (0x0001e887) volume_set_pane_g5_copy1

0xf4cf,	// (0x0001e88f) volume_set_pane_g6_copy1

0xf4d7,	// (0x0001e897) volume_set_pane_g7_copy1

0xf4df,	// (0x0001e89f) volume_set_pane_g8_copy1

0xf4e7,	// (0x0001e8a7) volume_set_pane_g9_copy1

0x25ea,	// (0x000119aa) bg_set_opt_pane_cp_copy1_ParamLimits

0x25ea,	// (0x000119aa) bg_set_opt_pane_cp_copy1

0x23d6,	// (0x00011796) setting_slider_pane_t1_copy1_ParamLimits

0x23d6,	// (0x00011796) setting_slider_pane_t1_copy1

0xc6fc,	// (0x0001babc) setting_slider_pane_t2_copy1_ParamLimits

0xc6fc,	// (0x0001babc) setting_slider_pane_t2_copy1

0xc716,	// (0x0001bad6) setting_slider_pane_t3_copy1_ParamLimits

0xc716,	// (0x0001bad6) setting_slider_pane_t3_copy1

0xc72e,	// (0x0001baee) slider_set_pane_copy1_ParamLimits

0xc72e,	// (0x0001baee) slider_set_pane_copy1

0x3514,	// (0x000128d4) set_opt_bg_pane_g1_copy2

0x351c,	// (0x000128dc) set_opt_bg_pane_g2_copy2

0xa8ab,	// (0x00019c6b) set_opt_bg_pane_g3_copy2

0x352c,	// (0x000128ec) set_opt_bg_pane_g4_copy2

0x3534,	// (0x000128f4) set_opt_bg_pane_g5_copy2

0x353c,	// (0x000128fc) set_opt_bg_pane_g6_copy2

0xf4ef,	// (0x0001e8af) set_opt_bg_pane_g7_copy2

0xa8bd,	// (0x00019c7d) set_opt_bg_pane_g8_copy2

0xa8c7,	// (0x00019c87) set_opt_bg_pane_g9_copy2

0xa8d1,	// (0x00019c91) aid_size_touch_slider_mark_copy1_ParamLimits

0xa8d1,	// (0x00019c91) aid_size_touch_slider_mark_copy1

0xa8e5,	// (0x00019ca5) slider_set_pane_g1_copy1

0xa8ee,	// (0x00019cae) slider_set_pane_g2_copy1

0x60cd,	// (0x0001548d) slider_set_pane_g3_copy1_ParamLimits

0x60cd,	// (0x0001548d) slider_set_pane_g3_copy1

0x60e1,	// (0x000154a1) slider_set_pane_g4_copy1_ParamLimits

0x60e1,	// (0x000154a1) slider_set_pane_g4_copy1

0x60f9,	// (0x000154b9) slider_set_pane_g5_copy1_ParamLimits

0x60f9,	// (0x000154b9) slider_set_pane_g5_copy1

0x60cd,	// (0x0001548d) slider_set_pane_g6_copy1_ParamLimits

0x60cd,	// (0x0001548d) slider_set_pane_g6_copy1

0xf4f7,	// (0x0001e8b7) slider_set_pane_g7_copy1_ParamLimits

0xf4f7,	// (0x0001e8b7) slider_set_pane_g7_copy1

0x250a,	// (0x000118ca) bg_set_opt_pane_cp2_copy1

0xa90c,	// (0x00019ccc) setting_slider_graphic_pane_g1_copy1

0xf50d,	// (0x0001e8cd) setting_slider_graphic_pane_t1_copy1

0xf51d,	// (0x0001e8dd) setting_slider_graphic_pane_t2_copy1

0xf52d,	// (0x0001e8ed) slider_set_pane_cp_copy1

0xa945,	// (0x00019d05) input_focus_pane_cp1_copy1

0xa94e,	// (0x00019d0e) list_set_text_pane_copy1

0xa956,	// (0x00019d16) setting_text_pane_g1_copy1

0x2643,	// (0x00011a03) set_text_pane_t1_copy1

0xa945,	// (0x00019d05) input_focus_pane_cp2_copy1

0xa956,	// (0x00019d16) setting_code_pane_g1_copy1

0xf535,	// (0x0001e8f5) setting_code_pane_t1_copy1

0x688b,	// (0x00015c4b) list_set_graphic_pane_copy1

0x250a,	// (0x000118ca) bg_set_opt_pane_cp4_copy1

0xd255,	// (0x0001c615) list_set_graphic_pane_g1_copy1_ParamLimits

0xd255,	// (0x0001c615) list_set_graphic_pane_g1_copy1

0xf543,	// (0x0001e903) list_set_graphic_pane_g2_copy1

0xd26d,	// (0x0001c62d) list_set_graphic_pane_t1_copy1_ParamLimits

0xd26d,	// (0x0001c62d) list_set_graphic_pane_t1_copy1

0x760a,	// (0x000169ca) rs_clock_indi_pane_g1

0xa987,	// (0x00019d47) rs_clock_indi_pane_t1

0xa995,	// (0x00019d55) rs_indi_pane

0xa99d,	// (0x00019d5d) rs_indi_pane_g1

0xa9a6,	// (0x00019d66) rs_indi_pane_g2

0xa9af,	// (0x00019d6f) rs_indi_pane_g3

0x0002,

0xfec9,	// (0x0001f289) rs_indi_pane_g

0x427b,	// (0x0001363b) bg_popup_preview_window_pane_cp03

0xa9b8,	// (0x00019d78) popup_fep_tooltip_window_t1

0x8482,	// (0x00017842) popup_note2_window_g2_ParamLimits

0x8482,	// (0x00017842) popup_note2_window_g2

0x0001,

0xfc62,	// (0x0001f022) popup_note2_window_g_ParamLimits

0xfc62,	// (0x0001f022) popup_note2_window_g

0x8a60,	// (0x00017e20) bg_popup_sub_pane_cp11_ParamLimits

0x8a6d,	// (0x00017e2d) cell_ai3_links_pane_g1_ParamLimits

0x8a84,	// (0x00017e44) cell_ai3_links_pane_t1

0x2643,	// (0x00011a03) set_text_pane_t1_copy1_ParamLimits

0x418c,	// (0x0001354c) cell_graphic_popup_pane_cp2_ParamLimits

0x418c,	// (0x0001354c) cell_graphic_popup_pane_cp2

0xa9c6,	// (0x00019d86) cell_graphic_popup_pane_g1_cp2

0x2bbb,	// (0x00011f7b) cell_graphic_popup_pane_g2_cp2

0xa9ce,	// (0x00019d8e) cell_graphic_popup_pane_g3_cp2

0xa9d6,	// (0x00019d96) cell_graphic_popup_pane_t2_cp2

0x2bcc,	// (0x00011f8c) grid_highlight_pane_cp3_cp2

0x3905,	// (0x00012cc5) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x33eb,	// (0x000127ab) main_tmo_pane_ParamLimits

0xe5ea,	// (0x0001d9aa) popup_tmo_big_image_note_window

0x9fa3,	// (0x00019363) cell_ai5_widget_list_pane

0x9fab,	// (0x0001936b) cell_ai5_widget_lrg_icon_pane

0xf2e8,	// (0x0001e6a8) tmo_note_info_pane_t1_ParamLimits

0xf2fd,	// (0x0001e6bd) tmo_note_info_pane_t2_ParamLimits

0xf314,	// (0x0001e6d4) tmo_note_info_pane_t3_ParamLimits

0xa606,	// (0x000199c6) tmo_note_info_pane_t4_ParamLimits

0xa618,	// (0x000199d8) tmo_note_info_pane_t5_ParamLimits

0xfeb7,	// (0x0001f277) tmo_note_info_pane_t_ParamLimits

0xf38e,	// (0x0001e74e) settings_container_pane_ParamLimits

0xa93d,	// (0x00019cfd) indicator_popup_pane_cp5

0xa93d,	// (0x00019cfd) indicator_popup_pane_cp6

0x688b,	// (0x00015c4b) list_set_graphic_pane_copy1_ParamLimits

0x24f6,	// (0x000118b6) bg_popup_window_pane_cp23

0xa9e4,	// (0x00019da4) popup_tmo_big_image_note_window_g1

0xa9ee,	// (0x00019dae) popup_tmo_big_image_note_window_t1

0xa9fe,	// (0x00019dbe) popup_tmo_big_image_note_window_t2

0xaa0e,	// (0x00019dce) popup_tmo_big_image_note_window_t3

0x0002,

0xfed0,	// (0x0001f290) popup_tmo_big_image_note_window_t

0x760a,	// (0x000169ca) cell_ai5_widget_lrg_icon_pane_g1

0xaa1e,	// (0x00019dde) cell_ai5_widget_lrg_icon_pane_t1

0xaa2c,	// (0x00019dec) cell_ai5_widget_list_row_pane_ParamLimits

0xaa2c,	// (0x00019dec) cell_ai5_widget_list_row_pane

0xaa45,	// (0x00019e05) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xaa45,	// (0x00019e05) cell_ai5_widget_list_row_pane_g1

0xaa52,	// (0x00019e12) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xaa52,	// (0x00019e12) cell_ai5_widget_list_row_pane_t1

0xaa83,	// (0x00019e43) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xaa83,	// (0x00019e43) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed7,	// (0x0001f297) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed7,	// (0x0001f297) cell_ai5_widget_list_row_pane_t

0x0307,	// (0x0000f6c7) main_fep_vtchi_ss_pane

0x244b,	// (0x0001180b) popup_fep_char_pre_window

0x2453,	// (0x00011813) popup_fep_ituss_window

0x2474,	// (0x00011834) popup_fep_vkbss_window

0xaaab,	// (0x00019e6b) grid_vkbss_keypad_pane_ParamLimits

0xaaab,	// (0x00019e6b) grid_vkbss_keypad_pane

0xaabb,	// (0x00019e7b) ituss_keypad_pane

0x249f,	// (0x0001185f) aid_vkbss_key_offset_ParamLimits

0x249f,	// (0x0001185f) aid_vkbss_key_offset

0x24ab,	// (0x0001186b) cell_vkbss_key_pane_ParamLimits

0x24ab,	// (0x0001186b) cell_vkbss_key_pane

0xaacb,	// (0x00019e8b) bg_cell_vkbss_key_g1_ParamLimits

0xaacb,	// (0x00019e8b) bg_cell_vkbss_key_g1

0xaad7,	// (0x00019e97) cell_vkbss_key_3p_pane_ParamLimits

0xaad7,	// (0x00019e97) cell_vkbss_key_3p_pane

0xaaf1,	// (0x00019eb1) cell_vkbss_key_g1_ParamLimits

0xaaf1,	// (0x00019eb1) cell_vkbss_key_g1

0xab0b,	// (0x00019ecb) cell_vkbss_key_t1_ParamLimits

0xab0b,	// (0x00019ecb) cell_vkbss_key_t1

0x24c1,	// (0x00011881) cell_ituss_key_pane_ParamLimits

0x24c1,	// (0x00011881) cell_ituss_key_pane

0xab36,	// (0x00019ef6) bg_cell_ituss_key_g1_ParamLimits

0xab36,	// (0x00019ef6) bg_cell_ituss_key_g1

0xab42,	// (0x00019f02) cell_ituss_key_pane_g1_ParamLimits

0xab42,	// (0x00019f02) cell_ituss_key_pane_g1

0xab5c,	// (0x00019f1c) cell_ituss_key_pane_g2_ParamLimits

0xab5c,	// (0x00019f1c) cell_ituss_key_pane_g2

0x0001,

0xfede,	// (0x0001f29e) cell_ituss_key_pane_g_ParamLimits

0xfede,	// (0x0001f29e) cell_ituss_key_pane_g

0xab8a,	// (0x00019f4a) cell_ituss_key_t1_ParamLimits

0xab8a,	// (0x00019f4a) cell_ituss_key_t1

0xabc4,	// (0x00019f84) cell_ituss_key_t2_ParamLimits

0xabc4,	// (0x00019f84) cell_ituss_key_t2

0xabf5,	// (0x00019fb5) cell_ituss_key_t3_ParamLimits

0xabf5,	// (0x00019fb5) cell_ituss_key_t3

0xac2f,	// (0x00019fef) cell_ituss_key_t4_ParamLimits

0xac2f,	// (0x00019fef) cell_ituss_key_t4

0x0003,

0xfee3,	// (0x0001f2a3) cell_ituss_key_t_ParamLimits

0xfee3,	// (0x0001f2a3) cell_ituss_key_t

0xac69,	// (0x0001a029) cell_vkbss_key_3p_pane_g1

0xac71,	// (0x0001a031) cell_vkbss_key_3p_pane_g2

0xac79,	// (0x0001a039) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeec,	// (0x0001f2ac) cell_vkbss_key_3p_pane_g

0x24f6,	// (0x000118b6) bg_popup_fep_char_preview_window_cp02

0xac81,	// (0x0001a041) popup_fep_char_pre_window_t1

0xf1bf,	// (0x0001e57f) main_ai5_sk_pane

0xa692,	// (0x00019a52) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa69e,	// (0x00019a5e) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7e8f,	// (0x0001724f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa6b1,	// (0x00019a71) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec2,	// (0x0001f282) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa6c3,	// (0x00019a83) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x33eb,	// (0x000127ab) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf54b,	// (0x0001e90b) main_ai5_sk_pane_g1

0x50ad,	// (0x0001446d) popup_query_code_window_g1

0x2469,	// (0x00011829) popup_fep_vkb_icf_pane

0x247d,	// (0x0001183d) popup_fep_vtchi_icf_pane

0x33eb,	// (0x000127ab) bg_icf_pane

0xac99,	// (0x0001a059) list_vkb_icf_pane

0x33eb,	// (0x000127ab) bg_icf_pane_cp01

0xaca5,	// (0x0001a065) vtchi_icf_list_pane

0xacb6,	// (0x0001a076) list_vkb_icf_pane_t1_ParamLimits

0xacb6,	// (0x0001a076) list_vkb_icf_pane_t1

0xaccc,	// (0x0001a08c) vtchi_icf_list_pane_t1_ParamLimits

0xaccc,	// (0x0001a08c) vtchi_icf_list_pane_t1

0x2453,	// (0x00011813) popup_fep_ituss_window_ParamLimits

0x247d,	// (0x0001183d) popup_fep_vtchi_icf_pane_ParamLimits

0xaabb,	// (0x00019e7b) ituss_keypad_pane_ParamLimits

0x2493,	// (0x00011853) ituss_sks_pane

0x33eb,	// (0x000127ab) bg_icf_pane_ParamLimits

0x243c,	// (0x000117fc) icf_edit_indi_pane_ParamLimits

0x243c,	// (0x000117fc) icf_edit_indi_pane

0xac99,	// (0x0001a059) list_vkb_icf_pane_ParamLimits

0x33eb,	// (0x000127ab) bg_icf_pane_cp01_ParamLimits

0x243c,	// (0x000117fc) icf_edit_indi_pane_cp01_ParamLimits

0x243c,	// (0x000117fc) icf_edit_indi_pane_cp01

0xacad,	// (0x0001a06d) vtchi_query_pane

0x7888,	// (0x00016c48) icf_edit_indi_pane_g1_ParamLimits

0x7888,	// (0x00016c48) icf_edit_indi_pane_g1

0xad50,	// (0x0001a110) icf_edit_indi_pane_g2_ParamLimits

0xad50,	// (0x0001a110) icf_edit_indi_pane_g2

0x0001,

0xff04,	// (0x0001f2c4) icf_edit_indi_pane_g_ParamLimits

0xff04,	// (0x0001f2c4) icf_edit_indi_pane_g

0xad5f,	// (0x0001a11f) icf_edit_indi_pane_t1

0xace6,	// (0x0001a0a6) bg_input_focus_pane_cp042

0x2d9f,	// (0x0001215f) vtchi_button_pane

0xacef,	// (0x0001a0af) vtchi_query_pane_t1

0xacfd,	// (0x0001a0bd) vtchi_query_pane_t2

0xad0b,	// (0x0001a0cb) vtchi_query_pane_t3

0x0002,

0xfef3,	// (0x0001f2b3) vtchi_query_pane_t

0x24f6,	// (0x000118b6) bg_button_pane_cp13

0xad19,	// (0x0001a0d9) vtchi_button_pane_g1

0xad21,	// (0x0001a0e1) ituss_sks_pane_g1

0xad2c,	// (0x0001a0ec) ituss_sks_pane_g2

0x0001,

0xfefa,	// (0x0001f2ba) ituss_sks_pane_g

0xad34,	// (0x0001a0f4) ituss_sks_pane_t1

0xad42,	// (0x0001a102) ituss_sks_pane_t2

0x0001,

0xfeff,	// (0x0001f2bf) ituss_sks_pane_t

0x7032,	// (0x000163f2) indicator_nsta_pane_cp_g1

0x703b,	// (0x000163fb) indicator_nsta_pane_cp_g2

0x7043,	// (0x00016403) indicator_nsta_pane_cp_g3

0x704b,	// (0x0001640b) indicator_nsta_pane_cp_g4

0x704b,	// (0x0001640b) indicator_nsta_pane_cp_g5

0x704b,	// (0x0001640b) indicator_nsta_pane_cp_g6

0x0005,

0xfaa0,	// (0x0001ee60) indicator_nsta_pane_cp_g

0xefd1,	// (0x0001e391) cell_graphic2_pane_t2_ParamLimits

0xefd1,	// (0x0001e391) cell_graphic2_pane_t2

0x0001,

0xfdb9,	// (0x0001f179) cell_graphic2_pane_t_ParamLimits

0xfdb9,	// (0x0001f179) cell_graphic2_pane_t

0xf007,	// (0x0001e3c7) cell_graphic2_control_pane_t1

0xd198,	// (0x0001c558) signal_pane_g3_ParamLimits

0xd198,	// (0x0001c558) signal_pane_g3

0xd1ac,	// (0x0001c56c) signal_pane_g4_ParamLimits

0xd1ac,	// (0x0001c56c) signal_pane_g4

0xaa95,	// (0x00019e55) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xaa95,	// (0x00019e55) cell_ai5_widget_list_row_pane_t3

0xab78,	// (0x00019f38) cell_ituss_key_pane_t1_ParamLimits

0xab78,	// (0x00019f38) cell_ituss_key_pane_t1

0x4cc2,	// (0x00014082) form_field_data_wide_pane_vc_t2_ParamLimits

0x4cc2,	// (0x00014082) form_field_data_wide_pane_vc_t2

0x4cd6,	// (0x00014096) form_field_data_wide_pane_vc_t3_ParamLimits

0x4cd6,	// (0x00014096) form_field_data_wide_pane_vc_t3

0x0002,

0xf805,	// (0x0001ebc5) form_field_data_wide_pane_vc_t_ParamLimits

0xf805,	// (0x0001ebc5) form_field_data_wide_pane_vc_t

0x6cea,	// (0x000160aa) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6cea,	// (0x000160aa) form_field_slider_wide_pane_vc_t3

0x6dc8,	// (0x00016188) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6dc8,	// (0x00016188) form_field_popup_wide_pane_vc_t2

0x6ddf,	// (0x0001619f) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6ddf,	// (0x0001619f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa8f,	// (0x0001ee4f) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa8f,	// (0x0001ee4f) form_field_popup_wide_pane_vc_t

0xc65c,	// (0x0001ba1c) aid_fshwr2_btn_pane_ParamLimits

0xc66d,	// (0x0001ba2d) aid_fshwr2_syb_pane_ParamLimits

0xc67e,	// (0x0001ba3e) aid_fshwr2_txt_pane_ParamLimits

0x1b9d,	// (0x00010f5d) fshwr2_bg_pane_ParamLimits

0xc68a,	// (0x0001ba4a) fshwr2_func_candi_pane_ParamLimits

0xc6a9,	// (0x0001ba69) fshwr2_hwr_syb_pane_ParamLimits

0xc6c4,	// (0x0001ba84) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Normal
