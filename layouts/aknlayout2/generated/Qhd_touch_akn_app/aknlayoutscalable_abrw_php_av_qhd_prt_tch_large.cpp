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

#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0003df6d };

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
0xab1e,	// (0x00048a8b) Screen

0xab2a,	// (0x00048a97) application_window_ParamLimits

0xab2a,	// (0x00048a97) application_window

0x42aa,	// (0x00042217) screen_g1

0x8a3c,	// (0x000469a9) area_bottom_pane_ParamLimits

0x8a3c,	// (0x000469a9) area_bottom_pane

0x8afc,	// (0x00046a69) area_top_pane_ParamLimits

0x8afc,	// (0x00046a69) area_top_pane

0x8b9a,	// (0x00046b07) main_pane_ParamLimits

0x8b9a,	// (0x00046b07) main_pane

0x42b4,	// (0x00042221) misc_graphics

0xbefe,	// (0x00049e6b) battery_pane_ParamLimits

0xbefe,	// (0x00049e6b) battery_pane

0x6109,	// (0x00044076) bg_status_flat_pane_g8

0x6111,	// (0x0004407e) bg_status_flat_pane_g9

0x585e,	// (0x000437cb) context_pane_ParamLimits

0x585e,	// (0x000437cb) context_pane

0xc032,	// (0x00049f9f) navi_pane_ParamLimits

0xc032,	// (0x00049f9f) navi_pane

0xc09e,	// (0x0004a00b) signal_pane_ParamLimits

0xc09e,	// (0x0004a00b) signal_pane

0x0008,

0xf8b7,	// (0x0004d824) bg_status_flat_pane_g

0xc103,	// (0x0004a070) status_pane_g1_ParamLimits

0xc103,	// (0x0004a070) status_pane_g1

0xc117,	// (0x0004a084) status_pane_g2_ParamLimits

0xc117,	// (0x0004a084) status_pane_g2

0x58c3,	// (0x00043830) status_pane_g3_ParamLimits

0x58c3,	// (0x00043830) status_pane_g3

0x0004,

0xf7e5,	// (0x0004d752) status_pane_g_ParamLimits

0xf7e5,	// (0x0004d752) status_pane_g

0xc123,	// (0x0004a090) title_pane_ParamLimits

0xc123,	// (0x0004a090) title_pane

0xc160,	// (0x0004a0cd) uni_indicator_pane_ParamLimits

0xc160,	// (0x0004a0cd) uni_indicator_pane

0x568d,	// (0x000435fa) bg_list_pane_ParamLimits

0x568d,	// (0x000435fa) bg_list_pane

0xb3fa,	// (0x00049367) find_pane

0xb402,	// (0x0004936f) listscroll_app_pane_ParamLimits

0xb402,	// (0x0004936f) listscroll_app_pane

0x56ad,	// (0x0004361a) listscroll_form_pane

0xb40e,	// (0x0004937b) listscroll_gen_pane_ParamLimits

0xb40e,	// (0x0004937b) listscroll_gen_pane

0x56ad,	// (0x0004361a) listscroll_set_pane

0xb0d3,	// (0x00049040) main_idle_act_pane

0x5473,	// (0x000433e0) main_idle_trad_pane

0x5473,	// (0x000433e0) main_list_empty_pane

0x4b9d,	// (0x00042b0a) main_midp_pane

0x56c7,	// (0x00043634) main_pane_g1_ParamLimits

0x56c7,	// (0x00043634) main_pane_g1

0xb422,	// (0x0004938f) popup_ai_message_window_ParamLimits

0xb422,	// (0x0004938f) popup_ai_message_window

0xb4a8,	// (0x00049415) popup_fep_china_uni_window_ParamLimits

0xb4a8,	// (0x00049415) popup_fep_china_uni_window

0x56f9,	// (0x00043666) popup_fep_japan_candidate_window_ParamLimits

0x56f9,	// (0x00043666) popup_fep_japan_candidate_window

0x5719,	// (0x00043686) popup_fep_japan_predictive_window_ParamLimits

0x5719,	// (0x00043686) popup_fep_japan_predictive_window

0xb504,	// (0x00049471) popup_find_window

0xb511,	// (0x0004947e) popup_grid_graphic_window_ParamLimits

0xb511,	// (0x0004947e) popup_grid_graphic_window

0x5749,	// (0x000436b6) popup_large_graphic_colour_window

0xb539,	// (0x000494a6) popup_menu_window_ParamLimits

0xb539,	// (0x000494a6) popup_menu_window

0xb6f1,	// (0x0004965e) popup_note_image_window

0xb6dd,	// (0x0004964a) popup_note_wait_window_ParamLimits

0xb6dd,	// (0x0004964a) popup_note_wait_window

0xb6dd,	// (0x0004964a) popup_note_window_ParamLimits

0xb6dd,	// (0x0004964a) popup_note_window

0xb747,	// (0x000496b4) popup_query_code_window_ParamLimits

0xb747,	// (0x000496b4) popup_query_code_window

0x576f,	// (0x000436dc) popup_query_data_code_window_ParamLimits

0x576f,	// (0x000436dc) popup_query_data_code_window

0xb75b,	// (0x000496c8) popup_query_data_window_ParamLimits

0xb75b,	// (0x000496c8) popup_query_data_window

0xb777,	// (0x000496e4) popup_query_sat_info_window_ParamLimits

0xb777,	// (0x000496e4) popup_query_sat_info_window

0xb7b0,	// (0x0004971d) popup_snote_single_graphic_window_ParamLimits

0xb7b0,	// (0x0004971d) popup_snote_single_graphic_window

0xb7b0,	// (0x0004971d) popup_snote_single_text_window_ParamLimits

0xb7b0,	// (0x0004971d) popup_snote_single_text_window

0x578c,	// (0x000436f9) popup_sub_window_general

0x57d4,	// (0x00043741) popup_window_general_ParamLimits

0x57d4,	// (0x00043741) popup_window_general

0x57e9,	// (0x00043756) power_save_pane

0x9877,	// (0x000477e4) control_pane_g1_ParamLimits

0x9877,	// (0x000477e4) control_pane_g1

0x98a0,	// (0x0004780d) control_pane_g2_ParamLimits

0x98a0,	// (0x0004780d) control_pane_g2

0x566f,	// (0x000435dc) control_pane_g3_ParamLimits

0x566f,	// (0x000435dc) control_pane_g3

0x0007,

0xf7cd,	// (0x0004d73a) control_pane_g_ParamLimits

0xf7cd,	// (0x0004d73a) control_pane_g

0x98e7,	// (0x00047854) control_pane_t1_ParamLimits

0x98e7,	// (0x00047854) control_pane_t1

0x9939,	// (0x000478a6) control_pane_t2_ParamLimits

0x9939,	// (0x000478a6) control_pane_t2

0x0002,

0xf7de,	// (0x0004d74b) control_pane_t_ParamLimits

0xf7de,	// (0x0004d74b) control_pane_t

0x5590,	// (0x000434fd) navi_navi_volume_pane_cp1

0x5599,	// (0x00043506) status_small_icon_pane

0x55a1,	// (0x0004350e) status_small_pane_g1_ParamLimits

0x55a1,	// (0x0004350e) status_small_pane_g1

0x55d5,	// (0x00043542) status_small_pane_g2_ParamLimits

0x55d5,	// (0x00043542) status_small_pane_g2

0x55e1,	// (0x0004354e) status_small_pane_g3_ParamLimits

0x55e1,	// (0x0004354e) status_small_pane_g3

0x55ed,	// (0x0004355a) status_small_pane_g4_ParamLimits

0x55ed,	// (0x0004355a) status_small_pane_g4

0x55f9,	// (0x00043566) status_small_pane_g5_ParamLimits

0x55f9,	// (0x00043566) status_small_pane_g5

0x5608,	// (0x00043575) status_small_pane_g6_ParamLimits

0x5608,	// (0x00043575) status_small_pane_g6

0x0007,

0xf7bc,	// (0x0004d729) status_small_pane_g_ParamLimits

0xf7bc,	// (0x0004d729) status_small_pane_g

0x5638,	// (0x000435a5) status_small_pane_t1

0x565b,	// (0x000435c8) status_small_wait_pane_ParamLimits

0x565b,	// (0x000435c8) status_small_wait_pane

0xb19f,	// (0x0004910c) aid_levels_signal_ParamLimits

0xb19f,	// (0x0004910c) aid_levels_signal

0xb1b1,	// (0x0004911e) signal_pane_g1_ParamLimits

0xb1b1,	// (0x0004911e) signal_pane_g1

0xb1c6,	// (0x00049133) signal_pane_g2_ParamLimits

0xb1c6,	// (0x00049133) signal_pane_g2

0x0001,

0xf751,	// (0x0004d6be) signal_pane_g_ParamLimits

0xf751,	// (0x0004d6be) signal_pane_g

0x4fd9,	// (0x00042f46) context_pane_g1

0xab3a,	// (0x00048aa7) title_pane_g1

0xab64,	// (0x00048ad1) title_pane_t1

0x42ca,	// (0x00042237) title_pane_t2

0x42f0,	// (0x0004225d) title_pane_t3

0x0002,

0xf59b,	// (0x0004d508) title_pane_t

0xc178,	// (0x0004a0e5) aid_levels_battery_ParamLimits

0xc178,	// (0x0004a0e5) aid_levels_battery

0xc18c,	// (0x0004a0f9) battery_pane_g1_ParamLimits

0xc18c,	// (0x0004a0f9) battery_pane_g1

0xc1a2,	// (0x0004a10f) battery_pane_g2_ParamLimits

0xc1a2,	// (0x0004a10f) battery_pane_g2

0x0001,

0xf7f0,	// (0x0004d75d) battery_pane_g_ParamLimits

0xf7f0,	// (0x0004d75d) battery_pane_g

0xc5b0,	// (0x0004a51d) uni_indicator_pane_g1

0xc5c5,	// (0x0004a532) uni_indicator_pane_g2

0xc5db,	// (0x0004a548) uni_indicator_pane_g3

0x0005,

0xf95f,	// (0x0004d8cc) uni_indicator_pane_g

0x52e5,	// (0x00043252) navi_icon_pane_ParamLimits

0x52e5,	// (0x00043252) navi_icon_pane

0x522e,	// (0x0004319b) navi_midp_pane

0x5301,	// (0x0004326e) navi_navi_pane

0x530b,	// (0x00043278) navi_text_pane_ParamLimits

0x530b,	// (0x00043278) navi_text_pane

0x42aa,	// (0x00042217) status_small_wait_pane_g1

0x45d7,	// (0x00042544) status_small_wait_pane_g2

0x0001,

0xf95a,	// (0x0004d8c7) status_small_wait_pane_g

0x66dc,	// (0x00044649) navi_navi_icon_text_pane

0x66f6,	// (0x00044663) navi_navi_pane_g1_ParamLimits

0x66f6,	// (0x00044663) navi_navi_pane_g1

0x66e4,	// (0x00044651) navi_navi_pane_g2_ParamLimits

0x66e4,	// (0x00044651) navi_navi_pane_g2

0x0001,

0xf928,	// (0x0004d895) navi_navi_pane_g_ParamLimits

0xf928,	// (0x0004d895) navi_navi_pane_g

0x6708,	// (0x00044675) navi_navi_tabs_pane

0x6711,	// (0x0004467e) navi_navi_text_pane

0x66dc,	// (0x00044649) navi_navi_volume_pane

0xc574,	// (0x0004a4e1) navi_text_pane_t1

0xc565,	// (0x0004a4d2) navi_icon_pane_g1

0x661d,	// (0x0004458a) navi_navi_text_pane_t1

0x9c63,	// (0x00047bd0) navi_navi_volume_pane_g1

0x9c6b,	// (0x00047bd8) volume_small_pane

0xc4d7,	// (0x0004a444) navi_navi_icon_text_pane_g1

0xc4df,	// (0x0004a44c) navi_navi_icon_text_pane_t1

0x5301,	// (0x0004326e) navi_tabs_2_long_pane

0x5301,	// (0x0004326e) navi_tabs_2_pane

0x5301,	// (0x0004326e) navi_tabs_3_long_pane

0x5301,	// (0x0004326e) navi_tabs_3_pane

0x5301,	// (0x0004326e) navi_tabs_4_pane

0x9c43,	// (0x00047bb0) tabs_2_active_pane_ParamLimits

0x9c43,	// (0x00047bb0) tabs_2_active_pane

0x9c53,	// (0x00047bc0) tabs_2_passive_pane_ParamLimits

0x9c53,	// (0x00047bc0) tabs_2_passive_pane

0x9c11,	// (0x00047b7e) tabs_3_active_pane_ParamLimits

0x9c11,	// (0x00047b7e) tabs_3_active_pane

0x9c21,	// (0x00047b8e) tabs_3_passive_pane_ParamLimits

0x9c21,	// (0x00047b8e) tabs_3_passive_pane

0x9c32,	// (0x00047b9f) tabs_3_passive_pane_cp_ParamLimits

0x9c32,	// (0x00047b9f) tabs_3_passive_pane_cp

0x9bcd,	// (0x00047b3a) tabs_4_active_pane_ParamLimits

0x9bcd,	// (0x00047b3a) tabs_4_active_pane

0x9bde,	// (0x00047b4b) tabs_4_passive_pane_ParamLimits

0x9bde,	// (0x00047b4b) tabs_4_passive_pane

0x9bef,	// (0x00047b5c) tabs_4_passive_pane_cp_ParamLimits

0x9bef,	// (0x00047b5c) tabs_4_passive_pane_cp

0x9c00,	// (0x00047b6d) tabs_4_passive_pane_cp2_ParamLimits

0x9c00,	// (0x00047b6d) tabs_4_passive_pane_cp2

0x9ba9,	// (0x00047b16) tabs_2_long_active_pane_ParamLimits

0x9ba9,	// (0x00047b16) tabs_2_long_active_pane

0x9bbb,	// (0x00047b28) tabs_2_long_passive_pane_ParamLimits

0x9bbb,	// (0x00047b28) tabs_2_long_passive_pane

0x9b6a,	// (0x00047ad7) tabs_3_long_active_pane_ParamLimits

0x9b6a,	// (0x00047ad7) tabs_3_long_active_pane

0x9b7d,	// (0x00047aea) tabs_3_long_passive_pane_ParamLimits

0x9b7d,	// (0x00047aea) tabs_3_long_passive_pane

0x9b96,	// (0x00047b03) tabs_3_long_passive_pane_cp_ParamLimits

0x9b96,	// (0x00047b03) tabs_3_long_passive_pane_cp

0x9b10,	// (0x00047a7d) volume_small_pane_g1

0x9b19,	// (0x00047a86) volume_small_pane_g2

0x9b22,	// (0x00047a8f) volume_small_pane_g3

0x9b2b,	// (0x00047a98) volume_small_pane_g4

0x9b34,	// (0x00047aa1) volume_small_pane_g5

0x9b3d,	// (0x00047aaa) volume_small_pane_g6

0x9b46,	// (0x00047ab3) volume_small_pane_g7

0x9b4f,	// (0x00047abc) volume_small_pane_g8

0x9b58,	// (0x00047ac5) volume_small_pane_g9

0x9b61,	// (0x00047ace) volume_small_pane_g10

0x0009,

0xf8f4,	// (0x0004d861) volume_small_pane_g

0x4310,	// (0x0004227d) bg_active_tab_pane_cp2_ParamLimits

0x4310,	// (0x0004227d) bg_active_tab_pane_cp2

0xabcc,	// (0x00048b39) tabs_3_active_pane_g1

0xabd4,	// (0x00048b41) tabs_3_active_pane_t1

0x4310,	// (0x0004227d) bg_passive_tab_pane_cp2_ParamLimits

0x4310,	// (0x0004227d) bg_passive_tab_pane_cp2

0xabcc,	// (0x00048b39) tabs_3_passive_pane_g1

0xabd4,	// (0x00048b41) tabs_3_passive_pane_t1

0x4310,	// (0x0004227d) bg_active_tab_pane_cp3_ParamLimits

0x4310,	// (0x0004227d) bg_active_tab_pane_cp3

0xabe6,	// (0x00048b53) tabs_4_active_pane_g1

0xabee,	// (0x00048b5b) tabs_4_active_pane_t1

0x4310,	// (0x0004227d) bg_passive_tab_pane_cp3_ParamLimits

0x4310,	// (0x0004227d) bg_passive_tab_pane_cp3

0xabe6,	// (0x00048b53) tabs_4_1_passive_pane_g1

0xabee,	// (0x00048b5b) tabs_4_1_passive_pane_t1

0x4b9d,	// (0x00042b0a) list_highlight_pane_cp2

0xc652,	// (0x0004a5bf) list_set_pane_ParamLimits

0xc652,	// (0x0004a5bf) list_set_pane

0xc6f8,	// (0x0004a665) main_pane_set_t1_ParamLimits

0xc6f8,	// (0x0004a665) main_pane_set_t1

0xc718,	// (0x0004a685) main_pane_set_t2_ParamLimits

0xc718,	// (0x0004a685) main_pane_set_t2

0xc72c,	// (0x0004a699) main_pane_set_t3_ParamLimits

0xc72c,	// (0x0004a699) main_pane_set_t3

0xc73e,	// (0x0004a6ab) main_pane_set_t4_ParamLimits

0xc73e,	// (0x0004a6ab) main_pane_set_t4

0x0003,

0xf9c4,	// (0x0004d931) main_pane_set_t_ParamLimits

0xf9c4,	// (0x0004d931) main_pane_set_t

0xc750,	// (0x0004a6bd) setting_code_pane

0xc75c,	// (0x0004a6c9) setting_slider_graphic_pane

0xc75c,	// (0x0004a6c9) setting_slider_pane

0xc75c,	// (0x0004a6c9) setting_text_pane

0xc75c,	// (0x0004a6c9) setting_volume_pane

0x8ddf,	// (0x00046d4c) volume_set_pane

0x4310,	// (0x0004227d) bg_set_opt_pane_cp

0x8de7,	// (0x00046d54) setting_slider_pane_t1

0x8e00,	// (0x00046d6d) setting_slider_pane_t2

0x8e1a,	// (0x00046d87) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0004d50f) setting_slider_pane_t

0x8e32,	// (0x00046d9f) slider_set_pane

0x42b4,	// (0x00042221) bg_set_opt_pane_cp2

0x431e,	// (0x0004228b) setting_slider_graphic_pane_g1

0x8e48,	// (0x00046db5) setting_slider_graphic_pane_t1

0x8e58,	// (0x00046dc5) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0004d516) setting_slider_graphic_pane_t

0x8e68,	// (0x00046dd5) slider_set_pane_cp

0x42b4,	// (0x00042221) input_focus_pane_cp1

0x6b69,	// (0x00044ad6) list_set_text_pane

0x42aa,	// (0x00042217) setting_text_pane_g1

0x42b4,	// (0x00042221) input_focus_pane_cp2

0x42aa,	// (0x00042217) setting_code_pane_g1

0x4327,	// (0x00042294) setting_code_pane_t1

0x8e70,	// (0x00046ddd) set_text_pane_t1_ParamLimits

0x8e70,	// (0x00046ddd) set_text_pane_t1

0x4aac,	// (0x00042a19) set_opt_bg_pane_g1

0x4ab4,	// (0x00042a21) set_opt_bg_pane_g2

0x6b43,	// (0x00044ab0) set_opt_bg_pane_g3

0x4ac4,	// (0x00042a31) set_opt_bg_pane_g4

0x4acc,	// (0x00042a39) set_opt_bg_pane_g5

0x4ad4,	// (0x00042a41) set_opt_bg_pane_g6

0x6b4d,	// (0x00044aba) set_opt_bg_pane_g7

0x6b55,	// (0x00044ac2) set_opt_bg_pane_g8

0x6b5f,	// (0x00044acc) set_opt_bg_pane_g9

0x0008,

0xf9b1,	// (0x0004d91e) set_opt_bg_pane_g

0x6b36,	// (0x00044aa3) slider_set_pane_g1

0x9cd8,	// (0x00047c45) slider_set_pane_g2

0x0006,

0xf9a2,	// (0x0004d90f) slider_set_pane_g

0x9c74,	// (0x00047be1) volume_set_pane_g1

0x9c7c,	// (0x00047be9) volume_set_pane_g2

0x9c84,	// (0x00047bf1) volume_set_pane_g3

0x9c8c,	// (0x00047bf9) volume_set_pane_g4

0x9c94,	// (0x00047c01) volume_set_pane_g5

0x9c9c,	// (0x00047c09) volume_set_pane_g6

0x9ca4,	// (0x00047c11) volume_set_pane_g7

0x9cac,	// (0x00047c19) volume_set_pane_g8

0x9cb4,	// (0x00047c21) volume_set_pane_g9

0x9cbc,	// (0x00047c29) volume_set_pane_g10

0x0009,

0xf97a,	// (0x0004d8e7) volume_set_pane_g

0xac00,	// (0x00048b6d) indicator_pane_ParamLimits

0xac00,	// (0x00048b6d) indicator_pane

0xac0c,	// (0x00048b79) main_idle_pane_g2_ParamLimits

0xac0c,	// (0x00048b79) main_idle_pane_g2

0xac34,	// (0x00048ba1) main_pane_idle_g1_ParamLimits

0xac34,	// (0x00048ba1) main_pane_idle_g1

0x4335,	// (0x000422a2) popup_clock_digital_analogue_window_ParamLimits

0x4335,	// (0x000422a2) popup_clock_digital_analogue_window

0xac41,	// (0x00048bae) soft_indicator_pane_ParamLimits

0xac41,	// (0x00048bae) soft_indicator_pane

0xac4d,	// (0x00048bba) wallpaper_pane_ParamLimits

0xac4d,	// (0x00048bba) wallpaper_pane

0x42aa,	// (0x00042217) wallpaper_pane_g1

0xac59,	// (0x00048bc6) indicator_pane_g1_ParamLimits

0xac59,	// (0x00048bc6) indicator_pane_g1

0x6cab,	// (0x00044c18) navi_navi_icon_text_pane_srt_g1

0x4363,	// (0x000422d0) soft_indicator_pane_t1

0x437d,	// (0x000422ea) aid_ps_area_pane

0xac65,	// (0x00048bd2) aid_ps_clock_pane

0x438e,	// (0x000422fb) aid_ps_indicator_pane

0x439a,	// (0x00042307) indicator_ps_pane_ParamLimits

0x439a,	// (0x00042307) indicator_ps_pane

0x43a9,	// (0x00042316) power_save_pane_g1_ParamLimits

0x43a9,	// (0x00042316) power_save_pane_g1

0x43b5,	// (0x00042322) power_save_pane_g2_ParamLimits

0x43b5,	// (0x00042322) power_save_pane_g2

0x89f0,	// (0x0004695d) aid_navinavi_width_pane

0x437d,	// (0x000422ea) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0004d51b) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0004d51b) power_save_pane_g

0x43c3,	// (0x00042330) power_save_pane_t1_ParamLimits

0x43c3,	// (0x00042330) power_save_pane_t1

0xac65,	// (0x00048bd2) aid_ps_clock_pane_ParamLimits

0x438e,	// (0x000422fb) aid_ps_indicator_pane_ParamLimits

0x43d5,	// (0x00042342) power_save_pane_t4_ParamLimits

0x43d5,	// (0x00042342) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0004d520) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0004d520) power_save_pane_t

0x43ff,	// (0x0004236c) power_save_t3_ParamLimits

0x43ff,	// (0x0004236c) power_save_t3

0x43ea,	// (0x00042357) power_save_t2_ParamLimits

0x43ea,	// (0x00042357) power_save_t2

0x4414,	// (0x00042381) indicator_ps_pane_g1

0xac73,	// (0x00048be0) ai_gene_pane_ParamLimits

0xac73,	// (0x00048be0) ai_gene_pane

0xac7f,	// (0x00048bec) ai_links_pane_ParamLimits

0xac7f,	// (0x00048bec) ai_links_pane

0xac8b,	// (0x00048bf8) indicator_pane_cp1_ParamLimits

0xac8b,	// (0x00048bf8) indicator_pane_cp1

0xac97,	// (0x00048c04) main_pane_idle_g1_cp_ParamLimits

0xac97,	// (0x00048c04) main_pane_idle_g1_cp

0x441d,	// (0x0004238a) popup_ai_links_title_window

0xaca3,	// (0x00048c10) soft_indicator_pane_cp1_ParamLimits

0xaca3,	// (0x00048c10) soft_indicator_pane_cp1

0x698a,	// (0x000448f7) ai_links_pane_g1

0x6993,	// (0x00044900) grid_ai_links_pane

0xc5a5,	// (0x0004a512) ai_gene_pane_1

0x6978,	// (0x000448e5) ai_gene_pane_2

0x6981,	// (0x000448ee) list_highlight_pane_cp4

0xc589,	// (0x0004a4f6) cell_ai_link_pane_ParamLimits

0xc589,	// (0x0004a4f6) cell_ai_link_pane

0x6970,	// (0x000448dd) cell_ai_link_pane_g1

0x45d7,	// (0x00042544) cell_ai_link_pane_g2

0x0001,

0xf955,	// (0x0004d8c2) cell_ai_link_pane_g

0x42b4,	// (0x00042221) grid_highlight_cp2

0x42b4,	// (0x00042221) bg_popup_sub_pane_cp1

0x4434,	// (0x000423a1) popup_ai_links_title_window_t1

0x68b2,	// (0x0004481f) ai_gene_pane_1_g1_ParamLimits

0x68b2,	// (0x0004481f) ai_gene_pane_1_g1

0x68be,	// (0x0004482b) ai_gene_pane_1_g2_ParamLimits

0x68be,	// (0x0004482b) ai_gene_pane_1_g2

0x0001,

0xf94b,	// (0x0004d8b8) ai_gene_pane_1_g_ParamLimits

0xf94b,	// (0x0004d8b8) ai_gene_pane_1_g

0x68cb,	// (0x00044838) ai_gene_pane_1_t1_ParamLimits

0x68cb,	// (0x00044838) ai_gene_pane_1_t1

0x68ff,	// (0x0004486c) grid_ai_soft_ind_pane

0x689d,	// (0x0004480a) ai_gene_pane_2_t1_ParamLimits

0x689d,	// (0x0004480a) ai_gene_pane_2_t1

0xacaf,	// (0x00048c1c) main_pane_empty_t1_ParamLimits

0xacaf,	// (0x00048c1c) main_pane_empty_t1

0xacc7,	// (0x00048c34) main_pane_empty_t2_ParamLimits

0xacc7,	// (0x00048c34) main_pane_empty_t2

0xacdc,	// (0x00048c49) main_pane_empty_t3_ParamLimits

0xacdc,	// (0x00048c49) main_pane_empty_t3

0xacee,	// (0x00048c5b) main_pane_empty_t4_ParamLimits

0xacee,	// (0x00048c5b) main_pane_empty_t4

0xad00,	// (0x00048c6d) main_pane_empty_t5_ParamLimits

0xad00,	// (0x00048c6d) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0004d525) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0004d525) main_pane_empty_t

0x4afd,	// (0x00042a6a) bg_popup_window_pane_ParamLimits

0x4afd,	// (0x00042a6a) bg_popup_window_pane

0x662b,	// (0x00044598) find_popup_pane_cp2_ParamLimits

0x662b,	// (0x00044598) find_popup_pane_cp2

0x6637,	// (0x000445a4) heading_pane_ParamLimits

0x6637,	// (0x000445a4) heading_pane

0x42b4,	// (0x00042221) bg_popup_sub_pane

0xc4f9,	// (0x0004a466) bg_popup_window_pane_g1_ParamLimits

0xc4f9,	// (0x0004a466) bg_popup_window_pane_g1

0xc505,	// (0x0004a472) bg_popup_window_pane_g2_ParamLimits

0xc505,	// (0x0004a472) bg_popup_window_pane_g2

0xc511,	// (0x0004a47e) bg_popup_window_pane_g3_ParamLimits

0xc511,	// (0x0004a47e) bg_popup_window_pane_g3

0xc51d,	// (0x0004a48a) bg_popup_window_pane_g4_ParamLimits

0xc51d,	// (0x0004a48a) bg_popup_window_pane_g4

0xc529,	// (0x0004a496) bg_popup_window_pane_g5_ParamLimits

0xc529,	// (0x0004a496) bg_popup_window_pane_g5

0xc535,	// (0x0004a4a2) bg_popup_window_pane_g6_ParamLimits

0xc535,	// (0x0004a4a2) bg_popup_window_pane_g6

0xc541,	// (0x0004a4ae) bg_popup_window_pane_g7_ParamLimits

0xc541,	// (0x0004a4ae) bg_popup_window_pane_g7

0xc54d,	// (0x0004a4ba) bg_popup_window_pane_g8_ParamLimits

0xc54d,	// (0x0004a4ba) bg_popup_window_pane_g8

0xc559,	// (0x0004a4c6) bg_popup_window_pane_g9_ParamLimits

0xc559,	// (0x0004a4c6) bg_popup_window_pane_g9

0x6611,	// (0x0004457e) bg_popup_window_pane_g10_ParamLimits

0x6611,	// (0x0004457e) bg_popup_window_pane_g10

0x0009,

0xf913,	// (0x0004d880) bg_popup_window_pane_g_ParamLimits

0xf913,	// (0x0004d880) bg_popup_window_pane_g

0x65c8,	// (0x00044535) bg_popup_heading_pane_ParamLimits

0x65c8,	// (0x00044535) bg_popup_heading_pane

0x9d60,	// (0x00047ccd) tabs_4_passive_pane_cp_srt_ParamLimits

0x9d60,	// (0x00047ccd) tabs_4_passive_pane_cp_srt

0x9d72,	// (0x00047cdf) tabs_4_passive_pane_srt_ParamLimits

0x65dc,	// (0x00044549) heading_pane_g2

0x9d72,	// (0x00047cdf) tabs_4_passive_pane_srt

0x4b9d,	// (0x00042b0a) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4b9d,	// (0x00042b0a) bg_passive_tab_pane_cp3_srt

0x65e4,	// (0x00044551) heading_pane_t1_ParamLimits

0x65e4,	// (0x00044551) heading_pane_t1

0x65fb,	// (0x00044568) heading_pane_t2_ParamLimits

0x65fb,	// (0x00044568) heading_pane_t2

0x0001,

0xf90e,	// (0x0004d87b) heading_pane_t_ParamLimits

0xf90e,	// (0x0004d87b) heading_pane_t

0x60d1,	// (0x0004403e) bg_popup_heading_pane_g1

0x6162,	// (0x000440cf) bg_popup_heading_pane_g2

0x616c,	// (0x000440d9) bg_popup_heading_pane_g3

0x6176,	// (0x000440e3) bg_popup_heading_pane_g4

0x6180,	// (0x000440ed) bg_popup_heading_pane_g5

0x618a,	// (0x000440f7) bg_popup_heading_pane_g6

0x6192,	// (0x000440ff) bg_popup_heading_pane_g7

0x619a,	// (0x00044107) bg_popup_heading_pane_g8

0x61a4,	// (0x00044111) bg_popup_heading_pane_g9

0x0008,

0xf8ca,	// (0x0004d837) bg_popup_heading_pane_g

0x59b9,	// (0x00043926) bg_popup_sub_pane_g1

0x59c1,	// (0x0004392e) bg_popup_sub_pane_g2

0x59c9,	// (0x00043936) bg_popup_sub_pane_g3

0x59d1,	// (0x0004393e) bg_popup_sub_pane_g4

0x59d9,	// (0x00043946) bg_popup_sub_pane_g5

0x59e1,	// (0x0004394e) bg_popup_sub_pane_g6

0x59e9,	// (0x00043956) bg_popup_sub_pane_g7

0x59f1,	// (0x0004395e) bg_popup_sub_pane_g8

0x59f9,	// (0x00043966) bg_popup_sub_pane_g9

0x0008,

0xf8a4,	// (0x0004d811) bg_popup_sub_pane_g

0x4302,	// (0x0004226f) bg_popup_window_pane_cp5_ParamLimits

0x4302,	// (0x0004226f) bg_popup_window_pane_cp5

0x4451,	// (0x000423be) popup_note_window_g1_ParamLimits

0x4451,	// (0x000423be) popup_note_window_g1

0x445d,	// (0x000423ca) popup_note_window_t1_ParamLimits

0x445d,	// (0x000423ca) popup_note_window_t1

0x4473,	// (0x000423e0) popup_note_window_t2_ParamLimits

0x4473,	// (0x000423e0) popup_note_window_t2

0x4489,	// (0x000423f6) popup_note_window_t3_ParamLimits

0x4489,	// (0x000423f6) popup_note_window_t3

0x449f,	// (0x0004240c) popup_note_window_t4_ParamLimits

0x449f,	// (0x0004240c) popup_note_window_t4

0x44c7,	// (0x00042434) popup_note_window_t5_ParamLimits

0x44c7,	// (0x00042434) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0004d530) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0004d530) popup_note_window_t

0x44eb,	// (0x00042458) bg_popup_window_pane_cp6_ParamLimits

0x44eb,	// (0x00042458) bg_popup_window_pane_cp6

0x604d,	// (0x00043fba) popup_note_image_window_g1_ParamLimits

0x604d,	// (0x00043fba) popup_note_image_window_g1

0x6059,	// (0x00043fc6) popup_note_image_window_g2_ParamLimits

0x6059,	// (0x00043fc6) popup_note_image_window_g2

0x0001,

0xf898,	// (0x0004d805) popup_note_image_window_g_ParamLimits

0xf898,	// (0x0004d805) popup_note_image_window_g

0x6072,	// (0x00043fdf) popup_note_image_window_t1_ParamLimits

0x6072,	// (0x00043fdf) popup_note_image_window_t1

0x608b,	// (0x00043ff8) popup_note_image_window_t2_ParamLimits

0x608b,	// (0x00043ff8) popup_note_image_window_t2

0x60a4,	// (0x00044011) popup_note_image_window_t3_ParamLimits

0x60a4,	// (0x00044011) popup_note_image_window_t3

0x0002,

0xf89d,	// (0x0004d80a) popup_note_image_window_t_ParamLimits

0xf89d,	// (0x0004d80a) popup_note_image_window_t

0x5f2a,	// (0x00043e97) bg_popup_window_pane_cp7_ParamLimits

0x5f2a,	// (0x00043e97) bg_popup_window_pane_cp7

0x5f5a,	// (0x00043ec7) popup_note_wait_window_g1_ParamLimits

0x5f5a,	// (0x00043ec7) popup_note_wait_window_g1

0x5f66,	// (0x00043ed3) popup_note_wait_window_g2_ParamLimits

0x5f66,	// (0x00043ed3) popup_note_wait_window_g2

0x0002,

0xf886,	// (0x0004d7f3) popup_note_wait_window_g_ParamLimits

0xf886,	// (0x0004d7f3) popup_note_wait_window_g

0x5f7e,	// (0x00043eeb) popup_note_wait_window_t1_ParamLimits

0x5f7e,	// (0x00043eeb) popup_note_wait_window_t1

0x5fa5,	// (0x00043f12) popup_note_wait_window_t2_ParamLimits

0x5fa5,	// (0x00043f12) popup_note_wait_window_t2

0x5fc2,	// (0x00043f2f) popup_note_wait_window_t3_ParamLimits

0x5fc2,	// (0x00043f2f) popup_note_wait_window_t3

0x5fd5,	// (0x00043f42) popup_note_wait_window_t4_ParamLimits

0x5fd5,	// (0x00043f42) popup_note_wait_window_t4

0x0004,

0xf88d,	// (0x0004d7fa) popup_note_wait_window_t_ParamLimits

0xf88d,	// (0x0004d7fa) popup_note_wait_window_t

0x5ffa,	// (0x00043f67) wait_bar_pane_ParamLimits

0x5ffa,	// (0x00043f67) wait_bar_pane

0x42b4,	// (0x00042221) wait_anim_pane

0x42b4,	// (0x00042221) wait_border_pane

0x42aa,	// (0x00042217) wait_anim_pane_g1

0x42aa,	// (0x00042217) wait_anim_pane_g2

0x0001,

0xf74c,	// (0x0004d6b9) wait_anim_pane_g

0x5ece,	// (0x00043e3b) wait_border_pane_g1

0x5ed9,	// (0x00043e46) wait_border_pane_g2

0x5ee2,	// (0x00043e4f) wait_border_pane_g3

0x0002,

0xf87f,	// (0x0004d7ec) wait_border_pane_g

0x5e2b,	// (0x00043d98) bg_popup_window_pane_cp16_ParamLimits

0x5e2b,	// (0x00043d98) bg_popup_window_pane_cp16

0x5e39,	// (0x00043da6) indicator_popup_pane_cp4_ParamLimits

0x5e39,	// (0x00043da6) indicator_popup_pane_cp4

0x5e4d,	// (0x00043dba) popup_query_data_window_t1_ParamLimits

0x5e4d,	// (0x00043dba) popup_query_data_window_t1

0x5e5f,	// (0x00043dcc) popup_query_data_window_t2_ParamLimits

0x5e5f,	// (0x00043dcc) popup_query_data_window_t2

0x5e78,	// (0x00043de5) popup_query_data_window_t3_ParamLimits

0x5e78,	// (0x00043de5) popup_query_data_window_t3

0x0002,

0xf878,	// (0x0004d7e5) popup_query_data_window_t_ParamLimits

0xf878,	// (0x0004d7e5) popup_query_data_window_t

0x5e92,	// (0x00043dff) query_popup_data_pane_ParamLimits

0x5e92,	// (0x00043dff) query_popup_data_pane

0x5ea6,	// (0x00043e13) query_popup_data_pane_cp1_ParamLimits

0x5ea6,	// (0x00043e13) query_popup_data_pane_cp1

0x44eb,	// (0x00042458) bg_popup_window_pane_cp10_ParamLimits

0x44eb,	// (0x00042458) bg_popup_window_pane_cp10

0x5d82,	// (0x00043cef) indicator_popup_pane_ParamLimits

0x5d82,	// (0x00043cef) indicator_popup_pane

0x4542,	// (0x000424af) popup_query_code_window_t1_ParamLimits

0x4542,	// (0x000424af) popup_query_code_window_t1

0x5d9a,	// (0x00043d07) popup_query_code_window_t2_ParamLimits

0x5d9a,	// (0x00043d07) popup_query_code_window_t2

0x5dd8,	// (0x00043d45) popup_query_code_window_t3_ParamLimits

0x5dd8,	// (0x00043d45) popup_query_code_window_t3

0x0002,

0xf871,	// (0x0004d7de) popup_query_code_window_t_ParamLimits

0xf871,	// (0x0004d7de) popup_query_code_window_t

0x5e07,	// (0x00043d74) query_popup_pane_ParamLimits

0x5e07,	// (0x00043d74) query_popup_pane

0x44eb,	// (0x00042458) bg_popup_window_pane_cp15_ParamLimits

0x44eb,	// (0x00042458) bg_popup_window_pane_cp15

0x4509,	// (0x00042476) indicator_popup_pane_cp1_ParamLimits

0x4509,	// (0x00042476) indicator_popup_pane_cp1

0x451c,	// (0x00042489) indicator_popup_pane_cp2_ParamLimits

0x451c,	// (0x00042489) indicator_popup_pane_cp2

0x452f,	// (0x0004249c) popup_query_data_code_window_g1_ParamLimits

0x452f,	// (0x0004249c) popup_query_data_code_window_g1

0x4542,	// (0x000424af) popup_query_data_code_window_t1_ParamLimits

0x4542,	// (0x000424af) popup_query_data_code_window_t1

0x4554,	// (0x000424c1) popup_query_data_code_window_t2_ParamLimits

0x4554,	// (0x000424c1) popup_query_data_code_window_t2

0x4566,	// (0x000424d3) popup_query_data_code_window_t3_ParamLimits

0x4566,	// (0x000424d3) popup_query_data_code_window_t3

0x457c,	// (0x000424e9) popup_query_data_code_window_t4_ParamLimits

0x457c,	// (0x000424e9) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0004d53b) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0004d53b) popup_query_data_code_window_t

0x9a21,	// (0x0004798e) list_single_midp_graphic_pane_g3

0x4594,	// (0x00042501) query_popup_data_pane_cp2_ParamLimits

0x45a7,	// (0x00042514) query_popup_pane_cp2_ParamLimits

0x45a7,	// (0x00042514) query_popup_pane_cp2

0x42b4,	// (0x00042221) bg_popup_window_pane_cp11

0x5d56,	// (0x00043cc3) heading_pane_cp5

0x4635,	// (0x000425a2) listscroll_popup_info_pane

0x42b4,	// (0x00042221) input_focus_pane_cp3

0x45ba,	// (0x00042527) query_popup_pane_t1

0x45c8,	// (0x00042535) list_popup_info_pane_ParamLimits

0x45c8,	// (0x00042535) list_popup_info_pane

0x45d7,	// (0x00042544) listscroll_popup_info_pane_g1

0x45df,	// (0x0004254c) scroll_pane_cp7

0x45e9,	// (0x00042556) popup_info_list_pane_t1_ParamLimits

0x45e9,	// (0x00042556) popup_info_list_pane_t1

0x4603,	// (0x00042570) popup_info_list_pane_t2_ParamLimits

0x4603,	// (0x00042570) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0004d544) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0004d544) popup_info_list_pane_t

0x42b4,	// (0x00042221) bg_popup_window_pane_cp12

0x6cc5,	// (0x00044c32) find_popup_pane

0x4310,	// (0x0004227d) bg_popup_window_pane_cp3

0x461d,	// (0x0004258a) heading_pane_cp3

0x4629,	// (0x00042596) listscroll_popup_graphic_pane

0x42b4,	// (0x00042221) bg_popup_window_pane_cp4

0xad64,	// (0x00048cd1) heading_pane_cp4

0x4635,	// (0x000425a2) listscroll_popup_colour_pane

0xad6e,	// (0x00048cdb) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xad6e,	// (0x00048cdb) cell_large_graphic_colour_none_popup_pane

0xad82,	// (0x00048cef) grid_large_graphic_colour_popup_pane_ParamLimits

0xad82,	// (0x00048cef) grid_large_graphic_colour_popup_pane

0xadae,	// (0x00048d1b) listscroll_popup_colour_pane_g1_ParamLimits

0xadae,	// (0x00048d1b) listscroll_popup_colour_pane_g1

0xadc5,	// (0x00048d32) listscroll_popup_colour_pane_g2_ParamLimits

0xadc5,	// (0x00048d32) listscroll_popup_colour_pane_g2

0xaddc,	// (0x00048d49) listscroll_popup_colour_pane_g3_ParamLimits

0xaddc,	// (0x00048d49) listscroll_popup_colour_pane_g3

0xadec,	// (0x00048d59) listscroll_popup_colour_pane_g4_ParamLimits

0xadec,	// (0x00048d59) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0004d549) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0004d549) listscroll_popup_colour_pane_g

0x463d,	// (0x000425aa) scroll_pane_cp6_ParamLimits

0x463d,	// (0x000425aa) scroll_pane_cp6

0xae00,	// (0x00048d6d) cell_large_graphic_colour_popup_pane_ParamLimits

0xae00,	// (0x00048d6d) cell_large_graphic_colour_popup_pane

0x464f,	// (0x000425bc) cell_large_graphic_colour_none_popup_pane_t1

0x42b4,	// (0x00042221) grid_highlight_pane_cp5

0x465e,	// (0x000425cb) cell_large_graphic_colour_popup_pane_g1

0x4666,	// (0x000425d3) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0004d552) cell_large_graphic_colour_popup_pane_g

0x466e,	// (0x000425db) cell_large_graphic_colour_popup_pane_g2_copy1

0x4677,	// (0x000425e4) grid_highlight_pane_cp4

0x467f,	// (0x000425ec) bg_popup_window_pane_cp8_ParamLimits

0x467f,	// (0x000425ec) bg_popup_window_pane_cp8

0x469a,	// (0x00042607) popup_snote_single_text_window_g1_ParamLimits

0x469a,	// (0x00042607) popup_snote_single_text_window_g1

0x46ac,	// (0x00042619) popup_snote_single_text_window_t1_ParamLimits

0x46ac,	// (0x00042619) popup_snote_single_text_window_t1

0x46bf,	// (0x0004262c) popup_snote_single_text_window_t2_ParamLimits

0x46bf,	// (0x0004262c) popup_snote_single_text_window_t2

0x46d2,	// (0x0004263f) popup_snote_single_text_window_t3_ParamLimits

0x46d2,	// (0x0004263f) popup_snote_single_text_window_t3

0x483f,	// (0x000427ac) popup_snote_single_text_window_t4_ParamLimits

0x483f,	// (0x000427ac) popup_snote_single_text_window_t4

0x4873,	// (0x000427e0) popup_snote_single_text_window_t5_ParamLimits

0x4873,	// (0x000427e0) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0004d557) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0004d557) popup_snote_single_text_window_t

0x48a2,	// (0x0004280f) bg_popup_window_pane_cp9_ParamLimits

0x48a2,	// (0x0004280f) bg_popup_window_pane_cp9

0x469a,	// (0x00042607) popup_snote_single_graphic_window_g1_ParamLimits

0x469a,	// (0x00042607) popup_snote_single_graphic_window_g1

0x48b0,	// (0x0004281d) popup_snote_single_graphic_window_g2_ParamLimits

0x48b0,	// (0x0004281d) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0004d562) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0004d562) popup_snote_single_graphic_window_g

0x48bc,	// (0x00042829) popup_snote_single_graphic_window_t1_ParamLimits

0x48bc,	// (0x00042829) popup_snote_single_graphic_window_t1

0x48cf,	// (0x0004283c) popup_snote_single_graphic_window_t2_ParamLimits

0x48cf,	// (0x0004283c) popup_snote_single_graphic_window_t2

0x48e2,	// (0x0004284f) popup_snote_single_graphic_window_t3_ParamLimits

0x48e2,	// (0x0004284f) popup_snote_single_graphic_window_t3

0x491b,	// (0x00042888) popup_snote_single_graphic_window_t4_ParamLimits

0x491b,	// (0x00042888) popup_snote_single_graphic_window_t4

0x494f,	// (0x000428bc) popup_snote_single_graphic_window_t5_ParamLimits

0x494f,	// (0x000428bc) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0004d567) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0004d567) popup_snote_single_graphic_window_t

0x6c4d,	// (0x00044bba) grid_graphic_popup_pane_ParamLimits

0x6c4d,	// (0x00044bba) grid_graphic_popup_pane

0x6c75,	// (0x00044be2) listscroll_popup_graphic_pane_g1_ParamLimits

0x6c75,	// (0x00044be2) listscroll_popup_graphic_pane_g1

0xc847,	// (0x0004a7b4) listscroll_popup_graphic_pane_g2_ParamLimits

0xc847,	// (0x0004a7b4) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ee,	// (0x0004d95b) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ee,	// (0x0004d95b) listscroll_popup_graphic_pane_g

0x63dd,	// (0x0004434a) scroll_pane_cp5

0xc806,	// (0x0004a773) cell_graphic_popup_pane_ParamLimits

0xc806,	// (0x0004a773) cell_graphic_popup_pane

0x6c18,	// (0x00044b85) cell_graphic_popup_pane_g1

0x6c20,	// (0x00044b8d) cell_graphic_popup_pane_g2

0x466e,	// (0x000425db) cell_graphic_popup_pane_g3

0x0002,

0xf9e7,	// (0x0004d954) cell_graphic_popup_pane_g

0x6c29,	// (0x00044b96) cell_graphic_popup_pane_t2

0x4677,	// (0x000425e4) grid_highlight_pane_cp3

0x4990,	// (0x000428fd) list_gen_pane_ParamLimits

0x4990,	// (0x000428fd) list_gen_pane

0x49b8,	// (0x00042925) scroll_pane

0xc7b9,	// (0x0004a726) bg_list_pane_g1_ParamLimits

0xc7b9,	// (0x0004a726) bg_list_pane_g1

0x6bc7,	// (0x00044b34) bg_list_pane_g2_ParamLimits

0x6bc7,	// (0x00044b34) bg_list_pane_g2

0x6bda,	// (0x00044b47) bg_list_pane_g3_ParamLimits

0x6bda,	// (0x00044b47) bg_list_pane_g3

0x6bec,	// (0x00044b59) bg_list_pane_g4_ParamLimits

0x6bec,	// (0x00044b59) bg_list_pane_g4

0xc7d4,	// (0x0004a741) bg_list_pane_g5_ParamLimits

0xc7d4,	// (0x0004a741) bg_list_pane_g5

0x0004,

0xf9dc,	// (0x0004d949) bg_list_pane_g_ParamLimits

0xf9dc,	// (0x0004d949) bg_list_pane_g

0xb921,	// (0x0004988e) list_double2_graphic_large_graphic_pane_ParamLimits

0xb921,	// (0x0004988e) list_double2_graphic_large_graphic_pane

0xb921,	// (0x0004988e) list_double2_graphic_pane_ParamLimits

0xb921,	// (0x0004988e) list_double2_graphic_pane

0xb921,	// (0x0004988e) list_double2_large_graphic_pane_ParamLimits

0xb921,	// (0x0004988e) list_double2_large_graphic_pane

0xc79e,	// (0x0004a70b) list_double2_pane_ParamLimits

0xc79e,	// (0x0004a70b) list_double2_pane

0xb921,	// (0x0004988e) list_double_graphic_heading_pane_ParamLimits

0xb921,	// (0x0004988e) list_double_graphic_heading_pane

0xb921,	// (0x0004988e) list_double_graphic_pane_ParamLimits

0xb921,	// (0x0004988e) list_double_graphic_pane

0xb921,	// (0x0004988e) list_double_heading_pane_ParamLimits

0xb921,	// (0x0004988e) list_double_heading_pane

0xb921,	// (0x0004988e) list_double_large_graphic_pane_ParamLimits

0xb921,	// (0x0004988e) list_double_large_graphic_pane

0xb921,	// (0x0004988e) list_double_number_pane_ParamLimits

0xb921,	// (0x0004988e) list_double_number_pane

0xb921,	// (0x0004988e) list_double_pane_ParamLimits

0xb921,	// (0x0004988e) list_double_pane

0xb921,	// (0x0004988e) list_double_time_pane_ParamLimits

0xb921,	// (0x0004988e) list_double_time_pane

0xb921,	// (0x0004988e) list_setting_number_pane_ParamLimits

0xb921,	// (0x0004988e) list_setting_number_pane

0xb921,	// (0x0004988e) list_setting_pane_ParamLimits

0xb921,	// (0x0004988e) list_setting_pane

0xc262,	// (0x0004a1cf) list_single_2graphic_pane_ParamLimits

0xc262,	// (0x0004a1cf) list_single_2graphic_pane

0xc262,	// (0x0004a1cf) list_single_graphic_heading_pane_ParamLimits

0xc262,	// (0x0004a1cf) list_single_graphic_heading_pane

0xc262,	// (0x0004a1cf) list_single_graphic_pane_ParamLimits

0xc262,	// (0x0004a1cf) list_single_graphic_pane

0xc262,	// (0x0004a1cf) list_single_heading_pane_ParamLimits

0xc262,	// (0x0004a1cf) list_single_heading_pane

0xc2b8,	// (0x0004a225) list_single_large_graphic_pane_ParamLimits

0xc2b8,	// (0x0004a225) list_single_large_graphic_pane

0xc262,	// (0x0004a1cf) list_single_number_heading_pane_ParamLimits

0xc262,	// (0x0004a1cf) list_single_number_heading_pane

0xc262,	// (0x0004a1cf) list_single_number_pane_ParamLimits

0xc262,	// (0x0004a1cf) list_single_number_pane

0xc262,	// (0x0004a1cf) list_single_pane_ParamLimits

0xc262,	// (0x0004a1cf) list_single_pane

0x42b4,	// (0x00042221) list_highlight_pane_cp1

0xae29,	// (0x00048d96) list_single_pane_g1_ParamLimits

0xae29,	// (0x00048d96) list_single_pane_g1

0xae35,	// (0x00048da2) list_single_pane_g2_ParamLimits

0xae35,	// (0x00048da2) list_single_pane_g2

0x0001,

0xf616,	// (0x0004d583) list_single_pane_g_ParamLimits

0xf616,	// (0x0004d583) list_single_pane_g

0xb90b,	// (0x00049878) list_single_pane_t1_ParamLimits

0xb90b,	// (0x00049878) list_single_pane_t1

0xae29,	// (0x00048d96) list_single_number_pane_g1_ParamLimits

0xae29,	// (0x00048d96) list_single_number_pane_g1

0xae35,	// (0x00048da2) list_single_number_pane_g2_ParamLimits

0xae35,	// (0x00048da2) list_single_number_pane_g2

0x0001,

0xf616,	// (0x0004d583) list_single_number_pane_g_ParamLimits

0xf616,	// (0x0004d583) list_single_number_pane_g

0xb8b3,	// (0x00049820) list_single_number_pane_t1_ParamLimits

0xb8b3,	// (0x00049820) list_single_number_pane_t1

0xb8c9,	// (0x00049836) list_single_number_pane_t2_ParamLimits

0xb8c9,	// (0x00049836) list_single_number_pane_t2

0x0001,

0xf99d,	// (0x0004d90a) list_single_number_pane_t_ParamLimits

0xf99d,	// (0x0004d90a) list_single_number_pane_t

0x8e89,	// (0x00046df6) list_single_graphic_pane_g1_ParamLimits

0x8e89,	// (0x00046df6) list_single_graphic_pane_g1

0xae29,	// (0x00048d96) list_single_graphic_pane_g2_ParamLimits

0xae29,	// (0x00048d96) list_single_graphic_pane_g2

0xae35,	// (0x00048da2) list_single_graphic_pane_g3_ParamLimits

0xae35,	// (0x00048da2) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0004d572) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0004d572) list_single_graphic_pane_g

0x8e95,	// (0x00046e02) list_single_graphic_pane_t1_ParamLimits

0x8e95,	// (0x00046e02) list_single_graphic_pane_t1

0x8eab,	// (0x00046e18) list_single_heading_pane_g1_ParamLimits

0x8eab,	// (0x00046e18) list_single_heading_pane_g1

0xae35,	// (0x00048da2) list_single_heading_pane_g2_ParamLimits

0xae35,	// (0x00048da2) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0004d579) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0004d579) list_single_heading_pane_g

0x8ebe,	// (0x00046e2b) list_single_heading_pane_t1_ParamLimits

0x8ebe,	// (0x00046e2b) list_single_heading_pane_t1

0xae41,	// (0x00048dae) list_single_heading_pane_t2_ParamLimits

0xae41,	// (0x00048dae) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0004d57e) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0004d57e) list_single_heading_pane_t

0xae29,	// (0x00048d96) list_single_number_heading_pane_g1_ParamLimits

0xae29,	// (0x00048d96) list_single_number_heading_pane_g1

0xae35,	// (0x00048da2) list_single_number_heading_pane_g2_ParamLimits

0xae35,	// (0x00048da2) list_single_number_heading_pane_g2

0x0001,

0xf616,	// (0x0004d583) list_single_number_heading_pane_g_ParamLimits

0xf616,	// (0x0004d583) list_single_number_heading_pane_g

0x8ed4,	// (0x00046e41) list_single_number_heading_pane_t1_ParamLimits

0x8ed4,	// (0x00046e41) list_single_number_heading_pane_t1

0x8eea,	// (0x00046e57) list_single_number_heading_pane_t2_ParamLimits

0x8eea,	// (0x00046e57) list_single_number_heading_pane_t2

0x8efc,	// (0x00046e69) list_single_number_heading_pane_t3_ParamLimits

0x8efc,	// (0x00046e69) list_single_number_heading_pane_t3

0x0002,

0xf61b,	// (0x0004d588) list_single_number_heading_pane_t_ParamLimits

0xf61b,	// (0x0004d588) list_single_number_heading_pane_t

0x8f0e,	// (0x00046e7b) list_single_graphic_heading_pane_g1_ParamLimits

0x8f0e,	// (0x00046e7b) list_single_graphic_heading_pane_g1

0xae53,	// (0x00048dc0) list_single_graphic_heading_pane_g4_ParamLimits

0xae53,	// (0x00048dc0) list_single_graphic_heading_pane_g4

0xae35,	// (0x00048da2) list_single_graphic_heading_pane_g5_ParamLimits

0xae35,	// (0x00048da2) list_single_graphic_heading_pane_g5

0x0002,

0xf622,	// (0x0004d58f) list_single_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0004d58f) list_single_graphic_heading_pane_g

0x8ed4,	// (0x00046e41) list_single_graphic_heading_pane_t1_ParamLimits

0x8ed4,	// (0x00046e41) list_single_graphic_heading_pane_t1

0x8f26,	// (0x00046e93) list_single_graphic_heading_pane_t2_ParamLimits

0x8f26,	// (0x00046e93) list_single_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0004d596) list_single_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0004d596) list_single_graphic_heading_pane_t

0xae64,	// (0x00048dd1) list_single_large_graphic_pane_g1_ParamLimits

0xae64,	// (0x00048dd1) list_single_large_graphic_pane_g1

0xae70,	// (0x00048ddd) list_single_large_graphic_pane_g2_ParamLimits

0xae70,	// (0x00048ddd) list_single_large_graphic_pane_g2

0xae7c,	// (0x00048de9) list_single_large_graphic_pane_g3_ParamLimits

0xae7c,	// (0x00048de9) list_single_large_graphic_pane_g3

0x0002,

0xf62e,	// (0x0004d59b) list_single_large_graphic_pane_g_ParamLimits

0xf62e,	// (0x0004d59b) list_single_large_graphic_pane_g

0x5ed9,	// (0x00043e46) wait_border_pane_g2_copy1

0xae88,	// (0x00048df5) list_single_large_graphic_pane_g4_cp2

0x8f3c,	// (0x00046ea9) list_single_large_graphic_pane_t1_ParamLimits

0x8f3c,	// (0x00046ea9) list_single_large_graphic_pane_t1

0x5348,	// (0x000432b5) list_double_pane_g1_ParamLimits

0x5348,	// (0x000432b5) list_double_pane_g1

0x8f52,	// (0x00046ebf) list_double_pane_g2_ParamLimits

0x8f52,	// (0x00046ebf) list_double_pane_g2

0x0001,

0xf635,	// (0x0004d5a2) list_double_pane_g_ParamLimits

0xf635,	// (0x0004d5a2) list_double_pane_g

0x8f5e,	// (0x00046ecb) list_double_pane_t1_ParamLimits

0x8f5e,	// (0x00046ecb) list_double_pane_t1

0x8f74,	// (0x00046ee1) list_double_pane_t2_ParamLimits

0x8f74,	// (0x00046ee1) list_double_pane_t2

0x0001,

0xf63a,	// (0x0004d5a7) list_double_pane_t_ParamLimits

0xf63a,	// (0x0004d5a7) list_double_pane_t

0x8f86,	// (0x00046ef3) list_double2_pane_g1_ParamLimits

0x8f86,	// (0x00046ef3) list_double2_pane_g1

0x8f97,	// (0x00046f04) list_double2_pane_g2_ParamLimits

0x8f97,	// (0x00046f04) list_double2_pane_g2

0x0001,

0xf63f,	// (0x0004d5ac) list_double2_pane_g_ParamLimits

0xf63f,	// (0x0004d5ac) list_double2_pane_g

0x8fa3,	// (0x00046f10) list_double2_pane_t1_ParamLimits

0x8fa3,	// (0x00046f10) list_double2_pane_t1

0x8fb9,	// (0x00046f26) list_double2_pane_t2_ParamLimits

0x8fb9,	// (0x00046f26) list_double2_pane_t2

0x0001,

0xf644,	// (0x0004d5b1) list_double2_pane_t_ParamLimits

0xf644,	// (0x0004d5b1) list_double2_pane_t

0x5348,	// (0x000432b5) list_double_number_pane_g1_ParamLimits

0x5348,	// (0x000432b5) list_double_number_pane_g1

0x8f52,	// (0x00046ebf) list_double_number_pane_g2_ParamLimits

0x8f52,	// (0x00046ebf) list_double_number_pane_g2

0x0001,

0xf635,	// (0x0004d5a2) list_double_number_pane_g_ParamLimits

0xf635,	// (0x0004d5a2) list_double_number_pane_g

0x8fcb,	// (0x00046f38) list_double_number_pane_t1_ParamLimits

0x8fcb,	// (0x00046f38) list_double_number_pane_t1

0x8fdd,	// (0x00046f4a) list_double_number_pane_t2_ParamLimits

0x8fdd,	// (0x00046f4a) list_double_number_pane_t2

0x8ff3,	// (0x00046f60) list_double_number_pane_t3_ParamLimits

0x8ff3,	// (0x00046f60) list_double_number_pane_t3

0x0002,

0xf649,	// (0x0004d5b6) list_double_number_pane_t_ParamLimits

0xf649,	// (0x0004d5b6) list_double_number_pane_t

0x9005,	// (0x00046f72) list_double_graphic_pane_g1_ParamLimits

0x9005,	// (0x00046f72) list_double_graphic_pane_g1

0x668b,	// (0x000445f8) list_double_graphic_pane_g2_ParamLimits

0x668b,	// (0x000445f8) list_double_graphic_pane_g2

0x9011,	// (0x00046f7e) list_double_graphic_pane_g3_ParamLimits

0x9011,	// (0x00046f7e) list_double_graphic_pane_g3

0x0003,

0xf650,	// (0x0004d5bd) list_double_graphic_pane_g_ParamLimits

0xf650,	// (0x0004d5bd) list_double_graphic_pane_g

0x9029,	// (0x00046f96) list_double_graphic_pane_t1_ParamLimits

0x9029,	// (0x00046f96) list_double_graphic_pane_t1

0x903f,	// (0x00046fac) list_double_graphic_pane_t2_ParamLimits

0x903f,	// (0x00046fac) list_double_graphic_pane_t2

0x0001,

0xf659,	// (0x0004d5c6) list_double_graphic_pane_t_ParamLimits

0xf659,	// (0x0004d5c6) list_double_graphic_pane_t

0x9051,	// (0x00046fbe) list_double2_graphic_pane_g1_ParamLimits

0x9051,	// (0x00046fbe) list_double2_graphic_pane_g1

0x905d,	// (0x00046fca) list_double2_graphic_pane_g2_ParamLimits

0x905d,	// (0x00046fca) list_double2_graphic_pane_g2

0x9069,	// (0x00046fd6) list_double2_graphic_pane_g3_ParamLimits

0x9069,	// (0x00046fd6) list_double2_graphic_pane_g3

0x0002,

0xf65e,	// (0x0004d5cb) list_double2_graphic_pane_g_ParamLimits

0xf65e,	// (0x0004d5cb) list_double2_graphic_pane_g

0x9075,	// (0x00046fe2) list_double2_graphic_pane_t1_ParamLimits

0x9075,	// (0x00046fe2) list_double2_graphic_pane_t1

0x908b,	// (0x00046ff8) list_double2_graphic_pane_t2_ParamLimits

0x908b,	// (0x00046ff8) list_double2_graphic_pane_t2

0x0001,

0xf665,	// (0x0004d5d2) list_double2_graphic_pane_t_ParamLimits

0xf665,	// (0x0004d5d2) list_double2_graphic_pane_t

0x909d,	// (0x0004700a) list_double_large_graphic_pane_g1_ParamLimits

0x909d,	// (0x0004700a) list_double_large_graphic_pane_g1

0x90c6,	// (0x00047033) list_double_large_graphic_pane_g2_ParamLimits

0x90c6,	// (0x00047033) list_double_large_graphic_pane_g2

0x8f52,	// (0x00046ebf) list_double_large_graphic_pane_g3_ParamLimits

0x8f52,	// (0x00046ebf) list_double_large_graphic_pane_g3

0x90dc,	// (0x00047049) list_double_large_graphic_pane_g4_ParamLimits

0x90dc,	// (0x00047049) list_double_large_graphic_pane_g4

0x0004,

0xf66a,	// (0x0004d5d7) list_double_large_graphic_pane_g_ParamLimits

0xf66a,	// (0x0004d5d7) list_double_large_graphic_pane_g

0x90ed,	// (0x0004705a) list_double_large_graphic_pane_t1_ParamLimits

0x90ed,	// (0x0004705a) list_double_large_graphic_pane_t1

0x9106,	// (0x00047073) list_double_large_graphic_pane_t2_ParamLimits

0x9106,	// (0x00047073) list_double_large_graphic_pane_t2

0x0001,

0xf675,	// (0x0004d5e2) list_double_large_graphic_pane_t_ParamLimits

0xf675,	// (0x0004d5e2) list_double_large_graphic_pane_t

0x9118,	// (0x00047085) list_double2_large_graphic_pane_g1_ParamLimits

0x9118,	// (0x00047085) list_double2_large_graphic_pane_g1

0x9124,	// (0x00047091) list_double2_large_graphic_pane_g2_ParamLimits

0x9124,	// (0x00047091) list_double2_large_graphic_pane_g2

0x9069,	// (0x00046fd6) list_double2_large_graphic_pane_g3_ParamLimits

0x9069,	// (0x00046fd6) list_double2_large_graphic_pane_g3

0x0002,

0xf67a,	// (0x0004d5e7) list_double2_large_graphic_pane_g_ParamLimits

0xf67a,	// (0x0004d5e7) list_double2_large_graphic_pane_g

0x9135,	// (0x000470a2) list_double2_large_graphic_pane_t1_ParamLimits

0x9135,	// (0x000470a2) list_double2_large_graphic_pane_t1

0x914b,	// (0x000470b8) list_double2_large_graphic_pane_t2_ParamLimits

0x914b,	// (0x000470b8) list_double2_large_graphic_pane_t2

0x0001,

0xf681,	// (0x0004d5ee) list_double2_large_graphic_pane_t_ParamLimits

0xf681,	// (0x0004d5ee) list_double2_large_graphic_pane_t

0x915d,	// (0x000470ca) list_double_heading_pane_g1_ParamLimits

0x915d,	// (0x000470ca) list_double_heading_pane_g1

0x916e,	// (0x000470db) list_double_heading_pane_g2_ParamLimits

0x916e,	// (0x000470db) list_double_heading_pane_g2

0x0001,

0xf686,	// (0x0004d5f3) list_double_heading_pane_g_ParamLimits

0xf686,	// (0x0004d5f3) list_double_heading_pane_g

0x917a,	// (0x000470e7) list_double_heading_pane_t1_ParamLimits

0x917a,	// (0x000470e7) list_double_heading_pane_t1

0x9190,	// (0x000470fd) list_double_heading_pane_t2_ParamLimits

0x9190,	// (0x000470fd) list_double_heading_pane_t2

0x0001,

0xf68b,	// (0x0004d5f8) list_double_heading_pane_t_ParamLimits

0xf68b,	// (0x0004d5f8) list_double_heading_pane_t

0x9051,	// (0x00046fbe) list_double_graphic_heading_pane_g1_ParamLimits

0x9051,	// (0x00046fbe) list_double_graphic_heading_pane_g1

0x915d,	// (0x000470ca) list_double_graphic_heading_pane_g2_ParamLimits

0x915d,	// (0x000470ca) list_double_graphic_heading_pane_g2

0x916e,	// (0x000470db) list_double_graphic_heading_pane_g3_ParamLimits

0x916e,	// (0x000470db) list_double_graphic_heading_pane_g3

0x0002,

0xf690,	// (0x0004d5fd) list_double_graphic_heading_pane_g_ParamLimits

0xf690,	// (0x0004d5fd) list_double_graphic_heading_pane_g

0x91a2,	// (0x0004710f) list_double_graphic_heading_pane_t1_ParamLimits

0x91a2,	// (0x0004710f) list_double_graphic_heading_pane_t1

0x908b,	// (0x00046ff8) list_double_graphic_heading_pane_t2_ParamLimits

0x908b,	// (0x00046ff8) list_double_graphic_heading_pane_t2

0x0001,

0xf697,	// (0x0004d604) list_double_graphic_heading_pane_t_ParamLimits

0xf697,	// (0x0004d604) list_double_graphic_heading_pane_t

0x91b8,	// (0x00047125) list_double_time_pane_g1_ParamLimits

0x91b8,	// (0x00047125) list_double_time_pane_g1

0x91c9,	// (0x00047136) list_double_time_pane_g2_ParamLimits

0x91c9,	// (0x00047136) list_double_time_pane_g2

0x0001,

0xf69c,	// (0x0004d609) list_double_time_pane_g_ParamLimits

0xf69c,	// (0x0004d609) list_double_time_pane_g

0x91d5,	// (0x00047142) list_double_time_pane_t1_ParamLimits

0x91d5,	// (0x00047142) list_double_time_pane_t1

0x91eb,	// (0x00047158) list_double_time_pane_t2_ParamLimits

0x91eb,	// (0x00047158) list_double_time_pane_t2

0x91fd,	// (0x0004716a) list_double_time_pane_t3_ParamLimits

0x91fd,	// (0x0004716a) list_double_time_pane_t3

0x920f,	// (0x0004717c) list_double_time_pane_t4_ParamLimits

0x920f,	// (0x0004717c) list_double_time_pane_t4

0x0003,

0xf6a1,	// (0x0004d60e) list_double_time_pane_t_ParamLimits

0xf6a1,	// (0x0004d60e) list_double_time_pane_t

0x9221,	// (0x0004718e) list_setting_pane_g1_ParamLimits

0x9221,	// (0x0004718e) list_setting_pane_g1

0x922d,	// (0x0004719a) list_setting_pane_g2_ParamLimits

0x922d,	// (0x0004719a) list_setting_pane_g2

0x0001,

0xf6aa,	// (0x0004d617) list_setting_pane_g_ParamLimits

0xf6aa,	// (0x0004d617) list_setting_pane_g

0x9239,	// (0x000471a6) list_setting_pane_t1_ParamLimits

0x9239,	// (0x000471a6) list_setting_pane_t1

0x9253,	// (0x000471c0) list_setting_pane_t2_ParamLimits

0x9253,	// (0x000471c0) list_setting_pane_t2

0x0002,

0xf6af,	// (0x0004d61c) list_setting_pane_t_ParamLimits

0xf6af,	// (0x0004d61c) list_setting_pane_t

0x9292,	// (0x000471ff) set_value_pane_cp_ParamLimits

0x9292,	// (0x000471ff) set_value_pane_cp

0x929e,	// (0x0004720b) list_setting_number_pane_g1_ParamLimits

0x929e,	// (0x0004720b) list_setting_number_pane_g1

0x92aa,	// (0x00047217) list_setting_number_pane_g2_ParamLimits

0x92aa,	// (0x00047217) list_setting_number_pane_g2

0x0001,

0xf6b6,	// (0x0004d623) list_setting_number_pane_g_ParamLimits

0xf6b6,	// (0x0004d623) list_setting_number_pane_g

0x92b6,	// (0x00047223) list_setting_number_pane_t1_ParamLimits

0x92b6,	// (0x00047223) list_setting_number_pane_t1

0x92cf,	// (0x0004723c) list_setting_number_pane_t2_ParamLimits

0x92cf,	// (0x0004723c) list_setting_number_pane_t2

0x92e9,	// (0x00047256) list_setting_number_pane_t3_ParamLimits

0x92e9,	// (0x00047256) list_setting_number_pane_t3

0x0003,

0xf6bb,	// (0x0004d628) list_setting_number_pane_t_ParamLimits

0xf6bb,	// (0x0004d628) list_setting_number_pane_t

0x9292,	// (0x000471ff) set_value_pane_ParamLimits

0x9292,	// (0x000471ff) set_value_pane

0x49ec,	// (0x00042959) bg_set_opt_pane_ParamLimits

0x49ec,	// (0x00042959) bg_set_opt_pane

0x932c,	// (0x00047299) set_value_pane_t1

0x4a0d,	// (0x0004297a) slider_set_pane_cp3

0x4a16,	// (0x00042983) volume_small_pane_cp

0x4a1f,	// (0x0004298c) list_form_gen_pane

0x4a28,	// (0x00042995) scroll_pane_cp8

0x9342,	// (0x000472af) form_field_data_pane_ParamLimits

0x9342,	// (0x000472af) form_field_data_pane

0x9366,	// (0x000472d3) form_field_data_wide_pane_ParamLimits

0x9366,	// (0x000472d3) form_field_data_wide_pane

0x9389,	// (0x000472f6) form_field_popup_pane_ParamLimits

0x9389,	// (0x000472f6) form_field_popup_pane

0x93a9,	// (0x00047316) form_field_popup_wide_pane_ParamLimits

0x93a9,	// (0x00047316) form_field_popup_wide_pane

0x93c8,	// (0x00047335) form_field_slider_pane_ParamLimits

0x93c8,	// (0x00047335) form_field_slider_pane

0x93db,	// (0x00047348) form_field_slider_wide_pane_ParamLimits

0x93db,	// (0x00047348) form_field_slider_wide_pane

0x4a39,	// (0x000429a6) data_form_pane

0xaeaf,	// (0x00048e1c) form_field_data_pane_t1

0x4a45,	// (0x000429b2) input_focus_pane

0x4a53,	// (0x000429c0) data_form_wide_pane

0xaed3,	// (0x00048e40) form_field_data_wide_pane_t1

0x468c,	// (0x000425f9) input_focus_pane_cp6

0xaef5,	// (0x00048e62) form_field_popup_pane_t1

0x4a45,	// (0x000429b2) input_focus_pane_cp7

0x4a7f,	// (0x000429ec) list_form_pane

0xaf15,	// (0x00048e82) form_field_popup_wide_pane_t1

0x4a45,	// (0x000429b2) input_focus_pane_cp8

0x4a8b,	// (0x000429f8) list_form_wide_pane

0xaf32,	// (0x00048e9f) form_field_slider_pane_t1_ParamLimits

0xaf32,	// (0x00048e9f) form_field_slider_pane_t1

0xaf48,	// (0x00048eb5) form_field_slider_pane_t2_ParamLimits

0xaf48,	// (0x00048eb5) form_field_slider_pane_t2

0x0001,

0xf6cb,	// (0x0004d638) form_field_slider_pane_t_ParamLimits

0xf6cb,	// (0x0004d638) form_field_slider_pane_t

0x4302,	// (0x0004226f) input_focus_pane_cp9_ParamLimits

0x4302,	// (0x0004226f) input_focus_pane_cp9

0xaf5d,	// (0x00048eca) slider_cont_pane_ParamLimits

0xaf5d,	// (0x00048eca) slider_cont_pane

0x4a9a,	// (0x00042a07) form_field_slider_wide_pane_t1_ParamLimits

0x4a9a,	// (0x00042a07) form_field_slider_wide_pane_t1

0xaf71,	// (0x00048ede) form_field_slider_wide_pane_t2_ParamLimits

0xaf71,	// (0x00048ede) form_field_slider_wide_pane_t2

0x0001,

0xf6d0,	// (0x0004d63d) form_field_slider_wide_pane_t_ParamLimits

0xf6d0,	// (0x0004d63d) form_field_slider_wide_pane_t

0x4302,	// (0x0004226f) input_focus_pane_cp10_ParamLimits

0x4302,	// (0x0004226f) input_focus_pane_cp10

0xaf83,	// (0x00048ef0) slider_cont_pane_cp1_ParamLimits

0xaf83,	// (0x00048ef0) slider_cont_pane_cp1

0xaf97,	// (0x00048f04) slider_form_pane_cp

0x4aac,	// (0x00042a19) input_focus_pane_g1

0x4ab4,	// (0x00042a21) input_focus_pane_g2

0x4abc,	// (0x00042a29) input_focus_pane_g3

0x4ac4,	// (0x00042a31) input_focus_pane_g4

0x4acc,	// (0x00042a39) input_focus_pane_g5

0x4ad4,	// (0x00042a41) input_focus_pane_g6

0x4adc,	// (0x00042a49) input_focus_pane_g7

0x4ae4,	// (0x00042a51) input_focus_pane_g8

0x4aec,	// (0x00042a59) input_focus_pane_g9

0x42aa,	// (0x00042217) input_focus_pane_g10

0x0009,

0xf6d5,	// (0x0004d642) input_focus_pane_g

0x5ee2,	// (0x00043e4f) wait_border_pane_g3_copy1

0xaf9f,	// (0x00048f0c) data_form_pane_t1

0x42aa,	// (0x00042217) wait_anim_pane_g1_copy1

0xb8db,	// (0x00049848) data_form_wide_pane_t1

0xafba,	// (0x00048f27) list_form_graphic_pane_cp_ParamLimits

0xafba,	// (0x00048f27) list_form_graphic_pane_cp

0x6b71,	// (0x00044ade) slider_form_pane_g1

0x6b7a,	// (0x00044ae7) slider_form_pane_g2

0x0006,

0xf9cd,	// (0x0004d93a) slider_form_pane_g

0xafd3,	// (0x00048f40) list_form_graphic_pane_ParamLimits

0xafd3,	// (0x00048f40) list_form_graphic_pane

0xafef,	// (0x00048f5c) list_form_graphic_pane_g1

0xaff7,	// (0x00048f64) list_form_graphic_pane_t1_ParamLimits

0xaff7,	// (0x00048f64) list_form_graphic_pane_t1

0x4310,	// (0x0004227d) list_highlight_pane_cp5_ParamLimits

0x4310,	// (0x0004227d) list_highlight_pane_cp5

0xb00c,	// (0x00048f79) find_pane_g1

0x4af4,	// (0x00042a61) input_find_pane

0xb015,	// (0x00048f82) input_find_pane_g1_ParamLimits

0xb015,	// (0x00048f82) input_find_pane_g1

0xb021,	// (0x00048f8e) input_find_pane_t1_ParamLimits

0xb021,	// (0x00048f8e) input_find_pane_t1

0xb036,	// (0x00048fa3) input_find_pane_t2_ParamLimits

0xb036,	// (0x00048fa3) input_find_pane_t2

0x0001,

0xf6ea,	// (0x0004d657) input_find_pane_t_ParamLimits

0xf6ea,	// (0x0004d657) input_find_pane_t

0x4afd,	// (0x00042a6a) input_focus_pane_cp5_ParamLimits

0x4afd,	// (0x00042a6a) input_focus_pane_cp5

0xb057,	// (0x00048fc4) bg_popup_window_pane_cp2_ParamLimits

0xb057,	// (0x00048fc4) bg_popup_window_pane_cp2

0xb064,	// (0x00048fd1) listscroll_menu_pane_ParamLimits

0xb064,	// (0x00048fd1) listscroll_menu_pane

0xb070,	// (0x00048fdd) popup_submenu_window_ParamLimits

0xb070,	// (0x00048fdd) popup_submenu_window

0x4b0b,	// (0x00042a78) find_popup_pane_g1

0x4b13,	// (0x00042a80) input_popup_find_pane_cp

0x4afd,	// (0x00042a6a) input_focus_pane_cp4_ParamLimits

0x4afd,	// (0x00042a6a) input_focus_pane_cp4

0x4b1d,	// (0x00042a8a) input_popup_find_pane_t1_ParamLimits

0x4b1d,	// (0x00042a8a) input_popup_find_pane_t1

0x42b4,	// (0x00042221) bg_popup_sub_pane_cp

0x4b4b,	// (0x00042ab8) listscroll_popup_sub_pane

0x4b53,	// (0x00042ac0) list_submenu_pane_ParamLimits

0x4b53,	// (0x00042ac0) list_submenu_pane

0x4b64,	// (0x00042ad1) scroll_pane_cp4

0x4b6c,	// (0x00042ad9) list_single_popup_submenu_pane_ParamLimits

0x4b6c,	// (0x00042ad9) list_single_popup_submenu_pane

0x4b80,	// (0x00042aed) list_single_popup_submenu_pane_g1

0x4b88,	// (0x00042af5) list_single_popup_submenu_pane_t1_ParamLimits

0x4b88,	// (0x00042af5) list_single_popup_submenu_pane_t1

0x4310,	// (0x0004227d) bg_active_tab_pane_cp1_ParamLimits

0x4310,	// (0x0004227d) bg_active_tab_pane_cp1

0xb0a6,	// (0x00049013) tabs_2_active_pane_g1

0xb0ae,	// (0x0004901b) tabs_2_active_pane_t1

0x4310,	// (0x0004227d) bg_passive_tab_pane_cp1_ParamLimits

0x4310,	// (0x0004227d) bg_passive_tab_pane_cp1

0xb0a6,	// (0x00049013) tabs_2_passive_pane_g1

0xb0ae,	// (0x0004901b) tabs_2_passive_pane_t1

0x63a7,	// (0x00044314) bg_active_tab_pane_cp4

0xb0c0,	// (0x0004902d) tabs_2_long_active_pane_t1

0xb0d3,	// (0x00049040) bg_passive_tab_pane_cp4

0x9a29,	// (0x00047996) list_single_midp_graphic_pane_g4_ParamLimits

0x63a7,	// (0x00044314) bg_active_tab_pane_cp5

0xb0df,	// (0x0004904c) tabs_3_long_active_pane_t1

0xb0d3,	// (0x00049040) bg_passive_tab_pane_cp5

0x9a29,	// (0x00047996) list_single_midp_graphic_pane_g4

0x4310,	// (0x0004227d) bg_popup_window_pane_cp13_ParamLimits

0x4310,	// (0x0004227d) bg_popup_window_pane_cp13

0x4bb2,	// (0x00042b1f) listscroll_popup_fast_pane_ParamLimits

0x4bb2,	// (0x00042b1f) listscroll_popup_fast_pane

0x4bc1,	// (0x00042b2e) grid_popup_fast_pane_ParamLimits

0x4bc1,	// (0x00042b2e) grid_popup_fast_pane

0x4bd3,	// (0x00042b40) scroll_pane_cp9_ParamLimits

0x4bd3,	// (0x00042b40) scroll_pane_cp9

0x7ded,	// (0x00045d5a) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7ded,	// (0x00045d5a) list_single_graphic_hl_pane_t1_cp2

0x4bf7,	// (0x00042b64) input_focus_pane_cp20_ParamLimits

0x4bf7,	// (0x00042b64) input_focus_pane_cp20

0x4c05,	// (0x00042b72) query_popup_data_pane_t1_ParamLimits

0x4c05,	// (0x00042b72) query_popup_data_pane_t1

0x4c18,	// (0x00042b85) query_popup_data_pane_t2_ParamLimits

0x4c18,	// (0x00042b85) query_popup_data_pane_t2

0x4c5e,	// (0x00042bcb) query_popup_data_pane_t3_ParamLimits

0x4c5e,	// (0x00042bcb) query_popup_data_pane_t3

0x4c9f,	// (0x00042c0c) query_popup_data_pane_t4_ParamLimits

0x4c9f,	// (0x00042c0c) query_popup_data_pane_t4

0x4cdb,	// (0x00042c48) query_popup_data_pane_t5_ParamLimits

0x4cdb,	// (0x00042c48) query_popup_data_pane_t5

0x0004,

0xf6ef,	// (0x0004d65c) query_popup_data_pane_t_ParamLimits

0xf6ef,	// (0x0004d65c) query_popup_data_pane_t

0x4aac,	// (0x00042a19) bg_set_opt_pane_g1

0x4ab4,	// (0x00042a21) bg_set_opt_pane_g2

0x4abc,	// (0x00042a29) bg_set_opt_pane_g3

0x4ac4,	// (0x00042a31) bg_set_opt_pane_g4

0x4acc,	// (0x00042a39) bg_set_opt_pane_g5

0x4ad4,	// (0x00042a41) bg_set_opt_pane_g6

0x4adc,	// (0x00042a49) bg_set_opt_pane_g7

0x4ae4,	// (0x00042a51) bg_set_opt_pane_g8

0x4aec,	// (0x00042a59) bg_set_opt_pane_g9

0x0008,

0xf6fa,	// (0x0004d667) bg_set_opt_pane_g

0x968d,	// (0x000475fa) control_top_pane_stacon_ParamLimits

0x968d,	// (0x000475fa) control_top_pane_stacon

0x96e0,	// (0x0004764d) signal_pane_stacon_ParamLimits

0x96e0,	// (0x0004764d) signal_pane_stacon

0x5159,	// (0x000430c6) stacon_top_pane_g1_ParamLimits

0x5159,	// (0x000430c6) stacon_top_pane_g1

0x9705,	// (0x00047672) title_pane_stacon_ParamLimits

0x9705,	// (0x00047672) title_pane_stacon

0x972f,	// (0x0004769c) uni_indicator_pane_stacon_ParamLimits

0x972f,	// (0x0004769c) uni_indicator_pane_stacon

0x9744,	// (0x000476b1) battery_pane_stacon_ParamLimits

0x9744,	// (0x000476b1) battery_pane_stacon

0x9788,	// (0x000476f5) control_bottom_pane_stacon_ParamLimits

0x9788,	// (0x000476f5) control_bottom_pane_stacon

0x97ab,	// (0x00047718) navi_pane_stacon_ParamLimits

0x97ab,	// (0x00047718) navi_pane_stacon

0x517b,	// (0x000430e8) stacon_bottom_pane_g1_ParamLimits

0x517b,	// (0x000430e8) stacon_bottom_pane_g1

0x93ee,	// (0x0004735b) aid_levels_signal_lsc_ParamLimits

0x93ee,	// (0x0004735b) aid_levels_signal_lsc

0x9405,	// (0x00047372) signal_pane_stacon_g1_ParamLimits

0x9405,	// (0x00047372) signal_pane_stacon_g1

0x9419,	// (0x00047386) signal_pane_stacon_g2_ParamLimits

0x9419,	// (0x00047386) signal_pane_stacon_g2

0x0001,

0xf70d,	// (0x0004d67a) signal_pane_stacon_g_ParamLimits

0xf70d,	// (0x0004d67a) signal_pane_stacon_g

0x944e,	// (0x000473bb) title_pane_stacon_t1_ParamLimits

0x944e,	// (0x000473bb) title_pane_stacon_t1

0x4d33,	// (0x00042ca0) uni_indicator_pane_stacon_g1

0x4d3d,	// (0x00042caa) uni_indicator_pane_stacon_g2

0x4d1f,	// (0x00042c8c) uni_indicator_pane_stacon_g3

0x4d29,	// (0x00042c96) uni_indicator_pane_stacon_g4

0x0003,

0xf719,	// (0x0004d686) uni_indicator_pane_stacon_g

0x9473,	// (0x000473e0) control_top_pane_stacon_g1

0x947b,	// (0x000473e8) control_top_pane_stacon_t1_ParamLimits

0x947b,	// (0x000473e8) control_top_pane_stacon_t1

0x94b2,	// (0x0004741f) aid_levels_battery_lsc_ParamLimits

0x94b2,	// (0x0004741f) aid_levels_battery_lsc

0x94ca,	// (0x00047437) battery_pane_stacon_g1_ParamLimits

0x94ca,	// (0x00047437) battery_pane_stacon_g1

0x94dd,	// (0x0004744a) battery_pane_stacon_g2_ParamLimits

0x94dd,	// (0x0004744a) battery_pane_stacon_g2

0x0001,

0xf722,	// (0x0004d68f) battery_pane_stacon_g_ParamLimits

0xf722,	// (0x0004d68f) battery_pane_stacon_g

0x951b,	// (0x00047488) navi_icon_pane_stacon

0x952f,	// (0x0004749c) navi_navi_pane_stacon

0x951b,	// (0x00047488) navi_text_pane_stacon

0x9473,	// (0x000473e0) control_bottom_pane_stacon_g1

0x9543,	// (0x000474b0) control_bottom_pane_stacon_t1_ParamLimits

0x9543,	// (0x000474b0) control_bottom_pane_stacon_t1

0xb0f1,	// (0x0004905e) grid_app_pane_ParamLimits

0xb0f1,	// (0x0004905e) grid_app_pane

0xb115,	// (0x00049082) scroll_pane_cp15_ParamLimits

0xb115,	// (0x00049082) scroll_pane_cp15

0xb12a,	// (0x00049097) cell_app_pane_ParamLimits

0xb12a,	// (0x00049097) cell_app_pane

0xb14e,	// (0x000490bb) cell_app_pane_g1_ParamLimits

0xb14e,	// (0x000490bb) cell_app_pane_g1

0x4d61,	// (0x00042cce) cell_app_pane_g2_ParamLimits

0x4d61,	// (0x00042cce) cell_app_pane_g2

0x0001,

0xf727,	// (0x0004d694) cell_app_pane_g_ParamLimits

0xf727,	// (0x0004d694) cell_app_pane_g

0x4d6d,	// (0x00042cda) cell_app_pane_t1_ParamLimits

0x4d6d,	// (0x00042cda) cell_app_pane_t1

0x4d7f,	// (0x00042cec) grid_highlight_pane_ParamLimits

0x4d7f,	// (0x00042cec) grid_highlight_pane

0x4aac,	// (0x00042a19) cell_highlight_pane_g1

0x4ab4,	// (0x00042a21) cell_highlight_pane_g2

0x4abc,	// (0x00042a29) cell_highlight_pane_g3

0x4ac4,	// (0x00042a31) cell_highlight_pane_g4

0x4acc,	// (0x00042a39) cell_highlight_pane_g5

0x4ad4,	// (0x00042a41) cell_highlight_pane_g6

0x4adc,	// (0x00042a49) cell_highlight_pane_g7

0x4ae4,	// (0x00042a51) cell_highlight_pane_g8

0x4aec,	// (0x00042a59) cell_highlight_pane_g9

0x42aa,	// (0x00042217) cell_highlight_pane_g10

0x0009,

0xf6d5,	// (0x0004d642) cell_highlight_pane_g

0x4d90,	// (0x00042cfd) bg_scroll_pane

0x958d,	// (0x000474fa) scroll_handle_pane

0x4de0,	// (0x00042d4d) scroll_bg_pane_g1

0x4df5,	// (0x00042d62) scroll_bg_pane_g2

0x4e0d,	// (0x00042d7a) scroll_bg_pane_g3

0x0002,

0xf72c,	// (0x0004d699) scroll_bg_pane_g

0x4e22,	// (0x00042d8f) scroll_handle_focus_pane_ParamLimits

0x4e22,	// (0x00042d8f) scroll_handle_focus_pane

0x4de0,	// (0x00042d4d) scroll_handle_pane_g1

0x4e2f,	// (0x00042d9c) scroll_handle_pane_g2

0x4e0d,	// (0x00042d7a) scroll_handle_pane_g3

0x0002,

0xf733,	// (0x0004d6a0) scroll_handle_pane_g

0x4afd,	// (0x00042a6a) bg_popup_sub_pane_cp21_ParamLimits

0x4afd,	// (0x00042a6a) bg_popup_sub_pane_cp21

0x4e43,	// (0x00042db0) popup_fep_japan_predictive_window_t1_ParamLimits

0x4e43,	// (0x00042db0) popup_fep_japan_predictive_window_t1

0x4e5d,	// (0x00042dca) popup_fep_japan_predictive_window_t2_ParamLimits

0x4e5d,	// (0x00042dca) popup_fep_japan_predictive_window_t2

0x4e90,	// (0x00042dfd) popup_fep_japan_predictive_window_t3_ParamLimits

0x4e90,	// (0x00042dfd) popup_fep_japan_predictive_window_t3

0x0002,

0xf73a,	// (0x0004d6a7) popup_fep_japan_predictive_window_t_ParamLimits

0xf73a,	// (0x0004d6a7) popup_fep_japan_predictive_window_t

0x42b4,	// (0x00042221) bg_popup_sub_pane_cp23

0x4ec7,	// (0x00042e34) listscroll_japin_cand_pane

0x4ecf,	// (0x00042e3c) popup_fep_japan_candidate_window_t1

0x4edd,	// (0x00042e4a) candidate_pane_ParamLimits

0x4edd,	// (0x00042e4a) candidate_pane

0x4eef,	// (0x00042e5c) scroll_pane_cp30

0x4ef7,	// (0x00042e64) list_single_popup_jap_candidate_pane_ParamLimits

0x4ef7,	// (0x00042e64) list_single_popup_jap_candidate_pane

0x42b4,	// (0x00042221) list_highlight_pane_cp30

0x4f0c,	// (0x00042e79) list_single_popup_jap_candidate_pane_t1

0x4f1b,	// (0x00042e88) level_1_signal

0x4f28,	// (0x00042e95) level_2_signal

0x4f35,	// (0x00042ea2) level_3_signal

0x4f42,	// (0x00042eaf) level_4_signal

0x4f4f,	// (0x00042ebc) level_5_signal

0x4f5c,	// (0x00042ec9) level_6_signal

0x4f69,	// (0x00042ed6) level_7_signal

0x4f1b,	// (0x00042e88) level_1_battery

0x4f28,	// (0x00042e95) level_2_battery

0x4f35,	// (0x00042ea2) level_3_battery

0x4f42,	// (0x00042eaf) level_4_battery

0x4f4f,	// (0x00042ebc) level_5_battery

0x4f5c,	// (0x00042ec9) level_6_battery

0x4f69,	// (0x00042ed6) level_7_battery

0x4f8e,	// (0x00042efb) list_menu_pane_ParamLimits

0x4f8e,	// (0x00042efb) list_menu_pane

0x4f9f,	// (0x00042f0c) scroll_pane_cp25_ParamLimits

0x4f9f,	// (0x00042f0c) scroll_pane_cp25

0x4fb8,	// (0x00042f25) list_double2_graphic_pane_cp2_ParamLimits

0x4fb8,	// (0x00042f25) list_double2_graphic_pane_cp2

0x4fb8,	// (0x00042f25) list_double2_large_graphic_pane_cp2_ParamLimits

0x4fb8,	// (0x00042f25) list_double2_large_graphic_pane_cp2

0x4fb8,	// (0x00042f25) list_double2_pane_cp2_ParamLimits

0x4fb8,	// (0x00042f25) list_double2_pane_cp2

0x4fb8,	// (0x00042f25) list_double_graphic_pane_cp2_ParamLimits

0x4fb8,	// (0x00042f25) list_double_graphic_pane_cp2

0x4fb8,	// (0x00042f25) list_double_large_graphic_pane_cp2_ParamLimits

0x4fb8,	// (0x00042f25) list_double_large_graphic_pane_cp2

0x4fb8,	// (0x00042f25) list_double_number_pane_cp2_ParamLimits

0x4fb8,	// (0x00042f25) list_double_number_pane_cp2

0x4fb8,	// (0x00042f25) list_double_pane_cp2_ParamLimits

0x4fb8,	// (0x00042f25) list_double_pane_cp2

0xb186,	// (0x000490f3) list_single_2graphic_pane_cp2_ParamLimits

0xb186,	// (0x000490f3) list_single_2graphic_pane_cp2

0xb186,	// (0x000490f3) list_single_graphic_heading_pane_cp2_ParamLimits

0xb186,	// (0x000490f3) list_single_graphic_heading_pane_cp2

0xb186,	// (0x000490f3) list_single_graphic_pane_cp2_ParamLimits

0xb186,	// (0x000490f3) list_single_graphic_pane_cp2

0xb186,	// (0x000490f3) list_single_heading_pane_cp2_ParamLimits

0xb186,	// (0x000490f3) list_single_heading_pane_cp2

0x4fc8,	// (0x00042f35) list_single_large_graphic_pane_cp2_ParamLimits

0x4fc8,	// (0x00042f35) list_single_large_graphic_pane_cp2

0xb186,	// (0x000490f3) list_single_number_heading_pane_cp2_ParamLimits

0xb186,	// (0x000490f3) list_single_number_heading_pane_cp2

0xb186,	// (0x000490f3) list_single_number_pane_cp2_ParamLimits

0xb186,	// (0x000490f3) list_single_number_pane_cp2

0xb186,	// (0x000490f3) list_single_pane_cp2_ParamLimits

0xb186,	// (0x000490f3) list_single_pane_cp2

0x4fe2,	// (0x00042f4f) bg_popup_sub_pane_cp22

0x963f,	// (0x000475ac) popup_side_volume_key_window_g1

0x9669,	// (0x000475d6) popup_side_volume_key_window_t1

0x9685,	// (0x000475f2) volume_small_pane_cp1

0x4302,	// (0x0004226f) bg_popup_sub_pane_cp24_ParamLimits

0x4302,	// (0x0004226f) bg_popup_sub_pane_cp24

0x4ff8,	// (0x00042f65) fep_china_uni_candidate_pane_ParamLimits

0x4ff8,	// (0x00042f65) fep_china_uni_candidate_pane

0x500c,	// (0x00042f79) fep_china_uni_entry_pane

0x501c,	// (0x00042f89) popup_fep_china_uni_window_g1

0x5038,	// (0x00042fa5) fep_china_uni_entry_pane_g1

0x5040,	// (0x00042fad) fep_china_uni_entry_pane_g2

0x0001,

0xf767,	// (0x0004d6d4) fep_china_uni_entry_pane_g

0x5048,	// (0x00042fb5) fep_entry_item_pane

0x5052,	// (0x00042fbf) fep_candidate_item_pane

0x505a,	// (0x00042fc7) fep_china_uni_candidate_pane_g1

0x5062,	// (0x00042fcf) fep_china_uni_candidate_pane_g2

0x506a,	// (0x00042fd7) fep_china_uni_candidate_pane_g3

0x5072,	// (0x00042fdf) fep_china_uni_candidate_pane_g4

0x0003,

0xf76c,	// (0x0004d6d9) fep_china_uni_candidate_pane_g

0x42aa,	// (0x00042217) fep_entry_item_pane_g1

0x507a,	// (0x00042fe7) fep_entry_item_pane_t1_ParamLimits

0x507a,	// (0x00042fe7) fep_entry_item_pane_t1

0x5090,	// (0x00042ffd) fep_candidate_item_pane_t1_ParamLimits

0x5090,	// (0x00042ffd) fep_candidate_item_pane_t1

0x50a5,	// (0x00043012) fep_candidate_item_pane_t2_ParamLimits

0x50a5,	// (0x00043012) fep_candidate_item_pane_t2

0x0001,

0xf775,	// (0x0004d6e2) fep_candidate_item_pane_t_ParamLimits

0xf775,	// (0x0004d6e2) fep_candidate_item_pane_t

0x4310,	// (0x0004227d) list_highlight_pane_cp31_ParamLimits

0x4310,	// (0x0004227d) list_highlight_pane_cp31

0x50b7,	// (0x00043024) level_1_signal_lsc

0x50c0,	// (0x0004302d) level_2_signal_lsc

0x50c9,	// (0x00043036) level_3_signal_lsc

0x50d2,	// (0x0004303f) level_4_signal_lsc

0x50db,	// (0x00043048) level_5_signal_lsc

0x50e4,	// (0x00043051) level_6_signal_lsc

0x50ed,	// (0x0004305a) level_7_signal_lsc

0x50ed,	// (0x0004305a) level_1_battery_lsc

0x50f6,	// (0x00043063) level_2_battery_lsc

0x50ff,	// (0x0004306c) level_3_battery_lsc

0x5108,	// (0x00043075) level_4_battery_lsc

0x5111,	// (0x0004307e) level_5_battery_lsc

0x511a,	// (0x00043087) level_6_battery_lsc

0x50b7,	// (0x00043024) level_7_battery_lsc

0x5123,	// (0x00043090) scroll_handle_focus_pane_g1

0x512c,	// (0x00043099) scroll_handle_focus_pane_g2

0x5135,	// (0x000430a2) scroll_handle_focus_pane_g3

0x0002,

0xf77a,	// (0x0004d6e7) scroll_handle_focus_pane_g

0xb1db,	// (0x00049148) list_single_2graphic_pane_g1_ParamLimits

0xb1db,	// (0x00049148) list_single_2graphic_pane_g1

0xae53,	// (0x00048dc0) list_single_2graphic_pane_g2_ParamLimits

0xae53,	// (0x00048dc0) list_single_2graphic_pane_g2

0xae35,	// (0x00048da2) list_single_2graphic_pane_g3_ParamLimits

0xae35,	// (0x00048da2) list_single_2graphic_pane_g3

0xb1e7,	// (0x00049154) list_single_2graphic_pane_g4_ParamLimits

0xb1e7,	// (0x00049154) list_single_2graphic_pane_g4

0x0003,

0xf781,	// (0x0004d6ee) list_single_2graphic_pane_g_ParamLimits

0xf781,	// (0x0004d6ee) list_single_2graphic_pane_g

0xb1f3,	// (0x00049160) list_single_2graphic_pane_t1_ParamLimits

0xb1f3,	// (0x00049160) list_single_2graphic_pane_t1

0xb221,	// (0x0004918e) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb221,	// (0x0004918e) list_double2_graphic_large_graphic_pane_g1

0x9124,	// (0x00047091) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9124,	// (0x00047091) list_double2_graphic_large_graphic_pane_g2

0x9069,	// (0x00046fd6) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9069,	// (0x00046fd6) list_double2_graphic_large_graphic_pane_g3

0xb231,	// (0x0004919e) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb231,	// (0x0004919e) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf78a,	// (0x0004d6f7) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf78a,	// (0x0004d6f7) list_double2_graphic_large_graphic_pane_g

0xb23d,	// (0x000491aa) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb23d,	// (0x000491aa) list_double2_graphic_large_graphic_pane_t1

0xb253,	// (0x000491c0) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb253,	// (0x000491c0) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf793,	// (0x0004d700) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf793,	// (0x0004d700) list_double2_graphic_large_graphic_pane_t

0x51f6,	// (0x00043163) popup_fast_swap_window_ParamLimits

0x51f6,	// (0x00043163) popup_fast_swap_window

0x5212,	// (0x0004317f) popup_side_volume_key_window

0x522e,	// (0x0004319b) stacon_top_pane

0x5238,	// (0x000431a5) status_pane_ParamLimits

0x5238,	// (0x000431a5) status_pane

0x522e,	// (0x0004319b) status_small_pane

0x42b4,	// (0x00042221) control_pane

0x42b4,	// (0x00042221) stacon_bottom_pane

0x4a28,	// (0x00042995) scroll_pane_cp121

0x4a1f,	// (0x0004298c) set_content_pane

0xb265,	// (0x000491d2) bg_active_tab_pane_g1_cp1

0x5147,	// (0x000430b4) bg_active_tab_pane_g2_cp1

0xb26e,	// (0x000491db) bg_active_tab_pane_g3_cp1

0xb265,	// (0x000491d2) bg_passive_tab_pane_g1_cp1

0x5147,	// (0x000430b4) bg_passive_tab_pane_g2_cp1

0xb26e,	// (0x000491db) bg_passive_tab_pane_g3_cp1

0x5150,	// (0x000430bd) bg_active_tab_pane_g1_cp2

0x5147,	// (0x000430b4) bg_active_tab_pane_g2_cp2

0x513e,	// (0x000430ab) bg_active_tab_pane_g3_cp2

0x5150,	// (0x000430bd) bg_passive_tab_pane_g1_cp2

0x5147,	// (0x000430b4) bg_passive_tab_pane_g2_cp2

0x513e,	// (0x000430ab) bg_passive_tab_pane_g3_cp2

0xb277,	// (0x000491e4) bg_active_tab_pane_g1_cp3

0x5147,	// (0x000430b4) bg_active_tab_pane_g2_cp3

0xb280,	// (0x000491ed) bg_active_tab_pane_g3_cp3

0xb277,	// (0x000491e4) bg_passive_tab_pane_g1_cp3

0x5147,	// (0x000430b4) bg_passive_tab_pane_g2_cp3

0xb280,	// (0x000491ed) bg_passive_tab_pane_g3_cp3

0xb289,	// (0x000491f6) bg_active_tab_pane_g1_cp4

0x5147,	// (0x000430b4) bg_active_tab_pane_g2_cp4

0xb294,	// (0x00049201) bg_active_tab_pane_g3_cp4

0xb289,	// (0x000491f6) bg_passive_tab_pane_g1_cp4

0x5147,	// (0x000430b4) bg_passive_tab_pane_g2_cp4

0xb294,	// (0x00049201) bg_passive_tab_pane_g3_cp4

0x51a0,	// (0x0004310d) bg_active_tab_pane_g1_cp5

0x5147,	// (0x000430b4) bg_active_tab_pane_g2_cp5

0x5197,	// (0x00043104) bg_active_tab_pane_g3_cp5

0x51a0,	// (0x0004310d) bg_passive_tab_pane_g1_cp5

0x5147,	// (0x000430b4) bg_passive_tab_pane_g2_cp5

0x5197,	// (0x00043104) bg_passive_tab_pane_g3_cp5

0xb29f,	// (0x0004920c) list_set_graphic_pane_ParamLimits

0xb29f,	// (0x0004920c) list_set_graphic_pane

0x42b4,	// (0x00042221) bg_set_opt_pane_cp4

0xb2bc,	// (0x00049229) list_set_graphic_pane_g1_ParamLimits

0xb2bc,	// (0x00049229) list_set_graphic_pane_g1

0xb2c8,	// (0x00049235) list_set_graphic_pane_g2_ParamLimits

0xb2c8,	// (0x00049235) list_set_graphic_pane_g2

0x0001,

0xf798,	// (0x0004d705) list_set_graphic_pane_g_ParamLimits

0xf798,	// (0x0004d705) list_set_graphic_pane_g

0x0009,

0xfaee,	// (0x0004da5b) volume_small_pane_cp_g

0x51a9,	// (0x00043116) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x51a9,	// (0x00043116) list_double2_large_graphic_pane_g1_cp2

0x51b5,	// (0x00043122) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x51b5,	// (0x00043122) list_double2_large_graphic_pane_g2_cp2

0x51c6,	// (0x00043133) list_double2_large_graphic_pane_g3_cp2

0x51ce,	// (0x0004313b) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x51ce,	// (0x0004313b) list_double2_large_graphic_pane_t1_cp2

0x51e4,	// (0x00043151) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x51e4,	// (0x00043151) list_double2_large_graphic_pane_t2_cp2

0x6911,	// (0x0004487e) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x6911,	// (0x0004487e) list_double_large_graphic_pane_g1_cp2

0x6922,	// (0x0004488f) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x6922,	// (0x0004488f) list_double_large_graphic_pane_g2_cp2

0x5354,	// (0x000432c1) list_double_large_graphic_pane_g3_cp2

0x6933,	// (0x000448a0) list_double_large_graphic_pane_g4_cp

0x6947,	// (0x000448b4) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6947,	// (0x000448b4) list_double_large_graphic_pane_t1_cp2

0x695e,	// (0x000448cb) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x695e,	// (0x000448cb) list_double_large_graphic_pane_t2_cp2

0x5246,	// (0x000431b3) list_double2_graphic_pane_g1_cp2_ParamLimits

0x5246,	// (0x000431b3) list_double2_graphic_pane_g1_cp2

0x5254,	// (0x000431c1) list_double2_graphic_pane_g2_cp2_ParamLimits

0x5254,	// (0x000431c1) list_double2_graphic_pane_g2_cp2

0x5265,	// (0x000431d2) list_double2_graphic_pane_g3_cp2

0x526f,	// (0x000431dc) list_double2_graphic_pane_t1_cp2_ParamLimits

0x526f,	// (0x000431dc) list_double2_graphic_pane_t1_cp2

0x5285,	// (0x000431f2) list_double2_graphic_pane_t2_cp2_ParamLimits

0x5285,	// (0x000431f2) list_double2_graphic_pane_t2_cp2

0x5297,	// (0x00043204) list_single_number_heading_pane_g1_cp2_ParamLimits

0x5297,	// (0x00043204) list_single_number_heading_pane_g1_cp2

0x52a3,	// (0x00043210) list_single_number_heading_pane_g2_cp2

0x52ab,	// (0x00043218) list_single_number_heading_pane_t1_cp2_ParamLimits

0x52ab,	// (0x00043218) list_single_number_heading_pane_t1_cp2

0x52c1,	// (0x0004322e) list_single_number_heading_pane_t2_cp2_ParamLimits

0x52c1,	// (0x0004322e) list_single_number_heading_pane_t2_cp2

0x52d3,	// (0x00043240) list_single_number_heading_pane_t3_cp2_ParamLimits

0x52d3,	// (0x00043240) list_single_number_heading_pane_t3_cp2

0x5297,	// (0x00043204) list_single_heading_pane_g1_cp2_ParamLimits

0x5297,	// (0x00043204) list_single_heading_pane_g1_cp2

0x52a3,	// (0x00043210) list_single_heading_pane_g2_cp2

0x52ab,	// (0x00043218) list_single_heading_pane_t1_cp2_ParamLimits

0x52ab,	// (0x00043218) list_single_heading_pane_t1_cp2

0x6719,	// (0x00044686) list_single_heading_pane_t2_cp2_ParamLimits

0x6719,	// (0x00044686) list_single_heading_pane_t2_cp2

0x667f,	// (0x000445ec) list_double_graphic_pane_g1_cp2_ParamLimits

0x667f,	// (0x000445ec) list_double_graphic_pane_g1_cp2

0x668b,	// (0x000445f8) list_double_graphic_pane_g2_cp2_ParamLimits

0x668b,	// (0x000445f8) list_double_graphic_pane_g2_cp2

0x669a,	// (0x00044607) list_double_graphic_pane_g3_cp2

0x66a2,	// (0x0004460f) list_double_graphic_pane_t1_cp2_ParamLimits

0x66a2,	// (0x0004460f) list_double_graphic_pane_t1_cp2

0x66b8,	// (0x00044625) list_double_graphic_pane_t2_cp2_ParamLimits

0x66b8,	// (0x00044625) list_double_graphic_pane_t2_cp2

0x5348,	// (0x000432b5) list_double_number_pane_g1_cp2_ParamLimits

0x5348,	// (0x000432b5) list_double_number_pane_g1_cp2

0x5354,	// (0x000432c1) list_double_number_pane_g2_cp2

0x6643,	// (0x000445b0) list_double_number_pane_t1_cp2_ParamLimits

0x6643,	// (0x000445b0) list_double_number_pane_t1_cp2

0x6657,	// (0x000445c4) list_double_number_pane_t2_cp2_ParamLimits

0x6657,	// (0x000445c4) list_double_number_pane_t2_cp2

0x666d,	// (0x000445da) list_double_number_pane_t3_cp2_ParamLimits

0x666d,	// (0x000445da) list_double_number_pane_t3_cp2

0x65ba,	// (0x00044527) list_single_graphic_pane_g1_cp2_ParamLimits

0x65ba,	// (0x00044527) list_single_graphic_pane_g1_cp2

0x53ac,	// (0x00043319) list_single_graphic_pane_g2_cp2_ParamLimits

0x53ac,	// (0x00043319) list_single_graphic_pane_g2_cp2

0x53b8,	// (0x00043325) list_single_graphic_pane_g3_cp2

0x6590,	// (0x000444fd) list_single_graphic_pane_t1_cp2_ParamLimits

0x6590,	// (0x000444fd) list_single_graphic_pane_t1_cp2

0x53ac,	// (0x00043319) list_single_number_pane_g1_cp2_ParamLimits

0x53ac,	// (0x00043319) list_single_number_pane_g1_cp2

0x53b8,	// (0x00043325) list_single_number_pane_g2_cp2

0x6590,	// (0x000444fd) list_single_number_pane_t1_cp2_ParamLimits

0x6590,	// (0x000444fd) list_single_number_pane_t1_cp2

0x65a6,	// (0x00044513) list_single_number_pane_t2_cp2_ParamLimits

0x65a6,	// (0x00044513) list_single_number_pane_t2_cp2

0x51b5,	// (0x00043122) list_double2_pane_g1_cp2_ParamLimits

0x51b5,	// (0x00043122) list_double2_pane_g1_cp2

0x51c6,	// (0x00043133) list_double2_pane_g2_cp2

0x5320,	// (0x0004328d) list_double2_pane_t1_cp2_ParamLimits

0x5320,	// (0x0004328d) list_double2_pane_t1_cp2

0x5336,	// (0x000432a3) list_double2_pane_t2_cp2_ParamLimits

0x5336,	// (0x000432a3) list_double2_pane_t2_cp2

0x5348,	// (0x000432b5) list_double_pane_g1_cp2_ParamLimits

0x5348,	// (0x000432b5) list_double_pane_g1_cp2

0x5354,	// (0x000432c1) list_double_pane_g2_cp2

0x535c,	// (0x000432c9) list_double_pane_t1_cp2_ParamLimits

0x535c,	// (0x000432c9) list_double_pane_t1_cp2

0x5372,	// (0x000432df) list_double_pane_t2_cp2_ParamLimits

0x5372,	// (0x000432df) list_double_pane_t2_cp2

0x539c,	// (0x00043309) list_single_pane_cp2_g3

0x53ac,	// (0x00043319) list_single_pane_g1_cp2_ParamLimits

0x53ac,	// (0x00043319) list_single_pane_g1_cp2

0x53b8,	// (0x00043325) list_single_pane_g2_cp2

0x53c0,	// (0x0004332d) list_single_pane_t1_cp2_ParamLimits

0x53c0,	// (0x0004332d) list_single_pane_t1_cp2

0x53d8,	// (0x00043345) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x53d8,	// (0x00043345) list_single_large_graphic_pane_g1_cp2

0x53e4,	// (0x00043351) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x53e4,	// (0x00043351) list_single_large_graphic_pane_g2_cp2

0x53f0,	// (0x0004335d) list_single_large_graphic_pane_g3_cp2

0x53f8,	// (0x00043365) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x53f8,	// (0x00043365) list_single_large_graphic_pane_g4_cp1

0x5412,	// (0x0004337f) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x5412,	// (0x0004337f) list_single_large_graphic_pane_t1_cp2

0x655c,	// (0x000444c9) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x655c,	// (0x000444c9) list_single_graphic_heading_pane_g1_cp2

0x6529,	// (0x00044496) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x6529,	// (0x00044496) list_single_graphic_heading_pane_g4_cp2

0x53b8,	// (0x00043325) list_single_graphic_heading_pane_g5_cp2

0x6568,	// (0x000444d5) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x6568,	// (0x000444d5) list_single_graphic_heading_pane_t1_cp2

0x657e,	// (0x000444eb) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x657e,	// (0x000444eb) list_single_graphic_heading_pane_t2_cp2

0x651d,	// (0x0004448a) list_single_2graphic_pane_g1_cp2_ParamLimits

0x651d,	// (0x0004448a) list_single_2graphic_pane_g1_cp2

0x6529,	// (0x00044496) list_single_2graphic_pane_g2_cp2_ParamLimits

0x6529,	// (0x00044496) list_single_2graphic_pane_g2_cp2

0x53b8,	// (0x00043325) list_single_2graphic_pane_g3_cp2

0x653a,	// (0x000444a7) list_single_2graphic_pane_g4_cp2_ParamLimits

0x653a,	// (0x000444a7) list_single_2graphic_pane_g4_cp2

0x6546,	// (0x000444b3) list_single_2graphic_pane_t1_cp2_ParamLimits

0x6546,	// (0x000444b3) list_single_2graphic_pane_t1_cp2

0x42aa,	// (0x00042217) list_highlight_pane_g10_cp1

0x60d1,	// (0x0004403e) list_highlight_pane_g1_cp1

0x60d9,	// (0x00044046) list_highlight_pane_g2_cp1

0x60e1,	// (0x0004404e) list_highlight_pane_g3_cp1

0x60e9,	// (0x00044056) list_highlight_pane_g4_cp1

0x60f1,	// (0x0004405e) list_highlight_pane_g5_cp1

0x60f9,	// (0x00044066) list_highlight_pane_g6_cp1

0x6101,	// (0x0004406e) list_highlight_pane_g7_cp1

0x6109,	// (0x00044076) list_highlight_pane_g8_cp1

0x6111,	// (0x0004407e) list_highlight_pane_g9_cp1

0xc49d,	// (0x0004a40a) form_field_slider_pane_t3

0xc4ab,	// (0x0004a418) form_field_slider_pane_t4

0x600d,	// (0x00043f7a) slider_form_pane_ParamLimits

0x600d,	// (0x00043f7a) slider_form_pane

0x42b4,	// (0x00042221) control_abbreviations

0x42b4,	// (0x00042221) control_conventions

0x42b4,	// (0x00042221) control_definitions

0x42b4,	// (0x00042221) format_table_attribute

0x6763,	// (0x000446d0) bg_popup_preview_window_pane_g9

0x42b4,	// (0x00042221) format_table_data2

0x42b4,	// (0x00042221) format_table_data3

0x42b4,	// (0x00042221) format_table_data_example

0x0008,

0x42b4,	// (0x00042221) intro_purpose

0xf92d,	// (0x0004d89a) bg_popup_preview_window_pane_g

0x42b4,	// (0x00042221) texts_category

0x42b4,	// (0x00042221) texts_graphics

0x5428,	// (0x00043395) text_digital

0x5437,	// (0x000433a4) text_primary

0x5446,	// (0x000433b3) text_primary_small

0x5455,	// (0x000433c2) text_secondary

0x5464,	// (0x000433d1) text_title

0x6c07,	// (0x00044b74) bg_passive_tab_pane_g1_cp3_srt

0x5147,	// (0x000430b4) bg_passive_tab_pane_g2_cp3_srt

0x6bfe,	// (0x00044b6b) bg_passive_tab_pane_g3_cp3_srt

0x4310,	// (0x0004227d) bg_active_tab_pane_cp3_srt_ParamLimits

0x4310,	// (0x0004227d) bg_active_tab_pane_cp3_srt

0x6c10,	// (0x00044b7d) tabs_4_active_pane_srt_g1

0xc7f4,	// (0x0004a761) tabs_4_active_pane_srt_t1_ParamLimits

0xc7f4,	// (0x0004a761) tabs_4_active_pane_srt_t1

0x6c07,	// (0x00044b74) bg_active_tab_pane_g1_cp3_copy1

0x5147,	// (0x000430b4) bg_active_tab_pane_g2_cp3_copy1

0x6bfe,	// (0x00044b6b) bg_active_tab_pane_g3_cp3_copy1

0x4310,	// (0x0004227d) tabs_2_long_active_pane_srt_ParamLimits

0x4310,	// (0x0004227d) tabs_2_long_active_pane_srt

0x4310,	// (0x0004227d) tabs_2_long_passive_pane_srt_ParamLimits

0x4310,	// (0x0004227d) tabs_2_long_passive_pane_srt

0xb0d3,	// (0x00049040) bg_passive_tab_pane_cp4_srt_ParamLimits

0xb0d3,	// (0x00049040) bg_passive_tab_pane_cp4_srt

0x6b2d,	// (0x00044a9a) bg_passive_tab_pane_g1_cp4_srt

0x5147,	// (0x000430b4) bg_passive_tab_pane_g2_cp4_srt

0x6b24,	// (0x00044a91) bg_passive_tab_pane_g3_cp4_srt

0x63a7,	// (0x00044314) bg_active_tab_pane_cp4_srt_ParamLimits

0x63a7,	// (0x00044314) bg_active_tab_pane_cp4_srt

0xc618,	// (0x0004a585) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc618,	// (0x0004a585) tabs_2_long_active_pane_srt_t1

0x6b2d,	// (0x00044a9a) bg_active_tab_pane_g1_cp4_srt

0x5147,	// (0x000430b4) bg_active_tab_pane_g2_cp4_srt

0x6b24,	// (0x00044a91) bg_active_tab_pane_g3_cp4_srt

0x4302,	// (0x0004226f) tabs_3_long_active_pane_srt_ParamLimits

0x4302,	// (0x0004226f) tabs_3_long_active_pane_srt

0x4302,	// (0x0004226f) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x4302,	// (0x0004226f) tabs_3_long_passive_pane_cp_srt

0x4302,	// (0x0004226f) tabs_3_long_passive_pane_srt_ParamLimits

0x4302,	// (0x0004226f) tabs_3_long_passive_pane_srt

0xb0d3,	// (0x00049040) bg_passive_tab_pane_cp5_srt_ParamLimits

0xb0d3,	// (0x00049040) bg_passive_tab_pane_cp5_srt

0x51a0,	// (0x0004310d) bg_passive_tab_pane_g1_cp5_srt

0x5147,	// (0x000430b4) bg_passive_tab_pane_g2_cp5_srt

0x5197,	// (0x00043104) bg_passive_tab_pane_g3_cp5_srt

0x63a7,	// (0x00044314) bg_active_tab_pane_cp5_srt_ParamLimits

0x63a7,	// (0x00044314) bg_active_tab_pane_cp5_srt

0xc606,	// (0x0004a573) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc606,	// (0x0004a573) tabs_3_long_active_pane_srt_t1

0x51a0,	// (0x0004310d) bg_active_tab_pane_g1_cp5_srt

0x5147,	// (0x000430b4) bg_active_tab_pane_g2_cp5_srt

0x5197,	// (0x00043104) bg_active_tab_pane_g3_cp5_srt

0x6b16,	// (0x00044a83) navi_text_pane_srt_t1

0x6b0e,	// (0x00044a7b) navi_icon_pane_srt_g1

0x556a,	// (0x000434d7) midp_editing_number_pane_srt

0x5473,	// (0x000433e0) midp_ticker_pane_srt

0x5572,	// (0x000434df) midp_ticker_pane_srt_g1

0x557a,	// (0x000434e7) midp_ticker_pane_srt_g2

0x0001,

0xf7b7,	// (0x0004d724) midp_ticker_pane_srt_g

0x5582,	// (0x000434ef) midp_ticker_pane_srt_t1

0x6aff,	// (0x00044a6c) midp_editing_number_pane_t1_copy1

0xb2ec,	// (0x00049259) listscroll_midp_pane

0xb2ec,	// (0x00049259) midp_form_pane

0x547b,	// (0x000433e8) midp_info_popup_window_ParamLimits

0x547b,	// (0x000433e8) midp_info_popup_window

0x4afd,	// (0x00042a6a) bg_popup_sub_pane_cp50_ParamLimits

0x4afd,	// (0x00042a6a) bg_popup_sub_pane_cp50

0x5d4a,	// (0x00043cb7) listscroll_midp_info_pane_ParamLimits

0x5d4a,	// (0x00043cb7) listscroll_midp_info_pane

0x5d32,	// (0x00043c9f) listscroll_form_midp_pane_ParamLimits

0x5d32,	// (0x00043c9f) listscroll_form_midp_pane

0x5d3e,	// (0x00043cab) scroll_bar_cp050

0xc485,	// (0x0004a3f2) list_midp_pane

0x7482,	// (0x000453ef) signal_pane_g2_cp

0x5c64,	// (0x00043bd1) listscroll_midp_info_pane_t1_ParamLimits

0x5c64,	// (0x00043bd1) listscroll_midp_info_pane_t1

0x5c7c,	// (0x00043be9) listscroll_midp_info_pane_t2_ParamLimits

0x5c7c,	// (0x00043be9) listscroll_midp_info_pane_t2

0x5cba,	// (0x00043c27) listscroll_midp_info_pane_t3_ParamLimits

0x5cba,	// (0x00043c27) listscroll_midp_info_pane_t3

0x5cf4,	// (0x00043c61) listscroll_midp_info_pane_t4_ParamLimits

0x5cf4,	// (0x00043c61) listscroll_midp_info_pane_t4

0x0003,

0xf868,	// (0x0004d7d5) listscroll_midp_info_pane_t_ParamLimits

0xf868,	// (0x0004d7d5) listscroll_midp_info_pane_t

0x4b64,	// (0x00042ad1) scroll_pane_cp21

0x5c02,	// (0x00043b6f) form_midp_field_choice_group_pane

0x5c0b,	// (0x00043b78) form_midp_field_text_pane

0x5c4a,	// (0x00043bb7) form_midp_field_time_pane

0x5c52,	// (0x00043bbf) form_midp_gauge_slider_pane

0x5c5b,	// (0x00043bc8) form_midp_gauge_wait_pane

0x42b4,	// (0x00042221) form_midp_image_pane

0xb888,	// (0x000497f5) list_single_midp_pane_ParamLimits

0xb888,	// (0x000497f5) list_single_midp_pane

0xc44e,	// (0x0004a3bb) form_midp_field_text_pane_t1

0x5aa9,	// (0x00043a16) input_focus_pane_cp050

0x5bf1,	// (0x00043b5e) list_midp_form_text_pane

0x5bc0,	// (0x00043b2d) form_midp_field_choice_group_pane_t1

0x5bce,	// (0x00043b3b) input_focus_pane_cp051

0x5be2,	// (0x00043b4f) list_midp_choice_pane

0x42b4,	// (0x00042221) status_idle_pane

0x5ba4,	// (0x00043b11) form_midp_field_time_pane_t1

0x42aa,	// (0x00042217) wait_anim_pane_g2_copy1

0x5bb2,	// (0x00043b1f) form_midp_field_time_pane_t2

0x0001,

0x54d4,	// (0x00043441) aid_navinavi_width_2_pane

0xf863,	// (0x0004d7d0) form_midp_field_time_pane_t

0x42b4,	// (0x00042221) input_focus_pane_cp052

0x42b4,	// (0x00042221) bg_input_focus_pane_cp040

0x5b80,	// (0x00043aed) form_midp_gauge_slider_pane_t1

0x5b8e,	// (0x00043afb) form_midp_gauge_slider_pane_t2

0xc432,	// (0x0004a39f) form_midp_gauge_slider_pane_t3

0xc440,	// (0x0004a3ad) form_midp_gauge_slider_pane_t4

0x0003,

0xf85a,	// (0x0004d7c7) form_midp_gauge_slider_pane_t

0x5b9c,	// (0x00043b09) form_midp_slider_pane

0x4310,	// (0x0004227d) bg_input_focus_pane_cp041_ParamLimits

0x4310,	// (0x0004227d) bg_input_focus_pane_cp041

0x5b4d,	// (0x00043aba) form_midp_gauge_wait_pane_t1_ParamLimits

0x5b4d,	// (0x00043aba) form_midp_gauge_wait_pane_t1

0x5b5f,	// (0x00043acc) form_midp_gauge_wait_pane_t2_ParamLimits

0x5b5f,	// (0x00043acc) form_midp_gauge_wait_pane_t2

0x0001,

0xf855,	// (0x0004d7c2) form_midp_gauge_wait_pane_t_ParamLimits

0xf855,	// (0x0004d7c2) form_midp_gauge_wait_pane_t

0x5b71,	// (0x00043ade) form_midp_wait_pane_ParamLimits

0x5b71,	// (0x00043ade) form_midp_wait_pane

0x5b17,	// (0x00043a84) form_midp_image_pane_g1

0x5b20,	// (0x00043a8d) form_midp_image_pane_t1

0x5b2f,	// (0x00043a9c) form_midp_image_pane_t2

0x5b3e,	// (0x00043aab) form_midp_image_pane_t3

0x0002,

0xf84e,	// (0x0004d7bb) form_midp_image_pane_t

0x5b0e,	// (0x00043a7b) list_single_midp_pane_g1

0xb879,	// (0x000497e6) list_single_midp_pane_t1

0xc23a,	// (0x0004a1a7) list_midp_form_item_pane_ParamLimits

0xc23a,	// (0x0004a1a7) list_midp_form_item_pane

0x548e,	// (0x000433fb) list_midp_form_item_pane_t1

0x549d,	// (0x0004340a) midp_ticker_pane_g1

0x54a9,	// (0x00043416) midp_ticker_pane_g2

0x0001,

0xf79d,	// (0x0004d70a) midp_ticker_pane_g

0xb39d,	// (0x0004930a) midp_ticker_pane_t1

0xc78f,	// (0x0004a6fc) midp_editing_number_pane_t1

0x6b93,	// (0x00044b00) midp_editing_number_pane

0x6ba2,	// (0x00044b0f) midp_ticker_pane

0x6aef,	// (0x00044a5c) ai_message_heading_pane

0x42b4,	// (0x00042221) bg_popup_window_pane_cp14

0x6af7,	// (0x00044a64) listscroll_ai_message_pane

0x6a79,	// (0x000449e6) ai_message_heading_pane_g1_ParamLimits

0x6a79,	// (0x000449e6) ai_message_heading_pane_g1

0x6a85,	// (0x000449f2) ai_message_heading_pane_g2_ParamLimits

0x6a85,	// (0x000449f2) ai_message_heading_pane_g2

0x6a91,	// (0x000449fe) ai_message_heading_pane_g3_ParamLimits

0x6a91,	// (0x000449fe) ai_message_heading_pane_g3

0x6a9d,	// (0x00044a0a) ai_message_heading_pane_g4_ParamLimits

0x6a9d,	// (0x00044a0a) ai_message_heading_pane_g4

0x0003,

0xf98f,	// (0x0004d8fc) ai_message_heading_pane_g_ParamLimits

0xf98f,	// (0x0004d8fc) ai_message_heading_pane_g

0x6aa9,	// (0x00044a16) ai_message_heading_pane_t1_ParamLimits

0x6aa9,	// (0x00044a16) ai_message_heading_pane_t1

0x6ac3,	// (0x00044a30) ai_message_heading_pane_t2_ParamLimits

0x6ac3,	// (0x00044a30) ai_message_heading_pane_t2

0x0001,

0xf998,	// (0x0004d905) ai_message_heading_pane_t_ParamLimits

0xf998,	// (0x0004d905) ai_message_heading_pane_t

0x6ad5,	// (0x00044a42) bg_popup_heading_pane_cp1_ParamLimits

0x6ad5,	// (0x00044a42) bg_popup_heading_pane_cp1

0x6a67,	// (0x000449d4) list_ai_message_pane_ParamLimits

0x6a67,	// (0x000449d4) list_ai_message_pane

0x4b64,	// (0x00042ad1) scroll_pane_cp10

0x6a03,	// (0x00044970) list_ai_message_pane_g1

0x6a0b,	// (0x00044978) list_ai_message_pane_g2

0x0001,

0xf96c,	// (0x0004d8d9) list_ai_message_pane_g

0x6a13,	// (0x00044980) list_ai_message_pane_t1_ParamLimits

0x6a13,	// (0x00044980) list_ai_message_pane_t1

0x6a28,	// (0x00044995) list_ai_message_pane_t2_ParamLimits

0x6a28,	// (0x00044995) list_ai_message_pane_t2

0x6a3d,	// (0x000449aa) list_ai_message_pane_t3_ParamLimits

0x6a3d,	// (0x000449aa) list_ai_message_pane_t3

0x6a52,	// (0x000449bf) list_ai_message_pane_t4_ParamLimits

0x6a52,	// (0x000449bf) list_ai_message_pane_t4

0x0003,

0xf971,	// (0x0004d8de) list_ai_message_pane_t_ParamLimits

0xf971,	// (0x0004d8de) list_ai_message_pane_t

0xc5f1,	// (0x0004a55e) cell_ai_soft_ind_pane_ParamLimits

0xc5f1,	// (0x0004a55e) cell_ai_soft_ind_pane

0x54b5,	// (0x00043422) cell_ai_soft_ind_pane_g1_ParamLimits

0x54b5,	// (0x00043422) cell_ai_soft_ind_pane_g1

0x42b4,	// (0x00042221) grid_highlight_cp1

0x54c2,	// (0x0004342f) text_secondary_cp56_ParamLimits

0x54c2,	// (0x0004342f) text_secondary_cp56

0x69d8,	// (0x00044945) example_general_pane_ParamLimits

0x69d8,	// (0x00044945) example_general_pane

0x69e4,	// (0x00044951) example_parent_pane_g1_ParamLimits

0x69e4,	// (0x00044951) example_parent_pane_g1

0x69f0,	// (0x0004495d) example_parent_pane_t1_ParamLimits

0x69f0,	// (0x0004495d) example_parent_pane_t1

0xb6ff,	// (0x0004966c) popup_preview_text_window_ParamLimits

0xb6ff,	// (0x0004966c) popup_preview_text_window

0x53a4,	// (0x00043311) list_single_pane_cp2_g4

0x44eb,	// (0x00042458) bg_popup_preview_window_pane_ParamLimits

0x44eb,	// (0x00042458) bg_popup_preview_window_pane

0x676b,	// (0x000446d8) popup_preview_text_window_t1_ParamLimits

0x676b,	// (0x000446d8) popup_preview_text_window_t1

0x6789,	// (0x000446f6) popup_preview_text_window_t2_ParamLimits

0x6789,	// (0x000446f6) popup_preview_text_window_t2

0x67d2,	// (0x0004473f) popup_preview_text_window_t3_ParamLimits

0x67d2,	// (0x0004473f) popup_preview_text_window_t3

0x6817,	// (0x00044784) popup_preview_text_window_t4_ParamLimits

0x6817,	// (0x00044784) popup_preview_text_window_t4

0x0004,

0xf940,	// (0x0004d8ad) popup_preview_text_window_t_ParamLimits

0xf940,	// (0x0004d8ad) popup_preview_text_window_t

0x6895,	// (0x00044802) scroll_pane_cp11

0x59b9,	// (0x00043926) bg_popup_preview_window_pane_g1

0x672b,	// (0x00044698) bg_popup_preview_window_pane_g2

0x6733,	// (0x000446a0) bg_popup_preview_window_pane_g3

0x673b,	// (0x000446a8) bg_popup_preview_window_pane_g4

0x6743,	// (0x000446b0) bg_popup_preview_window_pane_g5

0x674b,	// (0x000446b8) bg_popup_preview_window_pane_g6

0x6753,	// (0x000446c0) bg_popup_preview_window_pane_g7

0x675b,	// (0x000446c8) bg_popup_preview_window_pane_g8

0x89fc,	// (0x00046969) aid_popup_width_pane

0xb6dd,	// (0x0004964a) popup_midp_note_alarm_window_ParamLimits

0xb6dd,	// (0x0004964a) popup_midp_note_alarm_window

0x4a39,	// (0x000429a6) data_form_pane_ParamLimits

0xaea5,	// (0x00048e12) form_field_data_pane_g1

0xaeaf,	// (0x00048e1c) form_field_data_pane_t1_ParamLimits

0x4a45,	// (0x000429b2) input_focus_pane_ParamLimits

0x4a53,	// (0x000429c0) data_form_wide_pane_ParamLimits

0xaec7,	// (0x00048e34) form_field_data_wide_pane_g1

0xaed3,	// (0x00048e40) form_field_data_wide_pane_t1_ParamLimits

0x468c,	// (0x000425f9) input_focus_pane_cp6_ParamLimits

0xb09a,	// (0x00049007) input_popup_find_pane_g1_ParamLimits

0xb09a,	// (0x00049007) input_popup_find_pane_g1

0x94ee,	// (0x0004745b) aid_navi_side_left_pane

0x9503,	// (0x00047470) aid_navi_side_right_pane

0x61ae,	// (0x0004411b) bg_popup_window_pane_cp30_ParamLimits

0x61ae,	// (0x0004411b) bg_popup_window_pane_cp30

0x6228,	// (0x00044195) popup_midp_note_alarm_window_g1_ParamLimits

0x6228,	// (0x00044195) popup_midp_note_alarm_window_g1

0x6258,	// (0x000441c5) popup_midp_note_alarm_window_t1_ParamLimits

0x6258,	// (0x000441c5) popup_midp_note_alarm_window_t1

0x62f9,	// (0x00044266) popup_midp_note_alarm_window_t2_ParamLimits

0x62f9,	// (0x00044266) popup_midp_note_alarm_window_t2

0x63e9,	// (0x00044356) popup_midp_note_alarm_window_t3_ParamLimits

0x63e9,	// (0x00044356) popup_midp_note_alarm_window_t3

0x641b,	// (0x00044388) popup_midp_note_alarm_window_t4_ParamLimits

0x641b,	// (0x00044388) popup_midp_note_alarm_window_t4

0x6441,	// (0x000443ae) popup_midp_note_alarm_window_t5_ParamLimits

0x6441,	// (0x000443ae) popup_midp_note_alarm_window_t5

0x000a,

0xf8dd,	// (0x0004d84a) popup_midp_note_alarm_window_t_ParamLimits

0xf8dd,	// (0x0004d84a) popup_midp_note_alarm_window_t

0x64ed,	// (0x0004445a) wait_bar_pane_cp1_ParamLimits

0x64ed,	// (0x0004445a) wait_bar_pane_cp1

0x42b4,	// (0x00042221) wait_anim_pane_copy1

0x42b4,	// (0x00042221) wait_border_pane_copy1

0x5ece,	// (0x00043e3b) wait_border_pane_g1_copy1

0xaeed,	// (0x00048e5a) form_field_popup_pane_g1

0xaef5,	// (0x00048e62) form_field_popup_pane_t1_ParamLimits

0x4a45,	// (0x000429b2) input_focus_pane_cp7_ParamLimits

0x4a7f,	// (0x000429ec) list_form_pane_ParamLimits

0xaf0d,	// (0x00048e7a) form_field_popup_wide_pane_g1

0xaf15,	// (0x00048e82) form_field_popup_wide_pane_t1_ParamLimits

0x4a45,	// (0x000429b2) input_focus_pane_cp8_ParamLimits

0x4a8b,	// (0x000429f8) list_form_wide_pane_ParamLimits

0x6c37,	// (0x00044ba4) aid_size_cell_graphic_pane

0xaf9f,	// (0x00048f0c) data_form_pane_t1_ParamLimits

0xb8db,	// (0x00049848) data_form_wide_pane_t1_ParamLimits

0xbf3f,	// (0x00049eac) bg_status_flat_pane

0xab64,	// (0x00048ad1) title_pane_t1_ParamLimits

0x42ca,	// (0x00042237) title_pane_t2_ParamLimits

0x42f0,	// (0x0004225d) title_pane_t3_ParamLimits

0xf59b,	// (0x0004d508) title_pane_t_ParamLimits

0x4f1b,	// (0x00042e88) level_1_signal_ParamLimits

0x4f28,	// (0x00042e95) level_2_signal_ParamLimits

0x4f35,	// (0x00042ea2) level_3_signal_ParamLimits

0x4f42,	// (0x00042eaf) level_4_signal_ParamLimits

0x4f4f,	// (0x00042ebc) level_5_signal_ParamLimits

0x4f5c,	// (0x00042ec9) level_6_signal_ParamLimits

0x4f69,	// (0x00042ed6) level_7_signal_ParamLimits

0x4f1b,	// (0x00042e88) level_1_battery_ParamLimits

0x4f28,	// (0x00042e95) level_2_battery_ParamLimits

0x4f35,	// (0x00042ea2) level_3_battery_ParamLimits

0x4f42,	// (0x00042eaf) level_4_battery_ParamLimits

0x4f4f,	// (0x00042ebc) level_5_battery_ParamLimits

0x4f5c,	// (0x00042ec9) level_6_battery_ParamLimits

0x4f69,	// (0x00042ed6) level_7_battery_ParamLimits

0x60d1,	// (0x0004403e) bg_status_flat_pane_g1

0x60d9,	// (0x00044046) bg_status_flat_pane_g2

0x60e1,	// (0x0004404e) bg_status_flat_pane_g3

0x60e9,	// (0x00044056) bg_status_flat_pane_g4

0x60f1,	// (0x0004405e) bg_status_flat_pane_g5

0x60f9,	// (0x00044066) bg_status_flat_pane_g6

0x6101,	// (0x0004406e) bg_status_flat_pane_g7

0xabd4,	// (0x00048b41) tabs_3_active_pane_t1_ParamLimits

0xabd4,	// (0x00048b41) tabs_3_passive_pane_t1_ParamLimits

0xabee,	// (0x00048b5b) tabs_4_active_pane_t1_ParamLimits

0xabee,	// (0x00048b5b) tabs_4_1_passive_pane_t1_ParamLimits

0xb0ae,	// (0x0004901b) tabs_2_active_pane_t1_ParamLimits

0xb0ae,	// (0x0004901b) tabs_2_passive_pane_t1_ParamLimits

0x63a7,	// (0x00044314) bg_active_tab_pane_cp4_ParamLimits

0xb0c0,	// (0x0004902d) tabs_2_long_active_pane_t1_ParamLimits

0xb0d3,	// (0x00049040) bg_passive_tab_pane_cp4_ParamLimits

0x9a5d,	// (0x000479ca) list_single_midp_graphic_pane_t1_ParamLimits

0x63a7,	// (0x00044314) bg_active_tab_pane_cp5_ParamLimits

0xb0df,	// (0x0004904c) tabs_3_long_active_pane_t1_ParamLimits

0xb0d3,	// (0x00049040) bg_passive_tab_pane_cp5_ParamLimits

0x9a5d,	// (0x000479ca) list_single_midp_graphic_pane_t1

0xbf3f,	// (0x00049eac) bg_status_flat_pane_ParamLimits

0x588a,	// (0x000437f7) indicator_pane_cp2_ParamLimits

0x588a,	// (0x000437f7) indicator_pane_cp2

0xc082,	// (0x00049fef) navi_pane_srt_ParamLimits

0xc082,	// (0x00049fef) navi_pane_srt

0x58b2,	// (0x0004381f) popup_clock_digital_analogue_window_cp1

0x4354,	// (0x000422c1) indicator_pane_t1

0x5473,	// (0x000433e0) copy_highlight_pane

0x5473,	// (0x000433e0) cursor_graphics_pane

0x5473,	// (0x000433e0) graphic_within_text_pane

0x5473,	// (0x000433e0) link_highlight_pane

0x6858,	// (0x000447c5) popup_preview_text_window_t5_ParamLimits

0x6858,	// (0x000447c5) popup_preview_text_window_t5

0x54dc,	// (0x00043449) cursor_digital_pane

0x54dc,	// (0x00043449) cursor_primary_pane

0x54ed,	// (0x0004345a) cursor_primary_small_pane

0x54f5,	// (0x00043462) cursor_secondary_pane

0x54fd,	// (0x0004346a) cursor_title_pane

0x54dc,	// (0x00043449) link_highlight_digital_pane

0x54e4,	// (0x00043451) link_highlight_primary_pane

0x54ed,	// (0x0004345a) link_highlight_primary_small_pane

0x54f5,	// (0x00043462) link_highlight_secondary_pane

0x54fd,	// (0x0004346a) link_highlight_title_pane

0x54dc,	// (0x00043449) copy_highlight_digital_pane

0x54dc,	// (0x00043449) copy_highlight_primary_pane

0x54ed,	// (0x0004345a) copy_highlight_primary_small_pane

0x54f5,	// (0x00043462) copy_highlight_secondary_pane

0x54fd,	// (0x0004346a) copy_highlight_title_pane

0x54f5,	// (0x00043462) graphic_text_digital_pane

0x6151,	// (0x000440be) graphic_text_primary_pane

0x615a,	// (0x000440c7) graphic_text_primary_small_pane

0x54ed,	// (0x0004345a) graphic_text_secondary_pane

0x54dc,	// (0x00043449) graphic_text_title_pane

0xb3af,	// (0x0004931c) cursor_primary_pane_g1

0x6143,	// (0x000440b0) cursor_text_primary_t1

0xc4cd,	// (0x0004a43a) cursor_primary_small_pane_g1

0x6135,	// (0x000440a2) cursor_text_primary_small_t1

0xc4c3,	// (0x0004a430) cursor_primary_small_pane_g1_copy1

0x6127,	// (0x00044094) cursor_text_primary_small_t1_copy1

0x6119,	// (0x00044086) cursor_text_title_t1

0xc4b9,	// (0x0004a426) cursor_title_pane_g1

0xb3af,	// (0x0004931c) cursor_digital_pane_g1

0x5505,	// (0x00043472) cursor_text_digital_t1

0x552a,	// (0x00043497) link_highlight_primary_pane_g1

0x60c2,	// (0x0004402f) link_highlight_primary_pane_t1

0x5513,	// (0x00043480) link_highlight_primary_small_pane_g1

0x551b,	// (0x00043488) link_highlight_primary_small_pane_t1

0x552a,	// (0x00043497) link_highlight_secondary_pane_g1

0x5532,	// (0x0004349f) link_highlight_secondary_pane_t1

0x6036,	// (0x00043fa3) link_highlight_title_pane_g1

0x603e,	// (0x00043fab) link_highlight_title_pane_t1

0x601f,	// (0x00043f8c) link_highlight_digital_pane_g1

0x6027,	// (0x00043f94) link_highlight_digital_pane_t1

0x5f13,	// (0x00043e80) copy_highlight_primary_pane_g1

0x5f1b,	// (0x00043e88) copy_highlight_primary_pane_t1

0x5eed,	// (0x00043e5a) copy_highlight_primary_small_pane_g1

0x5f04,	// (0x00043e71) copy_highlight_primary_small_pane_t1

0x5541,	// (0x000434ae) copy_highlight_secondary_pane_g1

0x5549,	// (0x000434b6) copy_highlight_secondary_pane_t1

0x5eed,	// (0x00043e5a) copy_highlight_title_pane_g1

0x5ef5,	// (0x00043e62) copy_highlight_title_pane_t1

0x5f13,	// (0x00043e80) copy_highlight_digital_pane_g1

0x6dbd,	// (0x00044d2a) copy_highlight_digital_pane_t1

0x6d11,	// (0x00044c7e) graphic_text_primary_pane_g1

0x6da1,	// (0x00044d0e) graphic_text_primary_pane_t1

0x6daf,	// (0x00044d1c) graphic_text_primary_pane_t2

0x0001,

0xfa0c,	// (0x0004d979) graphic_text_primary_pane_t

0x6d7d,	// (0x00044cea) graphic_text_primary_small_pane_g1

0x6d85,	// (0x00044cf2) graphic_text_primary_small_pane_t1

0x6d93,	// (0x00044d00) graphic_text_primary_small_pane_t2

0x0001,

0xfa07,	// (0x0004d974) graphic_text_primary_small_pane_t

0x6d59,	// (0x00044cc6) graphic_text_secondary_pane_g1

0x6d61,	// (0x00044cce) graphic_text_secondary_pane_t1

0x6d6f,	// (0x00044cdc) graphic_text_secondary_pane_t2

0x0001,

0xfa02,	// (0x0004d96f) graphic_text_secondary_pane_t

0x6d35,	// (0x00044ca2) graphic_text_title_pane_g1

0x6d3d,	// (0x00044caa) graphic_text_title_pane_t1

0x6d4b,	// (0x00044cb8) graphic_text_title_pane_t2

0x0001,

0xf9fd,	// (0x0004d96a) graphic_text_title_pane_t

0x6d11,	// (0x00044c7e) graphic_text_digital_pane_g1

0x6d19,	// (0x00044c86) graphic_text_digital_pane_t1

0x6d27,	// (0x00044c94) graphic_text_digital_pane_t2

0x0001,

0xf9f8,	// (0x0004d965) graphic_text_digital_pane_t

0x4310,	// (0x0004227d) navi_icon_pane_srt_ParamLimits

0x4310,	// (0x0004227d) navi_icon_pane_srt

0x42b4,	// (0x00042221) navi_midp_pane_srt

0x42b4,	// (0x00042221) navi_navi_pane_srt

0x4310,	// (0x0004227d) navi_text_pane_srt_ParamLimits

0x4310,	// (0x0004227d) navi_text_pane_srt

0x6cdc,	// (0x00044c49) navi_navi_icon_text_pane_srt

0x6cf6,	// (0x00044c63) navi_navi_pane_srt_g1_ParamLimits

0x6cf6,	// (0x00044c63) navi_navi_pane_srt_g1

0x6ce4,	// (0x00044c51) navi_navi_pane_srt_g2_ParamLimits

0x6ce4,	// (0x00044c51) navi_navi_pane_srt_g2

0x0001,

0xf9f3,	// (0x0004d960) navi_navi_pane_srt_g_ParamLimits

0xf9f3,	// (0x0004d960) navi_navi_pane_srt_g

0x6d08,	// (0x00044c75) navi_navi_tabs_pane_srt

0x6cdc,	// (0x00044c49) navi_navi_text_pane_srt

0x6cdc,	// (0x00044c49) navi_navi_volume_pane_srt

0x6ccd,	// (0x00044c3a) navi_navi_text_pane_srt_t1

0x9dd7,	// (0x00047d44) navi_navi_volume_pane_srt_g1

0x9ddf,	// (0x00047d4c) volume_small_pane_srt_ParamLimits

0x9ddf,	// (0x00047d4c) volume_small_pane_srt

0x97ce,	// (0x0004773b) volume_small_pane_srt_g1_ParamLimits

0x97ce,	// (0x0004773b) volume_small_pane_srt_g1

0x97de,	// (0x0004774b) volume_small_pane_srt_g2_ParamLimits

0x97de,	// (0x0004774b) volume_small_pane_srt_g2

0x97ef,	// (0x0004775c) volume_small_pane_srt_g3_ParamLimits

0x97ef,	// (0x0004775c) volume_small_pane_srt_g3

0x9800,	// (0x0004776d) volume_small_pane_srt_g4_ParamLimits

0x9800,	// (0x0004776d) volume_small_pane_srt_g4

0x9811,	// (0x0004777e) volume_small_pane_srt_g5_ParamLimits

0x9811,	// (0x0004777e) volume_small_pane_srt_g5

0x9822,	// (0x0004778f) volume_small_pane_srt_g6_ParamLimits

0x9822,	// (0x0004778f) volume_small_pane_srt_g6

0x9833,	// (0x000477a0) volume_small_pane_srt_g7_ParamLimits

0x9833,	// (0x000477a0) volume_small_pane_srt_g7

0x9844,	// (0x000477b1) volume_small_pane_srt_g8_ParamLimits

0x9844,	// (0x000477b1) volume_small_pane_srt_g8

0x9855,	// (0x000477c2) volume_small_pane_srt_g9_ParamLimits

0x9855,	// (0x000477c2) volume_small_pane_srt_g9

0x9866,	// (0x000477d3) volume_small_pane_srt_g10_ParamLimits

0x9866,	// (0x000477d3) volume_small_pane_srt_g10

0x0009,

0xf7a2,	// (0x0004d70f) volume_small_pane_srt_g_ParamLimits

0xf7a2,	// (0x0004d70f) volume_small_pane_srt_g

0x4594,	// (0x00042501) query_popup_data_pane_cp2

0x6cb3,	// (0x00044c20) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6cb3,	// (0x00044c20) navi_navi_icon_text_pane_srt_t1

0x6151,	// (0x000440be) navi_tabs_2_long_pane_srt

0x6151,	// (0x000440be) navi_tabs_2_pane_srt

0x6151,	// (0x000440be) navi_tabs_3_long_pane_srt

0x6151,	// (0x000440be) navi_tabs_3_pane_srt

0x6151,	// (0x000440be) navi_tabs_4_pane_srt

0x9db7,	// (0x00047d24) tabs_2_active_pane_srt_ParamLimits

0x9db7,	// (0x00047d24) tabs_2_active_pane_srt

0x9dc7,	// (0x00047d34) tabs_2_passive_pane_srt_ParamLimits

0x9dc7,	// (0x00047d34) tabs_2_passive_pane_srt

0x4b9d,	// (0x00042b0a) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4b9d,	// (0x00042b0a) bg_passive_tab_pane_cp1_srt

0x6c9a,	// (0x00044c07) bg_passive_tab_pane_g1_cp1_srt

0x5147,	// (0x000430b4) bg_passive_tab_pane_g2_cp1_srt

0x6c91,	// (0x00044bfe) bg_passive_tab_pane_g3_cp1_srt

0x4310,	// (0x0004227d) bg_active_tab_pane_cp1_srt_ParamLimits

0x4310,	// (0x0004227d) bg_active_tab_pane_cp1_srt

0x6ca3,	// (0x00044c10) tabs_2_active_pane_srt_g1

0xc86d,	// (0x0004a7da) tabs_2_active_pane_srt_t1_ParamLimits

0xc86d,	// (0x0004a7da) tabs_2_active_pane_srt_t1

0x6c9a,	// (0x00044c07) bg_active_tab_pane_g1_cp1_srt

0x5147,	// (0x000430b4) bg_active_tab_pane_g2_cp1_srt

0x6c91,	// (0x00044bfe) bg_active_tab_pane_g3_cp1_srt

0x9d84,	// (0x00047cf1) tabs_3_active_pane_srt_ParamLimits

0x9d84,	// (0x00047cf1) tabs_3_active_pane_srt

0x9d95,	// (0x00047d02) tabs_3_passive_pane_cp_srt_ParamLimits

0x9d95,	// (0x00047d02) tabs_3_passive_pane_cp_srt

0x9da6,	// (0x00047d13) tabs_3_passive_pane_srt_ParamLimits

0x9da6,	// (0x00047d13) tabs_3_passive_pane_srt

0x4b9d,	// (0x00042b0a) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4b9d,	// (0x00042b0a) bg_passive_tab_pane_cp2_srt

0x5561,	// (0x000434ce) bg_passive_tab_pane_g1_cp2_srt

0x5147,	// (0x000430b4) bg_passive_tab_pane_g2_cp2_srt

0x5558,	// (0x000434c5) bg_passive_tab_pane_g3_cp2_srt

0x4310,	// (0x0004227d) bg_active_tab_pane_cp2_srt_ParamLimits

0x4310,	// (0x0004227d) bg_active_tab_pane_cp2_srt

0x6c89,	// (0x00044bf6) tabs_3_active_pane_srt_g1

0xc85b,	// (0x0004a7c8) tabs_3_active_pane_srt_t1_ParamLimits

0xc85b,	// (0x0004a7c8) tabs_3_active_pane_srt_t1

0x5561,	// (0x000434ce) bg_active_tab_pane_g1_cp2_srt

0x5147,	// (0x000430b4) bg_active_tab_pane_g2_cp2_srt

0x5558,	// (0x000434c5) bg_active_tab_pane_g3_cp2_srt

0x9d3c,	// (0x00047ca9) tabs_4_active_pane_srt_ParamLimits

0x9d3c,	// (0x00047ca9) tabs_4_active_pane_srt

0x9d4e,	// (0x00047cbb) tabs_4_passive_pane_cp2_srt_ParamLimits

0x9d4e,	// (0x00047cbb) tabs_4_passive_pane_cp2_srt

0x5685,	// (0x000435f2) aid_size_cell_toolbar

0xb0d3,	// (0x00049040) main_idle_act_pane_ParamLimits

0x5749,	// (0x000436b6) popup_large_graphic_colour_window_ParamLimits

0xbe4b,	// (0x00049db8) popup_toolbar_window_ParamLimits

0xbe4b,	// (0x00049db8) popup_toolbar_window

0x6bb5,	// (0x00044b22) list_single_graphic_2heading_pane_ParamLimits

0x6bb5,	// (0x00044b22) list_single_graphic_2heading_pane

0x4d47,	// (0x00042cb4) aid_size_cell_apps_grid_lsc_pane

0x4d59,	// (0x00042cc6) aid_size_cell_apps_grid_prt_pane

0x4b9d,	// (0x00042b0a) bg_wml_button_pane_cp1_ParamLimits

0x4b9d,	// (0x00042b0a) bg_wml_button_pane_cp1

0xc44e,	// (0x0004a3bb) form_midp_field_text_pane_t1_ParamLimits

0x5aa9,	// (0x00043a16) input_focus_pane_cp050_ParamLimits

0x5bf1,	// (0x00043b5e) list_midp_form_text_pane_ParamLimits

0x5bce,	// (0x00043b3b) input_focus_pane_cp051_ParamLimits

0x5be2,	// (0x00043b4f) list_midp_choice_pane_ParamLimits

0xc1e4,	// (0x0004a151) list_single_2graphic_pane_cp3_ParamLimits

0xc1e4,	// (0x0004a151) list_single_2graphic_pane_cp3

0xc208,	// (0x0004a175) list_single_midp_graphic_pane_ParamLimits

0xc208,	// (0x0004a175) list_single_midp_graphic_pane

0x8984,	// (0x000468f1) list_single_graphic_2heading_pane_g1_ParamLimits

0x8984,	// (0x000468f1) list_single_graphic_2heading_pane_g1

0x8990,	// (0x000468fd) list_single_graphic_2heading_pane_g4_ParamLimits

0x8990,	// (0x000468fd) list_single_graphic_2heading_pane_g4

0x899c,	// (0x00046909) list_single_graphic_2heading_pane_g5_ParamLimits

0x899c,	// (0x00046909) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f5,	// (0x0004d762) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f5,	// (0x0004d762) list_single_graphic_2heading_pane_g

0x89a8,	// (0x00046915) list_single_graphic_2heading_pane_t1_ParamLimits

0x89a8,	// (0x00046915) list_single_graphic_2heading_pane_t1

0x89bc,	// (0x00046929) list_single_graphic_2heading_pane_t2_ParamLimits

0x89bc,	// (0x00046929) list_single_graphic_2heading_pane_t2

0x89d8,	// (0x00046945) list_single_graphic_2heading_pane_t3_ParamLimits

0x89d8,	// (0x00046945) list_single_graphic_2heading_pane_t3

0x0002,

0xf7fc,	// (0x0004d769) list_single_graphic_2heading_pane_t_ParamLimits

0xf7fc,	// (0x0004d769) list_single_graphic_2heading_pane_t

0x58f7,	// (0x00043864) bg_popup_sub_pane_cp2

0x5921,	// (0x0004388e) grid_toobar_pane

0x99cc,	// (0x00047939) cell_toolbar_pane_ParamLimits

0x99cc,	// (0x00047939) cell_toolbar_pane

0x595d,	// (0x000438ca) cell_toolbar_pane_g1_ParamLimits

0x595d,	// (0x000438ca) cell_toolbar_pane_g1

0x5971,	// (0x000438de) cell_toolbar_pane_g2_ParamLimits

0x5971,	// (0x000438de) cell_toolbar_pane_g2

0x0001,

0xf80a,	// (0x0004d777) cell_toolbar_pane_g_ParamLimits

0xf80a,	// (0x0004d777) cell_toolbar_pane_g

0x5993,	// (0x00043900) grid_highlight_pane_cp2_ParamLimits

0x5993,	// (0x00043900) grid_highlight_pane_cp2

0x59ad,	// (0x0004391a) toolbar_button_pane

0x59b9,	// (0x00043926) toolbar_button_pane_g1

0x59c9,	// (0x00043936) toolbar_button_pane_g2

0x59c1,	// (0x0004392e) toolbar_button_pane_g3

0x59d9,	// (0x00043946) toolbar_button_pane_g4

0x59d1,	// (0x0004393e) toolbar_button_pane_g5

0x59e1,	// (0x0004394e) toolbar_button_pane_g6

0x59e9,	// (0x00043956) toolbar_button_pane_g7

0x59f9,	// (0x00043966) toolbar_button_pane_g8

0x59f1,	// (0x0004395e) toolbar_button_pane_g9

0x0009,

0xf80f,	// (0x0004d77c) toolbar_button_pane_g

0x9a04,	// (0x00047971) list_single_2graphic_pane_g1_cp3_ParamLimits

0x9a04,	// (0x00047971) list_single_2graphic_pane_g1_cp3

0x9a10,	// (0x0004797d) list_single_2graphic_pane_g2_cp3_ParamLimits

0x9a10,	// (0x0004797d) list_single_2graphic_pane_g2_cp3

0x9a21,	// (0x0004798e) list_single_2graphic_pane_g3_cp3

0x9a29,	// (0x00047996) list_single_2graphic_pane_g4_cp3_ParamLimits

0x9a29,	// (0x00047996) list_single_2graphic_pane_g4_cp3

0x9a35,	// (0x000479a2) list_single_2graphic_pane_t1_cp3_ParamLimits

0x9a35,	// (0x000479a2) list_single_2graphic_pane_t1_cp3

0x9a51,	// (0x000479be) list_single_midp_graphic_pane_g2_ParamLimits

0x9a51,	// (0x000479be) list_single_midp_graphic_pane_g2

0xb3ea,	// (0x00049357) aid_zoom_text_primary

0xb3f2,	// (0x0004935f) aid_zoom_text_secondary

0x5615,	// (0x00043582) status_small_pane_g7_ParamLimits

0x5615,	// (0x00043582) status_small_pane_g7

0x5638,	// (0x000435a5) status_small_pane_t1_ParamLimits

0xab47,	// (0x00048ab4) title_pane_g2

0x0003,

0xf592,	// (0x0004d4ff) title_pane_g

0xad14,	// (0x00048c81) aid_size_cell_colour_1_pane_ParamLimits

0xad14,	// (0x00048c81) aid_size_cell_colour_1_pane

0xad28,	// (0x00048c95) aid_size_cell_colour_2_pane_ParamLimits

0xad28,	// (0x00048c95) aid_size_cell_colour_2_pane

0xad3c,	// (0x00048ca9) aid_size_cell_colour_3_pane_ParamLimits

0xad3c,	// (0x00048ca9) aid_size_cell_colour_3_pane

0xad50,	// (0x00048cbd) aid_size_cell_colour_4_pane_ParamLimits

0xad50,	// (0x00048cbd) aid_size_cell_colour_4_pane

0x942a,	// (0x00047397) title_pane_stacon_g1_ParamLimits

0x942a,	// (0x00047397) title_pane_stacon_g1

0x5f72,	// (0x00043edf) popup_note_wait_window_g3_ParamLimits

0x5f72,	// (0x00043edf) popup_note_wait_window_g3

0x5fe8,	// (0x00043f55) popup_note_wait_window_t5_ParamLimits

0x5fe8,	// (0x00043f55) popup_note_wait_window_t5

0x42b4,	// (0x00042221) main_feb_china_hwr_fs_writing_pane

0xb478,	// (0x000493e5) popup_feb_china_hwr_fs_window_ParamLimits

0xb478,	// (0x000493e5) popup_feb_china_hwr_fs_window

0x9a73,	// (0x000479e0) aid_size_cell_hwr_fs_ParamLimits

0x9a73,	// (0x000479e0) aid_size_cell_hwr_fs

0x5aa9,	// (0x00043a16) bg_popup_sub_pane_cp3_ParamLimits

0x5aa9,	// (0x00043a16) bg_popup_sub_pane_cp3

0x9a88,	// (0x000479f5) grid_hwr_fs_pane_ParamLimits

0x9a88,	// (0x000479f5) grid_hwr_fs_pane

0x9aa0,	// (0x00047a0d) linegrid_hwr_fs_pane_ParamLimits

0x9aa0,	// (0x00047a0d) linegrid_hwr_fs_pane

0x9ab0,	// (0x00047a1d) cell_hwr_fs_pane_ParamLimits

0x9ab0,	// (0x00047a1d) cell_hwr_fs_pane

0x5ab5,	// (0x00043a22) linegrid_hwr_fs_pane_g1_ParamLimits

0x5ab5,	// (0x00043a22) linegrid_hwr_fs_pane_g1

0xc1b8,	// (0x0004a125) linegrid_hwr_fs_pane_g2_ParamLimits

0xc1b8,	// (0x0004a125) linegrid_hwr_fs_pane_g2

0x5ac1,	// (0x00043a2e) linegrid_hwr_fs_pane_g3_ParamLimits

0x5ac1,	// (0x00043a2e) linegrid_hwr_fs_pane_g3

0x9ad2,	// (0x00047a3f) linegrid_hwr_fs_pane_g4_ParamLimits

0x9ad2,	// (0x00047a3f) linegrid_hwr_fs_pane_g4

0x9aec,	// (0x00047a59) linegrid_hwr_fs_pane_g5_ParamLimits

0x9aec,	// (0x00047a59) linegrid_hwr_fs_pane_g5

0x0004,

0xf83a,	// (0x0004d7a7) linegrid_hwr_fs_pane_g_ParamLimits

0xf83a,	// (0x0004d7a7) linegrid_hwr_fs_pane_g

0x5acd,	// (0x00043a3a) cell_hwr_fs_pane_g1_ParamLimits

0x5acd,	// (0x00043a3a) cell_hwr_fs_pane_g1

0x58c3,	// (0x00043830) cell_hwr_fs_pane_g2_ParamLimits

0x58c3,	// (0x00043830) cell_hwr_fs_pane_g2

0xc1ca,	// (0x0004a137) cell_hwr_fs_pane_g3_ParamLimits

0xc1ca,	// (0x0004a137) cell_hwr_fs_pane_g3

0xc1d7,	// (0x0004a144) cell_hwr_fs_pane_g4_ParamLimits

0xc1d7,	// (0x0004a144) cell_hwr_fs_pane_g4

0x0003,

0xf845,	// (0x0004d7b2) cell_hwr_fs_pane_g_ParamLimits

0xf845,	// (0x0004d7b2) cell_hwr_fs_pane_g

0x9b02,	// (0x00047a6f) cell_hwr_fs_pane_t1

0x42b4,	// (0x00042221) grid_highlight_pane_cp6

0x42b4,	// (0x00042221) main_idle_act2_pane

0x4b4b,	// (0x00042ab8) aid_inside_area_popup_secondary

0xc4ed,	// (0x0004a45a) aid_inside_area_window_primary_ParamLimits

0xc4ed,	// (0x0004a45a) aid_inside_area_window_primary

0x6dcc,	// (0x00044d39) ai2_news_ticker_pane

0x6dd4,	// (0x00044d41) aid_size_cell_ai1_link_ParamLimits

0x6dd4,	// (0x00044d41) aid_size_cell_ai1_link

0xc87f,	// (0x0004a7ec) popup_ai2_data_window_ParamLimits

0xc87f,	// (0x0004a7ec) popup_ai2_data_window

0x6dee,	// (0x00044d5b) popup_ai2_link_window_ParamLimits

0x6dee,	// (0x00044d5b) popup_ai2_link_window

0x5aa9,	// (0x00043a16) bg_popup_sub_pane_cp4_ParamLimits

0x5aa9,	// (0x00043a16) bg_popup_sub_pane_cp4

0x6e02,	// (0x00044d6f) grid_ai2_link_pane_ParamLimits

0x6e02,	// (0x00044d6f) grid_ai2_link_pane

0x6e19,	// (0x00044d86) popup_ai2_link_window_g1_ParamLimits

0x6e19,	// (0x00044d86) popup_ai2_link_window_g1

0x6e25,	// (0x00044d92) popup_ai2_link_window_g2_ParamLimits

0x6e25,	// (0x00044d92) popup_ai2_link_window_g2

0x0001,

0xfa11,	// (0x0004d97e) popup_ai2_link_window_g_ParamLimits

0xfa11,	// (0x0004d97e) popup_ai2_link_window_g

0x6e34,	// (0x00044da1) ai2_mp_button_pane

0x6e3c,	// (0x00044da9) ai2_mp_volume_pane

0x5bce,	// (0x00043b3b) bg_popup_sub_pane_cp5_ParamLimits

0x5bce,	// (0x00043b3b) bg_popup_sub_pane_cp5

0x6e44,	// (0x00044db1) heading_ai2_gene_pane_ParamLimits

0x6e44,	// (0x00044db1) heading_ai2_gene_pane

0x6e50,	// (0x00044dbd) list_ai2_gene_pane_ParamLimits

0x6e50,	// (0x00044dbd) list_ai2_gene_pane

0x6e98,	// (0x00044e05) cell_ai2_link_pane_ParamLimits

0x6e98,	// (0x00044e05) cell_ai2_link_pane

0x6eae,	// (0x00044e1b) cell_ai2_link_pane_g1

0x42b4,	// (0x00042221) grid_highlight_pane_cp7

0x9df4,	// (0x00047d61) ai2_mp_volume_pane_g1

0x6f53,	// (0x00044ec0) ai2_mp_volume_pane_g2

0xc8ac,	// (0x0004a819) list_ai2_gene_pane_t1

0x6f4b,	// (0x00044eb8) ai2_mp_volume_pane_g3

0x0002,

0xfa2a,	// (0x0004d997) ai2_mp_volume_pane_g

0x9dfc,	// (0x00047d69) volume_small_pane_cp3

0x6f5b,	// (0x00044ec8) aid_size_cell_ai2_button

0x6f63,	// (0x00044ed0) grid_ai2_button_pane

0x6f6c,	// (0x00044ed9) cell_ai2_button_pane_ParamLimits

0x6f6c,	// (0x00044ed9) cell_ai2_button_pane

0x42aa,	// (0x00042217) cell_ai2_button_pane_g1

0x42b4,	// (0x00042221) grid_highlight_pane_cp8

0x6f0b,	// (0x00044e78) ai2_gene_pane_t1_ParamLimits

0x6f0b,	// (0x00044e78) ai2_gene_pane_t1

0xb3e0,	// (0x0004934d) aid_height_parent_landscape

0xc62b,	// (0x0004a598) aid_height_set_list

0x63cb,	// (0x00044338) aid_size_parent

0x6c37,	// (0x00044ba4) aid_size_cell_graphic_pane_ParamLimits

0x6e60,	// (0x00044dcd) popup_ai2_data_window_g1_ParamLimits

0x6e60,	// (0x00044dcd) popup_ai2_data_window_g1

0x6e6c,	// (0x00044dd9) ai2_news_ticker_pane_g1

0x6e74,	// (0x00044de1) ai2_news_ticker_pane_g2

0x0001,

0xfa16,	// (0x0004d983) ai2_news_ticker_pane_g

0x6e7c,	// (0x00044de9) ai2_news_ticker_pane_t1

0x6e8a,	// (0x00044df7) ai2_news_ticker_pane_t2

0x0001,

0xfa1b,	// (0x0004d988) ai2_news_ticker_pane_t

0x6eb7,	// (0x00044e24) heading_ai2_gene_pane_g1

0x6ebf,	// (0x00044e2c) heading_ai2_gene_pane_t1_ParamLimits

0x6ebf,	// (0x00044e2c) heading_ai2_gene_pane_t1

0x6ed4,	// (0x00044e41) list_highlight_pane_cp6

0xc895,	// (0x0004a802) ai2_gene_pane_ParamLimits

0xc895,	// (0x0004a802) ai2_gene_pane

0xc8ba,	// (0x0004a827) list_ai2_gene_pane_t2

0x0001,

0xfa20,	// (0x0004d98d) list_ai2_gene_pane_t

0x6edc,	// (0x00044e49) list_highlight_pane_cp8_ParamLimits

0x6edc,	// (0x00044e49) list_highlight_pane_cp8

0x6eed,	// (0x00044e5a) ai2_gene_pane_g1_ParamLimits

0x6eed,	// (0x00044e5a) ai2_gene_pane_g1

0x6eff,	// (0x00044e6c) ai2_gene_pane_g2_ParamLimits

0x6eff,	// (0x00044e6c) ai2_gene_pane_g2

0x0001,

0xfa25,	// (0x0004d992) ai2_gene_pane_g_ParamLimits

0xfa25,	// (0x0004d992) ai2_gene_pane_g

0x49db,	// (0x00042948) scroll_pane_cp12

0x998b,	// (0x000478f8) control_pane_t3_ParamLimits

0x998b,	// (0x000478f8) control_pane_t3

0x5629,	// (0x00043596) status_small_pane_g8_ParamLimits

0x5629,	// (0x00043596) status_small_pane_g8

0xb504,	// (0x00049471) popup_find_window_ParamLimits

0xb6f1,	// (0x0004965e) popup_note_image_window_ParamLimits

0xb821,	// (0x0004978e) list_double2_graphic_pane_vc_g1_ParamLimits

0xb821,	// (0x0004978e) list_double2_graphic_pane_vc_g1

0x693b,	// (0x000448a8) list_double2_graphic_pane_vc_g2_ParamLimits

0x693b,	// (0x000448a8) list_double2_graphic_pane_vc_g2

0xb82d,	// (0x0004979a) list_double2_graphic_pane_vc_g3_ParamLimits

0xb82d,	// (0x0004979a) list_double2_graphic_pane_vc_g3

0x0002,

0xf803,	// (0x0004d770) list_double2_graphic_pane_vc_g_ParamLimits

0xf803,	// (0x0004d770) list_double2_graphic_pane_vc_g

0xb839,	// (0x000497a6) list_double2_graphic_pane_vc_t1_ParamLimits

0xb839,	// (0x000497a6) list_double2_graphic_pane_vc_t1

0x693b,	// (0x000448a8) list_single_heading_pane_vc_g1_ParamLimits

0x693b,	// (0x000448a8) list_single_heading_pane_vc_g1

0xb82d,	// (0x0004979a) list_single_heading_pane_vc_g2_ParamLimits

0xb82d,	// (0x0004979a) list_single_heading_pane_vc_g2

0x0001,

0xf824,	// (0x0004d791) list_single_heading_pane_vc_g_ParamLimits

0xf824,	// (0x0004d791) list_single_heading_pane_vc_g

0xb84f,	// (0x000497bc) list_single_heading_pane_vc_t1_ParamLimits

0xb84f,	// (0x000497bc) list_single_heading_pane_vc_t1

0xb865,	// (0x000497d2) list_single_heading_pane_vc_t2_ParamLimits

0xb865,	// (0x000497d2) list_single_heading_pane_vc_t2

0x0001,

0xf829,	// (0x0004d796) list_single_heading_pane_vc_t_ParamLimits

0xf829,	// (0x0004d796) list_single_heading_pane_vc_t

0x5a01,	// (0x0004396e) list_setting_number_pane_vc_g1_ParamLimits

0x5a01,	// (0x0004396e) list_setting_number_pane_vc_g1

0x5a0d,	// (0x0004397a) list_setting_number_pane_vc_g2_ParamLimits

0x5a0d,	// (0x0004397a) list_setting_number_pane_vc_g2

0x0001,

0xf82e,	// (0x0004d79b) list_setting_number_pane_vc_g_ParamLimits

0xf82e,	// (0x0004d79b) list_setting_number_pane_vc_g

0x5a19,	// (0x00043986) list_setting_number_pane_vc_t1_ParamLimits

0x5a19,	// (0x00043986) list_setting_number_pane_vc_t1

0x5a2d,	// (0x0004399a) list_setting_number_pane_vc_t2_ParamLimits

0x5a2d,	// (0x0004399a) list_setting_number_pane_vc_t2

0x5a49,	// (0x000439b6) list_setting_number_pane_vc_t3_ParamLimits

0x5a49,	// (0x000439b6) list_setting_number_pane_vc_t3

0x0002,

0xf833,	// (0x0004d7a0) list_setting_number_pane_vc_t_ParamLimits

0xf833,	// (0x0004d7a0) list_setting_number_pane_vc_t

0x5a6f,	// (0x000439dc) set_value_pane_vc_ParamLimits

0x5a6f,	// (0x000439dc) set_value_pane_vc

0x6bb5,	// (0x00044b22) list_double2_graphic_pane_vc_ParamLimits

0x6bb5,	// (0x00044b22) list_double2_graphic_pane_vc

0xb939,	// (0x000498a6) list_double2_large_graphic_pane_vc_ParamLimits

0xb939,	// (0x000498a6) list_double2_large_graphic_pane_vc

0x6bb5,	// (0x00044b22) list_double2_pane_vc_ParamLimits

0x6bb5,	// (0x00044b22) list_double2_pane_vc

0x6bb5,	// (0x00044b22) list_double_graphic_heading_pane_vc_ParamLimits

0x6bb5,	// (0x00044b22) list_double_graphic_heading_pane_vc

0x6bb5,	// (0x00044b22) list_double_graphic_pane_vc_ParamLimits

0x6bb5,	// (0x00044b22) list_double_graphic_pane_vc

0x6bb5,	// (0x00044b22) list_double_heading_pane_vc_ParamLimits

0x6bb5,	// (0x00044b22) list_double_heading_pane_vc

0xb939,	// (0x000498a6) list_double_large_graphic_pane_vc_ParamLimits

0xb939,	// (0x000498a6) list_double_large_graphic_pane_vc

0x6bb5,	// (0x00044b22) list_double_number_pane_vc_ParamLimits

0x6bb5,	// (0x00044b22) list_double_number_pane_vc

0x6bb5,	// (0x00044b22) list_double_pane_vc_ParamLimits

0x6bb5,	// (0x00044b22) list_double_pane_vc

0x6bb5,	// (0x00044b22) list_double_time_pane_vc_ParamLimits

0x6bb5,	// (0x00044b22) list_double_time_pane_vc

0x6bb5,	// (0x00044b22) list_setting_number_pane_vc_ParamLimits

0x6bb5,	// (0x00044b22) list_setting_number_pane_vc

0x6bb5,	// (0x00044b22) list_setting_pane_vc_ParamLimits

0x6bb5,	// (0x00044b22) list_setting_pane_vc

0x6bb5,	// (0x00044b22) list_single_graphic_heading_pane_vc_ParamLimits

0x6bb5,	// (0x00044b22) list_single_graphic_heading_pane_vc

0x6bb5,	// (0x00044b22) list_single_heading_pane_vc_ParamLimits

0x6bb5,	// (0x00044b22) list_single_heading_pane_vc

0xb94a,	// (0x000498b7) list_single_number_heading_pane_vc_ParamLimits

0xb94a,	// (0x000498b7) list_single_number_heading_pane_vc

0xb821,	// (0x0004978e) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xb821,	// (0x0004978e) list_double_graphic_heading_pane_vc_g1

0x693b,	// (0x000448a8) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x693b,	// (0x000448a8) list_double_graphic_heading_pane_vc_g2

0xb82d,	// (0x0004979a) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xb82d,	// (0x0004979a) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf803,	// (0x0004d770) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0004d770) list_double_graphic_heading_pane_vc_g

0xb983,	// (0x000498f0) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xb983,	// (0x000498f0) list_double_graphic_heading_pane_vc_t1

0xb84f,	// (0x000497bc) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xb84f,	// (0x000497bc) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa31,	// (0x0004d99e) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa31,	// (0x0004d99e) list_double_graphic_heading_pane_vc_t

0x5a01,	// (0x0004396e) list_setting_pane_vc_g1_ParamLimits

0x5a01,	// (0x0004396e) list_setting_pane_vc_g1

0x5a0d,	// (0x0004397a) list_setting_pane_vc_g2_ParamLimits

0x5a0d,	// (0x0004397a) list_setting_pane_vc_g2

0x0001,

0xf82e,	// (0x0004d79b) list_setting_pane_vc_g_ParamLimits

0xf82e,	// (0x0004d79b) list_setting_pane_vc_g

0x7182,	// (0x000450ef) list_setting_pane_vc_t1_ParamLimits

0x7182,	// (0x000450ef) list_setting_pane_vc_t1

0x7196,	// (0x00045103) list_setting_pane_vc_t2_ParamLimits

0x7196,	// (0x00045103) list_setting_pane_vc_t2

0x0001,

0xfa5f,	// (0x0004d9cc) list_setting_pane_vc_t_ParamLimits

0xfa5f,	// (0x0004d9cc) list_setting_pane_vc_t

0x5a6f,	// (0x000439dc) set_value_pane_cp_vc_ParamLimits

0x5a6f,	// (0x000439dc) set_value_pane_cp_vc

0x693b,	// (0x000448a8) list_single_number_heading_pane_vc_g1_ParamLimits

0x693b,	// (0x000448a8) list_single_number_heading_pane_vc_g1

0xb82d,	// (0x0004979a) list_single_number_heading_pane_vc_g2_ParamLimits

0xb82d,	// (0x0004979a) list_single_number_heading_pane_vc_g2

0x0001,

0xf824,	// (0x0004d791) list_single_number_heading_pane_vc_g_ParamLimits

0xf824,	// (0x0004d791) list_single_number_heading_pane_vc_g

0xb84f,	// (0x000497bc) list_single_number_heading_pane_vc_t1_ParamLimits

0xb84f,	// (0x000497bc) list_single_number_heading_pane_vc_t1

0xb997,	// (0x00049904) list_single_number_heading_pane_vc_t2_ParamLimits

0xb997,	// (0x00049904) list_single_number_heading_pane_vc_t2

0xb9ab,	// (0x00049918) list_single_number_heading_pane_vc_t3_ParamLimits

0xb9ab,	// (0x00049918) list_single_number_heading_pane_vc_t3

0x0002,

0xfa64,	// (0x0004d9d1) list_single_number_heading_pane_vc_t_ParamLimits

0xfa64,	// (0x0004d9d1) list_single_number_heading_pane_vc_t

0xb821,	// (0x0004978e) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xb821,	// (0x0004978e) list_single_graphic_heading_pane_vc_g1

0x693b,	// (0x000448a8) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x693b,	// (0x000448a8) list_single_graphic_heading_pane_vc_g4

0xb82d,	// (0x0004979a) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xb82d,	// (0x0004979a) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf803,	// (0x0004d770) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0004d770) list_single_graphic_heading_pane_vc_g

0xb84f,	// (0x000497bc) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xb84f,	// (0x000497bc) list_single_graphic_heading_pane_vc_t1

0xb9bd,	// (0x0004992a) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb9bd,	// (0x0004992a) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa6b,	// (0x0004d9d8) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa6b,	// (0x0004d9d8) list_single_graphic_heading_pane_vc_t

0x693b,	// (0x000448a8) list_double2_pane_vc_g1_ParamLimits

0x693b,	// (0x000448a8) list_double2_pane_vc_g1

0xb82d,	// (0x0004979a) list_double2_pane_vc_g2_ParamLimits

0xb82d,	// (0x0004979a) list_double2_pane_vc_g2

0x0001,

0xf824,	// (0x0004d791) list_double2_pane_vc_g_ParamLimits

0xf824,	// (0x0004d791) list_double2_pane_vc_g

0xb9d1,	// (0x0004993e) list_double2_pane_vc_t1_ParamLimits

0xb9d1,	// (0x0004993e) list_double2_pane_vc_t1

0xc2d7,	// (0x0004a244) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xc2d7,	// (0x0004a244) list_double2_large_graphic_pane_vc_g1

0xc2e3,	// (0x0004a250) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xc2e3,	// (0x0004a250) list_double2_large_graphic_pane_vc_g2

0xc2ef,	// (0x0004a25c) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xc2ef,	// (0x0004a25c) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa70,	// (0x0004d9dd) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa70,	// (0x0004d9dd) list_double2_large_graphic_pane_vc_g

0xb9e7,	// (0x00049954) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb9e7,	// (0x00049954) list_double2_large_graphic_pane_vc_t1

0xc2fb,	// (0x0004a268) list_double_time_pane_vc_g1_ParamLimits

0xc2fb,	// (0x0004a268) list_double_time_pane_vc_g1

0xc307,	// (0x0004a274) list_double_time_pane_vc_g2_ParamLimits

0xc307,	// (0x0004a274) list_double_time_pane_vc_g2

0x0001,

0xfa77,	// (0x0004d9e4) list_double_time_pane_vc_g_ParamLimits

0xfa77,	// (0x0004d9e4) list_double_time_pane_vc_g

0xb9fd,	// (0x0004996a) list_double_time_pane_vc_t1_ParamLimits

0xb9fd,	// (0x0004996a) list_double_time_pane_vc_t1

0xba16,	// (0x00049983) list_double_time_pane_vc_t2_ParamLimits

0xba16,	// (0x00049983) list_double_time_pane_vc_t2

0xba56,	// (0x000499c3) list_double_time_pane_vc_t3_ParamLimits

0xba56,	// (0x000499c3) list_double_time_pane_vc_t3

0xba6e,	// (0x000499db) list_double_time_pane_vc_t4_ParamLimits

0xba6e,	// (0x000499db) list_double_time_pane_vc_t4

0x0003,

0xfa7c,	// (0x0004d9e9) list_double_time_pane_vc_t_ParamLimits

0xfa7c,	// (0x0004d9e9) list_double_time_pane_vc_t

0x693b,	// (0x000448a8) list_double_pane_vc_g1_ParamLimits

0x693b,	// (0x000448a8) list_double_pane_vc_g1

0xb82d,	// (0x0004979a) list_double_pane_vc_g2_ParamLimits

0xb82d,	// (0x0004979a) list_double_pane_vc_g2

0x0001,

0xf824,	// (0x0004d791) list_double_pane_vc_g_ParamLimits

0xf824,	// (0x0004d791) list_double_pane_vc_g

0xba82,	// (0x000499ef) list_double_pane_vc_t1_ParamLimits

0xba82,	// (0x000499ef) list_double_pane_vc_t1

0xba94,	// (0x00049a01) list_double_pane_vc_t2_ParamLimits

0xba94,	// (0x00049a01) list_double_pane_vc_t2

0x0001,

0xfa85,	// (0x0004d9f2) list_double_pane_vc_t_ParamLimits

0xfa85,	// (0x0004d9f2) list_double_pane_vc_t

0x693b,	// (0x000448a8) list_double_number_pane_vc_g1_ParamLimits

0x693b,	// (0x000448a8) list_double_number_pane_vc_g1

0xb82d,	// (0x0004979a) list_double_number_pane_vc_g2_ParamLimits

0xb82d,	// (0x0004979a) list_double_number_pane_vc_g2

0x0001,

0xf824,	// (0x0004d791) list_double_number_pane_vc_g_ParamLimits

0xf824,	// (0x0004d791) list_double_number_pane_vc_g

0xbaac,	// (0x00049a19) list_double_number_pane_vc_t1_ParamLimits

0xbaac,	// (0x00049a19) list_double_number_pane_vc_t1

0xbac0,	// (0x00049a2d) list_double_number_pane_vc_t2_ParamLimits

0xbac0,	// (0x00049a2d) list_double_number_pane_vc_t2

0xba94,	// (0x00049a01) list_double_number_pane_vc_t3_ParamLimits

0xba94,	// (0x00049a01) list_double_number_pane_vc_t3

0x0002,

0xfa8a,	// (0x0004d9f7) list_double_number_pane_vc_t_ParamLimits

0xfa8a,	// (0x0004d9f7) list_double_number_pane_vc_t

0xc313,	// (0x0004a280) list_double_large_graphic_pane_vc_g1_ParamLimits

0xc313,	// (0x0004a280) list_double_large_graphic_pane_vc_g1

0xc31f,	// (0x0004a28c) list_double_large_graphic_pane_vc_g2_ParamLimits

0xc31f,	// (0x0004a28c) list_double_large_graphic_pane_vc_g2

0xc2ef,	// (0x0004a25c) list_double_large_graphic_pane_vc_g3_ParamLimits

0xc2ef,	// (0x0004a25c) list_double_large_graphic_pane_vc_g3

0xbad2,	// (0x00049a3f) list_double_large_graphic_pane_vc_g4_ParamLimits

0xbad2,	// (0x00049a3f) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa91,	// (0x0004d9fe) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa91,	// (0x0004d9fe) list_double_large_graphic_pane_vc_g

0xbade,	// (0x00049a4b) list_double_large_graphic_pane_vc_t1_ParamLimits

0xbade,	// (0x00049a4b) list_double_large_graphic_pane_vc_t1

0xbaf0,	// (0x00049a5d) list_double_large_graphic_pane_vc_t2_ParamLimits

0xbaf0,	// (0x00049a5d) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa9a,	// (0x0004da07) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa9a,	// (0x0004da07) list_double_large_graphic_pane_vc_t

0x693b,	// (0x000448a8) list_double_heading_pane_vc_g1_ParamLimits

0x693b,	// (0x000448a8) list_double_heading_pane_vc_g1

0xb82d,	// (0x0004979a) list_double_heading_pane_vc_g2_ParamLimits

0xb82d,	// (0x0004979a) list_double_heading_pane_vc_g2

0x0001,

0xf824,	// (0x0004d791) list_double_heading_pane_vc_g_ParamLimits

0xf824,	// (0x0004d791) list_double_heading_pane_vc_g

0xbb09,	// (0x00049a76) list_double_heading_pane_vc_t1_ParamLimits

0xbb09,	// (0x00049a76) list_double_heading_pane_vc_t1

0xb84f,	// (0x000497bc) list_double_heading_pane_vc_t2_ParamLimits

0xb84f,	// (0x000497bc) list_double_heading_pane_vc_t2

0x0001,

0xfa9f,	// (0x0004da0c) list_double_heading_pane_vc_t_ParamLimits

0xfa9f,	// (0x0004da0c) list_double_heading_pane_vc_t

0xb821,	// (0x0004978e) list_double_graphic_pane_vc_g1_ParamLimits

0xb821,	// (0x0004978e) list_double_graphic_pane_vc_g1

0xc32e,	// (0x0004a29b) list_double_graphic_pane_vc_g2_ParamLimits

0xc32e,	// (0x0004a29b) list_double_graphic_pane_vc_g2

0xc33d,	// (0x0004a2aa) list_double_graphic_pane_vc_g3_ParamLimits

0xc33d,	// (0x0004a2aa) list_double_graphic_pane_vc_g3

0x0002,

0xfaa4,	// (0x0004da11) list_double_graphic_pane_vc_g_ParamLimits

0xfaa4,	// (0x0004da11) list_double_graphic_pane_vc_g

0xbb1d,	// (0x00049a8a) list_double_graphic_pane_vc_t1_ParamLimits

0xbb1d,	// (0x00049a8a) list_double_graphic_pane_vc_t1

0xba94,	// (0x00049a01) list_double_graphic_pane_vc_t2_ParamLimits

0xba94,	// (0x00049a01) list_double_graphic_pane_vc_t2

0x0001,

0xfaab,	// (0x0004da18) list_double_graphic_pane_vc_t_ParamLimits

0xfaab,	// (0x0004da18) list_double_graphic_pane_vc_t

0x8a08,	// (0x00046975) aid_size_cell_fastswap

0x8a10,	// (0x0004697d) aid_size_cell_touch_ParamLimits

0x8a10,	// (0x0004697d) aid_size_cell_touch

0x8c75,	// (0x00046be2) popup_fast_swap_wide_window_ParamLimits

0x8c75,	// (0x00046be2) popup_fast_swap_wide_window

0x8d7f,	// (0x00046cec) touch_pane_ParamLimits

0x8d7f,	// (0x00046cec) touch_pane

0x4a31,	// (0x0004299e) button_value_adjust_pane_cp2

0x933a,	// (0x000472a7) button_value_adjust_pane_cp4

0x935e,	// (0x000472cb) form_field_data_pane_cp2

0x937f,	// (0x000472ec) form_field_data_wide_pane_cp2

0x4d90,	// (0x00042cfd) bg_scroll_pane_ParamLimits

0x958d,	// (0x000474fa) scroll_handle_pane_ParamLimits

0x95a1,	// (0x0004750e) scroll_sc2_down_pane_ParamLimits

0x95a1,	// (0x0004750e) scroll_sc2_down_pane

0x4dca,	// (0x00042d37) scroll_sc2_up_pane_ParamLimits

0x4dca,	// (0x00042d37) scroll_sc2_up_pane

0xc9fc,	// (0x0004a969) grid_wheel_folder_pane_g1_ParamLimits

0xc9fc,	// (0x0004a969) grid_wheel_folder_pane_g1

0x9766,	// (0x000476d3) clock_nsta_pane_cp2_ParamLimits

0x9766,	// (0x000476d3) clock_nsta_pane_cp2

0xb2ec,	// (0x00049259) listscroll_midp_pane_ParamLimits

0xb2f8,	// (0x00049265) midp_canvas_pane

0x567d,	// (0x000435ea) nsta_clock_indic_pane

0x56ad,	// (0x0004361a) listscroll_form_pane_vc

0x56b5,	// (0x00043622) listscroll_set_pane_vc_ParamLimits

0x56b5,	// (0x00043622) listscroll_set_pane_vc

0xbf5b,	// (0x00049ec8) clock_nsta_pane

0xbf68,	// (0x00049ed5) indicator_nsta_pane

0x58f7,	// (0x00043864) bg_popup_sub_pane_cp2_ParamLimits

0x590b,	// (0x00043878) find_pane_cp2_ParamLimits

0x590b,	// (0x00043878) find_pane_cp2

0x5921,	// (0x0004388e) grid_toobar_pane_ParamLimits

0x5a7d,	// (0x000439ea) list_form_gen_pane_vc_ParamLimits

0x5a7d,	// (0x000439ea) list_form_gen_pane_vc

0x5a93,	// (0x00043a00) scroll_pane_cp8_vc_ParamLimits

0x5a93,	// (0x00043a00) scroll_pane_cp8_vc

0x5ae3,	// (0x00043a50) data_form_wide_pane_vc_ParamLimits

0x5ae3,	// (0x00043a50) data_form_wide_pane_vc

0x5aef,	// (0x00043a5c) form_field_data_wide_pane_vc_g1

0x5af7,	// (0x00043a64) form_field_data_wide_pane_vc_t1_ParamLimits

0x5af7,	// (0x00043a64) form_field_data_wide_pane_vc_t1

0x4a45,	// (0x000429b2) input_focus_pane_cp6_vc_ParamLimits

0x4a45,	// (0x000429b2) input_focus_pane_cp6_vc

0xc485,	// (0x0004a3f2) list_midp_pane_ParamLimits

0xc491,	// (0x0004a3fe) scroll_pane_cp16_ParamLimits

0xc491,	// (0x0004a3fe) scroll_pane_cp16

0x5d5e,	// (0x00043ccb) button_value_adjust_pane_ParamLimits

0x5d5e,	// (0x00043ccb) button_value_adjust_pane

0xc63c,	// (0x0004a5a9) button_value_adjust_pane_cp6_ParamLimits

0xc63c,	// (0x0004a5a9) button_value_adjust_pane_cp6

0xc766,	// (0x0004a6d3) settings_code_pane_cp_ParamLimits

0xc766,	// (0x0004a6d3) settings_code_pane_cp

0x42aa,	// (0x00042217) cell_touch_pane_g1

0x42aa,	// (0x00042217) cell_touch_pane_g2

0x0001,

0xf74c,	// (0x0004d6b9) cell_touch_pane_g

0xc8c8,	// (0x0004a835) cell_touch_pane_cp_ParamLimits

0xc8c8,	// (0x0004a835) cell_touch_pane_cp

0xc8d8,	// (0x0004a845) cell_touch_pane_ParamLimits

0xc8d8,	// (0x0004a845) cell_touch_pane

0x42aa,	// (0x00042217) scroll_sc2_down_pane_g1

0x42aa,	// (0x00042217) scroll_sc2_up_pane_g1

0x42b4,	// (0x00042221) bg_set_opt_pane_cp4_vc

0x6f7e,	// (0x00044eeb) list_set_graphic_pane_vc_g1_ParamLimits

0x6f7e,	// (0x00044eeb) list_set_graphic_pane_vc_g1

0x6f8a,	// (0x00044ef7) list_set_graphic_pane_vc_g2_ParamLimits

0x6f8a,	// (0x00044ef7) list_set_graphic_pane_vc_g2

0x0001,

0xfa36,	// (0x0004d9a3) list_set_graphic_pane_vc_g_ParamLimits

0xfa36,	// (0x0004d9a3) list_set_graphic_pane_vc_g

0x6f96,	// (0x00044f03) text_primary_small_cp13_vc_ParamLimits

0x6f96,	// (0x00044f03) text_primary_small_cp13_vc

0x6fae,	// (0x00044f1b) list_set_graphic_pane_vc_ParamLimits

0x6fae,	// (0x00044f1b) list_set_graphic_pane_vc

0x42b4,	// (0x00042221) input_focus_pane_cp2_vc

0x42aa,	// (0x00042217) setting_code_pane_vc_g1

0x6fc2,	// (0x00044f2f) setting_code_pane_vc_t1

0x6fd0,	// (0x00044f3d) set_text_pane_vc_t1_ParamLimits

0x6fd0,	// (0x00044f3d) set_text_pane_vc_t1

0x42b4,	// (0x00042221) input_focus_pane_cp1_vc

0x6feb,	// (0x00044f58) list_set_text_pane_vc

0x42aa,	// (0x00042217) setting_text_pane_vc_g1

0x42b4,	// (0x00042221) bg_set_opt_pane_cp2_vc

0x6ff5,	// (0x00044f62) setting_slider_graphic_pane_vc_g1

0x6ffd,	// (0x00044f6a) setting_slider_graphic_pane_vc_t1

0x700b,	// (0x00044f78) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa3b,	// (0x0004d9a8) setting_slider_graphic_pane_vc_t

0x7019,	// (0x00044f86) slider_set_pane_cp_vc

0x7021,	// (0x00044f8e) slider_set_pane_vc_g1

0x702a,	// (0x00044f97) slider_set_pane_vc_g2

0x0006,

0xfa40,	// (0x0004d9ad) slider_set_pane_vc_g

0x4aac,	// (0x00042a19) set_opt_bg_pane_g1_copy1

0x4ab4,	// (0x00042a21) set_opt_bg_pane_g2_copy1

0x7056,	// (0x00044fc3) set_opt_bg_pane_g3_copy1

0x4ac4,	// (0x00042a31) set_opt_bg_pane_g4_copy1

0x4acc,	// (0x00042a39) set_opt_bg_pane_g5_copy1

0x4ad4,	// (0x00042a41) set_opt_bg_pane_g6_copy1

0x7060,	// (0x00044fcd) set_opt_bg_pane_g7_copy1

0x7068,	// (0x00044fd5) set_opt_bg_pane_g8_copy1

0x7072,	// (0x00044fdf) set_opt_bg_pane_g9_copy1

0x42b4,	// (0x00042221) bg_set_opt_pane_cp_vc

0x707c,	// (0x00044fe9) setting_slider_pane_vc_t1

0x6ffd,	// (0x00044f6a) setting_slider_pane_vc_t2

0x700b,	// (0x00044f78) setting_slider_pane_vc_t3

0x0002,

0xfa4f,	// (0x0004d9bc) setting_slider_pane_vc_t

0x7019,	// (0x00044f86) slider_set_pane_vc

0x9b10,	// (0x00047a7d) volume_set_pane_vc_g1

0x9b19,	// (0x00047a86) volume_set_pane_vc_g2

0x9b22,	// (0x00047a8f) volume_set_pane_vc_g3

0x9b2b,	// (0x00047a98) volume_set_pane_vc_g4

0x9b34,	// (0x00047aa1) volume_set_pane_vc_g5

0x9b3d,	// (0x00047aaa) volume_set_pane_vc_g6

0x9b46,	// (0x00047ab3) volume_set_pane_vc_g7

0x9b4f,	// (0x00047abc) volume_set_pane_vc_g8

0x9b58,	// (0x00047ac5) volume_set_pane_vc_g9

0x9b61,	// (0x00047ace) volume_set_pane_vc_g10

0x0009,

0xf8f4,	// (0x0004d861) volume_set_pane_vc_g

0x708b,	// (0x00044ff8) volume_set_pane_vc

0x7093,	// (0x00045000) button_value_adjust_pane_cp1_vc

0x709d,	// (0x0004500a) list_highlight_pane_cp2_vc

0x70a6,	// (0x00045013) list_set_pane_vc_ParamLimits

0x70a6,	// (0x00045013) list_set_pane_vc

0x7110,	// (0x0004507d) main_pane_set_vc_t1_ParamLimits

0x7110,	// (0x0004507d) main_pane_set_vc_t1

0x7125,	// (0x00045092) main_pane_set_vc_t2_ParamLimits

0x7125,	// (0x00045092) main_pane_set_vc_t2

0x7137,	// (0x000450a4) main_pane_set_vc_t3_ParamLimits

0x7137,	// (0x000450a4) main_pane_set_vc_t3

0x714b,	// (0x000450b8) main_pane_set_vc_t4_ParamLimits

0x714b,	// (0x000450b8) main_pane_set_vc_t4

0x0003,

0xfa56,	// (0x0004d9c3) main_pane_set_vc_t_ParamLimits

0xfa56,	// (0x0004d9c3) main_pane_set_vc_t

0x715f,	// (0x000450cc) setting_code_pane_vc_ParamLimits

0x715f,	// (0x000450cc) setting_code_pane_vc

0x7170,	// (0x000450dd) setting_slider_graphic_pane_vc

0x7170,	// (0x000450dd) setting_slider_pane_vc

0x7170,	// (0x000450dd) setting_text_pane_vc

0x7170,	// (0x000450dd) setting_volume_pane_vc

0x717a,	// (0x000450e7) scroll_pane_cp121_vc

0x4a1f,	// (0x0004298c) set_content_pane_vc

0x71b8,	// (0x00045125) button_value_adjust_pane_g1

0x71c1,	// (0x0004512e) button_value_adjust_pane_g2

0x0001,

0xfab0,	// (0x0004da1d) button_value_adjust_pane_g

0x71ca,	// (0x00045137) form_field_slider_wide_pane_vc_t1_ParamLimits

0x71ca,	// (0x00045137) form_field_slider_wide_pane_vc_t1

0x71de,	// (0x0004514b) form_field_slider_wide_pane_vc_t2_ParamLimits

0x71de,	// (0x0004514b) form_field_slider_wide_pane_vc_t2

0x0001,

0xfab5,	// (0x0004da22) form_field_slider_wide_pane_vc_t_ParamLimits

0xfab5,	// (0x0004da22) form_field_slider_wide_pane_vc_t

0x4302,	// (0x0004226f) input_focus_pane_cp10_vc_ParamLimits

0x4302,	// (0x0004226f) input_focus_pane_cp10_vc

0x71f0,	// (0x0004515d) slider_cont_pane_cp1_vc_ParamLimits

0x71f0,	// (0x0004515d) slider_cont_pane_cp1_vc

0x7021,	// (0x00044f8e) slider_form_pane_g1_cp2

0x702a,	// (0x00044f97) slider_form_pane_g2_cp2

0x7209,	// (0x00045176) form_field_slider_pane_vc_t3

0x7217,	// (0x00045184) form_field_slider_pane_vc_t4

0x7225,	// (0x00045192) slider_form_pane_vc_ParamLimits

0x7225,	// (0x00045192) slider_form_pane_vc

0x7232,	// (0x0004519f) form_field_slider_pane_vc_t1_ParamLimits

0x7232,	// (0x0004519f) form_field_slider_pane_vc_t1

0x71de,	// (0x0004514b) form_field_slider_pane_vc_t2_ParamLimits

0x71de,	// (0x0004514b) form_field_slider_pane_vc_t2

0x0001,

0xfac5,	// (0x0004da32) form_field_slider_pane_vc_t_ParamLimits

0xfac5,	// (0x0004da32) form_field_slider_pane_vc_t

0x4302,	// (0x0004226f) input_focus_pane_cp9_vc_ParamLimits

0x4302,	// (0x0004226f) input_focus_pane_cp9_vc

0x724e,	// (0x000451bb) slider_cont_pane_vc_ParamLimits

0x724e,	// (0x000451bb) slider_cont_pane_vc

0x7260,	// (0x000451cd) list_form_graphic_pane_cp_vc_ParamLimits

0x7260,	// (0x000451cd) list_form_graphic_pane_cp_vc

0x5aef,	// (0x00043a5c) form_field_popup_wide_pane_vc_g1

0x7275,	// (0x000451e2) form_field_popup_wide_pane_vc_t1_ParamLimits

0x7275,	// (0x000451e2) form_field_popup_wide_pane_vc_t1

0x4a45,	// (0x000429b2) input_focus_pane_cp8_vc_ParamLimits

0x4a45,	// (0x000429b2) input_focus_pane_cp8_vc

0x728c,	// (0x000451f9) list_form_wide_pane_vc_ParamLimits

0x728c,	// (0x000451f9) list_form_wide_pane_vc

0x7298,	// (0x00045205) list_form_graphic_pane_vc_g1

0x72a0,	// (0x0004520d) list_form_graphic_pane_vc_t1_ParamLimits

0x72a0,	// (0x0004520d) list_form_graphic_pane_vc_t1

0x4310,	// (0x0004227d) list_highlight_pane_cp5_vc_ParamLimits

0x4310,	// (0x0004227d) list_highlight_pane_cp5_vc

0x72bc,	// (0x00045229) list_form_graphic_pane_vc_ParamLimits

0x72bc,	// (0x00045229) list_form_graphic_pane_vc

0x5aef,	// (0x00043a5c) form_field_popup_pane_vc_g1

0x72d2,	// (0x0004523f) form_field_popup_pane_vc_t1_ParamLimits

0x72d2,	// (0x0004523f) form_field_popup_pane_vc_t1

0x4a45,	// (0x000429b2) input_focus_pane_cp7_vc_ParamLimits

0x4a45,	// (0x000429b2) input_focus_pane_cp7_vc

0x72e9,	// (0x00045256) list_form_pane_vc_ParamLimits

0x72e9,	// (0x00045256) list_form_pane_vc

0x72f5,	// (0x00045262) data_form_pane_vc_t1_ParamLimits

0x72f5,	// (0x00045262) data_form_pane_vc_t1

0x4aac,	// (0x00042a19) input_focus_pane_vc_g1

0x4ab4,	// (0x00042a21) input_focus_pane_vc_g2

0x4abc,	// (0x00042a29) input_focus_pane_vc_g3

0x4ac4,	// (0x00042a31) input_focus_pane_vc_g4

0x4acc,	// (0x00042a39) input_focus_pane_vc_g5

0x4ad4,	// (0x00042a41) input_focus_pane_vc_g6

0x4adc,	// (0x00042a49) input_focus_pane_vc_g7

0x4ae4,	// (0x00042a51) input_focus_pane_vc_g8

0x4aec,	// (0x00042a59) input_focus_pane_vc_g9

0x42aa,	// (0x00042217) input_focus_pane_vc_g10

0x0009,

0xf6d5,	// (0x0004d642) input_focus_pane_vc_g

0x5ae3,	// (0x00043a50) data_form_pane_vc_ParamLimits

0x5ae3,	// (0x00043a50) data_form_pane_vc

0x5aef,	// (0x00043a5c) form_field_data_pane_vc_g1

0x7310,	// (0x0004527d) form_field_data_pane_vc_t1_ParamLimits

0x7310,	// (0x0004527d) form_field_data_pane_vc_t1

0x4a45,	// (0x000429b2) input_focus_pane_vc_ParamLimits

0x4a45,	// (0x000429b2) input_focus_pane_vc

0x732a,	// (0x00045297) button_value_adjust_pane_cp3_vc

0x7332,	// (0x0004529f) button_value_adjust_pane_cp5_vc

0x733a,	// (0x000452a7) form_field_data_pane_vc_ParamLimits

0x733a,	// (0x000452a7) form_field_data_pane_vc

0x7351,	// (0x000452be) form_field_data_pane_vc_cp2

0x7359,	// (0x000452c6) form_field_data_wide_pane_vc_ParamLimits

0x7359,	// (0x000452c6) form_field_data_wide_pane_vc

0x736f,	// (0x000452dc) form_field_data_wide_pane_vc_cp2

0x7377,	// (0x000452e4) form_field_popup_pane_vc_ParamLimits

0x7377,	// (0x000452e4) form_field_popup_pane_vc

0x738e,	// (0x000452fb) form_field_popup_wide_pane_vc_ParamLimits

0x738e,	// (0x000452fb) form_field_popup_wide_pane_vc

0x73a4,	// (0x00045311) form_field_slider_pane_vc_ParamLimits

0x73a4,	// (0x00045311) form_field_slider_pane_vc

0x73b7,	// (0x00045324) form_field_slider_wide_pane_vc_ParamLimits

0x73b7,	// (0x00045324) form_field_slider_wide_pane_vc

0xc8ea,	// (0x0004a857) grid_touch_1_pane_ParamLimits

0xc8ea,	// (0x0004a857) grid_touch_1_pane

0xc8f6,	// (0x0004a863) grid_touch_2_pane_ParamLimits

0xc8f6,	// (0x0004a863) grid_touch_2_pane

0x566f,	// (0x000435dc) touch_pane_g1_ParamLimits

0x566f,	// (0x000435dc) touch_pane_g1

0x73d8,	// (0x00045345) cell_app_pane_cp_wide_ParamLimits

0x73d8,	// (0x00045345) cell_app_pane_cp_wide

0x73e9,	// (0x00045356) grid_popup_fast_wide_pane_ParamLimits

0x73e9,	// (0x00045356) grid_popup_fast_wide_pane

0x73fd,	// (0x0004536a) scroll_pane_cp19_ParamLimits

0x73fd,	// (0x0004536a) scroll_pane_cp19

0x42b4,	// (0x00042221) bg_popup_window_pane_cp20

0x7411,	// (0x0004537e) listscroll_popup_fast_wide_pane

0x4310,	// (0x0004227d) grid_indicator_nsta_pane

0x7419,	// (0x00045386) clock_nsta_pane_g1

0x7430,	// (0x0004539d) clock_nsta_pane_t1

0xc90e,	// (0x0004a87b) cell_indicator_nsta_pane_ParamLimits

0xc90e,	// (0x0004a87b) cell_indicator_nsta_pane

0x73ca,	// (0x00045337) cell_indicator_nsta_pane_g1

0xc946,	// (0x0004a8b3) cell_indicator_nsta_pane_g2

0x0001,

0xfacf,	// (0x0004da3c) cell_indicator_nsta_pane_g

0x744c,	// (0x000453b9) clock_nsta_pane_cp

0x7454,	// (0x000453c1) indicator_nsta_pane_cp

0x745c,	// (0x000453c9) nsta_clock_indic_pane_g1

0x434c,	// (0x000422b9) grid_indicator_pane

0x4ebf,	// (0x00042e2c) scroll_pane_cp29

0x96b5,	// (0x00047622) indicator_nsta_pane_cp2_ParamLimits

0x96b5,	// (0x00047622) indicator_nsta_pane_cp2

0x4310,	// (0x0004227d) main_apps_wheel_pane

0x5c0b,	// (0x00043b78) form_midp_field_text_pane_ParamLimits

0x5d3e,	// (0x00043cab) scroll_bar_cp050_ParamLimits

0x7494,	// (0x00045401) cell_indicator_pane_ParamLimits

0x7494,	// (0x00045401) cell_indicator_pane

0x74ab,	// (0x00045418) cell_indicator_pane_g1

0xc95c,	// (0x0004a8c9) grid_wheel_folder_pane_ParamLimits

0xc95c,	// (0x0004a8c9) grid_wheel_folder_pane

0xc970,	// (0x0004a8dd) list_wheel_apps_pane_ParamLimits

0xc970,	// (0x0004a8dd) list_wheel_apps_pane

0xc981,	// (0x0004a8ee) main_apps_wheel_pane_g1_ParamLimits

0xc981,	// (0x0004a8ee) main_apps_wheel_pane_g1

0xc995,	// (0x0004a902) main_apps_wheel_pane_g2_ParamLimits

0xc995,	// (0x0004a902) main_apps_wheel_pane_g2

0x0001,

0xfade,	// (0x0004da4b) main_apps_wheel_pane_g_ParamLimits

0xfade,	// (0x0004da4b) main_apps_wheel_pane_g

0xc9ad,	// (0x0004a91a) main_apps_wheel_pane_t1_ParamLimits

0xc9ad,	// (0x0004a91a) main_apps_wheel_pane_t1

0xc9d0,	// (0x0004a93d) list_wheel_apps_pane_g1

0xc9d8,	// (0x0004a945) list_wheel_apps_pane_g2

0xc9e0,	// (0x0004a94d) list_wheel_apps_pane_g3

0xc9e8,	// (0x0004a955) list_wheel_apps_pane_g4

0xc9f2,	// (0x0004a95f) list_wheel_apps_pane_g5

0x0004,

0xfae3,	// (0x0004da50) list_wheel_apps_pane_g

0x52f3,	// (0x00043260) navi_icon_text_pane

0xbea3,	// (0x00049e10) aid_fill_nsta

0xca15,	// (0x0004a982) navi_icon_text_pane_g1

0xca24,	// (0x0004a991) navi_icon_text_pane_t1

0xb2d4,	// (0x00049241) list_set_graphic_pane_t1_ParamLimits

0xb2d4,	// (0x00049241) list_set_graphic_pane_t1

0x6470,	// (0x000443dd) popup_midp_note_alarm_window_t6_ParamLimits

0x6470,	// (0x000443dd) popup_midp_note_alarm_window_t6

0x6482,	// (0x000443ef) popup_midp_note_alarm_window_t7_ParamLimits

0x6482,	// (0x000443ef) popup_midp_note_alarm_window_t7

0x6494,	// (0x00044401) popup_midp_note_alarm_window_t8_ParamLimits

0x6494,	// (0x00044401) popup_midp_note_alarm_window_t8

0x64a6,	// (0x00044413) popup_midp_note_alarm_window_t9_ParamLimits

0x64a6,	// (0x00044413) popup_midp_note_alarm_window_t9

0x64b8,	// (0x00044425) popup_midp_note_alarm_window_t10_ParamLimits

0x64b8,	// (0x00044425) popup_midp_note_alarm_window_t10

0x64ca,	// (0x00044437) popup_midp_note_alarm_window_t11_ParamLimits

0x64ca,	// (0x00044437) popup_midp_note_alarm_window_t11

0x64dc,	// (0x00044449) scroll_pane_cp17_ParamLimits

0x64dc,	// (0x00044449) scroll_pane_cp17

0x9b10,	// (0x00047a7d) volume_small_pane_cp_g1

0x9e05,	// (0x00047d72) volume_small_pane_cp_g2

0x9e0e,	// (0x00047d7b) volume_small_pane_cp_g3

0x9e17,	// (0x00047d84) volume_small_pane_cp_g4

0x9e20,	// (0x00047d8d) volume_small_pane_cp_g5

0x9e29,	// (0x00047d96) volume_small_pane_cp_g6

0x9e32,	// (0x00047d9f) volume_small_pane_cp_g7

0x9e3b,	// (0x00047da8) volume_small_pane_cp_g8

0x9e44,	// (0x00047db1) volume_small_pane_cp_g9

0x9e4d,	// (0x00047dba) volume_small_pane_cp_g10

0x549d,	// (0x0004340a) midp_ticker_pane_g1_ParamLimits

0x54a9,	// (0x00043416) midp_ticker_pane_g2_ParamLimits

0xf79d,	// (0x0004d70a) midp_ticker_pane_g_ParamLimits

0xb39d,	// (0x0004930a) midp_ticker_pane_t1_ParamLimits

0xbeb9,	// (0x00049e26) aid_fill_nsta_2

0x5d2a,	// (0x00043c97) list_form2_midp_pane

0x6b93,	// (0x00044b00) midp_editing_number_pane_ParamLimits

0x6ba2,	// (0x00044b0f) midp_ticker_pane_ParamLimits

0x74b5,	// (0x00045422) form2_midp_field_pane

0x74bd,	// (0x0004542a) scroll_pane_cp51

0x74dd,	// (0x0004544a) form2_midp_button_pane_ParamLimits

0x74dd,	// (0x0004544a) form2_midp_button_pane

0x74ef,	// (0x0004545c) form2_midp_content_pane_ParamLimits

0x74ef,	// (0x0004545c) form2_midp_content_pane

0x7509,	// (0x00045476) form2_midp_field_choice_group_pane

0x7511,	// (0x0004547e) form2_midp_field_pane_g1

0x7519,	// (0x00045486) form2_midp_field_pane_g2

0x7521,	// (0x0004548e) form2_midp_field_pane_g3

0x7529,	// (0x00045496) form2_midp_field_pane_g4

0x0003,

0xfb08,	// (0x0004da75) form2_midp_field_pane_g

0x7531,	// (0x0004549e) form2_midp_gauge_slider_pane

0x7539,	// (0x000454a6) form2_midp_gauge_wait_pane

0x7541,	// (0x000454ae) form2_midp_image_pane_ParamLimits

0x7541,	// (0x000454ae) form2_midp_image_pane

0x755c,	// (0x000454c9) form2_midp_label_pane_ParamLimits

0x755c,	// (0x000454c9) form2_midp_label_pane

0xca55,	// (0x0004a9c2) form2_midp_label_pane_cp_ParamLimits

0xca55,	// (0x0004a9c2) form2_midp_label_pane_cp

0x7575,	// (0x000454e2) form2_midp_string_pane_ParamLimits

0x7575,	// (0x000454e2) form2_midp_string_pane

0xbb2f,	// (0x00049a9c) form2_midp_text_pane_ParamLimits

0xbb2f,	// (0x00049a9c) form2_midp_text_pane

0x7587,	// (0x000454f4) form2_midp_time_pane

0x7597,	// (0x00045504) input_focus_pane_cp51_ParamLimits

0x7597,	// (0x00045504) input_focus_pane_cp51

0x75af,	// (0x0004551c) form2_midp_label_pane_t1_ParamLimits

0x75af,	// (0x0004551c) form2_midp_label_pane_t1

0xbb4e,	// (0x00049abb) form2_mdip_text_pane_t1_ParamLimits

0xbb4e,	// (0x00049abb) form2_mdip_text_pane_t1

0xbb6c,	// (0x00049ad9) form2_midp_time_pane_t1

0x75f8,	// (0x00045565) form2_midp_gauge_slider_pane_t1

0xca76,	// (0x0004a9e3) form2_midp_gauge_slider_pane_t2

0xca88,	// (0x0004a9f5) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb11,	// (0x0004da7e) form2_midp_gauge_slider_pane_t

0x760a,	// (0x00045577) form2_midp_slider_pane

0x7616,	// (0x00045583) form2_midp_gauge_wait_pane_t1

0x7624,	// (0x00045591) form2_midp_wait_pane_ParamLimits

0x7624,	// (0x00045591) form2_midp_wait_pane

0xc1e4,	// (0x0004a151) list_single_2graphic_pane_cp4_ParamLimits

0xc1e4,	// (0x0004a151) list_single_2graphic_pane_cp4

0xca9a,	// (0x0004aa07) list_single_midp_graphic_pane_cp_ParamLimits

0xca9a,	// (0x0004aa07) list_single_midp_graphic_pane_cp

0x42b4,	// (0x00042221) list_highlight_pane_cp20

0x764f,	// (0x000455bc) list_single_2graphic_pane_g1_cp4

0x7657,	// (0x000455c4) list_single_2graphic_pane_g2_cp4

0x765f,	// (0x000455cc) list_single_2graphic_pane_t1_cp4

0x4310,	// (0x0004227d) list_highlight_pane_cp21

0x766e,	// (0x000455db) list_single_midp_graphic_pane_g4_cp

0x767d,	// (0x000455ea) list_single_midp_graphic_pane_t1_cp

0xcac9,	// (0x0004aa36) form2_mdip_string_pane_t1_ParamLimits

0xcac9,	// (0x0004aa36) form2_mdip_string_pane_t1

0x42b4,	// (0x00042221) bg_wml_button_pane_cp2

0x42aa,	// (0x00042217) form2_midp_image_pane_g1

0xae90,	// (0x00048dfd) list_double_large_graphic_pane_g5_ParamLimits

0xae90,	// (0x00048dfd) list_double_large_graphic_pane_g5

0xb2ec,	// (0x00049259) midp_form_pane_ParamLimits

0x4310,	// (0x0004227d) main_apps_wheel_pane_ParamLimits

0xb717,	// (0x00049684) popup_preview_window_ParamLimits

0xb717,	// (0x00049684) popup_preview_window

0x5794,	// (0x00043701) popup_touch_info_window_ParamLimits

0x5794,	// (0x00043701) popup_touch_info_window

0x57b2,	// (0x0004371f) popup_touch_menu_window_ParamLimits

0x57b2,	// (0x0004371f) popup_touch_menu_window

0x42a0,	// (0x0004220d) bg_popup_sub_pane_cp6

0x7692,	// (0x000455ff) list_touch_menu_pane

0x769a,	// (0x00045607) list_single_touch_menu_pane_ParamLimits

0x769a,	// (0x00045607) list_single_touch_menu_pane

0x76b1,	// (0x0004561e) list_single_touch_menu_pane_t1

0x4310,	// (0x0004227d) bg_popup_sub_pane_cp7_ParamLimits

0x4310,	// (0x0004227d) bg_popup_sub_pane_cp7

0x76bf,	// (0x0004562c) heading_sub_pane

0x76c7,	// (0x00045634) list_touch_info_pane_ParamLimits

0x76c7,	// (0x00045634) list_touch_info_pane

0x76d6,	// (0x00045643) list_single_touch_info_pane_ParamLimits

0x76d6,	// (0x00045643) list_single_touch_info_pane

0x76e8,	// (0x00045655) list_single_touch_info_pane_t1

0x76f6,	// (0x00045663) list_single_touch_info_pane_t2

0x0001,

0xfb1f,	// (0x0004da8c) list_single_touch_info_pane_t

0x5473,	// (0x000433e0) bg_popup_heading_pane_cp

0x7704,	// (0x00045671) heading_sub_pane_t1

0x5aa9,	// (0x00043a16) bg_popup_preview_window_pane_cp_ParamLimits

0x5aa9,	// (0x00043a16) bg_popup_preview_window_pane_cp

0x76bf,	// (0x0004562c) heading_preview_pane

0x76c7,	// (0x00045634) list_preview_pane_ParamLimits

0x76c7,	// (0x00045634) list_preview_pane

0x7712,	// (0x0004567f) popup_preview_window_g1

0x76d6,	// (0x00045643) list_single_preview_pane_ParamLimits

0x76d6,	// (0x00045643) list_single_preview_pane

0x771a,	// (0x00045687) list_single_preview_pane_g1

0x7722,	// (0x0004568f) list_single_preview_pane_t1

0x76e8,	// (0x00045655) list_single_preview_pane_t2

0x0001,

0xfb24,	// (0x0004da91) list_single_preview_pane_t

0x7730,	// (0x0004569d) bg_popup_heading_pane_cp2_ParamLimits

0x7730,	// (0x0004569d) bg_popup_heading_pane_cp2

0x7746,	// (0x000456b3) heading_preview_pane_g1

0x774e,	// (0x000456bb) heading_preview_pane_t1_ParamLimits

0x774e,	// (0x000456bb) heading_preview_pane_t1

0x4363,	// (0x000422d0) soft_indicator_pane_t1_ParamLimits

0x49b8,	// (0x00042925) scroll_pane_ParamLimits

0x4dc1,	// (0x00042d2e) scroll_sc2_left_pane

0x4db8,	// (0x00042d25) scroll_sc2_right_pane

0x4de0,	// (0x00042d4d) scroll_bg_pane_g1_ParamLimits

0x4df5,	// (0x00042d62) scroll_bg_pane_g2_ParamLimits

0x4e0d,	// (0x00042d7a) scroll_bg_pane_g3_ParamLimits

0xf72c,	// (0x0004d699) scroll_bg_pane_g_ParamLimits

0x4de0,	// (0x00042d4d) scroll_handle_pane_g1_ParamLimits

0x4e2f,	// (0x00042d9c) scroll_handle_pane_g2_ParamLimits

0x4e0d,	// (0x00042d7a) scroll_handle_pane_g3_ParamLimits

0xf733,	// (0x0004d6a0) scroll_handle_pane_g_ParamLimits

0x56d5,	// (0x00043642) popup_choice_list_window_ParamLimits

0x56d5,	// (0x00043642) popup_choice_list_window

0x5903,	// (0x00043870) choice_list_pane

0x5985,	// (0x000438f2) cell_toolbar_pane_t1

0x59ad,	// (0x0004391a) toolbar_button_pane_ParamLimits

0x68ea,	// (0x00044857) ai_gene_pane_1_t2_ParamLimits

0x68ea,	// (0x00044857) ai_gene_pane_1_t2

0x0001,

0xf950,	// (0x0004d8bd) ai_gene_pane_1_t_ParamLimits

0xf950,	// (0x0004d8bd) ai_gene_pane_1_t

0x776b,	// (0x000456d8) scroll_sc2_left_pane_g1

0x776b,	// (0x000456d8) scroll_sc2_right_pane_g1

0x4b9d,	// (0x00042b0a) bg_popup_sub_pane_cp10

0x7775,	// (0x000456e2) list_choice_list_pane

0x778c,	// (0x000456f9) list_single_choice_list_pane_ParamLimits

0x778c,	// (0x000456f9) list_single_choice_list_pane

0x77a0,	// (0x0004570d) list_single_choice_list_pane_g1

0x77a8,	// (0x00045715) list_single_choice_list_pane_t1_ParamLimits

0x77a8,	// (0x00045715) list_single_choice_list_pane_t1

0x77bd,	// (0x0004572a) choice_list_pane_g1

0x77c5,	// (0x00045732) choice_list_pane_t1

0x42a0,	// (0x0004220d) input_focus_pane_cp11

0x4d12,	// (0x00042c7f) title_pane_stacon_g2_ParamLimits

0x4d12,	// (0x00042c7f) title_pane_stacon_g2

0x0002,

0xf712,	// (0x0004d67f) title_pane_stacon_g_ParamLimits

0xf712,	// (0x0004d67f) title_pane_stacon_g

0x5473,	// (0x000433e0) cursor_press_pane

0xb4bc,	// (0x00049429) popup_fep_hwr_window_ParamLimits

0xb4bc,	// (0x00049429) popup_fep_hwr_window

0x572b,	// (0x00043698) popup_fep_vkb_window_ParamLimits

0x572b,	// (0x00043698) popup_fep_vkb_window

0x77d3,	// (0x00045740) cursor_press_pane_g1

0x0002,

0xfb4d,	// (0x0004daba) fep_vkb_side_pane_g_ParamLimits

0x9e8f,	// (0x00047dfc) fep_hwr_candidate_pane_ParamLimits

0x9e8f,	// (0x00047dfc) fep_hwr_candidate_pane

0x9eb9,	// (0x00047e26) fep_hwr_side_pane_ParamLimits

0x9eb9,	// (0x00047e26) fep_hwr_side_pane

0x9ed9,	// (0x00047e46) fep_hwr_top_pane_ParamLimits

0x9ed9,	// (0x00047e46) fep_hwr_top_pane

0x9ef1,	// (0x00047e5e) fep_hwr_write_pane_ParamLimits

0x9ef1,	// (0x00047e5e) fep_hwr_write_pane

0xfb4d,	// (0x0004daba) fep_vkb_side_pane_g

0x77ed,	// (0x0004575a) fep_hwr_top_pane_g1

0x77db,	// (0x00045748) fep_hwr_top_pane_g2

0x9f2b,	// (0x00047e98) fep_hwr_top_pane_g3

0x0002,

0xfb29,	// (0x0004da96) fep_hwr_top_pane_g

0x9f40,	// (0x00047ead) fep_hwr_top_text_pane

0x4f86,	// (0x00042ef3) fep_hwr_top_text_pane_g1

0x7823,	// (0x00045790) fep_hwr_top_text_pane_t1

0xa036,	// (0x00047fa3) fep_hwr_candidate_pane_g1

0x7950,	// (0x000458bd) fep_vkb_keypad_pane_g3_ParamLimits

0x7950,	// (0x000458bd) fep_vkb_keypad_pane_g3

0x7978,	// (0x000458e5) fep_vkb_keypad_pane_g4_ParamLimits

0x7978,	// (0x000458e5) fep_vkb_keypad_pane_g4

0x79e7,	// (0x00045954) fep_vkb_bottom_pane_g2_ParamLimits

0x79e7,	// (0x00045954) fep_vkb_bottom_pane_g2

0x0001,

0xfb54,	// (0x0004dac1) fep_vkb_bottom_pane_g_ParamLimits

0xfb54,	// (0x0004dac1) fep_vkb_bottom_pane_g

0x776b,	// (0x000456d8) cell_vkb_side_pane_g2

0x0001,

0xfb5e,	// (0x0004dacb) cell_vkb_side_pane_g

0x7a2b,	// (0x00045998) cell_vkb_side_pane_t1

0x7a39,	// (0x000459a6) cell_vkb_side_pane_t1_copy1

0x776b,	// (0x000456d8) bg_fep_vkb_candidate_pane_g2

0x7b0f,	// (0x00045a7c) cell_vkb_candidate_pane_ParamLimits

0x7831,	// (0x0004579e) aid_size_cell_vkb_ParamLimits

0x7831,	// (0x0004579e) aid_size_cell_vkb

0x7b0f,	// (0x00045a7c) cell_vkb_candidate_pane

0xa05d,	// (0x00047fca) bg_popup_fep_shadow_pane_g1

0xcbd4,	// (0x0004ab41) fep_vkb_bottom_pane_ParamLimits

0xcbd4,	// (0x0004ab41) fep_vkb_bottom_pane

0x78be,	// (0x0004582b) fep_vkb_candidate_pane_ParamLimits

0x78be,	// (0x0004582b) fep_vkb_candidate_pane

0xcbf9,	// (0x0004ab66) fep_vkb_keypad_pane_ParamLimits

0xcbf9,	// (0x0004ab66) fep_vkb_keypad_pane

0xcc35,	// (0x0004aba2) fep_vkb_side_pane_ParamLimits

0xcc35,	// (0x0004aba2) fep_vkb_side_pane

0xcc71,	// (0x0004abde) fep_vkb_top_pane_ParamLimits

0xcc71,	// (0x0004abde) fep_vkb_top_pane

0x78e4,	// (0x00045851) fep_vkb_top_pane_g1_ParamLimits

0x78e4,	// (0x00045851) fep_vkb_top_pane_g1

0x78f3,	// (0x00045860) fep_vkb_top_pane_g2_ParamLimits

0x78f3,	// (0x00045860) fep_vkb_top_pane_g2

0x7902,	// (0x0004586f) fep_vkb_top_pane_g3_ParamLimits

0x7902,	// (0x0004586f) fep_vkb_top_pane_g3

0x0003,

0xfb44,	// (0x0004dab1) fep_vkb_top_pane_g_ParamLimits

0xfb44,	// (0x0004dab1) fep_vkb_top_pane_g

0x7920,	// (0x0004588d) fep_vkb_top_text_pane_ParamLimits

0x7920,	// (0x0004588d) fep_vkb_top_text_pane

0xccad,	// (0x0004ac1a) fep_vkb_side_pane_g1_ParamLimits

0xccad,	// (0x0004ac1a) fep_vkb_side_pane_g1

0x793f,	// (0x000458ac) grid_vkb_side_pane_ParamLimits

0x793f,	// (0x000458ac) grid_vkb_side_pane

0xa065,	// (0x00047fd2) bg_popup_fep_shadow_pane_g2

0xa06e,	// (0x00047fdb) bg_popup_fep_shadow_pane_g3

0xa076,	// (0x00047fe3) bg_popup_fep_shadow_pane_g4

0xa07f,	// (0x00047fec) bg_popup_fep_shadow_pane_g5

0xa089,	// (0x00047ff6) bg_popup_fep_shadow_pane_g6

0xa091,	// (0x00047ffe) bg_popup_fep_shadow_pane_g7

0x4ac4,	// (0x00042a31) bg_popup_fep_shadow_pane_g8

0x7996,	// (0x00045903) grid_vkb_keypad_number_pane_ParamLimits

0x7996,	// (0x00045903) grid_vkb_keypad_number_pane

0x79a6,	// (0x00045913) grid_vkb_keypad_pane_ParamLimits

0x79a6,	// (0x00045913) grid_vkb_keypad_pane

0x79cc,	// (0x00045939) fep_vkb_bottom_pane_g1_ParamLimits

0x79cc,	// (0x00045939) fep_vkb_bottom_pane_g1

0x79f5,	// (0x00045962) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x79f5,	// (0x00045962) grid_vkb_keypad_bottom_left_pane

0x7a0a,	// (0x00045977) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7a0a,	// (0x00045977) grid_vkb_keypad_bottom_right_pane

0x7a1f,	// (0x0004598c) fep_vkb_top_text_pane_g1

0xccf7,	// (0x0004ac64) fep_vkb_top_text_pane_t1

0xcd0c,	// (0x0004ac79) cell_vkb_side_pane_ParamLimits

0xcd0c,	// (0x0004ac79) cell_vkb_side_pane

0x776b,	// (0x000456d8) cell_vkb_side_pane_g1

0x7a47,	// (0x000459b4) cell_vkb_keypad_pane_ParamLimits

0x7a47,	// (0x000459b4) cell_vkb_keypad_pane

0x7abc,	// (0x00045a29) cell_vkb_keypad_pane_g1

0x0008,

0xfb71,	// (0x0004dade) bg_popup_fep_shadow_pane_g

0xa0a3,	// (0x00048010) cell_hwr_side_pane_g1

0xa0a3,	// (0x00048010) cell_hwr_side_pane_g2

0x7ac6,	// (0x00045a33) cell_vkb_keypad_pane_t1

0xcd2f,	// (0x0004ac9c) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcd2f,	// (0x0004ac9c) cell_vkb_keypad_bottom_left_pane

0xcd4c,	// (0x0004acb9) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcd4c,	// (0x0004acb9) cell_vkb_keypad_bottom_right_pane

0x776b,	// (0x000456d8) cell_vkb_keypad_bottom_left_pane_g1

0x776b,	// (0x000456d8) cell_vkb_keypad_bottom_right_pane_g1

0x7ad4,	// (0x00045a41) cell_vkb_keypad_number_pane_ParamLimits

0x7ad4,	// (0x00045a41) cell_vkb_keypad_number_pane

0x7af3,	// (0x00045a60) cell_vkb_keypad_number_pane_g1

0x7afd,	// (0x00045a6a) cell_vkb_keypad_number_pane_g2

0x7b06,	// (0x00045a73) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb63,	// (0x0004dad0) cell_vkb_keypad_number_pane_g

0x7ac6,	// (0x00045a33) cell_vkb_keypad_number_pane_t1

0x7b2a,	// (0x00045a97) fep_vkb_candidate_pane_g1

0x0001,

0xfb84,	// (0x0004daf1) cell_hwr_side_pane_g

0x7b43,	// (0x00045ab0) cell_hwr_side_pane_t1

0xa0ad,	// (0x0004801a) cell_hwr_side_pane_t1_copy1

0xa0bb,	// (0x00048028) cell_hwr_candidate_pane_g1

0xa0ea,	// (0x00048057) cell_hwr_candidate_pane_t1

0x776b,	// (0x000456d8) cell_vkb_candidate_pane_g2

0x7bc9,	// (0x00045b36) cell_vkb_candidate_pane_t1

0x9e56,	// (0x00047dc3) bg_popup_fep_shadow_pane_ParamLimits

0x9e56,	// (0x00047dc3) bg_popup_fep_shadow_pane

0x9f0b,	// (0x00047e78) bg_fep_hwr_top_pane_g4

0x77ff,	// (0x0004576c) bg_hwr_side_pane_g1_ParamLimits

0x77ff,	// (0x0004576c) bg_hwr_side_pane_g1

0x9f7c,	// (0x00047ee9) cell_hwr_side_pane_ParamLimits

0x9f7c,	// (0x00047ee9) cell_hwr_side_pane

0x9fb7,	// (0x00047f24) fep_hwr_write_pane_g1_ParamLimits

0x9fb7,	// (0x00047f24) fep_hwr_write_pane_g1

0x9fc4,	// (0x00047f31) fep_hwr_write_pane_g2_ParamLimits

0x9fc4,	// (0x00047f31) fep_hwr_write_pane_g2

0x9fd1,	// (0x00047f3e) fep_hwr_write_pane_g3_ParamLimits

0x9fd1,	// (0x00047f3e) fep_hwr_write_pane_g3

0x9fdf,	// (0x00047f4c) fep_hwr_write_pane_g4_ParamLimits

0x9fdf,	// (0x00047f4c) fep_hwr_write_pane_g4

0x0005,

0xfb30,	// (0x0004da9d) fep_hwr_write_pane_g_ParamLimits

0xfb30,	// (0x0004da9d) fep_hwr_write_pane_g

0x9f0b,	// (0x00047e78) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x9f0b,	// (0x00047e78) bg_fep_hwr_candidate_pane_g2

0x9ff4,	// (0x00047f61) cell_hwr_candidate_pane_ParamLimits

0x9ff4,	// (0x00047f61) cell_hwr_candidate_pane

0xa036,	// (0x00047fa3) fep_hwr_candidate_pane_g1_ParamLimits

0x785f,	// (0x000457cc) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x785f,	// (0x000457cc) bg_popup_fep_shadow_pane_cp2

0x7912,	// (0x0004587f) fep_vkb_top_pane_g4_ParamLimits

0x7912,	// (0x0004587f) fep_vkb_top_pane_g4

0x7931,	// (0x0004589e) fep_vkb_side_pane_g2_ParamLimits

0x7931,	// (0x0004589e) fep_vkb_side_pane_g2

0x9267,	// (0x000471d4) list_setting_pane_t4_ParamLimits

0x9267,	// (0x000471d4) list_setting_pane_t4

0x9301,	// (0x0004726e) list_setting_number_pane_t5_ParamLimits

0x9301,	// (0x0004726e) list_setting_number_pane_t5

0xb172,	// (0x000490df) list_double_heading_pane_cp2_ParamLimits

0xb172,	// (0x000490df) list_double_heading_pane_cp2

0x4a5f,	// (0x000429cc) list_double_heading_pane_g1_cp2_ParamLimits

0x4a5f,	// (0x000429cc) list_double_heading_pane_g1_cp2

0x4a6b,	// (0x000429d8) list_double_heading_pane_g2_cp2_ParamLimits

0x4a6b,	// (0x000429d8) list_double_heading_pane_g2_cp2

0x7bd7,	// (0x00045b44) list_double_heading_pane_t1_cp2_ParamLimits

0x7bd7,	// (0x00045b44) list_double_heading_pane_t1_cp2

0x7bed,	// (0x00045b5a) list_double_heading_pane_t2_cp2_ParamLimits

0x7bed,	// (0x00045b5a) list_double_heading_pane_t2_cp2

0x4298,	// (0x00042205) aid_value_unit2

0x8ccf,	// (0x00046c3c) popup_preview_fixed_window

0x4443,	// (0x000423b0) bg_popup_preview_window_pane_cp02

0x7bff,	// (0x00045b6c) list_preview_fixed_pane

0x7c45,	// (0x00045bb2) list_empty_pane_fp_ParamLimits

0x7c45,	// (0x00045bb2) list_empty_pane_fp

0x7c45,	// (0x00045bb2) list_single_cale_day_pane_fp_ParamLimits

0x7c45,	// (0x00045bb2) list_single_cale_day_pane_fp

0x7c45,	// (0x00045bb2) list_single_graphic_heading_pane_fp_ParamLimits

0x7c45,	// (0x00045bb2) list_single_graphic_heading_pane_fp

0x7c45,	// (0x00045bb2) list_single_graphic_pane_fp_ParamLimits

0x7c45,	// (0x00045bb2) list_single_graphic_pane_fp

0x7c45,	// (0x00045bb2) list_single_heading_pane_fp_ParamLimits

0x7c45,	// (0x00045bb2) list_single_heading_pane_fp

0x7c45,	// (0x00045bb2) list_single_pane_fp_ParamLimits

0x7c45,	// (0x00045bb2) list_single_pane_fp

0x7c5a,	// (0x00045bc7) list_single_pane_fp_g1_ParamLimits

0x7c5a,	// (0x00045bc7) list_single_pane_fp_g1

0x5e1f,	// (0x00043d8c) list_single_pane_fp_g2_ParamLimits

0x5e1f,	// (0x00043d8c) list_single_pane_fp_g2

0x7f0a,	// (0x00045e77) list_single_pane_fp_g3_ParamLimits

0x7f0a,	// (0x00045e77) list_single_pane_fp_g3

0x7c66,	// (0x00045bd3) list_single_pane_fp_g4_ParamLimits

0x7c66,	// (0x00045bd3) list_single_pane_fp_g4

0x0003,

0xfb97,	// (0x0004db04) list_single_pane_fp_g_ParamLimits

0xfb97,	// (0x0004db04) list_single_pane_fp_g

0xbb7f,	// (0x00049aec) list_single_pane_fp_t1_ParamLimits

0xbb7f,	// (0x00049aec) list_single_pane_fp_t1

0xbb96,	// (0x00049b03) list_single_graphic_pane_fp_g1_ParamLimits

0xbb96,	// (0x00049b03) list_single_graphic_pane_fp_g1

0x7c5a,	// (0x00045bc7) list_single_graphic_pane_fp_g2_ParamLimits

0x7c5a,	// (0x00045bc7) list_single_graphic_pane_fp_g2

0x5e1f,	// (0x00043d8c) list_single_graphic_pane_fp_g3_ParamLimits

0x5e1f,	// (0x00043d8c) list_single_graphic_pane_fp_g3

0x7f0a,	// (0x00045e77) list_single_graphic_pane_fp_g4_ParamLimits

0x7f0a,	// (0x00045e77) list_single_graphic_pane_fp_g4

0x7c66,	// (0x00045bd3) list_single_graphic_pane_fp_g5_ParamLimits

0x7c66,	// (0x00045bd3) list_single_graphic_pane_fp_g5

0x0004,

0xfba0,	// (0x0004db0d) list_single_graphic_pane_fp_g_ParamLimits

0xfba0,	// (0x0004db0d) list_single_graphic_pane_fp_g

0xbba2,	// (0x00049b0f) list_single_graphic_pane_fp_t1_ParamLimits

0xbba2,	// (0x00049b0f) list_single_graphic_pane_fp_t1

0xbb96,	// (0x00049b03) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xbb96,	// (0x00049b03) list_single_graphic_heading_pane_fp_g1

0x7c5a,	// (0x00045bc7) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7c5a,	// (0x00045bc7) list_single_graphic_heading_pane_fp_g2

0x5e1f,	// (0x00043d8c) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5e1f,	// (0x00043d8c) list_single_graphic_heading_pane_fp_g3

0x7f0a,	// (0x00045e77) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7f0a,	// (0x00045e77) list_single_graphic_heading_pane_fp_g4

0x7c66,	// (0x00045bd3) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7c66,	// (0x00045bd3) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfba0,	// (0x0004db0d) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfba0,	// (0x0004db0d) list_single_graphic_heading_pane_fp_g

0xbbb8,	// (0x00049b25) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xbbb8,	// (0x00049b25) list_single_graphic_heading_pane_fp_t1

0xbbce,	// (0x00049b3b) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xbbce,	// (0x00049b3b) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbab,	// (0x0004db18) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbab,	// (0x0004db18) list_single_graphic_heading_pane_fp_t

0xbbe0,	// (0x00049b4d) list_single_cale_day_pane_fp_g1_ParamLimits

0xbbe0,	// (0x00049b4d) list_single_cale_day_pane_fp_g1

0x7c72,	// (0x00045bdf) list_single_cale_day_pane_fp_g2_ParamLimits

0x7c72,	// (0x00045bdf) list_single_cale_day_pane_fp_g2

0xc349,	// (0x0004a2b6) list_single_cale_day_pane_fp_g3_ParamLimits

0xc349,	// (0x0004a2b6) list_single_cale_day_pane_fp_g3

0xc371,	// (0x0004a2de) list_single_cale_day_pane_fp_g4_ParamLimits

0xc371,	// (0x0004a2de) list_single_cale_day_pane_fp_g4

0xc395,	// (0x0004a302) list_single_cale_day_pane_fp_g5_ParamLimits

0xc395,	// (0x0004a302) list_single_cale_day_pane_fp_g5

0x0004,

0xfbb0,	// (0x0004db1d) list_single_cale_day_pane_fp_g_ParamLimits

0xfbb0,	// (0x0004db1d) list_single_cale_day_pane_fp_g

0xbc18,	// (0x00049b85) list_single_cale_day_pane_fp_t1_ParamLimits

0xbc18,	// (0x00049b85) list_single_cale_day_pane_fp_t1

0xbc3e,	// (0x00049bab) list_single_cale_day_pane_fp_t2_ParamLimits

0xbc3e,	// (0x00049bab) list_single_cale_day_pane_fp_t2

0xbc57,	// (0x00049bc4) list_single_cale_day_pane_fp_t3_ParamLimits

0xbc57,	// (0x00049bc4) list_single_cale_day_pane_fp_t3

0x0002,

0xfbbb,	// (0x0004db28) list_single_cale_day_pane_fp_t_ParamLimits

0xfbbb,	// (0x0004db28) list_single_cale_day_pane_fp_t

0x7c5a,	// (0x00045bc7) list_empty_pane_fp_g1_ParamLimits

0x7c5a,	// (0x00045bc7) list_empty_pane_fp_g1

0xbc70,	// (0x00049bdd) list_empty_pane_fp_t1

0xbc7e,	// (0x00049beb) list_empty_pane_fp_t2

0x0001,

0xfbc2,	// (0x0004db2f) list_empty_pane_fp_t

0x7c5a,	// (0x00045bc7) list_single_heading_pane_fp_g1_ParamLimits

0x7c5a,	// (0x00045bc7) list_single_heading_pane_fp_g1

0x5e1f,	// (0x00043d8c) list_single_heading_pane_fp_g2_ParamLimits

0x5e1f,	// (0x00043d8c) list_single_heading_pane_fp_g2

0x7f0a,	// (0x00045e77) list_single_heading_pane_fp_g3_ParamLimits

0x7f0a,	// (0x00045e77) list_single_heading_pane_fp_g3

0x0002,

0xfbc7,	// (0x0004db34) list_single_heading_pane_fp_g_ParamLimits

0xfbc7,	// (0x0004db34) list_single_heading_pane_fp_g

0xbc8c,	// (0x00049bf9) list_single_heading_pane_fp_t1_ParamLimits

0xbc8c,	// (0x00049bf9) list_single_heading_pane_fp_t1

0xbc9e,	// (0x00049c0b) list_single_heading_pane_fp_t2_ParamLimits

0xbc9e,	// (0x00049c0b) list_single_heading_pane_fp_t2

0x0001,

0xfbce,	// (0x0004db3b) list_single_heading_pane_fp_t_ParamLimits

0xfbce,	// (0x0004db3b) list_single_heading_pane_fp_t

0x4ba9,	// (0x00042b16) aid_size_cell_fast

0x4426,	// (0x00042393) soft_indicator_pane_cp1_t1

0x4be6,	// (0x00042b53) cell_app_pane_cp2_ParamLimits

0x4be6,	// (0x00042b53) cell_app_pane_cp2

0x9e78,	// (0x00047de5) fep_hwr_candidate_drop_down_list_pane

0xa050,	// (0x00047fbd) fep_hwr_candidate_pane_g3_ParamLimits

0xa050,	// (0x00047fbd) fep_hwr_candidate_pane_g3

0x3797,	// (0x00041704) fep_hwr_candidate_pane_g4_ParamLimits

0x3797,	// (0x00041704) fep_hwr_candidate_pane_g4

0x0002,

0xfb3d,	// (0x0004daaa) fep_hwr_candidate_pane_g_ParamLimits

0xfb3d,	// (0x0004daaa) fep_hwr_candidate_pane_g

0x78ad,	// (0x0004581a) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x78ad,	// (0x0004581a) fep_vkb_candidate_drop_down_list_pane

0x7b32,	// (0x00045a9f) fep_vkb_candidate_pane_g3

0x7b3a,	// (0x00045aa7) fep_vkb_candidate_pane_g4

0x0002,

0xfb6a,	// (0x0004dad7) fep_vkb_candidate_pane_g

0xa0bb,	// (0x00048028) cell_hwr_candidate_pane_g1_ParamLimits

0xa0c9,	// (0x00048036) cell_hwr_candidate_pane_g3_ParamLimits

0xa0c9,	// (0x00048036) cell_hwr_candidate_pane_g3

0xe29c,	// (0x0004c209) cell_hwr_candidate_pane_g4_ParamLimits

0xe29c,	// (0x0004c209) cell_hwr_candidate_pane_g4

0x0002,

0xfb89,	// (0x0004daf6) cell_hwr_candidate_pane_g_ParamLimits

0xfb89,	// (0x0004daf6) cell_hwr_candidate_pane_g

0x7b93,	// (0x00045b00) cell_vkb_candidate_pane_g3_ParamLimits

0x7b93,	// (0x00045b00) cell_vkb_candidate_pane_g3

0x7bae,	// (0x00045b1b) cell_vkb_candidate_pane_g4_ParamLimits

0x7bae,	// (0x00045b1b) cell_vkb_candidate_pane_g4

0x7c7e,	// (0x00045beb) cell_app_pane_cp2_g1_ParamLimits

0x7c7e,	// (0x00045beb) cell_app_pane_cp2_g1

0x7c9c,	// (0x00045c09) cell_app_pane_cp2_g2_ParamLimits

0x7c9c,	// (0x00045c09) cell_app_pane_cp2_g2

0x0001,

0xfbd3,	// (0x0004db40) cell_app_pane_cp2_g_ParamLimits

0xfbd3,	// (0x0004db40) cell_app_pane_cp2_g

0x7ca8,	// (0x00045c15) cell_app_pane_cp2_t1_ParamLimits

0x7ca8,	// (0x00045c15) cell_app_pane_cp2_t1

0x4a45,	// (0x000429b2) grid_highlight_pane_cp1_ParamLimits

0x4a45,	// (0x000429b2) grid_highlight_pane_cp1

0xa108,	// (0x00048075) cell_hwr_candidate_pane_cp1_ParamLimits

0xa108,	// (0x00048075) cell_hwr_candidate_pane_cp1

0xa0bb,	// (0x00048028) fep_hwr_candidate_drop_down_list_pane_g1

0xa127,	// (0x00048094) fep_hwr_candidate_drop_down_list_pane_g2

0xa134,	// (0x000480a1) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd8,	// (0x0004db45) fep_hwr_candidate_drop_down_list_pane_g

0xa141,	// (0x000480ae) fep_hwr_candidate_drop_down_list_scroll_pane

0xa14a,	// (0x000480b7) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xa14a,	// (0x000480b7) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xa157,	// (0x000480c4) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xa157,	// (0x000480c4) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xa164,	// (0x000480d1) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xa164,	// (0x000480d1) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xa171,	// (0x000480de) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xa171,	// (0x000480de) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xa18c,	// (0x000480f9) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xa18c,	// (0x000480f9) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xa1a7,	// (0x00048114) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xa1a7,	// (0x00048114) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xa1c2,	// (0x0004812f) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xa1c2,	// (0x0004812f) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xa1dd,	// (0x0004814a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xa1dd,	// (0x0004814a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdf,	// (0x0004db4c) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdf,	// (0x0004db4c) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7cd4,	// (0x00045c41) cell_vkb_candidate_pane_cp1_ParamLimits

0x7cd4,	// (0x00045c41) cell_vkb_candidate_pane_cp1

0x7912,	// (0x0004587f) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7912,	// (0x0004587f) fep_vkb_candidate_drop_down_list_pane_g1

0x7cba,	// (0x00045c27) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7cba,	// (0x00045c27) fep_vkb_candidate_drop_down_list_pane_g2

0x7cc7,	// (0x00045c34) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7cc7,	// (0x00045c34) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbf0,	// (0x0004db5d) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbf0,	// (0x0004db5d) fep_vkb_candidate_drop_down_list_pane_g

0x7cf4,	// (0x00045c61) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7cf4,	// (0x00045c61) fep_vkb_candidate_drop_down_list_scroll_pane

0x7d01,	// (0x00045c6e) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7d01,	// (0x00045c6e) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7d0e,	// (0x00045c7b) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7d0e,	// (0x00045c7b) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7d1a,	// (0x00045c87) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7d1a,	// (0x00045c87) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7b51,	// (0x00045abe) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7b51,	// (0x00045abe) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7b72,	// (0x00045adf) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7b72,	// (0x00045adf) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7d26,	// (0x00045c93) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7d26,	// (0x00045c93) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7d47,	// (0x00045cb4) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7d47,	// (0x00045cb4) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7d68,	// (0x00045cd5) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7d68,	// (0x00045cd5) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbf7,	// (0x0004db64) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbf7,	// (0x0004db64) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xab3a,	// (0x00048aa7) title_pane_g1_ParamLimits

0xab47,	// (0x00048ab4) title_pane_g2_ParamLimits

0xf592,	// (0x0004d4ff) title_pane_g_ParamLimits

0x4f7e,	// (0x00042eeb) aid_call2_pane

0x4f76,	// (0x00042ee3) aid_call_pane

0x4f86,	// (0x00042ef3) popup_clock_analogue_window_g1

0x4f86,	// (0x00042ef3) popup_clock_analogue_window_g2

0x95b6,	// (0x00047523) popup_clock_analogue_window_g3

0x95bf,	// (0x0004752c) popup_clock_analogue_window_g4

0x42aa,	// (0x00042217) popup_clock_analogue_window_g5

0x0004,

0xf741,	// (0x0004d6ae) popup_clock_analogue_window_g

0x95c7,	// (0x00047534) popup_clock_analogue_window_t1

0x95d5,	// (0x00047542) clock_digital_number_pane_ParamLimits

0x95d5,	// (0x00047542) clock_digital_number_pane

0x95e1,	// (0x0004754e) clock_digital_number_pane_cp02_ParamLimits

0x95e1,	// (0x0004754e) clock_digital_number_pane_cp02

0x95ed,	// (0x0004755a) clock_digital_number_pane_cp03_ParamLimits

0x95ed,	// (0x0004755a) clock_digital_number_pane_cp03

0x95f9,	// (0x00047566) clock_digital_number_pane_cp04_ParamLimits

0x95f9,	// (0x00047566) clock_digital_number_pane_cp04

0x9605,	// (0x00047572) clock_digital_separator_pane_ParamLimits

0x9605,	// (0x00047572) clock_digital_separator_pane

0x9611,	// (0x0004757e) popup_clock_digital_window_t1_ParamLimits

0x9611,	// (0x0004757e) popup_clock_digital_window_t1

0x42aa,	// (0x00042217) clock_digital_number_pane_g1

0x42aa,	// (0x00042217) clock_digital_number_pane_g2

0x0001,

0xf74c,	// (0x0004d6b9) clock_digital_number_pane_g

0x42aa,	// (0x00042217) clock_digital_separator_pane_g1

0x42aa,	// (0x00042217) clock_digital_separator_pane_g2

0x0001,

0xf74c,	// (0x0004d6b9) clock_digital_separator_pane_g

0xbea3,	// (0x00049e10) aid_fill_nsta_ParamLimits

0xbf68,	// (0x00049ed5) indicator_nsta_pane_ParamLimits

0x58aa,	// (0x00043817) popup_clock_analogue_window

0x58aa,	// (0x00043817) popup_clock_digital_window

0x4310,	// (0x0004227d) grid_indicator_nsta_pane_ParamLimits

0x743e,	// (0x000453ab) clock_nsta_pane_t2

0x0001,

0xfaca,	// (0x0004da37) clock_nsta_pane_t

0x957a,	// (0x000474e7) aid_size_max_handle

0x9584,	// (0x000474f1) aid_size_min_handle

0x5473,	// (0x000433e0) editor_scroll_pane

0x7d83,	// (0x00045cf0) ex_editor_pane

0x4b64,	// (0x00042ad1) scroll_pane_cp13

0x49e4,	// (0x00042951) scroll_pane_cp14

0x4fb0,	// (0x00042f1d) scroll_pane_cp36

0xb186,	// (0x000490f3) list_single_graphic_hl_pane_cp2_ParamLimits

0xb186,	// (0x000490f3) list_single_graphic_hl_pane_cp2

0xb968,	// (0x000498d5) list_single_graphic_hl_pane_ParamLimits

0xb968,	// (0x000498d5) list_single_graphic_hl_pane

0xbcb4,	// (0x00049c21) aid_size_min_hl_cp1

0x7d8b,	// (0x00045cf8) list_highlight_pane_cp34_ParamLimits

0x7d8b,	// (0x00045cf8) list_highlight_pane_cp34

0x7d9c,	// (0x00045d09) list_single_graphic_hl_pane_g1_ParamLimits

0x7d9c,	// (0x00045d09) list_single_graphic_hl_pane_g1

0xbcbd,	// (0x00049c2a) list_single_graphic_hl_pane_g2_ParamLimits

0xbcbd,	// (0x00049c2a) list_single_graphic_hl_pane_g2

0xbcbd,	// (0x00049c2a) list_single_graphic_hl_pane_g3_ParamLimits

0xbcbd,	// (0x00049c2a) list_single_graphic_hl_pane_g3

0x53e4,	// (0x00043351) list_single_graphic_hl_pane_g4_ParamLimits

0x53e4,	// (0x00043351) list_single_graphic_hl_pane_g4

0xc3b9,	// (0x0004a326) list_single_graphic_hl_pane_g5_ParamLimits

0xc3b9,	// (0x0004a326) list_single_graphic_hl_pane_g5

0x0004,

0xfc08,	// (0x0004db75) list_single_graphic_hl_pane_g_ParamLimits

0xfc08,	// (0x0004db75) list_single_graphic_hl_pane_g

0xbcc9,	// (0x00049c36) list_single_graphic_hl_pane_t1_ParamLimits

0xbcc9,	// (0x00049c36) list_single_graphic_hl_pane_t1

0x7da9,	// (0x00045d16) aid_size_min_hl_cp2

0x7db2,	// (0x00045d1f) list_highlight_pane_cp34_cp2_ParamLimits

0x7db2,	// (0x00045d1f) list_highlight_pane_cp34_cp2

0x7d9c,	// (0x00045d09) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7d9c,	// (0x00045d09) list_single_graphic_hl_pane_g1_cp2

0x7dbf,	// (0x00045d2c) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7dbf,	// (0x00045d2c) list_single_graphic_hl_pane_g2_cp2

0x7dcb,	// (0x00045d38) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7dcb,	// (0x00045d38) list_single_graphic_hl_pane_g3_cp2

0x693b,	// (0x000448a8) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x693b,	// (0x000448a8) list_single_graphic_hl_pane_g4_cp2

0x7dd9,	// (0x00045d46) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7dd9,	// (0x00045d46) list_single_graphic_hl_pane_g5_cp2

0x98c3,	// (0x00047830) control_pane_g4_ParamLimits

0x98c3,	// (0x00047830) control_pane_g4

0x4b9d,	// (0x00042b0a) bg_popup_sub_pane_cp10_ParamLimits

0x7775,	// (0x000456e2) list_choice_list_pane_ParamLimits

0x7784,	// (0x000456f1) scroll_pane_cp23

0x4443,	// (0x000423b0) bg_popup_preview_window_pane_cp02_ParamLimits

0x7bff,	// (0x00045b6c) list_preview_fixed_pane_ParamLimits

0x7c15,	// (0x00045b82) list_preview_fixed_pane_cp_ParamLimits

0x7c15,	// (0x00045b82) list_preview_fixed_pane_cp

0x7c21,	// (0x00045b8e) popup_preview_fixed_window_g1_ParamLimits

0x7c21,	// (0x00045b8e) popup_preview_fixed_window_g1

0x7c2d,	// (0x00045b9a) popup_preview_fixed_window_g2_ParamLimits

0x7c2d,	// (0x00045b9a) popup_preview_fixed_window_g2

0x0002,

0xfb90,	// (0x0004dafd) popup_preview_fixed_window_g_ParamLimits

0xfb90,	// (0x0004dafd) popup_preview_fixed_window_g

0x94ee,	// (0x0004745b) aid_navi_side_left_pane_ParamLimits

0x9503,	// (0x00047470) aid_navi_side_right_pane_ParamLimits

0x951b,	// (0x00047488) navi_icon_pane_stacon_ParamLimits

0x952f,	// (0x0004749c) navi_navi_pane_stacon_ParamLimits

0x951b,	// (0x00047488) navi_text_pane_stacon_ParamLimits

0x42a0,	// (0x0004220d) main_text_info_pane

0x7e03,	// (0x00045d70) listscroll_text_info_pane

0x7e0b,	// (0x00045d78) list_text_info_pane_ParamLimits

0x7e0b,	// (0x00045d78) list_text_info_pane

0x7e1a,	// (0x00045d87) scroll_pane_cp24_ParamLimits

0x7e1a,	// (0x00045d87) scroll_pane_cp24

0xcd85,	// (0x0004acf2) list_text_info_pane_t1_ParamLimits

0xcd85,	// (0x0004acf2) list_text_info_pane_t1

0xb438,	// (0x000493a5) popup_fast_swap2_window_ParamLimits

0xb438,	// (0x000493a5) popup_fast_swap2_window

0x7e38,	// (0x00045da5) aid_size_cell_fast2

0x42a0,	// (0x0004220d) bg_popup_window_pane_cp17

0x5d56,	// (0x00043cc3) heading_pane_cp2

0x4635,	// (0x000425a2) listscroll_fast2_pane

0x7e42,	// (0x00045daf) grid_fast2_pane

0x7e4c,	// (0x00045db9) listscroll_fast2_pane_g1

0x7e54,	// (0x00045dc1) listscroll_fast2_pane_g2

0x0001,

0xfc13,	// (0x0004db80) listscroll_fast2_pane_g

0x4b64,	// (0x00042ad1) scroll_pane_cp26

0x7e5e,	// (0x00045dcb) cell_fast2_pane_ParamLimits

0x7e5e,	// (0x00045dcb) cell_fast2_pane

0x7e73,	// (0x00045de0) cell_fast2_pane_g1

0x7e7c,	// (0x00045de9) cell_fast2_pane_g2

0x7e85,	// (0x00045df2) cell_fast2_pane_g3

0x0002,

0xfc18,	// (0x0004db85) cell_fast2_pane_g

0x4677,	// (0x000425e4) grid_highlight_pane_cp9

0x468c,	// (0x000425f9) main_eswt_pane_ParamLimits

0x468c,	// (0x000425f9) main_eswt_pane

0x7e2f,	// (0x00045d9c) list_single_text_info_pane

0x7e8d,	// (0x00045dfa) eswt_ctrl_button_pane

0x7e8d,	// (0x00045dfa) eswt_ctrl_canvas_pane

0x7e95,	// (0x00045e02) eswt_ctrl_combo_pane

0x7e8d,	// (0x00045dfa) eswt_ctrl_default_pane

0x7e8d,	// (0x00045dfa) eswt_ctrl_label_pane

0x7e9d,	// (0x00045e0a) eswt_ctrl_wait_pane

0x7ea5,	// (0x00045e12) eswt_shell_pane

0x42a0,	// (0x0004220d) listscroll_eswt_app_pane

0x7ec5,	// (0x00045e32) popup_eswt_tasktip_window_ParamLimits

0x7ec5,	// (0x00045e32) popup_eswt_tasktip_window

0x5aa9,	// (0x00043a16) bg_popup_window_pane_cp18

0x7ed6,	// (0x00045e43) eswt_control_pane_g1_ParamLimits

0x7ed6,	// (0x00045e43) eswt_control_pane_g1

0x7ee3,	// (0x00045e50) eswt_control_pane_g2_ParamLimits

0x7ee3,	// (0x00045e50) eswt_control_pane_g2

0x7ef0,	// (0x00045e5d) eswt_control_pane_g3_ParamLimits

0x7ef0,	// (0x00045e5d) eswt_control_pane_g3

0x7efd,	// (0x00045e6a) eswt_control_pane_g4_ParamLimits

0x7efd,	// (0x00045e6a) eswt_control_pane_g4

0x0003,

0xfc1f,	// (0x0004db8c) eswt_control_pane_g_ParamLimits

0xfc1f,	// (0x0004db8c) eswt_control_pane_g

0x4a45,	// (0x000429b2) bg_button_pane_ParamLimits

0x4a45,	// (0x000429b2) bg_button_pane

0x468c,	// (0x000425f9) common_borders_pane_copy2_ParamLimits

0x468c,	// (0x000425f9) common_borders_pane_copy2

0x7f1e,	// (0x00045e8b) control_button_pane_g1_ParamLimits

0x7f1e,	// (0x00045e8b) control_button_pane_g1

0x7f2a,	// (0x00045e97) control_button_pane_g2_ParamLimits

0x7f2a,	// (0x00045e97) control_button_pane_g2

0x7f36,	// (0x00045ea3) control_button_pane_g3_ParamLimits

0x7f36,	// (0x00045ea3) control_button_pane_g3

0x0002,

0xfc28,	// (0x0004db95) control_button_pane_g_ParamLimits

0xfc28,	// (0x0004db95) control_button_pane_g

0x7f4a,	// (0x00045eb7) control_button_pane_t1

0x7f58,	// (0x00045ec5) control_button_pane_t2

0x0001,

0xfc2f,	// (0x0004db9c) control_button_pane_t

0x59b9,	// (0x00043926) bg_button_pane_g1

0x59c1,	// (0x0004392e) bg_button_pane_g2

0x59c9,	// (0x00043936) bg_button_pane_g3

0x59d1,	// (0x0004393e) bg_button_pane_g4

0x59d9,	// (0x00043946) bg_button_pane_g5

0x59e1,	// (0x0004394e) bg_button_pane_g6

0x59e9,	// (0x00043956) bg_button_pane_g7

0x59f1,	// (0x0004395e) bg_button_pane_g8

0x59f9,	// (0x00043966) bg_button_pane_g9

0x0008,

0xf8a4,	// (0x0004d811) bg_button_pane_g

0x7730,	// (0x0004569d) common_borders_pane_ParamLimits

0x7730,	// (0x0004569d) common_borders_pane

0x7ed6,	// (0x00045e43) eswt_control_pane_g1_copy1_ParamLimits

0x7ed6,	// (0x00045e43) eswt_control_pane_g1_copy1

0x7ee3,	// (0x00045e50) eswt_control_pane_g2_copy1_ParamLimits

0x7ee3,	// (0x00045e50) eswt_control_pane_g2_copy1

0x7ef0,	// (0x00045e5d) eswt_control_pane_g3_copy1_ParamLimits

0x7ef0,	// (0x00045e5d) eswt_control_pane_g3_copy1

0x7efd,	// (0x00045e6a) eswt_control_pane_g4_copy1_ParamLimits

0x7efd,	// (0x00045e6a) eswt_control_pane_g4_copy1

0x776b,	// (0x000456d8) bg_eswt_ctrl_canvas_pane_g1

0x7730,	// (0x0004569d) common_borders_pane_cp2_ParamLimits

0x7730,	// (0x0004569d) common_borders_pane_cp2

0x7730,	// (0x0004569d) common_borders_pane_cp3_ParamLimits

0x7730,	// (0x0004569d) common_borders_pane_cp3

0x7f66,	// (0x00045ed3) separator_horizontal_pane

0x7f6e,	// (0x00045edb) separator_vertical_pane

0x7ed6,	// (0x00045e43) eswt_control_pane_g1_copy2_ParamLimits

0x7ed6,	// (0x00045e43) eswt_control_pane_g1_copy2

0x7ee3,	// (0x00045e50) eswt_control_pane_g2_copy2_ParamLimits

0x7ee3,	// (0x00045e50) eswt_control_pane_g2_copy2

0x7ef0,	// (0x00045e5d) eswt_control_pane_g3_copy2_ParamLimits

0x7ef0,	// (0x00045e5d) eswt_control_pane_g3_copy2

0x7efd,	// (0x00045e6a) eswt_control_pane_g4_copy2_ParamLimits

0x7efd,	// (0x00045e6a) eswt_control_pane_g4_copy2

0x42a0,	// (0x0004220d) common_borders_pane_cp4

0x7f77,	// (0x00045ee4) separator_horizontal_pane_g1

0x7f80,	// (0x00045eed) separator_horizontal_pane_g2

0x7f89,	// (0x00045ef6) separator_horizontal_pane_g3

0x0002,

0xfc34,	// (0x0004dba1) separator_horizontal_pane_g

0x7ed6,	// (0x00045e43) eswt_control_pane_g1_copy3_ParamLimits

0x7ed6,	// (0x00045e43) eswt_control_pane_g1_copy3

0x7ee3,	// (0x00045e50) eswt_control_pane_g2_copy3_ParamLimits

0x7ee3,	// (0x00045e50) eswt_control_pane_g2_copy3

0x7ef0,	// (0x00045e5d) eswt_control_pane_g3_copy3_ParamLimits

0x7ef0,	// (0x00045e5d) eswt_control_pane_g3_copy3

0x7efd,	// (0x00045e6a) eswt_control_pane_g4_copy3_ParamLimits

0x7efd,	// (0x00045e6a) eswt_control_pane_g4_copy3

0x42a0,	// (0x0004220d) common_borders_pane_cp5

0x7f92,	// (0x00045eff) separator_vertical_pane_g1

0x7f9b,	// (0x00045f08) separator_vertical_pane_g2

0x7fa4,	// (0x00045f11) separator_vertical_pane_g3

0x0002,

0xfc3b,	// (0x0004dba8) separator_vertical_pane_g

0x7ed6,	// (0x00045e43) eswt_control_pane_g1_copy4_ParamLimits

0x7ed6,	// (0x00045e43) eswt_control_pane_g1_copy4

0x7ee3,	// (0x00045e50) eswt_control_pane_g2_copy4_ParamLimits

0x7ee3,	// (0x00045e50) eswt_control_pane_g2_copy4

0x7ef0,	// (0x00045e5d) eswt_control_pane_g3_copy4_ParamLimits

0x7ef0,	// (0x00045e5d) eswt_control_pane_g3_copy4

0x7efd,	// (0x00045e6a) eswt_control_pane_g4_copy4_ParamLimits

0x7efd,	// (0x00045e6a) eswt_control_pane_g4_copy4

0xcdb6,	// (0x0004ad23) eswt_ctrl_combo_button_pane

0xcdbe,	// (0x0004ad2b) eswt_ctrl_input_pane

0xcdc6,	// (0x0004ad33) popup_choice_list_window_cp70

0xcdce,	// (0x0004ad3b) eswt_ctrl_input_pane_t1

0x42a0,	// (0x0004220d) input_focus_pane_cp70

0x7730,	// (0x0004569d) bg_button_pane_cp70_ParamLimits

0x7730,	// (0x0004569d) bg_button_pane_cp70

0xcddc,	// (0x0004ad49) eswt_ctrl_combo_button_pane_g1

0x7fad,	// (0x00045f1a) wait_bar_pane_cp70

0x5aa9,	// (0x00043a16) bg_popup_window_pane_cp70_ParamLimits

0x5aa9,	// (0x00043a16) bg_popup_window_pane_cp70

0x7fb5,	// (0x00045f22) popup_eswt_tasktip_window_t1

0x7fcb,	// (0x00045f38) wait_bar_pane_cp71_ParamLimits

0x7fcb,	// (0x00045f38) wait_bar_pane_cp71

0x7fd7,	// (0x00045f44) grid_eswt_app_pane

0x4dc1,	// (0x00042d2e) scroll_pane_cp70

0xcde4,	// (0x0004ad51) cell_eswt_app_pane_ParamLimits

0xcde4,	// (0x0004ad51) cell_eswt_app_pane

0xce14,	// (0x0004ad81) cell_eswt_app_pane_g1_ParamLimits

0xce14,	// (0x0004ad81) cell_eswt_app_pane_g1

0xce43,	// (0x0004adb0) cell_eswt_app_pane_g2_ParamLimits

0xce43,	// (0x0004adb0) cell_eswt_app_pane_g2

0x0001,

0x0099,	// (0x0003e006) cell_eswt_app_pane_g_ParamLimits

0x0099,	// (0x0003e006) cell_eswt_app_pane_g

0xce6c,	// (0x0004add9) cell_eswt_app_pane_t1_ParamLimits

0xce6c,	// (0x0004add9) cell_eswt_app_pane_t1

0x7fe0,	// (0x00045f4d) grid_highlight_pane_cp70_ParamLimits

0x7fe0,	// (0x00045f4d) grid_highlight_pane_cp70

0x5348,	// (0x000432b5) set_content_pane_g1

0x5652,	// (0x000435bf) status_small_volume_pane

0xa1f8,	// (0x00048165) status_small_volume_pane_g1

0xa200,	// (0x0004816d) volume_small2_pane

0xa209,	// (0x00048176) volume_small2_pane_g1

0xa212,	// (0x0004817f) volume_small2_pane_g2

0xa21b,	// (0x00048188) volume_small2_pane_g3

0xa224,	// (0x00048191) volume_small2_pane_g4

0xa22d,	// (0x0004819a) volume_small2_pane_g5

0xa236,	// (0x000481a3) volume_small2_pane_g6

0xa23f,	// (0x000481ac) volume_small2_pane_g7

0xa248,	// (0x000481b5) volume_small2_pane_g8

0xa251,	// (0x000481be) volume_small2_pane_g9

0xa25a,	// (0x000481c7) volume_small2_pane_g10

0x0009,

0xfc42,	// (0x0004dbaf) volume_small2_pane_g

0x7a1f,	// (0x0004598c) fep_vkb_top_text_pane_g1_ParamLimits

0xccf7,	// (0x0004ac64) fep_vkb_top_text_pane_t1_ParamLimits

0x7c39,	// (0x00045ba6) popup_preview_fixed_window_g3_ParamLimits

0x7c39,	// (0x00045ba6) popup_preview_fixed_window_g3

0xbe36,	// (0x00049da3) popup_toolbar_trans_pane

0xc62b,	// (0x0004a598) aid_height_set_list_ParamLimits

0x63cb,	// (0x00044338) aid_size_parent_ParamLimits

0x4b9d,	// (0x00042b0a) list_highlight_pane_cp2_ParamLimits

0x5348,	// (0x000432b5) set_content_pane_g1_ParamLimits

0xc2a0,	// (0x0004a20d) list_single_image_pane_ParamLimits

0xc2a0,	// (0x0004a20d) list_single_image_pane

0x7fec,	// (0x00045f59) aid_size_cell_image_ParamLimits

0x7fec,	// (0x00045f59) aid_size_cell_image

0xce9e,	// (0x0004ae0b) grid_single_image_pane_ParamLimits

0xce9e,	// (0x0004ae0b) grid_single_image_pane

0x5e1f,	// (0x00043d8c) list_single_image_pane_g1_ParamLimits

0x5e1f,	// (0x00043d8c) list_single_image_pane_g1

0x7f0a,	// (0x00045e77) list_single_image_pane_g2_ParamLimits

0x7f0a,	// (0x00045e77) list_single_image_pane_g2

0x0001,

0xfc57,	// (0x0004dbc4) list_single_image_pane_g_ParamLimits

0xfc57,	// (0x0004dbc4) list_single_image_pane_g

0x63b5,	// (0x00044322) list_single_image_pane_t1_ParamLimits

0x63b5,	// (0x00044322) list_single_image_pane_t1

0xceac,	// (0x0004ae19) cell_image_list_pane_ParamLimits

0xceac,	// (0x0004ae19) cell_image_list_pane

0x7ff9,	// (0x00045f66) cell_image_list_pane_g1

0x8002,	// (0x00045f6f) cell_image_list_pane_g2

0x0001,

0xfc5c,	// (0x0004dbc9) cell_image_list_pane_g

0x800b,	// (0x00045f78) aid_size_cell_tb_trans_pane

0x4a45,	// (0x000429b2) bg_tb_trans_pane

0x801d,	// (0x00045f8a) grid_tb_trans_pane

0x59b9,	// (0x00043926) bg_tb_trans_pane_g1

0x59c1,	// (0x0004392e) bg_tb_trans_pane_g2

0x59c9,	// (0x00043936) bg_tb_trans_pane_g3

0x59d1,	// (0x0004393e) bg_tb_trans_pane_g4

0x59d9,	// (0x00043946) bg_tb_trans_pane_g5

0x59f1,	// (0x0004395e) bg_tb_trans_pane_g6

0x59f9,	// (0x00043966) bg_tb_trans_pane_g7

0x59e1,	// (0x0004394e) bg_tb_trans_pane_g8

0x59e9,	// (0x00043956) bg_tb_trans_pane_g9

0x0008,

0xfc61,	// (0x0004dbce) bg_tb_trans_pane_g

0x8031,	// (0x00045f9e) cell_toolbar_trans_pane_ParamLimits

0x8031,	// (0x00045f9e) cell_toolbar_trans_pane

0x776b,	// (0x000456d8) cell_toolbar_trans_pane_g1

0xca39,	// (0x0004a9a6) list_form2_midp_pane_t1

0xca47,	// (0x0004a9b4) list_form2_midp_pane_t2

0x0001,

0xfb03,	// (0x0004da70) list_form2_midp_pane_t

0x74bd,	// (0x0004542a) scroll_pane_cp51_ParamLimits

0x7634,	// (0x000455a1) form2_midp_wait_pane_g1

0x763d,	// (0x000455aa) form2_midp_wait_pane_g2

0x7646,	// (0x000455b3) form2_midp_wait_pane_g3

0x0002,

0xfb18,	// (0x0004da85) form2_midp_wait_pane_g

0x4310,	// (0x0004227d) list_highlight_pane_cp21_ParamLimits

0x766e,	// (0x000455db) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x767d,	// (0x000455ea) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xb94a,	// (0x000498b7) list_single_2graphic_im_pane_ParamLimits

0xb94a,	// (0x000498b7) list_single_2graphic_im_pane

0xcebf,	// (0x0004ae2c) list_single_2graphic_im_pane_g1_ParamLimits

0xcebf,	// (0x0004ae2c) list_single_2graphic_im_pane_g1

0xced0,	// (0x0004ae3d) list_single_2graphic_im_pane_g2_ParamLimits

0xced0,	// (0x0004ae3d) list_single_2graphic_im_pane_g2

0xcedc,	// (0x0004ae49) list_single_2graphic_im_pane_g3_ParamLimits

0xcedc,	// (0x0004ae49) list_single_2graphic_im_pane_g3

0x0003,

0xfc74,	// (0x0004dbe1) list_single_2graphic_im_pane_g_ParamLimits

0xfc74,	// (0x0004dbe1) list_single_2graphic_im_pane_g

0xcef0,	// (0x0004ae5d) list_single_2graphic_im_pane_t1_ParamLimits

0xcef0,	// (0x0004ae5d) list_single_2graphic_im_pane_t1

0x7c45,	// (0x00045bb2) list_single_graphic_2heading_pane_fp_ParamLimits

0x7c45,	// (0x00045bb2) list_single_graphic_2heading_pane_fp

0xbb96,	// (0x00049b03) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xbb96,	// (0x00049b03) list_single_graphic_2heading_pane_fp_g1

0x7c5a,	// (0x00045bc7) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7c5a,	// (0x00045bc7) list_single_graphic_2heading_pane_fp_g2

0x5e1f,	// (0x00043d8c) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5e1f,	// (0x00043d8c) list_single_graphic_2heading_pane_fp_g3

0x7f0a,	// (0x00045e77) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7f0a,	// (0x00045e77) list_single_graphic_2heading_pane_fp_g4

0x7c66,	// (0x00045bd3) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7c66,	// (0x00045bd3) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfba0,	// (0x0004db0d) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfba0,	// (0x0004db0d) list_single_graphic_2heading_pane_fp_g

0xbcdf,	// (0x00049c4c) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xbcdf,	// (0x00049c4c) list_single_graphic_2heading_pane_fp_t1

0xbbce,	// (0x00049b3b) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xbbce,	// (0x00049b3b) list_single_graphic_2heading_pane_fp_t2

0xbcf5,	// (0x00049c62) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xbcf5,	// (0x00049c62) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc7d,	// (0x0004dbea) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc7d,	// (0x0004dbea) list_single_graphic_2heading_pane_fp_t

0x780b,	// (0x00045778) fep_hwr_write_pane_g5_ParamLimits

0x780b,	// (0x00045778) fep_hwr_write_pane_g5

0x7817,	// (0x00045784) fep_hwr_write_pane_g6_ParamLimits

0x7817,	// (0x00045784) fep_hwr_write_pane_g6

0x7ea5,	// (0x00045e12) eswt_shell_pane_ParamLimits

0x5aa9,	// (0x00043a16) bg_popup_window_pane_cp18_ParamLimits

0x6aef,	// (0x00044a5c) heading_pane_cp70

0x7fb5,	// (0x00045f22) popup_eswt_tasktip_window_t1_ParamLimits

0xbee3,	// (0x00049e50) aid_touch_tab_arrow_left

0xbeef,	// (0x00049e5c) aid_touch_tab_arrow_right

0xab58,	// (0x00048ac5) title_pane_g3_ParamLimits

0xab58,	// (0x00048ac5) title_pane_g3

0x4a04,	// (0x00042971) set_value_pane_g1

0xbe36,	// (0x00049da3) popup_toolbar_trans_pane_ParamLimits

0x800b,	// (0x00045f78) aid_size_cell_tb_trans_pane_ParamLimits

0x4a45,	// (0x000429b2) bg_tb_trans_pane_ParamLimits

0x801d,	// (0x00045f8a) grid_tb_trans_pane_ParamLimits

0x4443,	// (0x000423b0) cont_note_pane_ParamLimits

0x4443,	// (0x000423b0) cont_note_pane

0x468c,	// (0x000425f9) cont_snote2_single_text_pane_ParamLimits

0x468c,	// (0x000425f9) cont_snote2_single_text_pane

0x468c,	// (0x000425f9) cont_snote2_single_graphic_pane_ParamLimits

0x468c,	// (0x000425f9) cont_snote2_single_graphic_pane

0x5f4c,	// (0x00043eb9) cont_note_wait_pane_ParamLimits

0x5f4c,	// (0x00043eb9) cont_note_wait_pane

0x5f4c,	// (0x00043eb9) cont_note_image_pane_ParamLimits

0x5f4c,	// (0x00043eb9) cont_note_image_pane

0xcf21,	// (0x0004ae8e) popup_note2_window_g1_ParamLimits

0xcf21,	// (0x0004ae8e) popup_note2_window_g1

0xcf52,	// (0x0004aebf) popup_note2_window_t1_ParamLimits

0xcf52,	// (0x0004aebf) popup_note2_window_t1

0xcf97,	// (0x0004af04) popup_note2_window_t2_ParamLimits

0xcf97,	// (0x0004af04) popup_note2_window_t2

0xcfdc,	// (0x0004af49) popup_note2_window_t3_ParamLimits

0xcfdc,	// (0x0004af49) popup_note2_window_t3

0xd021,	// (0x0004af8e) popup_note2_window_t4_ParamLimits

0xd021,	// (0x0004af8e) popup_note2_window_t4

0x44c7,	// (0x00042434) popup_note2_window_t5_ParamLimits

0x44c7,	// (0x00042434) popup_note2_window_t5

0x0004,

0xfc84,	// (0x0004dbf1) popup_note2_window_t_ParamLimits

0xfc84,	// (0x0004dbf1) popup_note2_window_t

0xd050,	// (0x0004afbd) popup_note2_image_window_g1_ParamLimits

0xd050,	// (0x0004afbd) popup_note2_image_window_g1

0xd05c,	// (0x0004afc9) popup_note2_image_window_g2_ParamLimits

0xd05c,	// (0x0004afc9) popup_note2_image_window_g2

0x0001,

0x00f0,	// (0x0003e05d) popup_note2_image_window_g_ParamLimits

0x00f0,	// (0x0003e05d) popup_note2_image_window_g

0xd06e,	// (0x0004afdb) popup_note2_image_window_t1_ParamLimits

0xd06e,	// (0x0004afdb) popup_note2_image_window_t1

0xd086,	// (0x0004aff3) popup_note2_image_window_t2_ParamLimits

0xd086,	// (0x0004aff3) popup_note2_image_window_t2

0xd09e,	// (0x0004b00b) popup_note2_image_window_t3_ParamLimits

0xd09e,	// (0x0004b00b) popup_note2_image_window_t3

0x0002,

0x00f5,	// (0x0003e062) popup_note2_image_window_t_ParamLimits

0x00f5,	// (0x0003e062) popup_note2_image_window_t

0x5f5a,	// (0x00043ec7) popup_note2_wait_window_g1_ParamLimits

0x5f5a,	// (0x00043ec7) popup_note2_wait_window_g1

0xd0ba,	// (0x0004b027) popup_note2_wait_window_g2_ParamLimits

0xd0ba,	// (0x0004b027) popup_note2_wait_window_g2

0x5f72,	// (0x00043edf) popup_note2_wait_window_g3_ParamLimits

0x5f72,	// (0x00043edf) popup_note2_wait_window_g3

0x0002,

0xfc8f,	// (0x0004dbfc) popup_note2_wait_window_g_ParamLimits

0xfc8f,	// (0x0004dbfc) popup_note2_wait_window_g

0xd0c6,	// (0x0004b033) popup_note2_wait_window_t1_ParamLimits

0xd0c6,	// (0x0004b033) popup_note2_wait_window_t1

0xd0e4,	// (0x0004b051) popup_note2_wait_window_t2_ParamLimits

0xd0e4,	// (0x0004b051) popup_note2_wait_window_t2

0xd102,	// (0x0004b06f) popup_note2_wait_window_t3_ParamLimits

0xd102,	// (0x0004b06f) popup_note2_wait_window_t3

0xd114,	// (0x0004b081) popup_note2_wait_window_t4_ParamLimits

0xd114,	// (0x0004b081) popup_note2_wait_window_t4

0x0003,

0x0103,	// (0x0003e070) popup_note2_wait_window_t_ParamLimits

0x0103,	// (0x0003e070) popup_note2_wait_window_t

0xd126,	// (0x0004b093) wait_bar2_pane_ParamLimits

0xd126,	// (0x0004b093) wait_bar2_pane

0xd13e,	// (0x0004b0ab) popup_snote2_single_text_window_g1_ParamLimits

0xd13e,	// (0x0004b0ab) popup_snote2_single_text_window_g1

0xd166,	// (0x0004b0d3) popup_snote2_single_text_window_t1_ParamLimits

0xd166,	// (0x0004b0d3) popup_snote2_single_text_window_t1

0xd1b2,	// (0x0004b11f) popup_snote2_single_text_window_t2_ParamLimits

0xd1b2,	// (0x0004b11f) popup_snote2_single_text_window_t2

0xd1fe,	// (0x0004b16b) popup_snote2_single_text_window_t3_ParamLimits

0xd1fe,	// (0x0004b16b) popup_snote2_single_text_window_t3

0xd23f,	// (0x0004b1ac) popup_snote2_single_text_window_t4_ParamLimits

0xd23f,	// (0x0004b1ac) popup_snote2_single_text_window_t4

0xd275,	// (0x0004b1e2) popup_snote2_single_text_window_t5_ParamLimits

0xd275,	// (0x0004b1e2) popup_snote2_single_text_window_t5

0x0004,

0x010c,	// (0x0003e079) popup_snote2_single_text_window_t_ParamLimits

0x010c,	// (0x0003e079) popup_snote2_single_text_window_t

0xd2a0,	// (0x0004b20d) popup_snote2_single_graphic_window_g1_ParamLimits

0xd2a0,	// (0x0004b20d) popup_snote2_single_graphic_window_g1

0xd2c8,	// (0x0004b235) popup_snote2_single_graphic_window_g2_ParamLimits

0xd2c8,	// (0x0004b235) popup_snote2_single_graphic_window_g2

0x0001,

0x0117,	// (0x0003e084) popup_snote2_single_graphic_window_g_ParamLimits

0x0117,	// (0x0003e084) popup_snote2_single_graphic_window_g

0xd2f0,	// (0x0004b25d) popup_snote2_single_graphic_window_t1_ParamLimits

0xd2f0,	// (0x0004b25d) popup_snote2_single_graphic_window_t1

0xd33c,	// (0x0004b2a9) popup_snote2_single_graphic_window_t2_ParamLimits

0xd33c,	// (0x0004b2a9) popup_snote2_single_graphic_window_t2

0xd1fe,	// (0x0004b16b) popup_snote2_single_graphic_window_t3_ParamLimits

0xd1fe,	// (0x0004b16b) popup_snote2_single_graphic_window_t3

0xd23f,	// (0x0004b1ac) popup_snote2_single_graphic_window_t4_ParamLimits

0xd23f,	// (0x0004b1ac) popup_snote2_single_graphic_window_t4

0xd275,	// (0x0004b1e2) popup_snote2_single_graphic_window_t5_ParamLimits

0xd275,	// (0x0004b1e2) popup_snote2_single_graphic_window_t5

0x0004,

0x011c,	// (0x0003e089) popup_snote2_single_graphic_window_t_ParamLimits

0x011c,	// (0x0003e089) popup_snote2_single_graphic_window_t

0x7473,	// (0x000453e0) clock_nsta_pane_cp2_t1

0x7473,	// (0x000453e0) clock_nsta_pane_cp2_t2

0x0001,

0xfad9,	// (0x0004da46) clock_nsta_pane_cp2_t

0xaec7,	// (0x00048e34) form_field_data_wide_pane_g1_ParamLimits

0x4a5f,	// (0x000429cc) form_field_data_wide_pane_g2_ParamLimits

0x4a5f,	// (0x000429cc) form_field_data_wide_pane_g2

0x4a6b,	// (0x000429d8) form_field_data_wide_pane_g3_ParamLimits

0x4a6b,	// (0x000429d8) form_field_data_wide_pane_g3

0x0002,

0xf6c4,	// (0x0004d631) form_field_data_wide_pane_g_ParamLimits

0xf6c4,	// (0x0004d631) form_field_data_wide_pane_g

0xc902,	// (0x0004a86f) grid_touch_3_pane_ParamLimits

0xc902,	// (0x0004a86f) grid_touch_3_pane

0xd388,	// (0x0004b2f5) cell_touch_3_pane_ParamLimits

0xd388,	// (0x0004b2f5) cell_touch_3_pane

0x776b,	// (0x000456d8) cell_touch_3_pane_g1

0x776b,	// (0x000456d8) cell_touch_3_pane_g2

0x0001,

0xfb5e,	// (0x0004dacb) cell_touch_3_pane_g

0x44f9,	// (0x00042466) cont_query_data_pane

0x4501,	// (0x0004246e) cont_query_data_pane_cp1

0xd3b6,	// (0x0004b323) button_value_adjust_pane_cp7

0xd3be,	// (0x0004b32b) query_popup_pane_cp3

0x4fe2,	// (0x00042f4f) bg_popup_sub_pane_cp22_ParamLimits

0x9630,	// (0x0004759d) navi_navi_volume_pane_cp2

0x964b,	// (0x000475b8) popup_side_volume_key_window_g2

0x965a,	// (0x000475c7) popup_side_volume_key_window_g3

0x0002,

0xf756,	// (0x0004d6c3) popup_side_volume_key_window_g

0x9677,	// (0x000475e4) popup_side_volume_key_window_t2

0x0001,

0xf75d,	// (0x0004d6ca) popup_side_volume_key_window_t

0x5212,	// (0x0004317f) popup_side_volume_key_window_ParamLimits

0x901d,	// (0x00046f8a) list_double_graphic_pane_g4_ParamLimits

0x901d,	// (0x00046f8a) list_double_graphic_pane_g4

0xc281,	// (0x0004a1ee) list_single_2heading_msg_pane_ParamLimits

0xc281,	// (0x0004a1ee) list_single_2heading_msg_pane

0xc3cd,	// (0x0004a33a) list_single_2heading_msg_pane_g1_ParamLimits

0xc3cd,	// (0x0004a33a) list_single_2heading_msg_pane_g1

0x53ac,	// (0x00043319) list_single_2heading_msg_pane_g2_ParamLimits

0x53ac,	// (0x00043319) list_single_2heading_msg_pane_g2

0xc3d9,	// (0x0004a346) list_single_2heading_msg_pane_g3_ParamLimits

0xc3d9,	// (0x0004a346) list_single_2heading_msg_pane_g3

0xc3e5,	// (0x0004a352) list_single_2heading_msg_pane_g4_ParamLimits

0xc3e5,	// (0x0004a352) list_single_2heading_msg_pane_g4

0x0003,

0xfc96,	// (0x0004dc03) list_single_2heading_msg_pane_g_ParamLimits

0xfc96,	// (0x0004dc03) list_single_2heading_msg_pane_g

0xbd15,	// (0x00049c82) list_single_2heading_msg_pane_t1_ParamLimits

0xbd15,	// (0x00049c82) list_single_2heading_msg_pane_t1

0xbd3d,	// (0x00049caa) list_single_2heading_msg_pane_t2_ParamLimits

0xbd3d,	// (0x00049caa) list_single_2heading_msg_pane_t2

0xbd71,	// (0x00049cde) list_single_2heading_msg_pane_t3_ParamLimits

0xbd71,	// (0x00049cde) list_single_2heading_msg_pane_t3

0xbdaa,	// (0x00049d17) list_single_2heading_msg_pane_t4_ParamLimits

0xbdaa,	// (0x00049d17) list_single_2heading_msg_pane_t4

0x0003,

0xfc9f,	// (0x0004dc0c) list_single_2heading_msg_pane_t_ParamLimits

0xfc9f,	// (0x0004dc0c) list_single_2heading_msg_pane_t

0x42be,	// (0x0004222b) title_pane_g4_ParamLimits

0x42be,	// (0x0004222b) title_pane_g4

0x943e,	// (0x000473ab) title_pane_stacon_g3_ParamLimits

0x943e,	// (0x000473ab) title_pane_stacon_g3

0x8057,	// (0x00045fc4) list_single_2graphic_im_pane_g4_ParamLimits

0x8057,	// (0x00045fc4) list_single_2graphic_im_pane_g4

0x6907,	// (0x00044874) popup_side_volume_key_window_cp

0x6de0,	// (0x00044d4d) main_idle_act2_pane_t1

0x99fc,	// (0x00047969) toolbar_button_pane_g10

0xae1f,	// (0x00048d8c) popup_toolbar_window_cp1

0x7464,	// (0x000453d1) clock_nsta_pane_cp_t1

0x7464,	// (0x000453d1) clock_nsta_pane_cp_t2

0x0001,

0xfad4,	// (0x0004da41) clock_nsta_pane_cp_t

0x9630,	// (0x0004759d) navi_navi_volume_pane_cp2_ParamLimits

0x963f,	// (0x000475ac) popup_side_volume_key_window_g1_ParamLimits

0x964b,	// (0x000475b8) popup_side_volume_key_window_g2_ParamLimits

0x965a,	// (0x000475c7) popup_side_volume_key_window_g3_ParamLimits

0xf756,	// (0x0004d6c3) popup_side_volume_key_window_g_ParamLimits

0x9e64,	// (0x00047dd1) fep_hwr_aid_pane

0x9f0b,	// (0x00047e78) bg_fep_hwr_top_pane_g4_ParamLimits

0x77ed,	// (0x0004575a) fep_hwr_top_pane_g1_ParamLimits

0x77db,	// (0x00045748) fep_hwr_top_pane_g2_ParamLimits

0x9f2b,	// (0x00047e98) fep_hwr_top_pane_g3_ParamLimits

0xfb29,	// (0x0004da96) fep_hwr_top_pane_g_ParamLimits

0x9f40,	// (0x00047ead) fep_hwr_top_text_pane_ParamLimits

0x66d3,	// (0x00044640) aid_touch_tab_arrow_arrow_2

0x66ca,	// (0x00044637) aid_touch_tab_arrow_left_2

0x9e78,	// (0x00047de5) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x9eaf,	// (0x00047e1c) fep_hwr_prediction_pane

0x78da,	// (0x00045847) fep_vkb_prediction_pane

0xccd4,	// (0x0004ac41) fep_vkb_side_pane_g3_ParamLimits

0xccd4,	// (0x0004ac41) fep_vkb_side_pane_g3

0xa0bb,	// (0x00048028) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xa127,	// (0x00048094) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xa134,	// (0x000480a1) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd8,	// (0x0004db45) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xa263,	// (0x000481d0) fep_hwr_prediction_pane_g1

0xa26d,	// (0x000481da) fep_hwr_prediction_pane_g2

0xa275,	// (0x000481e2) fep_hwr_prediction_pane_g3

0xa27d,	// (0x000481ea) fep_hwr_prediction_pane_g4

0x0003,

0xfca8,	// (0x0004dc15) fep_hwr_prediction_pane_g

0xd3e3,	// (0x0004b350) fep_vkb_prediction_pane_g1

0xd3ed,	// (0x0004b35a) fep_vkb_prediction_pane_g2

0xd3f5,	// (0x0004b362) fep_vkb_prediction_pane_g3

0xd3fd,	// (0x0004b36a) fep_vkb_prediction_pane_g4

0x0003,

0x0142,	// (0x0003e0af) fep_vkb_prediction_pane_g

0x9ce4,	// (0x00047c51) slider_set_pane_g3

0x9cf8,	// (0x00047c65) slider_set_pane_g4

0x9d10,	// (0x00047c7d) slider_set_pane_g5

0x9ce4,	// (0x00047c51) slider_set_pane_g6

0x9d26,	// (0x00047c93) slider_set_pane_g7

0x6b7a,	// (0x00044ae7) slider_form_pane_g3

0x6b83,	// (0x00044af0) slider_form_pane_g4

0x6b8b,	// (0x00044af8) slider_form_pane_g5

0x6b7a,	// (0x00044ae7) slider_form_pane_g6

0xc786,	// (0x0004a6f3) slider_form_pane_g7

0x7032,	// (0x00044f9f) slider_set_pane_vc_g3

0x703b,	// (0x00044fa8) slider_set_pane_vc_g4

0x7044,	// (0x00044fb1) slider_set_pane_vc_g5

0x7032,	// (0x00044f9f) slider_set_pane_vc_g6

0x704d,	// (0x00044fba) slider_set_pane_vc_g7

0x7032,	// (0x00044f9f) slider_form_pane_vc_g1

0x703b,	// (0x00044fa8) slider_form_pane_vc_g2

0x7044,	// (0x00044fb1) slider_form_pane_vc_g3

0x7032,	// (0x00044f9f) slider_form_pane_vc_g4

0x7200,	// (0x0004516d) slider_form_pane_vc_g5

0x0004,

0xfaba,	// (0x0004da27) slider_form_pane_vc_g

0x42a0,	// (0x0004220d) main_idle_act3_pane

0xd405,	// (0x0004b372) ai3_links_pane

0xd40e,	// (0x0004b37b) popup_ai3_data_window_ParamLimits

0xd40e,	// (0x0004b37b) popup_ai3_data_window

0x42a0,	// (0x0004220d) grid_ai3_links_pane

0xd428,	// (0x0004b395) cell_ai3_links_pane_ParamLimits

0xd428,	// (0x0004b395) cell_ai3_links_pane

0xd440,	// (0x0004b3ad) bg_popup_sub_pane_cp11

0xd44d,	// (0x0004b3ba) cell_ai3_links_pane_g1

0x42a0,	// (0x0004220d) bg_popup_sub_pane_cp12

0xd472,	// (0x0004b3df) heading_ai3_data_pane

0xd47a,	// (0x0004b3e7) list_ai3_gene_pane

0xd486,	// (0x0004b3f3) popup_ai3_data_window_g1

0xd48e,	// (0x0004b3fb) heading_ai3_data_pane_g1

0xd496,	// (0x0004b403) heading_ai3_data_pane_t1

0xd4a4,	// (0x0004b411) list_double_ai3_gene_pane_ParamLimits

0xd4a4,	// (0x0004b411) list_double_ai3_gene_pane

0xd4b1,	// (0x0004b41e) list_single_ai3_gene_pane_ParamLimits

0xd4b1,	// (0x0004b41e) list_single_ai3_gene_pane

0x7730,	// (0x0004569d) list_highlight_pane_cp7_ParamLimits

0x7730,	// (0x0004569d) list_highlight_pane_cp7

0xd4be,	// (0x0004b42b) list_single_a13_gene_pane_t1_ParamLimits

0xd4be,	// (0x0004b42b) list_single_a13_gene_pane_t1

0xd4d5,	// (0x0004b442) list_single_ai3_gene_pane_g1

0xd4de,	// (0x0004b44b) list_single_ai3_gene_pane_g2

0x0001,

0x014b,	// (0x0003e0b8) list_single_ai3_gene_pane_g

0xd4e6,	// (0x0004b453) list_double_ai3_gene_pane_g1_ParamLimits

0xd4e6,	// (0x0004b453) list_double_ai3_gene_pane_g1

0xd4f2,	// (0x0004b45f) list_double_ai3_gene_pane_t1_ParamLimits

0xd4f2,	// (0x0004b45f) list_double_ai3_gene_pane_t1

0xd50e,	// (0x0004b47b) list_double_ai3_gene_pane_t2_ParamLimits

0xd50e,	// (0x0004b47b) list_double_ai3_gene_pane_t2

0xd524,	// (0x0004b491) list_double_ai3_gene_pane_t3_ParamLimits

0xd524,	// (0x0004b491) list_double_ai3_gene_pane_t3

0x0002,

0x0150,	// (0x0003e0bd) list_double_ai3_gene_pane_t_ParamLimits

0x0150,	// (0x0003e0bd) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xbd0b,	// (0x00049c78) aid_size_min_col_2

0xd3cf,	// (0x0004b33c) aid_size_min_msg_ParamLimits

0xd3cf,	// (0x0004b33c) aid_size_min_msg

0xcce8,	// (0x0004ac55) fep_vkb_top_text_pane_g2_ParamLimits

0xcce8,	// (0x0004ac55) fep_vkb_top_text_pane_g2

0x0001,

0xfb59,	// (0x0004dac6) fep_vkb_top_text_pane_g_ParamLimits

0xfb59,	// (0x0004dac6) fep_vkb_top_text_pane_g

0x42a0,	// (0x0004220d) main_hc_apps_shell_pane

0xd541,	// (0x0004b4ae) grid_hc_apps_pane_ParamLimits

0xd541,	// (0x0004b4ae) grid_hc_apps_pane

0xd550,	// (0x0004b4bd) list_hc_apps_pane

0xd558,	// (0x0004b4c5) scroll_pane_cp37_ParamLimits

0xd558,	// (0x0004b4c5) scroll_pane_cp37

0xd564,	// (0x0004b4d1) cell_hc_apps_pane_ParamLimits

0xd564,	// (0x0004b4d1) cell_hc_apps_pane

0xd612,	// (0x0004b57f) cell_hc_apps_pane_g1_ParamLimits

0xd612,	// (0x0004b57f) cell_hc_apps_pane_g1

0xd643,	// (0x0004b5b0) cell_hc_apps_pane_g2_ParamLimits

0xd643,	// (0x0004b5b0) cell_hc_apps_pane_g2

0xd65f,	// (0x0004b5cc) cell_hc_apps_pane_g3_ParamLimits

0xd65f,	// (0x0004b5cc) cell_hc_apps_pane_g3

0x0002,

0x0157,	// (0x0003e0c4) cell_hc_apps_pane_g_ParamLimits

0x0157,	// (0x0003e0c4) cell_hc_apps_pane_g

0xd681,	// (0x0004b5ee) cell_hc_apps_pane_t1_ParamLimits

0xd681,	// (0x0004b5ee) cell_hc_apps_pane_t1

0x4443,	// (0x000423b0) grid_highlight_pane_cp10_ParamLimits

0x4443,	// (0x000423b0) grid_highlight_pane_cp10

0xd6c1,	// (0x0004b62e) list_single_hc_apps_pane_ParamLimits

0xd6c1,	// (0x0004b62e) list_single_hc_apps_pane

0xd71d,	// (0x0004b68a) list_single_hc_apps_pane_g1

0xc3fd,	// (0x0004a36a) list_single_hc_apps_pane_g2

0x0001,

0xfcb1,	// (0x0004dc1e) list_single_hc_apps_pane_g

0xc416,	// (0x0004a383) list_single_hc_apps_pane_g2_copy1

0xbdcf,	// (0x00049d3c) list_single_hc_apps_pane_t1

0x4310,	// (0x0004227d) bg_set_opt_pane_cp_ParamLimits

0x8de7,	// (0x00046d54) setting_slider_pane_t1_ParamLimits

0x8e00,	// (0x00046d6d) setting_slider_pane_t2_ParamLimits

0x8e1a,	// (0x00046d87) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0004d50f) setting_slider_pane_t_ParamLimits

0x8e32,	// (0x00046d9f) slider_set_pane_ParamLimits

0x98d8,	// (0x00047845) control_pane_g5_ParamLimits

0x98d8,	// (0x00047845) control_pane_g5

0x6b36,	// (0x00044aa3) slider_set_pane_g1_ParamLimits

0x9cd8,	// (0x00047c45) slider_set_pane_g2_ParamLimits

0x9ce4,	// (0x00047c51) slider_set_pane_g3_ParamLimits

0x9cf8,	// (0x00047c65) slider_set_pane_g4_ParamLimits

0x9d10,	// (0x00047c7d) slider_set_pane_g5_ParamLimits

0x9ce4,	// (0x00047c51) slider_set_pane_g6_ParamLimits

0x9d26,	// (0x00047c93) slider_set_pane_g7_ParamLimits

0xf9a2,	// (0x0004d90f) slider_set_pane_g_ParamLimits

0x52f3,	// (0x00043260) navi_icon_text_pane_ParamLimits

0xbeb9,	// (0x00049e26) aid_fill_nsta_2_ParamLimits

0xbee3,	// (0x00049e50) aid_touch_tab_arrow_left_ParamLimits

0xbeef,	// (0x00049e5c) aid_touch_tab_arrow_right_ParamLimits

0xbf5b,	// (0x00049ec8) clock_nsta_pane_ParamLimits

0xc565,	// (0x0004a4d2) navi_icon_pane_g1_ParamLimits

0xc574,	// (0x0004a4e1) navi_text_pane_t1_ParamLimits

0xca15,	// (0x0004a982) navi_icon_text_pane_g1_ParamLimits

0xca24,	// (0x0004a991) navi_icon_text_pane_t1_ParamLimits

0xd71d,	// (0x0004b68a) list_single_hc_apps_pane_g1_ParamLimits

0xc3fd,	// (0x0004a36a) list_single_hc_apps_pane_g2_ParamLimits

0xfcb1,	// (0x0004dc1e) list_single_hc_apps_pane_g_ParamLimits

0xc416,	// (0x0004a383) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbdcf,	// (0x00049d3c) list_single_hc_apps_pane_t1_ParamLimits

0x8cfb,	// (0x00046c68) popup_toolbar2_fixed_window_ParamLimits

0x8cfb,	// (0x00046c68) popup_toolbar2_fixed_window

0xbe2c,	// (0x00049d99) popup_toolbar2_float_window

0x42a0,	// (0x0004220d) bg_popup_sub_pane_cp27

0xd736,	// (0x0004b6a3) grid_toolbar2_float_pane

0x42a0,	// (0x0004220d) bg_popup_sub_pane_cp26

0xd736,	// (0x0004b6a3) grid_toolbar2_fixed_pane

0xd73e,	// (0x0004b6ab) cell_toolbar2_fixed_pane_ParamLimits

0xd73e,	// (0x0004b6ab) cell_toolbar2_fixed_pane

0xd74e,	// (0x0004b6bb) cell_toolbar2_fixed_pane_g1

0xd757,	// (0x0004b6c4) toolbar2_fixed_button_pane

0x59b9,	// (0x00043926) toolbar2_fixed_button_pane_g1

0x59c1,	// (0x0004392e) toolbar2_fixed_button_pane_g2

0x59c9,	// (0x00043936) toolbar2_fixed_button_pane_g3

0x59d1,	// (0x0004393e) toolbar2_fixed_button_pane_g4

0x59d9,	// (0x00043946) toolbar2_fixed_button_pane_g5

0x59e1,	// (0x0004394e) toolbar2_fixed_button_pane_g6

0x59e9,	// (0x00043956) toolbar2_fixed_button_pane_g7

0x59f1,	// (0x0004395e) toolbar2_fixed_button_pane_g8

0x59f9,	// (0x00043966) toolbar2_fixed_button_pane_g9

0x0008,

0xf8a4,	// (0x0004d811) toolbar2_fixed_button_pane_g

0xd75f,	// (0x0004b6cc) cell_toolbar2_float_pane_ParamLimits

0xd75f,	// (0x0004b6cc) cell_toolbar2_float_pane

0xd770,	// (0x0004b6dd) cell_toolbar2_float_pane_g1

0xd757,	// (0x0004b6c4) toolbar2_fixed_button_pane_cp

0xcbc2,	// (0x0004ab2f) fep_vkb_accented_list_pane_ParamLimits

0xcbc2,	// (0x0004ab2f) fep_vkb_accented_list_pane

0xa09b,	// (0x00048008) bg_popup_fep_shadow_pane_g9

0x5473,	// (0x000433e0) bg_popup_fep_shadow_pane_cp3

0x4b4b,	// (0x00042ab8) list_accented_list_pane

0xd779,	// (0x0004b6e6) list_single_accented_list_pane_ParamLimits

0xd779,	// (0x0004b6e6) list_single_accented_list_pane

0x5473,	// (0x000433e0) list_highlight_pane_cp10

0xd78a,	// (0x0004b6f7) list_single_accented_list_pane_t1

0xb78e,	// (0x000496fb) popup_slider_window_ParamLimits

0xb78e,	// (0x000496fb) popup_slider_window

0xd3c6,	// (0x0004b333) aid_indentation_list_msg

0xd844,	// (0x0004b7b1) bg_popup_window_pane_cp19

0xd8ae,	// (0x0004b81b) popup_slider_window_g1

0xd8ca,	// (0x0004b837) popup_slider_window_g2

0xd8e6,	// (0x0004b853) popup_slider_window_g3

0x0005,

0x0163,	// (0x0003e0d0) popup_slider_window_g

0xd942,	// (0x0004b8af) popup_slider_window_t1

0xd9b6,	// (0x0004b923) small_volume_slider_vertical_pane

0x776b,	// (0x000456d8) small_volume_slider_vertical_pane_g1

0x776b,	// (0x000456d8) small_volume_slider_vertical_pane_g2

0xd9d2,	// (0x0004b93f) small_volume_slider_vertical_pane_g3

0x0002,

0xfcb6,	// (0x0004dc23) small_volume_slider_vertical_pane_g

0x8ab3,	// (0x00046a20) area_side_right_pane_ParamLimits

0x8ab3,	// (0x00046a20) area_side_right_pane

0xa285,	// (0x000481f2) aid_size_side_button_ParamLimits

0xa285,	// (0x000481f2) aid_size_side_button

0xa299,	// (0x00048206) grid_sctrl_middle_pane_ParamLimits

0xa299,	// (0x00048206) grid_sctrl_middle_pane

0xa2b9,	// (0x00048226) sctrl_sk_bottom_pane

0xa2ca,	// (0x00048237) sctrl_sk_top_pane

0xa2dc,	// (0x00048249) aid_touch_sctrl_top

0xa2e9,	// (0x00048256) bg_sctrl_sk_pane_ParamLimits

0xa2e9,	// (0x00048256) bg_sctrl_sk_pane

0xa2f7,	// (0x00048264) sctrl_sk_top_pane_g1

0xa304,	// (0x00048271) sctrl_sk_top_pane_t1

0xa2dc,	// (0x00048249) aid_touch_sctrl_bottom

0xa2e9,	// (0x00048256) bg_sctrl_sk_pane_cp_ParamLimits

0xa2e9,	// (0x00048256) bg_sctrl_sk_pane_cp

0xa31f,	// (0x0004828c) sctrl_sk_bottom_pane_g1

0xa304,	// (0x00048271) sctrl_sk_bottom_pane_t1

0xa328,	// (0x00048295) cell_sctrl_middle_pane_ParamLimits

0xa328,	// (0x00048295) cell_sctrl_middle_pane

0xa343,	// (0x000482b0) aid_touch_sctrl_middle_ParamLimits

0xa343,	// (0x000482b0) aid_touch_sctrl_middle

0xa355,	// (0x000482c2) bg_sctrl_middle_pane_ParamLimits

0xa355,	// (0x000482c2) bg_sctrl_middle_pane

0xa0bb,	// (0x00048028) cell_sctrl_middle_pane_g1_ParamLimits

0xa0bb,	// (0x00048028) cell_sctrl_middle_pane_g1

0xa363,	// (0x000482d0) cell_sctrl_middle_pane_g2_ParamLimits

0xa363,	// (0x000482d0) cell_sctrl_middle_pane_g2

0x0001,

0xfcc2,	// (0x0004dc2f) cell_sctrl_middle_pane_g_ParamLimits

0xfcc2,	// (0x0004dc2f) cell_sctrl_middle_pane_g

0x59b9,	// (0x00043926) bg_sctrl_middle_pane_g1

0x59c9,	// (0x00043936) bg_sctrl_middle_pane_g2

0x59c1,	// (0x0004392e) bg_sctrl_middle_pane_g3

0x59d9,	// (0x00043946) bg_sctrl_middle_pane_g4

0x59d1,	// (0x0004393e) bg_sctrl_middle_pane_g5

0x59e1,	// (0x0004394e) bg_sctrl_middle_pane_g6

0x59e9,	// (0x00043956) bg_sctrl_middle_pane_g7

0x59f9,	// (0x00043966) bg_sctrl_middle_pane_g8

0x0007,

0xfcc7,	// (0x0004dc34) bg_sctrl_middle_pane_g

0x59f1,	// (0x0004395e) bg_sctrl_middle_pane_g8_copy1

0x59b9,	// (0x00043926) bg_sctrl_sk_pane_g1

0x59c1,	// (0x0004392e) bg_sctrl_sk_pane_g2

0x59c9,	// (0x00043936) bg_sctrl_sk_pane_g3

0x0008,

0xf8a4,	// (0x0004d811) bg_sctrl_sk_pane_g

0x497e,	// (0x000428eb) aid_size_touch_scroll_bar

0x59d1,	// (0x0004393e) bg_sctrl_sk_pane_g4

0x59d9,	// (0x00043946) bg_sctrl_sk_pane_g5

0x59e1,	// (0x0004394e) bg_sctrl_sk_pane_g6

0x59e9,	// (0x00043956) bg_sctrl_sk_pane_g7

0x59f1,	// (0x0004395e) bg_sctrl_sk_pane_g8

0x59f9,	// (0x00043966) bg_sctrl_sk_pane_g9

0x56ef,	// (0x0004365c) popup_fep_china_hwr2_fs_candidate_window

0xb496,	// (0x00049403) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb496,	// (0x00049403) popup_fep_china_hwr2_fs_control_window

0xa0bb,	// (0x00048028) sctrl_sk_top_pane_g2

0x0001,

0xfcbd,	// (0x0004dc2a) sctrl_sk_top_pane_g

0xd9db,	// (0x0004b948) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9db,	// (0x0004b948) aid_fep_china_hwr2_fs_cell

0xd9ed,	// (0x0004b95a) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9ed,	// (0x0004b95a) bg_popup_fep_shadow_pane_cp4

0xda04,	// (0x0004b971) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xda04,	// (0x0004b971) bg_popup_fep_shadow_pane_cp5

0xda16,	// (0x0004b983) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda16,	// (0x0004b983) popup_fep_china_hwr2_fs_control_bar_grid

0xda26,	// (0x0004b993) popup_fep_china_hwr2_fs_control_funtion_grid

0xda2e,	// (0x0004b99b) aid_fep_china_hwr2_fs_candi_cell

0x42a0,	// (0x0004220d) bg_popup_fep_shadow_pane_cp6

0xda38,	// (0x0004b9a5) popup_fep_china_hwr2_fs_candidate_grid

0xda42,	// (0x0004b9af) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda42,	// (0x0004b9af) cell_fep_china_hwr2_fs_funtion_grid

0x776b,	// (0x000456d8) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda5a,	// (0x0004b9c7) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda5a,	// (0x0004b9c7) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda68,	// (0x0004b9d5) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda68,	// (0x0004b9d5) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0x0197,	// (0x0003e104) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0x0197,	// (0x0003e104) cell_fep_china_hwr2_fs_funtion_grid_g

0xda7e,	// (0x0004b9eb) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda7e,	// (0x0004b9eb) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda93,	// (0x0004ba00) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda93,	// (0x0004ba00) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0x019c,	// (0x0003e109) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0x019c,	// (0x0003e109) cell_fep_china_hwr2_fs_funtion_grid_t

0xdaaf,	// (0x0004ba1c) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdab7,	// (0x0004ba24) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdabf,	// (0x0004ba2c) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0x01a1,	// (0x0003e10e) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdac7,	// (0x0004ba34) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdac7,	// (0x0004ba34) cell_fep_china_hwr2_fs_candidate_grid

0xdae0,	// (0x0004ba4d) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdae8,	// (0x0004ba55) popup_fep_china_hwr2_fs_candidate_grid_g21

0x776b,	// (0x000456d8) cell_fep_china_hwr2_fs_candidate_grid_g1

0x776b,	// (0x000456d8) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb5e,	// (0x0004dacb) cell_fep_china_hwr2_fs_candidate_grid_g

0xdaf0,	// (0x0004ba5d) cell_fep_china_hwr2_fs_candidate_grid_t1

0x5806,	// (0x00043773) clock_nsta_pane_cp_24_ParamLimits

0x5806,	// (0x00043773) clock_nsta_pane_cp_24

0x586e,	// (0x000437db) indicator_nsta_pane_cp_24_ParamLimits

0x586e,	// (0x000437db) indicator_nsta_pane_cp_24

0x65d4,	// (0x00044541) heading_pane_g1

0x0001,

0xf909,	// (0x0004d876) heading_pane_g

0x6c6d,	// (0x00044bda) grid_sct_catagory_button_pane

0x63dd,	// (0x0004434a) scroll_pane_cp5_ParamLimits

0x74c9,	// (0x00045436) button_value_adjust_pane_cp5_ParamLimits

0x74c9,	// (0x00045436) button_value_adjust_pane_cp5

0x7587,	// (0x000454f4) form2_midp_time_pane_ParamLimits

0xdafe,	// (0x0004ba6b) cell_sct_catagory_button_pane_ParamLimits

0xdafe,	// (0x0004ba6b) cell_sct_catagory_button_pane

0x7730,	// (0x0004569d) bg_button_pane_cp01_ParamLimits

0x7730,	// (0x0004569d) bg_button_pane_cp01

0x776b,	// (0x000456d8) cell_sct_catagory_button_pane_g1

0xb7c5,	// (0x00049732) popup_tb_extension_window

0xdb10,	// (0x0004ba7d) aid_size_cell_ext_ParamLimits

0xdb10,	// (0x0004ba7d) aid_size_cell_ext

0x4443,	// (0x000423b0) bg_tb_trans_pane_cp1_ParamLimits

0x4443,	// (0x000423b0) bg_tb_trans_pane_cp1

0xdb30,	// (0x0004ba9d) grid_tb_ext_pane_ParamLimits

0xdb30,	// (0x0004ba9d) grid_tb_ext_pane

0xdb5e,	// (0x0004bacb) cell_tb_ext_pane_ParamLimits

0xdb5e,	// (0x0004bacb) cell_tb_ext_pane

0xdb75,	// (0x0004bae2) cell_tb_ext_pane_g1_ParamLimits

0xdb75,	// (0x0004bae2) cell_tb_ext_pane_g1

0xdb92,	// (0x0004baff) cell_tb_ext_pane_t1

0x4443,	// (0x000423b0) list_highlight_pane_cp11_ParamLimits

0x4443,	// (0x000423b0) list_highlight_pane_cp11

0x8d1a,	// (0x00046c87) popup_uni_indicator_window_ParamLimits

0x8d1a,	// (0x00046c87) popup_uni_indicator_window

0x4a45,	// (0x000429b2) bg_popup_sub_pane_cp14

0xdbad,	// (0x0004bb1a) list_uniindi_pane

0xdbb9,	// (0x0004bb26) uniindi_top_pane

0x4443,	// (0x000423b0) bg_uniindi_top_pane

0xdbd8,	// (0x0004bb45) uniindi_top_pane_g1

0xdbee,	// (0x0004bb5b) uniindi_top_pane_g2

0x0003,

0x01a8,	// (0x0003e115) uniindi_top_pane_g

0xdc18,	// (0x0004bb85) uniindi_top_pane_t1

0xdc42,	// (0x0004bbaf) list_single_uniindi_pane_ParamLimits

0xdc42,	// (0x0004bbaf) list_single_uniindi_pane

0x776b,	// (0x000456d8) bg_uniindi_top_pane_g1

0xdc55,	// (0x0004bbc2) list_single_uniindi_pane_g1

0xdc68,	// (0x0004bbd5) list_single_uniindi_pane_t1

0x8b90,	// (0x00046afd) control_bg_pane

0xdc8d,	// (0x0004bbfa) bg_sctrl_sk_pane_cp1

0xdc96,	// (0x0004bc03) bg_sctrl_sk_pane_cp2

0xdc9f,	// (0x0004bc0c) control_bg_pane_g1

0xdca8,	// (0x0004bc15) control_bg_pane_g2

0x0001,

0x01b1,	// (0x0003e11e) control_bg_pane_g

0x73ca,	// (0x00045337) cell_indicator_nsta_pane_g1_ParamLimits

0xc946,	// (0x0004a8b3) cell_indicator_nsta_pane_g2_ParamLimits

0xfacf,	// (0x0004da3c) cell_indicator_nsta_pane_g_ParamLimits

0xbb6c,	// (0x00049ad9) form2_midp_time_pane_t1_ParamLimits

0x468c,	// (0x000425f9) main_idle_act4_pane_ParamLimits

0x468c,	// (0x000425f9) main_idle_act4_pane

0xb7c5,	// (0x00049732) popup_tb_extension_window_ParamLimits

0xdb4e,	// (0x0004babb) tb_ext_find_pane_ParamLimits

0xdb4e,	// (0x0004babb) tb_ext_find_pane

0xdcb1,	// (0x0004bc1e) ai_gene_pane_1_cp1

0x54f5,	// (0x00043462) ai_gene_pane_2_cp1

0xdcb9,	// (0x0004bc26) list_single_idle_plugin_calendar_pane

0xdcc2,	// (0x0004bc2f) list_single_idle_plugin_notification_pane

0xdccb,	// (0x0004bc38) list_single_idle_plugin_player_pane

0xdcd4,	// (0x0004bc41) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcd4,	// (0x0004bc41) list_single_idle_plugin_shortcut_pane

0xdcf6,	// (0x0004bc63) main_idle_act4_pane_t1

0xdd08,	// (0x0004bc75) main_idle_act4_pane_t2

0x0001,

0x01b6,	// (0x0003e123) main_idle_act4_pane_t

0xdd1a,	// (0x0004bc87) middle_sk_idle_act4_pane_ParamLimits

0xdd1a,	// (0x0004bc87) middle_sk_idle_act4_pane

0xdd30,	// (0x0004bc9d) popup_clock_digital_analogue_window_cp2

0xdd4a,	// (0x0004bcb7) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd4a,	// (0x0004bcb7) shortcut_wheel_idle_act4_pane

0x776b,	// (0x000456d8) shortcut_wheel_idle_act4_pane_g1

0x776b,	// (0x000456d8) shortcut_wheel_idle_act4_pane_g2

0x776b,	// (0x000456d8) shortcut_wheel_idle_act4_pane_g3

0x776b,	// (0x000456d8) shortcut_wheel_idle_act4_pane_g4

0x776b,	// (0x000456d8) shortcut_wheel_idle_act4_pane_g5

0xdd5e,	// (0x0004bccb) shortcut_wheel_idle_act4_pane_g6

0xdd66,	// (0x0004bcd3) shortcut_wheel_idle_act4_pane_g7

0xdd6e,	// (0x0004bcdb) shortcut_wheel_idle_act4_pane_g8

0xdd76,	// (0x0004bce3) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfcd8,	// (0x0004dc45) shortcut_wheel_idle_act4_pane_g

0x7912,	// (0x0004587f) middle_sk_idle_act4_pane_g1_ParamLimits

0x7912,	// (0x0004587f) middle_sk_idle_act4_pane_g1

0xddda,	// (0x0004bd47) middle_sk_idle_act4_pane_g2_ParamLimits

0xddda,	// (0x0004bd47) middle_sk_idle_act4_pane_g2

0x0001,

0xfcf6,	// (0x0004dc63) middle_sk_idle_act4_pane_g_ParamLimits

0xfcf6,	// (0x0004dc63) middle_sk_idle_act4_pane_g

0xdde6,	// (0x0004bd53) middle_sk_idle_act4_pane_t1_ParamLimits

0xdde6,	// (0x0004bd53) middle_sk_idle_act4_pane_t1

0xde03,	// (0x0004bd70) grid_ai_shortcut_pane_ParamLimits

0xde03,	// (0x0004bd70) grid_ai_shortcut_pane

0xde1c,	// (0x0004bd89) list_highlight_pane_cp16_ParamLimits

0xde1c,	// (0x0004bd89) list_highlight_pane_cp16

0xde29,	// (0x0004bd96) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde29,	// (0x0004bd96) list_single_idle_plugin_shortcut_pane_g1

0xde35,	// (0x0004bda2) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde35,	// (0x0004bda2) list_single_idle_plugin_shortcut_pane_g2

0xde4d,	// (0x0004bdba) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde4d,	// (0x0004bdba) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0x01e3,	// (0x0003e150) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0x01e3,	// (0x0003e150) list_single_idle_plugin_shortcut_pane_g

0xde60,	// (0x0004bdcd) cell_ai_shortcut_pane_ParamLimits

0xde60,	// (0x0004bdcd) cell_ai_shortcut_pane

0xde84,	// (0x0004bdf1) cell_ai_shortcut_pane_g1_ParamLimits

0xde84,	// (0x0004bdf1) cell_ai_shortcut_pane_g1

0xdcb1,	// (0x0004bc1e) ai_gene_pane_1_cp2

0xdea6,	// (0x0004be13) ai_gene_pane_2_cp2

0xdeae,	// (0x0004be1b) list_highlight_pane_cp15

0xdeb7,	// (0x0004be24) list_single_idle_plugin_calendar_pane_g1

0xdeae,	// (0x0004be1b) list_highlight_pane_cp17

0xdebf,	// (0x0004be2c) list_single_idle_plugin_calendar_pane_g1_copy1

0xdec7,	// (0x0004be34) list_single_idle_plugin_player_pane_g1

0x6e6c,	// (0x00044dd9) list_single_idle_plugin_player_pane_g2

0x0001,

0xfcfb,	// (0x0004dc68) list_single_idle_plugin_player_pane_g

0xdecf,	// (0x0004be3c) list_single_idle_plugin_player_pane_t1

0xdedd,	// (0x0004be4a) list_single_idle_plugin_player_pane_t2

0xdeeb,	// (0x0004be58) list_single_idle_plugin_player_pane_t3

0xdef9,	// (0x0004be66) list_single_idle_plugin_player_pane_t4

0x0003,

0x01ef,	// (0x0003e15c) list_single_idle_plugin_player_pane_t

0xdf07,	// (0x0004be74) wait_bar_pane_cp15

0xdf0f,	// (0x0004be7c) grid_ai_notification_pane

0x6e6c,	// (0x00044dd9) list_single_idle_plugin_notification_pane_g1

0xdf18,	// (0x0004be85) cell_ai_notification_pane_ParamLimits

0xdf18,	// (0x0004be85) cell_ai_notification_pane

0xdf25,	// (0x0004be92) cell_ai_notification_pane_g1

0xdf2d,	// (0x0004be9a) cell_ai_notification_pane_t1

0xdf3b,	// (0x0004bea8) tb_ext_find_button_pane

0xdf43,	// (0x0004beb0) tb_ext_find_pane_g1

0xdf4b,	// (0x0004beb8) tb_ext_find_pane_t1

0x4f86,	// (0x00042ef3) tb_ext_find_button_pane_g1

0xdf59,	// (0x0004bec6) tb_ext_find_button_pane_g2

0x0001,

0xfd00,	// (0x0004dc6d) tb_ext_find_button_pane_g

0xdcf6,	// (0x0004bc63) main_idle_act4_pane_t1_ParamLimits

0xdd08,	// (0x0004bc75) main_idle_act4_pane_t2_ParamLimits

0x01b6,	// (0x0003e123) main_idle_act4_pane_t_ParamLimits

0xdd30,	// (0x0004bc9d) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd3e,	// (0x0004bcab) sat_plugin_idle_act4_pane_ParamLimits

0xdd3e,	// (0x0004bcab) sat_plugin_idle_act4_pane

0xdf62,	// (0x0004becf) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf62,	// (0x0004becf) sat_plugin_idle_act4_pane_t1

0xdf75,	// (0x0004bee2) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf75,	// (0x0004bee2) sat_plugin_idle_act4_pane_t2

0xdf88,	// (0x0004bef5) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf88,	// (0x0004bef5) sat_plugin_idle_act4_pane_t3

0xdf9b,	// (0x0004bf08) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf9b,	// (0x0004bf08) sat_plugin_idle_act4_pane_t4

0x0003,

0x01fd,	// (0x0003e16a) sat_plugin_idle_act4_pane_t_ParamLimits

0x01fd,	// (0x0003e16a) sat_plugin_idle_act4_pane_t

0x8c55,	// (0x00046bc2) popup_battery_window_ParamLimits

0x8c55,	// (0x00046bc2) popup_battery_window

0x4443,	// (0x000423b0) bg_popup_sub_pane_cp25_ParamLimits

0x4443,	// (0x000423b0) bg_popup_sub_pane_cp25

0xdfae,	// (0x0004bf1b) popup_battery_window_g1_ParamLimits

0xdfae,	// (0x0004bf1b) popup_battery_window_g1

0xdfba,	// (0x0004bf27) popup_battery_window_t1_ParamLimits

0xdfba,	// (0x0004bf27) popup_battery_window_t1

0xdfcc,	// (0x0004bf39) popup_battery_window_t2_ParamLimits

0xdfcc,	// (0x0004bf39) popup_battery_window_t2

0x0001,

0x0206,	// (0x0003e173) popup_battery_window_t_ParamLimits

0x0206,	// (0x0003e173) popup_battery_window_t

0xb2f8,	// (0x00049265) midp_canvas_pane_ParamLimits

0xb35a,	// (0x000492c7) midp_keypad_pane_ParamLimits

0xb35a,	// (0x000492c7) midp_keypad_pane

0x4b9d,	// (0x00042b0a) main_midp_pane_ParamLimits

0x7482,	// (0x000453ef) signal_pane_g2_cp_ParamLimits

0xdfe9,	// (0x0004bf56) aid_size_cell_midp_keypad_ParamLimits

0xdfe9,	// (0x0004bf56) aid_size_cell_midp_keypad

0xe003,	// (0x0004bf70) midp_keyp_game_grid_pane_ParamLimits

0xe003,	// (0x0004bf70) midp_keyp_game_grid_pane

0xe023,	// (0x0004bf90) midp_keyp_rocker_pane_ParamLimits

0xe023,	// (0x0004bf90) midp_keyp_rocker_pane

0xe05c,	// (0x0004bfc9) midp_keyp_sk_left_pane_ParamLimits

0xe05c,	// (0x0004bfc9) midp_keyp_sk_left_pane

0xe0b6,	// (0x0004c023) midp_keyp_sk_right_pane_ParamLimits

0xe0b6,	// (0x0004c023) midp_keyp_sk_right_pane

0x42a0,	// (0x0004220d) bg_button_pane_cp03

0xe110,	// (0x0004c07d) midp_keyp_sk_left_pane_g1

0x42a0,	// (0x0004220d) bg_button_pane_cp04

0xe110,	// (0x0004c07d) midp_keyp_sk_right_pane_g1

0x776b,	// (0x000456d8) midp_keyp_rocker_pane_g1

0xe119,	// (0x0004c086) keyp_game_cell_pane_ParamLimits

0xe119,	// (0x0004c086) keyp_game_cell_pane

0x42a0,	// (0x0004220d) bg_button_pane_cp02

0xe12c,	// (0x0004c099) keyp_game_cell_pane_g1

0x8c99,	// (0x00046c06) popup_fep_vkb2_window_ParamLimits

0x8c99,	// (0x00046c06) popup_fep_vkb2_window

0xa384,	// (0x000482f1) aid_size_cell_vkb2_ParamLimits

0xa384,	// (0x000482f1) aid_size_cell_vkb2

0xa3d8,	// (0x00048345) popup_fep_vkb2_window_g1_ParamLimits

0xa3d8,	// (0x00048345) popup_fep_vkb2_window_g1

0xa420,	// (0x0004838d) vkb2_area_bottom_pane_ParamLimits

0xa420,	// (0x0004838d) vkb2_area_bottom_pane

0xa46c,	// (0x000483d9) vkb2_area_keypad_pane_ParamLimits

0xa46c,	// (0x000483d9) vkb2_area_keypad_pane

0xa4ae,	// (0x0004841b) vkb2_area_top_pane_ParamLimits

0xa4ae,	// (0x0004841b) vkb2_area_top_pane

0xa528,	// (0x00048495) vkb2_top_entry_pane_ParamLimits

0xa528,	// (0x00048495) vkb2_top_entry_pane

0xa552,	// (0x000484bf) vkb2_top_grid_left_pane_ParamLimits

0xa552,	// (0x000484bf) vkb2_top_grid_left_pane

0xa570,	// (0x000484dd) vkb2_top_grid_right_pane_ParamLimits

0xa570,	// (0x000484dd) vkb2_top_grid_right_pane

0xa58e,	// (0x000484fb) vkb2_cell_keypad_pane_ParamLimits

0xa58e,	// (0x000484fb) vkb2_cell_keypad_pane

0xa65f,	// (0x000485cc) vkb2_area_bottom_grid_pane_ParamLimits

0xa65f,	// (0x000485cc) vkb2_area_bottom_grid_pane

0xa685,	// (0x000485f2) vkb2_area_bottom_pane_g1_ParamLimits

0xa685,	// (0x000485f2) vkb2_area_bottom_pane_g1

0xa6a9,	// (0x00048616) vkb2_area_bottom_pane_g2_ParamLimits

0xa6a9,	// (0x00048616) vkb2_area_bottom_pane_g2

0xa6d7,	// (0x00048644) vkb2_area_bottom_pane_g3_ParamLimits

0xa6d7,	// (0x00048644) vkb2_area_bottom_pane_g3

0x0002,

0xfd05,	// (0x0004dc72) vkb2_area_bottom_pane_g_ParamLimits

0xfd05,	// (0x0004dc72) vkb2_area_bottom_pane_g

0xa738,	// (0x000486a5) vkb2_top_cell_left_pane_ParamLimits

0xa738,	// (0x000486a5) vkb2_top_cell_left_pane

0xe13d,	// (0x0004c0aa) vkb2_top_entry_pane_g1_ParamLimits

0xe13d,	// (0x0004c0aa) vkb2_top_entry_pane_g1

0xe14b,	// (0x0004c0b8) vkb2_top_entry_pane_t1_ParamLimits

0xe14b,	// (0x0004c0b8) vkb2_top_entry_pane_t1

0xe17d,	// (0x0004c0ea) vkb2_top_entry_pane_t2_ParamLimits

0xe17d,	// (0x0004c0ea) vkb2_top_entry_pane_t2

0xe1af,	// (0x0004c11c) vkb2_top_entry_pane_t3_ParamLimits

0xe1af,	// (0x0004c11c) vkb2_top_entry_pane_t3

0x0002,

0x0212,	// (0x0003e17f) vkb2_top_entry_pane_t_ParamLimits

0x0212,	// (0x0003e17f) vkb2_top_entry_pane_t

0xa785,	// (0x000486f2) vkb2_top_grid_right_pane_g1_ParamLimits

0xa785,	// (0x000486f2) vkb2_top_grid_right_pane_g1

0xa79b,	// (0x00048708) vkb2_top_grid_right_pane_g2_ParamLimits

0xa79b,	// (0x00048708) vkb2_top_grid_right_pane_g2

0xa7b3,	// (0x00048720) vkb2_top_grid_right_pane_g3_ParamLimits

0xa7b3,	// (0x00048720) vkb2_top_grid_right_pane_g3

0xa7cb,	// (0x00048738) vkb2_top_grid_right_pane_g4_ParamLimits

0xa7cb,	// (0x00048738) vkb2_top_grid_right_pane_g4

0x0003,

0xfd0c,	// (0x0004dc79) vkb2_top_grid_right_pane_g_ParamLimits

0xfd0c,	// (0x0004dc79) vkb2_top_grid_right_pane_g

0xa7e1,	// (0x0004874e) vkb2_top_cell_left_pane_g1

0xa7f8,	// (0x00048765) vkb2_cell_keypad_pane_g1_ParamLimits

0xa7f8,	// (0x00048765) vkb2_cell_keypad_pane_g1

0xe1d3,	// (0x0004c140) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1d3,	// (0x0004c140) vkb2_cell_keypad_pane_t1

0xa806,	// (0x00048773) vkb2_cell_bottom_grid_pane_ParamLimits

0xa806,	// (0x00048773) vkb2_cell_bottom_grid_pane

0xa83f,	// (0x000487ac) vkb2_cell_bottom_grid_pane_g1

0xdd7e,	// (0x0004bceb) aid_call2_pane_cp02

0xdd86,	// (0x0004bcf3) aid_call_pane_cp02

0xdd8e,	// (0x0004bcfb) clock_digital_number_pane_cp10

0xdd96,	// (0x0004bd03) clock_digital_number_pane_cp11

0xdd9e,	// (0x0004bd0b) clock_digital_number_pane_cp12

0xdda6,	// (0x0004bd13) clock_digital_number_pane_cp13

0xddae,	// (0x0004bd1b) clock_digital_separator_pane_cp10

0x4f86,	// (0x00042ef3) popup_clock_digital_analogue_window_cp2_g1

0x4f86,	// (0x00042ef3) popup_clock_digital_analogue_window_cp2_g2

0xddb6,	// (0x0004bd23) popup_clock_digital_analogue_window_cp2_g3

0x4f86,	// (0x00042ef3) popup_clock_digital_analogue_window_cp2_g4

0xddb6,	// (0x0004bd23) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfceb,	// (0x0004dc58) popup_clock_digital_analogue_window_cp2_g

0xddbe,	// (0x0004bd2b) popup_clock_digital_analogue_window_cp2_t1

0xddcc,	// (0x0004bd39) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0x01d9,	// (0x0003e146) popup_clock_digital_analogue_window_cp2_t

0x776b,	// (0x000456d8) clock_digital_number_pane_cp10_g1

0x776b,	// (0x000456d8) clock_digital_number_pane_cp10_g2

0x0001,

0xfb5e,	// (0x0004dacb) clock_digital_number_pane_cp10_g

0x776b,	// (0x000456d8) clock_digital_separator_pane_cp10_g1

0x776b,	// (0x000456d8) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb5e,	// (0x0004dacb) clock_digital_separator_pane_cp10_g

0xdbfa,	// (0x0004bb67) uniindi_top_pane_g3

0xdc0b,	// (0x0004bb78) uniindi_top_pane_g4

0xa619,	// (0x00048586) vkb2_row_keypad_pane_ParamLimits

0xa619,	// (0x00048586) vkb2_row_keypad_pane

0xa85b,	// (0x000487c8) vkb2_cell_t_keypad_pane_ParamLimits

0xa85b,	// (0x000487c8) vkb2_cell_t_keypad_pane

0xa86b,	// (0x000487d8) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xa86b,	// (0x000487d8) vkb2_cell_t_keypad_pane_cp08

0xa87e,	// (0x000487eb) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xa87e,	// (0x000487eb) vkb2_cell_t_keypad_pane_cp09

0xa892,	// (0x000487ff) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xa892,	// (0x000487ff) vkb2_cell_t_keypad_pane_cp01

0xa8a3,	// (0x00048810) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xa8a3,	// (0x00048810) vkb2_cell_t_keypad_pane_cp02

0xa8b4,	// (0x00048821) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xa8b4,	// (0x00048821) vkb2_cell_t_keypad_pane_cp03

0xa8c5,	// (0x00048832) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xa8c5,	// (0x00048832) vkb2_cell_t_keypad_pane_cp04

0xa8d6,	// (0x00048843) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xa8d6,	// (0x00048843) vkb2_cell_t_keypad_pane_cp05

0xa8e7,	// (0x00048854) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xa8e7,	// (0x00048854) vkb2_cell_t_keypad_pane_cp06

0xa8f8,	// (0x00048865) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xa8f8,	// (0x00048865) vkb2_cell_t_keypad_pane_cp07

0xa909,	// (0x00048876) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xa909,	// (0x00048876) vkb2_cell_t_keypad_pane_cp10

0xa0bb,	// (0x00048028) vkb2_cell_t_keypad_pane_g1

0xe1ea,	// (0x0004c157) vkb2_cell_t_keypad_pane_t1

0x8b90,	// (0x00046afd) popup_grid_graphic2_window

0xe1fc,	// (0x0004c169) aid_size_cell_graphic2_ParamLimits

0xe1fc,	// (0x0004c169) aid_size_cell_graphic2

0x7422,	// (0x0004538f) bg_popup_window_pane_cp21_ParamLimits

0x7422,	// (0x0004538f) bg_popup_window_pane_cp21

0xe228,	// (0x0004c195) graphic2_pages_pane_ParamLimits

0xe228,	// (0x0004c195) graphic2_pages_pane

0xe26e,	// (0x0004c1db) grid_graphic2_control_pane_ParamLimits

0xe26e,	// (0x0004c1db) grid_graphic2_control_pane

0xe2bd,	// (0x0004c22a) grid_graphic2_pane_ParamLimits

0xe2bd,	// (0x0004c22a) grid_graphic2_pane

0xe31d,	// (0x0004c28a) cell_graphic2_pane

0x42a0,	// (0x0004220d) main_comp_mode_pane

0xd47a,	// (0x0004b3e7) list_ai3_gene_pane_ParamLimits

0xd844,	// (0x0004b7b1) bg_popup_window_pane_cp19_ParamLimits

0xd850,	// (0x0004b7bd) bg_touch_area_indi_pane_ParamLimits

0xd850,	// (0x0004b7bd) bg_touch_area_indi_pane

0xd866,	// (0x0004b7d3) bg_touch_area_indi_pane_cp01_ParamLimits

0xd866,	// (0x0004b7d3) bg_touch_area_indi_pane_cp01

0xd87c,	// (0x0004b7e9) bg_touch_area_indi_pane_cp02_ParamLimits

0xd87c,	// (0x0004b7e9) bg_touch_area_indi_pane_cp02

0xd894,	// (0x0004b801) bg_touch_area_indi_pane_cp03_ParamLimits

0xd894,	// (0x0004b801) bg_touch_area_indi_pane_cp03

0xd8ae,	// (0x0004b81b) popup_slider_window_g1_ParamLimits

0xd8ca,	// (0x0004b837) popup_slider_window_g2_ParamLimits

0xd8e6,	// (0x0004b853) popup_slider_window_g3_ParamLimits

0x0163,	// (0x0003e0d0) popup_slider_window_g_ParamLimits

0xd942,	// (0x0004b8af) popup_slider_window_t1_ParamLimits

0xd9b6,	// (0x0004b923) small_volume_slider_vertical_pane_ParamLimits

0xe31d,	// (0x0004c28a) cell_graphic2_pane_ParamLimits

0xe36c,	// (0x0004c2d9) bg_button_pane_cp10_ParamLimits

0xe36c,	// (0x0004c2d9) bg_button_pane_cp10

0xe37f,	// (0x0004c2ec) bg_button_pane_cp11_ParamLimits

0xe37f,	// (0x0004c2ec) bg_button_pane_cp11

0xe392,	// (0x0004c2ff) graphic2_pages_pane_g1_ParamLimits

0xe392,	// (0x0004c2ff) graphic2_pages_pane_g1

0xe3ad,	// (0x0004c31a) graphic2_pages_pane_g2_ParamLimits

0xe3ad,	// (0x0004c31a) graphic2_pages_pane_g2

0x0001,

0x0227,	// (0x0003e194) graphic2_pages_pane_g_ParamLimits

0x0227,	// (0x0003e194) graphic2_pages_pane_g

0xe3c5,	// (0x0004c332) graphic2_pages_pane_t1_ParamLimits

0xe3c5,	// (0x0004c332) graphic2_pages_pane_t1

0xe3dd,	// (0x0004c34a) cell_graphic2_control_pane_ParamLimits

0xe3dd,	// (0x0004c34a) cell_graphic2_control_pane

0xe3f7,	// (0x0004c364) cell_graphic2_pane_g1_ParamLimits

0xe3f7,	// (0x0004c364) cell_graphic2_pane_g1

0xe404,	// (0x0004c371) cell_graphic2_pane_g2_ParamLimits

0xe404,	// (0x0004c371) cell_graphic2_pane_g2

0xe411,	// (0x0004c37e) cell_graphic2_pane_g3_ParamLimits

0xe411,	// (0x0004c37e) cell_graphic2_pane_g3

0xe41e,	// (0x0004c38b) cell_graphic2_pane_g4_ParamLimits

0xe41e,	// (0x0004c38b) cell_graphic2_pane_g4

0xe42b,	// (0x0004c398) cell_graphic2_pane_g5_ParamLimits

0xe42b,	// (0x0004c398) cell_graphic2_pane_g5

0x0004,

0x022c,	// (0x0003e199) cell_graphic2_pane_g_ParamLimits

0x022c,	// (0x0003e199) cell_graphic2_pane_g

0xe446,	// (0x0004c3b3) cell_graphic2_pane_t1_ParamLimits

0xe446,	// (0x0004c3b3) cell_graphic2_pane_t1

0x5aa9,	// (0x00043a16) grid_highlight_pane_cp11_ParamLimits

0x5aa9,	// (0x00043a16) grid_highlight_pane_cp11

0x4a45,	// (0x000429b2) bg_button_pane_cp05

0xe45c,	// (0x0004c3c9) cell_graphic2_control_pane_g1

0x776b,	// (0x000456d8) bg_touch_area_indi_pane_g1

0xe469,	// (0x0004c3d6) aid_cmod_rocker_key_size

0xe473,	// (0x0004c3e0) aid_cmode_itu_key_size

0xe47d,	// (0x0004c3ea) main_cmode_video_pane

0xe487,	// (0x0004c3f4) main_comp_mode_itu_pane

0xe493,	// (0x0004c400) main_comp_mode_rocker_pane

0xe49f,	// (0x0004c40c) cell_cmode_rocker_pane_ParamLimits

0xe49f,	// (0x0004c40c) cell_cmode_rocker_pane

0xe4b1,	// (0x0004c41e) cell_cmode_itu_pane_ParamLimits

0xe4b1,	// (0x0004c41e) cell_cmode_itu_pane

0x4a45,	// (0x000429b2) bg_button_pane_cp06_ParamLimits

0x4a45,	// (0x000429b2) bg_button_pane_cp06

0x7912,	// (0x0004587f) cell_cmode_rocker_pane_g1_ParamLimits

0x7912,	// (0x0004587f) cell_cmode_rocker_pane_g1

0xda5a,	// (0x0004b9c7) cell_cmode_rocker_pane_g2_ParamLimits

0xda5a,	// (0x0004b9c7) cell_cmode_rocker_pane_g2

0x0001,

0xfd1a,	// (0x0004dc87) cell_cmode_rocker_pane_g_ParamLimits

0xfd1a,	// (0x0004dc87) cell_cmode_rocker_pane_g

0x42a0,	// (0x0004220d) bg_button_pane_cp07

0xe4c6,	// (0x0004c433) cell_cmode_itu_pane_g1

0xe4cf,	// (0x0004c43c) cell_cmode_itu_pane_t1

0xe4dd,	// (0x0004c44a) cell_cmode_itu_pane_t2

0x0001,

0x023c,	// (0x0003e1a9) cell_cmode_itu_pane_t

0xdc7d,	// (0x0004bbea) aid_touch_ctrl_left

0xdc85,	// (0x0004bbf2) aid_touch_ctrl_right

0x42a0,	// (0x0004220d) compa_mode_pane

0xe4eb,	// (0x0004c458) aid_cmod_rocker_key_size_cp

0xe4f5,	// (0x0004c462) aid_cmode_itu_key_size_cp

0xe4ff,	// (0x0004c46c) compa_mode_pane_g1

0xe507,	// (0x0004c474) compa_mode_pane_g2

0xe50f,	// (0x0004c47c) compa_mode_pane_g3

0x0002,

0x0241,	// (0x0003e1ae) compa_mode_pane_g

0xe517,	// (0x0004c484) main_comp_mode_itu_pane_cp

0xe51f,	// (0x0004c48c) main_comp_mode_rocker_pane_cp

0xe527,	// (0x0004c494) cell_cmode_itu_pane_cp_ParamLimits

0xe527,	// (0x0004c494) cell_cmode_itu_pane_cp

0xe53c,	// (0x0004c4a9) cell_cmode_rocker_pane_cp_ParamLimits

0xe53c,	// (0x0004c4a9) cell_cmode_rocker_pane_cp

0x4a45,	// (0x000429b2) bg_button_pane_cp06_cp_ParamLimits

0x4a45,	// (0x000429b2) bg_button_pane_cp06_cp

0x7912,	// (0x0004587f) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7912,	// (0x0004587f) cell_cmode_rocker_pane_g1_cp

0x776b,	// (0x000456d8) cell_cmode_rocker_pane_g2_cp

0x42a0,	// (0x0004220d) bg_button_pane_cp07_cp

0x6b7a,	// (0x00044ae7) cell_cmode_itu_pane_g1_cp

0xe54e,	// (0x0004c4bb) cell_cmode_itu_pane_t1_cp

0xe54e,	// (0x0004c4bb) cell_cmode_itu_pane_t2_cp

0xc77c,	// (0x0004a6e9) settings_code_pane_cp2

0x4310,	// (0x0004227d) bg_popup_window_pane_cp3_ParamLimits

0x461d,	// (0x0004258a) heading_pane_cp3_ParamLimits

0x4629,	// (0x00042596) listscroll_popup_graphic_pane_ParamLimits

0x9e64,	// (0x00047dd1) fep_hwr_aid_pane_ParamLimits

0xa2dc,	// (0x00048249) aid_touch_sctrl_top_ParamLimits

0xa2f7,	// (0x00048264) sctrl_sk_top_pane_g1_ParamLimits

0xa0bb,	// (0x00048028) sctrl_sk_top_pane_g2_ParamLimits

0xfcbd,	// (0x0004dc2a) sctrl_sk_top_pane_g_ParamLimits

0xa304,	// (0x00048271) sctrl_sk_top_pane_t1_ParamLimits

0xa2dc,	// (0x00048249) aid_touch_sctrl_bottom_ParamLimits

0xa304,	// (0x00048271) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbc6,	// (0x0004bb33) aid_area_touch_clock

0xa4f0,	// (0x0004845d) aid_vkb2_area_top_pane_cell_ParamLimits

0xa4f0,	// (0x0004845d) aid_vkb2_area_top_pane_cell

0xa63b,	// (0x000485a8) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xa63b,	// (0x000485a8) aid_vkb2_area_bottom_pane_cell

0xe135,	// (0x0004c0a2) popup_char_count_window

0xe55c,	// (0x0004c4c9) popup_char_count_window_g1

0xe565,	// (0x0004c4d2) popup_char_count_window_g2

0xe56e,	// (0x0004c4db) popup_char_count_window_g3

0x0002,

0x0248,	// (0x0003e1b5) popup_char_count_window_g

0xe577,	// (0x0004c4e4) popup_char_count_window_t1

0xa3b6,	// (0x00048323) popup_fep_char_preview_window_ParamLimits

0xa3b6,	// (0x00048323) popup_fep_char_preview_window

0xa50e,	// (0x0004847b) vkb2_top_candi_pane_ParamLimits

0xa50e,	// (0x0004847b) vkb2_top_candi_pane

0xe585,	// (0x0004c4f2) cell_vkb2_top_candi_pane_ParamLimits

0xe585,	// (0x0004c4f2) cell_vkb2_top_candi_pane

0xa91e,	// (0x0004888b) bg_popup_fep_char_preview_window_ParamLimits

0xa91e,	// (0x0004888b) bg_popup_fep_char_preview_window

0xa92c,	// (0x00048899) popup_fep_char_preview_window_t1_ParamLimits

0xa92c,	// (0x00048899) popup_fep_char_preview_window_t1

0xe5d2,	// (0x0004c53f) bg_popup_fep_char_preview_window_g1

0xe5da,	// (0x0004c547) bg_popup_fep_char_preview_window_g2

0xe5e2,	// (0x0004c54f) bg_popup_fep_char_preview_window_g3

0xe5ea,	// (0x0004c557) bg_popup_fep_char_preview_window_g4

0xe5f2,	// (0x0004c55f) bg_popup_fep_char_preview_window_g5

0xa966,	// (0x000488d3) bg_popup_fep_char_preview_window_g6

0xe5fa,	// (0x0004c567) bg_popup_fep_char_preview_window_g7

0xe602,	// (0x0004c56f) bg_popup_fep_char_preview_window_g8

0xe60a,	// (0x0004c577) bg_popup_fep_char_preview_window_g9

0x0008,

0xfd1f,	// (0x0004dc8c) bg_popup_fep_char_preview_window_g

0xa0bb,	// (0x00048028) cell_vkb2_top_candi_pane_g1_ParamLimits

0xa0bb,	// (0x00048028) cell_vkb2_top_candi_pane_g1

0xa0c9,	// (0x00048036) cell_vkb2_top_candi_pane_g2_ParamLimits

0xa0c9,	// (0x00048036) cell_vkb2_top_candi_pane_g2

0xe29c,	// (0x0004c209) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe29c,	// (0x0004c209) cell_vkb2_top_candi_pane_g3

0xa96e,	// (0x000488db) cell_vkb2_top_candi_pane_g4_ParamLimits

0xa96e,	// (0x000488db) cell_vkb2_top_candi_pane_g4

0x7b72,	// (0x00045adf) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7b72,	// (0x00045adf) cell_vkb2_top_candi_pane_g5

0xa98f,	// (0x000488fc) cell_vkb2_top_candi_pane_g6_ParamLimits

0xa98f,	// (0x000488fc) cell_vkb2_top_candi_pane_g6

0x0005,

0xfd32,	// (0x0004dc9f) cell_vkb2_top_candi_pane_g_ParamLimits

0xfd32,	// (0x0004dc9f) cell_vkb2_top_candi_pane_g

0xa99d,	// (0x0004890a) cell_vkb2_top_candi_pane_t1

0x9cc4,	// (0x00047c31) aid_size_touch_slider_mark_ParamLimits

0x9cc4,	// (0x00047c31) aid_size_touch_slider_mark

0xe25e,	// (0x0004c1cb) grid_graphic2_catg_pane_ParamLimits

0xe25e,	// (0x0004c1cb) grid_graphic2_catg_pane

0xe2f9,	// (0x0004c266) popup_grid_graphic2_window_t1_ParamLimits

0xe2f9,	// (0x0004c266) popup_grid_graphic2_window_t1

0xe30b,	// (0x0004c278) popup_grid_graphic2_window_t2_ParamLimits

0xe30b,	// (0x0004c278) popup_grid_graphic2_window_t2

0x0001,

0xfd15,	// (0x0004dc82) popup_grid_graphic2_window_t_ParamLimits

0xfd15,	// (0x0004dc82) popup_grid_graphic2_window_t

0x4a45,	// (0x000429b2) bg_button_pane_cp05_ParamLimits

0xe45c,	// (0x0004c3c9) cell_graphic2_control_pane_g1_ParamLimits

0xe612,	// (0x0004c57f) cell_graphic2_catg_pane_ParamLimits

0xe612,	// (0x0004c57f) cell_graphic2_catg_pane

0x42a0,	// (0x0004220d) bg_button_pane_cp12

0xe624,	// (0x0004c591) cell_graphic2_catg_pane_g1

0xdb92,	// (0x0004baff) cell_tb_ext_pane_t1_ParamLimits

0xa758,	// (0x000486c5) vkb2_top_cell_right_narrow_pane_ParamLimits

0xa758,	// (0x000486c5) vkb2_top_cell_right_narrow_pane

0xa770,	// (0x000486dd) vkb2_top_cell_right_wide_pane_ParamLimits

0xa770,	// (0x000486dd) vkb2_top_cell_right_wide_pane

0x9e56,	// (0x00047dc3) bg_vkb2_func_pane_ParamLimits

0x9e56,	// (0x00047dc3) bg_vkb2_func_pane

0xa7e1,	// (0x0004874e) vkb2_top_cell_left_pane_g1_ParamLimits

0x9e56,	// (0x00047dc3) bg_vkb2_fuc_pane_cp03_ParamLimits

0x9e56,	// (0x00047dc3) bg_vkb2_fuc_pane_cp03

0xa83f,	// (0x000487ac) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x59c9,	// (0x00043936) bg_vkb2_func_pane_g1

0x59c1,	// (0x0004392e) bg_vkb2_func_pane_g2

0x59d1,	// (0x0004393e) bg_vkb2_func_pane_g3

0x59d9,	// (0x00043946) bg_vkb2_func_pane_g4

0x59e1,	// (0x0004394e) bg_vkb2_func_pane_g5

0x59e9,	// (0x00043956) bg_vkb2_func_pane_g6

0x59f9,	// (0x00043966) bg_vkb2_func_pane_g7

0x59f1,	// (0x0004395e) bg_vkb2_func_pane_g8

0x59b9,	// (0x00043926) bg_vkb2_func_pane_g9

0x0008,

0xfd3f,	// (0x0004dcac) bg_vkb2_func_pane_g

0x9e56,	// (0x00047dc3) bg_vkb2_fuc_pane_cp01_ParamLimits

0x9e56,	// (0x00047dc3) bg_vkb2_fuc_pane_cp01

0xa7e1,	// (0x0004874e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xa7e1,	// (0x0004874e) vkb2_top_cell_right_wide_pane_g1

0x9e56,	// (0x00047dc3) bg_vkb2_fuc_pane_cp02_ParamLimits

0x9e56,	// (0x00047dc3) bg_vkb2_fuc_pane_cp02

0xa83f,	// (0x000487ac) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xa83f,	// (0x000487ac) vkb2_top_cell_right_narrow_pane_g1

0xd7c8,	// (0x0004b735) aid_touch_area_decrease_ParamLimits

0xd7c8,	// (0x0004b735) aid_touch_area_decrease

0xd7e6,	// (0x0004b753) aid_touch_area_increase_ParamLimits

0xd7e6,	// (0x0004b753) aid_touch_area_increase

0xd7f2,	// (0x0004b75f) aid_touch_area_mute_ParamLimits

0xd7f2,	// (0x0004b75f) aid_touch_area_mute

0xd816,	// (0x0004b783) aid_touch_area_slider_ParamLimits

0xd816,	// (0x0004b783) aid_touch_area_slider

0xd902,	// (0x0004b86f) popup_slider_window_g4_ParamLimits

0xd902,	// (0x0004b86f) popup_slider_window_g4

0xd90e,	// (0x0004b87b) popup_slider_window_g5_ParamLimits

0xd90e,	// (0x0004b87b) popup_slider_window_g5

0xd930,	// (0x0004b89d) popup_slider_window_g6_ParamLimits

0xd930,	// (0x0004b89d) popup_slider_window_g6

0xd970,	// (0x0004b8dd) popup_slider_window_t2_ParamLimits

0xd970,	// (0x0004b8dd) popup_slider_window_t2

0x0001,

0x0170,	// (0x0003e0dd) popup_slider_window_t_ParamLimits

0x0170,	// (0x0003e0dd) popup_slider_window_t

0xd988,	// (0x0004b8f5) slider_pane_ParamLimits

0xd988,	// (0x0004b8f5) slider_pane

0xe62d,	// (0x0004c59a) slider_pane_g1_ParamLimits

0xe62d,	// (0x0004c59a) slider_pane_g1

0xe641,	// (0x0004c5ae) slider_pane_g2_ParamLimits

0xe641,	// (0x0004c5ae) slider_pane_g2

0xe657,	// (0x0004c5c4) slider_pane_g3_ParamLimits

0xe657,	// (0x0004c5c4) slider_pane_g3

0x0003,

0x0282,	// (0x0003e1ef) slider_pane_g_ParamLimits

0x0282,	// (0x0003e1ef) slider_pane_g

0xbe17,	// (0x00049d84) popup_tb_float_extension_window_ParamLimits

0xbe17,	// (0x00049d84) popup_tb_float_extension_window

0xe683,	// (0x0004c5f0) aid_size_cell_tb_float_ext

0x42a0,	// (0x0004220d) bg_popup_sub_window_cp28

0xe68f,	// (0x0004c5fc) grid_tb_float_ext_pane

0xe699,	// (0x0004c606) cell_tb_float_ext_pane_ParamLimits

0xe699,	// (0x0004c606) cell_tb_float_ext_pane

0xe6b3,	// (0x0004c620) cell_tb_float_ext_pane_g1

0xe6bc,	// (0x0004c629) grid_highlight_pane_cp12

0x9fa5,	// (0x00047f12) cell_last_hwr_side_pane_ParamLimits

0x9fa5,	// (0x00047f12) cell_last_hwr_side_pane

0x776b,	// (0x000456d8) cell_last_hwr_side_pane_g1

0xe6c5,	// (0x0004c632) cell_last_hwr_side_pane_g2

0x0001,

0xfd52,	// (0x0004dcbf) cell_last_hwr_side_pane_g

0xa707,	// (0x00048674) vkb2_area_bottom_space_btn_pane_ParamLimits

0xa707,	// (0x00048674) vkb2_area_bottom_space_btn_pane

0xa0bb,	// (0x00048028) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1ea,	// (0x0004c157) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xa99d,	// (0x0004890a) cell_vkb2_top_candi_pane_t1_ParamLimits

0xa9bc,	// (0x00048929) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xa9bc,	// (0x00048929) vkb2_area_bottom_space_btn_pane_g1

0xa9f6,	// (0x00048963) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xa9f6,	// (0x00048963) vkb2_area_bottom_space_btn_pane_g2

0xaa2c,	// (0x00048999) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xaa2c,	// (0x00048999) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfd57,	// (0x0004dcc4) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfd57,	// (0x0004dcc4) vkb2_area_bottom_space_btn_pane_g

0x9f19,	// (0x00047e86) cel_fep_hwr_func_pane_ParamLimits

0x9f19,	// (0x00047e86) cel_fep_hwr_func_pane

0x9f55,	// (0x00047ec2) cell_hwr_side_button_pane_ParamLimits

0x9f55,	// (0x00047ec2) cell_hwr_side_button_pane

0xdbc6,	// (0x0004bb33) aid_area_touch_clock_ParamLimits

0x4443,	// (0x000423b0) bg_uniindi_top_pane_ParamLimits

0xdbd8,	// (0x0004bb45) uniindi_top_pane_g1_ParamLimits

0xdbee,	// (0x0004bb5b) uniindi_top_pane_g2_ParamLimits

0xdbfa,	// (0x0004bb67) uniindi_top_pane_g3_ParamLimits

0xdc0b,	// (0x0004bb78) uniindi_top_pane_g4_ParamLimits

0x01a8,	// (0x0003e115) uniindi_top_pane_g_ParamLimits

0xdc18,	// (0x0004bb85) uniindi_top_pane_t1_ParamLimits

0x4443,	// (0x000423b0) bg_vkb2_func_pane_cp01_ParamLimits

0x4443,	// (0x000423b0) bg_vkb2_func_pane_cp01

0xe6ce,	// (0x0004c63b) cel_fep_hwr_func_pane_g1_ParamLimits

0xe6ce,	// (0x0004c63b) cel_fep_hwr_func_pane_g1

0x4443,	// (0x000423b0) bg_vkb2_func_pane_cp02_ParamLimits

0x4443,	// (0x000423b0) bg_vkb2_func_pane_cp02

0xe6ce,	// (0x0004c63b) cell_hwr_side_button_pane_g1_ParamLimits

0xe6ce,	// (0x0004c63b) cell_hwr_side_button_pane_g1

0x58cf,	// (0x0004383c) status_pane_g4_ParamLimits

0x58cf,	// (0x0004383c) status_pane_g4

0x58e9,	// (0x00043856) status_pane_t1

0x75f0,	// (0x0004555d) form2_midp_gauge_slider_cont_pane

0x75f8,	// (0x00045565) form2_midp_gauge_slider_pane_t1_ParamLimits

0xca76,	// (0x0004a9e3) form2_midp_gauge_slider_pane_t2_ParamLimits

0xca88,	// (0x0004a9f5) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb11,	// (0x0004da7e) form2_midp_gauge_slider_pane_t_ParamLimits

0x760a,	// (0x00045577) form2_midp_slider_pane_ParamLimits

0xa376,	// (0x000482e3) aid_size_cell_func_vkb2_ParamLimits

0xa376,	// (0x000482e3) aid_size_cell_func_vkb2

0xe66f,	// (0x0004c5dc) slider_pane_g4_ParamLimits

0xe66f,	// (0x0004c5dc) slider_pane_g4

0xaa76,	// (0x000489e3) form2_midp_gauge_slider_pane_t2_cp01

0xaa84,	// (0x000489f1) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xaa84,	// (0x000489f1) form2_midp_gauge_slider_pane_t3_cp01

0xaaa1,	// (0x00048a0e) form2_midp_slider_pane_cp01

0x42a0,	// (0x0004220d) navi_smil_pane

0xe6fe,	// (0x0004c66b) navi_smil_pane_g1

0xe706,	// (0x0004c673) navi_smil_pane_t1

0xe6dc,	// (0x0004c649) form2_midp_slider_pane_g1

0xe6e5,	// (0x0004c652) form2_midp_slider_pane_g2

0xe6ed,	// (0x0004c65a) form2_midp_slider_pane_g3

0xe6dc,	// (0x0004c649) form2_midp_slider_pane_g4

0xe8a7,	// (0x0004c814) form2_midp_slider_pane_g5

0x0004,

0xfd60,	// (0x0004dccd) form2_midp_slider_pane_g

0xaa66,	// (0x000489d3) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xaa66,	// (0x000489d3) vkb2_area_bottom_space_btn_pane_g4

0xbf7e,	// (0x00049eeb) lc0_navi_pane_ParamLimits

0xbf7e,	// (0x00049eeb) lc0_navi_pane

0xbff4,	// (0x00049f61) lc0_stat_indi_pane_ParamLimits

0xbff4,	// (0x00049f61) lc0_stat_indi_pane

0xc00b,	// (0x00049f78) ls0_title_pane_ParamLimits

0xc00b,	// (0x00049f78) ls0_title_pane

0x4a45,	// (0x000429b2) bg_popup_sub_pane_cp14_ParamLimits

0xdbad,	// (0x0004bb1a) list_uniindi_pane_ParamLimits

0xdbb9,	// (0x0004bb26) uniindi_top_pane_ParamLimits

0xdc55,	// (0x0004bbc2) list_single_uniindi_pane_g1_ParamLimits

0xdc68,	// (0x0004bbd5) list_single_uniindi_pane_t1_ParamLimits

0xaaaa,	// (0x00048a17) lc0_stat_clock_pane_ParamLimits

0xaaaa,	// (0x00048a17) lc0_stat_clock_pane

0xeeb3,	// (0x0004ce20) lc0_stat_indi_pane_g1_ParamLimits

0xeeb3,	// (0x0004ce20) lc0_stat_indi_pane_g1

0xeec0,	// (0x0004ce2d) lc0_stat_indi_pane_g2_ParamLimits

0xeec0,	// (0x0004ce2d) lc0_stat_indi_pane_g2

0x0001,

0xfd6b,	// (0x0004dcd8) lc0_stat_indi_pane_g_ParamLimits

0xfd6b,	// (0x0004dcd8) lc0_stat_indi_pane_g

0xaab7,	// (0x00048a24) lc0_uni_indicator_pane_ParamLimits

0xaab7,	// (0x00048a24) lc0_uni_indicator_pane

0xe714,	// (0x0004c681) ls0_title_pane_g1_ParamLimits

0xe714,	// (0x0004c681) ls0_title_pane_g1

0xeecd,	// (0x0004ce3a) ls0_title_pane_t1_ParamLimits

0xeecd,	// (0x0004ce3a) ls0_title_pane_t1

0xaac4,	// (0x00048a31) lc0_uni_indicator_pane_g1_ParamLimits

0xaac4,	// (0x00048a31) lc0_uni_indicator_pane_g1

0xe728,	// (0x0004c695) lc0_stat_clock_pane_t1

0x42a0,	// (0x0004220d) main_ai5_pane

0xe736,	// (0x0004c6a3) ai5_sk_pane_ParamLimits

0xe736,	// (0x0004c6a3) ai5_sk_pane

0xef03,	// (0x0004ce70) cell_ai5_widget_pane_ParamLimits

0xef03,	// (0x0004ce70) cell_ai5_widget_pane

0xe743,	// (0x0004c6b0) aid_size_cell_widget_grid

0xe757,	// (0x0004c6c4) bg_ai5_widget_pane_ParamLimits

0xe757,	// (0x0004c6c4) bg_ai5_widget_pane

0xefa1,	// (0x0004cf0e) cell_ai5_widget_pane_g2

0xefb1,	// (0x0004cf1e) cell_ai5_widget_pane_g3

0xefc5,	// (0x0004cf32) cell_ai5_widget_pane_g4

0xefd1,	// (0x0004cf3e) cell_ai5_widget_pane_g5

0xefdd,	// (0x0004cf4a) cell_ai5_widget_pane_g6

0xefe9,	// (0x0004cf56) cell_ai5_widget_pane_g7

0xf031,	// (0x0004cf9e) cell_ai5_widget_pane_t1_ParamLimits

0xf031,	// (0x0004cf9e) cell_ai5_widget_pane_t1

0xf04e,	// (0x0004cfbb) cell_ai5_widget_pane_t2_ParamLimits

0xf04e,	// (0x0004cfbb) cell_ai5_widget_pane_t2

0xf066,	// (0x0004cfd3) cell_ai5_widget_pane_t3_ParamLimits

0xf066,	// (0x0004cfd3) cell_ai5_widget_pane_t3

0xf07e,	// (0x0004cfeb) cell_ai5_widget_pane_t4_ParamLimits

0xf07e,	// (0x0004cfeb) cell_ai5_widget_pane_t4

0xf098,	// (0x0004d005) cell_ai5_widget_pane_t5_ParamLimits

0xf098,	// (0x0004d005) cell_ai5_widget_pane_t5

0xe763,	// (0x0004c6d0) cell_ai5_widget_pane_t6_ParamLimits

0xe763,	// (0x0004c6d0) cell_ai5_widget_pane_t6

0xe775,	// (0x0004c6e2) cell_ai5_widget_pane_t7_ParamLimits

0xe775,	// (0x0004c6e2) cell_ai5_widget_pane_t7

0xf0b7,	// (0x0004d024) cell_ai5_widget_pane_t8_ParamLimits

0xf0b7,	// (0x0004d024) cell_ai5_widget_pane_t8

0x0009,

0x02a4,	// (0x0003e211) cell_ai5_widget_pane_t_ParamLimits

0x02a4,	// (0x0003e211) cell_ai5_widget_pane_t

0xf0ff,	// (0x0004d06c) grid_ai5_widget_pane

0x4a45,	// (0x000429b2) highlight_cell_ai5_widget_pane_ParamLimits

0x4a45,	// (0x000429b2) highlight_cell_ai5_widget_pane

0xf117,	// (0x0004d084) ai5_sk_left_pane

0xf121,	// (0x0004d08e) ai5_sk_middle_pane

0xf12b,	// (0x0004d098) ai5_sk_right_pane

0xe78e,	// (0x0004c6fb) bg_ai5_widget_pane_g1_ParamLimits

0xe78e,	// (0x0004c6fb) bg_ai5_widget_pane_g1

0xe79a,	// (0x0004c707) bg_ai5_widget_pane_g2_ParamLimits

0xe79a,	// (0x0004c707) bg_ai5_widget_pane_g2

0xe7a6,	// (0x0004c713) bg_ai5_widget_pane_g3_ParamLimits

0xe7a6,	// (0x0004c713) bg_ai5_widget_pane_g3

0xe7b2,	// (0x0004c71f) bg_ai5_widget_pane_g4_ParamLimits

0xe7b2,	// (0x0004c71f) bg_ai5_widget_pane_g4

0xe7be,	// (0x0004c72b) bg_ai5_widget_pane_g5_ParamLimits

0xe7be,	// (0x0004c72b) bg_ai5_widget_pane_g5

0xe7ca,	// (0x0004c737) bg_ai5_widget_pane_g6_ParamLimits

0xe7ca,	// (0x0004c737) bg_ai5_widget_pane_g6

0xe7d6,	// (0x0004c743) bg_ai5_widget_pane_g7_ParamLimits

0xe7d6,	// (0x0004c743) bg_ai5_widget_pane_g7

0xe7e2,	// (0x0004c74f) bg_ai5_widget_pane_g8_ParamLimits

0xe7e2,	// (0x0004c74f) bg_ai5_widget_pane_g8

0xe7ee,	// (0x0004c75b) bg_ai5_widget_pane_g9_ParamLimits

0xe7ee,	// (0x0004c75b) bg_ai5_widget_pane_g9

0x0008,

0x02b9,	// (0x0003e226) bg_ai5_widget_pane_g_ParamLimits

0x02b9,	// (0x0003e226) bg_ai5_widget_pane_g

0xe821,	// (0x0004c78e) cell_shortcut_ai5_widget_pane_ParamLimits

0xe821,	// (0x0004c78e) cell_shortcut_ai5_widget_pane

0x434c,	// (0x000422b9) bg_cell_shortcut_ai5_widget_pane

0xe832,	// (0x0004c79f) cell_grid_ai5_widget_pane_g1

0xe83b,	// (0x0004c7a8) highlight_cell_shortcut_ai5_widget_pane

0x59c9,	// (0x00043936) ai5_sk_left_pane_g1

0xe843,	// (0x0004c7b0) ai5_sk_left_pane_g2

0xe84b,	// (0x0004c7b8) ai5_sk_left_pane_g3

0xe853,	// (0x0004c7c0) ai5_sk_left_pane_g4

0x0003,

0xfd85,	// (0x0004dcf2) ai5_sk_left_pane_g

0xe85b,	// (0x0004c7c8) ai5_sk_left_pane_t1

0x59c1,	// (0x0004392e) ai5_sk_right_pane_g1

0xe869,	// (0x0004c7d6) ai5_sk_right_pane_g2

0xe871,	// (0x0004c7de) ai5_sk_right_pane_g3

0xe879,	// (0x0004c7e6) ai5_sk_right_pane_g4

0x0003,

0xfd8e,	// (0x0004dcfb) ai5_sk_right_pane_g

0xe881,	// (0x0004c7ee) ai5_sk_right_pane_t1

0x59c1,	// (0x0004392e) ai5_sk_middle_pane_g1

0x59c9,	// (0x00043936) ai5_sk_middle_pane_g2

0x59e1,	// (0x0004394e) ai5_sk_middle_pane_g3

0xe871,	// (0x0004c7de) ai5_sk_middle_pane_g4

0xe84b,	// (0x0004c7b8) ai5_sk_middle_pane_g5

0xe88f,	// (0x0004c7fc) ai5_sk_middle_pane_g6

0xf135,	// (0x0004d0a2) ai5_sk_middle_pane_g7

0x0006,

0xfd97,	// (0x0004dd04) ai5_sk_middle_pane_g

0xbec7,	// (0x00049e34) aid_touch_area_size_lc0_ParamLimits

0xbec7,	// (0x00049e34) aid_touch_area_size_lc0

0xa0ea,	// (0x00048057) cell_hwr_candidate_pane_t1_ParamLimits

0x57f1,	// (0x0004375e) aid_touch_navi_pane

0xc0e1,	// (0x0004a04e) status_dt_navi_pane_ParamLimits

0xc0e1,	// (0x0004a04e) status_dt_navi_pane

0xc0ee,	// (0x0004a05b) status_dt_sta_pane_ParamLimits

0xc0ee,	// (0x0004a05b) status_dt_sta_pane

0xf13d,	// (0x0004d0aa) dt_sta_controll_pane

0xf14a,	// (0x0004d0b7) dt_sta_indi_pane

0xf15b,	// (0x0004d0c8) dt_sta_title_pane

0x4443,	// (0x000423b0) bg_dt_sta_indi_pane_ParamLimits

0x4443,	// (0x000423b0) bg_dt_sta_indi_pane

0xe897,	// (0x0004c804) dt_sta_battery_pane

0xf16e,	// (0x0004d0db) dt_sta_indi_pane_g1

0xf177,	// (0x0004d0e4) dt_sta_indi_pane_g2

0xf180,	// (0x0004d0ed) dt_sta_indi_pane_g3

0x0002,

0xfda6,	// (0x0004dd13) dt_sta_indi_pane_g

0xf189,	// (0x0004d0f6) dt_sta_signal_pane

0x4a45,	// (0x000429b2) bg_dt_sta_title_pane_ParamLimits

0x4a45,	// (0x000429b2) bg_dt_sta_title_pane

0xf192,	// (0x0004d0ff) dt_sta_title_pane_g1

0xf19a,	// (0x0004d107) dt_sta_title_pane_t1_ParamLimits

0xf19a,	// (0x0004d107) dt_sta_title_pane_t1

0x42a0,	// (0x0004220d) bg_dt_sta_control_pane

0xf1af,	// (0x0004d11c) dt_sta_controll_pane_g1

0xf1b8,	// (0x0004d125) bg_dt_sta_title_pane_g1

0xf1c1,	// (0x0004d12e) bg_dt_sta_title_pane_g2

0xf1ca,	// (0x0004d137) bg_dt_sta_title_pane_g3

0x0002,

0xfdad,	// (0x0004dd1a) bg_dt_sta_title_pane_g

0x776b,	// (0x000456d8) bg_dt_sta_indi_pane_g1

0xe89f,	// (0x0004c80c) dt_sta_signal_pane_g1

0xe8b0,	// (0x0004c81d) dt_sta_signal_pane_g2

0x0001,

0xfdb4,	// (0x0004dd21) dt_sta_signal_pane_g

0xe8b8,	// (0x0004c825) dt_sta_battery_pane_g1

0xe8c1,	// (0x0004c82e) dt_sta_battery_pane_t1

0x776b,	// (0x000456d8) bg_dt_sta_control_pane_g1

0x5004,	// (0x00042f71) fep_china_uni_eep_pane

0x500c,	// (0x00042f79) fep_china_uni_entry_pane_ParamLimits

0x501c,	// (0x00042f89) popup_fep_china_uni_window_g1_ParamLimits

0x502c,	// (0x00042f99) popup_fep_china_uni_window_g2_ParamLimits

0x502c,	// (0x00042f99) popup_fep_china_uni_window_g2

0x0001,

0xf762,	// (0x0004d6cf) popup_fep_china_uni_window_g_ParamLimits

0xf762,	// (0x0004d6cf) popup_fep_china_uni_window_g

0xe8d0,	// (0x0004c83d) fep_china_uni_eep_pane_g1

0xe8d8,	// (0x0004c845) fep_china_uni_eep_pane_t1

0xe6f5,	// (0x0004c662) aid_touch_area_size_smil_player

0x58a2,	// (0x0004380f) lc0_clock_pane

0x58dd,	// (0x0004384a) status_pane_g5_ParamLimits

0x58dd,	// (0x0004384a) status_pane_g5

0xb531,	// (0x0004949e) popup_keymap_window

0x58bb,	// (0x00043828) status_icon_pane

0xefb1,	// (0x0004cf1e) cell_ai5_widget_pane_g3_ParamLimits

0xefc5,	// (0x0004cf32) cell_ai5_widget_pane_g4_ParamLimits

0xefd1,	// (0x0004cf3e) cell_ai5_widget_pane_g5_ParamLimits

0xeff5,	// (0x0004cf62) cell_ai5_widget_pane_g8_ParamLimits

0xeff5,	// (0x0004cf62) cell_ai5_widget_pane_g8

0xf009,	// (0x0004cf76) cell_ai5_widget_pane_g9_ParamLimits

0xf009,	// (0x0004cf76) cell_ai5_widget_pane_g9

0xf01d,	// (0x0004cf8a) cell_ai5_widget_pane_g10_ParamLimits

0xf01d,	// (0x0004cf8a) cell_ai5_widget_pane_g10

0xe8e7,	// (0x0004c854) status_icon_pane_g1

0x42a0,	// (0x0004220d) bg_popup_sub_pane_cp13

0xe8ef,	// (0x0004c85c) popup_keymap_window_t1

0xb3b9,	// (0x00049326) control_pane_g6_ParamLimits

0xb3b9,	// (0x00049326) control_pane_g6

0xb3c6,	// (0x00049333) control_pane_g7_ParamLimits

0xb3c6,	// (0x00049333) control_pane_g7

0xb3d3,	// (0x00049340) control_pane_g8_ParamLimits

0xb3d3,	// (0x00049340) control_pane_g8

0xf13d,	// (0x0004d0aa) dt_sta_controll_pane_ParamLimits

0xf14a,	// (0x0004d0b7) dt_sta_indi_pane_ParamLimits

0xf15b,	// (0x0004d0c8) dt_sta_title_pane_ParamLimits

0x4987,	// (0x000428f4) aid_size_touch_scroll_bar_cale

0x8c69,	// (0x00046bd6) popup_discreet_window_ParamLimits

0x8c69,	// (0x00046bd6) popup_discreet_window

0x8cf1,	// (0x00046c5e) popup_sk_window

0x5f4c,	// (0x00043eb9) bg_popup_sub_pane_cp28_ParamLimits

0x5f4c,	// (0x00043eb9) bg_popup_sub_pane_cp28

0xe8fd,	// (0x0004c86a) popup_discreet_window_g1_ParamLimits

0xe8fd,	// (0x0004c86a) popup_discreet_window_g1

0xe91d,	// (0x0004c88a) popup_discreet_window_t1_ParamLimits

0xe91d,	// (0x0004c88a) popup_discreet_window_t1

0xe93b,	// (0x0004c8a8) popup_discreet_window_t2_ParamLimits

0xe93b,	// (0x0004c8a8) popup_discreet_window_t2

0x0002,

0xfdb9,	// (0x0004dd26) popup_discreet_window_t_ParamLimits

0xfdb9,	// (0x0004dd26) popup_discreet_window_t

0xaad8,	// (0x00048a45) popup_sk_window_g1

0xaae2,	// (0x00048a4f) popup_sk_window_g2

0x0001,

0xfdc0,	// (0x0004dd2d) popup_sk_window_g

0xe98d,	// (0x0004c8fa) popup_sk_window_t1

0xe99b,	// (0x0004c908) popup_sk_window_t1_copy1

0xefa1,	// (0x0004cf0e) cell_ai5_widget_pane_g2_ParamLimits

0xf0c9,	// (0x0004d036) cell_ai5_widget_pane_t9_ParamLimits

0xf0c9,	// (0x0004d036) cell_ai5_widget_pane_t9

0x42a0,	// (0x0004220d) main_fep_fshwr2_pane

0xf1d3,	// (0x0004d140) aid_fshwr2_btn_pane

0xf1db,	// (0x0004d148) aid_fshwr2_syb_pane

0xf1e3,	// (0x0004d150) aid_fshwr2_txt_pane

0xf1eb,	// (0x0004d158) fshwr2_func_candi_pane

0xf1f7,	// (0x0004d164) fshwr2_hwr_syb_pane

0xf203,	// (0x0004d170) fshwr2_icf_pane

0x42a0,	// (0x0004220d) fshwr2_icf_bg_pane

0xf20d,	// (0x0004d17a) fshwr2_icf_pane_t1_ParamLimits

0xf20d,	// (0x0004d17a) fshwr2_icf_pane_t1

0x776b,	// (0x000456d8) fshwr2_func_candi_pane_g1

0xe9bd,	// (0x0004c92a) fshwr2_func_candi_row_pane_ParamLimits

0xe9bd,	// (0x0004c92a) fshwr2_func_candi_row_pane

0xf224,	// (0x0004d191) cell_fshwr2_syb_pane_ParamLimits

0xf224,	// (0x0004d191) cell_fshwr2_syb_pane

0x7912,	// (0x0004587f) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7912,	// (0x0004587f) fshwr2_hwr_syb_pane_g1

0x42a0,	// (0x0004220d) bg_popup_call_pane_cp01

0xe9ce,	// (0x0004c93b) fshwr2_func_candi_cell_pane_ParamLimits

0xe9ce,	// (0x0004c93b) fshwr2_func_candi_cell_pane

0xe9ff,	// (0x0004c96c) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe9ff,	// (0x0004c96c) fshwr2_func_candi_cell_bg_pane

0xea19,	// (0x0004c986) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xea19,	// (0x0004c986) fshwr2_func_candi_cell_pane_g1

0xea41,	// (0x0004c9ae) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xea41,	// (0x0004c9ae) fshwr2_func_candi_cell_pane_t1

0x42a0,	// (0x0004220d) bg_button_pane_cp08

0x5473,	// (0x000433e0) cell_fshwr2_syb_bg_pane

0xf23e,	// (0x0004d1ab) cell_fshwr2_syb_bg_pane_g1

0xf246,	// (0x0004d1b3) cell_fshwr2_syb_bg_pane_t1

0x4a45,	// (0x000429b2) main_tmo_pane

0xc5b0,	// (0x0004a51d) uni_indicator_pane_g1_ParamLimits

0xc5c5,	// (0x0004a532) uni_indicator_pane_g2_ParamLimits

0xc5db,	// (0x0004a548) uni_indicator_pane_g3_ParamLimits

0x699c,	// (0x00044909) uni_indicator_pane_g4_ParamLimits

0x699c,	// (0x00044909) uni_indicator_pane_g4

0x69b0,	// (0x0004491d) uni_indicator_pane_g5_ParamLimits

0x69b0,	// (0x0004491d) uni_indicator_pane_g5

0x69c4,	// (0x00044931) uni_indicator_pane_g6_ParamLimits

0x69c4,	// (0x00044931) uni_indicator_pane_g6

0xf95f,	// (0x0004d8cc) uni_indicator_pane_g_ParamLimits

0xd7a4,	// (0x0004b711) popup_tmo_note_window_ParamLimits

0xd7a4,	// (0x0004b711) popup_tmo_note_window

0x42a0,	// (0x0004220d) fshwr2_bg_pane

0xea32,	// (0x0004c99f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xea32,	// (0x0004c99f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfdc5,	// (0x0004dd32) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfdc5,	// (0x0004dd32) fshwr2_func_candi_cell_pane_g

0x776b,	// (0x000456d8) bg_popup_window_pane_cp01

0xea54,	// (0x0004c9c1) bg_popup_window_pane_g1_cp01

0xea5d,	// (0x0004c9ca) bg_popup_window_pane_cp22_ParamLimits

0xea5d,	// (0x0004c9ca) bg_popup_window_pane_cp22

0xea6b,	// (0x0004c9d8) listscroll_tmo_link_pane_ParamLimits

0xea6b,	// (0x0004c9d8) listscroll_tmo_link_pane

0xeaab,	// (0x0004ca18) popup_tmo_note_window_g1_ParamLimits

0xeaab,	// (0x0004ca18) popup_tmo_note_window_g1

0xeab8,	// (0x0004ca25) tmo_note_info_pane_ParamLimits

0xeab8,	// (0x0004ca25) tmo_note_info_pane

0xf255,	// (0x0004d1c2) list_tmo_note_info_pane_g1_ParamLimits

0xf255,	// (0x0004d1c2) list_tmo_note_info_pane_g1

0xead2,	// (0x0004ca3f) list_tmo_note_info_pane_g2_ParamLimits

0xead2,	// (0x0004ca3f) list_tmo_note_info_pane_g2

0x0001,

0xfdca,	// (0x0004dd37) list_tmo_note_info_pane_g_ParamLimits

0xfdca,	// (0x0004dd37) list_tmo_note_info_pane_g

0xeaee,	// (0x0004ca5b) list_tmo_note_info_text_pane_ParamLimits

0xeaee,	// (0x0004ca5b) list_tmo_note_info_text_pane

0xeb30,	// (0x0004ca9d) list_tmo_link_pane

0xeb3d,	// (0x0004caaa) scroll_pane_cp20

0xeb4a,	// (0x0004cab7) list_single_tmo_link_pane_ParamLimits

0xeb4a,	// (0x0004cab7) list_single_tmo_link_pane

0xeb5a,	// (0x0004cac7) list_single_tmo_link_pane_t1

0xeb68,	// (0x0004cad5) list_tmo_note_info_text_pane_t1_ParamLimits

0xeb68,	// (0x0004cad5) list_tmo_note_info_text_pane_t1

0xb04b,	// (0x00048fb8) aid_size_touch_scroll_bar_cp01_ParamLimits

0xb04b,	// (0x00048fb8) aid_size_touch_scroll_bar_cp01

0xaf2a,	// (0x00048e97) aid_size_touch_slider_marker

0x8cd9,	// (0x00046c46) popup_settings_window_ParamLimits

0x8cd9,	// (0x00046c46) popup_settings_window

0xb430,	// (0x0004939d) popup_candi_list_indi_window

0x57f1,	// (0x0004375e) aid_touch_navi_pane_ParamLimits

0xa2b0,	// (0x0004821d) rs_clock_indi_pane

0xa2b9,	// (0x00048226) sctrl_sk_bottom_pane_ParamLimits

0xa2ca,	// (0x00048237) sctrl_sk_top_pane_ParamLimits

0xa3d0,	// (0x0004833d) popup_fep_tooltip_window

0xe743,	// (0x0004c6b0) aid_size_cell_widget_grid_ParamLimits

0xef95,	// (0x0004cf02) cell_ai5_widget_pane_g1_ParamLimits

0xef95,	// (0x0004cf02) cell_ai5_widget_pane_g1

0xefdd,	// (0x0004cf4a) cell_ai5_widget_pane_g6_ParamLimits

0xefe9,	// (0x0004cf56) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfd70,	// (0x0004dcdd) cell_ai5_widget_pane_g_ParamLimits

0xfd70,	// (0x0004dcdd) cell_ai5_widget_pane_g

0xf0ed,	// (0x0004d05a) cell_ai5_widget_pane_t10_ParamLimits

0xf0ed,	// (0x0004d05a) cell_ai5_widget_pane_t10

0xf0ff,	// (0x0004d06c) grid_ai5_widget_pane_ParamLimits

0xe7fa,	// (0x0004c767) cell_contacts_ai5_widget_pane_ParamLimits

0xe7fa,	// (0x0004c767) cell_contacts_ai5_widget_pane

0xe950,	// (0x0004c8bd) popup_discreet_window_t3_ParamLimits

0xe950,	// (0x0004c8bd) popup_discreet_window_t3

0xe9a9,	// (0x0004c916) popup_fshwr2_char_preview_window_ParamLimits

0xe9a9,	// (0x0004c916) popup_fshwr2_char_preview_window

0xf26c,	// (0x0004d1d9) tmo_note_info_pane_t1

0xf281,	// (0x0004d1ee) tmo_note_info_pane_t2

0xf296,	// (0x0004d203) tmo_note_info_pane_t3

0xeb0c,	// (0x0004ca79) tmo_note_info_pane_t4

0xeb1e,	// (0x0004ca8b) tmo_note_info_pane_t5

0x0004,

0xfdcf,	// (0x0004dd3c) tmo_note_info_pane_t

0xeb30,	// (0x0004ca9d) list_tmo_link_pane_ParamLimits

0xeb3d,	// (0x0004caaa) scroll_pane_cp20_ParamLimits

0x42a0,	// (0x0004220d) bg_popup_fep_char_preview_window_cp01

0xeb81,	// (0x0004caee) popup_fshwr2_char_preview_window_t1

0xeb8f,	// (0x0004cafc) popup_candi_list_indi_window_g1

0xeb98,	// (0x0004cb05) bg_cell_contacts_ai5_widget_pane

0xeba4,	// (0x0004cb11) cell_contacts_ai5_widget_pane_g1

0xebb8,	// (0x0004cb25) cell_contacts_ai5_widget_pane_g2

0xebc7,	// (0x0004cb34) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfdda,	// (0x0004dd47) cell_contacts_ai5_widget_pane_g

0xebda,	// (0x0004cb47) cell_contacts_ai5_widget_pane_t1

0x4a45,	// (0x000429b2) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf310,	// (0x0004d27d) settings_container_pane

0x5473,	// (0x000433e0) listscroll_set_pane_copy1

0x717a,	// (0x000450e7) scroll_pane_cp121_copy1

0xebef,	// (0x0004cb5c) set_content_pane_copy1

0xf31c,	// (0x0004d289) aid_height_set_list_copy1_ParamLimits

0xf31c,	// (0x0004d289) aid_height_set_list_copy1

0x63cb,	// (0x00044338) aid_size_parent_copy1_ParamLimits

0x63cb,	// (0x00044338) aid_size_parent_copy1

0xf328,	// (0x0004d295) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf328,	// (0x0004d295) button_value_adjust_pane_cp6_copy1

0x4b9d,	// (0x00042b0a) list_highlight_pane_cp2_copy1_ParamLimits

0x4b9d,	// (0x00042b0a) list_highlight_pane_cp2_copy1

0xf33c,	// (0x0004d2a9) list_set_pane_copy1_ParamLimits

0xf33c,	// (0x0004d2a9) list_set_pane_copy1

0xf2ab,	// (0x0004d218) main_pane_set_t1_copy1_ParamLimits

0xf2ab,	// (0x0004d218) main_pane_set_t1_copy1

0xf2e5,	// (0x0004d252) main_pane_set_t2_copy1_ParamLimits

0xf2e5,	// (0x0004d252) main_pane_set_t2_copy1

0xf3e9,	// (0x0004d356) main_pane_set_t3_copy1

0xf3f7,	// (0x0004d364) main_pane_set_t4_copy1

0xf304,	// (0x0004d271) set_content_pane_g1_copy1_ParamLimits

0xf304,	// (0x0004d271) set_content_pane_g1_copy1

0xf405,	// (0x0004d372) setting_code_pane_copy1

0xebf7,	// (0x0004cb64) setting_slider_graphic_pane_copy1

0xebf7,	// (0x0004cb64) setting_slider_pane_copy1

0xec01,	// (0x0004cb6e) setting_text_pane_copy1

0xec0b,	// (0x0004cb78) setting_volume_pane_copy1

0xf40f,	// (0x0004d37c) settings_code_pane_cp2_copy1

0xf417,	// (0x0004d384) settings_code_pane_cp_copy1_ParamLimits

0xf417,	// (0x0004d384) settings_code_pane_cp_copy1

0xf42b,	// (0x0004d398) volume_set_pane_copy1

0xf433,	// (0x0004d3a0) volume_set_pane_g10_copy1

0xf43b,	// (0x0004d3a8) volume_set_pane_g1_copy1

0xf443,	// (0x0004d3b0) volume_set_pane_g2_copy1

0xf44b,	// (0x0004d3b8) volume_set_pane_g3_copy1

0xf453,	// (0x0004d3c0) volume_set_pane_g4_copy1

0xf45b,	// (0x0004d3c8) volume_set_pane_g5_copy1

0xf463,	// (0x0004d3d0) volume_set_pane_g6_copy1

0xf46b,	// (0x0004d3d8) volume_set_pane_g7_copy1

0xf473,	// (0x0004d3e0) volume_set_pane_g8_copy1

0xf47b,	// (0x0004d3e8) volume_set_pane_g9_copy1

0x4310,	// (0x0004227d) bg_set_opt_pane_cp_copy1_ParamLimits

0x4310,	// (0x0004227d) bg_set_opt_pane_cp_copy1

0xec14,	// (0x0004cb81) setting_slider_pane_t1_copy1_ParamLimits

0xec14,	// (0x0004cb81) setting_slider_pane_t1_copy1

0xf483,	// (0x0004d3f0) setting_slider_pane_t2_copy1_ParamLimits

0xf483,	// (0x0004d3f0) setting_slider_pane_t2_copy1

0xf49d,	// (0x0004d40a) setting_slider_pane_t3_copy1_ParamLimits

0xf49d,	// (0x0004d40a) setting_slider_pane_t3_copy1

0xf4b5,	// (0x0004d422) slider_set_pane_copy1_ParamLimits

0xf4b5,	// (0x0004d422) slider_set_pane_copy1

0x4aac,	// (0x00042a19) set_opt_bg_pane_g1_copy2

0x4ab4,	// (0x00042a21) set_opt_bg_pane_g2_copy2

0xec32,	// (0x0004cb9f) set_opt_bg_pane_g3_copy2

0x4ac4,	// (0x00042a31) set_opt_bg_pane_g4_copy2

0x4acc,	// (0x00042a39) set_opt_bg_pane_g5_copy2

0x4ad4,	// (0x00042a41) set_opt_bg_pane_g6_copy2

0xf4cb,	// (0x0004d438) set_opt_bg_pane_g7_copy2

0xec3c,	// (0x0004cba9) set_opt_bg_pane_g8_copy2

0xec46,	// (0x0004cbb3) set_opt_bg_pane_g9_copy2

0xaaec,	// (0x00048a59) aid_size_touch_slider_mark_copy1_ParamLimits

0xaaec,	// (0x00048a59) aid_size_touch_slider_mark_copy1

0xec50,	// (0x0004cbbd) slider_set_pane_g1_copy1

0xab00,	// (0x00048a6d) slider_set_pane_g2_copy1

0x9ce4,	// (0x00047c51) slider_set_pane_g3_copy1_ParamLimits

0x9ce4,	// (0x00047c51) slider_set_pane_g3_copy1

0x9cf8,	// (0x00047c65) slider_set_pane_g4_copy1_ParamLimits

0x9cf8,	// (0x00047c65) slider_set_pane_g4_copy1

0x9d10,	// (0x00047c7d) slider_set_pane_g5_copy1_ParamLimits

0x9d10,	// (0x00047c7d) slider_set_pane_g5_copy1

0x9ce4,	// (0x00047c51) slider_set_pane_g6_copy1_ParamLimits

0x9ce4,	// (0x00047c51) slider_set_pane_g6_copy1

0xab08,	// (0x00048a75) slider_set_pane_g7_copy1_ParamLimits

0xab08,	// (0x00048a75) slider_set_pane_g7_copy1

0x42b4,	// (0x00042221) bg_set_opt_pane_cp2_copy1

0xec59,	// (0x0004cbc6) setting_slider_graphic_pane_g1_copy1

0xf4d3,	// (0x0004d440) setting_slider_graphic_pane_t1_copy1

0xf4e3,	// (0x0004d450) setting_slider_graphic_pane_t2_copy1

0xf4f3,	// (0x0004d460) slider_set_pane_cp_copy1

0xec6a,	// (0x0004cbd7) input_focus_pane_cp1_copy1

0xec73,	// (0x0004cbe0) list_set_text_pane_copy1

0xec7b,	// (0x0004cbe8) setting_text_pane_g1_copy1

0xbdfd,	// (0x00049d6a) set_text_pane_t1_copy1

0xec6a,	// (0x0004cbd7) input_focus_pane_cp2_copy1

0xec7b,	// (0x0004cbe8) setting_code_pane_g1_copy1

0xf4fb,	// (0x0004d468) setting_code_pane_t1_copy1

0xf509,	// (0x0004d476) list_set_graphic_pane_copy1

0x42b4,	// (0x00042221) bg_set_opt_pane_cp4_copy1

0xb2bc,	// (0x00049229) list_set_graphic_pane_g1_copy1_ParamLimits

0xb2bc,	// (0x00049229) list_set_graphic_pane_g1_copy1

0xf51b,	// (0x0004d488) list_set_graphic_pane_g2_copy1

0xb2d4,	// (0x00049241) list_set_graphic_pane_t1_copy1_ParamLimits

0xb2d4,	// (0x00049241) list_set_graphic_pane_t1_copy1

0x776b,	// (0x000456d8) rs_clock_indi_pane_g1

0xec84,	// (0x0004cbf1) rs_clock_indi_pane_t1

0xe897,	// (0x0004c804) rs_indi_pane

0xec92,	// (0x0004cbff) rs_indi_pane_g1

0xec9b,	// (0x0004cc08) rs_indi_pane_g2

0xeca4,	// (0x0004cc11) rs_indi_pane_g3

0x0002,

0xfde1,	// (0x0004dd4e) rs_indi_pane_g

0x5473,	// (0x000433e0) bg_popup_preview_window_pane_cp03

0xecad,	// (0x0004cc1a) popup_fep_tooltip_window_t1

0xcf45,	// (0x0004aeb2) popup_note2_window_g2_ParamLimits

0xcf45,	// (0x0004aeb2) popup_note2_window_g2

0x0001,

0x00e0,	// (0x0003e04d) popup_note2_window_g_ParamLimits

0x00e0,	// (0x0003e04d) popup_note2_window_g

0xd440,	// (0x0004b3ad) bg_popup_sub_pane_cp11_ParamLimits

0xd44d,	// (0x0004b3ba) cell_ai3_links_pane_g1_ParamLimits

0xd464,	// (0x0004b3d1) cell_ai3_links_pane_t1

0xbdfd,	// (0x00049d6a) set_text_pane_t1_copy1_ParamLimits

0x5384,	// (0x000432f1) cell_graphic_popup_pane_cp2_ParamLimits

0x5384,	// (0x000432f1) cell_graphic_popup_pane_cp2

0xecbb,	// (0x0004cc28) cell_graphic_popup_pane_g1_cp2

0x4666,	// (0x000425d3) cell_graphic_popup_pane_g2_cp2

0xecc3,	// (0x0004cc30) cell_graphic_popup_pane_g3_cp2

0xeccb,	// (0x0004cc38) cell_graphic_popup_pane_t2_cp2

0x4677,	// (0x000425e4) grid_highlight_pane_cp3_cp2

0x4d47,	// (0x00042cb4) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x4a45,	// (0x000429b2) main_tmo_pane_ParamLimits

0xd798,	// (0x0004b705) popup_tmo_big_image_note_window

0xef85,	// (0x0004cef2) cell_ai5_widget_list_pane

0xef8d,	// (0x0004cefa) cell_ai5_widget_lrg_icon_pane

0xf26c,	// (0x0004d1d9) tmo_note_info_pane_t1_ParamLimits

0xf281,	// (0x0004d1ee) tmo_note_info_pane_t2_ParamLimits

0xf296,	// (0x0004d203) tmo_note_info_pane_t3_ParamLimits

0xeb0c,	// (0x0004ca79) tmo_note_info_pane_t4_ParamLimits

0xeb1e,	// (0x0004ca8b) tmo_note_info_pane_t5_ParamLimits

0xfdcf,	// (0x0004dd3c) tmo_note_info_pane_t_ParamLimits

0xf310,	// (0x0004d27d) settings_container_pane_ParamLimits

0xec62,	// (0x0004cbcf) indicator_popup_pane_cp5

0xec62,	// (0x0004cbcf) indicator_popup_pane_cp6

0xf509,	// (0x0004d476) list_set_graphic_pane_copy1_ParamLimits

0x42a0,	// (0x0004220d) bg_popup_window_pane_cp23

0xecd9,	// (0x0004cc46) popup_tmo_big_image_note_window_g1

0xece3,	// (0x0004cc50) popup_tmo_big_image_note_window_t1

0xecf3,	// (0x0004cc60) popup_tmo_big_image_note_window_t2

0xed03,	// (0x0004cc70) popup_tmo_big_image_note_window_t3

0x0002,

0xfde8,	// (0x0004dd55) popup_tmo_big_image_note_window_t

0xf523,	// (0x0004d490) cell_ai5_widget_lrg_icon_pane_g1

0xf52b,	// (0x0004d498) cell_ai5_widget_lrg_icon_pane_t1

0xf539,	// (0x0004d4a6) cell_ai5_widget_list_row_pane_ParamLimits

0xf539,	// (0x0004d4a6) cell_ai5_widget_list_row_pane

0xf552,	// (0x0004d4bf) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf552,	// (0x0004d4bf) cell_ai5_widget_list_row_pane_g1

0xf55f,	// (0x0004d4cc) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf55f,	// (0x0004d4cc) cell_ai5_widget_list_row_pane_t1

0xf577,	// (0x0004d4e4) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf577,	// (0x0004d4e4) cell_ai5_widget_list_row_pane_t2

0x0001,

0x0328,	// (0x0003e295) cell_ai5_widget_list_row_pane_t_ParamLimits

0x0328,	// (0x0003e295) cell_ai5_widget_list_row_pane_t

0x8b90,	// (0x00046afd) main_fep_vtchi_ss_pane

0xed13,	// (0x0004cc80) popup_fep_char_pre_window

0xed1b,	// (0x0004cc88) popup_fep_ituss_window

0xed26,	// (0x0004cc93) popup_fep_vkbss_window

0xed2f,	// (0x0004cc9c) grid_vkbss_keypad_pane_ParamLimits

0xed2f,	// (0x0004cc9c) grid_vkbss_keypad_pane

0xed3f,	// (0x0004ccac) ituss_keypad_pane

0xed47,	// (0x0004ccb4) aid_vkbss_key_offset_ParamLimits

0xed47,	// (0x0004ccb4) aid_vkbss_key_offset

0xed56,	// (0x0004ccc3) cell_vkbss_key_pane_ParamLimits

0xed56,	// (0x0004ccc3) cell_vkbss_key_pane

0xed6c,	// (0x0004ccd9) bg_cell_vkbss_key_g1_ParamLimits

0xed6c,	// (0x0004ccd9) bg_cell_vkbss_key_g1

0xed78,	// (0x0004cce5) cell_vkbss_key_3p_pane_ParamLimits

0xed78,	// (0x0004cce5) cell_vkbss_key_3p_pane

0xed92,	// (0x0004ccff) cell_vkbss_key_g1_ParamLimits

0xed92,	// (0x0004ccff) cell_vkbss_key_g1

0xedac,	// (0x0004cd19) cell_vkbss_key_t1_ParamLimits

0xedac,	// (0x0004cd19) cell_vkbss_key_t1

0xedd7,	// (0x0004cd44) cell_ituss_key_pane_ParamLimits

0xedd7,	// (0x0004cd44) cell_ituss_key_pane

0xede6,	// (0x0004cd53) bg_cell_ituss_key_g1_ParamLimits

0xede6,	// (0x0004cd53) bg_cell_ituss_key_g1

0xedf2,	// (0x0004cd5f) cell_ituss_key_pane_g1_ParamLimits

0xedf2,	// (0x0004cd5f) cell_ituss_key_pane_g1

0xedfe,	// (0x0004cd6b) cell_ituss_key_pane_g2_ParamLimits

0xedfe,	// (0x0004cd6b) cell_ituss_key_pane_g2

0x0001,

0xfdef,	// (0x0004dd5c) cell_ituss_key_pane_g_ParamLimits

0xfdef,	// (0x0004dd5c) cell_ituss_key_pane_g

0xee11,	// (0x0004cd7e) cell_ituss_key_t1_ParamLimits

0xee11,	// (0x0004cd7e) cell_ituss_key_t1

0xee2f,	// (0x0004cd9c) cell_ituss_key_t2_ParamLimits

0xee2f,	// (0x0004cd9c) cell_ituss_key_t2

0xee4e,	// (0x0004cdbb) cell_ituss_key_t3_ParamLimits

0xee4e,	// (0x0004cdbb) cell_ituss_key_t3

0xee6d,	// (0x0004cdda) cell_ituss_key_t4_ParamLimits

0xee6d,	// (0x0004cdda) cell_ituss_key_t4

0x0003,

0xfdf4,	// (0x0004dd61) cell_ituss_key_t_ParamLimits

0xfdf4,	// (0x0004dd61) cell_ituss_key_t

0xee8c,	// (0x0004cdf9) cell_vkbss_key_3p_pane_g1

0xee94,	// (0x0004ce01) cell_vkbss_key_3p_pane_g2

0xee9c,	// (0x0004ce09) cell_vkbss_key_3p_pane_g3

0x0002,

0xfdfd,	// (0x0004dd6a) cell_vkbss_key_3p_pane_g

0x42a0,	// (0x0004220d) bg_popup_fep_char_preview_window_cp02

0xeea4,	// (0x0004ce11) popup_fep_char_pre_window_t1

0xef7b,	// (0x0004cee8) main_ai5_sk_pane

0xeb98,	// (0x0004cb05) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xeba4,	// (0x0004cb11) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xebb8,	// (0x0004cb25) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xebc7,	// (0x0004cb34) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfdda,	// (0x0004dd47) cell_contacts_ai5_widget_pane_g_ParamLimits

0xebda,	// (0x0004cb47) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x4a45,	// (0x000429b2) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf589,	// (0x0004d4f6) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Large
