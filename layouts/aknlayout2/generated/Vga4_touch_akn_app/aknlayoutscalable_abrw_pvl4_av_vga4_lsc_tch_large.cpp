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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0005a004 };

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
0x9a56,	// (0x00063a5a) Screen

0x9a62,	// (0x00063a66) application_window_ParamLimits

0x9a62,	// (0x00063a66) application_window

0x5452,	// (0x0005f456) screen_g1

0x9a9a,	// (0x00063a9e) area_bottom_pane_ParamLimits

0x9a9a,	// (0x00063a9e) area_bottom_pane

0xdfc9,	// (0x00067fcd) area_top_pane_ParamLimits

0xdfc9,	// (0x00067fcd) area_top_pane

0xee9b,	// (0x00068e9f) main_pane_ParamLimits

0xee9b,	// (0x00068e9f) main_pane

0x545c,	// (0x0005f460) misc_graphics

0xb413,	// (0x00065417) battery_pane_ParamLimits

0xb413,	// (0x00065417) battery_pane

0x2cd9,	// (0x0005ccdd) bg_status_flat_pane_g8

0x2ce1,	// (0x0005cce5) bg_status_flat_pane_g9

0x20e3,	// (0x0005c0e7) context_pane_ParamLimits

0x20e3,	// (0x0005c0e7) context_pane

0xb58a,	// (0x0006558e) navi_pane_ParamLimits

0xb58a,	// (0x0006558e) navi_pane

0xb614,	// (0x00065618) signal_pane_ParamLimits

0xb614,	// (0x00065618) signal_pane

0x0008,

0xf87f,	// (0x00069883) bg_status_flat_pane_g

0xb6a4,	// (0x000656a8) status_pane_g1_ParamLimits

0xb6a4,	// (0x000656a8) status_pane_g1

0xc14d,	// (0x00066151) status_pane_g2_ParamLimits

0xc14d,	// (0x00066151) status_pane_g2

0x2324,	// (0x0005c328) status_pane_g3_ParamLimits

0x2324,	// (0x0005c328) status_pane_g3

0x0004,

0xf7ab,	// (0x000697af) status_pane_g_ParamLimits

0xf7ab,	// (0x000697af) status_pane_g

0xc159,	// (0x0006615d) title_pane_ParamLimits

0xc159,	// (0x0006615d) title_pane

0xc1bc,	// (0x000661c0) uni_indicator_pane_ParamLimits

0xc1bc,	// (0x000661c0) uni_indicator_pane

0x190c,	// (0x0005b910) bg_list_pane_ParamLimits

0x190c,	// (0x0005b910) bg_list_pane

0xac37,	// (0x00064c3b) find_pane

0xac3f,	// (0x00064c43) listscroll_app_pane_ParamLimits

0xac3f,	// (0x00064c43) listscroll_app_pane

0x1940,	// (0x0005b944) listscroll_form_pane

0xac4b,	// (0x00064c4f) listscroll_gen_pane_ParamLimits

0xac4b,	// (0x00064c4f) listscroll_gen_pane

0x1940,	// (0x0005b944) listscroll_set_pane

0x3a2c,	// (0x0005da30) main_idle_act_pane

0xf537,	// (0x0006953b) main_idle_trad_pane

0xf537,	// (0x0006953b) main_list_empty_pane

0x196e,	// (0x0005b972) main_midp_pane

0x197a,	// (0x0005b97e) main_pane_g1_ParamLimits

0x197a,	// (0x0005b97e) main_pane_g1

0xac6d,	// (0x00064c71) popup_ai_message_window_ParamLimits

0xac6d,	// (0x00064c71) popup_ai_message_window

0xad0d,	// (0x00064d11) popup_fep_china_uni_window_ParamLimits

0xad0d,	// (0x00064d11) popup_fep_china_uni_window

0x1a9c,	// (0x0005baa0) popup_fep_japan_candidate_window_ParamLimits

0x1a9c,	// (0x0005baa0) popup_fep_japan_candidate_window

0x1ac6,	// (0x0005baca) popup_fep_japan_predictive_window_ParamLimits

0x1ac6,	// (0x0005baca) popup_fep_japan_predictive_window

0xad6d,	// (0x00064d71) popup_find_window

0xad8a,	// (0x00064d8e) popup_grid_graphic_window_ParamLimits

0xad8a,	// (0x00064d8e) popup_grid_graphic_window

0x1b37,	// (0x0005bb3b) popup_large_graphic_colour_window

0xae2e,	// (0x00064e32) popup_menu_window_ParamLimits

0xae2e,	// (0x00064e32) popup_menu_window

0xb01e,	// (0x00065022) popup_note_image_window

0xafde,	// (0x00064fe2) popup_note_wait_window_ParamLimits

0xafde,	// (0x00064fe2) popup_note_wait_window

0xb036,	// (0x0006503a) popup_note_window_ParamLimits

0xb036,	// (0x0006503a) popup_note_window

0xb0e4,	// (0x000650e8) popup_query_code_window_ParamLimits

0xb0e4,	// (0x000650e8) popup_query_code_window

0x1da3,	// (0x0005bda7) popup_query_data_code_window_ParamLimits

0x1da3,	// (0x0005bda7) popup_query_data_code_window

0xb124,	// (0x00065128) popup_query_data_window_ParamLimits

0xb124,	// (0x00065128) popup_query_data_window

0xb1b8,	// (0x000651bc) popup_query_sat_info_window_ParamLimits

0xb1b8,	// (0x000651bc) popup_query_sat_info_window

0xb263,	// (0x00065267) popup_snote_single_graphic_window_ParamLimits

0xb263,	// (0x00065267) popup_snote_single_graphic_window

0xb263,	// (0x00065267) popup_snote_single_text_window_ParamLimits

0xb263,	// (0x00065267) popup_snote_single_text_window

0x1e3e,	// (0x0005be42) popup_sub_window_general

0x1f84,	// (0x0005bf88) popup_window_general_ParamLimits

0x1f84,	// (0x0005bf88) popup_window_general

0x1f9d,	// (0x0005bfa1) power_save_pane

0xaaa5,	// (0x00064aa9) control_pane_g1_ParamLimits

0xaaa5,	// (0x00064aa9) control_pane_g1

0xaace,	// (0x00064ad2) control_pane_g2_ParamLimits

0xaace,	// (0x00064ad2) control_pane_g2

0x18bd,	// (0x0005b8c1) control_pane_g3_ParamLimits

0x18bd,	// (0x0005b8c1) control_pane_g3

0x0007,

0xf793,	// (0x00069797) control_pane_g_ParamLimits

0xf793,	// (0x00069797) control_pane_g

0xab30,	// (0x00064b34) control_pane_t1_ParamLimits

0xab30,	// (0x00064b34) control_pane_t1

0xab8e,	// (0x00064b92) control_pane_t2_ParamLimits

0xab8e,	// (0x00064b92) control_pane_t2

0x0002,

0xf7a4,	// (0x000697a8) control_pane_t_ParamLimits

0xf7a4,	// (0x000697a8) control_pane_t

0x17de,	// (0x0005b7e2) navi_navi_volume_pane_cp1

0x17e7,	// (0x0005b7eb) status_small_icon_pane

0x17ef,	// (0x0005b7f3) status_small_pane_g1_ParamLimits

0x17ef,	// (0x0005b7f3) status_small_pane_g1

0x1823,	// (0x0005b827) status_small_pane_g2_ParamLimits

0x1823,	// (0x0005b827) status_small_pane_g2

0x182f,	// (0x0005b833) status_small_pane_g3_ParamLimits

0x182f,	// (0x0005b833) status_small_pane_g3

0x183b,	// (0x0005b83f) status_small_pane_g4_ParamLimits

0x183b,	// (0x0005b83f) status_small_pane_g4

0x1847,	// (0x0005b84b) status_small_pane_g5_ParamLimits

0x1847,	// (0x0005b84b) status_small_pane_g5

0x1856,	// (0x0005b85a) status_small_pane_g6_ParamLimits

0x1856,	// (0x0005b85a) status_small_pane_g6

0x0007,

0xf782,	// (0x00069786) status_small_pane_g_ParamLimits

0xf782,	// (0x00069786) status_small_pane_g

0x1886,	// (0x0005b88a) status_small_pane_t1

0x18a9,	// (0x0005b8ad) status_small_wait_pane_ParamLimits

0x18a9,	// (0x0005b8ad) status_small_wait_pane

0xa7ea,	// (0x000647ee) aid_levels_signal_ParamLimits

0xa7ea,	// (0x000647ee) aid_levels_signal

0xa802,	// (0x00064806) signal_pane_g1_ParamLimits

0xa802,	// (0x00064806) signal_pane_g1

0xa81d,	// (0x00064821) signal_pane_g2_ParamLimits

0xa81d,	// (0x00064821) signal_pane_g2

0x0003,

0xf713,	// (0x00069717) signal_pane_g_ParamLimits

0xf713,	// (0x00069717) signal_pane_g

0xe1c1,	// (0x000681c5) context_pane_g1

0x9c17,	// (0x00063c1b) title_pane_g1

0x9c42,	// (0x00063c46) title_pane_t1

0x547e,	// (0x0005f482) title_pane_t2

0x54a4,	// (0x0005f4a8) title_pane_t3

0x0002,

0xf55d,	// (0x00069561) title_pane_t

0xc1e4,	// (0x000661e8) aid_levels_battery_ParamLimits

0xc1e4,	// (0x000661e8) aid_levels_battery

0xc200,	// (0x00066204) battery_pane_g1_ParamLimits

0xc200,	// (0x00066204) battery_pane_g1

0xc21d,	// (0x00066221) battery_pane_g2_ParamLimits

0xc21d,	// (0x00066221) battery_pane_g2

0x0001,

0xf7b6,	// (0x000697ba) battery_pane_g_ParamLimits

0xf7b6,	// (0x000697ba) battery_pane_g

0xc4d3,	// (0x000664d7) uni_indicator_pane_g1

0xc4e8,	// (0x000664ec) uni_indicator_pane_g2

0xc4fd,	// (0x00066501) uni_indicator_pane_g3

0x0005,

0xf927,	// (0x0006992b) uni_indicator_pane_g

0xe46f,	// (0x00068473) navi_icon_pane_ParamLimits

0xe46f,	// (0x00068473) navi_icon_pane

0xe3f3,	// (0x000683f7) navi_midp_pane

0xe48b,	// (0x0006848f) navi_navi_pane

0xe495,	// (0x00068499) navi_text_pane_ParamLimits

0xe495,	// (0x00068499) navi_text_pane

0x5452,	// (0x0005f456) status_small_wait_pane_g1

0x89ce,	// (0x000629d2) status_small_wait_pane_g2

0x0001,

0xf922,	// (0x00069926) status_small_wait_pane_g

0xc43a,	// (0x0006643e) navi_navi_icon_text_pane

0xc442,	// (0x00066446) navi_navi_pane_g1_ParamLimits

0xc442,	// (0x00066446) navi_navi_pane_g1

0xc454,	// (0x00066458) navi_navi_pane_g2_ParamLimits

0xc454,	// (0x00066458) navi_navi_pane_g2

0x0001,

0xf8f0,	// (0x000698f4) navi_navi_pane_g_ParamLimits

0xf8f0,	// (0x000698f4) navi_navi_pane_g

0x3362,	// (0x0005d366) navi_navi_tabs_pane

0xc466,	// (0x0006646a) navi_navi_text_pane

0xc43a,	// (0x0006643e) navi_navi_volume_pane

0xc428,	// (0x0006642c) navi_text_pane_t1

0xc41c,	// (0x00066420) navi_icon_pane_g1

0x3259,	// (0x0005d25d) navi_navi_text_pane_t1

0xb89e,	// (0x000658a2) navi_navi_volume_pane_g1

0xb8a6,	// (0x000658aa) volume_small_pane

0xc364,	// (0x00066368) navi_navi_icon_text_pane_g1

0xc36c,	// (0x00066370) navi_navi_icon_text_pane_t1

0xe48b,	// (0x0006848f) navi_tabs_2_long_pane

0xe48b,	// (0x0006848f) navi_tabs_2_pane

0xe48b,	// (0x0006848f) navi_tabs_3_long_pane

0xe48b,	// (0x0006848f) navi_tabs_3_pane

0xe48b,	// (0x0006848f) navi_tabs_4_pane

0xb87e,	// (0x00065882) tabs_2_active_pane_ParamLimits

0xb87e,	// (0x00065882) tabs_2_active_pane

0xb88e,	// (0x00065892) tabs_2_passive_pane_ParamLimits

0xb88e,	// (0x00065892) tabs_2_passive_pane

0xb84c,	// (0x00065850) tabs_3_active_pane_ParamLimits

0xb84c,	// (0x00065850) tabs_3_active_pane

0xb85c,	// (0x00065860) tabs_3_passive_pane_ParamLimits

0xb85c,	// (0x00065860) tabs_3_passive_pane

0xb86d,	// (0x00065871) tabs_3_passive_pane_cp_ParamLimits

0xb86d,	// (0x00065871) tabs_3_passive_pane_cp

0xb808,	// (0x0006580c) tabs_4_active_pane_ParamLimits

0xb808,	// (0x0006580c) tabs_4_active_pane

0xb819,	// (0x0006581d) tabs_4_passive_pane_ParamLimits

0xb819,	// (0x0006581d) tabs_4_passive_pane

0xb82a,	// (0x0006582e) tabs_4_passive_pane_cp_ParamLimits

0xb82a,	// (0x0006582e) tabs_4_passive_pane_cp

0xb83b,	// (0x0006583f) tabs_4_passive_pane_cp2_ParamLimits

0xb83b,	// (0x0006583f) tabs_4_passive_pane_cp2

0xb7e4,	// (0x000657e8) tabs_2_long_active_pane_ParamLimits

0xb7e4,	// (0x000657e8) tabs_2_long_active_pane

0xb7f6,	// (0x000657fa) tabs_2_long_passive_pane_ParamLimits

0xb7f6,	// (0x000657fa) tabs_2_long_passive_pane

0xb799,	// (0x0006579d) tabs_3_long_active_pane_ParamLimits

0xb799,	// (0x0006579d) tabs_3_long_active_pane

0xb7b2,	// (0x000657b6) tabs_3_long_passive_pane_ParamLimits

0xb7b2,	// (0x000657b6) tabs_3_long_passive_pane

0xb7cb,	// (0x000657cf) tabs_3_long_passive_pane_cp_ParamLimits

0xb7cb,	// (0x000657cf) tabs_3_long_passive_pane_cp

0x04c4,	// (0x0005a4c8) volume_small_pane_g1

0xb748,	// (0x0006574c) volume_small_pane_g2

0xb751,	// (0x00065755) volume_small_pane_g3

0xb75a,	// (0x0006575e) volume_small_pane_g4

0xb763,	// (0x00065767) volume_small_pane_g5

0xb76c,	// (0x00065770) volume_small_pane_g6

0xb775,	// (0x00065779) volume_small_pane_g7

0xb77e,	// (0x00065782) volume_small_pane_g8

0xb787,	// (0x0006578b) volume_small_pane_g9

0xb790,	// (0x00065794) volume_small_pane_g10

0x0009,

0xf8bc,	// (0x000698c0) volume_small_pane_g

0x54b6,	// (0x0005f4ba) bg_active_tab_pane_cp2_ParamLimits

0x54b6,	// (0x0005f4ba) bg_active_tab_pane_cp2

0x9cce,	// (0x00063cd2) tabs_3_active_pane_g1

0x9cd6,	// (0x00063cda) tabs_3_active_pane_t1

0x54b6,	// (0x0005f4ba) bg_passive_tab_pane_cp2_ParamLimits

0x54b6,	// (0x0005f4ba) bg_passive_tab_pane_cp2

0x9cce,	// (0x00063cd2) tabs_3_passive_pane_g1

0x9cd6,	// (0x00063cda) tabs_3_passive_pane_t1

0x54b6,	// (0x0005f4ba) bg_active_tab_pane_cp3_ParamLimits

0x54b6,	// (0x0005f4ba) bg_active_tab_pane_cp3

0x9ce8,	// (0x00063cec) tabs_4_active_pane_g1

0x9cf0,	// (0x00063cf4) tabs_4_active_pane_t1

0x54b6,	// (0x0005f4ba) bg_passive_tab_pane_cp3_ParamLimits

0x54b6,	// (0x0005f4ba) bg_passive_tab_pane_cp3

0x9ce8,	// (0x00063cec) tabs_4_1_passive_pane_g1

0x9cf0,	// (0x00063cf4) tabs_4_1_passive_pane_t1

0x196e,	// (0x0005b972) list_highlight_pane_cp2

0xc5bb,	// (0x000665bf) list_set_pane_ParamLimits

0xc5bb,	// (0x000665bf) list_set_pane

0xc683,	// (0x00066687) main_pane_set_t1_ParamLimits

0xc683,	// (0x00066687) main_pane_set_t1

0xc6a3,	// (0x000666a7) main_pane_set_t2_ParamLimits

0xc6a3,	// (0x000666a7) main_pane_set_t2

0xc6b7,	// (0x000666bb) main_pane_set_t3_ParamLimits

0xc6b7,	// (0x000666bb) main_pane_set_t3

0xc6cb,	// (0x000666cf) main_pane_set_t4_ParamLimits

0xc6cb,	// (0x000666cf) main_pane_set_t4

0x0003,

0xf98c,	// (0x00069990) main_pane_set_t_ParamLimits

0xf98c,	// (0x00069990) main_pane_set_t

0xc6df,	// (0x000666e3) setting_code_pane

0x3b80,	// (0x0005db84) setting_slider_graphic_pane

0x3b80,	// (0x0005db84) setting_slider_pane

0x3b80,	// (0x0005db84) setting_text_pane

0x3b80,	// (0x0005db84) setting_volume_pane

0xf017,	// (0x0006901b) volume_set_pane

0x86f3,	// (0x000626f7) bg_set_opt_pane_cp

0xf021,	// (0x00069025) setting_slider_pane_t1

0xf03a,	// (0x0006903e) setting_slider_pane_t2

0xf054,	// (0x00069058) setting_slider_pane_t3

0x0002,

0xf564,	// (0x00069568) setting_slider_pane_t

0xf06c,	// (0x00069070) slider_set_pane

0x545c,	// (0x0005f460) bg_set_opt_pane_cp2

0x8701,	// (0x00062705) setting_slider_graphic_pane_g1

0xf082,	// (0x00069086) setting_slider_graphic_pane_t1

0xf092,	// (0x00069096) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0006956f) setting_slider_graphic_pane_t

0xf0a2,	// (0x000690a6) slider_set_pane_cp

0x545c,	// (0x0005f460) input_focus_pane_cp1

0x3a13,	// (0x0005da17) list_set_text_pane

0x5452,	// (0x0005f456) setting_text_pane_g1

0x545c,	// (0x0005f460) input_focus_pane_cp2

0x5452,	// (0x0005f456) setting_code_pane_g1

0x870a,	// (0x0006270e) setting_code_pane_t1

0xe05d,	// (0x00068061) set_text_pane_t1_ParamLimits

0xe05d,	// (0x00068061) set_text_pane_t1

0x8d63,	// (0x00062d67) set_opt_bg_pane_g1

0x8d6b,	// (0x00062d6f) set_opt_bg_pane_g2

0x39eb,	// (0x0005d9ef) set_opt_bg_pane_g3

0x8d7b,	// (0x00062d7f) set_opt_bg_pane_g4

0x8d83,	// (0x00062d87) set_opt_bg_pane_g5

0x8d8b,	// (0x00062d8f) set_opt_bg_pane_g6

0x39f5,	// (0x0005d9f9) set_opt_bg_pane_g7

0x39ff,	// (0x0005da03) set_opt_bg_pane_g8

0x3a09,	// (0x0005da0d) set_opt_bg_pane_g9

0x0008,

0xf979,	// (0x0006997d) set_opt_bg_pane_g

0x39de,	// (0x0005d9e2) slider_set_pane_g1

0x06d0,	// (0x0005a6d4) slider_set_pane_g2

0x0006,

0xf96a,	// (0x0006996e) slider_set_pane_g

0x0630,	// (0x0005a634) volume_set_pane_g1

0x063a,	// (0x0005a63e) volume_set_pane_g2

0x0644,	// (0x0005a648) volume_set_pane_g3

0x064e,	// (0x0005a652) volume_set_pane_g4

0x0658,	// (0x0005a65c) volume_set_pane_g5

0x0662,	// (0x0005a666) volume_set_pane_g6

0x066c,	// (0x0005a670) volume_set_pane_g7

0x0676,	// (0x0005a67a) volume_set_pane_g8

0x0680,	// (0x0005a684) volume_set_pane_g9

0x068a,	// (0x0005a68e) volume_set_pane_g10

0x0009,

0xf942,	// (0x00069946) volume_set_pane_g

0x9d02,	// (0x00063d06) indicator_pane_ParamLimits

0x9d02,	// (0x00063d06) indicator_pane

0x9d2e,	// (0x00063d32) main_idle_pane_g2_ParamLimits

0x9d2e,	// (0x00063d32) main_idle_pane_g2

0x9d66,	// (0x00063d6a) main_pane_idle_g1_ParamLimits

0x9d66,	// (0x00063d6a) main_pane_idle_g1

0x8718,	// (0x0006271c) popup_clock_digital_analogue_window_ParamLimits

0x8718,	// (0x0006271c) popup_clock_digital_analogue_window

0x9d94,	// (0x00063d98) soft_indicator_pane_ParamLimits

0x9d94,	// (0x00063d98) soft_indicator_pane

0x9db0,	// (0x00063db4) wallpaper_pane_ParamLimits

0x9db0,	// (0x00063db4) wallpaper_pane

0x5452,	// (0x0005f456) wallpaper_pane_g1

0x9dc2,	// (0x00063dc6) indicator_pane_g1_ParamLimits

0x9dc2,	// (0x00063dc6) indicator_pane_g1

0x3e3a,	// (0x0005de3e) navi_navi_icon_text_pane_srt_g1

0x8746,	// (0x0006274a) soft_indicator_pane_t1

0x8760,	// (0x00062764) aid_ps_area_pane

0x9ddb,	// (0x00063ddf) aid_ps_clock_pane

0x8771,	// (0x00062775) aid_ps_indicator_pane

0x877d,	// (0x00062781) indicator_ps_pane_ParamLimits

0x877d,	// (0x00062781) indicator_ps_pane

0x878c,	// (0x00062790) power_save_pane_g1_ParamLimits

0x878c,	// (0x00062790) power_save_pane_g1

0x8798,	// (0x0006279c) power_save_pane_g2_ParamLimits

0x8798,	// (0x0006279c) power_save_pane_g2

0xdfa9,	// (0x00067fad) aid_navinavi_width_pane

0x8760,	// (0x00062764) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x00069574) power_save_pane_g_ParamLimits

0xf570,	// (0x00069574) power_save_pane_g

0x87a6,	// (0x000627aa) power_save_pane_t1_ParamLimits

0x87a6,	// (0x000627aa) power_save_pane_t1

0x9ddb,	// (0x00063ddf) aid_ps_clock_pane_ParamLimits

0x8771,	// (0x00062775) aid_ps_indicator_pane_ParamLimits

0x87b8,	// (0x000627bc) power_save_pane_t4_ParamLimits

0x87b8,	// (0x000627bc) power_save_pane_t4

0x0001,

0xf575,	// (0x00069579) power_save_pane_t_ParamLimits

0xf575,	// (0x00069579) power_save_pane_t

0x87e2,	// (0x000627e6) power_save_t3_ParamLimits

0x87e2,	// (0x000627e6) power_save_t3

0x87cd,	// (0x000627d1) power_save_t2_ParamLimits

0x87cd,	// (0x000627d1) power_save_t2

0x87f7,	// (0x000627fb) indicator_ps_pane_g1

0x9de9,	// (0x00063ded) ai_gene_pane_ParamLimits

0x9de9,	// (0x00063ded) ai_gene_pane

0x9e00,	// (0x00063e04) ai_links_pane_ParamLimits

0x9e00,	// (0x00063e04) ai_links_pane

0x9e18,	// (0x00063e1c) indicator_pane_cp1_ParamLimits

0x9e18,	// (0x00063e1c) indicator_pane_cp1

0x9e27,	// (0x00063e2b) main_pane_idle_g1_cp_ParamLimits

0x9e27,	// (0x00063e2b) main_pane_idle_g1_cp

0x8800,	// (0x00062804) popup_ai_links_title_window

0x9e3f,	// (0x00063e43) soft_indicator_pane_cp1_ParamLimits

0x9e3f,	// (0x00063e43) soft_indicator_pane_cp1

0x37b1,	// (0x0005d7b5) ai_links_pane_g1

0x37ba,	// (0x0005d7be) grid_ai_links_pane

0xc4ca,	// (0x000664ce) ai_gene_pane_1

0x379f,	// (0x0005d7a3) ai_gene_pane_2

0x37a8,	// (0x0005d7ac) list_highlight_pane_cp4

0xc4a6,	// (0x000664aa) cell_ai_link_pane_ParamLimits

0xc4a6,	// (0x000664aa) cell_ai_link_pane

0x376e,	// (0x0005d772) cell_ai_link_pane_g1

0x89ce,	// (0x000629d2) cell_ai_link_pane_g2

0x0001,

0xf91d,	// (0x00069921) cell_ai_link_pane_g

0x545c,	// (0x0005f460) grid_highlight_cp2

0x545c,	// (0x0005f460) bg_popup_sub_pane_cp1

0x8817,	// (0x0006281b) popup_ai_links_title_window_t1

0x36ba,	// (0x0005d6be) ai_gene_pane_1_g1_ParamLimits

0x36ba,	// (0x0005d6be) ai_gene_pane_1_g1

0x36c6,	// (0x0005d6ca) ai_gene_pane_1_g2_ParamLimits

0x36c6,	// (0x0005d6ca) ai_gene_pane_1_g2

0x0001,

0xf913,	// (0x00069917) ai_gene_pane_1_g_ParamLimits

0xf913,	// (0x00069917) ai_gene_pane_1_g

0x36d3,	// (0x0005d6d7) ai_gene_pane_1_t1_ParamLimits

0x36d3,	// (0x0005d6d7) ai_gene_pane_1_t1

0x3707,	// (0x0005d70b) grid_ai_soft_ind_pane

0x36a5,	// (0x0005d6a9) ai_gene_pane_2_t1_ParamLimits

0x36a5,	// (0x0005d6a9) ai_gene_pane_2_t1

0x9e53,	// (0x00063e57) main_pane_empty_t1_ParamLimits

0x9e53,	// (0x00063e57) main_pane_empty_t1

0x9e6b,	// (0x00063e6f) main_pane_empty_t2_ParamLimits

0x9e6b,	// (0x00063e6f) main_pane_empty_t2

0x9e80,	// (0x00063e84) main_pane_empty_t3_ParamLimits

0x9e80,	// (0x00063e84) main_pane_empty_t3

0x9e92,	// (0x00063e96) main_pane_empty_t4_ParamLimits

0x9e92,	// (0x00063e96) main_pane_empty_t4

0x9ea4,	// (0x00063ea8) main_pane_empty_t5_ParamLimits

0x9ea4,	// (0x00063ea8) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0006957e) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0006957e) main_pane_empty_t

0x8db4,	// (0x00062db8) bg_popup_window_pane_ParamLimits

0x8db4,	// (0x00062db8) bg_popup_window_pane

0x3267,	// (0x0005d26b) find_popup_pane_cp2_ParamLimits

0x3267,	// (0x0005d26b) find_popup_pane_cp2

0x3273,	// (0x0005d277) heading_pane_ParamLimits

0x3273,	// (0x0005d277) heading_pane

0x545c,	// (0x0005f460) bg_popup_sub_pane

0xc389,	// (0x0006638d) bg_popup_window_pane_g1_ParamLimits

0xc389,	// (0x0006638d) bg_popup_window_pane_g1

0xc398,	// (0x0006639c) bg_popup_window_pane_g2_ParamLimits

0xc398,	// (0x0006639c) bg_popup_window_pane_g2

0xc3a4,	// (0x000663a8) bg_popup_window_pane_g3_ParamLimits

0xc3a4,	// (0x000663a8) bg_popup_window_pane_g3

0xc3b0,	// (0x000663b4) bg_popup_window_pane_g4_ParamLimits

0xc3b0,	// (0x000663b4) bg_popup_window_pane_g4

0xc3bf,	// (0x000663c3) bg_popup_window_pane_g5_ParamLimits

0xc3bf,	// (0x000663c3) bg_popup_window_pane_g5

0xc3cf,	// (0x000663d3) bg_popup_window_pane_g6_ParamLimits

0xc3cf,	// (0x000663d3) bg_popup_window_pane_g6

0xc3db,	// (0x000663df) bg_popup_window_pane_g7_ParamLimits

0xc3db,	// (0x000663df) bg_popup_window_pane_g7

0xc3ea,	// (0x000663ee) bg_popup_window_pane_g8_ParamLimits

0xc3ea,	// (0x000663ee) bg_popup_window_pane_g8

0xc3f9,	// (0x000663fd) bg_popup_window_pane_g9_ParamLimits

0xc3f9,	// (0x000663fd) bg_popup_window_pane_g9

0x324d,	// (0x0005d251) bg_popup_window_pane_g10_ParamLimits

0x324d,	// (0x0005d251) bg_popup_window_pane_g10

0x0009,

0xf8db,	// (0x000698df) bg_popup_window_pane_g_ParamLimits

0xf8db,	// (0x000698df) bg_popup_window_pane_g

0x3176,	// (0x0005d17a) bg_popup_heading_pane_ParamLimits

0x3176,	// (0x0005d17a) bg_popup_heading_pane

0x07a4,	// (0x0005a7a8) tabs_4_passive_pane_cp_srt_ParamLimits

0x07a4,	// (0x0005a7a8) tabs_4_passive_pane_cp_srt

0x07b6,	// (0x0005a7ba) tabs_4_passive_pane_srt_ParamLimits

0x318a,	// (0x0005d18e) heading_pane_g2

0x07b6,	// (0x0005a7ba) tabs_4_passive_pane_srt

0x2523,	// (0x0005c527) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2523,	// (0x0005c527) bg_passive_tab_pane_cp3_srt

0x3192,	// (0x0005d196) heading_pane_t1_ParamLimits

0x3192,	// (0x0005d196) heading_pane_t1

0x31a9,	// (0x0005d1ad) heading_pane_t2_ParamLimits

0x31a9,	// (0x0005d1ad) heading_pane_t2

0x0001,

0xf8d6,	// (0x000698da) heading_pane_t_ParamLimits

0xf8d6,	// (0x000698da) heading_pane_t

0x2ca1,	// (0x0005cca5) bg_popup_heading_pane_g1

0x2d50,	// (0x0005cd54) bg_popup_heading_pane_g2

0x2d5a,	// (0x0005cd5e) bg_popup_heading_pane_g3

0x2d64,	// (0x0005cd68) bg_popup_heading_pane_g4

0x2d6e,	// (0x0005cd72) bg_popup_heading_pane_g5

0x2d78,	// (0x0005cd7c) bg_popup_heading_pane_g6

0x2d80,	// (0x0005cd84) bg_popup_heading_pane_g7

0x2d88,	// (0x0005cd8c) bg_popup_heading_pane_g8

0x2d92,	// (0x0005cd96) bg_popup_heading_pane_g9

0x0008,

0xf892,	// (0x00069896) bg_popup_heading_pane_g

0x24af,	// (0x0005c4b3) bg_popup_sub_pane_g1

0x24bf,	// (0x0005c4c3) bg_popup_sub_pane_g2

0x24b7,	// (0x0005c4bb) bg_popup_sub_pane_g3

0x24cf,	// (0x0005c4d3) bg_popup_sub_pane_g4

0x24c7,	// (0x0005c4cb) bg_popup_sub_pane_g5

0x24d7,	// (0x0005c4db) bg_popup_sub_pane_g6

0x24df,	// (0x0005c4e3) bg_popup_sub_pane_g7

0x24ef,	// (0x0005c4f3) bg_popup_sub_pane_g8

0x24e7,	// (0x0005c4eb) bg_popup_sub_pane_g9

0x0008,

0xf86c,	// (0x00069870) bg_popup_sub_pane_g

0x54b6,	// (0x0005f4ba) bg_popup_window_pane_cp5_ParamLimits

0x54b6,	// (0x0005f4ba) bg_popup_window_pane_cp5

0x8834,	// (0x00062838) popup_note_window_g1_ParamLimits

0x8834,	// (0x00062838) popup_note_window_g1

0x8840,	// (0x00062844) popup_note_window_t1_ParamLimits

0x8840,	// (0x00062844) popup_note_window_t1

0x8856,	// (0x0006285a) popup_note_window_t2_ParamLimits

0x8856,	// (0x0006285a) popup_note_window_t2

0x886c,	// (0x00062870) popup_note_window_t3_ParamLimits

0x886c,	// (0x00062870) popup_note_window_t3

0x8882,	// (0x00062886) popup_note_window_t4_ParamLimits

0x8882,	// (0x00062886) popup_note_window_t4

0x88aa,	// (0x000628ae) popup_note_window_t5_ParamLimits

0x88aa,	// (0x000628ae) popup_note_window_t5

0x0004,

0xf585,	// (0x00069589) popup_note_window_t_ParamLimits

0xf585,	// (0x00069589) popup_note_window_t

0x88ce,	// (0x000628d2) bg_popup_window_pane_cp6_ParamLimits

0x88ce,	// (0x000628d2) bg_popup_window_pane_cp6

0x2c1d,	// (0x0005cc21) popup_note_image_window_g1_ParamLimits

0x2c1d,	// (0x0005cc21) popup_note_image_window_g1

0x2c29,	// (0x0005cc2d) popup_note_image_window_g2_ParamLimits

0x2c29,	// (0x0005cc2d) popup_note_image_window_g2

0x0001,

0xf860,	// (0x00069864) popup_note_image_window_g_ParamLimits

0xf860,	// (0x00069864) popup_note_image_window_g

0x2c42,	// (0x0005cc46) popup_note_image_window_t1_ParamLimits

0x2c42,	// (0x0005cc46) popup_note_image_window_t1

0x2c5b,	// (0x0005cc5f) popup_note_image_window_t2_ParamLimits

0x2c5b,	// (0x0005cc5f) popup_note_image_window_t2

0x2c74,	// (0x0005cc78) popup_note_image_window_t3_ParamLimits

0x2c74,	// (0x0005cc78) popup_note_image_window_t3

0x0002,

0xf865,	// (0x00069869) popup_note_image_window_t_ParamLimits

0xf865,	// (0x00069869) popup_note_image_window_t

0x2add,	// (0x0005cae1) bg_popup_window_pane_cp7_ParamLimits

0x2add,	// (0x0005cae1) bg_popup_window_pane_cp7

0x2b0d,	// (0x0005cb11) popup_note_wait_window_g1_ParamLimits

0x2b0d,	// (0x0005cb11) popup_note_wait_window_g1

0x2b19,	// (0x0005cb1d) popup_note_wait_window_g2_ParamLimits

0x2b19,	// (0x0005cb1d) popup_note_wait_window_g2

0x0002,

0xf84e,	// (0x00069852) popup_note_wait_window_g_ParamLimits

0xf84e,	// (0x00069852) popup_note_wait_window_g

0x2b31,	// (0x0005cb35) popup_note_wait_window_t1_ParamLimits

0x2b31,	// (0x0005cb35) popup_note_wait_window_t1

0x2b58,	// (0x0005cb5c) popup_note_wait_window_t2_ParamLimits

0x2b58,	// (0x0005cb5c) popup_note_wait_window_t2

0x2b76,	// (0x0005cb7a) popup_note_wait_window_t3_ParamLimits

0x2b76,	// (0x0005cb7a) popup_note_wait_window_t3

0x2b89,	// (0x0005cb8d) popup_note_wait_window_t4_ParamLimits

0x2b89,	// (0x0005cb8d) popup_note_wait_window_t4

0x0004,

0xf855,	// (0x00069859) popup_note_wait_window_t_ParamLimits

0xf855,	// (0x00069859) popup_note_wait_window_t

0x2bae,	// (0x0005cbb2) wait_bar_pane_ParamLimits

0x2bae,	// (0x0005cbb2) wait_bar_pane

0x545c,	// (0x0005f460) wait_anim_pane

0x545c,	// (0x0005f460) wait_border_pane

0x5452,	// (0x0005f456) wait_anim_pane_g1

0x5452,	// (0x0005f456) wait_anim_pane_g2

0x0001,

0xf70e,	// (0x00069712) wait_anim_pane_g

0x2a81,	// (0x0005ca85) wait_border_pane_g1

0x2a8c,	// (0x0005ca90) wait_border_pane_g2

0x2a95,	// (0x0005ca99) wait_border_pane_g3

0x0002,

0xf847,	// (0x0006984b) wait_border_pane_g

0x28eb,	// (0x0005c8ef) bg_popup_window_pane_cp16_ParamLimits

0x28eb,	// (0x0005c8ef) bg_popup_window_pane_cp16

0x29eb,	// (0x0005c9ef) indicator_popup_pane_cp4_ParamLimits

0x29eb,	// (0x0005c9ef) indicator_popup_pane_cp4

0x29ff,	// (0x0005ca03) popup_query_data_window_t1_ParamLimits

0x29ff,	// (0x0005ca03) popup_query_data_window_t1

0x2a11,	// (0x0005ca15) popup_query_data_window_t2_ParamLimits

0x2a11,	// (0x0005ca15) popup_query_data_window_t2

0x2a2a,	// (0x0005ca2e) popup_query_data_window_t3_ParamLimits

0x2a2a,	// (0x0005ca2e) popup_query_data_window_t3

0x0002,

0xf840,	// (0x00069844) popup_query_data_window_t_ParamLimits

0xf840,	// (0x00069844) popup_query_data_window_t

0x2a44,	// (0x0005ca48) query_popup_data_pane_ParamLimits

0x2a44,	// (0x0005ca48) query_popup_data_pane

0x2a58,	// (0x0005ca5c) query_popup_data_pane_cp1_ParamLimits

0x2a58,	// (0x0005ca5c) query_popup_data_pane_cp1

0x28eb,	// (0x0005c8ef) bg_popup_window_pane_cp10_ParamLimits

0x28eb,	// (0x0005c8ef) bg_popup_window_pane_cp10

0x291d,	// (0x0005c921) indicator_popup_pane_ParamLimits

0x291d,	// (0x0005c921) indicator_popup_pane

0x293f,	// (0x0005c943) popup_query_code_window_t1_ParamLimits

0x293f,	// (0x0005c943) popup_query_code_window_t1

0x2959,	// (0x0005c95d) popup_query_code_window_t2_ParamLimits

0x2959,	// (0x0005c95d) popup_query_code_window_t2

0x29a2,	// (0x0005c9a6) popup_query_code_window_t3_ParamLimits

0x29a2,	// (0x0005c9a6) popup_query_code_window_t3

0x0002,

0xf839,	// (0x0006983d) popup_query_code_window_t_ParamLimits

0xf839,	// (0x0006983d) popup_query_code_window_t

0x29d1,	// (0x0005c9d5) query_popup_pane_ParamLimits

0x29d1,	// (0x0005c9d5) query_popup_pane

0x88ce,	// (0x000628d2) bg_popup_window_pane_cp15_ParamLimits

0x88ce,	// (0x000628d2) bg_popup_window_pane_cp15

0x88ee,	// (0x000628f2) indicator_popup_pane_cp1_ParamLimits

0x88ee,	// (0x000628f2) indicator_popup_pane_cp1

0x8901,	// (0x00062905) indicator_popup_pane_cp2_ParamLimits

0x8901,	// (0x00062905) indicator_popup_pane_cp2

0x891c,	// (0x00062920) popup_query_data_code_window_g1_ParamLimits

0x891c,	// (0x00062920) popup_query_data_code_window_g1

0x892f,	// (0x00062933) popup_query_data_code_window_t1_ParamLimits

0x892f,	// (0x00062933) popup_query_data_code_window_t1

0x8941,	// (0x00062945) popup_query_data_code_window_t2_ParamLimits

0x8941,	// (0x00062945) popup_query_data_code_window_t2

0x8953,	// (0x00062957) popup_query_data_code_window_t3_ParamLimits

0x8953,	// (0x00062957) popup_query_data_code_window_t3

0x8969,	// (0x0006296d) popup_query_data_code_window_t4_ParamLimits

0x8969,	// (0x0006296d) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x00069594) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x00069594) popup_query_data_code_window_t

0x0399,	// (0x0005a39d) list_single_midp_graphic_pane_g3

0x8983,	// (0x00062987) query_popup_data_pane_cp2_ParamLimits

0x8996,	// (0x0006299a) query_popup_pane_cp2_ParamLimits

0x8996,	// (0x0006299a) query_popup_pane_cp2

0x545c,	// (0x0005f460) bg_popup_window_pane_cp11

0x28e3,	// (0x0005c8e7) heading_pane_cp5

0x8a2c,	// (0x00062a30) listscroll_popup_info_pane

0x545c,	// (0x0005f460) input_focus_pane_cp3

0x89b1,	// (0x000629b5) query_popup_pane_t1

0x89bf,	// (0x000629c3) list_popup_info_pane_ParamLimits

0x89bf,	// (0x000629c3) list_popup_info_pane

0x89ce,	// (0x000629d2) listscroll_popup_info_pane_g1

0x89d6,	// (0x000629da) scroll_pane_cp7

0x89e0,	// (0x000629e4) popup_info_list_pane_t1_ParamLimits

0x89e0,	// (0x000629e4) popup_info_list_pane_t1

0x89fa,	// (0x000629fe) popup_info_list_pane_t2_ParamLimits

0x89fa,	// (0x000629fe) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0006959d) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0006959d) popup_info_list_pane_t

0x545c,	// (0x0005f460) bg_popup_window_pane_cp12

0x3e54,	// (0x0005de58) find_popup_pane

0x86f3,	// (0x000626f7) bg_popup_window_pane_cp3

0x8a14,	// (0x00062a18) heading_pane_cp3

0x8a20,	// (0x00062a24) listscroll_popup_graphic_pane

0x545c,	// (0x0005f460) bg_popup_window_pane_cp4

0x9f06,	// (0x00063f0a) heading_pane_cp4

0x8a2c,	// (0x00062a30) listscroll_popup_colour_pane

0x9f10,	// (0x00063f14) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9f10,	// (0x00063f14) cell_large_graphic_colour_none_popup_pane

0x9f24,	// (0x00063f28) grid_large_graphic_colour_popup_pane_ParamLimits

0x9f24,	// (0x00063f28) grid_large_graphic_colour_popup_pane

0x9f48,	// (0x00063f4c) listscroll_popup_colour_pane_g1_ParamLimits

0x9f48,	// (0x00063f4c) listscroll_popup_colour_pane_g1

0x9f5f,	// (0x00063f63) listscroll_popup_colour_pane_g2_ParamLimits

0x9f5f,	// (0x00063f63) listscroll_popup_colour_pane_g2

0x9f76,	// (0x00063f7a) listscroll_popup_colour_pane_g3_ParamLimits

0x9f76,	// (0x00063f7a) listscroll_popup_colour_pane_g3

0x9f86,	// (0x00063f8a) listscroll_popup_colour_pane_g4_ParamLimits

0x9f86,	// (0x00063f8a) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x000695a2) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x000695a2) listscroll_popup_colour_pane_g

0x8a34,	// (0x00062a38) scroll_pane_cp6_ParamLimits

0x8a34,	// (0x00062a38) scroll_pane_cp6

0x9f96,	// (0x00063f9a) cell_large_graphic_colour_popup_pane_ParamLimits

0x9f96,	// (0x00063f9a) cell_large_graphic_colour_popup_pane

0x8a46,	// (0x00062a4a) cell_large_graphic_colour_none_popup_pane_t1

0x545c,	// (0x0005f460) grid_highlight_pane_cp5

0x8a55,	// (0x00062a59) cell_large_graphic_colour_popup_pane_g1

0x8a5d,	// (0x00062a61) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x000695ab) cell_large_graphic_colour_popup_pane_g

0x8a65,	// (0x00062a69) cell_large_graphic_colour_popup_pane_g2_copy1

0x8a6e,	// (0x00062a72) grid_highlight_pane_cp4

0x8a76,	// (0x00062a7a) bg_popup_window_pane_cp8_ParamLimits

0x8a76,	// (0x00062a7a) bg_popup_window_pane_cp8

0x8a91,	// (0x00062a95) popup_snote_single_text_window_g1_ParamLimits

0x8a91,	// (0x00062a95) popup_snote_single_text_window_g1

0x8aa3,	// (0x00062aa7) popup_snote_single_text_window_t1_ParamLimits

0x8aa3,	// (0x00062aa7) popup_snote_single_text_window_t1

0x8ab6,	// (0x00062aba) popup_snote_single_text_window_t2_ParamLimits

0x8ab6,	// (0x00062aba) popup_snote_single_text_window_t2

0x8ac9,	// (0x00062acd) popup_snote_single_text_window_t3_ParamLimits

0x8ac9,	// (0x00062acd) popup_snote_single_text_window_t3

0x8b02,	// (0x00062b06) popup_snote_single_text_window_t4_ParamLimits

0x8b02,	// (0x00062b06) popup_snote_single_text_window_t4

0x8b36,	// (0x00062b3a) popup_snote_single_text_window_t5_ParamLimits

0x8b36,	// (0x00062b3a) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x000695b0) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x000695b0) popup_snote_single_text_window_t

0x8b65,	// (0x00062b69) bg_popup_window_pane_cp9_ParamLimits

0x8b65,	// (0x00062b69) bg_popup_window_pane_cp9

0x8a91,	// (0x00062a95) popup_snote_single_graphic_window_g1_ParamLimits

0x8a91,	// (0x00062a95) popup_snote_single_graphic_window_g1

0x8b73,	// (0x00062b77) popup_snote_single_graphic_window_g2_ParamLimits

0x8b73,	// (0x00062b77) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x000695bb) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x000695bb) popup_snote_single_graphic_window_g

0x8b7f,	// (0x00062b83) popup_snote_single_graphic_window_t1_ParamLimits

0x8b7f,	// (0x00062b83) popup_snote_single_graphic_window_t1

0x8b92,	// (0x00062b96) popup_snote_single_graphic_window_t2_ParamLimits

0x8b92,	// (0x00062b96) popup_snote_single_graphic_window_t2

0x8ba5,	// (0x00062ba9) popup_snote_single_graphic_window_t3_ParamLimits

0x8ba5,	// (0x00062ba9) popup_snote_single_graphic_window_t3

0x8bde,	// (0x00062be2) popup_snote_single_graphic_window_t4_ParamLimits

0x8bde,	// (0x00062be2) popup_snote_single_graphic_window_t4

0x8c12,	// (0x00062c16) popup_snote_single_graphic_window_t5_ParamLimits

0x8c12,	// (0x00062c16) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x000695c0) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x000695c0) popup_snote_single_graphic_window_t

0x3d92,	// (0x0005dd96) grid_graphic_popup_pane_ParamLimits

0x3d92,	// (0x0005dd96) grid_graphic_popup_pane

0x3dc0,	// (0x0005ddc4) listscroll_popup_graphic_pane_g1_ParamLimits

0x3dc0,	// (0x0005ddc4) listscroll_popup_graphic_pane_g1

0xc7f9,	// (0x000667fd) listscroll_popup_graphic_pane_g2_ParamLimits

0xc7f9,	// (0x000667fd) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b6,	// (0x000699ba) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b6,	// (0x000699ba) listscroll_popup_graphic_pane_g

0x3de8,	// (0x0005ddec) scroll_pane_cp5

0xc7b8,	// (0x000667bc) cell_graphic_popup_pane_ParamLimits

0xc7b8,	// (0x000667bc) cell_graphic_popup_pane

0x3d1b,	// (0x0005dd1f) cell_graphic_popup_pane_g1

0x3d23,	// (0x0005dd27) cell_graphic_popup_pane_g2

0x8a65,	// (0x00062a69) cell_graphic_popup_pane_g3

0x0002,

0xf9af,	// (0x000699b3) cell_graphic_popup_pane_g

0x3d2c,	// (0x0005dd30) cell_graphic_popup_pane_t2

0x8a6e,	// (0x00062a72) grid_highlight_pane_cp3

0x8c53,	// (0x00062c57) list_gen_pane_ParamLimits

0x8c53,	// (0x00062c57) list_gen_pane

0x8c7b,	// (0x00062c7f) scroll_pane

0xc76f,	// (0x00066773) bg_list_pane_g1_ParamLimits

0xc76f,	// (0x00066773) bg_list_pane_g1

0x3c90,	// (0x0005dc94) bg_list_pane_g2_ParamLimits

0x3c90,	// (0x0005dc94) bg_list_pane_g2

0x3ca5,	// (0x0005dca9) bg_list_pane_g3_ParamLimits

0x3ca5,	// (0x0005dca9) bg_list_pane_g3

0x3cb9,	// (0x0005dcbd) bg_list_pane_g4_ParamLimits

0x3cb9,	// (0x0005dcbd) bg_list_pane_g4

0xc78c,	// (0x00066790) bg_list_pane_g5_ParamLimits

0xc78c,	// (0x00066790) bg_list_pane_g5

0x0004,

0xf9a4,	// (0x000699a8) bg_list_pane_g_ParamLimits

0xf9a4,	// (0x000699a8) bg_list_pane_g

0xc71d,	// (0x00066721) list_double2_graphic_large_graphic_pane_ParamLimits

0xc71d,	// (0x00066721) list_double2_graphic_large_graphic_pane

0xc71d,	// (0x00066721) list_double2_graphic_pane_ParamLimits

0xc71d,	// (0x00066721) list_double2_graphic_pane

0xc71d,	// (0x00066721) list_double2_large_graphic_pane_ParamLimits

0xc71d,	// (0x00066721) list_double2_large_graphic_pane

0xc71d,	// (0x00066721) list_double2_pane_ParamLimits

0xc71d,	// (0x00066721) list_double2_pane

0xc71d,	// (0x00066721) list_double_graphic_heading_pane_ParamLimits

0xc71d,	// (0x00066721) list_double_graphic_heading_pane

0xc71d,	// (0x00066721) list_double_graphic_pane_ParamLimits

0xc71d,	// (0x00066721) list_double_graphic_pane

0xc71d,	// (0x00066721) list_double_heading_pane_ParamLimits

0xc71d,	// (0x00066721) list_double_heading_pane

0xc71d,	// (0x00066721) list_double_large_graphic_pane_ParamLimits

0xc71d,	// (0x00066721) list_double_large_graphic_pane

0xc71d,	// (0x00066721) list_double_number_pane_ParamLimits

0xc71d,	// (0x00066721) list_double_number_pane

0xc71d,	// (0x00066721) list_double_pane_ParamLimits

0xc71d,	// (0x00066721) list_double_pane

0xc71d,	// (0x00066721) list_double_time_pane_ParamLimits

0xc71d,	// (0x00066721) list_double_time_pane

0xc71d,	// (0x00066721) list_setting_number_pane_ParamLimits

0xc71d,	// (0x00066721) list_setting_number_pane

0xc71d,	// (0x00066721) list_setting_pane_ParamLimits

0xc71d,	// (0x00066721) list_setting_pane

0xc731,	// (0x00066735) list_single_2graphic_pane_ParamLimits

0xc731,	// (0x00066735) list_single_2graphic_pane

0xc731,	// (0x00066735) list_single_graphic_heading_pane_ParamLimits

0xc731,	// (0x00066735) list_single_graphic_heading_pane

0xc731,	// (0x00066735) list_single_graphic_pane_ParamLimits

0xc731,	// (0x00066735) list_single_graphic_pane

0xc731,	// (0x00066735) list_single_heading_pane_ParamLimits

0xc731,	// (0x00066735) list_single_heading_pane

0xc731,	// (0x00066735) list_single_large_graphic_pane_ParamLimits

0xc731,	// (0x00066735) list_single_large_graphic_pane

0xc731,	// (0x00066735) list_single_number_heading_pane_ParamLimits

0xc731,	// (0x00066735) list_single_number_heading_pane

0xc731,	// (0x00066735) list_single_number_pane_ParamLimits

0xc731,	// (0x00066735) list_single_number_pane

0xc731,	// (0x00066735) list_single_pane_ParamLimits

0xc731,	// (0x00066735) list_single_pane

0x545c,	// (0x0005f460) list_highlight_pane_cp1

0xf488,	// (0x0006948c) list_single_pane_g1_ParamLimits

0xf488,	// (0x0006948c) list_single_pane_g1

0x0368,	// (0x0005a36c) list_single_pane_g2_ParamLimits

0x0368,	// (0x0005a36c) list_single_pane_g2

0x0001,

0xf5d8,	// (0x000695dc) list_single_pane_g_ParamLimits

0xf5d8,	// (0x000695dc) list_single_pane_g

0xe679,	// (0x0006867d) list_single_pane_t1_ParamLimits

0xe679,	// (0x0006867d) list_single_pane_t1

0xf488,	// (0x0006948c) list_single_number_pane_g1_ParamLimits

0xf488,	// (0x0006948c) list_single_number_pane_g1

0x0368,	// (0x0005a36c) list_single_number_pane_g2_ParamLimits

0x0368,	// (0x0005a36c) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x000695dc) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x000695dc) list_single_number_pane_g

0xe5ba,	// (0x000685be) list_single_number_pane_t1_ParamLimits

0xe5ba,	// (0x000685be) list_single_number_pane_t1

0xb8af,	// (0x000658b3) list_single_number_pane_t2_ParamLimits

0xb8af,	// (0x000658b3) list_single_number_pane_t2

0x0001,

0xf965,	// (0x00069969) list_single_number_pane_t_ParamLimits

0xf965,	// (0x00069969) list_single_number_pane_t

0x9fc1,	// (0x00063fc5) list_single_graphic_pane_g1_ParamLimits

0x9fc1,	// (0x00063fc5) list_single_graphic_pane_g1

0xf488,	// (0x0006948c) list_single_graphic_pane_g2_ParamLimits

0xf488,	// (0x0006948c) list_single_graphic_pane_g2

0x0368,	// (0x0005a36c) list_single_graphic_pane_g3_ParamLimits

0x0368,	// (0x0005a36c) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x000695cb) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x000695cb) list_single_graphic_pane_g

0x9fcd,	// (0x00063fd1) list_single_graphic_pane_t1_ParamLimits

0x9fcd,	// (0x00063fd1) list_single_graphic_pane_t1

0x9fe3,	// (0x00063fe7) list_single_heading_pane_g1_ParamLimits

0x9fe3,	// (0x00063fe7) list_single_heading_pane_g1

0x0368,	// (0x0005a36c) list_single_heading_pane_g2_ParamLimits

0x0368,	// (0x0005a36c) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x000695d2) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x000695d2) list_single_heading_pane_g

0x9ff6,	// (0x00063ffa) list_single_heading_pane_t1_ParamLimits

0x9ff6,	// (0x00063ffa) list_single_heading_pane_t1

0xa00c,	// (0x00064010) list_single_heading_pane_t2_ParamLimits

0xa00c,	// (0x00064010) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x000695d7) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x000695d7) list_single_heading_pane_t

0xf488,	// (0x0006948c) list_single_number_heading_pane_g1_ParamLimits

0xf488,	// (0x0006948c) list_single_number_heading_pane_g1

0x0368,	// (0x0005a36c) list_single_number_heading_pane_g2_ParamLimits

0x0368,	// (0x0005a36c) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x000695dc) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x000695dc) list_single_number_heading_pane_g

0xe076,	// (0x0006807a) list_single_number_heading_pane_t1_ParamLimits

0xe076,	// (0x0006807a) list_single_number_heading_pane_t1

0xa01e,	// (0x00064022) list_single_number_heading_pane_t2_ParamLimits

0xa01e,	// (0x00064022) list_single_number_heading_pane_t2

0xe08c,	// (0x00068090) list_single_number_heading_pane_t3_ParamLimits

0xe08c,	// (0x00068090) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x000695e1) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x000695e1) list_single_number_heading_pane_t

0xa030,	// (0x00064034) list_single_graphic_heading_pane_g1_ParamLimits

0xa030,	// (0x00064034) list_single_graphic_heading_pane_g1

0xa048,	// (0x0006404c) list_single_graphic_heading_pane_g4_ParamLimits

0xa048,	// (0x0006404c) list_single_graphic_heading_pane_g4

0x0368,	// (0x0005a36c) list_single_graphic_heading_pane_g5_ParamLimits

0x0368,	// (0x0005a36c) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x000695e8) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x000695e8) list_single_graphic_heading_pane_g

0xe076,	// (0x0006807a) list_single_graphic_heading_pane_t1_ParamLimits

0xe076,	// (0x0006807a) list_single_graphic_heading_pane_t1

0xa059,	// (0x0006405d) list_single_graphic_heading_pane_t2_ParamLimits

0xa059,	// (0x0006405d) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x000695ef) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x000695ef) list_single_graphic_heading_pane_t

0x34d7,	// (0x0005d4db) list_single_large_graphic_pane_g1_ParamLimits

0x34d7,	// (0x0005d4db) list_single_large_graphic_pane_g1

0xf488,	// (0x0006948c) list_single_large_graphic_pane_g2_ParamLimits

0xf488,	// (0x0006948c) list_single_large_graphic_pane_g2

0x0368,	// (0x0005a36c) list_single_large_graphic_pane_g3_ParamLimits

0x0368,	// (0x0005a36c) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x000695f4) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x000695f4) list_single_large_graphic_pane_g

0x2a8c,	// (0x0005ca90) wait_border_pane_g2_copy1

0xa071,	// (0x00064075) list_single_large_graphic_pane_g4_cp2

0xe076,	// (0x0006807a) list_single_large_graphic_pane_t1_ParamLimits

0xe076,	// (0x0006807a) list_single_large_graphic_pane_t1

0x528b,	// (0x0005f28f) list_double_pane_g1_ParamLimits

0x528b,	// (0x0005f28f) list_double_pane_g1

0xa079,	// (0x0006407d) list_double_pane_g2_ParamLimits

0xa079,	// (0x0006407d) list_double_pane_g2

0x0001,

0xf5f7,	// (0x000695fb) list_double_pane_g_ParamLimits

0xf5f7,	// (0x000695fb) list_double_pane_g

0xa085,	// (0x00064089) list_double_pane_t1_ParamLimits

0xa085,	// (0x00064089) list_double_pane_t1

0xa09b,	// (0x0006409f) list_double_pane_t2_ParamLimits

0xa09b,	// (0x0006409f) list_double_pane_t2

0x0001,

0xf5fc,	// (0x00069600) list_double_pane_t_ParamLimits

0xf5fc,	// (0x00069600) list_double_pane_t

0xa0ad,	// (0x000640b1) list_double2_pane_g1_ParamLimits

0xa0ad,	// (0x000640b1) list_double2_pane_g1

0xa0be,	// (0x000640c2) list_double2_pane_g2_ParamLimits

0xa0be,	// (0x000640c2) list_double2_pane_g2

0x0001,

0xf601,	// (0x00069605) list_double2_pane_g_ParamLimits

0xf601,	// (0x00069605) list_double2_pane_g

0xa0ca,	// (0x000640ce) list_double2_pane_t1_ParamLimits

0xa0ca,	// (0x000640ce) list_double2_pane_t1

0xa0e0,	// (0x000640e4) list_double2_pane_t2_ParamLimits

0xa0e0,	// (0x000640e4) list_double2_pane_t2

0x0001,

0xf606,	// (0x0006960a) list_double2_pane_t_ParamLimits

0xf606,	// (0x0006960a) list_double2_pane_t

0x528b,	// (0x0005f28f) list_double_number_pane_g1_ParamLimits

0x528b,	// (0x0005f28f) list_double_number_pane_g1

0xa079,	// (0x0006407d) list_double_number_pane_g2_ParamLimits

0xa079,	// (0x0006407d) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x000695fb) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x000695fb) list_double_number_pane_g

0xa0f2,	// (0x000640f6) list_double_number_pane_t1_ParamLimits

0xa0f2,	// (0x000640f6) list_double_number_pane_t1

0xa104,	// (0x00064108) list_double_number_pane_t2_ParamLimits

0xa104,	// (0x00064108) list_double_number_pane_t2

0xa11a,	// (0x0006411e) list_double_number_pane_t3_ParamLimits

0xa11a,	// (0x0006411e) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x0006960f) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x0006960f) list_double_number_pane_t

0xa12c,	// (0x00064130) list_double_graphic_pane_g1_ParamLimits

0xa12c,	// (0x00064130) list_double_graphic_pane_g1

0xa138,	// (0x0006413c) list_double_graphic_pane_g2_ParamLimits

0xa138,	// (0x0006413c) list_double_graphic_pane_g2

0xa147,	// (0x0006414b) list_double_graphic_pane_g3_ParamLimits

0xa147,	// (0x0006414b) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x00069616) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x00069616) list_double_graphic_pane_g

0xa15f,	// (0x00064163) list_double_graphic_pane_t1_ParamLimits

0xa15f,	// (0x00064163) list_double_graphic_pane_t1

0xa175,	// (0x00064179) list_double_graphic_pane_t2_ParamLimits

0xa175,	// (0x00064179) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x0006961f) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x0006961f) list_double_graphic_pane_t

0xa187,	// (0x0006418b) list_double2_graphic_pane_g1_ParamLimits

0xa187,	// (0x0006418b) list_double2_graphic_pane_g1

0xa193,	// (0x00064197) list_double2_graphic_pane_g2_ParamLimits

0xa193,	// (0x00064197) list_double2_graphic_pane_g2

0xa19f,	// (0x000641a3) list_double2_graphic_pane_g3_ParamLimits

0xa19f,	// (0x000641a3) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x00069624) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x00069624) list_double2_graphic_pane_g

0xa1ab,	// (0x000641af) list_double2_graphic_pane_t1_ParamLimits

0xa1ab,	// (0x000641af) list_double2_graphic_pane_t1

0xa1c1,	// (0x000641c5) list_double2_graphic_pane_t2_ParamLimits

0xa1c1,	// (0x000641c5) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x0006962b) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x0006962b) list_double2_graphic_pane_t

0xa1d3,	// (0x000641d7) list_double_large_graphic_pane_g1_ParamLimits

0xa1d3,	// (0x000641d7) list_double_large_graphic_pane_g1

0xa1fe,	// (0x00064202) list_double_large_graphic_pane_g2_ParamLimits

0xa1fe,	// (0x00064202) list_double_large_graphic_pane_g2

0xa079,	// (0x0006407d) list_double_large_graphic_pane_g3_ParamLimits

0xa079,	// (0x0006407d) list_double_large_graphic_pane_g3

0xa214,	// (0x00064218) list_double_large_graphic_pane_g4_ParamLimits

0xa214,	// (0x00064218) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x00069630) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x00069630) list_double_large_graphic_pane_g

0xa227,	// (0x0006422b) list_double_large_graphic_pane_t1_ParamLimits

0xa227,	// (0x0006422b) list_double_large_graphic_pane_t1

0xa240,	// (0x00064244) list_double_large_graphic_pane_t2_ParamLimits

0xa240,	// (0x00064244) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x0006963b) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x0006963b) list_double_large_graphic_pane_t

0xa252,	// (0x00064256) list_double2_large_graphic_pane_g1_ParamLimits

0xa252,	// (0x00064256) list_double2_large_graphic_pane_g1

0xa25e,	// (0x00064262) list_double2_large_graphic_pane_g2_ParamLimits

0xa25e,	// (0x00064262) list_double2_large_graphic_pane_g2

0xa19f,	// (0x000641a3) list_double2_large_graphic_pane_g3_ParamLimits

0xa19f,	// (0x000641a3) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x00069640) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x00069640) list_double2_large_graphic_pane_g

0xa26f,	// (0x00064273) list_double2_large_graphic_pane_t1_ParamLimits

0xa26f,	// (0x00064273) list_double2_large_graphic_pane_t1

0xa285,	// (0x00064289) list_double2_large_graphic_pane_t2_ParamLimits

0xa285,	// (0x00064289) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x00069647) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x00069647) list_double2_large_graphic_pane_t

0xa297,	// (0x0006429b) list_double_heading_pane_g1_ParamLimits

0xa297,	// (0x0006429b) list_double_heading_pane_g1

0xa2a8,	// (0x000642ac) list_double_heading_pane_g2_ParamLimits

0xa2a8,	// (0x000642ac) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x0006964c) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x0006964c) list_double_heading_pane_g

0xa2b4,	// (0x000642b8) list_double_heading_pane_t1_ParamLimits

0xa2b4,	// (0x000642b8) list_double_heading_pane_t1

0xa2ca,	// (0x000642ce) list_double_heading_pane_t2_ParamLimits

0xa2ca,	// (0x000642ce) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x00069651) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x00069651) list_double_heading_pane_t

0xe0b3,	// (0x000680b7) list_double_graphic_heading_pane_g1_ParamLimits

0xe0b3,	// (0x000680b7) list_double_graphic_heading_pane_g1

0xa297,	// (0x0006429b) list_double_graphic_heading_pane_g2_ParamLimits

0xa297,	// (0x0006429b) list_double_graphic_heading_pane_g2

0xa2a8,	// (0x000642ac) list_double_graphic_heading_pane_g3_ParamLimits

0xa2a8,	// (0x000642ac) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x00069656) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x00069656) list_double_graphic_heading_pane_g

0xa2dc,	// (0x000642e0) list_double_graphic_heading_pane_t1_ParamLimits

0xa2dc,	// (0x000642e0) list_double_graphic_heading_pane_t1

0xa2f2,	// (0x000642f6) list_double_graphic_heading_pane_t2_ParamLimits

0xa2f2,	// (0x000642f6) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x0006965d) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x0006965d) list_double_graphic_heading_pane_t

0xa304,	// (0x00064308) list_double_time_pane_g1_ParamLimits

0xa304,	// (0x00064308) list_double_time_pane_g1

0xa315,	// (0x00064319) list_double_time_pane_g2_ParamLimits

0xa315,	// (0x00064319) list_double_time_pane_g2

0x0001,

0xf65e,	// (0x00069662) list_double_time_pane_g_ParamLimits

0xf65e,	// (0x00069662) list_double_time_pane_g

0xa321,	// (0x00064325) list_double_time_pane_t1_ParamLimits

0xa321,	// (0x00064325) list_double_time_pane_t1

0xa337,	// (0x0006433b) list_double_time_pane_t2_ParamLimits

0xa337,	// (0x0006433b) list_double_time_pane_t2

0xa349,	// (0x0006434d) list_double_time_pane_t3_ParamLimits

0xa349,	// (0x0006434d) list_double_time_pane_t3

0xa35b,	// (0x0006435f) list_double_time_pane_t4_ParamLimits

0xa35b,	// (0x0006435f) list_double_time_pane_t4

0x0003,

0xf663,	// (0x00069667) list_double_time_pane_t_ParamLimits

0xf663,	// (0x00069667) list_double_time_pane_t

0xa36d,	// (0x00064371) list_setting_pane_g1_ParamLimits

0xa36d,	// (0x00064371) list_setting_pane_g1

0xa379,	// (0x0006437d) list_setting_pane_g2_ParamLimits

0xa379,	// (0x0006437d) list_setting_pane_g2

0x0001,

0xf66c,	// (0x00069670) list_setting_pane_g_ParamLimits

0xf66c,	// (0x00069670) list_setting_pane_g

0xa385,	// (0x00064389) list_setting_pane_t1_ParamLimits

0xa385,	// (0x00064389) list_setting_pane_t1

0xa39f,	// (0x000643a3) list_setting_pane_t2_ParamLimits

0xa39f,	// (0x000643a3) list_setting_pane_t2

0x0002,

0xf671,	// (0x00069675) list_setting_pane_t_ParamLimits

0xf671,	// (0x00069675) list_setting_pane_t

0xa3de,	// (0x000643e2) set_value_pane_cp_ParamLimits

0xa3de,	// (0x000643e2) set_value_pane_cp

0xa3ec,	// (0x000643f0) list_setting_number_pane_g1_ParamLimits

0xa3ec,	// (0x000643f0) list_setting_number_pane_g1

0xa3f8,	// (0x000643fc) list_setting_number_pane_g2_ParamLimits

0xa3f8,	// (0x000643fc) list_setting_number_pane_g2

0x0001,

0xf678,	// (0x0006967c) list_setting_number_pane_g_ParamLimits

0xf678,	// (0x0006967c) list_setting_number_pane_g

0xa404,	// (0x00064408) list_setting_number_pane_t1_ParamLimits

0xa404,	// (0x00064408) list_setting_number_pane_t1

0xa41d,	// (0x00064421) list_setting_number_pane_t2_ParamLimits

0xa41d,	// (0x00064421) list_setting_number_pane_t2

0xa437,	// (0x0006443b) list_setting_number_pane_t3_ParamLimits

0xa437,	// (0x0006443b) list_setting_number_pane_t3

0x0003,

0xf67d,	// (0x00069681) list_setting_number_pane_t_ParamLimits

0xf67d,	// (0x00069681) list_setting_number_pane_t

0xa3de,	// (0x000643e2) set_value_pane_ParamLimits

0xa3de,	// (0x000643e2) set_value_pane

0x8caf,	// (0x00062cb3) bg_set_opt_pane_ParamLimits

0x8caf,	// (0x00062cb3) bg_set_opt_pane

0xe0bf,	// (0x000680c3) set_value_pane_t1

0x8cd0,	// (0x00062cd4) slider_set_pane_cp3

0x8cd9,	// (0x00062cdd) volume_small_pane_cp

0x8ce2,	// (0x00062ce6) list_form_gen_pane

0x8ceb,	// (0x00062cef) scroll_pane_cp8

0xa47a,	// (0x0006447e) form_field_data_pane_ParamLimits

0xa47a,	// (0x0006447e) form_field_data_pane

0xa497,	// (0x0006449b) form_field_data_wide_pane_ParamLimits

0xa497,	// (0x0006449b) form_field_data_wide_pane

0xa4bb,	// (0x000644bf) form_field_popup_pane_ParamLimits

0xa4bb,	// (0x000644bf) form_field_popup_pane

0xe0dd,	// (0x000680e1) form_field_popup_wide_pane_ParamLimits

0xe0dd,	// (0x000680e1) form_field_popup_wide_pane

0xe0fe,	// (0x00068102) form_field_slider_pane_ParamLimits

0xe0fe,	// (0x00068102) form_field_slider_pane

0xe111,	// (0x00068115) form_field_slider_wide_pane_ParamLimits

0xe111,	// (0x00068115) form_field_slider_wide_pane

0x8cfc,	// (0x00062d00) data_form_pane

0xa4e7,	// (0x000644eb) form_field_data_pane_t1

0x8d08,	// (0x00062d0c) input_focus_pane

0xe124,	// (0x00068128) data_form_wide_pane

0xe141,	// (0x00068145) form_field_data_wide_pane_t1

0x8a83,	// (0x00062a87) input_focus_pane_cp6

0xa501,	// (0x00064505) form_field_popup_pane_t1

0x8d08,	// (0x00062d0c) input_focus_pane_cp7

0x8d36,	// (0x00062d3a) list_form_pane

0xe16b,	// (0x0006816f) form_field_popup_wide_pane_t1

0x8d08,	// (0x00062d0c) input_focus_pane_cp8

0x8d42,	// (0x00062d46) list_form_wide_pane

0xa523,	// (0x00064527) form_field_slider_pane_t1_ParamLimits

0xa523,	// (0x00064527) form_field_slider_pane_t1

0xa53b,	// (0x0006453f) form_field_slider_pane_t2_ParamLimits

0xa53b,	// (0x0006453f) form_field_slider_pane_t2

0x0001,

0xf68d,	// (0x00069691) form_field_slider_pane_t_ParamLimits

0xf68d,	// (0x00069691) form_field_slider_pane_t

0x54b6,	// (0x0005f4ba) input_focus_pane_cp9_ParamLimits

0x54b6,	// (0x0005f4ba) input_focus_pane_cp9

0xa550,	// (0x00064554) slider_cont_pane_ParamLimits

0xa550,	// (0x00064554) slider_cont_pane

0x8d51,	// (0x00062d55) form_field_slider_wide_pane_t1_ParamLimits

0x8d51,	// (0x00062d55) form_field_slider_wide_pane_t1

0xe180,	// (0x00068184) form_field_slider_wide_pane_t2_ParamLimits

0xe180,	// (0x00068184) form_field_slider_wide_pane_t2

0x0001,

0xf692,	// (0x00069696) form_field_slider_wide_pane_t_ParamLimits

0xf692,	// (0x00069696) form_field_slider_wide_pane_t

0x54b6,	// (0x0005f4ba) input_focus_pane_cp10_ParamLimits

0x54b6,	// (0x0005f4ba) input_focus_pane_cp10

0xa564,	// (0x00064568) slider_cont_pane_cp1_ParamLimits

0xa564,	// (0x00064568) slider_cont_pane_cp1

0xa578,	// (0x0006457c) slider_form_pane_cp

0x8d63,	// (0x00062d67) input_focus_pane_g1

0x8d6b,	// (0x00062d6f) input_focus_pane_g2

0x8d73,	// (0x00062d77) input_focus_pane_g3

0x8d7b,	// (0x00062d7f) input_focus_pane_g4

0x8d83,	// (0x00062d87) input_focus_pane_g5

0x8d8b,	// (0x00062d8f) input_focus_pane_g6

0x8d93,	// (0x00062d97) input_focus_pane_g7

0x8d9b,	// (0x00062d9f) input_focus_pane_g8

0x8da3,	// (0x00062da7) input_focus_pane_g9

0x5452,	// (0x0005f456) input_focus_pane_g10

0x0009,

0xf697,	// (0x0006969b) input_focus_pane_g

0x2a95,	// (0x0005ca99) wait_border_pane_g3_copy1

0xa580,	// (0x00064584) data_form_pane_t1

0x5452,	// (0x0005f456) wait_anim_pane_g1_copy1

0xb8c1,	// (0x000658c5) data_form_wide_pane_t1

0xe192,	// (0x00068196) list_form_graphic_pane_cp_ParamLimits

0xe192,	// (0x00068196) list_form_graphic_pane_cp

0x3ba8,	// (0x0005dbac) slider_form_pane_g1

0x3bb1,	// (0x0005dbb5) slider_form_pane_g2

0x0006,

0xf995,	// (0x00069999) slider_form_pane_g

0xa59c,	// (0x000645a0) list_form_graphic_pane_ParamLimits

0xa59c,	// (0x000645a0) list_form_graphic_pane

0xe1a4,	// (0x000681a8) list_form_graphic_pane_g1

0xe1ac,	// (0x000681b0) list_form_graphic_pane_t1_ParamLimits

0xe1ac,	// (0x000681b0) list_form_graphic_pane_t1

0x86f3,	// (0x000626f7) list_highlight_pane_cp5_ParamLimits

0x86f3,	// (0x000626f7) list_highlight_pane_cp5

0xa5ad,	// (0x000645b1) find_pane_g1

0x8dab,	// (0x00062daf) input_find_pane

0xa5b6,	// (0x000645ba) input_find_pane_g1_ParamLimits

0xa5b6,	// (0x000645ba) input_find_pane_g1

0xa5c2,	// (0x000645c6) input_find_pane_t1_ParamLimits

0xa5c2,	// (0x000645c6) input_find_pane_t1

0xa5d7,	// (0x000645db) input_find_pane_t2_ParamLimits

0xa5d7,	// (0x000645db) input_find_pane_t2

0x0001,

0xf6ac,	// (0x000696b0) input_find_pane_t_ParamLimits

0xf6ac,	// (0x000696b0) input_find_pane_t

0x8db4,	// (0x00062db8) input_focus_pane_cp5_ParamLimits

0x8db4,	// (0x00062db8) input_focus_pane_cp5

0x8dc2,	// (0x00062dc6) bg_popup_window_pane_cp2_ParamLimits

0x8dc2,	// (0x00062dc6) bg_popup_window_pane_cp2

0x8dcf,	// (0x00062dd3) listscroll_menu_pane_ParamLimits

0x8dcf,	// (0x00062dd3) listscroll_menu_pane

0xa5f8,	// (0x000645fc) popup_submenu_window_ParamLimits

0xa5f8,	// (0x000645fc) popup_submenu_window

0x8ddb,	// (0x00062ddf) find_popup_pane_g1

0x8de3,	// (0x00062de7) input_popup_find_pane_cp

0x8db4,	// (0x00062db8) input_focus_pane_cp4_ParamLimits

0x8db4,	// (0x00062db8) input_focus_pane_cp4

0x8ded,	// (0x00062df1) input_popup_find_pane_t1_ParamLimits

0x8ded,	// (0x00062df1) input_popup_find_pane_t1

0x545c,	// (0x0005f460) bg_popup_sub_pane_cp

0x8e1b,	// (0x00062e1f) listscroll_popup_sub_pane

0x8e23,	// (0x00062e27) list_submenu_pane_ParamLimits

0x8e23,	// (0x00062e27) list_submenu_pane

0x8e34,	// (0x00062e38) scroll_pane_cp4

0x8e3c,	// (0x00062e40) list_single_popup_submenu_pane_ParamLimits

0x8e3c,	// (0x00062e40) list_single_popup_submenu_pane

0x8e51,	// (0x00062e55) list_single_popup_submenu_pane_g1

0x8e59,	// (0x00062e5d) list_single_popup_submenu_pane_t1_ParamLimits

0x8e59,	// (0x00062e5d) list_single_popup_submenu_pane_t1

0x54b6,	// (0x0005f4ba) bg_active_tab_pane_cp1_ParamLimits

0x54b6,	// (0x0005f4ba) bg_active_tab_pane_cp1

0xa636,	// (0x0006463a) tabs_2_active_pane_g1

0xa63e,	// (0x00064642) tabs_2_active_pane_t1

0x54b6,	// (0x0005f4ba) bg_passive_tab_pane_cp1_ParamLimits

0x54b6,	// (0x0005f4ba) bg_passive_tab_pane_cp1

0xa636,	// (0x0006463a) tabs_2_passive_pane_g1

0xa63e,	// (0x00064642) tabs_2_passive_pane_t1

0x86f3,	// (0x000626f7) bg_active_tab_pane_cp4

0xa650,	// (0x00064654) tabs_2_long_active_pane_t1

0x196e,	// (0x0005b972) bg_passive_tab_pane_cp4

0x03a1,	// (0x0005a3a5) list_single_midp_graphic_pane_g4_ParamLimits

0x86f3,	// (0x000626f7) bg_active_tab_pane_cp5

0xa663,	// (0x00064667) tabs_3_long_active_pane_t1

0x196e,	// (0x0005b972) bg_passive_tab_pane_cp5

0x03a1,	// (0x0005a3a5) list_single_midp_graphic_pane_g4

0x86f3,	// (0x000626f7) bg_popup_window_pane_cp13_ParamLimits

0x86f3,	// (0x000626f7) bg_popup_window_pane_cp13

0x8e77,	// (0x00062e7b) listscroll_popup_fast_pane_ParamLimits

0x8e77,	// (0x00062e7b) listscroll_popup_fast_pane

0x8e86,	// (0x00062e8a) grid_popup_fast_pane_ParamLimits

0x8e86,	// (0x00062e8a) grid_popup_fast_pane

0x8e98,	// (0x00062e9c) scroll_pane_cp9_ParamLimits

0x8e98,	// (0x00062e9c) scroll_pane_cp9

0x55de,	// (0x0005f5e2) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x55de,	// (0x0005f5e2) list_single_graphic_hl_pane_t1_cp2

0x8ebc,	// (0x00062ec0) input_focus_pane_cp20_ParamLimits

0x8ebc,	// (0x00062ec0) input_focus_pane_cp20

0x8eca,	// (0x00062ece) query_popup_data_pane_t1_ParamLimits

0x8eca,	// (0x00062ece) query_popup_data_pane_t1

0x8edd,	// (0x00062ee1) query_popup_data_pane_t2_ParamLimits

0x8edd,	// (0x00062ee1) query_popup_data_pane_t2

0x8f23,	// (0x00062f27) query_popup_data_pane_t3_ParamLimits

0x8f23,	// (0x00062f27) query_popup_data_pane_t3

0x8f64,	// (0x00062f68) query_popup_data_pane_t4_ParamLimits

0x8f64,	// (0x00062f68) query_popup_data_pane_t4

0x8fa0,	// (0x00062fa4) query_popup_data_pane_t5_ParamLimits

0x8fa0,	// (0x00062fa4) query_popup_data_pane_t5

0x0004,

0xf6b1,	// (0x000696b5) query_popup_data_pane_t_ParamLimits

0xf6b1,	// (0x000696b5) query_popup_data_pane_t

0x8d63,	// (0x00062d67) bg_set_opt_pane_g1

0x8d6b,	// (0x00062d6f) bg_set_opt_pane_g2

0x8d73,	// (0x00062d77) bg_set_opt_pane_g3

0x8d7b,	// (0x00062d7f) bg_set_opt_pane_g4

0x8d83,	// (0x00062d87) bg_set_opt_pane_g5

0x8d8b,	// (0x00062d8f) bg_set_opt_pane_g6

0x8d93,	// (0x00062d97) bg_set_opt_pane_g7

0x8d9b,	// (0x00062d9f) bg_set_opt_pane_g8

0x8da3,	// (0x00062da7) bg_set_opt_pane_g9

0x0008,

0xf6bc,	// (0x000696c0) bg_set_opt_pane_g

0xf344,	// (0x00069348) control_top_pane_stacon_ParamLimits

0xf344,	// (0x00069348) control_top_pane_stacon

0xf397,	// (0x0006939b) signal_pane_stacon_ParamLimits

0xf397,	// (0x0006939b) signal_pane_stacon

0xe337,	// (0x0006833b) stacon_top_pane_g1_ParamLimits

0xe337,	// (0x0006833b) stacon_top_pane_g1

0xf3bc,	// (0x000693c0) title_pane_stacon_ParamLimits

0xf3bc,	// (0x000693c0) title_pane_stacon

0xf3e6,	// (0x000693ea) uni_indicator_pane_stacon_ParamLimits

0xf3e6,	// (0x000693ea) uni_indicator_pane_stacon

0xf3fe,	// (0x00069402) battery_pane_stacon_ParamLimits

0xf3fe,	// (0x00069402) battery_pane_stacon

0xf442,	// (0x00069446) control_bottom_pane_stacon_ParamLimits

0xf442,	// (0x00069446) control_bottom_pane_stacon

0xf465,	// (0x00069469) navi_pane_stacon_ParamLimits

0xf465,	// (0x00069469) navi_pane_stacon

0xe359,	// (0x0006835d) stacon_bottom_pane_g1_ParamLimits

0xe359,	// (0x0006835d) stacon_bottom_pane_g1

0xf0aa,	// (0x000690ae) aid_levels_signal_lsc_ParamLimits

0xf0aa,	// (0x000690ae) aid_levels_signal_lsc

0xf0c1,	// (0x000690c5) signal_pane_stacon_g1_ParamLimits

0xf0c1,	// (0x000690c5) signal_pane_stacon_g1

0xf0d5,	// (0x000690d9) signal_pane_stacon_g2_ParamLimits

0xf0d5,	// (0x000690d9) signal_pane_stacon_g2

0x0001,

0xf6cf,	// (0x000696d3) signal_pane_stacon_g_ParamLimits

0xf6cf,	// (0x000696d3) signal_pane_stacon_g

0xf10a,	// (0x0006910e) title_pane_stacon_t1_ParamLimits

0xf10a,	// (0x0006910e) title_pane_stacon_t1

0x8fe4,	// (0x00062fe8) uni_indicator_pane_stacon_g1

0x8fee,	// (0x00062ff2) uni_indicator_pane_stacon_g2

0x8ff8,	// (0x00062ffc) uni_indicator_pane_stacon_g3

0x9002,	// (0x00063006) uni_indicator_pane_stacon_g4

0x0003,

0xf6db,	// (0x000696df) uni_indicator_pane_stacon_g

0xf12f,	// (0x00069133) control_top_pane_stacon_g1

0xf137,	// (0x0006913b) control_top_pane_stacon_t1_ParamLimits

0xf137,	// (0x0006913b) control_top_pane_stacon_t1

0xf16e,	// (0x00069172) aid_levels_battery_lsc_ParamLimits

0xf16e,	// (0x00069172) aid_levels_battery_lsc

0xf186,	// (0x0006918a) battery_pane_stacon_g1_ParamLimits

0xf186,	// (0x0006918a) battery_pane_stacon_g1

0xf199,	// (0x0006919d) battery_pane_stacon_g2_ParamLimits

0xf199,	// (0x0006919d) battery_pane_stacon_g2

0x0001,

0xf6e4,	// (0x000696e8) battery_pane_stacon_g_ParamLimits

0xf6e4,	// (0x000696e8) battery_pane_stacon_g

0xf1d7,	// (0x000691db) navi_icon_pane_stacon

0xf1eb,	// (0x000691ef) navi_navi_pane_stacon

0xf1d7,	// (0x000691db) navi_text_pane_stacon

0xf12f,	// (0x00069133) control_bottom_pane_stacon_g1

0xf201,	// (0x00069205) control_bottom_pane_stacon_t1_ParamLimits

0xf201,	// (0x00069205) control_bottom_pane_stacon_t1

0xa675,	// (0x00064679) grid_app_pane_ParamLimits

0xa675,	// (0x00064679) grid_app_pane

0xa6ad,	// (0x000646b1) scroll_pane_cp15_ParamLimits

0xa6ad,	// (0x000646b1) scroll_pane_cp15

0xa6c6,	// (0x000646ca) cell_app_pane_ParamLimits

0xa6c6,	// (0x000646ca) cell_app_pane

0xa713,	// (0x00064717) cell_app_pane_g1_ParamLimits

0xa713,	// (0x00064717) cell_app_pane_g1

0x9026,	// (0x0006302a) cell_app_pane_g2_ParamLimits

0x9026,	// (0x0006302a) cell_app_pane_g2

0x0001,

0xf6e9,	// (0x000696ed) cell_app_pane_g_ParamLimits

0xf6e9,	// (0x000696ed) cell_app_pane_g

0x9032,	// (0x00063036) cell_app_pane_t1_ParamLimits

0x9032,	// (0x00063036) cell_app_pane_t1

0x9049,	// (0x0006304d) grid_highlight_pane_ParamLimits

0x9049,	// (0x0006304d) grid_highlight_pane

0x8d63,	// (0x00062d67) cell_highlight_pane_g1

0x8d6b,	// (0x00062d6f) cell_highlight_pane_g2

0x8d73,	// (0x00062d77) cell_highlight_pane_g3

0x8d7b,	// (0x00062d7f) cell_highlight_pane_g4

0x8d83,	// (0x00062d87) cell_highlight_pane_g5

0x8d8b,	// (0x00062d8f) cell_highlight_pane_g6

0x8d93,	// (0x00062d97) cell_highlight_pane_g7

0x8d9b,	// (0x00062d9f) cell_highlight_pane_g8

0x8da3,	// (0x00062da7) cell_highlight_pane_g9

0x5452,	// (0x0005f456) cell_highlight_pane_g10

0x0009,

0xf697,	// (0x0006969b) cell_highlight_pane_g

0x905a,	// (0x0006305e) bg_scroll_pane

0xf242,	// (0x00069246) scroll_handle_pane

0xbfad,	// (0x00065fb1) scroll_bg_pane_g1

0xbfc2,	// (0x00065fc6) scroll_bg_pane_g2

0xbfda,	// (0x00065fde) scroll_bg_pane_g3

0x0002,

0xf6ee,	// (0x000696f2) scroll_bg_pane_g

0xbfef,	// (0x00065ff3) scroll_handle_focus_pane_ParamLimits

0xbfef,	// (0x00065ff3) scroll_handle_focus_pane

0xbfad,	// (0x00065fb1) scroll_handle_pane_g1

0xbffc,	// (0x00066000) scroll_handle_pane_g2

0xbfda,	// (0x00065fde) scroll_handle_pane_g3

0x0002,

0xf6f5,	// (0x000696f9) scroll_handle_pane_g

0x8db4,	// (0x00062db8) bg_popup_sub_pane_cp21_ParamLimits

0x8db4,	// (0x00062db8) bg_popup_sub_pane_cp21

0xc010,	// (0x00066014) popup_fep_japan_predictive_window_t1_ParamLimits

0xc010,	// (0x00066014) popup_fep_japan_predictive_window_t1

0xc027,	// (0x0006602b) popup_fep_japan_predictive_window_t2_ParamLimits

0xc027,	// (0x0006602b) popup_fep_japan_predictive_window_t2

0xc05a,	// (0x0006605e) popup_fep_japan_predictive_window_t3_ParamLimits

0xc05a,	// (0x0006605e) popup_fep_japan_predictive_window_t3

0x0002,

0xf6fc,	// (0x00069700) popup_fep_japan_predictive_window_t_ParamLimits

0xf6fc,	// (0x00069700) popup_fep_japan_predictive_window_t

0x545c,	// (0x0005f460) bg_popup_sub_pane_cp23

0xc091,	// (0x00066095) listscroll_japin_cand_pane

0xc099,	// (0x0006609d) popup_fep_japan_candidate_window_t1

0xc0a7,	// (0x000660ab) candidate_pane_ParamLimits

0xc0a7,	// (0x000660ab) candidate_pane

0xc0b9,	// (0x000660bd) scroll_pane_cp30

0xc0c3,	// (0x000660c7) list_single_popup_jap_candidate_pane_ParamLimits

0xc0c3,	// (0x000660c7) list_single_popup_jap_candidate_pane

0x545c,	// (0x0005f460) list_highlight_pane_cp30

0xc0d7,	// (0x000660db) list_single_popup_jap_candidate_pane_t1

0xa73c,	// (0x00064740) level_1_signal

0xa74e,	// (0x00064752) level_2_signal

0xa761,	// (0x00064765) level_3_signal

0xa774,	// (0x00064778) level_4_signal

0xa787,	// (0x0006478b) level_5_signal

0xa79a,	// (0x0006479e) level_6_signal

0xa7ad,	// (0x000647b1) level_7_signal

0xa73c,	// (0x00064740) level_1_battery

0xa74e,	// (0x00064752) level_2_battery

0xa761,	// (0x00064765) level_3_battery

0xa774,	// (0x00064778) level_4_battery

0xa787,	// (0x0006478b) level_5_battery

0xa79a,	// (0x0006479e) level_6_battery

0xa7ad,	// (0x000647b1) level_7_battery

0xc0fe,	// (0x00066102) list_menu_pane_ParamLimits

0xc0fe,	// (0x00066102) list_menu_pane

0xc114,	// (0x00066118) scroll_pane_cp25_ParamLimits

0xc114,	// (0x00066118) scroll_pane_cp25

0xc12d,	// (0x00066131) list_double2_graphic_pane_cp2_ParamLimits

0xc12d,	// (0x00066131) list_double2_graphic_pane_cp2

0xc12d,	// (0x00066131) list_double2_large_graphic_pane_cp2_ParamLimits

0xc12d,	// (0x00066131) list_double2_large_graphic_pane_cp2

0xc12d,	// (0x00066131) list_double2_pane_cp2_ParamLimits

0xc12d,	// (0x00066131) list_double2_pane_cp2

0xc12d,	// (0x00066131) list_double_graphic_pane_cp2_ParamLimits

0xc12d,	// (0x00066131) list_double_graphic_pane_cp2

0xc12d,	// (0x00066131) list_double_large_graphic_pane_cp2_ParamLimits

0xc12d,	// (0x00066131) list_double_large_graphic_pane_cp2

0xc12d,	// (0x00066131) list_double_number_pane_cp2_ParamLimits

0xc12d,	// (0x00066131) list_double_number_pane_cp2

0xc12d,	// (0x00066131) list_double_pane_cp2_ParamLimits

0xc12d,	// (0x00066131) list_double_pane_cp2

0xa7d3,	// (0x000647d7) list_single_2graphic_pane_cp2_ParamLimits

0xa7d3,	// (0x000647d7) list_single_2graphic_pane_cp2

0xa7d3,	// (0x000647d7) list_single_graphic_heading_pane_cp2_ParamLimits

0xa7d3,	// (0x000647d7) list_single_graphic_heading_pane_cp2

0xa7d3,	// (0x000647d7) list_single_graphic_pane_cp2_ParamLimits

0xa7d3,	// (0x000647d7) list_single_graphic_pane_cp2

0xa7d3,	// (0x000647d7) list_single_heading_pane_cp2_ParamLimits

0xa7d3,	// (0x000647d7) list_single_heading_pane_cp2

0xc13d,	// (0x00066141) list_single_large_graphic_pane_cp2_ParamLimits

0xc13d,	// (0x00066141) list_single_large_graphic_pane_cp2

0xa7d3,	// (0x000647d7) list_single_number_heading_pane_cp2_ParamLimits

0xa7d3,	// (0x000647d7) list_single_number_heading_pane_cp2

0xa7d3,	// (0x000647d7) list_single_number_pane_cp2_ParamLimits

0xa7d3,	// (0x000647d7) list_single_number_pane_cp2

0xa7d3,	// (0x000647d7) list_single_pane_cp2_ParamLimits

0xa7d3,	// (0x000647d7) list_single_pane_cp2

0xe1ca,	// (0x000681ce) bg_popup_sub_pane_cp22

0xf2f4,	// (0x000692f8) popup_side_volume_key_window_g1

0xf31e,	// (0x00069322) popup_side_volume_key_window_t1

0xf33c,	// (0x00069340) volume_small_pane_cp1

0x54b6,	// (0x0005f4ba) bg_popup_sub_pane_cp24_ParamLimits

0x54b6,	// (0x0005f4ba) bg_popup_sub_pane_cp24

0xe1e0,	// (0x000681e4) fep_china_uni_candidate_pane_ParamLimits

0xe1e0,	// (0x000681e4) fep_china_uni_candidate_pane

0xe1f4,	// (0x000681f8) fep_china_uni_entry_pane

0xe204,	// (0x00068208) popup_fep_china_uni_window_g1

0xe220,	// (0x00068224) fep_china_uni_entry_pane_g1

0xe22a,	// (0x0006822e) fep_china_uni_entry_pane_g2

0x0001,

0xf72d,	// (0x00069731) fep_china_uni_entry_pane_g

0xe234,	// (0x00068238) fep_entry_item_pane

0xe23e,	// (0x00068242) fep_candidate_item_pane

0xe246,	// (0x0006824a) fep_china_uni_candidate_pane_g1

0xe250,	// (0x00068254) fep_china_uni_candidate_pane_g2

0xe258,	// (0x0006825c) fep_china_uni_candidate_pane_g3

0xe260,	// (0x00068264) fep_china_uni_candidate_pane_g4

0x0003,

0xf732,	// (0x00069736) fep_china_uni_candidate_pane_g

0x5452,	// (0x0005f456) fep_entry_item_pane_g1

0xe26a,	// (0x0006826e) fep_entry_item_pane_t1_ParamLimits

0xe26a,	// (0x0006826e) fep_entry_item_pane_t1

0xe280,	// (0x00068284) fep_candidate_item_pane_t1_ParamLimits

0xe280,	// (0x00068284) fep_candidate_item_pane_t1

0xe295,	// (0x00068299) fep_candidate_item_pane_t2_ParamLimits

0xe295,	// (0x00068299) fep_candidate_item_pane_t2

0x0001,

0xf73b,	// (0x0006973f) fep_candidate_item_pane_t_ParamLimits

0xf73b,	// (0x0006973f) fep_candidate_item_pane_t

0x86f3,	// (0x000626f7) list_highlight_pane_cp31_ParamLimits

0x86f3,	// (0x000626f7) list_highlight_pane_cp31

0xe2a7,	// (0x000682ab) level_1_signal_lsc

0xe2b0,	// (0x000682b4) level_2_signal_lsc

0xe2b9,	// (0x000682bd) level_3_signal_lsc

0xe2c2,	// (0x000682c6) level_4_signal_lsc

0xe2cb,	// (0x000682cf) level_5_signal_lsc

0xe2d4,	// (0x000682d8) level_6_signal_lsc

0xe2dd,	// (0x000682e1) level_7_signal_lsc

0xe2dd,	// (0x000682e1) level_1_battery_lsc

0xe2e6,	// (0x000682ea) level_2_battery_lsc

0xe2ef,	// (0x000682f3) level_3_battery_lsc

0xe2f8,	// (0x000682fc) level_4_battery_lsc

0xe301,	// (0x00068305) level_5_battery_lsc

0xe30a,	// (0x0006830e) level_6_battery_lsc

0xe2a7,	// (0x000682ab) level_7_battery_lsc

0xe313,	// (0x00068317) scroll_handle_focus_pane_g1

0xe31c,	// (0x00068320) scroll_handle_focus_pane_g2

0xe325,	// (0x00068329) scroll_handle_focus_pane_g3

0x0002,

0xf740,	// (0x00069744) scroll_handle_focus_pane_g

0xa865,	// (0x00064869) list_single_2graphic_pane_g1_ParamLimits

0xa865,	// (0x00064869) list_single_2graphic_pane_g1

0xa048,	// (0x0006404c) list_single_2graphic_pane_g2_ParamLimits

0xa048,	// (0x0006404c) list_single_2graphic_pane_g2

0x0368,	// (0x0005a36c) list_single_2graphic_pane_g3_ParamLimits

0x0368,	// (0x0005a36c) list_single_2graphic_pane_g3

0xa871,	// (0x00064875) list_single_2graphic_pane_g4_ParamLimits

0xa871,	// (0x00064875) list_single_2graphic_pane_g4

0x0003,

0xf747,	// (0x0006974b) list_single_2graphic_pane_g_ParamLimits

0xf747,	// (0x0006974b) list_single_2graphic_pane_g

0xa882,	// (0x00064886) list_single_2graphic_pane_t1_ParamLimits

0xa882,	// (0x00064886) list_single_2graphic_pane_t1

0xa8b0,	// (0x000648b4) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa8b0,	// (0x000648b4) list_double2_graphic_large_graphic_pane_g1

0xa25e,	// (0x00064262) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa25e,	// (0x00064262) list_double2_graphic_large_graphic_pane_g2

0xa19f,	// (0x000641a3) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa19f,	// (0x000641a3) list_double2_graphic_large_graphic_pane_g3

0xa8c2,	// (0x000648c6) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa8c2,	// (0x000648c6) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf750,	// (0x00069754) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf750,	// (0x00069754) list_double2_graphic_large_graphic_pane_g

0xa8ce,	// (0x000648d2) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa8ce,	// (0x000648d2) list_double2_graphic_large_graphic_pane_t1

0xa8e4,	// (0x000648e8) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa8e4,	// (0x000648e8) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf759,	// (0x0006975d) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf759,	// (0x0006975d) list_double2_graphic_large_graphic_pane_t

0xe3b7,	// (0x000683bb) popup_fast_swap_window_ParamLimits

0xe3b7,	// (0x000683bb) popup_fast_swap_window

0xe3d5,	// (0x000683d9) popup_side_volume_key_window

0xe3f3,	// (0x000683f7) stacon_top_pane

0xe3fd,	// (0x00068401) status_pane_ParamLimits

0xe3fd,	// (0x00068401) status_pane

0xe3f3,	// (0x000683f7) status_small_pane

0x545c,	// (0x0005f460) control_pane

0x545c,	// (0x0005f460) stacon_bottom_pane

0x8ceb,	// (0x00062cef) scroll_pane_cp121

0x8ce2,	// (0x00062ce6) set_content_pane

0xa8f6,	// (0x000648fa) bg_active_tab_pane_g1_cp1

0xe32e,	// (0x00068332) bg_active_tab_pane_g2_cp1

0xa8ff,	// (0x00064903) bg_active_tab_pane_g3_cp1

0xa8f6,	// (0x000648fa) bg_passive_tab_pane_g1_cp1

0xe32e,	// (0x00068332) bg_passive_tab_pane_g2_cp1

0xa8ff,	// (0x00064903) bg_passive_tab_pane_g3_cp1

0xa908,	// (0x0006490c) bg_active_tab_pane_g1_cp2

0xe32e,	// (0x00068332) bg_active_tab_pane_g2_cp2

0xa911,	// (0x00064915) bg_active_tab_pane_g3_cp2

0xa908,	// (0x0006490c) bg_passive_tab_pane_g1_cp2

0xe32e,	// (0x00068332) bg_passive_tab_pane_g2_cp2

0xa911,	// (0x00064915) bg_passive_tab_pane_g3_cp2

0xa91a,	// (0x0006491e) bg_active_tab_pane_g1_cp3

0xe32e,	// (0x00068332) bg_active_tab_pane_g2_cp3

0xa923,	// (0x00064927) bg_active_tab_pane_g3_cp3

0xa91a,	// (0x0006491e) bg_passive_tab_pane_g1_cp3

0xe32e,	// (0x00068332) bg_passive_tab_pane_g2_cp3

0xa923,	// (0x00064927) bg_passive_tab_pane_g3_cp3

0xa92c,	// (0x00064930) bg_active_tab_pane_g1_cp4

0xe32e,	// (0x00068332) bg_active_tab_pane_g2_cp4

0xa935,	// (0x00064939) bg_active_tab_pane_g3_cp4

0xa92c,	// (0x00064930) bg_passive_tab_pane_g1_cp4

0xe32e,	// (0x00068332) bg_passive_tab_pane_g2_cp4

0xa935,	// (0x00064939) bg_passive_tab_pane_g3_cp4

0xe375,	// (0x00068379) bg_active_tab_pane_g1_cp5

0xe32e,	// (0x00068332) bg_active_tab_pane_g2_cp5

0xe37e,	// (0x00068382) bg_active_tab_pane_g3_cp5

0xe375,	// (0x00068379) bg_passive_tab_pane_g1_cp5

0xe32e,	// (0x00068332) bg_passive_tab_pane_g2_cp5

0xe37e,	// (0x00068382) bg_passive_tab_pane_g3_cp5

0x41aa,	// (0x0005e1ae) list_set_graphic_pane_ParamLimits

0x41aa,	// (0x0005e1ae) list_set_graphic_pane

0x545c,	// (0x0005f460) bg_set_opt_pane_cp4

0xa93e,	// (0x00064942) list_set_graphic_pane_g1_ParamLimits

0xa93e,	// (0x00064942) list_set_graphic_pane_g1

0xa94a,	// (0x0006494e) list_set_graphic_pane_g2_ParamLimits

0xa94a,	// (0x0006494e) list_set_graphic_pane_g2

0x0001,

0xf75e,	// (0x00069762) list_set_graphic_pane_g_ParamLimits

0xf75e,	// (0x00069762) list_set_graphic_pane_g

0x0009,

0xfae6,	// (0x00069aea) volume_small_pane_cp_g

0xa96e,	// (0x00064972) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa96e,	// (0x00064972) list_double2_large_graphic_pane_g1_cp2

0xa97c,	// (0x00064980) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xa97c,	// (0x00064980) list_double2_large_graphic_pane_g2_cp2

0xe387,	// (0x0006838b) list_double2_large_graphic_pane_g3_cp2

0xe38f,	// (0x00068393) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xe38f,	// (0x00068393) list_double2_large_graphic_pane_t1_cp2

0xe3a5,	// (0x000683a9) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xe3a5,	// (0x000683a9) list_double2_large_graphic_pane_t2_cp2

0xc482,	// (0x00066486) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc482,	// (0x00066486) list_double_large_graphic_pane_g1_cp2

0xc495,	// (0x00066499) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xc495,	// (0x00066499) list_double_large_graphic_pane_g2_cp2

0xe4de,	// (0x000684e2) list_double_large_graphic_pane_g3_cp2

0x373d,	// (0x0005d741) list_double_large_graphic_pane_g4_cp

0x3745,	// (0x0005d749) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3745,	// (0x0005d749) list_double_large_graphic_pane_t1_cp2

0x375c,	// (0x0005d760) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x375c,	// (0x0005d760) list_double_large_graphic_pane_t2_cp2

0xa98d,	// (0x00064991) list_double2_graphic_pane_g1_cp2_ParamLimits

0xa98d,	// (0x00064991) list_double2_graphic_pane_g1_cp2

0xa99b,	// (0x0006499f) list_double2_graphic_pane_g2_cp2_ParamLimits

0xa99b,	// (0x0006499f) list_double2_graphic_pane_g2_cp2

0xa9ac,	// (0x000649b0) list_double2_graphic_pane_g3_cp2

0xe40b,	// (0x0006840f) list_double2_graphic_pane_t1_cp2_ParamLimits

0xe40b,	// (0x0006840f) list_double2_graphic_pane_t1_cp2

0xe421,	// (0x00068425) list_double2_graphic_pane_t2_cp2_ParamLimits

0xe421,	// (0x00068425) list_double2_graphic_pane_t2_cp2

0xe433,	// (0x00068437) list_single_number_heading_pane_g1_cp2_ParamLimits

0xe433,	// (0x00068437) list_single_number_heading_pane_g1_cp2

0xe43f,	// (0x00068443) list_single_number_heading_pane_g2_cp2

0xe447,	// (0x0006844b) list_single_number_heading_pane_t1_cp2_ParamLimits

0xe447,	// (0x0006844b) list_single_number_heading_pane_t1_cp2

0xa9b6,	// (0x000649ba) list_single_number_heading_pane_t2_cp2_ParamLimits

0xa9b6,	// (0x000649ba) list_single_number_heading_pane_t2_cp2

0xe45d,	// (0x00068461) list_single_number_heading_pane_t3_cp2_ParamLimits

0xe45d,	// (0x00068461) list_single_number_heading_pane_t3_cp2

0xe433,	// (0x00068437) list_single_heading_pane_g1_cp2_ParamLimits

0xe433,	// (0x00068437) list_single_heading_pane_g1_cp2

0xe43f,	// (0x00068443) list_single_heading_pane_g2_cp2

0xe447,	// (0x0006844b) list_single_heading_pane_t1_cp2_ParamLimits

0xe447,	// (0x0006844b) list_single_heading_pane_t1_cp2

0xc46e,	// (0x00066472) list_single_heading_pane_t2_cp2_ParamLimits

0xc46e,	// (0x00066472) list_single_heading_pane_t2_cp2

0x32bb,	// (0x0005d2bf) list_double_graphic_pane_g1_cp2_ParamLimits

0x32bb,	// (0x0005d2bf) list_double_graphic_pane_g1_cp2

0x32c7,	// (0x0005d2cb) list_double_graphic_pane_g2_cp2_ParamLimits

0x32c7,	// (0x0005d2cb) list_double_graphic_pane_g2_cp2

0x32d6,	// (0x0005d2da) list_double_graphic_pane_g3_cp2

0x32de,	// (0x0005d2e2) list_double_graphic_pane_t1_cp2_ParamLimits

0x32de,	// (0x0005d2e2) list_double_graphic_pane_t1_cp2

0x32f4,	// (0x0005d2f8) list_double_graphic_pane_t2_cp2_ParamLimits

0x32f4,	// (0x0005d2f8) list_double_graphic_pane_t2_cp2

0xe4d2,	// (0x000684d6) list_double_number_pane_g1_cp2_ParamLimits

0xe4d2,	// (0x000684d6) list_double_number_pane_g1_cp2

0xe4de,	// (0x000684e2) list_double_number_pane_g2_cp2

0xc408,	// (0x0006640c) list_double_number_pane_t1_cp2_ParamLimits

0xc408,	// (0x0006640c) list_double_number_pane_t1_cp2

0x3293,	// (0x0005d297) list_double_number_pane_t2_cp2_ParamLimits

0x3293,	// (0x0005d297) list_double_number_pane_t2_cp2

0x32a9,	// (0x0005d2ad) list_double_number_pane_t3_cp2_ParamLimits

0x32a9,	// (0x0005d2ad) list_double_number_pane_t3_cp2

0xc356,	// (0x0006635a) list_single_graphic_pane_g1_cp2_ParamLimits

0xc356,	// (0x0006635a) list_single_graphic_pane_g1_cp2

0xe51e,	// (0x00068522) list_single_graphic_pane_g2_cp2_ParamLimits

0xe51e,	// (0x00068522) list_single_graphic_pane_g2_cp2

0xf494,	// (0x00069498) list_single_graphic_pane_g3_cp2

0x313e,	// (0x0005d142) list_single_graphic_pane_t1_cp2_ParamLimits

0x313e,	// (0x0005d142) list_single_graphic_pane_t1_cp2

0xe51e,	// (0x00068522) list_single_number_pane_g1_cp2_ParamLimits

0xe51e,	// (0x00068522) list_single_number_pane_g1_cp2

0xf494,	// (0x00069498) list_single_number_pane_g2_cp2

0x313e,	// (0x0005d142) list_single_number_pane_t1_cp2_ParamLimits

0x313e,	// (0x0005d142) list_single_number_pane_t1_cp2

0xc342,	// (0x00066346) list_single_number_pane_t2_cp2_ParamLimits

0xc342,	// (0x00066346) list_single_number_pane_t2_cp2

0xa97c,	// (0x00064980) list_double2_pane_g1_cp2_ParamLimits

0xa97c,	// (0x00064980) list_double2_pane_g1_cp2

0xe387,	// (0x0006838b) list_double2_pane_g2_cp2

0xe4aa,	// (0x000684ae) list_double2_pane_t1_cp2_ParamLimits

0xe4aa,	// (0x000684ae) list_double2_pane_t1_cp2

0xe4c0,	// (0x000684c4) list_double2_pane_t2_cp2_ParamLimits

0xe4c0,	// (0x000684c4) list_double2_pane_t2_cp2

0xe4d2,	// (0x000684d6) list_double_pane_g1_cp2_ParamLimits

0xe4d2,	// (0x000684d6) list_double_pane_g1_cp2

0xe4de,	// (0x000684e2) list_double_pane_g2_cp2

0xe4e6,	// (0x000684ea) list_double_pane_t1_cp2_ParamLimits

0xe4e6,	// (0x000684ea) list_double_pane_t1_cp2

0xe4fc,	// (0x00068500) list_double_pane_t2_cp2_ParamLimits

0xe4fc,	// (0x00068500) list_double_pane_t2_cp2

0xe50e,	// (0x00068512) list_single_pane_cp2_g3

0xe51e,	// (0x00068522) list_single_pane_g1_cp2_ParamLimits

0xe51e,	// (0x00068522) list_single_pane_g1_cp2

0xf494,	// (0x00069498) list_single_pane_g2_cp2

0xf49c,	// (0x000694a0) list_single_pane_t1_cp2_ParamLimits

0xf49c,	// (0x000694a0) list_single_pane_t1_cp2

0xa9e4,	// (0x000649e8) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa9e4,	// (0x000649e8) list_single_large_graphic_pane_g1_cp2

0xf488,	// (0x0006948c) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xf488,	// (0x0006948c) list_single_large_graphic_pane_g2_cp2

0xf4b4,	// (0x000694b8) list_single_large_graphic_pane_g3_cp2

0xf4bc,	// (0x000694c0) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xf4bc,	// (0x000694c0) list_single_large_graphic_pane_g4_cp1

0xf4d6,	// (0x000694da) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xf4d6,	// (0x000694da) list_single_large_graphic_pane_t1_cp2

0x3108,	// (0x0005d10c) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3108,	// (0x0005d10c) list_single_graphic_heading_pane_g1_cp2

0xc31d,	// (0x00066321) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xc31d,	// (0x00066321) list_single_graphic_heading_pane_g4_cp2

0xf494,	// (0x00069498) list_single_graphic_heading_pane_g5_cp2

0x3114,	// (0x0005d118) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3114,	// (0x0005d118) list_single_graphic_heading_pane_t1_cp2

0xc32e,	// (0x00066332) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xc32e,	// (0x00066332) list_single_graphic_heading_pane_t2_cp2

0x30c9,	// (0x0005d0cd) list_single_2graphic_pane_g1_cp2_ParamLimits

0x30c9,	// (0x0005d0cd) list_single_2graphic_pane_g1_cp2

0xc31d,	// (0x00066321) list_single_2graphic_pane_g2_cp2_ParamLimits

0xc31d,	// (0x00066321) list_single_2graphic_pane_g2_cp2

0xf494,	// (0x00069498) list_single_2graphic_pane_g3_cp2

0x30e6,	// (0x0005d0ea) list_single_2graphic_pane_g4_cp2_ParamLimits

0x30e6,	// (0x0005d0ea) list_single_2graphic_pane_g4_cp2

0x30f2,	// (0x0005d0f6) list_single_2graphic_pane_t1_cp2_ParamLimits

0x30f2,	// (0x0005d0f6) list_single_2graphic_pane_t1_cp2

0x5452,	// (0x0005f456) list_highlight_pane_g10_cp1

0x2ca1,	// (0x0005cca5) list_highlight_pane_g1_cp1

0x2ca9,	// (0x0005ccad) list_highlight_pane_g2_cp1

0x2cb1,	// (0x0005ccb5) list_highlight_pane_g3_cp1

0x2cb9,	// (0x0005ccbd) list_highlight_pane_g4_cp1

0x2cc1,	// (0x0005ccc5) list_highlight_pane_g5_cp1

0x2cc9,	// (0x0005cccd) list_highlight_pane_g6_cp1

0x2cd1,	// (0x0005ccd5) list_highlight_pane_g7_cp1

0x2cd9,	// (0x0005ccdd) list_highlight_pane_g8_cp1

0x2ce1,	// (0x0005cce5) list_highlight_pane_g9_cp1

0xc2e3,	// (0x000662e7) form_field_slider_pane_t3

0xc2f1,	// (0x000662f5) form_field_slider_pane_t4

0x2bdd,	// (0x0005cbe1) slider_form_pane_ParamLimits

0x2bdd,	// (0x0005cbe1) slider_form_pane

0x545c,	// (0x0005f460) control_abbreviations

0x545c,	// (0x0005f460) control_conventions

0x545c,	// (0x0005f460) control_definitions

0x545c,	// (0x0005f460) format_table_attribute

0x33c9,	// (0x0005d3cd) bg_popup_preview_window_pane_g9

0x545c,	// (0x0005f460) format_table_data2

0x545c,	// (0x0005f460) format_table_data3

0x545c,	// (0x0005f460) format_table_data_example

0x0008,

0x545c,	// (0x0005f460) intro_purpose

0xf8f5,	// (0x000698f9) bg_popup_preview_window_pane_g

0x545c,	// (0x0005f460) texts_category

0x545c,	// (0x0005f460) texts_graphics

0xf4ec,	// (0x000694f0) text_digital

0xf4fb,	// (0x000694ff) text_primary

0xf50a,	// (0x0006950e) text_primary_small

0xf519,	// (0x0006951d) text_secondary

0xf528,	// (0x0006952c) text_title

0x3cef,	// (0x0005dcf3) bg_passive_tab_pane_g1_cp3_srt

0xe32e,	// (0x00068332) bg_passive_tab_pane_g2_cp3_srt

0x3cf8,	// (0x0005dcfc) bg_passive_tab_pane_g3_cp3_srt

0x54b6,	// (0x0005f4ba) bg_active_tab_pane_cp3_srt_ParamLimits

0x54b6,	// (0x0005f4ba) bg_active_tab_pane_cp3_srt

0x3d01,	// (0x0005dd05) tabs_4_active_pane_srt_g1

0xc7a2,	// (0x000667a6) tabs_4_active_pane_srt_t1_ParamLimits

0xc7a2,	// (0x000667a6) tabs_4_active_pane_srt_t1

0x3cef,	// (0x0005dcf3) bg_active_tab_pane_g1_cp3_copy1

0xe32e,	// (0x00068332) bg_active_tab_pane_g2_cp3_copy1

0x3cf8,	// (0x0005dcfc) bg_active_tab_pane_g3_cp3_copy1

0x86f3,	// (0x000626f7) tabs_2_long_active_pane_srt_ParamLimits

0x86f3,	// (0x000626f7) tabs_2_long_active_pane_srt

0x86f3,	// (0x000626f7) tabs_2_long_passive_pane_srt_ParamLimits

0x86f3,	// (0x000626f7) tabs_2_long_passive_pane_srt

0x196e,	// (0x0005b972) bg_passive_tab_pane_cp4_srt_ParamLimits

0x196e,	// (0x0005b972) bg_passive_tab_pane_cp4_srt

0x39b9,	// (0x0005d9bd) bg_passive_tab_pane_g1_cp4_srt

0xe32e,	// (0x00068332) bg_passive_tab_pane_g2_cp4_srt

0x39c2,	// (0x0005d9c6) bg_passive_tab_pane_g3_cp4_srt

0x86f3,	// (0x000626f7) bg_active_tab_pane_cp4_srt_ParamLimits

0x86f3,	// (0x000626f7) bg_active_tab_pane_cp4_srt

0xc57f,	// (0x00066583) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc57f,	// (0x00066583) tabs_2_long_active_pane_srt_t1

0x39b9,	// (0x0005d9bd) bg_active_tab_pane_g1_cp4_srt

0xe32e,	// (0x00068332) bg_active_tab_pane_g2_cp4_srt

0x39c2,	// (0x0005d9c6) bg_active_tab_pane_g3_cp4_srt

0x54b6,	// (0x0005f4ba) tabs_3_long_active_pane_srt_ParamLimits

0x54b6,	// (0x0005f4ba) tabs_3_long_active_pane_srt

0x54b6,	// (0x0005f4ba) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x54b6,	// (0x0005f4ba) tabs_3_long_passive_pane_cp_srt

0x54b6,	// (0x0005f4ba) tabs_3_long_passive_pane_srt_ParamLimits

0x54b6,	// (0x0005f4ba) tabs_3_long_passive_pane_srt

0x196e,	// (0x0005b972) bg_passive_tab_pane_cp5_srt_ParamLimits

0x196e,	// (0x0005b972) bg_passive_tab_pane_cp5_srt

0xe375,	// (0x00068379) bg_passive_tab_pane_g1_cp5_srt

0xe32e,	// (0x00068332) bg_passive_tab_pane_g2_cp5_srt

0xe37e,	// (0x00068382) bg_passive_tab_pane_g3_cp5_srt

0x86f3,	// (0x000626f7) bg_active_tab_pane_cp5_srt_ParamLimits

0x86f3,	// (0x000626f7) bg_active_tab_pane_cp5_srt

0xc569,	// (0x0006656d) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc569,	// (0x0006656d) tabs_3_long_active_pane_srt_t1

0xe375,	// (0x00068379) bg_active_tab_pane_g1_cp5_srt

0xe32e,	// (0x00068332) bg_active_tab_pane_g2_cp5_srt

0xe37e,	// (0x00068382) bg_active_tab_pane_g3_cp5_srt

0x3999,	// (0x0005d99d) navi_text_pane_srt_t1

0x3991,	// (0x0005d995) navi_icon_pane_srt_g1

0x01c8,	// (0x0005a1cc) midp_editing_number_pane_srt

0xf537,	// (0x0006953b) midp_ticker_pane_srt

0x01d0,	// (0x0005a1d4) midp_ticker_pane_srt_g1

0x01d8,	// (0x0005a1dc) midp_ticker_pane_srt_g2

0x0001,

0xf77d,	// (0x00069781) midp_ticker_pane_srt_g

0x01e0,	// (0x0005a1e4) midp_ticker_pane_srt_t1

0x3982,	// (0x0005d986) midp_editing_number_pane_t1_copy1

0x196e,	// (0x0005b972) listscroll_midp_pane

0x196e,	// (0x0005b972) midp_form_pane

0xf53f,	// (0x00069543) midp_info_popup_window_ParamLimits

0xf53f,	// (0x00069543) midp_info_popup_window

0x8db4,	// (0x00062db8) bg_popup_sub_pane_cp50_ParamLimits

0x8db4,	// (0x00062db8) bg_popup_sub_pane_cp50

0x28d7,	// (0x0005c8db) listscroll_midp_info_pane_ParamLimits

0x28d7,	// (0x0005c8db) listscroll_midp_info_pane

0x28bf,	// (0x0005c8c3) listscroll_form_midp_pane_ParamLimits

0x28bf,	// (0x0005c8c3) listscroll_form_midp_pane

0x28cb,	// (0x0005c8cf) scroll_bar_cp050

0xc2d7,	// (0x000662db) list_midp_pane

0x478a,	// (0x0005e78e) signal_pane_g2_cp

0x27d9,	// (0x0005c7dd) listscroll_midp_info_pane_t1_ParamLimits

0x27d9,	// (0x0005c7dd) listscroll_midp_info_pane_t1

0x27f1,	// (0x0005c7f5) listscroll_midp_info_pane_t2_ParamLimits

0x27f1,	// (0x0005c7f5) listscroll_midp_info_pane_t2

0x282f,	// (0x0005c833) listscroll_midp_info_pane_t3_ParamLimits

0x282f,	// (0x0005c833) listscroll_midp_info_pane_t3

0x2869,	// (0x0005c86d) listscroll_midp_info_pane_t4_ParamLimits

0x2869,	// (0x0005c86d) listscroll_midp_info_pane_t4

0x0003,

0xf830,	// (0x00069834) listscroll_midp_info_pane_t_ParamLimits

0xf830,	// (0x00069834) listscroll_midp_info_pane_t

0x8e34,	// (0x00062e38) scroll_pane_cp21

0x2773,	// (0x0005c777) form_midp_field_choice_group_pane

0x277c,	// (0x0005c780) form_midp_field_text_pane

0x27bf,	// (0x0005c7c3) form_midp_field_time_pane

0x27c7,	// (0x0005c7cb) form_midp_gauge_slider_pane

0x27d0,	// (0x0005c7d4) form_midp_gauge_wait_pane

0x545c,	// (0x0005f460) form_midp_image_pane

0xb72c,	// (0x00065730) list_single_midp_pane_ParamLimits

0xb72c,	// (0x00065730) list_single_midp_pane

0xc2af,	// (0x000662b3) form_midp_field_text_pane_t1

0x2523,	// (0x0005c527) input_focus_pane_cp050

0x2762,	// (0x0005c766) list_midp_form_text_pane

0x2706,	// (0x0005c70a) form_midp_field_choice_group_pane_t1

0x2714,	// (0x0005c718) input_focus_pane_cp051

0x2728,	// (0x0005c72c) list_midp_choice_pane

0x545c,	// (0x0005f460) status_idle_pane

0x26ea,	// (0x0005c6ee) form_midp_field_time_pane_t1

0x5452,	// (0x0005f456) wait_anim_pane_g2_copy1

0x26f8,	// (0x0005c6fc) form_midp_field_time_pane_t2

0x0001,

0x007d,	// (0x0005a081) aid_navinavi_width_2_pane

0xf82b,	// (0x0006982f) form_midp_field_time_pane_t

0x545c,	// (0x0005f460) input_focus_pane_cp052

0x545c,	// (0x0005f460) bg_input_focus_pane_cp040

0x26aa,	// (0x0005c6ae) form_midp_gauge_slider_pane_t1

0x26b8,	// (0x0005c6bc) form_midp_gauge_slider_pane_t2

0xc293,	// (0x00066297) form_midp_gauge_slider_pane_t3

0xc2a1,	// (0x000662a5) form_midp_gauge_slider_pane_t4

0x0003,

0xf822,	// (0x00069826) form_midp_gauge_slider_pane_t

0x26e2,	// (0x0005c6e6) form_midp_slider_pane

0x86f3,	// (0x000626f7) bg_input_focus_pane_cp041_ParamLimits

0x86f3,	// (0x000626f7) bg_input_focus_pane_cp041

0x2677,	// (0x0005c67b) form_midp_gauge_wait_pane_t1_ParamLimits

0x2677,	// (0x0005c67b) form_midp_gauge_wait_pane_t1

0x2689,	// (0x0005c68d) form_midp_gauge_wait_pane_t2_ParamLimits

0x2689,	// (0x0005c68d) form_midp_gauge_wait_pane_t2

0x0001,

0xf81d,	// (0x00069821) form_midp_gauge_wait_pane_t_ParamLimits

0xf81d,	// (0x00069821) form_midp_gauge_wait_pane_t

0x269b,	// (0x0005c69f) form_midp_wait_pane_ParamLimits

0x269b,	// (0x0005c69f) form_midp_wait_pane

0x263f,	// (0x0005c643) form_midp_image_pane_g1

0x2648,	// (0x0005c64c) form_midp_image_pane_t1

0x2657,	// (0x0005c65b) form_midp_image_pane_t2

0x2666,	// (0x0005c66a) form_midp_image_pane_t3

0x0002,

0xf816,	// (0x0006981a) form_midp_image_pane_t

0x2636,	// (0x0005c63a) list_single_midp_pane_g1

0xe66a,	// (0x0006866e) list_single_midp_pane_t1

0xc27c,	// (0x00066280) list_midp_form_item_pane_ParamLimits

0xc27c,	// (0x00066280) list_midp_form_item_pane

0x0025,	// (0x0005a029) list_midp_form_item_pane_t1

0x0034,	// (0x0005a038) midp_ticker_pane_g1

0x0040,	// (0x0005a044) midp_ticker_pane_g2

0x0001,

0xf763,	// (0x00069767) midp_ticker_pane_g

0xaa89,	// (0x00064a8d) midp_ticker_pane_t1

0xc70e,	// (0x00066712) midp_editing_number_pane_t1

0x3bd3,	// (0x0005dbd7) midp_editing_number_pane

0x3be2,	// (0x0005dbe6) midp_ticker_pane

0x3972,	// (0x0005d976) ai_message_heading_pane

0x545c,	// (0x0005f460) bg_popup_window_pane_cp14

0x397a,	// (0x0005d97e) listscroll_ai_message_pane

0x38f8,	// (0x0005d8fc) ai_message_heading_pane_g1_ParamLimits

0x38f8,	// (0x0005d8fc) ai_message_heading_pane_g1

0x3904,	// (0x0005d908) ai_message_heading_pane_g2_ParamLimits

0x3904,	// (0x0005d908) ai_message_heading_pane_g2

0x3912,	// (0x0005d916) ai_message_heading_pane_g3_ParamLimits

0x3912,	// (0x0005d916) ai_message_heading_pane_g3

0x391e,	// (0x0005d922) ai_message_heading_pane_g4_ParamLimits

0x391e,	// (0x0005d922) ai_message_heading_pane_g4

0x0003,

0xf957,	// (0x0006995b) ai_message_heading_pane_g_ParamLimits

0xf957,	// (0x0006995b) ai_message_heading_pane_g

0x392a,	// (0x0005d92e) ai_message_heading_pane_t1_ParamLimits

0x392a,	// (0x0005d92e) ai_message_heading_pane_t1

0x3944,	// (0x0005d948) ai_message_heading_pane_t2_ParamLimits

0x3944,	// (0x0005d948) ai_message_heading_pane_t2

0x0001,

0xf960,	// (0x00069964) ai_message_heading_pane_t_ParamLimits

0xf960,	// (0x00069964) ai_message_heading_pane_t

0x3958,	// (0x0005d95c) bg_popup_heading_pane_cp1_ParamLimits

0x3958,	// (0x0005d95c) bg_popup_heading_pane_cp1

0x38e6,	// (0x0005d8ea) list_ai_message_pane_ParamLimits

0x38e6,	// (0x0005d8ea) list_ai_message_pane

0x8e34,	// (0x00062e38) scroll_pane_cp10

0x3882,	// (0x0005d886) list_ai_message_pane_g1

0x388a,	// (0x0005d88e) list_ai_message_pane_g2

0x0001,

0xf934,	// (0x00069938) list_ai_message_pane_g

0x3892,	// (0x0005d896) list_ai_message_pane_t1_ParamLimits

0x3892,	// (0x0005d896) list_ai_message_pane_t1

0x38a7,	// (0x0005d8ab) list_ai_message_pane_t2_ParamLimits

0x38a7,	// (0x0005d8ab) list_ai_message_pane_t2

0x38bc,	// (0x0005d8c0) list_ai_message_pane_t3_ParamLimits

0x38bc,	// (0x0005d8c0) list_ai_message_pane_t3

0x38d1,	// (0x0005d8d5) list_ai_message_pane_t4_ParamLimits

0x38d1,	// (0x0005d8d5) list_ai_message_pane_t4

0x0003,

0xf939,	// (0x0006993d) list_ai_message_pane_t_ParamLimits

0xf939,	// (0x0006993d) list_ai_message_pane_t

0xc54f,	// (0x00066553) cell_ai_soft_ind_pane_ParamLimits

0xc54f,	// (0x00066553) cell_ai_soft_ind_pane

0x005e,	// (0x0005a062) cell_ai_soft_ind_pane_g1_ParamLimits

0x005e,	// (0x0005a062) cell_ai_soft_ind_pane_g1

0x545c,	// (0x0005f460) grid_highlight_cp1

0x006b,	// (0x0005a06f) text_secondary_cp56_ParamLimits

0x006b,	// (0x0005a06f) text_secondary_cp56

0x3840,	// (0x0005d844) example_general_pane_ParamLimits

0x3840,	// (0x0005d844) example_general_pane

0x384c,	// (0x0005d850) example_parent_pane_g1_ParamLimits

0x384c,	// (0x0005d850) example_parent_pane_g1

0x3858,	// (0x0005d85c) example_parent_pane_t1_ParamLimits

0x3858,	// (0x0005d85c) example_parent_pane_t1

0xb06e,	// (0x00065072) popup_preview_text_window_ParamLimits

0xb06e,	// (0x00065072) popup_preview_text_window

0xe516,	// (0x0006851a) list_single_pane_cp2_g4

0x88ce,	// (0x000628d2) bg_popup_preview_window_pane_ParamLimits

0x88ce,	// (0x000628d2) bg_popup_preview_window_pane

0x33d3,	// (0x0005d3d7) popup_preview_text_window_t1_ParamLimits

0x33d3,	// (0x0005d3d7) popup_preview_text_window_t1

0x33f1,	// (0x0005d3f5) popup_preview_text_window_t2_ParamLimits

0x33f1,	// (0x0005d3f5) popup_preview_text_window_t2

0x343a,	// (0x0005d43e) popup_preview_text_window_t3_ParamLimits

0x343a,	// (0x0005d43e) popup_preview_text_window_t3

0x361f,	// (0x0005d623) popup_preview_text_window_t4_ParamLimits

0x361f,	// (0x0005d623) popup_preview_text_window_t4

0x0004,

0xf908,	// (0x0006990c) popup_preview_text_window_t_ParamLimits

0xf908,	// (0x0006990c) popup_preview_text_window_t

0x369d,	// (0x0005d6a1) scroll_pane_cp11

0x24af,	// (0x0005c4b3) bg_popup_preview_window_pane_g1

0x3387,	// (0x0005d38b) bg_popup_preview_window_pane_g2

0x3391,	// (0x0005d395) bg_popup_preview_window_pane_g3

0x339b,	// (0x0005d39f) bg_popup_preview_window_pane_g4

0x33a5,	// (0x0005d3a9) bg_popup_preview_window_pane_g5

0x33af,	// (0x0005d3b3) bg_popup_preview_window_pane_g6

0x33b7,	// (0x0005d3bb) bg_popup_preview_window_pane_g7

0x33bf,	// (0x0005d3c3) bg_popup_preview_window_pane_g8

0xdfb5,	// (0x00067fb9) aid_popup_width_pane

0xafde,	// (0x00064fe2) popup_midp_note_alarm_window_ParamLimits

0xafde,	// (0x00064fe2) popup_midp_note_alarm_window

0x8cfc,	// (0x00062d00) data_form_pane_ParamLimits

0xa4dd,	// (0x000644e1) form_field_data_pane_g1

0xa4e7,	// (0x000644eb) form_field_data_pane_t1_ParamLimits

0x8d08,	// (0x00062d0c) input_focus_pane_ParamLimits

0xe124,	// (0x00068128) data_form_wide_pane_ParamLimits

0xe135,	// (0x00068139) form_field_data_wide_pane_g1

0xe141,	// (0x00068145) form_field_data_wide_pane_t1_ParamLimits

0x8a83,	// (0x00062a87) input_focus_pane_cp6_ParamLimits

0xa628,	// (0x0006462c) input_popup_find_pane_g1_ParamLimits

0xa628,	// (0x0006462c) input_popup_find_pane_g1

0xf1aa,	// (0x000691ae) aid_navi_side_left_pane

0xf1bf,	// (0x000691c3) aid_navi_side_right_pane

0x2d9c,	// (0x0005cda0) bg_popup_window_pane_cp30_ParamLimits

0x2d9c,	// (0x0005cda0) bg_popup_window_pane_cp30

0x2e16,	// (0x0005ce1a) popup_midp_note_alarm_window_g1_ParamLimits

0x2e16,	// (0x0005ce1a) popup_midp_note_alarm_window_g1

0x2e46,	// (0x0005ce4a) popup_midp_note_alarm_window_t1_ParamLimits

0x2e46,	// (0x0005ce4a) popup_midp_note_alarm_window_t1

0x2ee7,	// (0x0005ceeb) popup_midp_note_alarm_window_t2_ParamLimits

0x2ee7,	// (0x0005ceeb) popup_midp_note_alarm_window_t2

0x2f95,	// (0x0005cf99) popup_midp_note_alarm_window_t3_ParamLimits

0x2f95,	// (0x0005cf99) popup_midp_note_alarm_window_t3

0x2fc7,	// (0x0005cfcb) popup_midp_note_alarm_window_t4_ParamLimits

0x2fc7,	// (0x0005cfcb) popup_midp_note_alarm_window_t4

0x2fed,	// (0x0005cff1) popup_midp_note_alarm_window_t5_ParamLimits

0x2fed,	// (0x0005cff1) popup_midp_note_alarm_window_t5

0x000a,

0xf8a5,	// (0x000698a9) popup_midp_note_alarm_window_t_ParamLimits

0xf8a5,	// (0x000698a9) popup_midp_note_alarm_window_t

0x3099,	// (0x0005d09d) wait_bar_pane_cp1_ParamLimits

0x3099,	// (0x0005d09d) wait_bar_pane_cp1

0x545c,	// (0x0005f460) wait_anim_pane_copy1

0x545c,	// (0x0005f460) wait_border_pane_copy1

0x2a81,	// (0x0005ca85) wait_border_pane_g1_copy1

0xe15b,	// (0x0006815f) form_field_popup_pane_g1

0xa501,	// (0x00064505) form_field_popup_pane_t1_ParamLimits

0x8d08,	// (0x00062d0c) input_focus_pane_cp7_ParamLimits

0x8d36,	// (0x00062d3a) list_form_pane_ParamLimits

0xe163,	// (0x00068167) form_field_popup_wide_pane_g1

0xe16b,	// (0x0006816f) form_field_popup_wide_pane_t1_ParamLimits

0x8d08,	// (0x00062d0c) input_focus_pane_cp8_ParamLimits

0x8d42,	// (0x00062d46) list_form_wide_pane_ParamLimits

0x3d7c,	// (0x0005dd80) aid_size_cell_graphic_pane

0xa580,	// (0x00064584) data_form_pane_t1_ParamLimits

0xb8c1,	// (0x000658c5) data_form_wide_pane_t1_ParamLimits

0xb472,	// (0x00065476) bg_status_flat_pane

0x9c42,	// (0x00063c46) title_pane_t1_ParamLimits

0x547e,	// (0x0005f482) title_pane_t2_ParamLimits

0x54a4,	// (0x0005f4a8) title_pane_t3_ParamLimits

0xf55d,	// (0x00069561) title_pane_t_ParamLimits

0xa73c,	// (0x00064740) level_1_signal_ParamLimits

0xa74e,	// (0x00064752) level_2_signal_ParamLimits

0xa761,	// (0x00064765) level_3_signal_ParamLimits

0xa774,	// (0x00064778) level_4_signal_ParamLimits

0xa787,	// (0x0006478b) level_5_signal_ParamLimits

0xa79a,	// (0x0006479e) level_6_signal_ParamLimits

0xa7ad,	// (0x000647b1) level_7_signal_ParamLimits

0xa73c,	// (0x00064740) level_1_battery_ParamLimits

0xa74e,	// (0x00064752) level_2_battery_ParamLimits

0xa761,	// (0x00064765) level_3_battery_ParamLimits

0xa774,	// (0x00064778) level_4_battery_ParamLimits

0xa787,	// (0x0006478b) level_5_battery_ParamLimits

0xa79a,	// (0x0006479e) level_6_battery_ParamLimits

0xa7ad,	// (0x000647b1) level_7_battery_ParamLimits

0x2ca1,	// (0x0005cca5) bg_status_flat_pane_g1

0x2ca9,	// (0x0005ccad) bg_status_flat_pane_g2

0x2cb1,	// (0x0005ccb5) bg_status_flat_pane_g3

0x2cb9,	// (0x0005ccbd) bg_status_flat_pane_g4

0x2cc1,	// (0x0005ccc5) bg_status_flat_pane_g5

0x2cc9,	// (0x0005cccd) bg_status_flat_pane_g6

0x2cd1,	// (0x0005ccd5) bg_status_flat_pane_g7

0x9cd6,	// (0x00063cda) tabs_3_active_pane_t1_ParamLimits

0x9cd6,	// (0x00063cda) tabs_3_passive_pane_t1_ParamLimits

0x9cf0,	// (0x00063cf4) tabs_4_active_pane_t1_ParamLimits

0x9cf0,	// (0x00063cf4) tabs_4_1_passive_pane_t1_ParamLimits

0xa63e,	// (0x00064642) tabs_2_active_pane_t1_ParamLimits

0xa63e,	// (0x00064642) tabs_2_passive_pane_t1_ParamLimits

0x86f3,	// (0x000626f7) bg_active_tab_pane_cp4_ParamLimits

0xa650,	// (0x00064654) tabs_2_long_active_pane_t1_ParamLimits

0x196e,	// (0x0005b972) bg_passive_tab_pane_cp4_ParamLimits

0x03d4,	// (0x0005a3d8) list_single_midp_graphic_pane_t1_ParamLimits

0x86f3,	// (0x000626f7) bg_active_tab_pane_cp5_ParamLimits

0xa663,	// (0x00064667) tabs_3_long_active_pane_t1_ParamLimits

0x196e,	// (0x0005b972) bg_passive_tab_pane_cp5_ParamLimits

0x03d4,	// (0x0005a3d8) list_single_midp_graphic_pane_t1

0xb472,	// (0x00065476) bg_status_flat_pane_ParamLimits

0x2127,	// (0x0005c12b) indicator_pane_cp2_ParamLimits

0x2127,	// (0x0005c12b) indicator_pane_cp2

0xb608,	// (0x0006560c) navi_pane_srt_ParamLimits

0xb608,	// (0x0006560c) navi_pane_srt

0x228e,	// (0x0005c292) popup_clock_digital_analogue_window_cp1

0x8737,	// (0x0006273b) indicator_pane_t1

0xf537,	// (0x0006953b) copy_highlight_pane

0xf537,	// (0x0006953b) cursor_graphics_pane

0xf537,	// (0x0006953b) graphic_within_text_pane

0xf537,	// (0x0006953b) link_highlight_pane

0x3660,	// (0x0005d664) popup_preview_text_window_t5_ParamLimits

0x3660,	// (0x0005d664) popup_preview_text_window_t5

0x0087,	// (0x0005a08b) cursor_digital_pane

0x0087,	// (0x0005a08b) cursor_primary_pane

0x0098,	// (0x0005a09c) cursor_primary_small_pane

0x00a0,	// (0x0005a0a4) cursor_secondary_pane

0x00a8,	// (0x0005a0ac) cursor_title_pane

0x0087,	// (0x0005a08b) link_highlight_digital_pane

0x008f,	// (0x0005a093) link_highlight_primary_pane

0x0098,	// (0x0005a09c) link_highlight_primary_small_pane

0x00a0,	// (0x0005a0a4) link_highlight_secondary_pane

0x00a8,	// (0x0005a0ac) link_highlight_title_pane

0x0087,	// (0x0005a08b) copy_highlight_digital_pane

0x0087,	// (0x0005a08b) copy_highlight_primary_pane

0x0098,	// (0x0005a09c) copy_highlight_primary_small_pane

0x00a0,	// (0x0005a0a4) copy_highlight_secondary_pane

0x00a8,	// (0x0005a0ac) copy_highlight_title_pane

0x00a0,	// (0x0005a0a4) graphic_text_digital_pane

0x2d3f,	// (0x0005cd43) graphic_text_primary_pane

0x2d48,	// (0x0005cd4c) graphic_text_primary_small_pane

0x0098,	// (0x0005a09c) graphic_text_secondary_pane

0x0087,	// (0x0005a08b) graphic_text_title_pane

0xaa9b,	// (0x00064a9f) cursor_primary_pane_g1

0x2d31,	// (0x0005cd35) cursor_text_primary_t1

0xc313,	// (0x00066317) cursor_primary_small_pane_g1

0x2d23,	// (0x0005cd27) cursor_text_primary_small_t1

0xc309,	// (0x0006630d) cursor_primary_small_pane_g1_copy1

0x2d0b,	// (0x0005cd0f) cursor_text_primary_small_t1_copy1

0x2ce9,	// (0x0005cced) cursor_text_title_t1

0xc2ff,	// (0x00066303) cursor_title_pane_g1

0xaa9b,	// (0x00064a9f) cursor_digital_pane_g1

0x00ba,	// (0x0005a0be) cursor_text_digital_t1

0x00c8,	// (0x0005a0cc) link_highlight_primary_pane_g1

0x2c92,	// (0x0005cc96) link_highlight_primary_pane_t1

0x00c8,	// (0x0005a0cc) link_highlight_primary_small_pane_g1

0x00d0,	// (0x0005a0d4) link_highlight_primary_small_pane_t1

0x00df,	// (0x0005a0e3) link_highlight_secondary_pane_g1

0x00e7,	// (0x0005a0eb) link_highlight_secondary_pane_t1

0x2c06,	// (0x0005cc0a) link_highlight_title_pane_g1

0x2c0e,	// (0x0005cc12) link_highlight_title_pane_t1

0x2bef,	// (0x0005cbf3) link_highlight_digital_pane_g1

0x2bf7,	// (0x0005cbfb) link_highlight_digital_pane_t1

0x2ab7,	// (0x0005cabb) copy_highlight_primary_pane_g1

0x2ace,	// (0x0005cad2) copy_highlight_primary_pane_t1

0x2ab7,	// (0x0005cabb) copy_highlight_primary_small_pane_g1

0x2abf,	// (0x0005cac3) copy_highlight_primary_small_pane_t1

0x00f6,	// (0x0005a0fa) copy_highlight_secondary_pane_g1

0x00fe,	// (0x0005a102) copy_highlight_secondary_pane_t1

0x2aa0,	// (0x0005caa4) copy_highlight_title_pane_g1

0x2aa8,	// (0x0005caac) copy_highlight_title_pane_t1

0x2ab7,	// (0x0005cabb) copy_highlight_digital_pane_g1

0x3f4c,	// (0x0005df50) copy_highlight_digital_pane_t1

0x3ea0,	// (0x0005dea4) graphic_text_primary_pane_g1

0x3f30,	// (0x0005df34) graphic_text_primary_pane_t1

0x3f3e,	// (0x0005df42) graphic_text_primary_pane_t2

0x0001,

0xf9d4,	// (0x000699d8) graphic_text_primary_pane_t

0x3f0c,	// (0x0005df10) graphic_text_primary_small_pane_g1

0x3f14,	// (0x0005df18) graphic_text_primary_small_pane_t1

0x3f22,	// (0x0005df26) graphic_text_primary_small_pane_t2

0x0001,

0xf9cf,	// (0x000699d3) graphic_text_primary_small_pane_t

0x3ee8,	// (0x0005deec) graphic_text_secondary_pane_g1

0x3ef0,	// (0x0005def4) graphic_text_secondary_pane_t1

0x3efe,	// (0x0005df02) graphic_text_secondary_pane_t2

0x0001,

0xf9ca,	// (0x000699ce) graphic_text_secondary_pane_t

0x3ec4,	// (0x0005dec8) graphic_text_title_pane_g1

0x3ecc,	// (0x0005ded0) graphic_text_title_pane_t1

0x3eda,	// (0x0005dede) graphic_text_title_pane_t2

0x0001,

0xf9c5,	// (0x000699c9) graphic_text_title_pane_t

0x3ea0,	// (0x0005dea4) graphic_text_digital_pane_g1

0x3ea8,	// (0x0005deac) graphic_text_digital_pane_t1

0x3eb6,	// (0x0005deba) graphic_text_digital_pane_t2

0x0001,

0xf9c0,	// (0x000699c4) graphic_text_digital_pane_t

0x86f3,	// (0x000626f7) navi_icon_pane_srt_ParamLimits

0x86f3,	// (0x000626f7) navi_icon_pane_srt

0x545c,	// (0x0005f460) navi_midp_pane_srt

0x545c,	// (0x0005f460) navi_navi_pane_srt

0x86f3,	// (0x000626f7) navi_text_pane_srt_ParamLimits

0x86f3,	// (0x000626f7) navi_text_pane_srt

0x3e6b,	// (0x0005de6f) navi_navi_icon_text_pane_srt

0x3e73,	// (0x0005de77) navi_navi_pane_srt_g1_ParamLimits

0x3e73,	// (0x0005de77) navi_navi_pane_srt_g1

0x3e85,	// (0x0005de89) navi_navi_pane_srt_g2_ParamLimits

0x3e85,	// (0x0005de89) navi_navi_pane_srt_g2

0x0001,

0xf9bb,	// (0x000699bf) navi_navi_pane_srt_g_ParamLimits

0xf9bb,	// (0x000699bf) navi_navi_pane_srt_g

0x3e97,	// (0x0005de9b) navi_navi_tabs_pane_srt

0x3e6b,	// (0x0005de6f) navi_navi_text_pane_srt

0x3e6b,	// (0x0005de6f) navi_navi_volume_pane_srt

0x3e5c,	// (0x0005de60) navi_navi_text_pane_srt_t1

0x081b,	// (0x0005a81f) navi_navi_volume_pane_srt_g1

0x0823,	// (0x0005a827) volume_small_pane_srt_ParamLimits

0x0823,	// (0x0005a827) volume_small_pane_srt

0x010d,	// (0x0005a111) volume_small_pane_srt_g1_ParamLimits

0x010d,	// (0x0005a111) volume_small_pane_srt_g1

0x011d,	// (0x0005a121) volume_small_pane_srt_g2_ParamLimits

0x011d,	// (0x0005a121) volume_small_pane_srt_g2

0x012e,	// (0x0005a132) volume_small_pane_srt_g3_ParamLimits

0x012e,	// (0x0005a132) volume_small_pane_srt_g3

0x013f,	// (0x0005a143) volume_small_pane_srt_g4_ParamLimits

0x013f,	// (0x0005a143) volume_small_pane_srt_g4

0x0150,	// (0x0005a154) volume_small_pane_srt_g5_ParamLimits

0x0150,	// (0x0005a154) volume_small_pane_srt_g5

0x0161,	// (0x0005a165) volume_small_pane_srt_g6_ParamLimits

0x0161,	// (0x0005a165) volume_small_pane_srt_g6

0x0172,	// (0x0005a176) volume_small_pane_srt_g7_ParamLimits

0x0172,	// (0x0005a176) volume_small_pane_srt_g7

0x0183,	// (0x0005a187) volume_small_pane_srt_g8_ParamLimits

0x0183,	// (0x0005a187) volume_small_pane_srt_g8

0x0194,	// (0x0005a198) volume_small_pane_srt_g9_ParamLimits

0x0194,	// (0x0005a198) volume_small_pane_srt_g9

0x01a5,	// (0x0005a1a9) volume_small_pane_srt_g10_ParamLimits

0x01a5,	// (0x0005a1a9) volume_small_pane_srt_g10

0x0009,

0xf768,	// (0x0006976c) volume_small_pane_srt_g_ParamLimits

0xf768,	// (0x0006976c) volume_small_pane_srt_g

0x8983,	// (0x00062987) query_popup_data_pane_cp2

0x3e42,	// (0x0005de46) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3e42,	// (0x0005de46) navi_navi_icon_text_pane_srt_t1

0x2d3f,	// (0x0005cd43) navi_tabs_2_long_pane_srt

0x2d3f,	// (0x0005cd43) navi_tabs_2_pane_srt

0x2d3f,	// (0x0005cd43) navi_tabs_3_long_pane_srt

0x2d3f,	// (0x0005cd43) navi_tabs_3_pane_srt

0x2d3f,	// (0x0005cd43) navi_tabs_4_pane_srt

0x07fb,	// (0x0005a7ff) tabs_2_active_pane_srt_ParamLimits

0x07fb,	// (0x0005a7ff) tabs_2_active_pane_srt

0x080b,	// (0x0005a80f) tabs_2_passive_pane_srt_ParamLimits

0x080b,	// (0x0005a80f) tabs_2_passive_pane_srt

0x2523,	// (0x0005c527) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2523,	// (0x0005c527) bg_passive_tab_pane_cp1_srt

0x3e0e,	// (0x0005de12) bg_passive_tab_pane_g1_cp1_srt

0xe32e,	// (0x00068332) bg_passive_tab_pane_g2_cp1_srt

0x3e17,	// (0x0005de1b) bg_passive_tab_pane_g3_cp1_srt

0x54b6,	// (0x0005f4ba) bg_active_tab_pane_cp1_srt_ParamLimits

0x54b6,	// (0x0005f4ba) bg_active_tab_pane_cp1_srt

0x3e20,	// (0x0005de24) tabs_2_active_pane_srt_g1

0xc823,	// (0x00066827) tabs_2_active_pane_srt_t1_ParamLimits

0xc823,	// (0x00066827) tabs_2_active_pane_srt_t1

0x3e0e,	// (0x0005de12) bg_active_tab_pane_g1_cp1_srt

0xe32e,	// (0x00068332) bg_active_tab_pane_g2_cp1_srt

0x3e17,	// (0x0005de1b) bg_active_tab_pane_g3_cp1_srt

0x07c8,	// (0x0005a7cc) tabs_3_active_pane_srt_ParamLimits

0x07c8,	// (0x0005a7cc) tabs_3_active_pane_srt

0x07d9,	// (0x0005a7dd) tabs_3_passive_pane_cp_srt_ParamLimits

0x07d9,	// (0x0005a7dd) tabs_3_passive_pane_cp_srt

0x07ea,	// (0x0005a7ee) tabs_3_passive_pane_srt_ParamLimits

0x07ea,	// (0x0005a7ee) tabs_3_passive_pane_srt

0x2523,	// (0x0005c527) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2523,	// (0x0005c527) bg_passive_tab_pane_cp2_srt

0x01b6,	// (0x0005a1ba) bg_passive_tab_pane_g1_cp2_srt

0xe32e,	// (0x00068332) bg_passive_tab_pane_g2_cp2_srt

0x01bf,	// (0x0005a1c3) bg_passive_tab_pane_g3_cp2_srt

0x54b6,	// (0x0005f4ba) bg_active_tab_pane_cp2_srt_ParamLimits

0x54b6,	// (0x0005f4ba) bg_active_tab_pane_cp2_srt

0x3df4,	// (0x0005ddf8) tabs_3_active_pane_srt_g1

0xc80d,	// (0x00066811) tabs_3_active_pane_srt_t1_ParamLimits

0xc80d,	// (0x00066811) tabs_3_active_pane_srt_t1

0x01b6,	// (0x0005a1ba) bg_active_tab_pane_g1_cp2_srt

0xe32e,	// (0x00068332) bg_active_tab_pane_g2_cp2_srt

0x01bf,	// (0x0005a1c3) bg_active_tab_pane_g3_cp2_srt

0x0780,	// (0x0005a784) tabs_4_active_pane_srt_ParamLimits

0x0780,	// (0x0005a784) tabs_4_active_pane_srt

0x0792,	// (0x0005a796) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0792,	// (0x0005a796) tabs_4_passive_pane_cp2_srt

0x1904,	// (0x0005b908) aid_size_cell_toolbar

0x3a2c,	// (0x0005da30) main_idle_act_pane_ParamLimits

0x1b37,	// (0x0005bb3b) popup_large_graphic_colour_window_ParamLimits

0xb334,	// (0x00065338) popup_toolbar_window_ParamLimits

0xb334,	// (0x00065338) popup_toolbar_window

0x3c04,	// (0x0005dc08) list_single_graphic_2heading_pane_ParamLimits

0x3c04,	// (0x0005dc08) list_single_graphic_2heading_pane

0x900c,	// (0x00063010) aid_size_cell_apps_grid_lsc_pane

0x901e,	// (0x00063022) aid_size_cell_apps_grid_prt_pane

0x196e,	// (0x0005b972) bg_wml_button_pane_cp1_ParamLimits

0x196e,	// (0x0005b972) bg_wml_button_pane_cp1

0xc2af,	// (0x000662b3) form_midp_field_text_pane_t1_ParamLimits

0x2523,	// (0x0005c527) input_focus_pane_cp050_ParamLimits

0x2762,	// (0x0005c766) list_midp_form_text_pane_ParamLimits

0x2714,	// (0x0005c718) input_focus_pane_cp051_ParamLimits

0x2728,	// (0x0005c72c) list_midp_choice_pane_ParamLimits

0xc266,	// (0x0006626a) list_single_2graphic_pane_cp3_ParamLimits

0xc266,	// (0x0006626a) list_single_2graphic_pane_cp3

0x4aad,	// (0x0005eab1) list_single_midp_graphic_pane_ParamLimits

0x4aad,	// (0x0005eab1) list_single_midp_graphic_pane

0xe542,	// (0x00068546) list_single_graphic_2heading_pane_g1_ParamLimits

0xe542,	// (0x00068546) list_single_graphic_2heading_pane_g1

0xe54e,	// (0x00068552) list_single_graphic_2heading_pane_g4_ParamLimits

0xe54e,	// (0x00068552) list_single_graphic_2heading_pane_g4

0xe55a,	// (0x0006855e) list_single_graphic_2heading_pane_g5_ParamLimits

0xe55a,	// (0x0006855e) list_single_graphic_2heading_pane_g5

0x0002,

0xf7bb,	// (0x000697bf) list_single_graphic_2heading_pane_g_ParamLimits

0xf7bb,	// (0x000697bf) list_single_graphic_2heading_pane_g

0xe566,	// (0x0006856a) list_single_graphic_2heading_pane_t1_ParamLimits

0xe566,	// (0x0006856a) list_single_graphic_2heading_pane_t1

0xe57a,	// (0x0006857e) list_single_graphic_2heading_pane_t2_ParamLimits

0xe57a,	// (0x0006857e) list_single_graphic_2heading_pane_t2

0xe596,	// (0x0006859a) list_single_graphic_2heading_pane_t3_ParamLimits

0xe596,	// (0x0006859a) list_single_graphic_2heading_pane_t3

0x0002,

0xf7c2,	// (0x000697c6) list_single_graphic_2heading_pane_t_ParamLimits

0xf7c2,	// (0x000697c6) list_single_graphic_2heading_pane_t

0x23ed,	// (0x0005c3f1) bg_popup_sub_pane_cp2

0x2417,	// (0x0005c41b) grid_toobar_pane

0x0338,	// (0x0005a33c) cell_toolbar_pane_ParamLimits

0x0338,	// (0x0005a33c) cell_toolbar_pane

0x2453,	// (0x0005c457) cell_toolbar_pane_g1_ParamLimits

0x2453,	// (0x0005c457) cell_toolbar_pane_g1

0x2467,	// (0x0005c46b) cell_toolbar_pane_g2_ParamLimits

0x2467,	// (0x0005c46b) cell_toolbar_pane_g2

0x0001,

0xf7d0,	// (0x000697d4) cell_toolbar_pane_g_ParamLimits

0xf7d0,	// (0x000697d4) cell_toolbar_pane_g

0x2489,	// (0x0005c48d) grid_highlight_pane_cp2_ParamLimits

0x2489,	// (0x0005c48d) grid_highlight_pane_cp2

0x24a3,	// (0x0005c4a7) toolbar_button_pane

0x24af,	// (0x0005c4b3) toolbar_button_pane_g1

0x24b7,	// (0x0005c4bb) toolbar_button_pane_g2

0x24bf,	// (0x0005c4c3) toolbar_button_pane_g3

0x24c7,	// (0x0005c4cb) toolbar_button_pane_g4

0x24cf,	// (0x0005c4d3) toolbar_button_pane_g5

0x24d7,	// (0x0005c4db) toolbar_button_pane_g6

0x24df,	// (0x0005c4e3) toolbar_button_pane_g7

0x24e7,	// (0x0005c4eb) toolbar_button_pane_g8

0x24ef,	// (0x0005c4f3) toolbar_button_pane_g9

0x0009,

0xf7d5,	// (0x000697d9) toolbar_button_pane_g

0x037c,	// (0x0005a380) list_single_2graphic_pane_g1_cp3_ParamLimits

0x037c,	// (0x0005a380) list_single_2graphic_pane_g1_cp3

0xb6ba,	// (0x000656be) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb6ba,	// (0x000656be) list_single_2graphic_pane_g2_cp3

0x0399,	// (0x0005a39d) list_single_2graphic_pane_g3_cp3

0x03a1,	// (0x0005a3a5) list_single_2graphic_pane_g4_cp3_ParamLimits

0x03a1,	// (0x0005a3a5) list_single_2graphic_pane_g4_cp3

0x03ad,	// (0x0005a3b1) list_single_2graphic_pane_t1_cp3_ParamLimits

0x03ad,	// (0x0005a3b1) list_single_2graphic_pane_t1_cp3

0x03c8,	// (0x0005a3cc) list_single_midp_graphic_pane_g2_ParamLimits

0x03c8,	// (0x0005a3cc) list_single_midp_graphic_pane_g2

0xe52a,	// (0x0006852e) aid_zoom_text_primary

0xe532,	// (0x00068536) aid_zoom_text_secondary

0x1863,	// (0x0005b867) status_small_pane_g7_ParamLimits

0x1863,	// (0x0005b867) status_small_pane_g7

0x1886,	// (0x0005b88a) status_small_pane_t1_ParamLimits

0x9c2a,	// (0x00063c2e) title_pane_g2

0x0003,

0xf554,	// (0x00069558) title_pane_g

0x9eb6,	// (0x00063eba) aid_size_cell_colour_1_pane_ParamLimits

0x9eb6,	// (0x00063eba) aid_size_cell_colour_1_pane

0x9eca,	// (0x00063ece) aid_size_cell_colour_2_pane_ParamLimits

0x9eca,	// (0x00063ece) aid_size_cell_colour_2_pane

0x9ede,	// (0x00063ee2) aid_size_cell_colour_3_pane_ParamLimits

0x9ede,	// (0x00063ee2) aid_size_cell_colour_3_pane

0x9ef2,	// (0x00063ef6) aid_size_cell_colour_4_pane_ParamLimits

0x9ef2,	// (0x00063ef6) aid_size_cell_colour_4_pane

0xf0e6,	// (0x000690ea) title_pane_stacon_g1_ParamLimits

0xf0e6,	// (0x000690ea) title_pane_stacon_g1

0x2b25,	// (0x0005cb29) popup_note_wait_window_g3_ParamLimits

0x2b25,	// (0x0005cb29) popup_note_wait_window_g3

0x2b9c,	// (0x0005cba0) popup_note_wait_window_t5_ParamLimits

0x2b9c,	// (0x0005cba0) popup_note_wait_window_t5

0x545c,	// (0x0005f460) main_feb_china_hwr_fs_writing_pane

0xaccb,	// (0x00064ccf) popup_feb_china_hwr_fs_window_ParamLimits

0xaccb,	// (0x00064ccf) popup_feb_china_hwr_fs_window

0xb6cb,	// (0x000656cf) aid_size_cell_hwr_fs_ParamLimits

0xb6cb,	// (0x000656cf) aid_size_cell_hwr_fs

0x2523,	// (0x0005c527) bg_popup_sub_pane_cp3_ParamLimits

0x2523,	// (0x0005c527) bg_popup_sub_pane_cp3

0xb6e0,	// (0x000656e4) grid_hwr_fs_pane_ParamLimits

0xb6e0,	// (0x000656e4) grid_hwr_fs_pane

0x042f,	// (0x0005a433) linegrid_hwr_fs_pane_ParamLimits

0x042f,	// (0x0005a433) linegrid_hwr_fs_pane

0xb6f8,	// (0x000656fc) cell_hwr_fs_pane_ParamLimits

0xb6f8,	// (0x000656fc) cell_hwr_fs_pane

0x252f,	// (0x0005c533) linegrid_hwr_fs_pane_g1_ParamLimits

0x252f,	// (0x0005c533) linegrid_hwr_fs_pane_g1

0xc23a,	// (0x0006623e) linegrid_hwr_fs_pane_g2_ParamLimits

0xc23a,	// (0x0006623e) linegrid_hwr_fs_pane_g2

0x254d,	// (0x0005c551) linegrid_hwr_fs_pane_g3_ParamLimits

0x254d,	// (0x0005c551) linegrid_hwr_fs_pane_g3

0x0463,	// (0x0005a467) linegrid_hwr_fs_pane_g4_ParamLimits

0x0463,	// (0x0005a467) linegrid_hwr_fs_pane_g4

0x0481,	// (0x0005a485) linegrid_hwr_fs_pane_g5_ParamLimits

0x0481,	// (0x0005a485) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fb,	// (0x000697ff) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x000697ff) linegrid_hwr_fs_pane_g

0x2559,	// (0x0005c55d) cell_hwr_fs_pane_g1_ParamLimits

0x2559,	// (0x0005c55d) cell_hwr_fs_pane_g1

0x2324,	// (0x0005c328) cell_hwr_fs_pane_g2_ParamLimits

0x2324,	// (0x0005c328) cell_hwr_fs_pane_g2

0xc24c,	// (0x00066250) cell_hwr_fs_pane_g3_ParamLimits

0xc24c,	// (0x00066250) cell_hwr_fs_pane_g3

0xc259,	// (0x0006625d) cell_hwr_fs_pane_g4_ParamLimits

0xc259,	// (0x0006625d) cell_hwr_fs_pane_g4

0x0003,

0xf806,	// (0x0006980a) cell_hwr_fs_pane_g_ParamLimits

0xf806,	// (0x0006980a) cell_hwr_fs_pane_g

0xb71e,	// (0x00065722) cell_hwr_fs_pane_t1

0x545c,	// (0x0005f460) grid_highlight_pane_cp6

0x545c,	// (0x0005f460) main_idle_act2_pane

0x8e1b,	// (0x00062e1f) aid_inside_area_popup_secondary

0xc37a,	// (0x0006637e) aid_inside_area_window_primary_ParamLimits

0xc37a,	// (0x0006637e) aid_inside_area_window_primary

0x3f5b,	// (0x0005df5f) ai2_news_ticker_pane

0x3f63,	// (0x0005df67) aid_size_cell_ai1_link_ParamLimits

0x3f63,	// (0x0005df67) aid_size_cell_ai1_link

0x3f7d,	// (0x0005df81) popup_ai2_data_window_ParamLimits

0x3f7d,	// (0x0005df81) popup_ai2_data_window

0x3f9b,	// (0x0005df9f) popup_ai2_link_window_ParamLimits

0x3f9b,	// (0x0005df9f) popup_ai2_link_window

0x2523,	// (0x0005c527) bg_popup_sub_pane_cp4_ParamLimits

0x2523,	// (0x0005c527) bg_popup_sub_pane_cp4

0x3fb1,	// (0x0005dfb5) grid_ai2_link_pane_ParamLimits

0x3fb1,	// (0x0005dfb5) grid_ai2_link_pane

0x3fc8,	// (0x0005dfcc) popup_ai2_link_window_g1_ParamLimits

0x3fc8,	// (0x0005dfcc) popup_ai2_link_window_g1

0x3fd4,	// (0x0005dfd8) popup_ai2_link_window_g2_ParamLimits

0x3fd4,	// (0x0005dfd8) popup_ai2_link_window_g2

0x0001,

0xf9d9,	// (0x000699dd) popup_ai2_link_window_g_ParamLimits

0xf9d9,	// (0x000699dd) popup_ai2_link_window_g

0x3fe5,	// (0x0005dfe9) ai2_mp_button_pane

0x3fed,	// (0x0005dff1) ai2_mp_volume_pane

0x2714,	// (0x0005c718) bg_popup_sub_pane_cp5_ParamLimits

0x2714,	// (0x0005c718) bg_popup_sub_pane_cp5

0x3ff5,	// (0x0005dff9) heading_ai2_gene_pane_ParamLimits

0x3ff5,	// (0x0005dff9) heading_ai2_gene_pane

0x4001,	// (0x0005e005) list_ai2_gene_pane_ParamLimits

0x4001,	// (0x0005e005) list_ai2_gene_pane

0x4049,	// (0x0005e04d) cell_ai2_link_pane_ParamLimits

0x4049,	// (0x0005e04d) cell_ai2_link_pane

0x405f,	// (0x0005e063) cell_ai2_link_pane_g1

0x545c,	// (0x0005f460) grid_highlight_pane_cp7

0x0838,	// (0x0005a83c) ai2_mp_volume_pane_g1

0x4132,	// (0x0005e136) ai2_mp_volume_pane_g2

0x40a7,	// (0x0005e0ab) list_ai2_gene_pane_t1

0x413a,	// (0x0005e13e) ai2_mp_volume_pane_g3

0x0002,

0xf9f2,	// (0x000699f6) ai2_mp_volume_pane_g

0x0840,	// (0x0005a844) volume_small_pane_cp3

0x4142,	// (0x0005e146) aid_size_cell_ai2_button

0x414a,	// (0x0005e14e) grid_ai2_button_pane

0x4153,	// (0x0005e157) cell_ai2_button_pane_ParamLimits

0x4153,	// (0x0005e157) cell_ai2_button_pane

0x5452,	// (0x0005f456) cell_ai2_button_pane_g1

0x545c,	// (0x0005f460) grid_highlight_pane_cp8

0x40f2,	// (0x0005e0f6) ai2_gene_pane_t1_ParamLimits

0x40f2,	// (0x0005e0f6) ai2_gene_pane_t1

0xac2d,	// (0x00064c31) aid_height_parent_landscape

0xc596,	// (0x0006659a) aid_height_set_list

0x3a2c,	// (0x0005da30) aid_size_parent

0x3d7c,	// (0x0005dd80) aid_size_cell_graphic_pane_ParamLimits

0x4011,	// (0x0005e015) popup_ai2_data_window_g1_ParamLimits

0x4011,	// (0x0005e015) popup_ai2_data_window_g1

0x401d,	// (0x0005e021) ai2_news_ticker_pane_g1

0x4025,	// (0x0005e029) ai2_news_ticker_pane_g2

0x0001,

0xf9de,	// (0x000699e2) ai2_news_ticker_pane_g

0x402d,	// (0x0005e031) ai2_news_ticker_pane_t1

0x403b,	// (0x0005e03f) ai2_news_ticker_pane_t2

0x0001,

0xf9e3,	// (0x000699e7) ai2_news_ticker_pane_t

0x4068,	// (0x0005e06c) heading_ai2_gene_pane_g1

0x4070,	// (0x0005e074) heading_ai2_gene_pane_t1_ParamLimits

0x4070,	// (0x0005e074) heading_ai2_gene_pane_t1

0x4085,	// (0x0005e089) list_highlight_pane_cp6

0x408d,	// (0x0005e091) ai2_gene_pane_ParamLimits

0x408d,	// (0x0005e091) ai2_gene_pane

0x40b5,	// (0x0005e0b9) list_ai2_gene_pane_t2

0x0001,

0xf9e8,	// (0x000699ec) list_ai2_gene_pane_t

0x40c3,	// (0x0005e0c7) list_highlight_pane_cp8_ParamLimits

0x40c3,	// (0x0005e0c7) list_highlight_pane_cp8

0x40d4,	// (0x0005e0d8) ai2_gene_pane_g1_ParamLimits

0x40d4,	// (0x0005e0d8) ai2_gene_pane_g1

0x40e6,	// (0x0005e0ea) ai2_gene_pane_g2_ParamLimits

0x40e6,	// (0x0005e0ea) ai2_gene_pane_g2

0x0001,

0xf9ed,	// (0x000699f1) ai2_gene_pane_g_ParamLimits

0xf9ed,	// (0x000699f1) ai2_gene_pane_g

0x8c9e,	// (0x00062ca2) scroll_pane_cp12

0xabec,	// (0x00064bf0) control_pane_t3_ParamLimits

0xabec,	// (0x00064bf0) control_pane_t3

0x1877,	// (0x0005b87b) status_small_pane_g8_ParamLimits

0x1877,	// (0x0005b87b) status_small_pane_g8

0xad6d,	// (0x00064d71) popup_find_window_ParamLimits

0xb01e,	// (0x00065022) popup_note_image_window_ParamLimits

0xe5ae,	// (0x000685b2) list_double2_graphic_pane_vc_g1_ParamLimits

0xe5ae,	// (0x000685b2) list_double2_graphic_pane_vc_g1

0xf488,	// (0x0006948c) list_double2_graphic_pane_vc_g2_ParamLimits

0xf488,	// (0x0006948c) list_double2_graphic_pane_vc_g2

0x0368,	// (0x0005a36c) list_double2_graphic_pane_vc_g3_ParamLimits

0x0368,	// (0x0005a36c) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c9,	// (0x000697cd) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c9,	// (0x000697cd) list_double2_graphic_pane_vc_g

0xe5ba,	// (0x000685be) list_double2_graphic_pane_vc_t1_ParamLimits

0xe5ba,	// (0x000685be) list_double2_graphic_pane_vc_t1

0xf488,	// (0x0006948c) list_single_heading_pane_vc_g1_ParamLimits

0xf488,	// (0x0006948c) list_single_heading_pane_vc_g1

0x0368,	// (0x0005a36c) list_single_heading_pane_vc_g2_ParamLimits

0x0368,	// (0x0005a36c) list_single_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x000695dc) list_single_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x000695dc) list_single_heading_pane_vc_g

0xe5d0,	// (0x000685d4) list_single_heading_pane_vc_t1_ParamLimits

0xe5d0,	// (0x000685d4) list_single_heading_pane_vc_t1

0xe5e8,	// (0x000685ec) list_single_heading_pane_vc_t2_ParamLimits

0xe5e8,	// (0x000685ec) list_single_heading_pane_vc_t2

0x0001,

0xf7ea,	// (0x000697ee) list_single_heading_pane_vc_t_ParamLimits

0xf7ea,	// (0x000697ee) list_single_heading_pane_vc_t

0x03ea,	// (0x0005a3ee) list_setting_number_pane_vc_g1_ParamLimits

0x03ea,	// (0x0005a3ee) list_setting_number_pane_vc_g1

0x03f6,	// (0x0005a3fa) list_setting_number_pane_vc_g2_ParamLimits

0x03f6,	// (0x0005a3fa) list_setting_number_pane_vc_g2

0x0001,

0xf7ef,	// (0x000697f3) list_setting_number_pane_vc_g_ParamLimits

0xf7ef,	// (0x000697f3) list_setting_number_pane_vc_g

0xe5fa,	// (0x000685fe) list_setting_number_pane_vc_t1_ParamLimits

0xe5fa,	// (0x000685fe) list_setting_number_pane_vc_t1

0xe60e,	// (0x00068612) list_setting_number_pane_vc_t2_ParamLimits

0xe60e,	// (0x00068612) list_setting_number_pane_vc_t2

0xe62a,	// (0x0006862e) list_setting_number_pane_vc_t3_ParamLimits

0xe62a,	// (0x0006862e) list_setting_number_pane_vc_t3

0x0002,

0xf7f4,	// (0x000697f8) list_setting_number_pane_vc_t_ParamLimits

0xf7f4,	// (0x000697f8) list_setting_number_pane_vc_t

0xe658,	// (0x0006865c) set_value_pane_vc_ParamLimits

0xe658,	// (0x0006865c) set_value_pane_vc

0x3c04,	// (0x0005dc08) list_double2_graphic_pane_vc_ParamLimits

0x3c04,	// (0x0005dc08) list_double2_graphic_pane_vc

0x3c04,	// (0x0005dc08) list_double2_large_graphic_pane_vc_ParamLimits

0x3c04,	// (0x0005dc08) list_double2_large_graphic_pane_vc

0x3c04,	// (0x0005dc08) list_double2_pane_vc_ParamLimits

0x3c04,	// (0x0005dc08) list_double2_pane_vc

0x3c04,	// (0x0005dc08) list_double_graphic_heading_pane_vc_ParamLimits

0x3c04,	// (0x0005dc08) list_double_graphic_heading_pane_vc

0x3c04,	// (0x0005dc08) list_double_graphic_pane_vc_ParamLimits

0x3c04,	// (0x0005dc08) list_double_graphic_pane_vc

0x3c04,	// (0x0005dc08) list_double_heading_pane_vc_ParamLimits

0x3c04,	// (0x0005dc08) list_double_heading_pane_vc

0x3c04,	// (0x0005dc08) list_double_large_graphic_pane_vc_ParamLimits

0x3c04,	// (0x0005dc08) list_double_large_graphic_pane_vc

0x3c04,	// (0x0005dc08) list_double_number_pane_vc_ParamLimits

0x3c04,	// (0x0005dc08) list_double_number_pane_vc

0x3c04,	// (0x0005dc08) list_double_pane_vc_ParamLimits

0x3c04,	// (0x0005dc08) list_double_pane_vc

0x3c04,	// (0x0005dc08) list_double_time_pane_vc_ParamLimits

0x3c04,	// (0x0005dc08) list_double_time_pane_vc

0x3c04,	// (0x0005dc08) list_setting_number_pane_vc_ParamLimits

0x3c04,	// (0x0005dc08) list_setting_number_pane_vc

0x3c04,	// (0x0005dc08) list_setting_pane_vc_ParamLimits

0x3c04,	// (0x0005dc08) list_setting_pane_vc

0x3c04,	// (0x0005dc08) list_single_graphic_heading_pane_vc_ParamLimits

0x3c04,	// (0x0005dc08) list_single_graphic_heading_pane_vc

0x3c04,	// (0x0005dc08) list_single_heading_pane_vc_ParamLimits

0x3c04,	// (0x0005dc08) list_single_heading_pane_vc

0x3c04,	// (0x0005dc08) list_single_number_heading_pane_vc_ParamLimits

0x3c04,	// (0x0005dc08) list_single_number_heading_pane_vc

0xe5ae,	// (0x000685b2) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe5ae,	// (0x000685b2) list_double_graphic_heading_pane_vc_g1

0x34bf,	// (0x0005d4c3) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x34bf,	// (0x0005d4c3) list_double_graphic_heading_pane_vc_g2

0x34cb,	// (0x0005d4cf) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x34cb,	// (0x0005d4cf) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f9,	// (0x000699fd) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f9,	// (0x000699fd) list_double_graphic_heading_pane_vc_g

0xe68f,	// (0x00068693) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xe68f,	// (0x00068693) list_double_graphic_heading_pane_vc_t1

0xe6a5,	// (0x000686a9) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xe6a5,	// (0x000686a9) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa00,	// (0x00069a04) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa00,	// (0x00069a04) list_double_graphic_heading_pane_vc_t

0x03ea,	// (0x0005a3ee) list_setting_pane_vc_g1_ParamLimits

0x03ea,	// (0x0005a3ee) list_setting_pane_vc_g1

0x03f6,	// (0x0005a3fa) list_setting_pane_vc_g2_ParamLimits

0x03f6,	// (0x0005a3fa) list_setting_pane_vc_g2

0x0001,

0xf7ef,	// (0x000697f3) list_setting_pane_vc_g_ParamLimits

0xf7ef,	// (0x000697f3) list_setting_pane_vc_g

0xe6c3,	// (0x000686c7) list_setting_pane_vc_t1_ParamLimits

0xe6c3,	// (0x000686c7) list_setting_pane_vc_t1

0xe6df,	// (0x000686e3) list_setting_pane_vc_t2_ParamLimits

0xe6df,	// (0x000686e3) list_setting_pane_vc_t2

0x0001,

0xfa43,	// (0x00069a47) list_setting_pane_vc_t_ParamLimits

0xfa43,	// (0x00069a47) list_setting_pane_vc_t

0xe658,	// (0x0006865c) set_value_pane_cp_vc_ParamLimits

0xe658,	// (0x0006865c) set_value_pane_cp_vc

0xf488,	// (0x0006948c) list_single_number_heading_pane_vc_g1_ParamLimits

0xf488,	// (0x0006948c) list_single_number_heading_pane_vc_g1

0x0368,	// (0x0005a36c) list_single_number_heading_pane_vc_g2_ParamLimits

0x0368,	// (0x0005a36c) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x000695dc) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x000695dc) list_single_number_heading_pane_vc_g

0xe5d0,	// (0x000685d4) list_single_number_heading_pane_vc_t1_ParamLimits

0xe5d0,	// (0x000685d4) list_single_number_heading_pane_vc_t1

0xe6fb,	// (0x000686ff) list_single_number_heading_pane_vc_t2_ParamLimits

0xe6fb,	// (0x000686ff) list_single_number_heading_pane_vc_t2

0xe08c,	// (0x00068090) list_single_number_heading_pane_vc_t3_ParamLimits

0xe08c,	// (0x00068090) list_single_number_heading_pane_vc_t3

0x0002,

0xfa48,	// (0x00069a4c) list_single_number_heading_pane_vc_t_ParamLimits

0xfa48,	// (0x00069a4c) list_single_number_heading_pane_vc_t

0xe5ae,	// (0x000685b2) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xe5ae,	// (0x000685b2) list_single_graphic_heading_pane_vc_g1

0xf488,	// (0x0006948c) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xf488,	// (0x0006948c) list_single_graphic_heading_pane_vc_g4

0x0368,	// (0x0005a36c) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0368,	// (0x0005a36c) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c9,	// (0x000697cd) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x000697cd) list_single_graphic_heading_pane_vc_g

0xe5d0,	// (0x000685d4) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe5d0,	// (0x000685d4) list_single_graphic_heading_pane_vc_t1

0xe70d,	// (0x00068711) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xe70d,	// (0x00068711) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4f,	// (0x00069a53) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4f,	// (0x00069a53) list_single_graphic_heading_pane_vc_t

0xf488,	// (0x0006948c) list_double2_pane_vc_g1_ParamLimits

0xf488,	// (0x0006948c) list_double2_pane_vc_g1

0x0368,	// (0x0005a36c) list_double2_pane_vc_g2_ParamLimits

0x0368,	// (0x0005a36c) list_double2_pane_vc_g2

0x0001,

0xf5d8,	// (0x000695dc) list_double2_pane_vc_g_ParamLimits

0xf5d8,	// (0x000695dc) list_double2_pane_vc_g

0xe679,	// (0x0006867d) list_double2_pane_vc_t1_ParamLimits

0xe679,	// (0x0006867d) list_double2_pane_vc_t1

0x34d7,	// (0x0005d4db) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x34d7,	// (0x0005d4db) list_double2_large_graphic_pane_vc_g1

0xf488,	// (0x0006948c) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xf488,	// (0x0006948c) list_double2_large_graphic_pane_vc_g2

0x0368,	// (0x0005a36c) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0368,	// (0x0005a36c) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5f0,	// (0x000695f4) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5f0,	// (0x000695f4) list_double2_large_graphic_pane_vc_g

0xe076,	// (0x0006807a) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe076,	// (0x0006807a) list_double2_large_graphic_pane_vc_t1

0x34e3,	// (0x0005d4e7) list_double_time_pane_vc_g1_ParamLimits

0x34e3,	// (0x0005d4e7) list_double_time_pane_vc_g1

0x34ef,	// (0x0005d4f3) list_double_time_pane_vc_g2_ParamLimits

0x34ef,	// (0x0005d4f3) list_double_time_pane_vc_g2

0x0001,

0xfa54,	// (0x00069a58) list_double_time_pane_vc_g_ParamLimits

0xfa54,	// (0x00069a58) list_double_time_pane_vc_g

0xe71f,	// (0x00068723) list_double_time_pane_vc_t1_ParamLimits

0xe71f,	// (0x00068723) list_double_time_pane_vc_t1

0xe749,	// (0x0006874d) list_double_time_pane_vc_t2_ParamLimits

0xe749,	// (0x0006874d) list_double_time_pane_vc_t2

0xe792,	// (0x00068796) list_double_time_pane_vc_t3_ParamLimits

0xe792,	// (0x00068796) list_double_time_pane_vc_t3

0xe7a4,	// (0x000687a8) list_double_time_pane_vc_t4_ParamLimits

0xe7a4,	// (0x000687a8) list_double_time_pane_vc_t4

0x0003,

0xfa59,	// (0x00069a5d) list_double_time_pane_vc_t_ParamLimits

0xfa59,	// (0x00069a5d) list_double_time_pane_vc_t

0xf488,	// (0x0006948c) list_double_pane_vc_g1_ParamLimits

0xf488,	// (0x0006948c) list_double_pane_vc_g1

0x0368,	// (0x0005a36c) list_double_pane_vc_g2_ParamLimits

0x0368,	// (0x0005a36c) list_double_pane_vc_g2

0x0001,

0xf5d8,	// (0x000695dc) list_double_pane_vc_g_ParamLimits

0xf5d8,	// (0x000695dc) list_double_pane_vc_g

0xe7c9,	// (0x000687cd) list_double_pane_vc_t1_ParamLimits

0xe7c9,	// (0x000687cd) list_double_pane_vc_t1

0xe7dd,	// (0x000687e1) list_double_pane_vc_t2_ParamLimits

0xe7dd,	// (0x000687e1) list_double_pane_vc_t2

0x0001,

0xfa62,	// (0x00069a66) list_double_pane_vc_t_ParamLimits

0xfa62,	// (0x00069a66) list_double_pane_vc_t

0xf488,	// (0x0006948c) list_double_number_pane_vc_g1_ParamLimits

0xf488,	// (0x0006948c) list_double_number_pane_vc_g1

0x0368,	// (0x0005a36c) list_double_number_pane_vc_g2_ParamLimits

0x0368,	// (0x0005a36c) list_double_number_pane_vc_g2

0x0001,

0xf5d8,	// (0x000695dc) list_double_number_pane_vc_g_ParamLimits

0xf5d8,	// (0x000695dc) list_double_number_pane_vc_g

0xe7f3,	// (0x000687f7) list_double_number_pane_vc_t1_ParamLimits

0xe7f3,	// (0x000687f7) list_double_number_pane_vc_t1

0xe807,	// (0x0006880b) list_double_number_pane_vc_t2_ParamLimits

0xe807,	// (0x0006880b) list_double_number_pane_vc_t2

0xe81b,	// (0x0006881f) list_double_number_pane_vc_t3_ParamLimits

0xe81b,	// (0x0006881f) list_double_number_pane_vc_t3

0x0002,

0xfa67,	// (0x00069a6b) list_double_number_pane_vc_t_ParamLimits

0xfa67,	// (0x00069a6b) list_double_number_pane_vc_t

0x34fb,	// (0x0005d4ff) list_double_large_graphic_pane_vc_g1_ParamLimits

0x34fb,	// (0x0005d4ff) list_double_large_graphic_pane_vc_g1

0x350c,	// (0x0005d510) list_double_large_graphic_pane_vc_g2_ParamLimits

0x350c,	// (0x0005d510) list_double_large_graphic_pane_vc_g2

0x0368,	// (0x0005a36c) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0368,	// (0x0005a36c) list_double_large_graphic_pane_vc_g3

0xe831,	// (0x00068835) list_double_large_graphic_pane_vc_g4_ParamLimits

0xe831,	// (0x00068835) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6e,	// (0x00069a72) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6e,	// (0x00069a72) list_double_large_graphic_pane_vc_g

0xe83d,	// (0x00068841) list_double_large_graphic_pane_vc_t1_ParamLimits

0xe83d,	// (0x00068841) list_double_large_graphic_pane_vc_t1

0xe856,	// (0x0006885a) list_double_large_graphic_pane_vc_t2_ParamLimits

0xe856,	// (0x0006885a) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa77,	// (0x00069a7b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa77,	// (0x00069a7b) list_double_large_graphic_pane_vc_t

0x34bf,	// (0x0005d4c3) list_double_heading_pane_vc_g1_ParamLimits

0x34bf,	// (0x0005d4c3) list_double_heading_pane_vc_g1

0x34cb,	// (0x0005d4cf) list_double_heading_pane_vc_g2_ParamLimits

0x34cb,	// (0x0005d4cf) list_double_heading_pane_vc_g2

0x0001,

0xfa7c,	// (0x00069a80) list_double_heading_pane_vc_g_ParamLimits

0xfa7c,	// (0x00069a80) list_double_heading_pane_vc_g

0xe86d,	// (0x00068871) list_double_heading_pane_vc_t1_ParamLimits

0xe86d,	// (0x00068871) list_double_heading_pane_vc_t1

0xe5d0,	// (0x000685d4) list_double_heading_pane_vc_t2_ParamLimits

0xe5d0,	// (0x000685d4) list_double_heading_pane_vc_t2

0x0001,

0xfa81,	// (0x00069a85) list_double_heading_pane_vc_t_ParamLimits

0xfa81,	// (0x00069a85) list_double_heading_pane_vc_t

0xe5ae,	// (0x000685b2) list_double_graphic_pane_vc_g1_ParamLimits

0xe5ae,	// (0x000685b2) list_double_graphic_pane_vc_g1

0x351b,	// (0x0005d51f) list_double_graphic_pane_vc_g2_ParamLimits

0x351b,	// (0x0005d51f) list_double_graphic_pane_vc_g2

0x352a,	// (0x0005d52e) list_double_graphic_pane_vc_g3_ParamLimits

0x352a,	// (0x0005d52e) list_double_graphic_pane_vc_g3

0x0002,

0xfa86,	// (0x00069a8a) list_double_graphic_pane_vc_g_ParamLimits

0xfa86,	// (0x00069a8a) list_double_graphic_pane_vc_g

0xe87f,	// (0x00068883) list_double_graphic_pane_vc_t1_ParamLimits

0xe87f,	// (0x00068883) list_double_graphic_pane_vc_t1

0xe893,	// (0x00068897) list_double_graphic_pane_vc_t2_ParamLimits

0xe893,	// (0x00068897) list_double_graphic_pane_vc_t2

0x0001,

0xfa8d,	// (0x00069a91) list_double_graphic_pane_vc_t_ParamLimits

0xfa8d,	// (0x00069a91) list_double_graphic_pane_vc_t

0xdfc1,	// (0x00067fc5) aid_size_cell_fastswap

0x9a72,	// (0x00063a76) aid_size_cell_touch_ParamLimits

0x9a72,	// (0x00063a76) aid_size_cell_touch

0xef7c,	// (0x00068f80) popup_fast_swap_wide_window_ParamLimits

0xef7c,	// (0x00068f80) popup_fast_swap_wide_window

0x9bc1,	// (0x00063bc5) touch_pane_ParamLimits

0x9bc1,	// (0x00063bc5) touch_pane

0x8cf4,	// (0x00062cf8) button_value_adjust_pane_cp2

0xe0cd,	// (0x000680d1) button_value_adjust_pane_cp4

0xe0d5,	// (0x000680d9) form_field_data_pane_cp2

0xa4b1,	// (0x000644b5) form_field_data_wide_pane_cp2

0x905a,	// (0x0006305e) bg_scroll_pane_ParamLimits

0xf242,	// (0x00069246) scroll_handle_pane_ParamLimits

0xf256,	// (0x0006925a) scroll_sc2_down_pane_ParamLimits

0xf256,	// (0x0006925a) scroll_sc2_down_pane

0xbf97,	// (0x00065f9b) scroll_sc2_up_pane_ParamLimits

0xbf97,	// (0x00065f9b) scroll_sc2_up_pane

0xc97e,	// (0x00066982) grid_wheel_folder_pane_g1_ParamLimits

0xc97e,	// (0x00066982) grid_wheel_folder_pane_g1

0xf420,	// (0x00069424) clock_nsta_pane_cp2_ParamLimits

0xf420,	// (0x00069424) clock_nsta_pane_cp2

0x196e,	// (0x0005b972) listscroll_midp_pane_ParamLimits

0xa9f2,	// (0x000649f6) midp_canvas_pane

0x18f2,	// (0x0005b8f6) nsta_clock_indic_pane

0x1940,	// (0x0005b944) listscroll_form_pane_vc

0x195c,	// (0x0005b960) listscroll_set_pane_vc_ParamLimits

0x195c,	// (0x0005b960) listscroll_set_pane_vc

0xb49a,	// (0x0006549e) clock_nsta_pane

0xb4c4,	// (0x000654c8) indicator_nsta_pane

0x23ed,	// (0x0005c3f1) bg_popup_sub_pane_cp2_ParamLimits

0x2401,	// (0x0005c405) find_pane_cp2_ParamLimits

0x2401,	// (0x0005c405) find_pane_cp2

0x2417,	// (0x0005c41b) grid_toobar_pane_ParamLimits

0x24f7,	// (0x0005c4fb) list_form_gen_pane_vc_ParamLimits

0x24f7,	// (0x0005c4fb) list_form_gen_pane_vc

0x250d,	// (0x0005c511) scroll_pane_cp8_vc_ParamLimits

0x250d,	// (0x0005c511) scroll_pane_cp8_vc

0x2589,	// (0x0005c58d) data_form_wide_pane_vc_ParamLimits

0x2589,	// (0x0005c58d) data_form_wide_pane_vc

0x2595,	// (0x0005c599) form_field_data_wide_pane_vc_g1

0x259d,	// (0x0005c5a1) form_field_data_wide_pane_vc_t1_ParamLimits

0x259d,	// (0x0005c5a1) form_field_data_wide_pane_vc_t1

0x8d08,	// (0x00062d0c) input_focus_pane_cp6_vc_ParamLimits

0x8d08,	// (0x00062d0c) input_focus_pane_cp6_vc

0xc2d7,	// (0x000662db) list_midp_pane_ParamLimits

0x3de8,	// (0x0005ddec) scroll_pane_cp16_ParamLimits

0x3de8,	// (0x0005ddec) scroll_pane_cp16

0x28f9,	// (0x0005c8fd) button_value_adjust_pane_ParamLimits

0x28f9,	// (0x0005c8fd) button_value_adjust_pane

0xc5a7,	// (0x000665ab) button_value_adjust_pane_cp6_ParamLimits

0xc5a7,	// (0x000665ab) button_value_adjust_pane_cp6

0xc6e9,	// (0x000666ed) settings_code_pane_cp_ParamLimits

0xc6e9,	// (0x000666ed) settings_code_pane_cp

0x5452,	// (0x0005f456) cell_touch_pane_g1

0x5452,	// (0x0005f456) cell_touch_pane_g2

0x0001,

0xf70e,	// (0x00069712) cell_touch_pane_g

0xc839,	// (0x0006683d) cell_touch_pane_cp_ParamLimits

0xc839,	// (0x0006683d) cell_touch_pane_cp

0xc855,	// (0x00066859) cell_touch_pane_ParamLimits

0xc855,	// (0x00066859) cell_touch_pane

0x5452,	// (0x0005f456) scroll_sc2_down_pane_g1

0x5452,	// (0x0005f456) scroll_sc2_up_pane_g1

0x545c,	// (0x0005f460) bg_set_opt_pane_cp4_vc

0x4186,	// (0x0005e18a) list_set_graphic_pane_vc_g1_ParamLimits

0x4186,	// (0x0005e18a) list_set_graphic_pane_vc_g1

0xc873,	// (0x00066877) list_set_graphic_pane_vc_g2_ParamLimits

0xc873,	// (0x00066877) list_set_graphic_pane_vc_g2

0x0001,

0xfa05,	// (0x00069a09) list_set_graphic_pane_vc_g_ParamLimits

0xfa05,	// (0x00069a09) list_set_graphic_pane_vc_g

0x4192,	// (0x0005e196) text_primary_small_cp13_vc_ParamLimits

0x4192,	// (0x0005e196) text_primary_small_cp13_vc

0x41aa,	// (0x0005e1ae) list_set_graphic_pane_vc_ParamLimits

0x41aa,	// (0x0005e1ae) list_set_graphic_pane_vc

0x545c,	// (0x0005f460) input_focus_pane_cp2_vc

0x5452,	// (0x0005f456) setting_code_pane_vc_g1

0x870a,	// (0x0006270e) setting_code_pane_vc_t1

0x41bf,	// (0x0005e1c3) set_text_pane_vc_t1_ParamLimits

0x41bf,	// (0x0005e1c3) set_text_pane_vc_t1

0x545c,	// (0x0005f460) input_focus_pane_cp1_vc

0x41dd,	// (0x0005e1e1) list_set_text_pane_vc

0x5452,	// (0x0005f456) setting_text_pane_vc_g1

0x545c,	// (0x0005f460) bg_set_opt_pane_cp2_vc

0x8701,	// (0x00062705) setting_slider_graphic_pane_vc_g1

0x41e7,	// (0x0005e1eb) setting_slider_graphic_pane_vc_t1

0x41f9,	// (0x0005e1fd) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa0a,	// (0x00069a0e) setting_slider_graphic_pane_vc_t

0x420b,	// (0x0005e20f) slider_set_pane_cp_vc

0x4215,	// (0x0005e219) slider_set_pane_vc_g1

0x421e,	// (0x0005e222) slider_set_pane_vc_g2

0x0006,

0xfa0f,	// (0x00069a13) slider_set_pane_vc_g

0x8d63,	// (0x00062d67) set_opt_bg_pane_g1_copy1

0x8d6b,	// (0x00062d6f) set_opt_bg_pane_g2_copy1

0x424a,	// (0x0005e24e) set_opt_bg_pane_g3_copy1

0x8d7b,	// (0x00062d7f) set_opt_bg_pane_g4_copy1

0x8d83,	// (0x00062d87) set_opt_bg_pane_g5_copy1

0x8d8b,	// (0x00062d8f) set_opt_bg_pane_g6_copy1

0x4254,	// (0x0005e258) set_opt_bg_pane_g7_copy1

0x425e,	// (0x0005e262) set_opt_bg_pane_g8_copy1

0x4268,	// (0x0005e26c) set_opt_bg_pane_g9_copy1

0x545c,	// (0x0005f460) bg_set_opt_pane_cp_vc

0x4272,	// (0x0005e276) setting_slider_pane_vc_t1

0x4281,	// (0x0005e285) setting_slider_pane_vc_t2

0x4293,	// (0x0005e297) setting_slider_pane_vc_t3

0x0002,

0xfa1e,	// (0x00069a22) setting_slider_pane_vc_t

0x42a5,	// (0x0005e2a9) slider_set_pane_vc

0x04c4,	// (0x0005a4c8) volume_set_pane_vc_g1

0x04cd,	// (0x0005a4d1) volume_set_pane_vc_g2

0x04d6,	// (0x0005a4da) volume_set_pane_vc_g3

0x04df,	// (0x0005a4e3) volume_set_pane_vc_g4

0x04e8,	// (0x0005a4ec) volume_set_pane_vc_g5

0x04f1,	// (0x0005a4f5) volume_set_pane_vc_g6

0x04fa,	// (0x0005a4fe) volume_set_pane_vc_g7

0x0503,	// (0x0005a507) volume_set_pane_vc_g8

0x050c,	// (0x0005a510) volume_set_pane_vc_g9

0x0515,	// (0x0005a519) volume_set_pane_vc_g10

0x0009,

0xfa25,	// (0x00069a29) volume_set_pane_vc_g

0x42af,	// (0x0005e2b3) volume_set_pane_vc

0x42b9,	// (0x0005e2bd) button_value_adjust_pane_cp1_vc

0x42c3,	// (0x0005e2c7) list_highlight_pane_cp2_vc

0x42cc,	// (0x0005e2d0) list_set_pane_vc_ParamLimits

0x42cc,	// (0x0005e2d0) list_set_pane_vc

0x433c,	// (0x0005e340) main_pane_set_vc_t1_ParamLimits

0x433c,	// (0x0005e340) main_pane_set_vc_t1

0x4351,	// (0x0005e355) main_pane_set_vc_t2_ParamLimits

0x4351,	// (0x0005e355) main_pane_set_vc_t2

0x4363,	// (0x0005e367) main_pane_set_vc_t3_ParamLimits

0x4363,	// (0x0005e367) main_pane_set_vc_t3

0x4377,	// (0x0005e37b) main_pane_set_vc_t4_ParamLimits

0x4377,	// (0x0005e37b) main_pane_set_vc_t4

0x0003,

0xfa3a,	// (0x00069a3e) main_pane_set_vc_t_ParamLimits

0xfa3a,	// (0x00069a3e) main_pane_set_vc_t

0x438b,	// (0x0005e38f) setting_code_pane_vc_ParamLimits

0x438b,	// (0x0005e38f) setting_code_pane_vc

0x439c,	// (0x0005e3a0) setting_slider_graphic_pane_vc

0x439c,	// (0x0005e3a0) setting_slider_pane_vc

0x439c,	// (0x0005e3a0) setting_text_pane_vc

0x439c,	// (0x0005e3a0) setting_volume_pane_vc

0x43a6,	// (0x0005e3aa) scroll_pane_cp121_vc

0x8ce2,	// (0x00062ce6) set_content_pane_vc

0x43ae,	// (0x0005e3b2) button_value_adjust_pane_g1

0x43b7,	// (0x0005e3bb) button_value_adjust_pane_g2

0x0001,

0xfa92,	// (0x00069a96) button_value_adjust_pane_g

0x43c0,	// (0x0005e3c4) form_field_slider_wide_pane_vc_t1_ParamLimits

0x43c0,	// (0x0005e3c4) form_field_slider_wide_pane_vc_t1

0x43d2,	// (0x0005e3d6) form_field_slider_wide_pane_vc_t2_ParamLimits

0x43d2,	// (0x0005e3d6) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa97,	// (0x00069a9b) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa97,	// (0x00069a9b) form_field_slider_wide_pane_vc_t

0x54b6,	// (0x0005f4ba) input_focus_pane_cp10_vc_ParamLimits

0x54b6,	// (0x0005f4ba) input_focus_pane_cp10_vc

0x43fe,	// (0x0005e402) slider_cont_pane_cp1_vc_ParamLimits

0x43fe,	// (0x0005e402) slider_cont_pane_cp1_vc

0x4410,	// (0x0005e414) slider_form_pane_g1_cp2

0x421e,	// (0x0005e222) slider_form_pane_g2_cp2

0x443d,	// (0x0005e441) form_field_slider_pane_vc_t3

0x444b,	// (0x0005e44f) form_field_slider_pane_vc_t4

0x4459,	// (0x0005e45d) slider_form_pane_vc_ParamLimits

0x4459,	// (0x0005e45d) slider_form_pane_vc

0x4466,	// (0x0005e46a) form_field_slider_pane_vc_t1_ParamLimits

0x4466,	// (0x0005e46a) form_field_slider_pane_vc_t1

0x43d2,	// (0x0005e3d6) form_field_slider_pane_vc_t2_ParamLimits

0x43d2,	// (0x0005e3d6) form_field_slider_pane_vc_t2

0x0001,

0xfaa9,	// (0x00069aad) form_field_slider_pane_vc_t_ParamLimits

0xfaa9,	// (0x00069aad) form_field_slider_pane_vc_t

0x54b6,	// (0x0005f4ba) input_focus_pane_cp9_vc_ParamLimits

0x54b6,	// (0x0005f4ba) input_focus_pane_cp9_vc

0x447c,	// (0x0005e480) slider_cont_pane_vc_ParamLimits

0x447c,	// (0x0005e480) slider_cont_pane_vc

0x4490,	// (0x0005e494) list_form_graphic_pane_cp_vc_ParamLimits

0x4490,	// (0x0005e494) list_form_graphic_pane_cp_vc

0x2595,	// (0x0005c599) form_field_popup_wide_pane_vc_g1

0x44a5,	// (0x0005e4a9) form_field_popup_wide_pane_vc_t1_ParamLimits

0x44a5,	// (0x0005e4a9) form_field_popup_wide_pane_vc_t1

0x8d08,	// (0x00062d0c) input_focus_pane_cp8_vc_ParamLimits

0x8d08,	// (0x00062d0c) input_focus_pane_cp8_vc

0x44ea,	// (0x0005e4ee) list_form_wide_pane_vc_ParamLimits

0x44ea,	// (0x0005e4ee) list_form_wide_pane_vc

0x44f6,	// (0x0005e4fa) list_form_graphic_pane_vc_g1

0x44fe,	// (0x0005e502) list_form_graphic_pane_vc_t1_ParamLimits

0x44fe,	// (0x0005e502) list_form_graphic_pane_vc_t1

0x86f3,	// (0x000626f7) list_highlight_pane_cp5_vc_ParamLimits

0x86f3,	// (0x000626f7) list_highlight_pane_cp5_vc

0x451a,	// (0x0005e51e) list_form_graphic_pane_vc_ParamLimits

0x451a,	// (0x0005e51e) list_form_graphic_pane_vc

0x2595,	// (0x0005c599) form_field_popup_pane_vc_g1

0x4530,	// (0x0005e534) form_field_popup_pane_vc_t1_ParamLimits

0x4530,	// (0x0005e534) form_field_popup_pane_vc_t1

0x8d08,	// (0x00062d0c) input_focus_pane_cp7_vc_ParamLimits

0x8d08,	// (0x00062d0c) input_focus_pane_cp7_vc

0x4547,	// (0x0005e54b) list_form_pane_vc_ParamLimits

0x4547,	// (0x0005e54b) list_form_pane_vc

0x4553,	// (0x0005e557) data_form_pane_vc_t1_ParamLimits

0x4553,	// (0x0005e557) data_form_pane_vc_t1

0x8d63,	// (0x00062d67) input_focus_pane_vc_g1

0x8d6b,	// (0x00062d6f) input_focus_pane_vc_g2

0x8d73,	// (0x00062d77) input_focus_pane_vc_g3

0x8d7b,	// (0x00062d7f) input_focus_pane_vc_g4

0x8d83,	// (0x00062d87) input_focus_pane_vc_g5

0x8d8b,	// (0x00062d8f) input_focus_pane_vc_g6

0x8d93,	// (0x00062d97) input_focus_pane_vc_g7

0x8d9b,	// (0x00062d9f) input_focus_pane_vc_g8

0x8da3,	// (0x00062da7) input_focus_pane_vc_g9

0x5452,	// (0x0005f456) input_focus_pane_vc_g10

0x0009,

0xf697,	// (0x0006969b) input_focus_pane_vc_g

0x2589,	// (0x0005c58d) data_form_pane_vc_ParamLimits

0x2589,	// (0x0005c58d) data_form_pane_vc

0x2595,	// (0x0005c599) form_field_data_pane_vc_g1

0x4570,	// (0x0005e574) form_field_data_pane_vc_t1_ParamLimits

0x4570,	// (0x0005e574) form_field_data_pane_vc_t1

0x8d08,	// (0x00062d0c) input_focus_pane_vc_ParamLimits

0x8d08,	// (0x00062d0c) input_focus_pane_vc

0x458a,	// (0x0005e58e) button_value_adjust_pane_cp3_vc

0x4592,	// (0x0005e596) button_value_adjust_pane_cp5_vc

0x459a,	// (0x0005e59e) form_field_data_pane_vc_ParamLimits

0x459a,	// (0x0005e59e) form_field_data_pane_vc

0x45b5,	// (0x0005e5b9) form_field_data_pane_vc_cp2

0x45bd,	// (0x0005e5c1) form_field_data_wide_pane_vc_ParamLimits

0x45bd,	// (0x0005e5c1) form_field_data_wide_pane_vc

0x45d7,	// (0x0005e5db) form_field_data_wide_pane_vc_cp2

0x45df,	// (0x0005e5e3) form_field_popup_pane_vc_ParamLimits

0x45df,	// (0x0005e5e3) form_field_popup_pane_vc

0x45fa,	// (0x0005e5fe) form_field_popup_wide_pane_vc_ParamLimits

0x45fa,	// (0x0005e5fe) form_field_popup_wide_pane_vc

0x4614,	// (0x0005e618) form_field_slider_pane_vc_ParamLimits

0x4614,	// (0x0005e618) form_field_slider_pane_vc

0x4627,	// (0x0005e62b) form_field_slider_wide_pane_vc_ParamLimits

0x4627,	// (0x0005e62b) form_field_slider_wide_pane_vc

0xc87f,	// (0x00066883) grid_touch_1_pane_ParamLimits

0xc87f,	// (0x00066883) grid_touch_1_pane

0xc893,	// (0x00066897) grid_touch_2_pane_ParamLimits

0xc893,	// (0x00066897) grid_touch_2_pane

0x46fe,	// (0x0005e702) touch_pane_g1_ParamLimits

0x46fe,	// (0x0005e702) touch_pane_g1

0x4660,	// (0x0005e664) cell_app_pane_cp_wide_ParamLimits

0x4660,	// (0x0005e664) cell_app_pane_cp_wide

0x4671,	// (0x0005e675) grid_popup_fast_wide_pane_ParamLimits

0x4671,	// (0x0005e675) grid_popup_fast_wide_pane

0x4685,	// (0x0005e689) scroll_pane_cp19_ParamLimits

0x4685,	// (0x0005e689) scroll_pane_cp19

0x545c,	// (0x0005f460) bg_popup_window_pane_cp20

0x4699,	// (0x0005e69d) listscroll_popup_fast_wide_pane

0xc8bf,	// (0x000668c3) grid_indicator_nsta_pane

0x46a1,	// (0x0005e6a5) clock_nsta_pane_g1

0x46aa,	// (0x0005e6ae) clock_nsta_pane_t1

0xc8cd,	// (0x000668d1) cell_indicator_nsta_pane_ParamLimits

0xc8cd,	// (0x000668d1) cell_indicator_nsta_pane

0x46fe,	// (0x0005e702) cell_indicator_nsta_pane_g1

0xc8ea,	// (0x000668ee) cell_indicator_nsta_pane_g2

0x0001,

0xfaba,	// (0x00069abe) cell_indicator_nsta_pane_g

0x4722,	// (0x0005e726) clock_nsta_pane_cp

0x472a,	// (0x0005e72e) indicator_nsta_pane_cp

0x4733,	// (0x0005e737) nsta_clock_indic_pane_g1

0x872f,	// (0x00062733) grid_indicator_pane

0xc089,	// (0x0006608d) scroll_pane_cp29

0xf36c,	// (0x00069370) indicator_nsta_pane_cp2_ParamLimits

0xf36c,	// (0x00069370) indicator_nsta_pane_cp2

0x86f3,	// (0x000626f7) main_apps_wheel_pane

0x277c,	// (0x0005c780) form_midp_field_text_pane_ParamLimits

0x28cb,	// (0x0005c8cf) scroll_bar_cp050_ParamLimits

0x479c,	// (0x0005e7a0) cell_indicator_pane_ParamLimits

0x479c,	// (0x0005e7a0) cell_indicator_pane

0x47b4,	// (0x0005e7b8) cell_indicator_pane_g1

0xc900,	// (0x00066904) grid_wheel_folder_pane_ParamLimits

0xc900,	// (0x00066904) grid_wheel_folder_pane

0xc90e,	// (0x00066912) list_wheel_apps_pane_ParamLimits

0xc90e,	// (0x00066912) list_wheel_apps_pane

0xc91c,	// (0x00066920) main_apps_wheel_pane_g1_ParamLimits

0xc91c,	// (0x00066920) main_apps_wheel_pane_g1

0xc92c,	// (0x00066930) main_apps_wheel_pane_g2_ParamLimits

0xc92c,	// (0x00066930) main_apps_wheel_pane_g2

0x0001,

0xfad6,	// (0x00069ada) main_apps_wheel_pane_g_ParamLimits

0xfad6,	// (0x00069ada) main_apps_wheel_pane_g

0xc93c,	// (0x00066940) main_apps_wheel_pane_t1_ParamLimits

0xc93c,	// (0x00066940) main_apps_wheel_pane_t1

0xc954,	// (0x00066958) list_wheel_apps_pane_g1

0xc95c,	// (0x00066960) list_wheel_apps_pane_g2

0xc964,	// (0x00066968) list_wheel_apps_pane_g3

0xc96c,	// (0x00066970) list_wheel_apps_pane_g4

0xc974,	// (0x00066978) list_wheel_apps_pane_g5

0x0004,

0xfadb,	// (0x00069adf) list_wheel_apps_pane_g

0xe47d,	// (0x00068481) navi_icon_text_pane

0xb38c,	// (0x00065390) aid_fill_nsta

0xc991,	// (0x00066995) navi_icon_text_pane_g1

0xc99d,	// (0x000669a1) navi_icon_text_pane_t1

0xa956,	// (0x0006495a) list_set_graphic_pane_t1_ParamLimits

0xa956,	// (0x0006495a) list_set_graphic_pane_t1

0x301c,	// (0x0005d020) popup_midp_note_alarm_window_t6_ParamLimits

0x301c,	// (0x0005d020) popup_midp_note_alarm_window_t6

0x302e,	// (0x0005d032) popup_midp_note_alarm_window_t7_ParamLimits

0x302e,	// (0x0005d032) popup_midp_note_alarm_window_t7

0x3040,	// (0x0005d044) popup_midp_note_alarm_window_t8_ParamLimits

0x3040,	// (0x0005d044) popup_midp_note_alarm_window_t8

0x3052,	// (0x0005d056) popup_midp_note_alarm_window_t9_ParamLimits

0x3052,	// (0x0005d056) popup_midp_note_alarm_window_t9

0x3064,	// (0x0005d068) popup_midp_note_alarm_window_t10_ParamLimits

0x3064,	// (0x0005d068) popup_midp_note_alarm_window_t10

0x3076,	// (0x0005d07a) popup_midp_note_alarm_window_t11_ParamLimits

0x3076,	// (0x0005d07a) popup_midp_note_alarm_window_t11

0x3088,	// (0x0005d08c) scroll_pane_cp17_ParamLimits

0x3088,	// (0x0005d08c) scroll_pane_cp17

0x04c4,	// (0x0005a4c8) volume_small_pane_cp_g1

0x0849,	// (0x0005a84d) volume_small_pane_cp_g2

0x0852,	// (0x0005a856) volume_small_pane_cp_g3

0x085b,	// (0x0005a85f) volume_small_pane_cp_g4

0x0864,	// (0x0005a868) volume_small_pane_cp_g5

0x086d,	// (0x0005a871) volume_small_pane_cp_g6

0x0876,	// (0x0005a87a) volume_small_pane_cp_g7

0x087f,	// (0x0005a883) volume_small_pane_cp_g8

0x0888,	// (0x0005a88c) volume_small_pane_cp_g9

0x0891,	// (0x0005a895) volume_small_pane_cp_g10

0x0034,	// (0x0005a038) midp_ticker_pane_g1_ParamLimits

0x0040,	// (0x0005a044) midp_ticker_pane_g2_ParamLimits

0xf763,	// (0x00069767) midp_ticker_pane_g_ParamLimits

0xaa89,	// (0x00064a8d) midp_ticker_pane_t1_ParamLimits

0xb3b0,	// (0x000653b4) aid_fill_nsta_2

0x28b7,	// (0x0005c8bb) list_form2_midp_pane

0x3bd3,	// (0x0005dbd7) midp_editing_number_pane_ParamLimits

0x3be2,	// (0x0005dbe6) midp_ticker_pane_ParamLimits

0x48a7,	// (0x0005e8ab) form2_midp_field_pane

0x48cb,	// (0x0005e8cf) scroll_pane_cp51

0x48eb,	// (0x0005e8ef) form2_midp_button_pane_ParamLimits

0x48eb,	// (0x0005e8ef) form2_midp_button_pane

0x48fd,	// (0x0005e901) form2_midp_content_pane_ParamLimits

0x48fd,	// (0x0005e901) form2_midp_content_pane

0x4917,	// (0x0005e91b) form2_midp_field_choice_group_pane

0x491f,	// (0x0005e923) form2_midp_field_pane_g1

0x4927,	// (0x0005e92b) form2_midp_field_pane_g2

0x492f,	// (0x0005e933) form2_midp_field_pane_g3

0x4937,	// (0x0005e93b) form2_midp_field_pane_g4

0x0003,

0xfb00,	// (0x00069b04) form2_midp_field_pane_g

0x493f,	// (0x0005e943) form2_midp_gauge_slider_pane

0x4947,	// (0x0005e94b) form2_midp_gauge_wait_pane

0x494f,	// (0x0005e953) form2_midp_image_pane_ParamLimits

0x494f,	// (0x0005e953) form2_midp_image_pane

0x496a,	// (0x0005e96e) form2_midp_label_pane_ParamLimits

0x496a,	// (0x0005e96e) form2_midp_label_pane

0xc9cb,	// (0x000669cf) form2_midp_label_pane_cp_ParamLimits

0xc9cb,	// (0x000669cf) form2_midp_label_pane_cp

0x49aa,	// (0x0005e9ae) form2_midp_string_pane_ParamLimits

0x49aa,	// (0x0005e9ae) form2_midp_string_pane

0xe8a9,	// (0x000688ad) form2_midp_text_pane_ParamLimits

0xe8a9,	// (0x000688ad) form2_midp_text_pane

0x49bc,	// (0x0005e9c0) form2_midp_time_pane

0x49cc,	// (0x0005e9d0) input_focus_pane_cp51_ParamLimits

0x49cc,	// (0x0005e9d0) input_focus_pane_cp51

0x49e4,	// (0x0005e9e8) form2_midp_label_pane_t1_ParamLimits

0x49e4,	// (0x0005e9e8) form2_midp_label_pane_t1

0xe8cc,	// (0x000688d0) form2_mdip_text_pane_t1_ParamLimits

0xe8cc,	// (0x000688d0) form2_mdip_text_pane_t1

0xe8eb,	// (0x000688ef) form2_midp_time_pane_t1

0x4a32,	// (0x0005ea36) form2_midp_gauge_slider_pane_t1

0xc9ec,	// (0x000669f0) form2_midp_gauge_slider_pane_t2

0xc9fe,	// (0x00066a02) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb09,	// (0x00069b0d) form2_midp_gauge_slider_pane_t

0x4a68,	// (0x0005ea6c) form2_midp_slider_pane

0x4a74,	// (0x0005ea78) form2_midp_gauge_wait_pane_t1

0x4a82,	// (0x0005ea86) form2_midp_wait_pane_ParamLimits

0x4a82,	// (0x0005ea86) form2_midp_wait_pane

0x25dc,	// (0x0005c5e0) list_single_2graphic_pane_cp4_ParamLimits

0x25dc,	// (0x0005c5e0) list_single_2graphic_pane_cp4

0x4aad,	// (0x0005eab1) list_single_midp_graphic_pane_cp_ParamLimits

0x4aad,	// (0x0005eab1) list_single_midp_graphic_pane_cp

0x545c,	// (0x0005f460) list_highlight_pane_cp20

0x4ad1,	// (0x0005ead5) list_single_2graphic_pane_g1_cp4

0x4068,	// (0x0005e06c) list_single_2graphic_pane_g2_cp4

0x4ad9,	// (0x0005eadd) list_single_2graphic_pane_t1_cp4

0x86f3,	// (0x000626f7) list_highlight_pane_cp21

0x4ae8,	// (0x0005eaec) list_single_midp_graphic_pane_g4_cp

0x4af7,	// (0x0005eafb) list_single_midp_graphic_pane_t1_cp

0xca10,	// (0x00066a14) form2_mdip_string_pane_t1_ParamLimits

0xca10,	// (0x00066a14) form2_mdip_string_pane_t1

0x545c,	// (0x0005f460) bg_wml_button_pane_cp2

0x5452,	// (0x0005f456) form2_midp_image_pane_g1

0xe09e,	// (0x000680a2) list_double_large_graphic_pane_g5_ParamLimits

0xe09e,	// (0x000680a2) list_double_large_graphic_pane_g5

0x196e,	// (0x0005b972) midp_form_pane_ParamLimits

0x86f3,	// (0x000626f7) main_apps_wheel_pane_ParamLimits

0xb0a4,	// (0x000650a8) popup_preview_window_ParamLimits

0xb0a4,	// (0x000650a8) popup_preview_window

0x1f36,	// (0x0005bf3a) popup_touch_info_window_ParamLimits

0x1f36,	// (0x0005bf3a) popup_touch_info_window

0x1f58,	// (0x0005bf5c) popup_touch_menu_window_ParamLimits

0x1f58,	// (0x0005bf5c) popup_touch_menu_window

0x5448,	// (0x0005f44c) bg_popup_sub_pane_cp6

0x4bb1,	// (0x0005ebb5) list_touch_menu_pane

0x4bb9,	// (0x0005ebbd) list_single_touch_menu_pane_ParamLimits

0x4bb9,	// (0x0005ebbd) list_single_touch_menu_pane

0x4bd1,	// (0x0005ebd5) list_single_touch_menu_pane_t1

0x86f3,	// (0x000626f7) bg_popup_sub_pane_cp7_ParamLimits

0x86f3,	// (0x000626f7) bg_popup_sub_pane_cp7

0x4bdf,	// (0x0005ebe3) heading_sub_pane

0x4be7,	// (0x0005ebeb) list_touch_info_pane_ParamLimits

0x4be7,	// (0x0005ebeb) list_touch_info_pane

0x4bf6,	// (0x0005ebfa) list_single_touch_info_pane_ParamLimits

0x4bf6,	// (0x0005ebfa) list_single_touch_info_pane

0x4c08,	// (0x0005ec0c) list_single_touch_info_pane_t1

0x4c16,	// (0x0005ec1a) list_single_touch_info_pane_t2

0x0001,

0xfb17,	// (0x00069b1b) list_single_touch_info_pane_t

0xf537,	// (0x0006953b) bg_popup_heading_pane_cp

0x4c24,	// (0x0005ec28) heading_sub_pane_t1

0x2523,	// (0x0005c527) bg_popup_preview_window_pane_cp_ParamLimits

0x2523,	// (0x0005c527) bg_popup_preview_window_pane_cp

0x4bdf,	// (0x0005ebe3) heading_preview_pane

0x4be7,	// (0x0005ebeb) list_preview_pane_ParamLimits

0x4be7,	// (0x0005ebeb) list_preview_pane

0x4c32,	// (0x0005ec36) popup_preview_window_g1

0x4bf6,	// (0x0005ebfa) list_single_preview_pane_ParamLimits

0x4bf6,	// (0x0005ebfa) list_single_preview_pane

0x4c3a,	// (0x0005ec3e) list_single_preview_pane_g1

0x4c42,	// (0x0005ec46) list_single_preview_pane_t1

0x4c08,	// (0x0005ec0c) list_single_preview_pane_t2

0x0001,

0xfb1c,	// (0x00069b20) list_single_preview_pane_t

0x4c50,	// (0x0005ec54) bg_popup_heading_pane_cp2_ParamLimits

0x4c50,	// (0x0005ec54) bg_popup_heading_pane_cp2

0x4c66,	// (0x0005ec6a) heading_preview_pane_g1

0x4c6e,	// (0x0005ec72) heading_preview_pane_t1_ParamLimits

0x4c6e,	// (0x0005ec72) heading_preview_pane_t1

0x8746,	// (0x0006274a) soft_indicator_pane_t1_ParamLimits

0x8c7b,	// (0x00062c7f) scroll_pane_ParamLimits

0x9079,	// (0x0006307d) scroll_sc2_left_pane

0x9082,	// (0x00063086) scroll_sc2_right_pane

0xbfad,	// (0x00065fb1) scroll_bg_pane_g1_ParamLimits

0xbfc2,	// (0x00065fc6) scroll_bg_pane_g2_ParamLimits

0xbfda,	// (0x00065fde) scroll_bg_pane_g3_ParamLimits

0xf6ee,	// (0x000696f2) scroll_bg_pane_g_ParamLimits

0xbfad,	// (0x00065fb1) scroll_handle_pane_g1_ParamLimits

0xbffc,	// (0x00066000) scroll_handle_pane_g2_ParamLimits

0xbfda,	// (0x00065fde) scroll_handle_pane_g3_ParamLimits

0xf6f5,	// (0x000696f9) scroll_handle_pane_g_ParamLimits

0x1996,	// (0x0005b99a) popup_choice_list_window_ParamLimits

0x1996,	// (0x0005b99a) popup_choice_list_window

0x23f9,	// (0x0005c3fd) choice_list_pane

0x247b,	// (0x0005c47f) cell_toolbar_pane_t1

0x24a3,	// (0x0005c4a7) toolbar_button_pane_ParamLimits

0x36f2,	// (0x0005d6f6) ai_gene_pane_1_t2_ParamLimits

0x36f2,	// (0x0005d6f6) ai_gene_pane_1_t2

0x0001,

0xf918,	// (0x0006991c) ai_gene_pane_1_t_ParamLimits

0xf918,	// (0x0006991c) ai_gene_pane_1_t

0x4c8b,	// (0x0005ec8f) scroll_sc2_left_pane_g1

0x4c8b,	// (0x0005ec8f) scroll_sc2_right_pane_g1

0x196e,	// (0x0005b972) bg_popup_sub_pane_cp10

0x4c95,	// (0x0005ec99) list_choice_list_pane

0x4cae,	// (0x0005ecb2) list_single_choice_list_pane_ParamLimits

0x4cae,	// (0x0005ecb2) list_single_choice_list_pane

0x4cc6,	// (0x0005ecca) list_single_choice_list_pane_g1

0x8e59,	// (0x00062e5d) list_single_choice_list_pane_t1_ParamLimits

0x8e59,	// (0x00062e5d) list_single_choice_list_pane_t1

0x4cce,	// (0x0005ecd2) choice_list_pane_g1

0x4cd6,	// (0x0005ecda) choice_list_pane_t1

0x5448,	// (0x0005f44c) input_focus_pane_cp11

0x8fd7,	// (0x00062fdb) title_pane_stacon_g2_ParamLimits

0x8fd7,	// (0x00062fdb) title_pane_stacon_g2

0x0002,

0xf6d4,	// (0x000696d8) title_pane_stacon_g_ParamLimits

0xf6d4,	// (0x000696d8) title_pane_stacon_g

0xf537,	// (0x0006953b) cursor_press_pane

0xad21,	// (0x00064d25) popup_fep_hwr_window_ParamLimits

0xad21,	// (0x00064d25) popup_fep_hwr_window

0x1ada,	// (0x0005bade) popup_fep_vkb_window_ParamLimits

0x1ada,	// (0x0005bade) popup_fep_vkb_window

0x4ce4,	// (0x0005ece8) cursor_press_pane_g1

0x0002,

0xfb45,	// (0x00069b49) fep_vkb_side_pane_g_ParamLimits

0x08d3,	// (0x0005a8d7) fep_hwr_candidate_pane_ParamLimits

0x08d3,	// (0x0005a8d7) fep_hwr_candidate_pane

0x08fd,	// (0x0005a901) fep_hwr_side_pane_ParamLimits

0x08fd,	// (0x0005a901) fep_hwr_side_pane

0x091f,	// (0x0005a923) fep_hwr_top_pane_ParamLimits

0x091f,	// (0x0005a923) fep_hwr_top_pane

0x0937,	// (0x0005a93b) fep_hwr_write_pane_ParamLimits

0x0937,	// (0x0005a93b) fep_hwr_write_pane

0xfb45,	// (0x00069b49) fep_vkb_side_pane_g

0x4cec,	// (0x0005ecf0) fep_hwr_top_pane_g1

0x4cfe,	// (0x0005ed02) fep_hwr_top_pane_g2

0x0971,	// (0x0005a975) fep_hwr_top_pane_g3

0x0002,

0xfb21,	// (0x00069b25) fep_hwr_top_pane_g

0x0986,	// (0x0005a98a) fep_hwr_top_text_pane

0xc0f6,	// (0x000660fa) fep_hwr_top_text_pane_g1

0x4d34,	// (0x0005ed38) fep_hwr_top_text_pane_t1

0x0a90,	// (0x0005aa94) fep_hwr_candidate_pane_g1

0x4f7f,	// (0x0005ef83) fep_vkb_keypad_pane_g3_ParamLimits

0x4f7f,	// (0x0005ef83) fep_vkb_keypad_pane_g3

0x4fab,	// (0x0005efaf) fep_vkb_keypad_pane_g4_ParamLimits

0x4fab,	// (0x0005efaf) fep_vkb_keypad_pane_g4

0x5022,	// (0x0005f026) fep_vkb_bottom_pane_g2_ParamLimits

0x5022,	// (0x0005f026) fep_vkb_bottom_pane_g2

0x0001,

0xfb4c,	// (0x00069b50) fep_vkb_bottom_pane_g_ParamLimits

0xfb4c,	// (0x00069b50) fep_vkb_bottom_pane_g

0x4c8b,	// (0x0005ec8f) cell_vkb_side_pane_g2

0x0001,

0xfb56,	// (0x00069b5a) cell_vkb_side_pane_g

0x50ad,	// (0x0005f0b1) cell_vkb_side_pane_t1

0x50bb,	// (0x0005f0bf) cell_vkb_side_pane_t1_copy1

0x4c8b,	// (0x0005ec8f) bg_fep_vkb_candidate_pane_g2

0x51ff,	// (0x0005f203) cell_vkb_candidate_pane_ParamLimits

0x4d42,	// (0x0005ed46) aid_size_cell_vkb_ParamLimits

0x4d42,	// (0x0005ed46) aid_size_cell_vkb

0x51ff,	// (0x0005f203) cell_vkb_candidate_pane

0x0ab7,	// (0x0005aabb) bg_popup_fep_shadow_pane_g1

0xcac5,	// (0x00066ac9) fep_vkb_bottom_pane_ParamLimits

0xcac5,	// (0x00066ac9) fep_vkb_bottom_pane

0x4e11,	// (0x0005ee15) fep_vkb_candidate_pane_ParamLimits

0x4e11,	// (0x0005ee15) fep_vkb_candidate_pane

0xcaf1,	// (0x00066af5) fep_vkb_keypad_pane_ParamLimits

0xcaf1,	// (0x00066af5) fep_vkb_keypad_pane

0xcb18,	// (0x00066b1c) fep_vkb_side_pane_ParamLimits

0xcb18,	// (0x00066b1c) fep_vkb_side_pane

0xcb54,	// (0x00066b58) fep_vkb_top_pane_ParamLimits

0xcb54,	// (0x00066b58) fep_vkb_top_pane

0x4ed8,	// (0x0005eedc) fep_vkb_top_pane_g1_ParamLimits

0x4ed8,	// (0x0005eedc) fep_vkb_top_pane_g1

0x4ee7,	// (0x0005eeeb) fep_vkb_top_pane_g2_ParamLimits

0x4ee7,	// (0x0005eeeb) fep_vkb_top_pane_g2

0x4ef6,	// (0x0005eefa) fep_vkb_top_pane_g3_ParamLimits

0x4ef6,	// (0x0005eefa) fep_vkb_top_pane_g3

0x0003,

0xfb3c,	// (0x00069b40) fep_vkb_top_pane_g_ParamLimits

0xfb3c,	// (0x00069b40) fep_vkb_top_pane_g

0x4f14,	// (0x0005ef18) fep_vkb_top_text_pane_ParamLimits

0x4f14,	// (0x0005ef18) fep_vkb_top_text_pane

0xcb90,	// (0x00066b94) fep_vkb_side_pane_g1_ParamLimits

0xcb90,	// (0x00066b94) fep_vkb_side_pane_g1

0x4f6e,	// (0x0005ef72) grid_vkb_side_pane_ParamLimits

0x4f6e,	// (0x0005ef72) grid_vkb_side_pane

0x0abf,	// (0x0005aac3) bg_popup_fep_shadow_pane_g2

0x0ac8,	// (0x0005aacc) bg_popup_fep_shadow_pane_g3

0x0ad0,	// (0x0005aad4) bg_popup_fep_shadow_pane_g4

0x0ad9,	// (0x0005aadd) bg_popup_fep_shadow_pane_g5

0x0ae3,	// (0x0005aae7) bg_popup_fep_shadow_pane_g6

0x0aeb,	// (0x0005aaef) bg_popup_fep_shadow_pane_g7

0x8d7b,	// (0x00062d7f) bg_popup_fep_shadow_pane_g8

0x4fcd,	// (0x0005efd1) grid_vkb_keypad_number_pane_ParamLimits

0x4fcd,	// (0x0005efd1) grid_vkb_keypad_number_pane

0x4fe1,	// (0x0005efe5) grid_vkb_keypad_pane_ParamLimits

0x4fe1,	// (0x0005efe5) grid_vkb_keypad_pane

0x5007,	// (0x0005f00b) fep_vkb_bottom_pane_g1_ParamLimits

0x5007,	// (0x0005f00b) fep_vkb_bottom_pane_g1

0x5030,	// (0x0005f034) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x5030,	// (0x0005f034) grid_vkb_keypad_bottom_left_pane

0x5045,	// (0x0005f049) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x5045,	// (0x0005f049) grid_vkb_keypad_bottom_right_pane

0x505a,	// (0x0005f05e) fep_vkb_top_text_pane_g1

0xcbd7,	// (0x00066bdb) fep_vkb_top_text_pane_t1

0xcbe9,	// (0x00066bed) cell_vkb_side_pane_ParamLimits

0xcbe9,	// (0x00066bed) cell_vkb_side_pane

0x4c8b,	// (0x0005ec8f) cell_vkb_side_pane_g1

0x50c9,	// (0x0005f0cd) cell_vkb_keypad_pane_ParamLimits

0x50c9,	// (0x0005f0cd) cell_vkb_keypad_pane

0x5156,	// (0x0005f15a) cell_vkb_keypad_pane_g1

0x0008,

0xfb69,	// (0x00069b6d) bg_popup_fep_shadow_pane_g

0x0afd,	// (0x0005ab01) cell_hwr_side_pane_g1

0x0afd,	// (0x0005ab01) cell_hwr_side_pane_g2

0x5160,	// (0x0005f164) cell_vkb_keypad_pane_t1

0xcbff,	// (0x00066c03) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcbff,	// (0x00066c03) cell_vkb_keypad_bottom_left_pane

0xcc14,	// (0x00066c18) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcc14,	// (0x00066c18) cell_vkb_keypad_bottom_right_pane

0x4c8b,	// (0x0005ec8f) cell_vkb_keypad_bottom_left_pane_g1

0x4c8b,	// (0x0005ec8f) cell_vkb_keypad_bottom_right_pane_g1

0x51c4,	// (0x0005f1c8) cell_vkb_keypad_number_pane_ParamLimits

0x51c4,	// (0x0005f1c8) cell_vkb_keypad_number_pane

0x51e3,	// (0x0005f1e7) cell_vkb_keypad_number_pane_g1

0x51ed,	// (0x0005f1f1) cell_vkb_keypad_number_pane_g2

0x51f6,	// (0x0005f1fa) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb5b,	// (0x00069b5f) cell_vkb_keypad_number_pane_g

0x5160,	// (0x0005f164) cell_vkb_keypad_number_pane_t1

0x5220,	// (0x0005f224) fep_vkb_candidate_pane_g1

0x0001,

0xfb7c,	// (0x00069b80) cell_hwr_side_pane_g

0x5239,	// (0x0005f23d) cell_hwr_side_pane_t1

0x0b07,	// (0x0005ab0b) cell_hwr_side_pane_t1_copy1

0x0b15,	// (0x0005ab19) cell_hwr_candidate_pane_g1

0x0b44,	// (0x0005ab48) cell_hwr_candidate_pane_t1

0x4c8b,	// (0x0005ec8f) cell_vkb_candidate_pane_g2

0x527d,	// (0x0005f281) cell_vkb_candidate_pane_t1

0x089a,	// (0x0005a89e) bg_popup_fep_shadow_pane_ParamLimits

0x089a,	// (0x0005a89e) bg_popup_fep_shadow_pane

0x0951,	// (0x0005a955) bg_fep_hwr_top_pane_g4

0x4d10,	// (0x0005ed14) bg_hwr_side_pane_g1_ParamLimits

0x4d10,	// (0x0005ed14) bg_hwr_side_pane_g1

0xb91a,	// (0x0006591e) cell_hwr_side_pane_ParamLimits

0xb91a,	// (0x0006591e) cell_hwr_side_pane

0x0a01,	// (0x0005aa05) fep_hwr_write_pane_g1_ParamLimits

0x0a01,	// (0x0005aa05) fep_hwr_write_pane_g1

0x0a0e,	// (0x0005aa12) fep_hwr_write_pane_g2_ParamLimits

0x0a0e,	// (0x0005aa12) fep_hwr_write_pane_g2

0x0a1b,	// (0x0005aa1f) fep_hwr_write_pane_g3_ParamLimits

0x0a1b,	// (0x0005aa1f) fep_hwr_write_pane_g3

0xb93a,	// (0x0006593e) fep_hwr_write_pane_g4_ParamLimits

0xb93a,	// (0x0006593e) fep_hwr_write_pane_g4

0x0005,

0xfb28,	// (0x00069b2c) fep_hwr_write_pane_g_ParamLimits

0xfb28,	// (0x00069b2c) fep_hwr_write_pane_g

0x0951,	// (0x0005a955) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0951,	// (0x0005a955) bg_fep_hwr_candidate_pane_g2

0x0a3e,	// (0x0005aa42) cell_hwr_candidate_pane_ParamLimits

0x0a3e,	// (0x0005aa42) cell_hwr_candidate_pane

0x0a90,	// (0x0005aa94) fep_hwr_candidate_pane_g1_ParamLimits

0x4d70,	// (0x0005ed74) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4d70,	// (0x0005ed74) bg_popup_fep_shadow_pane_cp2

0x4f06,	// (0x0005ef0a) fep_vkb_top_pane_g4_ParamLimits

0x4f06,	// (0x0005ef0a) fep_vkb_top_pane_g4

0x4f4c,	// (0x0005ef50) fep_vkb_side_pane_g2_ParamLimits

0x4f4c,	// (0x0005ef50) fep_vkb_side_pane_g2

0xa3b3,	// (0x000643b7) list_setting_pane_t4_ParamLimits

0xa3b3,	// (0x000643b7) list_setting_pane_t4

0xa44f,	// (0x00064453) list_setting_number_pane_t5_ParamLimits

0xa44f,	// (0x00064453) list_setting_number_pane_t5

0xa7c0,	// (0x000647c4) list_double_heading_pane_cp2_ParamLimits

0xa7c0,	// (0x000647c4) list_double_heading_pane_cp2

0x528b,	// (0x0005f28f) list_double_heading_pane_g1_cp2_ParamLimits

0x528b,	// (0x0005f28f) list_double_heading_pane_g1_cp2

0x5297,	// (0x0005f29b) list_double_heading_pane_g2_cp2_ParamLimits

0x5297,	// (0x0005f29b) list_double_heading_pane_g2_cp2

0x52ab,	// (0x0005f2af) list_double_heading_pane_t1_cp2_ParamLimits

0x52ab,	// (0x0005f2af) list_double_heading_pane_t1_cp2

0x52c1,	// (0x0005f2c5) list_double_heading_pane_t2_cp2_ParamLimits

0x52c1,	// (0x0005f2c5) list_double_heading_pane_t2_cp2

0x5440,	// (0x0005f444) aid_value_unit2

0xefa0,	// (0x00068fa4) popup_preview_fixed_window

0x8826,	// (0x0006282a) bg_popup_preview_window_pane_cp02

0x52d3,	// (0x0005f2d7) list_preview_fixed_pane

0x5319,	// (0x0005f31d) list_empty_pane_fp_ParamLimits

0x5319,	// (0x0005f31d) list_empty_pane_fp

0x5319,	// (0x0005f31d) list_single_cale_day_pane_fp_ParamLimits

0x5319,	// (0x0005f31d) list_single_cale_day_pane_fp

0x5319,	// (0x0005f31d) list_single_graphic_heading_pane_fp_ParamLimits

0x5319,	// (0x0005f31d) list_single_graphic_heading_pane_fp

0x5319,	// (0x0005f31d) list_single_graphic_pane_fp_ParamLimits

0x5319,	// (0x0005f31d) list_single_graphic_pane_fp

0x5319,	// (0x0005f31d) list_single_heading_pane_fp_ParamLimits

0x5319,	// (0x0005f31d) list_single_heading_pane_fp

0x5319,	// (0x0005f31d) list_single_pane_fp_ParamLimits

0x5319,	// (0x0005f31d) list_single_pane_fp

0x5332,	// (0x0005f336) list_single_pane_fp_g1_ParamLimits

0x5332,	// (0x0005f336) list_single_pane_fp_g1

0x528b,	// (0x0005f28f) list_single_pane_fp_g2_ParamLimits

0x528b,	// (0x0005f28f) list_single_pane_fp_g2

0x5297,	// (0x0005f29b) list_single_pane_fp_g3_ParamLimits

0x5297,	// (0x0005f29b) list_single_pane_fp_g3

0x533e,	// (0x0005f342) list_single_pane_fp_g4_ParamLimits

0x533e,	// (0x0005f342) list_single_pane_fp_g4

0x0003,

0xfb8f,	// (0x00069b93) list_single_pane_fp_g_ParamLimits

0xfb8f,	// (0x00069b93) list_single_pane_fp_g

0xe8fe,	// (0x00068902) list_single_pane_fp_t1_ParamLimits

0xe8fe,	// (0x00068902) list_single_pane_fp_t1

0xe915,	// (0x00068919) list_single_graphic_pane_fp_g1_ParamLimits

0xe915,	// (0x00068919) list_single_graphic_pane_fp_g1

0x5332,	// (0x0005f336) list_single_graphic_pane_fp_g2_ParamLimits

0x5332,	// (0x0005f336) list_single_graphic_pane_fp_g2

0x528b,	// (0x0005f28f) list_single_graphic_pane_fp_g3_ParamLimits

0x528b,	// (0x0005f28f) list_single_graphic_pane_fp_g3

0x5297,	// (0x0005f29b) list_single_graphic_pane_fp_g4_ParamLimits

0x5297,	// (0x0005f29b) list_single_graphic_pane_fp_g4

0x533e,	// (0x0005f342) list_single_graphic_pane_fp_g5_ParamLimits

0x533e,	// (0x0005f342) list_single_graphic_pane_fp_g5

0x0004,

0xfb98,	// (0x00069b9c) list_single_graphic_pane_fp_g_ParamLimits

0xfb98,	// (0x00069b9c) list_single_graphic_pane_fp_g

0xe921,	// (0x00068925) list_single_graphic_pane_fp_t1_ParamLimits

0xe921,	// (0x00068925) list_single_graphic_pane_fp_t1

0xe915,	// (0x00068919) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xe915,	// (0x00068919) list_single_graphic_heading_pane_fp_g1

0x5332,	// (0x0005f336) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5332,	// (0x0005f336) list_single_graphic_heading_pane_fp_g2

0x528b,	// (0x0005f28f) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x528b,	// (0x0005f28f) list_single_graphic_heading_pane_fp_g3

0x5297,	// (0x0005f29b) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5297,	// (0x0005f29b) list_single_graphic_heading_pane_fp_g4

0x533e,	// (0x0005f342) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x533e,	// (0x0005f342) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb98,	// (0x00069b9c) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb98,	// (0x00069b9c) list_single_graphic_heading_pane_fp_g

0xe937,	// (0x0006893b) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xe937,	// (0x0006893b) list_single_graphic_heading_pane_fp_t1

0xe94d,	// (0x00068951) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xe94d,	// (0x00068951) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba3,	// (0x00069ba7) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba3,	// (0x00069ba7) list_single_graphic_heading_pane_fp_t

0xe95f,	// (0x00068963) list_single_cale_day_pane_fp_g1_ParamLimits

0xe95f,	// (0x00068963) list_single_cale_day_pane_fp_g1

0x534a,	// (0x0005f34e) list_single_cale_day_pane_fp_g2_ParamLimits

0x534a,	// (0x0005f34e) list_single_cale_day_pane_fp_g2

0x3536,	// (0x0005d53a) list_single_cale_day_pane_fp_g3_ParamLimits

0x3536,	// (0x0005d53a) list_single_cale_day_pane_fp_g3

0x355e,	// (0x0005d562) list_single_cale_day_pane_fp_g4_ParamLimits

0x355e,	// (0x0005d562) list_single_cale_day_pane_fp_g4

0x3582,	// (0x0005d586) list_single_cale_day_pane_fp_g5_ParamLimits

0x3582,	// (0x0005d586) list_single_cale_day_pane_fp_g5

0x0004,

0xfba8,	// (0x00069bac) list_single_cale_day_pane_fp_g_ParamLimits

0xfba8,	// (0x00069bac) list_single_cale_day_pane_fp_g

0xe997,	// (0x0006899b) list_single_cale_day_pane_fp_t1_ParamLimits

0xe997,	// (0x0006899b) list_single_cale_day_pane_fp_t1

0xe9bd,	// (0x000689c1) list_single_cale_day_pane_fp_t2_ParamLimits

0xe9bd,	// (0x000689c1) list_single_cale_day_pane_fp_t2

0xe9d6,	// (0x000689da) list_single_cale_day_pane_fp_t3_ParamLimits

0xe9d6,	// (0x000689da) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb3,	// (0x00069bb7) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb3,	// (0x00069bb7) list_single_cale_day_pane_fp_t

0x5332,	// (0x0005f336) list_empty_pane_fp_g1_ParamLimits

0x5332,	// (0x0005f336) list_empty_pane_fp_g1

0xe9ef,	// (0x000689f3) list_empty_pane_fp_t1

0xe9fd,	// (0x00068a01) list_empty_pane_fp_t2

0x0001,

0xfbba,	// (0x00069bbe) list_empty_pane_fp_t

0x5332,	// (0x0005f336) list_single_heading_pane_fp_g1_ParamLimits

0x5332,	// (0x0005f336) list_single_heading_pane_fp_g1

0x528b,	// (0x0005f28f) list_single_heading_pane_fp_g2_ParamLimits

0x528b,	// (0x0005f28f) list_single_heading_pane_fp_g2

0x5297,	// (0x0005f29b) list_single_heading_pane_fp_g3_ParamLimits

0x5297,	// (0x0005f29b) list_single_heading_pane_fp_g3

0x0002,

0xfbbf,	// (0x00069bc3) list_single_heading_pane_fp_g_ParamLimits

0xfbbf,	// (0x00069bc3) list_single_heading_pane_fp_g

0xea0b,	// (0x00068a0f) list_single_heading_pane_fp_t1_ParamLimits

0xea0b,	// (0x00068a0f) list_single_heading_pane_fp_t1

0xea1d,	// (0x00068a21) list_single_heading_pane_fp_t2_ParamLimits

0xea1d,	// (0x00068a21) list_single_heading_pane_fp_t2

0x0001,

0xfbc6,	// (0x00069bca) list_single_heading_pane_fp_t_ParamLimits

0xfbc6,	// (0x00069bca) list_single_heading_pane_fp_t

0x8e6e,	// (0x00062e72) aid_size_cell_fast

0x8809,	// (0x0006280d) soft_indicator_pane_cp1_t1

0x8eab,	// (0x00062eaf) cell_app_pane_cp2_ParamLimits

0x8eab,	// (0x00062eaf) cell_app_pane_cp2

0x08bc,	// (0x0005a8c0) fep_hwr_candidate_drop_down_list_pane

0x0aaa,	// (0x0005aaae) fep_hwr_candidate_pane_g3_ParamLimits

0x0aaa,	// (0x0005aaae) fep_hwr_candidate_pane_g3

0xcaa6,	// (0x00066aaa) fep_hwr_candidate_pane_g4_ParamLimits

0xcaa6,	// (0x00066aaa) fep_hwr_candidate_pane_g4

0x0002,

0xfb35,	// (0x00069b39) fep_hwr_candidate_pane_g_ParamLimits

0xfb35,	// (0x00069b39) fep_hwr_candidate_pane_g

0x4e00,	// (0x0005ee04) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4e00,	// (0x0005ee04) fep_vkb_candidate_drop_down_list_pane

0x5228,	// (0x0005f22c) fep_vkb_candidate_pane_g3

0x5230,	// (0x0005f234) fep_vkb_candidate_pane_g4

0x0002,

0xfb62,	// (0x00069b66) fep_vkb_candidate_pane_g

0x0b15,	// (0x0005ab19) cell_hwr_candidate_pane_g1_ParamLimits

0x0b23,	// (0x0005ab27) cell_hwr_candidate_pane_g3_ParamLimits

0x0b23,	// (0x0005ab27) cell_hwr_candidate_pane_g3

0x54c4,	// (0x0005f4c8) cell_hwr_candidate_pane_g4_ParamLimits

0x54c4,	// (0x0005f4c8) cell_hwr_candidate_pane_g4

0x0002,

0xfb81,	// (0x00069b85) cell_hwr_candidate_pane_g_ParamLimits

0xfb81,	// (0x00069b85) cell_hwr_candidate_pane_g

0x5247,	// (0x0005f24b) cell_vkb_candidate_pane_g3_ParamLimits

0x5247,	// (0x0005f24b) cell_vkb_candidate_pane_g3

0x5262,	// (0x0005f266) cell_vkb_candidate_pane_g4_ParamLimits

0x5262,	// (0x0005f266) cell_vkb_candidate_pane_g4

0x5356,	// (0x0005f35a) cell_app_pane_cp2_g1_ParamLimits

0x5356,	// (0x0005f35a) cell_app_pane_cp2_g1

0x5374,	// (0x0005f378) cell_app_pane_cp2_g2_ParamLimits

0x5374,	// (0x0005f378) cell_app_pane_cp2_g2

0x0001,

0xfbcb,	// (0x00069bcf) cell_app_pane_cp2_g_ParamLimits

0xfbcb,	// (0x00069bcf) cell_app_pane_cp2_g

0x5380,	// (0x0005f384) cell_app_pane_cp2_t1_ParamLimits

0x5380,	// (0x0005f384) cell_app_pane_cp2_t1

0x8d08,	// (0x00062d0c) grid_highlight_pane_cp1_ParamLimits

0x8d08,	// (0x00062d0c) grid_highlight_pane_cp1

0x0b62,	// (0x0005ab66) cell_hwr_candidate_pane_cp1_ParamLimits

0x0b62,	// (0x0005ab66) cell_hwr_candidate_pane_cp1

0x0b15,	// (0x0005ab19) fep_hwr_candidate_drop_down_list_pane_g1

0x0b86,	// (0x0005ab8a) fep_hwr_candidate_drop_down_list_pane_g2

0x0b93,	// (0x0005ab97) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd0,	// (0x00069bd4) fep_hwr_candidate_drop_down_list_pane_g

0x0ba0,	// (0x0005aba4) fep_hwr_candidate_drop_down_list_scroll_pane

0x0ba9,	// (0x0005abad) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0ba9,	// (0x0005abad) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x0bb6,	// (0x0005abba) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x0bb6,	// (0x0005abba) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x0bc3,	// (0x0005abc7) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x0bc3,	// (0x0005abc7) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x0bd0,	// (0x0005abd4) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0bd0,	// (0x0005abd4) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x0beb,	// (0x0005abef) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x0beb,	// (0x0005abef) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x0c06,	// (0x0005ac0a) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x0c06,	// (0x0005ac0a) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x0c21,	// (0x0005ac25) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x0c21,	// (0x0005ac25) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x0c3c,	// (0x0005ac40) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x0c3c,	// (0x0005ac40) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd7,	// (0x00069bdb) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd7,	// (0x00069bdb) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5392,	// (0x0005f396) cell_vkb_candidate_pane_cp1_ParamLimits

0x5392,	// (0x0005f396) cell_vkb_candidate_pane_cp1

0x4f06,	// (0x0005ef0a) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4f06,	// (0x0005ef0a) fep_vkb_candidate_drop_down_list_pane_g1

0x53b8,	// (0x0005f3bc) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x53b8,	// (0x0005f3bc) fep_vkb_candidate_drop_down_list_pane_g2

0x53c5,	// (0x0005f3c9) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x53c5,	// (0x0005f3c9) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe8,	// (0x00069bec) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe8,	// (0x00069bec) fep_vkb_candidate_drop_down_list_pane_g

0x54e5,	// (0x0005f4e9) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x54e5,	// (0x0005f4e9) fep_vkb_candidate_drop_down_list_scroll_pane

0x54f2,	// (0x0005f4f6) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x54f2,	// (0x0005f4f6) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x54ff,	// (0x0005f503) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x54ff,	// (0x0005f503) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x550b,	// (0x0005f50f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x550b,	// (0x0005f50f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x53d2,	// (0x0005f3d6) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x53d2,	// (0x0005f3d6) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x53f3,	// (0x0005f3f7) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x53f3,	// (0x0005f3f7) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5517,	// (0x0005f51b) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5517,	// (0x0005f51b) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5538,	// (0x0005f53c) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5538,	// (0x0005f53c) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5559,	// (0x0005f55d) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5559,	// (0x0005f55d) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbef,	// (0x00069bf3) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbef,	// (0x00069bf3) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9c17,	// (0x00063c1b) title_pane_g1_ParamLimits

0x9c2a,	// (0x00063c2e) title_pane_g2_ParamLimits

0xf554,	// (0x00069558) title_pane_g_ParamLimits

0xc0e6,	// (0x000660ea) aid_call2_pane

0xc0ee,	// (0x000660f2) aid_call_pane

0xc0f6,	// (0x000660fa) popup_clock_analogue_window_g1

0xc0f6,	// (0x000660fa) popup_clock_analogue_window_g2

0xf26b,	// (0x0006926f) popup_clock_analogue_window_g3

0xf274,	// (0x00069278) popup_clock_analogue_window_g4

0x5452,	// (0x0005f456) popup_clock_analogue_window_g5

0x0004,

0xf703,	// (0x00069707) popup_clock_analogue_window_g

0xf27c,	// (0x00069280) popup_clock_analogue_window_t1

0xf28a,	// (0x0006928e) clock_digital_number_pane_ParamLimits

0xf28a,	// (0x0006928e) clock_digital_number_pane

0xf296,	// (0x0006929a) clock_digital_number_pane_cp02_ParamLimits

0xf296,	// (0x0006929a) clock_digital_number_pane_cp02

0xf2a2,	// (0x000692a6) clock_digital_number_pane_cp03_ParamLimits

0xf2a2,	// (0x000692a6) clock_digital_number_pane_cp03

0xf2ae,	// (0x000692b2) clock_digital_number_pane_cp04_ParamLimits

0xf2ae,	// (0x000692b2) clock_digital_number_pane_cp04

0xf2ba,	// (0x000692be) clock_digital_separator_pane_ParamLimits

0xf2ba,	// (0x000692be) clock_digital_separator_pane

0xf2c6,	// (0x000692ca) popup_clock_digital_window_t1_ParamLimits

0xf2c6,	// (0x000692ca) popup_clock_digital_window_t1

0x5452,	// (0x0005f456) clock_digital_number_pane_g1

0x5452,	// (0x0005f456) clock_digital_number_pane_g2

0x0001,

0xf70e,	// (0x00069712) clock_digital_number_pane_g

0x5452,	// (0x0005f456) clock_digital_separator_pane_g1

0x5452,	// (0x0005f456) clock_digital_separator_pane_g2

0x0001,

0xf70e,	// (0x00069712) clock_digital_separator_pane_g

0xb38c,	// (0x00065390) aid_fill_nsta_ParamLimits

0xb4c4,	// (0x000654c8) indicator_nsta_pane_ParamLimits

0x2286,	// (0x0005c28a) popup_clock_analogue_window

0x2286,	// (0x0005c28a) popup_clock_digital_window

0xc8bf,	// (0x000668c3) grid_indicator_nsta_pane_ParamLimits

0x46b8,	// (0x0005e6bc) clock_nsta_pane_t2

0x0001,

0xfab5,	// (0x00069ab9) clock_nsta_pane_t

0xf238,	// (0x0006923c) aid_size_max_handle

0xa733,	// (0x00064737) aid_size_min_handle

0xf537,	// (0x0006953b) editor_scroll_pane

0x5574,	// (0x0005f578) ex_editor_pane

0x8e34,	// (0x00062e38) scroll_pane_cp13

0x8ca7,	// (0x00062cab) scroll_pane_cp14

0xc125,	// (0x00066129) scroll_pane_cp36

0xa7d3,	// (0x000647d7) list_single_graphic_hl_pane_cp2_ParamLimits

0xa7d3,	// (0x000647d7) list_single_graphic_hl_pane_cp2

0xc75b,	// (0x0006675f) list_single_graphic_hl_pane_ParamLimits

0xc75b,	// (0x0006675f) list_single_graphic_hl_pane

0xea33,	// (0x00068a37) aid_size_min_hl_cp1

0x557c,	// (0x0005f580) list_highlight_pane_cp34_ParamLimits

0x557c,	// (0x0005f580) list_highlight_pane_cp34

0x558d,	// (0x0005f591) list_single_graphic_hl_pane_g1_ParamLimits

0x558d,	// (0x0005f591) list_single_graphic_hl_pane_g1

0xb94f,	// (0x00065953) list_single_graphic_hl_pane_g2_ParamLimits

0xb94f,	// (0x00065953) list_single_graphic_hl_pane_g2

0xb94f,	// (0x00065953) list_single_graphic_hl_pane_g3_ParamLimits

0xb94f,	// (0x00065953) list_single_graphic_hl_pane_g3

0xcc2f,	// (0x00066c33) list_single_graphic_hl_pane_g4_ParamLimits

0xcc2f,	// (0x00066c33) list_single_graphic_hl_pane_g4

0x55ca,	// (0x0005f5ce) list_single_graphic_hl_pane_g5_ParamLimits

0x55ca,	// (0x0005f5ce) list_single_graphic_hl_pane_g5

0x0004,

0xfc00,	// (0x00069c04) list_single_graphic_hl_pane_g_ParamLimits

0xfc00,	// (0x00069c04) list_single_graphic_hl_pane_g

0xb95b,	// (0x0006595f) list_single_graphic_hl_pane_t1_ParamLimits

0xb95b,	// (0x0006595f) list_single_graphic_hl_pane_t1

0x559a,	// (0x0005f59e) aid_size_min_hl_cp2

0x55a3,	// (0x0005f5a7) list_highlight_pane_cp34_cp2_ParamLimits

0x55a3,	// (0x0005f5a7) list_highlight_pane_cp34_cp2

0x558d,	// (0x0005f591) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x558d,	// (0x0005f591) list_single_graphic_hl_pane_g1_cp2

0x55b0,	// (0x0005f5b4) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x55b0,	// (0x0005f5b4) list_single_graphic_hl_pane_g2_cp2

0xcc3b,	// (0x00066c3f) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcc3b,	// (0x00066c3f) list_single_graphic_hl_pane_g3_cp2

0xcc2f,	// (0x00066c33) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xcc2f,	// (0x00066c33) list_single_graphic_hl_pane_g4_cp2

0x55ca,	// (0x0005f5ce) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x55ca,	// (0x0005f5ce) list_single_graphic_hl_pane_g5_cp2

0xaaf3,	// (0x00064af7) control_pane_g4_ParamLimits

0xaaf3,	// (0x00064af7) control_pane_g4

0x196e,	// (0x0005b972) bg_popup_sub_pane_cp10_ParamLimits

0x4c95,	// (0x0005ec99) list_choice_list_pane_ParamLimits

0x4ca4,	// (0x0005eca8) scroll_pane_cp23

0x8826,	// (0x0006282a) bg_popup_preview_window_pane_cp02_ParamLimits

0x52d3,	// (0x0005f2d7) list_preview_fixed_pane_ParamLimits

0x52e9,	// (0x0005f2ed) list_preview_fixed_pane_cp_ParamLimits

0x52e9,	// (0x0005f2ed) list_preview_fixed_pane_cp

0x52f5,	// (0x0005f2f9) popup_preview_fixed_window_g1_ParamLimits

0x52f5,	// (0x0005f2f9) popup_preview_fixed_window_g1

0x5301,	// (0x0005f305) popup_preview_fixed_window_g2_ParamLimits

0x5301,	// (0x0005f305) popup_preview_fixed_window_g2

0x0002,

0xfb88,	// (0x00069b8c) popup_preview_fixed_window_g_ParamLimits

0xfb88,	// (0x00069b8c) popup_preview_fixed_window_g

0xf1aa,	// (0x000691ae) aid_navi_side_left_pane_ParamLimits

0xf1bf,	// (0x000691c3) aid_navi_side_right_pane_ParamLimits

0xf1d7,	// (0x000691db) navi_icon_pane_stacon_ParamLimits

0xf1eb,	// (0x000691ef) navi_navi_pane_stacon_ParamLimits

0xf1d7,	// (0x000691db) navi_text_pane_stacon_ParamLimits

0x5448,	// (0x0005f44c) main_text_info_pane

0x55f4,	// (0x0005f5f8) listscroll_text_info_pane

0x55fc,	// (0x0005f600) list_text_info_pane_ParamLimits

0x55fc,	// (0x0005f600) list_text_info_pane

0x560b,	// (0x0005f60f) scroll_pane_cp24_ParamLimits

0x560b,	// (0x0005f60f) scroll_pane_cp24

0xcc49,	// (0x00066c4d) list_text_info_pane_t1_ParamLimits

0xcc49,	// (0x00066c4d) list_text_info_pane_t1

0xac85,	// (0x00064c89) popup_fast_swap2_window_ParamLimits

0xac85,	// (0x00064c89) popup_fast_swap2_window

0x564e,	// (0x0005f652) aid_size_cell_fast2

0x5448,	// (0x0005f44c) bg_popup_window_pane_cp17

0x28e3,	// (0x0005c8e7) heading_pane_cp2

0x8a2c,	// (0x00062a30) listscroll_fast2_pane

0x5658,	// (0x0005f65c) grid_fast2_pane

0x5662,	// (0x0005f666) listscroll_fast2_pane_g1

0x566c,	// (0x0005f670) listscroll_fast2_pane_g2

0x0001,

0xfc0b,	// (0x00069c0f) listscroll_fast2_pane_g

0x8e34,	// (0x00062e38) scroll_pane_cp26

0x5676,	// (0x0005f67a) cell_fast2_pane_ParamLimits

0x5676,	// (0x0005f67a) cell_fast2_pane

0x568d,	// (0x0005f691) cell_fast2_pane_g1

0x5696,	// (0x0005f69a) cell_fast2_pane_g2

0x569f,	// (0x0005f6a3) cell_fast2_pane_g3

0x0002,

0xfc10,	// (0x00069c14) cell_fast2_pane_g

0x8a6e,	// (0x00062a72) grid_highlight_pane_cp9

0x8a83,	// (0x00062a87) main_eswt_pane_ParamLimits

0x8a83,	// (0x00062a87) main_eswt_pane

0x5620,	// (0x0005f624) list_single_text_info_pane

0x56a7,	// (0x0005f6ab) eswt_ctrl_button_pane

0x56a7,	// (0x0005f6ab) eswt_ctrl_canvas_pane

0x56af,	// (0x0005f6b3) eswt_ctrl_combo_pane

0x56a7,	// (0x0005f6ab) eswt_ctrl_default_pane

0x56a7,	// (0x0005f6ab) eswt_ctrl_label_pane

0x56b7,	// (0x0005f6bb) eswt_ctrl_wait_pane

0x56bf,	// (0x0005f6c3) eswt_shell_pane

0x5448,	// (0x0005f44c) listscroll_eswt_app_pane

0x56df,	// (0x0005f6e3) popup_eswt_tasktip_window_ParamLimits

0x56df,	// (0x0005f6e3) popup_eswt_tasktip_window

0x2523,	// (0x0005c527) bg_popup_window_pane_cp18

0x56f0,	// (0x0005f6f4) eswt_control_pane_g1_ParamLimits

0x56f0,	// (0x0005f6f4) eswt_control_pane_g1

0x56fd,	// (0x0005f701) eswt_control_pane_g2_ParamLimits

0x56fd,	// (0x0005f701) eswt_control_pane_g2

0x570a,	// (0x0005f70e) eswt_control_pane_g3_ParamLimits

0x570a,	// (0x0005f70e) eswt_control_pane_g3

0x5717,	// (0x0005f71b) eswt_control_pane_g4_ParamLimits

0x5717,	// (0x0005f71b) eswt_control_pane_g4

0x0003,

0xfc17,	// (0x00069c1b) eswt_control_pane_g_ParamLimits

0xfc17,	// (0x00069c1b) eswt_control_pane_g

0x8d08,	// (0x00062d0c) bg_button_pane_ParamLimits

0x8d08,	// (0x00062d0c) bg_button_pane

0x8a83,	// (0x00062a87) common_borders_pane_copy2_ParamLimits

0x8a83,	// (0x00062a87) common_borders_pane_copy2

0x5724,	// (0x0005f728) control_button_pane_g1_ParamLimits

0x5724,	// (0x0005f728) control_button_pane_g1

0x5730,	// (0x0005f734) control_button_pane_g2_ParamLimits

0x5730,	// (0x0005f734) control_button_pane_g2

0x573c,	// (0x0005f740) control_button_pane_g3_ParamLimits

0x573c,	// (0x0005f740) control_button_pane_g3

0x0002,

0xfc20,	// (0x00069c24) control_button_pane_g_ParamLimits

0xfc20,	// (0x00069c24) control_button_pane_g

0x5750,	// (0x0005f754) control_button_pane_t1

0x575e,	// (0x0005f762) control_button_pane_t2

0x0001,

0xfc27,	// (0x00069c2b) control_button_pane_t

0x24af,	// (0x0005c4b3) bg_button_pane_g1

0x24bf,	// (0x0005c4c3) bg_button_pane_g2

0x24b7,	// (0x0005c4bb) bg_button_pane_g3

0x24cf,	// (0x0005c4d3) bg_button_pane_g4

0x24c7,	// (0x0005c4cb) bg_button_pane_g5

0x24d7,	// (0x0005c4db) bg_button_pane_g6

0x24df,	// (0x0005c4e3) bg_button_pane_g7

0x24ef,	// (0x0005c4f3) bg_button_pane_g8

0x24e7,	// (0x0005c4eb) bg_button_pane_g9

0x0008,

0xf86c,	// (0x00069870) bg_button_pane_g

0x4c50,	// (0x0005ec54) common_borders_pane_ParamLimits

0x4c50,	// (0x0005ec54) common_borders_pane

0x56f0,	// (0x0005f6f4) eswt_control_pane_g1_copy1_ParamLimits

0x56f0,	// (0x0005f6f4) eswt_control_pane_g1_copy1

0x56fd,	// (0x0005f701) eswt_control_pane_g2_copy1_ParamLimits

0x56fd,	// (0x0005f701) eswt_control_pane_g2_copy1

0x570a,	// (0x0005f70e) eswt_control_pane_g3_copy1_ParamLimits

0x570a,	// (0x0005f70e) eswt_control_pane_g3_copy1

0x5717,	// (0x0005f71b) eswt_control_pane_g4_copy1_ParamLimits

0x5717,	// (0x0005f71b) eswt_control_pane_g4_copy1

0x4c8b,	// (0x0005ec8f) bg_eswt_ctrl_canvas_pane_g1

0x4c50,	// (0x0005ec54) common_borders_pane_cp2_ParamLimits

0x4c50,	// (0x0005ec54) common_borders_pane_cp2

0x4c50,	// (0x0005ec54) common_borders_pane_cp3_ParamLimits

0x4c50,	// (0x0005ec54) common_borders_pane_cp3

0x576c,	// (0x0005f770) separator_horizontal_pane

0x5774,	// (0x0005f778) separator_vertical_pane

0x56f0,	// (0x0005f6f4) eswt_control_pane_g1_copy2_ParamLimits

0x56f0,	// (0x0005f6f4) eswt_control_pane_g1_copy2

0x56fd,	// (0x0005f701) eswt_control_pane_g2_copy2_ParamLimits

0x56fd,	// (0x0005f701) eswt_control_pane_g2_copy2

0x570a,	// (0x0005f70e) eswt_control_pane_g3_copy2_ParamLimits

0x570a,	// (0x0005f70e) eswt_control_pane_g3_copy2

0x5717,	// (0x0005f71b) eswt_control_pane_g4_copy2_ParamLimits

0x5717,	// (0x0005f71b) eswt_control_pane_g4_copy2

0x5448,	// (0x0005f44c) common_borders_pane_cp4

0x577d,	// (0x0005f781) separator_horizontal_pane_g1

0x5786,	// (0x0005f78a) separator_horizontal_pane_g2

0x578f,	// (0x0005f793) separator_horizontal_pane_g3

0x0002,

0xfc2c,	// (0x00069c30) separator_horizontal_pane_g

0x56f0,	// (0x0005f6f4) eswt_control_pane_g1_copy3_ParamLimits

0x56f0,	// (0x0005f6f4) eswt_control_pane_g1_copy3

0x56fd,	// (0x0005f701) eswt_control_pane_g2_copy3_ParamLimits

0x56fd,	// (0x0005f701) eswt_control_pane_g2_copy3

0x570a,	// (0x0005f70e) eswt_control_pane_g3_copy3_ParamLimits

0x570a,	// (0x0005f70e) eswt_control_pane_g3_copy3

0x5717,	// (0x0005f71b) eswt_control_pane_g4_copy3_ParamLimits

0x5717,	// (0x0005f71b) eswt_control_pane_g4_copy3

0x5448,	// (0x0005f44c) common_borders_pane_cp5

0x5798,	// (0x0005f79c) separator_vertical_pane_g1

0x57a1,	// (0x0005f7a5) separator_vertical_pane_g2

0x57aa,	// (0x0005f7ae) separator_vertical_pane_g3

0x0002,

0xfc33,	// (0x00069c37) separator_vertical_pane_g

0x56f0,	// (0x0005f6f4) eswt_control_pane_g1_copy4_ParamLimits

0x56f0,	// (0x0005f6f4) eswt_control_pane_g1_copy4

0x56fd,	// (0x0005f701) eswt_control_pane_g2_copy4_ParamLimits

0x56fd,	// (0x0005f701) eswt_control_pane_g2_copy4

0x570a,	// (0x0005f70e) eswt_control_pane_g3_copy4_ParamLimits

0x570a,	// (0x0005f70e) eswt_control_pane_g3_copy4

0x5717,	// (0x0005f71b) eswt_control_pane_g4_copy4_ParamLimits

0x5717,	// (0x0005f71b) eswt_control_pane_g4_copy4

0xcc6b,	// (0x00066c6f) eswt_ctrl_combo_button_pane

0xcc73,	// (0x00066c77) eswt_ctrl_input_pane

0xcc7b,	// (0x00066c7f) popup_choice_list_window_cp70

0xcc83,	// (0x00066c87) eswt_ctrl_input_pane_t1

0x5448,	// (0x0005f44c) input_focus_pane_cp70

0x4c50,	// (0x0005ec54) bg_button_pane_cp70_ParamLimits

0x4c50,	// (0x0005ec54) bg_button_pane_cp70

0xcc91,	// (0x00066c95) eswt_ctrl_combo_button_pane_g1

0x57e1,	// (0x0005f7e5) wait_bar_pane_cp70

0x2523,	// (0x0005c527) bg_popup_window_pane_cp70_ParamLimits

0x2523,	// (0x0005c527) bg_popup_window_pane_cp70

0x57e9,	// (0x0005f7ed) popup_eswt_tasktip_window_t1

0x57ff,	// (0x0005f803) wait_bar_pane_cp71_ParamLimits

0x57ff,	// (0x0005f803) wait_bar_pane_cp71

0x580b,	// (0x0005f80f) grid_eswt_app_pane

0x9079,	// (0x0006307d) scroll_pane_cp70

0xcc99,	// (0x00066c9d) cell_eswt_app_pane_ParamLimits

0xcc99,	// (0x00066c9d) cell_eswt_app_pane

0xcccb,	// (0x00066ccf) cell_eswt_app_pane_g1_ParamLimits

0xcccb,	// (0x00066ccf) cell_eswt_app_pane_g1

0xccfa,	// (0x00066cfe) cell_eswt_app_pane_g2_ParamLimits

0xccfa,	// (0x00066cfe) cell_eswt_app_pane_g2

0x0001,

0xfc3a,	// (0x00069c3e) cell_eswt_app_pane_g_ParamLimits

0xfc3a,	// (0x00069c3e) cell_eswt_app_pane_g

0xcd23,	// (0x00066d27) cell_eswt_app_pane_t1_ParamLimits

0xcd23,	// (0x00066d27) cell_eswt_app_pane_t1

0x58d0,	// (0x0005f8d4) grid_highlight_pane_cp70_ParamLimits

0x58d0,	// (0x0005f8d4) grid_highlight_pane_cp70

0xe4d2,	// (0x000684d6) set_content_pane_g1

0x18a0,	// (0x0005b8a4) status_small_volume_pane

0x0c79,	// (0x0005ac7d) status_small_volume_pane_g1

0x0c81,	// (0x0005ac85) volume_small2_pane

0x0c8a,	// (0x0005ac8e) volume_small2_pane_g1

0x0c93,	// (0x0005ac97) volume_small2_pane_g2

0x0c9c,	// (0x0005aca0) volume_small2_pane_g3

0x0ca5,	// (0x0005aca9) volume_small2_pane_g4

0x0cae,	// (0x0005acb2) volume_small2_pane_g5

0x0cb7,	// (0x0005acbb) volume_small2_pane_g6

0x0cc0,	// (0x0005acc4) volume_small2_pane_g7

0x0cc9,	// (0x0005accd) volume_small2_pane_g8

0x0cd2,	// (0x0005acd6) volume_small2_pane_g9

0x0cdb,	// (0x0005acdf) volume_small2_pane_g10

0x0009,

0xfc3f,	// (0x00069c43) volume_small2_pane_g

0x505a,	// (0x0005f05e) fep_vkb_top_text_pane_g1_ParamLimits

0xcbd7,	// (0x00066bdb) fep_vkb_top_text_pane_t1_ParamLimits

0x530d,	// (0x0005f311) popup_preview_fixed_window_g3_ParamLimits

0x530d,	// (0x0005f311) popup_preview_fixed_window_g3

0xb31f,	// (0x00065323) popup_toolbar_trans_pane

0xc596,	// (0x0006659a) aid_height_set_list_ParamLimits

0x3a2c,	// (0x0005da30) aid_size_parent_ParamLimits

0x196e,	// (0x0005b972) list_highlight_pane_cp2_ParamLimits

0xe4d2,	// (0x000684d6) set_content_pane_g1_ParamLimits

0xb8f1,	// (0x000658f5) list_single_image_pane_ParamLimits

0xb8f1,	// (0x000658f5) list_single_image_pane

0xcd55,	// (0x00066d59) aid_size_cell_image_ParamLimits

0xcd55,	// (0x00066d59) aid_size_cell_image

0xcd62,	// (0x00066d66) grid_single_image_pane_ParamLimits

0xcd62,	// (0x00066d66) grid_single_image_pane

0x8d16,	// (0x00062d1a) list_single_image_pane_g1_ParamLimits

0x8d16,	// (0x00062d1a) list_single_image_pane_g1

0x8d22,	// (0x00062d26) list_single_image_pane_g2_ParamLimits

0x8d22,	// (0x00062d26) list_single_image_pane_g2

0x0001,

0xfc54,	// (0x00069c58) list_single_image_pane_g_ParamLimits

0xfc54,	// (0x00069c58) list_single_image_pane_g

0x58f7,	// (0x0005f8fb) list_single_image_pane_t1_ParamLimits

0x58f7,	// (0x0005f8fb) list_single_image_pane_t1

0xcd70,	// (0x00066d74) cell_image_list_pane_ParamLimits

0xcd70,	// (0x00066d74) cell_image_list_pane

0xcd84,	// (0x00066d88) cell_image_list_pane_g1

0xcd8d,	// (0x00066d91) cell_image_list_pane_g2

0x0001,

0xfc59,	// (0x00069c5d) cell_image_list_pane_g

0x5935,	// (0x0005f939) aid_size_cell_tb_trans_pane

0x8d08,	// (0x00062d0c) bg_tb_trans_pane

0x5947,	// (0x0005f94b) grid_tb_trans_pane

0x24af,	// (0x0005c4b3) bg_tb_trans_pane_g1

0x24bf,	// (0x0005c4c3) bg_tb_trans_pane_g2

0x24b7,	// (0x0005c4bb) bg_tb_trans_pane_g3

0x24cf,	// (0x0005c4d3) bg_tb_trans_pane_g4

0x24c7,	// (0x0005c4cb) bg_tb_trans_pane_g5

0x24ef,	// (0x0005c4f3) bg_tb_trans_pane_g6

0x24e7,	// (0x0005c4eb) bg_tb_trans_pane_g7

0x24d7,	// (0x0005c4db) bg_tb_trans_pane_g8

0x24df,	// (0x0005c4e3) bg_tb_trans_pane_g9

0x0008,

0xfc5e,	// (0x00069c62) bg_tb_trans_pane_g

0x595b,	// (0x0005f95f) cell_toolbar_trans_pane_ParamLimits

0x595b,	// (0x0005f95f) cell_toolbar_trans_pane

0x4c8b,	// (0x0005ec8f) cell_toolbar_trans_pane_g1

0xc9af,	// (0x000669b3) list_form2_midp_pane_t1

0xc9bd,	// (0x000669c1) list_form2_midp_pane_t2

0x0001,

0xfafb,	// (0x00069aff) list_form2_midp_pane_t

0x48cb,	// (0x0005e8cf) scroll_pane_cp51_ParamLimits

0x4a92,	// (0x0005ea96) form2_midp_wait_pane_g1

0x4a9b,	// (0x0005ea9f) form2_midp_wait_pane_g2

0x4aa4,	// (0x0005eaa8) form2_midp_wait_pane_g3

0x0002,

0xfb10,	// (0x00069b14) form2_midp_wait_pane_g

0x86f3,	// (0x000626f7) list_highlight_pane_cp21_ParamLimits

0x4ae8,	// (0x0005eaec) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4af7,	// (0x0005eafb) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3c04,	// (0x0005dc08) list_single_2graphic_im_pane_ParamLimits

0x3c04,	// (0x0005dc08) list_single_2graphic_im_pane

0xcd96,	// (0x00066d9a) list_single_2graphic_im_pane_g1_ParamLimits

0xcd96,	// (0x00066d9a) list_single_2graphic_im_pane_g1

0xcda7,	// (0x00066dab) list_single_2graphic_im_pane_g2_ParamLimits

0xcda7,	// (0x00066dab) list_single_2graphic_im_pane_g2

0xcdb3,	// (0x00066db7) list_single_2graphic_im_pane_g3_ParamLimits

0xcdb3,	// (0x00066db7) list_single_2graphic_im_pane_g3

0x0003,

0xfc71,	// (0x00069c75) list_single_2graphic_im_pane_g_ParamLimits

0xfc71,	// (0x00069c75) list_single_2graphic_im_pane_g

0xcdc7,	// (0x00066dcb) list_single_2graphic_im_pane_t1_ParamLimits

0xcdc7,	// (0x00066dcb) list_single_2graphic_im_pane_t1

0x5319,	// (0x0005f31d) list_single_graphic_2heading_pane_fp_ParamLimits

0x5319,	// (0x0005f31d) list_single_graphic_2heading_pane_fp

0xe915,	// (0x00068919) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xe915,	// (0x00068919) list_single_graphic_2heading_pane_fp_g1

0x5332,	// (0x0005f336) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5332,	// (0x0005f336) list_single_graphic_2heading_pane_fp_g2

0x528b,	// (0x0005f28f) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x528b,	// (0x0005f28f) list_single_graphic_2heading_pane_fp_g3

0x5297,	// (0x0005f29b) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5297,	// (0x0005f29b) list_single_graphic_2heading_pane_fp_g4

0x533e,	// (0x0005f342) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x533e,	// (0x0005f342) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb98,	// (0x00069b9c) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb98,	// (0x00069b9c) list_single_graphic_2heading_pane_fp_g

0xea3c,	// (0x00068a40) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xea3c,	// (0x00068a40) list_single_graphic_2heading_pane_fp_t1

0xe94d,	// (0x00068951) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xe94d,	// (0x00068951) list_single_graphic_2heading_pane_fp_t2

0xea52,	// (0x00068a56) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xea52,	// (0x00068a56) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc7a,	// (0x00069c7e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc7a,	// (0x00069c7e) list_single_graphic_2heading_pane_fp_t

0x4d1c,	// (0x0005ed20) fep_hwr_write_pane_g5_ParamLimits

0x4d1c,	// (0x0005ed20) fep_hwr_write_pane_g5

0x4d28,	// (0x0005ed2c) fep_hwr_write_pane_g6_ParamLimits

0x4d28,	// (0x0005ed2c) fep_hwr_write_pane_g6

0x56bf,	// (0x0005f6c3) eswt_shell_pane_ParamLimits

0x2523,	// (0x0005c527) bg_popup_window_pane_cp18_ParamLimits

0x3972,	// (0x0005d976) heading_pane_cp70

0x57e9,	// (0x0005f7ed) popup_eswt_tasktip_window_t1_ParamLimits

0xb3e9,	// (0x000653ed) aid_touch_tab_arrow_left

0xb3ff,	// (0x00065403) aid_touch_tab_arrow_right

0x5466,	// (0x0005f46a) title_pane_g3_ParamLimits

0x5466,	// (0x0005f46a) title_pane_g3

0x8cc7,	// (0x00062ccb) set_value_pane_g1

0xb31f,	// (0x00065323) popup_toolbar_trans_pane_ParamLimits

0x5935,	// (0x0005f939) aid_size_cell_tb_trans_pane_ParamLimits

0x8d08,	// (0x00062d0c) bg_tb_trans_pane_ParamLimits

0x5947,	// (0x0005f94b) grid_tb_trans_pane_ParamLimits

0x8826,	// (0x0006282a) cont_note_pane_ParamLimits

0x8826,	// (0x0006282a) cont_note_pane

0x8a83,	// (0x00062a87) cont_snote2_single_text_pane_ParamLimits

0x8a83,	// (0x00062a87) cont_snote2_single_text_pane

0x8a83,	// (0x00062a87) cont_snote2_single_graphic_pane_ParamLimits

0x8a83,	// (0x00062a87) cont_snote2_single_graphic_pane

0x2aff,	// (0x0005cb03) cont_note_wait_pane_ParamLimits

0x2aff,	// (0x0005cb03) cont_note_wait_pane

0x2aff,	// (0x0005cb03) cont_note_image_pane_ParamLimits

0x2aff,	// (0x0005cb03) cont_note_image_pane

0x59ef,	// (0x0005f9f3) popup_note2_window_g1_ParamLimits

0x59ef,	// (0x0005f9f3) popup_note2_window_g1

0x5a20,	// (0x0005fa24) popup_note2_window_t1_ParamLimits

0x5a20,	// (0x0005fa24) popup_note2_window_t1

0x5a65,	// (0x0005fa69) popup_note2_window_t2_ParamLimits

0x5a65,	// (0x0005fa69) popup_note2_window_t2

0x5aaa,	// (0x0005faae) popup_note2_window_t3_ParamLimits

0x5aaa,	// (0x0005faae) popup_note2_window_t3

0x5aef,	// (0x0005faf3) popup_note2_window_t4_ParamLimits

0x5aef,	// (0x0005faf3) popup_note2_window_t4

0x88aa,	// (0x000628ae) popup_note2_window_t5_ParamLimits

0x88aa,	// (0x000628ae) popup_note2_window_t5

0x0004,

0xfc86,	// (0x00069c8a) popup_note2_window_t_ParamLimits

0xfc86,	// (0x00069c8a) popup_note2_window_t

0x5b1e,	// (0x0005fb22) popup_note2_image_window_g1_ParamLimits

0x5b1e,	// (0x0005fb22) popup_note2_image_window_g1

0x5b2a,	// (0x0005fb2e) popup_note2_image_window_g2_ParamLimits

0x5b2a,	// (0x0005fb2e) popup_note2_image_window_g2

0x0001,

0xfc91,	// (0x00069c95) popup_note2_image_window_g_ParamLimits

0xfc91,	// (0x00069c95) popup_note2_image_window_g

0x5b3c,	// (0x0005fb40) popup_note2_image_window_t1_ParamLimits

0x5b3c,	// (0x0005fb40) popup_note2_image_window_t1

0x5b54,	// (0x0005fb58) popup_note2_image_window_t2_ParamLimits

0x5b54,	// (0x0005fb58) popup_note2_image_window_t2

0x5b6c,	// (0x0005fb70) popup_note2_image_window_t3_ParamLimits

0x5b6c,	// (0x0005fb70) popup_note2_image_window_t3

0x0002,

0xfc96,	// (0x00069c9a) popup_note2_image_window_t_ParamLimits

0xfc96,	// (0x00069c9a) popup_note2_image_window_t

0x2b0d,	// (0x0005cb11) popup_note2_wait_window_g1_ParamLimits

0x2b0d,	// (0x0005cb11) popup_note2_wait_window_g1

0x5b88,	// (0x0005fb8c) popup_note2_wait_window_g2_ParamLimits

0x5b88,	// (0x0005fb8c) popup_note2_wait_window_g2

0x2b25,	// (0x0005cb29) popup_note2_wait_window_g3_ParamLimits

0x2b25,	// (0x0005cb29) popup_note2_wait_window_g3

0x0002,

0xfc9d,	// (0x00069ca1) popup_note2_wait_window_g_ParamLimits

0xfc9d,	// (0x00069ca1) popup_note2_wait_window_g

0x5b94,	// (0x0005fb98) popup_note2_wait_window_t1_ParamLimits

0x5b94,	// (0x0005fb98) popup_note2_wait_window_t1

0x5bb2,	// (0x0005fbb6) popup_note2_wait_window_t2_ParamLimits

0x5bb2,	// (0x0005fbb6) popup_note2_wait_window_t2

0x5bd0,	// (0x0005fbd4) popup_note2_wait_window_t3_ParamLimits

0x5bd0,	// (0x0005fbd4) popup_note2_wait_window_t3

0x5be2,	// (0x0005fbe6) popup_note2_wait_window_t4_ParamLimits

0x5be2,	// (0x0005fbe6) popup_note2_wait_window_t4

0x0003,

0xfca4,	// (0x00069ca8) popup_note2_wait_window_t_ParamLimits

0xfca4,	// (0x00069ca8) popup_note2_wait_window_t

0x5bf4,	// (0x0005fbf8) wait_bar2_pane_ParamLimits

0x5bf4,	// (0x0005fbf8) wait_bar2_pane

0x5c0c,	// (0x0005fc10) popup_snote2_single_text_window_g1_ParamLimits

0x5c0c,	// (0x0005fc10) popup_snote2_single_text_window_g1

0x5c34,	// (0x0005fc38) popup_snote2_single_text_window_t1_ParamLimits

0x5c34,	// (0x0005fc38) popup_snote2_single_text_window_t1

0x5c80,	// (0x0005fc84) popup_snote2_single_text_window_t2_ParamLimits

0x5c80,	// (0x0005fc84) popup_snote2_single_text_window_t2

0x5ccc,	// (0x0005fcd0) popup_snote2_single_text_window_t3_ParamLimits

0x5ccc,	// (0x0005fcd0) popup_snote2_single_text_window_t3

0x5d0d,	// (0x0005fd11) popup_snote2_single_text_window_t4_ParamLimits

0x5d0d,	// (0x0005fd11) popup_snote2_single_text_window_t4

0x5d43,	// (0x0005fd47) popup_snote2_single_text_window_t5_ParamLimits

0x5d43,	// (0x0005fd47) popup_snote2_single_text_window_t5

0x0004,

0xfcad,	// (0x00069cb1) popup_snote2_single_text_window_t_ParamLimits

0xfcad,	// (0x00069cb1) popup_snote2_single_text_window_t

0x5d6e,	// (0x0005fd72) popup_snote2_single_graphic_window_g1_ParamLimits

0x5d6e,	// (0x0005fd72) popup_snote2_single_graphic_window_g1

0x5d96,	// (0x0005fd9a) popup_snote2_single_graphic_window_g2_ParamLimits

0x5d96,	// (0x0005fd9a) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb8,	// (0x00069cbc) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb8,	// (0x00069cbc) popup_snote2_single_graphic_window_g

0x5dbe,	// (0x0005fdc2) popup_snote2_single_graphic_window_t1_ParamLimits

0x5dbe,	// (0x0005fdc2) popup_snote2_single_graphic_window_t1

0x5e0a,	// (0x0005fe0e) popup_snote2_single_graphic_window_t2_ParamLimits

0x5e0a,	// (0x0005fe0e) popup_snote2_single_graphic_window_t2

0x5ccc,	// (0x0005fcd0) popup_snote2_single_graphic_window_t3_ParamLimits

0x5ccc,	// (0x0005fcd0) popup_snote2_single_graphic_window_t3

0x5d0d,	// (0x0005fd11) popup_snote2_single_graphic_window_t4_ParamLimits

0x5d0d,	// (0x0005fd11) popup_snote2_single_graphic_window_t4

0x5d43,	// (0x0005fd47) popup_snote2_single_graphic_window_t5_ParamLimits

0x5d43,	// (0x0005fd47) popup_snote2_single_graphic_window_t5

0x0004,

0xfcbd,	// (0x00069cc1) popup_snote2_single_graphic_window_t_ParamLimits

0xfcbd,	// (0x00069cc1) popup_snote2_single_graphic_window_t

0x477b,	// (0x0005e77f) clock_nsta_pane_cp2_t1

0x477b,	// (0x0005e77f) clock_nsta_pane_cp2_t2

0x0001,

0xfad1,	// (0x00069ad5) clock_nsta_pane_cp2_t

0xe135,	// (0x00068139) form_field_data_wide_pane_g1_ParamLimits

0x8d16,	// (0x00062d1a) form_field_data_wide_pane_g2_ParamLimits

0x8d16,	// (0x00062d1a) form_field_data_wide_pane_g2

0x8d22,	// (0x00062d26) form_field_data_wide_pane_g3_ParamLimits

0x8d22,	// (0x00062d26) form_field_data_wide_pane_g3

0x0002,

0xf686,	// (0x0006968a) form_field_data_wide_pane_g_ParamLimits

0xf686,	// (0x0006968a) form_field_data_wide_pane_g

0xc8a9,	// (0x000668ad) grid_touch_3_pane_ParamLimits

0xc8a9,	// (0x000668ad) grid_touch_3_pane

0xcdf8,	// (0x00066dfc) cell_touch_3_pane_ParamLimits

0xcdf8,	// (0x00066dfc) cell_touch_3_pane

0x4c8b,	// (0x0005ec8f) cell_touch_3_pane_g1

0x4c8b,	// (0x0005ec8f) cell_touch_3_pane_g2

0x0001,

0xfb56,	// (0x00069b5a) cell_touch_3_pane_g

0x88dc,	// (0x000628e0) cont_query_data_pane

0x88e4,	// (0x000628e8) cont_query_data_pane_cp1

0x5e89,	// (0x0005fe8d) button_value_adjust_pane_cp7

0x5e91,	// (0x0005fe95) query_popup_pane_cp3

0xe1ca,	// (0x000681ce) bg_popup_sub_pane_cp22_ParamLimits

0xf2e5,	// (0x000692e9) navi_navi_volume_pane_cp2

0xf300,	// (0x00069304) popup_side_volume_key_window_g2

0xf30f,	// (0x00069313) popup_side_volume_key_window_g3

0x0002,

0xf71c,	// (0x00069720) popup_side_volume_key_window_g

0xf32c,	// (0x00069330) popup_side_volume_key_window_t2

0x0001,

0xf723,	// (0x00069727) popup_side_volume_key_window_t

0xe3d5,	// (0x000683d9) popup_side_volume_key_window_ParamLimits

0xa153,	// (0x00064157) list_double_graphic_pane_g4_ParamLimits

0xa153,	// (0x00064157) list_double_graphic_pane_g4

0xc746,	// (0x0006674a) list_single_2heading_msg_pane_ParamLimits

0xc746,	// (0x0006674a) list_single_2heading_msg_pane

0xce42,	// (0x00066e46) list_single_2heading_msg_pane_g1_ParamLimits

0xce42,	// (0x00066e46) list_single_2heading_msg_pane_g1

0xce4e,	// (0x00066e52) list_single_2heading_msg_pane_g2_ParamLimits

0xce4e,	// (0x00066e52) list_single_2heading_msg_pane_g2

0xce61,	// (0x00066e65) list_single_2heading_msg_pane_g3_ParamLimits

0xce61,	// (0x00066e65) list_single_2heading_msg_pane_g3

0xce6d,	// (0x00066e71) list_single_2heading_msg_pane_g4_ParamLimits

0xce6d,	// (0x00066e71) list_single_2heading_msg_pane_g4

0x0003,

0xfcc8,	// (0x00069ccc) list_single_2heading_msg_pane_g_ParamLimits

0xfcc8,	// (0x00069ccc) list_single_2heading_msg_pane_g

0xb971,	// (0x00065975) list_single_2heading_msg_pane_t1_ParamLimits

0xb971,	// (0x00065975) list_single_2heading_msg_pane_t1

0xb999,	// (0x0006599d) list_single_2heading_msg_pane_t2_ParamLimits

0xb999,	// (0x0006599d) list_single_2heading_msg_pane_t2

0xba04,	// (0x00065a08) list_single_2heading_msg_pane_t3_ParamLimits

0xba04,	// (0x00065a08) list_single_2heading_msg_pane_t3

0xea72,	// (0x00068a76) list_single_2heading_msg_pane_t4_ParamLimits

0xea72,	// (0x00068a76) list_single_2heading_msg_pane_t4

0x0003,

0xfcd1,	// (0x00069cd5) list_single_2heading_msg_pane_t_ParamLimits

0xfcd1,	// (0x00069cd5) list_single_2heading_msg_pane_t

0x5472,	// (0x0005f476) title_pane_g4_ParamLimits

0x5472,	// (0x0005f476) title_pane_g4

0xf0fa,	// (0x000690fe) title_pane_stacon_g3_ParamLimits

0xf0fa,	// (0x000690fe) title_pane_stacon_g3

0x59b2,	// (0x0005f9b6) list_single_2graphic_im_pane_g4_ParamLimits

0x59b2,	// (0x0005f9b6) list_single_2graphic_im_pane_g4

0x370f,	// (0x0005d713) popup_side_volume_key_window_cp

0x3f6f,	// (0x0005df73) main_idle_act2_pane_t1

0x0374,	// (0x0005a378) toolbar_button_pane_g10

0x9fb7,	// (0x00063fbb) popup_toolbar_window_cp1

0x476c,	// (0x0005e770) clock_nsta_pane_cp_t1

0x476c,	// (0x0005e770) clock_nsta_pane_cp_t2

0x0001,

0xfacc,	// (0x00069ad0) clock_nsta_pane_cp_t

0xf2e5,	// (0x000692e9) navi_navi_volume_pane_cp2_ParamLimits

0xf2f4,	// (0x000692f8) popup_side_volume_key_window_g1_ParamLimits

0xf300,	// (0x00069304) popup_side_volume_key_window_g2_ParamLimits

0xf30f,	// (0x00069313) popup_side_volume_key_window_g3_ParamLimits

0xf71c,	// (0x00069720) popup_side_volume_key_window_g_ParamLimits

0x08a8,	// (0x0005a8ac) fep_hwr_aid_pane

0x0951,	// (0x0005a955) bg_fep_hwr_top_pane_g4_ParamLimits

0x4cec,	// (0x0005ecf0) fep_hwr_top_pane_g1_ParamLimits

0x4cfe,	// (0x0005ed02) fep_hwr_top_pane_g2_ParamLimits

0x0971,	// (0x0005a975) fep_hwr_top_pane_g3_ParamLimits

0xfb21,	// (0x00069b25) fep_hwr_top_pane_g_ParamLimits

0x0986,	// (0x0005a98a) fep_hwr_top_text_pane_ParamLimits

0x3324,	// (0x0005d328) aid_touch_tab_arrow_arrow_2

0x332d,	// (0x0005d331) aid_touch_tab_arrow_left_2

0x08bc,	// (0x0005a8c0) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x08f3,	// (0x0005a8f7) fep_hwr_prediction_pane

0x4e54,	// (0x0005ee58) fep_vkb_prediction_pane

0xcbb7,	// (0x00066bbb) fep_vkb_side_pane_g3_ParamLimits

0xcbb7,	// (0x00066bbb) fep_vkb_side_pane_g3

0x0b15,	// (0x0005ab19) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x0b86,	// (0x0005ab8a) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0b93,	// (0x0005ab97) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd0,	// (0x00069bd4) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x0d74,	// (0x0005ad78) fep_hwr_prediction_pane_g1

0x0d7e,	// (0x0005ad82) fep_hwr_prediction_pane_g2

0x0d86,	// (0x0005ad8a) fep_hwr_prediction_pane_g3

0x0d8e,	// (0x0005ad92) fep_hwr_prediction_pane_g4

0x0003,

0xfcda,	// (0x00069cde) fep_hwr_prediction_pane_g

0x5eb8,	// (0x0005febc) fep_vkb_prediction_pane_g1

0x5ec2,	// (0x0005fec6) fep_vkb_prediction_pane_g2

0x5eca,	// (0x0005fece) fep_vkb_prediction_pane_g3

0x5ed2,	// (0x0005fed6) fep_vkb_prediction_pane_g4

0x0003,

0xfce3,	// (0x00069ce7) fep_vkb_prediction_pane_g

0x06dc,	// (0x0005a6e0) slider_set_pane_g3

0x06f0,	// (0x0005a6f4) slider_set_pane_g4

0x0708,	// (0x0005a70c) slider_set_pane_g5

0x06dc,	// (0x0005a6e0) slider_set_pane_g6

0x071e,	// (0x0005a722) slider_set_pane_g7

0x3bb1,	// (0x0005dbb5) slider_form_pane_g3

0x3bba,	// (0x0005dbbe) slider_form_pane_g4

0x3bc2,	// (0x0005dbc6) slider_form_pane_g5

0x3bb1,	// (0x0005dbb5) slider_form_pane_g6

0xc705,	// (0x00066709) slider_form_pane_g7

0x4226,	// (0x0005e22a) slider_set_pane_vc_g3

0x422f,	// (0x0005e233) slider_set_pane_vc_g4

0x4238,	// (0x0005e23c) slider_set_pane_vc_g5

0x4226,	// (0x0005e22a) slider_set_pane_vc_g6

0x4241,	// (0x0005e245) slider_set_pane_vc_g7

0x4419,	// (0x0005e41d) slider_form_pane_vc_g1

0x4422,	// (0x0005e426) slider_form_pane_vc_g2

0x442b,	// (0x0005e42f) slider_form_pane_vc_g3

0x4419,	// (0x0005e41d) slider_form_pane_vc_g4

0x4434,	// (0x0005e438) slider_form_pane_vc_g5

0x0004,

0xfa9e,	// (0x00069aa2) slider_form_pane_vc_g

0x5448,	// (0x0005f44c) main_idle_act3_pane

0x5eda,	// (0x0005fede) ai3_links_pane

0xce85,	// (0x00066e89) popup_ai3_data_window_ParamLimits

0xce85,	// (0x00066e89) popup_ai3_data_window

0x5448,	// (0x0005f44c) grid_ai3_links_pane

0xcea3,	// (0x00066ea7) cell_ai3_links_pane_ParamLimits

0xcea3,	// (0x00066ea7) cell_ai3_links_pane

0x5f1b,	// (0x0005ff1f) bg_popup_sub_pane_cp11

0x5f28,	// (0x0005ff2c) cell_ai3_links_pane_g1

0x5448,	// (0x0005f44c) bg_popup_sub_pane_cp12

0x5f4d,	// (0x0005ff51) heading_ai3_data_pane

0x5f55,	// (0x0005ff59) list_ai3_gene_pane

0x5f61,	// (0x0005ff65) popup_ai3_data_window_g1

0x5f69,	// (0x0005ff6d) heading_ai3_data_pane_g1

0x5f71,	// (0x0005ff75) heading_ai3_data_pane_t1

0x5f7f,	// (0x0005ff83) list_double_ai3_gene_pane_ParamLimits

0x5f7f,	// (0x0005ff83) list_double_ai3_gene_pane

0x5f8c,	// (0x0005ff90) list_single_ai3_gene_pane_ParamLimits

0x5f8c,	// (0x0005ff90) list_single_ai3_gene_pane

0x4c50,	// (0x0005ec54) list_highlight_pane_cp7_ParamLimits

0x4c50,	// (0x0005ec54) list_highlight_pane_cp7

0x5f99,	// (0x0005ff9d) list_single_a13_gene_pane_t1_ParamLimits

0x5f99,	// (0x0005ff9d) list_single_a13_gene_pane_t1

0x5fb0,	// (0x0005ffb4) list_single_ai3_gene_pane_g1

0x5fb9,	// (0x0005ffbd) list_single_ai3_gene_pane_g2

0x0001,

0xfcec,	// (0x00069cf0) list_single_ai3_gene_pane_g

0x5fc1,	// (0x0005ffc5) list_double_ai3_gene_pane_g1_ParamLimits

0x5fc1,	// (0x0005ffc5) list_double_ai3_gene_pane_g1

0x5fcd,	// (0x0005ffd1) list_double_ai3_gene_pane_t1_ParamLimits

0x5fcd,	// (0x0005ffd1) list_double_ai3_gene_pane_t1

0x5fe9,	// (0x0005ffed) list_double_ai3_gene_pane_t2_ParamLimits

0x5fe9,	// (0x0005ffed) list_double_ai3_gene_pane_t2

0x5ffe,	// (0x00060002) list_double_ai3_gene_pane_t3_ParamLimits

0x5ffe,	// (0x00060002) list_double_ai3_gene_pane_t3

0x0002,

0xfcf1,	// (0x00069cf5) list_double_ai3_gene_pane_t_ParamLimits

0xfcf1,	// (0x00069cf5) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xea68,	// (0x00068a6c) aid_size_min_col_2

0xce2c,	// (0x00066e30) aid_size_min_msg_ParamLimits

0xce2c,	// (0x00066e30) aid_size_min_msg

0xcbcb,	// (0x00066bcf) fep_vkb_top_text_pane_g2_ParamLimits

0xcbcb,	// (0x00066bcf) fep_vkb_top_text_pane_g2

0x0001,

0xfb51,	// (0x00069b55) fep_vkb_top_text_pane_g_ParamLimits

0xfb51,	// (0x00069b55) fep_vkb_top_text_pane_g

0x5448,	// (0x0005f44c) main_hc_apps_shell_pane

0x601b,	// (0x0006001f) grid_hc_apps_pane_ParamLimits

0x601b,	// (0x0006001f) grid_hc_apps_pane

0x602a,	// (0x0006002e) list_hc_apps_pane

0x6032,	// (0x00060036) scroll_pane_cp37_ParamLimits

0x6032,	// (0x00060036) scroll_pane_cp37

0xcebd,	// (0x00066ec1) cell_hc_apps_pane_ParamLimits

0xcebd,	// (0x00066ec1) cell_hc_apps_pane

0xcf87,	// (0x00066f8b) cell_hc_apps_pane_g1_ParamLimits

0xcf87,	// (0x00066f8b) cell_hc_apps_pane_g1

0x6127,	// (0x0006012b) cell_hc_apps_pane_g2_ParamLimits

0x6127,	// (0x0006012b) cell_hc_apps_pane_g2

0x6143,	// (0x00060147) cell_hc_apps_pane_g3_ParamLimits

0x6143,	// (0x00060147) cell_hc_apps_pane_g3

0x0002,

0xfcf8,	// (0x00069cfc) cell_hc_apps_pane_g_ParamLimits

0xfcf8,	// (0x00069cfc) cell_hc_apps_pane_g

0xcfb4,	// (0x00066fb8) cell_hc_apps_pane_t1_ParamLimits

0xcfb4,	// (0x00066fb8) cell_hc_apps_pane_t1

0x8826,	// (0x0006282a) grid_highlight_pane_cp10_ParamLimits

0x8826,	// (0x0006282a) grid_highlight_pane_cp10

0xcff4,	// (0x00066ff8) list_single_hc_apps_pane_ParamLimits

0xcff4,	// (0x00066ff8) list_single_hc_apps_pane

0xd02e,	// (0x00067032) list_single_hc_apps_pane_g1

0xd047,	// (0x0006704b) list_single_hc_apps_pane_g2

0x0001,

0xfcff,	// (0x00069d03) list_single_hc_apps_pane_g

0xd060,	// (0x00067064) list_single_hc_apps_pane_g2_copy1

0xba72,	// (0x00065a76) list_single_hc_apps_pane_t1

0x86f3,	// (0x000626f7) bg_set_opt_pane_cp_ParamLimits

0xf021,	// (0x00069025) setting_slider_pane_t1_ParamLimits

0xf03a,	// (0x0006903e) setting_slider_pane_t2_ParamLimits

0xf054,	// (0x00069058) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x00069568) setting_slider_pane_t_ParamLimits

0xf06c,	// (0x00069070) slider_set_pane_ParamLimits

0x0250,	// (0x0005a254) control_pane_g5_ParamLimits

0x0250,	// (0x0005a254) control_pane_g5

0x39de,	// (0x0005d9e2) slider_set_pane_g1_ParamLimits

0x06d0,	// (0x0005a6d4) slider_set_pane_g2_ParamLimits

0x06dc,	// (0x0005a6e0) slider_set_pane_g3_ParamLimits

0x06f0,	// (0x0005a6f4) slider_set_pane_g4_ParamLimits

0x0708,	// (0x0005a70c) slider_set_pane_g5_ParamLimits

0x06dc,	// (0x0005a6e0) slider_set_pane_g6_ParamLimits

0x071e,	// (0x0005a722) slider_set_pane_g7_ParamLimits

0xf96a,	// (0x0006996e) slider_set_pane_g_ParamLimits

0xe47d,	// (0x00068481) navi_icon_text_pane_ParamLimits

0xb3b0,	// (0x000653b4) aid_fill_nsta_2_ParamLimits

0xb3e9,	// (0x000653ed) aid_touch_tab_arrow_left_ParamLimits

0xb3ff,	// (0x00065403) aid_touch_tab_arrow_right_ParamLimits

0xb49a,	// (0x0006549e) clock_nsta_pane_ParamLimits

0xc41c,	// (0x00066420) navi_icon_pane_g1_ParamLimits

0xc428,	// (0x0006642c) navi_text_pane_t1_ParamLimits

0xc991,	// (0x00066995) navi_icon_text_pane_g1_ParamLimits

0xc99d,	// (0x000669a1) navi_icon_text_pane_t1_ParamLimits

0xd02e,	// (0x00067032) list_single_hc_apps_pane_g1_ParamLimits

0xd047,	// (0x0006704b) list_single_hc_apps_pane_g2_ParamLimits

0xfcff,	// (0x00069d03) list_single_hc_apps_pane_g_ParamLimits

0xd060,	// (0x00067064) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xba72,	// (0x00065a76) list_single_hc_apps_pane_t1_ParamLimits

0x9bac,	// (0x00063bb0) popup_toolbar2_fixed_window_ParamLimits

0x9bac,	// (0x00063bb0) popup_toolbar2_fixed_window

0xb315,	// (0x00065319) popup_toolbar2_float_window

0x5448,	// (0x0005f44c) bg_popup_sub_pane_cp27

0x61fd,	// (0x00060201) grid_toolbar2_float_pane

0x5448,	// (0x0005f44c) bg_popup_sub_pane_cp26

0x61fd,	// (0x00060201) grid_toolbar2_fixed_pane

0xd07c,	// (0x00067080) cell_toolbar2_fixed_pane_ParamLimits

0xd07c,	// (0x00067080) cell_toolbar2_fixed_pane

0xd099,	// (0x0006709d) cell_toolbar2_fixed_pane_g1

0x621e,	// (0x00060222) toolbar2_fixed_button_pane

0x24af,	// (0x0005c4b3) toolbar2_fixed_button_pane_g1

0x24bf,	// (0x0005c4c3) toolbar2_fixed_button_pane_g2

0x24b7,	// (0x0005c4bb) toolbar2_fixed_button_pane_g3

0x24cf,	// (0x0005c4d3) toolbar2_fixed_button_pane_g4

0x24c7,	// (0x0005c4cb) toolbar2_fixed_button_pane_g5

0x24d7,	// (0x0005c4db) toolbar2_fixed_button_pane_g6

0x24df,	// (0x0005c4e3) toolbar2_fixed_button_pane_g7

0x24ef,	// (0x0005c4f3) toolbar2_fixed_button_pane_g8

0x24e7,	// (0x0005c4eb) toolbar2_fixed_button_pane_g9

0x0008,

0xf86c,	// (0x00069870) toolbar2_fixed_button_pane_g

0x6226,	// (0x0006022a) cell_toolbar2_float_pane_ParamLimits

0x6226,	// (0x0006022a) cell_toolbar2_float_pane

0x6237,	// (0x0006023b) cell_toolbar2_float_pane_g1

0x621e,	// (0x00060222) toolbar2_fixed_button_pane_cp

0xcab3,	// (0x00066ab7) fep_vkb_accented_list_pane_ParamLimits

0xcab3,	// (0x00066ab7) fep_vkb_accented_list_pane

0x0af5,	// (0x0005aaf9) bg_popup_fep_shadow_pane_g9

0xf537,	// (0x0006953b) bg_popup_fep_shadow_pane_cp3

0x8e1b,	// (0x00062e1f) list_accented_list_pane

0x6240,	// (0x00060244) list_single_accented_list_pane_ParamLimits

0x6240,	// (0x00060244) list_single_accented_list_pane

0xf537,	// (0x0006953b) list_highlight_pane_cp10

0x6251,	// (0x00060255) list_single_accented_list_pane_t1

0xb231,	// (0x00065235) popup_slider_window_ParamLimits

0xb231,	// (0x00065235) popup_slider_window

0x5e99,	// (0x0005fe9d) aid_indentation_list_msg

0xd1a4,	// (0x000671a8) bg_popup_window_pane_cp19

0x638b,	// (0x0006038f) popup_slider_window_g1

0x63a7,	// (0x000603ab) popup_slider_window_g2

0x63c3,	// (0x000603c7) popup_slider_window_g3

0x0005,

0xfd04,	// (0x00069d08) popup_slider_window_g

0x641f,	// (0x00060423) popup_slider_window_t1

0x6493,	// (0x00060497) small_volume_slider_vertical_pane

0x4c8b,	// (0x0005ec8f) small_volume_slider_vertical_pane_g1

0x4c8b,	// (0x0005ec8f) small_volume_slider_vertical_pane_g2

0x64af,	// (0x000604b3) small_volume_slider_vertical_pane_g3

0x0002,

0xfd16,	// (0x00069d1a) small_volume_slider_vertical_pane_g

0x9b16,	// (0x00063b1a) area_side_right_pane_ParamLimits

0x9b16,	// (0x00063b1a) area_side_right_pane

0xbaa0,	// (0x00065aa4) aid_size_side_button_ParamLimits

0xbaa0,	// (0x00065aa4) aid_size_side_button

0xbab9,	// (0x00065abd) grid_sctrl_middle_pane_ParamLimits

0xbab9,	// (0x00065abd) grid_sctrl_middle_pane

0x0df8,	// (0x0005adfc) sctrl_sk_bottom_pane

0x0e09,	// (0x0005ae0d) sctrl_sk_top_pane

0x0e1b,	// (0x0005ae1f) aid_touch_sctrl_top

0x0e28,	// (0x0005ae2c) bg_sctrl_sk_pane_ParamLimits

0x0e28,	// (0x0005ae2c) bg_sctrl_sk_pane

0x0e36,	// (0x0005ae3a) sctrl_sk_top_pane_g1

0x0e43,	// (0x0005ae47) sctrl_sk_top_pane_t1

0x0e1b,	// (0x0005ae1f) aid_touch_sctrl_bottom

0x0e28,	// (0x0005ae2c) bg_sctrl_sk_pane_cp_ParamLimits

0x0e28,	// (0x0005ae2c) bg_sctrl_sk_pane_cp

0x0e5e,	// (0x0005ae62) sctrl_sk_bottom_pane_g1

0x0e43,	// (0x0005ae47) sctrl_sk_bottom_pane_t1

0xbad3,	// (0x00065ad7) cell_sctrl_middle_pane_ParamLimits

0xbad3,	// (0x00065ad7) cell_sctrl_middle_pane

0xbae6,	// (0x00065aea) aid_touch_sctrl_middle_ParamLimits

0xbae6,	// (0x00065aea) aid_touch_sctrl_middle

0xbaf3,	// (0x00065af7) bg_sctrl_middle_pane_ParamLimits

0xbaf3,	// (0x00065af7) bg_sctrl_middle_pane

0x14e1,	// (0x0005b4e5) cell_sctrl_middle_pane_g1_ParamLimits

0x14e1,	// (0x0005b4e5) cell_sctrl_middle_pane_g1

0xbb01,	// (0x00065b05) cell_sctrl_middle_pane_g2_ParamLimits

0xbb01,	// (0x00065b05) cell_sctrl_middle_pane_g2

0x0001,

0xfd22,	// (0x00069d26) cell_sctrl_middle_pane_g_ParamLimits

0xfd22,	// (0x00069d26) cell_sctrl_middle_pane_g

0x24af,	// (0x0005c4b3) bg_sctrl_middle_pane_g1

0x24b7,	// (0x0005c4bb) bg_sctrl_middle_pane_g2

0x24bf,	// (0x0005c4c3) bg_sctrl_middle_pane_g3

0x24c7,	// (0x0005c4cb) bg_sctrl_middle_pane_g4

0x24cf,	// (0x0005c4d3) bg_sctrl_middle_pane_g5

0x24d7,	// (0x0005c4db) bg_sctrl_middle_pane_g6

0x24df,	// (0x0005c4e3) bg_sctrl_middle_pane_g7

0x24e7,	// (0x0005c4eb) bg_sctrl_middle_pane_g8

0x0007,

0xfd27,	// (0x00069d2b) bg_sctrl_middle_pane_g

0x24ef,	// (0x0005c4f3) bg_sctrl_middle_pane_g8_copy1

0x24af,	// (0x0005c4b3) bg_sctrl_sk_pane_g1

0x24bf,	// (0x0005c4c3) bg_sctrl_sk_pane_g2

0x24b7,	// (0x0005c4bb) bg_sctrl_sk_pane_g3

0x0008,

0xf86c,	// (0x00069870) bg_sctrl_sk_pane_g

0x8c41,	// (0x00062c45) aid_size_touch_scroll_bar

0x24cf,	// (0x0005c4d3) bg_sctrl_sk_pane_g4

0x24c7,	// (0x0005c4cb) bg_sctrl_sk_pane_g5

0x24d7,	// (0x0005c4db) bg_sctrl_sk_pane_g6

0x24df,	// (0x0005c4e3) bg_sctrl_sk_pane_g7

0x24ef,	// (0x0005c4f3) bg_sctrl_sk_pane_g8

0x24e7,	// (0x0005c4eb) bg_sctrl_sk_pane_g9

0x1a1c,	// (0x0005ba20) popup_fep_china_hwr2_fs_candidate_window

0xace9,	// (0x00064ced) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xace9,	// (0x00064ced) popup_fep_china_hwr2_fs_control_window

0x0b15,	// (0x0005ab19) sctrl_sk_top_pane_g2

0x0001,

0xfd1d,	// (0x00069d21) sctrl_sk_top_pane_g

0xd25c,	// (0x00067260) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd25c,	// (0x00067260) aid_fep_china_hwr2_fs_cell

0xd272,	// (0x00067276) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd272,	// (0x00067276) bg_popup_fep_shadow_pane_cp4

0xd289,	// (0x0006728d) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd289,	// (0x0006728d) bg_popup_fep_shadow_pane_cp5

0xd29b,	// (0x0006729f) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd29b,	// (0x0006729f) popup_fep_china_hwr2_fs_control_bar_grid

0xd2af,	// (0x000672b3) popup_fep_china_hwr2_fs_control_funtion_grid

0x650e,	// (0x00060512) aid_fep_china_hwr2_fs_candi_cell

0x5448,	// (0x0005f44c) bg_popup_fep_shadow_pane_cp6

0x6518,	// (0x0006051c) popup_fep_china_hwr2_fs_candidate_grid

0xd2b7,	// (0x000672bb) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd2b7,	// (0x000672bb) cell_fep_china_hwr2_fs_funtion_grid

0x4c8b,	// (0x0005ec8f) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x653a,	// (0x0006053e) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x653a,	// (0x0006053e) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6548,	// (0x0006054c) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6548,	// (0x0006054c) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd38,	// (0x00069d3c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd38,	// (0x00069d3c) cell_fep_china_hwr2_fs_funtion_grid_g

0xd2cf,	// (0x000672d3) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd2cf,	// (0x000672d3) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd2e4,	// (0x000672e8) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd2e4,	// (0x000672e8) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd3d,	// (0x00069d41) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd3d,	// (0x00069d41) cell_fep_china_hwr2_fs_funtion_grid_t

0x658f,	// (0x00060593) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6597,	// (0x0006059b) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x659f,	// (0x000605a3) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd42,	// (0x00069d46) popup_fep_china_hwr2_fs_control_bar_grid_g

0x65a7,	// (0x000605ab) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x65a7,	// (0x000605ab) cell_fep_china_hwr2_fs_candidate_grid

0x65c6,	// (0x000605ca) popup_fep_china_hwr2_fs_candidate_grid_g20

0x65ce,	// (0x000605d2) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4c8b,	// (0x0005ec8f) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4c8b,	// (0x0005ec8f) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb56,	// (0x00069b5a) cell_fep_china_hwr2_fs_candidate_grid_g

0x65d6,	// (0x000605da) cell_fep_china_hwr2_fs_candidate_grid_t1

0x208b,	// (0x0005c08f) clock_nsta_pane_cp_24_ParamLimits

0x208b,	// (0x0005c08f) clock_nsta_pane_cp_24

0x210b,	// (0x0005c10f) indicator_nsta_pane_cp_24_ParamLimits

0x210b,	// (0x0005c10f) indicator_nsta_pane_cp_24

0x3182,	// (0x0005d186) heading_pane_g1

0x0001,

0xf8d1,	// (0x000698d5) heading_pane_g

0x3db6,	// (0x0005ddba) grid_sct_catagory_button_pane

0x3de8,	// (0x0005ddec) scroll_pane_cp5_ParamLimits

0x48d7,	// (0x0005e8db) button_value_adjust_pane_cp5_ParamLimits

0x48d7,	// (0x0005e8db) button_value_adjust_pane_cp5

0x49bc,	// (0x0005e9c0) form2_midp_time_pane_ParamLimits

0x65e4,	// (0x000605e8) cell_sct_catagory_button_pane_ParamLimits

0x65e4,	// (0x000605e8) cell_sct_catagory_button_pane

0x4c50,	// (0x0005ec54) bg_button_pane_cp01_ParamLimits

0x4c50,	// (0x0005ec54) bg_button_pane_cp01

0x4c8b,	// (0x0005ec8f) cell_sct_catagory_button_pane_g1

0xb2b2,	// (0x000652b6) popup_tb_extension_window

0xd300,	// (0x00067304) aid_size_cell_ext_ParamLimits

0xd300,	// (0x00067304) aid_size_cell_ext

0x8a83,	// (0x00062a87) bg_tb_trans_pane_cp1_ParamLimits

0x8a83,	// (0x00062a87) bg_tb_trans_pane_cp1

0xd326,	// (0x0006732a) grid_tb_ext_pane_ParamLimits

0xd326,	// (0x0006732a) grid_tb_ext_pane

0xd366,	// (0x0006736a) cell_tb_ext_pane_ParamLimits

0xd366,	// (0x0006736a) cell_tb_ext_pane

0xd38e,	// (0x00067392) cell_tb_ext_pane_g1_ParamLimits

0xd38e,	// (0x00067392) cell_tb_ext_pane_g1

0x667a,	// (0x0006067e) cell_tb_ext_pane_t1

0x8826,	// (0x0006282a) list_highlight_pane_cp11_ParamLimits

0x8826,	// (0x0006282a) list_highlight_pane_cp11

0xefaa,	// (0x00068fae) popup_uni_indicator_window_ParamLimits

0xefaa,	// (0x00068fae) popup_uni_indicator_window

0x8d08,	// (0x00062d0c) bg_popup_sub_pane_cp14

0x6695,	// (0x00060699) list_uniindi_pane

0x66a1,	// (0x000606a5) uniindi_top_pane

0x8826,	// (0x0006282a) bg_uniindi_top_pane

0x66c2,	// (0x000606c6) uniindi_top_pane_g1

0x66d8,	// (0x000606dc) uniindi_top_pane_g2

0x0003,

0xfd49,	// (0x00069d4d) uniindi_top_pane_g

0x6702,	// (0x00060706) uniindi_top_pane_t1

0x672e,	// (0x00060732) list_single_uniindi_pane_ParamLimits

0x672e,	// (0x00060732) list_single_uniindi_pane

0x4c8b,	// (0x0005ec8f) bg_uniindi_top_pane_g1

0x6740,	// (0x00060744) list_single_uniindi_pane_g1

0x6753,	// (0x00060757) list_single_uniindi_pane_t1

0xee91,	// (0x00068e95) control_bg_pane

0x6778,	// (0x0006077c) bg_sctrl_sk_pane_cp1

0x6781,	// (0x00060785) bg_sctrl_sk_pane_cp2

0x678a,	// (0x0006078e) control_bg_pane_g1

0x6793,	// (0x00060797) control_bg_pane_g2

0x0001,

0xfd52,	// (0x00069d56) control_bg_pane_g

0x46fe,	// (0x0005e702) cell_indicator_nsta_pane_g1_ParamLimits

0xc8ea,	// (0x000668ee) cell_indicator_nsta_pane_g2_ParamLimits

0xfaba,	// (0x00069abe) cell_indicator_nsta_pane_g_ParamLimits

0xe8eb,	// (0x000688ef) form2_midp_time_pane_t1_ParamLimits

0xac5f,	// (0x00064c63) main_idle_act4_pane_ParamLimits

0xac5f,	// (0x00064c63) main_idle_act4_pane

0xb2b2,	// (0x000652b6) popup_tb_extension_window_ParamLimits

0xd34e,	// (0x00067352) tb_ext_find_pane_ParamLimits

0xd34e,	// (0x00067352) tb_ext_find_pane

0x679c,	// (0x000607a0) ai_gene_pane_1_cp1

0x00a0,	// (0x0005a0a4) ai_gene_pane_2_cp1

0x67a4,	// (0x000607a8) list_single_idle_plugin_calendar_pane

0x67ad,	// (0x000607b1) list_single_idle_plugin_notification_pane

0x67b6,	// (0x000607ba) list_single_idle_plugin_player_pane

0xd3ab,	// (0x000673af) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd3ab,	// (0x000673af) list_single_idle_plugin_shortcut_pane

0xd3d3,	// (0x000673d7) main_idle_act4_pane_t1

0xd3eb,	// (0x000673ef) main_idle_act4_pane_t2

0x0001,

0xfd57,	// (0x00069d5b) main_idle_act4_pane_t

0xd403,	// (0x00067407) middle_sk_idle_act4_pane_ParamLimits

0xd403,	// (0x00067407) middle_sk_idle_act4_pane

0xd41f,	// (0x00067423) popup_clock_digital_analogue_window_cp2

0xd446,	// (0x0006744a) shortcut_wheel_idle_act4_pane_ParamLimits

0xd446,	// (0x0006744a) shortcut_wheel_idle_act4_pane

0x4c8b,	// (0x0005ec8f) shortcut_wheel_idle_act4_pane_g1

0x4c8b,	// (0x0005ec8f) shortcut_wheel_idle_act4_pane_g2

0x4c8b,	// (0x0005ec8f) shortcut_wheel_idle_act4_pane_g3

0x4c8b,	// (0x0005ec8f) shortcut_wheel_idle_act4_pane_g4

0x4c8b,	// (0x0005ec8f) shortcut_wheel_idle_act4_pane_g5

0x6849,	// (0x0006084d) shortcut_wheel_idle_act4_pane_g6

0x6851,	// (0x00060855) shortcut_wheel_idle_act4_pane_g7

0x6859,	// (0x0006085d) shortcut_wheel_idle_act4_pane_g8

0x6861,	// (0x00060865) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd5c,	// (0x00069d60) shortcut_wheel_idle_act4_pane_g

0xd4c3,	// (0x000674c7) middle_sk_idle_act4_pane_g1_ParamLimits

0xd4c3,	// (0x000674c7) middle_sk_idle_act4_pane_g1

0xd4d1,	// (0x000674d5) middle_sk_idle_act4_pane_g2_ParamLimits

0xd4d1,	// (0x000674d5) middle_sk_idle_act4_pane_g2

0x0001,

0xfd7f,	// (0x00069d83) middle_sk_idle_act4_pane_g_ParamLimits

0xfd7f,	// (0x00069d83) middle_sk_idle_act4_pane_g

0xd4e9,	// (0x000674ed) middle_sk_idle_act4_pane_t1_ParamLimits

0xd4e9,	// (0x000674ed) middle_sk_idle_act4_pane_t1

0xd518,	// (0x0006751c) grid_ai_shortcut_pane_ParamLimits

0xd518,	// (0x0006751c) grid_ai_shortcut_pane

0xd535,	// (0x00067539) list_highlight_pane_cp16_ParamLimits

0xd535,	// (0x00067539) list_highlight_pane_cp16

0xd542,	// (0x00067546) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd542,	// (0x00067546) list_single_idle_plugin_shortcut_pane_g1

0xd54e,	// (0x00067552) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd54e,	// (0x00067552) list_single_idle_plugin_shortcut_pane_g2

0xd56c,	// (0x00067570) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd56c,	// (0x00067570) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd84,	// (0x00069d88) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd84,	// (0x00069d88) list_single_idle_plugin_shortcut_pane_g

0xd581,	// (0x00067585) cell_ai_shortcut_pane_ParamLimits

0xd581,	// (0x00067585) cell_ai_shortcut_pane

0xd597,	// (0x0006759b) cell_ai_shortcut_pane_g1_ParamLimits

0xd597,	// (0x0006759b) cell_ai_shortcut_pane_g1

0x679c,	// (0x000607a0) ai_gene_pane_1_cp2

0x6992,	// (0x00060996) ai_gene_pane_2_cp2

0x699a,	// (0x0006099e) list_highlight_pane_cp15

0x69a3,	// (0x000609a7) list_single_idle_plugin_calendar_pane_g1

0x699a,	// (0x0006099e) list_highlight_pane_cp17

0x69ab,	// (0x000609af) list_single_idle_plugin_calendar_pane_g1_copy1

0x69b3,	// (0x000609b7) list_single_idle_plugin_player_pane_g1

0x401d,	// (0x0005e021) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd8b,	// (0x00069d8f) list_single_idle_plugin_player_pane_g

0x69bb,	// (0x000609bf) list_single_idle_plugin_player_pane_t1

0x69c9,	// (0x000609cd) list_single_idle_plugin_player_pane_t2

0x69d7,	// (0x000609db) list_single_idle_plugin_player_pane_t3

0x69e5,	// (0x000609e9) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd90,	// (0x00069d94) list_single_idle_plugin_player_pane_t

0x69f3,	// (0x000609f7) wait_bar_pane_cp15

0x69fb,	// (0x000609ff) grid_ai_notification_pane

0x401d,	// (0x0005e021) list_single_idle_plugin_notification_pane_g1

0xd5b9,	// (0x000675bd) cell_ai_notification_pane_ParamLimits

0xd5b9,	// (0x000675bd) cell_ai_notification_pane

0x6a11,	// (0x00060a15) cell_ai_notification_pane_g1

0x6a19,	// (0x00060a1d) cell_ai_notification_pane_t1

0xd5c6,	// (0x000675ca) tb_ext_find_button_pane

0xd5ce,	// (0x000675d2) tb_ext_find_pane_g1

0xd5d6,	// (0x000675da) tb_ext_find_pane_t1

0xc0f6,	// (0x000660fa) tb_ext_find_button_pane_g1

0x6a45,	// (0x00060a49) tb_ext_find_button_pane_g2

0x0001,

0xfd99,	// (0x00069d9d) tb_ext_find_button_pane_g

0xd3d3,	// (0x000673d7) main_idle_act4_pane_t1_ParamLimits

0xd3eb,	// (0x000673ef) main_idle_act4_pane_t2_ParamLimits

0xfd57,	// (0x00069d5b) main_idle_act4_pane_t_ParamLimits

0xd41f,	// (0x00067423) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd436,	// (0x0006743a) sat_plugin_idle_act4_pane_ParamLimits

0xd436,	// (0x0006743a) sat_plugin_idle_act4_pane

0xd5e4,	// (0x000675e8) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd5e4,	// (0x000675e8) sat_plugin_idle_act4_pane_t1

0xd5fc,	// (0x00067600) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd5fc,	// (0x00067600) sat_plugin_idle_act4_pane_t2

0xd614,	// (0x00067618) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd614,	// (0x00067618) sat_plugin_idle_act4_pane_t3

0xd62c,	// (0x00067630) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd62c,	// (0x00067630) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd9e,	// (0x00069da2) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd9e,	// (0x00069da2) sat_plugin_idle_act4_pane_t

0xef56,	// (0x00068f5a) popup_battery_window_ParamLimits

0xef56,	// (0x00068f5a) popup_battery_window

0x8826,	// (0x0006282a) bg_popup_sub_pane_cp25_ParamLimits

0x8826,	// (0x0006282a) bg_popup_sub_pane_cp25

0x6a9a,	// (0x00060a9e) popup_battery_window_g1_ParamLimits

0x6a9a,	// (0x00060a9e) popup_battery_window_g1

0x6aa6,	// (0x00060aaa) popup_battery_window_t1_ParamLimits

0x6aa6,	// (0x00060aaa) popup_battery_window_t1

0x6ab8,	// (0x00060abc) popup_battery_window_t2_ParamLimits

0x6ab8,	// (0x00060abc) popup_battery_window_t2

0x0001,

0xfda7,	// (0x00069dab) popup_battery_window_t_ParamLimits

0xfda7,	// (0x00069dab) popup_battery_window_t

0xa9f2,	// (0x000649f6) midp_canvas_pane_ParamLimits

0xaa4d,	// (0x00064a51) midp_keypad_pane_ParamLimits

0xaa4d,	// (0x00064a51) midp_keypad_pane

0x196e,	// (0x0005b972) main_midp_pane_ParamLimits

0x478a,	// (0x0005e78e) signal_pane_g2_cp_ParamLimits

0xd644,	// (0x00067648) aid_size_cell_midp_keypad_ParamLimits

0xd644,	// (0x00067648) aid_size_cell_midp_keypad

0xd662,	// (0x00067666) midp_keyp_game_grid_pane_ParamLimits

0xd662,	// (0x00067666) midp_keyp_game_grid_pane

0xd689,	// (0x0006768d) midp_keyp_rocker_pane_ParamLimits

0xd689,	// (0x0006768d) midp_keyp_rocker_pane

0xd6c8,	// (0x000676cc) midp_keyp_sk_left_pane_ParamLimits

0xd6c8,	// (0x000676cc) midp_keyp_sk_left_pane

0xd71c,	// (0x00067720) midp_keyp_sk_right_pane_ParamLimits

0xd71c,	// (0x00067720) midp_keyp_sk_right_pane

0x5448,	// (0x0005f44c) bg_button_pane_cp03

0xd770,	// (0x00067774) midp_keyp_sk_left_pane_g1

0x5448,	// (0x0005f44c) bg_button_pane_cp04

0xd770,	// (0x00067774) midp_keyp_sk_right_pane_g1

0x4c8b,	// (0x0005ec8f) midp_keyp_rocker_pane_g1

0xd779,	// (0x0006777d) keyp_game_cell_pane_ParamLimits

0xd779,	// (0x0006777d) keyp_game_cell_pane

0x5448,	// (0x0005f44c) bg_button_pane_cp02

0xd79f,	// (0x000677a3) keyp_game_cell_pane_g1

0x9b58,	// (0x00063b5c) popup_fep_vkb2_window_ParamLimits

0x9b58,	// (0x00063b5c) popup_fep_vkb2_window

0xbb0d,	// (0x00065b11) aid_size_cell_vkb2_ParamLimits

0xbb0d,	// (0x00065b11) aid_size_cell_vkb2

0xbb43,	// (0x00065b47) popup_fep_vkb2_window_g1_ParamLimits

0xbb43,	// (0x00065b47) popup_fep_vkb2_window_g1

0xbb93,	// (0x00065b97) vkb2_area_bottom_pane_ParamLimits

0xbb93,	// (0x00065b97) vkb2_area_bottom_pane

0xbbef,	// (0x00065bf3) vkb2_area_keypad_pane_ParamLimits

0xbbef,	// (0x00065bf3) vkb2_area_keypad_pane

0xbc3d,	// (0x00065c41) vkb2_area_top_pane_ParamLimits

0xbc3d,	// (0x00065c41) vkb2_area_top_pane

0xbcc3,	// (0x00065cc7) vkb2_top_entry_pane_ParamLimits

0xbcc3,	// (0x00065cc7) vkb2_top_entry_pane

0xbcf0,	// (0x00065cf4) vkb2_top_grid_left_pane_ParamLimits

0xbcf0,	// (0x00065cf4) vkb2_top_grid_left_pane

0xbd10,	// (0x00065d14) vkb2_top_grid_right_pane_ParamLimits

0xbd10,	// (0x00065d14) vkb2_top_grid_right_pane

0x10d8,	// (0x0005b0dc) vkb2_cell_keypad_pane_ParamLimits

0x10d8,	// (0x0005b0dc) vkb2_cell_keypad_pane

0xbd56,	// (0x00065d5a) vkb2_area_bottom_grid_pane_ParamLimits

0xbd56,	// (0x00065d5a) vkb2_area_bottom_grid_pane

0xbd80,	// (0x00065d84) vkb2_area_bottom_pane_g1_ParamLimits

0xbd80,	// (0x00065d84) vkb2_area_bottom_pane_g1

0xbda6,	// (0x00065daa) vkb2_area_bottom_pane_g2_ParamLimits

0xbda6,	// (0x00065daa) vkb2_area_bottom_pane_g2

0xbdd7,	// (0x00065ddb) vkb2_area_bottom_pane_g3_ParamLimits

0xbdd7,	// (0x00065ddb) vkb2_area_bottom_pane_g3

0x0002,

0xfdac,	// (0x00069db0) vkb2_area_bottom_pane_g_ParamLimits

0xfdac,	// (0x00069db0) vkb2_area_bottom_pane_g

0x1282,	// (0x0005b286) vkb2_top_cell_left_pane_ParamLimits

0x1282,	// (0x0005b286) vkb2_top_cell_left_pane

0xd7a8,	// (0x000677ac) vkb2_top_entry_pane_g1_ParamLimits

0xd7a8,	// (0x000677ac) vkb2_top_entry_pane_g1

0xd7b6,	// (0x000677ba) vkb2_top_entry_pane_t1_ParamLimits

0xd7b6,	// (0x000677ba) vkb2_top_entry_pane_t1

0x6c5b,	// (0x00060c5f) vkb2_top_entry_pane_t2_ParamLimits

0x6c5b,	// (0x00060c5f) vkb2_top_entry_pane_t2

0x6c8d,	// (0x00060c91) vkb2_top_entry_pane_t3_ParamLimits

0x6c8d,	// (0x00060c91) vkb2_top_entry_pane_t3

0x0002,

0xfdb3,	// (0x00069db7) vkb2_top_entry_pane_t_ParamLimits

0xfdb3,	// (0x00069db7) vkb2_top_entry_pane_t

0xbe41,	// (0x00065e45) vkb2_top_grid_right_pane_g1_ParamLimits

0xbe41,	// (0x00065e45) vkb2_top_grid_right_pane_g1

0x12e5,	// (0x0005b2e9) vkb2_top_grid_right_pane_g2_ParamLimits

0x12e5,	// (0x0005b2e9) vkb2_top_grid_right_pane_g2

0x12fd,	// (0x0005b301) vkb2_top_grid_right_pane_g3_ParamLimits

0x12fd,	// (0x0005b301) vkb2_top_grid_right_pane_g3

0xbe57,	// (0x00065e5b) vkb2_top_grid_right_pane_g4_ParamLimits

0xbe57,	// (0x00065e5b) vkb2_top_grid_right_pane_g4

0x0003,

0xfdba,	// (0x00069dbe) vkb2_top_grid_right_pane_g_ParamLimits

0xfdba,	// (0x00069dbe) vkb2_top_grid_right_pane_g

0x132b,	// (0x0005b32f) vkb2_top_cell_left_pane_g1

0x1342,	// (0x0005b346) vkb2_cell_keypad_pane_g1_ParamLimits

0x1342,	// (0x0005b346) vkb2_cell_keypad_pane_g1

0x6cb1,	// (0x00060cb5) vkb2_cell_keypad_pane_t1_ParamLimits

0x6cb1,	// (0x00060cb5) vkb2_cell_keypad_pane_t1

0x1350,	// (0x0005b354) vkb2_cell_bottom_grid_pane_ParamLimits

0x1350,	// (0x0005b354) vkb2_cell_bottom_grid_pane

0x1389,	// (0x0005b38d) vkb2_cell_bottom_grid_pane_g1

0xd467,	// (0x0006746b) aid_call2_pane_cp02

0xd46f,	// (0x00067473) aid_call_pane_cp02

0xd477,	// (0x0006747b) clock_digital_number_pane_cp10

0xd47f,	// (0x00067483) clock_digital_number_pane_cp11

0xd487,	// (0x0006748b) clock_digital_number_pane_cp12

0xd48f,	// (0x00067493) clock_digital_number_pane_cp13

0xd497,	// (0x0006749b) clock_digital_separator_pane_cp10

0xc0f6,	// (0x000660fa) popup_clock_digital_analogue_window_cp2_g1

0xc0f6,	// (0x000660fa) popup_clock_digital_analogue_window_cp2_g2

0xd49f,	// (0x000674a3) popup_clock_digital_analogue_window_cp2_g3

0xc0f6,	// (0x000660fa) popup_clock_digital_analogue_window_cp2_g4

0xd49f,	// (0x000674a3) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd6f,	// (0x00069d73) popup_clock_digital_analogue_window_cp2_g

0xd4a7,	// (0x000674ab) popup_clock_digital_analogue_window_cp2_t1

0xd4b5,	// (0x000674b9) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd7a,	// (0x00069d7e) popup_clock_digital_analogue_window_cp2_t

0x4c8b,	// (0x0005ec8f) clock_digital_number_pane_cp10_g1

0x4c8b,	// (0x0005ec8f) clock_digital_number_pane_cp10_g2

0x0001,

0xfb56,	// (0x00069b5a) clock_digital_number_pane_cp10_g

0x4c8b,	// (0x0005ec8f) clock_digital_separator_pane_cp10_g1

0x4c8b,	// (0x0005ec8f) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb56,	// (0x00069b5a) clock_digital_separator_pane_cp10_g

0x66e4,	// (0x000606e8) uniindi_top_pane_g3

0x66f5,	// (0x000606f9) uniindi_top_pane_g4

0x1163,	// (0x0005b167) vkb2_row_keypad_pane_ParamLimits

0x1163,	// (0x0005b167) vkb2_row_keypad_pane

0x13a5,	// (0x0005b3a9) vkb2_cell_t_keypad_pane_ParamLimits

0x13a5,	// (0x0005b3a9) vkb2_cell_t_keypad_pane

0x13b5,	// (0x0005b3b9) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x13b5,	// (0x0005b3b9) vkb2_cell_t_keypad_pane_cp08

0x13ca,	// (0x0005b3ce) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x13ca,	// (0x0005b3ce) vkb2_cell_t_keypad_pane_cp09

0x13de,	// (0x0005b3e2) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x13de,	// (0x0005b3e2) vkb2_cell_t_keypad_pane_cp01

0x13ef,	// (0x0005b3f3) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x13ef,	// (0x0005b3f3) vkb2_cell_t_keypad_pane_cp02

0x1400,	// (0x0005b404) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1400,	// (0x0005b404) vkb2_cell_t_keypad_pane_cp03

0x1411,	// (0x0005b415) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1411,	// (0x0005b415) vkb2_cell_t_keypad_pane_cp04

0x1422,	// (0x0005b426) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1422,	// (0x0005b426) vkb2_cell_t_keypad_pane_cp05

0x1433,	// (0x0005b437) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1433,	// (0x0005b437) vkb2_cell_t_keypad_pane_cp06

0x1446,	// (0x0005b44a) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1446,	// (0x0005b44a) vkb2_cell_t_keypad_pane_cp07

0x145b,	// (0x0005b45f) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x145b,	// (0x0005b45f) vkb2_cell_t_keypad_pane_cp10

0x0b15,	// (0x0005ab19) vkb2_cell_t_keypad_pane_g1

0x6cc8,	// (0x00060ccc) vkb2_cell_t_keypad_pane_t1

0xee91,	// (0x00068e95) popup_grid_graphic2_window

0xd7ef,	// (0x000677f3) aid_size_cell_graphic2_ParamLimits

0xd7ef,	// (0x000677f3) aid_size_cell_graphic2

0xd82d,	// (0x00067831) bg_popup_window_pane_cp21_ParamLimits

0xd82d,	// (0x00067831) bg_popup_window_pane_cp21

0xd83b,	// (0x0006783f) graphic2_pages_pane_ParamLimits

0xd83b,	// (0x0006783f) graphic2_pages_pane

0xd893,	// (0x00067897) grid_graphic2_control_pane_ParamLimits

0xd893,	// (0x00067897) grid_graphic2_control_pane

0xd8db,	// (0x000678df) grid_graphic2_pane_ParamLimits

0xd8db,	// (0x000678df) grid_graphic2_pane

0xd966,	// (0x0006796a) cell_graphic2_pane

0x5448,	// (0x0005f44c) main_comp_mode_pane

0x5f55,	// (0x0005ff59) list_ai3_gene_pane_ParamLimits

0xd1a4,	// (0x000671a8) bg_popup_window_pane_cp19_ParamLimits

0x6329,	// (0x0006032d) bg_touch_area_indi_pane_ParamLimits

0x6329,	// (0x0006032d) bg_touch_area_indi_pane

0x633f,	// (0x00060343) bg_touch_area_indi_pane_cp01_ParamLimits

0x633f,	// (0x00060343) bg_touch_area_indi_pane_cp01

0x6357,	// (0x0006035b) bg_touch_area_indi_pane_cp02_ParamLimits

0x6357,	// (0x0006035b) bg_touch_area_indi_pane_cp02

0x6371,	// (0x00060375) bg_touch_area_indi_pane_cp03_ParamLimits

0x6371,	// (0x00060375) bg_touch_area_indi_pane_cp03

0x638b,	// (0x0006038f) popup_slider_window_g1_ParamLimits

0x63a7,	// (0x000603ab) popup_slider_window_g2_ParamLimits

0x63c3,	// (0x000603c7) popup_slider_window_g3_ParamLimits

0xfd04,	// (0x00069d08) popup_slider_window_g_ParamLimits

0x641f,	// (0x00060423) popup_slider_window_t1_ParamLimits

0x6493,	// (0x00060497) small_volume_slider_vertical_pane_ParamLimits

0xd966,	// (0x0006796a) cell_graphic2_pane_ParamLimits

0xd9c9,	// (0x000679cd) bg_button_pane_cp10_ParamLimits

0xd9c9,	// (0x000679cd) bg_button_pane_cp10

0xd9dc,	// (0x000679e0) bg_button_pane_cp11_ParamLimits

0xd9dc,	// (0x000679e0) bg_button_pane_cp11

0xd9ef,	// (0x000679f3) graphic2_pages_pane_g1_ParamLimits

0xd9ef,	// (0x000679f3) graphic2_pages_pane_g1

0xda0a,	// (0x00067a0e) graphic2_pages_pane_g2_ParamLimits

0xda0a,	// (0x00067a0e) graphic2_pages_pane_g2

0x0001,

0xfdc8,	// (0x00069dcc) graphic2_pages_pane_g_ParamLimits

0xfdc8,	// (0x00069dcc) graphic2_pages_pane_g

0xda22,	// (0x00067a26) graphic2_pages_pane_t1_ParamLimits

0xda22,	// (0x00067a26) graphic2_pages_pane_t1

0xda3a,	// (0x00067a3e) cell_graphic2_control_pane_ParamLimits

0xda3a,	// (0x00067a3e) cell_graphic2_control_pane

0xda6e,	// (0x00067a72) cell_graphic2_pane_g1_ParamLimits

0xda6e,	// (0x00067a72) cell_graphic2_pane_g1

0xda7b,	// (0x00067a7f) cell_graphic2_pane_g2_ParamLimits

0xda7b,	// (0x00067a7f) cell_graphic2_pane_g2

0xcaa6,	// (0x00066aaa) cell_graphic2_pane_g3_ParamLimits

0xcaa6,	// (0x00066aaa) cell_graphic2_pane_g3

0xda88,	// (0x00067a8c) cell_graphic2_pane_g4_ParamLimits

0xda88,	// (0x00067a8c) cell_graphic2_pane_g4

0xda95,	// (0x00067a99) cell_graphic2_pane_g5_ParamLimits

0xda95,	// (0x00067a99) cell_graphic2_pane_g5

0x0004,

0xfdcd,	// (0x00069dd1) cell_graphic2_pane_g_ParamLimits

0xfdcd,	// (0x00069dd1) cell_graphic2_pane_g

0xdab5,	// (0x00067ab9) cell_graphic2_pane_t1_ParamLimits

0xdab5,	// (0x00067ab9) cell_graphic2_pane_t1

0x3176,	// (0x0005d17a) grid_highlight_pane_cp11_ParamLimits

0x3176,	// (0x0005d17a) grid_highlight_pane_cp11

0x8826,	// (0x0006282a) bg_button_pane_cp05

0xdaea,	// (0x00067aee) cell_graphic2_control_pane_g1

0x4c8b,	// (0x0005ec8f) bg_touch_area_indi_pane_g1

0x6fa2,	// (0x00060fa6) aid_cmod_rocker_key_size

0x6fac,	// (0x00060fb0) aid_cmode_itu_key_size

0x6fb6,	// (0x00060fba) main_cmode_video_pane

0x6fc0,	// (0x00060fc4) main_comp_mode_itu_pane

0x6fcc,	// (0x00060fd0) main_comp_mode_rocker_pane

0x6fd8,	// (0x00060fdc) cell_cmode_rocker_pane_ParamLimits

0x6fd8,	// (0x00060fdc) cell_cmode_rocker_pane

0x6fec,	// (0x00060ff0) cell_cmode_itu_pane_ParamLimits

0x6fec,	// (0x00060ff0) cell_cmode_itu_pane

0x8d08,	// (0x00062d0c) bg_button_pane_cp06_ParamLimits

0x8d08,	// (0x00062d0c) bg_button_pane_cp06

0x4f06,	// (0x0005ef0a) cell_cmode_rocker_pane_g1_ParamLimits

0x4f06,	// (0x0005ef0a) cell_cmode_rocker_pane_g1

0x653a,	// (0x0006053e) cell_cmode_rocker_pane_g2_ParamLimits

0x653a,	// (0x0006053e) cell_cmode_rocker_pane_g2

0x0001,

0xfddd,	// (0x00069de1) cell_cmode_rocker_pane_g_ParamLimits

0xfddd,	// (0x00069de1) cell_cmode_rocker_pane_g

0x5448,	// (0x0005f44c) bg_button_pane_cp07

0x7003,	// (0x00061007) cell_cmode_itu_pane_g1

0x700c,	// (0x00061010) cell_cmode_itu_pane_t1

0x701a,	// (0x0006101e) cell_cmode_itu_pane_t2

0x0001,

0xfde2,	// (0x00069de6) cell_cmode_itu_pane_t

0x6768,	// (0x0006076c) aid_touch_ctrl_left

0x6770,	// (0x00060774) aid_touch_ctrl_right

0x5448,	// (0x0005f44c) compa_mode_pane

0xdb10,	// (0x00067b14) aid_cmod_rocker_key_size_cp

0xdb1a,	// (0x00067b1e) aid_cmode_itu_key_size_cp

0x703c,	// (0x00061040) compa_mode_pane_g1

0x7044,	// (0x00061048) compa_mode_pane_g2

0x704c,	// (0x00061050) compa_mode_pane_g3

0x0002,

0xfde7,	// (0x00069deb) compa_mode_pane_g

0xdb24,	// (0x00067b28) main_comp_mode_itu_pane_cp

0xdb2c,	// (0x00067b30) main_comp_mode_rocker_pane_cp

0xdb34,	// (0x00067b38) cell_cmode_itu_pane_cp_ParamLimits

0xdb34,	// (0x00067b38) cell_cmode_itu_pane_cp

0xdb49,	// (0x00067b4d) cell_cmode_rocker_pane_cp_ParamLimits

0xdb49,	// (0x00067b4d) cell_cmode_rocker_pane_cp

0x8d08,	// (0x00062d0c) bg_button_pane_cp06_cp_ParamLimits

0x8d08,	// (0x00062d0c) bg_button_pane_cp06_cp

0x4f06,	// (0x0005ef0a) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4f06,	// (0x0005ef0a) cell_cmode_rocker_pane_g1_cp

0x4c8b,	// (0x0005ec8f) cell_cmode_rocker_pane_g2_cp

0x5448,	// (0x0005f44c) bg_button_pane_cp07_cp

0xdb5b,	// (0x00067b5f) cell_cmode_itu_pane_g1_cp

0xdb64,	// (0x00067b68) cell_cmode_itu_pane_t1_cp

0xdb64,	// (0x00067b68) cell_cmode_itu_pane_t2_cp

0xc6fd,	// (0x00066701) settings_code_pane_cp2

0x86f3,	// (0x000626f7) bg_popup_window_pane_cp3_ParamLimits

0x8a14,	// (0x00062a18) heading_pane_cp3_ParamLimits

0x8a20,	// (0x00062a24) listscroll_popup_graphic_pane_ParamLimits

0x08a8,	// (0x0005a8ac) fep_hwr_aid_pane_ParamLimits

0x0e1b,	// (0x0005ae1f) aid_touch_sctrl_top_ParamLimits

0x0e36,	// (0x0005ae3a) sctrl_sk_top_pane_g1_ParamLimits

0x0b15,	// (0x0005ab19) sctrl_sk_top_pane_g2_ParamLimits

0xfd1d,	// (0x00069d21) sctrl_sk_top_pane_g_ParamLimits

0x0e43,	// (0x0005ae47) sctrl_sk_top_pane_t1_ParamLimits

0x0e1b,	// (0x0005ae1f) aid_touch_sctrl_bottom_ParamLimits

0x0e43,	// (0x0005ae47) sctrl_sk_bottom_pane_t1_ParamLimits

0x66ae,	// (0x000606b2) aid_area_touch_clock

0xbc85,	// (0x00065c89) aid_vkb2_area_top_pane_cell_ParamLimits

0xbc85,	// (0x00065c89) aid_vkb2_area_top_pane_cell

0xbd30,	// (0x00065d34) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbd30,	// (0x00065d34) aid_vkb2_area_bottom_pane_cell

0x6c13,	// (0x00060c17) popup_char_count_window

0x70a2,	// (0x000610a6) popup_char_count_window_g1

0x70ab,	// (0x000610af) popup_char_count_window_g2

0x70b4,	// (0x000610b8) popup_char_count_window_g3

0x0002,

0xfdee,	// (0x00069df2) popup_char_count_window_g

0x70bd,	// (0x000610c1) popup_char_count_window_t1

0x0ef4,	// (0x0005aef8) popup_fep_char_preview_window_ParamLimits

0x0ef4,	// (0x0005aef8) popup_fep_char_preview_window

0xbca5,	// (0x00065ca9) vkb2_top_candi_pane_ParamLimits

0xbca5,	// (0x00065ca9) vkb2_top_candi_pane

0xdb72,	// (0x00067b76) cell_vkb2_top_candi_pane_ParamLimits

0xdb72,	// (0x00067b76) cell_vkb2_top_candi_pane

0x1470,	// (0x0005b474) bg_popup_fep_char_preview_window_ParamLimits

0x1470,	// (0x0005b474) bg_popup_fep_char_preview_window

0x147e,	// (0x0005b482) popup_fep_char_preview_window_t1_ParamLimits

0x147e,	// (0x0005b482) popup_fep_char_preview_window_t1

0x711c,	// (0x00061120) bg_popup_fep_char_preview_window_g1

0x7124,	// (0x00061128) bg_popup_fep_char_preview_window_g2

0x712c,	// (0x00061130) bg_popup_fep_char_preview_window_g3

0x7134,	// (0x00061138) bg_popup_fep_char_preview_window_g4

0x713c,	// (0x00061140) bg_popup_fep_char_preview_window_g5

0x14b8,	// (0x0005b4bc) bg_popup_fep_char_preview_window_g6

0x7144,	// (0x00061148) bg_popup_fep_char_preview_window_g7

0x714c,	// (0x00061150) bg_popup_fep_char_preview_window_g8

0x7154,	// (0x00061158) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf5,	// (0x00069df9) bg_popup_fep_char_preview_window_g

0x0b15,	// (0x0005ab19) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0b15,	// (0x0005ab19) cell_vkb2_top_candi_pane_g1

0x0b23,	// (0x0005ab27) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0b23,	// (0x0005ab27) cell_vkb2_top_candi_pane_g2

0x54c4,	// (0x0005f4c8) cell_vkb2_top_candi_pane_g3_ParamLimits

0x54c4,	// (0x0005f4c8) cell_vkb2_top_candi_pane_g3

0x14c0,	// (0x0005b4c4) cell_vkb2_top_candi_pane_g4_ParamLimits

0x14c0,	// (0x0005b4c4) cell_vkb2_top_candi_pane_g4

0x53f3,	// (0x0005f3f7) cell_vkb2_top_candi_pane_g5_ParamLimits

0x53f3,	// (0x0005f3f7) cell_vkb2_top_candi_pane_g5

0x14e1,	// (0x0005b4e5) cell_vkb2_top_candi_pane_g6_ParamLimits

0x14e1,	// (0x0005b4e5) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe08,	// (0x00069e0c) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe08,	// (0x00069e0c) cell_vkb2_top_candi_pane_g

0x14ef,	// (0x0005b4f3) cell_vkb2_top_candi_pane_t1

0x06bc,	// (0x0005a6c0) aid_size_touch_slider_mark_ParamLimits

0x06bc,	// (0x0005a6c0) aid_size_touch_slider_mark

0xd877,	// (0x0006787b) grid_graphic2_catg_pane_ParamLimits

0xd877,	// (0x0006787b) grid_graphic2_catg_pane

0xd935,	// (0x00067939) popup_grid_graphic2_window_t1_ParamLimits

0xd935,	// (0x00067939) popup_grid_graphic2_window_t1

0xd94b,	// (0x0006794f) popup_grid_graphic2_window_t2_ParamLimits

0xd94b,	// (0x0006794f) popup_grid_graphic2_window_t2

0x0001,

0xfdc3,	// (0x00069dc7) popup_grid_graphic2_window_t_ParamLimits

0xfdc3,	// (0x00069dc7) popup_grid_graphic2_window_t

0x8826,	// (0x0006282a) bg_button_pane_cp05_ParamLimits

0xdaea,	// (0x00067aee) cell_graphic2_control_pane_g1_ParamLimits

0xdbdc,	// (0x00067be0) cell_graphic2_catg_pane_ParamLimits

0xdbdc,	// (0x00067be0) cell_graphic2_catg_pane

0x5448,	// (0x0005f44c) bg_button_pane_cp12

0xdbee,	// (0x00067bf2) cell_graphic2_catg_pane_g1

0x667a,	// (0x0006067e) cell_tb_ext_pane_t1_ParamLimits

0x12a2,	// (0x0005b2a6) vkb2_top_cell_right_narrow_pane_ParamLimits

0x12a2,	// (0x0005b2a6) vkb2_top_cell_right_narrow_pane

0x12ba,	// (0x0005b2be) vkb2_top_cell_right_wide_pane_ParamLimits

0x12ba,	// (0x0005b2be) vkb2_top_cell_right_wide_pane

0x089a,	// (0x0005a89e) bg_vkb2_func_pane_ParamLimits

0x089a,	// (0x0005a89e) bg_vkb2_func_pane

0x132b,	// (0x0005b32f) vkb2_top_cell_left_pane_g1_ParamLimits

0x089a,	// (0x0005a89e) bg_vkb2_fuc_pane_cp03_ParamLimits

0x089a,	// (0x0005a89e) bg_vkb2_fuc_pane_cp03

0x1389,	// (0x0005b38d) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x24b7,	// (0x0005c4bb) bg_vkb2_func_pane_g1

0x24bf,	// (0x0005c4c3) bg_vkb2_func_pane_g2

0x24cf,	// (0x0005c4d3) bg_vkb2_func_pane_g3

0x24c7,	// (0x0005c4cb) bg_vkb2_func_pane_g4

0x24d7,	// (0x0005c4db) bg_vkb2_func_pane_g5

0x24df,	// (0x0005c4e3) bg_vkb2_func_pane_g6

0x24e7,	// (0x0005c4eb) bg_vkb2_func_pane_g7

0x24ef,	// (0x0005c4f3) bg_vkb2_func_pane_g8

0x24af,	// (0x0005c4b3) bg_vkb2_func_pane_g9

0x0008,

0xfe15,	// (0x00069e19) bg_vkb2_func_pane_g

0x089a,	// (0x0005a89e) bg_vkb2_fuc_pane_cp01_ParamLimits

0x089a,	// (0x0005a89e) bg_vkb2_fuc_pane_cp01

0x132b,	// (0x0005b32f) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x132b,	// (0x0005b32f) vkb2_top_cell_right_wide_pane_g1

0x089a,	// (0x0005a89e) bg_vkb2_fuc_pane_cp02_ParamLimits

0x089a,	// (0x0005a89e) bg_vkb2_fuc_pane_cp02

0x1389,	// (0x0005b38d) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1389,	// (0x0005b38d) vkb2_top_cell_right_narrow_pane_g1

0xd0de,	// (0x000670e2) aid_touch_area_decrease_ParamLimits

0xd0de,	// (0x000670e2) aid_touch_area_decrease

0xd118,	// (0x0006711c) aid_touch_area_increase_ParamLimits

0xd118,	// (0x0006711c) aid_touch_area_increase

0xd140,	// (0x00067144) aid_touch_area_mute_ParamLimits

0xd140,	// (0x00067144) aid_touch_area_mute

0xd170,	// (0x00067174) aid_touch_area_slider_ParamLimits

0xd170,	// (0x00067174) aid_touch_area_slider

0xd1b0,	// (0x000671b4) popup_slider_window_g4_ParamLimits

0xd1b0,	// (0x000671b4) popup_slider_window_g4

0xd1d8,	// (0x000671dc) popup_slider_window_g5_ParamLimits

0xd1d8,	// (0x000671dc) popup_slider_window_g5

0xd20c,	// (0x00067210) popup_slider_window_g6_ParamLimits

0xd20c,	// (0x00067210) popup_slider_window_g6

0x644d,	// (0x00060451) popup_slider_window_t2_ParamLimits

0x644d,	// (0x00060451) popup_slider_window_t2

0x0001,

0xfd11,	// (0x00069d15) popup_slider_window_t_ParamLimits

0xfd11,	// (0x00069d15) popup_slider_window_t

0xd228,	// (0x0006722c) slider_pane_ParamLimits

0xd228,	// (0x0006722c) slider_pane

0x7177,	// (0x0006117b) slider_pane_g1_ParamLimits

0x7177,	// (0x0006117b) slider_pane_g1

0x718b,	// (0x0006118f) slider_pane_g2_ParamLimits

0x718b,	// (0x0006118f) slider_pane_g2

0x71a1,	// (0x000611a5) slider_pane_g3_ParamLimits

0x71a1,	// (0x000611a5) slider_pane_g3

0x0003,

0xfe28,	// (0x00069e2c) slider_pane_g_ParamLimits

0xfe28,	// (0x00069e2c) slider_pane_g

0xb2fe,	// (0x00065302) popup_tb_float_extension_window_ParamLimits

0xb2fe,	// (0x00065302) popup_tb_float_extension_window

0x71cd,	// (0x000611d1) aid_size_cell_tb_float_ext

0x5448,	// (0x0005f44c) bg_popup_sub_window_cp28

0x71d9,	// (0x000611dd) grid_tb_float_ext_pane

0x71e5,	// (0x000611e9) cell_tb_float_ext_pane_ParamLimits

0x71e5,	// (0x000611e9) cell_tb_float_ext_pane

0x7201,	// (0x00061205) cell_tb_float_ext_pane_g1

0x720a,	// (0x0006120e) grid_highlight_pane_cp12

0xb92d,	// (0x00065931) cell_last_hwr_side_pane_ParamLimits

0xb92d,	// (0x00065931) cell_last_hwr_side_pane

0x4c8b,	// (0x0005ec8f) cell_last_hwr_side_pane_g1

0x7213,	// (0x00061217) cell_last_hwr_side_pane_g2

0x0001,

0xfe31,	// (0x00069e35) cell_last_hwr_side_pane_g

0xbe0c,	// (0x00065e10) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbe0c,	// (0x00065e10) vkb2_area_bottom_space_btn_pane

0x0b15,	// (0x0005ab19) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6cc8,	// (0x00060ccc) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x14ef,	// (0x0005b4f3) cell_vkb2_top_candi_pane_t1_ParamLimits

0x150d,	// (0x0005b511) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x150d,	// (0x0005b511) vkb2_area_bottom_space_btn_pane_g1

0x1547,	// (0x0005b54b) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1547,	// (0x0005b54b) vkb2_area_bottom_space_btn_pane_g2

0x157d,	// (0x0005b581) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x157d,	// (0x0005b581) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe36,	// (0x00069e3a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe36,	// (0x00069e3a) vkb2_area_bottom_space_btn_pane_g

0x095f,	// (0x0005a963) cel_fep_hwr_func_pane_ParamLimits

0x095f,	// (0x0005a963) cel_fep_hwr_func_pane

0xb902,	// (0x00065906) cell_hwr_side_button_pane_ParamLimits

0xb902,	// (0x00065906) cell_hwr_side_button_pane

0x66ae,	// (0x000606b2) aid_area_touch_clock_ParamLimits

0x8826,	// (0x0006282a) bg_uniindi_top_pane_ParamLimits

0x66c2,	// (0x000606c6) uniindi_top_pane_g1_ParamLimits

0x66d8,	// (0x000606dc) uniindi_top_pane_g2_ParamLimits

0x66e4,	// (0x000606e8) uniindi_top_pane_g3_ParamLimits

0x66f5,	// (0x000606f9) uniindi_top_pane_g4_ParamLimits

0xfd49,	// (0x00069d4d) uniindi_top_pane_g_ParamLimits

0x6702,	// (0x00060706) uniindi_top_pane_t1_ParamLimits

0x8826,	// (0x0006282a) bg_vkb2_func_pane_cp01_ParamLimits

0x8826,	// (0x0006282a) bg_vkb2_func_pane_cp01

0x721c,	// (0x00061220) cel_fep_hwr_func_pane_g1_ParamLimits

0x721c,	// (0x00061220) cel_fep_hwr_func_pane_g1

0x8826,	// (0x0006282a) bg_vkb2_func_pane_cp02_ParamLimits

0x8826,	// (0x0006282a) bg_vkb2_func_pane_cp02

0x721c,	// (0x00061220) cell_hwr_side_button_pane_g1_ParamLimits

0x721c,	// (0x00061220) cell_hwr_side_button_pane_g1

0x2330,	// (0x0005c334) status_pane_g4_ParamLimits

0x2330,	// (0x0005c334) status_pane_g4

0x234a,	// (0x0005c34e) status_pane_t1

0x4a2a,	// (0x0005ea2e) form2_midp_gauge_slider_cont_pane

0x4a32,	// (0x0005ea36) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc9ec,	// (0x000669f0) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc9fe,	// (0x00066a02) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb09,	// (0x00069b0d) form2_midp_gauge_slider_pane_t_ParamLimits

0x4a68,	// (0x0005ea6c) form2_midp_slider_pane_ParamLimits

0x0eb4,	// (0x0005aeb8) aid_size_cell_func_vkb2_ParamLimits

0x0eb4,	// (0x0005aeb8) aid_size_cell_func_vkb2

0x71b9,	// (0x000611bd) slider_pane_g4_ParamLimits

0x71b9,	// (0x000611bd) slider_pane_g4

0xbe6d,	// (0x00065e71) form2_midp_gauge_slider_pane_t2_cp01

0xbe7b,	// (0x00065e7f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbe7b,	// (0x00065e7f) form2_midp_gauge_slider_pane_t3_cp01

0x15f2,	// (0x0005b5f6) form2_midp_slider_pane_cp01

0x5448,	// (0x0005f44c) navi_smil_pane

0x726b,	// (0x0006126f) navi_smil_pane_g1

0x7273,	// (0x00061277) navi_smil_pane_t1

0x722a,	// (0x0006122e) form2_midp_slider_pane_g1

0x7233,	// (0x00061237) form2_midp_slider_pane_g2

0x7251,	// (0x00061255) form2_midp_slider_pane_g3

0x722a,	// (0x0006122e) form2_midp_slider_pane_g4

0xdbf7,	// (0x00067bfb) form2_midp_slider_pane_g5

0x0004,

0xfe3f,	// (0x00069e43) form2_midp_slider_pane_g

0x15b7,	// (0x0005b5bb) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x15b7,	// (0x0005b5bb) vkb2_area_bottom_space_btn_pane_g4

0xb4e5,	// (0x000654e9) lc0_navi_pane_ParamLimits

0xb4e5,	// (0x000654e9) lc0_navi_pane

0xb555,	// (0x00065559) lc0_stat_indi_pane_ParamLimits

0xb555,	// (0x00065559) lc0_stat_indi_pane

0xb56a,	// (0x0006556e) ls0_title_pane_ParamLimits

0xb56a,	// (0x0006556e) ls0_title_pane

0x8d08,	// (0x00062d0c) bg_popup_sub_pane_cp14_ParamLimits

0x6695,	// (0x00060699) list_uniindi_pane_ParamLimits

0x66a1,	// (0x000606a5) uniindi_top_pane_ParamLimits

0x6740,	// (0x00060744) list_single_uniindi_pane_g1_ParamLimits

0x6753,	// (0x00060757) list_single_uniindi_pane_t1_ParamLimits

0xbe98,	// (0x00065e9c) lc0_stat_clock_pane_ParamLimits

0xbe98,	// (0x00065e9c) lc0_stat_clock_pane

0xdc00,	// (0x00067c04) lc0_stat_indi_pane_g1_ParamLimits

0xdc00,	// (0x00067c04) lc0_stat_indi_pane_g1

0xdc0d,	// (0x00067c11) lc0_stat_indi_pane_g2_ParamLimits

0xdc0d,	// (0x00067c11) lc0_stat_indi_pane_g2

0x0001,

0xfe4a,	// (0x00069e4e) lc0_stat_indi_pane_g_ParamLimits

0xfe4a,	// (0x00069e4e) lc0_stat_indi_pane_g

0xbea5,	// (0x00065ea9) lc0_uni_indicator_pane_ParamLimits

0xbea5,	// (0x00065ea9) lc0_uni_indicator_pane

0xdc1a,	// (0x00067c1e) ls0_title_pane_g1_ParamLimits

0xdc1a,	// (0x00067c1e) ls0_title_pane_g1

0xdc2e,	// (0x00067c32) ls0_title_pane_t1_ParamLimits

0xdc2e,	// (0x00067c32) ls0_title_pane_t1

0xbeb2,	// (0x00065eb6) lc0_uni_indicator_pane_g1_ParamLimits

0xbeb2,	// (0x00065eb6) lc0_uni_indicator_pane_g1

0x72e5,	// (0x000612e9) lc0_stat_clock_pane_t1

0x5448,	// (0x0005f44c) main_ai5_pane

0x72f3,	// (0x000612f7) ai5_sk_pane_ParamLimits

0x72f3,	// (0x000612f7) ai5_sk_pane

0xdc5c,	// (0x00067c60) cell_ai5_widget_pane_ParamLimits

0xdc5c,	// (0x00067c60) cell_ai5_widget_pane

0x789c,	// (0x000618a0) aid_size_cell_widget_grid

0x78b2,	// (0x000618b6) bg_ai5_widget_pane_ParamLimits

0x78b2,	// (0x000618b6) bg_ai5_widget_pane

0x791c,	// (0x00061920) cell_ai5_widget_pane_g2

0x792c,	// (0x00061930) cell_ai5_widget_pane_g3

0x794b,	// (0x0006194f) cell_ai5_widget_pane_g4

0x7957,	// (0x0006195b) cell_ai5_widget_pane_g5

0xeaa1,	// (0x00068aa5) cell_ai5_widget_pane_g6

0xeaad,	// (0x00068ab1) cell_ai5_widget_pane_g7

0x79b7,	// (0x000619bb) cell_ai5_widget_pane_t1_ParamLimits

0x79b7,	// (0x000619bb) cell_ai5_widget_pane_t1

0x79d4,	// (0x000619d8) cell_ai5_widget_pane_t2_ParamLimits

0x79d4,	// (0x000619d8) cell_ai5_widget_pane_t2

0x79ec,	// (0x000619f0) cell_ai5_widget_pane_t3_ParamLimits

0x79ec,	// (0x000619f0) cell_ai5_widget_pane_t3

0x7a04,	// (0x00061a08) cell_ai5_widget_pane_t4_ParamLimits

0x7a04,	// (0x00061a08) cell_ai5_widget_pane_t4

0x7a1e,	// (0x00061a22) cell_ai5_widget_pane_t5_ParamLimits

0x7a1e,	// (0x00061a22) cell_ai5_widget_pane_t5

0x7a3d,	// (0x00061a41) cell_ai5_widget_pane_t6_ParamLimits

0x7a3d,	// (0x00061a41) cell_ai5_widget_pane_t6

0x7a4f,	// (0x00061a53) cell_ai5_widget_pane_t7_ParamLimits

0x7a4f,	// (0x00061a53) cell_ai5_widget_pane_t7

0x7a68,	// (0x00061a6c) cell_ai5_widget_pane_t8_ParamLimits

0x7a68,	// (0x00061a6c) cell_ai5_widget_pane_t8

0x0009,

0xfe64,	// (0x00069e68) cell_ai5_widget_pane_t_ParamLimits

0xfe64,	// (0x00069e68) cell_ai5_widget_pane_t

0x7ab4,	// (0x00061ab8) grid_ai5_widget_pane

0x8d08,	// (0x00062d0c) highlight_cell_ai5_widget_pane_ParamLimits

0x8d08,	// (0x00062d0c) highlight_cell_ai5_widget_pane

0xeab9,	// (0x00068abd) ai5_sk_left_pane

0xeac3,	// (0x00068ac7) ai5_sk_middle_pane

0xeacd,	// (0x00068ad1) ai5_sk_right_pane

0x7aea,	// (0x00061aee) bg_ai5_widget_pane_g1_ParamLimits

0x7aea,	// (0x00061aee) bg_ai5_widget_pane_g1

0x7af6,	// (0x00061afa) bg_ai5_widget_pane_g2_ParamLimits

0x7af6,	// (0x00061afa) bg_ai5_widget_pane_g2

0x7b02,	// (0x00061b06) bg_ai5_widget_pane_g3_ParamLimits

0x7b02,	// (0x00061b06) bg_ai5_widget_pane_g3

0x7b0e,	// (0x00061b12) bg_ai5_widget_pane_g4_ParamLimits

0x7b0e,	// (0x00061b12) bg_ai5_widget_pane_g4

0x7b1a,	// (0x00061b1e) bg_ai5_widget_pane_g5_ParamLimits

0x7b1a,	// (0x00061b1e) bg_ai5_widget_pane_g5

0x7b26,	// (0x00061b2a) bg_ai5_widget_pane_g6_ParamLimits

0x7b26,	// (0x00061b2a) bg_ai5_widget_pane_g6

0x7b32,	// (0x00061b36) bg_ai5_widget_pane_g7_ParamLimits

0x7b32,	// (0x00061b36) bg_ai5_widget_pane_g7

0x7b3e,	// (0x00061b42) bg_ai5_widget_pane_g8_ParamLimits

0x7b3e,	// (0x00061b42) bg_ai5_widget_pane_g8

0x7b4a,	// (0x00061b4e) bg_ai5_widget_pane_g9_ParamLimits

0x7b4a,	// (0x00061b4e) bg_ai5_widget_pane_g9

0x0008,

0xfe79,	// (0x00069e7d) bg_ai5_widget_pane_g_ParamLimits

0xfe79,	// (0x00069e7d) bg_ai5_widget_pane_g

0x7b83,	// (0x00061b87) cell_shortcut_ai5_widget_pane_ParamLimits

0x7b83,	// (0x00061b87) cell_shortcut_ai5_widget_pane

0xf537,	// (0x0006953b) bg_cell_shortcut_ai5_widget_pane

0x7b96,	// (0x00061b9a) cell_grid_ai5_widget_pane_g1

0x7b9f,	// (0x00061ba3) highlight_cell_shortcut_ai5_widget_pane

0x24b7,	// (0x0005c4bb) ai5_sk_left_pane_g1

0x7ba7,	// (0x00061bab) ai5_sk_left_pane_g2

0x7baf,	// (0x00061bb3) ai5_sk_left_pane_g3

0x7bb7,	// (0x00061bbb) ai5_sk_left_pane_g4

0x0003,

0xfe8c,	// (0x00069e90) ai5_sk_left_pane_g

0x7bbf,	// (0x00061bc3) ai5_sk_left_pane_t1

0x24bf,	// (0x0005c4c3) ai5_sk_right_pane_g1

0x7bcd,	// (0x00061bd1) ai5_sk_right_pane_g2

0x7bd5,	// (0x00061bd9) ai5_sk_right_pane_g3

0x7bdd,	// (0x00061be1) ai5_sk_right_pane_g4

0x0003,

0xfe95,	// (0x00069e99) ai5_sk_right_pane_g

0x7be5,	// (0x00061be9) ai5_sk_right_pane_t1

0x24bf,	// (0x0005c4c3) ai5_sk_middle_pane_g1

0x24b7,	// (0x0005c4bb) ai5_sk_middle_pane_g2

0x24d7,	// (0x0005c4db) ai5_sk_middle_pane_g3

0x7bd5,	// (0x00061bd9) ai5_sk_middle_pane_g4

0x7baf,	// (0x00061bb3) ai5_sk_middle_pane_g5

0x7bf3,	// (0x00061bf7) ai5_sk_middle_pane_g6

0xead7,	// (0x00068adb) ai5_sk_middle_pane_g7

0x0006,

0xfe9e,	// (0x00069ea2) ai5_sk_middle_pane_g

0xb3cf,	// (0x000653d3) aid_touch_area_size_lc0_ParamLimits

0xb3cf,	// (0x000653d3) aid_touch_area_size_lc0

0x0b44,	// (0x0005ab48) cell_hwr_candidate_pane_t1_ParamLimits

0x1fe7,	// (0x0005bfeb) aid_touch_navi_pane

0xb675,	// (0x00065679) status_dt_navi_pane_ParamLimits

0xb675,	// (0x00065679) status_dt_navi_pane

0xb68d,	// (0x00065691) status_dt_sta_pane_ParamLimits

0xb68d,	// (0x00065691) status_dt_sta_pane

0xeadf,	// (0x00068ae3) dt_sta_controll_pane

0xeaec,	// (0x00068af0) dt_sta_indi_pane

0xeaf9,	// (0x00068afd) dt_sta_title_pane

0x8826,	// (0x0006282a) bg_dt_sta_indi_pane_ParamLimits

0x8826,	// (0x0006282a) bg_dt_sta_indi_pane

0xeb0b,	// (0x00068b0f) dt_sta_battery_pane

0xeb13,	// (0x00068b17) dt_sta_indi_pane_g1

0xeb1c,	// (0x00068b20) dt_sta_indi_pane_g2

0xeb25,	// (0x00068b29) dt_sta_indi_pane_g3

0x0002,

0xfead,	// (0x00069eb1) dt_sta_indi_pane_g

0xeb2e,	// (0x00068b32) dt_sta_signal_pane

0x8d08,	// (0x00062d0c) bg_dt_sta_title_pane_ParamLimits

0x8d08,	// (0x00062d0c) bg_dt_sta_title_pane

0xeb37,	// (0x00068b3b) dt_sta_title_pane_g1

0xeb3f,	// (0x00068b43) dt_sta_title_pane_t1_ParamLimits

0xeb3f,	// (0x00068b43) dt_sta_title_pane_t1

0x5448,	// (0x0005f44c) bg_dt_sta_control_pane

0xeb54,	// (0x00068b58) dt_sta_controll_pane_g1

0xeb5d,	// (0x00068b61) bg_dt_sta_title_pane_g1

0xeb66,	// (0x00068b6a) bg_dt_sta_title_pane_g2

0xeb6f,	// (0x00068b73) bg_dt_sta_title_pane_g3

0x0002,

0xfeb4,	// (0x00069eb8) bg_dt_sta_title_pane_g

0x4c8b,	// (0x0005ec8f) bg_dt_sta_indi_pane_g1

0x7ca1,	// (0x00061ca5) dt_sta_signal_pane_g1

0x7ca9,	// (0x00061cad) dt_sta_signal_pane_g2

0x0001,

0xfebb,	// (0x00069ebf) dt_sta_signal_pane_g

0x7cb1,	// (0x00061cb5) dt_sta_battery_pane_g1

0x7cba,	// (0x00061cbe) dt_sta_battery_pane_t1

0x4c8b,	// (0x0005ec8f) bg_dt_sta_control_pane_g1

0xe1ec,	// (0x000681f0) fep_china_uni_eep_pane

0xe1f4,	// (0x000681f8) fep_china_uni_entry_pane_ParamLimits

0xe204,	// (0x00068208) popup_fep_china_uni_window_g1_ParamLimits

0xe214,	// (0x00068218) popup_fep_china_uni_window_g2_ParamLimits

0xe214,	// (0x00068218) popup_fep_china_uni_window_g2

0x0001,

0xf728,	// (0x0006972c) popup_fep_china_uni_window_g_ParamLimits

0xf728,	// (0x0006972c) popup_fep_china_uni_window_g

0x7cc9,	// (0x00061ccd) fep_china_uni_eep_pane_g1

0x7cd1,	// (0x00061cd5) fep_china_uni_eep_pane_t1

0x7262,	// (0x00061266) aid_touch_area_size_smil_player

0x213f,	// (0x0005c143) lc0_clock_pane

0x233e,	// (0x0005c342) status_pane_g5_ParamLimits

0x233e,	// (0x0005c342) status_pane_g5

0xae24,	// (0x00064e28) popup_keymap_window

0x22fc,	// (0x0005c300) status_icon_pane

0x792c,	// (0x00061930) cell_ai5_widget_pane_g3_ParamLimits

0x794b,	// (0x0006194f) cell_ai5_widget_pane_g4_ParamLimits

0x7957,	// (0x0006195b) cell_ai5_widget_pane_g5_ParamLimits

0x797b,	// (0x0006197f) cell_ai5_widget_pane_g8_ParamLimits

0x797b,	// (0x0006197f) cell_ai5_widget_pane_g8

0x798f,	// (0x00061993) cell_ai5_widget_pane_g9_ParamLimits

0x798f,	// (0x00061993) cell_ai5_widget_pane_g9

0x79a3,	// (0x000619a7) cell_ai5_widget_pane_g10_ParamLimits

0x79a3,	// (0x000619a7) cell_ai5_widget_pane_g10

0x7ce0,	// (0x00061ce4) status_icon_pane_g1

0x5448,	// (0x0005f44c) bg_popup_sub_pane_cp13

0x7ce8,	// (0x00061cec) popup_keymap_window_t1

0xab09,	// (0x00064b0d) control_pane_g6_ParamLimits

0xab09,	// (0x00064b0d) control_pane_g6

0xab16,	// (0x00064b1a) control_pane_g7_ParamLimits

0xab16,	// (0x00064b1a) control_pane_g7

0xab23,	// (0x00064b27) control_pane_g8_ParamLimits

0xab23,	// (0x00064b27) control_pane_g8

0xeadf,	// (0x00068ae3) dt_sta_controll_pane_ParamLimits

0xeaec,	// (0x00068af0) dt_sta_indi_pane_ParamLimits

0xeaf9,	// (0x00068afd) dt_sta_title_pane_ParamLimits

0x8c4a,	// (0x00062c4e) aid_size_touch_scroll_bar_cale

0xef6e,	// (0x00068f72) popup_discreet_window_ParamLimits

0xef6e,	// (0x00068f72) popup_discreet_window

0x9ba2,	// (0x00063ba6) popup_sk_window

0x2aff,	// (0x0005cb03) bg_popup_sub_pane_cp28_ParamLimits

0x2aff,	// (0x0005cb03) bg_popup_sub_pane_cp28

0x7cf6,	// (0x00061cfa) popup_discreet_window_g1_ParamLimits

0x7cf6,	// (0x00061cfa) popup_discreet_window_g1

0x7d16,	// (0x00061d1a) popup_discreet_window_t1_ParamLimits

0x7d16,	// (0x00061d1a) popup_discreet_window_t1

0x7d34,	// (0x00061d38) popup_discreet_window_t2_ParamLimits

0x7d34,	// (0x00061d38) popup_discreet_window_t2

0x0002,

0xfec0,	// (0x00069ec4) popup_discreet_window_t_ParamLimits

0xfec0,	// (0x00069ec4) popup_discreet_window_t

0x1628,	// (0x0005b62c) popup_sk_window_g1

0x1632,	// (0x0005b636) popup_sk_window_g2

0x0001,

0xfec7,	// (0x00069ecb) popup_sk_window_g

0x163c,	// (0x0005b640) popup_sk_window_t1

0x164c,	// (0x0005b650) popup_sk_window_t1_copy1

0x791c,	// (0x00061920) cell_ai5_widget_pane_g2_ParamLimits

0x7a7a,	// (0x00061a7e) cell_ai5_widget_pane_t9_ParamLimits

0x7a7a,	// (0x00061a7e) cell_ai5_widget_pane_t9

0x5448,	// (0x0005f44c) main_fep_fshwr2_pane

0xbed1,	// (0x00065ed5) aid_fshwr2_btn_pane

0xbee0,	// (0x00065ee4) aid_fshwr2_syb_pane

0xbef2,	// (0x00065ef6) aid_fshwr2_txt_pane

0xbf01,	// (0x00065f05) fshwr2_func_candi_pane

0xbf12,	// (0x00065f16) fshwr2_hwr_syb_pane

0xbf2d,	// (0x00065f31) fshwr2_icf_pane

0x5448,	// (0x0005f44c) fshwr2_icf_bg_pane

0xeb78,	// (0x00068b7c) fshwr2_icf_pane_t1_ParamLimits

0xeb78,	// (0x00068b7c) fshwr2_icf_pane_t1

0x4c8b,	// (0x0005ec8f) fshwr2_func_candi_pane_g1

0x7d9d,	// (0x00061da1) fshwr2_func_candi_row_pane_ParamLimits

0x7d9d,	// (0x00061da1) fshwr2_func_candi_row_pane

0xeb90,	// (0x00068b94) cell_fshwr2_syb_pane_ParamLimits

0xeb90,	// (0x00068b94) cell_fshwr2_syb_pane

0x4f06,	// (0x0005ef0a) fshwr2_hwr_syb_pane_g1_ParamLimits

0x4f06,	// (0x0005ef0a) fshwr2_hwr_syb_pane_g1

0x5448,	// (0x0005f44c) bg_popup_call_pane_cp01

0x7dc8,	// (0x00061dcc) fshwr2_func_candi_cell_pane_ParamLimits

0x7dc8,	// (0x00061dcc) fshwr2_func_candi_cell_pane

0x7dfa,	// (0x00061dfe) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x7dfa,	// (0x00061dfe) fshwr2_func_candi_cell_bg_pane

0x7e14,	// (0x00061e18) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7e14,	// (0x00061e18) fshwr2_func_candi_cell_pane_g1

0x7e34,	// (0x00061e38) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7e34,	// (0x00061e38) fshwr2_func_candi_cell_pane_t1

0x5448,	// (0x0005f44c) bg_button_pane_cp08

0xf537,	// (0x0006953b) cell_fshwr2_syb_bg_pane

0xeba9,	// (0x00068bad) cell_fshwr2_syb_bg_pane_g1

0xebb1,	// (0x00068bb5) cell_fshwr2_syb_bg_pane_t1

0x8d08,	// (0x00062d0c) main_tmo_pane

0xc4d3,	// (0x000664d7) uni_indicator_pane_g1_ParamLimits

0xc4e8,	// (0x000664ec) uni_indicator_pane_g2_ParamLimits

0xc4fd,	// (0x00066501) uni_indicator_pane_g3_ParamLimits

0xc513,	// (0x00066517) uni_indicator_pane_g4_ParamLimits

0xc513,	// (0x00066517) uni_indicator_pane_g4

0xc527,	// (0x0006652b) uni_indicator_pane_g5_ParamLimits

0xc527,	// (0x0006652b) uni_indicator_pane_g5

0xc53b,	// (0x0006653f) uni_indicator_pane_g6_ParamLimits

0xc53b,	// (0x0006653f) uni_indicator_pane_g6

0xf927,	// (0x0006992b) uni_indicator_pane_g_ParamLimits

0xd0ae,	// (0x000670b2) popup_tmo_note_window_ParamLimits

0xd0ae,	// (0x000670b2) popup_tmo_note_window

0x0e96,	// (0x0005ae9a) fshwr2_bg_pane

0x7e25,	// (0x00061e29) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7e25,	// (0x00061e29) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfecc,	// (0x00069ed0) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfecc,	// (0x00069ed0) fshwr2_func_candi_cell_pane_g

0x4c8b,	// (0x0005ec8f) bg_popup_window_pane_cp01

0x7e5e,	// (0x00061e62) bg_popup_window_pane_g1_cp01

0x7e67,	// (0x00061e6b) bg_popup_window_pane_cp22_ParamLimits

0x7e67,	// (0x00061e6b) bg_popup_window_pane_cp22

0x7e75,	// (0x00061e79) listscroll_tmo_link_pane_ParamLimits

0x7e75,	// (0x00061e79) listscroll_tmo_link_pane

0x7eb5,	// (0x00061eb9) popup_tmo_note_window_g1_ParamLimits

0x7eb5,	// (0x00061eb9) popup_tmo_note_window_g1

0x7ec2,	// (0x00061ec6) tmo_note_info_pane_ParamLimits

0x7ec2,	// (0x00061ec6) tmo_note_info_pane

0xebc0,	// (0x00068bc4) list_tmo_note_info_pane_g1_ParamLimits

0xebc0,	// (0x00068bc4) list_tmo_note_info_pane_g1

0x7ef3,	// (0x00061ef7) list_tmo_note_info_pane_g2_ParamLimits

0x7ef3,	// (0x00061ef7) list_tmo_note_info_pane_g2

0x0001,

0xfed1,	// (0x00069ed5) list_tmo_note_info_pane_g_ParamLimits

0xfed1,	// (0x00069ed5) list_tmo_note_info_pane_g

0x7f0f,	// (0x00061f13) list_tmo_note_info_text_pane_ParamLimits

0x7f0f,	// (0x00061f13) list_tmo_note_info_text_pane

0x7f94,	// (0x00061f98) list_tmo_link_pane

0x7fa1,	// (0x00061fa5) scroll_pane_cp20

0x7fae,	// (0x00061fb2) list_single_tmo_link_pane_ParamLimits

0x7fae,	// (0x00061fb2) list_single_tmo_link_pane

0x7fbe,	// (0x00061fc2) list_single_tmo_link_pane_t1

0x7fcc,	// (0x00061fd0) list_tmo_note_info_text_pane_t1_ParamLimits

0x7fcc,	// (0x00061fd0) list_tmo_note_info_text_pane_t1

0xa5ec,	// (0x000645f0) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa5ec,	// (0x000645f0) aid_size_touch_scroll_bar_cp01

0xa51b,	// (0x0006451f) aid_size_touch_slider_marker

0x9b92,	// (0x00063b96) popup_settings_window_ParamLimits

0x9b92,	// (0x00063b96) popup_settings_window

0xe53a,	// (0x0006853e) popup_candi_list_indi_window

0x1fe7,	// (0x0005bfeb) aid_touch_navi_pane_ParamLimits

0x0def,	// (0x0005adf3) rs_clock_indi_pane

0x0df8,	// (0x0005adfc) sctrl_sk_bottom_pane_ParamLimits

0x0e09,	// (0x0005ae0d) sctrl_sk_top_pane_ParamLimits

0x0f0e,	// (0x0005af12) popup_fep_tooltip_window

0x789c,	// (0x000618a0) aid_size_cell_widget_grid_ParamLimits

0x7910,	// (0x00061914) cell_ai5_widget_pane_g1_ParamLimits

0x7910,	// (0x00061914) cell_ai5_widget_pane_g1

0xeaa1,	// (0x00068aa5) cell_ai5_widget_pane_g6_ParamLimits

0xeaad,	// (0x00068ab1) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe4f,	// (0x00069e53) cell_ai5_widget_pane_g_ParamLimits

0xfe4f,	// (0x00069e53) cell_ai5_widget_pane_g

0x7a9e,	// (0x00061aa2) cell_ai5_widget_pane_t10_ParamLimits

0x7a9e,	// (0x00061aa2) cell_ai5_widget_pane_t10

0x7ab4,	// (0x00061ab8) grid_ai5_widget_pane_ParamLimits

0x7b56,	// (0x00061b5a) cell_contacts_ai5_widget_pane_ParamLimits

0x7b56,	// (0x00061b5a) cell_contacts_ai5_widget_pane

0x7d49,	// (0x00061d4d) popup_discreet_window_t3_ParamLimits

0x7d49,	// (0x00061d4d) popup_discreet_window_t3

0x16bc,	// (0x0005b6c0) popup_fshwr2_char_preview_window_ParamLimits

0x16bc,	// (0x0005b6c0) popup_fshwr2_char_preview_window

0xebd7,	// (0x00068bdb) tmo_note_info_pane_t1

0xebec,	// (0x00068bf0) tmo_note_info_pane_t2

0xec05,	// (0x00068c09) tmo_note_info_pane_t3

0x7f70,	// (0x00061f74) tmo_note_info_pane_t4

0x7f82,	// (0x00061f86) tmo_note_info_pane_t5

0x0004,

0xfed6,	// (0x00069eda) tmo_note_info_pane_t

0x7f94,	// (0x00061f98) list_tmo_link_pane_ParamLimits

0x7fa1,	// (0x00061fa5) scroll_pane_cp20_ParamLimits

0x5448,	// (0x0005f44c) bg_popup_fep_char_preview_window_cp01

0x7fe5,	// (0x00061fe9) popup_fshwr2_char_preview_window_t1

0x7ff3,	// (0x00061ff7) popup_candi_list_indi_window_g1

0x7ffc,	// (0x00062000) bg_cell_contacts_ai5_widget_pane

0x8008,	// (0x0006200c) cell_contacts_ai5_widget_pane_g1

0x801b,	// (0x0006201f) cell_contacts_ai5_widget_pane_g2

0x8027,	// (0x0006202b) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfee1,	// (0x00069ee5) cell_contacts_ai5_widget_pane_g

0x8039,	// (0x0006203d) cell_contacts_ai5_widget_pane_t1

0x8d08,	// (0x00062d0c) highlight_cell_shortcut_ai5_widget_pane_cp01

0xec7f,	// (0x00068c83) settings_container_pane

0xf537,	// (0x0006953b) listscroll_set_pane_copy1

0x43a6,	// (0x0005e3aa) scroll_pane_cp121_copy1

0x80bf,	// (0x000620c3) set_content_pane_copy1

0xec8b,	// (0x00068c8f) aid_height_set_list_copy1_ParamLimits

0xec8b,	// (0x00068c8f) aid_height_set_list_copy1

0x3a2c,	// (0x0005da30) aid_size_parent_copy1_ParamLimits

0x3a2c,	// (0x0005da30) aid_size_parent_copy1

0xec97,	// (0x00068c9b) button_value_adjust_pane_cp6_copy1_ParamLimits

0xec97,	// (0x00068c9b) button_value_adjust_pane_cp6_copy1

0x196e,	// (0x0005b972) list_highlight_pane_cp2_copy1_ParamLimits

0x196e,	// (0x0005b972) list_highlight_pane_cp2_copy1

0xecab,	// (0x00068caf) list_set_pane_copy1_ParamLimits

0xecab,	// (0x00068caf) list_set_pane_copy1

0xec1a,	// (0x00068c1e) main_pane_set_t1_copy1_ParamLimits

0xec1a,	// (0x00068c1e) main_pane_set_t1_copy1

0xec54,	// (0x00068c58) main_pane_set_t2_copy1_ParamLimits

0xec54,	// (0x00068c58) main_pane_set_t2_copy1

0xed72,	// (0x00068d76) main_pane_set_t3_copy1

0xed80,	// (0x00068d84) main_pane_set_t4_copy1

0xec73,	// (0x00068c77) set_content_pane_g1_copy1_ParamLimits

0xec73,	// (0x00068c77) set_content_pane_g1_copy1

0xed8e,	// (0x00068d92) setting_code_pane_copy1

0x81d2,	// (0x000621d6) setting_slider_graphic_pane_copy1

0x81d2,	// (0x000621d6) setting_slider_pane_copy1

0x81d2,	// (0x000621d6) setting_text_pane_copy1

0x81d2,	// (0x000621d6) setting_volume_pane_copy1

0xed8e,	// (0x00068d92) settings_code_pane_cp2_copy1

0xed96,	// (0x00068d9a) settings_code_pane_cp_copy1_ParamLimits

0xed96,	// (0x00068d9a) settings_code_pane_cp_copy1

0xbf43,	// (0x00065f47) volume_set_pane_copy1

0xedaa,	// (0x00068dae) volume_set_pane_g10_copy1

0xedb6,	// (0x00068dba) volume_set_pane_g1_copy1

0xedc0,	// (0x00068dc4) volume_set_pane_g2_copy1

0xedca,	// (0x00068dce) volume_set_pane_g3_copy1

0xedd4,	// (0x00068dd8) volume_set_pane_g4_copy1

0xedde,	// (0x00068de2) volume_set_pane_g5_copy1

0xede8,	// (0x00068dec) volume_set_pane_g6_copy1

0xedf2,	// (0x00068df6) volume_set_pane_g7_copy1

0xedfc,	// (0x00068e00) volume_set_pane_g8_copy1

0xee06,	// (0x00068e0a) volume_set_pane_g9_copy1

0x86f3,	// (0x000626f7) bg_set_opt_pane_cp_copy1_ParamLimits

0x86f3,	// (0x000626f7) bg_set_opt_pane_cp_copy1

0x16e0,	// (0x0005b6e4) setting_slider_pane_t1_copy1_ParamLimits

0x16e0,	// (0x0005b6e4) setting_slider_pane_t1_copy1

0xbf4f,	// (0x00065f53) setting_slider_pane_t2_copy1_ParamLimits

0xbf4f,	// (0x00065f53) setting_slider_pane_t2_copy1

0xbf69,	// (0x00065f6d) setting_slider_pane_t3_copy1_ParamLimits

0xbf69,	// (0x00065f6d) setting_slider_pane_t3_copy1

0xbf81,	// (0x00065f85) slider_set_pane_copy1_ParamLimits

0xbf81,	// (0x00065f85) slider_set_pane_copy1

0x8d63,	// (0x00062d67) set_opt_bg_pane_g1_copy2

0x8d6b,	// (0x00062d6f) set_opt_bg_pane_g2_copy2

0x8254,	// (0x00062258) set_opt_bg_pane_g3_copy2

0x8d7b,	// (0x00062d7f) set_opt_bg_pane_g4_copy2

0x8d83,	// (0x00062d87) set_opt_bg_pane_g5_copy2

0x8d8b,	// (0x00062d8f) set_opt_bg_pane_g6_copy2

0xee10,	// (0x00068e14) set_opt_bg_pane_g7_copy2

0x8268,	// (0x0006226c) set_opt_bg_pane_g8_copy2

0x8272,	// (0x00062276) set_opt_bg_pane_g9_copy2

0x827c,	// (0x00062280) aid_size_touch_slider_mark_copy1_ParamLimits

0x827c,	// (0x00062280) aid_size_touch_slider_mark_copy1

0x8290,	// (0x00062294) slider_set_pane_g1_copy1

0x8299,	// (0x0006229d) slider_set_pane_g2_copy1

0x5414,	// (0x0005f418) slider_set_pane_g3_copy1_ParamLimits

0x5414,	// (0x0005f418) slider_set_pane_g3_copy1

0x5428,	// (0x0005f42c) slider_set_pane_g4_copy1_ParamLimits

0x5428,	// (0x0005f42c) slider_set_pane_g4_copy1

0x723b,	// (0x0006123f) slider_set_pane_g5_copy1_ParamLimits

0x723b,	// (0x0006123f) slider_set_pane_g5_copy1

0x5414,	// (0x0005f418) slider_set_pane_g6_copy1_ParamLimits

0x5414,	// (0x0005f418) slider_set_pane_g6_copy1

0xee1a,	// (0x00068e1e) slider_set_pane_g7_copy1_ParamLimits

0xee1a,	// (0x00068e1e) slider_set_pane_g7_copy1

0x545c,	// (0x0005f460) bg_set_opt_pane_cp2_copy1

0x82b7,	// (0x000622bb) setting_slider_graphic_pane_g1_copy1

0xee30,	// (0x00068e34) setting_slider_graphic_pane_t1_copy1

0xee40,	// (0x00068e44) setting_slider_graphic_pane_t2_copy1

0xee50,	// (0x00068e54) slider_set_pane_cp_copy1

0x82f0,	// (0x000622f4) input_focus_pane_cp1_copy1

0x82f9,	// (0x000622fd) list_set_text_pane_copy1

0x8301,	// (0x00062305) setting_text_pane_g1_copy1

0xe05d,	// (0x00068061) set_text_pane_t1_copy1

0x82f0,	// (0x000622f4) input_focus_pane_cp2_copy1

0x8301,	// (0x00062305) setting_code_pane_g1_copy1

0xee58,	// (0x00068e5c) setting_code_pane_t1_copy1

0xee66,	// (0x00068e6a) list_set_graphic_pane_copy1

0x545c,	// (0x0005f460) bg_set_opt_pane_cp4_copy1

0xa93e,	// (0x00064942) list_set_graphic_pane_g1_copy1_ParamLimits

0xa93e,	// (0x00064942) list_set_graphic_pane_g1_copy1

0xee78,	// (0x00068e7c) list_set_graphic_pane_g2_copy1

0xa956,	// (0x0006495a) list_set_graphic_pane_t1_copy1_ParamLimits

0xa956,	// (0x0006495a) list_set_graphic_pane_t1_copy1

0x4c8b,	// (0x0005ec8f) rs_clock_indi_pane_g1

0x8332,	// (0x00062336) rs_clock_indi_pane_t1

0x8340,	// (0x00062344) rs_indi_pane

0x8348,	// (0x0006234c) rs_indi_pane_g1

0x8351,	// (0x00062355) rs_indi_pane_g2

0x835a,	// (0x0006235e) rs_indi_pane_g3

0x0002,

0xfee8,	// (0x00069eec) rs_indi_pane_g

0xf537,	// (0x0006953b) bg_popup_preview_window_pane_cp03

0x8363,	// (0x00062367) popup_fep_tooltip_window_t1

0x5a13,	// (0x0005fa17) popup_note2_window_g2_ParamLimits

0x5a13,	// (0x0005fa17) popup_note2_window_g2

0x0001,

0xfc81,	// (0x00069c85) popup_note2_window_g_ParamLimits

0xfc81,	// (0x00069c85) popup_note2_window_g

0x5f1b,	// (0x0005ff1f) bg_popup_sub_pane_cp11_ParamLimits

0x5f28,	// (0x0005ff2c) cell_ai3_links_pane_g1_ParamLimits

0x5f3f,	// (0x0005ff43) cell_ai3_links_pane_t1

0xe05d,	// (0x00068061) set_text_pane_t1_copy1_ParamLimits

0xa9ca,	// (0x000649ce) cell_graphic_popup_pane_cp2_ParamLimits

0xa9ca,	// (0x000649ce) cell_graphic_popup_pane_cp2

0xee80,	// (0x00068e84) cell_graphic_popup_pane_g1_cp2

0x8a5d,	// (0x00062a61) cell_graphic_popup_pane_g2_cp2

0x8379,	// (0x0006237d) cell_graphic_popup_pane_g3_cp2

0x8381,	// (0x00062385) cell_graphic_popup_pane_t2_cp2

0x8a6e,	// (0x00062a72) grid_highlight_pane_cp3_cp2

0x900c,	// (0x00063010) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8d08,	// (0x00062d0c) main_tmo_pane_ParamLimits

0xd0a2,	// (0x000670a6) popup_tmo_big_image_note_window

0x7900,	// (0x00061904) cell_ai5_widget_list_pane

0x7908,	// (0x0006190c) cell_ai5_widget_lrg_icon_pane

0xebd7,	// (0x00068bdb) tmo_note_info_pane_t1_ParamLimits

0xebec,	// (0x00068bf0) tmo_note_info_pane_t2_ParamLimits

0xec05,	// (0x00068c09) tmo_note_info_pane_t3_ParamLimits

0x7f70,	// (0x00061f74) tmo_note_info_pane_t4_ParamLimits

0x7f82,	// (0x00061f86) tmo_note_info_pane_t5_ParamLimits

0xfed6,	// (0x00069eda) tmo_note_info_pane_t_ParamLimits

0xec7f,	// (0x00068c83) settings_container_pane_ParamLimits

0x82e8,	// (0x000622ec) indicator_popup_pane_cp5

0x82e8,	// (0x000622ec) indicator_popup_pane_cp6

0xee66,	// (0x00068e6a) list_set_graphic_pane_copy1_ParamLimits

0x5448,	// (0x0005f44c) bg_popup_window_pane_cp23

0x838f,	// (0x00062393) popup_tmo_big_image_note_window_g1

0x839b,	// (0x0006239f) popup_tmo_big_image_note_window_t1

0x83ab,	// (0x000623af) popup_tmo_big_image_note_window_t2

0x83bb,	// (0x000623bf) popup_tmo_big_image_note_window_t3

0x0002,

0xfeef,	// (0x00069ef3) popup_tmo_big_image_note_window_t

0x83cb,	// (0x000623cf) cell_ai5_widget_lrg_icon_pane_g1

0x83d3,	// (0x000623d7) cell_ai5_widget_lrg_icon_pane_t1

0x83e1,	// (0x000623e5) cell_ai5_widget_list_row_pane_ParamLimits

0x83e1,	// (0x000623e5) cell_ai5_widget_list_row_pane

0x83fa,	// (0x000623fe) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x83fa,	// (0x000623fe) cell_ai5_widget_list_row_pane_g1

0x8407,	// (0x0006240b) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x8407,	// (0x0006240b) cell_ai5_widget_list_row_pane_t1

0x841f,	// (0x00062423) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x841f,	// (0x00062423) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfef6,	// (0x00069efa) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef6,	// (0x00069efa) cell_ai5_widget_list_row_pane_t

0xee91,	// (0x00068e95) main_fep_vtchi_ss_pane

0x1755,	// (0x0005b759) popup_fep_char_pre_window

0x175d,	// (0x0005b761) popup_fep_ituss_window

0x177e,	// (0x0005b782) popup_fep_vkbss_window

0x8447,	// (0x0006244b) grid_vkbss_keypad_pane_ParamLimits

0x8447,	// (0x0006244b) grid_vkbss_keypad_pane

0x8457,	// (0x0006245b) ituss_keypad_pane

0x17ab,	// (0x0005b7af) aid_vkbss_key_offset_ParamLimits

0x17ab,	// (0x0005b7af) aid_vkbss_key_offset

0x17b7,	// (0x0005b7bb) cell_vkbss_key_pane_ParamLimits

0x17b7,	// (0x0005b7bb) cell_vkbss_key_pane

0x8467,	// (0x0006246b) bg_cell_vkbss_key_g1_ParamLimits

0x8467,	// (0x0006246b) bg_cell_vkbss_key_g1

0x8473,	// (0x00062477) cell_vkbss_key_3p_pane_ParamLimits

0x8473,	// (0x00062477) cell_vkbss_key_3p_pane

0x848d,	// (0x00062491) cell_vkbss_key_g1_ParamLimits

0x848d,	// (0x00062491) cell_vkbss_key_g1

0x84a7,	// (0x000624ab) cell_vkbss_key_t1_ParamLimits

0x84a7,	// (0x000624ab) cell_vkbss_key_t1

0x17cd,	// (0x0005b7d1) cell_ituss_key_pane_ParamLimits

0x17cd,	// (0x0005b7d1) cell_ituss_key_pane

0x84d2,	// (0x000624d6) bg_cell_ituss_key_g1_ParamLimits

0x84d2,	// (0x000624d6) bg_cell_ituss_key_g1

0x84de,	// (0x000624e2) cell_ituss_key_pane_g1_ParamLimits

0x84de,	// (0x000624e2) cell_ituss_key_pane_g1

0x84f2,	// (0x000624f6) cell_ituss_key_pane_g2_ParamLimits

0x84f2,	// (0x000624f6) cell_ituss_key_pane_g2

0x0001,

0xfefd,	// (0x00069f01) cell_ituss_key_pane_g_ParamLimits

0xfefd,	// (0x00069f01) cell_ituss_key_pane_g

0x8524,	// (0x00062528) cell_ituss_key_t1_ParamLimits

0x8524,	// (0x00062528) cell_ituss_key_t1

0x855e,	// (0x00062562) cell_ituss_key_t2_ParamLimits

0x855e,	// (0x00062562) cell_ituss_key_t2

0x858f,	// (0x00062593) cell_ituss_key_t3_ParamLimits

0x858f,	// (0x00062593) cell_ituss_key_t3

0x85c0,	// (0x000625c4) cell_ituss_key_t4_ParamLimits

0x85c0,	// (0x000625c4) cell_ituss_key_t4

0x0003,

0xff02,	// (0x00069f06) cell_ituss_key_t_ParamLimits

0xff02,	// (0x00069f06) cell_ituss_key_t

0x85f1,	// (0x000625f5) cell_vkbss_key_3p_pane_g1

0x85f9,	// (0x000625fd) cell_vkbss_key_3p_pane_g2

0x8601,	// (0x00062605) cell_vkbss_key_3p_pane_g3

0x0002,

0xff0b,	// (0x00069f0f) cell_vkbss_key_3p_pane_g

0x5448,	// (0x0005f44c) bg_popup_fep_char_preview_window_cp02

0x8609,	// (0x0006260d) popup_fep_char_pre_window_t1

0xea97,	// (0x00068a9b) main_ai5_sk_pane

0x7ffc,	// (0x00062000) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x8008,	// (0x0006200c) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x801b,	// (0x0006201f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8027,	// (0x0006202b) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfee1,	// (0x00069ee5) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8039,	// (0x0006203d) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8d08,	// (0x00062d0c) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xee88,	// (0x00068e8c) main_ai5_sk_pane_g1

0x2937,	// (0x0005c93b) popup_query_code_window_g1

0x1773,	// (0x0005b777) popup_fep_vkb_icf_pane

0x1789,	// (0x0005b78d) popup_fep_vtchi_icf_pane

0x8d08,	// (0x00062d0c) bg_icf_pane

0x8621,	// (0x00062625) list_vkb_icf_pane

0x8d08,	// (0x00062d0c) bg_icf_pane_cp01

0x862d,	// (0x00062631) vtchi_icf_list_pane

0x863e,	// (0x00062642) list_vkb_icf_pane_t1_ParamLimits

0x863e,	// (0x00062642) list_vkb_icf_pane_t1

0x8654,	// (0x00062658) vtchi_icf_list_pane_t1_ParamLimits

0x8654,	// (0x00062658) vtchi_icf_list_pane_t1

0x175d,	// (0x0005b761) popup_fep_ituss_window_ParamLimits

0x1789,	// (0x0005b78d) popup_fep_vtchi_icf_pane_ParamLimits

0x8457,	// (0x0006245b) ituss_keypad_pane_ParamLimits

0x179f,	// (0x0005b7a3) ituss_sks_pane

0x8d08,	// (0x00062d0c) bg_icf_pane_ParamLimits

0x1746,	// (0x0005b74a) icf_edit_indi_pane_ParamLimits

0x1746,	// (0x0005b74a) icf_edit_indi_pane

0x8621,	// (0x00062625) list_vkb_icf_pane_ParamLimits

0x8d08,	// (0x00062d0c) bg_icf_pane_cp01_ParamLimits

0x1746,	// (0x0005b74a) icf_edit_indi_pane_cp01_ParamLimits

0x1746,	// (0x0005b74a) icf_edit_indi_pane_cp01

0x8635,	// (0x00062639) vtchi_query_pane

0x4f06,	// (0x0005ef0a) icf_edit_indi_pane_g1_ParamLimits

0x4f06,	// (0x0005ef0a) icf_edit_indi_pane_g1

0x86d6,	// (0x000626da) icf_edit_indi_pane_g2_ParamLimits

0x86d6,	// (0x000626da) icf_edit_indi_pane_g2

0x0001,

0xff23,	// (0x00069f27) icf_edit_indi_pane_g_ParamLimits

0xff23,	// (0x00069f27) icf_edit_indi_pane_g

0x86e5,	// (0x000626e9) icf_edit_indi_pane_t1

0x866c,	// (0x00062670) bg_input_focus_pane_cp042

0x8c41,	// (0x00062c45) vtchi_button_pane

0x8675,	// (0x00062679) vtchi_query_pane_t1

0x8683,	// (0x00062687) vtchi_query_pane_t2

0x8691,	// (0x00062695) vtchi_query_pane_t3

0x0002,

0xff12,	// (0x00069f16) vtchi_query_pane_t

0x5448,	// (0x0005f44c) bg_button_pane_cp13

0x869f,	// (0x000626a3) vtchi_button_pane_g1

0x86a7,	// (0x000626ab) ituss_sks_pane_g1

0x86b2,	// (0x000626b6) ituss_sks_pane_g2

0x0001,

0xff19,	// (0x00069f1d) ituss_sks_pane_g

0x86ba,	// (0x000626be) ituss_sks_pane_t1

0x86c8,	// (0x000626cc) ituss_sks_pane_t2

0x0001,

0xff1e,	// (0x00069f22) ituss_sks_pane_t

0x473b,	// (0x0005e73f) indicator_nsta_pane_cp_g1

0x4744,	// (0x0005e748) indicator_nsta_pane_cp_g2

0x474c,	// (0x0005e750) indicator_nsta_pane_cp_g3

0x4754,	// (0x0005e758) indicator_nsta_pane_cp_g4

0x475c,	// (0x0005e760) indicator_nsta_pane_cp_g5

0x4764,	// (0x0005e768) indicator_nsta_pane_cp_g6

0x0005,

0xfabf,	// (0x00069ac3) indicator_nsta_pane_cp_g

0xdacc,	// (0x00067ad0) cell_graphic2_pane_t2_ParamLimits

0xdacc,	// (0x00067ad0) cell_graphic2_pane_t2

0x0001,

0xfdd8,	// (0x00069ddc) cell_graphic2_pane_t_ParamLimits

0xfdd8,	// (0x00069ddc) cell_graphic2_pane_t

0xdb02,	// (0x00067b06) cell_graphic2_control_pane_t1

0xa839,	// (0x0006483d) signal_pane_g3_ParamLimits

0xa839,	// (0x0006483d) signal_pane_g3

0xa84d,	// (0x00064851) signal_pane_g4_ParamLimits

0xa84d,	// (0x00064851) signal_pane_g4

0x8431,	// (0x00062435) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x8431,	// (0x00062435) cell_ai5_widget_list_row_pane_t3

0x8512,	// (0x00062516) cell_ituss_key_pane_t1_ParamLimits

0x8512,	// (0x00062516) cell_ituss_key_pane_t1

0x25b4,	// (0x0005c5b8) form_field_data_wide_pane_vc_t2_ParamLimits

0x25b4,	// (0x0005c5b8) form_field_data_wide_pane_vc_t2

0x25c8,	// (0x0005c5cc) form_field_data_wide_pane_vc_t3_ParamLimits

0x25c8,	// (0x0005c5cc) form_field_data_wide_pane_vc_t3

0x0002,

0xf80f,	// (0x00069813) form_field_data_wide_pane_vc_t_ParamLimits

0xf80f,	// (0x00069813) form_field_data_wide_pane_vc_t

0x43e6,	// (0x0005e3ea) form_field_slider_wide_pane_vc_t3_ParamLimits

0x43e6,	// (0x0005e3ea) form_field_slider_wide_pane_vc_t3

0x44bc,	// (0x0005e4c0) form_field_popup_wide_pane_vc_t2_ParamLimits

0x44bc,	// (0x0005e4c0) form_field_popup_wide_pane_vc_t2

0x44d3,	// (0x0005e4d7) form_field_popup_wide_pane_vc_t3_ParamLimits

0x44d3,	// (0x0005e4d7) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaae,	// (0x00069ab2) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaae,	// (0x00069ab2) form_field_popup_wide_pane_vc_t

0xbed1,	// (0x00065ed5) aid_fshwr2_btn_pane_ParamLimits

0xbee0,	// (0x00065ee4) aid_fshwr2_syb_pane_ParamLimits

0xbef2,	// (0x00065ef6) aid_fshwr2_txt_pane_ParamLimits

0x0e96,	// (0x0005ae9a) fshwr2_bg_pane_ParamLimits

0xbf01,	// (0x00065f05) fshwr2_func_candi_pane_ParamLimits

0xbf12,	// (0x00065f16) fshwr2_hwr_syb_pane_ParamLimits

0xbf2d,	// (0x00065f31) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Large
