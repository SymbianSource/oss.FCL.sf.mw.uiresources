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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00000000 };

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
0xb460,	// (0x0000b460) Screen

0xb46c,	// (0x0000b46c) application_window_ParamLimits

0xb46c,	// (0x0000b46c) application_window

0x002e,	// (0x0000002e) screen_g1

0xb4a4,	// (0x0000b4a4) area_bottom_pane_ParamLimits

0xb4a4,	// (0x0000b4a4) area_bottom_pane

0x0144,	// (0x00000144) area_top_pane_ParamLimits

0x0144,	// (0x00000144) area_top_pane

0x01d8,	// (0x000001d8) main_pane_ParamLimits

0x01d8,	// (0x000001d8) main_pane

0x0293,	// (0x00000293) misc_graphics

0xcb36,	// (0x0000cb36) battery_pane_ParamLimits

0xcb36,	// (0x0000cb36) battery_pane

0x404d,	// (0x0000404d) bg_status_flat_pane_g8

0x4055,	// (0x00004055) bg_status_flat_pane_g9

0x31bd,	// (0x000031bd) context_pane_ParamLimits

0x31bd,	// (0x000031bd) context_pane

0xcca1,	// (0x0000cca1) navi_pane_ParamLimits

0xcca1,	// (0x0000cca1) navi_pane

0xcd1f,	// (0x0000cd1f) signal_pane_ParamLimits

0xcd1f,	// (0x0000cd1f) signal_pane

0x0008,

0xadb6,	// (0x0000adb6) bg_status_flat_pane_g

0xcdaf,	// (0x0000cdaf) status_pane_g1_ParamLimits

0xcdaf,	// (0x0000cdaf) status_pane_g1

0xcdc5,	// (0x0000cdc5) status_pane_g2_ParamLimits

0xcdc5,	// (0x0000cdc5) status_pane_g2

0x33dc,	// (0x000033dc) status_pane_g3_ParamLimits

0x33dc,	// (0x000033dc) status_pane_g3

0x0004,

0xf357,	// (0x0000f357) status_pane_g_ParamLimits

0xf357,	// (0x0000f357) status_pane_g

0xcdd1,	// (0x0000cdd1) title_pane_ParamLimits

0xcdd1,	// (0x0000cdd1) title_pane

0xce34,	// (0x0000ce34) uni_indicator_pane_ParamLimits

0xce34,	// (0x0000ce34) uni_indicator_pane

0x2a66,	// (0x00002a66) bg_list_pane_ParamLimits

0x2a66,	// (0x00002a66) bg_list_pane

0x2a86,	// (0x00002a86) find_pane

0xc40d,	// (0x0000c40d) listscroll_app_pane_ParamLimits

0xc40d,	// (0x0000c40d) listscroll_app_pane

0x2a9a,	// (0x00002a9a) listscroll_form_pane

0x2aa2,	// (0x00002aa2) listscroll_gen_pane_ParamLimits

0x2aa2,	// (0x00002aa2) listscroll_gen_pane

0x2ab6,	// (0x00002ab6) listscroll_set_pane

0x4e01,	// (0x00004e01) main_idle_act_pane

0x255f,	// (0x0000255f) main_idle_trad_pane

0x255f,	// (0x0000255f) main_list_empty_pane

0x2ad0,	// (0x00002ad0) main_midp_pane

0x2adc,	// (0x00002adc) main_pane_g1_ParamLimits

0x2adc,	// (0x00002adc) main_pane_g1

0xc41d,	// (0x0000c41d) popup_ai_message_window_ParamLimits

0xc41d,	// (0x0000c41d) popup_ai_message_window

0xc4ae,	// (0x0000c4ae) popup_fep_china_uni_window_ParamLimits

0xc4ae,	// (0x0000c4ae) popup_fep_china_uni_window

0x2bf0,	// (0x00002bf0) popup_fep_japan_candidate_window_ParamLimits

0x2bf0,	// (0x00002bf0) popup_fep_japan_candidate_window

0x2c0e,	// (0x00002c0e) popup_fep_japan_predictive_window_ParamLimits

0x2c0e,	// (0x00002c0e) popup_fep_japan_predictive_window

0xc508,	// (0x0000c508) popup_find_window

0xc525,	// (0x0000c525) popup_grid_graphic_window_ParamLimits

0xc525,	// (0x0000c525) popup_grid_graphic_window

0x2c73,	// (0x00002c73) popup_large_graphic_colour_window

0xc5bd,	// (0x0000c5bd) popup_menu_window_ParamLimits

0xc5bd,	// (0x0000c5bd) popup_menu_window

0xc789,	// (0x0000c789) popup_note_image_window

0xc74f,	// (0x0000c74f) popup_note_wait_window_ParamLimits

0xc74f,	// (0x0000c74f) popup_note_wait_window

0xc7a1,	// (0x0000c7a1) popup_note_window_ParamLimits

0xc7a1,	// (0x0000c7a1) popup_note_window

0xc847,	// (0x0000c847) popup_query_code_window_ParamLimits

0xc847,	// (0x0000c847) popup_query_code_window

0x2ebd,	// (0x00002ebd) popup_query_data_code_window_ParamLimits

0x2ebd,	// (0x00002ebd) popup_query_data_code_window

0xc881,	// (0x0000c881) popup_query_data_window_ParamLimits

0xc881,	// (0x0000c881) popup_query_data_window

0xc8fd,	// (0x0000c8fd) popup_query_sat_info_window_ParamLimits

0xc8fd,	// (0x0000c8fd) popup_query_sat_info_window

0xc994,	// (0x0000c994) popup_snote_single_graphic_window_ParamLimits

0xc994,	// (0x0000c994) popup_snote_single_graphic_window

0xc994,	// (0x0000c994) popup_snote_single_text_window_ParamLimits

0xc994,	// (0x0000c994) popup_snote_single_text_window

0x2f40,	// (0x00002f40) popup_sub_window_general

0x306e,	// (0x0000306e) popup_window_general_ParamLimits

0x306e,	// (0x0000306e) popup_window_general

0x3083,	// (0x00003083) power_save_pane

0xc275,	// (0x0000c275) control_pane_g1_ParamLimits

0xc275,	// (0x0000c275) control_pane_g1

0xc29e,	// (0x0000c29e) control_pane_g2_ParamLimits

0xc29e,	// (0x0000c29e) control_pane_g2

0x290d,	// (0x0000290d) control_pane_g3_ParamLimits

0x290d,	// (0x0000290d) control_pane_g3

0x0007,

0xf33f,	// (0x0000f33f) control_pane_g_ParamLimits

0xf33f,	// (0x0000f33f) control_pane_g

0xc306,	// (0x0000c306) control_pane_t1_ParamLimits

0xc306,	// (0x0000c306) control_pane_t1

0xc364,	// (0x0000c364) control_pane_t2_ParamLimits

0xc364,	// (0x0000c364) control_pane_t2

0x0002,

0xf350,	// (0x0000f350) control_pane_t_ParamLimits

0xf350,	// (0x0000f350) control_pane_t

0xc1ce,	// (0x0000c1ce) navi_navi_volume_pane_cp1

0xc1d6,	// (0x0000c1d6) status_small_icon_pane

0x27f4,	// (0x000027f4) status_small_pane_g1_ParamLimits

0x27f4,	// (0x000027f4) status_small_pane_g1

0xc1de,	// (0x0000c1de) status_small_pane_g2_ParamLimits

0xc1de,	// (0x0000c1de) status_small_pane_g2

0xc1ea,	// (0x0000c1ea) status_small_pane_g3_ParamLimits

0xc1ea,	// (0x0000c1ea) status_small_pane_g3

0xc1f6,	// (0x0000c1f6) status_small_pane_g4_ParamLimits

0xc1f6,	// (0x0000c1f6) status_small_pane_g4

0xc202,	// (0x0000c202) status_small_pane_g5_ParamLimits

0xc202,	// (0x0000c202) status_small_pane_g5

0xc210,	// (0x0000c210) status_small_pane_g6_ParamLimits

0xc210,	// (0x0000c210) status_small_pane_g6

0x0007,

0xf32e,	// (0x0000f32e) status_small_pane_g_ParamLimits

0xf32e,	// (0x0000f32e) status_small_pane_g

0xc23f,	// (0x0000c23f) status_small_pane_t1

0xc261,	// (0x0000c261) status_small_wait_pane_ParamLimits

0xc261,	// (0x0000c261) status_small_wait_pane

0xbff3,	// (0x0000bff3) aid_levels_signal_ParamLimits

0xbff3,	// (0x0000bff3) aid_levels_signal

0xc00b,	// (0x0000c00b) signal_pane_g1_ParamLimits

0xc00b,	// (0x0000c00b) signal_pane_g1

0xc026,	// (0x0000c026) signal_pane_g2_ParamLimits

0xc026,	// (0x0000c026) signal_pane_g2

0x0003,

0xf309,	// (0x0000f309) signal_pane_g_ParamLimits

0xf309,	// (0x0000f309) signal_pane_g

0x1e1e,	// (0x00001e1e) context_pane_g1

0xb682,	// (0x0000b682) title_pane_g1

0xb6b9,	// (0x0000b6b9) title_pane_t1

0x04c1,	// (0x000004c1) title_pane_t2

0x04e7,	// (0x000004e7) title_pane_t3

0x0002,

0xf253,	// (0x0000f253) title_pane_t

0xce5c,	// (0x0000ce5c) aid_levels_battery_ParamLimits

0xce5c,	// (0x0000ce5c) aid_levels_battery

0xce78,	// (0x0000ce78) battery_pane_g1_ParamLimits

0xce78,	// (0x0000ce78) battery_pane_g1

0xce95,	// (0x0000ce95) battery_pane_g2_ParamLimits

0xce95,	// (0x0000ce95) battery_pane_g2

0x0001,

0xf362,	// (0x0000f362) battery_pane_g_ParamLimits

0xf362,	// (0x0000f362) battery_pane_g

0xd1f7,	// (0x0000d1f7) uni_indicator_pane_g1

0xd20d,	// (0x0000d20d) uni_indicator_pane_g2

0xd223,	// (0x0000d223) uni_indicator_pane_g3

0x0005,

0xf399,	// (0x0000f399) uni_indicator_pane_g

0x23dd,	// (0x000023dd) navi_icon_pane_ParamLimits

0x23dd,	// (0x000023dd) navi_icon_pane

0x231b,	// (0x0000231b) navi_midp_pane

0x23f9,	// (0x000023f9) navi_navi_pane

0x2403,	// (0x00002403) navi_text_pane_ParamLimits

0x2403,	// (0x00002403) navi_text_pane

0x002e,	// (0x0000002e) status_small_wait_pane_g1

0x09b5,	// (0x000009b5) status_small_wait_pane_g2

0x0001,

0xae59,	// (0x0000ae59) status_small_wait_pane_g

0x4806,	// (0x00004806) navi_navi_icon_text_pane

0x480e,	// (0x0000480e) navi_navi_pane_g1_ParamLimits

0x480e,	// (0x0000480e) navi_navi_pane_g1

0x4820,	// (0x00004820) navi_navi_pane_g2_ParamLimits

0x4820,	// (0x00004820) navi_navi_pane_g2

0x0001,

0xae27,	// (0x0000ae27) navi_navi_pane_g_ParamLimits

0xae27,	// (0x0000ae27) navi_navi_pane_g

0x4832,	// (0x00004832) navi_navi_tabs_pane

0x483b,	// (0x0000483b) navi_navi_text_pane

0x4806,	// (0x00004806) navi_navi_volume_pane

0x47e2,	// (0x000047e2) navi_text_pane_t1

0x47d6,	// (0x000047d6) navi_icon_pane_g1

0x4729,	// (0x00004729) navi_navi_text_pane_t1

0x4718,	// (0x00004718) navi_navi_volume_pane_g1

0xd1c1,	// (0x0000d1c1) volume_small_pane

0xd12b,	// (0x0000d12b) navi_navi_icon_text_pane_g1

0x4686,	// (0x00004686) navi_navi_icon_text_pane_t1

0x23f9,	// (0x000023f9) navi_tabs_2_long_pane

0x23f9,	// (0x000023f9) navi_tabs_2_pane

0x23f9,	// (0x000023f9) navi_tabs_3_long_pane

0x23f9,	// (0x000023f9) navi_tabs_3_pane

0x23f9,	// (0x000023f9) navi_tabs_4_pane

0xd10b,	// (0x0000d10b) tabs_2_active_pane_ParamLimits

0xd10b,	// (0x0000d10b) tabs_2_active_pane

0xd11b,	// (0x0000d11b) tabs_2_passive_pane_ParamLimits

0xd11b,	// (0x0000d11b) tabs_2_passive_pane

0xd0d9,	// (0x0000d0d9) tabs_3_active_pane_ParamLimits

0xd0d9,	// (0x0000d0d9) tabs_3_active_pane

0xd0e9,	// (0x0000d0e9) tabs_3_passive_pane_ParamLimits

0xd0e9,	// (0x0000d0e9) tabs_3_passive_pane

0xd0fa,	// (0x0000d0fa) tabs_3_passive_pane_cp_ParamLimits

0xd0fa,	// (0x0000d0fa) tabs_3_passive_pane_cp

0xd0a6,	// (0x0000d0a6) tabs_4_active_pane_ParamLimits

0xd0a6,	// (0x0000d0a6) tabs_4_active_pane

0xd0b7,	// (0x0000d0b7) tabs_4_passive_pane_ParamLimits

0xd0b7,	// (0x0000d0b7) tabs_4_passive_pane

0x4589,	// (0x00004589) tabs_4_passive_pane_cp_ParamLimits

0x4589,	// (0x00004589) tabs_4_passive_pane_cp

0xd0c8,	// (0x0000d0c8) tabs_4_passive_pane_cp2_ParamLimits

0xd0c8,	// (0x0000d0c8) tabs_4_passive_pane_cp2

0xd082,	// (0x0000d082) tabs_2_long_active_pane_ParamLimits

0xd082,	// (0x0000d082) tabs_2_long_active_pane

0xd094,	// (0x0000d094) tabs_2_long_passive_pane_ParamLimits

0xd094,	// (0x0000d094) tabs_2_long_passive_pane

0xd043,	// (0x0000d043) tabs_3_long_active_pane_ParamLimits

0xd043,	// (0x0000d043) tabs_3_long_active_pane

0xd056,	// (0x0000d056) tabs_3_long_passive_pane_ParamLimits

0xd056,	// (0x0000d056) tabs_3_long_passive_pane

0xd06f,	// (0x0000d06f) tabs_3_long_passive_pane_cp_ParamLimits

0xd06f,	// (0x0000d06f) tabs_3_long_passive_pane_cp

0x44b0,	// (0x000044b0) volume_small_pane_g1

0x44b9,	// (0x000044b9) volume_small_pane_g2

0x44c2,	// (0x000044c2) volume_small_pane_g3

0x44cb,	// (0x000044cb) volume_small_pane_g4

0x44d4,	// (0x000044d4) volume_small_pane_g5

0x44dd,	// (0x000044dd) volume_small_pane_g6

0x44e6,	// (0x000044e6) volume_small_pane_g7

0x44ef,	// (0x000044ef) volume_small_pane_g8

0x44f8,	// (0x000044f8) volume_small_pane_g9

0x4501,	// (0x00004501) volume_small_pane_g10

0x0009,

0xadf3,	// (0x0000adf3) volume_small_pane_g

0x081f,	// (0x0000081f) bg_active_tab_pane_cp2_ParamLimits

0x081f,	// (0x0000081f) bg_active_tab_pane_cp2

0x0507,	// (0x00000507) tabs_3_active_pane_g1

0xb745,	// (0x0000b745) tabs_3_active_pane_t1

0x081f,	// (0x0000081f) bg_passive_tab_pane_cp2_ParamLimits

0x081f,	// (0x0000081f) bg_passive_tab_pane_cp2

0x0507,	// (0x00000507) tabs_3_passive_pane_g1

0xb745,	// (0x0000b745) tabs_3_passive_pane_t1

0x081f,	// (0x0000081f) bg_active_tab_pane_cp3_ParamLimits

0x081f,	// (0x0000081f) bg_active_tab_pane_cp3

0x0521,	// (0x00000521) tabs_4_active_pane_g1

0xb757,	// (0x0000b757) tabs_4_active_pane_t1

0x081f,	// (0x0000081f) bg_passive_tab_pane_cp3_ParamLimits

0x081f,	// (0x0000081f) bg_passive_tab_pane_cp3

0x0521,	// (0x00000521) tabs_4_1_passive_pane_g1

0xb757,	// (0x0000b757) tabs_4_1_passive_pane_t1

0x2ad0,	// (0x00002ad0) list_highlight_pane_cp2

0xd2ac,	// (0x0000d2ac) list_set_pane_ParamLimits

0xd2ac,	// (0x0000d2ac) list_set_pane

0xd346,	// (0x0000d346) main_pane_set_t1_ParamLimits

0xd346,	// (0x0000d346) main_pane_set_t1

0xd366,	// (0x0000d366) main_pane_set_t2_ParamLimits

0xd366,	// (0x0000d366) main_pane_set_t2

0xd37a,	// (0x0000d37a) main_pane_set_t3_ParamLimits

0xd37a,	// (0x0000d37a) main_pane_set_t3

0xd38c,	// (0x0000d38c) main_pane_set_t4_ParamLimits

0xd38c,	// (0x0000d38c) main_pane_set_t4

0x0003,

0xf3a6,	// (0x0000f3a6) main_pane_set_t_ParamLimits

0xf3a6,	// (0x0000f3a6) main_pane_set_t

0xd39e,	// (0x0000d39e) setting_code_pane

0xd3a6,	// (0x0000d3a6) setting_slider_graphic_pane

0xd3a6,	// (0x0000d3a6) setting_slider_pane

0xd3a6,	// (0x0000d3a6) setting_text_pane

0xd3a6,	// (0x0000d3a6) setting_volume_pane

0x053b,	// (0x0000053b) volume_set_pane

0x04f9,	// (0x000004f9) bg_set_opt_pane_cp

0x0543,	// (0x00000543) setting_slider_pane_t1

0x055c,	// (0x0000055c) setting_slider_pane_t2

0x0576,	// (0x00000576) setting_slider_pane_t3

0x0002,

0xaaac,	// (0x0000aaac) setting_slider_pane_t

0x058e,	// (0x0000058e) slider_set_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp2

0x05a4,	// (0x000005a4) setting_slider_graphic_pane_g1

0x05ad,	// (0x000005ad) setting_slider_graphic_pane_t1

0x05bd,	// (0x000005bd) setting_slider_graphic_pane_t2

0x0001,

0xaab3,	// (0x0000aab3) setting_slider_graphic_pane_t

0x05cd,	// (0x000005cd) slider_set_pane_cp

0x0293,	// (0x00000293) input_focus_pane_cp1

0x4de8,	// (0x00004de8) list_set_text_pane

0x002e,	// (0x0000002e) setting_text_pane_g1

0x0293,	// (0x00000293) input_focus_pane_cp2

0x002e,	// (0x0000002e) setting_code_pane_g1

0x05d5,	// (0x000005d5) setting_code_pane_t1

0x05e3,	// (0x000005e3) set_text_pane_t1_ParamLimits

0x05e3,	// (0x000005e3) set_text_pane_t1

0x1476,	// (0x00001476) set_opt_bg_pane_g1

0x147e,	// (0x0000147e) set_opt_bg_pane_g2

0x4dc8,	// (0x00004dc8) set_opt_bg_pane_g3

0x148e,	// (0x0000148e) set_opt_bg_pane_g4

0x1496,	// (0x00001496) set_opt_bg_pane_g5

0x149e,	// (0x0000149e) set_opt_bg_pane_g6

0x4dd0,	// (0x00004dd0) set_opt_bg_pane_g7

0x4dd8,	// (0x00004dd8) set_opt_bg_pane_g8

0x4de0,	// (0x00004de0) set_opt_bg_pane_g9

0x0008,

0xaeb0,	// (0x0000aeb0) set_opt_bg_pane_g

0x4d57,	// (0x00004d57) slider_set_pane_g1

0x4d64,	// (0x00004d64) slider_set_pane_g2

0x0006,

0xaea1,	// (0x0000aea1) slider_set_pane_g

0x4bed,	// (0x00004bed) volume_set_pane_g1

0x4bf5,	// (0x00004bf5) volume_set_pane_g2

0x4bfd,	// (0x00004bfd) volume_set_pane_g3

0x4c05,	// (0x00004c05) volume_set_pane_g4

0x4c0d,	// (0x00004c0d) volume_set_pane_g5

0x4c15,	// (0x00004c15) volume_set_pane_g6

0x4c1d,	// (0x00004c1d) volume_set_pane_g7

0x4c25,	// (0x00004c25) volume_set_pane_g8

0x4c2d,	// (0x00004c2d) volume_set_pane_g9

0x4c35,	// (0x00004c35) volume_set_pane_g10

0x0009,

0xae79,	// (0x0000ae79) volume_set_pane_g

0xb769,	// (0x0000b769) indicator_pane_ParamLimits

0xb769,	// (0x0000b769) indicator_pane

0xb791,	// (0x0000b791) main_idle_pane_g2_ParamLimits

0xb791,	// (0x0000b791) main_idle_pane_g2

0xb7c9,	// (0x0000b7c9) main_pane_idle_g1_ParamLimits

0xb7c9,	// (0x0000b7c9) main_pane_idle_g1

0x063e,	// (0x0000063e) popup_clock_digital_analogue_window_ParamLimits

0x063e,	// (0x0000063e) popup_clock_digital_analogue_window

0xb7f0,	// (0x0000b7f0) soft_indicator_pane_ParamLimits

0xb7f0,	// (0x0000b7f0) soft_indicator_pane

0xb80a,	// (0x0000b80a) wallpaper_pane_ParamLimits

0xb80a,	// (0x0000b80a) wallpaper_pane

0x002e,	// (0x0000002e) wallpaper_pane_g1

0xb81c,	// (0x0000b81c) indicator_pane_g1_ParamLimits

0xb81c,	// (0x0000b81c) indicator_pane_g1

0x5364,	// (0x00005364) navi_navi_icon_text_pane_srt_g1

0x0690,	// (0x00000690) soft_indicator_pane_t1

0x06aa,	// (0x000006aa) aid_ps_area_pane

0xb832,	// (0x0000b832) aid_ps_clock_pane

0x06c9,	// (0x000006c9) aid_ps_indicator_pane

0x06d5,	// (0x000006d5) indicator_ps_pane_ParamLimits

0x06d5,	// (0x000006d5) indicator_ps_pane

0x06e4,	// (0x000006e4) power_save_pane_g1_ParamLimits

0x06e4,	// (0x000006e4) power_save_pane_g1

0x06f0,	// (0x000006f0) power_save_pane_g2_ParamLimits

0x06f0,	// (0x000006f0) power_save_pane_g2

0x0038,	// (0x00000038) aid_navinavi_width_pane

0x06aa,	// (0x000006aa) aid_ps_area_pane_ParamLimits

0x0001,

0xaab8,	// (0x0000aab8) power_save_pane_g_ParamLimits

0xaab8,	// (0x0000aab8) power_save_pane_g

0x06fe,	// (0x000006fe) power_save_pane_t1_ParamLimits

0x06fe,	// (0x000006fe) power_save_pane_t1

0xb832,	// (0x0000b832) aid_ps_clock_pane_ParamLimits

0x06c9,	// (0x000006c9) aid_ps_indicator_pane_ParamLimits

0x0710,	// (0x00000710) power_save_pane_t4_ParamLimits

0x0710,	// (0x00000710) power_save_pane_t4

0x0001,

0xaabd,	// (0x0000aabd) power_save_pane_t_ParamLimits

0xaabd,	// (0x0000aabd) power_save_pane_t

0x073a,	// (0x0000073a) power_save_t3_ParamLimits

0x073a,	// (0x0000073a) power_save_t3

0x0725,	// (0x00000725) power_save_t2_ParamLimits

0x0725,	// (0x00000725) power_save_t2

0x074f,	// (0x0000074f) indicator_ps_pane_g1

0xb840,	// (0x0000b840) ai_gene_pane_ParamLimits

0xb840,	// (0x0000b840) ai_gene_pane

0xb857,	// (0x0000b857) ai_links_pane_ParamLimits

0xb857,	// (0x0000b857) ai_links_pane

0xb86f,	// (0x0000b86f) indicator_pane_cp1_ParamLimits

0xb86f,	// (0x0000b86f) indicator_pane_cp1

0xb87e,	// (0x0000b87e) main_pane_idle_g1_cp_ParamLimits

0xb87e,	// (0x0000b87e) main_pane_idle_g1_cp

0x0788,	// (0x00000788) popup_ai_links_title_window

0xb896,	// (0x0000b896) soft_indicator_pane_cp1_ParamLimits

0xb896,	// (0x0000b896) soft_indicator_pane_cp1

0x4acd,	// (0x00004acd) ai_links_pane_g1

0x4ad6,	// (0x00004ad6) grid_ai_links_pane

0xd1ee,	// (0x0000d1ee) ai_gene_pane_1

0x4abb,	// (0x00004abb) ai_gene_pane_2

0x4ac4,	// (0x00004ac4) list_highlight_pane_cp4

0xd1ca,	// (0x0000d1ca) cell_ai_link_pane_ParamLimits

0xd1ca,	// (0x0000d1ca) cell_ai_link_pane

0x4a8c,	// (0x00004a8c) cell_ai_link_pane_g1

0x09b5,	// (0x000009b5) cell_ai_link_pane_g2

0x0001,

0xae54,	// (0x0000ae54) cell_ai_link_pane_g

0x0293,	// (0x00000293) grid_highlight_cp2

0x0293,	// (0x00000293) bg_popup_sub_pane_cp1

0x07ab,	// (0x000007ab) popup_ai_links_title_window_t1

0x49dc,	// (0x000049dc) ai_gene_pane_1_g1_ParamLimits

0x49dc,	// (0x000049dc) ai_gene_pane_1_g1

0x49e8,	// (0x000049e8) ai_gene_pane_1_g2_ParamLimits

0x49e8,	// (0x000049e8) ai_gene_pane_1_g2

0x0001,

0xae4a,	// (0x0000ae4a) ai_gene_pane_1_g_ParamLimits

0xae4a,	// (0x0000ae4a) ai_gene_pane_1_g

0x49f5,	// (0x000049f5) ai_gene_pane_1_t1_ParamLimits

0x49f5,	// (0x000049f5) ai_gene_pane_1_t1

0x4a29,	// (0x00004a29) grid_ai_soft_ind_pane

0x49c7,	// (0x000049c7) ai_gene_pane_2_t1_ParamLimits

0x49c7,	// (0x000049c7) ai_gene_pane_2_t1

0xb8aa,	// (0x0000b8aa) main_pane_empty_t1_ParamLimits

0xb8aa,	// (0x0000b8aa) main_pane_empty_t1

0xb8c2,	// (0x0000b8c2) main_pane_empty_t2_ParamLimits

0xb8c2,	// (0x0000b8c2) main_pane_empty_t2

0xb8d7,	// (0x0000b8d7) main_pane_empty_t3_ParamLimits

0xb8d7,	// (0x0000b8d7) main_pane_empty_t3

0xb8e9,	// (0x0000b8e9) main_pane_empty_t4_ParamLimits

0xb8e9,	// (0x0000b8e9) main_pane_empty_t4

0xb8fb,	// (0x0000b8fb) main_pane_empty_t5_ParamLimits

0xb8fb,	// (0x0000b8fb) main_pane_empty_t5

0x0004,

0xf25a,	// (0x0000f25a) main_pane_empty_t_ParamLimits

0xf25a,	// (0x0000f25a) main_pane_empty_t

0x1555,	// (0x00001555) bg_popup_window_pane_ParamLimits

0x1555,	// (0x00001555) bg_popup_window_pane

0x4737,	// (0x00004737) find_popup_pane_cp2_ParamLimits

0x4737,	// (0x00004737) find_popup_pane_cp2

0x4743,	// (0x00004743) heading_pane_ParamLimits

0x4743,	// (0x00004743) heading_pane

0x0293,	// (0x00000293) bg_popup_sub_pane

0xd142,	// (0x0000d142) bg_popup_window_pane_g1_ParamLimits

0xd142,	// (0x0000d142) bg_popup_window_pane_g1

0xd151,	// (0x0000d151) bg_popup_window_pane_g2_ParamLimits

0xd151,	// (0x0000d151) bg_popup_window_pane_g2

0xd15d,	// (0x0000d15d) bg_popup_window_pane_g3_ParamLimits

0xd15d,	// (0x0000d15d) bg_popup_window_pane_g3

0xd169,	// (0x0000d169) bg_popup_window_pane_g4_ParamLimits

0xd169,	// (0x0000d169) bg_popup_window_pane_g4

0xd178,	// (0x0000d178) bg_popup_window_pane_g5_ParamLimits

0xd178,	// (0x0000d178) bg_popup_window_pane_g5

0xd188,	// (0x0000d188) bg_popup_window_pane_g6_ParamLimits

0xd188,	// (0x0000d188) bg_popup_window_pane_g6

0xd194,	// (0x0000d194) bg_popup_window_pane_g7_ParamLimits

0xd194,	// (0x0000d194) bg_popup_window_pane_g7

0xd1a3,	// (0x0000d1a3) bg_popup_window_pane_g8_ParamLimits

0xd1a3,	// (0x0000d1a3) bg_popup_window_pane_g8

0xd1b2,	// (0x0000d1b2) bg_popup_window_pane_g9_ParamLimits

0xd1b2,	// (0x0000d1b2) bg_popup_window_pane_g9

0x470c,	// (0x0000470c) bg_popup_window_pane_g10_ParamLimits

0x470c,	// (0x0000470c) bg_popup_window_pane_g10

0x0009,

0xf384,	// (0x0000f384) bg_popup_window_pane_g_ParamLimits

0xf384,	// (0x0000f384) bg_popup_window_pane_g

0x4635,	// (0x00004635) bg_popup_heading_pane_ParamLimits

0x4635,	// (0x00004635) bg_popup_heading_pane

0x52a7,	// (0x000052a7) tabs_4_passive_pane_cp_srt_ParamLimits

0x52a7,	// (0x000052a7) tabs_4_passive_pane_cp_srt

0x52b9,	// (0x000052b9) tabs_4_passive_pane_srt_ParamLimits

0x4649,	// (0x00004649) heading_pane_g2

0x52b9,	// (0x000052b9) tabs_4_passive_pane_srt

0x378d,	// (0x0000378d) bg_passive_tab_pane_cp3_srt_ParamLimits

0x378d,	// (0x0000378d) bg_passive_tab_pane_cp3_srt

0x4651,	// (0x00004651) heading_pane_t1_ParamLimits

0x4651,	// (0x00004651) heading_pane_t1

0x4668,	// (0x00004668) heading_pane_t2_ParamLimits

0x4668,	// (0x00004668) heading_pane_t2

0x0001,

0xae0d,	// (0x0000ae0d) heading_pane_t_ParamLimits

0xae0d,	// (0x0000ae0d) heading_pane_t

0x4015,	// (0x00004015) bg_popup_heading_pane_g1

0x40c4,	// (0x000040c4) bg_popup_heading_pane_g2

0x40ce,	// (0x000040ce) bg_popup_heading_pane_g3

0x40d8,	// (0x000040d8) bg_popup_heading_pane_g4

0x40e2,	// (0x000040e2) bg_popup_heading_pane_g5

0x40ec,	// (0x000040ec) bg_popup_heading_pane_g6

0x40f4,	// (0x000040f4) bg_popup_heading_pane_g7

0x40fc,	// (0x000040fc) bg_popup_heading_pane_g8

0x4106,	// (0x00004106) bg_popup_heading_pane_g9

0x0008,

0xadc9,	// (0x0000adc9) bg_popup_heading_pane_g

0x35f3,	// (0x000035f3) bg_popup_sub_pane_g1

0x35fb,	// (0x000035fb) bg_popup_sub_pane_g2

0x3603,	// (0x00003603) bg_popup_sub_pane_g3

0x360b,	// (0x0000360b) bg_popup_sub_pane_g4

0x3613,	// (0x00003613) bg_popup_sub_pane_g5

0x361b,	// (0x0000361b) bg_popup_sub_pane_g6

0x3623,	// (0x00003623) bg_popup_sub_pane_g7

0x362b,	// (0x0000362b) bg_popup_sub_pane_g8

0x3633,	// (0x00003633) bg_popup_sub_pane_g9

0x0008,

0xada3,	// (0x0000ada3) bg_popup_sub_pane_g

0x081f,	// (0x0000081f) bg_popup_window_pane_cp5_ParamLimits

0x081f,	// (0x0000081f) bg_popup_window_pane_cp5

0x083b,	// (0x0000083b) popup_note_window_g1_ParamLimits

0x083b,	// (0x0000083b) popup_note_window_g1

0x0847,	// (0x00000847) popup_note_window_t1_ParamLimits

0x0847,	// (0x00000847) popup_note_window_t1

0x0859,	// (0x00000859) popup_note_window_t2_ParamLimits

0x0859,	// (0x00000859) popup_note_window_t2

0x086b,	// (0x0000086b) popup_note_window_t3_ParamLimits

0x086b,	// (0x0000086b) popup_note_window_t3

0x087d,	// (0x0000087d) popup_note_window_t4_ParamLimits

0x087d,	// (0x0000087d) popup_note_window_t4

0x08a5,	// (0x000008a5) popup_note_window_t5_ParamLimits

0x08a5,	// (0x000008a5) popup_note_window_t5

0x0004,

0xaacd,	// (0x0000aacd) popup_note_window_t_ParamLimits

0xaacd,	// (0x0000aacd) popup_note_window_t

0x08c9,	// (0x000008c9) bg_popup_window_pane_cp6_ParamLimits

0x08c9,	// (0x000008c9) bg_popup_window_pane_cp6

0x3f89,	// (0x00003f89) popup_note_image_window_g1_ParamLimits

0x3f89,	// (0x00003f89) popup_note_image_window_g1

0x3f95,	// (0x00003f95) popup_note_image_window_g2_ParamLimits

0x3f95,	// (0x00003f95) popup_note_image_window_g2

0x0001,

0xad97,	// (0x0000ad97) popup_note_image_window_g_ParamLimits

0xad97,	// (0x0000ad97) popup_note_image_window_g

0x3fae,	// (0x00003fae) popup_note_image_window_t1_ParamLimits

0x3fae,	// (0x00003fae) popup_note_image_window_t1

0x3fc7,	// (0x00003fc7) popup_note_image_window_t2_ParamLimits

0x3fc7,	// (0x00003fc7) popup_note_image_window_t2

0x3fe0,	// (0x00003fe0) popup_note_image_window_t3_ParamLimits

0x3fe0,	// (0x00003fe0) popup_note_image_window_t3

0x0002,

0xad9c,	// (0x0000ad9c) popup_note_image_window_t_ParamLimits

0xad9c,	// (0x0000ad9c) popup_note_image_window_t

0x3e4a,	// (0x00003e4a) bg_popup_window_pane_cp7_ParamLimits

0x3e4a,	// (0x00003e4a) bg_popup_window_pane_cp7

0x3e7a,	// (0x00003e7a) popup_note_wait_window_g1_ParamLimits

0x3e7a,	// (0x00003e7a) popup_note_wait_window_g1

0x3e86,	// (0x00003e86) popup_note_wait_window_g2_ParamLimits

0x3e86,	// (0x00003e86) popup_note_wait_window_g2

0x0002,

0xad85,	// (0x0000ad85) popup_note_wait_window_g_ParamLimits

0xad85,	// (0x0000ad85) popup_note_wait_window_g

0x3e9e,	// (0x00003e9e) popup_note_wait_window_t1_ParamLimits

0x3e9e,	// (0x00003e9e) popup_note_wait_window_t1

0x3ec5,	// (0x00003ec5) popup_note_wait_window_t2_ParamLimits

0x3ec5,	// (0x00003ec5) popup_note_wait_window_t2

0x3ee2,	// (0x00003ee2) popup_note_wait_window_t3_ParamLimits

0x3ee2,	// (0x00003ee2) popup_note_wait_window_t3

0x3ef5,	// (0x00003ef5) popup_note_wait_window_t4_ParamLimits

0x3ef5,	// (0x00003ef5) popup_note_wait_window_t4

0x0004,

0xad8c,	// (0x0000ad8c) popup_note_wait_window_t_ParamLimits

0xad8c,	// (0x0000ad8c) popup_note_wait_window_t

0x3f1a,	// (0x00003f1a) wait_bar_pane_ParamLimits

0x3f1a,	// (0x00003f1a) wait_bar_pane

0x0293,	// (0x00000293) wait_anim_pane

0x0293,	// (0x00000293) wait_border_pane

0x002e,	// (0x0000002e) wait_anim_pane_g1

0x002e,	// (0x0000002e) wait_anim_pane_g2

0x0001,

0xac4c,	// (0x0000ac4c) wait_anim_pane_g

0x3dee,	// (0x00003dee) wait_border_pane_g1

0x3df9,	// (0x00003df9) wait_border_pane_g2

0x3e02,	// (0x00003e02) wait_border_pane_g3

0x0002,

0xad7e,	// (0x0000ad7e) wait_border_pane_g

0x3c5e,	// (0x00003c5e) bg_popup_window_pane_cp16_ParamLimits

0x3c5e,	// (0x00003c5e) bg_popup_window_pane_cp16

0x3d5e,	// (0x00003d5e) indicator_popup_pane_cp4_ParamLimits

0x3d5e,	// (0x00003d5e) indicator_popup_pane_cp4

0x3d72,	// (0x00003d72) popup_query_data_window_t1_ParamLimits

0x3d72,	// (0x00003d72) popup_query_data_window_t1

0x3d84,	// (0x00003d84) popup_query_data_window_t2_ParamLimits

0x3d84,	// (0x00003d84) popup_query_data_window_t2

0x3d9d,	// (0x00003d9d) popup_query_data_window_t3_ParamLimits

0x3d9d,	// (0x00003d9d) popup_query_data_window_t3

0x0002,

0xad77,	// (0x0000ad77) popup_query_data_window_t_ParamLimits

0xad77,	// (0x0000ad77) popup_query_data_window_t

0x3db7,	// (0x00003db7) query_popup_data_pane_ParamLimits

0x3db7,	// (0x00003db7) query_popup_data_pane

0x3dcb,	// (0x00003dcb) query_popup_data_pane_cp1_ParamLimits

0x3dcb,	// (0x00003dcb) query_popup_data_pane_cp1

0x3c5e,	// (0x00003c5e) bg_popup_window_pane_cp10_ParamLimits

0x3c5e,	// (0x00003c5e) bg_popup_window_pane_cp10

0x3c90,	// (0x00003c90) indicator_popup_pane_ParamLimits

0x3c90,	// (0x00003c90) indicator_popup_pane

0x3cb2,	// (0x00003cb2) popup_query_code_window_t1_ParamLimits

0x3cb2,	// (0x00003cb2) popup_query_code_window_t1

0x3ccc,	// (0x00003ccc) popup_query_code_window_t2_ParamLimits

0x3ccc,	// (0x00003ccc) popup_query_code_window_t2

0x3d15,	// (0x00003d15) popup_query_code_window_t3_ParamLimits

0x3d15,	// (0x00003d15) popup_query_code_window_t3

0x0002,

0xad70,	// (0x0000ad70) popup_query_code_window_t_ParamLimits

0xad70,	// (0x0000ad70) popup_query_code_window_t

0x3d44,	// (0x00003d44) query_popup_pane_ParamLimits

0x3d44,	// (0x00003d44) query_popup_pane

0x08c9,	// (0x000008c9) bg_popup_window_pane_cp15_ParamLimits

0x08c9,	// (0x000008c9) bg_popup_window_pane_cp15

0x08e7,	// (0x000008e7) indicator_popup_pane_cp1_ParamLimits

0x08e7,	// (0x000008e7) indicator_popup_pane_cp1

0x08fa,	// (0x000008fa) indicator_popup_pane_cp2_ParamLimits

0x08fa,	// (0x000008fa) indicator_popup_pane_cp2

0x090d,	// (0x0000090d) popup_query_data_code_window_g1_ParamLimits

0x090d,	// (0x0000090d) popup_query_data_code_window_g1

0x0920,	// (0x00000920) popup_query_data_code_window_t1_ParamLimits

0x0920,	// (0x00000920) popup_query_data_code_window_t1

0x0932,	// (0x00000932) popup_query_data_code_window_t2_ParamLimits

0x0932,	// (0x00000932) popup_query_data_code_window_t2

0x0944,	// (0x00000944) popup_query_data_code_window_t3_ParamLimits

0x0944,	// (0x00000944) popup_query_data_code_window_t3

0x095a,	// (0x0000095a) popup_query_data_code_window_t4_ParamLimits

0x095a,	// (0x0000095a) popup_query_data_code_window_t4

0x0003,

0xaad8,	// (0x0000aad8) popup_query_data_code_window_t_ParamLimits

0xaad8,	// (0x0000aad8) popup_query_data_code_window_t

0x239b,	// (0x0000239b) list_single_midp_graphic_pane_g3

0x0972,	// (0x00000972) query_popup_data_pane_cp2_ParamLimits

0x0985,	// (0x00000985) query_popup_pane_cp2_ParamLimits

0x0985,	// (0x00000985) query_popup_pane_cp2

0x0293,	// (0x00000293) bg_popup_window_pane_cp11

0x3c56,	// (0x00003c56) heading_pane_cp5

0x0a70,	// (0x00000a70) listscroll_popup_info_pane

0x0293,	// (0x00000293) input_focus_pane_cp3

0x0998,	// (0x00000998) query_popup_pane_t1

0x09a6,	// (0x000009a6) list_popup_info_pane_ParamLimits

0x09a6,	// (0x000009a6) list_popup_info_pane

0x09b5,	// (0x000009b5) listscroll_popup_info_pane_g1

0x09bd,	// (0x000009bd) scroll_pane_cp7

0x09c7,	// (0x000009c7) popup_info_list_pane_t1_ParamLimits

0x09c7,	// (0x000009c7) popup_info_list_pane_t1

0x09e1,	// (0x000009e1) popup_info_list_pane_t2_ParamLimits

0x09e1,	// (0x000009e1) popup_info_list_pane_t2

0x0001,

0xaae1,	// (0x0000aae1) popup_info_list_pane_t_ParamLimits

0xaae1,	// (0x0000aae1) popup_info_list_pane_t

0x0293,	// (0x00000293) bg_popup_window_pane_cp12

0x539b,	// (0x0000539b) find_popup_pane

0x04f9,	// (0x000004f9) bg_popup_window_pane_cp3

0x09fb,	// (0x000009fb) heading_pane_cp3

0x0a07,	// (0x00000a07) listscroll_popup_graphic_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp4

0xb95d,	// (0x0000b95d) heading_pane_cp4

0x0a70,	// (0x00000a70) listscroll_popup_colour_pane

0x0a78,	// (0x00000a78) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x0a78,	// (0x00000a78) cell_large_graphic_colour_none_popup_pane

0xb965,	// (0x0000b965) grid_large_graphic_colour_popup_pane_ParamLimits

0xb965,	// (0x0000b965) grid_large_graphic_colour_popup_pane

0x0ab4,	// (0x00000ab4) listscroll_popup_colour_pane_g1_ParamLimits

0x0ab4,	// (0x00000ab4) listscroll_popup_colour_pane_g1

0x0acb,	// (0x00000acb) listscroll_popup_colour_pane_g2_ParamLimits

0x0acb,	// (0x00000acb) listscroll_popup_colour_pane_g2

0x0ae2,	// (0x00000ae2) listscroll_popup_colour_pane_g3_ParamLimits

0x0ae2,	// (0x00000ae2) listscroll_popup_colour_pane_g3

0xb989,	// (0x0000b989) listscroll_popup_colour_pane_g4_ParamLimits

0xb989,	// (0x0000b989) listscroll_popup_colour_pane_g4

0x0003,

0xf265,	// (0x0000f265) listscroll_popup_colour_pane_g_ParamLimits

0xf265,	// (0x0000f265) listscroll_popup_colour_pane_g

0x0b01,	// (0x00000b01) scroll_pane_cp6_ParamLimits

0x0b01,	// (0x00000b01) scroll_pane_cp6

0xb998,	// (0x0000b998) cell_large_graphic_colour_popup_pane_ParamLimits

0xb998,	// (0x0000b998) cell_large_graphic_colour_popup_pane

0x0b32,	// (0x00000b32) cell_large_graphic_colour_none_popup_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp5

0x0b41,	// (0x00000b41) cell_large_graphic_colour_popup_pane_g1

0x0b49,	// (0x00000b49) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xaaef,	// (0x0000aaef) cell_large_graphic_colour_popup_pane_g

0x0b51,	// (0x00000b51) cell_large_graphic_colour_popup_pane_g2_copy1

0x0b5a,	// (0x00000b5a) grid_highlight_pane_cp4

0x0b62,	// (0x00000b62) bg_popup_window_pane_cp8_ParamLimits

0x0b62,	// (0x00000b62) bg_popup_window_pane_cp8

0x0b7d,	// (0x00000b7d) popup_snote_single_text_window_g1_ParamLimits

0x0b7d,	// (0x00000b7d) popup_snote_single_text_window_g1

0x0b8f,	// (0x00000b8f) popup_snote_single_text_window_t1_ParamLimits

0x0b8f,	// (0x00000b8f) popup_snote_single_text_window_t1

0x0ba2,	// (0x00000ba2) popup_snote_single_text_window_t2_ParamLimits

0x0ba2,	// (0x00000ba2) popup_snote_single_text_window_t2

0x0bb5,	// (0x00000bb5) popup_snote_single_text_window_t3_ParamLimits

0x0bb5,	// (0x00000bb5) popup_snote_single_text_window_t3

0x0bee,	// (0x00000bee) popup_snote_single_text_window_t4_ParamLimits

0x0bee,	// (0x00000bee) popup_snote_single_text_window_t4

0x0c22,	// (0x00000c22) popup_snote_single_text_window_t5_ParamLimits

0x0c22,	// (0x00000c22) popup_snote_single_text_window_t5

0x0004,

0xaaf4,	// (0x0000aaf4) popup_snote_single_text_window_t_ParamLimits

0xaaf4,	// (0x0000aaf4) popup_snote_single_text_window_t

0x0c51,	// (0x00000c51) bg_popup_window_pane_cp9_ParamLimits

0x0c51,	// (0x00000c51) bg_popup_window_pane_cp9

0x0b7d,	// (0x00000b7d) popup_snote_single_graphic_window_g1_ParamLimits

0x0b7d,	// (0x00000b7d) popup_snote_single_graphic_window_g1

0x0c5f,	// (0x00000c5f) popup_snote_single_graphic_window_g2_ParamLimits

0x0c5f,	// (0x00000c5f) popup_snote_single_graphic_window_g2

0x0001,

0xaaff,	// (0x0000aaff) popup_snote_single_graphic_window_g_ParamLimits

0xaaff,	// (0x0000aaff) popup_snote_single_graphic_window_g

0x0c6b,	// (0x00000c6b) popup_snote_single_graphic_window_t1_ParamLimits

0x0c6b,	// (0x00000c6b) popup_snote_single_graphic_window_t1

0x0c7e,	// (0x00000c7e) popup_snote_single_graphic_window_t2_ParamLimits

0x0c7e,	// (0x00000c7e) popup_snote_single_graphic_window_t2

0x0c91,	// (0x00000c91) popup_snote_single_graphic_window_t3_ParamLimits

0x0c91,	// (0x00000c91) popup_snote_single_graphic_window_t3

0x0cca,	// (0x00000cca) popup_snote_single_graphic_window_t4_ParamLimits

0x0cca,	// (0x00000cca) popup_snote_single_graphic_window_t4

0x0cfe,	// (0x00000cfe) popup_snote_single_graphic_window_t5_ParamLimits

0x0cfe,	// (0x00000cfe) popup_snote_single_graphic_window_t5

0x0004,

0xab04,	// (0x0000ab04) popup_snote_single_graphic_window_t_ParamLimits

0xab04,	// (0x0000ab04) popup_snote_single_graphic_window_t

0xd4f0,	// (0x0000d4f0) grid_graphic_popup_pane_ParamLimits

0xd4f0,	// (0x0000d4f0) grid_graphic_popup_pane

0x524f,	// (0x0000524f) listscroll_popup_graphic_pane_g1_ParamLimits

0x524f,	// (0x0000524f) listscroll_popup_graphic_pane_g1

0xd50f,	// (0x0000d50f) listscroll_popup_graphic_pane_g2_ParamLimits

0xd50f,	// (0x0000d50f) listscroll_popup_graphic_pane_g2

0x0001,

0xf3c9,	// (0x0000f3c9) listscroll_popup_graphic_pane_g_ParamLimits

0xf3c9,	// (0x0000f3c9) listscroll_popup_graphic_pane_g

0x5277,	// (0x00005277) scroll_pane_cp5

0xd4ab,	// (0x0000d4ab) cell_graphic_popup_pane_ParamLimits

0xd4ab,	// (0x0000d4ab) cell_graphic_popup_pane

0x51a7,	// (0x000051a7) cell_graphic_popup_pane_g1

0x51af,	// (0x000051af) cell_graphic_popup_pane_g2

0x0b51,	// (0x00000b51) cell_graphic_popup_pane_g3

0x0002,

0xaee6,	// (0x0000aee6) cell_graphic_popup_pane_g

0x51b8,	// (0x000051b8) cell_graphic_popup_pane_t2

0x0b5a,	// (0x00000b5a) grid_highlight_pane_cp3

0x0d3f,	// (0x00000d3f) list_gen_pane_ParamLimits

0x0d3f,	// (0x00000d3f) list_gen_pane

0x0d71,	// (0x00000d71) scroll_pane

0xd466,	// (0x0000d466) bg_list_pane_g1_ParamLimits

0xd466,	// (0x0000d466) bg_list_pane_g1

0x5124,	// (0x00005124) bg_list_pane_g2_ParamLimits

0x5124,	// (0x00005124) bg_list_pane_g2

0x5137,	// (0x00005137) bg_list_pane_g3_ParamLimits

0x5137,	// (0x00005137) bg_list_pane_g3

0x5149,	// (0x00005149) bg_list_pane_g4_ParamLimits

0x5149,	// (0x00005149) bg_list_pane_g4

0xd481,	// (0x0000d481) bg_list_pane_g5_ParamLimits

0xd481,	// (0x0000d481) bg_list_pane_g5

0x0004,

0xf3be,	// (0x0000f3be) bg_list_pane_g_ParamLimits

0xf3be,	// (0x0000f3be) bg_list_pane_g

0xd3f5,	// (0x0000d3f5) list_double2_graphic_large_graphic_pane_ParamLimits

0xd3f5,	// (0x0000d3f5) list_double2_graphic_large_graphic_pane

0xd3f5,	// (0x0000d3f5) list_double2_graphic_pane_ParamLimits

0xd3f5,	// (0x0000d3f5) list_double2_graphic_pane

0xd3f5,	// (0x0000d3f5) list_double2_large_graphic_pane_ParamLimits

0xd3f5,	// (0x0000d3f5) list_double2_large_graphic_pane

0xd408,	// (0x0000d408) list_double2_pane_ParamLimits

0xd408,	// (0x0000d408) list_double2_pane

0xd3f5,	// (0x0000d3f5) list_double_graphic_heading_pane_ParamLimits

0xd3f5,	// (0x0000d3f5) list_double_graphic_heading_pane

0xd3f5,	// (0x0000d3f5) list_double_graphic_pane_ParamLimits

0xd3f5,	// (0x0000d3f5) list_double_graphic_pane

0xd3f5,	// (0x0000d3f5) list_double_heading_pane_ParamLimits

0xd3f5,	// (0x0000d3f5) list_double_heading_pane

0xd3f5,	// (0x0000d3f5) list_double_large_graphic_pane_ParamLimits

0xd3f5,	// (0x0000d3f5) list_double_large_graphic_pane

0xd3f5,	// (0x0000d3f5) list_double_number_pane_ParamLimits

0xd3f5,	// (0x0000d3f5) list_double_number_pane

0xd3f5,	// (0x0000d3f5) list_double_pane_ParamLimits

0xd3f5,	// (0x0000d3f5) list_double_pane

0xd3f5,	// (0x0000d3f5) list_double_time_pane_ParamLimits

0xd3f5,	// (0x0000d3f5) list_double_time_pane

0xd3f5,	// (0x0000d3f5) list_setting_number_pane_ParamLimits

0xd3f5,	// (0x0000d3f5) list_setting_number_pane

0xd3f5,	// (0x0000d3f5) list_setting_pane_ParamLimits

0xd3f5,	// (0x0000d3f5) list_setting_pane

0xd41a,	// (0x0000d41a) list_single_2graphic_pane_ParamLimits

0xd41a,	// (0x0000d41a) list_single_2graphic_pane

0xd41a,	// (0x0000d41a) list_single_graphic_heading_pane_ParamLimits

0xd41a,	// (0x0000d41a) list_single_graphic_heading_pane

0xd41a,	// (0x0000d41a) list_single_graphic_pane_ParamLimits

0xd41a,	// (0x0000d41a) list_single_graphic_pane

0xd41a,	// (0x0000d41a) list_single_heading_pane_ParamLimits

0xd41a,	// (0x0000d41a) list_single_heading_pane

0xd3f5,	// (0x0000d3f5) list_single_large_graphic_pane_ParamLimits

0xd3f5,	// (0x0000d3f5) list_single_large_graphic_pane

0xd41a,	// (0x0000d41a) list_single_number_heading_pane_ParamLimits

0xd41a,	// (0x0000d41a) list_single_number_heading_pane

0xd41a,	// (0x0000d41a) list_single_number_pane_ParamLimits

0xd41a,	// (0x0000d41a) list_single_number_pane

0xd41a,	// (0x0000d41a) list_single_pane_ParamLimits

0xd41a,	// (0x0000d41a) list_single_pane

0x0293,	// (0x00000293) list_highlight_pane_cp1

0x0db1,	// (0x00000db1) list_single_pane_g1_ParamLimits

0x0db1,	// (0x00000db1) list_single_pane_g1

0x0dbd,	// (0x00000dbd) list_single_pane_g2_ParamLimits

0x0dbd,	// (0x00000dbd) list_single_pane_g2

0x0001,

0xab16,	// (0x0000ab16) list_single_pane_g_ParamLimits

0xab16,	// (0x0000ab16) list_single_pane_g

0x4f9d,	// (0x00004f9d) list_single_pane_t1_ParamLimits

0x4f9d,	// (0x00004f9d) list_single_pane_t1

0x0db1,	// (0x00000db1) list_single_number_pane_g1_ParamLimits

0x0db1,	// (0x00000db1) list_single_number_pane_g1

0x0dbd,	// (0x00000dbd) list_single_number_pane_g2_ParamLimits

0x0dbd,	// (0x00000dbd) list_single_number_pane_g2

0x0001,

0xab16,	// (0x0000ab16) list_single_number_pane_g_ParamLimits

0xab16,	// (0x0000ab16) list_single_number_pane_g

0x3581,	// (0x00003581) list_single_number_pane_t1_ParamLimits

0x3581,	// (0x00003581) list_single_number_pane_t1

0x4cd5,	// (0x00004cd5) list_single_number_pane_t2_ParamLimits

0x4cd5,	// (0x00004cd5) list_single_number_pane_t2

0x0001,

0xae9c,	// (0x0000ae9c) list_single_number_pane_t_ParamLimits

0xae9c,	// (0x0000ae9c) list_single_number_pane_t

0x0da5,	// (0x00000da5) list_single_graphic_pane_g1_ParamLimits

0x0da5,	// (0x00000da5) list_single_graphic_pane_g1

0x0db1,	// (0x00000db1) list_single_graphic_pane_g2_ParamLimits

0x0db1,	// (0x00000db1) list_single_graphic_pane_g2

0x0dbd,	// (0x00000dbd) list_single_graphic_pane_g3_ParamLimits

0x0dbd,	// (0x00000dbd) list_single_graphic_pane_g3

0x0002,

0xab0f,	// (0x0000ab0f) list_single_graphic_pane_g_ParamLimits

0xab0f,	// (0x0000ab0f) list_single_graphic_pane_g

0x0dc9,	// (0x00000dc9) list_single_graphic_pane_t1_ParamLimits

0x0dc9,	// (0x00000dc9) list_single_graphic_pane_t1

0x0db1,	// (0x00000db1) list_single_heading_pane_g1_ParamLimits

0x0db1,	// (0x00000db1) list_single_heading_pane_g1

0x0dbd,	// (0x00000dbd) list_single_heading_pane_g2_ParamLimits

0x0dbd,	// (0x00000dbd) list_single_heading_pane_g2

0x0001,

0xab16,	// (0x0000ab16) list_single_heading_pane_g_ParamLimits

0xab16,	// (0x0000ab16) list_single_heading_pane_g

0x0ddf,	// (0x00000ddf) list_single_heading_pane_t1_ParamLimits

0x0ddf,	// (0x00000ddf) list_single_heading_pane_t1

0x0df5,	// (0x00000df5) list_single_heading_pane_t2_ParamLimits

0x0df5,	// (0x00000df5) list_single_heading_pane_t2

0x0001,

0xab1b,	// (0x0000ab1b) list_single_heading_pane_t_ParamLimits

0xab1b,	// (0x0000ab1b) list_single_heading_pane_t

0x0db1,	// (0x00000db1) list_single_number_heading_pane_g1_ParamLimits

0x0db1,	// (0x00000db1) list_single_number_heading_pane_g1

0x0dbd,	// (0x00000dbd) list_single_number_heading_pane_g2_ParamLimits

0x0dbd,	// (0x00000dbd) list_single_number_heading_pane_g2

0x0001,

0xab16,	// (0x0000ab16) list_single_number_heading_pane_g_ParamLimits

0xab16,	// (0x0000ab16) list_single_number_heading_pane_g

0x0ddf,	// (0x00000ddf) list_single_number_heading_pane_t1_ParamLimits

0x0ddf,	// (0x00000ddf) list_single_number_heading_pane_t1

0x0e07,	// (0x00000e07) list_single_number_heading_pane_t2_ParamLimits

0x0e07,	// (0x00000e07) list_single_number_heading_pane_t2

0x0e19,	// (0x00000e19) list_single_number_heading_pane_t3_ParamLimits

0x0e19,	// (0x00000e19) list_single_number_heading_pane_t3

0x0002,

0xab20,	// (0x0000ab20) list_single_number_heading_pane_t_ParamLimits

0xab20,	// (0x0000ab20) list_single_number_heading_pane_t

0x0e2b,	// (0x00000e2b) list_single_graphic_heading_pane_g1_ParamLimits

0x0e2b,	// (0x00000e2b) list_single_graphic_heading_pane_g1

0xb9c1,	// (0x0000b9c1) list_single_graphic_heading_pane_g4_ParamLimits

0xb9c1,	// (0x0000b9c1) list_single_graphic_heading_pane_g4

0x0dbd,	// (0x00000dbd) list_single_graphic_heading_pane_g5_ParamLimits

0x0dbd,	// (0x00000dbd) list_single_graphic_heading_pane_g5

0x0002,

0xf26e,	// (0x0000f26e) list_single_graphic_heading_pane_g_ParamLimits

0xf26e,	// (0x0000f26e) list_single_graphic_heading_pane_g

0x0ddf,	// (0x00000ddf) list_single_graphic_heading_pane_t1_ParamLimits

0x0ddf,	// (0x00000ddf) list_single_graphic_heading_pane_t1

0x0e48,	// (0x00000e48) list_single_graphic_heading_pane_t2_ParamLimits

0x0e48,	// (0x00000e48) list_single_graphic_heading_pane_t2

0x0001,

0xab2e,	// (0x0000ab2e) list_single_graphic_heading_pane_t_ParamLimits

0xab2e,	// (0x0000ab2e) list_single_graphic_heading_pane_t

0x59c0,	// (0x000059c0) list_single_large_graphic_pane_g1_ParamLimits

0x59c0,	// (0x000059c0) list_single_large_graphic_pane_g1

0x59cc,	// (0x000059cc) list_single_large_graphic_pane_g2_ParamLimits

0x59cc,	// (0x000059cc) list_single_large_graphic_pane_g2

0x59d8,	// (0x000059d8) list_single_large_graphic_pane_g3_ParamLimits

0x59d8,	// (0x000059d8) list_single_large_graphic_pane_g3

0x0002,

0xaf8b,	// (0x0000af8b) list_single_large_graphic_pane_g_ParamLimits

0xaf8b,	// (0x0000af8b) list_single_large_graphic_pane_g

0x3df9,	// (0x00003df9) wait_border_pane_g2_copy1

0x0e7e,	// (0x00000e7e) list_single_large_graphic_pane_g4_cp2

0x59e4,	// (0x000059e4) list_single_large_graphic_pane_t1_ParamLimits

0x59e4,	// (0x000059e4) list_single_large_graphic_pane_t1

0x238f,	// (0x0000238f) list_double_pane_g1_ParamLimits

0x238f,	// (0x0000238f) list_double_pane_g1

0xb9d2,	// (0x0000b9d2) list_double_pane_g2_ParamLimits

0xb9d2,	// (0x0000b9d2) list_double_pane_g2

0x0001,

0xf275,	// (0x0000f275) list_double_pane_g_ParamLimits

0xf275,	// (0x0000f275) list_double_pane_g

0xb9de,	// (0x0000b9de) list_double_pane_t1_ParamLimits

0xb9de,	// (0x0000b9de) list_double_pane_t1

0xb9f4,	// (0x0000b9f4) list_double_pane_t2_ParamLimits

0xb9f4,	// (0x0000b9f4) list_double_pane_t2

0x0001,

0xf27a,	// (0x0000f27a) list_double_pane_t_ParamLimits

0xf27a,	// (0x0000f27a) list_double_pane_t

0xba06,	// (0x0000ba06) list_double2_pane_g1_ParamLimits

0xba06,	// (0x0000ba06) list_double2_pane_g1

0x0ea8,	// (0x00000ea8) list_double2_pane_g2_ParamLimits

0x0ea8,	// (0x00000ea8) list_double2_pane_g2

0x0001,

0xf27f,	// (0x0000f27f) list_double2_pane_g_ParamLimits

0xf27f,	// (0x0000f27f) list_double2_pane_g

0x0eb4,	// (0x00000eb4) list_double2_pane_t1_ParamLimits

0x0eb4,	// (0x00000eb4) list_double2_pane_t1

0xba17,	// (0x0000ba17) list_double2_pane_t2_ParamLimits

0xba17,	// (0x0000ba17) list_double2_pane_t2

0x0001,

0xf284,	// (0x0000f284) list_double2_pane_t_ParamLimits

0xf284,	// (0x0000f284) list_double2_pane_t

0x238f,	// (0x0000238f) list_double_number_pane_g1_ParamLimits

0x238f,	// (0x0000238f) list_double_number_pane_g1

0xb9d2,	// (0x0000b9d2) list_double_number_pane_g2_ParamLimits

0xb9d2,	// (0x0000b9d2) list_double_number_pane_g2

0x0001,

0xf275,	// (0x0000f275) list_double_number_pane_g_ParamLimits

0xf275,	// (0x0000f275) list_double_number_pane_g

0xba29,	// (0x0000ba29) list_double_number_pane_t1_ParamLimits

0xba29,	// (0x0000ba29) list_double_number_pane_t1

0xba3b,	// (0x0000ba3b) list_double_number_pane_t2_ParamLimits

0xba3b,	// (0x0000ba3b) list_double_number_pane_t2

0xba51,	// (0x0000ba51) list_double_number_pane_t3_ParamLimits

0xba51,	// (0x0000ba51) list_double_number_pane_t3

0x0002,

0xf289,	// (0x0000f289) list_double_number_pane_t_ParamLimits

0xf289,	// (0x0000f289) list_double_number_pane_t

0x447c,	// (0x0000447c) list_double_graphic_pane_g1_ParamLimits

0x447c,	// (0x0000447c) list_double_graphic_pane_g1

0xba63,	// (0x0000ba63) list_double_graphic_pane_g2_ParamLimits

0xba63,	// (0x0000ba63) list_double_graphic_pane_g2

0xba72,	// (0x0000ba72) list_double_graphic_pane_g3_ParamLimits

0xba72,	// (0x0000ba72) list_double_graphic_pane_g3

0x0003,

0xf290,	// (0x0000f290) list_double_graphic_pane_g_ParamLimits

0xf290,	// (0x0000f290) list_double_graphic_pane_g

0xba8a,	// (0x0000ba8a) list_double_graphic_pane_t1_ParamLimits

0xba8a,	// (0x0000ba8a) list_double_graphic_pane_t1

0xbaa0,	// (0x0000baa0) list_double_graphic_pane_t2_ParamLimits

0xbaa0,	// (0x0000baa0) list_double_graphic_pane_t2

0x0001,

0xf299,	// (0x0000f299) list_double_graphic_pane_t_ParamLimits

0xf299,	// (0x0000f299) list_double_graphic_pane_t

0xbab2,	// (0x0000bab2) list_double2_graphic_pane_g1_ParamLimits

0xbab2,	// (0x0000bab2) list_double2_graphic_pane_g1

0xbabe,	// (0x0000babe) list_double2_graphic_pane_g2_ParamLimits

0xbabe,	// (0x0000babe) list_double2_graphic_pane_g2

0xbaca,	// (0x0000baca) list_double2_graphic_pane_g3_ParamLimits

0xbaca,	// (0x0000baca) list_double2_graphic_pane_g3

0x0002,

0xf29e,	// (0x0000f29e) list_double2_graphic_pane_g_ParamLimits

0xf29e,	// (0x0000f29e) list_double2_graphic_pane_g

0xbad6,	// (0x0000bad6) list_double2_graphic_pane_t1_ParamLimits

0xbad6,	// (0x0000bad6) list_double2_graphic_pane_t1

0xbaec,	// (0x0000baec) list_double2_graphic_pane_t2_ParamLimits

0xbaec,	// (0x0000baec) list_double2_graphic_pane_t2

0x0001,

0xf2a5,	// (0x0000f2a5) list_double2_graphic_pane_t_ParamLimits

0xf2a5,	// (0x0000f2a5) list_double2_graphic_pane_t

0xbafe,	// (0x0000bafe) list_double_large_graphic_pane_g1_ParamLimits

0xbafe,	// (0x0000bafe) list_double_large_graphic_pane_g1

0xbb1d,	// (0x0000bb1d) list_double_large_graphic_pane_g2_ParamLimits

0xbb1d,	// (0x0000bb1d) list_double_large_graphic_pane_g2

0xb9d2,	// (0x0000b9d2) list_double_large_graphic_pane_g3_ParamLimits

0xb9d2,	// (0x0000b9d2) list_double_large_graphic_pane_g3

0xbb2e,	// (0x0000bb2e) list_double_large_graphic_pane_g4_ParamLimits

0xbb2e,	// (0x0000bb2e) list_double_large_graphic_pane_g4

0x0004,

0xf2aa,	// (0x0000f2aa) list_double_large_graphic_pane_g_ParamLimits

0xf2aa,	// (0x0000f2aa) list_double_large_graphic_pane_g

0xbb41,	// (0x0000bb41) list_double_large_graphic_pane_t1_ParamLimits

0xbb41,	// (0x0000bb41) list_double_large_graphic_pane_t1

0xbb5a,	// (0x0000bb5a) list_double_large_graphic_pane_t2_ParamLimits

0xbb5a,	// (0x0000bb5a) list_double_large_graphic_pane_t2

0x0001,

0xf2b5,	// (0x0000f2b5) list_double_large_graphic_pane_t_ParamLimits

0xf2b5,	// (0x0000f2b5) list_double_large_graphic_pane_t

0xbb6c,	// (0x0000bb6c) list_double2_large_graphic_pane_g1_ParamLimits

0xbb6c,	// (0x0000bb6c) list_double2_large_graphic_pane_g1

0xbb78,	// (0x0000bb78) list_double2_large_graphic_pane_g2_ParamLimits

0xbb78,	// (0x0000bb78) list_double2_large_graphic_pane_g2

0xbaca,	// (0x0000baca) list_double2_large_graphic_pane_g3_ParamLimits

0xbaca,	// (0x0000baca) list_double2_large_graphic_pane_g3

0x0002,

0xf2ba,	// (0x0000f2ba) list_double2_large_graphic_pane_g_ParamLimits

0xf2ba,	// (0x0000f2ba) list_double2_large_graphic_pane_g

0xbb89,	// (0x0000bb89) list_double2_large_graphic_pane_t1_ParamLimits

0xbb89,	// (0x0000bb89) list_double2_large_graphic_pane_t1

0xbb9f,	// (0x0000bb9f) list_double2_large_graphic_pane_t2_ParamLimits

0xbb9f,	// (0x0000bb9f) list_double2_large_graphic_pane_t2

0x0001,

0xf2c1,	// (0x0000f2c1) list_double2_large_graphic_pane_t_ParamLimits

0xf2c1,	// (0x0000f2c1) list_double2_large_graphic_pane_t

0xbbb1,	// (0x0000bbb1) list_double_heading_pane_g1_ParamLimits

0xbbb1,	// (0x0000bbb1) list_double_heading_pane_g1

0xbbc2,	// (0x0000bbc2) list_double_heading_pane_g2_ParamLimits

0xbbc2,	// (0x0000bbc2) list_double_heading_pane_g2

0x0001,

0xf2c6,	// (0x0000f2c6) list_double_heading_pane_g_ParamLimits

0xf2c6,	// (0x0000f2c6) list_double_heading_pane_g

0xbbce,	// (0x0000bbce) list_double_heading_pane_t1_ParamLimits

0xbbce,	// (0x0000bbce) list_double_heading_pane_t1

0xbbe4,	// (0x0000bbe4) list_double_heading_pane_t2_ParamLimits

0xbbe4,	// (0x0000bbe4) list_double_heading_pane_t2

0x0001,

0xf2cb,	// (0x0000f2cb) list_double_heading_pane_t_ParamLimits

0xf2cb,	// (0x0000f2cb) list_double_heading_pane_t

0x0fb6,	// (0x00000fb6) list_double_graphic_heading_pane_g1_ParamLimits

0x0fb6,	// (0x00000fb6) list_double_graphic_heading_pane_g1

0xbbb1,	// (0x0000bbb1) list_double_graphic_heading_pane_g2_ParamLimits

0xbbb1,	// (0x0000bbb1) list_double_graphic_heading_pane_g2

0xbbc2,	// (0x0000bbc2) list_double_graphic_heading_pane_g3_ParamLimits

0xbbc2,	// (0x0000bbc2) list_double_graphic_heading_pane_g3

0x0002,

0xf2d0,	// (0x0000f2d0) list_double_graphic_heading_pane_g_ParamLimits

0xf2d0,	// (0x0000f2d0) list_double_graphic_heading_pane_g

0xbbf6,	// (0x0000bbf6) list_double_graphic_heading_pane_t1_ParamLimits

0xbbf6,	// (0x0000bbf6) list_double_graphic_heading_pane_t1

0xbc0c,	// (0x0000bc0c) list_double_graphic_heading_pane_t2_ParamLimits

0xbc0c,	// (0x0000bc0c) list_double_graphic_heading_pane_t2

0x0001,

0xf2d7,	// (0x0000f2d7) list_double_graphic_heading_pane_t_ParamLimits

0xf2d7,	// (0x0000f2d7) list_double_graphic_heading_pane_t

0xbb1d,	// (0x0000bb1d) list_double_time_pane_g1_ParamLimits

0xbb1d,	// (0x0000bb1d) list_double_time_pane_g1

0xb9d2,	// (0x0000b9d2) list_double_time_pane_g2_ParamLimits

0xb9d2,	// (0x0000b9d2) list_double_time_pane_g2

0x0001,

0xf2dc,	// (0x0000f2dc) list_double_time_pane_g_ParamLimits

0xf2dc,	// (0x0000f2dc) list_double_time_pane_g

0xbc1e,	// (0x0000bc1e) list_double_time_pane_t1_ParamLimits

0xbc1e,	// (0x0000bc1e) list_double_time_pane_t1

0xbc34,	// (0x0000bc34) list_double_time_pane_t2_ParamLimits

0xbc34,	// (0x0000bc34) list_double_time_pane_t2

0xbc46,	// (0x0000bc46) list_double_time_pane_t3_ParamLimits

0xbc46,	// (0x0000bc46) list_double_time_pane_t3

0xbc58,	// (0x0000bc58) list_double_time_pane_t4_ParamLimits

0xbc58,	// (0x0000bc58) list_double_time_pane_t4

0x0003,

0xf2e1,	// (0x0000f2e1) list_double_time_pane_t_ParamLimits

0xf2e1,	// (0x0000f2e1) list_double_time_pane_t

0xbabe,	// (0x0000babe) list_setting_pane_g1_ParamLimits

0xbabe,	// (0x0000babe) list_setting_pane_g1

0xbaca,	// (0x0000baca) list_setting_pane_g2_ParamLimits

0xbaca,	// (0x0000baca) list_setting_pane_g2

0x0001,

0xf2ea,	// (0x0000f2ea) list_setting_pane_g_ParamLimits

0xf2ea,	// (0x0000f2ea) list_setting_pane_g

0xbc6a,	// (0x0000bc6a) list_setting_pane_t1_ParamLimits

0xbc6a,	// (0x0000bc6a) list_setting_pane_t1

0xbc81,	// (0x0000bc81) list_setting_pane_t2_ParamLimits

0xbc81,	// (0x0000bc81) list_setting_pane_t2

0x0002,

0xf2ef,	// (0x0000f2ef) list_setting_pane_t_ParamLimits

0xf2ef,	// (0x0000f2ef) list_setting_pane_t

0xbcbe,	// (0x0000bcbe) set_value_pane_cp_ParamLimits

0xbcbe,	// (0x0000bcbe) set_value_pane_cp

0xbabe,	// (0x0000babe) list_setting_number_pane_g1_ParamLimits

0xbabe,	// (0x0000babe) list_setting_number_pane_g1

0xbaca,	// (0x0000baca) list_setting_number_pane_g2_ParamLimits

0xbaca,	// (0x0000baca) list_setting_number_pane_g2

0x0001,

0xf2ea,	// (0x0000f2ea) list_setting_number_pane_g_ParamLimits

0xf2ea,	// (0x0000f2ea) list_setting_number_pane_g

0xbcca,	// (0x0000bcca) list_setting_number_pane_t1_ParamLimits

0xbcca,	// (0x0000bcca) list_setting_number_pane_t1

0xbcde,	// (0x0000bcde) list_setting_number_pane_t2_ParamLimits

0xbcde,	// (0x0000bcde) list_setting_number_pane_t2

0xbcf5,	// (0x0000bcf5) list_setting_number_pane_t3_ParamLimits

0xbcf5,	// (0x0000bcf5) list_setting_number_pane_t3

0x0003,

0xf2f6,	// (0x0000f2f6) list_setting_number_pane_t_ParamLimits

0xf2f6,	// (0x0000f2f6) list_setting_number_pane_t

0xbcbe,	// (0x0000bcbe) set_value_pane_ParamLimits

0xbcbe,	// (0x0000bcbe) set_value_pane

0x121c,	// (0x0000121c) bg_set_opt_pane_ParamLimits

0x121c,	// (0x0000121c) bg_set_opt_pane

0x123d,	// (0x0000123d) set_value_pane_t1

0x124b,	// (0x0000124b) slider_set_pane_cp3

0x1254,	// (0x00001254) volume_small_pane_cp

0x125d,	// (0x0000125d) list_form_gen_pane

0x1266,	// (0x00001266) scroll_pane_cp8

0xbd38,	// (0x0000bd38) form_field_data_pane_ParamLimits

0xbd38,	// (0x0000bd38) form_field_data_pane

0xbd4f,	// (0x0000bd4f) form_field_data_wide_pane_ParamLimits

0xbd4f,	// (0x0000bd4f) form_field_data_wide_pane

0xbd6f,	// (0x0000bd6f) form_field_popup_pane_ParamLimits

0xbd6f,	// (0x0000bd6f) form_field_popup_pane

0xbd87,	// (0x0000bd87) form_field_popup_wide_pane_ParamLimits

0xbd87,	// (0x0000bd87) form_field_popup_wide_pane

0x12f3,	// (0x000012f3) form_field_slider_pane_ParamLimits

0x12f3,	// (0x000012f3) form_field_slider_pane

0x1306,	// (0x00001306) form_field_slider_wide_pane_ParamLimits

0x1306,	// (0x00001306) form_field_slider_wide_pane

0x1319,	// (0x00001319) data_form_pane

0xbdae,	// (0x0000bdae) form_field_data_pane_t1

0x1349,	// (0x00001349) input_focus_pane

0x1357,	// (0x00001357) data_form_wide_pane

0x1383,	// (0x00001383) form_field_data_wide_pane_t1

0x0b6f,	// (0x00000b6f) input_focus_pane_cp6

0xbdc8,	// (0x0000bdc8) form_field_popup_pane_t1

0x1349,	// (0x00001349) input_focus_pane_cp7

0x13bc,	// (0x000013bc) list_form_pane

0x13d0,	// (0x000013d0) form_field_popup_wide_pane_t1

0x1349,	// (0x00001349) input_focus_pane_cp8

0x13e5,	// (0x000013e5) list_form_wide_pane

0xbdea,	// (0x0000bdea) form_field_slider_pane_t1_ParamLimits

0xbdea,	// (0x0000bdea) form_field_slider_pane_t1

0xbe02,	// (0x0000be02) form_field_slider_pane_t2_ParamLimits

0xbe02,	// (0x0000be02) form_field_slider_pane_t2

0x0001,

0xf2ff,	// (0x0000f2ff) form_field_slider_pane_t_ParamLimits

0xf2ff,	// (0x0000f2ff) form_field_slider_pane_t

0x081f,	// (0x0000081f) input_focus_pane_cp9_ParamLimits

0x081f,	// (0x0000081f) input_focus_pane_cp9

0xbe17,	// (0x0000be17) slider_cont_pane_ParamLimits

0xbe17,	// (0x0000be17) slider_cont_pane

0x1436,	// (0x00001436) form_field_slider_wide_pane_t1_ParamLimits

0x1436,	// (0x00001436) form_field_slider_wide_pane_t1

0x1448,	// (0x00001448) form_field_slider_wide_pane_t2_ParamLimits

0x1448,	// (0x00001448) form_field_slider_wide_pane_t2

0x0001,

0xabd0,	// (0x0000abd0) form_field_slider_wide_pane_t_ParamLimits

0xabd0,	// (0x0000abd0) form_field_slider_wide_pane_t

0x081f,	// (0x0000081f) input_focus_pane_cp10_ParamLimits

0x081f,	// (0x0000081f) input_focus_pane_cp10

0xbe2b,	// (0x0000be2b) slider_cont_pane_cp1_ParamLimits

0xbe2b,	// (0x0000be2b) slider_cont_pane_cp1

0xbe3f,	// (0x0000be3f) slider_form_pane_cp

0x1476,	// (0x00001476) input_focus_pane_g1

0x147e,	// (0x0000147e) input_focus_pane_g2

0x1486,	// (0x00001486) input_focus_pane_g3

0x148e,	// (0x0000148e) input_focus_pane_g4

0x1496,	// (0x00001496) input_focus_pane_g5

0x149e,	// (0x0000149e) input_focus_pane_g6

0x14a6,	// (0x000014a6) input_focus_pane_g7

0x14ae,	// (0x000014ae) input_focus_pane_g8

0x14b6,	// (0x000014b6) input_focus_pane_g9

0x002e,	// (0x0000002e) input_focus_pane_g10

0x0009,

0xabd5,	// (0x0000abd5) input_focus_pane_g

0x3e02,	// (0x00003e02) wait_border_pane_g3_copy1

0xbe47,	// (0x0000be47) data_form_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g1_copy1

0xd3d9,	// (0x0000d3d9) data_form_wide_pane_t1

0xbe61,	// (0x0000be61) list_form_graphic_pane_cp_ParamLimits

0xbe61,	// (0x0000be61) list_form_graphic_pane_cp

0x4f55,	// (0x00004f55) slider_form_pane_g1

0x4f5e,	// (0x00004f5e) slider_form_pane_g2

0x0006,

0xf3af,	// (0x0000f3af) slider_form_pane_g

0xbe74,	// (0x0000be74) list_form_graphic_pane_ParamLimits

0xbe74,	// (0x0000be74) list_form_graphic_pane

0x14f0,	// (0x000014f0) list_form_graphic_pane_g1

0x14f8,	// (0x000014f8) list_form_graphic_pane_t1_ParamLimits

0x14f8,	// (0x000014f8) list_form_graphic_pane_t1

0x04f9,	// (0x000004f9) list_highlight_pane_cp5_ParamLimits

0x04f9,	// (0x000004f9) list_highlight_pane_cp5

0x150d,	// (0x0000150d) find_pane_g1

0x1516,	// (0x00001516) input_find_pane

0x151f,	// (0x0000151f) input_find_pane_g1_ParamLimits

0x151f,	// (0x0000151f) input_find_pane_g1

0x152b,	// (0x0000152b) input_find_pane_t1_ParamLimits

0x152b,	// (0x0000152b) input_find_pane_t1

0x1540,	// (0x00001540) input_find_pane_t2_ParamLimits

0x1540,	// (0x00001540) input_find_pane_t2

0x0001,

0xabea,	// (0x0000abea) input_find_pane_t_ParamLimits

0xabea,	// (0x0000abea) input_find_pane_t

0x1555,	// (0x00001555) input_focus_pane_cp5_ParamLimits

0x1555,	// (0x00001555) input_focus_pane_cp5

0x156f,	// (0x0000156f) bg_popup_window_pane_cp2_ParamLimits

0x156f,	// (0x0000156f) bg_popup_window_pane_cp2

0x157c,	// (0x0000157c) listscroll_menu_pane_ParamLimits

0x157c,	// (0x0000157c) listscroll_menu_pane

0xbe92,	// (0x0000be92) popup_submenu_window_ParamLimits

0xbe92,	// (0x0000be92) popup_submenu_window

0x15b0,	// (0x000015b0) find_popup_pane_g1

0x15b8,	// (0x000015b8) input_popup_find_pane_cp

0x1555,	// (0x00001555) input_focus_pane_cp4_ParamLimits

0x1555,	// (0x00001555) input_focus_pane_cp4

0x15d0,	// (0x000015d0) input_popup_find_pane_t1_ParamLimits

0x15d0,	// (0x000015d0) input_popup_find_pane_t1

0x0293,	// (0x00000293) bg_popup_sub_pane_cp

0x15fe,	// (0x000015fe) listscroll_popup_sub_pane

0x1606,	// (0x00001606) list_submenu_pane_ParamLimits

0x1606,	// (0x00001606) list_submenu_pane

0x1617,	// (0x00001617) scroll_pane_cp4

0x161f,	// (0x0000161f) list_single_popup_submenu_pane_ParamLimits

0x161f,	// (0x0000161f) list_single_popup_submenu_pane

0x1633,	// (0x00001633) list_single_popup_submenu_pane_g1

0x163b,	// (0x0000163b) list_single_popup_submenu_pane_t1_ParamLimits

0x163b,	// (0x0000163b) list_single_popup_submenu_pane_t1

0x081f,	// (0x0000081f) bg_active_tab_pane_cp1_ParamLimits

0x081f,	// (0x0000081f) bg_active_tab_pane_cp1

0xbec8,	// (0x0000bec8) tabs_2_active_pane_g1

0xbed0,	// (0x0000bed0) tabs_2_active_pane_t1

0x081f,	// (0x0000081f) bg_passive_tab_pane_cp1_ParamLimits

0x081f,	// (0x0000081f) bg_passive_tab_pane_cp1

0xbec8,	// (0x0000bec8) tabs_2_passive_pane_g1

0xbed0,	// (0x0000bed0) tabs_2_passive_pane_t1

0x04f9,	// (0x000004f9) bg_active_tab_pane_cp4

0xbee2,	// (0x0000bee2) tabs_2_long_active_pane_t1

0x2ad0,	// (0x00002ad0) bg_passive_tab_pane_cp4

0x3660,	// (0x00003660) list_single_midp_graphic_pane_g4_ParamLimits

0x04f9,	// (0x000004f9) bg_active_tab_pane_cp5

0xbef5,	// (0x0000bef5) tabs_3_long_active_pane_t1

0x2ad0,	// (0x00002ad0) bg_passive_tab_pane_cp5

0x3660,	// (0x00003660) list_single_midp_graphic_pane_g4

0x04f9,	// (0x000004f9) bg_popup_window_pane_cp13_ParamLimits

0x04f9,	// (0x000004f9) bg_popup_window_pane_cp13

0x16b2,	// (0x000016b2) listscroll_popup_fast_pane_ParamLimits

0x16b2,	// (0x000016b2) listscroll_popup_fast_pane

0x16be,	// (0x000016be) grid_popup_fast_pane_ParamLimits

0x16be,	// (0x000016be) grid_popup_fast_pane

0x16d0,	// (0x000016d0) scroll_pane_cp9_ParamLimits

0x16d0,	// (0x000016d0) scroll_pane_cp9

0x72ba,	// (0x000072ba) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x72ba,	// (0x000072ba) list_single_graphic_hl_pane_t1_cp2

0x16f4,	// (0x000016f4) input_focus_pane_cp20_ParamLimits

0x16f4,	// (0x000016f4) input_focus_pane_cp20

0x1702,	// (0x00001702) query_popup_data_pane_t1_ParamLimits

0x1702,	// (0x00001702) query_popup_data_pane_t1

0x1715,	// (0x00001715) query_popup_data_pane_t2_ParamLimits

0x1715,	// (0x00001715) query_popup_data_pane_t2

0x175b,	// (0x0000175b) query_popup_data_pane_t3_ParamLimits

0x175b,	// (0x0000175b) query_popup_data_pane_t3

0x179c,	// (0x0000179c) query_popup_data_pane_t4_ParamLimits

0x179c,	// (0x0000179c) query_popup_data_pane_t4

0x17d8,	// (0x000017d8) query_popup_data_pane_t5_ParamLimits

0x17d8,	// (0x000017d8) query_popup_data_pane_t5

0x0004,

0xabef,	// (0x0000abef) query_popup_data_pane_t_ParamLimits

0xabef,	// (0x0000abef) query_popup_data_pane_t

0x1476,	// (0x00001476) bg_set_opt_pane_g1

0x147e,	// (0x0000147e) bg_set_opt_pane_g2

0x1486,	// (0x00001486) bg_set_opt_pane_g3

0x148e,	// (0x0000148e) bg_set_opt_pane_g4

0x1496,	// (0x00001496) bg_set_opt_pane_g5

0x149e,	// (0x0000149e) bg_set_opt_pane_g6

0x14a6,	// (0x000014a6) bg_set_opt_pane_g7

0x14ae,	// (0x000014ae) bg_set_opt_pane_g8

0x14b6,	// (0x000014b6) bg_set_opt_pane_g9

0x0008,

0xabfa,	// (0x0000abfa) bg_set_opt_pane_g

0x20bb,	// (0x000020bb) control_top_pane_stacon_ParamLimits

0x20bb,	// (0x000020bb) control_top_pane_stacon

0x210e,	// (0x0000210e) signal_pane_stacon_ParamLimits

0x210e,	// (0x0000210e) signal_pane_stacon

0x2133,	// (0x00002133) stacon_top_pane_g1_ParamLimits

0x2133,	// (0x00002133) stacon_top_pane_g1

0x2155,	// (0x00002155) title_pane_stacon_ParamLimits

0x2155,	// (0x00002155) title_pane_stacon

0x217f,	// (0x0000217f) uni_indicator_pane_stacon_ParamLimits

0x217f,	// (0x0000217f) uni_indicator_pane_stacon

0x2194,	// (0x00002194) battery_pane_stacon_ParamLimits

0x2194,	// (0x00002194) battery_pane_stacon

0x21d8,	// (0x000021d8) control_bottom_pane_stacon_ParamLimits

0x21d8,	// (0x000021d8) control_bottom_pane_stacon

0x21fb,	// (0x000021fb) navi_pane_stacon_ParamLimits

0x21fb,	// (0x000021fb) navi_pane_stacon

0x221e,	// (0x0000221e) stacon_bottom_pane_g1_ParamLimits

0x221e,	// (0x0000221e) stacon_bottom_pane_g1

0x180f,	// (0x0000180f) aid_levels_signal_lsc_ParamLimits

0x180f,	// (0x0000180f) aid_levels_signal_lsc

0x1826,	// (0x00001826) signal_pane_stacon_g1_ParamLimits

0x1826,	// (0x00001826) signal_pane_stacon_g1

0x183a,	// (0x0000183a) signal_pane_stacon_g2_ParamLimits

0x183a,	// (0x0000183a) signal_pane_stacon_g2

0x0001,

0xac0d,	// (0x0000ac0d) signal_pane_stacon_g_ParamLimits

0xac0d,	// (0x0000ac0d) signal_pane_stacon_g

0x187c,	// (0x0000187c) title_pane_stacon_t1_ParamLimits

0x187c,	// (0x0000187c) title_pane_stacon_t1

0x18a1,	// (0x000018a1) uni_indicator_pane_stacon_g1

0x18ab,	// (0x000018ab) uni_indicator_pane_stacon_g2

0x18b5,	// (0x000018b5) uni_indicator_pane_stacon_g3

0x18bf,	// (0x000018bf) uni_indicator_pane_stacon_g4

0x0003,

0xac19,	// (0x0000ac19) uni_indicator_pane_stacon_g

0x18c9,	// (0x000018c9) control_top_pane_stacon_g1

0x18d1,	// (0x000018d1) control_top_pane_stacon_t1_ParamLimits

0x18d1,	// (0x000018d1) control_top_pane_stacon_t1

0x1908,	// (0x00001908) aid_levels_battery_lsc_ParamLimits

0x1908,	// (0x00001908) aid_levels_battery_lsc

0x1920,	// (0x00001920) battery_pane_stacon_g1_ParamLimits

0x1920,	// (0x00001920) battery_pane_stacon_g1

0x1933,	// (0x00001933) battery_pane_stacon_g2_ParamLimits

0x1933,	// (0x00001933) battery_pane_stacon_g2

0x0001,

0xac22,	// (0x0000ac22) battery_pane_stacon_g_ParamLimits

0xac22,	// (0x0000ac22) battery_pane_stacon_g

0x1971,	// (0x00001971) navi_icon_pane_stacon

0x1985,	// (0x00001985) navi_navi_pane_stacon

0x1971,	// (0x00001971) navi_text_pane_stacon

0x18c9,	// (0x000018c9) control_bottom_pane_stacon_g1

0x1999,	// (0x00001999) control_bottom_pane_stacon_t1_ParamLimits

0x1999,	// (0x00001999) control_bottom_pane_stacon_t1

0xbf07,	// (0x0000bf07) grid_app_pane_ParamLimits

0xbf07,	// (0x0000bf07) grid_app_pane

0xbf3d,	// (0x0000bf3d) scroll_pane_cp15_ParamLimits

0xbf3d,	// (0x0000bf3d) scroll_pane_cp15

0xbf52,	// (0x0000bf52) cell_app_pane_ParamLimits

0xbf52,	// (0x0000bf52) cell_app_pane

0xbf99,	// (0x0000bf99) cell_app_pane_g1_ParamLimits

0xbf99,	// (0x0000bf99) cell_app_pane_g1

0x1a65,	// (0x00001a65) cell_app_pane_g2_ParamLimits

0x1a65,	// (0x00001a65) cell_app_pane_g2

0x0001,

0xf304,	// (0x0000f304) cell_app_pane_g_ParamLimits

0xf304,	// (0x0000f304) cell_app_pane_g

0xbfb9,	// (0x0000bfb9) cell_app_pane_t1_ParamLimits

0xbfb9,	// (0x0000bfb9) cell_app_pane_t1

0x1a88,	// (0x00001a88) grid_highlight_pane_ParamLimits

0x1a88,	// (0x00001a88) grid_highlight_pane

0x1476,	// (0x00001476) cell_highlight_pane_g1

0x147e,	// (0x0000147e) cell_highlight_pane_g2

0x1486,	// (0x00001486) cell_highlight_pane_g3

0x148e,	// (0x0000148e) cell_highlight_pane_g4

0x1496,	// (0x00001496) cell_highlight_pane_g5

0x149e,	// (0x0000149e) cell_highlight_pane_g6

0x14a6,	// (0x000014a6) cell_highlight_pane_g7

0x14ae,	// (0x000014ae) cell_highlight_pane_g8

0x14b6,	// (0x000014b6) cell_highlight_pane_g9

0x002e,	// (0x0000002e) cell_highlight_pane_g10

0x0009,

0xabd5,	// (0x0000abd5) cell_highlight_pane_g

0x1aac,	// (0x00001aac) bg_scroll_pane

0x1acb,	// (0x00001acb) scroll_handle_pane

0x1b1c,	// (0x00001b1c) scroll_bg_pane_g1

0x1b31,	// (0x00001b31) scroll_bg_pane_g2

0x1b49,	// (0x00001b49) scroll_bg_pane_g3

0x0002,

0xac2c,	// (0x0000ac2c) scroll_bg_pane_g

0x1b5e,	// (0x00001b5e) scroll_handle_focus_pane_ParamLimits

0x1b5e,	// (0x00001b5e) scroll_handle_focus_pane

0x1b1c,	// (0x00001b1c) scroll_handle_pane_g1

0x1b6b,	// (0x00001b6b) scroll_handle_pane_g2

0x1b49,	// (0x00001b49) scroll_handle_pane_g3

0x0002,

0xac33,	// (0x0000ac33) scroll_handle_pane_g

0x1555,	// (0x00001555) bg_popup_sub_pane_cp21_ParamLimits

0x1555,	// (0x00001555) bg_popup_sub_pane_cp21

0x1b7f,	// (0x00001b7f) popup_fep_japan_predictive_window_t1_ParamLimits

0x1b7f,	// (0x00001b7f) popup_fep_japan_predictive_window_t1

0x1b99,	// (0x00001b99) popup_fep_japan_predictive_window_t2_ParamLimits

0x1b99,	// (0x00001b99) popup_fep_japan_predictive_window_t2

0x1bcc,	// (0x00001bcc) popup_fep_japan_predictive_window_t3_ParamLimits

0x1bcc,	// (0x00001bcc) popup_fep_japan_predictive_window_t3

0x0002,

0xac3a,	// (0x0000ac3a) popup_fep_japan_predictive_window_t_ParamLimits

0xac3a,	// (0x0000ac3a) popup_fep_japan_predictive_window_t

0x0293,	// (0x00000293) bg_popup_sub_pane_cp23

0x1c03,	// (0x00001c03) listscroll_japin_cand_pane

0x1c0b,	// (0x00001c0b) popup_fep_japan_candidate_window_t1

0x1c19,	// (0x00001c19) candidate_pane_ParamLimits

0x1c19,	// (0x00001c19) candidate_pane

0x1c2b,	// (0x00001c2b) scroll_pane_cp30

0x1c33,	// (0x00001c33) list_single_popup_jap_candidate_pane_ParamLimits

0x1c33,	// (0x00001c33) list_single_popup_jap_candidate_pane

0x0293,	// (0x00000293) list_highlight_pane_cp30

0x1c47,	// (0x00001c47) list_single_popup_jap_candidate_pane_t1

0x1c56,	// (0x00001c56) level_1_signal

0x1c63,	// (0x00001c63) level_2_signal

0x1c70,	// (0x00001c70) level_3_signal

0x1c7d,	// (0x00001c7d) level_4_signal

0x1c8a,	// (0x00001c8a) level_5_signal

0x1c97,	// (0x00001c97) level_6_signal

0x1ca4,	// (0x00001ca4) level_7_signal

0x1c56,	// (0x00001c56) level_1_battery

0x1c63,	// (0x00001c63) level_2_battery

0x1c70,	// (0x00001c70) level_3_battery

0x1c7d,	// (0x00001c7d) level_4_battery

0x1c8a,	// (0x00001c8a) level_5_battery

0x1c97,	// (0x00001c97) level_6_battery

0x1ca4,	// (0x00001ca4) level_7_battery

0x1ce8,	// (0x00001ce8) list_menu_pane_ParamLimits

0x1ce8,	// (0x00001ce8) list_menu_pane

0x1cfe,	// (0x00001cfe) scroll_pane_cp25_ParamLimits

0x1cfe,	// (0x00001cfe) scroll_pane_cp25

0x1d17,	// (0x00001d17) list_double2_graphic_pane_cp2_ParamLimits

0x1d17,	// (0x00001d17) list_double2_graphic_pane_cp2

0x1d17,	// (0x00001d17) list_double2_large_graphic_pane_cp2_ParamLimits

0x1d17,	// (0x00001d17) list_double2_large_graphic_pane_cp2

0x1d17,	// (0x00001d17) list_double2_pane_cp2_ParamLimits

0x1d17,	// (0x00001d17) list_double2_pane_cp2

0x1d17,	// (0x00001d17) list_double_graphic_pane_cp2_ParamLimits

0x1d17,	// (0x00001d17) list_double_graphic_pane_cp2

0x1d17,	// (0x00001d17) list_double_large_graphic_pane_cp2_ParamLimits

0x1d17,	// (0x00001d17) list_double_large_graphic_pane_cp2

0x1d17,	// (0x00001d17) list_double_number_pane_cp2_ParamLimits

0x1d17,	// (0x00001d17) list_double_number_pane_cp2

0x1d17,	// (0x00001d17) list_double_pane_cp2_ParamLimits

0x1d17,	// (0x00001d17) list_double_pane_cp2

0xbfe1,	// (0x0000bfe1) list_single_2graphic_pane_cp2_ParamLimits

0xbfe1,	// (0x0000bfe1) list_single_2graphic_pane_cp2

0xbfe1,	// (0x0000bfe1) list_single_graphic_heading_pane_cp2_ParamLimits

0xbfe1,	// (0x0000bfe1) list_single_graphic_heading_pane_cp2

0xbfe1,	// (0x0000bfe1) list_single_graphic_pane_cp2_ParamLimits

0xbfe1,	// (0x0000bfe1) list_single_graphic_pane_cp2

0xbfe1,	// (0x0000bfe1) list_single_heading_pane_cp2_ParamLimits

0xbfe1,	// (0x0000bfe1) list_single_heading_pane_cp2

0x1d51,	// (0x00001d51) list_single_large_graphic_pane_cp2_ParamLimits

0x1d51,	// (0x00001d51) list_single_large_graphic_pane_cp2

0xbfe1,	// (0x0000bfe1) list_single_number_heading_pane_cp2_ParamLimits

0xbfe1,	// (0x0000bfe1) list_single_number_heading_pane_cp2

0xbfe1,	// (0x0000bfe1) list_single_number_pane_cp2_ParamLimits

0xbfe1,	// (0x0000bfe1) list_single_number_pane_cp2

0xbfe1,	// (0x0000bfe1) list_single_pane_cp2_ParamLimits

0xbfe1,	// (0x0000bfe1) list_single_pane_cp2

0x1e27,	// (0x00001e27) bg_popup_sub_pane_cp22

0x1e49,	// (0x00001e49) popup_side_volume_key_window_g1

0x1e6d,	// (0x00001e6d) popup_side_volume_key_window_t1

0x1e89,	// (0x00001e89) volume_small_pane_cp1

0x081f,	// (0x0000081f) bg_popup_sub_pane_cp24_ParamLimits

0x081f,	// (0x0000081f) bg_popup_sub_pane_cp24

0x1e91,	// (0x00001e91) fep_china_uni_candidate_pane_ParamLimits

0x1e91,	// (0x00001e91) fep_china_uni_candidate_pane

0x1ea5,	// (0x00001ea5) fep_china_uni_entry_pane

0x1eb5,	// (0x00001eb5) popup_fep_china_uni_window_g1

0x1ed1,	// (0x00001ed1) fep_china_uni_entry_pane_g1

0x1ed9,	// (0x00001ed9) fep_china_uni_entry_pane_g2

0x0001,

0xac6b,	// (0x0000ac6b) fep_china_uni_entry_pane_g

0x1ee1,	// (0x00001ee1) fep_entry_item_pane

0x1eeb,	// (0x00001eeb) fep_candidate_item_pane

0x1ef3,	// (0x00001ef3) fep_china_uni_candidate_pane_g1

0x1efb,	// (0x00001efb) fep_china_uni_candidate_pane_g2

0x1f03,	// (0x00001f03) fep_china_uni_candidate_pane_g3

0x1f0b,	// (0x00001f0b) fep_china_uni_candidate_pane_g4

0x0003,

0xac70,	// (0x0000ac70) fep_china_uni_candidate_pane_g

0x002e,	// (0x0000002e) fep_entry_item_pane_g1

0x1f13,	// (0x00001f13) fep_entry_item_pane_t1_ParamLimits

0x1f13,	// (0x00001f13) fep_entry_item_pane_t1

0x1f29,	// (0x00001f29) fep_candidate_item_pane_t1_ParamLimits

0x1f29,	// (0x00001f29) fep_candidate_item_pane_t1

0x1f3e,	// (0x00001f3e) fep_candidate_item_pane_t2_ParamLimits

0x1f3e,	// (0x00001f3e) fep_candidate_item_pane_t2

0x0001,

0xac79,	// (0x0000ac79) fep_candidate_item_pane_t_ParamLimits

0xac79,	// (0x0000ac79) fep_candidate_item_pane_t

0x04f9,	// (0x000004f9) list_highlight_pane_cp31_ParamLimits

0x04f9,	// (0x000004f9) list_highlight_pane_cp31

0x1f50,	// (0x00001f50) level_1_signal_lsc

0x1f59,	// (0x00001f59) level_2_signal_lsc

0x1f62,	// (0x00001f62) level_3_signal_lsc

0x1f6b,	// (0x00001f6b) level_4_signal_lsc

0x1f74,	// (0x00001f74) level_5_signal_lsc

0x1f7d,	// (0x00001f7d) level_6_signal_lsc

0x1f86,	// (0x00001f86) level_7_signal_lsc

0x1f86,	// (0x00001f86) level_1_battery_lsc

0x1f8f,	// (0x00001f8f) level_2_battery_lsc

0x1f98,	// (0x00001f98) level_3_battery_lsc

0x1fa1,	// (0x00001fa1) level_4_battery_lsc

0x1faa,	// (0x00001faa) level_5_battery_lsc

0x1fb3,	// (0x00001fb3) level_6_battery_lsc

0x1f50,	// (0x00001f50) level_7_battery_lsc

0x1fbc,	// (0x00001fbc) scroll_handle_focus_pane_g1

0x1fc5,	// (0x00001fc5) scroll_handle_focus_pane_g2

0x1fce,	// (0x00001fce) scroll_handle_focus_pane_g3

0x0002,

0xac7e,	// (0x0000ac7e) scroll_handle_focus_pane_g

0x1fd7,	// (0x00001fd7) list_single_2graphic_pane_g1_ParamLimits

0x1fd7,	// (0x00001fd7) list_single_2graphic_pane_g1

0xb9c1,	// (0x0000b9c1) list_single_2graphic_pane_g2_ParamLimits

0xb9c1,	// (0x0000b9c1) list_single_2graphic_pane_g2

0x0dbd,	// (0x00000dbd) list_single_2graphic_pane_g3_ParamLimits

0x0dbd,	// (0x00000dbd) list_single_2graphic_pane_g3

0x1fe3,	// (0x00001fe3) list_single_2graphic_pane_g4_ParamLimits

0x1fe3,	// (0x00001fe3) list_single_2graphic_pane_g4

0x0003,

0xf312,	// (0x0000f312) list_single_2graphic_pane_g_ParamLimits

0xf312,	// (0x0000f312) list_single_2graphic_pane_g

0x1ff4,	// (0x00001ff4) list_single_2graphic_pane_t1_ParamLimits

0x1ff4,	// (0x00001ff4) list_single_2graphic_pane_t1

0xc06e,	// (0x0000c06e) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc06e,	// (0x0000c06e) list_double2_graphic_large_graphic_pane_g1

0xbb78,	// (0x0000bb78) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xbb78,	// (0x0000bb78) list_double2_graphic_large_graphic_pane_g2

0xbaca,	// (0x0000baca) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xbaca,	// (0x0000baca) list_double2_graphic_large_graphic_pane_g3

0xc080,	// (0x0000c080) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xc080,	// (0x0000c080) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf31b,	// (0x0000f31b) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf31b,	// (0x0000f31b) list_double2_graphic_large_graphic_pane_g

0xc08c,	// (0x0000c08c) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xc08c,	// (0x0000c08c) list_double2_graphic_large_graphic_pane_t1

0xc0a2,	// (0x0000c0a2) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xc0a2,	// (0x0000c0a2) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf324,	// (0x0000f324) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf324,	// (0x0000f324) list_double2_graphic_large_graphic_pane_t

0x22e5,	// (0x000022e5) popup_fast_swap_window_ParamLimits

0x22e5,	// (0x000022e5) popup_fast_swap_window

0x2301,	// (0x00002301) popup_side_volume_key_window

0x231b,	// (0x0000231b) stacon_top_pane

0x2325,	// (0x00002325) status_pane_ParamLimits

0x2325,	// (0x00002325) status_pane

0xc11c,	// (0x0000c11c) status_small_pane

0x0293,	// (0x00000293) control_pane

0x0293,	// (0x00000293) stacon_bottom_pane

0x1266,	// (0x00001266) scroll_pane_cp121

0x125d,	// (0x0000125d) set_content_pane

0xc0b4,	// (0x0000c0b4) bg_active_tab_pane_g1_cp1

0x206f,	// (0x0000206f) bg_active_tab_pane_g2_cp1

0xc0bd,	// (0x0000c0bd) bg_active_tab_pane_g3_cp1

0xc0b4,	// (0x0000c0b4) bg_passive_tab_pane_g1_cp1

0x206f,	// (0x0000206f) bg_passive_tab_pane_g2_cp1

0xc0bd,	// (0x0000c0bd) bg_passive_tab_pane_g3_cp1

0xc0c6,	// (0x0000c0c6) bg_active_tab_pane_g1_cp2

0x206f,	// (0x0000206f) bg_active_tab_pane_g2_cp2

0xc0cf,	// (0x0000c0cf) bg_active_tab_pane_g3_cp2

0xc0c6,	// (0x0000c0c6) bg_passive_tab_pane_g1_cp2

0x206f,	// (0x0000206f) bg_passive_tab_pane_g2_cp2

0xc0cf,	// (0x0000c0cf) bg_passive_tab_pane_g3_cp2

0x2093,	// (0x00002093) bg_active_tab_pane_g1_cp3

0x206f,	// (0x0000206f) bg_active_tab_pane_g2_cp3

0x209c,	// (0x0000209c) bg_active_tab_pane_g3_cp3

0x2093,	// (0x00002093) bg_passive_tab_pane_g1_cp3

0x206f,	// (0x0000206f) bg_passive_tab_pane_g2_cp3

0x209c,	// (0x0000209c) bg_passive_tab_pane_g3_cp3

0xc0d8,	// (0x0000c0d8) bg_active_tab_pane_g1_cp4

0x206f,	// (0x0000206f) bg_active_tab_pane_g2_cp4

0xc0e3,	// (0x0000c0e3) bg_active_tab_pane_g3_cp4

0xc0d8,	// (0x0000c0d8) bg_passive_tab_pane_g1_cp4

0x206f,	// (0x0000206f) bg_passive_tab_pane_g2_cp4

0xc0e3,	// (0x0000c0e3) bg_passive_tab_pane_g3_cp4

0x223a,	// (0x0000223a) bg_active_tab_pane_g1_cp5

0x206f,	// (0x0000206f) bg_active_tab_pane_g2_cp5

0x2243,	// (0x00002243) bg_active_tab_pane_g3_cp5

0x223a,	// (0x0000223a) bg_passive_tab_pane_g1_cp5

0x206f,	// (0x0000206f) bg_passive_tab_pane_g2_cp5

0x2243,	// (0x00002243) bg_passive_tab_pane_g3_cp5

0x574a,	// (0x0000574a) list_set_graphic_pane_ParamLimits

0x574a,	// (0x0000574a) list_set_graphic_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp4

0xc0ee,	// (0x0000c0ee) list_set_graphic_pane_g1_ParamLimits

0xc0ee,	// (0x0000c0ee) list_set_graphic_pane_g1

0xc0fa,	// (0x0000c0fa) list_set_graphic_pane_g2_ParamLimits

0xc0fa,	// (0x0000c0fa) list_set_graphic_pane_g2

0x0001,

0xf329,	// (0x0000f329) list_set_graphic_pane_g_ParamLimits

0xf329,	// (0x0000f329) list_set_graphic_pane_g

0x0009,

0xb026,	// (0x0000b026) volume_small_pane_cp_g

0x2298,	// (0x00002298) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x2298,	// (0x00002298) list_double2_large_graphic_pane_g1_cp2

0x22a4,	// (0x000022a4) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x22a4,	// (0x000022a4) list_double2_large_graphic_pane_g2_cp2

0x22b5,	// (0x000022b5) list_double2_large_graphic_pane_g3_cp2

0x22bd,	// (0x000022bd) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x22bd,	// (0x000022bd) list_double2_large_graphic_pane_t1_cp2

0x22d3,	// (0x000022d3) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x22d3,	// (0x000022d3) list_double2_large_graphic_pane_t2_cp2

0x4a39,	// (0x00004a39) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4a39,	// (0x00004a39) list_double_large_graphic_pane_g1_cp2

0x4a4a,	// (0x00004a4a) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4a4a,	// (0x00004a4a) list_double_large_graphic_pane_g2_cp2

0x244c,	// (0x0000244c) list_double_large_graphic_pane_g3_cp2

0x4a5b,	// (0x00004a5b) list_double_large_graphic_pane_g4_cp

0x4a63,	// (0x00004a63) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4a63,	// (0x00004a63) list_double_large_graphic_pane_t1_cp2

0x4a7a,	// (0x00004a7a) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4a7a,	// (0x00004a7a) list_double_large_graphic_pane_t2_cp2

0x233e,	// (0x0000233e) list_double2_graphic_pane_g1_cp2_ParamLimits

0x233e,	// (0x0000233e) list_double2_graphic_pane_g1_cp2

0x234c,	// (0x0000234c) list_double2_graphic_pane_g2_cp2_ParamLimits

0x234c,	// (0x0000234c) list_double2_graphic_pane_g2_cp2

0x235d,	// (0x0000235d) list_double2_graphic_pane_g3_cp2

0x2367,	// (0x00002367) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2367,	// (0x00002367) list_double2_graphic_pane_t1_cp2

0x237d,	// (0x0000237d) list_double2_graphic_pane_t2_cp2_ParamLimits

0x237d,	// (0x0000237d) list_double2_graphic_pane_t2_cp2

0x238f,	// (0x0000238f) list_single_number_heading_pane_g1_cp2_ParamLimits

0x238f,	// (0x0000238f) list_single_number_heading_pane_g1_cp2

0x239b,	// (0x0000239b) list_single_number_heading_pane_g2_cp2

0x23a3,	// (0x000023a3) list_single_number_heading_pane_t1_cp2_ParamLimits

0x23a3,	// (0x000023a3) list_single_number_heading_pane_t1_cp2

0x23b9,	// (0x000023b9) list_single_number_heading_pane_t2_cp2_ParamLimits

0x23b9,	// (0x000023b9) list_single_number_heading_pane_t2_cp2

0x23cb,	// (0x000023cb) list_single_number_heading_pane_t3_cp2_ParamLimits

0x23cb,	// (0x000023cb) list_single_number_heading_pane_t3_cp2

0x238f,	// (0x0000238f) list_single_heading_pane_g1_cp2_ParamLimits

0x238f,	// (0x0000238f) list_single_heading_pane_g1_cp2

0x239b,	// (0x0000239b) list_single_heading_pane_g2_cp2

0x23a3,	// (0x000023a3) list_single_heading_pane_t1_cp2_ParamLimits

0x23a3,	// (0x000023a3) list_single_heading_pane_t1_cp2

0x4843,	// (0x00004843) list_single_heading_pane_t2_cp2_ParamLimits

0x4843,	// (0x00004843) list_single_heading_pane_t2_cp2

0x478b,	// (0x0000478b) list_double_graphic_pane_g1_cp2_ParamLimits

0x478b,	// (0x0000478b) list_double_graphic_pane_g1_cp2

0x4797,	// (0x00004797) list_double_graphic_pane_g2_cp2_ParamLimits

0x4797,	// (0x00004797) list_double_graphic_pane_g2_cp2

0x47a6,	// (0x000047a6) list_double_graphic_pane_g3_cp2

0x47ae,	// (0x000047ae) list_double_graphic_pane_t1_cp2_ParamLimits

0x47ae,	// (0x000047ae) list_double_graphic_pane_t1_cp2

0x47c4,	// (0x000047c4) list_double_graphic_pane_t2_cp2_ParamLimits

0x47c4,	// (0x000047c4) list_double_graphic_pane_t2_cp2

0x2440,	// (0x00002440) list_double_number_pane_g1_cp2_ParamLimits

0x2440,	// (0x00002440) list_double_number_pane_g1_cp2

0x244c,	// (0x0000244c) list_double_number_pane_g2_cp2

0x474f,	// (0x0000474f) list_double_number_pane_t1_cp2_ParamLimits

0x474f,	// (0x0000474f) list_double_number_pane_t1_cp2

0x4763,	// (0x00004763) list_double_number_pane_t2_cp2_ParamLimits

0x4763,	// (0x00004763) list_double_number_pane_t2_cp2

0x4779,	// (0x00004779) list_double_number_pane_t3_cp2_ParamLimits

0x4779,	// (0x00004779) list_double_number_pane_t3_cp2

0x4627,	// (0x00004627) list_single_graphic_pane_g1_cp2_ParamLimits

0x4627,	// (0x00004627) list_single_graphic_pane_g1_cp2

0x0db1,	// (0x00000db1) list_single_graphic_pane_g2_cp2_ParamLimits

0x0db1,	// (0x00000db1) list_single_graphic_pane_g2_cp2

0x24a4,	// (0x000024a4) list_single_graphic_pane_g3_cp2

0x45fd,	// (0x000045fd) list_single_graphic_pane_t1_cp2_ParamLimits

0x45fd,	// (0x000045fd) list_single_graphic_pane_t1_cp2

0x0db1,	// (0x00000db1) list_single_number_pane_g1_cp2_ParamLimits

0x0db1,	// (0x00000db1) list_single_number_pane_g1_cp2

0x24a4,	// (0x000024a4) list_single_number_pane_g2_cp2

0x45fd,	// (0x000045fd) list_single_number_pane_t1_cp2_ParamLimits

0x45fd,	// (0x000045fd) list_single_number_pane_t1_cp2

0x4613,	// (0x00004613) list_single_number_pane_t2_cp2_ParamLimits

0x4613,	// (0x00004613) list_single_number_pane_t2_cp2

0x22a4,	// (0x000022a4) list_double2_pane_g1_cp2_ParamLimits

0x22a4,	// (0x000022a4) list_double2_pane_g1_cp2

0x22b5,	// (0x000022b5) list_double2_pane_g2_cp2

0x2418,	// (0x00002418) list_double2_pane_t1_cp2_ParamLimits

0x2418,	// (0x00002418) list_double2_pane_t1_cp2

0x242e,	// (0x0000242e) list_double2_pane_t2_cp2_ParamLimits

0x242e,	// (0x0000242e) list_double2_pane_t2_cp2

0x2440,	// (0x00002440) list_double_pane_g1_cp2_ParamLimits

0x2440,	// (0x00002440) list_double_pane_g1_cp2

0x244c,	// (0x0000244c) list_double_pane_g2_cp2

0x2454,	// (0x00002454) list_double_pane_t1_cp2_ParamLimits

0x2454,	// (0x00002454) list_double_pane_t1_cp2

0x246a,	// (0x0000246a) list_double_pane_t2_cp2_ParamLimits

0x246a,	// (0x0000246a) list_double_pane_t2_cp2

0x2494,	// (0x00002494) list_single_pane_cp2_g3

0x0db1,	// (0x00000db1) list_single_pane_g1_cp2_ParamLimits

0x0db1,	// (0x00000db1) list_single_pane_g1_cp2

0x24a4,	// (0x000024a4) list_single_pane_g2_cp2

0x24ac,	// (0x000024ac) list_single_pane_t1_cp2_ParamLimits

0x24ac,	// (0x000024ac) list_single_pane_t1_cp2

0x24c4,	// (0x000024c4) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x24c4,	// (0x000024c4) list_single_large_graphic_pane_g1_cp2

0x24d0,	// (0x000024d0) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x24d0,	// (0x000024d0) list_single_large_graphic_pane_g2_cp2

0x24dc,	// (0x000024dc) list_single_large_graphic_pane_g3_cp2

0x24e4,	// (0x000024e4) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x24e4,	// (0x000024e4) list_single_large_graphic_pane_g4_cp1

0x24fe,	// (0x000024fe) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x24fe,	// (0x000024fe) list_single_large_graphic_pane_t1_cp2

0x447c,	// (0x0000447c) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x447c,	// (0x0000447c) list_single_graphic_heading_pane_g1_cp2

0x4449,	// (0x00004449) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x4449,	// (0x00004449) list_single_graphic_heading_pane_g4_cp2

0x24a4,	// (0x000024a4) list_single_graphic_heading_pane_g5_cp2

0x4488,	// (0x00004488) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x4488,	// (0x00004488) list_single_graphic_heading_pane_t1_cp2

0x449e,	// (0x0000449e) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x449e,	// (0x0000449e) list_single_graphic_heading_pane_t2_cp2

0x443d,	// (0x0000443d) list_single_2graphic_pane_g1_cp2_ParamLimits

0x443d,	// (0x0000443d) list_single_2graphic_pane_g1_cp2

0x4449,	// (0x00004449) list_single_2graphic_pane_g2_cp2_ParamLimits

0x4449,	// (0x00004449) list_single_2graphic_pane_g2_cp2

0x24a4,	// (0x000024a4) list_single_2graphic_pane_g3_cp2

0x445a,	// (0x0000445a) list_single_2graphic_pane_g4_cp2_ParamLimits

0x445a,	// (0x0000445a) list_single_2graphic_pane_g4_cp2

0x4466,	// (0x00004466) list_single_2graphic_pane_t1_cp2_ParamLimits

0x4466,	// (0x00004466) list_single_2graphic_pane_t1_cp2

0x002e,	// (0x0000002e) list_highlight_pane_g10_cp1

0x4015,	// (0x00004015) list_highlight_pane_g1_cp1

0x401d,	// (0x0000401d) list_highlight_pane_g2_cp1

0x4025,	// (0x00004025) list_highlight_pane_g3_cp1

0x402d,	// (0x0000402d) list_highlight_pane_g4_cp1

0x4035,	// (0x00004035) list_highlight_pane_g5_cp1

0x403d,	// (0x0000403d) list_highlight_pane_g6_cp1

0x4045,	// (0x00004045) list_highlight_pane_g7_cp1

0x404d,	// (0x0000404d) list_highlight_pane_g8_cp1

0x4055,	// (0x00004055) list_highlight_pane_g9_cp1

0xd005,	// (0x0000d005) form_field_slider_pane_t3

0xd015,	// (0x0000d015) form_field_slider_pane_t4

0x3f49,	// (0x00003f49) slider_form_pane_ParamLimits

0x3f49,	// (0x00003f49) slider_form_pane

0x0293,	// (0x00000293) control_abbreviations

0x0293,	// (0x00000293) control_conventions

0x0293,	// (0x00000293) control_definitions

0x0293,	// (0x00000293) format_table_attribute

0x488d,	// (0x0000488d) bg_popup_preview_window_pane_g9

0x0293,	// (0x00000293) format_table_data2

0x0293,	// (0x00000293) format_table_data3

0x0293,	// (0x00000293) format_table_data_example

0x0008,

0x0293,	// (0x00000293) intro_purpose

0xae2c,	// (0x0000ae2c) bg_popup_preview_window_pane_g

0x0293,	// (0x00000293) texts_category

0x0293,	// (0x00000293) texts_graphics

0x2514,	// (0x00002514) text_digital

0x2523,	// (0x00002523) text_primary

0x2532,	// (0x00002532) text_primary_small

0x2541,	// (0x00002541) text_secondary

0x2550,	// (0x00002550) text_title

0x517b,	// (0x0000517b) bg_passive_tab_pane_g1_cp3_srt

0x206f,	// (0x0000206f) bg_passive_tab_pane_g2_cp3_srt

0x5184,	// (0x00005184) bg_passive_tab_pane_g3_cp3_srt

0x081f,	// (0x0000081f) bg_active_tab_pane_cp3_srt_ParamLimits

0x081f,	// (0x0000081f) bg_active_tab_pane_cp3_srt

0x518d,	// (0x0000518d) tabs_4_active_pane_srt_g1

0xd495,	// (0x0000d495) tabs_4_active_pane_srt_t1_ParamLimits

0xd495,	// (0x0000d495) tabs_4_active_pane_srt_t1

0x517b,	// (0x0000517b) bg_active_tab_pane_g1_cp3_copy1

0x206f,	// (0x0000206f) bg_active_tab_pane_g2_cp3_copy1

0x5184,	// (0x00005184) bg_active_tab_pane_g3_cp3_copy1

0x04f9,	// (0x000004f9) tabs_2_long_active_pane_srt_ParamLimits

0x04f9,	// (0x000004f9) tabs_2_long_active_pane_srt

0x04f9,	// (0x000004f9) tabs_2_long_passive_pane_srt_ParamLimits

0x04f9,	// (0x000004f9) tabs_2_long_passive_pane_srt

0x2ad0,	// (0x00002ad0) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2ad0,	// (0x00002ad0) bg_passive_tab_pane_cp4_srt

0x4d1e,	// (0x00004d1e) bg_passive_tab_pane_g1_cp4_srt

0x206f,	// (0x0000206f) bg_passive_tab_pane_g2_cp4_srt

0x4d27,	// (0x00004d27) bg_passive_tab_pane_g3_cp4_srt

0x04f9,	// (0x000004f9) bg_active_tab_pane_cp4_srt_ParamLimits

0x04f9,	// (0x000004f9) bg_active_tab_pane_cp4_srt

0xd270,	// (0x0000d270) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd270,	// (0x0000d270) tabs_2_long_active_pane_srt_t1

0x4d1e,	// (0x00004d1e) bg_active_tab_pane_g1_cp4_srt

0x206f,	// (0x0000206f) bg_active_tab_pane_g2_cp4_srt

0x4d27,	// (0x00004d27) bg_active_tab_pane_g3_cp4_srt

0x081f,	// (0x0000081f) tabs_3_long_active_pane_srt_ParamLimits

0x081f,	// (0x0000081f) tabs_3_long_active_pane_srt

0x081f,	// (0x0000081f) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x081f,	// (0x0000081f) tabs_3_long_passive_pane_cp_srt

0x081f,	// (0x0000081f) tabs_3_long_passive_pane_srt_ParamLimits

0x081f,	// (0x0000081f) tabs_3_long_passive_pane_srt

0x2ad0,	// (0x00002ad0) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2ad0,	// (0x00002ad0) bg_passive_tab_pane_cp5_srt

0x223a,	// (0x0000223a) bg_passive_tab_pane_g1_cp5_srt

0x206f,	// (0x0000206f) bg_passive_tab_pane_g2_cp5_srt

0x2243,	// (0x00002243) bg_passive_tab_pane_g3_cp5_srt

0x04f9,	// (0x000004f9) bg_active_tab_pane_cp5_srt_ParamLimits

0x04f9,	// (0x000004f9) bg_active_tab_pane_cp5_srt

0xd25a,	// (0x0000d25a) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd25a,	// (0x0000d25a) tabs_3_long_active_pane_srt_t1

0x223a,	// (0x0000223a) bg_active_tab_pane_g1_cp5_srt

0x206f,	// (0x0000206f) bg_active_tab_pane_g2_cp5_srt

0x2243,	// (0x00002243) bg_active_tab_pane_g3_cp5_srt

0x4cfe,	// (0x00004cfe) navi_text_pane_srt_t1

0x4cf6,	// (0x00004cf6) navi_icon_pane_srt_g1

0x27be,	// (0x000027be) midp_editing_number_pane_srt

0x255f,	// (0x0000255f) midp_ticker_pane_srt

0x27c6,	// (0x000027c6) midp_ticker_pane_srt_g1

0x27ce,	// (0x000027ce) midp_ticker_pane_srt_g2

0x0001,

0xacbb,	// (0x0000acbb) midp_ticker_pane_srt_g

0x27d6,	// (0x000027d6) midp_ticker_pane_srt_t1

0x4ce7,	// (0x00004ce7) midp_editing_number_pane_t1_copy1

0x2ad0,	// (0x00002ad0) listscroll_midp_pane

0x2ad0,	// (0x00002ad0) midp_form_pane

0x25cd,	// (0x000025cd) midp_info_popup_window_ParamLimits

0x25cd,	// (0x000025cd) midp_info_popup_window

0x1555,	// (0x00001555) bg_popup_sub_pane_cp50_ParamLimits

0x1555,	// (0x00001555) bg_popup_sub_pane_cp50

0x3c4a,	// (0x00003c4a) listscroll_midp_info_pane_ParamLimits

0x3c4a,	// (0x00003c4a) listscroll_midp_info_pane

0x3c32,	// (0x00003c32) listscroll_form_midp_pane_ParamLimits

0x3c32,	// (0x00003c32) listscroll_form_midp_pane

0x3c3e,	// (0x00003c3e) scroll_bar_cp050

0xcff9,	// (0x0000cff9) list_midp_pane

0x5fa8,	// (0x00005fa8) signal_pane_g2_cp

0x3b4c,	// (0x00003b4c) listscroll_midp_info_pane_t1_ParamLimits

0x3b4c,	// (0x00003b4c) listscroll_midp_info_pane_t1

0x3b64,	// (0x00003b64) listscroll_midp_info_pane_t2_ParamLimits

0x3b64,	// (0x00003b64) listscroll_midp_info_pane_t2

0x3ba2,	// (0x00003ba2) listscroll_midp_info_pane_t3_ParamLimits

0x3ba2,	// (0x00003ba2) listscroll_midp_info_pane_t3

0x3bdc,	// (0x00003bdc) listscroll_midp_info_pane_t4_ParamLimits

0x3bdc,	// (0x00003bdc) listscroll_midp_info_pane_t4

0x0003,

0xad67,	// (0x0000ad67) listscroll_midp_info_pane_t_ParamLimits

0xad67,	// (0x0000ad67) listscroll_midp_info_pane_t

0x1617,	// (0x00001617) scroll_pane_cp21

0x3aee,	// (0x00003aee) form_midp_field_choice_group_pane

0x3af7,	// (0x00003af7) form_midp_field_text_pane

0x3b32,	// (0x00003b32) form_midp_field_time_pane

0x3b3a,	// (0x00003b3a) form_midp_gauge_slider_pane

0x3b43,	// (0x00003b43) form_midp_gauge_wait_pane

0x0293,	// (0x00000293) form_midp_image_pane

0xcfdf,	// (0x0000cfdf) list_single_midp_pane_ParamLimits

0xcfdf,	// (0x0000cfdf) list_single_midp_pane

0xcfbc,	// (0x0000cfbc) form_midp_field_text_pane_t1

0x378d,	// (0x0000378d) input_focus_pane_cp050

0x3aa7,	// (0x00003aa7) list_midp_form_text_pane

0x3a3b,	// (0x00003a3b) form_midp_field_choice_group_pane_t1

0x3a49,	// (0x00003a49) input_focus_pane_cp051

0x3a5d,	// (0x00003a5d) list_midp_choice_pane

0x0293,	// (0x00000293) status_idle_pane

0x3a1f,	// (0x00003a1f) form_midp_field_time_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g2_copy1

0x3a2d,	// (0x00003a2d) form_midp_field_time_pane_t2

0x0001,

0x267d,	// (0x0000267d) aid_navinavi_width_2_pane

0xad62,	// (0x0000ad62) form_midp_field_time_pane_t

0x0293,	// (0x00000293) input_focus_pane_cp052

0x0293,	// (0x00000293) bg_input_focus_pane_cp040

0x39df,	// (0x000039df) form_midp_gauge_slider_pane_t1

0x39ed,	// (0x000039ed) form_midp_gauge_slider_pane_t2

0xcf9c,	// (0x0000cf9c) form_midp_gauge_slider_pane_t3

0xcfac,	// (0x0000cfac) form_midp_gauge_slider_pane_t4

0x0003,

0xf37b,	// (0x0000f37b) form_midp_gauge_slider_pane_t

0x3a17,	// (0x00003a17) form_midp_slider_pane

0x04f9,	// (0x000004f9) bg_input_focus_pane_cp041_ParamLimits

0x04f9,	// (0x000004f9) bg_input_focus_pane_cp041

0x39ac,	// (0x000039ac) form_midp_gauge_wait_pane_t1_ParamLimits

0x39ac,	// (0x000039ac) form_midp_gauge_wait_pane_t1

0x39be,	// (0x000039be) form_midp_gauge_wait_pane_t2_ParamLimits

0x39be,	// (0x000039be) form_midp_gauge_wait_pane_t2

0x0001,

0xad54,	// (0x0000ad54) form_midp_gauge_wait_pane_t_ParamLimits

0xad54,	// (0x0000ad54) form_midp_gauge_wait_pane_t

0x39d0,	// (0x000039d0) form_midp_wait_pane_ParamLimits

0x39d0,	// (0x000039d0) form_midp_wait_pane

0x3976,	// (0x00003976) form_midp_image_pane_g1

0x397f,	// (0x0000397f) form_midp_image_pane_t1

0x398e,	// (0x0000398e) form_midp_image_pane_t2

0x399d,	// (0x0000399d) form_midp_image_pane_t3

0x0002,

0xad4d,	// (0x0000ad4d) form_midp_image_pane_t

0x395e,	// (0x0000395e) list_single_midp_pane_g1

0x3967,	// (0x00003967) list_single_midp_pane_t1

0xcf86,	// (0x0000cf86) list_midp_form_item_pane_ParamLimits

0xcf86,	// (0x0000cf86) list_midp_form_item_pane

0x2625,	// (0x00002625) list_midp_form_item_pane_t1

0x2634,	// (0x00002634) midp_ticker_pane_g1

0x2640,	// (0x00002640) midp_ticker_pane_g2

0x0001,

0xaca1,	// (0x0000aca1) midp_ticker_pane_g

0x264c,	// (0x0000264c) midp_ticker_pane_t1

0x4fd5,	// (0x00004fd5) midp_editing_number_pane_t1

0x4fb3,	// (0x00004fb3) midp_editing_number_pane

0x4fc2,	// (0x00004fc2) midp_ticker_pane

0x4cc5,	// (0x00004cc5) ai_message_heading_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp14

0x4ccd,	// (0x00004ccd) listscroll_ai_message_pane

0x4c4f,	// (0x00004c4f) ai_message_heading_pane_g1_ParamLimits

0x4c4f,	// (0x00004c4f) ai_message_heading_pane_g1

0x4c5b,	// (0x00004c5b) ai_message_heading_pane_g2_ParamLimits

0x4c5b,	// (0x00004c5b) ai_message_heading_pane_g2

0x4c67,	// (0x00004c67) ai_message_heading_pane_g3_ParamLimits

0x4c67,	// (0x00004c67) ai_message_heading_pane_g3

0x4c73,	// (0x00004c73) ai_message_heading_pane_g4_ParamLimits

0x4c73,	// (0x00004c73) ai_message_heading_pane_g4

0x0003,

0xae8e,	// (0x0000ae8e) ai_message_heading_pane_g_ParamLimits

0xae8e,	// (0x0000ae8e) ai_message_heading_pane_g

0x4c7f,	// (0x00004c7f) ai_message_heading_pane_t1_ParamLimits

0x4c7f,	// (0x00004c7f) ai_message_heading_pane_t1

0x4c99,	// (0x00004c99) ai_message_heading_pane_t2_ParamLimits

0x4c99,	// (0x00004c99) ai_message_heading_pane_t2

0x0001,

0xae97,	// (0x0000ae97) ai_message_heading_pane_t_ParamLimits

0xae97,	// (0x0000ae97) ai_message_heading_pane_t

0x4cab,	// (0x00004cab) bg_popup_heading_pane_cp1_ParamLimits

0x4cab,	// (0x00004cab) bg_popup_heading_pane_cp1

0x4c3d,	// (0x00004c3d) list_ai_message_pane_ParamLimits

0x4c3d,	// (0x00004c3d) list_ai_message_pane

0x1617,	// (0x00001617) scroll_pane_cp10

0x4b89,	// (0x00004b89) list_ai_message_pane_g1

0x4b91,	// (0x00004b91) list_ai_message_pane_g2

0x0001,

0xae6b,	// (0x0000ae6b) list_ai_message_pane_g

0x4b99,	// (0x00004b99) list_ai_message_pane_t1_ParamLimits

0x4b99,	// (0x00004b99) list_ai_message_pane_t1

0x4bae,	// (0x00004bae) list_ai_message_pane_t2_ParamLimits

0x4bae,	// (0x00004bae) list_ai_message_pane_t2

0x4bc3,	// (0x00004bc3) list_ai_message_pane_t3_ParamLimits

0x4bc3,	// (0x00004bc3) list_ai_message_pane_t3

0x4bd8,	// (0x00004bd8) list_ai_message_pane_t4_ParamLimits

0x4bd8,	// (0x00004bd8) list_ai_message_pane_t4

0x0003,

0xae70,	// (0x0000ae70) list_ai_message_pane_t_ParamLimits

0xae70,	// (0x0000ae70) list_ai_message_pane_t

0xd238,	// (0x0000d238) cell_ai_soft_ind_pane_ParamLimits

0xd238,	// (0x0000d238) cell_ai_soft_ind_pane

0x265e,	// (0x0000265e) cell_ai_soft_ind_pane_g1_ParamLimits

0x265e,	// (0x0000265e) cell_ai_soft_ind_pane_g1

0x0293,	// (0x00000293) grid_highlight_cp1

0x266b,	// (0x0000266b) text_secondary_cp56_ParamLimits

0x266b,	// (0x0000266b) text_secondary_cp56

0x4b48,	// (0x00004b48) example_general_pane_ParamLimits

0x4b48,	// (0x00004b48) example_general_pane

0x4b54,	// (0x00004b54) example_parent_pane_g1_ParamLimits

0x4b54,	// (0x00004b54) example_parent_pane_g1

0x4b60,	// (0x00004b60) example_parent_pane_t1_ParamLimits

0x4b60,	// (0x00004b60) example_parent_pane_t1

0xc7d3,	// (0x0000c7d3) popup_preview_text_window_ParamLimits

0xc7d3,	// (0x0000c7d3) popup_preview_text_window

0x249c,	// (0x0000249c) list_single_pane_cp2_g4

0x08c9,	// (0x000008c9) bg_popup_preview_window_pane_ParamLimits

0x08c9,	// (0x000008c9) bg_popup_preview_window_pane

0x4895,	// (0x00004895) popup_preview_text_window_t1_ParamLimits

0x4895,	// (0x00004895) popup_preview_text_window_t1

0x48b3,	// (0x000048b3) popup_preview_text_window_t2_ParamLimits

0x48b3,	// (0x000048b3) popup_preview_text_window_t2

0x48fc,	// (0x000048fc) popup_preview_text_window_t3_ParamLimits

0x48fc,	// (0x000048fc) popup_preview_text_window_t3

0x4941,	// (0x00004941) popup_preview_text_window_t4_ParamLimits

0x4941,	// (0x00004941) popup_preview_text_window_t4

0x0004,

0xae3f,	// (0x0000ae3f) popup_preview_text_window_t_ParamLimits

0xae3f,	// (0x0000ae3f) popup_preview_text_window_t

0x49bf,	// (0x000049bf) scroll_pane_cp11

0x35f3,	// (0x000035f3) bg_popup_preview_window_pane_g1

0x4855,	// (0x00004855) bg_popup_preview_window_pane_g2

0x485d,	// (0x0000485d) bg_popup_preview_window_pane_g3

0x4865,	// (0x00004865) bg_popup_preview_window_pane_g4

0x486d,	// (0x0000486d) bg_popup_preview_window_pane_g5

0x4875,	// (0x00004875) bg_popup_preview_window_pane_g6

0x487d,	// (0x0000487d) bg_popup_preview_window_pane_g7

0x4885,	// (0x00004885) bg_popup_preview_window_pane_g8

0x0044,	// (0x00000044) aid_popup_width_pane

0xc74f,	// (0x0000c74f) popup_midp_note_alarm_window_ParamLimits

0xc74f,	// (0x0000c74f) popup_midp_note_alarm_window

0x1319,	// (0x00001319) data_form_pane_ParamLimits

0xbda4,	// (0x0000bda4) form_field_data_pane_g1

0xbdae,	// (0x0000bdae) form_field_data_pane_t1_ParamLimits

0x1349,	// (0x00001349) input_focus_pane_ParamLimits

0x1357,	// (0x00001357) data_form_wide_pane_ParamLimits

0x1363,	// (0x00001363) form_field_data_wide_pane_g1

0x1383,	// (0x00001383) form_field_data_wide_pane_t1_ParamLimits

0x0b6f,	// (0x00000b6f) input_focus_pane_cp6_ParamLimits

0xbeba,	// (0x0000beba) input_popup_find_pane_g1_ParamLimits

0xbeba,	// (0x0000beba) input_popup_find_pane_g1

0x1944,	// (0x00001944) aid_navi_side_left_pane

0x1959,	// (0x00001959) aid_navi_side_right_pane

0x4110,	// (0x00004110) bg_popup_window_pane_cp30_ParamLimits

0x4110,	// (0x00004110) bg_popup_window_pane_cp30

0x418a,	// (0x0000418a) popup_midp_note_alarm_window_g1_ParamLimits

0x418a,	// (0x0000418a) popup_midp_note_alarm_window_g1

0x41ba,	// (0x000041ba) popup_midp_note_alarm_window_t1_ParamLimits

0x41ba,	// (0x000041ba) popup_midp_note_alarm_window_t1

0x425b,	// (0x0000425b) popup_midp_note_alarm_window_t2_ParamLimits

0x425b,	// (0x0000425b) popup_midp_note_alarm_window_t2

0x4309,	// (0x00004309) popup_midp_note_alarm_window_t3_ParamLimits

0x4309,	// (0x00004309) popup_midp_note_alarm_window_t3

0x433b,	// (0x0000433b) popup_midp_note_alarm_window_t4_ParamLimits

0x433b,	// (0x0000433b) popup_midp_note_alarm_window_t4

0x4361,	// (0x00004361) popup_midp_note_alarm_window_t5_ParamLimits

0x4361,	// (0x00004361) popup_midp_note_alarm_window_t5

0x000a,

0xaddc,	// (0x0000addc) popup_midp_note_alarm_window_t_ParamLimits

0xaddc,	// (0x0000addc) popup_midp_note_alarm_window_t

0x440d,	// (0x0000440d) wait_bar_pane_cp1_ParamLimits

0x440d,	// (0x0000440d) wait_bar_pane_cp1

0x0293,	// (0x00000293) wait_anim_pane_copy1

0x0293,	// (0x00000293) wait_border_pane_copy1

0x3dee,	// (0x00003dee) wait_border_pane_g1_copy1

0x139a,	// (0x0000139a) form_field_popup_pane_g1

0xbdc8,	// (0x0000bdc8) form_field_popup_pane_t1_ParamLimits

0x1349,	// (0x00001349) input_focus_pane_cp7_ParamLimits

0x13bc,	// (0x000013bc) list_form_pane_ParamLimits

0x13c8,	// (0x000013c8) form_field_popup_wide_pane_g1

0x13d0,	// (0x000013d0) form_field_popup_wide_pane_t1_ParamLimits

0x1349,	// (0x00001349) input_focus_pane_cp8_ParamLimits

0x13e5,	// (0x000013e5) list_form_wide_pane_ParamLimits

0x5210,	// (0x00005210) aid_size_cell_graphic_pane

0xbe47,	// (0x0000be47) data_form_pane_t1_ParamLimits

0xd3d9,	// (0x0000d3d9) data_form_wide_pane_t1_ParamLimits

0xcb95,	// (0x0000cb95) bg_status_flat_pane

0xb6b9,	// (0x0000b6b9) title_pane_t1_ParamLimits

0x04c1,	// (0x000004c1) title_pane_t2_ParamLimits

0x04e7,	// (0x000004e7) title_pane_t3_ParamLimits

0xf253,	// (0x0000f253) title_pane_t_ParamLimits

0x1c56,	// (0x00001c56) level_1_signal_ParamLimits

0x1c63,	// (0x00001c63) level_2_signal_ParamLimits

0x1c70,	// (0x00001c70) level_3_signal_ParamLimits

0x1c7d,	// (0x00001c7d) level_4_signal_ParamLimits

0x1c8a,	// (0x00001c8a) level_5_signal_ParamLimits

0x1c97,	// (0x00001c97) level_6_signal_ParamLimits

0x1ca4,	// (0x00001ca4) level_7_signal_ParamLimits

0x1c56,	// (0x00001c56) level_1_battery_ParamLimits

0x1c63,	// (0x00001c63) level_2_battery_ParamLimits

0x1c70,	// (0x00001c70) level_3_battery_ParamLimits

0x1c7d,	// (0x00001c7d) level_4_battery_ParamLimits

0x1c8a,	// (0x00001c8a) level_5_battery_ParamLimits

0x1c97,	// (0x00001c97) level_6_battery_ParamLimits

0x1ca4,	// (0x00001ca4) level_7_battery_ParamLimits

0x4015,	// (0x00004015) bg_status_flat_pane_g1

0x401d,	// (0x0000401d) bg_status_flat_pane_g2

0x4025,	// (0x00004025) bg_status_flat_pane_g3

0x402d,	// (0x0000402d) bg_status_flat_pane_g4

0x4035,	// (0x00004035) bg_status_flat_pane_g5

0x403d,	// (0x0000403d) bg_status_flat_pane_g6

0x4045,	// (0x00004045) bg_status_flat_pane_g7

0xb745,	// (0x0000b745) tabs_3_active_pane_t1_ParamLimits

0xb745,	// (0x0000b745) tabs_3_passive_pane_t1_ParamLimits

0xb757,	// (0x0000b757) tabs_4_active_pane_t1_ParamLimits

0xb757,	// (0x0000b757) tabs_4_1_passive_pane_t1_ParamLimits

0xbed0,	// (0x0000bed0) tabs_2_active_pane_t1_ParamLimits

0xbed0,	// (0x0000bed0) tabs_2_passive_pane_t1_ParamLimits

0x04f9,	// (0x000004f9) bg_active_tab_pane_cp4_ParamLimits

0xbee2,	// (0x0000bee2) tabs_2_long_active_pane_t1_ParamLimits

0x2ad0,	// (0x00002ad0) bg_passive_tab_pane_cp4_ParamLimits

0x36b8,	// (0x000036b8) list_single_midp_graphic_pane_t1_ParamLimits

0x04f9,	// (0x000004f9) bg_active_tab_pane_cp5_ParamLimits

0xbef5,	// (0x0000bef5) tabs_3_long_active_pane_t1_ParamLimits

0x2ad0,	// (0x00002ad0) bg_passive_tab_pane_cp5_ParamLimits

0x36b8,	// (0x000036b8) list_single_midp_graphic_pane_t1

0xcb95,	// (0x0000cb95) bg_status_flat_pane_ParamLimits

0x31ff,	// (0x000031ff) indicator_pane_cp2_ParamLimits

0x31ff,	// (0x000031ff) indicator_pane_cp2

0xcd13,	// (0x0000cd13) navi_pane_srt_ParamLimits

0xcd13,	// (0x0000cd13) navi_pane_srt

0x334e,	// (0x0000334e) popup_clock_digital_analogue_window_cp1

0x0681,	// (0x00000681) indicator_pane_t1

0x255f,	// (0x0000255f) copy_highlight_pane

0x255f,	// (0x0000255f) cursor_graphics_pane

0x255f,	// (0x0000255f) graphic_within_text_pane

0x255f,	// (0x0000255f) link_highlight_pane

0x4982,	// (0x00004982) popup_preview_text_window_t5_ParamLimits

0x4982,	// (0x00004982) popup_preview_text_window_t5

0x2685,	// (0x00002685) cursor_digital_pane

0x2685,	// (0x00002685) cursor_primary_pane

0x2696,	// (0x00002696) cursor_primary_small_pane

0x269e,	// (0x0000269e) cursor_secondary_pane

0x26a6,	// (0x000026a6) cursor_title_pane

0x2685,	// (0x00002685) link_highlight_digital_pane

0x268d,	// (0x0000268d) link_highlight_primary_pane

0x2696,	// (0x00002696) link_highlight_primary_small_pane

0x269e,	// (0x0000269e) link_highlight_secondary_pane

0x26a6,	// (0x000026a6) link_highlight_title_pane

0x2685,	// (0x00002685) copy_highlight_digital_pane

0x2685,	// (0x00002685) copy_highlight_primary_pane

0x2696,	// (0x00002696) copy_highlight_primary_small_pane

0x269e,	// (0x0000269e) copy_highlight_secondary_pane

0x26a6,	// (0x000026a6) copy_highlight_title_pane

0x269e,	// (0x0000269e) graphic_text_digital_pane

0x40b3,	// (0x000040b3) graphic_text_primary_pane

0x40bc,	// (0x000040bc) graphic_text_primary_small_pane

0x2696,	// (0x00002696) graphic_text_secondary_pane

0x2685,	// (0x00002685) graphic_text_title_pane

0xc1c4,	// (0x0000c1c4) cursor_primary_pane_g1

0x40a5,	// (0x000040a5) cursor_text_primary_t1

0xd039,	// (0x0000d039) cursor_primary_small_pane_g1

0x4097,	// (0x00004097) cursor_text_primary_small_t1

0xd02f,	// (0x0000d02f) cursor_primary_small_pane_g1_copy1

0x407f,	// (0x0000407f) cursor_text_primary_small_t1_copy1

0x405d,	// (0x0000405d) cursor_text_title_t1

0xd025,	// (0x0000d025) cursor_title_pane_g1

0xc1c4,	// (0x0000c1c4) cursor_digital_pane_g1

0x26b8,	// (0x000026b8) cursor_text_digital_t1

0x3ffe,	// (0x00003ffe) link_highlight_primary_pane_g1

0x4006,	// (0x00004006) link_highlight_primary_pane_t1

0x26c6,	// (0x000026c6) link_highlight_primary_small_pane_g1

0x26ce,	// (0x000026ce) link_highlight_primary_small_pane_t1

0x26c6,	// (0x000026c6) link_highlight_secondary_pane_g1

0x26dd,	// (0x000026dd) link_highlight_secondary_pane_t1

0x3f72,	// (0x00003f72) link_highlight_title_pane_g1

0x3f7a,	// (0x00003f7a) link_highlight_title_pane_t1

0x3f5b,	// (0x00003f5b) link_highlight_digital_pane_g1

0x3f63,	// (0x00003f63) link_highlight_digital_pane_t1

0x3e33,	// (0x00003e33) copy_highlight_primary_pane_g1

0x3e3b,	// (0x00003e3b) copy_highlight_primary_pane_t1

0x3e0d,	// (0x00003e0d) copy_highlight_primary_small_pane_g1

0x3e24,	// (0x00003e24) copy_highlight_primary_small_pane_t1

0x26ec,	// (0x000026ec) copy_highlight_secondary_pane_g1

0x26f4,	// (0x000026f4) copy_highlight_secondary_pane_t1

0x3e0d,	// (0x00003e0d) copy_highlight_title_pane_g1

0x3e15,	// (0x00003e15) copy_highlight_title_pane_t1

0x3e33,	// (0x00003e33) copy_highlight_digital_pane_g1

0x5493,	// (0x00005493) copy_highlight_digital_pane_t1

0x53e7,	// (0x000053e7) graphic_text_primary_pane_g1

0x5477,	// (0x00005477) graphic_text_primary_pane_t1

0x5485,	// (0x00005485) graphic_text_primary_pane_t2

0x0001,

0xaf0b,	// (0x0000af0b) graphic_text_primary_pane_t

0x5453,	// (0x00005453) graphic_text_primary_small_pane_g1

0x545b,	// (0x0000545b) graphic_text_primary_small_pane_t1

0x5469,	// (0x00005469) graphic_text_primary_small_pane_t2

0x0001,

0xaf06,	// (0x0000af06) graphic_text_primary_small_pane_t

0x542f,	// (0x0000542f) graphic_text_secondary_pane_g1

0x5437,	// (0x00005437) graphic_text_secondary_pane_t1

0x5445,	// (0x00005445) graphic_text_secondary_pane_t2

0x0001,

0xaf01,	// (0x0000af01) graphic_text_secondary_pane_t

0x540b,	// (0x0000540b) graphic_text_title_pane_g1

0x5413,	// (0x00005413) graphic_text_title_pane_t1

0x5421,	// (0x00005421) graphic_text_title_pane_t2

0x0001,

0xaefc,	// (0x0000aefc) graphic_text_title_pane_t

0x53e7,	// (0x000053e7) graphic_text_digital_pane_g1

0x53ef,	// (0x000053ef) graphic_text_digital_pane_t1

0x53fd,	// (0x000053fd) graphic_text_digital_pane_t2

0x0001,

0xaef7,	// (0x0000aef7) graphic_text_digital_pane_t

0x04f9,	// (0x000004f9) navi_icon_pane_srt_ParamLimits

0x04f9,	// (0x000004f9) navi_icon_pane_srt

0x0293,	// (0x00000293) navi_midp_pane_srt

0x0293,	// (0x00000293) navi_navi_pane_srt

0x04f9,	// (0x000004f9) navi_text_pane_srt_ParamLimits

0x04f9,	// (0x000004f9) navi_text_pane_srt

0x53b2,	// (0x000053b2) navi_navi_icon_text_pane_srt

0x53ba,	// (0x000053ba) navi_navi_pane_srt_g1_ParamLimits

0x53ba,	// (0x000053ba) navi_navi_pane_srt_g1

0x53cc,	// (0x000053cc) navi_navi_pane_srt_g2_ParamLimits

0x53cc,	// (0x000053cc) navi_navi_pane_srt_g2

0x0001,

0xaef2,	// (0x0000aef2) navi_navi_pane_srt_g_ParamLimits

0xaef2,	// (0x0000aef2) navi_navi_pane_srt_g

0x53de,	// (0x000053de) navi_navi_tabs_pane_srt

0x53b2,	// (0x000053b2) navi_navi_text_pane_srt

0x53b2,	// (0x000053b2) navi_navi_volume_pane_srt

0x53a3,	// (0x000053a3) navi_navi_text_pane_srt_t1

0x537e,	// (0x0000537e) navi_navi_volume_pane_srt_g1

0x5386,	// (0x00005386) volume_small_pane_srt_ParamLimits

0x5386,	// (0x00005386) volume_small_pane_srt

0x2703,	// (0x00002703) volume_small_pane_srt_g1_ParamLimits

0x2703,	// (0x00002703) volume_small_pane_srt_g1

0x2713,	// (0x00002713) volume_small_pane_srt_g2_ParamLimits

0x2713,	// (0x00002713) volume_small_pane_srt_g2

0x2724,	// (0x00002724) volume_small_pane_srt_g3_ParamLimits

0x2724,	// (0x00002724) volume_small_pane_srt_g3

0x2735,	// (0x00002735) volume_small_pane_srt_g4_ParamLimits

0x2735,	// (0x00002735) volume_small_pane_srt_g4

0x2746,	// (0x00002746) volume_small_pane_srt_g5_ParamLimits

0x2746,	// (0x00002746) volume_small_pane_srt_g5

0x2757,	// (0x00002757) volume_small_pane_srt_g6_ParamLimits

0x2757,	// (0x00002757) volume_small_pane_srt_g6

0x2768,	// (0x00002768) volume_small_pane_srt_g7_ParamLimits

0x2768,	// (0x00002768) volume_small_pane_srt_g7

0x2779,	// (0x00002779) volume_small_pane_srt_g8_ParamLimits

0x2779,	// (0x00002779) volume_small_pane_srt_g8

0x278a,	// (0x0000278a) volume_small_pane_srt_g9_ParamLimits

0x278a,	// (0x0000278a) volume_small_pane_srt_g9

0x279b,	// (0x0000279b) volume_small_pane_srt_g10_ParamLimits

0x279b,	// (0x0000279b) volume_small_pane_srt_g10

0x0009,

0xaca6,	// (0x0000aca6) volume_small_pane_srt_g_ParamLimits

0xaca6,	// (0x0000aca6) volume_small_pane_srt_g

0x0972,	// (0x00000972) query_popup_data_pane_cp2

0x536c,	// (0x0000536c) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x536c,	// (0x0000536c) navi_navi_icon_text_pane_srt_t1

0x40b3,	// (0x000040b3) navi_tabs_2_long_pane_srt

0x40b3,	// (0x000040b3) navi_tabs_2_pane_srt

0x40b3,	// (0x000040b3) navi_tabs_3_long_pane_srt

0x40b3,	// (0x000040b3) navi_tabs_3_pane_srt

0x40b3,	// (0x000040b3) navi_tabs_4_pane_srt

0x5344,	// (0x00005344) tabs_2_active_pane_srt_ParamLimits

0x5344,	// (0x00005344) tabs_2_active_pane_srt

0x5354,	// (0x00005354) tabs_2_passive_pane_srt_ParamLimits

0x5354,	// (0x00005354) tabs_2_passive_pane_srt

0x378d,	// (0x0000378d) bg_passive_tab_pane_cp1_srt_ParamLimits

0x378d,	// (0x0000378d) bg_passive_tab_pane_cp1_srt

0x5318,	// (0x00005318) bg_passive_tab_pane_g1_cp1_srt

0x206f,	// (0x0000206f) bg_passive_tab_pane_g2_cp1_srt

0x5321,	// (0x00005321) bg_passive_tab_pane_g3_cp1_srt

0x081f,	// (0x0000081f) bg_active_tab_pane_cp1_srt_ParamLimits

0x081f,	// (0x0000081f) bg_active_tab_pane_cp1_srt

0x532a,	// (0x0000532a) tabs_2_active_pane_srt_g1

0xd539,	// (0x0000d539) tabs_2_active_pane_srt_t1_ParamLimits

0xd539,	// (0x0000d539) tabs_2_active_pane_srt_t1

0x5318,	// (0x00005318) bg_active_tab_pane_g1_cp1_srt

0x206f,	// (0x0000206f) bg_active_tab_pane_g2_cp1_srt

0x5321,	// (0x00005321) bg_active_tab_pane_g3_cp1_srt

0x52e5,	// (0x000052e5) tabs_3_active_pane_srt_ParamLimits

0x52e5,	// (0x000052e5) tabs_3_active_pane_srt

0x52f6,	// (0x000052f6) tabs_3_passive_pane_cp_srt_ParamLimits

0x52f6,	// (0x000052f6) tabs_3_passive_pane_cp_srt

0x5307,	// (0x00005307) tabs_3_passive_pane_srt_ParamLimits

0x5307,	// (0x00005307) tabs_3_passive_pane_srt

0x378d,	// (0x0000378d) bg_passive_tab_pane_cp2_srt_ParamLimits

0x378d,	// (0x0000378d) bg_passive_tab_pane_cp2_srt

0x27ac,	// (0x000027ac) bg_passive_tab_pane_g1_cp2_srt

0x206f,	// (0x0000206f) bg_passive_tab_pane_g2_cp2_srt

0x27b5,	// (0x000027b5) bg_passive_tab_pane_g3_cp2_srt

0x081f,	// (0x0000081f) bg_active_tab_pane_cp2_srt_ParamLimits

0x081f,	// (0x0000081f) bg_active_tab_pane_cp2_srt

0x52cb,	// (0x000052cb) tabs_3_active_pane_srt_g1

0xd523,	// (0x0000d523) tabs_3_active_pane_srt_t1_ParamLimits

0xd523,	// (0x0000d523) tabs_3_active_pane_srt_t1

0x27ac,	// (0x000027ac) bg_active_tab_pane_g1_cp2_srt

0x206f,	// (0x0000206f) bg_active_tab_pane_g2_cp2_srt

0x27b5,	// (0x000027b5) bg_active_tab_pane_g3_cp2_srt

0x5283,	// (0x00005283) tabs_4_active_pane_srt_ParamLimits

0x5283,	// (0x00005283) tabs_4_active_pane_srt

0x5295,	// (0x00005295) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5295,	// (0x00005295) tabs_4_passive_pane_cp2_srt

0x2a4e,	// (0x00002a4e) aid_size_cell_toolbar

0x4e01,	// (0x00004e01) main_idle_act_pane_ParamLimits

0x2c73,	// (0x00002c73) popup_large_graphic_colour_window_ParamLimits

0xca59,	// (0x0000ca59) popup_toolbar_window_ParamLimits

0xca59,	// (0x0000ca59) popup_toolbar_window

0x5000,	// (0x00005000) list_single_graphic_2heading_pane_ParamLimits

0x5000,	// (0x00005000) list_single_graphic_2heading_pane

0x19d0,	// (0x000019d0) aid_size_cell_apps_grid_lsc_pane

0x19e2,	// (0x000019e2) aid_size_cell_apps_grid_prt_pane

0x2ad0,	// (0x00002ad0) bg_wml_button_pane_cp1_ParamLimits

0x2ad0,	// (0x00002ad0) bg_wml_button_pane_cp1

0xcfbc,	// (0x0000cfbc) form_midp_field_text_pane_t1_ParamLimits

0x378d,	// (0x0000378d) input_focus_pane_cp050_ParamLimits

0x3aa7,	// (0x00003aa7) list_midp_form_text_pane_ParamLimits

0x3a49,	// (0x00003a49) input_focus_pane_cp051_ParamLimits

0x3a5d,	// (0x00003a5d) list_midp_choice_pane_ParamLimits

0xcf50,	// (0x0000cf50) list_single_2graphic_pane_cp3_ParamLimits

0xcf50,	// (0x0000cf50) list_single_2graphic_pane_cp3

0xcf65,	// (0x0000cf65) list_single_midp_graphic_pane_ParamLimits

0xcf65,	// (0x0000cf65) list_single_midp_graphic_pane

0x0e2b,	// (0x00000e2b) list_single_graphic_2heading_pane_g1_ParamLimits

0x0e2b,	// (0x00000e2b) list_single_graphic_2heading_pane_g1

0x0db1,	// (0x00000db1) list_single_graphic_2heading_pane_g4_ParamLimits

0x0db1,	// (0x00000db1) list_single_graphic_2heading_pane_g4

0x0dbd,	// (0x00000dbd) list_single_graphic_2heading_pane_g5_ParamLimits

0x0dbd,	// (0x00000dbd) list_single_graphic_2heading_pane_g5

0x0002,

0xacf9,	// (0x0000acf9) list_single_graphic_2heading_pane_g_ParamLimits

0xacf9,	// (0x0000acf9) list_single_graphic_2heading_pane_g

0x34a5,	// (0x000034a5) list_single_graphic_2heading_pane_t1_ParamLimits

0x34a5,	// (0x000034a5) list_single_graphic_2heading_pane_t1

0x34b9,	// (0x000034b9) list_single_graphic_2heading_pane_t2_ParamLimits

0x34b9,	// (0x000034b9) list_single_graphic_2heading_pane_t2

0x34d3,	// (0x000034d3) list_single_graphic_2heading_pane_t3_ParamLimits

0x34d3,	// (0x000034d3) list_single_graphic_2heading_pane_t3

0x0002,

0xad00,	// (0x0000ad00) list_single_graphic_2heading_pane_t_ParamLimits

0xad00,	// (0x0000ad00) list_single_graphic_2heading_pane_t

0x34eb,	// (0x000034eb) bg_popup_sub_pane_cp2

0x3515,	// (0x00003515) grid_toobar_pane

0x3551,	// (0x00003551) cell_toolbar_pane_ParamLimits

0x3551,	// (0x00003551) cell_toolbar_pane

0x3597,	// (0x00003597) cell_toolbar_pane_g1_ParamLimits

0x3597,	// (0x00003597) cell_toolbar_pane_g1

0x35ab,	// (0x000035ab) cell_toolbar_pane_g2_ParamLimits

0x35ab,	// (0x000035ab) cell_toolbar_pane_g2

0x0001,

0xad07,	// (0x0000ad07) cell_toolbar_pane_g_ParamLimits

0xad07,	// (0x0000ad07) cell_toolbar_pane_g

0x35cd,	// (0x000035cd) grid_highlight_pane_cp2_ParamLimits

0x35cd,	// (0x000035cd) grid_highlight_pane_cp2

0x35e7,	// (0x000035e7) toolbar_button_pane

0x35f3,	// (0x000035f3) toolbar_button_pane_g1

0x35fb,	// (0x000035fb) toolbar_button_pane_g2

0x3603,	// (0x00003603) toolbar_button_pane_g3

0x360b,	// (0x0000360b) toolbar_button_pane_g4

0x3613,	// (0x00003613) toolbar_button_pane_g5

0x361b,	// (0x0000361b) toolbar_button_pane_g6

0x3623,	// (0x00003623) toolbar_button_pane_g7

0x362b,	// (0x0000362b) toolbar_button_pane_g8

0x3633,	// (0x00003633) toolbar_button_pane_g9

0x0009,

0xad0c,	// (0x0000ad0c) toolbar_button_pane_g

0x3643,	// (0x00003643) list_single_2graphic_pane_g1_cp3_ParamLimits

0x3643,	// (0x00003643) list_single_2graphic_pane_g1_cp3

0xceb2,	// (0x0000ceb2) list_single_2graphic_pane_g2_cp3_ParamLimits

0xceb2,	// (0x0000ceb2) list_single_2graphic_pane_g2_cp3

0x239b,	// (0x0000239b) list_single_2graphic_pane_g3_cp3

0x3660,	// (0x00003660) list_single_2graphic_pane_g4_cp3_ParamLimits

0x3660,	// (0x00003660) list_single_2graphic_pane_g4_cp3

0x366c,	// (0x0000366c) list_single_2graphic_pane_t1_cp3_ParamLimits

0x366c,	// (0x0000366c) list_single_2graphic_pane_t1_cp3

0x238f,	// (0x0000238f) list_single_midp_graphic_pane_g2_ParamLimits

0x238f,	// (0x0000238f) list_single_midp_graphic_pane_g2

0x2a56,	// (0x00002a56) aid_zoom_text_primary

0x2a5e,	// (0x00002a5e) aid_zoom_text_secondary

0xc21c,	// (0x0000c21c) status_small_pane_g7_ParamLimits

0xc21c,	// (0x0000c21c) status_small_pane_g7

0xc23f,	// (0x0000c23f) status_small_pane_t1_ParamLimits

0xb695,	// (0x0000b695) title_pane_g2

0x0003,

0xf24a,	// (0x0000f24a) title_pane_g

0xb90d,	// (0x0000b90d) aid_size_cell_colour_1_pane_ParamLimits

0xb90d,	// (0x0000b90d) aid_size_cell_colour_1_pane

0xb921,	// (0x0000b921) aid_size_cell_colour_2_pane_ParamLimits

0xb921,	// (0x0000b921) aid_size_cell_colour_2_pane

0xb935,	// (0x0000b935) aid_size_cell_colour_3_pane_ParamLimits

0xb935,	// (0x0000b935) aid_size_cell_colour_3_pane

0xb949,	// (0x0000b949) aid_size_cell_colour_4_pane_ParamLimits

0xb949,	// (0x0000b949) aid_size_cell_colour_4_pane

0x184b,	// (0x0000184b) title_pane_stacon_g1_ParamLimits

0x184b,	// (0x0000184b) title_pane_stacon_g1

0x3e92,	// (0x00003e92) popup_note_wait_window_g3_ParamLimits

0x3e92,	// (0x00003e92) popup_note_wait_window_g3

0x3f08,	// (0x00003f08) popup_note_wait_window_t5_ParamLimits

0x3f08,	// (0x00003f08) popup_note_wait_window_t5

0x0293,	// (0x00000293) main_feb_china_hwr_fs_writing_pane

0xc475,	// (0x0000c475) popup_feb_china_hwr_fs_window_ParamLimits

0xc475,	// (0x0000c475) popup_feb_china_hwr_fs_window

0xcec3,	// (0x0000cec3) aid_size_cell_hwr_fs_ParamLimits

0xcec3,	// (0x0000cec3) aid_size_cell_hwr_fs

0x378d,	// (0x0000378d) bg_popup_sub_pane_cp3_ParamLimits

0x378d,	// (0x0000378d) bg_popup_sub_pane_cp3

0xced8,	// (0x0000ced8) grid_hwr_fs_pane_ParamLimits

0xced8,	// (0x0000ced8) grid_hwr_fs_pane

0x37b1,	// (0x000037b1) linegrid_hwr_fs_pane_ParamLimits

0x37b1,	// (0x000037b1) linegrid_hwr_fs_pane

0xcef0,	// (0x0000cef0) cell_hwr_fs_pane_ParamLimits

0xcef0,	// (0x0000cef0) cell_hwr_fs_pane

0x37e3,	// (0x000037e3) linegrid_hwr_fs_pane_g1_ParamLimits

0x37e3,	// (0x000037e3) linegrid_hwr_fs_pane_g1

0xcf16,	// (0x0000cf16) linegrid_hwr_fs_pane_g2_ParamLimits

0xcf16,	// (0x0000cf16) linegrid_hwr_fs_pane_g2

0x3801,	// (0x00003801) linegrid_hwr_fs_pane_g3_ParamLimits

0x3801,	// (0x00003801) linegrid_hwr_fs_pane_g3

0x380d,	// (0x0000380d) linegrid_hwr_fs_pane_g4_ParamLimits

0x380d,	// (0x0000380d) linegrid_hwr_fs_pane_g4

0x3827,	// (0x00003827) linegrid_hwr_fs_pane_g5_ParamLimits

0x3827,	// (0x00003827) linegrid_hwr_fs_pane_g5

0x0004,

0xf367,	// (0x0000f367) linegrid_hwr_fs_pane_g_ParamLimits

0xf367,	// (0x0000f367) linegrid_hwr_fs_pane_g

0x383d,	// (0x0000383d) cell_hwr_fs_pane_g1_ParamLimits

0x383d,	// (0x0000383d) cell_hwr_fs_pane_g1

0x33dc,	// (0x000033dc) cell_hwr_fs_pane_g2_ParamLimits

0x33dc,	// (0x000033dc) cell_hwr_fs_pane_g2

0xcf28,	// (0x0000cf28) cell_hwr_fs_pane_g3_ParamLimits

0xcf28,	// (0x0000cf28) cell_hwr_fs_pane_g3

0xcf35,	// (0x0000cf35) cell_hwr_fs_pane_g4_ParamLimits

0xcf35,	// (0x0000cf35) cell_hwr_fs_pane_g4

0x0003,

0xf372,	// (0x0000f372) cell_hwr_fs_pane_g_ParamLimits

0xf372,	// (0x0000f372) cell_hwr_fs_pane_g

0xcf42,	// (0x0000cf42) cell_hwr_fs_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp6

0x0293,	// (0x00000293) main_idle_act2_pane

0x15fe,	// (0x000015fe) aid_inside_area_popup_secondary

0xd133,	// (0x0000d133) aid_inside_area_window_primary_ParamLimits

0xd133,	// (0x0000d133) aid_inside_area_window_primary

0x54a2,	// (0x000054a2) ai2_news_ticker_pane

0x54aa,	// (0x000054aa) aid_size_cell_ai1_link_ParamLimits

0x54aa,	// (0x000054aa) aid_size_cell_ai1_link

0x54c4,	// (0x000054c4) popup_ai2_data_window_ParamLimits

0x54c4,	// (0x000054c4) popup_ai2_data_window

0x54d8,	// (0x000054d8) popup_ai2_link_window_ParamLimits

0x54d8,	// (0x000054d8) popup_ai2_link_window

0x378d,	// (0x0000378d) bg_popup_sub_pane_cp4_ParamLimits

0x378d,	// (0x0000378d) bg_popup_sub_pane_cp4

0x54ec,	// (0x000054ec) grid_ai2_link_pane_ParamLimits

0x54ec,	// (0x000054ec) grid_ai2_link_pane

0x5503,	// (0x00005503) popup_ai2_link_window_g1_ParamLimits

0x5503,	// (0x00005503) popup_ai2_link_window_g1

0x550f,	// (0x0000550f) popup_ai2_link_window_g2_ParamLimits

0x550f,	// (0x0000550f) popup_ai2_link_window_g2

0x0001,

0xaf10,	// (0x0000af10) popup_ai2_link_window_g_ParamLimits

0xaf10,	// (0x0000af10) popup_ai2_link_window_g

0x551e,	// (0x0000551e) ai2_mp_button_pane

0x5526,	// (0x00005526) ai2_mp_volume_pane

0x3a49,	// (0x00003a49) bg_popup_sub_pane_cp5_ParamLimits

0x3a49,	// (0x00003a49) bg_popup_sub_pane_cp5

0x552e,	// (0x0000552e) heading_ai2_gene_pane_ParamLimits

0x552e,	// (0x0000552e) heading_ai2_gene_pane

0x553a,	// (0x0000553a) list_ai2_gene_pane_ParamLimits

0x553a,	// (0x0000553a) list_ai2_gene_pane

0x5582,	// (0x00005582) cell_ai2_link_pane_ParamLimits

0x5582,	// (0x00005582) cell_ai2_link_pane

0x5598,	// (0x00005598) cell_ai2_link_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp7

0x5669,	// (0x00005669) ai2_mp_volume_pane_g1

0x5671,	// (0x00005671) ai2_mp_volume_pane_g2

0x55de,	// (0x000055de) list_ai2_gene_pane_t1

0x5679,	// (0x00005679) ai2_mp_volume_pane_g3

0x0002,

0xaf29,	// (0x0000af29) ai2_mp_volume_pane_g

0x5681,	// (0x00005681) volume_small_pane_cp3

0x568a,	// (0x0000568a) aid_size_cell_ai2_button

0x5692,	// (0x00005692) grid_ai2_button_pane

0x569b,	// (0x0000569b) cell_ai2_button_pane_ParamLimits

0x569b,	// (0x0000569b) cell_ai2_button_pane

0x002e,	// (0x0000002e) cell_ai2_button_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp8

0x5629,	// (0x00005629) ai2_gene_pane_t1_ParamLimits

0x5629,	// (0x00005629) ai2_gene_pane_t1

0xc403,	// (0x0000c403) aid_height_parent_landscape

0xd287,	// (0x0000d287) aid_height_set_list

0x4e01,	// (0x00004e01) aid_size_parent

0x5210,	// (0x00005210) aid_size_cell_graphic_pane_ParamLimits

0x554a,	// (0x0000554a) popup_ai2_data_window_g1_ParamLimits

0x554a,	// (0x0000554a) popup_ai2_data_window_g1

0x5556,	// (0x00005556) ai2_news_ticker_pane_g1

0x555e,	// (0x0000555e) ai2_news_ticker_pane_g2

0x0001,

0xaf15,	// (0x0000af15) ai2_news_ticker_pane_g

0x5566,	// (0x00005566) ai2_news_ticker_pane_t1

0x5574,	// (0x00005574) ai2_news_ticker_pane_t2

0x0001,

0xaf1a,	// (0x0000af1a) ai2_news_ticker_pane_t

0x55a1,	// (0x000055a1) heading_ai2_gene_pane_g1

0x55a9,	// (0x000055a9) heading_ai2_gene_pane_t1_ParamLimits

0x55a9,	// (0x000055a9) heading_ai2_gene_pane_t1

0x55be,	// (0x000055be) list_highlight_pane_cp6

0x55c6,	// (0x000055c6) ai2_gene_pane_ParamLimits

0x55c6,	// (0x000055c6) ai2_gene_pane

0x55ec,	// (0x000055ec) list_ai2_gene_pane_t2

0x0001,

0xaf1f,	// (0x0000af1f) list_ai2_gene_pane_t

0x55fa,	// (0x000055fa) list_highlight_pane_cp8_ParamLimits

0x55fa,	// (0x000055fa) list_highlight_pane_cp8

0x560b,	// (0x0000560b) ai2_gene_pane_g1_ParamLimits

0x560b,	// (0x0000560b) ai2_gene_pane_g1

0x561d,	// (0x0000561d) ai2_gene_pane_g2_ParamLimits

0x561d,	// (0x0000561d) ai2_gene_pane_g2

0x0001,

0xaf24,	// (0x0000af24) ai2_gene_pane_g_ParamLimits

0xaf24,	// (0x0000af24) ai2_gene_pane_g

0x0d94,	// (0x00000d94) scroll_pane_cp12

0xc3c2,	// (0x0000c3c2) control_pane_t3_ParamLimits

0xc3c2,	// (0x0000c3c2) control_pane_t3

0xc230,	// (0x0000c230) status_small_pane_g8_ParamLimits

0xc230,	// (0x0000c230) status_small_pane_g8

0xc508,	// (0x0000c508) popup_find_window_ParamLimits

0xc789,	// (0x0000c789) popup_note_image_window_ParamLimits

0x0e2b,	// (0x00000e2b) list_double2_graphic_pane_vc_g1_ParamLimits

0x0e2b,	// (0x00000e2b) list_double2_graphic_pane_vc_g1

0x0db1,	// (0x00000db1) list_double2_graphic_pane_vc_g2_ParamLimits

0x0db1,	// (0x00000db1) list_double2_graphic_pane_vc_g2

0x0dbd,	// (0x00000dbd) list_double2_graphic_pane_vc_g3_ParamLimits

0x0dbd,	// (0x00000dbd) list_double2_graphic_pane_vc_g3

0x0002,

0xacf9,	// (0x0000acf9) list_double2_graphic_pane_vc_g_ParamLimits

0xacf9,	// (0x0000acf9) list_double2_graphic_pane_vc_g

0x3581,	// (0x00003581) list_double2_graphic_pane_vc_t1_ParamLimits

0x3581,	// (0x00003581) list_double2_graphic_pane_vc_t1

0x0db1,	// (0x00000db1) list_single_heading_pane_vc_g1_ParamLimits

0x0db1,	// (0x00000db1) list_single_heading_pane_vc_g1

0x0dbd,	// (0x00000dbd) list_single_heading_pane_vc_g2_ParamLimits

0x0dbd,	// (0x00000dbd) list_single_heading_pane_vc_g2

0x0001,

0xab16,	// (0x0000ab16) list_single_heading_pane_vc_g_ParamLimits

0xab16,	// (0x0000ab16) list_single_heading_pane_vc_g

0x3686,	// (0x00003686) list_single_heading_pane_vc_t1_ParamLimits

0x3686,	// (0x00003686) list_single_heading_pane_vc_t1

0x369c,	// (0x0000369c) list_single_heading_pane_vc_t2_ParamLimits

0x369c,	// (0x0000369c) list_single_heading_pane_vc_t2

0x0001,

0xad21,	// (0x0000ad21) list_single_heading_pane_vc_t_ParamLimits

0xad21,	// (0x0000ad21) list_single_heading_pane_vc_t

0x36ce,	// (0x000036ce) list_setting_number_pane_vc_g1_ParamLimits

0x36ce,	// (0x000036ce) list_setting_number_pane_vc_g1

0x36da,	// (0x000036da) list_setting_number_pane_vc_g2_ParamLimits

0x36da,	// (0x000036da) list_setting_number_pane_vc_g2

0x0001,

0xad26,	// (0x0000ad26) list_setting_number_pane_vc_g_ParamLimits

0xad26,	// (0x0000ad26) list_setting_number_pane_vc_g

0x36e6,	// (0x000036e6) list_setting_number_pane_vc_t1_ParamLimits

0x36e6,	// (0x000036e6) list_setting_number_pane_vc_t1

0x36fa,	// (0x000036fa) list_setting_number_pane_vc_t2_ParamLimits

0x36fa,	// (0x000036fa) list_setting_number_pane_vc_t2

0x3714,	// (0x00003714) list_setting_number_pane_vc_t3_ParamLimits

0x3714,	// (0x00003714) list_setting_number_pane_vc_t3

0x0002,

0xad2b,	// (0x0000ad2b) list_setting_number_pane_vc_t_ParamLimits

0xad2b,	// (0x0000ad2b) list_setting_number_pane_vc_t

0x373c,	// (0x0000373c) set_value_pane_vc_ParamLimits

0x373c,	// (0x0000373c) set_value_pane_vc

0x5000,	// (0x00005000) list_double2_graphic_pane_vc_ParamLimits

0x5000,	// (0x00005000) list_double2_graphic_pane_vc

0x5013,	// (0x00005013) list_double2_large_graphic_pane_vc_ParamLimits

0x5013,	// (0x00005013) list_double2_large_graphic_pane_vc

0x5000,	// (0x00005000) list_double2_pane_vc_ParamLimits

0x5000,	// (0x00005000) list_double2_pane_vc

0x5000,	// (0x00005000) list_double_graphic_heading_pane_vc_ParamLimits

0x5000,	// (0x00005000) list_double_graphic_heading_pane_vc

0x5000,	// (0x00005000) list_double_graphic_pane_vc_ParamLimits

0x5000,	// (0x00005000) list_double_graphic_pane_vc

0x5000,	// (0x00005000) list_double_heading_pane_vc_ParamLimits

0x5000,	// (0x00005000) list_double_heading_pane_vc

0x5025,	// (0x00005025) list_double_large_graphic_pane_vc_ParamLimits

0x5025,	// (0x00005025) list_double_large_graphic_pane_vc

0x5000,	// (0x00005000) list_double_number_pane_vc_ParamLimits

0x5000,	// (0x00005000) list_double_number_pane_vc

0x5000,	// (0x00005000) list_double_pane_vc_ParamLimits

0x5000,	// (0x00005000) list_double_pane_vc

0x5000,	// (0x00005000) list_double_time_pane_vc_ParamLimits

0x5000,	// (0x00005000) list_double_time_pane_vc

0x5000,	// (0x00005000) list_setting_number_pane_vc_ParamLimits

0x5000,	// (0x00005000) list_setting_number_pane_vc

0x5000,	// (0x00005000) list_setting_pane_vc_ParamLimits

0x5000,	// (0x00005000) list_setting_pane_vc

0x5000,	// (0x00005000) list_single_graphic_heading_pane_vc_ParamLimits

0x5000,	// (0x00005000) list_single_graphic_heading_pane_vc

0x5000,	// (0x00005000) list_single_heading_pane_vc_ParamLimits

0x5000,	// (0x00005000) list_single_heading_pane_vc

0x5000,	// (0x00005000) list_single_number_heading_pane_vc_ParamLimits

0x5000,	// (0x00005000) list_single_number_heading_pane_vc

0x56ce,	// (0x000056ce) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x56ce,	// (0x000056ce) list_double_graphic_heading_pane_vc_g1

0x56da,	// (0x000056da) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x56da,	// (0x000056da) list_double_graphic_heading_pane_vc_g2

0x56e6,	// (0x000056e6) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x56e6,	// (0x000056e6) list_double_graphic_heading_pane_vc_g3

0x0002,

0xaf30,	// (0x0000af30) list_double_graphic_heading_pane_vc_g_ParamLimits

0xaf30,	// (0x0000af30) list_double_graphic_heading_pane_vc_g

0x56f2,	// (0x000056f2) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x56f2,	// (0x000056f2) list_double_graphic_heading_pane_vc_t1

0x570e,	// (0x0000570e) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x570e,	// (0x0000570e) list_double_graphic_heading_pane_vc_t2

0x0001,

0xaf37,	// (0x0000af37) list_double_graphic_heading_pane_vc_t_ParamLimits

0xaf37,	// (0x0000af37) list_double_graphic_heading_pane_vc_t

0x36ce,	// (0x000036ce) list_setting_pane_vc_g1_ParamLimits

0x36ce,	// (0x000036ce) list_setting_pane_vc_g1

0x36da,	// (0x000036da) list_setting_pane_vc_g2_ParamLimits

0x36da,	// (0x000036da) list_setting_pane_vc_g2

0x0001,

0xad26,	// (0x0000ad26) list_setting_pane_vc_g_ParamLimits

0xad26,	// (0x0000ad26) list_setting_pane_vc_g

0x5966,	// (0x00005966) list_setting_pane_vc_t1_ParamLimits

0x5966,	// (0x00005966) list_setting_pane_vc_t1

0x5980,	// (0x00005980) list_setting_pane_vc_t2_ParamLimits

0x5980,	// (0x00005980) list_setting_pane_vc_t2

0x0001,

0xaf7a,	// (0x0000af7a) list_setting_pane_vc_t_ParamLimits

0xaf7a,	// (0x0000af7a) list_setting_pane_vc_t

0x373c,	// (0x0000373c) set_value_pane_cp_vc_ParamLimits

0x373c,	// (0x0000373c) set_value_pane_cp_vc

0x0db1,	// (0x00000db1) list_single_number_heading_pane_vc_g1_ParamLimits

0x0db1,	// (0x00000db1) list_single_number_heading_pane_vc_g1

0x0dbd,	// (0x00000dbd) list_single_number_heading_pane_vc_g2_ParamLimits

0x0dbd,	// (0x00000dbd) list_single_number_heading_pane_vc_g2

0x0001,

0xab16,	// (0x0000ab16) list_single_number_heading_pane_vc_g_ParamLimits

0xab16,	// (0x0000ab16) list_single_number_heading_pane_vc_g

0x3686,	// (0x00003686) list_single_number_heading_pane_vc_t1_ParamLimits

0x3686,	// (0x00003686) list_single_number_heading_pane_vc_t1

0x5998,	// (0x00005998) list_single_number_heading_pane_vc_t2_ParamLimits

0x5998,	// (0x00005998) list_single_number_heading_pane_vc_t2

0x0e19,	// (0x00000e19) list_single_number_heading_pane_vc_t3_ParamLimits

0x0e19,	// (0x00000e19) list_single_number_heading_pane_vc_t3

0x0002,

0xaf7f,	// (0x0000af7f) list_single_number_heading_pane_vc_t_ParamLimits

0xaf7f,	// (0x0000af7f) list_single_number_heading_pane_vc_t

0x0e2b,	// (0x00000e2b) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0e2b,	// (0x00000e2b) list_single_graphic_heading_pane_vc_g1

0x0db1,	// (0x00000db1) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0db1,	// (0x00000db1) list_single_graphic_heading_pane_vc_g4

0x0dbd,	// (0x00000dbd) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0dbd,	// (0x00000dbd) list_single_graphic_heading_pane_vc_g5

0x0002,

0xacf9,	// (0x0000acf9) list_single_graphic_heading_pane_vc_g_ParamLimits

0xacf9,	// (0x0000acf9) list_single_graphic_heading_pane_vc_g

0x3686,	// (0x00003686) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3686,	// (0x00003686) list_single_graphic_heading_pane_vc_t1

0x59ac,	// (0x000059ac) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x59ac,	// (0x000059ac) list_single_graphic_heading_pane_vc_t2

0x0001,

0xaf86,	// (0x0000af86) list_single_graphic_heading_pane_vc_t_ParamLimits

0xaf86,	// (0x0000af86) list_single_graphic_heading_pane_vc_t

0x0db1,	// (0x00000db1) list_double2_pane_vc_g1_ParamLimits

0x0db1,	// (0x00000db1) list_double2_pane_vc_g1

0x0dbd,	// (0x00000dbd) list_double2_pane_vc_g2_ParamLimits

0x0dbd,	// (0x00000dbd) list_double2_pane_vc_g2

0x0001,

0xab16,	// (0x0000ab16) list_double2_pane_vc_g_ParamLimits

0xab16,	// (0x0000ab16) list_double2_pane_vc_g

0x4f9d,	// (0x00004f9d) list_double2_pane_vc_t1_ParamLimits

0x4f9d,	// (0x00004f9d) list_double2_pane_vc_t1

0x59c0,	// (0x000059c0) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x59c0,	// (0x000059c0) list_double2_large_graphic_pane_vc_g1

0x59cc,	// (0x000059cc) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x59cc,	// (0x000059cc) list_double2_large_graphic_pane_vc_g2

0x59d8,	// (0x000059d8) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x59d8,	// (0x000059d8) list_double2_large_graphic_pane_vc_g3

0x0002,

0xaf8b,	// (0x0000af8b) list_double2_large_graphic_pane_vc_g_ParamLimits

0xaf8b,	// (0x0000af8b) list_double2_large_graphic_pane_vc_g

0x59e4,	// (0x000059e4) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x59e4,	// (0x000059e4) list_double2_large_graphic_pane_vc_t1

0x59fa,	// (0x000059fa) list_double_time_pane_vc_g1_ParamLimits

0x59fa,	// (0x000059fa) list_double_time_pane_vc_g1

0x5a06,	// (0x00005a06) list_double_time_pane_vc_g2_ParamLimits

0x5a06,	// (0x00005a06) list_double_time_pane_vc_g2

0x0001,

0xaf92,	// (0x0000af92) list_double_time_pane_vc_g_ParamLimits

0xaf92,	// (0x0000af92) list_double_time_pane_vc_g

0x5a12,	// (0x00005a12) list_double_time_pane_vc_t1_ParamLimits

0x5a12,	// (0x00005a12) list_double_time_pane_vc_t1

0x5a30,	// (0x00005a30) list_double_time_pane_vc_t2_ParamLimits

0x5a30,	// (0x00005a30) list_double_time_pane_vc_t2

0x5a5a,	// (0x00005a5a) list_double_time_pane_vc_t3_ParamLimits

0x5a5a,	// (0x00005a5a) list_double_time_pane_vc_t3

0x5a6c,	// (0x00005a6c) list_double_time_pane_vc_t4_ParamLimits

0x5a6c,	// (0x00005a6c) list_double_time_pane_vc_t4

0x0003,

0xaf97,	// (0x0000af97) list_double_time_pane_vc_t_ParamLimits

0xaf97,	// (0x0000af97) list_double_time_pane_vc_t

0x0db1,	// (0x00000db1) list_double_pane_vc_g1_ParamLimits

0x0db1,	// (0x00000db1) list_double_pane_vc_g1

0x0dbd,	// (0x00000dbd) list_double_pane_vc_g2_ParamLimits

0x0dbd,	// (0x00000dbd) list_double_pane_vc_g2

0x0001,

0xab16,	// (0x0000ab16) list_double_pane_vc_g_ParamLimits

0xab16,	// (0x0000ab16) list_double_pane_vc_g

0x5a80,	// (0x00005a80) list_double_pane_vc_t1_ParamLimits

0x5a80,	// (0x00005a80) list_double_pane_vc_t1

0x5a92,	// (0x00005a92) list_double_pane_vc_t2_ParamLimits

0x5a92,	// (0x00005a92) list_double_pane_vc_t2

0x0001,

0xafa0,	// (0x0000afa0) list_double_pane_vc_t_ParamLimits

0xafa0,	// (0x0000afa0) list_double_pane_vc_t

0x0db1,	// (0x00000db1) list_double_number_pane_vc_g1_ParamLimits

0x0db1,	// (0x00000db1) list_double_number_pane_vc_g1

0x0dbd,	// (0x00000dbd) list_double_number_pane_vc_g2_ParamLimits

0x0dbd,	// (0x00000dbd) list_double_number_pane_vc_g2

0x0001,

0xab16,	// (0x0000ab16) list_double_number_pane_vc_g_ParamLimits

0xab16,	// (0x0000ab16) list_double_number_pane_vc_g

0x5aaa,	// (0x00005aaa) list_double_number_pane_vc_t1_ParamLimits

0x5aaa,	// (0x00005aaa) list_double_number_pane_vc_t1

0x5abc,	// (0x00005abc) list_double_number_pane_vc_t2_ParamLimits

0x5abc,	// (0x00005abc) list_double_number_pane_vc_t2

0x5ace,	// (0x00005ace) list_double_number_pane_vc_t3_ParamLimits

0x5ace,	// (0x00005ace) list_double_number_pane_vc_t3

0x0002,

0xafa5,	// (0x0000afa5) list_double_number_pane_vc_t_ParamLimits

0xafa5,	// (0x0000afa5) list_double_number_pane_vc_t

0x5ae6,	// (0x00005ae6) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5ae6,	// (0x00005ae6) list_double_large_graphic_pane_vc_g1

0x5b02,	// (0x00005b02) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5b02,	// (0x00005b02) list_double_large_graphic_pane_vc_g2

0x5b16,	// (0x00005b16) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5b16,	// (0x00005b16) list_double_large_graphic_pane_vc_g3

0x5b25,	// (0x00005b25) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5b25,	// (0x00005b25) list_double_large_graphic_pane_vc_g4

0x0003,

0xafac,	// (0x0000afac) list_double_large_graphic_pane_vc_g_ParamLimits

0xafac,	// (0x0000afac) list_double_large_graphic_pane_vc_g

0x5b34,	// (0x00005b34) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5b34,	// (0x00005b34) list_double_large_graphic_pane_vc_t1

0x5b4e,	// (0x00005b4e) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5b4e,	// (0x00005b4e) list_double_large_graphic_pane_vc_t2

0x0001,

0xafb5,	// (0x0000afb5) list_double_large_graphic_pane_vc_t_ParamLimits

0xafb5,	// (0x0000afb5) list_double_large_graphic_pane_vc_t

0x56da,	// (0x000056da) list_double_heading_pane_vc_g1_ParamLimits

0x56da,	// (0x000056da) list_double_heading_pane_vc_g1

0x56e6,	// (0x000056e6) list_double_heading_pane_vc_g2_ParamLimits

0x56e6,	// (0x000056e6) list_double_heading_pane_vc_g2

0x0001,

0xafba,	// (0x0000afba) list_double_heading_pane_vc_g_ParamLimits

0xafba,	// (0x0000afba) list_double_heading_pane_vc_g

0x5b70,	// (0x00005b70) list_double_heading_pane_vc_t1_ParamLimits

0x5b70,	// (0x00005b70) list_double_heading_pane_vc_t1

0x3686,	// (0x00003686) list_double_heading_pane_vc_t2_ParamLimits

0x3686,	// (0x00003686) list_double_heading_pane_vc_t2

0x0001,

0xafbf,	// (0x0000afbf) list_double_heading_pane_vc_t_ParamLimits

0xafbf,	// (0x0000afbf) list_double_heading_pane_vc_t

0x5b84,	// (0x00005b84) list_double_graphic_pane_vc_g1_ParamLimits

0x5b84,	// (0x00005b84) list_double_graphic_pane_vc_g1

0x5b90,	// (0x00005b90) list_double_graphic_pane_vc_g2_ParamLimits

0x5b90,	// (0x00005b90) list_double_graphic_pane_vc_g2

0x0db1,	// (0x00000db1) list_double_graphic_pane_vc_g3_ParamLimits

0x0db1,	// (0x00000db1) list_double_graphic_pane_vc_g3

0x0003,

0xafc4,	// (0x0000afc4) list_double_graphic_pane_vc_g_ParamLimits

0xafc4,	// (0x0000afc4) list_double_graphic_pane_vc_g

0x5bad,	// (0x00005bad) list_double_graphic_pane_vc_t1_ParamLimits

0x5bad,	// (0x00005bad) list_double_graphic_pane_vc_t1

0x5bcb,	// (0x00005bcb) list_double_graphic_pane_vc_t2_ParamLimits

0x5bcb,	// (0x00005bcb) list_double_graphic_pane_vc_t2

0x0001,

0xafcd,	// (0x0000afcd) list_double_graphic_pane_vc_t_ParamLimits

0xafcd,	// (0x0000afcd) list_double_graphic_pane_vc_t

0x0050,	// (0x00000050) aid_size_cell_fastswap

0xb47c,	// (0x0000b47c) aid_size_cell_touch_ParamLimits

0xb47c,	// (0x0000b47c) aid_size_cell_touch

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window_ParamLimits

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window

0xb62c,	// (0x0000b62c) touch_pane_ParamLimits

0xb62c,	// (0x0000b62c) touch_pane

0x126f,	// (0x0000126f) button_value_adjust_pane_cp2

0x126f,	// (0x0000126f) button_value_adjust_pane_cp4

0x128f,	// (0x0000128f) form_field_data_pane_cp2

0xbd65,	// (0x0000bd65) form_field_data_wide_pane_cp2

0x1aac,	// (0x00001aac) bg_scroll_pane_ParamLimits

0x1acb,	// (0x00001acb) scroll_handle_pane_ParamLimits

0x1adf,	// (0x00001adf) scroll_sc2_down_pane_ParamLimits

0x1adf,	// (0x00001adf) scroll_sc2_down_pane

0x1b06,	// (0x00001b06) scroll_sc2_up_pane_ParamLimits

0x1b06,	// (0x00001b06) scroll_sc2_up_pane

0xd661,	// (0x0000d661) grid_wheel_folder_pane_g1_ParamLimits

0xd661,	// (0x0000d661) grid_wheel_folder_pane_g1

0x21b6,	// (0x000021b6) clock_nsta_pane_cp2_ParamLimits

0x21b6,	// (0x000021b6) clock_nsta_pane_cp2

0x2ad0,	// (0x00002ad0) listscroll_midp_pane_ParamLimits

0xc127,	// (0x0000c127) midp_canvas_pane

0x2a3c,	// (0x00002a3c) nsta_clock_indic_pane

0x2a9a,	// (0x00002a9a) listscroll_form_pane_vc

0x2abe,	// (0x00002abe) listscroll_set_pane_vc_ParamLimits

0x2abe,	// (0x00002abe) listscroll_set_pane_vc

0xcbbd,	// (0x0000cbbd) clock_nsta_pane

0xcbe7,	// (0x0000cbe7) indicator_nsta_pane

0x34eb,	// (0x000034eb) bg_popup_sub_pane_cp2_ParamLimits

0x34ff,	// (0x000034ff) find_pane_cp2_ParamLimits

0x34ff,	// (0x000034ff) find_pane_cp2

0x3515,	// (0x00003515) grid_toobar_pane_ParamLimits

0x374c,	// (0x0000374c) list_form_gen_pane_vc_ParamLimits

0x374c,	// (0x0000374c) list_form_gen_pane_vc

0x3762,	// (0x00003762) scroll_pane_cp8_vc_ParamLimits

0x3762,	// (0x00003762) scroll_pane_cp8_vc

0x387b,	// (0x0000387b) data_form_wide_pane_vc_ParamLimits

0x387b,	// (0x0000387b) data_form_wide_pane_vc

0x3887,	// (0x00003887) form_field_data_wide_pane_vc_g1

0x388f,	// (0x0000388f) form_field_data_wide_pane_vc_t1_ParamLimits

0x388f,	// (0x0000388f) form_field_data_wide_pane_vc_t1

0x1349,	// (0x00001349) input_focus_pane_cp6_vc_ParamLimits

0x1349,	// (0x00001349) input_focus_pane_cp6_vc

0xcff9,	// (0x0000cff9) list_midp_pane_ParamLimits

0x5277,	// (0x00005277) scroll_pane_cp16_ParamLimits

0x5277,	// (0x00005277) scroll_pane_cp16

0x3c6c,	// (0x00003c6c) button_value_adjust_pane_ParamLimits

0x3c6c,	// (0x00003c6c) button_value_adjust_pane

0xd298,	// (0x0000d298) button_value_adjust_pane_cp6_ParamLimits

0xd298,	// (0x0000d298) button_value_adjust_pane_cp6

0xd3ae,	// (0x0000d3ae) settings_code_pane_cp_ParamLimits

0xd3ae,	// (0x0000d3ae) settings_code_pane_cp

0x002e,	// (0x0000002e) cell_touch_pane_g1

0x002e,	// (0x0000002e) cell_touch_pane_g2

0x0001,

0xac4c,	// (0x0000ac4c) cell_touch_pane_g

0xd54f,	// (0x0000d54f) cell_touch_pane_cp_ParamLimits

0xd54f,	// (0x0000d54f) cell_touch_pane_cp

0xd56b,	// (0x0000d56b) cell_touch_pane_ParamLimits

0xd56b,	// (0x0000d56b) cell_touch_pane

0x002e,	// (0x0000002e) scroll_sc2_down_pane_g1

0x002e,	// (0x0000002e) scroll_sc2_up_pane_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_vc

0x5726,	// (0x00005726) list_set_graphic_pane_vc_g1_ParamLimits

0x5726,	// (0x00005726) list_set_graphic_pane_vc_g1

0x0f76,	// (0x00000f76) list_set_graphic_pane_vc_g2_ParamLimits

0x0f76,	// (0x00000f76) list_set_graphic_pane_vc_g2

0x0001,

0xaf3c,	// (0x0000af3c) list_set_graphic_pane_vc_g_ParamLimits

0xaf3c,	// (0x0000af3c) list_set_graphic_pane_vc_g

0x5732,	// (0x00005732) text_primary_small_cp13_vc_ParamLimits

0x5732,	// (0x00005732) text_primary_small_cp13_vc

0x574a,	// (0x0000574a) list_set_graphic_pane_vc_ParamLimits

0x574a,	// (0x0000574a) list_set_graphic_pane_vc

0x0293,	// (0x00000293) input_focus_pane_cp2_vc

0x002e,	// (0x0000002e) setting_code_pane_vc_g1

0x05d5,	// (0x000005d5) setting_code_pane_vc_t1

0x575e,	// (0x0000575e) set_text_pane_vc_t1_ParamLimits

0x575e,	// (0x0000575e) set_text_pane_vc_t1

0x0293,	// (0x00000293) input_focus_pane_cp1_vc

0x577b,	// (0x0000577b) list_set_text_pane_vc

0x002e,	// (0x0000002e) setting_text_pane_vc_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_vc

0x05a4,	// (0x000005a4) setting_slider_graphic_pane_vc_g1

0x5785,	// (0x00005785) setting_slider_graphic_pane_vc_t1

0x5795,	// (0x00005795) setting_slider_graphic_pane_vc_t2

0x0001,

0xaf41,	// (0x0000af41) setting_slider_graphic_pane_vc_t

0x57a5,	// (0x000057a5) slider_set_pane_cp_vc

0x57ad,	// (0x000057ad) slider_set_pane_vc_g1

0x57b6,	// (0x000057b6) slider_set_pane_vc_g2

0x0006,

0xaf46,	// (0x0000af46) slider_set_pane_vc_g

0x1476,	// (0x00001476) set_opt_bg_pane_g1_copy1

0x147e,	// (0x0000147e) set_opt_bg_pane_g2_copy1

0x57e2,	// (0x000057e2) set_opt_bg_pane_g3_copy1

0x148e,	// (0x0000148e) set_opt_bg_pane_g4_copy1

0x1496,	// (0x00001496) set_opt_bg_pane_g5_copy1

0x149e,	// (0x0000149e) set_opt_bg_pane_g6_copy1

0x57ea,	// (0x000057ea) set_opt_bg_pane_g7_copy1

0x57f4,	// (0x000057f4) set_opt_bg_pane_g8_copy1

0x57fc,	// (0x000057fc) set_opt_bg_pane_g9_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp_vc

0x5804,	// (0x00005804) setting_slider_pane_vc_t1

0x5813,	// (0x00005813) setting_slider_pane_vc_t2

0x5823,	// (0x00005823) setting_slider_pane_vc_t3

0x0002,

0xaf55,	// (0x0000af55) setting_slider_pane_vc_t

0x5833,	// (0x00005833) slider_set_pane_vc

0x44b0,	// (0x000044b0) volume_set_pane_vc_g1

0x583b,	// (0x0000583b) volume_set_pane_vc_g2

0x5844,	// (0x00005844) volume_set_pane_vc_g3

0x584d,	// (0x0000584d) volume_set_pane_vc_g4

0x5856,	// (0x00005856) volume_set_pane_vc_g5

0x585f,	// (0x0000585f) volume_set_pane_vc_g6

0x44dd,	// (0x000044dd) volume_set_pane_vc_g7

0x5868,	// (0x00005868) volume_set_pane_vc_g8

0x5871,	// (0x00005871) volume_set_pane_vc_g9

0x587a,	// (0x0000587a) volume_set_pane_vc_g10

0x0009,

0xaf5c,	// (0x0000af5c) volume_set_pane_vc_g

0x5883,	// (0x00005883) volume_set_pane_vc

0x588b,	// (0x0000588b) button_value_adjust_pane_cp1_vc

0x5895,	// (0x00005895) list_highlight_pane_cp2_vc

0x589e,	// (0x0000589e) list_set_pane_vc_ParamLimits

0x589e,	// (0x0000589e) list_set_pane_vc

0x58fc,	// (0x000058fc) main_pane_set_vc_t1_ParamLimits

0x58fc,	// (0x000058fc) main_pane_set_vc_t1

0x5911,	// (0x00005911) main_pane_set_vc_t2_ParamLimits

0x5911,	// (0x00005911) main_pane_set_vc_t2

0x5923,	// (0x00005923) main_pane_set_vc_t3_ParamLimits

0x5923,	// (0x00005923) main_pane_set_vc_t3

0x5935,	// (0x00005935) main_pane_set_vc_t4_ParamLimits

0x5935,	// (0x00005935) main_pane_set_vc_t4

0x0003,

0xaf71,	// (0x0000af71) main_pane_set_vc_t_ParamLimits

0xaf71,	// (0x0000af71) main_pane_set_vc_t

0x5947,	// (0x00005947) setting_code_pane_vc_ParamLimits

0x5947,	// (0x00005947) setting_code_pane_vc

0x5956,	// (0x00005956) setting_slider_graphic_pane_vc

0x5956,	// (0x00005956) setting_slider_pane_vc

0x5956,	// (0x00005956) setting_text_pane_vc

0x5956,	// (0x00005956) setting_volume_pane_vc

0x595e,	// (0x0000595e) scroll_pane_cp121_vc

0x125d,	// (0x0000125d) set_content_pane_vc

0x5bf5,	// (0x00005bf5) button_value_adjust_pane_g1

0x5bfe,	// (0x00005bfe) button_value_adjust_pane_g2

0x0001,

0xafd2,	// (0x0000afd2) button_value_adjust_pane_g

0x5c07,	// (0x00005c07) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5c07,	// (0x00005c07) form_field_slider_wide_pane_vc_t1

0x5c1b,	// (0x00005c1b) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5c1b,	// (0x00005c1b) form_field_slider_wide_pane_vc_t2

0x0002,

0xafd7,	// (0x0000afd7) form_field_slider_wide_pane_vc_t_ParamLimits

0xafd7,	// (0x0000afd7) form_field_slider_wide_pane_vc_t

0x081f,	// (0x0000081f) input_focus_pane_cp10_vc_ParamLimits

0x081f,	// (0x0000081f) input_focus_pane_cp10_vc

0x5c47,	// (0x00005c47) slider_cont_pane_cp1_vc_ParamLimits

0x5c47,	// (0x00005c47) slider_cont_pane_cp1_vc

0x5c57,	// (0x00005c57) slider_form_pane_g1_cp2

0x57b6,	// (0x000057b6) slider_form_pane_g2_cp2

0x5c84,	// (0x00005c84) form_field_slider_pane_vc_t3

0x5c92,	// (0x00005c92) form_field_slider_pane_vc_t4

0x5ca0,	// (0x00005ca0) slider_form_pane_vc_ParamLimits

0x5ca0,	// (0x00005ca0) slider_form_pane_vc

0x5cad,	// (0x00005cad) form_field_slider_pane_vc_t1_ParamLimits

0x5cad,	// (0x00005cad) form_field_slider_pane_vc_t1

0x5c1b,	// (0x00005c1b) form_field_slider_pane_vc_t2_ParamLimits

0x5c1b,	// (0x00005c1b) form_field_slider_pane_vc_t2

0x0001,

0xafe9,	// (0x0000afe9) form_field_slider_pane_vc_t_ParamLimits

0xafe9,	// (0x0000afe9) form_field_slider_pane_vc_t

0x081f,	// (0x0000081f) input_focus_pane_cp9_vc_ParamLimits

0x081f,	// (0x0000081f) input_focus_pane_cp9_vc

0x5cc9,	// (0x00005cc9) slider_cont_pane_vc_ParamLimits

0x5cc9,	// (0x00005cc9) slider_cont_pane_vc

0x5cdb,	// (0x00005cdb) list_form_graphic_pane_cp_vc_ParamLimits

0x5cdb,	// (0x00005cdb) list_form_graphic_pane_cp_vc

0x3887,	// (0x00003887) form_field_popup_wide_pane_vc_g1

0x5cf0,	// (0x00005cf0) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5cf0,	// (0x00005cf0) form_field_popup_wide_pane_vc_t1

0x1349,	// (0x00001349) input_focus_pane_cp8_vc_ParamLimits

0x1349,	// (0x00001349) input_focus_pane_cp8_vc

0x5d35,	// (0x00005d35) list_form_wide_pane_vc_ParamLimits

0x5d35,	// (0x00005d35) list_form_wide_pane_vc

0x5d41,	// (0x00005d41) list_form_graphic_pane_vc_g1

0x5d49,	// (0x00005d49) list_form_graphic_pane_vc_t1_ParamLimits

0x5d49,	// (0x00005d49) list_form_graphic_pane_vc_t1

0x04f9,	// (0x000004f9) list_highlight_pane_cp5_vc_ParamLimits

0x04f9,	// (0x000004f9) list_highlight_pane_cp5_vc

0x5d65,	// (0x00005d65) list_form_graphic_pane_vc_ParamLimits

0x5d65,	// (0x00005d65) list_form_graphic_pane_vc

0x3887,	// (0x00003887) form_field_popup_pane_vc_g1

0x5d7b,	// (0x00005d7b) form_field_popup_pane_vc_t1_ParamLimits

0x5d7b,	// (0x00005d7b) form_field_popup_pane_vc_t1

0x1349,	// (0x00001349) input_focus_pane_cp7_vc_ParamLimits

0x1349,	// (0x00001349) input_focus_pane_cp7_vc

0x5d92,	// (0x00005d92) list_form_pane_vc_ParamLimits

0x5d92,	// (0x00005d92) list_form_pane_vc

0x5d9e,	// (0x00005d9e) data_form_pane_vc_t1_ParamLimits

0x5d9e,	// (0x00005d9e) data_form_pane_vc_t1

0x1476,	// (0x00001476) input_focus_pane_vc_g1

0x147e,	// (0x0000147e) input_focus_pane_vc_g2

0x1486,	// (0x00001486) input_focus_pane_vc_g3

0x148e,	// (0x0000148e) input_focus_pane_vc_g4

0x1496,	// (0x00001496) input_focus_pane_vc_g5

0x149e,	// (0x0000149e) input_focus_pane_vc_g6

0x14a6,	// (0x000014a6) input_focus_pane_vc_g7

0x14ae,	// (0x000014ae) input_focus_pane_vc_g8

0x14b6,	// (0x000014b6) input_focus_pane_vc_g9

0x002e,	// (0x0000002e) input_focus_pane_vc_g10

0x0009,

0xabd5,	// (0x0000abd5) input_focus_pane_vc_g

0x387b,	// (0x0000387b) data_form_pane_vc_ParamLimits

0x387b,	// (0x0000387b) data_form_pane_vc

0x3887,	// (0x00003887) form_field_data_pane_vc_g1

0x5db9,	// (0x00005db9) form_field_data_pane_vc_t1_ParamLimits

0x5db9,	// (0x00005db9) form_field_data_pane_vc_t1

0x1349,	// (0x00001349) input_focus_pane_vc_ParamLimits

0x1349,	// (0x00001349) input_focus_pane_vc

0x5dd3,	// (0x00005dd3) button_value_adjust_pane_cp3_vc

0x5ddb,	// (0x00005ddb) button_value_adjust_pane_cp5_vc

0x5de3,	// (0x00005de3) form_field_data_pane_vc_ParamLimits

0x5de3,	// (0x00005de3) form_field_data_pane_vc

0x5dfa,	// (0x00005dfa) form_field_data_pane_vc_cp2

0x5e02,	// (0x00005e02) form_field_data_wide_pane_vc_ParamLimits

0x5e02,	// (0x00005e02) form_field_data_wide_pane_vc

0x5e18,	// (0x00005e18) form_field_data_wide_pane_vc_cp2

0x5e20,	// (0x00005e20) form_field_popup_pane_vc_ParamLimits

0x5e20,	// (0x00005e20) form_field_popup_pane_vc

0x5e37,	// (0x00005e37) form_field_popup_wide_pane_vc_ParamLimits

0x5e37,	// (0x00005e37) form_field_popup_wide_pane_vc

0x5e4d,	// (0x00005e4d) form_field_slider_pane_vc_ParamLimits

0x5e4d,	// (0x00005e4d) form_field_slider_pane_vc

0x5e60,	// (0x00005e60) form_field_slider_wide_pane_vc_ParamLimits

0x5e60,	// (0x00005e60) form_field_slider_wide_pane_vc

0xd589,	// (0x0000d589) grid_touch_1_pane_ParamLimits

0xd589,	// (0x0000d589) grid_touch_1_pane

0xd59d,	// (0x0000d59d) grid_touch_2_pane_ParamLimits

0xd59d,	// (0x0000d59d) grid_touch_2_pane

0x5f2e,	// (0x00005f2e) touch_pane_g1_ParamLimits

0x5f2e,	// (0x00005f2e) touch_pane_g1

0x5e97,	// (0x00005e97) cell_app_pane_cp_wide_ParamLimits

0x5e97,	// (0x00005e97) cell_app_pane_cp_wide

0x5ea8,	// (0x00005ea8) grid_popup_fast_wide_pane_ParamLimits

0x5ea8,	// (0x00005ea8) grid_popup_fast_wide_pane

0x5ebc,	// (0x00005ebc) scroll_pane_cp19_ParamLimits

0x5ebc,	// (0x00005ebc) scroll_pane_cp19

0x0293,	// (0x00000293) bg_popup_window_pane_cp20

0x5ed0,	// (0x00005ed0) listscroll_popup_fast_wide_pane

0x166a,	// (0x0000166a) grid_indicator_nsta_pane

0x5ed8,	// (0x00005ed8) clock_nsta_pane_g1

0x5ee1,	// (0x00005ee1) clock_nsta_pane_t1

0xd5c7,	// (0x0000d5c7) cell_indicator_nsta_pane_ParamLimits

0xd5c7,	// (0x0000d5c7) cell_indicator_nsta_pane

0x5f2e,	// (0x00005f2e) cell_indicator_nsta_pane_g1

0xd5de,	// (0x0000d5de) cell_indicator_nsta_pane_g2

0x0001,

0xf3ce,	// (0x0000f3ce) cell_indicator_nsta_pane_g

0x5f49,	// (0x00005f49) clock_nsta_pane_cp

0x5f51,	// (0x00005f51) indicator_nsta_pane_cp

0x5f59,	// (0x00005f59) nsta_clock_indic_pane_g1

0x066d,	// (0x0000066d) grid_indicator_pane

0x1bfb,	// (0x00001bfb) scroll_pane_cp29

0x20e3,	// (0x000020e3) indicator_nsta_pane_cp2_ParamLimits

0x20e3,	// (0x000020e3) indicator_nsta_pane_cp2

0x04f9,	// (0x000004f9) main_apps_wheel_pane

0x3af7,	// (0x00003af7) form_midp_field_text_pane_ParamLimits

0x3c3e,	// (0x00003c3e) scroll_bar_cp050_ParamLimits

0x5fba,	// (0x00005fba) cell_indicator_pane_ParamLimits

0x5fba,	// (0x00005fba) cell_indicator_pane

0x5fd5,	// (0x00005fd5) cell_indicator_pane_g1

0xd5eb,	// (0x0000d5eb) grid_wheel_folder_pane_ParamLimits

0xd5eb,	// (0x0000d5eb) grid_wheel_folder_pane

0xd5f9,	// (0x0000d5f9) list_wheel_apps_pane_ParamLimits

0xd5f9,	// (0x0000d5f9) list_wheel_apps_pane

0xd607,	// (0x0000d607) main_apps_wheel_pane_g1_ParamLimits

0xd607,	// (0x0000d607) main_apps_wheel_pane_g1

0xd613,	// (0x0000d613) main_apps_wheel_pane_g2_ParamLimits

0xd613,	// (0x0000d613) main_apps_wheel_pane_g2

0x0001,

0xf3d3,	// (0x0000f3d3) main_apps_wheel_pane_g_ParamLimits

0xf3d3,	// (0x0000f3d3) main_apps_wheel_pane_g

0xd621,	// (0x0000d621) main_apps_wheel_pane_t1_ParamLimits

0xd621,	// (0x0000d621) main_apps_wheel_pane_t1

0xd635,	// (0x0000d635) list_wheel_apps_pane_g1

0xd63d,	// (0x0000d63d) list_wheel_apps_pane_g2

0xd645,	// (0x0000d645) list_wheel_apps_pane_g3

0xd64d,	// (0x0000d64d) list_wheel_apps_pane_g4

0xd657,	// (0x0000d657) list_wheel_apps_pane_g5

0x0004,

0xf3d8,	// (0x0000f3d8) list_wheel_apps_pane_g

0x23eb,	// (0x000023eb) navi_icon_text_pane

0xcab1,	// (0x0000cab1) aid_fill_nsta

0x609c,	// (0x0000609c) navi_icon_text_pane_g1

0x60a8,	// (0x000060a8) navi_icon_text_pane_t1

0xc106,	// (0x0000c106) list_set_graphic_pane_t1_ParamLimits

0xc106,	// (0x0000c106) list_set_graphic_pane_t1

0x4390,	// (0x00004390) popup_midp_note_alarm_window_t6_ParamLimits

0x4390,	// (0x00004390) popup_midp_note_alarm_window_t6

0x43a2,	// (0x000043a2) popup_midp_note_alarm_window_t7_ParamLimits

0x43a2,	// (0x000043a2) popup_midp_note_alarm_window_t7

0x43b4,	// (0x000043b4) popup_midp_note_alarm_window_t8_ParamLimits

0x43b4,	// (0x000043b4) popup_midp_note_alarm_window_t8

0x43c6,	// (0x000043c6) popup_midp_note_alarm_window_t9_ParamLimits

0x43c6,	// (0x000043c6) popup_midp_note_alarm_window_t9

0x43d8,	// (0x000043d8) popup_midp_note_alarm_window_t10_ParamLimits

0x43d8,	// (0x000043d8) popup_midp_note_alarm_window_t10

0x43ea,	// (0x000043ea) popup_midp_note_alarm_window_t11_ParamLimits

0x43ea,	// (0x000043ea) popup_midp_note_alarm_window_t11

0x43fc,	// (0x000043fc) scroll_pane_cp17_ParamLimits

0x43fc,	// (0x000043fc) scroll_pane_cp17

0x44b0,	// (0x000044b0) volume_small_pane_cp_g1

0x60ba,	// (0x000060ba) volume_small_pane_cp_g2

0x60c3,	// (0x000060c3) volume_small_pane_cp_g3

0x44c2,	// (0x000044c2) volume_small_pane_cp_g4

0x60cc,	// (0x000060cc) volume_small_pane_cp_g5

0x5856,	// (0x00005856) volume_small_pane_cp_g6

0x44d4,	// (0x000044d4) volume_small_pane_cp_g7

0x60d5,	// (0x000060d5) volume_small_pane_cp_g8

0x60de,	// (0x000060de) volume_small_pane_cp_g9

0x44e6,	// (0x000044e6) volume_small_pane_cp_g10

0x2634,	// (0x00002634) midp_ticker_pane_g1_ParamLimits

0x2640,	// (0x00002640) midp_ticker_pane_g2_ParamLimits

0xaca1,	// (0x0000aca1) midp_ticker_pane_g_ParamLimits

0x264c,	// (0x0000264c) midp_ticker_pane_t1_ParamLimits

0xcad5,	// (0x0000cad5) aid_fill_nsta_2

0x3c2a,	// (0x00003c2a) list_form2_midp_pane

0x4fb3,	// (0x00004fb3) midp_editing_number_pane_ParamLimits

0x4fc2,	// (0x00004fc2) midp_ticker_pane_ParamLimits

0x60e7,	// (0x000060e7) form2_midp_field_pane

0x610b,	// (0x0000610b) scroll_pane_cp51

0x612b,	// (0x0000612b) form2_midp_button_pane_ParamLimits

0x612b,	// (0x0000612b) form2_midp_button_pane

0x613d,	// (0x0000613d) form2_midp_content_pane_ParamLimits

0x613d,	// (0x0000613d) form2_midp_content_pane

0x6157,	// (0x00006157) form2_midp_field_choice_group_pane

0x615f,	// (0x0000615f) form2_midp_field_pane_g1

0x6167,	// (0x00006167) form2_midp_field_pane_g2

0x616f,	// (0x0000616f) form2_midp_field_pane_g3

0x6177,	// (0x00006177) form2_midp_field_pane_g4

0x0003,

0xb040,	// (0x0000b040) form2_midp_field_pane_g

0x617f,	// (0x0000617f) form2_midp_gauge_slider_pane

0x6187,	// (0x00006187) form2_midp_gauge_wait_pane

0x618f,	// (0x0000618f) form2_midp_image_pane_ParamLimits

0x618f,	// (0x0000618f) form2_midp_image_pane

0x61aa,	// (0x000061aa) form2_midp_label_pane_ParamLimits

0x61aa,	// (0x000061aa) form2_midp_label_pane

0xd68a,	// (0x0000d68a) form2_midp_label_pane_cp_ParamLimits

0xd68a,	// (0x0000d68a) form2_midp_label_pane_cp

0x61e4,	// (0x000061e4) form2_midp_string_pane_ParamLimits

0x61e4,	// (0x000061e4) form2_midp_string_pane

0x61f6,	// (0x000061f6) form2_midp_text_pane_ParamLimits

0x61f6,	// (0x000061f6) form2_midp_text_pane

0x6211,	// (0x00006211) form2_midp_time_pane

0x6221,	// (0x00006221) input_focus_pane_cp51_ParamLimits

0x6221,	// (0x00006221) input_focus_pane_cp51

0x6239,	// (0x00006239) form2_midp_label_pane_t1_ParamLimits

0x6239,	// (0x00006239) form2_midp_label_pane_t1

0x6279,	// (0x00006279) form2_mdip_text_pane_t1_ParamLimits

0x6279,	// (0x00006279) form2_mdip_text_pane_t1

0x6295,	// (0x00006295) form2_midp_time_pane_t1

0x62b0,	// (0x000062b0) form2_midp_gauge_slider_pane_t1

0xd6ab,	// (0x0000d6ab) form2_midp_gauge_slider_pane_t2

0xd6bf,	// (0x0000d6bf) form2_midp_gauge_slider_pane_t3

0x0002,

0xf3e8,	// (0x0000f3e8) form2_midp_gauge_slider_pane_t

0x62e6,	// (0x000062e6) form2_midp_slider_pane

0x62f2,	// (0x000062f2) form2_midp_gauge_wait_pane_t1

0x6300,	// (0x00006300) form2_midp_wait_pane_ParamLimits

0x6300,	// (0x00006300) form2_midp_wait_pane

0xd6d3,	// (0x0000d6d3) list_single_2graphic_pane_cp4_ParamLimits

0xd6d3,	// (0x0000d6d3) list_single_2graphic_pane_cp4

0xcf65,	// (0x0000cf65) list_single_midp_graphic_pane_cp_ParamLimits

0xcf65,	// (0x0000cf65) list_single_midp_graphic_pane_cp

0x0293,	// (0x00000293) list_highlight_pane_cp20

0x635a,	// (0x0000635a) list_single_2graphic_pane_g1_cp4

0x55a1,	// (0x000055a1) list_single_2graphic_pane_g2_cp4

0x6362,	// (0x00006362) list_single_2graphic_pane_t1_cp4

0x04f9,	// (0x000004f9) list_highlight_pane_cp21

0x6371,	// (0x00006371) list_single_midp_graphic_pane_g4_cp

0x6380,	// (0x00006380) list_single_midp_graphic_pane_t1_cp

0xd6e9,	// (0x0000d6e9) form2_mdip_string_pane_t1_ParamLimits

0xd6e9,	// (0x0000d6e9) form2_mdip_string_pane_t1

0x0293,	// (0x00000293) bg_wml_button_pane_cp2

0x002e,	// (0x0000002e) form2_midp_image_pane_g1

0x1039,	// (0x00001039) list_double_large_graphic_pane_g5_ParamLimits

0x1039,	// (0x00001039) list_double_large_graphic_pane_g5

0x2ad0,	// (0x00002ad0) midp_form_pane_ParamLimits

0x04f9,	// (0x000004f9) main_apps_wheel_pane_ParamLimits

0xc807,	// (0x0000c807) popup_preview_window_ParamLimits

0xc807,	// (0x0000c807) popup_preview_window

0x3030,	// (0x00003030) popup_touch_info_window_ParamLimits

0x3030,	// (0x00003030) popup_touch_info_window

0x304e,	// (0x0000304e) popup_touch_menu_window_ParamLimits

0x304e,	// (0x0000304e) popup_touch_menu_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp6

0x64b8,	// (0x000064b8) list_touch_menu_pane

0x64c0,	// (0x000064c0) list_single_touch_menu_pane_ParamLimits

0x64c0,	// (0x000064c0) list_single_touch_menu_pane

0x64d4,	// (0x000064d4) list_single_touch_menu_pane_t1

0x04f9,	// (0x000004f9) bg_popup_sub_pane_cp7_ParamLimits

0x04f9,	// (0x000004f9) bg_popup_sub_pane_cp7

0x64e2,	// (0x000064e2) heading_sub_pane

0x64ea,	// (0x000064ea) list_touch_info_pane_ParamLimits

0x64ea,	// (0x000064ea) list_touch_info_pane

0x64f9,	// (0x000064f9) list_single_touch_info_pane_ParamLimits

0x64f9,	// (0x000064f9) list_single_touch_info_pane

0x650b,	// (0x0000650b) list_single_touch_info_pane_t1

0x6519,	// (0x00006519) list_single_touch_info_pane_t2

0x0001,

0xb057,	// (0x0000b057) list_single_touch_info_pane_t

0x255f,	// (0x0000255f) bg_popup_heading_pane_cp

0x6527,	// (0x00006527) heading_sub_pane_t1

0x378d,	// (0x0000378d) bg_popup_preview_window_pane_cp_ParamLimits

0x378d,	// (0x0000378d) bg_popup_preview_window_pane_cp

0x64e2,	// (0x000064e2) heading_preview_pane

0x64ea,	// (0x000064ea) list_preview_pane_ParamLimits

0x64ea,	// (0x000064ea) list_preview_pane

0x6535,	// (0x00006535) popup_preview_window_g1

0x64f9,	// (0x000064f9) list_single_preview_pane_ParamLimits

0x64f9,	// (0x000064f9) list_single_preview_pane

0x653d,	// (0x0000653d) list_single_preview_pane_g1

0x6545,	// (0x00006545) list_single_preview_pane_t1

0x650b,	// (0x0000650b) list_single_preview_pane_t2

0x0001,

0xb05c,	// (0x0000b05c) list_single_preview_pane_t

0x6553,	// (0x00006553) bg_popup_heading_pane_cp2_ParamLimits

0x6553,	// (0x00006553) bg_popup_heading_pane_cp2

0x6569,	// (0x00006569) heading_preview_pane_g1

0x6571,	// (0x00006571) heading_preview_pane_t1_ParamLimits

0x6571,	// (0x00006571) heading_preview_pane_t1

0x0690,	// (0x00000690) soft_indicator_pane_t1_ParamLimits

0x0d71,	// (0x00000d71) scroll_pane_ParamLimits

0x1af4,	// (0x00001af4) scroll_sc2_left_pane

0x1afd,	// (0x00001afd) scroll_sc2_right_pane

0x1b1c,	// (0x00001b1c) scroll_bg_pane_g1_ParamLimits

0x1b31,	// (0x00001b31) scroll_bg_pane_g2_ParamLimits

0x1b49,	// (0x00001b49) scroll_bg_pane_g3_ParamLimits

0xac2c,	// (0x0000ac2c) scroll_bg_pane_g_ParamLimits

0x1b1c,	// (0x00001b1c) scroll_handle_pane_g1_ParamLimits

0x1b6b,	// (0x00001b6b) scroll_handle_pane_g2_ParamLimits

0x1b49,	// (0x00001b49) scroll_handle_pane_g3_ParamLimits

0xac33,	// (0x0000ac33) scroll_handle_pane_g_ParamLimits

0x2b00,	// (0x00002b00) popup_choice_list_window_ParamLimits

0x2b00,	// (0x00002b00) popup_choice_list_window

0x34f7,	// (0x000034f7) choice_list_pane

0x35bf,	// (0x000035bf) cell_toolbar_pane_t1

0x35e7,	// (0x000035e7) toolbar_button_pane_ParamLimits

0x4a14,	// (0x00004a14) ai_gene_pane_1_t2_ParamLimits

0x4a14,	// (0x00004a14) ai_gene_pane_1_t2

0x0001,

0xae4f,	// (0x0000ae4f) ai_gene_pane_1_t_ParamLimits

0xae4f,	// (0x0000ae4f) ai_gene_pane_1_t

0x658e,	// (0x0000658e) scroll_sc2_left_pane_g1

0x658e,	// (0x0000658e) scroll_sc2_right_pane_g1

0x2ad0,	// (0x00002ad0) bg_popup_sub_pane_cp10

0x6598,	// (0x00006598) list_choice_list_pane

0x65b1,	// (0x000065b1) list_single_choice_list_pane_ParamLimits

0x65b1,	// (0x000065b1) list_single_choice_list_pane

0x65c4,	// (0x000065c4) list_single_choice_list_pane_g1

0x163b,	// (0x0000163b) list_single_choice_list_pane_t1_ParamLimits

0x163b,	// (0x0000163b) list_single_choice_list_pane_t1

0x65cc,	// (0x000065cc) choice_list_pane_g1

0x65d4,	// (0x000065d4) choice_list_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp11

0x185f,	// (0x0000185f) title_pane_stacon_g2_ParamLimits

0x185f,	// (0x0000185f) title_pane_stacon_g2

0x0002,

0xac12,	// (0x0000ac12) title_pane_stacon_g_ParamLimits

0xac12,	// (0x0000ac12) title_pane_stacon_g

0x255f,	// (0x0000255f) cursor_press_pane

0xc4c0,	// (0x0000c4c0) popup_fep_hwr_window_ParamLimits

0xc4c0,	// (0x0000c4c0) popup_fep_hwr_window

0x2c20,	// (0x00002c20) popup_fep_vkb_window_ParamLimits

0x2c20,	// (0x00002c20) popup_fep_vkb_window

0x65e2,	// (0x000065e2) cursor_press_pane_g1

0x0002,

0xf3fc,	// (0x0000f3fc) fep_vkb_side_pane_g_ParamLimits

0x6623,	// (0x00006623) fep_hwr_candidate_pane_ParamLimits

0x6623,	// (0x00006623) fep_hwr_candidate_pane

0x664d,	// (0x0000664d) fep_hwr_side_pane_ParamLimits

0x664d,	// (0x0000664d) fep_hwr_side_pane

0x666d,	// (0x0000666d) fep_hwr_top_pane_ParamLimits

0x666d,	// (0x0000666d) fep_hwr_top_pane

0x6685,	// (0x00006685) fep_hwr_write_pane_ParamLimits

0x6685,	// (0x00006685) fep_hwr_write_pane

0xf3fc,	// (0x0000f3fc) fep_vkb_side_pane_g

0x66bf,	// (0x000066bf) fep_hwr_top_pane_g1

0x66d1,	// (0x000066d1) fep_hwr_top_pane_g2

0x66e3,	// (0x000066e3) fep_hwr_top_pane_g3

0x0002,

0xb061,	// (0x0000b061) fep_hwr_top_pane_g

0x66f8,	// (0x000066f8) fep_hwr_top_text_pane

0x1cc1,	// (0x00001cc1) fep_hwr_top_text_pane_g1

0x67d0,	// (0x000067d0) fep_hwr_top_text_pane_t1

0x6820,	// (0x00006820) fep_hwr_candidate_pane_g1

0x6a89,	// (0x00006a89) fep_vkb_keypad_pane_g3_ParamLimits

0x6a89,	// (0x00006a89) fep_vkb_keypad_pane_g3

0x6ab1,	// (0x00006ab1) fep_vkb_keypad_pane_g4_ParamLimits

0x6ab1,	// (0x00006ab1) fep_vkb_keypad_pane_g4

0x6b20,	// (0x00006b20) fep_vkb_bottom_pane_g2_ParamLimits

0x6b20,	// (0x00006b20) fep_vkb_bottom_pane_g2

0x0001,

0xb08c,	// (0x0000b08c) fep_vkb_bottom_pane_g_ParamLimits

0xb08c,	// (0x0000b08c) fep_vkb_bottom_pane_g

0x658e,	// (0x0000658e) cell_vkb_side_pane_g2

0x0001,

0xb096,	// (0x0000b096) cell_vkb_side_pane_g

0x6bab,	// (0x00006bab) cell_vkb_side_pane_t1

0x6bb9,	// (0x00006bb9) cell_vkb_side_pane_t1_copy1

0x658e,	// (0x0000658e) bg_fep_vkb_candidate_pane_g2

0x6ce5,	// (0x00006ce5) cell_vkb_candidate_pane_ParamLimits

0x6854,	// (0x00006854) aid_size_cell_vkb_ParamLimits

0x6854,	// (0x00006854) aid_size_cell_vkb

0x6ce5,	// (0x00006ce5) cell_vkb_candidate_pane

0x6d19,	// (0x00006d19) bg_popup_fep_shadow_pane_g1

0xd7c6,	// (0x0000d7c6) fep_vkb_bottom_pane_ParamLimits

0xd7c6,	// (0x0000d7c6) fep_vkb_bottom_pane

0x6916,	// (0x00006916) fep_vkb_candidate_pane_ParamLimits

0x6916,	// (0x00006916) fep_vkb_candidate_pane

0xd7eb,	// (0x0000d7eb) fep_vkb_keypad_pane_ParamLimits

0xd7eb,	// (0x0000d7eb) fep_vkb_keypad_pane

0xd820,	// (0x0000d820) fep_vkb_side_pane_ParamLimits

0xd820,	// (0x0000d820) fep_vkb_side_pane

0xd85c,	// (0x0000d85c) fep_vkb_top_pane_ParamLimits

0xd85c,	// (0x0000d85c) fep_vkb_top_pane

0x69e2,	// (0x000069e2) fep_vkb_top_pane_g1_ParamLimits

0x69e2,	// (0x000069e2) fep_vkb_top_pane_g1

0x69f1,	// (0x000069f1) fep_vkb_top_pane_g2_ParamLimits

0x69f1,	// (0x000069f1) fep_vkb_top_pane_g2

0x6a00,	// (0x00006a00) fep_vkb_top_pane_g3_ParamLimits

0x6a00,	// (0x00006a00) fep_vkb_top_pane_g3

0x0003,

0xb07c,	// (0x0000b07c) fep_vkb_top_pane_g_ParamLimits

0xb07c,	// (0x0000b07c) fep_vkb_top_pane_g

0x6a1e,	// (0x00006a1e) fep_vkb_top_text_pane_ParamLimits

0x6a1e,	// (0x00006a1e) fep_vkb_top_text_pane

0xd891,	// (0x0000d891) fep_vkb_side_pane_g1_ParamLimits

0xd891,	// (0x0000d891) fep_vkb_side_pane_g1

0x6a78,	// (0x00006a78) grid_vkb_side_pane_ParamLimits

0x6a78,	// (0x00006a78) grid_vkb_side_pane

0x6d21,	// (0x00006d21) bg_popup_fep_shadow_pane_g2

0x6d2a,	// (0x00006d2a) bg_popup_fep_shadow_pane_g3

0x6d32,	// (0x00006d32) bg_popup_fep_shadow_pane_g4

0x6d3b,	// (0x00006d3b) bg_popup_fep_shadow_pane_g5

0x6d45,	// (0x00006d45) bg_popup_fep_shadow_pane_g6

0x6d4d,	// (0x00006d4d) bg_popup_fep_shadow_pane_g7

0x1496,	// (0x00001496) bg_popup_fep_shadow_pane_g8

0x6acf,	// (0x00006acf) grid_vkb_keypad_number_pane_ParamLimits

0x6acf,	// (0x00006acf) grid_vkb_keypad_number_pane

0x6adf,	// (0x00006adf) grid_vkb_keypad_pane_ParamLimits

0x6adf,	// (0x00006adf) grid_vkb_keypad_pane

0x6b05,	// (0x00006b05) fep_vkb_bottom_pane_g1_ParamLimits

0x6b05,	// (0x00006b05) fep_vkb_bottom_pane_g1

0x6b2e,	// (0x00006b2e) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6b2e,	// (0x00006b2e) grid_vkb_keypad_bottom_left_pane

0x6b43,	// (0x00006b43) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6b43,	// (0x00006b43) grid_vkb_keypad_bottom_right_pane

0x6b58,	// (0x00006b58) fep_vkb_top_text_pane_g1

0xd8d8,	// (0x0000d8d8) fep_vkb_top_text_pane_t1

0xd8ea,	// (0x0000d8ea) cell_vkb_side_pane_ParamLimits

0xd8ea,	// (0x0000d8ea) cell_vkb_side_pane

0x658e,	// (0x0000658e) cell_vkb_side_pane_g1

0x6bc7,	// (0x00006bc7) cell_vkb_keypad_pane_ParamLimits

0x6bc7,	// (0x00006bc7) cell_vkb_keypad_pane

0x6c3c,	// (0x00006c3c) cell_vkb_keypad_pane_g1

0x0008,

0xb0a9,	// (0x0000b0a9) bg_popup_fep_shadow_pane_g

0x658e,	// (0x0000658e) cell_hwr_side_pane_g1

0x658e,	// (0x0000658e) cell_hwr_side_pane_g2

0x6c46,	// (0x00006c46) cell_vkb_keypad_pane_t1

0xd900,	// (0x0000d900) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd900,	// (0x0000d900) cell_vkb_keypad_bottom_left_pane

0xd915,	// (0x0000d915) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd915,	// (0x0000d915) cell_vkb_keypad_bottom_right_pane

0x658e,	// (0x0000658e) cell_vkb_keypad_bottom_left_pane_g1

0x658e,	// (0x0000658e) cell_vkb_keypad_bottom_right_pane_g1

0x6caa,	// (0x00006caa) cell_vkb_keypad_number_pane_ParamLimits

0x6caa,	// (0x00006caa) cell_vkb_keypad_number_pane

0x6cc9,	// (0x00006cc9) cell_vkb_keypad_number_pane_g1

0x6cd3,	// (0x00006cd3) cell_vkb_keypad_number_pane_g2

0x6cdc,	// (0x00006cdc) cell_vkb_keypad_number_pane_g3

0x0002,

0xb09b,	// (0x0000b09b) cell_vkb_keypad_number_pane_g

0x6c46,	// (0x00006c46) cell_vkb_keypad_number_pane_t1

0x6d00,	// (0x00006d00) fep_vkb_candidate_pane_g1

0x0001,

0xb096,	// (0x0000b096) cell_hwr_side_pane_g

0x6d5f,	// (0x00006d5f) cell_hwr_side_pane_t1

0x6d6d,	// (0x00006d6d) cell_hwr_side_pane_t1_copy1

0x6a10,	// (0x00006a10) cell_hwr_candidate_pane_g1

0x6dbd,	// (0x00006dbd) cell_hwr_candidate_pane_t1

0x658e,	// (0x0000658e) cell_vkb_candidate_pane_g2

0x6e11,	// (0x00006e11) cell_vkb_candidate_pane_t1

0x65ea,	// (0x000065ea) bg_popup_fep_shadow_pane_ParamLimits

0x65ea,	// (0x000065ea) bg_popup_fep_shadow_pane

0x669f,	// (0x0000669f) bg_fep_hwr_top_pane_g4

0x670d,	// (0x0000670d) bg_hwr_side_pane_g1_ParamLimits

0x670d,	// (0x0000670d) bg_hwr_side_pane_g1

0xd77f,	// (0x0000d77f) cell_hwr_side_pane_ParamLimits

0xd77f,	// (0x0000d77f) cell_hwr_side_pane

0x677b,	// (0x0000677b) fep_hwr_write_pane_g1_ParamLimits

0x677b,	// (0x0000677b) fep_hwr_write_pane_g1

0x6788,	// (0x00006788) fep_hwr_write_pane_g2_ParamLimits

0x6788,	// (0x00006788) fep_hwr_write_pane_g2

0x6795,	// (0x00006795) fep_hwr_write_pane_g3_ParamLimits

0x6795,	// (0x00006795) fep_hwr_write_pane_g3

0xd79f,	// (0x0000d79f) fep_hwr_write_pane_g4_ParamLimits

0xd79f,	// (0x0000d79f) fep_hwr_write_pane_g4

0x0005,

0xf3ef,	// (0x0000f3ef) fep_hwr_write_pane_g_ParamLimits

0xf3ef,	// (0x0000f3ef) fep_hwr_write_pane_g

0x669f,	// (0x0000669f) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x669f,	// (0x0000669f) bg_fep_hwr_candidate_pane_g2

0x67de,	// (0x000067de) cell_hwr_candidate_pane_ParamLimits

0x67de,	// (0x000067de) cell_hwr_candidate_pane

0x6820,	// (0x00006820) fep_hwr_candidate_pane_g1_ParamLimits

0x6882,	// (0x00006882) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x6882,	// (0x00006882) bg_popup_fep_shadow_pane_cp2

0x6a10,	// (0x00006a10) fep_vkb_top_pane_g4_ParamLimits

0x6a10,	// (0x00006a10) fep_vkb_top_pane_g4

0x6a56,	// (0x00006a56) fep_vkb_side_pane_g2_ParamLimits

0x6a56,	// (0x00006a56) fep_vkb_side_pane_g2

0xbc93,	// (0x0000bc93) list_setting_pane_t4_ParamLimits

0xbc93,	// (0x0000bc93) list_setting_pane_t4

0xbd0d,	// (0x0000bd0d) list_setting_number_pane_t5_ParamLimits

0xbd0d,	// (0x0000bd0d) list_setting_number_pane_t5

0xbfd0,	// (0x0000bfd0) list_double_heading_pane_cp2_ParamLimits

0xbfd0,	// (0x0000bfd0) list_double_heading_pane_cp2

0x0fc2,	// (0x00000fc2) list_double_heading_pane_g1_cp2_ParamLimits

0x0fc2,	// (0x00000fc2) list_double_heading_pane_g1_cp2

0x136f,	// (0x0000136f) list_double_heading_pane_g2_cp2_ParamLimits

0x136f,	// (0x0000136f) list_double_heading_pane_g2_cp2

0x6e1f,	// (0x00006e1f) list_double_heading_pane_t1_cp2_ParamLimits

0x6e1f,	// (0x00006e1f) list_double_heading_pane_t1_cp2

0x6e35,	// (0x00006e35) list_double_heading_pane_t2_cp2_ParamLimits

0x6e35,	// (0x00006e35) list_double_heading_pane_t2_cp2

0x000c,	// (0x0000000c) aid_value_unit2

0x0309,	// (0x00000309) popup_preview_fixed_window

0x082d,	// (0x0000082d) bg_popup_preview_window_pane_cp02

0x6e47,	// (0x00006e47) list_preview_fixed_pane

0x6e8d,	// (0x00006e8d) list_empty_pane_fp_ParamLimits

0x6e8d,	// (0x00006e8d) list_empty_pane_fp

0x6e8d,	// (0x00006e8d) list_single_cale_day_pane_fp_ParamLimits

0x6e8d,	// (0x00006e8d) list_single_cale_day_pane_fp

0x6e8d,	// (0x00006e8d) list_single_graphic_heading_pane_fp_ParamLimits

0x6e8d,	// (0x00006e8d) list_single_graphic_heading_pane_fp

0x6e8d,	// (0x00006e8d) list_single_graphic_pane_fp_ParamLimits

0x6e8d,	// (0x00006e8d) list_single_graphic_pane_fp

0x6e8d,	// (0x00006e8d) list_single_heading_pane_fp_ParamLimits

0x6e8d,	// (0x00006e8d) list_single_heading_pane_fp

0x6e8d,	// (0x00006e8d) list_single_pane_fp_ParamLimits

0x6e8d,	// (0x00006e8d) list_single_pane_fp

0x6ea3,	// (0x00006ea3) list_single_pane_fp_g1_ParamLimits

0x6ea3,	// (0x00006ea3) list_single_pane_fp_g1

0x0fc2,	// (0x00000fc2) list_single_pane_fp_g2_ParamLimits

0x0fc2,	// (0x00000fc2) list_single_pane_fp_g2

0x136f,	// (0x0000136f) list_single_pane_fp_g3_ParamLimits

0x136f,	// (0x0000136f) list_single_pane_fp_g3

0x6eaf,	// (0x00006eaf) list_single_pane_fp_g4_ParamLimits

0x6eaf,	// (0x00006eaf) list_single_pane_fp_g4

0x0003,

0xb0ca,	// (0x0000b0ca) list_single_pane_fp_g_ParamLimits

0xb0ca,	// (0x0000b0ca) list_single_pane_fp_g

0x6ebb,	// (0x00006ebb) list_single_pane_fp_t1_ParamLimits

0x6ebb,	// (0x00006ebb) list_single_pane_fp_t1

0x6ed2,	// (0x00006ed2) list_single_graphic_pane_fp_g1_ParamLimits

0x6ed2,	// (0x00006ed2) list_single_graphic_pane_fp_g1

0x6ea3,	// (0x00006ea3) list_single_graphic_pane_fp_g2_ParamLimits

0x6ea3,	// (0x00006ea3) list_single_graphic_pane_fp_g2

0x0fc2,	// (0x00000fc2) list_single_graphic_pane_fp_g3_ParamLimits

0x0fc2,	// (0x00000fc2) list_single_graphic_pane_fp_g3

0x136f,	// (0x0000136f) list_single_graphic_pane_fp_g4_ParamLimits

0x136f,	// (0x0000136f) list_single_graphic_pane_fp_g4

0x6eaf,	// (0x00006eaf) list_single_graphic_pane_fp_g5_ParamLimits

0x6eaf,	// (0x00006eaf) list_single_graphic_pane_fp_g5

0x0004,

0xb0d3,	// (0x0000b0d3) list_single_graphic_pane_fp_g_ParamLimits

0xb0d3,	// (0x0000b0d3) list_single_graphic_pane_fp_g

0x6ede,	// (0x00006ede) list_single_graphic_pane_fp_t1_ParamLimits

0x6ede,	// (0x00006ede) list_single_graphic_pane_fp_t1

0x6ed2,	// (0x00006ed2) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6ed2,	// (0x00006ed2) list_single_graphic_heading_pane_fp_g1

0x6ea3,	// (0x00006ea3) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6ea3,	// (0x00006ea3) list_single_graphic_heading_pane_fp_g2

0x0fc2,	// (0x00000fc2) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0fc2,	// (0x00000fc2) list_single_graphic_heading_pane_fp_g3

0x136f,	// (0x0000136f) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x136f,	// (0x0000136f) list_single_graphic_heading_pane_fp_g4

0x6eaf,	// (0x00006eaf) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6eaf,	// (0x00006eaf) list_single_graphic_heading_pane_fp_g5

0x0004,

0xb0d3,	// (0x0000b0d3) list_single_graphic_heading_pane_fp_g_ParamLimits

0xb0d3,	// (0x0000b0d3) list_single_graphic_heading_pane_fp_g

0x6ef4,	// (0x00006ef4) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6ef4,	// (0x00006ef4) list_single_graphic_heading_pane_fp_t1

0x6f0a,	// (0x00006f0a) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6f0a,	// (0x00006f0a) list_single_graphic_heading_pane_fp_t2

0x0001,

0xb0de,	// (0x0000b0de) list_single_graphic_heading_pane_fp_t_ParamLimits

0xb0de,	// (0x0000b0de) list_single_graphic_heading_pane_fp_t

0x6f1c,	// (0x00006f1c) list_single_cale_day_pane_fp_g1_ParamLimits

0x6f1c,	// (0x00006f1c) list_single_cale_day_pane_fp_g1

0x6f54,	// (0x00006f54) list_single_cale_day_pane_fp_g2_ParamLimits

0x6f54,	// (0x00006f54) list_single_cale_day_pane_fp_g2

0x6f60,	// (0x00006f60) list_single_cale_day_pane_fp_g3_ParamLimits

0x6f60,	// (0x00006f60) list_single_cale_day_pane_fp_g3

0x6f88,	// (0x00006f88) list_single_cale_day_pane_fp_g4_ParamLimits

0x6f88,	// (0x00006f88) list_single_cale_day_pane_fp_g4

0x6fac,	// (0x00006fac) list_single_cale_day_pane_fp_g5_ParamLimits

0x6fac,	// (0x00006fac) list_single_cale_day_pane_fp_g5

0x0004,

0xb0e3,	// (0x0000b0e3) list_single_cale_day_pane_fp_g_ParamLimits

0xb0e3,	// (0x0000b0e3) list_single_cale_day_pane_fp_g

0x6fd0,	// (0x00006fd0) list_single_cale_day_pane_fp_t1_ParamLimits

0x6fd0,	// (0x00006fd0) list_single_cale_day_pane_fp_t1

0x6ff6,	// (0x00006ff6) list_single_cale_day_pane_fp_t2_ParamLimits

0x6ff6,	// (0x00006ff6) list_single_cale_day_pane_fp_t2

0x700f,	// (0x0000700f) list_single_cale_day_pane_fp_t3_ParamLimits

0x700f,	// (0x0000700f) list_single_cale_day_pane_fp_t3

0x0002,

0xb0ee,	// (0x0000b0ee) list_single_cale_day_pane_fp_t_ParamLimits

0xb0ee,	// (0x0000b0ee) list_single_cale_day_pane_fp_t

0x6ea3,	// (0x00006ea3) list_empty_pane_fp_g1_ParamLimits

0x6ea3,	// (0x00006ea3) list_empty_pane_fp_g1

0x7028,	// (0x00007028) list_empty_pane_fp_t1

0x7036,	// (0x00007036) list_empty_pane_fp_t2

0x0001,

0xb0f5,	// (0x0000b0f5) list_empty_pane_fp_t

0x6ea3,	// (0x00006ea3) list_single_heading_pane_fp_g1_ParamLimits

0x6ea3,	// (0x00006ea3) list_single_heading_pane_fp_g1

0x0fc2,	// (0x00000fc2) list_single_heading_pane_fp_g2_ParamLimits

0x0fc2,	// (0x00000fc2) list_single_heading_pane_fp_g2

0x136f,	// (0x0000136f) list_single_heading_pane_fp_g3_ParamLimits

0x136f,	// (0x0000136f) list_single_heading_pane_fp_g3

0x0002,

0xb0fa,	// (0x0000b0fa) list_single_heading_pane_fp_g_ParamLimits

0xb0fa,	// (0x0000b0fa) list_single_heading_pane_fp_g

0x7044,	// (0x00007044) list_single_heading_pane_fp_t1_ParamLimits

0x7044,	// (0x00007044) list_single_heading_pane_fp_t1

0x7056,	// (0x00007056) list_single_heading_pane_fp_t2_ParamLimits

0x7056,	// (0x00007056) list_single_heading_pane_fp_t2

0x0001,

0xb101,	// (0x0000b101) list_single_heading_pane_fp_t_ParamLimits

0xb101,	// (0x0000b101) list_single_heading_pane_fp_t

0x16a9,	// (0x000016a9) aid_size_cell_fast

0x079d,	// (0x0000079d) soft_indicator_pane_cp1_t1

0x16e3,	// (0x000016e3) cell_app_pane_cp2_ParamLimits

0x16e3,	// (0x000016e3) cell_app_pane_cp2

0x660c,	// (0x0000660c) fep_hwr_candidate_drop_down_list_pane

0x683a,	// (0x0000683a) fep_hwr_candidate_pane_g3_ParamLimits

0x683a,	// (0x0000683a) fep_hwr_candidate_pane_g3

0x6847,	// (0x00006847) fep_hwr_candidate_pane_g4_ParamLimits

0x6847,	// (0x00006847) fep_hwr_candidate_pane_g4

0x0002,

0xb075,	// (0x0000b075) fep_hwr_candidate_pane_g_ParamLimits

0xb075,	// (0x0000b075) fep_hwr_candidate_pane_g

0x6905,	// (0x00006905) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x6905,	// (0x00006905) fep_vkb_candidate_drop_down_list_pane

0x6d08,	// (0x00006d08) fep_vkb_candidate_pane_g3

0x6d10,	// (0x00006d10) fep_vkb_candidate_pane_g4

0x0002,

0xb0a2,	// (0x0000b0a2) fep_vkb_candidate_pane_g

0x6a10,	// (0x00006a10) cell_hwr_candidate_pane_g1_ParamLimits

0x6d7b,	// (0x00006d7b) cell_hwr_candidate_pane_g3_ParamLimits

0x6d7b,	// (0x00006d7b) cell_hwr_candidate_pane_g3

0x6d9c,	// (0x00006d9c) cell_hwr_candidate_pane_g4_ParamLimits

0x6d9c,	// (0x00006d9c) cell_hwr_candidate_pane_g4

0x0002,

0xb0bc,	// (0x0000b0bc) cell_hwr_candidate_pane_g_ParamLimits

0xb0bc,	// (0x0000b0bc) cell_hwr_candidate_pane_g

0x6ddb,	// (0x00006ddb) cell_vkb_candidate_pane_g3_ParamLimits

0x6ddb,	// (0x00006ddb) cell_vkb_candidate_pane_g3

0x6df6,	// (0x00006df6) cell_vkb_candidate_pane_g4_ParamLimits

0x6df6,	// (0x00006df6) cell_vkb_candidate_pane_g4

0x706c,	// (0x0000706c) cell_app_pane_cp2_g1_ParamLimits

0x706c,	// (0x0000706c) cell_app_pane_cp2_g1

0x708a,	// (0x0000708a) cell_app_pane_cp2_g2_ParamLimits

0x708a,	// (0x0000708a) cell_app_pane_cp2_g2

0x0001,

0xb106,	// (0x0000b106) cell_app_pane_cp2_g_ParamLimits

0xb106,	// (0x0000b106) cell_app_pane_cp2_g

0x7096,	// (0x00007096) cell_app_pane_cp2_t1_ParamLimits

0x7096,	// (0x00007096) cell_app_pane_cp2_t1

0x1349,	// (0x00001349) grid_highlight_pane_cp1_ParamLimits

0x1349,	// (0x00001349) grid_highlight_pane_cp1

0x70a8,	// (0x000070a8) cell_hwr_candidate_pane_cp1_ParamLimits

0x70a8,	// (0x000070a8) cell_hwr_candidate_pane_cp1

0x6a10,	// (0x00006a10) fep_hwr_candidate_drop_down_list_pane_g1

0x70c7,	// (0x000070c7) fep_hwr_candidate_drop_down_list_pane_g2

0x70d4,	// (0x000070d4) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xb10b,	// (0x0000b10b) fep_hwr_candidate_drop_down_list_pane_g

0x70e1,	// (0x000070e1) fep_hwr_candidate_drop_down_list_scroll_pane

0x70ea,	// (0x000070ea) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x70ea,	// (0x000070ea) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x70f7,	// (0x000070f7) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x70f7,	// (0x000070f7) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7104,	// (0x00007104) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7104,	// (0x00007104) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6ddb,	// (0x00006ddb) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6ddb,	// (0x00006ddb) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6df6,	// (0x00006df6) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6df6,	// (0x00006df6) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7111,	// (0x00007111) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7111,	// (0x00007111) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x712c,	// (0x0000712c) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x712c,	// (0x0000712c) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7147,	// (0x00007147) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7147,	// (0x00007147) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xb112,	// (0x0000b112) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xb112,	// (0x0000b112) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7162,	// (0x00007162) cell_vkb_candidate_pane_cp1_ParamLimits

0x7162,	// (0x00007162) cell_vkb_candidate_pane_cp1

0x6a10,	// (0x00006a10) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x6a10,	// (0x00006a10) fep_vkb_candidate_drop_down_list_pane_g1

0x70c7,	// (0x000070c7) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x70c7,	// (0x000070c7) fep_vkb_candidate_drop_down_list_pane_g2

0x70d4,	// (0x000070d4) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x70d4,	// (0x000070d4) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xb10b,	// (0x0000b10b) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xb10b,	// (0x0000b10b) fep_vkb_candidate_drop_down_list_pane_g

0x7182,	// (0x00007182) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7182,	// (0x00007182) fep_vkb_candidate_drop_down_list_scroll_pane

0x718f,	// (0x0000718f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x718f,	// (0x0000718f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x719c,	// (0x0000719c) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x719c,	// (0x0000719c) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x71a8,	// (0x000071a8) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x71a8,	// (0x000071a8) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6d7b,	// (0x00006d7b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6d7b,	// (0x00006d7b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6d9c,	// (0x00006d9c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6d9c,	// (0x00006d9c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x71b4,	// (0x000071b4) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x71b4,	// (0x000071b4) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x71d5,	// (0x000071d5) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x71d5,	// (0x000071d5) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x71f6,	// (0x000071f6) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x71f6,	// (0x000071f6) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xb123,	// (0x0000b123) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xb123,	// (0x0000b123) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb682,	// (0x0000b682) title_pane_g1_ParamLimits

0xb695,	// (0x0000b695) title_pane_g2_ParamLimits

0xf24a,	// (0x0000f24a) title_pane_g_ParamLimits

0x1cb1,	// (0x00001cb1) aid_call2_pane

0x1cb9,	// (0x00001cb9) aid_call_pane

0x1cc1,	// (0x00001cc1) popup_clock_analogue_window_g1

0x1cc1,	// (0x00001cc1) popup_clock_analogue_window_g2

0x1cc9,	// (0x00001cc9) popup_clock_analogue_window_g3

0x1cd2,	// (0x00001cd2) popup_clock_analogue_window_g4

0x002e,	// (0x0000002e) popup_clock_analogue_window_g5

0x0004,

0xac41,	// (0x0000ac41) popup_clock_analogue_window_g

0x1cda,	// (0x00001cda) popup_clock_analogue_window_t1

0x1d62,	// (0x00001d62) clock_digital_number_pane_ParamLimits

0x1d62,	// (0x00001d62) clock_digital_number_pane

0x1d6e,	// (0x00001d6e) clock_digital_number_pane_cp02_ParamLimits

0x1d6e,	// (0x00001d6e) clock_digital_number_pane_cp02

0x1d7a,	// (0x00001d7a) clock_digital_number_pane_cp03_ParamLimits

0x1d7a,	// (0x00001d7a) clock_digital_number_pane_cp03

0x1d86,	// (0x00001d86) clock_digital_number_pane_cp04_ParamLimits

0x1d86,	// (0x00001d86) clock_digital_number_pane_cp04

0x1d92,	// (0x00001d92) clock_digital_separator_pane_ParamLimits

0x1d92,	// (0x00001d92) clock_digital_separator_pane

0x1d9e,	// (0x00001d9e) popup_clock_digital_window_t1_ParamLimits

0x1d9e,	// (0x00001d9e) popup_clock_digital_window_t1

0x002e,	// (0x0000002e) clock_digital_number_pane_g1

0x002e,	// (0x0000002e) clock_digital_number_pane_g2

0x0001,

0xac4c,	// (0x0000ac4c) clock_digital_number_pane_g

0x002e,	// (0x0000002e) clock_digital_separator_pane_g1

0x002e,	// (0x0000002e) clock_digital_separator_pane_g2

0x0001,

0xac4c,	// (0x0000ac4c) clock_digital_separator_pane_g

0xcab1,	// (0x0000cab1) aid_fill_nsta_ParamLimits

0xcbe7,	// (0x0000cbe7) indicator_nsta_pane_ParamLimits

0x3346,	// (0x00003346) popup_clock_analogue_window

0x3346,	// (0x00003346) popup_clock_digital_window

0x166a,	// (0x0000166a) grid_indicator_nsta_pane_ParamLimits

0x5eef,	// (0x00005eef) clock_nsta_pane_t2

0x0001,

0xaff5,	// (0x0000aff5) clock_nsta_pane_t

0x1a99,	// (0x00001a99) aid_size_max_handle

0x1aa3,	// (0x00001aa3) aid_size_min_handle

0x255f,	// (0x0000255f) editor_scroll_pane

0x7211,	// (0x00007211) ex_editor_pane

0x1617,	// (0x00001617) scroll_pane_cp13

0x0d9d,	// (0x00000d9d) scroll_pane_cp14

0x1d0f,	// (0x00001d0f) scroll_pane_cp36

0xbfe1,	// (0x0000bfe1) list_single_graphic_hl_pane_cp2_ParamLimits

0xbfe1,	// (0x0000bfe1) list_single_graphic_hl_pane_cp2

0xd442,	// (0x0000d442) list_single_graphic_hl_pane_ParamLimits

0xd442,	// (0x0000d442) list_single_graphic_hl_pane

0x7219,	// (0x00007219) aid_size_min_hl_cp1

0x7222,	// (0x00007222) list_highlight_pane_cp34_ParamLimits

0x7222,	// (0x00007222) list_highlight_pane_cp34

0x7233,	// (0x00007233) list_single_graphic_hl_pane_g1_ParamLimits

0x7233,	// (0x00007233) list_single_graphic_hl_pane_g1

0xd930,	// (0x0000d930) list_single_graphic_hl_pane_g2_ParamLimits

0xd930,	// (0x0000d930) list_single_graphic_hl_pane_g2

0xd930,	// (0x0000d930) list_single_graphic_hl_pane_g3_ParamLimits

0xd930,	// (0x0000d930) list_single_graphic_hl_pane_g3

0x24d0,	// (0x000024d0) list_single_graphic_hl_pane_g4_ParamLimits

0x24d0,	// (0x000024d0) list_single_graphic_hl_pane_g4

0xd93c,	// (0x0000d93c) list_single_graphic_hl_pane_g5_ParamLimits

0xd93c,	// (0x0000d93c) list_single_graphic_hl_pane_g5

0x0004,

0xf408,	// (0x0000f408) list_single_graphic_hl_pane_g_ParamLimits

0xf408,	// (0x0000f408) list_single_graphic_hl_pane_g

0xd950,	// (0x0000d950) list_single_graphic_hl_pane_t1_ParamLimits

0xd950,	// (0x0000d950) list_single_graphic_hl_pane_t1

0x7276,	// (0x00007276) aid_size_min_hl_cp2

0x727f,	// (0x0000727f) list_highlight_pane_cp34_cp2_ParamLimits

0x727f,	// (0x0000727f) list_highlight_pane_cp34_cp2

0x7233,	// (0x00007233) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7233,	// (0x00007233) list_single_graphic_hl_pane_g1_cp2

0x728c,	// (0x0000728c) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x728c,	// (0x0000728c) list_single_graphic_hl_pane_g2_cp2

0x7298,	// (0x00007298) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7298,	// (0x00007298) list_single_graphic_hl_pane_g3_cp2

0x0db1,	// (0x00000db1) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x0db1,	// (0x00000db1) list_single_graphic_hl_pane_g4_cp2

0x72a6,	// (0x000072a6) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x72a6,	// (0x000072a6) list_single_graphic_hl_pane_g5_cp2

0xc2c7,	// (0x0000c2c7) control_pane_g4_ParamLimits

0xc2c7,	// (0x0000c2c7) control_pane_g4

0x2ad0,	// (0x00002ad0) bg_popup_sub_pane_cp10_ParamLimits

0x6598,	// (0x00006598) list_choice_list_pane_ParamLimits

0x65a7,	// (0x000065a7) scroll_pane_cp23

0x082d,	// (0x0000082d) bg_popup_preview_window_pane_cp02_ParamLimits

0x6e47,	// (0x00006e47) list_preview_fixed_pane_ParamLimits

0x6e5d,	// (0x00006e5d) list_preview_fixed_pane_cp_ParamLimits

0x6e5d,	// (0x00006e5d) list_preview_fixed_pane_cp

0x6e69,	// (0x00006e69) popup_preview_fixed_window_g1_ParamLimits

0x6e69,	// (0x00006e69) popup_preview_fixed_window_g1

0x6e75,	// (0x00006e75) popup_preview_fixed_window_g2_ParamLimits

0x6e75,	// (0x00006e75) popup_preview_fixed_window_g2

0x0002,

0xb0c3,	// (0x0000b0c3) popup_preview_fixed_window_g_ParamLimits

0xb0c3,	// (0x0000b0c3) popup_preview_fixed_window_g

0x1944,	// (0x00001944) aid_navi_side_left_pane_ParamLimits

0x1959,	// (0x00001959) aid_navi_side_right_pane_ParamLimits

0x1971,	// (0x00001971) navi_icon_pane_stacon_ParamLimits

0x1985,	// (0x00001985) navi_navi_pane_stacon_ParamLimits

0x1971,	// (0x00001971) navi_text_pane_stacon_ParamLimits

0x0024,	// (0x00000024) main_text_info_pane

0x72d0,	// (0x000072d0) listscroll_text_info_pane

0x72d8,	// (0x000072d8) list_text_info_pane_ParamLimits

0x72d8,	// (0x000072d8) list_text_info_pane

0x72e7,	// (0x000072e7) scroll_pane_cp24_ParamLimits

0x72e7,	// (0x000072e7) scroll_pane_cp24

0xd966,	// (0x0000d966) list_text_info_pane_t1_ParamLimits

0xd966,	// (0x0000d966) list_text_info_pane_t1

0xc435,	// (0x0000c435) popup_fast_swap2_window_ParamLimits

0xc435,	// (0x0000c435) popup_fast_swap2_window

0x733a,	// (0x0000733a) aid_size_cell_fast2

0x0024,	// (0x00000024) bg_popup_window_pane_cp17

0x3c56,	// (0x00003c56) heading_pane_cp2

0x0a70,	// (0x00000a70) listscroll_fast2_pane

0x7344,	// (0x00007344) grid_fast2_pane

0x734e,	// (0x0000734e) listscroll_fast2_pane_g1

0x7356,	// (0x00007356) listscroll_fast2_pane_g2

0x0001,

0xb13f,	// (0x0000b13f) listscroll_fast2_pane_g

0x1617,	// (0x00001617) scroll_pane_cp26

0x7360,	// (0x00007360) cell_fast2_pane_ParamLimits

0x7360,	// (0x00007360) cell_fast2_pane

0x7375,	// (0x00007375) cell_fast2_pane_g1

0x737e,	// (0x0000737e) cell_fast2_pane_g2

0x7387,	// (0x00007387) cell_fast2_pane_g3

0x0002,

0xb144,	// (0x0000b144) cell_fast2_pane_g

0x0b5a,	// (0x00000b5a) grid_highlight_pane_cp9

0x0b6f,	// (0x00000b6f) main_eswt_pane_ParamLimits

0x0b6f,	// (0x00000b6f) main_eswt_pane

0x72fc,	// (0x000072fc) list_single_text_info_pane

0x738f,	// (0x0000738f) eswt_ctrl_button_pane

0x738f,	// (0x0000738f) eswt_ctrl_canvas_pane

0x7397,	// (0x00007397) eswt_ctrl_combo_pane

0x738f,	// (0x0000738f) eswt_ctrl_default_pane

0x738f,	// (0x0000738f) eswt_ctrl_label_pane

0x739f,	// (0x0000739f) eswt_ctrl_wait_pane

0x73a7,	// (0x000073a7) eswt_shell_pane

0x0024,	// (0x00000024) listscroll_eswt_app_pane

0x73c7,	// (0x000073c7) popup_eswt_tasktip_window_ParamLimits

0x73c7,	// (0x000073c7) popup_eswt_tasktip_window

0x378d,	// (0x0000378d) bg_popup_window_pane_cp18

0x73d8,	// (0x000073d8) eswt_control_pane_g1_ParamLimits

0x73d8,	// (0x000073d8) eswt_control_pane_g1

0x73e5,	// (0x000073e5) eswt_control_pane_g2_ParamLimits

0x73e5,	// (0x000073e5) eswt_control_pane_g2

0x73f2,	// (0x000073f2) eswt_control_pane_g3_ParamLimits

0x73f2,	// (0x000073f2) eswt_control_pane_g3

0x73ff,	// (0x000073ff) eswt_control_pane_g4_ParamLimits

0x73ff,	// (0x000073ff) eswt_control_pane_g4

0x0003,

0xb14b,	// (0x0000b14b) eswt_control_pane_g_ParamLimits

0xb14b,	// (0x0000b14b) eswt_control_pane_g

0x1349,	// (0x00001349) bg_button_pane_ParamLimits

0x1349,	// (0x00001349) bg_button_pane

0x0b6f,	// (0x00000b6f) common_borders_pane_copy2_ParamLimits

0x0b6f,	// (0x00000b6f) common_borders_pane_copy2

0x740c,	// (0x0000740c) control_button_pane_g1_ParamLimits

0x740c,	// (0x0000740c) control_button_pane_g1

0x7418,	// (0x00007418) control_button_pane_g2_ParamLimits

0x7418,	// (0x00007418) control_button_pane_g2

0x7424,	// (0x00007424) control_button_pane_g3_ParamLimits

0x7424,	// (0x00007424) control_button_pane_g3

0x0002,

0xb154,	// (0x0000b154) control_button_pane_g_ParamLimits

0xb154,	// (0x0000b154) control_button_pane_g

0x7438,	// (0x00007438) control_button_pane_t1

0x7446,	// (0x00007446) control_button_pane_t2

0x0001,

0xb15b,	// (0x0000b15b) control_button_pane_t

0x35f3,	// (0x000035f3) bg_button_pane_g1

0x35fb,	// (0x000035fb) bg_button_pane_g2

0x3603,	// (0x00003603) bg_button_pane_g3

0x360b,	// (0x0000360b) bg_button_pane_g4

0x3613,	// (0x00003613) bg_button_pane_g5

0x361b,	// (0x0000361b) bg_button_pane_g6

0x3623,	// (0x00003623) bg_button_pane_g7

0x362b,	// (0x0000362b) bg_button_pane_g8

0x3633,	// (0x00003633) bg_button_pane_g9

0x0008,

0xada3,	// (0x0000ada3) bg_button_pane_g

0x6553,	// (0x00006553) common_borders_pane_ParamLimits

0x6553,	// (0x00006553) common_borders_pane

0x73d8,	// (0x000073d8) eswt_control_pane_g1_copy1_ParamLimits

0x73d8,	// (0x000073d8) eswt_control_pane_g1_copy1

0x73e5,	// (0x000073e5) eswt_control_pane_g2_copy1_ParamLimits

0x73e5,	// (0x000073e5) eswt_control_pane_g2_copy1

0x73f2,	// (0x000073f2) eswt_control_pane_g3_copy1_ParamLimits

0x73f2,	// (0x000073f2) eswt_control_pane_g3_copy1

0x73ff,	// (0x000073ff) eswt_control_pane_g4_copy1_ParamLimits

0x73ff,	// (0x000073ff) eswt_control_pane_g4_copy1

0x658e,	// (0x0000658e) bg_eswt_ctrl_canvas_pane_g1

0x6553,	// (0x00006553) common_borders_pane_cp2_ParamLimits

0x6553,	// (0x00006553) common_borders_pane_cp2

0x6553,	// (0x00006553) common_borders_pane_cp3_ParamLimits

0x6553,	// (0x00006553) common_borders_pane_cp3

0x7454,	// (0x00007454) separator_horizontal_pane

0x745c,	// (0x0000745c) separator_vertical_pane

0x73d8,	// (0x000073d8) eswt_control_pane_g1_copy2_ParamLimits

0x73d8,	// (0x000073d8) eswt_control_pane_g1_copy2

0x73e5,	// (0x000073e5) eswt_control_pane_g2_copy2_ParamLimits

0x73e5,	// (0x000073e5) eswt_control_pane_g2_copy2

0x73f2,	// (0x000073f2) eswt_control_pane_g3_copy2_ParamLimits

0x73f2,	// (0x000073f2) eswt_control_pane_g3_copy2

0x73ff,	// (0x000073ff) eswt_control_pane_g4_copy2_ParamLimits

0x73ff,	// (0x000073ff) eswt_control_pane_g4_copy2

0x0024,	// (0x00000024) common_borders_pane_cp4

0x7465,	// (0x00007465) separator_horizontal_pane_g1

0x746e,	// (0x0000746e) separator_horizontal_pane_g2

0x7477,	// (0x00007477) separator_horizontal_pane_g3

0x0002,

0xb160,	// (0x0000b160) separator_horizontal_pane_g

0x73d8,	// (0x000073d8) eswt_control_pane_g1_copy3_ParamLimits

0x73d8,	// (0x000073d8) eswt_control_pane_g1_copy3

0x73e5,	// (0x000073e5) eswt_control_pane_g2_copy3_ParamLimits

0x73e5,	// (0x000073e5) eswt_control_pane_g2_copy3

0x73f2,	// (0x000073f2) eswt_control_pane_g3_copy3_ParamLimits

0x73f2,	// (0x000073f2) eswt_control_pane_g3_copy3

0x73ff,	// (0x000073ff) eswt_control_pane_g4_copy3_ParamLimits

0x73ff,	// (0x000073ff) eswt_control_pane_g4_copy3

0x0024,	// (0x00000024) common_borders_pane_cp5

0x7480,	// (0x00007480) separator_vertical_pane_g1

0x7489,	// (0x00007489) separator_vertical_pane_g2

0x7492,	// (0x00007492) separator_vertical_pane_g3

0x0002,

0xb167,	// (0x0000b167) separator_vertical_pane_g

0x73d8,	// (0x000073d8) eswt_control_pane_g1_copy4_ParamLimits

0x73d8,	// (0x000073d8) eswt_control_pane_g1_copy4

0x73e5,	// (0x000073e5) eswt_control_pane_g2_copy4_ParamLimits

0x73e5,	// (0x000073e5) eswt_control_pane_g2_copy4

0x73f2,	// (0x000073f2) eswt_control_pane_g3_copy4_ParamLimits

0x73f2,	// (0x000073f2) eswt_control_pane_g3_copy4

0x73ff,	// (0x000073ff) eswt_control_pane_g4_copy4_ParamLimits

0x73ff,	// (0x000073ff) eswt_control_pane_g4_copy4

0x749b,	// (0x0000749b) eswt_ctrl_combo_button_pane

0x74a3,	// (0x000074a3) eswt_ctrl_input_pane

0x74ab,	// (0x000074ab) popup_choice_list_window_cp70

0x74b3,	// (0x000074b3) eswt_ctrl_input_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp70

0x6553,	// (0x00006553) bg_button_pane_cp70_ParamLimits

0x6553,	// (0x00006553) bg_button_pane_cp70

0x74c1,	// (0x000074c1) eswt_ctrl_combo_button_pane_g1

0x74c9,	// (0x000074c9) wait_bar_pane_cp70

0x378d,	// (0x0000378d) bg_popup_window_pane_cp70_ParamLimits

0x378d,	// (0x0000378d) bg_popup_window_pane_cp70

0x74d1,	// (0x000074d1) popup_eswt_tasktip_window_t1

0x74e7,	// (0x000074e7) wait_bar_pane_cp71_ParamLimits

0x74e7,	// (0x000074e7) wait_bar_pane_cp71

0x74f3,	// (0x000074f3) grid_eswt_app_pane

0x1afd,	// (0x00001afd) scroll_pane_cp70

0xd983,	// (0x0000d983) cell_eswt_app_pane_ParamLimits

0xd983,	// (0x0000d983) cell_eswt_app_pane

0xd9ad,	// (0x0000d9ad) cell_eswt_app_pane_g1_ParamLimits

0xd9ad,	// (0x0000d9ad) cell_eswt_app_pane_g1

0xd9dc,	// (0x0000d9dc) cell_eswt_app_pane_g2_ParamLimits

0xd9dc,	// (0x0000d9dc) cell_eswt_app_pane_g2

0x0001,

0xf413,	// (0x0000f413) cell_eswt_app_pane_g_ParamLimits

0xf413,	// (0x0000f413) cell_eswt_app_pane_g

0xda00,	// (0x0000da00) cell_eswt_app_pane_t1_ParamLimits

0xda00,	// (0x0000da00) cell_eswt_app_pane_t1

0x75b5,	// (0x000075b5) grid_highlight_pane_cp70_ParamLimits

0x75b5,	// (0x000075b5) grid_highlight_pane_cp70

0x2440,	// (0x00002440) set_content_pane_g1

0xc259,	// (0x0000c259) status_small_volume_pane

0x75c1,	// (0x000075c1) status_small_volume_pane_g1

0x75c9,	// (0x000075c9) volume_small2_pane

0x75d2,	// (0x000075d2) volume_small2_pane_g1

0x75db,	// (0x000075db) volume_small2_pane_g2

0x75e4,	// (0x000075e4) volume_small2_pane_g3

0x75ed,	// (0x000075ed) volume_small2_pane_g4

0x75f6,	// (0x000075f6) volume_small2_pane_g5

0x75ff,	// (0x000075ff) volume_small2_pane_g6

0x7608,	// (0x00007608) volume_small2_pane_g7

0x7611,	// (0x00007611) volume_small2_pane_g8

0x761a,	// (0x0000761a) volume_small2_pane_g9

0x7623,	// (0x00007623) volume_small2_pane_g10

0x0009,

0xb173,	// (0x0000b173) volume_small2_pane_g

0x6b58,	// (0x00006b58) fep_vkb_top_text_pane_g1_ParamLimits

0xd8d8,	// (0x0000d8d8) fep_vkb_top_text_pane_t1_ParamLimits

0x6e81,	// (0x00006e81) popup_preview_fixed_window_g3_ParamLimits

0x6e81,	// (0x00006e81) popup_preview_fixed_window_g3

0xca44,	// (0x0000ca44) popup_toolbar_trans_pane

0xd287,	// (0x0000d287) aid_height_set_list_ParamLimits

0x4e01,	// (0x00004e01) aid_size_parent_ParamLimits

0x2ad0,	// (0x00002ad0) list_highlight_pane_cp2_ParamLimits

0x2440,	// (0x00002440) set_content_pane_g1_ParamLimits

0xd454,	// (0x0000d454) list_single_image_pane_ParamLimits

0xd454,	// (0x0000d454) list_single_image_pane

0xda32,	// (0x0000da32) aid_size_cell_image_ParamLimits

0xda32,	// (0x0000da32) aid_size_cell_image

0xda3f,	// (0x0000da3f) grid_single_image_pane_ParamLimits

0xda3f,	// (0x0000da3f) grid_single_image_pane

0x7645,	// (0x00007645) list_single_image_pane_g1_ParamLimits

0x7645,	// (0x00007645) list_single_image_pane_g1

0x7651,	// (0x00007651) list_single_image_pane_g2_ParamLimits

0x7651,	// (0x00007651) list_single_image_pane_g2

0x0001,

0xb188,	// (0x0000b188) list_single_image_pane_g_ParamLimits

0xb188,	// (0x0000b188) list_single_image_pane_g

0x7665,	// (0x00007665) list_single_image_pane_t1_ParamLimits

0x7665,	// (0x00007665) list_single_image_pane_t1

0xda4b,	// (0x0000da4b) cell_image_list_pane_ParamLimits

0xda4b,	// (0x0000da4b) cell_image_list_pane

0xda5f,	// (0x0000da5f) cell_image_list_pane_g1

0xda68,	// (0x0000da68) cell_image_list_pane_g2

0x0001,

0xf418,	// (0x0000f418) cell_image_list_pane_g

0x76a1,	// (0x000076a1) aid_size_cell_tb_trans_pane

0x1349,	// (0x00001349) bg_tb_trans_pane

0x76b3,	// (0x000076b3) grid_tb_trans_pane

0x35f3,	// (0x000035f3) bg_tb_trans_pane_g1

0x35fb,	// (0x000035fb) bg_tb_trans_pane_g2

0x3603,	// (0x00003603) bg_tb_trans_pane_g3

0x360b,	// (0x0000360b) bg_tb_trans_pane_g4

0x3613,	// (0x00003613) bg_tb_trans_pane_g5

0x362b,	// (0x0000362b) bg_tb_trans_pane_g6

0x3633,	// (0x00003633) bg_tb_trans_pane_g7

0x361b,	// (0x0000361b) bg_tb_trans_pane_g8

0x3623,	// (0x00003623) bg_tb_trans_pane_g9

0x0008,

0xb192,	// (0x0000b192) bg_tb_trans_pane_g

0x76c7,	// (0x000076c7) cell_toolbar_trans_pane_ParamLimits

0x76c7,	// (0x000076c7) cell_toolbar_trans_pane

0x658e,	// (0x0000658e) cell_toolbar_trans_pane_g1

0xd66e,	// (0x0000d66e) list_form2_midp_pane_t1

0xd67c,	// (0x0000d67c) list_form2_midp_pane_t2

0x0001,

0xf3e3,	// (0x0000f3e3) list_form2_midp_pane_t

0x610b,	// (0x0000610b) scroll_pane_cp51_ParamLimits

0x6311,	// (0x00006311) form2_midp_wait_pane_g1

0x631a,	// (0x0000631a) form2_midp_wait_pane_g2

0x6323,	// (0x00006323) form2_midp_wait_pane_g3

0x0002,

0xb050,	// (0x0000b050) form2_midp_wait_pane_g

0x04f9,	// (0x000004f9) list_highlight_pane_cp21_ParamLimits

0x6371,	// (0x00006371) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x6380,	// (0x00006380) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5000,	// (0x00005000) list_single_2graphic_im_pane_ParamLimits

0x5000,	// (0x00005000) list_single_2graphic_im_pane

0x76ed,	// (0x000076ed) list_single_2graphic_im_pane_g1_ParamLimits

0x76ed,	// (0x000076ed) list_single_2graphic_im_pane_g1

0x76fe,	// (0x000076fe) list_single_2graphic_im_pane_g2_ParamLimits

0x76fe,	// (0x000076fe) list_single_2graphic_im_pane_g2

0x770a,	// (0x0000770a) list_single_2graphic_im_pane_g3_ParamLimits

0x770a,	// (0x0000770a) list_single_2graphic_im_pane_g3

0x0003,

0xb1a5,	// (0x0000b1a5) list_single_2graphic_im_pane_g_ParamLimits

0xb1a5,	// (0x0000b1a5) list_single_2graphic_im_pane_g

0x772a,	// (0x0000772a) list_single_2graphic_im_pane_t1_ParamLimits

0x772a,	// (0x0000772a) list_single_2graphic_im_pane_t1

0x6e8d,	// (0x00006e8d) list_single_graphic_2heading_pane_fp_ParamLimits

0x6e8d,	// (0x00006e8d) list_single_graphic_2heading_pane_fp

0x6ed2,	// (0x00006ed2) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6ed2,	// (0x00006ed2) list_single_graphic_2heading_pane_fp_g1

0x6ea3,	// (0x00006ea3) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6ea3,	// (0x00006ea3) list_single_graphic_2heading_pane_fp_g2

0x0fc2,	// (0x00000fc2) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0fc2,	// (0x00000fc2) list_single_graphic_2heading_pane_fp_g3

0x136f,	// (0x0000136f) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x136f,	// (0x0000136f) list_single_graphic_2heading_pane_fp_g4

0x6eaf,	// (0x00006eaf) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6eaf,	// (0x00006eaf) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xb0d3,	// (0x0000b0d3) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xb0d3,	// (0x0000b0d3) list_single_graphic_2heading_pane_fp_g

0x775b,	// (0x0000775b) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x775b,	// (0x0000775b) list_single_graphic_2heading_pane_fp_t1

0x6f0a,	// (0x00006f0a) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6f0a,	// (0x00006f0a) list_single_graphic_2heading_pane_fp_t2

0x7771,	// (0x00007771) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7771,	// (0x00007771) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xb1ae,	// (0x0000b1ae) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xb1ae,	// (0x0000b1ae) list_single_graphic_2heading_pane_fp_t

0x67b8,	// (0x000067b8) fep_hwr_write_pane_g5_ParamLimits

0x67b8,	// (0x000067b8) fep_hwr_write_pane_g5

0x67c4,	// (0x000067c4) fep_hwr_write_pane_g6_ParamLimits

0x67c4,	// (0x000067c4) fep_hwr_write_pane_g6

0x73a7,	// (0x000073a7) eswt_shell_pane_ParamLimits

0x378d,	// (0x0000378d) bg_popup_window_pane_cp18_ParamLimits

0x4cc5,	// (0x00004cc5) heading_pane_cp70

0x74d1,	// (0x000074d1) popup_eswt_tasktip_window_t1_ParamLimits

0xcb0c,	// (0x0000cb0c) aid_touch_tab_arrow_left

0xcb22,	// (0x0000cb22) aid_touch_tab_arrow_right

0xb6ad,	// (0x0000b6ad) title_pane_g3_ParamLimits

0xb6ad,	// (0x0000b6ad) title_pane_g3

0x1234,	// (0x00001234) set_value_pane_g1

0xca44,	// (0x0000ca44) popup_toolbar_trans_pane_ParamLimits

0x76a1,	// (0x000076a1) aid_size_cell_tb_trans_pane_ParamLimits

0x1349,	// (0x00001349) bg_tb_trans_pane_ParamLimits

0x76b3,	// (0x000076b3) grid_tb_trans_pane_ParamLimits

0x082d,	// (0x0000082d) cont_note_pane_ParamLimits

0x082d,	// (0x0000082d) cont_note_pane

0x0b6f,	// (0x00000b6f) cont_snote2_single_text_pane_ParamLimits

0x0b6f,	// (0x00000b6f) cont_snote2_single_text_pane

0x0b6f,	// (0x00000b6f) cont_snote2_single_graphic_pane_ParamLimits

0x0b6f,	// (0x00000b6f) cont_snote2_single_graphic_pane

0x3e6c,	// (0x00003e6c) cont_note_wait_pane_ParamLimits

0x3e6c,	// (0x00003e6c) cont_note_wait_pane

0x3e6c,	// (0x00003e6c) cont_note_image_pane_ParamLimits

0x3e6c,	// (0x00003e6c) cont_note_image_pane

0x7787,	// (0x00007787) popup_note2_window_g1_ParamLimits

0x7787,	// (0x00007787) popup_note2_window_g1

0x77b8,	// (0x000077b8) popup_note2_window_t1_ParamLimits

0x77b8,	// (0x000077b8) popup_note2_window_t1

0x77fd,	// (0x000077fd) popup_note2_window_t2_ParamLimits

0x77fd,	// (0x000077fd) popup_note2_window_t2

0x7842,	// (0x00007842) popup_note2_window_t3_ParamLimits

0x7842,	// (0x00007842) popup_note2_window_t3

0x7887,	// (0x00007887) popup_note2_window_t4_ParamLimits

0x7887,	// (0x00007887) popup_note2_window_t4

0x08a5,	// (0x000008a5) popup_note2_window_t5_ParamLimits

0x08a5,	// (0x000008a5) popup_note2_window_t5

0x0004,

0xb1ba,	// (0x0000b1ba) popup_note2_window_t_ParamLimits

0xb1ba,	// (0x0000b1ba) popup_note2_window_t

0x78b6,	// (0x000078b6) popup_note2_image_window_g1_ParamLimits

0x78b6,	// (0x000078b6) popup_note2_image_window_g1

0x78c2,	// (0x000078c2) popup_note2_image_window_g2_ParamLimits

0x78c2,	// (0x000078c2) popup_note2_image_window_g2

0x0001,

0xb1c5,	// (0x0000b1c5) popup_note2_image_window_g_ParamLimits

0xb1c5,	// (0x0000b1c5) popup_note2_image_window_g

0x78d4,	// (0x000078d4) popup_note2_image_window_t1_ParamLimits

0x78d4,	// (0x000078d4) popup_note2_image_window_t1

0x78ec,	// (0x000078ec) popup_note2_image_window_t2_ParamLimits

0x78ec,	// (0x000078ec) popup_note2_image_window_t2

0x7904,	// (0x00007904) popup_note2_image_window_t3_ParamLimits

0x7904,	// (0x00007904) popup_note2_image_window_t3

0x0002,

0xb1ca,	// (0x0000b1ca) popup_note2_image_window_t_ParamLimits

0xb1ca,	// (0x0000b1ca) popup_note2_image_window_t

0x3e7a,	// (0x00003e7a) popup_note2_wait_window_g1_ParamLimits

0x3e7a,	// (0x00003e7a) popup_note2_wait_window_g1

0x7920,	// (0x00007920) popup_note2_wait_window_g2_ParamLimits

0x7920,	// (0x00007920) popup_note2_wait_window_g2

0x3e92,	// (0x00003e92) popup_note2_wait_window_g3_ParamLimits

0x3e92,	// (0x00003e92) popup_note2_wait_window_g3

0x0002,

0xb1d1,	// (0x0000b1d1) popup_note2_wait_window_g_ParamLimits

0xb1d1,	// (0x0000b1d1) popup_note2_wait_window_g

0x792c,	// (0x0000792c) popup_note2_wait_window_t1_ParamLimits

0x792c,	// (0x0000792c) popup_note2_wait_window_t1

0x794a,	// (0x0000794a) popup_note2_wait_window_t2_ParamLimits

0x794a,	// (0x0000794a) popup_note2_wait_window_t2

0x7968,	// (0x00007968) popup_note2_wait_window_t3_ParamLimits

0x7968,	// (0x00007968) popup_note2_wait_window_t3

0x797a,	// (0x0000797a) popup_note2_wait_window_t4_ParamLimits

0x797a,	// (0x0000797a) popup_note2_wait_window_t4

0x0003,

0xb1d8,	// (0x0000b1d8) popup_note2_wait_window_t_ParamLimits

0xb1d8,	// (0x0000b1d8) popup_note2_wait_window_t

0x798c,	// (0x0000798c) wait_bar2_pane_ParamLimits

0x798c,	// (0x0000798c) wait_bar2_pane

0x79a4,	// (0x000079a4) popup_snote2_single_text_window_g1_ParamLimits

0x79a4,	// (0x000079a4) popup_snote2_single_text_window_g1

0x79cc,	// (0x000079cc) popup_snote2_single_text_window_t1_ParamLimits

0x79cc,	// (0x000079cc) popup_snote2_single_text_window_t1

0x7a18,	// (0x00007a18) popup_snote2_single_text_window_t2_ParamLimits

0x7a18,	// (0x00007a18) popup_snote2_single_text_window_t2

0x7a64,	// (0x00007a64) popup_snote2_single_text_window_t3_ParamLimits

0x7a64,	// (0x00007a64) popup_snote2_single_text_window_t3

0x7aa5,	// (0x00007aa5) popup_snote2_single_text_window_t4_ParamLimits

0x7aa5,	// (0x00007aa5) popup_snote2_single_text_window_t4

0x7adb,	// (0x00007adb) popup_snote2_single_text_window_t5_ParamLimits

0x7adb,	// (0x00007adb) popup_snote2_single_text_window_t5

0x0004,

0xb1e1,	// (0x0000b1e1) popup_snote2_single_text_window_t_ParamLimits

0xb1e1,	// (0x0000b1e1) popup_snote2_single_text_window_t

0x7b06,	// (0x00007b06) popup_snote2_single_graphic_window_g1_ParamLimits

0x7b06,	// (0x00007b06) popup_snote2_single_graphic_window_g1

0x7b2e,	// (0x00007b2e) popup_snote2_single_graphic_window_g2_ParamLimits

0x7b2e,	// (0x00007b2e) popup_snote2_single_graphic_window_g2

0x0001,

0xb1ec,	// (0x0000b1ec) popup_snote2_single_graphic_window_g_ParamLimits

0xb1ec,	// (0x0000b1ec) popup_snote2_single_graphic_window_g

0x7b56,	// (0x00007b56) popup_snote2_single_graphic_window_t1_ParamLimits

0x7b56,	// (0x00007b56) popup_snote2_single_graphic_window_t1

0x7ba2,	// (0x00007ba2) popup_snote2_single_graphic_window_t2_ParamLimits

0x7ba2,	// (0x00007ba2) popup_snote2_single_graphic_window_t2

0x7a64,	// (0x00007a64) popup_snote2_single_graphic_window_t3_ParamLimits

0x7a64,	// (0x00007a64) popup_snote2_single_graphic_window_t3

0x7aa5,	// (0x00007aa5) popup_snote2_single_graphic_window_t4_ParamLimits

0x7aa5,	// (0x00007aa5) popup_snote2_single_graphic_window_t4

0x7adb,	// (0x00007adb) popup_snote2_single_graphic_window_t5_ParamLimits

0x7adb,	// (0x00007adb) popup_snote2_single_graphic_window_t5

0x0004,

0xb1f1,	// (0x0000b1f1) popup_snote2_single_graphic_window_t_ParamLimits

0xb1f1,	// (0x0000b1f1) popup_snote2_single_graphic_window_t

0x5f99,	// (0x00005f99) clock_nsta_pane_cp2_t1

0x5f99,	// (0x00005f99) clock_nsta_pane_cp2_t2

0x0001,

0xb011,	// (0x0000b011) clock_nsta_pane_cp2_t

0x1363,	// (0x00001363) form_field_data_wide_pane_g1_ParamLimits

0x0fc2,	// (0x00000fc2) form_field_data_wide_pane_g2_ParamLimits

0x0fc2,	// (0x00000fc2) form_field_data_wide_pane_g2

0x136f,	// (0x0000136f) form_field_data_wide_pane_g3_ParamLimits

0x136f,	// (0x0000136f) form_field_data_wide_pane_g3

0x0002,

0xabc4,	// (0x0000abc4) form_field_data_wide_pane_g_ParamLimits

0xabc4,	// (0x0000abc4) form_field_data_wide_pane_g

0xd5b1,	// (0x0000d5b1) grid_touch_3_pane_ParamLimits

0xd5b1,	// (0x0000d5b1) grid_touch_3_pane

0xda71,	// (0x0000da71) cell_touch_3_pane_ParamLimits

0xda71,	// (0x0000da71) cell_touch_3_pane

0x658e,	// (0x0000658e) cell_touch_3_pane_g1

0x658e,	// (0x0000658e) cell_touch_3_pane_g2

0x0001,

0xb096,	// (0x0000b096) cell_touch_3_pane_g

0x08d7,	// (0x000008d7) cont_query_data_pane

0x08df,	// (0x000008df) cont_query_data_pane_cp1

0x7c1f,	// (0x00007c1f) button_value_adjust_pane_cp7

0x7c27,	// (0x00007c27) query_popup_pane_cp3

0x1e27,	// (0x00001e27) bg_popup_sub_pane_cp22_ParamLimits

0x1e3d,	// (0x00001e3d) navi_navi_volume_pane_cp2

0x1e55,	// (0x00001e55) popup_side_volume_key_window_g2

0x1e61,	// (0x00001e61) popup_side_volume_key_window_g3

0x0002,

0xac5a,	// (0x0000ac5a) popup_side_volume_key_window_g

0x1e7b,	// (0x00001e7b) popup_side_volume_key_window_t2

0x0001,

0xac61,	// (0x0000ac61) popup_side_volume_key_window_t

0x2301,	// (0x00002301) popup_side_volume_key_window_ParamLimits

0xba7e,	// (0x0000ba7e) list_double_graphic_pane_g4_ParamLimits

0xba7e,	// (0x0000ba7e) list_double_graphic_pane_g4

0xd42e,	// (0x0000d42e) list_single_2heading_msg_pane_ParamLimits

0xd42e,	// (0x0000d42e) list_single_2heading_msg_pane

0xdaba,	// (0x0000daba) list_single_2heading_msg_pane_g1_ParamLimits

0xdaba,	// (0x0000daba) list_single_2heading_msg_pane_g1

0xdac6,	// (0x0000dac6) list_single_2heading_msg_pane_g2_ParamLimits

0xdac6,	// (0x0000dac6) list_single_2heading_msg_pane_g2

0xdad9,	// (0x0000dad9) list_single_2heading_msg_pane_g3_ParamLimits

0xdad9,	// (0x0000dad9) list_single_2heading_msg_pane_g3

0x7c62,	// (0x00007c62) list_single_2heading_msg_pane_g4_ParamLimits

0x7c62,	// (0x00007c62) list_single_2heading_msg_pane_g4

0x0003,

0xf41d,	// (0x0000f41d) list_single_2heading_msg_pane_g_ParamLimits

0xf41d,	// (0x0000f41d) list_single_2heading_msg_pane_g

0x7c7a,	// (0x00007c7a) list_single_2heading_msg_pane_t1_ParamLimits

0x7c7a,	// (0x00007c7a) list_single_2heading_msg_pane_t1

0xdae5,	// (0x0000dae5) list_single_2heading_msg_pane_t2_ParamLimits

0xdae5,	// (0x0000dae5) list_single_2heading_msg_pane_t2

0xdb50,	// (0x0000db50) list_single_2heading_msg_pane_t3_ParamLimits

0xdb50,	// (0x0000db50) list_single_2heading_msg_pane_t3

0x7d0f,	// (0x00007d0f) list_single_2heading_msg_pane_t4_ParamLimits

0x7d0f,	// (0x00007d0f) list_single_2heading_msg_pane_t4

0x0003,

0xf426,	// (0x0000f426) list_single_2heading_msg_pane_t_ParamLimits

0xf426,	// (0x0000f426) list_single_2heading_msg_pane_t

0x044d,	// (0x0000044d) title_pane_g4_ParamLimits

0x044d,	// (0x0000044d) title_pane_g4

0x186c,	// (0x0000186c) title_pane_stacon_g3_ParamLimits

0x186c,	// (0x0000186c) title_pane_stacon_g3

0x771e,	// (0x0000771e) list_single_2graphic_im_pane_g4_ParamLimits

0x771e,	// (0x0000771e) list_single_2graphic_im_pane_g4

0x4a31,	// (0x00004a31) popup_side_volume_key_window_cp

0x54b6,	// (0x000054b6) main_idle_act2_pane_t1

0x363b,	// (0x0000363b) toolbar_button_pane_g10

0xb9b7,	// (0x0000b9b7) popup_toolbar_window_cp1

0x5f8a,	// (0x00005f8a) clock_nsta_pane_cp_t1

0x5f8a,	// (0x00005f8a) clock_nsta_pane_cp_t2

0x0001,

0xb00c,	// (0x0000b00c) clock_nsta_pane_cp_t

0x1e3d,	// (0x00001e3d) navi_navi_volume_pane_cp2_ParamLimits

0x1e49,	// (0x00001e49) popup_side_volume_key_window_g1_ParamLimits

0x1e55,	// (0x00001e55) popup_side_volume_key_window_g2_ParamLimits

0x1e61,	// (0x00001e61) popup_side_volume_key_window_g3_ParamLimits

0xac5a,	// (0x0000ac5a) popup_side_volume_key_window_g_ParamLimits

0x65f8,	// (0x000065f8) fep_hwr_aid_pane

0x669f,	// (0x0000669f) bg_fep_hwr_top_pane_g4_ParamLimits

0x66bf,	// (0x000066bf) fep_hwr_top_pane_g1_ParamLimits

0x66d1,	// (0x000066d1) fep_hwr_top_pane_g2_ParamLimits

0x66e3,	// (0x000066e3) fep_hwr_top_pane_g3_ParamLimits

0xb061,	// (0x0000b061) fep_hwr_top_pane_g_ParamLimits

0x66f8,	// (0x000066f8) fep_hwr_top_text_pane_ParamLimits

0x47f4,	// (0x000047f4) aid_touch_tab_arrow_arrow_2

0x47fd,	// (0x000047fd) aid_touch_tab_arrow_left_2

0x660c,	// (0x0000660c) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6643,	// (0x00006643) fep_hwr_prediction_pane

0x6967,	// (0x00006967) fep_vkb_prediction_pane

0xd8b8,	// (0x0000d8b8) fep_vkb_side_pane_g3_ParamLimits

0xd8b8,	// (0x0000d8b8) fep_vkb_side_pane_g3

0x6a10,	// (0x00006a10) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x70c7,	// (0x000070c7) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x70d4,	// (0x000070d4) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xb10b,	// (0x0000b10b) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7d34,	// (0x00007d34) fep_hwr_prediction_pane_g1

0x7d3e,	// (0x00007d3e) fep_hwr_prediction_pane_g2

0x7d46,	// (0x00007d46) fep_hwr_prediction_pane_g3

0x7d4e,	// (0x00007d4e) fep_hwr_prediction_pane_g4

0x0003,

0xb20e,	// (0x0000b20e) fep_hwr_prediction_pane_g

0x7d34,	// (0x00007d34) fep_vkb_prediction_pane_g1

0x7d56,	// (0x00007d56) fep_vkb_prediction_pane_g2

0x7d5e,	// (0x00007d5e) fep_vkb_prediction_pane_g3

0x7d66,	// (0x00007d66) fep_vkb_prediction_pane_g4

0x0003,

0xb217,	// (0x0000b217) fep_vkb_prediction_pane_g

0x4d70,	// (0x00004d70) slider_set_pane_g3

0x4d84,	// (0x00004d84) slider_set_pane_g4

0x4d9c,	// (0x00004d9c) slider_set_pane_g5

0x4d70,	// (0x00004d70) slider_set_pane_g6

0x4db2,	// (0x00004db2) slider_set_pane_g7

0x4f5e,	// (0x00004f5e) slider_form_pane_g3

0x4f67,	// (0x00004f67) slider_form_pane_g4

0x4f6f,	// (0x00004f6f) slider_form_pane_g5

0x4f5e,	// (0x00004f5e) slider_form_pane_g6

0xd3ce,	// (0x0000d3ce) slider_form_pane_g7

0x57be,	// (0x000057be) slider_set_pane_vc_g3

0x57c7,	// (0x000057c7) slider_set_pane_vc_g4

0x57d0,	// (0x000057d0) slider_set_pane_vc_g5

0x57be,	// (0x000057be) slider_set_pane_vc_g6

0x57d9,	// (0x000057d9) slider_set_pane_vc_g7

0x5c60,	// (0x00005c60) slider_form_pane_vc_g1

0x5c69,	// (0x00005c69) slider_form_pane_vc_g2

0x5c72,	// (0x00005c72) slider_form_pane_vc_g3

0x5c60,	// (0x00005c60) slider_form_pane_vc_g4

0x5c7b,	// (0x00005c7b) slider_form_pane_vc_g5

0x0004,

0xafde,	// (0x0000afde) slider_form_pane_vc_g

0x0024,	// (0x00000024) main_idle_act3_pane

0x7d6e,	// (0x00007d6e) ai3_links_pane

0xdbbe,	// (0x0000dbbe) popup_ai3_data_window_ParamLimits

0xdbbe,	// (0x0000dbbe) popup_ai3_data_window

0x0024,	// (0x00000024) grid_ai3_links_pane

0xdbd6,	// (0x0000dbd6) cell_ai3_links_pane_ParamLimits

0xdbd6,	// (0x0000dbd6) cell_ai3_links_pane

0x7da7,	// (0x00007da7) bg_popup_sub_pane_cp11

0x7db4,	// (0x00007db4) cell_ai3_links_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp12

0x7dd9,	// (0x00007dd9) heading_ai3_data_pane

0x7de1,	// (0x00007de1) list_ai3_gene_pane

0x7ded,	// (0x00007ded) popup_ai3_data_window_g1

0x7df5,	// (0x00007df5) heading_ai3_data_pane_g1

0x7dfd,	// (0x00007dfd) heading_ai3_data_pane_t1

0x7e0b,	// (0x00007e0b) list_double_ai3_gene_pane_ParamLimits

0x7e0b,	// (0x00007e0b) list_double_ai3_gene_pane

0x7e18,	// (0x00007e18) list_single_ai3_gene_pane_ParamLimits

0x7e18,	// (0x00007e18) list_single_ai3_gene_pane

0x6553,	// (0x00006553) list_highlight_pane_cp7_ParamLimits

0x6553,	// (0x00006553) list_highlight_pane_cp7

0x7e25,	// (0x00007e25) list_single_a13_gene_pane_t1_ParamLimits

0x7e25,	// (0x00007e25) list_single_a13_gene_pane_t1

0x7e3c,	// (0x00007e3c) list_single_ai3_gene_pane_g1

0x7e45,	// (0x00007e45) list_single_ai3_gene_pane_g2

0x0001,

0xb220,	// (0x0000b220) list_single_ai3_gene_pane_g

0x7e4d,	// (0x00007e4d) list_double_ai3_gene_pane_g1_ParamLimits

0x7e4d,	// (0x00007e4d) list_double_ai3_gene_pane_g1

0x7e59,	// (0x00007e59) list_double_ai3_gene_pane_t1_ParamLimits

0x7e59,	// (0x00007e59) list_double_ai3_gene_pane_t1

0x7e75,	// (0x00007e75) list_double_ai3_gene_pane_t2_ParamLimits

0x7e75,	// (0x00007e75) list_double_ai3_gene_pane_t2

0x7e8a,	// (0x00007e8a) list_double_ai3_gene_pane_t3_ParamLimits

0x7e8a,	// (0x00007e8a) list_double_ai3_gene_pane_t3

0x0002,

0xb225,	// (0x0000b225) list_double_ai3_gene_pane_t_ParamLimits

0xb225,	// (0x0000b225) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7c38,	// (0x00007c38) aid_size_min_col_2

0xdaa4,	// (0x0000daa4) aid_size_min_msg_ParamLimits

0xdaa4,	// (0x0000daa4) aid_size_min_msg

0xd8cc,	// (0x0000d8cc) fep_vkb_top_text_pane_g2_ParamLimits

0xd8cc,	// (0x0000d8cc) fep_vkb_top_text_pane_g2

0x0001,

0xf403,	// (0x0000f403) fep_vkb_top_text_pane_g_ParamLimits

0xf403,	// (0x0000f403) fep_vkb_top_text_pane_g

0x0024,	// (0x00000024) main_hc_apps_shell_pane

0x7ea7,	// (0x00007ea7) grid_hc_apps_pane_ParamLimits

0x7ea7,	// (0x00007ea7) grid_hc_apps_pane

0x7eb6,	// (0x00007eb6) list_hc_apps_pane

0x7ebe,	// (0x00007ebe) scroll_pane_cp37_ParamLimits

0x7ebe,	// (0x00007ebe) scroll_pane_cp37

0xdbf0,	// (0x0000dbf0) cell_hc_apps_pane_ParamLimits

0xdbf0,	// (0x0000dbf0) cell_hc_apps_pane

0xdcae,	// (0x0000dcae) cell_hc_apps_pane_g1_ParamLimits

0xdcae,	// (0x0000dcae) cell_hc_apps_pane_g1

0x7fa9,	// (0x00007fa9) cell_hc_apps_pane_g2_ParamLimits

0x7fa9,	// (0x00007fa9) cell_hc_apps_pane_g2

0x7fc5,	// (0x00007fc5) cell_hc_apps_pane_g3_ParamLimits

0x7fc5,	// (0x00007fc5) cell_hc_apps_pane_g3

0x0002,

0xf42f,	// (0x0000f42f) cell_hc_apps_pane_g_ParamLimits

0xf42f,	// (0x0000f42f) cell_hc_apps_pane_g

0xdcdb,	// (0x0000dcdb) cell_hc_apps_pane_t1_ParamLimits

0xdcdb,	// (0x0000dcdb) cell_hc_apps_pane_t1

0x082d,	// (0x0000082d) grid_highlight_pane_cp10_ParamLimits

0x082d,	// (0x0000082d) grid_highlight_pane_cp10

0xdd19,	// (0x0000dd19) list_single_hc_apps_pane_ParamLimits

0xdd19,	// (0x0000dd19) list_single_hc_apps_pane

0xdd4a,	// (0x0000dd4a) list_single_hc_apps_pane_g1

0xdd63,	// (0x0000dd63) list_single_hc_apps_pane_g2

0x0001,

0xf436,	// (0x0000f436) list_single_hc_apps_pane_g

0xdd7c,	// (0x0000dd7c) list_single_hc_apps_pane_g2_copy1

0xdd98,	// (0x0000dd98) list_single_hc_apps_pane_t1

0x04f9,	// (0x000004f9) bg_set_opt_pane_cp_ParamLimits

0x0543,	// (0x00000543) setting_slider_pane_t1_ParamLimits

0x055c,	// (0x0000055c) setting_slider_pane_t2_ParamLimits

0x0576,	// (0x00000576) setting_slider_pane_t3_ParamLimits

0xaaac,	// (0x0000aaac) setting_slider_pane_t_ParamLimits

0x058e,	// (0x0000058e) slider_set_pane_ParamLimits

0x292f,	// (0x0000292f) control_pane_g5_ParamLimits

0x292f,	// (0x0000292f) control_pane_g5

0x4d57,	// (0x00004d57) slider_set_pane_g1_ParamLimits

0x4d64,	// (0x00004d64) slider_set_pane_g2_ParamLimits

0x4d70,	// (0x00004d70) slider_set_pane_g3_ParamLimits

0x4d84,	// (0x00004d84) slider_set_pane_g4_ParamLimits

0x4d9c,	// (0x00004d9c) slider_set_pane_g5_ParamLimits

0x4d70,	// (0x00004d70) slider_set_pane_g6_ParamLimits

0x4db2,	// (0x00004db2) slider_set_pane_g7_ParamLimits

0xaea1,	// (0x0000aea1) slider_set_pane_g_ParamLimits

0x23eb,	// (0x000023eb) navi_icon_text_pane_ParamLimits

0xcad5,	// (0x0000cad5) aid_fill_nsta_2_ParamLimits

0xcb0c,	// (0x0000cb0c) aid_touch_tab_arrow_left_ParamLimits

0xcb22,	// (0x0000cb22) aid_touch_tab_arrow_right_ParamLimits

0xcbbd,	// (0x0000cbbd) clock_nsta_pane_ParamLimits

0x47d6,	// (0x000047d6) navi_icon_pane_g1_ParamLimits

0x47e2,	// (0x000047e2) navi_text_pane_t1_ParamLimits

0x609c,	// (0x0000609c) navi_icon_text_pane_g1_ParamLimits

0x60a8,	// (0x000060a8) navi_icon_text_pane_t1_ParamLimits

0xdd4a,	// (0x0000dd4a) list_single_hc_apps_pane_g1_ParamLimits

0xdd63,	// (0x0000dd63) list_single_hc_apps_pane_g2_ParamLimits

0xf436,	// (0x0000f436) list_single_hc_apps_pane_g_ParamLimits

0xdd7c,	// (0x0000dd7c) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xdd98,	// (0x0000dd98) list_single_hc_apps_pane_t1_ParamLimits

0xb5b2,	// (0x0000b5b2) popup_toolbar2_fixed_window_ParamLimits

0xb5b2,	// (0x0000b5b2) popup_toolbar2_fixed_window

0xca3a,	// (0x0000ca3a) popup_toolbar2_float_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp27

0x810b,	// (0x0000810b) grid_toolbar2_float_pane

0x0024,	// (0x00000024) bg_popup_sub_pane_cp26

0x810b,	// (0x0000810b) grid_toolbar2_fixed_pane

0xddc6,	// (0x0000ddc6) cell_toolbar2_fixed_pane_ParamLimits

0xddc6,	// (0x0000ddc6) cell_toolbar2_fixed_pane

0xdde1,	// (0x0000dde1) cell_toolbar2_fixed_pane_g1

0x352d,	// (0x0000352d) toolbar2_fixed_button_pane

0x35f3,	// (0x000035f3) toolbar2_fixed_button_pane_g1

0x35fb,	// (0x000035fb) toolbar2_fixed_button_pane_g2

0x3603,	// (0x00003603) toolbar2_fixed_button_pane_g3

0x360b,	// (0x0000360b) toolbar2_fixed_button_pane_g4

0x3613,	// (0x00003613) toolbar2_fixed_button_pane_g5

0x361b,	// (0x0000361b) toolbar2_fixed_button_pane_g6

0x3623,	// (0x00003623) toolbar2_fixed_button_pane_g7

0x362b,	// (0x0000362b) toolbar2_fixed_button_pane_g8

0x3633,	// (0x00003633) toolbar2_fixed_button_pane_g9

0x0008,

0xada3,	// (0x0000ada3) toolbar2_fixed_button_pane_g

0x812d,	// (0x0000812d) cell_toolbar2_float_pane_ParamLimits

0x812d,	// (0x0000812d) cell_toolbar2_float_pane

0x8141,	// (0x00008141) cell_toolbar2_float_pane_g1

0x352d,	// (0x0000352d) toolbar2_fixed_button_pane_cp

0xd7b4,	// (0x0000d7b4) fep_vkb_accented_list_pane_ParamLimits

0xd7b4,	// (0x0000d7b4) fep_vkb_accented_list_pane

0x6d57,	// (0x00006d57) bg_popup_fep_shadow_pane_g9

0x255f,	// (0x0000255f) bg_popup_fep_shadow_pane_cp3

0x15fe,	// (0x000015fe) list_accented_list_pane

0x814a,	// (0x0000814a) list_single_accented_list_pane_ParamLimits

0x814a,	// (0x0000814a) list_single_accented_list_pane

0x255f,	// (0x0000255f) list_highlight_pane_cp10

0x815b,	// (0x0000815b) list_single_accented_list_pane_t1

0xc964,	// (0x0000c964) popup_slider_window_ParamLimits

0xc964,	// (0x0000c964) popup_slider_window

0x7c2f,	// (0x00007c2f) aid_indentation_list_msg

0xdeda,	// (0x0000deda) bg_popup_window_pane_cp19

0x827f,	// (0x0000827f) popup_slider_window_g1

0x829b,	// (0x0000829b) popup_slider_window_g2

0x82b7,	// (0x000082b7) popup_slider_window_g3

0x0005,

0xf43b,	// (0x0000f43b) popup_slider_window_g

0x8313,	// (0x00008313) popup_slider_window_t1

0x8387,	// (0x00008387) small_volume_slider_vertical_pane

0x658e,	// (0x0000658e) small_volume_slider_vertical_pane_g1

0x658e,	// (0x0000658e) small_volume_slider_vertical_pane_g2

0x83a3,	// (0x000083a3) small_volume_slider_vertical_pane_g3

0x0002,

0xb24a,	// (0x0000b24a) small_volume_slider_vertical_pane_g

0xb520,	// (0x0000b520) area_side_right_pane_ParamLimits

0xb520,	// (0x0000b520) area_side_right_pane

0xdf92,	// (0x0000df92) aid_size_side_button_ParamLimits

0xdf92,	// (0x0000df92) aid_size_side_button

0xdfab,	// (0x0000dfab) grid_sctrl_middle_pane_ParamLimits

0xdfab,	// (0x0000dfab) grid_sctrl_middle_pane

0x83df,	// (0x000083df) sctrl_sk_bottom_pane

0x83f0,	// (0x000083f0) sctrl_sk_top_pane

0x8402,	// (0x00008402) aid_touch_sctrl_top

0x082d,	// (0x0000082d) bg_sctrl_sk_pane_ParamLimits

0x082d,	// (0x0000082d) bg_sctrl_sk_pane

0x840f,	// (0x0000840f) sctrl_sk_top_pane_g1

0x841c,	// (0x0000841c) sctrl_sk_top_pane_t1

0x8402,	// (0x00008402) aid_touch_sctrl_bottom

0x082d,	// (0x0000082d) bg_sctrl_sk_pane_cp_ParamLimits

0x082d,	// (0x0000082d) bg_sctrl_sk_pane_cp

0x8437,	// (0x00008437) sctrl_sk_bottom_pane_g1

0x841c,	// (0x0000841c) sctrl_sk_bottom_pane_t1

0xdfc5,	// (0x0000dfc5) cell_sctrl_middle_pane_ParamLimits

0xdfc5,	// (0x0000dfc5) cell_sctrl_middle_pane

0xdfd6,	// (0x0000dfd6) aid_touch_sctrl_middle_ParamLimits

0xdfd6,	// (0x0000dfd6) aid_touch_sctrl_middle

0xdfe3,	// (0x0000dfe3) bg_sctrl_middle_pane_ParamLimits

0xdfe3,	// (0x0000dfe3) bg_sctrl_middle_pane

0x84fc,	// (0x000084fc) cell_sctrl_middle_pane_g1_ParamLimits

0x84fc,	// (0x000084fc) cell_sctrl_middle_pane_g1

0xdff1,	// (0x0000dff1) cell_sctrl_middle_pane_g2_ParamLimits

0xdff1,	// (0x0000dff1) cell_sctrl_middle_pane_g2

0x0001,

0xf448,	// (0x0000f448) cell_sctrl_middle_pane_g_ParamLimits

0xf448,	// (0x0000f448) cell_sctrl_middle_pane_g

0x35f3,	// (0x000035f3) bg_sctrl_middle_pane_g1

0x35fb,	// (0x000035fb) bg_sctrl_middle_pane_g2

0x3603,	// (0x00003603) bg_sctrl_middle_pane_g3

0x360b,	// (0x0000360b) bg_sctrl_middle_pane_g4

0x3613,	// (0x00003613) bg_sctrl_middle_pane_g5

0x361b,	// (0x0000361b) bg_sctrl_middle_pane_g6

0x3623,	// (0x00003623) bg_sctrl_middle_pane_g7

0x362b,	// (0x0000362b) bg_sctrl_middle_pane_g8

0x0007,

0xb25b,	// (0x0000b25b) bg_sctrl_middle_pane_g

0x3633,	// (0x00003633) bg_sctrl_middle_pane_g8_copy1

0x35f3,	// (0x000035f3) bg_sctrl_sk_pane_g1

0x35fb,	// (0x000035fb) bg_sctrl_sk_pane_g2

0x3603,	// (0x00003603) bg_sctrl_sk_pane_g3

0x0008,

0xada3,	// (0x0000ada3) bg_sctrl_sk_pane_g

0x0d2d,	// (0x00000d2d) aid_size_touch_scroll_bar

0x360b,	// (0x0000360b) bg_sctrl_sk_pane_g4

0x3613,	// (0x00003613) bg_sctrl_sk_pane_g5

0x361b,	// (0x0000361b) bg_sctrl_sk_pane_g6

0x3623,	// (0x00003623) bg_sctrl_sk_pane_g7

0x362b,	// (0x0000362b) bg_sctrl_sk_pane_g8

0x3633,	// (0x00003633) bg_sctrl_sk_pane_g9

0x2b7a,	// (0x00002b7a) popup_fep_china_hwr2_fs_candidate_window

0xc492,	// (0x0000c492) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc492,	// (0x0000c492) popup_fep_china_hwr2_fs_control_window

0x6a10,	// (0x00006a10) sctrl_sk_top_pane_g2

0x0001,

0xb251,	// (0x0000b251) sctrl_sk_top_pane_g

0xdffd,	// (0x0000dffd) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdffd,	// (0x0000dffd) aid_fep_china_hwr2_fs_cell

0xe011,	// (0x0000e011) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe011,	// (0x0000e011) bg_popup_fep_shadow_pane_cp4

0xe028,	// (0x0000e028) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe028,	// (0x0000e028) bg_popup_fep_shadow_pane_cp5

0xe03a,	// (0x0000e03a) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe03a,	// (0x0000e03a) popup_fep_china_hwr2_fs_control_bar_grid

0xe04e,	// (0x0000e04e) popup_fep_china_hwr2_fs_control_funtion_grid

0x84d0,	// (0x000084d0) aid_fep_china_hwr2_fs_candi_cell

0x0024,	// (0x00000024) bg_popup_fep_shadow_pane_cp6

0x84da,	// (0x000084da) popup_fep_china_hwr2_fs_candidate_grid

0xe056,	// (0x0000e056) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe056,	// (0x0000e056) cell_fep_china_hwr2_fs_funtion_grid

0x658e,	// (0x0000658e) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x84fc,	// (0x000084fc) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x84fc,	// (0x000084fc) cell_fep_china_hwr2_fs_funtion_grid_g1

0x850a,	// (0x0000850a) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x850a,	// (0x0000850a) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xb26c,	// (0x0000b26c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xb26c,	// (0x0000b26c) cell_fep_china_hwr2_fs_funtion_grid_g

0xe06e,	// (0x0000e06e) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe06e,	// (0x0000e06e) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe083,	// (0x0000e083) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe083,	// (0x0000e083) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xf44d,	// (0x0000f44d) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xf44d,	// (0x0000f44d) cell_fep_china_hwr2_fs_funtion_grid_t

0x8551,	// (0x00008551) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8559,	// (0x00008559) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8561,	// (0x00008561) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xb276,	// (0x0000b276) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8569,	// (0x00008569) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8569,	// (0x00008569) cell_fep_china_hwr2_fs_candidate_grid

0x8582,	// (0x00008582) popup_fep_china_hwr2_fs_candidate_grid_g20

0x858a,	// (0x0000858a) popup_fep_china_hwr2_fs_candidate_grid_g21

0x658e,	// (0x0000658e) cell_fep_china_hwr2_fs_candidate_grid_g1

0x658e,	// (0x0000658e) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xb096,	// (0x0000b096) cell_fep_china_hwr2_fs_candidate_grid_g

0x8592,	// (0x00008592) cell_fep_china_hwr2_fs_candidate_grid_t1

0x3165,	// (0x00003165) clock_nsta_pane_cp_24_ParamLimits

0x3165,	// (0x00003165) clock_nsta_pane_cp_24

0x31e3,	// (0x000031e3) indicator_nsta_pane_cp_24_ParamLimits

0x31e3,	// (0x000031e3) indicator_nsta_pane_cp_24

0x4641,	// (0x00004641) heading_pane_g1

0x0001,

0xae08,	// (0x0000ae08) heading_pane_g

0x5247,	// (0x00005247) grid_sct_catagory_button_pane

0x5277,	// (0x00005277) scroll_pane_cp5_ParamLimits

0x6117,	// (0x00006117) button_value_adjust_pane_cp5_ParamLimits

0x6117,	// (0x00006117) button_value_adjust_pane_cp5

0x6211,	// (0x00006211) form2_midp_time_pane_ParamLimits

0x85a0,	// (0x000085a0) cell_sct_catagory_button_pane_ParamLimits

0x85a0,	// (0x000085a0) cell_sct_catagory_button_pane

0x6553,	// (0x00006553) bg_button_pane_cp01_ParamLimits

0x6553,	// (0x00006553) bg_button_pane_cp01

0x658e,	// (0x0000658e) cell_sct_catagory_button_pane_g1

0xc9dd,	// (0x0000c9dd) popup_tb_extension_window

0xe09f,	// (0x0000e09f) aid_size_cell_ext_ParamLimits

0xe09f,	// (0x0000e09f) aid_size_cell_ext

0x0b6f,	// (0x00000b6f) bg_tb_trans_pane_cp1_ParamLimits

0x0b6f,	// (0x00000b6f) bg_tb_trans_pane_cp1

0xe0c5,	// (0x0000e0c5) grid_tb_ext_pane_ParamLimits

0xe0c5,	// (0x0000e0c5) grid_tb_ext_pane

0xe107,	// (0x0000e107) cell_tb_ext_pane_ParamLimits

0xe107,	// (0x0000e107) cell_tb_ext_pane

0xe12f,	// (0x0000e12f) cell_tb_ext_pane_g1_ParamLimits

0xe12f,	// (0x0000e12f) cell_tb_ext_pane_g1

0x8638,	// (0x00008638) cell_tb_ext_pane_t1

0x082d,	// (0x0000082d) list_highlight_pane_cp11_ParamLimits

0x082d,	// (0x0000082d) list_highlight_pane_cp11

0xb5c7,	// (0x0000b5c7) popup_uni_indicator_window_ParamLimits

0xb5c7,	// (0x0000b5c7) popup_uni_indicator_window

0x1349,	// (0x00001349) bg_popup_sub_pane_cp14

0x8653,	// (0x00008653) list_uniindi_pane

0x865f,	// (0x0000865f) uniindi_top_pane

0x082d,	// (0x0000082d) bg_uniindi_top_pane

0x867e,	// (0x0000867e) uniindi_top_pane_g1

0x8694,	// (0x00008694) uniindi_top_pane_g2

0x0003,

0xb27d,	// (0x0000b27d) uniindi_top_pane_g

0x86be,	// (0x000086be) uniindi_top_pane_t1

0x86e8,	// (0x000086e8) list_single_uniindi_pane_ParamLimits

0x86e8,	// (0x000086e8) list_single_uniindi_pane

0x658e,	// (0x0000658e) bg_uniindi_top_pane_g1

0x86fb,	// (0x000086fb) list_single_uniindi_pane_g1

0x870e,	// (0x0000870e) list_single_uniindi_pane_t1

0x0024,	// (0x00000024) control_bg_pane

0x8733,	// (0x00008733) bg_sctrl_sk_pane_cp1

0x873c,	// (0x0000873c) bg_sctrl_sk_pane_cp2

0x8745,	// (0x00008745) control_bg_pane_g1

0x874e,	// (0x0000874e) control_bg_pane_g2

0x0001,

0xb286,	// (0x0000b286) control_bg_pane_g

0x5f2e,	// (0x00005f2e) cell_indicator_nsta_pane_g1_ParamLimits

0xd5de,	// (0x0000d5de) cell_indicator_nsta_pane_g2_ParamLimits

0xf3ce,	// (0x0000f3ce) cell_indicator_nsta_pane_g_ParamLimits

0x6295,	// (0x00006295) form2_midp_time_pane_t1_ParamLimits

0x65ea,	// (0x000065ea) main_idle_act4_pane_ParamLimits

0x65ea,	// (0x000065ea) main_idle_act4_pane

0xc9dd,	// (0x0000c9dd) popup_tb_extension_window_ParamLimits

0xe0ed,	// (0x0000e0ed) tb_ext_find_pane_ParamLimits

0xe0ed,	// (0x0000e0ed) tb_ext_find_pane

0x8757,	// (0x00008757) ai_gene_pane_1_cp1

0x269e,	// (0x0000269e) ai_gene_pane_2_cp1

0x875f,	// (0x0000875f) list_single_idle_plugin_calendar_pane

0x8768,	// (0x00008768) list_single_idle_plugin_notification_pane

0x8771,	// (0x00008771) list_single_idle_plugin_player_pane

0xe14c,	// (0x0000e14c) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe14c,	// (0x0000e14c) list_single_idle_plugin_shortcut_pane

0xe174,	// (0x0000e174) main_idle_act4_pane_t1

0xe18a,	// (0x0000e18a) main_idle_act4_pane_t2

0x0001,

0xf452,	// (0x0000f452) main_idle_act4_pane_t

0xe1a2,	// (0x0000e1a2) middle_sk_idle_act4_pane_ParamLimits

0xe1a2,	// (0x0000e1a2) middle_sk_idle_act4_pane

0xe1be,	// (0x0000e1be) popup_clock_digital_analogue_window_cp2

0xe1e5,	// (0x0000e1e5) shortcut_wheel_idle_act4_pane_ParamLimits

0xe1e5,	// (0x0000e1e5) shortcut_wheel_idle_act4_pane

0x658e,	// (0x0000658e) shortcut_wheel_idle_act4_pane_g1

0x658e,	// (0x0000658e) shortcut_wheel_idle_act4_pane_g2

0x658e,	// (0x0000658e) shortcut_wheel_idle_act4_pane_g3

0x658e,	// (0x0000658e) shortcut_wheel_idle_act4_pane_g4

0x658e,	// (0x0000658e) shortcut_wheel_idle_act4_pane_g5

0x8804,	// (0x00008804) shortcut_wheel_idle_act4_pane_g6

0x880c,	// (0x0000880c) shortcut_wheel_idle_act4_pane_g7

0x8814,	// (0x00008814) shortcut_wheel_idle_act4_pane_g8

0x881c,	// (0x0000881c) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xb290,	// (0x0000b290) shortcut_wheel_idle_act4_pane_g

0x669f,	// (0x0000669f) middle_sk_idle_act4_pane_g1_ParamLimits

0x669f,	// (0x0000669f) middle_sk_idle_act4_pane_g1

0xe262,	// (0x0000e262) middle_sk_idle_act4_pane_g2_ParamLimits

0xe262,	// (0x0000e262) middle_sk_idle_act4_pane_g2

0x0001,

0xf467,	// (0x0000f467) middle_sk_idle_act4_pane_g_ParamLimits

0xf467,	// (0x0000f467) middle_sk_idle_act4_pane_g

0xe27a,	// (0x0000e27a) middle_sk_idle_act4_pane_t1_ParamLimits

0xe27a,	// (0x0000e27a) middle_sk_idle_act4_pane_t1

0xe2a9,	// (0x0000e2a9) grid_ai_shortcut_pane_ParamLimits

0xe2a9,	// (0x0000e2a9) grid_ai_shortcut_pane

0xe2c6,	// (0x0000e2c6) list_highlight_pane_cp16_ParamLimits

0xe2c6,	// (0x0000e2c6) list_highlight_pane_cp16

0xe2d3,	// (0x0000e2d3) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe2d3,	// (0x0000e2d3) list_single_idle_plugin_shortcut_pane_g1

0xe2df,	// (0x0000e2df) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe2df,	// (0x0000e2df) list_single_idle_plugin_shortcut_pane_g2

0xe2fb,	// (0x0000e2fb) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe2fb,	// (0x0000e2fb) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xf46c,	// (0x0000f46c) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xf46c,	// (0x0000f46c) list_single_idle_plugin_shortcut_pane_g

0xe310,	// (0x0000e310) cell_ai_shortcut_pane_ParamLimits

0xe310,	// (0x0000e310) cell_ai_shortcut_pane

0xe326,	// (0x0000e326) cell_ai_shortcut_pane_g1_ParamLimits

0xe326,	// (0x0000e326) cell_ai_shortcut_pane_g1

0x8757,	// (0x00008757) ai_gene_pane_1_cp2

0x8949,	// (0x00008949) ai_gene_pane_2_cp2

0x8951,	// (0x00008951) list_highlight_pane_cp15

0x895a,	// (0x0000895a) list_single_idle_plugin_calendar_pane_g1

0x8951,	// (0x00008951) list_highlight_pane_cp17

0x8962,	// (0x00008962) list_single_idle_plugin_calendar_pane_g1_copy1

0x896a,	// (0x0000896a) list_single_idle_plugin_player_pane_g1

0x5556,	// (0x00005556) list_single_idle_plugin_player_pane_g2

0x0001,

0xb2bf,	// (0x0000b2bf) list_single_idle_plugin_player_pane_g

0x8972,	// (0x00008972) list_single_idle_plugin_player_pane_t1

0x8980,	// (0x00008980) list_single_idle_plugin_player_pane_t2

0x898e,	// (0x0000898e) list_single_idle_plugin_player_pane_t3

0x899c,	// (0x0000899c) list_single_idle_plugin_player_pane_t4

0x0003,

0xb2c4,	// (0x0000b2c4) list_single_idle_plugin_player_pane_t

0x89aa,	// (0x000089aa) wait_bar_pane_cp15

0x89b2,	// (0x000089b2) grid_ai_notification_pane

0x5556,	// (0x00005556) list_single_idle_plugin_notification_pane_g1

0xe348,	// (0x0000e348) cell_ai_notification_pane_ParamLimits

0xe348,	// (0x0000e348) cell_ai_notification_pane

0x89c8,	// (0x000089c8) cell_ai_notification_pane_g1

0x89d0,	// (0x000089d0) cell_ai_notification_pane_t1

0xe355,	// (0x0000e355) tb_ext_find_button_pane

0xe35d,	// (0x0000e35d) tb_ext_find_pane_g1

0xe365,	// (0x0000e365) tb_ext_find_pane_t1

0x1cc1,	// (0x00001cc1) tb_ext_find_button_pane_g1

0x89fc,	// (0x000089fc) tb_ext_find_button_pane_g2

0x0001,

0xb2cd,	// (0x0000b2cd) tb_ext_find_button_pane_g

0xe174,	// (0x0000e174) main_idle_act4_pane_t1_ParamLimits

0xe18a,	// (0x0000e18a) main_idle_act4_pane_t2_ParamLimits

0xf452,	// (0x0000f452) main_idle_act4_pane_t_ParamLimits

0xe1be,	// (0x0000e1be) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe1d5,	// (0x0000e1d5) sat_plugin_idle_act4_pane_ParamLimits

0xe1d5,	// (0x0000e1d5) sat_plugin_idle_act4_pane

0xe373,	// (0x0000e373) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe373,	// (0x0000e373) sat_plugin_idle_act4_pane_t1

0xe38b,	// (0x0000e38b) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe38b,	// (0x0000e38b) sat_plugin_idle_act4_pane_t2

0xe3a3,	// (0x0000e3a3) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe3a3,	// (0x0000e3a3) sat_plugin_idle_act4_pane_t3

0xe3bb,	// (0x0000e3bb) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe3bb,	// (0x0000e3bb) sat_plugin_idle_act4_pane_t4

0x0003,

0xf473,	// (0x0000f473) sat_plugin_idle_act4_pane_t_ParamLimits

0xf473,	// (0x0000f473) sat_plugin_idle_act4_pane_t

0x029d,	// (0x0000029d) popup_battery_window_ParamLimits

0x029d,	// (0x0000029d) popup_battery_window

0x082d,	// (0x0000082d) bg_popup_sub_pane_cp25_ParamLimits

0x082d,	// (0x0000082d) bg_popup_sub_pane_cp25

0x8a51,	// (0x00008a51) popup_battery_window_g1_ParamLimits

0x8a51,	// (0x00008a51) popup_battery_window_g1

0x8a5d,	// (0x00008a5d) popup_battery_window_t1_ParamLimits

0x8a5d,	// (0x00008a5d) popup_battery_window_t1

0x8a6f,	// (0x00008a6f) popup_battery_window_t2_ParamLimits

0x8a6f,	// (0x00008a6f) popup_battery_window_t2

0x0001,

0xb2db,	// (0x0000b2db) popup_battery_window_t_ParamLimits

0xb2db,	// (0x0000b2db) popup_battery_window_t

0xc127,	// (0x0000c127) midp_canvas_pane_ParamLimits

0xc186,	// (0x0000c186) midp_keypad_pane_ParamLimits

0xc186,	// (0x0000c186) midp_keypad_pane

0x2ad0,	// (0x00002ad0) main_midp_pane_ParamLimits

0x5fa8,	// (0x00005fa8) signal_pane_g2_cp_ParamLimits

0xe3d3,	// (0x0000e3d3) aid_size_cell_midp_keypad_ParamLimits

0xe3d3,	// (0x0000e3d3) aid_size_cell_midp_keypad

0xe3f1,	// (0x0000e3f1) midp_keyp_game_grid_pane_ParamLimits

0xe3f1,	// (0x0000e3f1) midp_keyp_game_grid_pane

0xe418,	// (0x0000e418) midp_keyp_rocker_pane_ParamLimits

0xe418,	// (0x0000e418) midp_keyp_rocker_pane

0xe469,	// (0x0000e469) midp_keyp_sk_left_pane_ParamLimits

0xe469,	// (0x0000e469) midp_keyp_sk_left_pane

0xe4bd,	// (0x0000e4bd) midp_keyp_sk_right_pane_ParamLimits

0xe4bd,	// (0x0000e4bd) midp_keyp_sk_right_pane

0x0024,	// (0x00000024) bg_button_pane_cp03

0xe511,	// (0x0000e511) midp_keyp_sk_left_pane_g1

0x0024,	// (0x00000024) bg_button_pane_cp04

0xe511,	// (0x0000e511) midp_keyp_sk_right_pane_g1

0x658e,	// (0x0000658e) midp_keyp_rocker_pane_g1

0xe51a,	// (0x0000e51a) keyp_game_cell_pane_ParamLimits

0xe51a,	// (0x0000e51a) keyp_game_cell_pane

0x0024,	// (0x00000024) bg_button_pane_cp02

0xe53e,	// (0x0000e53e) keyp_game_cell_pane_g1

0xb562,	// (0x0000b562) popup_fep_vkb2_window_ParamLimits

0xb562,	// (0x0000b562) popup_fep_vkb2_window

0xe547,	// (0x0000e547) aid_size_cell_vkb2_ParamLimits

0xe547,	// (0x0000e547) aid_size_cell_vkb2

0xe57d,	// (0x0000e57d) popup_fep_vkb2_window_g1_ParamLimits

0xe57d,	// (0x0000e57d) popup_fep_vkb2_window_g1

0xe5cd,	// (0x0000e5cd) vkb2_area_bottom_pane_ParamLimits

0xe5cd,	// (0x0000e5cd) vkb2_area_bottom_pane

0xe621,	// (0x0000e621) vkb2_area_keypad_pane_ParamLimits

0xe621,	// (0x0000e621) vkb2_area_keypad_pane

0xe669,	// (0x0000e669) vkb2_area_top_pane_ParamLimits

0xe669,	// (0x0000e669) vkb2_area_top_pane

0xe6ef,	// (0x0000e6ef) vkb2_top_entry_pane_ParamLimits

0xe6ef,	// (0x0000e6ef) vkb2_top_entry_pane

0xe71c,	// (0x0000e71c) vkb2_top_grid_left_pane_ParamLimits

0xe71c,	// (0x0000e71c) vkb2_top_grid_left_pane

0xe73c,	// (0x0000e73c) vkb2_top_grid_right_pane_ParamLimits

0xe73c,	// (0x0000e73c) vkb2_top_grid_right_pane

0x8df0,	// (0x00008df0) vkb2_cell_keypad_pane_ParamLimits

0x8df0,	// (0x00008df0) vkb2_cell_keypad_pane

0xe782,	// (0x0000e782) vkb2_area_bottom_grid_pane_ParamLimits

0xe782,	// (0x0000e782) vkb2_area_bottom_grid_pane

0xe7ac,	// (0x0000e7ac) vkb2_area_bottom_pane_g1_ParamLimits

0xe7ac,	// (0x0000e7ac) vkb2_area_bottom_pane_g1

0xe7d2,	// (0x0000e7d2) vkb2_area_bottom_pane_g2_ParamLimits

0xe7d2,	// (0x0000e7d2) vkb2_area_bottom_pane_g2

0xe803,	// (0x0000e803) vkb2_area_bottom_pane_g3_ParamLimits

0xe803,	// (0x0000e803) vkb2_area_bottom_pane_g3

0x0002,

0xf47c,	// (0x0000f47c) vkb2_area_bottom_pane_g_ParamLimits

0xf47c,	// (0x0000f47c) vkb2_area_bottom_pane_g

0x8f9a,	// (0x00008f9a) vkb2_top_cell_left_pane_ParamLimits

0x8f9a,	// (0x00008f9a) vkb2_top_cell_left_pane

0xe86d,	// (0x0000e86d) vkb2_top_entry_pane_g1_ParamLimits

0xe86d,	// (0x0000e86d) vkb2_top_entry_pane_g1

0xe87b,	// (0x0000e87b) vkb2_top_entry_pane_t1_ParamLimits

0xe87b,	// (0x0000e87b) vkb2_top_entry_pane_t1

0x9002,	// (0x00009002) vkb2_top_entry_pane_t2_ParamLimits

0x9002,	// (0x00009002) vkb2_top_entry_pane_t2

0x9034,	// (0x00009034) vkb2_top_entry_pane_t3_ParamLimits

0x9034,	// (0x00009034) vkb2_top_entry_pane_t3

0x0002,

0xf483,	// (0x0000f483) vkb2_top_entry_pane_t_ParamLimits

0xf483,	// (0x0000f483) vkb2_top_entry_pane_t

0xe8b4,	// (0x0000e8b4) vkb2_top_grid_right_pane_g1_ParamLimits

0xe8b4,	// (0x0000e8b4) vkb2_top_grid_right_pane_g1

0x909b,	// (0x0000909b) vkb2_top_grid_right_pane_g2_ParamLimits

0x909b,	// (0x0000909b) vkb2_top_grid_right_pane_g2

0x90b3,	// (0x000090b3) vkb2_top_grid_right_pane_g3_ParamLimits

0x90b3,	// (0x000090b3) vkb2_top_grid_right_pane_g3

0xe8ca,	// (0x0000e8ca) vkb2_top_grid_right_pane_g4_ParamLimits

0xe8ca,	// (0x0000e8ca) vkb2_top_grid_right_pane_g4

0x0003,

0xf48a,	// (0x0000f48a) vkb2_top_grid_right_pane_g_ParamLimits

0xf48a,	// (0x0000f48a) vkb2_top_grid_right_pane_g

0x90e1,	// (0x000090e1) vkb2_top_cell_left_pane_g1

0x90f8,	// (0x000090f8) vkb2_cell_keypad_pane_g1_ParamLimits

0x90f8,	// (0x000090f8) vkb2_cell_keypad_pane_g1

0x9106,	// (0x00009106) vkb2_cell_keypad_pane_t1_ParamLimits

0x9106,	// (0x00009106) vkb2_cell_keypad_pane_t1

0x911d,	// (0x0000911d) vkb2_cell_bottom_grid_pane_ParamLimits

0x911d,	// (0x0000911d) vkb2_cell_bottom_grid_pane

0x9156,	// (0x00009156) vkb2_cell_bottom_grid_pane_g1

0xe206,	// (0x0000e206) aid_call2_pane_cp02

0xe20e,	// (0x0000e20e) aid_call_pane_cp02

0xe216,	// (0x0000e216) clock_digital_number_pane_cp10

0xe21e,	// (0x0000e21e) clock_digital_number_pane_cp11

0xe226,	// (0x0000e226) clock_digital_number_pane_cp12

0xe22e,	// (0x0000e22e) clock_digital_number_pane_cp13

0xe236,	// (0x0000e236) clock_digital_separator_pane_cp10

0x1cc1,	// (0x00001cc1) popup_clock_digital_analogue_window_cp2_g1

0x1cc1,	// (0x00001cc1) popup_clock_digital_analogue_window_cp2_g2

0xe23e,	// (0x0000e23e) popup_clock_digital_analogue_window_cp2_g3

0x1cc1,	// (0x00001cc1) popup_clock_digital_analogue_window_cp2_g4

0xe23e,	// (0x0000e23e) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xf457,	// (0x0000f457) popup_clock_digital_analogue_window_cp2_g

0xe246,	// (0x0000e246) popup_clock_digital_analogue_window_cp2_t1

0xe254,	// (0x0000e254) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xf462,	// (0x0000f462) popup_clock_digital_analogue_window_cp2_t

0x658e,	// (0x0000658e) clock_digital_number_pane_cp10_g1

0x658e,	// (0x0000658e) clock_digital_number_pane_cp10_g2

0x0001,

0xb096,	// (0x0000b096) clock_digital_number_pane_cp10_g

0x658e,	// (0x0000658e) clock_digital_separator_pane_cp10_g1

0x658e,	// (0x0000658e) clock_digital_separator_pane_cp10_g2

0x0001,

0xb096,	// (0x0000b096) clock_digital_separator_pane_cp10_g

0x86a0,	// (0x000086a0) uniindi_top_pane_g3

0x86b1,	// (0x000086b1) uniindi_top_pane_g4

0x8e7b,	// (0x00008e7b) vkb2_row_keypad_pane_ParamLimits

0x8e7b,	// (0x00008e7b) vkb2_row_keypad_pane

0x9176,	// (0x00009176) vkb2_cell_t_keypad_pane_ParamLimits

0x9176,	// (0x00009176) vkb2_cell_t_keypad_pane

0x9186,	// (0x00009186) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x9186,	// (0x00009186) vkb2_cell_t_keypad_pane_cp08

0x9199,	// (0x00009199) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x9199,	// (0x00009199) vkb2_cell_t_keypad_pane_cp09

0x91ad,	// (0x000091ad) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x91ad,	// (0x000091ad) vkb2_cell_t_keypad_pane_cp01

0x91be,	// (0x000091be) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x91be,	// (0x000091be) vkb2_cell_t_keypad_pane_cp02

0x91cf,	// (0x000091cf) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x91cf,	// (0x000091cf) vkb2_cell_t_keypad_pane_cp03

0x91e0,	// (0x000091e0) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x91e0,	// (0x000091e0) vkb2_cell_t_keypad_pane_cp04

0x91f1,	// (0x000091f1) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x91f1,	// (0x000091f1) vkb2_cell_t_keypad_pane_cp05

0x9202,	// (0x00009202) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x9202,	// (0x00009202) vkb2_cell_t_keypad_pane_cp06

0x9213,	// (0x00009213) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x9213,	// (0x00009213) vkb2_cell_t_keypad_pane_cp07

0x9224,	// (0x00009224) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9224,	// (0x00009224) vkb2_cell_t_keypad_pane_cp10

0x6a10,	// (0x00006a10) vkb2_cell_t_keypad_pane_g1

0x9239,	// (0x00009239) vkb2_cell_t_keypad_pane_t1

0x0024,	// (0x00000024) popup_grid_graphic2_window

0xe8e0,	// (0x0000e8e0) aid_size_cell_graphic2_ParamLimits

0xe8e0,	// (0x0000e8e0) aid_size_cell_graphic2

0xe91e,	// (0x0000e91e) bg_popup_window_pane_cp21_ParamLimits

0xe91e,	// (0x0000e91e) bg_popup_window_pane_cp21

0xe92c,	// (0x0000e92c) graphic2_pages_pane_ParamLimits

0xe92c,	// (0x0000e92c) graphic2_pages_pane

0xe982,	// (0x0000e982) grid_graphic2_control_pane_ParamLimits

0xe982,	// (0x0000e982) grid_graphic2_control_pane

0xe9ca,	// (0x0000e9ca) grid_graphic2_pane_ParamLimits

0xe9ca,	// (0x0000e9ca) grid_graphic2_pane

0xea51,	// (0x0000ea51) cell_graphic2_pane

0x0024,	// (0x00000024) main_comp_mode_pane

0x7de1,	// (0x00007de1) list_ai3_gene_pane_ParamLimits

0xdeda,	// (0x0000deda) bg_popup_window_pane_cp19_ParamLimits

0x8221,	// (0x00008221) bg_touch_area_indi_pane_ParamLimits

0x8221,	// (0x00008221) bg_touch_area_indi_pane

0x8237,	// (0x00008237) bg_touch_area_indi_pane_cp01_ParamLimits

0x8237,	// (0x00008237) bg_touch_area_indi_pane_cp01

0x824d,	// (0x0000824d) bg_touch_area_indi_pane_cp02_ParamLimits

0x824d,	// (0x0000824d) bg_touch_area_indi_pane_cp02

0x8265,	// (0x00008265) bg_touch_area_indi_pane_cp03_ParamLimits

0x8265,	// (0x00008265) bg_touch_area_indi_pane_cp03

0x827f,	// (0x0000827f) popup_slider_window_g1_ParamLimits

0x829b,	// (0x0000829b) popup_slider_window_g2_ParamLimits

0x82b7,	// (0x000082b7) popup_slider_window_g3_ParamLimits

0xf43b,	// (0x0000f43b) popup_slider_window_g_ParamLimits

0x8313,	// (0x00008313) popup_slider_window_t1_ParamLimits

0x8387,	// (0x00008387) small_volume_slider_vertical_pane_ParamLimits

0xea51,	// (0x0000ea51) cell_graphic2_pane_ParamLimits

0xeaae,	// (0x0000eaae) bg_button_pane_cp10_ParamLimits

0xeaae,	// (0x0000eaae) bg_button_pane_cp10

0xeac1,	// (0x0000eac1) bg_button_pane_cp11_ParamLimits

0xeac1,	// (0x0000eac1) bg_button_pane_cp11

0xead4,	// (0x0000ead4) graphic2_pages_pane_g1_ParamLimits

0xead4,	// (0x0000ead4) graphic2_pages_pane_g1

0xeaef,	// (0x0000eaef) graphic2_pages_pane_g2_ParamLimits

0xeaef,	// (0x0000eaef) graphic2_pages_pane_g2

0x0001,

0xf498,	// (0x0000f498) graphic2_pages_pane_g_ParamLimits

0xf498,	// (0x0000f498) graphic2_pages_pane_g

0xeb07,	// (0x0000eb07) graphic2_pages_pane_t1_ParamLimits

0xeb07,	// (0x0000eb07) graphic2_pages_pane_t1

0xeb1f,	// (0x0000eb1f) cell_graphic2_control_pane_ParamLimits

0xeb1f,	// (0x0000eb1f) cell_graphic2_control_pane

0xeb51,	// (0x0000eb51) cell_graphic2_pane_g1_ParamLimits

0xeb51,	// (0x0000eb51) cell_graphic2_pane_g1

0x683a,	// (0x0000683a) cell_graphic2_pane_g2_ParamLimits

0x683a,	// (0x0000683a) cell_graphic2_pane_g2

0xeb5e,	// (0x0000eb5e) cell_graphic2_pane_g3_ParamLimits

0xeb5e,	// (0x0000eb5e) cell_graphic2_pane_g3

0x6847,	// (0x00006847) cell_graphic2_pane_g4_ParamLimits

0x6847,	// (0x00006847) cell_graphic2_pane_g4

0xeb6b,	// (0x0000eb6b) cell_graphic2_pane_g5_ParamLimits

0xeb6b,	// (0x0000eb6b) cell_graphic2_pane_g5

0x0004,

0xf49d,	// (0x0000f49d) cell_graphic2_pane_g_ParamLimits

0xf49d,	// (0x0000f49d) cell_graphic2_pane_g

0xeb8b,	// (0x0000eb8b) cell_graphic2_pane_t1_ParamLimits

0xeb8b,	// (0x0000eb8b) cell_graphic2_pane_t1

0x4635,	// (0x00004635) grid_highlight_pane_cp11_ParamLimits

0x4635,	// (0x00004635) grid_highlight_pane_cp11

0x082d,	// (0x0000082d) bg_button_pane_cp05

0xebbf,	// (0x0000ebbf) cell_graphic2_control_pane_g1

0x658e,	// (0x0000658e) bg_touch_area_indi_pane_g1

0x9507,	// (0x00009507) aid_cmod_rocker_key_size

0x9511,	// (0x00009511) aid_cmode_itu_key_size

0x951b,	// (0x0000951b) main_cmode_video_pane

0x9525,	// (0x00009525) main_comp_mode_itu_pane

0x9531,	// (0x00009531) main_comp_mode_rocker_pane

0x953d,	// (0x0000953d) cell_cmode_rocker_pane_ParamLimits

0x953d,	// (0x0000953d) cell_cmode_rocker_pane

0x954f,	// (0x0000954f) cell_cmode_itu_pane_ParamLimits

0x954f,	// (0x0000954f) cell_cmode_itu_pane

0x1349,	// (0x00001349) bg_button_pane_cp06_ParamLimits

0x1349,	// (0x00001349) bg_button_pane_cp06

0x6a10,	// (0x00006a10) cell_cmode_rocker_pane_g1_ParamLimits

0x6a10,	// (0x00006a10) cell_cmode_rocker_pane_g1

0x84fc,	// (0x000084fc) cell_cmode_rocker_pane_g2_ParamLimits

0x84fc,	// (0x000084fc) cell_cmode_rocker_pane_g2

0x0001,

0xb311,	// (0x0000b311) cell_cmode_rocker_pane_g_ParamLimits

0xb311,	// (0x0000b311) cell_cmode_rocker_pane_g

0x0024,	// (0x00000024) bg_button_pane_cp07

0x9564,	// (0x00009564) cell_cmode_itu_pane_g1

0x956d,	// (0x0000956d) cell_cmode_itu_pane_t1

0x957b,	// (0x0000957b) cell_cmode_itu_pane_t2

0x0001,

0xb316,	// (0x0000b316) cell_cmode_itu_pane_t

0x8723,	// (0x00008723) aid_touch_ctrl_left

0x872b,	// (0x0000872b) aid_touch_ctrl_right

0x0024,	// (0x00000024) compa_mode_pane

0xebe3,	// (0x0000ebe3) aid_cmod_rocker_key_size_cp

0xebed,	// (0x0000ebed) aid_cmode_itu_key_size_cp

0x959d,	// (0x0000959d) compa_mode_pane_g1

0x95a5,	// (0x000095a5) compa_mode_pane_g2

0x95ad,	// (0x000095ad) compa_mode_pane_g3

0x0002,

0xb31b,	// (0x0000b31b) compa_mode_pane_g

0xebf7,	// (0x0000ebf7) main_comp_mode_itu_pane_cp

0xebff,	// (0x0000ebff) main_comp_mode_rocker_pane_cp

0xec07,	// (0x0000ec07) cell_cmode_itu_pane_cp_ParamLimits

0xec07,	// (0x0000ec07) cell_cmode_itu_pane_cp

0xec1c,	// (0x0000ec1c) cell_cmode_rocker_pane_cp_ParamLimits

0xec1c,	// (0x0000ec1c) cell_cmode_rocker_pane_cp

0x1349,	// (0x00001349) bg_button_pane_cp06_cp_ParamLimits

0x1349,	// (0x00001349) bg_button_pane_cp06_cp

0x6a10,	// (0x00006a10) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x6a10,	// (0x00006a10) cell_cmode_rocker_pane_g1_cp

0x658e,	// (0x0000658e) cell_cmode_rocker_pane_g2_cp

0x0024,	// (0x00000024) bg_button_pane_cp07_cp

0xec2e,	// (0x0000ec2e) cell_cmode_itu_pane_g1_cp

0xec37,	// (0x0000ec37) cell_cmode_itu_pane_t1_cp

0xec37,	// (0x0000ec37) cell_cmode_itu_pane_t2_cp

0xd3c4,	// (0x0000d3c4) settings_code_pane_cp2

0x04f9,	// (0x000004f9) bg_popup_window_pane_cp3_ParamLimits

0x09fb,	// (0x000009fb) heading_pane_cp3_ParamLimits

0x0a07,	// (0x00000a07) listscroll_popup_graphic_pane_ParamLimits

0x65f8,	// (0x000065f8) fep_hwr_aid_pane_ParamLimits

0x8402,	// (0x00008402) aid_touch_sctrl_top_ParamLimits

0x840f,	// (0x0000840f) sctrl_sk_top_pane_g1_ParamLimits

0x6a10,	// (0x00006a10) sctrl_sk_top_pane_g2_ParamLimits

0xb251,	// (0x0000b251) sctrl_sk_top_pane_g_ParamLimits

0x841c,	// (0x0000841c) sctrl_sk_top_pane_t1_ParamLimits

0x8402,	// (0x00008402) aid_touch_sctrl_bottom_ParamLimits

0x841c,	// (0x0000841c) sctrl_sk_bottom_pane_t1_ParamLimits

0x866c,	// (0x0000866c) aid_area_touch_clock

0xe6b1,	// (0x0000e6b1) aid_vkb2_area_top_pane_cell_ParamLimits

0xe6b1,	// (0x0000e6b1) aid_vkb2_area_top_pane_cell

0xe75c,	// (0x0000e75c) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe75c,	// (0x0000e75c) aid_vkb2_area_bottom_pane_cell

0x8fba,	// (0x00008fba) popup_char_count_window

0x9603,	// (0x00009603) popup_char_count_window_g1

0x960c,	// (0x0000960c) popup_char_count_window_g2

0x9615,	// (0x00009615) popup_char_count_window_g3

0x0002,

0xb322,	// (0x0000b322) popup_char_count_window_g

0x961e,	// (0x0000961e) popup_char_count_window_t1

0x8c18,	// (0x00008c18) popup_fep_char_preview_window_ParamLimits

0x8c18,	// (0x00008c18) popup_fep_char_preview_window

0xe6d1,	// (0x0000e6d1) vkb2_top_candi_pane_ParamLimits

0xe6d1,	// (0x0000e6d1) vkb2_top_candi_pane

0xec45,	// (0x0000ec45) cell_vkb2_top_candi_pane_ParamLimits

0xec45,	// (0x0000ec45) cell_vkb2_top_candi_pane

0x3e6c,	// (0x00003e6c) bg_popup_fep_char_preview_window_ParamLimits

0x3e6c,	// (0x00003e6c) bg_popup_fep_char_preview_window

0x9679,	// (0x00009679) popup_fep_char_preview_window_t1_ParamLimits

0x9679,	// (0x00009679) popup_fep_char_preview_window_t1

0x96b3,	// (0x000096b3) bg_popup_fep_char_preview_window_g1

0x96bb,	// (0x000096bb) bg_popup_fep_char_preview_window_g2

0x96c3,	// (0x000096c3) bg_popup_fep_char_preview_window_g3

0x96cb,	// (0x000096cb) bg_popup_fep_char_preview_window_g4

0x96d3,	// (0x000096d3) bg_popup_fep_char_preview_window_g5

0x96db,	// (0x000096db) bg_popup_fep_char_preview_window_g6

0x96e3,	// (0x000096e3) bg_popup_fep_char_preview_window_g7

0x96eb,	// (0x000096eb) bg_popup_fep_char_preview_window_g8

0x96f3,	// (0x000096f3) bg_popup_fep_char_preview_window_g9

0x0008,

0xb329,	// (0x0000b329) bg_popup_fep_char_preview_window_g

0x6a10,	// (0x00006a10) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6a10,	// (0x00006a10) cell_vkb2_top_candi_pane_g1

0x6d7b,	// (0x00006d7b) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6d7b,	// (0x00006d7b) cell_vkb2_top_candi_pane_g2

0x6d9c,	// (0x00006d9c) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6d9c,	// (0x00006d9c) cell_vkb2_top_candi_pane_g3

0x96fb,	// (0x000096fb) cell_vkb2_top_candi_pane_g4_ParamLimits

0x96fb,	// (0x000096fb) cell_vkb2_top_candi_pane_g4

0x971c,	// (0x0000971c) cell_vkb2_top_candi_pane_g5_ParamLimits

0x971c,	// (0x0000971c) cell_vkb2_top_candi_pane_g5

0x84fc,	// (0x000084fc) cell_vkb2_top_candi_pane_g6_ParamLimits

0x84fc,	// (0x000084fc) cell_vkb2_top_candi_pane_g6

0x0005,

0xb33c,	// (0x0000b33c) cell_vkb2_top_candi_pane_g_ParamLimits

0xb33c,	// (0x0000b33c) cell_vkb2_top_candi_pane_g

0x973d,	// (0x0000973d) cell_vkb2_top_candi_pane_t1

0x4d43,	// (0x00004d43) aid_size_touch_slider_mark_ParamLimits

0x4d43,	// (0x00004d43) aid_size_touch_slider_mark

0xe968,	// (0x0000e968) grid_graphic2_catg_pane_ParamLimits

0xe968,	// (0x0000e968) grid_graphic2_catg_pane

0xea24,	// (0x0000ea24) popup_grid_graphic2_window_t1_ParamLimits

0xea24,	// (0x0000ea24) popup_grid_graphic2_window_t1

0xea3a,	// (0x0000ea3a) popup_grid_graphic2_window_t2_ParamLimits

0xea3a,	// (0x0000ea3a) popup_grid_graphic2_window_t2

0x0001,

0xf493,	// (0x0000f493) popup_grid_graphic2_window_t_ParamLimits

0xf493,	// (0x0000f493) popup_grid_graphic2_window_t

0x082d,	// (0x0000082d) bg_button_pane_cp05_ParamLimits

0xebbf,	// (0x0000ebbf) cell_graphic2_control_pane_g1_ParamLimits

0xecab,	// (0x0000ecab) cell_graphic2_catg_pane_ParamLimits

0xecab,	// (0x0000ecab) cell_graphic2_catg_pane

0x0024,	// (0x00000024) bg_button_pane_cp12

0xecbd,	// (0x0000ecbd) cell_graphic2_catg_pane_g1

0x8638,	// (0x00008638) cell_tb_ext_pane_t1_ParamLimits

0x9058,	// (0x00009058) vkb2_top_cell_right_narrow_pane_ParamLimits

0x9058,	// (0x00009058) vkb2_top_cell_right_narrow_pane

0x9070,	// (0x00009070) vkb2_top_cell_right_wide_pane_ParamLimits

0x9070,	// (0x00009070) vkb2_top_cell_right_wide_pane

0x65ea,	// (0x000065ea) bg_vkb2_func_pane_ParamLimits

0x65ea,	// (0x000065ea) bg_vkb2_func_pane

0x90e1,	// (0x000090e1) vkb2_top_cell_left_pane_g1_ParamLimits

0x65ea,	// (0x000065ea) bg_vkb2_fuc_pane_cp03_ParamLimits

0x65ea,	// (0x000065ea) bg_vkb2_fuc_pane_cp03

0x9156,	// (0x00009156) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x35fb,	// (0x000035fb) bg_vkb2_func_pane_g1

0x3603,	// (0x00003603) bg_vkb2_func_pane_g2

0x3613,	// (0x00003613) bg_vkb2_func_pane_g3

0x360b,	// (0x0000360b) bg_vkb2_func_pane_g4

0x361b,	// (0x0000361b) bg_vkb2_func_pane_g5

0x3623,	// (0x00003623) bg_vkb2_func_pane_g6

0x362b,	// (0x0000362b) bg_vkb2_func_pane_g7

0x3633,	// (0x00003633) bg_vkb2_func_pane_g8

0x35f3,	// (0x000035f3) bg_vkb2_func_pane_g9

0x0008,

0xb349,	// (0x0000b349) bg_vkb2_func_pane_g

0x65ea,	// (0x000065ea) bg_vkb2_fuc_pane_cp01_ParamLimits

0x65ea,	// (0x000065ea) bg_vkb2_fuc_pane_cp01

0x90e1,	// (0x000090e1) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x90e1,	// (0x000090e1) vkb2_top_cell_right_wide_pane_g1

0x65ea,	// (0x000065ea) bg_vkb2_fuc_pane_cp02_ParamLimits

0x65ea,	// (0x000065ea) bg_vkb2_fuc_pane_cp02

0x9156,	// (0x00009156) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x9156,	// (0x00009156) vkb2_top_cell_right_narrow_pane_g1

0xde14,	// (0x0000de14) aid_touch_area_decrease_ParamLimits

0xde14,	// (0x0000de14) aid_touch_area_decrease

0xde4e,	// (0x0000de4e) aid_touch_area_increase_ParamLimits

0xde4e,	// (0x0000de4e) aid_touch_area_increase

0xde76,	// (0x0000de76) aid_touch_area_mute_ParamLimits

0xde76,	// (0x0000de76) aid_touch_area_mute

0xdea6,	// (0x0000dea6) aid_touch_area_slider_ParamLimits

0xdea6,	// (0x0000dea6) aid_touch_area_slider

0xdee6,	// (0x0000dee6) popup_slider_window_g4_ParamLimits

0xdee6,	// (0x0000dee6) popup_slider_window_g4

0xdf0e,	// (0x0000df0e) popup_slider_window_g5_ParamLimits

0xdf0e,	// (0x0000df0e) popup_slider_window_g5

0xdf42,	// (0x0000df42) popup_slider_window_g6_ParamLimits

0xdf42,	// (0x0000df42) popup_slider_window_g6

0x8341,	// (0x00008341) popup_slider_window_t2_ParamLimits

0x8341,	// (0x00008341) popup_slider_window_t2

0x0001,

0xb245,	// (0x0000b245) popup_slider_window_t_ParamLimits

0xb245,	// (0x0000b245) popup_slider_window_t

0xdf5e,	// (0x0000df5e) slider_pane_ParamLimits

0xdf5e,	// (0x0000df5e) slider_pane

0x9777,	// (0x00009777) slider_pane_g1_ParamLimits

0x9777,	// (0x00009777) slider_pane_g1

0x978b,	// (0x0000978b) slider_pane_g2_ParamLimits

0x978b,	// (0x0000978b) slider_pane_g2

0x97a1,	// (0x000097a1) slider_pane_g3_ParamLimits

0x97a1,	// (0x000097a1) slider_pane_g3

0x0003,

0xb35c,	// (0x0000b35c) slider_pane_g_ParamLimits

0xb35c,	// (0x0000b35c) slider_pane_g

0xca25,	// (0x0000ca25) popup_tb_float_extension_window_ParamLimits

0xca25,	// (0x0000ca25) popup_tb_float_extension_window

0x97cd,	// (0x000097cd) aid_size_cell_tb_float_ext

0x0024,	// (0x00000024) bg_popup_sub_window_cp28

0x97d9,	// (0x000097d9) grid_tb_float_ext_pane

0x97e3,	// (0x000097e3) cell_tb_float_ext_pane_ParamLimits

0x97e3,	// (0x000097e3) cell_tb_float_ext_pane

0x97fd,	// (0x000097fd) cell_tb_float_ext_pane_g1

0x9806,	// (0x00009806) grid_highlight_pane_cp12

0xd792,	// (0x0000d792) cell_last_hwr_side_pane_ParamLimits

0xd792,	// (0x0000d792) cell_last_hwr_side_pane

0x658e,	// (0x0000658e) cell_last_hwr_side_pane_g1

0x980f,	// (0x0000980f) cell_last_hwr_side_pane_g2

0x0001,

0xb365,	// (0x0000b365) cell_last_hwr_side_pane_g

0xe838,	// (0x0000e838) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe838,	// (0x0000e838) vkb2_area_bottom_space_btn_pane

0x6a10,	// (0x00006a10) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9239,	// (0x00009239) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x973d,	// (0x0000973d) cell_vkb2_top_candi_pane_t1_ParamLimits

0x9818,	// (0x00009818) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x9818,	// (0x00009818) vkb2_area_bottom_space_btn_pane_g1

0x9852,	// (0x00009852) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9852,	// (0x00009852) vkb2_area_bottom_space_btn_pane_g2

0x9888,	// (0x00009888) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9888,	// (0x00009888) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xb36a,	// (0x0000b36a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xb36a,	// (0x0000b36a) vkb2_area_bottom_space_btn_pane_g

0x66ad,	// (0x000066ad) cel_fep_hwr_func_pane_ParamLimits

0x66ad,	// (0x000066ad) cel_fep_hwr_func_pane

0xd767,	// (0x0000d767) cell_hwr_side_button_pane_ParamLimits

0xd767,	// (0x0000d767) cell_hwr_side_button_pane

0x866c,	// (0x0000866c) aid_area_touch_clock_ParamLimits

0x082d,	// (0x0000082d) bg_uniindi_top_pane_ParamLimits

0x867e,	// (0x0000867e) uniindi_top_pane_g1_ParamLimits

0x8694,	// (0x00008694) uniindi_top_pane_g2_ParamLimits

0x86a0,	// (0x000086a0) uniindi_top_pane_g3_ParamLimits

0x86b1,	// (0x000086b1) uniindi_top_pane_g4_ParamLimits

0xb27d,	// (0x0000b27d) uniindi_top_pane_g_ParamLimits

0x86be,	// (0x000086be) uniindi_top_pane_t1_ParamLimits

0x082d,	// (0x0000082d) bg_vkb2_func_pane_cp01_ParamLimits

0x082d,	// (0x0000082d) bg_vkb2_func_pane_cp01

0x98d2,	// (0x000098d2) cel_fep_hwr_func_pane_g1_ParamLimits

0x98d2,	// (0x000098d2) cel_fep_hwr_func_pane_g1

0x082d,	// (0x0000082d) bg_vkb2_func_pane_cp02_ParamLimits

0x082d,	// (0x0000082d) bg_vkb2_func_pane_cp02

0x98d2,	// (0x000098d2) cell_hwr_side_button_pane_g1_ParamLimits

0x98d2,	// (0x000098d2) cell_hwr_side_button_pane_g1

0x33e8,	// (0x000033e8) status_pane_g4_ParamLimits

0x33e8,	// (0x000033e8) status_pane_g4

0x3402,	// (0x00003402) status_pane_t1

0x62a8,	// (0x000062a8) form2_midp_gauge_slider_cont_pane

0x62b0,	// (0x000062b0) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd6ab,	// (0x0000d6ab) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd6bf,	// (0x0000d6bf) form2_midp_gauge_slider_pane_t3_ParamLimits

0xf3e8,	// (0x0000f3e8) form2_midp_gauge_slider_pane_t_ParamLimits

0x62e6,	// (0x000062e6) form2_midp_slider_pane_ParamLimits

0x8bd8,	// (0x00008bd8) aid_size_cell_func_vkb2_ParamLimits

0x8bd8,	// (0x00008bd8) aid_size_cell_func_vkb2

0x97b9,	// (0x000097b9) slider_pane_g4_ParamLimits

0x97b9,	// (0x000097b9) slider_pane_g4

0xecc6,	// (0x0000ecc6) form2_midp_gauge_slider_pane_t2_cp01

0xecd6,	// (0x0000ecd6) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xecd6,	// (0x0000ecd6) form2_midp_gauge_slider_pane_t3_cp01

0x990b,	// (0x0000990b) form2_midp_slider_pane_cp01

0x0024,	// (0x00000024) navi_smil_pane

0x993f,	// (0x0000993f) navi_smil_pane_g1

0x9947,	// (0x00009947) navi_smil_pane_t1

0x9914,	// (0x00009914) form2_midp_slider_pane_g1

0x991d,	// (0x0000991d) form2_midp_slider_pane_g2

0x9925,	// (0x00009925) form2_midp_slider_pane_g3

0x9914,	// (0x00009914) form2_midp_slider_pane_g4

0xecf5,	// (0x0000ecf5) form2_midp_slider_pane_g5

0x0004,

0xf4ad,	// (0x0000f4ad) form2_midp_slider_pane_g

0x98c2,	// (0x000098c2) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x98c2,	// (0x000098c2) vkb2_area_bottom_space_btn_pane_g4

0xcc08,	// (0x0000cc08) lc0_navi_pane_ParamLimits

0xcc08,	// (0x0000cc08) lc0_navi_pane

0xcc72,	// (0x0000cc72) lc0_stat_indi_pane_ParamLimits

0xcc72,	// (0x0000cc72) lc0_stat_indi_pane

0xcc87,	// (0x0000cc87) ls0_title_pane_ParamLimits

0xcc87,	// (0x0000cc87) ls0_title_pane

0x1349,	// (0x00001349) bg_popup_sub_pane_cp14_ParamLimits

0x8653,	// (0x00008653) list_uniindi_pane_ParamLimits

0x865f,	// (0x0000865f) uniindi_top_pane_ParamLimits

0x86fb,	// (0x000086fb) list_single_uniindi_pane_g1_ParamLimits

0x870e,	// (0x0000870e) list_single_uniindi_pane_t1_ParamLimits

0xed00,	// (0x0000ed00) lc0_stat_clock_pane_ParamLimits

0xed00,	// (0x0000ed00) lc0_stat_clock_pane

0xed0d,	// (0x0000ed0d) lc0_stat_indi_pane_g1_ParamLimits

0xed0d,	// (0x0000ed0d) lc0_stat_indi_pane_g1

0xed1a,	// (0x0000ed1a) lc0_stat_indi_pane_g2_ParamLimits

0xed1a,	// (0x0000ed1a) lc0_stat_indi_pane_g2

0x0001,

0xf4b8,	// (0x0000f4b8) lc0_stat_indi_pane_g_ParamLimits

0xf4b8,	// (0x0000f4b8) lc0_stat_indi_pane_g

0xed27,	// (0x0000ed27) lc0_uni_indicator_pane_ParamLimits

0xed27,	// (0x0000ed27) lc0_uni_indicator_pane

0xed34,	// (0x0000ed34) ls0_title_pane_g1_ParamLimits

0xed34,	// (0x0000ed34) ls0_title_pane_g1

0xed48,	// (0x0000ed48) ls0_title_pane_t1_ParamLimits

0xed48,	// (0x0000ed48) ls0_title_pane_t1

0xed76,	// (0x0000ed76) lc0_uni_indicator_pane_g1_ParamLimits

0xed76,	// (0x0000ed76) lc0_uni_indicator_pane_g1

0x99e8,	// (0x000099e8) lc0_stat_clock_pane_t1

0x0024,	// (0x00000024) main_ai5_pane

0x99f6,	// (0x000099f6) ai5_sk_pane_ParamLimits

0x99f6,	// (0x000099f6) ai5_sk_pane

0xeda4,	// (0x0000eda4) cell_ai5_widget_pane_ParamLimits

0xeda4,	// (0x0000eda4) cell_ai5_widget_pane

0x9acd,	// (0x00009acd) aid_size_cell_widget_grid

0x9ae3,	// (0x00009ae3) bg_ai5_widget_pane_ParamLimits

0x9ae3,	// (0x00009ae3) bg_ai5_widget_pane

0x9b57,	// (0x00009b57) cell_ai5_widget_pane_g2

0x9b67,	// (0x00009b67) cell_ai5_widget_pane_g3

0x9b7e,	// (0x00009b7e) cell_ai5_widget_pane_g4

0x9b8a,	// (0x00009b8a) cell_ai5_widget_pane_g5

0x9b96,	// (0x00009b96) cell_ai5_widget_pane_g6

0x9ba2,	// (0x00009ba2) cell_ai5_widget_pane_g7

0x9bea,	// (0x00009bea) cell_ai5_widget_pane_t1_ParamLimits

0x9bea,	// (0x00009bea) cell_ai5_widget_pane_t1

0x9c07,	// (0x00009c07) cell_ai5_widget_pane_t2_ParamLimits

0x9c07,	// (0x00009c07) cell_ai5_widget_pane_t2

0x9c1f,	// (0x00009c1f) cell_ai5_widget_pane_t3_ParamLimits

0x9c1f,	// (0x00009c1f) cell_ai5_widget_pane_t3

0x9c37,	// (0x00009c37) cell_ai5_widget_pane_t4_ParamLimits

0x9c37,	// (0x00009c37) cell_ai5_widget_pane_t4

0x9c54,	// (0x00009c54) cell_ai5_widget_pane_t5_ParamLimits

0x9c54,	// (0x00009c54) cell_ai5_widget_pane_t5

0x9c73,	// (0x00009c73) cell_ai5_widget_pane_t6_ParamLimits

0x9c73,	// (0x00009c73) cell_ai5_widget_pane_t6

0x9c85,	// (0x00009c85) cell_ai5_widget_pane_t7_ParamLimits

0x9c85,	// (0x00009c85) cell_ai5_widget_pane_t7

0x9c9e,	// (0x00009c9e) cell_ai5_widget_pane_t8_ParamLimits

0x9c9e,	// (0x00009c9e) cell_ai5_widget_pane_t8

0x0009,

0xb398,	// (0x0000b398) cell_ai5_widget_pane_t_ParamLimits

0xb398,	// (0x0000b398) cell_ai5_widget_pane_t

0x9cf2,	// (0x00009cf2) grid_ai5_widget_pane

0x1349,	// (0x00001349) highlight_cell_ai5_widget_pane_ParamLimits

0x1349,	// (0x00001349) highlight_cell_ai5_widget_pane

0xee0e,	// (0x0000ee0e) ai5_sk_left_pane

0xee18,	// (0x0000ee18) ai5_sk_middle_pane

0xee22,	// (0x0000ee22) ai5_sk_right_pane

0x9d28,	// (0x00009d28) bg_ai5_widget_pane_g1_ParamLimits

0x9d28,	// (0x00009d28) bg_ai5_widget_pane_g1

0x9d34,	// (0x00009d34) bg_ai5_widget_pane_g2_ParamLimits

0x9d34,	// (0x00009d34) bg_ai5_widget_pane_g2

0x9d40,	// (0x00009d40) bg_ai5_widget_pane_g3_ParamLimits

0x9d40,	// (0x00009d40) bg_ai5_widget_pane_g3

0x9d4c,	// (0x00009d4c) bg_ai5_widget_pane_g4_ParamLimits

0x9d4c,	// (0x00009d4c) bg_ai5_widget_pane_g4

0x9d58,	// (0x00009d58) bg_ai5_widget_pane_g5_ParamLimits

0x9d58,	// (0x00009d58) bg_ai5_widget_pane_g5

0x9d64,	// (0x00009d64) bg_ai5_widget_pane_g6_ParamLimits

0x9d64,	// (0x00009d64) bg_ai5_widget_pane_g6

0x9d70,	// (0x00009d70) bg_ai5_widget_pane_g7_ParamLimits

0x9d70,	// (0x00009d70) bg_ai5_widget_pane_g7

0x9d7c,	// (0x00009d7c) bg_ai5_widget_pane_g8_ParamLimits

0x9d7c,	// (0x00009d7c) bg_ai5_widget_pane_g8

0x9d88,	// (0x00009d88) bg_ai5_widget_pane_g9_ParamLimits

0x9d88,	// (0x00009d88) bg_ai5_widget_pane_g9

0x0008,

0xb3ad,	// (0x0000b3ad) bg_ai5_widget_pane_g_ParamLimits

0xb3ad,	// (0x0000b3ad) bg_ai5_widget_pane_g

0x9dba,	// (0x00009dba) cell_shortcut_ai5_widget_pane_ParamLimits

0x9dba,	// (0x00009dba) cell_shortcut_ai5_widget_pane

0x255f,	// (0x0000255f) bg_cell_shortcut_ai5_widget_pane

0x9dcb,	// (0x00009dcb) cell_grid_ai5_widget_pane_g1

0x255f,	// (0x0000255f) highlight_cell_shortcut_ai5_widget_pane

0x3603,	// (0x00003603) ai5_sk_left_pane_g1

0x9dd4,	// (0x00009dd4) ai5_sk_left_pane_g2

0x9ddc,	// (0x00009ddc) ai5_sk_left_pane_g3

0x9de4,	// (0x00009de4) ai5_sk_left_pane_g4

0x0003,

0xb3c0,	// (0x0000b3c0) ai5_sk_left_pane_g

0x9dec,	// (0x00009dec) ai5_sk_left_pane_t1

0x35fb,	// (0x000035fb) ai5_sk_right_pane_g1

0x9dfa,	// (0x00009dfa) ai5_sk_right_pane_g2

0x9e02,	// (0x00009e02) ai5_sk_right_pane_g3

0x9e0a,	// (0x00009e0a) ai5_sk_right_pane_g4

0x0003,

0xb3c9,	// (0x0000b3c9) ai5_sk_right_pane_g

0x9e12,	// (0x00009e12) ai5_sk_right_pane_t1

0x35fb,	// (0x000035fb) ai5_sk_middle_pane_g1

0x3603,	// (0x00003603) ai5_sk_middle_pane_g2

0x361b,	// (0x0000361b) ai5_sk_middle_pane_g3

0x9e02,	// (0x00009e02) ai5_sk_middle_pane_g4

0x9ddc,	// (0x00009ddc) ai5_sk_middle_pane_g5

0x9e20,	// (0x00009e20) ai5_sk_middle_pane_g6

0xee2c,	// (0x0000ee2c) ai5_sk_middle_pane_g7

0x0006,

0xf4bd,	// (0x0000f4bd) ai5_sk_middle_pane_g

0xcaf4,	// (0x0000caf4) aid_touch_area_size_lc0_ParamLimits

0xcaf4,	// (0x0000caf4) aid_touch_area_size_lc0

0x6dbd,	// (0x00006dbd) cell_hwr_candidate_pane_t1_ParamLimits

0x30cb,	// (0x000030cb) aid_touch_navi_pane

0xcd80,	// (0x0000cd80) status_dt_navi_pane_ParamLimits

0xcd80,	// (0x0000cd80) status_dt_navi_pane

0xcd98,	// (0x0000cd98) status_dt_sta_pane_ParamLimits

0xcd98,	// (0x0000cd98) status_dt_sta_pane

0xee34,	// (0x0000ee34) dt_sta_controll_pane

0xee41,	// (0x0000ee41) dt_sta_indi_pane

0xee4e,	// (0x0000ee4e) dt_sta_title_pane

0x082d,	// (0x0000082d) bg_dt_sta_indi_pane_ParamLimits

0x082d,	// (0x0000082d) bg_dt_sta_indi_pane

0x9e61,	// (0x00009e61) dt_sta_battery_pane

0xee60,	// (0x0000ee60) dt_sta_indi_pane_g1

0xee69,	// (0x0000ee69) dt_sta_indi_pane_g2

0xee72,	// (0x0000ee72) dt_sta_indi_pane_g3

0x0002,

0xf4cc,	// (0x0000f4cc) dt_sta_indi_pane_g

0xee7b,	// (0x0000ee7b) dt_sta_signal_pane

0x1349,	// (0x00001349) bg_dt_sta_title_pane_ParamLimits

0x1349,	// (0x00001349) bg_dt_sta_title_pane

0x9e8d,	// (0x00009e8d) dt_sta_title_pane_g1

0xee84,	// (0x0000ee84) dt_sta_title_pane_t1_ParamLimits

0xee84,	// (0x0000ee84) dt_sta_title_pane_t1

0x0024,	// (0x00000024) bg_dt_sta_control_pane

0xee99,	// (0x0000ee99) dt_sta_controll_pane_g1

0x9eb3,	// (0x00009eb3) bg_dt_sta_title_pane_g1

0x9ebc,	// (0x00009ebc) bg_dt_sta_title_pane_g2

0x9ec5,	// (0x00009ec5) bg_dt_sta_title_pane_g3

0x0002,

0xb3e8,	// (0x0000b3e8) bg_dt_sta_title_pane_g

0x658e,	// (0x0000658e) bg_dt_sta_indi_pane_g1

0x9ece,	// (0x00009ece) dt_sta_signal_pane_g1

0x9ed6,	// (0x00009ed6) dt_sta_signal_pane_g2

0x0001,

0xb3ef,	// (0x0000b3ef) dt_sta_signal_pane_g

0x9ede,	// (0x00009ede) dt_sta_battery_pane_g1

0x9ee7,	// (0x00009ee7) dt_sta_battery_pane_t1

0x658e,	// (0x0000658e) bg_dt_sta_control_pane_g1

0x1e9d,	// (0x00001e9d) fep_china_uni_eep_pane

0x1ea5,	// (0x00001ea5) fep_china_uni_entry_pane_ParamLimits

0x1eb5,	// (0x00001eb5) popup_fep_china_uni_window_g1_ParamLimits

0x1ec5,	// (0x00001ec5) popup_fep_china_uni_window_g2_ParamLimits

0x1ec5,	// (0x00001ec5) popup_fep_china_uni_window_g2

0x0001,

0xac66,	// (0x0000ac66) popup_fep_china_uni_window_g_ParamLimits

0xac66,	// (0x0000ac66) popup_fep_china_uni_window_g

0x9ef6,	// (0x00009ef6) fep_china_uni_eep_pane_g1

0x9efe,	// (0x00009efe) fep_china_uni_eep_pane_t1

0x9936,	// (0x00009936) aid_touch_area_size_smil_player

0x3217,	// (0x00003217) lc0_clock_pane

0x33f6,	// (0x000033f6) status_pane_g5_ParamLimits

0x33f6,	// (0x000033f6) status_pane_g5

0xc5b3,	// (0x0000c5b3) popup_keymap_window

0x33bc,	// (0x000033bc) status_icon_pane

0x9b67,	// (0x00009b67) cell_ai5_widget_pane_g3_ParamLimits

0x9b7e,	// (0x00009b7e) cell_ai5_widget_pane_g4_ParamLimits

0x9b8a,	// (0x00009b8a) cell_ai5_widget_pane_g5_ParamLimits

0x9bae,	// (0x00009bae) cell_ai5_widget_pane_g8_ParamLimits

0x9bae,	// (0x00009bae) cell_ai5_widget_pane_g8

0x9bc2,	// (0x00009bc2) cell_ai5_widget_pane_g9_ParamLimits

0x9bc2,	// (0x00009bc2) cell_ai5_widget_pane_g9

0x9bd6,	// (0x00009bd6) cell_ai5_widget_pane_g10_ParamLimits

0x9bd6,	// (0x00009bd6) cell_ai5_widget_pane_g10

0x9f0d,	// (0x00009f0d) status_icon_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp13

0x9f15,	// (0x00009f15) popup_keymap_window_t1

0xc2df,	// (0x0000c2df) control_pane_g6_ParamLimits

0xc2df,	// (0x0000c2df) control_pane_g6

0xc2ec,	// (0x0000c2ec) control_pane_g7_ParamLimits

0xc2ec,	// (0x0000c2ec) control_pane_g7

0xc2f9,	// (0x0000c2f9) control_pane_g8_ParamLimits

0xc2f9,	// (0x0000c2f9) control_pane_g8

0xee34,	// (0x0000ee34) dt_sta_controll_pane_ParamLimits

0xee41,	// (0x0000ee41) dt_sta_indi_pane_ParamLimits

0xee4e,	// (0x0000ee4e) dt_sta_title_pane_ParamLimits

0x0d36,	// (0x00000d36) aid_size_touch_scroll_bar_cale

0x02b1,	// (0x000002b1) popup_discreet_window_ParamLimits

0x02b1,	// (0x000002b1) popup_discreet_window

0xb5a8,	// (0x0000b5a8) popup_sk_window

0x3e6c,	// (0x00003e6c) bg_popup_sub_pane_cp28_ParamLimits

0x3e6c,	// (0x00003e6c) bg_popup_sub_pane_cp28

0x9f23,	// (0x00009f23) popup_discreet_window_g1_ParamLimits

0x9f23,	// (0x00009f23) popup_discreet_window_g1

0x9f43,	// (0x00009f43) popup_discreet_window_t1_ParamLimits

0x9f43,	// (0x00009f43) popup_discreet_window_t1

0x9f61,	// (0x00009f61) popup_discreet_window_t2_ParamLimits

0x9f61,	// (0x00009f61) popup_discreet_window_t2

0x0002,

0xb3f4,	// (0x0000b3f4) popup_discreet_window_t_ParamLimits

0xb3f4,	// (0x0000b3f4) popup_discreet_window_t

0x9fb3,	// (0x00009fb3) popup_sk_window_g1

0x9fbd,	// (0x00009fbd) popup_sk_window_g2

0x0001,

0xb3fb,	// (0x0000b3fb) popup_sk_window_g

0x9fc7,	// (0x00009fc7) popup_sk_window_t1

0x9fd5,	// (0x00009fd5) popup_sk_window_t1_copy1

0x9b57,	// (0x00009b57) cell_ai5_widget_pane_g2_ParamLimits

0x9cb0,	// (0x00009cb0) cell_ai5_widget_pane_t9_ParamLimits

0x9cb0,	// (0x00009cb0) cell_ai5_widget_pane_t9

0x0024,	// (0x00000024) main_fep_fshwr2_pane

0xeea2,	// (0x0000eea2) aid_fshwr2_btn_pane

0xeeb3,	// (0x0000eeb3) aid_fshwr2_syb_pane

0xeec4,	// (0x0000eec4) aid_fshwr2_txt_pane

0xeed0,	// (0x0000eed0) fshwr2_func_candi_pane

0xeeef,	// (0x0000eeef) fshwr2_hwr_syb_pane

0xef0a,	// (0x0000ef0a) fshwr2_icf_pane

0x0024,	// (0x00000024) fshwr2_icf_bg_pane

0xef33,	// (0x0000ef33) fshwr2_icf_pane_t1_ParamLimits

0xef33,	// (0x0000ef33) fshwr2_icf_pane_t1

0x1cc1,	// (0x00001cc1) fshwr2_func_candi_pane_g1

0xef4c,	// (0x0000ef4c) fshwr2_func_candi_row_pane_ParamLimits

0xef4c,	// (0x0000ef4c) fshwr2_func_candi_row_pane

0xef5c,	// (0x0000ef5c) cell_fshwr2_syb_pane_ParamLimits

0xef5c,	// (0x0000ef5c) cell_fshwr2_syb_pane

0x6a10,	// (0x00006a10) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6a10,	// (0x00006a10) fshwr2_hwr_syb_pane_g1

0x0024,	// (0x00000024) bg_popup_call_pane_cp01

0xef72,	// (0x0000ef72) fshwr2_func_candi_cell_pane_ParamLimits

0xef72,	// (0x0000ef72) fshwr2_func_candi_cell_pane

0xefa7,	// (0x0000efa7) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xefa7,	// (0x0000efa7) fshwr2_func_candi_cell_bg_pane

0xefb3,	// (0x0000efb3) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xefb3,	// (0x0000efb3) fshwr2_func_candi_cell_pane_g1

0xefe2,	// (0x0000efe2) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xefe2,	// (0x0000efe2) fshwr2_func_candi_cell_pane_t1

0x0024,	// (0x00000024) bg_button_pane_cp08

0x55be,	// (0x000055be) cell_fshwr2_syb_bg_pane

0xeff5,	// (0x0000eff5) cell_fshwr2_syb_bg_pane_g1

0xeffd,	// (0x0000effd) cell_fshwr2_syb_bg_pane_t1

0x1349,	// (0x00001349) main_tmo_pane

0xd1f7,	// (0x0000d1f7) uni_indicator_pane_g1_ParamLimits

0xd20d,	// (0x0000d20d) uni_indicator_pane_g2_ParamLimits

0xd223,	// (0x0000d223) uni_indicator_pane_g3_ParamLimits

0x4b20,	// (0x00004b20) uni_indicator_pane_g4_ParamLimits

0x4b20,	// (0x00004b20) uni_indicator_pane_g4

0x4b34,	// (0x00004b34) uni_indicator_pane_g5_ParamLimits

0x4b34,	// (0x00004b34) uni_indicator_pane_g5

0x4b34,	// (0x00004b34) uni_indicator_pane_g6_ParamLimits

0x4b34,	// (0x00004b34) uni_indicator_pane_g6

0xf399,	// (0x0000f399) uni_indicator_pane_g_ParamLimits

0xddf6,	// (0x0000ddf6) popup_tmo_note_window_ParamLimits

0xddf6,	// (0x0000ddf6) popup_tmo_note_window

0x1349,	// (0x00001349) fshwr2_bg_pane

0xefd3,	// (0x0000efd3) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xefd3,	// (0x0000efd3) fshwr2_func_candi_cell_pane_g2

0x0001,

0xf4d3,	// (0x0000f4d3) fshwr2_func_candi_cell_pane_g_ParamLimits

0xf4d3,	// (0x0000f4d3) fshwr2_func_candi_cell_pane_g

0x658e,	// (0x0000658e) bg_popup_window_pane_cp01

0xa112,	// (0x0000a112) bg_popup_window_pane_g1_cp01

0xa11b,	// (0x0000a11b) bg_popup_window_pane_cp22_ParamLimits

0xa11b,	// (0x0000a11b) bg_popup_window_pane_cp22

0xa129,	// (0x0000a129) listscroll_tmo_link_pane_ParamLimits

0xa129,	// (0x0000a129) listscroll_tmo_link_pane

0xa169,	// (0x0000a169) popup_tmo_note_window_g1_ParamLimits

0xa169,	// (0x0000a169) popup_tmo_note_window_g1

0xa176,	// (0x0000a176) tmo_note_info_pane_ParamLimits

0xa176,	// (0x0000a176) tmo_note_info_pane

0xf00c,	// (0x0000f00c) list_tmo_note_info_pane_g1_ParamLimits

0xf00c,	// (0x0000f00c) list_tmo_note_info_pane_g1

0xa1a7,	// (0x0000a1a7) list_tmo_note_info_pane_g2_ParamLimits

0xa1a7,	// (0x0000a1a7) list_tmo_note_info_pane_g2

0x0001,

0xf4d8,	// (0x0000f4d8) list_tmo_note_info_pane_g_ParamLimits

0xf4d8,	// (0x0000f4d8) list_tmo_note_info_pane_g

0xa1c3,	// (0x0000a1c3) list_tmo_note_info_text_pane_ParamLimits

0xa1c3,	// (0x0000a1c3) list_tmo_note_info_text_pane

0xa246,	// (0x0000a246) list_tmo_link_pane

0xa253,	// (0x0000a253) scroll_pane_cp20

0xa260,	// (0x0000a260) list_single_tmo_link_pane_ParamLimits

0xa260,	// (0x0000a260) list_single_tmo_link_pane

0xa270,	// (0x0000a270) list_single_tmo_link_pane_t1

0xa27e,	// (0x0000a27e) list_tmo_note_info_text_pane_t1_ParamLimits

0xa27e,	// (0x0000a27e) list_tmo_note_info_text_pane_t1

0xbe86,	// (0x0000be86) aid_size_touch_scroll_bar_cp01_ParamLimits

0xbe86,	// (0x0000be86) aid_size_touch_scroll_bar_cp01

0xbde2,	// (0x0000bde2) aid_size_touch_slider_marker

0xb598,	// (0x0000b598) popup_settings_window_ParamLimits

0xb598,	// (0x0000b598) popup_settings_window

0x2af8,	// (0x00002af8) popup_candi_list_indi_window

0x30cb,	// (0x000030cb) aid_touch_navi_pane_ParamLimits

0x83d6,	// (0x000083d6) rs_clock_indi_pane

0x83df,	// (0x000083df) sctrl_sk_bottom_pane_ParamLimits

0x83f0,	// (0x000083f0) sctrl_sk_top_pane_ParamLimits

0x8c32,	// (0x00008c32) popup_fep_tooltip_window

0x9acd,	// (0x00009acd) aid_size_cell_widget_grid_ParamLimits

0x9b42,	// (0x00009b42) cell_ai5_widget_pane_g1_ParamLimits

0x9b42,	// (0x00009b42) cell_ai5_widget_pane_g1

0x9b96,	// (0x00009b96) cell_ai5_widget_pane_g6_ParamLimits

0x9ba2,	// (0x00009ba2) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xb383,	// (0x0000b383) cell_ai5_widget_pane_g_ParamLimits

0xb383,	// (0x0000b383) cell_ai5_widget_pane_g

0x9cd4,	// (0x00009cd4) cell_ai5_widget_pane_t10_ParamLimits

0x9cd4,	// (0x00009cd4) cell_ai5_widget_pane_t10

0x9cf2,	// (0x00009cf2) grid_ai5_widget_pane_ParamLimits

0x9d94,	// (0x00009d94) cell_contacts_ai5_widget_pane_ParamLimits

0x9d94,	// (0x00009d94) cell_contacts_ai5_widget_pane

0x9f76,	// (0x00009f76) popup_discreet_window_t3_ParamLimits

0x9f76,	// (0x00009f76) popup_discreet_window_t3

0xef1f,	// (0x0000ef1f) popup_fshwr2_char_preview_window_ParamLimits

0xef1f,	// (0x0000ef1f) popup_fshwr2_char_preview_window

0xf023,	// (0x0000f023) tmo_note_info_pane_t1

0xf038,	// (0x0000f038) tmo_note_info_pane_t2

0xf051,	// (0x0000f051) tmo_note_info_pane_t3

0xa222,	// (0x0000a222) tmo_note_info_pane_t4

0xa234,	// (0x0000a234) tmo_note_info_pane_t5

0x0004,

0xf4dd,	// (0x0000f4dd) tmo_note_info_pane_t

0xa246,	// (0x0000a246) list_tmo_link_pane_ParamLimits

0xa253,	// (0x0000a253) scroll_pane_cp20_ParamLimits

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp01

0xa297,	// (0x0000a297) popup_fshwr2_char_preview_window_t1

0xa2a5,	// (0x0000a2a5) popup_candi_list_indi_window_g1

0xa2ae,	// (0x0000a2ae) bg_cell_contacts_ai5_widget_pane

0xa2ba,	// (0x0000a2ba) cell_contacts_ai5_widget_pane_g1

0xa2cf,	// (0x0000a2cf) cell_contacts_ai5_widget_pane_g2

0xa2db,	// (0x0000a2db) cell_contacts_ai5_widget_pane_g3

0x0002,

0xb415,	// (0x0000b415) cell_contacts_ai5_widget_pane_g

0xa2e7,	// (0x0000a2e7) cell_contacts_ai5_widget_pane_t1

0x1349,	// (0x00001349) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf066,	// (0x0000f066) settings_container_pane

0x255f,	// (0x0000255f) listscroll_set_pane_copy1

0x595e,	// (0x0000595e) scroll_pane_cp121_copy1

0xa36a,	// (0x0000a36a) set_content_pane_copy1

0xf072,	// (0x0000f072) aid_height_set_list_copy1_ParamLimits

0xf072,	// (0x0000f072) aid_height_set_list_copy1

0x4e01,	// (0x00004e01) aid_size_parent_copy1_ParamLimits

0x4e01,	// (0x00004e01) aid_size_parent_copy1

0xf07e,	// (0x0000f07e) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf07e,	// (0x0000f07e) button_value_adjust_pane_cp6_copy1

0x2ad0,	// (0x00002ad0) list_highlight_pane_cp2_copy1_ParamLimits

0x2ad0,	// (0x00002ad0) list_highlight_pane_cp2_copy1

0xf092,	// (0x0000f092) list_set_pane_copy1_ParamLimits

0xf092,	// (0x0000f092) list_set_pane_copy1

0xa2f9,	// (0x0000a2f9) main_pane_set_t1_copy1_ParamLimits

0xa2f9,	// (0x0000a2f9) main_pane_set_t1_copy1

0xa333,	// (0x0000a333) main_pane_set_t2_copy1_ParamLimits

0xa333,	// (0x0000a333) main_pane_set_t2_copy1

0xa43f,	// (0x0000a43f) main_pane_set_t3_copy1

0xa44d,	// (0x0000a44d) main_pane_set_t4_copy1

0xa352,	// (0x0000a352) set_content_pane_g1_copy1_ParamLimits

0xa352,	// (0x0000a352) set_content_pane_g1_copy1

0xf13f,	// (0x0000f13f) setting_code_pane_copy1

0xa463,	// (0x0000a463) setting_slider_graphic_pane_copy1

0xa463,	// (0x0000a463) setting_slider_pane_copy1

0xa463,	// (0x0000a463) setting_text_pane_copy1

0xa463,	// (0x0000a463) setting_volume_pane_copy1

0xf13f,	// (0x0000f13f) settings_code_pane_cp2_copy1

0xf147,	// (0x0000f147) settings_code_pane_cp_copy1_ParamLimits

0xf147,	// (0x0000f147) settings_code_pane_cp_copy1

0xf15b,	// (0x0000f15b) volume_set_pane_copy1

0xf163,	// (0x0000f163) volume_set_pane_g10_copy1

0xf16b,	// (0x0000f16b) volume_set_pane_g1_copy1

0xf173,	// (0x0000f173) volume_set_pane_g2_copy1

0xf17b,	// (0x0000f17b) volume_set_pane_g3_copy1

0xf183,	// (0x0000f183) volume_set_pane_g4_copy1

0xf18b,	// (0x0000f18b) volume_set_pane_g5_copy1

0xf193,	// (0x0000f193) volume_set_pane_g6_copy1

0xf19b,	// (0x0000f19b) volume_set_pane_g7_copy1

0xf1a3,	// (0x0000f1a3) volume_set_pane_g8_copy1

0xf1ab,	// (0x0000f1ab) volume_set_pane_g9_copy1

0x04f9,	// (0x000004f9) bg_set_opt_pane_cp_copy1_ParamLimits

0x04f9,	// (0x000004f9) bg_set_opt_pane_cp_copy1

0xa4d7,	// (0x0000a4d7) setting_slider_pane_t1_copy1_ParamLimits

0xa4d7,	// (0x0000a4d7) setting_slider_pane_t1_copy1

0xf1b3,	// (0x0000f1b3) setting_slider_pane_t2_copy1_ParamLimits

0xf1b3,	// (0x0000f1b3) setting_slider_pane_t2_copy1

0xf1cd,	// (0x0000f1cd) setting_slider_pane_t3_copy1_ParamLimits

0xf1cd,	// (0x0000f1cd) setting_slider_pane_t3_copy1

0xf1e5,	// (0x0000f1e5) slider_set_pane_copy1_ParamLimits

0xf1e5,	// (0x0000f1e5) slider_set_pane_copy1

0x1476,	// (0x00001476) set_opt_bg_pane_g1_copy2

0x147e,	// (0x0000147e) set_opt_bg_pane_g2_copy2

0xa53d,	// (0x0000a53d) set_opt_bg_pane_g3_copy2

0x148e,	// (0x0000148e) set_opt_bg_pane_g4_copy2

0x1496,	// (0x00001496) set_opt_bg_pane_g5_copy2

0x149e,	// (0x0000149e) set_opt_bg_pane_g6_copy2

0xf1fb,	// (0x0000f1fb) set_opt_bg_pane_g7_copy2

0xa54f,	// (0x0000a54f) set_opt_bg_pane_g8_copy2

0xa559,	// (0x0000a559) set_opt_bg_pane_g9_copy2

0xa563,	// (0x0000a563) aid_size_touch_slider_mark_copy1_ParamLimits

0xa563,	// (0x0000a563) aid_size_touch_slider_mark_copy1

0xa577,	// (0x0000a577) slider_set_pane_g1_copy1

0xa580,	// (0x0000a580) slider_set_pane_g2_copy1

0x4d70,	// (0x00004d70) slider_set_pane_g3_copy1_ParamLimits

0x4d70,	// (0x00004d70) slider_set_pane_g3_copy1

0x4d84,	// (0x00004d84) slider_set_pane_g4_copy1_ParamLimits

0x4d84,	// (0x00004d84) slider_set_pane_g4_copy1

0x4d9c,	// (0x00004d9c) slider_set_pane_g5_copy1_ParamLimits

0x4d9c,	// (0x00004d9c) slider_set_pane_g5_copy1

0x4d70,	// (0x00004d70) slider_set_pane_g6_copy1_ParamLimits

0x4d70,	// (0x00004d70) slider_set_pane_g6_copy1

0xa588,	// (0x0000a588) slider_set_pane_g7_copy1_ParamLimits

0xa588,	// (0x0000a588) slider_set_pane_g7_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_copy1

0xa59e,	// (0x0000a59e) setting_slider_graphic_pane_g1_copy1

0xf203,	// (0x0000f203) setting_slider_graphic_pane_t1_copy1

0xf213,	// (0x0000f213) setting_slider_graphic_pane_t2_copy1

0xf223,	// (0x0000f223) slider_set_pane_cp_copy1

0xa5d7,	// (0x0000a5d7) input_focus_pane_cp1_copy1

0xa5e0,	// (0x0000a5e0) list_set_text_pane_copy1

0xa5e8,	// (0x0000a5e8) setting_text_pane_g1_copy1

0xa5f1,	// (0x0000a5f1) set_text_pane_t1_copy1

0xa5d7,	// (0x0000a5d7) input_focus_pane_cp2_copy1

0xa5e8,	// (0x0000a5e8) setting_code_pane_g1_copy1

0xf22b,	// (0x0000f22b) setting_code_pane_t1_copy1

0x574a,	// (0x0000574a) list_set_graphic_pane_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_copy1

0xc0ee,	// (0x0000c0ee) list_set_graphic_pane_g1_copy1_ParamLimits

0xc0ee,	// (0x0000c0ee) list_set_graphic_pane_g1_copy1

0xf239,	// (0x0000f239) list_set_graphic_pane_g2_copy1

0xc106,	// (0x0000c106) list_set_graphic_pane_t1_copy1_ParamLimits

0xc106,	// (0x0000c106) list_set_graphic_pane_t1_copy1

0x658e,	// (0x0000658e) rs_clock_indi_pane_g1

0xa637,	// (0x0000a637) rs_clock_indi_pane_t1

0xa645,	// (0x0000a645) rs_indi_pane

0xa64d,	// (0x0000a64d) rs_indi_pane_g1

0xa656,	// (0x0000a656) rs_indi_pane_g2

0xa65f,	// (0x0000a65f) rs_indi_pane_g3

0x0002,

0xb41c,	// (0x0000b41c) rs_indi_pane_g

0x255f,	// (0x0000255f) bg_popup_preview_window_pane_cp03

0xa668,	// (0x0000a668) popup_fep_tooltip_window_t1

0x77ab,	// (0x000077ab) popup_note2_window_g2_ParamLimits

0x77ab,	// (0x000077ab) popup_note2_window_g2

0x0001,

0xb1b5,	// (0x0000b1b5) popup_note2_window_g_ParamLimits

0xb1b5,	// (0x0000b1b5) popup_note2_window_g

0x7da7,	// (0x00007da7) bg_popup_sub_pane_cp11_ParamLimits

0x7db4,	// (0x00007db4) cell_ai3_links_pane_g1_ParamLimits

0x7dcb,	// (0x00007dcb) cell_ai3_links_pane_t1

0xa5f1,	// (0x0000a5f1) set_text_pane_t1_copy1_ParamLimits

0x247c,	// (0x0000247c) cell_graphic_popup_pane_cp2_ParamLimits

0x247c,	// (0x0000247c) cell_graphic_popup_pane_cp2

0xa676,	// (0x0000a676) cell_graphic_popup_pane_g1_cp2

0x0b49,	// (0x00000b49) cell_graphic_popup_pane_g2_cp2

0xa67e,	// (0x0000a67e) cell_graphic_popup_pane_g3_cp2

0xa686,	// (0x0000a686) cell_graphic_popup_pane_t2_cp2

0x0b5a,	// (0x00000b5a) grid_highlight_pane_cp3_cp2

0x19d0,	// (0x000019d0) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x1349,	// (0x00001349) main_tmo_pane_ParamLimits

0xddea,	// (0x0000ddea) popup_tmo_big_image_note_window

0x9b31,	// (0x00009b31) cell_ai5_widget_list_pane

0x9b39,	// (0x00009b39) cell_ai5_widget_lrg_icon_pane

0xf023,	// (0x0000f023) tmo_note_info_pane_t1_ParamLimits

0xf038,	// (0x0000f038) tmo_note_info_pane_t2_ParamLimits

0xf051,	// (0x0000f051) tmo_note_info_pane_t3_ParamLimits

0xa222,	// (0x0000a222) tmo_note_info_pane_t4_ParamLimits

0xa234,	// (0x0000a234) tmo_note_info_pane_t5_ParamLimits

0xf4dd,	// (0x0000f4dd) tmo_note_info_pane_t_ParamLimits

0xf066,	// (0x0000f066) settings_container_pane_ParamLimits

0xa5cf,	// (0x0000a5cf) indicator_popup_pane_cp5

0xa5cf,	// (0x0000a5cf) indicator_popup_pane_cp6

0x574a,	// (0x0000574a) list_set_graphic_pane_copy1_ParamLimits

0x0024,	// (0x00000024) bg_popup_window_pane_cp23

0xa694,	// (0x0000a694) popup_tmo_big_image_note_window_g1

0xa69d,	// (0x0000a69d) popup_tmo_big_image_note_window_t1

0xa6ad,	// (0x0000a6ad) popup_tmo_big_image_note_window_t2

0xa6bd,	// (0x0000a6bd) popup_tmo_big_image_note_window_t3

0x0002,

0xb423,	// (0x0000b423) popup_tmo_big_image_note_window_t

0x658e,	// (0x0000658e) cell_ai5_widget_lrg_icon_pane_g1

0xa6cd,	// (0x0000a6cd) cell_ai5_widget_lrg_icon_pane_t1

0xa6db,	// (0x0000a6db) cell_ai5_widget_list_row_pane_ParamLimits

0xa6db,	// (0x0000a6db) cell_ai5_widget_list_row_pane

0xa6f2,	// (0x0000a6f2) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa6f2,	// (0x0000a6f2) cell_ai5_widget_list_row_pane_g1

0xa6ff,	// (0x0000a6ff) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa6ff,	// (0x0000a6ff) cell_ai5_widget_list_row_pane_t1

0xa72d,	// (0x0000a72d) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa72d,	// (0x0000a72d) cell_ai5_widget_list_row_pane_t2

0x0002,

0xb42a,	// (0x0000b42a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xb42a,	// (0x0000b42a) cell_ai5_widget_list_row_pane_t

0x0024,	// (0x00000024) main_fep_vtchi_ss_pane

0xa771,	// (0x0000a771) popup_fep_char_pre_window

0xa779,	// (0x0000a779) popup_fep_ituss_window

0xa79a,	// (0x0000a79a) popup_fep_vkbss_window

0xa7b9,	// (0x0000a7b9) grid_vkbss_keypad_pane_ParamLimits

0xa7b9,	// (0x0000a7b9) grid_vkbss_keypad_pane

0xa7c9,	// (0x0000a7c9) ituss_keypad_pane

0xa7e4,	// (0x0000a7e4) aid_vkbss_key_offset_ParamLimits

0xa7e4,	// (0x0000a7e4) aid_vkbss_key_offset

0xa7f0,	// (0x0000a7f0) cell_vkbss_key_pane_ParamLimits

0xa7f0,	// (0x0000a7f0) cell_vkbss_key_pane

0x33d0,	// (0x000033d0) bg_cell_vkbss_key_g1_ParamLimits

0x33d0,	// (0x000033d0) bg_cell_vkbss_key_g1

0xa806,	// (0x0000a806) cell_vkbss_key_3p_pane_ParamLimits

0xa806,	// (0x0000a806) cell_vkbss_key_3p_pane

0xa820,	// (0x0000a820) cell_vkbss_key_g1_ParamLimits

0xa820,	// (0x0000a820) cell_vkbss_key_g1

0xa83a,	// (0x0000a83a) cell_vkbss_key_t1_ParamLimits

0xa83a,	// (0x0000a83a) cell_vkbss_key_t1

0xa865,	// (0x0000a865) cell_ituss_key_pane_ParamLimits

0xa865,	// (0x0000a865) cell_ituss_key_pane

0xa876,	// (0x0000a876) bg_cell_ituss_key_g1_ParamLimits

0xa876,	// (0x0000a876) bg_cell_ituss_key_g1

0xa882,	// (0x0000a882) cell_ituss_key_pane_g1_ParamLimits

0xa882,	// (0x0000a882) cell_ituss_key_pane_g1

0xa896,	// (0x0000a896) cell_ituss_key_pane_g2_ParamLimits

0xa896,	// (0x0000a896) cell_ituss_key_pane_g2

0x0002,

0xb431,	// (0x0000b431) cell_ituss_key_pane_g_ParamLimits

0xb431,	// (0x0000b431) cell_ituss_key_pane_g

0xa8d4,	// (0x0000a8d4) cell_ituss_key_t1_ParamLimits

0xa8d4,	// (0x0000a8d4) cell_ituss_key_t1

0xa90e,	// (0x0000a90e) cell_ituss_key_t2_ParamLimits

0xa90e,	// (0x0000a90e) cell_ituss_key_t2

0xa93f,	// (0x0000a93f) cell_ituss_key_t3_ParamLimits

0xa93f,	// (0x0000a93f) cell_ituss_key_t3

0xa90e,	// (0x0000a90e) cell_ituss_key_t4_ParamLimits

0xa90e,	// (0x0000a90e) cell_ituss_key_t4

0x0004,

0xb438,	// (0x0000b438) cell_ituss_key_t_ParamLimits

0xb438,	// (0x0000b438) cell_ituss_key_t

0xa982,	// (0x0000a982) cell_vkbss_key_3p_pane_g1

0xa98a,	// (0x0000a98a) cell_vkbss_key_3p_pane_g2

0xa992,	// (0x0000a992) cell_vkbss_key_3p_pane_g3

0x0002,

0xb443,	// (0x0000b443) cell_vkbss_key_3p_pane_g

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp02

0xa99a,	// (0x0000a99a) popup_fep_char_pre_window_t1

0xee04,	// (0x0000ee04) main_ai5_sk_pane

0xa2ae,	// (0x0000a2ae) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa2ba,	// (0x0000a2ba) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa2cf,	// (0x0000a2cf) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa2db,	// (0x0000a2db) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xb415,	// (0x0000b415) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa2e7,	// (0x0000a2e7) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x1349,	// (0x00001349) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf241,	// (0x0000f241) main_ai5_sk_pane_g1

0x3caa,	// (0x00003caa) popup_query_code_window_g1

0xa78f,	// (0x0000a78f) popup_fep_vkb_icf_pane

0xa7a3,	// (0x0000a7a3) popup_fep_vtchi_icf_pane

0xa9b2,	// (0x0000a9b2) bg_icf_pane

0xa9be,	// (0x0000a9be) list_vkb_icf_pane

0x2ad0,	// (0x00002ad0) bg_icf_pane_cp01

0xa9ca,	// (0x0000a9ca) vtchi_icf_list_pane

0xa9db,	// (0x0000a9db) list_vkb_icf_pane_t1_ParamLimits

0xa9db,	// (0x0000a9db) list_vkb_icf_pane_t1

0xa9f3,	// (0x0000a9f3) vtchi_icf_list_pane_t1_ParamLimits

0xa9f3,	// (0x0000a9f3) vtchi_icf_list_pane_t1

0xa779,	// (0x0000a779) popup_fep_ituss_window_ParamLimits

0xa7a3,	// (0x0000a7a3) popup_fep_vtchi_icf_pane_ParamLimits

0xa7c9,	// (0x0000a7c9) ituss_keypad_pane_ParamLimits

0xa7d8,	// (0x0000a7d8) ituss_sks_pane

0xa9b2,	// (0x0000a9b2) bg_icf_pane_ParamLimits

0xa755,	// (0x0000a755) icf_edit_indi_pane_ParamLimits

0xa755,	// (0x0000a755) icf_edit_indi_pane

0xa9be,	// (0x0000a9be) list_vkb_icf_pane_ParamLimits

0x2ad0,	// (0x00002ad0) bg_icf_pane_cp01_ParamLimits

0xa764,	// (0x0000a764) icf_edit_indi_pane_cp01_ParamLimits

0xa764,	// (0x0000a764) icf_edit_indi_pane_cp01

0xa9d2,	// (0x0000a9d2) vtchi_query_pane

0x6a10,	// (0x00006a10) icf_edit_indi_pane_g1_ParamLimits

0x6a10,	// (0x00006a10) icf_edit_indi_pane_g1

0xaa7f,	// (0x0000aa7f) icf_edit_indi_pane_g2_ParamLimits

0xaa7f,	// (0x0000aa7f) icf_edit_indi_pane_g2

0x0001,

0xb45b,	// (0x0000b45b) icf_edit_indi_pane_g_ParamLimits

0xb45b,	// (0x0000b45b) icf_edit_indi_pane_g

0xaa8e,	// (0x0000aa8e) icf_edit_indi_pane_t1

0xaa15,	// (0x0000aa15) bg_input_focus_pane_cp042

0x0d2d,	// (0x00000d2d) vtchi_button_pane

0xaa1e,	// (0x0000aa1e) vtchi_query_pane_t1

0xaa2c,	// (0x0000aa2c) vtchi_query_pane_t2

0xaa3a,	// (0x0000aa3a) vtchi_query_pane_t3

0x0002,

0xb44a,	// (0x0000b44a) vtchi_query_pane_t

0x0024,	// (0x00000024) bg_button_pane_cp13

0xaa48,	// (0x0000aa48) vtchi_button_pane_g1

0xaa50,	// (0x0000aa50) ituss_sks_pane_g1

0xaa5b,	// (0x0000aa5b) ituss_sks_pane_g2

0x0001,

0xb451,	// (0x0000b451) ituss_sks_pane_g

0xaa63,	// (0x0000aa63) ituss_sks_pane_t1

0xaa71,	// (0x0000aa71) ituss_sks_pane_t2

0x0001,

0xb456,	// (0x0000b456) ituss_sks_pane_t

0x5f61,	// (0x00005f61) indicator_nsta_pane_cp_g1

0x5f6a,	// (0x00005f6a) indicator_nsta_pane_cp_g2

0x5f72,	// (0x00005f72) indicator_nsta_pane_cp_g3

0x5f7a,	// (0x00005f7a) indicator_nsta_pane_cp_g4

0x5f82,	// (0x00005f82) indicator_nsta_pane_cp_g5

0x5f82,	// (0x00005f82) indicator_nsta_pane_cp_g6

0x0005,

0xafff,	// (0x0000afff) indicator_nsta_pane_cp_g

0xeba2,	// (0x0000eba2) cell_graphic2_pane_t2_ParamLimits

0xeba2,	// (0x0000eba2) cell_graphic2_pane_t2

0x0001,

0xf4a8,	// (0x0000f4a8) cell_graphic2_pane_t_ParamLimits

0xf4a8,	// (0x0000f4a8) cell_graphic2_pane_t

0xebd5,	// (0x0000ebd5) cell_graphic2_control_pane_t1

0xc042,	// (0x0000c042) signal_pane_g3_ParamLimits

0xc042,	// (0x0000c042) signal_pane_g3

0xc056,	// (0x0000c056) signal_pane_g4_ParamLimits

0xc056,	// (0x0000c056) signal_pane_g4

0xa73f,	// (0x0000a73f) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa73f,	// (0x0000a73f) cell_ai5_widget_list_row_pane_t3

0xa8c2,	// (0x0000a8c2) cell_ituss_key_pane_t1_ParamLimits

0xa8c2,	// (0x0000a8c2) cell_ituss_key_pane_t1

0x38a3,	// (0x000038a3) form_field_data_wide_pane_vc_t2_ParamLimits

0x38a3,	// (0x000038a3) form_field_data_wide_pane_vc_t2

0x38b7,	// (0x000038b7) form_field_data_wide_pane_vc_t3_ParamLimits

0x38b7,	// (0x000038b7) form_field_data_wide_pane_vc_t3

0x0002,

0xad46,	// (0x0000ad46) form_field_data_wide_pane_vc_t_ParamLimits

0xad46,	// (0x0000ad46) form_field_data_wide_pane_vc_t

0x5c2d,	// (0x00005c2d) form_field_slider_wide_pane_vc_t3_ParamLimits

0x5c2d,	// (0x00005c2d) form_field_slider_wide_pane_vc_t3

0x5d07,	// (0x00005d07) form_field_popup_wide_pane_vc_t2_ParamLimits

0x5d07,	// (0x00005d07) form_field_popup_wide_pane_vc_t2

0x5d1e,	// (0x00005d1e) form_field_popup_wide_pane_vc_t3_ParamLimits

0x5d1e,	// (0x00005d1e) form_field_popup_wide_pane_vc_t3

0x0002,

0xafee,	// (0x0000afee) form_field_popup_wide_pane_vc_t_ParamLimits

0xafee,	// (0x0000afee) form_field_popup_wide_pane_vc_t

0xeea2,	// (0x0000eea2) aid_fshwr2_btn_pane_ParamLimits

0xeeb3,	// (0x0000eeb3) aid_fshwr2_syb_pane_ParamLimits

0xeec4,	// (0x0000eec4) aid_fshwr2_txt_pane_ParamLimits

0x1349,	// (0x00001349) fshwr2_bg_pane_ParamLimits

0xeed0,	// (0x0000eed0) fshwr2_func_candi_pane_ParamLimits

0xeeef,	// (0x0000eeef) fshwr2_hwr_syb_pane_ParamLimits

0xef0a,	// (0x0000ef0a) fshwr2_icf_pane_ParamLimits

0x5ba1,	// (0x00005ba1) list_double_graphic_pane_vc_g4_ParamLimits

0x5ba1,	// (0x00005ba1) list_double_graphic_pane_vc_g4

0xa8b6,	// (0x0000a8b6) cell_ituss_key_pane_g3_ParamLimits

0xa8b6,	// (0x0000a8b6) cell_ituss_key_pane_g3

0xa970,	// (0x0000a970) cell_ituss_key_t5_ParamLimits

0xa970,	// (0x0000a970) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Normal
