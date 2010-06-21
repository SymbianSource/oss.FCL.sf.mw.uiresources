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

#include "aknlayoutscalable_abrw_pqp_av_qvga_prt_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0001da16 };

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
0x983a,	// (0x00027250) Screen

0x9844,	// (0x0002725a) application_window_ParamLimits

0x9844,	// (0x0002725a) application_window

0x4c57,	// (0x0002266d) screen_g1

0x988d,	// (0x000272a3) area_bottom_pane_ParamLimits

0x988d,	// (0x000272a3) area_bottom_pane

0x4c61,	// (0x00022677) area_top_pane_ParamLimits

0x4c61,	// (0x00022677) area_top_pane

0x9945,	// (0x0002735b) main_pane_ParamLimits

0x9945,	// (0x0002735b) main_pane

0x4cd9,	// (0x000226ef) misc_graphics

0xac91,	// (0x000286a7) battery_pane_ParamLimits

0xac91,	// (0x000286a7) battery_pane

0x67a0,	// (0x000241b6) bg_status_flat_pane_g8

0x67a8,	// (0x000241be) bg_status_flat_pane_g9

0x5eb9,	// (0x000238cf) context_pane_ParamLimits

0x5eb9,	// (0x000238cf) context_pane

0xadc3,	// (0x000287d9) navi_pane_ParamLimits

0xadc3,	// (0x000287d9) navi_pane

0xae2f,	// (0x00028845) signal_pane_ParamLimits

0xae2f,	// (0x00028845) signal_pane

0x0008,

0xf86f,	// (0x0002d285) bg_status_flat_pane_g

0xae90,	// (0x000288a6) status_pane_g1_ParamLimits

0xae90,	// (0x000288a6) status_pane_g1

0x606d,	// (0x00023a83) status_pane_g2_ParamLimits

0x606d,	// (0x00023a83) status_pane_g2

0x5f1f,	// (0x00023935) status_pane_g3_ParamLimits

0x5f1f,	// (0x00023935) status_pane_g3

0x0004,

0xf796,	// (0x0002d1ac) status_pane_g_ParamLimits

0xf796,	// (0x0002d1ac) status_pane_g

0xae9c,	// (0x000288b2) title_pane_ParamLimits

0xae9c,	// (0x000288b2) title_pane

0xaed9,	// (0x000288ef) uni_indicator_pane_ParamLimits

0xaed9,	// (0x000288ef) uni_indicator_pane

0x5e10,	// (0x00023826) bg_list_pane_ParamLimits

0x5e10,	// (0x00023826) bg_list_pane

0xd50b,	// (0x0002af21) find_pane

0xa792,	// (0x000281a8) listscroll_app_pane_ParamLimits

0xa792,	// (0x000281a8) listscroll_app_pane

0x5e30,	// (0x00023846) listscroll_form_pane

0xd513,	// (0x0002af29) listscroll_gen_pane_ParamLimits

0xd513,	// (0x0002af29) listscroll_gen_pane

0xa79e,	// (0x000281b4) listscroll_set_pane

0x9ec9,	// (0x000278df) main_idle_act_pane

0x5c7b,	// (0x00023691) main_idle_trad_pane

0x5c7b,	// (0x00023691) main_list_empty_pane

0x545d,	// (0x00022e73) main_midp_pane

0x5e4a,	// (0x00023860) main_pane_g1_ParamLimits

0x5e4a,	// (0x00023860) main_pane_g1

0xa7b4,	// (0x000281ca) popup_ai_message_window_ParamLimits

0xa7b4,	// (0x000281ca) popup_ai_message_window

0xa84a,	// (0x00028260) popup_fep_china_uni_window_ParamLimits

0xa84a,	// (0x00028260) popup_fep_china_uni_window

0xa888,	// (0x0002829e) popup_fep_japan_candidate_window_ParamLimits

0xa888,	// (0x0002829e) popup_fep_japan_candidate_window

0xa8a6,	// (0x000282bc) popup_fep_japan_predictive_window_ParamLimits

0xa8a6,	// (0x000282bc) popup_fep_japan_predictive_window

0xa8d2,	// (0x000282e8) popup_find_window

0xa8df,	// (0x000282f5) popup_grid_graphic_window_ParamLimits

0xa8df,	// (0x000282f5) popup_grid_graphic_window

0xa8fd,	// (0x00028313) popup_large_graphic_colour_window

0xa91c,	// (0x00028332) popup_menu_window_ParamLimits

0xa91c,	// (0x00028332) popup_menu_window

0xaa54,	// (0x0002846a) popup_note_image_window

0xaa42,	// (0x00028458) popup_note_wait_window_ParamLimits

0xaa42,	// (0x00028458) popup_note_wait_window

0xaa42,	// (0x00028458) popup_note_window_ParamLimits

0xaa42,	// (0x00028458) popup_note_window

0xaaa8,	// (0x000284be) popup_query_code_window_ParamLimits

0xaaa8,	// (0x000284be) popup_query_code_window

0xaaba,	// (0x000284d0) popup_query_data_code_window_ParamLimits

0xaaba,	// (0x000284d0) popup_query_data_code_window

0xaacf,	// (0x000284e5) popup_query_data_window_ParamLimits

0xaacf,	// (0x000284e5) popup_query_data_window

0xaae5,	// (0x000284fb) popup_query_sat_info_window_ParamLimits

0xaae5,	// (0x000284fb) popup_query_sat_info_window

0xab16,	// (0x0002852c) popup_snote_single_graphic_window_ParamLimits

0xab16,	// (0x0002852c) popup_snote_single_graphic_window

0xab16,	// (0x0002852c) popup_snote_single_text_window_ParamLimits

0xab16,	// (0x0002852c) popup_snote_single_text_window

0xab29,	// (0x0002853f) popup_sub_window_general

0xac2d,	// (0x00028643) popup_window_general_ParamLimits

0xac2d,	// (0x00028643) popup_window_general

0x5e58,	// (0x0002386e) power_save_pane

0xa607,	// (0x0002801d) control_pane_g1_ParamLimits

0xa607,	// (0x0002801d) control_pane_g1

0xa628,	// (0x0002803e) control_pane_g2_ParamLimits

0xa628,	// (0x0002803e) control_pane_g2

0x5e02,	// (0x00023818) control_pane_g3_ParamLimits

0x5e02,	// (0x00023818) control_pane_g3

0x0007,

0xf77e,	// (0x0002d194) control_pane_g_ParamLimits

0xf77e,	// (0x0002d194) control_pane_g

0xa691,	// (0x000280a7) control_pane_t1_ParamLimits

0xa691,	// (0x000280a7) control_pane_t1

0xa6e3,	// (0x000280f9) control_pane_t2_ParamLimits

0xa6e3,	// (0x000280f9) control_pane_t2

0x0002,

0xf78f,	// (0x0002d1a5) control_pane_t_ParamLimits

0xf78f,	// (0x0002d1a5) control_pane_t

0x5daa,	// (0x000237c0) navi_navi_volume_pane_cp1

0x5db2,	// (0x000237c8) status_small_icon_pane

0x5dba,	// (0x000237d0) status_small_pane_g1_ParamLimits

0x5dba,	// (0x000237d0) status_small_pane_g1

0xa586,	// (0x00027f9c) status_small_pane_g2_ParamLimits

0xa586,	// (0x00027f9c) status_small_pane_g2

0xa592,	// (0x00027fa8) status_small_pane_g3_ParamLimits

0xa592,	// (0x00027fa8) status_small_pane_g3

0xa59e,	// (0x00027fb4) status_small_pane_g4_ParamLimits

0xa59e,	// (0x00027fb4) status_small_pane_g4

0xa5aa,	// (0x00027fc0) status_small_pane_g5_ParamLimits

0xa5aa,	// (0x00027fc0) status_small_pane_g5

0x5dee,	// (0x00023804) status_small_pane_g6_ParamLimits

0x5dee,	// (0x00023804) status_small_pane_g6

0x0007,

0xf76d,	// (0x0002d183) status_small_pane_g_ParamLimits

0xf76d,	// (0x0002d183) status_small_pane_g

0xa5d9,	// (0x00027fef) status_small_pane_t1

0xa5f3,	// (0x00028009) status_small_wait_pane_ParamLimits

0xa5f3,	// (0x00028009) status_small_wait_pane

0xa1e4,	// (0x00027bfa) aid_levels_signal_ParamLimits

0xa1e4,	// (0x00027bfa) aid_levels_signal

0xa1f5,	// (0x00027c0b) signal_pane_g1_ParamLimits

0xa1f5,	// (0x00027c0b) signal_pane_g1

0xa20b,	// (0x00027c21) signal_pane_g2_ParamLimits

0xa20b,	// (0x00027c21) signal_pane_g2

0x0003,

0xf6fe,	// (0x0002d114) signal_pane_g_ParamLimits

0xf6fe,	// (0x0002d114) signal_pane_g

0x5820,	// (0x00023236) context_pane_g1

0x9b44,	// (0x0002755a) title_pane_g1

0x9b6e,	// (0x00027584) title_pane_t1

0x4cef,	// (0x00022705) title_pane_t2

0x4d15,	// (0x0002272b) title_pane_t3

0x0002,

0xf557,	// (0x0002cf6d) title_pane_t

0xaeef,	// (0x00028905) aid_levels_battery_ParamLimits

0xaeef,	// (0x00028905) aid_levels_battery

0xaf02,	// (0x00028918) battery_pane_g1_ParamLimits

0xaf02,	// (0x00028918) battery_pane_g1

0xaf17,	// (0x0002892d) battery_pane_g2_ParamLimits

0xaf17,	// (0x0002892d) battery_pane_g2

0x0001,

0xf7a1,	// (0x0002d1b7) battery_pane_g_ParamLimits

0xf7a1,	// (0x0002d1b7) battery_pane_g

0xb2f8,	// (0x00028d0e) uni_indicator_pane_g1

0xb30e,	// (0x00028d24) uni_indicator_pane_g2

0xb324,	// (0x00028d3a) uni_indicator_pane_g3

0x0005,

0xf917,	// (0x0002d32d) uni_indicator_pane_g

0x5383,	// (0x00022d99) navi_icon_pane_ParamLimits

0x5383,	// (0x00022d99) navi_icon_pane

0x4cd9,	// (0x000226ef) navi_midp_pane

0x4cd9,	// (0x000226ef) navi_navi_pane

0x5383,	// (0x00022d99) navi_text_pane_ParamLimits

0x5383,	// (0x00022d99) navi_text_pane

0x4c57,	// (0x0002266d) status_small_wait_pane_g1

0x502a,	// (0x00022a40) status_small_wait_pane_g2

0x0001,

0xf912,	// (0x0002d328) status_small_wait_pane_g

0x713c,	// (0x00024b52) navi_navi_icon_text_pane

0x7156,	// (0x00024b6c) navi_navi_pane_g1_ParamLimits

0x7156,	// (0x00024b6c) navi_navi_pane_g1

0x7144,	// (0x00024b5a) navi_navi_pane_g2_ParamLimits

0x7144,	// (0x00024b5a) navi_navi_pane_g2

0x0001,

0xf8e0,	// (0x0002d2f6) navi_navi_pane_g_ParamLimits

0xf8e0,	// (0x0002d2f6) navi_navi_pane_g

0x7168,	// (0x00024b7e) navi_navi_tabs_pane

0x713c,	// (0x00024b52) navi_navi_text_pane

0x713c,	// (0x00024b52) navi_navi_volume_pane

0x6ce6,	// (0x000246fc) navi_text_pane_t1

0x6cda,	// (0x000246f0) navi_icon_pane_g1

0x6c2e,	// (0x00024644) navi_navi_text_pane_t1

0xb2c2,	// (0x00028cd8) navi_navi_volume_pane_g1

0xb2ca,	// (0x00028ce0) volume_small_pane

0xb234,	// (0x00028c4a) navi_navi_icon_text_pane_g1

0xb23c,	// (0x00028c52) navi_navi_icon_text_pane_t1

0x67e8,	// (0x000241fe) navi_tabs_2_long_pane

0x67e8,	// (0x000241fe) navi_tabs_2_pane

0x67e8,	// (0x000241fe) navi_tabs_3_long_pane

0x67e8,	// (0x000241fe) navi_tabs_3_pane

0x67e8,	// (0x000241fe) navi_tabs_4_pane

0xb214,	// (0x00028c2a) tabs_2_active_pane_ParamLimits

0xb214,	// (0x00028c2a) tabs_2_active_pane

0xb224,	// (0x00028c3a) tabs_2_passive_pane_ParamLimits

0xb224,	// (0x00028c3a) tabs_2_passive_pane

0xb1e2,	// (0x00028bf8) tabs_3_active_pane_ParamLimits

0xb1e2,	// (0x00028bf8) tabs_3_active_pane

0xb1f2,	// (0x00028c08) tabs_3_passive_pane_ParamLimits

0xb1f2,	// (0x00028c08) tabs_3_passive_pane

0xb203,	// (0x00028c19) tabs_3_passive_pane_cp_ParamLimits

0xb203,	// (0x00028c19) tabs_3_passive_pane_cp

0xb19e,	// (0x00028bb4) tabs_4_active_pane_ParamLimits

0xb19e,	// (0x00028bb4) tabs_4_active_pane

0xb1af,	// (0x00028bc5) tabs_4_passive_pane_ParamLimits

0xb1af,	// (0x00028bc5) tabs_4_passive_pane

0xb1c0,	// (0x00028bd6) tabs_4_passive_pane_cp_ParamLimits

0xb1c0,	// (0x00028bd6) tabs_4_passive_pane_cp

0xb1d1,	// (0x00028be7) tabs_4_passive_pane_cp2_ParamLimits

0xb1d1,	// (0x00028be7) tabs_4_passive_pane_cp2

0xb17e,	// (0x00028b94) tabs_2_long_active_pane_ParamLimits

0xb17e,	// (0x00028b94) tabs_2_long_active_pane

0xb18e,	// (0x00028ba4) tabs_2_long_passive_pane_ParamLimits

0xb18e,	// (0x00028ba4) tabs_2_long_passive_pane

0xb149,	// (0x00028b5f) tabs_3_long_active_pane_ParamLimits

0xb149,	// (0x00028b5f) tabs_3_long_active_pane

0xb15a,	// (0x00028b70) tabs_3_long_passive_pane_ParamLimits

0xb15a,	// (0x00028b70) tabs_3_long_passive_pane

0xb16d,	// (0x00028b83) tabs_3_long_passive_pane_cp_ParamLimits

0xb16d,	// (0x00028b83) tabs_3_long_passive_pane_cp

0xb0ef,	// (0x00028b05) volume_small_pane_g1

0xb0f8,	// (0x00028b0e) volume_small_pane_g2

0xb101,	// (0x00028b17) volume_small_pane_g3

0xb10a,	// (0x00028b20) volume_small_pane_g4

0xb113,	// (0x00028b29) volume_small_pane_g5

0xb11c,	// (0x00028b32) volume_small_pane_g6

0xb125,	// (0x00028b3b) volume_small_pane_g7

0xb12e,	// (0x00028b44) volume_small_pane_g8

0xb137,	// (0x00028b4d) volume_small_pane_g9

0xb140,	// (0x00028b56) volume_small_pane_g10

0x0009,

0xf8ac,	// (0x0002d2c2) volume_small_pane_g

0x4d3d,	// (0x00022753) bg_active_tab_pane_cp2_ParamLimits

0x4d3d,	// (0x00022753) bg_active_tab_pane_cp2

0x4d35,	// (0x0002274b) tabs_3_active_pane_g1

0x9bd6,	// (0x000275ec) tabs_3_active_pane_t1

0x4d3d,	// (0x00022753) bg_passive_tab_pane_cp2_ParamLimits

0x4d3d,	// (0x00022753) bg_passive_tab_pane_cp2

0x4d35,	// (0x0002274b) tabs_3_passive_pane_g1

0x9bd6,	// (0x000275ec) tabs_3_passive_pane_t1

0x4d3d,	// (0x00022753) bg_active_tab_pane_cp3_ParamLimits

0x4d3d,	// (0x00022753) bg_active_tab_pane_cp3

0x9be8,	// (0x000275fe) tabs_4_active_pane_g1

0x9bf0,	// (0x00027606) tabs_4_active_pane_t1

0x4d3d,	// (0x00022753) bg_passive_tab_pane_cp3_ParamLimits

0x4d3d,	// (0x00022753) bg_passive_tab_pane_cp3

0x9be8,	// (0x000275fe) tabs_4_1_passive_pane_g1

0x9bf0,	// (0x00027606) tabs_4_1_passive_pane_t1

0x545d,	// (0x00022e73) list_highlight_pane_cp2

0xb441,	// (0x00028e57) list_set_pane_ParamLimits

0xb441,	// (0x00028e57) list_set_pane

0xb4cf,	// (0x00028ee5) main_pane_set_t1_ParamLimits

0xb4cf,	// (0x00028ee5) main_pane_set_t1

0xb4ef,	// (0x00028f05) main_pane_set_t2_ParamLimits

0xb4ef,	// (0x00028f05) main_pane_set_t2

0xb501,	// (0x00028f17) main_pane_set_t3_ParamLimits

0xb501,	// (0x00028f17) main_pane_set_t3

0xb513,	// (0x00028f29) main_pane_set_t4_ParamLimits

0xb513,	// (0x00028f29) main_pane_set_t4

0x0003,

0xf97c,	// (0x0002d392) main_pane_set_t_ParamLimits

0xf97c,	// (0x0002d392) main_pane_set_t

0xb525,	// (0x00028f3b) setting_code_pane

0xb52d,	// (0x00028f43) setting_slider_graphic_pane

0xb52d,	// (0x00028f43) setting_slider_pane

0xb52d,	// (0x00028f43) setting_text_pane

0xb52d,	// (0x00028f43) setting_volume_pane

0x9c02,	// (0x00027618) volume_set_pane

0x4d3d,	// (0x00022753) bg_set_opt_pane_cp

0x9c0a,	// (0x00027620) setting_slider_pane_t1

0x9c20,	// (0x00027636) setting_slider_pane_t2

0x9c39,	// (0x0002764f) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0002cf74) setting_slider_pane_t

0x9c50,	// (0x00027666) slider_set_pane

0x4cd9,	// (0x000226ef) bg_set_opt_pane_cp2

0x4d4b,	// (0x00022761) setting_slider_graphic_pane_g1

0x9c66,	// (0x0002767c) setting_slider_graphic_pane_t1

0x9c75,	// (0x0002768b) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0002cf7b) setting_slider_graphic_pane_t

0x9c84,	// (0x0002769a) slider_set_pane_cp

0x4cd9,	// (0x000226ef) input_focus_pane_cp1

0x7122,	// (0x00024b38) list_set_text_pane

0x4c57,	// (0x0002266d) setting_text_pane_g1

0x4cd9,	// (0x000226ef) input_focus_pane_cp2

0x4c57,	// (0x0002266d) setting_code_pane_g1

0x4d54,	// (0x0002276a) setting_code_pane_t1

0xcdf1,	// (0x0002a807) set_text_pane_t1_ParamLimits

0xcdf1,	// (0x0002a807) set_text_pane_t1

0x5332,	// (0x00022d48) set_opt_bg_pane_g1

0x533a,	// (0x00022d50) set_opt_bg_pane_g2

0xb401,	// (0x00028e17) set_opt_bg_pane_g3

0x534a,	// (0x00022d60) set_opt_bg_pane_g4

0x5352,	// (0x00022d68) set_opt_bg_pane_g5

0x535a,	// (0x00022d70) set_opt_bg_pane_g6

0xb409,	// (0x00028e1f) set_opt_bg_pane_g7

0xb411,	// (0x00028e27) set_opt_bg_pane_g8

0xb419,	// (0x00028e2f) set_opt_bg_pane_g9

0x0008,

0xf969,	// (0x0002d37f) set_opt_bg_pane_g

0x7115,	// (0x00024b2b) slider_set_pane_g1

0xb39d,	// (0x00028db3) slider_set_pane_g2

0x0006,

0xf95a,	// (0x0002d370) slider_set_pane_g

0xb339,	// (0x00028d4f) volume_set_pane_g1

0xb341,	// (0x00028d57) volume_set_pane_g2

0xb349,	// (0x00028d5f) volume_set_pane_g3

0xb351,	// (0x00028d67) volume_set_pane_g4

0xb359,	// (0x00028d6f) volume_set_pane_g5

0xb361,	// (0x00028d77) volume_set_pane_g6

0xb369,	// (0x00028d7f) volume_set_pane_g7

0xb371,	// (0x00028d87) volume_set_pane_g8

0xb379,	// (0x00028d8f) volume_set_pane_g9

0xb381,	// (0x00028d97) volume_set_pane_g10

0x0009,

0xf932,	// (0x0002d348) volume_set_pane_g

0x9c8c,	// (0x000276a2) indicator_pane_ParamLimits

0x9c8c,	// (0x000276a2) indicator_pane

0x9c98,	// (0x000276ae) main_idle_pane_g2_ParamLimits

0x9c98,	// (0x000276ae) main_idle_pane_g2

0x9cbc,	// (0x000276d2) main_pane_idle_g1_ParamLimits

0x9cbc,	// (0x000276d2) main_pane_idle_g1

0x4d62,	// (0x00022778) popup_clock_digital_analogue_window_ParamLimits

0x4d62,	// (0x00022778) popup_clock_digital_analogue_window

0x9cc9,	// (0x000276df) soft_indicator_pane_ParamLimits

0x9cc9,	// (0x000276df) soft_indicator_pane

0x9cd5,	// (0x000276eb) wallpaper_pane_ParamLimits

0x9cd5,	// (0x000276eb) wallpaper_pane

0x4c57,	// (0x0002266d) wallpaper_pane_g1

0x9ce1,	// (0x000276f7) indicator_pane_g1_ParamLimits

0x9ce1,	// (0x000276f7) indicator_pane_g1

0x7287,	// (0x00024c9d) navi_navi_icon_text_pane_srt_g1

0x4d90,	// (0x000227a6) soft_indicator_pane_t1

0x4daa,	// (0x000227c0) aid_ps_area_pane

0x9ced,	// (0x00027703) aid_ps_clock_pane

0x4dbb,	// (0x000227d1) aid_ps_indicator_pane

0x4dc7,	// (0x000227dd) indicator_ps_pane_ParamLimits

0x4dc7,	// (0x000227dd) indicator_ps_pane

0x4dd6,	// (0x000227ec) power_save_pane_g1_ParamLimits

0x4dd6,	// (0x000227ec) power_save_pane_g1

0x4de2,	// (0x000227f8) power_save_pane_g2_ParamLimits

0x4de2,	// (0x000227f8) power_save_pane_g2

0x9852,	// (0x00027268) aid_navinavi_width_pane

0x4daa,	// (0x000227c0) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0002cf80) power_save_pane_g_ParamLimits

0xf56a,	// (0x0002cf80) power_save_pane_g

0x4df0,	// (0x00022806) power_save_pane_t1_ParamLimits

0x4df0,	// (0x00022806) power_save_pane_t1

0x9ced,	// (0x00027703) aid_ps_clock_pane_ParamLimits

0x4dbb,	// (0x000227d1) aid_ps_indicator_pane_ParamLimits

0x4e02,	// (0x00022818) power_save_pane_t4_ParamLimits

0x4e02,	// (0x00022818) power_save_pane_t4

0x0001,

0xf56f,	// (0x0002cf85) power_save_pane_t_ParamLimits

0xf56f,	// (0x0002cf85) power_save_pane_t

0x4e2c,	// (0x00022842) power_save_t3_ParamLimits

0x4e2c,	// (0x00022842) power_save_t3

0x4e17,	// (0x0002282d) power_save_t2_ParamLimits

0x4e17,	// (0x0002282d) power_save_t2

0x4e41,	// (0x00022857) indicator_ps_pane_g1

0x9cf9,	// (0x0002770f) ai_gene_pane_ParamLimits

0x9cf9,	// (0x0002770f) ai_gene_pane

0x9d05,	// (0x0002771b) ai_links_pane_ParamLimits

0x9d05,	// (0x0002771b) ai_links_pane

0x9d11,	// (0x00027727) indicator_pane_cp1_ParamLimits

0x9d11,	// (0x00027727) indicator_pane_cp1

0x9d1d,	// (0x00027733) main_pane_idle_g1_cp_ParamLimits

0x9d1d,	// (0x00027733) main_pane_idle_g1_cp

0x4e4a,	// (0x00022860) popup_ai_links_title_window

0x9d29,	// (0x0002773f) soft_indicator_pane_cp1_ParamLimits

0x9d29,	// (0x0002773f) soft_indicator_pane_cp1

0x6f6b,	// (0x00024981) ai_links_pane_g1

0x6f74,	// (0x0002498a) grid_ai_links_pane

0xb2ef,	// (0x00028d05) ai_gene_pane_1

0x6f59,	// (0x0002496f) ai_gene_pane_2

0x6f62,	// (0x00024978) list_highlight_pane_cp4

0xb2d3,	// (0x00028ce9) cell_ai_link_pane_ParamLimits

0xb2d3,	// (0x00028ce9) cell_ai_link_pane

0x6f51,	// (0x00024967) cell_ai_link_pane_g1

0x502a,	// (0x00022a40) cell_ai_link_pane_g2

0x0001,

0xf90d,	// (0x0002d323) cell_ai_link_pane_g

0x4cd9,	// (0x000226ef) grid_highlight_cp2

0x4cd9,	// (0x000226ef) bg_popup_sub_pane_cp1

0x4e61,	// (0x00022877) popup_ai_links_title_window_t1

0x6ea3,	// (0x000248b9) ai_gene_pane_1_g1_ParamLimits

0x6ea3,	// (0x000248b9) ai_gene_pane_1_g1

0x6eaf,	// (0x000248c5) ai_gene_pane_1_g2_ParamLimits

0x6eaf,	// (0x000248c5) ai_gene_pane_1_g2

0x0001,

0xf903,	// (0x0002d319) ai_gene_pane_1_g_ParamLimits

0xf903,	// (0x0002d319) ai_gene_pane_1_g

0x6ebc,	// (0x000248d2) ai_gene_pane_1_t1_ParamLimits

0x6ebc,	// (0x000248d2) ai_gene_pane_1_t1

0x6ef0,	// (0x00024906) grid_ai_soft_ind_pane

0x6e8e,	// (0x000248a4) ai_gene_pane_2_t1_ParamLimits

0x6e8e,	// (0x000248a4) ai_gene_pane_2_t1

0x9d35,	// (0x0002774b) main_pane_empty_t1_ParamLimits

0x9d35,	// (0x0002774b) main_pane_empty_t1

0x9d52,	// (0x00027768) main_pane_empty_t2_ParamLimits

0x9d52,	// (0x00027768) main_pane_empty_t2

0x9d6a,	// (0x00027780) main_pane_empty_t3_ParamLimits

0x9d6a,	// (0x00027780) main_pane_empty_t3

0x9d7d,	// (0x00027793) main_pane_empty_t4_ParamLimits

0x9d7d,	// (0x00027793) main_pane_empty_t4

0x9d90,	// (0x000277a6) main_pane_empty_t5_ParamLimits

0x9d90,	// (0x000277a6) main_pane_empty_t5

0x0004,

0xf574,	// (0x0002cf8a) main_pane_empty_t_ParamLimits

0xf574,	// (0x0002cf8a) main_pane_empty_t

0x5383,	// (0x00022d99) bg_popup_window_pane_ParamLimits

0x5383,	// (0x00022d99) bg_popup_window_pane

0x6c3d,	// (0x00024653) find_popup_pane_cp2_ParamLimits

0x6c3d,	// (0x00024653) find_popup_pane_cp2

0x6c49,	// (0x0002465f) heading_pane_ParamLimits

0x6c49,	// (0x0002465f) heading_pane

0x4cd9,	// (0x000226ef) bg_popup_sub_pane

0xb256,	// (0x00028c6c) bg_popup_window_pane_g1_ParamLimits

0xb256,	// (0x00028c6c) bg_popup_window_pane_g1

0xb262,	// (0x00028c78) bg_popup_window_pane_g2_ParamLimits

0xb262,	// (0x00028c78) bg_popup_window_pane_g2

0xb26e,	// (0x00028c84) bg_popup_window_pane_g3_ParamLimits

0xb26e,	// (0x00028c84) bg_popup_window_pane_g3

0xb27a,	// (0x00028c90) bg_popup_window_pane_g4_ParamLimits

0xb27a,	// (0x00028c90) bg_popup_window_pane_g4

0xb286,	// (0x00028c9c) bg_popup_window_pane_g5_ParamLimits

0xb286,	// (0x00028c9c) bg_popup_window_pane_g5

0xb292,	// (0x00028ca8) bg_popup_window_pane_g6_ParamLimits

0xb292,	// (0x00028ca8) bg_popup_window_pane_g6

0xb29e,	// (0x00028cb4) bg_popup_window_pane_g7_ParamLimits

0xb29e,	// (0x00028cb4) bg_popup_window_pane_g7

0xb2aa,	// (0x00028cc0) bg_popup_window_pane_g8_ParamLimits

0xb2aa,	// (0x00028cc0) bg_popup_window_pane_g8

0xb2b6,	// (0x00028ccc) bg_popup_window_pane_g9_ParamLimits

0xb2b6,	// (0x00028ccc) bg_popup_window_pane_g9

0x6c22,	// (0x00024638) bg_popup_window_pane_g10_ParamLimits

0x6c22,	// (0x00024638) bg_popup_window_pane_g10

0x0009,

0xf8cb,	// (0x0002d2e1) bg_popup_window_pane_g_ParamLimits

0xf8cb,	// (0x0002d2e1) bg_popup_window_pane_g

0x6bd9,	// (0x000245ef) bg_popup_heading_pane_ParamLimits

0x6bd9,	// (0x000245ef) bg_popup_heading_pane

0xb68f,	// (0x000290a5) tabs_4_passive_pane_cp_srt_ParamLimits

0xb68f,	// (0x000290a5) tabs_4_passive_pane_cp_srt

0xb6a1,	// (0x000290b7) tabs_4_passive_pane_srt_ParamLimits

0x6bed,	// (0x00024603) heading_pane_g2

0xb6a1,	// (0x000290b7) tabs_4_passive_pane_srt

0x545d,	// (0x00022e73) bg_passive_tab_pane_cp3_srt_ParamLimits

0x545d,	// (0x00022e73) bg_passive_tab_pane_cp3_srt

0x6bf5,	// (0x0002460b) heading_pane_t1_ParamLimits

0x6bf5,	// (0x0002460b) heading_pane_t1

0x6c0c,	// (0x00024622) heading_pane_t2_ParamLimits

0x6c0c,	// (0x00024622) heading_pane_t2

0x0001,

0xf8c6,	// (0x0002d2dc) heading_pane_t_ParamLimits

0xf8c6,	// (0x0002d2dc) heading_pane_t

0x6768,	// (0x0002417e) bg_popup_heading_pane_g1

0x67f9,	// (0x0002420f) bg_popup_heading_pane_g2

0x6801,	// (0x00024217) bg_popup_heading_pane_g3

0x6809,	// (0x0002421f) bg_popup_heading_pane_g4

0x6811,	// (0x00024227) bg_popup_heading_pane_g5

0x6819,	// (0x0002422f) bg_popup_heading_pane_g6

0x6821,	// (0x00024237) bg_popup_heading_pane_g7

0x6829,	// (0x0002423f) bg_popup_heading_pane_g8

0x6831,	// (0x00024247) bg_popup_heading_pane_g9

0x0008,

0xf882,	// (0x0002d298) bg_popup_heading_pane_g

0x6007,	// (0x00023a1d) bg_popup_sub_pane_g1

0x600f,	// (0x00023a25) bg_popup_sub_pane_g2

0x6017,	// (0x00023a2d) bg_popup_sub_pane_g3

0x601f,	// (0x00023a35) bg_popup_sub_pane_g4

0x6027,	// (0x00023a3d) bg_popup_sub_pane_g5

0x602f,	// (0x00023a45) bg_popup_sub_pane_g6

0x6037,	// (0x00023a4d) bg_popup_sub_pane_g7

0x603f,	// (0x00023a55) bg_popup_sub_pane_g8

0x6047,	// (0x00023a5d) bg_popup_sub_pane_g9

0x0008,

0xf85c,	// (0x0002d272) bg_popup_sub_pane_g

0x4d27,	// (0x0002273d) bg_popup_window_pane_cp5_ParamLimits

0x4d27,	// (0x0002273d) bg_popup_window_pane_cp5

0x4e7e,	// (0x00022894) popup_note_window_g1_ParamLimits

0x4e7e,	// (0x00022894) popup_note_window_g1

0x4e8a,	// (0x000228a0) popup_note_window_t1_ParamLimits

0x4e8a,	// (0x000228a0) popup_note_window_t1

0x4ea0,	// (0x000228b6) popup_note_window_t2_ParamLimits

0x4ea0,	// (0x000228b6) popup_note_window_t2

0x4eb6,	// (0x000228cc) popup_note_window_t3_ParamLimits

0x4eb6,	// (0x000228cc) popup_note_window_t3

0x4ecc,	// (0x000228e2) popup_note_window_t4_ParamLimits

0x4ecc,	// (0x000228e2) popup_note_window_t4

0x4ef4,	// (0x0002290a) popup_note_window_t5_ParamLimits

0x4ef4,	// (0x0002290a) popup_note_window_t5

0x0004,

0xf57f,	// (0x0002cf95) popup_note_window_t_ParamLimits

0xf57f,	// (0x0002cf95) popup_note_window_t

0x4f3e,	// (0x00022954) bg_popup_window_pane_cp6_ParamLimits

0x4f3e,	// (0x00022954) bg_popup_window_pane_cp6

0x66e4,	// (0x000240fa) popup_note_image_window_g1_ParamLimits

0x66e4,	// (0x000240fa) popup_note_image_window_g1

0x66f0,	// (0x00024106) popup_note_image_window_g2_ParamLimits

0x66f0,	// (0x00024106) popup_note_image_window_g2

0x0001,

0xf850,	// (0x0002d266) popup_note_image_window_g_ParamLimits

0xf850,	// (0x0002d266) popup_note_image_window_g

0x6709,	// (0x0002411f) popup_note_image_window_t1_ParamLimits

0x6709,	// (0x0002411f) popup_note_image_window_t1

0x6722,	// (0x00024138) popup_note_image_window_t2_ParamLimits

0x6722,	// (0x00024138) popup_note_image_window_t2

0x673b,	// (0x00024151) popup_note_image_window_t3_ParamLimits

0x673b,	// (0x00024151) popup_note_image_window_t3

0x0002,

0xf855,	// (0x0002d26b) popup_note_image_window_t_ParamLimits

0xf855,	// (0x0002d26b) popup_note_image_window_t

0x65cf,	// (0x00023fe5) bg_popup_window_pane_cp7_ParamLimits

0x65cf,	// (0x00023fe5) bg_popup_window_pane_cp7

0x65ff,	// (0x00024015) popup_note_wait_window_g1_ParamLimits

0x65ff,	// (0x00024015) popup_note_wait_window_g1

0x660b,	// (0x00024021) popup_note_wait_window_g2_ParamLimits

0x660b,	// (0x00024021) popup_note_wait_window_g2

0x0002,

0xf83e,	// (0x0002d254) popup_note_wait_window_g_ParamLimits

0xf83e,	// (0x0002d254) popup_note_wait_window_g

0x6623,	// (0x00024039) popup_note_wait_window_t1_ParamLimits

0x6623,	// (0x00024039) popup_note_wait_window_t1

0x664a,	// (0x00024060) popup_note_wait_window_t2_ParamLimits

0x664a,	// (0x00024060) popup_note_wait_window_t2

0x6667,	// (0x0002407d) popup_note_wait_window_t3_ParamLimits

0x6667,	// (0x0002407d) popup_note_wait_window_t3

0x667a,	// (0x00024090) popup_note_wait_window_t4_ParamLimits

0x667a,	// (0x00024090) popup_note_wait_window_t4

0x0004,

0xf845,	// (0x0002d25b) popup_note_wait_window_t_ParamLimits

0xf845,	// (0x0002d25b) popup_note_wait_window_t

0x669f,	// (0x000240b5) wait_bar_pane_ParamLimits

0x669f,	// (0x000240b5) wait_bar_pane

0x4cd9,	// (0x000226ef) wait_anim_pane

0x4cd9,	// (0x000226ef) wait_border_pane

0x4c57,	// (0x0002266d) wait_anim_pane_g1

0x4c57,	// (0x0002266d) wait_anim_pane_g2

0x0001,

0xf6f9,	// (0x0002d10f) wait_anim_pane_g

0x657f,	// (0x00023f95) wait_border_pane_g1

0x6588,	// (0x00023f9e) wait_border_pane_g2

0x6591,	// (0x00023fa7) wait_border_pane_g3

0x0002,

0xf837,	// (0x0002d24d) wait_border_pane_g

0x63ef,	// (0x00023e05) bg_popup_window_pane_cp16_ParamLimits

0x63ef,	// (0x00023e05) bg_popup_window_pane_cp16

0x64ef,	// (0x00023f05) indicator_popup_pane_cp4_ParamLimits

0x64ef,	// (0x00023f05) indicator_popup_pane_cp4

0x6503,	// (0x00023f19) popup_query_data_window_t1_ParamLimits

0x6503,	// (0x00023f19) popup_query_data_window_t1

0x6515,	// (0x00023f2b) popup_query_data_window_t2_ParamLimits

0x6515,	// (0x00023f2b) popup_query_data_window_t2

0x652e,	// (0x00023f44) popup_query_data_window_t3_ParamLimits

0x652e,	// (0x00023f44) popup_query_data_window_t3

0x0002,

0xf830,	// (0x0002d246) popup_query_data_window_t_ParamLimits

0xf830,	// (0x0002d246) popup_query_data_window_t

0x6548,	// (0x00023f5e) query_popup_data_pane_ParamLimits

0x6548,	// (0x00023f5e) query_popup_data_pane

0x655c,	// (0x00023f72) query_popup_data_pane_cp1_ParamLimits

0x655c,	// (0x00023f72) query_popup_data_pane_cp1

0x63ef,	// (0x00023e05) bg_popup_window_pane_cp10_ParamLimits

0x63ef,	// (0x00023e05) bg_popup_window_pane_cp10

0x6421,	// (0x00023e37) indicator_popup_pane_ParamLimits

0x6421,	// (0x00023e37) indicator_popup_pane

0x6443,	// (0x00023e59) popup_query_code_window_t1_ParamLimits

0x6443,	// (0x00023e59) popup_query_code_window_t1

0x645d,	// (0x00023e73) popup_query_code_window_t2_ParamLimits

0x645d,	// (0x00023e73) popup_query_code_window_t2

0x64a6,	// (0x00023ebc) popup_query_code_window_t3_ParamLimits

0x64a6,	// (0x00023ebc) popup_query_code_window_t3

0x0002,

0xf829,	// (0x0002d23f) popup_query_code_window_t_ParamLimits

0xf829,	// (0x0002d23f) popup_query_code_window_t

0x64d5,	// (0x00023eeb) query_popup_pane_ParamLimits

0x64d5,	// (0x00023eeb) query_popup_pane

0x4f3e,	// (0x00022954) bg_popup_window_pane_cp15_ParamLimits

0x4f3e,	// (0x00022954) bg_popup_window_pane_cp15

0x4f5c,	// (0x00022972) indicator_popup_pane_cp1_ParamLimits

0x4f5c,	// (0x00022972) indicator_popup_pane_cp1

0x4f6f,	// (0x00022985) indicator_popup_pane_cp2_ParamLimits

0x4f6f,	// (0x00022985) indicator_popup_pane_cp2

0x4f82,	// (0x00022998) popup_query_data_code_window_g1_ParamLimits

0x4f82,	// (0x00022998) popup_query_data_code_window_g1

0x4f95,	// (0x000229ab) popup_query_data_code_window_t1_ParamLimits

0x4f95,	// (0x000229ab) popup_query_data_code_window_t1

0x4fa7,	// (0x000229bd) popup_query_data_code_window_t2_ParamLimits

0x4fa7,	// (0x000229bd) popup_query_data_code_window_t2

0x4fb9,	// (0x000229cf) popup_query_data_code_window_t3_ParamLimits

0x4fb9,	// (0x000229cf) popup_query_data_code_window_t3

0x4fcf,	// (0x000229e5) popup_query_data_code_window_t4_ParamLimits

0x4fcf,	// (0x000229e5) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0002cfa0) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0002cfa0) popup_query_data_code_window_t

0xaf76,	// (0x0002898c) list_single_midp_graphic_pane_g3

0x4fe7,	// (0x000229fd) query_popup_data_pane_cp2_ParamLimits

0x4ffa,	// (0x00022a10) query_popup_pane_cp2_ParamLimits

0x4ffa,	// (0x00022a10) query_popup_pane_cp2

0x4cd9,	// (0x000226ef) bg_popup_window_pane_cp11

0x63db,	// (0x00023df1) heading_pane_cp5

0x5086,	// (0x00022a9c) listscroll_popup_info_pane

0x4cd9,	// (0x000226ef) input_focus_pane_cp3

0x500d,	// (0x00022a23) query_popup_pane_t1

0x501b,	// (0x00022a31) list_popup_info_pane_ParamLimits

0x501b,	// (0x00022a31) list_popup_info_pane

0x502a,	// (0x00022a40) listscroll_popup_info_pane_g1

0x5032,	// (0x00022a48) scroll_pane_cp7

0x503a,	// (0x00022a50) popup_info_list_pane_t1_ParamLimits

0x503a,	// (0x00022a50) popup_info_list_pane_t1

0x5054,	// (0x00022a6a) popup_info_list_pane_t2_ParamLimits

0x5054,	// (0x00022a6a) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0002cfa9) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0002cfa9) popup_info_list_pane_t

0x4cd9,	// (0x000226ef) bg_popup_window_pane_cp12

0x72a1,	// (0x00024cb7) find_popup_pane

0x4d3d,	// (0x00022753) bg_popup_window_pane_cp3

0x506e,	// (0x00022a84) heading_pane_cp3

0x507a,	// (0x00022a90) listscroll_popup_graphic_pane

0x4cd9,	// (0x000226ef) bg_popup_window_pane_cp4

0x9df3,	// (0x00027809) heading_pane_cp4

0x5086,	// (0x00022a9c) listscroll_popup_colour_pane

0x508e,	// (0x00022aa4) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x508e,	// (0x00022aa4) cell_large_graphic_colour_none_popup_pane

0x9dfb,	// (0x00027811) grid_large_graphic_colour_popup_pane_ParamLimits

0x9dfb,	// (0x00027811) grid_large_graphic_colour_popup_pane

0x9e17,	// (0x0002782d) listscroll_popup_colour_pane_g1_ParamLimits

0x9e17,	// (0x0002782d) listscroll_popup_colour_pane_g1

0x9e2e,	// (0x00027844) listscroll_popup_colour_pane_g2_ParamLimits

0x9e2e,	// (0x00027844) listscroll_popup_colour_pane_g2

0x509e,	// (0x00022ab4) listscroll_popup_colour_pane_g3_ParamLimits

0x509e,	// (0x00022ab4) listscroll_popup_colour_pane_g3

0x9e42,	// (0x00027858) listscroll_popup_colour_pane_g4_ParamLimits

0x9e42,	// (0x00027858) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0002cfae) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0002cfae) listscroll_popup_colour_pane_g

0x50ae,	// (0x00022ac4) scroll_pane_cp6_ParamLimits

0x50ae,	// (0x00022ac4) scroll_pane_cp6

0x9e51,	// (0x00027867) cell_large_graphic_colour_popup_pane_ParamLimits

0x9e51,	// (0x00027867) cell_large_graphic_colour_popup_pane

0x50c0,	// (0x00022ad6) cell_large_graphic_colour_none_popup_pane_t1

0x4cd9,	// (0x000226ef) grid_highlight_pane_cp5

0x50cf,	// (0x00022ae5) cell_large_graphic_colour_popup_pane_g1

0x50d7,	// (0x00022aed) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0002cfb7) cell_large_graphic_colour_popup_pane_g

0x50df,	// (0x00022af5) cell_large_graphic_colour_popup_pane_g2_copy1

0x50e8,	// (0x00022afe) grid_highlight_pane_cp4

0x50f0,	// (0x00022b06) bg_popup_window_pane_cp8_ParamLimits

0x50f0,	// (0x00022b06) bg_popup_window_pane_cp8

0x510b,	// (0x00022b21) popup_snote_single_text_window_g1_ParamLimits

0x510b,	// (0x00022b21) popup_snote_single_text_window_g1

0x511d,	// (0x00022b33) popup_snote_single_text_window_t1_ParamLimits

0x511d,	// (0x00022b33) popup_snote_single_text_window_t1

0x5130,	// (0x00022b46) popup_snote_single_text_window_t2_ParamLimits

0x5130,	// (0x00022b46) popup_snote_single_text_window_t2

0x5143,	// (0x00022b59) popup_snote_single_text_window_t3_ParamLimits

0x5143,	// (0x00022b59) popup_snote_single_text_window_t3

0x517c,	// (0x00022b92) popup_snote_single_text_window_t4_ParamLimits

0x517c,	// (0x00022b92) popup_snote_single_text_window_t4

0x51b0,	// (0x00022bc6) popup_snote_single_text_window_t5_ParamLimits

0x51b0,	// (0x00022bc6) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0002cfbc) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0002cfbc) popup_snote_single_text_window_t

0x51df,	// (0x00022bf5) bg_popup_window_pane_cp9_ParamLimits

0x51df,	// (0x00022bf5) bg_popup_window_pane_cp9

0x510b,	// (0x00022b21) popup_snote_single_graphic_window_g1_ParamLimits

0x510b,	// (0x00022b21) popup_snote_single_graphic_window_g1

0x51ed,	// (0x00022c03) popup_snote_single_graphic_window_g2_ParamLimits

0x51ed,	// (0x00022c03) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0002cfc7) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0002cfc7) popup_snote_single_graphic_window_g

0x51f9,	// (0x00022c0f) popup_snote_single_graphic_window_t1_ParamLimits

0x51f9,	// (0x00022c0f) popup_snote_single_graphic_window_t1

0x520c,	// (0x00022c22) popup_snote_single_graphic_window_t2_ParamLimits

0x520c,	// (0x00022c22) popup_snote_single_graphic_window_t2

0x5143,	// (0x00022b59) popup_snote_single_graphic_window_t3_ParamLimits

0x5143,	// (0x00022b59) popup_snote_single_graphic_window_t3

0x517c,	// (0x00022b92) popup_snote_single_graphic_window_t4_ParamLimits

0x517c,	// (0x00022b92) popup_snote_single_graphic_window_t4

0x51b0,	// (0x00022bc6) popup_snote_single_graphic_window_t5_ParamLimits

0x51b0,	// (0x00022bc6) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0002cfcc) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0002cfcc) popup_snote_single_graphic_window_t

0xb620,	// (0x00029036) grid_graphic_popup_pane_ParamLimits

0xb620,	// (0x00029036) grid_graphic_popup_pane

0xb643,	// (0x00029059) listscroll_popup_graphic_pane_g1_ParamLimits

0xb643,	// (0x00029059) listscroll_popup_graphic_pane_g1

0xb657,	// (0x0002906d) listscroll_popup_graphic_pane_g2_ParamLimits

0xb657,	// (0x0002906d) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a6,	// (0x0002d3bc) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a6,	// (0x0002d3bc) listscroll_popup_graphic_pane_g

0x719b,	// (0x00024bb1) scroll_pane_cp5

0xb5d9,	// (0x00028fef) cell_graphic_popup_pane_ParamLimits

0xb5d9,	// (0x00028fef) cell_graphic_popup_pane

0x724a,	// (0x00024c60) cell_graphic_popup_pane_g1

0x7252,	// (0x00024c68) cell_graphic_popup_pane_g2

0x50df,	// (0x00022af5) cell_graphic_popup_pane_g3

0x0002,

0xf99f,	// (0x0002d3b5) cell_graphic_popup_pane_g

0x725b,	// (0x00024c71) cell_graphic_popup_pane_t2

0x50e8,	// (0x00022afe) grid_highlight_pane_cp3

0x5231,	// (0x00022c47) list_gen_pane_ParamLimits

0x5231,	// (0x00022c47) list_gen_pane

0x525a,	// (0x00022c70) scroll_pane

0xb5aa,	// (0x00028fc0) bg_list_pane_g1_ParamLimits

0xb5aa,	// (0x00028fc0) bg_list_pane_g1

0x7201,	// (0x00024c17) bg_list_pane_g2_ParamLimits

0x7201,	// (0x00024c17) bg_list_pane_g2

0x7214,	// (0x00024c2a) bg_list_pane_g3_ParamLimits

0x7214,	// (0x00024c2a) bg_list_pane_g3

0x7226,	// (0x00024c3c) bg_list_pane_g4_ParamLimits

0x7226,	// (0x00024c3c) bg_list_pane_g4

0xb5c1,	// (0x00028fd7) bg_list_pane_g5_ParamLimits

0xb5c1,	// (0x00028fd7) bg_list_pane_g5

0x0004,

0xf994,	// (0x0002d3aa) bg_list_pane_g_ParamLimits

0xf994,	// (0x0002d3aa) bg_list_pane_g

0xb55a,	// (0x00028f70) list_double2_graphic_large_graphic_pane_ParamLimits

0xb55a,	// (0x00028f70) list_double2_graphic_large_graphic_pane

0xb55a,	// (0x00028f70) list_double2_graphic_pane_ParamLimits

0xb55a,	// (0x00028f70) list_double2_graphic_pane

0xb55a,	// (0x00028f70) list_double2_large_graphic_pane_ParamLimits

0xb55a,	// (0x00028f70) list_double2_large_graphic_pane

0xb55a,	// (0x00028f70) list_double2_pane_ParamLimits

0xb55a,	// (0x00028f70) list_double2_pane

0xb55a,	// (0x00028f70) list_double_graphic_heading_pane_ParamLimits

0xb55a,	// (0x00028f70) list_double_graphic_heading_pane

0xb55a,	// (0x00028f70) list_double_graphic_pane_ParamLimits

0xb55a,	// (0x00028f70) list_double_graphic_pane

0xb55a,	// (0x00028f70) list_double_heading_pane_ParamLimits

0xb55a,	// (0x00028f70) list_double_heading_pane

0xb55a,	// (0x00028f70) list_double_large_graphic_pane_ParamLimits

0xb55a,	// (0x00028f70) list_double_large_graphic_pane

0xb55a,	// (0x00028f70) list_double_number_pane_ParamLimits

0xb55a,	// (0x00028f70) list_double_number_pane

0xb55a,	// (0x00028f70) list_double_pane_ParamLimits

0xb55a,	// (0x00028f70) list_double_pane

0xb55a,	// (0x00028f70) list_double_time_pane_ParamLimits

0xb55a,	// (0x00028f70) list_double_time_pane

0xb55a,	// (0x00028f70) list_setting_number_pane_ParamLimits

0xb55a,	// (0x00028f70) list_setting_number_pane

0xb55a,	// (0x00028f70) list_setting_pane_ParamLimits

0xb55a,	// (0x00028f70) list_setting_pane

0xd6a7,	// (0x0002b0bd) list_single_2graphic_pane_ParamLimits

0xd6a7,	// (0x0002b0bd) list_single_2graphic_pane

0xd6a7,	// (0x0002b0bd) list_single_graphic_heading_pane_ParamLimits

0xd6a7,	// (0x0002b0bd) list_single_graphic_heading_pane

0xd6a7,	// (0x0002b0bd) list_single_graphic_pane_ParamLimits

0xd6a7,	// (0x0002b0bd) list_single_graphic_pane

0xd6a7,	// (0x0002b0bd) list_single_heading_pane_ParamLimits

0xd6a7,	// (0x0002b0bd) list_single_heading_pane

0xd6be,	// (0x0002b0d4) list_single_large_graphic_pane_ParamLimits

0xd6be,	// (0x0002b0d4) list_single_large_graphic_pane

0xd6a7,	// (0x0002b0bd) list_single_number_heading_pane_ParamLimits

0xd6a7,	// (0x0002b0bd) list_single_number_heading_pane

0xd6a7,	// (0x0002b0bd) list_single_number_pane_ParamLimits

0xd6a7,	// (0x0002b0bd) list_single_number_pane

0xd6a7,	// (0x0002b0bd) list_single_pane_ParamLimits

0xd6a7,	// (0x0002b0bd) list_single_pane

0x4cd9,	// (0x000226ef) list_highlight_pane_cp1

0xce19,	// (0x0002a82f) list_single_pane_g1_ParamLimits

0xce19,	// (0x0002a82f) list_single_pane_g1

0xce25,	// (0x0002a83b) list_single_pane_g2_ParamLimits

0xce25,	// (0x0002a83b) list_single_pane_g2

0x0001,

0x9112,	// (0x00026b28) list_single_pane_g_ParamLimits

0x9112,	// (0x00026b28) list_single_pane_g

0xd656,	// (0x0002b06c) list_single_pane_t1_ParamLimits

0xd656,	// (0x0002b06c) list_single_pane_t1

0xce19,	// (0x0002a82f) list_single_number_pane_g1_ParamLimits

0xce19,	// (0x0002a82f) list_single_number_pane_g1

0xce25,	// (0x0002a83b) list_single_number_pane_g2_ParamLimits

0xce25,	// (0x0002a83b) list_single_number_pane_g2

0x0001,

0x9112,	// (0x00026b28) list_single_number_pane_g_ParamLimits

0x9112,	// (0x00026b28) list_single_number_pane_g

0xce31,	// (0x0002a847) list_single_number_pane_t1_ParamLimits

0xce31,	// (0x0002a847) list_single_number_pane_t1

0xd617,	// (0x0002b02d) list_single_number_pane_t2_ParamLimits

0xd617,	// (0x0002b02d) list_single_number_pane_t2

0x0001,

0xf955,	// (0x0002d36b) list_single_number_pane_t_ParamLimits

0xf955,	// (0x0002d36b) list_single_number_pane_t

0xce0d,	// (0x0002a823) list_single_graphic_pane_g1_ParamLimits

0xce0d,	// (0x0002a823) list_single_graphic_pane_g1

0xce19,	// (0x0002a82f) list_single_graphic_pane_g2_ParamLimits

0xce19,	// (0x0002a82f) list_single_graphic_pane_g2

0xce25,	// (0x0002a83b) list_single_graphic_pane_g3_ParamLimits

0xce25,	// (0x0002a83b) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0002cfd7) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0002cfd7) list_single_graphic_pane_g

0xce31,	// (0x0002a847) list_single_graphic_pane_t1_ParamLimits

0xce31,	// (0x0002a847) list_single_graphic_pane_t1

0xce19,	// (0x0002a82f) list_single_heading_pane_g1_ParamLimits

0xce19,	// (0x0002a82f) list_single_heading_pane_g1

0xce25,	// (0x0002a83b) list_single_heading_pane_g2_ParamLimits

0xce25,	// (0x0002a83b) list_single_heading_pane_g2

0x0001,

0x9112,	// (0x00026b28) list_single_heading_pane_g_ParamLimits

0x9112,	// (0x00026b28) list_single_heading_pane_g

0xce47,	// (0x0002a85d) list_single_heading_pane_t1_ParamLimits

0xce47,	// (0x0002a85d) list_single_heading_pane_t1

0xce5d,	// (0x0002a873) list_single_heading_pane_t2_ParamLimits

0xce5d,	// (0x0002a873) list_single_heading_pane_t2

0x0001,

0xf5c8,	// (0x0002cfde) list_single_heading_pane_t_ParamLimits

0xf5c8,	// (0x0002cfde) list_single_heading_pane_t

0xce19,	// (0x0002a82f) list_single_number_heading_pane_g1_ParamLimits

0xce19,	// (0x0002a82f) list_single_number_heading_pane_g1

0xce25,	// (0x0002a83b) list_single_number_heading_pane_g2_ParamLimits

0xce25,	// (0x0002a83b) list_single_number_heading_pane_g2

0x0001,

0x9112,	// (0x00026b28) list_single_number_heading_pane_g_ParamLimits

0x9112,	// (0x00026b28) list_single_number_heading_pane_g

0xce47,	// (0x0002a85d) list_single_number_heading_pane_t1_ParamLimits

0xce47,	// (0x0002a85d) list_single_number_heading_pane_t1

0xce6f,	// (0x0002a885) list_single_number_heading_pane_t2_ParamLimits

0xce6f,	// (0x0002a885) list_single_number_heading_pane_t2

0xce81,	// (0x0002a897) list_single_number_heading_pane_t3_ParamLimits

0xce81,	// (0x0002a897) list_single_number_heading_pane_t3

0x0002,

0xf5cd,	// (0x0002cfe3) list_single_number_heading_pane_t_ParamLimits

0xf5cd,	// (0x0002cfe3) list_single_number_heading_pane_t

0xce0d,	// (0x0002a823) list_single_graphic_heading_pane_g1_ParamLimits

0xce0d,	// (0x0002a823) list_single_graphic_heading_pane_g1

0xce93,	// (0x0002a8a9) list_single_graphic_heading_pane_g4_ParamLimits

0xce93,	// (0x0002a8a9) list_single_graphic_heading_pane_g4

0xce25,	// (0x0002a83b) list_single_graphic_heading_pane_g5_ParamLimits

0xce25,	// (0x0002a83b) list_single_graphic_heading_pane_g5

0x0002,

0xf5d4,	// (0x0002cfea) list_single_graphic_heading_pane_g_ParamLimits

0xf5d4,	// (0x0002cfea) list_single_graphic_heading_pane_g

0xce47,	// (0x0002a85d) list_single_graphic_heading_pane_t1_ParamLimits

0xce47,	// (0x0002a85d) list_single_graphic_heading_pane_t1

0xcea2,	// (0x0002a8b8) list_single_graphic_heading_pane_t2_ParamLimits

0xcea2,	// (0x0002a8b8) list_single_graphic_heading_pane_t2

0x0001,

0xf5db,	// (0x0002cff1) list_single_graphic_heading_pane_t_ParamLimits

0xf5db,	// (0x0002cff1) list_single_graphic_heading_pane_t

0xceb4,	// (0x0002a8ca) list_single_large_graphic_pane_g1_ParamLimits

0xceb4,	// (0x0002a8ca) list_single_large_graphic_pane_g1

0xcec0,	// (0x0002a8d6) list_single_large_graphic_pane_g2_ParamLimits

0xcec0,	// (0x0002a8d6) list_single_large_graphic_pane_g2

0xcecc,	// (0x0002a8e2) list_single_large_graphic_pane_g3_ParamLimits

0xcecc,	// (0x0002a8e2) list_single_large_graphic_pane_g3

0x0002,

0xf5e0,	// (0x0002cff6) list_single_large_graphic_pane_g_ParamLimits

0xf5e0,	// (0x0002cff6) list_single_large_graphic_pane_g

0x6588,	// (0x00023f9e) wait_border_pane_g2_copy1

0xced8,	// (0x0002a8ee) list_single_large_graphic_pane_g4_cp2

0xcee0,	// (0x0002a8f6) list_single_large_graphic_pane_t1_ParamLimits

0xcee0,	// (0x0002a8f6) list_single_large_graphic_pane_t1

0xcef6,	// (0x0002a90c) list_double_pane_g1_ParamLimits

0xcef6,	// (0x0002a90c) list_double_pane_g1

0xcf02,	// (0x0002a918) list_double_pane_g2_ParamLimits

0xcf02,	// (0x0002a918) list_double_pane_g2

0x0001,

0xf5e7,	// (0x0002cffd) list_double_pane_g_ParamLimits

0xf5e7,	// (0x0002cffd) list_double_pane_g

0xcf0e,	// (0x0002a924) list_double_pane_t1_ParamLimits

0xcf0e,	// (0x0002a924) list_double_pane_t1

0xcf24,	// (0x0002a93a) list_double_pane_t2_ParamLimits

0xcf24,	// (0x0002a93a) list_double_pane_t2

0x0001,

0xf5ec,	// (0x0002d002) list_double_pane_t_ParamLimits

0xf5ec,	// (0x0002d002) list_double_pane_t

0xcf36,	// (0x0002a94c) list_double2_pane_g1_ParamLimits

0xcf36,	// (0x0002a94c) list_double2_pane_g1

0xcf02,	// (0x0002a918) list_double2_pane_g2_ParamLimits

0xcf02,	// (0x0002a918) list_double2_pane_g2

0x0001,

0xf5f1,	// (0x0002d007) list_double2_pane_g_ParamLimits

0xf5f1,	// (0x0002d007) list_double2_pane_g

0xcf0e,	// (0x0002a924) list_double2_pane_t1_ParamLimits

0xcf0e,	// (0x0002a924) list_double2_pane_t1

0xcf45,	// (0x0002a95b) list_double2_pane_t2_ParamLimits

0xcf45,	// (0x0002a95b) list_double2_pane_t2

0x0001,

0xf5f6,	// (0x0002d00c) list_double2_pane_t_ParamLimits

0xf5f6,	// (0x0002d00c) list_double2_pane_t

0xcef6,	// (0x0002a90c) list_double_number_pane_g1_ParamLimits

0xcef6,	// (0x0002a90c) list_double_number_pane_g1

0xcf02,	// (0x0002a918) list_double_number_pane_g2_ParamLimits

0xcf02,	// (0x0002a918) list_double_number_pane_g2

0x0001,

0xf5e7,	// (0x0002cffd) list_double_number_pane_g_ParamLimits

0xf5e7,	// (0x0002cffd) list_double_number_pane_g

0xcf57,	// (0x0002a96d) list_double_number_pane_t1_ParamLimits

0xcf57,	// (0x0002a96d) list_double_number_pane_t1

0xcf69,	// (0x0002a97f) list_double_number_pane_t2_ParamLimits

0xcf69,	// (0x0002a97f) list_double_number_pane_t2

0xcf7f,	// (0x0002a995) list_double_number_pane_t3_ParamLimits

0xcf7f,	// (0x0002a995) list_double_number_pane_t3

0x0002,

0xf5fb,	// (0x0002d011) list_double_number_pane_t_ParamLimits

0xf5fb,	// (0x0002d011) list_double_number_pane_t

0xcf91,	// (0x0002a9a7) list_double_graphic_pane_g1_ParamLimits

0xcf91,	// (0x0002a9a7) list_double_graphic_pane_g1

0xcf9d,	// (0x0002a9b3) list_double_graphic_pane_g2_ParamLimits

0xcf9d,	// (0x0002a9b3) list_double_graphic_pane_g2

0xcfac,	// (0x0002a9c2) list_double_graphic_pane_g3_ParamLimits

0xcfac,	// (0x0002a9c2) list_double_graphic_pane_g3

0x0003,

0xf602,	// (0x0002d018) list_double_graphic_pane_g_ParamLimits

0xf602,	// (0x0002d018) list_double_graphic_pane_g

0xcfc4,	// (0x0002a9da) list_double_graphic_pane_t1_ParamLimits

0xcfc4,	// (0x0002a9da) list_double_graphic_pane_t1

0xcfda,	// (0x0002a9f0) list_double_graphic_pane_t2_ParamLimits

0xcfda,	// (0x0002a9f0) list_double_graphic_pane_t2

0x0001,

0xf60b,	// (0x0002d021) list_double_graphic_pane_t_ParamLimits

0xf60b,	// (0x0002d021) list_double_graphic_pane_t

0xcf91,	// (0x0002a9a7) list_double2_graphic_pane_g1_ParamLimits

0xcf91,	// (0x0002a9a7) list_double2_graphic_pane_g1

0xcfec,	// (0x0002aa02) list_double2_graphic_pane_g2_ParamLimits

0xcfec,	// (0x0002aa02) list_double2_graphic_pane_g2

0xcff8,	// (0x0002aa0e) list_double2_graphic_pane_g3_ParamLimits

0xcff8,	// (0x0002aa0e) list_double2_graphic_pane_g3

0x0002,

0xf610,	// (0x0002d026) list_double2_graphic_pane_g_ParamLimits

0xf610,	// (0x0002d026) list_double2_graphic_pane_g

0xcf69,	// (0x0002a97f) list_double2_graphic_pane_t1_ParamLimits

0xcf69,	// (0x0002a97f) list_double2_graphic_pane_t1

0xd004,	// (0x0002aa1a) list_double2_graphic_pane_t2_ParamLimits

0xd004,	// (0x0002aa1a) list_double2_graphic_pane_t2

0x0001,

0xf617,	// (0x0002d02d) list_double2_graphic_pane_t_ParamLimits

0xf617,	// (0x0002d02d) list_double2_graphic_pane_t

0xd016,	// (0x0002aa2c) list_double_large_graphic_pane_g1_ParamLimits

0xd016,	// (0x0002aa2c) list_double_large_graphic_pane_g1

0xcf36,	// (0x0002a94c) list_double_large_graphic_pane_g2_ParamLimits

0xcf36,	// (0x0002a94c) list_double_large_graphic_pane_g2

0xcf02,	// (0x0002a918) list_double_large_graphic_pane_g3_ParamLimits

0xcf02,	// (0x0002a918) list_double_large_graphic_pane_g3

0xd03f,	// (0x0002aa55) list_double_large_graphic_pane_g4_ParamLimits

0xd03f,	// (0x0002aa55) list_double_large_graphic_pane_g4

0x0004,

0xf61c,	// (0x0002d032) list_double_large_graphic_pane_g_ParamLimits

0xf61c,	// (0x0002d032) list_double_large_graphic_pane_g

0xd065,	// (0x0002aa7b) list_double_large_graphic_pane_t1_ParamLimits

0xd065,	// (0x0002aa7b) list_double_large_graphic_pane_t1

0xd07e,	// (0x0002aa94) list_double_large_graphic_pane_t2_ParamLimits

0xd07e,	// (0x0002aa94) list_double_large_graphic_pane_t2

0x0001,

0xf627,	// (0x0002d03d) list_double_large_graphic_pane_t_ParamLimits

0xf627,	// (0x0002d03d) list_double_large_graphic_pane_t

0xd090,	// (0x0002aaa6) list_double2_large_graphic_pane_g1_ParamLimits

0xd090,	// (0x0002aaa6) list_double2_large_graphic_pane_g1

0xcf36,	// (0x0002a94c) list_double2_large_graphic_pane_g2_ParamLimits

0xcf36,	// (0x0002a94c) list_double2_large_graphic_pane_g2

0xcf02,	// (0x0002a918) list_double2_large_graphic_pane_g3_ParamLimits

0xcf02,	// (0x0002a918) list_double2_large_graphic_pane_g3

0x0002,

0xf62c,	// (0x0002d042) list_double2_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x0002d042) list_double2_large_graphic_pane_g

0xd09c,	// (0x0002aab2) list_double2_large_graphic_pane_t1_ParamLimits

0xd09c,	// (0x0002aab2) list_double2_large_graphic_pane_t1

0xd0b2,	// (0x0002aac8) list_double2_large_graphic_pane_t2_ParamLimits

0xd0b2,	// (0x0002aac8) list_double2_large_graphic_pane_t2

0x0001,

0xf633,	// (0x0002d049) list_double2_large_graphic_pane_t_ParamLimits

0xf633,	// (0x0002d049) list_double2_large_graphic_pane_t

0xd0c4,	// (0x0002aada) list_double_heading_pane_g1_ParamLimits

0xd0c4,	// (0x0002aada) list_double_heading_pane_g1

0xd0d3,	// (0x0002aae9) list_double_heading_pane_g2_ParamLimits

0xd0d3,	// (0x0002aae9) list_double_heading_pane_g2

0x0001,

0xf638,	// (0x0002d04e) list_double_heading_pane_g_ParamLimits

0xf638,	// (0x0002d04e) list_double_heading_pane_g

0xd0df,	// (0x0002aaf5) list_double_heading_pane_t1_ParamLimits

0xd0df,	// (0x0002aaf5) list_double_heading_pane_t1

0xd0f5,	// (0x0002ab0b) list_double_heading_pane_t2_ParamLimits

0xd0f5,	// (0x0002ab0b) list_double_heading_pane_t2

0x0001,

0xf63d,	// (0x0002d053) list_double_heading_pane_t_ParamLimits

0xf63d,	// (0x0002d053) list_double_heading_pane_t

0xd107,	// (0x0002ab1d) list_double_graphic_heading_pane_g1_ParamLimits

0xd107,	// (0x0002ab1d) list_double_graphic_heading_pane_g1

0xd0c4,	// (0x0002aada) list_double_graphic_heading_pane_g2_ParamLimits

0xd0c4,	// (0x0002aada) list_double_graphic_heading_pane_g2

0xd0d3,	// (0x0002aae9) list_double_graphic_heading_pane_g3_ParamLimits

0xd0d3,	// (0x0002aae9) list_double_graphic_heading_pane_g3

0x0002,

0xf642,	// (0x0002d058) list_double_graphic_heading_pane_g_ParamLimits

0xf642,	// (0x0002d058) list_double_graphic_heading_pane_g

0xd113,	// (0x0002ab29) list_double_graphic_heading_pane_t1_ParamLimits

0xd113,	// (0x0002ab29) list_double_graphic_heading_pane_t1

0xd129,	// (0x0002ab3f) list_double_graphic_heading_pane_t2_ParamLimits

0xd129,	// (0x0002ab3f) list_double_graphic_heading_pane_t2

0x0001,

0xf649,	// (0x0002d05f) list_double_graphic_heading_pane_t_ParamLimits

0xf649,	// (0x0002d05f) list_double_graphic_heading_pane_t

0xcf36,	// (0x0002a94c) list_double_time_pane_g1_ParamLimits

0xcf36,	// (0x0002a94c) list_double_time_pane_g1

0xcf02,	// (0x0002a918) list_double_time_pane_g2_ParamLimits

0xcf02,	// (0x0002a918) list_double_time_pane_g2

0x0001,

0xf5f1,	// (0x0002d007) list_double_time_pane_g_ParamLimits

0xf5f1,	// (0x0002d007) list_double_time_pane_g

0xd09c,	// (0x0002aab2) list_double_time_pane_t1_ParamLimits

0xd09c,	// (0x0002aab2) list_double_time_pane_t1

0xd13b,	// (0x0002ab51) list_double_time_pane_t2_ParamLimits

0xd13b,	// (0x0002ab51) list_double_time_pane_t2

0xd14d,	// (0x0002ab63) list_double_time_pane_t3_ParamLimits

0xd14d,	// (0x0002ab63) list_double_time_pane_t3

0xd15f,	// (0x0002ab75) list_double_time_pane_t4_ParamLimits

0xd15f,	// (0x0002ab75) list_double_time_pane_t4

0x0003,

0xf64e,	// (0x0002d064) list_double_time_pane_t_ParamLimits

0xf64e,	// (0x0002d064) list_double_time_pane_t

0xd171,	// (0x0002ab87) list_setting_pane_g1_ParamLimits

0xd171,	// (0x0002ab87) list_setting_pane_g1

0xd17d,	// (0x0002ab93) list_setting_pane_g2_ParamLimits

0xd17d,	// (0x0002ab93) list_setting_pane_g2

0x0001,

0xf657,	// (0x0002d06d) list_setting_pane_g_ParamLimits

0xf657,	// (0x0002d06d) list_setting_pane_g

0xd189,	// (0x0002ab9f) list_setting_pane_t1_ParamLimits

0xd189,	// (0x0002ab9f) list_setting_pane_t1

0xd1a0,	// (0x0002abb6) list_setting_pane_t2_ParamLimits

0xd1a0,	// (0x0002abb6) list_setting_pane_t2

0x0002,

0xf65c,	// (0x0002d072) list_setting_pane_t_ParamLimits

0xf65c,	// (0x0002d072) list_setting_pane_t

0xd1dd,	// (0x0002abf3) set_value_pane_cp_ParamLimits

0xd1dd,	// (0x0002abf3) set_value_pane_cp

0xd1e9,	// (0x0002abff) list_setting_number_pane_g1_ParamLimits

0xd1e9,	// (0x0002abff) list_setting_number_pane_g1

0xd1f5,	// (0x0002ac0b) list_setting_number_pane_g2_ParamLimits

0xd1f5,	// (0x0002ac0b) list_setting_number_pane_g2

0x0001,

0xf663,	// (0x0002d079) list_setting_number_pane_g_ParamLimits

0xf663,	// (0x0002d079) list_setting_number_pane_g

0xd201,	// (0x0002ac17) list_setting_number_pane_t1_ParamLimits

0xd201,	// (0x0002ac17) list_setting_number_pane_t1

0xd213,	// (0x0002ac29) list_setting_number_pane_t2_ParamLimits

0xd213,	// (0x0002ac29) list_setting_number_pane_t2

0xd22a,	// (0x0002ac40) list_setting_number_pane_t3_ParamLimits

0xd22a,	// (0x0002ac40) list_setting_number_pane_t3

0x0003,

0xf668,	// (0x0002d07e) list_setting_number_pane_t_ParamLimits

0xf668,	// (0x0002d07e) list_setting_number_pane_t

0xd1dd,	// (0x0002abf3) set_value_pane_ParamLimits

0xd1dd,	// (0x0002abf3) set_value_pane

0x528f,	// (0x00022ca5) bg_set_opt_pane_ParamLimits

0x528f,	// (0x00022ca5) bg_set_opt_pane

0xd26b,	// (0x0002ac81) set_value_pane_t1

0x52b0,	// (0x00022cc6) slider_set_pane_cp3

0x52b9,	// (0x00022ccf) volume_small_pane_cp

0x52c2,	// (0x00022cd8) list_form_gen_pane

0x527e,	// (0x00022c94) scroll_pane_cp8

0xd281,	// (0x0002ac97) form_field_data_pane_ParamLimits

0xd281,	// (0x0002ac97) form_field_data_pane

0xd2a1,	// (0x0002acb7) form_field_data_wide_pane_ParamLimits

0xd2a1,	// (0x0002acb7) form_field_data_wide_pane

0xd2c0,	// (0x0002acd6) form_field_popup_pane_ParamLimits

0xd2c0,	// (0x0002acd6) form_field_popup_pane

0xd2d8,	// (0x0002acee) form_field_popup_wide_pane_ParamLimits

0xd2d8,	// (0x0002acee) form_field_popup_wide_pane

0xd2ef,	// (0x0002ad05) form_field_slider_pane_ParamLimits

0xd2ef,	// (0x0002ad05) form_field_slider_pane

0xd302,	// (0x0002ad18) form_field_slider_wide_pane_ParamLimits

0xd302,	// (0x0002ad18) form_field_slider_wide_pane

0x52cb,	// (0x00022ce1) data_form_pane

0x9e78,	// (0x0002788e) form_field_data_pane_t1

0x52d7,	// (0x00022ced) input_focus_pane

0x52e5,	// (0x00022cfb) data_form_wide_pane

0xd329,	// (0x0002ad3f) form_field_data_wide_pane_t1

0x50fd,	// (0x00022b13) input_focus_pane_cp6

0xd34b,	// (0x0002ad61) form_field_popup_pane_t1

0x52d7,	// (0x00022ced) input_focus_pane_cp7

0x52cb,	// (0x00022ce1) list_form_pane

0xd36b,	// (0x0002ad81) form_field_popup_wide_pane_t1

0x52d7,	// (0x00022ced) input_focus_pane_cp8

0x5311,	// (0x00022d27) list_form_wide_pane

0xd388,	// (0x0002ad9e) form_field_slider_pane_t1_ParamLimits

0xd388,	// (0x0002ad9e) form_field_slider_pane_t1

0xd39a,	// (0x0002adb0) form_field_slider_pane_t2_ParamLimits

0xd39a,	// (0x0002adb0) form_field_slider_pane_t2

0x0001,

0xf678,	// (0x0002d08e) form_field_slider_pane_t_ParamLimits

0xf678,	// (0x0002d08e) form_field_slider_pane_t

0x4d27,	// (0x0002273d) input_focus_pane_cp9_ParamLimits

0x4d27,	// (0x0002273d) input_focus_pane_cp9

0xd3ac,	// (0x0002adc2) slider_cont_pane_ParamLimits

0xd3ac,	// (0x0002adc2) slider_cont_pane

0x5320,	// (0x00022d36) form_field_slider_wide_pane_t1_ParamLimits

0x5320,	// (0x00022d36) form_field_slider_wide_pane_t1

0xd3c0,	// (0x0002add6) form_field_slider_wide_pane_t2_ParamLimits

0xd3c0,	// (0x0002add6) form_field_slider_wide_pane_t2

0x0001,

0xf67d,	// (0x0002d093) form_field_slider_wide_pane_t_ParamLimits

0xf67d,	// (0x0002d093) form_field_slider_wide_pane_t

0x4d27,	// (0x0002273d) input_focus_pane_cp10_ParamLimits

0x4d27,	// (0x0002273d) input_focus_pane_cp10

0xd3d2,	// (0x0002ade8) slider_cont_pane_cp1_ParamLimits

0xd3d2,	// (0x0002ade8) slider_cont_pane_cp1

0xd3e8,	// (0x0002adfe) slider_form_pane_cp

0x5332,	// (0x00022d48) input_focus_pane_g1

0x533a,	// (0x00022d50) input_focus_pane_g2

0x5342,	// (0x00022d58) input_focus_pane_g3

0x534a,	// (0x00022d60) input_focus_pane_g4

0x5352,	// (0x00022d68) input_focus_pane_g5

0x535a,	// (0x00022d70) input_focus_pane_g6

0x5362,	// (0x00022d78) input_focus_pane_g7

0x536a,	// (0x00022d80) input_focus_pane_g8

0x5372,	// (0x00022d88) input_focus_pane_g9

0x4c57,	// (0x0002266d) input_focus_pane_g10

0x0009,

0xf682,	// (0x0002d098) input_focus_pane_g

0x6591,	// (0x00023fa7) wait_border_pane_g3_copy1

0xd3f0,	// (0x0002ae06) data_form_pane_t1

0x4c57,	// (0x0002266d) wait_anim_pane_g1_copy1

0xd629,	// (0x0002b03f) data_form_wide_pane_t1

0xd40a,	// (0x0002ae20) list_form_graphic_pane_cp_ParamLimits

0xd40a,	// (0x0002ae20) list_form_graphic_pane_cp

0x71a7,	// (0x00024bbd) slider_form_pane_g1

0x71b0,	// (0x00024bc6) slider_form_pane_g2

0x0006,

0xf985,	// (0x0002d39b) slider_form_pane_g

0xd40a,	// (0x0002ae20) list_form_graphic_pane_ParamLimits

0xd40a,	// (0x0002ae20) list_form_graphic_pane

0xd420,	// (0x0002ae36) list_form_graphic_pane_g1

0xd428,	// (0x0002ae3e) list_form_graphic_pane_t1_ParamLimits

0xd428,	// (0x0002ae3e) list_form_graphic_pane_t1

0x4d3d,	// (0x00022753) list_highlight_pane_cp5_ParamLimits

0x4d3d,	// (0x00022753) list_highlight_pane_cp5

0xd43d,	// (0x0002ae53) find_pane_g1

0x537a,	// (0x00022d90) input_find_pane

0xd446,	// (0x0002ae5c) input_find_pane_g1_ParamLimits

0xd446,	// (0x0002ae5c) input_find_pane_g1

0xd452,	// (0x0002ae68) input_find_pane_t1_ParamLimits

0xd452,	// (0x0002ae68) input_find_pane_t1

0xd467,	// (0x0002ae7d) input_find_pane_t2_ParamLimits

0xd467,	// (0x0002ae7d) input_find_pane_t2

0x0001,

0xf697,	// (0x0002d0ad) input_find_pane_t_ParamLimits

0xf697,	// (0x0002d0ad) input_find_pane_t

0x5383,	// (0x00022d99) input_focus_pane_cp5_ParamLimits

0x5383,	// (0x00022d99) input_focus_pane_cp5

0x4d27,	// (0x0002273d) bg_popup_window_pane_cp2_ParamLimits

0x4d27,	// (0x0002273d) bg_popup_window_pane_cp2

0x539d,	// (0x00022db3) listscroll_menu_pane_ParamLimits

0x539d,	// (0x00022db3) listscroll_menu_pane

0x53a9,	// (0x00022dbf) popup_submenu_window_ParamLimits

0x53a9,	// (0x00022dbf) popup_submenu_window

0x53cd,	// (0x00022de3) find_popup_pane_g1

0x53d5,	// (0x00022deb) input_popup_find_pane_cp

0x5383,	// (0x00022d99) input_focus_pane_cp4_ParamLimits

0x5383,	// (0x00022d99) input_focus_pane_cp4

0x53df,	// (0x00022df5) input_popup_find_pane_t1_ParamLimits

0x53df,	// (0x00022df5) input_popup_find_pane_t1

0x4cd9,	// (0x000226ef) bg_popup_sub_pane_cp

0x540d,	// (0x00022e23) listscroll_popup_sub_pane

0x5415,	// (0x00022e2b) list_submenu_pane_ParamLimits

0x5415,	// (0x00022e2b) list_submenu_pane

0x5426,	// (0x00022e3c) scroll_pane_cp4

0x542e,	// (0x00022e44) list_single_popup_submenu_pane_ParamLimits

0x542e,	// (0x00022e44) list_single_popup_submenu_pane

0x5440,	// (0x00022e56) list_single_popup_submenu_pane_g1

0x5448,	// (0x00022e5e) list_single_popup_submenu_pane_t1_ParamLimits

0x5448,	// (0x00022e5e) list_single_popup_submenu_pane_t1

0x4d3d,	// (0x00022753) bg_active_tab_pane_cp1_ParamLimits

0x4d3d,	// (0x00022753) bg_active_tab_pane_cp1

0x9e9c,	// (0x000278b2) tabs_2_active_pane_g1

0x9ea4,	// (0x000278ba) tabs_2_active_pane_t1

0x4d3d,	// (0x00022753) bg_passive_tab_pane_cp1_ParamLimits

0x4d3d,	// (0x00022753) bg_passive_tab_pane_cp1

0x9e9c,	// (0x000278b2) tabs_2_passive_pane_g1

0x9ea4,	// (0x000278ba) tabs_2_passive_pane_t1

0x605f,	// (0x00023a75) bg_active_tab_pane_cp4

0x9eb6,	// (0x000278cc) tabs_2_long_active_pane_t1

0x9ec9,	// (0x000278df) bg_passive_tab_pane_cp4

0xaf7e,	// (0x00028994) list_single_midp_graphic_pane_g4_ParamLimits

0x605f,	// (0x00023a75) bg_active_tab_pane_cp5

0x9ed5,	// (0x000278eb) tabs_3_long_active_pane_t1

0x9ec9,	// (0x000278df) bg_passive_tab_pane_cp5

0xaf7e,	// (0x00028994) list_single_midp_graphic_pane_g4

0x4d3d,	// (0x00022753) bg_popup_window_pane_cp13_ParamLimits

0x4d3d,	// (0x00022753) bg_popup_window_pane_cp13

0x5472,	// (0x00022e88) listscroll_popup_fast_pane_ParamLimits

0x5472,	// (0x00022e88) listscroll_popup_fast_pane

0x5481,	// (0x00022e97) grid_popup_fast_pane_ParamLimits

0x5481,	// (0x00022e97) grid_popup_fast_pane

0x5493,	// (0x00022ea9) scroll_pane_cp9_ParamLimits

0x5493,	// (0x00022ea9) scroll_pane_cp9

0x8488,	// (0x00025e9e) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x8488,	// (0x00025e9e) list_single_graphic_hl_pane_t1_cp2

0x54b7,	// (0x00022ecd) input_focus_pane_cp20_ParamLimits

0x54b7,	// (0x00022ecd) input_focus_pane_cp20

0x54c5,	// (0x00022edb) query_popup_data_pane_t1_ParamLimits

0x54c5,	// (0x00022edb) query_popup_data_pane_t1

0x54d8,	// (0x00022eee) query_popup_data_pane_t2_ParamLimits

0x54d8,	// (0x00022eee) query_popup_data_pane_t2

0x551e,	// (0x00022f34) query_popup_data_pane_t3_ParamLimits

0x551e,	// (0x00022f34) query_popup_data_pane_t3

0x555f,	// (0x00022f75) query_popup_data_pane_t4_ParamLimits

0x555f,	// (0x00022f75) query_popup_data_pane_t4

0x559b,	// (0x00022fb1) query_popup_data_pane_t5_ParamLimits

0x559b,	// (0x00022fb1) query_popup_data_pane_t5

0x0004,

0xf69c,	// (0x0002d0b2) query_popup_data_pane_t_ParamLimits

0xf69c,	// (0x0002d0b2) query_popup_data_pane_t

0x5332,	// (0x00022d48) bg_set_opt_pane_g1

0x533a,	// (0x00022d50) bg_set_opt_pane_g2

0x5342,	// (0x00022d58) bg_set_opt_pane_g3

0x534a,	// (0x00022d60) bg_set_opt_pane_g4

0x5352,	// (0x00022d68) bg_set_opt_pane_g5

0x535a,	// (0x00022d70) bg_set_opt_pane_g6

0x5362,	// (0x00022d78) bg_set_opt_pane_g7

0x536a,	// (0x00022d80) bg_set_opt_pane_g8

0x5372,	// (0x00022d88) bg_set_opt_pane_g9

0x0008,

0xf6a7,	// (0x0002d0bd) bg_set_opt_pane_g

0xa2e2,	// (0x00027cf8) control_top_pane_stacon_ParamLimits

0xa2e2,	// (0x00027cf8) control_top_pane_stacon

0xa335,	// (0x00027d4b) signal_pane_stacon_ParamLimits

0xa335,	// (0x00027d4b) signal_pane_stacon

0x598e,	// (0x000233a4) stacon_top_pane_g1_ParamLimits

0x598e,	// (0x000233a4) stacon_top_pane_g1

0xa35a,	// (0x00027d70) title_pane_stacon_ParamLimits

0xa35a,	// (0x00027d70) title_pane_stacon

0xa37c,	// (0x00027d92) uni_indicator_pane_stacon_ParamLimits

0xa37c,	// (0x00027d92) uni_indicator_pane_stacon

0xa391,	// (0x00027da7) battery_pane_stacon_ParamLimits

0xa391,	// (0x00027da7) battery_pane_stacon

0xa3d1,	// (0x00027de7) control_bottom_pane_stacon_ParamLimits

0xa3d1,	// (0x00027de7) control_bottom_pane_stacon

0xa3f0,	// (0x00027e06) navi_pane_stacon_ParamLimits

0xa3f0,	// (0x00027e06) navi_pane_stacon

0x59b0,	// (0x000233c6) stacon_bottom_pane_g1_ParamLimits

0x59b0,	// (0x000233c6) stacon_bottom_pane_g1

0x55d2,	// (0x00022fe8) aid_levels_signal_lsc_ParamLimits

0x55d2,	// (0x00022fe8) aid_levels_signal_lsc

0x9ee7,	// (0x000278fd) signal_pane_stacon_g1_ParamLimits

0x9ee7,	// (0x000278fd) signal_pane_stacon_g1

0x9ef3,	// (0x00027909) signal_pane_stacon_g2_ParamLimits

0x9ef3,	// (0x00027909) signal_pane_stacon_g2

0x0001,

0xf6ba,	// (0x0002d0d0) signal_pane_stacon_g_ParamLimits

0xf6ba,	// (0x0002d0d0) signal_pane_stacon_g

0x9f27,	// (0x0002793d) title_pane_stacon_t1_ParamLimits

0x9f27,	// (0x0002793d) title_pane_stacon_t1

0x5600,	// (0x00023016) uni_indicator_pane_stacon_g1

0x560a,	// (0x00023020) uni_indicator_pane_stacon_g2

0x55ec,	// (0x00023002) uni_indicator_pane_stacon_g3

0x55f6,	// (0x0002300c) uni_indicator_pane_stacon_g4

0x0003,

0xf6c6,	// (0x0002d0dc) uni_indicator_pane_stacon_g

0x9f4c,	// (0x00027962) control_top_pane_stacon_g1

0x9f54,	// (0x0002796a) control_top_pane_stacon_t1_ParamLimits

0x9f54,	// (0x0002796a) control_top_pane_stacon_t1

0x5614,	// (0x0002302a) aid_levels_battery_lsc_ParamLimits

0x5614,	// (0x0002302a) aid_levels_battery_lsc

0x9f85,	// (0x0002799b) battery_pane_stacon_g1_ParamLimits

0x9f85,	// (0x0002799b) battery_pane_stacon_g1

0x9f91,	// (0x000279a7) battery_pane_stacon_g2_ParamLimits

0x9f91,	// (0x000279a7) battery_pane_stacon_g2

0x0001,

0xf6cf,	// (0x0002d0e5) battery_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0002d0e5) battery_pane_stacon_g

0x9fc0,	// (0x000279d6) navi_icon_pane_stacon

0x9fd0,	// (0x000279e6) navi_navi_pane_stacon

0x9fc0,	// (0x000279d6) navi_text_pane_stacon

0x9f4c,	// (0x00027962) control_bottom_pane_stacon_g1

0x9fe0,	// (0x000279f6) control_bottom_pane_stacon_t1_ParamLimits

0x9fe0,	// (0x000279f6) control_bottom_pane_stacon_t1

0xa011,	// (0x00027a27) grid_app_pane_ParamLimits

0xa011,	// (0x00027a27) grid_app_pane

0xa02d,	// (0x00027a43) scroll_pane_cp15_ParamLimits

0xa02d,	// (0x00027a43) scroll_pane_cp15

0xa03e,	// (0x00027a54) cell_app_pane_ParamLimits

0xa03e,	// (0x00027a54) cell_app_pane

0xa062,	// (0x00027a78) cell_app_pane_g1_ParamLimits

0xa062,	// (0x00027a78) cell_app_pane_g1

0x563c,	// (0x00023052) cell_app_pane_g2_ParamLimits

0x563c,	// (0x00023052) cell_app_pane_g2

0x0001,

0xf6d4,	// (0x0002d0ea) cell_app_pane_g_ParamLimits

0xf6d4,	// (0x0002d0ea) cell_app_pane_g

0xa086,	// (0x00027a9c) cell_app_pane_t1_ParamLimits

0xa086,	// (0x00027a9c) cell_app_pane_t1

0x5648,	// (0x0002305e) grid_highlight_pane_ParamLimits

0x5648,	// (0x0002305e) grid_highlight_pane

0x5332,	// (0x00022d48) cell_highlight_pane_g1

0x533a,	// (0x00022d50) cell_highlight_pane_g2

0x5342,	// (0x00022d58) cell_highlight_pane_g3

0x534a,	// (0x00022d60) cell_highlight_pane_g4

0x5352,	// (0x00022d68) cell_highlight_pane_g5

0x535a,	// (0x00022d70) cell_highlight_pane_g6

0x5362,	// (0x00022d78) cell_highlight_pane_g7

0x536a,	// (0x00022d80) cell_highlight_pane_g8

0x5372,	// (0x00022d88) cell_highlight_pane_g9

0x4c57,	// (0x0002266d) cell_highlight_pane_g10

0x0009,

0xf682,	// (0x0002d098) cell_highlight_pane_g

0x5659,	// (0x0002306f) bg_scroll_pane

0xa0b0,	// (0x00027ac6) scroll_handle_pane

0x56a0,	// (0x000230b6) scroll_bg_pane_g1

0x56b5,	// (0x000230cb) scroll_bg_pane_g2

0x56cd,	// (0x000230e3) scroll_bg_pane_g3

0x0002,

0xf6d9,	// (0x0002d0ef) scroll_bg_pane_g

0x56e2,	// (0x000230f8) scroll_handle_focus_pane_ParamLimits

0x56e2,	// (0x000230f8) scroll_handle_focus_pane

0x56a0,	// (0x000230b6) scroll_handle_pane_g1

0x56ef,	// (0x00023105) scroll_handle_pane_g2

0x56cd,	// (0x000230e3) scroll_handle_pane_g3

0x0002,

0xf6e0,	// (0x0002d0f6) scroll_handle_pane_g

0x5383,	// (0x00022d99) bg_popup_sub_pane_cp21_ParamLimits

0x5383,	// (0x00022d99) bg_popup_sub_pane_cp21

0x5703,	// (0x00023119) popup_fep_japan_predictive_window_t1_ParamLimits

0x5703,	// (0x00023119) popup_fep_japan_predictive_window_t1

0x571a,	// (0x00023130) popup_fep_japan_predictive_window_t2_ParamLimits

0x571a,	// (0x00023130) popup_fep_japan_predictive_window_t2

0x574d,	// (0x00023163) popup_fep_japan_predictive_window_t3_ParamLimits

0x574d,	// (0x00023163) popup_fep_japan_predictive_window_t3

0x0002,

0xf6e7,	// (0x0002d0fd) popup_fep_japan_predictive_window_t_ParamLimits

0xf6e7,	// (0x0002d0fd) popup_fep_japan_predictive_window_t

0x4cd9,	// (0x000226ef) bg_popup_sub_pane_cp23

0x5784,	// (0x0002319a) listscroll_japin_cand_pane

0x578c,	// (0x000231a2) popup_fep_japan_candidate_window_t1

0x579a,	// (0x000231b0) candidate_pane_ParamLimits

0x579a,	// (0x000231b0) candidate_pane

0x57ad,	// (0x000231c3) scroll_pane_cp30

0x57b5,	// (0x000231cb) list_single_popup_jap_candidate_pane_ParamLimits

0x57b5,	// (0x000231cb) list_single_popup_jap_candidate_pane

0x4cd9,	// (0x000226ef) list_highlight_pane_cp30

0x57ca,	// (0x000231e0) list_single_popup_jap_candidate_pane_t1

0xa0d9,	// (0x00027aef) level_1_signal

0xa0e6,	// (0x00027afc) level_2_signal

0xa0f3,	// (0x00027b09) level_3_signal

0xa100,	// (0x00027b16) level_4_signal

0xa10d,	// (0x00027b23) level_5_signal

0xa11a,	// (0x00027b30) level_6_signal

0xa127,	// (0x00027b3d) level_7_signal

0xa0d9,	// (0x00027aef) level_1_battery

0xa0e6,	// (0x00027afc) level_2_battery

0xa0f3,	// (0x00027b09) level_3_battery

0xa100,	// (0x00027b16) level_4_battery

0xa10d,	// (0x00027b23) level_5_battery

0xa11a,	// (0x00027b30) level_6_battery

0xa127,	// (0x00027b3d) level_7_battery

0x57f1,	// (0x00023207) list_menu_pane_ParamLimits

0x57f1,	// (0x00023207) list_menu_pane

0x5807,	// (0x0002321d) scroll_pane_cp25_ParamLimits

0x5807,	// (0x0002321d) scroll_pane_cp25

0xa153,	// (0x00027b69) list_double2_graphic_pane_cp2_ParamLimits

0xa153,	// (0x00027b69) list_double2_graphic_pane_cp2

0xa153,	// (0x00027b69) list_double2_large_graphic_pane_cp2_ParamLimits

0xa153,	// (0x00027b69) list_double2_large_graphic_pane_cp2

0xa153,	// (0x00027b69) list_double2_pane_cp2_ParamLimits

0xa153,	// (0x00027b69) list_double2_pane_cp2

0xa153,	// (0x00027b69) list_double_graphic_pane_cp2_ParamLimits

0xa153,	// (0x00027b69) list_double_graphic_pane_cp2

0xa153,	// (0x00027b69) list_double_large_graphic_pane_cp2_ParamLimits

0xa153,	// (0x00027b69) list_double_large_graphic_pane_cp2

0xa153,	// (0x00027b69) list_double_number_pane_cp2_ParamLimits

0xa153,	// (0x00027b69) list_double_number_pane_cp2

0xa153,	// (0x00027b69) list_double_pane_cp2_ParamLimits

0xa153,	// (0x00027b69) list_double_pane_cp2

0xa163,	// (0x00027b79) list_single_2graphic_pane_cp2_ParamLimits

0xa163,	// (0x00027b79) list_single_2graphic_pane_cp2

0xa163,	// (0x00027b79) list_single_graphic_heading_pane_cp2_ParamLimits

0xa163,	// (0x00027b79) list_single_graphic_heading_pane_cp2

0xa163,	// (0x00027b79) list_single_graphic_pane_cp2_ParamLimits

0xa163,	// (0x00027b79) list_single_graphic_pane_cp2

0xa163,	// (0x00027b79) list_single_heading_pane_cp2_ParamLimits

0xa163,	// (0x00027b79) list_single_heading_pane_cp2

0xa178,	// (0x00027b8e) list_single_large_graphic_pane_cp2_ParamLimits

0xa178,	// (0x00027b8e) list_single_large_graphic_pane_cp2

0xa163,	// (0x00027b79) list_single_number_heading_pane_cp2_ParamLimits

0xa163,	// (0x00027b79) list_single_number_heading_pane_cp2

0xa163,	// (0x00027b79) list_single_number_pane_cp2_ParamLimits

0xa163,	// (0x00027b79) list_single_number_pane_cp2

0xa163,	// (0x00027b79) list_single_pane_cp2_ParamLimits

0xa163,	// (0x00027b79) list_single_pane_cp2

0x5829,	// (0x0002323f) bg_popup_sub_pane_cp22

0xa252,	// (0x00027c68) popup_side_volume_key_window_g1

0xa276,	// (0x00027c8c) popup_side_volume_key_window_t1

0xa292,	// (0x00027ca8) volume_small_pane_cp1

0x4d27,	// (0x0002273d) bg_popup_sub_pane_cp24_ParamLimits

0x4d27,	// (0x0002273d) bg_popup_sub_pane_cp24

0x583f,	// (0x00023255) fep_china_uni_candidate_pane_ParamLimits

0x583f,	// (0x00023255) fep_china_uni_candidate_pane

0x5853,	// (0x00023269) fep_china_uni_entry_pane

0x5863,	// (0x00023279) popup_fep_china_uni_window_g1

0x587f,	// (0x00023295) fep_china_uni_entry_pane_g1

0x5887,	// (0x0002329d) fep_china_uni_entry_pane_g2

0x0001,

0xf718,	// (0x0002d12e) fep_china_uni_entry_pane_g

0x588f,	// (0x000232a5) fep_entry_item_pane

0x5899,	// (0x000232af) fep_candidate_item_pane

0x58a1,	// (0x000232b7) fep_china_uni_candidate_pane_g1

0x58a9,	// (0x000232bf) fep_china_uni_candidate_pane_g2

0x58b1,	// (0x000232c7) fep_china_uni_candidate_pane_g3

0x58b9,	// (0x000232cf) fep_china_uni_candidate_pane_g4

0x0003,

0xf71d,	// (0x0002d133) fep_china_uni_candidate_pane_g

0x4c57,	// (0x0002266d) fep_entry_item_pane_g1

0x58c1,	// (0x000232d7) fep_entry_item_pane_t1_ParamLimits

0x58c1,	// (0x000232d7) fep_entry_item_pane_t1

0x58d7,	// (0x000232ed) fep_candidate_item_pane_t1_ParamLimits

0x58d7,	// (0x000232ed) fep_candidate_item_pane_t1

0x58ec,	// (0x00023302) fep_candidate_item_pane_t2_ParamLimits

0x58ec,	// (0x00023302) fep_candidate_item_pane_t2

0x0001,

0xf726,	// (0x0002d13c) fep_candidate_item_pane_t_ParamLimits

0xf726,	// (0x0002d13c) fep_candidate_item_pane_t

0x4d3d,	// (0x00022753) list_highlight_pane_cp31_ParamLimits

0x4d3d,	// (0x00022753) list_highlight_pane_cp31

0x58fe,	// (0x00023314) level_1_signal_lsc

0x5907,	// (0x0002331d) level_2_signal_lsc

0x5910,	// (0x00023326) level_3_signal_lsc

0x5919,	// (0x0002332f) level_4_signal_lsc

0x5922,	// (0x00023338) level_5_signal_lsc

0x592b,	// (0x00023341) level_6_signal_lsc

0x5934,	// (0x0002334a) level_7_signal_lsc

0x5934,	// (0x0002334a) level_1_battery_lsc

0x593d,	// (0x00023353) level_2_battery_lsc

0x5946,	// (0x0002335c) level_3_battery_lsc

0x594f,	// (0x00023365) level_4_battery_lsc

0x5958,	// (0x0002336e) level_5_battery_lsc

0x5961,	// (0x00023377) level_6_battery_lsc

0x58fe,	// (0x00023314) level_7_battery_lsc

0x596a,	// (0x00023380) scroll_handle_focus_pane_g1

0x5973,	// (0x00023389) scroll_handle_focus_pane_g2

0x597c,	// (0x00023392) scroll_handle_focus_pane_g3

0x0002,

0xf72b,	// (0x0002d141) scroll_handle_focus_pane_g

0xd47c,	// (0x0002ae92) list_single_2graphic_pane_g1_ParamLimits

0xd47c,	// (0x0002ae92) list_single_2graphic_pane_g1

0xce93,	// (0x0002a8a9) list_single_2graphic_pane_g2_ParamLimits

0xce93,	// (0x0002a8a9) list_single_2graphic_pane_g2

0xce25,	// (0x0002a83b) list_single_2graphic_pane_g3_ParamLimits

0xce25,	// (0x0002a83b) list_single_2graphic_pane_g3

0xd488,	// (0x0002ae9e) list_single_2graphic_pane_g4_ParamLimits

0xd488,	// (0x0002ae9e) list_single_2graphic_pane_g4

0x0003,

0xf732,	// (0x0002d148) list_single_2graphic_pane_g_ParamLimits

0xf732,	// (0x0002d148) list_single_2graphic_pane_g

0xd499,	// (0x0002aeaf) list_single_2graphic_pane_t1_ParamLimits

0xd499,	// (0x0002aeaf) list_single_2graphic_pane_t1

0xd4c7,	// (0x0002aedd) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xd4c7,	// (0x0002aedd) list_double2_graphic_large_graphic_pane_g1

0xcf36,	// (0x0002a94c) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xcf36,	// (0x0002a94c) list_double2_graphic_large_graphic_pane_g2

0xcf02,	// (0x0002a918) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xcf02,	// (0x0002a918) list_double2_graphic_large_graphic_pane_g3

0xd4d7,	// (0x0002aeed) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xd4d7,	// (0x0002aeed) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf73b,	// (0x0002d151) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf73b,	// (0x0002d151) list_double2_graphic_large_graphic_pane_g

0xd4e3,	// (0x0002aef9) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xd4e3,	// (0x0002aef9) list_double2_graphic_large_graphic_pane_t1

0xd4f9,	// (0x0002af0f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xd4f9,	// (0x0002af0f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf744,	// (0x0002d15a) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf744,	// (0x0002d15a) list_double2_graphic_large_graphic_pane_t

0x5a57,	// (0x0002346d) popup_fast_swap_window_ParamLimits

0x5a57,	// (0x0002346d) popup_fast_swap_window

0x5a73,	// (0x00023489) popup_side_volume_key_window

0x5a8d,	// (0x000234a3) stacon_top_pane

0x5a97,	// (0x000234ad) status_pane_ParamLimits

0x5a97,	// (0x000234ad) status_pane

0xa425,	// (0x00027e3b) status_small_pane

0x4cd9,	// (0x000226ef) control_pane

0x4cd9,	// (0x000226ef) stacon_bottom_pane

0x527e,	// (0x00022c94) scroll_pane_cp121

0x52c2,	// (0x00022cd8) set_content_pane

0xa29a,	// (0x00027cb0) bg_active_tab_pane_g1_cp1

0x5985,	// (0x0002339b) bg_active_tab_pane_g2_cp1

0xa2a3,	// (0x00027cb9) bg_active_tab_pane_g3_cp1

0xa29a,	// (0x00027cb0) bg_passive_tab_pane_g1_cp1

0x5985,	// (0x0002339b) bg_passive_tab_pane_g2_cp1

0xa2a3,	// (0x00027cb9) bg_passive_tab_pane_g3_cp1

0xa2ac,	// (0x00027cc2) bg_active_tab_pane_g1_cp2

0x5985,	// (0x0002339b) bg_active_tab_pane_g2_cp2

0xa2b5,	// (0x00027ccb) bg_active_tab_pane_g3_cp2

0xa2ac,	// (0x00027cc2) bg_passive_tab_pane_g1_cp2

0x5985,	// (0x0002339b) bg_passive_tab_pane_g2_cp2

0xa2b5,	// (0x00027ccb) bg_passive_tab_pane_g3_cp2

0xa2be,	// (0x00027cd4) bg_active_tab_pane_g1_cp3

0x5985,	// (0x0002339b) bg_active_tab_pane_g2_cp3

0xa2c7,	// (0x00027cdd) bg_active_tab_pane_g3_cp3

0xa2be,	// (0x00027cd4) bg_passive_tab_pane_g1_cp3

0x5985,	// (0x0002339b) bg_passive_tab_pane_g2_cp3

0xa2c7,	// (0x00027cdd) bg_passive_tab_pane_g3_cp3

0xa2d0,	// (0x00027ce6) bg_active_tab_pane_g1_cp4

0x5985,	// (0x0002339b) bg_active_tab_pane_g2_cp4

0xa2d9,	// (0x00027cef) bg_active_tab_pane_g3_cp4

0xa2d0,	// (0x00027ce6) bg_passive_tab_pane_g1_cp4

0x5985,	// (0x0002339b) bg_passive_tab_pane_g2_cp4

0xa2d9,	// (0x00027cef) bg_passive_tab_pane_g3_cp4

0x59d5,	// (0x000233eb) bg_active_tab_pane_g1_cp5

0x5985,	// (0x0002339b) bg_active_tab_pane_g2_cp5

0x59cc,	// (0x000233e2) bg_active_tab_pane_g3_cp5

0x59d5,	// (0x000233eb) bg_passive_tab_pane_g1_cp5

0x5985,	// (0x0002339b) bg_passive_tab_pane_g2_cp5

0x59cc,	// (0x000233e2) bg_passive_tab_pane_g3_cp5

0xa40f,	// (0x00027e25) list_set_graphic_pane_ParamLimits

0xa40f,	// (0x00027e25) list_set_graphic_pane

0x4cd9,	// (0x000226ef) bg_set_opt_pane_cp4

0x59de,	// (0x000233f4) list_set_graphic_pane_g1_ParamLimits

0x59de,	// (0x000233f4) list_set_graphic_pane_g1

0x59ea,	// (0x00023400) list_set_graphic_pane_g2_ParamLimits

0x59ea,	// (0x00023400) list_set_graphic_pane_g2

0x0001,

0xf749,	// (0x0002d15f) list_set_graphic_pane_g_ParamLimits

0xf749,	// (0x0002d15f) list_set_graphic_pane_g

0x0009,

0xfad5,	// (0x0002d4eb) volume_small_pane_cp_g

0x5a0c,	// (0x00023422) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x5a0c,	// (0x00023422) list_double2_large_graphic_pane_g1_cp2

0x5a18,	// (0x0002342e) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x5a18,	// (0x0002342e) list_double2_large_graphic_pane_g2_cp2

0x5a27,	// (0x0002343d) list_double2_large_graphic_pane_g3_cp2

0x5a2f,	// (0x00023445) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x5a2f,	// (0x00023445) list_double2_large_graphic_pane_t1_cp2

0x5a45,	// (0x0002345b) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x5a45,	// (0x0002345b) list_double2_large_graphic_pane_t2_cp2

0x6f00,	// (0x00024916) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x6f00,	// (0x00024916) list_double_large_graphic_pane_g1_cp2

0x6f11,	// (0x00024927) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x6f11,	// (0x00024927) list_double_large_graphic_pane_g2_cp2

0x5b72,	// (0x00023588) list_double_large_graphic_pane_g3_cp2

0x6f20,	// (0x00024936) list_double_large_graphic_pane_g4_cp

0x6f28,	// (0x0002493e) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6f28,	// (0x0002493e) list_double_large_graphic_pane_t1_cp2

0x6f3f,	// (0x00024955) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6f3f,	// (0x00024955) list_double_large_graphic_pane_t2_cp2

0x5aa5,	// (0x000234bb) list_double2_graphic_pane_g1_cp2_ParamLimits

0x5aa5,	// (0x000234bb) list_double2_graphic_pane_g1_cp2

0x5ab1,	// (0x000234c7) list_double2_graphic_pane_g2_cp2_ParamLimits

0x5ab1,	// (0x000234c7) list_double2_graphic_pane_g2_cp2

0x5ac0,	// (0x000234d6) list_double2_graphic_pane_g3_cp2

0x5ac8,	// (0x000234de) list_double2_graphic_pane_t1_cp2_ParamLimits

0x5ac8,	// (0x000234de) list_double2_graphic_pane_t1_cp2

0x5ade,	// (0x000234f4) list_double2_graphic_pane_t2_cp2_ParamLimits

0x5ade,	// (0x000234f4) list_double2_graphic_pane_t2_cp2

0x5af0,	// (0x00023506) list_single_number_heading_pane_g1_cp2_ParamLimits

0x5af0,	// (0x00023506) list_single_number_heading_pane_g1_cp2

0x5afc,	// (0x00023512) list_single_number_heading_pane_g2_cp2

0x5b04,	// (0x0002351a) list_single_number_heading_pane_t1_cp2_ParamLimits

0x5b04,	// (0x0002351a) list_single_number_heading_pane_t1_cp2

0x5b1a,	// (0x00023530) list_single_number_heading_pane_t2_cp2_ParamLimits

0x5b1a,	// (0x00023530) list_single_number_heading_pane_t2_cp2

0x5b2c,	// (0x00023542) list_single_number_heading_pane_t3_cp2_ParamLimits

0x5b2c,	// (0x00023542) list_single_number_heading_pane_t3_cp2

0x5af0,	// (0x00023506) list_single_heading_pane_g1_cp2_ParamLimits

0x5af0,	// (0x00023506) list_single_heading_pane_g1_cp2

0x5afc,	// (0x00023512) list_single_heading_pane_g2_cp2

0x5b04,	// (0x0002351a) list_single_heading_pane_t1_cp2_ParamLimits

0x5b04,	// (0x0002351a) list_single_heading_pane_t1_cp2

0x6d0a,	// (0x00024720) list_single_heading_pane_t2_cp2_ParamLimits

0x6d0a,	// (0x00024720) list_single_heading_pane_t2_cp2

0x6c8f,	// (0x000246a5) list_double_graphic_pane_g1_cp2_ParamLimits

0x6c8f,	// (0x000246a5) list_double_graphic_pane_g1_cp2

0x6c9b,	// (0x000246b1) list_double_graphic_pane_g2_cp2_ParamLimits

0x6c9b,	// (0x000246b1) list_double_graphic_pane_g2_cp2

0x6caa,	// (0x000246c0) list_double_graphic_pane_g3_cp2

0x6cb2,	// (0x000246c8) list_double_graphic_pane_t1_cp2_ParamLimits

0x6cb2,	// (0x000246c8) list_double_graphic_pane_t1_cp2

0x6cc8,	// (0x000246de) list_double_graphic_pane_t2_cp2_ParamLimits

0x6cc8,	// (0x000246de) list_double_graphic_pane_t2_cp2

0x5b66,	// (0x0002357c) list_double_number_pane_g1_cp2_ParamLimits

0x5b66,	// (0x0002357c) list_double_number_pane_g1_cp2

0x5b72,	// (0x00023588) list_double_number_pane_g2_cp2

0x6c55,	// (0x0002466b) list_double_number_pane_t1_cp2_ParamLimits

0x6c55,	// (0x0002466b) list_double_number_pane_t1_cp2

0x6c67,	// (0x0002467d) list_double_number_pane_t2_cp2_ParamLimits

0x6c67,	// (0x0002467d) list_double_number_pane_t2_cp2

0x6c7d,	// (0x00024693) list_double_number_pane_t3_cp2_ParamLimits

0x6c7d,	// (0x00024693) list_double_number_pane_t3_cp2

0x6bcd,	// (0x000245e3) list_single_graphic_pane_g1_cp2_ParamLimits

0x6bcd,	// (0x000245e3) list_single_graphic_pane_g1_cp2

0x5af0,	// (0x00023506) list_single_graphic_pane_g2_cp2_ParamLimits

0x5af0,	// (0x00023506) list_single_graphic_pane_g2_cp2

0x5afc,	// (0x00023512) list_single_graphic_pane_g3_cp2

0x6ba5,	// (0x000245bb) list_single_graphic_pane_t1_cp2_ParamLimits

0x6ba5,	// (0x000245bb) list_single_graphic_pane_t1_cp2

0x5af0,	// (0x00023506) list_single_number_pane_g1_cp2_ParamLimits

0x5af0,	// (0x00023506) list_single_number_pane_g1_cp2

0x5afc,	// (0x00023512) list_single_number_pane_g2_cp2

0x6ba5,	// (0x000245bb) list_single_number_pane_t1_cp2_ParamLimits

0x6ba5,	// (0x000245bb) list_single_number_pane_t1_cp2

0x6bbb,	// (0x000245d1) list_single_number_pane_t2_cp2_ParamLimits

0x6bbb,	// (0x000245d1) list_single_number_pane_t2_cp2

0x5a18,	// (0x0002342e) list_double2_pane_g1_cp2_ParamLimits

0x5a18,	// (0x0002342e) list_double2_pane_g1_cp2

0x5a27,	// (0x0002343d) list_double2_pane_g2_cp2

0x5b3e,	// (0x00023554) list_double2_pane_t1_cp2_ParamLimits

0x5b3e,	// (0x00023554) list_double2_pane_t1_cp2

0x5b54,	// (0x0002356a) list_double2_pane_t2_cp2_ParamLimits

0x5b54,	// (0x0002356a) list_double2_pane_t2_cp2

0x5b66,	// (0x0002357c) list_double_pane_g1_cp2_ParamLimits

0x5b66,	// (0x0002357c) list_double_pane_g1_cp2

0x5b72,	// (0x00023588) list_double_pane_g2_cp2

0x5b7a,	// (0x00023590) list_double_pane_t1_cp2_ParamLimits

0x5b7a,	// (0x00023590) list_double_pane_t1_cp2

0x5b90,	// (0x000235a6) list_double_pane_t2_cp2_ParamLimits

0x5b90,	// (0x000235a6) list_double_pane_t2_cp2

0x5bb8,	// (0x000235ce) list_single_pane_cp2_g3

0x5af0,	// (0x00023506) list_single_pane_g1_cp2_ParamLimits

0x5af0,	// (0x00023506) list_single_pane_g1_cp2

0x5afc,	// (0x00023512) list_single_pane_g2_cp2

0x5bc8,	// (0x000235de) list_single_pane_t1_cp2_ParamLimits

0x5bc8,	// (0x000235de) list_single_pane_t1_cp2

0x5be0,	// (0x000235f6) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x5be0,	// (0x000235f6) list_single_large_graphic_pane_g1_cp2

0x5bec,	// (0x00023602) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x5bec,	// (0x00023602) list_single_large_graphic_pane_g2_cp2

0x5bf8,	// (0x0002360e) list_single_large_graphic_pane_g3_cp2

0x5c00,	// (0x00023616) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x5c00,	// (0x00023616) list_single_large_graphic_pane_g4_cp1

0x5c1a,	// (0x00023630) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x5c1a,	// (0x00023630) list_single_large_graphic_pane_t1_cp2

0x6b87,	// (0x0002459d) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x6b87,	// (0x0002459d) list_single_graphic_heading_pane_g1_cp2

0x6b62,	// (0x00024578) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x6b62,	// (0x00024578) list_single_graphic_heading_pane_g4_cp2

0x5afc,	// (0x00023512) list_single_graphic_heading_pane_g5_cp2

0x5b04,	// (0x0002351a) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5b04,	// (0x0002351a) list_single_graphic_heading_pane_t1_cp2

0x6b93,	// (0x000245a9) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x6b93,	// (0x000245a9) list_single_graphic_heading_pane_t2_cp2

0x6b56,	// (0x0002456c) list_single_2graphic_pane_g1_cp2_ParamLimits

0x6b56,	// (0x0002456c) list_single_2graphic_pane_g1_cp2

0x6b62,	// (0x00024578) list_single_2graphic_pane_g2_cp2_ParamLimits

0x6b62,	// (0x00024578) list_single_2graphic_pane_g2_cp2

0x5afc,	// (0x00023512) list_single_2graphic_pane_g3_cp2

0x6079,	// (0x00023a8f) list_single_2graphic_pane_g4_cp2_ParamLimits

0x6079,	// (0x00023a8f) list_single_2graphic_pane_g4_cp2

0x6b71,	// (0x00024587) list_single_2graphic_pane_t1_cp2_ParamLimits

0x6b71,	// (0x00024587) list_single_2graphic_pane_t1_cp2

0x4c57,	// (0x0002266d) list_highlight_pane_g10_cp1

0x6768,	// (0x0002417e) list_highlight_pane_g1_cp1

0x6770,	// (0x00024186) list_highlight_pane_g2_cp1

0x6778,	// (0x0002418e) list_highlight_pane_g3_cp1

0x6780,	// (0x00024196) list_highlight_pane_g4_cp1

0x6788,	// (0x0002419e) list_highlight_pane_g5_cp1

0x6790,	// (0x000241a6) list_highlight_pane_g6_cp1

0x6798,	// (0x000241ae) list_highlight_pane_g7_cp1

0x67a0,	// (0x000241b6) list_highlight_pane_g8_cp1

0x67a8,	// (0x000241be) list_highlight_pane_g9_cp1

0xb0bb,	// (0x00028ad1) form_field_slider_pane_t3

0xb0c9,	// (0x00028adf) form_field_slider_pane_t4

0x66b2,	// (0x000240c8) slider_form_pane_ParamLimits

0x66b2,	// (0x000240c8) slider_form_pane

0x4cd9,	// (0x000226ef) control_abbreviations

0x4cd9,	// (0x000226ef) control_conventions

0x4cd9,	// (0x000226ef) control_definitions

0x4cd9,	// (0x000226ef) format_table_attribute

0x6d54,	// (0x0002476a) bg_popup_preview_window_pane_g9

0x4cd9,	// (0x000226ef) format_table_data2

0x4cd9,	// (0x000226ef) format_table_data3

0x4cd9,	// (0x000226ef) format_table_data_example

0x0008,

0x4cd9,	// (0x000226ef) intro_purpose

0xf8e5,	// (0x0002d2fb) bg_popup_preview_window_pane_g

0x4cd9,	// (0x000226ef) texts_category

0x4cd9,	// (0x000226ef) texts_graphics

0x5c30,	// (0x00023646) text_digital

0x5c3f,	// (0x00023655) text_primary

0x5c4e,	// (0x00023664) text_primary_small

0x5c5d,	// (0x00023673) text_secondary

0x5c6c,	// (0x00023682) text_title

0x7241,	// (0x00024c57) bg_passive_tab_pane_g1_cp3_srt

0x5985,	// (0x0002339b) bg_passive_tab_pane_g2_cp3_srt

0x7238,	// (0x00024c4e) bg_passive_tab_pane_g3_cp3_srt

0x4d3d,	// (0x00022753) bg_active_tab_pane_cp3_srt_ParamLimits

0x4d3d,	// (0x00022753) bg_active_tab_pane_cp3_srt

0x7171,	// (0x00024b87) tabs_4_active_pane_srt_g1

0x9bf0,	// (0x00027606) tabs_4_active_pane_srt_t1_ParamLimits

0x9bf0,	// (0x00027606) tabs_4_active_pane_srt_t1

0x7241,	// (0x00024c57) bg_active_tab_pane_g1_cp3_copy1

0x5985,	// (0x0002339b) bg_active_tab_pane_g2_cp3_copy1

0x7238,	// (0x00024c4e) bg_active_tab_pane_g3_cp3_copy1

0x4d3d,	// (0x00022753) tabs_2_long_active_pane_srt_ParamLimits

0x4d3d,	// (0x00022753) tabs_2_long_active_pane_srt

0x4d3d,	// (0x00022753) tabs_2_long_passive_pane_srt_ParamLimits

0x4d3d,	// (0x00022753) tabs_2_long_passive_pane_srt

0x9ec9,	// (0x000278df) bg_passive_tab_pane_cp4_srt_ParamLimits

0x9ec9,	// (0x000278df) bg_passive_tab_pane_cp4_srt

0x710c,	// (0x00024b22) bg_passive_tab_pane_g1_cp4_srt

0x5985,	// (0x0002339b) bg_passive_tab_pane_g2_cp4_srt

0x7103,	// (0x00024b19) bg_passive_tab_pane_g3_cp4_srt

0x605f,	// (0x00023a75) bg_active_tab_pane_cp4_srt_ParamLimits

0x605f,	// (0x00023a75) bg_active_tab_pane_cp4_srt

0x9eb6,	// (0x000278cc) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9eb6,	// (0x000278cc) tabs_2_long_active_pane_srt_t1

0x710c,	// (0x00024b22) bg_active_tab_pane_g1_cp4_srt

0x5985,	// (0x0002339b) bg_active_tab_pane_g2_cp4_srt

0x7103,	// (0x00024b19) bg_active_tab_pane_g3_cp4_srt

0x4d27,	// (0x0002273d) tabs_3_long_active_pane_srt_ParamLimits

0x4d27,	// (0x0002273d) tabs_3_long_active_pane_srt

0x4d27,	// (0x0002273d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x4d27,	// (0x0002273d) tabs_3_long_passive_pane_cp_srt

0x4d27,	// (0x0002273d) tabs_3_long_passive_pane_srt_ParamLimits

0x4d27,	// (0x0002273d) tabs_3_long_passive_pane_srt

0x9ec9,	// (0x000278df) bg_passive_tab_pane_cp5_srt_ParamLimits

0x9ec9,	// (0x000278df) bg_passive_tab_pane_cp5_srt

0x59d5,	// (0x000233eb) bg_passive_tab_pane_g1_cp5_srt

0x5985,	// (0x0002339b) bg_passive_tab_pane_g2_cp5_srt

0x59cc,	// (0x000233e2) bg_passive_tab_pane_g3_cp5_srt

0x605f,	// (0x00023a75) bg_active_tab_pane_cp5_srt_ParamLimits

0x605f,	// (0x00023a75) bg_active_tab_pane_cp5_srt

0x9ed5,	// (0x000278eb) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9ed5,	// (0x000278eb) tabs_3_long_active_pane_srt_t1

0x59d5,	// (0x000233eb) bg_active_tab_pane_g1_cp5_srt

0x5985,	// (0x0002339b) bg_active_tab_pane_g2_cp5_srt

0x59cc,	// (0x000233e2) bg_active_tab_pane_g3_cp5_srt

0x70f5,	// (0x00024b0b) navi_text_pane_srt_t1

0x70ed,	// (0x00024b03) navi_icon_pane_srt_g1

0x5d84,	// (0x0002379a) midp_editing_number_pane_srt

0x5c7b,	// (0x00023691) midp_ticker_pane_srt

0x5d8c,	// (0x000237a2) midp_ticker_pane_srt_g1

0x5d94,	// (0x000237aa) midp_ticker_pane_srt_g2

0x0001,

0xf768,	// (0x0002d17e) midp_ticker_pane_srt_g

0x5d9c,	// (0x000237b2) midp_ticker_pane_srt_t1

0x70de,	// (0x00024af4) midp_editing_number_pane_t1_copy1

0xa42e,	// (0x00027e44) listscroll_midp_pane

0xa42e,	// (0x00027e44) midp_form_pane

0x5c83,	// (0x00023699) midp_info_popup_window_ParamLimits

0x5c83,	// (0x00023699) midp_info_popup_window

0x5383,	// (0x00022d99) bg_popup_sub_pane_cp50_ParamLimits

0x5383,	// (0x00022d99) bg_popup_sub_pane_cp50

0x63cf,	// (0x00023de5) listscroll_midp_info_pane_ParamLimits

0x63cf,	// (0x00023de5) listscroll_midp_info_pane

0x63b7,	// (0x00023dcd) listscroll_form_midp_pane_ParamLimits

0x63b7,	// (0x00023dcd) listscroll_form_midp_pane

0x63c3,	// (0x00023dd9) scroll_bar_cp050

0xb0a3,	// (0x00028ab9) list_midp_pane

0x7a1a,	// (0x00025430) signal_pane_g2_cp

0x62e9,	// (0x00023cff) listscroll_midp_info_pane_t1_ParamLimits

0x62e9,	// (0x00023cff) listscroll_midp_info_pane_t1

0x6301,	// (0x00023d17) listscroll_midp_info_pane_t2_ParamLimits

0x6301,	// (0x00023d17) listscroll_midp_info_pane_t2

0x633f,	// (0x00023d55) listscroll_midp_info_pane_t3_ParamLimits

0x633f,	// (0x00023d55) listscroll_midp_info_pane_t3

0x6379,	// (0x00023d8f) listscroll_midp_info_pane_t4_ParamLimits

0x6379,	// (0x00023d8f) listscroll_midp_info_pane_t4

0x0003,

0xf820,	// (0x0002d236) listscroll_midp_info_pane_t_ParamLimits

0xf820,	// (0x0002d236) listscroll_midp_info_pane_t

0x5426,	// (0x00022e3c) scroll_pane_cp21

0x628d,	// (0x00023ca3) form_midp_field_choice_group_pane

0x6296,	// (0x00023cac) form_midp_field_text_pane

0x62cf,	// (0x00023ce5) form_midp_field_time_pane

0x62d7,	// (0x00023ced) form_midp_gauge_slider_pane

0x62e0,	// (0x00023cf6) form_midp_gauge_wait_pane

0x4cd9,	// (0x000226ef) form_midp_image_pane

0xd601,	// (0x0002b017) list_single_midp_pane_ParamLimits

0xd601,	// (0x0002b017) list_single_midp_pane

0x625b,	// (0x00023c71) form_midp_field_text_pane_t1

0x60b1,	// (0x00023ac7) input_focus_pane_cp050

0x627c,	// (0x00023c92) list_midp_form_text_pane

0x622a,	// (0x00023c40) form_midp_field_choice_group_pane_t1

0x6238,	// (0x00023c4e) input_focus_pane_cp051

0x624c,	// (0x00023c62) list_midp_choice_pane

0x4cd9,	// (0x000226ef) status_idle_pane

0x620e,	// (0x00023c24) form_midp_field_time_pane_t1

0x4c57,	// (0x0002266d) wait_anim_pane_g2_copy1

0x621c,	// (0x00023c32) form_midp_field_time_pane_t2

0x0001,

0x5cee,	// (0x00023704) aid_navinavi_width_2_pane

0xf81b,	// (0x0002d231) form_midp_field_time_pane_t

0x4cd9,	// (0x000226ef) input_focus_pane_cp052

0x4cd9,	// (0x000226ef) bg_input_focus_pane_cp040

0x61ea,	// (0x00023c00) form_midp_gauge_slider_pane_t1

0x61f8,	// (0x00023c0e) form_midp_gauge_slider_pane_t2

0xb087,	// (0x00028a9d) form_midp_gauge_slider_pane_t3

0xb095,	// (0x00028aab) form_midp_gauge_slider_pane_t4

0x0003,

0xf812,	// (0x0002d228) form_midp_gauge_slider_pane_t

0x6206,	// (0x00023c1c) form_midp_slider_pane

0x4d3d,	// (0x00022753) bg_input_focus_pane_cp041_ParamLimits

0x4d3d,	// (0x00022753) bg_input_focus_pane_cp041

0x61ba,	// (0x00023bd0) form_midp_gauge_wait_pane_t1_ParamLimits

0x61ba,	// (0x00023bd0) form_midp_gauge_wait_pane_t1

0x61cc,	// (0x00023be2) form_midp_gauge_wait_pane_t2_ParamLimits

0x61cc,	// (0x00023be2) form_midp_gauge_wait_pane_t2

0x0001,

0xf80d,	// (0x0002d223) form_midp_gauge_wait_pane_t_ParamLimits

0xf80d,	// (0x0002d223) form_midp_gauge_wait_pane_t

0x61de,	// (0x00023bf4) form_midp_wait_pane_ParamLimits

0x61de,	// (0x00023bf4) form_midp_wait_pane

0x6184,	// (0x00023b9a) form_midp_image_pane_g1

0x618d,	// (0x00023ba3) form_midp_image_pane_t1

0x619c,	// (0x00023bb2) form_midp_image_pane_t2

0x61ab,	// (0x00023bc1) form_midp_image_pane_t3

0x0002,

0xf806,	// (0x0002d21c) form_midp_image_pane_t

0x617b,	// (0x00023b91) list_single_midp_pane_g1

0xd5f2,	// (0x0002b008) list_single_midp_pane_t1

0x6167,	// (0x00023b7d) list_midp_form_item_pane_ParamLimits

0x6167,	// (0x00023b7d) list_midp_form_item_pane

0x5c96,	// (0x000236ac) list_midp_form_item_pane_t1

0x5ca5,	// (0x000236bb) midp_ticker_pane_g1

0x5cb1,	// (0x000236c7) midp_ticker_pane_g2

0x0001,

0xf74e,	// (0x0002d164) midp_ticker_pane_g

0x5cbd,	// (0x000236d3) midp_ticker_pane_t1

0x70de,	// (0x00024af4) midp_editing_number_pane_t1

0x71d1,	// (0x00024be7) midp_editing_number_pane

0x71dd,	// (0x00024bf3) midp_ticker_pane

0x70ce,	// (0x00024ae4) ai_message_heading_pane

0x4cd9,	// (0x000226ef) bg_popup_window_pane_cp14

0x70d6,	// (0x00024aec) listscroll_ai_message_pane

0x7058,	// (0x00024a6e) ai_message_heading_pane_g1_ParamLimits

0x7058,	// (0x00024a6e) ai_message_heading_pane_g1

0x7064,	// (0x00024a7a) ai_message_heading_pane_g2_ParamLimits

0x7064,	// (0x00024a7a) ai_message_heading_pane_g2

0x7070,	// (0x00024a86) ai_message_heading_pane_g3_ParamLimits

0x7070,	// (0x00024a86) ai_message_heading_pane_g3

0x707c,	// (0x00024a92) ai_message_heading_pane_g4_ParamLimits

0x707c,	// (0x00024a92) ai_message_heading_pane_g4

0x0003,

0xf947,	// (0x0002d35d) ai_message_heading_pane_g_ParamLimits

0xf947,	// (0x0002d35d) ai_message_heading_pane_g

0x7088,	// (0x00024a9e) ai_message_heading_pane_t1_ParamLimits

0x7088,	// (0x00024a9e) ai_message_heading_pane_t1

0x70a2,	// (0x00024ab8) ai_message_heading_pane_t2_ParamLimits

0x70a2,	// (0x00024ab8) ai_message_heading_pane_t2

0x0001,

0xf950,	// (0x0002d366) ai_message_heading_pane_t_ParamLimits

0xf950,	// (0x0002d366) ai_message_heading_pane_t

0x70b4,	// (0x00024aca) bg_popup_heading_pane_cp1_ParamLimits

0x70b4,	// (0x00024aca) bg_popup_heading_pane_cp1

0x7046,	// (0x00024a5c) list_ai_message_pane_ParamLimits

0x7046,	// (0x00024a5c) list_ai_message_pane

0x5426,	// (0x00022e3c) scroll_pane_cp10

0x6fe2,	// (0x000249f8) list_ai_message_pane_g1

0x6fea,	// (0x00024a00) list_ai_message_pane_g2

0x0001,

0xf924,	// (0x0002d33a) list_ai_message_pane_g

0x6ff2,	// (0x00024a08) list_ai_message_pane_t1_ParamLimits

0x6ff2,	// (0x00024a08) list_ai_message_pane_t1

0x7007,	// (0x00024a1d) list_ai_message_pane_t2_ParamLimits

0x7007,	// (0x00024a1d) list_ai_message_pane_t2

0x701c,	// (0x00024a32) list_ai_message_pane_t3_ParamLimits

0x701c,	// (0x00024a32) list_ai_message_pane_t3

0x7031,	// (0x00024a47) list_ai_message_pane_t4_ParamLimits

0x7031,	// (0x00024a47) list_ai_message_pane_t4

0x0003,

0xf929,	// (0x0002d33f) list_ai_message_pane_t_ParamLimits

0xf929,	// (0x0002d33f) list_ai_message_pane_t

0x6fd0,	// (0x000249e6) cell_ai_soft_ind_pane_ParamLimits

0x6fd0,	// (0x000249e6) cell_ai_soft_ind_pane

0x5ccf,	// (0x000236e5) cell_ai_soft_ind_pane_g1_ParamLimits

0x5ccf,	// (0x000236e5) cell_ai_soft_ind_pane_g1

0x4cd9,	// (0x000226ef) grid_highlight_cp1

0x5cdc,	// (0x000236f2) text_secondary_cp56_ParamLimits

0x5cdc,	// (0x000236f2) text_secondary_cp56

0x6fa5,	// (0x000249bb) example_general_pane_ParamLimits

0x6fa5,	// (0x000249bb) example_general_pane

0x6fb1,	// (0x000249c7) example_parent_pane_g1_ParamLimits

0x6fb1,	// (0x000249c7) example_parent_pane_g1

0x6fbd,	// (0x000249d3) example_parent_pane_t1_ParamLimits

0x6fbd,	// (0x000249d3) example_parent_pane_t1

0xaa60,	// (0x00028476) popup_preview_text_window_ParamLimits

0xaa60,	// (0x00028476) popup_preview_text_window

0x5bc0,	// (0x000235d6) list_single_pane_cp2_g4

0x4f3e,	// (0x00022954) bg_popup_preview_window_pane_ParamLimits

0x4f3e,	// (0x00022954) bg_popup_preview_window_pane

0x6d5c,	// (0x00024772) popup_preview_text_window_t1_ParamLimits

0x6d5c,	// (0x00024772) popup_preview_text_window_t1

0x6d7a,	// (0x00024790) popup_preview_text_window_t2_ParamLimits

0x6d7a,	// (0x00024790) popup_preview_text_window_t2

0x6dc3,	// (0x000247d9) popup_preview_text_window_t3_ParamLimits

0x6dc3,	// (0x000247d9) popup_preview_text_window_t3

0x6e08,	// (0x0002481e) popup_preview_text_window_t4_ParamLimits

0x6e08,	// (0x0002481e) popup_preview_text_window_t4

0x0004,

0xf8f8,	// (0x0002d30e) popup_preview_text_window_t_ParamLimits

0xf8f8,	// (0x0002d30e) popup_preview_text_window_t

0x6e86,	// (0x0002489c) scroll_pane_cp11

0x6007,	// (0x00023a1d) bg_popup_preview_window_pane_g1

0x6d1c,	// (0x00024732) bg_popup_preview_window_pane_g2

0x6d24,	// (0x0002473a) bg_popup_preview_window_pane_g3

0x6d2c,	// (0x00024742) bg_popup_preview_window_pane_g4

0x6d34,	// (0x0002474a) bg_popup_preview_window_pane_g5

0x6d3c,	// (0x00024752) bg_popup_preview_window_pane_g6

0x6d44,	// (0x0002475a) bg_popup_preview_window_pane_g7

0x6d4c,	// (0x00024762) bg_popup_preview_window_pane_g8

0x985a,	// (0x00027270) aid_popup_width_pane

0xaa42,	// (0x00028458) popup_midp_note_alarm_window_ParamLimits

0xaa42,	// (0x00028458) popup_midp_note_alarm_window

0x52cb,	// (0x00022ce1) data_form_pane_ParamLimits

0xd315,	// (0x0002ad2b) form_field_data_pane_g1

0x9e78,	// (0x0002788e) form_field_data_pane_t1_ParamLimits

0x52d7,	// (0x00022ced) input_focus_pane_ParamLimits

0x52e5,	// (0x00022cfb) data_form_wide_pane_ParamLimits

0xd31d,	// (0x0002ad33) form_field_data_wide_pane_g1

0xd329,	// (0x0002ad3f) form_field_data_wide_pane_t1_ParamLimits

0x50fd,	// (0x00022b13) input_focus_pane_cp6_ParamLimits

0x9e90,	// (0x000278a6) input_popup_find_pane_g1_ParamLimits

0x9e90,	// (0x000278a6) input_popup_find_pane_g1

0x9fa1,	// (0x000279b7) aid_navi_side_left_pane

0x9fb1,	// (0x000279c7) aid_navi_side_right_pane

0x6839,	// (0x0002424f) bg_popup_window_pane_cp30_ParamLimits

0x6839,	// (0x0002424f) bg_popup_window_pane_cp30

0x68b3,	// (0x000242c9) popup_midp_note_alarm_window_g1_ParamLimits

0x68b3,	// (0x000242c9) popup_midp_note_alarm_window_g1

0x68e3,	// (0x000242f9) popup_midp_note_alarm_window_t1_ParamLimits

0x68e3,	// (0x000242f9) popup_midp_note_alarm_window_t1

0x6984,	// (0x0002439a) popup_midp_note_alarm_window_t2_ParamLimits

0x6984,	// (0x0002439a) popup_midp_note_alarm_window_t2

0x6a32,	// (0x00024448) popup_midp_note_alarm_window_t3_ParamLimits

0x6a32,	// (0x00024448) popup_midp_note_alarm_window_t3

0x6a5a,	// (0x00024470) popup_midp_note_alarm_window_t4_ParamLimits

0x6a5a,	// (0x00024470) popup_midp_note_alarm_window_t4

0x6a7a,	// (0x00024490) popup_midp_note_alarm_window_t5_ParamLimits

0x6a7a,	// (0x00024490) popup_midp_note_alarm_window_t5

0x000a,

0xf895,	// (0x0002d2ab) popup_midp_note_alarm_window_t_ParamLimits

0xf895,	// (0x0002d2ab) popup_midp_note_alarm_window_t

0x6b26,	// (0x0002453c) wait_bar_pane_cp1_ParamLimits

0x6b26,	// (0x0002453c) wait_bar_pane_cp1

0x4cd9,	// (0x000226ef) wait_anim_pane_copy1

0x4cd9,	// (0x000226ef) wait_border_pane_copy1

0x657f,	// (0x00023f95) wait_border_pane_g1_copy1

0xd343,	// (0x0002ad59) form_field_popup_pane_g1

0xd34b,	// (0x0002ad61) form_field_popup_pane_t1_ParamLimits

0x52d7,	// (0x00022ced) input_focus_pane_cp7_ParamLimits

0x52cb,	// (0x00022ce1) list_form_pane_ParamLimits

0xd363,	// (0x0002ad79) form_field_popup_wide_pane_g1

0xd36b,	// (0x0002ad81) form_field_popup_wide_pane_t1_ParamLimits

0x52d7,	// (0x00022ced) input_focus_pane_cp8_ParamLimits

0x5311,	// (0x00022d27) list_form_wide_pane_ParamLimits

0x7269,	// (0x00024c7f) aid_size_cell_graphic_pane

0xd3f0,	// (0x0002ae06) data_form_pane_t1_ParamLimits

0xd629,	// (0x0002b03f) data_form_wide_pane_t1_ParamLimits

0xacd0,	// (0x000286e6) bg_status_flat_pane

0x9b6e,	// (0x00027584) title_pane_t1_ParamLimits

0x4cef,	// (0x00022705) title_pane_t2_ParamLimits

0x4d15,	// (0x0002272b) title_pane_t3_ParamLimits

0xf557,	// (0x0002cf6d) title_pane_t_ParamLimits

0xa0d9,	// (0x00027aef) level_1_signal_ParamLimits

0xa0e6,	// (0x00027afc) level_2_signal_ParamLimits

0xa0f3,	// (0x00027b09) level_3_signal_ParamLimits

0xa100,	// (0x00027b16) level_4_signal_ParamLimits

0xa10d,	// (0x00027b23) level_5_signal_ParamLimits

0xa11a,	// (0x00027b30) level_6_signal_ParamLimits

0xa127,	// (0x00027b3d) level_7_signal_ParamLimits

0xa0d9,	// (0x00027aef) level_1_battery_ParamLimits

0xa0e6,	// (0x00027afc) level_2_battery_ParamLimits

0xa0f3,	// (0x00027b09) level_3_battery_ParamLimits

0xa100,	// (0x00027b16) level_4_battery_ParamLimits

0xa10d,	// (0x00027b23) level_5_battery_ParamLimits

0xa11a,	// (0x00027b30) level_6_battery_ParamLimits

0xa127,	// (0x00027b3d) level_7_battery_ParamLimits

0x6768,	// (0x0002417e) bg_status_flat_pane_g1

0x6770,	// (0x00024186) bg_status_flat_pane_g2

0x6778,	// (0x0002418e) bg_status_flat_pane_g3

0x6780,	// (0x00024196) bg_status_flat_pane_g4

0x6788,	// (0x0002419e) bg_status_flat_pane_g5

0x6790,	// (0x000241a6) bg_status_flat_pane_g6

0x6798,	// (0x000241ae) bg_status_flat_pane_g7

0x9bd6,	// (0x000275ec) tabs_3_active_pane_t1_ParamLimits

0x9bd6,	// (0x000275ec) tabs_3_passive_pane_t1_ParamLimits

0x9bf0,	// (0x00027606) tabs_4_active_pane_t1_ParamLimits

0x9bf0,	// (0x00027606) tabs_4_1_passive_pane_t1_ParamLimits

0x9ea4,	// (0x000278ba) tabs_2_active_pane_t1_ParamLimits

0x9ea4,	// (0x000278ba) tabs_2_passive_pane_t1_ParamLimits

0x605f,	// (0x00023a75) bg_active_tab_pane_cp4_ParamLimits

0x9eb6,	// (0x000278cc) tabs_2_long_active_pane_t1_ParamLimits

0x9ec9,	// (0x000278df) bg_passive_tab_pane_cp4_ParamLimits

0xafb0,	// (0x000289c6) list_single_midp_graphic_pane_t1_ParamLimits

0x605f,	// (0x00023a75) bg_active_tab_pane_cp5_ParamLimits

0x9ed5,	// (0x000278eb) tabs_3_long_active_pane_t1_ParamLimits

0x9ec9,	// (0x000278df) bg_passive_tab_pane_cp5_ParamLimits

0xafb0,	// (0x000289c6) list_single_midp_graphic_pane_t1

0xacd0,	// (0x000286e6) bg_status_flat_pane_ParamLimits

0x5ee6,	// (0x000238fc) indicator_pane_cp2_ParamLimits

0x5ee6,	// (0x000238fc) indicator_pane_cp2

0xae13,	// (0x00028829) navi_pane_srt_ParamLimits

0xae13,	// (0x00028829) navi_pane_srt

0x5f0e,	// (0x00023924) popup_clock_digital_analogue_window_cp1

0x4d81,	// (0x00022797) indicator_pane_t1

0x5c7b,	// (0x00023691) copy_highlight_pane

0x5c7b,	// (0x00023691) cursor_graphics_pane

0x5c7b,	// (0x00023691) graphic_within_text_pane

0x5c7b,	// (0x00023691) link_highlight_pane

0x6e49,	// (0x0002485f) popup_preview_text_window_t5_ParamLimits

0x6e49,	// (0x0002485f) popup_preview_text_window_t5

0x5cf6,	// (0x0002370c) cursor_digital_pane

0x5cf6,	// (0x0002370c) cursor_primary_pane

0x5d07,	// (0x0002371d) cursor_primary_small_pane

0x5d0f,	// (0x00023725) cursor_secondary_pane

0x5d17,	// (0x0002372d) cursor_title_pane

0x5cf6,	// (0x0002370c) link_highlight_digital_pane

0x5cfe,	// (0x00023714) link_highlight_primary_pane

0x5d07,	// (0x0002371d) link_highlight_primary_small_pane

0x5d0f,	// (0x00023725) link_highlight_secondary_pane

0x5d17,	// (0x0002372d) link_highlight_title_pane

0x5cf6,	// (0x0002370c) copy_highlight_digital_pane

0x5cf6,	// (0x0002370c) copy_highlight_primary_pane

0x5d07,	// (0x0002371d) copy_highlight_primary_small_pane

0x5d0f,	// (0x00023725) copy_highlight_secondary_pane

0x5d17,	// (0x0002372d) copy_highlight_title_pane

0x5d0f,	// (0x00023725) graphic_text_digital_pane

0x67e8,	// (0x000241fe) graphic_text_primary_pane

0x67f1,	// (0x00024207) graphic_text_primary_small_pane

0x5d07,	// (0x0002371d) graphic_text_secondary_pane

0x5cf6,	// (0x0002370c) graphic_text_title_pane

0xa4d5,	// (0x00027eeb) cursor_primary_pane_g1

0x67da,	// (0x000241f0) cursor_text_primary_t1

0xb0e7,	// (0x00028afd) cursor_primary_small_pane_g1

0x67cc,	// (0x000241e2) cursor_text_primary_small_t1

0xb0df,	// (0x00028af5) cursor_primary_small_pane_g1_copy1

0x67be,	// (0x000241d4) cursor_text_primary_small_t1_copy1

0x67b0,	// (0x000241c6) cursor_text_title_t1

0xb0d7,	// (0x00028aed) cursor_title_pane_g1

0xa4d5,	// (0x00027eeb) cursor_digital_pane_g1

0x5d1f,	// (0x00023735) cursor_text_digital_t1

0x5d2d,	// (0x00023743) link_highlight_primary_pane_g1

0x6759,	// (0x0002416f) link_highlight_primary_pane_t1

0x5d2d,	// (0x00023743) link_highlight_primary_small_pane_g1

0x5d35,	// (0x0002374b) link_highlight_primary_small_pane_t1

0x5d44,	// (0x0002375a) link_highlight_secondary_pane_g1

0x5d4c,	// (0x00023762) link_highlight_secondary_pane_t1

0x66be,	// (0x000240d4) link_highlight_title_pane_g1

0x66d5,	// (0x000240eb) link_highlight_title_pane_t1

0x66be,	// (0x000240d4) link_highlight_digital_pane_g1

0x66c6,	// (0x000240dc) link_highlight_digital_pane_t1

0x659a,	// (0x00023fb0) copy_highlight_primary_pane_g1

0x65c0,	// (0x00023fd6) copy_highlight_primary_pane_t1

0x659a,	// (0x00023fb0) copy_highlight_primary_small_pane_g1

0x65b1,	// (0x00023fc7) copy_highlight_primary_small_pane_t1

0x5d5b,	// (0x00023771) copy_highlight_secondary_pane_g1

0x5d63,	// (0x00023779) copy_highlight_secondary_pane_t1

0x659a,	// (0x00023fb0) copy_highlight_title_pane_g1

0x65a2,	// (0x00023fb8) copy_highlight_title_pane_t1

0x659a,	// (0x00023fb0) copy_highlight_digital_pane_g1

0x7364,	// (0x00024d7a) copy_highlight_digital_pane_t1

0x72b8,	// (0x00024cce) graphic_text_primary_pane_g1

0x7348,	// (0x00024d5e) graphic_text_primary_pane_t1

0x7356,	// (0x00024d6c) graphic_text_primary_pane_t2

0x0001,

0xf9bf,	// (0x0002d3d5) graphic_text_primary_pane_t

0x7324,	// (0x00024d3a) graphic_text_primary_small_pane_g1

0x732c,	// (0x00024d42) graphic_text_primary_small_pane_t1

0x733a,	// (0x00024d50) graphic_text_primary_small_pane_t2

0x0001,

0xf9ba,	// (0x0002d3d0) graphic_text_primary_small_pane_t

0x7300,	// (0x00024d16) graphic_text_secondary_pane_g1

0x7308,	// (0x00024d1e) graphic_text_secondary_pane_t1

0x7316,	// (0x00024d2c) graphic_text_secondary_pane_t2

0x0001,

0xf9b5,	// (0x0002d3cb) graphic_text_secondary_pane_t

0x72dc,	// (0x00024cf2) graphic_text_title_pane_g1

0x72e4,	// (0x00024cfa) graphic_text_title_pane_t1

0x72f2,	// (0x00024d08) graphic_text_title_pane_t2

0x0001,

0xf9b0,	// (0x0002d3c6) graphic_text_title_pane_t

0x72b8,	// (0x00024cce) graphic_text_digital_pane_g1

0x72c0,	// (0x00024cd6) graphic_text_digital_pane_t1

0x72ce,	// (0x00024ce4) graphic_text_digital_pane_t2

0x0001,

0xf9ab,	// (0x0002d3c1) graphic_text_digital_pane_t

0x4d3d,	// (0x00022753) navi_icon_pane_srt_ParamLimits

0x4d3d,	// (0x00022753) navi_icon_pane_srt

0x4cd9,	// (0x000226ef) navi_midp_pane_srt

0x4cd9,	// (0x000226ef) navi_navi_pane_srt

0x4d3d,	// (0x00022753) navi_text_pane_srt_ParamLimits

0x4d3d,	// (0x00022753) navi_text_pane_srt

0x713c,	// (0x00024b52) navi_navi_icon_text_pane_srt

0x7156,	// (0x00024b6c) navi_navi_pane_srt_g1_ParamLimits

0x7156,	// (0x00024b6c) navi_navi_pane_srt_g1

0x7144,	// (0x00024b5a) navi_navi_pane_srt_g2_ParamLimits

0x7144,	// (0x00024b5a) navi_navi_pane_srt_g2

0x0001,

0xf8e0,	// (0x0002d2f6) navi_navi_pane_srt_g_ParamLimits

0xf8e0,	// (0x0002d2f6) navi_navi_pane_srt_g

0x7168,	// (0x00024b7e) navi_navi_tabs_pane_srt

0x713c,	// (0x00024b52) navi_navi_text_pane_srt

0x713c,	// (0x00024b52) navi_navi_volume_pane_srt

0x72a9,	// (0x00024cbf) navi_navi_text_pane_srt_t1

0xb706,	// (0x0002911c) navi_navi_volume_pane_srt_g1

0xb70e,	// (0x00029124) volume_small_pane_srt_ParamLimits

0xb70e,	// (0x00029124) volume_small_pane_srt

0xa4dd,	// (0x00027ef3) volume_small_pane_srt_g1_ParamLimits

0xa4dd,	// (0x00027ef3) volume_small_pane_srt_g1

0xa4ed,	// (0x00027f03) volume_small_pane_srt_g2_ParamLimits

0xa4ed,	// (0x00027f03) volume_small_pane_srt_g2

0xa4fe,	// (0x00027f14) volume_small_pane_srt_g3_ParamLimits

0xa4fe,	// (0x00027f14) volume_small_pane_srt_g3

0xa50f,	// (0x00027f25) volume_small_pane_srt_g4_ParamLimits

0xa50f,	// (0x00027f25) volume_small_pane_srt_g4

0xa520,	// (0x00027f36) volume_small_pane_srt_g5_ParamLimits

0xa520,	// (0x00027f36) volume_small_pane_srt_g5

0xa531,	// (0x00027f47) volume_small_pane_srt_g6_ParamLimits

0xa531,	// (0x00027f47) volume_small_pane_srt_g6

0xa542,	// (0x00027f58) volume_small_pane_srt_g7_ParamLimits

0xa542,	// (0x00027f58) volume_small_pane_srt_g7

0xa553,	// (0x00027f69) volume_small_pane_srt_g8_ParamLimits

0xa553,	// (0x00027f69) volume_small_pane_srt_g8

0xa564,	// (0x00027f7a) volume_small_pane_srt_g9_ParamLimits

0xa564,	// (0x00027f7a) volume_small_pane_srt_g9

0xa575,	// (0x00027f8b) volume_small_pane_srt_g10_ParamLimits

0xa575,	// (0x00027f8b) volume_small_pane_srt_g10

0x0009,

0xf753,	// (0x0002d169) volume_small_pane_srt_g_ParamLimits

0xf753,	// (0x0002d169) volume_small_pane_srt_g

0x4fe7,	// (0x000229fd) query_popup_data_pane_cp2

0x728f,	// (0x00024ca5) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x728f,	// (0x00024ca5) navi_navi_icon_text_pane_srt_t1

0x67e8,	// (0x000241fe) navi_tabs_2_long_pane_srt

0x67e8,	// (0x000241fe) navi_tabs_2_pane_srt

0x67e8,	// (0x000241fe) navi_tabs_3_long_pane_srt

0x67e8,	// (0x000241fe) navi_tabs_3_pane_srt

0x67e8,	// (0x000241fe) navi_tabs_4_pane_srt

0xb6e6,	// (0x000290fc) tabs_2_active_pane_srt_ParamLimits

0xb6e6,	// (0x000290fc) tabs_2_active_pane_srt

0xb6f6,	// (0x0002910c) tabs_2_passive_pane_srt_ParamLimits

0xb6f6,	// (0x0002910c) tabs_2_passive_pane_srt

0x545d,	// (0x00022e73) bg_passive_tab_pane_cp1_srt_ParamLimits

0x545d,	// (0x00022e73) bg_passive_tab_pane_cp1_srt

0x7192,	// (0x00024ba8) bg_passive_tab_pane_g1_cp1_srt

0x5985,	// (0x0002339b) bg_passive_tab_pane_g2_cp1_srt

0x7189,	// (0x00024b9f) bg_passive_tab_pane_g3_cp1_srt

0x4d3d,	// (0x00022753) bg_active_tab_pane_cp1_srt_ParamLimits

0x4d3d,	// (0x00022753) bg_active_tab_pane_cp1_srt

0x7181,	// (0x00024b97) tabs_2_active_pane_srt_g1

0x9ea4,	// (0x000278ba) tabs_2_active_pane_srt_t1_ParamLimits

0x9ea4,	// (0x000278ba) tabs_2_active_pane_srt_t1

0x7192,	// (0x00024ba8) bg_active_tab_pane_g1_cp1_srt

0x5985,	// (0x0002339b) bg_active_tab_pane_g2_cp1_srt

0x7189,	// (0x00024b9f) bg_active_tab_pane_g3_cp1_srt

0xb6b3,	// (0x000290c9) tabs_3_active_pane_srt_ParamLimits

0xb6b3,	// (0x000290c9) tabs_3_active_pane_srt

0xb6c4,	// (0x000290da) tabs_3_passive_pane_cp_srt_ParamLimits

0xb6c4,	// (0x000290da) tabs_3_passive_pane_cp_srt

0xb6d5,	// (0x000290eb) tabs_3_passive_pane_srt_ParamLimits

0xb6d5,	// (0x000290eb) tabs_3_passive_pane_srt

0x545d,	// (0x00022e73) bg_passive_tab_pane_cp2_srt_ParamLimits

0x545d,	// (0x00022e73) bg_passive_tab_pane_cp2_srt

0x5d7b,	// (0x00023791) bg_passive_tab_pane_g1_cp2_srt

0x5985,	// (0x0002339b) bg_passive_tab_pane_g2_cp2_srt

0x5d72,	// (0x00023788) bg_passive_tab_pane_g3_cp2_srt

0x4d3d,	// (0x00022753) bg_active_tab_pane_cp2_srt_ParamLimits

0x4d3d,	// (0x00022753) bg_active_tab_pane_cp2_srt

0x727f,	// (0x00024c95) tabs_3_active_pane_srt_g1

0x9bd6,	// (0x000275ec) tabs_3_active_pane_srt_t1_ParamLimits

0x9bd6,	// (0x000275ec) tabs_3_active_pane_srt_t1

0x5d7b,	// (0x00023791) bg_active_tab_pane_g1_cp2_srt

0x5985,	// (0x0002339b) bg_active_tab_pane_g2_cp2_srt

0x5d72,	// (0x00023788) bg_active_tab_pane_g3_cp2_srt

0xb66b,	// (0x00029081) tabs_4_active_pane_srt_ParamLimits

0xb66b,	// (0x00029081) tabs_4_active_pane_srt

0xb67d,	// (0x00029093) tabs_4_passive_pane_cp2_srt_ParamLimits

0xb67d,	// (0x00029093) tabs_4_passive_pane_cp2_srt

0xa782,	// (0x00028198) aid_size_cell_toolbar

0x9ec9,	// (0x000278df) main_idle_act_pane_ParamLimits

0xa8fd,	// (0x00028313) popup_large_graphic_colour_window_ParamLimits

0xabb1,	// (0x000285c7) popup_toolbar_window_ParamLimits

0xabb1,	// (0x000285c7) popup_toolbar_window

0xd66c,	// (0x0002b082) list_single_graphic_2heading_pane_ParamLimits

0xd66c,	// (0x0002b082) list_single_graphic_2heading_pane

0x5622,	// (0x00023038) aid_size_cell_apps_grid_lsc_pane

0x5634,	// (0x0002304a) aid_size_cell_apps_grid_prt_pane

0x545d,	// (0x00022e73) bg_wml_button_pane_cp1_ParamLimits

0x545d,	// (0x00022e73) bg_wml_button_pane_cp1

0x625b,	// (0x00023c71) form_midp_field_text_pane_t1_ParamLimits

0x60b1,	// (0x00023ac7) input_focus_pane_cp050_ParamLimits

0x627c,	// (0x00023c92) list_midp_form_text_pane_ParamLimits

0x6238,	// (0x00023c4e) input_focus_pane_cp051_ParamLimits

0x624c,	// (0x00023c62) list_midp_choice_pane_ParamLimits

0x6135,	// (0x00023b4b) list_single_2graphic_pane_cp3_ParamLimits

0x6135,	// (0x00023b4b) list_single_2graphic_pane_cp3

0x6148,	// (0x00023b5e) list_single_midp_graphic_pane_ParamLimits

0x6148,	// (0x00023b5e) list_single_midp_graphic_pane

0x97d0,	// (0x000271e6) list_single_graphic_2heading_pane_g1_ParamLimits

0x97d0,	// (0x000271e6) list_single_graphic_2heading_pane_g1

0x97dc,	// (0x000271f2) list_single_graphic_2heading_pane_g4_ParamLimits

0x97dc,	// (0x000271f2) list_single_graphic_2heading_pane_g4

0x97e8,	// (0x000271fe) list_single_graphic_2heading_pane_g5_ParamLimits

0x97e8,	// (0x000271fe) list_single_graphic_2heading_pane_g5

0x0002,

0xf7a6,	// (0x0002d1bc) list_single_graphic_2heading_pane_g_ParamLimits

0xf7a6,	// (0x0002d1bc) list_single_graphic_2heading_pane_g

0x97f4,	// (0x0002720a) list_single_graphic_2heading_pane_t1_ParamLimits

0x97f4,	// (0x0002720a) list_single_graphic_2heading_pane_t1

0x9808,	// (0x0002721e) list_single_graphic_2heading_pane_t2_ParamLimits

0x9808,	// (0x0002721e) list_single_graphic_2heading_pane_t2

0x9822,	// (0x00027238) list_single_graphic_2heading_pane_t3_ParamLimits

0x9822,	// (0x00027238) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ad,	// (0x0002d1c3) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ad,	// (0x0002d1c3) list_single_graphic_2heading_pane_t

0x5f51,	// (0x00023967) bg_popup_sub_pane_cp2

0x5f77,	// (0x0002398d) grid_toobar_pane

0xaf2c,	// (0x00028942) cell_toolbar_pane_ParamLimits

0xaf2c,	// (0x00028942) cell_toolbar_pane

0x5fad,	// (0x000239c3) cell_toolbar_pane_g1_ParamLimits

0x5fad,	// (0x000239c3) cell_toolbar_pane_g1

0x5fbf,	// (0x000239d5) cell_toolbar_pane_g2_ParamLimits

0x5fbf,	// (0x000239d5) cell_toolbar_pane_g2

0x0001,

0xf7bb,	// (0x0002d1d1) cell_toolbar_pane_g_ParamLimits

0xf7bb,	// (0x0002d1d1) cell_toolbar_pane_g

0x5fe1,	// (0x000239f7) grid_highlight_pane_cp2_ParamLimits

0x5fe1,	// (0x000239f7) grid_highlight_pane_cp2

0x5ffb,	// (0x00023a11) toolbar_button_pane

0x6007,	// (0x00023a1d) toolbar_button_pane_g1

0x6017,	// (0x00023a2d) toolbar_button_pane_g2

0x600f,	// (0x00023a25) toolbar_button_pane_g3

0x6027,	// (0x00023a3d) toolbar_button_pane_g4

0x601f,	// (0x00023a35) toolbar_button_pane_g5

0x602f,	// (0x00023a45) toolbar_button_pane_g6

0x6037,	// (0x00023a4d) toolbar_button_pane_g7

0x6047,	// (0x00023a5d) toolbar_button_pane_g8

0x603f,	// (0x00023a55) toolbar_button_pane_g9

0x0009,

0xf7c0,	// (0x0002d1d6) toolbar_button_pane_g

0xaf5b,	// (0x00028971) list_single_2graphic_pane_g1_cp3_ParamLimits

0xaf5b,	// (0x00028971) list_single_2graphic_pane_g1_cp3

0xaf67,	// (0x0002897d) list_single_2graphic_pane_g2_cp3_ParamLimits

0xaf67,	// (0x0002897d) list_single_2graphic_pane_g2_cp3

0xaf76,	// (0x0002898c) list_single_2graphic_pane_g3_cp3

0xaf7e,	// (0x00028994) list_single_2graphic_pane_g4_cp3_ParamLimits

0xaf7e,	// (0x00028994) list_single_2graphic_pane_g4_cp3

0xaf8a,	// (0x000289a0) list_single_2graphic_pane_t1_cp3_ParamLimits

0xaf8a,	// (0x000289a0) list_single_2graphic_pane_t1_cp3

0xafa4,	// (0x000289ba) list_single_midp_graphic_pane_g2_ParamLimits

0xafa4,	// (0x000289ba) list_single_midp_graphic_pane_g2

0xa78a,	// (0x000281a0) aid_zoom_text_primary

0x97c8,	// (0x000271de) aid_zoom_text_secondary

0xa5b6,	// (0x00027fcc) status_small_pane_g7_ParamLimits

0xa5b6,	// (0x00027fcc) status_small_pane_g7

0xa5d9,	// (0x00027fef) status_small_pane_t1_ParamLimits

0x9b51,	// (0x00027567) title_pane_g2

0x0003,

0xf54e,	// (0x0002cf64) title_pane_g

0x9da3,	// (0x000277b9) aid_size_cell_colour_1_pane_ParamLimits

0x9da3,	// (0x000277b9) aid_size_cell_colour_1_pane

0x9db7,	// (0x000277cd) aid_size_cell_colour_2_pane_ParamLimits

0x9db7,	// (0x000277cd) aid_size_cell_colour_2_pane

0x9dcb,	// (0x000277e1) aid_size_cell_colour_3_pane_ParamLimits

0x9dcb,	// (0x000277e1) aid_size_cell_colour_3_pane

0x9ddf,	// (0x000277f5) aid_size_cell_colour_4_pane_ParamLimits

0x9ddf,	// (0x000277f5) aid_size_cell_colour_4_pane

0x9f03,	// (0x00027919) title_pane_stacon_g1_ParamLimits

0x9f03,	// (0x00027919) title_pane_stacon_g1

0x6617,	// (0x0002402d) popup_note_wait_window_g3_ParamLimits

0x6617,	// (0x0002402d) popup_note_wait_window_g3

0x668d,	// (0x000240a3) popup_note_wait_window_t5_ParamLimits

0x668d,	// (0x000240a3) popup_note_wait_window_t5

0x4cd9,	// (0x000226ef) main_feb_china_hwr_fs_writing_pane

0xa812,	// (0x00028228) popup_feb_china_hwr_fs_window_ParamLimits

0xa812,	// (0x00028228) popup_feb_china_hwr_fs_window

0xafc6,	// (0x000289dc) aid_size_cell_hwr_fs_ParamLimits

0xafc6,	// (0x000289dc) aid_size_cell_hwr_fs

0x60b1,	// (0x00023ac7) bg_popup_sub_pane_cp3_ParamLimits

0x60b1,	// (0x00023ac7) bg_popup_sub_pane_cp3

0xafdb,	// (0x000289f1) grid_hwr_fs_pane_ParamLimits

0xafdb,	// (0x000289f1) grid_hwr_fs_pane

0xafef,	// (0x00028a05) linegrid_hwr_fs_pane_ParamLimits

0xafef,	// (0x00028a05) linegrid_hwr_fs_pane

0xafff,	// (0x00028a15) cell_hwr_fs_pane_ParamLimits

0xafff,	// (0x00028a15) cell_hwr_fs_pane

0x60bd,	// (0x00023ad3) linegrid_hwr_fs_pane_g1_ParamLimits

0x60bd,	// (0x00023ad3) linegrid_hwr_fs_pane_g1

0xb01d,	// (0x00028a33) linegrid_hwr_fs_pane_g2_ParamLimits

0xb01d,	// (0x00028a33) linegrid_hwr_fs_pane_g2

0x60c9,	// (0x00023adf) linegrid_hwr_fs_pane_g3_ParamLimits

0x60c9,	// (0x00023adf) linegrid_hwr_fs_pane_g3

0xb02f,	// (0x00028a45) linegrid_hwr_fs_pane_g4_ParamLimits

0xb02f,	// (0x00028a45) linegrid_hwr_fs_pane_g4

0xb049,	// (0x00028a5f) linegrid_hwr_fs_pane_g5_ParamLimits

0xb049,	// (0x00028a5f) linegrid_hwr_fs_pane_g5

0x0004,

0xf7eb,	// (0x0002d201) linegrid_hwr_fs_pane_g_ParamLimits

0xf7eb,	// (0x0002d201) linegrid_hwr_fs_pane_g

0x60d5,	// (0x00023aeb) cell_hwr_fs_pane_g1_ParamLimits

0x60d5,	// (0x00023aeb) cell_hwr_fs_pane_g1

0x5f1f,	// (0x00023935) cell_hwr_fs_pane_g2_ParamLimits

0x5f1f,	// (0x00023935) cell_hwr_fs_pane_g2

0xb05f,	// (0x00028a75) cell_hwr_fs_pane_g3_ParamLimits

0xb05f,	// (0x00028a75) cell_hwr_fs_pane_g3

0xb06c,	// (0x00028a82) cell_hwr_fs_pane_g4_ParamLimits

0xb06c,	// (0x00028a82) cell_hwr_fs_pane_g4

0x0003,

0xf7f6,	// (0x0002d20c) cell_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x0002d20c) cell_hwr_fs_pane_g

0xb079,	// (0x00028a8f) cell_hwr_fs_pane_t1

0x4cd9,	// (0x000226ef) grid_highlight_pane_cp6

0x4cd9,	// (0x000226ef) main_idle_act2_pane

0x540d,	// (0x00022e23) aid_inside_area_popup_secondary

0xb24a,	// (0x00028c60) aid_inside_area_window_primary_ParamLimits

0xb24a,	// (0x00028c60) aid_inside_area_window_primary

0x7373,	// (0x00024d89) ai2_news_ticker_pane

0x737b,	// (0x00024d91) aid_size_cell_ai1_link_ParamLimits

0x737b,	// (0x00024d91) aid_size_cell_ai1_link

0xb723,	// (0x00029139) popup_ai2_data_window_ParamLimits

0xb723,	// (0x00029139) popup_ai2_data_window

0x7395,	// (0x00024dab) popup_ai2_link_window_ParamLimits

0x7395,	// (0x00024dab) popup_ai2_link_window

0x60b1,	// (0x00023ac7) bg_popup_sub_pane_cp4_ParamLimits

0x60b1,	// (0x00023ac7) bg_popup_sub_pane_cp4

0x73a9,	// (0x00024dbf) grid_ai2_link_pane_ParamLimits

0x73a9,	// (0x00024dbf) grid_ai2_link_pane

0x73c0,	// (0x00024dd6) popup_ai2_link_window_g1_ParamLimits

0x73c0,	// (0x00024dd6) popup_ai2_link_window_g1

0x73cc,	// (0x00024de2) popup_ai2_link_window_g2_ParamLimits

0x73cc,	// (0x00024de2) popup_ai2_link_window_g2

0x0001,

0xf9c4,	// (0x0002d3da) popup_ai2_link_window_g_ParamLimits

0xf9c4,	// (0x0002d3da) popup_ai2_link_window_g

0x73db,	// (0x00024df1) ai2_mp_button_pane

0x73e3,	// (0x00024df9) ai2_mp_volume_pane

0x6238,	// (0x00023c4e) bg_popup_sub_pane_cp5_ParamLimits

0x6238,	// (0x00023c4e) bg_popup_sub_pane_cp5

0x73eb,	// (0x00024e01) heading_ai2_gene_pane_ParamLimits

0x73eb,	// (0x00024e01) heading_ai2_gene_pane

0x73f7,	// (0x00024e0d) list_ai2_gene_pane_ParamLimits

0x73f7,	// (0x00024e0d) list_ai2_gene_pane

0x743f,	// (0x00024e55) cell_ai2_link_pane_ParamLimits

0x743f,	// (0x00024e55) cell_ai2_link_pane

0x7455,	// (0x00024e6b) cell_ai2_link_pane_g1

0x4cd9,	// (0x000226ef) grid_highlight_pane_cp7

0xb76a,	// (0x00029180) ai2_mp_volume_pane_g1

0x74f2,	// (0x00024f08) ai2_mp_volume_pane_g2

0xb74e,	// (0x00029164) list_ai2_gene_pane_t1

0x74ea,	// (0x00024f00) ai2_mp_volume_pane_g3

0x0002,

0xf9dd,	// (0x0002d3f3) ai2_mp_volume_pane_g

0xb772,	// (0x00029188) volume_small_pane_cp3

0x74fa,	// (0x00024f10) aid_size_cell_ai2_button

0x7502,	// (0x00024f18) grid_ai2_button_pane

0x750b,	// (0x00024f21) cell_ai2_button_pane_ParamLimits

0x750b,	// (0x00024f21) cell_ai2_button_pane

0x4c57,	// (0x0002266d) cell_ai2_button_pane_g1

0x4cd9,	// (0x000226ef) grid_highlight_pane_cp8

0x74aa,	// (0x00024ec0) ai2_gene_pane_t1_ParamLimits

0x74aa,	// (0x00024ec0) ai2_gene_pane_t1

0xa778,	// (0x0002818e) aid_height_parent_landscape

0xb421,	// (0x00028e37) aid_height_set_list

0x712a,	// (0x00024b40) aid_size_parent

0x7269,	// (0x00024c7f) aid_size_cell_graphic_pane_ParamLimits

0x7407,	// (0x00024e1d) popup_ai2_data_window_g1_ParamLimits

0x7407,	// (0x00024e1d) popup_ai2_data_window_g1

0x7413,	// (0x00024e29) ai2_news_ticker_pane_g1

0x741b,	// (0x00024e31) ai2_news_ticker_pane_g2

0x0001,

0xf9c9,	// (0x0002d3df) ai2_news_ticker_pane_g

0x7423,	// (0x00024e39) ai2_news_ticker_pane_t1

0x7431,	// (0x00024e47) ai2_news_ticker_pane_t2

0x0001,

0xf9ce,	// (0x0002d3e4) ai2_news_ticker_pane_t

0x724a,	// (0x00024c60) heading_ai2_gene_pane_g1

0x745e,	// (0x00024e74) heading_ai2_gene_pane_t1_ParamLimits

0x745e,	// (0x00024e74) heading_ai2_gene_pane_t1

0x7473,	// (0x00024e89) list_highlight_pane_cp6

0xb737,	// (0x0002914d) ai2_gene_pane_ParamLimits

0xb737,	// (0x0002914d) ai2_gene_pane

0xb75c,	// (0x00029172) list_ai2_gene_pane_t2

0x0001,

0xf9d3,	// (0x0002d3e9) list_ai2_gene_pane_t

0x747b,	// (0x00024e91) list_highlight_pane_cp8_ParamLimits

0x747b,	// (0x00024e91) list_highlight_pane_cp8

0x748c,	// (0x00024ea2) ai2_gene_pane_g1_ParamLimits

0x748c,	// (0x00024ea2) ai2_gene_pane_g1

0x749e,	// (0x00024eb4) ai2_gene_pane_g2_ParamLimits

0x749e,	// (0x00024eb4) ai2_gene_pane_g2

0x0001,

0xf9d8,	// (0x0002d3ee) ai2_gene_pane_g_ParamLimits

0xf9d8,	// (0x0002d3ee) ai2_gene_pane_g

0x527e,	// (0x00022c94) scroll_pane_cp12

0xa72f,	// (0x00028145) control_pane_t3_ParamLimits

0xa72f,	// (0x00028145) control_pane_t3

0xa5ca,	// (0x00027fe0) status_small_pane_g8_ParamLimits

0xa5ca,	// (0x00027fe0) status_small_pane_g8

0xa8d2,	// (0x000282e8) popup_find_window_ParamLimits

0xaa54,	// (0x0002846a) popup_note_image_window_ParamLimits

0xce0d,	// (0x0002a823) list_double2_graphic_pane_vc_g1_ParamLimits

0xce0d,	// (0x0002a823) list_double2_graphic_pane_vc_g1

0xd530,	// (0x0002af46) list_double2_graphic_pane_vc_g2_ParamLimits

0xd530,	// (0x0002af46) list_double2_graphic_pane_vc_g2

0xd53c,	// (0x0002af52) list_double2_graphic_pane_vc_g3_ParamLimits

0xd53c,	// (0x0002af52) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b4,	// (0x0002d1ca) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b4,	// (0x0002d1ca) list_double2_graphic_pane_vc_g

0xd548,	// (0x0002af5e) list_double2_graphic_pane_vc_t1_ParamLimits

0xd548,	// (0x0002af5e) list_double2_graphic_pane_vc_t1

0xd530,	// (0x0002af46) list_single_heading_pane_vc_g1_ParamLimits

0xd530,	// (0x0002af46) list_single_heading_pane_vc_g1

0xd53c,	// (0x0002af52) list_single_heading_pane_vc_g2_ParamLimits

0xd53c,	// (0x0002af52) list_single_heading_pane_vc_g2

0x0001,

0xf7d5,	// (0x0002d1eb) list_single_heading_pane_vc_g_ParamLimits

0xf7d5,	// (0x0002d1eb) list_single_heading_pane_vc_g

0xd55e,	// (0x0002af74) list_single_heading_pane_vc_t1_ParamLimits

0xd55e,	// (0x0002af74) list_single_heading_pane_vc_t1

0xd574,	// (0x0002af8a) list_single_heading_pane_vc_t2_ParamLimits

0xd574,	// (0x0002af8a) list_single_heading_pane_vc_t2

0x0001,

0xf7da,	// (0x0002d1f0) list_single_heading_pane_vc_t_ParamLimits

0xf7da,	// (0x0002d1f0) list_single_heading_pane_vc_t

0xd586,	// (0x0002af9c) list_setting_number_pane_vc_g1_ParamLimits

0xd586,	// (0x0002af9c) list_setting_number_pane_vc_g1

0xd592,	// (0x0002afa8) list_setting_number_pane_vc_g2_ParamLimits

0xd592,	// (0x0002afa8) list_setting_number_pane_vc_g2

0x0001,

0xf7df,	// (0x0002d1f5) list_setting_number_pane_vc_g_ParamLimits

0xf7df,	// (0x0002d1f5) list_setting_number_pane_vc_g

0xd59e,	// (0x0002afb4) list_setting_number_pane_vc_t1_ParamLimits

0xd59e,	// (0x0002afb4) list_setting_number_pane_vc_t1

0xd5b2,	// (0x0002afc8) list_setting_number_pane_vc_t2_ParamLimits

0xd5b2,	// (0x0002afc8) list_setting_number_pane_vc_t2

0xd5ce,	// (0x0002afe4) list_setting_number_pane_vc_t3_ParamLimits

0xd5ce,	// (0x0002afe4) list_setting_number_pane_vc_t3

0x0002,

0xf7e4,	// (0x0002d1fa) list_setting_number_pane_vc_t_ParamLimits

0xf7e4,	// (0x0002d1fa) list_setting_number_pane_vc_t

0xd5e6,	// (0x0002affc) set_value_pane_vc_ParamLimits

0xd5e6,	// (0x0002affc) set_value_pane_vc

0xd66c,	// (0x0002b082) list_double2_graphic_pane_vc_ParamLimits

0xd66c,	// (0x0002b082) list_double2_graphic_pane_vc

0x71f0,	// (0x00024c06) list_double2_large_graphic_pane_vc_ParamLimits

0x71f0,	// (0x00024c06) list_double2_large_graphic_pane_vc

0xd66c,	// (0x0002b082) list_double2_pane_vc_ParamLimits

0xd66c,	// (0x0002b082) list_double2_pane_vc

0xd66c,	// (0x0002b082) list_double_graphic_heading_pane_vc_ParamLimits

0xd66c,	// (0x0002b082) list_double_graphic_heading_pane_vc

0xd66c,	// (0x0002b082) list_double_graphic_pane_vc_ParamLimits

0xd66c,	// (0x0002b082) list_double_graphic_pane_vc

0xd66c,	// (0x0002b082) list_double_heading_pane_vc_ParamLimits

0xd66c,	// (0x0002b082) list_double_heading_pane_vc

0xd680,	// (0x0002b096) list_double_large_graphic_pane_vc_ParamLimits

0xd680,	// (0x0002b096) list_double_large_graphic_pane_vc

0xd66c,	// (0x0002b082) list_double_number_pane_vc_ParamLimits

0xd66c,	// (0x0002b082) list_double_number_pane_vc

0xd66c,	// (0x0002b082) list_double_pane_vc_ParamLimits

0xd66c,	// (0x0002b082) list_double_pane_vc

0xd66c,	// (0x0002b082) list_double_time_pane_vc_ParamLimits

0xd66c,	// (0x0002b082) list_double_time_pane_vc

0xd66c,	// (0x0002b082) list_setting_number_pane_vc_ParamLimits

0xd66c,	// (0x0002b082) list_setting_number_pane_vc

0xd66c,	// (0x0002b082) list_setting_pane_vc_ParamLimits

0xd66c,	// (0x0002b082) list_setting_pane_vc

0xd66c,	// (0x0002b082) list_single_graphic_heading_pane_vc_ParamLimits

0xd66c,	// (0x0002b082) list_single_graphic_heading_pane_vc

0xd66c,	// (0x0002b082) list_single_heading_pane_vc_ParamLimits

0xd66c,	// (0x0002b082) list_single_heading_pane_vc

0xd691,	// (0x0002b0a7) list_single_number_heading_pane_vc_ParamLimits

0xd691,	// (0x0002b0a7) list_single_number_heading_pane_vc

0xd6d5,	// (0x0002b0eb) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xd6d5,	// (0x0002b0eb) list_double_graphic_heading_pane_vc_g1

0xd530,	// (0x0002af46) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xd530,	// (0x0002af46) list_double_graphic_heading_pane_vc_g2

0xd53c,	// (0x0002af52) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xd53c,	// (0x0002af52) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e4,	// (0x0002d3fa) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e4,	// (0x0002d3fa) list_double_graphic_heading_pane_vc_g

0xd6e1,	// (0x0002b0f7) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xd6e1,	// (0x0002b0f7) list_double_graphic_heading_pane_vc_t1

0xd6f7,	// (0x0002b10d) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xd6f7,	// (0x0002b10d) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9eb,	// (0x0002d401) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9eb,	// (0x0002d401) list_double_graphic_heading_pane_vc_t

0xd586,	// (0x0002af9c) list_setting_pane_vc_g1_ParamLimits

0xd586,	// (0x0002af9c) list_setting_pane_vc_g1

0xd592,	// (0x0002afa8) list_setting_pane_vc_g2_ParamLimits

0xd592,	// (0x0002afa8) list_setting_pane_vc_g2

0x0001,

0xf7df,	// (0x0002d1f5) list_setting_pane_vc_g_ParamLimits

0xf7df,	// (0x0002d1f5) list_setting_pane_vc_g

0xd70f,	// (0x0002b125) list_setting_pane_vc_t1_ParamLimits

0xd70f,	// (0x0002b125) list_setting_pane_vc_t1

0xd723,	// (0x0002b139) list_setting_pane_vc_t2_ParamLimits

0xd723,	// (0x0002b139) list_setting_pane_vc_t2

0x0001,

0xfa2e,	// (0x0002d444) list_setting_pane_vc_t_ParamLimits

0xfa2e,	// (0x0002d444) list_setting_pane_vc_t

0xd5e6,	// (0x0002affc) set_value_pane_cp_vc_ParamLimits

0xd5e6,	// (0x0002affc) set_value_pane_cp_vc

0xd530,	// (0x0002af46) list_single_number_heading_pane_vc_g1_ParamLimits

0xd530,	// (0x0002af46) list_single_number_heading_pane_vc_g1

0xd53c,	// (0x0002af52) list_single_number_heading_pane_vc_g2_ParamLimits

0xd53c,	// (0x0002af52) list_single_number_heading_pane_vc_g2

0x0001,

0xf7d5,	// (0x0002d1eb) list_single_number_heading_pane_vc_g_ParamLimits

0xf7d5,	// (0x0002d1eb) list_single_number_heading_pane_vc_g

0xd55e,	// (0x0002af74) list_single_number_heading_pane_vc_t1_ParamLimits

0xd55e,	// (0x0002af74) list_single_number_heading_pane_vc_t1

0xd737,	// (0x0002b14d) list_single_number_heading_pane_vc_t2_ParamLimits

0xd737,	// (0x0002b14d) list_single_number_heading_pane_vc_t2

0xd749,	// (0x0002b15f) list_single_number_heading_pane_vc_t3_ParamLimits

0xd749,	// (0x0002b15f) list_single_number_heading_pane_vc_t3

0x0002,

0xfa33,	// (0x0002d449) list_single_number_heading_pane_vc_t_ParamLimits

0xfa33,	// (0x0002d449) list_single_number_heading_pane_vc_t

0xce0d,	// (0x0002a823) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xce0d,	// (0x0002a823) list_single_graphic_heading_pane_vc_g1

0xd530,	// (0x0002af46) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xd530,	// (0x0002af46) list_single_graphic_heading_pane_vc_g4

0xd53c,	// (0x0002af52) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xd53c,	// (0x0002af52) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b4,	// (0x0002d1ca) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b4,	// (0x0002d1ca) list_single_graphic_heading_pane_vc_g

0xd55e,	// (0x0002af74) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xd55e,	// (0x0002af74) list_single_graphic_heading_pane_vc_t1

0xd75b,	// (0x0002b171) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xd75b,	// (0x0002b171) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3a,	// (0x0002d450) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3a,	// (0x0002d450) list_single_graphic_heading_pane_vc_t

0xd530,	// (0x0002af46) list_double2_pane_vc_g1_ParamLimits

0xd530,	// (0x0002af46) list_double2_pane_vc_g1

0xd53c,	// (0x0002af52) list_double2_pane_vc_g2_ParamLimits

0xd53c,	// (0x0002af52) list_double2_pane_vc_g2

0x0001,

0xf7d5,	// (0x0002d1eb) list_double2_pane_vc_g_ParamLimits

0xf7d5,	// (0x0002d1eb) list_double2_pane_vc_g

0xd76d,	// (0x0002b183) list_double2_pane_vc_t1_ParamLimits

0xd76d,	// (0x0002b183) list_double2_pane_vc_t1

0xd783,	// (0x0002b199) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xd783,	// (0x0002b199) list_double2_large_graphic_pane_vc_g1

0xd78f,	// (0x0002b1a5) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xd78f,	// (0x0002b1a5) list_double2_large_graphic_pane_vc_g2

0xd79b,	// (0x0002b1b1) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xd79b,	// (0x0002b1b1) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa3f,	// (0x0002d455) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa3f,	// (0x0002d455) list_double2_large_graphic_pane_vc_g

0xd7a7,	// (0x0002b1bd) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xd7a7,	// (0x0002b1bd) list_double2_large_graphic_pane_vc_t1

0xd7bd,	// (0x0002b1d3) list_double_time_pane_vc_g1_ParamLimits

0xd7bd,	// (0x0002b1d3) list_double_time_pane_vc_g1

0xd7c9,	// (0x0002b1df) list_double_time_pane_vc_g2_ParamLimits

0xd7c9,	// (0x0002b1df) list_double_time_pane_vc_g2

0x0001,

0xfa46,	// (0x0002d45c) list_double_time_pane_vc_g_ParamLimits

0xfa46,	// (0x0002d45c) list_double_time_pane_vc_g

0xd7d5,	// (0x0002b1eb) list_double_time_pane_vc_t1_ParamLimits

0xd7d5,	// (0x0002b1eb) list_double_time_pane_vc_t1

0xd7f3,	// (0x0002b209) list_double_time_pane_vc_t2_ParamLimits

0xd7f3,	// (0x0002b209) list_double_time_pane_vc_t2

0xd837,	// (0x0002b24d) list_double_time_pane_vc_t3_ParamLimits

0xd837,	// (0x0002b24d) list_double_time_pane_vc_t3

0xd849,	// (0x0002b25f) list_double_time_pane_vc_t4_ParamLimits

0xd849,	// (0x0002b25f) list_double_time_pane_vc_t4

0x0003,

0xfa4b,	// (0x0002d461) list_double_time_pane_vc_t_ParamLimits

0xfa4b,	// (0x0002d461) list_double_time_pane_vc_t

0xd530,	// (0x0002af46) list_double_pane_vc_g1_ParamLimits

0xd530,	// (0x0002af46) list_double_pane_vc_g1

0xd53c,	// (0x0002af52) list_double_pane_vc_g2_ParamLimits

0xd53c,	// (0x0002af52) list_double_pane_vc_g2

0x0001,

0xf7d5,	// (0x0002d1eb) list_double_pane_vc_g_ParamLimits

0xf7d5,	// (0x0002d1eb) list_double_pane_vc_g

0xd85b,	// (0x0002b271) list_double_pane_vc_t1_ParamLimits

0xd85b,	// (0x0002b271) list_double_pane_vc_t1

0xd86d,	// (0x0002b283) list_double_pane_vc_t2_ParamLimits

0xd86d,	// (0x0002b283) list_double_pane_vc_t2

0x0001,

0xfa54,	// (0x0002d46a) list_double_pane_vc_t_ParamLimits

0xfa54,	// (0x0002d46a) list_double_pane_vc_t

0xd530,	// (0x0002af46) list_double_number_pane_vc_g1_ParamLimits

0xd530,	// (0x0002af46) list_double_number_pane_vc_g1

0xd53c,	// (0x0002af52) list_double_number_pane_vc_g2_ParamLimits

0xd53c,	// (0x0002af52) list_double_number_pane_vc_g2

0x0001,

0xf7d5,	// (0x0002d1eb) list_double_number_pane_vc_g_ParamLimits

0xf7d5,	// (0x0002d1eb) list_double_number_pane_vc_g

0xd883,	// (0x0002b299) list_double_number_pane_vc_t1_ParamLimits

0xd883,	// (0x0002b299) list_double_number_pane_vc_t1

0xd897,	// (0x0002b2ad) list_double_number_pane_vc_t2_ParamLimits

0xd897,	// (0x0002b2ad) list_double_number_pane_vc_t2

0xd8a9,	// (0x0002b2bf) list_double_number_pane_vc_t3_ParamLimits

0xd8a9,	// (0x0002b2bf) list_double_number_pane_vc_t3

0x0002,

0xfa59,	// (0x0002d46f) list_double_number_pane_vc_t_ParamLimits

0xfa59,	// (0x0002d46f) list_double_number_pane_vc_t

0xd8bf,	// (0x0002b2d5) list_double_large_graphic_pane_vc_g1_ParamLimits

0xd8bf,	// (0x0002b2d5) list_double_large_graphic_pane_vc_g1

0xd8cb,	// (0x0002b2e1) list_double_large_graphic_pane_vc_g2_ParamLimits

0xd8cb,	// (0x0002b2e1) list_double_large_graphic_pane_vc_g2

0xd8dc,	// (0x0002b2f2) list_double_large_graphic_pane_vc_g3_ParamLimits

0xd8dc,	// (0x0002b2f2) list_double_large_graphic_pane_vc_g3

0xd8e8,	// (0x0002b2fe) list_double_large_graphic_pane_vc_g4_ParamLimits

0xd8e8,	// (0x0002b2fe) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa60,	// (0x0002d476) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa60,	// (0x0002d476) list_double_large_graphic_pane_vc_g

0xd8f4,	// (0x0002b30a) list_double_large_graphic_pane_vc_t1_ParamLimits

0xd8f4,	// (0x0002b30a) list_double_large_graphic_pane_vc_t1

0xd906,	// (0x0002b31c) list_double_large_graphic_pane_vc_t2_ParamLimits

0xd906,	// (0x0002b31c) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa69,	// (0x0002d47f) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa69,	// (0x0002d47f) list_double_large_graphic_pane_vc_t

0xd530,	// (0x0002af46) list_double_heading_pane_vc_g1_ParamLimits

0xd530,	// (0x0002af46) list_double_heading_pane_vc_g1

0xd53c,	// (0x0002af52) list_double_heading_pane_vc_g2_ParamLimits

0xd53c,	// (0x0002af52) list_double_heading_pane_vc_g2

0x0001,

0xf7d5,	// (0x0002d1eb) list_double_heading_pane_vc_g_ParamLimits

0xf7d5,	// (0x0002d1eb) list_double_heading_pane_vc_g

0xd920,	// (0x0002b336) list_double_heading_pane_vc_t1_ParamLimits

0xd920,	// (0x0002b336) list_double_heading_pane_vc_t1

0xd55e,	// (0x0002af74) list_double_heading_pane_vc_t2_ParamLimits

0xd55e,	// (0x0002af74) list_double_heading_pane_vc_t2

0x0001,

0xfa6e,	// (0x0002d484) list_double_heading_pane_vc_t_ParamLimits

0xfa6e,	// (0x0002d484) list_double_heading_pane_vc_t

0xd932,	// (0x0002b348) list_double_graphic_pane_vc_g1_ParamLimits

0xd932,	// (0x0002b348) list_double_graphic_pane_vc_g1

0xd945,	// (0x0002b35b) list_double_graphic_pane_vc_g2_ParamLimits

0xd945,	// (0x0002b35b) list_double_graphic_pane_vc_g2

0xd530,	// (0x0002af46) list_double_graphic_pane_vc_g3_ParamLimits

0xd530,	// (0x0002af46) list_double_graphic_pane_vc_g3

0x0003,

0xfa73,	// (0x0002d489) list_double_graphic_pane_vc_g_ParamLimits

0xfa73,	// (0x0002d489) list_double_graphic_pane_vc_g

0xd962,	// (0x0002b378) list_double_graphic_pane_vc_t1_ParamLimits

0xd962,	// (0x0002b378) list_double_graphic_pane_vc_t1

0xd980,	// (0x0002b396) list_double_graphic_pane_vc_t2_ParamLimits

0xd980,	// (0x0002b396) list_double_graphic_pane_vc_t2

0x0001,

0xfa7c,	// (0x0002d492) list_double_graphic_pane_vc_t_ParamLimits

0xfa7c,	// (0x0002d492) list_double_graphic_pane_vc_t

0x9862,	// (0x00027278) aid_size_cell_fastswap

0x986a,	// (0x00027280) aid_size_cell_touch_ParamLimits

0x986a,	// (0x00027280) aid_size_cell_touch

0x9a1e,	// (0x00027434) popup_fast_swap_wide_window_ParamLimits

0x9a1e,	// (0x00027434) popup_fast_swap_wide_window

0x9ae4,	// (0x000274fa) touch_pane_ParamLimits

0x9ae4,	// (0x000274fa) touch_pane

0xd279,	// (0x0002ac8f) button_value_adjust_pane_cp2

0x7179,	// (0x00024b8f) button_value_adjust_pane_cp4

0xd299,	// (0x0002acaf) form_field_data_pane_cp2

0xd2b8,	// (0x0002acce) form_field_data_wide_pane_cp2

0x5659,	// (0x0002306f) bg_scroll_pane_ParamLimits

0xa0b0,	// (0x00027ac6) scroll_handle_pane_ParamLimits

0xa0c4,	// (0x00027ada) scroll_sc2_down_pane_ParamLimits

0xa0c4,	// (0x00027ada) scroll_sc2_down_pane

0x568a,	// (0x000230a0) scroll_sc2_up_pane_ParamLimits

0x568a,	// (0x000230a0) scroll_sc2_up_pane

0xb8e0,	// (0x000292f6) grid_wheel_folder_pane_g1_ParamLimits

0xb8e0,	// (0x000292f6) grid_wheel_folder_pane_g1

0xa3b3,	// (0x00027dc9) clock_nsta_pane_cp2_ParamLimits

0xa3b3,	// (0x00027dc9) clock_nsta_pane_cp2

0xa42e,	// (0x00027e44) listscroll_midp_pane_ParamLimits

0xa43a,	// (0x00027e50) midp_canvas_pane

0xa770,	// (0x00028186) nsta_clock_indic_pane

0x5e30,	// (0x00023846) listscroll_form_pane_vc

0x5e38,	// (0x0002384e) listscroll_set_pane_vc_ParamLimits

0x5e38,	// (0x0002384e) listscroll_set_pane_vc

0xacec,	// (0x00028702) clock_nsta_pane

0xacf9,	// (0x0002870f) indicator_nsta_pane

0x5f51,	// (0x00023967) bg_popup_sub_pane_cp2_ParamLimits

0x5f65,	// (0x0002397b) find_pane_cp2_ParamLimits

0x5f65,	// (0x0002397b) find_pane_cp2

0x5f77,	// (0x0002398d) grid_toobar_pane_ParamLimits

0x6085,	// (0x00023a9b) list_form_gen_pane_vc_ParamLimits

0x6085,	// (0x00023a9b) list_form_gen_pane_vc

0x609b,	// (0x00023ab1) scroll_pane_cp8_vc_ParamLimits

0x609b,	// (0x00023ab1) scroll_pane_cp8_vc

0x60eb,	// (0x00023b01) data_form_wide_pane_vc_ParamLimits

0x60eb,	// (0x00023b01) data_form_wide_pane_vc

0x60f7,	// (0x00023b0d) form_field_data_wide_pane_vc_g1

0x60ff,	// (0x00023b15) form_field_data_wide_pane_vc_t1_ParamLimits

0x60ff,	// (0x00023b15) form_field_data_wide_pane_vc_t1

0x52d7,	// (0x00022ced) input_focus_pane_cp6_vc_ParamLimits

0x52d7,	// (0x00022ced) input_focus_pane_cp6_vc

0xb0a3,	// (0x00028ab9) list_midp_pane_ParamLimits

0xb0af,	// (0x00028ac5) scroll_pane_cp16_ParamLimits

0xb0af,	// (0x00028ac5) scroll_pane_cp16

0x63fd,	// (0x00023e13) button_value_adjust_pane_ParamLimits

0x63fd,	// (0x00023e13) button_value_adjust_pane

0xb42d,	// (0x00028e43) button_value_adjust_pane_cp6_ParamLimits

0xb42d,	// (0x00028e43) button_value_adjust_pane_cp6

0xb535,	// (0x00028f4b) settings_code_pane_cp_ParamLimits

0xb535,	// (0x00028f4b) settings_code_pane_cp

0x4c57,	// (0x0002266d) cell_touch_pane_g1

0x4c57,	// (0x0002266d) cell_touch_pane_g2

0x0001,

0xf6f9,	// (0x0002d10f) cell_touch_pane_g

0xb77b,	// (0x00029191) cell_touch_pane_cp_ParamLimits

0xb77b,	// (0x00029191) cell_touch_pane_cp

0xb78b,	// (0x000291a1) cell_touch_pane_ParamLimits

0xb78b,	// (0x000291a1) cell_touch_pane

0x4c57,	// (0x0002266d) scroll_sc2_down_pane_g1

0x4c57,	// (0x0002266d) scroll_sc2_up_pane_g1

0x4cd9,	// (0x000226ef) bg_set_opt_pane_cp4_vc

0x751d,	// (0x00024f33) list_set_graphic_pane_vc_g1_ParamLimits

0x751d,	// (0x00024f33) list_set_graphic_pane_vc_g1

0x7529,	// (0x00024f3f) list_set_graphic_pane_vc_g2_ParamLimits

0x7529,	// (0x00024f3f) list_set_graphic_pane_vc_g2

0x0001,

0xf9f0,	// (0x0002d406) list_set_graphic_pane_vc_g_ParamLimits

0xf9f0,	// (0x0002d406) list_set_graphic_pane_vc_g

0x7535,	// (0x00024f4b) text_primary_small_cp13_vc_ParamLimits

0x7535,	// (0x00024f4b) text_primary_small_cp13_vc

0x754d,	// (0x00024f63) list_set_graphic_pane_vc_ParamLimits

0x754d,	// (0x00024f63) list_set_graphic_pane_vc

0x4cd9,	// (0x000226ef) input_focus_pane_cp2_vc

0x4c57,	// (0x0002266d) setting_code_pane_vc_g1

0x7560,	// (0x00024f76) setting_code_pane_vc_t1

0x756e,	// (0x00024f84) set_text_pane_vc_t1_ParamLimits

0x756e,	// (0x00024f84) set_text_pane_vc_t1

0x4cd9,	// (0x000226ef) input_focus_pane_cp1_vc

0x7589,	// (0x00024f9f) list_set_text_pane_vc

0x4c57,	// (0x0002266d) setting_text_pane_vc_g1

0x4cd9,	// (0x000226ef) bg_set_opt_pane_cp2_vc

0x7593,	// (0x00024fa9) setting_slider_graphic_pane_vc_g1

0x759b,	// (0x00024fb1) setting_slider_graphic_pane_vc_t1

0x75a9,	// (0x00024fbf) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f5,	// (0x0002d40b) setting_slider_graphic_pane_vc_t

0x75b7,	// (0x00024fcd) slider_set_pane_cp_vc

0x75bf,	// (0x00024fd5) slider_set_pane_vc_g1

0x75c8,	// (0x00024fde) slider_set_pane_vc_g2

0x0006,

0xf9fa,	// (0x0002d410) slider_set_pane_vc_g

0x5332,	// (0x00022d48) set_opt_bg_pane_g1_copy1

0x533a,	// (0x00022d50) set_opt_bg_pane_g2_copy1

0x75f4,	// (0x0002500a) set_opt_bg_pane_g3_copy1

0x534a,	// (0x00022d60) set_opt_bg_pane_g4_copy1

0x5352,	// (0x00022d68) set_opt_bg_pane_g5_copy1

0x535a,	// (0x00022d70) set_opt_bg_pane_g6_copy1

0x75fc,	// (0x00025012) set_opt_bg_pane_g7_copy1

0x7604,	// (0x0002501a) set_opt_bg_pane_g8_copy1

0x760c,	// (0x00025022) set_opt_bg_pane_g9_copy1

0x4cd9,	// (0x000226ef) bg_set_opt_pane_cp_vc

0x7614,	// (0x0002502a) setting_slider_pane_vc_t1

0x759b,	// (0x00024fb1) setting_slider_pane_vc_t2

0x75a9,	// (0x00024fbf) setting_slider_pane_vc_t3

0x0002,

0xfa09,	// (0x0002d41f) setting_slider_pane_vc_t

0x75b7,	// (0x00024fcd) slider_set_pane_vc

0xb0ef,	// (0x00028b05) volume_set_pane_vc_g1

0xb79d,	// (0x000291b3) volume_set_pane_vc_g2

0xb7a6,	// (0x000291bc) volume_set_pane_vc_g3

0xb7af,	// (0x000291c5) volume_set_pane_vc_g4

0xb7b8,	// (0x000291ce) volume_set_pane_vc_g5

0xb7c1,	// (0x000291d7) volume_set_pane_vc_g6

0xb7ca,	// (0x000291e0) volume_set_pane_vc_g7

0xb7d3,	// (0x000291e9) volume_set_pane_vc_g8

0xb7dc,	// (0x000291f2) volume_set_pane_vc_g9

0xb7e5,	// (0x000291fb) volume_set_pane_vc_g10

0x0009,

0xfa10,	// (0x0002d426) volume_set_pane_vc_g

0x7623,	// (0x00025039) volume_set_pane_vc

0x762b,	// (0x00025041) button_value_adjust_pane_cp1_vc

0x7635,	// (0x0002504b) list_highlight_pane_cp2_vc

0x763e,	// (0x00025054) list_set_pane_vc_ParamLimits

0x763e,	// (0x00025054) list_set_pane_vc

0x7690,	// (0x000250a6) main_pane_set_vc_t1_ParamLimits

0x7690,	// (0x000250a6) main_pane_set_vc_t1

0x76a5,	// (0x000250bb) main_pane_set_vc_t2_ParamLimits

0x76a5,	// (0x000250bb) main_pane_set_vc_t2

0x76b7,	// (0x000250cd) main_pane_set_vc_t3_ParamLimits

0x76b7,	// (0x000250cd) main_pane_set_vc_t3

0x76c9,	// (0x000250df) main_pane_set_vc_t4_ParamLimits

0x76c9,	// (0x000250df) main_pane_set_vc_t4

0x0003,

0xfa25,	// (0x0002d43b) main_pane_set_vc_t_ParamLimits

0xfa25,	// (0x0002d43b) main_pane_set_vc_t

0x76db,	// (0x000250f1) setting_code_pane_vc_ParamLimits

0x76db,	// (0x000250f1) setting_code_pane_vc

0x76ea,	// (0x00025100) setting_slider_graphic_pane_vc

0x76ea,	// (0x00025100) setting_slider_pane_vc

0x76ea,	// (0x00025100) setting_text_pane_vc

0x76ea,	// (0x00025100) setting_volume_pane_vc

0x76f2,	// (0x00025108) scroll_pane_cp121_vc

0x52c2,	// (0x00022cd8) set_content_pane_vc

0x76fa,	// (0x00025110) button_value_adjust_pane_g1

0x7703,	// (0x00025119) button_value_adjust_pane_g2

0x0001,

0xfa81,	// (0x0002d497) button_value_adjust_pane_g

0x770c,	// (0x00025122) form_field_slider_wide_pane_vc_t1_ParamLimits

0x770c,	// (0x00025122) form_field_slider_wide_pane_vc_t1

0x7722,	// (0x00025138) form_field_slider_wide_pane_vc_t2_ParamLimits

0x7722,	// (0x00025138) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa86,	// (0x0002d49c) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa86,	// (0x0002d49c) form_field_slider_wide_pane_vc_t

0x4d27,	// (0x0002273d) input_focus_pane_cp10_vc_ParamLimits

0x4d27,	// (0x0002273d) input_focus_pane_cp10_vc

0x774d,	// (0x00025163) slider_cont_pane_cp1_vc_ParamLimits

0x774d,	// (0x00025163) slider_cont_pane_cp1_vc

0x75bf,	// (0x00024fd5) slider_form_pane_g1_cp2

0x75c8,	// (0x00024fde) slider_form_pane_g2_cp2

0x7768,	// (0x0002517e) form_field_slider_pane_vc_t3

0x7776,	// (0x0002518c) form_field_slider_pane_vc_t4

0x7784,	// (0x0002519a) slider_form_pane_vc_ParamLimits

0x7784,	// (0x0002519a) slider_form_pane_vc

0x7791,	// (0x000251a7) form_field_slider_pane_vc_t1_ParamLimits

0x7791,	// (0x000251a7) form_field_slider_pane_vc_t1

0x77a7,	// (0x000251bd) form_field_slider_pane_vc_t2_ParamLimits

0x77a7,	// (0x000251bd) form_field_slider_pane_vc_t2

0x0001,

0xfa98,	// (0x0002d4ae) form_field_slider_pane_vc_t_ParamLimits

0xfa98,	// (0x0002d4ae) form_field_slider_pane_vc_t

0x4d27,	// (0x0002273d) input_focus_pane_cp9_vc_ParamLimits

0x4d27,	// (0x0002273d) input_focus_pane_cp9_vc

0x77b9,	// (0x000251cf) slider_cont_pane_vc_ParamLimits

0x77b9,	// (0x000251cf) slider_cont_pane_vc

0x77cb,	// (0x000251e1) list_form_graphic_pane_cp_vc_ParamLimits

0x77cb,	// (0x000251e1) list_form_graphic_pane_cp_vc

0x60f7,	// (0x00023b0d) form_field_popup_wide_pane_vc_g1

0x77e0,	// (0x000251f6) form_field_popup_wide_pane_vc_t1_ParamLimits

0x77e0,	// (0x000251f6) form_field_popup_wide_pane_vc_t1

0x52d7,	// (0x00022ced) input_focus_pane_cp8_vc_ParamLimits

0x52d7,	// (0x00022ced) input_focus_pane_cp8_vc

0x781f,	// (0x00025235) list_form_wide_pane_vc_ParamLimits

0x781f,	// (0x00025235) list_form_wide_pane_vc

0x782b,	// (0x00025241) list_form_graphic_pane_vc_g1

0x7833,	// (0x00025249) list_form_graphic_pane_vc_t1_ParamLimits

0x7833,	// (0x00025249) list_form_graphic_pane_vc_t1

0x4d3d,	// (0x00022753) list_highlight_pane_cp5_vc_ParamLimits

0x4d3d,	// (0x00022753) list_highlight_pane_cp5_vc

0x784f,	// (0x00025265) list_form_graphic_pane_vc_ParamLimits

0x784f,	// (0x00025265) list_form_graphic_pane_vc

0x60f7,	// (0x00023b0d) form_field_popup_pane_vc_g1

0x7865,	// (0x0002527b) form_field_popup_pane_vc_t1_ParamLimits

0x7865,	// (0x0002527b) form_field_popup_pane_vc_t1

0x52d7,	// (0x00022ced) input_focus_pane_cp7_vc_ParamLimits

0x52d7,	// (0x00022ced) input_focus_pane_cp7_vc

0x787a,	// (0x00025290) list_form_pane_vc_ParamLimits

0x787a,	// (0x00025290) list_form_pane_vc

0x7886,	// (0x0002529c) data_form_pane_vc_t1_ParamLimits

0x7886,	// (0x0002529c) data_form_pane_vc_t1

0x5332,	// (0x00022d48) input_focus_pane_vc_g1

0x533a,	// (0x00022d50) input_focus_pane_vc_g2

0x5342,	// (0x00022d58) input_focus_pane_vc_g3

0x534a,	// (0x00022d60) input_focus_pane_vc_g4

0x5352,	// (0x00022d68) input_focus_pane_vc_g5

0x535a,	// (0x00022d70) input_focus_pane_vc_g6

0x5362,	// (0x00022d78) input_focus_pane_vc_g7

0x536a,	// (0x00022d80) input_focus_pane_vc_g8

0x5372,	// (0x00022d88) input_focus_pane_vc_g9

0x4c57,	// (0x0002266d) input_focus_pane_vc_g10

0x0009,

0xf682,	// (0x0002d098) input_focus_pane_vc_g

0x60eb,	// (0x00023b01) data_form_pane_vc_ParamLimits

0x60eb,	// (0x00023b01) data_form_pane_vc

0x60f7,	// (0x00023b0d) form_field_data_pane_vc_g1

0x78a1,	// (0x000252b7) form_field_data_pane_vc_t1_ParamLimits

0x78a1,	// (0x000252b7) form_field_data_pane_vc_t1

0x52d7,	// (0x00022ced) input_focus_pane_vc_ParamLimits

0x52d7,	// (0x00022ced) input_focus_pane_vc

0x604f,	// (0x00023a65) button_value_adjust_pane_cp3_vc

0x7179,	// (0x00024b8f) button_value_adjust_pane_cp5_vc

0x78b7,	// (0x000252cd) form_field_data_pane_vc_ParamLimits

0x78b7,	// (0x000252cd) form_field_data_pane_vc

0x6057,	// (0x00023a6d) form_field_data_pane_vc_cp2

0x78ce,	// (0x000252e4) form_field_data_wide_pane_vc_ParamLimits

0x78ce,	// (0x000252e4) form_field_data_wide_pane_vc

0x78e4,	// (0x000252fa) form_field_data_wide_pane_vc_cp2

0x78ec,	// (0x00025302) form_field_popup_pane_vc_ParamLimits

0x78ec,	// (0x00025302) form_field_popup_pane_vc

0x7903,	// (0x00025319) form_field_popup_wide_pane_vc_ParamLimits

0x7903,	// (0x00025319) form_field_popup_wide_pane_vc

0x7919,	// (0x0002532f) form_field_slider_pane_vc_ParamLimits

0x7919,	// (0x0002532f) form_field_slider_pane_vc

0x792c,	// (0x00025342) form_field_slider_wide_pane_vc_ParamLimits

0x792c,	// (0x00025342) form_field_slider_wide_pane_vc

0xb7ee,	// (0x00029204) grid_touch_1_pane_ParamLimits

0xb7ee,	// (0x00029204) grid_touch_1_pane

0xb7fa,	// (0x00029210) grid_touch_2_pane_ParamLimits

0xb7fa,	// (0x00029210) grid_touch_2_pane

0x5e02,	// (0x00023818) touch_pane_g1_ParamLimits

0x5e02,	// (0x00023818) touch_pane_g1

0x794d,	// (0x00025363) cell_app_pane_cp_wide_ParamLimits

0x794d,	// (0x00025363) cell_app_pane_cp_wide

0x795d,	// (0x00025373) grid_popup_fast_wide_pane_ParamLimits

0x795d,	// (0x00025373) grid_popup_fast_wide_pane

0x7971,	// (0x00025387) scroll_pane_cp19_ParamLimits

0x7971,	// (0x00025387) scroll_pane_cp19

0x4cd9,	// (0x000226ef) bg_popup_window_pane_cp20

0x7985,	// (0x0002539b) listscroll_popup_fast_wide_pane

0x4d3d,	// (0x00022753) grid_indicator_nsta_pane

0x798d,	// (0x000253a3) clock_nsta_pane_g1

0x7996,	// (0x000253ac) clock_nsta_pane_t1

0xb812,	// (0x00029228) cell_indicator_nsta_pane_ParamLimits

0xb812,	// (0x00029228) cell_indicator_nsta_pane

0x793f,	// (0x00025355) cell_indicator_nsta_pane_g1

0xb843,	// (0x00029259) cell_indicator_nsta_pane_g2

0x0001,

0xfaa9,	// (0x0002d4bf) cell_indicator_nsta_pane_g

0x79b2,	// (0x000253c8) clock_nsta_pane_cp

0x79ba,	// (0x000253d0) indicator_nsta_pane_cp

0x79c3,	// (0x000253d9) nsta_clock_indic_pane_g1

0x4d79,	// (0x0002278f) grid_indicator_pane

0x577c,	// (0x00023192) scroll_pane_cp29

0xa30a,	// (0x00027d20) indicator_nsta_pane_cp2_ParamLimits

0xa30a,	// (0x00027d20) indicator_nsta_pane_cp2

0x4d3d,	// (0x00022753) main_apps_wheel_pane

0x6296,	// (0x00023cac) form_midp_field_text_pane_ParamLimits

0x63c3,	// (0x00023dd9) scroll_bar_cp050_ParamLimits

0x7a2c,	// (0x00025442) cell_indicator_pane_ParamLimits

0x7a2c,	// (0x00025442) cell_indicator_pane

0x7a42,	// (0x00025458) cell_indicator_pane_g1

0xb850,	// (0x00029266) grid_wheel_folder_pane_ParamLimits

0xb850,	// (0x00029266) grid_wheel_folder_pane

0xb862,	// (0x00029278) list_wheel_apps_pane_ParamLimits

0xb862,	// (0x00029278) list_wheel_apps_pane

0xb871,	// (0x00029287) main_apps_wheel_pane_g1_ParamLimits

0xb871,	// (0x00029287) main_apps_wheel_pane_g1

0xb885,	// (0x0002929b) main_apps_wheel_pane_g2_ParamLimits

0xb885,	// (0x0002929b) main_apps_wheel_pane_g2

0x0001,

0xfac5,	// (0x0002d4db) main_apps_wheel_pane_g_ParamLimits

0xfac5,	// (0x0002d4db) main_apps_wheel_pane_g

0xb899,	// (0x000292af) main_apps_wheel_pane_t1_ParamLimits

0xb899,	// (0x000292af) main_apps_wheel_pane_t1

0xb8b8,	// (0x000292ce) list_wheel_apps_pane_g1

0xb8c0,	// (0x000292d6) list_wheel_apps_pane_g2

0xb8c8,	// (0x000292de) list_wheel_apps_pane_g3

0xb8d0,	// (0x000292e6) list_wheel_apps_pane_g4

0xb8d8,	// (0x000292ee) list_wheel_apps_pane_g5

0x0004,

0xfaca,	// (0x0002d4e0) list_wheel_apps_pane_g

0x4d3d,	// (0x00022753) navi_icon_text_pane

0xac40,	// (0x00028656) aid_fill_nsta

0x7a4c,	// (0x00025462) navi_icon_text_pane_g1

0x7a58,	// (0x0002546e) navi_icon_text_pane_t1

0x59f6,	// (0x0002340c) list_set_graphic_pane_t1_ParamLimits

0x59f6,	// (0x0002340c) list_set_graphic_pane_t1

0x6aa9,	// (0x000244bf) popup_midp_note_alarm_window_t6_ParamLimits

0x6aa9,	// (0x000244bf) popup_midp_note_alarm_window_t6

0x6abb,	// (0x000244d1) popup_midp_note_alarm_window_t7_ParamLimits

0x6abb,	// (0x000244d1) popup_midp_note_alarm_window_t7

0x6acd,	// (0x000244e3) popup_midp_note_alarm_window_t8_ParamLimits

0x6acd,	// (0x000244e3) popup_midp_note_alarm_window_t8

0x6adf,	// (0x000244f5) popup_midp_note_alarm_window_t9_ParamLimits

0x6adf,	// (0x000244f5) popup_midp_note_alarm_window_t9

0x6af1,	// (0x00024507) popup_midp_note_alarm_window_t10_ParamLimits

0x6af1,	// (0x00024507) popup_midp_note_alarm_window_t10

0x6b03,	// (0x00024519) popup_midp_note_alarm_window_t11_ParamLimits

0x6b03,	// (0x00024519) popup_midp_note_alarm_window_t11

0x6b15,	// (0x0002452b) scroll_pane_cp17_ParamLimits

0x6b15,	// (0x0002452b) scroll_pane_cp17

0xb0ef,	// (0x00028b05) volume_small_pane_cp_g1

0xb8f7,	// (0x0002930d) volume_small_pane_cp_g2

0xb900,	// (0x00029316) volume_small_pane_cp_g3

0xb909,	// (0x0002931f) volume_small_pane_cp_g4

0xb11c,	// (0x00028b32) volume_small_pane_cp_g5

0xb912,	// (0x00029328) volume_small_pane_cp_g6

0xb91b,	// (0x00029331) volume_small_pane_cp_g7

0xb924,	// (0x0002933a) volume_small_pane_cp_g8

0xb92d,	// (0x00029343) volume_small_pane_cp_g9

0xb936,	// (0x0002934c) volume_small_pane_cp_g10

0x5ca5,	// (0x000236bb) midp_ticker_pane_g1_ParamLimits

0x5cb1,	// (0x000236c7) midp_ticker_pane_g2_ParamLimits

0xf74e,	// (0x0002d164) midp_ticker_pane_g_ParamLimits

0x5cbd,	// (0x000236d3) midp_ticker_pane_t1_ParamLimits

0xac50,	// (0x00028666) aid_fill_nsta_2

0x63af,	// (0x00023dc5) list_form2_midp_pane

0x71d1,	// (0x00024be7) midp_editing_number_pane_ParamLimits

0x71dd,	// (0x00024bf3) midp_ticker_pane_ParamLimits

0x7a6a,	// (0x00025480) form2_midp_field_pane

0x7a72,	// (0x00025488) scroll_pane_cp51

0x7a92,	// (0x000254a8) form2_midp_button_pane_ParamLimits

0x7a92,	// (0x000254a8) form2_midp_button_pane

0x7aa4,	// (0x000254ba) form2_midp_content_pane_ParamLimits

0x7aa4,	// (0x000254ba) form2_midp_content_pane

0x7abe,	// (0x000254d4) form2_midp_field_choice_group_pane

0x7ac6,	// (0x000254dc) form2_midp_field_pane_g1

0x7ace,	// (0x000254e4) form2_midp_field_pane_g2

0x7ad6,	// (0x000254ec) form2_midp_field_pane_g3

0x7ade,	// (0x000254f4) form2_midp_field_pane_g4

0x0003,

0xfaef,	// (0x0002d505) form2_midp_field_pane_g

0x7ae6,	// (0x000254fc) form2_midp_gauge_slider_pane

0x7aee,	// (0x00025504) form2_midp_gauge_wait_pane

0x7af6,	// (0x0002550c) form2_midp_image_pane_ParamLimits

0x7af6,	// (0x0002550c) form2_midp_image_pane

0x7b11,	// (0x00025527) form2_midp_label_pane_ParamLimits

0x7b11,	// (0x00025527) form2_midp_label_pane

0xb95b,	// (0x00029371) form2_midp_label_pane_cp_ParamLimits

0xb95b,	// (0x00029371) form2_midp_label_pane_cp

0x7b2a,	// (0x00025540) form2_midp_string_pane_ParamLimits

0x7b2a,	// (0x00025540) form2_midp_string_pane

0xd99e,	// (0x0002b3b4) form2_midp_text_pane_ParamLimits

0xd99e,	// (0x0002b3b4) form2_midp_text_pane

0x7b3c,	// (0x00025552) form2_midp_time_pane

0x7b4c,	// (0x00025562) input_focus_pane_cp51_ParamLimits

0x7b4c,	// (0x00025562) input_focus_pane_cp51

0x7b64,	// (0x0002557a) form2_midp_label_pane_t1_ParamLimits

0x7b64,	// (0x0002557a) form2_midp_label_pane_t1

0xd9b7,	// (0x0002b3cd) form2_mdip_text_pane_t1_ParamLimits

0xd9b7,	// (0x0002b3cd) form2_mdip_text_pane_t1

0xd9d2,	// (0x0002b3e8) form2_midp_time_pane_t1

0x7bac,	// (0x000255c2) form2_midp_gauge_slider_pane_t1

0xb97a,	// (0x00029390) form2_midp_gauge_slider_pane_t2

0xb98c,	// (0x000293a2) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf8,	// (0x0002d50e) form2_midp_gauge_slider_pane_t

0x7bbe,	// (0x000255d4) form2_midp_slider_pane

0x7bca,	// (0x000255e0) form2_midp_gauge_wait_pane_t1

0x7bd8,	// (0x000255ee) form2_midp_wait_pane_ParamLimits

0x7bd8,	// (0x000255ee) form2_midp_wait_pane

0x6135,	// (0x00023b4b) list_single_2graphic_pane_cp4_ParamLimits

0x6135,	// (0x00023b4b) list_single_2graphic_pane_cp4

0x7c03,	// (0x00025619) list_single_midp_graphic_pane_cp_ParamLimits

0x7c03,	// (0x00025619) list_single_midp_graphic_pane_cp

0x4cd9,	// (0x000226ef) list_highlight_pane_cp20

0x7c21,	// (0x00025637) list_single_2graphic_pane_g1_cp4

0x724a,	// (0x00024c60) list_single_2graphic_pane_g2_cp4

0x7c3f,	// (0x00025655) list_single_2graphic_pane_t1_cp4

0x4d3d,	// (0x00022753) list_highlight_pane_cp21

0x7c4e,	// (0x00025664) list_single_midp_graphic_pane_g4_cp

0x7c5d,	// (0x00025673) list_single_midp_graphic_pane_t1_cp

0x7c72,	// (0x00025688) form2_mdip_string_pane_t1_ParamLimits

0x7c72,	// (0x00025688) form2_mdip_string_pane_t1

0x4cd9,	// (0x000226ef) bg_wml_button_pane_cp2

0x4c57,	// (0x0002266d) form2_midp_image_pane_g1

0xd050,	// (0x0002aa66) list_double_large_graphic_pane_g5_ParamLimits

0xd050,	// (0x0002aa66) list_double_large_graphic_pane_g5

0xa42e,	// (0x00027e44) midp_form_pane_ParamLimits

0x4d3d,	// (0x00022753) main_apps_wheel_pane_ParamLimits

0xaa78,	// (0x0002848e) popup_preview_window_ParamLimits

0xaa78,	// (0x0002848e) popup_preview_window

0xabf3,	// (0x00028609) popup_touch_info_window_ParamLimits

0xabf3,	// (0x00028609) popup_touch_info_window

0xac11,	// (0x00028627) popup_touch_menu_window_ParamLimits

0xac11,	// (0x00028627) popup_touch_menu_window

0x4c4d,	// (0x00022663) bg_popup_sub_pane_cp6

0x7cdc,	// (0x000256f2) list_touch_menu_pane

0x7ce4,	// (0x000256fa) list_single_touch_menu_pane_ParamLimits

0x7ce4,	// (0x000256fa) list_single_touch_menu_pane

0x7cfb,	// (0x00025711) list_single_touch_menu_pane_t1

0x4d3d,	// (0x00022753) bg_popup_sub_pane_cp7_ParamLimits

0x4d3d,	// (0x00022753) bg_popup_sub_pane_cp7

0x7d09,	// (0x0002571f) heading_sub_pane

0x7d11,	// (0x00025727) list_touch_info_pane_ParamLimits

0x7d11,	// (0x00025727) list_touch_info_pane

0x7d20,	// (0x00025736) list_single_touch_info_pane_ParamLimits

0x7d20,	// (0x00025736) list_single_touch_info_pane

0x7d31,	// (0x00025747) list_single_touch_info_pane_t1

0x7d3f,	// (0x00025755) list_single_touch_info_pane_t2

0x0001,

0xfb06,	// (0x0002d51c) list_single_touch_info_pane_t

0x5c7b,	// (0x00023691) bg_popup_heading_pane_cp

0x7d4d,	// (0x00025763) heading_sub_pane_t1

0x60b1,	// (0x00023ac7) bg_popup_preview_window_pane_cp_ParamLimits

0x60b1,	// (0x00023ac7) bg_popup_preview_window_pane_cp

0x7d09,	// (0x0002571f) heading_preview_pane

0x7d11,	// (0x00025727) list_preview_pane_ParamLimits

0x7d11,	// (0x00025727) list_preview_pane

0x7d5b,	// (0x00025771) popup_preview_window_g1

0x7d20,	// (0x00025736) list_single_preview_pane_ParamLimits

0x7d20,	// (0x00025736) list_single_preview_pane

0x7d63,	// (0x00025779) list_single_preview_pane_g1

0x7d6b,	// (0x00025781) list_single_preview_pane_t1

0x7d31,	// (0x00025747) list_single_preview_pane_t2

0x0001,

0xfb0b,	// (0x0002d521) list_single_preview_pane_t

0x7d79,	// (0x0002578f) bg_popup_heading_pane_cp2_ParamLimits

0x7d79,	// (0x0002578f) bg_popup_heading_pane_cp2

0x7d8f,	// (0x000257a5) heading_preview_pane_g1

0x7d97,	// (0x000257ad) heading_preview_pane_t1_ParamLimits

0x7d97,	// (0x000257ad) heading_preview_pane_t1

0x4d90,	// (0x000227a6) soft_indicator_pane_t1_ParamLimits

0x525a,	// (0x00022c70) scroll_pane_ParamLimits

0x5681,	// (0x00023097) scroll_sc2_left_pane

0x5678,	// (0x0002308e) scroll_sc2_right_pane

0x56a0,	// (0x000230b6) scroll_bg_pane_g1_ParamLimits

0x56b5,	// (0x000230cb) scroll_bg_pane_g2_ParamLimits

0x56cd,	// (0x000230e3) scroll_bg_pane_g3_ParamLimits

0xf6d9,	// (0x0002d0ef) scroll_bg_pane_g_ParamLimits

0x56a0,	// (0x000230b6) scroll_handle_pane_g1_ParamLimits

0x56ef,	// (0x00023105) scroll_handle_pane_g2_ParamLimits

0x56cd,	// (0x000230e3) scroll_handle_pane_g3_ParamLimits

0xf6e0,	// (0x0002d0f6) scroll_handle_pane_g_ParamLimits

0xa7c0,	// (0x000281d6) popup_choice_list_window_ParamLimits

0xa7c0,	// (0x000281d6) popup_choice_list_window

0x5f5d,	// (0x00023973) choice_list_pane

0x5fd3,	// (0x000239e9) cell_toolbar_pane_t1

0x5ffb,	// (0x00023a11) toolbar_button_pane_ParamLimits

0x6edb,	// (0x000248f1) ai_gene_pane_1_t2_ParamLimits

0x6edb,	// (0x000248f1) ai_gene_pane_1_t2

0x0001,

0xf908,	// (0x0002d31e) ai_gene_pane_1_t_ParamLimits

0xf908,	// (0x0002d31e) ai_gene_pane_1_t

0x7db4,	// (0x000257ca) scroll_sc2_left_pane_g1

0x7db4,	// (0x000257ca) scroll_sc2_right_pane_g1

0x545d,	// (0x00022e73) bg_popup_sub_pane_cp10

0x7dbe,	// (0x000257d4) list_choice_list_pane

0x7dd5,	// (0x000257eb) list_single_choice_list_pane_ParamLimits

0x7dd5,	// (0x000257eb) list_single_choice_list_pane

0x7de7,	// (0x000257fd) list_single_choice_list_pane_g1

0x5448,	// (0x00022e5e) list_single_choice_list_pane_t1_ParamLimits

0x5448,	// (0x00022e5e) list_single_choice_list_pane_t1

0x7def,	// (0x00025805) choice_list_pane_g1

0x7df7,	// (0x0002580d) choice_list_pane_t1

0x4c4d,	// (0x00022663) input_focus_pane_cp11

0x55df,	// (0x00022ff5) title_pane_stacon_g2_ParamLimits

0x55df,	// (0x00022ff5) title_pane_stacon_g2

0x0002,

0xf6bf,	// (0x0002d0d5) title_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0002d0d5) title_pane_stacon_g

0x5c7b,	// (0x00023691) cursor_press_pane

0xa85c,	// (0x00028272) popup_fep_hwr_window_ParamLimits

0xa85c,	// (0x00028272) popup_fep_hwr_window

0xa8b8,	// (0x000282ce) popup_fep_vkb_window_ParamLimits

0xa8b8,	// (0x000282ce) popup_fep_vkb_window

0x7e05,	// (0x0002581b) cursor_press_pane_g1

0x0002,

0xfb34,	// (0x0002d54a) fep_vkb_side_pane_g_ParamLimits

0xb9d3,	// (0x000293e9) fep_hwr_candidate_pane_ParamLimits

0xb9d3,	// (0x000293e9) fep_hwr_candidate_pane

0xb9fb,	// (0x00029411) fep_hwr_side_pane_ParamLimits

0xb9fb,	// (0x00029411) fep_hwr_side_pane

0xba1b,	// (0x00029431) fep_hwr_top_pane_ParamLimits

0xba1b,	// (0x00029431) fep_hwr_top_pane

0xba33,	// (0x00029449) fep_hwr_write_pane_ParamLimits

0xba33,	// (0x00029449) fep_hwr_write_pane

0xfb34,	// (0x0002d54a) fep_vkb_side_pane_g

0x7e1f,	// (0x00025835) fep_hwr_top_pane_g1

0x7e0d,	// (0x00025823) fep_hwr_top_pane_g2

0xba6d,	// (0x00029483) fep_hwr_top_pane_g3

0x0002,

0xfb10,	// (0x0002d526) fep_hwr_top_pane_g

0xba82,	// (0x00029498) fep_hwr_top_text_pane

0x57e9,	// (0x000231ff) fep_hwr_top_text_pane_g1

0x7e55,	// (0x0002586b) fep_hwr_top_text_pane_t1

0xbb70,	// (0x00029586) fep_hwr_candidate_pane_g1

0x801e,	// (0x00025a34) fep_vkb_keypad_pane_g3_ParamLimits

0x801e,	// (0x00025a34) fep_vkb_keypad_pane_g3

0x8040,	// (0x00025a56) fep_vkb_keypad_pane_g4_ParamLimits

0x8040,	// (0x00025a56) fep_vkb_keypad_pane_g4

0x80af,	// (0x00025ac5) fep_vkb_bottom_pane_g2_ParamLimits

0x80af,	// (0x00025ac5) fep_vkb_bottom_pane_g2

0x0001,

0xfb3b,	// (0x0002d551) fep_vkb_bottom_pane_g_ParamLimits

0xfb3b,	// (0x0002d551) fep_vkb_bottom_pane_g

0x7db4,	// (0x000257ca) cell_vkb_side_pane_g2

0x0001,

0xfb45,	// (0x0002d55b) cell_vkb_side_pane_g

0x80f3,	// (0x00025b09) cell_vkb_side_pane_t1

0x8101,	// (0x00025b17) cell_vkb_side_pane_t1_copy1

0x7db4,	// (0x000257ca) bg_fep_vkb_candidate_pane_g2

0x81cf,	// (0x00025be5) cell_vkb_candidate_pane_ParamLimits

0x7e63,	// (0x00025879) aid_size_cell_vkb_ParamLimits

0x7e63,	// (0x00025879) aid_size_cell_vkb

0x81cf,	// (0x00025be5) cell_vkb_candidate_pane

0xbc7b,	// (0x00029691) bg_popup_fep_shadow_pane_g1

0x7ecd,	// (0x000258e3) fep_vkb_bottom_pane_ParamLimits

0x7ecd,	// (0x000258e3) fep_vkb_bottom_pane

0x7f0a,	// (0x00025920) fep_vkb_candidate_pane_ParamLimits

0x7f0a,	// (0x00025920) fep_vkb_candidate_pane

0x7f26,	// (0x0002593c) fep_vkb_keypad_pane_ParamLimits

0x7f26,	// (0x0002593c) fep_vkb_keypad_pane

0x7f5a,	// (0x00025970) fep_vkb_side_pane_ParamLimits

0x7f5a,	// (0x00025970) fep_vkb_side_pane

0x7f86,	// (0x0002599c) fep_vkb_top_pane_ParamLimits

0x7f86,	// (0x0002599c) fep_vkb_top_pane

0x7fb2,	// (0x000259c8) fep_vkb_top_pane_g1_ParamLimits

0x7fb2,	// (0x000259c8) fep_vkb_top_pane_g1

0x7fc1,	// (0x000259d7) fep_vkb_top_pane_g2_ParamLimits

0x7fc1,	// (0x000259d7) fep_vkb_top_pane_g2

0x7fd0,	// (0x000259e6) fep_vkb_top_pane_g3_ParamLimits

0x7fd0,	// (0x000259e6) fep_vkb_top_pane_g3

0x0003,

0xfb2b,	// (0x0002d541) fep_vkb_top_pane_g_ParamLimits

0xfb2b,	// (0x0002d541) fep_vkb_top_pane_g

0x7fee,	// (0x00025a04) fep_vkb_top_text_pane_ParamLimits

0x7fee,	// (0x00025a04) fep_vkb_top_text_pane

0xbba3,	// (0x000295b9) fep_vkb_side_pane_g1_ParamLimits

0xbba3,	// (0x000295b9) fep_vkb_side_pane_g1

0x800d,	// (0x00025a23) grid_vkb_side_pane_ParamLimits

0x800d,	// (0x00025a23) grid_vkb_side_pane

0xbc83,	// (0x00029699) bg_popup_fep_shadow_pane_g2

0xbc8c,	// (0x000296a2) bg_popup_fep_shadow_pane_g3

0xbc94,	// (0x000296aa) bg_popup_fep_shadow_pane_g4

0xbc9d,	// (0x000296b3) bg_popup_fep_shadow_pane_g5

0xbca5,	// (0x000296bb) bg_popup_fep_shadow_pane_g6

0xbcad,	// (0x000296c3) bg_popup_fep_shadow_pane_g7

0x534a,	// (0x00022d60) bg_popup_fep_shadow_pane_g8

0x805e,	// (0x00025a74) grid_vkb_keypad_number_pane_ParamLimits

0x805e,	// (0x00025a74) grid_vkb_keypad_number_pane

0x806e,	// (0x00025a84) grid_vkb_keypad_pane_ParamLimits

0x806e,	// (0x00025a84) grid_vkb_keypad_pane

0x8094,	// (0x00025aaa) fep_vkb_bottom_pane_g1_ParamLimits

0x8094,	// (0x00025aaa) fep_vkb_bottom_pane_g1

0x80bd,	// (0x00025ad3) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x80bd,	// (0x00025ad3) grid_vkb_keypad_bottom_left_pane

0x80d2,	// (0x00025ae8) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x80d2,	// (0x00025ae8) grid_vkb_keypad_bottom_right_pane

0x80e7,	// (0x00025afd) fep_vkb_top_text_pane_g1

0xbbed,	// (0x00029603) fep_vkb_top_text_pane_t1

0xbc02,	// (0x00029618) cell_vkb_side_pane_ParamLimits

0xbc02,	// (0x00029618) cell_vkb_side_pane

0x7db4,	// (0x000257ca) cell_vkb_side_pane_g1

0x810f,	// (0x00025b25) cell_vkb_keypad_pane_ParamLimits

0x810f,	// (0x00025b25) cell_vkb_keypad_pane

0x817c,	// (0x00025b92) cell_vkb_keypad_pane_g1

0x0008,

0xfb58,	// (0x0002d56e) bg_popup_fep_shadow_pane_g

0xbcbd,	// (0x000296d3) cell_hwr_side_pane_g1

0xbcbd,	// (0x000296d3) cell_hwr_side_pane_g2

0x8186,	// (0x00025b9c) cell_vkb_keypad_pane_t1

0xbc25,	// (0x0002963b) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbc25,	// (0x0002963b) cell_vkb_keypad_bottom_left_pane

0xbc42,	// (0x00029658) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbc42,	// (0x00029658) cell_vkb_keypad_bottom_right_pane

0x7db4,	// (0x000257ca) cell_vkb_keypad_bottom_left_pane_g1

0x7db4,	// (0x000257ca) cell_vkb_keypad_bottom_right_pane_g1

0x8194,	// (0x00025baa) cell_vkb_keypad_number_pane_ParamLimits

0x8194,	// (0x00025baa) cell_vkb_keypad_number_pane

0x81b3,	// (0x00025bc9) cell_vkb_keypad_number_pane_g1

0x81bd,	// (0x00025bd3) cell_vkb_keypad_number_pane_g2

0x81c6,	// (0x00025bdc) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4a,	// (0x0002d560) cell_vkb_keypad_number_pane_g

0x8186,	// (0x00025b9c) cell_vkb_keypad_number_pane_t1

0x81e8,	// (0x00025bfe) fep_vkb_candidate_pane_g1

0x0001,

0xfb6b,	// (0x0002d581) cell_hwr_side_pane_g

0x8201,	// (0x00025c17) cell_hwr_side_pane_t1

0xbcc7,	// (0x000296dd) cell_hwr_side_pane_t1_copy1

0xbcd5,	// (0x000296eb) cell_hwr_candidate_pane_g1

0xbd04,	// (0x0002971a) cell_hwr_candidate_pane_t1

0x7db4,	// (0x000257ca) cell_vkb_candidate_pane_g2

0x8287,	// (0x00025c9d) cell_vkb_candidate_pane_t1

0xb99e,	// (0x000293b4) bg_popup_fep_shadow_pane_ParamLimits

0xb99e,	// (0x000293b4) bg_popup_fep_shadow_pane

0xba4d,	// (0x00029463) bg_fep_hwr_top_pane_g4

0x7e31,	// (0x00025847) bg_hwr_side_pane_g1_ParamLimits

0x7e31,	// (0x00025847) bg_hwr_side_pane_g1

0xbabe,	// (0x000294d4) cell_hwr_side_pane_ParamLimits

0xbabe,	// (0x000294d4) cell_hwr_side_pane

0xbaf9,	// (0x0002950f) fep_hwr_write_pane_g1_ParamLimits

0xbaf9,	// (0x0002950f) fep_hwr_write_pane_g1

0xbb06,	// (0x0002951c) fep_hwr_write_pane_g2_ParamLimits

0xbb06,	// (0x0002951c) fep_hwr_write_pane_g2

0xbb13,	// (0x00029529) fep_hwr_write_pane_g3_ParamLimits

0xbb13,	// (0x00029529) fep_hwr_write_pane_g3

0xbb21,	// (0x00029537) fep_hwr_write_pane_g4_ParamLimits

0xbb21,	// (0x00029537) fep_hwr_write_pane_g4

0x0005,

0xfb17,	// (0x0002d52d) fep_hwr_write_pane_g_ParamLimits

0xfb17,	// (0x0002d52d) fep_hwr_write_pane_g

0xba4d,	// (0x00029463) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xba4d,	// (0x00029463) bg_fep_hwr_candidate_pane_g2

0xbb36,	// (0x0002954c) cell_hwr_candidate_pane_ParamLimits

0xbb36,	// (0x0002954c) cell_hwr_candidate_pane

0xbb70,	// (0x00029586) fep_hwr_candidate_pane_g1_ParamLimits

0x7e91,	// (0x000258a7) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7e91,	// (0x000258a7) bg_popup_fep_shadow_pane_cp2

0x7fe0,	// (0x000259f6) fep_vkb_top_pane_g4_ParamLimits

0x7fe0,	// (0x000259f6) fep_vkb_top_pane_g4

0x7fff,	// (0x00025a15) fep_vkb_side_pane_g2_ParamLimits

0x7fff,	// (0x00025a15) fep_vkb_side_pane_g2

0xd1b2,	// (0x0002abc8) list_setting_pane_t4_ParamLimits

0xd1b2,	// (0x0002abc8) list_setting_pane_t4

0xd240,	// (0x0002ac56) list_setting_number_pane_t5_ParamLimits

0xd240,	// (0x0002ac56) list_setting_number_pane_t5

0xa153,	// (0x00027b69) list_double_heading_pane_cp2_ParamLimits

0xa153,	// (0x00027b69) list_double_heading_pane_cp2

0x5af0,	// (0x00023506) list_double_heading_pane_g1_cp2_ParamLimits

0x5af0,	// (0x00023506) list_double_heading_pane_g1_cp2

0x8295,	// (0x00025cab) list_double_heading_pane_g2_cp2_ParamLimits

0x8295,	// (0x00025cab) list_double_heading_pane_g2_cp2

0x82a9,	// (0x00025cbf) list_double_heading_pane_t1_cp2_ParamLimits

0x82a9,	// (0x00025cbf) list_double_heading_pane_t1_cp2

0x82bf,	// (0x00025cd5) list_double_heading_pane_t2_cp2_ParamLimits

0x82bf,	// (0x00025cd5) list_double_heading_pane_t2_cp2

0x4c45,	// (0x0002265b) aid_value_unit2

0x9a5a,	// (0x00027470) popup_preview_fixed_window

0x4e70,	// (0x00022886) bg_popup_preview_window_pane_cp02

0x82d1,	// (0x00025ce7) list_preview_fixed_pane

0x8317,	// (0x00025d2d) list_empty_pane_fp_ParamLimits

0x8317,	// (0x00025d2d) list_empty_pane_fp

0x8317,	// (0x00025d2d) list_single_cale_day_pane_fp_ParamLimits

0x8317,	// (0x00025d2d) list_single_cale_day_pane_fp

0x8317,	// (0x00025d2d) list_single_graphic_heading_pane_fp_ParamLimits

0x8317,	// (0x00025d2d) list_single_graphic_heading_pane_fp

0x8317,	// (0x00025d2d) list_single_graphic_pane_fp_ParamLimits

0x8317,	// (0x00025d2d) list_single_graphic_pane_fp

0x8317,	// (0x00025d2d) list_single_heading_pane_fp_ParamLimits

0x8317,	// (0x00025d2d) list_single_heading_pane_fp

0x8317,	// (0x00025d2d) list_single_pane_fp_ParamLimits

0x8317,	// (0x00025d2d) list_single_pane_fp

0x832b,	// (0x00025d41) list_single_pane_fp_g1_ParamLimits

0x832b,	// (0x00025d41) list_single_pane_fp_g1

0xd171,	// (0x0002ab87) list_single_pane_fp_g2_ParamLimits

0xd171,	// (0x0002ab87) list_single_pane_fp_g2

0xda06,	// (0x0002b41c) list_single_pane_fp_g3_ParamLimits

0xda06,	// (0x0002b41c) list_single_pane_fp_g3

0x8337,	// (0x00025d4d) list_single_pane_fp_g4_ParamLimits

0x8337,	// (0x00025d4d) list_single_pane_fp_g4

0x0003,

0xfb7e,	// (0x0002d594) list_single_pane_fp_g_ParamLimits

0xfb7e,	// (0x0002d594) list_single_pane_fp_g

0xda1a,	// (0x0002b430) list_single_pane_fp_t1_ParamLimits

0xda1a,	// (0x0002b430) list_single_pane_fp_t1

0xda31,	// (0x0002b447) list_single_graphic_pane_fp_g1_ParamLimits

0xda31,	// (0x0002b447) list_single_graphic_pane_fp_g1

0x832b,	// (0x00025d41) list_single_graphic_pane_fp_g2_ParamLimits

0x832b,	// (0x00025d41) list_single_graphic_pane_fp_g2

0xd171,	// (0x0002ab87) list_single_graphic_pane_fp_g3_ParamLimits

0xd171,	// (0x0002ab87) list_single_graphic_pane_fp_g3

0xda06,	// (0x0002b41c) list_single_graphic_pane_fp_g4_ParamLimits

0xda06,	// (0x0002b41c) list_single_graphic_pane_fp_g4

0x8337,	// (0x00025d4d) list_single_graphic_pane_fp_g5_ParamLimits

0x8337,	// (0x00025d4d) list_single_graphic_pane_fp_g5

0x0004,

0xfb87,	// (0x0002d59d) list_single_graphic_pane_fp_g_ParamLimits

0xfb87,	// (0x0002d59d) list_single_graphic_pane_fp_g

0xda3d,	// (0x0002b453) list_single_graphic_pane_fp_t1_ParamLimits

0xda3d,	// (0x0002b453) list_single_graphic_pane_fp_t1

0xda31,	// (0x0002b447) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xda31,	// (0x0002b447) list_single_graphic_heading_pane_fp_g1

0x832b,	// (0x00025d41) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x832b,	// (0x00025d41) list_single_graphic_heading_pane_fp_g2

0xd171,	// (0x0002ab87) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd171,	// (0x0002ab87) list_single_graphic_heading_pane_fp_g3

0xda06,	// (0x0002b41c) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xda06,	// (0x0002b41c) list_single_graphic_heading_pane_fp_g4

0x8337,	// (0x00025d4d) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x8337,	// (0x00025d4d) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb87,	// (0x0002d59d) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb87,	// (0x0002d59d) list_single_graphic_heading_pane_fp_g

0xda53,	// (0x0002b469) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xda53,	// (0x0002b469) list_single_graphic_heading_pane_fp_t1

0xda69,	// (0x0002b47f) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xda69,	// (0x0002b47f) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb92,	// (0x0002d5a8) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb92,	// (0x0002d5a8) list_single_graphic_heading_pane_fp_t

0xda7b,	// (0x0002b491) list_single_cale_day_pane_fp_g1_ParamLimits

0xda7b,	// (0x0002b491) list_single_cale_day_pane_fp_g1

0x8343,	// (0x00025d59) list_single_cale_day_pane_fp_g2_ParamLimits

0x8343,	// (0x00025d59) list_single_cale_day_pane_fp_g2

0xdab3,	// (0x0002b4c9) list_single_cale_day_pane_fp_g3_ParamLimits

0xdab3,	// (0x0002b4c9) list_single_cale_day_pane_fp_g3

0xdadb,	// (0x0002b4f1) list_single_cale_day_pane_fp_g4_ParamLimits

0xdadb,	// (0x0002b4f1) list_single_cale_day_pane_fp_g4

0xdaff,	// (0x0002b515) list_single_cale_day_pane_fp_g5_ParamLimits

0xdaff,	// (0x0002b515) list_single_cale_day_pane_fp_g5

0x0004,

0xfb97,	// (0x0002d5ad) list_single_cale_day_pane_fp_g_ParamLimits

0xfb97,	// (0x0002d5ad) list_single_cale_day_pane_fp_g

0xdb23,	// (0x0002b539) list_single_cale_day_pane_fp_t1_ParamLimits

0xdb23,	// (0x0002b539) list_single_cale_day_pane_fp_t1

0xdb49,	// (0x0002b55f) list_single_cale_day_pane_fp_t2_ParamLimits

0xdb49,	// (0x0002b55f) list_single_cale_day_pane_fp_t2

0xdb62,	// (0x0002b578) list_single_cale_day_pane_fp_t3_ParamLimits

0xdb62,	// (0x0002b578) list_single_cale_day_pane_fp_t3

0x0002,

0xfba2,	// (0x0002d5b8) list_single_cale_day_pane_fp_t_ParamLimits

0xfba2,	// (0x0002d5b8) list_single_cale_day_pane_fp_t

0x832b,	// (0x00025d41) list_empty_pane_fp_g1_ParamLimits

0x832b,	// (0x00025d41) list_empty_pane_fp_g1

0xdb7b,	// (0x0002b591) list_empty_pane_fp_t1

0xdb89,	// (0x0002b59f) list_empty_pane_fp_t2

0x0001,

0xfba9,	// (0x0002d5bf) list_empty_pane_fp_t

0x832b,	// (0x00025d41) list_single_heading_pane_fp_g1_ParamLimits

0x832b,	// (0x00025d41) list_single_heading_pane_fp_g1

0xd171,	// (0x0002ab87) list_single_heading_pane_fp_g2_ParamLimits

0xd171,	// (0x0002ab87) list_single_heading_pane_fp_g2

0xda06,	// (0x0002b41c) list_single_heading_pane_fp_g3_ParamLimits

0xda06,	// (0x0002b41c) list_single_heading_pane_fp_g3

0x0002,

0xfbae,	// (0x0002d5c4) list_single_heading_pane_fp_g_ParamLimits

0xfbae,	// (0x0002d5c4) list_single_heading_pane_fp_g

0xdb97,	// (0x0002b5ad) list_single_heading_pane_fp_t1_ParamLimits

0xdb97,	// (0x0002b5ad) list_single_heading_pane_fp_t1

0xdba9,	// (0x0002b5bf) list_single_heading_pane_fp_t2_ParamLimits

0xdba9,	// (0x0002b5bf) list_single_heading_pane_fp_t2

0x0001,

0xfbb5,	// (0x0002d5cb) list_single_heading_pane_fp_t_ParamLimits

0xfbb5,	// (0x0002d5cb) list_single_heading_pane_fp_t

0x5469,	// (0x00022e7f) aid_size_cell_fast

0x4e53,	// (0x00022869) soft_indicator_pane_cp1_t1

0x54a6,	// (0x00022ebc) cell_app_pane_cp2_ParamLimits

0x54a6,	// (0x00022ebc) cell_app_pane_cp2

0xb9c0,	// (0x000293d6) fep_hwr_candidate_drop_down_list_pane

0xbb8a,	// (0x000295a0) fep_hwr_candidate_pane_g3_ParamLimits

0xbb8a,	// (0x000295a0) fep_hwr_candidate_pane_g3

0x4325,	// (0x00021d3b) fep_hwr_candidate_pane_g4_ParamLimits

0x4325,	// (0x00021d3b) fep_hwr_candidate_pane_g4

0x0002,

0xfb24,	// (0x0002d53a) fep_hwr_candidate_pane_g_ParamLimits

0xfb24,	// (0x0002d53a) fep_hwr_candidate_pane_g

0x7ef9,	// (0x0002590f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7ef9,	// (0x0002590f) fep_vkb_candidate_drop_down_list_pane

0x81f0,	// (0x00025c06) fep_vkb_candidate_pane_g3

0x81f8,	// (0x00025c0e) fep_vkb_candidate_pane_g4

0x0002,

0xfb51,	// (0x0002d567) fep_vkb_candidate_pane_g

0xbcd5,	// (0x000296eb) cell_hwr_candidate_pane_g1_ParamLimits

0xbce3,	// (0x000296f9) cell_hwr_candidate_pane_g3_ParamLimits

0xbce3,	// (0x000296f9) cell_hwr_candidate_pane_g3

0xd9e5,	// (0x0002b3fb) cell_hwr_candidate_pane_g4_ParamLimits

0xd9e5,	// (0x0002b3fb) cell_hwr_candidate_pane_g4

0x0002,

0xfb70,	// (0x0002d586) cell_hwr_candidate_pane_g_ParamLimits

0xfb70,	// (0x0002d586) cell_hwr_candidate_pane_g

0x8251,	// (0x00025c67) cell_vkb_candidate_pane_g3_ParamLimits

0x8251,	// (0x00025c67) cell_vkb_candidate_pane_g3

0x826c,	// (0x00025c82) cell_vkb_candidate_pane_g4_ParamLimits

0x826c,	// (0x00025c82) cell_vkb_candidate_pane_g4

0x834f,	// (0x00025d65) cell_app_pane_cp2_g1_ParamLimits

0x834f,	// (0x00025d65) cell_app_pane_cp2_g1

0x836d,	// (0x00025d83) cell_app_pane_cp2_g2_ParamLimits

0x836d,	// (0x00025d83) cell_app_pane_cp2_g2

0x0001,

0xfbba,	// (0x0002d5d0) cell_app_pane_cp2_g_ParamLimits

0xfbba,	// (0x0002d5d0) cell_app_pane_cp2_g

0x8379,	// (0x00025d8f) cell_app_pane_cp2_t1_ParamLimits

0x8379,	// (0x00025d8f) cell_app_pane_cp2_t1

0x52d7,	// (0x00022ced) grid_highlight_pane_cp1_ParamLimits

0x52d7,	// (0x00022ced) grid_highlight_pane_cp1

0xbd21,	// (0x00029737) cell_hwr_candidate_pane_cp1_ParamLimits

0xbd21,	// (0x00029737) cell_hwr_candidate_pane_cp1

0xbcd5,	// (0x000296eb) fep_hwr_candidate_drop_down_list_pane_g1

0xbd3f,	// (0x00029755) fep_hwr_candidate_drop_down_list_pane_g2

0xbd4c,	// (0x00029762) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbf,	// (0x0002d5d5) fep_hwr_candidate_drop_down_list_pane_g

0xbd59,	// (0x0002976f) fep_hwr_candidate_drop_down_list_scroll_pane

0xbd62,	// (0x00029778) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xbd62,	// (0x00029778) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xbd6f,	// (0x00029785) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xbd6f,	// (0x00029785) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xbd7c,	// (0x00029792) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xbd7c,	// (0x00029792) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xbd89,	// (0x0002979f) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbd89,	// (0x0002979f) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xbda4,	// (0x000297ba) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xbda4,	// (0x000297ba) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xbdbf,	// (0x000297d5) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xbdbf,	// (0x000297d5) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xbdda,	// (0x000297f0) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xbdda,	// (0x000297f0) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xbdf5,	// (0x0002980b) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xbdf5,	// (0x0002980b) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc6,	// (0x0002d5dc) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc6,	// (0x0002d5dc) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xbe10,	// (0x00029826) cell_vkb_candidate_pane_cp1_ParamLimits

0xbe10,	// (0x00029826) cell_vkb_candidate_pane_cp1

0x7fe0,	// (0x000259f6) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7fe0,	// (0x000259f6) fep_vkb_candidate_drop_down_list_pane_g1

0x838b,	// (0x00025da1) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x838b,	// (0x00025da1) fep_vkb_candidate_drop_down_list_pane_g2

0x8398,	// (0x00025dae) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x8398,	// (0x00025dae) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd7,	// (0x0002d5ed) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd7,	// (0x0002d5ed) fep_vkb_candidate_drop_down_list_pane_g

0x83a5,	// (0x00025dbb) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x83a5,	// (0x00025dbb) fep_vkb_candidate_drop_down_list_scroll_pane

0x83b2,	// (0x00025dc8) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x83b2,	// (0x00025dc8) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x83bf,	// (0x00025dd5) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x83bf,	// (0x00025dd5) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x83cb,	// (0x00025de1) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x83cb,	// (0x00025de1) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x820f,	// (0x00025c25) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x820f,	// (0x00025c25) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x8230,	// (0x00025c46) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8230,	// (0x00025c46) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x83d7,	// (0x00025ded) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x83d7,	// (0x00025ded) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x83f8,	// (0x00025e0e) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x83f8,	// (0x00025e0e) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x8419,	// (0x00025e2f) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8419,	// (0x00025e2f) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbde,	// (0x0002d5f4) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbde,	// (0x0002d5f4) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9b44,	// (0x0002755a) title_pane_g1_ParamLimits

0x9b51,	// (0x00027567) title_pane_g2_ParamLimits

0xf54e,	// (0x0002cf64) title_pane_g_ParamLimits

0x57e1,	// (0x000231f7) aid_call2_pane

0x57d9,	// (0x000231ef) aid_call_pane

0x57e9,	// (0x000231ff) popup_clock_analogue_window_g1

0x57e9,	// (0x000231ff) popup_clock_analogue_window_g2

0xa134,	// (0x00027b4a) popup_clock_analogue_window_g3

0xa13d,	// (0x00027b53) popup_clock_analogue_window_g4

0x4c57,	// (0x0002266d) popup_clock_analogue_window_g5

0x0004,

0xf6ee,	// (0x0002d104) popup_clock_analogue_window_g

0xa145,	// (0x00027b5b) popup_clock_analogue_window_t1

0xa189,	// (0x00027b9f) clock_digital_number_pane_ParamLimits

0xa189,	// (0x00027b9f) clock_digital_number_pane

0xa195,	// (0x00027bab) clock_digital_number_pane_cp02_ParamLimits

0xa195,	// (0x00027bab) clock_digital_number_pane_cp02

0xa1a1,	// (0x00027bb7) clock_digital_number_pane_cp03_ParamLimits

0xa1a1,	// (0x00027bb7) clock_digital_number_pane_cp03

0xa1ad,	// (0x00027bc3) clock_digital_number_pane_cp04_ParamLimits

0xa1ad,	// (0x00027bc3) clock_digital_number_pane_cp04

0xa1b9,	// (0x00027bcf) clock_digital_separator_pane_ParamLimits

0xa1b9,	// (0x00027bcf) clock_digital_separator_pane

0xa1c5,	// (0x00027bdb) popup_clock_digital_window_t1_ParamLimits

0xa1c5,	// (0x00027bdb) popup_clock_digital_window_t1

0x4c57,	// (0x0002266d) clock_digital_number_pane_g1

0x4c57,	// (0x0002266d) clock_digital_number_pane_g2

0x0001,

0xf6f9,	// (0x0002d10f) clock_digital_number_pane_g

0x4c57,	// (0x0002266d) clock_digital_separator_pane_g1

0x4c57,	// (0x0002266d) clock_digital_separator_pane_g2

0x0001,

0xf6f9,	// (0x0002d10f) clock_digital_separator_pane_g

0xac40,	// (0x00028656) aid_fill_nsta_ParamLimits

0xacf9,	// (0x0002870f) indicator_nsta_pane_ParamLimits

0x5f06,	// (0x0002391c) popup_clock_analogue_window

0x5f06,	// (0x0002391c) popup_clock_digital_window

0x4d3d,	// (0x00022753) grid_indicator_nsta_pane_ParamLimits

0x79a4,	// (0x000253ba) clock_nsta_pane_t2

0x0001,

0xfaa4,	// (0x0002d4ba) clock_nsta_pane_t

0xa09d,	// (0x00027ab3) aid_size_max_handle

0xa0a7,	// (0x00027abd) aid_size_min_handle

0x5c7b,	// (0x00023691) editor_scroll_pane

0x8434,	// (0x00025e4a) ex_editor_pane

0x5426,	// (0x00022e3c) scroll_pane_cp13

0x5287,	// (0x00022c9d) scroll_pane_cp14

0x5818,	// (0x0002322e) scroll_pane_cp36

0xa163,	// (0x00027b79) list_single_graphic_hl_pane_cp2_ParamLimits

0xa163,	// (0x00027b79) list_single_graphic_hl_pane_cp2

0xb583,	// (0x00028f99) list_single_graphic_hl_pane_ParamLimits

0xb583,	// (0x00028f99) list_single_graphic_hl_pane

0xdbbf,	// (0x0002b5d5) aid_size_min_hl_cp1

0x843c,	// (0x00025e52) list_highlight_pane_cp34_ParamLimits

0x843c,	// (0x00025e52) list_highlight_pane_cp34

0x844d,	// (0x00025e63) list_single_graphic_hl_pane_g1_ParamLimits

0x844d,	// (0x00025e63) list_single_graphic_hl_pane_g1

0xdbc8,	// (0x0002b5de) list_single_graphic_hl_pane_g2_ParamLimits

0xdbc8,	// (0x0002b5de) list_single_graphic_hl_pane_g2

0xdbc8,	// (0x0002b5de) list_single_graphic_hl_pane_g3_ParamLimits

0xdbc8,	// (0x0002b5de) list_single_graphic_hl_pane_g3

0xd530,	// (0x0002af46) list_single_graphic_hl_pane_g4_ParamLimits

0xd530,	// (0x0002af46) list_single_graphic_hl_pane_g4

0xdbd4,	// (0x0002b5ea) list_single_graphic_hl_pane_g5_ParamLimits

0xdbd4,	// (0x0002b5ea) list_single_graphic_hl_pane_g5

0x0004,

0xfbef,	// (0x0002d605) list_single_graphic_hl_pane_g_ParamLimits

0xfbef,	// (0x0002d605) list_single_graphic_hl_pane_g

0xdbe8,	// (0x0002b5fe) list_single_graphic_hl_pane_t1_ParamLimits

0xdbe8,	// (0x0002b5fe) list_single_graphic_hl_pane_t1

0x845a,	// (0x00025e70) aid_size_min_hl_cp2

0x8463,	// (0x00025e79) list_highlight_pane_cp34_cp2_ParamLimits

0x8463,	// (0x00025e79) list_highlight_pane_cp34_cp2

0x844d,	// (0x00025e63) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x844d,	// (0x00025e63) list_single_graphic_hl_pane_g1_cp2

0x8470,	// (0x00025e86) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x8470,	// (0x00025e86) list_single_graphic_hl_pane_g2_cp2

0x847c,	// (0x00025e92) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x847c,	// (0x00025e92) list_single_graphic_hl_pane_g3_cp2

0x5af0,	// (0x00023506) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5af0,	// (0x00023506) list_single_graphic_hl_pane_g4_cp2

0x8295,	// (0x00025cab) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x8295,	// (0x00025cab) list_single_graphic_hl_pane_g5_cp2

0xa649,	// (0x0002805f) control_pane_g4_ParamLimits

0xa649,	// (0x0002805f) control_pane_g4

0x545d,	// (0x00022e73) bg_popup_sub_pane_cp10_ParamLimits

0x7dbe,	// (0x000257d4) list_choice_list_pane_ParamLimits

0x7dcd,	// (0x000257e3) scroll_pane_cp23

0x4e70,	// (0x00022886) bg_popup_preview_window_pane_cp02_ParamLimits

0x82d1,	// (0x00025ce7) list_preview_fixed_pane_ParamLimits

0x82e7,	// (0x00025cfd) list_preview_fixed_pane_cp_ParamLimits

0x82e7,	// (0x00025cfd) list_preview_fixed_pane_cp

0x82f3,	// (0x00025d09) popup_preview_fixed_window_g1_ParamLimits

0x82f3,	// (0x00025d09) popup_preview_fixed_window_g1

0x82ff,	// (0x00025d15) popup_preview_fixed_window_g2_ParamLimits

0x82ff,	// (0x00025d15) popup_preview_fixed_window_g2

0x0002,

0xfb77,	// (0x0002d58d) popup_preview_fixed_window_g_ParamLimits

0xfb77,	// (0x0002d58d) popup_preview_fixed_window_g

0x9fa1,	// (0x000279b7) aid_navi_side_left_pane_ParamLimits

0x9fb1,	// (0x000279c7) aid_navi_side_right_pane_ParamLimits

0x9fc0,	// (0x000279d6) navi_icon_pane_stacon_ParamLimits

0x9fd0,	// (0x000279e6) navi_navi_pane_stacon_ParamLimits

0x9fc0,	// (0x000279d6) navi_text_pane_stacon_ParamLimits

0x993b,	// (0x00027351) main_text_info_pane

0x849e,	// (0x00025eb4) listscroll_text_info_pane

0x84a6,	// (0x00025ebc) list_text_info_pane_ParamLimits

0x84a6,	// (0x00025ebc) list_text_info_pane

0x84b5,	// (0x00025ecb) scroll_pane_cp24_ParamLimits

0x84b5,	// (0x00025ecb) scroll_pane_cp24

0xbe33,	// (0x00029849) list_text_info_pane_t1_ParamLimits

0xbe33,	// (0x00029849) list_text_info_pane_t1

0xa7da,	// (0x000281f0) popup_fast_swap2_window_ParamLimits

0xa7da,	// (0x000281f0) popup_fast_swap2_window

0x84d3,	// (0x00025ee9) aid_size_cell_fast2

0x4c4d,	// (0x00022663) bg_popup_window_pane_cp17

0x63db,	// (0x00023df1) heading_pane_cp2

0x5086,	// (0x00022a9c) listscroll_fast2_pane

0x84dd,	// (0x00025ef3) grid_fast2_pane

0x84e5,	// (0x00025efb) listscroll_fast2_pane_g1

0x84ed,	// (0x00025f03) listscroll_fast2_pane_g2

0x0001,

0xfbfa,	// (0x0002d610) listscroll_fast2_pane_g

0x5426,	// (0x00022e3c) scroll_pane_cp26

0x84f5,	// (0x00025f0b) cell_fast2_pane_ParamLimits

0x84f5,	// (0x00025f0b) cell_fast2_pane

0x850b,	// (0x00025f21) cell_fast2_pane_g1

0x8514,	// (0x00025f2a) cell_fast2_pane_g2

0x851d,	// (0x00025f33) cell_fast2_pane_g3

0x0002,

0xfbff,	// (0x0002d615) cell_fast2_pane_g

0x50e8,	// (0x00022afe) grid_highlight_pane_cp9

0xa7a6,	// (0x000281bc) main_eswt_pane_ParamLimits

0xa7a6,	// (0x000281bc) main_eswt_pane

0x84ca,	// (0x00025ee0) list_single_text_info_pane

0x8525,	// (0x00025f3b) eswt_ctrl_button_pane

0x8525,	// (0x00025f3b) eswt_ctrl_canvas_pane

0x852d,	// (0x00025f43) eswt_ctrl_combo_pane

0x8525,	// (0x00025f3b) eswt_ctrl_default_pane

0x8525,	// (0x00025f3b) eswt_ctrl_label_pane

0x8535,	// (0x00025f4b) eswt_ctrl_wait_pane

0x853d,	// (0x00025f53) eswt_shell_pane

0x4c4d,	// (0x00022663) listscroll_eswt_app_pane

0x8559,	// (0x00025f6f) popup_eswt_tasktip_window_ParamLimits

0x8559,	// (0x00025f6f) popup_eswt_tasktip_window

0x60b1,	// (0x00023ac7) bg_popup_window_pane_cp18

0x856a,	// (0x00025f80) eswt_control_pane_g1_ParamLimits

0x856a,	// (0x00025f80) eswt_control_pane_g1

0x8577,	// (0x00025f8d) eswt_control_pane_g2_ParamLimits

0x8577,	// (0x00025f8d) eswt_control_pane_g2

0x8584,	// (0x00025f9a) eswt_control_pane_g3_ParamLimits

0x8584,	// (0x00025f9a) eswt_control_pane_g3

0x8591,	// (0x00025fa7) eswt_control_pane_g4_ParamLimits

0x8591,	// (0x00025fa7) eswt_control_pane_g4

0x0003,

0xfc06,	// (0x0002d61c) eswt_control_pane_g_ParamLimits

0xfc06,	// (0x0002d61c) eswt_control_pane_g

0x52d7,	// (0x00022ced) bg_button_pane_ParamLimits

0x52d7,	// (0x00022ced) bg_button_pane

0x50fd,	// (0x00022b13) common_borders_pane_copy2_ParamLimits

0x50fd,	// (0x00022b13) common_borders_pane_copy2

0x859e,	// (0x00025fb4) control_button_pane_g1_ParamLimits

0x859e,	// (0x00025fb4) control_button_pane_g1

0x85aa,	// (0x00025fc0) control_button_pane_g2_ParamLimits

0x85aa,	// (0x00025fc0) control_button_pane_g2

0x85b6,	// (0x00025fcc) control_button_pane_g3_ParamLimits

0x85b6,	// (0x00025fcc) control_button_pane_g3

0x0002,

0xfc0f,	// (0x0002d625) control_button_pane_g_ParamLimits

0xfc0f,	// (0x0002d625) control_button_pane_g

0x85ca,	// (0x00025fe0) control_button_pane_t1

0x85d8,	// (0x00025fee) control_button_pane_t2

0x0001,

0xfc16,	// (0x0002d62c) control_button_pane_t

0x6007,	// (0x00023a1d) bg_button_pane_g1

0x600f,	// (0x00023a25) bg_button_pane_g2

0x6017,	// (0x00023a2d) bg_button_pane_g3

0x601f,	// (0x00023a35) bg_button_pane_g4

0x6027,	// (0x00023a3d) bg_button_pane_g5

0x602f,	// (0x00023a45) bg_button_pane_g6

0x6037,	// (0x00023a4d) bg_button_pane_g7

0x603f,	// (0x00023a55) bg_button_pane_g8

0x6047,	// (0x00023a5d) bg_button_pane_g9

0x0008,

0xf85c,	// (0x0002d272) bg_button_pane_g

0x7d79,	// (0x0002578f) common_borders_pane_ParamLimits

0x7d79,	// (0x0002578f) common_borders_pane

0x856a,	// (0x00025f80) eswt_control_pane_g1_copy1_ParamLimits

0x856a,	// (0x00025f80) eswt_control_pane_g1_copy1

0x8577,	// (0x00025f8d) eswt_control_pane_g2_copy1_ParamLimits

0x8577,	// (0x00025f8d) eswt_control_pane_g2_copy1

0x8584,	// (0x00025f9a) eswt_control_pane_g3_copy1_ParamLimits

0x8584,	// (0x00025f9a) eswt_control_pane_g3_copy1

0x8591,	// (0x00025fa7) eswt_control_pane_g4_copy1_ParamLimits

0x8591,	// (0x00025fa7) eswt_control_pane_g4_copy1

0x7db4,	// (0x000257ca) bg_eswt_ctrl_canvas_pane_g1

0x7d79,	// (0x0002578f) common_borders_pane_cp2_ParamLimits

0x7d79,	// (0x0002578f) common_borders_pane_cp2

0x7d79,	// (0x0002578f) common_borders_pane_cp3_ParamLimits

0x7d79,	// (0x0002578f) common_borders_pane_cp3

0x85e6,	// (0x00025ffc) separator_horizontal_pane

0x5678,	// (0x0002308e) separator_vertical_pane

0x856a,	// (0x00025f80) eswt_control_pane_g1_copy2_ParamLimits

0x856a,	// (0x00025f80) eswt_control_pane_g1_copy2

0x8577,	// (0x00025f8d) eswt_control_pane_g2_copy2_ParamLimits

0x8577,	// (0x00025f8d) eswt_control_pane_g2_copy2

0x8584,	// (0x00025f9a) eswt_control_pane_g3_copy2_ParamLimits

0x8584,	// (0x00025f9a) eswt_control_pane_g3_copy2

0x8591,	// (0x00025fa7) eswt_control_pane_g4_copy2_ParamLimits

0x8591,	// (0x00025fa7) eswt_control_pane_g4_copy2

0x4c4d,	// (0x00022663) common_borders_pane_cp4

0x85ee,	// (0x00026004) separator_horizontal_pane_g1

0x85f7,	// (0x0002600d) separator_horizontal_pane_g2

0x8600,	// (0x00026016) separator_horizontal_pane_g3

0x0002,

0xfc1b,	// (0x0002d631) separator_horizontal_pane_g

0x856a,	// (0x00025f80) eswt_control_pane_g1_copy3_ParamLimits

0x856a,	// (0x00025f80) eswt_control_pane_g1_copy3

0x8577,	// (0x00025f8d) eswt_control_pane_g2_copy3_ParamLimits

0x8577,	// (0x00025f8d) eswt_control_pane_g2_copy3

0x8584,	// (0x00025f9a) eswt_control_pane_g3_copy3_ParamLimits

0x8584,	// (0x00025f9a) eswt_control_pane_g3_copy3

0x8591,	// (0x00025fa7) eswt_control_pane_g4_copy3_ParamLimits

0x8591,	// (0x00025fa7) eswt_control_pane_g4_copy3

0x4c4d,	// (0x00022663) common_borders_pane_cp5

0x8609,	// (0x0002601f) separator_vertical_pane_g1

0x8612,	// (0x00026028) separator_vertical_pane_g2

0x861b,	// (0x00026031) separator_vertical_pane_g3

0x0002,

0xfc22,	// (0x0002d638) separator_vertical_pane_g

0x856a,	// (0x00025f80) eswt_control_pane_g1_copy4_ParamLimits

0x856a,	// (0x00025f80) eswt_control_pane_g1_copy4

0x8577,	// (0x00025f8d) eswt_control_pane_g2_copy4_ParamLimits

0x8577,	// (0x00025f8d) eswt_control_pane_g2_copy4

0x8584,	// (0x00025f9a) eswt_control_pane_g3_copy4_ParamLimits

0x8584,	// (0x00025f9a) eswt_control_pane_g3_copy4

0x8591,	// (0x00025fa7) eswt_control_pane_g4_copy4_ParamLimits

0x8591,	// (0x00025fa7) eswt_control_pane_g4_copy4

0xbe50,	// (0x00029866) eswt_ctrl_combo_button_pane

0xbe58,	// (0x0002986e) eswt_ctrl_input_pane

0xbe60,	// (0x00029876) popup_choice_list_window_cp70

0xbe68,	// (0x0002987e) eswt_ctrl_input_pane_t1

0x4c4d,	// (0x00022663) input_focus_pane_cp70

0x7d79,	// (0x0002578f) bg_button_pane_cp70_ParamLimits

0x7d79,	// (0x0002578f) bg_button_pane_cp70

0xbe76,	// (0x0002988c) eswt_ctrl_combo_button_pane_g1

0x8624,	// (0x0002603a) wait_bar_pane_cp70

0x60b1,	// (0x00023ac7) bg_popup_window_pane_cp70_ParamLimits

0x60b1,	// (0x00023ac7) bg_popup_window_pane_cp70

0x862c,	// (0x00026042) popup_eswt_tasktip_window_t1

0x8642,	// (0x00026058) wait_bar_pane_cp71_ParamLimits

0x8642,	// (0x00026058) wait_bar_pane_cp71

0x864e,	// (0x00026064) grid_eswt_app_pane

0x5681,	// (0x00023097) scroll_pane_cp70

0xbe7e,	// (0x00029894) cell_eswt_app_pane_ParamLimits

0xbe7e,	// (0x00029894) cell_eswt_app_pane

0xbea6,	// (0x000298bc) cell_eswt_app_pane_g1_ParamLimits

0xbea6,	// (0x000298bc) cell_eswt_app_pane_g1

0xbed5,	// (0x000298eb) cell_eswt_app_pane_g2_ParamLimits

0xbed5,	// (0x000298eb) cell_eswt_app_pane_g2

0x0001,

0xfc29,	// (0x0002d63f) cell_eswt_app_pane_g_ParamLimits

0xfc29,	// (0x0002d63f) cell_eswt_app_pane_g

0xbefe,	// (0x00029914) cell_eswt_app_pane_t1_ParamLimits

0xbefe,	// (0x00029914) cell_eswt_app_pane_t1

0x8657,	// (0x0002606d) grid_highlight_pane_cp70_ParamLimits

0x8657,	// (0x0002606d) grid_highlight_pane_cp70

0x52f1,	// (0x00022d07) set_content_pane_g1

0x5dfa,	// (0x00023810) status_small_volume_pane

0xbf30,	// (0x00029946) status_small_volume_pane_g1

0xbf38,	// (0x0002994e) volume_small2_pane

0xbf41,	// (0x00029957) volume_small2_pane_g1

0xbf4a,	// (0x00029960) volume_small2_pane_g2

0xbf53,	// (0x00029969) volume_small2_pane_g3

0xbf5c,	// (0x00029972) volume_small2_pane_g4

0xbf65,	// (0x0002997b) volume_small2_pane_g5

0xbf6e,	// (0x00029984) volume_small2_pane_g6

0xbf77,	// (0x0002998d) volume_small2_pane_g7

0xbf80,	// (0x00029996) volume_small2_pane_g8

0xbf89,	// (0x0002999f) volume_small2_pane_g9

0xbf92,	// (0x000299a8) volume_small2_pane_g10

0x0009,

0xfc2e,	// (0x0002d644) volume_small2_pane_g

0x80e7,	// (0x00025afd) fep_vkb_top_text_pane_g1_ParamLimits

0xbbed,	// (0x00029603) fep_vkb_top_text_pane_t1_ParamLimits

0x830b,	// (0x00025d21) popup_preview_fixed_window_g3_ParamLimits

0x830b,	// (0x00025d21) popup_preview_fixed_window_g3

0xab9c,	// (0x000285b2) popup_toolbar_trans_pane

0xb421,	// (0x00028e37) aid_height_set_list_ParamLimits

0x712a,	// (0x00024b40) aid_size_parent_ParamLimits

0x545d,	// (0x00022e73) list_highlight_pane_cp2_ParamLimits

0x52f1,	// (0x00022d07) set_content_pane_g1_ParamLimits

0xb598,	// (0x00028fae) list_single_image_pane_ParamLimits

0xb598,	// (0x00028fae) list_single_image_pane

0xbf9b,	// (0x000299b1) aid_size_cell_image_ParamLimits

0xbf9b,	// (0x000299b1) aid_size_cell_image

0xbfa8,	// (0x000299be) grid_single_image_pane_ParamLimits

0xbfa8,	// (0x000299be) grid_single_image_pane

0x52f1,	// (0x00022d07) list_single_image_pane_g1_ParamLimits

0x52f1,	// (0x00022d07) list_single_image_pane_g1

0x52fd,	// (0x00022d13) list_single_image_pane_g2_ParamLimits

0x52fd,	// (0x00022d13) list_single_image_pane_g2

0x0001,

0xfc43,	// (0x0002d659) list_single_image_pane_g_ParamLimits

0xfc43,	// (0x0002d659) list_single_image_pane_g

0x7c29,	// (0x0002563f) list_single_image_pane_t1_ParamLimits

0x7c29,	// (0x0002563f) list_single_image_pane_t1

0xbfb4,	// (0x000299ca) cell_image_list_pane_ParamLimits

0xbfb4,	// (0x000299ca) cell_image_list_pane

0xbfc7,	// (0x000299dd) cell_image_list_pane_g1

0xbfd0,	// (0x000299e6) cell_image_list_pane_g2

0x0001,

0xfc48,	// (0x0002d65e) cell_image_list_pane_g

0x8663,	// (0x00026079) aid_size_cell_tb_trans_pane

0x52d7,	// (0x00022ced) bg_tb_trans_pane

0x8675,	// (0x0002608b) grid_tb_trans_pane

0x6007,	// (0x00023a1d) bg_tb_trans_pane_g1

0x600f,	// (0x00023a25) bg_tb_trans_pane_g2

0x6017,	// (0x00023a2d) bg_tb_trans_pane_g3

0x601f,	// (0x00023a35) bg_tb_trans_pane_g4

0x6027,	// (0x00023a3d) bg_tb_trans_pane_g5

0x603f,	// (0x00023a55) bg_tb_trans_pane_g6

0x6047,	// (0x00023a5d) bg_tb_trans_pane_g7

0x602f,	// (0x00023a45) bg_tb_trans_pane_g8

0x6037,	// (0x00023a4d) bg_tb_trans_pane_g9

0x0008,

0xfc4d,	// (0x0002d663) bg_tb_trans_pane_g

0x8689,	// (0x0002609f) cell_toolbar_trans_pane_ParamLimits

0x8689,	// (0x0002609f) cell_toolbar_trans_pane

0x7db4,	// (0x000257ca) cell_toolbar_trans_pane_g1

0xb93f,	// (0x00029355) list_form2_midp_pane_t1

0xb94d,	// (0x00029363) list_form2_midp_pane_t2

0x0001,

0xfaea,	// (0x0002d500) list_form2_midp_pane_t

0x7a72,	// (0x00025488) scroll_pane_cp51_ParamLimits

0x7be8,	// (0x000255fe) form2_midp_wait_pane_g1

0x7bf1,	// (0x00025607) form2_midp_wait_pane_g2

0x7bfa,	// (0x00025610) form2_midp_wait_pane_g3

0x0002,

0xfaff,	// (0x0002d515) form2_midp_wait_pane_g

0x4d3d,	// (0x00022753) list_highlight_pane_cp21_ParamLimits

0x7c4e,	// (0x00025664) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7c5d,	// (0x00025673) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xd691,	// (0x0002b0a7) list_single_2graphic_im_pane_ParamLimits

0xd691,	// (0x0002b0a7) list_single_2graphic_im_pane

0xbfd9,	// (0x000299ef) list_single_2graphic_im_pane_g1_ParamLimits

0xbfd9,	// (0x000299ef) list_single_2graphic_im_pane_g1

0xbfea,	// (0x00029a00) list_single_2graphic_im_pane_g2_ParamLimits

0xbfea,	// (0x00029a00) list_single_2graphic_im_pane_g2

0xbff6,	// (0x00029a0c) list_single_2graphic_im_pane_g3_ParamLimits

0xbff6,	// (0x00029a0c) list_single_2graphic_im_pane_g3

0x0003,

0xfc60,	// (0x0002d676) list_single_2graphic_im_pane_g_ParamLimits

0xfc60,	// (0x0002d676) list_single_2graphic_im_pane_g

0xc00a,	// (0x00029a20) list_single_2graphic_im_pane_t1_ParamLimits

0xc00a,	// (0x00029a20) list_single_2graphic_im_pane_t1

0x8317,	// (0x00025d2d) list_single_graphic_2heading_pane_fp_ParamLimits

0x8317,	// (0x00025d2d) list_single_graphic_2heading_pane_fp

0xda31,	// (0x0002b447) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xda31,	// (0x0002b447) list_single_graphic_2heading_pane_fp_g1

0x832b,	// (0x00025d41) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x832b,	// (0x00025d41) list_single_graphic_2heading_pane_fp_g2

0xd171,	// (0x0002ab87) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd171,	// (0x0002ab87) list_single_graphic_2heading_pane_fp_g3

0xda06,	// (0x0002b41c) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xda06,	// (0x0002b41c) list_single_graphic_2heading_pane_fp_g4

0x8337,	// (0x00025d4d) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x8337,	// (0x00025d4d) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb87,	// (0x0002d59d) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb87,	// (0x0002d59d) list_single_graphic_2heading_pane_fp_g

0xdbfe,	// (0x0002b614) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xdbfe,	// (0x0002b614) list_single_graphic_2heading_pane_fp_t1

0xda69,	// (0x0002b47f) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xda69,	// (0x0002b47f) list_single_graphic_2heading_pane_fp_t2

0xdc14,	// (0x0002b62a) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xdc14,	// (0x0002b62a) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc69,	// (0x0002d67f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc69,	// (0x0002d67f) list_single_graphic_2heading_pane_fp_t

0x7e3d,	// (0x00025853) fep_hwr_write_pane_g5_ParamLimits

0x7e3d,	// (0x00025853) fep_hwr_write_pane_g5

0x7e49,	// (0x0002585f) fep_hwr_write_pane_g6_ParamLimits

0x7e49,	// (0x0002585f) fep_hwr_write_pane_g6

0x853d,	// (0x00025f53) eswt_shell_pane_ParamLimits

0x60b1,	// (0x00023ac7) bg_popup_window_pane_cp18_ParamLimits

0x70ce,	// (0x00024ae4) heading_pane_cp70

0x862c,	// (0x00026042) popup_eswt_tasktip_window_t1_ParamLimits

0xac76,	// (0x0002868c) aid_touch_tab_arrow_left

0xac82,	// (0x00028698) aid_touch_tab_arrow_right

0x9b62,	// (0x00027578) title_pane_g3_ParamLimits

0x9b62,	// (0x00027578) title_pane_g3

0x52a7,	// (0x00022cbd) set_value_pane_g1

0xab9c,	// (0x000285b2) popup_toolbar_trans_pane_ParamLimits

0x8663,	// (0x00026079) aid_size_cell_tb_trans_pane_ParamLimits

0x52d7,	// (0x00022ced) bg_tb_trans_pane_ParamLimits

0x8675,	// (0x0002608b) grid_tb_trans_pane_ParamLimits

0x4e70,	// (0x00022886) cont_note_pane_ParamLimits

0x4e70,	// (0x00022886) cont_note_pane

0x50fd,	// (0x00022b13) cont_snote2_single_text_pane_ParamLimits

0x50fd,	// (0x00022b13) cont_snote2_single_text_pane

0x50fd,	// (0x00022b13) cont_snote2_single_graphic_pane_ParamLimits

0x50fd,	// (0x00022b13) cont_snote2_single_graphic_pane

0x65f1,	// (0x00024007) cont_note_wait_pane_ParamLimits

0x65f1,	// (0x00024007) cont_note_wait_pane

0x65f1,	// (0x00024007) cont_note_image_pane_ParamLimits

0x65f1,	// (0x00024007) cont_note_image_pane

0x86bb,	// (0x000260d1) popup_note2_window_g1_ParamLimits

0x86bb,	// (0x000260d1) popup_note2_window_g1

0x86ec,	// (0x00026102) popup_note2_window_t1_ParamLimits

0x86ec,	// (0x00026102) popup_note2_window_t1

0x8731,	// (0x00026147) popup_note2_window_t2_ParamLimits

0x8731,	// (0x00026147) popup_note2_window_t2

0x8776,	// (0x0002618c) popup_note2_window_t3_ParamLimits

0x8776,	// (0x0002618c) popup_note2_window_t3

0x87bb,	// (0x000261d1) popup_note2_window_t4_ParamLimits

0x87bb,	// (0x000261d1) popup_note2_window_t4

0x4ef4,	// (0x0002290a) popup_note2_window_t5_ParamLimits

0x4ef4,	// (0x0002290a) popup_note2_window_t5

0x0004,

0xfc75,	// (0x0002d68b) popup_note2_window_t_ParamLimits

0xfc75,	// (0x0002d68b) popup_note2_window_t

0x87ea,	// (0x00026200) popup_note2_image_window_g1_ParamLimits

0x87ea,	// (0x00026200) popup_note2_image_window_g1

0x87f6,	// (0x0002620c) popup_note2_image_window_g2_ParamLimits

0x87f6,	// (0x0002620c) popup_note2_image_window_g2

0x0001,

0xfc80,	// (0x0002d696) popup_note2_image_window_g_ParamLimits

0xfc80,	// (0x0002d696) popup_note2_image_window_g

0x8808,	// (0x0002621e) popup_note2_image_window_t1_ParamLimits

0x8808,	// (0x0002621e) popup_note2_image_window_t1

0x8820,	// (0x00026236) popup_note2_image_window_t2_ParamLimits

0x8820,	// (0x00026236) popup_note2_image_window_t2

0x8838,	// (0x0002624e) popup_note2_image_window_t3_ParamLimits

0x8838,	// (0x0002624e) popup_note2_image_window_t3

0x0002,

0xfc85,	// (0x0002d69b) popup_note2_image_window_t_ParamLimits

0xfc85,	// (0x0002d69b) popup_note2_image_window_t

0x65ff,	// (0x00024015) popup_note2_wait_window_g1_ParamLimits

0x65ff,	// (0x00024015) popup_note2_wait_window_g1

0x660b,	// (0x00024021) popup_note2_wait_window_g2_ParamLimits

0x660b,	// (0x00024021) popup_note2_wait_window_g2

0x6617,	// (0x0002402d) popup_note2_wait_window_g3_ParamLimits

0x6617,	// (0x0002402d) popup_note2_wait_window_g3

0x0002,

0xf83e,	// (0x0002d254) popup_note2_wait_window_g_ParamLimits

0xf83e,	// (0x0002d254) popup_note2_wait_window_g

0x8854,	// (0x0002626a) popup_note2_wait_window_t1_ParamLimits

0x8854,	// (0x0002626a) popup_note2_wait_window_t1

0x8872,	// (0x00026288) popup_note2_wait_window_t2_ParamLimits

0x8872,	// (0x00026288) popup_note2_wait_window_t2

0x8890,	// (0x000262a6) popup_note2_wait_window_t3_ParamLimits

0x8890,	// (0x000262a6) popup_note2_wait_window_t3

0x88a2,	// (0x000262b8) popup_note2_wait_window_t4_ParamLimits

0x88a2,	// (0x000262b8) popup_note2_wait_window_t4

0x0003,

0xfc8c,	// (0x0002d6a2) popup_note2_wait_window_t_ParamLimits

0xfc8c,	// (0x0002d6a2) popup_note2_wait_window_t

0x88b4,	// (0x000262ca) wait_bar2_pane_ParamLimits

0x88b4,	// (0x000262ca) wait_bar2_pane

0x88cc,	// (0x000262e2) popup_snote2_single_text_window_g1_ParamLimits

0x88cc,	// (0x000262e2) popup_snote2_single_text_window_g1

0x88f4,	// (0x0002630a) popup_snote2_single_text_window_t1_ParamLimits

0x88f4,	// (0x0002630a) popup_snote2_single_text_window_t1

0x8940,	// (0x00026356) popup_snote2_single_text_window_t2_ParamLimits

0x8940,	// (0x00026356) popup_snote2_single_text_window_t2

0x898c,	// (0x000263a2) popup_snote2_single_text_window_t3_ParamLimits

0x898c,	// (0x000263a2) popup_snote2_single_text_window_t3

0x89cd,	// (0x000263e3) popup_snote2_single_text_window_t4_ParamLimits

0x89cd,	// (0x000263e3) popup_snote2_single_text_window_t4

0x8a03,	// (0x00026419) popup_snote2_single_text_window_t5_ParamLimits

0x8a03,	// (0x00026419) popup_snote2_single_text_window_t5

0x0004,

0xfc95,	// (0x0002d6ab) popup_snote2_single_text_window_t_ParamLimits

0xfc95,	// (0x0002d6ab) popup_snote2_single_text_window_t

0x8a2e,	// (0x00026444) popup_snote2_single_graphic_window_g1_ParamLimits

0x8a2e,	// (0x00026444) popup_snote2_single_graphic_window_g1

0x8a56,	// (0x0002646c) popup_snote2_single_graphic_window_g2_ParamLimits

0x8a56,	// (0x0002646c) popup_snote2_single_graphic_window_g2

0x0001,

0xfca0,	// (0x0002d6b6) popup_snote2_single_graphic_window_g_ParamLimits

0xfca0,	// (0x0002d6b6) popup_snote2_single_graphic_window_g

0x8a7e,	// (0x00026494) popup_snote2_single_graphic_window_t1_ParamLimits

0x8a7e,	// (0x00026494) popup_snote2_single_graphic_window_t1

0x8aca,	// (0x000264e0) popup_snote2_single_graphic_window_t2_ParamLimits

0x8aca,	// (0x000264e0) popup_snote2_single_graphic_window_t2

0x898c,	// (0x000263a2) popup_snote2_single_graphic_window_t3_ParamLimits

0x898c,	// (0x000263a2) popup_snote2_single_graphic_window_t3

0x89cd,	// (0x000263e3) popup_snote2_single_graphic_window_t4_ParamLimits

0x89cd,	// (0x000263e3) popup_snote2_single_graphic_window_t4

0x8a03,	// (0x00026419) popup_snote2_single_graphic_window_t5_ParamLimits

0x8a03,	// (0x00026419) popup_snote2_single_graphic_window_t5

0x0004,

0xfca5,	// (0x0002d6bb) popup_snote2_single_graphic_window_t_ParamLimits

0xfca5,	// (0x0002d6bb) popup_snote2_single_graphic_window_t

0x7a0b,	// (0x00025421) clock_nsta_pane_cp2_t1

0x7a0b,	// (0x00025421) clock_nsta_pane_cp2_t2

0x0001,

0xfac0,	// (0x0002d4d6) clock_nsta_pane_cp2_t

0xd31d,	// (0x0002ad33) form_field_data_wide_pane_g1_ParamLimits

0x52f1,	// (0x00022d07) form_field_data_wide_pane_g2_ParamLimits

0x52f1,	// (0x00022d07) form_field_data_wide_pane_g2

0x52fd,	// (0x00022d13) form_field_data_wide_pane_g3_ParamLimits

0x52fd,	// (0x00022d13) form_field_data_wide_pane_g3

0x0002,

0xf671,	// (0x0002d087) form_field_data_wide_pane_g_ParamLimits

0xf671,	// (0x0002d087) form_field_data_wide_pane_g

0xb806,	// (0x0002921c) grid_touch_3_pane_ParamLimits

0xb806,	// (0x0002921c) grid_touch_3_pane

0xc03b,	// (0x00029a51) cell_touch_3_pane_ParamLimits

0xc03b,	// (0x00029a51) cell_touch_3_pane

0x7db4,	// (0x000257ca) cell_touch_3_pane_g1

0x7db4,	// (0x000257ca) cell_touch_3_pane_g2

0x0001,

0xfb45,	// (0x0002d55b) cell_touch_3_pane_g

0x4f4c,	// (0x00022962) cont_query_data_pane

0x4f54,	// (0x0002296a) cont_query_data_pane_cp1

0x8b16,	// (0x0002652c) button_value_adjust_pane_cp7

0x8b1e,	// (0x00026534) query_popup_pane_cp3

0x5829,	// (0x0002323f) bg_popup_sub_pane_cp22_ParamLimits

0xa246,	// (0x00027c5c) navi_navi_volume_pane_cp2

0xa25e,	// (0x00027c74) popup_side_volume_key_window_g2

0xa26a,	// (0x00027c80) popup_side_volume_key_window_g3

0x0002,

0xf707,	// (0x0002d11d) popup_side_volume_key_window_g

0xa284,	// (0x00027c9a) popup_side_volume_key_window_t2

0x0001,

0xf70e,	// (0x0002d124) popup_side_volume_key_window_t

0x5a73,	// (0x00023489) popup_side_volume_key_window_ParamLimits

0xcfb8,	// (0x0002a9ce) list_double_graphic_pane_g4_ParamLimits

0xcfb8,	// (0x0002a9ce) list_double_graphic_pane_g4

0xb56c,	// (0x00028f82) list_single_2heading_msg_pane_ParamLimits

0xb56c,	// (0x00028f82) list_single_2heading_msg_pane

0xdc32,	// (0x0002b648) list_single_2heading_msg_pane_g1_ParamLimits

0xdc32,	// (0x0002b648) list_single_2heading_msg_pane_g1

0xce19,	// (0x0002a82f) list_single_2heading_msg_pane_g2_ParamLimits

0xce19,	// (0x0002a82f) list_single_2heading_msg_pane_g2

0xdc3e,	// (0x0002b654) list_single_2heading_msg_pane_g3_ParamLimits

0xdc3e,	// (0x0002b654) list_single_2heading_msg_pane_g3

0xdc4a,	// (0x0002b660) list_single_2heading_msg_pane_g4_ParamLimits

0xdc4a,	// (0x0002b660) list_single_2heading_msg_pane_g4

0x0003,

0xfcb0,	// (0x0002d6c6) list_single_2heading_msg_pane_g_ParamLimits

0xfcb0,	// (0x0002d6c6) list_single_2heading_msg_pane_g

0xdc62,	// (0x0002b678) list_single_2heading_msg_pane_t1_ParamLimits

0xdc62,	// (0x0002b678) list_single_2heading_msg_pane_t1

0xdc8a,	// (0x0002b6a0) list_single_2heading_msg_pane_t2_ParamLimits

0xdc8a,	// (0x0002b6a0) list_single_2heading_msg_pane_t2

0xdcbe,	// (0x0002b6d4) list_single_2heading_msg_pane_t3_ParamLimits

0xdcbe,	// (0x0002b6d4) list_single_2heading_msg_pane_t3

0xdcf7,	// (0x0002b70d) list_single_2heading_msg_pane_t4_ParamLimits

0xdcf7,	// (0x0002b70d) list_single_2heading_msg_pane_t4

0x0003,

0xfcb9,	// (0x0002d6cf) list_single_2heading_msg_pane_t_ParamLimits

0xfcb9,	// (0x0002d6cf) list_single_2heading_msg_pane_t

0x4ce3,	// (0x000226f9) title_pane_g4_ParamLimits

0x4ce3,	// (0x000226f9) title_pane_g4

0x9f17,	// (0x0002792d) title_pane_stacon_g3_ParamLimits

0x9f17,	// (0x0002792d) title_pane_stacon_g3

0x86af,	// (0x000260c5) list_single_2graphic_im_pane_g4_ParamLimits

0x86af,	// (0x000260c5) list_single_2graphic_im_pane_g4

0x6ef8,	// (0x0002490e) popup_side_volume_key_window_cp

0x7387,	// (0x00024d9d) main_idle_act2_pane_t1

0xaf53,	// (0x00028969) toolbar_button_pane_g10

0x9e70,	// (0x00027886) popup_toolbar_window_cp1

0x79fc,	// (0x00025412) clock_nsta_pane_cp_t1

0x79fc,	// (0x00025412) clock_nsta_pane_cp_t2

0x0001,

0xfabb,	// (0x0002d4d1) clock_nsta_pane_cp_t

0xa246,	// (0x00027c5c) navi_navi_volume_pane_cp2_ParamLimits

0xa252,	// (0x00027c68) popup_side_volume_key_window_g1_ParamLimits

0xa25e,	// (0x00027c74) popup_side_volume_key_window_g2_ParamLimits

0xa26a,	// (0x00027c80) popup_side_volume_key_window_g3_ParamLimits

0xf707,	// (0x0002d11d) popup_side_volume_key_window_g_ParamLimits

0xb9ac,	// (0x000293c2) fep_hwr_aid_pane

0xba4d,	// (0x00029463) bg_fep_hwr_top_pane_g4_ParamLimits

0x7e1f,	// (0x00025835) fep_hwr_top_pane_g1_ParamLimits

0x7e0d,	// (0x00025823) fep_hwr_top_pane_g2_ParamLimits

0xba6d,	// (0x00029483) fep_hwr_top_pane_g3_ParamLimits

0xfb10,	// (0x0002d526) fep_hwr_top_pane_g_ParamLimits

0xba82,	// (0x00029498) fep_hwr_top_text_pane_ParamLimits

0x6d01,	// (0x00024717) aid_touch_tab_arrow_arrow_2

0x6cf8,	// (0x0002470e) aid_touch_tab_arrow_left_2

0xb9c0,	// (0x000293d6) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xb9f3,	// (0x00029409) fep_hwr_prediction_pane

0x7f52,	// (0x00025968) fep_vkb_prediction_pane

0xbbca,	// (0x000295e0) fep_vkb_side_pane_g3_ParamLimits

0xbbca,	// (0x000295e0) fep_vkb_side_pane_g3

0xbcd5,	// (0x000296eb) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xbd3f,	// (0x00029755) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xbd4c,	// (0x00029762) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbf,	// (0x0002d5d5) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xc07c,	// (0x00029a92) fep_hwr_prediction_pane_g1

0xc086,	// (0x00029a9c) fep_hwr_prediction_pane_g2

0xc08e,	// (0x00029aa4) fep_hwr_prediction_pane_g3

0xc096,	// (0x00029aac) fep_hwr_prediction_pane_g4

0x0003,

0xfcc2,	// (0x0002d6d8) fep_hwr_prediction_pane_g

0x8b2f,	// (0x00026545) fep_vkb_prediction_pane_g1

0x8b39,	// (0x0002654f) fep_vkb_prediction_pane_g2

0x8b41,	// (0x00026557) fep_vkb_prediction_pane_g3

0x8b49,	// (0x0002655f) fep_vkb_prediction_pane_g4

0x0003,

0xfccb,	// (0x0002d6e1) fep_vkb_prediction_pane_g

0xb3a9,	// (0x00028dbf) slider_set_pane_g3

0xb3bd,	// (0x00028dd3) slider_set_pane_g4

0xb3d5,	// (0x00028deb) slider_set_pane_g5

0xb3a9,	// (0x00028dbf) slider_set_pane_g6

0xb3eb,	// (0x00028e01) slider_set_pane_g7

0x71b8,	// (0x00024bce) slider_form_pane_g3

0x71c1,	// (0x00024bd7) slider_form_pane_g4

0x71c9,	// (0x00024bdf) slider_form_pane_g5

0x71b8,	// (0x00024bce) slider_form_pane_g6

0xb551,	// (0x00028f67) slider_form_pane_g7

0x75d0,	// (0x00024fe6) slider_set_pane_vc_g3

0x75d9,	// (0x00024fef) slider_set_pane_vc_g4

0x75e2,	// (0x00024ff8) slider_set_pane_vc_g5

0x75d0,	// (0x00024fe6) slider_set_pane_vc_g6

0x75eb,	// (0x00025001) slider_set_pane_vc_g7

0x75d0,	// (0x00024fe6) slider_form_pane_vc_g1

0x75d9,	// (0x00024fef) slider_form_pane_vc_g2

0x75e2,	// (0x00024ff8) slider_form_pane_vc_g3

0x75d0,	// (0x00024fe6) slider_form_pane_vc_g4

0x775f,	// (0x00025175) slider_form_pane_vc_g5

0x0004,

0xfa8d,	// (0x0002d4a3) slider_form_pane_vc_g

0x993b,	// (0x00027351) main_idle_act3_pane

0x8b51,	// (0x00026567) ai3_links_pane

0xc09e,	// (0x00029ab4) popup_ai3_data_window_ParamLimits

0xc09e,	// (0x00029ab4) popup_ai3_data_window

0x4c4d,	// (0x00022663) grid_ai3_links_pane

0xc0b6,	// (0x00029acc) cell_ai3_links_pane_ParamLimits

0xc0b6,	// (0x00029acc) cell_ai3_links_pane

0x8b5a,	// (0x00026570) bg_popup_sub_pane_cp11

0x8b67,	// (0x0002657d) cell_ai3_links_pane_g1

0x4c4d,	// (0x00022663) bg_popup_sub_pane_cp12

0x8b8c,	// (0x000265a2) heading_ai3_data_pane

0x8b94,	// (0x000265aa) list_ai3_gene_pane

0x8ba0,	// (0x000265b6) popup_ai3_data_window_g1

0x8ba8,	// (0x000265be) heading_ai3_data_pane_g1

0x8bb0,	// (0x000265c6) heading_ai3_data_pane_t1

0x8bbe,	// (0x000265d4) list_double_ai3_gene_pane_ParamLimits

0x8bbe,	// (0x000265d4) list_double_ai3_gene_pane

0x8bcb,	// (0x000265e1) list_single_ai3_gene_pane_ParamLimits

0x8bcb,	// (0x000265e1) list_single_ai3_gene_pane

0x7d79,	// (0x0002578f) list_highlight_pane_cp7_ParamLimits

0x7d79,	// (0x0002578f) list_highlight_pane_cp7

0x8bd8,	// (0x000265ee) list_single_a13_gene_pane_t1_ParamLimits

0x8bd8,	// (0x000265ee) list_single_a13_gene_pane_t1

0x8bef,	// (0x00026605) list_single_ai3_gene_pane_g1

0x8bf8,	// (0x0002660e) list_single_ai3_gene_pane_g2

0x0001,

0xfcd4,	// (0x0002d6ea) list_single_ai3_gene_pane_g

0x8c00,	// (0x00026616) list_double_ai3_gene_pane_g1_ParamLimits

0x8c00,	// (0x00026616) list_double_ai3_gene_pane_g1

0x8c0c,	// (0x00026622) list_double_ai3_gene_pane_t1_ParamLimits

0x8c0c,	// (0x00026622) list_double_ai3_gene_pane_t1

0x8c28,	// (0x0002663e) list_double_ai3_gene_pane_t2_ParamLimits

0x8c28,	// (0x0002663e) list_double_ai3_gene_pane_t2

0x8c3d,	// (0x00026653) list_double_ai3_gene_pane_t3_ParamLimits

0x8c3d,	// (0x00026653) list_double_ai3_gene_pane_t3

0x0002,

0xfcd9,	// (0x0002d6ef) list_double_ai3_gene_pane_t_ParamLimits

0xfcd9,	// (0x0002d6ef) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xdc2a,	// (0x0002b640) aid_size_min_col_2

0xc068,	// (0x00029a7e) aid_size_min_msg_ParamLimits

0xc068,	// (0x00029a7e) aid_size_min_msg

0xbbde,	// (0x000295f4) fep_vkb_top_text_pane_g2_ParamLimits

0xbbde,	// (0x000295f4) fep_vkb_top_text_pane_g2

0x0001,

0xfb40,	// (0x0002d556) fep_vkb_top_text_pane_g_ParamLimits

0xfb40,	// (0x0002d556) fep_vkb_top_text_pane_g

0x993b,	// (0x00027351) main_hc_apps_shell_pane

0x8c5a,	// (0x00026670) grid_hc_apps_pane_ParamLimits

0x8c5a,	// (0x00026670) grid_hc_apps_pane

0x8c69,	// (0x0002667f) list_hc_apps_pane

0x8c71,	// (0x00026687) scroll_pane_cp37_ParamLimits

0x8c71,	// (0x00026687) scroll_pane_cp37

0xc0ca,	// (0x00029ae0) cell_hc_apps_pane_ParamLimits

0xc0ca,	// (0x00029ae0) cell_hc_apps_pane

0xc158,	// (0x00029b6e) cell_hc_apps_pane_g1_ParamLimits

0xc158,	// (0x00029b6e) cell_hc_apps_pane_g1

0x8c7d,	// (0x00026693) cell_hc_apps_pane_g2_ParamLimits

0x8c7d,	// (0x00026693) cell_hc_apps_pane_g2

0x8c99,	// (0x000266af) cell_hc_apps_pane_g3_ParamLimits

0x8c99,	// (0x000266af) cell_hc_apps_pane_g3

0x0002,

0xfce0,	// (0x0002d6f6) cell_hc_apps_pane_g_ParamLimits

0xfce0,	// (0x0002d6f6) cell_hc_apps_pane_g

0xc185,	// (0x00029b9b) cell_hc_apps_pane_t1_ParamLimits

0xc185,	// (0x00029b9b) cell_hc_apps_pane_t1

0x4e70,	// (0x00022886) grid_highlight_pane_cp10_ParamLimits

0x4e70,	// (0x00022886) grid_highlight_pane_cp10

0xc1c3,	// (0x00029bd9) list_single_hc_apps_pane_ParamLimits

0xc1c3,	// (0x00029bd9) list_single_hc_apps_pane

0xc1f3,	// (0x00029c09) list_single_hc_apps_pane_g1

0xdd1c,	// (0x0002b732) list_single_hc_apps_pane_g2

0x0001,

0xfce7,	// (0x0002d6fd) list_single_hc_apps_pane_g

0xdd35,	// (0x0002b74b) list_single_hc_apps_pane_g2_copy1

0xdd51,	// (0x0002b767) list_single_hc_apps_pane_t1

0x4d3d,	// (0x00022753) bg_set_opt_pane_cp_ParamLimits

0x9c0a,	// (0x00027620) setting_slider_pane_t1_ParamLimits

0x9c20,	// (0x00027636) setting_slider_pane_t2_ParamLimits

0x9c39,	// (0x0002764f) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0002cf74) setting_slider_pane_t_ParamLimits

0x9c50,	// (0x00027666) slider_set_pane_ParamLimits

0xa65d,	// (0x00028073) control_pane_g5_ParamLimits

0xa65d,	// (0x00028073) control_pane_g5

0x7115,	// (0x00024b2b) slider_set_pane_g1_ParamLimits

0xb39d,	// (0x00028db3) slider_set_pane_g2_ParamLimits

0xb3a9,	// (0x00028dbf) slider_set_pane_g3_ParamLimits

0xb3bd,	// (0x00028dd3) slider_set_pane_g4_ParamLimits

0xb3d5,	// (0x00028deb) slider_set_pane_g5_ParamLimits

0xb3a9,	// (0x00028dbf) slider_set_pane_g6_ParamLimits

0xb3eb,	// (0x00028e01) slider_set_pane_g7_ParamLimits

0xf95a,	// (0x0002d370) slider_set_pane_g_ParamLimits

0x4d3d,	// (0x00022753) navi_icon_text_pane_ParamLimits

0xac50,	// (0x00028666) aid_fill_nsta_2_ParamLimits

0xac76,	// (0x0002868c) aid_touch_tab_arrow_left_ParamLimits

0xac82,	// (0x00028698) aid_touch_tab_arrow_right_ParamLimits

0xacec,	// (0x00028702) clock_nsta_pane_ParamLimits

0x6cda,	// (0x000246f0) navi_icon_pane_g1_ParamLimits

0x6ce6,	// (0x000246fc) navi_text_pane_t1_ParamLimits

0x7a4c,	// (0x00025462) navi_icon_text_pane_g1_ParamLimits

0x7a58,	// (0x0002546e) navi_icon_text_pane_t1_ParamLimits

0xc1f3,	// (0x00029c09) list_single_hc_apps_pane_g1_ParamLimits

0xdd1c,	// (0x0002b732) list_single_hc_apps_pane_g2_ParamLimits

0xfce7,	// (0x0002d6fd) list_single_hc_apps_pane_g_ParamLimits

0xdd35,	// (0x0002b74b) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xdd51,	// (0x0002b767) list_single_hc_apps_pane_t1_ParamLimits

0x9a7e,	// (0x00027494) popup_toolbar2_fixed_window_ParamLimits

0x9a7e,	// (0x00027494) popup_toolbar2_fixed_window

0xab94,	// (0x000285aa) popup_toolbar2_float_window

0x4c4d,	// (0x00022663) bg_popup_sub_pane_cp27

0x8cbb,	// (0x000266d1) grid_toolbar2_float_pane

0x4c4d,	// (0x00022663) bg_popup_sub_pane_cp26

0x8cbb,	// (0x000266d1) grid_toolbar2_fixed_pane

0xc20c,	// (0x00029c22) cell_toolbar2_fixed_pane_ParamLimits

0xc20c,	// (0x00029c22) cell_toolbar2_fixed_pane

0xc21d,	// (0x00029c33) cell_toolbar2_fixed_pane_g1

0x8cc3,	// (0x000266d9) toolbar2_fixed_button_pane

0x6007,	// (0x00023a1d) toolbar2_fixed_button_pane_g1

0x600f,	// (0x00023a25) toolbar2_fixed_button_pane_g2

0x6017,	// (0x00023a2d) toolbar2_fixed_button_pane_g3

0x601f,	// (0x00023a35) toolbar2_fixed_button_pane_g4

0x6027,	// (0x00023a3d) toolbar2_fixed_button_pane_g5

0x602f,	// (0x00023a45) toolbar2_fixed_button_pane_g6

0x6037,	// (0x00023a4d) toolbar2_fixed_button_pane_g7

0x603f,	// (0x00023a55) toolbar2_fixed_button_pane_g8

0x6047,	// (0x00023a5d) toolbar2_fixed_button_pane_g9

0x0008,

0xf85c,	// (0x0002d272) toolbar2_fixed_button_pane_g

0x8ccb,	// (0x000266e1) cell_toolbar2_float_pane_ParamLimits

0x8ccb,	// (0x000266e1) cell_toolbar2_float_pane

0x8cdc,	// (0x000266f2) cell_toolbar2_float_pane_g1

0x8cc3,	// (0x000266d9) toolbar2_fixed_button_pane_cp

0xbb97,	// (0x000295ad) fep_vkb_accented_list_pane_ParamLimits

0xbb97,	// (0x000295ad) fep_vkb_accented_list_pane

0xbcb5,	// (0x000296cb) bg_popup_fep_shadow_pane_g9

0x5c7b,	// (0x00023691) bg_popup_fep_shadow_pane_cp3

0x540d,	// (0x00022e23) list_accented_list_pane

0x8ce5,	// (0x000266fb) list_single_accented_list_pane_ParamLimits

0x8ce5,	// (0x000266fb) list_single_accented_list_pane

0x5c7b,	// (0x00023691) list_highlight_pane_cp10

0x8cf6,	// (0x0002670c) list_single_accented_list_pane_t1

0xaafa,	// (0x00028510) popup_slider_window_ParamLimits

0xaafa,	// (0x00028510) popup_slider_window

0x8b26,	// (0x0002653c) aid_indentation_list_msg

0xc2b8,	// (0x00029cce) bg_popup_window_pane_cp19

0x8d5c,	// (0x00026772) popup_slider_window_g1

0x8d78,	// (0x0002678e) popup_slider_window_g2

0x8d94,	// (0x000267aa) popup_slider_window_g3

0x0005,

0xfcec,	// (0x0002d702) popup_slider_window_g

0x8db0,	// (0x000267c6) popup_slider_window_t1

0x8df4,	// (0x0002680a) small_volume_slider_vertical_pane

0x7db4,	// (0x000257ca) small_volume_slider_vertical_pane_g1

0x7db4,	// (0x000257ca) small_volume_slider_vertical_pane_g2

0x8e10,	// (0x00026826) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfe,	// (0x0002d714) small_volume_slider_vertical_pane_g

0x98f2,	// (0x00027308) area_side_right_pane_ParamLimits

0x98f2,	// (0x00027308) area_side_right_pane

0xc332,	// (0x00029d48) aid_size_side_button_ParamLimits

0xc332,	// (0x00029d48) aid_size_side_button

0xc346,	// (0x00029d5c) grid_sctrl_middle_pane_ParamLimits

0xc346,	// (0x00029d5c) grid_sctrl_middle_pane

0xc362,	// (0x00029d78) sctrl_sk_bottom_pane

0xc373,	// (0x00029d89) sctrl_sk_top_pane

0xc385,	// (0x00029d9b) aid_touch_sctrl_top

0xc392,	// (0x00029da8) bg_sctrl_sk_pane_ParamLimits

0xc392,	// (0x00029da8) bg_sctrl_sk_pane

0xc3a0,	// (0x00029db6) sctrl_sk_top_pane_g1

0xc3ad,	// (0x00029dc3) sctrl_sk_top_pane_t1

0xc385,	// (0x00029d9b) aid_touch_sctrl_bottom

0xc392,	// (0x00029da8) bg_sctrl_sk_pane_cp_ParamLimits

0xc392,	// (0x00029da8) bg_sctrl_sk_pane_cp

0xc3c8,	// (0x00029dde) sctrl_sk_bottom_pane_g1

0xc3ad,	// (0x00029dc3) sctrl_sk_bottom_pane_t1

0xc3d1,	// (0x00029de7) cell_sctrl_middle_pane_ParamLimits

0xc3d1,	// (0x00029de7) cell_sctrl_middle_pane

0xc3ec,	// (0x00029e02) aid_touch_sctrl_middle_ParamLimits

0xc3ec,	// (0x00029e02) aid_touch_sctrl_middle

0xc3fd,	// (0x00029e13) bg_sctrl_middle_pane_ParamLimits

0xc3fd,	// (0x00029e13) bg_sctrl_middle_pane

0xbcd5,	// (0x000296eb) cell_sctrl_middle_pane_g1_ParamLimits

0xbcd5,	// (0x000296eb) cell_sctrl_middle_pane_g1

0xc40b,	// (0x00029e21) cell_sctrl_middle_pane_g2_ParamLimits

0xc40b,	// (0x00029e21) cell_sctrl_middle_pane_g2

0x0001,

0xfd0a,	// (0x0002d720) cell_sctrl_middle_pane_g_ParamLimits

0xfd0a,	// (0x0002d720) cell_sctrl_middle_pane_g

0x6007,	// (0x00023a1d) bg_sctrl_middle_pane_g1

0x6017,	// (0x00023a2d) bg_sctrl_middle_pane_g2

0x600f,	// (0x00023a25) bg_sctrl_middle_pane_g3

0x6027,	// (0x00023a3d) bg_sctrl_middle_pane_g4

0x601f,	// (0x00023a35) bg_sctrl_middle_pane_g5

0x602f,	// (0x00023a45) bg_sctrl_middle_pane_g6

0x6037,	// (0x00023a4d) bg_sctrl_middle_pane_g7

0x6047,	// (0x00023a5d) bg_sctrl_middle_pane_g8

0x0007,

0xfd0f,	// (0x0002d725) bg_sctrl_middle_pane_g

0x603f,	// (0x00023a55) bg_sctrl_middle_pane_g8_copy1

0x6007,	// (0x00023a1d) bg_sctrl_sk_pane_g1

0x600f,	// (0x00023a25) bg_sctrl_sk_pane_g2

0x6017,	// (0x00023a2d) bg_sctrl_sk_pane_g3

0x0008,

0xf85c,	// (0x0002d272) bg_sctrl_sk_pane_g

0x521f,	// (0x00022c35) aid_size_touch_scroll_bar

0x601f,	// (0x00023a35) bg_sctrl_sk_pane_g4

0x6027,	// (0x00023a3d) bg_sctrl_sk_pane_g5

0x602f,	// (0x00023a45) bg_sctrl_sk_pane_g6

0x6037,	// (0x00023a4d) bg_sctrl_sk_pane_g7

0x603f,	// (0x00023a55) bg_sctrl_sk_pane_g8

0x6047,	// (0x00023a5d) bg_sctrl_sk_pane_g9

0xa830,	// (0x00028246) popup_fep_china_hwr2_fs_candidate_window

0xa838,	// (0x0002824e) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa838,	// (0x0002824e) popup_fep_china_hwr2_fs_control_window

0xbcd5,	// (0x000296eb) sctrl_sk_top_pane_g2

0x0001,

0xfd05,	// (0x0002d71b) sctrl_sk_top_pane_g

0xea02,	// (0x0002c418) aid_fep_china_hwr2_fs_cell_ParamLimits

0xea02,	// (0x0002c418) aid_fep_china_hwr2_fs_cell

0xea13,	// (0x0002c429) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xea13,	// (0x0002c429) bg_popup_fep_shadow_pane_cp4

0xea2a,	// (0x0002c440) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xea2a,	// (0x0002c440) bg_popup_fep_shadow_pane_cp5

0xea3c,	// (0x0002c452) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xea3c,	// (0x0002c452) popup_fep_china_hwr2_fs_control_bar_grid

0xea4c,	// (0x0002c462) popup_fep_china_hwr2_fs_control_funtion_grid

0xdd7f,	// (0x0002b795) aid_fep_china_hwr2_fs_candi_cell

0x4c4d,	// (0x00022663) bg_popup_fep_shadow_pane_cp6

0xdd89,	// (0x0002b79f) popup_fep_china_hwr2_fs_candidate_grid

0xea54,	// (0x0002c46a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xea54,	// (0x0002c46a) cell_fep_china_hwr2_fs_funtion_grid

0x7db4,	// (0x000257ca) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xdd91,	// (0x0002b7a7) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xdd91,	// (0x0002b7a7) cell_fep_china_hwr2_fs_funtion_grid_g1

0xdd9f,	// (0x0002b7b5) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xdd9f,	// (0x0002b7b5) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd20,	// (0x0002d736) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd20,	// (0x0002d736) cell_fep_china_hwr2_fs_funtion_grid_g

0xea6c,	// (0x0002c482) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xea6c,	// (0x0002c482) cell_fep_china_hwr2_fs_funtion_grid_t1

0xea81,	// (0x0002c497) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xea81,	// (0x0002c497) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd25,	// (0x0002d73b) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd25,	// (0x0002d73b) cell_fep_china_hwr2_fs_funtion_grid_t

0xddb5,	// (0x0002b7cb) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xddbd,	// (0x0002b7d3) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xddc5,	// (0x0002b7db) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2a,	// (0x0002d740) popup_fep_china_hwr2_fs_control_bar_grid_g

0xddcd,	// (0x0002b7e3) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xddcd,	// (0x0002b7e3) cell_fep_china_hwr2_fs_candidate_grid

0xdde6,	// (0x0002b7fc) popup_fep_china_hwr2_fs_candidate_grid_g20

0xddee,	// (0x0002b804) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7db4,	// (0x000257ca) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7db4,	// (0x000257ca) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb45,	// (0x0002d55b) cell_fep_china_hwr2_fs_candidate_grid_g

0xddf6,	// (0x0002b80c) cell_fep_china_hwr2_fs_candidate_grid_t1

0x5e6c,	// (0x00023882) clock_nsta_pane_cp_24_ParamLimits

0x5e6c,	// (0x00023882) clock_nsta_pane_cp_24

0x5ec9,	// (0x000238df) indicator_nsta_pane_cp_24_ParamLimits

0x5ec9,	// (0x000238df) indicator_nsta_pane_cp_24

0x6be5,	// (0x000245fb) heading_pane_g1

0x0001,

0xf8c1,	// (0x0002d2d7) heading_pane_g

0xb63b,	// (0x00029051) grid_sct_catagory_button_pane

0x719b,	// (0x00024bb1) scroll_pane_cp5_ParamLimits

0x7a7e,	// (0x00025494) button_value_adjust_pane_cp5_ParamLimits

0x7a7e,	// (0x00025494) button_value_adjust_pane_cp5

0x7b3c,	// (0x00025552) form2_midp_time_pane_ParamLimits

0xde04,	// (0x0002b81a) cell_sct_catagory_button_pane_ParamLimits

0xde04,	// (0x0002b81a) cell_sct_catagory_button_pane

0x7d79,	// (0x0002578f) bg_button_pane_cp01_ParamLimits

0x7d79,	// (0x0002578f) bg_button_pane_cp01

0x7db4,	// (0x000257ca) cell_sct_catagory_button_pane_g1

0xab31,	// (0x00028547) popup_tb_extension_window

0xea9d,	// (0x0002c4b3) aid_size_cell_ext_ParamLimits

0xea9d,	// (0x0002c4b3) aid_size_cell_ext

0x4e70,	// (0x00022886) bg_tb_trans_pane_cp1_ParamLimits

0x4e70,	// (0x00022886) bg_tb_trans_pane_cp1

0xeabd,	// (0x0002c4d3) grid_tb_ext_pane_ParamLimits

0xeabd,	// (0x0002c4d3) grid_tb_ext_pane

0xeae3,	// (0x0002c4f9) cell_tb_ext_pane_ParamLimits

0xeae3,	// (0x0002c4f9) cell_tb_ext_pane

0xeaf8,	// (0x0002c50e) cell_tb_ext_pane_g1_ParamLimits

0xeaf8,	// (0x0002c50e) cell_tb_ext_pane_g1

0xde16,	// (0x0002b82c) cell_tb_ext_pane_t1

0x4e70,	// (0x00022886) list_highlight_pane_cp11_ParamLimits

0x4e70,	// (0x00022886) list_highlight_pane_cp11

0x9a9d,	// (0x000274b3) popup_uni_indicator_window_ParamLimits

0x9a9d,	// (0x000274b3) popup_uni_indicator_window

0x52d7,	// (0x00022ced) bg_popup_sub_pane_cp14

0xde31,	// (0x0002b847) list_uniindi_pane

0xde3d,	// (0x0002b853) uniindi_top_pane

0x4e70,	// (0x00022886) bg_uniindi_top_pane

0xde5c,	// (0x0002b872) uniindi_top_pane_g1

0xde72,	// (0x0002b888) uniindi_top_pane_g2

0x0003,

0xfd31,	// (0x0002d747) uniindi_top_pane_g

0xde9c,	// (0x0002b8b2) uniindi_top_pane_t1

0xdec6,	// (0x0002b8dc) list_single_uniindi_pane_ParamLimits

0xdec6,	// (0x0002b8dc) list_single_uniindi_pane

0x7db4,	// (0x000257ca) bg_uniindi_top_pane_g1

0xded8,	// (0x0002b8ee) list_single_uniindi_pane_g1

0xdeeb,	// (0x0002b901) list_single_uniindi_pane_t1

0x993b,	// (0x00027351) control_bg_pane

0xdf10,	// (0x0002b926) bg_sctrl_sk_pane_cp1

0xdf19,	// (0x0002b92f) bg_sctrl_sk_pane_cp2

0xdf22,	// (0x0002b938) control_bg_pane_g1

0xdf2b,	// (0x0002b941) control_bg_pane_g2

0x0001,

0xfd3a,	// (0x0002d750) control_bg_pane_g

0x793f,	// (0x00025355) cell_indicator_nsta_pane_g1_ParamLimits

0xb843,	// (0x00029259) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa9,	// (0x0002d4bf) cell_indicator_nsta_pane_g_ParamLimits

0xd9d2,	// (0x0002b3e8) form2_midp_time_pane_t1_ParamLimits

0xa7a6,	// (0x000281bc) main_idle_act4_pane_ParamLimits

0xa7a6,	// (0x000281bc) main_idle_act4_pane

0xab31,	// (0x00028547) popup_tb_extension_window_ParamLimits

0xead7,	// (0x0002c4ed) tb_ext_find_pane_ParamLimits

0xead7,	// (0x0002c4ed) tb_ext_find_pane

0xdf34,	// (0x0002b94a) ai_gene_pane_1_cp1

0x5d0f,	// (0x00023725) ai_gene_pane_2_cp1

0xdf3c,	// (0x0002b952) list_single_idle_plugin_calendar_pane

0xdf45,	// (0x0002b95b) list_single_idle_plugin_notification_pane

0xdf4e,	// (0x0002b964) list_single_idle_plugin_player_pane

0xeb15,	// (0x0002c52b) list_single_idle_plugin_shortcut_pane_ParamLimits

0xeb15,	// (0x0002c52b) list_single_idle_plugin_shortcut_pane

0xeb37,	// (0x0002c54d) main_idle_act4_pane_t1

0xeb49,	// (0x0002c55f) main_idle_act4_pane_t2

0x0001,

0xfd3f,	// (0x0002d755) main_idle_act4_pane_t

0xeb5b,	// (0x0002c571) middle_sk_idle_act4_pane_ParamLimits

0xeb5b,	// (0x0002c571) middle_sk_idle_act4_pane

0xeb71,	// (0x0002c587) popup_clock_digital_analogue_window_cp2

0xeb8b,	// (0x0002c5a1) shortcut_wheel_idle_act4_pane_ParamLimits

0xeb8b,	// (0x0002c5a1) shortcut_wheel_idle_act4_pane

0x7db4,	// (0x000257ca) shortcut_wheel_idle_act4_pane_g1

0x7db4,	// (0x000257ca) shortcut_wheel_idle_act4_pane_g2

0x7db4,	// (0x000257ca) shortcut_wheel_idle_act4_pane_g3

0x7db4,	// (0x000257ca) shortcut_wheel_idle_act4_pane_g4

0x7db4,	// (0x000257ca) shortcut_wheel_idle_act4_pane_g5

0xdf57,	// (0x0002b96d) shortcut_wheel_idle_act4_pane_g6

0xdf5f,	// (0x0002b975) shortcut_wheel_idle_act4_pane_g7

0xdf67,	// (0x0002b97d) shortcut_wheel_idle_act4_pane_g8

0xdf6f,	// (0x0002b985) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd44,	// (0x0002d75a) shortcut_wheel_idle_act4_pane_g

0x7fe0,	// (0x000259f6) middle_sk_idle_act4_pane_g1_ParamLimits

0x7fe0,	// (0x000259f6) middle_sk_idle_act4_pane_g1

0xebfb,	// (0x0002c611) middle_sk_idle_act4_pane_g2_ParamLimits

0xebfb,	// (0x0002c611) middle_sk_idle_act4_pane_g2

0x0001,

0xfd67,	// (0x0002d77d) middle_sk_idle_act4_pane_g_ParamLimits

0xfd67,	// (0x0002d77d) middle_sk_idle_act4_pane_g

0xec07,	// (0x0002c61d) middle_sk_idle_act4_pane_t1_ParamLimits

0xec07,	// (0x0002c61d) middle_sk_idle_act4_pane_t1

0xec24,	// (0x0002c63a) grid_ai_shortcut_pane_ParamLimits

0xec24,	// (0x0002c63a) grid_ai_shortcut_pane

0xec3d,	// (0x0002c653) list_highlight_pane_cp16_ParamLimits

0xec3d,	// (0x0002c653) list_highlight_pane_cp16

0xec4a,	// (0x0002c660) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xec4a,	// (0x0002c660) list_single_idle_plugin_shortcut_pane_g1

0xec56,	// (0x0002c66c) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xec56,	// (0x0002c66c) list_single_idle_plugin_shortcut_pane_g2

0xec6e,	// (0x0002c684) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xec6e,	// (0x0002c684) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6c,	// (0x0002d782) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6c,	// (0x0002d782) list_single_idle_plugin_shortcut_pane_g

0xec81,	// (0x0002c697) cell_ai_shortcut_pane_ParamLimits

0xec81,	// (0x0002c697) cell_ai_shortcut_pane

0xeca2,	// (0x0002c6b8) cell_ai_shortcut_pane_g1_ParamLimits

0xeca2,	// (0x0002c6b8) cell_ai_shortcut_pane_g1

0xdf34,	// (0x0002b94a) ai_gene_pane_1_cp2

0xdf77,	// (0x0002b98d) ai_gene_pane_2_cp2

0xdf7f,	// (0x0002b995) list_highlight_pane_cp15

0xdf88,	// (0x0002b99e) list_single_idle_plugin_calendar_pane_g1

0xdf7f,	// (0x0002b995) list_highlight_pane_cp17

0xdf90,	// (0x0002b9a6) list_single_idle_plugin_calendar_pane_g1_copy1

0xdf98,	// (0x0002b9ae) list_single_idle_plugin_player_pane_g1

0x7413,	// (0x00024e29) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd73,	// (0x0002d789) list_single_idle_plugin_player_pane_g

0xdfa0,	// (0x0002b9b6) list_single_idle_plugin_player_pane_t1

0xdfae,	// (0x0002b9c4) list_single_idle_plugin_player_pane_t2

0xdfbc,	// (0x0002b9d2) list_single_idle_plugin_player_pane_t3

0xdfca,	// (0x0002b9e0) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd78,	// (0x0002d78e) list_single_idle_plugin_player_pane_t

0xdfd8,	// (0x0002b9ee) wait_bar_pane_cp15

0xdfe0,	// (0x0002b9f6) grid_ai_notification_pane

0x7413,	// (0x00024e29) list_single_idle_plugin_notification_pane_g1

0xecc4,	// (0x0002c6da) cell_ai_notification_pane_ParamLimits

0xecc4,	// (0x0002c6da) cell_ai_notification_pane

0xdfe9,	// (0x0002b9ff) cell_ai_notification_pane_g1

0xdff1,	// (0x0002ba07) cell_ai_notification_pane_t1

0xecd1,	// (0x0002c6e7) tb_ext_find_button_pane

0xecd9,	// (0x0002c6ef) tb_ext_find_pane_g1

0xece1,	// (0x0002c6f7) tb_ext_find_pane_t1

0x57e9,	// (0x000231ff) tb_ext_find_button_pane_g1

0xdfff,	// (0x0002ba15) tb_ext_find_button_pane_g2

0x0001,

0xfd81,	// (0x0002d797) tb_ext_find_button_pane_g

0xeb37,	// (0x0002c54d) main_idle_act4_pane_t1_ParamLimits

0xeb49,	// (0x0002c55f) main_idle_act4_pane_t2_ParamLimits

0xfd3f,	// (0x0002d755) main_idle_act4_pane_t_ParamLimits

0xeb71,	// (0x0002c587) popup_clock_digital_analogue_window_cp2_ParamLimits

0xeb7f,	// (0x0002c595) sat_plugin_idle_act4_pane_ParamLimits

0xeb7f,	// (0x0002c595) sat_plugin_idle_act4_pane

0xecef,	// (0x0002c705) sat_plugin_idle_act4_pane_t1_ParamLimits

0xecef,	// (0x0002c705) sat_plugin_idle_act4_pane_t1

0xed02,	// (0x0002c718) sat_plugin_idle_act4_pane_t2_ParamLimits

0xed02,	// (0x0002c718) sat_plugin_idle_act4_pane_t2

0xed15,	// (0x0002c72b) sat_plugin_idle_act4_pane_t3_ParamLimits

0xed15,	// (0x0002c72b) sat_plugin_idle_act4_pane_t3

0xed28,	// (0x0002c73e) sat_plugin_idle_act4_pane_t4_ParamLimits

0xed28,	// (0x0002c73e) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd86,	// (0x0002d79c) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd86,	// (0x0002d79c) sat_plugin_idle_act4_pane_t

0x99fe,	// (0x00027414) popup_battery_window_ParamLimits

0x99fe,	// (0x00027414) popup_battery_window

0x4e70,	// (0x00022886) bg_popup_sub_pane_cp25_ParamLimits

0x4e70,	// (0x00022886) bg_popup_sub_pane_cp25

0xe008,	// (0x0002ba1e) popup_battery_window_g1_ParamLimits

0xe008,	// (0x0002ba1e) popup_battery_window_g1

0xe014,	// (0x0002ba2a) popup_battery_window_t1_ParamLimits

0xe014,	// (0x0002ba2a) popup_battery_window_t1

0xe026,	// (0x0002ba3c) popup_battery_window_t2_ParamLimits

0xe026,	// (0x0002ba3c) popup_battery_window_t2

0x0001,

0xfd8f,	// (0x0002d7a5) popup_battery_window_t_ParamLimits

0xfd8f,	// (0x0002d7a5) popup_battery_window_t

0xa43a,	// (0x00027e50) midp_canvas_pane_ParamLimits

0xa496,	// (0x00027eac) midp_keypad_pane_ParamLimits

0xa496,	// (0x00027eac) midp_keypad_pane

0x545d,	// (0x00022e73) main_midp_pane_ParamLimits

0x7a1a,	// (0x00025430) signal_pane_g2_cp_ParamLimits

0xed3b,	// (0x0002c751) aid_size_cell_midp_keypad_ParamLimits

0xed3b,	// (0x0002c751) aid_size_cell_midp_keypad

0xed55,	// (0x0002c76b) midp_keyp_game_grid_pane_ParamLimits

0xed55,	// (0x0002c76b) midp_keyp_game_grid_pane

0xed6f,	// (0x0002c785) midp_keyp_rocker_pane_ParamLimits

0xed6f,	// (0x0002c785) midp_keyp_rocker_pane

0xed9c,	// (0x0002c7b2) midp_keyp_sk_left_pane_ParamLimits

0xed9c,	// (0x0002c7b2) midp_keyp_sk_left_pane

0xedf4,	// (0x0002c80a) midp_keyp_sk_right_pane_ParamLimits

0xedf4,	// (0x0002c80a) midp_keyp_sk_right_pane

0x4c4d,	// (0x00022663) bg_button_pane_cp03

0xee46,	// (0x0002c85c) midp_keyp_sk_left_pane_g1

0x4c4d,	// (0x00022663) bg_button_pane_cp04

0xee46,	// (0x0002c85c) midp_keyp_sk_right_pane_g1

0x7db4,	// (0x000257ca) midp_keyp_rocker_pane_g1

0xee4f,	// (0x0002c865) keyp_game_cell_pane_ParamLimits

0xee4f,	// (0x0002c865) keyp_game_cell_pane

0x4c4d,	// (0x00022663) bg_button_pane_cp02

0xee60,	// (0x0002c876) keyp_game_cell_pane_g1

0x9a34,	// (0x0002744a) popup_fep_vkb2_window_ParamLimits

0x9a34,	// (0x0002744a) popup_fep_vkb2_window

0xc42f,	// (0x00029e45) aid_size_cell_vkb2_ParamLimits

0xc42f,	// (0x00029e45) aid_size_cell_vkb2

0xc483,	// (0x00029e99) popup_fep_vkb2_window_g1_ParamLimits

0xc483,	// (0x00029e99) popup_fep_vkb2_window_g1

0xc4cb,	// (0x00029ee1) vkb2_area_bottom_pane_ParamLimits

0xc4cb,	// (0x00029ee1) vkb2_area_bottom_pane

0xc503,	// (0x00029f19) vkb2_area_keypad_pane_ParamLimits

0xc503,	// (0x00029f19) vkb2_area_keypad_pane

0xc53b,	// (0x00029f51) vkb2_area_top_pane_ParamLimits

0xc53b,	// (0x00029f51) vkb2_area_top_pane

0xc5ab,	// (0x00029fc1) vkb2_top_entry_pane_ParamLimits

0xc5ab,	// (0x00029fc1) vkb2_top_entry_pane

0xc5d5,	// (0x00029feb) vkb2_top_grid_left_pane_ParamLimits

0xc5d5,	// (0x00029feb) vkb2_top_grid_left_pane

0xc5f3,	// (0x0002a009) vkb2_top_grid_right_pane_ParamLimits

0xc5f3,	// (0x0002a009) vkb2_top_grid_right_pane

0xc611,	// (0x0002a027) vkb2_cell_keypad_pane_ParamLimits

0xc611,	// (0x0002a027) vkb2_cell_keypad_pane

0xc6c2,	// (0x0002a0d8) vkb2_area_bottom_grid_pane_ParamLimits

0xc6c2,	// (0x0002a0d8) vkb2_area_bottom_grid_pane

0xc6e6,	// (0x0002a0fc) vkb2_area_bottom_pane_g1_ParamLimits

0xc6e6,	// (0x0002a0fc) vkb2_area_bottom_pane_g1

0xc70a,	// (0x0002a120) vkb2_area_bottom_pane_g2_ParamLimits

0xc70a,	// (0x0002a120) vkb2_area_bottom_pane_g2

0xc738,	// (0x0002a14e) vkb2_area_bottom_pane_g3_ParamLimits

0xc738,	// (0x0002a14e) vkb2_area_bottom_pane_g3

0x0002,

0xfd94,	// (0x0002d7aa) vkb2_area_bottom_pane_g_ParamLimits

0xfd94,	// (0x0002d7aa) vkb2_area_bottom_pane_g

0xc789,	// (0x0002a19f) vkb2_top_cell_left_pane_ParamLimits

0xc789,	// (0x0002a19f) vkb2_top_cell_left_pane

0xee69,	// (0x0002c87f) vkb2_top_entry_pane_g1_ParamLimits

0xee69,	// (0x0002c87f) vkb2_top_entry_pane_g1

0xee77,	// (0x0002c88d) vkb2_top_entry_pane_t1_ParamLimits

0xee77,	// (0x0002c88d) vkb2_top_entry_pane_t1

0xe04b,	// (0x0002ba61) vkb2_top_entry_pane_t2_ParamLimits

0xe04b,	// (0x0002ba61) vkb2_top_entry_pane_t2

0xe07d,	// (0x0002ba93) vkb2_top_entry_pane_t3_ParamLimits

0xe07d,	// (0x0002ba93) vkb2_top_entry_pane_t3

0x0002,

0xfd9b,	// (0x0002d7b1) vkb2_top_entry_pane_t_ParamLimits

0xfd9b,	// (0x0002d7b1) vkb2_top_entry_pane_t

0xc7d6,	// (0x0002a1ec) vkb2_top_grid_right_pane_g1_ParamLimits

0xc7d6,	// (0x0002a1ec) vkb2_top_grid_right_pane_g1

0xc7ec,	// (0x0002a202) vkb2_top_grid_right_pane_g2_ParamLimits

0xc7ec,	// (0x0002a202) vkb2_top_grid_right_pane_g2

0xc804,	// (0x0002a21a) vkb2_top_grid_right_pane_g3_ParamLimits

0xc804,	// (0x0002a21a) vkb2_top_grid_right_pane_g3

0xc81c,	// (0x0002a232) vkb2_top_grid_right_pane_g4_ParamLimits

0xc81c,	// (0x0002a232) vkb2_top_grid_right_pane_g4

0x0003,

0xfda2,	// (0x0002d7b8) vkb2_top_grid_right_pane_g_ParamLimits

0xfda2,	// (0x0002d7b8) vkb2_top_grid_right_pane_g

0xc832,	// (0x0002a248) vkb2_top_cell_left_pane_g1

0xc849,	// (0x0002a25f) vkb2_cell_keypad_pane_g1_ParamLimits

0xc849,	// (0x0002a25f) vkb2_cell_keypad_pane_g1

0xe093,	// (0x0002baa9) vkb2_cell_keypad_pane_t1_ParamLimits

0xe093,	// (0x0002baa9) vkb2_cell_keypad_pane_t1

0xc857,	// (0x0002a26d) vkb2_cell_bottom_grid_pane_ParamLimits

0xc857,	// (0x0002a26d) vkb2_cell_bottom_grid_pane

0xc890,	// (0x0002a2a6) vkb2_cell_bottom_grid_pane_g1

0xeb9f,	// (0x0002c5b5) aid_call2_pane_cp02

0xeba7,	// (0x0002c5bd) aid_call_pane_cp02

0xebaf,	// (0x0002c5c5) clock_digital_number_pane_cp10

0xebb7,	// (0x0002c5cd) clock_digital_number_pane_cp11

0xebbf,	// (0x0002c5d5) clock_digital_number_pane_cp12

0xebc7,	// (0x0002c5dd) clock_digital_number_pane_cp13

0xebcf,	// (0x0002c5e5) clock_digital_separator_pane_cp10

0x57e9,	// (0x000231ff) popup_clock_digital_analogue_window_cp2_g1

0x57e9,	// (0x000231ff) popup_clock_digital_analogue_window_cp2_g2

0xebd7,	// (0x0002c5ed) popup_clock_digital_analogue_window_cp2_g3

0x57e9,	// (0x000231ff) popup_clock_digital_analogue_window_cp2_g4

0xebd7,	// (0x0002c5ed) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd57,	// (0x0002d76d) popup_clock_digital_analogue_window_cp2_g

0xebdf,	// (0x0002c5f5) popup_clock_digital_analogue_window_cp2_t1

0xebed,	// (0x0002c603) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd62,	// (0x0002d778) popup_clock_digital_analogue_window_cp2_t

0x7db4,	// (0x000257ca) clock_digital_number_pane_cp10_g1

0x7db4,	// (0x000257ca) clock_digital_number_pane_cp10_g2

0x0001,

0xfb45,	// (0x0002d55b) clock_digital_number_pane_cp10_g

0x7db4,	// (0x000257ca) clock_digital_separator_pane_cp10_g1

0x7db4,	// (0x000257ca) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb45,	// (0x0002d55b) clock_digital_separator_pane_cp10_g

0xde7e,	// (0x0002b894) uniindi_top_pane_g3

0xde8f,	// (0x0002b8a5) uniindi_top_pane_g4

0xc67c,	// (0x0002a092) vkb2_row_keypad_pane_ParamLimits

0xc67c,	// (0x0002a092) vkb2_row_keypad_pane

0xc8ac,	// (0x0002a2c2) vkb2_cell_t_keypad_pane_ParamLimits

0xc8ac,	// (0x0002a2c2) vkb2_cell_t_keypad_pane

0xc8b9,	// (0x0002a2cf) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xc8b9,	// (0x0002a2cf) vkb2_cell_t_keypad_pane_cp08

0xc8c9,	// (0x0002a2df) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xc8c9,	// (0x0002a2df) vkb2_cell_t_keypad_pane_cp09

0xc8da,	// (0x0002a2f0) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xc8da,	// (0x0002a2f0) vkb2_cell_t_keypad_pane_cp01

0xc8ea,	// (0x0002a300) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xc8ea,	// (0x0002a300) vkb2_cell_t_keypad_pane_cp02

0xc8fa,	// (0x0002a310) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xc8fa,	// (0x0002a310) vkb2_cell_t_keypad_pane_cp03

0xc90a,	// (0x0002a320) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xc90a,	// (0x0002a320) vkb2_cell_t_keypad_pane_cp04

0xc91a,	// (0x0002a330) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xc91a,	// (0x0002a330) vkb2_cell_t_keypad_pane_cp05

0xc92a,	// (0x0002a340) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xc92a,	// (0x0002a340) vkb2_cell_t_keypad_pane_cp06

0xc93a,	// (0x0002a350) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xc93a,	// (0x0002a350) vkb2_cell_t_keypad_pane_cp07

0xc94a,	// (0x0002a360) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xc94a,	// (0x0002a360) vkb2_cell_t_keypad_pane_cp10

0xbcd5,	// (0x000296eb) vkb2_cell_t_keypad_pane_g1

0xe0aa,	// (0x0002bac0) vkb2_cell_t_keypad_pane_t1

0x993b,	// (0x00027351) popup_grid_graphic2_window

0xeea9,	// (0x0002c8bf) aid_size_cell_graphic2_ParamLimits

0xeea9,	// (0x0002c8bf) aid_size_cell_graphic2

0xeee1,	// (0x0002c8f7) bg_popup_window_pane_cp21_ParamLimits

0xeee1,	// (0x0002c8f7) bg_popup_window_pane_cp21

0xeeef,	// (0x0002c905) graphic2_pages_pane_ParamLimits

0xeeef,	// (0x0002c905) graphic2_pages_pane

0xef29,	// (0x0002c93f) grid_graphic2_control_pane_ParamLimits

0xef29,	// (0x0002c93f) grid_graphic2_control_pane

0xef5f,	// (0x0002c975) grid_graphic2_pane_ParamLimits

0xef5f,	// (0x0002c975) grid_graphic2_pane

0xefbf,	// (0x0002c9d5) cell_graphic2_pane

0x993b,	// (0x00027351) main_comp_mode_pane

0x8b94,	// (0x000265aa) list_ai3_gene_pane_ParamLimits

0xc2b8,	// (0x00029cce) bg_popup_window_pane_cp19_ParamLimits

0x8d04,	// (0x0002671a) bg_touch_area_indi_pane_ParamLimits

0x8d04,	// (0x0002671a) bg_touch_area_indi_pane

0x8d1a,	// (0x00026730) bg_touch_area_indi_pane_cp01_ParamLimits

0x8d1a,	// (0x00026730) bg_touch_area_indi_pane_cp01

0x8d30,	// (0x00026746) bg_touch_area_indi_pane_cp02_ParamLimits

0x8d30,	// (0x00026746) bg_touch_area_indi_pane_cp02

0x8d46,	// (0x0002675c) bg_touch_area_indi_pane_cp03_ParamLimits

0x8d46,	// (0x0002675c) bg_touch_area_indi_pane_cp03

0x8d5c,	// (0x00026772) popup_slider_window_g1_ParamLimits

0x8d78,	// (0x0002678e) popup_slider_window_g2_ParamLimits

0x8d94,	// (0x000267aa) popup_slider_window_g3_ParamLimits

0xfcec,	// (0x0002d702) popup_slider_window_g_ParamLimits

0x8db0,	// (0x000267c6) popup_slider_window_t1_ParamLimits

0x8df4,	// (0x0002680a) small_volume_slider_vertical_pane_ParamLimits

0xefbf,	// (0x0002c9d5) cell_graphic2_pane_ParamLimits

0xeffb,	// (0x0002ca11) bg_button_pane_cp10_ParamLimits

0xeffb,	// (0x0002ca11) bg_button_pane_cp10

0xf00c,	// (0x0002ca22) bg_button_pane_cp11_ParamLimits

0xf00c,	// (0x0002ca22) bg_button_pane_cp11

0xf01d,	// (0x0002ca33) graphic2_pages_pane_g1_ParamLimits

0xf01d,	// (0x0002ca33) graphic2_pages_pane_g1

0xf030,	// (0x0002ca46) graphic2_pages_pane_g2_ParamLimits

0xf030,	// (0x0002ca46) graphic2_pages_pane_g2

0x0001,

0xfdb0,	// (0x0002d7c6) graphic2_pages_pane_g_ParamLimits

0xfdb0,	// (0x0002d7c6) graphic2_pages_pane_g

0xf046,	// (0x0002ca5c) graphic2_pages_pane_t1_ParamLimits

0xf046,	// (0x0002ca5c) graphic2_pages_pane_t1

0xf05c,	// (0x0002ca72) cell_graphic2_control_pane_ParamLimits

0xf05c,	// (0x0002ca72) cell_graphic2_control_pane

0xf07b,	// (0x0002ca91) cell_graphic2_pane_g1_ParamLimits

0xf07b,	// (0x0002ca91) cell_graphic2_pane_g1

0xf088,	// (0x0002ca9e) cell_graphic2_pane_g2_ParamLimits

0xf088,	// (0x0002ca9e) cell_graphic2_pane_g2

0xf095,	// (0x0002caab) cell_graphic2_pane_g3_ParamLimits

0xf095,	// (0x0002caab) cell_graphic2_pane_g3

0xf0a2,	// (0x0002cab8) cell_graphic2_pane_g4_ParamLimits

0xf0a2,	// (0x0002cab8) cell_graphic2_pane_g4

0xf0af,	// (0x0002cac5) cell_graphic2_pane_g5_ParamLimits

0xf0af,	// (0x0002cac5) cell_graphic2_pane_g5

0x0004,

0xfdb5,	// (0x0002d7cb) cell_graphic2_pane_g_ParamLimits

0xfdb5,	// (0x0002d7cb) cell_graphic2_pane_g

0xf0ca,	// (0x0002cae0) cell_graphic2_pane_t1_ParamLimits

0xf0ca,	// (0x0002cae0) cell_graphic2_pane_t1

0x60b1,	// (0x00023ac7) grid_highlight_pane_cp11_ParamLimits

0x60b1,	// (0x00023ac7) grid_highlight_pane_cp11

0x4e70,	// (0x00022886) bg_button_pane_cp05

0xf0f3,	// (0x0002cb09) cell_graphic2_control_pane_g1

0x7db4,	// (0x000257ca) bg_touch_area_indi_pane_g1

0xe0bc,	// (0x0002bad2) aid_cmod_rocker_key_size

0xe0c6,	// (0x0002badc) aid_cmode_itu_key_size

0xe0d0,	// (0x0002bae6) main_cmode_video_pane

0xe0d8,	// (0x0002baee) main_comp_mode_itu_pane

0xe0e2,	// (0x0002baf8) main_comp_mode_rocker_pane

0xe0ea,	// (0x0002bb00) cell_cmode_rocker_pane_ParamLimits

0xe0ea,	// (0x0002bb00) cell_cmode_rocker_pane

0xe0fc,	// (0x0002bb12) cell_cmode_itu_pane_ParamLimits

0xe0fc,	// (0x0002bb12) cell_cmode_itu_pane

0x52d7,	// (0x00022ced) bg_button_pane_cp06_ParamLimits

0x52d7,	// (0x00022ced) bg_button_pane_cp06

0x7fe0,	// (0x000259f6) cell_cmode_rocker_pane_g1_ParamLimits

0x7fe0,	// (0x000259f6) cell_cmode_rocker_pane_g1

0xdd91,	// (0x0002b7a7) cell_cmode_rocker_pane_g2_ParamLimits

0xdd91,	// (0x0002b7a7) cell_cmode_rocker_pane_g2

0x0001,

0xfdc5,	// (0x0002d7db) cell_cmode_rocker_pane_g_ParamLimits

0xfdc5,	// (0x0002d7db) cell_cmode_rocker_pane_g

0x4c4d,	// (0x00022663) bg_button_pane_cp07

0xe111,	// (0x0002bb27) cell_cmode_itu_pane_g1

0xe11a,	// (0x0002bb30) cell_cmode_itu_pane_t1

0xe128,	// (0x0002bb3e) cell_cmode_itu_pane_t2

0x0001,

0xfdca,	// (0x0002d7e0) cell_cmode_itu_pane_t

0xdf00,	// (0x0002b916) aid_touch_ctrl_left

0xdf08,	// (0x0002b91e) aid_touch_ctrl_right

0x4c4d,	// (0x00022663) compa_mode_pane

0xf11b,	// (0x0002cb31) aid_cmod_rocker_key_size_cp

0xf125,	// (0x0002cb3b) aid_cmode_itu_key_size_cp

0xe136,	// (0x0002bb4c) compa_mode_pane_g1

0xe13e,	// (0x0002bb54) compa_mode_pane_g2

0xe146,	// (0x0002bb5c) compa_mode_pane_g3

0x0002,

0xfdcf,	// (0x0002d7e5) compa_mode_pane_g

0xf12f,	// (0x0002cb45) main_comp_mode_itu_pane_cp

0xf137,	// (0x0002cb4d) main_comp_mode_rocker_pane_cp

0xf13f,	// (0x0002cb55) cell_cmode_itu_pane_cp_ParamLimits

0xf13f,	// (0x0002cb55) cell_cmode_itu_pane_cp

0xf154,	// (0x0002cb6a) cell_cmode_rocker_pane_cp_ParamLimits

0xf154,	// (0x0002cb6a) cell_cmode_rocker_pane_cp

0x52d7,	// (0x00022ced) bg_button_pane_cp06_cp_ParamLimits

0x52d7,	// (0x00022ced) bg_button_pane_cp06_cp

0x7fe0,	// (0x000259f6) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7fe0,	// (0x000259f6) cell_cmode_rocker_pane_g1_cp

0x7db4,	// (0x000257ca) cell_cmode_rocker_pane_g2_cp

0x4c4d,	// (0x00022663) bg_button_pane_cp07_cp

0xf166,	// (0x0002cb7c) cell_cmode_itu_pane_g1_cp

0xf16f,	// (0x0002cb85) cell_cmode_itu_pane_t1_cp

0xf17d,	// (0x0002cb93) cell_cmode_itu_pane_t2_cp

0xb549,	// (0x00028f5f) settings_code_pane_cp2

0x4d3d,	// (0x00022753) bg_popup_window_pane_cp3_ParamLimits

0x506e,	// (0x00022a84) heading_pane_cp3_ParamLimits

0x507a,	// (0x00022a90) listscroll_popup_graphic_pane_ParamLimits

0xb9ac,	// (0x000293c2) fep_hwr_aid_pane_ParamLimits

0xc385,	// (0x00029d9b) aid_touch_sctrl_top_ParamLimits

0xc3a0,	// (0x00029db6) sctrl_sk_top_pane_g1_ParamLimits

0xbcd5,	// (0x000296eb) sctrl_sk_top_pane_g2_ParamLimits

0xfd05,	// (0x0002d71b) sctrl_sk_top_pane_g_ParamLimits

0xc3ad,	// (0x00029dc3) sctrl_sk_top_pane_t1_ParamLimits

0xc385,	// (0x00029d9b) aid_touch_sctrl_bottom_ParamLimits

0xc3ad,	// (0x00029dc3) sctrl_sk_bottom_pane_t1_ParamLimits

0xde4a,	// (0x0002b860) aid_area_touch_clock

0xc573,	// (0x00029f89) aid_vkb2_area_top_pane_cell_ParamLimits

0xc573,	// (0x00029f89) aid_vkb2_area_top_pane_cell

0xc69e,	// (0x0002a0b4) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc69e,	// (0x0002a0b4) aid_vkb2_area_bottom_pane_cell

0xe043,	// (0x0002ba59) popup_char_count_window

0xe14e,	// (0x0002bb64) popup_char_count_window_g1

0xe157,	// (0x0002bb6d) popup_char_count_window_g2

0xe160,	// (0x0002bb76) popup_char_count_window_g3

0x0002,

0xfdd6,	// (0x0002d7ec) popup_char_count_window_g

0xe169,	// (0x0002bb7f) popup_char_count_window_t1

0xc461,	// (0x00029e77) popup_fep_char_preview_window_ParamLimits

0xc461,	// (0x00029e77) popup_fep_char_preview_window

0xc591,	// (0x00029fa7) vkb2_top_candi_pane_ParamLimits

0xc591,	// (0x00029fa7) vkb2_top_candi_pane

0xf18b,	// (0x0002cba1) cell_vkb2_top_candi_pane_ParamLimits

0xf18b,	// (0x0002cba1) cell_vkb2_top_candi_pane

0xc95f,	// (0x0002a375) bg_popup_fep_char_preview_window_ParamLimits

0xc95f,	// (0x0002a375) bg_popup_fep_char_preview_window

0xc96d,	// (0x0002a383) popup_fep_char_preview_window_t1_ParamLimits

0xc96d,	// (0x0002a383) popup_fep_char_preview_window_t1

0xe177,	// (0x0002bb8d) bg_popup_fep_char_preview_window_g1

0xe17f,	// (0x0002bb95) bg_popup_fep_char_preview_window_g2

0xe187,	// (0x0002bb9d) bg_popup_fep_char_preview_window_g3

0xe18f,	// (0x0002bba5) bg_popup_fep_char_preview_window_g4

0xe197,	// (0x0002bbad) bg_popup_fep_char_preview_window_g5

0xc9a7,	// (0x0002a3bd) bg_popup_fep_char_preview_window_g6

0xe19f,	// (0x0002bbb5) bg_popup_fep_char_preview_window_g7

0xe1a7,	// (0x0002bbbd) bg_popup_fep_char_preview_window_g8

0xe1af,	// (0x0002bbc5) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddd,	// (0x0002d7f3) bg_popup_fep_char_preview_window_g

0xbcd5,	// (0x000296eb) cell_vkb2_top_candi_pane_g1_ParamLimits

0xbcd5,	// (0x000296eb) cell_vkb2_top_candi_pane_g1

0xbce3,	// (0x000296f9) cell_vkb2_top_candi_pane_g2_ParamLimits

0xbce3,	// (0x000296f9) cell_vkb2_top_candi_pane_g2

0xd9e5,	// (0x0002b3fb) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd9e5,	// (0x0002b3fb) cell_vkb2_top_candi_pane_g3

0xc9af,	// (0x0002a3c5) cell_vkb2_top_candi_pane_g4_ParamLimits

0xc9af,	// (0x0002a3c5) cell_vkb2_top_candi_pane_g4

0x8230,	// (0x00025c46) cell_vkb2_top_candi_pane_g5_ParamLimits

0x8230,	// (0x00025c46) cell_vkb2_top_candi_pane_g5

0xc9d0,	// (0x0002a3e6) cell_vkb2_top_candi_pane_g6_ParamLimits

0xc9d0,	// (0x0002a3e6) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf0,	// (0x0002d806) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf0,	// (0x0002d806) cell_vkb2_top_candi_pane_g

0xc9de,	// (0x0002a3f4) cell_vkb2_top_candi_pane_t1

0xb389,	// (0x00028d9f) aid_size_touch_slider_mark_ParamLimits

0xb389,	// (0x00028d9f) aid_size_touch_slider_mark

0xef1d,	// (0x0002c933) grid_graphic2_catg_pane_ParamLimits

0xef1d,	// (0x0002c933) grid_graphic2_catg_pane

0xef9b,	// (0x0002c9b1) popup_grid_graphic2_window_t1_ParamLimits

0xef9b,	// (0x0002c9b1) popup_grid_graphic2_window_t1

0xefad,	// (0x0002c9c3) popup_grid_graphic2_window_t2_ParamLimits

0xefad,	// (0x0002c9c3) popup_grid_graphic2_window_t2

0x0001,

0xfdab,	// (0x0002d7c1) popup_grid_graphic2_window_t_ParamLimits

0xfdab,	// (0x0002d7c1) popup_grid_graphic2_window_t

0x4e70,	// (0x00022886) bg_button_pane_cp05_ParamLimits

0xf0f3,	// (0x0002cb09) cell_graphic2_control_pane_g1_ParamLimits

0xf1c4,	// (0x0002cbda) cell_graphic2_catg_pane_ParamLimits

0xf1c4,	// (0x0002cbda) cell_graphic2_catg_pane

0x4c4d,	// (0x00022663) bg_button_pane_cp12

0xf1d6,	// (0x0002cbec) cell_graphic2_catg_pane_g1

0xde16,	// (0x0002b82c) cell_tb_ext_pane_t1_ParamLimits

0xc7a9,	// (0x0002a1bf) vkb2_top_cell_right_narrow_pane_ParamLimits

0xc7a9,	// (0x0002a1bf) vkb2_top_cell_right_narrow_pane

0xc7c1,	// (0x0002a1d7) vkb2_top_cell_right_wide_pane_ParamLimits

0xc7c1,	// (0x0002a1d7) vkb2_top_cell_right_wide_pane

0xb99e,	// (0x000293b4) bg_vkb2_func_pane_ParamLimits

0xb99e,	// (0x000293b4) bg_vkb2_func_pane

0xc832,	// (0x0002a248) vkb2_top_cell_left_pane_g1_ParamLimits

0xb99e,	// (0x000293b4) bg_vkb2_fuc_pane_cp03_ParamLimits

0xb99e,	// (0x000293b4) bg_vkb2_fuc_pane_cp03

0xc890,	// (0x0002a2a6) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x6017,	// (0x00023a2d) bg_vkb2_func_pane_g1

0x600f,	// (0x00023a25) bg_vkb2_func_pane_g2

0x601f,	// (0x00023a35) bg_vkb2_func_pane_g3

0x6027,	// (0x00023a3d) bg_vkb2_func_pane_g4

0x602f,	// (0x00023a45) bg_vkb2_func_pane_g5

0x6037,	// (0x00023a4d) bg_vkb2_func_pane_g6

0x6047,	// (0x00023a5d) bg_vkb2_func_pane_g7

0x603f,	// (0x00023a55) bg_vkb2_func_pane_g8

0x6007,	// (0x00023a1d) bg_vkb2_func_pane_g9

0x0008,

0xfdfd,	// (0x0002d813) bg_vkb2_func_pane_g

0xb99e,	// (0x000293b4) bg_vkb2_fuc_pane_cp01_ParamLimits

0xb99e,	// (0x000293b4) bg_vkb2_fuc_pane_cp01

0xc832,	// (0x0002a248) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xc832,	// (0x0002a248) vkb2_top_cell_right_wide_pane_g1

0xb99e,	// (0x000293b4) bg_vkb2_fuc_pane_cp02_ParamLimits

0xb99e,	// (0x000293b4) bg_vkb2_fuc_pane_cp02

0xc890,	// (0x0002a2a6) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xc890,	// (0x0002a2a6) vkb2_top_cell_right_narrow_pane_g1

0xc24a,	// (0x00029c60) aid_touch_area_decrease_ParamLimits

0xc24a,	// (0x00029c60) aid_touch_area_decrease

0xc262,	// (0x00029c78) aid_touch_area_increase_ParamLimits

0xc262,	// (0x00029c78) aid_touch_area_increase

0xc26e,	// (0x00029c84) aid_touch_area_mute_ParamLimits

0xc26e,	// (0x00029c84) aid_touch_area_mute

0xc28a,	// (0x00029ca0) aid_touch_area_slider_ParamLimits

0xc28a,	// (0x00029ca0) aid_touch_area_slider

0xc2c4,	// (0x00029cda) popup_slider_window_g4_ParamLimits

0xc2c4,	// (0x00029cda) popup_slider_window_g4

0xc2d0,	// (0x00029ce6) popup_slider_window_g5_ParamLimits

0xc2d0,	// (0x00029ce6) popup_slider_window_g5

0xc2f2,	// (0x00029d08) popup_slider_window_g6_ParamLimits

0xc2f2,	// (0x00029d08) popup_slider_window_g6

0x8ddc,	// (0x000267f2) popup_slider_window_t2_ParamLimits

0x8ddc,	// (0x000267f2) popup_slider_window_t2

0x0001,

0xfcf9,	// (0x0002d70f) popup_slider_window_t_ParamLimits

0xfcf9,	// (0x0002d70f) popup_slider_window_t

0xc304,	// (0x00029d1a) slider_pane_ParamLimits

0xc304,	// (0x00029d1a) slider_pane

0xe1b7,	// (0x0002bbcd) slider_pane_g1_ParamLimits

0xe1b7,	// (0x0002bbcd) slider_pane_g1

0xe1cb,	// (0x0002bbe1) slider_pane_g2_ParamLimits

0xe1cb,	// (0x0002bbe1) slider_pane_g2

0xe1e1,	// (0x0002bbf7) slider_pane_g3_ParamLimits

0xe1e1,	// (0x0002bbf7) slider_pane_g3

0x0003,

0xfe10,	// (0x0002d826) slider_pane_g_ParamLimits

0xfe10,	// (0x0002d826) slider_pane_g

0xab81,	// (0x00028597) popup_tb_float_extension_window_ParamLimits

0xab81,	// (0x00028597) popup_tb_float_extension_window

0xe20d,	// (0x0002bc23) aid_size_cell_tb_float_ext

0x4c4d,	// (0x00022663) bg_popup_sub_window_cp28

0xe218,	// (0x0002bc2e) grid_tb_float_ext_pane

0xe220,	// (0x0002bc36) cell_tb_float_ext_pane_ParamLimits

0xe220,	// (0x0002bc36) cell_tb_float_ext_pane

0xe238,	// (0x0002bc4e) cell_tb_float_ext_pane_g1

0xe241,	// (0x0002bc57) grid_highlight_pane_cp12

0xbae7,	// (0x000294fd) cell_last_hwr_side_pane_ParamLimits

0xbae7,	// (0x000294fd) cell_last_hwr_side_pane

0x7db4,	// (0x000257ca) cell_last_hwr_side_pane_g1

0xe24a,	// (0x0002bc60) cell_last_hwr_side_pane_g2

0x0001,

0xfe19,	// (0x0002d82f) cell_last_hwr_side_pane_g

0xc766,	// (0x0002a17c) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc766,	// (0x0002a17c) vkb2_area_bottom_space_btn_pane

0xbcd5,	// (0x000296eb) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe0aa,	// (0x0002bac0) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xc9de,	// (0x0002a3f4) cell_vkb2_top_candi_pane_t1_ParamLimits

0xc9f4,	// (0x0002a40a) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xc9f4,	// (0x0002a40a) vkb2_area_bottom_space_btn_pane_g1

0xca2a,	// (0x0002a440) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xca2a,	// (0x0002a440) vkb2_area_bottom_space_btn_pane_g2

0xca60,	// (0x0002a476) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xca60,	// (0x0002a476) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1e,	// (0x0002d834) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1e,	// (0x0002d834) vkb2_area_bottom_space_btn_pane_g

0xba5b,	// (0x00029471) cel_fep_hwr_func_pane_ParamLimits

0xba5b,	// (0x00029471) cel_fep_hwr_func_pane

0xba97,	// (0x000294ad) cell_hwr_side_button_pane_ParamLimits

0xba97,	// (0x000294ad) cell_hwr_side_button_pane

0xde4a,	// (0x0002b860) aid_area_touch_clock_ParamLimits

0x4e70,	// (0x00022886) bg_uniindi_top_pane_ParamLimits

0xde5c,	// (0x0002b872) uniindi_top_pane_g1_ParamLimits

0xde72,	// (0x0002b888) uniindi_top_pane_g2_ParamLimits

0xde7e,	// (0x0002b894) uniindi_top_pane_g3_ParamLimits

0xde8f,	// (0x0002b8a5) uniindi_top_pane_g4_ParamLimits

0xfd31,	// (0x0002d747) uniindi_top_pane_g_ParamLimits

0xde9c,	// (0x0002b8b2) uniindi_top_pane_t1_ParamLimits

0x4e70,	// (0x00022886) bg_vkb2_func_pane_cp01_ParamLimits

0x4e70,	// (0x00022886) bg_vkb2_func_pane_cp01

0xe253,	// (0x0002bc69) cel_fep_hwr_func_pane_g1_ParamLimits

0xe253,	// (0x0002bc69) cel_fep_hwr_func_pane_g1

0x4e70,	// (0x00022886) bg_vkb2_func_pane_cp02_ParamLimits

0x4e70,	// (0x00022886) bg_vkb2_func_pane_cp02

0xe253,	// (0x0002bc69) cell_hwr_side_button_pane_g1_ParamLimits

0xe253,	// (0x0002bc69) cell_hwr_side_button_pane_g1

0x5f2b,	// (0x00023941) status_pane_g4_ParamLimits

0x5f2b,	// (0x00023941) status_pane_g4

0x5f43,	// (0x00023959) status_pane_t1

0x7ba4,	// (0x000255ba) form2_midp_gauge_slider_cont_pane

0x7bac,	// (0x000255c2) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb97a,	// (0x00029390) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb98c,	// (0x000293a2) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf8,	// (0x0002d50e) form2_midp_gauge_slider_pane_t_ParamLimits

0x7bbe,	// (0x000255d4) form2_midp_slider_pane_ParamLimits

0xc421,	// (0x00029e37) aid_size_cell_func_vkb2_ParamLimits

0xc421,	// (0x00029e37) aid_size_cell_func_vkb2

0xe1f9,	// (0x0002bc0f) slider_pane_g4_ParamLimits

0xe1f9,	// (0x0002bc0f) slider_pane_g4

0xcaa6,	// (0x0002a4bc) form2_midp_gauge_slider_pane_t2_cp01

0xcab4,	// (0x0002a4ca) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcab4,	// (0x0002a4ca) form2_midp_gauge_slider_pane_t3_cp01

0xcad1,	// (0x0002a4e7) form2_midp_slider_pane_cp01

0x4c4d,	// (0x00022663) navi_smil_pane

0xe283,	// (0x0002bc99) navi_smil_pane_g1

0xe28b,	// (0x0002bca1) navi_smil_pane_t1

0xe261,	// (0x0002bc77) form2_midp_slider_pane_g1

0xe26a,	// (0x0002bc80) form2_midp_slider_pane_g2

0xe272,	// (0x0002bc88) form2_midp_slider_pane_g3

0xe261,	// (0x0002bc77) form2_midp_slider_pane_g4

0xf1df,	// (0x0002cbf5) form2_midp_slider_pane_g5

0x0004,

0xfe27,	// (0x0002d83d) form2_midp_slider_pane_g

0xca96,	// (0x0002a4ac) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xca96,	// (0x0002a4ac) vkb2_area_bottom_space_btn_pane_g4

0xad0f,	// (0x00028725) lc0_navi_pane_ParamLimits

0xad0f,	// (0x00028725) lc0_navi_pane

0xad85,	// (0x0002879b) lc0_stat_indi_pane_ParamLimits

0xad85,	// (0x0002879b) lc0_stat_indi_pane

0xad9c,	// (0x000287b2) ls0_title_pane_ParamLimits

0xad9c,	// (0x000287b2) ls0_title_pane

0x52d7,	// (0x00022ced) bg_popup_sub_pane_cp14_ParamLimits

0xde31,	// (0x0002b847) list_uniindi_pane_ParamLimits

0xde3d,	// (0x0002b853) uniindi_top_pane_ParamLimits

0xded8,	// (0x0002b8ee) list_single_uniindi_pane_g1_ParamLimits

0xdeeb,	// (0x0002b901) list_single_uniindi_pane_t1_ParamLimits

0xcada,	// (0x0002a4f0) lc0_stat_clock_pane_ParamLimits

0xcada,	// (0x0002a4f0) lc0_stat_clock_pane

0xf1e8,	// (0x0002cbfe) lc0_stat_indi_pane_g1_ParamLimits

0xf1e8,	// (0x0002cbfe) lc0_stat_indi_pane_g1

0xf1f5,	// (0x0002cc0b) lc0_stat_indi_pane_g2_ParamLimits

0xf1f5,	// (0x0002cc0b) lc0_stat_indi_pane_g2

0x0001,

0xfe32,	// (0x0002d848) lc0_stat_indi_pane_g_ParamLimits

0xfe32,	// (0x0002d848) lc0_stat_indi_pane_g

0xcae7,	// (0x0002a4fd) lc0_uni_indicator_pane_ParamLimits

0xcae7,	// (0x0002a4fd) lc0_uni_indicator_pane

0xe299,	// (0x0002bcaf) ls0_title_pane_g1_ParamLimits

0xe299,	// (0x0002bcaf) ls0_title_pane_g1

0xf202,	// (0x0002cc18) ls0_title_pane_t1_ParamLimits

0xf202,	// (0x0002cc18) ls0_title_pane_t1

0xcaf4,	// (0x0002a50a) lc0_uni_indicator_pane_g1_ParamLimits

0xcaf4,	// (0x0002a50a) lc0_uni_indicator_pane_g1

0xe2ad,	// (0x0002bcc3) lc0_stat_clock_pane_t1

0x993b,	// (0x00027351) main_ai5_pane

0xe2bb,	// (0x0002bcd1) ai5_sk_pane_ParamLimits

0xe2bb,	// (0x0002bcd1) ai5_sk_pane

0xf238,	// (0x0002cc4e) cell_ai5_widget_pane_ParamLimits

0xf238,	// (0x0002cc4e) cell_ai5_widget_pane

0xe2c8,	// (0x0002bcde) aid_size_cell_widget_grid

0xe2d5,	// (0x0002bceb) bg_ai5_widget_pane_ParamLimits

0xe2d5,	// (0x0002bceb) bg_ai5_widget_pane

0xf2cb,	// (0x0002cce1) cell_ai5_widget_pane_g2

0xf2df,	// (0x0002ccf5) cell_ai5_widget_pane_g3

0xf2f9,	// (0x0002cd0f) cell_ai5_widget_pane_g4

0xf309,	// (0x0002cd1f) cell_ai5_widget_pane_g5

0xf319,	// (0x0002cd2f) cell_ai5_widget_pane_g6

0xf325,	// (0x0002cd3b) cell_ai5_widget_pane_g7

0xf36d,	// (0x0002cd83) cell_ai5_widget_pane_t1_ParamLimits

0xf36d,	// (0x0002cd83) cell_ai5_widget_pane_t1

0xf38a,	// (0x0002cda0) cell_ai5_widget_pane_t2_ParamLimits

0xf38a,	// (0x0002cda0) cell_ai5_widget_pane_t2

0xf3a2,	// (0x0002cdb8) cell_ai5_widget_pane_t3_ParamLimits

0xf3a2,	// (0x0002cdb8) cell_ai5_widget_pane_t3

0xf3ba,	// (0x0002cdd0) cell_ai5_widget_pane_t4_ParamLimits

0xf3ba,	// (0x0002cdd0) cell_ai5_widget_pane_t4

0xf3e0,	// (0x0002cdf6) cell_ai5_widget_pane_t5_ParamLimits

0xf3e0,	// (0x0002cdf6) cell_ai5_widget_pane_t5

0xe30d,	// (0x0002bd23) cell_ai5_widget_pane_t6_ParamLimits

0xe30d,	// (0x0002bd23) cell_ai5_widget_pane_t6

0xe31f,	// (0x0002bd35) cell_ai5_widget_pane_t7_ParamLimits

0xe31f,	// (0x0002bd35) cell_ai5_widget_pane_t7

0xf3ff,	// (0x0002ce15) cell_ai5_widget_pane_t8_ParamLimits

0xf3ff,	// (0x0002ce15) cell_ai5_widget_pane_t8

0x0009,

0xfe4c,	// (0x0002d862) cell_ai5_widget_pane_t_ParamLimits

0xfe4c,	// (0x0002d862) cell_ai5_widget_pane_t

0xf45e,	// (0x0002ce74) grid_ai5_widget_pane

0x52d7,	// (0x00022ced) highlight_cell_ai5_widget_pane_ParamLimits

0x52d7,	// (0x00022ced) highlight_cell_ai5_widget_pane

0xf46a,	// (0x0002ce80) ai5_sk_left_pane

0xf474,	// (0x0002ce8a) ai5_sk_middle_pane

0xf47e,	// (0x0002ce94) ai5_sk_right_pane

0xe338,	// (0x0002bd4e) bg_ai5_widget_pane_g1_ParamLimits

0xe338,	// (0x0002bd4e) bg_ai5_widget_pane_g1

0xe344,	// (0x0002bd5a) bg_ai5_widget_pane_g2_ParamLimits

0xe344,	// (0x0002bd5a) bg_ai5_widget_pane_g2

0xe350,	// (0x0002bd66) bg_ai5_widget_pane_g3_ParamLimits

0xe350,	// (0x0002bd66) bg_ai5_widget_pane_g3

0xe35c,	// (0x0002bd72) bg_ai5_widget_pane_g4_ParamLimits

0xe35c,	// (0x0002bd72) bg_ai5_widget_pane_g4

0xe368,	// (0x0002bd7e) bg_ai5_widget_pane_g5_ParamLimits

0xe368,	// (0x0002bd7e) bg_ai5_widget_pane_g5

0xe374,	// (0x0002bd8a) bg_ai5_widget_pane_g6_ParamLimits

0xe374,	// (0x0002bd8a) bg_ai5_widget_pane_g6

0xe380,	// (0x0002bd96) bg_ai5_widget_pane_g7_ParamLimits

0xe380,	// (0x0002bd96) bg_ai5_widget_pane_g7

0xe38c,	// (0x0002bda2) bg_ai5_widget_pane_g8_ParamLimits

0xe38c,	// (0x0002bda2) bg_ai5_widget_pane_g8

0xe398,	// (0x0002bdae) bg_ai5_widget_pane_g9_ParamLimits

0xe398,	// (0x0002bdae) bg_ai5_widget_pane_g9

0x0008,

0xfe61,	// (0x0002d877) bg_ai5_widget_pane_g_ParamLimits

0xfe61,	// (0x0002d877) bg_ai5_widget_pane_g

0xe3c8,	// (0x0002bdde) cell_shortcut_ai5_widget_pane_ParamLimits

0xe3c8,	// (0x0002bdde) cell_shortcut_ai5_widget_pane

0xe3d9,	// (0x0002bdef) bg_cell_shortcut_ai5_widget_pane

0x502a,	// (0x00022a40) cell_grid_ai5_widget_pane_g1

0x5c7b,	// (0x00023691) highlight_cell_shortcut_ai5_widget_pane

0x6017,	// (0x00023a2d) ai5_sk_left_pane_g1

0xe3e1,	// (0x0002bdf7) ai5_sk_left_pane_g2

0xe3e9,	// (0x0002bdff) ai5_sk_left_pane_g3

0xe3f1,	// (0x0002be07) ai5_sk_left_pane_g4

0x0003,

0xfe74,	// (0x0002d88a) ai5_sk_left_pane_g

0xe3f9,	// (0x0002be0f) ai5_sk_left_pane_t1

0x600f,	// (0x00023a25) ai5_sk_right_pane_g1

0xe407,	// (0x0002be1d) ai5_sk_right_pane_g2

0xe40f,	// (0x0002be25) ai5_sk_right_pane_g3

0xe417,	// (0x0002be2d) ai5_sk_right_pane_g4

0x0003,

0xfe7d,	// (0x0002d893) ai5_sk_right_pane_g

0xe41f,	// (0x0002be35) ai5_sk_right_pane_t1

0x600f,	// (0x00023a25) ai5_sk_middle_pane_g1

0x6017,	// (0x00023a2d) ai5_sk_middle_pane_g2

0x602f,	// (0x00023a45) ai5_sk_middle_pane_g3

0xe40f,	// (0x0002be25) ai5_sk_middle_pane_g4

0xe3e9,	// (0x0002bdff) ai5_sk_middle_pane_g5

0xe42d,	// (0x0002be43) ai5_sk_middle_pane_g6

0xf488,	// (0x0002ce9e) ai5_sk_middle_pane_g7

0x0006,

0xfe86,	// (0x0002d89c) ai5_sk_middle_pane_g

0xac5c,	// (0x00028672) aid_touch_area_size_lc0_ParamLimits

0xac5c,	// (0x00028672) aid_touch_area_size_lc0

0xbd04,	// (0x0002971a) cell_hwr_candidate_pane_t1_ParamLimits

0x5e60,	// (0x00023876) aid_touch_navi_pane

0xae6e,	// (0x00028884) status_dt_navi_pane_ParamLimits

0xae6e,	// (0x00028884) status_dt_navi_pane

0xae7b,	// (0x00028891) status_dt_sta_pane_ParamLimits

0xae7b,	// (0x00028891) status_dt_sta_pane

0xf490,	// (0x0002cea6) dt_sta_controll_pane

0xf49d,	// (0x0002ceb3) dt_sta_indi_pane

0xf4ae,	// (0x0002cec4) dt_sta_title_pane

0x4e70,	// (0x00022886) bg_dt_sta_indi_pane_ParamLimits

0x4e70,	// (0x00022886) bg_dt_sta_indi_pane

0xf4c1,	// (0x0002ced7) dt_sta_battery_pane

0xf4c9,	// (0x0002cedf) dt_sta_indi_pane_g1

0xf4d2,	// (0x0002cee8) dt_sta_indi_pane_g2

0xf4db,	// (0x0002cef1) dt_sta_indi_pane_g3

0x0002,

0xfe95,	// (0x0002d8ab) dt_sta_indi_pane_g

0xf4e4,	// (0x0002cefa) dt_sta_signal_pane

0x52d7,	// (0x00022ced) bg_dt_sta_title_pane_ParamLimits

0x52d7,	// (0x00022ced) bg_dt_sta_title_pane

0xf4ed,	// (0x0002cf03) dt_sta_title_pane_g1

0xf4f5,	// (0x0002cf0b) dt_sta_title_pane_t1_ParamLimits

0xf4f5,	// (0x0002cf0b) dt_sta_title_pane_t1

0x4c4d,	// (0x00022663) bg_dt_sta_control_pane

0xf50a,	// (0x0002cf20) dt_sta_controll_pane_g1

0xf513,	// (0x0002cf29) bg_dt_sta_title_pane_g1

0xf51c,	// (0x0002cf32) bg_dt_sta_title_pane_g2

0xf525,	// (0x0002cf3b) bg_dt_sta_title_pane_g3

0x0002,

0xfe9c,	// (0x0002d8b2) bg_dt_sta_title_pane_g

0x7db4,	// (0x000257ca) bg_dt_sta_indi_pane_g1

0xf52e,	// (0x0002cf44) dt_sta_signal_pane_g1

0xf536,	// (0x0002cf4c) dt_sta_signal_pane_g2

0x0001,

0xfea3,	// (0x0002d8b9) dt_sta_signal_pane_g

0xe435,	// (0x0002be4b) dt_sta_battery_pane_g1

0xe43e,	// (0x0002be54) dt_sta_battery_pane_t1

0x7db4,	// (0x000257ca) bg_dt_sta_control_pane_g1

0x584b,	// (0x00023261) fep_china_uni_eep_pane

0x5853,	// (0x00023269) fep_china_uni_entry_pane_ParamLimits

0x5863,	// (0x00023279) popup_fep_china_uni_window_g1_ParamLimits

0x5873,	// (0x00023289) popup_fep_china_uni_window_g2_ParamLimits

0x5873,	// (0x00023289) popup_fep_china_uni_window_g2

0x0001,

0xf713,	// (0x0002d129) popup_fep_china_uni_window_g_ParamLimits

0xf713,	// (0x0002d129) popup_fep_china_uni_window_g

0xe44d,	// (0x0002be63) fep_china_uni_eep_pane_g1

0xe455,	// (0x0002be6b) fep_china_uni_eep_pane_t1

0xe27a,	// (0x0002bc90) aid_touch_area_size_smil_player

0x5efe,	// (0x00023914) lc0_clock_pane

0x5f37,	// (0x0002394d) status_pane_g5_ParamLimits

0x5f37,	// (0x0002394d) status_pane_g5

0xa8f5,	// (0x0002830b) popup_keymap_window

0x5f17,	// (0x0002392d) status_icon_pane

0xf2df,	// (0x0002ccf5) cell_ai5_widget_pane_g3_ParamLimits

0xf2f9,	// (0x0002cd0f) cell_ai5_widget_pane_g4_ParamLimits

0xf309,	// (0x0002cd1f) cell_ai5_widget_pane_g5_ParamLimits

0xf331,	// (0x0002cd47) cell_ai5_widget_pane_g8_ParamLimits

0xf331,	// (0x0002cd47) cell_ai5_widget_pane_g8

0xf345,	// (0x0002cd5b) cell_ai5_widget_pane_g9_ParamLimits

0xf345,	// (0x0002cd5b) cell_ai5_widget_pane_g9

0xf359,	// (0x0002cd6f) cell_ai5_widget_pane_g10_ParamLimits

0xf359,	// (0x0002cd6f) cell_ai5_widget_pane_g10

0xe464,	// (0x0002be7a) status_icon_pane_g1

0x4c4d,	// (0x00022663) bg_popup_sub_pane_cp13

0xe46c,	// (0x0002be82) popup_keymap_window_t1

0xa66a,	// (0x00028080) control_pane_g6_ParamLimits

0xa66a,	// (0x00028080) control_pane_g6

0xa677,	// (0x0002808d) control_pane_g7_ParamLimits

0xa677,	// (0x0002808d) control_pane_g7

0xa684,	// (0x0002809a) control_pane_g8_ParamLimits

0xa684,	// (0x0002809a) control_pane_g8

0xf490,	// (0x0002cea6) dt_sta_controll_pane_ParamLimits

0xf49d,	// (0x0002ceb3) dt_sta_indi_pane_ParamLimits

0xf4ae,	// (0x0002cec4) dt_sta_title_pane_ParamLimits

0x5228,	// (0x00022c3e) aid_size_touch_scroll_bar_cale

0x9a12,	// (0x00027428) popup_discreet_window_ParamLimits

0x9a12,	// (0x00027428) popup_discreet_window

0x9a76,	// (0x0002748c) popup_sk_window

0x65f1,	// (0x00024007) bg_popup_sub_pane_cp28_ParamLimits

0x65f1,	// (0x00024007) bg_popup_sub_pane_cp28

0xe47a,	// (0x0002be90) popup_discreet_window_g1_ParamLimits

0xe47a,	// (0x0002be90) popup_discreet_window_g1

0xe49a,	// (0x0002beb0) popup_discreet_window_t1_ParamLimits

0xe49a,	// (0x0002beb0) popup_discreet_window_t1

0xe4b8,	// (0x0002bece) popup_discreet_window_t2_ParamLimits

0xe4b8,	// (0x0002bece) popup_discreet_window_t2

0x0002,

0xfea8,	// (0x0002d8be) popup_discreet_window_t_ParamLimits

0xfea8,	// (0x0002d8be) popup_discreet_window_t

0xcb06,	// (0x0002a51c) popup_sk_window_g1

0xcb0f,	// (0x0002a525) popup_sk_window_g2

0x0001,

0xfeaf,	// (0x0002d8c5) popup_sk_window_g

0xcb18,	// (0x0002a52e) popup_sk_window_t1

0xcb26,	// (0x0002a53c) popup_sk_window_t1_copy1

0xf2cb,	// (0x0002cce1) cell_ai5_widget_pane_g2_ParamLimits

0xf411,	// (0x0002ce27) cell_ai5_widget_pane_t9_ParamLimits

0xf411,	// (0x0002ce27) cell_ai5_widget_pane_t9

0x4c4d,	// (0x00022663) main_fep_fshwr2_pane

0xcb34,	// (0x0002a54a) aid_fshwr2_btn_pane

0xcb40,	// (0x0002a556) aid_fshwr2_syb_pane

0xcb4c,	// (0x0002a562) aid_fshwr2_txt_pane

0xcb58,	// (0x0002a56e) fshwr2_func_candi_pane

0xcb69,	// (0x0002a57f) fshwr2_hwr_syb_pane

0xcb75,	// (0x0002a58b) fshwr2_icf_pane

0x993b,	// (0x00027351) fshwr2_icf_bg_pane

0xcb9a,	// (0x0002a5b0) fshwr2_icf_pane_t1_ParamLimits

0xcb9a,	// (0x0002a5b0) fshwr2_icf_pane_t1

0x57e9,	// (0x000231ff) fshwr2_func_candi_pane_g1

0xf53e,	// (0x0002cf54) fshwr2_func_candi_row_pane_ParamLimits

0xf53e,	// (0x0002cf54) fshwr2_func_candi_row_pane

0xcbb2,	// (0x0002a5c8) cell_fshwr2_syb_pane_ParamLimits

0xcbb2,	// (0x0002a5c8) cell_fshwr2_syb_pane

0xbcd5,	// (0x000296eb) fshwr2_hwr_syb_pane_g1_ParamLimits

0xbcd5,	// (0x000296eb) fshwr2_hwr_syb_pane_g1

0x993b,	// (0x00027351) bg_popup_call_pane_cp01

0xcbc6,	// (0x0002a5dc) fshwr2_func_candi_cell_pane_ParamLimits

0xcbc6,	// (0x0002a5dc) fshwr2_func_candi_cell_pane

0x6bd9,	// (0x000245ef) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x6bd9,	// (0x000245ef) fshwr2_func_candi_cell_bg_pane

0xcc05,	// (0x0002a61b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcc05,	// (0x0002a61b) fshwr2_func_candi_cell_pane_g1

0xcc25,	// (0x0002a63b) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xcc25,	// (0x0002a63b) fshwr2_func_candi_cell_pane_t1

0x993b,	// (0x00027351) bg_button_pane_cp08

0x5c7b,	// (0x00023691) cell_fshwr2_syb_bg_pane

0xcc38,	// (0x0002a64e) cell_fshwr2_syb_bg_pane_g1

0xcc40,	// (0x0002a656) cell_fshwr2_syb_bg_pane_t1

0x52d7,	// (0x00022ced) main_tmo_pane

0xb2f8,	// (0x00028d0e) uni_indicator_pane_g1_ParamLimits

0xb30e,	// (0x00028d24) uni_indicator_pane_g2_ParamLimits

0xb324,	// (0x00028d3a) uni_indicator_pane_g3_ParamLimits

0x6f7d,	// (0x00024993) uni_indicator_pane_g4_ParamLimits

0x6f7d,	// (0x00024993) uni_indicator_pane_g4

0x6f91,	// (0x000249a7) uni_indicator_pane_g5_ParamLimits

0x6f91,	// (0x000249a7) uni_indicator_pane_g5

0x6f91,	// (0x000249a7) uni_indicator_pane_g6_ParamLimits

0x6f91,	// (0x000249a7) uni_indicator_pane_g6

0xf917,	// (0x0002d32d) uni_indicator_pane_g_ParamLimits

0xc22e,	// (0x00029c44) popup_tmo_note_window_ParamLimits

0xc22e,	// (0x00029c44) popup_tmo_note_window

0xc3fd,	// (0x00029e13) fshwr2_bg_pane

0xcc16,	// (0x0002a62c) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xcc16,	// (0x0002a62c) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb4,	// (0x0002d8ca) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb4,	// (0x0002d8ca) fshwr2_func_candi_cell_pane_g

0xbcbd,	// (0x000296d3) bg_popup_window_pane_cp01

0xcc4f,	// (0x0002a665) bg_popup_window_pane_g1_cp01

0xe50a,	// (0x0002bf20) bg_popup_window_pane_cp22_ParamLimits

0xe50a,	// (0x0002bf20) bg_popup_window_pane_cp22

0xe518,	// (0x0002bf2e) listscroll_tmo_link_pane_ParamLimits

0xe518,	// (0x0002bf2e) listscroll_tmo_link_pane

0xe558,	// (0x0002bf6e) popup_tmo_note_window_g1_ParamLimits

0xe558,	// (0x0002bf6e) popup_tmo_note_window_g1

0xe565,	// (0x0002bf7b) tmo_note_info_pane_ParamLimits

0xe565,	// (0x0002bf7b) tmo_note_info_pane

0x003f,	// (0x0001da55) list_tmo_note_info_pane_g1_ParamLimits

0x003f,	// (0x0001da55) list_tmo_note_info_pane_g1

0xe57f,	// (0x0002bf95) list_tmo_note_info_pane_g2_ParamLimits

0xe57f,	// (0x0002bf95) list_tmo_note_info_pane_g2

0x0001,

0xfeb9,	// (0x0002d8cf) list_tmo_note_info_pane_g_ParamLimits

0xfeb9,	// (0x0002d8cf) list_tmo_note_info_pane_g

0xe59b,	// (0x0002bfb1) list_tmo_note_info_text_pane_ParamLimits

0xe59b,	// (0x0002bfb1) list_tmo_note_info_text_pane

0xe5dd,	// (0x0002bff3) list_tmo_link_pane

0xe5ea,	// (0x0002c000) scroll_pane_cp20

0xe5f7,	// (0x0002c00d) list_single_tmo_link_pane_ParamLimits

0xe5f7,	// (0x0002c00d) list_single_tmo_link_pane

0xe607,	// (0x0002c01d) list_single_tmo_link_pane_t1

0xe615,	// (0x0002c02b) list_tmo_note_info_text_pane_t1_ParamLimits

0xe615,	// (0x0002c02b) list_tmo_note_info_text_pane_t1

0x5391,	// (0x00022da7) aid_size_touch_scroll_bar_cp01_ParamLimits

0x5391,	// (0x00022da7) aid_size_touch_scroll_bar_cp01

0xd380,	// (0x0002ad96) aid_size_touch_slider_marker

0x9a62,	// (0x00027478) popup_settings_window_ParamLimits

0x9a62,	// (0x00027478) popup_settings_window

0xd528,	// (0x0002af3e) popup_candi_list_indi_window

0x5e60,	// (0x00023876) aid_touch_navi_pane_ParamLimits

0xc359,	// (0x00029d6f) rs_clock_indi_pane

0xc362,	// (0x00029d78) sctrl_sk_bottom_pane_ParamLimits

0xc373,	// (0x00029d89) sctrl_sk_top_pane_ParamLimits

0xc47b,	// (0x00029e91) popup_fep_tooltip_window

0xe2c8,	// (0x0002bcde) aid_size_cell_widget_grid_ParamLimits

0xf2b7,	// (0x0002cccd) cell_ai5_widget_pane_g1_ParamLimits

0xf2b7,	// (0x0002cccd) cell_ai5_widget_pane_g1

0xf319,	// (0x0002cd2f) cell_ai5_widget_pane_g6_ParamLimits

0xf325,	// (0x0002cd3b) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe37,	// (0x0002d84d) cell_ai5_widget_pane_g_ParamLimits

0xfe37,	// (0x0002d84d) cell_ai5_widget_pane_g

0xf440,	// (0x0002ce56) cell_ai5_widget_pane_t10_ParamLimits

0xf440,	// (0x0002ce56) cell_ai5_widget_pane_t10

0xf45e,	// (0x0002ce74) grid_ai5_widget_pane_ParamLimits

0xe3a4,	// (0x0002bdba) cell_contacts_ai5_widget_pane_ParamLimits

0xe3a4,	// (0x0002bdba) cell_contacts_ai5_widget_pane

0xe4cd,	// (0x0002bee3) popup_discreet_window_t3_ParamLimits

0xe4cd,	// (0x0002bee3) popup_discreet_window_t3

0xcb88,	// (0x0002a59e) popup_fshwr2_char_preview_window_ParamLimits

0xcb88,	// (0x0002a59e) popup_fshwr2_char_preview_window

0x0056,	// (0x0001da6c) tmo_note_info_pane_t1

0x006b,	// (0x0001da81) tmo_note_info_pane_t2

0x0080,	// (0x0001da96) tmo_note_info_pane_t3

0xe5b9,	// (0x0002bfcf) tmo_note_info_pane_t4

0xe5cb,	// (0x0002bfe1) tmo_note_info_pane_t5

0x0004,

0xfebe,	// (0x0002d8d4) tmo_note_info_pane_t

0xe5dd,	// (0x0002bff3) list_tmo_link_pane_ParamLimits

0xe5ea,	// (0x0002c000) scroll_pane_cp20_ParamLimits

0x993b,	// (0x00027351) bg_popup_fep_char_preview_window_cp01

0xe62e,	// (0x0002c044) popup_fshwr2_char_preview_window_t1

0xe63c,	// (0x0002c052) popup_candi_list_indi_window_g1

0xe645,	// (0x0002c05b) bg_cell_contacts_ai5_widget_pane

0xe651,	// (0x0002c067) cell_contacts_ai5_widget_pane_g1

0xe666,	// (0x0002c07c) cell_contacts_ai5_widget_pane_g2

0xe672,	// (0x0002c088) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec9,	// (0x0002d8df) cell_contacts_ai5_widget_pane_g

0xe67e,	// (0x0002c094) cell_contacts_ai5_widget_pane_t1

0x52d7,	// (0x00022ced) highlight_cell_shortcut_ai5_widget_pane_cp01

0x00f8,	// (0x0001db0e) settings_container_pane

0x5c7b,	// (0x00023691) listscroll_set_pane_copy1

0x76f2,	// (0x00025108) scroll_pane_cp121_copy1

0xe690,	// (0x0002c0a6) set_content_pane_copy1

0xe698,	// (0x0002c0ae) aid_height_set_list_copy1_ParamLimits

0xe698,	// (0x0002c0ae) aid_height_set_list_copy1

0x712a,	// (0x00024b40) aid_size_parent_copy1_ParamLimits

0x712a,	// (0x00024b40) aid_size_parent_copy1

0xe6a4,	// (0x0002c0ba) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe6a4,	// (0x0002c0ba) button_value_adjust_pane_cp6_copy1

0x545d,	// (0x00022e73) list_highlight_pane_cp2_copy1_ParamLimits

0x545d,	// (0x00022e73) list_highlight_pane_cp2_copy1

0x0104,	// (0x0001db1a) list_set_pane_copy1_ParamLimits

0x0104,	// (0x0001db1a) list_set_pane_copy1

0x0095,	// (0x0001daab) main_pane_set_t1_copy1_ParamLimits

0x0095,	// (0x0001daab) main_pane_set_t1_copy1

0x00cf,	// (0x0001dae5) main_pane_set_t2_copy1_ParamLimits

0x00cf,	// (0x0001dae5) main_pane_set_t2_copy1

0xe6b8,	// (0x0002c0ce) main_pane_set_t3_copy1

0xe6c6,	// (0x0002c0dc) main_pane_set_t4_copy1

0x00ec,	// (0x0001db02) set_content_pane_g1_copy1_ParamLimits

0x00ec,	// (0x0001db02) set_content_pane_g1_copy1

0xe6d4,	// (0x0002c0ea) setting_code_pane_copy1

0xe6dc,	// (0x0002c0f2) setting_slider_graphic_pane_copy1

0xe6dc,	// (0x0002c0f2) setting_slider_pane_copy1

0xe6dc,	// (0x0002c0f2) setting_text_pane_copy1

0xe6dc,	// (0x0002c0f2) setting_volume_pane_copy1

0xe6e4,	// (0x0002c0fa) settings_code_pane_cp2_copy1

0xe6ec,	// (0x0002c102) settings_code_pane_cp_copy1_ParamLimits

0xe6ec,	// (0x0002c102) settings_code_pane_cp_copy1

0xcc58,	// (0x0002a66e) volume_set_pane_copy1

0x019a,	// (0x0001dbb0) volume_set_pane_g10_copy1

0x01a2,	// (0x0001dbb8) volume_set_pane_g1_copy1

0x01aa,	// (0x0001dbc0) volume_set_pane_g2_copy1

0x01b2,	// (0x0001dbc8) volume_set_pane_g3_copy1

0x01ba,	// (0x0001dbd0) volume_set_pane_g4_copy1

0x01c2,	// (0x0001dbd8) volume_set_pane_g5_copy1

0x01ca,	// (0x0001dbe0) volume_set_pane_g6_copy1

0x01d2,	// (0x0001dbe8) volume_set_pane_g7_copy1

0x01da,	// (0x0001dbf0) volume_set_pane_g8_copy1

0x01e2,	// (0x0001dbf8) volume_set_pane_g9_copy1

0x4d3d,	// (0x00022753) bg_set_opt_pane_cp_copy1_ParamLimits

0x4d3d,	// (0x00022753) bg_set_opt_pane_cp_copy1

0x9c0a,	// (0x00027620) setting_slider_pane_t1_copy1_ParamLimits

0x9c0a,	// (0x00027620) setting_slider_pane_t1_copy1

0xcc60,	// (0x0002a676) setting_slider_pane_t2_copy1_ParamLimits

0xcc60,	// (0x0002a676) setting_slider_pane_t2_copy1

0xcc79,	// (0x0002a68f) setting_slider_pane_t3_copy1_ParamLimits

0xcc79,	// (0x0002a68f) setting_slider_pane_t3_copy1

0x9c50,	// (0x00027666) slider_set_pane_copy1_ParamLimits

0x9c50,	// (0x00027666) slider_set_pane_copy1

0x5332,	// (0x00022d48) set_opt_bg_pane_g1_copy2

0x533a,	// (0x00022d50) set_opt_bg_pane_g2_copy2

0xe700,	// (0x0002c116) set_opt_bg_pane_g3_copy2

0x534a,	// (0x00022d60) set_opt_bg_pane_g4_copy2

0x5352,	// (0x00022d68) set_opt_bg_pane_g5_copy2

0x535a,	// (0x00022d70) set_opt_bg_pane_g6_copy2

0x021a,	// (0x0001dc30) set_opt_bg_pane_g7_copy2

0xe708,	// (0x0002c11e) set_opt_bg_pane_g8_copy2

0xe710,	// (0x0002c126) set_opt_bg_pane_g9_copy2

0xb389,	// (0x00028d9f) aid_size_touch_slider_mark_copy1_ParamLimits

0xb389,	// (0x00028d9f) aid_size_touch_slider_mark_copy1

0x71a7,	// (0x00024bbd) slider_set_pane_g1_copy1

0x71c9,	// (0x00024bdf) slider_set_pane_g2_copy1

0xb3a9,	// (0x00028dbf) slider_set_pane_g3_copy1_ParamLimits

0xb3a9,	// (0x00028dbf) slider_set_pane_g3_copy1

0xb3bd,	// (0x00028dd3) slider_set_pane_g4_copy1_ParamLimits

0xb3bd,	// (0x00028dd3) slider_set_pane_g4_copy1

0xb3d5,	// (0x00028deb) slider_set_pane_g5_copy1_ParamLimits

0xb3d5,	// (0x00028deb) slider_set_pane_g5_copy1

0xb3a9,	// (0x00028dbf) slider_set_pane_g6_copy1_ParamLimits

0xb3a9,	// (0x00028dbf) slider_set_pane_g6_copy1

0xcc90,	// (0x0002a6a6) slider_set_pane_g7_copy1_ParamLimits

0xcc90,	// (0x0002a6a6) slider_set_pane_g7_copy1

0x4cd9,	// (0x000226ef) bg_set_opt_pane_cp2_copy1

0x4d4b,	// (0x00022761) setting_slider_graphic_pane_g1_copy1

0xcca6,	// (0x0002a6bc) setting_slider_graphic_pane_t1_copy1

0xccb5,	// (0x0002a6cb) setting_slider_graphic_pane_t2_copy1

0xccc4,	// (0x0002a6da) slider_set_pane_cp_copy1

0xe720,	// (0x0002c136) input_focus_pane_cp1_copy1

0xe729,	// (0x0002c13f) list_set_text_pane_copy1

0xe731,	// (0x0002c147) setting_text_pane_g1_copy1

0xe73a,	// (0x0002c150) set_text_pane_t1_copy1

0xe720,	// (0x0002c136) input_focus_pane_cp2_copy1

0xe731,	// (0x0002c147) setting_code_pane_g1_copy1

0xe753,	// (0x0002c169) setting_code_pane_t1_copy1

0x025e,	// (0x0001dc74) list_set_graphic_pane_copy1

0x4cd9,	// (0x000226ef) bg_set_opt_pane_cp4_copy1

0xe761,	// (0x0002c177) list_set_graphic_pane_g1_copy1_ParamLimits

0xe761,	// (0x0002c177) list_set_graphic_pane_g1_copy1

0xe76d,	// (0x0002c183) list_set_graphic_pane_g2_copy1

0x59f6,	// (0x0002340c) list_set_graphic_pane_t1_copy1_ParamLimits

0x59f6,	// (0x0002340c) list_set_graphic_pane_t1_copy1

0x7db4,	// (0x000257ca) rs_clock_indi_pane_g1

0xe775,	// (0x0002c18b) rs_clock_indi_pane_t1

0xe783,	// (0x0002c199) rs_indi_pane

0xe78b,	// (0x0002c1a1) rs_indi_pane_g1

0xe794,	// (0x0002c1aa) rs_indi_pane_g2

0xe63c,	// (0x0002c052) rs_indi_pane_g3

0x0002,

0xfed0,	// (0x0002d8e6) rs_indi_pane_g

0x5c7b,	// (0x00023691) bg_popup_preview_window_pane_cp03

0xe79d,	// (0x0002c1b3) popup_fep_tooltip_window_t1

0x86df,	// (0x000260f5) popup_note2_window_g2_ParamLimits

0x86df,	// (0x000260f5) popup_note2_window_g2

0x0001,

0xfc70,	// (0x0002d686) popup_note2_window_g_ParamLimits

0xfc70,	// (0x0002d686) popup_note2_window_g

0x8b5a,	// (0x00026570) bg_popup_sub_pane_cp11_ParamLimits

0x8b67,	// (0x0002657d) cell_ai3_links_pane_g1_ParamLimits

0x8b7e,	// (0x00026594) cell_ai3_links_pane_t1

0xe73a,	// (0x0002c150) set_text_pane_t1_copy1_ParamLimits

0x5ba2,	// (0x000235b8) cell_graphic_popup_pane_cp2_ParamLimits

0x5ba2,	// (0x000235b8) cell_graphic_popup_pane_cp2

0xe7ab,	// (0x0002c1c1) cell_graphic_popup_pane_g1_cp2

0x50d7,	// (0x00022aed) cell_graphic_popup_pane_g2_cp2

0xe7b3,	// (0x0002c1c9) cell_graphic_popup_pane_g3_cp2

0xe7bb,	// (0x0002c1d1) cell_graphic_popup_pane_t2_cp2

0x50e8,	// (0x00022afe) grid_highlight_pane_cp3_cp2

0x5622,	// (0x00023038) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x52d7,	// (0x00022ced) main_tmo_pane_ParamLimits

0xc226,	// (0x00029c3c) popup_tmo_big_image_note_window

0xe305,	// (0x0002bd1b) cell_ai5_widget_list_pane

0xf2ae,	// (0x0002ccc4) cell_ai5_widget_lrg_icon_pane

0x0056,	// (0x0001da6c) tmo_note_info_pane_t1_ParamLimits

0x006b,	// (0x0001da81) tmo_note_info_pane_t2_ParamLimits

0x0080,	// (0x0001da96) tmo_note_info_pane_t3_ParamLimits

0xe5b9,	// (0x0002bfcf) tmo_note_info_pane_t4_ParamLimits

0xe5cb,	// (0x0002bfe1) tmo_note_info_pane_t5_ParamLimits

0xfebe,	// (0x0002d8d4) tmo_note_info_pane_t_ParamLimits

0x00f8,	// (0x0001db0e) settings_container_pane_ParamLimits

0xe718,	// (0x0002c12e) indicator_popup_pane_cp5

0xe718,	// (0x0002c12e) indicator_popup_pane_cp6

0x025e,	// (0x0001dc74) list_set_graphic_pane_copy1_ParamLimits

0x4c4d,	// (0x00022663) bg_popup_window_pane_cp23

0xe7c9,	// (0x0002c1df) popup_tmo_big_image_note_window_g1

0xe7d2,	// (0x0002c1e8) popup_tmo_big_image_note_window_t1

0xe7e0,	// (0x0002c1f6) popup_tmo_big_image_note_window_t2

0xe7ee,	// (0x0002c204) popup_tmo_big_image_note_window_t3

0x0002,

0xfed7,	// (0x0002d8ed) popup_tmo_big_image_note_window_t

0x7db4,	// (0x000257ca) cell_ai5_widget_lrg_icon_pane_g1

0xe7fc,	// (0x0002c212) cell_ai5_widget_lrg_icon_pane_t1

0x0272,	// (0x0001dc88) cell_ai5_widget_list_row_pane_ParamLimits

0x0272,	// (0x0001dc88) cell_ai5_widget_list_row_pane

0x0289,	// (0x0001dc9f) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x0289,	// (0x0001dc9f) cell_ai5_widget_list_row_pane_g1

0x0296,	// (0x0001dcac) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x0296,	// (0x0001dcac) cell_ai5_widget_list_row_pane_t1

0x02c4,	// (0x0001dcda) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x02c4,	// (0x0001dcda) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfede,	// (0x0002d8f4) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfede,	// (0x0002d8f4) cell_ai5_widget_list_row_pane_t

0x993b,	// (0x00027351) main_fep_vtchi_ss_pane

0xe82a,	// (0x0002c240) popup_fep_char_pre_window

0xe832,	// (0x0002c248) popup_fep_ituss_window

0x02ec,	// (0x0001dd02) popup_fep_vkbss_window

0xe865,	// (0x0002c27b) grid_vkbss_keypad_pane_ParamLimits

0xe865,	// (0x0002c27b) grid_vkbss_keypad_pane

0xe875,	// (0x0002c28b) ituss_keypad_pane

0xccd6,	// (0x0002a6ec) aid_vkbss_key_offset_ParamLimits

0xccd6,	// (0x0002a6ec) aid_vkbss_key_offset

0xcce2,	// (0x0002a6f8) cell_vkbss_key_pane_ParamLimits

0xcce2,	// (0x0002a6f8) cell_vkbss_key_pane

0x606d,	// (0x00023a83) bg_cell_vkbss_key_g1_ParamLimits

0x606d,	// (0x00023a83) bg_cell_vkbss_key_g1

0xe884,	// (0x0002c29a) cell_vkbss_key_3p_pane_ParamLimits

0xe884,	// (0x0002c29a) cell_vkbss_key_3p_pane

0xe89e,	// (0x0002c2b4) cell_vkbss_key_g1_ParamLimits

0xe89e,	// (0x0002c2b4) cell_vkbss_key_g1

0xe8b8,	// (0x0002c2ce) cell_vkbss_key_t1_ParamLimits

0xe8b8,	// (0x0002c2ce) cell_vkbss_key_t1

0xccf8,	// (0x0002a70e) cell_ituss_key_pane_ParamLimits

0xccf8,	// (0x0002a70e) cell_ituss_key_pane

0xe8e3,	// (0x0002c2f9) bg_cell_ituss_key_g1_ParamLimits

0xe8e3,	// (0x0002c2f9) bg_cell_ituss_key_g1

0xe8ef,	// (0x0002c305) cell_ituss_key_pane_g1_ParamLimits

0xe8ef,	// (0x0002c305) cell_ituss_key_pane_g1

0xcd09,	// (0x0002a71f) cell_ituss_key_pane_g2_ParamLimits

0xcd09,	// (0x0002a71f) cell_ituss_key_pane_g2

0x0002,

0xfee5,	// (0x0002d8fb) cell_ituss_key_pane_g_ParamLimits

0xfee5,	// (0x0002d8fb) cell_ituss_key_pane_g

0xcd31,	// (0x0002a747) cell_ituss_key_t1_ParamLimits

0xcd31,	// (0x0002a747) cell_ituss_key_t1

0xcd6b,	// (0x0002a781) cell_ituss_key_t2_ParamLimits

0xcd6b,	// (0x0002a781) cell_ituss_key_t2

0xcd9c,	// (0x0002a7b2) cell_ituss_key_t3_ParamLimits

0xcd9c,	// (0x0002a7b2) cell_ituss_key_t3

0xcd6b,	// (0x0002a781) cell_ituss_key_t4_ParamLimits

0xcd6b,	// (0x0002a781) cell_ituss_key_t4

0x0004,

0xfeec,	// (0x0002d902) cell_ituss_key_t_ParamLimits

0xfeec,	// (0x0002d902) cell_ituss_key_t

0xe915,	// (0x0002c32b) cell_vkbss_key_3p_pane_g1

0xe91d,	// (0x0002c333) cell_vkbss_key_3p_pane_g2

0xe925,	// (0x0002c33b) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef7,	// (0x0002d90d) cell_vkbss_key_3p_pane_g

0x5c7b,	// (0x00023691) bg_popup_fep_char_preview_window_cp02

0xe92d,	// (0x0002c343) popup_fep_char_pre_window_t1

0xf29b,	// (0x0002ccb1) main_ai5_sk_pane

0xe645,	// (0x0002c05b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe651,	// (0x0002c067) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xe666,	// (0x0002c07c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe672,	// (0x0002c088) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec9,	// (0x0002d8df) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe67e,	// (0x0002c094) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x52d7,	// (0x00022ced) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x0411,	// (0x0001de27) main_ai5_sk_pane_g1

0x643b,	// (0x00023e51) popup_query_code_window_g1

0xe844,	// (0x0002c25a) popup_fep_vkb_icf_pane

0xe84f,	// (0x0002c265) popup_fep_vtchi_icf_pane

0xe93b,	// (0x0002c351) bg_icf_pane

0xe947,	// (0x0002c35d) list_vkb_icf_pane

0xe953,	// (0x0002c369) bg_icf_pane_cp01

0xe966,	// (0x0002c37c) vtchi_icf_list_pane

0xe976,	// (0x0002c38c) list_vkb_icf_pane_t1_ParamLimits

0xe976,	// (0x0002c38c) list_vkb_icf_pane_t1

0xe98b,	// (0x0002c3a1) vtchi_icf_list_pane_t1_ParamLimits

0xe98b,	// (0x0002c3a1) vtchi_icf_list_pane_t1

0xe832,	// (0x0002c248) popup_fep_ituss_window_ParamLimits

0xe84f,	// (0x0002c265) popup_fep_vtchi_icf_pane_ParamLimits

0xe875,	// (0x0002c28b) ituss_keypad_pane_ParamLimits

0xcccc,	// (0x0002a6e2) ituss_sks_pane

0xe93b,	// (0x0002c351) bg_icf_pane_ParamLimits

0xe80a,	// (0x0002c220) icf_edit_indi_pane_ParamLimits

0xe80a,	// (0x0002c220) icf_edit_indi_pane

0xe947,	// (0x0002c35d) list_vkb_icf_pane_ParamLimits

0xe953,	// (0x0002c369) bg_icf_pane_cp01_ParamLimits

0xe81d,	// (0x0002c233) icf_edit_indi_pane_cp01_ParamLimits

0xe81d,	// (0x0002c233) icf_edit_indi_pane_cp01

0xe96e,	// (0x0002c384) vtchi_query_pane

0xe253,	// (0x0002bc69) icf_edit_indi_pane_g1_ParamLimits

0xe253,	// (0x0002bc69) icf_edit_indi_pane_g1

0x042c,	// (0x0001de42) icf_edit_indi_pane_g2_ParamLimits

0x042c,	// (0x0001de42) icf_edit_indi_pane_g2

0x0001,

0xff0f,	// (0x0002d925) icf_edit_indi_pane_g_ParamLimits

0xff0f,	// (0x0002d925) icf_edit_indi_pane_g

0x043c,	// (0x0001de52) icf_edit_indi_pane_t1

0xe9a2,	// (0x0002c3b8) bg_input_focus_pane_cp042

0xe9ab,	// (0x0002c3c1) vtchi_button_pane

0xe9b4,	// (0x0002c3ca) vtchi_query_pane_t1

0xe9c2,	// (0x0002c3d8) vtchi_query_pane_t2

0xe9d0,	// (0x0002c3e6) vtchi_query_pane_t3

0x0002,

0xfefe,	// (0x0002d914) vtchi_query_pane_t

0x993b,	// (0x00027351) bg_button_pane_cp13

0xe9de,	// (0x0002c3f4) vtchi_button_pane_g1

0xcddf,	// (0x0002a7f5) ituss_sks_pane_g1

0xcde8,	// (0x0002a7fe) ituss_sks_pane_g2

0x0001,

0xff05,	// (0x0002d91b) ituss_sks_pane_g

0xe9e6,	// (0x0002c3fc) ituss_sks_pane_t1

0xe9f4,	// (0x0002c40a) ituss_sks_pane_t2

0x0001,

0xff0a,	// (0x0002d920) ituss_sks_pane_t

0x79cb,	// (0x000253e1) indicator_nsta_pane_cp_g1

0x79d4,	// (0x000253ea) indicator_nsta_pane_cp_g2

0x79dc,	// (0x000253f2) indicator_nsta_pane_cp_g3

0x79e4,	// (0x000253fa) indicator_nsta_pane_cp_g4

0x79ec,	// (0x00025402) indicator_nsta_pane_cp_g5

0x79f4,	// (0x0002540a) indicator_nsta_pane_cp_g6

0x0005,

0xfaae,	// (0x0002d4c4) indicator_nsta_pane_cp_g

0xf0e0,	// (0x0002caf6) cell_graphic2_pane_t2_ParamLimits

0xf0e0,	// (0x0002caf6) cell_graphic2_pane_t2

0x0001,

0xfdc0,	// (0x0002d7d6) cell_graphic2_pane_t_ParamLimits

0xfdc0,	// (0x0002d7d6) cell_graphic2_pane_t

0xf10d,	// (0x0002cb23) cell_graphic2_control_pane_t1

0xa221,	// (0x00027c37) signal_pane_g3_ParamLimits

0xa221,	// (0x00027c37) signal_pane_g3

0xa232,	// (0x00027c48) signal_pane_g4_ParamLimits

0xa232,	// (0x00027c48) signal_pane_g4

0x02d6,	// (0x0001dcec) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x02d6,	// (0x0001dcec) cell_ai5_widget_list_row_pane_t3

0xe903,	// (0x0002c319) cell_ituss_key_pane_t1_ParamLimits

0xe903,	// (0x0002c319) cell_ituss_key_pane_t1

0x6111,	// (0x00023b27) form_field_data_wide_pane_vc_t2_ParamLimits

0x6111,	// (0x00023b27) form_field_data_wide_pane_vc_t2

0x6123,	// (0x00023b39) form_field_data_wide_pane_vc_t3_ParamLimits

0x6123,	// (0x00023b39) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ff,	// (0x0002d215) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ff,	// (0x0002d215) form_field_data_wide_pane_vc_t

0x7737,	// (0x0002514d) form_field_slider_wide_pane_vc_t3_ParamLimits

0x7737,	// (0x0002514d) form_field_slider_wide_pane_vc_t3

0x77f5,	// (0x0002520b) form_field_popup_wide_pane_vc_t2_ParamLimits

0x77f5,	// (0x0002520b) form_field_popup_wide_pane_vc_t2

0x780a,	// (0x00025220) form_field_popup_wide_pane_vc_t3_ParamLimits

0x780a,	// (0x00025220) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa9d,	// (0x0002d4b3) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa9d,	// (0x0002d4b3) form_field_popup_wide_pane_vc_t

0xcb34,	// (0x0002a54a) aid_fshwr2_btn_pane_ParamLimits

0xcb40,	// (0x0002a556) aid_fshwr2_syb_pane_ParamLimits

0xcb4c,	// (0x0002a562) aid_fshwr2_txt_pane_ParamLimits

0xc3fd,	// (0x00029e13) fshwr2_bg_pane_ParamLimits

0xcb58,	// (0x0002a56e) fshwr2_func_candi_pane_ParamLimits

0xcb69,	// (0x0002a57f) fshwr2_hwr_syb_pane_ParamLimits

0xcb75,	// (0x0002a58b) fshwr2_icf_pane_ParamLimits

0xd956,	// (0x0002b36c) list_double_graphic_pane_vc_g4_ParamLimits

0xd956,	// (0x0002b36c) list_double_graphic_pane_vc_g4

0xcd25,	// (0x0002a73b) cell_ituss_key_pane_g3_ParamLimits

0xcd25,	// (0x0002a73b) cell_ituss_key_pane_g3

0xcdcd,	// (0x0002a7e3) cell_ituss_key_t5_ParamLimits

0xcdcd,	// (0x0002a7e3) cell_ituss_key_t5

0x02ec,	// (0x0001dd02) popup_fep_vkbss_window_ParamLimits

0xf2a5,	// (0x0002ccbb) aid_cell_ai5_quarter

0x043c,	// (0x0001de52) icf_edit_indi_pane_t1_ParamLimits

0x4f18,	// (0x0002292e) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x4f18,	// (0x0002292e) aid_tch_indicator_popup_pane_cp2

0x4f2b,	// (0x00022941) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x4f2b,	// (0x00022941) aid_tch_query_popup_data_pane_cp2

0x63e3,	// (0x00023df9) aid_tch_query_popup_pane_ParamLimits

0x63e3,	// (0x00023df9) aid_tch_query_popup_pane

0x63e3,	// (0x00023df9) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x63e3,	// (0x00023df9) aid_tch_query_popup_data_pane_cp1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Small
