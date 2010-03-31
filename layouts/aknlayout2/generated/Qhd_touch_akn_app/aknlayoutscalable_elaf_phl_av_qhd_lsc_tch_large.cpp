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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0003eacd };

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
0xcf70,	// (0x0004ba3d) Screen

0xcf7c,	// (0x0004ba49) application_window_ParamLimits

0xcf7c,	// (0x0004ba49) application_window

0x3536,	// (0x00042003) screen_g1

0xbe8f,	// (0x0004a95c) area_bottom_pane_ParamLimits

0xbe8f,	// (0x0004a95c) area_bottom_pane

0x11e7,	// (0x0003fcb4) area_top_pane_ParamLimits

0x11e7,	// (0x0003fcb4) area_top_pane

0x127b,	// (0x0003fd48) main_pane_ParamLimits

0x127b,	// (0x0003fd48) main_pane

0x3540,	// (0x0004200d) misc_graphics

0xd624,	// (0x0004c0f1) battery_pane_ParamLimits

0xd624,	// (0x0004c0f1) battery_pane

0x5bbb,	// (0x00044688) bg_status_flat_pane_g8

0x5bc3,	// (0x00044690) bg_status_flat_pane_g9

0x4fab,	// (0x00043a78) context_pane_ParamLimits

0x4fab,	// (0x00043a78) context_pane

0xd78f,	// (0x0004c25c) navi_pane_ParamLimits

0xd78f,	// (0x0004c25c) navi_pane

0xd80d,	// (0x0004c2da) signal_pane_ParamLimits

0xd80d,	// (0x0004c2da) signal_pane

0x0008,

0xf87f,	// (0x0004e34c) bg_status_flat_pane_g

0xd89d,	// (0x0004c36a) status_pane_g1_ParamLimits

0xd89d,	// (0x0004c36a) status_pane_g1

0xd8b3,	// (0x0004c380) status_pane_g2_ParamLimits

0xd8b3,	// (0x0004c380) status_pane_g2

0x51d2,	// (0x00043c9f) status_pane_g3_ParamLimits

0x51d2,	// (0x00043c9f) status_pane_g3

0x0004,

0xf7ab,	// (0x0004e278) status_pane_g_ParamLimits

0xf7ab,	// (0x0004e278) status_pane_g

0xd8bf,	// (0x0004c38c) title_pane_ParamLimits

0xd8bf,	// (0x0004c38c) title_pane

0xd922,	// (0x0004c3ef) uni_indicator_pane_ParamLimits

0xd922,	// (0x0004c3ef) uni_indicator_pane

0x4e0d,	// (0x000438da) bg_list_pane_ParamLimits

0x4e0d,	// (0x000438da) bg_list_pane

0xd597,	// (0x0004c064) find_pane

0xc240,	// (0x0004ad0d) listscroll_app_pane_ParamLimits

0xc240,	// (0x0004ad0d) listscroll_app_pane

0x4e39,	// (0x00043906) listscroll_form_pane

0xc250,	// (0x0004ad1d) listscroll_gen_pane_ParamLimits

0xc250,	// (0x0004ad1d) listscroll_gen_pane

0x1c2a,	// (0x000406f7) listscroll_set_pane

0x677b,	// (0x00045248) main_idle_act_pane

0x4b13,	// (0x000435e0) main_idle_trad_pane

0x4b13,	// (0x000435e0) main_list_empty_pane

0x4e53,	// (0x00043920) main_midp_pane

0x4e5f,	// (0x0004392c) main_pane_g1_ParamLimits

0x4e5f,	// (0x0004392c) main_pane_g1

0xc264,	// (0x0004ad31) popup_ai_message_window_ParamLimits

0xc264,	// (0x0004ad31) popup_ai_message_window

0xc2f5,	// (0x0004adc2) popup_fep_china_uni_window_ParamLimits

0xc2f5,	// (0x0004adc2) popup_fep_china_uni_window

0x1d34,	// (0x00040801) popup_fep_japan_candidate_window_ParamLimits

0x1d34,	// (0x00040801) popup_fep_japan_candidate_window

0x1d54,	// (0x00040821) popup_fep_japan_predictive_window_ParamLimits

0x1d54,	// (0x00040821) popup_fep_japan_predictive_window

0xc351,	// (0x0004ae1e) popup_find_window

0xc36e,	// (0x0004ae3b) popup_grid_graphic_window_ParamLimits

0xc36e,	// (0x0004ae3b) popup_grid_graphic_window

0x1db9,	// (0x00040886) popup_large_graphic_colour_window

0xc406,	// (0x0004aed3) popup_menu_window_ParamLimits

0xc406,	// (0x0004aed3) popup_menu_window

0xc5d8,	// (0x0004b0a5) popup_note_image_window

0xc59e,	// (0x0004b06b) popup_note_wait_window_ParamLimits

0xc59e,	// (0x0004b06b) popup_note_wait_window

0xc5f0,	// (0x0004b0bd) popup_note_window_ParamLimits

0xc5f0,	// (0x0004b0bd) popup_note_window

0xc696,	// (0x0004b163) popup_query_code_window_ParamLimits

0xc696,	// (0x0004b163) popup_query_code_window

0x2001,	// (0x00040ace) popup_query_data_code_window_ParamLimits

0x2001,	// (0x00040ace) popup_query_data_code_window

0xc6d0,	// (0x0004b19d) popup_query_data_window_ParamLimits

0xc6d0,	// (0x0004b19d) popup_query_data_window

0xc752,	// (0x0004b21f) popup_query_sat_info_window_ParamLimits

0xc752,	// (0x0004b21f) popup_query_sat_info_window

0xc7e9,	// (0x0004b2b6) popup_snote_single_graphic_window_ParamLimits

0xc7e9,	// (0x0004b2b6) popup_snote_single_graphic_window

0xc7e9,	// (0x0004b2b6) popup_snote_single_text_window_ParamLimits

0xc7e9,	// (0x0004b2b6) popup_snote_single_text_window

0x2088,	// (0x00040b55) popup_sub_window_general

0x21b8,	// (0x00040c85) popup_window_general_ParamLimits

0x21b8,	// (0x00040c85) popup_window_general

0x4e6d,	// (0x0004393a) power_save_pane

0xc0cf,	// (0x0004ab9c) control_pane_g1_ParamLimits

0xc0cf,	// (0x0004ab9c) control_pane_g1

0xc0f8,	// (0x0004abc5) control_pane_g2_ParamLimits

0xc0f8,	// (0x0004abc5) control_pane_g2

0x4dd0,	// (0x0004389d) control_pane_g3_ParamLimits

0x4dd0,	// (0x0004389d) control_pane_g3

0x0007,

0xf793,	// (0x0004e260) control_pane_g_ParamLimits

0xf793,	// (0x0004e260) control_pane_g

0xc139,	// (0x0004ac06) control_pane_t1_ParamLimits

0xc139,	// (0x0004ac06) control_pane_t1

0xc197,	// (0x0004ac64) control_pane_t2_ParamLimits

0xc197,	// (0x0004ac64) control_pane_t2

0x0002,

0xf7a4,	// (0x0004e271) control_pane_t_ParamLimits

0xf7a4,	// (0x0004e271) control_pane_t

0x4cf1,	// (0x000437be) navi_navi_volume_pane_cp1

0x4cfa,	// (0x000437c7) status_small_icon_pane

0x4d02,	// (0x000437cf) status_small_pane_g1_ParamLimits

0x4d02,	// (0x000437cf) status_small_pane_g1

0x4d36,	// (0x00043803) status_small_pane_g2_ParamLimits

0x4d36,	// (0x00043803) status_small_pane_g2

0x4d42,	// (0x0004380f) status_small_pane_g3_ParamLimits

0x4d42,	// (0x0004380f) status_small_pane_g3

0x4d4e,	// (0x0004381b) status_small_pane_g4_ParamLimits

0x4d4e,	// (0x0004381b) status_small_pane_g4

0x4d5a,	// (0x00043827) status_small_pane_g5_ParamLimits

0x4d5a,	// (0x00043827) status_small_pane_g5

0x4d69,	// (0x00043836) status_small_pane_g6_ParamLimits

0x4d69,	// (0x00043836) status_small_pane_g6

0x0007,

0xf782,	// (0x0004e24f) status_small_pane_g_ParamLimits

0xf782,	// (0x0004e24f) status_small_pane_g

0x4d99,	// (0x00043866) status_small_pane_t1

0x4dbc,	// (0x00043889) status_small_wait_pane_ParamLimits

0x4dbc,	// (0x00043889) status_small_wait_pane

0xd424,	// (0x0004bef1) aid_levels_signal_ParamLimits

0xd424,	// (0x0004bef1) aid_levels_signal

0xd43c,	// (0x0004bf09) signal_pane_g1_ParamLimits

0xd43c,	// (0x0004bf09) signal_pane_g1

0xd457,	// (0x0004bf24) signal_pane_g2_ParamLimits

0xd457,	// (0x0004bf24) signal_pane_g2

0x0003,

0xf713,	// (0x0004e1e0) signal_pane_g_ParamLimits

0xf713,	// (0x0004e1e0) signal_pane_g

0x45f2,	// (0x000430bf) context_pane_g1

0xcf8c,	// (0x0004ba59) title_pane_g1

0xcfc3,	// (0x0004ba90) title_pane_t1

0x35e8,	// (0x000420b5) title_pane_t2

0x360e,	// (0x000420db) title_pane_t3

0x0002,

0xf55d,	// (0x0004e02a) title_pane_t

0xd94a,	// (0x0004c417) aid_levels_battery_ParamLimits

0xd94a,	// (0x0004c417) aid_levels_battery

0xd966,	// (0x0004c433) battery_pane_g1_ParamLimits

0xd966,	// (0x0004c433) battery_pane_g1

0xd983,	// (0x0004c450) battery_pane_g2_ParamLimits

0xd983,	// (0x0004c450) battery_pane_g2

0x0001,

0xf7b6,	// (0x0004e283) battery_pane_g_ParamLimits

0xf7b6,	// (0x0004e283) battery_pane_g

0xdb52,	// (0x0004c61f) uni_indicator_pane_g1

0xdb69,	// (0x0004c636) uni_indicator_pane_g2

0xdb7f,	// (0x0004c64c) uni_indicator_pane_g3

0x0005,

0xf927,	// (0x0004e3f4) uni_indicator_pane_g

0x4985,	// (0x00043452) navi_icon_pane_ParamLimits

0x4985,	// (0x00043452) navi_icon_pane

0x48ce,	// (0x0004339b) navi_midp_pane

0x49a1,	// (0x0004346e) navi_navi_pane

0x49ab,	// (0x00043478) navi_text_pane_ParamLimits

0x49ab,	// (0x00043478) navi_text_pane

0x3536,	// (0x00042003) status_small_wait_pane_g1

0x3a3d,	// (0x0004250a) status_small_wait_pane_g2

0x0001,

0xf922,	// (0x0004e3ef) status_small_wait_pane_g

0x6216,	// (0x00044ce3) navi_navi_icon_text_pane

0x621e,	// (0x00044ceb) navi_navi_pane_g1_ParamLimits

0x621e,	// (0x00044ceb) navi_navi_pane_g1

0x6230,	// (0x00044cfd) navi_navi_pane_g2_ParamLimits

0x6230,	// (0x00044cfd) navi_navi_pane_g2

0x0001,

0xf8f0,	// (0x0004e3bd) navi_navi_pane_g_ParamLimits

0xf8f0,	// (0x0004e3bd) navi_navi_pane_g

0x6242,	// (0x00044d0f) navi_navi_tabs_pane

0x624b,	// (0x00044d18) navi_navi_text_pane

0x6216,	// (0x00044ce3) navi_navi_volume_pane

0x61f2,	// (0x00044cbf) navi_text_pane_t1

0x61e6,	// (0x00044cb3) navi_icon_pane_g1

0x6139,	// (0x00044c06) navi_navi_text_pane_t1

0x2470,	// (0x00040f3d) navi_navi_volume_pane_g1

0x2478,	// (0x00040f45) volume_small_pane

0x609f,	// (0x00044b6c) navi_navi_icon_text_pane_g1

0x60a7,	// (0x00044b74) navi_navi_icon_text_pane_t1

0x49a1,	// (0x0004346e) navi_tabs_2_long_pane

0x49a1,	// (0x0004346e) navi_tabs_2_pane

0x49a1,	// (0x0004346e) navi_tabs_3_long_pane

0x49a1,	// (0x0004346e) navi_tabs_3_pane

0x49a1,	// (0x0004346e) navi_tabs_4_pane

0x2450,	// (0x00040f1d) tabs_2_active_pane_ParamLimits

0x2450,	// (0x00040f1d) tabs_2_active_pane

0x2460,	// (0x00040f2d) tabs_2_passive_pane_ParamLimits

0x2460,	// (0x00040f2d) tabs_2_passive_pane

0x241e,	// (0x00040eeb) tabs_3_active_pane_ParamLimits

0x241e,	// (0x00040eeb) tabs_3_active_pane

0x242e,	// (0x00040efb) tabs_3_passive_pane_ParamLimits

0x242e,	// (0x00040efb) tabs_3_passive_pane

0x243f,	// (0x00040f0c) tabs_3_passive_pane_cp_ParamLimits

0x243f,	// (0x00040f0c) tabs_3_passive_pane_cp

0x23da,	// (0x00040ea7) tabs_4_active_pane_ParamLimits

0x23da,	// (0x00040ea7) tabs_4_active_pane

0x23eb,	// (0x00040eb8) tabs_4_passive_pane_ParamLimits

0x23eb,	// (0x00040eb8) tabs_4_passive_pane

0x23fc,	// (0x00040ec9) tabs_4_passive_pane_cp_ParamLimits

0x23fc,	// (0x00040ec9) tabs_4_passive_pane_cp

0x240d,	// (0x00040eda) tabs_4_passive_pane_cp2_ParamLimits

0x240d,	// (0x00040eda) tabs_4_passive_pane_cp2

0x23b6,	// (0x00040e83) tabs_2_long_active_pane_ParamLimits

0x23b6,	// (0x00040e83) tabs_2_long_active_pane

0x23c8,	// (0x00040e95) tabs_2_long_passive_pane_ParamLimits

0x23c8,	// (0x00040e95) tabs_2_long_passive_pane

0x2377,	// (0x00040e44) tabs_3_long_active_pane_ParamLimits

0x2377,	// (0x00040e44) tabs_3_long_active_pane

0x238a,	// (0x00040e57) tabs_3_long_passive_pane_ParamLimits

0x238a,	// (0x00040e57) tabs_3_long_passive_pane

0x23a3,	// (0x00040e70) tabs_3_long_passive_pane_cp_ParamLimits

0x23a3,	// (0x00040e70) tabs_3_long_passive_pane_cp

0x231d,	// (0x00040dea) volume_small_pane_g1

0x2326,	// (0x00040df3) volume_small_pane_g2

0x232f,	// (0x00040dfc) volume_small_pane_g3

0x2338,	// (0x00040e05) volume_small_pane_g4

0x2341,	// (0x00040e0e) volume_small_pane_g5

0x234a,	// (0x00040e17) volume_small_pane_g6

0x2353,	// (0x00040e20) volume_small_pane_g7

0x235c,	// (0x00040e29) volume_small_pane_g8

0x2365,	// (0x00040e32) volume_small_pane_g9

0x236e,	// (0x00040e3b) volume_small_pane_g10

0x0009,

0xf8bc,	// (0x0004e389) volume_small_pane_g

0x389b,	// (0x00042368) bg_active_tab_pane_cp2_ParamLimits

0x389b,	// (0x00042368) bg_active_tab_pane_cp2

0x362e,	// (0x000420fb) tabs_3_active_pane_g1

0xd04f,	// (0x0004bb1c) tabs_3_active_pane_t1

0x389b,	// (0x00042368) bg_passive_tab_pane_cp2_ParamLimits

0x389b,	// (0x00042368) bg_passive_tab_pane_cp2

0x362e,	// (0x000420fb) tabs_3_passive_pane_g1

0xd04f,	// (0x0004bb1c) tabs_3_passive_pane_t1

0x389b,	// (0x00042368) bg_active_tab_pane_cp3_ParamLimits

0x389b,	// (0x00042368) bg_active_tab_pane_cp3

0x3648,	// (0x00042115) tabs_4_active_pane_g1

0xd061,	// (0x0004bb2e) tabs_4_active_pane_t1

0x389b,	// (0x00042368) bg_passive_tab_pane_cp3_ParamLimits

0x389b,	// (0x00042368) bg_passive_tab_pane_cp3

0x3648,	// (0x00042115) tabs_4_1_passive_pane_g1

0xd061,	// (0x0004bb2e) tabs_4_1_passive_pane_t1

0x4e53,	// (0x00043920) list_highlight_pane_cp2

0xdc07,	// (0x0004c6d4) list_set_pane_ParamLimits

0xdc07,	// (0x0004c6d4) list_set_pane

0xdca1,	// (0x0004c76e) main_pane_set_t1_ParamLimits

0xdca1,	// (0x0004c76e) main_pane_set_t1

0xdcc1,	// (0x0004c78e) main_pane_set_t2_ParamLimits

0xdcc1,	// (0x0004c78e) main_pane_set_t2

0xdcd5,	// (0x0004c7a2) main_pane_set_t3_ParamLimits

0xdcd5,	// (0x0004c7a2) main_pane_set_t3

0xdce7,	// (0x0004c7b4) main_pane_set_t4_ParamLimits

0xdce7,	// (0x0004c7b4) main_pane_set_t4

0x0003,

0xf98c,	// (0x0004e459) main_pane_set_t_ParamLimits

0xf98c,	// (0x0004e459) main_pane_set_t

0xdcf9,	// (0x0004c7c6) setting_code_pane

0xdd03,	// (0x0004c7d0) setting_slider_graphic_pane

0xdd03,	// (0x0004c7d0) setting_slider_pane

0xdd03,	// (0x0004c7d0) setting_text_pane

0xdd03,	// (0x0004c7d0) setting_volume_pane

0x14ca,	// (0x0003ff97) volume_set_pane

0x3620,	// (0x000420ed) bg_set_opt_pane_cp

0x14d2,	// (0x0003ff9f) setting_slider_pane_t1

0x14eb,	// (0x0003ffb8) setting_slider_pane_t2

0x1505,	// (0x0003ffd2) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0004e031) setting_slider_pane_t

0x151d,	// (0x0003ffea) slider_set_pane

0x3540,	// (0x0004200d) bg_set_opt_pane_cp2

0x3662,	// (0x0004212f) setting_slider_graphic_pane_g1

0x1533,	// (0x00040000) setting_slider_graphic_pane_t1

0x1543,	// (0x00040010) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0004e038) setting_slider_graphic_pane_t

0x1553,	// (0x00040020) slider_set_pane_cp

0x3540,	// (0x0004200d) input_focus_pane_cp1

0x6762,	// (0x0004522f) list_set_text_pane

0x3536,	// (0x00042003) setting_text_pane_g1

0x3540,	// (0x0004200d) input_focus_pane_cp2

0x3536,	// (0x00042003) setting_code_pane_g1

0x366b,	// (0x00042138) setting_code_pane_t1

0x01f6,	// (0x0003ecc3) set_text_pane_t1_ParamLimits

0x01f6,	// (0x0003ecc3) set_text_pane_t1

0x3ee7,	// (0x000429b4) set_opt_bg_pane_g1

0x3eef,	// (0x000429bc) set_opt_bg_pane_g2

0x673c,	// (0x00045209) set_opt_bg_pane_g3

0x3eff,	// (0x000429cc) set_opt_bg_pane_g4

0x3f07,	// (0x000429d4) set_opt_bg_pane_g5

0x3f0f,	// (0x000429dc) set_opt_bg_pane_g6

0x6746,	// (0x00045213) set_opt_bg_pane_g7

0x674e,	// (0x0004521b) set_opt_bg_pane_g8

0x6758,	// (0x00045225) set_opt_bg_pane_g9

0x0008,

0xf979,	// (0x0004e446) set_opt_bg_pane_g

0x66ed,	// (0x000451ba) slider_set_pane_g1

0x24e5,	// (0x00040fb2) slider_set_pane_g2

0x0006,

0xf96a,	// (0x0004e437) slider_set_pane_g

0x2481,	// (0x00040f4e) volume_set_pane_g1

0x2489,	// (0x00040f56) volume_set_pane_g2

0x2491,	// (0x00040f5e) volume_set_pane_g3

0x2499,	// (0x00040f66) volume_set_pane_g4

0x24a1,	// (0x00040f6e) volume_set_pane_g5

0x24a9,	// (0x00040f76) volume_set_pane_g6

0x24b1,	// (0x00040f7e) volume_set_pane_g7

0x24b9,	// (0x00040f86) volume_set_pane_g8

0x24c1,	// (0x00040f8e) volume_set_pane_g9

0x24c9,	// (0x00040f96) volume_set_pane_g10

0x0009,

0xf942,	// (0x0004e40f) volume_set_pane_g

0xd073,	// (0x0004bb40) indicator_pane_ParamLimits

0xd073,	// (0x0004bb40) indicator_pane

0xd09b,	// (0x0004bb68) main_idle_pane_g2_ParamLimits

0xd09b,	// (0x0004bb68) main_idle_pane_g2

0xd0d3,	// (0x0004bba0) main_pane_idle_g1_ParamLimits

0xd0d3,	// (0x0004bba0) main_pane_idle_g1

0x36ba,	// (0x00042187) popup_clock_digital_analogue_window_ParamLimits

0x36ba,	// (0x00042187) popup_clock_digital_analogue_window

0xd0fa,	// (0x0004bbc7) soft_indicator_pane_ParamLimits

0xd0fa,	// (0x0004bbc7) soft_indicator_pane

0xd114,	// (0x0004bbe1) wallpaper_pane_ParamLimits

0xd114,	// (0x0004bbe1) wallpaper_pane

0x3536,	// (0x00042003) wallpaper_pane_g1

0xd126,	// (0x0004bbf3) indicator_pane_g1_ParamLimits

0xd126,	// (0x0004bbf3) indicator_pane_g1

0x6b05,	// (0x000455d2) navi_navi_icon_text_pane_srt_g1

0x370c,	// (0x000421d9) soft_indicator_pane_t1

0x3726,	// (0x000421f3) aid_ps_area_pane

0xd13c,	// (0x0004bc09) aid_ps_clock_pane

0x3745,	// (0x00042212) aid_ps_indicator_pane

0x3751,	// (0x0004221e) indicator_ps_pane_ParamLimits

0x3751,	// (0x0004221e) indicator_ps_pane

0x3760,	// (0x0004222d) power_save_pane_g1_ParamLimits

0x3760,	// (0x0004222d) power_save_pane_g1

0x376c,	// (0x00042239) power_save_pane_g2_ParamLimits

0x376c,	// (0x00042239) power_save_pane_g2

0x10db,	// (0x0003fba8) aid_navinavi_width_pane

0x3726,	// (0x000421f3) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0004e03d) power_save_pane_g_ParamLimits

0xf570,	// (0x0004e03d) power_save_pane_g

0x377a,	// (0x00042247) power_save_pane_t1_ParamLimits

0x377a,	// (0x00042247) power_save_pane_t1

0xd13c,	// (0x0004bc09) aid_ps_clock_pane_ParamLimits

0x3745,	// (0x00042212) aid_ps_indicator_pane_ParamLimits

0x378c,	// (0x00042259) power_save_pane_t4_ParamLimits

0x378c,	// (0x00042259) power_save_pane_t4

0x0001,

0xf575,	// (0x0004e042) power_save_pane_t_ParamLimits

0xf575,	// (0x0004e042) power_save_pane_t

0x37b6,	// (0x00042283) power_save_t3_ParamLimits

0x37b6,	// (0x00042283) power_save_t3

0x37a1,	// (0x0004226e) power_save_t2_ParamLimits

0x37a1,	// (0x0004226e) power_save_t2

0x37cb,	// (0x00042298) indicator_ps_pane_g1

0xd14a,	// (0x0004bc17) ai_gene_pane_ParamLimits

0xd14a,	// (0x0004bc17) ai_gene_pane

0xd161,	// (0x0004bc2e) ai_links_pane_ParamLimits

0xd161,	// (0x0004bc2e) ai_links_pane

0xd179,	// (0x0004bc46) indicator_pane_cp1_ParamLimits

0xd179,	// (0x0004bc46) indicator_pane_cp1

0xd188,	// (0x0004bc55) main_pane_idle_g1_cp_ParamLimits

0xd188,	// (0x0004bc55) main_pane_idle_g1_cp

0x3804,	// (0x000422d1) popup_ai_links_title_window

0xd1a0,	// (0x0004bc6d) soft_indicator_pane_cp1_ParamLimits

0xd1a0,	// (0x0004bc6d) soft_indicator_pane_cp1

0x64df,	// (0x00044fac) ai_links_pane_g1

0x64e8,	// (0x00044fb5) grid_ai_links_pane

0xdb49,	// (0x0004c616) ai_gene_pane_1

0x64cd,	// (0x00044f9a) ai_gene_pane_2

0x64d6,	// (0x00044fa3) list_highlight_pane_cp4

0xdb25,	// (0x0004c5f2) cell_ai_link_pane_ParamLimits

0xdb25,	// (0x0004c5f2) cell_ai_link_pane

0x649e,	// (0x00044f6b) cell_ai_link_pane_g1

0x3a3d,	// (0x0004250a) cell_ai_link_pane_g2

0x0001,

0xf91d,	// (0x0004e3ea) cell_ai_link_pane_g

0x3540,	// (0x0004200d) grid_highlight_cp2

0x3540,	// (0x0004200d) bg_popup_sub_pane_cp1

0x3827,	// (0x000422f4) popup_ai_links_title_window_t1

0x63ec,	// (0x00044eb9) ai_gene_pane_1_g1_ParamLimits

0x63ec,	// (0x00044eb9) ai_gene_pane_1_g1

0x63f8,	// (0x00044ec5) ai_gene_pane_1_g2_ParamLimits

0x63f8,	// (0x00044ec5) ai_gene_pane_1_g2

0x0001,

0xf913,	// (0x0004e3e0) ai_gene_pane_1_g_ParamLimits

0xf913,	// (0x0004e3e0) ai_gene_pane_1_g

0x6405,	// (0x00044ed2) ai_gene_pane_1_t1_ParamLimits

0x6405,	// (0x00044ed2) ai_gene_pane_1_t1

0x6439,	// (0x00044f06) grid_ai_soft_ind_pane

0x63d7,	// (0x00044ea4) ai_gene_pane_2_t1_ParamLimits

0x63d7,	// (0x00044ea4) ai_gene_pane_2_t1

0xd1b4,	// (0x0004bc81) main_pane_empty_t1_ParamLimits

0xd1b4,	// (0x0004bc81) main_pane_empty_t1

0xd1cc,	// (0x0004bc99) main_pane_empty_t2_ParamLimits

0xd1cc,	// (0x0004bc99) main_pane_empty_t2

0xd1e1,	// (0x0004bcae) main_pane_empty_t3_ParamLimits

0xd1e1,	// (0x0004bcae) main_pane_empty_t3

0xd1f3,	// (0x0004bcc0) main_pane_empty_t4_ParamLimits

0xd1f3,	// (0x0004bcc0) main_pane_empty_t4

0xd205,	// (0x0004bcd2) main_pane_empty_t5_ParamLimits

0xd205,	// (0x0004bcd2) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0004e047) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0004e047) main_pane_empty_t

0x3f38,	// (0x00042a05) bg_popup_window_pane_ParamLimits

0x3f38,	// (0x00042a05) bg_popup_window_pane

0x6147,	// (0x00044c14) find_popup_pane_cp2_ParamLimits

0x6147,	// (0x00044c14) find_popup_pane_cp2

0x6153,	// (0x00044c20) heading_pane_ParamLimits

0x6153,	// (0x00044c20) heading_pane

0x3540,	// (0x0004200d) bg_popup_sub_pane

0xdaa6,	// (0x0004c573) bg_popup_window_pane_g1_ParamLimits

0xdaa6,	// (0x0004c573) bg_popup_window_pane_g1

0xdab5,	// (0x0004c582) bg_popup_window_pane_g2_ParamLimits

0xdab5,	// (0x0004c582) bg_popup_window_pane_g2

0xdac1,	// (0x0004c58e) bg_popup_window_pane_g3_ParamLimits

0xdac1,	// (0x0004c58e) bg_popup_window_pane_g3

0xdacd,	// (0x0004c59a) bg_popup_window_pane_g4_ParamLimits

0xdacd,	// (0x0004c59a) bg_popup_window_pane_g4

0xdadc,	// (0x0004c5a9) bg_popup_window_pane_g5_ParamLimits

0xdadc,	// (0x0004c5a9) bg_popup_window_pane_g5

0xdaec,	// (0x0004c5b9) bg_popup_window_pane_g6_ParamLimits

0xdaec,	// (0x0004c5b9) bg_popup_window_pane_g6

0xdaf8,	// (0x0004c5c5) bg_popup_window_pane_g7_ParamLimits

0xdaf8,	// (0x0004c5c5) bg_popup_window_pane_g7

0xdb07,	// (0x0004c5d4) bg_popup_window_pane_g8_ParamLimits

0xdb07,	// (0x0004c5d4) bg_popup_window_pane_g8

0xdb16,	// (0x0004c5e3) bg_popup_window_pane_g9_ParamLimits

0xdb16,	// (0x0004c5e3) bg_popup_window_pane_g9

0x612d,	// (0x00044bfa) bg_popup_window_pane_g10_ParamLimits

0x612d,	// (0x00044bfa) bg_popup_window_pane_g10

0x0009,

0xf8db,	// (0x0004e3a8) bg_popup_window_pane_g_ParamLimits

0xf8db,	// (0x0004e3a8) bg_popup_window_pane_g

0x6056,	// (0x00044b23) bg_popup_heading_pane_ParamLimits

0x6056,	// (0x00044b23) bg_popup_heading_pane

0x25c1,	// (0x0004108e) tabs_4_passive_pane_cp_srt_ParamLimits

0x25c1,	// (0x0004108e) tabs_4_passive_pane_cp_srt

0x25d3,	// (0x000410a0) tabs_4_passive_pane_srt_ParamLimits

0x606a,	// (0x00044b37) heading_pane_g2

0x25d3,	// (0x000410a0) tabs_4_passive_pane_srt

0x53d1,	// (0x00043e9e) bg_passive_tab_pane_cp3_srt_ParamLimits

0x53d1,	// (0x00043e9e) bg_passive_tab_pane_cp3_srt

0x6072,	// (0x00044b3f) heading_pane_t1_ParamLimits

0x6072,	// (0x00044b3f) heading_pane_t1

0x6089,	// (0x00044b56) heading_pane_t2_ParamLimits

0x6089,	// (0x00044b56) heading_pane_t2

0x0001,

0xf8d6,	// (0x0004e3a3) heading_pane_t_ParamLimits

0xf8d6,	// (0x0004e3a3) heading_pane_t

0x5b83,	// (0x00044650) bg_popup_heading_pane_g1

0x5c32,	// (0x000446ff) bg_popup_heading_pane_g2

0x5c3c,	// (0x00044709) bg_popup_heading_pane_g3

0x5c46,	// (0x00044713) bg_popup_heading_pane_g4

0x5c50,	// (0x0004471d) bg_popup_heading_pane_g5

0x5c5a,	// (0x00044727) bg_popup_heading_pane_g6

0x5c62,	// (0x0004472f) bg_popup_heading_pane_g7

0x5c6a,	// (0x00044737) bg_popup_heading_pane_g8

0x5c74,	// (0x00044741) bg_popup_heading_pane_g9

0x0008,

0xf892,	// (0x0004e35f) bg_popup_heading_pane_g

0x535d,	// (0x00043e2a) bg_popup_sub_pane_g1

0x5365,	// (0x00043e32) bg_popup_sub_pane_g2

0x536d,	// (0x00043e3a) bg_popup_sub_pane_g3

0x5375,	// (0x00043e42) bg_popup_sub_pane_g4

0x537d,	// (0x00043e4a) bg_popup_sub_pane_g5

0x5385,	// (0x00043e52) bg_popup_sub_pane_g6

0x538d,	// (0x00043e5a) bg_popup_sub_pane_g7

0x5395,	// (0x00043e62) bg_popup_sub_pane_g8

0x539d,	// (0x00043e6a) bg_popup_sub_pane_g9

0x0008,

0xf86c,	// (0x0004e339) bg_popup_sub_pane_g

0x389b,	// (0x00042368) bg_popup_window_pane_cp5_ParamLimits

0x389b,	// (0x00042368) bg_popup_window_pane_cp5

0x38b7,	// (0x00042384) popup_note_window_g1_ParamLimits

0x38b7,	// (0x00042384) popup_note_window_g1

0x38c3,	// (0x00042390) popup_note_window_t1_ParamLimits

0x38c3,	// (0x00042390) popup_note_window_t1

0x38d9,	// (0x000423a6) popup_note_window_t2_ParamLimits

0x38d9,	// (0x000423a6) popup_note_window_t2

0x38ef,	// (0x000423bc) popup_note_window_t3_ParamLimits

0x38ef,	// (0x000423bc) popup_note_window_t3

0x3905,	// (0x000423d2) popup_note_window_t4_ParamLimits

0x3905,	// (0x000423d2) popup_note_window_t4

0x392d,	// (0x000423fa) popup_note_window_t5_ParamLimits

0x392d,	// (0x000423fa) popup_note_window_t5

0x0004,

0xf585,	// (0x0004e052) popup_note_window_t_ParamLimits

0xf585,	// (0x0004e052) popup_note_window_t

0x3951,	// (0x0004241e) bg_popup_window_pane_cp6_ParamLimits

0x3951,	// (0x0004241e) bg_popup_window_pane_cp6

0x5aff,	// (0x000445cc) popup_note_image_window_g1_ParamLimits

0x5aff,	// (0x000445cc) popup_note_image_window_g1

0x5b0b,	// (0x000445d8) popup_note_image_window_g2_ParamLimits

0x5b0b,	// (0x000445d8) popup_note_image_window_g2

0x0001,

0xf860,	// (0x0004e32d) popup_note_image_window_g_ParamLimits

0xf860,	// (0x0004e32d) popup_note_image_window_g

0x5b24,	// (0x000445f1) popup_note_image_window_t1_ParamLimits

0x5b24,	// (0x000445f1) popup_note_image_window_t1

0x5b3d,	// (0x0004460a) popup_note_image_window_t2_ParamLimits

0x5b3d,	// (0x0004460a) popup_note_image_window_t2

0x5b56,	// (0x00044623) popup_note_image_window_t3_ParamLimits

0x5b56,	// (0x00044623) popup_note_image_window_t3

0x0002,

0xf865,	// (0x0004e332) popup_note_image_window_t_ParamLimits

0xf865,	// (0x0004e332) popup_note_image_window_t

0x59c0,	// (0x0004448d) bg_popup_window_pane_cp7_ParamLimits

0x59c0,	// (0x0004448d) bg_popup_window_pane_cp7

0x59f0,	// (0x000444bd) popup_note_wait_window_g1_ParamLimits

0x59f0,	// (0x000444bd) popup_note_wait_window_g1

0x59fc,	// (0x000444c9) popup_note_wait_window_g2_ParamLimits

0x59fc,	// (0x000444c9) popup_note_wait_window_g2

0x0002,

0xf84e,	// (0x0004e31b) popup_note_wait_window_g_ParamLimits

0xf84e,	// (0x0004e31b) popup_note_wait_window_g

0x5a14,	// (0x000444e1) popup_note_wait_window_t1_ParamLimits

0x5a14,	// (0x000444e1) popup_note_wait_window_t1

0x5a3b,	// (0x00044508) popup_note_wait_window_t2_ParamLimits

0x5a3b,	// (0x00044508) popup_note_wait_window_t2

0x5a58,	// (0x00044525) popup_note_wait_window_t3_ParamLimits

0x5a58,	// (0x00044525) popup_note_wait_window_t3

0x5a6b,	// (0x00044538) popup_note_wait_window_t4_ParamLimits

0x5a6b,	// (0x00044538) popup_note_wait_window_t4

0x0004,

0xf855,	// (0x0004e322) popup_note_wait_window_t_ParamLimits

0xf855,	// (0x0004e322) popup_note_wait_window_t

0x5a90,	// (0x0004455d) wait_bar_pane_ParamLimits

0x5a90,	// (0x0004455d) wait_bar_pane

0x3540,	// (0x0004200d) wait_anim_pane

0x3540,	// (0x0004200d) wait_border_pane

0x3536,	// (0x00042003) wait_anim_pane_g1

0x3536,	// (0x00042003) wait_anim_pane_g2

0x0001,

0xf70e,	// (0x0004e1db) wait_anim_pane_g

0x5964,	// (0x00044431) wait_border_pane_g1

0x596f,	// (0x0004443c) wait_border_pane_g2

0x5978,	// (0x00044445) wait_border_pane_g3

0x0002,

0xf847,	// (0x0004e314) wait_border_pane_g

0x57cf,	// (0x0004429c) bg_popup_window_pane_cp16_ParamLimits

0x57cf,	// (0x0004429c) bg_popup_window_pane_cp16

0x58cf,	// (0x0004439c) indicator_popup_pane_cp4_ParamLimits

0x58cf,	// (0x0004439c) indicator_popup_pane_cp4

0x58e3,	// (0x000443b0) popup_query_data_window_t1_ParamLimits

0x58e3,	// (0x000443b0) popup_query_data_window_t1

0x58f5,	// (0x000443c2) popup_query_data_window_t2_ParamLimits

0x58f5,	// (0x000443c2) popup_query_data_window_t2

0x590e,	// (0x000443db) popup_query_data_window_t3_ParamLimits

0x590e,	// (0x000443db) popup_query_data_window_t3

0x0002,

0xf840,	// (0x0004e30d) popup_query_data_window_t_ParamLimits

0xf840,	// (0x0004e30d) popup_query_data_window_t

0x5928,	// (0x000443f5) query_popup_data_pane_ParamLimits

0x5928,	// (0x000443f5) query_popup_data_pane

0x593c,	// (0x00044409) query_popup_data_pane_cp1_ParamLimits

0x593c,	// (0x00044409) query_popup_data_pane_cp1

0x57cf,	// (0x0004429c) bg_popup_window_pane_cp10_ParamLimits

0x57cf,	// (0x0004429c) bg_popup_window_pane_cp10

0x5801,	// (0x000442ce) indicator_popup_pane_ParamLimits

0x5801,	// (0x000442ce) indicator_popup_pane

0x5823,	// (0x000442f0) popup_query_code_window_t1_ParamLimits

0x5823,	// (0x000442f0) popup_query_code_window_t1

0x583d,	// (0x0004430a) popup_query_code_window_t2_ParamLimits

0x583d,	// (0x0004430a) popup_query_code_window_t2

0x5886,	// (0x00044353) popup_query_code_window_t3_ParamLimits

0x5886,	// (0x00044353) popup_query_code_window_t3

0x0002,

0xf839,	// (0x0004e306) popup_query_code_window_t_ParamLimits

0xf839,	// (0x0004e306) popup_query_code_window_t

0x58b5,	// (0x00044382) query_popup_pane_ParamLimits

0x58b5,	// (0x00044382) query_popup_pane

0x3951,	// (0x0004241e) bg_popup_window_pane_cp15_ParamLimits

0x3951,	// (0x0004241e) bg_popup_window_pane_cp15

0x396f,	// (0x0004243c) indicator_popup_pane_cp1_ParamLimits

0x396f,	// (0x0004243c) indicator_popup_pane_cp1

0x3982,	// (0x0004244f) indicator_popup_pane_cp2_ParamLimits

0x3982,	// (0x0004244f) indicator_popup_pane_cp2

0x3995,	// (0x00042462) popup_query_data_code_window_g1_ParamLimits

0x3995,	// (0x00042462) popup_query_data_code_window_g1

0x39a8,	// (0x00042475) popup_query_data_code_window_t1_ParamLimits

0x39a8,	// (0x00042475) popup_query_data_code_window_t1

0x39ba,	// (0x00042487) popup_query_data_code_window_t2_ParamLimits

0x39ba,	// (0x00042487) popup_query_data_code_window_t2

0x39cc,	// (0x00042499) popup_query_data_code_window_t3_ParamLimits

0x39cc,	// (0x00042499) popup_query_data_code_window_t3

0x39e2,	// (0x000424af) popup_query_data_code_window_t4_ParamLimits

0x39e2,	// (0x000424af) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0004e05d) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0004e05d) popup_query_data_code_window_t

0x222e,	// (0x00040cfb) list_single_midp_graphic_pane_g3

0x39fa,	// (0x000424c7) query_popup_data_pane_cp2_ParamLimits

0x3a0d,	// (0x000424da) query_popup_pane_cp2_ParamLimits

0x3a0d,	// (0x000424da) query_popup_pane_cp2

0x3540,	// (0x0004200d) bg_popup_window_pane_cp11

0x57c7,	// (0x00044294) heading_pane_cp5

0x3af5,	// (0x000425c2) listscroll_popup_info_pane

0x3540,	// (0x0004200d) input_focus_pane_cp3

0x3a20,	// (0x000424ed) query_popup_pane_t1

0x3a2e,	// (0x000424fb) list_popup_info_pane_ParamLimits

0x3a2e,	// (0x000424fb) list_popup_info_pane

0x3a3d,	// (0x0004250a) listscroll_popup_info_pane_g1

0x3a45,	// (0x00042512) scroll_pane_cp7

0x3a4f,	// (0x0004251c) popup_info_list_pane_t1_ParamLimits

0x3a4f,	// (0x0004251c) popup_info_list_pane_t1

0x3a69,	// (0x00042536) popup_info_list_pane_t2_ParamLimits

0x3a69,	// (0x00042536) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0004e066) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0004e066) popup_info_list_pane_t

0x3540,	// (0x0004200d) bg_popup_window_pane_cp12

0x6b1f,	// (0x000455ec) find_popup_pane

0x3620,	// (0x000420ed) bg_popup_window_pane_cp3

0x3a83,	// (0x00042550) heading_pane_cp3

0x3a8f,	// (0x0004255c) listscroll_popup_graphic_pane

0x3540,	// (0x0004200d) bg_popup_window_pane_cp4

0xd267,	// (0x0004bd34) heading_pane_cp4

0x3af5,	// (0x000425c2) listscroll_popup_colour_pane

0x3afd,	// (0x000425ca) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3afd,	// (0x000425ca) cell_large_graphic_colour_none_popup_pane

0xd26f,	// (0x0004bd3c) grid_large_graphic_colour_popup_pane_ParamLimits

0xd26f,	// (0x0004bd3c) grid_large_graphic_colour_popup_pane

0x3b3d,	// (0x0004260a) listscroll_popup_colour_pane_g1_ParamLimits

0x3b3d,	// (0x0004260a) listscroll_popup_colour_pane_g1

0x3b54,	// (0x00042621) listscroll_popup_colour_pane_g2_ParamLimits

0x3b54,	// (0x00042621) listscroll_popup_colour_pane_g2

0x3b6b,	// (0x00042638) listscroll_popup_colour_pane_g3_ParamLimits

0x3b6b,	// (0x00042638) listscroll_popup_colour_pane_g3

0xd293,	// (0x0004bd60) listscroll_popup_colour_pane_g4_ParamLimits

0xd293,	// (0x0004bd60) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0004e06b) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0004e06b) listscroll_popup_colour_pane_g

0x3b8f,	// (0x0004265c) scroll_pane_cp6_ParamLimits

0x3b8f,	// (0x0004265c) scroll_pane_cp6

0xd2a3,	// (0x0004bd70) cell_large_graphic_colour_popup_pane_ParamLimits

0xd2a3,	// (0x0004bd70) cell_large_graphic_colour_popup_pane

0x3bc0,	// (0x0004268d) cell_large_graphic_colour_none_popup_pane_t1

0x3540,	// (0x0004200d) grid_highlight_pane_cp5

0x3bcf,	// (0x0004269c) cell_large_graphic_colour_popup_pane_g1

0x3bd7,	// (0x000426a4) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0004e074) cell_large_graphic_colour_popup_pane_g

0x3bdf,	// (0x000426ac) cell_large_graphic_colour_popup_pane_g2_copy1

0x3be8,	// (0x000426b5) grid_highlight_pane_cp4

0x3bf0,	// (0x000426bd) bg_popup_window_pane_cp8_ParamLimits

0x3bf0,	// (0x000426bd) bg_popup_window_pane_cp8

0x3c0b,	// (0x000426d8) popup_snote_single_text_window_g1_ParamLimits

0x3c0b,	// (0x000426d8) popup_snote_single_text_window_g1

0x3c1d,	// (0x000426ea) popup_snote_single_text_window_t1_ParamLimits

0x3c1d,	// (0x000426ea) popup_snote_single_text_window_t1

0x3c30,	// (0x000426fd) popup_snote_single_text_window_t2_ParamLimits

0x3c30,	// (0x000426fd) popup_snote_single_text_window_t2

0x3c43,	// (0x00042710) popup_snote_single_text_window_t3_ParamLimits

0x3c43,	// (0x00042710) popup_snote_single_text_window_t3

0x3c7c,	// (0x00042749) popup_snote_single_text_window_t4_ParamLimits

0x3c7c,	// (0x00042749) popup_snote_single_text_window_t4

0x3cb0,	// (0x0004277d) popup_snote_single_text_window_t5_ParamLimits

0x3cb0,	// (0x0004277d) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0004e079) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0004e079) popup_snote_single_text_window_t

0x3cdf,	// (0x000427ac) bg_popup_window_pane_cp9_ParamLimits

0x3cdf,	// (0x000427ac) bg_popup_window_pane_cp9

0x3c0b,	// (0x000426d8) popup_snote_single_graphic_window_g1_ParamLimits

0x3c0b,	// (0x000426d8) popup_snote_single_graphic_window_g1

0x3ced,	// (0x000427ba) popup_snote_single_graphic_window_g2_ParamLimits

0x3ced,	// (0x000427ba) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0004e084) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0004e084) popup_snote_single_graphic_window_g

0x3cf9,	// (0x000427c6) popup_snote_single_graphic_window_t1_ParamLimits

0x3cf9,	// (0x000427c6) popup_snote_single_graphic_window_t1

0x3d0c,	// (0x000427d9) popup_snote_single_graphic_window_t2_ParamLimits

0x3d0c,	// (0x000427d9) popup_snote_single_graphic_window_t2

0x3d1f,	// (0x000427ec) popup_snote_single_graphic_window_t3_ParamLimits

0x3d1f,	// (0x000427ec) popup_snote_single_graphic_window_t3

0x3d58,	// (0x00042825) popup_snote_single_graphic_window_t4_ParamLimits

0x3d58,	// (0x00042825) popup_snote_single_graphic_window_t4

0x3d8c,	// (0x00042859) popup_snote_single_graphic_window_t5_ParamLimits

0x3d8c,	// (0x00042859) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0004e089) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0004e089) popup_snote_single_graphic_window_t

0x6a63,	// (0x00045530) grid_graphic_popup_pane_ParamLimits

0x6a63,	// (0x00045530) grid_graphic_popup_pane

0x6a8b,	// (0x00045558) listscroll_popup_graphic_pane_g1_ParamLimits

0x6a8b,	// (0x00045558) listscroll_popup_graphic_pane_g1

0xddf4,	// (0x0004c8c1) listscroll_popup_graphic_pane_g2_ParamLimits

0xddf4,	// (0x0004c8c1) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b6,	// (0x0004e483) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b6,	// (0x0004e483) listscroll_popup_graphic_pane_g

0x6ab3,	// (0x00045580) scroll_pane_cp5

0xddb7,	// (0x0004c884) cell_graphic_popup_pane_ParamLimits

0xddb7,	// (0x0004c884) cell_graphic_popup_pane

0x69ed,	// (0x000454ba) cell_graphic_popup_pane_g1

0x69f5,	// (0x000454c2) cell_graphic_popup_pane_g2

0x3bdf,	// (0x000426ac) cell_graphic_popup_pane_g3

0x0002,

0xf9af,	// (0x0004e47c) cell_graphic_popup_pane_g

0x69fe,	// (0x000454cb) cell_graphic_popup_pane_t2

0x3be8,	// (0x000426b5) grid_highlight_pane_cp3

0x3dcd,	// (0x0004289a) list_gen_pane_ParamLimits

0x3dcd,	// (0x0004289a) list_gen_pane

0x3dff,	// (0x000428cc) scroll_pane

0xdd6e,	// (0x0004c83b) bg_list_pane_g1_ParamLimits

0xdd6e,	// (0x0004c83b) bg_list_pane_g1

0x6962,	// (0x0004542f) bg_list_pane_g2_ParamLimits

0x6962,	// (0x0004542f) bg_list_pane_g2

0x6977,	// (0x00045444) bg_list_pane_g3_ParamLimits

0x6977,	// (0x00045444) bg_list_pane_g3

0x698b,	// (0x00045458) bg_list_pane_g4_ParamLimits

0x698b,	// (0x00045458) bg_list_pane_g4

0xdd8b,	// (0x0004c858) bg_list_pane_g5_ParamLimits

0xdd8b,	// (0x0004c858) bg_list_pane_g5

0x0004,

0xf9a4,	// (0x0004e471) bg_list_pane_g_ParamLimits

0xf9a4,	// (0x0004e471) bg_list_pane_g

0xdd36,	// (0x0004c803) list_double2_graphic_large_graphic_pane_ParamLimits

0xdd36,	// (0x0004c803) list_double2_graphic_large_graphic_pane

0xdd36,	// (0x0004c803) list_double2_graphic_pane_ParamLimits

0xdd36,	// (0x0004c803) list_double2_graphic_pane

0xdd36,	// (0x0004c803) list_double2_large_graphic_pane_ParamLimits

0xdd36,	// (0x0004c803) list_double2_large_graphic_pane

0xdd36,	// (0x0004c803) list_double2_pane_ParamLimits

0xdd36,	// (0x0004c803) list_double2_pane

0xdd36,	// (0x0004c803) list_double_graphic_heading_pane_ParamLimits

0xdd36,	// (0x0004c803) list_double_graphic_heading_pane

0xdd36,	// (0x0004c803) list_double_graphic_pane_ParamLimits

0xdd36,	// (0x0004c803) list_double_graphic_pane

0xdd36,	// (0x0004c803) list_double_heading_pane_ParamLimits

0xdd36,	// (0x0004c803) list_double_heading_pane

0xdd36,	// (0x0004c803) list_double_large_graphic_pane_ParamLimits

0xdd36,	// (0x0004c803) list_double_large_graphic_pane

0xdd36,	// (0x0004c803) list_double_number_pane_ParamLimits

0xdd36,	// (0x0004c803) list_double_number_pane

0xdd36,	// (0x0004c803) list_double_pane_ParamLimits

0xdd36,	// (0x0004c803) list_double_pane

0xdd36,	// (0x0004c803) list_double_time_pane_ParamLimits

0xdd36,	// (0x0004c803) list_double_time_pane

0xdd36,	// (0x0004c803) list_setting_number_pane_ParamLimits

0xdd36,	// (0x0004c803) list_setting_number_pane

0xdd36,	// (0x0004c803) list_setting_pane_ParamLimits

0xdd36,	// (0x0004c803) list_setting_pane

0xdd48,	// (0x0004c815) list_single_2graphic_pane_ParamLimits

0xdd48,	// (0x0004c815) list_single_2graphic_pane

0xdd48,	// (0x0004c815) list_single_graphic_heading_pane_ParamLimits

0xdd48,	// (0x0004c815) list_single_graphic_heading_pane

0xdd48,	// (0x0004c815) list_single_graphic_pane_ParamLimits

0xdd48,	// (0x0004c815) list_single_graphic_pane

0xdd48,	// (0x0004c815) list_single_heading_pane_ParamLimits

0xdd48,	// (0x0004c815) list_single_heading_pane

0xdd36,	// (0x0004c803) list_single_large_graphic_pane_ParamLimits

0xdd36,	// (0x0004c803) list_single_large_graphic_pane

0xdd48,	// (0x0004c815) list_single_number_heading_pane_ParamLimits

0xdd48,	// (0x0004c815) list_single_number_heading_pane

0xdd48,	// (0x0004c815) list_single_number_pane_ParamLimits

0xdd48,	// (0x0004c815) list_single_number_pane

0xdd48,	// (0x0004c815) list_single_pane_ParamLimits

0xdd48,	// (0x0004c815) list_single_pane

0x3540,	// (0x0004200d) list_highlight_pane_cp1

0x4a4c,	// (0x00043519) list_single_pane_g1_ParamLimits

0x4a4c,	// (0x00043519) list_single_pane_g1

0x21fd,	// (0x00040cca) list_single_pane_g2_ParamLimits

0x21fd,	// (0x00040cca) list_single_pane_g2

0x0001,

0xf5d8,	// (0x0004e0a5) list_single_pane_g_ParamLimits

0xf5d8,	// (0x0004e0a5) list_single_pane_g

0x0c26,	// (0x0003f6f3) list_single_pane_t1_ParamLimits

0x0c26,	// (0x0003f6f3) list_single_pane_t1

0x4a4c,	// (0x00043519) list_single_number_pane_g1_ParamLimits

0x4a4c,	// (0x00043519) list_single_number_pane_g1

0x21fd,	// (0x00040cca) list_single_number_pane_g2_ParamLimits

0x21fd,	// (0x00040cca) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x0004e0a5) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x0004e0a5) list_single_number_pane_g

0x09d8,	// (0x0003f4a5) list_single_number_pane_t1_ParamLimits

0x09d8,	// (0x0003f4a5) list_single_number_pane_t1

0xbccd,	// (0x0004a79a) list_single_number_pane_t2_ParamLimits

0xbccd,	// (0x0004a79a) list_single_number_pane_t2

0x0001,

0xf965,	// (0x0004e432) list_single_number_pane_t_ParamLimits

0xf965,	// (0x0004e432) list_single_number_pane_t

0xb666,	// (0x0004a133) list_single_graphic_pane_g1_ParamLimits

0xb666,	// (0x0004a133) list_single_graphic_pane_g1

0x4a4c,	// (0x00043519) list_single_graphic_pane_g2_ParamLimits

0x4a4c,	// (0x00043519) list_single_graphic_pane_g2

0x21fd,	// (0x00040cca) list_single_graphic_pane_g3_ParamLimits

0x21fd,	// (0x00040cca) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0004e094) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0004e094) list_single_graphic_pane_g

0xb672,	// (0x0004a13f) list_single_graphic_pane_t1_ParamLimits

0xb672,	// (0x0004a13f) list_single_graphic_pane_t1

0xb688,	// (0x0004a155) list_single_heading_pane_g1_ParamLimits

0xb688,	// (0x0004a155) list_single_heading_pane_g1

0x21fd,	// (0x00040cca) list_single_heading_pane_g2_ParamLimits

0x21fd,	// (0x00040cca) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0004e09b) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0004e09b) list_single_heading_pane_g

0xb69b,	// (0x0004a168) list_single_heading_pane_t1_ParamLimits

0xb69b,	// (0x0004a168) list_single_heading_pane_t1

0xc06d,	// (0x0004ab3a) list_single_heading_pane_t2_ParamLimits

0xc06d,	// (0x0004ab3a) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0004e0a0) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0004e0a0) list_single_heading_pane_t

0x4a4c,	// (0x00043519) list_single_number_heading_pane_g1_ParamLimits

0x4a4c,	// (0x00043519) list_single_number_heading_pane_g1

0x21fd,	// (0x00040cca) list_single_number_heading_pane_g2_ParamLimits

0x21fd,	// (0x00040cca) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x0004e0a5) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x0004e0a5) list_single_number_heading_pane_g

0xb6b1,	// (0x0004a17e) list_single_number_heading_pane_t1_ParamLimits

0xb6b1,	// (0x0004a17e) list_single_number_heading_pane_t1

0xb6c7,	// (0x0004a194) list_single_number_heading_pane_t2_ParamLimits

0xb6c7,	// (0x0004a194) list_single_number_heading_pane_t2

0x0c00,	// (0x0003f6cd) list_single_number_heading_pane_t3_ParamLimits

0x0c00,	// (0x0003f6cd) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x0004e0aa) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x0004e0aa) list_single_number_heading_pane_t

0xb6d9,	// (0x0004a1a6) list_single_graphic_heading_pane_g1_ParamLimits

0xb6d9,	// (0x0004a1a6) list_single_graphic_heading_pane_g1

0xc07f,	// (0x0004ab4c) list_single_graphic_heading_pane_g4_ParamLimits

0xc07f,	// (0x0004ab4c) list_single_graphic_heading_pane_g4

0x21fd,	// (0x00040cca) list_single_graphic_heading_pane_g5_ParamLimits

0x21fd,	// (0x00040cca) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x0004e0b1) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x0004e0b1) list_single_graphic_heading_pane_g

0xb6b1,	// (0x0004a17e) list_single_graphic_heading_pane_t1_ParamLimits

0xb6b1,	// (0x0004a17e) list_single_graphic_heading_pane_t1

0xb6f1,	// (0x0004a1be) list_single_graphic_heading_pane_t2_ParamLimits

0xb6f1,	// (0x0004a1be) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x0004e0b8) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x0004e0b8) list_single_graphic_heading_pane_t

0x0c3c,	// (0x0003f709) list_single_large_graphic_pane_g1_ParamLimits

0x0c3c,	// (0x0003f709) list_single_large_graphic_pane_g1

0x0c48,	// (0x0003f715) list_single_large_graphic_pane_g2_ParamLimits

0x0c48,	// (0x0003f715) list_single_large_graphic_pane_g2

0x0c54,	// (0x0003f721) list_single_large_graphic_pane_g3_ParamLimits

0x0c54,	// (0x0003f721) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0004e0bd) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0004e0bd) list_single_large_graphic_pane_g

0x596f,	// (0x0004443c) wait_border_pane_g2_copy1

0xb707,	// (0x0004a1d4) list_single_large_graphic_pane_g4_cp2

0x0c60,	// (0x0003f72d) list_single_large_graphic_pane_t1_ParamLimits

0x0c60,	// (0x0003f72d) list_single_large_graphic_pane_t1

0x4937,	// (0x00043404) list_double_pane_g1_ParamLimits

0x4937,	// (0x00043404) list_double_pane_g1

0xc090,	// (0x0004ab5d) list_double_pane_g2_ParamLimits

0xc090,	// (0x0004ab5d) list_double_pane_g2

0x0001,

0xf5f7,	// (0x0004e0c4) list_double_pane_g_ParamLimits

0xf5f7,	// (0x0004e0c4) list_double_pane_g

0xb70f,	// (0x0004a1dc) list_double_pane_t1_ParamLimits

0xb70f,	// (0x0004a1dc) list_double_pane_t1

0xb725,	// (0x0004a1f2) list_double_pane_t2_ParamLimits

0xb725,	// (0x0004a1f2) list_double_pane_t2

0x0001,

0xf5fc,	// (0x0004e0c9) list_double_pane_t_ParamLimits

0xf5fc,	// (0x0004e0c9) list_double_pane_t

0xb737,	// (0x0004a204) list_double2_pane_g1_ParamLimits

0xb737,	// (0x0004a204) list_double2_pane_g1

0xb748,	// (0x0004a215) list_double2_pane_g2_ParamLimits

0xb748,	// (0x0004a215) list_double2_pane_g2

0x0001,

0xf601,	// (0x0004e0ce) list_double2_pane_g_ParamLimits

0xf601,	// (0x0004e0ce) list_double2_pane_g

0xb754,	// (0x0004a221) list_double2_pane_t1_ParamLimits

0xb754,	// (0x0004a221) list_double2_pane_t1

0xb76a,	// (0x0004a237) list_double2_pane_t2_ParamLimits

0xb76a,	// (0x0004a237) list_double2_pane_t2

0x0001,

0xf606,	// (0x0004e0d3) list_double2_pane_t_ParamLimits

0xf606,	// (0x0004e0d3) list_double2_pane_t

0x4937,	// (0x00043404) list_double_number_pane_g1_ParamLimits

0x4937,	// (0x00043404) list_double_number_pane_g1

0xc090,	// (0x0004ab5d) list_double_number_pane_g2_ParamLimits

0xc090,	// (0x0004ab5d) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x0004e0c4) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x0004e0c4) list_double_number_pane_g

0xb77c,	// (0x0004a249) list_double_number_pane_t1_ParamLimits

0xb77c,	// (0x0004a249) list_double_number_pane_t1

0xb78e,	// (0x0004a25b) list_double_number_pane_t2_ParamLimits

0xb78e,	// (0x0004a25b) list_double_number_pane_t2

0xb7a4,	// (0x0004a271) list_double_number_pane_t3_ParamLimits

0xb7a4,	// (0x0004a271) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x0004e0d8) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x0004e0d8) list_double_number_pane_t

0xb7b6,	// (0x0004a283) list_double_graphic_pane_g1_ParamLimits

0xb7b6,	// (0x0004a283) list_double_graphic_pane_g1

0xb7c2,	// (0x0004a28f) list_double_graphic_pane_g2_ParamLimits

0xb7c2,	// (0x0004a28f) list_double_graphic_pane_g2

0xb7d1,	// (0x0004a29e) list_double_graphic_pane_g3_ParamLimits

0xb7d1,	// (0x0004a29e) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x0004e0df) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x0004e0df) list_double_graphic_pane_g

0xb7dd,	// (0x0004a2aa) list_double_graphic_pane_t1_ParamLimits

0xb7dd,	// (0x0004a2aa) list_double_graphic_pane_t1

0xb7f3,	// (0x0004a2c0) list_double_graphic_pane_t2_ParamLimits

0xb7f3,	// (0x0004a2c0) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x0004e0e8) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x0004e0e8) list_double_graphic_pane_t

0xb805,	// (0x0004a2d2) list_double2_graphic_pane_g1_ParamLimits

0xb805,	// (0x0004a2d2) list_double2_graphic_pane_g1

0xb811,	// (0x0004a2de) list_double2_graphic_pane_g2_ParamLimits

0xb811,	// (0x0004a2de) list_double2_graphic_pane_g2

0xc0a8,	// (0x0004ab75) list_double2_graphic_pane_g3_ParamLimits

0xc0a8,	// (0x0004ab75) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x0004e0ed) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x0004e0ed) list_double2_graphic_pane_g

0xb81d,	// (0x0004a2ea) list_double2_graphic_pane_t1_ParamLimits

0xb81d,	// (0x0004a2ea) list_double2_graphic_pane_t1

0xb833,	// (0x0004a300) list_double2_graphic_pane_t2_ParamLimits

0xb833,	// (0x0004a300) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x0004e0f4) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x0004e0f4) list_double2_graphic_pane_t

0xb845,	// (0x0004a312) list_double_large_graphic_pane_g1_ParamLimits

0xb845,	// (0x0004a312) list_double_large_graphic_pane_g1

0xb864,	// (0x0004a331) list_double_large_graphic_pane_g2_ParamLimits

0xb864,	// (0x0004a331) list_double_large_graphic_pane_g2

0xc090,	// (0x0004ab5d) list_double_large_graphic_pane_g3_ParamLimits

0xc090,	// (0x0004ab5d) list_double_large_graphic_pane_g3

0xb87a,	// (0x0004a347) list_double_large_graphic_pane_g4_ParamLimits

0xb87a,	// (0x0004a347) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x0004e0f9) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x0004e0f9) list_double_large_graphic_pane_g

0xb88c,	// (0x0004a359) list_double_large_graphic_pane_t1_ParamLimits

0xb88c,	// (0x0004a359) list_double_large_graphic_pane_t1

0xb8a5,	// (0x0004a372) list_double_large_graphic_pane_t2_ParamLimits

0xb8a5,	// (0x0004a372) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x0004e104) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x0004e104) list_double_large_graphic_pane_t

0xb8b7,	// (0x0004a384) list_double2_large_graphic_pane_g1_ParamLimits

0xb8b7,	// (0x0004a384) list_double2_large_graphic_pane_g1

0xb8c3,	// (0x0004a390) list_double2_large_graphic_pane_g2_ParamLimits

0xb8c3,	// (0x0004a390) list_double2_large_graphic_pane_g2

0xc0a8,	// (0x0004ab75) list_double2_large_graphic_pane_g3_ParamLimits

0xc0a8,	// (0x0004ab75) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x0004e109) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x0004e109) list_double2_large_graphic_pane_g

0xb8d4,	// (0x0004a3a1) list_double2_large_graphic_pane_t1_ParamLimits

0xb8d4,	// (0x0004a3a1) list_double2_large_graphic_pane_t1

0xb8ea,	// (0x0004a3b7) list_double2_large_graphic_pane_t2_ParamLimits

0xb8ea,	// (0x0004a3b7) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x0004e110) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x0004e110) list_double2_large_graphic_pane_t

0xb8fc,	// (0x0004a3c9) list_double_heading_pane_g1_ParamLimits

0xb8fc,	// (0x0004a3c9) list_double_heading_pane_g1

0xb90d,	// (0x0004a3da) list_double_heading_pane_g2_ParamLimits

0xb90d,	// (0x0004a3da) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x0004e115) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x0004e115) list_double_heading_pane_g

0xb919,	// (0x0004a3e6) list_double_heading_pane_t1_ParamLimits

0xb919,	// (0x0004a3e6) list_double_heading_pane_t1

0xb76a,	// (0x0004a237) list_double_heading_pane_t2_ParamLimits

0xb76a,	// (0x0004a237) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x0004e11a) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x0004e11a) list_double_heading_pane_t

0xb92f,	// (0x0004a3fc) list_double_graphic_heading_pane_g1_ParamLimits

0xb92f,	// (0x0004a3fc) list_double_graphic_heading_pane_g1

0xb8fc,	// (0x0004a3c9) list_double_graphic_heading_pane_g2_ParamLimits

0xb8fc,	// (0x0004a3c9) list_double_graphic_heading_pane_g2

0xb90d,	// (0x0004a3da) list_double_graphic_heading_pane_g3_ParamLimits

0xb90d,	// (0x0004a3da) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x0004e11f) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x0004e11f) list_double_graphic_heading_pane_g

0xb93b,	// (0x0004a408) list_double_graphic_heading_pane_t1_ParamLimits

0xb93b,	// (0x0004a408) list_double_graphic_heading_pane_t1

0xb833,	// (0x0004a300) list_double_graphic_heading_pane_t2_ParamLimits

0xb833,	// (0x0004a300) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x0004e126) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x0004e126) list_double_graphic_heading_pane_t

0xb951,	// (0x0004a41e) list_double_time_pane_g1_ParamLimits

0xb951,	// (0x0004a41e) list_double_time_pane_g1

0xb962,	// (0x0004a42f) list_double_time_pane_g2_ParamLimits

0xb962,	// (0x0004a42f) list_double_time_pane_g2

0x0001,

0xf65e,	// (0x0004e12b) list_double_time_pane_g_ParamLimits

0xf65e,	// (0x0004e12b) list_double_time_pane_g

0xb96e,	// (0x0004a43b) list_double_time_pane_t1_ParamLimits

0xb96e,	// (0x0004a43b) list_double_time_pane_t1

0xb984,	// (0x0004a451) list_double_time_pane_t2_ParamLimits

0xb984,	// (0x0004a451) list_double_time_pane_t2

0xb996,	// (0x0004a463) list_double_time_pane_t3_ParamLimits

0xb996,	// (0x0004a463) list_double_time_pane_t3

0xb9a8,	// (0x0004a475) list_double_time_pane_t4_ParamLimits

0xb9a8,	// (0x0004a475) list_double_time_pane_t4

0x0003,

0xf663,	// (0x0004e130) list_double_time_pane_t_ParamLimits

0xf663,	// (0x0004e130) list_double_time_pane_t

0xb9ba,	// (0x0004a487) list_setting_pane_g1_ParamLimits

0xb9ba,	// (0x0004a487) list_setting_pane_g1

0xb748,	// (0x0004a215) list_setting_pane_g2_ParamLimits

0xb748,	// (0x0004a215) list_setting_pane_g2

0x0001,

0xf66c,	// (0x0004e139) list_setting_pane_g_ParamLimits

0xf66c,	// (0x0004e139) list_setting_pane_g

0xb9c6,	// (0x0004a493) list_setting_pane_t1_ParamLimits

0xb9c6,	// (0x0004a493) list_setting_pane_t1

0xb9e0,	// (0x0004a4ad) list_setting_pane_t2_ParamLimits

0xb9e0,	// (0x0004a4ad) list_setting_pane_t2

0x0002,

0xf671,	// (0x0004e13e) list_setting_pane_t_ParamLimits

0xf671,	// (0x0004e13e) list_setting_pane_t

0xba1f,	// (0x0004a4ec) set_value_pane_cp_ParamLimits

0xba1f,	// (0x0004a4ec) set_value_pane_cp

0xba2b,	// (0x0004a4f8) list_setting_number_pane_g1_ParamLimits

0xba2b,	// (0x0004a4f8) list_setting_number_pane_g1

0xba37,	// (0x0004a504) list_setting_number_pane_g2_ParamLimits

0xba37,	// (0x0004a504) list_setting_number_pane_g2

0x0001,

0xf678,	// (0x0004e145) list_setting_number_pane_g_ParamLimits

0xf678,	// (0x0004e145) list_setting_number_pane_g

0xba43,	// (0x0004a510) list_setting_number_pane_t1_ParamLimits

0xba43,	// (0x0004a510) list_setting_number_pane_t1

0xba5c,	// (0x0004a529) list_setting_number_pane_t2_ParamLimits

0xba5c,	// (0x0004a529) list_setting_number_pane_t2

0xba76,	// (0x0004a543) list_setting_number_pane_t3_ParamLimits

0xba76,	// (0x0004a543) list_setting_number_pane_t3

0x0003,

0xf67d,	// (0x0004e14a) list_setting_number_pane_t_ParamLimits

0xf67d,	// (0x0004e14a) list_setting_number_pane_t

0xba1f,	// (0x0004a4ec) set_value_pane_ParamLimits

0xba1f,	// (0x0004a4ec) set_value_pane

0x3e3f,	// (0x0004290c) bg_set_opt_pane_ParamLimits

0x3e3f,	// (0x0004290c) bg_set_opt_pane

0x0669,	// (0x0003f136) set_value_pane_t1

0x3e60,	// (0x0004292d) slider_set_pane_cp3

0x3e69,	// (0x00042936) volume_small_pane_cp

0x3e72,	// (0x0004293f) list_form_gen_pane

0x3e7b,	// (0x00042948) scroll_pane_cp8

0xbab9,	// (0x0004a586) form_field_data_pane_ParamLimits

0xbab9,	// (0x0004a586) form_field_data_pane

0xbad0,	// (0x0004a59d) form_field_data_wide_pane_ParamLimits

0xbad0,	// (0x0004a59d) form_field_data_wide_pane

0xbaf0,	// (0x0004a5bd) form_field_popup_pane_ParamLimits

0xbaf0,	// (0x0004a5bd) form_field_popup_pane

0xbb08,	// (0x0004a5d5) form_field_popup_wide_pane_ParamLimits

0xbb08,	// (0x0004a5d5) form_field_popup_wide_pane

0x0705,	// (0x0003f1d2) form_field_slider_pane_ParamLimits

0x0705,	// (0x0003f1d2) form_field_slider_pane

0x0718,	// (0x0003f1e5) form_field_slider_wide_pane_ParamLimits

0x0718,	// (0x0003f1e5) form_field_slider_wide_pane

0x3e8c,	// (0x00042959) data_form_pane

0xbb29,	// (0x0004a5f6) form_field_data_pane_t1

0x3e98,	// (0x00042965) input_focus_pane

0x074d,	// (0x0003f21a) data_form_wide_pane

0x076a,	// (0x0003f237) form_field_data_wide_pane_t1

0x3bfd,	// (0x000426ca) input_focus_pane_cp6

0xbb43,	// (0x0004a610) form_field_popup_pane_t1

0x3e98,	// (0x00042965) input_focus_pane_cp7

0x3eba,	// (0x00042987) list_form_pane

0x07ac,	// (0x0003f279) form_field_popup_wide_pane_t1

0x3e98,	// (0x00042965) input_focus_pane_cp8

0x3ec6,	// (0x00042993) list_form_wide_pane

0xbb65,	// (0x0004a632) form_field_slider_pane_t1_ParamLimits

0xbb65,	// (0x0004a632) form_field_slider_pane_t1

0xbb7d,	// (0x0004a64a) form_field_slider_pane_t2_ParamLimits

0xbb7d,	// (0x0004a64a) form_field_slider_pane_t2

0x0001,

0xf68d,	// (0x0004e15a) form_field_slider_pane_t_ParamLimits

0xf68d,	// (0x0004e15a) form_field_slider_pane_t

0x389b,	// (0x00042368) input_focus_pane_cp9_ParamLimits

0x389b,	// (0x00042368) input_focus_pane_cp9

0xbb92,	// (0x0004a65f) slider_cont_pane_ParamLimits

0xbb92,	// (0x0004a65f) slider_cont_pane

0x3ed5,	// (0x000429a2) form_field_slider_wide_pane_t1_ParamLimits

0x3ed5,	// (0x000429a2) form_field_slider_wide_pane_t1

0x0808,	// (0x0003f2d5) form_field_slider_wide_pane_t2_ParamLimits

0x0808,	// (0x0003f2d5) form_field_slider_wide_pane_t2

0x0001,

0xf692,	// (0x0004e15f) form_field_slider_wide_pane_t_ParamLimits

0xf692,	// (0x0004e15f) form_field_slider_wide_pane_t

0x389b,	// (0x00042368) input_focus_pane_cp10_ParamLimits

0x389b,	// (0x00042368) input_focus_pane_cp10

0xbba6,	// (0x0004a673) slider_cont_pane_cp1_ParamLimits

0xbba6,	// (0x0004a673) slider_cont_pane_cp1

0xbbba,	// (0x0004a687) slider_form_pane_cp

0x3ee7,	// (0x000429b4) input_focus_pane_g1

0x3eef,	// (0x000429bc) input_focus_pane_g2

0x3ef7,	// (0x000429c4) input_focus_pane_g3

0x3eff,	// (0x000429cc) input_focus_pane_g4

0x3f07,	// (0x000429d4) input_focus_pane_g5

0x3f0f,	// (0x000429dc) input_focus_pane_g6

0x3f17,	// (0x000429e4) input_focus_pane_g7

0x3f1f,	// (0x000429ec) input_focus_pane_g8

0x3f27,	// (0x000429f4) input_focus_pane_g9

0x3536,	// (0x00042003) input_focus_pane_g10

0x0009,

0xf697,	// (0x0004e164) input_focus_pane_g

0x5978,	// (0x00044445) wait_border_pane_g3_copy1

0xbbc2,	// (0x0004a68f) data_form_pane_t1

0x3536,	// (0x00042003) wait_anim_pane_g1_copy1

0xbcdf,	// (0x0004a7ac) data_form_wide_pane_t1

0xbbdb,	// (0x0004a6a8) list_form_graphic_pane_cp_ParamLimits

0xbbdb,	// (0x0004a6a8) list_form_graphic_pane_cp

0x68d7,	// (0x000453a4) slider_form_pane_g1

0x68e0,	// (0x000453ad) slider_form_pane_g2

0x0006,

0xf995,	// (0x0004e462) slider_form_pane_g

0xbbec,	// (0x0004a6b9) list_form_graphic_pane_ParamLimits

0xbbec,	// (0x0004a6b9) list_form_graphic_pane

0x0886,	// (0x0003f353) list_form_graphic_pane_g1

0x088e,	// (0x0003f35b) list_form_graphic_pane_t1_ParamLimits

0x088e,	// (0x0003f35b) list_form_graphic_pane_t1

0x3620,	// (0x000420ed) list_highlight_pane_cp5_ParamLimits

0x3620,	// (0x000420ed) list_highlight_pane_cp5

0xbbfe,	// (0x0004a6cb) find_pane_g1

0x3f2f,	// (0x000429fc) input_find_pane

0xbc07,	// (0x0004a6d4) input_find_pane_g1_ParamLimits

0xbc07,	// (0x0004a6d4) input_find_pane_g1

0xbc13,	// (0x0004a6e0) input_find_pane_t1_ParamLimits

0xbc13,	// (0x0004a6e0) input_find_pane_t1

0xbc28,	// (0x0004a6f5) input_find_pane_t2_ParamLimits

0xbc28,	// (0x0004a6f5) input_find_pane_t2

0x0001,

0xf6ac,	// (0x0004e179) input_find_pane_t_ParamLimits

0xf6ac,	// (0x0004e179) input_find_pane_t

0x3f38,	// (0x00042a05) input_focus_pane_cp5_ParamLimits

0x3f38,	// (0x00042a05) input_focus_pane_cp5

0x3f52,	// (0x00042a1f) bg_popup_window_pane_cp2_ParamLimits

0x3f52,	// (0x00042a1f) bg_popup_window_pane_cp2

0x3f5f,	// (0x00042a2c) listscroll_menu_pane_ParamLimits

0x3f5f,	// (0x00042a2c) listscroll_menu_pane

0xd2d8,	// (0x0004bda5) popup_submenu_window_ParamLimits

0xd2d8,	// (0x0004bda5) popup_submenu_window

0x3f97,	// (0x00042a64) find_popup_pane_g1

0x3f9f,	// (0x00042a6c) input_popup_find_pane_cp

0x3f38,	// (0x00042a05) input_focus_pane_cp4_ParamLimits

0x3f38,	// (0x00042a05) input_focus_pane_cp4

0x3fb5,	// (0x00042a82) input_popup_find_pane_t1_ParamLimits

0x3fb5,	// (0x00042a82) input_popup_find_pane_t1

0x3540,	// (0x0004200d) bg_popup_sub_pane_cp

0x3fe3,	// (0x00042ab0) listscroll_popup_sub_pane

0x3feb,	// (0x00042ab8) list_submenu_pane_ParamLimits

0x3feb,	// (0x00042ab8) list_submenu_pane

0x3ffc,	// (0x00042ac9) scroll_pane_cp4

0x4004,	// (0x00042ad1) list_single_popup_submenu_pane_ParamLimits

0x4004,	// (0x00042ad1) list_single_popup_submenu_pane

0x4018,	// (0x00042ae5) list_single_popup_submenu_pane_g1

0x4020,	// (0x00042aed) list_single_popup_submenu_pane_t1_ParamLimits

0x4020,	// (0x00042aed) list_single_popup_submenu_pane_t1

0x389b,	// (0x00042368) bg_active_tab_pane_cp1_ParamLimits

0x389b,	// (0x00042368) bg_active_tab_pane_cp1

0x4035,	// (0x00042b02) tabs_2_active_pane_g1

0xd312,	// (0x0004bddf) tabs_2_active_pane_t1

0x389b,	// (0x00042368) bg_passive_tab_pane_cp1_ParamLimits

0x389b,	// (0x00042368) bg_passive_tab_pane_cp1

0x4035,	// (0x00042b02) tabs_2_passive_pane_g1

0xd312,	// (0x0004bddf) tabs_2_passive_pane_t1

0x3620,	// (0x000420ed) bg_active_tab_pane_cp4

0xd324,	// (0x0004bdf1) tabs_2_long_active_pane_t1

0x4e53,	// (0x00043920) bg_passive_tab_pane_cp4

0x18b4,	// (0x00040381) list_single_midp_graphic_pane_g4_ParamLimits

0x3620,	// (0x000420ed) bg_active_tab_pane_cp5

0xd337,	// (0x0004be04) tabs_3_long_active_pane_t1

0x4e53,	// (0x00043920) bg_passive_tab_pane_cp5

0x18b4,	// (0x00040381) list_single_midp_graphic_pane_g4

0x3620,	// (0x000420ed) bg_popup_window_pane_cp13_ParamLimits

0x3620,	// (0x000420ed) bg_popup_window_pane_cp13

0x4097,	// (0x00042b64) listscroll_popup_fast_pane_ParamLimits

0x4097,	// (0x00042b64) listscroll_popup_fast_pane

0x40a6,	// (0x00042b73) grid_popup_fast_pane_ParamLimits

0x40a6,	// (0x00042b73) grid_popup_fast_pane

0x40b8,	// (0x00042b85) scroll_pane_cp9_ParamLimits

0x40b8,	// (0x00042b85) scroll_pane_cp9

0x8198,	// (0x00046c65) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x8198,	// (0x00046c65) list_single_graphic_hl_pane_t1_cp2

0x40dc,	// (0x00042ba9) input_focus_pane_cp20_ParamLimits

0x40dc,	// (0x00042ba9) input_focus_pane_cp20

0x40ea,	// (0x00042bb7) query_popup_data_pane_t1_ParamLimits

0x40ea,	// (0x00042bb7) query_popup_data_pane_t1

0x40fd,	// (0x00042bca) query_popup_data_pane_t2_ParamLimits

0x40fd,	// (0x00042bca) query_popup_data_pane_t2

0x4143,	// (0x00042c10) query_popup_data_pane_t3_ParamLimits

0x4143,	// (0x00042c10) query_popup_data_pane_t3

0x4184,	// (0x00042c51) query_popup_data_pane_t4_ParamLimits

0x4184,	// (0x00042c51) query_popup_data_pane_t4

0x41c0,	// (0x00042c8d) query_popup_data_pane_t5_ParamLimits

0x41c0,	// (0x00042c8d) query_popup_data_pane_t5

0x0004,

0xf6b1,	// (0x0004e17e) query_popup_data_pane_t_ParamLimits

0xf6b1,	// (0x0004e17e) query_popup_data_pane_t

0x3ee7,	// (0x000429b4) bg_set_opt_pane_g1

0x3eef,	// (0x000429bc) bg_set_opt_pane_g2

0x3ef7,	// (0x000429c4) bg_set_opt_pane_g3

0x3eff,	// (0x000429cc) bg_set_opt_pane_g4

0x3f07,	// (0x000429d4) bg_set_opt_pane_g5

0x3f0f,	// (0x000429dc) bg_set_opt_pane_g6

0x3f17,	// (0x000429e4) bg_set_opt_pane_g7

0x3f1f,	// (0x000429ec) bg_set_opt_pane_g8

0x3f27,	// (0x000429f4) bg_set_opt_pane_g9

0x0008,

0xf6bc,	// (0x0004e189) bg_set_opt_pane_g

0x18c0,	// (0x0004038d) control_top_pane_stacon_ParamLimits

0x18c0,	// (0x0004038d) control_top_pane_stacon

0x1913,	// (0x000403e0) signal_pane_stacon_ParamLimits

0x1913,	// (0x000403e0) signal_pane_stacon

0x47ac,	// (0x00043279) stacon_top_pane_g1_ParamLimits

0x47ac,	// (0x00043279) stacon_top_pane_g1

0x1938,	// (0x00040405) title_pane_stacon_ParamLimits

0x1938,	// (0x00040405) title_pane_stacon

0x1962,	// (0x0004042f) uni_indicator_pane_stacon_ParamLimits

0x1962,	// (0x0004042f) uni_indicator_pane_stacon

0x1977,	// (0x00040444) battery_pane_stacon_ParamLimits

0x1977,	// (0x00040444) battery_pane_stacon

0x19bb,	// (0x00040488) control_bottom_pane_stacon_ParamLimits

0x19bb,	// (0x00040488) control_bottom_pane_stacon

0x19de,	// (0x000404ab) navi_pane_stacon_ParamLimits

0x19de,	// (0x000404ab) navi_pane_stacon

0x47ce,	// (0x0004329b) stacon_bottom_pane_g1_ParamLimits

0x47ce,	// (0x0004329b) stacon_bottom_pane_g1

0x1607,	// (0x000400d4) aid_levels_signal_lsc_ParamLimits

0x1607,	// (0x000400d4) aid_levels_signal_lsc

0x161d,	// (0x000400ea) signal_pane_stacon_g1_ParamLimits

0x161d,	// (0x000400ea) signal_pane_stacon_g1

0x1631,	// (0x000400fe) signal_pane_stacon_g2_ParamLimits

0x1631,	// (0x000400fe) signal_pane_stacon_g2

0x0001,

0xf6cf,	// (0x0004e19c) signal_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0004e19c) signal_pane_stacon_g

0x1666,	// (0x00040133) title_pane_stacon_t1_ParamLimits

0x1666,	// (0x00040133) title_pane_stacon_t1

0x4204,	// (0x00042cd1) uni_indicator_pane_stacon_g1

0x420e,	// (0x00042cdb) uni_indicator_pane_stacon_g2

0x4218,	// (0x00042ce5) uni_indicator_pane_stacon_g3

0x4222,	// (0x00042cef) uni_indicator_pane_stacon_g4

0x0003,

0xf6db,	// (0x0004e1a8) uni_indicator_pane_stacon_g

0x168b,	// (0x00040158) control_top_pane_stacon_g1

0x1693,	// (0x00040160) control_top_pane_stacon_t1_ParamLimits

0x1693,	// (0x00040160) control_top_pane_stacon_t1

0x16ca,	// (0x00040197) aid_levels_battery_lsc_ParamLimits

0x16ca,	// (0x00040197) aid_levels_battery_lsc

0x16e1,	// (0x000401ae) battery_pane_stacon_g1_ParamLimits

0x16e1,	// (0x000401ae) battery_pane_stacon_g1

0x16f4,	// (0x000401c1) battery_pane_stacon_g2_ParamLimits

0x16f4,	// (0x000401c1) battery_pane_stacon_g2

0x0001,

0xf6e4,	// (0x0004e1b1) battery_pane_stacon_g_ParamLimits

0xf6e4,	// (0x0004e1b1) battery_pane_stacon_g

0x1732,	// (0x000401ff) navi_icon_pane_stacon

0x1746,	// (0x00040213) navi_navi_pane_stacon

0x1732,	// (0x000401ff) navi_text_pane_stacon

0x168b,	// (0x00040158) control_bottom_pane_stacon_g1

0x175a,	// (0x00040227) control_bottom_pane_stacon_t1_ParamLimits

0x175a,	// (0x00040227) control_bottom_pane_stacon_t1

0xd349,	// (0x0004be16) grid_app_pane_ParamLimits

0xd349,	// (0x0004be16) grid_app_pane

0xd381,	// (0x0004be4e) scroll_pane_cp15_ParamLimits

0xd381,	// (0x0004be4e) scroll_pane_cp15

0xd396,	// (0x0004be63) cell_app_pane_ParamLimits

0xd396,	// (0x0004be63) cell_app_pane

0xd3db,	// (0x0004bea8) cell_app_pane_g1_ParamLimits

0xd3db,	// (0x0004bea8) cell_app_pane_g1

0x42c1,	// (0x00042d8e) cell_app_pane_g2_ParamLimits

0x42c1,	// (0x00042d8e) cell_app_pane_g2

0x0001,

0xf6e9,	// (0x0004e1b6) cell_app_pane_g_ParamLimits

0xf6e9,	// (0x0004e1b6) cell_app_pane_g

0xd3fb,	// (0x0004bec8) cell_app_pane_t1_ParamLimits

0xd3fb,	// (0x0004bec8) cell_app_pane_t1

0x42e4,	// (0x00042db1) grid_highlight_pane_ParamLimits

0x42e4,	// (0x00042db1) grid_highlight_pane

0x3ee7,	// (0x000429b4) cell_highlight_pane_g1

0x3eef,	// (0x000429bc) cell_highlight_pane_g2

0x3ef7,	// (0x000429c4) cell_highlight_pane_g3

0x3eff,	// (0x000429cc) cell_highlight_pane_g4

0x3f07,	// (0x000429d4) cell_highlight_pane_g5

0x3f0f,	// (0x000429dc) cell_highlight_pane_g6

0x3f17,	// (0x000429e4) cell_highlight_pane_g7

0x3f1f,	// (0x000429ec) cell_highlight_pane_g8

0x3f27,	// (0x000429f4) cell_highlight_pane_g9

0x3536,	// (0x00042003) cell_highlight_pane_g10

0x0009,

0xf697,	// (0x0004e164) cell_highlight_pane_g

0x42f5,	// (0x00042dc2) bg_scroll_pane

0x17a4,	// (0x00040271) scroll_handle_pane

0x433c,	// (0x00042e09) scroll_bg_pane_g1

0x4351,	// (0x00042e1e) scroll_bg_pane_g2

0x4369,	// (0x00042e36) scroll_bg_pane_g3

0x0002,

0xf6ee,	// (0x0004e1bb) scroll_bg_pane_g

0x437e,	// (0x00042e4b) scroll_handle_focus_pane_ParamLimits

0x437e,	// (0x00042e4b) scroll_handle_focus_pane

0x433c,	// (0x00042e09) scroll_handle_pane_g1

0x438b,	// (0x00042e58) scroll_handle_pane_g2

0x4369,	// (0x00042e36) scroll_handle_pane_g3

0x0002,

0xf6f5,	// (0x0004e1c2) scroll_handle_pane_g

0x3f38,	// (0x00042a05) bg_popup_sub_pane_cp21_ParamLimits

0x3f38,	// (0x00042a05) bg_popup_sub_pane_cp21

0x439f,	// (0x00042e6c) popup_fep_japan_predictive_window_t1_ParamLimits

0x439f,	// (0x00042e6c) popup_fep_japan_predictive_window_t1

0x43b9,	// (0x00042e86) popup_fep_japan_predictive_window_t2_ParamLimits

0x43b9,	// (0x00042e86) popup_fep_japan_predictive_window_t2

0x43ec,	// (0x00042eb9) popup_fep_japan_predictive_window_t3_ParamLimits

0x43ec,	// (0x00042eb9) popup_fep_japan_predictive_window_t3

0x0002,

0xf6fc,	// (0x0004e1c9) popup_fep_japan_predictive_window_t_ParamLimits

0xf6fc,	// (0x0004e1c9) popup_fep_japan_predictive_window_t

0x3540,	// (0x0004200d) bg_popup_sub_pane_cp23

0x4423,	// (0x00042ef0) listscroll_japin_cand_pane

0x442b,	// (0x00042ef8) popup_fep_japan_candidate_window_t1

0x4439,	// (0x00042f06) candidate_pane_ParamLimits

0x4439,	// (0x00042f06) candidate_pane

0x444b,	// (0x00042f18) scroll_pane_cp30

0x4453,	// (0x00042f20) list_single_popup_jap_candidate_pane_ParamLimits

0x4453,	// (0x00042f20) list_single_popup_jap_candidate_pane

0x3540,	// (0x0004200d) list_highlight_pane_cp30

0x4468,	// (0x00042f35) list_single_popup_jap_candidate_pane_t1

0x4477,	// (0x00042f44) level_1_signal

0x4489,	// (0x00042f56) level_2_signal

0x449c,	// (0x00042f69) level_3_signal

0x44af,	// (0x00042f7c) level_4_signal

0x44c2,	// (0x00042f8f) level_5_signal

0x44d5,	// (0x00042fa2) level_6_signal

0x44e8,	// (0x00042fb5) level_7_signal

0x4477,	// (0x00042f44) level_1_battery

0x4489,	// (0x00042f56) level_2_battery

0x449c,	// (0x00042f69) level_3_battery

0x44af,	// (0x00042f7c) level_4_battery

0x44c2,	// (0x00042f8f) level_5_battery

0x44d5,	// (0x00042fa2) level_6_battery

0x44e8,	// (0x00042fb5) level_7_battery

0x4513,	// (0x00042fe0) list_menu_pane_ParamLimits

0x4513,	// (0x00042fe0) list_menu_pane

0x4529,	// (0x00042ff6) scroll_pane_cp25_ParamLimits

0x4529,	// (0x00042ff6) scroll_pane_cp25

0x4542,	// (0x0004300f) list_double2_graphic_pane_cp2_ParamLimits

0x4542,	// (0x0004300f) list_double2_graphic_pane_cp2

0x4542,	// (0x0004300f) list_double2_large_graphic_pane_cp2_ParamLimits

0x4542,	// (0x0004300f) list_double2_large_graphic_pane_cp2

0x4542,	// (0x0004300f) list_double2_pane_cp2_ParamLimits

0x4542,	// (0x0004300f) list_double2_pane_cp2

0x4542,	// (0x0004300f) list_double_graphic_pane_cp2_ParamLimits

0x4542,	// (0x0004300f) list_double_graphic_pane_cp2

0x4542,	// (0x0004300f) list_double_large_graphic_pane_cp2_ParamLimits

0x4542,	// (0x0004300f) list_double_large_graphic_pane_cp2

0x4542,	// (0x0004300f) list_double_number_pane_cp2_ParamLimits

0x4542,	// (0x0004300f) list_double_number_pane_cp2

0x4542,	// (0x0004300f) list_double_pane_cp2_ParamLimits

0x4542,	// (0x0004300f) list_double_pane_cp2

0xd412,	// (0x0004bedf) list_single_2graphic_pane_cp2_ParamLimits

0xd412,	// (0x0004bedf) list_single_2graphic_pane_cp2

0xd412,	// (0x0004bedf) list_single_graphic_heading_pane_cp2_ParamLimits

0xd412,	// (0x0004bedf) list_single_graphic_heading_pane_cp2

0xd412,	// (0x0004bedf) list_single_graphic_pane_cp2_ParamLimits

0xd412,	// (0x0004bedf) list_single_graphic_pane_cp2

0xd412,	// (0x0004bedf) list_single_heading_pane_cp2_ParamLimits

0xd412,	// (0x0004bedf) list_single_heading_pane_cp2

0x457f,	// (0x0004304c) list_single_large_graphic_pane_cp2_ParamLimits

0x457f,	// (0x0004304c) list_single_large_graphic_pane_cp2

0xd412,	// (0x0004bedf) list_single_number_heading_pane_cp2_ParamLimits

0xd412,	// (0x0004bedf) list_single_number_heading_pane_cp2

0xd412,	// (0x0004bedf) list_single_number_pane_cp2_ParamLimits

0xd412,	// (0x0004bedf) list_single_number_pane_cp2

0xd412,	// (0x0004bedf) list_single_pane_cp2_ParamLimits

0xd412,	// (0x0004bedf) list_single_pane_cp2

0x45fb,	// (0x000430c8) bg_popup_sub_pane_cp22

0x1856,	// (0x00040323) popup_side_volume_key_window_g1

0x1880,	// (0x0004034d) popup_side_volume_key_window_t1

0x189c,	// (0x00040369) volume_small_pane_cp1

0x389b,	// (0x00042368) bg_popup_sub_pane_cp24_ParamLimits

0x389b,	// (0x00042368) bg_popup_sub_pane_cp24

0x4611,	// (0x000430de) fep_china_uni_candidate_pane_ParamLimits

0x4611,	// (0x000430de) fep_china_uni_candidate_pane

0x4625,	// (0x000430f2) fep_china_uni_entry_pane

0x4635,	// (0x00043102) popup_fep_china_uni_window_g1

0x4651,	// (0x0004311e) fep_china_uni_entry_pane_g1

0x4659,	// (0x00043126) fep_china_uni_entry_pane_g2

0x0001,

0xf72d,	// (0x0004e1fa) fep_china_uni_entry_pane_g

0x4661,	// (0x0004312e) fep_entry_item_pane

0x466b,	// (0x00043138) fep_candidate_item_pane

0x4673,	// (0x00043140) fep_china_uni_candidate_pane_g1

0x467b,	// (0x00043148) fep_china_uni_candidate_pane_g2

0x4683,	// (0x00043150) fep_china_uni_candidate_pane_g3

0x468b,	// (0x00043158) fep_china_uni_candidate_pane_g4

0x0003,

0xf732,	// (0x0004e1ff) fep_china_uni_candidate_pane_g

0x3536,	// (0x00042003) fep_entry_item_pane_g1

0x4693,	// (0x00043160) fep_entry_item_pane_t1_ParamLimits

0x4693,	// (0x00043160) fep_entry_item_pane_t1

0x46a9,	// (0x00043176) fep_candidate_item_pane_t1_ParamLimits

0x46a9,	// (0x00043176) fep_candidate_item_pane_t1

0x46be,	// (0x0004318b) fep_candidate_item_pane_t2_ParamLimits

0x46be,	// (0x0004318b) fep_candidate_item_pane_t2

0x0001,

0xf73b,	// (0x0004e208) fep_candidate_item_pane_t_ParamLimits

0xf73b,	// (0x0004e208) fep_candidate_item_pane_t

0x3620,	// (0x000420ed) list_highlight_pane_cp31_ParamLimits

0x3620,	// (0x000420ed) list_highlight_pane_cp31

0x46d0,	// (0x0004319d) level_1_signal_lsc

0x46d9,	// (0x000431a6) level_2_signal_lsc

0x46e2,	// (0x000431af) level_3_signal_lsc

0x46eb,	// (0x000431b8) level_4_signal_lsc

0x46f4,	// (0x000431c1) level_5_signal_lsc

0x46fd,	// (0x000431ca) level_6_signal_lsc

0x4706,	// (0x000431d3) level_7_signal_lsc

0x4706,	// (0x000431d3) level_1_battery_lsc

0x470f,	// (0x000431dc) level_2_battery_lsc

0x4718,	// (0x000431e5) level_3_battery_lsc

0x4721,	// (0x000431ee) level_4_battery_lsc

0x472a,	// (0x000431f7) level_5_battery_lsc

0x4733,	// (0x00043200) level_6_battery_lsc

0x46d0,	// (0x0004319d) level_7_battery_lsc

0x473c,	// (0x00043209) scroll_handle_focus_pane_g1

0x4745,	// (0x00043212) scroll_handle_focus_pane_g2

0x474e,	// (0x0004321b) scroll_handle_focus_pane_g3

0x0002,

0xf740,	// (0x0004e20d) scroll_handle_focus_pane_g

0xbc3d,	// (0x0004a70a) list_single_2graphic_pane_g1_ParamLimits

0xbc3d,	// (0x0004a70a) list_single_2graphic_pane_g1

0xc07f,	// (0x0004ab4c) list_single_2graphic_pane_g2_ParamLimits

0xc07f,	// (0x0004ab4c) list_single_2graphic_pane_g2

0x21fd,	// (0x00040cca) list_single_2graphic_pane_g3_ParamLimits

0x21fd,	// (0x00040cca) list_single_2graphic_pane_g3

0xbc49,	// (0x0004a716) list_single_2graphic_pane_g4_ParamLimits

0xbc49,	// (0x0004a716) list_single_2graphic_pane_g4

0x0003,

0xf747,	// (0x0004e214) list_single_2graphic_pane_g_ParamLimits

0xf747,	// (0x0004e214) list_single_2graphic_pane_g

0xbc55,	// (0x0004a722) list_single_2graphic_pane_t1_ParamLimits

0xbc55,	// (0x0004a722) list_single_2graphic_pane_t1

0xc0bd,	// (0x0004ab8a) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc0bd,	// (0x0004ab8a) list_double2_graphic_large_graphic_pane_g1

0xb8c3,	// (0x0004a390) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb8c3,	// (0x0004a390) list_double2_graphic_large_graphic_pane_g2

0xc0a8,	// (0x0004ab75) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xc0a8,	// (0x0004ab75) list_double2_graphic_large_graphic_pane_g3

0xbc83,	// (0x0004a750) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbc83,	// (0x0004a750) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf750,	// (0x0004e21d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf750,	// (0x0004e21d) list_double2_graphic_large_graphic_pane_g

0xbc8f,	// (0x0004a75c) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbc8f,	// (0x0004a75c) list_double2_graphic_large_graphic_pane_t1

0xbca5,	// (0x0004a772) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbca5,	// (0x0004a772) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf759,	// (0x0004e226) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf759,	// (0x0004e226) list_double2_graphic_large_graphic_pane_t

0x4896,	// (0x00043363) popup_fast_swap_window_ParamLimits

0x4896,	// (0x00043363) popup_fast_swap_window

0x48b2,	// (0x0004337f) popup_side_volume_key_window

0x48ce,	// (0x0004339b) stacon_top_pane

0x48d8,	// (0x000433a5) status_pane_ParamLimits

0x48d8,	// (0x000433a5) status_pane

0x48ce,	// (0x0004339b) status_small_pane

0x3540,	// (0x0004200d) control_pane

0x3540,	// (0x0004200d) stacon_bottom_pane

0x3e7b,	// (0x00042948) scroll_pane_cp121

0x3e72,	// (0x0004293f) set_content_pane

0x4757,	// (0x00043224) bg_active_tab_pane_g1_cp1

0x4760,	// (0x0004322d) bg_active_tab_pane_g2_cp1

0x4769,	// (0x00043236) bg_active_tab_pane_g3_cp1

0x4757,	// (0x00043224) bg_passive_tab_pane_g1_cp1

0x4760,	// (0x0004322d) bg_passive_tab_pane_g2_cp1

0x4769,	// (0x00043236) bg_passive_tab_pane_g3_cp1

0x4772,	// (0x0004323f) bg_active_tab_pane_g1_cp2

0x4760,	// (0x0004322d) bg_active_tab_pane_g2_cp2

0x477b,	// (0x00043248) bg_active_tab_pane_g3_cp2

0x4772,	// (0x0004323f) bg_passive_tab_pane_g1_cp2

0x4760,	// (0x0004322d) bg_passive_tab_pane_g2_cp2

0x477b,	// (0x00043248) bg_passive_tab_pane_g3_cp2

0x4784,	// (0x00043251) bg_active_tab_pane_g1_cp3

0x4760,	// (0x0004322d) bg_active_tab_pane_g2_cp3

0x478d,	// (0x0004325a) bg_active_tab_pane_g3_cp3

0x4784,	// (0x00043251) bg_passive_tab_pane_g1_cp3

0x4760,	// (0x0004322d) bg_passive_tab_pane_g2_cp3

0x478d,	// (0x0004325a) bg_passive_tab_pane_g3_cp3

0x4796,	// (0x00043263) bg_active_tab_pane_g1_cp4

0x4760,	// (0x0004322d) bg_active_tab_pane_g2_cp4

0x47a1,	// (0x0004326e) bg_active_tab_pane_g3_cp4

0x4796,	// (0x00043263) bg_passive_tab_pane_g1_cp4

0x4760,	// (0x0004322d) bg_passive_tab_pane_g2_cp4

0x47a1,	// (0x0004326e) bg_passive_tab_pane_g3_cp4

0x47ea,	// (0x000432b7) bg_active_tab_pane_g1_cp5

0x4760,	// (0x0004322d) bg_active_tab_pane_g2_cp5

0x47f3,	// (0x000432c0) bg_active_tab_pane_g3_cp5

0x47ea,	// (0x000432b7) bg_passive_tab_pane_g1_cp5

0x4760,	// (0x0004322d) bg_passive_tab_pane_g2_cp5

0x47f3,	// (0x000432c0) bg_passive_tab_pane_g3_cp5

0x6e73,	// (0x00045940) list_set_graphic_pane_ParamLimits

0x6e73,	// (0x00045940) list_set_graphic_pane

0x3540,	// (0x0004200d) bg_set_opt_pane_cp4

0xd49f,	// (0x0004bf6c) list_set_graphic_pane_g1_ParamLimits

0xd49f,	// (0x0004bf6c) list_set_graphic_pane_g1

0xd4ab,	// (0x0004bf78) list_set_graphic_pane_g2_ParamLimits

0xd4ab,	// (0x0004bf78) list_set_graphic_pane_g2

0x0001,

0xf75e,	// (0x0004e22b) list_set_graphic_pane_g_ParamLimits

0xf75e,	// (0x0004e22b) list_set_graphic_pane_g

0x0009,

0xfac5,	// (0x0004e592) volume_small_pane_cp_g

0x4849,	// (0x00043316) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4849,	// (0x00043316) list_double2_large_graphic_pane_g1_cp2

0x4855,	// (0x00043322) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4855,	// (0x00043322) list_double2_large_graphic_pane_g2_cp2

0x4866,	// (0x00043333) list_double2_large_graphic_pane_g3_cp2

0x486e,	// (0x0004333b) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x486e,	// (0x0004333b) list_double2_large_graphic_pane_t1_cp2

0x4884,	// (0x00043351) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4884,	// (0x00043351) list_double2_large_graphic_pane_t2_cp2

0x644b,	// (0x00044f18) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x644b,	// (0x00044f18) list_double_large_graphic_pane_g1_cp2

0x645c,	// (0x00044f29) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x645c,	// (0x00044f29) list_double_large_graphic_pane_g2_cp2

0x49f4,	// (0x000434c1) list_double_large_graphic_pane_g3_cp2

0x646d,	// (0x00044f3a) list_double_large_graphic_pane_g4_cp

0x6475,	// (0x00044f42) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6475,	// (0x00044f42) list_double_large_graphic_pane_t1_cp2

0x648c,	// (0x00044f59) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x648c,	// (0x00044f59) list_double_large_graphic_pane_t2_cp2

0x48e6,	// (0x000433b3) list_double2_graphic_pane_g1_cp2_ParamLimits

0x48e6,	// (0x000433b3) list_double2_graphic_pane_g1_cp2

0x48f4,	// (0x000433c1) list_double2_graphic_pane_g2_cp2_ParamLimits

0x48f4,	// (0x000433c1) list_double2_graphic_pane_g2_cp2

0x4905,	// (0x000433d2) list_double2_graphic_pane_g3_cp2

0x490f,	// (0x000433dc) list_double2_graphic_pane_t1_cp2_ParamLimits

0x490f,	// (0x000433dc) list_double2_graphic_pane_t1_cp2

0x4925,	// (0x000433f2) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4925,	// (0x000433f2) list_double2_graphic_pane_t2_cp2

0x4937,	// (0x00043404) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4937,	// (0x00043404) list_single_number_heading_pane_g1_cp2

0x4943,	// (0x00043410) list_single_number_heading_pane_g2_cp2

0x494b,	// (0x00043418) list_single_number_heading_pane_t1_cp2_ParamLimits

0x494b,	// (0x00043418) list_single_number_heading_pane_t1_cp2

0x4961,	// (0x0004342e) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4961,	// (0x0004342e) list_single_number_heading_pane_t2_cp2

0x4973,	// (0x00043440) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4973,	// (0x00043440) list_single_number_heading_pane_t3_cp2

0x4937,	// (0x00043404) list_single_heading_pane_g1_cp2_ParamLimits

0x4937,	// (0x00043404) list_single_heading_pane_g1_cp2

0x4943,	// (0x00043410) list_single_heading_pane_g2_cp2

0x494b,	// (0x00043418) list_single_heading_pane_t1_cp2_ParamLimits

0x494b,	// (0x00043418) list_single_heading_pane_t1_cp2

0x6253,	// (0x00044d20) list_single_heading_pane_t2_cp2_ParamLimits

0x6253,	// (0x00044d20) list_single_heading_pane_t2_cp2

0x619b,	// (0x00044c68) list_double_graphic_pane_g1_cp2_ParamLimits

0x619b,	// (0x00044c68) list_double_graphic_pane_g1_cp2

0x61a7,	// (0x00044c74) list_double_graphic_pane_g2_cp2_ParamLimits

0x61a7,	// (0x00044c74) list_double_graphic_pane_g2_cp2

0x61b6,	// (0x00044c83) list_double_graphic_pane_g3_cp2

0x61be,	// (0x00044c8b) list_double_graphic_pane_t1_cp2_ParamLimits

0x61be,	// (0x00044c8b) list_double_graphic_pane_t1_cp2

0x61d4,	// (0x00044ca1) list_double_graphic_pane_t2_cp2_ParamLimits

0x61d4,	// (0x00044ca1) list_double_graphic_pane_t2_cp2

0x49e8,	// (0x000434b5) list_double_number_pane_g1_cp2_ParamLimits

0x49e8,	// (0x000434b5) list_double_number_pane_g1_cp2

0x49f4,	// (0x000434c1) list_double_number_pane_g2_cp2

0x615f,	// (0x00044c2c) list_double_number_pane_t1_cp2_ParamLimits

0x615f,	// (0x00044c2c) list_double_number_pane_t1_cp2

0x6173,	// (0x00044c40) list_double_number_pane_t2_cp2_ParamLimits

0x6173,	// (0x00044c40) list_double_number_pane_t2_cp2

0x6189,	// (0x00044c56) list_double_number_pane_t3_cp2_ParamLimits

0x6189,	// (0x00044c56) list_double_number_pane_t3_cp2

0x6048,	// (0x00044b15) list_single_graphic_pane_g1_cp2_ParamLimits

0x6048,	// (0x00044b15) list_single_graphic_pane_g1_cp2

0x4a4c,	// (0x00043519) list_single_graphic_pane_g2_cp2_ParamLimits

0x4a4c,	// (0x00043519) list_single_graphic_pane_g2_cp2

0x4a58,	// (0x00043525) list_single_graphic_pane_g3_cp2

0x601e,	// (0x00044aeb) list_single_graphic_pane_t1_cp2_ParamLimits

0x601e,	// (0x00044aeb) list_single_graphic_pane_t1_cp2

0x4a4c,	// (0x00043519) list_single_number_pane_g1_cp2_ParamLimits

0x4a4c,	// (0x00043519) list_single_number_pane_g1_cp2

0x4a58,	// (0x00043525) list_single_number_pane_g2_cp2

0x601e,	// (0x00044aeb) list_single_number_pane_t1_cp2_ParamLimits

0x601e,	// (0x00044aeb) list_single_number_pane_t1_cp2

0x6034,	// (0x00044b01) list_single_number_pane_t2_cp2_ParamLimits

0x6034,	// (0x00044b01) list_single_number_pane_t2_cp2

0x4855,	// (0x00043322) list_double2_pane_g1_cp2_ParamLimits

0x4855,	// (0x00043322) list_double2_pane_g1_cp2

0x4866,	// (0x00043333) list_double2_pane_g2_cp2

0x49c0,	// (0x0004348d) list_double2_pane_t1_cp2_ParamLimits

0x49c0,	// (0x0004348d) list_double2_pane_t1_cp2

0x49d6,	// (0x000434a3) list_double2_pane_t2_cp2_ParamLimits

0x49d6,	// (0x000434a3) list_double2_pane_t2_cp2

0x49e8,	// (0x000434b5) list_double_pane_g1_cp2_ParamLimits

0x49e8,	// (0x000434b5) list_double_pane_g1_cp2

0x49f4,	// (0x000434c1) list_double_pane_g2_cp2

0x49fc,	// (0x000434c9) list_double_pane_t1_cp2_ParamLimits

0x49fc,	// (0x000434c9) list_double_pane_t1_cp2

0x4a12,	// (0x000434df) list_double_pane_t2_cp2_ParamLimits

0x4a12,	// (0x000434df) list_double_pane_t2_cp2

0x4a3c,	// (0x00043509) list_single_pane_cp2_g3

0x4a4c,	// (0x00043519) list_single_pane_g1_cp2_ParamLimits

0x4a4c,	// (0x00043519) list_single_pane_g1_cp2

0x4a58,	// (0x00043525) list_single_pane_g2_cp2

0x4a60,	// (0x0004352d) list_single_pane_t1_cp2_ParamLimits

0x4a60,	// (0x0004352d) list_single_pane_t1_cp2

0x4a78,	// (0x00043545) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4a78,	// (0x00043545) list_single_large_graphic_pane_g1_cp2

0x4a84,	// (0x00043551) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4a84,	// (0x00043551) list_single_large_graphic_pane_g2_cp2

0x4a90,	// (0x0004355d) list_single_large_graphic_pane_g3_cp2

0x4a98,	// (0x00043565) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4a98,	// (0x00043565) list_single_large_graphic_pane_g4_cp1

0x4ab2,	// (0x0004357f) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4ab2,	// (0x0004357f) list_single_large_graphic_pane_t1_cp2

0x5fea,	// (0x00044ab7) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5fea,	// (0x00044ab7) list_single_graphic_heading_pane_g1_cp2

0x5fb7,	// (0x00044a84) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5fb7,	// (0x00044a84) list_single_graphic_heading_pane_g4_cp2

0x4a58,	// (0x00043525) list_single_graphic_heading_pane_g5_cp2

0x5ff6,	// (0x00044ac3) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5ff6,	// (0x00044ac3) list_single_graphic_heading_pane_t1_cp2

0x600c,	// (0x00044ad9) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x600c,	// (0x00044ad9) list_single_graphic_heading_pane_t2_cp2

0x5fab,	// (0x00044a78) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5fab,	// (0x00044a78) list_single_2graphic_pane_g1_cp2

0x5fb7,	// (0x00044a84) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5fb7,	// (0x00044a84) list_single_2graphic_pane_g2_cp2

0x4a58,	// (0x00043525) list_single_2graphic_pane_g3_cp2

0x5fc8,	// (0x00044a95) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5fc8,	// (0x00044a95) list_single_2graphic_pane_g4_cp2

0x5fd4,	// (0x00044aa1) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5fd4,	// (0x00044aa1) list_single_2graphic_pane_t1_cp2

0x3536,	// (0x00042003) list_highlight_pane_g10_cp1

0x5b83,	// (0x00044650) list_highlight_pane_g1_cp1

0x5b8b,	// (0x00044658) list_highlight_pane_g2_cp1

0x5b93,	// (0x00044660) list_highlight_pane_g3_cp1

0x5b9b,	// (0x00044668) list_highlight_pane_g4_cp1

0x5ba3,	// (0x00044670) list_highlight_pane_g5_cp1

0x5bab,	// (0x00044678) list_highlight_pane_g6_cp1

0x5bb3,	// (0x00044680) list_highlight_pane_g7_cp1

0x5bbb,	// (0x00044688) list_highlight_pane_g8_cp1

0x5bc3,	// (0x00044690) list_highlight_pane_g9_cp1

0xda5d,	// (0x0004c52a) form_field_slider_pane_t3

0xda6b,	// (0x0004c538) form_field_slider_pane_t4

0x5abf,	// (0x0004458c) slider_form_pane_ParamLimits

0x5abf,	// (0x0004458c) slider_form_pane

0x3540,	// (0x0004200d) control_abbreviations

0x3540,	// (0x0004200d) control_conventions

0x3540,	// (0x0004200d) control_definitions

0x3540,	// (0x0004200d) format_table_attribute

0x629d,	// (0x00044d6a) bg_popup_preview_window_pane_g9

0x3540,	// (0x0004200d) format_table_data2

0x3540,	// (0x0004200d) format_table_data3

0x3540,	// (0x0004200d) format_table_data_example

0x0008,

0x3540,	// (0x0004200d) intro_purpose

0xf8f5,	// (0x0004e3c2) bg_popup_preview_window_pane_g

0x3540,	// (0x0004200d) texts_category

0x3540,	// (0x0004200d) texts_graphics

0x4ac8,	// (0x00043595) text_digital

0x4ad7,	// (0x000435a4) text_primary

0x4ae6,	// (0x000435b3) text_primary_small

0x4af5,	// (0x000435c2) text_secondary

0x4b04,	// (0x000435d1) text_title

0x69c1,	// (0x0004548e) bg_passive_tab_pane_g1_cp3_srt

0x4760,	// (0x0004322d) bg_passive_tab_pane_g2_cp3_srt

0x69ca,	// (0x00045497) bg_passive_tab_pane_g3_cp3_srt

0x389b,	// (0x00042368) bg_active_tab_pane_cp3_srt_ParamLimits

0x389b,	// (0x00042368) bg_active_tab_pane_cp3_srt

0x69d3,	// (0x000454a0) tabs_4_active_pane_srt_g1

0xdda1,	// (0x0004c86e) tabs_4_active_pane_srt_t1_ParamLimits

0xdda1,	// (0x0004c86e) tabs_4_active_pane_srt_t1

0x69c1,	// (0x0004548e) bg_active_tab_pane_g1_cp3_copy1

0x4760,	// (0x0004322d) bg_active_tab_pane_g2_cp3_copy1

0x69ca,	// (0x00045497) bg_active_tab_pane_g3_cp3_copy1

0x3620,	// (0x000420ed) tabs_2_long_active_pane_srt_ParamLimits

0x3620,	// (0x000420ed) tabs_2_long_active_pane_srt

0x3620,	// (0x000420ed) tabs_2_long_passive_pane_srt_ParamLimits

0x3620,	// (0x000420ed) tabs_2_long_passive_pane_srt

0x4e53,	// (0x00043920) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4e53,	// (0x00043920) bg_passive_tab_pane_cp4_srt

0x66c8,	// (0x00045195) bg_passive_tab_pane_g1_cp4_srt

0x4760,	// (0x0004322d) bg_passive_tab_pane_g2_cp4_srt

0x66d1,	// (0x0004519e) bg_passive_tab_pane_g3_cp4_srt

0x3620,	// (0x000420ed) bg_active_tab_pane_cp4_srt_ParamLimits

0x3620,	// (0x000420ed) bg_active_tab_pane_cp4_srt

0xdbcb,	// (0x0004c698) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdbcb,	// (0x0004c698) tabs_2_long_active_pane_srt_t1

0x66c8,	// (0x00045195) bg_active_tab_pane_g1_cp4_srt

0x4760,	// (0x0004322d) bg_active_tab_pane_g2_cp4_srt

0x66d1,	// (0x0004519e) bg_active_tab_pane_g3_cp4_srt

0x389b,	// (0x00042368) tabs_3_long_active_pane_srt_ParamLimits

0x389b,	// (0x00042368) tabs_3_long_active_pane_srt

0x389b,	// (0x00042368) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x389b,	// (0x00042368) tabs_3_long_passive_pane_cp_srt

0x389b,	// (0x00042368) tabs_3_long_passive_pane_srt_ParamLimits

0x389b,	// (0x00042368) tabs_3_long_passive_pane_srt

0x4e53,	// (0x00043920) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4e53,	// (0x00043920) bg_passive_tab_pane_cp5_srt

0x47ea,	// (0x000432b7) bg_passive_tab_pane_g1_cp5_srt

0x4760,	// (0x0004322d) bg_passive_tab_pane_g2_cp5_srt

0x47f3,	// (0x000432c0) bg_passive_tab_pane_g3_cp5_srt

0x3620,	// (0x000420ed) bg_active_tab_pane_cp5_srt_ParamLimits

0x3620,	// (0x000420ed) bg_active_tab_pane_cp5_srt

0xdbb5,	// (0x0004c682) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdbb5,	// (0x0004c682) tabs_3_long_active_pane_srt_t1

0x47ea,	// (0x000432b7) bg_active_tab_pane_g1_cp5_srt

0x4760,	// (0x0004322d) bg_active_tab_pane_g2_cp5_srt

0x47f3,	// (0x000432c0) bg_active_tab_pane_g3_cp5_srt

0x66a8,	// (0x00045175) navi_text_pane_srt_t1

0x66a0,	// (0x0004516d) navi_icon_pane_srt_g1

0x4ccb,	// (0x00043798) midp_editing_number_pane_srt

0x4b13,	// (0x000435e0) midp_ticker_pane_srt

0x4cd3,	// (0x000437a0) midp_ticker_pane_srt_g1

0x4cdb,	// (0x000437a8) midp_ticker_pane_srt_g2

0x0001,

0xf77d,	// (0x0004e24a) midp_ticker_pane_srt_g

0x4ce3,	// (0x000437b0) midp_ticker_pane_srt_t1

0x6691,	// (0x0004515e) midp_editing_number_pane_t1_copy1

0x4e53,	// (0x00043920) listscroll_midp_pane

0x4e53,	// (0x00043920) midp_form_pane

0x4b7d,	// (0x0004364a) midp_info_popup_window_ParamLimits

0x4b7d,	// (0x0004364a) midp_info_popup_window

0x3f38,	// (0x00042a05) bg_popup_sub_pane_cp50_ParamLimits

0x3f38,	// (0x00042a05) bg_popup_sub_pane_cp50

0x57bb,	// (0x00044288) listscroll_midp_info_pane_ParamLimits

0x57bb,	// (0x00044288) listscroll_midp_info_pane

0x57a3,	// (0x00044270) listscroll_form_midp_pane_ParamLimits

0x57a3,	// (0x00044270) listscroll_form_midp_pane

0x57af,	// (0x0004427c) scroll_bar_cp050

0xda51,	// (0x0004c51e) list_midp_pane

0x7411,	// (0x00045ede) signal_pane_g2_cp

0x56bd,	// (0x0004418a) listscroll_midp_info_pane_t1_ParamLimits

0x56bd,	// (0x0004418a) listscroll_midp_info_pane_t1

0x56d5,	// (0x000441a2) listscroll_midp_info_pane_t2_ParamLimits

0x56d5,	// (0x000441a2) listscroll_midp_info_pane_t2

0x5713,	// (0x000441e0) listscroll_midp_info_pane_t3_ParamLimits

0x5713,	// (0x000441e0) listscroll_midp_info_pane_t3

0x574d,	// (0x0004421a) listscroll_midp_info_pane_t4_ParamLimits

0x574d,	// (0x0004421a) listscroll_midp_info_pane_t4

0x0003,

0xf830,	// (0x0004e2fd) listscroll_midp_info_pane_t_ParamLimits

0xf830,	// (0x0004e2fd) listscroll_midp_info_pane_t

0x3ffc,	// (0x00042ac9) scroll_pane_cp21

0x564f,	// (0x0004411c) form_midp_field_choice_group_pane

0x5664,	// (0x00044131) form_midp_field_text_pane

0x56a3,	// (0x00044170) form_midp_field_time_pane

0x56ab,	// (0x00044178) form_midp_gauge_slider_pane

0x56b4,	// (0x00044181) form_midp_gauge_wait_pane

0x3540,	// (0x0004200d) form_midp_image_pane

0xbcb7,	// (0x0004a784) list_single_midp_pane_ParamLimits

0xbcb7,	// (0x0004a784) list_single_midp_pane

0xda2f,	// (0x0004c4fc) form_midp_field_text_pane_t1

0x53d1,	// (0x00043e9e) input_focus_pane_cp050

0x563e,	// (0x0004410b) list_midp_form_text_pane

0x55d6,	// (0x000440a3) form_midp_field_choice_group_pane_t1

0x55e4,	// (0x000440b1) input_focus_pane_cp051

0x55f8,	// (0x000440c5) list_midp_choice_pane

0x3540,	// (0x0004200d) status_idle_pane

0x55ba,	// (0x00044087) form_midp_field_time_pane_t1

0x3536,	// (0x00042003) wait_anim_pane_g2_copy1

0x55c8,	// (0x00044095) form_midp_field_time_pane_t2

0x0001,

0x4c2b,	// (0x000436f8) aid_navinavi_width_2_pane

0xf82b,	// (0x0004e2f8) form_midp_field_time_pane_t

0x3540,	// (0x0004200d) input_focus_pane_cp052

0x3540,	// (0x0004200d) bg_input_focus_pane_cp040

0x557a,	// (0x00044047) form_midp_gauge_slider_pane_t1

0x5588,	// (0x00044055) form_midp_gauge_slider_pane_t2

0xda13,	// (0x0004c4e0) form_midp_gauge_slider_pane_t3

0xda21,	// (0x0004c4ee) form_midp_gauge_slider_pane_t4

0x0003,

0xf822,	// (0x0004e2ef) form_midp_gauge_slider_pane_t

0x55b2,	// (0x0004407f) form_midp_slider_pane

0x3620,	// (0x000420ed) bg_input_focus_pane_cp041_ParamLimits

0x3620,	// (0x000420ed) bg_input_focus_pane_cp041

0x5547,	// (0x00044014) form_midp_gauge_wait_pane_t1_ParamLimits

0x5547,	// (0x00044014) form_midp_gauge_wait_pane_t1

0x5559,	// (0x00044026) form_midp_gauge_wait_pane_t2_ParamLimits

0x5559,	// (0x00044026) form_midp_gauge_wait_pane_t2

0x0001,

0xf81d,	// (0x0004e2ea) form_midp_gauge_wait_pane_t_ParamLimits

0xf81d,	// (0x0004e2ea) form_midp_gauge_wait_pane_t

0x556b,	// (0x00044038) form_midp_wait_pane_ParamLimits

0x556b,	// (0x00044038) form_midp_wait_pane

0x5511,	// (0x00043fde) form_midp_image_pane_g1

0x551a,	// (0x00043fe7) form_midp_image_pane_t1

0x5529,	// (0x00043ff6) form_midp_image_pane_t2

0x5538,	// (0x00044005) form_midp_image_pane_t3

0x0002,

0xf816,	// (0x0004e2e3) form_midp_image_pane_t

0x5508,	// (0x00043fd5) list_single_midp_pane_g1

0x0a8e,	// (0x0003f55b) list_single_midp_pane_t1

0xd9fe,	// (0x0004c4cb) list_midp_form_item_pane_ParamLimits

0xd9fe,	// (0x0004c4cb) list_midp_form_item_pane

0x4bd3,	// (0x000436a0) list_midp_form_item_pane_t1

0x4be2,	// (0x000436af) midp_ticker_pane_g1

0x4bee,	// (0x000436bb) midp_ticker_pane_g2

0x0001,

0xf763,	// (0x0004e230) midp_ticker_pane_g

0x4bfa,	// (0x000436c7) midp_ticker_pane_t1

0x6924,	// (0x000453f1) midp_editing_number_pane_t1

0x6902,	// (0x000453cf) midp_editing_number_pane

0x6911,	// (0x000453de) midp_ticker_pane

0x6681,	// (0x0004514e) ai_message_heading_pane

0x3540,	// (0x0004200d) bg_popup_window_pane_cp14

0x6689,	// (0x00045156) listscroll_ai_message_pane

0x660b,	// (0x000450d8) ai_message_heading_pane_g1_ParamLimits

0x660b,	// (0x000450d8) ai_message_heading_pane_g1

0x6617,	// (0x000450e4) ai_message_heading_pane_g2_ParamLimits

0x6617,	// (0x000450e4) ai_message_heading_pane_g2

0x6623,	// (0x000450f0) ai_message_heading_pane_g3_ParamLimits

0x6623,	// (0x000450f0) ai_message_heading_pane_g3

0x662f,	// (0x000450fc) ai_message_heading_pane_g4_ParamLimits

0x662f,	// (0x000450fc) ai_message_heading_pane_g4

0x0003,

0xf957,	// (0x0004e424) ai_message_heading_pane_g_ParamLimits

0xf957,	// (0x0004e424) ai_message_heading_pane_g

0x663b,	// (0x00045108) ai_message_heading_pane_t1_ParamLimits

0x663b,	// (0x00045108) ai_message_heading_pane_t1

0x6655,	// (0x00045122) ai_message_heading_pane_t2_ParamLimits

0x6655,	// (0x00045122) ai_message_heading_pane_t2

0x0001,

0xf960,	// (0x0004e42d) ai_message_heading_pane_t_ParamLimits

0xf960,	// (0x0004e42d) ai_message_heading_pane_t

0x6667,	// (0x00045134) bg_popup_heading_pane_cp1_ParamLimits

0x6667,	// (0x00045134) bg_popup_heading_pane_cp1

0x65f9,	// (0x000450c6) list_ai_message_pane_ParamLimits

0x65f9,	// (0x000450c6) list_ai_message_pane

0x3ffc,	// (0x00042ac9) scroll_pane_cp10

0x6595,	// (0x00045062) list_ai_message_pane_g1

0x659d,	// (0x0004506a) list_ai_message_pane_g2

0x0001,

0xf934,	// (0x0004e401) list_ai_message_pane_g

0x65a5,	// (0x00045072) list_ai_message_pane_t1_ParamLimits

0x65a5,	// (0x00045072) list_ai_message_pane_t1

0x65ba,	// (0x00045087) list_ai_message_pane_t2_ParamLimits

0x65ba,	// (0x00045087) list_ai_message_pane_t2

0x65cf,	// (0x0004509c) list_ai_message_pane_t3_ParamLimits

0x65cf,	// (0x0004509c) list_ai_message_pane_t3

0x65e4,	// (0x000450b1) list_ai_message_pane_t4_ParamLimits

0x65e4,	// (0x000450b1) list_ai_message_pane_t4

0x0003,

0xf939,	// (0x0004e406) list_ai_message_pane_t_ParamLimits

0xf939,	// (0x0004e406) list_ai_message_pane_t

0xdb94,	// (0x0004c661) cell_ai_soft_ind_pane_ParamLimits

0xdb94,	// (0x0004c661) cell_ai_soft_ind_pane

0x4c0c,	// (0x000436d9) cell_ai_soft_ind_pane_g1_ParamLimits

0x4c0c,	// (0x000436d9) cell_ai_soft_ind_pane_g1

0x3540,	// (0x0004200d) grid_highlight_cp1

0x4c19,	// (0x000436e6) text_secondary_cp56_ParamLimits

0x4c19,	// (0x000436e6) text_secondary_cp56

0x6555,	// (0x00045022) example_general_pane_ParamLimits

0x6555,	// (0x00045022) example_general_pane

0x6561,	// (0x0004502e) example_parent_pane_g1_ParamLimits

0x6561,	// (0x0004502e) example_parent_pane_g1

0x656d,	// (0x0004503a) example_parent_pane_t1_ParamLimits

0x656d,	// (0x0004503a) example_parent_pane_t1

0xc622,	// (0x0004b0ef) popup_preview_text_window_ParamLimits

0xc622,	// (0x0004b0ef) popup_preview_text_window

0x4a44,	// (0x00043511) list_single_pane_cp2_g4

0x3951,	// (0x0004241e) bg_popup_preview_window_pane_ParamLimits

0x3951,	// (0x0004241e) bg_popup_preview_window_pane

0x62a5,	// (0x00044d72) popup_preview_text_window_t1_ParamLimits

0x62a5,	// (0x00044d72) popup_preview_text_window_t1

0x62c3,	// (0x00044d90) popup_preview_text_window_t2_ParamLimits

0x62c3,	// (0x00044d90) popup_preview_text_window_t2

0x630c,	// (0x00044dd9) popup_preview_text_window_t3_ParamLimits

0x630c,	// (0x00044dd9) popup_preview_text_window_t3

0x6351,	// (0x00044e1e) popup_preview_text_window_t4_ParamLimits

0x6351,	// (0x00044e1e) popup_preview_text_window_t4

0x0004,

0xf908,	// (0x0004e3d5) popup_preview_text_window_t_ParamLimits

0xf908,	// (0x0004e3d5) popup_preview_text_window_t

0x63cf,	// (0x00044e9c) scroll_pane_cp11

0x535d,	// (0x00043e2a) bg_popup_preview_window_pane_g1

0x6265,	// (0x00044d32) bg_popup_preview_window_pane_g2

0x626d,	// (0x00044d3a) bg_popup_preview_window_pane_g3

0x6275,	// (0x00044d42) bg_popup_preview_window_pane_g4

0x627d,	// (0x00044d4a) bg_popup_preview_window_pane_g5

0x6285,	// (0x00044d52) bg_popup_preview_window_pane_g6

0x628d,	// (0x00044d5a) bg_popup_preview_window_pane_g7

0x6295,	// (0x00044d62) bg_popup_preview_window_pane_g8

0x10e7,	// (0x0003fbb4) aid_popup_width_pane

0xc59e,	// (0x0004b06b) popup_midp_note_alarm_window_ParamLimits

0xc59e,	// (0x0004b06b) popup_midp_note_alarm_window

0x3e8c,	// (0x00042959) data_form_pane_ParamLimits

0xbb1f,	// (0x0004a5ec) form_field_data_pane_g1

0xbb29,	// (0x0004a5f6) form_field_data_pane_t1_ParamLimits

0x3e98,	// (0x00042965) input_focus_pane_ParamLimits

0x074d,	// (0x0003f21a) data_form_wide_pane_ParamLimits

0x075e,	// (0x0003f22b) form_field_data_wide_pane_g1

0x076a,	// (0x0003f237) form_field_data_wide_pane_t1_ParamLimits

0x3bfd,	// (0x000426ca) input_focus_pane_cp6_ParamLimits

0xd304,	// (0x0004bdd1) input_popup_find_pane_g1_ParamLimits

0xd304,	// (0x0004bdd1) input_popup_find_pane_g1

0x1705,	// (0x000401d2) aid_navi_side_left_pane

0x171a,	// (0x000401e7) aid_navi_side_right_pane

0x5c7e,	// (0x0004474b) bg_popup_window_pane_cp30_ParamLimits

0x5c7e,	// (0x0004474b) bg_popup_window_pane_cp30

0x5cf8,	// (0x000447c5) popup_midp_note_alarm_window_g1_ParamLimits

0x5cf8,	// (0x000447c5) popup_midp_note_alarm_window_g1

0x5d28,	// (0x000447f5) popup_midp_note_alarm_window_t1_ParamLimits

0x5d28,	// (0x000447f5) popup_midp_note_alarm_window_t1

0x5dc9,	// (0x00044896) popup_midp_note_alarm_window_t2_ParamLimits

0x5dc9,	// (0x00044896) popup_midp_note_alarm_window_t2

0x5e77,	// (0x00044944) popup_midp_note_alarm_window_t3_ParamLimits

0x5e77,	// (0x00044944) popup_midp_note_alarm_window_t3

0x5ea9,	// (0x00044976) popup_midp_note_alarm_window_t4_ParamLimits

0x5ea9,	// (0x00044976) popup_midp_note_alarm_window_t4

0x5ecf,	// (0x0004499c) popup_midp_note_alarm_window_t5_ParamLimits

0x5ecf,	// (0x0004499c) popup_midp_note_alarm_window_t5

0x000a,

0xf8a5,	// (0x0004e372) popup_midp_note_alarm_window_t_ParamLimits

0xf8a5,	// (0x0004e372) popup_midp_note_alarm_window_t

0x5f7b,	// (0x00044a48) wait_bar_pane_cp1_ParamLimits

0x5f7b,	// (0x00044a48) wait_bar_pane_cp1

0x3540,	// (0x0004200d) wait_anim_pane_copy1

0x3540,	// (0x0004200d) wait_border_pane_copy1

0x5964,	// (0x00044431) wait_border_pane_g1_copy1

0x0784,	// (0x0003f251) form_field_popup_pane_g1

0xbb43,	// (0x0004a610) form_field_popup_pane_t1_ParamLimits

0x3e98,	// (0x00042965) input_focus_pane_cp7_ParamLimits

0x3eba,	// (0x00042987) list_form_pane_ParamLimits

0x07a4,	// (0x0003f271) form_field_popup_wide_pane_g1

0x07ac,	// (0x0003f279) form_field_popup_wide_pane_t1_ParamLimits

0x3e98,	// (0x00042965) input_focus_pane_cp8_ParamLimits

0x3ec6,	// (0x00042993) list_form_wide_pane_ParamLimits

0x6a4d,	// (0x0004551a) aid_size_cell_graphic_pane

0xbbc2,	// (0x0004a68f) data_form_pane_t1_ParamLimits

0xbcdf,	// (0x0004a7ac) data_form_wide_pane_t1_ParamLimits

0xd683,	// (0x0004c150) bg_status_flat_pane

0xcfc3,	// (0x0004ba90) title_pane_t1_ParamLimits

0x35e8,	// (0x000420b5) title_pane_t2_ParamLimits

0x360e,	// (0x000420db) title_pane_t3_ParamLimits

0xf55d,	// (0x0004e02a) title_pane_t_ParamLimits

0x4477,	// (0x00042f44) level_1_signal_ParamLimits

0x4489,	// (0x00042f56) level_2_signal_ParamLimits

0x449c,	// (0x00042f69) level_3_signal_ParamLimits

0x44af,	// (0x00042f7c) level_4_signal_ParamLimits

0x44c2,	// (0x00042f8f) level_5_signal_ParamLimits

0x44d5,	// (0x00042fa2) level_6_signal_ParamLimits

0x44e8,	// (0x00042fb5) level_7_signal_ParamLimits

0x4477,	// (0x00042f44) level_1_battery_ParamLimits

0x4489,	// (0x00042f56) level_2_battery_ParamLimits

0x449c,	// (0x00042f69) level_3_battery_ParamLimits

0x44af,	// (0x00042f7c) level_4_battery_ParamLimits

0x44c2,	// (0x00042f8f) level_5_battery_ParamLimits

0x44d5,	// (0x00042fa2) level_6_battery_ParamLimits

0x44e8,	// (0x00042fb5) level_7_battery_ParamLimits

0x5b83,	// (0x00044650) bg_status_flat_pane_g1

0x5b8b,	// (0x00044658) bg_status_flat_pane_g2

0x5b93,	// (0x00044660) bg_status_flat_pane_g3

0x5b9b,	// (0x00044668) bg_status_flat_pane_g4

0x5ba3,	// (0x00044670) bg_status_flat_pane_g5

0x5bab,	// (0x00044678) bg_status_flat_pane_g6

0x5bb3,	// (0x00044680) bg_status_flat_pane_g7

0xd04f,	// (0x0004bb1c) tabs_3_active_pane_t1_ParamLimits

0xd04f,	// (0x0004bb1c) tabs_3_passive_pane_t1_ParamLimits

0xd061,	// (0x0004bb2e) tabs_4_active_pane_t1_ParamLimits

0xd061,	// (0x0004bb2e) tabs_4_1_passive_pane_t1_ParamLimits

0xd312,	// (0x0004bddf) tabs_2_active_pane_t1_ParamLimits

0xd312,	// (0x0004bddf) tabs_2_passive_pane_t1_ParamLimits

0x3620,	// (0x000420ed) bg_active_tab_pane_cp4_ParamLimits

0xd324,	// (0x0004bdf1) tabs_2_long_active_pane_t1_ParamLimits

0x4e53,	// (0x00043920) bg_passive_tab_pane_cp4_ParamLimits

0x2252,	// (0x00040d1f) list_single_midp_graphic_pane_t1_ParamLimits

0x3620,	// (0x000420ed) bg_active_tab_pane_cp5_ParamLimits

0xd337,	// (0x0004be04) tabs_3_long_active_pane_t1_ParamLimits

0x4e53,	// (0x00043920) bg_passive_tab_pane_cp5_ParamLimits

0x2252,	// (0x00040d1f) list_single_midp_graphic_pane_t1

0xd683,	// (0x0004c150) bg_status_flat_pane_ParamLimits

0x4fed,	// (0x00043aba) indicator_pane_cp2_ParamLimits

0x4fed,	// (0x00043aba) indicator_pane_cp2

0xd801,	// (0x0004c2ce) navi_pane_srt_ParamLimits

0xd801,	// (0x0004c2ce) navi_pane_srt

0x513c,	// (0x00043c09) popup_clock_digital_analogue_window_cp1

0x36fd,	// (0x000421ca) indicator_pane_t1

0x4b13,	// (0x000435e0) copy_highlight_pane

0x4b13,	// (0x000435e0) cursor_graphics_pane

0x4b13,	// (0x000435e0) graphic_within_text_pane

0x4b13,	// (0x000435e0) link_highlight_pane

0x6392,	// (0x00044e5f) popup_preview_text_window_t5_ParamLimits

0x6392,	// (0x00044e5f) popup_preview_text_window_t5

0x4c33,	// (0x00043700) cursor_digital_pane

0x4c33,	// (0x00043700) cursor_primary_pane

0x4c44,	// (0x00043711) cursor_primary_small_pane

0x4c4c,	// (0x00043719) cursor_secondary_pane

0x4c54,	// (0x00043721) cursor_title_pane

0x4c33,	// (0x00043700) link_highlight_digital_pane

0x4c3b,	// (0x00043708) link_highlight_primary_pane

0x4c44,	// (0x00043711) link_highlight_primary_small_pane

0x4c4c,	// (0x00043719) link_highlight_secondary_pane

0x4c54,	// (0x00043721) link_highlight_title_pane

0x4c33,	// (0x00043700) copy_highlight_digital_pane

0x4c33,	// (0x00043700) copy_highlight_primary_pane

0x4c44,	// (0x00043711) copy_highlight_primary_small_pane

0x4c4c,	// (0x00043719) copy_highlight_secondary_pane

0x4c54,	// (0x00043721) copy_highlight_title_pane

0x4c4c,	// (0x00043719) graphic_text_digital_pane

0x5c21,	// (0x000446ee) graphic_text_primary_pane

0x5c2a,	// (0x000446f7) graphic_text_primary_small_pane

0x4c44,	// (0x00043711) graphic_text_secondary_pane

0x4c33,	// (0x00043700) graphic_text_title_pane

0xd566,	// (0x0004c033) cursor_primary_pane_g1

0x5c13,	// (0x000446e0) cursor_text_primary_t1

0xda8d,	// (0x0004c55a) cursor_primary_small_pane_g1

0x5c05,	// (0x000446d2) cursor_text_primary_small_t1

0xda83,	// (0x0004c550) cursor_primary_small_pane_g1_copy1

0x5bed,	// (0x000446ba) cursor_text_primary_small_t1_copy1

0x5bcb,	// (0x00044698) cursor_text_title_t1

0xda79,	// (0x0004c546) cursor_title_pane_g1

0xd566,	// (0x0004c033) cursor_digital_pane_g1

0x4c66,	// (0x00043733) cursor_text_digital_t1

0x4c8b,	// (0x00043758) link_highlight_primary_pane_g1

0x5b74,	// (0x00044641) link_highlight_primary_pane_t1

0x4c74,	// (0x00043741) link_highlight_primary_small_pane_g1

0x4c7c,	// (0x00043749) link_highlight_primary_small_pane_t1

0x4c8b,	// (0x00043758) link_highlight_secondary_pane_g1

0x4c93,	// (0x00043760) link_highlight_secondary_pane_t1

0x5ae8,	// (0x000445b5) link_highlight_title_pane_g1

0x5af0,	// (0x000445bd) link_highlight_title_pane_t1

0x5ad1,	// (0x0004459e) link_highlight_digital_pane_g1

0x5ad9,	// (0x000445a6) link_highlight_digital_pane_t1

0x59a9,	// (0x00044476) copy_highlight_primary_pane_g1

0x59b1,	// (0x0004447e) copy_highlight_primary_pane_t1

0x5983,	// (0x00044450) copy_highlight_primary_small_pane_g1

0x599a,	// (0x00044467) copy_highlight_primary_small_pane_t1

0x4ca2,	// (0x0004376f) copy_highlight_secondary_pane_g1

0x4caa,	// (0x00043777) copy_highlight_secondary_pane_t1

0x5983,	// (0x00044450) copy_highlight_title_pane_g1

0x598b,	// (0x00044458) copy_highlight_title_pane_t1

0x59a9,	// (0x00044476) copy_highlight_digital_pane_g1

0x6c17,	// (0x000456e4) copy_highlight_digital_pane_t1

0x6b6b,	// (0x00045638) graphic_text_primary_pane_g1

0x6bfb,	// (0x000456c8) graphic_text_primary_pane_t1

0x6c09,	// (0x000456d6) graphic_text_primary_pane_t2

0x0001,

0xf9d4,	// (0x0004e4a1) graphic_text_primary_pane_t

0x6bd7,	// (0x000456a4) graphic_text_primary_small_pane_g1

0x6bdf,	// (0x000456ac) graphic_text_primary_small_pane_t1

0x6bed,	// (0x000456ba) graphic_text_primary_small_pane_t2

0x0001,

0xf9cf,	// (0x0004e49c) graphic_text_primary_small_pane_t

0x6bb3,	// (0x00045680) graphic_text_secondary_pane_g1

0x6bbb,	// (0x00045688) graphic_text_secondary_pane_t1

0x6bc9,	// (0x00045696) graphic_text_secondary_pane_t2

0x0001,

0xf9ca,	// (0x0004e497) graphic_text_secondary_pane_t

0x6b8f,	// (0x0004565c) graphic_text_title_pane_g1

0x6b97,	// (0x00045664) graphic_text_title_pane_t1

0x6ba5,	// (0x00045672) graphic_text_title_pane_t2

0x0001,

0xf9c5,	// (0x0004e492) graphic_text_title_pane_t

0x6b6b,	// (0x00045638) graphic_text_digital_pane_g1

0x6b73,	// (0x00045640) graphic_text_digital_pane_t1

0x6b81,	// (0x0004564e) graphic_text_digital_pane_t2

0x0001,

0xf9c0,	// (0x0004e48d) graphic_text_digital_pane_t

0x3620,	// (0x000420ed) navi_icon_pane_srt_ParamLimits

0x3620,	// (0x000420ed) navi_icon_pane_srt

0x3540,	// (0x0004200d) navi_midp_pane_srt

0x3540,	// (0x0004200d) navi_navi_pane_srt

0x3620,	// (0x000420ed) navi_text_pane_srt_ParamLimits

0x3620,	// (0x000420ed) navi_text_pane_srt

0x6b36,	// (0x00045603) navi_navi_icon_text_pane_srt

0x6b3e,	// (0x0004560b) navi_navi_pane_srt_g1_ParamLimits

0x6b3e,	// (0x0004560b) navi_navi_pane_srt_g1

0x6b50,	// (0x0004561d) navi_navi_pane_srt_g2_ParamLimits

0x6b50,	// (0x0004561d) navi_navi_pane_srt_g2

0x0001,

0xf9bb,	// (0x0004e488) navi_navi_pane_srt_g_ParamLimits

0xf9bb,	// (0x0004e488) navi_navi_pane_srt_g

0x6b62,	// (0x0004562f) navi_navi_tabs_pane_srt

0x6b36,	// (0x00045603) navi_navi_text_pane_srt

0x6b36,	// (0x00045603) navi_navi_volume_pane_srt

0x6b27,	// (0x000455f4) navi_navi_text_pane_srt_t1

0x2638,	// (0x00041105) navi_navi_volume_pane_srt_g1

0x2640,	// (0x0004110d) volume_small_pane_srt_ParamLimits

0x2640,	// (0x0004110d) volume_small_pane_srt

0x1a01,	// (0x000404ce) volume_small_pane_srt_g1_ParamLimits

0x1a01,	// (0x000404ce) volume_small_pane_srt_g1

0x1a11,	// (0x000404de) volume_small_pane_srt_g2_ParamLimits

0x1a11,	// (0x000404de) volume_small_pane_srt_g2

0x1a22,	// (0x000404ef) volume_small_pane_srt_g3_ParamLimits

0x1a22,	// (0x000404ef) volume_small_pane_srt_g3

0x1a33,	// (0x00040500) volume_small_pane_srt_g4_ParamLimits

0x1a33,	// (0x00040500) volume_small_pane_srt_g4

0x1a44,	// (0x00040511) volume_small_pane_srt_g5_ParamLimits

0x1a44,	// (0x00040511) volume_small_pane_srt_g5

0x1a55,	// (0x00040522) volume_small_pane_srt_g6_ParamLimits

0x1a55,	// (0x00040522) volume_small_pane_srt_g6

0x1a66,	// (0x00040533) volume_small_pane_srt_g7_ParamLimits

0x1a66,	// (0x00040533) volume_small_pane_srt_g7

0x1a77,	// (0x00040544) volume_small_pane_srt_g8_ParamLimits

0x1a77,	// (0x00040544) volume_small_pane_srt_g8

0x1a88,	// (0x00040555) volume_small_pane_srt_g9_ParamLimits

0x1a88,	// (0x00040555) volume_small_pane_srt_g9

0x1a99,	// (0x00040566) volume_small_pane_srt_g10_ParamLimits

0x1a99,	// (0x00040566) volume_small_pane_srt_g10

0x0009,

0xf768,	// (0x0004e235) volume_small_pane_srt_g_ParamLimits

0xf768,	// (0x0004e235) volume_small_pane_srt_g

0x39fa,	// (0x000424c7) query_popup_data_pane_cp2

0x6b0d,	// (0x000455da) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6b0d,	// (0x000455da) navi_navi_icon_text_pane_srt_t1

0x5c21,	// (0x000446ee) navi_tabs_2_long_pane_srt

0x5c21,	// (0x000446ee) navi_tabs_2_pane_srt

0x5c21,	// (0x000446ee) navi_tabs_3_long_pane_srt

0x5c21,	// (0x000446ee) navi_tabs_3_pane_srt

0x5c21,	// (0x000446ee) navi_tabs_4_pane_srt

0x2618,	// (0x000410e5) tabs_2_active_pane_srt_ParamLimits

0x2618,	// (0x000410e5) tabs_2_active_pane_srt

0x2628,	// (0x000410f5) tabs_2_passive_pane_srt_ParamLimits

0x2628,	// (0x000410f5) tabs_2_passive_pane_srt

0x53d1,	// (0x00043e9e) bg_passive_tab_pane_cp1_srt_ParamLimits

0x53d1,	// (0x00043e9e) bg_passive_tab_pane_cp1_srt

0x6ad9,	// (0x000455a6) bg_passive_tab_pane_g1_cp1_srt

0x4760,	// (0x0004322d) bg_passive_tab_pane_g2_cp1_srt

0x6ae2,	// (0x000455af) bg_passive_tab_pane_g3_cp1_srt

0x389b,	// (0x00042368) bg_active_tab_pane_cp1_srt_ParamLimits

0x389b,	// (0x00042368) bg_active_tab_pane_cp1_srt

0x6aeb,	// (0x000455b8) tabs_2_active_pane_srt_g1

0xde1e,	// (0x0004c8eb) tabs_2_active_pane_srt_t1_ParamLimits

0xde1e,	// (0x0004c8eb) tabs_2_active_pane_srt_t1

0x6ad9,	// (0x000455a6) bg_active_tab_pane_g1_cp1_srt

0x4760,	// (0x0004322d) bg_active_tab_pane_g2_cp1_srt

0x6ae2,	// (0x000455af) bg_active_tab_pane_g3_cp1_srt

0x25e5,	// (0x000410b2) tabs_3_active_pane_srt_ParamLimits

0x25e5,	// (0x000410b2) tabs_3_active_pane_srt

0x25f6,	// (0x000410c3) tabs_3_passive_pane_cp_srt_ParamLimits

0x25f6,	// (0x000410c3) tabs_3_passive_pane_cp_srt

0x2607,	// (0x000410d4) tabs_3_passive_pane_srt_ParamLimits

0x2607,	// (0x000410d4) tabs_3_passive_pane_srt

0x53d1,	// (0x00043e9e) bg_passive_tab_pane_cp2_srt_ParamLimits

0x53d1,	// (0x00043e9e) bg_passive_tab_pane_cp2_srt

0x4cb9,	// (0x00043786) bg_passive_tab_pane_g1_cp2_srt

0x4760,	// (0x0004322d) bg_passive_tab_pane_g2_cp2_srt

0x4cc2,	// (0x0004378f) bg_passive_tab_pane_g3_cp2_srt

0x389b,	// (0x00042368) bg_active_tab_pane_cp2_srt_ParamLimits

0x389b,	// (0x00042368) bg_active_tab_pane_cp2_srt

0x6abf,	// (0x0004558c) tabs_3_active_pane_srt_g1

0xde08,	// (0x0004c8d5) tabs_3_active_pane_srt_t1_ParamLimits

0xde08,	// (0x0004c8d5) tabs_3_active_pane_srt_t1

0x4cb9,	// (0x00043786) bg_active_tab_pane_g1_cp2_srt

0x4760,	// (0x0004322d) bg_active_tab_pane_g2_cp2_srt

0x4cc2,	// (0x0004378f) bg_active_tab_pane_g3_cp2_srt

0x259d,	// (0x0004106a) tabs_4_active_pane_srt_ParamLimits

0x259d,	// (0x0004106a) tabs_4_active_pane_srt

0x25af,	// (0x0004107c) tabs_4_passive_pane_cp2_srt_ParamLimits

0x25af,	// (0x0004107c) tabs_4_passive_pane_cp2_srt

0x1bfe,	// (0x000406cb) aid_size_cell_toolbar

0x677b,	// (0x00045248) main_idle_act_pane_ParamLimits

0x1db9,	// (0x00040886) popup_large_graphic_colour_window_ParamLimits

0xc8ae,	// (0x0004b37b) popup_toolbar_window_ParamLimits

0xc8ae,	// (0x0004b37b) popup_toolbar_window

0x6933,	// (0x00045400) list_single_graphic_2heading_pane_ParamLimits

0x6933,	// (0x00045400) list_single_graphic_2heading_pane

0x422c,	// (0x00042cf9) aid_size_cell_apps_grid_lsc_pane

0x423e,	// (0x00042d0b) aid_size_cell_apps_grid_prt_pane

0x4e53,	// (0x00043920) bg_wml_button_pane_cp1_ParamLimits

0x4e53,	// (0x00043920) bg_wml_button_pane_cp1

0xda2f,	// (0x0004c4fc) form_midp_field_text_pane_t1_ParamLimits

0x53d1,	// (0x00043e9e) input_focus_pane_cp050_ParamLimits

0x563e,	// (0x0004410b) list_midp_form_text_pane_ParamLimits

0x55e4,	// (0x000440b1) input_focus_pane_cp051_ParamLimits

0x55f8,	// (0x000440c5) list_midp_choice_pane_ParamLimits

0xd9cc,	// (0x0004c499) list_single_2graphic_pane_cp3_ParamLimits

0xd9cc,	// (0x0004c499) list_single_2graphic_pane_cp3

0xd9df,	// (0x0004c4ac) list_single_midp_graphic_pane_ParamLimits

0xd9df,	// (0x0004c4ac) list_single_midp_graphic_pane

0x0960,	// (0x0003f42d) list_single_graphic_2heading_pane_g1_ParamLimits

0x0960,	// (0x0003f42d) list_single_graphic_2heading_pane_g1

0x096c,	// (0x0003f439) list_single_graphic_2heading_pane_g4_ParamLimits

0x096c,	// (0x0003f439) list_single_graphic_2heading_pane_g4

0x0978,	// (0x0003f445) list_single_graphic_2heading_pane_g5_ParamLimits

0x0978,	// (0x0003f445) list_single_graphic_2heading_pane_g5

0x0002,

0xf7bb,	// (0x0004e288) list_single_graphic_2heading_pane_g_ParamLimits

0xf7bb,	// (0x0004e288) list_single_graphic_2heading_pane_g

0x0984,	// (0x0003f451) list_single_graphic_2heading_pane_t1_ParamLimits

0x0984,	// (0x0003f451) list_single_graphic_2heading_pane_t1

0x0998,	// (0x0003f465) list_single_graphic_2heading_pane_t2_ParamLimits

0x0998,	// (0x0003f465) list_single_graphic_2heading_pane_t2

0x09b4,	// (0x0003f481) list_single_graphic_2heading_pane_t3_ParamLimits

0x09b4,	// (0x0003f481) list_single_graphic_2heading_pane_t3

0x0002,

0xf7c2,	// (0x0004e28f) list_single_graphic_2heading_pane_t_ParamLimits

0xf7c2,	// (0x0004e28f) list_single_graphic_2heading_pane_t

0x529b,	// (0x00043d68) bg_popup_sub_pane_cp2

0x52c5,	// (0x00043d92) grid_toobar_pane

0x21cd,	// (0x00040c9a) cell_toolbar_pane_ParamLimits

0x21cd,	// (0x00040c9a) cell_toolbar_pane

0x5301,	// (0x00043dce) cell_toolbar_pane_g1_ParamLimits

0x5301,	// (0x00043dce) cell_toolbar_pane_g1

0x5315,	// (0x00043de2) cell_toolbar_pane_g2_ParamLimits

0x5315,	// (0x00043de2) cell_toolbar_pane_g2

0x0001,

0xf7d0,	// (0x0004e29d) cell_toolbar_pane_g_ParamLimits

0xf7d0,	// (0x0004e29d) cell_toolbar_pane_g

0x5337,	// (0x00043e04) grid_highlight_pane_cp2_ParamLimits

0x5337,	// (0x00043e04) grid_highlight_pane_cp2

0x5351,	// (0x00043e1e) toolbar_button_pane

0x535d,	// (0x00043e2a) toolbar_button_pane_g1

0x5365,	// (0x00043e32) toolbar_button_pane_g2

0x536d,	// (0x00043e3a) toolbar_button_pane_g3

0x5375,	// (0x00043e42) toolbar_button_pane_g4

0x537d,	// (0x00043e4a) toolbar_button_pane_g5

0x5385,	// (0x00043e52) toolbar_button_pane_g6

0x538d,	// (0x00043e5a) toolbar_button_pane_g7

0x5395,	// (0x00043e62) toolbar_button_pane_g8

0x539d,	// (0x00043e6a) toolbar_button_pane_g9

0x0009,

0xf7d5,	// (0x0004e2a2) toolbar_button_pane_g

0x2211,	// (0x00040cde) list_single_2graphic_pane_g1_cp3_ParamLimits

0x2211,	// (0x00040cde) list_single_2graphic_pane_g1_cp3

0xc906,	// (0x0004b3d3) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc906,	// (0x0004b3d3) list_single_2graphic_pane_g2_cp3

0x222e,	// (0x00040cfb) list_single_2graphic_pane_g3_cp3

0x18b4,	// (0x00040381) list_single_2graphic_pane_g4_cp3_ParamLimits

0x18b4,	// (0x00040381) list_single_2graphic_pane_g4_cp3

0x2236,	// (0x00040d03) list_single_2graphic_pane_t1_cp3_ParamLimits

0x2236,	// (0x00040d03) list_single_2graphic_pane_t1_cp3

0x5658,	// (0x00044125) list_single_midp_graphic_pane_g2_ParamLimits

0x5658,	// (0x00044125) list_single_midp_graphic_pane_g2

0x0950,	// (0x0003f41d) aid_zoom_text_primary

0x1c06,	// (0x000406d3) aid_zoom_text_secondary

0x4d76,	// (0x00043843) status_small_pane_g7_ParamLimits

0x4d76,	// (0x00043843) status_small_pane_g7

0x4d99,	// (0x00043866) status_small_pane_t1_ParamLimits

0xcf9f,	// (0x0004ba6c) title_pane_g2

0x0003,

0xf554,	// (0x0004e021) title_pane_g

0xd217,	// (0x0004bce4) aid_size_cell_colour_1_pane_ParamLimits

0xd217,	// (0x0004bce4) aid_size_cell_colour_1_pane

0xd22b,	// (0x0004bcf8) aid_size_cell_colour_2_pane_ParamLimits

0xd22b,	// (0x0004bcf8) aid_size_cell_colour_2_pane

0xd23f,	// (0x0004bd0c) aid_size_cell_colour_3_pane_ParamLimits

0xd23f,	// (0x0004bd0c) aid_size_cell_colour_3_pane

0xd253,	// (0x0004bd20) aid_size_cell_colour_4_pane_ParamLimits

0xd253,	// (0x0004bd20) aid_size_cell_colour_4_pane

0x1642,	// (0x0004010f) title_pane_stacon_g1_ParamLimits

0x1642,	// (0x0004010f) title_pane_stacon_g1

0x5a08,	// (0x000444d5) popup_note_wait_window_g3_ParamLimits

0x5a08,	// (0x000444d5) popup_note_wait_window_g3

0x5a7e,	// (0x0004454b) popup_note_wait_window_t5_ParamLimits

0x5a7e,	// (0x0004454b) popup_note_wait_window_t5

0x3540,	// (0x0004200d) main_feb_china_hwr_fs_writing_pane

0xc2bc,	// (0x0004ad89) popup_feb_china_hwr_fs_window_ParamLimits

0xc2bc,	// (0x0004ad89) popup_feb_china_hwr_fs_window

0xc917,	// (0x0004b3e4) aid_size_cell_hwr_fs_ParamLimits

0xc917,	// (0x0004b3e4) aid_size_cell_hwr_fs

0x53d1,	// (0x00043e9e) bg_popup_sub_pane_cp3_ParamLimits

0x53d1,	// (0x00043e9e) bg_popup_sub_pane_cp3

0xc92c,	// (0x0004b3f9) grid_hwr_fs_pane_ParamLimits

0xc92c,	// (0x0004b3f9) grid_hwr_fs_pane

0x22ad,	// (0x00040d7a) linegrid_hwr_fs_pane_ParamLimits

0x22ad,	// (0x00040d7a) linegrid_hwr_fs_pane

0xc944,	// (0x0004b411) cell_hwr_fs_pane_ParamLimits

0xc944,	// (0x0004b411) cell_hwr_fs_pane

0x53dd,	// (0x00043eaa) linegrid_hwr_fs_pane_g1_ParamLimits

0x53dd,	// (0x00043eaa) linegrid_hwr_fs_pane_g1

0xd9a0,	// (0x0004c46d) linegrid_hwr_fs_pane_g2_ParamLimits

0xd9a0,	// (0x0004c46d) linegrid_hwr_fs_pane_g2

0x53fb,	// (0x00043ec8) linegrid_hwr_fs_pane_g3_ParamLimits

0x53fb,	// (0x00043ec8) linegrid_hwr_fs_pane_g3

0x22df,	// (0x00040dac) linegrid_hwr_fs_pane_g4_ParamLimits

0x22df,	// (0x00040dac) linegrid_hwr_fs_pane_g4

0x22f9,	// (0x00040dc6) linegrid_hwr_fs_pane_g5_ParamLimits

0x22f9,	// (0x00040dc6) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fb,	// (0x0004e2c8) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0004e2c8) linegrid_hwr_fs_pane_g

0x5407,	// (0x00043ed4) cell_hwr_fs_pane_g1_ParamLimits

0x5407,	// (0x00043ed4) cell_hwr_fs_pane_g1

0x51d2,	// (0x00043c9f) cell_hwr_fs_pane_g2_ParamLimits

0x51d2,	// (0x00043c9f) cell_hwr_fs_pane_g2

0xd9b2,	// (0x0004c47f) cell_hwr_fs_pane_g3_ParamLimits

0xd9b2,	// (0x0004c47f) cell_hwr_fs_pane_g3

0xd9bf,	// (0x0004c48c) cell_hwr_fs_pane_g4_ParamLimits

0xd9bf,	// (0x0004c48c) cell_hwr_fs_pane_g4

0x0003,

0xf806,	// (0x0004e2d3) cell_hwr_fs_pane_g_ParamLimits

0xf806,	// (0x0004e2d3) cell_hwr_fs_pane_g

0xc96a,	// (0x0004b437) cell_hwr_fs_pane_t1

0x3540,	// (0x0004200d) grid_highlight_pane_cp6

0x3540,	// (0x0004200d) main_idle_act2_pane

0x3fe3,	// (0x00042ab0) aid_inside_area_popup_secondary

0xda97,	// (0x0004c564) aid_inside_area_window_primary_ParamLimits

0xda97,	// (0x0004c564) aid_inside_area_window_primary

0x6c26,	// (0x000456f3) ai2_news_ticker_pane

0x6c2e,	// (0x000456fb) aid_size_cell_ai1_link_ParamLimits

0x6c2e,	// (0x000456fb) aid_size_cell_ai1_link

0xde34,	// (0x0004c901) popup_ai2_data_window_ParamLimits

0xde34,	// (0x0004c901) popup_ai2_data_window

0x6c5e,	// (0x0004572b) popup_ai2_link_window_ParamLimits

0x6c5e,	// (0x0004572b) popup_ai2_link_window

0x53d1,	// (0x00043e9e) bg_popup_sub_pane_cp4_ParamLimits

0x53d1,	// (0x00043e9e) bg_popup_sub_pane_cp4

0x6c72,	// (0x0004573f) grid_ai2_link_pane_ParamLimits

0x6c72,	// (0x0004573f) grid_ai2_link_pane

0x6c89,	// (0x00045756) popup_ai2_link_window_g1_ParamLimits

0x6c89,	// (0x00045756) popup_ai2_link_window_g1

0x6c95,	// (0x00045762) popup_ai2_link_window_g2_ParamLimits

0x6c95,	// (0x00045762) popup_ai2_link_window_g2

0x0001,

0xf9d9,	// (0x0004e4a6) popup_ai2_link_window_g_ParamLimits

0xf9d9,	// (0x0004e4a6) popup_ai2_link_window_g

0x6ca4,	// (0x00045771) ai2_mp_button_pane

0x6cac,	// (0x00045779) ai2_mp_volume_pane

0x55e4,	// (0x000440b1) bg_popup_sub_pane_cp5_ParamLimits

0x55e4,	// (0x000440b1) bg_popup_sub_pane_cp5

0x6cb4,	// (0x00045781) heading_ai2_gene_pane_ParamLimits

0x6cb4,	// (0x00045781) heading_ai2_gene_pane

0x6cc0,	// (0x0004578d) list_ai2_gene_pane_ParamLimits

0x6cc0,	// (0x0004578d) list_ai2_gene_pane

0x6d08,	// (0x000457d5) cell_ai2_link_pane_ParamLimits

0x6d08,	// (0x000457d5) cell_ai2_link_pane

0x6d1e,	// (0x000457eb) cell_ai2_link_pane_g1

0x3540,	// (0x0004200d) grid_highlight_pane_cp7

0x2655,	// (0x00041122) ai2_mp_volume_pane_g1

0x6dee,	// (0x000458bb) ai2_mp_volume_pane_g2

0xde5e,	// (0x0004c92b) list_ai2_gene_pane_t1

0x6df6,	// (0x000458c3) ai2_mp_volume_pane_g3

0x0002,

0xf9f2,	// (0x0004e4bf) ai2_mp_volume_pane_g

0x265d,	// (0x0004112a) volume_small_pane_cp3

0x6dfe,	// (0x000458cb) aid_size_cell_ai2_button

0x6e06,	// (0x000458d3) grid_ai2_button_pane

0x6e0f,	// (0x000458dc) cell_ai2_button_pane_ParamLimits

0x6e0f,	// (0x000458dc) cell_ai2_button_pane

0x3536,	// (0x00042003) cell_ai2_button_pane_g1

0x3540,	// (0x0004200d) grid_highlight_pane_cp8

0x6dae,	// (0x0004587b) ai2_gene_pane_t1_ParamLimits

0x6dae,	// (0x0004587b) ai2_gene_pane_t1

0xc236,	// (0x0004ad03) aid_height_parent_landscape

0xdbe2,	// (0x0004c6af) aid_height_set_list

0x677b,	// (0x00045248) aid_size_parent

0x6a4d,	// (0x0004551a) aid_size_cell_graphic_pane_ParamLimits

0x6cd0,	// (0x0004579d) popup_ai2_data_window_g1_ParamLimits

0x6cd0,	// (0x0004579d) popup_ai2_data_window_g1

0x6cdc,	// (0x000457a9) ai2_news_ticker_pane_g1

0x6ce4,	// (0x000457b1) ai2_news_ticker_pane_g2

0x0001,

0xf9de,	// (0x0004e4ab) ai2_news_ticker_pane_g

0x6cec,	// (0x000457b9) ai2_news_ticker_pane_t1

0x6cfa,	// (0x000457c7) ai2_news_ticker_pane_t2

0x0001,

0xf9e3,	// (0x0004e4b0) ai2_news_ticker_pane_t

0x6d27,	// (0x000457f4) heading_ai2_gene_pane_g1

0x6d2f,	// (0x000457fc) heading_ai2_gene_pane_t1_ParamLimits

0x6d2f,	// (0x000457fc) heading_ai2_gene_pane_t1

0x6d44,	// (0x00045811) list_highlight_pane_cp6

0xde48,	// (0x0004c915) ai2_gene_pane_ParamLimits

0xde48,	// (0x0004c915) ai2_gene_pane

0xde6c,	// (0x0004c939) list_ai2_gene_pane_t2

0x0001,

0xf9e8,	// (0x0004e4b5) list_ai2_gene_pane_t

0x6d7f,	// (0x0004584c) list_highlight_pane_cp8_ParamLimits

0x6d7f,	// (0x0004584c) list_highlight_pane_cp8

0x6d90,	// (0x0004585d) ai2_gene_pane_g1_ParamLimits

0x6d90,	// (0x0004585d) ai2_gene_pane_g1

0x6da2,	// (0x0004586f) ai2_gene_pane_g2_ParamLimits

0x6da2,	// (0x0004586f) ai2_gene_pane_g2

0x0001,

0xf9ed,	// (0x0004e4ba) ai2_gene_pane_g_ParamLimits

0xf9ed,	// (0x0004e4ba) ai2_gene_pane_g

0x3e22,	// (0x000428ef) scroll_pane_cp12

0xc1f5,	// (0x0004acc2) control_pane_t3_ParamLimits

0xc1f5,	// (0x0004acc2) control_pane_t3

0x4d8a,	// (0x00043857) status_small_pane_g8_ParamLimits

0x4d8a,	// (0x00043857) status_small_pane_g8

0xc351,	// (0x0004ae1e) popup_find_window_ParamLimits

0xc5d8,	// (0x0004b0a5) popup_note_image_window_ParamLimits

0x09cc,	// (0x0003f499) list_double2_graphic_pane_vc_g1_ParamLimits

0x09cc,	// (0x0003f499) list_double2_graphic_pane_vc_g1

0x4a4c,	// (0x00043519) list_double2_graphic_pane_vc_g2_ParamLimits

0x4a4c,	// (0x00043519) list_double2_graphic_pane_vc_g2

0x21fd,	// (0x00040cca) list_double2_graphic_pane_vc_g3_ParamLimits

0x21fd,	// (0x00040cca) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c9,	// (0x0004e296) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c9,	// (0x0004e296) list_double2_graphic_pane_vc_g

0x09d8,	// (0x0003f4a5) list_double2_graphic_pane_vc_t1_ParamLimits

0x09d8,	// (0x0003f4a5) list_double2_graphic_pane_vc_t1

0x4a4c,	// (0x00043519) list_single_heading_pane_vc_g1_ParamLimits

0x4a4c,	// (0x00043519) list_single_heading_pane_vc_g1

0x21fd,	// (0x00040cca) list_single_heading_pane_vc_g2_ParamLimits

0x21fd,	// (0x00040cca) list_single_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x0004e0a5) list_single_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x0004e0a5) list_single_heading_pane_vc_g

0x09ee,	// (0x0003f4bb) list_single_heading_pane_vc_t1_ParamLimits

0x09ee,	// (0x0003f4bb) list_single_heading_pane_vc_t1

0x0a06,	// (0x0003f4d3) list_single_heading_pane_vc_t2_ParamLimits

0x0a06,	// (0x0003f4d3) list_single_heading_pane_vc_t2

0x0001,

0xf7ea,	// (0x0004e2b7) list_single_heading_pane_vc_t_ParamLimits

0xf7ea,	// (0x0004e2b7) list_single_heading_pane_vc_t

0x2268,	// (0x00040d35) list_setting_number_pane_vc_g1_ParamLimits

0x2268,	// (0x00040d35) list_setting_number_pane_vc_g1

0x2274,	// (0x00040d41) list_setting_number_pane_vc_g2_ParamLimits

0x2274,	// (0x00040d41) list_setting_number_pane_vc_g2

0x0001,

0xf7ef,	// (0x0004e2bc) list_setting_number_pane_vc_g_ParamLimits

0xf7ef,	// (0x0004e2bc) list_setting_number_pane_vc_g

0x0a22,	// (0x0003f4ef) list_setting_number_pane_vc_t1_ParamLimits

0x0a22,	// (0x0003f4ef) list_setting_number_pane_vc_t1

0x0a36,	// (0x0003f503) list_setting_number_pane_vc_t2_ParamLimits

0x0a36,	// (0x0003f503) list_setting_number_pane_vc_t2

0x0a52,	// (0x0003f51f) list_setting_number_pane_vc_t3_ParamLimits

0x0a52,	// (0x0003f51f) list_setting_number_pane_vc_t3

0x0002,

0xf7f4,	// (0x0004e2c1) list_setting_number_pane_vc_t_ParamLimits

0xf7f4,	// (0x0004e2c1) list_setting_number_pane_vc_t

0x0a7e,	// (0x0003f54b) set_value_pane_vc_ParamLimits

0x0a7e,	// (0x0003f54b) set_value_pane_vc

0x6933,	// (0x00045400) list_double2_graphic_pane_vc_ParamLimits

0x6933,	// (0x00045400) list_double2_graphic_pane_vc

0x0b36,	// (0x0003f603) list_double2_large_graphic_pane_vc_ParamLimits

0x0b36,	// (0x0003f603) list_double2_large_graphic_pane_vc

0x6933,	// (0x00045400) list_double2_pane_vc_ParamLimits

0x6933,	// (0x00045400) list_double2_pane_vc

0x6933,	// (0x00045400) list_double_graphic_heading_pane_vc_ParamLimits

0x6933,	// (0x00045400) list_double_graphic_heading_pane_vc

0x6933,	// (0x00045400) list_double_graphic_pane_vc_ParamLimits

0x6933,	// (0x00045400) list_double_graphic_pane_vc

0x6933,	// (0x00045400) list_double_heading_pane_vc_ParamLimits

0x6933,	// (0x00045400) list_double_heading_pane_vc

0x0b36,	// (0x0003f603) list_double_large_graphic_pane_vc_ParamLimits

0x0b36,	// (0x0003f603) list_double_large_graphic_pane_vc

0x6933,	// (0x00045400) list_double_number_pane_vc_ParamLimits

0x6933,	// (0x00045400) list_double_number_pane_vc

0x6933,	// (0x00045400) list_double_pane_vc_ParamLimits

0x6933,	// (0x00045400) list_double_pane_vc

0x6933,	// (0x00045400) list_double_time_pane_vc_ParamLimits

0x6933,	// (0x00045400) list_double_time_pane_vc

0x6933,	// (0x00045400) list_setting_number_pane_vc_ParamLimits

0x6933,	// (0x00045400) list_setting_number_pane_vc

0x6933,	// (0x00045400) list_setting_pane_vc_ParamLimits

0x6933,	// (0x00045400) list_setting_pane_vc

0x6933,	// (0x00045400) list_single_graphic_heading_pane_vc_ParamLimits

0x6933,	// (0x00045400) list_single_graphic_heading_pane_vc

0x6933,	// (0x00045400) list_single_heading_pane_vc_ParamLimits

0x6933,	// (0x00045400) list_single_heading_pane_vc

0x6933,	// (0x00045400) list_single_number_heading_pane_vc_ParamLimits

0x6933,	// (0x00045400) list_single_number_heading_pane_vc

0x09cc,	// (0x0003f499) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x09cc,	// (0x0003f499) list_double_graphic_heading_pane_vc_g1

0x4a4c,	// (0x00043519) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4a4c,	// (0x00043519) list_double_graphic_heading_pane_vc_g2

0x21fd,	// (0x00040cca) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x21fd,	// (0x00040cca) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c9,	// (0x0004e296) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x0004e296) list_double_graphic_heading_pane_vc_g

0x0b7a,	// (0x0003f647) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0b7a,	// (0x0003f647) list_double_graphic_heading_pane_vc_t1

0x0b96,	// (0x0003f663) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0b96,	// (0x0003f663) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f9,	// (0x0004e4c6) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f9,	// (0x0004e4c6) list_double_graphic_heading_pane_vc_t

0x2268,	// (0x00040d35) list_setting_pane_vc_g1_ParamLimits

0x2268,	// (0x00040d35) list_setting_pane_vc_g1

0x2274,	// (0x00040d41) list_setting_pane_vc_g2_ParamLimits

0x2274,	// (0x00040d41) list_setting_pane_vc_g2

0x0001,

0xf7ef,	// (0x0004e2bc) list_setting_pane_vc_g_ParamLimits

0xf7ef,	// (0x0004e2bc) list_setting_pane_vc_g

0x0bb4,	// (0x0003f681) list_setting_pane_vc_t1_ParamLimits

0x0bb4,	// (0x0003f681) list_setting_pane_vc_t1

0x0bd0,	// (0x0003f69d) list_setting_pane_vc_t2_ParamLimits

0x0bd0,	// (0x0003f69d) list_setting_pane_vc_t2

0x0001,

0xfa27,	// (0x0004e4f4) list_setting_pane_vc_t_ParamLimits

0xfa27,	// (0x0004e4f4) list_setting_pane_vc_t

0x0a7e,	// (0x0003f54b) set_value_pane_cp_vc_ParamLimits

0x0a7e,	// (0x0003f54b) set_value_pane_cp_vc

0x4a4c,	// (0x00043519) list_single_number_heading_pane_vc_g1_ParamLimits

0x4a4c,	// (0x00043519) list_single_number_heading_pane_vc_g1

0x21fd,	// (0x00040cca) list_single_number_heading_pane_vc_g2_ParamLimits

0x21fd,	// (0x00040cca) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x0004e0a5) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x0004e0a5) list_single_number_heading_pane_vc_g

0x09ee,	// (0x0003f4bb) list_single_number_heading_pane_vc_t1_ParamLimits

0x09ee,	// (0x0003f4bb) list_single_number_heading_pane_vc_t1

0x0bec,	// (0x0003f6b9) list_single_number_heading_pane_vc_t2_ParamLimits

0x0bec,	// (0x0003f6b9) list_single_number_heading_pane_vc_t2

0x0c00,	// (0x0003f6cd) list_single_number_heading_pane_vc_t3_ParamLimits

0x0c00,	// (0x0003f6cd) list_single_number_heading_pane_vc_t3

0x0002,

0xfa2c,	// (0x0004e4f9) list_single_number_heading_pane_vc_t_ParamLimits

0xfa2c,	// (0x0004e4f9) list_single_number_heading_pane_vc_t

0x09cc,	// (0x0003f499) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x09cc,	// (0x0003f499) list_single_graphic_heading_pane_vc_g1

0x4a4c,	// (0x00043519) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4a4c,	// (0x00043519) list_single_graphic_heading_pane_vc_g4

0x21fd,	// (0x00040cca) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x21fd,	// (0x00040cca) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c9,	// (0x0004e296) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x0004e296) list_single_graphic_heading_pane_vc_g

0x09ee,	// (0x0003f4bb) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x09ee,	// (0x0003f4bb) list_single_graphic_heading_pane_vc_t1

0x0c12,	// (0x0003f6df) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0c12,	// (0x0003f6df) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa33,	// (0x0004e500) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa33,	// (0x0004e500) list_single_graphic_heading_pane_vc_t

0x4a4c,	// (0x00043519) list_double2_pane_vc_g1_ParamLimits

0x4a4c,	// (0x00043519) list_double2_pane_vc_g1

0x21fd,	// (0x00040cca) list_double2_pane_vc_g2_ParamLimits

0x21fd,	// (0x00040cca) list_double2_pane_vc_g2

0x0001,

0xf5d8,	// (0x0004e0a5) list_double2_pane_vc_g_ParamLimits

0xf5d8,	// (0x0004e0a5) list_double2_pane_vc_g

0x0c26,	// (0x0003f6f3) list_double2_pane_vc_t1_ParamLimits

0x0c26,	// (0x0003f6f3) list_double2_pane_vc_t1

0x0c3c,	// (0x0003f709) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0c3c,	// (0x0003f709) list_double2_large_graphic_pane_vc_g1

0x0c48,	// (0x0003f715) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0c48,	// (0x0003f715) list_double2_large_graphic_pane_vc_g2

0x0c54,	// (0x0003f721) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0c54,	// (0x0003f721) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5f0,	// (0x0004e0bd) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5f0,	// (0x0004e0bd) list_double2_large_graphic_pane_vc_g

0x0c60,	// (0x0003f72d) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0c60,	// (0x0003f72d) list_double2_large_graphic_pane_vc_t1

0x2666,	// (0x00041133) list_double_time_pane_vc_g1_ParamLimits

0x2666,	// (0x00041133) list_double_time_pane_vc_g1

0x2672,	// (0x0004113f) list_double_time_pane_vc_g2_ParamLimits

0x2672,	// (0x0004113f) list_double_time_pane_vc_g2

0x0001,

0xfa38,	// (0x0004e505) list_double_time_pane_vc_g_ParamLimits

0xfa38,	// (0x0004e505) list_double_time_pane_vc_g

0x0c76,	// (0x0003f743) list_double_time_pane_vc_t1_ParamLimits

0x0c76,	// (0x0003f743) list_double_time_pane_vc_t1

0x0c9a,	// (0x0003f767) list_double_time_pane_vc_t2_ParamLimits

0x0c9a,	// (0x0003f767) list_double_time_pane_vc_t2

0x0ce9,	// (0x0003f7b6) list_double_time_pane_vc_t3_ParamLimits

0x0ce9,	// (0x0003f7b6) list_double_time_pane_vc_t3

0x0cfb,	// (0x0003f7c8) list_double_time_pane_vc_t4_ParamLimits

0x0cfb,	// (0x0003f7c8) list_double_time_pane_vc_t4

0x0003,

0xfa3d,	// (0x0004e50a) list_double_time_pane_vc_t_ParamLimits

0xfa3d,	// (0x0004e50a) list_double_time_pane_vc_t

0x4a4c,	// (0x00043519) list_double_pane_vc_g1_ParamLimits

0x4a4c,	// (0x00043519) list_double_pane_vc_g1

0x21fd,	// (0x00040cca) list_double_pane_vc_g2_ParamLimits

0x21fd,	// (0x00040cca) list_double_pane_vc_g2

0x0001,

0xf5d8,	// (0x0004e0a5) list_double_pane_vc_g_ParamLimits

0xf5d8,	// (0x0004e0a5) list_double_pane_vc_g

0x0d0f,	// (0x0003f7dc) list_double_pane_vc_t1_ParamLimits

0x0d0f,	// (0x0003f7dc) list_double_pane_vc_t1

0x0d23,	// (0x0003f7f0) list_double_pane_vc_t2_ParamLimits

0x0d23,	// (0x0003f7f0) list_double_pane_vc_t2

0x0001,

0xfa46,	// (0x0004e513) list_double_pane_vc_t_ParamLimits

0xfa46,	// (0x0004e513) list_double_pane_vc_t

0x4a4c,	// (0x00043519) list_double_number_pane_vc_g1_ParamLimits

0x4a4c,	// (0x00043519) list_double_number_pane_vc_g1

0x21fd,	// (0x00040cca) list_double_number_pane_vc_g2_ParamLimits

0x21fd,	// (0x00040cca) list_double_number_pane_vc_g2

0x0001,

0xf5d8,	// (0x0004e0a5) list_double_number_pane_vc_g_ParamLimits

0xf5d8,	// (0x0004e0a5) list_double_number_pane_vc_g

0x0d3b,	// (0x0003f808) list_double_number_pane_vc_t1_ParamLimits

0x0d3b,	// (0x0003f808) list_double_number_pane_vc_t1

0x0d4d,	// (0x0003f81a) list_double_number_pane_vc_t2_ParamLimits

0x0d4d,	// (0x0003f81a) list_double_number_pane_vc_t2

0x0d61,	// (0x0003f82e) list_double_number_pane_vc_t3_ParamLimits

0x0d61,	// (0x0003f82e) list_double_number_pane_vc_t3

0x0002,

0xfa4b,	// (0x0004e518) list_double_number_pane_vc_t_ParamLimits

0xfa4b,	// (0x0004e518) list_double_number_pane_vc_t

0x0d79,	// (0x0003f846) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0d79,	// (0x0003f846) list_double_large_graphic_pane_vc_g1

0x0d85,	// (0x0003f852) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0d85,	// (0x0003f852) list_double_large_graphic_pane_vc_g2

0x0c54,	// (0x0003f721) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0c54,	// (0x0003f721) list_double_large_graphic_pane_vc_g3

0x0d94,	// (0x0003f861) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0d94,	// (0x0003f861) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa52,	// (0x0004e51f) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa52,	// (0x0004e51f) list_double_large_graphic_pane_vc_g

0x0da0,	// (0x0003f86d) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0da0,	// (0x0003f86d) list_double_large_graphic_pane_vc_t1

0x0db4,	// (0x0003f881) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0db4,	// (0x0003f881) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5b,	// (0x0004e528) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5b,	// (0x0004e528) list_double_large_graphic_pane_vc_t

0x4a4c,	// (0x00043519) list_double_heading_pane_vc_g1_ParamLimits

0x4a4c,	// (0x00043519) list_double_heading_pane_vc_g1

0x21fd,	// (0x00040cca) list_double_heading_pane_vc_g2_ParamLimits

0x21fd,	// (0x00040cca) list_double_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x0004e0a5) list_double_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x0004e0a5) list_double_heading_pane_vc_g

0x0dcd,	// (0x0003f89a) list_double_heading_pane_vc_t1_ParamLimits

0x0dcd,	// (0x0003f89a) list_double_heading_pane_vc_t1

0x09ee,	// (0x0003f4bb) list_double_heading_pane_vc_t2_ParamLimits

0x09ee,	// (0x0003f4bb) list_double_heading_pane_vc_t2

0x0001,

0xfa60,	// (0x0004e52d) list_double_heading_pane_vc_t_ParamLimits

0xfa60,	// (0x0004e52d) list_double_heading_pane_vc_t

0x09cc,	// (0x0003f499) list_double_graphic_pane_vc_g1_ParamLimits

0x09cc,	// (0x0003f499) list_double_graphic_pane_vc_g1

0x267e,	// (0x0004114b) list_double_graphic_pane_vc_g2_ParamLimits

0x267e,	// (0x0004114b) list_double_graphic_pane_vc_g2

0x6e4f,	// (0x0004591c) list_double_graphic_pane_vc_g3_ParamLimits

0x6e4f,	// (0x0004591c) list_double_graphic_pane_vc_g3

0x0002,

0xfa65,	// (0x0004e532) list_double_graphic_pane_vc_g_ParamLimits

0xfa65,	// (0x0004e532) list_double_graphic_pane_vc_g

0x0de1,	// (0x0003f8ae) list_double_graphic_pane_vc_t1_ParamLimits

0x0de1,	// (0x0003f8ae) list_double_graphic_pane_vc_t1

0x0df5,	// (0x0003f8c2) list_double_graphic_pane_vc_t2_ParamLimits

0x0df5,	// (0x0003f8c2) list_double_graphic_pane_vc_t2

0x0001,

0xfa6c,	// (0x0004e539) list_double_graphic_pane_vc_t_ParamLimits

0xfa6c,	// (0x0004e539) list_double_graphic_pane_vc_t

0x10f3,	// (0x0003fbc0) aid_size_cell_fastswap

0xbe67,	// (0x0004a934) aid_size_cell_touch_ParamLimits

0xbe67,	// (0x0004a934) aid_size_cell_touch

0x1356,	// (0x0003fe23) popup_fast_swap_wide_window_ParamLimits

0x1356,	// (0x0003fe23) popup_fast_swap_wide_window

0xc017,	// (0x0004aae4) touch_pane_ParamLimits

0xc017,	// (0x0004aae4) touch_pane

0x3e84,	// (0x00042951) button_value_adjust_pane_cp2

0x0677,	// (0x0003f144) button_value_adjust_pane_cp4

0x069b,	// (0x0003f168) form_field_data_pane_cp2

0xbae6,	// (0x0004a5b3) form_field_data_wide_pane_cp2

0x42f5,	// (0x00042dc2) bg_scroll_pane_ParamLimits

0x17a4,	// (0x00040271) scroll_handle_pane_ParamLimits

0x17b8,	// (0x00040285) scroll_sc2_down_pane_ParamLimits

0x17b8,	// (0x00040285) scroll_sc2_down_pane

0x4326,	// (0x00042df3) scroll_sc2_up_pane_ParamLimits

0x4326,	// (0x00042df3) scroll_sc2_up_pane

0xdf96,	// (0x0004ca63) grid_wheel_folder_pane_g1_ParamLimits

0xdf96,	// (0x0004ca63) grid_wheel_folder_pane_g1

0x1999,	// (0x00040466) clock_nsta_pane_cp2_ParamLimits

0x1999,	// (0x00040466) clock_nsta_pane_cp2

0x4e53,	// (0x00043920) listscroll_midp_pane_ParamLimits

0xd4cf,	// (0x0004bf9c) midp_canvas_pane

0x4e05,	// (0x000438d2) nsta_clock_indic_pane

0x4e39,	// (0x00043906) listscroll_form_pane_vc

0x4e41,	// (0x0004390e) listscroll_set_pane_vc_ParamLimits

0x4e41,	// (0x0004390e) listscroll_set_pane_vc

0xd6ab,	// (0x0004c178) clock_nsta_pane

0xd6d5,	// (0x0004c1a2) indicator_nsta_pane

0x529b,	// (0x00043d68) bg_popup_sub_pane_cp2_ParamLimits

0x52af,	// (0x00043d7c) find_pane_cp2_ParamLimits

0x52af,	// (0x00043d7c) find_pane_cp2

0x52c5,	// (0x00043d92) grid_toobar_pane_ParamLimits

0x53a5,	// (0x00043e72) list_form_gen_pane_vc_ParamLimits

0x53a5,	// (0x00043e72) list_form_gen_pane_vc

0x53bb,	// (0x00043e88) scroll_pane_cp8_vc_ParamLimits

0x53bb,	// (0x00043e88) scroll_pane_cp8_vc

0x5437,	// (0x00043f04) data_form_wide_pane_vc_ParamLimits

0x5437,	// (0x00043f04) data_form_wide_pane_vc

0x5443,	// (0x00043f10) form_field_data_wide_pane_vc_g1

0x544b,	// (0x00043f18) form_field_data_wide_pane_vc_t1_ParamLimits

0x544b,	// (0x00043f18) form_field_data_wide_pane_vc_t1

0x3e98,	// (0x00042965) input_focus_pane_cp6_vc_ParamLimits

0x3e98,	// (0x00042965) input_focus_pane_cp6_vc

0xda51,	// (0x0004c51e) list_midp_pane_ParamLimits

0x6ab3,	// (0x00045580) scroll_pane_cp16_ParamLimits

0x6ab3,	// (0x00045580) scroll_pane_cp16

0x57dd,	// (0x000442aa) button_value_adjust_pane_ParamLimits

0x57dd,	// (0x000442aa) button_value_adjust_pane

0xdbf3,	// (0x0004c6c0) button_value_adjust_pane_cp6_ParamLimits

0xdbf3,	// (0x0004c6c0) button_value_adjust_pane_cp6

0xdd0d,	// (0x0004c7da) settings_code_pane_cp_ParamLimits

0xdd0d,	// (0x0004c7da) settings_code_pane_cp

0x3536,	// (0x00042003) cell_touch_pane_g1

0x3536,	// (0x00042003) cell_touch_pane_g2

0x0001,

0xf70e,	// (0x0004e1db) cell_touch_pane_g

0xde7a,	// (0x0004c947) cell_touch_pane_cp_ParamLimits

0xde7a,	// (0x0004c947) cell_touch_pane_cp

0xde96,	// (0x0004c963) cell_touch_pane_ParamLimits

0xde96,	// (0x0004c963) cell_touch_pane

0x3536,	// (0x00042003) scroll_sc2_down_pane_g1

0x3536,	// (0x00042003) scroll_sc2_up_pane_g1

0x3540,	// (0x0004200d) bg_set_opt_pane_cp4_vc

0x6e43,	// (0x00045910) list_set_graphic_pane_vc_g1_ParamLimits

0x6e43,	// (0x00045910) list_set_graphic_pane_vc_g1

0x6e4f,	// (0x0004591c) list_set_graphic_pane_vc_g2_ParamLimits

0x6e4f,	// (0x0004591c) list_set_graphic_pane_vc_g2

0x0001,

0xf9fe,	// (0x0004e4cb) list_set_graphic_pane_vc_g_ParamLimits

0xf9fe,	// (0x0004e4cb) list_set_graphic_pane_vc_g

0x6e5b,	// (0x00045928) text_primary_small_cp13_vc_ParamLimits

0x6e5b,	// (0x00045928) text_primary_small_cp13_vc

0x6e73,	// (0x00045940) list_set_graphic_pane_vc_ParamLimits

0x6e73,	// (0x00045940) list_set_graphic_pane_vc

0x3540,	// (0x0004200d) input_focus_pane_cp2_vc

0x3536,	// (0x00042003) setting_code_pane_vc_g1

0x366b,	// (0x00042138) setting_code_pane_vc_t1

0x6e85,	// (0x00045952) set_text_pane_vc_t1_ParamLimits

0x6e85,	// (0x00045952) set_text_pane_vc_t1

0x3540,	// (0x0004200d) input_focus_pane_cp1_vc

0x6ea1,	// (0x0004596e) list_set_text_pane_vc

0x3536,	// (0x00042003) setting_text_pane_vc_g1

0x3540,	// (0x0004200d) bg_set_opt_pane_cp2_vc

0x3662,	// (0x0004212f) setting_slider_graphic_pane_vc_g1

0x6eab,	// (0x00045978) setting_slider_graphic_pane_vc_t1

0x6ebb,	// (0x00045988) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa03,	// (0x0004e4d0) setting_slider_graphic_pane_vc_t

0x6ecb,	// (0x00045998) slider_set_pane_cp_vc

0x6ed3,	// (0x000459a0) slider_set_pane_vc_g1

0x6edc,	// (0x000459a9) slider_set_pane_vc_g2

0x0006,

0xfa08,	// (0x0004e4d5) slider_set_pane_vc_g

0x3ee7,	// (0x000429b4) set_opt_bg_pane_g1_copy1

0x3eef,	// (0x000429bc) set_opt_bg_pane_g2_copy1

0x6f08,	// (0x000459d5) set_opt_bg_pane_g3_copy1

0x3eff,	// (0x000429cc) set_opt_bg_pane_g4_copy1

0x3f07,	// (0x000429d4) set_opt_bg_pane_g5_copy1

0x3f0f,	// (0x000429dc) set_opt_bg_pane_g6_copy1

0x6f12,	// (0x000459df) set_opt_bg_pane_g7_copy1

0x6f1a,	// (0x000459e7) set_opt_bg_pane_g8_copy1

0x6f24,	// (0x000459f1) set_opt_bg_pane_g9_copy1

0x3540,	// (0x0004200d) bg_set_opt_pane_cp_vc

0x6f2e,	// (0x000459fb) setting_slider_pane_vc_t1

0x6f3d,	// (0x00045a0a) setting_slider_pane_vc_t2

0x6f4d,	// (0x00045a1a) setting_slider_pane_vc_t3

0x0002,

0xfa17,	// (0x0004e4e4) setting_slider_pane_vc_t

0x6f5d,	// (0x00045a2a) slider_set_pane_vc

0x231d,	// (0x00040dea) volume_set_pane_vc_g1

0x2326,	// (0x00040df3) volume_set_pane_vc_g2

0x232f,	// (0x00040dfc) volume_set_pane_vc_g3

0x2338,	// (0x00040e05) volume_set_pane_vc_g4

0x2341,	// (0x00040e0e) volume_set_pane_vc_g5

0x234a,	// (0x00040e17) volume_set_pane_vc_g6

0x2353,	// (0x00040e20) volume_set_pane_vc_g7

0x235c,	// (0x00040e29) volume_set_pane_vc_g8

0x2365,	// (0x00040e32) volume_set_pane_vc_g9

0x236e,	// (0x00040e3b) volume_set_pane_vc_g10

0x0009,

0xf8bc,	// (0x0004e389) volume_set_pane_vc_g

0x6f65,	// (0x00045a32) volume_set_pane_vc

0x6f6d,	// (0x00045a3a) button_value_adjust_pane_cp1_vc

0x6f77,	// (0x00045a44) list_highlight_pane_cp2_vc

0x6f80,	// (0x00045a4d) list_set_pane_vc_ParamLimits

0x6f80,	// (0x00045a4d) list_set_pane_vc

0x6fde,	// (0x00045aab) main_pane_set_vc_t1_ParamLimits

0x6fde,	// (0x00045aab) main_pane_set_vc_t1

0x6ff3,	// (0x00045ac0) main_pane_set_vc_t2_ParamLimits

0x6ff3,	// (0x00045ac0) main_pane_set_vc_t2

0x7005,	// (0x00045ad2) main_pane_set_vc_t3_ParamLimits

0x7005,	// (0x00045ad2) main_pane_set_vc_t3

0x7019,	// (0x00045ae6) main_pane_set_vc_t4_ParamLimits

0x7019,	// (0x00045ae6) main_pane_set_vc_t4

0x0003,

0xfa1e,	// (0x0004e4eb) main_pane_set_vc_t_ParamLimits

0xfa1e,	// (0x0004e4eb) main_pane_set_vc_t

0x702d,	// (0x00045afa) setting_code_pane_vc_ParamLimits

0x702d,	// (0x00045afa) setting_code_pane_vc

0x703e,	// (0x00045b0b) setting_slider_graphic_pane_vc

0x703e,	// (0x00045b0b) setting_slider_pane_vc

0x703e,	// (0x00045b0b) setting_text_pane_vc

0x703e,	// (0x00045b0b) setting_volume_pane_vc

0x7048,	// (0x00045b15) scroll_pane_cp121_vc

0x3e72,	// (0x0004293f) set_content_pane_vc

0x7050,	// (0x00045b1d) button_value_adjust_pane_g1

0x7059,	// (0x00045b26) button_value_adjust_pane_g2

0x0001,

0xfa71,	// (0x0004e53e) button_value_adjust_pane_g

0x7062,	// (0x00045b2f) form_field_slider_wide_pane_vc_t1_ParamLimits

0x7062,	// (0x00045b2f) form_field_slider_wide_pane_vc_t1

0x7076,	// (0x00045b43) form_field_slider_wide_pane_vc_t2_ParamLimits

0x7076,	// (0x00045b43) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa76,	// (0x0004e543) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa76,	// (0x0004e543) form_field_slider_wide_pane_vc_t

0x389b,	// (0x00042368) input_focus_pane_cp10_vc_ParamLimits

0x389b,	// (0x00042368) input_focus_pane_cp10_vc

0x70a4,	// (0x00045b71) slider_cont_pane_cp1_vc_ParamLimits

0x70a4,	// (0x00045b71) slider_cont_pane_cp1_vc

0x70b6,	// (0x00045b83) slider_form_pane_g1_cp2

0x6edc,	// (0x000459a9) slider_form_pane_g2_cp2

0x70e3,	// (0x00045bb0) form_field_slider_pane_vc_t3

0x70f1,	// (0x00045bbe) form_field_slider_pane_vc_t4

0x70ff,	// (0x00045bcc) slider_form_pane_vc_ParamLimits

0x70ff,	// (0x00045bcc) slider_form_pane_vc

0x710c,	// (0x00045bd9) form_field_slider_pane_vc_t1_ParamLimits

0x710c,	// (0x00045bd9) form_field_slider_pane_vc_t1

0x7076,	// (0x00045b43) form_field_slider_pane_vc_t2_ParamLimits

0x7076,	// (0x00045b43) form_field_slider_pane_vc_t2

0x0001,

0xfa88,	// (0x0004e555) form_field_slider_pane_vc_t_ParamLimits

0xfa88,	// (0x0004e555) form_field_slider_pane_vc_t

0x389b,	// (0x00042368) input_focus_pane_cp9_vc_ParamLimits

0x389b,	// (0x00042368) input_focus_pane_cp9_vc

0x7128,	// (0x00045bf5) slider_cont_pane_vc_ParamLimits

0x7128,	// (0x00045bf5) slider_cont_pane_vc

0x713c,	// (0x00045c09) list_form_graphic_pane_cp_vc_ParamLimits

0x713c,	// (0x00045c09) list_form_graphic_pane_cp_vc

0x5443,	// (0x00043f10) form_field_popup_wide_pane_vc_g1

0x7151,	// (0x00045c1e) form_field_popup_wide_pane_vc_t1_ParamLimits

0x7151,	// (0x00045c1e) form_field_popup_wide_pane_vc_t1

0x3e98,	// (0x00042965) input_focus_pane_cp8_vc_ParamLimits

0x3e98,	// (0x00042965) input_focus_pane_cp8_vc

0x7196,	// (0x00045c63) list_form_wide_pane_vc_ParamLimits

0x7196,	// (0x00045c63) list_form_wide_pane_vc

0x71a2,	// (0x00045c6f) list_form_graphic_pane_vc_g1

0x71aa,	// (0x00045c77) list_form_graphic_pane_vc_t1_ParamLimits

0x71aa,	// (0x00045c77) list_form_graphic_pane_vc_t1

0x3620,	// (0x000420ed) list_highlight_pane_cp5_vc_ParamLimits

0x3620,	// (0x000420ed) list_highlight_pane_cp5_vc

0x71c6,	// (0x00045c93) list_form_graphic_pane_vc_ParamLimits

0x71c6,	// (0x00045c93) list_form_graphic_pane_vc

0x5443,	// (0x00043f10) form_field_popup_pane_vc_g1

0x71dc,	// (0x00045ca9) form_field_popup_pane_vc_t1_ParamLimits

0x71dc,	// (0x00045ca9) form_field_popup_pane_vc_t1

0x3e98,	// (0x00042965) input_focus_pane_cp7_vc_ParamLimits

0x3e98,	// (0x00042965) input_focus_pane_cp7_vc

0x71f3,	// (0x00045cc0) list_form_pane_vc_ParamLimits

0x71f3,	// (0x00045cc0) list_form_pane_vc

0x71ff,	// (0x00045ccc) data_form_pane_vc_t1_ParamLimits

0x71ff,	// (0x00045ccc) data_form_pane_vc_t1

0x3ee7,	// (0x000429b4) input_focus_pane_vc_g1

0x3eef,	// (0x000429bc) input_focus_pane_vc_g2

0x3ef7,	// (0x000429c4) input_focus_pane_vc_g3

0x3eff,	// (0x000429cc) input_focus_pane_vc_g4

0x3f07,	// (0x000429d4) input_focus_pane_vc_g5

0x3f0f,	// (0x000429dc) input_focus_pane_vc_g6

0x3f17,	// (0x000429e4) input_focus_pane_vc_g7

0x3f1f,	// (0x000429ec) input_focus_pane_vc_g8

0x3f27,	// (0x000429f4) input_focus_pane_vc_g9

0x3536,	// (0x00042003) input_focus_pane_vc_g10

0x0009,

0xf697,	// (0x0004e164) input_focus_pane_vc_g

0x5437,	// (0x00043f04) data_form_pane_vc_ParamLimits

0x5437,	// (0x00043f04) data_form_pane_vc

0x5443,	// (0x00043f10) form_field_data_pane_vc_g1

0x721a,	// (0x00045ce7) form_field_data_pane_vc_t1_ParamLimits

0x721a,	// (0x00045ce7) form_field_data_pane_vc_t1

0x3e98,	// (0x00042965) input_focus_pane_vc_ParamLimits

0x3e98,	// (0x00042965) input_focus_pane_vc

0x7234,	// (0x00045d01) button_value_adjust_pane_cp3_vc

0x723c,	// (0x00045d09) button_value_adjust_pane_cp5_vc

0x7244,	// (0x00045d11) form_field_data_pane_vc_ParamLimits

0x7244,	// (0x00045d11) form_field_data_pane_vc

0x725b,	// (0x00045d28) form_field_data_pane_vc_cp2

0x7263,	// (0x00045d30) form_field_data_wide_pane_vc_ParamLimits

0x7263,	// (0x00045d30) form_field_data_wide_pane_vc

0x7279,	// (0x00045d46) form_field_data_wide_pane_vc_cp2

0x7281,	// (0x00045d4e) form_field_popup_pane_vc_ParamLimits

0x7281,	// (0x00045d4e) form_field_popup_pane_vc

0x7298,	// (0x00045d65) form_field_popup_wide_pane_vc_ParamLimits

0x7298,	// (0x00045d65) form_field_popup_wide_pane_vc

0x72ae,	// (0x00045d7b) form_field_slider_pane_vc_ParamLimits

0x72ae,	// (0x00045d7b) form_field_slider_pane_vc

0x72c1,	// (0x00045d8e) form_field_slider_wide_pane_vc_ParamLimits

0x72c1,	// (0x00045d8e) form_field_slider_wide_pane_vc

0xdeb4,	// (0x0004c981) grid_touch_1_pane_ParamLimits

0xdeb4,	// (0x0004c981) grid_touch_1_pane

0xdec8,	// (0x0004c995) grid_touch_2_pane_ParamLimits

0xdec8,	// (0x0004c995) grid_touch_2_pane

0x7396,	// (0x00045e63) touch_pane_g1_ParamLimits

0x7396,	// (0x00045e63) touch_pane_g1

0x72f8,	// (0x00045dc5) cell_app_pane_cp_wide_ParamLimits

0x72f8,	// (0x00045dc5) cell_app_pane_cp_wide

0x7309,	// (0x00045dd6) grid_popup_fast_wide_pane_ParamLimits

0x7309,	// (0x00045dd6) grid_popup_fast_wide_pane

0x731d,	// (0x00045dea) scroll_pane_cp19_ParamLimits

0x731d,	// (0x00045dea) scroll_pane_cp19

0x3540,	// (0x0004200d) bg_popup_window_pane_cp20

0x7331,	// (0x00045dfe) listscroll_popup_fast_wide_pane

0x404f,	// (0x00042b1c) grid_indicator_nsta_pane

0x7339,	// (0x00045e06) clock_nsta_pane_g1

0x7342,	// (0x00045e0f) clock_nsta_pane_t1

0xdef2,	// (0x0004c9bf) cell_indicator_nsta_pane_ParamLimits

0xdef2,	// (0x0004c9bf) cell_indicator_nsta_pane

0x7396,	// (0x00045e63) cell_indicator_nsta_pane_g1

0xdf0b,	// (0x0004c9d8) cell_indicator_nsta_pane_g2

0x0001,

0xfa99,	// (0x0004e566) cell_indicator_nsta_pane_g

0x73ba,	// (0x00045e87) clock_nsta_pane_cp

0x73c2,	// (0x00045e8f) indicator_nsta_pane_cp

0x73ca,	// (0x00045e97) nsta_clock_indic_pane_g1

0x36e9,	// (0x000421b6) grid_indicator_pane

0x441b,	// (0x00042ee8) scroll_pane_cp29

0x18e8,	// (0x000403b5) indicator_nsta_pane_cp2_ParamLimits

0x18e8,	// (0x000403b5) indicator_nsta_pane_cp2

0x3620,	// (0x000420ed) main_apps_wheel_pane

0x5664,	// (0x00044131) form_midp_field_text_pane_ParamLimits

0x57af,	// (0x0004427c) scroll_bar_cp050_ParamLimits

0x7423,	// (0x00045ef0) cell_indicator_pane_ParamLimits

0x7423,	// (0x00045ef0) cell_indicator_pane

0x743a,	// (0x00045f07) cell_indicator_pane_g1

0xdf20,	// (0x0004c9ed) grid_wheel_folder_pane_ParamLimits

0xdf20,	// (0x0004c9ed) grid_wheel_folder_pane

0xdf2e,	// (0x0004c9fb) list_wheel_apps_pane_ParamLimits

0xdf2e,	// (0x0004c9fb) list_wheel_apps_pane

0xdf3c,	// (0x0004ca09) main_apps_wheel_pane_g1_ParamLimits

0xdf3c,	// (0x0004ca09) main_apps_wheel_pane_g1

0xdf48,	// (0x0004ca15) main_apps_wheel_pane_g2_ParamLimits

0xdf48,	// (0x0004ca15) main_apps_wheel_pane_g2

0x0001,

0xfab5,	// (0x0004e582) main_apps_wheel_pane_g_ParamLimits

0xfab5,	// (0x0004e582) main_apps_wheel_pane_g

0xdf56,	// (0x0004ca23) main_apps_wheel_pane_t1_ParamLimits

0xdf56,	// (0x0004ca23) main_apps_wheel_pane_t1

0xdf6a,	// (0x0004ca37) list_wheel_apps_pane_g1

0xdf72,	// (0x0004ca3f) list_wheel_apps_pane_g2

0xdf7a,	// (0x0004ca47) list_wheel_apps_pane_g3

0xdf82,	// (0x0004ca4f) list_wheel_apps_pane_g4

0xdf8c,	// (0x0004ca59) list_wheel_apps_pane_g5

0x0004,

0xfaba,	// (0x0004e587) list_wheel_apps_pane_g

0x4993,	// (0x00043460) navi_icon_text_pane

0xd59f,	// (0x0004c06c) aid_fill_nsta

0x74ff,	// (0x00045fcc) navi_icon_text_pane_g1

0x750b,	// (0x00045fd8) navi_icon_text_pane_t1

0xd4b7,	// (0x0004bf84) list_set_graphic_pane_t1_ParamLimits

0xd4b7,	// (0x0004bf84) list_set_graphic_pane_t1

0x5efe,	// (0x000449cb) popup_midp_note_alarm_window_t6_ParamLimits

0x5efe,	// (0x000449cb) popup_midp_note_alarm_window_t6

0x5f10,	// (0x000449dd) popup_midp_note_alarm_window_t7_ParamLimits

0x5f10,	// (0x000449dd) popup_midp_note_alarm_window_t7

0x5f22,	// (0x000449ef) popup_midp_note_alarm_window_t8_ParamLimits

0x5f22,	// (0x000449ef) popup_midp_note_alarm_window_t8

0x5f34,	// (0x00044a01) popup_midp_note_alarm_window_t9_ParamLimits

0x5f34,	// (0x00044a01) popup_midp_note_alarm_window_t9

0x5f46,	// (0x00044a13) popup_midp_note_alarm_window_t10_ParamLimits

0x5f46,	// (0x00044a13) popup_midp_note_alarm_window_t10

0x5f58,	// (0x00044a25) popup_midp_note_alarm_window_t11_ParamLimits

0x5f58,	// (0x00044a25) popup_midp_note_alarm_window_t11

0x5f6a,	// (0x00044a37) scroll_pane_cp17_ParamLimits

0x5f6a,	// (0x00044a37) scroll_pane_cp17

0x231d,	// (0x00040dea) volume_small_pane_cp_g1

0x268d,	// (0x0004115a) volume_small_pane_cp_g2

0x2696,	// (0x00041163) volume_small_pane_cp_g3

0x269f,	// (0x0004116c) volume_small_pane_cp_g4

0x26a8,	// (0x00041175) volume_small_pane_cp_g5

0x26b1,	// (0x0004117e) volume_small_pane_cp_g6

0x26ba,	// (0x00041187) volume_small_pane_cp_g7

0x26c3,	// (0x00041190) volume_small_pane_cp_g8

0x26cc,	// (0x00041199) volume_small_pane_cp_g9

0x26d5,	// (0x000411a2) volume_small_pane_cp_g10

0x4be2,	// (0x000436af) midp_ticker_pane_g1_ParamLimits

0x4bee,	// (0x000436bb) midp_ticker_pane_g2_ParamLimits

0xf763,	// (0x0004e230) midp_ticker_pane_g_ParamLimits

0x4bfa,	// (0x000436c7) midp_ticker_pane_t1_ParamLimits

0xd5c3,	// (0x0004c090) aid_fill_nsta_2

0x579b,	// (0x00044268) list_form2_midp_pane

0x6902,	// (0x000453cf) midp_editing_number_pane_ParamLimits

0x6911,	// (0x000453de) midp_ticker_pane_ParamLimits

0x751d,	// (0x00045fea) form2_midp_field_pane

0x7541,	// (0x0004600e) scroll_pane_cp51

0x7561,	// (0x0004602e) form2_midp_button_pane_ParamLimits

0x7561,	// (0x0004602e) form2_midp_button_pane

0x7573,	// (0x00046040) form2_midp_content_pane_ParamLimits

0x7573,	// (0x00046040) form2_midp_content_pane

0x758d,	// (0x0004605a) form2_midp_field_choice_group_pane

0x7595,	// (0x00046062) form2_midp_field_pane_g1

0x759d,	// (0x0004606a) form2_midp_field_pane_g2

0x75a5,	// (0x00046072) form2_midp_field_pane_g3

0x75ad,	// (0x0004607a) form2_midp_field_pane_g4

0x0003,

0xfadf,	// (0x0004e5ac) form2_midp_field_pane_g

0x75b5,	// (0x00046082) form2_midp_gauge_slider_pane

0x75bd,	// (0x0004608a) form2_midp_gauge_wait_pane

0x75c5,	// (0x00046092) form2_midp_image_pane_ParamLimits

0x75c5,	// (0x00046092) form2_midp_image_pane

0x75e0,	// (0x000460ad) form2_midp_label_pane_ParamLimits

0x75e0,	// (0x000460ad) form2_midp_label_pane

0xdfbf,	// (0x0004ca8c) form2_midp_label_pane_cp_ParamLimits

0xdfbf,	// (0x0004ca8c) form2_midp_label_pane_cp

0x761a,	// (0x000460e7) form2_midp_string_pane_ParamLimits

0x761a,	// (0x000460e7) form2_midp_string_pane

0xbd0b,	// (0x0004a7d8) form2_midp_text_pane_ParamLimits

0xbd0b,	// (0x0004a7d8) form2_midp_text_pane

0x762c,	// (0x000460f9) form2_midp_time_pane

0x763c,	// (0x00046109) input_focus_pane_cp51_ParamLimits

0x763c,	// (0x00046109) input_focus_pane_cp51

0x7654,	// (0x00046121) form2_midp_label_pane_t1_ParamLimits

0x7654,	// (0x00046121) form2_midp_label_pane_t1

0xbd2a,	// (0x0004a7f7) form2_mdip_text_pane_t1_ParamLimits

0xbd2a,	// (0x0004a7f7) form2_mdip_text_pane_t1

0x0e4a,	// (0x0003f917) form2_midp_time_pane_t1

0x769d,	// (0x0004616a) form2_midp_gauge_slider_pane_t1

0xdfde,	// (0x0004caab) form2_midp_gauge_slider_pane_t2

0xdff0,	// (0x0004cabd) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae8,	// (0x0004e5b5) form2_midp_gauge_slider_pane_t

0x76d3,	// (0x000461a0) form2_midp_slider_pane

0x76df,	// (0x000461ac) form2_midp_gauge_wait_pane_t1

0x76ed,	// (0x000461ba) form2_midp_wait_pane_ParamLimits

0x76ed,	// (0x000461ba) form2_midp_wait_pane

0xe002,	// (0x0004cacf) list_single_2graphic_pane_cp4_ParamLimits

0xe002,	// (0x0004cacf) list_single_2graphic_pane_cp4

0xd9df,	// (0x0004c4ac) list_single_midp_graphic_pane_cp_ParamLimits

0xd9df,	// (0x0004c4ac) list_single_midp_graphic_pane_cp

0x3540,	// (0x0004200d) list_highlight_pane_cp20

0x7753,	// (0x00046220) list_single_2graphic_pane_g1_cp4

0x775b,	// (0x00046228) list_single_2graphic_pane_g2_cp4

0x7763,	// (0x00046230) list_single_2graphic_pane_t1_cp4

0x3620,	// (0x000420ed) list_highlight_pane_cp21

0x7772,	// (0x0004623f) list_single_midp_graphic_pane_g4_cp

0x7781,	// (0x0004624e) list_single_midp_graphic_pane_t1_cp

0xe016,	// (0x0004cae3) form2_mdip_string_pane_t1_ParamLimits

0xe016,	// (0x0004cae3) form2_mdip_string_pane_t1

0x3540,	// (0x0004200d) bg_wml_button_pane_cp2

0x3536,	// (0x00042003) form2_midp_image_pane_g1

0x15da,	// (0x000400a7) list_double_large_graphic_pane_g5_ParamLimits

0x15da,	// (0x000400a7) list_double_large_graphic_pane_g5

0x4e53,	// (0x00043920) midp_form_pane_ParamLimits

0x3620,	// (0x000420ed) main_apps_wheel_pane_ParamLimits

0xc656,	// (0x0004b123) popup_preview_window_ParamLimits

0xc656,	// (0x0004b123) popup_preview_window

0x2178,	// (0x00040c45) popup_touch_info_window_ParamLimits

0x2178,	// (0x00040c45) popup_touch_info_window

0x2196,	// (0x00040c63) popup_touch_menu_window_ParamLimits

0x2196,	// (0x00040c63) popup_touch_menu_window

0x352c,	// (0x00041ff9) bg_popup_sub_pane_cp6

0x788f,	// (0x0004635c) list_touch_menu_pane

0x7897,	// (0x00046364) list_single_touch_menu_pane_ParamLimits

0x7897,	// (0x00046364) list_single_touch_menu_pane

0x78ad,	// (0x0004637a) list_single_touch_menu_pane_t1

0x3620,	// (0x000420ed) bg_popup_sub_pane_cp7_ParamLimits

0x3620,	// (0x000420ed) bg_popup_sub_pane_cp7

0x78bb,	// (0x00046388) heading_sub_pane

0x78c3,	// (0x00046390) list_touch_info_pane_ParamLimits

0x78c3,	// (0x00046390) list_touch_info_pane

0x78d2,	// (0x0004639f) list_single_touch_info_pane_ParamLimits

0x78d2,	// (0x0004639f) list_single_touch_info_pane

0x78e4,	// (0x000463b1) list_single_touch_info_pane_t1

0x78f2,	// (0x000463bf) list_single_touch_info_pane_t2

0x0001,

0xfaf6,	// (0x0004e5c3) list_single_touch_info_pane_t

0x4b13,	// (0x000435e0) bg_popup_heading_pane_cp

0x7900,	// (0x000463cd) heading_sub_pane_t1

0x53d1,	// (0x00043e9e) bg_popup_preview_window_pane_cp_ParamLimits

0x53d1,	// (0x00043e9e) bg_popup_preview_window_pane_cp

0x78bb,	// (0x00046388) heading_preview_pane

0x78c3,	// (0x00046390) list_preview_pane_ParamLimits

0x78c3,	// (0x00046390) list_preview_pane

0x790e,	// (0x000463db) popup_preview_window_g1

0x78d2,	// (0x0004639f) list_single_preview_pane_ParamLimits

0x78d2,	// (0x0004639f) list_single_preview_pane

0x7916,	// (0x000463e3) list_single_preview_pane_g1

0x791e,	// (0x000463eb) list_single_preview_pane_t1

0x78e4,	// (0x000463b1) list_single_preview_pane_t2

0x0001,

0xfafb,	// (0x0004e5c8) list_single_preview_pane_t

0x792c,	// (0x000463f9) bg_popup_heading_pane_cp2_ParamLimits

0x792c,	// (0x000463f9) bg_popup_heading_pane_cp2

0x7942,	// (0x0004640f) heading_preview_pane_g1

0x794a,	// (0x00046417) heading_preview_pane_t1_ParamLimits

0x794a,	// (0x00046417) heading_preview_pane_t1

0x370c,	// (0x000421d9) soft_indicator_pane_t1_ParamLimits

0x3dff,	// (0x000428cc) scroll_pane_ParamLimits

0x4314,	// (0x00042de1) scroll_sc2_left_pane

0x431d,	// (0x00042dea) scroll_sc2_right_pane

0x433c,	// (0x00042e09) scroll_bg_pane_g1_ParamLimits

0x4351,	// (0x00042e1e) scroll_bg_pane_g2_ParamLimits

0x4369,	// (0x00042e36) scroll_bg_pane_g3_ParamLimits

0xf6ee,	// (0x0004e1bb) scroll_bg_pane_g_ParamLimits

0x433c,	// (0x00042e09) scroll_handle_pane_g1_ParamLimits

0x438b,	// (0x00042e58) scroll_handle_pane_g2_ParamLimits

0x4369,	// (0x00042e36) scroll_handle_pane_g3_ParamLimits

0xf6f5,	// (0x0004e1c2) scroll_handle_pane_g_ParamLimits

0x1c40,	// (0x0004070d) popup_choice_list_window_ParamLimits

0x1c40,	// (0x0004070d) popup_choice_list_window

0x52a7,	// (0x00043d74) choice_list_pane

0x5329,	// (0x00043df6) cell_toolbar_pane_t1

0x5351,	// (0x00043e1e) toolbar_button_pane_ParamLimits

0x6424,	// (0x00044ef1) ai_gene_pane_1_t2_ParamLimits

0x6424,	// (0x00044ef1) ai_gene_pane_1_t2

0x0001,

0xf918,	// (0x0004e3e5) ai_gene_pane_1_t_ParamLimits

0xf918,	// (0x0004e3e5) ai_gene_pane_1_t

0x7967,	// (0x00046434) scroll_sc2_left_pane_g1

0x7967,	// (0x00046434) scroll_sc2_right_pane_g1

0x4e53,	// (0x00043920) bg_popup_sub_pane_cp10

0x7971,	// (0x0004643e) list_choice_list_pane

0x798a,	// (0x00046457) list_single_choice_list_pane_ParamLimits

0x798a,	// (0x00046457) list_single_choice_list_pane

0x799d,	// (0x0004646a) list_single_choice_list_pane_g1

0x4020,	// (0x00042aed) list_single_choice_list_pane_t1_ParamLimits

0x4020,	// (0x00042aed) list_single_choice_list_pane_t1

0x79a5,	// (0x00046472) choice_list_pane_g1

0x79ad,	// (0x0004647a) choice_list_pane_t1

0x352c,	// (0x00041ff9) input_focus_pane_cp11

0x41f7,	// (0x00042cc4) title_pane_stacon_g2_ParamLimits

0x41f7,	// (0x00042cc4) title_pane_stacon_g2

0x0002,

0xf6d4,	// (0x0004e1a1) title_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0004e1a1) title_pane_stacon_g

0x4b13,	// (0x000435e0) cursor_press_pane

0xc309,	// (0x0004add6) popup_fep_hwr_window_ParamLimits

0xc309,	// (0x0004add6) popup_fep_hwr_window

0x1d66,	// (0x00040833) popup_fep_vkb_window_ParamLimits

0x1d66,	// (0x00040833) popup_fep_vkb_window

0x79bb,	// (0x00046488) cursor_press_pane_g1

0x0002,

0xfb24,	// (0x0004e5f1) fep_vkb_side_pane_g_ParamLimits

0x2717,	// (0x000411e4) fep_hwr_candidate_pane_ParamLimits

0x2717,	// (0x000411e4) fep_hwr_candidate_pane

0x2741,	// (0x0004120e) fep_hwr_side_pane_ParamLimits

0x2741,	// (0x0004120e) fep_hwr_side_pane

0x2761,	// (0x0004122e) fep_hwr_top_pane_ParamLimits

0x2761,	// (0x0004122e) fep_hwr_top_pane

0x2779,	// (0x00041246) fep_hwr_write_pane_ParamLimits

0x2779,	// (0x00041246) fep_hwr_write_pane

0xfb24,	// (0x0004e5f1) fep_vkb_side_pane_g

0x79c3,	// (0x00046490) fep_hwr_top_pane_g1

0x79d5,	// (0x000464a2) fep_hwr_top_pane_g2

0x27a5,	// (0x00041272) fep_hwr_top_pane_g3

0x0002,

0xfb00,	// (0x0004e5cd) fep_hwr_top_pane_g

0x27ba,	// (0x00041287) fep_hwr_top_text_pane

0x450b,	// (0x00042fd8) fep_hwr_top_text_pane_g1

0x7a0b,	// (0x000464d8) fep_hwr_top_text_pane_t1

0x28b0,	// (0x0004137d) fep_hwr_candidate_pane_g1

0x7c5e,	// (0x0004672b) fep_vkb_keypad_pane_g3_ParamLimits

0x7c5e,	// (0x0004672b) fep_vkb_keypad_pane_g3

0x7c86,	// (0x00046753) fep_vkb_keypad_pane_g4_ParamLimits

0x7c86,	// (0x00046753) fep_vkb_keypad_pane_g4

0x7cf5,	// (0x000467c2) fep_vkb_bottom_pane_g2_ParamLimits

0x7cf5,	// (0x000467c2) fep_vkb_bottom_pane_g2

0x0001,

0xfb2b,	// (0x0004e5f8) fep_vkb_bottom_pane_g_ParamLimits

0xfb2b,	// (0x0004e5f8) fep_vkb_bottom_pane_g

0x7967,	// (0x00046434) cell_vkb_side_pane_g2

0x0001,

0xfb35,	// (0x0004e602) cell_vkb_side_pane_g

0x7d80,	// (0x0004684d) cell_vkb_side_pane_t1

0x7d8e,	// (0x0004685b) cell_vkb_side_pane_t1_copy1

0x7967,	// (0x00046434) bg_fep_vkb_candidate_pane_g2

0x7eba,	// (0x00046987) cell_vkb_candidate_pane_ParamLimits

0x7a19,	// (0x000464e6) aid_size_cell_vkb_ParamLimits

0x7a19,	// (0x000464e6) aid_size_cell_vkb

0x7eba,	// (0x00046987) cell_vkb_candidate_pane

0x28ca,	// (0x00041397) bg_popup_fep_shadow_pane_g1

0xe0c2,	// (0x0004cb8f) fep_vkb_bottom_pane_ParamLimits

0xe0c2,	// (0x0004cb8f) fep_vkb_bottom_pane

0x7add,	// (0x000465aa) fep_vkb_candidate_pane_ParamLimits

0x7add,	// (0x000465aa) fep_vkb_candidate_pane

0xe0e7,	// (0x0004cbb4) fep_vkb_keypad_pane_ParamLimits

0xe0e7,	// (0x0004cbb4) fep_vkb_keypad_pane

0xe123,	// (0x0004cbf0) fep_vkb_side_pane_ParamLimits

0xe123,	// (0x0004cbf0) fep_vkb_side_pane

0xe15f,	// (0x0004cc2c) fep_vkb_top_pane_ParamLimits

0xe15f,	// (0x0004cc2c) fep_vkb_top_pane

0x7bb7,	// (0x00046684) fep_vkb_top_pane_g1_ParamLimits

0x7bb7,	// (0x00046684) fep_vkb_top_pane_g1

0x7bc6,	// (0x00046693) fep_vkb_top_pane_g2_ParamLimits

0x7bc6,	// (0x00046693) fep_vkb_top_pane_g2

0x7bd5,	// (0x000466a2) fep_vkb_top_pane_g3_ParamLimits

0x7bd5,	// (0x000466a2) fep_vkb_top_pane_g3

0x0003,

0xfb1b,	// (0x0004e5e8) fep_vkb_top_pane_g_ParamLimits

0xfb1b,	// (0x0004e5e8) fep_vkb_top_pane_g

0x7bf3,	// (0x000466c0) fep_vkb_top_text_pane_ParamLimits

0x7bf3,	// (0x000466c0) fep_vkb_top_text_pane

0xe19b,	// (0x0004cc68) fep_vkb_side_pane_g1_ParamLimits

0xe19b,	// (0x0004cc68) fep_vkb_side_pane_g1

0x7c4d,	// (0x0004671a) grid_vkb_side_pane_ParamLimits

0x7c4d,	// (0x0004671a) grid_vkb_side_pane

0x28d2,	// (0x0004139f) bg_popup_fep_shadow_pane_g2

0x28db,	// (0x000413a8) bg_popup_fep_shadow_pane_g3

0x28e3,	// (0x000413b0) bg_popup_fep_shadow_pane_g4

0x28ec,	// (0x000413b9) bg_popup_fep_shadow_pane_g5

0x28f6,	// (0x000413c3) bg_popup_fep_shadow_pane_g6

0x28fe,	// (0x000413cb) bg_popup_fep_shadow_pane_g7

0x3f07,	// (0x000429d4) bg_popup_fep_shadow_pane_g8

0x7ca4,	// (0x00046771) grid_vkb_keypad_number_pane_ParamLimits

0x7ca4,	// (0x00046771) grid_vkb_keypad_number_pane

0x7cb4,	// (0x00046781) grid_vkb_keypad_pane_ParamLimits

0x7cb4,	// (0x00046781) grid_vkb_keypad_pane

0x7cda,	// (0x000467a7) fep_vkb_bottom_pane_g1_ParamLimits

0x7cda,	// (0x000467a7) fep_vkb_bottom_pane_g1

0x7d03,	// (0x000467d0) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7d03,	// (0x000467d0) grid_vkb_keypad_bottom_left_pane

0x7d18,	// (0x000467e5) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7d18,	// (0x000467e5) grid_vkb_keypad_bottom_right_pane

0x7d2d,	// (0x000467fa) fep_vkb_top_text_pane_g1

0xe1e2,	// (0x0004ccaf) fep_vkb_top_text_pane_t1

0xe1f4,	// (0x0004ccc1) cell_vkb_side_pane_ParamLimits

0xe1f4,	// (0x0004ccc1) cell_vkb_side_pane

0x7967,	// (0x00046434) cell_vkb_side_pane_g1

0x7d9c,	// (0x00046869) cell_vkb_keypad_pane_ParamLimits

0x7d9c,	// (0x00046869) cell_vkb_keypad_pane

0x7e11,	// (0x000468de) cell_vkb_keypad_pane_g1

0x0008,

0xfb48,	// (0x0004e615) bg_popup_fep_shadow_pane_g

0x7967,	// (0x00046434) cell_hwr_side_pane_g1

0x7967,	// (0x00046434) cell_hwr_side_pane_g2

0x7e1b,	// (0x000468e8) cell_vkb_keypad_pane_t1

0xe20a,	// (0x0004ccd7) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe20a,	// (0x0004ccd7) cell_vkb_keypad_bottom_left_pane

0xe21f,	// (0x0004ccec) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe21f,	// (0x0004ccec) cell_vkb_keypad_bottom_right_pane

0x7967,	// (0x00046434) cell_vkb_keypad_bottom_left_pane_g1

0x7967,	// (0x00046434) cell_vkb_keypad_bottom_right_pane_g1

0x7e7f,	// (0x0004694c) cell_vkb_keypad_number_pane_ParamLimits

0x7e7f,	// (0x0004694c) cell_vkb_keypad_number_pane

0x7e9e,	// (0x0004696b) cell_vkb_keypad_number_pane_g1

0x7ea8,	// (0x00046975) cell_vkb_keypad_number_pane_g2

0x7eb1,	// (0x0004697e) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3a,	// (0x0004e607) cell_vkb_keypad_number_pane_g

0x7e1b,	// (0x000468e8) cell_vkb_keypad_number_pane_t1

0x7ed5,	// (0x000469a2) fep_vkb_candidate_pane_g1

0x0001,

0xfb35,	// (0x0004e602) cell_hwr_side_pane_g

0x7eee,	// (0x000469bb) cell_hwr_side_pane_t1

0x2910,	// (0x000413dd) cell_hwr_side_pane_t1_copy1

0x7be5,	// (0x000466b2) cell_hwr_candidate_pane_g1

0x291e,	// (0x000413eb) cell_hwr_candidate_pane_t1

0x7967,	// (0x00046434) cell_vkb_candidate_pane_g2

0x7f32,	// (0x000469ff) cell_vkb_candidate_pane_t1

0x26de,	// (0x000411ab) bg_popup_fep_shadow_pane_ParamLimits

0x26de,	// (0x000411ab) bg_popup_fep_shadow_pane

0xe088,	// (0x0004cb55) bg_fep_hwr_top_pane_g4

0x79e7,	// (0x000464b4) bg_hwr_side_pane_g1_ParamLimits

0x79e7,	// (0x000464b4) bg_hwr_side_pane_g1

0xc9b2,	// (0x0004b47f) cell_hwr_side_pane_ParamLimits

0xc9b2,	// (0x0004b47f) cell_hwr_side_pane

0x2831,	// (0x000412fe) fep_hwr_write_pane_g1_ParamLimits

0x2831,	// (0x000412fe) fep_hwr_write_pane_g1

0x283e,	// (0x0004130b) fep_hwr_write_pane_g2_ParamLimits

0x283e,	// (0x0004130b) fep_hwr_write_pane_g2

0x284b,	// (0x00041318) fep_hwr_write_pane_g3_ParamLimits

0x284b,	// (0x00041318) fep_hwr_write_pane_g3

0xc9d2,	// (0x0004b49f) fep_hwr_write_pane_g4_ParamLimits

0xc9d2,	// (0x0004b49f) fep_hwr_write_pane_g4

0x0005,

0xfb07,	// (0x0004e5d4) fep_hwr_write_pane_g_ParamLimits

0xfb07,	// (0x0004e5d4) fep_hwr_write_pane_g

0xe088,	// (0x0004cb55) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xe088,	// (0x0004cb55) bg_fep_hwr_candidate_pane_g2

0x286e,	// (0x0004133b) cell_hwr_candidate_pane_ParamLimits

0x286e,	// (0x0004133b) cell_hwr_candidate_pane

0x28b0,	// (0x0004137d) fep_hwr_candidate_pane_g1_ParamLimits

0x7a47,	// (0x00046514) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7a47,	// (0x00046514) bg_popup_fep_shadow_pane_cp2

0x7be5,	// (0x000466b2) fep_vkb_top_pane_g4_ParamLimits

0x7be5,	// (0x000466b2) fep_vkb_top_pane_g4

0x7c2b,	// (0x000466f8) fep_vkb_side_pane_g2_ParamLimits

0x7c2b,	// (0x000466f8) fep_vkb_side_pane_g2

0xb9f4,	// (0x0004a4c1) list_setting_pane_t4_ParamLimits

0xb9f4,	// (0x0004a4c1) list_setting_pane_t4

0xba8e,	// (0x0004a55b) list_setting_number_pane_t5_ParamLimits

0xba8e,	// (0x0004a55b) list_setting_number_pane_t5

0x4542,	// (0x0004300f) list_double_heading_pane_cp2_ParamLimits

0x4542,	// (0x0004300f) list_double_heading_pane_cp2

0x3e33,	// (0x00042900) list_double_heading_pane_g1_cp2_ParamLimits

0x3e33,	// (0x00042900) list_double_heading_pane_g1_cp2

0x3ea6,	// (0x00042973) list_double_heading_pane_g2_cp2_ParamLimits

0x3ea6,	// (0x00042973) list_double_heading_pane_g2_cp2

0x7f40,	// (0x00046a0d) list_double_heading_pane_t1_cp2_ParamLimits

0x7f40,	// (0x00046a0d) list_double_heading_pane_t1_cp2

0x7f56,	// (0x00046a23) list_double_heading_pane_t2_cp2_ParamLimits

0x7f56,	// (0x00046a23) list_double_heading_pane_t2_cp2

0x3514,	// (0x00041fe1) aid_value_unit2

0x13b0,	// (0x0003fe7d) popup_preview_fixed_window

0x38a9,	// (0x00042376) bg_popup_preview_window_pane_cp02

0x7faa,	// (0x00046a77) list_preview_fixed_pane

0x7ff0,	// (0x00046abd) list_empty_pane_fp_ParamLimits

0x7ff0,	// (0x00046abd) list_empty_pane_fp

0x7ff0,	// (0x00046abd) list_single_cale_day_pane_fp_ParamLimits

0x7ff0,	// (0x00046abd) list_single_cale_day_pane_fp

0x7ff0,	// (0x00046abd) list_single_graphic_heading_pane_fp_ParamLimits

0x7ff0,	// (0x00046abd) list_single_graphic_heading_pane_fp

0x7ff0,	// (0x00046abd) list_single_graphic_pane_fp_ParamLimits

0x7ff0,	// (0x00046abd) list_single_graphic_pane_fp

0x7ff0,	// (0x00046abd) list_single_heading_pane_fp_ParamLimits

0x7ff0,	// (0x00046abd) list_single_heading_pane_fp

0x7ff0,	// (0x00046abd) list_single_pane_fp_ParamLimits

0x7ff0,	// (0x00046abd) list_single_pane_fp

0x8005,	// (0x00046ad2) list_single_pane_fp_g1_ParamLimits

0x8005,	// (0x00046ad2) list_single_pane_fp_g1

0x3e33,	// (0x00042900) list_single_pane_fp_g2_ParamLimits

0x3e33,	// (0x00042900) list_single_pane_fp_g2

0x3ea6,	// (0x00042973) list_single_pane_fp_g3_ParamLimits

0x3ea6,	// (0x00042973) list_single_pane_fp_g3

0x8011,	// (0x00046ade) list_single_pane_fp_g4_ParamLimits

0x8011,	// (0x00046ade) list_single_pane_fp_g4

0x0003,

0xfb69,	// (0x0004e636) list_single_pane_fp_g_ParamLimits

0xfb69,	// (0x0004e636) list_single_pane_fp_g

0x0e5d,	// (0x0003f92a) list_single_pane_fp_t1_ParamLimits

0x0e5d,	// (0x0003f92a) list_single_pane_fp_t1

0x0e74,	// (0x0003f941) list_single_graphic_pane_fp_g1_ParamLimits

0x0e74,	// (0x0003f941) list_single_graphic_pane_fp_g1

0x8005,	// (0x00046ad2) list_single_graphic_pane_fp_g2_ParamLimits

0x8005,	// (0x00046ad2) list_single_graphic_pane_fp_g2

0x3e33,	// (0x00042900) list_single_graphic_pane_fp_g3_ParamLimits

0x3e33,	// (0x00042900) list_single_graphic_pane_fp_g3

0x3ea6,	// (0x00042973) list_single_graphic_pane_fp_g4_ParamLimits

0x3ea6,	// (0x00042973) list_single_graphic_pane_fp_g4

0x8011,	// (0x00046ade) list_single_graphic_pane_fp_g5_ParamLimits

0x8011,	// (0x00046ade) list_single_graphic_pane_fp_g5

0x0004,

0xfb72,	// (0x0004e63f) list_single_graphic_pane_fp_g_ParamLimits

0xfb72,	// (0x0004e63f) list_single_graphic_pane_fp_g

0x0e80,	// (0x0003f94d) list_single_graphic_pane_fp_t1_ParamLimits

0x0e80,	// (0x0003f94d) list_single_graphic_pane_fp_t1

0x0e74,	// (0x0003f941) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0e74,	// (0x0003f941) list_single_graphic_heading_pane_fp_g1

0x8005,	// (0x00046ad2) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x8005,	// (0x00046ad2) list_single_graphic_heading_pane_fp_g2

0x3e33,	// (0x00042900) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3e33,	// (0x00042900) list_single_graphic_heading_pane_fp_g3

0x3ea6,	// (0x00042973) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3ea6,	// (0x00042973) list_single_graphic_heading_pane_fp_g4

0x8011,	// (0x00046ade) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x8011,	// (0x00046ade) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb72,	// (0x0004e63f) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb72,	// (0x0004e63f) list_single_graphic_heading_pane_fp_g

0x0e96,	// (0x0003f963) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0e96,	// (0x0003f963) list_single_graphic_heading_pane_fp_t1

0x0eac,	// (0x0003f979) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0eac,	// (0x0003f979) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb7d,	// (0x0004e64a) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb7d,	// (0x0004e64a) list_single_graphic_heading_pane_fp_t

0x0ebe,	// (0x0003f98b) list_single_cale_day_pane_fp_g1_ParamLimits

0x0ebe,	// (0x0003f98b) list_single_cale_day_pane_fp_g1

0x801d,	// (0x00046aea) list_single_cale_day_pane_fp_g2_ParamLimits

0x801d,	// (0x00046aea) list_single_cale_day_pane_fp_g2

0x293c,	// (0x00041409) list_single_cale_day_pane_fp_g3_ParamLimits

0x293c,	// (0x00041409) list_single_cale_day_pane_fp_g3

0x2964,	// (0x00041431) list_single_cale_day_pane_fp_g4_ParamLimits

0x2964,	// (0x00041431) list_single_cale_day_pane_fp_g4

0x2988,	// (0x00041455) list_single_cale_day_pane_fp_g5_ParamLimits

0x2988,	// (0x00041455) list_single_cale_day_pane_fp_g5

0x0004,

0xfb82,	// (0x0004e64f) list_single_cale_day_pane_fp_g_ParamLimits

0xfb82,	// (0x0004e64f) list_single_cale_day_pane_fp_g

0x0ef6,	// (0x0003f9c3) list_single_cale_day_pane_fp_t1_ParamLimits

0x0ef6,	// (0x0003f9c3) list_single_cale_day_pane_fp_t1

0x0f1c,	// (0x0003f9e9) list_single_cale_day_pane_fp_t2_ParamLimits

0x0f1c,	// (0x0003f9e9) list_single_cale_day_pane_fp_t2

0x0f35,	// (0x0003fa02) list_single_cale_day_pane_fp_t3_ParamLimits

0x0f35,	// (0x0003fa02) list_single_cale_day_pane_fp_t3

0x0002,

0xfb8d,	// (0x0004e65a) list_single_cale_day_pane_fp_t_ParamLimits

0xfb8d,	// (0x0004e65a) list_single_cale_day_pane_fp_t

0x8005,	// (0x00046ad2) list_empty_pane_fp_g1_ParamLimits

0x8005,	// (0x00046ad2) list_empty_pane_fp_g1

0x0f4e,	// (0x0003fa1b) list_empty_pane_fp_t1

0x0f5c,	// (0x0003fa29) list_empty_pane_fp_t2

0x0001,

0xfb94,	// (0x0004e661) list_empty_pane_fp_t

0x8005,	// (0x00046ad2) list_single_heading_pane_fp_g1_ParamLimits

0x8005,	// (0x00046ad2) list_single_heading_pane_fp_g1

0x3e33,	// (0x00042900) list_single_heading_pane_fp_g2_ParamLimits

0x3e33,	// (0x00042900) list_single_heading_pane_fp_g2

0x3ea6,	// (0x00042973) list_single_heading_pane_fp_g3_ParamLimits

0x3ea6,	// (0x00042973) list_single_heading_pane_fp_g3

0x0002,

0xfb99,	// (0x0004e666) list_single_heading_pane_fp_g_ParamLimits

0xfb99,	// (0x0004e666) list_single_heading_pane_fp_g

0x0f6a,	// (0x0003fa37) list_single_heading_pane_fp_t1_ParamLimits

0x0f6a,	// (0x0003fa37) list_single_heading_pane_fp_t1

0x0f7c,	// (0x0003fa49) list_single_heading_pane_fp_t2_ParamLimits

0x0f7c,	// (0x0003fa49) list_single_heading_pane_fp_t2

0x0001,

0xfba0,	// (0x0004e66d) list_single_heading_pane_fp_t_ParamLimits

0xfba0,	// (0x0004e66d) list_single_heading_pane_fp_t

0x408e,	// (0x00042b5b) aid_size_cell_fast

0x3819,	// (0x000422e6) soft_indicator_pane_cp1_t1

0x40cb,	// (0x00042b98) cell_app_pane_cp2_ParamLimits

0x40cb,	// (0x00042b98) cell_app_pane_cp2

0x2700,	// (0x000411cd) fep_hwr_candidate_drop_down_list_pane

0xe096,	// (0x0004cb63) fep_hwr_candidate_pane_g3_ParamLimits

0xe096,	// (0x0004cb63) fep_hwr_candidate_pane_g3

0xe0a3,	// (0x0004cb70) fep_hwr_candidate_pane_g4_ParamLimits

0xe0a3,	// (0x0004cb70) fep_hwr_candidate_pane_g4

0x0002,

0xfb14,	// (0x0004e5e1) fep_hwr_candidate_pane_g_ParamLimits

0xfb14,	// (0x0004e5e1) fep_hwr_candidate_pane_g

0x7acc,	// (0x00046599) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7acc,	// (0x00046599) fep_vkb_candidate_drop_down_list_pane

0x7edd,	// (0x000469aa) fep_vkb_candidate_pane_g3

0x7ee5,	// (0x000469b2) fep_vkb_candidate_pane_g4

0x0002,

0xfb41,	// (0x0004e60e) fep_vkb_candidate_pane_g

0x7be5,	// (0x000466b2) cell_hwr_candidate_pane_g1_ParamLimits

0x7f68,	// (0x00046a35) cell_hwr_candidate_pane_g3_ParamLimits

0x7f68,	// (0x00046a35) cell_hwr_candidate_pane_g3

0x7f89,	// (0x00046a56) cell_hwr_candidate_pane_g4_ParamLimits

0x7f89,	// (0x00046a56) cell_hwr_candidate_pane_g4

0x0002,

0xfb5b,	// (0x0004e628) cell_hwr_candidate_pane_g_ParamLimits

0xfb5b,	// (0x0004e628) cell_hwr_candidate_pane_g

0x7efc,	// (0x000469c9) cell_vkb_candidate_pane_g3_ParamLimits

0x7efc,	// (0x000469c9) cell_vkb_candidate_pane_g3

0x7f17,	// (0x000469e4) cell_vkb_candidate_pane_g4_ParamLimits

0x7f17,	// (0x000469e4) cell_vkb_candidate_pane_g4

0x8029,	// (0x00046af6) cell_app_pane_cp2_g1_ParamLimits

0x8029,	// (0x00046af6) cell_app_pane_cp2_g1

0x8047,	// (0x00046b14) cell_app_pane_cp2_g2_ParamLimits

0x8047,	// (0x00046b14) cell_app_pane_cp2_g2

0x0001,

0xfba5,	// (0x0004e672) cell_app_pane_cp2_g_ParamLimits

0xfba5,	// (0x0004e672) cell_app_pane_cp2_g

0x8053,	// (0x00046b20) cell_app_pane_cp2_t1_ParamLimits

0x8053,	// (0x00046b20) cell_app_pane_cp2_t1

0x3e98,	// (0x00042965) grid_highlight_pane_cp1_ParamLimits

0x3e98,	// (0x00042965) grid_highlight_pane_cp1

0x29ac,	// (0x00041479) cell_hwr_candidate_pane_cp1_ParamLimits

0x29ac,	// (0x00041479) cell_hwr_candidate_pane_cp1

0x7be5,	// (0x000466b2) fep_hwr_candidate_drop_down_list_pane_g1

0x8065,	// (0x00046b32) fep_hwr_candidate_drop_down_list_pane_g2

0x8072,	// (0x00046b3f) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbaa,	// (0x0004e677) fep_hwr_candidate_drop_down_list_pane_g

0x29cb,	// (0x00041498) fep_hwr_candidate_drop_down_list_scroll_pane

0x29d4,	// (0x000414a1) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x29d4,	// (0x000414a1) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x29e1,	// (0x000414ae) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x29e1,	// (0x000414ae) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x29ee,	// (0x000414bb) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x29ee,	// (0x000414bb) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7efc,	// (0x000469c9) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7efc,	// (0x000469c9) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7f17,	// (0x000469e4) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7f17,	// (0x000469e4) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x29fb,	// (0x000414c8) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x29fb,	// (0x000414c8) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2a16,	// (0x000414e3) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2a16,	// (0x000414e3) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2a31,	// (0x000414fe) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2a31,	// (0x000414fe) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb1,	// (0x0004e67e) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb1,	// (0x0004e67e) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x807f,	// (0x00046b4c) cell_vkb_candidate_pane_cp1_ParamLimits

0x807f,	// (0x00046b4c) cell_vkb_candidate_pane_cp1

0x7be5,	// (0x000466b2) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7be5,	// (0x000466b2) fep_vkb_candidate_drop_down_list_pane_g1

0x8065,	// (0x00046b32) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x8065,	// (0x00046b32) fep_vkb_candidate_drop_down_list_pane_g2

0x8072,	// (0x00046b3f) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x8072,	// (0x00046b3f) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbaa,	// (0x0004e677) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbaa,	// (0x0004e677) fep_vkb_candidate_drop_down_list_pane_g

0x809f,	// (0x00046b6c) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x809f,	// (0x00046b6c) fep_vkb_candidate_drop_down_list_scroll_pane

0x80ac,	// (0x00046b79) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x80ac,	// (0x00046b79) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x80b9,	// (0x00046b86) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x80b9,	// (0x00046b86) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x80c5,	// (0x00046b92) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x80c5,	// (0x00046b92) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7f68,	// (0x00046a35) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7f68,	// (0x00046a35) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7f89,	// (0x00046a56) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7f89,	// (0x00046a56) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x80d1,	// (0x00046b9e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x80d1,	// (0x00046b9e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x80f2,	// (0x00046bbf) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x80f2,	// (0x00046bbf) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x8113,	// (0x00046be0) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8113,	// (0x00046be0) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc2,	// (0x0004e68f) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc2,	// (0x0004e68f) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xcf8c,	// (0x0004ba59) title_pane_g1_ParamLimits

0xcf9f,	// (0x0004ba6c) title_pane_g2_ParamLimits

0xf554,	// (0x0004e021) title_pane_g_ParamLimits

0x44fb,	// (0x00042fc8) aid_call2_pane

0x4503,	// (0x00042fd0) aid_call_pane

0x450b,	// (0x00042fd8) popup_clock_analogue_window_g1

0x450b,	// (0x00042fd8) popup_clock_analogue_window_g2

0x17cd,	// (0x0004029a) popup_clock_analogue_window_g3

0x17d6,	// (0x000402a3) popup_clock_analogue_window_g4

0x3536,	// (0x00042003) popup_clock_analogue_window_g5

0x0004,

0xf703,	// (0x0004e1d0) popup_clock_analogue_window_g

0x17de,	// (0x000402ab) popup_clock_analogue_window_t1

0x17ec,	// (0x000402b9) clock_digital_number_pane_ParamLimits

0x17ec,	// (0x000402b9) clock_digital_number_pane

0x17f8,	// (0x000402c5) clock_digital_number_pane_cp02_ParamLimits

0x17f8,	// (0x000402c5) clock_digital_number_pane_cp02

0x1804,	// (0x000402d1) clock_digital_number_pane_cp03_ParamLimits

0x1804,	// (0x000402d1) clock_digital_number_pane_cp03

0x1810,	// (0x000402dd) clock_digital_number_pane_cp04_ParamLimits

0x1810,	// (0x000402dd) clock_digital_number_pane_cp04

0x181c,	// (0x000402e9) clock_digital_separator_pane_ParamLimits

0x181c,	// (0x000402e9) clock_digital_separator_pane

0x1828,	// (0x000402f5) popup_clock_digital_window_t1_ParamLimits

0x1828,	// (0x000402f5) popup_clock_digital_window_t1

0x3536,	// (0x00042003) clock_digital_number_pane_g1

0x3536,	// (0x00042003) clock_digital_number_pane_g2

0x0001,

0xf70e,	// (0x0004e1db) clock_digital_number_pane_g

0x3536,	// (0x00042003) clock_digital_separator_pane_g1

0x3536,	// (0x00042003) clock_digital_separator_pane_g2

0x0001,

0xf70e,	// (0x0004e1db) clock_digital_separator_pane_g

0xd59f,	// (0x0004c06c) aid_fill_nsta_ParamLimits

0xd6d5,	// (0x0004c1a2) indicator_nsta_pane_ParamLimits

0x5134,	// (0x00043c01) popup_clock_analogue_window

0x5134,	// (0x00043c01) popup_clock_digital_window

0x404f,	// (0x00042b1c) grid_indicator_nsta_pane_ParamLimits

0x7350,	// (0x00045e1d) clock_nsta_pane_t2

0x0001,

0xfa94,	// (0x0004e561) clock_nsta_pane_t

0x1791,	// (0x0004025e) aid_size_max_handle

0xc0b4,	// (0x0004ab81) aid_size_min_handle

0x4b13,	// (0x000435e0) editor_scroll_pane

0x812e,	// (0x00046bfb) ex_editor_pane

0x3ffc,	// (0x00042ac9) scroll_pane_cp13

0x3e2b,	// (0x000428f8) scroll_pane_cp14

0x453a,	// (0x00043007) scroll_pane_cp36

0xd412,	// (0x0004bedf) list_single_graphic_hl_pane_cp2_ParamLimits

0xd412,	// (0x0004bedf) list_single_graphic_hl_pane_cp2

0xc978,	// (0x0004b445) list_single_graphic_hl_pane_ParamLimits

0xc978,	// (0x0004b445) list_single_graphic_hl_pane

0x0f92,	// (0x0003fa5f) aid_size_min_hl_cp1

0x8136,	// (0x00046c03) list_highlight_pane_cp34_ParamLimits

0x8136,	// (0x00046c03) list_highlight_pane_cp34

0x8147,	// (0x00046c14) list_single_graphic_hl_pane_g1_ParamLimits

0x8147,	// (0x00046c14) list_single_graphic_hl_pane_g1

0xbd44,	// (0x0004a811) list_single_graphic_hl_pane_g2_ParamLimits

0xbd44,	// (0x0004a811) list_single_graphic_hl_pane_g2

0xbd44,	// (0x0004a811) list_single_graphic_hl_pane_g3_ParamLimits

0xbd44,	// (0x0004a811) list_single_graphic_hl_pane_g3

0x4a84,	// (0x00043551) list_single_graphic_hl_pane_g4_ParamLimits

0x4a84,	// (0x00043551) list_single_graphic_hl_pane_g4

0x2a4c,	// (0x00041519) list_single_graphic_hl_pane_g5_ParamLimits

0x2a4c,	// (0x00041519) list_single_graphic_hl_pane_g5

0x0004,

0xfbd3,	// (0x0004e6a0) list_single_graphic_hl_pane_g_ParamLimits

0xfbd3,	// (0x0004e6a0) list_single_graphic_hl_pane_g

0xbd50,	// (0x0004a81d) list_single_graphic_hl_pane_t1_ParamLimits

0xbd50,	// (0x0004a81d) list_single_graphic_hl_pane_t1

0x8154,	// (0x00046c21) aid_size_min_hl_cp2

0x815d,	// (0x00046c2a) list_highlight_pane_cp34_cp2_ParamLimits

0x815d,	// (0x00046c2a) list_highlight_pane_cp34_cp2

0x8147,	// (0x00046c14) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x8147,	// (0x00046c14) list_single_graphic_hl_pane_g1_cp2

0x816a,	// (0x00046c37) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x816a,	// (0x00046c37) list_single_graphic_hl_pane_g2_cp2

0x8176,	// (0x00046c43) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x8176,	// (0x00046c43) list_single_graphic_hl_pane_g3_cp2

0x7747,	// (0x00046214) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7747,	// (0x00046214) list_single_graphic_hl_pane_g4_cp2

0x8184,	// (0x00046c51) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x8184,	// (0x00046c51) list_single_graphic_hl_pane_g5_cp2

0xc121,	// (0x0004abee) control_pane_g4_ParamLimits

0xc121,	// (0x0004abee) control_pane_g4

0x4e53,	// (0x00043920) bg_popup_sub_pane_cp10_ParamLimits

0x7971,	// (0x0004643e) list_choice_list_pane_ParamLimits

0x7980,	// (0x0004644d) scroll_pane_cp23

0x38a9,	// (0x00042376) bg_popup_preview_window_pane_cp02_ParamLimits

0x7faa,	// (0x00046a77) list_preview_fixed_pane_ParamLimits

0x7fc0,	// (0x00046a8d) list_preview_fixed_pane_cp_ParamLimits

0x7fc0,	// (0x00046a8d) list_preview_fixed_pane_cp

0x7fcc,	// (0x00046a99) popup_preview_fixed_window_g1_ParamLimits

0x7fcc,	// (0x00046a99) popup_preview_fixed_window_g1

0x7fd8,	// (0x00046aa5) popup_preview_fixed_window_g2_ParamLimits

0x7fd8,	// (0x00046aa5) popup_preview_fixed_window_g2

0x0002,

0xfb62,	// (0x0004e62f) popup_preview_fixed_window_g_ParamLimits

0xfb62,	// (0x0004e62f) popup_preview_fixed_window_g

0x1705,	// (0x000401d2) aid_navi_side_left_pane_ParamLimits

0x171a,	// (0x000401e7) aid_navi_side_right_pane_ParamLimits

0x1732,	// (0x000401ff) navi_icon_pane_stacon_ParamLimits

0x1746,	// (0x00040213) navi_navi_pane_stacon_ParamLimits

0x1732,	// (0x000401ff) navi_text_pane_stacon_ParamLimits

0x352c,	// (0x00041ff9) main_text_info_pane

0x81ae,	// (0x00046c7b) listscroll_text_info_pane

0x81b6,	// (0x00046c83) list_text_info_pane_ParamLimits

0x81b6,	// (0x00046c83) list_text_info_pane

0x81c5,	// (0x00046c92) scroll_pane_cp24_ParamLimits

0x81c5,	// (0x00046c92) scroll_pane_cp24

0xe23a,	// (0x0004cd07) list_text_info_pane_t1_ParamLimits

0xe23a,	// (0x0004cd07) list_text_info_pane_t1

0xc27c,	// (0x0004ad49) popup_fast_swap2_window_ParamLimits

0xc27c,	// (0x0004ad49) popup_fast_swap2_window

0x8214,	// (0x00046ce1) aid_size_cell_fast2

0x352c,	// (0x00041ff9) bg_popup_window_pane_cp17

0x57c7,	// (0x00044294) heading_pane_cp2

0x3af5,	// (0x000425c2) listscroll_fast2_pane

0x821e,	// (0x00046ceb) grid_fast2_pane

0x8228,	// (0x00046cf5) listscroll_fast2_pane_g1

0x8230,	// (0x00046cfd) listscroll_fast2_pane_g2

0x0001,

0xfbde,	// (0x0004e6ab) listscroll_fast2_pane_g

0x3ffc,	// (0x00042ac9) scroll_pane_cp26

0x823a,	// (0x00046d07) cell_fast2_pane_ParamLimits

0x823a,	// (0x00046d07) cell_fast2_pane

0x824f,	// (0x00046d1c) cell_fast2_pane_g1

0x8258,	// (0x00046d25) cell_fast2_pane_g2

0x8261,	// (0x00046d2e) cell_fast2_pane_g3

0x0002,

0xfbe3,	// (0x0004e6b0) cell_fast2_pane_g

0x3be8,	// (0x000426b5) grid_highlight_pane_cp9

0x3bfd,	// (0x000426ca) main_eswt_pane_ParamLimits

0x3bfd,	// (0x000426ca) main_eswt_pane

0x81da,	// (0x00046ca7) list_single_text_info_pane

0x8269,	// (0x00046d36) eswt_ctrl_button_pane

0x8269,	// (0x00046d36) eswt_ctrl_canvas_pane

0x8271,	// (0x00046d3e) eswt_ctrl_combo_pane

0x8269,	// (0x00046d36) eswt_ctrl_default_pane

0x8269,	// (0x00046d36) eswt_ctrl_label_pane

0x8279,	// (0x00046d46) eswt_ctrl_wait_pane

0x8281,	// (0x00046d4e) eswt_shell_pane

0x352c,	// (0x00041ff9) listscroll_eswt_app_pane

0x82a1,	// (0x00046d6e) popup_eswt_tasktip_window_ParamLimits

0x82a1,	// (0x00046d6e) popup_eswt_tasktip_window

0x53d1,	// (0x00043e9e) bg_popup_window_pane_cp18

0x82b2,	// (0x00046d7f) eswt_control_pane_g1_ParamLimits

0x82b2,	// (0x00046d7f) eswt_control_pane_g1

0x82bf,	// (0x00046d8c) eswt_control_pane_g2_ParamLimits

0x82bf,	// (0x00046d8c) eswt_control_pane_g2

0x82cc,	// (0x00046d99) eswt_control_pane_g3_ParamLimits

0x82cc,	// (0x00046d99) eswt_control_pane_g3

0x82d9,	// (0x00046da6) eswt_control_pane_g4_ParamLimits

0x82d9,	// (0x00046da6) eswt_control_pane_g4

0x0003,

0xfbea,	// (0x0004e6b7) eswt_control_pane_g_ParamLimits

0xfbea,	// (0x0004e6b7) eswt_control_pane_g

0x3e98,	// (0x00042965) bg_button_pane_ParamLimits

0x3e98,	// (0x00042965) bg_button_pane

0x3bfd,	// (0x000426ca) common_borders_pane_copy2_ParamLimits

0x3bfd,	// (0x000426ca) common_borders_pane_copy2

0x82e6,	// (0x00046db3) control_button_pane_g1_ParamLimits

0x82e6,	// (0x00046db3) control_button_pane_g1

0x82f2,	// (0x00046dbf) control_button_pane_g2_ParamLimits

0x82f2,	// (0x00046dbf) control_button_pane_g2

0x82fe,	// (0x00046dcb) control_button_pane_g3_ParamLimits

0x82fe,	// (0x00046dcb) control_button_pane_g3

0x0002,

0xfbf3,	// (0x0004e6c0) control_button_pane_g_ParamLimits

0xfbf3,	// (0x0004e6c0) control_button_pane_g

0x8312,	// (0x00046ddf) control_button_pane_t1

0x8320,	// (0x00046ded) control_button_pane_t2

0x0001,

0xfbfa,	// (0x0004e6c7) control_button_pane_t

0x535d,	// (0x00043e2a) bg_button_pane_g1

0x5365,	// (0x00043e32) bg_button_pane_g2

0x536d,	// (0x00043e3a) bg_button_pane_g3

0x5375,	// (0x00043e42) bg_button_pane_g4

0x537d,	// (0x00043e4a) bg_button_pane_g5

0x5385,	// (0x00043e52) bg_button_pane_g6

0x538d,	// (0x00043e5a) bg_button_pane_g7

0x5395,	// (0x00043e62) bg_button_pane_g8

0x539d,	// (0x00043e6a) bg_button_pane_g9

0x0008,

0xf86c,	// (0x0004e339) bg_button_pane_g

0x792c,	// (0x000463f9) common_borders_pane_ParamLimits

0x792c,	// (0x000463f9) common_borders_pane

0x82b2,	// (0x00046d7f) eswt_control_pane_g1_copy1_ParamLimits

0x82b2,	// (0x00046d7f) eswt_control_pane_g1_copy1

0x82bf,	// (0x00046d8c) eswt_control_pane_g2_copy1_ParamLimits

0x82bf,	// (0x00046d8c) eswt_control_pane_g2_copy1

0x82cc,	// (0x00046d99) eswt_control_pane_g3_copy1_ParamLimits

0x82cc,	// (0x00046d99) eswt_control_pane_g3_copy1

0x82d9,	// (0x00046da6) eswt_control_pane_g4_copy1_ParamLimits

0x82d9,	// (0x00046da6) eswt_control_pane_g4_copy1

0x7967,	// (0x00046434) bg_eswt_ctrl_canvas_pane_g1

0x792c,	// (0x000463f9) common_borders_pane_cp2_ParamLimits

0x792c,	// (0x000463f9) common_borders_pane_cp2

0x792c,	// (0x000463f9) common_borders_pane_cp3_ParamLimits

0x792c,	// (0x000463f9) common_borders_pane_cp3

0x832e,	// (0x00046dfb) separator_horizontal_pane

0x8336,	// (0x00046e03) separator_vertical_pane

0x82b2,	// (0x00046d7f) eswt_control_pane_g1_copy2_ParamLimits

0x82b2,	// (0x00046d7f) eswt_control_pane_g1_copy2

0x82bf,	// (0x00046d8c) eswt_control_pane_g2_copy2_ParamLimits

0x82bf,	// (0x00046d8c) eswt_control_pane_g2_copy2

0x82cc,	// (0x00046d99) eswt_control_pane_g3_copy2_ParamLimits

0x82cc,	// (0x00046d99) eswt_control_pane_g3_copy2

0x82d9,	// (0x00046da6) eswt_control_pane_g4_copy2_ParamLimits

0x82d9,	// (0x00046da6) eswt_control_pane_g4_copy2

0x352c,	// (0x00041ff9) common_borders_pane_cp4

0x833f,	// (0x00046e0c) separator_horizontal_pane_g1

0x8348,	// (0x00046e15) separator_horizontal_pane_g2

0x8351,	// (0x00046e1e) separator_horizontal_pane_g3

0x0002,

0xfbff,	// (0x0004e6cc) separator_horizontal_pane_g

0x82b2,	// (0x00046d7f) eswt_control_pane_g1_copy3_ParamLimits

0x82b2,	// (0x00046d7f) eswt_control_pane_g1_copy3

0x82bf,	// (0x00046d8c) eswt_control_pane_g2_copy3_ParamLimits

0x82bf,	// (0x00046d8c) eswt_control_pane_g2_copy3

0x82cc,	// (0x00046d99) eswt_control_pane_g3_copy3_ParamLimits

0x82cc,	// (0x00046d99) eswt_control_pane_g3_copy3

0x82d9,	// (0x00046da6) eswt_control_pane_g4_copy3_ParamLimits

0x82d9,	// (0x00046da6) eswt_control_pane_g4_copy3

0x352c,	// (0x00041ff9) common_borders_pane_cp5

0x835a,	// (0x00046e27) separator_vertical_pane_g1

0x8363,	// (0x00046e30) separator_vertical_pane_g2

0x836c,	// (0x00046e39) separator_vertical_pane_g3

0x0002,

0xfc06,	// (0x0004e6d3) separator_vertical_pane_g

0x82b2,	// (0x00046d7f) eswt_control_pane_g1_copy4_ParamLimits

0x82b2,	// (0x00046d7f) eswt_control_pane_g1_copy4

0x82bf,	// (0x00046d8c) eswt_control_pane_g2_copy4_ParamLimits

0x82bf,	// (0x00046d8c) eswt_control_pane_g2_copy4

0x82cc,	// (0x00046d99) eswt_control_pane_g3_copy4_ParamLimits

0x82cc,	// (0x00046d99) eswt_control_pane_g3_copy4

0x82d9,	// (0x00046da6) eswt_control_pane_g4_copy4_ParamLimits

0x82d9,	// (0x00046da6) eswt_control_pane_g4_copy4

0xe255,	// (0x0004cd22) eswt_ctrl_combo_button_pane

0xe25d,	// (0x0004cd2a) eswt_ctrl_input_pane

0xe265,	// (0x0004cd32) popup_choice_list_window_cp70

0xe26d,	// (0x0004cd3a) eswt_ctrl_input_pane_t1

0x352c,	// (0x00041ff9) input_focus_pane_cp70

0x792c,	// (0x000463f9) bg_button_pane_cp70_ParamLimits

0x792c,	// (0x000463f9) bg_button_pane_cp70

0xe27b,	// (0x0004cd48) eswt_ctrl_combo_button_pane_g1

0x83a3,	// (0x00046e70) wait_bar_pane_cp70

0x53d1,	// (0x00043e9e) bg_popup_window_pane_cp70_ParamLimits

0x53d1,	// (0x00043e9e) bg_popup_window_pane_cp70

0x83ab,	// (0x00046e78) popup_eswt_tasktip_window_t1

0x83c1,	// (0x00046e8e) wait_bar_pane_cp71_ParamLimits

0x83c1,	// (0x00046e8e) wait_bar_pane_cp71

0x83cd,	// (0x00046e9a) grid_eswt_app_pane

0x431d,	// (0x00042dea) scroll_pane_cp70

0xe283,	// (0x0004cd50) cell_eswt_app_pane_ParamLimits

0xe283,	// (0x0004cd50) cell_eswt_app_pane

0xe2ad,	// (0x0004cd7a) cell_eswt_app_pane_g1_ParamLimits

0xe2ad,	// (0x0004cd7a) cell_eswt_app_pane_g1

0xe2dc,	// (0x0004cda9) cell_eswt_app_pane_g2_ParamLimits

0xe2dc,	// (0x0004cda9) cell_eswt_app_pane_g2

0x0001,

0xfc0d,	// (0x0004e6da) cell_eswt_app_pane_g_ParamLimits

0xfc0d,	// (0x0004e6da) cell_eswt_app_pane_g

0xe305,	// (0x0004cdd2) cell_eswt_app_pane_t1_ParamLimits

0xe305,	// (0x0004cdd2) cell_eswt_app_pane_t1

0x8490,	// (0x00046f5d) grid_highlight_pane_cp70_ParamLimits

0x8490,	// (0x00046f5d) grid_highlight_pane_cp70

0x49e8,	// (0x000434b5) set_content_pane_g1

0x4db3,	// (0x00043880) status_small_volume_pane

0x2a60,	// (0x0004152d) status_small_volume_pane_g1

0x2a68,	// (0x00041535) volume_small2_pane

0x2a71,	// (0x0004153e) volume_small2_pane_g1

0x2a7a,	// (0x00041547) volume_small2_pane_g2

0x2a83,	// (0x00041550) volume_small2_pane_g3

0x2a8c,	// (0x00041559) volume_small2_pane_g4

0x2a95,	// (0x00041562) volume_small2_pane_g5

0x2a9e,	// (0x0004156b) volume_small2_pane_g6

0x2aa7,	// (0x00041574) volume_small2_pane_g7

0x2ab0,	// (0x0004157d) volume_small2_pane_g8

0x2ab9,	// (0x00041586) volume_small2_pane_g9

0x2ac2,	// (0x0004158f) volume_small2_pane_g10

0x0009,

0xfc12,	// (0x0004e6df) volume_small2_pane_g

0x7d2d,	// (0x000467fa) fep_vkb_top_text_pane_g1_ParamLimits

0xe1e2,	// (0x0004ccaf) fep_vkb_top_text_pane_t1_ParamLimits

0x7fe4,	// (0x00046ab1) popup_preview_fixed_window_g3_ParamLimits

0x7fe4,	// (0x00046ab1) popup_preview_fixed_window_g3

0xc899,	// (0x0004b366) popup_toolbar_trans_pane

0xdbe2,	// (0x0004c6af) aid_height_set_list_ParamLimits

0x677b,	// (0x00045248) aid_size_parent_ParamLimits

0x4e53,	// (0x00043920) list_highlight_pane_cp2_ParamLimits

0x49e8,	// (0x000434b5) set_content_pane_g1_ParamLimits

0xc989,	// (0x0004b456) list_single_image_pane_ParamLimits

0xc989,	// (0x0004b456) list_single_image_pane

0xe337,	// (0x0004ce04) aid_size_cell_image_ParamLimits

0xe337,	// (0x0004ce04) aid_size_cell_image

0xe344,	// (0x0004ce11) grid_single_image_pane_ParamLimits

0xe344,	// (0x0004ce11) grid_single_image_pane

0x5658,	// (0x00044125) list_single_image_pane_g1_ParamLimits

0x5658,	// (0x00044125) list_single_image_pane_g1

0x84b5,	// (0x00046f82) list_single_image_pane_g2_ParamLimits

0x84b5,	// (0x00046f82) list_single_image_pane_g2

0x0001,

0xfc27,	// (0x0004e6f4) list_single_image_pane_g_ParamLimits

0xfc27,	// (0x0004e6f4) list_single_image_pane_g

0x84c9,	// (0x00046f96) list_single_image_pane_t1_ParamLimits

0x84c9,	// (0x00046f96) list_single_image_pane_t1

0xe352,	// (0x0004ce1f) cell_image_list_pane_ParamLimits

0xe352,	// (0x0004ce1f) cell_image_list_pane

0xe368,	// (0x0004ce35) cell_image_list_pane_g1

0xe371,	// (0x0004ce3e) cell_image_list_pane_g2

0x0001,

0xfc2c,	// (0x0004e6f9) cell_image_list_pane_g

0x8505,	// (0x00046fd2) aid_size_cell_tb_trans_pane

0x3e98,	// (0x00042965) bg_tb_trans_pane

0x8517,	// (0x00046fe4) grid_tb_trans_pane

0x535d,	// (0x00043e2a) bg_tb_trans_pane_g1

0x5365,	// (0x00043e32) bg_tb_trans_pane_g2

0x536d,	// (0x00043e3a) bg_tb_trans_pane_g3

0x5375,	// (0x00043e42) bg_tb_trans_pane_g4

0x537d,	// (0x00043e4a) bg_tb_trans_pane_g5

0x5395,	// (0x00043e62) bg_tb_trans_pane_g6

0x539d,	// (0x00043e6a) bg_tb_trans_pane_g7

0x5385,	// (0x00043e52) bg_tb_trans_pane_g8

0x538d,	// (0x00043e5a) bg_tb_trans_pane_g9

0x0008,

0xfc31,	// (0x0004e6fe) bg_tb_trans_pane_g

0x852b,	// (0x00046ff8) cell_toolbar_trans_pane_ParamLimits

0x852b,	// (0x00046ff8) cell_toolbar_trans_pane

0x7967,	// (0x00046434) cell_toolbar_trans_pane_g1

0xdfa3,	// (0x0004ca70) list_form2_midp_pane_t1

0xdfb1,	// (0x0004ca7e) list_form2_midp_pane_t2

0x0001,

0xfada,	// (0x0004e5a7) list_form2_midp_pane_t

0x7541,	// (0x0004600e) scroll_pane_cp51_ParamLimits

0x76fd,	// (0x000461ca) form2_midp_wait_pane_g1

0x7706,	// (0x000461d3) form2_midp_wait_pane_g2

0x770f,	// (0x000461dc) form2_midp_wait_pane_g3

0x0002,

0xfaef,	// (0x0004e5bc) form2_midp_wait_pane_g

0x3620,	// (0x000420ed) list_highlight_pane_cp21_ParamLimits

0x7772,	// (0x0004623f) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7781,	// (0x0004624e) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6933,	// (0x00045400) list_single_2graphic_im_pane_ParamLimits

0x6933,	// (0x00045400) list_single_2graphic_im_pane

0xe37a,	// (0x0004ce47) list_single_2graphic_im_pane_g1_ParamLimits

0xe37a,	// (0x0004ce47) list_single_2graphic_im_pane_g1

0xe38b,	// (0x0004ce58) list_single_2graphic_im_pane_g2_ParamLimits

0xe38b,	// (0x0004ce58) list_single_2graphic_im_pane_g2

0xe397,	// (0x0004ce64) list_single_2graphic_im_pane_g3_ParamLimits

0xe397,	// (0x0004ce64) list_single_2graphic_im_pane_g3

0x0003,

0xfc44,	// (0x0004e711) list_single_2graphic_im_pane_g_ParamLimits

0xfc44,	// (0x0004e711) list_single_2graphic_im_pane_g

0xe3ab,	// (0x0004ce78) list_single_2graphic_im_pane_t1_ParamLimits

0xe3ab,	// (0x0004ce78) list_single_2graphic_im_pane_t1

0x7ff0,	// (0x00046abd) list_single_graphic_2heading_pane_fp_ParamLimits

0x7ff0,	// (0x00046abd) list_single_graphic_2heading_pane_fp

0x0e74,	// (0x0003f941) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0e74,	// (0x0003f941) list_single_graphic_2heading_pane_fp_g1

0x8005,	// (0x00046ad2) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x8005,	// (0x00046ad2) list_single_graphic_2heading_pane_fp_g2

0x3e33,	// (0x00042900) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3e33,	// (0x00042900) list_single_graphic_2heading_pane_fp_g3

0x3ea6,	// (0x00042973) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3ea6,	// (0x00042973) list_single_graphic_2heading_pane_fp_g4

0x8011,	// (0x00046ade) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x8011,	// (0x00046ade) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb72,	// (0x0004e63f) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb72,	// (0x0004e63f) list_single_graphic_2heading_pane_fp_g

0x0fbd,	// (0x0003fa8a) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x0fbd,	// (0x0003fa8a) list_single_graphic_2heading_pane_fp_t1

0x0eac,	// (0x0003f979) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0eac,	// (0x0003f979) list_single_graphic_2heading_pane_fp_t2

0x0fd3,	// (0x0003faa0) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x0fd3,	// (0x0003faa0) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc4d,	// (0x0004e71a) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc4d,	// (0x0004e71a) list_single_graphic_2heading_pane_fp_t

0x79f3,	// (0x000464c0) fep_hwr_write_pane_g5_ParamLimits

0x79f3,	// (0x000464c0) fep_hwr_write_pane_g5

0x79ff,	// (0x000464cc) fep_hwr_write_pane_g6_ParamLimits

0x79ff,	// (0x000464cc) fep_hwr_write_pane_g6

0x8281,	// (0x00046d4e) eswt_shell_pane_ParamLimits

0x53d1,	// (0x00043e9e) bg_popup_window_pane_cp18_ParamLimits

0x6681,	// (0x0004514e) heading_pane_cp70

0x83ab,	// (0x00046e78) popup_eswt_tasktip_window_t1_ParamLimits

0xd5fa,	// (0x0004c0c7) aid_touch_tab_arrow_left

0xd610,	// (0x0004c0dd) aid_touch_tab_arrow_right

0xcfb7,	// (0x0004ba84) title_pane_g3_ParamLimits

0xcfb7,	// (0x0004ba84) title_pane_g3

0x3e57,	// (0x00042924) set_value_pane_g1

0xc899,	// (0x0004b366) popup_toolbar_trans_pane_ParamLimits

0x8505,	// (0x00046fd2) aid_size_cell_tb_trans_pane_ParamLimits

0x3e98,	// (0x00042965) bg_tb_trans_pane_ParamLimits

0x8517,	// (0x00046fe4) grid_tb_trans_pane_ParamLimits

0x38a9,	// (0x00042376) cont_note_pane_ParamLimits

0x38a9,	// (0x00042376) cont_note_pane

0x3bfd,	// (0x000426ca) cont_snote2_single_text_pane_ParamLimits

0x3bfd,	// (0x000426ca) cont_snote2_single_text_pane

0x3bfd,	// (0x000426ca) cont_snote2_single_graphic_pane_ParamLimits

0x3bfd,	// (0x000426ca) cont_snote2_single_graphic_pane

0x59e2,	// (0x000444af) cont_note_wait_pane_ParamLimits

0x59e2,	// (0x000444af) cont_note_wait_pane

0x59e2,	// (0x000444af) cont_note_image_pane_ParamLimits

0x59e2,	// (0x000444af) cont_note_image_pane

0x85bf,	// (0x0004708c) popup_note2_window_g1_ParamLimits

0x85bf,	// (0x0004708c) popup_note2_window_g1

0x85f0,	// (0x000470bd) popup_note2_window_t1_ParamLimits

0x85f0,	// (0x000470bd) popup_note2_window_t1

0x8635,	// (0x00047102) popup_note2_window_t2_ParamLimits

0x8635,	// (0x00047102) popup_note2_window_t2

0x867a,	// (0x00047147) popup_note2_window_t3_ParamLimits

0x867a,	// (0x00047147) popup_note2_window_t3

0x86bf,	// (0x0004718c) popup_note2_window_t4_ParamLimits

0x86bf,	// (0x0004718c) popup_note2_window_t4

0x392d,	// (0x000423fa) popup_note2_window_t5_ParamLimits

0x392d,	// (0x000423fa) popup_note2_window_t5

0x0004,

0xfc59,	// (0x0004e726) popup_note2_window_t_ParamLimits

0xfc59,	// (0x0004e726) popup_note2_window_t

0x86ee,	// (0x000471bb) popup_note2_image_window_g1_ParamLimits

0x86ee,	// (0x000471bb) popup_note2_image_window_g1

0x86fa,	// (0x000471c7) popup_note2_image_window_g2_ParamLimits

0x86fa,	// (0x000471c7) popup_note2_image_window_g2

0x0001,

0xfc64,	// (0x0004e731) popup_note2_image_window_g_ParamLimits

0xfc64,	// (0x0004e731) popup_note2_image_window_g

0x870c,	// (0x000471d9) popup_note2_image_window_t1_ParamLimits

0x870c,	// (0x000471d9) popup_note2_image_window_t1

0x8724,	// (0x000471f1) popup_note2_image_window_t2_ParamLimits

0x8724,	// (0x000471f1) popup_note2_image_window_t2

0x873c,	// (0x00047209) popup_note2_image_window_t3_ParamLimits

0x873c,	// (0x00047209) popup_note2_image_window_t3

0x0002,

0xfc69,	// (0x0004e736) popup_note2_image_window_t_ParamLimits

0xfc69,	// (0x0004e736) popup_note2_image_window_t

0x59f0,	// (0x000444bd) popup_note2_wait_window_g1_ParamLimits

0x59f0,	// (0x000444bd) popup_note2_wait_window_g1

0x8758,	// (0x00047225) popup_note2_wait_window_g2_ParamLimits

0x8758,	// (0x00047225) popup_note2_wait_window_g2

0x5a08,	// (0x000444d5) popup_note2_wait_window_g3_ParamLimits

0x5a08,	// (0x000444d5) popup_note2_wait_window_g3

0x0002,

0xfc70,	// (0x0004e73d) popup_note2_wait_window_g_ParamLimits

0xfc70,	// (0x0004e73d) popup_note2_wait_window_g

0x8764,	// (0x00047231) popup_note2_wait_window_t1_ParamLimits

0x8764,	// (0x00047231) popup_note2_wait_window_t1

0x8782,	// (0x0004724f) popup_note2_wait_window_t2_ParamLimits

0x8782,	// (0x0004724f) popup_note2_wait_window_t2

0x87a0,	// (0x0004726d) popup_note2_wait_window_t3_ParamLimits

0x87a0,	// (0x0004726d) popup_note2_wait_window_t3

0x87b2,	// (0x0004727f) popup_note2_wait_window_t4_ParamLimits

0x87b2,	// (0x0004727f) popup_note2_wait_window_t4

0x0003,

0xfc77,	// (0x0004e744) popup_note2_wait_window_t_ParamLimits

0xfc77,	// (0x0004e744) popup_note2_wait_window_t

0x87c4,	// (0x00047291) wait_bar2_pane_ParamLimits

0x87c4,	// (0x00047291) wait_bar2_pane

0x87dc,	// (0x000472a9) popup_snote2_single_text_window_g1_ParamLimits

0x87dc,	// (0x000472a9) popup_snote2_single_text_window_g1

0x8804,	// (0x000472d1) popup_snote2_single_text_window_t1_ParamLimits

0x8804,	// (0x000472d1) popup_snote2_single_text_window_t1

0x8850,	// (0x0004731d) popup_snote2_single_text_window_t2_ParamLimits

0x8850,	// (0x0004731d) popup_snote2_single_text_window_t2

0x889c,	// (0x00047369) popup_snote2_single_text_window_t3_ParamLimits

0x889c,	// (0x00047369) popup_snote2_single_text_window_t3

0x88dd,	// (0x000473aa) popup_snote2_single_text_window_t4_ParamLimits

0x88dd,	// (0x000473aa) popup_snote2_single_text_window_t4

0x8913,	// (0x000473e0) popup_snote2_single_text_window_t5_ParamLimits

0x8913,	// (0x000473e0) popup_snote2_single_text_window_t5

0x0004,

0xfc80,	// (0x0004e74d) popup_snote2_single_text_window_t_ParamLimits

0xfc80,	// (0x0004e74d) popup_snote2_single_text_window_t

0x893e,	// (0x0004740b) popup_snote2_single_graphic_window_g1_ParamLimits

0x893e,	// (0x0004740b) popup_snote2_single_graphic_window_g1

0x8966,	// (0x00047433) popup_snote2_single_graphic_window_g2_ParamLimits

0x8966,	// (0x00047433) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8b,	// (0x0004e758) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8b,	// (0x0004e758) popup_snote2_single_graphic_window_g

0x898e,	// (0x0004745b) popup_snote2_single_graphic_window_t1_ParamLimits

0x898e,	// (0x0004745b) popup_snote2_single_graphic_window_t1

0x89da,	// (0x000474a7) popup_snote2_single_graphic_window_t2_ParamLimits

0x89da,	// (0x000474a7) popup_snote2_single_graphic_window_t2

0x889c,	// (0x00047369) popup_snote2_single_graphic_window_t3_ParamLimits

0x889c,	// (0x00047369) popup_snote2_single_graphic_window_t3

0x88dd,	// (0x000473aa) popup_snote2_single_graphic_window_t4_ParamLimits

0x88dd,	// (0x000473aa) popup_snote2_single_graphic_window_t4

0x8913,	// (0x000473e0) popup_snote2_single_graphic_window_t5_ParamLimits

0x8913,	// (0x000473e0) popup_snote2_single_graphic_window_t5

0x0004,

0xfc90,	// (0x0004e75d) popup_snote2_single_graphic_window_t_ParamLimits

0xfc90,	// (0x0004e75d) popup_snote2_single_graphic_window_t

0x7402,	// (0x00045ecf) clock_nsta_pane_cp2_t1

0x7402,	// (0x00045ecf) clock_nsta_pane_cp2_t2

0x0001,

0xfab0,	// (0x0004e57d) clock_nsta_pane_cp2_t

0x075e,	// (0x0003f22b) form_field_data_wide_pane_g1_ParamLimits

0x3e33,	// (0x00042900) form_field_data_wide_pane_g2_ParamLimits

0x3e33,	// (0x00042900) form_field_data_wide_pane_g2

0x3ea6,	// (0x00042973) form_field_data_wide_pane_g3_ParamLimits

0x3ea6,	// (0x00042973) form_field_data_wide_pane_g3

0x0002,

0xf686,	// (0x0004e153) form_field_data_wide_pane_g_ParamLimits

0xf686,	// (0x0004e153) form_field_data_wide_pane_g

0xdedc,	// (0x0004c9a9) grid_touch_3_pane_ParamLimits

0xdedc,	// (0x0004c9a9) grid_touch_3_pane

0xe3dc,	// (0x0004cea9) cell_touch_3_pane_ParamLimits

0xe3dc,	// (0x0004cea9) cell_touch_3_pane

0x7967,	// (0x00046434) cell_touch_3_pane_g1

0x7967,	// (0x00046434) cell_touch_3_pane_g2

0x0001,

0xfb35,	// (0x0004e602) cell_touch_3_pane_g

0x395f,	// (0x0004242c) cont_query_data_pane

0x3967,	// (0x00042434) cont_query_data_pane_cp1

0x8a54,	// (0x00047521) button_value_adjust_pane_cp7

0x8a5c,	// (0x00047529) query_popup_pane_cp3

0x45fb,	// (0x000430c8) bg_popup_sub_pane_cp22_ParamLimits

0x1847,	// (0x00040314) navi_navi_volume_pane_cp2

0x1862,	// (0x0004032f) popup_side_volume_key_window_g2

0x1871,	// (0x0004033e) popup_side_volume_key_window_g3

0x0002,

0xf71c,	// (0x0004e1e9) popup_side_volume_key_window_g

0x188e,	// (0x0004035b) popup_side_volume_key_window_t2

0x0001,

0xf723,	// (0x0004e1f0) popup_side_volume_key_window_t

0x48b2,	// (0x0004337f) popup_side_volume_key_window_ParamLimits

0xc09c,	// (0x0004ab69) list_double_graphic_pane_g4_ParamLimits

0xc09c,	// (0x0004ab69) list_double_graphic_pane_g4

0xdd5b,	// (0x0004c828) list_single_2heading_msg_pane_ParamLimits

0xdd5b,	// (0x0004c828) list_single_2heading_msg_pane

0xc9e7,	// (0x0004b4b4) list_single_2heading_msg_pane_g1_ParamLimits

0xc9e7,	// (0x0004b4b4) list_single_2heading_msg_pane_g1

0xc9f3,	// (0x0004b4c0) list_single_2heading_msg_pane_g2_ParamLimits

0xc9f3,	// (0x0004b4c0) list_single_2heading_msg_pane_g2

0xca06,	// (0x0004b4d3) list_single_2heading_msg_pane_g3_ParamLimits

0xca06,	// (0x0004b4d3) list_single_2heading_msg_pane_g3

0xca12,	// (0x0004b4df) list_single_2heading_msg_pane_g4_ParamLimits

0xca12,	// (0x0004b4df) list_single_2heading_msg_pane_g4

0x0003,

0xfc9b,	// (0x0004e768) list_single_2heading_msg_pane_g_ParamLimits

0xfc9b,	// (0x0004e768) list_single_2heading_msg_pane_g

0xbd66,	// (0x0004a833) list_single_2heading_msg_pane_t1_ParamLimits

0xbd66,	// (0x0004a833) list_single_2heading_msg_pane_t1

0xbd8e,	// (0x0004a85b) list_single_2heading_msg_pane_t2_ParamLimits

0xbd8e,	// (0x0004a85b) list_single_2heading_msg_pane_t2

0xbdf9,	// (0x0004a8c6) list_single_2heading_msg_pane_t3_ParamLimits

0xbdf9,	// (0x0004a8c6) list_single_2heading_msg_pane_t3

0x1088,	// (0x0003fb55) list_single_2heading_msg_pane_t4_ParamLimits

0x1088,	// (0x0003fb55) list_single_2heading_msg_pane_t4

0x0003,

0xfca4,	// (0x0004e771) list_single_2heading_msg_pane_t_ParamLimits

0xfca4,	// (0x0004e771) list_single_2heading_msg_pane_t

0x3574,	// (0x00042041) title_pane_g4_ParamLimits

0x3574,	// (0x00042041) title_pane_g4

0x1656,	// (0x00040123) title_pane_stacon_g3_ParamLimits

0x1656,	// (0x00040123) title_pane_stacon_g3

0x8582,	// (0x0004704f) list_single_2graphic_im_pane_g4_ParamLimits

0x8582,	// (0x0004704f) list_single_2graphic_im_pane_g4

0x6441,	// (0x00044f0e) popup_side_volume_key_window_cp

0x6c3a,	// (0x00045707) main_idle_act2_pane_t1

0x2209,	// (0x00040cd6) toolbar_button_pane_g10

0xd2c2,	// (0x0004bd8f) popup_toolbar_window_cp1

0x73f3,	// (0x00045ec0) clock_nsta_pane_cp_t1

0x73f3,	// (0x00045ec0) clock_nsta_pane_cp_t2

0x0001,

0xfaab,	// (0x0004e578) clock_nsta_pane_cp_t

0x1847,	// (0x00040314) navi_navi_volume_pane_cp2_ParamLimits

0x1856,	// (0x00040323) popup_side_volume_key_window_g1_ParamLimits

0x1862,	// (0x0004032f) popup_side_volume_key_window_g2_ParamLimits

0x1871,	// (0x0004033e) popup_side_volume_key_window_g3_ParamLimits

0xf71c,	// (0x0004e1e9) popup_side_volume_key_window_g_ParamLimits

0x26ec,	// (0x000411b9) fep_hwr_aid_pane

0xe088,	// (0x0004cb55) bg_fep_hwr_top_pane_g4_ParamLimits

0x79c3,	// (0x00046490) fep_hwr_top_pane_g1_ParamLimits

0x79d5,	// (0x000464a2) fep_hwr_top_pane_g2_ParamLimits

0x27a5,	// (0x00041272) fep_hwr_top_pane_g3_ParamLimits

0xfb00,	// (0x0004e5cd) fep_hwr_top_pane_g_ParamLimits

0x27ba,	// (0x00041287) fep_hwr_top_text_pane_ParamLimits

0x6204,	// (0x00044cd1) aid_touch_tab_arrow_arrow_2

0x620d,	// (0x00044cda) aid_touch_tab_arrow_left_2

0x2700,	// (0x000411cd) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x2737,	// (0x00041204) fep_hwr_prediction_pane

0x7b35,	// (0x00046602) fep_vkb_prediction_pane

0xe1c2,	// (0x0004cc8f) fep_vkb_side_pane_g3_ParamLimits

0xe1c2,	// (0x0004cc8f) fep_vkb_side_pane_g3

0x7be5,	// (0x000466b2) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x8065,	// (0x00046b32) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x8072,	// (0x00046b3f) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbaa,	// (0x0004e677) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8a81,	// (0x0004754e) fep_hwr_prediction_pane_g1

0x2aef,	// (0x000415bc) fep_hwr_prediction_pane_g2

0x2af7,	// (0x000415c4) fep_hwr_prediction_pane_g3

0x2aff,	// (0x000415cc) fep_hwr_prediction_pane_g4

0x0003,

0xfcad,	// (0x0004e77a) fep_hwr_prediction_pane_g

0x8a81,	// (0x0004754e) fep_vkb_prediction_pane_g1

0x8a8b,	// (0x00047558) fep_vkb_prediction_pane_g2

0x8a93,	// (0x00047560) fep_vkb_prediction_pane_g3

0x8a9b,	// (0x00047568) fep_vkb_prediction_pane_g4

0x0003,

0xfcb6,	// (0x0004e783) fep_vkb_prediction_pane_g

0x66fa,	// (0x000451c7) slider_set_pane_g3

0x670e,	// (0x000451db) slider_set_pane_g4

0x6726,	// (0x000451f3) slider_set_pane_g5

0x66fa,	// (0x000451c7) slider_set_pane_g6

0x24f1,	// (0x00040fbe) slider_set_pane_g7

0x68e0,	// (0x000453ad) slider_form_pane_g3

0x68e9,	// (0x000453b6) slider_form_pane_g4

0x68f1,	// (0x000453be) slider_form_pane_g5

0x68e0,	// (0x000453ad) slider_form_pane_g6

0xdd2d,	// (0x0004c7fa) slider_form_pane_g7

0x6ee4,	// (0x000459b1) slider_set_pane_vc_g3

0x6eed,	// (0x000459ba) slider_set_pane_vc_g4

0x6ef6,	// (0x000459c3) slider_set_pane_vc_g5

0x6ee4,	// (0x000459b1) slider_set_pane_vc_g6

0x6eff,	// (0x000459cc) slider_set_pane_vc_g7

0x70bf,	// (0x00045b8c) slider_form_pane_vc_g1

0x70c8,	// (0x00045b95) slider_form_pane_vc_g2

0x70d1,	// (0x00045b9e) slider_form_pane_vc_g3

0x70bf,	// (0x00045b8c) slider_form_pane_vc_g4

0x70da,	// (0x00045ba7) slider_form_pane_vc_g5

0x0004,

0xfa7d,	// (0x0004e54a) slider_form_pane_vc_g

0x352c,	// (0x00041ff9) main_idle_act3_pane

0x8aa3,	// (0x00047570) ai3_links_pane

0xe424,	// (0x0004cef1) popup_ai3_data_window_ParamLimits

0xe424,	// (0x0004cef1) popup_ai3_data_window

0x352c,	// (0x00041ff9) grid_ai3_links_pane

0xe43e,	// (0x0004cf0b) cell_ai3_links_pane_ParamLimits

0xe43e,	// (0x0004cf0b) cell_ai3_links_pane

0x8ade,	// (0x000475ab) bg_popup_sub_pane_cp11

0x8aeb,	// (0x000475b8) cell_ai3_links_pane_g1

0x352c,	// (0x00041ff9) bg_popup_sub_pane_cp12

0x8b10,	// (0x000475dd) heading_ai3_data_pane

0x8b18,	// (0x000475e5) list_ai3_gene_pane

0x8b24,	// (0x000475f1) popup_ai3_data_window_g1

0x8b2c,	// (0x000475f9) heading_ai3_data_pane_g1

0x8b34,	// (0x00047601) heading_ai3_data_pane_t1

0x8b42,	// (0x0004760f) list_double_ai3_gene_pane_ParamLimits

0x8b42,	// (0x0004760f) list_double_ai3_gene_pane

0x8b4f,	// (0x0004761c) list_single_ai3_gene_pane_ParamLimits

0x8b4f,	// (0x0004761c) list_single_ai3_gene_pane

0x792c,	// (0x000463f9) list_highlight_pane_cp7_ParamLimits

0x792c,	// (0x000463f9) list_highlight_pane_cp7

0x8b5c,	// (0x00047629) list_single_a13_gene_pane_t1_ParamLimits

0x8b5c,	// (0x00047629) list_single_a13_gene_pane_t1

0x8b73,	// (0x00047640) list_single_ai3_gene_pane_g1

0x8b7c,	// (0x00047649) list_single_ai3_gene_pane_g2

0x0001,

0xfcbf,	// (0x0004e78c) list_single_ai3_gene_pane_g

0x8b84,	// (0x00047651) list_double_ai3_gene_pane_g1_ParamLimits

0x8b84,	// (0x00047651) list_double_ai3_gene_pane_g1

0x8b90,	// (0x0004765d) list_double_ai3_gene_pane_t1_ParamLimits

0x8b90,	// (0x0004765d) list_double_ai3_gene_pane_t1

0x8bac,	// (0x00047679) list_double_ai3_gene_pane_t2_ParamLimits

0x8bac,	// (0x00047679) list_double_ai3_gene_pane_t2

0x8bc2,	// (0x0004768f) list_double_ai3_gene_pane_t3_ParamLimits

0x8bc2,	// (0x0004768f) list_double_ai3_gene_pane_t3

0x0002,

0xfcc4,	// (0x0004e791) list_double_ai3_gene_pane_t_ParamLimits

0xfcc4,	// (0x0004e791) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0fe9,	// (0x0003fab6) aid_size_min_col_2

0xe40e,	// (0x0004cedb) aid_size_min_msg_ParamLimits

0xe40e,	// (0x0004cedb) aid_size_min_msg

0xe1d6,	// (0x0004cca3) fep_vkb_top_text_pane_g2_ParamLimits

0xe1d6,	// (0x0004cca3) fep_vkb_top_text_pane_g2

0x0001,

0xfb30,	// (0x0004e5fd) fep_vkb_top_text_pane_g_ParamLimits

0xfb30,	// (0x0004e5fd) fep_vkb_top_text_pane_g

0x352c,	// (0x00041ff9) main_hc_apps_shell_pane

0x8bdf,	// (0x000476ac) grid_hc_apps_pane_ParamLimits

0x8bdf,	// (0x000476ac) grid_hc_apps_pane

0x8bee,	// (0x000476bb) list_hc_apps_pane

0x8bf6,	// (0x000476c3) scroll_pane_cp37_ParamLimits

0x8bf6,	// (0x000476c3) scroll_pane_cp37

0xe458,	// (0x0004cf25) cell_hc_apps_pane_ParamLimits

0xe458,	// (0x0004cf25) cell_hc_apps_pane

0xe516,	// (0x0004cfe3) cell_hc_apps_pane_g1_ParamLimits

0xe516,	// (0x0004cfe3) cell_hc_apps_pane_g1

0x8ce1,	// (0x000477ae) cell_hc_apps_pane_g2_ParamLimits

0x8ce1,	// (0x000477ae) cell_hc_apps_pane_g2

0x8cfd,	// (0x000477ca) cell_hc_apps_pane_g3_ParamLimits

0x8cfd,	// (0x000477ca) cell_hc_apps_pane_g3

0x0002,

0xfccb,	// (0x0004e798) cell_hc_apps_pane_g_ParamLimits

0xfccb,	// (0x0004e798) cell_hc_apps_pane_g

0xe543,	// (0x0004d010) cell_hc_apps_pane_t1_ParamLimits

0xe543,	// (0x0004d010) cell_hc_apps_pane_t1

0x38a9,	// (0x00042376) grid_highlight_pane_cp10_ParamLimits

0x38a9,	// (0x00042376) grid_highlight_pane_cp10

0xe581,	// (0x0004d04e) list_single_hc_apps_pane_ParamLimits

0xe581,	// (0x0004d04e) list_single_hc_apps_pane

0xe5ae,	// (0x0004d07b) list_single_hc_apps_pane_g1

0xca2a,	// (0x0004b4f7) list_single_hc_apps_pane_g2

0x0001,

0xfcd2,	// (0x0004e79f) list_single_hc_apps_pane_g

0xca43,	// (0x0004b510) list_single_hc_apps_pane_g2_copy1

0x10ad,	// (0x0003fb7a) list_single_hc_apps_pane_t1

0x3620,	// (0x000420ed) bg_set_opt_pane_cp_ParamLimits

0x14d2,	// (0x0003ff9f) setting_slider_pane_t1_ParamLimits

0x14eb,	// (0x0003ffb8) setting_slider_pane_t2_ParamLimits

0x1505,	// (0x0003ffd2) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0004e031) setting_slider_pane_t_ParamLimits

0x151d,	// (0x0003ffea) slider_set_pane_ParamLimits

0x1b0c,	// (0x000405d9) control_pane_g5_ParamLimits

0x1b0c,	// (0x000405d9) control_pane_g5

0x66ed,	// (0x000451ba) slider_set_pane_g1_ParamLimits

0x24e5,	// (0x00040fb2) slider_set_pane_g2_ParamLimits

0x66fa,	// (0x000451c7) slider_set_pane_g3_ParamLimits

0x670e,	// (0x000451db) slider_set_pane_g4_ParamLimits

0x6726,	// (0x000451f3) slider_set_pane_g5_ParamLimits

0x66fa,	// (0x000451c7) slider_set_pane_g6_ParamLimits

0x24f1,	// (0x00040fbe) slider_set_pane_g7_ParamLimits

0xf96a,	// (0x0004e437) slider_set_pane_g_ParamLimits

0x4993,	// (0x00043460) navi_icon_text_pane_ParamLimits

0xd5c3,	// (0x0004c090) aid_fill_nsta_2_ParamLimits

0xd5fa,	// (0x0004c0c7) aid_touch_tab_arrow_left_ParamLimits

0xd610,	// (0x0004c0dd) aid_touch_tab_arrow_right_ParamLimits

0xd6ab,	// (0x0004c178) clock_nsta_pane_ParamLimits

0x61e6,	// (0x00044cb3) navi_icon_pane_g1_ParamLimits

0x61f2,	// (0x00044cbf) navi_text_pane_t1_ParamLimits

0x74ff,	// (0x00045fcc) navi_icon_text_pane_g1_ParamLimits

0x750b,	// (0x00045fd8) navi_icon_text_pane_t1_ParamLimits

0xe5ae,	// (0x0004d07b) list_single_hc_apps_pane_g1_ParamLimits

0xca2a,	// (0x0004b4f7) list_single_hc_apps_pane_g2_ParamLimits

0xfcd2,	// (0x0004e79f) list_single_hc_apps_pane_g_ParamLimits

0xca43,	// (0x0004b510) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x10ad,	// (0x0003fb7a) list_single_hc_apps_pane_t1_ParamLimits

0xbf9d,	// (0x0004aa6a) popup_toolbar2_fixed_window_ParamLimits

0xbf9d,	// (0x0004aa6a) popup_toolbar2_fixed_window

0xc88f,	// (0x0004b35c) popup_toolbar2_float_window

0x352c,	// (0x00041ff9) bg_popup_sub_pane_cp27

0x8dd4,	// (0x000478a1) grid_toolbar2_float_pane

0x352c,	// (0x00041ff9) bg_popup_sub_pane_cp26

0x8dd4,	// (0x000478a1) grid_toolbar2_fixed_pane

0xe5c7,	// (0x0004d094) cell_toolbar2_fixed_pane_ParamLimits

0xe5c7,	// (0x0004d094) cell_toolbar2_fixed_pane

0xe5e1,	// (0x0004d0ae) cell_toolbar2_fixed_pane_g1

0x8df5,	// (0x000478c2) toolbar2_fixed_button_pane

0x535d,	// (0x00043e2a) toolbar2_fixed_button_pane_g1

0x5365,	// (0x00043e32) toolbar2_fixed_button_pane_g2

0x536d,	// (0x00043e3a) toolbar2_fixed_button_pane_g3

0x5375,	// (0x00043e42) toolbar2_fixed_button_pane_g4

0x537d,	// (0x00043e4a) toolbar2_fixed_button_pane_g5

0x5385,	// (0x00043e52) toolbar2_fixed_button_pane_g6

0x538d,	// (0x00043e5a) toolbar2_fixed_button_pane_g7

0x5395,	// (0x00043e62) toolbar2_fixed_button_pane_g8

0x539d,	// (0x00043e6a) toolbar2_fixed_button_pane_g9

0x0008,

0xf86c,	// (0x0004e339) toolbar2_fixed_button_pane_g

0x8dfd,	// (0x000478ca) cell_toolbar2_float_pane_ParamLimits

0x8dfd,	// (0x000478ca) cell_toolbar2_float_pane

0x8e0e,	// (0x000478db) cell_toolbar2_float_pane_g1

0x8df5,	// (0x000478c2) toolbar2_fixed_button_pane_cp

0xe0b0,	// (0x0004cb7d) fep_vkb_accented_list_pane_ParamLimits

0xe0b0,	// (0x0004cb7d) fep_vkb_accented_list_pane

0x2908,	// (0x000413d5) bg_popup_fep_shadow_pane_g9

0x4b13,	// (0x000435e0) bg_popup_fep_shadow_pane_cp3

0x3fe3,	// (0x00042ab0) list_accented_list_pane

0x8e17,	// (0x000478e4) list_single_accented_list_pane_ParamLimits

0x8e17,	// (0x000478e4) list_single_accented_list_pane

0x4b13,	// (0x000435e0) list_highlight_pane_cp10

0x8e28,	// (0x000478f5) list_single_accented_list_pane_t1

0xc7b9,	// (0x0004b286) popup_slider_window_ParamLimits

0xc7b9,	// (0x0004b286) popup_slider_window

0x8a64,	// (0x00047531) aid_indentation_list_msg

0xe6da,	// (0x0004d1a7) bg_popup_window_pane_cp19

0x8f4c,	// (0x00047a19) popup_slider_window_g1

0x8f68,	// (0x00047a35) popup_slider_window_g2

0x8f84,	// (0x00047a51) popup_slider_window_g3

0x0005,

0xfcd7,	// (0x0004e7a4) popup_slider_window_g

0x8fe0,	// (0x00047aad) popup_slider_window_t1

0x9054,	// (0x00047b21) small_volume_slider_vertical_pane

0x7967,	// (0x00046434) small_volume_slider_vertical_pane_g1

0x7967,	// (0x00046434) small_volume_slider_vertical_pane_g2

0x9070,	// (0x00047b3d) small_volume_slider_vertical_pane_g3

0x0002,

0xfce9,	// (0x0004e7b6) small_volume_slider_vertical_pane_g

0xbf0b,	// (0x0004a9d8) area_side_right_pane_ParamLimits

0xbf0b,	// (0x0004a9d8) area_side_right_pane

0xca5f,	// (0x0004b52c) aid_size_side_button_ParamLimits

0xca5f,	// (0x0004b52c) aid_size_side_button

0xca78,	// (0x0004b545) grid_sctrl_middle_pane_ParamLimits

0xca78,	// (0x0004b545) grid_sctrl_middle_pane

0x2b6f,	// (0x0004163c) sctrl_sk_bottom_pane

0x2b80,	// (0x0004164d) sctrl_sk_top_pane

0x2b92,	// (0x0004165f) aid_touch_sctrl_top

0x38a9,	// (0x00042376) bg_sctrl_sk_pane_ParamLimits

0x38a9,	// (0x00042376) bg_sctrl_sk_pane

0x2b9f,	// (0x0004166c) sctrl_sk_top_pane_g1

0x2bac,	// (0x00041679) sctrl_sk_top_pane_t1

0x2b92,	// (0x0004165f) aid_touch_sctrl_bottom

0x38a9,	// (0x00042376) bg_sctrl_sk_pane_cp_ParamLimits

0x38a9,	// (0x00042376) bg_sctrl_sk_pane_cp

0x2bc7,	// (0x00041694) sctrl_sk_bottom_pane_g1

0x2bac,	// (0x00041679) sctrl_sk_bottom_pane_t1

0xca92,	// (0x0004b55f) cell_sctrl_middle_pane_ParamLimits

0xca92,	// (0x0004b55f) cell_sctrl_middle_pane

0xcaa3,	// (0x0004b570) aid_touch_sctrl_middle_ParamLimits

0xcaa3,	// (0x0004b570) aid_touch_sctrl_middle

0xcab0,	// (0x0004b57d) bg_sctrl_middle_pane_ParamLimits

0xcab0,	// (0x0004b57d) bg_sctrl_middle_pane

0x90f8,	// (0x00047bc5) cell_sctrl_middle_pane_g1_ParamLimits

0x90f8,	// (0x00047bc5) cell_sctrl_middle_pane_g1

0xcabe,	// (0x0004b58b) cell_sctrl_middle_pane_g2_ParamLimits

0xcabe,	// (0x0004b58b) cell_sctrl_middle_pane_g2

0x0001,

0xfcf5,	// (0x0004e7c2) cell_sctrl_middle_pane_g_ParamLimits

0xfcf5,	// (0x0004e7c2) cell_sctrl_middle_pane_g

0x535d,	// (0x00043e2a) bg_sctrl_middle_pane_g1

0x5365,	// (0x00043e32) bg_sctrl_middle_pane_g2

0x536d,	// (0x00043e3a) bg_sctrl_middle_pane_g3

0x5375,	// (0x00043e42) bg_sctrl_middle_pane_g4

0x537d,	// (0x00043e4a) bg_sctrl_middle_pane_g5

0x5385,	// (0x00043e52) bg_sctrl_middle_pane_g6

0x538d,	// (0x00043e5a) bg_sctrl_middle_pane_g7

0x5395,	// (0x00043e62) bg_sctrl_middle_pane_g8

0x0007,

0xfcfa,	// (0x0004e7c7) bg_sctrl_middle_pane_g

0x539d,	// (0x00043e6a) bg_sctrl_middle_pane_g8_copy1

0x535d,	// (0x00043e2a) bg_sctrl_sk_pane_g1

0x5365,	// (0x00043e32) bg_sctrl_sk_pane_g2

0x536d,	// (0x00043e3a) bg_sctrl_sk_pane_g3

0x0008,

0xf86c,	// (0x0004e339) bg_sctrl_sk_pane_g

0x3dbb,	// (0x00042888) aid_size_touch_scroll_bar

0x5375,	// (0x00043e42) bg_sctrl_sk_pane_g4

0x537d,	// (0x00043e4a) bg_sctrl_sk_pane_g5

0x5385,	// (0x00043e52) bg_sctrl_sk_pane_g6

0x538d,	// (0x00043e5a) bg_sctrl_sk_pane_g7

0x5395,	// (0x00043e62) bg_sctrl_sk_pane_g8

0x539d,	// (0x00043e6a) bg_sctrl_sk_pane_g9

0x1cbc,	// (0x00040789) popup_fep_china_hwr2_fs_candidate_window

0xc2d9,	// (0x0004ada6) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc2d9,	// (0x0004ada6) popup_fep_china_hwr2_fs_control_window

0x7be5,	// (0x000466b2) sctrl_sk_top_pane_g2

0x0001,

0xfcf0,	// (0x0004e7bd) sctrl_sk_top_pane_g

0xe792,	// (0x0004d25f) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe792,	// (0x0004d25f) aid_fep_china_hwr2_fs_cell

0xe7a6,	// (0x0004d273) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe7a6,	// (0x0004d273) bg_popup_fep_shadow_pane_cp4

0xe7bd,	// (0x0004d28a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe7bd,	// (0x0004d28a) bg_popup_fep_shadow_pane_cp5

0xe7cf,	// (0x0004d29c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe7cf,	// (0x0004d29c) popup_fep_china_hwr2_fs_control_bar_grid

0xe7e3,	// (0x0004d2b0) popup_fep_china_hwr2_fs_control_funtion_grid

0x90cc,	// (0x00047b99) aid_fep_china_hwr2_fs_candi_cell

0x352c,	// (0x00041ff9) bg_popup_fep_shadow_pane_cp6

0x90d6,	// (0x00047ba3) popup_fep_china_hwr2_fs_candidate_grid

0xe7eb,	// (0x0004d2b8) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe7eb,	// (0x0004d2b8) cell_fep_china_hwr2_fs_funtion_grid

0x7967,	// (0x00046434) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x90f8,	// (0x00047bc5) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x90f8,	// (0x00047bc5) cell_fep_china_hwr2_fs_funtion_grid_g1

0x9106,	// (0x00047bd3) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x9106,	// (0x00047bd3) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0b,	// (0x0004e7d8) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0b,	// (0x0004e7d8) cell_fep_china_hwr2_fs_funtion_grid_g

0xe803,	// (0x0004d2d0) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe803,	// (0x0004d2d0) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe818,	// (0x0004d2e5) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe818,	// (0x0004d2e5) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0x000b,	// (0x0003ead8) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0x000b,	// (0x0003ead8) cell_fep_china_hwr2_fs_funtion_grid_t

0x914d,	// (0x00047c1a) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x9155,	// (0x00047c22) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x915d,	// (0x00047c2a) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd10,	// (0x0004e7dd) popup_fep_china_hwr2_fs_control_bar_grid_g

0x9165,	// (0x00047c32) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x9165,	// (0x00047c32) cell_fep_china_hwr2_fs_candidate_grid

0x917e,	// (0x00047c4b) popup_fep_china_hwr2_fs_candidate_grid_g20

0x9186,	// (0x00047c53) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7967,	// (0x00046434) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7967,	// (0x00046434) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb35,	// (0x0004e602) cell_fep_china_hwr2_fs_candidate_grid_g

0x918e,	// (0x00047c5b) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4f53,	// (0x00043a20) clock_nsta_pane_cp_24_ParamLimits

0x4f53,	// (0x00043a20) clock_nsta_pane_cp_24

0x4fd1,	// (0x00043a9e) indicator_nsta_pane_cp_24_ParamLimits

0x4fd1,	// (0x00043a9e) indicator_nsta_pane_cp_24

0x6062,	// (0x00044b2f) heading_pane_g1

0x0001,

0xf8d1,	// (0x0004e39e) heading_pane_g

0x6a83,	// (0x00045550) grid_sct_catagory_button_pane

0x6ab3,	// (0x00045580) scroll_pane_cp5_ParamLimits

0x754d,	// (0x0004601a) button_value_adjust_pane_cp5_ParamLimits

0x754d,	// (0x0004601a) button_value_adjust_pane_cp5

0x762c,	// (0x000460f9) form2_midp_time_pane_ParamLimits

0x919c,	// (0x00047c69) cell_sct_catagory_button_pane_ParamLimits

0x919c,	// (0x00047c69) cell_sct_catagory_button_pane

0x792c,	// (0x000463f9) bg_button_pane_cp01_ParamLimits

0x792c,	// (0x000463f9) bg_button_pane_cp01

0x7967,	// (0x00046434) cell_sct_catagory_button_pane_g1

0xc832,	// (0x0004b2ff) popup_tb_extension_window

0xe834,	// (0x0004d301) aid_size_cell_ext_ParamLimits

0xe834,	// (0x0004d301) aid_size_cell_ext

0x3bfd,	// (0x000426ca) bg_tb_trans_pane_cp1_ParamLimits

0x3bfd,	// (0x000426ca) bg_tb_trans_pane_cp1

0xe85a,	// (0x0004d327) grid_tb_ext_pane_ParamLimits

0xe85a,	// (0x0004d327) grid_tb_ext_pane

0xe895,	// (0x0004d362) cell_tb_ext_pane_ParamLimits

0xe895,	// (0x0004d362) cell_tb_ext_pane

0xe8bd,	// (0x0004d38a) cell_tb_ext_pane_g1_ParamLimits

0xe8bd,	// (0x0004d38a) cell_tb_ext_pane_g1

0x9230,	// (0x00047cfd) cell_tb_ext_pane_t1

0x38a9,	// (0x00042376) list_highlight_pane_cp11_ParamLimits

0x38a9,	// (0x00042376) list_highlight_pane_cp11

0xbfb2,	// (0x0004aa7f) popup_uni_indicator_window_ParamLimits

0xbfb2,	// (0x0004aa7f) popup_uni_indicator_window

0x3e98,	// (0x00042965) bg_popup_sub_pane_cp14

0x924b,	// (0x00047d18) list_uniindi_pane

0x9257,	// (0x00047d24) uniindi_top_pane

0x38a9,	// (0x00042376) bg_uniindi_top_pane

0x9276,	// (0x00047d43) uniindi_top_pane_g1

0x928c,	// (0x00047d59) uniindi_top_pane_g2

0x0003,

0xfd17,	// (0x0004e7e4) uniindi_top_pane_g

0x92b6,	// (0x00047d83) uniindi_top_pane_t1

0x92e0,	// (0x00047dad) list_single_uniindi_pane_ParamLimits

0x92e0,	// (0x00047dad) list_single_uniindi_pane

0x7967,	// (0x00046434) bg_uniindi_top_pane_g1

0x92f3,	// (0x00047dc0) list_single_uniindi_pane_g1

0x9306,	// (0x00047dd3) list_single_uniindi_pane_t1

0x352c,	// (0x00041ff9) control_bg_pane

0x932b,	// (0x00047df8) bg_sctrl_sk_pane_cp1

0x9334,	// (0x00047e01) bg_sctrl_sk_pane_cp2

0x933d,	// (0x00047e0a) control_bg_pane_g1

0x9346,	// (0x00047e13) control_bg_pane_g2

0x0001,

0xfd20,	// (0x0004e7ed) control_bg_pane_g

0x7396,	// (0x00045e63) cell_indicator_nsta_pane_g1_ParamLimits

0xdf0b,	// (0x0004c9d8) cell_indicator_nsta_pane_g2_ParamLimits

0xfa99,	// (0x0004e566) cell_indicator_nsta_pane_g_ParamLimits

0x0e4a,	// (0x0003f917) form2_midp_time_pane_t1_ParamLimits

0x26de,	// (0x000411ab) main_idle_act4_pane_ParamLimits

0x26de,	// (0x000411ab) main_idle_act4_pane

0xc832,	// (0x0004b2ff) popup_tb_extension_window_ParamLimits

0xe87c,	// (0x0004d349) tb_ext_find_pane_ParamLimits

0xe87c,	// (0x0004d349) tb_ext_find_pane

0x934f,	// (0x00047e1c) ai_gene_pane_1_cp1

0x4c4c,	// (0x00043719) ai_gene_pane_2_cp1

0x9357,	// (0x00047e24) list_single_idle_plugin_calendar_pane

0x9360,	// (0x00047e2d) list_single_idle_plugin_notification_pane

0x9369,	// (0x00047e36) list_single_idle_plugin_player_pane

0xe8da,	// (0x0004d3a7) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe8da,	// (0x0004d3a7) list_single_idle_plugin_shortcut_pane

0xe902,	// (0x0004d3cf) main_idle_act4_pane_t1

0xe918,	// (0x0004d3e5) main_idle_act4_pane_t2

0x0001,

0x0025,	// (0x0003eaf2) main_idle_act4_pane_t

0xe92e,	// (0x0004d3fb) middle_sk_idle_act4_pane_ParamLimits

0xe92e,	// (0x0004d3fb) middle_sk_idle_act4_pane

0xe94a,	// (0x0004d417) popup_clock_digital_analogue_window_cp2

0xe972,	// (0x0004d43f) shortcut_wheel_idle_act4_pane_ParamLimits

0xe972,	// (0x0004d43f) shortcut_wheel_idle_act4_pane

0x7967,	// (0x00046434) shortcut_wheel_idle_act4_pane_g1

0x7967,	// (0x00046434) shortcut_wheel_idle_act4_pane_g2

0x7967,	// (0x00046434) shortcut_wheel_idle_act4_pane_g3

0x7967,	// (0x00046434) shortcut_wheel_idle_act4_pane_g4

0x7967,	// (0x00046434) shortcut_wheel_idle_act4_pane_g5

0x93fc,	// (0x00047ec9) shortcut_wheel_idle_act4_pane_g6

0x9404,	// (0x00047ed1) shortcut_wheel_idle_act4_pane_g7

0x940c,	// (0x00047ed9) shortcut_wheel_idle_act4_pane_g8

0x9414,	// (0x00047ee1) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd25,	// (0x0004e7f2) shortcut_wheel_idle_act4_pane_g

0xe088,	// (0x0004cb55) middle_sk_idle_act4_pane_g1_ParamLimits

0xe088,	// (0x0004cb55) middle_sk_idle_act4_pane_g1

0xe9ef,	// (0x0004d4bc) middle_sk_idle_act4_pane_g2_ParamLimits

0xe9ef,	// (0x0004d4bc) middle_sk_idle_act4_pane_g2

0x0001,

0xfd43,	// (0x0004e810) middle_sk_idle_act4_pane_g_ParamLimits

0xfd43,	// (0x0004e810) middle_sk_idle_act4_pane_g

0xea07,	// (0x0004d4d4) middle_sk_idle_act4_pane_t1_ParamLimits

0xea07,	// (0x0004d4d4) middle_sk_idle_act4_pane_t1

0xea36,	// (0x0004d503) grid_ai_shortcut_pane_ParamLimits

0xea36,	// (0x0004d503) grid_ai_shortcut_pane

0xea53,	// (0x0004d520) list_highlight_pane_cp16_ParamLimits

0xea53,	// (0x0004d520) list_highlight_pane_cp16

0xea60,	// (0x0004d52d) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xea60,	// (0x0004d52d) list_single_idle_plugin_shortcut_pane_g1

0xea6c,	// (0x0004d539) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xea6c,	// (0x0004d539) list_single_idle_plugin_shortcut_pane_g2

0xea88,	// (0x0004d555) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xea88,	// (0x0004d555) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd48,	// (0x0004e815) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd48,	// (0x0004e815) list_single_idle_plugin_shortcut_pane_g

0xea9d,	// (0x0004d56a) cell_ai_shortcut_pane_ParamLimits

0xea9d,	// (0x0004d56a) cell_ai_shortcut_pane

0xeab3,	// (0x0004d580) cell_ai_shortcut_pane_g1_ParamLimits

0xeab3,	// (0x0004d580) cell_ai_shortcut_pane_g1

0x934f,	// (0x00047e1c) ai_gene_pane_1_cp2

0x9544,	// (0x00048011) ai_gene_pane_2_cp2

0x954c,	// (0x00048019) list_highlight_pane_cp15

0x9555,	// (0x00048022) list_single_idle_plugin_calendar_pane_g1

0x954c,	// (0x00048019) list_highlight_pane_cp17

0x955d,	// (0x0004802a) list_single_idle_plugin_calendar_pane_g1_copy1

0x9565,	// (0x00048032) list_single_idle_plugin_player_pane_g1

0x6cdc,	// (0x000457a9) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4f,	// (0x0004e81c) list_single_idle_plugin_player_pane_g

0x956d,	// (0x0004803a) list_single_idle_plugin_player_pane_t1

0x957b,	// (0x00048048) list_single_idle_plugin_player_pane_t2

0x9589,	// (0x00048056) list_single_idle_plugin_player_pane_t3

0x9597,	// (0x00048064) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd54,	// (0x0004e821) list_single_idle_plugin_player_pane_t

0x95a5,	// (0x00048072) wait_bar_pane_cp15

0x95ad,	// (0x0004807a) grid_ai_notification_pane

0x6cdc,	// (0x000457a9) list_single_idle_plugin_notification_pane_g1

0xead5,	// (0x0004d5a2) cell_ai_notification_pane_ParamLimits

0xead5,	// (0x0004d5a2) cell_ai_notification_pane

0x95c3,	// (0x00048090) cell_ai_notification_pane_g1

0x95cb,	// (0x00048098) cell_ai_notification_pane_t1

0xeae2,	// (0x0004d5af) tb_ext_find_button_pane

0xeaea,	// (0x0004d5b7) tb_ext_find_pane_g1

0xeaf2,	// (0x0004d5bf) tb_ext_find_pane_t1

0x450b,	// (0x00042fd8) tb_ext_find_button_pane_g1

0x95f7,	// (0x000480c4) tb_ext_find_button_pane_g2

0x0001,

0xfd5d,	// (0x0004e82a) tb_ext_find_button_pane_g

0xe902,	// (0x0004d3cf) main_idle_act4_pane_t1_ParamLimits

0xe918,	// (0x0004d3e5) main_idle_act4_pane_t2_ParamLimits

0x0025,	// (0x0003eaf2) main_idle_act4_pane_t_ParamLimits

0xe94a,	// (0x0004d417) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe962,	// (0x0004d42f) sat_plugin_idle_act4_pane_ParamLimits

0xe962,	// (0x0004d42f) sat_plugin_idle_act4_pane

0xeb00,	// (0x0004d5cd) sat_plugin_idle_act4_pane_t1_ParamLimits

0xeb00,	// (0x0004d5cd) sat_plugin_idle_act4_pane_t1

0xeb18,	// (0x0004d5e5) sat_plugin_idle_act4_pane_t2_ParamLimits

0xeb18,	// (0x0004d5e5) sat_plugin_idle_act4_pane_t2

0xeb30,	// (0x0004d5fd) sat_plugin_idle_act4_pane_t3_ParamLimits

0xeb30,	// (0x0004d5fd) sat_plugin_idle_act4_pane_t3

0xeb48,	// (0x0004d615) sat_plugin_idle_act4_pane_t4_ParamLimits

0xeb48,	// (0x0004d615) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd62,	// (0x0004e82f) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd62,	// (0x0004e82f) sat_plugin_idle_act4_pane_t

0x1336,	// (0x0003fe03) popup_battery_window_ParamLimits

0x1336,	// (0x0003fe03) popup_battery_window

0x38a9,	// (0x00042376) bg_popup_sub_pane_cp25_ParamLimits

0x38a9,	// (0x00042376) bg_popup_sub_pane_cp25

0x964c,	// (0x00048119) popup_battery_window_g1_ParamLimits

0x964c,	// (0x00048119) popup_battery_window_g1

0x9658,	// (0x00048125) popup_battery_window_t1_ParamLimits

0x9658,	// (0x00048125) popup_battery_window_t1

0x966a,	// (0x00048137) popup_battery_window_t2_ParamLimits

0x966a,	// (0x00048137) popup_battery_window_t2

0x0001,

0xfd6b,	// (0x0004e838) popup_battery_window_t_ParamLimits

0xfd6b,	// (0x0004e838) popup_battery_window_t

0xd4cf,	// (0x0004bf9c) midp_canvas_pane_ParamLimits

0xd52a,	// (0x0004bff7) midp_keypad_pane_ParamLimits

0xd52a,	// (0x0004bff7) midp_keypad_pane

0x4e53,	// (0x00043920) main_midp_pane_ParamLimits

0x7411,	// (0x00045ede) signal_pane_g2_cp_ParamLimits

0xeb60,	// (0x0004d62d) aid_size_cell_midp_keypad_ParamLimits

0xeb60,	// (0x0004d62d) aid_size_cell_midp_keypad

0xeb7e,	// (0x0004d64b) midp_keyp_game_grid_pane_ParamLimits

0xeb7e,	// (0x0004d64b) midp_keyp_game_grid_pane

0xeba5,	// (0x0004d672) midp_keyp_rocker_pane_ParamLimits

0xeba5,	// (0x0004d672) midp_keyp_rocker_pane

0xebee,	// (0x0004d6bb) midp_keyp_sk_left_pane_ParamLimits

0xebee,	// (0x0004d6bb) midp_keyp_sk_left_pane

0xec40,	// (0x0004d70d) midp_keyp_sk_right_pane_ParamLimits

0xec40,	// (0x0004d70d) midp_keyp_sk_right_pane

0x352c,	// (0x00041ff9) bg_button_pane_cp03

0xec92,	// (0x0004d75f) midp_keyp_sk_left_pane_g1

0x352c,	// (0x00041ff9) bg_button_pane_cp04

0xec92,	// (0x0004d75f) midp_keyp_sk_right_pane_g1

0x7967,	// (0x00046434) midp_keyp_rocker_pane_g1

0xec9b,	// (0x0004d768) keyp_game_cell_pane_ParamLimits

0xec9b,	// (0x0004d768) keyp_game_cell_pane

0x352c,	// (0x00041ff9) bg_button_pane_cp02

0xecbf,	// (0x0004d78c) keyp_game_cell_pane_g1

0xbf4d,	// (0x0004aa1a) popup_fep_vkb2_window_ParamLimits

0xbf4d,	// (0x0004aa1a) popup_fep_vkb2_window

0xcaca,	// (0x0004b597) aid_size_cell_vkb2_ParamLimits

0xcaca,	// (0x0004b597) aid_size_cell_vkb2

0xcb00,	// (0x0004b5cd) popup_fep_vkb2_window_g1_ParamLimits

0xcb00,	// (0x0004b5cd) popup_fep_vkb2_window_g1

0xcb50,	// (0x0004b61d) vkb2_area_bottom_pane_ParamLimits

0xcb50,	// (0x0004b61d) vkb2_area_bottom_pane

0xcba4,	// (0x0004b671) vkb2_area_keypad_pane_ParamLimits

0xcba4,	// (0x0004b671) vkb2_area_keypad_pane

0xcbec,	// (0x0004b6b9) vkb2_area_top_pane_ParamLimits

0xcbec,	// (0x0004b6b9) vkb2_area_top_pane

0xcc72,	// (0x0004b73f) vkb2_top_entry_pane_ParamLimits

0xcc72,	// (0x0004b73f) vkb2_top_entry_pane

0xcc9f,	// (0x0004b76c) vkb2_top_grid_left_pane_ParamLimits

0xcc9f,	// (0x0004b76c) vkb2_top_grid_left_pane

0xccbf,	// (0x0004b78c) vkb2_top_grid_right_pane_ParamLimits

0xccbf,	// (0x0004b78c) vkb2_top_grid_right_pane

0x2e25,	// (0x000418f2) vkb2_cell_keypad_pane_ParamLimits

0x2e25,	// (0x000418f2) vkb2_cell_keypad_pane

0xcd05,	// (0x0004b7d2) vkb2_area_bottom_grid_pane_ParamLimits

0xcd05,	// (0x0004b7d2) vkb2_area_bottom_grid_pane

0xcd2f,	// (0x0004b7fc) vkb2_area_bottom_pane_g1_ParamLimits

0xcd2f,	// (0x0004b7fc) vkb2_area_bottom_pane_g1

0xcd55,	// (0x0004b822) vkb2_area_bottom_pane_g2_ParamLimits

0xcd55,	// (0x0004b822) vkb2_area_bottom_pane_g2

0xcd86,	// (0x0004b853) vkb2_area_bottom_pane_g3_ParamLimits

0xcd86,	// (0x0004b853) vkb2_area_bottom_pane_g3

0x0002,

0xfd70,	// (0x0004e83d) vkb2_area_bottom_pane_g_ParamLimits

0xfd70,	// (0x0004e83d) vkb2_area_bottom_pane_g

0x2fcf,	// (0x00041a9c) vkb2_top_cell_left_pane_ParamLimits

0x2fcf,	// (0x00041a9c) vkb2_top_cell_left_pane

0xecc8,	// (0x0004d795) vkb2_top_entry_pane_g1_ParamLimits

0xecc8,	// (0x0004d795) vkb2_top_entry_pane_g1

0xecd6,	// (0x0004d7a3) vkb2_top_entry_pane_t1_ParamLimits

0xecd6,	// (0x0004d7a3) vkb2_top_entry_pane_t1

0x9813,	// (0x000482e0) vkb2_top_entry_pane_t2_ParamLimits

0x9813,	// (0x000482e0) vkb2_top_entry_pane_t2

0x9845,	// (0x00048312) vkb2_top_entry_pane_t3_ParamLimits

0x9845,	// (0x00048312) vkb2_top_entry_pane_t3

0x0002,

0xfd77,	// (0x0004e844) vkb2_top_entry_pane_t_ParamLimits

0xfd77,	// (0x0004e844) vkb2_top_entry_pane_t

0xcdf0,	// (0x0004b8bd) vkb2_top_grid_right_pane_g1_ParamLimits

0xcdf0,	// (0x0004b8bd) vkb2_top_grid_right_pane_g1

0x3032,	// (0x00041aff) vkb2_top_grid_right_pane_g2_ParamLimits

0x3032,	// (0x00041aff) vkb2_top_grid_right_pane_g2

0x304a,	// (0x00041b17) vkb2_top_grid_right_pane_g3_ParamLimits

0x304a,	// (0x00041b17) vkb2_top_grid_right_pane_g3

0xce06,	// (0x0004b8d3) vkb2_top_grid_right_pane_g4_ParamLimits

0xce06,	// (0x0004b8d3) vkb2_top_grid_right_pane_g4

0x0003,

0xfd7e,	// (0x0004e84b) vkb2_top_grid_right_pane_g_ParamLimits

0xfd7e,	// (0x0004e84b) vkb2_top_grid_right_pane_g

0x3078,	// (0x00041b45) vkb2_top_cell_left_pane_g1

0x308f,	// (0x00041b5c) vkb2_cell_keypad_pane_g1_ParamLimits

0x308f,	// (0x00041b5c) vkb2_cell_keypad_pane_g1

0x9869,	// (0x00048336) vkb2_cell_keypad_pane_t1_ParamLimits

0x9869,	// (0x00048336) vkb2_cell_keypad_pane_t1

0x309d,	// (0x00041b6a) vkb2_cell_bottom_grid_pane_ParamLimits

0x309d,	// (0x00041b6a) vkb2_cell_bottom_grid_pane

0x30d6,	// (0x00041ba3) vkb2_cell_bottom_grid_pane_g1

0xe993,	// (0x0004d460) aid_call2_pane_cp02

0xe99b,	// (0x0004d468) aid_call_pane_cp02

0xe9a3,	// (0x0004d470) clock_digital_number_pane_cp10

0xe9ab,	// (0x0004d478) clock_digital_number_pane_cp11

0xe9b3,	// (0x0004d480) clock_digital_number_pane_cp12

0xe9bb,	// (0x0004d488) clock_digital_number_pane_cp13

0xe9c3,	// (0x0004d490) clock_digital_separator_pane_cp10

0x450b,	// (0x00042fd8) popup_clock_digital_analogue_window_cp2_g1

0x450b,	// (0x00042fd8) popup_clock_digital_analogue_window_cp2_g2

0xe9cb,	// (0x0004d498) popup_clock_digital_analogue_window_cp2_g3

0x450b,	// (0x00042fd8) popup_clock_digital_analogue_window_cp2_g4

0xe9cb,	// (0x0004d498) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd38,	// (0x0004e805) popup_clock_digital_analogue_window_cp2_g

0xe9d3,	// (0x0004d4a0) popup_clock_digital_analogue_window_cp2_t1

0xe9e1,	// (0x0004d4ae) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0x0048,	// (0x0003eb15) popup_clock_digital_analogue_window_cp2_t

0x7967,	// (0x00046434) clock_digital_number_pane_cp10_g1

0x7967,	// (0x00046434) clock_digital_number_pane_cp10_g2

0x0001,

0xfb35,	// (0x0004e602) clock_digital_number_pane_cp10_g

0x7967,	// (0x00046434) clock_digital_separator_pane_cp10_g1

0x7967,	// (0x00046434) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb35,	// (0x0004e602) clock_digital_separator_pane_cp10_g

0x9298,	// (0x00047d65) uniindi_top_pane_g3

0x92a9,	// (0x00047d76) uniindi_top_pane_g4

0x2eb0,	// (0x0004197d) vkb2_row_keypad_pane_ParamLimits

0x2eb0,	// (0x0004197d) vkb2_row_keypad_pane

0x30f2,	// (0x00041bbf) vkb2_cell_t_keypad_pane_ParamLimits

0x30f2,	// (0x00041bbf) vkb2_cell_t_keypad_pane

0x3102,	// (0x00041bcf) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x3102,	// (0x00041bcf) vkb2_cell_t_keypad_pane_cp08

0x3115,	// (0x00041be2) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x3115,	// (0x00041be2) vkb2_cell_t_keypad_pane_cp09

0x3129,	// (0x00041bf6) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x3129,	// (0x00041bf6) vkb2_cell_t_keypad_pane_cp01

0x313a,	// (0x00041c07) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x313a,	// (0x00041c07) vkb2_cell_t_keypad_pane_cp02

0x314b,	// (0x00041c18) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x314b,	// (0x00041c18) vkb2_cell_t_keypad_pane_cp03

0x315c,	// (0x00041c29) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x315c,	// (0x00041c29) vkb2_cell_t_keypad_pane_cp04

0x316d,	// (0x00041c3a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x316d,	// (0x00041c3a) vkb2_cell_t_keypad_pane_cp05

0x317e,	// (0x00041c4b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x317e,	// (0x00041c4b) vkb2_cell_t_keypad_pane_cp06

0x318f,	// (0x00041c5c) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x318f,	// (0x00041c5c) vkb2_cell_t_keypad_pane_cp07

0x31a0,	// (0x00041c6d) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x31a0,	// (0x00041c6d) vkb2_cell_t_keypad_pane_cp10

0x7be5,	// (0x000466b2) vkb2_cell_t_keypad_pane_g1

0x9880,	// (0x0004834d) vkb2_cell_t_keypad_pane_t1

0x352c,	// (0x00041ff9) popup_grid_graphic2_window

0xed0f,	// (0x0004d7dc) aid_size_cell_graphic2_ParamLimits

0xed0f,	// (0x0004d7dc) aid_size_cell_graphic2

0xed4d,	// (0x0004d81a) bg_popup_window_pane_cp21_ParamLimits

0xed4d,	// (0x0004d81a) bg_popup_window_pane_cp21

0xed5b,	// (0x0004d828) graphic2_pages_pane_ParamLimits

0xed5b,	// (0x0004d828) graphic2_pages_pane

0xedb1,	// (0x0004d87e) grid_graphic2_control_pane_ParamLimits

0xedb1,	// (0x0004d87e) grid_graphic2_control_pane

0xedf9,	// (0x0004d8c6) grid_graphic2_pane_ParamLimits

0xedf9,	// (0x0004d8c6) grid_graphic2_pane

0xee80,	// (0x0004d94d) cell_graphic2_pane

0x352c,	// (0x00041ff9) main_comp_mode_pane

0x8b18,	// (0x000475e5) list_ai3_gene_pane_ParamLimits

0xe6da,	// (0x0004d1a7) bg_popup_window_pane_cp19_ParamLimits

0x8eee,	// (0x000479bb) bg_touch_area_indi_pane_ParamLimits

0x8eee,	// (0x000479bb) bg_touch_area_indi_pane

0x8f04,	// (0x000479d1) bg_touch_area_indi_pane_cp01_ParamLimits

0x8f04,	// (0x000479d1) bg_touch_area_indi_pane_cp01

0x8f1a,	// (0x000479e7) bg_touch_area_indi_pane_cp02_ParamLimits

0x8f1a,	// (0x000479e7) bg_touch_area_indi_pane_cp02

0x8f32,	// (0x000479ff) bg_touch_area_indi_pane_cp03_ParamLimits

0x8f32,	// (0x000479ff) bg_touch_area_indi_pane_cp03

0x8f4c,	// (0x00047a19) popup_slider_window_g1_ParamLimits

0x8f68,	// (0x00047a35) popup_slider_window_g2_ParamLimits

0x8f84,	// (0x00047a51) popup_slider_window_g3_ParamLimits

0xfcd7,	// (0x0004e7a4) popup_slider_window_g_ParamLimits

0x8fe0,	// (0x00047aad) popup_slider_window_t1_ParamLimits

0x9054,	// (0x00047b21) small_volume_slider_vertical_pane_ParamLimits

0xee80,	// (0x0004d94d) cell_graphic2_pane_ParamLimits

0xeeea,	// (0x0004d9b7) bg_button_pane_cp10_ParamLimits

0xeeea,	// (0x0004d9b7) bg_button_pane_cp10

0xeefd,	// (0x0004d9ca) bg_button_pane_cp11_ParamLimits

0xeefd,	// (0x0004d9ca) bg_button_pane_cp11

0xef10,	// (0x0004d9dd) graphic2_pages_pane_g1_ParamLimits

0xef10,	// (0x0004d9dd) graphic2_pages_pane_g1

0xef2b,	// (0x0004d9f8) graphic2_pages_pane_g2_ParamLimits

0xef2b,	// (0x0004d9f8) graphic2_pages_pane_g2

0x0001,

0x0096,	// (0x0003eb63) graphic2_pages_pane_g_ParamLimits

0x0096,	// (0x0003eb63) graphic2_pages_pane_g

0xef43,	// (0x0004da10) graphic2_pages_pane_t1_ParamLimits

0xef43,	// (0x0004da10) graphic2_pages_pane_t1

0xef5b,	// (0x0004da28) cell_graphic2_control_pane_ParamLimits

0xef5b,	// (0x0004da28) cell_graphic2_control_pane

0xef8d,	// (0x0004da5a) cell_graphic2_pane_g1_ParamLimits

0xef8d,	// (0x0004da5a) cell_graphic2_pane_g1

0xe096,	// (0x0004cb63) cell_graphic2_pane_g2_ParamLimits

0xe096,	// (0x0004cb63) cell_graphic2_pane_g2

0xeedd,	// (0x0004d9aa) cell_graphic2_pane_g3_ParamLimits

0xeedd,	// (0x0004d9aa) cell_graphic2_pane_g3

0xe0a3,	// (0x0004cb70) cell_graphic2_pane_g4_ParamLimits

0xe0a3,	// (0x0004cb70) cell_graphic2_pane_g4

0xef9a,	// (0x0004da67) cell_graphic2_pane_g5_ParamLimits

0xef9a,	// (0x0004da67) cell_graphic2_pane_g5

0x0004,

0xfd8c,	// (0x0004e859) cell_graphic2_pane_g_ParamLimits

0xfd8c,	// (0x0004e859) cell_graphic2_pane_g

0xefba,	// (0x0004da87) cell_graphic2_pane_t1_ParamLimits

0xefba,	// (0x0004da87) cell_graphic2_pane_t1

0x6056,	// (0x00044b23) grid_highlight_pane_cp11_ParamLimits

0x6056,	// (0x00044b23) grid_highlight_pane_cp11

0x38a9,	// (0x00042376) bg_button_pane_cp05

0xefef,	// (0x0004dabc) cell_graphic2_control_pane_g1

0x7967,	// (0x00046434) bg_touch_area_indi_pane_g1

0x9b50,	// (0x0004861d) aid_cmod_rocker_key_size

0x9b5a,	// (0x00048627) aid_cmode_itu_key_size

0x9b64,	// (0x00048631) main_cmode_video_pane

0x9b6e,	// (0x0004863b) main_comp_mode_itu_pane

0x9b7a,	// (0x00048647) main_comp_mode_rocker_pane

0x9b86,	// (0x00048653) cell_cmode_rocker_pane_ParamLimits

0x9b86,	// (0x00048653) cell_cmode_rocker_pane

0x9b98,	// (0x00048665) cell_cmode_itu_pane_ParamLimits

0x9b98,	// (0x00048665) cell_cmode_itu_pane

0x3e98,	// (0x00042965) bg_button_pane_cp06_ParamLimits

0x3e98,	// (0x00042965) bg_button_pane_cp06

0x7be5,	// (0x000466b2) cell_cmode_rocker_pane_g1_ParamLimits

0x7be5,	// (0x000466b2) cell_cmode_rocker_pane_g1

0x90f8,	// (0x00047bc5) cell_cmode_rocker_pane_g2_ParamLimits

0x90f8,	// (0x00047bc5) cell_cmode_rocker_pane_g2

0x0001,

0xfd97,	// (0x0004e864) cell_cmode_rocker_pane_g_ParamLimits

0xfd97,	// (0x0004e864) cell_cmode_rocker_pane_g

0x352c,	// (0x00041ff9) bg_button_pane_cp07

0x9bad,	// (0x0004867a) cell_cmode_itu_pane_g1

0x9bb6,	// (0x00048683) cell_cmode_itu_pane_t1

0x9bc4,	// (0x00048691) cell_cmode_itu_pane_t2

0x0001,

0xfd9c,	// (0x0004e869) cell_cmode_itu_pane_t

0x931b,	// (0x00047de8) aid_touch_ctrl_left

0x9323,	// (0x00047df0) aid_touch_ctrl_right

0x352c,	// (0x00041ff9) compa_mode_pane

0xf015,	// (0x0004dae2) aid_cmod_rocker_key_size_cp

0xf01f,	// (0x0004daec) aid_cmode_itu_key_size_cp

0x9be6,	// (0x000486b3) compa_mode_pane_g1

0x9bee,	// (0x000486bb) compa_mode_pane_g2

0x9bf6,	// (0x000486c3) compa_mode_pane_g3

0x0002,

0xfda1,	// (0x0004e86e) compa_mode_pane_g

0xf029,	// (0x0004daf6) main_comp_mode_itu_pane_cp

0xf031,	// (0x0004dafe) main_comp_mode_rocker_pane_cp

0xf039,	// (0x0004db06) cell_cmode_itu_pane_cp_ParamLimits

0xf039,	// (0x0004db06) cell_cmode_itu_pane_cp

0xf04e,	// (0x0004db1b) cell_cmode_rocker_pane_cp_ParamLimits

0xf04e,	// (0x0004db1b) cell_cmode_rocker_pane_cp

0x3e98,	// (0x00042965) bg_button_pane_cp06_cp_ParamLimits

0x3e98,	// (0x00042965) bg_button_pane_cp06_cp

0x7be5,	// (0x000466b2) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7be5,	// (0x000466b2) cell_cmode_rocker_pane_g1_cp

0x7967,	// (0x00046434) cell_cmode_rocker_pane_g2_cp

0x352c,	// (0x00041ff9) bg_button_pane_cp07_cp

0xf060,	// (0x0004db2d) cell_cmode_itu_pane_g1_cp

0xf069,	// (0x0004db36) cell_cmode_itu_pane_t1_cp

0xf069,	// (0x0004db36) cell_cmode_itu_pane_t2_cp

0xdd23,	// (0x0004c7f0) settings_code_pane_cp2

0x3620,	// (0x000420ed) bg_popup_window_pane_cp3_ParamLimits

0x3a83,	// (0x00042550) heading_pane_cp3_ParamLimits

0x3a8f,	// (0x0004255c) listscroll_popup_graphic_pane_ParamLimits

0x26ec,	// (0x000411b9) fep_hwr_aid_pane_ParamLimits

0x2b92,	// (0x0004165f) aid_touch_sctrl_top_ParamLimits

0x2b9f,	// (0x0004166c) sctrl_sk_top_pane_g1_ParamLimits

0x7be5,	// (0x000466b2) sctrl_sk_top_pane_g2_ParamLimits

0xfcf0,	// (0x0004e7bd) sctrl_sk_top_pane_g_ParamLimits

0x2bac,	// (0x00041679) sctrl_sk_top_pane_t1_ParamLimits

0x2b92,	// (0x0004165f) aid_touch_sctrl_bottom_ParamLimits

0x2bac,	// (0x00041679) sctrl_sk_bottom_pane_t1_ParamLimits

0x9264,	// (0x00047d31) aid_area_touch_clock

0xcc34,	// (0x0004b701) aid_vkb2_area_top_pane_cell_ParamLimits

0xcc34,	// (0x0004b701) aid_vkb2_area_top_pane_cell

0xccdf,	// (0x0004b7ac) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xccdf,	// (0x0004b7ac) aid_vkb2_area_bottom_pane_cell

0x97cb,	// (0x00048298) popup_char_count_window

0x9c43,	// (0x00048710) popup_char_count_window_g1

0x9c4c,	// (0x00048719) popup_char_count_window_g2

0x9c55,	// (0x00048722) popup_char_count_window_g3

0x0002,

0xfda8,	// (0x0004e875) popup_char_count_window_g

0x9c5e,	// (0x0004872b) popup_char_count_window_t1

0x2c4d,	// (0x0004171a) popup_fep_char_preview_window_ParamLimits

0x2c4d,	// (0x0004171a) popup_fep_char_preview_window

0xcc54,	// (0x0004b721) vkb2_top_candi_pane_ParamLimits

0xcc54,	// (0x0004b721) vkb2_top_candi_pane

0xf077,	// (0x0004db44) cell_vkb2_top_candi_pane_ParamLimits

0xf077,	// (0x0004db44) cell_vkb2_top_candi_pane

0x59e2,	// (0x000444af) bg_popup_fep_char_preview_window_ParamLimits

0x59e2,	// (0x000444af) bg_popup_fep_char_preview_window

0x31b5,	// (0x00041c82) popup_fep_char_preview_window_t1_ParamLimits

0x31b5,	// (0x00041c82) popup_fep_char_preview_window_t1

0x9cb9,	// (0x00048786) bg_popup_fep_char_preview_window_g1

0x9cc1,	// (0x0004878e) bg_popup_fep_char_preview_window_g2

0x9cc9,	// (0x00048796) bg_popup_fep_char_preview_window_g3

0x9cd1,	// (0x0004879e) bg_popup_fep_char_preview_window_g4

0x9cd9,	// (0x000487a6) bg_popup_fep_char_preview_window_g5

0x31ef,	// (0x00041cbc) bg_popup_fep_char_preview_window_g6

0x9ce1,	// (0x000487ae) bg_popup_fep_char_preview_window_g7

0x9ce9,	// (0x000487b6) bg_popup_fep_char_preview_window_g8

0x9cf1,	// (0x000487be) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdaf,	// (0x0004e87c) bg_popup_fep_char_preview_window_g

0x7be5,	// (0x000466b2) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7be5,	// (0x000466b2) cell_vkb2_top_candi_pane_g1

0x7f68,	// (0x00046a35) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7f68,	// (0x00046a35) cell_vkb2_top_candi_pane_g2

0x7f89,	// (0x00046a56) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7f89,	// (0x00046a56) cell_vkb2_top_candi_pane_g3

0x31f7,	// (0x00041cc4) cell_vkb2_top_candi_pane_g4_ParamLimits

0x31f7,	// (0x00041cc4) cell_vkb2_top_candi_pane_g4

0x9cf9,	// (0x000487c6) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9cf9,	// (0x000487c6) cell_vkb2_top_candi_pane_g5

0x90f8,	// (0x00047bc5) cell_vkb2_top_candi_pane_g6_ParamLimits

0x90f8,	// (0x00047bc5) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc2,	// (0x0004e88f) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc2,	// (0x0004e88f) cell_vkb2_top_candi_pane_g

0x3218,	// (0x00041ce5) cell_vkb2_top_candi_pane_t1

0x24d1,	// (0x00040f9e) aid_size_touch_slider_mark_ParamLimits

0x24d1,	// (0x00040f9e) aid_size_touch_slider_mark

0xed97,	// (0x0004d864) grid_graphic2_catg_pane_ParamLimits

0xed97,	// (0x0004d864) grid_graphic2_catg_pane

0xee53,	// (0x0004d920) popup_grid_graphic2_window_t1_ParamLimits

0xee53,	// (0x0004d920) popup_grid_graphic2_window_t1

0xee69,	// (0x0004d936) popup_grid_graphic2_window_t2_ParamLimits

0xee69,	// (0x0004d936) popup_grid_graphic2_window_t2

0x0001,

0xfd87,	// (0x0004e854) popup_grid_graphic2_window_t_ParamLimits

0xfd87,	// (0x0004e854) popup_grid_graphic2_window_t

0x38a9,	// (0x00042376) bg_button_pane_cp05_ParamLimits

0xefef,	// (0x0004dabc) cell_graphic2_control_pane_g1_ParamLimits

0xf0dd,	// (0x0004dbaa) cell_graphic2_catg_pane_ParamLimits

0xf0dd,	// (0x0004dbaa) cell_graphic2_catg_pane

0x352c,	// (0x00041ff9) bg_button_pane_cp12

0xf0ef,	// (0x0004dbbc) cell_graphic2_catg_pane_g1

0x9230,	// (0x00047cfd) cell_tb_ext_pane_t1_ParamLimits

0x2fef,	// (0x00041abc) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2fef,	// (0x00041abc) vkb2_top_cell_right_narrow_pane

0x3007,	// (0x00041ad4) vkb2_top_cell_right_wide_pane_ParamLimits

0x3007,	// (0x00041ad4) vkb2_top_cell_right_wide_pane

0x26de,	// (0x000411ab) bg_vkb2_func_pane_ParamLimits

0x26de,	// (0x000411ab) bg_vkb2_func_pane

0x3078,	// (0x00041b45) vkb2_top_cell_left_pane_g1_ParamLimits

0x26de,	// (0x000411ab) bg_vkb2_fuc_pane_cp03_ParamLimits

0x26de,	// (0x000411ab) bg_vkb2_fuc_pane_cp03

0x30d6,	// (0x00041ba3) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x5365,	// (0x00043e32) bg_vkb2_func_pane_g1

0x536d,	// (0x00043e3a) bg_vkb2_func_pane_g2

0x537d,	// (0x00043e4a) bg_vkb2_func_pane_g3

0x5375,	// (0x00043e42) bg_vkb2_func_pane_g4

0x5385,	// (0x00043e52) bg_vkb2_func_pane_g5

0x538d,	// (0x00043e5a) bg_vkb2_func_pane_g6

0x5395,	// (0x00043e62) bg_vkb2_func_pane_g7

0x539d,	// (0x00043e6a) bg_vkb2_func_pane_g8

0x535d,	// (0x00043e2a) bg_vkb2_func_pane_g9

0x0008,

0xfdcf,	// (0x0004e89c) bg_vkb2_func_pane_g

0x26de,	// (0x000411ab) bg_vkb2_fuc_pane_cp01_ParamLimits

0x26de,	// (0x000411ab) bg_vkb2_fuc_pane_cp01

0x3078,	// (0x00041b45) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x3078,	// (0x00041b45) vkb2_top_cell_right_wide_pane_g1

0x26de,	// (0x000411ab) bg_vkb2_fuc_pane_cp02_ParamLimits

0x26de,	// (0x000411ab) bg_vkb2_fuc_pane_cp02

0x30d6,	// (0x00041ba3) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x30d6,	// (0x00041ba3) vkb2_top_cell_right_narrow_pane_g1

0xe61a,	// (0x0004d0e7) aid_touch_area_decrease_ParamLimits

0xe61a,	// (0x0004d0e7) aid_touch_area_decrease

0xe64e,	// (0x0004d11b) aid_touch_area_increase_ParamLimits

0xe64e,	// (0x0004d11b) aid_touch_area_increase

0xe676,	// (0x0004d143) aid_touch_area_mute_ParamLimits

0xe676,	// (0x0004d143) aid_touch_area_mute

0xe6a6,	// (0x0004d173) aid_touch_area_slider_ParamLimits

0xe6a6,	// (0x0004d173) aid_touch_area_slider

0xe6e6,	// (0x0004d1b3) popup_slider_window_g4_ParamLimits

0xe6e6,	// (0x0004d1b3) popup_slider_window_g4

0xe70e,	// (0x0004d1db) popup_slider_window_g5_ParamLimits

0xe70e,	// (0x0004d1db) popup_slider_window_g5

0xe742,	// (0x0004d20f) popup_slider_window_g6_ParamLimits

0xe742,	// (0x0004d20f) popup_slider_window_g6

0x900e,	// (0x00047adb) popup_slider_window_t2_ParamLimits

0x900e,	// (0x00047adb) popup_slider_window_t2

0x0001,

0xfce4,	// (0x0004e7b1) popup_slider_window_t_ParamLimits

0xfce4,	// (0x0004e7b1) popup_slider_window_t

0xe75e,	// (0x0004d22b) slider_pane_ParamLimits

0xe75e,	// (0x0004d22b) slider_pane

0x9d35,	// (0x00048802) slider_pane_g1_ParamLimits

0x9d35,	// (0x00048802) slider_pane_g1

0x9d49,	// (0x00048816) slider_pane_g2_ParamLimits

0x9d49,	// (0x00048816) slider_pane_g2

0x9d5f,	// (0x0004882c) slider_pane_g3_ParamLimits

0x9d5f,	// (0x0004882c) slider_pane_g3

0x0003,

0xfde2,	// (0x0004e8af) slider_pane_g_ParamLimits

0xfde2,	// (0x0004e8af) slider_pane_g

0xc87a,	// (0x0004b347) popup_tb_float_extension_window_ParamLimits

0xc87a,	// (0x0004b347) popup_tb_float_extension_window

0x9d8b,	// (0x00048858) aid_size_cell_tb_float_ext

0x352c,	// (0x00041ff9) bg_popup_sub_window_cp28

0x9d97,	// (0x00048864) grid_tb_float_ext_pane

0x9da1,	// (0x0004886e) cell_tb_float_ext_pane_ParamLimits

0x9da1,	// (0x0004886e) cell_tb_float_ext_pane

0x9dbb,	// (0x00048888) cell_tb_float_ext_pane_g1

0x9dc4,	// (0x00048891) grid_highlight_pane_cp12

0xc9c5,	// (0x0004b492) cell_last_hwr_side_pane_ParamLimits

0xc9c5,	// (0x0004b492) cell_last_hwr_side_pane

0x7967,	// (0x00046434) cell_last_hwr_side_pane_g1

0x9dcd,	// (0x0004889a) cell_last_hwr_side_pane_g2

0x0001,

0xfdeb,	// (0x0004e8b8) cell_last_hwr_side_pane_g

0xcdbb,	// (0x0004b888) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcdbb,	// (0x0004b888) vkb2_area_bottom_space_btn_pane

0x7be5,	// (0x000466b2) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9880,	// (0x0004834d) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x3218,	// (0x00041ce5) cell_vkb2_top_candi_pane_t1_ParamLimits

0x3237,	// (0x00041d04) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x3237,	// (0x00041d04) vkb2_area_bottom_space_btn_pane_g1

0x3271,	// (0x00041d3e) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x3271,	// (0x00041d3e) vkb2_area_bottom_space_btn_pane_g2

0x32a7,	// (0x00041d74) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x32a7,	// (0x00041d74) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf0,	// (0x0004e8bd) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf0,	// (0x0004e8bd) vkb2_area_bottom_space_btn_pane_g

0x2793,	// (0x00041260) cel_fep_hwr_func_pane_ParamLimits

0x2793,	// (0x00041260) cel_fep_hwr_func_pane

0xc99a,	// (0x0004b467) cell_hwr_side_button_pane_ParamLimits

0xc99a,	// (0x0004b467) cell_hwr_side_button_pane

0x9264,	// (0x00047d31) aid_area_touch_clock_ParamLimits

0x38a9,	// (0x00042376) bg_uniindi_top_pane_ParamLimits

0x9276,	// (0x00047d43) uniindi_top_pane_g1_ParamLimits

0x928c,	// (0x00047d59) uniindi_top_pane_g2_ParamLimits

0x9298,	// (0x00047d65) uniindi_top_pane_g3_ParamLimits

0x92a9,	// (0x00047d76) uniindi_top_pane_g4_ParamLimits

0xfd17,	// (0x0004e7e4) uniindi_top_pane_g_ParamLimits

0x92b6,	// (0x00047d83) uniindi_top_pane_t1_ParamLimits

0x38a9,	// (0x00042376) bg_vkb2_func_pane_cp01_ParamLimits

0x38a9,	// (0x00042376) bg_vkb2_func_pane_cp01

0x9dd6,	// (0x000488a3) cel_fep_hwr_func_pane_g1_ParamLimits

0x9dd6,	// (0x000488a3) cel_fep_hwr_func_pane_g1

0x38a9,	// (0x00042376) bg_vkb2_func_pane_cp02_ParamLimits

0x38a9,	// (0x00042376) bg_vkb2_func_pane_cp02

0x9dd6,	// (0x000488a3) cell_hwr_side_button_pane_g1_ParamLimits

0x9dd6,	// (0x000488a3) cell_hwr_side_button_pane_g1

0x51de,	// (0x00043cab) status_pane_g4_ParamLimits

0x51de,	// (0x00043cab) status_pane_g4

0x51f8,	// (0x00043cc5) status_pane_t1

0x7695,	// (0x00046162) form2_midp_gauge_slider_cont_pane

0x769d,	// (0x0004616a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdfde,	// (0x0004caab) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdff0,	// (0x0004cabd) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae8,	// (0x0004e5b5) form2_midp_gauge_slider_pane_t_ParamLimits

0x76d3,	// (0x000461a0) form2_midp_slider_pane_ParamLimits

0x2c0d,	// (0x000416da) aid_size_cell_func_vkb2_ParamLimits

0x2c0d,	// (0x000416da) aid_size_cell_func_vkb2

0x9d77,	// (0x00048844) slider_pane_g4_ParamLimits

0x9d77,	// (0x00048844) slider_pane_g4

0xce1c,	// (0x0004b8e9) form2_midp_gauge_slider_pane_t2_cp01

0xce2a,	// (0x0004b8f7) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xce2a,	// (0x0004b8f7) form2_midp_gauge_slider_pane_t3_cp01

0x331c,	// (0x00041de9) form2_midp_slider_pane_cp01

0x352c,	// (0x00041ff9) navi_smil_pane

0x9e0f,	// (0x000488dc) navi_smil_pane_g1

0x9e17,	// (0x000488e4) navi_smil_pane_t1

0x9de4,	// (0x000488b1) form2_midp_slider_pane_g1

0x9ded,	// (0x000488ba) form2_midp_slider_pane_g2

0x9df5,	// (0x000488c2) form2_midp_slider_pane_g3

0x9de4,	// (0x000488b1) form2_midp_slider_pane_g4

0xf0f8,	// (0x0004dbc5) form2_midp_slider_pane_g5

0x0004,

0xfdf9,	// (0x0004e8c6) form2_midp_slider_pane_g

0x32e1,	// (0x00041dae) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x32e1,	// (0x00041dae) vkb2_area_bottom_space_btn_pane_g4

0xd6f6,	// (0x0004c1c3) lc0_navi_pane_ParamLimits

0xd6f6,	// (0x0004c1c3) lc0_navi_pane

0xd760,	// (0x0004c22d) lc0_stat_indi_pane_ParamLimits

0xd760,	// (0x0004c22d) lc0_stat_indi_pane

0xd775,	// (0x0004c242) ls0_title_pane_ParamLimits

0xd775,	// (0x0004c242) ls0_title_pane

0x3e98,	// (0x00042965) bg_popup_sub_pane_cp14_ParamLimits

0x924b,	// (0x00047d18) list_uniindi_pane_ParamLimits

0x9257,	// (0x00047d24) uniindi_top_pane_ParamLimits

0x92f3,	// (0x00047dc0) list_single_uniindi_pane_g1_ParamLimits

0x9306,	// (0x00047dd3) list_single_uniindi_pane_t1_ParamLimits

0xce47,	// (0x0004b914) lc0_stat_clock_pane_ParamLimits

0xce47,	// (0x0004b914) lc0_stat_clock_pane

0xf103,	// (0x0004dbd0) lc0_stat_indi_pane_g1_ParamLimits

0xf103,	// (0x0004dbd0) lc0_stat_indi_pane_g1

0xf110,	// (0x0004dbdd) lc0_stat_indi_pane_g2_ParamLimits

0xf110,	// (0x0004dbdd) lc0_stat_indi_pane_g2

0x0001,

0x0118,	// (0x0003ebe5) lc0_stat_indi_pane_g_ParamLimits

0x0118,	// (0x0003ebe5) lc0_stat_indi_pane_g

0xce54,	// (0x0004b921) lc0_uni_indicator_pane_ParamLimits

0xce54,	// (0x0004b921) lc0_uni_indicator_pane

0xf11d,	// (0x0004dbea) ls0_title_pane_g1_ParamLimits

0xf11d,	// (0x0004dbea) ls0_title_pane_g1

0xf131,	// (0x0004dbfe) ls0_title_pane_t1_ParamLimits

0xf131,	// (0x0004dbfe) ls0_title_pane_t1

0xce61,	// (0x0004b92e) lc0_uni_indicator_pane_g1_ParamLimits

0xce61,	// (0x0004b92e) lc0_uni_indicator_pane_g1

0x9e89,	// (0x00048956) lc0_stat_clock_pane_t1

0x352c,	// (0x00041ff9) main_ai5_pane

0x9e97,	// (0x00048964) ai5_sk_pane_ParamLimits

0x9e97,	// (0x00048964) ai5_sk_pane

0xf15f,	// (0x0004dc2c) cell_ai5_widget_pane_ParamLimits

0xf15f,	// (0x0004dc2c) cell_ai5_widget_pane

0x9f5a,	// (0x00048a27) aid_size_cell_widget_grid

0x9f70,	// (0x00048a3d) bg_ai5_widget_pane_ParamLimits

0x9f70,	// (0x00048a3d) bg_ai5_widget_pane

0x9fe4,	// (0x00048ab1) cell_ai5_widget_pane_g2

0x9ff4,	// (0x00048ac1) cell_ai5_widget_pane_g3

0xa00b,	// (0x00048ad8) cell_ai5_widget_pane_g4

0xa017,	// (0x00048ae4) cell_ai5_widget_pane_g5

0xa023,	// (0x00048af0) cell_ai5_widget_pane_g6

0xa02f,	// (0x00048afc) cell_ai5_widget_pane_g7

0xa077,	// (0x00048b44) cell_ai5_widget_pane_t1_ParamLimits

0xa077,	// (0x00048b44) cell_ai5_widget_pane_t1

0xa094,	// (0x00048b61) cell_ai5_widget_pane_t2_ParamLimits

0xa094,	// (0x00048b61) cell_ai5_widget_pane_t2

0xa0ac,	// (0x00048b79) cell_ai5_widget_pane_t3_ParamLimits

0xa0ac,	// (0x00048b79) cell_ai5_widget_pane_t3

0xa0c4,	// (0x00048b91) cell_ai5_widget_pane_t4_ParamLimits

0xa0c4,	// (0x00048b91) cell_ai5_widget_pane_t4

0xa0e1,	// (0x00048bae) cell_ai5_widget_pane_t5_ParamLimits

0xa0e1,	// (0x00048bae) cell_ai5_widget_pane_t5

0xa100,	// (0x00048bcd) cell_ai5_widget_pane_t6_ParamLimits

0xa100,	// (0x00048bcd) cell_ai5_widget_pane_t6

0xa112,	// (0x00048bdf) cell_ai5_widget_pane_t7_ParamLimits

0xa112,	// (0x00048bdf) cell_ai5_widget_pane_t7

0xa12b,	// (0x00048bf8) cell_ai5_widget_pane_t8_ParamLimits

0xa12b,	// (0x00048bf8) cell_ai5_widget_pane_t8

0x0009,

0xfe19,	// (0x0004e8e6) cell_ai5_widget_pane_t_ParamLimits

0xfe19,	// (0x0004e8e6) cell_ai5_widget_pane_t

0xa17f,	// (0x00048c4c) grid_ai5_widget_pane

0x3e98,	// (0x00042965) highlight_cell_ai5_widget_pane_ParamLimits

0x3e98,	// (0x00042965) highlight_cell_ai5_widget_pane

0xf1c9,	// (0x0004dc96) ai5_sk_left_pane

0xf1d3,	// (0x0004dca0) ai5_sk_middle_pane

0xf1dd,	// (0x0004dcaa) ai5_sk_right_pane

0xa1b5,	// (0x00048c82) bg_ai5_widget_pane_g1_ParamLimits

0xa1b5,	// (0x00048c82) bg_ai5_widget_pane_g1

0xa1c1,	// (0x00048c8e) bg_ai5_widget_pane_g2_ParamLimits

0xa1c1,	// (0x00048c8e) bg_ai5_widget_pane_g2

0xa1cd,	// (0x00048c9a) bg_ai5_widget_pane_g3_ParamLimits

0xa1cd,	// (0x00048c9a) bg_ai5_widget_pane_g3

0xa1d9,	// (0x00048ca6) bg_ai5_widget_pane_g4_ParamLimits

0xa1d9,	// (0x00048ca6) bg_ai5_widget_pane_g4

0xa1e5,	// (0x00048cb2) bg_ai5_widget_pane_g5_ParamLimits

0xa1e5,	// (0x00048cb2) bg_ai5_widget_pane_g5

0xa1f1,	// (0x00048cbe) bg_ai5_widget_pane_g6_ParamLimits

0xa1f1,	// (0x00048cbe) bg_ai5_widget_pane_g6

0xa1fd,	// (0x00048cca) bg_ai5_widget_pane_g7_ParamLimits

0xa1fd,	// (0x00048cca) bg_ai5_widget_pane_g7

0xa209,	// (0x00048cd6) bg_ai5_widget_pane_g8_ParamLimits

0xa209,	// (0x00048cd6) bg_ai5_widget_pane_g8

0xa215,	// (0x00048ce2) bg_ai5_widget_pane_g9_ParamLimits

0xa215,	// (0x00048ce2) bg_ai5_widget_pane_g9

0x0008,

0xfe2e,	// (0x0004e8fb) bg_ai5_widget_pane_g_ParamLimits

0xfe2e,	// (0x0004e8fb) bg_ai5_widget_pane_g

0xa247,	// (0x00048d14) cell_shortcut_ai5_widget_pane_ParamLimits

0xa247,	// (0x00048d14) cell_shortcut_ai5_widget_pane

0x4b13,	// (0x000435e0) bg_cell_shortcut_ai5_widget_pane

0xa258,	// (0x00048d25) cell_grid_ai5_widget_pane_g1

0xa261,	// (0x00048d2e) highlight_cell_shortcut_ai5_widget_pane

0x536d,	// (0x00043e3a) ai5_sk_left_pane_g1

0xa269,	// (0x00048d36) ai5_sk_left_pane_g2

0xa271,	// (0x00048d3e) ai5_sk_left_pane_g3

0xa279,	// (0x00048d46) ai5_sk_left_pane_g4

0x0003,

0xfe41,	// (0x0004e90e) ai5_sk_left_pane_g

0xa281,	// (0x00048d4e) ai5_sk_left_pane_t1

0x5365,	// (0x00043e32) ai5_sk_right_pane_g1

0xa28f,	// (0x00048d5c) ai5_sk_right_pane_g2

0xa297,	// (0x00048d64) ai5_sk_right_pane_g3

0xa29f,	// (0x00048d6c) ai5_sk_right_pane_g4

0x0003,

0xfe4a,	// (0x0004e917) ai5_sk_right_pane_g

0xa2a7,	// (0x00048d74) ai5_sk_right_pane_t1

0x5365,	// (0x00043e32) ai5_sk_middle_pane_g1

0x536d,	// (0x00043e3a) ai5_sk_middle_pane_g2

0x5385,	// (0x00043e52) ai5_sk_middle_pane_g3

0xa297,	// (0x00048d64) ai5_sk_middle_pane_g4

0xa271,	// (0x00048d3e) ai5_sk_middle_pane_g5

0xa2b5,	// (0x00048d82) ai5_sk_middle_pane_g6

0xf1e7,	// (0x0004dcb4) ai5_sk_middle_pane_g7

0x0006,

0xfe53,	// (0x0004e920) ai5_sk_middle_pane_g

0xd5e2,	// (0x0004c0af) aid_touch_area_size_lc0_ParamLimits

0xd5e2,	// (0x0004c0af) aid_touch_area_size_lc0

0x291e,	// (0x000413eb) cell_hwr_candidate_pane_t1_ParamLimits

0x4eb5,	// (0x00043982) aid_touch_navi_pane

0xd86e,	// (0x0004c33b) status_dt_navi_pane_ParamLimits

0xd86e,	// (0x0004c33b) status_dt_navi_pane

0xd886,	// (0x0004c353) status_dt_sta_pane_ParamLimits

0xd886,	// (0x0004c353) status_dt_sta_pane

0xf1ef,	// (0x0004dcbc) dt_sta_controll_pane

0xf1fc,	// (0x0004dcc9) dt_sta_indi_pane

0xf209,	// (0x0004dcd6) dt_sta_title_pane

0x38a9,	// (0x00042376) bg_dt_sta_indi_pane_ParamLimits

0x38a9,	// (0x00042376) bg_dt_sta_indi_pane

0xf21b,	// (0x0004dce8) dt_sta_battery_pane

0xf223,	// (0x0004dcf0) dt_sta_indi_pane_g1

0xa307,	// (0x00048dd4) dt_sta_indi_pane_g2

0xa310,	// (0x00048ddd) dt_sta_indi_pane_g3

0x0002,

0xfe62,	// (0x0004e92f) dt_sta_indi_pane_g

0xa319,	// (0x00048de6) dt_sta_signal_pane

0x3e98,	// (0x00042965) bg_dt_sta_title_pane_ParamLimits

0x3e98,	// (0x00042965) bg_dt_sta_title_pane

0xa322,	// (0x00048def) dt_sta_title_pane_g1

0xa32a,	// (0x00048df7) dt_sta_title_pane_t1_ParamLimits

0xa32a,	// (0x00048df7) dt_sta_title_pane_t1

0x352c,	// (0x00041ff9) bg_dt_sta_control_pane

0xf22c,	// (0x0004dcf9) dt_sta_controll_pane_g1

0xa348,	// (0x00048e15) bg_dt_sta_title_pane_g1

0xa351,	// (0x00048e1e) bg_dt_sta_title_pane_g2

0xa35a,	// (0x00048e27) bg_dt_sta_title_pane_g3

0x0002,

0xfe69,	// (0x0004e936) bg_dt_sta_title_pane_g

0x7967,	// (0x00046434) bg_dt_sta_indi_pane_g1

0xa363,	// (0x00048e30) dt_sta_signal_pane_g1

0xa36b,	// (0x00048e38) dt_sta_signal_pane_g2

0x0001,

0xfe70,	// (0x0004e93d) dt_sta_signal_pane_g

0xa373,	// (0x00048e40) dt_sta_battery_pane_g1

0xa37c,	// (0x00048e49) dt_sta_battery_pane_t1

0x7967,	// (0x00046434) bg_dt_sta_control_pane_g1

0x461d,	// (0x000430ea) fep_china_uni_eep_pane

0x4625,	// (0x000430f2) fep_china_uni_entry_pane_ParamLimits

0x4635,	// (0x00043102) popup_fep_china_uni_window_g1_ParamLimits

0x4645,	// (0x00043112) popup_fep_china_uni_window_g2_ParamLimits

0x4645,	// (0x00043112) popup_fep_china_uni_window_g2

0x0001,

0xf728,	// (0x0004e1f5) popup_fep_china_uni_window_g_ParamLimits

0xf728,	// (0x0004e1f5) popup_fep_china_uni_window_g

0xa38b,	// (0x00048e58) fep_china_uni_eep_pane_g1

0xa393,	// (0x00048e60) fep_china_uni_eep_pane_t1

0x9e06,	// (0x000488d3) aid_touch_area_size_smil_player

0x5005,	// (0x00043ad2) lc0_clock_pane

0x51ec,	// (0x00043cb9) status_pane_g5_ParamLimits

0x51ec,	// (0x00043cb9) status_pane_g5

0xc3fc,	// (0x0004aec9) popup_keymap_window

0x51aa,	// (0x00043c77) status_icon_pane

0x9ff4,	// (0x00048ac1) cell_ai5_widget_pane_g3_ParamLimits

0xa00b,	// (0x00048ad8) cell_ai5_widget_pane_g4_ParamLimits

0xa017,	// (0x00048ae4) cell_ai5_widget_pane_g5_ParamLimits

0xa03b,	// (0x00048b08) cell_ai5_widget_pane_g8_ParamLimits

0xa03b,	// (0x00048b08) cell_ai5_widget_pane_g8

0xa04f,	// (0x00048b1c) cell_ai5_widget_pane_g9_ParamLimits

0xa04f,	// (0x00048b1c) cell_ai5_widget_pane_g9

0xa063,	// (0x00048b30) cell_ai5_widget_pane_g10_ParamLimits

0xa063,	// (0x00048b30) cell_ai5_widget_pane_g10

0xa3a2,	// (0x00048e6f) status_icon_pane_g1

0x352c,	// (0x00041ff9) bg_popup_sub_pane_cp13

0xa3aa,	// (0x00048e77) popup_keymap_window_t1

0xd570,	// (0x0004c03d) control_pane_g6_ParamLimits

0xd570,	// (0x0004c03d) control_pane_g6

0xd57d,	// (0x0004c04a) control_pane_g7_ParamLimits

0xd57d,	// (0x0004c04a) control_pane_g7

0xd58a,	// (0x0004c057) control_pane_g8_ParamLimits

0xd58a,	// (0x0004c057) control_pane_g8

0xf1ef,	// (0x0004dcbc) dt_sta_controll_pane_ParamLimits

0xf1fc,	// (0x0004dcc9) dt_sta_indi_pane_ParamLimits

0xf209,	// (0x0004dcd6) dt_sta_title_pane_ParamLimits

0x3dc4,	// (0x00042891) aid_size_touch_scroll_bar_cale

0x134a,	// (0x0003fe17) popup_discreet_window_ParamLimits

0x134a,	// (0x0003fe17) popup_discreet_window

0xbf93,	// (0x0004aa60) popup_sk_window

0x59e2,	// (0x000444af) bg_popup_sub_pane_cp28_ParamLimits

0x59e2,	// (0x000444af) bg_popup_sub_pane_cp28

0xa3b8,	// (0x00048e85) popup_discreet_window_g1_ParamLimits

0xa3b8,	// (0x00048e85) popup_discreet_window_g1

0xa3d8,	// (0x00048ea5) popup_discreet_window_t1_ParamLimits

0xa3d8,	// (0x00048ea5) popup_discreet_window_t1

0xa3f6,	// (0x00048ec3) popup_discreet_window_t2_ParamLimits

0xa3f6,	// (0x00048ec3) popup_discreet_window_t2

0x0002,

0xfe75,	// (0x0004e942) popup_discreet_window_t_ParamLimits

0xfe75,	// (0x0004e942) popup_discreet_window_t

0x3353,	// (0x00041e20) popup_sk_window_g1

0x335d,	// (0x00041e2a) popup_sk_window_g2

0x0001,

0xfe7c,	// (0x0004e949) popup_sk_window_g

0x3367,	// (0x00041e34) popup_sk_window_t1

0x3375,	// (0x00041e42) popup_sk_window_t1_copy1

0x9fe4,	// (0x00048ab1) cell_ai5_widget_pane_g2_ParamLimits

0xa13d,	// (0x00048c0a) cell_ai5_widget_pane_t9_ParamLimits

0xa13d,	// (0x00048c0a) cell_ai5_widget_pane_t9

0x352c,	// (0x00041ff9) main_fep_fshwr2_pane

0xce88,	// (0x0004b955) aid_fshwr2_btn_pane

0xce99,	// (0x0004b966) aid_fshwr2_syb_pane

0xceaa,	// (0x0004b977) aid_fshwr2_txt_pane

0xceb6,	// (0x0004b983) fshwr2_func_candi_pane

0xced5,	// (0x0004b9a2) fshwr2_hwr_syb_pane

0xcef0,	// (0x0004b9bd) fshwr2_icf_pane

0x352c,	// (0x00041ff9) fshwr2_icf_bg_pane

0xa448,	// (0x00048f15) fshwr2_icf_pane_t1_ParamLimits

0xa448,	// (0x00048f15) fshwr2_icf_pane_t1

0x450b,	// (0x00042fd8) fshwr2_func_candi_pane_g1

0xf235,	// (0x0004dd02) fshwr2_func_candi_row_pane_ParamLimits

0xf235,	// (0x0004dd02) fshwr2_func_candi_row_pane

0xf24d,	// (0x0004dd1a) cell_fshwr2_syb_pane_ParamLimits

0xf24d,	// (0x0004dd1a) cell_fshwr2_syb_pane

0x7be5,	// (0x000466b2) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7be5,	// (0x000466b2) fshwr2_hwr_syb_pane_g1

0x352c,	// (0x00041ff9) bg_popup_call_pane_cp01

0xf267,	// (0x0004dd34) fshwr2_func_candi_cell_pane_ParamLimits

0xf267,	// (0x0004dd34) fshwr2_func_candi_cell_pane

0xa4b5,	// (0x00048f82) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa4b5,	// (0x00048f82) fshwr2_func_candi_cell_bg_pane

0xf292,	// (0x0004dd5f) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xf292,	// (0x0004dd5f) fshwr2_func_candi_cell_pane_g1

0xa4e9,	// (0x00048fb6) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa4e9,	// (0x00048fb6) fshwr2_func_candi_cell_pane_t1

0x352c,	// (0x00041ff9) bg_button_pane_cp08

0x4b13,	// (0x000435e0) cell_fshwr2_syb_bg_pane

0xf2ba,	// (0x0004dd87) cell_fshwr2_syb_bg_pane_g1

0xf2c2,	// (0x0004dd8f) cell_fshwr2_syb_bg_pane_t1

0x3e98,	// (0x00042965) main_tmo_pane

0xdb52,	// (0x0004c61f) uni_indicator_pane_g1_ParamLimits

0xdb69,	// (0x0004c636) uni_indicator_pane_g2_ParamLimits

0xdb7f,	// (0x0004c64c) uni_indicator_pane_g3_ParamLimits

0x652d,	// (0x00044ffa) uni_indicator_pane_g4_ParamLimits

0x652d,	// (0x00044ffa) uni_indicator_pane_g4

0x6541,	// (0x0004500e) uni_indicator_pane_g5_ParamLimits

0x6541,	// (0x0004500e) uni_indicator_pane_g5

0x6541,	// (0x0004500e) uni_indicator_pane_g6_ParamLimits

0x6541,	// (0x0004500e) uni_indicator_pane_g6

0xf927,	// (0x0004e3f4) uni_indicator_pane_g_ParamLimits

0xe5f6,	// (0x0004d0c3) popup_tmo_note_window_ParamLimits

0xe5f6,	// (0x0004d0c3) popup_tmo_note_window

0x3e98,	// (0x00042965) fshwr2_bg_pane

0xf2ab,	// (0x0004dd78) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xf2ab,	// (0x0004dd78) fshwr2_func_candi_cell_pane_g2

0x0001,

0x019a,	// (0x0003ec67) fshwr2_func_candi_cell_pane_g_ParamLimits

0x019a,	// (0x0003ec67) fshwr2_func_candi_cell_pane_g

0x7967,	// (0x00046434) bg_popup_window_pane_cp01

0xa513,	// (0x00048fe0) bg_popup_window_pane_g1_cp01

0xa51c,	// (0x00048fe9) bg_popup_window_pane_cp22_ParamLimits

0xa51c,	// (0x00048fe9) bg_popup_window_pane_cp22

0xa52a,	// (0x00048ff7) listscroll_tmo_link_pane_ParamLimits

0xa52a,	// (0x00048ff7) listscroll_tmo_link_pane

0xa56a,	// (0x00049037) popup_tmo_note_window_g1_ParamLimits

0xa56a,	// (0x00049037) popup_tmo_note_window_g1

0xa577,	// (0x00049044) tmo_note_info_pane_ParamLimits

0xa577,	// (0x00049044) tmo_note_info_pane

0xf2d1,	// (0x0004dd9e) list_tmo_note_info_pane_g1_ParamLimits

0xf2d1,	// (0x0004dd9e) list_tmo_note_info_pane_g1

0xa5a8,	// (0x00049075) list_tmo_note_info_pane_g2_ParamLimits

0xa5a8,	// (0x00049075) list_tmo_note_info_pane_g2

0x0001,

0xfe81,	// (0x0004e94e) list_tmo_note_info_pane_g_ParamLimits

0xfe81,	// (0x0004e94e) list_tmo_note_info_pane_g

0xa5c4,	// (0x00049091) list_tmo_note_info_text_pane_ParamLimits

0xa5c4,	// (0x00049091) list_tmo_note_info_text_pane

0xa645,	// (0x00049112) list_tmo_link_pane

0xa652,	// (0x0004911f) scroll_pane_cp20

0xa65f,	// (0x0004912c) list_single_tmo_link_pane_ParamLimits

0xa65f,	// (0x0004912c) list_single_tmo_link_pane

0xa66f,	// (0x0004913c) list_single_tmo_link_pane_t1

0xa67d,	// (0x0004914a) list_tmo_note_info_text_pane_t1_ParamLimits

0xa67d,	// (0x0004914a) list_tmo_note_info_text_pane_t1

0xd2cc,	// (0x0004bd99) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd2cc,	// (0x0004bd99) aid_size_touch_scroll_bar_cp01

0xbb5d,	// (0x0004a62a) aid_size_touch_slider_marker

0xbf83,	// (0x0004aa50) popup_settings_window_ParamLimits

0xbf83,	// (0x0004aa50) popup_settings_window

0x0958,	// (0x0003f425) popup_candi_list_indi_window

0x4eb5,	// (0x00043982) aid_touch_navi_pane_ParamLimits

0x2b66,	// (0x00041633) rs_clock_indi_pane

0x2b6f,	// (0x0004163c) sctrl_sk_bottom_pane_ParamLimits

0x2b80,	// (0x0004164d) sctrl_sk_top_pane_ParamLimits

0x2c67,	// (0x00041734) popup_fep_tooltip_window

0x9f5a,	// (0x00048a27) aid_size_cell_widget_grid_ParamLimits

0x9fcf,	// (0x00048a9c) cell_ai5_widget_pane_g1_ParamLimits

0x9fcf,	// (0x00048a9c) cell_ai5_widget_pane_g1

0xa023,	// (0x00048af0) cell_ai5_widget_pane_g6_ParamLimits

0xa02f,	// (0x00048afc) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe04,	// (0x0004e8d1) cell_ai5_widget_pane_g_ParamLimits

0xfe04,	// (0x0004e8d1) cell_ai5_widget_pane_g

0xa161,	// (0x00048c2e) cell_ai5_widget_pane_t10_ParamLimits

0xa161,	// (0x00048c2e) cell_ai5_widget_pane_t10

0xa17f,	// (0x00048c4c) grid_ai5_widget_pane_ParamLimits

0xa221,	// (0x00048cee) cell_contacts_ai5_widget_pane_ParamLimits

0xa221,	// (0x00048cee) cell_contacts_ai5_widget_pane

0xa40b,	// (0x00048ed8) popup_discreet_window_t3_ParamLimits

0xa40b,	// (0x00048ed8) popup_discreet_window_t3

0xcf08,	// (0x0004b9d5) popup_fshwr2_char_preview_window_ParamLimits

0xcf08,	// (0x0004b9d5) popup_fshwr2_char_preview_window

0xf2e8,	// (0x0004ddb5) tmo_note_info_pane_t1

0xf2fd,	// (0x0004ddca) tmo_note_info_pane_t2

0xf314,	// (0x0004dde1) tmo_note_info_pane_t3

0xa621,	// (0x000490ee) tmo_note_info_pane_t4

0xa633,	// (0x00049100) tmo_note_info_pane_t5

0x0004,

0xfe86,	// (0x0004e953) tmo_note_info_pane_t

0xa645,	// (0x00049112) list_tmo_link_pane_ParamLimits

0xa652,	// (0x0004911f) scroll_pane_cp20_ParamLimits

0x352c,	// (0x00041ff9) bg_popup_fep_char_preview_window_cp01

0xa696,	// (0x00049163) popup_fshwr2_char_preview_window_t1

0xa6a4,	// (0x00049171) popup_candi_list_indi_window_g1

0xa6ad,	// (0x0004917a) bg_cell_contacts_ai5_widget_pane

0xa6b9,	// (0x00049186) cell_contacts_ai5_widget_pane_g1

0x8047,	// (0x00046b14) cell_contacts_ai5_widget_pane_g2

0xa6cc,	// (0x00049199) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe91,	// (0x0004e95e) cell_contacts_ai5_widget_pane_g

0xa6de,	// (0x000491ab) cell_contacts_ai5_widget_pane_t1

0x3e98,	// (0x00042965) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf38e,	// (0x0004de5b) settings_container_pane

0x4b13,	// (0x000435e0) listscroll_set_pane_copy1

0x7048,	// (0x00045b15) scroll_pane_cp121_copy1

0xa761,	// (0x0004922e) set_content_pane_copy1

0xf39a,	// (0x0004de67) aid_height_set_list_copy1_ParamLimits

0xf39a,	// (0x0004de67) aid_height_set_list_copy1

0x677b,	// (0x00045248) aid_size_parent_copy1_ParamLimits

0x677b,	// (0x00045248) aid_size_parent_copy1

0xf3a6,	// (0x0004de73) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf3a6,	// (0x0004de73) button_value_adjust_pane_cp6_copy1

0x4e53,	// (0x00043920) list_highlight_pane_cp2_copy1_ParamLimits

0x4e53,	// (0x00043920) list_highlight_pane_cp2_copy1

0xf3ba,	// (0x0004de87) list_set_pane_copy1_ParamLimits

0xf3ba,	// (0x0004de87) list_set_pane_copy1

0xf329,	// (0x0004ddf6) main_pane_set_t1_copy1_ParamLimits

0xf329,	// (0x0004ddf6) main_pane_set_t1_copy1

0xf363,	// (0x0004de30) main_pane_set_t2_copy1_ParamLimits

0xf363,	// (0x0004de30) main_pane_set_t2_copy1

0xf467,	// (0x0004df34) main_pane_set_t3_copy1

0xf475,	// (0x0004df42) main_pane_set_t4_copy1

0xf382,	// (0x0004de4f) set_content_pane_g1_copy1_ParamLimits

0xf382,	// (0x0004de4f) set_content_pane_g1_copy1

0xf483,	// (0x0004df50) setting_code_pane_copy1

0xa85a,	// (0x00049327) setting_slider_graphic_pane_copy1

0xa85a,	// (0x00049327) setting_slider_pane_copy1

0xa85a,	// (0x00049327) setting_text_pane_copy1

0xa85a,	// (0x00049327) setting_volume_pane_copy1

0xf483,	// (0x0004df50) settings_code_pane_cp2_copy1

0xf48b,	// (0x0004df58) settings_code_pane_cp_copy1_ParamLimits

0xf48b,	// (0x0004df58) settings_code_pane_cp_copy1

0xcf20,	// (0x0004b9ed) volume_set_pane_copy1

0xf49f,	// (0x0004df6c) volume_set_pane_g10_copy1

0xf4a7,	// (0x0004df74) volume_set_pane_g1_copy1

0xf4af,	// (0x0004df7c) volume_set_pane_g2_copy1

0xf4b7,	// (0x0004df84) volume_set_pane_g3_copy1

0xf4bf,	// (0x0004df8c) volume_set_pane_g4_copy1

0xf4c7,	// (0x0004df94) volume_set_pane_g5_copy1

0xf4cf,	// (0x0004df9c) volume_set_pane_g6_copy1

0xf4d7,	// (0x0004dfa4) volume_set_pane_g7_copy1

0xf4df,	// (0x0004dfac) volume_set_pane_g8_copy1

0xf4e7,	// (0x0004dfb4) volume_set_pane_g9_copy1

0x3620,	// (0x000420ed) bg_set_opt_pane_cp_copy1_ParamLimits

0x3620,	// (0x000420ed) bg_set_opt_pane_cp_copy1

0x340c,	// (0x00041ed9) setting_slider_pane_t1_copy1_ParamLimits

0x340c,	// (0x00041ed9) setting_slider_pane_t1_copy1

0xcf28,	// (0x0004b9f5) setting_slider_pane_t2_copy1_ParamLimits

0xcf28,	// (0x0004b9f5) setting_slider_pane_t2_copy1

0xcf42,	// (0x0004ba0f) setting_slider_pane_t3_copy1_ParamLimits

0xcf42,	// (0x0004ba0f) setting_slider_pane_t3_copy1

0xcf5a,	// (0x0004ba27) slider_set_pane_copy1_ParamLimits

0xcf5a,	// (0x0004ba27) slider_set_pane_copy1

0x3ee7,	// (0x000429b4) set_opt_bg_pane_g1_copy2

0x3eef,	// (0x000429bc) set_opt_bg_pane_g2_copy2

0xa8c6,	// (0x00049393) set_opt_bg_pane_g3_copy2

0x3eff,	// (0x000429cc) set_opt_bg_pane_g4_copy2

0x3f07,	// (0x000429d4) set_opt_bg_pane_g5_copy2

0x3f0f,	// (0x000429dc) set_opt_bg_pane_g6_copy2

0xf4ef,	// (0x0004dfbc) set_opt_bg_pane_g7_copy2

0xa8d8,	// (0x000493a5) set_opt_bg_pane_g8_copy2

0xa8e2,	// (0x000493af) set_opt_bg_pane_g9_copy2

0xa8ec,	// (0x000493b9) aid_size_touch_slider_mark_copy1_ParamLimits

0xa8ec,	// (0x000493b9) aid_size_touch_slider_mark_copy1

0xa900,	// (0x000493cd) slider_set_pane_g1_copy1

0xa909,	// (0x000493d6) slider_set_pane_g2_copy1

0x66fa,	// (0x000451c7) slider_set_pane_g3_copy1_ParamLimits

0x66fa,	// (0x000451c7) slider_set_pane_g3_copy1

0x670e,	// (0x000451db) slider_set_pane_g4_copy1_ParamLimits

0x670e,	// (0x000451db) slider_set_pane_g4_copy1

0x6726,	// (0x000451f3) slider_set_pane_g5_copy1_ParamLimits

0x6726,	// (0x000451f3) slider_set_pane_g5_copy1

0x66fa,	// (0x000451c7) slider_set_pane_g6_copy1_ParamLimits

0x66fa,	// (0x000451c7) slider_set_pane_g6_copy1

0xf4f7,	// (0x0004dfc4) slider_set_pane_g7_copy1_ParamLimits

0xf4f7,	// (0x0004dfc4) slider_set_pane_g7_copy1

0x3540,	// (0x0004200d) bg_set_opt_pane_cp2_copy1

0xa927,	// (0x000493f4) setting_slider_graphic_pane_g1_copy1

0xf50d,	// (0x0004dfda) setting_slider_graphic_pane_t1_copy1

0xf51d,	// (0x0004dfea) setting_slider_graphic_pane_t2_copy1

0xf52d,	// (0x0004dffa) slider_set_pane_cp_copy1

0xa960,	// (0x0004942d) input_focus_pane_cp1_copy1

0xa969,	// (0x00049436) list_set_text_pane_copy1

0xa971,	// (0x0004943e) setting_text_pane_g1_copy1

0x01f6,	// (0x0003ecc3) set_text_pane_t1_copy1

0xa960,	// (0x0004942d) input_focus_pane_cp2_copy1

0xa971,	// (0x0004943e) setting_code_pane_g1_copy1

0xf535,	// (0x0004e002) setting_code_pane_t1_copy1

0x6e73,	// (0x00045940) list_set_graphic_pane_copy1

0x3540,	// (0x0004200d) bg_set_opt_pane_cp4_copy1

0xd49f,	// (0x0004bf6c) list_set_graphic_pane_g1_copy1_ParamLimits

0xd49f,	// (0x0004bf6c) list_set_graphic_pane_g1_copy1

0xf543,	// (0x0004e010) list_set_graphic_pane_g2_copy1

0xd4b7,	// (0x0004bf84) list_set_graphic_pane_t1_copy1_ParamLimits

0xd4b7,	// (0x0004bf84) list_set_graphic_pane_t1_copy1

0x7967,	// (0x00046434) rs_clock_indi_pane_g1

0xa9a2,	// (0x0004946f) rs_clock_indi_pane_t1

0xa9b0,	// (0x0004947d) rs_indi_pane

0xa9b8,	// (0x00049485) rs_indi_pane_g1

0xa9c1,	// (0x0004948e) rs_indi_pane_g2

0xa9ca,	// (0x00049497) rs_indi_pane_g3

0x0002,

0xfe98,	// (0x0004e965) rs_indi_pane_g

0x4b13,	// (0x000435e0) bg_popup_preview_window_pane_cp03

0xa9d3,	// (0x000494a0) popup_fep_tooltip_window_t1

0x85e3,	// (0x000470b0) popup_note2_window_g2_ParamLimits

0x85e3,	// (0x000470b0) popup_note2_window_g2

0x0001,

0xfc54,	// (0x0004e721) popup_note2_window_g_ParamLimits

0xfc54,	// (0x0004e721) popup_note2_window_g

0x8ade,	// (0x000475ab) bg_popup_sub_pane_cp11_ParamLimits

0x8aeb,	// (0x000475b8) cell_ai3_links_pane_g1_ParamLimits

0x8b02,	// (0x000475cf) cell_ai3_links_pane_t1

0x01f6,	// (0x0003ecc3) set_text_pane_t1_copy1_ParamLimits

0x4a24,	// (0x000434f1) cell_graphic_popup_pane_cp2_ParamLimits

0x4a24,	// (0x000434f1) cell_graphic_popup_pane_cp2

0xa9e1,	// (0x000494ae) cell_graphic_popup_pane_g1_cp2

0x3bd7,	// (0x000426a4) cell_graphic_popup_pane_g2_cp2

0xa9e9,	// (0x000494b6) cell_graphic_popup_pane_g3_cp2

0xa9f1,	// (0x000494be) cell_graphic_popup_pane_t2_cp2

0x3be8,	// (0x000426b5) grid_highlight_pane_cp3_cp2

0x422c,	// (0x00042cf9) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3e98,	// (0x00042965) main_tmo_pane_ParamLimits

0xe5ea,	// (0x0004d0b7) popup_tmo_big_image_note_window

0x9fbe,	// (0x00048a8b) cell_ai5_widget_list_pane

0x9fc6,	// (0x00048a93) cell_ai5_widget_lrg_icon_pane

0xf2e8,	// (0x0004ddb5) tmo_note_info_pane_t1_ParamLimits

0xf2fd,	// (0x0004ddca) tmo_note_info_pane_t2_ParamLimits

0xf314,	// (0x0004dde1) tmo_note_info_pane_t3_ParamLimits

0xa621,	// (0x000490ee) tmo_note_info_pane_t4_ParamLimits

0xa633,	// (0x00049100) tmo_note_info_pane_t5_ParamLimits

0xfe86,	// (0x0004e953) tmo_note_info_pane_t_ParamLimits

0xf38e,	// (0x0004de5b) settings_container_pane_ParamLimits

0xa958,	// (0x00049425) indicator_popup_pane_cp5

0xa958,	// (0x00049425) indicator_popup_pane_cp6

0x6e73,	// (0x00045940) list_set_graphic_pane_copy1_ParamLimits

0x352c,	// (0x00041ff9) bg_popup_window_pane_cp23

0xa9ff,	// (0x000494cc) popup_tmo_big_image_note_window_g1

0xaa09,	// (0x000494d6) popup_tmo_big_image_note_window_t1

0xaa19,	// (0x000494e6) popup_tmo_big_image_note_window_t2

0xaa29,	// (0x000494f6) popup_tmo_big_image_note_window_t3

0x0002,

0xfe9f,	// (0x0004e96c) popup_tmo_big_image_note_window_t

0x7967,	// (0x00046434) cell_ai5_widget_lrg_icon_pane_g1

0xaa39,	// (0x00049506) cell_ai5_widget_lrg_icon_pane_t1

0xaa47,	// (0x00049514) cell_ai5_widget_list_row_pane_ParamLimits

0xaa47,	// (0x00049514) cell_ai5_widget_list_row_pane

0xaa60,	// (0x0004952d) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xaa60,	// (0x0004952d) cell_ai5_widget_list_row_pane_g1

0xaa6d,	// (0x0004953a) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xaa6d,	// (0x0004953a) cell_ai5_widget_list_row_pane_t1

0xaa9e,	// (0x0004956b) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xaa9e,	// (0x0004956b) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfea6,	// (0x0004e973) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfea6,	// (0x0004e973) cell_ai5_widget_list_row_pane_t

0x352c,	// (0x00041ff9) main_fep_vtchi_ss_pane

0x3481,	// (0x00041f4e) popup_fep_char_pre_window

0x3489,	// (0x00041f56) popup_fep_ituss_window

0x34aa,	// (0x00041f77) popup_fep_vkbss_window

0xaac6,	// (0x00049593) grid_vkbss_keypad_pane_ParamLimits

0xaac6,	// (0x00049593) grid_vkbss_keypad_pane

0xaad6,	// (0x000495a3) ituss_keypad_pane

0x34d5,	// (0x00041fa2) aid_vkbss_key_offset_ParamLimits

0x34d5,	// (0x00041fa2) aid_vkbss_key_offset

0x34e1,	// (0x00041fae) cell_vkbss_key_pane_ParamLimits

0x34e1,	// (0x00041fae) cell_vkbss_key_pane

0xaae6,	// (0x000495b3) bg_cell_vkbss_key_g1_ParamLimits

0xaae6,	// (0x000495b3) bg_cell_vkbss_key_g1

0xaaf2,	// (0x000495bf) cell_vkbss_key_3p_pane_ParamLimits

0xaaf2,	// (0x000495bf) cell_vkbss_key_3p_pane

0xab0c,	// (0x000495d9) cell_vkbss_key_g1_ParamLimits

0xab0c,	// (0x000495d9) cell_vkbss_key_g1

0xab26,	// (0x000495f3) cell_vkbss_key_t1_ParamLimits

0xab26,	// (0x000495f3) cell_vkbss_key_t1

0x34f7,	// (0x00041fc4) cell_ituss_key_pane_ParamLimits

0x34f7,	// (0x00041fc4) cell_ituss_key_pane

0xab51,	// (0x0004961e) bg_cell_ituss_key_g1_ParamLimits

0xab51,	// (0x0004961e) bg_cell_ituss_key_g1

0xab5d,	// (0x0004962a) cell_ituss_key_pane_g1_ParamLimits

0xab5d,	// (0x0004962a) cell_ituss_key_pane_g1

0xab77,	// (0x00049644) cell_ituss_key_pane_g2_ParamLimits

0xab77,	// (0x00049644) cell_ituss_key_pane_g2

0x0001,

0xfead,	// (0x0004e97a) cell_ituss_key_pane_g_ParamLimits

0xfead,	// (0x0004e97a) cell_ituss_key_pane_g

0xaba5,	// (0x00049672) cell_ituss_key_t1_ParamLimits

0xaba5,	// (0x00049672) cell_ituss_key_t1

0xabdf,	// (0x000496ac) cell_ituss_key_t2_ParamLimits

0xabdf,	// (0x000496ac) cell_ituss_key_t2

0xac10,	// (0x000496dd) cell_ituss_key_t3_ParamLimits

0xac10,	// (0x000496dd) cell_ituss_key_t3

0xac4a,	// (0x00049717) cell_ituss_key_t4_ParamLimits

0xac4a,	// (0x00049717) cell_ituss_key_t4

0x0003,

0xfeb2,	// (0x0004e97f) cell_ituss_key_t_ParamLimits

0xfeb2,	// (0x0004e97f) cell_ituss_key_t

0xac84,	// (0x00049751) cell_vkbss_key_3p_pane_g1

0xac8c,	// (0x00049759) cell_vkbss_key_3p_pane_g2

0xac94,	// (0x00049761) cell_vkbss_key_3p_pane_g3

0x0002,

0xfebb,	// (0x0004e988) cell_vkbss_key_3p_pane_g

0x352c,	// (0x00041ff9) bg_popup_fep_char_preview_window_cp02

0xac9c,	// (0x00049769) popup_fep_char_pre_window_t1

0xf1bf,	// (0x0004dc8c) main_ai5_sk_pane

0xa6ad,	// (0x0004917a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa6b9,	// (0x00049186) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8047,	// (0x00046b14) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa6cc,	// (0x00049199) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe91,	// (0x0004e95e) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa6de,	// (0x000491ab) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3e98,	// (0x00042965) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf54b,	// (0x0004e018) main_ai5_sk_pane_g1

0x581b,	// (0x000442e8) popup_query_code_window_g1

0x349f,	// (0x00041f6c) popup_fep_vkb_icf_pane

0x34b3,	// (0x00041f80) popup_fep_vtchi_icf_pane

0x3e98,	// (0x00042965) bg_icf_pane

0xacb4,	// (0x00049781) list_vkb_icf_pane

0x3e98,	// (0x00042965) bg_icf_pane_cp01

0xacc0,	// (0x0004978d) vtchi_icf_list_pane

0xacd1,	// (0x0004979e) list_vkb_icf_pane_t1_ParamLimits

0xacd1,	// (0x0004979e) list_vkb_icf_pane_t1

0xace7,	// (0x000497b4) vtchi_icf_list_pane_t1_ParamLimits

0xace7,	// (0x000497b4) vtchi_icf_list_pane_t1

0x3489,	// (0x00041f56) popup_fep_ituss_window_ParamLimits

0x34b3,	// (0x00041f80) popup_fep_vtchi_icf_pane_ParamLimits

0xaad6,	// (0x000495a3) ituss_keypad_pane_ParamLimits

0x34c9,	// (0x00041f96) ituss_sks_pane

0x3e98,	// (0x00042965) bg_icf_pane_ParamLimits

0x3472,	// (0x00041f3f) icf_edit_indi_pane_ParamLimits

0x3472,	// (0x00041f3f) icf_edit_indi_pane

0xacb4,	// (0x00049781) list_vkb_icf_pane_ParamLimits

0x3e98,	// (0x00042965) bg_icf_pane_cp01_ParamLimits

0x3472,	// (0x00041f3f) icf_edit_indi_pane_cp01_ParamLimits

0x3472,	// (0x00041f3f) icf_edit_indi_pane_cp01

0xacc8,	// (0x00049795) vtchi_query_pane

0x7be5,	// (0x000466b2) icf_edit_indi_pane_g1_ParamLimits

0x7be5,	// (0x000466b2) icf_edit_indi_pane_g1

0xad6b,	// (0x00049838) icf_edit_indi_pane_g2_ParamLimits

0xad6b,	// (0x00049838) icf_edit_indi_pane_g2

0x0001,

0xfed3,	// (0x0004e9a0) icf_edit_indi_pane_g_ParamLimits

0xfed3,	// (0x0004e9a0) icf_edit_indi_pane_g

0xad7a,	// (0x00049847) icf_edit_indi_pane_t1

0xad01,	// (0x000497ce) bg_input_focus_pane_cp042

0x3dbb,	// (0x00042888) vtchi_button_pane

0xad0a,	// (0x000497d7) vtchi_query_pane_t1

0xad18,	// (0x000497e5) vtchi_query_pane_t2

0xad26,	// (0x000497f3) vtchi_query_pane_t3

0x0002,

0xfec2,	// (0x0004e98f) vtchi_query_pane_t

0x352c,	// (0x00041ff9) bg_button_pane_cp13

0xad34,	// (0x00049801) vtchi_button_pane_g1

0xad3c,	// (0x00049809) ituss_sks_pane_g1

0xad47,	// (0x00049814) ituss_sks_pane_g2

0x0001,

0xfec9,	// (0x0004e996) ituss_sks_pane_g

0xad4f,	// (0x0004981c) ituss_sks_pane_t1

0xad5d,	// (0x0004982a) ituss_sks_pane_t2

0x0001,

0xfece,	// (0x0004e99b) ituss_sks_pane_t

0x73d2,	// (0x00045e9f) indicator_nsta_pane_cp_g1

0x73db,	// (0x00045ea8) indicator_nsta_pane_cp_g2

0x73e3,	// (0x00045eb0) indicator_nsta_pane_cp_g3

0x73eb,	// (0x00045eb8) indicator_nsta_pane_cp_g4

0x73eb,	// (0x00045eb8) indicator_nsta_pane_cp_g5

0x73eb,	// (0x00045eb8) indicator_nsta_pane_cp_g6

0x0005,

0xfa9e,	// (0x0004e56b) indicator_nsta_pane_cp_g

0xefd1,	// (0x0004da9e) cell_graphic2_pane_t2_ParamLimits

0xefd1,	// (0x0004da9e) cell_graphic2_pane_t2

0x0001,

0x00a6,	// (0x0003eb73) cell_graphic2_pane_t_ParamLimits

0x00a6,	// (0x0003eb73) cell_graphic2_pane_t

0xf007,	// (0x0004dad4) cell_graphic2_control_pane_t1

0xd473,	// (0x0004bf40) signal_pane_g3_ParamLimits

0xd473,	// (0x0004bf40) signal_pane_g3

0xd487,	// (0x0004bf54) signal_pane_g4_ParamLimits

0xd487,	// (0x0004bf54) signal_pane_g4

0xaab0,	// (0x0004957d) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xaab0,	// (0x0004957d) cell_ai5_widget_list_row_pane_t3

0xab93,	// (0x00049660) cell_ituss_key_pane_t1_ParamLimits

0xab93,	// (0x00049660) cell_ituss_key_pane_t1

0x5462,	// (0x00043f2f) form_field_data_wide_pane_vc_t2_ParamLimits

0x5462,	// (0x00043f2f) form_field_data_wide_pane_vc_t2

0x5476,	// (0x00043f43) form_field_data_wide_pane_vc_t3_ParamLimits

0x5476,	// (0x00043f43) form_field_data_wide_pane_vc_t3

0x0002,

0xf80f,	// (0x0004e2dc) form_field_data_wide_pane_vc_t_ParamLimits

0xf80f,	// (0x0004e2dc) form_field_data_wide_pane_vc_t

0x708a,	// (0x00045b57) form_field_slider_wide_pane_vc_t3_ParamLimits

0x708a,	// (0x00045b57) form_field_slider_wide_pane_vc_t3

0x7168,	// (0x00045c35) form_field_popup_wide_pane_vc_t2_ParamLimits

0x7168,	// (0x00045c35) form_field_popup_wide_pane_vc_t2

0x717f,	// (0x00045c4c) form_field_popup_wide_pane_vc_t3_ParamLimits

0x717f,	// (0x00045c4c) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa8d,	// (0x0004e55a) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x0004e55a) form_field_popup_wide_pane_vc_t

0xce88,	// (0x0004b955) aid_fshwr2_btn_pane_ParamLimits

0xce99,	// (0x0004b966) aid_fshwr2_syb_pane_ParamLimits

0xceaa,	// (0x0004b977) aid_fshwr2_txt_pane_ParamLimits

0x3e98,	// (0x00042965) fshwr2_bg_pane_ParamLimits

0xceb6,	// (0x0004b983) fshwr2_func_candi_pane_ParamLimits

0xced5,	// (0x0004b9a2) fshwr2_hwr_syb_pane_ParamLimits

0xcef0,	// (0x0004b9bd) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Large
