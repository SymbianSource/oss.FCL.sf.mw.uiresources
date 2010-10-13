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

#include "aknlayoutscalable_elaf_pql_av_qvga_lsc_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x000178f2 };

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
0x29eb,	// (0x0001a2dd) Screen

0x29f5,	// (0x0001a2e7) application_window_ParamLimits

0x29f5,	// (0x0001a2e7) application_window

0xb136,	// (0x00022a28) screen_g1

0x2a03,	// (0x0001a2f5) area_bottom_pane_ParamLimits

0x2a03,	// (0x0001a2f5) area_bottom_pane

0xb140,	// (0x00022a32) area_top_pane_ParamLimits

0xb140,	// (0x00022a32) area_top_pane

0x44e1,	// (0x0001bdd3) main_pane_ParamLimits

0x44e1,	// (0x0001bdd3) main_pane

0xb1b8,	// (0x00022aaa) misc_graphics

0x8ca0,	// (0x00020592) battery_pane_ParamLimits

0x8ca0,	// (0x00020592) battery_pane

0xcc9e,	// (0x00024590) bg_status_flat_pane_g8

0xcca6,	// (0x00024598) bg_status_flat_pane_g9

0xc3b1,	// (0x00023ca3) context_pane_ParamLimits

0xc3b1,	// (0x00023ca3) context_pane

0x8dfa,	// (0x000206ec) navi_pane_ParamLimits

0x8dfa,	// (0x000206ec) navi_pane

0x8e6f,	// (0x00020761) signal_pane_ParamLimits

0x8e6f,	// (0x00020761) signal_pane

0x0008,

0xf848,	// (0x0002713a) bg_status_flat_pane_g

0x8efb,	// (0x000207ed) status_pane_g1_ParamLimits

0x8efb,	// (0x000207ed) status_pane_g1

0x8f07,	// (0x000207f9) status_pane_g2_ParamLimits

0x8f07,	// (0x000207f9) status_pane_g2

0xc417,	// (0x00023d09) status_pane_g3_ParamLimits

0xc417,	// (0x00023d09) status_pane_g3

0x0004,

0xf77b,	// (0x0002706d) status_pane_g_ParamLimits

0xf77b,	// (0x0002706d) status_pane_g

0x8f13,	// (0x00020805) title_pane_ParamLimits

0x8f13,	// (0x00020805) title_pane

0x8f6e,	// (0x00020860) uni_indicator_pane_ParamLimits

0x8f6e,	// (0x00020860) uni_indicator_pane

0xc308,	// (0x00023bfa) bg_list_pane_ParamLimits

0xc308,	// (0x00023bfa) bg_list_pane

0x8664,	// (0x0001ff56) find_pane

0x866c,	// (0x0001ff5e) listscroll_app_pane_ParamLimits

0x866c,	// (0x0001ff5e) listscroll_app_pane

0xc328,	// (0x00023c1a) listscroll_form_pane

0x867c,	// (0x0001ff6e) listscroll_gen_pane_ParamLimits

0x867c,	// (0x0001ff6e) listscroll_gen_pane

0x4cd8,	// (0x0001c5ca) listscroll_set_pane

0x8691,	// (0x0001ff83) main_idle_act_pane

0xc173,	// (0x00023a65) main_idle_trad_pane

0xc173,	// (0x00023a65) main_list_empty_pane

0xb955,	// (0x00023247) main_midp_pane

0xc342,	// (0x00023c34) main_pane_g1_ParamLimits

0xc342,	// (0x00023c34) main_pane_g1

0x86a4,	// (0x0001ff96) popup_ai_message_window_ParamLimits

0x86a4,	// (0x0001ff96) popup_ai_message_window

0x8728,	// (0x0002001a) popup_fep_china_uni_window_ParamLimits

0x8728,	// (0x0002001a) popup_fep_china_uni_window

0x4db4,	// (0x0001c6a6) popup_fep_japan_candidate_window_ParamLimits

0x4db4,	// (0x0001c6a6) popup_fep_japan_candidate_window

0x4dd2,	// (0x0001c6c4) popup_fep_japan_predictive_window_ParamLimits

0x4dd2,	// (0x0001c6c4) popup_fep_japan_predictive_window

0x8766,	// (0x00020058) popup_find_window

0x877f,	// (0x00020071) popup_grid_graphic_window_ParamLimits

0x877f,	// (0x00020071) popup_grid_graphic_window

0x4e29,	// (0x0001c71b) popup_large_graphic_colour_window

0x87fb,	// (0x000200ed) popup_menu_window_ParamLimits

0x87fb,	// (0x000200ed) popup_menu_window

0x8959,	// (0x0002024b) popup_note_image_window

0x8921,	// (0x00020213) popup_note_wait_window_ParamLimits

0x8921,	// (0x00020213) popup_note_wait_window

0x896f,	// (0x00020261) popup_note_window_ParamLimits

0x896f,	// (0x00020261) popup_note_window

0x8a03,	// (0x000202f5) popup_query_code_window_ParamLimits

0x8a03,	// (0x000202f5) popup_query_code_window

0x4fe6,	// (0x0001c8d8) popup_query_data_code_window_ParamLimits

0x4fe6,	// (0x0001c8d8) popup_query_data_code_window

0x8a3b,	// (0x0002032d) popup_query_data_window_ParamLimits

0x8a3b,	// (0x0002032d) popup_query_data_window

0x8aaf,	// (0x000203a1) popup_query_sat_info_window_ParamLimits

0x8aaf,	// (0x000203a1) popup_query_sat_info_window

0x8b3c,	// (0x0002042e) popup_snote_single_graphic_window_ParamLimits

0x8b3c,	// (0x0002042e) popup_snote_single_graphic_window

0x8b3c,	// (0x0002042e) popup_snote_single_text_window_ParamLimits

0x8b3c,	// (0x0002042e) popup_snote_single_text_window

0x5055,	// (0x0001c947) popup_sub_window_general

0x5159,	// (0x0001ca4b) popup_window_general_ParamLimits

0x5159,	// (0x0001ca4b) popup_window_general

0xc350,	// (0x00023c42) power_save_pane

0x850e,	// (0x0001fe00) control_pane_g1_ParamLimits

0x850e,	// (0x0001fe00) control_pane_g1

0x4b95,	// (0x0001c487) control_pane_g2_ParamLimits

0x4b95,	// (0x0001c487) control_pane_g2

0xc2fa,	// (0x00023bec) control_pane_g3_ParamLimits

0xc2fa,	// (0x00023bec) control_pane_g3

0x0007,

0xf763,	// (0x00027055) control_pane_g_ParamLimits

0xf763,	// (0x00027055) control_pane_g

0x856a,	// (0x0001fe5c) control_pane_t1_ParamLimits

0x856a,	// (0x0001fe5c) control_pane_t1

0x85c6,	// (0x0001feb8) control_pane_t2_ParamLimits

0x85c6,	// (0x0001feb8) control_pane_t2

0x0002,

0xf774,	// (0x00027066) control_pane_t_ParamLimits

0xf774,	// (0x00027066) control_pane_t

0xc2a2,	// (0x00023b94) navi_navi_volume_pane_cp1

0xc2aa,	// (0x00023b9c) status_small_icon_pane

0xc2b2,	// (0x00023ba4) status_small_pane_g1_ParamLimits

0xc2b2,	// (0x00023ba4) status_small_pane_g1

0x848d,	// (0x0001fd7f) status_small_pane_g2_ParamLimits

0x848d,	// (0x0001fd7f) status_small_pane_g2

0x8499,	// (0x0001fd8b) status_small_pane_g3_ParamLimits

0x8499,	// (0x0001fd8b) status_small_pane_g3

0x84a5,	// (0x0001fd97) status_small_pane_g4_ParamLimits

0x84a5,	// (0x0001fd97) status_small_pane_g4

0x84b1,	// (0x0001fda3) status_small_pane_g5_ParamLimits

0x84b1,	// (0x0001fda3) status_small_pane_g5

0xc2e6,	// (0x00023bd8) status_small_pane_g6_ParamLimits

0xc2e6,	// (0x00023bd8) status_small_pane_g6

0x0007,

0xf752,	// (0x00027044) status_small_pane_g_ParamLimits

0xf752,	// (0x00027044) status_small_pane_g

0x84e0,	// (0x0001fdd2) status_small_pane_t1

0x84fa,	// (0x0001fdec) status_small_wait_pane_ParamLimits

0x84fa,	// (0x0001fdec) status_small_wait_pane

0x8333,	// (0x0001fc25) aid_levels_signal_ParamLimits

0x8333,	// (0x0001fc25) aid_levels_signal

0x8347,	// (0x0001fc39) signal_pane_g1_ParamLimits

0x8347,	// (0x0001fc39) signal_pane_g1

0x8361,	// (0x0001fc53) signal_pane_g2_ParamLimits

0x8361,	// (0x0001fc53) signal_pane_g2

0x0003,

0xf6e3,	// (0x00026fd5) signal_pane_g_ParamLimits

0xf6e3,	// (0x00026fd5) signal_pane_g

0xbd18,	// (0x0002360a) context_pane_g1

0x7d7c,	// (0x0001f66e) title_pane_g1

0x7dbe,	// (0x0001f6b0) title_pane_t1

0xb1ce,	// (0x00022ac0) title_pane_t2

0xb1f4,	// (0x00022ae6) title_pane_t3

0x0002,

0xf532,	// (0x00026e24) title_pane_t

0x8f94,	// (0x00020886) aid_levels_battery_ParamLimits

0x8f94,	// (0x00020886) aid_levels_battery

0x8fac,	// (0x0002089e) battery_pane_g1_ParamLimits

0x8fac,	// (0x0002089e) battery_pane_g1

0x8fc7,	// (0x000208b9) battery_pane_g2_ParamLimits

0x8fc7,	// (0x000208b9) battery_pane_g2

0x0001,

0xf786,	// (0x00027078) battery_pane_g_ParamLimits

0xf786,	// (0x00027078) battery_pane_g

0x92cf,	// (0x00020bc1) uni_indicator_pane_g1

0x92e3,	// (0x00020bd5) uni_indicator_pane_g2

0x92f8,	// (0x00020bea) uni_indicator_pane_g3

0x0005,

0xf8f0,	// (0x000271e2) uni_indicator_pane_g

0xb8c9,	// (0x000231bb) navi_icon_pane_ParamLimits

0xb8c9,	// (0x000231bb) navi_icon_pane

0xb1b8,	// (0x00022aaa) navi_midp_pane

0xb1b8,	// (0x00022aaa) navi_navi_pane

0xb8c9,	// (0x000231bb) navi_text_pane_ParamLimits

0xb8c9,	// (0x000231bb) navi_text_pane

0xb136,	// (0x00022a28) status_small_wait_pane_g1

0xb509,	// (0x00022dfb) status_small_wait_pane_g2

0x0001,

0xf8eb,	// (0x000271dd) status_small_wait_pane_g

0x9275,	// (0x00020b67) navi_navi_icon_text_pane

0x927d,	// (0x00020b6f) navi_navi_pane_g1_ParamLimits

0x927d,	// (0x00020b6f) navi_navi_pane_g1

0x928f,	// (0x00020b81) navi_navi_pane_g2_ParamLimits

0x928f,	// (0x00020b81) navi_navi_pane_g2

0x0001,

0xf8b9,	// (0x000271ab) navi_navi_pane_g_ParamLimits

0xf8b9,	// (0x000271ab) navi_navi_pane_g

0x92a1,	// (0x00020b93) navi_navi_tabs_pane

0x9275,	// (0x00020b67) navi_navi_text_pane

0x9275,	// (0x00020b67) navi_navi_volume_pane

0xd1e4,	// (0x00024ad6) navi_text_pane_t1

0xd1d8,	// (0x00024aca) navi_icon_pane_g1

0xd12c,	// (0x00024a1e) navi_navi_text_pane_t1

0x53c0,	// (0x0001ccb2) navi_navi_volume_pane_g1

0x926c,	// (0x00020b5e) volume_small_pane

0x91c8,	// (0x00020aba) navi_navi_icon_text_pane_g1

0x91d0,	// (0x00020ac2) navi_navi_icon_text_pane_t1

0xcce6,	// (0x000245d8) navi_tabs_2_long_pane

0xcce6,	// (0x000245d8) navi_tabs_2_pane

0xcce6,	// (0x000245d8) navi_tabs_3_long_pane

0xcce6,	// (0x000245d8) navi_tabs_3_pane

0xcce6,	// (0x000245d8) navi_tabs_4_pane

0x91a8,	// (0x00020a9a) tabs_2_active_pane_ParamLimits

0x91a8,	// (0x00020a9a) tabs_2_active_pane

0x91b8,	// (0x00020aaa) tabs_2_passive_pane_ParamLimits

0x91b8,	// (0x00020aaa) tabs_2_passive_pane

0x9176,	// (0x00020a68) tabs_3_active_pane_ParamLimits

0x9176,	// (0x00020a68) tabs_3_active_pane

0x9186,	// (0x00020a78) tabs_3_passive_pane_ParamLimits

0x9186,	// (0x00020a78) tabs_3_passive_pane

0x9197,	// (0x00020a89) tabs_3_passive_pane_cp_ParamLimits

0x9197,	// (0x00020a89) tabs_3_passive_pane_cp

0x9132,	// (0x00020a24) tabs_4_active_pane_ParamLimits

0x9132,	// (0x00020a24) tabs_4_active_pane

0x9143,	// (0x00020a35) tabs_4_passive_pane_ParamLimits

0x9143,	// (0x00020a35) tabs_4_passive_pane

0x9154,	// (0x00020a46) tabs_4_passive_pane_cp_ParamLimits

0x9154,	// (0x00020a46) tabs_4_passive_pane_cp

0x9165,	// (0x00020a57) tabs_4_passive_pane_cp2_ParamLimits

0x9165,	// (0x00020a57) tabs_4_passive_pane_cp2

0x9112,	// (0x00020a04) tabs_2_long_active_pane_ParamLimits

0x9112,	// (0x00020a04) tabs_2_long_active_pane

0x9122,	// (0x00020a14) tabs_2_long_passive_pane_ParamLimits

0x9122,	// (0x00020a14) tabs_2_long_passive_pane

0x90db,	// (0x000209cd) tabs_3_long_active_pane_ParamLimits

0x90db,	// (0x000209cd) tabs_3_long_active_pane

0x90ee,	// (0x000209e0) tabs_3_long_passive_pane_ParamLimits

0x90ee,	// (0x000209e0) tabs_3_long_passive_pane

0x90ff,	// (0x000209f1) tabs_3_long_passive_pane_cp_ParamLimits

0x90ff,	// (0x000209f1) tabs_3_long_passive_pane_cp

0x527b,	// (0x0001cb6d) volume_small_pane_g1

0x5284,	// (0x0001cb76) volume_small_pane_g2

0x528d,	// (0x0001cb7f) volume_small_pane_g3

0x5296,	// (0x0001cb88) volume_small_pane_g4

0x529f,	// (0x0001cb91) volume_small_pane_g5

0x52a8,	// (0x0001cb9a) volume_small_pane_g6

0x52b1,	// (0x0001cba3) volume_small_pane_g7

0x52ba,	// (0x0001cbac) volume_small_pane_g8

0x52c3,	// (0x0001cbb5) volume_small_pane_g9

0x52cc,	// (0x0001cbbe) volume_small_pane_g10

0x0009,

0xf885,	// (0x00027177) volume_small_pane_g

0xb206,	// (0x00022af8) bg_active_tab_pane_cp2_ParamLimits

0xb206,	// (0x00022af8) bg_active_tab_pane_cp2

0xb214,	// (0x00022b06) tabs_3_active_pane_g1

0x7e4b,	// (0x0001f73d) tabs_3_active_pane_t1

0xb206,	// (0x00022af8) bg_passive_tab_pane_cp2_ParamLimits

0xb206,	// (0x00022af8) bg_passive_tab_pane_cp2

0xb214,	// (0x00022b06) tabs_3_passive_pane_g1

0x7e4b,	// (0x0001f73d) tabs_3_passive_pane_t1

0xb206,	// (0x00022af8) bg_active_tab_pane_cp3_ParamLimits

0xb206,	// (0x00022af8) bg_active_tab_pane_cp3

0xd684,	// (0x00024f76) tabs_4_active_pane_g1

0x7e61,	// (0x0001f753) tabs_4_active_pane_t1

0xb206,	// (0x00022af8) bg_passive_tab_pane_cp3_ParamLimits

0xb206,	// (0x00022af8) bg_passive_tab_pane_cp3

0xd684,	// (0x00024f76) tabs_4_1_passive_pane_g1

0x7e61,	// (0x0001f753) tabs_4_1_passive_pane_t1

0xb955,	// (0x00023247) list_highlight_pane_cp2

0x93a7,	// (0x00020c99) list_set_pane_ParamLimits

0x93a7,	// (0x00020c99) list_set_pane

0x9435,	// (0x00020d27) main_pane_set_t1_ParamLimits

0x9435,	// (0x00020d27) main_pane_set_t1

0x9455,	// (0x00020d47) main_pane_set_t2_ParamLimits

0x9455,	// (0x00020d47) main_pane_set_t2

0x9469,	// (0x00020d5b) main_pane_set_t3_ParamLimits

0x9469,	// (0x00020d5b) main_pane_set_t3

0x947b,	// (0x00020d6d) main_pane_set_t4_ParamLimits

0x947b,	// (0x00020d6d) main_pane_set_t4

0x0003,

0xf955,	// (0x00027247) main_pane_set_t_ParamLimits

0xf955,	// (0x00027247) main_pane_set_t

0x948d,	// (0x00020d7f) setting_code_pane

0x9495,	// (0x00020d87) setting_slider_graphic_pane

0x9495,	// (0x00020d87) setting_slider_pane

0x9495,	// (0x00020d87) setting_text_pane

0x9495,	// (0x00020d87) setting_volume_pane

0x7e77,	// (0x0001f769) volume_set_pane

0xb21c,	// (0x00022b0e) bg_set_opt_pane_cp

0x46e8,	// (0x0001bfda) setting_slider_pane_t1

0x7e7f,	// (0x0001f771) setting_slider_pane_t2

0x7e98,	// (0x0001f78a) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00026e2b) setting_slider_pane_t

0x472e,	// (0x0001c020) slider_set_pane

0xb1b8,	// (0x00022aaa) bg_set_opt_pane_cp2

0xb22a,	// (0x00022b1c) setting_slider_graphic_pane_g1

0x7eaf,	// (0x0001f7a1) setting_slider_graphic_pane_t1

0x7ebe,	// (0x0001f7b0) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00026e32) setting_slider_graphic_pane_t

0x7ecd,	// (0x0001f7bf) slider_set_pane_cp

0xb1b8,	// (0x00022aaa) input_focus_pane_cp1

0xd620,	// (0x00024f12) list_set_text_pane

0xb136,	// (0x00022a28) setting_text_pane_g1

0xb1b8,	// (0x00022aaa) input_focus_pane_cp2

0xb136,	// (0x00022a28) setting_code_pane_g1

0xb233,	// (0x00022b25) setting_code_pane_t1

0x772d,	// (0x0001f01f) set_text_pane_t1_ParamLimits

0x772d,	// (0x0001f01f) set_text_pane_t1

0xb817,	// (0x00023109) set_opt_bg_pane_g1

0xb81f,	// (0x00023111) set_opt_bg_pane_g2

0x9373,	// (0x00020c65) set_opt_bg_pane_g3

0xb82f,	// (0x00023121) set_opt_bg_pane_g4

0xb837,	// (0x00023129) set_opt_bg_pane_g5

0xb83f,	// (0x00023131) set_opt_bg_pane_g6

0x937b,	// (0x00020c6d) set_opt_bg_pane_g7

0x9383,	// (0x00020c75) set_opt_bg_pane_g8

0x938b,	// (0x00020c7d) set_opt_bg_pane_g9

0x0008,

0xf942,	// (0x00027234) set_opt_bg_pane_g

0xd613,	// (0x00024f05) slider_set_pane_g1

0x5435,	// (0x0001cd27) slider_set_pane_g2

0x0006,

0xf933,	// (0x00027225) slider_set_pane_g

0x930d,	// (0x00020bff) volume_set_pane_g1

0x9315,	// (0x00020c07) volume_set_pane_g2

0x931d,	// (0x00020c0f) volume_set_pane_g3

0x9325,	// (0x00020c17) volume_set_pane_g4

0x932d,	// (0x00020c1f) volume_set_pane_g5

0x9335,	// (0x00020c27) volume_set_pane_g6

0x933d,	// (0x00020c2f) volume_set_pane_g7

0x9345,	// (0x00020c37) volume_set_pane_g8

0x934d,	// (0x00020c3f) volume_set_pane_g9

0x9355,	// (0x00020c47) volume_set_pane_g10

0x0009,

0xf90b,	// (0x000271fd) volume_set_pane_g

0x7ed5,	// (0x0001f7c7) indicator_pane_ParamLimits

0x7ed5,	// (0x0001f7c7) indicator_pane

0x7efd,	// (0x0001f7ef) main_idle_pane_g2_ParamLimits

0x7efd,	// (0x0001f7ef) main_idle_pane_g2

0x7f2d,	// (0x0001f81f) main_pane_idle_g1_ParamLimits

0x7f2d,	// (0x0001f81f) main_pane_idle_g1

0xb241,	// (0x00022b33) popup_clock_digital_analogue_window_ParamLimits

0xb241,	// (0x00022b33) popup_clock_digital_analogue_window

0x7f52,	// (0x0001f844) soft_indicator_pane_ParamLimits

0x7f52,	// (0x0001f844) soft_indicator_pane

0x7f6c,	// (0x0001f85e) wallpaper_pane_ParamLimits

0x7f6c,	// (0x0001f85e) wallpaper_pane

0xb136,	// (0x00022a28) wallpaper_pane_g1

0x7f7e,	// (0x0001f870) indicator_pane_g1_ParamLimits

0x7f7e,	// (0x0001f870) indicator_pane_g1

0xd794,	// (0x00025086) navi_navi_icon_text_pane_srt_g1

0xb26f,	// (0x00022b61) soft_indicator_pane_t1

0xb289,	// (0x00022b7b) aid_ps_area_pane

0x7f97,	// (0x0001f889) aid_ps_clock_pane

0xb29a,	// (0x00022b8c) aid_ps_indicator_pane

0xb2a6,	// (0x00022b98) indicator_ps_pane_ParamLimits

0xb2a6,	// (0x00022b98) indicator_ps_pane

0xb2b5,	// (0x00022ba7) power_save_pane_g1_ParamLimits

0xb2b5,	// (0x00022ba7) power_save_pane_g1

0xb2c1,	// (0x00022bb3) power_save_pane_g2_ParamLimits

0xb2c1,	// (0x00022bb3) power_save_pane_g2

0x445d,	// (0x0001bd4f) aid_navinavi_width_pane

0xb289,	// (0x00022b7b) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00026e37) power_save_pane_g_ParamLimits

0xf545,	// (0x00026e37) power_save_pane_g

0xb2cf,	// (0x00022bc1) power_save_pane_t1_ParamLimits

0xb2cf,	// (0x00022bc1) power_save_pane_t1

0x7f97,	// (0x0001f889) aid_ps_clock_pane_ParamLimits

0xb29a,	// (0x00022b8c) aid_ps_indicator_pane_ParamLimits

0xb2e1,	// (0x00022bd3) power_save_pane_t4_ParamLimits

0xb2e1,	// (0x00022bd3) power_save_pane_t4

0x0001,

0xf54a,	// (0x00026e3c) power_save_pane_t_ParamLimits

0xf54a,	// (0x00026e3c) power_save_pane_t

0xb30b,	// (0x00022bfd) power_save_t3_ParamLimits

0xb30b,	// (0x00022bfd) power_save_t3

0xb2f6,	// (0x00022be8) power_save_t2_ParamLimits

0xb2f6,	// (0x00022be8) power_save_t2

0xb320,	// (0x00022c12) indicator_ps_pane_g1

0x7fa3,	// (0x0001f895) ai_gene_pane_ParamLimits

0x7fa3,	// (0x0001f895) ai_gene_pane

0x7fba,	// (0x0001f8ac) ai_links_pane_ParamLimits

0x7fba,	// (0x0001f8ac) ai_links_pane

0x7fcc,	// (0x0001f8be) indicator_pane_cp1_ParamLimits

0x7fcc,	// (0x0001f8be) indicator_pane_cp1

0x7fdb,	// (0x0001f8cd) main_pane_idle_g1_cp_ParamLimits

0x7fdb,	// (0x0001f8cd) main_pane_idle_g1_cp

0xb329,	// (0x00022c1b) popup_ai_links_title_window

0x7ff3,	// (0x0001f8e5) soft_indicator_pane_cp1_ParamLimits

0x7ff3,	// (0x0001f8e5) soft_indicator_pane_cp1

0xd469,	// (0x00024d5b) ai_links_pane_g1

0xd472,	// (0x00024d64) grid_ai_links_pane

0x92c6,	// (0x00020bb8) ai_gene_pane_1

0xd457,	// (0x00024d49) ai_gene_pane_2

0xd460,	// (0x00024d52) list_highlight_pane_cp4

0x92aa,	// (0x00020b9c) cell_ai_link_pane_ParamLimits

0x92aa,	// (0x00020b9c) cell_ai_link_pane

0xd44f,	// (0x00024d41) cell_ai_link_pane_g1

0xb509,	// (0x00022dfb) cell_ai_link_pane_g2

0x0001,

0xf8e6,	// (0x000271d8) cell_ai_link_pane_g

0xb1b8,	// (0x00022aaa) grid_highlight_cp2

0xb1b8,	// (0x00022aaa) bg_popup_sub_pane_cp1

0xb340,	// (0x00022c32) popup_ai_links_title_window_t1

0xd3a1,	// (0x00024c93) ai_gene_pane_1_g1_ParamLimits

0xd3a1,	// (0x00024c93) ai_gene_pane_1_g1

0xd3ad,	// (0x00024c9f) ai_gene_pane_1_g2_ParamLimits

0xd3ad,	// (0x00024c9f) ai_gene_pane_1_g2

0x0001,

0xf8dc,	// (0x000271ce) ai_gene_pane_1_g_ParamLimits

0xf8dc,	// (0x000271ce) ai_gene_pane_1_g

0xd3ba,	// (0x00024cac) ai_gene_pane_1_t1_ParamLimits

0xd3ba,	// (0x00024cac) ai_gene_pane_1_t1

0xd3ee,	// (0x00024ce0) grid_ai_soft_ind_pane

0xd38c,	// (0x00024c7e) ai_gene_pane_2_t1_ParamLimits

0xd38c,	// (0x00024c7e) ai_gene_pane_2_t1

0x8007,	// (0x0001f8f9) main_pane_empty_t1_ParamLimits

0x8007,	// (0x0001f8f9) main_pane_empty_t1

0x8024,	// (0x0001f916) main_pane_empty_t2_ParamLimits

0x8024,	// (0x0001f916) main_pane_empty_t2

0x803c,	// (0x0001f92e) main_pane_empty_t3_ParamLimits

0x803c,	// (0x0001f92e) main_pane_empty_t3

0x804f,	// (0x0001f941) main_pane_empty_t4_ParamLimits

0x804f,	// (0x0001f941) main_pane_empty_t4

0x8062,	// (0x0001f954) main_pane_empty_t5_ParamLimits

0x8062,	// (0x0001f954) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00026e41) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00026e41) main_pane_empty_t

0xb8c9,	// (0x000231bb) bg_popup_window_pane_ParamLimits

0xb8c9,	// (0x000231bb) bg_popup_window_pane

0xd13b,	// (0x00024a2d) find_popup_pane_cp2_ParamLimits

0xd13b,	// (0x00024a2d) find_popup_pane_cp2

0xd147,	// (0x00024a39) heading_pane_ParamLimits

0xd147,	// (0x00024a39) heading_pane

0xb1b8,	// (0x00022aaa) bg_popup_sub_pane

0x91ed,	// (0x00020adf) bg_popup_window_pane_g1_ParamLimits

0x91ed,	// (0x00020adf) bg_popup_window_pane_g1

0x91fc,	// (0x00020aee) bg_popup_window_pane_g2_ParamLimits

0x91fc,	// (0x00020aee) bg_popup_window_pane_g2

0x9208,	// (0x00020afa) bg_popup_window_pane_g3_ParamLimits

0x9208,	// (0x00020afa) bg_popup_window_pane_g3

0x9214,	// (0x00020b06) bg_popup_window_pane_g4_ParamLimits

0x9214,	// (0x00020b06) bg_popup_window_pane_g4

0x9223,	// (0x00020b15) bg_popup_window_pane_g5_ParamLimits

0x9223,	// (0x00020b15) bg_popup_window_pane_g5

0x9233,	// (0x00020b25) bg_popup_window_pane_g6_ParamLimits

0x9233,	// (0x00020b25) bg_popup_window_pane_g6

0x923f,	// (0x00020b31) bg_popup_window_pane_g7_ParamLimits

0x923f,	// (0x00020b31) bg_popup_window_pane_g7

0x924e,	// (0x00020b40) bg_popup_window_pane_g8_ParamLimits

0x924e,	// (0x00020b40) bg_popup_window_pane_g8

0x925d,	// (0x00020b4f) bg_popup_window_pane_g9_ParamLimits

0x925d,	// (0x00020b4f) bg_popup_window_pane_g9

0xd120,	// (0x00024a12) bg_popup_window_pane_g10_ParamLimits

0xd120,	// (0x00024a12) bg_popup_window_pane_g10

0x0009,

0xf8a4,	// (0x00027196) bg_popup_window_pane_g_ParamLimits

0xf8a4,	// (0x00027196) bg_popup_window_pane_g

0xd0d7,	// (0x000249c9) bg_popup_heading_pane_ParamLimits

0xd0d7,	// (0x000249c9) bg_popup_heading_pane

0x54bd,	// (0x0001cdaf) tabs_4_passive_pane_cp_srt_ParamLimits

0x54bd,	// (0x0001cdaf) tabs_4_passive_pane_cp_srt

0x54cf,	// (0x0001cdc1) tabs_4_passive_pane_srt_ParamLimits

0xd0eb,	// (0x000249dd) heading_pane_g2

0x54cf,	// (0x0001cdc1) tabs_4_passive_pane_srt

0xc5a7,	// (0x00023e99) bg_passive_tab_pane_cp3_srt_ParamLimits

0xc5a7,	// (0x00023e99) bg_passive_tab_pane_cp3_srt

0xd0f3,	// (0x000249e5) heading_pane_t1_ParamLimits

0xd0f3,	// (0x000249e5) heading_pane_t1

0xd10a,	// (0x000249fc) heading_pane_t2_ParamLimits

0xd10a,	// (0x000249fc) heading_pane_t2

0x0001,

0xf89f,	// (0x00027191) heading_pane_t_ParamLimits

0xf89f,	// (0x00027191) heading_pane_t

0xcc66,	// (0x00024558) bg_popup_heading_pane_g1

0xccf7,	// (0x000245e9) bg_popup_heading_pane_g2

0xccff,	// (0x000245f1) bg_popup_heading_pane_g3

0xcd07,	// (0x000245f9) bg_popup_heading_pane_g4

0xcd0f,	// (0x00024601) bg_popup_heading_pane_g5

0xcd17,	// (0x00024609) bg_popup_heading_pane_g6

0xcd1f,	// (0x00024611) bg_popup_heading_pane_g7

0xcd27,	// (0x00024619) bg_popup_heading_pane_g8

0xcd2f,	// (0x00024621) bg_popup_heading_pane_g9

0x0008,

0xf85b,	// (0x0002714d) bg_popup_heading_pane_g

0xc4ff,	// (0x00023df1) bg_popup_sub_pane_g1

0xc507,	// (0x00023df9) bg_popup_sub_pane_g2

0xc50f,	// (0x00023e01) bg_popup_sub_pane_g3

0xc517,	// (0x00023e09) bg_popup_sub_pane_g4

0xc51f,	// (0x00023e11) bg_popup_sub_pane_g5

0xc527,	// (0x00023e19) bg_popup_sub_pane_g6

0xc52f,	// (0x00023e21) bg_popup_sub_pane_g7

0xc537,	// (0x00023e29) bg_popup_sub_pane_g8

0xc53f,	// (0x00023e31) bg_popup_sub_pane_g9

0x0008,

0xf835,	// (0x00027127) bg_popup_sub_pane_g

0xb206,	// (0x00022af8) bg_popup_window_pane_cp5_ParamLimits

0xb206,	// (0x00022af8) bg_popup_window_pane_cp5

0xb35d,	// (0x00022c4f) popup_note_window_g1_ParamLimits

0xb35d,	// (0x00022c4f) popup_note_window_g1

0xb369,	// (0x00022c5b) popup_note_window_t1_ParamLimits

0xb369,	// (0x00022c5b) popup_note_window_t1

0xb37f,	// (0x00022c71) popup_note_window_t2_ParamLimits

0xb37f,	// (0x00022c71) popup_note_window_t2

0xb395,	// (0x00022c87) popup_note_window_t3_ParamLimits

0xb395,	// (0x00022c87) popup_note_window_t3

0xb3ab,	// (0x00022c9d) popup_note_window_t4_ParamLimits

0xb3ab,	// (0x00022c9d) popup_note_window_t4

0xb3d3,	// (0x00022cc5) popup_note_window_t5_ParamLimits

0xb3d3,	// (0x00022cc5) popup_note_window_t5

0x0004,

0xf55a,	// (0x00026e4c) popup_note_window_t_ParamLimits

0xf55a,	// (0x00026e4c) popup_note_window_t

0xb41d,	// (0x00022d0f) bg_popup_window_pane_cp6_ParamLimits

0xb41d,	// (0x00022d0f) bg_popup_window_pane_cp6

0xcbe2,	// (0x000244d4) popup_note_image_window_g1_ParamLimits

0xcbe2,	// (0x000244d4) popup_note_image_window_g1

0xcbee,	// (0x000244e0) popup_note_image_window_g2_ParamLimits

0xcbee,	// (0x000244e0) popup_note_image_window_g2

0x0001,

0xf829,	// (0x0002711b) popup_note_image_window_g_ParamLimits

0xf829,	// (0x0002711b) popup_note_image_window_g

0xcc07,	// (0x000244f9) popup_note_image_window_t1_ParamLimits

0xcc07,	// (0x000244f9) popup_note_image_window_t1

0xcc20,	// (0x00024512) popup_note_image_window_t2_ParamLimits

0xcc20,	// (0x00024512) popup_note_image_window_t2

0xcc39,	// (0x0002452b) popup_note_image_window_t3_ParamLimits

0xcc39,	// (0x0002452b) popup_note_image_window_t3

0x0002,

0xf82e,	// (0x00027120) popup_note_image_window_t_ParamLimits

0xf82e,	// (0x00027120) popup_note_image_window_t

0xcacd,	// (0x000243bf) bg_popup_window_pane_cp7_ParamLimits

0xcacd,	// (0x000243bf) bg_popup_window_pane_cp7

0xcafd,	// (0x000243ef) popup_note_wait_window_g1_ParamLimits

0xcafd,	// (0x000243ef) popup_note_wait_window_g1

0xcb09,	// (0x000243fb) popup_note_wait_window_g2_ParamLimits

0xcb09,	// (0x000243fb) popup_note_wait_window_g2

0x0002,

0xf817,	// (0x00027109) popup_note_wait_window_g_ParamLimits

0xf817,	// (0x00027109) popup_note_wait_window_g

0xcb21,	// (0x00024413) popup_note_wait_window_t1_ParamLimits

0xcb21,	// (0x00024413) popup_note_wait_window_t1

0xcb48,	// (0x0002443a) popup_note_wait_window_t2_ParamLimits

0xcb48,	// (0x0002443a) popup_note_wait_window_t2

0xcb65,	// (0x00024457) popup_note_wait_window_t3_ParamLimits

0xcb65,	// (0x00024457) popup_note_wait_window_t3

0xcb78,	// (0x0002446a) popup_note_wait_window_t4_ParamLimits

0xcb78,	// (0x0002446a) popup_note_wait_window_t4

0x0004,

0xf81e,	// (0x00027110) popup_note_wait_window_t_ParamLimits

0xf81e,	// (0x00027110) popup_note_wait_window_t

0xcb9d,	// (0x0002448f) wait_bar_pane_ParamLimits

0xcb9d,	// (0x0002448f) wait_bar_pane

0xb1b8,	// (0x00022aaa) wait_anim_pane

0xb1b8,	// (0x00022aaa) wait_border_pane

0xb136,	// (0x00022a28) wait_anim_pane_g1

0xb136,	// (0x00022a28) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x00026fd0) wait_anim_pane_g

0xca7d,	// (0x0002436f) wait_border_pane_g1

0xca86,	// (0x00024378) wait_border_pane_g2

0xca8f,	// (0x00024381) wait_border_pane_g3

0x0002,

0xf810,	// (0x00027102) wait_border_pane_g

0xc8ed,	// (0x000241df) bg_popup_window_pane_cp16_ParamLimits

0xc8ed,	// (0x000241df) bg_popup_window_pane_cp16

0xc9ed,	// (0x000242df) indicator_popup_pane_cp4_ParamLimits

0xc9ed,	// (0x000242df) indicator_popup_pane_cp4

0xca01,	// (0x000242f3) popup_query_data_window_t1_ParamLimits

0xca01,	// (0x000242f3) popup_query_data_window_t1

0xca13,	// (0x00024305) popup_query_data_window_t2_ParamLimits

0xca13,	// (0x00024305) popup_query_data_window_t2

0xca2c,	// (0x0002431e) popup_query_data_window_t3_ParamLimits

0xca2c,	// (0x0002431e) popup_query_data_window_t3

0x0002,

0xf809,	// (0x000270fb) popup_query_data_window_t_ParamLimits

0xf809,	// (0x000270fb) popup_query_data_window_t

0xca46,	// (0x00024338) query_popup_data_pane_ParamLimits

0xca46,	// (0x00024338) query_popup_data_pane

0xca5a,	// (0x0002434c) query_popup_data_pane_cp1_ParamLimits

0xca5a,	// (0x0002434c) query_popup_data_pane_cp1

0xc8ed,	// (0x000241df) bg_popup_window_pane_cp10_ParamLimits

0xc8ed,	// (0x000241df) bg_popup_window_pane_cp10

0xc91f,	// (0x00024211) indicator_popup_pane_ParamLimits

0xc91f,	// (0x00024211) indicator_popup_pane

0xc941,	// (0x00024233) popup_query_code_window_t1_ParamLimits

0xc941,	// (0x00024233) popup_query_code_window_t1

0xc95b,	// (0x0002424d) popup_query_code_window_t2_ParamLimits

0xc95b,	// (0x0002424d) popup_query_code_window_t2

0xc9a4,	// (0x00024296) popup_query_code_window_t3_ParamLimits

0xc9a4,	// (0x00024296) popup_query_code_window_t3

0x0002,

0xf802,	// (0x000270f4) popup_query_code_window_t_ParamLimits

0xf802,	// (0x000270f4) popup_query_code_window_t

0xc9d3,	// (0x000242c5) query_popup_pane_ParamLimits

0xc9d3,	// (0x000242c5) query_popup_pane

0xb41d,	// (0x00022d0f) bg_popup_window_pane_cp15_ParamLimits

0xb41d,	// (0x00022d0f) bg_popup_window_pane_cp15

0xb43b,	// (0x00022d2d) indicator_popup_pane_cp1_ParamLimits

0xb43b,	// (0x00022d2d) indicator_popup_pane_cp1

0xb44e,	// (0x00022d40) indicator_popup_pane_cp2_ParamLimits

0xb44e,	// (0x00022d40) indicator_popup_pane_cp2

0xb461,	// (0x00022d53) popup_query_data_code_window_g1_ParamLimits

0xb461,	// (0x00022d53) popup_query_data_code_window_g1

0xb474,	// (0x00022d66) popup_query_data_code_window_t1_ParamLimits

0xb474,	// (0x00022d66) popup_query_data_code_window_t1

0xb486,	// (0x00022d78) popup_query_data_code_window_t2_ParamLimits

0xb486,	// (0x00022d78) popup_query_data_code_window_t2

0xb498,	// (0x00022d8a) popup_query_data_code_window_t3_ParamLimits

0xb498,	// (0x00022d8a) popup_query_data_code_window_t3

0xb4ae,	// (0x00022da0) popup_query_data_code_window_t4_ParamLimits

0xb4ae,	// (0x00022da0) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00026e57) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00026e57) popup_query_data_code_window_t

0xbff4,	// (0x000238e6) list_single_midp_graphic_pane_g3

0xb4c6,	// (0x00022db8) query_popup_data_pane_cp2_ParamLimits

0xb4d9,	// (0x00022dcb) query_popup_pane_cp2_ParamLimits

0xb4d9,	// (0x00022dcb) query_popup_pane_cp2

0xb1b8,	// (0x00022aaa) bg_popup_window_pane_cp11

0xc8d1,	// (0x000241c3) heading_pane_cp5

0xc8d9,	// (0x000241cb) listscroll_popup_info_pane

0xb1b8,	// (0x00022aaa) input_focus_pane_cp3

0xb4ec,	// (0x00022dde) query_popup_pane_t1

0xb4fa,	// (0x00022dec) list_popup_info_pane_ParamLimits

0xb4fa,	// (0x00022dec) list_popup_info_pane

0xb509,	// (0x00022dfb) listscroll_popup_info_pane_g1

0xb511,	// (0x00022e03) scroll_pane_cp7

0xb519,	// (0x00022e0b) popup_info_list_pane_t1_ParamLimits

0xb519,	// (0x00022e0b) popup_info_list_pane_t1

0xb533,	// (0x00022e25) popup_info_list_pane_t2_ParamLimits

0xb533,	// (0x00022e25) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00026e60) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00026e60) popup_info_list_pane_t

0xb1b8,	// (0x00022aaa) bg_popup_window_pane_cp12

0xd7ae,	// (0x000250a0) find_popup_pane

0xb21c,	// (0x00022b0e) bg_popup_window_pane_cp3

0xb54d,	// (0x00022e3f) heading_pane_cp3

0xb55c,	// (0x00022e4e) listscroll_popup_graphic_pane

0xb1b8,	// (0x00022aaa) bg_popup_window_pane_cp4

0x80c5,	// (0x0001f9b7) heading_pane_cp4

0xb56b,	// (0x00022e5d) listscroll_popup_colour_pane

0xb573,	// (0x00022e65) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb573,	// (0x00022e65) cell_large_graphic_colour_none_popup_pane

0x80cd,	// (0x0001f9bf) grid_large_graphic_colour_popup_pane_ParamLimits

0x80cd,	// (0x0001f9bf) grid_large_graphic_colour_popup_pane

0x80e9,	// (0x0001f9db) listscroll_popup_colour_pane_g1_ParamLimits

0x80e9,	// (0x0001f9db) listscroll_popup_colour_pane_g1

0x8100,	// (0x0001f9f2) listscroll_popup_colour_pane_g2_ParamLimits

0x8100,	// (0x0001f9f2) listscroll_popup_colour_pane_g2

0xb583,	// (0x00022e75) listscroll_popup_colour_pane_g3_ParamLimits

0xb583,	// (0x00022e75) listscroll_popup_colour_pane_g3

0x8114,	// (0x0001fa06) listscroll_popup_colour_pane_g4_ParamLimits

0x8114,	// (0x0001fa06) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00026e65) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00026e65) listscroll_popup_colour_pane_g

0xb593,	// (0x00022e85) scroll_pane_cp6_ParamLimits

0xb593,	// (0x00022e85) scroll_pane_cp6

0x8123,	// (0x0001fa15) cell_large_graphic_colour_popup_pane_ParamLimits

0x8123,	// (0x0001fa15) cell_large_graphic_colour_popup_pane

0xb5a5,	// (0x00022e97) cell_large_graphic_colour_none_popup_pane_t1

0xb1b8,	// (0x00022aaa) grid_highlight_pane_cp5

0xb5b4,	// (0x00022ea6) cell_large_graphic_colour_popup_pane_g1

0xb5bc,	// (0x00022eae) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00026e6e) cell_large_graphic_colour_popup_pane_g

0xb5c4,	// (0x00022eb6) cell_large_graphic_colour_popup_pane_g2_copy1

0xb5cd,	// (0x00022ebf) grid_highlight_pane_cp4

0xb5d5,	// (0x00022ec7) bg_popup_window_pane_cp8_ParamLimits

0xb5d5,	// (0x00022ec7) bg_popup_window_pane_cp8

0xb5f0,	// (0x00022ee2) popup_snote_single_text_window_g1_ParamLimits

0xb5f0,	// (0x00022ee2) popup_snote_single_text_window_g1

0xb602,	// (0x00022ef4) popup_snote_single_text_window_t1_ParamLimits

0xb602,	// (0x00022ef4) popup_snote_single_text_window_t1

0xb615,	// (0x00022f07) popup_snote_single_text_window_t2_ParamLimits

0xb615,	// (0x00022f07) popup_snote_single_text_window_t2

0xb628,	// (0x00022f1a) popup_snote_single_text_window_t3_ParamLimits

0xb628,	// (0x00022f1a) popup_snote_single_text_window_t3

0xb661,	// (0x00022f53) popup_snote_single_text_window_t4_ParamLimits

0xb661,	// (0x00022f53) popup_snote_single_text_window_t4

0xb695,	// (0x00022f87) popup_snote_single_text_window_t5_ParamLimits

0xb695,	// (0x00022f87) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00026e73) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00026e73) popup_snote_single_text_window_t

0xb6c4,	// (0x00022fb6) bg_popup_window_pane_cp9_ParamLimits

0xb6c4,	// (0x00022fb6) bg_popup_window_pane_cp9

0xb5f0,	// (0x00022ee2) popup_snote_single_graphic_window_g1_ParamLimits

0xb5f0,	// (0x00022ee2) popup_snote_single_graphic_window_g1

0xb6d2,	// (0x00022fc4) popup_snote_single_graphic_window_g2_ParamLimits

0xb6d2,	// (0x00022fc4) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00026e7e) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00026e7e) popup_snote_single_graphic_window_g

0xb6de,	// (0x00022fd0) popup_snote_single_graphic_window_t1_ParamLimits

0xb6de,	// (0x00022fd0) popup_snote_single_graphic_window_t1

0xb6f1,	// (0x00022fe3) popup_snote_single_graphic_window_t2_ParamLimits

0xb6f1,	// (0x00022fe3) popup_snote_single_graphic_window_t2

0xb628,	// (0x00022f1a) popup_snote_single_graphic_window_t3_ParamLimits

0xb628,	// (0x00022f1a) popup_snote_single_graphic_window_t3

0xb661,	// (0x00022f53) popup_snote_single_graphic_window_t4_ParamLimits

0xb661,	// (0x00022f53) popup_snote_single_graphic_window_t4

0xb695,	// (0x00022f87) popup_snote_single_graphic_window_t5_ParamLimits

0xb695,	// (0x00022f87) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00026e83) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00026e83) popup_snote_single_graphic_window_t

0x955a,	// (0x00020e4c) grid_graphic_popup_pane_ParamLimits

0x955a,	// (0x00020e4c) grid_graphic_popup_pane

0x957d,	// (0x00020e6f) listscroll_popup_graphic_pane_g1_ParamLimits

0x957d,	// (0x00020e6f) listscroll_popup_graphic_pane_g1

0x9591,	// (0x00020e83) listscroll_popup_graphic_pane_g2_ParamLimits

0x9591,	// (0x00020e83) listscroll_popup_graphic_pane_g2

0x0001,

0xf97f,	// (0x00027271) listscroll_popup_graphic_pane_g_ParamLimits

0xf97f,	// (0x00027271) listscroll_popup_graphic_pane_g

0xd6ae,	// (0x00024fa0) scroll_pane_cp5

0x9516,	// (0x00020e08) cell_graphic_popup_pane_ParamLimits

0x9516,	// (0x00020e08) cell_graphic_popup_pane

0xd757,	// (0x00025049) cell_graphic_popup_pane_g1

0xd75f,	// (0x00025051) cell_graphic_popup_pane_g2

0xb5c4,	// (0x00022eb6) cell_graphic_popup_pane_g3

0x0002,

0xf978,	// (0x0002726a) cell_graphic_popup_pane_g

0xd768,	// (0x0002505a) cell_graphic_popup_pane_t2

0xb5cd,	// (0x00022ebf) grid_highlight_pane_cp3

0xb716,	// (0x00023008) list_gen_pane_ParamLimits

0xb716,	// (0x00023008) list_gen_pane

0xb73f,	// (0x00023031) scroll_pane

0x94e9,	// (0x00020ddb) bg_list_pane_g1_ParamLimits

0x94e9,	// (0x00020ddb) bg_list_pane_g1

0xd70e,	// (0x00025000) bg_list_pane_g2_ParamLimits

0xd70e,	// (0x00025000) bg_list_pane_g2

0xd721,	// (0x00025013) bg_list_pane_g3_ParamLimits

0xd721,	// (0x00025013) bg_list_pane_g3

0xd733,	// (0x00025025) bg_list_pane_g4_ParamLimits

0xd733,	// (0x00025025) bg_list_pane_g4

0x9504,	// (0x00020df6) bg_list_pane_g5_ParamLimits

0x9504,	// (0x00020df6) bg_list_pane_g5

0x0004,

0xf96d,	// (0x0002725f) bg_list_pane_g_ParamLimits

0xf96d,	// (0x0002725f) bg_list_pane_g

0x94c2,	// (0x00020db4) list_double2_graphic_large_graphic_pane_ParamLimits

0x94c2,	// (0x00020db4) list_double2_graphic_large_graphic_pane

0x94c2,	// (0x00020db4) list_double2_graphic_pane_ParamLimits

0x94c2,	// (0x00020db4) list_double2_graphic_pane

0x94c2,	// (0x00020db4) list_double2_large_graphic_pane_ParamLimits

0x94c2,	// (0x00020db4) list_double2_large_graphic_pane

0x94c2,	// (0x00020db4) list_double2_pane_ParamLimits

0x94c2,	// (0x00020db4) list_double2_pane

0x94c2,	// (0x00020db4) list_double_graphic_heading_pane_ParamLimits

0x94c2,	// (0x00020db4) list_double_graphic_heading_pane

0x94c2,	// (0x00020db4) list_double_graphic_pane_ParamLimits

0x94c2,	// (0x00020db4) list_double_graphic_pane

0x94c2,	// (0x00020db4) list_double_heading_pane_ParamLimits

0x94c2,	// (0x00020db4) list_double_heading_pane

0x94c2,	// (0x00020db4) list_double_large_graphic_pane_ParamLimits

0x94c2,	// (0x00020db4) list_double_large_graphic_pane

0x94c2,	// (0x00020db4) list_double_number_pane_ParamLimits

0x94c2,	// (0x00020db4) list_double_number_pane

0x94c2,	// (0x00020db4) list_double_pane_ParamLimits

0x94c2,	// (0x00020db4) list_double_pane

0x94c2,	// (0x00020db4) list_double_time_pane_ParamLimits

0x94c2,	// (0x00020db4) list_double_time_pane

0x94c2,	// (0x00020db4) list_setting_number_pane_ParamLimits

0x94c2,	// (0x00020db4) list_setting_number_pane

0x94c2,	// (0x00020db4) list_setting_pane_ParamLimits

0x94c2,	// (0x00020db4) list_setting_pane

0x94d4,	// (0x00020dc6) list_single_2graphic_pane_ParamLimits

0x94d4,	// (0x00020dc6) list_single_2graphic_pane

0x94d4,	// (0x00020dc6) list_single_graphic_heading_pane_ParamLimits

0x94d4,	// (0x00020dc6) list_single_graphic_heading_pane

0x94d4,	// (0x00020dc6) list_single_graphic_pane_ParamLimits

0x94d4,	// (0x00020dc6) list_single_graphic_pane

0x94d4,	// (0x00020dc6) list_single_heading_pane_ParamLimits

0x94d4,	// (0x00020dc6) list_single_heading_pane

0x7a3e,	// (0x0001f330) list_single_large_graphic_pane_ParamLimits

0x7a3e,	// (0x0001f330) list_single_large_graphic_pane

0x94d4,	// (0x00020dc6) list_single_number_heading_pane_ParamLimits

0x94d4,	// (0x00020dc6) list_single_number_heading_pane

0x94d4,	// (0x00020dc6) list_single_number_pane_ParamLimits

0x94d4,	// (0x00020dc6) list_single_number_pane

0x94d4,	// (0x00020dc6) list_single_pane_ParamLimits

0x94d4,	// (0x00020dc6) list_single_pane

0xb1b8,	// (0x00022aaa) list_highlight_pane_cp1

0x346f,	// (0x0001ad61) list_single_pane_g1_ParamLimits

0x346f,	// (0x0001ad61) list_single_pane_g1

0x347b,	// (0x0001ad6d) list_single_pane_g2_ParamLimits

0x347b,	// (0x0001ad6d) list_single_pane_g2

0x0001,

0xf5a3,	// (0x00026e95) list_single_pane_g_ParamLimits

0xf5a3,	// (0x00026e95) list_single_pane_g

0x3d20,	// (0x0001b612) list_single_pane_t1_ParamLimits

0x3d20,	// (0x0001b612) list_single_pane_t1

0x346f,	// (0x0001ad61) list_single_number_pane_g1_ParamLimits

0x346f,	// (0x0001ad61) list_single_number_pane_g1

0x347b,	// (0x0001ad6d) list_single_number_pane_g2_ParamLimits

0x347b,	// (0x0001ad6d) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x00026e95) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x00026e95) list_single_number_pane_g

0x3487,	// (0x0001ad79) list_single_number_pane_t1_ParamLimits

0x3487,	// (0x0001ad79) list_single_number_pane_t1

0x3ce1,	// (0x0001b5d3) list_single_number_pane_t2_ParamLimits

0x3ce1,	// (0x0001b5d3) list_single_number_pane_t2

0x0001,

0xf92e,	// (0x00027220) list_single_number_pane_t_ParamLimits

0xf92e,	// (0x00027220) list_single_number_pane_t

0x3bd6,	// (0x0001b4c8) list_single_graphic_pane_g1_ParamLimits

0x3bd6,	// (0x0001b4c8) list_single_graphic_pane_g1

0x346f,	// (0x0001ad61) list_single_graphic_pane_g2_ParamLimits

0x346f,	// (0x0001ad61) list_single_graphic_pane_g2

0x347b,	// (0x0001ad6d) list_single_graphic_pane_g3_ParamLimits

0x347b,	// (0x0001ad6d) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00026e8e) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00026e8e) list_single_graphic_pane_g

0x3487,	// (0x0001ad79) list_single_graphic_pane_t1_ParamLimits

0x3487,	// (0x0001ad79) list_single_graphic_pane_t1

0x346f,	// (0x0001ad61) list_single_heading_pane_g1_ParamLimits

0x346f,	// (0x0001ad61) list_single_heading_pane_g1

0x347b,	// (0x0001ad6d) list_single_heading_pane_g2_ParamLimits

0x347b,	// (0x0001ad6d) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00026e95) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00026e95) list_single_heading_pane_g

0x349d,	// (0x0001ad8f) list_single_heading_pane_t1_ParamLimits

0x349d,	// (0x0001ad8f) list_single_heading_pane_t1

0x34b3,	// (0x0001ada5) list_single_heading_pane_t2_ParamLimits

0x34b3,	// (0x0001ada5) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00026e9a) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00026e9a) list_single_heading_pane_t

0x346f,	// (0x0001ad61) list_single_number_heading_pane_g1_ParamLimits

0x346f,	// (0x0001ad61) list_single_number_heading_pane_g1

0x347b,	// (0x0001ad6d) list_single_number_heading_pane_g2_ParamLimits

0x347b,	// (0x0001ad6d) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x00026e95) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x00026e95) list_single_number_heading_pane_g

0x349d,	// (0x0001ad8f) list_single_number_heading_pane_t1_ParamLimits

0x349d,	// (0x0001ad8f) list_single_number_heading_pane_t1

0x34c5,	// (0x0001adb7) list_single_number_heading_pane_t2_ParamLimits

0x34c5,	// (0x0001adb7) list_single_number_heading_pane_t2

0x34d7,	// (0x0001adc9) list_single_number_heading_pane_t3_ParamLimits

0x34d7,	// (0x0001adc9) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x00026e9f) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x00026e9f) list_single_number_heading_pane_t

0x3bd6,	// (0x0001b4c8) list_single_graphic_heading_pane_g1_ParamLimits

0x3bd6,	// (0x0001b4c8) list_single_graphic_heading_pane_g1

0x7747,	// (0x0001f039) list_single_graphic_heading_pane_g4_ParamLimits

0x7747,	// (0x0001f039) list_single_graphic_heading_pane_g4

0x347b,	// (0x0001ad6d) list_single_graphic_heading_pane_g5_ParamLimits

0x347b,	// (0x0001ad6d) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x00026ea6) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x00026ea6) list_single_graphic_heading_pane_g

0x349d,	// (0x0001ad8f) list_single_graphic_heading_pane_t1_ParamLimits

0x349d,	// (0x0001ad8f) list_single_graphic_heading_pane_t1

0x34f8,	// (0x0001adea) list_single_graphic_heading_pane_t2_ParamLimits

0x34f8,	// (0x0001adea) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x00026ead) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x00026ead) list_single_graphic_heading_pane_t

0x3e37,	// (0x0001b729) list_single_large_graphic_pane_g1_ParamLimits

0x3e37,	// (0x0001b729) list_single_large_graphic_pane_g1

0x3e43,	// (0x0001b735) list_single_large_graphic_pane_g2_ParamLimits

0x3e43,	// (0x0001b735) list_single_large_graphic_pane_g2

0x3e4f,	// (0x0001b741) list_single_large_graphic_pane_g3_ParamLimits

0x3e4f,	// (0x0001b741) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x00026eb2) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x00026eb2) list_single_large_graphic_pane_g

0xca86,	// (0x00024378) wait_border_pane_g2_copy1

0x7758,	// (0x0001f04a) list_single_large_graphic_pane_g4_cp2

0x3e5b,	// (0x0001b74d) list_single_large_graphic_pane_t1_ParamLimits

0x3e5b,	// (0x0001b74d) list_single_large_graphic_pane_t1

0x354c,	// (0x0001ae3e) list_double_pane_g1_ParamLimits

0x354c,	// (0x0001ae3e) list_double_pane_g1

0x3558,	// (0x0001ae4a) list_double_pane_g2_ParamLimits

0x3558,	// (0x0001ae4a) list_double_pane_g2

0x0001,

0xf5c7,	// (0x00026eb9) list_double_pane_g_ParamLimits

0xf5c7,	// (0x00026eb9) list_double_pane_g

0x3564,	// (0x0001ae56) list_double_pane_t1_ParamLimits

0x3564,	// (0x0001ae56) list_double_pane_t1

0x357a,	// (0x0001ae6c) list_double_pane_t2_ParamLimits

0x357a,	// (0x0001ae6c) list_double_pane_t2

0x0001,

0xf5cc,	// (0x00026ebe) list_double_pane_t_ParamLimits

0xf5cc,	// (0x00026ebe) list_double_pane_t

0x7760,	// (0x0001f052) list_double2_pane_g1_ParamLimits

0x7760,	// (0x0001f052) list_double2_pane_g1

0x3730,	// (0x0001b022) list_double2_pane_g2_ParamLimits

0x3730,	// (0x0001b022) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x00026ec3) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x00026ec3) list_double2_pane_g

0x7771,	// (0x0001f063) list_double2_pane_t1_ParamLimits

0x7771,	// (0x0001f063) list_double2_pane_t1

0x3795,	// (0x0001b087) list_double2_pane_t2_ParamLimits

0x3795,	// (0x0001b087) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x00026ec8) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x00026ec8) list_double2_pane_t

0x354c,	// (0x0001ae3e) list_double_number_pane_g1_ParamLimits

0x354c,	// (0x0001ae3e) list_double_number_pane_g1

0x3558,	// (0x0001ae4a) list_double_number_pane_g2_ParamLimits

0x3558,	// (0x0001ae4a) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x00026eb9) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x00026eb9) list_double_number_pane_g

0x35cf,	// (0x0001aec1) list_double_number_pane_t1_ParamLimits

0x35cf,	// (0x0001aec1) list_double_number_pane_t1

0x35e1,	// (0x0001aed3) list_double_number_pane_t2_ParamLimits

0x35e1,	// (0x0001aed3) list_double_number_pane_t2

0x35f7,	// (0x0001aee9) list_double_number_pane_t3_ParamLimits

0x35f7,	// (0x0001aee9) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x00026ecd) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x00026ecd) list_double_number_pane_t

0x3463,	// (0x0001ad55) list_double_graphic_pane_g1_ParamLimits

0x3463,	// (0x0001ad55) list_double_graphic_pane_g1

0x3609,	// (0x0001aefb) list_double_graphic_pane_g2_ParamLimits

0x3609,	// (0x0001aefb) list_double_graphic_pane_g2

0x3618,	// (0x0001af0a) list_double_graphic_pane_g3_ParamLimits

0x3618,	// (0x0001af0a) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x00026ed4) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x00026ed4) list_double_graphic_pane_g

0x3630,	// (0x0001af22) list_double_graphic_pane_t1_ParamLimits

0x3630,	// (0x0001af22) list_double_graphic_pane_t1

0x3646,	// (0x0001af38) list_double_graphic_pane_t2_ParamLimits

0x3646,	// (0x0001af38) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x00026edd) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x00026edd) list_double_graphic_pane_t

0x3658,	// (0x0001af4a) list_double2_graphic_pane_g1_ParamLimits

0x3658,	// (0x0001af4a) list_double2_graphic_pane_g1

0x354c,	// (0x0001ae3e) list_double2_graphic_pane_g2_ParamLimits

0x354c,	// (0x0001ae3e) list_double2_graphic_pane_g2

0x3558,	// (0x0001ae4a) list_double2_graphic_pane_g3_ParamLimits

0x3558,	// (0x0001ae4a) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x00026ee2) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x00026ee2) list_double2_graphic_pane_g

0x3664,	// (0x0001af56) list_double2_graphic_pane_t1_ParamLimits

0x3664,	// (0x0001af56) list_double2_graphic_pane_t1

0x367a,	// (0x0001af6c) list_double2_graphic_pane_t2_ParamLimits

0x367a,	// (0x0001af6c) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x00026ee9) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x00026ee9) list_double2_graphic_pane_t

0x7787,	// (0x0001f079) list_double_large_graphic_pane_g1_ParamLimits

0x7787,	// (0x0001f079) list_double_large_graphic_pane_g1

0x77b0,	// (0x0001f0a2) list_double_large_graphic_pane_g2_ParamLimits

0x77b0,	// (0x0001f0a2) list_double_large_graphic_pane_g2

0x3558,	// (0x0001ae4a) list_double_large_graphic_pane_g3_ParamLimits

0x3558,	// (0x0001ae4a) list_double_large_graphic_pane_g3

0x77c1,	// (0x0001f0b3) list_double_large_graphic_pane_g4_ParamLimits

0x77c1,	// (0x0001f0b3) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x00026eee) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x00026eee) list_double_large_graphic_pane_g

0x36ea,	// (0x0001afdc) list_double_large_graphic_pane_t1_ParamLimits

0x36ea,	// (0x0001afdc) list_double_large_graphic_pane_t1

0x3703,	// (0x0001aff5) list_double_large_graphic_pane_t2_ParamLimits

0x3703,	// (0x0001aff5) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x00026ef9) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x00026ef9) list_double_large_graphic_pane_t

0x3715,	// (0x0001b007) list_double2_large_graphic_pane_g1_ParamLimits

0x3715,	// (0x0001b007) list_double2_large_graphic_pane_g1

0x7760,	// (0x0001f052) list_double2_large_graphic_pane_g2_ParamLimits

0x7760,	// (0x0001f052) list_double2_large_graphic_pane_g2

0x3730,	// (0x0001b022) list_double2_large_graphic_pane_g3_ParamLimits

0x3730,	// (0x0001b022) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x00026efe) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x00026efe) list_double2_large_graphic_pane_g

0x373c,	// (0x0001b02e) list_double2_large_graphic_pane_t1_ParamLimits

0x373c,	// (0x0001b02e) list_double2_large_graphic_pane_t1

0x3752,	// (0x0001b044) list_double2_large_graphic_pane_t2_ParamLimits

0x3752,	// (0x0001b044) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x00026f05) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x00026f05) list_double2_large_graphic_pane_t

0x77d2,	// (0x0001f0c4) list_double_heading_pane_g1_ParamLimits

0x77d2,	// (0x0001f0c4) list_double_heading_pane_g1

0x3773,	// (0x0001b065) list_double_heading_pane_g2_ParamLimits

0x3773,	// (0x0001b065) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x00026f0a) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x00026f0a) list_double_heading_pane_g

0x377f,	// (0x0001b071) list_double_heading_pane_t1_ParamLimits

0x377f,	// (0x0001b071) list_double_heading_pane_t1

0x3795,	// (0x0001b087) list_double_heading_pane_t2_ParamLimits

0x3795,	// (0x0001b087) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x00026f0f) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x00026f0f) list_double_heading_pane_t

0x37a7,	// (0x0001b099) list_double_graphic_heading_pane_g1_ParamLimits

0x37a7,	// (0x0001b099) list_double_graphic_heading_pane_g1

0x77d2,	// (0x0001f0c4) list_double_graphic_heading_pane_g2_ParamLimits

0x77d2,	// (0x0001f0c4) list_double_graphic_heading_pane_g2

0x3773,	// (0x0001b065) list_double_graphic_heading_pane_g3_ParamLimits

0x3773,	// (0x0001b065) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x00026f14) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x00026f14) list_double_graphic_heading_pane_g

0x37b3,	// (0x0001b0a5) list_double_graphic_heading_pane_t1_ParamLimits

0x37b3,	// (0x0001b0a5) list_double_graphic_heading_pane_t1

0x367a,	// (0x0001af6c) list_double_graphic_heading_pane_t2_ParamLimits

0x367a,	// (0x0001af6c) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x00026f1b) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x00026f1b) list_double_graphic_heading_pane_t

0x77b0,	// (0x0001f0a2) list_double_time_pane_g1_ParamLimits

0x77b0,	// (0x0001f0a2) list_double_time_pane_g1

0x3558,	// (0x0001ae4a) list_double_time_pane_g2_ParamLimits

0x3558,	// (0x0001ae4a) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x00026f20) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x00026f20) list_double_time_pane_g

0x37c9,	// (0x0001b0bb) list_double_time_pane_t1_ParamLimits

0x37c9,	// (0x0001b0bb) list_double_time_pane_t1

0x37df,	// (0x0001b0d1) list_double_time_pane_t2_ParamLimits

0x37df,	// (0x0001b0d1) list_double_time_pane_t2

0x37f1,	// (0x0001b0e3) list_double_time_pane_t3_ParamLimits

0x37f1,	// (0x0001b0e3) list_double_time_pane_t3

0x3803,	// (0x0001b0f5) list_double_time_pane_t4_ParamLimits

0x3803,	// (0x0001b0f5) list_double_time_pane_t4

0x0003,

0xf633,	// (0x00026f25) list_double_time_pane_t_ParamLimits

0xf633,	// (0x00026f25) list_double_time_pane_t

0x3815,	// (0x0001b107) list_setting_pane_g1_ParamLimits

0x3815,	// (0x0001b107) list_setting_pane_g1

0x3730,	// (0x0001b022) list_setting_pane_g2_ParamLimits

0x3730,	// (0x0001b022) list_setting_pane_g2

0x0001,

0xf63c,	// (0x00026f2e) list_setting_pane_g_ParamLimits

0xf63c,	// (0x00026f2e) list_setting_pane_g

0x3821,	// (0x0001b113) list_setting_pane_t1_ParamLimits

0x3821,	// (0x0001b113) list_setting_pane_t1

0x383b,	// (0x0001b12d) list_setting_pane_t2_ParamLimits

0x383b,	// (0x0001b12d) list_setting_pane_t2

0x0002,

0xf641,	// (0x00026f33) list_setting_pane_t_ParamLimits

0xf641,	// (0x00026f33) list_setting_pane_t

0x3878,	// (0x0001b16a) set_value_pane_cp_ParamLimits

0x3878,	// (0x0001b16a) set_value_pane_cp

0x3884,	// (0x0001b176) list_setting_number_pane_g1_ParamLimits

0x3884,	// (0x0001b176) list_setting_number_pane_g1

0x3890,	// (0x0001b182) list_setting_number_pane_g2_ParamLimits

0x3890,	// (0x0001b182) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x00026f3a) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x00026f3a) list_setting_number_pane_g

0x77e3,	// (0x0001f0d5) list_setting_number_pane_t1_ParamLimits

0x77e3,	// (0x0001f0d5) list_setting_number_pane_t1

0x38b3,	// (0x0001b1a5) list_setting_number_pane_t2_ParamLimits

0x38b3,	// (0x0001b1a5) list_setting_number_pane_t2

0x77fc,	// (0x0001f0ee) list_setting_number_pane_t3_ParamLimits

0x77fc,	// (0x0001f0ee) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x00026f3f) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x00026f3f) list_setting_number_pane_t

0x3878,	// (0x0001b16a) set_value_pane_ParamLimits

0x3878,	// (0x0001b16a) set_value_pane

0xb774,	// (0x00023066) bg_set_opt_pane_ParamLimits

0xb774,	// (0x00023066) bg_set_opt_pane

0x390e,	// (0x0001b200) set_value_pane_t1

0xb795,	// (0x00023087) slider_set_pane_cp3

0xb79e,	// (0x00023090) volume_small_pane_cp

0xb7a7,	// (0x00023099) list_form_gen_pane

0xb763,	// (0x00023055) scroll_pane_cp8

0x7814,	// (0x0001f106) form_field_data_pane_ParamLimits

0x7814,	// (0x0001f106) form_field_data_pane

0x782b,	// (0x0001f11d) form_field_data_wide_pane_ParamLimits

0x782b,	// (0x0001f11d) form_field_data_wide_pane

0x784b,	// (0x0001f13d) form_field_popup_pane_ParamLimits

0x784b,	// (0x0001f13d) form_field_popup_pane

0x7863,	// (0x0001f155) form_field_popup_wide_pane_ParamLimits

0x7863,	// (0x0001f155) form_field_popup_wide_pane

0x3992,	// (0x0001b284) form_field_slider_pane_ParamLimits

0x3992,	// (0x0001b284) form_field_slider_pane

0x39a5,	// (0x0001b297) form_field_slider_wide_pane_ParamLimits

0x39a5,	// (0x0001b297) form_field_slider_wide_pane

0xb7b0,	// (0x000230a2) data_form_pane

0x814a,	// (0x0001fa3c) form_field_data_pane_t1

0xb7bc,	// (0x000230ae) input_focus_pane

0xb7ca,	// (0x000230bc) data_form_wide_pane

0x39cc,	// (0x0001b2be) form_field_data_wide_pane_t1

0xb5e2,	// (0x00022ed4) input_focus_pane_cp6

0x7884,	// (0x0001f176) form_field_popup_pane_t1

0xb7bc,	// (0x000230ae) input_focus_pane_cp7

0xb7b0,	// (0x000230a2) list_form_pane

0x3a0e,	// (0x0001b300) form_field_popup_wide_pane_t1

0xb7bc,	// (0x000230ae) input_focus_pane_cp8

0xb7f6,	// (0x000230e8) list_form_wide_pane

0x78a4,	// (0x0001f196) form_field_slider_pane_t1_ParamLimits

0x78a4,	// (0x0001f196) form_field_slider_pane_t1

0x78ba,	// (0x0001f1ac) form_field_slider_pane_t2_ParamLimits

0x78ba,	// (0x0001f1ac) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x00026f4f) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x00026f4f) form_field_slider_pane_t

0xb206,	// (0x00022af8) input_focus_pane_cp9_ParamLimits

0xb206,	// (0x00022af8) input_focus_pane_cp9

0x78cf,	// (0x0001f1c1) slider_cont_pane_ParamLimits

0x78cf,	// (0x0001f1c1) slider_cont_pane

0xb805,	// (0x000230f7) form_field_slider_wide_pane_t1_ParamLimits

0xb805,	// (0x000230f7) form_field_slider_wide_pane_t1

0x3a63,	// (0x0001b355) form_field_slider_wide_pane_t2_ParamLimits

0x3a63,	// (0x0001b355) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x00026f54) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x00026f54) form_field_slider_wide_pane_t

0xb206,	// (0x00022af8) input_focus_pane_cp10_ParamLimits

0xb206,	// (0x00022af8) input_focus_pane_cp10

0x78e3,	// (0x0001f1d5) slider_cont_pane_cp1_ParamLimits

0x78e3,	// (0x0001f1d5) slider_cont_pane_cp1

0x78f9,	// (0x0001f1eb) slider_form_pane_cp

0xb817,	// (0x00023109) input_focus_pane_g1

0xb81f,	// (0x00023111) input_focus_pane_g2

0xb827,	// (0x00023119) input_focus_pane_g3

0xb82f,	// (0x00023121) input_focus_pane_g4

0xb837,	// (0x00023129) input_focus_pane_g5

0xb83f,	// (0x00023131) input_focus_pane_g6

0xb847,	// (0x00023139) input_focus_pane_g7

0xb84f,	// (0x00023141) input_focus_pane_g8

0xb857,	// (0x00023149) input_focus_pane_g9

0xb136,	// (0x00022a28) input_focus_pane_g10

0x0009,

0xf667,	// (0x00026f59) input_focus_pane_g

0xca8f,	// (0x00024381) wait_border_pane_g3_copy1

0x7901,	// (0x0001f1f3) data_form_pane_t1

0xb136,	// (0x00022a28) wait_anim_pane_g1_copy1

0x79e9,	// (0x0001f2db) data_form_wide_pane_t1

0x791a,	// (0x0001f20c) list_form_graphic_pane_cp_ParamLimits

0x791a,	// (0x0001f20c) list_form_graphic_pane_cp

0xd646,	// (0x00024f38) slider_form_pane_g1

0xd6ba,	// (0x00024fac) slider_form_pane_g2

0x0006,

0xf95e,	// (0x00027250) slider_form_pane_g

0x792e,	// (0x0001f220) list_form_graphic_pane_ParamLimits

0x792e,	// (0x0001f220) list_form_graphic_pane

0x3ac3,	// (0x0001b3b5) list_form_graphic_pane_g1

0x3acb,	// (0x0001b3bd) list_form_graphic_pane_t1_ParamLimits

0x3acb,	// (0x0001b3bd) list_form_graphic_pane_t1

0xb21c,	// (0x00022b0e) list_highlight_pane_cp5_ParamLimits

0xb21c,	// (0x00022b0e) list_highlight_pane_cp5

0x7943,	// (0x0001f235) find_pane_g1

0xb85f,	// (0x00023151) input_find_pane

0x3ae9,	// (0x0001b3db) input_find_pane_g1_ParamLimits

0x3ae9,	// (0x0001b3db) input_find_pane_g1

0x794e,	// (0x0001f240) input_find_pane_t1_ParamLimits

0x794e,	// (0x0001f240) input_find_pane_t1

0x7963,	// (0x0001f255) input_find_pane_t2_ParamLimits

0x7963,	// (0x0001f255) input_find_pane_t2

0x0001,

0xf67c,	// (0x00026f6e) input_find_pane_t_ParamLimits

0xf67c,	// (0x00026f6e) input_find_pane_t

0xb868,	// (0x0002315a) input_focus_pane_cp5_ParamLimits

0xb868,	// (0x0002315a) input_focus_pane_cp5

0xb206,	// (0x00022af8) bg_popup_window_pane_cp2_ParamLimits

0xb206,	// (0x00022af8) bg_popup_window_pane_cp2

0xb887,	// (0x00023179) listscroll_menu_pane_ParamLimits

0xb887,	// (0x00023179) listscroll_menu_pane

0xb893,	// (0x00023185) popup_submenu_window_ParamLimits

0xb893,	// (0x00023185) popup_submenu_window

0xb8b7,	// (0x000231a9) find_popup_pane_g1

0xb8bf,	// (0x000231b1) input_popup_find_pane_cp

0xb8c9,	// (0x000231bb) input_focus_pane_cp4_ParamLimits

0xb8c9,	// (0x000231bb) input_focus_pane_cp4

0xb8d7,	// (0x000231c9) input_popup_find_pane_t1_ParamLimits

0xb8d7,	// (0x000231c9) input_popup_find_pane_t1

0xb1b8,	// (0x00022aaa) bg_popup_sub_pane_cp

0xb905,	// (0x000231f7) listscroll_popup_sub_pane

0xb90d,	// (0x000231ff) list_submenu_pane_ParamLimits

0xb90d,	// (0x000231ff) list_submenu_pane

0xb91e,	// (0x00023210) scroll_pane_cp4

0xb926,	// (0x00023218) list_single_popup_submenu_pane_ParamLimits

0xb926,	// (0x00023218) list_single_popup_submenu_pane

0xb938,	// (0x0002322a) list_single_popup_submenu_pane_g1

0xb940,	// (0x00023232) list_single_popup_submenu_pane_t1_ParamLimits

0xb940,	// (0x00023232) list_single_popup_submenu_pane_t1

0xb206,	// (0x00022af8) bg_active_tab_pane_cp1_ParamLimits

0xb206,	// (0x00022af8) bg_active_tab_pane_cp1

0xd694,	// (0x00024f86) tabs_2_active_pane_g1

0x816e,	// (0x0001fa60) tabs_2_active_pane_t1

0xb206,	// (0x00022af8) bg_passive_tab_pane_cp1_ParamLimits

0xb206,	// (0x00022af8) bg_passive_tab_pane_cp1

0xd694,	// (0x00024f86) tabs_2_passive_pane_g1

0x816e,	// (0x0001fa60) tabs_2_passive_pane_t1

0xb21c,	// (0x00022b0e) bg_active_tab_pane_cp4

0x8184,	// (0x0001fa76) tabs_2_long_active_pane_t1

0xb955,	// (0x00023247) bg_passive_tab_pane_cp4

0xc56f,	// (0x00023e61) list_single_midp_graphic_pane_g4_ParamLimits

0xb21c,	// (0x00022b0e) bg_active_tab_pane_cp5

0x819b,	// (0x0001fa8d) tabs_3_long_active_pane_t1

0xb955,	// (0x00023247) bg_passive_tab_pane_cp5

0xc56f,	// (0x00023e61) list_single_midp_graphic_pane_g4

0xb21c,	// (0x00022b0e) bg_popup_window_pane_cp13_ParamLimits

0xb21c,	// (0x00022b0e) bg_popup_window_pane_cp13

0xb96a,	// (0x0002325c) listscroll_popup_fast_pane_ParamLimits

0xb96a,	// (0x0002325c) listscroll_popup_fast_pane

0xb979,	// (0x0002326b) grid_popup_fast_pane_ParamLimits

0xb979,	// (0x0002326b) grid_popup_fast_pane

0xb98b,	// (0x0002327d) scroll_pane_cp9_ParamLimits

0xb98b,	// (0x0002327d) scroll_pane_cp9

0xe99d,	// (0x0002628f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xe99d,	// (0x0002628f) list_single_graphic_hl_pane_t1_cp2

0xb9af,	// (0x000232a1) input_focus_pane_cp20_ParamLimits

0xb9af,	// (0x000232a1) input_focus_pane_cp20

0xb9bd,	// (0x000232af) query_popup_data_pane_t1_ParamLimits

0xb9bd,	// (0x000232af) query_popup_data_pane_t1

0xb9d0,	// (0x000232c2) query_popup_data_pane_t2_ParamLimits

0xb9d0,	// (0x000232c2) query_popup_data_pane_t2

0xba16,	// (0x00023308) query_popup_data_pane_t3_ParamLimits

0xba16,	// (0x00023308) query_popup_data_pane_t3

0xba57,	// (0x00023349) query_popup_data_pane_t4_ParamLimits

0xba57,	// (0x00023349) query_popup_data_pane_t4

0xba93,	// (0x00023385) query_popup_data_pane_t5_ParamLimits

0xba93,	// (0x00023385) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x00026f73) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x00026f73) query_popup_data_pane_t

0xb817,	// (0x00023109) bg_set_opt_pane_g1

0xb81f,	// (0x00023111) bg_set_opt_pane_g2

0xb827,	// (0x00023119) bg_set_opt_pane_g3

0xb82f,	// (0x00023121) bg_set_opt_pane_g4

0xb837,	// (0x00023129) bg_set_opt_pane_g5

0xb83f,	// (0x00023131) bg_set_opt_pane_g6

0xb847,	// (0x00023139) bg_set_opt_pane_g7

0xb84f,	// (0x00023141) bg_set_opt_pane_g8

0xb857,	// (0x00023149) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x00026f7e) bg_set_opt_pane_g

0x499e,	// (0x0001c290) control_top_pane_stacon_ParamLimits

0x499e,	// (0x0001c290) control_top_pane_stacon

0x49f1,	// (0x0001c2e3) signal_pane_stacon_ParamLimits

0x49f1,	// (0x0001c2e3) signal_pane_stacon

0xbe86,	// (0x00023778) stacon_top_pane_g1_ParamLimits

0xbe86,	// (0x00023778) stacon_top_pane_g1

0x4a16,	// (0x0001c308) title_pane_stacon_ParamLimits

0x4a16,	// (0x0001c308) title_pane_stacon

0x4a38,	// (0x0001c32a) uni_indicator_pane_stacon_ParamLimits

0x4a38,	// (0x0001c32a) uni_indicator_pane_stacon

0x4a4d,	// (0x0001c33f) battery_pane_stacon_ParamLimits

0x4a4d,	// (0x0001c33f) battery_pane_stacon

0x4a8d,	// (0x0001c37f) control_bottom_pane_stacon_ParamLimits

0x4a8d,	// (0x0001c37f) control_bottom_pane_stacon

0x4aac,	// (0x0001c39e) navi_pane_stacon_ParamLimits

0x4aac,	// (0x0001c39e) navi_pane_stacon

0xbea8,	// (0x0002379a) stacon_bottom_pane_g1_ParamLimits

0xbea8,	// (0x0002379a) stacon_bottom_pane_g1

0xbaca,	// (0x000233bc) aid_levels_signal_lsc_ParamLimits

0xbaca,	// (0x000233bc) aid_levels_signal_lsc

0x476a,	// (0x0001c05c) signal_pane_stacon_g1_ParamLimits

0x476a,	// (0x0001c05c) signal_pane_stacon_g1

0x4776,	// (0x0001c068) signal_pane_stacon_g2_ParamLimits

0x4776,	// (0x0001c068) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x00026f91) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x00026f91) signal_pane_stacon_g

0x47aa,	// (0x0001c09c) title_pane_stacon_t1_ParamLimits

0x47aa,	// (0x0001c09c) title_pane_stacon_t1

0xbae4,	// (0x000233d6) uni_indicator_pane_stacon_g1

0xbaee,	// (0x000233e0) uni_indicator_pane_stacon_g2

0xbaf8,	// (0x000233ea) uni_indicator_pane_stacon_g3

0xbb02,	// (0x000233f4) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x00026f9d) uni_indicator_pane_stacon_g

0x47cf,	// (0x0001c0c1) control_top_pane_stacon_g1

0x47d7,	// (0x0001c0c9) control_top_pane_stacon_t1_ParamLimits

0x47d7,	// (0x0001c0c9) control_top_pane_stacon_t1

0xbb0c,	// (0x000233fe) aid_levels_battery_lsc_ParamLimits

0xbb0c,	// (0x000233fe) aid_levels_battery_lsc

0x4808,	// (0x0001c0fa) battery_pane_stacon_g1_ParamLimits

0x4808,	// (0x0001c0fa) battery_pane_stacon_g1

0x4814,	// (0x0001c106) battery_pane_stacon_g2_ParamLimits

0x4814,	// (0x0001c106) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x00026fa6) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x00026fa6) battery_pane_stacon_g

0x4843,	// (0x0001c135) navi_icon_pane_stacon

0x4853,	// (0x0001c145) navi_navi_pane_stacon

0x4843,	// (0x0001c135) navi_text_pane_stacon

0x47cf,	// (0x0001c0c1) control_bottom_pane_stacon_g1

0x4863,	// (0x0001c155) control_bottom_pane_stacon_t1_ParamLimits

0x4863,	// (0x0001c155) control_bottom_pane_stacon_t1

0x81b1,	// (0x0001faa3) grid_app_pane_ParamLimits

0x81b1,	// (0x0001faa3) grid_app_pane

0x81df,	// (0x0001fad1) scroll_pane_cp15_ParamLimits

0x81df,	// (0x0001fad1) scroll_pane_cp15

0x81f2,	// (0x0001fae4) cell_app_pane_ParamLimits

0x81f2,	// (0x0001fae4) cell_app_pane

0x822f,	// (0x0001fb21) cell_app_pane_g1_ParamLimits

0x822f,	// (0x0001fb21) cell_app_pane_g1

0xbb34,	// (0x00023426) cell_app_pane_g2_ParamLimits

0xbb34,	// (0x00023426) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x00026fab) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x00026fab) cell_app_pane_g

0x8253,	// (0x0001fb45) cell_app_pane_t1_ParamLimits

0x8253,	// (0x0001fb45) cell_app_pane_t1

0xbb40,	// (0x00023432) grid_highlight_pane_ParamLimits

0xbb40,	// (0x00023432) grid_highlight_pane

0xb817,	// (0x00023109) cell_highlight_pane_g1

0xb81f,	// (0x00023111) cell_highlight_pane_g2

0xb827,	// (0x00023119) cell_highlight_pane_g3

0xb82f,	// (0x00023121) cell_highlight_pane_g4

0xb837,	// (0x00023129) cell_highlight_pane_g5

0xb83f,	// (0x00023131) cell_highlight_pane_g6

0xb847,	// (0x00023139) cell_highlight_pane_g7

0xb84f,	// (0x00023141) cell_highlight_pane_g8

0xb857,	// (0x00023149) cell_highlight_pane_g9

0xb136,	// (0x00022a28) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x00026f59) cell_highlight_pane_g

0xbb51,	// (0x00023443) bg_scroll_pane

0x48a7,	// (0x0001c199) scroll_handle_pane

0xbb98,	// (0x0002348a) scroll_bg_pane_g1

0xbbad,	// (0x0002349f) scroll_bg_pane_g2

0xbbc5,	// (0x000234b7) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x00026fb0) scroll_bg_pane_g

0xbbda,	// (0x000234cc) scroll_handle_focus_pane_ParamLimits

0xbbda,	// (0x000234cc) scroll_handle_focus_pane

0xbb98,	// (0x0002348a) scroll_handle_pane_g1

0xbbe7,	// (0x000234d9) scroll_handle_pane_g2

0xbbc5,	// (0x000234b7) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x00026fb7) scroll_handle_pane_g

0xb8c9,	// (0x000231bb) bg_popup_sub_pane_cp21_ParamLimits

0xb8c9,	// (0x000231bb) bg_popup_sub_pane_cp21

0xbbfb,	// (0x000234ed) popup_fep_japan_predictive_window_t1_ParamLimits

0xbbfb,	// (0x000234ed) popup_fep_japan_predictive_window_t1

0xbc12,	// (0x00023504) popup_fep_japan_predictive_window_t2_ParamLimits

0xbc12,	// (0x00023504) popup_fep_japan_predictive_window_t2

0xbc45,	// (0x00023537) popup_fep_japan_predictive_window_t3_ParamLimits

0xbc45,	// (0x00023537) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x00026fbe) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x00026fbe) popup_fep_japan_predictive_window_t

0xb1b8,	// (0x00022aaa) bg_popup_sub_pane_cp23

0xbc7c,	// (0x0002356e) listscroll_japin_cand_pane

0xbc84,	// (0x00023576) popup_fep_japan_candidate_window_t1

0xbc92,	// (0x00023584) candidate_pane_ParamLimits

0xbc92,	// (0x00023584) candidate_pane

0xbca5,	// (0x00023597) scroll_pane_cp30

0xbcad,	// (0x0002359f) list_single_popup_jap_candidate_pane_ParamLimits

0xbcad,	// (0x0002359f) list_single_popup_jap_candidate_pane

0xb1b8,	// (0x00022aaa) list_highlight_pane_cp30

0xbcc2,	// (0x000235b4) list_single_popup_jap_candidate_pane_t1

0x8273,	// (0x0001fb65) level_1_signal

0x8285,	// (0x0001fb77) level_2_signal

0x8298,	// (0x0001fb8a) level_3_signal

0x82ab,	// (0x0001fb9d) level_4_signal

0x82be,	// (0x0001fbb0) level_5_signal

0x82d1,	// (0x0001fbc3) level_6_signal

0x82e4,	// (0x0001fbd6) level_7_signal

0x8273,	// (0x0001fb65) level_1_battery

0x8285,	// (0x0001fb77) level_2_battery

0x8298,	// (0x0001fb8a) level_3_battery

0x82ab,	// (0x0001fb9d) level_4_battery

0x82be,	// (0x0001fbb0) level_5_battery

0x82d1,	// (0x0001fbc3) level_6_battery

0x82e4,	// (0x0001fbd6) level_7_battery

0xbce9,	// (0x000235db) list_menu_pane_ParamLimits

0xbce9,	// (0x000235db) list_menu_pane

0xbcff,	// (0x000235f1) scroll_pane_cp25_ParamLimits

0xbcff,	// (0x000235f1) scroll_pane_cp25

0x82f7,	// (0x0001fbe9) list_double2_graphic_pane_cp2_ParamLimits

0x82f7,	// (0x0001fbe9) list_double2_graphic_pane_cp2

0x82f7,	// (0x0001fbe9) list_double2_large_graphic_pane_cp2_ParamLimits

0x82f7,	// (0x0001fbe9) list_double2_large_graphic_pane_cp2

0x82f7,	// (0x0001fbe9) list_double2_pane_cp2_ParamLimits

0x82f7,	// (0x0001fbe9) list_double2_pane_cp2

0x82f7,	// (0x0001fbe9) list_double_graphic_pane_cp2_ParamLimits

0x82f7,	// (0x0001fbe9) list_double_graphic_pane_cp2

0x82f7,	// (0x0001fbe9) list_double_large_graphic_pane_cp2_ParamLimits

0x82f7,	// (0x0001fbe9) list_double_large_graphic_pane_cp2

0x82f7,	// (0x0001fbe9) list_double_number_pane_cp2_ParamLimits

0x82f7,	// (0x0001fbe9) list_double_number_pane_cp2

0x82f7,	// (0x0001fbe9) list_double_pane_cp2_ParamLimits

0x82f7,	// (0x0001fbe9) list_double_pane_cp2

0x8312,	// (0x0001fc04) list_single_2graphic_pane_cp2_ParamLimits

0x8312,	// (0x0001fc04) list_single_2graphic_pane_cp2

0x8312,	// (0x0001fc04) list_single_graphic_heading_pane_cp2_ParamLimits

0x8312,	// (0x0001fc04) list_single_graphic_heading_pane_cp2

0x8312,	// (0x0001fc04) list_single_graphic_pane_cp2_ParamLimits

0x8312,	// (0x0001fc04) list_single_graphic_pane_cp2

0x8312,	// (0x0001fc04) list_single_heading_pane_cp2_ParamLimits

0x8312,	// (0x0001fc04) list_single_heading_pane_cp2

0x8323,	// (0x0001fc15) list_single_large_graphic_pane_cp2_ParamLimits

0x8323,	// (0x0001fc15) list_single_large_graphic_pane_cp2

0x8312,	// (0x0001fc04) list_single_number_heading_pane_cp2_ParamLimits

0x8312,	// (0x0001fc04) list_single_number_heading_pane_cp2

0x8312,	// (0x0001fc04) list_single_number_pane_cp2_ParamLimits

0x8312,	// (0x0001fc04) list_single_number_pane_cp2

0x8312,	// (0x0001fc04) list_single_pane_cp2_ParamLimits

0x8312,	// (0x0001fc04) list_single_pane_cp2

0xbd21,	// (0x00023613) bg_popup_sub_pane_cp22

0x4956,	// (0x0001c248) popup_side_volume_key_window_g1

0x497a,	// (0x0001c26c) popup_side_volume_key_window_t1

0x4996,	// (0x0001c288) volume_small_pane_cp1

0xb206,	// (0x00022af8) bg_popup_sub_pane_cp24_ParamLimits

0xb206,	// (0x00022af8) bg_popup_sub_pane_cp24

0xbd37,	// (0x00023629) fep_china_uni_candidate_pane_ParamLimits

0xbd37,	// (0x00023629) fep_china_uni_candidate_pane

0xbd4b,	// (0x0002363d) fep_china_uni_entry_pane

0xbd5b,	// (0x0002364d) popup_fep_china_uni_window_g1

0xbd77,	// (0x00023669) fep_china_uni_entry_pane_g1

0xbd7f,	// (0x00023671) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x00026fef) fep_china_uni_entry_pane_g

0xbd87,	// (0x00023679) fep_entry_item_pane

0xbd91,	// (0x00023683) fep_candidate_item_pane

0xbd99,	// (0x0002368b) fep_china_uni_candidate_pane_g1

0xbda1,	// (0x00023693) fep_china_uni_candidate_pane_g2

0xbda9,	// (0x0002369b) fep_china_uni_candidate_pane_g3

0xbdb1,	// (0x000236a3) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x00026ff4) fep_china_uni_candidate_pane_g

0xb136,	// (0x00022a28) fep_entry_item_pane_g1

0xbdb9,	// (0x000236ab) fep_entry_item_pane_t1_ParamLimits

0xbdb9,	// (0x000236ab) fep_entry_item_pane_t1

0xbdcf,	// (0x000236c1) fep_candidate_item_pane_t1_ParamLimits

0xbdcf,	// (0x000236c1) fep_candidate_item_pane_t1

0xbde4,	// (0x000236d6) fep_candidate_item_pane_t2_ParamLimits

0xbde4,	// (0x000236d6) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x00026ffd) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x00026ffd) fep_candidate_item_pane_t

0xb21c,	// (0x00022b0e) list_highlight_pane_cp31_ParamLimits

0xb21c,	// (0x00022b0e) list_highlight_pane_cp31

0xbdf6,	// (0x000236e8) level_1_signal_lsc

0xbdff,	// (0x000236f1) level_2_signal_lsc

0xbe08,	// (0x000236fa) level_3_signal_lsc

0xbe11,	// (0x00023703) level_4_signal_lsc

0xbe1a,	// (0x0002370c) level_5_signal_lsc

0xbe23,	// (0x00023715) level_6_signal_lsc

0xbe2c,	// (0x0002371e) level_7_signal_lsc

0xbe2c,	// (0x0002371e) level_1_battery_lsc

0xbe35,	// (0x00023727) level_2_battery_lsc

0xbe3e,	// (0x00023730) level_3_battery_lsc

0xbe47,	// (0x00023739) level_4_battery_lsc

0xbe50,	// (0x00023742) level_5_battery_lsc

0xbe59,	// (0x0002374b) level_6_battery_lsc

0xbdf6,	// (0x000236e8) level_7_battery_lsc

0xbe62,	// (0x00023754) scroll_handle_focus_pane_g1

0xbe6b,	// (0x0002375d) scroll_handle_focus_pane_g2

0xbe74,	// (0x00023766) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x00027002) scroll_handle_focus_pane_g

0x7978,	// (0x0001f26a) list_single_2graphic_pane_g1_ParamLimits

0x7978,	// (0x0001f26a) list_single_2graphic_pane_g1

0x7747,	// (0x0001f039) list_single_2graphic_pane_g2_ParamLimits

0x7747,	// (0x0001f039) list_single_2graphic_pane_g2

0x347b,	// (0x0001ad6d) list_single_2graphic_pane_g3_ParamLimits

0x347b,	// (0x0001ad6d) list_single_2graphic_pane_g3

0x7984,	// (0x0001f276) list_single_2graphic_pane_g4_ParamLimits

0x7984,	// (0x0001f276) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x00027009) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x00027009) list_single_2graphic_pane_g

0x7995,	// (0x0001f287) list_single_2graphic_pane_t1_ParamLimits

0x7995,	// (0x0001f287) list_single_2graphic_pane_t1

0x79c3,	// (0x0001f2b5) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x79c3,	// (0x0001f2b5) list_double2_graphic_large_graphic_pane_g1

0x7760,	// (0x0001f052) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x7760,	// (0x0001f052) list_double2_graphic_large_graphic_pane_g2

0x3730,	// (0x0001b022) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x3730,	// (0x0001b022) list_double2_graphic_large_graphic_pane_g3

0x3b75,	// (0x0001b467) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x3b75,	// (0x0001b467) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x00027012) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x00027012) list_double2_graphic_large_graphic_pane_g

0x3b81,	// (0x0001b473) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x3b81,	// (0x0001b473) list_double2_graphic_large_graphic_pane_t1

0x3b97,	// (0x0001b489) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x3b97,	// (0x0001b489) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x0002701b) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x0002701b) list_double2_graphic_large_graphic_pane_t

0xbf4f,	// (0x00023841) popup_fast_swap_window_ParamLimits

0xbf4f,	// (0x00023841) popup_fast_swap_window

0xbf6b,	// (0x0002385d) popup_side_volume_key_window

0xbf85,	// (0x00023877) stacon_top_pane

0xbf8f,	// (0x00023881) status_pane_ParamLimits

0xbf8f,	// (0x00023881) status_pane

0x83de,	// (0x0001fcd0) status_small_pane

0xb1b8,	// (0x00022aaa) control_pane

0xb1b8,	// (0x00022aaa) stacon_bottom_pane

0xb763,	// (0x00023055) scroll_pane_cp121

0xb7a7,	// (0x00023099) set_content_pane

0xd69c,	// (0x00024f8e) bg_active_tab_pane_g1_cp1

0xbe7d,	// (0x0002376f) bg_active_tab_pane_g2_cp1

0xd6a5,	// (0x00024f97) bg_active_tab_pane_g3_cp1

0xd69c,	// (0x00024f8e) bg_passive_tab_pane_g1_cp1

0xbe7d,	// (0x0002376f) bg_passive_tab_pane_g2_cp1

0xd6a5,	// (0x00024f97) bg_passive_tab_pane_g3_cp1

0x83a8,	// (0x0001fc9a) bg_active_tab_pane_g1_cp2

0xbe7d,	// (0x0002376f) bg_active_tab_pane_g2_cp2

0x83b1,	// (0x0001fca3) bg_active_tab_pane_g3_cp2

0x83a8,	// (0x0001fc9a) bg_passive_tab_pane_g1_cp2

0xbe7d,	// (0x0002376f) bg_passive_tab_pane_g2_cp2

0x83b1,	// (0x0001fca3) bg_passive_tab_pane_g3_cp2

0x83ba,	// (0x0001fcac) bg_active_tab_pane_g1_cp3

0xbe7d,	// (0x0002376f) bg_active_tab_pane_g2_cp3

0x83c3,	// (0x0001fcb5) bg_active_tab_pane_g3_cp3

0x83ba,	// (0x0001fcac) bg_passive_tab_pane_g1_cp3

0xbe7d,	// (0x0002376f) bg_passive_tab_pane_g2_cp3

0x83c3,	// (0x0001fcb5) bg_passive_tab_pane_g3_cp3

0x83cc,	// (0x0001fcbe) bg_active_tab_pane_g1_cp4

0xbe7d,	// (0x0002376f) bg_active_tab_pane_g2_cp4

0x83d5,	// (0x0001fcc7) bg_active_tab_pane_g3_cp4

0x83cc,	// (0x0001fcbe) bg_passive_tab_pane_g1_cp4

0xbe7d,	// (0x0002376f) bg_passive_tab_pane_g2_cp4

0x83d5,	// (0x0001fcc7) bg_passive_tab_pane_g3_cp4

0xbec4,	// (0x000237b6) bg_active_tab_pane_g1_cp5

0xbe7d,	// (0x0002376f) bg_active_tab_pane_g2_cp5

0xbecd,	// (0x000237bf) bg_active_tab_pane_g3_cp5

0xbec4,	// (0x000237b6) bg_passive_tab_pane_g1_cp5

0xbe7d,	// (0x0002376f) bg_passive_tab_pane_g2_cp5

0xbecd,	// (0x000237bf) bg_passive_tab_pane_g3_cp5

0x1dbc,	// (0x000196ae) list_set_graphic_pane_ParamLimits

0x1dbc,	// (0x000196ae) list_set_graphic_pane

0xb1b8,	// (0x00022aaa) bg_set_opt_pane_cp4

0xbed6,	// (0x000237c8) list_set_graphic_pane_g1_ParamLimits

0xbed6,	// (0x000237c8) list_set_graphic_pane_g1

0xbee2,	// (0x000237d4) list_set_graphic_pane_g2_ParamLimits

0xbee2,	// (0x000237d4) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x00027020) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x00027020) list_set_graphic_pane_g

0x0009,

0xfaa5,	// (0x00027397) volume_small_pane_cp_g

0xbf04,	// (0x000237f6) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xbf04,	// (0x000237f6) list_double2_large_graphic_pane_g1_cp2

0xbf10,	// (0x00023802) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xbf10,	// (0x00023802) list_double2_large_graphic_pane_g2_cp2

0xbf1f,	// (0x00023811) list_double2_large_graphic_pane_g3_cp2

0xbf27,	// (0x00023819) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xbf27,	// (0x00023819) list_double2_large_graphic_pane_t1_cp2

0xbf3d,	// (0x0002382f) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xbf3d,	// (0x0002382f) list_double2_large_graphic_pane_t2_cp2

0xd3fe,	// (0x00024cf0) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xd3fe,	// (0x00024cf0) list_double_large_graphic_pane_g1_cp2

0xd40f,	// (0x00024d01) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xd40f,	// (0x00024d01) list_double_large_graphic_pane_g2_cp2

0xc06a,	// (0x0002395c) list_double_large_graphic_pane_g3_cp2

0xd41e,	// (0x00024d10) list_double_large_graphic_pane_g4_cp

0xd426,	// (0x00024d18) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xd426,	// (0x00024d18) list_double_large_graphic_pane_t1_cp2

0xd43d,	// (0x00024d2f) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xd43d,	// (0x00024d2f) list_double_large_graphic_pane_t2_cp2

0xbf9d,	// (0x0002388f) list_double2_graphic_pane_g1_cp2_ParamLimits

0xbf9d,	// (0x0002388f) list_double2_graphic_pane_g1_cp2

0xbfa9,	// (0x0002389b) list_double2_graphic_pane_g2_cp2_ParamLimits

0xbfa9,	// (0x0002389b) list_double2_graphic_pane_g2_cp2

0xbfb8,	// (0x000238aa) list_double2_graphic_pane_g3_cp2

0xbfc0,	// (0x000238b2) list_double2_graphic_pane_t1_cp2_ParamLimits

0xbfc0,	// (0x000238b2) list_double2_graphic_pane_t1_cp2

0xbfd6,	// (0x000238c8) list_double2_graphic_pane_t2_cp2_ParamLimits

0xbfd6,	// (0x000238c8) list_double2_graphic_pane_t2_cp2

0xbfe8,	// (0x000238da) list_single_number_heading_pane_g1_cp2_ParamLimits

0xbfe8,	// (0x000238da) list_single_number_heading_pane_g1_cp2

0xbff4,	// (0x000238e6) list_single_number_heading_pane_g2_cp2

0xbffc,	// (0x000238ee) list_single_number_heading_pane_t1_cp2_ParamLimits

0xbffc,	// (0x000238ee) list_single_number_heading_pane_t1_cp2

0xc012,	// (0x00023904) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc012,	// (0x00023904) list_single_number_heading_pane_t2_cp2

0xc024,	// (0x00023916) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc024,	// (0x00023916) list_single_number_heading_pane_t3_cp2

0xbfe8,	// (0x000238da) list_single_heading_pane_g1_cp2_ParamLimits

0xbfe8,	// (0x000238da) list_single_heading_pane_g1_cp2

0xbff4,	// (0x000238e6) list_single_heading_pane_g2_cp2

0xbffc,	// (0x000238ee) list_single_heading_pane_t1_cp2_ParamLimits

0xbffc,	// (0x000238ee) list_single_heading_pane_t1_cp2

0xd208,	// (0x00024afa) list_single_heading_pane_t2_cp2_ParamLimits

0xd208,	// (0x00024afa) list_single_heading_pane_t2_cp2

0xd18d,	// (0x00024a7f) list_double_graphic_pane_g1_cp2_ParamLimits

0xd18d,	// (0x00024a7f) list_double_graphic_pane_g1_cp2

0xd199,	// (0x00024a8b) list_double_graphic_pane_g2_cp2_ParamLimits

0xd199,	// (0x00024a8b) list_double_graphic_pane_g2_cp2

0xd1a8,	// (0x00024a9a) list_double_graphic_pane_g3_cp2

0xd1b0,	// (0x00024aa2) list_double_graphic_pane_t1_cp2_ParamLimits

0xd1b0,	// (0x00024aa2) list_double_graphic_pane_t1_cp2

0xd1c6,	// (0x00024ab8) list_double_graphic_pane_t2_cp2_ParamLimits

0xd1c6,	// (0x00024ab8) list_double_graphic_pane_t2_cp2

0xc05e,	// (0x00023950) list_double_number_pane_g1_cp2_ParamLimits

0xc05e,	// (0x00023950) list_double_number_pane_g1_cp2

0xc06a,	// (0x0002395c) list_double_number_pane_g2_cp2

0xd153,	// (0x00024a45) list_double_number_pane_t1_cp2_ParamLimits

0xd153,	// (0x00024a45) list_double_number_pane_t1_cp2

0xd165,	// (0x00024a57) list_double_number_pane_t2_cp2_ParamLimits

0xd165,	// (0x00024a57) list_double_number_pane_t2_cp2

0xd17b,	// (0x00024a6d) list_double_number_pane_t3_cp2_ParamLimits

0xd17b,	// (0x00024a6d) list_double_number_pane_t3_cp2

0xd0cb,	// (0x000249bd) list_single_graphic_pane_g1_cp2_ParamLimits

0xd0cb,	// (0x000249bd) list_single_graphic_pane_g1_cp2

0xbfe8,	// (0x000238da) list_single_graphic_pane_g2_cp2_ParamLimits

0xbfe8,	// (0x000238da) list_single_graphic_pane_g2_cp2

0xbff4,	// (0x000238e6) list_single_graphic_pane_g3_cp2

0xd0a3,	// (0x00024995) list_single_graphic_pane_t1_cp2_ParamLimits

0xd0a3,	// (0x00024995) list_single_graphic_pane_t1_cp2

0xbfe8,	// (0x000238da) list_single_number_pane_g1_cp2_ParamLimits

0xbfe8,	// (0x000238da) list_single_number_pane_g1_cp2

0xbff4,	// (0x000238e6) list_single_number_pane_g2_cp2

0xd0a3,	// (0x00024995) list_single_number_pane_t1_cp2_ParamLimits

0xd0a3,	// (0x00024995) list_single_number_pane_t1_cp2

0xd0b9,	// (0x000249ab) list_single_number_pane_t2_cp2_ParamLimits

0xd0b9,	// (0x000249ab) list_single_number_pane_t2_cp2

0xbf10,	// (0x00023802) list_double2_pane_g1_cp2_ParamLimits

0xbf10,	// (0x00023802) list_double2_pane_g1_cp2

0xbf1f,	// (0x00023811) list_double2_pane_g2_cp2

0xc036,	// (0x00023928) list_double2_pane_t1_cp2_ParamLimits

0xc036,	// (0x00023928) list_double2_pane_t1_cp2

0xc04c,	// (0x0002393e) list_double2_pane_t2_cp2_ParamLimits

0xc04c,	// (0x0002393e) list_double2_pane_t2_cp2

0xc05e,	// (0x00023950) list_double_pane_g1_cp2_ParamLimits

0xc05e,	// (0x00023950) list_double_pane_g1_cp2

0xc06a,	// (0x0002395c) list_double_pane_g2_cp2

0xc072,	// (0x00023964) list_double_pane_t1_cp2_ParamLimits

0xc072,	// (0x00023964) list_double_pane_t1_cp2

0xc088,	// (0x0002397a) list_double_pane_t2_cp2_ParamLimits

0xc088,	// (0x0002397a) list_double_pane_t2_cp2

0xc0b0,	// (0x000239a2) list_single_pane_cp2_g3

0xbfe8,	// (0x000238da) list_single_pane_g1_cp2_ParamLimits

0xbfe8,	// (0x000238da) list_single_pane_g1_cp2

0xbff4,	// (0x000238e6) list_single_pane_g2_cp2

0xc0c0,	// (0x000239b2) list_single_pane_t1_cp2_ParamLimits

0xc0c0,	// (0x000239b2) list_single_pane_t1_cp2

0xc0d8,	// (0x000239ca) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xc0d8,	// (0x000239ca) list_single_large_graphic_pane_g1_cp2

0xc0e4,	// (0x000239d6) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc0e4,	// (0x000239d6) list_single_large_graphic_pane_g2_cp2

0xc0f0,	// (0x000239e2) list_single_large_graphic_pane_g3_cp2

0xc0f8,	// (0x000239ea) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xc0f8,	// (0x000239ea) list_single_large_graphic_pane_g4_cp1

0xc112,	// (0x00023a04) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc112,	// (0x00023a04) list_single_large_graphic_pane_t1_cp2

0xd085,	// (0x00024977) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xd085,	// (0x00024977) list_single_graphic_heading_pane_g1_cp2

0xd060,	// (0x00024952) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xd060,	// (0x00024952) list_single_graphic_heading_pane_g4_cp2

0xbff4,	// (0x000238e6) list_single_graphic_heading_pane_g5_cp2

0xbffc,	// (0x000238ee) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xbffc,	// (0x000238ee) list_single_graphic_heading_pane_t1_cp2

0xd091,	// (0x00024983) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xd091,	// (0x00024983) list_single_graphic_heading_pane_t2_cp2

0xd054,	// (0x00024946) list_single_2graphic_pane_g1_cp2_ParamLimits

0xd054,	// (0x00024946) list_single_2graphic_pane_g1_cp2

0xd060,	// (0x00024952) list_single_2graphic_pane_g2_cp2_ParamLimits

0xd060,	// (0x00024952) list_single_2graphic_pane_g2_cp2

0xbff4,	// (0x000238e6) list_single_2graphic_pane_g3_cp2

0xc56f,	// (0x00023e61) list_single_2graphic_pane_g4_cp2_ParamLimits

0xc56f,	// (0x00023e61) list_single_2graphic_pane_g4_cp2

0xd06f,	// (0x00024961) list_single_2graphic_pane_t1_cp2_ParamLimits

0xd06f,	// (0x00024961) list_single_2graphic_pane_t1_cp2

0xb136,	// (0x00022a28) list_highlight_pane_g10_cp1

0xcc66,	// (0x00024558) list_highlight_pane_g1_cp1

0xcc6e,	// (0x00024560) list_highlight_pane_g2_cp1

0xcc76,	// (0x00024568) list_highlight_pane_g3_cp1

0xcc7e,	// (0x00024570) list_highlight_pane_g4_cp1

0xcc86,	// (0x00024578) list_highlight_pane_g5_cp1

0xcc8e,	// (0x00024580) list_highlight_pane_g6_cp1

0xcc96,	// (0x00024588) list_highlight_pane_g7_cp1

0xcc9e,	// (0x00024590) list_highlight_pane_g8_cp1

0xcca6,	// (0x00024598) list_highlight_pane_g9_cp1

0x90a1,	// (0x00020993) form_field_slider_pane_t3

0x90af,	// (0x000209a1) form_field_slider_pane_t4

0xcbb0,	// (0x000244a2) slider_form_pane_ParamLimits

0xcbb0,	// (0x000244a2) slider_form_pane

0xb1b8,	// (0x00022aaa) control_abbreviations

0xb1b8,	// (0x00022aaa) control_conventions

0xb1b8,	// (0x00022aaa) control_definitions

0xb1b8,	// (0x00022aaa) format_table_attribute

0xd252,	// (0x00024b44) bg_popup_preview_window_pane_g9

0xb1b8,	// (0x00022aaa) format_table_data2

0xb1b8,	// (0x00022aaa) format_table_data3

0xb1b8,	// (0x00022aaa) format_table_data_example

0x0008,

0xb1b8,	// (0x00022aaa) intro_purpose

0xf8be,	// (0x000271b0) bg_popup_preview_window_pane_g

0xb1b8,	// (0x00022aaa) texts_category

0xb1b8,	// (0x00022aaa) texts_graphics

0xc128,	// (0x00023a1a) text_digital

0xc137,	// (0x00023a29) text_primary

0xc146,	// (0x00023a38) text_primary_small

0xc155,	// (0x00023a47) text_secondary

0xc164,	// (0x00023a56) text_title

0xd745,	// (0x00025037) bg_passive_tab_pane_g1_cp3_srt

0xbe7d,	// (0x0002376f) bg_passive_tab_pane_g2_cp3_srt

0xd74e,	// (0x00025040) bg_passive_tab_pane_g3_cp3_srt

0xb206,	// (0x00022af8) bg_active_tab_pane_cp3_srt_ParamLimits

0xb206,	// (0x00022af8) bg_active_tab_pane_cp3_srt

0xd684,	// (0x00024f76) tabs_4_active_pane_srt_g1

0x7e61,	// (0x0001f753) tabs_4_active_pane_srt_t1_ParamLimits

0x7e61,	// (0x0001f753) tabs_4_active_pane_srt_t1

0xd745,	// (0x00025037) bg_active_tab_pane_g1_cp3_copy1

0xbe7d,	// (0x0002376f) bg_active_tab_pane_g2_cp3_copy1

0xd74e,	// (0x00025040) bg_active_tab_pane_g3_cp3_copy1

0xb21c,	// (0x00022b0e) tabs_2_long_active_pane_srt_ParamLimits

0xb21c,	// (0x00022b0e) tabs_2_long_active_pane_srt

0xb21c,	// (0x00022b0e) tabs_2_long_passive_pane_srt_ParamLimits

0xb21c,	// (0x00022b0e) tabs_2_long_passive_pane_srt

0xb955,	// (0x00023247) bg_passive_tab_pane_cp4_srt_ParamLimits

0xb955,	// (0x00023247) bg_passive_tab_pane_cp4_srt

0xd601,	// (0x00024ef3) bg_passive_tab_pane_g1_cp4_srt

0xbe7d,	// (0x0002376f) bg_passive_tab_pane_g2_cp4_srt

0xd60a,	// (0x00024efc) bg_passive_tab_pane_g3_cp4_srt

0xb21c,	// (0x00022b0e) bg_active_tab_pane_cp4_srt_ParamLimits

0xb21c,	// (0x00022b0e) bg_active_tab_pane_cp4_srt

0x8184,	// (0x0001fa76) tabs_2_long_active_pane_srt_t1_ParamLimits

0x8184,	// (0x0001fa76) tabs_2_long_active_pane_srt_t1

0xd601,	// (0x00024ef3) bg_active_tab_pane_g1_cp4_srt

0xbe7d,	// (0x0002376f) bg_active_tab_pane_g2_cp4_srt

0xd60a,	// (0x00024efc) bg_active_tab_pane_g3_cp4_srt

0xb206,	// (0x00022af8) tabs_3_long_active_pane_srt_ParamLimits

0xb206,	// (0x00022af8) tabs_3_long_active_pane_srt

0xb206,	// (0x00022af8) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb206,	// (0x00022af8) tabs_3_long_passive_pane_cp_srt

0xb206,	// (0x00022af8) tabs_3_long_passive_pane_srt_ParamLimits

0xb206,	// (0x00022af8) tabs_3_long_passive_pane_srt

0xb955,	// (0x00023247) bg_passive_tab_pane_cp5_srt_ParamLimits

0xb955,	// (0x00023247) bg_passive_tab_pane_cp5_srt

0xbec4,	// (0x000237b6) bg_passive_tab_pane_g1_cp5_srt

0xbe7d,	// (0x0002376f) bg_passive_tab_pane_g2_cp5_srt

0xbecd,	// (0x000237bf) bg_passive_tab_pane_g3_cp5_srt

0xb21c,	// (0x00022b0e) bg_active_tab_pane_cp5_srt_ParamLimits

0xb21c,	// (0x00022b0e) bg_active_tab_pane_cp5_srt

0x819b,	// (0x0001fa8d) tabs_3_long_active_pane_srt_t1_ParamLimits

0x819b,	// (0x0001fa8d) tabs_3_long_active_pane_srt_t1

0xbec4,	// (0x000237b6) bg_active_tab_pane_g1_cp5_srt

0xbe7d,	// (0x0002376f) bg_active_tab_pane_g2_cp5_srt

0xbecd,	// (0x000237bf) bg_active_tab_pane_g3_cp5_srt

0xd5f3,	// (0x00024ee5) navi_text_pane_srt_t1

0xd5eb,	// (0x00024edd) navi_icon_pane_srt_g1

0xc27c,	// (0x00023b6e) midp_editing_number_pane_srt

0xc173,	// (0x00023a65) midp_ticker_pane_srt

0xc284,	// (0x00023b76) midp_ticker_pane_srt_g1

0xc28c,	// (0x00023b7e) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x0002703f) midp_ticker_pane_srt_g

0xc294,	// (0x00023b86) midp_ticker_pane_srt_t1

0xd5dc,	// (0x00024ece) midp_editing_number_pane_t1_copy1

0x83e7,	// (0x0001fcd9) listscroll_midp_pane

0x83e7,	// (0x0001fcd9) midp_form_pane

0xc17b,	// (0x00023a6d) midp_info_popup_window_ParamLimits

0xc17b,	// (0x00023a6d) midp_info_popup_window

0xb8c9,	// (0x000231bb) bg_popup_sub_pane_cp50_ParamLimits

0xb8c9,	// (0x000231bb) bg_popup_sub_pane_cp50

0xc8c5,	// (0x000241b7) listscroll_midp_info_pane_ParamLimits

0xc8c5,	// (0x000241b7) listscroll_midp_info_pane

0xc8ad,	// (0x0002419f) listscroll_form_midp_pane_ParamLimits

0xc8ad,	// (0x0002419f) listscroll_form_midp_pane

0xc8b9,	// (0x000241ab) scroll_bar_cp050

0x9095,	// (0x00020987) list_midp_pane

0xdf2f,	// (0x00025821) signal_pane_g2_cp

0xc7df,	// (0x000240d1) listscroll_midp_info_pane_t1_ParamLimits

0xc7df,	// (0x000240d1) listscroll_midp_info_pane_t1

0xc7f7,	// (0x000240e9) listscroll_midp_info_pane_t2_ParamLimits

0xc7f7,	// (0x000240e9) listscroll_midp_info_pane_t2

0xc835,	// (0x00024127) listscroll_midp_info_pane_t3_ParamLimits

0xc835,	// (0x00024127) listscroll_midp_info_pane_t3

0xc86f,	// (0x00024161) listscroll_midp_info_pane_t4_ParamLimits

0xc86f,	// (0x00024161) listscroll_midp_info_pane_t4

0x0003,

0xf7f9,	// (0x000270eb) listscroll_midp_info_pane_t_ParamLimits

0xf7f9,	// (0x000270eb) listscroll_midp_info_pane_t

0xb91e,	// (0x00023210) scroll_pane_cp21

0xc783,	// (0x00024075) form_midp_field_choice_group_pane

0xc78c,	// (0x0002407e) form_midp_field_text_pane

0xc7c5,	// (0x000240b7) form_midp_field_time_pane

0xc7cd,	// (0x000240bf) form_midp_gauge_slider_pane

0xc7d6,	// (0x000240c8) form_midp_gauge_wait_pane

0xb1b8,	// (0x00022aaa) form_midp_image_pane

0x79d3,	// (0x0001f2c5) list_single_midp_pane_ParamLimits

0x79d3,	// (0x0001f2c5) list_single_midp_pane

0xc751,	// (0x00024043) form_midp_field_text_pane_t1

0xc5a7,	// (0x00023e99) input_focus_pane_cp050

0xc772,	// (0x00024064) list_midp_form_text_pane

0xc720,	// (0x00024012) form_midp_field_choice_group_pane_t1

0xc72e,	// (0x00024020) input_focus_pane_cp051

0xc742,	// (0x00024034) list_midp_choice_pane

0xb1b8,	// (0x00022aaa) status_idle_pane

0xc704,	// (0x00023ff6) form_midp_field_time_pane_t1

0xb136,	// (0x00022a28) wait_anim_pane_g2_copy1

0xc712,	// (0x00024004) form_midp_field_time_pane_t2

0x0001,

0xc1e6,	// (0x00023ad8) aid_navinavi_width_2_pane

0xf7f4,	// (0x000270e6) form_midp_field_time_pane_t

0xb1b8,	// (0x00022aaa) input_focus_pane_cp052

0xb1b8,	// (0x00022aaa) bg_input_focus_pane_cp040

0xc6e0,	// (0x00023fd2) form_midp_gauge_slider_pane_t1

0xc6ee,	// (0x00023fe0) form_midp_gauge_slider_pane_t2

0x9079,	// (0x0002096b) form_midp_gauge_slider_pane_t3

0x9087,	// (0x00020979) form_midp_gauge_slider_pane_t4

0x0003,

0xf7eb,	// (0x000270dd) form_midp_gauge_slider_pane_t

0xc6fc,	// (0x00023fee) form_midp_slider_pane

0xb21c,	// (0x00022b0e) bg_input_focus_pane_cp041_ParamLimits

0xb21c,	// (0x00022b0e) bg_input_focus_pane_cp041

0xc6b0,	// (0x00023fa2) form_midp_gauge_wait_pane_t1_ParamLimits

0xc6b0,	// (0x00023fa2) form_midp_gauge_wait_pane_t1

0xc6c2,	// (0x00023fb4) form_midp_gauge_wait_pane_t2_ParamLimits

0xc6c2,	// (0x00023fb4) form_midp_gauge_wait_pane_t2

0x0001,

0xf7e6,	// (0x000270d8) form_midp_gauge_wait_pane_t_ParamLimits

0xf7e6,	// (0x000270d8) form_midp_gauge_wait_pane_t

0xc6d4,	// (0x00023fc6) form_midp_wait_pane_ParamLimits

0xc6d4,	// (0x00023fc6) form_midp_wait_pane

0xc67a,	// (0x00023f6c) form_midp_image_pane_g1

0xc683,	// (0x00023f75) form_midp_image_pane_t1

0xc692,	// (0x00023f84) form_midp_image_pane_t2

0xc6a1,	// (0x00023f93) form_midp_image_pane_t3

0x0002,

0xf7df,	// (0x000270d1) form_midp_image_pane_t

0xc671,	// (0x00023f63) list_single_midp_pane_g1

0x3cbc,	// (0x0001b5ae) list_single_midp_pane_t1

0xc65d,	// (0x00023f4f) list_midp_form_item_pane_ParamLimits

0xc65d,	// (0x00023f4f) list_midp_form_item_pane

0xc18e,	// (0x00023a80) list_midp_form_item_pane_t1

0xc19d,	// (0x00023a8f) midp_ticker_pane_g1

0xc1a9,	// (0x00023a9b) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x00027025) midp_ticker_pane_g

0xc1b5,	// (0x00023aa7) midp_ticker_pane_t1

0xd5dc,	// (0x00024ece) midp_editing_number_pane_t1

0xd6db,	// (0x00024fcd) midp_editing_number_pane

0xd6e7,	// (0x00024fd9) midp_ticker_pane

0xd5cc,	// (0x00024ebe) ai_message_heading_pane

0xb1b8,	// (0x00022aaa) bg_popup_window_pane_cp14

0xd5d4,	// (0x00024ec6) listscroll_ai_message_pane

0xd556,	// (0x00024e48) ai_message_heading_pane_g1_ParamLimits

0xd556,	// (0x00024e48) ai_message_heading_pane_g1

0xd562,	// (0x00024e54) ai_message_heading_pane_g2_ParamLimits

0xd562,	// (0x00024e54) ai_message_heading_pane_g2

0xd56e,	// (0x00024e60) ai_message_heading_pane_g3_ParamLimits

0xd56e,	// (0x00024e60) ai_message_heading_pane_g3

0xd57a,	// (0x00024e6c) ai_message_heading_pane_g4_ParamLimits

0xd57a,	// (0x00024e6c) ai_message_heading_pane_g4

0x0003,

0xf920,	// (0x00027212) ai_message_heading_pane_g_ParamLimits

0xf920,	// (0x00027212) ai_message_heading_pane_g

0xd586,	// (0x00024e78) ai_message_heading_pane_t1_ParamLimits

0xd586,	// (0x00024e78) ai_message_heading_pane_t1

0xd5a0,	// (0x00024e92) ai_message_heading_pane_t2_ParamLimits

0xd5a0,	// (0x00024e92) ai_message_heading_pane_t2

0x0001,

0xf929,	// (0x0002721b) ai_message_heading_pane_t_ParamLimits

0xf929,	// (0x0002721b) ai_message_heading_pane_t

0xd5b2,	// (0x00024ea4) bg_popup_heading_pane_cp1_ParamLimits

0xd5b2,	// (0x00024ea4) bg_popup_heading_pane_cp1

0xd544,	// (0x00024e36) list_ai_message_pane_ParamLimits

0xd544,	// (0x00024e36) list_ai_message_pane

0xb91e,	// (0x00023210) scroll_pane_cp10

0xd4e0,	// (0x00024dd2) list_ai_message_pane_g1

0xd4e8,	// (0x00024dda) list_ai_message_pane_g2

0x0001,

0xf8fd,	// (0x000271ef) list_ai_message_pane_g

0xd4f0,	// (0x00024de2) list_ai_message_pane_t1_ParamLimits

0xd4f0,	// (0x00024de2) list_ai_message_pane_t1

0xd505,	// (0x00024df7) list_ai_message_pane_t2_ParamLimits

0xd505,	// (0x00024df7) list_ai_message_pane_t2

0xd51a,	// (0x00024e0c) list_ai_message_pane_t3_ParamLimits

0xd51a,	// (0x00024e0c) list_ai_message_pane_t3

0xd52f,	// (0x00024e21) list_ai_message_pane_t4_ParamLimits

0xd52f,	// (0x00024e21) list_ai_message_pane_t4

0x0003,

0xf902,	// (0x000271f4) list_ai_message_pane_t_ParamLimits

0xf902,	// (0x000271f4) list_ai_message_pane_t

0xd4ce,	// (0x00024dc0) cell_ai_soft_ind_pane_ParamLimits

0xd4ce,	// (0x00024dc0) cell_ai_soft_ind_pane

0xc1c7,	// (0x00023ab9) cell_ai_soft_ind_pane_g1_ParamLimits

0xc1c7,	// (0x00023ab9) cell_ai_soft_ind_pane_g1

0xb1b8,	// (0x00022aaa) grid_highlight_cp1

0xc1d4,	// (0x00023ac6) text_secondary_cp56_ParamLimits

0xc1d4,	// (0x00023ac6) text_secondary_cp56

0xd4a3,	// (0x00024d95) example_general_pane_ParamLimits

0xd4a3,	// (0x00024d95) example_general_pane

0xd4af,	// (0x00024da1) example_parent_pane_g1_ParamLimits

0xd4af,	// (0x00024da1) example_parent_pane_g1

0xd4bb,	// (0x00024dad) example_parent_pane_t1_ParamLimits

0xd4bb,	// (0x00024dad) example_parent_pane_t1

0x899f,	// (0x00020291) popup_preview_text_window_ParamLimits

0x899f,	// (0x00020291) popup_preview_text_window

0xc0b8,	// (0x000239aa) list_single_pane_cp2_g4

0xb41d,	// (0x00022d0f) bg_popup_preview_window_pane_ParamLimits

0xb41d,	// (0x00022d0f) bg_popup_preview_window_pane

0xd25a,	// (0x00024b4c) popup_preview_text_window_t1_ParamLimits

0xd25a,	// (0x00024b4c) popup_preview_text_window_t1

0xd278,	// (0x00024b6a) popup_preview_text_window_t2_ParamLimits

0xd278,	// (0x00024b6a) popup_preview_text_window_t2

0xd2c1,	// (0x00024bb3) popup_preview_text_window_t3_ParamLimits

0xd2c1,	// (0x00024bb3) popup_preview_text_window_t3

0xd306,	// (0x00024bf8) popup_preview_text_window_t4_ParamLimits

0xd306,	// (0x00024bf8) popup_preview_text_window_t4

0x0004,

0xf8d1,	// (0x000271c3) popup_preview_text_window_t_ParamLimits

0xf8d1,	// (0x000271c3) popup_preview_text_window_t

0xd384,	// (0x00024c76) scroll_pane_cp11

0xc4ff,	// (0x00023df1) bg_popup_preview_window_pane_g1

0xd21a,	// (0x00024b0c) bg_popup_preview_window_pane_g2

0xd222,	// (0x00024b14) bg_popup_preview_window_pane_g3

0xd22a,	// (0x00024b1c) bg_popup_preview_window_pane_g4

0xd232,	// (0x00024b24) bg_popup_preview_window_pane_g5

0xd23a,	// (0x00024b2c) bg_popup_preview_window_pane_g6

0xd242,	// (0x00024b34) bg_popup_preview_window_pane_g7

0xd24a,	// (0x00024b3c) bg_popup_preview_window_pane_g8

0x4465,	// (0x0001bd57) aid_popup_width_pane

0x8921,	// (0x00020213) popup_midp_note_alarm_window_ParamLimits

0x8921,	// (0x00020213) popup_midp_note_alarm_window

0xb7b0,	// (0x000230a2) data_form_pane_ParamLimits

0x787a,	// (0x0001f16c) form_field_data_pane_g1

0x814a,	// (0x0001fa3c) form_field_data_pane_t1_ParamLimits

0xb7bc,	// (0x000230ae) input_focus_pane_ParamLimits

0xb7ca,	// (0x000230bc) data_form_wide_pane_ParamLimits

0x39c0,	// (0x0001b2b2) form_field_data_wide_pane_g1

0x39cc,	// (0x0001b2be) form_field_data_wide_pane_t1_ParamLimits

0xb5e2,	// (0x00022ed4) input_focus_pane_cp6_ParamLimits

0x8162,	// (0x0001fa54) input_popup_find_pane_g1_ParamLimits

0x8162,	// (0x0001fa54) input_popup_find_pane_g1

0x4824,	// (0x0001c116) aid_navi_side_left_pane

0x4834,	// (0x0001c126) aid_navi_side_right_pane

0xcd37,	// (0x00024629) bg_popup_window_pane_cp30_ParamLimits

0xcd37,	// (0x00024629) bg_popup_window_pane_cp30

0xcdb1,	// (0x000246a3) popup_midp_note_alarm_window_g1_ParamLimits

0xcdb1,	// (0x000246a3) popup_midp_note_alarm_window_g1

0xcde1,	// (0x000246d3) popup_midp_note_alarm_window_t1_ParamLimits

0xcde1,	// (0x000246d3) popup_midp_note_alarm_window_t1

0xce82,	// (0x00024774) popup_midp_note_alarm_window_t2_ParamLimits

0xce82,	// (0x00024774) popup_midp_note_alarm_window_t2

0xcf30,	// (0x00024822) popup_midp_note_alarm_window_t3_ParamLimits

0xcf30,	// (0x00024822) popup_midp_note_alarm_window_t3

0xcf58,	// (0x0002484a) popup_midp_note_alarm_window_t4_ParamLimits

0xcf58,	// (0x0002484a) popup_midp_note_alarm_window_t4

0xcf78,	// (0x0002486a) popup_midp_note_alarm_window_t5_ParamLimits

0xcf78,	// (0x0002486a) popup_midp_note_alarm_window_t5

0x000a,

0xf86e,	// (0x00027160) popup_midp_note_alarm_window_t_ParamLimits

0xf86e,	// (0x00027160) popup_midp_note_alarm_window_t

0xd024,	// (0x00024916) wait_bar_pane_cp1_ParamLimits

0xd024,	// (0x00024916) wait_bar_pane_cp1

0xb1b8,	// (0x00022aaa) wait_anim_pane_copy1

0xb1b8,	// (0x00022aaa) wait_border_pane_copy1

0xca7d,	// (0x0002436f) wait_border_pane_g1_copy1

0x39e6,	// (0x0001b2d8) form_field_popup_pane_g1

0x7884,	// (0x0001f176) form_field_popup_pane_t1_ParamLimits

0xb7bc,	// (0x000230ae) input_focus_pane_cp7_ParamLimits

0xb7b0,	// (0x000230a2) list_form_pane_ParamLimits

0x3a06,	// (0x0001b2f8) form_field_popup_wide_pane_g1

0x3a0e,	// (0x0001b300) form_field_popup_wide_pane_t1_ParamLimits

0xb7bc,	// (0x000230ae) input_focus_pane_cp8_ParamLimits

0xb7f6,	// (0x000230e8) list_form_wide_pane_ParamLimits

0xd776,	// (0x00025068) aid_size_cell_graphic_pane

0x7901,	// (0x0001f1f3) data_form_pane_t1_ParamLimits

0x79e9,	// (0x0001f2db) data_form_wide_pane_t1_ParamLimits

0x8cfd,	// (0x000205ef) bg_status_flat_pane

0x7dbe,	// (0x0001f6b0) title_pane_t1_ParamLimits

0xb1ce,	// (0x00022ac0) title_pane_t2_ParamLimits

0xb1f4,	// (0x00022ae6) title_pane_t3_ParamLimits

0xf532,	// (0x00026e24) title_pane_t_ParamLimits

0x8273,	// (0x0001fb65) level_1_signal_ParamLimits

0x8285,	// (0x0001fb77) level_2_signal_ParamLimits

0x8298,	// (0x0001fb8a) level_3_signal_ParamLimits

0x82ab,	// (0x0001fb9d) level_4_signal_ParamLimits

0x82be,	// (0x0001fbb0) level_5_signal_ParamLimits

0x82d1,	// (0x0001fbc3) level_6_signal_ParamLimits

0x82e4,	// (0x0001fbd6) level_7_signal_ParamLimits

0x8273,	// (0x0001fb65) level_1_battery_ParamLimits

0x8285,	// (0x0001fb77) level_2_battery_ParamLimits

0x8298,	// (0x0001fb8a) level_3_battery_ParamLimits

0x82ab,	// (0x0001fb9d) level_4_battery_ParamLimits

0x82be,	// (0x0001fbb0) level_5_battery_ParamLimits

0x82d1,	// (0x0001fbc3) level_6_battery_ParamLimits

0x82e4,	// (0x0001fbd6) level_7_battery_ParamLimits

0xcc66,	// (0x00024558) bg_status_flat_pane_g1

0xcc6e,	// (0x00024560) bg_status_flat_pane_g2

0xcc76,	// (0x00024568) bg_status_flat_pane_g3

0xcc7e,	// (0x00024570) bg_status_flat_pane_g4

0xcc86,	// (0x00024578) bg_status_flat_pane_g5

0xcc8e,	// (0x00024580) bg_status_flat_pane_g6

0xcc96,	// (0x00024588) bg_status_flat_pane_g7

0x7e4b,	// (0x0001f73d) tabs_3_active_pane_t1_ParamLimits

0x7e4b,	// (0x0001f73d) tabs_3_passive_pane_t1_ParamLimits

0x7e61,	// (0x0001f753) tabs_4_active_pane_t1_ParamLimits

0x7e61,	// (0x0001f753) tabs_4_1_passive_pane_t1_ParamLimits

0x816e,	// (0x0001fa60) tabs_2_active_pane_t1_ParamLimits

0x816e,	// (0x0001fa60) tabs_2_passive_pane_t1_ParamLimits

0xb21c,	// (0x00022b0e) bg_active_tab_pane_cp4_ParamLimits

0x8184,	// (0x0001fa76) tabs_2_long_active_pane_t1_ParamLimits

0xb955,	// (0x00023247) bg_passive_tab_pane_cp4_ParamLimits

0x51d0,	// (0x0001cac2) list_single_midp_graphic_pane_t1_ParamLimits

0xb21c,	// (0x00022b0e) bg_active_tab_pane_cp5_ParamLimits

0x819b,	// (0x0001fa8d) tabs_3_long_active_pane_t1_ParamLimits

0xb955,	// (0x00023247) bg_passive_tab_pane_cp5_ParamLimits

0x51d0,	// (0x0001cac2) list_single_midp_graphic_pane_t1

0x8cfd,	// (0x000205ef) bg_status_flat_pane_ParamLimits

0xc3de,	// (0x00023cd0) indicator_pane_cp2_ParamLimits

0xc3de,	// (0x00023cd0) indicator_pane_cp2

0x8e63,	// (0x00020755) navi_pane_srt_ParamLimits

0x8e63,	// (0x00020755) navi_pane_srt

0xc406,	// (0x00023cf8) popup_clock_digital_analogue_window_cp1

0xb260,	// (0x00022b52) indicator_pane_t1

0xc173,	// (0x00023a65) copy_highlight_pane

0xc173,	// (0x00023a65) cursor_graphics_pane

0xc173,	// (0x00023a65) graphic_within_text_pane

0xc173,	// (0x00023a65) link_highlight_pane

0xd347,	// (0x00024c39) popup_preview_text_window_t5_ParamLimits

0xd347,	// (0x00024c39) popup_preview_text_window_t5

0xc1ee,	// (0x00023ae0) cursor_digital_pane

0xc1ee,	// (0x00023ae0) cursor_primary_pane

0xc1ff,	// (0x00023af1) cursor_primary_small_pane

0xc207,	// (0x00023af9) cursor_secondary_pane

0xc20f,	// (0x00023b01) cursor_title_pane

0xc1ee,	// (0x00023ae0) link_highlight_digital_pane

0xc1f6,	// (0x00023ae8) link_highlight_primary_pane

0xc1ff,	// (0x00023af1) link_highlight_primary_small_pane

0xc207,	// (0x00023af9) link_highlight_secondary_pane

0xc20f,	// (0x00023b01) link_highlight_title_pane

0xc1ee,	// (0x00023ae0) copy_highlight_digital_pane

0xc1ee,	// (0x00023ae0) copy_highlight_primary_pane

0xc1ff,	// (0x00023af1) copy_highlight_primary_small_pane

0xc207,	// (0x00023af9) copy_highlight_secondary_pane

0xc20f,	// (0x00023b01) copy_highlight_title_pane

0xc207,	// (0x00023af9) graphic_text_digital_pane

0xcce6,	// (0x000245d8) graphic_text_primary_pane

0xccef,	// (0x000245e1) graphic_text_primary_small_pane

0xc1ff,	// (0x00023af1) graphic_text_secondary_pane

0xc1ee,	// (0x00023ae0) graphic_text_title_pane

0x8483,	// (0x0001fd75) cursor_primary_pane_g1

0xccd8,	// (0x000245ca) cursor_text_primary_t1

0x90d1,	// (0x000209c3) cursor_primary_small_pane_g1

0xccca,	// (0x000245bc) cursor_text_primary_small_t1

0x90c7,	// (0x000209b9) cursor_primary_small_pane_g1_copy1

0xccbc,	// (0x000245ae) cursor_text_primary_small_t1_copy1

0xccae,	// (0x000245a0) cursor_text_title_t1

0x90bd,	// (0x000209af) cursor_title_pane_g1

0x8483,	// (0x0001fd75) cursor_digital_pane_g1

0xc217,	// (0x00023b09) cursor_text_digital_t1

0xc225,	// (0x00023b17) link_highlight_primary_pane_g1

0xcc57,	// (0x00024549) link_highlight_primary_pane_t1

0xc225,	// (0x00023b17) link_highlight_primary_small_pane_g1

0xc22d,	// (0x00023b1f) link_highlight_primary_small_pane_t1

0xc23c,	// (0x00023b2e) link_highlight_secondary_pane_g1

0xc244,	// (0x00023b36) link_highlight_secondary_pane_t1

0xcbbc,	// (0x000244ae) link_highlight_title_pane_g1

0xcbd3,	// (0x000244c5) link_highlight_title_pane_t1

0xcbbc,	// (0x000244ae) link_highlight_digital_pane_g1

0xcbc4,	// (0x000244b6) link_highlight_digital_pane_t1

0xca98,	// (0x0002438a) copy_highlight_primary_pane_g1

0xcabe,	// (0x000243b0) copy_highlight_primary_pane_t1

0xca98,	// (0x0002438a) copy_highlight_primary_small_pane_g1

0xcaaf,	// (0x000243a1) copy_highlight_primary_small_pane_t1

0xc253,	// (0x00023b45) copy_highlight_secondary_pane_g1

0xc25b,	// (0x00023b4d) copy_highlight_secondary_pane_t1

0xca98,	// (0x0002438a) copy_highlight_title_pane_g1

0xcaa0,	// (0x00024392) copy_highlight_title_pane_t1

0xca98,	// (0x0002438a) copy_highlight_digital_pane_g1

0xd871,	// (0x00025163) copy_highlight_digital_pane_t1

0xd7c5,	// (0x000250b7) graphic_text_primary_pane_g1

0xd855,	// (0x00025147) graphic_text_primary_pane_t1

0xd863,	// (0x00025155) graphic_text_primary_pane_t2

0x0001,

0xf99d,	// (0x0002728f) graphic_text_primary_pane_t

0xd831,	// (0x00025123) graphic_text_primary_small_pane_g1

0xd839,	// (0x0002512b) graphic_text_primary_small_pane_t1

0xd847,	// (0x00025139) graphic_text_primary_small_pane_t2

0x0001,

0xf998,	// (0x0002728a) graphic_text_primary_small_pane_t

0xd80d,	// (0x000250ff) graphic_text_secondary_pane_g1

0xd815,	// (0x00025107) graphic_text_secondary_pane_t1

0xd823,	// (0x00025115) graphic_text_secondary_pane_t2

0x0001,

0xf993,	// (0x00027285) graphic_text_secondary_pane_t

0xd7e9,	// (0x000250db) graphic_text_title_pane_g1

0xd7f1,	// (0x000250e3) graphic_text_title_pane_t1

0xd7ff,	// (0x000250f1) graphic_text_title_pane_t2

0x0001,

0xf98e,	// (0x00027280) graphic_text_title_pane_t

0xd7c5,	// (0x000250b7) graphic_text_digital_pane_g1

0xd7cd,	// (0x000250bf) graphic_text_digital_pane_t1

0xd7db,	// (0x000250cd) graphic_text_digital_pane_t2

0x0001,

0xf989,	// (0x0002727b) graphic_text_digital_pane_t

0xb21c,	// (0x00022b0e) navi_icon_pane_srt_ParamLimits

0xb21c,	// (0x00022b0e) navi_icon_pane_srt

0xb1b8,	// (0x00022aaa) navi_midp_pane_srt

0xb1b8,	// (0x00022aaa) navi_navi_pane_srt

0xb21c,	// (0x00022b0e) navi_text_pane_srt_ParamLimits

0xb21c,	// (0x00022b0e) navi_text_pane_srt

0xd64f,	// (0x00024f41) navi_navi_icon_text_pane_srt

0xd657,	// (0x00024f49) navi_navi_pane_srt_g1_ParamLimits

0xd657,	// (0x00024f49) navi_navi_pane_srt_g1

0xd669,	// (0x00024f5b) navi_navi_pane_srt_g2_ParamLimits

0xd669,	// (0x00024f5b) navi_navi_pane_srt_g2

0x0001,

0xf984,	// (0x00027276) navi_navi_pane_srt_g_ParamLimits

0xf984,	// (0x00027276) navi_navi_pane_srt_g

0xd67b,	// (0x00024f6d) navi_navi_tabs_pane_srt

0xd64f,	// (0x00024f41) navi_navi_text_pane_srt

0xd64f,	// (0x00024f41) navi_navi_volume_pane_srt

0xd7b6,	// (0x000250a8) navi_navi_text_pane_srt_t1

0x5534,	// (0x0001ce26) navi_navi_volume_pane_srt_g1

0x553c,	// (0x0001ce2e) volume_small_pane_srt_ParamLimits

0x553c,	// (0x0001ce2e) volume_small_pane_srt

0x4acb,	// (0x0001c3bd) volume_small_pane_srt_g1_ParamLimits

0x4acb,	// (0x0001c3bd) volume_small_pane_srt_g1

0x4adb,	// (0x0001c3cd) volume_small_pane_srt_g2_ParamLimits

0x4adb,	// (0x0001c3cd) volume_small_pane_srt_g2

0x4aec,	// (0x0001c3de) volume_small_pane_srt_g3_ParamLimits

0x4aec,	// (0x0001c3de) volume_small_pane_srt_g3

0x4afd,	// (0x0001c3ef) volume_small_pane_srt_g4_ParamLimits

0x4afd,	// (0x0001c3ef) volume_small_pane_srt_g4

0x4b0e,	// (0x0001c400) volume_small_pane_srt_g5_ParamLimits

0x4b0e,	// (0x0001c400) volume_small_pane_srt_g5

0x4b1f,	// (0x0001c411) volume_small_pane_srt_g6_ParamLimits

0x4b1f,	// (0x0001c411) volume_small_pane_srt_g6

0x4b30,	// (0x0001c422) volume_small_pane_srt_g7_ParamLimits

0x4b30,	// (0x0001c422) volume_small_pane_srt_g7

0x4b41,	// (0x0001c433) volume_small_pane_srt_g8_ParamLimits

0x4b41,	// (0x0001c433) volume_small_pane_srt_g8

0x4b52,	// (0x0001c444) volume_small_pane_srt_g9_ParamLimits

0x4b52,	// (0x0001c444) volume_small_pane_srt_g9

0x4b63,	// (0x0001c455) volume_small_pane_srt_g10_ParamLimits

0x4b63,	// (0x0001c455) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x0002702a) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x0002702a) volume_small_pane_srt_g

0xb4c6,	// (0x00022db8) query_popup_data_pane_cp2

0xd79c,	// (0x0002508e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xd79c,	// (0x0002508e) navi_navi_icon_text_pane_srt_t1

0xcce6,	// (0x000245d8) navi_tabs_2_long_pane_srt

0xcce6,	// (0x000245d8) navi_tabs_2_pane_srt

0xcce6,	// (0x000245d8) navi_tabs_3_long_pane_srt

0xcce6,	// (0x000245d8) navi_tabs_3_pane_srt

0xcce6,	// (0x000245d8) navi_tabs_4_pane_srt

0x5514,	// (0x0001ce06) tabs_2_active_pane_srt_ParamLimits

0x5514,	// (0x0001ce06) tabs_2_active_pane_srt

0x5524,	// (0x0001ce16) tabs_2_passive_pane_srt_ParamLimits

0x5524,	// (0x0001ce16) tabs_2_passive_pane_srt

0xc5a7,	// (0x00023e99) bg_passive_tab_pane_cp1_srt_ParamLimits

0xc5a7,	// (0x00023e99) bg_passive_tab_pane_cp1_srt

0xd69c,	// (0x00024f8e) bg_passive_tab_pane_g1_cp1_srt

0xbe7d,	// (0x0002376f) bg_passive_tab_pane_g2_cp1_srt

0xd6a5,	// (0x00024f97) bg_passive_tab_pane_g3_cp1_srt

0xb206,	// (0x00022af8) bg_active_tab_pane_cp1_srt_ParamLimits

0xb206,	// (0x00022af8) bg_active_tab_pane_cp1_srt

0xd694,	// (0x00024f86) tabs_2_active_pane_srt_g1

0x816e,	// (0x0001fa60) tabs_2_active_pane_srt_t1_ParamLimits

0x816e,	// (0x0001fa60) tabs_2_active_pane_srt_t1

0xd69c,	// (0x00024f8e) bg_active_tab_pane_g1_cp1_srt

0xbe7d,	// (0x0002376f) bg_active_tab_pane_g2_cp1_srt

0xd6a5,	// (0x00024f97) bg_active_tab_pane_g3_cp1_srt

0x54e1,	// (0x0001cdd3) tabs_3_active_pane_srt_ParamLimits

0x54e1,	// (0x0001cdd3) tabs_3_active_pane_srt

0x54f2,	// (0x0001cde4) tabs_3_passive_pane_cp_srt_ParamLimits

0x54f2,	// (0x0001cde4) tabs_3_passive_pane_cp_srt

0x5503,	// (0x0001cdf5) tabs_3_passive_pane_srt_ParamLimits

0x5503,	// (0x0001cdf5) tabs_3_passive_pane_srt

0xc5a7,	// (0x00023e99) bg_passive_tab_pane_cp2_srt_ParamLimits

0xc5a7,	// (0x00023e99) bg_passive_tab_pane_cp2_srt

0xc26a,	// (0x00023b5c) bg_passive_tab_pane_g1_cp2_srt

0xbe7d,	// (0x0002376f) bg_passive_tab_pane_g2_cp2_srt

0xc273,	// (0x00023b65) bg_passive_tab_pane_g3_cp2_srt

0xb206,	// (0x00022af8) bg_active_tab_pane_cp2_srt_ParamLimits

0xb206,	// (0x00022af8) bg_active_tab_pane_cp2_srt

0xd78c,	// (0x0002507e) tabs_3_active_pane_srt_g1

0x7e4b,	// (0x0001f73d) tabs_3_active_pane_srt_t1_ParamLimits

0x7e4b,	// (0x0001f73d) tabs_3_active_pane_srt_t1

0xc26a,	// (0x00023b5c) bg_active_tab_pane_g1_cp2_srt

0xbe7d,	// (0x0002376f) bg_active_tab_pane_g2_cp2_srt

0xc273,	// (0x00023b65) bg_active_tab_pane_g3_cp2_srt

0x5499,	// (0x0001cd8b) tabs_4_active_pane_srt_ParamLimits

0x5499,	// (0x0001cd8b) tabs_4_active_pane_srt

0x54ab,	// (0x0001cd9d) tabs_4_passive_pane_cp2_srt_ParamLimits

0x54ab,	// (0x0001cd9d) tabs_4_passive_pane_cp2_srt

0x4cc8,	// (0x0001c5ba) aid_size_cell_toolbar

0x8691,	// (0x0001ff83) main_idle_act_pane_ParamLimits

0x4e29,	// (0x0001c71b) popup_large_graphic_colour_window_ParamLimits

0x8bef,	// (0x000204e1) popup_toolbar_window_ParamLimits

0x8bef,	// (0x000204e1) popup_toolbar_window

0xd6fa,	// (0x00024fec) list_single_graphic_2heading_pane_ParamLimits

0xd6fa,	// (0x00024fec) list_single_graphic_2heading_pane

0xbb1a,	// (0x0002340c) aid_size_cell_apps_grid_lsc_pane

0xbb2c,	// (0x0002341e) aid_size_cell_apps_grid_prt_pane

0xb955,	// (0x00023247) bg_wml_button_pane_cp1_ParamLimits

0xb955,	// (0x00023247) bg_wml_button_pane_cp1

0xc751,	// (0x00024043) form_midp_field_text_pane_t1_ParamLimits

0xc5a7,	// (0x00023e99) input_focus_pane_cp050_ParamLimits

0xc772,	// (0x00024064) list_midp_form_text_pane_ParamLimits

0xc72e,	// (0x00024020) input_focus_pane_cp051_ParamLimits

0xc742,	// (0x00024034) list_midp_choice_pane_ParamLimits

0xc62b,	// (0x00023f1d) list_single_2graphic_pane_cp3_ParamLimits

0xc62b,	// (0x00023f1d) list_single_2graphic_pane_cp3

0xc63e,	// (0x00023f30) list_single_midp_graphic_pane_ParamLimits

0xc63e,	// (0x00023f30) list_single_midp_graphic_pane

0x3bd6,	// (0x0001b4c8) list_single_graphic_2heading_pane_g1_ParamLimits

0x3bd6,	// (0x0001b4c8) list_single_graphic_2heading_pane_g1

0x346f,	// (0x0001ad61) list_single_graphic_2heading_pane_g4_ParamLimits

0x346f,	// (0x0001ad61) list_single_graphic_2heading_pane_g4

0x347b,	// (0x0001ad6d) list_single_graphic_2heading_pane_g5_ParamLimits

0x347b,	// (0x0001ad6d) list_single_graphic_2heading_pane_g5

0x0002,

0xf59c,	// (0x00026e8e) list_single_graphic_2heading_pane_g_ParamLimits

0xf59c,	// (0x00026e8e) list_single_graphic_2heading_pane_g

0x3be2,	// (0x0001b4d4) list_single_graphic_2heading_pane_t1_ParamLimits

0x3be2,	// (0x0001b4d4) list_single_graphic_2heading_pane_t1

0x3bf6,	// (0x0001b4e8) list_single_graphic_2heading_pane_t2_ParamLimits

0x3bf6,	// (0x0001b4e8) list_single_graphic_2heading_pane_t2

0x3c10,	// (0x0001b502) list_single_graphic_2heading_pane_t3_ParamLimits

0x3c10,	// (0x0001b502) list_single_graphic_2heading_pane_t3

0x0002,

0xf78b,	// (0x0002707d) list_single_graphic_2heading_pane_t_ParamLimits

0xf78b,	// (0x0002707d) list_single_graphic_2heading_pane_t

0xc449,	// (0x00023d3b) bg_popup_sub_pane_cp2

0xc46f,	// (0x00023d61) grid_toobar_pane

0x516c,	// (0x0001ca5e) cell_toolbar_pane_ParamLimits

0x516c,	// (0x0001ca5e) cell_toolbar_pane

0xc4a5,	// (0x00023d97) cell_toolbar_pane_g1_ParamLimits

0xc4a5,	// (0x00023d97) cell_toolbar_pane_g1

0xc4b7,	// (0x00023da9) cell_toolbar_pane_g2_ParamLimits

0xc4b7,	// (0x00023da9) cell_toolbar_pane_g2

0x0001,

0xf799,	// (0x0002708b) cell_toolbar_pane_g_ParamLimits

0xf799,	// (0x0002708b) cell_toolbar_pane_g

0xc4d9,	// (0x00023dcb) grid_highlight_pane_cp2_ParamLimits

0xc4d9,	// (0x00023dcb) grid_highlight_pane_cp2

0xc4f3,	// (0x00023de5) toolbar_button_pane

0xc4ff,	// (0x00023df1) toolbar_button_pane_g1

0xc507,	// (0x00023df9) toolbar_button_pane_g2

0xc50f,	// (0x00023e01) toolbar_button_pane_g3

0xc517,	// (0x00023e09) toolbar_button_pane_g4

0xc51f,	// (0x00023e11) toolbar_button_pane_g5

0xc527,	// (0x00023e19) toolbar_button_pane_g6

0xc52f,	// (0x00023e21) toolbar_button_pane_g7

0xc537,	// (0x00023e29) toolbar_button_pane_g8

0xc53f,	// (0x00023e31) toolbar_button_pane_g9

0x0009,

0xf79e,	// (0x00027090) toolbar_button_pane_g

0x519b,	// (0x0001ca8d) list_single_2graphic_pane_g1_cp3_ParamLimits

0x519b,	// (0x0001ca8d) list_single_2graphic_pane_g1_cp3

0x8fe1,	// (0x000208d3) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8fe1,	// (0x000208d3) list_single_2graphic_pane_g2_cp3

0xbff4,	// (0x000238e6) list_single_2graphic_pane_g3_cp3

0xc56f,	// (0x00023e61) list_single_2graphic_pane_g4_cp3_ParamLimits

0xc56f,	// (0x00023e61) list_single_2graphic_pane_g4_cp3

0x51b6,	// (0x0001caa8) list_single_2graphic_pane_t1_cp3_ParamLimits

0x51b6,	// (0x0001caa8) list_single_2graphic_pane_t1_cp3

0xbfe8,	// (0x000238da) list_single_midp_graphic_pane_g2_ParamLimits

0xbfe8,	// (0x000238da) list_single_midp_graphic_pane_g2

0x4cd0,	// (0x0001c5c2) aid_zoom_text_primary

0x3ba9,	// (0x0001b49b) aid_zoom_text_secondary

0x84bd,	// (0x0001fdaf) status_small_pane_g7_ParamLimits

0x84bd,	// (0x0001fdaf) status_small_pane_g7

0x84e0,	// (0x0001fdd2) status_small_pane_t1_ParamLimits

0x7d93,	// (0x0001f685) title_pane_g2

0x0003,

0xf529,	// (0x00026e1b) title_pane_g

0x8075,	// (0x0001f967) aid_size_cell_colour_1_pane_ParamLimits

0x8075,	// (0x0001f967) aid_size_cell_colour_1_pane

0x8089,	// (0x0001f97b) aid_size_cell_colour_2_pane_ParamLimits

0x8089,	// (0x0001f97b) aid_size_cell_colour_2_pane

0x809d,	// (0x0001f98f) aid_size_cell_colour_3_pane_ParamLimits

0x809d,	// (0x0001f98f) aid_size_cell_colour_3_pane

0x80b1,	// (0x0001f9a3) aid_size_cell_colour_4_pane_ParamLimits

0x80b1,	// (0x0001f9a3) aid_size_cell_colour_4_pane

0x4786,	// (0x0001c078) title_pane_stacon_g1_ParamLimits

0x4786,	// (0x0001c078) title_pane_stacon_g1

0xcb15,	// (0x00024407) popup_note_wait_window_g3_ParamLimits

0xcb15,	// (0x00024407) popup_note_wait_window_g3

0xcb8b,	// (0x0002447d) popup_note_wait_window_t5_ParamLimits

0xcb8b,	// (0x0002447d) popup_note_wait_window_t5

0xb1b8,	// (0x00022aaa) main_feb_china_hwr_fs_writing_pane

0x86f2,	// (0x0001ffe4) popup_feb_china_hwr_fs_window_ParamLimits

0x86f2,	// (0x0001ffe4) popup_feb_china_hwr_fs_window

0x8ff2,	// (0x000208e4) aid_size_cell_hwr_fs_ParamLimits

0x8ff2,	// (0x000208e4) aid_size_cell_hwr_fs

0xc5a7,	// (0x00023e99) bg_popup_sub_pane_cp3_ParamLimits

0xc5a7,	// (0x00023e99) bg_popup_sub_pane_cp3

0x9007,	// (0x000208f9) grid_hwr_fs_pane_ParamLimits

0x9007,	// (0x000208f9) grid_hwr_fs_pane

0x520f,	// (0x0001cb01) linegrid_hwr_fs_pane_ParamLimits

0x520f,	// (0x0001cb01) linegrid_hwr_fs_pane

0x901f,	// (0x00020911) cell_hwr_fs_pane_ParamLimits

0x901f,	// (0x00020911) cell_hwr_fs_pane

0xc5b3,	// (0x00023ea5) linegrid_hwr_fs_pane_g1_ParamLimits

0xc5b3,	// (0x00023ea5) linegrid_hwr_fs_pane_g1

0x903f,	// (0x00020931) linegrid_hwr_fs_pane_g2_ParamLimits

0x903f,	// (0x00020931) linegrid_hwr_fs_pane_g2

0xc5bf,	// (0x00023eb1) linegrid_hwr_fs_pane_g3_ParamLimits

0xc5bf,	// (0x00023eb1) linegrid_hwr_fs_pane_g3

0x523d,	// (0x0001cb2f) linegrid_hwr_fs_pane_g4_ParamLimits

0x523d,	// (0x0001cb2f) linegrid_hwr_fs_pane_g4

0x5257,	// (0x0001cb49) linegrid_hwr_fs_pane_g5_ParamLimits

0x5257,	// (0x0001cb49) linegrid_hwr_fs_pane_g5

0x0004,

0xf7c4,	// (0x000270b6) linegrid_hwr_fs_pane_g_ParamLimits

0xf7c4,	// (0x000270b6) linegrid_hwr_fs_pane_g

0xc5cb,	// (0x00023ebd) cell_hwr_fs_pane_g1_ParamLimits

0xc5cb,	// (0x00023ebd) cell_hwr_fs_pane_g1

0xc417,	// (0x00023d09) cell_hwr_fs_pane_g2_ParamLimits

0xc417,	// (0x00023d09) cell_hwr_fs_pane_g2

0x9051,	// (0x00020943) cell_hwr_fs_pane_g3_ParamLimits

0x9051,	// (0x00020943) cell_hwr_fs_pane_g3

0x905e,	// (0x00020950) cell_hwr_fs_pane_g4_ParamLimits

0x905e,	// (0x00020950) cell_hwr_fs_pane_g4

0x0003,

0xf7cf,	// (0x000270c1) cell_hwr_fs_pane_g_ParamLimits

0xf7cf,	// (0x000270c1) cell_hwr_fs_pane_g

0x906b,	// (0x0002095d) cell_hwr_fs_pane_t1

0xb1b8,	// (0x00022aaa) grid_highlight_pane_cp6

0xb1b8,	// (0x00022aaa) main_idle_act2_pane

0xb905,	// (0x000231f7) aid_inside_area_popup_secondary

0x91de,	// (0x00020ad0) aid_inside_area_window_primary_ParamLimits

0x91de,	// (0x00020ad0) aid_inside_area_window_primary

0xd880,	// (0x00025172) ai2_news_ticker_pane

0xd888,	// (0x0002517a) aid_size_cell_ai1_link_ParamLimits

0xd888,	// (0x0002517a) aid_size_cell_ai1_link

0x95a5,	// (0x00020e97) popup_ai2_data_window_ParamLimits

0x95a5,	// (0x00020e97) popup_ai2_data_window

0xd8a2,	// (0x00025194) popup_ai2_link_window_ParamLimits

0xd8a2,	// (0x00025194) popup_ai2_link_window

0xc5a7,	// (0x00023e99) bg_popup_sub_pane_cp4_ParamLimits

0xc5a7,	// (0x00023e99) bg_popup_sub_pane_cp4

0xd8b6,	// (0x000251a8) grid_ai2_link_pane_ParamLimits

0xd8b6,	// (0x000251a8) grid_ai2_link_pane

0xd8cd,	// (0x000251bf) popup_ai2_link_window_g1_ParamLimits

0xd8cd,	// (0x000251bf) popup_ai2_link_window_g1

0xd8d9,	// (0x000251cb) popup_ai2_link_window_g2_ParamLimits

0xd8d9,	// (0x000251cb) popup_ai2_link_window_g2

0x0001,

0xf9a2,	// (0x00027294) popup_ai2_link_window_g_ParamLimits

0xf9a2,	// (0x00027294) popup_ai2_link_window_g

0xd8e8,	// (0x000251da) ai2_mp_button_pane

0xd8f0,	// (0x000251e2) ai2_mp_volume_pane

0xc72e,	// (0x00024020) bg_popup_sub_pane_cp5_ParamLimits

0xc72e,	// (0x00024020) bg_popup_sub_pane_cp5

0xd8f8,	// (0x000251ea) heading_ai2_gene_pane_ParamLimits

0xd8f8,	// (0x000251ea) heading_ai2_gene_pane

0xd904,	// (0x000251f6) list_ai2_gene_pane_ParamLimits

0xd904,	// (0x000251f6) list_ai2_gene_pane

0xd94c,	// (0x0002523e) cell_ai2_link_pane_ParamLimits

0xd94c,	// (0x0002523e) cell_ai2_link_pane

0xd962,	// (0x00025254) cell_ai2_link_pane_g1

0xb1b8,	// (0x00022aaa) grid_highlight_pane_cp7

0x5551,	// (0x0001ce43) ai2_mp_volume_pane_g1

0xd9ff,	// (0x000252f1) ai2_mp_volume_pane_g2

0x95cf,	// (0x00020ec1) list_ai2_gene_pane_t1

0xda07,	// (0x000252f9) ai2_mp_volume_pane_g3

0x0002,

0xf9bb,	// (0x000272ad) ai2_mp_volume_pane_g

0x5559,	// (0x0001ce4b) volume_small_pane_cp3

0xda0f,	// (0x00025301) aid_size_cell_ai2_button

0xda17,	// (0x00025309) grid_ai2_button_pane

0xda20,	// (0x00025312) cell_ai2_button_pane_ParamLimits

0xda20,	// (0x00025312) cell_ai2_button_pane

0xb136,	// (0x00022a28) cell_ai2_button_pane_g1

0xb1b8,	// (0x00022aaa) grid_highlight_pane_cp8

0xd9bf,	// (0x000252b1) ai2_gene_pane_t1_ParamLimits

0xd9bf,	// (0x000252b1) ai2_gene_pane_t1

0x865c,	// (0x0001ff4e) aid_height_parent_landscape

0xd628,	// (0x00024f1a) aid_height_set_list

0xd634,	// (0x00024f26) aid_size_parent

0xd776,	// (0x00025068) aid_size_cell_graphic_pane_ParamLimits

0xd914,	// (0x00025206) popup_ai2_data_window_g1_ParamLimits

0xd914,	// (0x00025206) popup_ai2_data_window_g1

0xd920,	// (0x00025212) ai2_news_ticker_pane_g1

0xd928,	// (0x0002521a) ai2_news_ticker_pane_g2

0x0001,

0xf9a7,	// (0x00027299) ai2_news_ticker_pane_g

0xd930,	// (0x00025222) ai2_news_ticker_pane_t1

0xd93e,	// (0x00025230) ai2_news_ticker_pane_t2

0x0001,

0xf9ac,	// (0x0002729e) ai2_news_ticker_pane_t

0xd96b,	// (0x0002525d) heading_ai2_gene_pane_g1

0xd973,	// (0x00025265) heading_ai2_gene_pane_t1_ParamLimits

0xd973,	// (0x00025265) heading_ai2_gene_pane_t1

0xd988,	// (0x0002527a) list_highlight_pane_cp6

0x95b9,	// (0x00020eab) ai2_gene_pane_ParamLimits

0x95b9,	// (0x00020eab) ai2_gene_pane

0x95dd,	// (0x00020ecf) list_ai2_gene_pane_t2

0x0001,

0xf9b1,	// (0x000272a3) list_ai2_gene_pane_t

0xd990,	// (0x00025282) list_highlight_pane_cp8_ParamLimits

0xd990,	// (0x00025282) list_highlight_pane_cp8

0xd9a1,	// (0x00025293) ai2_gene_pane_g1_ParamLimits

0xd9a1,	// (0x00025293) ai2_gene_pane_g1

0xd9b3,	// (0x000252a5) ai2_gene_pane_g2_ParamLimits

0xd9b3,	// (0x000252a5) ai2_gene_pane_g2

0x0001,

0xf9b6,	// (0x000272a8) ai2_gene_pane_g_ParamLimits

0xf9b6,	// (0x000272a8) ai2_gene_pane_g

0xb763,	// (0x00023055) scroll_pane_cp12

0x861b,	// (0x0001ff0d) control_pane_t3_ParamLimits

0x861b,	// (0x0001ff0d) control_pane_t3

0x84d1,	// (0x0001fdc3) status_small_pane_g8_ParamLimits

0x84d1,	// (0x0001fdc3) status_small_pane_g8

0x8766,	// (0x00020058) popup_find_window_ParamLimits

0x8959,	// (0x0002024b) popup_note_image_window_ParamLimits

0x3bd6,	// (0x0001b4c8) list_double2_graphic_pane_vc_g1_ParamLimits

0x3bd6,	// (0x0001b4c8) list_double2_graphic_pane_vc_g1

0x3c28,	// (0x0001b51a) list_double2_graphic_pane_vc_g2_ParamLimits

0x3c28,	// (0x0001b51a) list_double2_graphic_pane_vc_g2

0x3c34,	// (0x0001b526) list_double2_graphic_pane_vc_g3_ParamLimits

0x3c34,	// (0x0001b526) list_double2_graphic_pane_vc_g3

0x0002,

0xf792,	// (0x00027084) list_double2_graphic_pane_vc_g_ParamLimits

0xf792,	// (0x00027084) list_double2_graphic_pane_vc_g

0x3487,	// (0x0001ad79) list_double2_graphic_pane_vc_t1_ParamLimits

0x3487,	// (0x0001ad79) list_double2_graphic_pane_vc_t1

0x346f,	// (0x0001ad61) list_single_heading_pane_vc_g1_ParamLimits

0x346f,	// (0x0001ad61) list_single_heading_pane_vc_g1

0x347b,	// (0x0001ad6d) list_single_heading_pane_vc_g2_ParamLimits

0x347b,	// (0x0001ad6d) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00026e95) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00026e95) list_single_heading_pane_vc_g

0x3c40,	// (0x0001b532) list_single_heading_pane_vc_t1_ParamLimits

0x3c40,	// (0x0001b532) list_single_heading_pane_vc_t1

0x3c56,	// (0x0001b548) list_single_heading_pane_vc_t2_ParamLimits

0x3c56,	// (0x0001b548) list_single_heading_pane_vc_t2

0x0001,

0xf7b3,	// (0x000270a5) list_single_heading_pane_vc_t_ParamLimits

0xf7b3,	// (0x000270a5) list_single_heading_pane_vc_t

0xc547,	// (0x00023e39) list_setting_number_pane_vc_g1_ParamLimits

0xc547,	// (0x00023e39) list_setting_number_pane_vc_g1

0xc553,	// (0x00023e45) list_setting_number_pane_vc_g2_ParamLimits

0xc553,	// (0x00023e45) list_setting_number_pane_vc_g2

0x0001,

0xf7b8,	// (0x000270aa) list_setting_number_pane_vc_g_ParamLimits

0xf7b8,	// (0x000270aa) list_setting_number_pane_vc_g

0x3c68,	// (0x0001b55a) list_setting_number_pane_vc_t1_ParamLimits

0x3c68,	// (0x0001b55a) list_setting_number_pane_vc_t1

0x3c7c,	// (0x0001b56e) list_setting_number_pane_vc_t2_ParamLimits

0x3c7c,	// (0x0001b56e) list_setting_number_pane_vc_t2

0x3c98,	// (0x0001b58a) list_setting_number_pane_vc_t3_ParamLimits

0x3c98,	// (0x0001b58a) list_setting_number_pane_vc_t3

0x0002,

0xf7bd,	// (0x000270af) list_setting_number_pane_vc_t_ParamLimits

0xf7bd,	// (0x000270af) list_setting_number_pane_vc_t

0x3cb0,	// (0x0001b5a2) set_value_pane_vc_ParamLimits

0x3cb0,	// (0x0001b5a2) set_value_pane_vc

0xd6fa,	// (0x00024fec) list_double2_graphic_pane_vc_ParamLimits

0xd6fa,	// (0x00024fec) list_double2_graphic_pane_vc

0x3d49,	// (0x0001b63b) list_double2_large_graphic_pane_vc_ParamLimits

0x3d49,	// (0x0001b63b) list_double2_large_graphic_pane_vc

0xd6fa,	// (0x00024fec) list_double2_pane_vc_ParamLimits

0xd6fa,	// (0x00024fec) list_double2_pane_vc

0xd6fa,	// (0x00024fec) list_double_graphic_heading_pane_vc_ParamLimits

0xd6fa,	// (0x00024fec) list_double_graphic_heading_pane_vc

0xd6fa,	// (0x00024fec) list_double_graphic_pane_vc_ParamLimits

0xd6fa,	// (0x00024fec) list_double_graphic_pane_vc

0xd6fa,	// (0x00024fec) list_double_heading_pane_vc_ParamLimits

0xd6fa,	// (0x00024fec) list_double_heading_pane_vc

0x3d5b,	// (0x0001b64d) list_double_large_graphic_pane_vc_ParamLimits

0x3d5b,	// (0x0001b64d) list_double_large_graphic_pane_vc

0xd6fa,	// (0x00024fec) list_double_number_pane_vc_ParamLimits

0xd6fa,	// (0x00024fec) list_double_number_pane_vc

0xd6fa,	// (0x00024fec) list_double_pane_vc_ParamLimits

0xd6fa,	// (0x00024fec) list_double_pane_vc

0xd6fa,	// (0x00024fec) list_double_time_pane_vc_ParamLimits

0xd6fa,	// (0x00024fec) list_double_time_pane_vc

0xd6fa,	// (0x00024fec) list_setting_number_pane_vc_ParamLimits

0xd6fa,	// (0x00024fec) list_setting_number_pane_vc

0xd6fa,	// (0x00024fec) list_setting_pane_vc_ParamLimits

0xd6fa,	// (0x00024fec) list_setting_pane_vc

0xd6fa,	// (0x00024fec) list_single_graphic_heading_pane_vc_ParamLimits

0xd6fa,	// (0x00024fec) list_single_graphic_heading_pane_vc

0xd6fa,	// (0x00024fec) list_single_heading_pane_vc_ParamLimits

0xd6fa,	// (0x00024fec) list_single_heading_pane_vc

0xd6fa,	// (0x00024fec) list_single_number_heading_pane_vc_ParamLimits

0xd6fa,	// (0x00024fec) list_single_number_heading_pane_vc

0x3bd6,	// (0x0001b4c8) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3bd6,	// (0x0001b4c8) list_double_graphic_heading_pane_vc_g1

0x346f,	// (0x0001ad61) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x346f,	// (0x0001ad61) list_double_graphic_heading_pane_vc_g2

0x347b,	// (0x0001ad6d) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x347b,	// (0x0001ad6d) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf59c,	// (0x00026e8e) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf59c,	// (0x00026e8e) list_double_graphic_heading_pane_vc_g

0x3dbd,	// (0x0001b6af) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3dbd,	// (0x0001b6af) list_double_graphic_heading_pane_vc_t1

0x3dd3,	// (0x0001b6c5) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3dd3,	// (0x0001b6c5) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c2,	// (0x000272b4) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c2,	// (0x000272b4) list_double_graphic_heading_pane_vc_t

0xc547,	// (0x00023e39) list_setting_pane_vc_g1_ParamLimits

0xc547,	// (0x00023e39) list_setting_pane_vc_g1

0xc553,	// (0x00023e45) list_setting_pane_vc_g2_ParamLimits

0xc553,	// (0x00023e45) list_setting_pane_vc_g2

0x0001,

0xf7b8,	// (0x000270aa) list_setting_pane_vc_g_ParamLimits

0xf7b8,	// (0x000270aa) list_setting_pane_vc_g

0x3deb,	// (0x0001b6dd) list_setting_pane_vc_t1_ParamLimits

0x3deb,	// (0x0001b6dd) list_setting_pane_vc_t1

0x3dff,	// (0x0001b6f1) list_setting_pane_vc_t2_ParamLimits

0x3dff,	// (0x0001b6f1) list_setting_pane_vc_t2

0x0001,

0xfa05,	// (0x000272f7) list_setting_pane_vc_t_ParamLimits

0xfa05,	// (0x000272f7) list_setting_pane_vc_t

0x3cb0,	// (0x0001b5a2) set_value_pane_cp_vc_ParamLimits

0x3cb0,	// (0x0001b5a2) set_value_pane_cp_vc

0x346f,	// (0x0001ad61) list_single_number_heading_pane_vc_g1_ParamLimits

0x346f,	// (0x0001ad61) list_single_number_heading_pane_vc_g1

0x347b,	// (0x0001ad6d) list_single_number_heading_pane_vc_g2_ParamLimits

0x347b,	// (0x0001ad6d) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00026e95) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00026e95) list_single_number_heading_pane_vc_g

0x3c40,	// (0x0001b532) list_single_number_heading_pane_vc_t1_ParamLimits

0x3c40,	// (0x0001b532) list_single_number_heading_pane_vc_t1

0x3e13,	// (0x0001b705) list_single_number_heading_pane_vc_t2_ParamLimits

0x3e13,	// (0x0001b705) list_single_number_heading_pane_vc_t2

0x34d7,	// (0x0001adc9) list_single_number_heading_pane_vc_t3_ParamLimits

0x34d7,	// (0x0001adc9) list_single_number_heading_pane_vc_t3

0x0002,

0xfa0a,	// (0x000272fc) list_single_number_heading_pane_vc_t_ParamLimits

0xfa0a,	// (0x000272fc) list_single_number_heading_pane_vc_t

0x3bd6,	// (0x0001b4c8) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3bd6,	// (0x0001b4c8) list_single_graphic_heading_pane_vc_g1

0x346f,	// (0x0001ad61) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x346f,	// (0x0001ad61) list_single_graphic_heading_pane_vc_g4

0x347b,	// (0x0001ad6d) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x347b,	// (0x0001ad6d) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf59c,	// (0x00026e8e) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf59c,	// (0x00026e8e) list_single_graphic_heading_pane_vc_g

0x3c40,	// (0x0001b532) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3c40,	// (0x0001b532) list_single_graphic_heading_pane_vc_t1

0x3e25,	// (0x0001b717) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3e25,	// (0x0001b717) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa11,	// (0x00027303) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa11,	// (0x00027303) list_single_graphic_heading_pane_vc_t

0x346f,	// (0x0001ad61) list_double2_pane_vc_g1_ParamLimits

0x346f,	// (0x0001ad61) list_double2_pane_vc_g1

0x347b,	// (0x0001ad6d) list_double2_pane_vc_g2_ParamLimits

0x347b,	// (0x0001ad6d) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x00026e95) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x00026e95) list_double2_pane_vc_g

0x3d20,	// (0x0001b612) list_double2_pane_vc_t1_ParamLimits

0x3d20,	// (0x0001b612) list_double2_pane_vc_t1

0x3e37,	// (0x0001b729) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3e37,	// (0x0001b729) list_double2_large_graphic_pane_vc_g1

0x3e43,	// (0x0001b735) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3e43,	// (0x0001b735) list_double2_large_graphic_pane_vc_g2

0x3e4f,	// (0x0001b741) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x3e4f,	// (0x0001b741) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x00026eb2) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x00026eb2) list_double2_large_graphic_pane_vc_g

0x3e5b,	// (0x0001b74d) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3e5b,	// (0x0001b74d) list_double2_large_graphic_pane_vc_t1

0x3e71,	// (0x0001b763) list_double_time_pane_vc_g1_ParamLimits

0x3e71,	// (0x0001b763) list_double_time_pane_vc_g1

0x3e7d,	// (0x0001b76f) list_double_time_pane_vc_g2_ParamLimits

0x3e7d,	// (0x0001b76f) list_double_time_pane_vc_g2

0x0001,

0xfa16,	// (0x00027308) list_double_time_pane_vc_g_ParamLimits

0xfa16,	// (0x00027308) list_double_time_pane_vc_g

0x3e89,	// (0x0001b77b) list_double_time_pane_vc_t1_ParamLimits

0x3e89,	// (0x0001b77b) list_double_time_pane_vc_t1

0x3ea7,	// (0x0001b799) list_double_time_pane_vc_t2_ParamLimits

0x3ea7,	// (0x0001b799) list_double_time_pane_vc_t2

0x3ef0,	// (0x0001b7e2) list_double_time_pane_vc_t3_ParamLimits

0x3ef0,	// (0x0001b7e2) list_double_time_pane_vc_t3

0x3f02,	// (0x0001b7f4) list_double_time_pane_vc_t4_ParamLimits

0x3f02,	// (0x0001b7f4) list_double_time_pane_vc_t4

0x0003,

0xfa1b,	// (0x0002730d) list_double_time_pane_vc_t_ParamLimits

0xfa1b,	// (0x0002730d) list_double_time_pane_vc_t

0x346f,	// (0x0001ad61) list_double_pane_vc_g1_ParamLimits

0x346f,	// (0x0001ad61) list_double_pane_vc_g1

0x347b,	// (0x0001ad6d) list_double_pane_vc_g2_ParamLimits

0x347b,	// (0x0001ad6d) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x00026e95) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x00026e95) list_double_pane_vc_g

0x3f14,	// (0x0001b806) list_double_pane_vc_t1_ParamLimits

0x3f14,	// (0x0001b806) list_double_pane_vc_t1

0x3f26,	// (0x0001b818) list_double_pane_vc_t2_ParamLimits

0x3f26,	// (0x0001b818) list_double_pane_vc_t2

0x0001,

0xfa24,	// (0x00027316) list_double_pane_vc_t_ParamLimits

0xfa24,	// (0x00027316) list_double_pane_vc_t

0x346f,	// (0x0001ad61) list_double_number_pane_vc_g1_ParamLimits

0x346f,	// (0x0001ad61) list_double_number_pane_vc_g1

0x347b,	// (0x0001ad6d) list_double_number_pane_vc_g2_ParamLimits

0x347b,	// (0x0001ad6d) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x00026e95) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x00026e95) list_double_number_pane_vc_g

0x3f3c,	// (0x0001b82e) list_double_number_pane_vc_t1_ParamLimits

0x3f3c,	// (0x0001b82e) list_double_number_pane_vc_t1

0x3f50,	// (0x0001b842) list_double_number_pane_vc_t2_ParamLimits

0x3f50,	// (0x0001b842) list_double_number_pane_vc_t2

0x3f62,	// (0x0001b854) list_double_number_pane_vc_t3_ParamLimits

0x3f62,	// (0x0001b854) list_double_number_pane_vc_t3

0x0002,

0xfa29,	// (0x0002731b) list_double_number_pane_vc_t_ParamLimits

0xfa29,	// (0x0002731b) list_double_number_pane_vc_t

0x3f78,	// (0x0001b86a) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3f78,	// (0x0001b86a) list_double_large_graphic_pane_vc_g1

0x3fa0,	// (0x0001b892) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3fa0,	// (0x0001b892) list_double_large_graphic_pane_vc_g2

0x3fb4,	// (0x0001b8a6) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3fb4,	// (0x0001b8a6) list_double_large_graphic_pane_vc_g3

0x3fc3,	// (0x0001b8b5) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3fc3,	// (0x0001b8b5) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa30,	// (0x00027322) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa30,	// (0x00027322) list_double_large_graphic_pane_vc_g

0x3fd3,	// (0x0001b8c5) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3fd3,	// (0x0001b8c5) list_double_large_graphic_pane_vc_t1

0x3fed,	// (0x0001b8df) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3fed,	// (0x0001b8df) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa39,	// (0x0002732b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa39,	// (0x0002732b) list_double_large_graphic_pane_vc_t

0x346f,	// (0x0001ad61) list_double_heading_pane_vc_g1_ParamLimits

0x346f,	// (0x0001ad61) list_double_heading_pane_vc_g1

0x347b,	// (0x0001ad6d) list_double_heading_pane_vc_g2_ParamLimits

0x347b,	// (0x0001ad6d) list_double_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00026e95) list_double_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00026e95) list_double_heading_pane_vc_g

0x400d,	// (0x0001b8ff) list_double_heading_pane_vc_t1_ParamLimits

0x400d,	// (0x0001b8ff) list_double_heading_pane_vc_t1

0x3c40,	// (0x0001b532) list_double_heading_pane_vc_t2_ParamLimits

0x3c40,	// (0x0001b532) list_double_heading_pane_vc_t2

0x0001,

0xfa3e,	// (0x00027330) list_double_heading_pane_vc_t_ParamLimits

0xfa3e,	// (0x00027330) list_double_heading_pane_vc_t

0x401f,	// (0x0001b911) list_double_graphic_pane_vc_g1_ParamLimits

0x401f,	// (0x0001b911) list_double_graphic_pane_vc_g1

0x402b,	// (0x0001b91d) list_double_graphic_pane_vc_g2_ParamLimits

0x402b,	// (0x0001b91d) list_double_graphic_pane_vc_g2

0x346f,	// (0x0001ad61) list_double_graphic_pane_vc_g3_ParamLimits

0x346f,	// (0x0001ad61) list_double_graphic_pane_vc_g3

0x0003,

0xfa43,	// (0x00027335) list_double_graphic_pane_vc_g_ParamLimits

0xfa43,	// (0x00027335) list_double_graphic_pane_vc_g

0x4048,	// (0x0001b93a) list_double_graphic_pane_vc_t1_ParamLimits

0x4048,	// (0x0001b93a) list_double_graphic_pane_vc_t1

0x4066,	// (0x0001b958) list_double_graphic_pane_vc_t2_ParamLimits

0x4066,	// (0x0001b958) list_double_graphic_pane_vc_t2

0x0001,

0xfa4c,	// (0x0002733e) list_double_graphic_pane_vc_t_ParamLimits

0xfa4c,	// (0x0002733e) list_double_graphic_pane_vc_t

0x446d,	// (0x0001bd5f) aid_size_cell_fastswap

0x7c2e,	// (0x0001f520) aid_size_cell_touch_ParamLimits

0x7c2e,	// (0x0001f520) aid_size_cell_touch

0x45ba,	// (0x0001beac) popup_fast_swap_wide_window_ParamLimits

0x45ba,	// (0x0001beac) popup_fast_swap_wide_window

0x7d26,	// (0x0001f618) touch_pane_ParamLimits

0x7d26,	// (0x0001f618) touch_pane

0x391c,	// (0x0001b20e) button_value_adjust_pane_cp2

0xd68c,	// (0x00024f7e) button_value_adjust_pane_cp4

0x393c,	// (0x0001b22e) form_field_data_pane_cp2

0x7841,	// (0x0001f133) form_field_data_wide_pane_cp2

0xbb51,	// (0x00023443) bg_scroll_pane_ParamLimits

0x48a7,	// (0x0001c199) scroll_handle_pane_ParamLimits

0x48bb,	// (0x0001c1ad) scroll_sc2_down_pane_ParamLimits

0x48bb,	// (0x0001c1ad) scroll_sc2_down_pane

0xbb82,	// (0x00023474) scroll_sc2_up_pane_ParamLimits

0xbb82,	// (0x00023474) scroll_sc2_up_pane

0x96ff,	// (0x00020ff1) grid_wheel_folder_pane_g1_ParamLimits

0x96ff,	// (0x00020ff1) grid_wheel_folder_pane_g1

0x4a6f,	// (0x0001c361) clock_nsta_pane_cp2_ParamLimits

0x4a6f,	// (0x0001c361) clock_nsta_pane_cp2

0x83e7,	// (0x0001fcd9) listscroll_midp_pane_ParamLimits

0x83f6,	// (0x0001fce8) midp_canvas_pane

0x4cb6,	// (0x0001c5a8) nsta_clock_indic_pane

0xc328,	// (0x00023c1a) listscroll_form_pane_vc

0xc330,	// (0x00023c22) listscroll_set_pane_vc_ParamLimits

0xc330,	// (0x00023c22) listscroll_set_pane_vc

0x8d25,	// (0x00020617) clock_nsta_pane

0x8d48,	// (0x0002063a) indicator_nsta_pane

0xc449,	// (0x00023d3b) bg_popup_sub_pane_cp2_ParamLimits

0xc45d,	// (0x00023d4f) find_pane_cp2_ParamLimits

0xc45d,	// (0x00023d4f) find_pane_cp2

0xc46f,	// (0x00023d61) grid_toobar_pane_ParamLimits

0xc57b,	// (0x00023e6d) list_form_gen_pane_vc_ParamLimits

0xc57b,	// (0x00023e6d) list_form_gen_pane_vc

0xc591,	// (0x00023e83) scroll_pane_cp8_vc_ParamLimits

0xc591,	// (0x00023e83) scroll_pane_cp8_vc

0xc5e1,	// (0x00023ed3) data_form_wide_pane_vc_ParamLimits

0xc5e1,	// (0x00023ed3) data_form_wide_pane_vc

0xc5ed,	// (0x00023edf) form_field_data_wide_pane_vc_g1

0xc5f5,	// (0x00023ee7) form_field_data_wide_pane_vc_t1_ParamLimits

0xc5f5,	// (0x00023ee7) form_field_data_wide_pane_vc_t1

0xb7bc,	// (0x000230ae) input_focus_pane_cp6_vc_ParamLimits

0xb7bc,	// (0x000230ae) input_focus_pane_cp6_vc

0x9095,	// (0x00020987) list_midp_pane_ParamLimits

0xd6ae,	// (0x00024fa0) scroll_pane_cp16_ParamLimits

0xd6ae,	// (0x00024fa0) scroll_pane_cp16

0xc8fb,	// (0x000241ed) button_value_adjust_pane_ParamLimits

0xc8fb,	// (0x000241ed) button_value_adjust_pane

0x9393,	// (0x00020c85) button_value_adjust_pane_cp6_ParamLimits

0x9393,	// (0x00020c85) button_value_adjust_pane_cp6

0x949d,	// (0x00020d8f) settings_code_pane_cp_ParamLimits

0x949d,	// (0x00020d8f) settings_code_pane_cp

0xb136,	// (0x00022a28) cell_touch_pane_g1

0xb136,	// (0x00022a28) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x00026fd0) cell_touch_pane_g

0x95eb,	// (0x00020edd) cell_touch_pane_cp_ParamLimits

0x95eb,	// (0x00020edd) cell_touch_pane_cp

0x9607,	// (0x00020ef9) cell_touch_pane_ParamLimits

0x9607,	// (0x00020ef9) cell_touch_pane

0xb136,	// (0x00022a28) scroll_sc2_down_pane_g1

0xb136,	// (0x00022a28) scroll_sc2_up_pane_g1

0xb1b8,	// (0x00022aaa) bg_set_opt_pane_cp4_vc

0xda32,	// (0x00025324) list_set_graphic_pane_vc_g1_ParamLimits

0xda32,	// (0x00025324) list_set_graphic_pane_vc_g1

0xda3e,	// (0x00025330) list_set_graphic_pane_vc_g2_ParamLimits

0xda3e,	// (0x00025330) list_set_graphic_pane_vc_g2

0x0001,

0xf9c7,	// (0x000272b9) list_set_graphic_pane_vc_g_ParamLimits

0xf9c7,	// (0x000272b9) list_set_graphic_pane_vc_g

0xda4a,	// (0x0002533c) text_primary_small_cp13_vc_ParamLimits

0xda4a,	// (0x0002533c) text_primary_small_cp13_vc

0xda62,	// (0x00025354) list_set_graphic_pane_vc_ParamLimits

0xda62,	// (0x00025354) list_set_graphic_pane_vc

0xb1b8,	// (0x00022aaa) input_focus_pane_cp2_vc

0xb136,	// (0x00022a28) setting_code_pane_vc_g1

0xda75,	// (0x00025367) setting_code_pane_vc_t1

0xda83,	// (0x00025375) set_text_pane_vc_t1_ParamLimits

0xda83,	// (0x00025375) set_text_pane_vc_t1

0xb1b8,	// (0x00022aaa) input_focus_pane_cp1_vc

0xda9e,	// (0x00025390) list_set_text_pane_vc

0xb136,	// (0x00022a28) setting_text_pane_vc_g1

0xb1b8,	// (0x00022aaa) bg_set_opt_pane_cp2_vc

0xdaa8,	// (0x0002539a) setting_slider_graphic_pane_vc_g1

0xdab0,	// (0x000253a2) setting_slider_graphic_pane_vc_t1

0xdabe,	// (0x000253b0) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9cc,	// (0x000272be) setting_slider_graphic_pane_vc_t

0xdacc,	// (0x000253be) slider_set_pane_cp_vc

0xdad4,	// (0x000253c6) slider_set_pane_vc_g1

0xdadd,	// (0x000253cf) slider_set_pane_vc_g2

0x0006,

0xf9d1,	// (0x000272c3) slider_set_pane_vc_g

0xb817,	// (0x00023109) set_opt_bg_pane_g1_copy1

0xb81f,	// (0x00023111) set_opt_bg_pane_g2_copy1

0xdb09,	// (0x000253fb) set_opt_bg_pane_g3_copy1

0xb82f,	// (0x00023121) set_opt_bg_pane_g4_copy1

0xb837,	// (0x00023129) set_opt_bg_pane_g5_copy1

0xb83f,	// (0x00023131) set_opt_bg_pane_g6_copy1

0xdb11,	// (0x00025403) set_opt_bg_pane_g7_copy1

0xdb19,	// (0x0002540b) set_opt_bg_pane_g8_copy1

0xdb21,	// (0x00025413) set_opt_bg_pane_g9_copy1

0xb1b8,	// (0x00022aaa) bg_set_opt_pane_cp_vc

0xdb29,	// (0x0002541b) setting_slider_pane_vc_t1

0xdab0,	// (0x000253a2) setting_slider_pane_vc_t2

0xdabe,	// (0x000253b0) setting_slider_pane_vc_t3

0x0002,

0xf9e0,	// (0x000272d2) setting_slider_pane_vc_t

0xdacc,	// (0x000253be) slider_set_pane_vc

0x527b,	// (0x0001cb6d) volume_set_pane_vc_g1

0x5562,	// (0x0001ce54) volume_set_pane_vc_g2

0x556b,	// (0x0001ce5d) volume_set_pane_vc_g3

0x5574,	// (0x0001ce66) volume_set_pane_vc_g4

0x557d,	// (0x0001ce6f) volume_set_pane_vc_g5

0x5586,	// (0x0001ce78) volume_set_pane_vc_g6

0x558f,	// (0x0001ce81) volume_set_pane_vc_g7

0x5598,	// (0x0001ce8a) volume_set_pane_vc_g8

0x55a1,	// (0x0001ce93) volume_set_pane_vc_g9

0x55aa,	// (0x0001ce9c) volume_set_pane_vc_g10

0x0009,

0xf9e7,	// (0x000272d9) volume_set_pane_vc_g

0xdb38,	// (0x0002542a) volume_set_pane_vc

0xdb40,	// (0x00025432) button_value_adjust_pane_cp1_vc

0xdb4a,	// (0x0002543c) list_highlight_pane_cp2_vc

0xdb53,	// (0x00025445) list_set_pane_vc_ParamLimits

0xdb53,	// (0x00025445) list_set_pane_vc

0xdba5,	// (0x00025497) main_pane_set_vc_t1_ParamLimits

0xdba5,	// (0x00025497) main_pane_set_vc_t1

0xdbba,	// (0x000254ac) main_pane_set_vc_t2_ParamLimits

0xdbba,	// (0x000254ac) main_pane_set_vc_t2

0xdbcc,	// (0x000254be) main_pane_set_vc_t3_ParamLimits

0xdbcc,	// (0x000254be) main_pane_set_vc_t3

0xdbde,	// (0x000254d0) main_pane_set_vc_t4_ParamLimits

0xdbde,	// (0x000254d0) main_pane_set_vc_t4

0x0003,

0xf9fc,	// (0x000272ee) main_pane_set_vc_t_ParamLimits

0xf9fc,	// (0x000272ee) main_pane_set_vc_t

0xdbf0,	// (0x000254e2) setting_code_pane_vc_ParamLimits

0xdbf0,	// (0x000254e2) setting_code_pane_vc

0xdbff,	// (0x000254f1) setting_slider_graphic_pane_vc

0xdbff,	// (0x000254f1) setting_slider_pane_vc

0xdbff,	// (0x000254f1) setting_text_pane_vc

0xdbff,	// (0x000254f1) setting_volume_pane_vc

0xdc07,	// (0x000254f9) scroll_pane_cp121_vc

0xb7a7,	// (0x00023099) set_content_pane_vc

0xdc0f,	// (0x00025501) button_value_adjust_pane_g1

0xdc18,	// (0x0002550a) button_value_adjust_pane_g2

0x0001,

0xfa51,	// (0x00027343) button_value_adjust_pane_g

0xdc21,	// (0x00025513) form_field_slider_wide_pane_vc_t1_ParamLimits

0xdc21,	// (0x00025513) form_field_slider_wide_pane_vc_t1

0xdc37,	// (0x00025529) form_field_slider_wide_pane_vc_t2_ParamLimits

0xdc37,	// (0x00025529) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa56,	// (0x00027348) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa56,	// (0x00027348) form_field_slider_wide_pane_vc_t

0xb206,	// (0x00022af8) input_focus_pane_cp10_vc_ParamLimits

0xb206,	// (0x00022af8) input_focus_pane_cp10_vc

0xdc62,	// (0x00025554) slider_cont_pane_cp1_vc_ParamLimits

0xdc62,	// (0x00025554) slider_cont_pane_cp1_vc

0xdad4,	// (0x000253c6) slider_form_pane_g1_cp2

0xdadd,	// (0x000253cf) slider_form_pane_g2_cp2

0xdc7d,	// (0x0002556f) form_field_slider_pane_vc_t3

0xdc8b,	// (0x0002557d) form_field_slider_pane_vc_t4

0xdc99,	// (0x0002558b) slider_form_pane_vc_ParamLimits

0xdc99,	// (0x0002558b) slider_form_pane_vc

0xdca6,	// (0x00025598) form_field_slider_pane_vc_t1_ParamLimits

0xdca6,	// (0x00025598) form_field_slider_pane_vc_t1

0xdcbc,	// (0x000255ae) form_field_slider_pane_vc_t2_ParamLimits

0xdcbc,	// (0x000255ae) form_field_slider_pane_vc_t2

0x0001,

0xfa68,	// (0x0002735a) form_field_slider_pane_vc_t_ParamLimits

0xfa68,	// (0x0002735a) form_field_slider_pane_vc_t

0xb206,	// (0x00022af8) input_focus_pane_cp9_vc_ParamLimits

0xb206,	// (0x00022af8) input_focus_pane_cp9_vc

0xdcce,	// (0x000255c0) slider_cont_pane_vc_ParamLimits

0xdcce,	// (0x000255c0) slider_cont_pane_vc

0xdce0,	// (0x000255d2) list_form_graphic_pane_cp_vc_ParamLimits

0xdce0,	// (0x000255d2) list_form_graphic_pane_cp_vc

0xc5ed,	// (0x00023edf) form_field_popup_wide_pane_vc_g1

0xdcf5,	// (0x000255e7) form_field_popup_wide_pane_vc_t1_ParamLimits

0xdcf5,	// (0x000255e7) form_field_popup_wide_pane_vc_t1

0xb7bc,	// (0x000230ae) input_focus_pane_cp8_vc_ParamLimits

0xb7bc,	// (0x000230ae) input_focus_pane_cp8_vc

0xdd34,	// (0x00025626) list_form_wide_pane_vc_ParamLimits

0xdd34,	// (0x00025626) list_form_wide_pane_vc

0xdd40,	// (0x00025632) list_form_graphic_pane_vc_g1

0xdd48,	// (0x0002563a) list_form_graphic_pane_vc_t1_ParamLimits

0xdd48,	// (0x0002563a) list_form_graphic_pane_vc_t1

0xb21c,	// (0x00022b0e) list_highlight_pane_cp5_vc_ParamLimits

0xb21c,	// (0x00022b0e) list_highlight_pane_cp5_vc

0xdd64,	// (0x00025656) list_form_graphic_pane_vc_ParamLimits

0xdd64,	// (0x00025656) list_form_graphic_pane_vc

0xc5ed,	// (0x00023edf) form_field_popup_pane_vc_g1

0xdd7a,	// (0x0002566c) form_field_popup_pane_vc_t1_ParamLimits

0xdd7a,	// (0x0002566c) form_field_popup_pane_vc_t1

0xb7bc,	// (0x000230ae) input_focus_pane_cp7_vc_ParamLimits

0xb7bc,	// (0x000230ae) input_focus_pane_cp7_vc

0xdd8f,	// (0x00025681) list_form_pane_vc_ParamLimits

0xdd8f,	// (0x00025681) list_form_pane_vc

0xdd9b,	// (0x0002568d) data_form_pane_vc_t1_ParamLimits

0xdd9b,	// (0x0002568d) data_form_pane_vc_t1

0xb817,	// (0x00023109) input_focus_pane_vc_g1

0xb81f,	// (0x00023111) input_focus_pane_vc_g2

0xb827,	// (0x00023119) input_focus_pane_vc_g3

0xb82f,	// (0x00023121) input_focus_pane_vc_g4

0xb837,	// (0x00023129) input_focus_pane_vc_g5

0xb83f,	// (0x00023131) input_focus_pane_vc_g6

0xb847,	// (0x00023139) input_focus_pane_vc_g7

0xb84f,	// (0x00023141) input_focus_pane_vc_g8

0xb857,	// (0x00023149) input_focus_pane_vc_g9

0xb136,	// (0x00022a28) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x00026f59) input_focus_pane_vc_g

0xc5e1,	// (0x00023ed3) data_form_pane_vc_ParamLimits

0xc5e1,	// (0x00023ed3) data_form_pane_vc

0xc5ed,	// (0x00023edf) form_field_data_pane_vc_g1

0xddb6,	// (0x000256a8) form_field_data_pane_vc_t1_ParamLimits

0xddb6,	// (0x000256a8) form_field_data_pane_vc_t1

0xb7bc,	// (0x000230ae) input_focus_pane_vc_ParamLimits

0xb7bc,	// (0x000230ae) input_focus_pane_vc

0xc55f,	// (0x00023e51) button_value_adjust_pane_cp3_vc

0xd68c,	// (0x00024f7e) button_value_adjust_pane_cp5_vc

0xddcc,	// (0x000256be) form_field_data_pane_vc_ParamLimits

0xddcc,	// (0x000256be) form_field_data_pane_vc

0xc567,	// (0x00023e59) form_field_data_pane_vc_cp2

0xdde3,	// (0x000256d5) form_field_data_wide_pane_vc_ParamLimits

0xdde3,	// (0x000256d5) form_field_data_wide_pane_vc

0xddf9,	// (0x000256eb) form_field_data_wide_pane_vc_cp2

0xde01,	// (0x000256f3) form_field_popup_pane_vc_ParamLimits

0xde01,	// (0x000256f3) form_field_popup_pane_vc

0xde18,	// (0x0002570a) form_field_popup_wide_pane_vc_ParamLimits

0xde18,	// (0x0002570a) form_field_popup_wide_pane_vc

0xde2e,	// (0x00025720) form_field_slider_pane_vc_ParamLimits

0xde2e,	// (0x00025720) form_field_slider_pane_vc

0xde41,	// (0x00025733) form_field_slider_wide_pane_vc_ParamLimits

0xde41,	// (0x00025733) form_field_slider_wide_pane_vc

0x9625,	// (0x00020f17) grid_touch_1_pane_ParamLimits

0x9625,	// (0x00020f17) grid_touch_1_pane

0x9639,	// (0x00020f2b) grid_touch_2_pane_ParamLimits

0x9639,	// (0x00020f2b) grid_touch_2_pane

0xde54,	// (0x00025746) touch_pane_g1_ParamLimits

0xde54,	// (0x00025746) touch_pane_g1

0xde62,	// (0x00025754) cell_app_pane_cp_wide_ParamLimits

0xde62,	// (0x00025754) cell_app_pane_cp_wide

0xde72,	// (0x00025764) grid_popup_fast_wide_pane_ParamLimits

0xde72,	// (0x00025764) grid_popup_fast_wide_pane

0xde86,	// (0x00025778) scroll_pane_cp19_ParamLimits

0xde86,	// (0x00025778) scroll_pane_cp19

0xb1b8,	// (0x00022aaa) bg_popup_window_pane_cp20

0xde9a,	// (0x0002578c) listscroll_popup_fast_wide_pane

0x9663,	// (0x00020f55) grid_indicator_nsta_pane

0xdea2,	// (0x00025794) clock_nsta_pane_g1

0xdeab,	// (0x0002579d) clock_nsta_pane_t1

0x966f,	// (0x00020f61) cell_indicator_nsta_pane_ParamLimits

0x966f,	// (0x00020f61) cell_indicator_nsta_pane

0xde54,	// (0x00025746) cell_indicator_nsta_pane_g1

0x9686,	// (0x00020f78) cell_indicator_nsta_pane_g2

0x0001,

0xfa79,	// (0x0002736b) cell_indicator_nsta_pane_g

0xdec7,	// (0x000257b9) clock_nsta_pane_cp

0xdecf,	// (0x000257c1) indicator_nsta_pane_cp

0xded8,	// (0x000257ca) nsta_clock_indic_pane_g1

0xb258,	// (0x00022b4a) grid_indicator_pane

0xbc74,	// (0x00023566) scroll_pane_cp29

0x49c6,	// (0x0001c2b8) indicator_nsta_pane_cp2_ParamLimits

0x49c6,	// (0x0001c2b8) indicator_nsta_pane_cp2

0xb21c,	// (0x00022b0e) main_apps_wheel_pane

0xc78c,	// (0x0002407e) form_midp_field_text_pane_ParamLimits

0xc8b9,	// (0x000241ab) scroll_bar_cp050_ParamLimits

0xdf41,	// (0x00025833) cell_indicator_pane_ParamLimits

0xdf41,	// (0x00025833) cell_indicator_pane

0xdf57,	// (0x00025849) cell_indicator_pane_g1

0x9693,	// (0x00020f85) grid_wheel_folder_pane_ParamLimits

0x9693,	// (0x00020f85) grid_wheel_folder_pane

0x96a1,	// (0x00020f93) list_wheel_apps_pane_ParamLimits

0x96a1,	// (0x00020f93) list_wheel_apps_pane

0x96ad,	// (0x00020f9f) main_apps_wheel_pane_g1_ParamLimits

0x96ad,	// (0x00020f9f) main_apps_wheel_pane_g1

0x96b9,	// (0x00020fab) main_apps_wheel_pane_g2_ParamLimits

0x96b9,	// (0x00020fab) main_apps_wheel_pane_g2

0x0001,

0xfa95,	// (0x00027387) main_apps_wheel_pane_g_ParamLimits

0xfa95,	// (0x00027387) main_apps_wheel_pane_g

0x96c5,	// (0x00020fb7) main_apps_wheel_pane_t1_ParamLimits

0x96c5,	// (0x00020fb7) main_apps_wheel_pane_t1

0x96d7,	// (0x00020fc9) list_wheel_apps_pane_g1

0x96df,	// (0x00020fd1) list_wheel_apps_pane_g2

0x96e7,	// (0x00020fd9) list_wheel_apps_pane_g3

0x96ef,	// (0x00020fe1) list_wheel_apps_pane_g4

0x96f7,	// (0x00020fe9) list_wheel_apps_pane_g5

0x0004,

0xfa9a,	// (0x0002738c) list_wheel_apps_pane_g

0xb21c,	// (0x00022b0e) navi_icon_text_pane

0x8c31,	// (0x00020523) aid_fill_nsta

0xdf61,	// (0x00025853) navi_icon_text_pane_g1

0xdf6d,	// (0x0002585f) navi_icon_text_pane_t1

0xbeee,	// (0x000237e0) list_set_graphic_pane_t1_ParamLimits

0xbeee,	// (0x000237e0) list_set_graphic_pane_t1

0xcfa7,	// (0x00024899) popup_midp_note_alarm_window_t6_ParamLimits

0xcfa7,	// (0x00024899) popup_midp_note_alarm_window_t6

0xcfb9,	// (0x000248ab) popup_midp_note_alarm_window_t7_ParamLimits

0xcfb9,	// (0x000248ab) popup_midp_note_alarm_window_t7

0xcfcb,	// (0x000248bd) popup_midp_note_alarm_window_t8_ParamLimits

0xcfcb,	// (0x000248bd) popup_midp_note_alarm_window_t8

0xcfdd,	// (0x000248cf) popup_midp_note_alarm_window_t9_ParamLimits

0xcfdd,	// (0x000248cf) popup_midp_note_alarm_window_t9

0xcfef,	// (0x000248e1) popup_midp_note_alarm_window_t10_ParamLimits

0xcfef,	// (0x000248e1) popup_midp_note_alarm_window_t10

0xd001,	// (0x000248f3) popup_midp_note_alarm_window_t11_ParamLimits

0xd001,	// (0x000248f3) popup_midp_note_alarm_window_t11

0xd013,	// (0x00024905) scroll_pane_cp17_ParamLimits

0xd013,	// (0x00024905) scroll_pane_cp17

0x527b,	// (0x0001cb6d) volume_small_pane_cp_g1

0x55b3,	// (0x0001cea5) volume_small_pane_cp_g2

0x55bc,	// (0x0001ceae) volume_small_pane_cp_g3

0x55c5,	// (0x0001ceb7) volume_small_pane_cp_g4

0x52a8,	// (0x0001cb9a) volume_small_pane_cp_g5

0x55ce,	// (0x0001cec0) volume_small_pane_cp_g6

0x55d7,	// (0x0001cec9) volume_small_pane_cp_g7

0x55e0,	// (0x0001ced2) volume_small_pane_cp_g8

0x55e9,	// (0x0001cedb) volume_small_pane_cp_g9

0x55f2,	// (0x0001cee4) volume_small_pane_cp_g10

0xc19d,	// (0x00023a8f) midp_ticker_pane_g1_ParamLimits

0xc1a9,	// (0x00023a9b) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x00027025) midp_ticker_pane_g_ParamLimits

0xc1b5,	// (0x00023aa7) midp_ticker_pane_t1_ParamLimits

0x8c47,	// (0x00020539) aid_fill_nsta_2

0xc8a5,	// (0x00024197) list_form2_midp_pane

0xd6db,	// (0x00024fcd) midp_editing_number_pane_ParamLimits

0xd6e7,	// (0x00024fd9) midp_ticker_pane_ParamLimits

0xdf7f,	// (0x00025871) form2_midp_field_pane

0xdf87,	// (0x00025879) scroll_pane_cp51

0xdfa7,	// (0x00025899) form2_midp_button_pane_ParamLimits

0xdfa7,	// (0x00025899) form2_midp_button_pane

0xdfb9,	// (0x000258ab) form2_midp_content_pane_ParamLimits

0xdfb9,	// (0x000258ab) form2_midp_content_pane

0xdfd3,	// (0x000258c5) form2_midp_field_choice_group_pane

0xdfdb,	// (0x000258cd) form2_midp_field_pane_g1

0xdfe3,	// (0x000258d5) form2_midp_field_pane_g2

0xdfeb,	// (0x000258dd) form2_midp_field_pane_g3

0xdff3,	// (0x000258e5) form2_midp_field_pane_g4

0x0003,

0xfabf,	// (0x000273b1) form2_midp_field_pane_g

0xdffb,	// (0x000258ed) form2_midp_gauge_slider_pane

0xe003,	// (0x000258f5) form2_midp_gauge_wait_pane

0xe00b,	// (0x000258fd) form2_midp_image_pane_ParamLimits

0xe00b,	// (0x000258fd) form2_midp_image_pane

0xe026,	// (0x00025918) form2_midp_label_pane_ParamLimits

0xe026,	// (0x00025918) form2_midp_label_pane

0x972c,	// (0x0002101e) form2_midp_label_pane_cp_ParamLimits

0x972c,	// (0x0002101e) form2_midp_label_pane_cp

0xe03f,	// (0x00025931) form2_midp_string_pane_ParamLimits

0xe03f,	// (0x00025931) form2_midp_string_pane

0x4084,	// (0x0001b976) form2_midp_text_pane_ParamLimits

0x4084,	// (0x0001b976) form2_midp_text_pane

0xe051,	// (0x00025943) form2_midp_time_pane

0xe061,	// (0x00025953) input_focus_pane_cp51_ParamLimits

0xe061,	// (0x00025953) input_focus_pane_cp51

0xe079,	// (0x0002596b) form2_midp_label_pane_t1_ParamLimits

0xe079,	// (0x0002596b) form2_midp_label_pane_t1

0x409d,	// (0x0001b98f) form2_mdip_text_pane_t1_ParamLimits

0x409d,	// (0x0001b98f) form2_mdip_text_pane_t1

0x40b8,	// (0x0001b9aa) form2_midp_time_pane_t1

0xe0c1,	// (0x000259b3) form2_midp_gauge_slider_pane_t1

0x974b,	// (0x0002103d) form2_midp_gauge_slider_pane_t2

0x975d,	// (0x0002104f) form2_midp_gauge_slider_pane_t3

0x0002,

0xfac8,	// (0x000273ba) form2_midp_gauge_slider_pane_t

0xe0d3,	// (0x000259c5) form2_midp_slider_pane

0xe0df,	// (0x000259d1) form2_midp_gauge_wait_pane_t1

0xe0ed,	// (0x000259df) form2_midp_wait_pane_ParamLimits

0xe0ed,	// (0x000259df) form2_midp_wait_pane

0xc62b,	// (0x00023f1d) list_single_2graphic_pane_cp4_ParamLimits

0xc62b,	// (0x00023f1d) list_single_2graphic_pane_cp4

0xe118,	// (0x00025a0a) list_single_midp_graphic_pane_cp_ParamLimits

0xe118,	// (0x00025a0a) list_single_midp_graphic_pane_cp

0xb1b8,	// (0x00022aaa) list_highlight_pane_cp20

0xe136,	// (0x00025a28) list_single_2graphic_pane_g1_cp4

0xd96b,	// (0x0002525d) list_single_2graphic_pane_g2_cp4

0xe13e,	// (0x00025a30) list_single_2graphic_pane_t1_cp4

0xb21c,	// (0x00022b0e) list_highlight_pane_cp21

0xe163,	// (0x00025a55) list_single_midp_graphic_pane_g4_cp

0xe172,	// (0x00025a64) list_single_midp_graphic_pane_t1_cp

0xe187,	// (0x00025a79) form2_mdip_string_pane_t1_ParamLimits

0xe187,	// (0x00025a79) form2_mdip_string_pane_t1

0xb1b8,	// (0x00022aaa) bg_wml_button_pane_cp2

0xb136,	// (0x00022a28) form2_midp_image_pane_g1

0x36d5,	// (0x0001afc7) list_double_large_graphic_pane_g5_ParamLimits

0x36d5,	// (0x0001afc7) list_double_large_graphic_pane_g5

0x83e7,	// (0x0001fcd9) midp_form_pane_ParamLimits

0xb21c,	// (0x00022b0e) main_apps_wheel_pane_ParamLimits

0x89d3,	// (0x000202c5) popup_preview_window_ParamLimits

0x89d3,	// (0x000202c5) popup_preview_window

0x511f,	// (0x0001ca11) popup_touch_info_window_ParamLimits

0x511f,	// (0x0001ca11) popup_touch_info_window

0x513d,	// (0x0001ca2f) popup_touch_menu_window_ParamLimits

0x513d,	// (0x0001ca2f) popup_touch_menu_window

0xb12c,	// (0x00022a1e) bg_popup_sub_pane_cp6

0xe1f1,	// (0x00025ae3) list_touch_menu_pane

0xe1f9,	// (0x00025aeb) list_single_touch_menu_pane_ParamLimits

0xe1f9,	// (0x00025aeb) list_single_touch_menu_pane

0xe210,	// (0x00025b02) list_single_touch_menu_pane_t1

0xb21c,	// (0x00022b0e) bg_popup_sub_pane_cp7_ParamLimits

0xb21c,	// (0x00022b0e) bg_popup_sub_pane_cp7

0xe21e,	// (0x00025b10) heading_sub_pane

0xe226,	// (0x00025b18) list_touch_info_pane_ParamLimits

0xe226,	// (0x00025b18) list_touch_info_pane

0xe235,	// (0x00025b27) list_single_touch_info_pane_ParamLimits

0xe235,	// (0x00025b27) list_single_touch_info_pane

0xe246,	// (0x00025b38) list_single_touch_info_pane_t1

0xe254,	// (0x00025b46) list_single_touch_info_pane_t2

0x0001,

0xfad6,	// (0x000273c8) list_single_touch_info_pane_t

0xc173,	// (0x00023a65) bg_popup_heading_pane_cp

0xe262,	// (0x00025b54) heading_sub_pane_t1

0xc5a7,	// (0x00023e99) bg_popup_preview_window_pane_cp_ParamLimits

0xc5a7,	// (0x00023e99) bg_popup_preview_window_pane_cp

0xe21e,	// (0x00025b10) heading_preview_pane

0xe226,	// (0x00025b18) list_preview_pane_ParamLimits

0xe226,	// (0x00025b18) list_preview_pane

0xe270,	// (0x00025b62) popup_preview_window_g1

0xe235,	// (0x00025b27) list_single_preview_pane_ParamLimits

0xe235,	// (0x00025b27) list_single_preview_pane

0xe278,	// (0x00025b6a) list_single_preview_pane_g1

0xe280,	// (0x00025b72) list_single_preview_pane_t1

0xe246,	// (0x00025b38) list_single_preview_pane_t2

0x0001,

0xfadb,	// (0x000273cd) list_single_preview_pane_t

0xe28e,	// (0x00025b80) bg_popup_heading_pane_cp2_ParamLimits

0xe28e,	// (0x00025b80) bg_popup_heading_pane_cp2

0xe2a4,	// (0x00025b96) heading_preview_pane_g1

0xe2ac,	// (0x00025b9e) heading_preview_pane_t1_ParamLimits

0xe2ac,	// (0x00025b9e) heading_preview_pane_t1

0xb26f,	// (0x00022b61) soft_indicator_pane_t1_ParamLimits

0xb73f,	// (0x00023031) scroll_pane_ParamLimits

0xbb70,	// (0x00023462) scroll_sc2_left_pane

0xbb79,	// (0x0002346b) scroll_sc2_right_pane

0xbb98,	// (0x0002348a) scroll_bg_pane_g1_ParamLimits

0xbbad,	// (0x0002349f) scroll_bg_pane_g2_ParamLimits

0xbbc5,	// (0x000234b7) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x00026fb0) scroll_bg_pane_g_ParamLimits

0xbb98,	// (0x0002348a) scroll_handle_pane_g1_ParamLimits

0xbbe7,	// (0x000234d9) scroll_handle_pane_g2_ParamLimits

0xbbc5,	// (0x000234b7) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x00026fb7) scroll_handle_pane_g_ParamLimits

0x4cec,	// (0x0001c5de) popup_choice_list_window_ParamLimits

0x4cec,	// (0x0001c5de) popup_choice_list_window

0xc455,	// (0x00023d47) choice_list_pane

0xc4cb,	// (0x00023dbd) cell_toolbar_pane_t1

0xc4f3,	// (0x00023de5) toolbar_button_pane_ParamLimits

0xd3d9,	// (0x00024ccb) ai_gene_pane_1_t2_ParamLimits

0xd3d9,	// (0x00024ccb) ai_gene_pane_1_t2

0x0001,

0xf8e1,	// (0x000271d3) ai_gene_pane_1_t_ParamLimits

0xf8e1,	// (0x000271d3) ai_gene_pane_1_t

0xe2c9,	// (0x00025bbb) scroll_sc2_left_pane_g1

0xe2c9,	// (0x00025bbb) scroll_sc2_right_pane_g1

0xb955,	// (0x00023247) bg_popup_sub_pane_cp10

0xe2d3,	// (0x00025bc5) list_choice_list_pane

0xe2ea,	// (0x00025bdc) list_single_choice_list_pane_ParamLimits

0xe2ea,	// (0x00025bdc) list_single_choice_list_pane

0xe2fc,	// (0x00025bee) list_single_choice_list_pane_g1

0xb940,	// (0x00023232) list_single_choice_list_pane_t1_ParamLimits

0xb940,	// (0x00023232) list_single_choice_list_pane_t1

0xe304,	// (0x00025bf6) choice_list_pane_g1

0xe30c,	// (0x00025bfe) choice_list_pane_t1

0xb12c,	// (0x00022a1e) input_focus_pane_cp11

0xbad7,	// (0x000233c9) title_pane_stacon_g2_ParamLimits

0xbad7,	// (0x000233c9) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x00026f96) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x00026f96) title_pane_stacon_g

0xc173,	// (0x00023a65) cursor_press_pane

0x873a,	// (0x0002002c) popup_fep_hwr_window_ParamLimits

0x873a,	// (0x0002002c) popup_fep_hwr_window

0x4de4,	// (0x0001c6d6) popup_fep_vkb_window_ParamLimits

0x4de4,	// (0x0001c6d6) popup_fep_vkb_window

0xe31a,	// (0x00025c0c) cursor_press_pane_g1

0x0002,

0xfb04,	// (0x000273f6) fep_vkb_side_pane_g_ParamLimits

0x5630,	// (0x0001cf22) fep_hwr_candidate_pane_ParamLimits

0x5630,	// (0x0001cf22) fep_hwr_candidate_pane

0x5658,	// (0x0001cf4a) fep_hwr_side_pane_ParamLimits

0x5658,	// (0x0001cf4a) fep_hwr_side_pane

0x5678,	// (0x0001cf6a) fep_hwr_top_pane_ParamLimits

0x5678,	// (0x0001cf6a) fep_hwr_top_pane

0x5690,	// (0x0001cf82) fep_hwr_write_pane_ParamLimits

0x5690,	// (0x0001cf82) fep_hwr_write_pane

0xfb04,	// (0x000273f6) fep_vkb_side_pane_g

0xe322,	// (0x00025c14) fep_hwr_top_pane_g1

0xe334,	// (0x00025c26) fep_hwr_top_pane_g2

0x56bc,	// (0x0001cfae) fep_hwr_top_pane_g3

0x0002,

0xfae0,	// (0x000273d2) fep_hwr_top_pane_g

0x56d1,	// (0x0001cfc3) fep_hwr_top_text_pane

0xbce1,	// (0x000235d3) fep_hwr_top_text_pane_g1

0xe36a,	// (0x00025c5c) fep_hwr_top_text_pane_t1

0x57bf,	// (0x0001d0b1) fep_hwr_candidate_pane_g1

0xe533,	// (0x00025e25) fep_vkb_keypad_pane_g3_ParamLimits

0xe533,	// (0x00025e25) fep_vkb_keypad_pane_g3

0xe555,	// (0x00025e47) fep_vkb_keypad_pane_g4_ParamLimits

0xe555,	// (0x00025e47) fep_vkb_keypad_pane_g4

0xe5c4,	// (0x00025eb6) fep_vkb_bottom_pane_g2_ParamLimits

0xe5c4,	// (0x00025eb6) fep_vkb_bottom_pane_g2

0x0001,

0xfb0b,	// (0x000273fd) fep_vkb_bottom_pane_g_ParamLimits

0xfb0b,	// (0x000273fd) fep_vkb_bottom_pane_g

0xe2c9,	// (0x00025bbb) cell_vkb_side_pane_g2

0x0001,

0xfb15,	// (0x00027407) cell_vkb_side_pane_g

0xe608,	// (0x00025efa) cell_vkb_side_pane_t1

0xe616,	// (0x00025f08) cell_vkb_side_pane_t1_copy1

0xe2c9,	// (0x00025bbb) bg_fep_vkb_candidate_pane_g2

0xe6e4,	// (0x00025fd6) cell_vkb_candidate_pane_ParamLimits

0xe378,	// (0x00025c6a) aid_size_cell_vkb_ParamLimits

0xe378,	// (0x00025c6a) aid_size_cell_vkb

0xe6e4,	// (0x00025fd6) cell_vkb_candidate_pane

0x57d9,	// (0x0001d0cb) bg_popup_fep_shadow_pane_g1

0xe3e2,	// (0x00025cd4) fep_vkb_bottom_pane_ParamLimits

0xe3e2,	// (0x00025cd4) fep_vkb_bottom_pane

0xe41f,	// (0x00025d11) fep_vkb_candidate_pane_ParamLimits

0xe41f,	// (0x00025d11) fep_vkb_candidate_pane

0xe43b,	// (0x00025d2d) fep_vkb_keypad_pane_ParamLimits

0xe43b,	// (0x00025d2d) fep_vkb_keypad_pane

0xe46f,	// (0x00025d61) fep_vkb_side_pane_ParamLimits

0xe46f,	// (0x00025d61) fep_vkb_side_pane

0xe49b,	// (0x00025d8d) fep_vkb_top_pane_ParamLimits

0xe49b,	// (0x00025d8d) fep_vkb_top_pane

0xe4c7,	// (0x00025db9) fep_vkb_top_pane_g1_ParamLimits

0xe4c7,	// (0x00025db9) fep_vkb_top_pane_g1

0xe4d6,	// (0x00025dc8) fep_vkb_top_pane_g2_ParamLimits

0xe4d6,	// (0x00025dc8) fep_vkb_top_pane_g2

0xe4e5,	// (0x00025dd7) fep_vkb_top_pane_g3_ParamLimits

0xe4e5,	// (0x00025dd7) fep_vkb_top_pane_g3

0x0003,

0xfafb,	// (0x000273ed) fep_vkb_top_pane_g_ParamLimits

0xfafb,	// (0x000273ed) fep_vkb_top_pane_g

0xe503,	// (0x00025df5) fep_vkb_top_text_pane_ParamLimits

0xe503,	// (0x00025df5) fep_vkb_top_text_pane

0x97cc,	// (0x000210be) fep_vkb_side_pane_g1_ParamLimits

0x97cc,	// (0x000210be) fep_vkb_side_pane_g1

0xe522,	// (0x00025e14) grid_vkb_side_pane_ParamLimits

0xe522,	// (0x00025e14) grid_vkb_side_pane

0x57e1,	// (0x0001d0d3) bg_popup_fep_shadow_pane_g2

0x57ea,	// (0x0001d0dc) bg_popup_fep_shadow_pane_g3

0x57f2,	// (0x0001d0e4) bg_popup_fep_shadow_pane_g4

0x57fb,	// (0x0001d0ed) bg_popup_fep_shadow_pane_g5

0x5803,	// (0x0001d0f5) bg_popup_fep_shadow_pane_g6

0x580b,	// (0x0001d0fd) bg_popup_fep_shadow_pane_g7

0xb837,	// (0x00023129) bg_popup_fep_shadow_pane_g8

0xe573,	// (0x00025e65) grid_vkb_keypad_number_pane_ParamLimits

0xe573,	// (0x00025e65) grid_vkb_keypad_number_pane

0xe583,	// (0x00025e75) grid_vkb_keypad_pane_ParamLimits

0xe583,	// (0x00025e75) grid_vkb_keypad_pane

0xe5a9,	// (0x00025e9b) fep_vkb_bottom_pane_g1_ParamLimits

0xe5a9,	// (0x00025e9b) fep_vkb_bottom_pane_g1

0xe5d2,	// (0x00025ec4) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xe5d2,	// (0x00025ec4) grid_vkb_keypad_bottom_left_pane

0xe5e7,	// (0x00025ed9) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xe5e7,	// (0x00025ed9) grid_vkb_keypad_bottom_right_pane

0xe5fc,	// (0x00025eee) fep_vkb_top_text_pane_g1

0x9813,	// (0x00021105) fep_vkb_top_text_pane_t1

0x9825,	// (0x00021117) cell_vkb_side_pane_ParamLimits

0x9825,	// (0x00021117) cell_vkb_side_pane

0xe2c9,	// (0x00025bbb) cell_vkb_side_pane_g1

0xe624,	// (0x00025f16) cell_vkb_keypad_pane_ParamLimits

0xe624,	// (0x00025f16) cell_vkb_keypad_pane

0xe691,	// (0x00025f83) cell_vkb_keypad_pane_g1

0x0008,

0xfb28,	// (0x0002741a) bg_popup_fep_shadow_pane_g

0xe2c9,	// (0x00025bbb) cell_hwr_side_pane_g1

0xe2c9,	// (0x00025bbb) cell_hwr_side_pane_g2

0xe69b,	// (0x00025f8d) cell_vkb_keypad_pane_t1

0x983b,	// (0x0002112d) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x983b,	// (0x0002112d) cell_vkb_keypad_bottom_left_pane

0x9850,	// (0x00021142) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x9850,	// (0x00021142) cell_vkb_keypad_bottom_right_pane

0xe2c9,	// (0x00025bbb) cell_vkb_keypad_bottom_left_pane_g1

0xe2c9,	// (0x00025bbb) cell_vkb_keypad_bottom_right_pane_g1

0xe6a9,	// (0x00025f9b) cell_vkb_keypad_number_pane_ParamLimits

0xe6a9,	// (0x00025f9b) cell_vkb_keypad_number_pane

0xe6c8,	// (0x00025fba) cell_vkb_keypad_number_pane_g1

0xe6d2,	// (0x00025fc4) cell_vkb_keypad_number_pane_g2

0xe6db,	// (0x00025fcd) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1a,	// (0x0002740c) cell_vkb_keypad_number_pane_g

0xe69b,	// (0x00025f8d) cell_vkb_keypad_number_pane_t1

0xe6fd,	// (0x00025fef) fep_vkb_candidate_pane_g1

0x0001,

0xfb15,	// (0x00027407) cell_hwr_side_pane_g

0xe716,	// (0x00026008) cell_hwr_side_pane_t1

0x581b,	// (0x0001d10d) cell_hwr_side_pane_t1_copy1

0xe4f5,	// (0x00025de7) cell_hwr_candidate_pane_g1

0x5829,	// (0x0001d11b) cell_hwr_candidate_pane_t1

0xe2c9,	// (0x00025bbb) cell_vkb_candidate_pane_g2

0xe79c,	// (0x0002608e) cell_vkb_candidate_pane_t1

0x55fb,	// (0x0001ceed) bg_popup_fep_shadow_pane_ParamLimits

0x55fb,	// (0x0001ceed) bg_popup_fep_shadow_pane

0x1df2,	// (0x000196e4) bg_fep_hwr_top_pane_g4

0xe346,	// (0x00025c38) bg_hwr_side_pane_g1_ParamLimits

0xe346,	// (0x00025c38) bg_hwr_side_pane_g1

0x9787,	// (0x00021079) cell_hwr_side_pane_ParamLimits

0x9787,	// (0x00021079) cell_hwr_side_pane

0x5748,	// (0x0001d03a) fep_hwr_write_pane_g1_ParamLimits

0x5748,	// (0x0001d03a) fep_hwr_write_pane_g1

0x5755,	// (0x0001d047) fep_hwr_write_pane_g2_ParamLimits

0x5755,	// (0x0001d047) fep_hwr_write_pane_g2

0x5762,	// (0x0001d054) fep_hwr_write_pane_g3_ParamLimits

0x5762,	// (0x0001d054) fep_hwr_write_pane_g3

0x97a7,	// (0x00021099) fep_hwr_write_pane_g4_ParamLimits

0x97a7,	// (0x00021099) fep_hwr_write_pane_g4

0x0005,

0xfae7,	// (0x000273d9) fep_hwr_write_pane_g_ParamLimits

0xfae7,	// (0x000273d9) fep_hwr_write_pane_g

0x1df2,	// (0x000196e4) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1df2,	// (0x000196e4) bg_fep_hwr_candidate_pane_g2

0x5785,	// (0x0001d077) cell_hwr_candidate_pane_ParamLimits

0x5785,	// (0x0001d077) cell_hwr_candidate_pane

0x57bf,	// (0x0001d0b1) fep_hwr_candidate_pane_g1_ParamLimits

0xe3a6,	// (0x00025c98) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xe3a6,	// (0x00025c98) bg_popup_fep_shadow_pane_cp2

0xe4f5,	// (0x00025de7) fep_vkb_top_pane_g4_ParamLimits

0xe4f5,	// (0x00025de7) fep_vkb_top_pane_g4

0xe514,	// (0x00025e06) fep_vkb_side_pane_g2_ParamLimits

0xe514,	// (0x00025e06) fep_vkb_side_pane_g2

0x384d,	// (0x0001b13f) list_setting_pane_t4_ParamLimits

0x384d,	// (0x0001b13f) list_setting_pane_t4

0x38e3,	// (0x0001b1d5) list_setting_number_pane_t5_ParamLimits

0x38e3,	// (0x0001b1d5) list_setting_number_pane_t5

0x8306,	// (0x0001fbf8) list_double_heading_pane_cp2_ParamLimits

0x8306,	// (0x0001fbf8) list_double_heading_pane_cp2

0xbfe8,	// (0x000238da) list_double_heading_pane_g1_cp2_ParamLimits

0xbfe8,	// (0x000238da) list_double_heading_pane_g1_cp2

0xe7aa,	// (0x0002609c) list_double_heading_pane_g2_cp2_ParamLimits

0xe7aa,	// (0x0002609c) list_double_heading_pane_g2_cp2

0xe7be,	// (0x000260b0) list_double_heading_pane_t1_cp2_ParamLimits

0xe7be,	// (0x000260b0) list_double_heading_pane_t1_cp2

0xe7d4,	// (0x000260c6) list_double_heading_pane_t2_cp2_ParamLimits

0xe7d4,	// (0x000260c6) list_double_heading_pane_t2_cp2

0xb124,	// (0x00022a16) aid_value_unit2

0x45f6,	// (0x0001bee8) popup_preview_fixed_window

0xb34f,	// (0x00022c41) bg_popup_preview_window_pane_cp02

0xe7e6,	// (0x000260d8) list_preview_fixed_pane

0xe82c,	// (0x0002611e) list_empty_pane_fp_ParamLimits

0xe82c,	// (0x0002611e) list_empty_pane_fp

0xe82c,	// (0x0002611e) list_single_cale_day_pane_fp_ParamLimits

0xe82c,	// (0x0002611e) list_single_cale_day_pane_fp

0xe82c,	// (0x0002611e) list_single_graphic_heading_pane_fp_ParamLimits

0xe82c,	// (0x0002611e) list_single_graphic_heading_pane_fp

0xe82c,	// (0x0002611e) list_single_graphic_pane_fp_ParamLimits

0xe82c,	// (0x0002611e) list_single_graphic_pane_fp

0xe82c,	// (0x0002611e) list_single_heading_pane_fp_ParamLimits

0xe82c,	// (0x0002611e) list_single_heading_pane_fp

0xe82c,	// (0x0002611e) list_single_pane_fp_ParamLimits

0xe82c,	// (0x0002611e) list_single_pane_fp

0xe840,	// (0x00026132) list_single_pane_fp_g1_ParamLimits

0xe840,	// (0x00026132) list_single_pane_fp_g1

0x40cb,	// (0x0001b9bd) list_single_pane_fp_g2_ParamLimits

0x40cb,	// (0x0001b9bd) list_single_pane_fp_g2

0x40d7,	// (0x0001b9c9) list_single_pane_fp_g3_ParamLimits

0x40d7,	// (0x0001b9c9) list_single_pane_fp_g3

0xe84c,	// (0x0002613e) list_single_pane_fp_g4_ParamLimits

0xe84c,	// (0x0002613e) list_single_pane_fp_g4

0x0003,

0xfb49,	// (0x0002743b) list_single_pane_fp_g_ParamLimits

0xfb49,	// (0x0002743b) list_single_pane_fp_g

0x40eb,	// (0x0001b9dd) list_single_pane_fp_t1_ParamLimits

0x40eb,	// (0x0001b9dd) list_single_pane_fp_t1

0x4102,	// (0x0001b9f4) list_single_graphic_pane_fp_g1_ParamLimits

0x4102,	// (0x0001b9f4) list_single_graphic_pane_fp_g1

0xe840,	// (0x00026132) list_single_graphic_pane_fp_g2_ParamLimits

0xe840,	// (0x00026132) list_single_graphic_pane_fp_g2

0x40cb,	// (0x0001b9bd) list_single_graphic_pane_fp_g3_ParamLimits

0x40cb,	// (0x0001b9bd) list_single_graphic_pane_fp_g3

0x40d7,	// (0x0001b9c9) list_single_graphic_pane_fp_g4_ParamLimits

0x40d7,	// (0x0001b9c9) list_single_graphic_pane_fp_g4

0xe84c,	// (0x0002613e) list_single_graphic_pane_fp_g5_ParamLimits

0xe84c,	// (0x0002613e) list_single_graphic_pane_fp_g5

0x0004,

0xfb52,	// (0x00027444) list_single_graphic_pane_fp_g_ParamLimits

0xfb52,	// (0x00027444) list_single_graphic_pane_fp_g

0x410e,	// (0x0001ba00) list_single_graphic_pane_fp_t1_ParamLimits

0x410e,	// (0x0001ba00) list_single_graphic_pane_fp_t1

0x4102,	// (0x0001b9f4) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4102,	// (0x0001b9f4) list_single_graphic_heading_pane_fp_g1

0xe840,	// (0x00026132) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xe840,	// (0x00026132) list_single_graphic_heading_pane_fp_g2

0x40cb,	// (0x0001b9bd) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x40cb,	// (0x0001b9bd) list_single_graphic_heading_pane_fp_g3

0x40d7,	// (0x0001b9c9) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x40d7,	// (0x0001b9c9) list_single_graphic_heading_pane_fp_g4

0xe84c,	// (0x0002613e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xe84c,	// (0x0002613e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb52,	// (0x00027444) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb52,	// (0x00027444) list_single_graphic_heading_pane_fp_g

0x4124,	// (0x0001ba16) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4124,	// (0x0001ba16) list_single_graphic_heading_pane_fp_t1

0x413a,	// (0x0001ba2c) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x413a,	// (0x0001ba2c) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb5d,	// (0x0002744f) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb5d,	// (0x0002744f) list_single_graphic_heading_pane_fp_t

0x414c,	// (0x0001ba3e) list_single_cale_day_pane_fp_g1_ParamLimits

0x414c,	// (0x0001ba3e) list_single_cale_day_pane_fp_g1

0xe858,	// (0x0002614a) list_single_cale_day_pane_fp_g2_ParamLimits

0xe858,	// (0x0002614a) list_single_cale_day_pane_fp_g2

0x4184,	// (0x0001ba76) list_single_cale_day_pane_fp_g3_ParamLimits

0x4184,	// (0x0001ba76) list_single_cale_day_pane_fp_g3

0x41ac,	// (0x0001ba9e) list_single_cale_day_pane_fp_g4_ParamLimits

0x41ac,	// (0x0001ba9e) list_single_cale_day_pane_fp_g4

0x41d0,	// (0x0001bac2) list_single_cale_day_pane_fp_g5_ParamLimits

0x41d0,	// (0x0001bac2) list_single_cale_day_pane_fp_g5

0x0004,

0xfb62,	// (0x00027454) list_single_cale_day_pane_fp_g_ParamLimits

0xfb62,	// (0x00027454) list_single_cale_day_pane_fp_g

0x41f4,	// (0x0001bae6) list_single_cale_day_pane_fp_t1_ParamLimits

0x41f4,	// (0x0001bae6) list_single_cale_day_pane_fp_t1

0x421a,	// (0x0001bb0c) list_single_cale_day_pane_fp_t2_ParamLimits

0x421a,	// (0x0001bb0c) list_single_cale_day_pane_fp_t2

0x4233,	// (0x0001bb25) list_single_cale_day_pane_fp_t3_ParamLimits

0x4233,	// (0x0001bb25) list_single_cale_day_pane_fp_t3

0x0002,

0xfb6d,	// (0x0002745f) list_single_cale_day_pane_fp_t_ParamLimits

0xfb6d,	// (0x0002745f) list_single_cale_day_pane_fp_t

0xe840,	// (0x00026132) list_empty_pane_fp_g1_ParamLimits

0xe840,	// (0x00026132) list_empty_pane_fp_g1

0x424c,	// (0x0001bb3e) list_empty_pane_fp_t1

0x425a,	// (0x0001bb4c) list_empty_pane_fp_t2

0x0001,

0xfb74,	// (0x00027466) list_empty_pane_fp_t

0xe840,	// (0x00026132) list_single_heading_pane_fp_g1_ParamLimits

0xe840,	// (0x00026132) list_single_heading_pane_fp_g1

0x40cb,	// (0x0001b9bd) list_single_heading_pane_fp_g2_ParamLimits

0x40cb,	// (0x0001b9bd) list_single_heading_pane_fp_g2

0x40d7,	// (0x0001b9c9) list_single_heading_pane_fp_g3_ParamLimits

0x40d7,	// (0x0001b9c9) list_single_heading_pane_fp_g3

0x0002,

0xfb79,	// (0x0002746b) list_single_heading_pane_fp_g_ParamLimits

0xfb79,	// (0x0002746b) list_single_heading_pane_fp_g

0x4268,	// (0x0001bb5a) list_single_heading_pane_fp_t1_ParamLimits

0x4268,	// (0x0001bb5a) list_single_heading_pane_fp_t1

0x427a,	// (0x0001bb6c) list_single_heading_pane_fp_t2_ParamLimits

0x427a,	// (0x0001bb6c) list_single_heading_pane_fp_t2

0x0001,

0xfb80,	// (0x00027472) list_single_heading_pane_fp_t_ParamLimits

0xfb80,	// (0x00027472) list_single_heading_pane_fp_t

0xb961,	// (0x00023253) aid_size_cell_fast

0xb332,	// (0x00022c24) soft_indicator_pane_cp1_t1

0xb99e,	// (0x00023290) cell_app_pane_cp2_ParamLimits

0xb99e,	// (0x00023290) cell_app_pane_cp2

0x561d,	// (0x0001cf0f) fep_hwr_candidate_drop_down_list_pane

0x1e29,	// (0x0001971b) fep_hwr_candidate_pane_g3_ParamLimits

0x1e29,	// (0x0001971b) fep_hwr_candidate_pane_g3

0x1e36,	// (0x00019728) fep_hwr_candidate_pane_g4_ParamLimits

0x1e36,	// (0x00019728) fep_hwr_candidate_pane_g4

0x0002,

0xfaf4,	// (0x000273e6) fep_hwr_candidate_pane_g_ParamLimits

0xfaf4,	// (0x000273e6) fep_hwr_candidate_pane_g

0xe40e,	// (0x00025d00) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xe40e,	// (0x00025d00) fep_vkb_candidate_drop_down_list_pane

0xe705,	// (0x00025ff7) fep_vkb_candidate_pane_g3

0xe70d,	// (0x00025fff) fep_vkb_candidate_pane_g4

0x0002,

0xfb21,	// (0x00027413) fep_vkb_candidate_pane_g

0xe4f5,	// (0x00025de7) cell_hwr_candidate_pane_g1_ParamLimits

0xe724,	// (0x00026016) cell_hwr_candidate_pane_g3_ParamLimits

0xe724,	// (0x00026016) cell_hwr_candidate_pane_g3

0xe745,	// (0x00026037) cell_hwr_candidate_pane_g4_ParamLimits

0xe745,	// (0x00026037) cell_hwr_candidate_pane_g4

0x0002,

0xfb3b,	// (0x0002742d) cell_hwr_candidate_pane_g_ParamLimits

0xfb3b,	// (0x0002742d) cell_hwr_candidate_pane_g

0xe766,	// (0x00026058) cell_vkb_candidate_pane_g3_ParamLimits

0xe766,	// (0x00026058) cell_vkb_candidate_pane_g3

0xe781,	// (0x00026073) cell_vkb_candidate_pane_g4_ParamLimits

0xe781,	// (0x00026073) cell_vkb_candidate_pane_g4

0xe864,	// (0x00026156) cell_app_pane_cp2_g1_ParamLimits

0xe864,	// (0x00026156) cell_app_pane_cp2_g1

0xe882,	// (0x00026174) cell_app_pane_cp2_g2_ParamLimits

0xe882,	// (0x00026174) cell_app_pane_cp2_g2

0x0001,

0xfb85,	// (0x00027477) cell_app_pane_cp2_g_ParamLimits

0xfb85,	// (0x00027477) cell_app_pane_cp2_g

0xe88e,	// (0x00026180) cell_app_pane_cp2_t1_ParamLimits

0xe88e,	// (0x00026180) cell_app_pane_cp2_t1

0xb7bc,	// (0x000230ae) grid_highlight_pane_cp1_ParamLimits

0xb7bc,	// (0x000230ae) grid_highlight_pane_cp1

0x5846,	// (0x0001d138) cell_hwr_candidate_pane_cp1_ParamLimits

0x5846,	// (0x0001d138) cell_hwr_candidate_pane_cp1

0xe4f5,	// (0x00025de7) fep_hwr_candidate_drop_down_list_pane_g1

0xe8a0,	// (0x00026192) fep_hwr_candidate_drop_down_list_pane_g2

0xe8ad,	// (0x0002619f) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb8a,	// (0x0002747c) fep_hwr_candidate_drop_down_list_pane_g

0x5864,	// (0x0001d156) fep_hwr_candidate_drop_down_list_scroll_pane

0x586d,	// (0x0001d15f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x586d,	// (0x0001d15f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x587a,	// (0x0001d16c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x587a,	// (0x0001d16c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5887,	// (0x0001d179) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5887,	// (0x0001d179) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xe766,	// (0x00026058) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xe766,	// (0x00026058) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xe781,	// (0x00026073) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xe781,	// (0x00026073) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5894,	// (0x0001d186) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5894,	// (0x0001d186) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x58af,	// (0x0001d1a1) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x58af,	// (0x0001d1a1) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x58ca,	// (0x0001d1bc) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x58ca,	// (0x0001d1bc) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb91,	// (0x00027483) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb91,	// (0x00027483) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x986b,	// (0x0002115d) cell_vkb_candidate_pane_cp1_ParamLimits

0x986b,	// (0x0002115d) cell_vkb_candidate_pane_cp1

0xe4f5,	// (0x00025de7) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xe4f5,	// (0x00025de7) fep_vkb_candidate_drop_down_list_pane_g1

0xe8a0,	// (0x00026192) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xe8a0,	// (0x00026192) fep_vkb_candidate_drop_down_list_pane_g2

0xe8ad,	// (0x0002619f) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xe8ad,	// (0x0002619f) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb8a,	// (0x0002747c) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb8a,	// (0x0002747c) fep_vkb_candidate_drop_down_list_pane_g

0xe8ba,	// (0x000261ac) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xe8ba,	// (0x000261ac) fep_vkb_candidate_drop_down_list_scroll_pane

0xe8c7,	// (0x000261b9) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xe8c7,	// (0x000261b9) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xe8d4,	// (0x000261c6) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xe8d4,	// (0x000261c6) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xe8e0,	// (0x000261d2) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xe8e0,	// (0x000261d2) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xe724,	// (0x00026016) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xe724,	// (0x00026016) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xe745,	// (0x00026037) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xe745,	// (0x00026037) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xe8ec,	// (0x000261de) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xe8ec,	// (0x000261de) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xe90d,	// (0x000261ff) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xe90d,	// (0x000261ff) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xe92e,	// (0x00026220) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xe92e,	// (0x00026220) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba2,	// (0x00027494) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba2,	// (0x00027494) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7d7c,	// (0x0001f66e) title_pane_g1_ParamLimits

0x7d93,	// (0x0001f685) title_pane_g2_ParamLimits

0xf529,	// (0x00026e1b) title_pane_g_ParamLimits

0xbcd1,	// (0x000235c3) aid_call2_pane

0xbcd9,	// (0x000235cb) aid_call_pane

0xbce1,	// (0x000235d3) popup_clock_analogue_window_g1

0xbce1,	// (0x000235d3) popup_clock_analogue_window_g2

0x48d0,	// (0x0001c1c2) popup_clock_analogue_window_g3

0x48d9,	// (0x0001c1cb) popup_clock_analogue_window_g4

0xb136,	// (0x00022a28) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x00026fc5) popup_clock_analogue_window_g

0x48e1,	// (0x0001c1d3) popup_clock_analogue_window_t1

0x48ef,	// (0x0001c1e1) clock_digital_number_pane_ParamLimits

0x48ef,	// (0x0001c1e1) clock_digital_number_pane

0x48fb,	// (0x0001c1ed) clock_digital_number_pane_cp02_ParamLimits

0x48fb,	// (0x0001c1ed) clock_digital_number_pane_cp02

0x4907,	// (0x0001c1f9) clock_digital_number_pane_cp03_ParamLimits

0x4907,	// (0x0001c1f9) clock_digital_number_pane_cp03

0x4913,	// (0x0001c205) clock_digital_number_pane_cp04_ParamLimits

0x4913,	// (0x0001c205) clock_digital_number_pane_cp04

0x491f,	// (0x0001c211) clock_digital_separator_pane_ParamLimits

0x491f,	// (0x0001c211) clock_digital_separator_pane

0x492b,	// (0x0001c21d) popup_clock_digital_window_t1_ParamLimits

0x492b,	// (0x0001c21d) popup_clock_digital_window_t1

0xb136,	// (0x00022a28) clock_digital_number_pane_g1

0xb136,	// (0x00022a28) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x00026fd0) clock_digital_number_pane_g

0xb136,	// (0x00022a28) clock_digital_separator_pane_g1

0xb136,	// (0x00022a28) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x00026fd0) clock_digital_separator_pane_g

0x8c31,	// (0x00020523) aid_fill_nsta_ParamLimits

0x8d48,	// (0x0002063a) indicator_nsta_pane_ParamLimits

0xc3fe,	// (0x00023cf0) popup_clock_analogue_window

0xc3fe,	// (0x00023cf0) popup_clock_digital_window

0x9663,	// (0x00020f55) grid_indicator_nsta_pane_ParamLimits

0xdeb9,	// (0x000257ab) clock_nsta_pane_t2

0x0001,

0xfa74,	// (0x00027366) clock_nsta_pane_t

0x4894,	// (0x0001c186) aid_size_max_handle

0x826a,	// (0x0001fb5c) aid_size_min_handle

0xc173,	// (0x00023a65) editor_scroll_pane

0xe949,	// (0x0002623b) ex_editor_pane

0xb91e,	// (0x00023210) scroll_pane_cp13

0xb76c,	// (0x0002305e) scroll_pane_cp14

0xbd10,	// (0x00023602) scroll_pane_cp36

0x8312,	// (0x0001fc04) list_single_graphic_hl_pane_cp2_ParamLimits

0x8312,	// (0x0001fc04) list_single_graphic_hl_pane_cp2

0x7a2a,	// (0x0001f31c) list_single_graphic_hl_pane_ParamLimits

0x7a2a,	// (0x0001f31c) list_single_graphic_hl_pane

0x4290,	// (0x0001bb82) aid_size_min_hl_cp1

0xe951,	// (0x00026243) list_highlight_pane_cp34_ParamLimits

0xe951,	// (0x00026243) list_highlight_pane_cp34

0xe962,	// (0x00026254) list_single_graphic_hl_pane_g1_ParamLimits

0xe962,	// (0x00026254) list_single_graphic_hl_pane_g1

0x7a51,	// (0x0001f343) list_single_graphic_hl_pane_g2_ParamLimits

0x7a51,	// (0x0001f343) list_single_graphic_hl_pane_g2

0x7a51,	// (0x0001f343) list_single_graphic_hl_pane_g3_ParamLimits

0x7a51,	// (0x0001f343) list_single_graphic_hl_pane_g3

0x354c,	// (0x0001ae3e) list_single_graphic_hl_pane_g4_ParamLimits

0x354c,	// (0x0001ae3e) list_single_graphic_hl_pane_g4

0x7a5d,	// (0x0001f34f) list_single_graphic_hl_pane_g5_ParamLimits

0x7a5d,	// (0x0001f34f) list_single_graphic_hl_pane_g5

0x0004,

0xfbb3,	// (0x000274a5) list_single_graphic_hl_pane_g_ParamLimits

0xfbb3,	// (0x000274a5) list_single_graphic_hl_pane_g

0x7a71,	// (0x0001f363) list_single_graphic_hl_pane_t1_ParamLimits

0x7a71,	// (0x0001f363) list_single_graphic_hl_pane_t1

0xe96f,	// (0x00026261) aid_size_min_hl_cp2

0xe978,	// (0x0002626a) list_highlight_pane_cp34_cp2_ParamLimits

0xe978,	// (0x0002626a) list_highlight_pane_cp34_cp2

0xe962,	// (0x00026254) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xe962,	// (0x00026254) list_single_graphic_hl_pane_g1_cp2

0xe985,	// (0x00026277) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xe985,	// (0x00026277) list_single_graphic_hl_pane_g2_cp2

0xe991,	// (0x00026283) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xe991,	// (0x00026283) list_single_graphic_hl_pane_g3_cp2

0xbfe8,	// (0x000238da) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xbfe8,	// (0x000238da) list_single_graphic_hl_pane_g4_cp2

0xe7aa,	// (0x0002609c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xe7aa,	// (0x0002609c) list_single_graphic_hl_pane_g5_cp2

0x852f,	// (0x0001fe21) control_pane_g4_ParamLimits

0x852f,	// (0x0001fe21) control_pane_g4

0xb955,	// (0x00023247) bg_popup_sub_pane_cp10_ParamLimits

0xe2d3,	// (0x00025bc5) list_choice_list_pane_ParamLimits

0xe2e2,	// (0x00025bd4) scroll_pane_cp23

0xb34f,	// (0x00022c41) bg_popup_preview_window_pane_cp02_ParamLimits

0xe7e6,	// (0x000260d8) list_preview_fixed_pane_ParamLimits

0xe7fc,	// (0x000260ee) list_preview_fixed_pane_cp_ParamLimits

0xe7fc,	// (0x000260ee) list_preview_fixed_pane_cp

0xe808,	// (0x000260fa) popup_preview_fixed_window_g1_ParamLimits

0xe808,	// (0x000260fa) popup_preview_fixed_window_g1

0xe814,	// (0x00026106) popup_preview_fixed_window_g2_ParamLimits

0xe814,	// (0x00026106) popup_preview_fixed_window_g2

0x0002,

0xfb42,	// (0x00027434) popup_preview_fixed_window_g_ParamLimits

0xfb42,	// (0x00027434) popup_preview_fixed_window_g

0x4824,	// (0x0001c116) aid_navi_side_left_pane_ParamLimits

0x4834,	// (0x0001c126) aid_navi_side_right_pane_ParamLimits

0x4843,	// (0x0001c135) navi_icon_pane_stacon_ParamLimits

0x4853,	// (0x0001c145) navi_navi_pane_stacon_ParamLimits

0x4843,	// (0x0001c135) navi_text_pane_stacon_ParamLimits

0xb12c,	// (0x00022a1e) main_text_info_pane

0xe9b3,	// (0x000262a5) listscroll_text_info_pane

0xe9bb,	// (0x000262ad) list_text_info_pane_ParamLimits

0xe9bb,	// (0x000262ad) list_text_info_pane

0xe9ca,	// (0x000262bc) scroll_pane_cp24_ParamLimits

0xe9ca,	// (0x000262bc) scroll_pane_cp24

0x988b,	// (0x0002117d) list_text_info_pane_t1_ParamLimits

0x988b,	// (0x0002117d) list_text_info_pane_t1

0x86ba,	// (0x0001ffac) popup_fast_swap2_window_ParamLimits

0x86ba,	// (0x0001ffac) popup_fast_swap2_window

0xe9e8,	// (0x000262da) aid_size_cell_fast2

0xb12c,	// (0x00022a1e) bg_popup_window_pane_cp17

0xc8d1,	// (0x000241c3) heading_pane_cp2

0xc8d9,	// (0x000241cb) listscroll_fast2_pane

0xe9f2,	// (0x000262e4) grid_fast2_pane

0xe9fa,	// (0x000262ec) listscroll_fast2_pane_g1

0xea02,	// (0x000262f4) listscroll_fast2_pane_g2

0x0001,

0xfbbe,	// (0x000274b0) listscroll_fast2_pane_g

0xb91e,	// (0x00023210) scroll_pane_cp26

0xea0a,	// (0x000262fc) cell_fast2_pane_ParamLimits

0xea0a,	// (0x000262fc) cell_fast2_pane

0xea20,	// (0x00026312) cell_fast2_pane_g1

0xea29,	// (0x0002631b) cell_fast2_pane_g2

0xea32,	// (0x00026324) cell_fast2_pane_g3

0x0002,

0xfbc3,	// (0x000274b5) cell_fast2_pane_g

0xb5cd,	// (0x00022ebf) grid_highlight_pane_cp9

0xb5e2,	// (0x00022ed4) main_eswt_pane_ParamLimits

0xb5e2,	// (0x00022ed4) main_eswt_pane

0xe9df,	// (0x000262d1) list_single_text_info_pane

0xea3a,	// (0x0002632c) eswt_ctrl_button_pane

0xea3a,	// (0x0002632c) eswt_ctrl_canvas_pane

0xea42,	// (0x00026334) eswt_ctrl_combo_pane

0xea3a,	// (0x0002632c) eswt_ctrl_default_pane

0xea3a,	// (0x0002632c) eswt_ctrl_label_pane

0xea4a,	// (0x0002633c) eswt_ctrl_wait_pane

0xea52,	// (0x00026344) eswt_shell_pane

0xb12c,	// (0x00022a1e) listscroll_eswt_app_pane

0xea6e,	// (0x00026360) popup_eswt_tasktip_window_ParamLimits

0xea6e,	// (0x00026360) popup_eswt_tasktip_window

0xc5a7,	// (0x00023e99) bg_popup_window_pane_cp18

0xea7f,	// (0x00026371) eswt_control_pane_g1_ParamLimits

0xea7f,	// (0x00026371) eswt_control_pane_g1

0xea8c,	// (0x0002637e) eswt_control_pane_g2_ParamLimits

0xea8c,	// (0x0002637e) eswt_control_pane_g2

0xea99,	// (0x0002638b) eswt_control_pane_g3_ParamLimits

0xea99,	// (0x0002638b) eswt_control_pane_g3

0xeaa6,	// (0x00026398) eswt_control_pane_g4_ParamLimits

0xeaa6,	// (0x00026398) eswt_control_pane_g4

0x0003,

0xfbca,	// (0x000274bc) eswt_control_pane_g_ParamLimits

0xfbca,	// (0x000274bc) eswt_control_pane_g

0xb7bc,	// (0x000230ae) bg_button_pane_ParamLimits

0xb7bc,	// (0x000230ae) bg_button_pane

0xb5e2,	// (0x00022ed4) common_borders_pane_copy2_ParamLimits

0xb5e2,	// (0x00022ed4) common_borders_pane_copy2

0xeab3,	// (0x000263a5) control_button_pane_g1_ParamLimits

0xeab3,	// (0x000263a5) control_button_pane_g1

0xeabf,	// (0x000263b1) control_button_pane_g2_ParamLimits

0xeabf,	// (0x000263b1) control_button_pane_g2

0xeacb,	// (0x000263bd) control_button_pane_g3_ParamLimits

0xeacb,	// (0x000263bd) control_button_pane_g3

0x0002,

0xfbd3,	// (0x000274c5) control_button_pane_g_ParamLimits

0xfbd3,	// (0x000274c5) control_button_pane_g

0xeadf,	// (0x000263d1) control_button_pane_t1

0xeaed,	// (0x000263df) control_button_pane_t2

0x0001,

0xfbda,	// (0x000274cc) control_button_pane_t

0xc4ff,	// (0x00023df1) bg_button_pane_g1

0xc507,	// (0x00023df9) bg_button_pane_g2

0xc50f,	// (0x00023e01) bg_button_pane_g3

0xc517,	// (0x00023e09) bg_button_pane_g4

0xc51f,	// (0x00023e11) bg_button_pane_g5

0xc527,	// (0x00023e19) bg_button_pane_g6

0xc52f,	// (0x00023e21) bg_button_pane_g7

0xc537,	// (0x00023e29) bg_button_pane_g8

0xc53f,	// (0x00023e31) bg_button_pane_g9

0x0008,

0xf835,	// (0x00027127) bg_button_pane_g

0xe28e,	// (0x00025b80) common_borders_pane_ParamLimits

0xe28e,	// (0x00025b80) common_borders_pane

0xea7f,	// (0x00026371) eswt_control_pane_g1_copy1_ParamLimits

0xea7f,	// (0x00026371) eswt_control_pane_g1_copy1

0xea8c,	// (0x0002637e) eswt_control_pane_g2_copy1_ParamLimits

0xea8c,	// (0x0002637e) eswt_control_pane_g2_copy1

0xea99,	// (0x0002638b) eswt_control_pane_g3_copy1_ParamLimits

0xea99,	// (0x0002638b) eswt_control_pane_g3_copy1

0xeaa6,	// (0x00026398) eswt_control_pane_g4_copy1_ParamLimits

0xeaa6,	// (0x00026398) eswt_control_pane_g4_copy1

0xe2c9,	// (0x00025bbb) bg_eswt_ctrl_canvas_pane_g1

0xe28e,	// (0x00025b80) common_borders_pane_cp2_ParamLimits

0xe28e,	// (0x00025b80) common_borders_pane_cp2

0xe28e,	// (0x00025b80) common_borders_pane_cp3_ParamLimits

0xe28e,	// (0x00025b80) common_borders_pane_cp3

0xeafb,	// (0x000263ed) separator_horizontal_pane

0xbb70,	// (0x00023462) separator_vertical_pane

0xea7f,	// (0x00026371) eswt_control_pane_g1_copy2_ParamLimits

0xea7f,	// (0x00026371) eswt_control_pane_g1_copy2

0xea8c,	// (0x0002637e) eswt_control_pane_g2_copy2_ParamLimits

0xea8c,	// (0x0002637e) eswt_control_pane_g2_copy2

0xea99,	// (0x0002638b) eswt_control_pane_g3_copy2_ParamLimits

0xea99,	// (0x0002638b) eswt_control_pane_g3_copy2

0xeaa6,	// (0x00026398) eswt_control_pane_g4_copy2_ParamLimits

0xeaa6,	// (0x00026398) eswt_control_pane_g4_copy2

0xb12c,	// (0x00022a1e) common_borders_pane_cp4

0xeb03,	// (0x000263f5) separator_horizontal_pane_g1

0xeb0c,	// (0x000263fe) separator_horizontal_pane_g2

0xeb15,	// (0x00026407) separator_horizontal_pane_g3

0x0002,

0xfbdf,	// (0x000274d1) separator_horizontal_pane_g

0xea7f,	// (0x00026371) eswt_control_pane_g1_copy3_ParamLimits

0xea7f,	// (0x00026371) eswt_control_pane_g1_copy3

0xea8c,	// (0x0002637e) eswt_control_pane_g2_copy3_ParamLimits

0xea8c,	// (0x0002637e) eswt_control_pane_g2_copy3

0xea99,	// (0x0002638b) eswt_control_pane_g3_copy3_ParamLimits

0xea99,	// (0x0002638b) eswt_control_pane_g3_copy3

0xeaa6,	// (0x00026398) eswt_control_pane_g4_copy3_ParamLimits

0xeaa6,	// (0x00026398) eswt_control_pane_g4_copy3

0xb12c,	// (0x00022a1e) common_borders_pane_cp5

0xeb1e,	// (0x00026410) separator_vertical_pane_g1

0xeb27,	// (0x00026419) separator_vertical_pane_g2

0xeb30,	// (0x00026422) separator_vertical_pane_g3

0x0002,

0xfbe6,	// (0x000274d8) separator_vertical_pane_g

0xea7f,	// (0x00026371) eswt_control_pane_g1_copy4_ParamLimits

0xea7f,	// (0x00026371) eswt_control_pane_g1_copy4

0xea8c,	// (0x0002637e) eswt_control_pane_g2_copy4_ParamLimits

0xea8c,	// (0x0002637e) eswt_control_pane_g2_copy4

0xea99,	// (0x0002638b) eswt_control_pane_g3_copy4_ParamLimits

0xea99,	// (0x0002638b) eswt_control_pane_g3_copy4

0xeaa6,	// (0x00026398) eswt_control_pane_g4_copy4_ParamLimits

0xeaa6,	// (0x00026398) eswt_control_pane_g4_copy4

0x98a6,	// (0x00021198) eswt_ctrl_combo_button_pane

0x98ae,	// (0x000211a0) eswt_ctrl_input_pane

0x98b6,	// (0x000211a8) popup_choice_list_window_cp70

0x98be,	// (0x000211b0) eswt_ctrl_input_pane_t1

0xb12c,	// (0x00022a1e) input_focus_pane_cp70

0xe28e,	// (0x00025b80) bg_button_pane_cp70_ParamLimits

0xe28e,	// (0x00025b80) bg_button_pane_cp70

0xd928,	// (0x0002521a) eswt_ctrl_combo_button_pane_g1

0xeb39,	// (0x0002642b) wait_bar_pane_cp70

0xc5a7,	// (0x00023e99) bg_popup_window_pane_cp70_ParamLimits

0xc5a7,	// (0x00023e99) bg_popup_window_pane_cp70

0xeb41,	// (0x00026433) popup_eswt_tasktip_window_t1

0xeb57,	// (0x00026449) wait_bar_pane_cp71_ParamLimits

0xeb57,	// (0x00026449) wait_bar_pane_cp71

0xeb63,	// (0x00026455) grid_eswt_app_pane

0xbb79,	// (0x0002346b) scroll_pane_cp70

0x98cc,	// (0x000211be) cell_eswt_app_pane_ParamLimits

0x98cc,	// (0x000211be) cell_eswt_app_pane

0x98f4,	// (0x000211e6) cell_eswt_app_pane_g1_ParamLimits

0x98f4,	// (0x000211e6) cell_eswt_app_pane_g1

0x9923,	// (0x00021215) cell_eswt_app_pane_g2_ParamLimits

0x9923,	// (0x00021215) cell_eswt_app_pane_g2

0x0001,

0xfbed,	// (0x000274df) cell_eswt_app_pane_g_ParamLimits

0xfbed,	// (0x000274df) cell_eswt_app_pane_g

0x994c,	// (0x0002123e) cell_eswt_app_pane_t1_ParamLimits

0x994c,	// (0x0002123e) cell_eswt_app_pane_t1

0xeb6c,	// (0x0002645e) grid_highlight_pane_cp70_ParamLimits

0xeb6c,	// (0x0002645e) grid_highlight_pane_cp70

0xb7d6,	// (0x000230c8) set_content_pane_g1

0xc2f2,	// (0x00023be4) status_small_volume_pane

0x58e5,	// (0x0001d1d7) status_small_volume_pane_g1

0x58ed,	// (0x0001d1df) volume_small2_pane

0x58f6,	// (0x0001d1e8) volume_small2_pane_g1

0x58ff,	// (0x0001d1f1) volume_small2_pane_g2

0x5908,	// (0x0001d1fa) volume_small2_pane_g3

0x5911,	// (0x0001d203) volume_small2_pane_g4

0x591a,	// (0x0001d20c) volume_small2_pane_g5

0x5923,	// (0x0001d215) volume_small2_pane_g6

0x592c,	// (0x0001d21e) volume_small2_pane_g7

0x5935,	// (0x0001d227) volume_small2_pane_g8

0x593e,	// (0x0001d230) volume_small2_pane_g9

0x5947,	// (0x0001d239) volume_small2_pane_g10

0x0009,

0xfbf2,	// (0x000274e4) volume_small2_pane_g

0xe5fc,	// (0x00025eee) fep_vkb_top_text_pane_g1_ParamLimits

0x9813,	// (0x00021105) fep_vkb_top_text_pane_t1_ParamLimits

0xe820,	// (0x00026112) popup_preview_fixed_window_g3_ParamLimits

0xe820,	// (0x00026112) popup_preview_fixed_window_g3

0x8bda,	// (0x000204cc) popup_toolbar_trans_pane

0xd628,	// (0x00024f1a) aid_height_set_list_ParamLimits

0xd634,	// (0x00024f26) aid_size_parent_ParamLimits

0xb955,	// (0x00023247) list_highlight_pane_cp2_ParamLimits

0xb7d6,	// (0x000230c8) set_content_pane_g1_ParamLimits

0xb99e,	// (0x00023290) list_single_image_pane_ParamLimits

0xb99e,	// (0x00023290) list_single_image_pane

0x997e,	// (0x00021270) aid_size_cell_image_ParamLimits

0x997e,	// (0x00021270) aid_size_cell_image

0x998b,	// (0x0002127d) grid_single_image_pane_ParamLimits

0x998b,	// (0x0002127d) grid_single_image_pane

0xb7d6,	// (0x000230c8) list_single_image_pane_g1_ParamLimits

0xb7d6,	// (0x000230c8) list_single_image_pane_g1

0xb7e2,	// (0x000230d4) list_single_image_pane_g2_ParamLimits

0xb7e2,	// (0x000230d4) list_single_image_pane_g2

0x0001,

0xfc07,	// (0x000274f9) list_single_image_pane_g_ParamLimits

0xfc07,	// (0x000274f9) list_single_image_pane_g

0xe14d,	// (0x00025a3f) list_single_image_pane_t1_ParamLimits

0xe14d,	// (0x00025a3f) list_single_image_pane_t1

0x9999,	// (0x0002128b) cell_image_list_pane_ParamLimits

0x9999,	// (0x0002128b) cell_image_list_pane

0x99ad,	// (0x0002129f) cell_image_list_pane_g1

0x99b6,	// (0x000212a8) cell_image_list_pane_g2

0x0001,

0xfc0c,	// (0x000274fe) cell_image_list_pane_g

0xeb78,	// (0x0002646a) aid_size_cell_tb_trans_pane

0xb7bc,	// (0x000230ae) bg_tb_trans_pane

0xeb8a,	// (0x0002647c) grid_tb_trans_pane

0xc4ff,	// (0x00023df1) bg_tb_trans_pane_g1

0xc507,	// (0x00023df9) bg_tb_trans_pane_g2

0xc50f,	// (0x00023e01) bg_tb_trans_pane_g3

0xc517,	// (0x00023e09) bg_tb_trans_pane_g4

0xc51f,	// (0x00023e11) bg_tb_trans_pane_g5

0xc537,	// (0x00023e29) bg_tb_trans_pane_g6

0xc53f,	// (0x00023e31) bg_tb_trans_pane_g7

0xc527,	// (0x00023e19) bg_tb_trans_pane_g8

0xc52f,	// (0x00023e21) bg_tb_trans_pane_g9

0x0008,

0xfc11,	// (0x00027503) bg_tb_trans_pane_g

0xeb9e,	// (0x00026490) cell_toolbar_trans_pane_ParamLimits

0xeb9e,	// (0x00026490) cell_toolbar_trans_pane

0xe2c9,	// (0x00025bbb) cell_toolbar_trans_pane_g1

0x9710,	// (0x00021002) list_form2_midp_pane_t1

0x971e,	// (0x00021010) list_form2_midp_pane_t2

0x0001,

0xfaba,	// (0x000273ac) list_form2_midp_pane_t

0xdf87,	// (0x00025879) scroll_pane_cp51_ParamLimits

0xe0fd,	// (0x000259ef) form2_midp_wait_pane_g1

0xe106,	// (0x000259f8) form2_midp_wait_pane_g2

0xe10f,	// (0x00025a01) form2_midp_wait_pane_g3

0x0002,

0xfacf,	// (0x000273c1) form2_midp_wait_pane_g

0xb21c,	// (0x00022b0e) list_highlight_pane_cp21_ParamLimits

0xe163,	// (0x00025a55) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xe172,	// (0x00025a64) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xd6fa,	// (0x00024fec) list_single_2graphic_im_pane_ParamLimits

0xd6fa,	// (0x00024fec) list_single_2graphic_im_pane

0x99bf,	// (0x000212b1) list_single_2graphic_im_pane_g1_ParamLimits

0x99bf,	// (0x000212b1) list_single_2graphic_im_pane_g1

0x99d0,	// (0x000212c2) list_single_2graphic_im_pane_g2_ParamLimits

0x99d0,	// (0x000212c2) list_single_2graphic_im_pane_g2

0x99dc,	// (0x000212ce) list_single_2graphic_im_pane_g3_ParamLimits

0x99dc,	// (0x000212ce) list_single_2graphic_im_pane_g3

0x0003,

0xfc24,	// (0x00027516) list_single_2graphic_im_pane_g_ParamLimits

0xfc24,	// (0x00027516) list_single_2graphic_im_pane_g

0x99f0,	// (0x000212e2) list_single_2graphic_im_pane_t1_ParamLimits

0x99f0,	// (0x000212e2) list_single_2graphic_im_pane_t1

0xe82c,	// (0x0002611e) list_single_graphic_2heading_pane_fp_ParamLimits

0xe82c,	// (0x0002611e) list_single_graphic_2heading_pane_fp

0x4102,	// (0x0001b9f4) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4102,	// (0x0001b9f4) list_single_graphic_2heading_pane_fp_g1

0xe840,	// (0x00026132) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xe840,	// (0x00026132) list_single_graphic_2heading_pane_fp_g2

0x40cb,	// (0x0001b9bd) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x40cb,	// (0x0001b9bd) list_single_graphic_2heading_pane_fp_g3

0x40d7,	// (0x0001b9c9) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x40d7,	// (0x0001b9c9) list_single_graphic_2heading_pane_fp_g4

0xe84c,	// (0x0002613e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xe84c,	// (0x0002613e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb52,	// (0x00027444) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb52,	// (0x00027444) list_single_graphic_2heading_pane_fp_g

0x42cf,	// (0x0001bbc1) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x42cf,	// (0x0001bbc1) list_single_graphic_2heading_pane_fp_t1

0x413a,	// (0x0001ba2c) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x413a,	// (0x0001ba2c) list_single_graphic_2heading_pane_fp_t2

0x42e5,	// (0x0001bbd7) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x42e5,	// (0x0001bbd7) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc2d,	// (0x0002751f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc2d,	// (0x0002751f) list_single_graphic_2heading_pane_fp_t

0xe352,	// (0x00025c44) fep_hwr_write_pane_g5_ParamLimits

0xe352,	// (0x00025c44) fep_hwr_write_pane_g5

0xe35e,	// (0x00025c50) fep_hwr_write_pane_g6_ParamLimits

0xe35e,	// (0x00025c50) fep_hwr_write_pane_g6

0xea52,	// (0x00026344) eswt_shell_pane_ParamLimits

0xc5a7,	// (0x00023e99) bg_popup_window_pane_cp18_ParamLimits

0xd5cc,	// (0x00024ebe) heading_pane_cp70

0xeb41,	// (0x00026433) popup_eswt_tasktip_window_t1_ParamLimits

0x8c75,	// (0x00020567) aid_touch_tab_arrow_left

0x8c89,	// (0x0002057b) aid_touch_tab_arrow_right

0x7db2,	// (0x0001f6a4) title_pane_g3_ParamLimits

0x7db2,	// (0x0001f6a4) title_pane_g3

0xb78c,	// (0x0002307e) set_value_pane_g1

0x8bda,	// (0x000204cc) popup_toolbar_trans_pane_ParamLimits

0xeb78,	// (0x0002646a) aid_size_cell_tb_trans_pane_ParamLimits

0xb7bc,	// (0x000230ae) bg_tb_trans_pane_ParamLimits

0xeb8a,	// (0x0002647c) grid_tb_trans_pane_ParamLimits

0xb34f,	// (0x00022c41) cont_note_pane_ParamLimits

0xb34f,	// (0x00022c41) cont_note_pane

0xb5e2,	// (0x00022ed4) cont_snote2_single_text_pane_ParamLimits

0xb5e2,	// (0x00022ed4) cont_snote2_single_text_pane

0xb5e2,	// (0x00022ed4) cont_snote2_single_graphic_pane_ParamLimits

0xb5e2,	// (0x00022ed4) cont_snote2_single_graphic_pane

0xcaef,	// (0x000243e1) cont_note_wait_pane_ParamLimits

0xcaef,	// (0x000243e1) cont_note_wait_pane

0xcaef,	// (0x000243e1) cont_note_image_pane_ParamLimits

0xcaef,	// (0x000243e1) cont_note_image_pane

0xebd0,	// (0x000264c2) popup_note2_window_g1_ParamLimits

0xebd0,	// (0x000264c2) popup_note2_window_g1

0xec01,	// (0x000264f3) popup_note2_window_t1_ParamLimits

0xec01,	// (0x000264f3) popup_note2_window_t1

0xec46,	// (0x00026538) popup_note2_window_t2_ParamLimits

0xec46,	// (0x00026538) popup_note2_window_t2

0xec8b,	// (0x0002657d) popup_note2_window_t3_ParamLimits

0xec8b,	// (0x0002657d) popup_note2_window_t3

0xecd0,	// (0x000265c2) popup_note2_window_t4_ParamLimits

0xecd0,	// (0x000265c2) popup_note2_window_t4

0xb3d3,	// (0x00022cc5) popup_note2_window_t5_ParamLimits

0xb3d3,	// (0x00022cc5) popup_note2_window_t5

0x0004,

0xfc39,	// (0x0002752b) popup_note2_window_t_ParamLimits

0xfc39,	// (0x0002752b) popup_note2_window_t

0xecff,	// (0x000265f1) popup_note2_image_window_g1_ParamLimits

0xecff,	// (0x000265f1) popup_note2_image_window_g1

0xed0b,	// (0x000265fd) popup_note2_image_window_g2_ParamLimits

0xed0b,	// (0x000265fd) popup_note2_image_window_g2

0x0001,

0xfc44,	// (0x00027536) popup_note2_image_window_g_ParamLimits

0xfc44,	// (0x00027536) popup_note2_image_window_g

0xed1d,	// (0x0002660f) popup_note2_image_window_t1_ParamLimits

0xed1d,	// (0x0002660f) popup_note2_image_window_t1

0xed35,	// (0x00026627) popup_note2_image_window_t2_ParamLimits

0xed35,	// (0x00026627) popup_note2_image_window_t2

0xed4d,	// (0x0002663f) popup_note2_image_window_t3_ParamLimits

0xed4d,	// (0x0002663f) popup_note2_image_window_t3

0x0002,

0xfc49,	// (0x0002753b) popup_note2_image_window_t_ParamLimits

0xfc49,	// (0x0002753b) popup_note2_image_window_t

0xcafd,	// (0x000243ef) popup_note2_wait_window_g1_ParamLimits

0xcafd,	// (0x000243ef) popup_note2_wait_window_g1

0xcb09,	// (0x000243fb) popup_note2_wait_window_g2_ParamLimits

0xcb09,	// (0x000243fb) popup_note2_wait_window_g2

0xcb15,	// (0x00024407) popup_note2_wait_window_g3_ParamLimits

0xcb15,	// (0x00024407) popup_note2_wait_window_g3

0x0002,

0xf817,	// (0x00027109) popup_note2_wait_window_g_ParamLimits

0xf817,	// (0x00027109) popup_note2_wait_window_g

0xed69,	// (0x0002665b) popup_note2_wait_window_t1_ParamLimits

0xed69,	// (0x0002665b) popup_note2_wait_window_t1

0xed87,	// (0x00026679) popup_note2_wait_window_t2_ParamLimits

0xed87,	// (0x00026679) popup_note2_wait_window_t2

0xeda5,	// (0x00026697) popup_note2_wait_window_t3_ParamLimits

0xeda5,	// (0x00026697) popup_note2_wait_window_t3

0xedb7,	// (0x000266a9) popup_note2_wait_window_t4_ParamLimits

0xedb7,	// (0x000266a9) popup_note2_wait_window_t4

0x0003,

0xfc50,	// (0x00027542) popup_note2_wait_window_t_ParamLimits

0xfc50,	// (0x00027542) popup_note2_wait_window_t

0xedc9,	// (0x000266bb) wait_bar2_pane_ParamLimits

0xedc9,	// (0x000266bb) wait_bar2_pane

0xede1,	// (0x000266d3) popup_snote2_single_text_window_g1_ParamLimits

0xede1,	// (0x000266d3) popup_snote2_single_text_window_g1

0xee09,	// (0x000266fb) popup_snote2_single_text_window_t1_ParamLimits

0xee09,	// (0x000266fb) popup_snote2_single_text_window_t1

0xee55,	// (0x00026747) popup_snote2_single_text_window_t2_ParamLimits

0xee55,	// (0x00026747) popup_snote2_single_text_window_t2

0xeea1,	// (0x00026793) popup_snote2_single_text_window_t3_ParamLimits

0xeea1,	// (0x00026793) popup_snote2_single_text_window_t3

0xeee2,	// (0x000267d4) popup_snote2_single_text_window_t4_ParamLimits

0xeee2,	// (0x000267d4) popup_snote2_single_text_window_t4

0xef18,	// (0x0002680a) popup_snote2_single_text_window_t5_ParamLimits

0xef18,	// (0x0002680a) popup_snote2_single_text_window_t5

0x0004,

0xfc59,	// (0x0002754b) popup_snote2_single_text_window_t_ParamLimits

0xfc59,	// (0x0002754b) popup_snote2_single_text_window_t

0xef43,	// (0x00026835) popup_snote2_single_graphic_window_g1_ParamLimits

0xef43,	// (0x00026835) popup_snote2_single_graphic_window_g1

0xef6b,	// (0x0002685d) popup_snote2_single_graphic_window_g2_ParamLimits

0xef6b,	// (0x0002685d) popup_snote2_single_graphic_window_g2

0x0001,

0xfc64,	// (0x00027556) popup_snote2_single_graphic_window_g_ParamLimits

0xfc64,	// (0x00027556) popup_snote2_single_graphic_window_g

0xef93,	// (0x00026885) popup_snote2_single_graphic_window_t1_ParamLimits

0xef93,	// (0x00026885) popup_snote2_single_graphic_window_t1

0xefdf,	// (0x000268d1) popup_snote2_single_graphic_window_t2_ParamLimits

0xefdf,	// (0x000268d1) popup_snote2_single_graphic_window_t2

0xeea1,	// (0x00026793) popup_snote2_single_graphic_window_t3_ParamLimits

0xeea1,	// (0x00026793) popup_snote2_single_graphic_window_t3

0xeee2,	// (0x000267d4) popup_snote2_single_graphic_window_t4_ParamLimits

0xeee2,	// (0x000267d4) popup_snote2_single_graphic_window_t4

0xef18,	// (0x0002680a) popup_snote2_single_graphic_window_t5_ParamLimits

0xef18,	// (0x0002680a) popup_snote2_single_graphic_window_t5

0x0004,

0xfc69,	// (0x0002755b) popup_snote2_single_graphic_window_t_ParamLimits

0xfc69,	// (0x0002755b) popup_snote2_single_graphic_window_t

0xdf20,	// (0x00025812) clock_nsta_pane_cp2_t1

0xdf20,	// (0x00025812) clock_nsta_pane_cp2_t2

0x0001,

0xfa90,	// (0x00027382) clock_nsta_pane_cp2_t

0x39c0,	// (0x0001b2b2) form_field_data_wide_pane_g1_ParamLimits

0xb7d6,	// (0x000230c8) form_field_data_wide_pane_g2_ParamLimits

0xb7d6,	// (0x000230c8) form_field_data_wide_pane_g2

0xb7e2,	// (0x000230d4) form_field_data_wide_pane_g3_ParamLimits

0xb7e2,	// (0x000230d4) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x00026f48) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x00026f48) form_field_data_wide_pane_g

0x964d,	// (0x00020f3f) grid_touch_3_pane_ParamLimits

0x964d,	// (0x00020f3f) grid_touch_3_pane

0x9a21,	// (0x00021313) cell_touch_3_pane_ParamLimits

0x9a21,	// (0x00021313) cell_touch_3_pane

0xe2c9,	// (0x00025bbb) cell_touch_3_pane_g1

0xe2c9,	// (0x00025bbb) cell_touch_3_pane_g2

0x0001,

0xfb15,	// (0x00027407) cell_touch_3_pane_g

0xb42b,	// (0x00022d1d) cont_query_data_pane

0xb433,	// (0x00022d25) cont_query_data_pane_cp1

0xf02b,	// (0x0002691d) button_value_adjust_pane_cp7

0xf033,	// (0x00026925) query_popup_pane_cp3

0xbd21,	// (0x00023613) bg_popup_sub_pane_cp22_ParamLimits

0x494a,	// (0x0001c23c) navi_navi_volume_pane_cp2

0x4962,	// (0x0001c254) popup_side_volume_key_window_g2

0x496e,	// (0x0001c260) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x00026fde) popup_side_volume_key_window_g

0x4988,	// (0x0001c27a) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x00026fe5) popup_side_volume_key_window_t

0xbf6b,	// (0x0002385d) popup_side_volume_key_window_ParamLimits

0x3624,	// (0x0001af16) list_double_graphic_pane_g4_ParamLimits

0x3624,	// (0x0001af16) list_double_graphic_pane_g4

0x7a14,	// (0x0001f306) list_single_2heading_msg_pane_ParamLimits

0x7a14,	// (0x0001f306) list_single_2heading_msg_pane

0x7a87,	// (0x0001f379) list_single_2heading_msg_pane_g1_ParamLimits

0x7a87,	// (0x0001f379) list_single_2heading_msg_pane_g1

0x7a93,	// (0x0001f385) list_single_2heading_msg_pane_g2_ParamLimits

0x7a93,	// (0x0001f385) list_single_2heading_msg_pane_g2

0x7aa6,	// (0x0001f398) list_single_2heading_msg_pane_g3_ParamLimits

0x7aa6,	// (0x0001f398) list_single_2heading_msg_pane_g3

0x7ab2,	// (0x0001f3a4) list_single_2heading_msg_pane_g4_ParamLimits

0x7ab2,	// (0x0001f3a4) list_single_2heading_msg_pane_g4

0x0003,

0xfc74,	// (0x00027566) list_single_2heading_msg_pane_g_ParamLimits

0xfc74,	// (0x00027566) list_single_2heading_msg_pane_g

0x7aca,	// (0x0001f3bc) list_single_2heading_msg_pane_t1_ParamLimits

0x7aca,	// (0x0001f3bc) list_single_2heading_msg_pane_t1

0x7af2,	// (0x0001f3e4) list_single_2heading_msg_pane_t2_ParamLimits

0x7af2,	// (0x0001f3e4) list_single_2heading_msg_pane_t2

0x7b5d,	// (0x0001f44f) list_single_2heading_msg_pane_t3_ParamLimits

0x7b5d,	// (0x0001f44f) list_single_2heading_msg_pane_t3

0x43bc,	// (0x0001bcae) list_single_2heading_msg_pane_t4_ParamLimits

0x43bc,	// (0x0001bcae) list_single_2heading_msg_pane_t4

0x0003,

0xfc7d,	// (0x0002756f) list_single_2heading_msg_pane_t_ParamLimits

0xfc7d,	// (0x0002756f) list_single_2heading_msg_pane_t

0xb1c2,	// (0x00022ab4) title_pane_g4_ParamLimits

0xb1c2,	// (0x00022ab4) title_pane_g4

0x479a,	// (0x0001c08c) title_pane_stacon_g3_ParamLimits

0x479a,	// (0x0001c08c) title_pane_stacon_g3

0xebc4,	// (0x000264b6) list_single_2graphic_im_pane_g4_ParamLimits

0xebc4,	// (0x000264b6) list_single_2graphic_im_pane_g4

0xd3f6,	// (0x00024ce8) popup_side_volume_key_window_cp

0xd894,	// (0x00025186) main_idle_act2_pane_t1

0x5193,	// (0x0001ca85) toolbar_button_pane_g10

0x8142,	// (0x0001fa34) popup_toolbar_window_cp1

0xdf11,	// (0x00025803) clock_nsta_pane_cp_t1

0xdf11,	// (0x00025803) clock_nsta_pane_cp_t2

0x0001,

0xfa8b,	// (0x0002737d) clock_nsta_pane_cp_t

0x494a,	// (0x0001c23c) navi_navi_volume_pane_cp2_ParamLimits

0x4956,	// (0x0001c248) popup_side_volume_key_window_g1_ParamLimits

0x4962,	// (0x0001c254) popup_side_volume_key_window_g2_ParamLimits

0x496e,	// (0x0001c260) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x00026fde) popup_side_volume_key_window_g_ParamLimits

0x5609,	// (0x0001cefb) fep_hwr_aid_pane

0x1df2,	// (0x000196e4) bg_fep_hwr_top_pane_g4_ParamLimits

0xe322,	// (0x00025c14) fep_hwr_top_pane_g1_ParamLimits

0xe334,	// (0x00025c26) fep_hwr_top_pane_g2_ParamLimits

0x56bc,	// (0x0001cfae) fep_hwr_top_pane_g3_ParamLimits

0xfae0,	// (0x000273d2) fep_hwr_top_pane_g_ParamLimits

0x56d1,	// (0x0001cfc3) fep_hwr_top_text_pane_ParamLimits

0xd1f6,	// (0x00024ae8) aid_touch_tab_arrow_arrow_2

0xd1ff,	// (0x00024af1) aid_touch_tab_arrow_left_2

0x561d,	// (0x0001cf0f) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5650,	// (0x0001cf42) fep_hwr_prediction_pane

0xe467,	// (0x00025d59) fep_vkb_prediction_pane

0x97f3,	// (0x000210e5) fep_vkb_side_pane_g3_ParamLimits

0x97f3,	// (0x000210e5) fep_vkb_side_pane_g3

0xe4f5,	// (0x00025de7) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xe8a0,	// (0x00026192) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xe8ad,	// (0x0002619f) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb8a,	// (0x0002747c) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xf044,	// (0x00026936) fep_hwr_prediction_pane_g1

0x5950,	// (0x0001d242) fep_hwr_prediction_pane_g2

0x5958,	// (0x0001d24a) fep_hwr_prediction_pane_g3

0x5960,	// (0x0001d252) fep_hwr_prediction_pane_g4

0x0003,

0xfc86,	// (0x00027578) fep_hwr_prediction_pane_g

0xf044,	// (0x00026936) fep_vkb_prediction_pane_g1

0xf04e,	// (0x00026940) fep_vkb_prediction_pane_g2

0xf056,	// (0x00026948) fep_vkb_prediction_pane_g3

0xf05e,	// (0x00026950) fep_vkb_prediction_pane_g4

0x0003,

0xfc8f,	// (0x00027581) fep_vkb_prediction_pane_g

0x5441,	// (0x0001cd33) slider_set_pane_g3

0x5455,	// (0x0001cd47) slider_set_pane_g4

0x546d,	// (0x0001cd5f) slider_set_pane_g5

0x5441,	// (0x0001cd33) slider_set_pane_g6

0x935d,	// (0x00020c4f) slider_set_pane_g7

0xd6c2,	// (0x00024fb4) slider_form_pane_g3

0xd6cb,	// (0x00024fbd) slider_form_pane_g4

0xd6d3,	// (0x00024fc5) slider_form_pane_g5

0xd6c2,	// (0x00024fb4) slider_form_pane_g6

0x94b9,	// (0x00020dab) slider_form_pane_g7

0xdae5,	// (0x000253d7) slider_set_pane_vc_g3

0xdaee,	// (0x000253e0) slider_set_pane_vc_g4

0xdaf7,	// (0x000253e9) slider_set_pane_vc_g5

0xdae5,	// (0x000253d7) slider_set_pane_vc_g6

0xdb00,	// (0x000253f2) slider_set_pane_vc_g7

0xdae5,	// (0x000253d7) slider_form_pane_vc_g1

0xdaee,	// (0x000253e0) slider_form_pane_vc_g2

0xdaf7,	// (0x000253e9) slider_form_pane_vc_g3

0xdae5,	// (0x000253d7) slider_form_pane_vc_g4

0xdc74,	// (0x00025566) slider_form_pane_vc_g5

0x0004,

0xfa5d,	// (0x0002734f) slider_form_pane_vc_g

0xb12c,	// (0x00022a1e) main_idle_act3_pane

0xf066,	// (0x00026958) ai3_links_pane

0x9a68,	// (0x0002135a) popup_ai3_data_window_ParamLimits

0x9a68,	// (0x0002135a) popup_ai3_data_window

0xb12c,	// (0x00022a1e) grid_ai3_links_pane

0x9a80,	// (0x00021372) cell_ai3_links_pane_ParamLimits

0x9a80,	// (0x00021372) cell_ai3_links_pane

0xf06f,	// (0x00026961) bg_popup_sub_pane_cp11

0xf07c,	// (0x0002696e) cell_ai3_links_pane_g1

0xb12c,	// (0x00022a1e) bg_popup_sub_pane_cp12

0xf0a1,	// (0x00026993) heading_ai3_data_pane

0xf0a9,	// (0x0002699b) list_ai3_gene_pane

0xf0b5,	// (0x000269a7) popup_ai3_data_window_g1

0xf0bd,	// (0x000269af) heading_ai3_data_pane_g1

0xf0c5,	// (0x000269b7) heading_ai3_data_pane_t1

0xf0d3,	// (0x000269c5) list_double_ai3_gene_pane_ParamLimits

0xf0d3,	// (0x000269c5) list_double_ai3_gene_pane

0xf0e0,	// (0x000269d2) list_single_ai3_gene_pane_ParamLimits

0xf0e0,	// (0x000269d2) list_single_ai3_gene_pane

0xe28e,	// (0x00025b80) list_highlight_pane_cp7_ParamLimits

0xe28e,	// (0x00025b80) list_highlight_pane_cp7

0xf0ed,	// (0x000269df) list_single_a13_gene_pane_t1_ParamLimits

0xf0ed,	// (0x000269df) list_single_a13_gene_pane_t1

0xf104,	// (0x000269f6) list_single_ai3_gene_pane_g1

0xf10d,	// (0x000269ff) list_single_ai3_gene_pane_g2

0x0001,

0xfc98,	// (0x0002758a) list_single_ai3_gene_pane_g

0xf115,	// (0x00026a07) list_double_ai3_gene_pane_g1_ParamLimits

0xf115,	// (0x00026a07) list_double_ai3_gene_pane_g1

0xf121,	// (0x00026a13) list_double_ai3_gene_pane_t1_ParamLimits

0xf121,	// (0x00026a13) list_double_ai3_gene_pane_t1

0xf13d,	// (0x00026a2f) list_double_ai3_gene_pane_t2_ParamLimits

0xf13d,	// (0x00026a2f) list_double_ai3_gene_pane_t2

0xf152,	// (0x00026a44) list_double_ai3_gene_pane_t3_ParamLimits

0xf152,	// (0x00026a44) list_double_ai3_gene_pane_t3

0x0002,

0xfc9d,	// (0x0002758f) list_double_ai3_gene_pane_t_ParamLimits

0xfc9d,	// (0x0002758f) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x42fb,	// (0x0001bbed) aid_size_min_col_2

0x9a54,	// (0x00021346) aid_size_min_msg_ParamLimits

0x9a54,	// (0x00021346) aid_size_min_msg

0x9807,	// (0x000210f9) fep_vkb_top_text_pane_g2_ParamLimits

0x9807,	// (0x000210f9) fep_vkb_top_text_pane_g2

0x0001,

0xfb10,	// (0x00027402) fep_vkb_top_text_pane_g_ParamLimits

0xfb10,	// (0x00027402) fep_vkb_top_text_pane_g

0xb12c,	// (0x00022a1e) main_hc_apps_shell_pane

0xf16f,	// (0x00026a61) grid_hc_apps_pane_ParamLimits

0xf16f,	// (0x00026a61) grid_hc_apps_pane

0xf181,	// (0x00026a73) list_hc_apps_pane

0xf189,	// (0x00026a7b) scroll_pane_cp37_ParamLimits

0xf189,	// (0x00026a7b) scroll_pane_cp37

0x9a96,	// (0x00021388) cell_hc_apps_pane_ParamLimits

0x9a96,	// (0x00021388) cell_hc_apps_pane

0x9b30,	// (0x00021422) cell_hc_apps_pane_g1_ParamLimits

0x9b30,	// (0x00021422) cell_hc_apps_pane_g1

0xf195,	// (0x00026a87) cell_hc_apps_pane_g2_ParamLimits

0xf195,	// (0x00026a87) cell_hc_apps_pane_g2

0xf1b1,	// (0x00026aa3) cell_hc_apps_pane_g3_ParamLimits

0xf1b1,	// (0x00026aa3) cell_hc_apps_pane_g3

0x0002,

0xfca4,	// (0x00027596) cell_hc_apps_pane_g_ParamLimits

0xfca4,	// (0x00027596) cell_hc_apps_pane_g

0x9b5c,	// (0x0002144e) cell_hc_apps_pane_t1_ParamLimits

0x9b5c,	// (0x0002144e) cell_hc_apps_pane_t1

0xb34f,	// (0x00022c41) grid_highlight_pane_cp10_ParamLimits

0xb34f,	// (0x00022c41) grid_highlight_pane_cp10

0x9b9a,	// (0x0002148c) list_single_hc_apps_pane_ParamLimits

0x9b9a,	// (0x0002148c) list_single_hc_apps_pane

0x9bc6,	// (0x000214b8) list_single_hc_apps_pane_g1

0x7bcb,	// (0x0001f4bd) list_single_hc_apps_pane_g2

0x0001,

0xfcab,	// (0x0002759d) list_single_hc_apps_pane_g

0x7be4,	// (0x0001f4d6) list_single_hc_apps_pane_g2_copy1

0x7c00,	// (0x0001f4f2) list_single_hc_apps_pane_t1

0xb21c,	// (0x00022b0e) bg_set_opt_pane_cp_ParamLimits

0x46e8,	// (0x0001bfda) setting_slider_pane_t1_ParamLimits

0x7e7f,	// (0x0001f771) setting_slider_pane_t2_ParamLimits

0x7e98,	// (0x0001f78a) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00026e2b) setting_slider_pane_t_ParamLimits

0x472e,	// (0x0001c020) slider_set_pane_ParamLimits

0x4bca,	// (0x0001c4bc) control_pane_g5_ParamLimits

0x4bca,	// (0x0001c4bc) control_pane_g5

0xd613,	// (0x00024f05) slider_set_pane_g1_ParamLimits

0x5435,	// (0x0001cd27) slider_set_pane_g2_ParamLimits

0x5441,	// (0x0001cd33) slider_set_pane_g3_ParamLimits

0x5455,	// (0x0001cd47) slider_set_pane_g4_ParamLimits

0x546d,	// (0x0001cd5f) slider_set_pane_g5_ParamLimits

0x5441,	// (0x0001cd33) slider_set_pane_g6_ParamLimits

0x935d,	// (0x00020c4f) slider_set_pane_g7_ParamLimits

0xf933,	// (0x00027225) slider_set_pane_g_ParamLimits

0xb21c,	// (0x00022b0e) navi_icon_text_pane_ParamLimits

0x8c47,	// (0x00020539) aid_fill_nsta_2_ParamLimits

0x8c75,	// (0x00020567) aid_touch_tab_arrow_left_ParamLimits

0x8c89,	// (0x0002057b) aid_touch_tab_arrow_right_ParamLimits

0x8d25,	// (0x00020617) clock_nsta_pane_ParamLimits

0xd1d8,	// (0x00024aca) navi_icon_pane_g1_ParamLimits

0xd1e4,	// (0x00024ad6) navi_text_pane_t1_ParamLimits

0xdf61,	// (0x00025853) navi_icon_text_pane_g1_ParamLimits

0xdf6d,	// (0x0002585f) navi_icon_text_pane_t1_ParamLimits

0x9bc6,	// (0x000214b8) list_single_hc_apps_pane_g1_ParamLimits

0x7bcb,	// (0x0001f4bd) list_single_hc_apps_pane_g2_ParamLimits

0xfcab,	// (0x0002759d) list_single_hc_apps_pane_g_ParamLimits

0x7be4,	// (0x0001f4d6) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7c00,	// (0x0001f4f2) list_single_hc_apps_pane_t1_ParamLimits

0x7cca,	// (0x0001f5bc) popup_toolbar2_fixed_window_ParamLimits

0x7cca,	// (0x0001f5bc) popup_toolbar2_fixed_window

0x8bd2,	// (0x000204c4) popup_toolbar2_float_window

0xb12c,	// (0x00022a1e) bg_popup_sub_pane_cp27

0xf1d3,	// (0x00026ac5) grid_toolbar2_float_pane

0xb12c,	// (0x00022a1e) bg_popup_sub_pane_cp26

0xf1d3,	// (0x00026ac5) grid_toolbar2_fixed_pane

0x9bdf,	// (0x000214d1) cell_toolbar2_fixed_pane_ParamLimits

0x9bdf,	// (0x000214d1) cell_toolbar2_fixed_pane

0x9bfa,	// (0x000214ec) cell_toolbar2_fixed_pane_g1

0xf1db,	// (0x00026acd) toolbar2_fixed_button_pane

0xc4ff,	// (0x00023df1) toolbar2_fixed_button_pane_g1

0xc507,	// (0x00023df9) toolbar2_fixed_button_pane_g2

0xc50f,	// (0x00023e01) toolbar2_fixed_button_pane_g3

0xc517,	// (0x00023e09) toolbar2_fixed_button_pane_g4

0xc51f,	// (0x00023e11) toolbar2_fixed_button_pane_g5

0xc527,	// (0x00023e19) toolbar2_fixed_button_pane_g6

0xc52f,	// (0x00023e21) toolbar2_fixed_button_pane_g7

0xc537,	// (0x00023e29) toolbar2_fixed_button_pane_g8

0xc53f,	// (0x00023e31) toolbar2_fixed_button_pane_g9

0x0008,

0xf835,	// (0x00027127) toolbar2_fixed_button_pane_g

0xf1e3,	// (0x00026ad5) cell_toolbar2_float_pane_ParamLimits

0xf1e3,	// (0x00026ad5) cell_toolbar2_float_pane

0xf1f4,	// (0x00026ae6) cell_toolbar2_float_pane_g1

0xf1db,	// (0x00026acd) toolbar2_fixed_button_pane_cp

0x97bc,	// (0x000210ae) fep_vkb_accented_list_pane_ParamLimits

0x97bc,	// (0x000210ae) fep_vkb_accented_list_pane

0x5813,	// (0x0001d105) bg_popup_fep_shadow_pane_g9

0xc173,	// (0x00023a65) bg_popup_fep_shadow_pane_cp3

0xb905,	// (0x000231f7) list_accented_list_pane

0xf1fd,	// (0x00026aef) list_single_accented_list_pane_ParamLimits

0xf1fd,	// (0x00026aef) list_single_accented_list_pane

0xc173,	// (0x00023a65) list_highlight_pane_cp10

0xf20e,	// (0x00026b00) list_single_accented_list_pane_t1

0x8b14,	// (0x00020406) popup_slider_window_ParamLimits

0x8b14,	// (0x00020406) popup_slider_window

0xf03b,	// (0x0002692d) aid_indentation_list_msg

0x9cd9,	// (0x000215cb) bg_popup_window_pane_cp19

0xf274,	// (0x00026b66) popup_slider_window_g1

0xf290,	// (0x00026b82) popup_slider_window_g2

0xf2ac,	// (0x00026b9e) popup_slider_window_g3

0x0005,

0xfcb0,	// (0x000275a2) popup_slider_window_g

0xf2c8,	// (0x00026bba) popup_slider_window_t1

0xf30c,	// (0x00026bfe) small_volume_slider_vertical_pane

0xe2c9,	// (0x00025bbb) small_volume_slider_vertical_pane_g1

0xe2c9,	// (0x00025bbb) small_volume_slider_vertical_pane_g2

0xf328,	// (0x00026c1a) small_volume_slider_vertical_pane_g3

0x0002,

0xfcc2,	// (0x000275b4) small_volume_slider_vertical_pane_g

0x7c4e,	// (0x0001f540) area_side_right_pane_ParamLimits

0x7c4e,	// (0x0001f540) area_side_right_pane

0x9d91,	// (0x00021683) aid_size_side_button_ParamLimits

0x9d91,	// (0x00021683) aid_size_side_button

0x9daa,	// (0x0002169c) grid_sctrl_middle_pane_ParamLimits

0x9daa,	// (0x0002169c) grid_sctrl_middle_pane

0x5998,	// (0x0001d28a) sctrl_sk_bottom_pane

0x59a9,	// (0x0001d29b) sctrl_sk_top_pane

0x59bb,	// (0x0001d2ad) aid_touch_sctrl_top

0xb34f,	// (0x00022c41) bg_sctrl_sk_pane_ParamLimits

0xb34f,	// (0x00022c41) bg_sctrl_sk_pane

0x59c8,	// (0x0001d2ba) sctrl_sk_top_pane_g1

0x59d5,	// (0x0001d2c7) sctrl_sk_top_pane_t1

0x59bb,	// (0x0001d2ad) aid_touch_sctrl_bottom

0xb34f,	// (0x00022c41) bg_sctrl_sk_pane_cp_ParamLimits

0xb34f,	// (0x00022c41) bg_sctrl_sk_pane_cp

0x59f0,	// (0x0001d2e2) sctrl_sk_bottom_pane_g1

0x59d5,	// (0x0001d2c7) sctrl_sk_bottom_pane_t1

0x9dc0,	// (0x000216b2) cell_sctrl_middle_pane_ParamLimits

0x9dc0,	// (0x000216b2) cell_sctrl_middle_pane

0x9dd1,	// (0x000216c3) aid_touch_sctrl_middle_ParamLimits

0x9dd1,	// (0x000216c3) aid_touch_sctrl_middle

0x9dde,	// (0x000216d0) bg_sctrl_middle_pane_ParamLimits

0x9dde,	// (0x000216d0) bg_sctrl_middle_pane

0xf331,	// (0x00026c23) cell_sctrl_middle_pane_g1_ParamLimits

0xf331,	// (0x00026c23) cell_sctrl_middle_pane_g1

0x9dec,	// (0x000216de) cell_sctrl_middle_pane_g2_ParamLimits

0x9dec,	// (0x000216de) cell_sctrl_middle_pane_g2

0x0001,

0xfcce,	// (0x000275c0) cell_sctrl_middle_pane_g_ParamLimits

0xfcce,	// (0x000275c0) cell_sctrl_middle_pane_g

0xc4ff,	// (0x00023df1) bg_sctrl_middle_pane_g1

0xc507,	// (0x00023df9) bg_sctrl_middle_pane_g2

0xc50f,	// (0x00023e01) bg_sctrl_middle_pane_g3

0xc517,	// (0x00023e09) bg_sctrl_middle_pane_g4

0xc51f,	// (0x00023e11) bg_sctrl_middle_pane_g5

0xc527,	// (0x00023e19) bg_sctrl_middle_pane_g6

0xc52f,	// (0x00023e21) bg_sctrl_middle_pane_g7

0xc537,	// (0x00023e29) bg_sctrl_middle_pane_g8

0x0007,

0xfcd3,	// (0x000275c5) bg_sctrl_middle_pane_g

0xc53f,	// (0x00023e31) bg_sctrl_middle_pane_g8_copy1

0xc4ff,	// (0x00023df1) bg_sctrl_sk_pane_g1

0xc507,	// (0x00023df9) bg_sctrl_sk_pane_g2

0xc50f,	// (0x00023e01) bg_sctrl_sk_pane_g3

0x0008,

0xf835,	// (0x00027127) bg_sctrl_sk_pane_g

0xb704,	// (0x00022ff6) aid_size_touch_scroll_bar

0xc517,	// (0x00023e09) bg_sctrl_sk_pane_g4

0xc51f,	// (0x00023e11) bg_sctrl_sk_pane_g5

0xc527,	// (0x00023e19) bg_sctrl_sk_pane_g6

0xc52f,	// (0x00023e21) bg_sctrl_sk_pane_g7

0xc537,	// (0x00023e29) bg_sctrl_sk_pane_g8

0xc53f,	// (0x00023e31) bg_sctrl_sk_pane_g9

0x4d5c,	// (0x0001c64e) popup_fep_china_hwr2_fs_candidate_window

0x870f,	// (0x00020001) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x870f,	// (0x00020001) popup_fep_china_hwr2_fs_control_window

0xe4f5,	// (0x00025de7) sctrl_sk_top_pane_g2

0x0001,

0xfcc9,	// (0x000275bb) sctrl_sk_top_pane_g

0x9df9,	// (0x000216eb) aid_fep_china_hwr2_fs_cell_ParamLimits

0x9df9,	// (0x000216eb) aid_fep_china_hwr2_fs_cell

0x9e0d,	// (0x000216ff) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x9e0d,	// (0x000216ff) bg_popup_fep_shadow_pane_cp4

0x9e24,	// (0x00021716) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x9e24,	// (0x00021716) bg_popup_fep_shadow_pane_cp5

0x9e36,	// (0x00021728) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x9e36,	// (0x00021728) popup_fep_china_hwr2_fs_control_bar_grid

0x9e4a,	// (0x0002173c) popup_fep_china_hwr2_fs_control_funtion_grid

0xf33f,	// (0x00026c31) aid_fep_china_hwr2_fs_candi_cell

0xb12c,	// (0x00022a1e) bg_popup_fep_shadow_pane_cp6

0xf349,	// (0x00026c3b) popup_fep_china_hwr2_fs_candidate_grid

0x9e52,	// (0x00021744) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x9e52,	// (0x00021744) cell_fep_china_hwr2_fs_funtion_grid

0xe2c9,	// (0x00025bbb) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xf331,	// (0x00026c23) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xf331,	// (0x00026c23) cell_fep_china_hwr2_fs_funtion_grid_g1

0xf351,	// (0x00026c43) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xf351,	// (0x00026c43) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfce4,	// (0x000275d6) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfce4,	// (0x000275d6) cell_fep_china_hwr2_fs_funtion_grid_g

0x9e6a,	// (0x0002175c) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x9e6a,	// (0x0002175c) cell_fep_china_hwr2_fs_funtion_grid_t1

0x9e7f,	// (0x00021771) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x9e7f,	// (0x00021771) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfce9,	// (0x000275db) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfce9,	// (0x000275db) cell_fep_china_hwr2_fs_funtion_grid_t

0xf367,	// (0x00026c59) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xf36f,	// (0x00026c61) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xf377,	// (0x00026c69) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcee,	// (0x000275e0) popup_fep_china_hwr2_fs_control_bar_grid_g

0xf37f,	// (0x00026c71) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xf37f,	// (0x00026c71) cell_fep_china_hwr2_fs_candidate_grid

0xf398,	// (0x00026c8a) popup_fep_china_hwr2_fs_candidate_grid_g20

0xf3a0,	// (0x00026c92) popup_fep_china_hwr2_fs_candidate_grid_g21

0xe2c9,	// (0x00025bbb) cell_fep_china_hwr2_fs_candidate_grid_g1

0xe2c9,	// (0x00025bbb) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb15,	// (0x00027407) cell_fep_china_hwr2_fs_candidate_grid_g

0xf3a8,	// (0x00026c9a) cell_fep_china_hwr2_fs_candidate_grid_t1

0xc364,	// (0x00023c56) clock_nsta_pane_cp_24_ParamLimits

0xc364,	// (0x00023c56) clock_nsta_pane_cp_24

0xc3c1,	// (0x00023cb3) indicator_nsta_pane_cp_24_ParamLimits

0xc3c1,	// (0x00023cb3) indicator_nsta_pane_cp_24

0xd0e3,	// (0x000249d5) heading_pane_g1

0x0001,

0xf89a,	// (0x0002718c) heading_pane_g

0x9575,	// (0x00020e67) grid_sct_catagory_button_pane

0xd6ae,	// (0x00024fa0) scroll_pane_cp5_ParamLimits

0xdf93,	// (0x00025885) button_value_adjust_pane_cp5_ParamLimits

0xdf93,	// (0x00025885) button_value_adjust_pane_cp5

0xe051,	// (0x00025943) form2_midp_time_pane_ParamLimits

0xf3b6,	// (0x00026ca8) cell_sct_catagory_button_pane_ParamLimits

0xf3b6,	// (0x00026ca8) cell_sct_catagory_button_pane

0xe28e,	// (0x00025b80) bg_button_pane_cp01_ParamLimits

0xe28e,	// (0x00025b80) bg_button_pane_cp01

0xe2c9,	// (0x00025bbb) cell_sct_catagory_button_pane_g1

0x8b83,	// (0x00020475) popup_tb_extension_window

0x9e9b,	// (0x0002178d) aid_size_cell_ext_ParamLimits

0x9e9b,	// (0x0002178d) aid_size_cell_ext

0xb5e2,	// (0x00022ed4) bg_tb_trans_pane_cp1_ParamLimits

0xb5e2,	// (0x00022ed4) bg_tb_trans_pane_cp1

0x9ec1,	// (0x000217b3) grid_tb_ext_pane_ParamLimits

0x9ec1,	// (0x000217b3) grid_tb_ext_pane

0x9ef7,	// (0x000217e9) cell_tb_ext_pane_ParamLimits

0x9ef7,	// (0x000217e9) cell_tb_ext_pane

0x9f1b,	// (0x0002180d) cell_tb_ext_pane_g1_ParamLimits

0x9f1b,	// (0x0002180d) cell_tb_ext_pane_g1

0xf3c8,	// (0x00026cba) cell_tb_ext_pane_t1

0xb34f,	// (0x00022c41) list_highlight_pane_cp11_ParamLimits

0xb34f,	// (0x00022c41) list_highlight_pane_cp11

0x7cdf,	// (0x0001f5d1) popup_uni_indicator_window_ParamLimits

0x7cdf,	// (0x0001f5d1) popup_uni_indicator_window

0xb7bc,	// (0x000230ae) bg_popup_sub_pane_cp14

0xf3e3,	// (0x00026cd5) list_uniindi_pane

0xf3ef,	// (0x00026ce1) uniindi_top_pane

0xb34f,	// (0x00022c41) bg_uniindi_top_pane

0xf40e,	// (0x00026d00) uniindi_top_pane_g1

0xf424,	// (0x00026d16) uniindi_top_pane_g2

0x0003,

0xfcf5,	// (0x000275e7) uniindi_top_pane_g

0xf44e,	// (0x00026d40) uniindi_top_pane_t1

0xf478,	// (0x00026d6a) list_single_uniindi_pane_ParamLimits

0xf478,	// (0x00026d6a) list_single_uniindi_pane

0xe2c9,	// (0x00025bbb) bg_uniindi_top_pane_g1

0xf48a,	// (0x00026d7c) list_single_uniindi_pane_g1

0xf49d,	// (0x00026d8f) list_single_uniindi_pane_t1

0xb12c,	// (0x00022a1e) control_bg_pane

0xf4c2,	// (0x00026db4) bg_sctrl_sk_pane_cp1

0xf4cb,	// (0x00026dbd) bg_sctrl_sk_pane_cp2

0xf4d4,	// (0x00026dc6) control_bg_pane_g1

0xf4dd,	// (0x00026dcf) control_bg_pane_g2

0x0001,

0xfcfe,	// (0x000275f0) control_bg_pane_g

0xde54,	// (0x00025746) cell_indicator_nsta_pane_g1_ParamLimits

0x9686,	// (0x00020f78) cell_indicator_nsta_pane_g2_ParamLimits

0xfa79,	// (0x0002736b) cell_indicator_nsta_pane_g_ParamLimits

0x40b8,	// (0x0001b9aa) form2_midp_time_pane_t1_ParamLimits

0x55fb,	// (0x0001ceed) main_idle_act4_pane_ParamLimits

0x55fb,	// (0x0001ceed) main_idle_act4_pane

0x8b83,	// (0x00020475) popup_tb_extension_window_ParamLimits

0x9ee1,	// (0x000217d3) tb_ext_find_pane_ParamLimits

0x9ee1,	// (0x000217d3) tb_ext_find_pane

0xf4e6,	// (0x00026dd8) ai_gene_pane_1_cp1

0xc207,	// (0x00023af9) ai_gene_pane_2_cp1

0xf4ee,	// (0x00026de0) list_single_idle_plugin_calendar_pane

0xf4f7,	// (0x00026de9) list_single_idle_plugin_notification_pane

0xf500,	// (0x00026df2) list_single_idle_plugin_player_pane

0x9f38,	// (0x0002182a) list_single_idle_plugin_shortcut_pane_ParamLimits

0x9f38,	// (0x0002182a) list_single_idle_plugin_shortcut_pane

0x9f60,	// (0x00021852) main_idle_act4_pane_t1

0x9f76,	// (0x00021868) main_idle_act4_pane_t2

0x0001,

0xfd03,	// (0x000275f5) main_idle_act4_pane_t

0x9f8c,	// (0x0002187e) middle_sk_idle_act4_pane_ParamLimits

0x9f8c,	// (0x0002187e) middle_sk_idle_act4_pane

0x9fa8,	// (0x0002189a) popup_clock_digital_analogue_window_cp2

0x9fce,	// (0x000218c0) shortcut_wheel_idle_act4_pane_ParamLimits

0x9fce,	// (0x000218c0) shortcut_wheel_idle_act4_pane

0xe2c9,	// (0x00025bbb) shortcut_wheel_idle_act4_pane_g1

0xe2c9,	// (0x00025bbb) shortcut_wheel_idle_act4_pane_g2

0xe2c9,	// (0x00025bbb) shortcut_wheel_idle_act4_pane_g3

0xe2c9,	// (0x00025bbb) shortcut_wheel_idle_act4_pane_g4

0xe2c9,	// (0x00025bbb) shortcut_wheel_idle_act4_pane_g5

0xf509,	// (0x00026dfb) shortcut_wheel_idle_act4_pane_g6

0xf511,	// (0x00026e03) shortcut_wheel_idle_act4_pane_g7

0xf519,	// (0x00026e0b) shortcut_wheel_idle_act4_pane_g8

0xf521,	// (0x00026e13) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd08,	// (0x000275fa) shortcut_wheel_idle_act4_pane_g

0x1df2,	// (0x000196e4) middle_sk_idle_act4_pane_g1_ParamLimits

0x1df2,	// (0x000196e4) middle_sk_idle_act4_pane_g1

0xa049,	// (0x0002193b) middle_sk_idle_act4_pane_g2_ParamLimits

0xa049,	// (0x0002193b) middle_sk_idle_act4_pane_g2

0x0001,

0xfd2b,	// (0x0002761d) middle_sk_idle_act4_pane_g_ParamLimits

0xfd2b,	// (0x0002761d) middle_sk_idle_act4_pane_g

0xa061,	// (0x00021953) middle_sk_idle_act4_pane_t1_ParamLimits

0xa061,	// (0x00021953) middle_sk_idle_act4_pane_t1

0xa090,	// (0x00021982) grid_ai_shortcut_pane_ParamLimits

0xa090,	// (0x00021982) grid_ai_shortcut_pane

0xa0ad,	// (0x0002199f) list_highlight_pane_cp16_ParamLimits

0xa0ad,	// (0x0002199f) list_highlight_pane_cp16

0xa0ba,	// (0x000219ac) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xa0ba,	// (0x000219ac) list_single_idle_plugin_shortcut_pane_g1

0xa0c6,	// (0x000219b8) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xa0c6,	// (0x000219b8) list_single_idle_plugin_shortcut_pane_g2

0xa0e2,	// (0x000219d4) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xa0e2,	// (0x000219d4) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd30,	// (0x00027622) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd30,	// (0x00027622) list_single_idle_plugin_shortcut_pane_g

0xa0f7,	// (0x000219e9) cell_ai_shortcut_pane_ParamLimits

0xa0f7,	// (0x000219e9) cell_ai_shortcut_pane

0xa10d,	// (0x000219ff) cell_ai_shortcut_pane_g1_ParamLimits

0xa10d,	// (0x000219ff) cell_ai_shortcut_pane_g1

0xf4e6,	// (0x00026dd8) ai_gene_pane_1_cp2

0x00de,	// (0x000179d0) ai_gene_pane_2_cp2

0x00e6,	// (0x000179d8) list_highlight_pane_cp15

0x00ef,	// (0x000179e1) list_single_idle_plugin_calendar_pane_g1

0x00e6,	// (0x000179d8) list_highlight_pane_cp17

0x00f7,	// (0x000179e9) list_single_idle_plugin_calendar_pane_g1_copy1

0x00ff,	// (0x000179f1) list_single_idle_plugin_player_pane_g1

0xd920,	// (0x00025212) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd37,	// (0x00027629) list_single_idle_plugin_player_pane_g

0x0107,	// (0x000179f9) list_single_idle_plugin_player_pane_t1

0x0115,	// (0x00017a07) list_single_idle_plugin_player_pane_t2

0x0123,	// (0x00017a15) list_single_idle_plugin_player_pane_t3

0x0131,	// (0x00017a23) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd3c,	// (0x0002762e) list_single_idle_plugin_player_pane_t

0x013f,	// (0x00017a31) wait_bar_pane_cp15

0x0147,	// (0x00017a39) grid_ai_notification_pane

0xd920,	// (0x00025212) list_single_idle_plugin_notification_pane_g1

0xa12f,	// (0x00021a21) cell_ai_notification_pane_ParamLimits

0xa12f,	// (0x00021a21) cell_ai_notification_pane

0x015d,	// (0x00017a4f) cell_ai_notification_pane_g1

0x0165,	// (0x00017a57) cell_ai_notification_pane_t1

0xa13c,	// (0x00021a2e) tb_ext_find_button_pane

0xa144,	// (0x00021a36) tb_ext_find_pane_g1

0xa14c,	// (0x00021a3e) tb_ext_find_pane_t1

0xbce1,	// (0x000235d3) tb_ext_find_button_pane_g1

0x0191,	// (0x00017a83) tb_ext_find_button_pane_g2

0x0001,

0xfd45,	// (0x00027637) tb_ext_find_button_pane_g

0x9f60,	// (0x00021852) main_idle_act4_pane_t1_ParamLimits

0x9f76,	// (0x00021868) main_idle_act4_pane_t2_ParamLimits

0xfd03,	// (0x000275f5) main_idle_act4_pane_t_ParamLimits

0x9fa8,	// (0x0002189a) popup_clock_digital_analogue_window_cp2_ParamLimits

0x9fbe,	// (0x000218b0) sat_plugin_idle_act4_pane_ParamLimits

0x9fbe,	// (0x000218b0) sat_plugin_idle_act4_pane

0xa15a,	// (0x00021a4c) sat_plugin_idle_act4_pane_t1_ParamLimits

0xa15a,	// (0x00021a4c) sat_plugin_idle_act4_pane_t1

0xa172,	// (0x00021a64) sat_plugin_idle_act4_pane_t2_ParamLimits

0xa172,	// (0x00021a64) sat_plugin_idle_act4_pane_t2

0xa18a,	// (0x00021a7c) sat_plugin_idle_act4_pane_t3_ParamLimits

0xa18a,	// (0x00021a7c) sat_plugin_idle_act4_pane_t3

0xa1a2,	// (0x00021a94) sat_plugin_idle_act4_pane_t4_ParamLimits

0xa1a2,	// (0x00021a94) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd4a,	// (0x0002763c) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd4a,	// (0x0002763c) sat_plugin_idle_act4_pane_t

0x459a,	// (0x0001be8c) popup_battery_window_ParamLimits

0x459a,	// (0x0001be8c) popup_battery_window

0xb34f,	// (0x00022c41) bg_popup_sub_pane_cp25_ParamLimits

0xb34f,	// (0x00022c41) bg_popup_sub_pane_cp25

0x01e6,	// (0x00017ad8) popup_battery_window_g1_ParamLimits

0x01e6,	// (0x00017ad8) popup_battery_window_g1

0x01f2,	// (0x00017ae4) popup_battery_window_t1_ParamLimits

0x01f2,	// (0x00017ae4) popup_battery_window_t1

0x0204,	// (0x00017af6) popup_battery_window_t2_ParamLimits

0x0204,	// (0x00017af6) popup_battery_window_t2

0x0001,

0xfd53,	// (0x00027645) popup_battery_window_t_ParamLimits

0xfd53,	// (0x00027645) popup_battery_window_t

0x83f6,	// (0x0001fce8) midp_canvas_pane_ParamLimits

0x844b,	// (0x0001fd3d) midp_keypad_pane_ParamLimits

0x844b,	// (0x0001fd3d) midp_keypad_pane

0xb955,	// (0x00023247) main_midp_pane_ParamLimits

0xdf2f,	// (0x00025821) signal_pane_g2_cp_ParamLimits

0xa1ba,	// (0x00021aac) aid_size_cell_midp_keypad_ParamLimits

0xa1ba,	// (0x00021aac) aid_size_cell_midp_keypad

0xa1d8,	// (0x00021aca) midp_keyp_game_grid_pane_ParamLimits

0xa1d8,	// (0x00021aca) midp_keyp_game_grid_pane

0xa1f7,	// (0x00021ae9) midp_keyp_rocker_pane_ParamLimits

0xa1f7,	// (0x00021ae9) midp_keyp_rocker_pane

0xa238,	// (0x00021b2a) midp_keyp_sk_left_pane_ParamLimits

0xa238,	// (0x00021b2a) midp_keyp_sk_left_pane

0xa28a,	// (0x00021b7c) midp_keyp_sk_right_pane_ParamLimits

0xa28a,	// (0x00021b7c) midp_keyp_sk_right_pane

0xb12c,	// (0x00022a1e) bg_button_pane_cp03

0xa2d6,	// (0x00021bc8) midp_keyp_sk_left_pane_g1

0xb12c,	// (0x00022a1e) bg_button_pane_cp04

0xa2d6,	// (0x00021bc8) midp_keyp_sk_right_pane_g1

0xe2c9,	// (0x00025bbb) midp_keyp_rocker_pane_g1

0xa2df,	// (0x00021bd1) keyp_game_cell_pane_ParamLimits

0xa2df,	// (0x00021bd1) keyp_game_cell_pane

0xb12c,	// (0x00022a1e) bg_button_pane_cp02

0xa301,	// (0x00021bf3) keyp_game_cell_pane_g1

0x7c90,	// (0x0001f582) popup_fep_vkb2_window_ParamLimits

0x7c90,	// (0x0001f582) popup_fep_vkb2_window

0xa30a,	// (0x00021bfc) aid_size_cell_vkb2_ParamLimits

0xa30a,	// (0x00021bfc) aid_size_cell_vkb2

0xa340,	// (0x00021c32) popup_fep_vkb2_window_g1_ParamLimits

0xa340,	// (0x00021c32) popup_fep_vkb2_window_g1

0xa390,	// (0x00021c82) vkb2_area_bottom_pane_ParamLimits

0xa390,	// (0x00021c82) vkb2_area_bottom_pane

0xa3ce,	// (0x00021cc0) vkb2_area_keypad_pane_ParamLimits

0xa3ce,	// (0x00021cc0) vkb2_area_keypad_pane

0xa40c,	// (0x00021cfe) vkb2_area_top_pane_ParamLimits

0xa40c,	// (0x00021cfe) vkb2_area_top_pane

0xa488,	// (0x00021d7a) vkb2_top_entry_pane_ParamLimits

0xa488,	// (0x00021d7a) vkb2_top_entry_pane

0xa4b5,	// (0x00021da7) vkb2_top_grid_left_pane_ParamLimits

0xa4b5,	// (0x00021da7) vkb2_top_grid_left_pane

0xa4d5,	// (0x00021dc7) vkb2_top_grid_right_pane_ParamLimits

0xa4d5,	// (0x00021dc7) vkb2_top_grid_right_pane

0x5c2b,	// (0x0001d51d) vkb2_cell_keypad_pane_ParamLimits

0x5c2b,	// (0x0001d51d) vkb2_cell_keypad_pane

0xa51b,	// (0x00021e0d) vkb2_area_bottom_grid_pane_ParamLimits

0xa51b,	// (0x00021e0d) vkb2_area_bottom_grid_pane

0xa541,	// (0x00021e33) vkb2_area_bottom_pane_g1_ParamLimits

0xa541,	// (0x00021e33) vkb2_area_bottom_pane_g1

0xa567,	// (0x00021e59) vkb2_area_bottom_pane_g2_ParamLimits

0xa567,	// (0x00021e59) vkb2_area_bottom_pane_g2

0xa598,	// (0x00021e8a) vkb2_area_bottom_pane_g3_ParamLimits

0xa598,	// (0x00021e8a) vkb2_area_bottom_pane_g3

0x0002,

0xfd58,	// (0x0002764a) vkb2_area_bottom_pane_g_ParamLimits

0xfd58,	// (0x0002764a) vkb2_area_bottom_pane_g

0x5da3,	// (0x0001d695) vkb2_top_cell_left_pane_ParamLimits

0x5da3,	// (0x0001d695) vkb2_top_cell_left_pane

0xa5ee,	// (0x00021ee0) vkb2_top_entry_pane_g1_ParamLimits

0xa5ee,	// (0x00021ee0) vkb2_top_entry_pane_g1

0xa5fc,	// (0x00021eee) vkb2_top_entry_pane_t1_ParamLimits

0xa5fc,	// (0x00021eee) vkb2_top_entry_pane_t1

0x0397,	// (0x00017c89) vkb2_top_entry_pane_t2_ParamLimits

0x0397,	// (0x00017c89) vkb2_top_entry_pane_t2

0x03c9,	// (0x00017cbb) vkb2_top_entry_pane_t3_ParamLimits

0x03c9,	// (0x00017cbb) vkb2_top_entry_pane_t3

0x0002,

0xfd5f,	// (0x00027651) vkb2_top_entry_pane_t_ParamLimits

0xfd5f,	// (0x00027651) vkb2_top_entry_pane_t

0xa635,	// (0x00021f27) vkb2_top_grid_right_pane_g1_ParamLimits

0xa635,	// (0x00021f27) vkb2_top_grid_right_pane_g1

0x5e06,	// (0x0001d6f8) vkb2_top_grid_right_pane_g2_ParamLimits

0x5e06,	// (0x0001d6f8) vkb2_top_grid_right_pane_g2

0x5e1e,	// (0x0001d710) vkb2_top_grid_right_pane_g3_ParamLimits

0x5e1e,	// (0x0001d710) vkb2_top_grid_right_pane_g3

0xa64b,	// (0x00021f3d) vkb2_top_grid_right_pane_g4_ParamLimits

0xa64b,	// (0x00021f3d) vkb2_top_grid_right_pane_g4

0x0003,

0xfd66,	// (0x00027658) vkb2_top_grid_right_pane_g_ParamLimits

0xfd66,	// (0x00027658) vkb2_top_grid_right_pane_g

0x5e4c,	// (0x0001d73e) vkb2_top_cell_left_pane_g1

0x5e63,	// (0x0001d755) vkb2_cell_keypad_pane_g1_ParamLimits

0x5e63,	// (0x0001d755) vkb2_cell_keypad_pane_g1

0x1e00,	// (0x000196f2) vkb2_cell_keypad_pane_t1_ParamLimits

0x1e00,	// (0x000196f2) vkb2_cell_keypad_pane_t1

0x5e71,	// (0x0001d763) vkb2_cell_bottom_grid_pane_ParamLimits

0x5e71,	// (0x0001d763) vkb2_cell_bottom_grid_pane

0x5eaa,	// (0x0001d79c) vkb2_cell_bottom_grid_pane_g1

0x9fed,	// (0x000218df) aid_call2_pane_cp02

0x9ff5,	// (0x000218e7) aid_call_pane_cp02

0x9ffd,	// (0x000218ef) clock_digital_number_pane_cp10

0xa005,	// (0x000218f7) clock_digital_number_pane_cp11

0xa00d,	// (0x000218ff) clock_digital_number_pane_cp12

0xa015,	// (0x00021907) clock_digital_number_pane_cp13

0xa01d,	// (0x0002190f) clock_digital_separator_pane_cp10

0xbce1,	// (0x000235d3) popup_clock_digital_analogue_window_cp2_g1

0xbce1,	// (0x000235d3) popup_clock_digital_analogue_window_cp2_g2

0xa025,	// (0x00021917) popup_clock_digital_analogue_window_cp2_g3

0xbce1,	// (0x000235d3) popup_clock_digital_analogue_window_cp2_g4

0xa025,	// (0x00021917) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd1b,	// (0x0002760d) popup_clock_digital_analogue_window_cp2_g

0xa02d,	// (0x0002191f) popup_clock_digital_analogue_window_cp2_t1

0xa03b,	// (0x0002192d) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd26,	// (0x00027618) popup_clock_digital_analogue_window_cp2_t

0xe2c9,	// (0x00025bbb) clock_digital_number_pane_cp10_g1

0xe2c9,	// (0x00025bbb) clock_digital_number_pane_cp10_g2

0x0001,

0xfb15,	// (0x00027407) clock_digital_number_pane_cp10_g

0xe2c9,	// (0x00025bbb) clock_digital_separator_pane_cp10_g1

0xe2c9,	// (0x00025bbb) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb15,	// (0x00027407) clock_digital_separator_pane_cp10_g

0xf430,	// (0x00026d22) uniindi_top_pane_g3

0xf441,	// (0x00026d33) uniindi_top_pane_g4

0x5c96,	// (0x0001d588) vkb2_row_keypad_pane_ParamLimits

0x5c96,	// (0x0001d588) vkb2_row_keypad_pane

0x5ec6,	// (0x0001d7b8) vkb2_cell_t_keypad_pane_ParamLimits

0x5ec6,	// (0x0001d7b8) vkb2_cell_t_keypad_pane

0x5ed3,	// (0x0001d7c5) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x5ed3,	// (0x0001d7c5) vkb2_cell_t_keypad_pane_cp08

0x5ee3,	// (0x0001d7d5) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x5ee3,	// (0x0001d7d5) vkb2_cell_t_keypad_pane_cp09

0x5ef4,	// (0x0001d7e6) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x5ef4,	// (0x0001d7e6) vkb2_cell_t_keypad_pane_cp01

0x5f04,	// (0x0001d7f6) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x5f04,	// (0x0001d7f6) vkb2_cell_t_keypad_pane_cp02

0x5f14,	// (0x0001d806) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x5f14,	// (0x0001d806) vkb2_cell_t_keypad_pane_cp03

0x5f24,	// (0x0001d816) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x5f24,	// (0x0001d816) vkb2_cell_t_keypad_pane_cp04

0x5f34,	// (0x0001d826) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x5f34,	// (0x0001d826) vkb2_cell_t_keypad_pane_cp05

0x5f44,	// (0x0001d836) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x5f44,	// (0x0001d836) vkb2_cell_t_keypad_pane_cp06

0x5f54,	// (0x0001d846) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x5f54,	// (0x0001d846) vkb2_cell_t_keypad_pane_cp07

0x5f64,	// (0x0001d856) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x5f64,	// (0x0001d856) vkb2_cell_t_keypad_pane_cp10

0xe4f5,	// (0x00025de7) vkb2_cell_t_keypad_pane_g1

0x1e17,	// (0x00019709) vkb2_cell_t_keypad_pane_t1

0xb12c,	// (0x00022a1e) popup_grid_graphic2_window

0xa661,	// (0x00021f53) aid_size_cell_graphic2_ParamLimits

0xa661,	// (0x00021f53) aid_size_cell_graphic2

0xa69f,	// (0x00021f91) bg_popup_window_pane_cp21_ParamLimits

0xa69f,	// (0x00021f91) bg_popup_window_pane_cp21

0xa6ad,	// (0x00021f9f) graphic2_pages_pane_ParamLimits

0xa6ad,	// (0x00021f9f) graphic2_pages_pane

0xa6f6,	// (0x00021fe8) grid_graphic2_control_pane_ParamLimits

0xa6f6,	// (0x00021fe8) grid_graphic2_control_pane

0xa734,	// (0x00022026) grid_graphic2_pane_ParamLimits

0xa734,	// (0x00022026) grid_graphic2_pane

0xa7a3,	// (0x00022095) cell_graphic2_pane

0xb12c,	// (0x00022a1e) main_comp_mode_pane

0xf0a9,	// (0x0002699b) list_ai3_gene_pane_ParamLimits

0x9cd9,	// (0x000215cb) bg_popup_window_pane_cp19_ParamLimits

0xf21c,	// (0x00026b0e) bg_touch_area_indi_pane_ParamLimits

0xf21c,	// (0x00026b0e) bg_touch_area_indi_pane

0xf232,	// (0x00026b24) bg_touch_area_indi_pane_cp01_ParamLimits

0xf232,	// (0x00026b24) bg_touch_area_indi_pane_cp01

0xf248,	// (0x00026b3a) bg_touch_area_indi_pane_cp02_ParamLimits

0xf248,	// (0x00026b3a) bg_touch_area_indi_pane_cp02

0xf25e,	// (0x00026b50) bg_touch_area_indi_pane_cp03_ParamLimits

0xf25e,	// (0x00026b50) bg_touch_area_indi_pane_cp03

0xf274,	// (0x00026b66) popup_slider_window_g1_ParamLimits

0xf290,	// (0x00026b82) popup_slider_window_g2_ParamLimits

0xf2ac,	// (0x00026b9e) popup_slider_window_g3_ParamLimits

0xfcb0,	// (0x000275a2) popup_slider_window_g_ParamLimits

0xf2c8,	// (0x00026bba) popup_slider_window_t1_ParamLimits

0xf30c,	// (0x00026bfe) small_volume_slider_vertical_pane_ParamLimits

0xa7a3,	// (0x00022095) cell_graphic2_pane_ParamLimits

0xa7ee,	// (0x000220e0) bg_button_pane_cp10_ParamLimits

0xa7ee,	// (0x000220e0) bg_button_pane_cp10

0xa7ff,	// (0x000220f1) bg_button_pane_cp11_ParamLimits

0xa7ff,	// (0x000220f1) bg_button_pane_cp11

0xa810,	// (0x00022102) graphic2_pages_pane_g1_ParamLimits

0xa810,	// (0x00022102) graphic2_pages_pane_g1

0xa82b,	// (0x0002211d) graphic2_pages_pane_g2_ParamLimits

0xa82b,	// (0x0002211d) graphic2_pages_pane_g2

0x0001,

0xfd74,	// (0x00027666) graphic2_pages_pane_g_ParamLimits

0xfd74,	// (0x00027666) graphic2_pages_pane_g

0xa843,	// (0x00022135) graphic2_pages_pane_t1_ParamLimits

0xa843,	// (0x00022135) graphic2_pages_pane_t1

0xa85b,	// (0x0002214d) cell_graphic2_control_pane_ParamLimits

0xa85b,	// (0x0002214d) cell_graphic2_control_pane

0xa885,	// (0x00022177) cell_graphic2_pane_g1_ParamLimits

0xa885,	// (0x00022177) cell_graphic2_pane_g1

0x1e29,	// (0x0001971b) cell_graphic2_pane_g2_ParamLimits

0x1e29,	// (0x0001971b) cell_graphic2_pane_g2

0xa892,	// (0x00022184) cell_graphic2_pane_g3_ParamLimits

0xa892,	// (0x00022184) cell_graphic2_pane_g3

0x1e36,	// (0x00019728) cell_graphic2_pane_g4_ParamLimits

0x1e36,	// (0x00019728) cell_graphic2_pane_g4

0xa89f,	// (0x00022191) cell_graphic2_pane_g5_ParamLimits

0xa89f,	// (0x00022191) cell_graphic2_pane_g5

0x0004,

0xfd79,	// (0x0002766b) cell_graphic2_pane_g_ParamLimits

0xfd79,	// (0x0002766b) cell_graphic2_pane_g

0xa8bc,	// (0x000221ae) cell_graphic2_pane_t1_ParamLimits

0xa8bc,	// (0x000221ae) cell_graphic2_pane_t1

0xd0d7,	// (0x000249c9) grid_highlight_pane_cp11_ParamLimits

0xd0d7,	// (0x000249c9) grid_highlight_pane_cp11

0xb34f,	// (0x00022c41) bg_button_pane_cp05

0xa8f1,	// (0x000221e3) cell_graphic2_control_pane_g1

0xe2c9,	// (0x00025bbb) bg_touch_area_indi_pane_g1

0x1e43,	// (0x00019735) aid_cmod_rocker_key_size

0x1e4d,	// (0x0001973f) aid_cmode_itu_key_size

0x1e57,	// (0x00019749) main_cmode_video_pane

0x1e5f,	// (0x00019751) main_comp_mode_itu_pane

0x1e69,	// (0x0001975b) main_comp_mode_rocker_pane

0x1e71,	// (0x00019763) cell_cmode_rocker_pane_ParamLimits

0x1e71,	// (0x00019763) cell_cmode_rocker_pane

0x1e83,	// (0x00019775) cell_cmode_itu_pane_ParamLimits

0x1e83,	// (0x00019775) cell_cmode_itu_pane

0xb7bc,	// (0x000230ae) bg_button_pane_cp06_ParamLimits

0xb7bc,	// (0x000230ae) bg_button_pane_cp06

0xe4f5,	// (0x00025de7) cell_cmode_rocker_pane_g1_ParamLimits

0xe4f5,	// (0x00025de7) cell_cmode_rocker_pane_g1

0xf331,	// (0x00026c23) cell_cmode_rocker_pane_g2_ParamLimits

0xf331,	// (0x00026c23) cell_cmode_rocker_pane_g2

0x0001,

0xfd89,	// (0x0002767b) cell_cmode_rocker_pane_g_ParamLimits

0xfd89,	// (0x0002767b) cell_cmode_rocker_pane_g

0xb12c,	// (0x00022a1e) bg_button_pane_cp07

0x1e98,	// (0x0001978a) cell_cmode_itu_pane_g1

0x1ea1,	// (0x00019793) cell_cmode_itu_pane_t1

0x1eaf,	// (0x000197a1) cell_cmode_itu_pane_t2

0x0001,

0xfd8e,	// (0x00027680) cell_cmode_itu_pane_t

0xf4b2,	// (0x00026da4) aid_touch_ctrl_left

0xf4ba,	// (0x00026dac) aid_touch_ctrl_right

0xb12c,	// (0x00022a1e) compa_mode_pane

0xa919,	// (0x0002220b) aid_cmod_rocker_key_size_cp

0xa923,	// (0x00022215) aid_cmode_itu_key_size_cp

0x1ebd,	// (0x000197af) compa_mode_pane_g1

0x1ec5,	// (0x000197b7) compa_mode_pane_g2

0x1ecd,	// (0x000197bf) compa_mode_pane_g3

0x0002,

0xfd93,	// (0x00027685) compa_mode_pane_g

0xa92d,	// (0x0002221f) main_comp_mode_itu_pane_cp

0xa937,	// (0x00022229) main_comp_mode_rocker_pane_cp

0xa941,	// (0x00022233) cell_cmode_itu_pane_cp_ParamLimits

0xa941,	// (0x00022233) cell_cmode_itu_pane_cp

0xa956,	// (0x00022248) cell_cmode_rocker_pane_cp_ParamLimits

0xa956,	// (0x00022248) cell_cmode_rocker_pane_cp

0xb7bc,	// (0x000230ae) bg_button_pane_cp06_cp_ParamLimits

0xb7bc,	// (0x000230ae) bg_button_pane_cp06_cp

0xe4f5,	// (0x00025de7) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xe4f5,	// (0x00025de7) cell_cmode_rocker_pane_g1_cp

0xe2c9,	// (0x00025bbb) cell_cmode_rocker_pane_g2_cp

0xb12c,	// (0x00022a1e) bg_button_pane_cp07_cp

0xa968,	// (0x0002225a) cell_cmode_itu_pane_g1_cp

0xa971,	// (0x00022263) cell_cmode_itu_pane_t1_cp

0xa97f,	// (0x00022271) cell_cmode_itu_pane_t2_cp

0x94b1,	// (0x00020da3) settings_code_pane_cp2

0xb21c,	// (0x00022b0e) bg_popup_window_pane_cp3_ParamLimits

0xb54d,	// (0x00022e3f) heading_pane_cp3_ParamLimits

0xb55c,	// (0x00022e4e) listscroll_popup_graphic_pane_ParamLimits

0x5609,	// (0x0001cefb) fep_hwr_aid_pane_ParamLimits

0x59bb,	// (0x0001d2ad) aid_touch_sctrl_top_ParamLimits

0x59c8,	// (0x0001d2ba) sctrl_sk_top_pane_g1_ParamLimits

0xe4f5,	// (0x00025de7) sctrl_sk_top_pane_g2_ParamLimits

0xfcc9,	// (0x000275bb) sctrl_sk_top_pane_g_ParamLimits

0x59d5,	// (0x0001d2c7) sctrl_sk_top_pane_t1_ParamLimits

0x59bb,	// (0x0001d2ad) aid_touch_sctrl_bottom_ParamLimits

0x59d5,	// (0x0001d2c7) sctrl_sk_bottom_pane_t1_ParamLimits

0xf3fc,	// (0x00026cee) aid_area_touch_clock

0xa44a,	// (0x00021d3c) aid_vkb2_area_top_pane_cell_ParamLimits

0xa44a,	// (0x00021d3c) aid_vkb2_area_top_pane_cell

0xa4f5,	// (0x00021de7) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xa4f5,	// (0x00021de7) aid_vkb2_area_bottom_pane_cell

0x034f,	// (0x00017c41) popup_char_count_window

0x1ed5,	// (0x000197c7) popup_char_count_window_g1

0x1ede,	// (0x000197d0) popup_char_count_window_g2

0x1ee7,	// (0x000197d9) popup_char_count_window_g3

0x0002,

0xfd9a,	// (0x0002768c) popup_char_count_window_g

0x1ef0,	// (0x000197e2) popup_char_count_window_t1

0x5a7b,	// (0x0001d36d) popup_fep_char_preview_window_ParamLimits

0x5a7b,	// (0x0001d36d) popup_fep_char_preview_window

0xa46a,	// (0x00021d5c) vkb2_top_candi_pane_ParamLimits

0xa46a,	// (0x00021d5c) vkb2_top_candi_pane

0xa98d,	// (0x0002227f) cell_vkb2_top_candi_pane_ParamLimits

0xa98d,	// (0x0002227f) cell_vkb2_top_candi_pane

0xcaef,	// (0x000243e1) bg_popup_fep_char_preview_window_ParamLimits

0xcaef,	// (0x000243e1) bg_popup_fep_char_preview_window

0x6291,	// (0x0001db83) popup_fep_char_preview_window_t1_ParamLimits

0x6291,	// (0x0001db83) popup_fep_char_preview_window_t1

0x1f0e,	// (0x00019800) bg_popup_fep_char_preview_window_g1

0x1f06,	// (0x000197f8) bg_popup_fep_char_preview_window_g2

0x1efe,	// (0x000197f0) bg_popup_fep_char_preview_window_g3

0x1f36,	// (0x00019828) bg_popup_fep_char_preview_window_g4

0x1f2e,	// (0x00019820) bg_popup_fep_char_preview_window_g5

0x1f26,	// (0x00019818) bg_popup_fep_char_preview_window_g6

0x1f1e,	// (0x00019810) bg_popup_fep_char_preview_window_g7

0x1f16,	// (0x00019808) bg_popup_fep_char_preview_window_g8

0x1f3e,	// (0x00019830) bg_popup_fep_char_preview_window_g9

0x0009,

0xfda1,	// (0x00027693) bg_popup_fep_char_preview_window_g

0xe4f5,	// (0x00025de7) cell_vkb2_top_candi_pane_g1_ParamLimits

0xe4f5,	// (0x00025de7) cell_vkb2_top_candi_pane_g1

0xe724,	// (0x00026016) cell_vkb2_top_candi_pane_g2_ParamLimits

0xe724,	// (0x00026016) cell_vkb2_top_candi_pane_g2

0xe745,	// (0x00026037) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe745,	// (0x00026037) cell_vkb2_top_candi_pane_g3

0x62d3,	// (0x0001dbc5) cell_vkb2_top_candi_pane_g4_ParamLimits

0x62d3,	// (0x0001dbc5) cell_vkb2_top_candi_pane_g4

0x1dd1,	// (0x000196c3) cell_vkb2_top_candi_pane_g5_ParamLimits

0x1dd1,	// (0x000196c3) cell_vkb2_top_candi_pane_g5

0xf331,	// (0x00026c23) cell_vkb2_top_candi_pane_g6_ParamLimits

0xf331,	// (0x00026c23) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdb6,	// (0x000276a8) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdb6,	// (0x000276a8) cell_vkb2_top_candi_pane_g

0x62f4,	// (0x0001dbe6) cell_vkb2_top_candi_pane_t1

0x5421,	// (0x0001cd13) aid_size_touch_slider_mark_ParamLimits

0x5421,	// (0x0001cd13) aid_size_touch_slider_mark

0xa6e1,	// (0x00021fd3) grid_graphic2_catg_pane_ParamLimits

0xa6e1,	// (0x00021fd3) grid_graphic2_catg_pane

0xa778,	// (0x0002206a) popup_grid_graphic2_window_t1_ParamLimits

0xa778,	// (0x0002206a) popup_grid_graphic2_window_t1

0xa78d,	// (0x0002207f) popup_grid_graphic2_window_t2_ParamLimits

0xa78d,	// (0x0002207f) popup_grid_graphic2_window_t2

0x0001,

0xfd6f,	// (0x00027661) popup_grid_graphic2_window_t_ParamLimits

0xfd6f,	// (0x00027661) popup_grid_graphic2_window_t

0xb34f,	// (0x00022c41) bg_button_pane_cp05_ParamLimits

0xa8f1,	// (0x000221e3) cell_graphic2_control_pane_g1_ParamLimits

0xf478,	// (0x00026d6a) cell_graphic2_catg_pane_ParamLimits

0xf478,	// (0x00026d6a) cell_graphic2_catg_pane

0xb12c,	// (0x00022a1e) bg_button_pane_cp12

0xa9df,	// (0x000222d1) cell_graphic2_catg_pane_g1

0xf3c8,	// (0x00026cba) cell_tb_ext_pane_t1_ParamLimits

0x5dc3,	// (0x0001d6b5) vkb2_top_cell_right_narrow_pane_ParamLimits

0x5dc3,	// (0x0001d6b5) vkb2_top_cell_right_narrow_pane

0x5ddb,	// (0x0001d6cd) vkb2_top_cell_right_wide_pane_ParamLimits

0x5ddb,	// (0x0001d6cd) vkb2_top_cell_right_wide_pane

0x55fb,	// (0x0001ceed) bg_vkb2_func_pane_ParamLimits

0x55fb,	// (0x0001ceed) bg_vkb2_func_pane

0x5e4c,	// (0x0001d73e) vkb2_top_cell_left_pane_g1_ParamLimits

0x55fb,	// (0x0001ceed) bg_vkb2_fuc_pane_cp03_ParamLimits

0x55fb,	// (0x0001ceed) bg_vkb2_fuc_pane_cp03

0x5eaa,	// (0x0001d79c) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xc507,	// (0x00023df9) bg_vkb2_func_pane_g1

0xc50f,	// (0x00023e01) bg_vkb2_func_pane_g2

0xc51f,	// (0x00023e11) bg_vkb2_func_pane_g3

0xc517,	// (0x00023e09) bg_vkb2_func_pane_g4

0xc527,	// (0x00023e19) bg_vkb2_func_pane_g5

0xc52f,	// (0x00023e21) bg_vkb2_func_pane_g6

0xc537,	// (0x00023e29) bg_vkb2_func_pane_g7

0xc53f,	// (0x00023e31) bg_vkb2_func_pane_g8

0xc4ff,	// (0x00023df1) bg_vkb2_func_pane_g9

0x0008,

0xfdc3,	// (0x000276b5) bg_vkb2_func_pane_g

0x55fb,	// (0x0001ceed) bg_vkb2_fuc_pane_cp01_ParamLimits

0x55fb,	// (0x0001ceed) bg_vkb2_fuc_pane_cp01

0x5e4c,	// (0x0001d73e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x5e4c,	// (0x0001d73e) vkb2_top_cell_right_wide_pane_g1

0x55fb,	// (0x0001ceed) bg_vkb2_fuc_pane_cp02_ParamLimits

0x55fb,	// (0x0001ceed) bg_vkb2_fuc_pane_cp02

0x5eaa,	// (0x0001d79c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x5eaa,	// (0x0001d79c) vkb2_top_cell_right_narrow_pane_g1

0x9c27,	// (0x00021519) aid_touch_area_decrease_ParamLimits

0x9c27,	// (0x00021519) aid_touch_area_decrease

0x9c55,	// (0x00021547) aid_touch_area_increase_ParamLimits

0x9c55,	// (0x00021547) aid_touch_area_increase

0x9c7d,	// (0x0002156f) aid_touch_area_mute_ParamLimits

0x9c7d,	// (0x0002156f) aid_touch_area_mute

0x9ca5,	// (0x00021597) aid_touch_area_slider_ParamLimits

0x9ca5,	// (0x00021597) aid_touch_area_slider

0x9ce5,	// (0x000215d7) popup_slider_window_g4_ParamLimits

0x9ce5,	// (0x000215d7) popup_slider_window_g4

0x9d0d,	// (0x000215ff) popup_slider_window_g5_ParamLimits

0x9d0d,	// (0x000215ff) popup_slider_window_g5

0x9d41,	// (0x00021633) popup_slider_window_g6_ParamLimits

0x9d41,	// (0x00021633) popup_slider_window_g6

0xf2f4,	// (0x00026be6) popup_slider_window_t2_ParamLimits

0xf2f4,	// (0x00026be6) popup_slider_window_t2

0x0001,

0xfcbd,	// (0x000275af) popup_slider_window_t_ParamLimits

0xfcbd,	// (0x000275af) popup_slider_window_t

0x9d5d,	// (0x0002164f) slider_pane_ParamLimits

0x9d5d,	// (0x0002164f) slider_pane

0x1f46,	// (0x00019838) slider_pane_g1_ParamLimits

0x1f46,	// (0x00019838) slider_pane_g1

0x1f5a,	// (0x0001984c) slider_pane_g2_ParamLimits

0x1f5a,	// (0x0001984c) slider_pane_g2

0x1f70,	// (0x00019862) slider_pane_g3_ParamLimits

0x1f70,	// (0x00019862) slider_pane_g3

0x0003,

0xfdd6,	// (0x000276c8) slider_pane_g_ParamLimits

0xfdd6,	// (0x000276c8) slider_pane_g

0x8bbf,	// (0x000204b1) popup_tb_float_extension_window_ParamLimits

0x8bbf,	// (0x000204b1) popup_tb_float_extension_window

0x1f9c,	// (0x0001988e) aid_size_cell_tb_float_ext

0xb12c,	// (0x00022a1e) bg_popup_sub_window_cp28

0x1fa7,	// (0x00019899) grid_tb_float_ext_pane

0x1faf,	// (0x000198a1) cell_tb_float_ext_pane_ParamLimits

0x1faf,	// (0x000198a1) cell_tb_float_ext_pane

0x1fc7,	// (0x000198b9) cell_tb_float_ext_pane_g1

0x1fd0,	// (0x000198c2) grid_highlight_pane_cp12

0x979a,	// (0x0002108c) cell_last_hwr_side_pane_ParamLimits

0x979a,	// (0x0002108c) cell_last_hwr_side_pane

0xe2c9,	// (0x00025bbb) cell_last_hwr_side_pane_g1

0x1fd9,	// (0x000198cb) cell_last_hwr_side_pane_g2

0x0001,

0xfddf,	// (0x000276d1) cell_last_hwr_side_pane_g

0xa5c9,	// (0x00021ebb) vkb2_area_bottom_space_btn_pane_ParamLimits

0xa5c9,	// (0x00021ebb) vkb2_area_bottom_space_btn_pane

0xe4f5,	// (0x00025de7) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x1e17,	// (0x00019709) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x62f4,	// (0x0001dbe6) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6325,	// (0x0001dc17) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6325,	// (0x0001dc17) vkb2_area_bottom_space_btn_pane_g1

0x635b,	// (0x0001dc4d) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x635b,	// (0x0001dc4d) vkb2_area_bottom_space_btn_pane_g2

0x6391,	// (0x0001dc83) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x6391,	// (0x0001dc83) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfde4,	// (0x000276d6) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfde4,	// (0x000276d6) vkb2_area_bottom_space_btn_pane_g

0x56aa,	// (0x0001cf9c) cel_fep_hwr_func_pane_ParamLimits

0x56aa,	// (0x0001cf9c) cel_fep_hwr_func_pane

0x976f,	// (0x00021061) cell_hwr_side_button_pane_ParamLimits

0x976f,	// (0x00021061) cell_hwr_side_button_pane

0xf3fc,	// (0x00026cee) aid_area_touch_clock_ParamLimits

0xb34f,	// (0x00022c41) bg_uniindi_top_pane_ParamLimits

0xf40e,	// (0x00026d00) uniindi_top_pane_g1_ParamLimits

0xf424,	// (0x00026d16) uniindi_top_pane_g2_ParamLimits

0xf430,	// (0x00026d22) uniindi_top_pane_g3_ParamLimits

0xf441,	// (0x00026d33) uniindi_top_pane_g4_ParamLimits

0xfcf5,	// (0x000275e7) uniindi_top_pane_g_ParamLimits

0xf44e,	// (0x00026d40) uniindi_top_pane_t1_ParamLimits

0xb34f,	// (0x00022c41) bg_vkb2_func_pane_cp01_ParamLimits

0xb34f,	// (0x00022c41) bg_vkb2_func_pane_cp01

0x1fe2,	// (0x000198d4) cel_fep_hwr_func_pane_g1_ParamLimits

0x1fe2,	// (0x000198d4) cel_fep_hwr_func_pane_g1

0xb34f,	// (0x00022c41) bg_vkb2_func_pane_cp02_ParamLimits

0xb34f,	// (0x00022c41) bg_vkb2_func_pane_cp02

0x1fe2,	// (0x000198d4) cell_hwr_side_button_pane_g1_ParamLimits

0x1fe2,	// (0x000198d4) cell_hwr_side_button_pane_g1

0xc423,	// (0x00023d15) status_pane_g4_ParamLimits

0xc423,	// (0x00023d15) status_pane_g4

0xc43b,	// (0x00023d2d) status_pane_t1

0xe0b9,	// (0x000259ab) form2_midp_gauge_slider_cont_pane

0xe0c1,	// (0x000259b3) form2_midp_gauge_slider_pane_t1_ParamLimits

0x974b,	// (0x0002103d) form2_midp_gauge_slider_pane_t2_ParamLimits

0x975d,	// (0x0002104f) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfac8,	// (0x000273ba) form2_midp_gauge_slider_pane_t_ParamLimits

0xe0d3,	// (0x000259c5) form2_midp_slider_pane_ParamLimits

0x5a3b,	// (0x0001d32d) aid_size_cell_func_vkb2_ParamLimits

0x5a3b,	// (0x0001d32d) aid_size_cell_func_vkb2

0x1f88,	// (0x0001987a) slider_pane_g4_ParamLimits

0x1f88,	// (0x0001987a) slider_pane_g4

0xa9e8,	// (0x000222da) form2_midp_gauge_slider_pane_t2_cp01

0xa9f6,	// (0x000222e8) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xa9f6,	// (0x000222e8) form2_midp_gauge_slider_pane_t3_cp01

0x6402,	// (0x0001dcf4) form2_midp_slider_pane_cp01

0xb12c,	// (0x00022a1e) navi_smil_pane

0x2012,	// (0x00019904) navi_smil_pane_g1

0x201a,	// (0x0001990c) navi_smil_pane_t1

0x1ff0,	// (0x000198e2) form2_midp_slider_pane_g1

0x1ff9,	// (0x000198eb) form2_midp_slider_pane_g2

0x2001,	// (0x000198f3) form2_midp_slider_pane_g3

0x1ff0,	// (0x000198e2) form2_midp_slider_pane_g4

0xaa13,	// (0x00022305) form2_midp_slider_pane_g5

0x0004,

0xfded,	// (0x000276df) form2_midp_slider_pane_g

0x63c7,	// (0x0001dcb9) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x63c7,	// (0x0001dcb9) vkb2_area_bottom_space_btn_pane_g4

0x8d61,	// (0x00020653) lc0_navi_pane_ParamLimits

0x8d61,	// (0x00020653) lc0_navi_pane

0x8dcb,	// (0x000206bd) lc0_stat_indi_pane_ParamLimits

0x8dcb,	// (0x000206bd) lc0_stat_indi_pane

0x8de0,	// (0x000206d2) ls0_title_pane_ParamLimits

0x8de0,	// (0x000206d2) ls0_title_pane

0xb7bc,	// (0x000230ae) bg_popup_sub_pane_cp14_ParamLimits

0xf3e3,	// (0x00026cd5) list_uniindi_pane_ParamLimits

0xf3ef,	// (0x00026ce1) uniindi_top_pane_ParamLimits

0xf48a,	// (0x00026d7c) list_single_uniindi_pane_g1_ParamLimits

0xf49d,	// (0x00026d8f) list_single_uniindi_pane_t1_ParamLimits

0xaa1c,	// (0x0002230e) lc0_stat_clock_pane_ParamLimits

0xaa1c,	// (0x0002230e) lc0_stat_clock_pane

0xaa29,	// (0x0002231b) lc0_stat_indi_pane_g1_ParamLimits

0xaa29,	// (0x0002231b) lc0_stat_indi_pane_g1

0xaa36,	// (0x00022328) lc0_stat_indi_pane_g2_ParamLimits

0xaa36,	// (0x00022328) lc0_stat_indi_pane_g2

0x0001,

0xfdf8,	// (0x000276ea) lc0_stat_indi_pane_g_ParamLimits

0xfdf8,	// (0x000276ea) lc0_stat_indi_pane_g

0xaa43,	// (0x00022335) lc0_uni_indicator_pane_ParamLimits

0xaa43,	// (0x00022335) lc0_uni_indicator_pane

0x2028,	// (0x0001991a) ls0_title_pane_g1_ParamLimits

0x2028,	// (0x0001991a) ls0_title_pane_g1

0xaa50,	// (0x00022342) ls0_title_pane_t1_ParamLimits

0xaa50,	// (0x00022342) ls0_title_pane_t1

0xaa7e,	// (0x00022370) lc0_uni_indicator_pane_g1_ParamLimits

0xaa7e,	// (0x00022370) lc0_uni_indicator_pane_g1

0x203c,	// (0x0001992e) lc0_stat_clock_pane_t1

0xb12c,	// (0x00022a1e) main_ai5_pane

0x204a,	// (0x0001993c) ai5_sk_pane_ParamLimits

0x204a,	// (0x0001993c) ai5_sk_pane

0xaa93,	// (0x00022385) cell_ai5_widget_pane_ParamLimits

0xaa93,	// (0x00022385) cell_ai5_widget_pane

0x2057,	// (0x00019949) aid_size_cell_widget_grid

0x2064,	// (0x00019956) bg_ai5_widget_pane_ParamLimits

0x2064,	// (0x00019956) bg_ai5_widget_pane

0xab20,	// (0x00022412) cell_ai5_widget_pane_g2

0xab34,	// (0x00022426) cell_ai5_widget_pane_g3

0xab4e,	// (0x00022440) cell_ai5_widget_pane_g4

0xab5e,	// (0x00022450) cell_ai5_widget_pane_g5

0xab6e,	// (0x00022460) cell_ai5_widget_pane_g6

0xab7a,	// (0x0002246c) cell_ai5_widget_pane_g7

0xabe6,	// (0x000224d8) cell_ai5_widget_pane_t1_ParamLimits

0xabe6,	// (0x000224d8) cell_ai5_widget_pane_t1

0xac03,	// (0x000224f5) cell_ai5_widget_pane_t2_ParamLimits

0xac03,	// (0x000224f5) cell_ai5_widget_pane_t2

0xac1b,	// (0x0002250d) cell_ai5_widget_pane_t3_ParamLimits

0xac1b,	// (0x0002250d) cell_ai5_widget_pane_t3

0xac33,	// (0x00022525) cell_ai5_widget_pane_t4_ParamLimits

0xac33,	// (0x00022525) cell_ai5_widget_pane_t4

0xac59,	// (0x0002254b) cell_ai5_widget_pane_t5_ParamLimits

0xac59,	// (0x0002254b) cell_ai5_widget_pane_t5

0x209e,	// (0x00019990) cell_ai5_widget_pane_t6_ParamLimits

0x209e,	// (0x00019990) cell_ai5_widget_pane_t6

0x20b0,	// (0x000199a2) cell_ai5_widget_pane_t7_ParamLimits

0x20b0,	// (0x000199a2) cell_ai5_widget_pane_t7

0xac78,	// (0x0002256a) cell_ai5_widget_pane_t8_ParamLimits

0xac78,	// (0x0002256a) cell_ai5_widget_pane_t8

0x000b,

0xfe18,	// (0x0002770a) cell_ai5_widget_pane_t_ParamLimits

0xfe18,	// (0x0002770a) cell_ai5_widget_pane_t

0xacfc,	// (0x000225ee) grid_ai5_widget_pane

0xb7bc,	// (0x000230ae) highlight_cell_ai5_widget_pane_ParamLimits

0xb7bc,	// (0x000230ae) highlight_cell_ai5_widget_pane

0xad08,	// (0x000225fa) ai5_sk_left_pane

0xad12,	// (0x00022604) ai5_sk_middle_pane

0xad1c,	// (0x0002260e) ai5_sk_right_pane

0x20cf,	// (0x000199c1) bg_ai5_widget_pane_g1_ParamLimits

0x20cf,	// (0x000199c1) bg_ai5_widget_pane_g1

0x20db,	// (0x000199cd) bg_ai5_widget_pane_g2_ParamLimits

0x20db,	// (0x000199cd) bg_ai5_widget_pane_g2

0x20e7,	// (0x000199d9) bg_ai5_widget_pane_g3_ParamLimits

0x20e7,	// (0x000199d9) bg_ai5_widget_pane_g3

0x20f3,	// (0x000199e5) bg_ai5_widget_pane_g4_ParamLimits

0x20f3,	// (0x000199e5) bg_ai5_widget_pane_g4

0x20ff,	// (0x000199f1) bg_ai5_widget_pane_g5_ParamLimits

0x20ff,	// (0x000199f1) bg_ai5_widget_pane_g5

0x210b,	// (0x000199fd) bg_ai5_widget_pane_g6_ParamLimits

0x210b,	// (0x000199fd) bg_ai5_widget_pane_g6

0x2117,	// (0x00019a09) bg_ai5_widget_pane_g7_ParamLimits

0x2117,	// (0x00019a09) bg_ai5_widget_pane_g7

0x2123,	// (0x00019a15) bg_ai5_widget_pane_g8_ParamLimits

0x2123,	// (0x00019a15) bg_ai5_widget_pane_g8

0x212f,	// (0x00019a21) bg_ai5_widget_pane_g9_ParamLimits

0x212f,	// (0x00019a21) bg_ai5_widget_pane_g9

0x0008,

0xfe31,	// (0x00027723) bg_ai5_widget_pane_g_ParamLimits

0xfe31,	// (0x00027723) bg_ai5_widget_pane_g

0x215f,	// (0x00019a51) cell_shortcut_ai5_widget_pane_ParamLimits

0x215f,	// (0x00019a51) cell_shortcut_ai5_widget_pane

0x2170,	// (0x00019a62) bg_cell_shortcut_ai5_widget_pane

0xb509,	// (0x00022dfb) cell_grid_ai5_widget_pane_g1

0xc173,	// (0x00023a65) highlight_cell_shortcut_ai5_widget_pane

0xc50f,	// (0x00023e01) ai5_sk_left_pane_g1

0x2178,	// (0x00019a6a) ai5_sk_left_pane_g2

0x2180,	// (0x00019a72) ai5_sk_left_pane_g3

0x2188,	// (0x00019a7a) ai5_sk_left_pane_g4

0x0003,

0xfe44,	// (0x00027736) ai5_sk_left_pane_g

0x2190,	// (0x00019a82) ai5_sk_left_pane_t1

0xc507,	// (0x00023df9) ai5_sk_right_pane_g1

0x219e,	// (0x00019a90) ai5_sk_right_pane_g2

0x21a6,	// (0x00019a98) ai5_sk_right_pane_g3

0x21ae,	// (0x00019aa0) ai5_sk_right_pane_g4

0x0003,

0xfe4d,	// (0x0002773f) ai5_sk_right_pane_g

0x21b6,	// (0x00019aa8) ai5_sk_right_pane_t1

0xc507,	// (0x00023df9) ai5_sk_middle_pane_g1

0xc50f,	// (0x00023e01) ai5_sk_middle_pane_g2

0xc527,	// (0x00023e19) ai5_sk_middle_pane_g3

0x21a6,	// (0x00019a98) ai5_sk_middle_pane_g4

0x2180,	// (0x00019a72) ai5_sk_middle_pane_g5

0x21c4,	// (0x00019ab6) ai5_sk_middle_pane_g6

0xad26,	// (0x00022618) ai5_sk_middle_pane_g7

0x0006,

0xfe56,	// (0x00027748) ai5_sk_middle_pane_g

0x8c5f,	// (0x00020551) aid_touch_area_size_lc0_ParamLimits

0x8c5f,	// (0x00020551) aid_touch_area_size_lc0

0x5829,	// (0x0001d11b) cell_hwr_candidate_pane_t1_ParamLimits

0xc358,	// (0x00023c4a) aid_touch_navi_pane

0x8ecc,	// (0x000207be) status_dt_navi_pane_ParamLimits

0x8ecc,	// (0x000207be) status_dt_navi_pane

0x8ee4,	// (0x000207d6) status_dt_sta_pane_ParamLimits

0x8ee4,	// (0x000207d6) status_dt_sta_pane

0xad2e,	// (0x00022620) dt_sta_controll_pane

0xad3b,	// (0x0002262d) dt_sta_indi_pane

0xad48,	// (0x0002263a) dt_sta_title_pane

0xb34f,	// (0x00022c41) bg_dt_sta_indi_pane_ParamLimits

0xb34f,	// (0x00022c41) bg_dt_sta_indi_pane

0xad5a,	// (0x0002264c) dt_sta_battery_pane

0xad62,	// (0x00022654) dt_sta_indi_pane_g1

0xad6b,	// (0x0002265d) dt_sta_indi_pane_g2

0xad74,	// (0x00022666) dt_sta_indi_pane_g3

0x0002,

0xfe65,	// (0x00027757) dt_sta_indi_pane_g

0xad7d,	// (0x0002266f) dt_sta_signal_pane

0xb7bc,	// (0x000230ae) bg_dt_sta_title_pane_ParamLimits

0xb7bc,	// (0x000230ae) bg_dt_sta_title_pane

0xad86,	// (0x00022678) dt_sta_title_pane_g1

0xad8e,	// (0x00022680) dt_sta_title_pane_t1_ParamLimits

0xad8e,	// (0x00022680) dt_sta_title_pane_t1

0xb12c,	// (0x00022a1e) bg_dt_sta_control_pane

0xada3,	// (0x00022695) dt_sta_controll_pane_g1

0xadac,	// (0x0002269e) bg_dt_sta_title_pane_g1

0xadb5,	// (0x000226a7) bg_dt_sta_title_pane_g2

0xadbe,	// (0x000226b0) bg_dt_sta_title_pane_g3

0x0002,

0xfe6c,	// (0x0002775e) bg_dt_sta_title_pane_g

0xe2c9,	// (0x00025bbb) bg_dt_sta_indi_pane_g1

0xadc7,	// (0x000226b9) dt_sta_signal_pane_g1

0xadcf,	// (0x000226c1) dt_sta_signal_pane_g2

0x0001,

0xfe73,	// (0x00027765) dt_sta_signal_pane_g

0x21cc,	// (0x00019abe) dt_sta_battery_pane_g1

0x21d5,	// (0x00019ac7) dt_sta_battery_pane_t1

0xe2c9,	// (0x00025bbb) bg_dt_sta_control_pane_g1

0xbd43,	// (0x00023635) fep_china_uni_eep_pane

0xbd4b,	// (0x0002363d) fep_china_uni_entry_pane_ParamLimits

0xbd5b,	// (0x0002364d) popup_fep_china_uni_window_g1_ParamLimits

0xbd6b,	// (0x0002365d) popup_fep_china_uni_window_g2_ParamLimits

0xbd6b,	// (0x0002365d) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x00026fea) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x00026fea) popup_fep_china_uni_window_g

0x21e4,	// (0x00019ad6) fep_china_uni_eep_pane_g1

0x21ec,	// (0x00019ade) fep_china_uni_eep_pane_t1

0x2009,	// (0x000198fb) aid_touch_area_size_smil_player

0xc3f6,	// (0x00023ce8) lc0_clock_pane

0xc42f,	// (0x00023d21) status_pane_g5_ParamLimits

0xc42f,	// (0x00023d21) status_pane_g5

0x87f3,	// (0x000200e5) popup_keymap_window

0xc40f,	// (0x00023d01) status_icon_pane

0xab34,	// (0x00022426) cell_ai5_widget_pane_g3_ParamLimits

0xab4e,	// (0x00022440) cell_ai5_widget_pane_g4_ParamLimits

0xab5e,	// (0x00022450) cell_ai5_widget_pane_g5_ParamLimits

0xab86,	// (0x00022478) cell_ai5_widget_pane_g8_ParamLimits

0xab86,	// (0x00022478) cell_ai5_widget_pane_g8

0xab9a,	// (0x0002248c) cell_ai5_widget_pane_g9_ParamLimits

0xab9a,	// (0x0002248c) cell_ai5_widget_pane_g9

0xabae,	// (0x000224a0) cell_ai5_widget_pane_g10_ParamLimits

0xabae,	// (0x000224a0) cell_ai5_widget_pane_g10

0x21fb,	// (0x00019aed) status_icon_pane_g1

0xb12c,	// (0x00022a1e) bg_popup_sub_pane_cp13

0x2203,	// (0x00019af5) popup_keymap_window_t1

0x8543,	// (0x0001fe35) control_pane_g6_ParamLimits

0x8543,	// (0x0001fe35) control_pane_g6

0x8550,	// (0x0001fe42) control_pane_g7_ParamLimits

0x8550,	// (0x0001fe42) control_pane_g7

0x855d,	// (0x0001fe4f) control_pane_g8_ParamLimits

0x855d,	// (0x0001fe4f) control_pane_g8

0xad2e,	// (0x00022620) dt_sta_controll_pane_ParamLimits

0xad3b,	// (0x0002262d) dt_sta_indi_pane_ParamLimits

0xad48,	// (0x0002263a) dt_sta_title_pane_ParamLimits

0xb70d,	// (0x00022fff) aid_size_touch_scroll_bar_cale

0x45ae,	// (0x0001bea0) popup_discreet_window_ParamLimits

0x45ae,	// (0x0001bea0) popup_discreet_window

0x7cc2,	// (0x0001f5b4) popup_sk_window

0xcaef,	// (0x000243e1) bg_popup_sub_pane_cp28_ParamLimits

0xcaef,	// (0x000243e1) bg_popup_sub_pane_cp28

0x2211,	// (0x00019b03) popup_discreet_window_g1_ParamLimits

0x2211,	// (0x00019b03) popup_discreet_window_g1

0x2231,	// (0x00019b23) popup_discreet_window_t1_ParamLimits

0x2231,	// (0x00019b23) popup_discreet_window_t1

0x224f,	// (0x00019b41) popup_discreet_window_t2_ParamLimits

0x224f,	// (0x00019b41) popup_discreet_window_t2

0x0002,

0xfe78,	// (0x0002776a) popup_discreet_window_t_ParamLimits

0xfe78,	// (0x0002776a) popup_discreet_window_t

0x67de,	// (0x0001e0d0) popup_sk_window_g1

0x67e7,	// (0x0001e0d9) popup_sk_window_g2

0x0001,

0xfe7f,	// (0x00027771) popup_sk_window_g

0x67f0,	// (0x0001e0e2) popup_sk_window_t1

0x67fe,	// (0x0001e0f0) popup_sk_window_t1_copy1

0xab20,	// (0x00022412) cell_ai5_widget_pane_g2_ParamLimits

0xac8a,	// (0x0002257c) cell_ai5_widget_pane_t9_ParamLimits

0xac8a,	// (0x0002257c) cell_ai5_widget_pane_t9

0xb12c,	// (0x00022a1e) main_fep_fshwr2_pane

0xadd7,	// (0x000226c9) aid_fshwr2_btn_pane

0xadeb,	// (0x000226dd) aid_fshwr2_syb_pane

0xadff,	// (0x000226f1) aid_fshwr2_txt_pane

0xae0f,	// (0x00022701) fshwr2_func_candi_pane

0xae27,	// (0x00022719) fshwr2_hwr_syb_pane

0xae3f,	// (0x00022731) fshwr2_icf_pane

0xb12c,	// (0x00022a1e) fshwr2_icf_bg_pane

0xae69,	// (0x0002275b) fshwr2_icf_pane_t1_ParamLimits

0xae69,	// (0x0002275b) fshwr2_icf_pane_t1

0xbce1,	// (0x000235d3) fshwr2_func_candi_pane_g1

0xae80,	// (0x00022772) fshwr2_func_candi_row_pane_ParamLimits

0xae80,	// (0x00022772) fshwr2_func_candi_row_pane

0xaea3,	// (0x00022795) cell_fshwr2_syb_pane_ParamLimits

0xaea3,	// (0x00022795) cell_fshwr2_syb_pane

0x1fe2,	// (0x000198d4) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1fe2,	// (0x000198d4) fshwr2_hwr_syb_pane_g1

0xb12c,	// (0x00022a1e) bg_popup_call_pane_cp01

0xaec5,	// (0x000227b7) fshwr2_func_candi_cell_pane_ParamLimits

0xaec5,	// (0x000227b7) fshwr2_func_candi_cell_pane

0xc8e1,	// (0x000241d3) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xc8e1,	// (0x000241d3) fshwr2_func_candi_cell_bg_pane

0xaf04,	// (0x000227f6) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xaf04,	// (0x000227f6) fshwr2_func_candi_cell_pane_g1

0xaf3b,	// (0x0002282d) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xaf3b,	// (0x0002282d) fshwr2_func_candi_cell_pane_t1

0xb12c,	// (0x00022a1e) bg_button_pane_cp08

0xb955,	// (0x00023247) cell_fshwr2_syb_bg_pane

0xaf56,	// (0x00022848) cell_fshwr2_syb_bg_pane_g1

0xaf66,	// (0x00022858) cell_fshwr2_syb_bg_pane_t1

0xb7bc,	// (0x000230ae) main_tmo_pane

0x92cf,	// (0x00020bc1) uni_indicator_pane_g1_ParamLimits

0x92e3,	// (0x00020bd5) uni_indicator_pane_g2_ParamLimits

0x92f8,	// (0x00020bea) uni_indicator_pane_g3_ParamLimits

0xd47b,	// (0x00024d6d) uni_indicator_pane_g4_ParamLimits

0xd47b,	// (0x00024d6d) uni_indicator_pane_g4

0xd48f,	// (0x00024d81) uni_indicator_pane_g5_ParamLimits

0xd48f,	// (0x00024d81) uni_indicator_pane_g5

0xd48f,	// (0x00024d81) uni_indicator_pane_g6_ParamLimits

0xd48f,	// (0x00024d81) uni_indicator_pane_g6

0xf8f0,	// (0x000271e2) uni_indicator_pane_g_ParamLimits

0x9c0b,	// (0x000214fd) popup_tmo_note_window_ParamLimits

0x9c0b,	// (0x000214fd) popup_tmo_note_window

0xb7bc,	// (0x000230ae) fshwr2_bg_pane

0xaf2c,	// (0x0002281e) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xaf2c,	// (0x0002281e) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe84,	// (0x00027776) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe84,	// (0x00027776) fshwr2_func_candi_cell_pane_g

0xe2c9,	// (0x00025bbb) bg_popup_window_pane_cp01

0x697a,	// (0x0001e26c) bg_popup_window_pane_g1_cp01

0x22a1,	// (0x00019b93) bg_popup_window_pane_cp22_ParamLimits

0x22a1,	// (0x00019b93) bg_popup_window_pane_cp22

0x22af,	// (0x00019ba1) listscroll_tmo_link_pane_ParamLimits

0x22af,	// (0x00019ba1) listscroll_tmo_link_pane

0x22ef,	// (0x00019be1) popup_tmo_note_window_g1_ParamLimits

0x22ef,	// (0x00019be1) popup_tmo_note_window_g1

0x22fc,	// (0x00019bee) tmo_note_info_pane_ParamLimits

0x22fc,	// (0x00019bee) tmo_note_info_pane

0xaf7c,	// (0x0002286e) list_tmo_note_info_pane_g1_ParamLimits

0xaf7c,	// (0x0002286e) list_tmo_note_info_pane_g1

0x2316,	// (0x00019c08) list_tmo_note_info_pane_g2_ParamLimits

0x2316,	// (0x00019c08) list_tmo_note_info_pane_g2

0x0001,

0xfe89,	// (0x0002777b) list_tmo_note_info_pane_g_ParamLimits

0xfe89,	// (0x0002777b) list_tmo_note_info_pane_g

0x2332,	// (0x00019c24) list_tmo_note_info_text_pane_ParamLimits

0x2332,	// (0x00019c24) list_tmo_note_info_text_pane

0x2374,	// (0x00019c66) list_tmo_link_pane

0x2381,	// (0x00019c73) scroll_pane_cp20

0x238e,	// (0x00019c80) list_single_tmo_link_pane_ParamLimits

0x238e,	// (0x00019c80) list_single_tmo_link_pane

0x239e,	// (0x00019c90) list_single_tmo_link_pane_t1

0x23ac,	// (0x00019c9e) list_tmo_note_info_text_pane_t1_ParamLimits

0x23ac,	// (0x00019c9e) list_tmo_note_info_text_pane_t1

0xb87b,	// (0x0002316d) aid_size_touch_scroll_bar_cp01_ParamLimits

0xb87b,	// (0x0002316d) aid_size_touch_scroll_bar_cp01

0x789c,	// (0x0001f18e) aid_size_touch_slider_marker

0x7cb6,	// (0x0001f5a8) popup_settings_window_ParamLimits

0x7cb6,	// (0x0001f5a8) popup_settings_window

0x3bce,	// (0x0001b4c0) popup_candi_list_indi_window

0xc358,	// (0x00023c4a) aid_touch_navi_pane_ParamLimits

0x598f,	// (0x0001d281) rs_clock_indi_pane

0x5998,	// (0x0001d28a) sctrl_sk_bottom_pane_ParamLimits

0x59a9,	// (0x0001d29b) sctrl_sk_top_pane_ParamLimits

0x5a95,	// (0x0001d387) popup_fep_tooltip_window

0x2057,	// (0x00019949) aid_size_cell_widget_grid_ParamLimits

0xab0c,	// (0x000223fe) cell_ai5_widget_pane_g1_ParamLimits

0xab0c,	// (0x000223fe) cell_ai5_widget_pane_g1

0xab6e,	// (0x00022460) cell_ai5_widget_pane_g6_ParamLimits

0xab7a,	// (0x0002246c) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfdfd,	// (0x000276ef) cell_ai5_widget_pane_g_ParamLimits

0xfdfd,	// (0x000276ef) cell_ai5_widget_pane_g

0xacb9,	// (0x000225ab) cell_ai5_widget_pane_t10_ParamLimits

0xacb9,	// (0x000225ab) cell_ai5_widget_pane_t10

0xacfc,	// (0x000225ee) grid_ai5_widget_pane_ParamLimits

0x213b,	// (0x00019a2d) cell_contacts_ai5_widget_pane_ParamLimits

0x213b,	// (0x00019a2d) cell_contacts_ai5_widget_pane

0x2264,	// (0x00019b56) popup_discreet_window_t3_ParamLimits

0x2264,	// (0x00019b56) popup_discreet_window_t3

0xae57,	// (0x00022749) popup_fshwr2_char_preview_window_ParamLimits

0xae57,	// (0x00022749) popup_fshwr2_char_preview_window

0xaf93,	// (0x00022885) tmo_note_info_pane_t1

0xafa8,	// (0x0002289a) tmo_note_info_pane_t2

0xafbd,	// (0x000228af) tmo_note_info_pane_t3

0x2350,	// (0x00019c42) tmo_note_info_pane_t4

0x2362,	// (0x00019c54) tmo_note_info_pane_t5

0x0004,

0xfe8e,	// (0x00027780) tmo_note_info_pane_t

0x2374,	// (0x00019c66) list_tmo_link_pane_ParamLimits

0x2381,	// (0x00019c73) scroll_pane_cp20_ParamLimits

0xb12c,	// (0x00022a1e) bg_popup_fep_char_preview_window_cp01

0x23c5,	// (0x00019cb7) popup_fshwr2_char_preview_window_t1

0x23d3,	// (0x00019cc5) popup_candi_list_indi_window_g1

0x23dc,	// (0x00019cce) bg_cell_contacts_ai5_widget_pane

0x23e8,	// (0x00019cda) cell_contacts_ai5_widget_pane_g1

0x23fd,	// (0x00019cef) cell_contacts_ai5_widget_pane_g2

0x2409,	// (0x00019cfb) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe99,	// (0x0002778b) cell_contacts_ai5_widget_pane_g

0x2415,	// (0x00019d07) cell_contacts_ai5_widget_pane_t1

0xb7bc,	// (0x000230ae) highlight_cell_shortcut_ai5_widget_pane_cp01

0x248a,	// (0x00019d7c) settings_container_pane

0xc173,	// (0x00023a65) listscroll_set_pane_copy1

0xdc07,	// (0x000254f9) scroll_pane_cp121_copy1

0x2496,	// (0x00019d88) set_content_pane_copy1

0x249e,	// (0x00019d90) aid_height_set_list_copy1_ParamLimits

0x249e,	// (0x00019d90) aid_height_set_list_copy1

0xd634,	// (0x00024f26) aid_size_parent_copy1_ParamLimits

0xd634,	// (0x00024f26) aid_size_parent_copy1

0x24aa,	// (0x00019d9c) button_value_adjust_pane_cp6_copy1_ParamLimits

0x24aa,	// (0x00019d9c) button_value_adjust_pane_cp6_copy1

0xb955,	// (0x00023247) list_highlight_pane_cp2_copy1_ParamLimits

0xb955,	// (0x00023247) list_highlight_pane_cp2_copy1

0x24be,	// (0x00019db0) list_set_pane_copy1_ParamLimits

0x24be,	// (0x00019db0) list_set_pane_copy1

0x2427,	// (0x00019d19) main_pane_set_t1_copy1_ParamLimits

0x2427,	// (0x00019d19) main_pane_set_t1_copy1

0x2461,	// (0x00019d53) main_pane_set_t2_copy1_ParamLimits

0x2461,	// (0x00019d53) main_pane_set_t2_copy1

0x254c,	// (0x00019e3e) main_pane_set_t3_copy1

0x255a,	// (0x00019e4c) main_pane_set_t4_copy1

0x247e,	// (0x00019d70) set_content_pane_g1_copy1_ParamLimits

0x247e,	// (0x00019d70) set_content_pane_g1_copy1

0x2568,	// (0x00019e5a) setting_code_pane_copy1

0x2570,	// (0x00019e62) setting_slider_graphic_pane_copy1

0x2570,	// (0x00019e62) setting_slider_pane_copy1

0x2570,	// (0x00019e62) setting_text_pane_copy1

0x2570,	// (0x00019e62) setting_volume_pane_copy1

0x2578,	// (0x00019e6a) settings_code_pane_cp2_copy1

0x2580,	// (0x00019e72) settings_code_pane_cp_copy1_ParamLimits

0x2580,	// (0x00019e72) settings_code_pane_cp_copy1

0x69d9,	// (0x0001e2cb) volume_set_pane_copy1

0x2594,	// (0x00019e86) volume_set_pane_g10_copy1

0x259c,	// (0x00019e8e) volume_set_pane_g1_copy1

0x25a4,	// (0x00019e96) volume_set_pane_g2_copy1

0x25ac,	// (0x00019e9e) volume_set_pane_g3_copy1

0x25b4,	// (0x00019ea6) volume_set_pane_g4_copy1

0x25bc,	// (0x00019eae) volume_set_pane_g5_copy1

0x25c4,	// (0x00019eb6) volume_set_pane_g6_copy1

0x25cc,	// (0x00019ebe) volume_set_pane_g7_copy1

0x25d4,	// (0x00019ec6) volume_set_pane_g8_copy1

0x25dc,	// (0x00019ece) volume_set_pane_g9_copy1

0xb21c,	// (0x00022b0e) bg_set_opt_pane_cp_copy1_ParamLimits

0xb21c,	// (0x00022b0e) bg_set_opt_pane_cp_copy1

0x69e1,	// (0x0001e2d3) setting_slider_pane_t1_copy1_ParamLimits

0x69e1,	// (0x0001e2d3) setting_slider_pane_t1_copy1

0x69f8,	// (0x0001e2ea) setting_slider_pane_t2_copy1_ParamLimits

0x69f8,	// (0x0001e2ea) setting_slider_pane_t2_copy1

0x6a11,	// (0x0001e303) setting_slider_pane_t3_copy1_ParamLimits

0x6a11,	// (0x0001e303) setting_slider_pane_t3_copy1

0x472e,	// (0x0001c020) slider_set_pane_copy1_ParamLimits

0x472e,	// (0x0001c020) slider_set_pane_copy1

0xb817,	// (0x00023109) set_opt_bg_pane_g1_copy2

0xb81f,	// (0x00023111) set_opt_bg_pane_g2_copy2

0x25e4,	// (0x00019ed6) set_opt_bg_pane_g3_copy2

0xb82f,	// (0x00023121) set_opt_bg_pane_g4_copy2

0xb837,	// (0x00023129) set_opt_bg_pane_g5_copy2

0xb83f,	// (0x00023131) set_opt_bg_pane_g6_copy2

0x25ec,	// (0x00019ede) set_opt_bg_pane_g7_copy2

0x25f4,	// (0x00019ee6) set_opt_bg_pane_g8_copy2

0x25fc,	// (0x00019eee) set_opt_bg_pane_g9_copy2

0x5421,	// (0x0001cd13) aid_size_touch_slider_mark_copy1_ParamLimits

0x5421,	// (0x0001cd13) aid_size_touch_slider_mark_copy1

0xd646,	// (0x00024f38) slider_set_pane_g1_copy1

0xd6ba,	// (0x00024fac) slider_set_pane_g2_copy1

0x5441,	// (0x0001cd33) slider_set_pane_g3_copy1_ParamLimits

0x5441,	// (0x0001cd33) slider_set_pane_g3_copy1

0x5455,	// (0x0001cd47) slider_set_pane_g4_copy1_ParamLimits

0x5455,	// (0x0001cd47) slider_set_pane_g4_copy1

0x546d,	// (0x0001cd5f) slider_set_pane_g5_copy1_ParamLimits

0x546d,	// (0x0001cd5f) slider_set_pane_g5_copy1

0x5441,	// (0x0001cd33) slider_set_pane_g6_copy1_ParamLimits

0x5441,	// (0x0001cd33) slider_set_pane_g6_copy1

0x6a28,	// (0x0001e31a) slider_set_pane_g7_copy1_ParamLimits

0x6a28,	// (0x0001e31a) slider_set_pane_g7_copy1

0xb1b8,	// (0x00022aaa) bg_set_opt_pane_cp2_copy1

0xb22a,	// (0x00022b1c) setting_slider_graphic_pane_g1_copy1

0x6a3e,	// (0x0001e330) setting_slider_graphic_pane_t1_copy1

0x6a4d,	// (0x0001e33f) setting_slider_graphic_pane_t2_copy1

0x6a5c,	// (0x0001e34e) slider_set_pane_cp_copy1

0x260c,	// (0x00019efe) input_focus_pane_cp1_copy1

0x2615,	// (0x00019f07) list_set_text_pane_copy1

0x261d,	// (0x00019f0f) setting_text_pane_g1_copy1

0x4444,	// (0x0001bd36) set_text_pane_t1_copy1

0x260c,	// (0x00019efe) input_focus_pane_cp2_copy1

0x261d,	// (0x00019f0f) setting_code_pane_g1_copy1

0x263f,	// (0x00019f31) setting_code_pane_t1_copy1

0x1dbc,	// (0x000196ae) list_set_graphic_pane_copy1

0xb1b8,	// (0x00022aaa) bg_set_opt_pane_cp4_copy1

0xbed6,	// (0x000237c8) list_set_graphic_pane_g1_copy1_ParamLimits

0xbed6,	// (0x000237c8) list_set_graphic_pane_g1_copy1

0x264d,	// (0x00019f3f) list_set_graphic_pane_g2_copy1

0xbeee,	// (0x000237e0) list_set_graphic_pane_t1_copy1_ParamLimits

0xbeee,	// (0x000237e0) list_set_graphic_pane_t1_copy1

0xe2c9,	// (0x00025bbb) rs_clock_indi_pane_g1

0x2655,	// (0x00019f47) rs_clock_indi_pane_t1

0x2663,	// (0x00019f55) rs_indi_pane

0x266b,	// (0x00019f5d) rs_indi_pane_g1

0x2674,	// (0x00019f66) rs_indi_pane_g2

0x23d3,	// (0x00019cc5) rs_indi_pane_g3

0x0002,

0xfea0,	// (0x00027792) rs_indi_pane_g

0xc173,	// (0x00023a65) bg_popup_preview_window_pane_cp03

0x267d,	// (0x00019f6f) popup_fep_tooltip_window_t1

0xebf4,	// (0x000264e6) popup_note2_window_g2_ParamLimits

0xebf4,	// (0x000264e6) popup_note2_window_g2

0x0001,

0xfc34,	// (0x00027526) popup_note2_window_g_ParamLimits

0xfc34,	// (0x00027526) popup_note2_window_g

0xf06f,	// (0x00026961) bg_popup_sub_pane_cp11_ParamLimits

0xf07c,	// (0x0002696e) cell_ai3_links_pane_g1_ParamLimits

0xf093,	// (0x00026985) cell_ai3_links_pane_t1

0x4444,	// (0x0001bd36) set_text_pane_t1_copy1_ParamLimits

0xc09a,	// (0x0002398c) cell_graphic_popup_pane_cp2_ParamLimits

0xc09a,	// (0x0002398c) cell_graphic_popup_pane_cp2

0x268b,	// (0x00019f7d) cell_graphic_popup_pane_g1_cp2

0xb5bc,	// (0x00022eae) cell_graphic_popup_pane_g2_cp2

0x2693,	// (0x00019f85) cell_graphic_popup_pane_g3_cp2

0x269b,	// (0x00019f8d) cell_graphic_popup_pane_t2_cp2

0xb5cd,	// (0x00022ebf) grid_highlight_pane_cp3_cp2

0xbb1a,	// (0x0002340c) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xb7bc,	// (0x000230ae) main_tmo_pane_ParamLimits

0x9c03,	// (0x000214f5) popup_tmo_big_image_note_window

0x2096,	// (0x00019988) cell_ai5_widget_list_pane

0xab03,	// (0x000223f5) cell_ai5_widget_lrg_icon_pane

0xaf93,	// (0x00022885) tmo_note_info_pane_t1_ParamLimits

0xafa8,	// (0x0002289a) tmo_note_info_pane_t2_ParamLimits

0xafbd,	// (0x000228af) tmo_note_info_pane_t3_ParamLimits

0x2350,	// (0x00019c42) tmo_note_info_pane_t4_ParamLimits

0x2362,	// (0x00019c54) tmo_note_info_pane_t5_ParamLimits

0xfe8e,	// (0x00027780) tmo_note_info_pane_t_ParamLimits

0x248a,	// (0x00019d7c) settings_container_pane_ParamLimits

0x2604,	// (0x00019ef6) indicator_popup_pane_cp5

0x2604,	// (0x00019ef6) indicator_popup_pane_cp6

0x1dbc,	// (0x000196ae) list_set_graphic_pane_copy1_ParamLimits

0xb12c,	// (0x00022a1e) bg_popup_window_pane_cp23

0x26a9,	// (0x00019f9b) popup_tmo_big_image_note_window_g1

0x26b2,	// (0x00019fa4) popup_tmo_big_image_note_window_t1

0x26c0,	// (0x00019fb2) popup_tmo_big_image_note_window_t2

0x26ce,	// (0x00019fc0) popup_tmo_big_image_note_window_t3

0x0002,

0xfea7,	// (0x00027799) popup_tmo_big_image_note_window_t

0xe2c9,	// (0x00025bbb) cell_ai5_widget_lrg_icon_pane_g1

0x26dc,	// (0x00019fce) cell_ai5_widget_lrg_icon_pane_t1

0xafd2,	// (0x000228c4) cell_ai5_widget_list_row_pane_ParamLimits

0xafd2,	// (0x000228c4) cell_ai5_widget_list_row_pane

0xafe9,	// (0x000228db) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xafe9,	// (0x000228db) cell_ai5_widget_list_row_pane_g1

0xaff6,	// (0x000228e8) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xaff6,	// (0x000228e8) cell_ai5_widget_list_row_pane_t1

0xb027,	// (0x00022919) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xb027,	// (0x00022919) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeae,	// (0x000277a0) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeae,	// (0x000277a0) cell_ai5_widget_list_row_pane_t

0xb12c,	// (0x00022a1e) main_fep_vtchi_ss_pane

0x26f7,	// (0x00019fe9) popup_fep_char_pre_window

0x26ff,	// (0x00019ff1) popup_fep_ituss_window

0xb07a,	// (0x0002296c) popup_fep_vkbss_window

0x273a,	// (0x0001a02c) grid_vkbss_keypad_pane_ParamLimits

0x273a,	// (0x0001a02c) grid_vkbss_keypad_pane

0x274a,	// (0x0001a03c) ituss_keypad_pane

0x6b2b,	// (0x0001e41d) aid_vkbss_key_offset_ParamLimits

0x6b2b,	// (0x0001e41d) aid_vkbss_key_offset

0x6b37,	// (0x0001e429) cell_vkbss_key_pane_ParamLimits

0x6b37,	// (0x0001e429) cell_vkbss_key_pane

0x2759,	// (0x0001a04b) bg_cell_vkbss_key_g1_ParamLimits

0x2759,	// (0x0001a04b) bg_cell_vkbss_key_g1

0x2765,	// (0x0001a057) cell_vkbss_key_3p_pane_ParamLimits

0x2765,	// (0x0001a057) cell_vkbss_key_3p_pane

0x279b,	// (0x0001a08d) cell_vkbss_key_g1_ParamLimits

0x279b,	// (0x0001a08d) cell_vkbss_key_g1

0x27d1,	// (0x0001a0c3) cell_vkbss_key_t1_ParamLimits

0x27d1,	// (0x0001a0c3) cell_vkbss_key_t1

0x6b6b,	// (0x0001e45d) cell_ituss_key_pane_ParamLimits

0x6b6b,	// (0x0001e45d) cell_ituss_key_pane

0x2841,	// (0x0001a133) bg_cell_ituss_key_g1_ParamLimits

0x2841,	// (0x0001a133) bg_cell_ituss_key_g1

0x284d,	// (0x0001a13f) cell_ituss_key_pane_g1_ParamLimits

0x284d,	// (0x0001a13f) cell_ituss_key_pane_g1

0x6b7c,	// (0x0001e46e) cell_ituss_key_pane_g2_ParamLimits

0x6b7c,	// (0x0001e46e) cell_ituss_key_pane_g2

0x0005,

0xfeb5,	// (0x000277a7) cell_ituss_key_pane_g_ParamLimits

0xfeb5,	// (0x000277a7) cell_ituss_key_pane_g

0x6c00,	// (0x0001e4f2) cell_ituss_key_t1_ParamLimits

0x6c00,	// (0x0001e4f2) cell_ituss_key_t1

0x6c36,	// (0x0001e528) cell_ituss_key_t2_ParamLimits

0x6c36,	// (0x0001e528) cell_ituss_key_t2

0x6c67,	// (0x0001e559) cell_ituss_key_t3_ParamLimits

0x6c67,	// (0x0001e559) cell_ituss_key_t3

0x6c36,	// (0x0001e528) cell_ituss_key_t4_ParamLimits

0x6c36,	// (0x0001e528) cell_ituss_key_t4

0x0004,

0xfec2,	// (0x000277b4) cell_ituss_key_t_ParamLimits

0xfec2,	// (0x000277b4) cell_ituss_key_t

0x2883,	// (0x0001a175) cell_vkbss_key_3p_pane_g1

0x287b,	// (0x0001a16d) cell_vkbss_key_3p_pane_g2

0x2873,	// (0x0001a165) cell_vkbss_key_3p_pane_g3

0x0002,

0xfecd,	// (0x000277bf) cell_vkbss_key_3p_pane_g

0xc173,	// (0x00023a65) bg_popup_fep_char_preview_window_cp02

0x288b,	// (0x0001a17d) popup_fep_char_pre_window_t1

0xaaf0,	// (0x000223e2) main_ai5_sk_pane

0x23dc,	// (0x00019cce) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x23e8,	// (0x00019cda) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x23fd,	// (0x00019cef) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x2409,	// (0x00019cfb) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe99,	// (0x0002778b) cell_contacts_ai5_widget_pane_g_ParamLimits

0x2415,	// (0x00019d07) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xb7bc,	// (0x000230ae) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xb087,	// (0x00022979) main_ai5_sk_pane_g1

0xc939,	// (0x0002422b) popup_query_code_window_g1

0xb06b,	// (0x0002295d) popup_fep_vkb_icf_pane

0x2711,	// (0x0001a003) popup_fep_vtchi_icf_pane

0xb955,	// (0x00023247) bg_icf_pane

0xb955,	// (0x00023247) list_vkb_icf_pane

0x2899,	// (0x0001a18b) bg_icf_pane_cp01

0x28ac,	// (0x0001a19e) vtchi_icf_list_pane

0xb0dc,	// (0x000229ce) list_vkb_icf_pane_t1_ParamLimits

0xb0dc,	// (0x000229ce) list_vkb_icf_pane_t1

0x28bc,	// (0x0001a1ae) vtchi_icf_list_pane_t1_ParamLimits

0x28bc,	// (0x0001a1ae) vtchi_icf_list_pane_t1

0x26ff,	// (0x00019ff1) popup_fep_ituss_window_ParamLimits

0x2711,	// (0x0001a003) popup_fep_vtchi_icf_pane_ParamLimits

0x274a,	// (0x0001a03c) ituss_keypad_pane_ParamLimits

0x6b21,	// (0x0001e413) ituss_sks_pane

0xb955,	// (0x00023247) bg_icf_pane_ParamLimits

0xb04f,	// (0x00022941) icf_edit_indi_pane_ParamLimits

0xb04f,	// (0x00022941) icf_edit_indi_pane

0xb955,	// (0x00023247) list_vkb_icf_pane_ParamLimits

0x2899,	// (0x0001a18b) bg_icf_pane_cp01_ParamLimits

0x26ea,	// (0x00019fdc) icf_edit_indi_pane_cp01_ParamLimits

0x26ea,	// (0x00019fdc) icf_edit_indi_pane_cp01

0x28b4,	// (0x0001a1a6) vtchi_query_pane

0x1fe2,	// (0x000198d4) icf_edit_indi_pane_g1_ParamLimits

0x1fe2,	// (0x000198d4) icf_edit_indi_pane_g1

0xb0f2,	// (0x000229e4) icf_edit_indi_pane_g2_ParamLimits

0xb0f2,	// (0x000229e4) icf_edit_indi_pane_g2

0x0001,

0xfef8,	// (0x000277ea) icf_edit_indi_pane_g_ParamLimits

0xfef8,	// (0x000277ea) icf_edit_indi_pane_g

0xb106,	// (0x000229f8) icf_edit_indi_pane_t1

0x28d4,	// (0x0001a1c6) bg_input_focus_pane_cp042

0x28dd,	// (0x0001a1cf) vtchi_button_pane

0x28e6,	// (0x0001a1d8) vtchi_query_pane_t1

0x28f4,	// (0x0001a1e6) vtchi_query_pane_t2

0x2902,	// (0x0001a1f4) vtchi_query_pane_t3

0x0002,

0xfee7,	// (0x000277d9) vtchi_query_pane_t

0xb12c,	// (0x00022a1e) bg_button_pane_cp13

0x2910,	// (0x0001a202) vtchi_button_pane_g1

0x6d0c,	// (0x0001e5fe) ituss_sks_pane_g1

0x6d15,	// (0x0001e607) ituss_sks_pane_g2

0x0001,

0xfeee,	// (0x000277e0) ituss_sks_pane_g

0x2926,	// (0x0001a218) ituss_sks_pane_t1

0x2918,	// (0x0001a20a) ituss_sks_pane_t2

0x0001,

0xfef3,	// (0x000277e5) ituss_sks_pane_t

0xdee0,	// (0x000257d2) indicator_nsta_pane_cp_g1

0xdee9,	// (0x000257db) indicator_nsta_pane_cp_g2

0xdef1,	// (0x000257e3) indicator_nsta_pane_cp_g3

0xdef9,	// (0x000257eb) indicator_nsta_pane_cp_g4

0xdf01,	// (0x000257f3) indicator_nsta_pane_cp_g5

0xdf09,	// (0x000257fb) indicator_nsta_pane_cp_g6

0x0005,

0xfa7e,	// (0x00027370) indicator_nsta_pane_cp_g

0xa8d3,	// (0x000221c5) cell_graphic2_pane_t2_ParamLimits

0xa8d3,	// (0x000221c5) cell_graphic2_pane_t2

0x0001,

0xfd84,	// (0x00027676) cell_graphic2_pane_t_ParamLimits

0xfd84,	// (0x00027676) cell_graphic2_pane_t

0xa90b,	// (0x000221fd) cell_graphic2_control_pane_t1

0x837c,	// (0x0001fc6e) signal_pane_g3_ParamLimits

0x837c,	// (0x0001fc6e) signal_pane_g3

0x8390,	// (0x0001fc82) signal_pane_g4_ParamLimits

0x8390,	// (0x0001fc82) signal_pane_g4

0xb039,	// (0x0002292b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xb039,	// (0x0002292b) cell_ai5_widget_list_row_pane_t3

0x2861,	// (0x0001a153) cell_ituss_key_pane_t1_ParamLimits

0x2861,	// (0x0001a153) cell_ituss_key_pane_t1

0xc607,	// (0x00023ef9) form_field_data_wide_pane_vc_t2_ParamLimits

0xc607,	// (0x00023ef9) form_field_data_wide_pane_vc_t2

0xc619,	// (0x00023f0b) form_field_data_wide_pane_vc_t3_ParamLimits

0xc619,	// (0x00023f0b) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d8,	// (0x000270ca) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d8,	// (0x000270ca) form_field_data_wide_pane_vc_t

0xdc4c,	// (0x0002553e) form_field_slider_wide_pane_vc_t3_ParamLimits

0xdc4c,	// (0x0002553e) form_field_slider_wide_pane_vc_t3

0xdd0a,	// (0x000255fc) form_field_popup_wide_pane_vc_t2_ParamLimits

0xdd0a,	// (0x000255fc) form_field_popup_wide_pane_vc_t2

0xdd1f,	// (0x00025611) form_field_popup_wide_pane_vc_t3_ParamLimits

0xdd1f,	// (0x00025611) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa6d,	// (0x0002735f) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa6d,	// (0x0002735f) form_field_popup_wide_pane_vc_t

0xadd7,	// (0x000226c9) aid_fshwr2_btn_pane_ParamLimits

0xadeb,	// (0x000226dd) aid_fshwr2_syb_pane_ParamLimits

0xadff,	// (0x000226f1) aid_fshwr2_txt_pane_ParamLimits

0xb7bc,	// (0x000230ae) fshwr2_bg_pane_ParamLimits

0xae0f,	// (0x00022701) fshwr2_func_candi_pane_ParamLimits

0xae27,	// (0x00022719) fshwr2_hwr_syb_pane_ParamLimits

0xae3f,	// (0x00022731) fshwr2_icf_pane_ParamLimits

0x403c,	// (0x0001b92e) list_double_graphic_pane_vc_g4_ParamLimits

0x403c,	// (0x0001b92e) list_double_graphic_pane_vc_g4

0x6b9c,	// (0x0001e48e) cell_ituss_key_pane_g3_ParamLimits

0x6b9c,	// (0x0001e48e) cell_ituss_key_pane_g3

0x6c98,	// (0x0001e58a) cell_ituss_key_t5_ParamLimits

0x6c98,	// (0x0001e58a) cell_ituss_key_t5

0xb07a,	// (0x0002296c) popup_fep_vkbss_window_ParamLimits

0xaafa,	// (0x000223ec) aid_cell_ai5_quarter

0xb106,	// (0x000229f8) icf_edit_indi_pane_t1_ParamLimits

0xb3f7,	// (0x00022ce9) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xb3f7,	// (0x00022ce9) aid_tch_indicator_popup_pane_cp2

0xb40a,	// (0x00022cfc) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xb40a,	// (0x00022cfc) aid_tch_query_popup_data_pane_cp2

0xc8e1,	// (0x000241d3) aid_tch_query_popup_pane_ParamLimits

0xc8e1,	// (0x000241d3) aid_tch_query_popup_pane

0xc8e1,	// (0x000241d3) aid_tch_query_popup_data_pane_cp1_ParamLimits

0xc8e1,	// (0x000241d3) aid_tch_query_popup_data_pane_cp1

0xb955,	// (0x00023247) cell_fshwr2_syb_bg_pane_ParamLimits

0xaf56,	// (0x00022848) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xaf66,	// (0x00022858) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xb06b,	// (0x0002295d) popup_fep_vkb_icf_pane_ParamLimits

0xa9d7,	// (0x000222c9) bg_popup_fep_char_preview_window_g10

0xabc2,	// (0x000224b4) cell_ai5_widget_pane_g11_ParamLimits

0xabc2,	// (0x000224b4) cell_ai5_widget_pane_g11

0xabce,	// (0x000224c0) cell_ai5_widget_pane_g12_ParamLimits

0xabce,	// (0x000224c0) cell_ai5_widget_pane_g12

0xabda,	// (0x000224cc) cell_ai5_widget_pane_g13_ParamLimits

0xabda,	// (0x000224cc) cell_ai5_widget_pane_g13

0xacd8,	// (0x000225ca) cell_ai5_widget_pane_t11_ParamLimits

0xacd8,	// (0x000225ca) cell_ai5_widget_pane_t11

0xacea,	// (0x000225dc) cell_ai5_widget_pane_t12_ParamLimits

0xacea,	// (0x000225dc) cell_ai5_widget_pane_t12

0x6ba8,	// (0x0001e49a) cell_ituss_key_pane_g4_ParamLimits

0x6ba8,	// (0x0001e49a) cell_ituss_key_pane_g4

0x6bc4,	// (0x0001e4b6) cell_ituss_key_pane_g5_ParamLimits

0x6bc4,	// (0x0001e4b6) cell_ituss_key_pane_g5

0x6be0,	// (0x0001e4d2) cell_ituss_key_pane_g6_ParamLimits

0x6be0,	// (0x0001e4d2) cell_ituss_key_pane_g6

0xc4ff,	// (0x00023df1) bg_icf_pane_g1

0xb090,	// (0x00022982) bg_icf_pane_g2

0xb09a,	// (0x0002298c) bg_icf_pane_g3

0xb0a2,	// (0x00022994) bg_icf_pane_g4

0xb0ac,	// (0x0002299e) bg_icf_pane_g5

0xb0b6,	// (0x000229a8) bg_icf_pane_g6

0xb0c0,	// (0x000229b2) bg_icf_pane_g7

0xb0c8,	// (0x000229ba) bg_icf_pane_g8

0xb0d2,	// (0x000229c4) bg_icf_pane_g9

0x0008,

0xfed4,	// (0x000277c6) bg_icf_pane_g

0x2727,	// (0x0001a019) popup_hyb_candi_window_ParamLimits

0x2727,	// (0x0001a019) popup_hyb_candi_window

0xc5a7,	// (0x00023e99) bg_popup_sub_pane_cp01_ParamLimits

0xc5a7,	// (0x00023e99) bg_popup_sub_pane_cp01

0x2934,	// (0x0001a226) entry_hyb_candi_pane_ParamLimits

0x2934,	// (0x0001a226) entry_hyb_candi_pane

0x2943,	// (0x0001a235) grid_hyb_candi_pane_ParamLimits

0x2943,	// (0x0001a235) grid_hyb_candi_pane

0x2958,	// (0x0001a24a) grid_hyb_phrase_pane_ParamLimits

0x2958,	// (0x0001a24a) grid_hyb_phrase_pane

0x2967,	// (0x0001a259) cell_hyb_candi_pane_ParamLimits

0x2967,	// (0x0001a259) cell_hyb_candi_pane

0x297f,	// (0x0001a271) cell_hyb_candi_scroll_pane

0xbce1,	// (0x000235d3) cell_hyb_candi_pane_g1

0x2988,	// (0x0001a27a) cell_hyb_candi_pane_t1

0x2996,	// (0x0001a288) cell_hyb_phrase_pane

0xbce1,	// (0x000235d3) cell_hyb_phrase_pane_g1

0x299f,	// (0x0001a291) cell_hyb_phrase_pane_t1

0x29ad,	// (0x0001a29f) entry_hyb_candi_pane_t1

0xc173,	// (0x00023a65) input_focus_pane_cp06

0x29bb,	// (0x0001a2ad) cell_hyb_candi_scroll_pane_g1

0x29c3,	// (0x0001a2b5) cell_hyb_candi_scroll_pane_g1_aid

0x29cb,	// (0x0001a2bd) cell_hyb_candi_scroll_pane_g2

0x29d3,	// (0x0001a2c5) cell_hyb_candi_scroll_pane_g2_aid

0x29db,	// (0x0001a2cd) cell_hyb_candi_scroll_pane_g3

0x29e3,	// (0x0001a2d5) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Small
