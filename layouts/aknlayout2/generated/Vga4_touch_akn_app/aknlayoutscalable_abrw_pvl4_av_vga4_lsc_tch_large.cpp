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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00059119 };

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
0x9c19,	// (0x00062d32) Screen

0x9c25,	// (0x00062d3e) application_window_ParamLimits

0x9c25,	// (0x00062d3e) application_window

0x88d3,	// (0x000619ec) screen_g1

0x9c5d,	// (0x00062d76) area_bottom_pane_ParamLimits

0x9c5d,	// (0x00062d76) area_bottom_pane

0xed7f,	// (0x00067e98) area_top_pane_ParamLimits

0xed7f,	// (0x00067e98) area_top_pane

0xee1d,	// (0x00067f36) main_pane_ParamLimits

0xee1d,	// (0x00067f36) main_pane

0x88dd,	// (0x000619f6) misc_graphics

0xc062,	// (0x0006517b) battery_pane_ParamLimits

0xc062,	// (0x0006517b) battery_pane

0x3377,	// (0x0005c490) bg_status_flat_pane_g8

0x337f,	// (0x0005c498) bg_status_flat_pane_g9

0x2747,	// (0x0005b860) context_pane_ParamLimits

0x2747,	// (0x0005b860) context_pane

0xc1d9,	// (0x000652f2) navi_pane_ParamLimits

0xc1d9,	// (0x000652f2) navi_pane

0xc263,	// (0x0006537c) signal_pane_ParamLimits

0xc263,	// (0x0006537c) signal_pane

0x0008,

0xf854,	// (0x0006896d) bg_status_flat_pane_g

0xc2f3,	// (0x0006540c) status_pane_g1_ParamLimits

0xc2f3,	// (0x0006540c) status_pane_g1

0xc309,	// (0x00065422) status_pane_g2_ParamLimits

0xc309,	// (0x00065422) status_pane_g2

0x2980,	// (0x0005ba99) status_pane_g3_ParamLimits

0x2980,	// (0x0005ba99) status_pane_g3

0x0004,

0xf780,	// (0x00068899) status_pane_g_ParamLimits

0xf780,	// (0x00068899) status_pane_g

0xc315,	// (0x0006542e) title_pane_ParamLimits

0xc315,	// (0x0006542e) title_pane

0xc37c,	// (0x00065495) uni_indicator_pane_ParamLimits

0xc37c,	// (0x00065495) uni_indicator_pane

0x25b1,	// (0x0005b6ca) bg_list_pane_ParamLimits

0x25b1,	// (0x0005b6ca) bg_list_pane

0xad8e,	// (0x00063ea7) find_pane

0x2bab,	// (0x0005bcc4) listscroll_app_pane_ParamLimits

0x2bab,	// (0x0005bcc4) listscroll_app_pane

0x25dd,	// (0x0005b6f6) listscroll_form_pane

0xad96,	// (0x00063eaf) listscroll_gen_pane_ParamLimits

0xad96,	// (0x00063eaf) listscroll_gen_pane

0x011b,	// (0x00059234) listscroll_set_pane

0x4102,	// (0x0005d21b) main_idle_act_pane

0x22aa,	// (0x0005b3c3) main_idle_trad_pane

0x22aa,	// (0x0005b3c3) main_list_empty_pane

0x25d1,	// (0x0005b6ea) main_midp_pane

0x25f7,	// (0x0005b710) main_pane_g1_ParamLimits

0x25f7,	// (0x0005b710) main_pane_g1

0xadaa,	// (0x00063ec3) popup_ai_message_window_ParamLimits

0xadaa,	// (0x00063ec3) popup_ai_message_window

0xae4a,	// (0x00063f63) popup_fep_china_uni_window_ParamLimits

0xae4a,	// (0x00063f63) popup_fep_china_uni_window

0x0245,	// (0x0005935e) popup_fep_japan_candidate_window_ParamLimits

0x0245,	// (0x0005935e) popup_fep_japan_candidate_window

0x026f,	// (0x00059388) popup_fep_japan_predictive_window_ParamLimits

0x026f,	// (0x00059388) popup_fep_japan_predictive_window

0xaeaa,	// (0x00063fc3) popup_find_window

0xaec7,	// (0x00063fe0) popup_grid_graphic_window_ParamLimits

0xaec7,	// (0x00063fe0) popup_grid_graphic_window

0x02e2,	// (0x000593fb) popup_large_graphic_colour_window

0xaf71,	// (0x0006408a) popup_menu_window_ParamLimits

0xaf71,	// (0x0006408a) popup_menu_window

0xb161,	// (0x0006427a) popup_note_image_window

0xb121,	// (0x0006423a) popup_note_wait_window_ParamLimits

0xb121,	// (0x0006423a) popup_note_wait_window

0xb179,	// (0x00064292) popup_note_window_ParamLimits

0xb179,	// (0x00064292) popup_note_window

0xb227,	// (0x00064340) popup_query_code_window_ParamLimits

0xb227,	// (0x00064340) popup_query_code_window

0x054e,	// (0x00059667) popup_query_data_code_window_ParamLimits

0x054e,	// (0x00059667) popup_query_data_code_window

0xb267,	// (0x00064380) popup_query_data_window_ParamLimits

0xb267,	// (0x00064380) popup_query_data_window

0xb2fb,	// (0x00064414) popup_query_sat_info_window_ParamLimits

0xb2fb,	// (0x00064414) popup_query_sat_info_window

0xb3a6,	// (0x000644bf) popup_snote_single_graphic_window_ParamLimits

0xb3a6,	// (0x000644bf) popup_snote_single_graphic_window

0xb3a6,	// (0x000644bf) popup_snote_single_text_window_ParamLimits

0xb3a6,	// (0x000644bf) popup_snote_single_text_window

0x05e9,	// (0x00059702) popup_sub_window_general

0x072f,	// (0x00059848) popup_window_general_ParamLimits

0x072f,	// (0x00059848) popup_window_general

0x2605,	// (0x0005b71e) power_save_pane

0xf4e4,	// (0x000685fd) control_pane_g1_ParamLimits

0xf4e4,	// (0x000685fd) control_pane_g1

0xf507,	// (0x00068620) control_pane_g2_ParamLimits

0xf507,	// (0x00068620) control_pane_g2

0x2574,	// (0x0005b68d) control_pane_g3_ParamLimits

0x2574,	// (0x0005b68d) control_pane_g3

0x0007,

0xf768,	// (0x00068881) control_pane_g_ParamLimits

0xf768,	// (0x00068881) control_pane_g

0xaca5,	// (0x00063dbe) control_pane_t1_ParamLimits

0xaca5,	// (0x00063dbe) control_pane_t1

0xacf5,	// (0x00063e0e) control_pane_t2_ParamLimits

0xacf5,	// (0x00063e0e) control_pane_t2

0x0002,

0xf779,	// (0x00068892) control_pane_t_ParamLimits

0xf779,	// (0x00068892) control_pane_t

0x2499,	// (0x0005b5b2) navi_navi_volume_pane_cp1

0x24a1,	// (0x0005b5ba) status_small_icon_pane

0x24a9,	// (0x0005b5c2) status_small_pane_g1_ParamLimits

0x24a9,	// (0x0005b5c2) status_small_pane_g1

0x24dd,	// (0x0005b5f6) status_small_pane_g2_ParamLimits

0x24dd,	// (0x0005b5f6) status_small_pane_g2

0x24e9,	// (0x0005b602) status_small_pane_g3_ParamLimits

0x24e9,	// (0x0005b602) status_small_pane_g3

0xac57,	// (0x00063d70) status_small_pane_g4_ParamLimits

0xac57,	// (0x00063d70) status_small_pane_g4

0xac65,	// (0x00063d7e) status_small_pane_g5_ParamLimits

0xac65,	// (0x00063d7e) status_small_pane_g5

0x250f,	// (0x0005b628) status_small_pane_g6_ParamLimits

0x250f,	// (0x0005b628) status_small_pane_g6

0x0007,

0xf757,	// (0x00068870) status_small_pane_g_ParamLimits

0xf757,	// (0x00068870) status_small_pane_g

0x253e,	// (0x0005b657) status_small_pane_t1

0xac7b,	// (0x00063d94) status_small_wait_pane_ParamLimits

0xac7b,	// (0x00063d94) status_small_wait_pane

0xaa43,	// (0x00063b5c) aid_levels_signal_ParamLimits

0xaa43,	// (0x00063b5c) aid_levels_signal

0xaa5b,	// (0x00063b74) signal_pane_g1_ParamLimits

0xaa5b,	// (0x00063b74) signal_pane_g1

0xaa76,	// (0x00063b8f) signal_pane_g2_ParamLimits

0xaa76,	// (0x00063b8f) signal_pane_g2

0x0003,

0xf6e8,	// (0x00068801) signal_pane_g_ParamLimits

0xf6e8,	// (0x00068801) signal_pane_g

0xded3,	// (0x00066fec) context_pane_g1

0x9e49,	// (0x00062f62) title_pane_g1

0x9e8c,	// (0x00062fa5) title_pane_t1

0x88f3,	// (0x00061a0c) title_pane_t2

0x8919,	// (0x00061a32) title_pane_t3

0x0002,

0xf532,	// (0x0006864b) title_pane_t

0xc3a4,	// (0x000654bd) aid_levels_battery_ParamLimits

0xc3a4,	// (0x000654bd) aid_levels_battery

0xc3c0,	// (0x000654d9) battery_pane_g1_ParamLimits

0xc3c0,	// (0x000654d9) battery_pane_g1

0xc3dd,	// (0x000654f6) battery_pane_g2_ParamLimits

0xc3dd,	// (0x000654f6) battery_pane_g2

0x0001,

0xf78b,	// (0x000688a4) battery_pane_g_ParamLimits

0xf78b,	// (0x000688a4) battery_pane_g

0xc60f,	// (0x00065728) uni_indicator_pane_g1

0xc625,	// (0x0006573e) uni_indicator_pane_g2

0xc63b,	// (0x00065754) uni_indicator_pane_g3

0x0005,

0xf8fc,	// (0x00068a15) uni_indicator_pane_g

0x210d,	// (0x0005b226) navi_icon_pane_ParamLimits

0x210d,	// (0x0005b226) navi_icon_pane

0x2060,	// (0x0005b179) navi_midp_pane

0x2129,	// (0x0005b242) navi_navi_pane

0x2133,	// (0x0005b24c) navi_text_pane_ParamLimits

0x2133,	// (0x0005b24c) navi_text_pane

0x88d3,	// (0x000619ec) status_small_wait_pane_g1

0x8c3a,	// (0x00061d53) status_small_wait_pane_g2

0x0001,

0xf8f7,	// (0x00068a10) status_small_wait_pane_g

0xc5ae,	// (0x000656c7) navi_navi_icon_text_pane

0xc5b6,	// (0x000656cf) navi_navi_pane_g1_ParamLimits

0xc5b6,	// (0x000656cf) navi_navi_pane_g1

0xc5c8,	// (0x000656e1) navi_navi_pane_g2_ParamLimits

0xc5c8,	// (0x000656e1) navi_navi_pane_g2

0x0001,

0xf8c5,	// (0x000689de) navi_navi_pane_g_ParamLimits

0xf8c5,	// (0x000689de) navi_navi_pane_g

0x3bee,	// (0x0005cd07) navi_navi_tabs_pane

0xc5da,	// (0x000656f3) navi_navi_text_pane

0xc5ae,	// (0x000656c7) navi_navi_volume_pane

0xc59c,	// (0x000656b5) navi_text_pane_t1

0xc590,	// (0x000656a9) navi_icon_pane_g1

0x38f7,	// (0x0005ca10) navi_navi_text_pane_t1

0xb6c3,	// (0x000647dc) navi_navi_volume_pane_g1

0xb6cb,	// (0x000647e4) volume_small_pane

0xc4ec,	// (0x00065605) navi_navi_icon_text_pane_g1

0xc4f4,	// (0x0006560d) navi_navi_icon_text_pane_t1

0x2129,	// (0x0005b242) navi_tabs_2_long_pane

0x2129,	// (0x0005b242) navi_tabs_2_pane

0x2129,	// (0x0005b242) navi_tabs_3_long_pane

0x2129,	// (0x0005b242) navi_tabs_3_pane

0x2129,	// (0x0005b242) navi_tabs_4_pane

0xb6a3,	// (0x000647bc) tabs_2_active_pane_ParamLimits

0xb6a3,	// (0x000647bc) tabs_2_active_pane

0xb6b3,	// (0x000647cc) tabs_2_passive_pane_ParamLimits

0xb6b3,	// (0x000647cc) tabs_2_passive_pane

0xb671,	// (0x0006478a) tabs_3_active_pane_ParamLimits

0xb671,	// (0x0006478a) tabs_3_active_pane

0xb681,	// (0x0006479a) tabs_3_passive_pane_ParamLimits

0xb681,	// (0x0006479a) tabs_3_passive_pane

0xb692,	// (0x000647ab) tabs_3_passive_pane_cp_ParamLimits

0xb692,	// (0x000647ab) tabs_3_passive_pane_cp

0xb62d,	// (0x00064746) tabs_4_active_pane_ParamLimits

0xb62d,	// (0x00064746) tabs_4_active_pane

0xb63e,	// (0x00064757) tabs_4_passive_pane_ParamLimits

0xb63e,	// (0x00064757) tabs_4_passive_pane

0xb64f,	// (0x00064768) tabs_4_passive_pane_cp_ParamLimits

0xb64f,	// (0x00064768) tabs_4_passive_pane_cp

0xb660,	// (0x00064779) tabs_4_passive_pane_cp2_ParamLimits

0xb660,	// (0x00064779) tabs_4_passive_pane_cp2

0xb609,	// (0x00064722) tabs_2_long_active_pane_ParamLimits

0xb609,	// (0x00064722) tabs_2_long_active_pane

0xb61b,	// (0x00064734) tabs_2_long_passive_pane_ParamLimits

0xb61b,	// (0x00064734) tabs_2_long_passive_pane

0xb5d0,	// (0x000646e9) tabs_3_long_active_pane_ParamLimits

0xb5d0,	// (0x000646e9) tabs_3_long_active_pane

0xb5e3,	// (0x000646fc) tabs_3_long_passive_pane_ParamLimits

0xb5e3,	// (0x000646fc) tabs_3_long_passive_pane

0xb5f6,	// (0x0006470f) tabs_3_long_passive_pane_cp_ParamLimits

0xb5f6,	// (0x0006470f) tabs_3_long_passive_pane_cp

0x08b0,	// (0x000599c9) volume_small_pane_g1

0xb57f,	// (0x00064698) volume_small_pane_g2

0xb588,	// (0x000646a1) volume_small_pane_g3

0xb591,	// (0x000646aa) volume_small_pane_g4

0xb59a,	// (0x000646b3) volume_small_pane_g5

0xb5a3,	// (0x000646bc) volume_small_pane_g6

0xb5ac,	// (0x000646c5) volume_small_pane_g7

0xb5b5,	// (0x000646ce) volume_small_pane_g8

0xb5be,	// (0x000646d7) volume_small_pane_g9

0xb5c7,	// (0x000646e0) volume_small_pane_g10

0x0009,

0xf891,	// (0x000689aa) volume_small_pane_g

0x8a5e,	// (0x00061b77) bg_active_tab_pane_cp2_ParamLimits

0x8a5e,	// (0x00061b77) bg_active_tab_pane_cp2

0x9f18,	// (0x00063031) tabs_3_active_pane_g1

0x9f20,	// (0x00063039) tabs_3_active_pane_t1

0x8a5e,	// (0x00061b77) bg_passive_tab_pane_cp2_ParamLimits

0x8a5e,	// (0x00061b77) bg_passive_tab_pane_cp2

0x9f18,	// (0x00063031) tabs_3_passive_pane_g1

0x9f20,	// (0x00063039) tabs_3_passive_pane_t1

0x8a5e,	// (0x00061b77) bg_active_tab_pane_cp3_ParamLimits

0x8a5e,	// (0x00061b77) bg_active_tab_pane_cp3

0x9f32,	// (0x0006304b) tabs_4_active_pane_g1

0x9f3a,	// (0x00063053) tabs_4_active_pane_t1

0x8a5e,	// (0x00061b77) bg_passive_tab_pane_cp3_ParamLimits

0x8a5e,	// (0x00061b77) bg_passive_tab_pane_cp3

0x9f32,	// (0x0006304b) tabs_4_1_passive_pane_g1

0x9f3a,	// (0x00063053) tabs_4_1_passive_pane_t1

0x25d1,	// (0x0005b6ea) list_highlight_pane_cp2

0xc6ce,	// (0x000657e7) list_set_pane_ParamLimits

0xc6ce,	// (0x000657e7) list_set_pane

0xc790,	// (0x000658a9) main_pane_set_t1_ParamLimits

0xc790,	// (0x000658a9) main_pane_set_t1

0xc7b0,	// (0x000658c9) main_pane_set_t2_ParamLimits

0xc7b0,	// (0x000658c9) main_pane_set_t2

0xc7c4,	// (0x000658dd) main_pane_set_t3_ParamLimits

0xc7c4,	// (0x000658dd) main_pane_set_t3

0xc7d8,	// (0x000658f1) main_pane_set_t4_ParamLimits

0xc7d8,	// (0x000658f1) main_pane_set_t4

0x0003,

0xf961,	// (0x00068a7a) main_pane_set_t_ParamLimits

0xf961,	// (0x00068a7a) main_pane_set_t

0xc7ec,	// (0x00065905) setting_code_pane

0x4250,	// (0x0005d369) setting_slider_graphic_pane

0x4250,	// (0x0005d369) setting_slider_pane

0x4250,	// (0x0005d369) setting_text_pane

0x4250,	// (0x0005d369) setting_volume_pane

0xef2c,	// (0x00068045) volume_set_pane

0x892b,	// (0x00061a44) bg_set_opt_pane_cp

0xef36,	// (0x0006804f) setting_slider_pane_t1

0xef4f,	// (0x00068068) setting_slider_pane_t2

0xef69,	// (0x00068082) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00068652) setting_slider_pane_t

0xef81,	// (0x0006809a) slider_set_pane

0x88dd,	// (0x000619f6) bg_set_opt_pane_cp2

0x8939,	// (0x00061a52) setting_slider_graphic_pane_g1

0xef97,	// (0x000680b0) setting_slider_graphic_pane_t1

0xefa7,	// (0x000680c0) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00068659) setting_slider_graphic_pane_t

0xefb7,	// (0x000680d0) slider_set_pane_cp

0x88dd,	// (0x000619f6) input_focus_pane_cp1

0x40e9,	// (0x0005d202) list_set_text_pane

0x88d3,	// (0x000619ec) setting_text_pane_g1

0x88dd,	// (0x000619f6) input_focus_pane_cp2

0x88d3,	// (0x000619ec) setting_code_pane_g1

0x8942,	// (0x00061a5b) setting_code_pane_t1

0xdb6a,	// (0x00066c83) set_text_pane_t1_ParamLimits

0xdb6a,	// (0x00066c83) set_text_pane_t1

0x8fd3,	// (0x000620ec) set_opt_bg_pane_g1

0x8fdb,	// (0x000620f4) set_opt_bg_pane_g2

0x40c1,	// (0x0005d1da) set_opt_bg_pane_g3

0x8feb,	// (0x00062104) set_opt_bg_pane_g4

0x8ff3,	// (0x0006210c) set_opt_bg_pane_g5

0x8ffb,	// (0x00062114) set_opt_bg_pane_g6

0x40cb,	// (0x0005d1e4) set_opt_bg_pane_g7

0x40d5,	// (0x0005d1ee) set_opt_bg_pane_g8

0x40df,	// (0x0005d1f8) set_opt_bg_pane_g9

0x0008,

0xf94e,	// (0x00068a67) set_opt_bg_pane_g

0x40b4,	// (0x0005d1cd) slider_set_pane_g1

0x0abc,	// (0x00059bd5) slider_set_pane_g2

0x0006,

0xf93f,	// (0x00068a58) slider_set_pane_g

0x0a1c,	// (0x00059b35) volume_set_pane_g1

0x0a26,	// (0x00059b3f) volume_set_pane_g2

0x0a30,	// (0x00059b49) volume_set_pane_g3

0x0a3a,	// (0x00059b53) volume_set_pane_g4

0x0a44,	// (0x00059b5d) volume_set_pane_g5

0x0a4e,	// (0x00059b67) volume_set_pane_g6

0x0a58,	// (0x00059b71) volume_set_pane_g7

0x0a62,	// (0x00059b7b) volume_set_pane_g8

0x0a6c,	// (0x00059b85) volume_set_pane_g9

0x0a76,	// (0x00059b8f) volume_set_pane_g10

0x0009,

0xf917,	// (0x00068a30) volume_set_pane_g

0x9f4c,	// (0x00063065) indicator_pane_ParamLimits

0x9f4c,	// (0x00063065) indicator_pane

0x9f78,	// (0x00063091) main_idle_pane_g2_ParamLimits

0x9f78,	// (0x00063091) main_idle_pane_g2

0x9fb0,	// (0x000630c9) main_pane_idle_g1_ParamLimits

0x9fb0,	// (0x000630c9) main_pane_idle_g1

0x8950,	// (0x00061a69) popup_clock_digital_analogue_window_ParamLimits

0x8950,	// (0x00061a69) popup_clock_digital_analogue_window

0x9fda,	// (0x000630f3) soft_indicator_pane_ParamLimits

0x9fda,	// (0x000630f3) soft_indicator_pane

0x9ff6,	// (0x0006310f) wallpaper_pane_ParamLimits

0x9ff6,	// (0x0006310f) wallpaper_pane

0x88d3,	// (0x000619ec) wallpaper_pane_g1

0xa008,	// (0x00063121) indicator_pane_g1_ParamLimits

0xa008,	// (0x00063121) indicator_pane_g1

0x4513,	// (0x0005d62c) navi_navi_icon_text_pane_srt_g1

0x897e,	// (0x00061a97) soft_indicator_pane_t1

0x8998,	// (0x00061ab1) aid_ps_area_pane

0xa021,	// (0x0006313a) aid_ps_clock_pane

0x89a9,	// (0x00061ac2) aid_ps_indicator_pane

0x89b5,	// (0x00061ace) indicator_ps_pane_ParamLimits

0x89b5,	// (0x00061ace) indicator_ps_pane

0x89c4,	// (0x00061add) power_save_pane_g1_ParamLimits

0x89c4,	// (0x00061add) power_save_pane_g1

0x89d0,	// (0x00061ae9) power_save_pane_g2_ParamLimits

0x89d0,	// (0x00061ae9) power_save_pane_g2

0xed5f,	// (0x00067e78) aid_navinavi_width_pane

0x8998,	// (0x00061ab1) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0006865e) power_save_pane_g_ParamLimits

0xf545,	// (0x0006865e) power_save_pane_g

0x89de,	// (0x00061af7) power_save_pane_t1_ParamLimits

0x89de,	// (0x00061af7) power_save_pane_t1

0xa021,	// (0x0006313a) aid_ps_clock_pane_ParamLimits

0x89a9,	// (0x00061ac2) aid_ps_indicator_pane_ParamLimits

0x89f0,	// (0x00061b09) power_save_pane_t4_ParamLimits

0x89f0,	// (0x00061b09) power_save_pane_t4

0x0001,

0xf54a,	// (0x00068663) power_save_pane_t_ParamLimits

0xf54a,	// (0x00068663) power_save_pane_t

0x8a1a,	// (0x00061b33) power_save_t3_ParamLimits

0x8a1a,	// (0x00061b33) power_save_t3

0x8a05,	// (0x00061b1e) power_save_t2_ParamLimits

0x8a05,	// (0x00061b1e) power_save_t2

0x8a2f,	// (0x00061b48) indicator_ps_pane_g1

0xa02f,	// (0x00063148) ai_gene_pane_ParamLimits

0xa02f,	// (0x00063148) ai_gene_pane

0xa046,	// (0x0006315f) ai_links_pane_ParamLimits

0xa046,	// (0x0006315f) ai_links_pane

0xa05e,	// (0x00063177) indicator_pane_cp1_ParamLimits

0xa05e,	// (0x00063177) indicator_pane_cp1

0xa06d,	// (0x00063186) main_pane_idle_g1_cp_ParamLimits

0xa06d,	// (0x00063186) main_pane_idle_g1_cp

0x8a38,	// (0x00061b51) popup_ai_links_title_window

0xa085,	// (0x0006319e) soft_indicator_pane_cp1_ParamLimits

0xa085,	// (0x0006319e) soft_indicator_pane_cp1

0x3e9d,	// (0x0005cfb6) ai_links_pane_g1

0x3ea6,	// (0x0005cfbf) grid_ai_links_pane

0xc606,	// (0x0006571f) ai_gene_pane_1

0x3e8b,	// (0x0005cfa4) ai_gene_pane_2

0x3e94,	// (0x0005cfad) list_highlight_pane_cp4

0xc5e2,	// (0x000656fb) cell_ai_link_pane_ParamLimits

0xc5e2,	// (0x000656fb) cell_ai_link_pane

0x3e5a,	// (0x0005cf73) cell_ai_link_pane_g1

0x8c3a,	// (0x00061d53) cell_ai_link_pane_g2

0x0001,

0xf8f2,	// (0x00068a0b) cell_ai_link_pane_g

0x88dd,	// (0x000619f6) grid_highlight_cp2

0x88dd,	// (0x000619f6) bg_popup_sub_pane_cp1

0x8a4f,	// (0x00061b68) popup_ai_links_title_window_t1

0x3da6,	// (0x0005cebf) ai_gene_pane_1_g1_ParamLimits

0x3da6,	// (0x0005cebf) ai_gene_pane_1_g1

0x3db2,	// (0x0005cecb) ai_gene_pane_1_g2_ParamLimits

0x3db2,	// (0x0005cecb) ai_gene_pane_1_g2

0x0001,

0xf8e8,	// (0x00068a01) ai_gene_pane_1_g_ParamLimits

0xf8e8,	// (0x00068a01) ai_gene_pane_1_g

0x3dbf,	// (0x0005ced8) ai_gene_pane_1_t1_ParamLimits

0x3dbf,	// (0x0005ced8) ai_gene_pane_1_t1

0x3df3,	// (0x0005cf0c) grid_ai_soft_ind_pane

0x3d91,	// (0x0005ceaa) ai_gene_pane_2_t1_ParamLimits

0x3d91,	// (0x0005ceaa) ai_gene_pane_2_t1

0xa099,	// (0x000631b2) main_pane_empty_t1_ParamLimits

0xa099,	// (0x000631b2) main_pane_empty_t1

0xa0b1,	// (0x000631ca) main_pane_empty_t2_ParamLimits

0xa0b1,	// (0x000631ca) main_pane_empty_t2

0xa0c6,	// (0x000631df) main_pane_empty_t3_ParamLimits

0xa0c6,	// (0x000631df) main_pane_empty_t3

0xa0d8,	// (0x000631f1) main_pane_empty_t4_ParamLimits

0xa0d8,	// (0x000631f1) main_pane_empty_t4

0xa0ea,	// (0x00063203) main_pane_empty_t5_ParamLimits

0xa0ea,	// (0x00063203) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00068668) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00068668) main_pane_empty_t

0x9062,	// (0x0006217b) bg_popup_window_pane_ParamLimits

0x9062,	// (0x0006217b) bg_popup_window_pane

0x3905,	// (0x0005ca1e) find_popup_pane_cp2_ParamLimits

0x3905,	// (0x0005ca1e) find_popup_pane_cp2

0x3aff,	// (0x0005cc18) heading_pane_ParamLimits

0x3aff,	// (0x0005cc18) heading_pane

0x88dd,	// (0x000619f6) bg_popup_sub_pane

0xc511,	// (0x0006562a) bg_popup_window_pane_g1_ParamLimits

0xc511,	// (0x0006562a) bg_popup_window_pane_g1

0xc520,	// (0x00065639) bg_popup_window_pane_g2_ParamLimits

0xc520,	// (0x00065639) bg_popup_window_pane_g2

0xc52c,	// (0x00065645) bg_popup_window_pane_g3_ParamLimits

0xc52c,	// (0x00065645) bg_popup_window_pane_g3

0xc538,	// (0x00065651) bg_popup_window_pane_g4_ParamLimits

0xc538,	// (0x00065651) bg_popup_window_pane_g4

0xc547,	// (0x00065660) bg_popup_window_pane_g5_ParamLimits

0xc547,	// (0x00065660) bg_popup_window_pane_g5

0xc557,	// (0x00065670) bg_popup_window_pane_g6_ParamLimits

0xc557,	// (0x00065670) bg_popup_window_pane_g6

0xc563,	// (0x0006567c) bg_popup_window_pane_g7_ParamLimits

0xc563,	// (0x0006567c) bg_popup_window_pane_g7

0xc572,	// (0x0006568b) bg_popup_window_pane_g8_ParamLimits

0xc572,	// (0x0006568b) bg_popup_window_pane_g8

0xc581,	// (0x0006569a) bg_popup_window_pane_g9_ParamLimits

0xc581,	// (0x0006569a) bg_popup_window_pane_g9

0x38eb,	// (0x0005ca04) bg_popup_window_pane_g10_ParamLimits

0x38eb,	// (0x0005ca04) bg_popup_window_pane_g10

0x0009,

0xf8b0,	// (0x000689c9) bg_popup_window_pane_g_ParamLimits

0xf8b0,	// (0x000689c9) bg_popup_window_pane_g

0x3814,	// (0x0005c92d) bg_popup_heading_pane_ParamLimits

0x3814,	// (0x0005c92d) bg_popup_heading_pane

0x0bb8,	// (0x00059cd1) tabs_4_passive_pane_cp_srt_ParamLimits

0x0bb8,	// (0x00059cd1) tabs_4_passive_pane_cp_srt

0x0bca,	// (0x00059ce3) tabs_4_passive_pane_srt_ParamLimits

0x3828,	// (0x0005c941) heading_pane_g2

0x0bca,	// (0x00059ce3) tabs_4_passive_pane_srt

0x2bab,	// (0x0005bcc4) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2bab,	// (0x0005bcc4) bg_passive_tab_pane_cp3_srt

0x3830,	// (0x0005c949) heading_pane_t1_ParamLimits

0x3830,	// (0x0005c949) heading_pane_t1

0x3847,	// (0x0005c960) heading_pane_t2_ParamLimits

0x3847,	// (0x0005c960) heading_pane_t2

0x0001,

0xf8ab,	// (0x000689c4) heading_pane_t_ParamLimits

0xf8ab,	// (0x000689c4) heading_pane_t

0x333f,	// (0x0005c458) bg_popup_heading_pane_g1

0x33ee,	// (0x0005c507) bg_popup_heading_pane_g2

0x33f8,	// (0x0005c511) bg_popup_heading_pane_g3

0x3402,	// (0x0005c51b) bg_popup_heading_pane_g4

0x340c,	// (0x0005c525) bg_popup_heading_pane_g5

0x3416,	// (0x0005c52f) bg_popup_heading_pane_g6

0x341e,	// (0x0005c537) bg_popup_heading_pane_g7

0x3426,	// (0x0005c53f) bg_popup_heading_pane_g8

0x3430,	// (0x0005c549) bg_popup_heading_pane_g9

0x0008,

0xf867,	// (0x00068980) bg_popup_heading_pane_g

0x2b1f,	// (0x0005bc38) bg_popup_sub_pane_g1

0x2b2f,	// (0x0005bc48) bg_popup_sub_pane_g2

0x2b27,	// (0x0005bc40) bg_popup_sub_pane_g3

0x2b3f,	// (0x0005bc58) bg_popup_sub_pane_g4

0x2b37,	// (0x0005bc50) bg_popup_sub_pane_g5

0x2b47,	// (0x0005bc60) bg_popup_sub_pane_g6

0x2b4f,	// (0x0005bc68) bg_popup_sub_pane_g7

0x2b5f,	// (0x0005bc78) bg_popup_sub_pane_g8

0x2b57,	// (0x0005bc70) bg_popup_sub_pane_g9

0x0008,

0xf841,	// (0x0006895a) bg_popup_sub_pane_g

0x8a5e,	// (0x00061b77) bg_popup_window_pane_cp5_ParamLimits

0x8a5e,	// (0x00061b77) bg_popup_window_pane_cp5

0x8a7a,	// (0x00061b93) popup_note_window_g1_ParamLimits

0x8a7a,	// (0x00061b93) popup_note_window_g1

0x8a86,	// (0x00061b9f) popup_note_window_t1_ParamLimits

0x8a86,	// (0x00061b9f) popup_note_window_t1

0x8a9c,	// (0x00061bb5) popup_note_window_t2_ParamLimits

0x8a9c,	// (0x00061bb5) popup_note_window_t2

0x8ab2,	// (0x00061bcb) popup_note_window_t3_ParamLimits

0x8ab2,	// (0x00061bcb) popup_note_window_t3

0x8ac8,	// (0x00061be1) popup_note_window_t4_ParamLimits

0x8ac8,	// (0x00061be1) popup_note_window_t4

0x8af0,	// (0x00061c09) popup_note_window_t5_ParamLimits

0x8af0,	// (0x00061c09) popup_note_window_t5

0x0004,

0xf55a,	// (0x00068673) popup_note_window_t_ParamLimits

0xf55a,	// (0x00068673) popup_note_window_t

0x8b3a,	// (0x00061c53) bg_popup_window_pane_cp6_ParamLimits

0x8b3a,	// (0x00061c53) bg_popup_window_pane_cp6

0x32bb,	// (0x0005c3d4) popup_note_image_window_g1_ParamLimits

0x32bb,	// (0x0005c3d4) popup_note_image_window_g1

0x32c7,	// (0x0005c3e0) popup_note_image_window_g2_ParamLimits

0x32c7,	// (0x0005c3e0) popup_note_image_window_g2

0x0001,

0xf835,	// (0x0006894e) popup_note_image_window_g_ParamLimits

0xf835,	// (0x0006894e) popup_note_image_window_g

0x32e0,	// (0x0005c3f9) popup_note_image_window_t1_ParamLimits

0x32e0,	// (0x0005c3f9) popup_note_image_window_t1

0x32f9,	// (0x0005c412) popup_note_image_window_t2_ParamLimits

0x32f9,	// (0x0005c412) popup_note_image_window_t2

0x3312,	// (0x0005c42b) popup_note_image_window_t3_ParamLimits

0x3312,	// (0x0005c42b) popup_note_image_window_t3

0x0002,

0xf83a,	// (0x00068953) popup_note_image_window_t_ParamLimits

0xf83a,	// (0x00068953) popup_note_image_window_t

0x317b,	// (0x0005c294) bg_popup_window_pane_cp7_ParamLimits

0x317b,	// (0x0005c294) bg_popup_window_pane_cp7

0x31ab,	// (0x0005c2c4) popup_note_wait_window_g1_ParamLimits

0x31ab,	// (0x0005c2c4) popup_note_wait_window_g1

0x31b7,	// (0x0005c2d0) popup_note_wait_window_g2_ParamLimits

0x31b7,	// (0x0005c2d0) popup_note_wait_window_g2

0x0002,

0xf823,	// (0x0006893c) popup_note_wait_window_g_ParamLimits

0xf823,	// (0x0006893c) popup_note_wait_window_g

0x31cf,	// (0x0005c2e8) popup_note_wait_window_t1_ParamLimits

0x31cf,	// (0x0005c2e8) popup_note_wait_window_t1

0x31f6,	// (0x0005c30f) popup_note_wait_window_t2_ParamLimits

0x31f6,	// (0x0005c30f) popup_note_wait_window_t2

0x3214,	// (0x0005c32d) popup_note_wait_window_t3_ParamLimits

0x3214,	// (0x0005c32d) popup_note_wait_window_t3

0x3227,	// (0x0005c340) popup_note_wait_window_t4_ParamLimits

0x3227,	// (0x0005c340) popup_note_wait_window_t4

0x0004,

0xf82a,	// (0x00068943) popup_note_wait_window_t_ParamLimits

0xf82a,	// (0x00068943) popup_note_wait_window_t

0x324c,	// (0x0005c365) wait_bar_pane_ParamLimits

0x324c,	// (0x0005c365) wait_bar_pane

0x88dd,	// (0x000619f6) wait_anim_pane

0x88dd,	// (0x000619f6) wait_border_pane

0x88d3,	// (0x000619ec) wait_anim_pane_g1

0x88d3,	// (0x000619ec) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x000687fc) wait_anim_pane_g

0x311f,	// (0x0005c238) wait_border_pane_g1

0x312a,	// (0x0005c243) wait_border_pane_g2

0x3133,	// (0x0005c24c) wait_border_pane_g3

0x0002,

0xf81c,	// (0x00068935) wait_border_pane_g

0x2f89,	// (0x0005c0a2) bg_popup_window_pane_cp16_ParamLimits

0x2f89,	// (0x0005c0a2) bg_popup_window_pane_cp16

0x3089,	// (0x0005c1a2) indicator_popup_pane_cp4_ParamLimits

0x3089,	// (0x0005c1a2) indicator_popup_pane_cp4

0x309d,	// (0x0005c1b6) popup_query_data_window_t1_ParamLimits

0x309d,	// (0x0005c1b6) popup_query_data_window_t1

0x30af,	// (0x0005c1c8) popup_query_data_window_t2_ParamLimits

0x30af,	// (0x0005c1c8) popup_query_data_window_t2

0x30c8,	// (0x0005c1e1) popup_query_data_window_t3_ParamLimits

0x30c8,	// (0x0005c1e1) popup_query_data_window_t3

0x0002,

0xf815,	// (0x0006892e) popup_query_data_window_t_ParamLimits

0xf815,	// (0x0006892e) popup_query_data_window_t

0x30e2,	// (0x0005c1fb) query_popup_data_pane_ParamLimits

0x30e2,	// (0x0005c1fb) query_popup_data_pane

0x30f6,	// (0x0005c20f) query_popup_data_pane_cp1_ParamLimits

0x30f6,	// (0x0005c20f) query_popup_data_pane_cp1

0x2f89,	// (0x0005c0a2) bg_popup_window_pane_cp10_ParamLimits

0x2f89,	// (0x0005c0a2) bg_popup_window_pane_cp10

0x2fbb,	// (0x0005c0d4) indicator_popup_pane_ParamLimits

0x2fbb,	// (0x0005c0d4) indicator_popup_pane

0x2fdd,	// (0x0005c0f6) popup_query_code_window_t1_ParamLimits

0x2fdd,	// (0x0005c0f6) popup_query_code_window_t1

0x2ff7,	// (0x0005c110) popup_query_code_window_t2_ParamLimits

0x2ff7,	// (0x0005c110) popup_query_code_window_t2

0x3040,	// (0x0005c159) popup_query_code_window_t3_ParamLimits

0x3040,	// (0x0005c159) popup_query_code_window_t3

0x0002,

0xf80e,	// (0x00068927) popup_query_code_window_t_ParamLimits

0xf80e,	// (0x00068927) popup_query_code_window_t

0x306f,	// (0x0005c188) query_popup_pane_ParamLimits

0x306f,	// (0x0005c188) query_popup_pane

0x8b3a,	// (0x00061c53) bg_popup_window_pane_cp15_ParamLimits

0x8b3a,	// (0x00061c53) bg_popup_window_pane_cp15

0x8b5a,	// (0x00061c73) indicator_popup_pane_cp1_ParamLimits

0x8b5a,	// (0x00061c73) indicator_popup_pane_cp1

0x8b6d,	// (0x00061c86) indicator_popup_pane_cp2_ParamLimits

0x8b6d,	// (0x00061c86) indicator_popup_pane_cp2

0x8b88,	// (0x00061ca1) popup_query_data_code_window_g1_ParamLimits

0x8b88,	// (0x00061ca1) popup_query_data_code_window_g1

0x8b9b,	// (0x00061cb4) popup_query_data_code_window_t1_ParamLimits

0x8b9b,	// (0x00061cb4) popup_query_data_code_window_t1

0x8bad,	// (0x00061cc6) popup_query_data_code_window_t2_ParamLimits

0x8bad,	// (0x00061cc6) popup_query_data_code_window_t2

0x8bbf,	// (0x00061cd8) popup_query_data_code_window_t3_ParamLimits

0x8bbf,	// (0x00061cd8) popup_query_data_code_window_t3

0x8bd5,	// (0x00061cee) popup_query_data_code_window_t4_ParamLimits

0x8bd5,	// (0x00061cee) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0006867e) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0006867e) popup_query_data_code_window_t

0x079d,	// (0x000598b6) list_single_midp_graphic_pane_g3

0x8bef,	// (0x00061d08) query_popup_data_pane_cp2_ParamLimits

0x8c02,	// (0x00061d1b) query_popup_pane_cp2_ParamLimits

0x8c02,	// (0x00061d1b) query_popup_pane_cp2

0x88dd,	// (0x000619f6) bg_popup_window_pane_cp11

0x2f6d,	// (0x0005c086) heading_pane_cp5

0x2f75,	// (0x0005c08e) listscroll_popup_info_pane

0x88dd,	// (0x000619f6) input_focus_pane_cp3

0x8c1d,	// (0x00061d36) query_popup_pane_t1

0x8c2b,	// (0x00061d44) list_popup_info_pane_ParamLimits

0x8c2b,	// (0x00061d44) list_popup_info_pane

0x8c3a,	// (0x00061d53) listscroll_popup_info_pane_g1

0x8c42,	// (0x00061d5b) scroll_pane_cp7

0x8c4c,	// (0x00061d65) popup_info_list_pane_t1_ParamLimits

0x8c4c,	// (0x00061d65) popup_info_list_pane_t1

0x8c66,	// (0x00061d7f) popup_info_list_pane_t2_ParamLimits

0x8c66,	// (0x00061d7f) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00068687) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00068687) popup_info_list_pane_t

0x88dd,	// (0x000619f6) bg_popup_window_pane_cp12

0x452d,	// (0x0005d646) find_popup_pane

0x892b,	// (0x00061a44) bg_popup_window_pane_cp3

0x8c80,	// (0x00061d99) heading_pane_cp3

0x8c8f,	// (0x00061da8) listscroll_popup_graphic_pane

0x88dd,	// (0x000619f6) bg_popup_window_pane_cp4

0xa14c,	// (0x00063265) heading_pane_cp4

0x8c9f,	// (0x00061db8) listscroll_popup_colour_pane

0xa156,	// (0x0006326f) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa156,	// (0x0006326f) cell_large_graphic_colour_none_popup_pane

0xa16a,	// (0x00063283) grid_large_graphic_colour_popup_pane_ParamLimits

0xa16a,	// (0x00063283) grid_large_graphic_colour_popup_pane

0xa192,	// (0x000632ab) listscroll_popup_colour_pane_g1_ParamLimits

0xa192,	// (0x000632ab) listscroll_popup_colour_pane_g1

0xa1a9,	// (0x000632c2) listscroll_popup_colour_pane_g2_ParamLimits

0xa1a9,	// (0x000632c2) listscroll_popup_colour_pane_g2

0xa1c0,	// (0x000632d9) listscroll_popup_colour_pane_g3_ParamLimits

0xa1c0,	// (0x000632d9) listscroll_popup_colour_pane_g3

0xa1d0,	// (0x000632e9) listscroll_popup_colour_pane_g4_ParamLimits

0xa1d0,	// (0x000632e9) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0006868c) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0006868c) listscroll_popup_colour_pane_g

0x8ca7,	// (0x00061dc0) scroll_pane_cp6_ParamLimits

0x8ca7,	// (0x00061dc0) scroll_pane_cp6

0xa1e0,	// (0x000632f9) cell_large_graphic_colour_popup_pane_ParamLimits

0xa1e0,	// (0x000632f9) cell_large_graphic_colour_popup_pane

0x8cb9,	// (0x00061dd2) cell_large_graphic_colour_none_popup_pane_t1

0x88dd,	// (0x000619f6) grid_highlight_pane_cp5

0x8cc8,	// (0x00061de1) cell_large_graphic_colour_popup_pane_g1

0x8cd0,	// (0x00061de9) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00068695) cell_large_graphic_colour_popup_pane_g

0x8cd8,	// (0x00061df1) cell_large_graphic_colour_popup_pane_g2_copy1

0x8ce1,	// (0x00061dfa) grid_highlight_pane_cp4

0x8ce9,	// (0x00061e02) bg_popup_window_pane_cp8_ParamLimits

0x8ce9,	// (0x00061e02) bg_popup_window_pane_cp8

0x8d04,	// (0x00061e1d) popup_snote_single_text_window_g1_ParamLimits

0x8d04,	// (0x00061e1d) popup_snote_single_text_window_g1

0x8d16,	// (0x00061e2f) popup_snote_single_text_window_t1_ParamLimits

0x8d16,	// (0x00061e2f) popup_snote_single_text_window_t1

0x8d29,	// (0x00061e42) popup_snote_single_text_window_t2_ParamLimits

0x8d29,	// (0x00061e42) popup_snote_single_text_window_t2

0x8d3c,	// (0x00061e55) popup_snote_single_text_window_t3_ParamLimits

0x8d3c,	// (0x00061e55) popup_snote_single_text_window_t3

0x8d75,	// (0x00061e8e) popup_snote_single_text_window_t4_ParamLimits

0x8d75,	// (0x00061e8e) popup_snote_single_text_window_t4

0x8da9,	// (0x00061ec2) popup_snote_single_text_window_t5_ParamLimits

0x8da9,	// (0x00061ec2) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0006869a) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0006869a) popup_snote_single_text_window_t

0x8dd8,	// (0x00061ef1) bg_popup_window_pane_cp9_ParamLimits

0x8dd8,	// (0x00061ef1) bg_popup_window_pane_cp9

0x8d04,	// (0x00061e1d) popup_snote_single_graphic_window_g1_ParamLimits

0x8d04,	// (0x00061e1d) popup_snote_single_graphic_window_g1

0x8de6,	// (0x00061eff) popup_snote_single_graphic_window_g2_ParamLimits

0x8de6,	// (0x00061eff) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x000686a5) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x000686a5) popup_snote_single_graphic_window_g

0x8df2,	// (0x00061f0b) popup_snote_single_graphic_window_t1_ParamLimits

0x8df2,	// (0x00061f0b) popup_snote_single_graphic_window_t1

0x8e05,	// (0x00061f1e) popup_snote_single_graphic_window_t2_ParamLimits

0x8e05,	// (0x00061f1e) popup_snote_single_graphic_window_t2

0x8e18,	// (0x00061f31) popup_snote_single_graphic_window_t3_ParamLimits

0x8e18,	// (0x00061f31) popup_snote_single_graphic_window_t3

0x8e51,	// (0x00061f6a) popup_snote_single_graphic_window_t4_ParamLimits

0x8e51,	// (0x00061f6a) popup_snote_single_graphic_window_t4

0x8e85,	// (0x00061f9e) popup_snote_single_graphic_window_t5_ParamLimits

0x8e85,	// (0x00061f9e) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x000686aa) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x000686aa) popup_snote_single_graphic_window_t

0x446b,	// (0x0005d584) grid_graphic_popup_pane_ParamLimits

0x446b,	// (0x0005d584) grid_graphic_popup_pane

0x4499,	// (0x0005d5b2) listscroll_popup_graphic_pane_g1_ParamLimits

0x4499,	// (0x0005d5b2) listscroll_popup_graphic_pane_g1

0xc921,	// (0x00065a3a) listscroll_popup_graphic_pane_g2_ParamLimits

0xc921,	// (0x00065a3a) listscroll_popup_graphic_pane_g2

0x0001,

0xf98b,	// (0x00068aa4) listscroll_popup_graphic_pane_g_ParamLimits

0xf98b,	// (0x00068aa4) listscroll_popup_graphic_pane_g

0x44c1,	// (0x0005d5da) scroll_pane_cp5

0xc8d9,	// (0x000659f2) cell_graphic_popup_pane_ParamLimits

0xc8d9,	// (0x000659f2) cell_graphic_popup_pane

0x43e4,	// (0x0005d4fd) cell_graphic_popup_pane_g1

0x43ec,	// (0x0005d505) cell_graphic_popup_pane_g2

0x8cd8,	// (0x00061df1) cell_graphic_popup_pane_g3

0x0002,

0xf984,	// (0x00068a9d) cell_graphic_popup_pane_g

0x43f5,	// (0x0005d50e) cell_graphic_popup_pane_t2

0x8ce1,	// (0x00061dfa) grid_highlight_pane_cp3

0x8ec6,	// (0x00061fdf) list_gen_pane_ParamLimits

0x8ec6,	// (0x00061fdf) list_gen_pane

0x8eee,	// (0x00062007) scroll_pane

0xc890,	// (0x000659a9) bg_list_pane_g1_ParamLimits

0xc890,	// (0x000659a9) bg_list_pane_g1

0x4359,	// (0x0005d472) bg_list_pane_g2_ParamLimits

0x4359,	// (0x0005d472) bg_list_pane_g2

0x436e,	// (0x0005d487) bg_list_pane_g3_ParamLimits

0x436e,	// (0x0005d487) bg_list_pane_g3

0x4382,	// (0x0005d49b) bg_list_pane_g4_ParamLimits

0x4382,	// (0x0005d49b) bg_list_pane_g4

0xc8ad,	// (0x000659c6) bg_list_pane_g5_ParamLimits

0xc8ad,	// (0x000659c6) bg_list_pane_g5

0x0004,

0xf979,	// (0x00068a92) bg_list_pane_g_ParamLimits

0xf979,	// (0x00068a92) bg_list_pane_g

0xc82a,	// (0x00065943) list_double2_graphic_large_graphic_pane_ParamLimits

0xc82a,	// (0x00065943) list_double2_graphic_large_graphic_pane

0xc82a,	// (0x00065943) list_double2_graphic_pane_ParamLimits

0xc82a,	// (0x00065943) list_double2_graphic_pane

0xc82a,	// (0x00065943) list_double2_large_graphic_pane_ParamLimits

0xc82a,	// (0x00065943) list_double2_large_graphic_pane

0xc82a,	// (0x00065943) list_double2_pane_ParamLimits

0xc82a,	// (0x00065943) list_double2_pane

0xc82a,	// (0x00065943) list_double_graphic_heading_pane_ParamLimits

0xc82a,	// (0x00065943) list_double_graphic_heading_pane

0xc82a,	// (0x00065943) list_double_graphic_pane_ParamLimits

0xc82a,	// (0x00065943) list_double_graphic_pane

0xc82a,	// (0x00065943) list_double_heading_pane_ParamLimits

0xc82a,	// (0x00065943) list_double_heading_pane

0xc82a,	// (0x00065943) list_double_large_graphic_pane_ParamLimits

0xc82a,	// (0x00065943) list_double_large_graphic_pane

0xc82a,	// (0x00065943) list_double_number_pane_ParamLimits

0xc82a,	// (0x00065943) list_double_number_pane

0xc82a,	// (0x00065943) list_double_pane_ParamLimits

0xc82a,	// (0x00065943) list_double_pane

0xc82a,	// (0x00065943) list_double_time_pane_ParamLimits

0xc82a,	// (0x00065943) list_double_time_pane

0xc82a,	// (0x00065943) list_setting_number_pane_ParamLimits

0xc82a,	// (0x00065943) list_setting_number_pane

0xc82a,	// (0x00065943) list_setting_pane_ParamLimits

0xc82a,	// (0x00065943) list_setting_pane

0xc83e,	// (0x00065957) list_single_2graphic_pane_ParamLimits

0xc83e,	// (0x00065957) list_single_2graphic_pane

0xc83e,	// (0x00065957) list_single_graphic_heading_pane_ParamLimits

0xc83e,	// (0x00065957) list_single_graphic_heading_pane

0xc83e,	// (0x00065957) list_single_graphic_pane_ParamLimits

0xc83e,	// (0x00065957) list_single_graphic_pane

0xc83e,	// (0x00065957) list_single_heading_pane_ParamLimits

0xc83e,	// (0x00065957) list_single_heading_pane

0xc83e,	// (0x00065957) list_single_large_graphic_pane_ParamLimits

0xc83e,	// (0x00065957) list_single_large_graphic_pane

0xc83e,	// (0x00065957) list_single_number_heading_pane_ParamLimits

0xc83e,	// (0x00065957) list_single_number_heading_pane

0xc83e,	// (0x00065957) list_single_number_pane_ParamLimits

0xc83e,	// (0x00065957) list_single_number_pane

0xc83e,	// (0x00065957) list_single_pane_ParamLimits

0xc83e,	// (0x00065957) list_single_pane

0x88dd,	// (0x000619f6) list_highlight_pane_cp1

0x2aab,	// (0x0005bbc4) list_single_pane_g1_ParamLimits

0x2aab,	// (0x0005bbc4) list_single_pane_g1

0x2ab7,	// (0x0005bbd0) list_single_pane_g2_ParamLimits

0x2ab7,	// (0x0005bbd0) list_single_pane_g2

0x0001,

0xf5ad,	// (0x000686c6) list_single_pane_g_ParamLimits

0xf5ad,	// (0x000686c6) list_single_pane_g

0xe117,	// (0x00067230) list_single_pane_t1_ParamLimits

0xe117,	// (0x00067230) list_single_pane_t1

0x2aab,	// (0x0005bbc4) list_single_number_pane_g1_ParamLimits

0x2aab,	// (0x0005bbc4) list_single_number_pane_g1

0x2ab7,	// (0x0005bbd0) list_single_number_pane_g2_ParamLimits

0x2ab7,	// (0x0005bbd0) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x000686c6) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x000686c6) list_single_number_pane_g

0xe048,	// (0x00067161) list_single_number_pane_t1_ParamLimits

0xe048,	// (0x00067161) list_single_number_pane_t1

0xe105,	// (0x0006721e) list_single_number_pane_t2_ParamLimits

0xe105,	// (0x0006721e) list_single_number_pane_t2

0x0001,

0xf93a,	// (0x00068a53) list_single_number_pane_t_ParamLimits

0xf93a,	// (0x00068a53) list_single_number_pane_t

0xa20b,	// (0x00063324) list_single_graphic_pane_g1_ParamLimits

0xa20b,	// (0x00063324) list_single_graphic_pane_g1

0x2aab,	// (0x0005bbc4) list_single_graphic_pane_g2_ParamLimits

0x2aab,	// (0x0005bbc4) list_single_graphic_pane_g2

0x2ab7,	// (0x0005bbd0) list_single_graphic_pane_g3_ParamLimits

0x2ab7,	// (0x0005bbd0) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x000686b5) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x000686b5) list_single_graphic_pane_g

0xa217,	// (0x00063330) list_single_graphic_pane_t1_ParamLimits

0xa217,	// (0x00063330) list_single_graphic_pane_t1

0xa22d,	// (0x00063346) list_single_heading_pane_g1_ParamLimits

0xa22d,	// (0x00063346) list_single_heading_pane_g1

0x2ab7,	// (0x0005bbd0) list_single_heading_pane_g2_ParamLimits

0x2ab7,	// (0x0005bbd0) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x000686bc) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x000686bc) list_single_heading_pane_g

0xa240,	// (0x00063359) list_single_heading_pane_t1_ParamLimits

0xa240,	// (0x00063359) list_single_heading_pane_t1

0xa256,	// (0x0006336f) list_single_heading_pane_t2_ParamLimits

0xa256,	// (0x0006336f) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x000686c1) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x000686c1) list_single_heading_pane_t

0x2aab,	// (0x0005bbc4) list_single_number_heading_pane_g1_ParamLimits

0x2aab,	// (0x0005bbc4) list_single_number_heading_pane_g1

0x2ab7,	// (0x0005bbd0) list_single_number_heading_pane_g2_ParamLimits

0x2ab7,	// (0x0005bbd0) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x000686c6) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x000686c6) list_single_number_heading_pane_g

0xdb83,	// (0x00066c9c) list_single_number_heading_pane_t1_ParamLimits

0xdb83,	// (0x00066c9c) list_single_number_heading_pane_t1

0xa268,	// (0x00063381) list_single_number_heading_pane_t2_ParamLimits

0xa268,	// (0x00063381) list_single_number_heading_pane_t2

0xdb99,	// (0x00066cb2) list_single_number_heading_pane_t3_ParamLimits

0xdb99,	// (0x00066cb2) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x000686cb) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x000686cb) list_single_number_heading_pane_t

0xdbab,	// (0x00066cc4) list_single_graphic_heading_pane_g1_ParamLimits

0xdbab,	// (0x00066cc4) list_single_graphic_heading_pane_g1

0xa27a,	// (0x00063393) list_single_graphic_heading_pane_g4_ParamLimits

0xa27a,	// (0x00063393) list_single_graphic_heading_pane_g4

0x2ab7,	// (0x0005bbd0) list_single_graphic_heading_pane_g5_ParamLimits

0x2ab7,	// (0x0005bbd0) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x000686d2) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x000686d2) list_single_graphic_heading_pane_g

0xdb83,	// (0x00066c9c) list_single_graphic_heading_pane_t1_ParamLimits

0xdb83,	// (0x00066c9c) list_single_graphic_heading_pane_t1

0xa28b,	// (0x000633a4) list_single_graphic_heading_pane_t2_ParamLimits

0xa28b,	// (0x000633a4) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x000686d9) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x000686d9) list_single_graphic_heading_pane_t

0x3978,	// (0x0005ca91) list_single_large_graphic_pane_g1_ParamLimits

0x3978,	// (0x0005ca91) list_single_large_graphic_pane_g1

0x2aab,	// (0x0005bbc4) list_single_large_graphic_pane_g2_ParamLimits

0x2aab,	// (0x0005bbc4) list_single_large_graphic_pane_g2

0x2ab7,	// (0x0005bbd0) list_single_large_graphic_pane_g3_ParamLimits

0x2ab7,	// (0x0005bbd0) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x000686de) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x000686de) list_single_large_graphic_pane_g

0x312a,	// (0x0005c243) wait_border_pane_g2_copy1

0xa29d,	// (0x000633b6) list_single_large_graphic_pane_g4_cp2

0xdbb7,	// (0x00066cd0) list_single_large_graphic_pane_t1_ParamLimits

0xdbb7,	// (0x00066cd0) list_single_large_graphic_pane_t1

0xa2a5,	// (0x000633be) list_double_pane_g1_ParamLimits

0xa2a5,	// (0x000633be) list_double_pane_g1

0xa2b1,	// (0x000633ca) list_double_pane_g2_ParamLimits

0xa2b1,	// (0x000633ca) list_double_pane_g2

0x0001,

0xf5cc,	// (0x000686e5) list_double_pane_g_ParamLimits

0xf5cc,	// (0x000686e5) list_double_pane_g

0xa2bd,	// (0x000633d6) list_double_pane_t1_ParamLimits

0xa2bd,	// (0x000633d6) list_double_pane_t1

0xa2d3,	// (0x000633ec) list_double_pane_t2_ParamLimits

0xa2d3,	// (0x000633ec) list_double_pane_t2

0x0001,

0xf5d1,	// (0x000686ea) list_double_pane_t_ParamLimits

0xf5d1,	// (0x000686ea) list_double_pane_t

0xa2e5,	// (0x000633fe) list_double2_pane_g1_ParamLimits

0xa2e5,	// (0x000633fe) list_double2_pane_g1

0xa2f6,	// (0x0006340f) list_double2_pane_g2_ParamLimits

0xa2f6,	// (0x0006340f) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x000686ef) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x000686ef) list_double2_pane_g

0xa302,	// (0x0006341b) list_double2_pane_t1_ParamLimits

0xa302,	// (0x0006341b) list_double2_pane_t1

0xa318,	// (0x00063431) list_double2_pane_t2_ParamLimits

0xa318,	// (0x00063431) list_double2_pane_t2

0x0001,

0xf5db,	// (0x000686f4) list_double2_pane_t_ParamLimits

0xf5db,	// (0x000686f4) list_double2_pane_t

0xa2a5,	// (0x000633be) list_double_number_pane_g1_ParamLimits

0xa2a5,	// (0x000633be) list_double_number_pane_g1

0xa2b1,	// (0x000633ca) list_double_number_pane_g2_ParamLimits

0xa2b1,	// (0x000633ca) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x000686e5) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x000686e5) list_double_number_pane_g

0xa32a,	// (0x00063443) list_double_number_pane_t1_ParamLimits

0xa32a,	// (0x00063443) list_double_number_pane_t1

0xa33c,	// (0x00063455) list_double_number_pane_t2_ParamLimits

0xa33c,	// (0x00063455) list_double_number_pane_t2

0xa352,	// (0x0006346b) list_double_number_pane_t3_ParamLimits

0xa352,	// (0x0006346b) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x000686f9) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x000686f9) list_double_number_pane_t

0xa364,	// (0x0006347d) list_double_graphic_pane_g1_ParamLimits

0xa364,	// (0x0006347d) list_double_graphic_pane_g1

0xa370,	// (0x00063489) list_double_graphic_pane_g2_ParamLimits

0xa370,	// (0x00063489) list_double_graphic_pane_g2

0xa37f,	// (0x00063498) list_double_graphic_pane_g3_ParamLimits

0xa37f,	// (0x00063498) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x00068700) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x00068700) list_double_graphic_pane_g

0xa397,	// (0x000634b0) list_double_graphic_pane_t1_ParamLimits

0xa397,	// (0x000634b0) list_double_graphic_pane_t1

0xa3ad,	// (0x000634c6) list_double_graphic_pane_t2_ParamLimits

0xa3ad,	// (0x000634c6) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x00068709) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x00068709) list_double_graphic_pane_t

0xa3bf,	// (0x000634d8) list_double2_graphic_pane_g1_ParamLimits

0xa3bf,	// (0x000634d8) list_double2_graphic_pane_g1

0x5959,	// (0x0005ea72) list_double2_graphic_pane_g2_ParamLimits

0x5959,	// (0x0005ea72) list_double2_graphic_pane_g2

0xa3cb,	// (0x000634e4) list_double2_graphic_pane_g3_ParamLimits

0xa3cb,	// (0x000634e4) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x0006870e) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x0006870e) list_double2_graphic_pane_g

0xa3d7,	// (0x000634f0) list_double2_graphic_pane_t1_ParamLimits

0xa3d7,	// (0x000634f0) list_double2_graphic_pane_t1

0xa3ed,	// (0x00063506) list_double2_graphic_pane_t2_ParamLimits

0xa3ed,	// (0x00063506) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x00068715) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x00068715) list_double2_graphic_pane_t

0xa3ff,	// (0x00063518) list_double_large_graphic_pane_g1_ParamLimits

0xa3ff,	// (0x00063518) list_double_large_graphic_pane_g1

0xa41e,	// (0x00063537) list_double_large_graphic_pane_g2_ParamLimits

0xa41e,	// (0x00063537) list_double_large_graphic_pane_g2

0xa2b1,	// (0x000633ca) list_double_large_graphic_pane_g3_ParamLimits

0xa2b1,	// (0x000633ca) list_double_large_graphic_pane_g3

0xa434,	// (0x0006354d) list_double_large_graphic_pane_g4_ParamLimits

0xa434,	// (0x0006354d) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x0006871a) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0006871a) list_double_large_graphic_pane_g

0xa447,	// (0x00063560) list_double_large_graphic_pane_t1_ParamLimits

0xa447,	// (0x00063560) list_double_large_graphic_pane_t1

0xa460,	// (0x00063579) list_double_large_graphic_pane_t2_ParamLimits

0xa460,	// (0x00063579) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x00068725) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x00068725) list_double_large_graphic_pane_t

0xa472,	// (0x0006358b) list_double2_large_graphic_pane_g1_ParamLimits

0xa472,	// (0x0006358b) list_double2_large_graphic_pane_g1

0xa47e,	// (0x00063597) list_double2_large_graphic_pane_g2_ParamLimits

0xa47e,	// (0x00063597) list_double2_large_graphic_pane_g2

0xa3cb,	// (0x000634e4) list_double2_large_graphic_pane_g3_ParamLimits

0xa3cb,	// (0x000634e4) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x0006872a) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x0006872a) list_double2_large_graphic_pane_g

0xa48f,	// (0x000635a8) list_double2_large_graphic_pane_t1_ParamLimits

0xa48f,	// (0x000635a8) list_double2_large_graphic_pane_t1

0xa4a5,	// (0x000635be) list_double2_large_graphic_pane_t2_ParamLimits

0xa4a5,	// (0x000635be) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x00068731) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x00068731) list_double2_large_graphic_pane_t

0xa4b7,	// (0x000635d0) list_double_heading_pane_g1_ParamLimits

0xa4b7,	// (0x000635d0) list_double_heading_pane_g1

0xa4c8,	// (0x000635e1) list_double_heading_pane_g2_ParamLimits

0xa4c8,	// (0x000635e1) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x00068736) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x00068736) list_double_heading_pane_g

0xa4d4,	// (0x000635ed) list_double_heading_pane_t1_ParamLimits

0xa4d4,	// (0x000635ed) list_double_heading_pane_t1

0xa4ea,	// (0x00063603) list_double_heading_pane_t2_ParamLimits

0xa4ea,	// (0x00063603) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x0006873b) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x0006873b) list_double_heading_pane_t

0xa4fc,	// (0x00063615) list_double_graphic_heading_pane_g1_ParamLimits

0xa4fc,	// (0x00063615) list_double_graphic_heading_pane_g1

0xa4b7,	// (0x000635d0) list_double_graphic_heading_pane_g2_ParamLimits

0xa4b7,	// (0x000635d0) list_double_graphic_heading_pane_g2

0xa4c8,	// (0x000635e1) list_double_graphic_heading_pane_g3_ParamLimits

0xa4c8,	// (0x000635e1) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x00068740) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x00068740) list_double_graphic_heading_pane_g

0xa508,	// (0x00063621) list_double_graphic_heading_pane_t1_ParamLimits

0xa508,	// (0x00063621) list_double_graphic_heading_pane_t1

0xa51e,	// (0x00063637) list_double_graphic_heading_pane_t2_ParamLimits

0xa51e,	// (0x00063637) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x00068747) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x00068747) list_double_graphic_heading_pane_t

0xa530,	// (0x00063649) list_double_time_pane_g1_ParamLimits

0xa530,	// (0x00063649) list_double_time_pane_g1

0xa541,	// (0x0006365a) list_double_time_pane_g2_ParamLimits

0xa541,	// (0x0006365a) list_double_time_pane_g2

0x0001,

0xf633,	// (0x0006874c) list_double_time_pane_g_ParamLimits

0xf633,	// (0x0006874c) list_double_time_pane_g

0xa54d,	// (0x00063666) list_double_time_pane_t1_ParamLimits

0xa54d,	// (0x00063666) list_double_time_pane_t1

0xa563,	// (0x0006367c) list_double_time_pane_t2_ParamLimits

0xa563,	// (0x0006367c) list_double_time_pane_t2

0xa575,	// (0x0006368e) list_double_time_pane_t3_ParamLimits

0xa575,	// (0x0006368e) list_double_time_pane_t3

0xa587,	// (0x000636a0) list_double_time_pane_t4_ParamLimits

0xa587,	// (0x000636a0) list_double_time_pane_t4

0x0003,

0xf638,	// (0x00068751) list_double_time_pane_t_ParamLimits

0xf638,	// (0x00068751) list_double_time_pane_t

0xa599,	// (0x000636b2) list_setting_pane_g1_ParamLimits

0xa599,	// (0x000636b2) list_setting_pane_g1

0xa5a5,	// (0x000636be) list_setting_pane_g2_ParamLimits

0xa5a5,	// (0x000636be) list_setting_pane_g2

0x0001,

0xf641,	// (0x0006875a) list_setting_pane_g_ParamLimits

0xf641,	// (0x0006875a) list_setting_pane_g

0xa5b1,	// (0x000636ca) list_setting_pane_t1_ParamLimits

0xa5b1,	// (0x000636ca) list_setting_pane_t1

0xa5cb,	// (0x000636e4) list_setting_pane_t2_ParamLimits

0xa5cb,	// (0x000636e4) list_setting_pane_t2

0x0002,

0xf646,	// (0x0006875f) list_setting_pane_t_ParamLimits

0xf646,	// (0x0006875f) list_setting_pane_t

0xa60a,	// (0x00063723) set_value_pane_cp_ParamLimits

0xa60a,	// (0x00063723) set_value_pane_cp

0xa618,	// (0x00063731) list_setting_number_pane_g1_ParamLimits

0xa618,	// (0x00063731) list_setting_number_pane_g1

0xa624,	// (0x0006373d) list_setting_number_pane_g2_ParamLimits

0xa624,	// (0x0006373d) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x00068766) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x00068766) list_setting_number_pane_g

0xa630,	// (0x00063749) list_setting_number_pane_t1_ParamLimits

0xa630,	// (0x00063749) list_setting_number_pane_t1

0xa649,	// (0x00063762) list_setting_number_pane_t2_ParamLimits

0xa649,	// (0x00063762) list_setting_number_pane_t2

0xa663,	// (0x0006377c) list_setting_number_pane_t3_ParamLimits

0xa663,	// (0x0006377c) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x0006876b) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x0006876b) list_setting_number_pane_t

0xa60a,	// (0x00063723) set_value_pane_ParamLimits

0xa60a,	// (0x00063723) set_value_pane

0x8f22,	// (0x0006203b) bg_set_opt_pane_ParamLimits

0x8f22,	// (0x0006203b) bg_set_opt_pane

0xdbcd,	// (0x00066ce6) set_value_pane_t1

0x8f43,	// (0x0006205c) slider_set_pane_cp3

0x8f4c,	// (0x00062065) volume_small_pane_cp

0x8f55,	// (0x0006206e) list_form_gen_pane

0x8f5e,	// (0x00062077) scroll_pane_cp8

0xa6a6,	// (0x000637bf) form_field_data_pane_ParamLimits

0xa6a6,	// (0x000637bf) form_field_data_pane

0xa6c3,	// (0x000637dc) form_field_data_wide_pane_ParamLimits

0xa6c3,	// (0x000637dc) form_field_data_wide_pane

0xa6e7,	// (0x00063800) form_field_popup_pane_ParamLimits

0xa6e7,	// (0x00063800) form_field_popup_pane

0xdbeb,	// (0x00066d04) form_field_popup_wide_pane_ParamLimits

0xdbeb,	// (0x00066d04) form_field_popup_wide_pane

0xdc0c,	// (0x00066d25) form_field_slider_pane_ParamLimits

0xdc0c,	// (0x00066d25) form_field_slider_pane

0xdc1f,	// (0x00066d38) form_field_slider_wide_pane_ParamLimits

0xdc1f,	// (0x00066d38) form_field_slider_wide_pane

0x8f6f,	// (0x00062088) data_form_pane

0xa713,	// (0x0006382c) form_field_data_pane_t1

0x8f7b,	// (0x00062094) input_focus_pane

0xdc32,	// (0x00066d4b) data_form_wide_pane

0xdc4f,	// (0x00066d68) form_field_data_wide_pane_t1

0x8cf6,	// (0x00061e0f) input_focus_pane_cp6

0xa72d,	// (0x00063846) form_field_popup_pane_t1

0x8f7b,	// (0x00062094) input_focus_pane_cp7

0x8fa9,	// (0x000620c2) list_form_pane

0xdc79,	// (0x00066d92) form_field_popup_wide_pane_t1

0x8f7b,	// (0x00062094) input_focus_pane_cp8

0x8fb5,	// (0x000620ce) list_form_wide_pane

0xa74f,	// (0x00063868) form_field_slider_pane_t1_ParamLimits

0xa74f,	// (0x00063868) form_field_slider_pane_t1

0xa767,	// (0x00063880) form_field_slider_pane_t2_ParamLimits

0xa767,	// (0x00063880) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x0006877b) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x0006877b) form_field_slider_pane_t

0x8a5e,	// (0x00061b77) input_focus_pane_cp9_ParamLimits

0x8a5e,	// (0x00061b77) input_focus_pane_cp9

0xa77c,	// (0x00063895) slider_cont_pane_ParamLimits

0xa77c,	// (0x00063895) slider_cont_pane

0x8fc1,	// (0x000620da) form_field_slider_wide_pane_t1_ParamLimits

0x8fc1,	// (0x000620da) form_field_slider_wide_pane_t1

0xdc8e,	// (0x00066da7) form_field_slider_wide_pane_t2_ParamLimits

0xdc8e,	// (0x00066da7) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x00068780) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x00068780) form_field_slider_wide_pane_t

0x8a5e,	// (0x00061b77) input_focus_pane_cp10_ParamLimits

0x8a5e,	// (0x00061b77) input_focus_pane_cp10

0xa790,	// (0x000638a9) slider_cont_pane_cp1_ParamLimits

0xa790,	// (0x000638a9) slider_cont_pane_cp1

0xa7a4,	// (0x000638bd) slider_form_pane_cp

0x8fd3,	// (0x000620ec) input_focus_pane_g1

0x8fdb,	// (0x000620f4) input_focus_pane_g2

0x8fe3,	// (0x000620fc) input_focus_pane_g3

0x8feb,	// (0x00062104) input_focus_pane_g4

0x8ff3,	// (0x0006210c) input_focus_pane_g5

0x8ffb,	// (0x00062114) input_focus_pane_g6

0x9003,	// (0x0006211c) input_focus_pane_g7

0x900b,	// (0x00062124) input_focus_pane_g8

0x9013,	// (0x0006212c) input_focus_pane_g9

0x88d3,	// (0x000619ec) input_focus_pane_g10

0x0009,

0xf66c,	// (0x00068785) input_focus_pane_g

0x3133,	// (0x0005c24c) wait_border_pane_g3_copy1

0xa7ac,	// (0x000638c5) data_form_pane_t1

0x88d3,	// (0x000619ec) wait_anim_pane_g1_copy1

0xb6d4,	// (0x000647ed) data_form_wide_pane_t1

0xdca0,	// (0x00066db9) list_form_graphic_pane_cp_ParamLimits

0xdca0,	// (0x00066db9) list_form_graphic_pane_cp

0x4278,	// (0x0005d391) slider_form_pane_g1

0x4281,	// (0x0005d39a) slider_form_pane_g2

0x0006,

0xf96a,	// (0x00068a83) slider_form_pane_g

0xa7c8,	// (0x000638e1) list_form_graphic_pane_ParamLimits

0xa7c8,	// (0x000638e1) list_form_graphic_pane

0xdcb2,	// (0x00066dcb) list_form_graphic_pane_g1

0xdcba,	// (0x00066dd3) list_form_graphic_pane_t1_ParamLimits

0xdcba,	// (0x00066dd3) list_form_graphic_pane_t1

0x892b,	// (0x00061a44) list_highlight_pane_cp5_ParamLimits

0x892b,	// (0x00061a44) list_highlight_pane_cp5

0xa7d9,	// (0x000638f2) find_pane_g1

0x901b,	// (0x00062134) input_find_pane

0xa7e2,	// (0x000638fb) input_find_pane_g1_ParamLimits

0xa7e2,	// (0x000638fb) input_find_pane_g1

0xa7ee,	// (0x00063907) input_find_pane_t1_ParamLimits

0xa7ee,	// (0x00063907) input_find_pane_t1

0xa803,	// (0x0006391c) input_find_pane_t2_ParamLimits

0xa803,	// (0x0006391c) input_find_pane_t2

0x0001,

0xf681,	// (0x0006879a) input_find_pane_t_ParamLimits

0xf681,	// (0x0006879a) input_find_pane_t

0x9024,	// (0x0006213d) input_focus_pane_cp5_ParamLimits

0x9024,	// (0x0006213d) input_focus_pane_cp5

0x9037,	// (0x00062150) bg_popup_window_pane_cp2_ParamLimits

0x9037,	// (0x00062150) bg_popup_window_pane_cp2

0x9044,	// (0x0006215d) listscroll_menu_pane_ParamLimits

0x9044,	// (0x0006215d) listscroll_menu_pane

0xa824,	// (0x0006393d) popup_submenu_window_ParamLimits

0xa824,	// (0x0006393d) popup_submenu_window

0x9050,	// (0x00062169) find_popup_pane_g1

0x9058,	// (0x00062171) input_popup_find_pane_cp

0x9062,	// (0x0006217b) input_focus_pane_cp4_ParamLimits

0x9062,	// (0x0006217b) input_focus_pane_cp4

0x9070,	// (0x00062189) input_popup_find_pane_t1_ParamLimits

0x9070,	// (0x00062189) input_popup_find_pane_t1

0x88dd,	// (0x000619f6) bg_popup_sub_pane_cp

0x909e,	// (0x000621b7) listscroll_popup_sub_pane

0x90a6,	// (0x000621bf) list_submenu_pane_ParamLimits

0x90a6,	// (0x000621bf) list_submenu_pane

0x90b7,	// (0x000621d0) scroll_pane_cp4

0x90bf,	// (0x000621d8) list_single_popup_submenu_pane_ParamLimits

0x90bf,	// (0x000621d8) list_single_popup_submenu_pane

0x90d4,	// (0x000621ed) list_single_popup_submenu_pane_g1

0x90dc,	// (0x000621f5) list_single_popup_submenu_pane_t1_ParamLimits

0x90dc,	// (0x000621f5) list_single_popup_submenu_pane_t1

0x8a5e,	// (0x00061b77) bg_active_tab_pane_cp1_ParamLimits

0x8a5e,	// (0x00061b77) bg_active_tab_pane_cp1

0xa862,	// (0x0006397b) tabs_2_active_pane_g1

0xa86a,	// (0x00063983) tabs_2_active_pane_t1

0x8a5e,	// (0x00061b77) bg_passive_tab_pane_cp1_ParamLimits

0x8a5e,	// (0x00061b77) bg_passive_tab_pane_cp1

0xa862,	// (0x0006397b) tabs_2_passive_pane_g1

0xa86a,	// (0x00063983) tabs_2_passive_pane_t1

0x892b,	// (0x00061a44) bg_active_tab_pane_cp4

0xa87c,	// (0x00063995) tabs_2_long_active_pane_t1

0x25d1,	// (0x0005b6ea) bg_passive_tab_pane_cp4

0x07a5,	// (0x000598be) list_single_midp_graphic_pane_g4_ParamLimits

0x892b,	// (0x00061a44) bg_active_tab_pane_cp5

0xa88f,	// (0x000639a8) tabs_3_long_active_pane_t1

0x25d1,	// (0x0005b6ea) bg_passive_tab_pane_cp5

0x07a5,	// (0x000598be) list_single_midp_graphic_pane_g4

0x892b,	// (0x00061a44) bg_popup_window_pane_cp13_ParamLimits

0x892b,	// (0x00061a44) bg_popup_window_pane_cp13

0x90fa,	// (0x00062213) listscroll_popup_fast_pane_ParamLimits

0x90fa,	// (0x00062213) listscroll_popup_fast_pane

0x9109,	// (0x00062222) grid_popup_fast_pane_ParamLimits

0x9109,	// (0x00062222) grid_popup_fast_pane

0x911b,	// (0x00062234) scroll_pane_cp9_ParamLimits

0x911b,	// (0x00062234) scroll_pane_cp9

0x5be7,	// (0x0005ed00) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5be7,	// (0x0005ed00) list_single_graphic_hl_pane_t1_cp2

0x913f,	// (0x00062258) input_focus_pane_cp20_ParamLimits

0x913f,	// (0x00062258) input_focus_pane_cp20

0x914d,	// (0x00062266) query_popup_data_pane_t1_ParamLimits

0x914d,	// (0x00062266) query_popup_data_pane_t1

0x9160,	// (0x00062279) query_popup_data_pane_t2_ParamLimits

0x9160,	// (0x00062279) query_popup_data_pane_t2

0x91a6,	// (0x000622bf) query_popup_data_pane_t3_ParamLimits

0x91a6,	// (0x000622bf) query_popup_data_pane_t3

0x91e7,	// (0x00062300) query_popup_data_pane_t4_ParamLimits

0x91e7,	// (0x00062300) query_popup_data_pane_t4

0xbf79,	// (0x00065092) query_popup_data_pane_t5_ParamLimits

0xbf79,	// (0x00065092) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x0006879f) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x0006879f) query_popup_data_pane_t

0x8fd3,	// (0x000620ec) bg_set_opt_pane_g1

0x8fdb,	// (0x000620f4) bg_set_opt_pane_g2

0x8fe3,	// (0x000620fc) bg_set_opt_pane_g3

0x8feb,	// (0x00062104) bg_set_opt_pane_g4

0x8ff3,	// (0x0006210c) bg_set_opt_pane_g5

0x8ffb,	// (0x00062114) bg_set_opt_pane_g6

0x9003,	// (0x0006211c) bg_set_opt_pane_g7

0x900b,	// (0x00062124) bg_set_opt_pane_g8

0x9013,	// (0x0006212c) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x000687aa) bg_set_opt_pane_g

0xf2fa,	// (0x00068413) control_top_pane_stacon_ParamLimits

0xf2fa,	// (0x00068413) control_top_pane_stacon

0xf34d,	// (0x00068466) signal_pane_stacon_ParamLimits

0xf34d,	// (0x00068466) signal_pane_stacon

0x1f3f,	// (0x0005b058) stacon_top_pane_g1_ParamLimits

0x1f3f,	// (0x0005b058) stacon_top_pane_g1

0xf372,	// (0x0006848b) title_pane_stacon_ParamLimits

0xf372,	// (0x0006848b) title_pane_stacon

0xf39c,	// (0x000684b5) uni_indicator_pane_stacon_ParamLimits

0xf39c,	// (0x000684b5) uni_indicator_pane_stacon

0xf3b1,	// (0x000684ca) battery_pane_stacon_ParamLimits

0xf3b1,	// (0x000684ca) battery_pane_stacon

0xf3f5,	// (0x0006850e) control_bottom_pane_stacon_ParamLimits

0xf3f5,	// (0x0006850e) control_bottom_pane_stacon

0xf418,	// (0x00068531) navi_pane_stacon_ParamLimits

0xf418,	// (0x00068531) navi_pane_stacon

0x1f61,	// (0x0005b07a) stacon_bottom_pane_g1_ParamLimits

0x1f61,	// (0x0005b07a) stacon_bottom_pane_g1

0xf050,	// (0x00068169) aid_levels_signal_lsc_ParamLimits

0xf050,	// (0x00068169) aid_levels_signal_lsc

0xf067,	// (0x00068180) signal_pane_stacon_g1_ParamLimits

0xf067,	// (0x00068180) signal_pane_stacon_g1

0xf07b,	// (0x00068194) signal_pane_stacon_g2_ParamLimits

0xf07b,	// (0x00068194) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x000687bd) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x000687bd) signal_pane_stacon_g

0xf0b0,	// (0x000681c9) title_pane_stacon_t1_ParamLimits

0xf0b0,	// (0x000681c9) title_pane_stacon_t1

0xbfbd,	// (0x000650d6) uni_indicator_pane_stacon_g1

0xbfc7,	// (0x000650e0) uni_indicator_pane_stacon_g2

0xbfd1,	// (0x000650ea) uni_indicator_pane_stacon_g3

0xbfdb,	// (0x000650f4) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x000687c9) uni_indicator_pane_stacon_g

0xf0d5,	// (0x000681ee) control_top_pane_stacon_g1

0xf0dd,	// (0x000681f6) control_top_pane_stacon_t1_ParamLimits

0xf0dd,	// (0x000681f6) control_top_pane_stacon_t1

0xf114,	// (0x0006822d) aid_levels_battery_lsc_ParamLimits

0xf114,	// (0x0006822d) aid_levels_battery_lsc

0xf12c,	// (0x00068245) battery_pane_stacon_g1_ParamLimits

0xf12c,	// (0x00068245) battery_pane_stacon_g1

0xf13e,	// (0x00068257) battery_pane_stacon_g2_ParamLimits

0xf13e,	// (0x00068257) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x000687d2) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x000687d2) battery_pane_stacon_g

0xf17c,	// (0x00068295) navi_icon_pane_stacon

0xf190,	// (0x000682a9) navi_navi_pane_stacon

0xf17c,	// (0x00068295) navi_text_pane_stacon

0xf1a6,	// (0x000682bf) control_bottom_pane_stacon_g1

0xf1ae,	// (0x000682c7) control_bottom_pane_stacon_t1_ParamLimits

0xf1ae,	// (0x000682c7) control_bottom_pane_stacon_t1

0xa8a1,	// (0x000639ba) grid_app_pane_ParamLimits

0xa8a1,	// (0x000639ba) grid_app_pane

0xa8d9,	// (0x000639f2) scroll_pane_cp15_ParamLimits

0xa8d9,	// (0x000639f2) scroll_pane_cp15

0xa8ee,	// (0x00063a07) cell_app_pane_ParamLimits

0xa8ee,	// (0x00063a07) cell_app_pane

0xa939,	// (0x00063a52) cell_app_pane_g1_ParamLimits

0xa939,	// (0x00063a52) cell_app_pane_g1

0xdccf,	// (0x00066de8) cell_app_pane_g2_ParamLimits

0xdccf,	// (0x00066de8) cell_app_pane_g2

0x0001,

0xf6be,	// (0x000687d7) cell_app_pane_g_ParamLimits

0xf6be,	// (0x000687d7) cell_app_pane_g

0xa95d,	// (0x00063a76) cell_app_pane_t1_ParamLimits

0xa95d,	// (0x00063a76) cell_app_pane_t1

0xdcdb,	// (0x00066df4) grid_highlight_pane_ParamLimits

0xdcdb,	// (0x00066df4) grid_highlight_pane

0x8fd3,	// (0x000620ec) cell_highlight_pane_g1

0x8fdb,	// (0x000620f4) cell_highlight_pane_g2

0x8fe3,	// (0x000620fc) cell_highlight_pane_g3

0x8feb,	// (0x00062104) cell_highlight_pane_g4

0x8ff3,	// (0x0006210c) cell_highlight_pane_g5

0x8ffb,	// (0x00062114) cell_highlight_pane_g6

0x9003,	// (0x0006211c) cell_highlight_pane_g7

0x900b,	// (0x00062124) cell_highlight_pane_g8

0x9013,	// (0x0006212c) cell_highlight_pane_g9

0x88d3,	// (0x000619ec) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x00068785) cell_highlight_pane_g

0xdcec,	// (0x00066e05) bg_scroll_pane

0xf1ef,	// (0x00068308) scroll_handle_pane

0xdd33,	// (0x00066e4c) scroll_bg_pane_g1

0xdd48,	// (0x00066e61) scroll_bg_pane_g2

0xdd60,	// (0x00066e79) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x000687dc) scroll_bg_pane_g

0xdd75,	// (0x00066e8e) scroll_handle_focus_pane_ParamLimits

0xdd75,	// (0x00066e8e) scroll_handle_focus_pane

0xdd33,	// (0x00066e4c) scroll_handle_pane_g1

0xdd82,	// (0x00066e9b) scroll_handle_pane_g2

0xdd60,	// (0x00066e79) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x000687e3) scroll_handle_pane_g

0x9062,	// (0x0006217b) bg_popup_sub_pane_cp21_ParamLimits

0x9062,	// (0x0006217b) bg_popup_sub_pane_cp21

0xdd96,	// (0x00066eaf) popup_fep_japan_predictive_window_t1_ParamLimits

0xdd96,	// (0x00066eaf) popup_fep_japan_predictive_window_t1

0xddad,	// (0x00066ec6) popup_fep_japan_predictive_window_t2_ParamLimits

0xddad,	// (0x00066ec6) popup_fep_japan_predictive_window_t2

0xdde0,	// (0x00066ef9) popup_fep_japan_predictive_window_t3_ParamLimits

0xdde0,	// (0x00066ef9) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x000687ea) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x000687ea) popup_fep_japan_predictive_window_t

0x88dd,	// (0x000619f6) bg_popup_sub_pane_cp23

0xde17,	// (0x00066f30) listscroll_japin_cand_pane

0xde1f,	// (0x00066f38) popup_fep_japan_candidate_window_t1

0xde2d,	// (0x00066f46) candidate_pane_ParamLimits

0xde2d,	// (0x00066f46) candidate_pane

0xde3f,	// (0x00066f58) scroll_pane_cp30

0xde49,	// (0x00066f62) list_single_popup_jap_candidate_pane_ParamLimits

0xde49,	// (0x00066f62) list_single_popup_jap_candidate_pane

0x88dd,	// (0x000619f6) list_highlight_pane_cp30

0xde5d,	// (0x00066f76) list_single_popup_jap_candidate_pane_t1

0xa997,	// (0x00063ab0) level_1_signal

0xa9a9,	// (0x00063ac2) level_2_signal

0xa9bc,	// (0x00063ad5) level_3_signal

0xa9cf,	// (0x00063ae8) level_4_signal

0xa9e2,	// (0x00063afb) level_5_signal

0xa9f5,	// (0x00063b0e) level_6_signal

0xaa08,	// (0x00063b21) level_7_signal

0xa997,	// (0x00063ab0) level_1_battery

0xa9a9,	// (0x00063ac2) level_2_battery

0xa9bc,	// (0x00063ad5) level_3_battery

0xa9cf,	// (0x00063ae8) level_4_battery

0xa9e2,	// (0x00063afb) level_5_battery

0xa9f5,	// (0x00063b0e) level_6_battery

0xaa08,	// (0x00063b21) level_7_battery

0xde84,	// (0x00066f9d) list_menu_pane_ParamLimits

0xde84,	// (0x00066f9d) list_menu_pane

0xde9a,	// (0x00066fb3) scroll_pane_cp25_ParamLimits

0xde9a,	// (0x00066fb3) scroll_pane_cp25

0xdeb3,	// (0x00066fcc) list_double2_graphic_pane_cp2_ParamLimits

0xdeb3,	// (0x00066fcc) list_double2_graphic_pane_cp2

0xdeb3,	// (0x00066fcc) list_double2_large_graphic_pane_cp2_ParamLimits

0xdeb3,	// (0x00066fcc) list_double2_large_graphic_pane_cp2

0xdeb3,	// (0x00066fcc) list_double2_pane_cp2_ParamLimits

0xdeb3,	// (0x00066fcc) list_double2_pane_cp2

0xdeb3,	// (0x00066fcc) list_double_graphic_pane_cp2_ParamLimits

0xdeb3,	// (0x00066fcc) list_double_graphic_pane_cp2

0xdeb3,	// (0x00066fcc) list_double_large_graphic_pane_cp2_ParamLimits

0xdeb3,	// (0x00066fcc) list_double_large_graphic_pane_cp2

0xdeb3,	// (0x00066fcc) list_double_number_pane_cp2_ParamLimits

0xdeb3,	// (0x00066fcc) list_double_number_pane_cp2

0xdeb3,	// (0x00066fcc) list_double_pane_cp2_ParamLimits

0xdeb3,	// (0x00066fcc) list_double_pane_cp2

0xaa1b,	// (0x00063b34) list_single_2graphic_pane_cp2_ParamLimits

0xaa1b,	// (0x00063b34) list_single_2graphic_pane_cp2

0xaa1b,	// (0x00063b34) list_single_graphic_heading_pane_cp2_ParamLimits

0xaa1b,	// (0x00063b34) list_single_graphic_heading_pane_cp2

0xaa1b,	// (0x00063b34) list_single_graphic_pane_cp2_ParamLimits

0xaa1b,	// (0x00063b34) list_single_graphic_pane_cp2

0xaa1b,	// (0x00063b34) list_single_heading_pane_cp2_ParamLimits

0xaa1b,	// (0x00063b34) list_single_heading_pane_cp2

0xdec3,	// (0x00066fdc) list_single_large_graphic_pane_cp2_ParamLimits

0xdec3,	// (0x00066fdc) list_single_large_graphic_pane_cp2

0xaa1b,	// (0x00063b34) list_single_number_heading_pane_cp2_ParamLimits

0xaa1b,	// (0x00063b34) list_single_number_heading_pane_cp2

0xaa1b,	// (0x00063b34) list_single_number_pane_cp2_ParamLimits

0xaa1b,	// (0x00063b34) list_single_number_pane_cp2

0xaa2f,	// (0x00063b48) list_single_pane_cp2_ParamLimits

0xaa2f,	// (0x00063b48) list_single_pane_cp2

0xdedc,	// (0x00066ff5) bg_popup_sub_pane_cp22

0xf2a1,	// (0x000683ba) popup_side_volume_key_window_g1

0xf2cb,	// (0x000683e4) popup_side_volume_key_window_t1

0xf2e9,	// (0x00068402) volume_small_pane_cp1

0x8a5e,	// (0x00061b77) bg_popup_sub_pane_cp24_ParamLimits

0x8a5e,	// (0x00061b77) bg_popup_sub_pane_cp24

0xdef2,	// (0x0006700b) fep_china_uni_candidate_pane_ParamLimits

0xdef2,	// (0x0006700b) fep_china_uni_candidate_pane

0xdf06,	// (0x0006701f) fep_china_uni_entry_pane

0xdf16,	// (0x0006702f) popup_fep_china_uni_window_g1

0xdf32,	// (0x0006704b) fep_china_uni_entry_pane_g1

0xdf3c,	// (0x00067055) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x0006881b) fep_china_uni_entry_pane_g

0xdf46,	// (0x0006705f) fep_entry_item_pane

0xdf50,	// (0x00067069) fep_candidate_item_pane

0xdf58,	// (0x00067071) fep_china_uni_candidate_pane_g1

0xdf62,	// (0x0006707b) fep_china_uni_candidate_pane_g2

0xdf6a,	// (0x00067083) fep_china_uni_candidate_pane_g3

0xdf72,	// (0x0006708b) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x00068820) fep_china_uni_candidate_pane_g

0x88d3,	// (0x000619ec) fep_entry_item_pane_g1

0xdf7c,	// (0x00067095) fep_entry_item_pane_t1_ParamLimits

0xdf7c,	// (0x00067095) fep_entry_item_pane_t1

0xdf92,	// (0x000670ab) fep_candidate_item_pane_t1_ParamLimits

0xdf92,	// (0x000670ab) fep_candidate_item_pane_t1

0xdfa7,	// (0x000670c0) fep_candidate_item_pane_t2_ParamLimits

0xdfa7,	// (0x000670c0) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x00068829) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x00068829) fep_candidate_item_pane_t

0x892b,	// (0x00061a44) list_highlight_pane_cp31_ParamLimits

0x892b,	// (0x00061a44) list_highlight_pane_cp31

0xdfb9,	// (0x000670d2) level_1_signal_lsc

0xdfc2,	// (0x000670db) level_2_signal_lsc

0xdfcb,	// (0x000670e4) level_3_signal_lsc

0xdfd4,	// (0x000670ed) level_4_signal_lsc

0xdfdd,	// (0x000670f6) level_5_signal_lsc

0xdfe6,	// (0x000670ff) level_6_signal_lsc

0xdfef,	// (0x00067108) level_7_signal_lsc

0xdfef,	// (0x00067108) level_1_battery_lsc

0xdff8,	// (0x00067111) level_2_battery_lsc

0xe001,	// (0x0006711a) level_3_battery_lsc

0xe00a,	// (0x00067123) level_4_battery_lsc

0xe013,	// (0x0006712c) level_5_battery_lsc

0xe01c,	// (0x00067135) level_6_battery_lsc

0xdfb9,	// (0x000670d2) level_7_battery_lsc

0xe025,	// (0x0006713e) scroll_handle_focus_pane_g1

0xe02e,	// (0x00067147) scroll_handle_focus_pane_g2

0xe037,	// (0x00067150) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x0006882e) scroll_handle_focus_pane_g

0xaabe,	// (0x00063bd7) list_single_2graphic_pane_g1_ParamLimits

0xaabe,	// (0x00063bd7) list_single_2graphic_pane_g1

0xa27a,	// (0x00063393) list_single_2graphic_pane_g2_ParamLimits

0xa27a,	// (0x00063393) list_single_2graphic_pane_g2

0x2ab7,	// (0x0005bbd0) list_single_2graphic_pane_g3_ParamLimits

0x2ab7,	// (0x0005bbd0) list_single_2graphic_pane_g3

0xaaca,	// (0x00063be3) list_single_2graphic_pane_g4_ParamLimits

0xaaca,	// (0x00063be3) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x00068835) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x00068835) list_single_2graphic_pane_g

0xaadb,	// (0x00063bf4) list_single_2graphic_pane_t1_ParamLimits

0xaadb,	// (0x00063bf4) list_single_2graphic_pane_t1

0xab09,	// (0x00063c22) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xab09,	// (0x00063c22) list_double2_graphic_large_graphic_pane_g1

0xa47e,	// (0x00063597) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa47e,	// (0x00063597) list_double2_graphic_large_graphic_pane_g2

0xa3cb,	// (0x000634e4) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa3cb,	// (0x000634e4) list_double2_graphic_large_graphic_pane_g3

0xab1b,	// (0x00063c34) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xab1b,	// (0x00063c34) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x0006883e) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x0006883e) list_double2_graphic_large_graphic_pane_g

0xab27,	// (0x00063c40) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xab27,	// (0x00063c40) list_double2_graphic_large_graphic_pane_t1

0xab3d,	// (0x00063c56) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xab3d,	// (0x00063c56) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x00068847) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x00068847) list_double2_graphic_large_graphic_pane_t

0x2024,	// (0x0005b13d) popup_fast_swap_window_ParamLimits

0x2024,	// (0x0005b13d) popup_fast_swap_window

0x2042,	// (0x0005b15b) popup_side_volume_key_window

0x2060,	// (0x0005b179) stacon_top_pane

0x206a,	// (0x0005b183) status_pane_ParamLimits

0x206a,	// (0x0005b183) status_pane

0x88c9,	// (0x000619e2) status_small_pane

0x88dd,	// (0x000619f6) control_pane

0x88dd,	// (0x000619f6) stacon_bottom_pane

0x8f5e,	// (0x00062077) scroll_pane_cp121

0x8f55,	// (0x0006206e) set_content_pane

0xab4f,	// (0x00063c68) bg_active_tab_pane_g1_cp1

0xf2f1,	// (0x0006840a) bg_active_tab_pane_g2_cp1

0xab58,	// (0x00063c71) bg_active_tab_pane_g3_cp1

0xab4f,	// (0x00063c68) bg_passive_tab_pane_g1_cp1

0xf2f1,	// (0x0006840a) bg_passive_tab_pane_g2_cp1

0xab58,	// (0x00063c71) bg_passive_tab_pane_g3_cp1

0xab61,	// (0x00063c7a) bg_active_tab_pane_g1_cp2

0xf2f1,	// (0x0006840a) bg_active_tab_pane_g2_cp2

0xab6a,	// (0x00063c83) bg_active_tab_pane_g3_cp2

0xab61,	// (0x00063c7a) bg_passive_tab_pane_g1_cp2

0xf2f1,	// (0x0006840a) bg_passive_tab_pane_g2_cp2

0xab6a,	// (0x00063c83) bg_passive_tab_pane_g3_cp2

0xab73,	// (0x00063c8c) bg_active_tab_pane_g1_cp3

0xf2f1,	// (0x0006840a) bg_active_tab_pane_g2_cp3

0xab7c,	// (0x00063c95) bg_active_tab_pane_g3_cp3

0xab73,	// (0x00063c8c) bg_passive_tab_pane_g1_cp3

0xf2f1,	// (0x0006840a) bg_passive_tab_pane_g2_cp3

0xab7c,	// (0x00063c95) bg_passive_tab_pane_g3_cp3

0xab85,	// (0x00063c9e) bg_active_tab_pane_g1_cp4

0xf2f1,	// (0x0006840a) bg_active_tab_pane_g2_cp4

0xab8e,	// (0x00063ca7) bg_active_tab_pane_g3_cp4

0xab85,	// (0x00063c9e) bg_passive_tab_pane_g1_cp4

0xf2f1,	// (0x0006840a) bg_passive_tab_pane_g2_cp4

0xab8e,	// (0x00063ca7) bg_passive_tab_pane_g3_cp4

0x1f7d,	// (0x0005b096) bg_active_tab_pane_g1_cp5

0xf2f1,	// (0x0006840a) bg_active_tab_pane_g2_cp5

0x1f86,	// (0x0005b09f) bg_active_tab_pane_g3_cp5

0x1f7d,	// (0x0005b096) bg_passive_tab_pane_g1_cp5

0xf2f1,	// (0x0006840a) bg_passive_tab_pane_g2_cp5

0x1f86,	// (0x0005b09f) bg_passive_tab_pane_g3_cp5

0x488f,	// (0x0005d9a8) list_set_graphic_pane_ParamLimits

0x488f,	// (0x0005d9a8) list_set_graphic_pane

0x88dd,	// (0x000619f6) bg_set_opt_pane_cp4

0x1fa5,	// (0x0005b0be) list_set_graphic_pane_g1_ParamLimits

0x1fa5,	// (0x0005b0be) list_set_graphic_pane_g1

0x1fb1,	// (0x0005b0ca) list_set_graphic_pane_g2_ParamLimits

0x1fb1,	// (0x0005b0ca) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x0006884c) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x0006884c) list_set_graphic_pane_g

0x0009,

0xfabd,	// (0x00068bd6) volume_small_pane_cp_g

0x1fd5,	// (0x0005b0ee) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x1fd5,	// (0x0005b0ee) list_double2_large_graphic_pane_g1_cp2

0x1fe3,	// (0x0005b0fc) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x1fe3,	// (0x0005b0fc) list_double2_large_graphic_pane_g2_cp2

0x1ff4,	// (0x0005b10d) list_double2_large_graphic_pane_g3_cp2

0x1ffc,	// (0x0005b115) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x1ffc,	// (0x0005b115) list_double2_large_graphic_pane_t1_cp2

0x2012,	// (0x0005b12b) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2012,	// (0x0005b12b) list_double2_large_graphic_pane_t2_cp2

0x3e05,	// (0x0005cf1e) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x3e05,	// (0x0005cf1e) list_double_large_graphic_pane_g1_cp2

0x3e18,	// (0x0005cf31) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3e18,	// (0x0005cf31) list_double_large_graphic_pane_g2_cp2

0x217c,	// (0x0005b295) list_double_large_graphic_pane_g3_cp2

0x3e29,	// (0x0005cf42) list_double_large_graphic_pane_g4_cp

0x3e31,	// (0x0005cf4a) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3e31,	// (0x0005cf4a) list_double_large_graphic_pane_t1_cp2

0x3e48,	// (0x0005cf61) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3e48,	// (0x0005cf61) list_double_large_graphic_pane_t2_cp2

0x2078,	// (0x0005b191) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2078,	// (0x0005b191) list_double2_graphic_pane_g1_cp2

0x2086,	// (0x0005b19f) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2086,	// (0x0005b19f) list_double2_graphic_pane_g2_cp2

0x2097,	// (0x0005b1b0) list_double2_graphic_pane_g3_cp2

0x20a1,	// (0x0005b1ba) list_double2_graphic_pane_t1_cp2_ParamLimits

0x20a1,	// (0x0005b1ba) list_double2_graphic_pane_t1_cp2

0x20b7,	// (0x0005b1d0) list_double2_graphic_pane_t2_cp2_ParamLimits

0x20b7,	// (0x0005b1d0) list_double2_graphic_pane_t2_cp2

0x1f33,	// (0x0005b04c) list_single_number_heading_pane_g1_cp2_ParamLimits

0x1f33,	// (0x0005b04c) list_single_number_heading_pane_g1_cp2

0x20c9,	// (0x0005b1e2) list_single_number_heading_pane_g2_cp2

0x20d1,	// (0x0005b1ea) list_single_number_heading_pane_t1_cp2_ParamLimits

0x20d1,	// (0x0005b1ea) list_single_number_heading_pane_t1_cp2

0x20e7,	// (0x0005b200) list_single_number_heading_pane_t2_cp2_ParamLimits

0x20e7,	// (0x0005b200) list_single_number_heading_pane_t2_cp2

0x20fb,	// (0x0005b214) list_single_number_heading_pane_t3_cp2_ParamLimits

0x20fb,	// (0x0005b214) list_single_number_heading_pane_t3_cp2

0x1f33,	// (0x0005b04c) list_single_heading_pane_g1_cp2_ParamLimits

0x1f33,	// (0x0005b04c) list_single_heading_pane_g1_cp2

0x20c9,	// (0x0005b1e2) list_single_heading_pane_g2_cp2

0x20d1,	// (0x0005b1ea) list_single_heading_pane_t1_cp2_ParamLimits

0x20d1,	// (0x0005b1ea) list_single_heading_pane_t1_cp2

0x3bff,	// (0x0005cd18) list_single_heading_pane_t2_cp2_ParamLimits

0x3bff,	// (0x0005cd18) list_single_heading_pane_t2_cp2

0x3b47,	// (0x0005cc60) list_double_graphic_pane_g1_cp2_ParamLimits

0x3b47,	// (0x0005cc60) list_double_graphic_pane_g1_cp2

0x3b53,	// (0x0005cc6c) list_double_graphic_pane_g2_cp2_ParamLimits

0x3b53,	// (0x0005cc6c) list_double_graphic_pane_g2_cp2

0x3b62,	// (0x0005cc7b) list_double_graphic_pane_g3_cp2

0x3b6a,	// (0x0005cc83) list_double_graphic_pane_t1_cp2_ParamLimits

0x3b6a,	// (0x0005cc83) list_double_graphic_pane_t1_cp2

0x3b80,	// (0x0005cc99) list_double_graphic_pane_t2_cp2_ParamLimits

0x3b80,	// (0x0005cc99) list_double_graphic_pane_t2_cp2

0x2170,	// (0x0005b289) list_double_number_pane_g1_cp2_ParamLimits

0x2170,	// (0x0005b289) list_double_number_pane_g1_cp2

0x217c,	// (0x0005b295) list_double_number_pane_g2_cp2

0x3b0b,	// (0x0005cc24) list_double_number_pane_t1_cp2_ParamLimits

0x3b0b,	// (0x0005cc24) list_double_number_pane_t1_cp2

0x3b1f,	// (0x0005cc38) list_double_number_pane_t2_cp2_ParamLimits

0x3b1f,	// (0x0005cc38) list_double_number_pane_t2_cp2

0x3b35,	// (0x0005cc4e) list_double_number_pane_t3_cp2_ParamLimits

0x3b35,	// (0x0005cc4e) list_double_number_pane_t3_cp2

0x3806,	// (0x0005c91f) list_single_graphic_pane_g1_cp2_ParamLimits

0x3806,	// (0x0005c91f) list_single_graphic_pane_g1_cp2

0x21e1,	// (0x0005b2fa) list_single_graphic_pane_g2_cp2_ParamLimits

0x21e1,	// (0x0005b2fa) list_single_graphic_pane_g2_cp2

0x21ed,	// (0x0005b306) list_single_graphic_pane_g3_cp2

0x37dc,	// (0x0005c8f5) list_single_graphic_pane_t1_cp2_ParamLimits

0x37dc,	// (0x0005c8f5) list_single_graphic_pane_t1_cp2

0x21e1,	// (0x0005b2fa) list_single_number_pane_g1_cp2_ParamLimits

0x21e1,	// (0x0005b2fa) list_single_number_pane_g1_cp2

0x21ed,	// (0x0005b306) list_single_number_pane_g2_cp2

0x37dc,	// (0x0005c8f5) list_single_number_pane_t1_cp2_ParamLimits

0x37dc,	// (0x0005c8f5) list_single_number_pane_t1_cp2

0x37f2,	// (0x0005c90b) list_single_number_pane_t2_cp2_ParamLimits

0x37f2,	// (0x0005c90b) list_single_number_pane_t2_cp2

0x1fe3,	// (0x0005b0fc) list_double2_pane_g1_cp2_ParamLimits

0x1fe3,	// (0x0005b0fc) list_double2_pane_g1_cp2

0x1ff4,	// (0x0005b10d) list_double2_pane_g2_cp2

0x2148,	// (0x0005b261) list_double2_pane_t1_cp2_ParamLimits

0x2148,	// (0x0005b261) list_double2_pane_t1_cp2

0x215e,	// (0x0005b277) list_double2_pane_t2_cp2_ParamLimits

0x215e,	// (0x0005b277) list_double2_pane_t2_cp2

0x2170,	// (0x0005b289) list_double_pane_g1_cp2_ParamLimits

0x2170,	// (0x0005b289) list_double_pane_g1_cp2

0x217c,	// (0x0005b295) list_double_pane_g2_cp2

0x2184,	// (0x0005b29d) list_double_pane_t1_cp2_ParamLimits

0x2184,	// (0x0005b29d) list_double_pane_t1_cp2

0x219a,	// (0x0005b2b3) list_double_pane_t2_cp2_ParamLimits

0x219a,	// (0x0005b2b3) list_double_pane_t2_cp2

0x21d1,	// (0x0005b2ea) list_single_pane_cp2_g3

0x21e1,	// (0x0005b2fa) list_single_pane_g1_cp2_ParamLimits

0x21e1,	// (0x0005b2fa) list_single_pane_g1_cp2

0x21ed,	// (0x0005b306) list_single_pane_g2_cp2

0x21f5,	// (0x0005b30e) list_single_pane_t1_cp2_ParamLimits

0x21f5,	// (0x0005b30e) list_single_pane_t1_cp2

0x220d,	// (0x0005b326) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x220d,	// (0x0005b326) list_single_large_graphic_pane_g1_cp2

0x221b,	// (0x0005b334) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x221b,	// (0x0005b334) list_single_large_graphic_pane_g2_cp2

0x2227,	// (0x0005b340) list_single_large_graphic_pane_g3_cp2

0x222f,	// (0x0005b348) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x222f,	// (0x0005b348) list_single_large_graphic_pane_g4_cp1

0x2249,	// (0x0005b362) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2249,	// (0x0005b362) list_single_large_graphic_pane_t1_cp2

0x37a6,	// (0x0005c8bf) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x37a6,	// (0x0005c8bf) list_single_graphic_heading_pane_g1_cp2

0x3773,	// (0x0005c88c) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x3773,	// (0x0005c88c) list_single_graphic_heading_pane_g4_cp2

0x21ed,	// (0x0005b306) list_single_graphic_heading_pane_g5_cp2

0x37b2,	// (0x0005c8cb) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x37b2,	// (0x0005c8cb) list_single_graphic_heading_pane_t1_cp2

0x37c8,	// (0x0005c8e1) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x37c8,	// (0x0005c8e1) list_single_graphic_heading_pane_t2_cp2

0x3767,	// (0x0005c880) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3767,	// (0x0005c880) list_single_2graphic_pane_g1_cp2

0x3773,	// (0x0005c88c) list_single_2graphic_pane_g2_cp2_ParamLimits

0x3773,	// (0x0005c88c) list_single_2graphic_pane_g2_cp2

0x21ed,	// (0x0005b306) list_single_2graphic_pane_g3_cp2

0x3784,	// (0x0005c89d) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3784,	// (0x0005c89d) list_single_2graphic_pane_g4_cp2

0x3790,	// (0x0005c8a9) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3790,	// (0x0005c8a9) list_single_2graphic_pane_t1_cp2

0x88d3,	// (0x000619ec) list_highlight_pane_g10_cp1

0x333f,	// (0x0005c458) list_highlight_pane_g1_cp1

0x3347,	// (0x0005c460) list_highlight_pane_g2_cp1

0x334f,	// (0x0005c468) list_highlight_pane_g3_cp1

0x3357,	// (0x0005c470) list_highlight_pane_g4_cp1

0x335f,	// (0x0005c478) list_highlight_pane_g5_cp1

0x3367,	// (0x0005c480) list_highlight_pane_g6_cp1

0x336f,	// (0x0005c488) list_highlight_pane_g7_cp1

0x3377,	// (0x0005c490) list_highlight_pane_g8_cp1

0x337f,	// (0x0005c498) list_highlight_pane_g9_cp1

0xc4b2,	// (0x000655cb) form_field_slider_pane_t3

0xc4c0,	// (0x000655d9) form_field_slider_pane_t4

0x327b,	// (0x0005c394) slider_form_pane_ParamLimits

0x327b,	// (0x0005c394) slider_form_pane

0x88dd,	// (0x000619f6) control_abbreviations

0x88dd,	// (0x000619f6) control_conventions

0x88dd,	// (0x000619f6) control_definitions

0x88dd,	// (0x000619f6) format_table_attribute

0x3c55,	// (0x0005cd6e) bg_popup_preview_window_pane_g9

0x88dd,	// (0x000619f6) format_table_data2

0x88dd,	// (0x000619f6) format_table_data3

0x88dd,	// (0x000619f6) format_table_data_example

0x0008,

0x88dd,	// (0x000619f6) intro_purpose

0xf8ca,	// (0x000689e3) bg_popup_preview_window_pane_g

0x88dd,	// (0x000619f6) texts_category

0x88dd,	// (0x000619f6) texts_graphics

0x225f,	// (0x0005b378) text_digital

0x226e,	// (0x0005b387) text_primary

0x227d,	// (0x0005b396) text_primary_small

0x228c,	// (0x0005b3a5) text_secondary

0x229b,	// (0x0005b3b4) text_title

0x43b8,	// (0x0005d4d1) bg_passive_tab_pane_g1_cp3_srt

0xf2f1,	// (0x0006840a) bg_passive_tab_pane_g2_cp3_srt

0x43c1,	// (0x0005d4da) bg_passive_tab_pane_g3_cp3_srt

0x8a5e,	// (0x00061b77) bg_active_tab_pane_cp3_srt_ParamLimits

0x8a5e,	// (0x00061b77) bg_active_tab_pane_cp3_srt

0x43ca,	// (0x0005d4e3) tabs_4_active_pane_srt_g1

0xc8c3,	// (0x000659dc) tabs_4_active_pane_srt_t1_ParamLimits

0xc8c3,	// (0x000659dc) tabs_4_active_pane_srt_t1

0x43b8,	// (0x0005d4d1) bg_active_tab_pane_g1_cp3_copy1

0xf2f1,	// (0x0006840a) bg_active_tab_pane_g2_cp3_copy1

0x43c1,	// (0x0005d4da) bg_active_tab_pane_g3_cp3_copy1

0x892b,	// (0x00061a44) tabs_2_long_active_pane_srt_ParamLimits

0x892b,	// (0x00061a44) tabs_2_long_active_pane_srt

0x892b,	// (0x00061a44) tabs_2_long_passive_pane_srt_ParamLimits

0x892b,	// (0x00061a44) tabs_2_long_passive_pane_srt

0x25d1,	// (0x0005b6ea) bg_passive_tab_pane_cp4_srt_ParamLimits

0x25d1,	// (0x0005b6ea) bg_passive_tab_pane_cp4_srt

0x408f,	// (0x0005d1a8) bg_passive_tab_pane_g1_cp4_srt

0xf2f1,	// (0x0006840a) bg_passive_tab_pane_g2_cp4_srt

0x4098,	// (0x0005d1b1) bg_passive_tab_pane_g3_cp4_srt

0x892b,	// (0x00061a44) bg_active_tab_pane_cp4_srt_ParamLimits

0x892b,	// (0x00061a44) bg_active_tab_pane_cp4_srt

0xc692,	// (0x000657ab) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc692,	// (0x000657ab) tabs_2_long_active_pane_srt_t1

0x408f,	// (0x0005d1a8) bg_active_tab_pane_g1_cp4_srt

0xf2f1,	// (0x0006840a) bg_active_tab_pane_g2_cp4_srt

0x4098,	// (0x0005d1b1) bg_active_tab_pane_g3_cp4_srt

0x8a5e,	// (0x00061b77) tabs_3_long_active_pane_srt_ParamLimits

0x8a5e,	// (0x00061b77) tabs_3_long_active_pane_srt

0x8a5e,	// (0x00061b77) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8a5e,	// (0x00061b77) tabs_3_long_passive_pane_cp_srt

0x8a5e,	// (0x00061b77) tabs_3_long_passive_pane_srt_ParamLimits

0x8a5e,	// (0x00061b77) tabs_3_long_passive_pane_srt

0x25d1,	// (0x0005b6ea) bg_passive_tab_pane_cp5_srt_ParamLimits

0x25d1,	// (0x0005b6ea) bg_passive_tab_pane_cp5_srt

0x1f7d,	// (0x0005b096) bg_passive_tab_pane_g1_cp5_srt

0xf2f1,	// (0x0006840a) bg_passive_tab_pane_g2_cp5_srt

0x1f86,	// (0x0005b09f) bg_passive_tab_pane_g3_cp5_srt

0x892b,	// (0x00061a44) bg_active_tab_pane_cp5_srt_ParamLimits

0x892b,	// (0x00061a44) bg_active_tab_pane_cp5_srt

0xc67c,	// (0x00065795) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc67c,	// (0x00065795) tabs_3_long_active_pane_srt_t1

0x1f7d,	// (0x0005b096) bg_active_tab_pane_g1_cp5_srt

0xf2f1,	// (0x0006840a) bg_active_tab_pane_g2_cp5_srt

0x1f86,	// (0x0005b09f) bg_active_tab_pane_g3_cp5_srt

0x406f,	// (0x0005d188) navi_text_pane_srt_t1

0x4067,	// (0x0005d180) navi_icon_pane_srt_g1

0x2473,	// (0x0005b58c) midp_editing_number_pane_srt

0x22aa,	// (0x0005b3c3) midp_ticker_pane_srt

0x247b,	// (0x0005b594) midp_ticker_pane_srt_g1

0x2483,	// (0x0005b59c) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x0006886b) midp_ticker_pane_srt_g

0x248b,	// (0x0005b5a4) midp_ticker_pane_srt_t1

0x4058,	// (0x0005d171) midp_editing_number_pane_t1_copy1

0xab97,	// (0x00063cb0) listscroll_midp_pane

0xab97,	// (0x00063cb0) midp_form_pane

0x2321,	// (0x0005b43a) midp_info_popup_window_ParamLimits

0x2321,	// (0x0005b43a) midp_info_popup_window

0x9062,	// (0x0006217b) bg_popup_sub_pane_cp50_ParamLimits

0x9062,	// (0x0006217b) bg_popup_sub_pane_cp50

0x2f61,	// (0x0005c07a) listscroll_midp_info_pane_ParamLimits

0x2f61,	// (0x0005c07a) listscroll_midp_info_pane

0x2f41,	// (0x0005c05a) listscroll_form_midp_pane_ParamLimits

0x2f41,	// (0x0005c05a) listscroll_form_midp_pane

0x2f4d,	// (0x0005c066) scroll_bar_cp050

0x2f41,	// (0x0005c05a) list_midp_pane

0x4e6c,	// (0x0005df85) signal_pane_g2_cp

0x2e5b,	// (0x0005bf74) listscroll_midp_info_pane_t1_ParamLimits

0x2e5b,	// (0x0005bf74) listscroll_midp_info_pane_t1

0x2e73,	// (0x0005bf8c) listscroll_midp_info_pane_t2_ParamLimits

0x2e73,	// (0x0005bf8c) listscroll_midp_info_pane_t2

0x2eb1,	// (0x0005bfca) listscroll_midp_info_pane_t3_ParamLimits

0x2eb1,	// (0x0005bfca) listscroll_midp_info_pane_t3

0x2eeb,	// (0x0005c004) listscroll_midp_info_pane_t4_ParamLimits

0x2eeb,	// (0x0005c004) listscroll_midp_info_pane_t4

0x0003,

0xf805,	// (0x0006891e) listscroll_midp_info_pane_t_ParamLimits

0xf805,	// (0x0006891e) listscroll_midp_info_pane_t

0x90b7,	// (0x000621d0) scroll_pane_cp21

0x2df5,	// (0x0005bf0e) form_midp_field_choice_group_pane

0x2dfe,	// (0x0005bf17) form_midp_field_text_pane

0x2e41,	// (0x0005bf5a) form_midp_field_time_pane

0x2e49,	// (0x0005bf62) form_midp_gauge_slider_pane

0x2e52,	// (0x0005bf6b) form_midp_gauge_wait_pane

0x88dd,	// (0x000619f6) form_midp_image_pane

0xb565,	// (0x0006467e) list_single_midp_pane_ParamLimits

0xb565,	// (0x0006467e) list_single_midp_pane

0xc48d,	// (0x000655a6) form_midp_field_text_pane_t1

0x2bab,	// (0x0005bcc4) input_focus_pane_cp050

0x2de4,	// (0x0005befd) list_midp_form_text_pane

0x2d88,	// (0x0005bea1) form_midp_field_choice_group_pane_t1

0x2d96,	// (0x0005beaf) input_focus_pane_cp051

0x2daa,	// (0x0005bec3) list_midp_choice_pane

0x88dd,	// (0x000619f6) status_idle_pane

0x2d6c,	// (0x0005be85) form_midp_field_time_pane_t1

0x88d3,	// (0x000619ec) wait_anim_pane_g2_copy1

0x2d7a,	// (0x0005be93) form_midp_field_time_pane_t2

0x0001,

0x23d1,	// (0x0005b4ea) aid_navinavi_width_2_pane

0xf800,	// (0x00068919) form_midp_field_time_pane_t

0x88dd,	// (0x000619f6) input_focus_pane_cp052

0x88dd,	// (0x000619f6) bg_input_focus_pane_cp040

0x2d2c,	// (0x0005be45) form_midp_gauge_slider_pane_t1

0x2d3a,	// (0x0005be53) form_midp_gauge_slider_pane_t2

0xc471,	// (0x0006558a) form_midp_gauge_slider_pane_t3

0xc47f,	// (0x00065598) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f7,	// (0x00068910) form_midp_gauge_slider_pane_t

0x2d64,	// (0x0005be7d) form_midp_slider_pane

0x892b,	// (0x00061a44) bg_input_focus_pane_cp041_ParamLimits

0x892b,	// (0x00061a44) bg_input_focus_pane_cp041

0x2cf9,	// (0x0005be12) form_midp_gauge_wait_pane_t1_ParamLimits

0x2cf9,	// (0x0005be12) form_midp_gauge_wait_pane_t1

0x2d0b,	// (0x0005be24) form_midp_gauge_wait_pane_t2_ParamLimits

0x2d0b,	// (0x0005be24) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f2,	// (0x0006890b) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f2,	// (0x0006890b) form_midp_gauge_wait_pane_t

0x2d1d,	// (0x0005be36) form_midp_wait_pane_ParamLimits

0x2d1d,	// (0x0005be36) form_midp_wait_pane

0x2cc1,	// (0x0005bdda) form_midp_image_pane_g1

0x2cca,	// (0x0005bde3) form_midp_image_pane_t1

0x2cd9,	// (0x0005bdf2) form_midp_image_pane_t2

0x2ce8,	// (0x0005be01) form_midp_image_pane_t3

0x0002,

0xf7eb,	// (0x00068904) form_midp_image_pane_t

0x2cb8,	// (0x0005bdd1) list_single_midp_pane_g1

0xe0f6,	// (0x0006720f) list_single_midp_pane_t1

0xc45a,	// (0x00065573) list_midp_form_item_pane_ParamLimits

0xc45a,	// (0x00065573) list_midp_form_item_pane

0x2379,	// (0x0005b492) list_midp_form_item_pane_t1

0x2388,	// (0x0005b4a1) midp_ticker_pane_g1

0x2394,	// (0x0005b4ad) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x00068851) midp_ticker_pane_g

0xac3b,	// (0x00063d54) midp_ticker_pane_t1

0xc81b,	// (0x00065934) midp_editing_number_pane_t1

0x42a3,	// (0x0005d3bc) midp_editing_number_pane

0x42b2,	// (0x0005d3cb) midp_ticker_pane

0x4048,	// (0x0005d161) ai_message_heading_pane

0x88dd,	// (0x000619f6) bg_popup_window_pane_cp14

0x4050,	// (0x0005d169) listscroll_ai_message_pane

0x3fce,	// (0x0005d0e7) ai_message_heading_pane_g1_ParamLimits

0x3fce,	// (0x0005d0e7) ai_message_heading_pane_g1

0x3fda,	// (0x0005d0f3) ai_message_heading_pane_g2_ParamLimits

0x3fda,	// (0x0005d0f3) ai_message_heading_pane_g2

0x3fe8,	// (0x0005d101) ai_message_heading_pane_g3_ParamLimits

0x3fe8,	// (0x0005d101) ai_message_heading_pane_g3

0x3ff4,	// (0x0005d10d) ai_message_heading_pane_g4_ParamLimits

0x3ff4,	// (0x0005d10d) ai_message_heading_pane_g4

0x0003,

0xf92c,	// (0x00068a45) ai_message_heading_pane_g_ParamLimits

0xf92c,	// (0x00068a45) ai_message_heading_pane_g

0x4000,	// (0x0005d119) ai_message_heading_pane_t1_ParamLimits

0x4000,	// (0x0005d119) ai_message_heading_pane_t1

0x401a,	// (0x0005d133) ai_message_heading_pane_t2_ParamLimits

0x401a,	// (0x0005d133) ai_message_heading_pane_t2

0x0001,

0xf935,	// (0x00068a4e) ai_message_heading_pane_t_ParamLimits

0xf935,	// (0x00068a4e) ai_message_heading_pane_t

0x402e,	// (0x0005d147) bg_popup_heading_pane_cp1_ParamLimits

0x402e,	// (0x0005d147) bg_popup_heading_pane_cp1

0x3fbc,	// (0x0005d0d5) list_ai_message_pane_ParamLimits

0x3fbc,	// (0x0005d0d5) list_ai_message_pane

0x90b7,	// (0x000621d0) scroll_pane_cp10

0x3f58,	// (0x0005d071) list_ai_message_pane_g1

0x3f60,	// (0x0005d079) list_ai_message_pane_g2

0x0001,

0xf909,	// (0x00068a22) list_ai_message_pane_g

0x3f68,	// (0x0005d081) list_ai_message_pane_t1_ParamLimits

0x3f68,	// (0x0005d081) list_ai_message_pane_t1

0x3f7d,	// (0x0005d096) list_ai_message_pane_t2_ParamLimits

0x3f7d,	// (0x0005d096) list_ai_message_pane_t2

0x3f92,	// (0x0005d0ab) list_ai_message_pane_t3_ParamLimits

0x3f92,	// (0x0005d0ab) list_ai_message_pane_t3

0x3fa7,	// (0x0005d0c0) list_ai_message_pane_t4_ParamLimits

0x3fa7,	// (0x0005d0c0) list_ai_message_pane_t4

0x0003,

0xf90e,	// (0x00068a27) list_ai_message_pane_t_ParamLimits

0xf90e,	// (0x00068a27) list_ai_message_pane_t

0xc662,	// (0x0006577b) cell_ai_soft_ind_pane_ParamLimits

0xc662,	// (0x0006577b) cell_ai_soft_ind_pane

0x23b2,	// (0x0005b4cb) cell_ai_soft_ind_pane_g1_ParamLimits

0x23b2,	// (0x0005b4cb) cell_ai_soft_ind_pane_g1

0x88dd,	// (0x000619f6) grid_highlight_cp1

0x23bf,	// (0x0005b4d8) text_secondary_cp56_ParamLimits

0x23bf,	// (0x0005b4d8) text_secondary_cp56

0x3f16,	// (0x0005d02f) example_general_pane_ParamLimits

0x3f16,	// (0x0005d02f) example_general_pane

0x3f22,	// (0x0005d03b) example_parent_pane_g1_ParamLimits

0x3f22,	// (0x0005d03b) example_parent_pane_g1

0x3f2e,	// (0x0005d047) example_parent_pane_t1_ParamLimits

0x3f2e,	// (0x0005d047) example_parent_pane_t1

0xb1b1,	// (0x000642ca) popup_preview_text_window_ParamLimits

0xb1b1,	// (0x000642ca) popup_preview_text_window

0x21d9,	// (0x0005b2f2) list_single_pane_cp2_g4

0x8b3a,	// (0x00061c53) bg_popup_preview_window_pane_ParamLimits

0x8b3a,	// (0x00061c53) bg_popup_preview_window_pane

0x3c5f,	// (0x0005cd78) popup_preview_text_window_t1_ParamLimits

0x3c5f,	// (0x0005cd78) popup_preview_text_window_t1

0x3c7d,	// (0x0005cd96) popup_preview_text_window_t2_ParamLimits

0x3c7d,	// (0x0005cd96) popup_preview_text_window_t2

0x3cc6,	// (0x0005cddf) popup_preview_text_window_t3_ParamLimits

0x3cc6,	// (0x0005cddf) popup_preview_text_window_t3

0x3d0b,	// (0x0005ce24) popup_preview_text_window_t4_ParamLimits

0x3d0b,	// (0x0005ce24) popup_preview_text_window_t4

0x0004,

0xf8dd,	// (0x000689f6) popup_preview_text_window_t_ParamLimits

0xf8dd,	// (0x000689f6) popup_preview_text_window_t

0x3d89,	// (0x0005cea2) scroll_pane_cp11

0x2b1f,	// (0x0005bc38) bg_popup_preview_window_pane_g1

0x3c13,	// (0x0005cd2c) bg_popup_preview_window_pane_g2

0x3c1d,	// (0x0005cd36) bg_popup_preview_window_pane_g3

0x3c27,	// (0x0005cd40) bg_popup_preview_window_pane_g4

0x3c31,	// (0x0005cd4a) bg_popup_preview_window_pane_g5

0x3c3b,	// (0x0005cd54) bg_popup_preview_window_pane_g6

0x3c43,	// (0x0005cd5c) bg_popup_preview_window_pane_g7

0x3c4b,	// (0x0005cd64) bg_popup_preview_window_pane_g8

0xed6b,	// (0x00067e84) aid_popup_width_pane

0xb121,	// (0x0006423a) popup_midp_note_alarm_window_ParamLimits

0xb121,	// (0x0006423a) popup_midp_note_alarm_window

0x8f6f,	// (0x00062088) data_form_pane_ParamLimits

0xa709,	// (0x00063822) form_field_data_pane_g1

0xa713,	// (0x0006382c) form_field_data_pane_t1_ParamLimits

0x8f7b,	// (0x00062094) input_focus_pane_ParamLimits

0xdc32,	// (0x00066d4b) data_form_wide_pane_ParamLimits

0xdc43,	// (0x00066d5c) form_field_data_wide_pane_g1

0xdc4f,	// (0x00066d68) form_field_data_wide_pane_t1_ParamLimits

0x8cf6,	// (0x00061e0f) input_focus_pane_cp6_ParamLimits

0xa854,	// (0x0006396d) input_popup_find_pane_g1_ParamLimits

0xa854,	// (0x0006396d) input_popup_find_pane_g1

0xf14f,	// (0x00068268) aid_navi_side_left_pane

0xf164,	// (0x0006827d) aid_navi_side_right_pane

0x343a,	// (0x0005c553) bg_popup_window_pane_cp30_ParamLimits

0x343a,	// (0x0005c553) bg_popup_window_pane_cp30

0x34b4,	// (0x0005c5cd) popup_midp_note_alarm_window_g1_ParamLimits

0x34b4,	// (0x0005c5cd) popup_midp_note_alarm_window_g1

0x34e4,	// (0x0005c5fd) popup_midp_note_alarm_window_t1_ParamLimits

0x34e4,	// (0x0005c5fd) popup_midp_note_alarm_window_t1

0x3585,	// (0x0005c69e) popup_midp_note_alarm_window_t2_ParamLimits

0x3585,	// (0x0005c69e) popup_midp_note_alarm_window_t2

0x3633,	// (0x0005c74c) popup_midp_note_alarm_window_t3_ParamLimits

0x3633,	// (0x0005c74c) popup_midp_note_alarm_window_t3

0x3665,	// (0x0005c77e) popup_midp_note_alarm_window_t4_ParamLimits

0x3665,	// (0x0005c77e) popup_midp_note_alarm_window_t4

0x368b,	// (0x0005c7a4) popup_midp_note_alarm_window_t5_ParamLimits

0x368b,	// (0x0005c7a4) popup_midp_note_alarm_window_t5

0x000a,

0xf87a,	// (0x00068993) popup_midp_note_alarm_window_t_ParamLimits

0xf87a,	// (0x00068993) popup_midp_note_alarm_window_t

0x3737,	// (0x0005c850) wait_bar_pane_cp1_ParamLimits

0x3737,	// (0x0005c850) wait_bar_pane_cp1

0x88dd,	// (0x000619f6) wait_anim_pane_copy1

0x88dd,	// (0x000619f6) wait_border_pane_copy1

0x311f,	// (0x0005c238) wait_border_pane_g1_copy1

0xdc69,	// (0x00066d82) form_field_popup_pane_g1

0xa72d,	// (0x00063846) form_field_popup_pane_t1_ParamLimits

0x8f7b,	// (0x00062094) input_focus_pane_cp7_ParamLimits

0x8fa9,	// (0x000620c2) list_form_pane_ParamLimits

0xdc71,	// (0x00066d8a) form_field_popup_wide_pane_g1

0xdc79,	// (0x00066d92) form_field_popup_wide_pane_t1_ParamLimits

0x8f7b,	// (0x00062094) input_focus_pane_cp8_ParamLimits

0x8fb5,	// (0x000620ce) list_form_wide_pane_ParamLimits

0x4453,	// (0x0005d56c) aid_size_cell_graphic_pane

0xa7ac,	// (0x000638c5) data_form_pane_t1_ParamLimits

0xb6d4,	// (0x000647ed) data_form_wide_pane_t1_ParamLimits

0xc0c1,	// (0x000651da) bg_status_flat_pane

0x9e8c,	// (0x00062fa5) title_pane_t1_ParamLimits

0x88f3,	// (0x00061a0c) title_pane_t2_ParamLimits

0x8919,	// (0x00061a32) title_pane_t3_ParamLimits

0xf532,	// (0x0006864b) title_pane_t_ParamLimits

0xa997,	// (0x00063ab0) level_1_signal_ParamLimits

0xa9a9,	// (0x00063ac2) level_2_signal_ParamLimits

0xa9bc,	// (0x00063ad5) level_3_signal_ParamLimits

0xa9cf,	// (0x00063ae8) level_4_signal_ParamLimits

0xa9e2,	// (0x00063afb) level_5_signal_ParamLimits

0xa9f5,	// (0x00063b0e) level_6_signal_ParamLimits

0xaa08,	// (0x00063b21) level_7_signal_ParamLimits

0xa997,	// (0x00063ab0) level_1_battery_ParamLimits

0xa9a9,	// (0x00063ac2) level_2_battery_ParamLimits

0xa9bc,	// (0x00063ad5) level_3_battery_ParamLimits

0xa9cf,	// (0x00063ae8) level_4_battery_ParamLimits

0xa9e2,	// (0x00063afb) level_5_battery_ParamLimits

0xa9f5,	// (0x00063b0e) level_6_battery_ParamLimits

0xaa08,	// (0x00063b21) level_7_battery_ParamLimits

0x333f,	// (0x0005c458) bg_status_flat_pane_g1

0x3347,	// (0x0005c460) bg_status_flat_pane_g2

0x334f,	// (0x0005c468) bg_status_flat_pane_g3

0x3357,	// (0x0005c470) bg_status_flat_pane_g4

0x335f,	// (0x0005c478) bg_status_flat_pane_g5

0x3367,	// (0x0005c480) bg_status_flat_pane_g6

0x336f,	// (0x0005c488) bg_status_flat_pane_g7

0x9f20,	// (0x00063039) tabs_3_active_pane_t1_ParamLimits

0x9f20,	// (0x00063039) tabs_3_passive_pane_t1_ParamLimits

0x9f3a,	// (0x00063053) tabs_4_active_pane_t1_ParamLimits

0x9f3a,	// (0x00063053) tabs_4_1_passive_pane_t1_ParamLimits

0xa86a,	// (0x00063983) tabs_2_active_pane_t1_ParamLimits

0xa86a,	// (0x00063983) tabs_2_passive_pane_t1_ParamLimits

0x892b,	// (0x00061a44) bg_active_tab_pane_cp4_ParamLimits

0xa87c,	// (0x00063995) tabs_2_long_active_pane_t1_ParamLimits

0x25d1,	// (0x0005b6ea) bg_passive_tab_pane_cp4_ParamLimits

0x07d8,	// (0x000598f1) list_single_midp_graphic_pane_t1_ParamLimits

0x892b,	// (0x00061a44) bg_active_tab_pane_cp5_ParamLimits

0xa88f,	// (0x000639a8) tabs_3_long_active_pane_t1_ParamLimits

0x25d1,	// (0x0005b6ea) bg_passive_tab_pane_cp5_ParamLimits

0x07d8,	// (0x000598f1) list_single_midp_graphic_pane_t1

0xc0c1,	// (0x000651da) bg_status_flat_pane_ParamLimits

0x278b,	// (0x0005b8a4) indicator_pane_cp2_ParamLimits

0x278b,	// (0x0005b8a4) indicator_pane_cp2

0xc257,	// (0x00065370) navi_pane_srt_ParamLimits

0xc257,	// (0x00065370) navi_pane_srt

0x28f2,	// (0x0005ba0b) popup_clock_digital_analogue_window_cp1

0x896f,	// (0x00061a88) indicator_pane_t1

0x22aa,	// (0x0005b3c3) copy_highlight_pane

0x22aa,	// (0x0005b3c3) cursor_graphics_pane

0x22aa,	// (0x0005b3c3) graphic_within_text_pane

0x22aa,	// (0x0005b3c3) link_highlight_pane

0x3d4c,	// (0x0005ce65) popup_preview_text_window_t5_ParamLimits

0x3d4c,	// (0x0005ce65) popup_preview_text_window_t5

0x23db,	// (0x0005b4f4) cursor_digital_pane

0x23db,	// (0x0005b4f4) cursor_primary_pane

0x23ec,	// (0x0005b505) cursor_primary_small_pane

0x23f4,	// (0x0005b50d) cursor_secondary_pane

0x23fc,	// (0x0005b515) cursor_title_pane

0x23db,	// (0x0005b4f4) link_highlight_digital_pane

0x23e3,	// (0x0005b4fc) link_highlight_primary_pane

0x23ec,	// (0x0005b505) link_highlight_primary_small_pane

0x23f4,	// (0x0005b50d) link_highlight_secondary_pane

0x23fc,	// (0x0005b515) link_highlight_title_pane

0x23db,	// (0x0005b4f4) copy_highlight_digital_pane

0x23db,	// (0x0005b4f4) copy_highlight_primary_pane

0x23ec,	// (0x0005b505) copy_highlight_primary_small_pane

0x23f4,	// (0x0005b50d) copy_highlight_secondary_pane

0x23fc,	// (0x0005b515) copy_highlight_title_pane

0x23f4,	// (0x0005b50d) graphic_text_digital_pane

0x33dd,	// (0x0005c4f6) graphic_text_primary_pane

0x33e6,	// (0x0005c4ff) graphic_text_primary_small_pane

0x23ec,	// (0x0005b505) graphic_text_secondary_pane

0x23db,	// (0x0005b4f4) graphic_text_title_pane

0xac4d,	// (0x00063d66) cursor_primary_pane_g1

0x33cf,	// (0x0005c4e8) cursor_text_primary_t1

0xc4e2,	// (0x000655fb) cursor_primary_small_pane_g1

0x33c1,	// (0x0005c4da) cursor_text_primary_small_t1

0xc4d8,	// (0x000655f1) cursor_primary_small_pane_g1_copy1

0x33a9,	// (0x0005c4c2) cursor_text_primary_small_t1_copy1

0x3387,	// (0x0005c4a0) cursor_text_title_t1

0xc4ce,	// (0x000655e7) cursor_title_pane_g1

0xac4d,	// (0x00063d66) cursor_digital_pane_g1

0x240e,	// (0x0005b527) cursor_text_digital_t1

0x241c,	// (0x0005b535) link_highlight_primary_pane_g1

0x3330,	// (0x0005c449) link_highlight_primary_pane_t1

0x241c,	// (0x0005b535) link_highlight_primary_small_pane_g1

0x2424,	// (0x0005b53d) link_highlight_primary_small_pane_t1

0x2433,	// (0x0005b54c) link_highlight_secondary_pane_g1

0x243b,	// (0x0005b554) link_highlight_secondary_pane_t1

0x32a4,	// (0x0005c3bd) link_highlight_title_pane_g1

0x32ac,	// (0x0005c3c5) link_highlight_title_pane_t1

0x328d,	// (0x0005c3a6) link_highlight_digital_pane_g1

0x3295,	// (0x0005c3ae) link_highlight_digital_pane_t1

0x3155,	// (0x0005c26e) copy_highlight_primary_pane_g1

0x316c,	// (0x0005c285) copy_highlight_primary_pane_t1

0x3155,	// (0x0005c26e) copy_highlight_primary_small_pane_g1

0x315d,	// (0x0005c276) copy_highlight_primary_small_pane_t1

0x244a,	// (0x0005b563) copy_highlight_secondary_pane_g1

0x2452,	// (0x0005b56b) copy_highlight_secondary_pane_t1

0x313e,	// (0x0005c257) copy_highlight_title_pane_g1

0x3146,	// (0x0005c25f) copy_highlight_title_pane_t1

0x3155,	// (0x0005c26e) copy_highlight_digital_pane_g1

0x4625,	// (0x0005d73e) copy_highlight_digital_pane_t1

0x4579,	// (0x0005d692) graphic_text_primary_pane_g1

0x4609,	// (0x0005d722) graphic_text_primary_pane_t1

0x4617,	// (0x0005d730) graphic_text_primary_pane_t2

0x0001,

0xf9a9,	// (0x00068ac2) graphic_text_primary_pane_t

0x45e5,	// (0x0005d6fe) graphic_text_primary_small_pane_g1

0x45ed,	// (0x0005d706) graphic_text_primary_small_pane_t1

0x45fb,	// (0x0005d714) graphic_text_primary_small_pane_t2

0x0001,

0xf9a4,	// (0x00068abd) graphic_text_primary_small_pane_t

0x45c1,	// (0x0005d6da) graphic_text_secondary_pane_g1

0x45c9,	// (0x0005d6e2) graphic_text_secondary_pane_t1

0x45d7,	// (0x0005d6f0) graphic_text_secondary_pane_t2

0x0001,

0xf99f,	// (0x00068ab8) graphic_text_secondary_pane_t

0x459d,	// (0x0005d6b6) graphic_text_title_pane_g1

0x45a5,	// (0x0005d6be) graphic_text_title_pane_t1

0x45b3,	// (0x0005d6cc) graphic_text_title_pane_t2

0x0001,

0xf99a,	// (0x00068ab3) graphic_text_title_pane_t

0x4579,	// (0x0005d692) graphic_text_digital_pane_g1

0x4581,	// (0x0005d69a) graphic_text_digital_pane_t1

0x458f,	// (0x0005d6a8) graphic_text_digital_pane_t2

0x0001,

0xf995,	// (0x00068aae) graphic_text_digital_pane_t

0x892b,	// (0x00061a44) navi_icon_pane_srt_ParamLimits

0x892b,	// (0x00061a44) navi_icon_pane_srt

0x88dd,	// (0x000619f6) navi_midp_pane_srt

0x88dd,	// (0x000619f6) navi_navi_pane_srt

0x892b,	// (0x00061a44) navi_text_pane_srt_ParamLimits

0x892b,	// (0x00061a44) navi_text_pane_srt

0x4544,	// (0x0005d65d) navi_navi_icon_text_pane_srt

0x454c,	// (0x0005d665) navi_navi_pane_srt_g1_ParamLimits

0x454c,	// (0x0005d665) navi_navi_pane_srt_g1

0x455e,	// (0x0005d677) navi_navi_pane_srt_g2_ParamLimits

0x455e,	// (0x0005d677) navi_navi_pane_srt_g2

0x0001,

0xf990,	// (0x00068aa9) navi_navi_pane_srt_g_ParamLimits

0xf990,	// (0x00068aa9) navi_navi_pane_srt_g

0x4570,	// (0x0005d689) navi_navi_tabs_pane_srt

0x4544,	// (0x0005d65d) navi_navi_text_pane_srt

0x4544,	// (0x0005d65d) navi_navi_volume_pane_srt

0x4535,	// (0x0005d64e) navi_navi_text_pane_srt_t1

0x0c2f,	// (0x00059d48) navi_navi_volume_pane_srt_g1

0x0c37,	// (0x00059d50) volume_small_pane_srt_ParamLimits

0x0c37,	// (0x00059d50) volume_small_pane_srt

0xf43b,	// (0x00068554) volume_small_pane_srt_g1_ParamLimits

0xf43b,	// (0x00068554) volume_small_pane_srt_g1

0xf44b,	// (0x00068564) volume_small_pane_srt_g2_ParamLimits

0xf44b,	// (0x00068564) volume_small_pane_srt_g2

0xf45c,	// (0x00068575) volume_small_pane_srt_g3_ParamLimits

0xf45c,	// (0x00068575) volume_small_pane_srt_g3

0xf46d,	// (0x00068586) volume_small_pane_srt_g4_ParamLimits

0xf46d,	// (0x00068586) volume_small_pane_srt_g4

0xf47e,	// (0x00068597) volume_small_pane_srt_g5_ParamLimits

0xf47e,	// (0x00068597) volume_small_pane_srt_g5

0xf48f,	// (0x000685a8) volume_small_pane_srt_g6_ParamLimits

0xf48f,	// (0x000685a8) volume_small_pane_srt_g6

0xf4a0,	// (0x000685b9) volume_small_pane_srt_g7_ParamLimits

0xf4a0,	// (0x000685b9) volume_small_pane_srt_g7

0xf4b1,	// (0x000685ca) volume_small_pane_srt_g8_ParamLimits

0xf4b1,	// (0x000685ca) volume_small_pane_srt_g8

0xf4c2,	// (0x000685db) volume_small_pane_srt_g9_ParamLimits

0xf4c2,	// (0x000685db) volume_small_pane_srt_g9

0xf4d3,	// (0x000685ec) volume_small_pane_srt_g10_ParamLimits

0xf4d3,	// (0x000685ec) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x00068856) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x00068856) volume_small_pane_srt_g

0x8bef,	// (0x00061d08) query_popup_data_pane_cp2

0x451b,	// (0x0005d634) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x451b,	// (0x0005d634) navi_navi_icon_text_pane_srt_t1

0x33dd,	// (0x0005c4f6) navi_tabs_2_long_pane_srt

0x33dd,	// (0x0005c4f6) navi_tabs_2_pane_srt

0x33dd,	// (0x0005c4f6) navi_tabs_3_long_pane_srt

0x33dd,	// (0x0005c4f6) navi_tabs_3_pane_srt

0x33dd,	// (0x0005c4f6) navi_tabs_4_pane_srt

0x0c0f,	// (0x00059d28) tabs_2_active_pane_srt_ParamLimits

0x0c0f,	// (0x00059d28) tabs_2_active_pane_srt

0x0c1f,	// (0x00059d38) tabs_2_passive_pane_srt_ParamLimits

0x0c1f,	// (0x00059d38) tabs_2_passive_pane_srt

0x2bab,	// (0x0005bcc4) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2bab,	// (0x0005bcc4) bg_passive_tab_pane_cp1_srt

0x44e7,	// (0x0005d600) bg_passive_tab_pane_g1_cp1_srt

0xf2f1,	// (0x0006840a) bg_passive_tab_pane_g2_cp1_srt

0x44f0,	// (0x0005d609) bg_passive_tab_pane_g3_cp1_srt

0x8a5e,	// (0x00061b77) bg_active_tab_pane_cp1_srt_ParamLimits

0x8a5e,	// (0x00061b77) bg_active_tab_pane_cp1_srt

0x44f9,	// (0x0005d612) tabs_2_active_pane_srt_g1

0xc94b,	// (0x00065a64) tabs_2_active_pane_srt_t1_ParamLimits

0xc94b,	// (0x00065a64) tabs_2_active_pane_srt_t1

0x44e7,	// (0x0005d600) bg_active_tab_pane_g1_cp1_srt

0xf2f1,	// (0x0006840a) bg_active_tab_pane_g2_cp1_srt

0x44f0,	// (0x0005d609) bg_active_tab_pane_g3_cp1_srt

0x0bdc,	// (0x00059cf5) tabs_3_active_pane_srt_ParamLimits

0x0bdc,	// (0x00059cf5) tabs_3_active_pane_srt

0x0bed,	// (0x00059d06) tabs_3_passive_pane_cp_srt_ParamLimits

0x0bed,	// (0x00059d06) tabs_3_passive_pane_cp_srt

0x0bfe,	// (0x00059d17) tabs_3_passive_pane_srt_ParamLimits

0x0bfe,	// (0x00059d17) tabs_3_passive_pane_srt

0x2bab,	// (0x0005bcc4) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2bab,	// (0x0005bcc4) bg_passive_tab_pane_cp2_srt

0x2461,	// (0x0005b57a) bg_passive_tab_pane_g1_cp2_srt

0xf2f1,	// (0x0006840a) bg_passive_tab_pane_g2_cp2_srt

0x246a,	// (0x0005b583) bg_passive_tab_pane_g3_cp2_srt

0x8a5e,	// (0x00061b77) bg_active_tab_pane_cp2_srt_ParamLimits

0x8a5e,	// (0x00061b77) bg_active_tab_pane_cp2_srt

0x44cd,	// (0x0005d5e6) tabs_3_active_pane_srt_g1

0xc935,	// (0x00065a4e) tabs_3_active_pane_srt_t1_ParamLimits

0xc935,	// (0x00065a4e) tabs_3_active_pane_srt_t1

0x2461,	// (0x0005b57a) bg_active_tab_pane_g1_cp2_srt

0xf2f1,	// (0x0006840a) bg_active_tab_pane_g2_cp2_srt

0x246a,	// (0x0005b583) bg_active_tab_pane_g3_cp2_srt

0x0b94,	// (0x00059cad) tabs_4_active_pane_srt_ParamLimits

0x0b94,	// (0x00059cad) tabs_4_active_pane_srt

0x0ba6,	// (0x00059cbf) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0ba6,	// (0x00059cbf) tabs_4_passive_pane_cp2_srt

0x00f7,	// (0x00059210) aid_size_cell_toolbar

0x4102,	// (0x0005d21b) main_idle_act_pane_ParamLimits

0x02e2,	// (0x000593fb) popup_large_graphic_colour_window_ParamLimits

0xb477,	// (0x00064590) popup_toolbar_window_ParamLimits

0xb477,	// (0x00064590) popup_toolbar_window

0x42eb,	// (0x0005d404) list_single_graphic_2heading_pane_ParamLimits

0x42eb,	// (0x0005d404) list_single_graphic_2heading_pane

0xbfe5,	// (0x000650fe) aid_size_cell_apps_grid_lsc_pane

0xbff7,	// (0x00065110) aid_size_cell_apps_grid_prt_pane

0x25d1,	// (0x0005b6ea) bg_wml_button_pane_cp1_ParamLimits

0x25d1,	// (0x0005b6ea) bg_wml_button_pane_cp1

0xc48d,	// (0x000655a6) form_midp_field_text_pane_t1_ParamLimits

0x2bab,	// (0x0005bcc4) input_focus_pane_cp050_ParamLimits

0x2de4,	// (0x0005befd) list_midp_form_text_pane_ParamLimits

0x2d96,	// (0x0005beaf) input_focus_pane_cp051_ParamLimits

0x2daa,	// (0x0005bec3) list_midp_choice_pane_ParamLimits

0xc426,	// (0x0006553f) list_single_2graphic_pane_cp3_ParamLimits

0xc426,	// (0x0006553f) list_single_2graphic_pane_cp3

0xc439,	// (0x00065552) list_single_midp_graphic_pane_ParamLimits

0xc439,	// (0x00065552) list_single_midp_graphic_pane

0xefe4,	// (0x000680fd) list_single_graphic_2heading_pane_g1_ParamLimits

0xefe4,	// (0x000680fd) list_single_graphic_2heading_pane_g1

0xeff0,	// (0x00068109) list_single_graphic_2heading_pane_g4_ParamLimits

0xeff0,	// (0x00068109) list_single_graphic_2heading_pane_g4

0xeffc,	// (0x00068115) list_single_graphic_2heading_pane_g5_ParamLimits

0xeffc,	// (0x00068115) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x000688a9) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x000688a9) list_single_graphic_2heading_pane_g

0xf008,	// (0x00068121) list_single_graphic_2heading_pane_t1_ParamLimits

0xf008,	// (0x00068121) list_single_graphic_2heading_pane_t1

0xf01c,	// (0x00068135) list_single_graphic_2heading_pane_t2_ParamLimits

0xf01c,	// (0x00068135) list_single_graphic_2heading_pane_t2

0xf038,	// (0x00068151) list_single_graphic_2heading_pane_t3_ParamLimits

0xf038,	// (0x00068151) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x000688b0) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x000688b0) list_single_graphic_2heading_pane_t

0x2a45,	// (0x0005bb5e) bg_popup_sub_pane_cp2

0x2a6f,	// (0x0005bb88) grid_toobar_pane

0x0748,	// (0x00059861) cell_toolbar_pane_ParamLimits

0x0748,	// (0x00059861) cell_toolbar_pane

0x2ac3,	// (0x0005bbdc) cell_toolbar_pane_g1_ParamLimits

0x2ac3,	// (0x0005bbdc) cell_toolbar_pane_g1

0x2ad7,	// (0x0005bbf0) cell_toolbar_pane_g2_ParamLimits

0x2ad7,	// (0x0005bbf0) cell_toolbar_pane_g2

0x0001,

0xf7a5,	// (0x000688be) cell_toolbar_pane_g_ParamLimits

0xf7a5,	// (0x000688be) cell_toolbar_pane_g

0x2af9,	// (0x0005bc12) grid_highlight_pane_cp2_ParamLimits

0x2af9,	// (0x0005bc12) grid_highlight_pane_cp2

0x2b13,	// (0x0005bc2c) toolbar_button_pane

0x2b1f,	// (0x0005bc38) toolbar_button_pane_g1

0x2b27,	// (0x0005bc40) toolbar_button_pane_g2

0x2b2f,	// (0x0005bc48) toolbar_button_pane_g3

0x2b37,	// (0x0005bc50) toolbar_button_pane_g4

0x2b3f,	// (0x0005bc58) toolbar_button_pane_g5

0x2b47,	// (0x0005bc60) toolbar_button_pane_g6

0x2b4f,	// (0x0005bc68) toolbar_button_pane_g7

0x2b57,	// (0x0005bc70) toolbar_button_pane_g8

0x2b5f,	// (0x0005bc78) toolbar_button_pane_g9

0x0009,

0xf7aa,	// (0x000688c3) toolbar_button_pane_g

0x0780,	// (0x00059899) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0780,	// (0x00059899) list_single_2graphic_pane_g1_cp3

0xb4f3,	// (0x0006460c) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb4f3,	// (0x0006460c) list_single_2graphic_pane_g2_cp3

0x079d,	// (0x000598b6) list_single_2graphic_pane_g3_cp3

0x07a5,	// (0x000598be) list_single_2graphic_pane_g4_cp3_ParamLimits

0x07a5,	// (0x000598be) list_single_2graphic_pane_g4_cp3

0x07b1,	// (0x000598ca) list_single_2graphic_pane_t1_cp3_ParamLimits

0x07b1,	// (0x000598ca) list_single_2graphic_pane_t1_cp3

0x07cc,	// (0x000598e5) list_single_midp_graphic_pane_g2_ParamLimits

0x07cc,	// (0x000598e5) list_single_midp_graphic_pane_g2

0xefd4,	// (0x000680ed) aid_zoom_text_primary

0xefdc,	// (0x000680f5) aid_zoom_text_secondary

0x251b,	// (0x0005b634) status_small_pane_g7_ParamLimits

0x251b,	// (0x0005b634) status_small_pane_g7

0x253e,	// (0x0005b657) status_small_pane_t1_ParamLimits

0x9e5c,	// (0x00062f75) title_pane_g2

0x0003,

0xf529,	// (0x00068642) title_pane_g

0xa0fc,	// (0x00063215) aid_size_cell_colour_1_pane_ParamLimits

0xa0fc,	// (0x00063215) aid_size_cell_colour_1_pane

0xa110,	// (0x00063229) aid_size_cell_colour_2_pane_ParamLimits

0xa110,	// (0x00063229) aid_size_cell_colour_2_pane

0xa124,	// (0x0006323d) aid_size_cell_colour_3_pane_ParamLimits

0xa124,	// (0x0006323d) aid_size_cell_colour_3_pane

0xa138,	// (0x00063251) aid_size_cell_colour_4_pane_ParamLimits

0xa138,	// (0x00063251) aid_size_cell_colour_4_pane

0xf08c,	// (0x000681a5) title_pane_stacon_g1_ParamLimits

0xf08c,	// (0x000681a5) title_pane_stacon_g1

0x31c3,	// (0x0005c2dc) popup_note_wait_window_g3_ParamLimits

0x31c3,	// (0x0005c2dc) popup_note_wait_window_g3

0x323a,	// (0x0005c353) popup_note_wait_window_t5_ParamLimits

0x323a,	// (0x0005c353) popup_note_wait_window_t5

0x88dd,	// (0x000619f6) main_feb_china_hwr_fs_writing_pane

0xae08,	// (0x00063f21) popup_feb_china_hwr_fs_window_ParamLimits

0xae08,	// (0x00063f21) popup_feb_china_hwr_fs_window

0xb504,	// (0x0006461d) aid_size_cell_hwr_fs_ParamLimits

0xb504,	// (0x0006461d) aid_size_cell_hwr_fs

0x2bab,	// (0x0005bcc4) bg_popup_sub_pane_cp3_ParamLimits

0x2bab,	// (0x0005bcc4) bg_popup_sub_pane_cp3

0xb519,	// (0x00064632) grid_hwr_fs_pane_ParamLimits

0xb519,	// (0x00064632) grid_hwr_fs_pane

0x081b,	// (0x00059934) linegrid_hwr_fs_pane_ParamLimits

0x081b,	// (0x00059934) linegrid_hwr_fs_pane

0xb531,	// (0x0006464a) cell_hwr_fs_pane_ParamLimits

0xb531,	// (0x0006464a) cell_hwr_fs_pane

0x2bb7,	// (0x0005bcd0) linegrid_hwr_fs_pane_g1_ParamLimits

0x2bb7,	// (0x0005bcd0) linegrid_hwr_fs_pane_g1

0xc3fa,	// (0x00065513) linegrid_hwr_fs_pane_g2_ParamLimits

0xc3fa,	// (0x00065513) linegrid_hwr_fs_pane_g2

0x2bd5,	// (0x0005bcee) linegrid_hwr_fs_pane_g3_ParamLimits

0x2bd5,	// (0x0005bcee) linegrid_hwr_fs_pane_g3

0x084f,	// (0x00059968) linegrid_hwr_fs_pane_g4_ParamLimits

0x084f,	// (0x00059968) linegrid_hwr_fs_pane_g4

0x086d,	// (0x00059986) linegrid_hwr_fs_pane_g5_ParamLimits

0x086d,	// (0x00059986) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d0,	// (0x000688e9) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d0,	// (0x000688e9) linegrid_hwr_fs_pane_g

0x2be1,	// (0x0005bcfa) cell_hwr_fs_pane_g1_ParamLimits

0x2be1,	// (0x0005bcfa) cell_hwr_fs_pane_g1

0x2980,	// (0x0005ba99) cell_hwr_fs_pane_g2_ParamLimits

0x2980,	// (0x0005ba99) cell_hwr_fs_pane_g2

0xc40c,	// (0x00065525) cell_hwr_fs_pane_g3_ParamLimits

0xc40c,	// (0x00065525) cell_hwr_fs_pane_g3

0xc419,	// (0x00065532) cell_hwr_fs_pane_g4_ParamLimits

0xc419,	// (0x00065532) cell_hwr_fs_pane_g4

0x0003,

0xf7db,	// (0x000688f4) cell_hwr_fs_pane_g_ParamLimits

0xf7db,	// (0x000688f4) cell_hwr_fs_pane_g

0xb557,	// (0x00064670) cell_hwr_fs_pane_t1

0x88dd,	// (0x000619f6) grid_highlight_pane_cp6

0x88dd,	// (0x000619f6) main_idle_act2_pane

0x909e,	// (0x000621b7) aid_inside_area_popup_secondary

0xc502,	// (0x0006561b) aid_inside_area_window_primary_ParamLimits

0xc502,	// (0x0006561b) aid_inside_area_window_primary

0x4634,	// (0x0005d74d) ai2_news_ticker_pane

0x463c,	// (0x0005d755) aid_size_cell_ai1_link_ParamLimits

0x463c,	// (0x0005d755) aid_size_cell_ai1_link

0x4656,	// (0x0005d76f) popup_ai2_data_window_ParamLimits

0x4656,	// (0x0005d76f) popup_ai2_data_window

0x4674,	// (0x0005d78d) popup_ai2_link_window_ParamLimits

0x4674,	// (0x0005d78d) popup_ai2_link_window

0x2bab,	// (0x0005bcc4) bg_popup_sub_pane_cp4_ParamLimits

0x2bab,	// (0x0005bcc4) bg_popup_sub_pane_cp4

0x468a,	// (0x0005d7a3) grid_ai2_link_pane_ParamLimits

0x468a,	// (0x0005d7a3) grid_ai2_link_pane

0x46a1,	// (0x0005d7ba) popup_ai2_link_window_g1_ParamLimits

0x46a1,	// (0x0005d7ba) popup_ai2_link_window_g1

0x46ad,	// (0x0005d7c6) popup_ai2_link_window_g2_ParamLimits

0x46ad,	// (0x0005d7c6) popup_ai2_link_window_g2

0x0001,

0xf9ae,	// (0x00068ac7) popup_ai2_link_window_g_ParamLimits

0xf9ae,	// (0x00068ac7) popup_ai2_link_window_g

0x46be,	// (0x0005d7d7) ai2_mp_button_pane

0x46c6,	// (0x0005d7df) ai2_mp_volume_pane

0x2d96,	// (0x0005beaf) bg_popup_sub_pane_cp5_ParamLimits

0x2d96,	// (0x0005beaf) bg_popup_sub_pane_cp5

0x46ce,	// (0x0005d7e7) heading_ai2_gene_pane_ParamLimits

0x46ce,	// (0x0005d7e7) heading_ai2_gene_pane

0x46da,	// (0x0005d7f3) list_ai2_gene_pane_ParamLimits

0x46da,	// (0x0005d7f3) list_ai2_gene_pane

0x4722,	// (0x0005d83b) cell_ai2_link_pane_ParamLimits

0x4722,	// (0x0005d83b) cell_ai2_link_pane

0x4738,	// (0x0005d851) cell_ai2_link_pane_g1

0x88dd,	// (0x000619f6) grid_highlight_pane_cp7

0x0c4c,	// (0x00059d65) ai2_mp_volume_pane_g1

0x480b,	// (0x0005d924) ai2_mp_volume_pane_g2

0x4780,	// (0x0005d899) list_ai2_gene_pane_t1

0x4813,	// (0x0005d92c) ai2_mp_volume_pane_g3

0x0002,

0xf9c7,	// (0x00068ae0) ai2_mp_volume_pane_g

0x0c54,	// (0x00059d6d) volume_small_pane_cp3

0x481b,	// (0x0005d934) aid_size_cell_ai2_button

0x4823,	// (0x0005d93c) grid_ai2_button_pane

0x482c,	// (0x0005d945) cell_ai2_button_pane_ParamLimits

0x482c,	// (0x0005d945) cell_ai2_button_pane

0x88d3,	// (0x000619ec) cell_ai2_button_pane_g1

0x88dd,	// (0x000619f6) grid_highlight_pane_cp8

0x47cb,	// (0x0005d8e4) ai2_gene_pane_t1_ParamLimits

0x47cb,	// (0x0005d8e4) ai2_gene_pane_t1

0xad84,	// (0x00063e9d) aid_height_parent_landscape

0xc6a9,	// (0x000657c2) aid_height_set_list

0x4102,	// (0x0005d21b) aid_size_parent

0x4453,	// (0x0005d56c) aid_size_cell_graphic_pane_ParamLimits

0x46ea,	// (0x0005d803) popup_ai2_data_window_g1_ParamLimits

0x46ea,	// (0x0005d803) popup_ai2_data_window_g1

0x46f6,	// (0x0005d80f) ai2_news_ticker_pane_g1

0x46fe,	// (0x0005d817) ai2_news_ticker_pane_g2

0x0001,

0xf9b3,	// (0x00068acc) ai2_news_ticker_pane_g

0x4706,	// (0x0005d81f) ai2_news_ticker_pane_t1

0x4714,	// (0x0005d82d) ai2_news_ticker_pane_t2

0x0001,

0xf9b8,	// (0x00068ad1) ai2_news_ticker_pane_t

0x4741,	// (0x0005d85a) heading_ai2_gene_pane_g1

0x4749,	// (0x0005d862) heading_ai2_gene_pane_t1_ParamLimits

0x4749,	// (0x0005d862) heading_ai2_gene_pane_t1

0x475e,	// (0x0005d877) list_highlight_pane_cp6

0x4766,	// (0x0005d87f) ai2_gene_pane_ParamLimits

0x4766,	// (0x0005d87f) ai2_gene_pane

0x478e,	// (0x0005d8a7) list_ai2_gene_pane_t2

0x0001,

0xf9bd,	// (0x00068ad6) list_ai2_gene_pane_t

0x479c,	// (0x0005d8b5) list_highlight_pane_cp8_ParamLimits

0x479c,	// (0x0005d8b5) list_highlight_pane_cp8

0x47ad,	// (0x0005d8c6) ai2_gene_pane_g1_ParamLimits

0x47ad,	// (0x0005d8c6) ai2_gene_pane_g1

0x47bf,	// (0x0005d8d8) ai2_gene_pane_g2_ParamLimits

0x47bf,	// (0x0005d8d8) ai2_gene_pane_g2

0x0001,

0xf9c2,	// (0x00068adb) ai2_gene_pane_g_ParamLimits

0xf9c2,	// (0x00068adb) ai2_gene_pane_g

0x8f11,	// (0x0006202a) scroll_pane_cp12

0xad43,	// (0x00063e5c) control_pane_t3_ParamLimits

0xad43,	// (0x00063e5c) control_pane_t3

0x252f,	// (0x0005b648) status_small_pane_g8_ParamLimits

0x252f,	// (0x0005b648) status_small_pane_g8

0xaeaa,	// (0x00063fc3) popup_find_window_ParamLimits

0xb161,	// (0x0006427a) popup_note_image_window_ParamLimits

0xdbab,	// (0x00066cc4) list_double2_graphic_pane_vc_g1_ParamLimits

0xdbab,	// (0x00066cc4) list_double2_graphic_pane_vc_g1

0x2aab,	// (0x0005bbc4) list_double2_graphic_pane_vc_g2_ParamLimits

0x2aab,	// (0x0005bbc4) list_double2_graphic_pane_vc_g2

0x2ab7,	// (0x0005bbd0) list_double2_graphic_pane_vc_g3_ParamLimits

0x2ab7,	// (0x0005bbd0) list_double2_graphic_pane_vc_g3

0x0002,

0xf79e,	// (0x000688b7) list_double2_graphic_pane_vc_g_ParamLimits

0xf79e,	// (0x000688b7) list_double2_graphic_pane_vc_g

0xe048,	// (0x00067161) list_double2_graphic_pane_vc_t1_ParamLimits

0xe048,	// (0x00067161) list_double2_graphic_pane_vc_t1

0x2aab,	// (0x0005bbc4) list_single_heading_pane_vc_g1_ParamLimits

0x2aab,	// (0x0005bbc4) list_single_heading_pane_vc_g1

0x2ab7,	// (0x0005bbd0) list_single_heading_pane_vc_g2_ParamLimits

0x2ab7,	// (0x0005bbd0) list_single_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x000686c6) list_single_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x000686c6) list_single_heading_pane_vc_g

0xe05e,	// (0x00067177) list_single_heading_pane_vc_t1_ParamLimits

0xe05e,	// (0x00067177) list_single_heading_pane_vc_t1

0xe074,	// (0x0006718d) list_single_heading_pane_vc_t2_ParamLimits

0xe074,	// (0x0006718d) list_single_heading_pane_vc_t2

0x0001,

0xf7bf,	// (0x000688d8) list_single_heading_pane_vc_t_ParamLimits

0xf7bf,	// (0x000688d8) list_single_heading_pane_vc_t

0x2b67,	// (0x0005bc80) list_setting_number_pane_vc_g1_ParamLimits

0x2b67,	// (0x0005bc80) list_setting_number_pane_vc_g1

0x2b73,	// (0x0005bc8c) list_setting_number_pane_vc_g2_ParamLimits

0x2b73,	// (0x0005bc8c) list_setting_number_pane_vc_g2

0x0001,

0xf7c4,	// (0x000688dd) list_setting_number_pane_vc_g_ParamLimits

0xf7c4,	// (0x000688dd) list_setting_number_pane_vc_g

0xe086,	// (0x0006719f) list_setting_number_pane_vc_t1_ParamLimits

0xe086,	// (0x0006719f) list_setting_number_pane_vc_t1

0xe09a,	// (0x000671b3) list_setting_number_pane_vc_t2_ParamLimits

0xe09a,	// (0x000671b3) list_setting_number_pane_vc_t2

0xe0b6,	// (0x000671cf) list_setting_number_pane_vc_t3_ParamLimits

0xe0b6,	// (0x000671cf) list_setting_number_pane_vc_t3

0x0002,

0xf7c9,	// (0x000688e2) list_setting_number_pane_vc_t_ParamLimits

0xf7c9,	// (0x000688e2) list_setting_number_pane_vc_t

0xe0e4,	// (0x000671fd) set_value_pane_vc_ParamLimits

0xe0e4,	// (0x000671fd) set_value_pane_vc

0x42eb,	// (0x0005d404) list_double2_graphic_pane_vc_ParamLimits

0x42eb,	// (0x0005d404) list_double2_graphic_pane_vc

0x42eb,	// (0x0005d404) list_double2_large_graphic_pane_vc_ParamLimits

0x42eb,	// (0x0005d404) list_double2_large_graphic_pane_vc

0x42eb,	// (0x0005d404) list_double2_pane_vc_ParamLimits

0x42eb,	// (0x0005d404) list_double2_pane_vc

0x42eb,	// (0x0005d404) list_double_graphic_heading_pane_vc_ParamLimits

0x42eb,	// (0x0005d404) list_double_graphic_heading_pane_vc

0x42eb,	// (0x0005d404) list_double_graphic_pane_vc_ParamLimits

0x42eb,	// (0x0005d404) list_double_graphic_pane_vc

0x42eb,	// (0x0005d404) list_double_heading_pane_vc_ParamLimits

0x42eb,	// (0x0005d404) list_double_heading_pane_vc

0x42ff,	// (0x0005d418) list_double_large_graphic_pane_vc_ParamLimits

0x42ff,	// (0x0005d418) list_double_large_graphic_pane_vc

0x42eb,	// (0x0005d404) list_double_number_pane_vc_ParamLimits

0x42eb,	// (0x0005d404) list_double_number_pane_vc

0x42eb,	// (0x0005d404) list_double_pane_vc_ParamLimits

0x42eb,	// (0x0005d404) list_double_pane_vc

0x42eb,	// (0x0005d404) list_double_time_pane_vc_ParamLimits

0x42eb,	// (0x0005d404) list_double_time_pane_vc

0x42eb,	// (0x0005d404) list_setting_number_pane_vc_ParamLimits

0x42eb,	// (0x0005d404) list_setting_number_pane_vc

0x42eb,	// (0x0005d404) list_setting_pane_vc_ParamLimits

0x42eb,	// (0x0005d404) list_setting_pane_vc

0x42eb,	// (0x0005d404) list_single_graphic_heading_pane_vc_ParamLimits

0x42eb,	// (0x0005d404) list_single_graphic_heading_pane_vc

0x42eb,	// (0x0005d404) list_single_heading_pane_vc_ParamLimits

0x42eb,	// (0x0005d404) list_single_heading_pane_vc

0x42eb,	// (0x0005d404) list_single_number_heading_pane_vc_ParamLimits

0x42eb,	// (0x0005d404) list_single_number_heading_pane_vc

0xdbab,	// (0x00066cc4) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xdbab,	// (0x00066cc4) list_double_graphic_heading_pane_vc_g1

0x221b,	// (0x0005b334) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x221b,	// (0x0005b334) list_double_graphic_heading_pane_vc_g2

0x396c,	// (0x0005ca85) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x396c,	// (0x0005ca85) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ce,	// (0x00068ae7) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ce,	// (0x00068ae7) list_double_graphic_heading_pane_vc_g

0xe12d,	// (0x00067246) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xe12d,	// (0x00067246) list_double_graphic_heading_pane_vc_t1

0xe143,	// (0x0006725c) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xe143,	// (0x0006725c) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d5,	// (0x00068aee) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d5,	// (0x00068aee) list_double_graphic_heading_pane_vc_t

0x2b67,	// (0x0005bc80) list_setting_pane_vc_g1_ParamLimits

0x2b67,	// (0x0005bc80) list_setting_pane_vc_g1

0x2b73,	// (0x0005bc8c) list_setting_pane_vc_g2_ParamLimits

0x2b73,	// (0x0005bc8c) list_setting_pane_vc_g2

0x0001,

0xf7c4,	// (0x000688dd) list_setting_pane_vc_g_ParamLimits

0xf7c4,	// (0x000688dd) list_setting_pane_vc_g

0xe161,	// (0x0006727a) list_setting_pane_vc_t1_ParamLimits

0xe161,	// (0x0006727a) list_setting_pane_vc_t1

0xe17d,	// (0x00067296) list_setting_pane_vc_t2_ParamLimits

0xe17d,	// (0x00067296) list_setting_pane_vc_t2

0x0001,

0xfa18,	// (0x00068b31) list_setting_pane_vc_t_ParamLimits

0xfa18,	// (0x00068b31) list_setting_pane_vc_t

0xe0e4,	// (0x000671fd) set_value_pane_cp_vc_ParamLimits

0xe0e4,	// (0x000671fd) set_value_pane_cp_vc

0x2aab,	// (0x0005bbc4) list_single_number_heading_pane_vc_g1_ParamLimits

0x2aab,	// (0x0005bbc4) list_single_number_heading_pane_vc_g1

0x2ab7,	// (0x0005bbd0) list_single_number_heading_pane_vc_g2_ParamLimits

0x2ab7,	// (0x0005bbd0) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x000686c6) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x000686c6) list_single_number_heading_pane_vc_g

0xdb83,	// (0x00066c9c) list_single_number_heading_pane_vc_t1_ParamLimits

0xdb83,	// (0x00066c9c) list_single_number_heading_pane_vc_t1

0xe199,	// (0x000672b2) list_single_number_heading_pane_vc_t2_ParamLimits

0xe199,	// (0x000672b2) list_single_number_heading_pane_vc_t2

0xdb99,	// (0x00066cb2) list_single_number_heading_pane_vc_t3_ParamLimits

0xdb99,	// (0x00066cb2) list_single_number_heading_pane_vc_t3

0x0002,

0xfa1d,	// (0x00068b36) list_single_number_heading_pane_vc_t_ParamLimits

0xfa1d,	// (0x00068b36) list_single_number_heading_pane_vc_t

0xdbab,	// (0x00066cc4) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xdbab,	// (0x00066cc4) list_single_graphic_heading_pane_vc_g1

0x2aab,	// (0x0005bbc4) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x2aab,	// (0x0005bbc4) list_single_graphic_heading_pane_vc_g4

0x2ab7,	// (0x0005bbd0) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2ab7,	// (0x0005bbd0) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79e,	// (0x000688b7) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x000688b7) list_single_graphic_heading_pane_vc_g

0xdb83,	// (0x00066c9c) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xdb83,	// (0x00066c9c) list_single_graphic_heading_pane_vc_t1

0xe1af,	// (0x000672c8) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xe1af,	// (0x000672c8) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa24,	// (0x00068b3d) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa24,	// (0x00068b3d) list_single_graphic_heading_pane_vc_t

0x2aab,	// (0x0005bbc4) list_double2_pane_vc_g1_ParamLimits

0x2aab,	// (0x0005bbc4) list_double2_pane_vc_g1

0x2ab7,	// (0x0005bbd0) list_double2_pane_vc_g2_ParamLimits

0x2ab7,	// (0x0005bbd0) list_double2_pane_vc_g2

0x0001,

0xf5ad,	// (0x000686c6) list_double2_pane_vc_g_ParamLimits

0xf5ad,	// (0x000686c6) list_double2_pane_vc_g

0xe117,	// (0x00067230) list_double2_pane_vc_t1_ParamLimits

0xe117,	// (0x00067230) list_double2_pane_vc_t1

0x3978,	// (0x0005ca91) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3978,	// (0x0005ca91) list_double2_large_graphic_pane_vc_g1

0x2aab,	// (0x0005bbc4) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2aab,	// (0x0005bbc4) list_double2_large_graphic_pane_vc_g2

0x2ab7,	// (0x0005bbd0) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2ab7,	// (0x0005bbd0) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c5,	// (0x000686de) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c5,	// (0x000686de) list_double2_large_graphic_pane_vc_g

0xdbb7,	// (0x00066cd0) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xdbb7,	// (0x00066cd0) list_double2_large_graphic_pane_vc_t1

0x3984,	// (0x0005ca9d) list_double_time_pane_vc_g1_ParamLimits

0x3984,	// (0x0005ca9d) list_double_time_pane_vc_g1

0x3990,	// (0x0005caa9) list_double_time_pane_vc_g2_ParamLimits

0x3990,	// (0x0005caa9) list_double_time_pane_vc_g2

0x0001,

0xfa29,	// (0x00068b42) list_double_time_pane_vc_g_ParamLimits

0xfa29,	// (0x00068b42) list_double_time_pane_vc_g

0xe1c1,	// (0x000672da) list_double_time_pane_vc_t1_ParamLimits

0xe1c1,	// (0x000672da) list_double_time_pane_vc_t1

0xe1eb,	// (0x00067304) list_double_time_pane_vc_t2_ParamLimits

0xe1eb,	// (0x00067304) list_double_time_pane_vc_t2

0xe234,	// (0x0006734d) list_double_time_pane_vc_t3_ParamLimits

0xe234,	// (0x0006734d) list_double_time_pane_vc_t3

0xe246,	// (0x0006735f) list_double_time_pane_vc_t4_ParamLimits

0xe246,	// (0x0006735f) list_double_time_pane_vc_t4

0x0003,

0xfa2e,	// (0x00068b47) list_double_time_pane_vc_t_ParamLimits

0xfa2e,	// (0x00068b47) list_double_time_pane_vc_t

0x2aab,	// (0x0005bbc4) list_double_pane_vc_g1_ParamLimits

0x2aab,	// (0x0005bbc4) list_double_pane_vc_g1

0x2ab7,	// (0x0005bbd0) list_double_pane_vc_g2_ParamLimits

0x2ab7,	// (0x0005bbd0) list_double_pane_vc_g2

0x0001,

0xf5ad,	// (0x000686c6) list_double_pane_vc_g_ParamLimits

0xf5ad,	// (0x000686c6) list_double_pane_vc_g

0xe25a,	// (0x00067373) list_double_pane_vc_t1_ParamLimits

0xe25a,	// (0x00067373) list_double_pane_vc_t1

0xe26e,	// (0x00067387) list_double_pane_vc_t2_ParamLimits

0xe26e,	// (0x00067387) list_double_pane_vc_t2

0x0001,

0xfa37,	// (0x00068b50) list_double_pane_vc_t_ParamLimits

0xfa37,	// (0x00068b50) list_double_pane_vc_t

0x2aab,	// (0x0005bbc4) list_double_number_pane_vc_g1_ParamLimits

0x2aab,	// (0x0005bbc4) list_double_number_pane_vc_g1

0x2ab7,	// (0x0005bbd0) list_double_number_pane_vc_g2_ParamLimits

0x2ab7,	// (0x0005bbd0) list_double_number_pane_vc_g2

0x0001,

0xf5ad,	// (0x000686c6) list_double_number_pane_vc_g_ParamLimits

0xf5ad,	// (0x000686c6) list_double_number_pane_vc_g

0xe105,	// (0x0006721e) list_double_number_pane_vc_t1_ParamLimits

0xe105,	// (0x0006721e) list_double_number_pane_vc_t1

0xe284,	// (0x0006739d) list_double_number_pane_vc_t2_ParamLimits

0xe284,	// (0x0006739d) list_double_number_pane_vc_t2

0xe26e,	// (0x00067387) list_double_number_pane_vc_t3_ParamLimits

0xe26e,	// (0x00067387) list_double_number_pane_vc_t3

0x0002,

0xfa3c,	// (0x00068b55) list_double_number_pane_vc_t_ParamLimits

0xfa3c,	// (0x00068b55) list_double_number_pane_vc_t

0x399c,	// (0x0005cab5) list_double_large_graphic_pane_vc_g1_ParamLimits

0x399c,	// (0x0005cab5) list_double_large_graphic_pane_vc_g1

0x39be,	// (0x0005cad7) list_double_large_graphic_pane_vc_g2_ParamLimits

0x39be,	// (0x0005cad7) list_double_large_graphic_pane_vc_g2

0x39d2,	// (0x0005caeb) list_double_large_graphic_pane_vc_g3_ParamLimits

0x39d2,	// (0x0005caeb) list_double_large_graphic_pane_vc_g3

0xe298,	// (0x000673b1) list_double_large_graphic_pane_vc_g4_ParamLimits

0xe298,	// (0x000673b1) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa43,	// (0x00068b5c) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa43,	// (0x00068b5c) list_double_large_graphic_pane_vc_g

0xe2a4,	// (0x000673bd) list_double_large_graphic_pane_vc_t1_ParamLimits

0xe2a4,	// (0x000673bd) list_double_large_graphic_pane_vc_t1

0xe2c0,	// (0x000673d9) list_double_large_graphic_pane_vc_t2_ParamLimits

0xe2c0,	// (0x000673d9) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa4c,	// (0x00068b65) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa4c,	// (0x00068b65) list_double_large_graphic_pane_vc_t

0x221b,	// (0x0005b334) list_double_heading_pane_vc_g1_ParamLimits

0x221b,	// (0x0005b334) list_double_heading_pane_vc_g1

0x396c,	// (0x0005ca85) list_double_heading_pane_vc_g2_ParamLimits

0x396c,	// (0x0005ca85) list_double_heading_pane_vc_g2

0x0001,

0xfa51,	// (0x00068b6a) list_double_heading_pane_vc_g_ParamLimits

0xfa51,	// (0x00068b6a) list_double_heading_pane_vc_g

0xe2e0,	// (0x000673f9) list_double_heading_pane_vc_t1_ParamLimits

0xe2e0,	// (0x000673f9) list_double_heading_pane_vc_t1

0xe2f2,	// (0x0006740b) list_double_heading_pane_vc_t2_ParamLimits

0xe2f2,	// (0x0006740b) list_double_heading_pane_vc_t2

0x0001,

0xfa56,	// (0x00068b6f) list_double_heading_pane_vc_t_ParamLimits

0xfa56,	// (0x00068b6f) list_double_heading_pane_vc_t

0xe30a,	// (0x00067423) list_double_graphic_pane_vc_g1_ParamLimits

0xe30a,	// (0x00067423) list_double_graphic_pane_vc_g1

0x39e1,	// (0x0005cafa) list_double_graphic_pane_vc_g2_ParamLimits

0x39e1,	// (0x0005cafa) list_double_graphic_pane_vc_g2

0x2aab,	// (0x0005bbc4) list_double_graphic_pane_vc_g3_ParamLimits

0x2aab,	// (0x0005bbc4) list_double_graphic_pane_vc_g3

0x0003,

0xfa5b,	// (0x00068b74) list_double_graphic_pane_vc_g_ParamLimits

0xfa5b,	// (0x00068b74) list_double_graphic_pane_vc_g

0xe316,	// (0x0006742f) list_double_graphic_pane_vc_t1_ParamLimits

0xe316,	// (0x0006742f) list_double_graphic_pane_vc_t1

0xe340,	// (0x00067459) list_double_graphic_pane_vc_t2_ParamLimits

0xe340,	// (0x00067459) list_double_graphic_pane_vc_t2

0x0001,

0xfa64,	// (0x00068b7d) list_double_graphic_pane_vc_t_ParamLimits

0xfa64,	// (0x00068b7d) list_double_graphic_pane_vc_t

0xed77,	// (0x00067e90) aid_size_cell_fastswap

0x9c35,	// (0x00062d4e) aid_size_cell_touch_ParamLimits

0x9c35,	// (0x00062d4e) aid_size_cell_touch

0xeefe,	// (0x00068017) popup_fast_swap_wide_window_ParamLimits

0xeefe,	// (0x00068017) popup_fast_swap_wide_window

0x9df3,	// (0x00062f0c) touch_pane_ParamLimits

0x9df3,	// (0x00062f0c) touch_pane

0x8f67,	// (0x00062080) button_value_adjust_pane_cp2

0xdbdb,	// (0x00066cf4) button_value_adjust_pane_cp4

0xdbe3,	// (0x00066cfc) form_field_data_pane_cp2

0xa6dd,	// (0x000637f6) form_field_data_wide_pane_cp2

0xdcec,	// (0x00066e05) bg_scroll_pane_ParamLimits

0xf1ef,	// (0x00068308) scroll_handle_pane_ParamLimits

0xf203,	// (0x0006831c) scroll_sc2_down_pane_ParamLimits

0xf203,	// (0x0006831c) scroll_sc2_down_pane

0xdd1d,	// (0x00066e36) scroll_sc2_up_pane_ParamLimits

0xdd1d,	// (0x00066e36) scroll_sc2_up_pane

0xca8d,	// (0x00065ba6) grid_wheel_folder_pane_g1_ParamLimits

0xca8d,	// (0x00065ba6) grid_wheel_folder_pane_g1

0xf3d3,	// (0x000684ec) clock_nsta_pane_cp2_ParamLimits

0xf3d3,	// (0x000684ec) clock_nsta_pane_cp2

0xab97,	// (0x00063cb0) listscroll_midp_pane_ParamLimits

0xaba3,	// (0x00063cbc) midp_canvas_pane

0x25a9,	// (0x0005b6c2) nsta_clock_indic_pane

0x25dd,	// (0x0005b6f6) listscroll_form_pane_vc

0x25e5,	// (0x0005b6fe) listscroll_set_pane_vc_ParamLimits

0x25e5,	// (0x0005b6fe) listscroll_set_pane_vc

0xc0e9,	// (0x00065202) clock_nsta_pane

0xc113,	// (0x0006522c) indicator_nsta_pane

0x2a45,	// (0x0005bb5e) bg_popup_sub_pane_cp2_ParamLimits

0x2a59,	// (0x0005bb72) find_pane_cp2_ParamLimits

0x2a59,	// (0x0005bb72) find_pane_cp2

0x2a6f,	// (0x0005bb88) grid_toobar_pane_ParamLimits

0x2b7f,	// (0x0005bc98) list_form_gen_pane_vc_ParamLimits

0x2b7f,	// (0x0005bc98) list_form_gen_pane_vc

0x2b95,	// (0x0005bcae) scroll_pane_cp8_vc_ParamLimits

0x2b95,	// (0x0005bcae) scroll_pane_cp8_vc

0x2c11,	// (0x0005bd2a) data_form_wide_pane_vc_ParamLimits

0x2c11,	// (0x0005bd2a) data_form_wide_pane_vc

0x2c1d,	// (0x0005bd36) form_field_data_wide_pane_vc_g1

0x2c25,	// (0x0005bd3e) form_field_data_wide_pane_vc_t1_ParamLimits

0x2c25,	// (0x0005bd3e) form_field_data_wide_pane_vc_t1

0x8f7b,	// (0x00062094) input_focus_pane_cp6_vc_ParamLimits

0x8f7b,	// (0x00062094) input_focus_pane_cp6_vc

0x2f41,	// (0x0005c05a) list_midp_pane_ParamLimits

0x44c1,	// (0x0005d5da) scroll_pane_cp16_ParamLimits

0x44c1,	// (0x0005d5da) scroll_pane_cp16

0x2f97,	// (0x0005c0b0) button_value_adjust_pane_ParamLimits

0x2f97,	// (0x0005c0b0) button_value_adjust_pane

0xc6ba,	// (0x000657d3) button_value_adjust_pane_cp6_ParamLimits

0xc6ba,	// (0x000657d3) button_value_adjust_pane_cp6

0xc7f6,	// (0x0006590f) settings_code_pane_cp_ParamLimits

0xc7f6,	// (0x0006590f) settings_code_pane_cp

0x88d3,	// (0x000619ec) cell_touch_pane_g1

0x88d3,	// (0x000619ec) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x000687fc) cell_touch_pane_g

0xc961,	// (0x00065a7a) cell_touch_pane_cp_ParamLimits

0xc961,	// (0x00065a7a) cell_touch_pane_cp

0xc97d,	// (0x00065a96) cell_touch_pane_ParamLimits

0xc97d,	// (0x00065a96) cell_touch_pane

0x88d3,	// (0x000619ec) scroll_sc2_down_pane_g1

0x88d3,	// (0x000619ec) scroll_sc2_up_pane_g1

0x88dd,	// (0x000619f6) bg_set_opt_pane_cp4_vc

0x485f,	// (0x0005d978) list_set_graphic_pane_vc_g1_ParamLimits

0x485f,	// (0x0005d978) list_set_graphic_pane_vc_g1

0x486b,	// (0x0005d984) list_set_graphic_pane_vc_g2_ParamLimits

0x486b,	// (0x0005d984) list_set_graphic_pane_vc_g2

0x0001,

0xf9da,	// (0x00068af3) list_set_graphic_pane_vc_g_ParamLimits

0xf9da,	// (0x00068af3) list_set_graphic_pane_vc_g

0x4877,	// (0x0005d990) text_primary_small_cp13_vc_ParamLimits

0x4877,	// (0x0005d990) text_primary_small_cp13_vc

0x488f,	// (0x0005d9a8) list_set_graphic_pane_vc_ParamLimits

0x488f,	// (0x0005d9a8) list_set_graphic_pane_vc

0x88dd,	// (0x000619f6) input_focus_pane_cp2_vc

0x88d3,	// (0x000619ec) setting_code_pane_vc_g1

0x8942,	// (0x00061a5b) setting_code_pane_vc_t1

0x48a2,	// (0x0005d9bb) set_text_pane_vc_t1_ParamLimits

0x48a2,	// (0x0005d9bb) set_text_pane_vc_t1

0x88dd,	// (0x000619f6) input_focus_pane_cp1_vc

0x48c3,	// (0x0005d9dc) list_set_text_pane_vc

0x88d3,	// (0x000619ec) setting_text_pane_vc_g1

0x88dd,	// (0x000619f6) bg_set_opt_pane_cp2_vc

0x8939,	// (0x00061a52) setting_slider_graphic_pane_vc_g1

0x48cd,	// (0x0005d9e6) setting_slider_graphic_pane_vc_t1

0x48df,	// (0x0005d9f8) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9df,	// (0x00068af8) setting_slider_graphic_pane_vc_t

0x48f1,	// (0x0005da0a) slider_set_pane_cp_vc

0x48fb,	// (0x0005da14) slider_set_pane_vc_g1

0x4904,	// (0x0005da1d) slider_set_pane_vc_g2

0x0006,

0xf9e4,	// (0x00068afd) slider_set_pane_vc_g

0x8fd3,	// (0x000620ec) set_opt_bg_pane_g1_copy1

0x8fdb,	// (0x000620f4) set_opt_bg_pane_g2_copy1

0x4930,	// (0x0005da49) set_opt_bg_pane_g3_copy1

0x8feb,	// (0x00062104) set_opt_bg_pane_g4_copy1

0x8ff3,	// (0x0006210c) set_opt_bg_pane_g5_copy1

0x8ffb,	// (0x00062114) set_opt_bg_pane_g6_copy1

0x493a,	// (0x0005da53) set_opt_bg_pane_g7_copy1

0x4944,	// (0x0005da5d) set_opt_bg_pane_g8_copy1

0x494e,	// (0x0005da67) set_opt_bg_pane_g9_copy1

0x88dd,	// (0x000619f6) bg_set_opt_pane_cp_vc

0x4958,	// (0x0005da71) setting_slider_pane_vc_t1

0x4967,	// (0x0005da80) setting_slider_pane_vc_t2

0x4979,	// (0x0005da92) setting_slider_pane_vc_t3

0x0002,

0xf9f3,	// (0x00068b0c) setting_slider_pane_vc_t

0x498b,	// (0x0005daa4) slider_set_pane_vc

0x08b0,	// (0x000599c9) volume_set_pane_vc_g1

0x08b9,	// (0x000599d2) volume_set_pane_vc_g2

0x08c2,	// (0x000599db) volume_set_pane_vc_g3

0x08cb,	// (0x000599e4) volume_set_pane_vc_g4

0x08d4,	// (0x000599ed) volume_set_pane_vc_g5

0x08dd,	// (0x000599f6) volume_set_pane_vc_g6

0x08e6,	// (0x000599ff) volume_set_pane_vc_g7

0x08ef,	// (0x00059a08) volume_set_pane_vc_g8

0x08f8,	// (0x00059a11) volume_set_pane_vc_g9

0x0901,	// (0x00059a1a) volume_set_pane_vc_g10

0x0009,

0xf9fa,	// (0x00068b13) volume_set_pane_vc_g

0x4995,	// (0x0005daae) volume_set_pane_vc

0x499f,	// (0x0005dab8) button_value_adjust_pane_cp1_vc

0x49a9,	// (0x0005dac2) list_highlight_pane_cp2_vc

0x49b2,	// (0x0005dacb) list_set_pane_vc_ParamLimits

0x49b2,	// (0x0005dacb) list_set_pane_vc

0x4a20,	// (0x0005db39) main_pane_set_vc_t1_ParamLimits

0x4a20,	// (0x0005db39) main_pane_set_vc_t1

0x4a35,	// (0x0005db4e) main_pane_set_vc_t2_ParamLimits

0x4a35,	// (0x0005db4e) main_pane_set_vc_t2

0x4a47,	// (0x0005db60) main_pane_set_vc_t3_ParamLimits

0x4a47,	// (0x0005db60) main_pane_set_vc_t3

0x4a5b,	// (0x0005db74) main_pane_set_vc_t4_ParamLimits

0x4a5b,	// (0x0005db74) main_pane_set_vc_t4

0x0003,

0xfa0f,	// (0x00068b28) main_pane_set_vc_t_ParamLimits

0xfa0f,	// (0x00068b28) main_pane_set_vc_t

0x4a6f,	// (0x0005db88) setting_code_pane_vc_ParamLimits

0x4a6f,	// (0x0005db88) setting_code_pane_vc

0x4a80,	// (0x0005db99) setting_slider_graphic_pane_vc

0x4a80,	// (0x0005db99) setting_slider_pane_vc

0x4a80,	// (0x0005db99) setting_text_pane_vc

0x4a80,	// (0x0005db99) setting_volume_pane_vc

0x4a8a,	// (0x0005dba3) scroll_pane_cp121_vc

0x8f55,	// (0x0006206e) set_content_pane_vc

0x4a92,	// (0x0005dbab) button_value_adjust_pane_g1

0x4a9b,	// (0x0005dbb4) button_value_adjust_pane_g2

0x0001,

0xfa69,	// (0x00068b82) button_value_adjust_pane_g

0x4aa4,	// (0x0005dbbd) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4aa4,	// (0x0005dbbd) form_field_slider_wide_pane_vc_t1

0x4ab6,	// (0x0005dbcf) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4ab6,	// (0x0005dbcf) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa6e,	// (0x00068b87) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa6e,	// (0x00068b87) form_field_slider_wide_pane_vc_t

0x8a5e,	// (0x00061b77) input_focus_pane_cp10_vc_ParamLimits

0x8a5e,	// (0x00061b77) input_focus_pane_cp10_vc

0x4ae2,	// (0x0005dbfb) slider_cont_pane_cp1_vc_ParamLimits

0x4ae2,	// (0x0005dbfb) slider_cont_pane_cp1_vc

0x4af4,	// (0x0005dc0d) slider_form_pane_g1_cp2

0x4904,	// (0x0005da1d) slider_form_pane_g2_cp2

0x4b21,	// (0x0005dc3a) form_field_slider_pane_vc_t3

0x4b2f,	// (0x0005dc48) form_field_slider_pane_vc_t4

0x4b3d,	// (0x0005dc56) slider_form_pane_vc_ParamLimits

0x4b3d,	// (0x0005dc56) slider_form_pane_vc

0x4b4a,	// (0x0005dc63) form_field_slider_pane_vc_t1_ParamLimits

0x4b4a,	// (0x0005dc63) form_field_slider_pane_vc_t1

0x4ab6,	// (0x0005dbcf) form_field_slider_pane_vc_t2_ParamLimits

0x4ab6,	// (0x0005dbcf) form_field_slider_pane_vc_t2

0x0001,

0xfa80,	// (0x00068b99) form_field_slider_pane_vc_t_ParamLimits

0xfa80,	// (0x00068b99) form_field_slider_pane_vc_t

0x8a5e,	// (0x00061b77) input_focus_pane_cp9_vc_ParamLimits

0x8a5e,	// (0x00061b77) input_focus_pane_cp9_vc

0x4b60,	// (0x0005dc79) slider_cont_pane_vc_ParamLimits

0x4b60,	// (0x0005dc79) slider_cont_pane_vc

0x4b74,	// (0x0005dc8d) list_form_graphic_pane_cp_vc_ParamLimits

0x4b74,	// (0x0005dc8d) list_form_graphic_pane_cp_vc

0x2c1d,	// (0x0005bd36) form_field_popup_wide_pane_vc_g1

0x4b89,	// (0x0005dca2) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4b89,	// (0x0005dca2) form_field_popup_wide_pane_vc_t1

0x8f7b,	// (0x00062094) input_focus_pane_cp8_vc_ParamLimits

0x8f7b,	// (0x00062094) input_focus_pane_cp8_vc

0x4bce,	// (0x0005dce7) list_form_wide_pane_vc_ParamLimits

0x4bce,	// (0x0005dce7) list_form_wide_pane_vc

0x4bda,	// (0x0005dcf3) list_form_graphic_pane_vc_g1

0x4be2,	// (0x0005dcfb) list_form_graphic_pane_vc_t1_ParamLimits

0x4be2,	// (0x0005dcfb) list_form_graphic_pane_vc_t1

0x892b,	// (0x00061a44) list_highlight_pane_cp5_vc_ParamLimits

0x892b,	// (0x00061a44) list_highlight_pane_cp5_vc

0x4bfe,	// (0x0005dd17) list_form_graphic_pane_vc_ParamLimits

0x4bfe,	// (0x0005dd17) list_form_graphic_pane_vc

0x2c1d,	// (0x0005bd36) form_field_popup_pane_vc_g1

0x4c14,	// (0x0005dd2d) form_field_popup_pane_vc_t1_ParamLimits

0x4c14,	// (0x0005dd2d) form_field_popup_pane_vc_t1

0x8f7b,	// (0x00062094) input_focus_pane_cp7_vc_ParamLimits

0x8f7b,	// (0x00062094) input_focus_pane_cp7_vc

0x4c2b,	// (0x0005dd44) list_form_pane_vc_ParamLimits

0x4c2b,	// (0x0005dd44) list_form_pane_vc

0x4c37,	// (0x0005dd50) data_form_pane_vc_t1_ParamLimits

0x4c37,	// (0x0005dd50) data_form_pane_vc_t1

0x8fd3,	// (0x000620ec) input_focus_pane_vc_g1

0x8fdb,	// (0x000620f4) input_focus_pane_vc_g2

0x8fe3,	// (0x000620fc) input_focus_pane_vc_g3

0x8feb,	// (0x00062104) input_focus_pane_vc_g4

0x8ff3,	// (0x0006210c) input_focus_pane_vc_g5

0x8ffb,	// (0x00062114) input_focus_pane_vc_g6

0x9003,	// (0x0006211c) input_focus_pane_vc_g7

0x900b,	// (0x00062124) input_focus_pane_vc_g8

0x9013,	// (0x0006212c) input_focus_pane_vc_g9

0x88d3,	// (0x000619ec) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x00068785) input_focus_pane_vc_g

0x2c11,	// (0x0005bd2a) data_form_pane_vc_ParamLimits

0x2c11,	// (0x0005bd2a) data_form_pane_vc

0x2c1d,	// (0x0005bd36) form_field_data_pane_vc_g1

0x4c54,	// (0x0005dd6d) form_field_data_pane_vc_t1_ParamLimits

0x4c54,	// (0x0005dd6d) form_field_data_pane_vc_t1

0x8f7b,	// (0x00062094) input_focus_pane_vc_ParamLimits

0x8f7b,	// (0x00062094) input_focus_pane_vc

0x4c6e,	// (0x0005dd87) button_value_adjust_pane_cp3_vc

0x4c76,	// (0x0005dd8f) button_value_adjust_pane_cp5_vc

0x4c7e,	// (0x0005dd97) form_field_data_pane_vc_ParamLimits

0x4c7e,	// (0x0005dd97) form_field_data_pane_vc

0x4c99,	// (0x0005ddb2) form_field_data_pane_vc_cp2

0x4ca1,	// (0x0005ddba) form_field_data_wide_pane_vc_ParamLimits

0x4ca1,	// (0x0005ddba) form_field_data_wide_pane_vc

0x4cbb,	// (0x0005ddd4) form_field_data_wide_pane_vc_cp2

0x4cc3,	// (0x0005dddc) form_field_popup_pane_vc_ParamLimits

0x4cc3,	// (0x0005dddc) form_field_popup_pane_vc

0x4cde,	// (0x0005ddf7) form_field_popup_wide_pane_vc_ParamLimits

0x4cde,	// (0x0005ddf7) form_field_popup_wide_pane_vc

0x4cf8,	// (0x0005de11) form_field_slider_pane_vc_ParamLimits

0x4cf8,	// (0x0005de11) form_field_slider_pane_vc

0x4d0b,	// (0x0005de24) form_field_slider_wide_pane_vc_ParamLimits

0x4d0b,	// (0x0005de24) form_field_slider_wide_pane_vc

0xc99b,	// (0x00065ab4) grid_touch_1_pane_ParamLimits

0xc99b,	// (0x00065ab4) grid_touch_1_pane

0xc9af,	// (0x00065ac8) grid_touch_2_pane_ParamLimits

0xc9af,	// (0x00065ac8) grid_touch_2_pane

0x4df1,	// (0x0005df0a) touch_pane_g1_ParamLimits

0x4df1,	// (0x0005df0a) touch_pane_g1

0x4d44,	// (0x0005de5d) cell_app_pane_cp_wide_ParamLimits

0x4d44,	// (0x0005de5d) cell_app_pane_cp_wide

0x4d55,	// (0x0005de6e) grid_popup_fast_wide_pane_ParamLimits

0x4d55,	// (0x0005de6e) grid_popup_fast_wide_pane

0x4d69,	// (0x0005de82) scroll_pane_cp19_ParamLimits

0x4d69,	// (0x0005de82) scroll_pane_cp19

0x88dd,	// (0x000619f6) bg_popup_window_pane_cp20

0x4d7d,	// (0x0005de96) listscroll_popup_fast_wide_pane

0xc9db,	// (0x00065af4) grid_indicator_nsta_pane

0x4d97,	// (0x0005deb0) clock_nsta_pane_g1

0x4da0,	// (0x0005deb9) clock_nsta_pane_t1

0xc9e7,	// (0x00065b00) cell_indicator_nsta_pane_ParamLimits

0xc9e7,	// (0x00065b00) cell_indicator_nsta_pane

0x4df1,	// (0x0005df0a) cell_indicator_nsta_pane_g1

0xca02,	// (0x00065b1b) cell_indicator_nsta_pane_g2

0x0001,

0xfa91,	// (0x00068baa) cell_indicator_nsta_pane_g

0x4e12,	// (0x0005df2b) clock_nsta_pane_cp

0x4e1b,	// (0x0005df34) indicator_nsta_pane_cp

0x4e25,	// (0x0005df3e) nsta_clock_indic_pane_g1

0x8967,	// (0x00061a80) grid_indicator_pane

0xde0f,	// (0x00066f28) scroll_pane_cp29

0xf322,	// (0x0006843b) indicator_nsta_pane_cp2_ParamLimits

0xf322,	// (0x0006843b) indicator_nsta_pane_cp2

0x892b,	// (0x00061a44) main_apps_wheel_pane

0x2dfe,	// (0x0005bf17) form_midp_field_text_pane_ParamLimits

0x2f4d,	// (0x0005c066) scroll_bar_cp050_ParamLimits

0x4e7e,	// (0x0005df97) cell_indicator_pane_ParamLimits

0x4e7e,	// (0x0005df97) cell_indicator_pane

0x4e96,	// (0x0005dfaf) cell_indicator_pane_g1

0xca0f,	// (0x00065b28) grid_wheel_folder_pane_ParamLimits

0xca0f,	// (0x00065b28) grid_wheel_folder_pane

0xca1d,	// (0x00065b36) list_wheel_apps_pane_ParamLimits

0xca1d,	// (0x00065b36) list_wheel_apps_pane

0xca2b,	// (0x00065b44) main_apps_wheel_pane_g1_ParamLimits

0xca2b,	// (0x00065b44) main_apps_wheel_pane_g1

0xca3b,	// (0x00065b54) main_apps_wheel_pane_g2_ParamLimits

0xca3b,	// (0x00065b54) main_apps_wheel_pane_g2

0x0001,

0xfaad,	// (0x00068bc6) main_apps_wheel_pane_g_ParamLimits

0xfaad,	// (0x00068bc6) main_apps_wheel_pane_g

0xca4b,	// (0x00065b64) main_apps_wheel_pane_t1_ParamLimits

0xca4b,	// (0x00065b64) main_apps_wheel_pane_t1

0xca63,	// (0x00065b7c) list_wheel_apps_pane_g1

0xca6b,	// (0x00065b84) list_wheel_apps_pane_g2

0xca73,	// (0x00065b8c) list_wheel_apps_pane_g3

0xca7b,	// (0x00065b94) list_wheel_apps_pane_g4

0xca83,	// (0x00065b9c) list_wheel_apps_pane_g5

0x0004,

0xfab2,	// (0x00068bcb) list_wheel_apps_pane_g

0x211b,	// (0x0005b234) navi_icon_text_pane

0xb4cf,	// (0x000645e8) aid_fill_nsta

0xca9e,	// (0x00065bb7) navi_icon_text_pane_g1

0xcaaa,	// (0x00065bc3) navi_icon_text_pane_t1

0x1fbd,	// (0x0005b0d6) list_set_graphic_pane_t1_ParamLimits

0x1fbd,	// (0x0005b0d6) list_set_graphic_pane_t1

0x36ba,	// (0x0005c7d3) popup_midp_note_alarm_window_t6_ParamLimits

0x36ba,	// (0x0005c7d3) popup_midp_note_alarm_window_t6

0x36cc,	// (0x0005c7e5) popup_midp_note_alarm_window_t7_ParamLimits

0x36cc,	// (0x0005c7e5) popup_midp_note_alarm_window_t7

0x36de,	// (0x0005c7f7) popup_midp_note_alarm_window_t8_ParamLimits

0x36de,	// (0x0005c7f7) popup_midp_note_alarm_window_t8

0x36f0,	// (0x0005c809) popup_midp_note_alarm_window_t9_ParamLimits

0x36f0,	// (0x0005c809) popup_midp_note_alarm_window_t9

0x3702,	// (0x0005c81b) popup_midp_note_alarm_window_t10_ParamLimits

0x3702,	// (0x0005c81b) popup_midp_note_alarm_window_t10

0x3714,	// (0x0005c82d) popup_midp_note_alarm_window_t11_ParamLimits

0x3714,	// (0x0005c82d) popup_midp_note_alarm_window_t11

0x3726,	// (0x0005c83f) scroll_pane_cp17_ParamLimits

0x3726,	// (0x0005c83f) scroll_pane_cp17

0x08b0,	// (0x000599c9) volume_small_pane_cp_g1

0x0c5d,	// (0x00059d76) volume_small_pane_cp_g2

0x0c66,	// (0x00059d7f) volume_small_pane_cp_g3

0x0c6f,	// (0x00059d88) volume_small_pane_cp_g4

0x0c78,	// (0x00059d91) volume_small_pane_cp_g5

0x0c81,	// (0x00059d9a) volume_small_pane_cp_g6

0x0c8a,	// (0x00059da3) volume_small_pane_cp_g7

0x0c93,	// (0x00059dac) volume_small_pane_cp_g8

0x0c9c,	// (0x00059db5) volume_small_pane_cp_g9

0x0ca5,	// (0x00059dbe) volume_small_pane_cp_g10

0x2388,	// (0x0005b4a1) midp_ticker_pane_g1_ParamLimits

0x2394,	// (0x0005b4ad) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x00068851) midp_ticker_pane_g_ParamLimits

0xac3b,	// (0x00063d54) midp_ticker_pane_t1_ParamLimits

0xbfff,	// (0x00065118) aid_fill_nsta_2

0x2f39,	// (0x0005c052) list_form2_midp_pane

0x42a3,	// (0x0005d3bc) midp_editing_number_pane_ParamLimits

0x42b2,	// (0x0005d3cb) midp_ticker_pane_ParamLimits

0x4f89,	// (0x0005e0a2) form2_midp_field_pane

0x4fad,	// (0x0005e0c6) scroll_pane_cp51

0x4fcd,	// (0x0005e0e6) form2_midp_button_pane_ParamLimits

0x4fcd,	// (0x0005e0e6) form2_midp_button_pane

0x4fdf,	// (0x0005e0f8) form2_midp_content_pane_ParamLimits

0x4fdf,	// (0x0005e0f8) form2_midp_content_pane

0x4ff9,	// (0x0005e112) form2_midp_field_choice_group_pane

0x5001,	// (0x0005e11a) form2_midp_field_pane_g1

0x5009,	// (0x0005e122) form2_midp_field_pane_g2

0x5011,	// (0x0005e12a) form2_midp_field_pane_g3

0x5019,	// (0x0005e132) form2_midp_field_pane_g4

0x0003,

0xfad7,	// (0x00068bf0) form2_midp_field_pane_g

0x5021,	// (0x0005e13a) form2_midp_gauge_slider_pane

0x5029,	// (0x0005e142) form2_midp_gauge_wait_pane

0x5031,	// (0x0005e14a) form2_midp_image_pane_ParamLimits

0x5031,	// (0x0005e14a) form2_midp_image_pane

0x504c,	// (0x0005e165) form2_midp_label_pane_ParamLimits

0x504c,	// (0x0005e165) form2_midp_label_pane

0xcad8,	// (0x00065bf1) form2_midp_label_pane_cp_ParamLimits

0xcad8,	// (0x00065bf1) form2_midp_label_pane_cp

0x508c,	// (0x0005e1a5) form2_midp_string_pane_ParamLimits

0x508c,	// (0x0005e1a5) form2_midp_string_pane

0xb704,	// (0x0006481d) form2_midp_text_pane_ParamLimits

0xb704,	// (0x0006481d) form2_midp_text_pane

0x509e,	// (0x0005e1b7) form2_midp_time_pane

0x50ae,	// (0x0005e1c7) input_focus_pane_cp51_ParamLimits

0x50ae,	// (0x0005e1c7) input_focus_pane_cp51

0x50c6,	// (0x0005e1df) form2_midp_label_pane_t1_ParamLimits

0x50c6,	// (0x0005e1df) form2_midp_label_pane_t1

0xb727,	// (0x00064840) form2_mdip_text_pane_t1_ParamLimits

0xb727,	// (0x00064840) form2_mdip_text_pane_t1

0xe35e,	// (0x00067477) form2_midp_time_pane_t1

0x5114,	// (0x0005e22d) form2_midp_gauge_slider_pane_t1

0xcaf9,	// (0x00065c12) form2_midp_gauge_slider_pane_t2

0xcb0b,	// (0x00065c24) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae0,	// (0x00068bf9) form2_midp_gauge_slider_pane_t

0x514a,	// (0x0005e263) form2_midp_slider_pane

0x5156,	// (0x0005e26f) form2_midp_gauge_wait_pane_t1

0x5164,	// (0x0005e27d) form2_midp_wait_pane_ParamLimits

0x5164,	// (0x0005e27d) form2_midp_wait_pane

0x2c64,	// (0x0005bd7d) list_single_2graphic_pane_cp4_ParamLimits

0x2c64,	// (0x0005bd7d) list_single_2graphic_pane_cp4

0xc439,	// (0x00065552) list_single_midp_graphic_pane_cp_ParamLimits

0xc439,	// (0x00065552) list_single_midp_graphic_pane_cp

0x88dd,	// (0x000619f6) list_highlight_pane_cp20

0x51a8,	// (0x0005e2c1) list_single_2graphic_pane_g1_cp4

0x4741,	// (0x0005d85a) list_single_2graphic_pane_g2_cp4

0x51b0,	// (0x0005e2c9) list_single_2graphic_pane_t1_cp4

0x892b,	// (0x00061a44) list_highlight_pane_cp21

0x51bf,	// (0x0005e2d8) list_single_midp_graphic_pane_g4_cp

0x51ce,	// (0x0005e2e7) list_single_midp_graphic_pane_t1_cp

0xcb1d,	// (0x00065c36) form2_mdip_string_pane_t1_ParamLimits

0xcb1d,	// (0x00065c36) form2_mdip_string_pane_t1

0x88dd,	// (0x000619f6) bg_wml_button_pane_cp2

0x88d3,	// (0x000619ec) form2_midp_image_pane_g1

0xefbf,	// (0x000680d8) list_double_large_graphic_pane_g5_ParamLimits

0xefbf,	// (0x000680d8) list_double_large_graphic_pane_g5

0xab97,	// (0x00063cb0) midp_form_pane_ParamLimits

0x892b,	// (0x00061a44) main_apps_wheel_pane_ParamLimits

0xb1e7,	// (0x00064300) popup_preview_window_ParamLimits

0xb1e7,	// (0x00064300) popup_preview_window

0x06e1,	// (0x000597fa) popup_touch_info_window_ParamLimits

0x06e1,	// (0x000597fa) popup_touch_info_window

0x0703,	// (0x0005981c) popup_touch_menu_window_ParamLimits

0x0703,	// (0x0005981c) popup_touch_menu_window

0x88c9,	// (0x000619e2) bg_popup_sub_pane_cp6

0x527f,	// (0x0005e398) list_touch_menu_pane

0x5287,	// (0x0005e3a0) list_single_touch_menu_pane_ParamLimits

0x5287,	// (0x0005e3a0) list_single_touch_menu_pane

0x529f,	// (0x0005e3b8) list_single_touch_menu_pane_t1

0x892b,	// (0x00061a44) bg_popup_sub_pane_cp7_ParamLimits

0x892b,	// (0x00061a44) bg_popup_sub_pane_cp7

0x52ad,	// (0x0005e3c6) heading_sub_pane

0x52b5,	// (0x0005e3ce) list_touch_info_pane_ParamLimits

0x52b5,	// (0x0005e3ce) list_touch_info_pane

0x52c4,	// (0x0005e3dd) list_single_touch_info_pane_ParamLimits

0x52c4,	// (0x0005e3dd) list_single_touch_info_pane

0x52d6,	// (0x0005e3ef) list_single_touch_info_pane_t1

0x52e4,	// (0x0005e3fd) list_single_touch_info_pane_t2

0x0001,

0xfaee,	// (0x00068c07) list_single_touch_info_pane_t

0x22aa,	// (0x0005b3c3) bg_popup_heading_pane_cp

0x52f2,	// (0x0005e40b) heading_sub_pane_t1

0x2bab,	// (0x0005bcc4) bg_popup_preview_window_pane_cp_ParamLimits

0x2bab,	// (0x0005bcc4) bg_popup_preview_window_pane_cp

0x52ad,	// (0x0005e3c6) heading_preview_pane

0x52b5,	// (0x0005e3ce) list_preview_pane_ParamLimits

0x52b5,	// (0x0005e3ce) list_preview_pane

0x5300,	// (0x0005e419) popup_preview_window_g1

0x52c4,	// (0x0005e3dd) list_single_preview_pane_ParamLimits

0x52c4,	// (0x0005e3dd) list_single_preview_pane

0x5308,	// (0x0005e421) list_single_preview_pane_g1

0x5310,	// (0x0005e429) list_single_preview_pane_t1

0x52d6,	// (0x0005e3ef) list_single_preview_pane_t2

0x0001,

0xfaf3,	// (0x00068c0c) list_single_preview_pane_t

0x531e,	// (0x0005e437) bg_popup_heading_pane_cp2_ParamLimits

0x531e,	// (0x0005e437) bg_popup_heading_pane_cp2

0x5334,	// (0x0005e44d) heading_preview_pane_g1

0x533c,	// (0x0005e455) heading_preview_pane_t1_ParamLimits

0x533c,	// (0x0005e455) heading_preview_pane_t1

0x897e,	// (0x00061a97) soft_indicator_pane_t1_ParamLimits

0x8eee,	// (0x00062007) scroll_pane_ParamLimits

0xdd0b,	// (0x00066e24) scroll_sc2_left_pane

0xdd14,	// (0x00066e2d) scroll_sc2_right_pane

0xdd33,	// (0x00066e4c) scroll_bg_pane_g1_ParamLimits

0xdd48,	// (0x00066e61) scroll_bg_pane_g2_ParamLimits

0xdd60,	// (0x00066e79) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x000687dc) scroll_bg_pane_g_ParamLimits

0xdd33,	// (0x00066e4c) scroll_handle_pane_g1_ParamLimits

0xdd82,	// (0x00066e9b) scroll_handle_pane_g2_ParamLimits

0xdd60,	// (0x00066e79) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x000687e3) scroll_handle_pane_g_ParamLimits

0x013f,	// (0x00059258) popup_choice_list_window_ParamLimits

0x013f,	// (0x00059258) popup_choice_list_window

0x2a51,	// (0x0005bb6a) choice_list_pane

0x2aeb,	// (0x0005bc04) cell_toolbar_pane_t1

0x2b13,	// (0x0005bc2c) toolbar_button_pane_ParamLimits

0x3dde,	// (0x0005cef7) ai_gene_pane_1_t2_ParamLimits

0x3dde,	// (0x0005cef7) ai_gene_pane_1_t2

0x0001,

0xf8ed,	// (0x00068a06) ai_gene_pane_1_t_ParamLimits

0xf8ed,	// (0x00068a06) ai_gene_pane_1_t

0x5359,	// (0x0005e472) scroll_sc2_left_pane_g1

0x5359,	// (0x0005e472) scroll_sc2_right_pane_g1

0x25d1,	// (0x0005b6ea) bg_popup_sub_pane_cp10

0x5363,	// (0x0005e47c) list_choice_list_pane

0x537c,	// (0x0005e495) list_single_choice_list_pane_ParamLimits

0x537c,	// (0x0005e495) list_single_choice_list_pane

0x5394,	// (0x0005e4ad) list_single_choice_list_pane_g1

0x90dc,	// (0x000621f5) list_single_choice_list_pane_t1_ParamLimits

0x90dc,	// (0x000621f5) list_single_choice_list_pane_t1

0x539c,	// (0x0005e4b5) choice_list_pane_g1

0x53a4,	// (0x0005e4bd) choice_list_pane_t1

0x88c9,	// (0x000619e2) input_focus_pane_cp11

0xbfb0,	// (0x000650c9) title_pane_stacon_g2_ParamLimits

0xbfb0,	// (0x000650c9) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x000687c2) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x000687c2) title_pane_stacon_g

0x22aa,	// (0x0005b3c3) cursor_press_pane

0xae5e,	// (0x00063f77) popup_fep_hwr_window_ParamLimits

0xae5e,	// (0x00063f77) popup_fep_hwr_window

0x0283,	// (0x0005939c) popup_fep_vkb_window_ParamLimits

0x0283,	// (0x0005939c) popup_fep_vkb_window

0x53b2,	// (0x0005e4cb) cursor_press_pane_g1

0x0002,

0xfb1c,	// (0x00068c35) fep_vkb_side_pane_g_ParamLimits

0x0d29,	// (0x00059e42) fep_hwr_candidate_pane_ParamLimits

0x0d29,	// (0x00059e42) fep_hwr_candidate_pane

0x0d53,	// (0x00059e6c) fep_hwr_side_pane_ParamLimits

0x0d53,	// (0x00059e6c) fep_hwr_side_pane

0x0d75,	// (0x00059e8e) fep_hwr_top_pane_ParamLimits

0x0d75,	// (0x00059e8e) fep_hwr_top_pane

0x0d8d,	// (0x00059ea6) fep_hwr_write_pane_ParamLimits

0x0d8d,	// (0x00059ea6) fep_hwr_write_pane

0xfb1c,	// (0x00068c35) fep_vkb_side_pane_g

0x53ba,	// (0x0005e4d3) fep_hwr_top_pane_g1

0x53cc,	// (0x0005e4e5) fep_hwr_top_pane_g2

0x0dc7,	// (0x00059ee0) fep_hwr_top_pane_g3

0x0002,

0xfaf8,	// (0x00068c11) fep_hwr_top_pane_g

0x0ddc,	// (0x00059ef5) fep_hwr_top_text_pane

0xde7c,	// (0x00066f95) fep_hwr_top_text_pane_g1

0x5402,	// (0x0005e51b) fep_hwr_top_text_pane_t1

0x0ee6,	// (0x00059fff) fep_hwr_candidate_pane_g1

0x564d,	// (0x0005e766) fep_vkb_keypad_pane_g3_ParamLimits

0x564d,	// (0x0005e766) fep_vkb_keypad_pane_g3

0x5679,	// (0x0005e792) fep_vkb_keypad_pane_g4_ParamLimits

0x5679,	// (0x0005e792) fep_vkb_keypad_pane_g4

0x56f0,	// (0x0005e809) fep_vkb_bottom_pane_g2_ParamLimits

0x56f0,	// (0x0005e809) fep_vkb_bottom_pane_g2

0x0001,

0xfb23,	// (0x00068c3c) fep_vkb_bottom_pane_g_ParamLimits

0xfb23,	// (0x00068c3c) fep_vkb_bottom_pane_g

0x5359,	// (0x0005e472) cell_vkb_side_pane_g2

0x0001,

0xfb2d,	// (0x00068c46) cell_vkb_side_pane_g

0x577b,	// (0x0005e894) cell_vkb_side_pane_t1

0x5789,	// (0x0005e8a2) cell_vkb_side_pane_t1_copy1

0x5359,	// (0x0005e472) bg_fep_vkb_candidate_pane_g2

0x58cd,	// (0x0005e9e6) cell_vkb_candidate_pane_ParamLimits

0x5410,	// (0x0005e529) aid_size_cell_vkb_ParamLimits

0x5410,	// (0x0005e529) aid_size_cell_vkb

0x58cd,	// (0x0005e9e6) cell_vkb_candidate_pane

0x0f0d,	// (0x0005a026) bg_popup_fep_shadow_pane_g1

0xcbb3,	// (0x00065ccc) fep_vkb_bottom_pane_ParamLimits

0xcbb3,	// (0x00065ccc) fep_vkb_bottom_pane

0x54df,	// (0x0005e5f8) fep_vkb_candidate_pane_ParamLimits

0x54df,	// (0x0005e5f8) fep_vkb_candidate_pane

0xcbdf,	// (0x00065cf8) fep_vkb_keypad_pane_ParamLimits

0xcbdf,	// (0x00065cf8) fep_vkb_keypad_pane

0xcc06,	// (0x00065d1f) fep_vkb_side_pane_ParamLimits

0xcc06,	// (0x00065d1f) fep_vkb_side_pane

0xcc42,	// (0x00065d5b) fep_vkb_top_pane_ParamLimits

0xcc42,	// (0x00065d5b) fep_vkb_top_pane

0x55a6,	// (0x0005e6bf) fep_vkb_top_pane_g1_ParamLimits

0x55a6,	// (0x0005e6bf) fep_vkb_top_pane_g1

0x55b5,	// (0x0005e6ce) fep_vkb_top_pane_g2_ParamLimits

0x55b5,	// (0x0005e6ce) fep_vkb_top_pane_g2

0x55c4,	// (0x0005e6dd) fep_vkb_top_pane_g3_ParamLimits

0x55c4,	// (0x0005e6dd) fep_vkb_top_pane_g3

0x0003,

0xfb13,	// (0x00068c2c) fep_vkb_top_pane_g_ParamLimits

0xfb13,	// (0x00068c2c) fep_vkb_top_pane_g

0x55e2,	// (0x0005e6fb) fep_vkb_top_text_pane_ParamLimits

0x55e2,	// (0x0005e6fb) fep_vkb_top_text_pane

0xcc7e,	// (0x00065d97) fep_vkb_side_pane_g1_ParamLimits

0xcc7e,	// (0x00065d97) fep_vkb_side_pane_g1

0x563c,	// (0x0005e755) grid_vkb_side_pane_ParamLimits

0x563c,	// (0x0005e755) grid_vkb_side_pane

0x0f15,	// (0x0005a02e) bg_popup_fep_shadow_pane_g2

0x0f1e,	// (0x0005a037) bg_popup_fep_shadow_pane_g3

0x0f26,	// (0x0005a03f) bg_popup_fep_shadow_pane_g4

0x0f2f,	// (0x0005a048) bg_popup_fep_shadow_pane_g5

0x0f39,	// (0x0005a052) bg_popup_fep_shadow_pane_g6

0x0f41,	// (0x0005a05a) bg_popup_fep_shadow_pane_g7

0x8feb,	// (0x00062104) bg_popup_fep_shadow_pane_g8

0x569b,	// (0x0005e7b4) grid_vkb_keypad_number_pane_ParamLimits

0x569b,	// (0x0005e7b4) grid_vkb_keypad_number_pane

0x56af,	// (0x0005e7c8) grid_vkb_keypad_pane_ParamLimits

0x56af,	// (0x0005e7c8) grid_vkb_keypad_pane

0x56d5,	// (0x0005e7ee) fep_vkb_bottom_pane_g1_ParamLimits

0x56d5,	// (0x0005e7ee) fep_vkb_bottom_pane_g1

0x56fe,	// (0x0005e817) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x56fe,	// (0x0005e817) grid_vkb_keypad_bottom_left_pane

0x5713,	// (0x0005e82c) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x5713,	// (0x0005e82c) grid_vkb_keypad_bottom_right_pane

0x5728,	// (0x0005e841) fep_vkb_top_text_pane_g1

0xccc5,	// (0x00065dde) fep_vkb_top_text_pane_t1

0xccd7,	// (0x00065df0) cell_vkb_side_pane_ParamLimits

0xccd7,	// (0x00065df0) cell_vkb_side_pane

0x5359,	// (0x0005e472) cell_vkb_side_pane_g1

0x5797,	// (0x0005e8b0) cell_vkb_keypad_pane_ParamLimits

0x5797,	// (0x0005e8b0) cell_vkb_keypad_pane

0x5824,	// (0x0005e93d) cell_vkb_keypad_pane_g1

0x0008,

0xfb40,	// (0x00068c59) bg_popup_fep_shadow_pane_g

0x0f53,	// (0x0005a06c) cell_hwr_side_pane_g1

0x0f53,	// (0x0005a06c) cell_hwr_side_pane_g2

0x582e,	// (0x0005e947) cell_vkb_keypad_pane_t1

0xcced,	// (0x00065e06) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcced,	// (0x00065e06) cell_vkb_keypad_bottom_left_pane

0xcd02,	// (0x00065e1b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcd02,	// (0x00065e1b) cell_vkb_keypad_bottom_right_pane

0x5359,	// (0x0005e472) cell_vkb_keypad_bottom_left_pane_g1

0x5359,	// (0x0005e472) cell_vkb_keypad_bottom_right_pane_g1

0x5892,	// (0x0005e9ab) cell_vkb_keypad_number_pane_ParamLimits

0x5892,	// (0x0005e9ab) cell_vkb_keypad_number_pane

0x58b1,	// (0x0005e9ca) cell_vkb_keypad_number_pane_g1

0x58bb,	// (0x0005e9d4) cell_vkb_keypad_number_pane_g2

0x58c4,	// (0x0005e9dd) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb32,	// (0x00068c4b) cell_vkb_keypad_number_pane_g

0x582e,	// (0x0005e947) cell_vkb_keypad_number_pane_t1

0x58ee,	// (0x0005ea07) fep_vkb_candidate_pane_g1

0x0001,

0xfb53,	// (0x00068c6c) cell_hwr_side_pane_g

0x5907,	// (0x0005ea20) cell_hwr_side_pane_t1

0x0f5d,	// (0x0005a076) cell_hwr_side_pane_t1_copy1

0x0f6b,	// (0x0005a084) cell_hwr_candidate_pane_g1

0x0f9a,	// (0x0005a0b3) cell_hwr_candidate_pane_t1

0x5359,	// (0x0005e472) cell_vkb_candidate_pane_g2

0x594b,	// (0x0005ea64) cell_vkb_candidate_pane_t1

0x0cf0,	// (0x00059e09) bg_popup_fep_shadow_pane_ParamLimits

0x0cf0,	// (0x00059e09) bg_popup_fep_shadow_pane

0x0da7,	// (0x00059ec0) bg_fep_hwr_top_pane_g4

0x53de,	// (0x0005e4f7) bg_hwr_side_pane_g1_ParamLimits

0x53de,	// (0x0005e4f7) bg_hwr_side_pane_g1

0xb75b,	// (0x00064874) cell_hwr_side_pane_ParamLimits

0xb75b,	// (0x00064874) cell_hwr_side_pane

0x0e57,	// (0x00059f70) fep_hwr_write_pane_g1_ParamLimits

0x0e57,	// (0x00059f70) fep_hwr_write_pane_g1

0x0e64,	// (0x00059f7d) fep_hwr_write_pane_g2_ParamLimits

0x0e64,	// (0x00059f7d) fep_hwr_write_pane_g2

0x0e71,	// (0x00059f8a) fep_hwr_write_pane_g3_ParamLimits

0x0e71,	// (0x00059f8a) fep_hwr_write_pane_g3

0xb77b,	// (0x00064894) fep_hwr_write_pane_g4_ParamLimits

0xb77b,	// (0x00064894) fep_hwr_write_pane_g4

0x0005,

0xfaff,	// (0x00068c18) fep_hwr_write_pane_g_ParamLimits

0xfaff,	// (0x00068c18) fep_hwr_write_pane_g

0x0da7,	// (0x00059ec0) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0da7,	// (0x00059ec0) bg_fep_hwr_candidate_pane_g2

0x0e94,	// (0x00059fad) cell_hwr_candidate_pane_ParamLimits

0x0e94,	// (0x00059fad) cell_hwr_candidate_pane

0x0ee6,	// (0x00059fff) fep_hwr_candidate_pane_g1_ParamLimits

0x543e,	// (0x0005e557) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x543e,	// (0x0005e557) bg_popup_fep_shadow_pane_cp2

0x55d4,	// (0x0005e6ed) fep_vkb_top_pane_g4_ParamLimits

0x55d4,	// (0x0005e6ed) fep_vkb_top_pane_g4

0x561a,	// (0x0005e733) fep_vkb_side_pane_g2_ParamLimits

0x561a,	// (0x0005e733) fep_vkb_side_pane_g2

0xa5df,	// (0x000636f8) list_setting_pane_t4_ParamLimits

0xa5df,	// (0x000636f8) list_setting_pane_t4

0xa67b,	// (0x00063794) list_setting_number_pane_t5_ParamLimits

0xa67b,	// (0x00063794) list_setting_number_pane_t5

0xdeb3,	// (0x00066fcc) list_double_heading_pane_cp2_ParamLimits

0xdeb3,	// (0x00066fcc) list_double_heading_pane_cp2

0x5959,	// (0x0005ea72) list_double_heading_pane_g1_cp2_ParamLimits

0x5959,	// (0x0005ea72) list_double_heading_pane_g1_cp2

0x5965,	// (0x0005ea7e) list_double_heading_pane_g2_cp2_ParamLimits

0x5965,	// (0x0005ea7e) list_double_heading_pane_g2_cp2

0x5979,	// (0x0005ea92) list_double_heading_pane_t1_cp2_ParamLimits

0x5979,	// (0x0005ea92) list_double_heading_pane_t1_cp2

0x598f,	// (0x0005eaa8) list_double_heading_pane_t2_cp2_ParamLimits

0x598f,	// (0x0005eaa8) list_double_heading_pane_t2_cp2

0x88c1,	// (0x000619da) aid_value_unit2

0xef22,	// (0x0006803b) popup_preview_fixed_window

0x8a6c,	// (0x00061b85) bg_popup_preview_window_pane_cp02

0x59a1,	// (0x0005eaba) list_preview_fixed_pane

0x59e7,	// (0x0005eb00) list_empty_pane_fp_ParamLimits

0x59e7,	// (0x0005eb00) list_empty_pane_fp

0x59e7,	// (0x0005eb00) list_single_cale_day_pane_fp_ParamLimits

0x59e7,	// (0x0005eb00) list_single_cale_day_pane_fp

0x59e7,	// (0x0005eb00) list_single_graphic_heading_pane_fp_ParamLimits

0x59e7,	// (0x0005eb00) list_single_graphic_heading_pane_fp

0x59e7,	// (0x0005eb00) list_single_graphic_pane_fp_ParamLimits

0x59e7,	// (0x0005eb00) list_single_graphic_pane_fp

0x59e7,	// (0x0005eb00) list_single_heading_pane_fp_ParamLimits

0x59e7,	// (0x0005eb00) list_single_heading_pane_fp

0x59e7,	// (0x0005eb00) list_single_pane_fp_ParamLimits

0x59e7,	// (0x0005eb00) list_single_pane_fp

0x5a00,	// (0x0005eb19) list_single_pane_fp_g1_ParamLimits

0x5a00,	// (0x0005eb19) list_single_pane_fp_g1

0x39fe,	// (0x0005cb17) list_single_pane_fp_g2_ParamLimits

0x39fe,	// (0x0005cb17) list_single_pane_fp_g2

0x3a0a,	// (0x0005cb23) list_single_pane_fp_g3_ParamLimits

0x3a0a,	// (0x0005cb23) list_single_pane_fp_g3

0x5a0c,	// (0x0005eb25) list_single_pane_fp_g4_ParamLimits

0x5a0c,	// (0x0005eb25) list_single_pane_fp_g4

0x0003,

0xfb66,	// (0x00068c7f) list_single_pane_fp_g_ParamLimits

0xfb66,	// (0x00068c7f) list_single_pane_fp_g

0xe37e,	// (0x00067497) list_single_pane_fp_t1_ParamLimits

0xe37e,	// (0x00067497) list_single_pane_fp_t1

0xe395,	// (0x000674ae) list_single_graphic_pane_fp_g1_ParamLimits

0xe395,	// (0x000674ae) list_single_graphic_pane_fp_g1

0x5a00,	// (0x0005eb19) list_single_graphic_pane_fp_g2_ParamLimits

0x5a00,	// (0x0005eb19) list_single_graphic_pane_fp_g2

0x39fe,	// (0x0005cb17) list_single_graphic_pane_fp_g3_ParamLimits

0x39fe,	// (0x0005cb17) list_single_graphic_pane_fp_g3

0x3a0a,	// (0x0005cb23) list_single_graphic_pane_fp_g4_ParamLimits

0x3a0a,	// (0x0005cb23) list_single_graphic_pane_fp_g4

0x5a0c,	// (0x0005eb25) list_single_graphic_pane_fp_g5_ParamLimits

0x5a0c,	// (0x0005eb25) list_single_graphic_pane_fp_g5

0x0004,

0xfb6f,	// (0x00068c88) list_single_graphic_pane_fp_g_ParamLimits

0xfb6f,	// (0x00068c88) list_single_graphic_pane_fp_g

0xe3a1,	// (0x000674ba) list_single_graphic_pane_fp_t1_ParamLimits

0xe3a1,	// (0x000674ba) list_single_graphic_pane_fp_t1

0xe395,	// (0x000674ae) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xe395,	// (0x000674ae) list_single_graphic_heading_pane_fp_g1

0x5a00,	// (0x0005eb19) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5a00,	// (0x0005eb19) list_single_graphic_heading_pane_fp_g2

0x39fe,	// (0x0005cb17) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x39fe,	// (0x0005cb17) list_single_graphic_heading_pane_fp_g3

0x3a0a,	// (0x0005cb23) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3a0a,	// (0x0005cb23) list_single_graphic_heading_pane_fp_g4

0x5a0c,	// (0x0005eb25) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5a0c,	// (0x0005eb25) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb6f,	// (0x00068c88) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb6f,	// (0x00068c88) list_single_graphic_heading_pane_fp_g

0xe3b7,	// (0x000674d0) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xe3b7,	// (0x000674d0) list_single_graphic_heading_pane_fp_t1

0xe3cd,	// (0x000674e6) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xe3cd,	// (0x000674e6) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb7a,	// (0x00068c93) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb7a,	// (0x00068c93) list_single_graphic_heading_pane_fp_t

0xe3df,	// (0x000674f8) list_single_cale_day_pane_fp_g1_ParamLimits

0xe3df,	// (0x000674f8) list_single_cale_day_pane_fp_g1

0x5a18,	// (0x0005eb31) list_single_cale_day_pane_fp_g2_ParamLimits

0x5a18,	// (0x0005eb31) list_single_cale_day_pane_fp_g2

0x3a1e,	// (0x0005cb37) list_single_cale_day_pane_fp_g3_ParamLimits

0x3a1e,	// (0x0005cb37) list_single_cale_day_pane_fp_g3

0x3a46,	// (0x0005cb5f) list_single_cale_day_pane_fp_g4_ParamLimits

0x3a46,	// (0x0005cb5f) list_single_cale_day_pane_fp_g4

0x3a6a,	// (0x0005cb83) list_single_cale_day_pane_fp_g5_ParamLimits

0x3a6a,	// (0x0005cb83) list_single_cale_day_pane_fp_g5

0x0004,

0xfb7f,	// (0x00068c98) list_single_cale_day_pane_fp_g_ParamLimits

0xfb7f,	// (0x00068c98) list_single_cale_day_pane_fp_g

0xe417,	// (0x00067530) list_single_cale_day_pane_fp_t1_ParamLimits

0xe417,	// (0x00067530) list_single_cale_day_pane_fp_t1

0xe43d,	// (0x00067556) list_single_cale_day_pane_fp_t2_ParamLimits

0xe43d,	// (0x00067556) list_single_cale_day_pane_fp_t2

0xe456,	// (0x0006756f) list_single_cale_day_pane_fp_t3_ParamLimits

0xe456,	// (0x0006756f) list_single_cale_day_pane_fp_t3

0x0002,

0xfb8a,	// (0x00068ca3) list_single_cale_day_pane_fp_t_ParamLimits

0xfb8a,	// (0x00068ca3) list_single_cale_day_pane_fp_t

0x5a00,	// (0x0005eb19) list_empty_pane_fp_g1_ParamLimits

0x5a00,	// (0x0005eb19) list_empty_pane_fp_g1

0xe46f,	// (0x00067588) list_empty_pane_fp_t1

0xe47d,	// (0x00067596) list_empty_pane_fp_t2

0x0001,

0xfb91,	// (0x00068caa) list_empty_pane_fp_t

0x5a00,	// (0x0005eb19) list_single_heading_pane_fp_g1_ParamLimits

0x5a00,	// (0x0005eb19) list_single_heading_pane_fp_g1

0x39fe,	// (0x0005cb17) list_single_heading_pane_fp_g2_ParamLimits

0x39fe,	// (0x0005cb17) list_single_heading_pane_fp_g2

0x3a0a,	// (0x0005cb23) list_single_heading_pane_fp_g3_ParamLimits

0x3a0a,	// (0x0005cb23) list_single_heading_pane_fp_g3

0x0002,

0xfb96,	// (0x00068caf) list_single_heading_pane_fp_g_ParamLimits

0xfb96,	// (0x00068caf) list_single_heading_pane_fp_g

0xe48b,	// (0x000675a4) list_single_heading_pane_fp_t1_ParamLimits

0xe48b,	// (0x000675a4) list_single_heading_pane_fp_t1

0xe49d,	// (0x000675b6) list_single_heading_pane_fp_t2_ParamLimits

0xe49d,	// (0x000675b6) list_single_heading_pane_fp_t2

0x0001,

0xfb9d,	// (0x00068cb6) list_single_heading_pane_fp_t_ParamLimits

0xfb9d,	// (0x00068cb6) list_single_heading_pane_fp_t

0x90f1,	// (0x0006220a) aid_size_cell_fast

0x8a41,	// (0x00061b5a) soft_indicator_pane_cp1_t1

0x912e,	// (0x00062247) cell_app_pane_cp2_ParamLimits

0x912e,	// (0x00062247) cell_app_pane_cp2

0x0d12,	// (0x00059e2b) fep_hwr_candidate_drop_down_list_pane

0x0f00,	// (0x0005a019) fep_hwr_candidate_pane_g3_ParamLimits

0x0f00,	// (0x0005a019) fep_hwr_candidate_pane_g3

0xe371,	// (0x0006748a) fep_hwr_candidate_pane_g4_ParamLimits

0xe371,	// (0x0006748a) fep_hwr_candidate_pane_g4

0x0002,

0xfb0c,	// (0x00068c25) fep_hwr_candidate_pane_g_ParamLimits

0xfb0c,	// (0x00068c25) fep_hwr_candidate_pane_g

0x54ce,	// (0x0005e5e7) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x54ce,	// (0x0005e5e7) fep_vkb_candidate_drop_down_list_pane

0x58f6,	// (0x0005ea0f) fep_vkb_candidate_pane_g3

0x58fe,	// (0x0005ea17) fep_vkb_candidate_pane_g4

0x0002,

0xfb39,	// (0x00068c52) fep_vkb_candidate_pane_g

0x0f6b,	// (0x0005a084) cell_hwr_candidate_pane_g1_ParamLimits

0x0f79,	// (0x0005a092) cell_hwr_candidate_pane_g3_ParamLimits

0x0f79,	// (0x0005a092) cell_hwr_candidate_pane_g3

0x72bc,	// (0x000603d5) cell_hwr_candidate_pane_g4_ParamLimits

0x72bc,	// (0x000603d5) cell_hwr_candidate_pane_g4

0x0002,

0xfb58,	// (0x00068c71) cell_hwr_candidate_pane_g_ParamLimits

0xfb58,	// (0x00068c71) cell_hwr_candidate_pane_g

0x5915,	// (0x0005ea2e) cell_vkb_candidate_pane_g3_ParamLimits

0x5915,	// (0x0005ea2e) cell_vkb_candidate_pane_g3

0x5930,	// (0x0005ea49) cell_vkb_candidate_pane_g4_ParamLimits

0x5930,	// (0x0005ea49) cell_vkb_candidate_pane_g4

0x5a24,	// (0x0005eb3d) cell_app_pane_cp2_g1_ParamLimits

0x5a24,	// (0x0005eb3d) cell_app_pane_cp2_g1

0x5a42,	// (0x0005eb5b) cell_app_pane_cp2_g2_ParamLimits

0x5a42,	// (0x0005eb5b) cell_app_pane_cp2_g2

0x0001,

0xfba2,	// (0x00068cbb) cell_app_pane_cp2_g_ParamLimits

0xfba2,	// (0x00068cbb) cell_app_pane_cp2_g

0x5a4e,	// (0x0005eb67) cell_app_pane_cp2_t1_ParamLimits

0x5a4e,	// (0x0005eb67) cell_app_pane_cp2_t1

0x8f7b,	// (0x00062094) grid_highlight_pane_cp1_ParamLimits

0x8f7b,	// (0x00062094) grid_highlight_pane_cp1

0x0fb8,	// (0x0005a0d1) cell_hwr_candidate_pane_cp1_ParamLimits

0x0fb8,	// (0x0005a0d1) cell_hwr_candidate_pane_cp1

0x0f6b,	// (0x0005a084) fep_hwr_candidate_drop_down_list_pane_g1

0x0fdc,	// (0x0005a0f5) fep_hwr_candidate_drop_down_list_pane_g2

0x0fe9,	// (0x0005a102) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba7,	// (0x00068cc0) fep_hwr_candidate_drop_down_list_pane_g

0x0ff6,	// (0x0005a10f) fep_hwr_candidate_drop_down_list_scroll_pane

0x0fff,	// (0x0005a118) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0fff,	// (0x0005a118) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x100c,	// (0x0005a125) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x100c,	// (0x0005a125) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1019,	// (0x0005a132) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1019,	// (0x0005a132) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1026,	// (0x0005a13f) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1026,	// (0x0005a13f) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1041,	// (0x0005a15a) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1041,	// (0x0005a15a) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x105c,	// (0x0005a175) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x105c,	// (0x0005a175) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1077,	// (0x0005a190) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1077,	// (0x0005a190) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1092,	// (0x0005a1ab) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1092,	// (0x0005a1ab) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbae,	// (0x00068cc7) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbae,	// (0x00068cc7) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5a60,	// (0x0005eb79) cell_vkb_candidate_pane_cp1_ParamLimits

0x5a60,	// (0x0005eb79) cell_vkb_candidate_pane_cp1

0x55d4,	// (0x0005e6ed) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x55d4,	// (0x0005e6ed) fep_vkb_candidate_drop_down_list_pane_g1

0x5a86,	// (0x0005eb9f) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5a86,	// (0x0005eb9f) fep_vkb_candidate_drop_down_list_pane_g2

0x5a93,	// (0x0005ebac) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5a93,	// (0x0005ebac) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbbf,	// (0x00068cd8) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbbf,	// (0x00068cd8) fep_vkb_candidate_drop_down_list_pane_g

0x5aa0,	// (0x0005ebb9) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5aa0,	// (0x0005ebb9) fep_vkb_candidate_drop_down_list_scroll_pane

0x5aad,	// (0x0005ebc6) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5aad,	// (0x0005ebc6) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5aba,	// (0x0005ebd3) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5aba,	// (0x0005ebd3) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5ac6,	// (0x0005ebdf) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5ac6,	// (0x0005ebdf) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5ad2,	// (0x0005ebeb) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5ad2,	// (0x0005ebeb) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5af3,	// (0x0005ec0c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5af3,	// (0x0005ec0c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5b14,	// (0x0005ec2d) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5b14,	// (0x0005ec2d) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5b35,	// (0x0005ec4e) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5b35,	// (0x0005ec4e) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5b56,	// (0x0005ec6f) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5b56,	// (0x0005ec6f) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc6,	// (0x00068cdf) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc6,	// (0x00068cdf) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9e49,	// (0x00062f62) title_pane_g1_ParamLimits

0x9e5c,	// (0x00062f75) title_pane_g2_ParamLimits

0xf529,	// (0x00068642) title_pane_g_ParamLimits

0xde6c,	// (0x00066f85) aid_call2_pane

0xde74,	// (0x00066f8d) aid_call_pane

0xde7c,	// (0x00066f95) popup_clock_analogue_window_g1

0xde7c,	// (0x00066f95) popup_clock_analogue_window_g2

0xf218,	// (0x00068331) popup_clock_analogue_window_g3

0xf221,	// (0x0006833a) popup_clock_analogue_window_g4

0x88d3,	// (0x000619ec) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x000687f1) popup_clock_analogue_window_g

0xf229,	// (0x00068342) popup_clock_analogue_window_t1

0xf237,	// (0x00068350) clock_digital_number_pane_ParamLimits

0xf237,	// (0x00068350) clock_digital_number_pane

0xf243,	// (0x0006835c) clock_digital_number_pane_cp02_ParamLimits

0xf243,	// (0x0006835c) clock_digital_number_pane_cp02

0xf24f,	// (0x00068368) clock_digital_number_pane_cp03_ParamLimits

0xf24f,	// (0x00068368) clock_digital_number_pane_cp03

0xf25b,	// (0x00068374) clock_digital_number_pane_cp04_ParamLimits

0xf25b,	// (0x00068374) clock_digital_number_pane_cp04

0xf267,	// (0x00068380) clock_digital_separator_pane_ParamLimits

0xf267,	// (0x00068380) clock_digital_separator_pane

0xf273,	// (0x0006838c) popup_clock_digital_window_t1_ParamLimits

0xf273,	// (0x0006838c) popup_clock_digital_window_t1

0x88d3,	// (0x000619ec) clock_digital_number_pane_g1

0x88d3,	// (0x000619ec) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x000687fc) clock_digital_number_pane_g

0x88d3,	// (0x000619ec) clock_digital_separator_pane_g1

0x88d3,	// (0x000619ec) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x000687fc) clock_digital_separator_pane_g

0xb4cf,	// (0x000645e8) aid_fill_nsta_ParamLimits

0xc113,	// (0x0006522c) indicator_nsta_pane_ParamLimits

0x28ea,	// (0x0005ba03) popup_clock_analogue_window

0x28ea,	// (0x0005ba03) popup_clock_digital_window

0xc9db,	// (0x00065af4) grid_indicator_nsta_pane_ParamLimits

0x4dae,	// (0x0005dec7) clock_nsta_pane_t2

0x0001,

0xfa8c,	// (0x00068ba5) clock_nsta_pane_t

0xf1e5,	// (0x000682fe) aid_size_max_handle

0xa98e,	// (0x00063aa7) aid_size_min_handle

0x22aa,	// (0x0005b3c3) editor_scroll_pane

0x5b71,	// (0x0005ec8a) ex_editor_pane

0x90b7,	// (0x000621d0) scroll_pane_cp13

0x8f1a,	// (0x00062033) scroll_pane_cp14

0xdeab,	// (0x00066fc4) scroll_pane_cp36

0xaa1b,	// (0x00063b34) list_single_graphic_hl_pane_cp2_ParamLimits

0xaa1b,	// (0x00063b34) list_single_graphic_hl_pane_cp2

0xc868,	// (0x00065981) list_single_graphic_hl_pane_ParamLimits

0xc868,	// (0x00065981) list_single_graphic_hl_pane

0xe4b3,	// (0x000675cc) aid_size_min_hl_cp1

0x5b79,	// (0x0005ec92) list_highlight_pane_cp34_ParamLimits

0x5b79,	// (0x0005ec92) list_highlight_pane_cp34

0x5b8a,	// (0x0005eca3) list_single_graphic_hl_pane_g1_ParamLimits

0x5b8a,	// (0x0005eca3) list_single_graphic_hl_pane_g1

0xb790,	// (0x000648a9) list_single_graphic_hl_pane_g2_ParamLimits

0xb790,	// (0x000648a9) list_single_graphic_hl_pane_g2

0xb790,	// (0x000648a9) list_single_graphic_hl_pane_g3_ParamLimits

0xb790,	// (0x000648a9) list_single_graphic_hl_pane_g3

0x21e1,	// (0x0005b2fa) list_single_graphic_hl_pane_g4_ParamLimits

0x21e1,	// (0x0005b2fa) list_single_graphic_hl_pane_g4

0xcd1d,	// (0x00065e36) list_single_graphic_hl_pane_g5_ParamLimits

0xcd1d,	// (0x00065e36) list_single_graphic_hl_pane_g5

0x0004,

0xfbd7,	// (0x00068cf0) list_single_graphic_hl_pane_g_ParamLimits

0xfbd7,	// (0x00068cf0) list_single_graphic_hl_pane_g

0xb79c,	// (0x000648b5) list_single_graphic_hl_pane_t1_ParamLimits

0xb79c,	// (0x000648b5) list_single_graphic_hl_pane_t1

0x5b97,	// (0x0005ecb0) aid_size_min_hl_cp2

0x5ba0,	// (0x0005ecb9) list_highlight_pane_cp34_cp2_ParamLimits

0x5ba0,	// (0x0005ecb9) list_highlight_pane_cp34_cp2

0x5b8a,	// (0x0005eca3) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5b8a,	// (0x0005eca3) list_single_graphic_hl_pane_g1_cp2

0x5bad,	// (0x0005ecc6) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5bad,	// (0x0005ecc6) list_single_graphic_hl_pane_g2_cp2

0x5bb9,	// (0x0005ecd2) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x5bb9,	// (0x0005ecd2) list_single_graphic_hl_pane_g3_cp2

0x5bc7,	// (0x0005ece0) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5bc7,	// (0x0005ece0) list_single_graphic_hl_pane_g4_cp2

0x5bd3,	// (0x0005ecec) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5bd3,	// (0x0005ecec) list_single_graphic_hl_pane_g5_cp2

0xac8f,	// (0x00063da8) control_pane_g4_ParamLimits

0xac8f,	// (0x00063da8) control_pane_g4

0x25d1,	// (0x0005b6ea) bg_popup_sub_pane_cp10_ParamLimits

0x5363,	// (0x0005e47c) list_choice_list_pane_ParamLimits

0x5372,	// (0x0005e48b) scroll_pane_cp23

0x8a6c,	// (0x00061b85) bg_popup_preview_window_pane_cp02_ParamLimits

0x59a1,	// (0x0005eaba) list_preview_fixed_pane_ParamLimits

0x59b7,	// (0x0005ead0) list_preview_fixed_pane_cp_ParamLimits

0x59b7,	// (0x0005ead0) list_preview_fixed_pane_cp

0x59c3,	// (0x0005eadc) popup_preview_fixed_window_g1_ParamLimits

0x59c3,	// (0x0005eadc) popup_preview_fixed_window_g1

0x59cf,	// (0x0005eae8) popup_preview_fixed_window_g2_ParamLimits

0x59cf,	// (0x0005eae8) popup_preview_fixed_window_g2

0x0002,

0xfb5f,	// (0x00068c78) popup_preview_fixed_window_g_ParamLimits

0xfb5f,	// (0x00068c78) popup_preview_fixed_window_g

0xf14f,	// (0x00068268) aid_navi_side_left_pane_ParamLimits

0xf164,	// (0x0006827d) aid_navi_side_right_pane_ParamLimits

0xf17c,	// (0x00068295) navi_icon_pane_stacon_ParamLimits

0xf190,	// (0x000682a9) navi_navi_pane_stacon_ParamLimits

0xf17c,	// (0x00068295) navi_text_pane_stacon_ParamLimits

0xee13,	// (0x00067f2c) main_text_info_pane

0x5bfd,	// (0x0005ed16) listscroll_text_info_pane

0x5c05,	// (0x0005ed1e) list_text_info_pane_ParamLimits

0x5c05,	// (0x0005ed1e) list_text_info_pane

0x5c14,	// (0x0005ed2d) scroll_pane_cp24_ParamLimits

0x5c14,	// (0x0005ed2d) scroll_pane_cp24

0xcd31,	// (0x00065e4a) list_text_info_pane_t1_ParamLimits

0xcd31,	// (0x00065e4a) list_text_info_pane_t1

0xadc2,	// (0x00063edb) popup_fast_swap2_window_ParamLimits

0xadc2,	// (0x00063edb) popup_fast_swap2_window

0x5c57,	// (0x0005ed70) aid_size_cell_fast2

0x88c9,	// (0x000619e2) bg_popup_window_pane_cp17

0x5c61,	// (0x0005ed7a) heading_pane_cp2

0x5c69,	// (0x0005ed82) listscroll_fast2_pane

0x5c71,	// (0x0005ed8a) grid_fast2_pane

0x5c7b,	// (0x0005ed94) listscroll_fast2_pane_g1

0x5c85,	// (0x0005ed9e) listscroll_fast2_pane_g2

0x0001,

0xfbe2,	// (0x00068cfb) listscroll_fast2_pane_g

0x90b7,	// (0x000621d0) scroll_pane_cp26

0x5c8f,	// (0x0005eda8) cell_fast2_pane_ParamLimits

0x5c8f,	// (0x0005eda8) cell_fast2_pane

0x5ca6,	// (0x0005edbf) cell_fast2_pane_g1

0x5caf,	// (0x0005edc8) cell_fast2_pane_g2

0x5cb8,	// (0x0005edd1) cell_fast2_pane_g3

0x0002,

0xfbe7,	// (0x00068d00) cell_fast2_pane_g

0x8ce1,	// (0x00061dfa) grid_highlight_pane_cp9

0x0123,	// (0x0005923c) main_eswt_pane_ParamLimits

0x0123,	// (0x0005923c) main_eswt_pane

0x5c29,	// (0x0005ed42) list_single_text_info_pane

0x5cc0,	// (0x0005edd9) eswt_ctrl_button_pane

0x5cc0,	// (0x0005edd9) eswt_ctrl_canvas_pane

0x5cc8,	// (0x0005ede1) eswt_ctrl_combo_pane

0x5cc0,	// (0x0005edd9) eswt_ctrl_default_pane

0x5cc0,	// (0x0005edd9) eswt_ctrl_label_pane

0x5cd0,	// (0x0005ede9) eswt_ctrl_wait_pane

0x5cd8,	// (0x0005edf1) eswt_shell_pane

0x88c9,	// (0x000619e2) listscroll_eswt_app_pane

0x5cf8,	// (0x0005ee11) popup_eswt_tasktip_window_ParamLimits

0x5cf8,	// (0x0005ee11) popup_eswt_tasktip_window

0x2bab,	// (0x0005bcc4) bg_popup_window_pane_cp18

0x5d11,	// (0x0005ee2a) eswt_control_pane_g1_ParamLimits

0x5d11,	// (0x0005ee2a) eswt_control_pane_g1

0x5d1e,	// (0x0005ee37) eswt_control_pane_g2_ParamLimits

0x5d1e,	// (0x0005ee37) eswt_control_pane_g2

0x5d2b,	// (0x0005ee44) eswt_control_pane_g3_ParamLimits

0x5d2b,	// (0x0005ee44) eswt_control_pane_g3

0x5d38,	// (0x0005ee51) eswt_control_pane_g4_ParamLimits

0x5d38,	// (0x0005ee51) eswt_control_pane_g4

0x0003,

0xfbee,	// (0x00068d07) eswt_control_pane_g_ParamLimits

0xfbee,	// (0x00068d07) eswt_control_pane_g

0x8f7b,	// (0x00062094) bg_button_pane_ParamLimits

0x8f7b,	// (0x00062094) bg_button_pane

0x8cf6,	// (0x00061e0f) common_borders_pane_copy2_ParamLimits

0x8cf6,	// (0x00061e0f) common_borders_pane_copy2

0x5d45,	// (0x0005ee5e) control_button_pane_g1_ParamLimits

0x5d45,	// (0x0005ee5e) control_button_pane_g1

0x5d51,	// (0x0005ee6a) control_button_pane_g2_ParamLimits

0x5d51,	// (0x0005ee6a) control_button_pane_g2

0x5d5d,	// (0x0005ee76) control_button_pane_g3_ParamLimits

0x5d5d,	// (0x0005ee76) control_button_pane_g3

0x0002,

0xfbf7,	// (0x00068d10) control_button_pane_g_ParamLimits

0xfbf7,	// (0x00068d10) control_button_pane_g

0x5d71,	// (0x0005ee8a) control_button_pane_t1

0x5d7f,	// (0x0005ee98) control_button_pane_t2

0x0001,

0xfbfe,	// (0x00068d17) control_button_pane_t

0x2b1f,	// (0x0005bc38) bg_button_pane_g1

0x2b2f,	// (0x0005bc48) bg_button_pane_g2

0x2b27,	// (0x0005bc40) bg_button_pane_g3

0x2b3f,	// (0x0005bc58) bg_button_pane_g4

0x2b37,	// (0x0005bc50) bg_button_pane_g5

0x2b47,	// (0x0005bc60) bg_button_pane_g6

0x2b4f,	// (0x0005bc68) bg_button_pane_g7

0x2b5f,	// (0x0005bc78) bg_button_pane_g8

0x2b57,	// (0x0005bc70) bg_button_pane_g9

0x0008,

0xf841,	// (0x0006895a) bg_button_pane_g

0x531e,	// (0x0005e437) common_borders_pane_ParamLimits

0x531e,	// (0x0005e437) common_borders_pane

0x5d11,	// (0x0005ee2a) eswt_control_pane_g1_copy1_ParamLimits

0x5d11,	// (0x0005ee2a) eswt_control_pane_g1_copy1

0x5d1e,	// (0x0005ee37) eswt_control_pane_g2_copy1_ParamLimits

0x5d1e,	// (0x0005ee37) eswt_control_pane_g2_copy1

0x5d2b,	// (0x0005ee44) eswt_control_pane_g3_copy1_ParamLimits

0x5d2b,	// (0x0005ee44) eswt_control_pane_g3_copy1

0x5d38,	// (0x0005ee51) eswt_control_pane_g4_copy1_ParamLimits

0x5d38,	// (0x0005ee51) eswt_control_pane_g4_copy1

0x5359,	// (0x0005e472) bg_eswt_ctrl_canvas_pane_g1

0x531e,	// (0x0005e437) common_borders_pane_cp2_ParamLimits

0x531e,	// (0x0005e437) common_borders_pane_cp2

0x531e,	// (0x0005e437) common_borders_pane_cp3_ParamLimits

0x531e,	// (0x0005e437) common_borders_pane_cp3

0x5d8d,	// (0x0005eea6) separator_horizontal_pane

0x5d95,	// (0x0005eeae) separator_vertical_pane

0x5d11,	// (0x0005ee2a) eswt_control_pane_g1_copy2_ParamLimits

0x5d11,	// (0x0005ee2a) eswt_control_pane_g1_copy2

0x5d1e,	// (0x0005ee37) eswt_control_pane_g2_copy2_ParamLimits

0x5d1e,	// (0x0005ee37) eswt_control_pane_g2_copy2

0x5d2b,	// (0x0005ee44) eswt_control_pane_g3_copy2_ParamLimits

0x5d2b,	// (0x0005ee44) eswt_control_pane_g3_copy2

0x5d38,	// (0x0005ee51) eswt_control_pane_g4_copy2_ParamLimits

0x5d38,	// (0x0005ee51) eswt_control_pane_g4_copy2

0x88c9,	// (0x000619e2) common_borders_pane_cp4

0x5d9e,	// (0x0005eeb7) separator_horizontal_pane_g1

0x5da7,	// (0x0005eec0) separator_horizontal_pane_g2

0x5db0,	// (0x0005eec9) separator_horizontal_pane_g3

0x0002,

0xfc03,	// (0x00068d1c) separator_horizontal_pane_g

0x5d11,	// (0x0005ee2a) eswt_control_pane_g1_copy3_ParamLimits

0x5d11,	// (0x0005ee2a) eswt_control_pane_g1_copy3

0x5d1e,	// (0x0005ee37) eswt_control_pane_g2_copy3_ParamLimits

0x5d1e,	// (0x0005ee37) eswt_control_pane_g2_copy3

0x5d2b,	// (0x0005ee44) eswt_control_pane_g3_copy3_ParamLimits

0x5d2b,	// (0x0005ee44) eswt_control_pane_g3_copy3

0x5d38,	// (0x0005ee51) eswt_control_pane_g4_copy3_ParamLimits

0x5d38,	// (0x0005ee51) eswt_control_pane_g4_copy3

0x88c9,	// (0x000619e2) common_borders_pane_cp5

0x5db9,	// (0x0005eed2) separator_vertical_pane_g1

0x5dc2,	// (0x0005eedb) separator_vertical_pane_g2

0x5dcb,	// (0x0005eee4) separator_vertical_pane_g3

0x0002,

0xfc0a,	// (0x00068d23) separator_vertical_pane_g

0x5d11,	// (0x0005ee2a) eswt_control_pane_g1_copy4_ParamLimits

0x5d11,	// (0x0005ee2a) eswt_control_pane_g1_copy4

0x5d1e,	// (0x0005ee37) eswt_control_pane_g2_copy4_ParamLimits

0x5d1e,	// (0x0005ee37) eswt_control_pane_g2_copy4

0x5d2b,	// (0x0005ee44) eswt_control_pane_g3_copy4_ParamLimits

0x5d2b,	// (0x0005ee44) eswt_control_pane_g3_copy4

0x5d38,	// (0x0005ee51) eswt_control_pane_g4_copy4_ParamLimits

0x5d38,	// (0x0005ee51) eswt_control_pane_g4_copy4

0xcd53,	// (0x00065e6c) eswt_ctrl_combo_button_pane

0xcd5b,	// (0x00065e74) eswt_ctrl_input_pane

0xcd63,	// (0x00065e7c) popup_choice_list_window_cp70

0xcd6b,	// (0x00065e84) eswt_ctrl_input_pane_t1

0x88c9,	// (0x000619e2) input_focus_pane_cp70

0x531e,	// (0x0005e437) bg_button_pane_cp70_ParamLimits

0x531e,	// (0x0005e437) bg_button_pane_cp70

0xcd79,	// (0x00065e92) eswt_ctrl_combo_button_pane_g1

0x5e02,	// (0x0005ef1b) wait_bar_pane_cp70

0x2bab,	// (0x0005bcc4) bg_popup_window_pane_cp70_ParamLimits

0x2bab,	// (0x0005bcc4) bg_popup_window_pane_cp70

0x5e0a,	// (0x0005ef23) popup_eswt_tasktip_window_t1

0x5e20,	// (0x0005ef39) wait_bar_pane_cp71_ParamLimits

0x5e20,	// (0x0005ef39) wait_bar_pane_cp71

0x5e2c,	// (0x0005ef45) grid_eswt_app_pane

0xdd0b,	// (0x00066e24) scroll_pane_cp70

0xcd81,	// (0x00065e9a) cell_eswt_app_pane_ParamLimits

0xcd81,	// (0x00065e9a) cell_eswt_app_pane

0xcdb3,	// (0x00065ecc) cell_eswt_app_pane_g1_ParamLimits

0xcdb3,	// (0x00065ecc) cell_eswt_app_pane_g1

0xcde2,	// (0x00065efb) cell_eswt_app_pane_g2_ParamLimits

0xcde2,	// (0x00065efb) cell_eswt_app_pane_g2

0x0001,

0xfc11,	// (0x00068d2a) cell_eswt_app_pane_g_ParamLimits

0xfc11,	// (0x00068d2a) cell_eswt_app_pane_g

0xce0b,	// (0x00065f24) cell_eswt_app_pane_t1_ParamLimits

0xce0b,	// (0x00065f24) cell_eswt_app_pane_t1

0x5ef1,	// (0x0005f00a) grid_highlight_pane_cp70_ParamLimits

0x5ef1,	// (0x0005f00a) grid_highlight_pane_cp70

0x2170,	// (0x0005b289) set_content_pane_g1

0xac73,	// (0x00063d8c) status_small_volume_pane

0xb7b2,	// (0x000648cb) status_small_volume_pane_g1

0xb7ba,	// (0x000648d3) volume_small2_pane

0xb7c3,	// (0x000648dc) volume_small2_pane_g1

0xb7cc,	// (0x000648e5) volume_small2_pane_g2

0xb7d5,	// (0x000648ee) volume_small2_pane_g3

0xb7de,	// (0x000648f7) volume_small2_pane_g4

0xb7e7,	// (0x00064900) volume_small2_pane_g5

0xb7f0,	// (0x00064909) volume_small2_pane_g6

0xb7f9,	// (0x00064912) volume_small2_pane_g7

0xb802,	// (0x0006491b) volume_small2_pane_g8

0xb80b,	// (0x00064924) volume_small2_pane_g9

0xb814,	// (0x0006492d) volume_small2_pane_g10

0x0009,

0xfc16,	// (0x00068d2f) volume_small2_pane_g

0x5728,	// (0x0005e841) fep_vkb_top_text_pane_g1_ParamLimits

0xccc5,	// (0x00065dde) fep_vkb_top_text_pane_t1_ParamLimits

0x59db,	// (0x0005eaf4) popup_preview_fixed_window_g3_ParamLimits

0x59db,	// (0x0005eaf4) popup_preview_fixed_window_g3

0xb462,	// (0x0006457b) popup_toolbar_trans_pane

0xc6a9,	// (0x000657c2) aid_height_set_list_ParamLimits

0x4102,	// (0x0005d21b) aid_size_parent_ParamLimits

0x25d1,	// (0x0005b6ea) list_highlight_pane_cp2_ParamLimits

0x2170,	// (0x0005b289) set_content_pane_g1_ParamLimits

0xc87c,	// (0x00065995) list_single_image_pane_ParamLimits

0xc87c,	// (0x00065995) list_single_image_pane

0xce3d,	// (0x00065f56) aid_size_cell_image_ParamLimits

0xce3d,	// (0x00065f56) aid_size_cell_image

0xce4a,	// (0x00065f63) grid_single_image_pane_ParamLimits

0xce4a,	// (0x00065f63) grid_single_image_pane

0x8f89,	// (0x000620a2) list_single_image_pane_g1_ParamLimits

0x8f89,	// (0x000620a2) list_single_image_pane_g1

0x8f95,	// (0x000620ae) list_single_image_pane_g2_ParamLimits

0x8f95,	// (0x000620ae) list_single_image_pane_g2

0x0001,

0xfc2b,	// (0x00068d44) list_single_image_pane_g_ParamLimits

0xfc2b,	// (0x00068d44) list_single_image_pane_g

0x5f18,	// (0x0005f031) list_single_image_pane_t1_ParamLimits

0x5f18,	// (0x0005f031) list_single_image_pane_t1

0xce58,	// (0x00065f71) cell_image_list_pane_ParamLimits

0xce58,	// (0x00065f71) cell_image_list_pane

0xce6e,	// (0x00065f87) cell_image_list_pane_g1

0xce77,	// (0x00065f90) cell_image_list_pane_g2

0x0001,

0xfc30,	// (0x00068d49) cell_image_list_pane_g

0x5f58,	// (0x0005f071) aid_size_cell_tb_trans_pane

0x8f7b,	// (0x00062094) bg_tb_trans_pane

0x5f6a,	// (0x0005f083) grid_tb_trans_pane

0x2b1f,	// (0x0005bc38) bg_tb_trans_pane_g1

0x2b2f,	// (0x0005bc48) bg_tb_trans_pane_g2

0x2b27,	// (0x0005bc40) bg_tb_trans_pane_g3

0x2b3f,	// (0x0005bc58) bg_tb_trans_pane_g4

0x2b37,	// (0x0005bc50) bg_tb_trans_pane_g5

0x2b5f,	// (0x0005bc78) bg_tb_trans_pane_g6

0x2b57,	// (0x0005bc70) bg_tb_trans_pane_g7

0x2b47,	// (0x0005bc60) bg_tb_trans_pane_g8

0x2b4f,	// (0x0005bc68) bg_tb_trans_pane_g9

0x0008,

0xfc35,	// (0x00068d4e) bg_tb_trans_pane_g

0x5f7e,	// (0x0005f097) cell_toolbar_trans_pane_ParamLimits

0x5f7e,	// (0x0005f097) cell_toolbar_trans_pane

0x5359,	// (0x0005e472) cell_toolbar_trans_pane_g1

0xcabc,	// (0x00065bd5) list_form2_midp_pane_t1

0xcaca,	// (0x00065be3) list_form2_midp_pane_t2

0x0001,

0xfad2,	// (0x00068beb) list_form2_midp_pane_t

0x4fad,	// (0x0005e0c6) scroll_pane_cp51_ParamLimits

0x5174,	// (0x0005e28d) form2_midp_wait_pane_g1

0x517d,	// (0x0005e296) form2_midp_wait_pane_g2

0x5186,	// (0x0005e29f) form2_midp_wait_pane_g3

0x0002,

0xfae7,	// (0x00068c00) form2_midp_wait_pane_g

0x892b,	// (0x00061a44) list_highlight_pane_cp21_ParamLimits

0x51bf,	// (0x0005e2d8) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x51ce,	// (0x0005e2e7) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x42eb,	// (0x0005d404) list_single_2graphic_im_pane_ParamLimits

0x42eb,	// (0x0005d404) list_single_2graphic_im_pane

0xce80,	// (0x00065f99) list_single_2graphic_im_pane_g1_ParamLimits

0xce80,	// (0x00065f99) list_single_2graphic_im_pane_g1

0xce91,	// (0x00065faa) list_single_2graphic_im_pane_g2_ParamLimits

0xce91,	// (0x00065faa) list_single_2graphic_im_pane_g2

0xce9d,	// (0x00065fb6) list_single_2graphic_im_pane_g3_ParamLimits

0xce9d,	// (0x00065fb6) list_single_2graphic_im_pane_g3

0x0003,

0xfc48,	// (0x00068d61) list_single_2graphic_im_pane_g_ParamLimits

0xfc48,	// (0x00068d61) list_single_2graphic_im_pane_g

0xceb1,	// (0x00065fca) list_single_2graphic_im_pane_t1_ParamLimits

0xceb1,	// (0x00065fca) list_single_2graphic_im_pane_t1

0x59e7,	// (0x0005eb00) list_single_graphic_2heading_pane_fp_ParamLimits

0x59e7,	// (0x0005eb00) list_single_graphic_2heading_pane_fp

0xe395,	// (0x000674ae) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xe395,	// (0x000674ae) list_single_graphic_2heading_pane_fp_g1

0x5a00,	// (0x0005eb19) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5a00,	// (0x0005eb19) list_single_graphic_2heading_pane_fp_g2

0x39fe,	// (0x0005cb17) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x39fe,	// (0x0005cb17) list_single_graphic_2heading_pane_fp_g3

0x3a0a,	// (0x0005cb23) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3a0a,	// (0x0005cb23) list_single_graphic_2heading_pane_fp_g4

0x5a0c,	// (0x0005eb25) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5a0c,	// (0x0005eb25) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb6f,	// (0x00068c88) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb6f,	// (0x00068c88) list_single_graphic_2heading_pane_fp_g

0xe4bc,	// (0x000675d5) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe4bc,	// (0x000675d5) list_single_graphic_2heading_pane_fp_t1

0xe3cd,	// (0x000674e6) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xe3cd,	// (0x000674e6) list_single_graphic_2heading_pane_fp_t2

0xe4d2,	// (0x000675eb) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe4d2,	// (0x000675eb) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc51,	// (0x00068d6a) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc51,	// (0x00068d6a) list_single_graphic_2heading_pane_fp_t

0x53ea,	// (0x0005e503) fep_hwr_write_pane_g5_ParamLimits

0x53ea,	// (0x0005e503) fep_hwr_write_pane_g5

0x53f6,	// (0x0005e50f) fep_hwr_write_pane_g6_ParamLimits

0x53f6,	// (0x0005e50f) fep_hwr_write_pane_g6

0x5cd8,	// (0x0005edf1) eswt_shell_pane_ParamLimits

0x2bab,	// (0x0005bcc4) bg_popup_window_pane_cp18_ParamLimits

0x5d09,	// (0x0005ee22) heading_pane_cp70

0x5e0a,	// (0x0005ef23) popup_eswt_tasktip_window_t1_ParamLimits

0xc038,	// (0x00065151) aid_touch_tab_arrow_left

0xc04e,	// (0x00065167) aid_touch_tab_arrow_right

0x9e80,	// (0x00062f99) title_pane_g3_ParamLimits

0x9e80,	// (0x00062f99) title_pane_g3

0x8f3a,	// (0x00062053) set_value_pane_g1

0xb462,	// (0x0006457b) popup_toolbar_trans_pane_ParamLimits

0x5f58,	// (0x0005f071) aid_size_cell_tb_trans_pane_ParamLimits

0x8f7b,	// (0x00062094) bg_tb_trans_pane_ParamLimits

0x5f6a,	// (0x0005f083) grid_tb_trans_pane_ParamLimits

0x8a6c,	// (0x00061b85) cont_note_pane_ParamLimits

0x8a6c,	// (0x00061b85) cont_note_pane

0x8cf6,	// (0x00061e0f) cont_snote2_single_text_pane_ParamLimits

0x8cf6,	// (0x00061e0f) cont_snote2_single_text_pane

0x8cf6,	// (0x00061e0f) cont_snote2_single_graphic_pane_ParamLimits

0x8cf6,	// (0x00061e0f) cont_snote2_single_graphic_pane

0x319d,	// (0x0005c2b6) cont_note_wait_pane_ParamLimits

0x319d,	// (0x0005c2b6) cont_note_wait_pane

0x319d,	// (0x0005c2b6) cont_note_image_pane_ParamLimits

0x319d,	// (0x0005c2b6) cont_note_image_pane

0x6012,	// (0x0005f12b) popup_note2_window_g1_ParamLimits

0x6012,	// (0x0005f12b) popup_note2_window_g1

0x6043,	// (0x0005f15c) popup_note2_window_t1_ParamLimits

0x6043,	// (0x0005f15c) popup_note2_window_t1

0x6088,	// (0x0005f1a1) popup_note2_window_t2_ParamLimits

0x6088,	// (0x0005f1a1) popup_note2_window_t2

0x60cd,	// (0x0005f1e6) popup_note2_window_t3_ParamLimits

0x60cd,	// (0x0005f1e6) popup_note2_window_t3

0x6112,	// (0x0005f22b) popup_note2_window_t4_ParamLimits

0x6112,	// (0x0005f22b) popup_note2_window_t4

0x8af0,	// (0x00061c09) popup_note2_window_t5_ParamLimits

0x8af0,	// (0x00061c09) popup_note2_window_t5

0x0004,

0xfc5d,	// (0x00068d76) popup_note2_window_t_ParamLimits

0xfc5d,	// (0x00068d76) popup_note2_window_t

0x6141,	// (0x0005f25a) popup_note2_image_window_g1_ParamLimits

0x6141,	// (0x0005f25a) popup_note2_image_window_g1

0x614d,	// (0x0005f266) popup_note2_image_window_g2_ParamLimits

0x614d,	// (0x0005f266) popup_note2_image_window_g2

0x0001,

0xfc68,	// (0x00068d81) popup_note2_image_window_g_ParamLimits

0xfc68,	// (0x00068d81) popup_note2_image_window_g

0x615f,	// (0x0005f278) popup_note2_image_window_t1_ParamLimits

0x615f,	// (0x0005f278) popup_note2_image_window_t1

0x6177,	// (0x0005f290) popup_note2_image_window_t2_ParamLimits

0x6177,	// (0x0005f290) popup_note2_image_window_t2

0x618f,	// (0x0005f2a8) popup_note2_image_window_t3_ParamLimits

0x618f,	// (0x0005f2a8) popup_note2_image_window_t3

0x0002,

0xfc6d,	// (0x00068d86) popup_note2_image_window_t_ParamLimits

0xfc6d,	// (0x00068d86) popup_note2_image_window_t

0x31ab,	// (0x0005c2c4) popup_note2_wait_window_g1_ParamLimits

0x31ab,	// (0x0005c2c4) popup_note2_wait_window_g1

0x61ab,	// (0x0005f2c4) popup_note2_wait_window_g2_ParamLimits

0x61ab,	// (0x0005f2c4) popup_note2_wait_window_g2

0x31c3,	// (0x0005c2dc) popup_note2_wait_window_g3_ParamLimits

0x31c3,	// (0x0005c2dc) popup_note2_wait_window_g3

0x0002,

0xfc74,	// (0x00068d8d) popup_note2_wait_window_g_ParamLimits

0xfc74,	// (0x00068d8d) popup_note2_wait_window_g

0x61b7,	// (0x0005f2d0) popup_note2_wait_window_t1_ParamLimits

0x61b7,	// (0x0005f2d0) popup_note2_wait_window_t1

0x61d5,	// (0x0005f2ee) popup_note2_wait_window_t2_ParamLimits

0x61d5,	// (0x0005f2ee) popup_note2_wait_window_t2

0x61f3,	// (0x0005f30c) popup_note2_wait_window_t3_ParamLimits

0x61f3,	// (0x0005f30c) popup_note2_wait_window_t3

0x6205,	// (0x0005f31e) popup_note2_wait_window_t4_ParamLimits

0x6205,	// (0x0005f31e) popup_note2_wait_window_t4

0x0003,

0xfc7b,	// (0x00068d94) popup_note2_wait_window_t_ParamLimits

0xfc7b,	// (0x00068d94) popup_note2_wait_window_t

0x6217,	// (0x0005f330) wait_bar2_pane_ParamLimits

0x6217,	// (0x0005f330) wait_bar2_pane

0x622f,	// (0x0005f348) popup_snote2_single_text_window_g1_ParamLimits

0x622f,	// (0x0005f348) popup_snote2_single_text_window_g1

0x6257,	// (0x0005f370) popup_snote2_single_text_window_t1_ParamLimits

0x6257,	// (0x0005f370) popup_snote2_single_text_window_t1

0x62a3,	// (0x0005f3bc) popup_snote2_single_text_window_t2_ParamLimits

0x62a3,	// (0x0005f3bc) popup_snote2_single_text_window_t2

0x62ef,	// (0x0005f408) popup_snote2_single_text_window_t3_ParamLimits

0x62ef,	// (0x0005f408) popup_snote2_single_text_window_t3

0x6330,	// (0x0005f449) popup_snote2_single_text_window_t4_ParamLimits

0x6330,	// (0x0005f449) popup_snote2_single_text_window_t4

0x6366,	// (0x0005f47f) popup_snote2_single_text_window_t5_ParamLimits

0x6366,	// (0x0005f47f) popup_snote2_single_text_window_t5

0x0004,

0xfc84,	// (0x00068d9d) popup_snote2_single_text_window_t_ParamLimits

0xfc84,	// (0x00068d9d) popup_snote2_single_text_window_t

0x6391,	// (0x0005f4aa) popup_snote2_single_graphic_window_g1_ParamLimits

0x6391,	// (0x0005f4aa) popup_snote2_single_graphic_window_g1

0x63b9,	// (0x0005f4d2) popup_snote2_single_graphic_window_g2_ParamLimits

0x63b9,	// (0x0005f4d2) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8f,	// (0x00068da8) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8f,	// (0x00068da8) popup_snote2_single_graphic_window_g

0x63e1,	// (0x0005f4fa) popup_snote2_single_graphic_window_t1_ParamLimits

0x63e1,	// (0x0005f4fa) popup_snote2_single_graphic_window_t1

0x642d,	// (0x0005f546) popup_snote2_single_graphic_window_t2_ParamLimits

0x642d,	// (0x0005f546) popup_snote2_single_graphic_window_t2

0x62ef,	// (0x0005f408) popup_snote2_single_graphic_window_t3_ParamLimits

0x62ef,	// (0x0005f408) popup_snote2_single_graphic_window_t3

0x6330,	// (0x0005f449) popup_snote2_single_graphic_window_t4_ParamLimits

0x6330,	// (0x0005f449) popup_snote2_single_graphic_window_t4

0x6366,	// (0x0005f47f) popup_snote2_single_graphic_window_t5_ParamLimits

0x6366,	// (0x0005f47f) popup_snote2_single_graphic_window_t5

0x0004,

0xfc94,	// (0x00068dad) popup_snote2_single_graphic_window_t_ParamLimits

0xfc94,	// (0x00068dad) popup_snote2_single_graphic_window_t

0x4e5d,	// (0x0005df76) clock_nsta_pane_cp2_t1

0x4e5d,	// (0x0005df76) clock_nsta_pane_cp2_t2

0x0001,

0xfaa8,	// (0x00068bc1) clock_nsta_pane_cp2_t

0xdc43,	// (0x00066d5c) form_field_data_wide_pane_g1_ParamLimits

0x8f89,	// (0x000620a2) form_field_data_wide_pane_g2_ParamLimits

0x8f89,	// (0x000620a2) form_field_data_wide_pane_g2

0x8f95,	// (0x000620ae) form_field_data_wide_pane_g3_ParamLimits

0x8f95,	// (0x000620ae) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x00068774) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x00068774) form_field_data_wide_pane_g

0xc9c5,	// (0x00065ade) grid_touch_3_pane_ParamLimits

0xc9c5,	// (0x00065ade) grid_touch_3_pane

0xcee2,	// (0x00065ffb) cell_touch_3_pane_ParamLimits

0xcee2,	// (0x00065ffb) cell_touch_3_pane

0x5359,	// (0x0005e472) cell_touch_3_pane_g1

0x5359,	// (0x0005e472) cell_touch_3_pane_g2

0x0001,

0xfb2d,	// (0x00068c46) cell_touch_3_pane_g

0x8b48,	// (0x00061c61) cont_query_data_pane

0x8b50,	// (0x00061c69) cont_query_data_pane_cp1

0x64ac,	// (0x0005f5c5) button_value_adjust_pane_cp7

0x64b4,	// (0x0005f5cd) query_popup_pane_cp3

0xdedc,	// (0x00066ff5) bg_popup_sub_pane_cp22_ParamLimits

0xf292,	// (0x000683ab) navi_navi_volume_pane_cp2

0xf2ad,	// (0x000683c6) popup_side_volume_key_window_g2

0xf2bc,	// (0x000683d5) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x0006880a) popup_side_volume_key_window_g

0xf2d9,	// (0x000683f2) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x00068811) popup_side_volume_key_window_t

0x2042,	// (0x0005b15b) popup_side_volume_key_window_ParamLimits

0xa38b,	// (0x000634a4) list_double_graphic_pane_g4_ParamLimits

0xa38b,	// (0x000634a4) list_double_graphic_pane_g4

0xc853,	// (0x0006596c) list_single_2heading_msg_pane_ParamLimits

0xc853,	// (0x0006596c) list_single_2heading_msg_pane

0xcf2e,	// (0x00066047) list_single_2heading_msg_pane_g1_ParamLimits

0xcf2e,	// (0x00066047) list_single_2heading_msg_pane_g1

0xcf3a,	// (0x00066053) list_single_2heading_msg_pane_g2_ParamLimits

0xcf3a,	// (0x00066053) list_single_2heading_msg_pane_g2

0xcf4d,	// (0x00066066) list_single_2heading_msg_pane_g3_ParamLimits

0xcf4d,	// (0x00066066) list_single_2heading_msg_pane_g3

0xcf59,	// (0x00066072) list_single_2heading_msg_pane_g4_ParamLimits

0xcf59,	// (0x00066072) list_single_2heading_msg_pane_g4

0x0003,

0xfc9f,	// (0x00068db8) list_single_2heading_msg_pane_g_ParamLimits

0xfc9f,	// (0x00068db8) list_single_2heading_msg_pane_g

0xb81d,	// (0x00064936) list_single_2heading_msg_pane_t1_ParamLimits

0xb81d,	// (0x00064936) list_single_2heading_msg_pane_t1

0xb845,	// (0x0006495e) list_single_2heading_msg_pane_t2_ParamLimits

0xb845,	// (0x0006495e) list_single_2heading_msg_pane_t2

0xb8b0,	// (0x000649c9) list_single_2heading_msg_pane_t3_ParamLimits

0xb8b0,	// (0x000649c9) list_single_2heading_msg_pane_t3

0xe4f2,	// (0x0006760b) list_single_2heading_msg_pane_t4_ParamLimits

0xe4f2,	// (0x0006760b) list_single_2heading_msg_pane_t4

0x0003,

0xfca8,	// (0x00068dc1) list_single_2heading_msg_pane_t_ParamLimits

0xfca8,	// (0x00068dc1) list_single_2heading_msg_pane_t

0x88e7,	// (0x00061a00) title_pane_g4_ParamLimits

0x88e7,	// (0x00061a00) title_pane_g4

0xf0a0,	// (0x000681b9) title_pane_stacon_g3_ParamLimits

0xf0a0,	// (0x000681b9) title_pane_stacon_g3

0x5fd5,	// (0x0005f0ee) list_single_2graphic_im_pane_g4_ParamLimits

0x5fd5,	// (0x0005f0ee) list_single_2graphic_im_pane_g4

0x3dfb,	// (0x0005cf14) popup_side_volume_key_window_cp

0x4648,	// (0x0005d761) main_idle_act2_pane_t1

0x0778,	// (0x00059891) toolbar_button_pane_g10

0xa201,	// (0x0006331a) popup_toolbar_window_cp1

0x4e4e,	// (0x0005df67) clock_nsta_pane_cp_t1

0x4e4e,	// (0x0005df67) clock_nsta_pane_cp_t2

0x0001,

0xfaa3,	// (0x00068bbc) clock_nsta_pane_cp_t

0xf292,	// (0x000683ab) navi_navi_volume_pane_cp2_ParamLimits

0xf2a1,	// (0x000683ba) popup_side_volume_key_window_g1_ParamLimits

0xf2ad,	// (0x000683c6) popup_side_volume_key_window_g2_ParamLimits

0xf2bc,	// (0x000683d5) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x0006880a) popup_side_volume_key_window_g_ParamLimits

0x0cfe,	// (0x00059e17) fep_hwr_aid_pane

0x0da7,	// (0x00059ec0) bg_fep_hwr_top_pane_g4_ParamLimits

0x53ba,	// (0x0005e4d3) fep_hwr_top_pane_g1_ParamLimits

0x53cc,	// (0x0005e4e5) fep_hwr_top_pane_g2_ParamLimits

0x0dc7,	// (0x00059ee0) fep_hwr_top_pane_g3_ParamLimits

0xfaf8,	// (0x00068c11) fep_hwr_top_pane_g_ParamLimits

0x0ddc,	// (0x00059ef5) fep_hwr_top_text_pane_ParamLimits

0x3bb0,	// (0x0005ccc9) aid_touch_tab_arrow_arrow_2

0x3bb9,	// (0x0005ccd2) aid_touch_tab_arrow_left_2

0x0d12,	// (0x00059e2b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0d49,	// (0x00059e62) fep_hwr_prediction_pane

0x5522,	// (0x0005e63b) fep_vkb_prediction_pane

0xcca5,	// (0x00065dbe) fep_vkb_side_pane_g3_ParamLimits

0xcca5,	// (0x00065dbe) fep_vkb_side_pane_g3

0x0f6b,	// (0x0005a084) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x0fdc,	// (0x0005a0f5) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0fe9,	// (0x0005a102) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba7,	// (0x00068cc0) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x11ea,	// (0x0005a303) fep_hwr_prediction_pane_g1

0x11f4,	// (0x0005a30d) fep_hwr_prediction_pane_g2

0x11fc,	// (0x0005a315) fep_hwr_prediction_pane_g3

0x1204,	// (0x0005a31d) fep_hwr_prediction_pane_g4

0x0003,

0xfcb1,	// (0x00068dca) fep_hwr_prediction_pane_g

0x64db,	// (0x0005f5f4) fep_vkb_prediction_pane_g1

0x64e5,	// (0x0005f5fe) fep_vkb_prediction_pane_g2

0x64ed,	// (0x0005f606) fep_vkb_prediction_pane_g3

0x64f5,	// (0x0005f60e) fep_vkb_prediction_pane_g4

0x0003,

0xfcba,	// (0x00068dd3) fep_vkb_prediction_pane_g

0x0ac8,	// (0x00059be1) slider_set_pane_g3

0x0adc,	// (0x00059bf5) slider_set_pane_g4

0x0af4,	// (0x00059c0d) slider_set_pane_g5

0x0ac8,	// (0x00059be1) slider_set_pane_g6

0x0b0a,	// (0x00059c23) slider_set_pane_g7

0x4281,	// (0x0005d39a) slider_form_pane_g3

0x428a,	// (0x0005d3a3) slider_form_pane_g4

0x4292,	// (0x0005d3ab) slider_form_pane_g5

0x4281,	// (0x0005d39a) slider_form_pane_g6

0xc812,	// (0x0006592b) slider_form_pane_g7

0x490c,	// (0x0005da25) slider_set_pane_vc_g3

0x4915,	// (0x0005da2e) slider_set_pane_vc_g4

0x491e,	// (0x0005da37) slider_set_pane_vc_g5

0x490c,	// (0x0005da25) slider_set_pane_vc_g6

0x4927,	// (0x0005da40) slider_set_pane_vc_g7

0x4afd,	// (0x0005dc16) slider_form_pane_vc_g1

0x4b06,	// (0x0005dc1f) slider_form_pane_vc_g2

0x4b0f,	// (0x0005dc28) slider_form_pane_vc_g3

0x4afd,	// (0x0005dc16) slider_form_pane_vc_g4

0x4b18,	// (0x0005dc31) slider_form_pane_vc_g5

0x0004,

0xfa75,	// (0x00068b8e) slider_form_pane_vc_g

0xee13,	// (0x00067f2c) main_idle_act3_pane

0x64fd,	// (0x0005f616) ai3_links_pane

0xcf71,	// (0x0006608a) popup_ai3_data_window_ParamLimits

0xcf71,	// (0x0006608a) popup_ai3_data_window

0x88c9,	// (0x000619e2) grid_ai3_links_pane

0xcf8f,	// (0x000660a8) cell_ai3_links_pane_ParamLimits

0xcf8f,	// (0x000660a8) cell_ai3_links_pane

0x653e,	// (0x0005f657) bg_popup_sub_pane_cp11

0x654b,	// (0x0005f664) cell_ai3_links_pane_g1

0x88c9,	// (0x000619e2) bg_popup_sub_pane_cp12

0x6570,	// (0x0005f689) heading_ai3_data_pane

0x6578,	// (0x0005f691) list_ai3_gene_pane

0x6584,	// (0x0005f69d) popup_ai3_data_window_g1

0x658c,	// (0x0005f6a5) heading_ai3_data_pane_g1

0x6594,	// (0x0005f6ad) heading_ai3_data_pane_t1

0x65a2,	// (0x0005f6bb) list_double_ai3_gene_pane_ParamLimits

0x65a2,	// (0x0005f6bb) list_double_ai3_gene_pane

0x65af,	// (0x0005f6c8) list_single_ai3_gene_pane_ParamLimits

0x65af,	// (0x0005f6c8) list_single_ai3_gene_pane

0x531e,	// (0x0005e437) list_highlight_pane_cp7_ParamLimits

0x531e,	// (0x0005e437) list_highlight_pane_cp7

0x65bc,	// (0x0005f6d5) list_single_a13_gene_pane_t1_ParamLimits

0x65bc,	// (0x0005f6d5) list_single_a13_gene_pane_t1

0x65d3,	// (0x0005f6ec) list_single_ai3_gene_pane_g1

0x65dc,	// (0x0005f6f5) list_single_ai3_gene_pane_g2

0x0001,

0xfcc3,	// (0x00068ddc) list_single_ai3_gene_pane_g

0x65e4,	// (0x0005f6fd) list_double_ai3_gene_pane_g1_ParamLimits

0x65e4,	// (0x0005f6fd) list_double_ai3_gene_pane_g1

0x65f0,	// (0x0005f709) list_double_ai3_gene_pane_t1_ParamLimits

0x65f0,	// (0x0005f709) list_double_ai3_gene_pane_t1

0x660c,	// (0x0005f725) list_double_ai3_gene_pane_t2_ParamLimits

0x660c,	// (0x0005f725) list_double_ai3_gene_pane_t2

0x6621,	// (0x0005f73a) list_double_ai3_gene_pane_t3_ParamLimits

0x6621,	// (0x0005f73a) list_double_ai3_gene_pane_t3

0x0002,

0xfcc8,	// (0x00068de1) list_double_ai3_gene_pane_t_ParamLimits

0xfcc8,	// (0x00068de1) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe4e8,	// (0x00067601) aid_size_min_col_2

0xcf18,	// (0x00066031) aid_size_min_msg_ParamLimits

0xcf18,	// (0x00066031) aid_size_min_msg

0xccb9,	// (0x00065dd2) fep_vkb_top_text_pane_g2_ParamLimits

0xccb9,	// (0x00065dd2) fep_vkb_top_text_pane_g2

0x0001,

0xfb28,	// (0x00068c41) fep_vkb_top_text_pane_g_ParamLimits

0xfb28,	// (0x00068c41) fep_vkb_top_text_pane_g

0xee13,	// (0x00067f2c) main_hc_apps_shell_pane

0x663e,	// (0x0005f757) grid_hc_apps_pane_ParamLimits

0x663e,	// (0x0005f757) grid_hc_apps_pane

0x6650,	// (0x0005f769) list_hc_apps_pane

0x6658,	// (0x0005f771) scroll_pane_cp37_ParamLimits

0x6658,	// (0x0005f771) scroll_pane_cp37

0xcfa9,	// (0x000660c2) cell_hc_apps_pane_ParamLimits

0xcfa9,	// (0x000660c2) cell_hc_apps_pane

0xd06f,	// (0x00066188) cell_hc_apps_pane_g1_ParamLimits

0xd06f,	// (0x00066188) cell_hc_apps_pane_g1

0x6744,	// (0x0005f85d) cell_hc_apps_pane_g2_ParamLimits

0x6744,	// (0x0005f85d) cell_hc_apps_pane_g2

0x6760,	// (0x0005f879) cell_hc_apps_pane_g3_ParamLimits

0x6760,	// (0x0005f879) cell_hc_apps_pane_g3

0x0002,

0xfccf,	// (0x00068de8) cell_hc_apps_pane_g_ParamLimits

0xfccf,	// (0x00068de8) cell_hc_apps_pane_g

0xd09b,	// (0x000661b4) cell_hc_apps_pane_t1_ParamLimits

0xd09b,	// (0x000661b4) cell_hc_apps_pane_t1

0x8a6c,	// (0x00061b85) grid_highlight_pane_cp10_ParamLimits

0x8a6c,	// (0x00061b85) grid_highlight_pane_cp10

0xd0d9,	// (0x000661f2) list_single_hc_apps_pane_ParamLimits

0xd0d9,	// (0x000661f2) list_single_hc_apps_pane

0xd10c,	// (0x00066225) list_single_hc_apps_pane_g1

0xd125,	// (0x0006623e) list_single_hc_apps_pane_g2

0x0001,

0xfcd6,	// (0x00068def) list_single_hc_apps_pane_g

0xd13e,	// (0x00066257) list_single_hc_apps_pane_g2_copy1

0xb91e,	// (0x00064a37) list_single_hc_apps_pane_t1

0x892b,	// (0x00061a44) bg_set_opt_pane_cp_ParamLimits

0xef36,	// (0x0006804f) setting_slider_pane_t1_ParamLimits

0xef4f,	// (0x00068068) setting_slider_pane_t2_ParamLimits

0xef69,	// (0x00068082) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00068652) setting_slider_pane_t_ParamLimits

0xef81,	// (0x0006809a) slider_set_pane_ParamLimits

0x000f,	// (0x00059128) control_pane_g5_ParamLimits

0x000f,	// (0x00059128) control_pane_g5

0x40b4,	// (0x0005d1cd) slider_set_pane_g1_ParamLimits

0x0abc,	// (0x00059bd5) slider_set_pane_g2_ParamLimits

0x0ac8,	// (0x00059be1) slider_set_pane_g3_ParamLimits

0x0adc,	// (0x00059bf5) slider_set_pane_g4_ParamLimits

0x0af4,	// (0x00059c0d) slider_set_pane_g5_ParamLimits

0x0ac8,	// (0x00059be1) slider_set_pane_g6_ParamLimits

0x0b0a,	// (0x00059c23) slider_set_pane_g7_ParamLimits

0xf93f,	// (0x00068a58) slider_set_pane_g_ParamLimits

0x211b,	// (0x0005b234) navi_icon_text_pane_ParamLimits

0xbfff,	// (0x00065118) aid_fill_nsta_2_ParamLimits

0xc038,	// (0x00065151) aid_touch_tab_arrow_left_ParamLimits

0xc04e,	// (0x00065167) aid_touch_tab_arrow_right_ParamLimits

0xc0e9,	// (0x00065202) clock_nsta_pane_ParamLimits

0xc590,	// (0x000656a9) navi_icon_pane_g1_ParamLimits

0xc59c,	// (0x000656b5) navi_text_pane_t1_ParamLimits

0xca9e,	// (0x00065bb7) navi_icon_text_pane_g1_ParamLimits

0xcaaa,	// (0x00065bc3) navi_icon_text_pane_t1_ParamLimits

0xd10c,	// (0x00066225) list_single_hc_apps_pane_g1_ParamLimits

0xd125,	// (0x0006623e) list_single_hc_apps_pane_g2_ParamLimits

0xfcd6,	// (0x00068def) list_single_hc_apps_pane_g_ParamLimits

0xd13e,	// (0x00066257) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb91e,	// (0x00064a37) list_single_hc_apps_pane_t1_ParamLimits

0x9d6f,	// (0x00062e88) popup_toolbar2_fixed_window_ParamLimits

0x9d6f,	// (0x00062e88) popup_toolbar2_fixed_window

0xb458,	// (0x00064571) popup_toolbar2_float_window

0x88c9,	// (0x000619e2) bg_popup_sub_pane_cp27

0x681a,	// (0x0005f933) grid_toolbar2_float_pane

0x88c9,	// (0x000619e2) bg_popup_sub_pane_cp26

0x681a,	// (0x0005f933) grid_toolbar2_fixed_pane

0xd15a,	// (0x00066273) cell_toolbar2_fixed_pane_ParamLimits

0xd15a,	// (0x00066273) cell_toolbar2_fixed_pane

0xd174,	// (0x0006628d) cell_toolbar2_fixed_pane_g1

0x683b,	// (0x0005f954) toolbar2_fixed_button_pane

0x2b1f,	// (0x0005bc38) toolbar2_fixed_button_pane_g1

0x2b2f,	// (0x0005bc48) toolbar2_fixed_button_pane_g2

0x2b27,	// (0x0005bc40) toolbar2_fixed_button_pane_g3

0x2b3f,	// (0x0005bc58) toolbar2_fixed_button_pane_g4

0x2b37,	// (0x0005bc50) toolbar2_fixed_button_pane_g5

0x2b47,	// (0x0005bc60) toolbar2_fixed_button_pane_g6

0x2b4f,	// (0x0005bc68) toolbar2_fixed_button_pane_g7

0x2b5f,	// (0x0005bc78) toolbar2_fixed_button_pane_g8

0x2b57,	// (0x0005bc70) toolbar2_fixed_button_pane_g9

0x0008,

0xf841,	// (0x0006895a) toolbar2_fixed_button_pane_g

0x6843,	// (0x0005f95c) cell_toolbar2_float_pane_ParamLimits

0x6843,	// (0x0005f95c) cell_toolbar2_float_pane

0x6854,	// (0x0005f96d) cell_toolbar2_float_pane_g1

0x683b,	// (0x0005f954) toolbar2_fixed_button_pane_cp

0xcba1,	// (0x00065cba) fep_vkb_accented_list_pane_ParamLimits

0xcba1,	// (0x00065cba) fep_vkb_accented_list_pane

0x0f4b,	// (0x0005a064) bg_popup_fep_shadow_pane_g9

0x22aa,	// (0x0005b3c3) bg_popup_fep_shadow_pane_cp3

0x909e,	// (0x000621b7) list_accented_list_pane

0x685d,	// (0x0005f976) list_single_accented_list_pane_ParamLimits

0x685d,	// (0x0005f976) list_single_accented_list_pane

0x22aa,	// (0x0005b3c3) list_highlight_pane_cp10

0x686e,	// (0x0005f987) list_single_accented_list_pane_t1

0xb374,	// (0x0006448d) popup_slider_window_ParamLimits

0xb374,	// (0x0006448d) popup_slider_window

0x64bc,	// (0x0005f5d5) aid_indentation_list_msg

0xd277,	// (0x00066390) bg_popup_window_pane_cp19

0x69aa,	// (0x0005fac3) popup_slider_window_g1

0x69c6,	// (0x0005fadf) popup_slider_window_g2

0x69e2,	// (0x0005fafb) popup_slider_window_g3

0x0005,

0xfcdb,	// (0x00068df4) popup_slider_window_g

0x6a48,	// (0x0005fb61) popup_slider_window_t1

0x6abc,	// (0x0005fbd5) small_volume_slider_vertical_pane

0x5359,	// (0x0005e472) small_volume_slider_vertical_pane_g1

0x5359,	// (0x0005e472) small_volume_slider_vertical_pane_g2

0x6ad8,	// (0x0005fbf1) small_volume_slider_vertical_pane_g3

0x0002,

0xfced,	// (0x00068e06) small_volume_slider_vertical_pane_g

0x9cd9,	// (0x00062df2) area_side_right_pane_ParamLimits

0x9cd9,	// (0x00062df2) area_side_right_pane

0xb94c,	// (0x00064a65) aid_size_side_button_ParamLimits

0xb94c,	// (0x00064a65) aid_size_side_button

0xb965,	// (0x00064a7e) grid_sctrl_middle_pane_ParamLimits

0xb965,	// (0x00064a7e) grid_sctrl_middle_pane

0x126d,	// (0x0005a386) sctrl_sk_bottom_pane

0x127e,	// (0x0005a397) sctrl_sk_top_pane

0x1290,	// (0x0005a3a9) aid_touch_sctrl_top

0x129d,	// (0x0005a3b6) bg_sctrl_sk_pane_ParamLimits

0x129d,	// (0x0005a3b6) bg_sctrl_sk_pane

0x12ab,	// (0x0005a3c4) sctrl_sk_top_pane_g1

0x12b8,	// (0x0005a3d1) sctrl_sk_top_pane_t1

0x1290,	// (0x0005a3a9) aid_touch_sctrl_bottom

0x129d,	// (0x0005a3b6) bg_sctrl_sk_pane_cp_ParamLimits

0x129d,	// (0x0005a3b6) bg_sctrl_sk_pane_cp

0x12d3,	// (0x0005a3ec) sctrl_sk_bottom_pane_g1

0x12b8,	// (0x0005a3d1) sctrl_sk_bottom_pane_t1

0xb97f,	// (0x00064a98) cell_sctrl_middle_pane_ParamLimits

0xb97f,	// (0x00064a98) cell_sctrl_middle_pane

0xb992,	// (0x00064aab) aid_touch_sctrl_middle_ParamLimits

0xb992,	// (0x00064aab) aid_touch_sctrl_middle

0xb99f,	// (0x00064ab8) bg_sctrl_middle_pane_ParamLimits

0xb99f,	// (0x00064ab8) bg_sctrl_middle_pane

0x1956,	// (0x0005aa6f) cell_sctrl_middle_pane_g1_ParamLimits

0x1956,	// (0x0005aa6f) cell_sctrl_middle_pane_g1

0xb9ad,	// (0x00064ac6) cell_sctrl_middle_pane_g2_ParamLimits

0xb9ad,	// (0x00064ac6) cell_sctrl_middle_pane_g2

0x0001,

0xfcf9,	// (0x00068e12) cell_sctrl_middle_pane_g_ParamLimits

0xfcf9,	// (0x00068e12) cell_sctrl_middle_pane_g

0x2b1f,	// (0x0005bc38) bg_sctrl_middle_pane_g1

0x2b27,	// (0x0005bc40) bg_sctrl_middle_pane_g2

0x2b2f,	// (0x0005bc48) bg_sctrl_middle_pane_g3

0x2b37,	// (0x0005bc50) bg_sctrl_middle_pane_g4

0x2b3f,	// (0x0005bc58) bg_sctrl_middle_pane_g5

0x2b47,	// (0x0005bc60) bg_sctrl_middle_pane_g6

0x2b4f,	// (0x0005bc68) bg_sctrl_middle_pane_g7

0x2b57,	// (0x0005bc70) bg_sctrl_middle_pane_g8

0x0007,

0xfcfe,	// (0x00068e17) bg_sctrl_middle_pane_g

0x2b5f,	// (0x0005bc78) bg_sctrl_middle_pane_g8_copy1

0x2b1f,	// (0x0005bc38) bg_sctrl_sk_pane_g1

0x2b2f,	// (0x0005bc48) bg_sctrl_sk_pane_g2

0x2b27,	// (0x0005bc40) bg_sctrl_sk_pane_g3

0x0008,

0xf841,	// (0x0006895a) bg_sctrl_sk_pane_g

0x8eb4,	// (0x00061fcd) aid_size_touch_scroll_bar

0x2b3f,	// (0x0005bc58) bg_sctrl_sk_pane_g4

0x2b37,	// (0x0005bc50) bg_sctrl_sk_pane_g5

0x2b47,	// (0x0005bc60) bg_sctrl_sk_pane_g6

0x2b4f,	// (0x0005bc68) bg_sctrl_sk_pane_g7

0x2b5f,	// (0x0005bc78) bg_sctrl_sk_pane_g8

0x2b57,	// (0x0005bc70) bg_sctrl_sk_pane_g9

0x01c5,	// (0x000592de) popup_fep_china_hwr2_fs_candidate_window

0xae26,	// (0x00063f3f) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xae26,	// (0x00063f3f) popup_fep_china_hwr2_fs_control_window

0x0f6b,	// (0x0005a084) sctrl_sk_top_pane_g2

0x0001,

0xfcf4,	// (0x00068e0d) sctrl_sk_top_pane_g

0xd32f,	// (0x00066448) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd32f,	// (0x00066448) aid_fep_china_hwr2_fs_cell

0xd345,	// (0x0006645e) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd345,	// (0x0006645e) bg_popup_fep_shadow_pane_cp4

0xd35c,	// (0x00066475) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd35c,	// (0x00066475) bg_popup_fep_shadow_pane_cp5

0xd36e,	// (0x00066487) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd36e,	// (0x00066487) popup_fep_china_hwr2_fs_control_bar_grid

0xd382,	// (0x0006649b) popup_fep_china_hwr2_fs_control_funtion_grid

0x6b37,	// (0x0005fc50) aid_fep_china_hwr2_fs_candi_cell

0x88c9,	// (0x000619e2) bg_popup_fep_shadow_pane_cp6

0x6b41,	// (0x0005fc5a) popup_fep_china_hwr2_fs_candidate_grid

0xd38a,	// (0x000664a3) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd38a,	// (0x000664a3) cell_fep_china_hwr2_fs_funtion_grid

0x5359,	// (0x0005e472) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6b63,	// (0x0005fc7c) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6b63,	// (0x0005fc7c) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6b71,	// (0x0005fc8a) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6b71,	// (0x0005fc8a) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0f,	// (0x00068e28) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0f,	// (0x00068e28) cell_fep_china_hwr2_fs_funtion_grid_g

0xd3a2,	// (0x000664bb) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd3a2,	// (0x000664bb) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd3b7,	// (0x000664d0) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd3b7,	// (0x000664d0) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd14,	// (0x00068e2d) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd14,	// (0x00068e2d) cell_fep_china_hwr2_fs_funtion_grid_t

0x6bb8,	// (0x0005fcd1) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6bc0,	// (0x0005fcd9) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6bc8,	// (0x0005fce1) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd19,	// (0x00068e32) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6bd0,	// (0x0005fce9) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6bd0,	// (0x0005fce9) cell_fep_china_hwr2_fs_candidate_grid

0x6bef,	// (0x0005fd08) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6bf7,	// (0x0005fd10) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5359,	// (0x0005e472) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5359,	// (0x0005e472) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb2d,	// (0x00068c46) cell_fep_china_hwr2_fs_candidate_grid_g

0x6bff,	// (0x0005fd18) cell_fep_china_hwr2_fs_candidate_grid_t1

0x26ef,	// (0x0005b808) clock_nsta_pane_cp_24_ParamLimits

0x26ef,	// (0x0005b808) clock_nsta_pane_cp_24

0x276f,	// (0x0005b888) indicator_nsta_pane_cp_24_ParamLimits

0x276f,	// (0x0005b888) indicator_nsta_pane_cp_24

0x3820,	// (0x0005c939) heading_pane_g1

0x0001,

0xf8a6,	// (0x000689bf) heading_pane_g

0x448f,	// (0x0005d5a8) grid_sct_catagory_button_pane

0x44c1,	// (0x0005d5da) scroll_pane_cp5_ParamLimits

0x4fb9,	// (0x0005e0d2) button_value_adjust_pane_cp5_ParamLimits

0x4fb9,	// (0x0005e0d2) button_value_adjust_pane_cp5

0x509e,	// (0x0005e1b7) form2_midp_time_pane_ParamLimits

0x6c0d,	// (0x0005fd26) cell_sct_catagory_button_pane_ParamLimits

0x6c0d,	// (0x0005fd26) cell_sct_catagory_button_pane

0x531e,	// (0x0005e437) bg_button_pane_cp01_ParamLimits

0x531e,	// (0x0005e437) bg_button_pane_cp01

0x5359,	// (0x0005e472) cell_sct_catagory_button_pane_g1

0xb3f5,	// (0x0006450e) popup_tb_extension_window

0xd3d3,	// (0x000664ec) aid_size_cell_ext_ParamLimits

0xd3d3,	// (0x000664ec) aid_size_cell_ext

0x8cf6,	// (0x00061e0f) bg_tb_trans_pane_cp1_ParamLimits

0x8cf6,	// (0x00061e0f) bg_tb_trans_pane_cp1

0xd3f9,	// (0x00066512) grid_tb_ext_pane_ParamLimits

0xd3f9,	// (0x00066512) grid_tb_ext_pane

0xd436,	// (0x0006654f) cell_tb_ext_pane_ParamLimits

0xd436,	// (0x0006654f) cell_tb_ext_pane

0xd45e,	// (0x00066577) cell_tb_ext_pane_g1_ParamLimits

0xd45e,	// (0x00066577) cell_tb_ext_pane_g1

0x6ca1,	// (0x0005fdba) cell_tb_ext_pane_t1

0x8a6c,	// (0x00061b85) list_highlight_pane_cp11_ParamLimits

0x8a6c,	// (0x00061b85) list_highlight_pane_cp11

0x9d84,	// (0x00062e9d) popup_uni_indicator_window_ParamLimits

0x9d84,	// (0x00062e9d) popup_uni_indicator_window

0x8f7b,	// (0x00062094) bg_popup_sub_pane_cp14

0x6cbc,	// (0x0005fdd5) list_uniindi_pane

0x6cc8,	// (0x0005fde1) uniindi_top_pane

0x8a6c,	// (0x00061b85) bg_uniindi_top_pane

0x6ce9,	// (0x0005fe02) uniindi_top_pane_g1

0x6cff,	// (0x0005fe18) uniindi_top_pane_g2

0x0003,

0xfd20,	// (0x00068e39) uniindi_top_pane_g

0x6d29,	// (0x0005fe42) uniindi_top_pane_t1

0x6d55,	// (0x0005fe6e) list_single_uniindi_pane_ParamLimits

0x6d55,	// (0x0005fe6e) list_single_uniindi_pane

0x5359,	// (0x0005e472) bg_uniindi_top_pane_g1

0x6d68,	// (0x0005fe81) list_single_uniindi_pane_g1

0x6d7b,	// (0x0005fe94) list_single_uniindi_pane_t1

0xee13,	// (0x00067f2c) control_bg_pane

0x6da0,	// (0x0005feb9) bg_sctrl_sk_pane_cp1

0x6da9,	// (0x0005fec2) bg_sctrl_sk_pane_cp2

0x6db2,	// (0x0005fecb) control_bg_pane_g1

0x6dbb,	// (0x0005fed4) control_bg_pane_g2

0x0001,

0xfd29,	// (0x00068e42) control_bg_pane_g

0x4df1,	// (0x0005df0a) cell_indicator_nsta_pane_g1_ParamLimits

0xca02,	// (0x00065b1b) cell_indicator_nsta_pane_g2_ParamLimits

0xfa91,	// (0x00068baa) cell_indicator_nsta_pane_g_ParamLimits

0xe35e,	// (0x00067477) form2_midp_time_pane_t1_ParamLimits

0x0cf0,	// (0x00059e09) main_idle_act4_pane_ParamLimits

0x0cf0,	// (0x00059e09) main_idle_act4_pane

0xb3f5,	// (0x0006450e) popup_tb_extension_window_ParamLimits

0xd41e,	// (0x00066537) tb_ext_find_pane_ParamLimits

0xd41e,	// (0x00066537) tb_ext_find_pane

0x6dc4,	// (0x0005fedd) ai_gene_pane_1_cp1

0x23f4,	// (0x0005b50d) ai_gene_pane_2_cp1

0x6dcc,	// (0x0005fee5) list_single_idle_plugin_calendar_pane

0x6dd5,	// (0x0005feee) list_single_idle_plugin_notification_pane

0x6dde,	// (0x0005fef7) list_single_idle_plugin_player_pane

0xd47b,	// (0x00066594) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd47b,	// (0x00066594) list_single_idle_plugin_shortcut_pane

0xd4a3,	// (0x000665bc) main_idle_act4_pane_t1

0xd4bb,	// (0x000665d4) main_idle_act4_pane_t2

0x0001,

0xfd2e,	// (0x00068e47) main_idle_act4_pane_t

0xd4d3,	// (0x000665ec) middle_sk_idle_act4_pane_ParamLimits

0xd4d3,	// (0x000665ec) middle_sk_idle_act4_pane

0xd4ef,	// (0x00066608) popup_clock_digital_analogue_window_cp2

0xd516,	// (0x0006662f) shortcut_wheel_idle_act4_pane_ParamLimits

0xd516,	// (0x0006662f) shortcut_wheel_idle_act4_pane

0x5359,	// (0x0005e472) shortcut_wheel_idle_act4_pane_g1

0x5359,	// (0x0005e472) shortcut_wheel_idle_act4_pane_g2

0x5359,	// (0x0005e472) shortcut_wheel_idle_act4_pane_g3

0x5359,	// (0x0005e472) shortcut_wheel_idle_act4_pane_g4

0x5359,	// (0x0005e472) shortcut_wheel_idle_act4_pane_g5

0x6e71,	// (0x0005ff8a) shortcut_wheel_idle_act4_pane_g6

0x6e79,	// (0x0005ff92) shortcut_wheel_idle_act4_pane_g7

0x6e81,	// (0x0005ff9a) shortcut_wheel_idle_act4_pane_g8

0x6e89,	// (0x0005ffa2) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd33,	// (0x00068e4c) shortcut_wheel_idle_act4_pane_g

0xd593,	// (0x000666ac) middle_sk_idle_act4_pane_g1_ParamLimits

0xd593,	// (0x000666ac) middle_sk_idle_act4_pane_g1

0xd5a1,	// (0x000666ba) middle_sk_idle_act4_pane_g2_ParamLimits

0xd5a1,	// (0x000666ba) middle_sk_idle_act4_pane_g2

0x0001,

0xfd56,	// (0x00068e6f) middle_sk_idle_act4_pane_g_ParamLimits

0xfd56,	// (0x00068e6f) middle_sk_idle_act4_pane_g

0xd5b9,	// (0x000666d2) middle_sk_idle_act4_pane_t1_ParamLimits

0xd5b9,	// (0x000666d2) middle_sk_idle_act4_pane_t1

0xd5e8,	// (0x00066701) grid_ai_shortcut_pane_ParamLimits

0xd5e8,	// (0x00066701) grid_ai_shortcut_pane

0xd605,	// (0x0006671e) list_highlight_pane_cp16_ParamLimits

0xd605,	// (0x0006671e) list_highlight_pane_cp16

0xd612,	// (0x0006672b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd612,	// (0x0006672b) list_single_idle_plugin_shortcut_pane_g1

0xd61e,	// (0x00066737) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd61e,	// (0x00066737) list_single_idle_plugin_shortcut_pane_g2

0xd63c,	// (0x00066755) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd63c,	// (0x00066755) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5b,	// (0x00068e74) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5b,	// (0x00068e74) list_single_idle_plugin_shortcut_pane_g

0xd651,	// (0x0006676a) cell_ai_shortcut_pane_ParamLimits

0xd651,	// (0x0006676a) cell_ai_shortcut_pane

0xd667,	// (0x00066780) cell_ai_shortcut_pane_g1_ParamLimits

0xd667,	// (0x00066780) cell_ai_shortcut_pane_g1

0x6dc4,	// (0x0005fedd) ai_gene_pane_1_cp2

0x6fba,	// (0x000600d3) ai_gene_pane_2_cp2

0x6fc2,	// (0x000600db) list_highlight_pane_cp15

0x6fcb,	// (0x000600e4) list_single_idle_plugin_calendar_pane_g1

0x6fc2,	// (0x000600db) list_highlight_pane_cp17

0x6fd3,	// (0x000600ec) list_single_idle_plugin_calendar_pane_g1_copy1

0x6fdb,	// (0x000600f4) list_single_idle_plugin_player_pane_g1

0x46f6,	// (0x0005d80f) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd62,	// (0x00068e7b) list_single_idle_plugin_player_pane_g

0x6fe3,	// (0x000600fc) list_single_idle_plugin_player_pane_t1

0x6ff1,	// (0x0006010a) list_single_idle_plugin_player_pane_t2

0x6fff,	// (0x00060118) list_single_idle_plugin_player_pane_t3

0x700d,	// (0x00060126) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd67,	// (0x00068e80) list_single_idle_plugin_player_pane_t

0x701b,	// (0x00060134) wait_bar_pane_cp15

0x7023,	// (0x0006013c) grid_ai_notification_pane

0x46f6,	// (0x0005d80f) list_single_idle_plugin_notification_pane_g1

0xd689,	// (0x000667a2) cell_ai_notification_pane_ParamLimits

0xd689,	// (0x000667a2) cell_ai_notification_pane

0x7039,	// (0x00060152) cell_ai_notification_pane_g1

0x7041,	// (0x0006015a) cell_ai_notification_pane_t1

0xd696,	// (0x000667af) tb_ext_find_button_pane

0xd69e,	// (0x000667b7) tb_ext_find_pane_g1

0xd6a6,	// (0x000667bf) tb_ext_find_pane_t1

0xde7c,	// (0x00066f95) tb_ext_find_button_pane_g1

0x706d,	// (0x00060186) tb_ext_find_button_pane_g2

0x0001,

0xfd70,	// (0x00068e89) tb_ext_find_button_pane_g

0xd4a3,	// (0x000665bc) main_idle_act4_pane_t1_ParamLimits

0xd4bb,	// (0x000665d4) main_idle_act4_pane_t2_ParamLimits

0xfd2e,	// (0x00068e47) main_idle_act4_pane_t_ParamLimits

0xd4ef,	// (0x00066608) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd506,	// (0x0006661f) sat_plugin_idle_act4_pane_ParamLimits

0xd506,	// (0x0006661f) sat_plugin_idle_act4_pane

0xd6b4,	// (0x000667cd) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd6b4,	// (0x000667cd) sat_plugin_idle_act4_pane_t1

0xd6cc,	// (0x000667e5) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd6cc,	// (0x000667e5) sat_plugin_idle_act4_pane_t2

0xd6e4,	// (0x000667fd) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd6e4,	// (0x000667fd) sat_plugin_idle_act4_pane_t3

0xd6fc,	// (0x00066815) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd6fc,	// (0x00066815) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd75,	// (0x00068e8e) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd75,	// (0x00068e8e) sat_plugin_idle_act4_pane_t

0xeed8,	// (0x00067ff1) popup_battery_window_ParamLimits

0xeed8,	// (0x00067ff1) popup_battery_window

0x8a6c,	// (0x00061b85) bg_popup_sub_pane_cp25_ParamLimits

0x8a6c,	// (0x00061b85) bg_popup_sub_pane_cp25

0x70c2,	// (0x000601db) popup_battery_window_g1_ParamLimits

0x70c2,	// (0x000601db) popup_battery_window_g1

0x70ce,	// (0x000601e7) popup_battery_window_t1_ParamLimits

0x70ce,	// (0x000601e7) popup_battery_window_t1

0x70e0,	// (0x000601f9) popup_battery_window_t2_ParamLimits

0x70e0,	// (0x000601f9) popup_battery_window_t2

0x0001,

0xfd7e,	// (0x00068e97) popup_battery_window_t_ParamLimits

0xfd7e,	// (0x00068e97) popup_battery_window_t

0xaba3,	// (0x00063cbc) midp_canvas_pane_ParamLimits

0xabff,	// (0x00063d18) midp_keypad_pane_ParamLimits

0xabff,	// (0x00063d18) midp_keypad_pane

0x25d1,	// (0x0005b6ea) main_midp_pane_ParamLimits

0x4e6c,	// (0x0005df85) signal_pane_g2_cp_ParamLimits

0xd714,	// (0x0006682d) aid_size_cell_midp_keypad_ParamLimits

0xd714,	// (0x0006682d) aid_size_cell_midp_keypad

0xd732,	// (0x0006684b) midp_keyp_game_grid_pane_ParamLimits

0xd732,	// (0x0006684b) midp_keyp_game_grid_pane

0xd759,	// (0x00066872) midp_keyp_rocker_pane_ParamLimits

0xd759,	// (0x00066872) midp_keyp_rocker_pane

0xd7a8,	// (0x000668c1) midp_keyp_sk_left_pane_ParamLimits

0xd7a8,	// (0x000668c1) midp_keyp_sk_left_pane

0xd7fe,	// (0x00066917) midp_keyp_sk_right_pane_ParamLimits

0xd7fe,	// (0x00066917) midp_keyp_sk_right_pane

0x88c9,	// (0x000619e2) bg_button_pane_cp03

0xd854,	// (0x0006696d) midp_keyp_sk_left_pane_g1

0x88c9,	// (0x000619e2) bg_button_pane_cp04

0xd854,	// (0x0006696d) midp_keyp_sk_right_pane_g1

0x5359,	// (0x0005e472) midp_keyp_rocker_pane_g1

0xd85c,	// (0x00066975) keyp_game_cell_pane_ParamLimits

0xd85c,	// (0x00066975) keyp_game_cell_pane

0x88c9,	// (0x000619e2) bg_button_pane_cp02

0xd882,	// (0x0006699b) keyp_game_cell_pane_g1

0x9d1b,	// (0x00062e34) popup_fep_vkb2_window_ParamLimits

0x9d1b,	// (0x00062e34) popup_fep_vkb2_window

0xb9b9,	// (0x00064ad2) aid_size_cell_vkb2_ParamLimits

0xb9b9,	// (0x00064ad2) aid_size_cell_vkb2

0xb9e5,	// (0x00064afe) popup_fep_vkb2_window_g1_ParamLimits

0xb9e5,	// (0x00064afe) popup_fep_vkb2_window_g1

0xba35,	// (0x00064b4e) vkb2_area_bottom_pane_ParamLimits

0xba35,	// (0x00064b4e) vkb2_area_bottom_pane

0xba91,	// (0x00064baa) vkb2_area_keypad_pane_ParamLimits

0xba91,	// (0x00064baa) vkb2_area_keypad_pane

0xbadf,	// (0x00064bf8) vkb2_area_top_pane_ParamLimits

0xbadf,	// (0x00064bf8) vkb2_area_top_pane

0xbb6c,	// (0x00064c85) vkb2_top_entry_pane_ParamLimits

0xbb6c,	// (0x00064c85) vkb2_top_entry_pane

0xbb99,	// (0x00064cb2) vkb2_top_grid_left_pane_ParamLimits

0xbb99,	// (0x00064cb2) vkb2_top_grid_left_pane

0xbbba,	// (0x00064cd3) vkb2_top_grid_right_pane_ParamLimits

0xbbba,	// (0x00064cd3) vkb2_top_grid_right_pane

0x154d,	// (0x0005a666) vkb2_cell_keypad_pane_ParamLimits

0x154d,	// (0x0005a666) vkb2_cell_keypad_pane

0xbc02,	// (0x00064d1b) vkb2_area_bottom_grid_pane_ParamLimits

0xbc02,	// (0x00064d1b) vkb2_area_bottom_grid_pane

0xbc2c,	// (0x00064d45) vkb2_area_bottom_pane_g1_ParamLimits

0xbc2c,	// (0x00064d45) vkb2_area_bottom_pane_g1

0xbc52,	// (0x00064d6b) vkb2_area_bottom_pane_g2_ParamLimits

0xbc52,	// (0x00064d6b) vkb2_area_bottom_pane_g2

0xbc83,	// (0x00064d9c) vkb2_area_bottom_pane_g3_ParamLimits

0xbc83,	// (0x00064d9c) vkb2_area_bottom_pane_g3

0x0002,

0xfd83,	// (0x00068e9c) vkb2_area_bottom_pane_g_ParamLimits

0xfd83,	// (0x00068e9c) vkb2_area_bottom_pane_g

0x16f7,	// (0x0005a810) vkb2_top_cell_left_pane_ParamLimits

0x16f7,	// (0x0005a810) vkb2_top_cell_left_pane

0xd88b,	// (0x000669a4) vkb2_top_entry_pane_g1_ParamLimits

0xd88b,	// (0x000669a4) vkb2_top_entry_pane_g1

0xd899,	// (0x000669b2) vkb2_top_entry_pane_t1_ParamLimits

0xd899,	// (0x000669b2) vkb2_top_entry_pane_t1

0x728a,	// (0x000603a3) vkb2_top_entry_pane_t2_ParamLimits

0x728a,	// (0x000603a3) vkb2_top_entry_pane_t2

0x72dd,	// (0x000603f6) vkb2_top_entry_pane_t3_ParamLimits

0x72dd,	// (0x000603f6) vkb2_top_entry_pane_t3

0x0002,

0xfd8a,	// (0x00068ea3) vkb2_top_entry_pane_t_ParamLimits

0xfd8a,	// (0x00068ea3) vkb2_top_entry_pane_t

0xbced,	// (0x00064e06) vkb2_top_grid_right_pane_g1_ParamLimits

0xbced,	// (0x00064e06) vkb2_top_grid_right_pane_g1

0x175a,	// (0x0005a873) vkb2_top_grid_right_pane_g2_ParamLimits

0x175a,	// (0x0005a873) vkb2_top_grid_right_pane_g2

0x1772,	// (0x0005a88b) vkb2_top_grid_right_pane_g3_ParamLimits

0x1772,	// (0x0005a88b) vkb2_top_grid_right_pane_g3

0xbd03,	// (0x00064e1c) vkb2_top_grid_right_pane_g4_ParamLimits

0xbd03,	// (0x00064e1c) vkb2_top_grid_right_pane_g4

0x0003,

0xfd91,	// (0x00068eaa) vkb2_top_grid_right_pane_g_ParamLimits

0xfd91,	// (0x00068eaa) vkb2_top_grid_right_pane_g

0x17a0,	// (0x0005a8b9) vkb2_top_cell_left_pane_g1

0x17b7,	// (0x0005a8d0) vkb2_cell_keypad_pane_g1_ParamLimits

0x17b7,	// (0x0005a8d0) vkb2_cell_keypad_pane_g1

0x7301,	// (0x0006041a) vkb2_cell_keypad_pane_t1_ParamLimits

0x7301,	// (0x0006041a) vkb2_cell_keypad_pane_t1

0x17c5,	// (0x0005a8de) vkb2_cell_bottom_grid_pane_ParamLimits

0x17c5,	// (0x0005a8de) vkb2_cell_bottom_grid_pane

0x17fe,	// (0x0005a917) vkb2_cell_bottom_grid_pane_g1

0xd537,	// (0x00066650) aid_call2_pane_cp02

0xd53f,	// (0x00066658) aid_call_pane_cp02

0xd547,	// (0x00066660) clock_digital_number_pane_cp10

0xd54f,	// (0x00066668) clock_digital_number_pane_cp11

0xd557,	// (0x00066670) clock_digital_number_pane_cp12

0xd55f,	// (0x00066678) clock_digital_number_pane_cp13

0xd567,	// (0x00066680) clock_digital_separator_pane_cp10

0xde7c,	// (0x00066f95) popup_clock_digital_analogue_window_cp2_g1

0xde7c,	// (0x00066f95) popup_clock_digital_analogue_window_cp2_g2

0xd56f,	// (0x00066688) popup_clock_digital_analogue_window_cp2_g3

0xde7c,	// (0x00066f95) popup_clock_digital_analogue_window_cp2_g4

0xd56f,	// (0x00066688) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd46,	// (0x00068e5f) popup_clock_digital_analogue_window_cp2_g

0xd577,	// (0x00066690) popup_clock_digital_analogue_window_cp2_t1

0xd585,	// (0x0006669e) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd51,	// (0x00068e6a) popup_clock_digital_analogue_window_cp2_t

0x5359,	// (0x0005e472) clock_digital_number_pane_cp10_g1

0x5359,	// (0x0005e472) clock_digital_number_pane_cp10_g2

0x0001,

0xfb2d,	// (0x00068c46) clock_digital_number_pane_cp10_g

0x5359,	// (0x0005e472) clock_digital_separator_pane_cp10_g1

0x5359,	// (0x0005e472) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb2d,	// (0x00068c46) clock_digital_separator_pane_cp10_g

0x6d0b,	// (0x0005fe24) uniindi_top_pane_g3

0x6d1c,	// (0x0005fe35) uniindi_top_pane_g4

0x15d8,	// (0x0005a6f1) vkb2_row_keypad_pane_ParamLimits

0x15d8,	// (0x0005a6f1) vkb2_row_keypad_pane

0x181a,	// (0x0005a933) vkb2_cell_t_keypad_pane_ParamLimits

0x181a,	// (0x0005a933) vkb2_cell_t_keypad_pane

0x182a,	// (0x0005a943) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x182a,	// (0x0005a943) vkb2_cell_t_keypad_pane_cp08

0x183f,	// (0x0005a958) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x183f,	// (0x0005a958) vkb2_cell_t_keypad_pane_cp09

0x1853,	// (0x0005a96c) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1853,	// (0x0005a96c) vkb2_cell_t_keypad_pane_cp01

0x1864,	// (0x0005a97d) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1864,	// (0x0005a97d) vkb2_cell_t_keypad_pane_cp02

0x1875,	// (0x0005a98e) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1875,	// (0x0005a98e) vkb2_cell_t_keypad_pane_cp03

0x1886,	// (0x0005a99f) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1886,	// (0x0005a99f) vkb2_cell_t_keypad_pane_cp04

0x1897,	// (0x0005a9b0) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1897,	// (0x0005a9b0) vkb2_cell_t_keypad_pane_cp05

0x18a8,	// (0x0005a9c1) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x18a8,	// (0x0005a9c1) vkb2_cell_t_keypad_pane_cp06

0x18bb,	// (0x0005a9d4) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x18bb,	// (0x0005a9d4) vkb2_cell_t_keypad_pane_cp07

0x18d0,	// (0x0005a9e9) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x18d0,	// (0x0005a9e9) vkb2_cell_t_keypad_pane_cp10

0x0f6b,	// (0x0005a084) vkb2_cell_t_keypad_pane_g1

0x7318,	// (0x00060431) vkb2_cell_t_keypad_pane_t1

0xee13,	// (0x00067f2c) popup_grid_graphic2_window

0xd8d2,	// (0x000669eb) aid_size_cell_graphic2_ParamLimits

0xd8d2,	// (0x000669eb) aid_size_cell_graphic2

0xd910,	// (0x00066a29) bg_popup_window_pane_cp21_ParamLimits

0xd910,	// (0x00066a29) bg_popup_window_pane_cp21

0xd91e,	// (0x00066a37) graphic2_pages_pane_ParamLimits

0xd91e,	// (0x00066a37) graphic2_pages_pane

0xd976,	// (0x00066a8f) grid_graphic2_control_pane_ParamLimits

0xd976,	// (0x00066a8f) grid_graphic2_control_pane

0xd9be,	// (0x00066ad7) grid_graphic2_pane_ParamLimits

0xd9be,	// (0x00066ad7) grid_graphic2_pane

0xda49,	// (0x00066b62) cell_graphic2_pane

0xee13,	// (0x00067f2c) main_comp_mode_pane

0x6578,	// (0x0005f691) list_ai3_gene_pane_ParamLimits

0xd277,	// (0x00066390) bg_popup_window_pane_cp19_ParamLimits

0x694a,	// (0x0005fa63) bg_touch_area_indi_pane_ParamLimits

0x694a,	// (0x0005fa63) bg_touch_area_indi_pane

0x6960,	// (0x0005fa79) bg_touch_area_indi_pane_cp01_ParamLimits

0x6960,	// (0x0005fa79) bg_touch_area_indi_pane_cp01

0x6976,	// (0x0005fa8f) bg_touch_area_indi_pane_cp02_ParamLimits

0x6976,	// (0x0005fa8f) bg_touch_area_indi_pane_cp02

0x6990,	// (0x0005faa9) bg_touch_area_indi_pane_cp03_ParamLimits

0x6990,	// (0x0005faa9) bg_touch_area_indi_pane_cp03

0x69aa,	// (0x0005fac3) popup_slider_window_g1_ParamLimits

0x69c6,	// (0x0005fadf) popup_slider_window_g2_ParamLimits

0x69e2,	// (0x0005fafb) popup_slider_window_g3_ParamLimits

0xfcdb,	// (0x00068df4) popup_slider_window_g_ParamLimits

0x6a48,	// (0x0005fb61) popup_slider_window_t1_ParamLimits

0x6abc,	// (0x0005fbd5) small_volume_slider_vertical_pane_ParamLimits

0xda49,	// (0x00066b62) cell_graphic2_pane_ParamLimits

0xdaab,	// (0x00066bc4) bg_button_pane_cp10_ParamLimits

0xdaab,	// (0x00066bc4) bg_button_pane_cp10

0xdabe,	// (0x00066bd7) bg_button_pane_cp11_ParamLimits

0xdabe,	// (0x00066bd7) bg_button_pane_cp11

0xdad1,	// (0x00066bea) graphic2_pages_pane_g1_ParamLimits

0xdad1,	// (0x00066bea) graphic2_pages_pane_g1

0xdaec,	// (0x00066c05) graphic2_pages_pane_g2_ParamLimits

0xdaec,	// (0x00066c05) graphic2_pages_pane_g2

0x0001,

0xfd9f,	// (0x00068eb8) graphic2_pages_pane_g_ParamLimits

0xfd9f,	// (0x00068eb8) graphic2_pages_pane_g

0xdb04,	// (0x00066c1d) graphic2_pages_pane_t1_ParamLimits

0xdb04,	// (0x00066c1d) graphic2_pages_pane_t1

0xdb1c,	// (0x00066c35) cell_graphic2_control_pane_ParamLimits

0xdb1c,	// (0x00066c35) cell_graphic2_control_pane

0xe517,	// (0x00067630) cell_graphic2_pane_g1_ParamLimits

0xe517,	// (0x00067630) cell_graphic2_pane_g1

0xdb50,	// (0x00066c69) cell_graphic2_pane_g2_ParamLimits

0xdb50,	// (0x00066c69) cell_graphic2_pane_g2

0xe371,	// (0x0006748a) cell_graphic2_pane_g3_ParamLimits

0xe371,	// (0x0006748a) cell_graphic2_pane_g3

0xdb5d,	// (0x00066c76) cell_graphic2_pane_g4_ParamLimits

0xdb5d,	// (0x00066c76) cell_graphic2_pane_g4

0xe524,	// (0x0006763d) cell_graphic2_pane_g5_ParamLimits

0xe524,	// (0x0006763d) cell_graphic2_pane_g5

0x0004,

0xfda4,	// (0x00068ebd) cell_graphic2_pane_g_ParamLimits

0xfda4,	// (0x00068ebd) cell_graphic2_pane_g

0xe540,	// (0x00067659) cell_graphic2_pane_t1_ParamLimits

0xe540,	// (0x00067659) cell_graphic2_pane_t1

0x3814,	// (0x0005c92d) grid_highlight_pane_cp11_ParamLimits

0x3814,	// (0x0005c92d) grid_highlight_pane_cp11

0x8a6c,	// (0x00061b85) bg_button_pane_cp05

0xe589,	// (0x000676a2) cell_graphic2_control_pane_g1

0x5359,	// (0x0005e472) bg_touch_area_indi_pane_g1

0x75fb,	// (0x00060714) aid_cmod_rocker_key_size

0x7605,	// (0x0006071e) aid_cmode_itu_key_size

0x760f,	// (0x00060728) main_cmode_video_pane

0x7619,	// (0x00060732) main_comp_mode_itu_pane

0x7625,	// (0x0006073e) main_comp_mode_rocker_pane

0x7631,	// (0x0006074a) cell_cmode_rocker_pane_ParamLimits

0x7631,	// (0x0006074a) cell_cmode_rocker_pane

0x7645,	// (0x0006075e) cell_cmode_itu_pane_ParamLimits

0x7645,	// (0x0006075e) cell_cmode_itu_pane

0x8f7b,	// (0x00062094) bg_button_pane_cp06_ParamLimits

0x8f7b,	// (0x00062094) bg_button_pane_cp06

0x55d4,	// (0x0005e6ed) cell_cmode_rocker_pane_g1_ParamLimits

0x55d4,	// (0x0005e6ed) cell_cmode_rocker_pane_g1

0x6b63,	// (0x0005fc7c) cell_cmode_rocker_pane_g2_ParamLimits

0x6b63,	// (0x0005fc7c) cell_cmode_rocker_pane_g2

0x0001,

0xfdb4,	// (0x00068ecd) cell_cmode_rocker_pane_g_ParamLimits

0xfdb4,	// (0x00068ecd) cell_cmode_rocker_pane_g

0x88c9,	// (0x000619e2) bg_button_pane_cp07

0x765c,	// (0x00060775) cell_cmode_itu_pane_g1

0x7665,	// (0x0006077e) cell_cmode_itu_pane_t1

0x7673,	// (0x0006078c) cell_cmode_itu_pane_t2

0x0001,

0xfdb9,	// (0x00068ed2) cell_cmode_itu_pane_t

0x6d90,	// (0x0005fea9) aid_touch_ctrl_left

0x6d98,	// (0x0005feb1) aid_touch_ctrl_right

0x88c9,	// (0x000619e2) compa_mode_pane

0xe5b1,	// (0x000676ca) aid_cmod_rocker_key_size_cp

0xe5bb,	// (0x000676d4) aid_cmode_itu_key_size_cp

0x7695,	// (0x000607ae) compa_mode_pane_g1

0x769d,	// (0x000607b6) compa_mode_pane_g2

0x76a5,	// (0x000607be) compa_mode_pane_g3

0x0002,

0xfdbe,	// (0x00068ed7) compa_mode_pane_g

0xe5c5,	// (0x000676de) main_comp_mode_itu_pane_cp

0xe5cd,	// (0x000676e6) main_comp_mode_rocker_pane_cp

0xe5d5,	// (0x000676ee) cell_cmode_itu_pane_cp_ParamLimits

0xe5d5,	// (0x000676ee) cell_cmode_itu_pane_cp

0xe5ea,	// (0x00067703) cell_cmode_rocker_pane_cp_ParamLimits

0xe5ea,	// (0x00067703) cell_cmode_rocker_pane_cp

0x8f7b,	// (0x00062094) bg_button_pane_cp06_cp_ParamLimits

0x8f7b,	// (0x00062094) bg_button_pane_cp06_cp

0x55d4,	// (0x0005e6ed) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x55d4,	// (0x0005e6ed) cell_cmode_rocker_pane_g1_cp

0x5359,	// (0x0005e472) cell_cmode_rocker_pane_g2_cp

0x88c9,	// (0x000619e2) bg_button_pane_cp07_cp

0xe5fc,	// (0x00067715) cell_cmode_itu_pane_g1_cp

0xe605,	// (0x0006771e) cell_cmode_itu_pane_t1_cp

0xe605,	// (0x0006771e) cell_cmode_itu_pane_t2_cp

0xc80a,	// (0x00065923) settings_code_pane_cp2

0x892b,	// (0x00061a44) bg_popup_window_pane_cp3_ParamLimits

0x8c80,	// (0x00061d99) heading_pane_cp3_ParamLimits

0x8c8f,	// (0x00061da8) listscroll_popup_graphic_pane_ParamLimits

0x0cfe,	// (0x00059e17) fep_hwr_aid_pane_ParamLimits

0x1290,	// (0x0005a3a9) aid_touch_sctrl_top_ParamLimits

0x12ab,	// (0x0005a3c4) sctrl_sk_top_pane_g1_ParamLimits

0x0f6b,	// (0x0005a084) sctrl_sk_top_pane_g2_ParamLimits

0xfcf4,	// (0x00068e0d) sctrl_sk_top_pane_g_ParamLimits

0x12b8,	// (0x0005a3d1) sctrl_sk_top_pane_t1_ParamLimits

0x1290,	// (0x0005a3a9) aid_touch_sctrl_bottom_ParamLimits

0x12b8,	// (0x0005a3d1) sctrl_sk_bottom_pane_t1_ParamLimits

0x6cd5,	// (0x0005fdee) aid_area_touch_clock

0xbb2b,	// (0x00064c44) aid_vkb2_area_top_pane_cell_ParamLimits

0xbb2b,	// (0x00064c44) aid_vkb2_area_top_pane_cell

0xbbdb,	// (0x00064cf4) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbbdb,	// (0x00064cf4) aid_vkb2_area_bottom_pane_cell

0x7242,	// (0x0006035b) popup_char_count_window

0x76fb,	// (0x00060814) popup_char_count_window_g1

0x7704,	// (0x0006081d) popup_char_count_window_g2

0x770d,	// (0x00060826) popup_char_count_window_g3

0x0002,

0xfdc5,	// (0x00068ede) popup_char_count_window_g

0x7716,	// (0x0006082f) popup_char_count_window_t1

0x1361,	// (0x0005a47a) popup_fep_char_preview_window_ParamLimits

0x1361,	// (0x0005a47a) popup_fep_char_preview_window

0xbb4b,	// (0x00064c64) vkb2_top_candi_pane_ParamLimits

0xbb4b,	// (0x00064c64) vkb2_top_candi_pane

0xe613,	// (0x0006772c) cell_vkb2_top_candi_pane_ParamLimits

0xe613,	// (0x0006772c) cell_vkb2_top_candi_pane

0x18e5,	// (0x0005a9fe) bg_popup_fep_char_preview_window_ParamLimits

0x18e5,	// (0x0005a9fe) bg_popup_fep_char_preview_window

0x18f3,	// (0x0005aa0c) popup_fep_char_preview_window_t1_ParamLimits

0x18f3,	// (0x0005aa0c) popup_fep_char_preview_window_t1

0x7772,	// (0x0006088b) bg_popup_fep_char_preview_window_g1

0x777a,	// (0x00060893) bg_popup_fep_char_preview_window_g2

0x7782,	// (0x0006089b) bg_popup_fep_char_preview_window_g3

0x778a,	// (0x000608a3) bg_popup_fep_char_preview_window_g4

0x7792,	// (0x000608ab) bg_popup_fep_char_preview_window_g5

0x779a,	// (0x000608b3) bg_popup_fep_char_preview_window_g6

0x77a2,	// (0x000608bb) bg_popup_fep_char_preview_window_g7

0x77aa,	// (0x000608c3) bg_popup_fep_char_preview_window_g8

0x77b2,	// (0x000608cb) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdcc,	// (0x00068ee5) bg_popup_fep_char_preview_window_g

0x0f6b,	// (0x0005a084) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0f6b,	// (0x0005a084) cell_vkb2_top_candi_pane_g1

0x0f79,	// (0x0005a092) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0f79,	// (0x0005a092) cell_vkb2_top_candi_pane_g2

0x72bc,	// (0x000603d5) cell_vkb2_top_candi_pane_g3_ParamLimits

0x72bc,	// (0x000603d5) cell_vkb2_top_candi_pane_g3

0x1935,	// (0x0005aa4e) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1935,	// (0x0005aa4e) cell_vkb2_top_candi_pane_g4

0x5af3,	// (0x0005ec0c) cell_vkb2_top_candi_pane_g5_ParamLimits

0x5af3,	// (0x0005ec0c) cell_vkb2_top_candi_pane_g5

0x1956,	// (0x0005aa6f) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1956,	// (0x0005aa6f) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde1,	// (0x00068efa) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde1,	// (0x00068efa) cell_vkb2_top_candi_pane_g

0x1964,	// (0x0005aa7d) cell_vkb2_top_candi_pane_t1

0x0aa8,	// (0x00059bc1) aid_size_touch_slider_mark_ParamLimits

0x0aa8,	// (0x00059bc1) aid_size_touch_slider_mark

0xd95a,	// (0x00066a73) grid_graphic2_catg_pane_ParamLimits

0xd95a,	// (0x00066a73) grid_graphic2_catg_pane

0xda18,	// (0x00066b31) popup_grid_graphic2_window_t1_ParamLimits

0xda18,	// (0x00066b31) popup_grid_graphic2_window_t1

0xda2e,	// (0x00066b47) popup_grid_graphic2_window_t2_ParamLimits

0xda2e,	// (0x00066b47) popup_grid_graphic2_window_t2

0x0001,

0xfd9a,	// (0x00068eb3) popup_grid_graphic2_window_t_ParamLimits

0xfd9a,	// (0x00068eb3) popup_grid_graphic2_window_t

0x8a6c,	// (0x00061b85) bg_button_pane_cp05_ParamLimits

0xe589,	// (0x000676a2) cell_graphic2_control_pane_g1_ParamLimits

0xe677,	// (0x00067790) cell_graphic2_catg_pane_ParamLimits

0xe677,	// (0x00067790) cell_graphic2_catg_pane

0x88c9,	// (0x000619e2) bg_button_pane_cp12

0xe689,	// (0x000677a2) cell_graphic2_catg_pane_g1

0x6ca1,	// (0x0005fdba) cell_tb_ext_pane_t1_ParamLimits

0x1717,	// (0x0005a830) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1717,	// (0x0005a830) vkb2_top_cell_right_narrow_pane

0x172f,	// (0x0005a848) vkb2_top_cell_right_wide_pane_ParamLimits

0x172f,	// (0x0005a848) vkb2_top_cell_right_wide_pane

0x0cf0,	// (0x00059e09) bg_vkb2_func_pane_ParamLimits

0x0cf0,	// (0x00059e09) bg_vkb2_func_pane

0x17a0,	// (0x0005a8b9) vkb2_top_cell_left_pane_g1_ParamLimits

0x0cf0,	// (0x00059e09) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0cf0,	// (0x00059e09) bg_vkb2_fuc_pane_cp03

0x17fe,	// (0x0005a917) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2b27,	// (0x0005bc40) bg_vkb2_func_pane_g1

0x2b2f,	// (0x0005bc48) bg_vkb2_func_pane_g2

0x2b3f,	// (0x0005bc58) bg_vkb2_func_pane_g3

0x2b37,	// (0x0005bc50) bg_vkb2_func_pane_g4

0x2b47,	// (0x0005bc60) bg_vkb2_func_pane_g5

0x2b4f,	// (0x0005bc68) bg_vkb2_func_pane_g6

0x2b57,	// (0x0005bc70) bg_vkb2_func_pane_g7

0x2b5f,	// (0x0005bc78) bg_vkb2_func_pane_g8

0x2b1f,	// (0x0005bc38) bg_vkb2_func_pane_g9

0x0008,

0xfdee,	// (0x00068f07) bg_vkb2_func_pane_g

0x0cf0,	// (0x00059e09) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0cf0,	// (0x00059e09) bg_vkb2_fuc_pane_cp01

0x17a0,	// (0x0005a8b9) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x17a0,	// (0x0005a8b9) vkb2_top_cell_right_wide_pane_g1

0x0cf0,	// (0x00059e09) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0cf0,	// (0x00059e09) bg_vkb2_fuc_pane_cp02

0x1982,	// (0x0005aa9b) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1982,	// (0x0005aa9b) vkb2_top_cell_right_narrow_pane_g1

0xd1b9,	// (0x000662d2) aid_touch_area_decrease_ParamLimits

0xd1b9,	// (0x000662d2) aid_touch_area_decrease

0xd1f3,	// (0x0006630c) aid_touch_area_increase_ParamLimits

0xd1f3,	// (0x0006630c) aid_touch_area_increase

0xd21b,	// (0x00066334) aid_touch_area_mute_ParamLimits

0xd21b,	// (0x00066334) aid_touch_area_mute

0xd243,	// (0x0006635c) aid_touch_area_slider_ParamLimits

0xd243,	// (0x0006635c) aid_touch_area_slider

0xd283,	// (0x0006639c) popup_slider_window_g4_ParamLimits

0xd283,	// (0x0006639c) popup_slider_window_g4

0xd2ab,	// (0x000663c4) popup_slider_window_g5_ParamLimits

0xd2ab,	// (0x000663c4) popup_slider_window_g5

0xd2df,	// (0x000663f8) popup_slider_window_g6_ParamLimits

0xd2df,	// (0x000663f8) popup_slider_window_g6

0x6a76,	// (0x0005fb8f) popup_slider_window_t2_ParamLimits

0x6a76,	// (0x0005fb8f) popup_slider_window_t2

0x0001,

0xfce8,	// (0x00068e01) popup_slider_window_t_ParamLimits

0xfce8,	// (0x00068e01) popup_slider_window_t

0xd2fb,	// (0x00066414) slider_pane_ParamLimits

0xd2fb,	// (0x00066414) slider_pane

0x77d5,	// (0x000608ee) slider_pane_g1_ParamLimits

0x77d5,	// (0x000608ee) slider_pane_g1

0x77e9,	// (0x00060902) slider_pane_g2_ParamLimits

0x77e9,	// (0x00060902) slider_pane_g2

0x77ff,	// (0x00060918) slider_pane_g3_ParamLimits

0x77ff,	// (0x00060918) slider_pane_g3

0x0003,

0xfe01,	// (0x00068f1a) slider_pane_g_ParamLimits

0xfe01,	// (0x00068f1a) slider_pane_g

0xb441,	// (0x0006455a) popup_tb_float_extension_window_ParamLimits

0xb441,	// (0x0006455a) popup_tb_float_extension_window

0x782b,	// (0x00060944) aid_size_cell_tb_float_ext

0x88c9,	// (0x000619e2) bg_popup_sub_window_cp28

0x7837,	// (0x00060950) grid_tb_float_ext_pane

0x7843,	// (0x0006095c) cell_tb_float_ext_pane_ParamLimits

0x7843,	// (0x0006095c) cell_tb_float_ext_pane

0x785f,	// (0x00060978) cell_tb_float_ext_pane_g1

0x7868,	// (0x00060981) grid_highlight_pane_cp12

0xb76e,	// (0x00064887) cell_last_hwr_side_pane_ParamLimits

0xb76e,	// (0x00064887) cell_last_hwr_side_pane

0x5359,	// (0x0005e472) cell_last_hwr_side_pane_g1

0x7871,	// (0x0006098a) cell_last_hwr_side_pane_g2

0x0001,

0xfe0a,	// (0x00068f23) cell_last_hwr_side_pane_g

0xbcb8,	// (0x00064dd1) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbcb8,	// (0x00064dd1) vkb2_area_bottom_space_btn_pane

0x0f6b,	// (0x0005a084) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x7318,	// (0x00060431) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1964,	// (0x0005aa7d) cell_vkb2_top_candi_pane_t1_ParamLimits

0x199e,	// (0x0005aab7) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x199e,	// (0x0005aab7) vkb2_area_bottom_space_btn_pane_g1

0x19d8,	// (0x0005aaf1) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x19d8,	// (0x0005aaf1) vkb2_area_bottom_space_btn_pane_g2

0x1a0e,	// (0x0005ab27) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1a0e,	// (0x0005ab27) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0f,	// (0x00068f28) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0f,	// (0x00068f28) vkb2_area_bottom_space_btn_pane_g

0x0db5,	// (0x00059ece) cel_fep_hwr_func_pane_ParamLimits

0x0db5,	// (0x00059ece) cel_fep_hwr_func_pane

0xb743,	// (0x0006485c) cell_hwr_side_button_pane_ParamLimits

0xb743,	// (0x0006485c) cell_hwr_side_button_pane

0x6cd5,	// (0x0005fdee) aid_area_touch_clock_ParamLimits

0x8a6c,	// (0x00061b85) bg_uniindi_top_pane_ParamLimits

0x6ce9,	// (0x0005fe02) uniindi_top_pane_g1_ParamLimits

0x6cff,	// (0x0005fe18) uniindi_top_pane_g2_ParamLimits

0x6d0b,	// (0x0005fe24) uniindi_top_pane_g3_ParamLimits

0x6d1c,	// (0x0005fe35) uniindi_top_pane_g4_ParamLimits

0xfd20,	// (0x00068e39) uniindi_top_pane_g_ParamLimits

0x6d29,	// (0x0005fe42) uniindi_top_pane_t1_ParamLimits

0x8a6c,	// (0x00061b85) bg_vkb2_func_pane_cp01_ParamLimits

0x8a6c,	// (0x00061b85) bg_vkb2_func_pane_cp01

0x787a,	// (0x00060993) cel_fep_hwr_func_pane_g1_ParamLimits

0x787a,	// (0x00060993) cel_fep_hwr_func_pane_g1

0x8a6c,	// (0x00061b85) bg_vkb2_func_pane_cp02_ParamLimits

0x8a6c,	// (0x00061b85) bg_vkb2_func_pane_cp02

0x787a,	// (0x00060993) cell_hwr_side_button_pane_g1_ParamLimits

0x787a,	// (0x00060993) cell_hwr_side_button_pane_g1

0x298c,	// (0x0005baa5) status_pane_g4_ParamLimits

0x298c,	// (0x0005baa5) status_pane_g4

0x29a6,	// (0x0005babf) status_pane_t1

0x510c,	// (0x0005e225) form2_midp_gauge_slider_cont_pane

0x5114,	// (0x0005e22d) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcaf9,	// (0x00065c12) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcb0b,	// (0x00065c24) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae0,	// (0x00068bf9) form2_midp_gauge_slider_pane_t_ParamLimits

0x514a,	// (0x0005e263) form2_midp_slider_pane_ParamLimits

0x1329,	// (0x0005a442) aid_size_cell_func_vkb2_ParamLimits

0x1329,	// (0x0005a442) aid_size_cell_func_vkb2

0x7817,	// (0x00060930) slider_pane_g4_ParamLimits

0x7817,	// (0x00060930) slider_pane_g4

0xbd21,	// (0x00064e3a) form2_midp_gauge_slider_pane_t2_cp01

0xbd2f,	// (0x00064e48) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbd2f,	// (0x00064e48) form2_midp_gauge_slider_pane_t3_cp01

0x1a83,	// (0x0005ab9c) form2_midp_slider_pane_cp01

0x88c9,	// (0x000619e2) navi_smil_pane

0x78b3,	// (0x000609cc) navi_smil_pane_g1

0x78bb,	// (0x000609d4) navi_smil_pane_t1

0x7888,	// (0x000609a1) form2_midp_slider_pane_g1

0x7891,	// (0x000609aa) form2_midp_slider_pane_g2

0x7899,	// (0x000609b2) form2_midp_slider_pane_g3

0x7888,	// (0x000609a1) form2_midp_slider_pane_g4

0xe692,	// (0x000677ab) form2_midp_slider_pane_g5

0x0004,

0xfe18,	// (0x00068f31) form2_midp_slider_pane_g

0x1a48,	// (0x0005ab61) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1a48,	// (0x0005ab61) vkb2_area_bottom_space_btn_pane_g4

0xc134,	// (0x0006524d) lc0_navi_pane_ParamLimits

0xc134,	// (0x0006524d) lc0_navi_pane

0xc1a4,	// (0x000652bd) lc0_stat_indi_pane_ParamLimits

0xc1a4,	// (0x000652bd) lc0_stat_indi_pane

0xc1b9,	// (0x000652d2) ls0_title_pane_ParamLimits

0xc1b9,	// (0x000652d2) ls0_title_pane

0x8f7b,	// (0x00062094) bg_popup_sub_pane_cp14_ParamLimits

0x6cbc,	// (0x0005fdd5) list_uniindi_pane_ParamLimits

0x6cc8,	// (0x0005fde1) uniindi_top_pane_ParamLimits

0x6d68,	// (0x0005fe81) list_single_uniindi_pane_g1_ParamLimits

0x6d7b,	// (0x0005fe94) list_single_uniindi_pane_t1_ParamLimits

0xbd4c,	// (0x00064e65) lc0_stat_clock_pane_ParamLimits

0xbd4c,	// (0x00064e65) lc0_stat_clock_pane

0xe69b,	// (0x000677b4) lc0_stat_indi_pane_g1_ParamLimits

0xe69b,	// (0x000677b4) lc0_stat_indi_pane_g1

0xe6a8,	// (0x000677c1) lc0_stat_indi_pane_g2_ParamLimits

0xe6a8,	// (0x000677c1) lc0_stat_indi_pane_g2

0x0001,

0xfe23,	// (0x00068f3c) lc0_stat_indi_pane_g_ParamLimits

0xfe23,	// (0x00068f3c) lc0_stat_indi_pane_g

0xbd59,	// (0x00064e72) lc0_uni_indicator_pane_ParamLimits

0xbd59,	// (0x00064e72) lc0_uni_indicator_pane

0xe6b5,	// (0x000677ce) ls0_title_pane_g1_ParamLimits

0xe6b5,	// (0x000677ce) ls0_title_pane_g1

0xe6c9,	// (0x000677e2) ls0_title_pane_t1_ParamLimits

0xe6c9,	// (0x000677e2) ls0_title_pane_t1

0xbd66,	// (0x00064e7f) lc0_uni_indicator_pane_g1_ParamLimits

0xbd66,	// (0x00064e7f) lc0_uni_indicator_pane_g1

0x792d,	// (0x00060a46) lc0_stat_clock_pane_t1

0xee13,	// (0x00067f2c) main_ai5_pane

0x793b,	// (0x00060a54) ai5_sk_pane_ParamLimits

0x793b,	// (0x00060a54) ai5_sk_pane

0xe6f7,	// (0x00067810) cell_ai5_widget_pane_ParamLimits

0xe6f7,	// (0x00067810) cell_ai5_widget_pane

0xe776,	// (0x0006788f) aid_size_cell_widget_grid

0x79f5,	// (0x00060b0e) bg_ai5_widget_pane_ParamLimits

0x79f5,	// (0x00060b0e) bg_ai5_widget_pane

0xe7aa,	// (0x000678c3) cell_ai5_widget_pane_g2

0xe7be,	// (0x000678d7) cell_ai5_widget_pane_g3

0xe7d8,	// (0x000678f1) cell_ai5_widget_pane_g4

0xe7e8,	// (0x00067901) cell_ai5_widget_pane_g5

0xe7f8,	// (0x00067911) cell_ai5_widget_pane_g6

0xe804,	// (0x0006791d) cell_ai5_widget_pane_g7

0xe870,	// (0x00067989) cell_ai5_widget_pane_t1_ParamLimits

0xe870,	// (0x00067989) cell_ai5_widget_pane_t1

0xe88d,	// (0x000679a6) cell_ai5_widget_pane_t2_ParamLimits

0xe88d,	// (0x000679a6) cell_ai5_widget_pane_t2

0xe8a5,	// (0x000679be) cell_ai5_widget_pane_t3_ParamLimits

0xe8a5,	// (0x000679be) cell_ai5_widget_pane_t3

0xe8bd,	// (0x000679d6) cell_ai5_widget_pane_t4_ParamLimits

0xe8bd,	// (0x000679d6) cell_ai5_widget_pane_t4

0xe8e3,	// (0x000679fc) cell_ai5_widget_pane_t5_ParamLimits

0xe8e3,	// (0x000679fc) cell_ai5_widget_pane_t5

0x7bca,	// (0x00060ce3) cell_ai5_widget_pane_t6_ParamLimits

0x7bca,	// (0x00060ce3) cell_ai5_widget_pane_t6

0x7bdc,	// (0x00060cf5) cell_ai5_widget_pane_t7_ParamLimits

0x7bdc,	// (0x00060cf5) cell_ai5_widget_pane_t7

0xe903,	// (0x00067a1c) cell_ai5_widget_pane_t8_ParamLimits

0xe903,	// (0x00067a1c) cell_ai5_widget_pane_t8

0x000b,

0xfe43,	// (0x00068f5c) cell_ai5_widget_pane_t_ParamLimits

0xfe43,	// (0x00068f5c) cell_ai5_widget_pane_t

0xe987,	// (0x00067aa0) grid_ai5_widget_pane

0x8f7b,	// (0x00062094) highlight_cell_ai5_widget_pane_ParamLimits

0x8f7b,	// (0x00062094) highlight_cell_ai5_widget_pane

0xe995,	// (0x00067aae) ai5_sk_left_pane

0xe99f,	// (0x00067ab8) ai5_sk_middle_pane

0xe9a9,	// (0x00067ac2) ai5_sk_right_pane

0x7cab,	// (0x00060dc4) bg_ai5_widget_pane_g1_ParamLimits

0x7cab,	// (0x00060dc4) bg_ai5_widget_pane_g1

0x7cb7,	// (0x00060dd0) bg_ai5_widget_pane_g2_ParamLimits

0x7cb7,	// (0x00060dd0) bg_ai5_widget_pane_g2

0x7cc3,	// (0x00060ddc) bg_ai5_widget_pane_g3_ParamLimits

0x7cc3,	// (0x00060ddc) bg_ai5_widget_pane_g3

0x7ccf,	// (0x00060de8) bg_ai5_widget_pane_g4_ParamLimits

0x7ccf,	// (0x00060de8) bg_ai5_widget_pane_g4

0x7cdb,	// (0x00060df4) bg_ai5_widget_pane_g5_ParamLimits

0x7cdb,	// (0x00060df4) bg_ai5_widget_pane_g5

0x7ce7,	// (0x00060e00) bg_ai5_widget_pane_g6_ParamLimits

0x7ce7,	// (0x00060e00) bg_ai5_widget_pane_g6

0x7cf3,	// (0x00060e0c) bg_ai5_widget_pane_g7_ParamLimits

0x7cf3,	// (0x00060e0c) bg_ai5_widget_pane_g7

0x7cff,	// (0x00060e18) bg_ai5_widget_pane_g8_ParamLimits

0x7cff,	// (0x00060e18) bg_ai5_widget_pane_g8

0x7d0b,	// (0x00060e24) bg_ai5_widget_pane_g9_ParamLimits

0x7d0b,	// (0x00060e24) bg_ai5_widget_pane_g9

0x0008,

0xfe5c,	// (0x00068f75) bg_ai5_widget_pane_g_ParamLimits

0xfe5c,	// (0x00068f75) bg_ai5_widget_pane_g

0xe9dd,	// (0x00067af6) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9dd,	// (0x00067af6) cell_shortcut_ai5_widget_pane

0x22aa,	// (0x0005b3c3) bg_cell_shortcut_ai5_widget_pane

0x7d56,	// (0x00060e6f) cell_grid_ai5_widget_pane_g1

0x22aa,	// (0x0005b3c3) highlight_cell_shortcut_ai5_widget_pane

0x2b27,	// (0x0005bc40) ai5_sk_left_pane_g1

0x7d5f,	// (0x00060e78) ai5_sk_left_pane_g2

0x7d67,	// (0x00060e80) ai5_sk_left_pane_g3

0x7d6f,	// (0x00060e88) ai5_sk_left_pane_g4

0x0003,

0xfe6f,	// (0x00068f88) ai5_sk_left_pane_g

0x7d77,	// (0x00060e90) ai5_sk_left_pane_t1

0x2b2f,	// (0x0005bc48) ai5_sk_right_pane_g1

0x7d85,	// (0x00060e9e) ai5_sk_right_pane_g2

0x7d8d,	// (0x00060ea6) ai5_sk_right_pane_g3

0x7d95,	// (0x00060eae) ai5_sk_right_pane_g4

0x0003,

0xfe78,	// (0x00068f91) ai5_sk_right_pane_g

0x7d9d,	// (0x00060eb6) ai5_sk_right_pane_t1

0x2b2f,	// (0x0005bc48) ai5_sk_middle_pane_g1

0x2b27,	// (0x0005bc40) ai5_sk_middle_pane_g2

0x2b47,	// (0x0005bc60) ai5_sk_middle_pane_g3

0x7d8d,	// (0x00060ea6) ai5_sk_middle_pane_g4

0x7d67,	// (0x00060e80) ai5_sk_middle_pane_g5

0x7dab,	// (0x00060ec4) ai5_sk_middle_pane_g6

0xe9f0,	// (0x00067b09) ai5_sk_middle_pane_g7

0x0006,

0xfe81,	// (0x00068f9a) ai5_sk_middle_pane_g

0xc01e,	// (0x00065137) aid_touch_area_size_lc0_ParamLimits

0xc01e,	// (0x00065137) aid_touch_area_size_lc0

0x0f9a,	// (0x0005a0b3) cell_hwr_candidate_pane_t1_ParamLimits

0x264f,	// (0x0005b768) aid_touch_navi_pane

0xc2c4,	// (0x000653dd) status_dt_navi_pane_ParamLimits

0xc2c4,	// (0x000653dd) status_dt_navi_pane

0xc2dc,	// (0x000653f5) status_dt_sta_pane_ParamLimits

0xc2dc,	// (0x000653f5) status_dt_sta_pane

0xe9f8,	// (0x00067b11) dt_sta_controll_pane

0xea05,	// (0x00067b1e) dt_sta_indi_pane

0xea12,	// (0x00067b2b) dt_sta_title_pane

0x8a6c,	// (0x00061b85) bg_dt_sta_indi_pane_ParamLimits

0x8a6c,	// (0x00061b85) bg_dt_sta_indi_pane

0xea24,	// (0x00067b3d) dt_sta_battery_pane

0xea2c,	// (0x00067b45) dt_sta_indi_pane_g1

0xea35,	// (0x00067b4e) dt_sta_indi_pane_g2

0xea3e,	// (0x00067b57) dt_sta_indi_pane_g3

0x0002,

0xfe90,	// (0x00068fa9) dt_sta_indi_pane_g

0xea47,	// (0x00067b60) dt_sta_signal_pane

0x8f7b,	// (0x00062094) bg_dt_sta_title_pane_ParamLimits

0x8f7b,	// (0x00062094) bg_dt_sta_title_pane

0xea50,	// (0x00067b69) dt_sta_title_pane_g1

0xea58,	// (0x00067b71) dt_sta_title_pane_t1_ParamLimits

0xea58,	// (0x00067b71) dt_sta_title_pane_t1

0x88c9,	// (0x000619e2) bg_dt_sta_control_pane

0xea6d,	// (0x00067b86) dt_sta_controll_pane_g1

0xea76,	// (0x00067b8f) bg_dt_sta_title_pane_g1

0xea7f,	// (0x00067b98) bg_dt_sta_title_pane_g2

0xea88,	// (0x00067ba1) bg_dt_sta_title_pane_g3

0x0002,

0xfe97,	// (0x00068fb0) bg_dt_sta_title_pane_g

0x5359,	// (0x0005e472) bg_dt_sta_indi_pane_g1

0x7e59,	// (0x00060f72) dt_sta_signal_pane_g1

0x7e61,	// (0x00060f7a) dt_sta_signal_pane_g2

0x0001,

0xfe9e,	// (0x00068fb7) dt_sta_signal_pane_g

0x7e69,	// (0x00060f82) dt_sta_battery_pane_g1

0x7e72,	// (0x00060f8b) dt_sta_battery_pane_t1

0x5359,	// (0x0005e472) bg_dt_sta_control_pane_g1

0xdefe,	// (0x00067017) fep_china_uni_eep_pane

0xdf06,	// (0x0006701f) fep_china_uni_entry_pane_ParamLimits

0xdf16,	// (0x0006702f) popup_fep_china_uni_window_g1_ParamLimits

0xdf26,	// (0x0006703f) popup_fep_china_uni_window_g2_ParamLimits

0xdf26,	// (0x0006703f) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x00068816) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x00068816) popup_fep_china_uni_window_g

0x7e81,	// (0x00060f9a) fep_china_uni_eep_pane_g1

0x7e89,	// (0x00060fa2) fep_china_uni_eep_pane_t1

0x78aa,	// (0x000609c3) aid_touch_area_size_smil_player

0x27a3,	// (0x0005b8bc) lc0_clock_pane

0x299a,	// (0x0005bab3) status_pane_g5_ParamLimits

0x299a,	// (0x0005bab3) status_pane_g5

0xaf67,	// (0x00064080) popup_keymap_window

0x2960,	// (0x0005ba79) status_icon_pane

0xe7be,	// (0x000678d7) cell_ai5_widget_pane_g3_ParamLimits

0xe7d8,	// (0x000678f1) cell_ai5_widget_pane_g4_ParamLimits

0xe7e8,	// (0x00067901) cell_ai5_widget_pane_g5_ParamLimits

0xe810,	// (0x00067929) cell_ai5_widget_pane_g8_ParamLimits

0xe810,	// (0x00067929) cell_ai5_widget_pane_g8

0xe824,	// (0x0006793d) cell_ai5_widget_pane_g9_ParamLimits

0xe824,	// (0x0006793d) cell_ai5_widget_pane_g9

0xe838,	// (0x00067951) cell_ai5_widget_pane_g10_ParamLimits

0xe838,	// (0x00067951) cell_ai5_widget_pane_g10

0x7e98,	// (0x00060fb1) status_icon_pane_g1

0x88c9,	// (0x000619e2) bg_popup_sub_pane_cp13

0x7ea0,	// (0x00060fb9) popup_keymap_window_t1

0x2582,	// (0x0005b69b) control_pane_g6_ParamLimits

0x2582,	// (0x0005b69b) control_pane_g6

0x258f,	// (0x0005b6a8) control_pane_g7_ParamLimits

0x258f,	// (0x0005b6a8) control_pane_g7

0x259c,	// (0x0005b6b5) control_pane_g8_ParamLimits

0x259c,	// (0x0005b6b5) control_pane_g8

0xe9f8,	// (0x00067b11) dt_sta_controll_pane_ParamLimits

0xea05,	// (0x00067b1e) dt_sta_indi_pane_ParamLimits

0xea12,	// (0x00067b2b) dt_sta_title_pane_ParamLimits

0x8ebd,	// (0x00061fd6) aid_size_touch_scroll_bar_cale

0xeef0,	// (0x00068009) popup_discreet_window_ParamLimits

0xeef0,	// (0x00068009) popup_discreet_window

0x9d65,	// (0x00062e7e) popup_sk_window

0x319d,	// (0x0005c2b6) bg_popup_sub_pane_cp28_ParamLimits

0x319d,	// (0x0005c2b6) bg_popup_sub_pane_cp28

0x7eae,	// (0x00060fc7) popup_discreet_window_g1_ParamLimits

0x7eae,	// (0x00060fc7) popup_discreet_window_g1

0x7ece,	// (0x00060fe7) popup_discreet_window_t1_ParamLimits

0x7ece,	// (0x00060fe7) popup_discreet_window_t1

0x7eec,	// (0x00061005) popup_discreet_window_t2_ParamLimits

0x7eec,	// (0x00061005) popup_discreet_window_t2

0x0002,

0xfea3,	// (0x00068fbc) popup_discreet_window_t_ParamLimits

0xfea3,	// (0x00068fbc) popup_discreet_window_t

0x1ab9,	// (0x0005abd2) popup_sk_window_g1

0x1ac3,	// (0x0005abdc) popup_sk_window_g2

0x0001,

0xfeaa,	// (0x00068fc3) popup_sk_window_g

0x1acb,	// (0x0005abe4) popup_sk_window_t1

0x1ad9,	// (0x0005abf2) popup_sk_window_t1_copy1

0xe7aa,	// (0x000678c3) cell_ai5_widget_pane_g2_ParamLimits

0xe915,	// (0x00067a2e) cell_ai5_widget_pane_t9_ParamLimits

0xe915,	// (0x00067a2e) cell_ai5_widget_pane_t9

0x88c9,	// (0x000619e2) main_fep_fshwr2_pane

0xbd85,	// (0x00064e9e) aid_fshwr2_btn_pane

0xbd99,	// (0x00064eb2) aid_fshwr2_syb_pane

0xbdad,	// (0x00064ec6) aid_fshwr2_txt_pane

0xbdbd,	// (0x00064ed6) fshwr2_func_candi_pane

0xbddf,	// (0x00064ef8) fshwr2_hwr_syb_pane

0xbe03,	// (0x00064f1c) fshwr2_icf_pane

0xee13,	// (0x00067f2c) fshwr2_icf_bg_pane

0x1b85,	// (0x0005ac9e) fshwr2_icf_pane_t1_ParamLimits

0x1b85,	// (0x0005ac9e) fshwr2_icf_pane_t1

0xde7c,	// (0x00066f95) fshwr2_func_candi_pane_g1

0xea91,	// (0x00067baa) fshwr2_func_candi_row_pane_ParamLimits

0xea91,	// (0x00067baa) fshwr2_func_candi_row_pane

0xbe33,	// (0x00064f4c) cell_fshwr2_syb_pane_ParamLimits

0xbe33,	// (0x00064f4c) cell_fshwr2_syb_pane

0x1bbe,	// (0x0005acd7) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1bbe,	// (0x0005acd7) fshwr2_hwr_syb_pane_g1

0xee13,	// (0x00067f2c) bg_popup_call_pane_cp01

0xbe5b,	// (0x00064f74) fshwr2_func_candi_cell_pane_ParamLimits

0xbe5b,	// (0x00064f74) fshwr2_func_candi_cell_pane

0x2f7d,	// (0x0005c096) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x2f7d,	// (0x0005c096) fshwr2_func_candi_cell_bg_pane

0xbea6,	// (0x00064fbf) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xbea6,	// (0x00064fbf) fshwr2_func_candi_cell_pane_g1

0xbedd,	// (0x00064ff6) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xbedd,	// (0x00064ff6) fshwr2_func_candi_cell_pane_t1

0xee13,	// (0x00067f2c) bg_button_pane_cp08

0x25d1,	// (0x0005b6ea) cell_fshwr2_syb_bg_pane

0xbef8,	// (0x00065011) cell_fshwr2_syb_bg_pane_g1

0xbf0c,	// (0x00065025) cell_fshwr2_syb_bg_pane_t1

0x8f7b,	// (0x00062094) main_tmo_pane

0xc60f,	// (0x00065728) uni_indicator_pane_g1_ParamLimits

0xc625,	// (0x0006573e) uni_indicator_pane_g2_ParamLimits

0xc63b,	// (0x00065754) uni_indicator_pane_g3_ParamLimits

0xc64e,	// (0x00065767) uni_indicator_pane_g4_ParamLimits

0xc64e,	// (0x00065767) uni_indicator_pane_g4

0x3f02,	// (0x0005d01b) uni_indicator_pane_g5_ParamLimits

0x3f02,	// (0x0005d01b) uni_indicator_pane_g5

0x3f02,	// (0x0005d01b) uni_indicator_pane_g6_ParamLimits

0x3f02,	// (0x0005d01b) uni_indicator_pane_g6

0xf8fc,	// (0x00068a15) uni_indicator_pane_g_ParamLimits

0xd189,	// (0x000662a2) popup_tmo_note_window_ParamLimits

0xd189,	// (0x000662a2) popup_tmo_note_window

0x130b,	// (0x0005a424) fshwr2_bg_pane

0xbece,	// (0x00064fe7) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xbece,	// (0x00064fe7) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeaf,	// (0x00068fc8) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeaf,	// (0x00068fc8) fshwr2_func_candi_cell_pane_g

0x0f53,	// (0x0005a06c) bg_popup_window_pane_cp01

0x1c85,	// (0x0005ad9e) bg_popup_window_pane_g1_cp01

0x7f61,	// (0x0006107a) bg_popup_window_pane_cp22_ParamLimits

0x7f61,	// (0x0006107a) bg_popup_window_pane_cp22

0x7f6f,	// (0x00061088) listscroll_tmo_link_pane_ParamLimits

0x7f6f,	// (0x00061088) listscroll_tmo_link_pane

0x7faf,	// (0x000610c8) popup_tmo_note_window_g1_ParamLimits

0x7faf,	// (0x000610c8) popup_tmo_note_window_g1

0x7fbc,	// (0x000610d5) tmo_note_info_pane_ParamLimits

0x7fbc,	// (0x000610d5) tmo_note_info_pane

0xeab8,	// (0x00067bd1) list_tmo_note_info_pane_g1_ParamLimits

0xeab8,	// (0x00067bd1) list_tmo_note_info_pane_g1

0x7fed,	// (0x00061106) list_tmo_note_info_pane_g2_ParamLimits

0x7fed,	// (0x00061106) list_tmo_note_info_pane_g2

0x0001,

0xfeb4,	// (0x00068fcd) list_tmo_note_info_pane_g_ParamLimits

0xfeb4,	// (0x00068fcd) list_tmo_note_info_pane_g

0x8009,	// (0x00061122) list_tmo_note_info_text_pane_ParamLimits

0x8009,	// (0x00061122) list_tmo_note_info_text_pane

0x808e,	// (0x000611a7) list_tmo_link_pane

0x809b,	// (0x000611b4) scroll_pane_cp20

0x80a8,	// (0x000611c1) list_single_tmo_link_pane_ParamLimits

0x80a8,	// (0x000611c1) list_single_tmo_link_pane

0x80b8,	// (0x000611d1) list_single_tmo_link_pane_t1

0x80c6,	// (0x000611df) list_tmo_note_info_text_pane_t1_ParamLimits

0x80c6,	// (0x000611df) list_tmo_note_info_text_pane_t1

0xa818,	// (0x00063931) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa818,	// (0x00063931) aid_size_touch_scroll_bar_cp01

0xa747,	// (0x00063860) aid_size_touch_slider_marker

0x9d55,	// (0x00062e6e) popup_settings_window_ParamLimits

0x9d55,	// (0x00062e6e) popup_settings_window

0xe040,	// (0x00067159) popup_candi_list_indi_window

0x264f,	// (0x0005b768) aid_touch_navi_pane_ParamLimits

0x1264,	// (0x0005a37d) rs_clock_indi_pane

0x126d,	// (0x0005a386) sctrl_sk_bottom_pane_ParamLimits

0x127e,	// (0x0005a397) sctrl_sk_top_pane_ParamLimits

0x137b,	// (0x0005a494) popup_fep_tooltip_window

0xe776,	// (0x0006788f) aid_size_cell_widget_grid_ParamLimits

0xe795,	// (0x000678ae) cell_ai5_widget_pane_g1_ParamLimits

0xe795,	// (0x000678ae) cell_ai5_widget_pane_g1

0xe7f8,	// (0x00067911) cell_ai5_widget_pane_g6_ParamLimits

0xe804,	// (0x0006791d) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe28,	// (0x00068f41) cell_ai5_widget_pane_g_ParamLimits

0xfe28,	// (0x00068f41) cell_ai5_widget_pane_g

0xe944,	// (0x00067a5d) cell_ai5_widget_pane_t10_ParamLimits

0xe944,	// (0x00067a5d) cell_ai5_widget_pane_t10

0xe987,	// (0x00067aa0) grid_ai5_widget_pane_ParamLimits

0xe9b3,	// (0x00067acc) cell_contacts_ai5_widget_pane_ParamLimits

0xe9b3,	// (0x00067acc) cell_contacts_ai5_widget_pane

0x7f01,	// (0x0006101a) popup_discreet_window_t3_ParamLimits

0x7f01,	// (0x0006101a) popup_discreet_window_t3

0xbe1f,	// (0x00064f38) popup_fshwr2_char_preview_window_ParamLimits

0xbe1f,	// (0x00064f38) popup_fshwr2_char_preview_window

0xeacf,	// (0x00067be8) tmo_note_info_pane_t1

0xeae4,	// (0x00067bfd) tmo_note_info_pane_t2

0xeafd,	// (0x00067c16) tmo_note_info_pane_t3

0x806a,	// (0x00061183) tmo_note_info_pane_t4

0x807c,	// (0x00061195) tmo_note_info_pane_t5

0x0004,

0xfeb9,	// (0x00068fd2) tmo_note_info_pane_t

0x808e,	// (0x000611a7) list_tmo_link_pane_ParamLimits

0x809b,	// (0x000611b4) scroll_pane_cp20_ParamLimits

0xee13,	// (0x00067f2c) bg_popup_fep_char_preview_window_cp01

0x80df,	// (0x000611f8) popup_fshwr2_char_preview_window_t1

0x80ed,	// (0x00061206) popup_candi_list_indi_window_g1

0x80f6,	// (0x0006120f) bg_cell_contacts_ai5_widget_pane

0xeb12,	// (0x00067c2b) cell_contacts_ai5_widget_pane_g1

0x8117,	// (0x00061230) cell_contacts_ai5_widget_pane_g2

0x8123,	// (0x0006123c) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec4,	// (0x00068fdd) cell_contacts_ai5_widget_pane_g

0x812f,	// (0x00061248) cell_contacts_ai5_widget_pane_t1

0x8f7b,	// (0x00062094) highlight_cell_shortcut_ai5_widget_pane_cp01

0x81a6,	// (0x000612bf) settings_container_pane

0x22aa,	// (0x0005b3c3) listscroll_set_pane_copy1

0x4a8a,	// (0x0005dba3) scroll_pane_cp121_copy1

0x81b2,	// (0x000612cb) set_content_pane_copy1

0x81ba,	// (0x000612d3) aid_height_set_list_copy1_ParamLimits

0x81ba,	// (0x000612d3) aid_height_set_list_copy1

0x4102,	// (0x0005d21b) aid_size_parent_copy1_ParamLimits

0x4102,	// (0x0005d21b) aid_size_parent_copy1

0x81c6,	// (0x000612df) button_value_adjust_pane_cp6_copy1_ParamLimits

0x81c6,	// (0x000612df) button_value_adjust_pane_cp6_copy1

0x25d1,	// (0x0005b6ea) list_highlight_pane_cp2_copy1_ParamLimits

0x25d1,	// (0x0005b6ea) list_highlight_pane_cp2_copy1

0x81da,	// (0x000612f3) list_set_pane_copy1_ParamLimits

0x81da,	// (0x000612f3) list_set_pane_copy1

0x8141,	// (0x0006125a) main_pane_set_t1_copy1_ParamLimits

0x8141,	// (0x0006125a) main_pane_set_t1_copy1

0x817b,	// (0x00061294) main_pane_set_t2_copy1_ParamLimits

0x817b,	// (0x00061294) main_pane_set_t2_copy1

0x829b,	// (0x000613b4) main_pane_set_t3_copy1

0x82a9,	// (0x000613c2) main_pane_set_t4_copy1

0x819a,	// (0x000612b3) set_content_pane_g1_copy1_ParamLimits

0x819a,	// (0x000612b3) set_content_pane_g1_copy1

0x82b7,	// (0x000613d0) setting_code_pane_copy1

0x82bf,	// (0x000613d8) setting_slider_graphic_pane_copy1

0x82bf,	// (0x000613d8) setting_slider_pane_copy1

0x82c7,	// (0x000613e0) setting_text_pane_copy1

0x82c7,	// (0x000613e0) setting_volume_pane_copy1

0x82b7,	// (0x000613d0) settings_code_pane_cp2_copy1

0x82cf,	// (0x000613e8) settings_code_pane_cp_copy1_ParamLimits

0x82cf,	// (0x000613e8) settings_code_pane_cp_copy1

0x1c8e,	// (0x0005ada7) volume_set_pane_copy1

0x82e3,	// (0x000613fc) volume_set_pane_g10_copy1

0x82ef,	// (0x00061408) volume_set_pane_g1_copy1

0x82f9,	// (0x00061412) volume_set_pane_g2_copy1

0x8303,	// (0x0006141c) volume_set_pane_g3_copy1

0x830d,	// (0x00061426) volume_set_pane_g4_copy1

0x8317,	// (0x00061430) volume_set_pane_g5_copy1

0x8321,	// (0x0006143a) volume_set_pane_g6_copy1

0x832b,	// (0x00061444) volume_set_pane_g7_copy1

0x8335,	// (0x0006144e) volume_set_pane_g8_copy1

0x833f,	// (0x00061458) volume_set_pane_g9_copy1

0x892b,	// (0x00061a44) bg_set_opt_pane_cp_copy1_ParamLimits

0x892b,	// (0x00061a44) bg_set_opt_pane_cp_copy1

0x1c9a,	// (0x0005adb3) setting_slider_pane_t1_copy1_ParamLimits

0x1c9a,	// (0x0005adb3) setting_slider_pane_t1_copy1

0x1cb9,	// (0x0005add2) setting_slider_pane_t2_copy1_ParamLimits

0x1cb9,	// (0x0005add2) setting_slider_pane_t2_copy1

0x1cd3,	// (0x0005adec) setting_slider_pane_t3_copy1_ParamLimits

0x1cd3,	// (0x0005adec) setting_slider_pane_t3_copy1

0x1ceb,	// (0x0005ae04) slider_set_pane_copy1_ParamLimits

0x1ceb,	// (0x0005ae04) slider_set_pane_copy1

0x8fd3,	// (0x000620ec) set_opt_bg_pane_g1_copy2

0x8fdb,	// (0x000620f4) set_opt_bg_pane_g2_copy2

0x834b,	// (0x00061464) set_opt_bg_pane_g3_copy2

0x8feb,	// (0x00062104) set_opt_bg_pane_g4_copy2

0x8ff3,	// (0x0006210c) set_opt_bg_pane_g5_copy2

0x8ffb,	// (0x00062114) set_opt_bg_pane_g6_copy2

0x8355,	// (0x0006146e) set_opt_bg_pane_g7_copy2

0x835f,	// (0x00061478) set_opt_bg_pane_g8_copy2

0x8369,	// (0x00061482) set_opt_bg_pane_g9_copy2

0x1d01,	// (0x0005ae1a) aid_size_touch_slider_mark_copy1_ParamLimits

0x1d01,	// (0x0005ae1a) aid_size_touch_slider_mark_copy1

0x8373,	// (0x0006148c) slider_set_pane_g1_copy1

0x1d15,	// (0x0005ae2e) slider_set_pane_g2_copy1

0x0ac8,	// (0x00059be1) slider_set_pane_g3_copy1_ParamLimits

0x0ac8,	// (0x00059be1) slider_set_pane_g3_copy1

0x0adc,	// (0x00059bf5) slider_set_pane_g4_copy1_ParamLimits

0x0adc,	// (0x00059bf5) slider_set_pane_g4_copy1

0x0af4,	// (0x00059c0d) slider_set_pane_g5_copy1_ParamLimits

0x0af4,	// (0x00059c0d) slider_set_pane_g5_copy1

0x0ac8,	// (0x00059be1) slider_set_pane_g6_copy1_ParamLimits

0x0ac8,	// (0x00059be1) slider_set_pane_g6_copy1

0x1d1d,	// (0x0005ae36) slider_set_pane_g7_copy1_ParamLimits

0x1d1d,	// (0x0005ae36) slider_set_pane_g7_copy1

0x88dd,	// (0x000619f6) bg_set_opt_pane_cp2_copy1

0x837c,	// (0x00061495) setting_slider_graphic_pane_g1_copy1

0x8385,	// (0x0006149e) setting_slider_graphic_pane_t1_copy1

0x8395,	// (0x000614ae) setting_slider_graphic_pane_t2_copy1

0x83a5,	// (0x000614be) slider_set_pane_cp_copy1

0x83b5,	// (0x000614ce) input_focus_pane_cp1_copy1

0x83be,	// (0x000614d7) list_set_text_pane_copy1

0x83c6,	// (0x000614df) setting_text_pane_g1_copy1

0xdb6a,	// (0x00066c83) set_text_pane_t1_copy1

0x83b5,	// (0x000614ce) input_focus_pane_cp2_copy1

0x83c6,	// (0x000614df) setting_code_pane_g1_copy1

0x83cf,	// (0x000614e8) setting_code_pane_t1_copy1

0x488f,	// (0x0005d9a8) list_set_graphic_pane_copy1

0x88dd,	// (0x000619f6) bg_set_opt_pane_cp4_copy1

0x1fa5,	// (0x0005b0be) list_set_graphic_pane_g1_copy1_ParamLimits

0x1fa5,	// (0x0005b0be) list_set_graphic_pane_g1_copy1

0x83dd,	// (0x000614f6) list_set_graphic_pane_g2_copy1

0x1fbd,	// (0x0005b0d6) list_set_graphic_pane_t1_copy1_ParamLimits

0x1fbd,	// (0x0005b0d6) list_set_graphic_pane_t1_copy1

0x5359,	// (0x0005e472) rs_clock_indi_pane_g1

0x83e5,	// (0x000614fe) rs_clock_indi_pane_t1

0x83f3,	// (0x0006150c) rs_indi_pane

0x83fb,	// (0x00061514) rs_indi_pane_g1

0x8404,	// (0x0006151d) rs_indi_pane_g2

0x80ed,	// (0x00061206) rs_indi_pane_g3

0x0002,

0xfecb,	// (0x00068fe4) rs_indi_pane_g

0x22aa,	// (0x0005b3c3) bg_popup_preview_window_pane_cp03

0x840d,	// (0x00061526) popup_fep_tooltip_window_t1

0x6036,	// (0x0005f14f) popup_note2_window_g2_ParamLimits

0x6036,	// (0x0005f14f) popup_note2_window_g2

0x0001,

0xfc58,	// (0x00068d71) popup_note2_window_g_ParamLimits

0xfc58,	// (0x00068d71) popup_note2_window_g

0x653e,	// (0x0005f657) bg_popup_sub_pane_cp11_ParamLimits

0x654b,	// (0x0005f664) cell_ai3_links_pane_g1_ParamLimits

0x6562,	// (0x0005f67b) cell_ai3_links_pane_t1

0xdb6a,	// (0x00066c83) set_text_pane_t1_copy1_ParamLimits

0x21ac,	// (0x0005b2c5) cell_graphic_popup_pane_cp2_ParamLimits

0x21ac,	// (0x0005b2c5) cell_graphic_popup_pane_cp2

0x841b,	// (0x00061534) cell_graphic_popup_pane_g1_cp2

0x8cd0,	// (0x00061de9) cell_graphic_popup_pane_g2_cp2

0x8423,	// (0x0006153c) cell_graphic_popup_pane_g3_cp2

0x842b,	// (0x00061544) cell_graphic_popup_pane_t2_cp2

0x8ce1,	// (0x00061dfa) grid_highlight_pane_cp3_cp2

0xbfe5,	// (0x000650fe) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8f7b,	// (0x00062094) main_tmo_pane_ParamLimits

0xd17d,	// (0x00066296) popup_tmo_big_image_note_window

0xe784,	// (0x0006789d) cell_ai5_widget_list_pane

0xe78c,	// (0x000678a5) cell_ai5_widget_lrg_icon_pane

0xeacf,	// (0x00067be8) tmo_note_info_pane_t1_ParamLimits

0xeae4,	// (0x00067bfd) tmo_note_info_pane_t2_ParamLimits

0xeafd,	// (0x00067c16) tmo_note_info_pane_t3_ParamLimits

0x806a,	// (0x00061183) tmo_note_info_pane_t4_ParamLimits

0x807c,	// (0x00061195) tmo_note_info_pane_t5_ParamLimits

0xfeb9,	// (0x00068fd2) tmo_note_info_pane_t_ParamLimits

0x81a6,	// (0x000612bf) settings_container_pane_ParamLimits

0x83ad,	// (0x000614c6) indicator_popup_pane_cp5

0x83ad,	// (0x000614c6) indicator_popup_pane_cp6

0x488f,	// (0x0005d9a8) list_set_graphic_pane_copy1_ParamLimits

0x88c9,	// (0x000619e2) bg_popup_window_pane_cp23

0x8439,	// (0x00061552) popup_tmo_big_image_note_window_g1

0x8445,	// (0x0006155e) popup_tmo_big_image_note_window_t1

0x8455,	// (0x0006156e) popup_tmo_big_image_note_window_t2

0x8465,	// (0x0006157e) popup_tmo_big_image_note_window_t3

0x0002,

0xfed2,	// (0x00068feb) popup_tmo_big_image_note_window_t

0x5359,	// (0x0005e472) cell_ai5_widget_lrg_icon_pane_g1

0xeb27,	// (0x00067c40) cell_ai5_widget_lrg_icon_pane_t1

0xeb35,	// (0x00067c4e) cell_ai5_widget_list_row_pane_ParamLimits

0xeb35,	// (0x00067c4e) cell_ai5_widget_list_row_pane

0xeb4d,	// (0x00067c66) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xeb4d,	// (0x00067c66) cell_ai5_widget_list_row_pane_g1

0xeb5a,	// (0x00067c73) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xeb5a,	// (0x00067c73) cell_ai5_widget_list_row_pane_t1

0xeb85,	// (0x00067c9e) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xeb85,	// (0x00067c9e) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed9,	// (0x00068ff2) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed9,	// (0x00068ff2) cell_ai5_widget_list_row_pane_t

0xee13,	// (0x00067f2c) main_fep_vtchi_ss_pane

0x8523,	// (0x0006163c) popup_fep_char_pre_window

0x852b,	// (0x00061644) popup_fep_ituss_window

0xebd7,	// (0x00067cf0) popup_fep_vkbss_window

0x25d1,	// (0x0005b6ea) grid_vkbss_keypad_pane_ParamLimits

0x25d1,	// (0x0005b6ea) grid_vkbss_keypad_pane

0x8599,	// (0x000616b2) ituss_keypad_pane

0x1d3d,	// (0x0005ae56) aid_vkbss_key_offset_ParamLimits

0x1d3d,	// (0x0005ae56) aid_vkbss_key_offset

0xbf22,	// (0x0006503b) cell_vkbss_key_pane_ParamLimits

0xbf22,	// (0x0006503b) cell_vkbss_key_pane

0x85a5,	// (0x000616be) bg_cell_vkbss_key_g1_ParamLimits

0x85a5,	// (0x000616be) bg_cell_vkbss_key_g1

0xebe6,	// (0x00067cff) cell_vkbss_key_3p_pane_ParamLimits

0xebe6,	// (0x00067cff) cell_vkbss_key_3p_pane

0xec1c,	// (0x00067d35) cell_vkbss_key_g1_ParamLimits

0xec1c,	// (0x00067d35) cell_vkbss_key_g1

0xec52,	// (0x00067d6b) cell_vkbss_key_t1_ParamLimits

0xec52,	// (0x00067d6b) cell_vkbss_key_t1

0x1dab,	// (0x0005aec4) cell_ituss_key_pane_ParamLimits

0x1dab,	// (0x0005aec4) cell_ituss_key_pane

0x8679,	// (0x00061792) bg_cell_ituss_key_g1_ParamLimits

0x8679,	// (0x00061792) bg_cell_ituss_key_g1

0x8685,	// (0x0006179e) cell_ituss_key_pane_g1_ParamLimits

0x8685,	// (0x0006179e) cell_ituss_key_pane_g1

0x1dbc,	// (0x0005aed5) cell_ituss_key_pane_g2_ParamLimits

0x1dbc,	// (0x0005aed5) cell_ituss_key_pane_g2

0x0005,

0xfee0,	// (0x00068ff9) cell_ituss_key_pane_g_ParamLimits

0xfee0,	// (0x00068ff9) cell_ituss_key_pane_g

0x1e40,	// (0x0005af59) cell_ituss_key_t1_ParamLimits

0x1e40,	// (0x0005af59) cell_ituss_key_t1

0x1e7a,	// (0x0005af93) cell_ituss_key_t2_ParamLimits

0x1e7a,	// (0x0005af93) cell_ituss_key_t2

0x1eac,	// (0x0005afc5) cell_ituss_key_t3_ParamLimits

0x1eac,	// (0x0005afc5) cell_ituss_key_t3

0x1edd,	// (0x0005aff6) cell_ituss_key_t4_ParamLimits

0x1edd,	// (0x0005aff6) cell_ituss_key_t4

0x0004,

0xfeed,	// (0x00069006) cell_ituss_key_t_ParamLimits

0xfeed,	// (0x00069006) cell_ituss_key_t

0xecae,	// (0x00067dc7) cell_vkbss_key_3p_pane_g1

0xecb6,	// (0x00067dcf) cell_vkbss_key_3p_pane_g2

0xecbe,	// (0x00067dd7) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef8,	// (0x00069011) cell_vkbss_key_3p_pane_g

0x22aa,	// (0x0005b3c3) bg_popup_fep_char_preview_window_cp02

0x86c3,	// (0x000617dc) popup_fep_char_pre_window_t1

0xe763,	// (0x0006787c) main_ai5_sk_pane

0x80f6,	// (0x0006120f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xeb12,	// (0x00067c2b) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8117,	// (0x00061230) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8123,	// (0x0006123c) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec4,	// (0x00068fdd) cell_contacts_ai5_widget_pane_g_ParamLimits

0x812f,	// (0x00061248) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8f7b,	// (0x00062094) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xecc6,	// (0x00067ddf) main_ai5_sk_pane_g1

0x2fd5,	// (0x0005c0ee) popup_query_code_window_g1

0xebc8,	// (0x00067ce1) popup_fep_vkb_icf_pane

0x8570,	// (0x00061689) popup_fep_vtchi_icf_pane

0x86da,	// (0x000617f3) bg_icf_pane

0x86da,	// (0x000617f3) list_vkb_icf_pane

0x86e6,	// (0x000617ff) bg_icf_pane_cp01

0x86f9,	// (0x00061812) vtchi_icf_list_pane

0xed1b,	// (0x00067e34) list_vkb_icf_pane_t1_ParamLimits

0xed1b,	// (0x00067e34) list_vkb_icf_pane_t1

0x8772,	// (0x0006188b) vtchi_icf_list_pane_t1_ParamLimits

0x8772,	// (0x0006188b) vtchi_icf_list_pane_t1

0x852b,	// (0x00061644) popup_fep_ituss_window_ParamLimits

0x8570,	// (0x00061689) popup_fep_vtchi_icf_pane_ParamLimits

0x8599,	// (0x000616b2) ituss_keypad_pane_ParamLimits

0x1d33,	// (0x0005ae4c) ituss_sks_pane

0x86da,	// (0x000617f3) bg_icf_pane_ParamLimits

0xebad,	// (0x00067cc6) icf_edit_indi_pane_ParamLimits

0xebad,	// (0x00067cc6) icf_edit_indi_pane

0x86da,	// (0x000617f3) list_vkb_icf_pane_ParamLimits

0x86e6,	// (0x000617ff) bg_icf_pane_cp01_ParamLimits

0x8516,	// (0x0006162f) icf_edit_indi_pane_cp01_ParamLimits

0x8516,	// (0x0006162f) icf_edit_indi_pane_cp01

0x86f9,	// (0x00061812) vtchi_query_pane

0x787a,	// (0x00060993) icf_edit_indi_pane_g1_ParamLimits

0x787a,	// (0x00060993) icf_edit_indi_pane_g1

0xed32,	// (0x00067e4b) icf_edit_indi_pane_g2_ParamLimits

0xed32,	// (0x00067e4b) icf_edit_indi_pane_g2

0x0001,

0xff23,	// (0x0006903c) icf_edit_indi_pane_g_ParamLimits

0xff23,	// (0x0006903c) icf_edit_indi_pane_g

0xed46,	// (0x00067e5f) icf_edit_indi_pane_t1

0x878b,	// (0x000618a4) bg_input_focus_pane_cp042

0x8eb4,	// (0x00061fcd) vtchi_button_pane

0x8794,	// (0x000618ad) vtchi_query_pane_t1

0x87a2,	// (0x000618bb) vtchi_query_pane_t2

0x87b0,	// (0x000618c9) vtchi_query_pane_t3

0x0002,

0xff12,	// (0x0006902b) vtchi_query_pane_t

0xee13,	// (0x00067f2c) bg_button_pane_cp13

0x87be,	// (0x000618d7) vtchi_button_pane_g1

0x1f20,	// (0x0005b039) ituss_sks_pane_g1

0x1f2b,	// (0x0005b044) ituss_sks_pane_g2

0x0001,

0xff19,	// (0x00069032) ituss_sks_pane_g

0x87c6,	// (0x000618df) ituss_sks_pane_t1

0x87d4,	// (0x000618ed) ituss_sks_pane_t2

0x0001,

0xff1e,	// (0x00069037) ituss_sks_pane_t

0x4e2d,	// (0x0005df46) indicator_nsta_pane_cp_g1

0x4e36,	// (0x0005df4f) indicator_nsta_pane_cp_g2

0x4e3e,	// (0x0005df57) indicator_nsta_pane_cp_g3

0x4e46,	// (0x0005df5f) indicator_nsta_pane_cp_g4

0x4e36,	// (0x0005df4f) indicator_nsta_pane_cp_g5

0x4e3e,	// (0x0005df57) indicator_nsta_pane_cp_g6

0x0005,

0xfa96,	// (0x00068baf) indicator_nsta_pane_cp_g

0xe56b,	// (0x00067684) cell_graphic2_pane_t2_ParamLimits

0xe56b,	// (0x00067684) cell_graphic2_pane_t2

0x0001,

0xfdaf,	// (0x00068ec8) cell_graphic2_pane_t_ParamLimits

0xfdaf,	// (0x00068ec8) cell_graphic2_pane_t

0xe5a3,	// (0x000676bc) cell_graphic2_control_pane_t1

0xaa92,	// (0x00063bab) signal_pane_g3_ParamLimits

0xaa92,	// (0x00063bab) signal_pane_g3

0xaaa6,	// (0x00063bbf) signal_pane_g4_ParamLimits

0xaaa6,	// (0x00063bbf) signal_pane_g4

0xeb97,	// (0x00067cb0) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xeb97,	// (0x00067cb0) cell_ai5_widget_list_row_pane_t3

0x8699,	// (0x000617b2) cell_ituss_key_pane_t1_ParamLimits

0x8699,	// (0x000617b2) cell_ituss_key_pane_t1

0x2c3c,	// (0x0005bd55) form_field_data_wide_pane_vc_t2_ParamLimits

0x2c3c,	// (0x0005bd55) form_field_data_wide_pane_vc_t2

0x2c50,	// (0x0005bd69) form_field_data_wide_pane_vc_t3_ParamLimits

0x2c50,	// (0x0005bd69) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e4,	// (0x000688fd) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e4,	// (0x000688fd) form_field_data_wide_pane_vc_t

0x4aca,	// (0x0005dbe3) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4aca,	// (0x0005dbe3) form_field_slider_wide_pane_vc_t3

0x4ba0,	// (0x0005dcb9) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4ba0,	// (0x0005dcb9) form_field_popup_wide_pane_vc_t2

0x4bb7,	// (0x0005dcd0) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4bb7,	// (0x0005dcd0) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa85,	// (0x00068b9e) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa85,	// (0x00068b9e) form_field_popup_wide_pane_vc_t

0xbd85,	// (0x00064e9e) aid_fshwr2_btn_pane_ParamLimits

0xbd99,	// (0x00064eb2) aid_fshwr2_syb_pane_ParamLimits

0xbdad,	// (0x00064ec6) aid_fshwr2_txt_pane_ParamLimits

0x130b,	// (0x0005a424) fshwr2_bg_pane_ParamLimits

0xbdbd,	// (0x00064ed6) fshwr2_func_candi_pane_ParamLimits

0xbddf,	// (0x00064ef8) fshwr2_hwr_syb_pane_ParamLimits

0xbe03,	// (0x00064f1c) fshwr2_icf_pane_ParamLimits

0x39f2,	// (0x0005cb0b) list_double_graphic_pane_vc_g4_ParamLimits

0x39f2,	// (0x0005cb0b) list_double_graphic_pane_vc_g4

0x1ddc,	// (0x0005aef5) cell_ituss_key_pane_g3_ParamLimits

0x1ddc,	// (0x0005aef5) cell_ituss_key_pane_g3

0x1f0e,	// (0x0005b027) cell_ituss_key_t5_ParamLimits

0x1f0e,	// (0x0005b027) cell_ituss_key_t5

0xebd7,	// (0x00067cf0) popup_fep_vkbss_window_ParamLimits

0xe76d,	// (0x00067886) aid_cell_ai5_quarter

0xed46,	// (0x00067e5f) icf_edit_indi_pane_t1_ParamLimits

0x8b14,	// (0x00061c2d) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x8b14,	// (0x00061c2d) aid_tch_indicator_popup_pane_cp2

0x8b27,	// (0x00061c40) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x8b27,	// (0x00061c40) aid_tch_query_popup_data_pane_cp2

0x2f7d,	// (0x0005c096) aid_tch_query_popup_pane_ParamLimits

0x2f7d,	// (0x0005c096) aid_tch_query_popup_pane

0x2f7d,	// (0x0005c096) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x2f7d,	// (0x0005c096) aid_tch_query_popup_data_pane_cp1

0x25d1,	// (0x0005b6ea) cell_fshwr2_syb_bg_pane_ParamLimits

0xbef8,	// (0x00065011) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xbf0c,	// (0x00065025) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xebc8,	// (0x00067ce1) popup_fep_vkb_icf_pane_ParamLimits

0xbd19,	// (0x00064e32) bg_popup_fep_char_preview_window_g10

0xe84c,	// (0x00067965) cell_ai5_widget_pane_g11_ParamLimits

0xe84c,	// (0x00067965) cell_ai5_widget_pane_g11

0xe858,	// (0x00067971) cell_ai5_widget_pane_g12_ParamLimits

0xe858,	// (0x00067971) cell_ai5_widget_pane_g12

0xe864,	// (0x0006797d) cell_ai5_widget_pane_g13_ParamLimits

0xe864,	// (0x0006797d) cell_ai5_widget_pane_g13

0xe963,	// (0x00067a7c) cell_ai5_widget_pane_t11_ParamLimits

0xe963,	// (0x00067a7c) cell_ai5_widget_pane_t11

0xe975,	// (0x00067a8e) cell_ai5_widget_pane_t12_ParamLimits

0xe975,	// (0x00067a8e) cell_ai5_widget_pane_t12

0x1de8,	// (0x0005af01) cell_ituss_key_pane_g4_ParamLimits

0x1de8,	// (0x0005af01) cell_ituss_key_pane_g4

0x1e04,	// (0x0005af1d) cell_ituss_key_pane_g5_ParamLimits

0x1e04,	// (0x0005af1d) cell_ituss_key_pane_g5

0x1e20,	// (0x0005af39) cell_ituss_key_pane_g6_ParamLimits

0x1e20,	// (0x0005af39) cell_ituss_key_pane_g6

0x2b1f,	// (0x0005bc38) bg_icf_pane_g1

0xeccf,	// (0x00067de8) bg_icf_pane_g2

0xecd9,	// (0x00067df2) bg_icf_pane_g3

0xece1,	// (0x00067dfa) bg_icf_pane_g4

0xeceb,	// (0x00067e04) bg_icf_pane_g5

0xecf5,	// (0x00067e0e) bg_icf_pane_g6

0xecff,	// (0x00067e18) bg_icf_pane_g7

0xed07,	// (0x00067e20) bg_icf_pane_g8

0xed11,	// (0x00067e2a) bg_icf_pane_g9

0x0008,

0xfeff,	// (0x00069018) bg_icf_pane_g

0x8586,	// (0x0006169f) popup_hyb_candi_window_ParamLimits

0x8586,	// (0x0006169f) popup_hyb_candi_window

0x2bab,	// (0x0005bcc4) bg_popup_sub_pane_cp01_ParamLimits

0x2bab,	// (0x0005bcc4) bg_popup_sub_pane_cp01

0x880f,	// (0x00061928) entry_hyb_candi_pane_ParamLimits

0x880f,	// (0x00061928) entry_hyb_candi_pane

0x881e,	// (0x00061937) grid_hyb_candi_pane_ParamLimits

0x881e,	// (0x00061937) grid_hyb_candi_pane

0x8833,	// (0x0006194c) grid_hyb_phrase_pane_ParamLimits

0x8833,	// (0x0006194c) grid_hyb_phrase_pane

0x8842,	// (0x0006195b) cell_hyb_candi_pane_ParamLimits

0x8842,	// (0x0006195b) cell_hyb_candi_pane

0x8ebd,	// (0x00061fd6) cell_hyb_candi_scroll_pane

0xde7c,	// (0x00066f95) cell_hyb_candi_pane_g1

0x885e,	// (0x00061977) cell_hyb_candi_pane_t1

0x886c,	// (0x00061985) cell_hyb_phrase_pane

0xde7c,	// (0x00066f95) cell_hyb_phrase_pane_g1

0x8875,	// (0x0006198e) cell_hyb_phrase_pane_t1

0x8883,	// (0x0006199c) entry_hyb_candi_pane_t1

0x22aa,	// (0x0005b3c3) input_focus_pane_cp06

0x8891,	// (0x000619aa) cell_hyb_candi_scroll_pane_g1

0x8899,	// (0x000619b2) cell_hyb_candi_scroll_pane_g1_aid

0x88a1,	// (0x000619ba) cell_hyb_candi_scroll_pane_g2

0x88a9,	// (0x000619c2) cell_hyb_candi_scroll_pane_g2_aid

0x88b1,	// (0x000619ca) cell_hyb_candi_scroll_pane_g3

0x88b9,	// (0x000619d2) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Large
