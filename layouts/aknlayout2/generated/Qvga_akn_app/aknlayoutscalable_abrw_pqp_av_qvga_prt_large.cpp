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

#include "aknlayoutscalable_abrw_pqp_av_qvga_prt_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x00031ea3 };

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
0x74a7,	// (0x0003934a) Screen

0x74b1,	// (0x00039354) application_window_ParamLimits

0x74b1,	// (0x00039354) application_window

0x0e92,	// (0x00032d35) screen_g1

0x74bf,	// (0x00039362) area_bottom_pane_ParamLimits

0x74bf,	// (0x00039362) area_bottom_pane

0x0f20,	// (0x00032dc3) area_top_pane_ParamLimits

0x0f20,	// (0x00032dc3) area_top_pane

0xcc3e,	// (0x0003eae1) main_pane_ParamLimits

0xcc3e,	// (0x0003eae1) main_pane

0x1051,	// (0x00032ef4) misc_graphics

0x7bbf,	// (0x00039a62) battery_pane_ParamLimits

0x7bbf,	// (0x00039a62) battery_pane

0x4cd7,	// (0x00036b7a) bg_status_flat_pane_g8

0x4cdf,	// (0x00036b82) bg_status_flat_pane_g9

0x440e,	// (0x000362b1) context_pane_ParamLimits

0x440e,	// (0x000362b1) context_pane

0x7cf1,	// (0x00039b94) navi_pane_ParamLimits

0x7cf1,	// (0x00039b94) navi_pane

0x7d5d,	// (0x00039c00) signal_pane_ParamLimits

0x7d5d,	// (0x00039c00) signal_pane

0x0008,

0xf879,	// (0x0004171c) bg_status_flat_pane_g

0x7dbe,	// (0x00039c61) status_pane_g1_ParamLimits

0x7dbe,	// (0x00039c61) status_pane_g1

0x4474,	// (0x00036317) status_pane_g2_ParamLimits

0x4474,	// (0x00036317) status_pane_g2

0x4480,	// (0x00036323) status_pane_g3_ParamLimits

0x4480,	// (0x00036323) status_pane_g3

0x0004,

0xf7a5,	// (0x00041648) status_pane_g_ParamLimits

0xf7a5,	// (0x00041648) status_pane_g

0x7dca,	// (0x00039c6d) title_pane_ParamLimits

0x7dca,	// (0x00039c6d) title_pane

0x7e07,	// (0x00039caa) uni_indicator_pane_ParamLimits

0x7e07,	// (0x00039caa) uni_indicator_pane

0x4365,	// (0x00036208) bg_list_pane_ParamLimits

0x4365,	// (0x00036208) bg_list_pane

0x079d,	// (0x00032640) find_pane

0x7b62,	// (0x00039a05) listscroll_app_pane_ParamLimits

0x7b62,	// (0x00039a05) listscroll_app_pane

0x4385,	// (0x00036228) listscroll_form_pane

0x07a5,	// (0x00032648) listscroll_gen_pane_ParamLimits

0x07a5,	// (0x00032648) listscroll_gen_pane

0xd435,	// (0x0003f2d8) listscroll_set_pane

0x7807,	// (0x000396aa) main_idle_act_pane

0x41d0,	// (0x00036073) main_idle_trad_pane

0x41d0,	// (0x00036073) main_list_empty_pane

0x27b4,	// (0x00034657) main_midp_pane

0x439f,	// (0x00036242) main_pane_g1_ParamLimits

0x439f,	// (0x00036242) main_pane_g1

0xd44b,	// (0x0003f2ee) popup_ai_message_window_ParamLimits

0xd44b,	// (0x0003f2ee) popup_ai_message_window

0xd4e1,	// (0x0003f384) popup_fep_china_uni_window_ParamLimits

0xd4e1,	// (0x0003f384) popup_fep_china_uni_window

0xd51f,	// (0x0003f3c2) popup_fep_japan_candidate_window_ParamLimits

0xd51f,	// (0x0003f3c2) popup_fep_japan_candidate_window

0xd53d,	// (0x0003f3e0) popup_fep_japan_predictive_window_ParamLimits

0xd53d,	// (0x0003f3e0) popup_fep_japan_predictive_window

0xd569,	// (0x0003f40c) popup_find_window

0xd576,	// (0x0003f419) popup_grid_graphic_window_ParamLimits

0xd576,	// (0x0003f419) popup_grid_graphic_window

0xd594,	// (0x0003f437) popup_large_graphic_colour_window

0xd5b3,	// (0x0003f456) popup_menu_window_ParamLimits

0xd5b3,	// (0x0003f456) popup_menu_window

0xd6eb,	// (0x0003f58e) popup_note_image_window

0xd6d9,	// (0x0003f57c) popup_note_wait_window_ParamLimits

0xd6d9,	// (0x0003f57c) popup_note_wait_window

0xd6d9,	// (0x0003f57c) popup_note_window_ParamLimits

0xd6d9,	// (0x0003f57c) popup_note_window

0xd73f,	// (0x0003f5e2) popup_query_code_window_ParamLimits

0xd73f,	// (0x0003f5e2) popup_query_code_window

0xd751,	// (0x0003f5f4) popup_query_data_code_window_ParamLimits

0xd751,	// (0x0003f5f4) popup_query_data_code_window

0xd766,	// (0x0003f609) popup_query_data_window_ParamLimits

0xd766,	// (0x0003f609) popup_query_data_window

0xd77c,	// (0x0003f61f) popup_query_sat_info_window_ParamLimits

0xd77c,	// (0x0003f61f) popup_query_sat_info_window

0xd7ad,	// (0x0003f650) popup_snote_single_graphic_window_ParamLimits

0xd7ad,	// (0x0003f650) popup_snote_single_graphic_window

0xd7ad,	// (0x0003f650) popup_snote_single_text_window_ParamLimits

0xd7ad,	// (0x0003f650) popup_snote_single_text_window

0xd7c0,	// (0x0003f663) popup_sub_window_general

0xd8c4,	// (0x0003f767) popup_window_general_ParamLimits

0xd8c4,	// (0x0003f767) popup_window_general

0x43ad,	// (0x00036250) power_save_pane

0xd2d1,	// (0x0003f174) control_pane_g1_ParamLimits

0xd2d1,	// (0x0003f174) control_pane_g1

0xd2f2,	// (0x0003f195) control_pane_g2_ParamLimits

0xd2f2,	// (0x0003f195) control_pane_g2

0x4357,	// (0x000361fa) control_pane_g3_ParamLimits

0x4357,	// (0x000361fa) control_pane_g3

0x0007,

0xf78d,	// (0x00041630) control_pane_g_ParamLimits

0xf78d,	// (0x00041630) control_pane_g

0xd334,	// (0x0003f1d7) control_pane_t1_ParamLimits

0xd334,	// (0x0003f1d7) control_pane_t1

0xd386,	// (0x0003f229) control_pane_t2_ParamLimits

0xd386,	// (0x0003f229) control_pane_t2

0x0002,

0xf79e,	// (0x00041641) control_pane_t_ParamLimits

0xf79e,	// (0x00041641) control_pane_t

0x42ff,	// (0x000361a2) navi_navi_volume_pane_cp1

0x4307,	// (0x000361aa) status_small_icon_pane

0x430f,	// (0x000361b2) status_small_pane_g1_ParamLimits

0x430f,	// (0x000361b2) status_small_pane_g1

0x7aba,	// (0x0003995d) status_small_pane_g2_ParamLimits

0x7aba,	// (0x0003995d) status_small_pane_g2

0x7ac6,	// (0x00039969) status_small_pane_g3_ParamLimits

0x7ac6,	// (0x00039969) status_small_pane_g3

0x7ad2,	// (0x00039975) status_small_pane_g4_ParamLimits

0x7ad2,	// (0x00039975) status_small_pane_g4

0x7ade,	// (0x00039981) status_small_pane_g5_ParamLimits

0x7ade,	// (0x00039981) status_small_pane_g5

0x4343,	// (0x000361e6) status_small_pane_g6_ParamLimits

0x4343,	// (0x000361e6) status_small_pane_g6

0x0007,

0xf77c,	// (0x0004161f) status_small_pane_g_ParamLimits

0xf77c,	// (0x0004161f) status_small_pane_g

0x7b0d,	// (0x000399b0) status_small_pane_t1

0x7b27,	// (0x000399ca) status_small_wait_pane_ParamLimits

0x7b27,	// (0x000399ca) status_small_wait_pane

0x7942,	// (0x000397e5) aid_levels_signal_ParamLimits

0x7942,	// (0x000397e5) aid_levels_signal

0x7953,	// (0x000397f6) signal_pane_g1_ParamLimits

0x7953,	// (0x000397f6) signal_pane_g1

0x7969,	// (0x0003980c) signal_pane_g2_ParamLimits

0x7969,	// (0x0003980c) signal_pane_g2

0x0003,

0xf70d,	// (0x000415b0) signal_pane_g_ParamLimits

0xf70d,	// (0x000415b0) signal_pane_g

0x1fef,	// (0x00033e92) context_pane_g1

0x7524,	// (0x000393c7) title_pane_g1

0x754e,	// (0x000393f1) title_pane_t1

0x11ad,	// (0x00033050) title_pane_t2

0x11d3,	// (0x00033076) title_pane_t3

0x0002,

0xf557,	// (0x000413fa) title_pane_t

0x7e1d,	// (0x00039cc0) aid_levels_battery_ParamLimits

0x7e1d,	// (0x00039cc0) aid_levels_battery

0x7e30,	// (0x00039cd3) battery_pane_g1_ParamLimits

0x7e30,	// (0x00039cd3) battery_pane_g1

0x7e45,	// (0x00039ce8) battery_pane_g2_ParamLimits

0x7e45,	// (0x00039ce8) battery_pane_g2

0x0001,

0xf7b0,	// (0x00041653) battery_pane_g_ParamLimits

0xf7b0,	// (0x00041653) battery_pane_g

0x7fa1,	// (0x00039e44) uni_indicator_pane_g1

0x7fb7,	// (0x00039e5a) uni_indicator_pane_g2

0x7fcd,	// (0x00039e70) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x000417c4) uni_indicator_pane_g

0x197e,	// (0x00033821) navi_icon_pane_ParamLimits

0x197e,	// (0x00033821) navi_icon_pane

0x1051,	// (0x00032ef4) navi_midp_pane

0x1051,	// (0x00032ef4) navi_navi_pane

0x197e,	// (0x00033821) navi_text_pane_ParamLimits

0x197e,	// (0x00033821) navi_text_pane

0x0e92,	// (0x00032d35) status_small_wait_pane_g1

0x1572,	// (0x00033415) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x000417bf) status_small_wait_pane_g

0x5241,	// (0x000370e4) navi_navi_icon_text_pane

0x525b,	// (0x000370fe) navi_navi_pane_g1_ParamLimits

0x525b,	// (0x000370fe) navi_navi_pane_g1

0x5249,	// (0x000370ec) navi_navi_pane_g2_ParamLimits

0x5249,	// (0x000370ec) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0004178d) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0004178d) navi_navi_pane_g

0x526d,	// (0x00037110) navi_navi_tabs_pane

0x5241,	// (0x000370e4) navi_navi_text_pane

0x5241,	// (0x000370e4) navi_navi_volume_pane

0x521d,	// (0x000370c0) navi_text_pane_t1

0x5211,	// (0x000370b4) navi_icon_pane_g1

0x5165,	// (0x00037008) navi_navi_text_pane_t1

0xdb4b,	// (0x0003f9ee) navi_navi_volume_pane_g1

0xdb53,	// (0x0003f9f6) volume_small_pane

0x7eee,	// (0x00039d91) navi_navi_icon_text_pane_g1

0x7ef6,	// (0x00039d99) navi_navi_icon_text_pane_t1

0x4d1f,	// (0x00036bc2) navi_tabs_2_long_pane

0x4d1f,	// (0x00036bc2) navi_tabs_2_pane

0x4d1f,	// (0x00036bc2) navi_tabs_3_long_pane

0x4d1f,	// (0x00036bc2) navi_tabs_3_pane

0x4d1f,	// (0x00036bc2) navi_tabs_4_pane

0xdb2b,	// (0x0003f9ce) tabs_2_active_pane_ParamLimits

0xdb2b,	// (0x0003f9ce) tabs_2_active_pane

0xdb3b,	// (0x0003f9de) tabs_2_passive_pane_ParamLimits

0xdb3b,	// (0x0003f9de) tabs_2_passive_pane

0xdaf9,	// (0x0003f99c) tabs_3_active_pane_ParamLimits

0xdaf9,	// (0x0003f99c) tabs_3_active_pane

0xdb09,	// (0x0003f9ac) tabs_3_passive_pane_ParamLimits

0xdb09,	// (0x0003f9ac) tabs_3_passive_pane

0xdb1a,	// (0x0003f9bd) tabs_3_passive_pane_cp_ParamLimits

0xdb1a,	// (0x0003f9bd) tabs_3_passive_pane_cp

0xdab5,	// (0x0003f958) tabs_4_active_pane_ParamLimits

0xdab5,	// (0x0003f958) tabs_4_active_pane

0xdac6,	// (0x0003f969) tabs_4_passive_pane_ParamLimits

0xdac6,	// (0x0003f969) tabs_4_passive_pane

0xdad7,	// (0x0003f97a) tabs_4_passive_pane_cp_ParamLimits

0xdad7,	// (0x0003f97a) tabs_4_passive_pane_cp

0xdae8,	// (0x0003f98b) tabs_4_passive_pane_cp2_ParamLimits

0xdae8,	// (0x0003f98b) tabs_4_passive_pane_cp2

0xda95,	// (0x0003f938) tabs_2_long_active_pane_ParamLimits

0xda95,	// (0x0003f938) tabs_2_long_active_pane

0xdaa5,	// (0x0003f948) tabs_2_long_passive_pane_ParamLimits

0xdaa5,	// (0x0003f948) tabs_2_long_passive_pane

0xda60,	// (0x0003f903) tabs_3_long_active_pane_ParamLimits

0xda60,	// (0x0003f903) tabs_3_long_active_pane

0xda71,	// (0x0003f914) tabs_3_long_passive_pane_ParamLimits

0xda71,	// (0x0003f914) tabs_3_long_passive_pane

0xda84,	// (0x0003f927) tabs_3_long_passive_pane_cp_ParamLimits

0xda84,	// (0x0003f927) tabs_3_long_passive_pane_cp

0xda06,	// (0x0003f8a9) volume_small_pane_g1

0xda0f,	// (0x0003f8b2) volume_small_pane_g2

0xda18,	// (0x0003f8bb) volume_small_pane_g3

0xda21,	// (0x0003f8c4) volume_small_pane_g4

0xda2a,	// (0x0003f8cd) volume_small_pane_g5

0xda33,	// (0x0003f8d6) volume_small_pane_g6

0xda3c,	// (0x0003f8df) volume_small_pane_g7

0xda45,	// (0x0003f8e8) volume_small_pane_g8

0xda4e,	// (0x0003f8f1) volume_small_pane_g9

0xda57,	// (0x0003f8fa) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x00041759) volume_small_pane_g

0x11e5,	// (0x00033088) bg_active_tab_pane_cp2_ParamLimits

0x11e5,	// (0x00033088) bg_active_tab_pane_cp2

0x11f3,	// (0x00033096) tabs_3_active_pane_g1

0x75b6,	// (0x00039459) tabs_3_active_pane_t1

0x11e5,	// (0x00033088) bg_passive_tab_pane_cp2_ParamLimits

0x11e5,	// (0x00033088) bg_passive_tab_pane_cp2

0x11f3,	// (0x00033096) tabs_3_passive_pane_g1

0x75b6,	// (0x00039459) tabs_3_passive_pane_t1

0x11e5,	// (0x00033088) bg_active_tab_pane_cp3_ParamLimits

0x11e5,	// (0x00033088) bg_active_tab_pane_cp3

0x75c8,	// (0x0003946b) tabs_4_active_pane_g1

0x75d0,	// (0x00039473) tabs_4_active_pane_t1

0x11e5,	// (0x00033088) bg_passive_tab_pane_cp3_ParamLimits

0x11e5,	// (0x00033088) bg_passive_tab_pane_cp3

0x75c8,	// (0x0003946b) tabs_4_1_passive_pane_g1

0x75d0,	// (0x00039473) tabs_4_1_passive_pane_t1

0x27b4,	// (0x00034657) list_highlight_pane_cp2

0x8022,	// (0x00039ec5) list_set_pane_ParamLimits

0x8022,	// (0x00039ec5) list_set_pane

0x80b0,	// (0x00039f53) main_pane_set_t1_ParamLimits

0x80b0,	// (0x00039f53) main_pane_set_t1

0x80d0,	// (0x00039f73) main_pane_set_t2_ParamLimits

0x80d0,	// (0x00039f73) main_pane_set_t2

0x80e2,	// (0x00039f85) main_pane_set_t3_ParamLimits

0x80e2,	// (0x00039f85) main_pane_set_t3

0x80f4,	// (0x00039f97) main_pane_set_t4_ParamLimits

0x80f4,	// (0x00039f97) main_pane_set_t4

0x0003,

0xf986,	// (0x00041829) main_pane_set_t_ParamLimits

0xf986,	// (0x00041829) main_pane_set_t

0x8106,	// (0x00039fa9) setting_code_pane

0x810e,	// (0x00039fb1) setting_slider_graphic_pane

0x810e,	// (0x00039fb1) setting_slider_pane

0x810e,	// (0x00039fb1) setting_text_pane

0x810e,	// (0x00039fb1) setting_volume_pane

0xce3d,	// (0x0003ece0) volume_set_pane

0x11e5,	// (0x00033088) bg_set_opt_pane_cp

0xce45,	// (0x0003ece8) setting_slider_pane_t1

0xce5b,	// (0x0003ecfe) setting_slider_pane_t2

0xce74,	// (0x0003ed17) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00041401) setting_slider_pane_t

0xce8b,	// (0x0003ed2e) slider_set_pane

0x1051,	// (0x00032ef4) bg_set_opt_pane_cp2

0x125f,	// (0x00033102) setting_slider_graphic_pane_g1

0xcea1,	// (0x0003ed44) setting_slider_graphic_pane_t1

0xceb0,	// (0x0003ed53) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00041408) setting_slider_graphic_pane_t

0xcebf,	// (0x0003ed62) slider_set_pane_cp

0x1051,	// (0x00032ef4) input_focus_pane_cp1

0x568e,	// (0x00037531) list_set_text_pane

0x0e92,	// (0x00032d35) setting_text_pane_g1

0x1051,	// (0x00032ef4) input_focus_pane_cp2

0x0e92,	// (0x00032d35) setting_code_pane_g1

0x128e,	// (0x00033131) setting_code_pane_t1

0x006b,	// (0x00031f0e) set_text_pane_t1_ParamLimits

0x006b,	// (0x00031f0e) set_text_pane_t1

0x192d,	// (0x000337d0) set_opt_bg_pane_g1

0x1935,	// (0x000337d8) set_opt_bg_pane_g2

0x7fe2,	// (0x00039e85) set_opt_bg_pane_g3

0x1945,	// (0x000337e8) set_opt_bg_pane_g4

0x194d,	// (0x000337f0) set_opt_bg_pane_g5

0x1955,	// (0x000337f8) set_opt_bg_pane_g6

0x7fea,	// (0x00039e8d) set_opt_bg_pane_g7

0x7ff2,	// (0x00039e95) set_opt_bg_pane_g8

0x7ffa,	// (0x00039e9d) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x00041816) set_opt_bg_pane_g

0x5681,	// (0x00037524) slider_set_pane_g1

0xdbc0,	// (0x0003fa63) slider_set_pane_g2

0x0006,

0xf964,	// (0x00041807) slider_set_pane_g

0xdb5c,	// (0x0003f9ff) volume_set_pane_g1

0xdb64,	// (0x0003fa07) volume_set_pane_g2

0xdb6c,	// (0x0003fa0f) volume_set_pane_g3

0xdb74,	// (0x0003fa17) volume_set_pane_g4

0xdb7c,	// (0x0003fa1f) volume_set_pane_g5

0xdb84,	// (0x0003fa27) volume_set_pane_g6

0xdb8c,	// (0x0003fa2f) volume_set_pane_g7

0xdb94,	// (0x0003fa37) volume_set_pane_g8

0xdb9c,	// (0x0003fa3f) volume_set_pane_g9

0xdba4,	// (0x0003fa47) volume_set_pane_g10

0x0009,

0xf93c,	// (0x000417df) volume_set_pane_g

0x75e2,	// (0x00039485) indicator_pane_ParamLimits

0x75e2,	// (0x00039485) indicator_pane

0x75ee,	// (0x00039491) main_idle_pane_g2_ParamLimits

0x75ee,	// (0x00039491) main_idle_pane_g2

0x7612,	// (0x000394b5) main_pane_idle_g1_ParamLimits

0x7612,	// (0x000394b5) main_pane_idle_g1

0x129c,	// (0x0003313f) popup_clock_digital_analogue_window_ParamLimits

0x129c,	// (0x0003313f) popup_clock_digital_analogue_window

0x761f,	// (0x000394c2) soft_indicator_pane_ParamLimits

0x761f,	// (0x000394c2) soft_indicator_pane

0x762b,	// (0x000394ce) wallpaper_pane_ParamLimits

0x762b,	// (0x000394ce) wallpaper_pane

0x0e92,	// (0x00032d35) wallpaper_pane_g1

0x7637,	// (0x000394da) indicator_pane_g1_ParamLimits

0x7637,	// (0x000394da) indicator_pane_g1

0x57b6,	// (0x00037659) navi_navi_icon_text_pane_srt_g1

0x12ca,	// (0x0003316d) soft_indicator_pane_t1

0x12e4,	// (0x00033187) aid_ps_area_pane

0x7643,	// (0x000394e6) aid_ps_clock_pane

0x12f5,	// (0x00033198) aid_ps_indicator_pane

0x1301,	// (0x000331a4) indicator_ps_pane_ParamLimits

0x1301,	// (0x000331a4) indicator_ps_pane

0x1310,	// (0x000331b3) power_save_pane_g1_ParamLimits

0x1310,	// (0x000331b3) power_save_pane_g1

0x131c,	// (0x000331bf) power_save_pane_g2_ParamLimits

0x131c,	// (0x000331bf) power_save_pane_g2

0xcbb0,	// (0x0003ea53) aid_navinavi_width_pane

0x12e4,	// (0x00033187) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0004140d) power_save_pane_g_ParamLimits

0xf56a,	// (0x0004140d) power_save_pane_g

0x132a,	// (0x000331cd) power_save_pane_t1_ParamLimits

0x132a,	// (0x000331cd) power_save_pane_t1

0x7643,	// (0x000394e6) aid_ps_clock_pane_ParamLimits

0x12f5,	// (0x00033198) aid_ps_indicator_pane_ParamLimits

0x133c,	// (0x000331df) power_save_pane_t4_ParamLimits

0x133c,	// (0x000331df) power_save_pane_t4

0x0001,

0xf56f,	// (0x00041412) power_save_pane_t_ParamLimits

0xf56f,	// (0x00041412) power_save_pane_t

0x1366,	// (0x00033209) power_save_t3_ParamLimits

0x1366,	// (0x00033209) power_save_t3

0x1351,	// (0x000331f4) power_save_t2_ParamLimits

0x1351,	// (0x000331f4) power_save_t2

0x137b,	// (0x0003321e) indicator_ps_pane_g1

0x764f,	// (0x000394f2) ai_gene_pane_ParamLimits

0x764f,	// (0x000394f2) ai_gene_pane

0x765b,	// (0x000394fe) ai_links_pane_ParamLimits

0x765b,	// (0x000394fe) ai_links_pane

0x7667,	// (0x0003950a) indicator_pane_cp1_ParamLimits

0x7667,	// (0x0003950a) indicator_pane_cp1

0x7673,	// (0x00039516) main_pane_idle_g1_cp_ParamLimits

0x7673,	// (0x00039516) main_pane_idle_g1_cp

0x1384,	// (0x00033227) popup_ai_links_title_window

0x767f,	// (0x00039522) soft_indicator_pane_cp1_ParamLimits

0x767f,	// (0x00039522) soft_indicator_pane_cp1

0x54d7,	// (0x0003737a) ai_links_pane_g1

0x54e0,	// (0x00037383) grid_ai_links_pane

0x7f98,	// (0x00039e3b) ai_gene_pane_1

0x54c5,	// (0x00037368) ai_gene_pane_2

0x54ce,	// (0x00037371) list_highlight_pane_cp4

0x7f7c,	// (0x00039e1f) cell_ai_link_pane_ParamLimits

0x7f7c,	// (0x00039e1f) cell_ai_link_pane

0x54bd,	// (0x00037360) cell_ai_link_pane_g1

0x1572,	// (0x00033415) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x000417ba) cell_ai_link_pane_g

0x1051,	// (0x00032ef4) grid_highlight_cp2

0x1051,	// (0x00032ef4) bg_popup_sub_pane_cp1

0x139b,	// (0x0003323e) popup_ai_links_title_window_t1

0x540f,	// (0x000372b2) ai_gene_pane_1_g1_ParamLimits

0x540f,	// (0x000372b2) ai_gene_pane_1_g1

0x541b,	// (0x000372be) ai_gene_pane_1_g2_ParamLimits

0x541b,	// (0x000372be) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x000417b0) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x000417b0) ai_gene_pane_1_g

0x5428,	// (0x000372cb) ai_gene_pane_1_t1_ParamLimits

0x5428,	// (0x000372cb) ai_gene_pane_1_t1

0x545c,	// (0x000372ff) grid_ai_soft_ind_pane

0x53fa,	// (0x0003729d) ai_gene_pane_2_t1_ParamLimits

0x53fa,	// (0x0003729d) ai_gene_pane_2_t1

0x768b,	// (0x0003952e) main_pane_empty_t1_ParamLimits

0x768b,	// (0x0003952e) main_pane_empty_t1

0x76a8,	// (0x0003954b) main_pane_empty_t2_ParamLimits

0x76a8,	// (0x0003954b) main_pane_empty_t2

0x76c0,	// (0x00039563) main_pane_empty_t3_ParamLimits

0x76c0,	// (0x00039563) main_pane_empty_t3

0x76d3,	// (0x00039576) main_pane_empty_t4_ParamLimits

0x76d3,	// (0x00039576) main_pane_empty_t4

0x76e6,	// (0x00039589) main_pane_empty_t5_ParamLimits

0x76e6,	// (0x00039589) main_pane_empty_t5

0x0004,

0xf574,	// (0x00041417) main_pane_empty_t_ParamLimits

0xf574,	// (0x00041417) main_pane_empty_t

0x197e,	// (0x00033821) bg_popup_window_pane_ParamLimits

0x197e,	// (0x00033821) bg_popup_window_pane

0x5174,	// (0x00037017) find_popup_pane_cp2_ParamLimits

0x5174,	// (0x00037017) find_popup_pane_cp2

0x5180,	// (0x00037023) heading_pane_ParamLimits

0x5180,	// (0x00037023) heading_pane

0x1051,	// (0x00032ef4) bg_popup_sub_pane

0x7f10,	// (0x00039db3) bg_popup_window_pane_g1_ParamLimits

0x7f10,	// (0x00039db3) bg_popup_window_pane_g1

0x7f1c,	// (0x00039dbf) bg_popup_window_pane_g2_ParamLimits

0x7f1c,	// (0x00039dbf) bg_popup_window_pane_g2

0x7f28,	// (0x00039dcb) bg_popup_window_pane_g3_ParamLimits

0x7f28,	// (0x00039dcb) bg_popup_window_pane_g3

0x7f34,	// (0x00039dd7) bg_popup_window_pane_g4_ParamLimits

0x7f34,	// (0x00039dd7) bg_popup_window_pane_g4

0x7f40,	// (0x00039de3) bg_popup_window_pane_g5_ParamLimits

0x7f40,	// (0x00039de3) bg_popup_window_pane_g5

0x7f4c,	// (0x00039def) bg_popup_window_pane_g6_ParamLimits

0x7f4c,	// (0x00039def) bg_popup_window_pane_g6

0x7f58,	// (0x00039dfb) bg_popup_window_pane_g7_ParamLimits

0x7f58,	// (0x00039dfb) bg_popup_window_pane_g7

0x7f64,	// (0x00039e07) bg_popup_window_pane_g8_ParamLimits

0x7f64,	// (0x00039e07) bg_popup_window_pane_g8

0x7f70,	// (0x00039e13) bg_popup_window_pane_g9_ParamLimits

0x7f70,	// (0x00039e13) bg_popup_window_pane_g9

0x5159,	// (0x00036ffc) bg_popup_window_pane_g10_ParamLimits

0x5159,	// (0x00036ffc) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x00041778) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x00041778) bg_popup_window_pane_g

0x5110,	// (0x00036fb3) bg_popup_heading_pane_ParamLimits

0x5110,	// (0x00036fb3) bg_popup_heading_pane

0xdc48,	// (0x0003faeb) tabs_4_passive_pane_cp_srt_ParamLimits

0xdc48,	// (0x0003faeb) tabs_4_passive_pane_cp_srt

0xdc5a,	// (0x0003fafd) tabs_4_passive_pane_srt_ParamLimits

0x5124,	// (0x00036fc7) heading_pane_g2

0xdc5a,	// (0x0003fafd) tabs_4_passive_pane_srt

0x27b4,	// (0x00034657) bg_passive_tab_pane_cp3_srt_ParamLimits

0x27b4,	// (0x00034657) bg_passive_tab_pane_cp3_srt

0x512c,	// (0x00036fcf) heading_pane_t1_ParamLimits

0x512c,	// (0x00036fcf) heading_pane_t1

0x5143,	// (0x00036fe6) heading_pane_t2_ParamLimits

0x5143,	// (0x00036fe6) heading_pane_t2

0x0001,

0xf8d0,	// (0x00041773) heading_pane_t_ParamLimits

0xf8d0,	// (0x00041773) heading_pane_t

0x4c9f,	// (0x00036b42) bg_popup_heading_pane_g1

0x4d30,	// (0x00036bd3) bg_popup_heading_pane_g2

0x4d38,	// (0x00036bdb) bg_popup_heading_pane_g3

0x4d40,	// (0x00036be3) bg_popup_heading_pane_g4

0x4d48,	// (0x00036beb) bg_popup_heading_pane_g5

0x4d50,	// (0x00036bf3) bg_popup_heading_pane_g6

0x4d58,	// (0x00036bfb) bg_popup_heading_pane_g7

0x4d60,	// (0x00036c03) bg_popup_heading_pane_g8

0x4d68,	// (0x00036c0b) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0004172f) bg_popup_heading_pane_g

0x4568,	// (0x0003640b) bg_popup_sub_pane_g1

0x4570,	// (0x00036413) bg_popup_sub_pane_g2

0x4578,	// (0x0003641b) bg_popup_sub_pane_g3

0x4580,	// (0x00036423) bg_popup_sub_pane_g4

0x4588,	// (0x0003642b) bg_popup_sub_pane_g5

0x4590,	// (0x00036433) bg_popup_sub_pane_g6

0x4598,	// (0x0003643b) bg_popup_sub_pane_g7

0x45a0,	// (0x00036443) bg_popup_sub_pane_g8

0x45a8,	// (0x0003644b) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x00041709) bg_popup_sub_pane_g

0x13aa,	// (0x0003324d) bg_popup_window_pane_cp5_ParamLimits

0x13aa,	// (0x0003324d) bg_popup_window_pane_cp5

0x13c6,	// (0x00033269) popup_note_window_g1_ParamLimits

0x13c6,	// (0x00033269) popup_note_window_g1

0x13d2,	// (0x00033275) popup_note_window_t1_ParamLimits

0x13d2,	// (0x00033275) popup_note_window_t1

0x13e8,	// (0x0003328b) popup_note_window_t2_ParamLimits

0x13e8,	// (0x0003328b) popup_note_window_t2

0x13fe,	// (0x000332a1) popup_note_window_t3_ParamLimits

0x13fe,	// (0x000332a1) popup_note_window_t3

0x1414,	// (0x000332b7) popup_note_window_t4_ParamLimits

0x1414,	// (0x000332b7) popup_note_window_t4

0x143c,	// (0x000332df) popup_note_window_t5_ParamLimits

0x143c,	// (0x000332df) popup_note_window_t5

0x0004,

0xf57f,	// (0x00041422) popup_note_window_t_ParamLimits

0xf57f,	// (0x00041422) popup_note_window_t

0x1486,	// (0x00033329) bg_popup_window_pane_cp6_ParamLimits

0x1486,	// (0x00033329) bg_popup_window_pane_cp6

0x4c1b,	// (0x00036abe) popup_note_image_window_g1_ParamLimits

0x4c1b,	// (0x00036abe) popup_note_image_window_g1

0x4c27,	// (0x00036aca) popup_note_image_window_g2_ParamLimits

0x4c27,	// (0x00036aca) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x000416fd) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x000416fd) popup_note_image_window_g

0x4c40,	// (0x00036ae3) popup_note_image_window_t1_ParamLimits

0x4c40,	// (0x00036ae3) popup_note_image_window_t1

0x4c59,	// (0x00036afc) popup_note_image_window_t2_ParamLimits

0x4c59,	// (0x00036afc) popup_note_image_window_t2

0x4c72,	// (0x00036b15) popup_note_image_window_t3_ParamLimits

0x4c72,	// (0x00036b15) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x00041702) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x00041702) popup_note_image_window_t

0x4b06,	// (0x000369a9) bg_popup_window_pane_cp7_ParamLimits

0x4b06,	// (0x000369a9) bg_popup_window_pane_cp7

0x4b36,	// (0x000369d9) popup_note_wait_window_g1_ParamLimits

0x4b36,	// (0x000369d9) popup_note_wait_window_g1

0x4b42,	// (0x000369e5) popup_note_wait_window_g2_ParamLimits

0x4b42,	// (0x000369e5) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x000416eb) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x000416eb) popup_note_wait_window_g

0x4b5a,	// (0x000369fd) popup_note_wait_window_t1_ParamLimits

0x4b5a,	// (0x000369fd) popup_note_wait_window_t1

0x4b81,	// (0x00036a24) popup_note_wait_window_t2_ParamLimits

0x4b81,	// (0x00036a24) popup_note_wait_window_t2

0x4b9e,	// (0x00036a41) popup_note_wait_window_t3_ParamLimits

0x4b9e,	// (0x00036a41) popup_note_wait_window_t3

0x4bb1,	// (0x00036a54) popup_note_wait_window_t4_ParamLimits

0x4bb1,	// (0x00036a54) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x000416f2) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x000416f2) popup_note_wait_window_t

0x4bd6,	// (0x00036a79) wait_bar_pane_ParamLimits

0x4bd6,	// (0x00036a79) wait_bar_pane

0x1051,	// (0x00032ef4) wait_anim_pane

0x1051,	// (0x00032ef4) wait_border_pane

0x0e92,	// (0x00032d35) wait_anim_pane_g1

0x0e92,	// (0x00032d35) wait_anim_pane_g2

0x0001,

0xf708,	// (0x000415ab) wait_anim_pane_g

0x4ab6,	// (0x00036959) wait_border_pane_g1

0x4abf,	// (0x00036962) wait_border_pane_g2

0x4ac8,	// (0x0003696b) wait_border_pane_g3

0x0002,

0xf841,	// (0x000416e4) wait_border_pane_g

0x4926,	// (0x000367c9) bg_popup_window_pane_cp16_ParamLimits

0x4926,	// (0x000367c9) bg_popup_window_pane_cp16

0x4a26,	// (0x000368c9) indicator_popup_pane_cp4_ParamLimits

0x4a26,	// (0x000368c9) indicator_popup_pane_cp4

0x4a3a,	// (0x000368dd) popup_query_data_window_t1_ParamLimits

0x4a3a,	// (0x000368dd) popup_query_data_window_t1

0x4a4c,	// (0x000368ef) popup_query_data_window_t2_ParamLimits

0x4a4c,	// (0x000368ef) popup_query_data_window_t2

0x4a65,	// (0x00036908) popup_query_data_window_t3_ParamLimits

0x4a65,	// (0x00036908) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x000416dd) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x000416dd) popup_query_data_window_t

0x4a7f,	// (0x00036922) query_popup_data_pane_ParamLimits

0x4a7f,	// (0x00036922) query_popup_data_pane

0x4a93,	// (0x00036936) query_popup_data_pane_cp1_ParamLimits

0x4a93,	// (0x00036936) query_popup_data_pane_cp1

0x4926,	// (0x000367c9) bg_popup_window_pane_cp10_ParamLimits

0x4926,	// (0x000367c9) bg_popup_window_pane_cp10

0x4958,	// (0x000367fb) indicator_popup_pane_ParamLimits

0x4958,	// (0x000367fb) indicator_popup_pane

0x497a,	// (0x0003681d) popup_query_code_window_t1_ParamLimits

0x497a,	// (0x0003681d) popup_query_code_window_t1

0x4994,	// (0x00036837) popup_query_code_window_t2_ParamLimits

0x4994,	// (0x00036837) popup_query_code_window_t2

0x49dd,	// (0x00036880) popup_query_code_window_t3_ParamLimits

0x49dd,	// (0x00036880) popup_query_code_window_t3

0x0002,

0xf833,	// (0x000416d6) popup_query_code_window_t_ParamLimits

0xf833,	// (0x000416d6) popup_query_code_window_t

0x4a0c,	// (0x000368af) query_popup_pane_ParamLimits

0x4a0c,	// (0x000368af) query_popup_pane

0x1486,	// (0x00033329) bg_popup_window_pane_cp15_ParamLimits

0x1486,	// (0x00033329) bg_popup_window_pane_cp15

0x14a4,	// (0x00033347) indicator_popup_pane_cp1_ParamLimits

0x14a4,	// (0x00033347) indicator_popup_pane_cp1

0x14b7,	// (0x0003335a) indicator_popup_pane_cp2_ParamLimits

0x14b7,	// (0x0003335a) indicator_popup_pane_cp2

0x14ca,	// (0x0003336d) popup_query_data_code_window_g1_ParamLimits

0x14ca,	// (0x0003336d) popup_query_data_code_window_g1

0x14dd,	// (0x00033380) popup_query_data_code_window_t1_ParamLimits

0x14dd,	// (0x00033380) popup_query_data_code_window_t1

0x14ef,	// (0x00033392) popup_query_data_code_window_t2_ParamLimits

0x14ef,	// (0x00033392) popup_query_data_code_window_t2

0x1501,	// (0x000333a4) popup_query_data_code_window_t3_ParamLimits

0x1501,	// (0x000333a4) popup_query_data_code_window_t3

0x1517,	// (0x000333ba) popup_query_data_code_window_t4_ParamLimits

0x1517,	// (0x000333ba) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0004142d) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0004142d) popup_query_data_code_window_t

0xd921,	// (0x0003f7c4) list_single_midp_graphic_pane_g3

0x152f,	// (0x000333d2) query_popup_data_pane_cp2_ParamLimits

0x1542,	// (0x000333e5) query_popup_pane_cp2_ParamLimits

0x1542,	// (0x000333e5) query_popup_pane_cp2

0x1051,	// (0x00032ef4) bg_popup_window_pane_cp11

0x4912,	// (0x000367b5) heading_pane_cp5

0x15ce,	// (0x00033471) listscroll_popup_info_pane

0x1051,	// (0x00032ef4) input_focus_pane_cp3

0x1555,	// (0x000333f8) query_popup_pane_t1

0x1563,	// (0x00033406) list_popup_info_pane_ParamLimits

0x1563,	// (0x00033406) list_popup_info_pane

0x1572,	// (0x00033415) listscroll_popup_info_pane_g1

0x157a,	// (0x0003341d) scroll_pane_cp7

0x1582,	// (0x00033425) popup_info_list_pane_t1_ParamLimits

0x1582,	// (0x00033425) popup_info_list_pane_t1

0x159c,	// (0x0003343f) popup_info_list_pane_t2_ParamLimits

0x159c,	// (0x0003343f) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00041436) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00041436) popup_info_list_pane_t

0x1051,	// (0x00032ef4) bg_popup_window_pane_cp12

0x57d0,	// (0x00037673) find_popup_pane

0x11e5,	// (0x00033088) bg_popup_window_pane_cp3

0x15b6,	// (0x00033459) heading_pane_cp3

0x15c2,	// (0x00033465) listscroll_popup_graphic_pane

0x1051,	// (0x00032ef4) bg_popup_window_pane_cp4

0x7749,	// (0x000395ec) heading_pane_cp4

0x15ce,	// (0x00033471) listscroll_popup_colour_pane

0x15d6,	// (0x00033479) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x15d6,	// (0x00033479) cell_large_graphic_colour_none_popup_pane

0x7751,	// (0x000395f4) grid_large_graphic_colour_popup_pane_ParamLimits

0x7751,	// (0x000395f4) grid_large_graphic_colour_popup_pane

0x776d,	// (0x00039610) listscroll_popup_colour_pane_g1_ParamLimits

0x776d,	// (0x00039610) listscroll_popup_colour_pane_g1

0x7784,	// (0x00039627) listscroll_popup_colour_pane_g2_ParamLimits

0x7784,	// (0x00039627) listscroll_popup_colour_pane_g2

0x15e6,	// (0x00033489) listscroll_popup_colour_pane_g3_ParamLimits

0x15e6,	// (0x00033489) listscroll_popup_colour_pane_g3

0x7798,	// (0x0003963b) listscroll_popup_colour_pane_g4_ParamLimits

0x7798,	// (0x0003963b) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0004143b) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0004143b) listscroll_popup_colour_pane_g

0x15f6,	// (0x00033499) scroll_pane_cp6_ParamLimits

0x15f6,	// (0x00033499) scroll_pane_cp6

0x77a7,	// (0x0003964a) cell_large_graphic_colour_popup_pane_ParamLimits

0x77a7,	// (0x0003964a) cell_large_graphic_colour_popup_pane

0x1608,	// (0x000334ab) cell_large_graphic_colour_none_popup_pane_t1

0x1051,	// (0x00032ef4) grid_highlight_pane_cp5

0x1617,	// (0x000334ba) cell_large_graphic_colour_popup_pane_g1

0x161f,	// (0x000334c2) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00041444) cell_large_graphic_colour_popup_pane_g

0x1627,	// (0x000334ca) cell_large_graphic_colour_popup_pane_g2_copy1

0x1630,	// (0x000334d3) grid_highlight_pane_cp4

0x1638,	// (0x000334db) bg_popup_window_pane_cp8_ParamLimits

0x1638,	// (0x000334db) bg_popup_window_pane_cp8

0x1653,	// (0x000334f6) popup_snote_single_text_window_g1_ParamLimits

0x1653,	// (0x000334f6) popup_snote_single_text_window_g1

0x1665,	// (0x00033508) popup_snote_single_text_window_t1_ParamLimits

0x1665,	// (0x00033508) popup_snote_single_text_window_t1

0x1678,	// (0x0003351b) popup_snote_single_text_window_t2_ParamLimits

0x1678,	// (0x0003351b) popup_snote_single_text_window_t2

0x168b,	// (0x0003352e) popup_snote_single_text_window_t3_ParamLimits

0x168b,	// (0x0003352e) popup_snote_single_text_window_t3

0x16c4,	// (0x00033567) popup_snote_single_text_window_t4_ParamLimits

0x16c4,	// (0x00033567) popup_snote_single_text_window_t4

0x16f8,	// (0x0003359b) popup_snote_single_text_window_t5_ParamLimits

0x16f8,	// (0x0003359b) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00041449) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00041449) popup_snote_single_text_window_t

0x1727,	// (0x000335ca) bg_popup_window_pane_cp9_ParamLimits

0x1727,	// (0x000335ca) bg_popup_window_pane_cp9

0x1653,	// (0x000334f6) popup_snote_single_graphic_window_g1_ParamLimits

0x1653,	// (0x000334f6) popup_snote_single_graphic_window_g1

0x1735,	// (0x000335d8) popup_snote_single_graphic_window_g2_ParamLimits

0x1735,	// (0x000335d8) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00041454) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00041454) popup_snote_single_graphic_window_g

0x1741,	// (0x000335e4) popup_snote_single_graphic_window_t1_ParamLimits

0x1741,	// (0x000335e4) popup_snote_single_graphic_window_t1

0x1754,	// (0x000335f7) popup_snote_single_graphic_window_t2_ParamLimits

0x1754,	// (0x000335f7) popup_snote_single_graphic_window_t2

0x168b,	// (0x0003352e) popup_snote_single_graphic_window_t3_ParamLimits

0x168b,	// (0x0003352e) popup_snote_single_graphic_window_t3

0x16c4,	// (0x00033567) popup_snote_single_graphic_window_t4_ParamLimits

0x16c4,	// (0x00033567) popup_snote_single_graphic_window_t4

0x16f8,	// (0x0003359b) popup_snote_single_graphic_window_t5_ParamLimits

0x16f8,	// (0x0003359b) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00041459) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00041459) popup_snote_single_graphic_window_t

0x81d5,	// (0x0003a078) grid_graphic_popup_pane_ParamLimits

0x81d5,	// (0x0003a078) grid_graphic_popup_pane

0x81f8,	// (0x0003a09b) listscroll_popup_graphic_pane_g1_ParamLimits

0x81f8,	// (0x0003a09b) listscroll_popup_graphic_pane_g1

0x820c,	// (0x0003a0af) listscroll_popup_graphic_pane_g2_ParamLimits

0x820c,	// (0x0003a0af) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x00041853) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x00041853) listscroll_popup_graphic_pane_g

0x5788,	// (0x0003762b) scroll_pane_cp5

0x818e,	// (0x0003a031) cell_graphic_popup_pane_ParamLimits

0x818e,	// (0x0003a031) cell_graphic_popup_pane

0x5753,	// (0x000375f6) cell_graphic_popup_pane_g1

0x575b,	// (0x000375fe) cell_graphic_popup_pane_g2

0x1627,	// (0x000334ca) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0004184c) cell_graphic_popup_pane_g

0x5764,	// (0x00037607) cell_graphic_popup_pane_t2

0x1630,	// (0x000334d3) grid_highlight_pane_cp3

0x1779,	// (0x0003361c) list_gen_pane_ParamLimits

0x1779,	// (0x0003361c) list_gen_pane

0x17a2,	// (0x00033645) scroll_pane

0x815f,	// (0x0003a002) bg_list_pane_g1_ParamLimits

0x815f,	// (0x0003a002) bg_list_pane_g1

0x5702,	// (0x000375a5) bg_list_pane_g2_ParamLimits

0x5702,	// (0x000375a5) bg_list_pane_g2

0x5715,	// (0x000375b8) bg_list_pane_g3_ParamLimits

0x5715,	// (0x000375b8) bg_list_pane_g3

0x5727,	// (0x000375ca) bg_list_pane_g4_ParamLimits

0x5727,	// (0x000375ca) bg_list_pane_g4

0x8176,	// (0x0003a019) bg_list_pane_g5_ParamLimits

0x8176,	// (0x0003a019) bg_list_pane_g5

0x0004,

0xf99e,	// (0x00041841) bg_list_pane_g_ParamLimits

0xf99e,	// (0x00041841) bg_list_pane_g

0x813b,	// (0x00039fde) list_double2_graphic_large_graphic_pane_ParamLimits

0x813b,	// (0x00039fde) list_double2_graphic_large_graphic_pane

0x813b,	// (0x00039fde) list_double2_graphic_pane_ParamLimits

0x813b,	// (0x00039fde) list_double2_graphic_pane

0x813b,	// (0x00039fde) list_double2_large_graphic_pane_ParamLimits

0x813b,	// (0x00039fde) list_double2_large_graphic_pane

0x813b,	// (0x00039fde) list_double2_pane_ParamLimits

0x813b,	// (0x00039fde) list_double2_pane

0x813b,	// (0x00039fde) list_double_graphic_heading_pane_ParamLimits

0x813b,	// (0x00039fde) list_double_graphic_heading_pane

0x813b,	// (0x00039fde) list_double_graphic_pane_ParamLimits

0x813b,	// (0x00039fde) list_double_graphic_pane

0x813b,	// (0x00039fde) list_double_heading_pane_ParamLimits

0x813b,	// (0x00039fde) list_double_heading_pane

0x813b,	// (0x00039fde) list_double_large_graphic_pane_ParamLimits

0x813b,	// (0x00039fde) list_double_large_graphic_pane

0x813b,	// (0x00039fde) list_double_number_pane_ParamLimits

0x813b,	// (0x00039fde) list_double_number_pane

0x813b,	// (0x00039fde) list_double_pane_ParamLimits

0x813b,	// (0x00039fde) list_double_pane

0x813b,	// (0x00039fde) list_double_time_pane_ParamLimits

0x813b,	// (0x00039fde) list_double_time_pane

0x813b,	// (0x00039fde) list_setting_number_pane_ParamLimits

0x813b,	// (0x00039fde) list_setting_number_pane

0x813b,	// (0x00039fde) list_setting_pane_ParamLimits

0x813b,	// (0x00039fde) list_setting_pane

0x0939,	// (0x000327dc) list_single_2graphic_pane_ParamLimits

0x0939,	// (0x000327dc) list_single_2graphic_pane

0x0939,	// (0x000327dc) list_single_graphic_heading_pane_ParamLimits

0x0939,	// (0x000327dc) list_single_graphic_heading_pane

0x0939,	// (0x000327dc) list_single_graphic_pane_ParamLimits

0x0939,	// (0x000327dc) list_single_graphic_pane

0x0939,	// (0x000327dc) list_single_heading_pane_ParamLimits

0x0939,	// (0x000327dc) list_single_heading_pane

0x2fc0,	// (0x00034e63) list_single_large_graphic_pane_ParamLimits

0x2fc0,	// (0x00034e63) list_single_large_graphic_pane

0x0939,	// (0x000327dc) list_single_number_heading_pane_ParamLimits

0x0939,	// (0x000327dc) list_single_number_heading_pane

0x0939,	// (0x000327dc) list_single_number_pane_ParamLimits

0x0939,	// (0x000327dc) list_single_number_pane

0x0939,	// (0x000327dc) list_single_pane_ParamLimits

0x0939,	// (0x000327dc) list_single_pane

0x1051,	// (0x00032ef4) list_highlight_pane_cp1

0x17d7,	// (0x0003367a) list_single_pane_g1_ParamLimits

0x17d7,	// (0x0003367a) list_single_pane_g1

0x17e3,	// (0x00033686) list_single_pane_g2_ParamLimits

0x17e3,	// (0x00033686) list_single_pane_g2

0x0001,

0xf5d2,	// (0x00041475) list_single_pane_g_ParamLimits

0xf5d2,	// (0x00041475) list_single_pane_g

0x090f,	// (0x000327b2) list_single_pane_t1_ParamLimits

0x090f,	// (0x000327b2) list_single_pane_t1

0x17d7,	// (0x0003367a) list_single_number_pane_g1_ParamLimits

0x17d7,	// (0x0003367a) list_single_number_pane_g1

0x17e3,	// (0x00033686) list_single_number_pane_g2_ParamLimits

0x17e3,	// (0x00033686) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x00041475) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x00041475) list_single_number_pane_g

0x0092,	// (0x00031f35) list_single_number_pane_t1_ParamLimits

0x0092,	// (0x00031f35) list_single_number_pane_t1

0x08ce,	// (0x00032771) list_single_number_pane_t2_ParamLimits

0x08ce,	// (0x00032771) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x00041802) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x00041802) list_single_number_pane_t

0x0086,	// (0x00031f29) list_single_graphic_pane_g1_ParamLimits

0x0086,	// (0x00031f29) list_single_graphic_pane_g1

0x17d7,	// (0x0003367a) list_single_graphic_pane_g2_ParamLimits

0x17d7,	// (0x0003367a) list_single_graphic_pane_g2

0x17e3,	// (0x00033686) list_single_graphic_pane_g3_ParamLimits

0x17e3,	// (0x00033686) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00041464) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00041464) list_single_graphic_pane_g

0x0092,	// (0x00031f35) list_single_graphic_pane_t1_ParamLimits

0x0092,	// (0x00031f35) list_single_graphic_pane_t1

0x00a8,	// (0x00031f4b) list_single_heading_pane_g1_ParamLimits

0x00a8,	// (0x00031f4b) list_single_heading_pane_g1

0x17e3,	// (0x00033686) list_single_heading_pane_g2_ParamLimits

0x17e3,	// (0x00033686) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0004146b) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0004146b) list_single_heading_pane_g

0x00bb,	// (0x00031f5e) list_single_heading_pane_t1_ParamLimits

0x00bb,	// (0x00031f5e) list_single_heading_pane_t1

0x00d1,	// (0x00031f74) list_single_heading_pane_t2_ParamLimits

0x00d1,	// (0x00031f74) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00041470) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00041470) list_single_heading_pane_t

0x17d7,	// (0x0003367a) list_single_number_heading_pane_g1_ParamLimits

0x17d7,	// (0x0003367a) list_single_number_heading_pane_g1

0x17e3,	// (0x00033686) list_single_number_heading_pane_g2_ParamLimits

0x17e3,	// (0x00033686) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x00041475) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x00041475) list_single_number_heading_pane_g

0x00e3,	// (0x00031f86) list_single_number_heading_pane_t1_ParamLimits

0x00e3,	// (0x00031f86) list_single_number_heading_pane_t1

0x00f9,	// (0x00031f9c) list_single_number_heading_pane_t2_ParamLimits

0x00f9,	// (0x00031f9c) list_single_number_heading_pane_t2

0x010b,	// (0x00031fae) list_single_number_heading_pane_t3_ParamLimits

0x010b,	// (0x00031fae) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0004147a) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0004147a) list_single_number_heading_pane_t

0x011d,	// (0x00031fc0) list_single_graphic_heading_pane_g1_ParamLimits

0x011d,	// (0x00031fc0) list_single_graphic_heading_pane_g1

0x17ef,	// (0x00033692) list_single_graphic_heading_pane_g4_ParamLimits

0x17ef,	// (0x00033692) list_single_graphic_heading_pane_g4

0x17e3,	// (0x00033686) list_single_graphic_heading_pane_g5_ParamLimits

0x17e3,	// (0x00033686) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x00041481) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x00041481) list_single_graphic_heading_pane_g

0x00e3,	// (0x00031f86) list_single_graphic_heading_pane_t1_ParamLimits

0x00e3,	// (0x00031f86) list_single_graphic_heading_pane_t1

0x0131,	// (0x00031fd4) list_single_graphic_heading_pane_t2_ParamLimits

0x0131,	// (0x00031fd4) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x00041488) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x00041488) list_single_graphic_heading_pane_t

0x17fe,	// (0x000336a1) list_single_large_graphic_pane_g1_ParamLimits

0x17fe,	// (0x000336a1) list_single_large_graphic_pane_g1

0x180a,	// (0x000336ad) list_single_large_graphic_pane_g2_ParamLimits

0x180a,	// (0x000336ad) list_single_large_graphic_pane_g2

0x1816,	// (0x000336b9) list_single_large_graphic_pane_g3_ParamLimits

0x1816,	// (0x000336b9) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0004148d) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0004148d) list_single_large_graphic_pane_g

0x4abf,	// (0x00036962) wait_border_pane_g2_copy1

0x1822,	// (0x000336c5) list_single_large_graphic_pane_g4_cp2

0x0149,	// (0x00031fec) list_single_large_graphic_pane_t1_ParamLimits

0x0149,	// (0x00031fec) list_single_large_graphic_pane_t1

0x182a,	// (0x000336cd) list_double_pane_g1_ParamLimits

0x182a,	// (0x000336cd) list_double_pane_g1

0x1836,	// (0x000336d9) list_double_pane_g2_ParamLimits

0x1836,	// (0x000336d9) list_double_pane_g2

0x0001,

0xf5f1,	// (0x00041494) list_double_pane_g_ParamLimits

0xf5f1,	// (0x00041494) list_double_pane_g

0x015f,	// (0x00032002) list_double_pane_t1_ParamLimits

0x015f,	// (0x00032002) list_double_pane_t1

0x0175,	// (0x00032018) list_double_pane_t2_ParamLimits

0x0175,	// (0x00032018) list_double_pane_t2

0x0001,

0xf5f6,	// (0x00041499) list_double_pane_t_ParamLimits

0xf5f6,	// (0x00041499) list_double_pane_t

0x0187,	// (0x0003202a) list_double2_pane_g1_ParamLimits

0x0187,	// (0x0003202a) list_double2_pane_g1

0x0196,	// (0x00032039) list_double2_pane_g2_ParamLimits

0x0196,	// (0x00032039) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0004149e) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0004149e) list_double2_pane_g

0x01a2,	// (0x00032045) list_double2_pane_t1_ParamLimits

0x01a2,	// (0x00032045) list_double2_pane_t1

0x01b8,	// (0x0003205b) list_double2_pane_t2_ParamLimits

0x01b8,	// (0x0003205b) list_double2_pane_t2

0x0001,

0xf600,	// (0x000414a3) list_double2_pane_t_ParamLimits

0xf600,	// (0x000414a3) list_double2_pane_t

0x182a,	// (0x000336cd) list_double_number_pane_g1_ParamLimits

0x182a,	// (0x000336cd) list_double_number_pane_g1

0x1836,	// (0x000336d9) list_double_number_pane_g2_ParamLimits

0x1836,	// (0x000336d9) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x00041494) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x00041494) list_double_number_pane_g

0x01ca,	// (0x0003206d) list_double_number_pane_t1_ParamLimits

0x01ca,	// (0x0003206d) list_double_number_pane_t1

0x01dc,	// (0x0003207f) list_double_number_pane_t2_ParamLimits

0x01dc,	// (0x0003207f) list_double_number_pane_t2

0x01f2,	// (0x00032095) list_double_number_pane_t3_ParamLimits

0x01f2,	// (0x00032095) list_double_number_pane_t3

0x0002,

0xf605,	// (0x000414a8) list_double_number_pane_t_ParamLimits

0xf605,	// (0x000414a8) list_double_number_pane_t

0x0204,	// (0x000320a7) list_double_graphic_pane_g1_ParamLimits

0x0204,	// (0x000320a7) list_double_graphic_pane_g1

0x0210,	// (0x000320b3) list_double_graphic_pane_g2_ParamLimits

0x0210,	// (0x000320b3) list_double_graphic_pane_g2

0x021f,	// (0x000320c2) list_double_graphic_pane_g3_ParamLimits

0x021f,	// (0x000320c2) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x000414af) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x000414af) list_double_graphic_pane_g

0x022b,	// (0x000320ce) list_double_graphic_pane_t1_ParamLimits

0x022b,	// (0x000320ce) list_double_graphic_pane_t1

0x0241,	// (0x000320e4) list_double_graphic_pane_t2_ParamLimits

0x0241,	// (0x000320e4) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x000414b8) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x000414b8) list_double_graphic_pane_t

0x0253,	// (0x000320f6) list_double2_graphic_pane_g1_ParamLimits

0x0253,	// (0x000320f6) list_double2_graphic_pane_g1

0x184e,	// (0x000336f1) list_double2_graphic_pane_g2_ParamLimits

0x184e,	// (0x000336f1) list_double2_graphic_pane_g2

0x185a,	// (0x000336fd) list_double2_graphic_pane_g3_ParamLimits

0x185a,	// (0x000336fd) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x000414bd) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x000414bd) list_double2_graphic_pane_g

0x025f,	// (0x00032102) list_double2_graphic_pane_t1_ParamLimits

0x025f,	// (0x00032102) list_double2_graphic_pane_t1

0x0275,	// (0x00032118) list_double2_graphic_pane_t2_ParamLimits

0x0275,	// (0x00032118) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x000414c4) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x000414c4) list_double2_graphic_pane_t

0x0287,	// (0x0003212a) list_double_large_graphic_pane_g1_ParamLimits

0x0287,	// (0x0003212a) list_double_large_graphic_pane_g1

0x02a4,	// (0x00032147) list_double_large_graphic_pane_g2_ParamLimits

0x02a4,	// (0x00032147) list_double_large_graphic_pane_g2

0x1836,	// (0x000336d9) list_double_large_graphic_pane_g3_ParamLimits

0x1836,	// (0x000336d9) list_double_large_graphic_pane_g3

0x02b8,	// (0x0003215b) list_double_large_graphic_pane_g4_ParamLimits

0x02b8,	// (0x0003215b) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x000414c9) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x000414c9) list_double_large_graphic_pane_g

0x02c9,	// (0x0003216c) list_double_large_graphic_pane_t1_ParamLimits

0x02c9,	// (0x0003216c) list_double_large_graphic_pane_t1

0x02e2,	// (0x00032185) list_double_large_graphic_pane_t2_ParamLimits

0x02e2,	// (0x00032185) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x000414d4) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x000414d4) list_double_large_graphic_pane_t

0x187b,	// (0x0003371e) list_double2_large_graphic_pane_g1_ParamLimits

0x187b,	// (0x0003371e) list_double2_large_graphic_pane_g1

0x1887,	// (0x0003372a) list_double2_large_graphic_pane_g2_ParamLimits

0x1887,	// (0x0003372a) list_double2_large_graphic_pane_g2

0x185a,	// (0x000336fd) list_double2_large_graphic_pane_g3_ParamLimits

0x185a,	// (0x000336fd) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x000414d9) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x000414d9) list_double2_large_graphic_pane_g

0x02f4,	// (0x00032197) list_double2_large_graphic_pane_t1_ParamLimits

0x02f4,	// (0x00032197) list_double2_large_graphic_pane_t1

0x030a,	// (0x000321ad) list_double2_large_graphic_pane_t2_ParamLimits

0x030a,	// (0x000321ad) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x000414e0) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x000414e0) list_double2_large_graphic_pane_t

0x031c,	// (0x000321bf) list_double_heading_pane_g1_ParamLimits

0x031c,	// (0x000321bf) list_double_heading_pane_g1

0x032b,	// (0x000321ce) list_double_heading_pane_g2_ParamLimits

0x032b,	// (0x000321ce) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x000414e5) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x000414e5) list_double_heading_pane_g

0x0337,	// (0x000321da) list_double_heading_pane_t1_ParamLimits

0x0337,	// (0x000321da) list_double_heading_pane_t1

0x01b8,	// (0x0003205b) list_double_heading_pane_t2_ParamLimits

0x01b8,	// (0x0003205b) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x000414ea) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x000414ea) list_double_heading_pane_t

0x034d,	// (0x000321f0) list_double_graphic_heading_pane_g1_ParamLimits

0x034d,	// (0x000321f0) list_double_graphic_heading_pane_g1

0x031c,	// (0x000321bf) list_double_graphic_heading_pane_g2_ParamLimits

0x031c,	// (0x000321bf) list_double_graphic_heading_pane_g2

0x032b,	// (0x000321ce) list_double_graphic_heading_pane_g3_ParamLimits

0x032b,	// (0x000321ce) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x000414ef) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x000414ef) list_double_graphic_heading_pane_g

0x0359,	// (0x000321fc) list_double_graphic_heading_pane_t1_ParamLimits

0x0359,	// (0x000321fc) list_double_graphic_heading_pane_t1

0x0275,	// (0x00032118) list_double_graphic_heading_pane_t2_ParamLimits

0x0275,	// (0x00032118) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x000414f6) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x000414f6) list_double_graphic_heading_pane_t

0x036f,	// (0x00032212) list_double_time_pane_g1_ParamLimits

0x036f,	// (0x00032212) list_double_time_pane_g1

0x037e,	// (0x00032221) list_double_time_pane_g2_ParamLimits

0x037e,	// (0x00032221) list_double_time_pane_g2

0x0001,

0xf658,	// (0x000414fb) list_double_time_pane_g_ParamLimits

0xf658,	// (0x000414fb) list_double_time_pane_g

0x038a,	// (0x0003222d) list_double_time_pane_t1_ParamLimits

0x038a,	// (0x0003222d) list_double_time_pane_t1

0x03a0,	// (0x00032243) list_double_time_pane_t2_ParamLimits

0x03a0,	// (0x00032243) list_double_time_pane_t2

0x03b2,	// (0x00032255) list_double_time_pane_t3_ParamLimits

0x03b2,	// (0x00032255) list_double_time_pane_t3

0x03c4,	// (0x00032267) list_double_time_pane_t4_ParamLimits

0x03c4,	// (0x00032267) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x00041500) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x00041500) list_double_time_pane_t

0x03d6,	// (0x00032279) list_setting_pane_g1_ParamLimits

0x03d6,	// (0x00032279) list_setting_pane_g1

0x0196,	// (0x00032039) list_setting_pane_g2_ParamLimits

0x0196,	// (0x00032039) list_setting_pane_g2

0x0001,

0xf666,	// (0x00041509) list_setting_pane_g_ParamLimits

0xf666,	// (0x00041509) list_setting_pane_g

0x03e2,	// (0x00032285) list_setting_pane_t1_ParamLimits

0x03e2,	// (0x00032285) list_setting_pane_t1

0x03fc,	// (0x0003229f) list_setting_pane_t2_ParamLimits

0x03fc,	// (0x0003229f) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0004150e) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0004150e) list_setting_pane_t

0x0439,	// (0x000322dc) set_value_pane_cp_ParamLimits

0x0439,	// (0x000322dc) set_value_pane_cp

0x0445,	// (0x000322e8) list_setting_number_pane_g1_ParamLimits

0x0445,	// (0x000322e8) list_setting_number_pane_g1

0x0451,	// (0x000322f4) list_setting_number_pane_g2_ParamLimits

0x0451,	// (0x000322f4) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x00041515) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x00041515) list_setting_number_pane_g

0x045d,	// (0x00032300) list_setting_number_pane_t1_ParamLimits

0x045d,	// (0x00032300) list_setting_number_pane_t1

0x0474,	// (0x00032317) list_setting_number_pane_t2_ParamLimits

0x0474,	// (0x00032317) list_setting_number_pane_t2

0x048e,	// (0x00032331) list_setting_number_pane_t3_ParamLimits

0x048e,	// (0x00032331) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0004151a) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0004151a) list_setting_number_pane_t

0x0439,	// (0x000322dc) set_value_pane_ParamLimits

0x0439,	// (0x000322dc) set_value_pane

0x1896,	// (0x00033739) bg_set_opt_pane_ParamLimits

0x1896,	// (0x00033739) bg_set_opt_pane

0x04cf,	// (0x00032372) set_value_pane_t1

0x18b7,	// (0x0003375a) slider_set_pane_cp3

0x18c0,	// (0x00033763) volume_small_pane_cp

0x18c9,	// (0x0003376c) list_form_gen_pane

0x17c6,	// (0x00033669) scroll_pane_cp8

0x04ed,	// (0x00032390) form_field_data_pane_ParamLimits

0x04ed,	// (0x00032390) form_field_data_pane

0x050d,	// (0x000323b0) form_field_data_wide_pane_ParamLimits

0x050d,	// (0x000323b0) form_field_data_wide_pane

0x052c,	// (0x000323cf) form_field_popup_pane_ParamLimits

0x052c,	// (0x000323cf) form_field_popup_pane

0x0544,	// (0x000323e7) form_field_popup_wide_pane_ParamLimits

0x0544,	// (0x000323e7) form_field_popup_wide_pane

0x055b,	// (0x000323fe) form_field_slider_pane_ParamLimits

0x055b,	// (0x000323fe) form_field_slider_pane

0x056e,	// (0x00032411) form_field_slider_wide_pane_ParamLimits

0x056e,	// (0x00032411) form_field_slider_wide_pane

0x18d2,	// (0x00033775) data_form_pane

0x0589,	// (0x0003242c) form_field_data_pane_t1

0x18de,	// (0x00033781) input_focus_pane

0x18ec,	// (0x0003378f) data_form_wide_pane

0x05ad,	// (0x00032450) form_field_data_wide_pane_t1

0x1645,	// (0x000334e8) input_focus_pane_cp6

0x05cf,	// (0x00032472) form_field_popup_pane_t1

0x18de,	// (0x00033781) input_focus_pane_cp7

0x18d2,	// (0x00033775) list_form_pane

0x05ef,	// (0x00032492) form_field_popup_wide_pane_t1

0x18de,	// (0x00033781) input_focus_pane_cp8

0x190c,	// (0x000337af) list_form_wide_pane

0x060c,	// (0x000324af) form_field_slider_pane_t1_ParamLimits

0x060c,	// (0x000324af) form_field_slider_pane_t1

0x0622,	// (0x000324c5) form_field_slider_pane_t2_ParamLimits

0x0622,	// (0x000324c5) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0004152a) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0004152a) form_field_slider_pane_t

0x13aa,	// (0x0003324d) input_focus_pane_cp9_ParamLimits

0x13aa,	// (0x0003324d) input_focus_pane_cp9

0x0637,	// (0x000324da) slider_cont_pane_ParamLimits

0x0637,	// (0x000324da) slider_cont_pane

0x191b,	// (0x000337be) form_field_slider_wide_pane_t1_ParamLimits

0x191b,	// (0x000337be) form_field_slider_wide_pane_t1

0x064b,	// (0x000324ee) form_field_slider_wide_pane_t2_ParamLimits

0x064b,	// (0x000324ee) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0004152f) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0004152f) form_field_slider_wide_pane_t

0x13aa,	// (0x0003324d) input_focus_pane_cp10_ParamLimits

0x13aa,	// (0x0003324d) input_focus_pane_cp10

0x065d,	// (0x00032500) slider_cont_pane_cp1_ParamLimits

0x065d,	// (0x00032500) slider_cont_pane_cp1

0x0673,	// (0x00032516) slider_form_pane_cp

0x192d,	// (0x000337d0) input_focus_pane_g1

0x1935,	// (0x000337d8) input_focus_pane_g2

0x193d,	// (0x000337e0) input_focus_pane_g3

0x1945,	// (0x000337e8) input_focus_pane_g4

0x194d,	// (0x000337f0) input_focus_pane_g5

0x1955,	// (0x000337f8) input_focus_pane_g6

0x195d,	// (0x00033800) input_focus_pane_g7

0x1965,	// (0x00033808) input_focus_pane_g8

0x196d,	// (0x00033810) input_focus_pane_g9

0x0e92,	// (0x00032d35) input_focus_pane_g10

0x0009,

0xf691,	// (0x00041534) input_focus_pane_g

0x4ac8,	// (0x0003696b) wait_border_pane_g3_copy1

0x067b,	// (0x0003251e) data_form_pane_t1

0x0e92,	// (0x00032d35) wait_anim_pane_g1_copy1

0x08e0,	// (0x00032783) data_form_wide_pane_t1

0x0695,	// (0x00032538) list_form_graphic_pane_cp_ParamLimits

0x0695,	// (0x00032538) list_form_graphic_pane_cp

0x56a8,	// (0x0003754b) slider_form_pane_g1

0x56b1,	// (0x00037554) slider_form_pane_g2

0x0006,

0xf98f,	// (0x00041832) slider_form_pane_g

0x06a9,	// (0x0003254c) list_form_graphic_pane_ParamLimits

0x06a9,	// (0x0003254c) list_form_graphic_pane

0x06bf,	// (0x00032562) list_form_graphic_pane_g1

0x06c7,	// (0x0003256a) list_form_graphic_pane_t1_ParamLimits

0x06c7,	// (0x0003256a) list_form_graphic_pane_t1

0x11e5,	// (0x00033088) list_highlight_pane_cp5_ParamLimits

0x11e5,	// (0x00033088) list_highlight_pane_cp5

0x06dc,	// (0x0003257f) find_pane_g1

0x1975,	// (0x00033818) input_find_pane

0x06e5,	// (0x00032588) input_find_pane_g1_ParamLimits

0x06e5,	// (0x00032588) input_find_pane_g1

0x06f1,	// (0x00032594) input_find_pane_t1_ParamLimits

0x06f1,	// (0x00032594) input_find_pane_t1

0x0706,	// (0x000325a9) input_find_pane_t2_ParamLimits

0x0706,	// (0x000325a9) input_find_pane_t2

0x0001,

0xf6a6,	// (0x00041549) input_find_pane_t_ParamLimits

0xf6a6,	// (0x00041549) input_find_pane_t

0x197e,	// (0x00033821) input_focus_pane_cp5_ParamLimits

0x197e,	// (0x00033821) input_focus_pane_cp5

0x13aa,	// (0x0003324d) bg_popup_window_pane_cp2_ParamLimits

0x13aa,	// (0x0003324d) bg_popup_window_pane_cp2

0x1998,	// (0x0003383b) listscroll_menu_pane_ParamLimits

0x1998,	// (0x0003383b) listscroll_menu_pane

0x19a4,	// (0x00033847) popup_submenu_window_ParamLimits

0x19a4,	// (0x00033847) popup_submenu_window

0x19c8,	// (0x0003386b) find_popup_pane_g1

0x19d0,	// (0x00033873) input_popup_find_pane_cp

0x197e,	// (0x00033821) input_focus_pane_cp4_ParamLimits

0x197e,	// (0x00033821) input_focus_pane_cp4

0x19da,	// (0x0003387d) input_popup_find_pane_t1_ParamLimits

0x19da,	// (0x0003387d) input_popup_find_pane_t1

0x1051,	// (0x00032ef4) bg_popup_sub_pane_cp

0x1a08,	// (0x000338ab) listscroll_popup_sub_pane

0x1a10,	// (0x000338b3) list_submenu_pane_ParamLimits

0x1a10,	// (0x000338b3) list_submenu_pane

0x1a21,	// (0x000338c4) scroll_pane_cp4

0x1a29,	// (0x000338cc) list_single_popup_submenu_pane_ParamLimits

0x1a29,	// (0x000338cc) list_single_popup_submenu_pane

0x1a3b,	// (0x000338de) list_single_popup_submenu_pane_g1

0x1a43,	// (0x000338e6) list_single_popup_submenu_pane_t1_ParamLimits

0x1a43,	// (0x000338e6) list_single_popup_submenu_pane_t1

0x11e5,	// (0x00033088) bg_active_tab_pane_cp1_ParamLimits

0x11e5,	// (0x00033088) bg_active_tab_pane_cp1

0x77da,	// (0x0003967d) tabs_2_active_pane_g1

0x77e2,	// (0x00039685) tabs_2_active_pane_t1

0x11e5,	// (0x00033088) bg_passive_tab_pane_cp1_ParamLimits

0x11e5,	// (0x00033088) bg_passive_tab_pane_cp1

0x77da,	// (0x0003967d) tabs_2_passive_pane_g1

0x77e2,	// (0x00039685) tabs_2_passive_pane_t1

0x4186,	// (0x00036029) bg_active_tab_pane_cp4

0x77f4,	// (0x00039697) tabs_2_long_active_pane_t1

0x7807,	// (0x000396aa) bg_passive_tab_pane_cp4

0xd929,	// (0x0003f7cc) list_single_midp_graphic_pane_g4_ParamLimits

0x4186,	// (0x00036029) bg_active_tab_pane_cp5

0x7813,	// (0x000396b6) tabs_3_long_active_pane_t1

0x7807,	// (0x000396aa) bg_passive_tab_pane_cp5

0xd929,	// (0x0003f7cc) list_single_midp_graphic_pane_g4

0x11e5,	// (0x00033088) bg_popup_window_pane_cp13_ParamLimits

0x11e5,	// (0x00033088) bg_popup_window_pane_cp13

0x1a61,	// (0x00033904) listscroll_popup_fast_pane_ParamLimits

0x1a61,	// (0x00033904) listscroll_popup_fast_pane

0x1a70,	// (0x00033913) grid_popup_fast_pane_ParamLimits

0x1a70,	// (0x00033913) grid_popup_fast_pane

0x1a82,	// (0x00033925) scroll_pane_cp9_ParamLimits

0x1a82,	// (0x00033925) scroll_pane_cp9

0x69b9,	// (0x0003885c) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x69b9,	// (0x0003885c) list_single_graphic_hl_pane_t1_cp2

0x1aa6,	// (0x00033949) input_focus_pane_cp20_ParamLimits

0x1aa6,	// (0x00033949) input_focus_pane_cp20

0x1ab4,	// (0x00033957) query_popup_data_pane_t1_ParamLimits

0x1ab4,	// (0x00033957) query_popup_data_pane_t1

0x1ac7,	// (0x0003396a) query_popup_data_pane_t2_ParamLimits

0x1ac7,	// (0x0003396a) query_popup_data_pane_t2

0x1b0d,	// (0x000339b0) query_popup_data_pane_t3_ParamLimits

0x1b0d,	// (0x000339b0) query_popup_data_pane_t3

0x1b4e,	// (0x000339f1) query_popup_data_pane_t4_ParamLimits

0x1b4e,	// (0x000339f1) query_popup_data_pane_t4

0x1b8a,	// (0x00033a2d) query_popup_data_pane_t5_ParamLimits

0x1b8a,	// (0x00033a2d) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0004154e) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0004154e) query_popup_data_pane_t

0x192d,	// (0x000337d0) bg_set_opt_pane_g1

0x1935,	// (0x000337d8) bg_set_opt_pane_g2

0x193d,	// (0x000337e0) bg_set_opt_pane_g3

0x1945,	// (0x000337e8) bg_set_opt_pane_g4

0x194d,	// (0x000337f0) bg_set_opt_pane_g5

0x1955,	// (0x000337f8) bg_set_opt_pane_g6

0x195d,	// (0x00033800) bg_set_opt_pane_g7

0x1965,	// (0x00033808) bg_set_opt_pane_g8

0x196d,	// (0x00033810) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x00041559) bg_set_opt_pane_g

0xd0fb,	// (0x0003ef9e) control_top_pane_stacon_ParamLimits

0xd0fb,	// (0x0003ef9e) control_top_pane_stacon

0xd14e,	// (0x0003eff1) signal_pane_stacon_ParamLimits

0xd14e,	// (0x0003eff1) signal_pane_stacon

0x2239,	// (0x000340dc) stacon_top_pane_g1_ParamLimits

0x2239,	// (0x000340dc) stacon_top_pane_g1

0xd173,	// (0x0003f016) title_pane_stacon_ParamLimits

0xd173,	// (0x0003f016) title_pane_stacon

0xd195,	// (0x0003f038) uni_indicator_pane_stacon_ParamLimits

0xd195,	// (0x0003f038) uni_indicator_pane_stacon

0xd1aa,	// (0x0003f04d) battery_pane_stacon_ParamLimits

0xd1aa,	// (0x0003f04d) battery_pane_stacon

0xd1ea,	// (0x0003f08d) control_bottom_pane_stacon_ParamLimits

0xd1ea,	// (0x0003f08d) control_bottom_pane_stacon

0xd209,	// (0x0003f0ac) navi_pane_stacon_ParamLimits

0xd209,	// (0x0003f0ac) navi_pane_stacon

0x2310,	// (0x000341b3) stacon_bottom_pane_g1_ParamLimits

0x2310,	// (0x000341b3) stacon_bottom_pane_g1

0x1bc1,	// (0x00033a64) aid_levels_signal_lsc_ParamLimits

0x1bc1,	// (0x00033a64) aid_levels_signal_lsc

0xcec7,	// (0x0003ed6a) signal_pane_stacon_g1_ParamLimits

0xcec7,	// (0x0003ed6a) signal_pane_stacon_g1

0xced3,	// (0x0003ed76) signal_pane_stacon_g2_ParamLimits

0xced3,	// (0x0003ed76) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x0004156c) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0004156c) signal_pane_stacon_g

0xcf07,	// (0x0003edaa) title_pane_stacon_t1_ParamLimits

0xcf07,	// (0x0003edaa) title_pane_stacon_t1

0x1c54,	// (0x00033af7) uni_indicator_pane_stacon_g1

0x1c5e,	// (0x00033b01) uni_indicator_pane_stacon_g2

0x1c40,	// (0x00033ae3) uni_indicator_pane_stacon_g3

0x1c4a,	// (0x00033aed) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x00041578) uni_indicator_pane_stacon_g

0xcf2c,	// (0x0003edcf) control_top_pane_stacon_g1

0xcf34,	// (0x0003edd7) control_top_pane_stacon_t1_ParamLimits

0xcf34,	// (0x0003edd7) control_top_pane_stacon_t1

0x1ca1,	// (0x00033b44) aid_levels_battery_lsc_ParamLimits

0x1ca1,	// (0x00033b44) aid_levels_battery_lsc

0xcf65,	// (0x0003ee08) battery_pane_stacon_g1_ParamLimits

0xcf65,	// (0x0003ee08) battery_pane_stacon_g1

0xcf71,	// (0x0003ee14) battery_pane_stacon_g2_ParamLimits

0xcf71,	// (0x0003ee14) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x00041581) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x00041581) battery_pane_stacon_g

0xcfa0,	// (0x0003ee43) navi_icon_pane_stacon

0xcfb0,	// (0x0003ee53) navi_navi_pane_stacon

0xcfa0,	// (0x0003ee43) navi_text_pane_stacon

0xcf2c,	// (0x0003edcf) control_bottom_pane_stacon_g1

0xcfc0,	// (0x0003ee63) control_bottom_pane_stacon_t1_ParamLimits

0xcfc0,	// (0x0003ee63) control_bottom_pane_stacon_t1

0x7825,	// (0x000396c8) grid_app_pane_ParamLimits

0x7825,	// (0x000396c8) grid_app_pane

0x7841,	// (0x000396e4) scroll_pane_cp15_ParamLimits

0x7841,	// (0x000396e4) scroll_pane_cp15

0x7852,	// (0x000396f5) cell_app_pane_ParamLimits

0x7852,	// (0x000396f5) cell_app_pane

0x7876,	// (0x00039719) cell_app_pane_g1_ParamLimits

0x7876,	// (0x00039719) cell_app_pane_g1

0x1d55,	// (0x00033bf8) cell_app_pane_g2_ParamLimits

0x1d55,	// (0x00033bf8) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x00041586) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x00041586) cell_app_pane_g

0x789a,	// (0x0003973d) cell_app_pane_t1_ParamLimits

0x789a,	// (0x0003973d) cell_app_pane_t1

0x1d61,	// (0x00033c04) grid_highlight_pane_ParamLimits

0x1d61,	// (0x00033c04) grid_highlight_pane

0x192d,	// (0x000337d0) cell_highlight_pane_g1

0x1935,	// (0x000337d8) cell_highlight_pane_g2

0x193d,	// (0x000337e0) cell_highlight_pane_g3

0x1945,	// (0x000337e8) cell_highlight_pane_g4

0x194d,	// (0x000337f0) cell_highlight_pane_g5

0x1955,	// (0x000337f8) cell_highlight_pane_g6

0x195d,	// (0x00033800) cell_highlight_pane_g7

0x1965,	// (0x00033808) cell_highlight_pane_g8

0x196d,	// (0x00033810) cell_highlight_pane_g9

0x0e92,	// (0x00032d35) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x00041534) cell_highlight_pane_g

0x1d85,	// (0x00033c28) bg_scroll_pane

0xd004,	// (0x0003eea7) scroll_handle_pane

0x1df5,	// (0x00033c98) scroll_bg_pane_g1

0x1e0a,	// (0x00033cad) scroll_bg_pane_g2

0x1e22,	// (0x00033cc5) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0004158b) scroll_bg_pane_g

0x1e37,	// (0x00033cda) scroll_handle_focus_pane_ParamLimits

0x1e37,	// (0x00033cda) scroll_handle_focus_pane

0x1df5,	// (0x00033c98) scroll_handle_pane_g1

0x1e44,	// (0x00033ce7) scroll_handle_pane_g2

0x1e22,	// (0x00033cc5) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x00041592) scroll_handle_pane_g

0x197e,	// (0x00033821) bg_popup_sub_pane_cp21_ParamLimits

0x197e,	// (0x00033821) bg_popup_sub_pane_cp21

0x1e58,	// (0x00033cfb) popup_fep_japan_predictive_window_t1_ParamLimits

0x1e58,	// (0x00033cfb) popup_fep_japan_predictive_window_t1

0x1e6f,	// (0x00033d12) popup_fep_japan_predictive_window_t2_ParamLimits

0x1e6f,	// (0x00033d12) popup_fep_japan_predictive_window_t2

0x1ea2,	// (0x00033d45) popup_fep_japan_predictive_window_t3_ParamLimits

0x1ea2,	// (0x00033d45) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x00041599) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x00041599) popup_fep_japan_predictive_window_t

0x1051,	// (0x00032ef4) bg_popup_sub_pane_cp23

0x1ed9,	// (0x00033d7c) listscroll_japin_cand_pane

0x1ee1,	// (0x00033d84) popup_fep_japan_candidate_window_t1

0x1eef,	// (0x00033d92) candidate_pane_ParamLimits

0x1eef,	// (0x00033d92) candidate_pane

0x1f02,	// (0x00033da5) scroll_pane_cp30

0x1f0a,	// (0x00033dad) list_single_popup_jap_candidate_pane_ParamLimits

0x1f0a,	// (0x00033dad) list_single_popup_jap_candidate_pane

0x1051,	// (0x00032ef4) list_highlight_pane_cp30

0x1f1f,	// (0x00033dc2) list_single_popup_jap_candidate_pane_t1

0x78b1,	// (0x00039754) level_1_signal

0x78be,	// (0x00039761) level_2_signal

0x78cb,	// (0x0003976e) level_3_signal

0x78d8,	// (0x0003977b) level_4_signal

0x78e5,	// (0x00039788) level_5_signal

0x78f2,	// (0x00039795) level_6_signal

0x78ff,	// (0x000397a2) level_7_signal

0x78b1,	// (0x00039754) level_1_battery

0x78be,	// (0x00039761) level_2_battery

0x78cb,	// (0x0003976e) level_3_battery

0x78d8,	// (0x0003977b) level_4_battery

0x78e5,	// (0x00039788) level_5_battery

0x78f2,	// (0x00039795) level_6_battery

0x78ff,	// (0x000397a2) level_7_battery

0x1f65,	// (0x00033e08) list_menu_pane_ParamLimits

0x1f65,	// (0x00033e08) list_menu_pane

0x1f7b,	// (0x00033e1e) scroll_pane_cp25_ParamLimits

0x1f7b,	// (0x00033e1e) scroll_pane_cp25

0x790c,	// (0x000397af) list_double2_graphic_pane_cp2_ParamLimits

0x790c,	// (0x000397af) list_double2_graphic_pane_cp2

0x790c,	// (0x000397af) list_double2_large_graphic_pane_cp2_ParamLimits

0x790c,	// (0x000397af) list_double2_large_graphic_pane_cp2

0x790c,	// (0x000397af) list_double2_pane_cp2_ParamLimits

0x790c,	// (0x000397af) list_double2_pane_cp2

0x790c,	// (0x000397af) list_double_graphic_pane_cp2_ParamLimits

0x790c,	// (0x000397af) list_double_graphic_pane_cp2

0x790c,	// (0x000397af) list_double_large_graphic_pane_cp2_ParamLimits

0x790c,	// (0x000397af) list_double_large_graphic_pane_cp2

0x790c,	// (0x000397af) list_double_number_pane_cp2_ParamLimits

0x790c,	// (0x000397af) list_double_number_pane_cp2

0x790c,	// (0x000397af) list_double_pane_cp2_ParamLimits

0x790c,	// (0x000397af) list_double_pane_cp2

0x791c,	// (0x000397bf) list_single_2graphic_pane_cp2_ParamLimits

0x791c,	// (0x000397bf) list_single_2graphic_pane_cp2

0x791c,	// (0x000397bf) list_single_graphic_heading_pane_cp2_ParamLimits

0x791c,	// (0x000397bf) list_single_graphic_heading_pane_cp2

0x791c,	// (0x000397bf) list_single_graphic_pane_cp2_ParamLimits

0x791c,	// (0x000397bf) list_single_graphic_pane_cp2

0x791c,	// (0x000397bf) list_single_heading_pane_cp2_ParamLimits

0x791c,	// (0x000397bf) list_single_heading_pane_cp2

0x7931,	// (0x000397d4) list_single_large_graphic_pane_cp2_ParamLimits

0x7931,	// (0x000397d4) list_single_large_graphic_pane_cp2

0x791c,	// (0x000397bf) list_single_number_heading_pane_cp2_ParamLimits

0x791c,	// (0x000397bf) list_single_number_heading_pane_cp2

0x791c,	// (0x000397bf) list_single_number_pane_cp2_ParamLimits

0x791c,	// (0x000397bf) list_single_number_pane_cp2

0x791c,	// (0x000397bf) list_single_pane_cp2_ParamLimits

0x791c,	// (0x000397bf) list_single_pane_cp2

0x1ff8,	// (0x00033e9b) bg_popup_sub_pane_cp22

0xd0b3,	// (0x0003ef56) popup_side_volume_key_window_g1

0xd0d7,	// (0x0003ef7a) popup_side_volume_key_window_t1

0xd0f3,	// (0x0003ef96) volume_small_pane_cp1

0x13aa,	// (0x0003324d) bg_popup_sub_pane_cp24_ParamLimits

0x13aa,	// (0x0003324d) bg_popup_sub_pane_cp24

0x2062,	// (0x00033f05) fep_china_uni_candidate_pane_ParamLimits

0x2062,	// (0x00033f05) fep_china_uni_candidate_pane

0x2076,	// (0x00033f19) fep_china_uni_entry_pane

0x2086,	// (0x00033f29) popup_fep_china_uni_window_g1

0x20a2,	// (0x00033f45) fep_china_uni_entry_pane_g1

0x20aa,	// (0x00033f4d) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x000415ca) fep_china_uni_entry_pane_g

0x20b2,	// (0x00033f55) fep_entry_item_pane

0x20bc,	// (0x00033f5f) fep_candidate_item_pane

0x20c4,	// (0x00033f67) fep_china_uni_candidate_pane_g1

0x20cc,	// (0x00033f6f) fep_china_uni_candidate_pane_g2

0x20d4,	// (0x00033f77) fep_china_uni_candidate_pane_g3

0x20dc,	// (0x00033f7f) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x000415cf) fep_china_uni_candidate_pane_g

0x0e92,	// (0x00032d35) fep_entry_item_pane_g1

0x20e4,	// (0x00033f87) fep_entry_item_pane_t1_ParamLimits

0x20e4,	// (0x00033f87) fep_entry_item_pane_t1

0x20fa,	// (0x00033f9d) fep_candidate_item_pane_t1_ParamLimits

0x20fa,	// (0x00033f9d) fep_candidate_item_pane_t1

0x210f,	// (0x00033fb2) fep_candidate_item_pane_t2_ParamLimits

0x210f,	// (0x00033fb2) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x000415d8) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x000415d8) fep_candidate_item_pane_t

0x11e5,	// (0x00033088) list_highlight_pane_cp31_ParamLimits

0x11e5,	// (0x00033088) list_highlight_pane_cp31

0x2121,	// (0x00033fc4) level_1_signal_lsc

0x212a,	// (0x00033fcd) level_2_signal_lsc

0x2133,	// (0x00033fd6) level_3_signal_lsc

0x213c,	// (0x00033fdf) level_4_signal_lsc

0x2145,	// (0x00033fe8) level_5_signal_lsc

0x214e,	// (0x00033ff1) level_6_signal_lsc

0x2157,	// (0x00033ffa) level_7_signal_lsc

0x2157,	// (0x00033ffa) level_1_battery_lsc

0x2160,	// (0x00034003) level_2_battery_lsc

0x2169,	// (0x0003400c) level_3_battery_lsc

0x2172,	// (0x00034015) level_4_battery_lsc

0x217b,	// (0x0003401e) level_5_battery_lsc

0x2184,	// (0x00034027) level_6_battery_lsc

0x2121,	// (0x00033fc4) level_7_battery_lsc

0x218d,	// (0x00034030) scroll_handle_focus_pane_g1

0x2196,	// (0x00034039) scroll_handle_focus_pane_g2

0x219f,	// (0x00034042) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x000415dd) scroll_handle_focus_pane_g

0x071b,	// (0x000325be) list_single_2graphic_pane_g1_ParamLimits

0x071b,	// (0x000325be) list_single_2graphic_pane_g1

0x17ef,	// (0x00033692) list_single_2graphic_pane_g2_ParamLimits

0x17ef,	// (0x00033692) list_single_2graphic_pane_g2

0x17e3,	// (0x00033686) list_single_2graphic_pane_g3_ParamLimits

0x17e3,	// (0x00033686) list_single_2graphic_pane_g3

0x0727,	// (0x000325ca) list_single_2graphic_pane_g4_ParamLimits

0x0727,	// (0x000325ca) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x000415e4) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x000415e4) list_single_2graphic_pane_g

0x0733,	// (0x000325d6) list_single_2graphic_pane_t1_ParamLimits

0x0733,	// (0x000325d6) list_single_2graphic_pane_t1

0x21a8,	// (0x0003404b) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x21a8,	// (0x0003404b) list_double2_graphic_large_graphic_pane_g1

0x1887,	// (0x0003372a) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x1887,	// (0x0003372a) list_double2_graphic_large_graphic_pane_g2

0x185a,	// (0x000336fd) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x185a,	// (0x000336fd) list_double2_graphic_large_graphic_pane_g3

0x0761,	// (0x00032604) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x0761,	// (0x00032604) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x000415ed) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x000415ed) list_double2_graphic_large_graphic_pane_g

0x076d,	// (0x00032610) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x076d,	// (0x00032610) list_double2_graphic_large_graphic_pane_t1

0x0783,	// (0x00032626) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x0783,	// (0x00032626) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x000415f6) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x000415f6) list_double2_graphic_large_graphic_pane_t

0x23b7,	// (0x0003425a) popup_fast_swap_window_ParamLimits

0x23b7,	// (0x0003425a) popup_fast_swap_window

0x23d3,	// (0x00034276) popup_side_volume_key_window

0x23ed,	// (0x00034290) stacon_top_pane

0x23f7,	// (0x0003429a) status_pane_ParamLimits

0x23f7,	// (0x0003429a) status_pane

0x7a02,	// (0x000398a5) status_small_pane

0x1051,	// (0x00032ef4) control_pane

0x1051,	// (0x00032ef4) stacon_bottom_pane

0x17c6,	// (0x00033669) scroll_pane_cp121

0x18c9,	// (0x0003376c) set_content_pane

0x79ad,	// (0x00039850) bg_active_tab_pane_g1_cp1

0x21b8,	// (0x0003405b) bg_active_tab_pane_g2_cp1

0x79a4,	// (0x00039847) bg_active_tab_pane_g3_cp1

0x79ad,	// (0x00039850) bg_passive_tab_pane_g1_cp1

0x21b8,	// (0x0003405b) bg_passive_tab_pane_g2_cp1

0x79a4,	// (0x00039847) bg_passive_tab_pane_g3_cp1

0x79bf,	// (0x00039862) bg_active_tab_pane_g1_cp2

0x21b8,	// (0x0003405b) bg_active_tab_pane_g2_cp2

0x79b6,	// (0x00039859) bg_active_tab_pane_g3_cp2

0x79bf,	// (0x00039862) bg_passive_tab_pane_g1_cp2

0x21b8,	// (0x0003405b) bg_passive_tab_pane_g2_cp2

0x79b6,	// (0x00039859) bg_passive_tab_pane_g3_cp2

0x79d1,	// (0x00039874) bg_active_tab_pane_g1_cp3

0x21b8,	// (0x0003405b) bg_active_tab_pane_g2_cp3

0x79c8,	// (0x0003986b) bg_active_tab_pane_g3_cp3

0x79d1,	// (0x00039874) bg_passive_tab_pane_g1_cp3

0x21b8,	// (0x0003405b) bg_passive_tab_pane_g2_cp3

0x79c8,	// (0x0003986b) bg_passive_tab_pane_g3_cp3

0x79e3,	// (0x00039886) bg_active_tab_pane_g1_cp4

0x21b8,	// (0x0003405b) bg_active_tab_pane_g2_cp4

0x79da,	// (0x0003987d) bg_active_tab_pane_g3_cp4

0x79e3,	// (0x00039886) bg_passive_tab_pane_g1_cp4

0x21b8,	// (0x0003405b) bg_passive_tab_pane_g2_cp4

0x79da,	// (0x0003987d) bg_passive_tab_pane_g3_cp4

0x2335,	// (0x000341d8) bg_active_tab_pane_g1_cp5

0x21b8,	// (0x0003405b) bg_active_tab_pane_g2_cp5

0x232c,	// (0x000341cf) bg_active_tab_pane_g3_cp5

0x2335,	// (0x000341d8) bg_passive_tab_pane_g1_cp5

0x21b8,	// (0x0003405b) bg_passive_tab_pane_g2_cp5

0x232c,	// (0x000341cf) bg_passive_tab_pane_g3_cp5

0x79ec,	// (0x0003988f) list_set_graphic_pane_ParamLimits

0x79ec,	// (0x0003988f) list_set_graphic_pane

0x1051,	// (0x00032ef4) bg_set_opt_pane_cp4

0x233e,	// (0x000341e1) list_set_graphic_pane_g1_ParamLimits

0x233e,	// (0x000341e1) list_set_graphic_pane_g1

0x234a,	// (0x000341ed) list_set_graphic_pane_g2_ParamLimits

0x234a,	// (0x000341ed) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x000415fb) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x000415fb) list_set_graphic_pane_g

0x0009,

0xfad1,	// (0x00041974) volume_small_pane_cp_g

0x236c,	// (0x0003420f) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x236c,	// (0x0003420f) list_double2_large_graphic_pane_g1_cp2

0x2378,	// (0x0003421b) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2378,	// (0x0003421b) list_double2_large_graphic_pane_g2_cp2

0x2387,	// (0x0003422a) list_double2_large_graphic_pane_g3_cp2

0x238f,	// (0x00034232) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x238f,	// (0x00034232) list_double2_large_graphic_pane_t1_cp2

0x23a5,	// (0x00034248) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x23a5,	// (0x00034248) list_double2_large_graphic_pane_t2_cp2

0x546c,	// (0x0003730f) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x546c,	// (0x0003730f) list_double_large_graphic_pane_g1_cp2

0x547d,	// (0x00037320) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x547d,	// (0x00037320) list_double_large_graphic_pane_g2_cp2

0x24d2,	// (0x00034375) list_double_large_graphic_pane_g3_cp2

0x548c,	// (0x0003732f) list_double_large_graphic_pane_g4_cp

0x5494,	// (0x00037337) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5494,	// (0x00037337) list_double_large_graphic_pane_t1_cp2

0x54ab,	// (0x0003734e) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x54ab,	// (0x0003734e) list_double_large_graphic_pane_t2_cp2

0x2405,	// (0x000342a8) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2405,	// (0x000342a8) list_double2_graphic_pane_g1_cp2

0x2411,	// (0x000342b4) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2411,	// (0x000342b4) list_double2_graphic_pane_g2_cp2

0x2420,	// (0x000342c3) list_double2_graphic_pane_g3_cp2

0x2428,	// (0x000342cb) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2428,	// (0x000342cb) list_double2_graphic_pane_t1_cp2

0x243e,	// (0x000342e1) list_double2_graphic_pane_t2_cp2_ParamLimits

0x243e,	// (0x000342e1) list_double2_graphic_pane_t2_cp2

0x2450,	// (0x000342f3) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2450,	// (0x000342f3) list_single_number_heading_pane_g1_cp2

0x245c,	// (0x000342ff) list_single_number_heading_pane_g2_cp2

0x2464,	// (0x00034307) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2464,	// (0x00034307) list_single_number_heading_pane_t1_cp2

0x247a,	// (0x0003431d) list_single_number_heading_pane_t2_cp2_ParamLimits

0x247a,	// (0x0003431d) list_single_number_heading_pane_t2_cp2

0x248c,	// (0x0003432f) list_single_number_heading_pane_t3_cp2_ParamLimits

0x248c,	// (0x0003432f) list_single_number_heading_pane_t3_cp2

0x2450,	// (0x000342f3) list_single_heading_pane_g1_cp2_ParamLimits

0x2450,	// (0x000342f3) list_single_heading_pane_g1_cp2

0x245c,	// (0x000342ff) list_single_heading_pane_g2_cp2

0x2464,	// (0x00034307) list_single_heading_pane_t1_cp2_ParamLimits

0x2464,	// (0x00034307) list_single_heading_pane_t1_cp2

0x5276,	// (0x00037119) list_single_heading_pane_t2_cp2_ParamLimits

0x5276,	// (0x00037119) list_single_heading_pane_t2_cp2

0x51c6,	// (0x00037069) list_double_graphic_pane_g1_cp2_ParamLimits

0x51c6,	// (0x00037069) list_double_graphic_pane_g1_cp2

0x51d2,	// (0x00037075) list_double_graphic_pane_g2_cp2_ParamLimits

0x51d2,	// (0x00037075) list_double_graphic_pane_g2_cp2

0x51e1,	// (0x00037084) list_double_graphic_pane_g3_cp2

0x51e9,	// (0x0003708c) list_double_graphic_pane_t1_cp2_ParamLimits

0x51e9,	// (0x0003708c) list_double_graphic_pane_t1_cp2

0x51ff,	// (0x000370a2) list_double_graphic_pane_t2_cp2_ParamLimits

0x51ff,	// (0x000370a2) list_double_graphic_pane_t2_cp2

0x24c6,	// (0x00034369) list_double_number_pane_g1_cp2_ParamLimits

0x24c6,	// (0x00034369) list_double_number_pane_g1_cp2

0x24d2,	// (0x00034375) list_double_number_pane_g2_cp2

0x518c,	// (0x0003702f) list_double_number_pane_t1_cp2_ParamLimits

0x518c,	// (0x0003702f) list_double_number_pane_t1_cp2

0x519e,	// (0x00037041) list_double_number_pane_t2_cp2_ParamLimits

0x519e,	// (0x00037041) list_double_number_pane_t2_cp2

0x51b4,	// (0x00037057) list_double_number_pane_t3_cp2_ParamLimits

0x51b4,	// (0x00037057) list_double_number_pane_t3_cp2

0x5104,	// (0x00036fa7) list_single_graphic_pane_g1_cp2_ParamLimits

0x5104,	// (0x00036fa7) list_single_graphic_pane_g1_cp2

0x2450,	// (0x000342f3) list_single_graphic_pane_g2_cp2_ParamLimits

0x2450,	// (0x000342f3) list_single_graphic_pane_g2_cp2

0x245c,	// (0x000342ff) list_single_graphic_pane_g3_cp2

0x50dc,	// (0x00036f7f) list_single_graphic_pane_t1_cp2_ParamLimits

0x50dc,	// (0x00036f7f) list_single_graphic_pane_t1_cp2

0x2450,	// (0x000342f3) list_single_number_pane_g1_cp2_ParamLimits

0x2450,	// (0x000342f3) list_single_number_pane_g1_cp2

0x245c,	// (0x000342ff) list_single_number_pane_g2_cp2

0x50dc,	// (0x00036f7f) list_single_number_pane_t1_cp2_ParamLimits

0x50dc,	// (0x00036f7f) list_single_number_pane_t1_cp2

0x50f2,	// (0x00036f95) list_single_number_pane_t2_cp2_ParamLimits

0x50f2,	// (0x00036f95) list_single_number_pane_t2_cp2

0x2378,	// (0x0003421b) list_double2_pane_g1_cp2_ParamLimits

0x2378,	// (0x0003421b) list_double2_pane_g1_cp2

0x2387,	// (0x0003422a) list_double2_pane_g2_cp2

0x249e,	// (0x00034341) list_double2_pane_t1_cp2_ParamLimits

0x249e,	// (0x00034341) list_double2_pane_t1_cp2

0x24b4,	// (0x00034357) list_double2_pane_t2_cp2_ParamLimits

0x24b4,	// (0x00034357) list_double2_pane_t2_cp2

0x24c6,	// (0x00034369) list_double_pane_g1_cp2_ParamLimits

0x24c6,	// (0x00034369) list_double_pane_g1_cp2

0x24d2,	// (0x00034375) list_double_pane_g2_cp2

0x24da,	// (0x0003437d) list_double_pane_t1_cp2_ParamLimits

0x24da,	// (0x0003437d) list_double_pane_t1_cp2

0x24f0,	// (0x00034393) list_double_pane_t2_cp2_ParamLimits

0x24f0,	// (0x00034393) list_double_pane_t2_cp2

0x2518,	// (0x000343bb) list_single_pane_cp2_g3

0x2450,	// (0x000342f3) list_single_pane_g1_cp2_ParamLimits

0x2450,	// (0x000342f3) list_single_pane_g1_cp2

0x245c,	// (0x000342ff) list_single_pane_g2_cp2

0x2528,	// (0x000343cb) list_single_pane_t1_cp2_ParamLimits

0x2528,	// (0x000343cb) list_single_pane_t1_cp2

0x2540,	// (0x000343e3) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x2540,	// (0x000343e3) list_single_large_graphic_pane_g1_cp2

0x254c,	// (0x000343ef) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x254c,	// (0x000343ef) list_single_large_graphic_pane_g2_cp2

0x2558,	// (0x000343fb) list_single_large_graphic_pane_g3_cp2

0x2560,	// (0x00034403) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x2560,	// (0x00034403) list_single_large_graphic_pane_g4_cp1

0x257a,	// (0x0003441d) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x257a,	// (0x0003441d) list_single_large_graphic_pane_t1_cp2

0x50be,	// (0x00036f61) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x50be,	// (0x00036f61) list_single_graphic_heading_pane_g1_cp2

0x5099,	// (0x00036f3c) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5099,	// (0x00036f3c) list_single_graphic_heading_pane_g4_cp2

0x245c,	// (0x000342ff) list_single_graphic_heading_pane_g5_cp2

0x2464,	// (0x00034307) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2464,	// (0x00034307) list_single_graphic_heading_pane_t1_cp2

0x50ca,	// (0x00036f6d) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x50ca,	// (0x00036f6d) list_single_graphic_heading_pane_t2_cp2

0x508d,	// (0x00036f30) list_single_2graphic_pane_g1_cp2_ParamLimits

0x508d,	// (0x00036f30) list_single_2graphic_pane_g1_cp2

0x5099,	// (0x00036f3c) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5099,	// (0x00036f3c) list_single_2graphic_pane_g2_cp2

0x245c,	// (0x000342ff) list_single_2graphic_pane_g3_cp2

0x45b0,	// (0x00036453) list_single_2graphic_pane_g4_cp2_ParamLimits

0x45b0,	// (0x00036453) list_single_2graphic_pane_g4_cp2

0x50a8,	// (0x00036f4b) list_single_2graphic_pane_t1_cp2_ParamLimits

0x50a8,	// (0x00036f4b) list_single_2graphic_pane_t1_cp2

0x0e92,	// (0x00032d35) list_highlight_pane_g10_cp1

0x4c9f,	// (0x00036b42) list_highlight_pane_g1_cp1

0x4ca7,	// (0x00036b4a) list_highlight_pane_g2_cp1

0x4caf,	// (0x00036b52) list_highlight_pane_g3_cp1

0x4cb7,	// (0x00036b5a) list_highlight_pane_g4_cp1

0x4cbf,	// (0x00036b62) list_highlight_pane_g5_cp1

0x4cc7,	// (0x00036b6a) list_highlight_pane_g6_cp1

0x4ccf,	// (0x00036b72) list_highlight_pane_g7_cp1

0x4cd7,	// (0x00036b7a) list_highlight_pane_g8_cp1

0x4cdf,	// (0x00036b82) list_highlight_pane_g9_cp1

0x7eba,	// (0x00039d5d) form_field_slider_pane_t3

0x7ec8,	// (0x00039d6b) form_field_slider_pane_t4

0x4be9,	// (0x00036a8c) slider_form_pane_ParamLimits

0x4be9,	// (0x00036a8c) slider_form_pane

0x1051,	// (0x00032ef4) control_abbreviations

0x1051,	// (0x00032ef4) control_conventions

0x1051,	// (0x00032ef4) control_definitions

0x1051,	// (0x00032ef4) format_table_attribute

0x52c0,	// (0x00037163) bg_popup_preview_window_pane_g9

0x1051,	// (0x00032ef4) format_table_data2

0x1051,	// (0x00032ef4) format_table_data3

0x1051,	// (0x00032ef4) format_table_data_example

0x0008,

0x1051,	// (0x00032ef4) intro_purpose

0xf8ef,	// (0x00041792) bg_popup_preview_window_pane_g

0x1051,	// (0x00032ef4) texts_category

0x1051,	// (0x00032ef4) texts_graphics

0x2590,	// (0x00034433) text_digital

0x4194,	// (0x00036037) text_primary

0x41a3,	// (0x00036046) text_primary_small

0x41b2,	// (0x00036055) text_secondary

0x41c1,	// (0x00036064) text_title

0x5742,	// (0x000375e5) bg_passive_tab_pane_g1_cp3_srt

0x21b8,	// (0x0003405b) bg_passive_tab_pane_g2_cp3_srt

0x5739,	// (0x000375dc) bg_passive_tab_pane_g3_cp3_srt

0x11e5,	// (0x00033088) bg_active_tab_pane_cp3_srt_ParamLimits

0x11e5,	// (0x00033088) bg_active_tab_pane_cp3_srt

0x574b,	// (0x000375ee) tabs_4_active_pane_srt_g1

0x75d0,	// (0x00039473) tabs_4_active_pane_srt_t1_ParamLimits

0x75d0,	// (0x00039473) tabs_4_active_pane_srt_t1

0x5742,	// (0x000375e5) bg_active_tab_pane_g1_cp3_copy1

0x21b8,	// (0x0003405b) bg_active_tab_pane_g2_cp3_copy1

0x5739,	// (0x000375dc) bg_active_tab_pane_g3_cp3_copy1

0x11e5,	// (0x00033088) tabs_2_long_active_pane_srt_ParamLimits

0x11e5,	// (0x00033088) tabs_2_long_active_pane_srt

0x11e5,	// (0x00033088) tabs_2_long_passive_pane_srt_ParamLimits

0x11e5,	// (0x00033088) tabs_2_long_passive_pane_srt

0x7807,	// (0x000396aa) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7807,	// (0x000396aa) bg_passive_tab_pane_cp4_srt

0x5678,	// (0x0003751b) bg_passive_tab_pane_g1_cp4_srt

0x21b8,	// (0x0003405b) bg_passive_tab_pane_g2_cp4_srt

0x566f,	// (0x00037512) bg_passive_tab_pane_g3_cp4_srt

0x4186,	// (0x00036029) bg_active_tab_pane_cp4_srt_ParamLimits

0x4186,	// (0x00036029) bg_active_tab_pane_cp4_srt

0x77f4,	// (0x00039697) tabs_2_long_active_pane_srt_t1_ParamLimits

0x77f4,	// (0x00039697) tabs_2_long_active_pane_srt_t1

0x5678,	// (0x0003751b) bg_active_tab_pane_g1_cp4_srt

0x21b8,	// (0x0003405b) bg_active_tab_pane_g2_cp4_srt

0x566f,	// (0x00037512) bg_active_tab_pane_g3_cp4_srt

0x13aa,	// (0x0003324d) tabs_3_long_active_pane_srt_ParamLimits

0x13aa,	// (0x0003324d) tabs_3_long_active_pane_srt

0x13aa,	// (0x0003324d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x13aa,	// (0x0003324d) tabs_3_long_passive_pane_cp_srt

0x13aa,	// (0x0003324d) tabs_3_long_passive_pane_srt_ParamLimits

0x13aa,	// (0x0003324d) tabs_3_long_passive_pane_srt

0x7807,	// (0x000396aa) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7807,	// (0x000396aa) bg_passive_tab_pane_cp5_srt

0x2335,	// (0x000341d8) bg_passive_tab_pane_g1_cp5_srt

0x21b8,	// (0x0003405b) bg_passive_tab_pane_g2_cp5_srt

0x232c,	// (0x000341cf) bg_passive_tab_pane_g3_cp5_srt

0x4186,	// (0x00036029) bg_active_tab_pane_cp5_srt_ParamLimits

0x4186,	// (0x00036029) bg_active_tab_pane_cp5_srt

0x7813,	// (0x000396b6) tabs_3_long_active_pane_srt_t1_ParamLimits

0x7813,	// (0x000396b6) tabs_3_long_active_pane_srt_t1

0x2335,	// (0x000341d8) bg_active_tab_pane_g1_cp5_srt

0x21b8,	// (0x0003405b) bg_active_tab_pane_g2_cp5_srt

0x232c,	// (0x000341cf) bg_active_tab_pane_g3_cp5_srt

0x5661,	// (0x00037504) navi_text_pane_srt_t1

0x5659,	// (0x000374fc) navi_icon_pane_srt_g1

0x42d9,	// (0x0003617c) midp_editing_number_pane_srt

0x41d0,	// (0x00036073) midp_ticker_pane_srt

0x42e1,	// (0x00036184) midp_ticker_pane_srt_g1

0x42e9,	// (0x0003618c) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0004161a) midp_ticker_pane_srt_g

0x42f1,	// (0x00036194) midp_ticker_pane_srt_t1

0x564a,	// (0x000374ed) midp_editing_number_pane_t1_copy1

0x7a0b,	// (0x000398ae) listscroll_midp_pane

0x7a0b,	// (0x000398ae) midp_form_pane

0x41d8,	// (0x0003607b) midp_info_popup_window_ParamLimits

0x41d8,	// (0x0003607b) midp_info_popup_window

0x197e,	// (0x00033821) bg_popup_sub_pane_cp50_ParamLimits

0x197e,	// (0x00033821) bg_popup_sub_pane_cp50

0x4906,	// (0x000367a9) listscroll_midp_info_pane_ParamLimits

0x4906,	// (0x000367a9) listscroll_midp_info_pane

0x48ee,	// (0x00036791) listscroll_form_midp_pane_ParamLimits

0x48ee,	// (0x00036791) listscroll_form_midp_pane

0x48fa,	// (0x0003679d) scroll_bar_cp050

0x7ea2,	// (0x00039d45) list_midp_pane

0x5f61,	// (0x00037e04) signal_pane_g2_cp

0x4820,	// (0x000366c3) listscroll_midp_info_pane_t1_ParamLimits

0x4820,	// (0x000366c3) listscroll_midp_info_pane_t1

0x4838,	// (0x000366db) listscroll_midp_info_pane_t2_ParamLimits

0x4838,	// (0x000366db) listscroll_midp_info_pane_t2

0x4876,	// (0x00036719) listscroll_midp_info_pane_t3_ParamLimits

0x4876,	// (0x00036719) listscroll_midp_info_pane_t3

0x48b0,	// (0x00036753) listscroll_midp_info_pane_t4_ParamLimits

0x48b0,	// (0x00036753) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x000416cd) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x000416cd) listscroll_midp_info_pane_t

0x1a21,	// (0x000338c4) scroll_pane_cp21

0x47c4,	// (0x00036667) form_midp_field_choice_group_pane

0x47cd,	// (0x00036670) form_midp_field_text_pane

0x4806,	// (0x000366a9) form_midp_field_time_pane

0x480e,	// (0x000366b1) form_midp_gauge_slider_pane

0x4817,	// (0x000366ba) form_midp_gauge_wait_pane

0x1051,	// (0x00032ef4) form_midp_image_pane

0x08b9,	// (0x0003275c) list_single_midp_pane_ParamLimits

0x08b9,	// (0x0003275c) list_single_midp_pane

0x4792,	// (0x00036635) form_midp_field_text_pane_t1

0x45e8,	// (0x0003648b) input_focus_pane_cp050

0x47b3,	// (0x00036656) list_midp_form_text_pane

0x4761,	// (0x00036604) form_midp_field_choice_group_pane_t1

0x476f,	// (0x00036612) input_focus_pane_cp051

0x4783,	// (0x00036626) list_midp_choice_pane

0x1051,	// (0x00032ef4) status_idle_pane

0x4745,	// (0x000365e8) form_midp_field_time_pane_t1

0x0e92,	// (0x00032d35) wait_anim_pane_g2_copy1

0x4753,	// (0x000365f6) form_midp_field_time_pane_t2

0x0001,

0x4243,	// (0x000360e6) aid_navinavi_width_2_pane

0xf825,	// (0x000416c8) form_midp_field_time_pane_t

0x1051,	// (0x00032ef4) input_focus_pane_cp052

0x1051,	// (0x00032ef4) bg_input_focus_pane_cp040

0x4721,	// (0x000365c4) form_midp_gauge_slider_pane_t1

0x472f,	// (0x000365d2) form_midp_gauge_slider_pane_t2

0x7e86,	// (0x00039d29) form_midp_gauge_slider_pane_t3

0x7e94,	// (0x00039d37) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x000416bf) form_midp_gauge_slider_pane_t

0x473d,	// (0x000365e0) form_midp_slider_pane

0x11e5,	// (0x00033088) bg_input_focus_pane_cp041_ParamLimits

0x11e5,	// (0x00033088) bg_input_focus_pane_cp041

0x46f1,	// (0x00036594) form_midp_gauge_wait_pane_t1_ParamLimits

0x46f1,	// (0x00036594) form_midp_gauge_wait_pane_t1

0x4703,	// (0x000365a6) form_midp_gauge_wait_pane_t2_ParamLimits

0x4703,	// (0x000365a6) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x000416ba) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x000416ba) form_midp_gauge_wait_pane_t

0x4715,	// (0x000365b8) form_midp_wait_pane_ParamLimits

0x4715,	// (0x000365b8) form_midp_wait_pane

0x46bb,	// (0x0003655e) form_midp_image_pane_g1

0x46c4,	// (0x00036567) form_midp_image_pane_t1

0x46d3,	// (0x00036576) form_midp_image_pane_t2

0x46e2,	// (0x00036585) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x000416b3) form_midp_image_pane_t

0x46b2,	// (0x00036555) list_single_midp_pane_g1

0x08aa,	// (0x0003274d) list_single_midp_pane_t1

0x469e,	// (0x00036541) list_midp_form_item_pane_ParamLimits

0x469e,	// (0x00036541) list_midp_form_item_pane

0x41eb,	// (0x0003608e) list_midp_form_item_pane_t1

0x41fa,	// (0x0003609d) midp_ticker_pane_g1

0x4206,	// (0x000360a9) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x00041600) midp_ticker_pane_g

0x4212,	// (0x000360b5) midp_ticker_pane_t1

0x564a,	// (0x000374ed) midp_editing_number_pane_t1

0x56d2,	// (0x00037575) midp_editing_number_pane

0x56de,	// (0x00037581) midp_ticker_pane

0x563a,	// (0x000374dd) ai_message_heading_pane

0x1051,	// (0x00032ef4) bg_popup_window_pane_cp14

0x5642,	// (0x000374e5) listscroll_ai_message_pane

0x55c4,	// (0x00037467) ai_message_heading_pane_g1_ParamLimits

0x55c4,	// (0x00037467) ai_message_heading_pane_g1

0x55d0,	// (0x00037473) ai_message_heading_pane_g2_ParamLimits

0x55d0,	// (0x00037473) ai_message_heading_pane_g2

0x55dc,	// (0x0003747f) ai_message_heading_pane_g3_ParamLimits

0x55dc,	// (0x0003747f) ai_message_heading_pane_g3

0x55e8,	// (0x0003748b) ai_message_heading_pane_g4_ParamLimits

0x55e8,	// (0x0003748b) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x000417f4) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x000417f4) ai_message_heading_pane_g

0x55f4,	// (0x00037497) ai_message_heading_pane_t1_ParamLimits

0x55f4,	// (0x00037497) ai_message_heading_pane_t1

0x560e,	// (0x000374b1) ai_message_heading_pane_t2_ParamLimits

0x560e,	// (0x000374b1) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x000417fd) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x000417fd) ai_message_heading_pane_t

0x5620,	// (0x000374c3) bg_popup_heading_pane_cp1_ParamLimits

0x5620,	// (0x000374c3) bg_popup_heading_pane_cp1

0x55b2,	// (0x00037455) list_ai_message_pane_ParamLimits

0x55b2,	// (0x00037455) list_ai_message_pane

0x1a21,	// (0x000338c4) scroll_pane_cp10

0x554e,	// (0x000373f1) list_ai_message_pane_g1

0x5556,	// (0x000373f9) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x000417d1) list_ai_message_pane_g

0x555e,	// (0x00037401) list_ai_message_pane_t1_ParamLimits

0x555e,	// (0x00037401) list_ai_message_pane_t1

0x5573,	// (0x00037416) list_ai_message_pane_t2_ParamLimits

0x5573,	// (0x00037416) list_ai_message_pane_t2

0x5588,	// (0x0003742b) list_ai_message_pane_t3_ParamLimits

0x5588,	// (0x0003742b) list_ai_message_pane_t3

0x559d,	// (0x00037440) list_ai_message_pane_t4_ParamLimits

0x559d,	// (0x00037440) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x000417d6) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x000417d6) list_ai_message_pane_t

0x553c,	// (0x000373df) cell_ai_soft_ind_pane_ParamLimits

0x553c,	// (0x000373df) cell_ai_soft_ind_pane

0x4224,	// (0x000360c7) cell_ai_soft_ind_pane_g1_ParamLimits

0x4224,	// (0x000360c7) cell_ai_soft_ind_pane_g1

0x1051,	// (0x00032ef4) grid_highlight_cp1

0x4231,	// (0x000360d4) text_secondary_cp56_ParamLimits

0x4231,	// (0x000360d4) text_secondary_cp56

0x5511,	// (0x000373b4) example_general_pane_ParamLimits

0x5511,	// (0x000373b4) example_general_pane

0x551d,	// (0x000373c0) example_parent_pane_g1_ParamLimits

0x551d,	// (0x000373c0) example_parent_pane_g1

0x5529,	// (0x000373cc) example_parent_pane_t1_ParamLimits

0x5529,	// (0x000373cc) example_parent_pane_t1

0xd6f7,	// (0x0003f59a) popup_preview_text_window_ParamLimits

0xd6f7,	// (0x0003f59a) popup_preview_text_window

0x2520,	// (0x000343c3) list_single_pane_cp2_g4

0x1486,	// (0x00033329) bg_popup_preview_window_pane_ParamLimits

0x1486,	// (0x00033329) bg_popup_preview_window_pane

0x52c8,	// (0x0003716b) popup_preview_text_window_t1_ParamLimits

0x52c8,	// (0x0003716b) popup_preview_text_window_t1

0x52e6,	// (0x00037189) popup_preview_text_window_t2_ParamLimits

0x52e6,	// (0x00037189) popup_preview_text_window_t2

0x532f,	// (0x000371d2) popup_preview_text_window_t3_ParamLimits

0x532f,	// (0x000371d2) popup_preview_text_window_t3

0x5374,	// (0x00037217) popup_preview_text_window_t4_ParamLimits

0x5374,	// (0x00037217) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x000417a5) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x000417a5) popup_preview_text_window_t

0x53f2,	// (0x00037295) scroll_pane_cp11

0x4568,	// (0x0003640b) bg_popup_preview_window_pane_g1

0x5288,	// (0x0003712b) bg_popup_preview_window_pane_g2

0x5290,	// (0x00037133) bg_popup_preview_window_pane_g3

0x5298,	// (0x0003713b) bg_popup_preview_window_pane_g4

0x52a0,	// (0x00037143) bg_popup_preview_window_pane_g5

0x52a8,	// (0x0003714b) bg_popup_preview_window_pane_g6

0x52b0,	// (0x00037153) bg_popup_preview_window_pane_g7

0x52b8,	// (0x0003715b) bg_popup_preview_window_pane_g8

0xcbb8,	// (0x0003ea5b) aid_popup_width_pane

0xd6d9,	// (0x0003f57c) popup_midp_note_alarm_window_ParamLimits

0xd6d9,	// (0x0003f57c) popup_midp_note_alarm_window

0x18d2,	// (0x00033775) data_form_pane_ParamLimits

0x0581,	// (0x00032424) form_field_data_pane_g1

0x0589,	// (0x0003242c) form_field_data_pane_t1_ParamLimits

0x18de,	// (0x00033781) input_focus_pane_ParamLimits

0x18ec,	// (0x0003378f) data_form_wide_pane_ParamLimits

0x05a1,	// (0x00032444) form_field_data_wide_pane_g1

0x05ad,	// (0x00032450) form_field_data_wide_pane_t1_ParamLimits

0x1645,	// (0x000334e8) input_focus_pane_cp6_ParamLimits

0x77ce,	// (0x00039671) input_popup_find_pane_g1_ParamLimits

0x77ce,	// (0x00039671) input_popup_find_pane_g1

0xcf81,	// (0x0003ee24) aid_navi_side_left_pane

0xcf91,	// (0x0003ee34) aid_navi_side_right_pane

0x4d70,	// (0x00036c13) bg_popup_window_pane_cp30_ParamLimits

0x4d70,	// (0x00036c13) bg_popup_window_pane_cp30

0x4dea,	// (0x00036c8d) popup_midp_note_alarm_window_g1_ParamLimits

0x4dea,	// (0x00036c8d) popup_midp_note_alarm_window_g1

0x4e1a,	// (0x00036cbd) popup_midp_note_alarm_window_t1_ParamLimits

0x4e1a,	// (0x00036cbd) popup_midp_note_alarm_window_t1

0x4ebb,	// (0x00036d5e) popup_midp_note_alarm_window_t2_ParamLimits

0x4ebb,	// (0x00036d5e) popup_midp_note_alarm_window_t2

0x4f69,	// (0x00036e0c) popup_midp_note_alarm_window_t3_ParamLimits

0x4f69,	// (0x00036e0c) popup_midp_note_alarm_window_t3

0x4f91,	// (0x00036e34) popup_midp_note_alarm_window_t4_ParamLimits

0x4f91,	// (0x00036e34) popup_midp_note_alarm_window_t4

0x4fb1,	// (0x00036e54) popup_midp_note_alarm_window_t5_ParamLimits

0x4fb1,	// (0x00036e54) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x00041742) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x00041742) popup_midp_note_alarm_window_t

0x505d,	// (0x00036f00) wait_bar_pane_cp1_ParamLimits

0x505d,	// (0x00036f00) wait_bar_pane_cp1

0x1051,	// (0x00032ef4) wait_anim_pane_copy1

0x1051,	// (0x00032ef4) wait_border_pane_copy1

0x4ab6,	// (0x00036959) wait_border_pane_g1_copy1

0x05c7,	// (0x0003246a) form_field_popup_pane_g1

0x05cf,	// (0x00032472) form_field_popup_pane_t1_ParamLimits

0x18de,	// (0x00033781) input_focus_pane_cp7_ParamLimits

0x18d2,	// (0x00033775) list_form_pane_ParamLimits

0x05e7,	// (0x0003248a) form_field_popup_wide_pane_g1

0x05ef,	// (0x00032492) form_field_popup_wide_pane_t1_ParamLimits

0x18de,	// (0x00033781) input_focus_pane_cp8_ParamLimits

0x190c,	// (0x000337af) list_form_wide_pane_ParamLimits

0x5772,	// (0x00037615) aid_size_cell_graphic_pane

0x067b,	// (0x0003251e) data_form_pane_t1_ParamLimits

0x08e0,	// (0x00032783) data_form_wide_pane_t1_ParamLimits

0x7bfe,	// (0x00039aa1) bg_status_flat_pane

0x754e,	// (0x000393f1) title_pane_t1_ParamLimits

0x11ad,	// (0x00033050) title_pane_t2_ParamLimits

0x11d3,	// (0x00033076) title_pane_t3_ParamLimits

0xf557,	// (0x000413fa) title_pane_t_ParamLimits

0x78b1,	// (0x00039754) level_1_signal_ParamLimits

0x78be,	// (0x00039761) level_2_signal_ParamLimits

0x78cb,	// (0x0003976e) level_3_signal_ParamLimits

0x78d8,	// (0x0003977b) level_4_signal_ParamLimits

0x78e5,	// (0x00039788) level_5_signal_ParamLimits

0x78f2,	// (0x00039795) level_6_signal_ParamLimits

0x78ff,	// (0x000397a2) level_7_signal_ParamLimits

0x78b1,	// (0x00039754) level_1_battery_ParamLimits

0x78be,	// (0x00039761) level_2_battery_ParamLimits

0x78cb,	// (0x0003976e) level_3_battery_ParamLimits

0x78d8,	// (0x0003977b) level_4_battery_ParamLimits

0x78e5,	// (0x00039788) level_5_battery_ParamLimits

0x78f2,	// (0x00039795) level_6_battery_ParamLimits

0x78ff,	// (0x000397a2) level_7_battery_ParamLimits

0x4c9f,	// (0x00036b42) bg_status_flat_pane_g1

0x4ca7,	// (0x00036b4a) bg_status_flat_pane_g2

0x4caf,	// (0x00036b52) bg_status_flat_pane_g3

0x4cb7,	// (0x00036b5a) bg_status_flat_pane_g4

0x4cbf,	// (0x00036b62) bg_status_flat_pane_g5

0x4cc7,	// (0x00036b6a) bg_status_flat_pane_g6

0x4ccf,	// (0x00036b72) bg_status_flat_pane_g7

0x75b6,	// (0x00039459) tabs_3_active_pane_t1_ParamLimits

0x75b6,	// (0x00039459) tabs_3_passive_pane_t1_ParamLimits

0x75d0,	// (0x00039473) tabs_4_active_pane_t1_ParamLimits

0x75d0,	// (0x00039473) tabs_4_1_passive_pane_t1_ParamLimits

0x77e2,	// (0x00039685) tabs_2_active_pane_t1_ParamLimits

0x77e2,	// (0x00039685) tabs_2_passive_pane_t1_ParamLimits

0x4186,	// (0x00036029) bg_active_tab_pane_cp4_ParamLimits

0x77f4,	// (0x00039697) tabs_2_long_active_pane_t1_ParamLimits

0x7807,	// (0x000396aa) bg_passive_tab_pane_cp4_ParamLimits

0xd95b,	// (0x0003f7fe) list_single_midp_graphic_pane_t1_ParamLimits

0x4186,	// (0x00036029) bg_active_tab_pane_cp5_ParamLimits

0x7813,	// (0x000396b6) tabs_3_long_active_pane_t1_ParamLimits

0x7807,	// (0x000396aa) bg_passive_tab_pane_cp5_ParamLimits

0xd95b,	// (0x0003f7fe) list_single_midp_graphic_pane_t1

0x7bfe,	// (0x00039aa1) bg_status_flat_pane_ParamLimits

0x443b,	// (0x000362de) indicator_pane_cp2_ParamLimits

0x443b,	// (0x000362de) indicator_pane_cp2

0x7d41,	// (0x00039be4) navi_pane_srt_ParamLimits

0x7d41,	// (0x00039be4) navi_pane_srt

0x4463,	// (0x00036306) popup_clock_digital_analogue_window_cp1

0x12bb,	// (0x0003315e) indicator_pane_t1

0x41d0,	// (0x00036073) copy_highlight_pane

0x41d0,	// (0x00036073) cursor_graphics_pane

0x41d0,	// (0x00036073) graphic_within_text_pane

0x41d0,	// (0x00036073) link_highlight_pane

0x53b5,	// (0x00037258) popup_preview_text_window_t5_ParamLimits

0x53b5,	// (0x00037258) popup_preview_text_window_t5

0x424b,	// (0x000360ee) cursor_digital_pane

0x424b,	// (0x000360ee) cursor_primary_pane

0x425c,	// (0x000360ff) cursor_primary_small_pane

0x4264,	// (0x00036107) cursor_secondary_pane

0x426c,	// (0x0003610f) cursor_title_pane

0x424b,	// (0x000360ee) link_highlight_digital_pane

0x4253,	// (0x000360f6) link_highlight_primary_pane

0x425c,	// (0x000360ff) link_highlight_primary_small_pane

0x4264,	// (0x00036107) link_highlight_secondary_pane

0x426c,	// (0x0003610f) link_highlight_title_pane

0x424b,	// (0x000360ee) copy_highlight_digital_pane

0x424b,	// (0x000360ee) copy_highlight_primary_pane

0x425c,	// (0x000360ff) copy_highlight_primary_small_pane

0x4264,	// (0x00036107) copy_highlight_secondary_pane

0x426c,	// (0x0003610f) copy_highlight_title_pane

0x4264,	// (0x00036107) graphic_text_digital_pane

0x4d1f,	// (0x00036bc2) graphic_text_primary_pane

0x4d28,	// (0x00036bcb) graphic_text_primary_small_pane

0x425c,	// (0x000360ff) graphic_text_secondary_pane

0x424b,	// (0x000360ee) graphic_text_title_pane

0x7ab2,	// (0x00039955) cursor_primary_pane_g1

0x4d11,	// (0x00036bb4) cursor_text_primary_t1

0x7ee6,	// (0x00039d89) cursor_primary_small_pane_g1

0x4d03,	// (0x00036ba6) cursor_text_primary_small_t1

0x7ede,	// (0x00039d81) cursor_primary_small_pane_g1_copy1

0x4cf5,	// (0x00036b98) cursor_text_primary_small_t1_copy1

0x4ce7,	// (0x00036b8a) cursor_text_title_t1

0x7ed6,	// (0x00039d79) cursor_title_pane_g1

0x7ab2,	// (0x00039955) cursor_digital_pane_g1

0x4274,	// (0x00036117) cursor_text_digital_t1

0x4282,	// (0x00036125) link_highlight_primary_pane_g1

0x4c90,	// (0x00036b33) link_highlight_primary_pane_t1

0x4282,	// (0x00036125) link_highlight_primary_small_pane_g1

0x428a,	// (0x0003612d) link_highlight_primary_small_pane_t1

0x4299,	// (0x0003613c) link_highlight_secondary_pane_g1

0x42a1,	// (0x00036144) link_highlight_secondary_pane_t1

0x4bf5,	// (0x00036a98) link_highlight_title_pane_g1

0x4c0c,	// (0x00036aaf) link_highlight_title_pane_t1

0x4bf5,	// (0x00036a98) link_highlight_digital_pane_g1

0x4bfd,	// (0x00036aa0) link_highlight_digital_pane_t1

0x4ad1,	// (0x00036974) copy_highlight_primary_pane_g1

0x4af7,	// (0x0003699a) copy_highlight_primary_pane_t1

0x4ad1,	// (0x00036974) copy_highlight_primary_small_pane_g1

0x4ae8,	// (0x0003698b) copy_highlight_primary_small_pane_t1

0x42b0,	// (0x00036153) copy_highlight_secondary_pane_g1

0x42b8,	// (0x0003615b) copy_highlight_secondary_pane_t1

0x4ad1,	// (0x00036974) copy_highlight_title_pane_g1

0x4ad9,	// (0x0003697c) copy_highlight_title_pane_t1

0x4ad1,	// (0x00036974) copy_highlight_digital_pane_g1

0x5893,	// (0x00037736) copy_highlight_digital_pane_t1

0x57e7,	// (0x0003768a) graphic_text_primary_pane_g1

0x5877,	// (0x0003771a) graphic_text_primary_pane_t1

0x5885,	// (0x00037728) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0004186c) graphic_text_primary_pane_t

0x5853,	// (0x000376f6) graphic_text_primary_small_pane_g1

0x585b,	// (0x000376fe) graphic_text_primary_small_pane_t1

0x5869,	// (0x0003770c) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x00041867) graphic_text_primary_small_pane_t

0x582f,	// (0x000376d2) graphic_text_secondary_pane_g1

0x5837,	// (0x000376da) graphic_text_secondary_pane_t1

0x5845,	// (0x000376e8) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x00041862) graphic_text_secondary_pane_t

0x580b,	// (0x000376ae) graphic_text_title_pane_g1

0x5813,	// (0x000376b6) graphic_text_title_pane_t1

0x5821,	// (0x000376c4) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0004185d) graphic_text_title_pane_t

0x57e7,	// (0x0003768a) graphic_text_digital_pane_g1

0x57ef,	// (0x00037692) graphic_text_digital_pane_t1

0x57fd,	// (0x000376a0) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x00041858) graphic_text_digital_pane_t

0x11e5,	// (0x00033088) navi_icon_pane_srt_ParamLimits

0x11e5,	// (0x00033088) navi_icon_pane_srt

0x1051,	// (0x00032ef4) navi_midp_pane_srt

0x1051,	// (0x00032ef4) navi_navi_pane_srt

0x11e5,	// (0x00033088) navi_text_pane_srt_ParamLimits

0x11e5,	// (0x00033088) navi_text_pane_srt

0x5241,	// (0x000370e4) navi_navi_icon_text_pane_srt

0x525b,	// (0x000370fe) navi_navi_pane_srt_g1_ParamLimits

0x525b,	// (0x000370fe) navi_navi_pane_srt_g1

0x5249,	// (0x000370ec) navi_navi_pane_srt_g2_ParamLimits

0x5249,	// (0x000370ec) navi_navi_pane_srt_g2

0x0001,

0xf8ea,	// (0x0004178d) navi_navi_pane_srt_g_ParamLimits

0xf8ea,	// (0x0004178d) navi_navi_pane_srt_g

0x526d,	// (0x00037110) navi_navi_tabs_pane_srt

0x5241,	// (0x000370e4) navi_navi_text_pane_srt

0x5241,	// (0x000370e4) navi_navi_volume_pane_srt

0x57d8,	// (0x0003767b) navi_navi_text_pane_srt_t1

0xdcbf,	// (0x0003fb62) navi_navi_volume_pane_srt_g1

0xdcc7,	// (0x0003fb6a) volume_small_pane_srt_ParamLimits

0xdcc7,	// (0x0003fb6a) volume_small_pane_srt

0xd228,	// (0x0003f0cb) volume_small_pane_srt_g1_ParamLimits

0xd228,	// (0x0003f0cb) volume_small_pane_srt_g1

0xd238,	// (0x0003f0db) volume_small_pane_srt_g2_ParamLimits

0xd238,	// (0x0003f0db) volume_small_pane_srt_g2

0xd249,	// (0x0003f0ec) volume_small_pane_srt_g3_ParamLimits

0xd249,	// (0x0003f0ec) volume_small_pane_srt_g3

0xd25a,	// (0x0003f0fd) volume_small_pane_srt_g4_ParamLimits

0xd25a,	// (0x0003f0fd) volume_small_pane_srt_g4

0xd26b,	// (0x0003f10e) volume_small_pane_srt_g5_ParamLimits

0xd26b,	// (0x0003f10e) volume_small_pane_srt_g5

0xd27c,	// (0x0003f11f) volume_small_pane_srt_g6_ParamLimits

0xd27c,	// (0x0003f11f) volume_small_pane_srt_g6

0xd28d,	// (0x0003f130) volume_small_pane_srt_g7_ParamLimits

0xd28d,	// (0x0003f130) volume_small_pane_srt_g7

0xd29e,	// (0x0003f141) volume_small_pane_srt_g8_ParamLimits

0xd29e,	// (0x0003f141) volume_small_pane_srt_g8

0xd2af,	// (0x0003f152) volume_small_pane_srt_g9_ParamLimits

0xd2af,	// (0x0003f152) volume_small_pane_srt_g9

0xd2c0,	// (0x0003f163) volume_small_pane_srt_g10_ParamLimits

0xd2c0,	// (0x0003f163) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x00041605) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x00041605) volume_small_pane_srt_g

0x152f,	// (0x000333d2) query_popup_data_pane_cp2

0x57be,	// (0x00037661) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x57be,	// (0x00037661) navi_navi_icon_text_pane_srt_t1

0x4d1f,	// (0x00036bc2) navi_tabs_2_long_pane_srt

0x4d1f,	// (0x00036bc2) navi_tabs_2_pane_srt

0x4d1f,	// (0x00036bc2) navi_tabs_3_long_pane_srt

0x4d1f,	// (0x00036bc2) navi_tabs_3_pane_srt

0x4d1f,	// (0x00036bc2) navi_tabs_4_pane_srt

0xdc9f,	// (0x0003fb42) tabs_2_active_pane_srt_ParamLimits

0xdc9f,	// (0x0003fb42) tabs_2_active_pane_srt

0xdcaf,	// (0x0003fb52) tabs_2_passive_pane_srt_ParamLimits

0xdcaf,	// (0x0003fb52) tabs_2_passive_pane_srt

0x27b4,	// (0x00034657) bg_passive_tab_pane_cp1_srt_ParamLimits

0x27b4,	// (0x00034657) bg_passive_tab_pane_cp1_srt

0x57a5,	// (0x00037648) bg_passive_tab_pane_g1_cp1_srt

0x21b8,	// (0x0003405b) bg_passive_tab_pane_g2_cp1_srt

0x579c,	// (0x0003763f) bg_passive_tab_pane_g3_cp1_srt

0x11e5,	// (0x00033088) bg_active_tab_pane_cp1_srt_ParamLimits

0x11e5,	// (0x00033088) bg_active_tab_pane_cp1_srt

0x57ae,	// (0x00037651) tabs_2_active_pane_srt_g1

0x77e2,	// (0x00039685) tabs_2_active_pane_srt_t1_ParamLimits

0x77e2,	// (0x00039685) tabs_2_active_pane_srt_t1

0x57a5,	// (0x00037648) bg_active_tab_pane_g1_cp1_srt

0x21b8,	// (0x0003405b) bg_active_tab_pane_g2_cp1_srt

0x579c,	// (0x0003763f) bg_active_tab_pane_g3_cp1_srt

0xdc6c,	// (0x0003fb0f) tabs_3_active_pane_srt_ParamLimits

0xdc6c,	// (0x0003fb0f) tabs_3_active_pane_srt

0xdc7d,	// (0x0003fb20) tabs_3_passive_pane_cp_srt_ParamLimits

0xdc7d,	// (0x0003fb20) tabs_3_passive_pane_cp_srt

0xdc8e,	// (0x0003fb31) tabs_3_passive_pane_srt_ParamLimits

0xdc8e,	// (0x0003fb31) tabs_3_passive_pane_srt

0x27b4,	// (0x00034657) bg_passive_tab_pane_cp2_srt_ParamLimits

0x27b4,	// (0x00034657) bg_passive_tab_pane_cp2_srt

0x42d0,	// (0x00036173) bg_passive_tab_pane_g1_cp2_srt

0x21b8,	// (0x0003405b) bg_passive_tab_pane_g2_cp2_srt

0x42c7,	// (0x0003616a) bg_passive_tab_pane_g3_cp2_srt

0x11e5,	// (0x00033088) bg_active_tab_pane_cp2_srt_ParamLimits

0x11e5,	// (0x00033088) bg_active_tab_pane_cp2_srt

0x5794,	// (0x00037637) tabs_3_active_pane_srt_g1

0x75b6,	// (0x00039459) tabs_3_active_pane_srt_t1_ParamLimits

0x75b6,	// (0x00039459) tabs_3_active_pane_srt_t1

0x42d0,	// (0x00036173) bg_active_tab_pane_g1_cp2_srt

0x21b8,	// (0x0003405b) bg_active_tab_pane_g2_cp2_srt

0x42c7,	// (0x0003616a) bg_active_tab_pane_g3_cp2_srt

0xdc24,	// (0x0003fac7) tabs_4_active_pane_srt_ParamLimits

0xdc24,	// (0x0003fac7) tabs_4_active_pane_srt

0xdc36,	// (0x0003fad9) tabs_4_passive_pane_cp2_srt_ParamLimits

0xdc36,	// (0x0003fad9) tabs_4_passive_pane_cp2_srt

0xd425,	// (0x0003f2c8) aid_size_cell_toolbar

0x7807,	// (0x000396aa) main_idle_act_pane_ParamLimits

0xd594,	// (0x0003f437) popup_large_graphic_colour_window_ParamLimits

0xd848,	// (0x0003f6eb) popup_toolbar_window_ParamLimits

0xd848,	// (0x0003f6eb) popup_toolbar_window

0x2f91,	// (0x00034e34) list_single_graphic_2heading_pane_ParamLimits

0x2f91,	// (0x00034e34) list_single_graphic_2heading_pane

0x1d3b,	// (0x00033bde) aid_size_cell_apps_grid_lsc_pane

0x1d4d,	// (0x00033bf0) aid_size_cell_apps_grid_prt_pane

0x27b4,	// (0x00034657) bg_wml_button_pane_cp1_ParamLimits

0x27b4,	// (0x00034657) bg_wml_button_pane_cp1

0x4792,	// (0x00036635) form_midp_field_text_pane_t1_ParamLimits

0x45e8,	// (0x0003648b) input_focus_pane_cp050_ParamLimits

0x47b3,	// (0x00036656) list_midp_form_text_pane_ParamLimits

0x476f,	// (0x00036612) input_focus_pane_cp051_ParamLimits

0x4783,	// (0x00036626) list_midp_choice_pane_ParamLimits

0x466c,	// (0x0003650f) list_single_2graphic_pane_cp3_ParamLimits

0x466c,	// (0x0003650f) list_single_2graphic_pane_cp3

0x467f,	// (0x00036522) list_single_midp_graphic_pane_ParamLimits

0x467f,	// (0x00036522) list_single_midp_graphic_pane

0xcb46,	// (0x0003e9e9) list_single_graphic_2heading_pane_g1_ParamLimits

0xcb46,	// (0x0003e9e9) list_single_graphic_2heading_pane_g1

0xcb52,	// (0x0003e9f5) list_single_graphic_2heading_pane_g4_ParamLimits

0xcb52,	// (0x0003e9f5) list_single_graphic_2heading_pane_g4

0xcb5e,	// (0x0003ea01) list_single_graphic_2heading_pane_g5_ParamLimits

0xcb5e,	// (0x0003ea01) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x00041658) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x00041658) list_single_graphic_2heading_pane_g

0xcb6a,	// (0x0003ea0d) list_single_graphic_2heading_pane_t1_ParamLimits

0xcb6a,	// (0x0003ea0d) list_single_graphic_2heading_pane_t1

0xcb7e,	// (0x0003ea21) list_single_graphic_2heading_pane_t2_ParamLimits

0xcb7e,	// (0x0003ea21) list_single_graphic_2heading_pane_t2

0xcb98,	// (0x0003ea3b) list_single_graphic_2heading_pane_t3_ParamLimits

0xcb98,	// (0x0003ea3b) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0004165f) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0004165f) list_single_graphic_2heading_pane_t

0x44b2,	// (0x00036355) bg_popup_sub_pane_cp2

0x44d8,	// (0x0003637b) grid_toobar_pane

0xd8d7,	// (0x0003f77a) cell_toolbar_pane_ParamLimits

0xd8d7,	// (0x0003f77a) cell_toolbar_pane

0x450e,	// (0x000363b1) cell_toolbar_pane_g1_ParamLimits

0x450e,	// (0x000363b1) cell_toolbar_pane_g1

0x4520,	// (0x000363c3) cell_toolbar_pane_g2_ParamLimits

0x4520,	// (0x000363c3) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x0004166d) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x0004166d) cell_toolbar_pane_g

0x4542,	// (0x000363e5) grid_highlight_pane_cp2_ParamLimits

0x4542,	// (0x000363e5) grid_highlight_pane_cp2

0x455c,	// (0x000363ff) toolbar_button_pane

0x4568,	// (0x0003640b) toolbar_button_pane_g1

0x4578,	// (0x0003641b) toolbar_button_pane_g2

0x4570,	// (0x00036413) toolbar_button_pane_g3

0x4588,	// (0x0003642b) toolbar_button_pane_g4

0x4580,	// (0x00036423) toolbar_button_pane_g5

0x4590,	// (0x00036433) toolbar_button_pane_g6

0x4598,	// (0x0003643b) toolbar_button_pane_g7

0x45a8,	// (0x0003644b) toolbar_button_pane_g8

0x45a0,	// (0x00036443) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x00041672) toolbar_button_pane_g

0xd906,	// (0x0003f7a9) list_single_2graphic_pane_g1_cp3_ParamLimits

0xd906,	// (0x0003f7a9) list_single_2graphic_pane_g1_cp3

0xd912,	// (0x0003f7b5) list_single_2graphic_pane_g2_cp3_ParamLimits

0xd912,	// (0x0003f7b5) list_single_2graphic_pane_g2_cp3

0xd921,	// (0x0003f7c4) list_single_2graphic_pane_g3_cp3

0xd929,	// (0x0003f7cc) list_single_2graphic_pane_g4_cp3_ParamLimits

0xd929,	// (0x0003f7cc) list_single_2graphic_pane_g4_cp3

0xd935,	// (0x0003f7d8) list_single_2graphic_pane_t1_cp3_ParamLimits

0xd935,	// (0x0003f7d8) list_single_2graphic_pane_t1_cp3

0xd94f,	// (0x0003f7f2) list_single_midp_graphic_pane_g2_ParamLimits

0xd94f,	// (0x0003f7f2) list_single_midp_graphic_pane_g2

0xcb3e,	// (0x0003e9e1) aid_zoom_text_primary

0xd42d,	// (0x0003f2d0) aid_zoom_text_secondary

0x7aea,	// (0x0003998d) status_small_pane_g7_ParamLimits

0x7aea,	// (0x0003998d) status_small_pane_g7

0x7b0d,	// (0x000399b0) status_small_pane_t1_ParamLimits

0x7531,	// (0x000393d4) title_pane_g2

0x0003,

0xf54e,	// (0x000413f1) title_pane_g

0x76f9,	// (0x0003959c) aid_size_cell_colour_1_pane_ParamLimits

0x76f9,	// (0x0003959c) aid_size_cell_colour_1_pane

0x770d,	// (0x000395b0) aid_size_cell_colour_2_pane_ParamLimits

0x770d,	// (0x000395b0) aid_size_cell_colour_2_pane

0x7721,	// (0x000395c4) aid_size_cell_colour_3_pane_ParamLimits

0x7721,	// (0x000395c4) aid_size_cell_colour_3_pane

0x7735,	// (0x000395d8) aid_size_cell_colour_4_pane_ParamLimits

0x7735,	// (0x000395d8) aid_size_cell_colour_4_pane

0xcee3,	// (0x0003ed86) title_pane_stacon_g1_ParamLimits

0xcee3,	// (0x0003ed86) title_pane_stacon_g1

0x4b4e,	// (0x000369f1) popup_note_wait_window_g3_ParamLimits

0x4b4e,	// (0x000369f1) popup_note_wait_window_g3

0x4bc4,	// (0x00036a67) popup_note_wait_window_t5_ParamLimits

0x4bc4,	// (0x00036a67) popup_note_wait_window_t5

0x1051,	// (0x00032ef4) main_feb_china_hwr_fs_writing_pane

0xd4a9,	// (0x0003f34c) popup_feb_china_hwr_fs_window_ParamLimits

0xd4a9,	// (0x0003f34c) popup_feb_china_hwr_fs_window

0xd971,	// (0x0003f814) aid_size_cell_hwr_fs_ParamLimits

0xd971,	// (0x0003f814) aid_size_cell_hwr_fs

0x45e8,	// (0x0003648b) bg_popup_sub_pane_cp3_ParamLimits

0x45e8,	// (0x0003648b) bg_popup_sub_pane_cp3

0xd986,	// (0x0003f829) grid_hwr_fs_pane_ParamLimits

0xd986,	// (0x0003f829) grid_hwr_fs_pane

0xd99a,	// (0x0003f83d) linegrid_hwr_fs_pane_ParamLimits

0xd99a,	// (0x0003f83d) linegrid_hwr_fs_pane

0xd9aa,	// (0x0003f84d) cell_hwr_fs_pane_ParamLimits

0xd9aa,	// (0x0003f84d) cell_hwr_fs_pane

0x45f4,	// (0x00036497) linegrid_hwr_fs_pane_g1_ParamLimits

0x45f4,	// (0x00036497) linegrid_hwr_fs_pane_g1

0x7e5a,	// (0x00039cfd) linegrid_hwr_fs_pane_g2_ParamLimits

0x7e5a,	// (0x00039cfd) linegrid_hwr_fs_pane_g2

0x4600,	// (0x000364a3) linegrid_hwr_fs_pane_g3_ParamLimits

0x4600,	// (0x000364a3) linegrid_hwr_fs_pane_g3

0xd9c8,	// (0x0003f86b) linegrid_hwr_fs_pane_g4_ParamLimits

0xd9c8,	// (0x0003f86b) linegrid_hwr_fs_pane_g4

0xd9e2,	// (0x0003f885) linegrid_hwr_fs_pane_g5_ParamLimits

0xd9e2,	// (0x0003f885) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x00041698) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x00041698) linegrid_hwr_fs_pane_g

0x460c,	// (0x000364af) cell_hwr_fs_pane_g1_ParamLimits

0x460c,	// (0x000364af) cell_hwr_fs_pane_g1

0x4480,	// (0x00036323) cell_hwr_fs_pane_g2_ParamLimits

0x4480,	// (0x00036323) cell_hwr_fs_pane_g2

0x7e6c,	// (0x00039d0f) cell_hwr_fs_pane_g3_ParamLimits

0x7e6c,	// (0x00039d0f) cell_hwr_fs_pane_g3

0x7e79,	// (0x00039d1c) cell_hwr_fs_pane_g4_ParamLimits

0x7e79,	// (0x00039d1c) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x000416a3) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x000416a3) cell_hwr_fs_pane_g

0xd9f8,	// (0x0003f89b) cell_hwr_fs_pane_t1

0x1051,	// (0x00032ef4) grid_highlight_pane_cp6

0x1051,	// (0x00032ef4) main_idle_act2_pane

0x1a08,	// (0x000338ab) aid_inside_area_popup_secondary

0x7f04,	// (0x00039da7) aid_inside_area_window_primary_ParamLimits

0x7f04,	// (0x00039da7) aid_inside_area_window_primary

0x58a2,	// (0x00037745) ai2_news_ticker_pane

0x58aa,	// (0x0003774d) aid_size_cell_ai1_link_ParamLimits

0x58aa,	// (0x0003774d) aid_size_cell_ai1_link

0x8220,	// (0x0003a0c3) popup_ai2_data_window_ParamLimits

0x8220,	// (0x0003a0c3) popup_ai2_data_window

0x58c4,	// (0x00037767) popup_ai2_link_window_ParamLimits

0x58c4,	// (0x00037767) popup_ai2_link_window

0x45e8,	// (0x0003648b) bg_popup_sub_pane_cp4_ParamLimits

0x45e8,	// (0x0003648b) bg_popup_sub_pane_cp4

0x58d8,	// (0x0003777b) grid_ai2_link_pane_ParamLimits

0x58d8,	// (0x0003777b) grid_ai2_link_pane

0x58ef,	// (0x00037792) popup_ai2_link_window_g1_ParamLimits

0x58ef,	// (0x00037792) popup_ai2_link_window_g1

0x58fb,	// (0x0003779e) popup_ai2_link_window_g2_ParamLimits

0x58fb,	// (0x0003779e) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x00041871) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x00041871) popup_ai2_link_window_g

0x590a,	// (0x000377ad) ai2_mp_button_pane

0x5912,	// (0x000377b5) ai2_mp_volume_pane

0x476f,	// (0x00036612) bg_popup_sub_pane_cp5_ParamLimits

0x476f,	// (0x00036612) bg_popup_sub_pane_cp5

0x591a,	// (0x000377bd) heading_ai2_gene_pane_ParamLimits

0x591a,	// (0x000377bd) heading_ai2_gene_pane

0x5926,	// (0x000377c9) list_ai2_gene_pane_ParamLimits

0x5926,	// (0x000377c9) list_ai2_gene_pane

0x596e,	// (0x00037811) cell_ai2_link_pane_ParamLimits

0x596e,	// (0x00037811) cell_ai2_link_pane

0x5984,	// (0x00037827) cell_ai2_link_pane_g1

0x1051,	// (0x00032ef4) grid_highlight_pane_cp7

0xdcdc,	// (0x0003fb7f) ai2_mp_volume_pane_g1

0x5a21,	// (0x000378c4) ai2_mp_volume_pane_g2

0x824b,	// (0x0003a0ee) list_ai2_gene_pane_t1

0x5a19,	// (0x000378bc) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0004188a) ai2_mp_volume_pane_g

0xdce4,	// (0x0003fb87) volume_small_pane_cp3

0x5a29,	// (0x000378cc) aid_size_cell_ai2_button

0x5a31,	// (0x000378d4) grid_ai2_button_pane

0x5a3a,	// (0x000378dd) cell_ai2_button_pane_ParamLimits

0x5a3a,	// (0x000378dd) cell_ai2_button_pane

0x0e92,	// (0x00032d35) cell_ai2_button_pane_g1

0x1051,	// (0x00032ef4) grid_highlight_pane_cp8

0x59d9,	// (0x0003787c) ai2_gene_pane_t1_ParamLimits

0x59d9,	// (0x0003787c) ai2_gene_pane_t1

0xd41b,	// (0x0003f2be) aid_height_parent_landscape

0x8002,	// (0x00039ea5) aid_height_set_list

0x5696,	// (0x00037539) aid_size_parent

0x5772,	// (0x00037615) aid_size_cell_graphic_pane_ParamLimits

0x5936,	// (0x000377d9) popup_ai2_data_window_g1_ParamLimits

0x5936,	// (0x000377d9) popup_ai2_data_window_g1

0x5942,	// (0x000377e5) ai2_news_ticker_pane_g1

0x594a,	// (0x000377ed) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x00041876) ai2_news_ticker_pane_g

0x5952,	// (0x000377f5) ai2_news_ticker_pane_t1

0x5960,	// (0x00037803) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0004187b) ai2_news_ticker_pane_t

0x5753,	// (0x000375f6) heading_ai2_gene_pane_g1

0x598d,	// (0x00037830) heading_ai2_gene_pane_t1_ParamLimits

0x598d,	// (0x00037830) heading_ai2_gene_pane_t1

0x59a2,	// (0x00037845) list_highlight_pane_cp6

0x8234,	// (0x0003a0d7) ai2_gene_pane_ParamLimits

0x8234,	// (0x0003a0d7) ai2_gene_pane

0x8259,	// (0x0003a0fc) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x00041880) list_ai2_gene_pane_t

0x59aa,	// (0x0003784d) list_highlight_pane_cp8_ParamLimits

0x59aa,	// (0x0003784d) list_highlight_pane_cp8

0x59bb,	// (0x0003785e) ai2_gene_pane_g1_ParamLimits

0x59bb,	// (0x0003785e) ai2_gene_pane_g1

0x59cd,	// (0x00037870) ai2_gene_pane_g2_ParamLimits

0x59cd,	// (0x00037870) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x00041885) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x00041885) ai2_gene_pane_g

0x17c6,	// (0x00033669) scroll_pane_cp12

0xd3d2,	// (0x0003f275) control_pane_t3_ParamLimits

0xd3d2,	// (0x0003f275) control_pane_t3

0x7afe,	// (0x000399a1) status_small_pane_g8_ParamLimits

0x7afe,	// (0x000399a1) status_small_pane_g8

0xd569,	// (0x0003f40c) popup_find_window_ParamLimits

0xd6eb,	// (0x0003f58e) popup_note_image_window_ParamLimits

0x0204,	// (0x000320a7) list_double2_graphic_pane_vc_g1_ParamLimits

0x0204,	// (0x000320a7) list_double2_graphic_pane_vc_g1

0x182a,	// (0x000336cd) list_double2_graphic_pane_vc_g2_ParamLimits

0x182a,	// (0x000336cd) list_double2_graphic_pane_vc_g2

0x1836,	// (0x000336d9) list_double2_graphic_pane_vc_g3_ParamLimits

0x1836,	// (0x000336d9) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x00041666) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x00041666) list_double2_graphic_pane_vc_g

0x01dc,	// (0x0003207f) list_double2_graphic_pane_vc_t1_ParamLimits

0x01dc,	// (0x0003207f) list_double2_graphic_pane_vc_t1

0x182a,	// (0x000336cd) list_single_heading_pane_vc_g1_ParamLimits

0x182a,	// (0x000336cd) list_single_heading_pane_vc_g1

0x1836,	// (0x000336d9) list_single_heading_pane_vc_g2_ParamLimits

0x1836,	// (0x000336d9) list_single_heading_pane_vc_g2

0x0001,

0xf5f1,	// (0x00041494) list_single_heading_pane_vc_g_ParamLimits

0xf5f1,	// (0x00041494) list_single_heading_pane_vc_g

0x0820,	// (0x000326c3) list_single_heading_pane_vc_t1_ParamLimits

0x0820,	// (0x000326c3) list_single_heading_pane_vc_t1

0x0836,	// (0x000326d9) list_single_heading_pane_vc_t2_ParamLimits

0x0836,	// (0x000326d9) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x00041687) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x00041687) list_single_heading_pane_vc_t

0x2cc6,	// (0x00034b69) list_setting_number_pane_vc_g1_ParamLimits

0x2cc6,	// (0x00034b69) list_setting_number_pane_vc_g1

0x2cd2,	// (0x00034b75) list_setting_number_pane_vc_g2_ParamLimits

0x2cd2,	// (0x00034b75) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x0004168c) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x0004168c) list_setting_number_pane_vc_g

0x0848,	// (0x000326eb) list_setting_number_pane_vc_t1_ParamLimits

0x0848,	// (0x000326eb) list_setting_number_pane_vc_t1

0x085c,	// (0x000326ff) list_setting_number_pane_vc_t2_ParamLimits

0x085c,	// (0x000326ff) list_setting_number_pane_vc_t2

0x0878,	// (0x0003271b) list_setting_number_pane_vc_t3_ParamLimits

0x0878,	// (0x0003271b) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x00041691) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x00041691) list_setting_number_pane_vc_t

0x089e,	// (0x00032741) set_value_pane_vc_ParamLimits

0x089e,	// (0x00032741) set_value_pane_vc

0x2f91,	// (0x00034e34) list_double2_graphic_pane_vc_ParamLimits

0x2f91,	// (0x00034e34) list_double2_graphic_pane_vc

0x56f1,	// (0x00037594) list_double2_large_graphic_pane_vc_ParamLimits

0x56f1,	// (0x00037594) list_double2_large_graphic_pane_vc

0x2f91,	// (0x00034e34) list_double2_pane_vc_ParamLimits

0x2f91,	// (0x00034e34) list_double2_pane_vc

0x2f91,	// (0x00034e34) list_double_graphic_heading_pane_vc_ParamLimits

0x2f91,	// (0x00034e34) list_double_graphic_heading_pane_vc

0x2f91,	// (0x00034e34) list_double_graphic_pane_vc_ParamLimits

0x2f91,	// (0x00034e34) list_double_graphic_pane_vc

0x2f91,	// (0x00034e34) list_double_heading_pane_vc_ParamLimits

0x2f91,	// (0x00034e34) list_double_heading_pane_vc

0x2fa4,	// (0x00034e47) list_double_large_graphic_pane_vc_ParamLimits

0x2fa4,	// (0x00034e47) list_double_large_graphic_pane_vc

0x2f91,	// (0x00034e34) list_double_number_pane_vc_ParamLimits

0x2f91,	// (0x00034e34) list_double_number_pane_vc

0x2f91,	// (0x00034e34) list_double_pane_vc_ParamLimits

0x2f91,	// (0x00034e34) list_double_pane_vc

0x2f91,	// (0x00034e34) list_double_time_pane_vc_ParamLimits

0x2f91,	// (0x00034e34) list_double_time_pane_vc

0x2f91,	// (0x00034e34) list_setting_number_pane_vc_ParamLimits

0x2f91,	// (0x00034e34) list_setting_number_pane_vc

0x2f91,	// (0x00034e34) list_setting_pane_vc_ParamLimits

0x2f91,	// (0x00034e34) list_setting_pane_vc

0x2f91,	// (0x00034e34) list_single_graphic_heading_pane_vc_ParamLimits

0x2f91,	// (0x00034e34) list_single_graphic_heading_pane_vc

0x2f91,	// (0x00034e34) list_single_heading_pane_vc_ParamLimits

0x2f91,	// (0x00034e34) list_single_heading_pane_vc

0x0925,	// (0x000327c8) list_single_number_heading_pane_vc_ParamLimits

0x0925,	// (0x000327c8) list_single_number_heading_pane_vc

0x0204,	// (0x000320a7) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0204,	// (0x000320a7) list_double_graphic_heading_pane_vc_g1

0x182a,	// (0x000336cd) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x182a,	// (0x000336cd) list_double_graphic_heading_pane_vc_g2

0x1836,	// (0x000336d9) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x1836,	// (0x000336d9) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x00041666) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x00041666) list_double_graphic_heading_pane_vc_g

0x0978,	// (0x0003281b) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0978,	// (0x0003281b) list_double_graphic_heading_pane_vc_t1

0x098e,	// (0x00032831) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x098e,	// (0x00032831) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ee,	// (0x00041891) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ee,	// (0x00041891) list_double_graphic_heading_pane_vc_t

0x2cc6,	// (0x00034b69) list_setting_pane_vc_g1_ParamLimits

0x2cc6,	// (0x00034b69) list_setting_pane_vc_g1

0x2cd2,	// (0x00034b75) list_setting_pane_vc_g2_ParamLimits

0x2cd2,	// (0x00034b75) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x0004168c) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x0004168c) list_setting_pane_vc_g

0x09a6,	// (0x00032849) list_setting_pane_vc_t1_ParamLimits

0x09a6,	// (0x00032849) list_setting_pane_vc_t1

0x09ba,	// (0x0003285d) list_setting_pane_vc_t2_ParamLimits

0x09ba,	// (0x0003285d) list_setting_pane_vc_t2

0x0001,

0xfa31,	// (0x000418d4) list_setting_pane_vc_t_ParamLimits

0xfa31,	// (0x000418d4) list_setting_pane_vc_t

0x089e,	// (0x00032741) set_value_pane_cp_vc_ParamLimits

0x089e,	// (0x00032741) set_value_pane_cp_vc

0x182a,	// (0x000336cd) list_single_number_heading_pane_vc_g1_ParamLimits

0x182a,	// (0x000336cd) list_single_number_heading_pane_vc_g1

0x1836,	// (0x000336d9) list_single_number_heading_pane_vc_g2_ParamLimits

0x1836,	// (0x000336d9) list_single_number_heading_pane_vc_g2

0x0001,

0xf5f1,	// (0x00041494) list_single_number_heading_pane_vc_g_ParamLimits

0xf5f1,	// (0x00041494) list_single_number_heading_pane_vc_g

0x0820,	// (0x000326c3) list_single_number_heading_pane_vc_t1_ParamLimits

0x0820,	// (0x000326c3) list_single_number_heading_pane_vc_t1

0x09ce,	// (0x00032871) list_single_number_heading_pane_vc_t2_ParamLimits

0x09ce,	// (0x00032871) list_single_number_heading_pane_vc_t2

0x09e0,	// (0x00032883) list_single_number_heading_pane_vc_t3_ParamLimits

0x09e0,	// (0x00032883) list_single_number_heading_pane_vc_t3

0x0002,

0xfa36,	// (0x000418d9) list_single_number_heading_pane_vc_t_ParamLimits

0xfa36,	// (0x000418d9) list_single_number_heading_pane_vc_t

0x0204,	// (0x000320a7) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0204,	// (0x000320a7) list_single_graphic_heading_pane_vc_g1

0x182a,	// (0x000336cd) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x182a,	// (0x000336cd) list_single_graphic_heading_pane_vc_g4

0x1836,	// (0x000336d9) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x1836,	// (0x000336d9) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x00041666) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x00041666) list_single_graphic_heading_pane_vc_g

0x0820,	// (0x000326c3) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0820,	// (0x000326c3) list_single_graphic_heading_pane_vc_t1

0x09f2,	// (0x00032895) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x09f2,	// (0x00032895) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3d,	// (0x000418e0) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x000418e0) list_single_graphic_heading_pane_vc_t

0x182a,	// (0x000336cd) list_double2_pane_vc_g1_ParamLimits

0x182a,	// (0x000336cd) list_double2_pane_vc_g1

0x1836,	// (0x000336d9) list_double2_pane_vc_g2_ParamLimits

0x1836,	// (0x000336d9) list_double2_pane_vc_g2

0x0001,

0xf5f1,	// (0x00041494) list_double2_pane_vc_g_ParamLimits

0xf5f1,	// (0x00041494) list_double2_pane_vc_g

0x015f,	// (0x00032002) list_double2_pane_vc_t1_ParamLimits

0x015f,	// (0x00032002) list_double2_pane_vc_t1

0x17fe,	// (0x000336a1) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x17fe,	// (0x000336a1) list_double2_large_graphic_pane_vc_g1

0x180a,	// (0x000336ad) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x180a,	// (0x000336ad) list_double2_large_graphic_pane_vc_g2

0x1816,	// (0x000336b9) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x1816,	// (0x000336b9) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x0004148d) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x0004148d) list_double2_large_graphic_pane_vc_g

0x0149,	// (0x00031fec) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0149,	// (0x00031fec) list_double2_large_graphic_pane_vc_t1

0x30f0,	// (0x00034f93) list_double_time_pane_vc_g1_ParamLimits

0x30f0,	// (0x00034f93) list_double_time_pane_vc_g1

0x30fc,	// (0x00034f9f) list_double_time_pane_vc_g2_ParamLimits

0x30fc,	// (0x00034f9f) list_double_time_pane_vc_g2

0x0001,

0xfa42,	// (0x000418e5) list_double_time_pane_vc_g_ParamLimits

0xfa42,	// (0x000418e5) list_double_time_pane_vc_g

0x0a04,	// (0x000328a7) list_double_time_pane_vc_t1_ParamLimits

0x0a04,	// (0x000328a7) list_double_time_pane_vc_t1

0x0a22,	// (0x000328c5) list_double_time_pane_vc_t2_ParamLimits

0x0a22,	// (0x000328c5) list_double_time_pane_vc_t2

0x0a66,	// (0x00032909) list_double_time_pane_vc_t3_ParamLimits

0x0a66,	// (0x00032909) list_double_time_pane_vc_t3

0x0a78,	// (0x0003291b) list_double_time_pane_vc_t4_ParamLimits

0x0a78,	// (0x0003291b) list_double_time_pane_vc_t4

0x0003,

0xfa47,	// (0x000418ea) list_double_time_pane_vc_t_ParamLimits

0xfa47,	// (0x000418ea) list_double_time_pane_vc_t

0x182a,	// (0x000336cd) list_double_pane_vc_g1_ParamLimits

0x182a,	// (0x000336cd) list_double_pane_vc_g1

0x1836,	// (0x000336d9) list_double_pane_vc_g2_ParamLimits

0x1836,	// (0x000336d9) list_double_pane_vc_g2

0x0001,

0xf5f1,	// (0x00041494) list_double_pane_vc_g_ParamLimits

0xf5f1,	// (0x00041494) list_double_pane_vc_g

0x0a8a,	// (0x0003292d) list_double_pane_vc_t1_ParamLimits

0x0a8a,	// (0x0003292d) list_double_pane_vc_t1

0x0a9c,	// (0x0003293f) list_double_pane_vc_t2_ParamLimits

0x0a9c,	// (0x0003293f) list_double_pane_vc_t2

0x0001,

0xfa50,	// (0x000418f3) list_double_pane_vc_t_ParamLimits

0xfa50,	// (0x000418f3) list_double_pane_vc_t

0x182a,	// (0x000336cd) list_double_number_pane_vc_g1_ParamLimits

0x182a,	// (0x000336cd) list_double_number_pane_vc_g1

0x1836,	// (0x000336d9) list_double_number_pane_vc_g2_ParamLimits

0x1836,	// (0x000336d9) list_double_number_pane_vc_g2

0x0001,

0xf5f1,	// (0x00041494) list_double_number_pane_vc_g_ParamLimits

0xf5f1,	// (0x00041494) list_double_number_pane_vc_g

0x0ab2,	// (0x00032955) list_double_number_pane_vc_t1_ParamLimits

0x0ab2,	// (0x00032955) list_double_number_pane_vc_t1

0x0ac6,	// (0x00032969) list_double_number_pane_vc_t2_ParamLimits

0x0ac6,	// (0x00032969) list_double_number_pane_vc_t2

0x0ad8,	// (0x0003297b) list_double_number_pane_vc_t3_ParamLimits

0x0ad8,	// (0x0003297b) list_double_number_pane_vc_t3

0x0002,

0xfa55,	// (0x000418f8) list_double_number_pane_vc_t_ParamLimits

0xfa55,	// (0x000418f8) list_double_number_pane_vc_t

0x3108,	// (0x00034fab) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3108,	// (0x00034fab) list_double_large_graphic_pane_vc_g1

0x3130,	// (0x00034fd3) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3130,	// (0x00034fd3) list_double_large_graphic_pane_vc_g2

0x3144,	// (0x00034fe7) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3144,	// (0x00034fe7) list_double_large_graphic_pane_vc_g3

0x0aee,	// (0x00032991) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0aee,	// (0x00032991) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5c,	// (0x000418ff) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5c,	// (0x000418ff) list_double_large_graphic_pane_vc_g

0x0afe,	// (0x000329a1) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0afe,	// (0x000329a1) list_double_large_graphic_pane_vc_t1

0x0b18,	// (0x000329bb) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0b18,	// (0x000329bb) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa65,	// (0x00041908) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa65,	// (0x00041908) list_double_large_graphic_pane_vc_t

0x182a,	// (0x000336cd) list_double_heading_pane_vc_g1_ParamLimits

0x182a,	// (0x000336cd) list_double_heading_pane_vc_g1

0x1836,	// (0x000336d9) list_double_heading_pane_vc_g2_ParamLimits

0x1836,	// (0x000336d9) list_double_heading_pane_vc_g2

0x0001,

0xf5f1,	// (0x00041494) list_double_heading_pane_vc_g_ParamLimits

0xf5f1,	// (0x00041494) list_double_heading_pane_vc_g

0x0b38,	// (0x000329db) list_double_heading_pane_vc_t1_ParamLimits

0x0b38,	// (0x000329db) list_double_heading_pane_vc_t1

0x0820,	// (0x000326c3) list_double_heading_pane_vc_t2_ParamLimits

0x0820,	// (0x000326c3) list_double_heading_pane_vc_t2

0x0001,

0xfa6a,	// (0x0004190d) list_double_heading_pane_vc_t_ParamLimits

0xfa6a,	// (0x0004190d) list_double_heading_pane_vc_t

0x0b4a,	// (0x000329ed) list_double_graphic_pane_vc_g1_ParamLimits

0x0b4a,	// (0x000329ed) list_double_graphic_pane_vc_g1

0x3153,	// (0x00034ff6) list_double_graphic_pane_vc_g2_ParamLimits

0x3153,	// (0x00034ff6) list_double_graphic_pane_vc_g2

0x182a,	// (0x000336cd) list_double_graphic_pane_vc_g3_ParamLimits

0x182a,	// (0x000336cd) list_double_graphic_pane_vc_g3

0x0003,

0xfa6f,	// (0x00041912) list_double_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x00041912) list_double_graphic_pane_vc_g

0x0b56,	// (0x000329f9) list_double_graphic_pane_vc_t1_ParamLimits

0x0b56,	// (0x000329f9) list_double_graphic_pane_vc_t1

0x0b74,	// (0x00032a17) list_double_graphic_pane_vc_t2_ParamLimits

0x0b74,	// (0x00032a17) list_double_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x0004191b) list_double_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x0004191b) list_double_graphic_pane_vc_t

0xcbc0,	// (0x0003ea63) aid_size_cell_fastswap

0xcbc8,	// (0x0003ea6b) aid_size_cell_touch_ParamLimits

0xcbc8,	// (0x0003ea6b) aid_size_cell_touch

0xcd17,	// (0x0003ebba) popup_fast_swap_wide_window_ParamLimits

0xcd17,	// (0x0003ebba) popup_fast_swap_wide_window

0xcddd,	// (0x0003ec80) touch_pane_ParamLimits

0xcddd,	// (0x0003ec80) touch_pane

0x04dd,	// (0x00032380) button_value_adjust_pane_cp2

0x04e5,	// (0x00032388) button_value_adjust_pane_cp4

0x0505,	// (0x000323a8) form_field_data_pane_cp2

0x0524,	// (0x000323c7) form_field_data_wide_pane_cp2

0x1d85,	// (0x00033c28) bg_scroll_pane_ParamLimits

0xd004,	// (0x0003eea7) scroll_handle_pane_ParamLimits

0xd018,	// (0x0003eebb) scroll_sc2_down_pane_ParamLimits

0xd018,	// (0x0003eebb) scroll_sc2_down_pane

0x1ddf,	// (0x00033c82) scroll_sc2_up_pane_ParamLimits

0x1ddf,	// (0x00033c82) scroll_sc2_up_pane

0x837b,	// (0x0003a21e) grid_wheel_folder_pane_g1_ParamLimits

0x837b,	// (0x0003a21e) grid_wheel_folder_pane_g1

0xd1cc,	// (0x0003f06f) clock_nsta_pane_cp2_ParamLimits

0xd1cc,	// (0x0003f06f) clock_nsta_pane_cp2

0x7a0b,	// (0x000398ae) listscroll_midp_pane_ParamLimits

0x7a17,	// (0x000398ba) midp_canvas_pane

0xd413,	// (0x0003f2b6) nsta_clock_indic_pane

0x4385,	// (0x00036228) listscroll_form_pane_vc

0x438d,	// (0x00036230) listscroll_set_pane_vc_ParamLimits

0x438d,	// (0x00036230) listscroll_set_pane_vc

0x7c1a,	// (0x00039abd) clock_nsta_pane

0x7c27,	// (0x00039aca) indicator_nsta_pane

0x44b2,	// (0x00036355) bg_popup_sub_pane_cp2_ParamLimits

0x44c6,	// (0x00036369) find_pane_cp2_ParamLimits

0x44c6,	// (0x00036369) find_pane_cp2

0x44d8,	// (0x0003637b) grid_toobar_pane_ParamLimits

0x45bc,	// (0x0003645f) list_form_gen_pane_vc_ParamLimits

0x45bc,	// (0x0003645f) list_form_gen_pane_vc

0x45d2,	// (0x00036475) scroll_pane_cp8_vc_ParamLimits

0x45d2,	// (0x00036475) scroll_pane_cp8_vc

0x4622,	// (0x000364c5) data_form_wide_pane_vc_ParamLimits

0x4622,	// (0x000364c5) data_form_wide_pane_vc

0x462e,	// (0x000364d1) form_field_data_wide_pane_vc_g1

0x4636,	// (0x000364d9) form_field_data_wide_pane_vc_t1_ParamLimits

0x4636,	// (0x000364d9) form_field_data_wide_pane_vc_t1

0x18de,	// (0x00033781) input_focus_pane_cp6_vc_ParamLimits

0x18de,	// (0x00033781) input_focus_pane_cp6_vc

0x7ea2,	// (0x00039d45) list_midp_pane_ParamLimits

0x7eae,	// (0x00039d51) scroll_pane_cp16_ParamLimits

0x7eae,	// (0x00039d51) scroll_pane_cp16

0x4934,	// (0x000367d7) button_value_adjust_pane_ParamLimits

0x4934,	// (0x000367d7) button_value_adjust_pane

0x800e,	// (0x00039eb1) button_value_adjust_pane_cp6_ParamLimits

0x800e,	// (0x00039eb1) button_value_adjust_pane_cp6

0x8116,	// (0x00039fb9) settings_code_pane_cp_ParamLimits

0x8116,	// (0x00039fb9) settings_code_pane_cp

0x0e92,	// (0x00032d35) cell_touch_pane_g1

0x0e92,	// (0x00032d35) cell_touch_pane_g2

0x0001,

0xf708,	// (0x000415ab) cell_touch_pane_g

0x8267,	// (0x0003a10a) cell_touch_pane_cp_ParamLimits

0x8267,	// (0x0003a10a) cell_touch_pane_cp

0x8277,	// (0x0003a11a) cell_touch_pane_ParamLimits

0x8277,	// (0x0003a11a) cell_touch_pane

0x0e92,	// (0x00032d35) scroll_sc2_down_pane_g1

0x0e92,	// (0x00032d35) scroll_sc2_up_pane_g1

0x1051,	// (0x00032ef4) bg_set_opt_pane_cp4_vc

0x5a4c,	// (0x000378ef) list_set_graphic_pane_vc_g1_ParamLimits

0x5a4c,	// (0x000378ef) list_set_graphic_pane_vc_g1

0x5a58,	// (0x000378fb) list_set_graphic_pane_vc_g2_ParamLimits

0x5a58,	// (0x000378fb) list_set_graphic_pane_vc_g2

0x0001,

0xf9f3,	// (0x00041896) list_set_graphic_pane_vc_g_ParamLimits

0xf9f3,	// (0x00041896) list_set_graphic_pane_vc_g

0x5a64,	// (0x00037907) text_primary_small_cp13_vc_ParamLimits

0x5a64,	// (0x00037907) text_primary_small_cp13_vc

0x5a7c,	// (0x0003791f) list_set_graphic_pane_vc_ParamLimits

0x5a7c,	// (0x0003791f) list_set_graphic_pane_vc

0x1051,	// (0x00032ef4) input_focus_pane_cp2_vc

0x0e92,	// (0x00032d35) setting_code_pane_vc_g1

0x5a8f,	// (0x00037932) setting_code_pane_vc_t1

0x5a9d,	// (0x00037940) set_text_pane_vc_t1_ParamLimits

0x5a9d,	// (0x00037940) set_text_pane_vc_t1

0x1051,	// (0x00032ef4) input_focus_pane_cp1_vc

0x5ab8,	// (0x0003795b) list_set_text_pane_vc

0x0e92,	// (0x00032d35) setting_text_pane_vc_g1

0x1051,	// (0x00032ef4) bg_set_opt_pane_cp2_vc

0x5ac2,	// (0x00037965) setting_slider_graphic_pane_vc_g1

0x5aca,	// (0x0003796d) setting_slider_graphic_pane_vc_t1

0x5ad8,	// (0x0003797b) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f8,	// (0x0004189b) setting_slider_graphic_pane_vc_t

0x5ae6,	// (0x00037989) slider_set_pane_cp_vc

0x5aee,	// (0x00037991) slider_set_pane_vc_g1

0x5af7,	// (0x0003799a) slider_set_pane_vc_g2

0x0006,

0xf9fd,	// (0x000418a0) slider_set_pane_vc_g

0x192d,	// (0x000337d0) set_opt_bg_pane_g1_copy1

0x1935,	// (0x000337d8) set_opt_bg_pane_g2_copy1

0x5b23,	// (0x000379c6) set_opt_bg_pane_g3_copy1

0x1945,	// (0x000337e8) set_opt_bg_pane_g4_copy1

0x194d,	// (0x000337f0) set_opt_bg_pane_g5_copy1

0x1955,	// (0x000337f8) set_opt_bg_pane_g6_copy1

0x5b2b,	// (0x000379ce) set_opt_bg_pane_g7_copy1

0x5b33,	// (0x000379d6) set_opt_bg_pane_g8_copy1

0x5b3b,	// (0x000379de) set_opt_bg_pane_g9_copy1

0x1051,	// (0x00032ef4) bg_set_opt_pane_cp_vc

0x5b43,	// (0x000379e6) setting_slider_pane_vc_t1

0x5aca,	// (0x0003796d) setting_slider_pane_vc_t2

0x5ad8,	// (0x0003797b) setting_slider_pane_vc_t3

0x0002,

0xfa0c,	// (0x000418af) setting_slider_pane_vc_t

0x5ae6,	// (0x00037989) slider_set_pane_vc

0xda06,	// (0x0003f8a9) volume_set_pane_vc_g1

0xdced,	// (0x0003fb90) volume_set_pane_vc_g2

0xdcf6,	// (0x0003fb99) volume_set_pane_vc_g3

0xdcff,	// (0x0003fba2) volume_set_pane_vc_g4

0xdd08,	// (0x0003fbab) volume_set_pane_vc_g5

0xdd11,	// (0x0003fbb4) volume_set_pane_vc_g6

0xdd1a,	// (0x0003fbbd) volume_set_pane_vc_g7

0xdd23,	// (0x0003fbc6) volume_set_pane_vc_g8

0xdd2c,	// (0x0003fbcf) volume_set_pane_vc_g9

0xdd35,	// (0x0003fbd8) volume_set_pane_vc_g10

0x0009,

0xfa13,	// (0x000418b6) volume_set_pane_vc_g

0x5b52,	// (0x000379f5) volume_set_pane_vc

0x5b5a,	// (0x000379fd) button_value_adjust_pane_cp1_vc

0x5b64,	// (0x00037a07) list_highlight_pane_cp2_vc

0x5b6d,	// (0x00037a10) list_set_pane_vc_ParamLimits

0x5b6d,	// (0x00037a10) list_set_pane_vc

0x5bbf,	// (0x00037a62) main_pane_set_vc_t1_ParamLimits

0x5bbf,	// (0x00037a62) main_pane_set_vc_t1

0x5bd4,	// (0x00037a77) main_pane_set_vc_t2_ParamLimits

0x5bd4,	// (0x00037a77) main_pane_set_vc_t2

0x5be6,	// (0x00037a89) main_pane_set_vc_t3_ParamLimits

0x5be6,	// (0x00037a89) main_pane_set_vc_t3

0x5bf8,	// (0x00037a9b) main_pane_set_vc_t4_ParamLimits

0x5bf8,	// (0x00037a9b) main_pane_set_vc_t4

0x0003,

0xfa28,	// (0x000418cb) main_pane_set_vc_t_ParamLimits

0xfa28,	// (0x000418cb) main_pane_set_vc_t

0x5c0a,	// (0x00037aad) setting_code_pane_vc_ParamLimits

0x5c0a,	// (0x00037aad) setting_code_pane_vc

0x5c19,	// (0x00037abc) setting_slider_graphic_pane_vc

0x5c19,	// (0x00037abc) setting_slider_pane_vc

0x5c19,	// (0x00037abc) setting_text_pane_vc

0x5c19,	// (0x00037abc) setting_volume_pane_vc

0x5c21,	// (0x00037ac4) scroll_pane_cp121_vc

0x18c9,	// (0x0003376c) set_content_pane_vc

0x5c29,	// (0x00037acc) button_value_adjust_pane_g1

0x5c32,	// (0x00037ad5) button_value_adjust_pane_g2

0x0001,

0xfa7d,	// (0x00041920) button_value_adjust_pane_g

0x5c3b,	// (0x00037ade) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5c3b,	// (0x00037ade) form_field_slider_wide_pane_vc_t1

0x5c51,	// (0x00037af4) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5c51,	// (0x00037af4) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa82,	// (0x00041925) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa82,	// (0x00041925) form_field_slider_wide_pane_vc_t

0x13aa,	// (0x0003324d) input_focus_pane_cp10_vc_ParamLimits

0x13aa,	// (0x0003324d) input_focus_pane_cp10_vc

0x5c7c,	// (0x00037b1f) slider_cont_pane_cp1_vc_ParamLimits

0x5c7c,	// (0x00037b1f) slider_cont_pane_cp1_vc

0x5aee,	// (0x00037991) slider_form_pane_g1_cp2

0x5af7,	// (0x0003799a) slider_form_pane_g2_cp2

0x5c97,	// (0x00037b3a) form_field_slider_pane_vc_t3

0x5ca5,	// (0x00037b48) form_field_slider_pane_vc_t4

0x5cb3,	// (0x00037b56) slider_form_pane_vc_ParamLimits

0x5cb3,	// (0x00037b56) slider_form_pane_vc

0x5cc0,	// (0x00037b63) form_field_slider_pane_vc_t1_ParamLimits

0x5cc0,	// (0x00037b63) form_field_slider_pane_vc_t1

0x5cd6,	// (0x00037b79) form_field_slider_pane_vc_t2_ParamLimits

0x5cd6,	// (0x00037b79) form_field_slider_pane_vc_t2

0x0001,

0xfa94,	// (0x00041937) form_field_slider_pane_vc_t_ParamLimits

0xfa94,	// (0x00041937) form_field_slider_pane_vc_t

0x13aa,	// (0x0003324d) input_focus_pane_cp9_vc_ParamLimits

0x13aa,	// (0x0003324d) input_focus_pane_cp9_vc

0x5ce8,	// (0x00037b8b) slider_cont_pane_vc_ParamLimits

0x5ce8,	// (0x00037b8b) slider_cont_pane_vc

0x5cfa,	// (0x00037b9d) list_form_graphic_pane_cp_vc_ParamLimits

0x5cfa,	// (0x00037b9d) list_form_graphic_pane_cp_vc

0x462e,	// (0x000364d1) form_field_popup_wide_pane_vc_g1

0x5d0f,	// (0x00037bb2) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5d0f,	// (0x00037bb2) form_field_popup_wide_pane_vc_t1

0x18de,	// (0x00033781) input_focus_pane_cp8_vc_ParamLimits

0x18de,	// (0x00033781) input_focus_pane_cp8_vc

0x5d4e,	// (0x00037bf1) list_form_wide_pane_vc_ParamLimits

0x5d4e,	// (0x00037bf1) list_form_wide_pane_vc

0x5d5a,	// (0x00037bfd) list_form_graphic_pane_vc_g1

0x5d62,	// (0x00037c05) list_form_graphic_pane_vc_t1_ParamLimits

0x5d62,	// (0x00037c05) list_form_graphic_pane_vc_t1

0x11e5,	// (0x00033088) list_highlight_pane_cp5_vc_ParamLimits

0x11e5,	// (0x00033088) list_highlight_pane_cp5_vc

0x5d7e,	// (0x00037c21) list_form_graphic_pane_vc_ParamLimits

0x5d7e,	// (0x00037c21) list_form_graphic_pane_vc

0x462e,	// (0x000364d1) form_field_popup_pane_vc_g1

0x5d94,	// (0x00037c37) form_field_popup_pane_vc_t1_ParamLimits

0x5d94,	// (0x00037c37) form_field_popup_pane_vc_t1

0x18de,	// (0x00033781) input_focus_pane_cp7_vc_ParamLimits

0x18de,	// (0x00033781) input_focus_pane_cp7_vc

0x5da9,	// (0x00037c4c) list_form_pane_vc_ParamLimits

0x5da9,	// (0x00037c4c) list_form_pane_vc

0x5db5,	// (0x00037c58) data_form_pane_vc_t1_ParamLimits

0x5db5,	// (0x00037c58) data_form_pane_vc_t1

0x192d,	// (0x000337d0) input_focus_pane_vc_g1

0x1935,	// (0x000337d8) input_focus_pane_vc_g2

0x193d,	// (0x000337e0) input_focus_pane_vc_g3

0x1945,	// (0x000337e8) input_focus_pane_vc_g4

0x194d,	// (0x000337f0) input_focus_pane_vc_g5

0x1955,	// (0x000337f8) input_focus_pane_vc_g6

0x195d,	// (0x00033800) input_focus_pane_vc_g7

0x1965,	// (0x00033808) input_focus_pane_vc_g8

0x196d,	// (0x00033810) input_focus_pane_vc_g9

0x0e92,	// (0x00032d35) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x00041534) input_focus_pane_vc_g

0x4622,	// (0x000364c5) data_form_pane_vc_ParamLimits

0x4622,	// (0x000364c5) data_form_pane_vc

0x462e,	// (0x000364d1) form_field_data_pane_vc_g1

0x5dd0,	// (0x00037c73) form_field_data_pane_vc_t1_ParamLimits

0x5dd0,	// (0x00037c73) form_field_data_pane_vc_t1

0x18de,	// (0x00033781) input_focus_pane_vc_ParamLimits

0x18de,	// (0x00033781) input_focus_pane_vc

0x5de6,	// (0x00037c89) button_value_adjust_pane_cp3_vc

0x5dee,	// (0x00037c91) button_value_adjust_pane_cp5_vc

0x5df6,	// (0x00037c99) form_field_data_pane_vc_ParamLimits

0x5df6,	// (0x00037c99) form_field_data_pane_vc

0x5e0d,	// (0x00037cb0) form_field_data_pane_vc_cp2

0x5e15,	// (0x00037cb8) form_field_data_wide_pane_vc_ParamLimits

0x5e15,	// (0x00037cb8) form_field_data_wide_pane_vc

0x5e2b,	// (0x00037cce) form_field_data_wide_pane_vc_cp2

0x5e33,	// (0x00037cd6) form_field_popup_pane_vc_ParamLimits

0x5e33,	// (0x00037cd6) form_field_popup_pane_vc

0x5e4a,	// (0x00037ced) form_field_popup_wide_pane_vc_ParamLimits

0x5e4a,	// (0x00037ced) form_field_popup_wide_pane_vc

0x5e60,	// (0x00037d03) form_field_slider_pane_vc_ParamLimits

0x5e60,	// (0x00037d03) form_field_slider_pane_vc

0x5e73,	// (0x00037d16) form_field_slider_wide_pane_vc_ParamLimits

0x5e73,	// (0x00037d16) form_field_slider_wide_pane_vc

0x8289,	// (0x0003a12c) grid_touch_1_pane_ParamLimits

0x8289,	// (0x0003a12c) grid_touch_1_pane

0x8295,	// (0x0003a138) grid_touch_2_pane_ParamLimits

0x8295,	// (0x0003a138) grid_touch_2_pane

0x4357,	// (0x000361fa) touch_pane_g1_ParamLimits

0x4357,	// (0x000361fa) touch_pane_g1

0x5e86,	// (0x00037d29) cell_app_pane_cp_wide_ParamLimits

0x5e86,	// (0x00037d29) cell_app_pane_cp_wide

0x5e96,	// (0x00037d39) grid_popup_fast_wide_pane_ParamLimits

0x5e96,	// (0x00037d39) grid_popup_fast_wide_pane

0x5eaa,	// (0x00037d4d) scroll_pane_cp19_ParamLimits

0x5eaa,	// (0x00037d4d) scroll_pane_cp19

0x1051,	// (0x00032ef4) bg_popup_window_pane_cp20

0x5ebe,	// (0x00037d61) listscroll_popup_fast_wide_pane

0x11e5,	// (0x00033088) grid_indicator_nsta_pane

0x5ec6,	// (0x00037d69) clock_nsta_pane_g1

0x5ecf,	// (0x00037d72) clock_nsta_pane_t1

0x82ad,	// (0x0003a150) cell_indicator_nsta_pane_ParamLimits

0x82ad,	// (0x0003a150) cell_indicator_nsta_pane

0x5eeb,	// (0x00037d8e) cell_indicator_nsta_pane_g1

0x82de,	// (0x0003a181) cell_indicator_nsta_pane_g2

0x0001,

0xfaa5,	// (0x00041948) cell_indicator_nsta_pane_g

0x5ef9,	// (0x00037d9c) clock_nsta_pane_cp

0x5f01,	// (0x00037da4) indicator_nsta_pane_cp

0x5f0a,	// (0x00037dad) nsta_clock_indic_pane_g1

0x12b3,	// (0x00033156) grid_indicator_pane

0x1ed1,	// (0x00033d74) scroll_pane_cp29

0xd123,	// (0x0003efc6) indicator_nsta_pane_cp2_ParamLimits

0xd123,	// (0x0003efc6) indicator_nsta_pane_cp2

0x11e5,	// (0x00033088) main_apps_wheel_pane

0x47cd,	// (0x00036670) form_midp_field_text_pane_ParamLimits

0x48fa,	// (0x0003679d) scroll_bar_cp050_ParamLimits

0x5f73,	// (0x00037e16) cell_indicator_pane_ParamLimits

0x5f73,	// (0x00037e16) cell_indicator_pane

0x5f89,	// (0x00037e2c) cell_indicator_pane_g1

0x82eb,	// (0x0003a18e) grid_wheel_folder_pane_ParamLimits

0x82eb,	// (0x0003a18e) grid_wheel_folder_pane

0x82fd,	// (0x0003a1a0) list_wheel_apps_pane_ParamLimits

0x82fd,	// (0x0003a1a0) list_wheel_apps_pane

0x830c,	// (0x0003a1af) main_apps_wheel_pane_g1_ParamLimits

0x830c,	// (0x0003a1af) main_apps_wheel_pane_g1

0x8320,	// (0x0003a1c3) main_apps_wheel_pane_g2_ParamLimits

0x8320,	// (0x0003a1c3) main_apps_wheel_pane_g2

0x0001,

0xfac1,	// (0x00041964) main_apps_wheel_pane_g_ParamLimits

0xfac1,	// (0x00041964) main_apps_wheel_pane_g

0x8334,	// (0x0003a1d7) main_apps_wheel_pane_t1_ParamLimits

0x8334,	// (0x0003a1d7) main_apps_wheel_pane_t1

0x8353,	// (0x0003a1f6) list_wheel_apps_pane_g1

0x835b,	// (0x0003a1fe) list_wheel_apps_pane_g2

0x8363,	// (0x0003a206) list_wheel_apps_pane_g3

0x836b,	// (0x0003a20e) list_wheel_apps_pane_g4

0x8373,	// (0x0003a216) list_wheel_apps_pane_g5

0x0004,

0xfac6,	// (0x00041969) list_wheel_apps_pane_g

0x11e5,	// (0x00033088) navi_icon_text_pane

0x7b6e,	// (0x00039a11) aid_fill_nsta

0x5f93,	// (0x00037e36) navi_icon_text_pane_g1

0x5f9f,	// (0x00037e42) navi_icon_text_pane_t1

0x2356,	// (0x000341f9) list_set_graphic_pane_t1_ParamLimits

0x2356,	// (0x000341f9) list_set_graphic_pane_t1

0x4fe0,	// (0x00036e83) popup_midp_note_alarm_window_t6_ParamLimits

0x4fe0,	// (0x00036e83) popup_midp_note_alarm_window_t6

0x4ff2,	// (0x00036e95) popup_midp_note_alarm_window_t7_ParamLimits

0x4ff2,	// (0x00036e95) popup_midp_note_alarm_window_t7

0x5004,	// (0x00036ea7) popup_midp_note_alarm_window_t8_ParamLimits

0x5004,	// (0x00036ea7) popup_midp_note_alarm_window_t8

0x5016,	// (0x00036eb9) popup_midp_note_alarm_window_t9_ParamLimits

0x5016,	// (0x00036eb9) popup_midp_note_alarm_window_t9

0x5028,	// (0x00036ecb) popup_midp_note_alarm_window_t10_ParamLimits

0x5028,	// (0x00036ecb) popup_midp_note_alarm_window_t10

0x503a,	// (0x00036edd) popup_midp_note_alarm_window_t11_ParamLimits

0x503a,	// (0x00036edd) popup_midp_note_alarm_window_t11

0x504c,	// (0x00036eef) scroll_pane_cp17_ParamLimits

0x504c,	// (0x00036eef) scroll_pane_cp17

0xda06,	// (0x0003f8a9) volume_small_pane_cp_g1

0xdd3e,	// (0x0003fbe1) volume_small_pane_cp_g2

0xdd47,	// (0x0003fbea) volume_small_pane_cp_g3

0xdd50,	// (0x0003fbf3) volume_small_pane_cp_g4

0xda33,	// (0x0003f8d6) volume_small_pane_cp_g5

0xdd59,	// (0x0003fbfc) volume_small_pane_cp_g6

0xdd62,	// (0x0003fc05) volume_small_pane_cp_g7

0xdd6b,	// (0x0003fc0e) volume_small_pane_cp_g8

0xdd74,	// (0x0003fc17) volume_small_pane_cp_g9

0xdd7d,	// (0x0003fc20) volume_small_pane_cp_g10

0x41fa,	// (0x0003609d) midp_ticker_pane_g1_ParamLimits

0x4206,	// (0x000360a9) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x00041600) midp_ticker_pane_g_ParamLimits

0x4212,	// (0x000360b5) midp_ticker_pane_t1_ParamLimits

0x7b7e,	// (0x00039a21) aid_fill_nsta_2

0x48e6,	// (0x00036789) list_form2_midp_pane

0x56d2,	// (0x00037575) midp_editing_number_pane_ParamLimits

0x56de,	// (0x00037581) midp_ticker_pane_ParamLimits

0x5fb1,	// (0x00037e54) form2_midp_field_pane

0x5fb9,	// (0x00037e5c) scroll_pane_cp51

0x5fd9,	// (0x00037e7c) form2_midp_button_pane_ParamLimits

0x5fd9,	// (0x00037e7c) form2_midp_button_pane

0x5feb,	// (0x00037e8e) form2_midp_content_pane_ParamLimits

0x5feb,	// (0x00037e8e) form2_midp_content_pane

0x6005,	// (0x00037ea8) form2_midp_field_choice_group_pane

0x600d,	// (0x00037eb0) form2_midp_field_pane_g1

0x6015,	// (0x00037eb8) form2_midp_field_pane_g2

0x601d,	// (0x00037ec0) form2_midp_field_pane_g3

0x6025,	// (0x00037ec8) form2_midp_field_pane_g4

0x0003,

0xfaeb,	// (0x0004198e) form2_midp_field_pane_g

0x602d,	// (0x00037ed0) form2_midp_gauge_slider_pane

0x6035,	// (0x00037ed8) form2_midp_gauge_wait_pane

0x603d,	// (0x00037ee0) form2_midp_image_pane_ParamLimits

0x603d,	// (0x00037ee0) form2_midp_image_pane

0x6058,	// (0x00037efb) form2_midp_label_pane_ParamLimits

0x6058,	// (0x00037efb) form2_midp_label_pane

0x83ae,	// (0x0003a251) form2_midp_label_pane_cp_ParamLimits

0x83ae,	// (0x0003a251) form2_midp_label_pane_cp

0x6071,	// (0x00037f14) form2_midp_string_pane_ParamLimits

0x6071,	// (0x00037f14) form2_midp_string_pane

0x0b92,	// (0x00032a35) form2_midp_text_pane_ParamLimits

0x0b92,	// (0x00032a35) form2_midp_text_pane

0x6083,	// (0x00037f26) form2_midp_time_pane

0x6093,	// (0x00037f36) input_focus_pane_cp51_ParamLimits

0x6093,	// (0x00037f36) input_focus_pane_cp51

0x60ab,	// (0x00037f4e) form2_midp_label_pane_t1_ParamLimits

0x60ab,	// (0x00037f4e) form2_midp_label_pane_t1

0x0bab,	// (0x00032a4e) form2_mdip_text_pane_t1_ParamLimits

0x0bab,	// (0x00032a4e) form2_mdip_text_pane_t1

0x0bc4,	// (0x00032a67) form2_midp_time_pane_t1

0x60f3,	// (0x00037f96) form2_midp_gauge_slider_pane_t1

0x83cd,	// (0x0003a270) form2_midp_gauge_slider_pane_t2

0x83df,	// (0x0003a282) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf4,	// (0x00041997) form2_midp_gauge_slider_pane_t

0x6105,	// (0x00037fa8) form2_midp_slider_pane

0x6111,	// (0x00037fb4) form2_midp_gauge_wait_pane_t1

0x611f,	// (0x00037fc2) form2_midp_wait_pane_ParamLimits

0x611f,	// (0x00037fc2) form2_midp_wait_pane

0x466c,	// (0x0003650f) list_single_2graphic_pane_cp4_ParamLimits

0x466c,	// (0x0003650f) list_single_2graphic_pane_cp4

0x614a,	// (0x00037fed) list_single_midp_graphic_pane_cp_ParamLimits

0x614a,	// (0x00037fed) list_single_midp_graphic_pane_cp

0x1051,	// (0x00032ef4) list_highlight_pane_cp20

0x6168,	// (0x0003800b) list_single_2graphic_pane_g1_cp4

0x5753,	// (0x000375f6) list_single_2graphic_pane_g2_cp4

0x6170,	// (0x00038013) list_single_2graphic_pane_t1_cp4

0x11e5,	// (0x00033088) list_highlight_pane_cp21

0x617f,	// (0x00038022) list_single_midp_graphic_pane_g4_cp

0x618e,	// (0x00038031) list_single_midp_graphic_pane_t1_cp

0x61a3,	// (0x00038046) form2_mdip_string_pane_t1_ParamLimits

0x61a3,	// (0x00038046) form2_mdip_string_pane_t1

0x1051,	// (0x00032ef4) bg_wml_button_pane_cp2

0x0e92,	// (0x00032d35) form2_midp_image_pane_g1

0x1866,	// (0x00033709) list_double_large_graphic_pane_g5_ParamLimits

0x1866,	// (0x00033709) list_double_large_graphic_pane_g5

0x7a0b,	// (0x000398ae) midp_form_pane_ParamLimits

0x11e5,	// (0x00033088) main_apps_wheel_pane_ParamLimits

0xd70f,	// (0x0003f5b2) popup_preview_window_ParamLimits

0xd70f,	// (0x0003f5b2) popup_preview_window

0xd88a,	// (0x0003f72d) popup_touch_info_window_ParamLimits

0xd88a,	// (0x0003f72d) popup_touch_info_window

0xd8a8,	// (0x0003f74b) popup_touch_menu_window_ParamLimits

0xd8a8,	// (0x0003f74b) popup_touch_menu_window

0x0e88,	// (0x00032d2b) bg_popup_sub_pane_cp6

0x620d,	// (0x000380b0) list_touch_menu_pane

0x6215,	// (0x000380b8) list_single_touch_menu_pane_ParamLimits

0x6215,	// (0x000380b8) list_single_touch_menu_pane

0x622c,	// (0x000380cf) list_single_touch_menu_pane_t1

0x11e5,	// (0x00033088) bg_popup_sub_pane_cp7_ParamLimits

0x11e5,	// (0x00033088) bg_popup_sub_pane_cp7

0x623a,	// (0x000380dd) heading_sub_pane

0x6242,	// (0x000380e5) list_touch_info_pane_ParamLimits

0x6242,	// (0x000380e5) list_touch_info_pane

0x6251,	// (0x000380f4) list_single_touch_info_pane_ParamLimits

0x6251,	// (0x000380f4) list_single_touch_info_pane

0x6262,	// (0x00038105) list_single_touch_info_pane_t1

0x6270,	// (0x00038113) list_single_touch_info_pane_t2

0x0001,

0xfb02,	// (0x000419a5) list_single_touch_info_pane_t

0x41d0,	// (0x00036073) bg_popup_heading_pane_cp

0x627e,	// (0x00038121) heading_sub_pane_t1

0x45e8,	// (0x0003648b) bg_popup_preview_window_pane_cp_ParamLimits

0x45e8,	// (0x0003648b) bg_popup_preview_window_pane_cp

0x623a,	// (0x000380dd) heading_preview_pane

0x6242,	// (0x000380e5) list_preview_pane_ParamLimits

0x6242,	// (0x000380e5) list_preview_pane

0x628c,	// (0x0003812f) popup_preview_window_g1

0x6251,	// (0x000380f4) list_single_preview_pane_ParamLimits

0x6251,	// (0x000380f4) list_single_preview_pane

0x6294,	// (0x00038137) list_single_preview_pane_g1

0x629c,	// (0x0003813f) list_single_preview_pane_t1

0x6262,	// (0x00038105) list_single_preview_pane_t2

0x0001,

0xfb07,	// (0x000419aa) list_single_preview_pane_t

0x62aa,	// (0x0003814d) bg_popup_heading_pane_cp2_ParamLimits

0x62aa,	// (0x0003814d) bg_popup_heading_pane_cp2

0x62c0,	// (0x00038163) heading_preview_pane_g1

0x62c8,	// (0x0003816b) heading_preview_pane_t1_ParamLimits

0x62c8,	// (0x0003816b) heading_preview_pane_t1

0x12ca,	// (0x0003316d) soft_indicator_pane_t1_ParamLimits

0x17a2,	// (0x00033645) scroll_pane_ParamLimits

0x1dd6,	// (0x00033c79) scroll_sc2_left_pane

0x1dcd,	// (0x00033c70) scroll_sc2_right_pane

0x1df5,	// (0x00033c98) scroll_bg_pane_g1_ParamLimits

0x1e0a,	// (0x00033cad) scroll_bg_pane_g2_ParamLimits

0x1e22,	// (0x00033cc5) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0004158b) scroll_bg_pane_g_ParamLimits

0x1df5,	// (0x00033c98) scroll_handle_pane_g1_ParamLimits

0x1e44,	// (0x00033ce7) scroll_handle_pane_g2_ParamLimits

0x1e22,	// (0x00033cc5) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x00041592) scroll_handle_pane_g_ParamLimits

0xd457,	// (0x0003f2fa) popup_choice_list_window_ParamLimits

0xd457,	// (0x0003f2fa) popup_choice_list_window

0x44be,	// (0x00036361) choice_list_pane

0x4534,	// (0x000363d7) cell_toolbar_pane_t1

0x455c,	// (0x000363ff) toolbar_button_pane_ParamLimits

0x5447,	// (0x000372ea) ai_gene_pane_1_t2_ParamLimits

0x5447,	// (0x000372ea) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x000417b5) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x000417b5) ai_gene_pane_1_t

0x62e5,	// (0x00038188) scroll_sc2_left_pane_g1

0x62e5,	// (0x00038188) scroll_sc2_right_pane_g1

0x27b4,	// (0x00034657) bg_popup_sub_pane_cp10

0x62ef,	// (0x00038192) list_choice_list_pane

0x6306,	// (0x000381a9) list_single_choice_list_pane_ParamLimits

0x6306,	// (0x000381a9) list_single_choice_list_pane

0x6318,	// (0x000381bb) list_single_choice_list_pane_g1

0x1a43,	// (0x000338e6) list_single_choice_list_pane_t1_ParamLimits

0x1a43,	// (0x000338e6) list_single_choice_list_pane_t1

0x6320,	// (0x000381c3) choice_list_pane_g1

0x6328,	// (0x000381cb) choice_list_pane_t1

0x0e88,	// (0x00032d2b) input_focus_pane_cp11

0x1bfe,	// (0x00033aa1) title_pane_stacon_g2_ParamLimits

0x1bfe,	// (0x00033aa1) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x00041571) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x00041571) title_pane_stacon_g

0x41d0,	// (0x00036073) cursor_press_pane

0xd4f3,	// (0x0003f396) popup_fep_hwr_window_ParamLimits

0xd4f3,	// (0x0003f396) popup_fep_hwr_window

0xd54f,	// (0x0003f3f2) popup_fep_vkb_window_ParamLimits

0xd54f,	// (0x0003f3f2) popup_fep_vkb_window

0x6336,	// (0x000381d9) cursor_press_pane_g1

0x0002,

0xfb30,	// (0x000419d3) fep_vkb_side_pane_g_ParamLimits

0xddbb,	// (0x0003fc5e) fep_hwr_candidate_pane_ParamLimits

0xddbb,	// (0x0003fc5e) fep_hwr_candidate_pane

0xdde3,	// (0x0003fc86) fep_hwr_side_pane_ParamLimits

0xdde3,	// (0x0003fc86) fep_hwr_side_pane

0xde03,	// (0x0003fca6) fep_hwr_top_pane_ParamLimits

0xde03,	// (0x0003fca6) fep_hwr_top_pane

0xde1b,	// (0x0003fcbe) fep_hwr_write_pane_ParamLimits

0xde1b,	// (0x0003fcbe) fep_hwr_write_pane

0xfb30,	// (0x000419d3) fep_vkb_side_pane_g

0x6350,	// (0x000381f3) fep_hwr_top_pane_g1

0x633e,	// (0x000381e1) fep_hwr_top_pane_g2

0xde55,	// (0x0003fcf8) fep_hwr_top_pane_g3

0x0002,

0xfb0c,	// (0x000419af) fep_hwr_top_pane_g

0xde6a,	// (0x0003fd0d) fep_hwr_top_text_pane

0x1f3e,	// (0x00033de1) fep_hwr_top_text_pane_g1

0x6386,	// (0x00038229) fep_hwr_top_text_pane_t1

0xdf58,	// (0x0003fdfb) fep_hwr_candidate_pane_g1

0x654f,	// (0x000383f2) fep_vkb_keypad_pane_g3_ParamLimits

0x654f,	// (0x000383f2) fep_vkb_keypad_pane_g3

0x6571,	// (0x00038414) fep_vkb_keypad_pane_g4_ParamLimits

0x6571,	// (0x00038414) fep_vkb_keypad_pane_g4

0x65e0,	// (0x00038483) fep_vkb_bottom_pane_g2_ParamLimits

0x65e0,	// (0x00038483) fep_vkb_bottom_pane_g2

0x0001,

0xfb37,	// (0x000419da) fep_vkb_bottom_pane_g_ParamLimits

0xfb37,	// (0x000419da) fep_vkb_bottom_pane_g

0x62e5,	// (0x00038188) cell_vkb_side_pane_g2

0x0001,

0xfb41,	// (0x000419e4) cell_vkb_side_pane_g

0x6624,	// (0x000384c7) cell_vkb_side_pane_t1

0x6632,	// (0x000384d5) cell_vkb_side_pane_t1_copy1

0x62e5,	// (0x00038188) bg_fep_vkb_candidate_pane_g2

0x6700,	// (0x000385a3) cell_vkb_candidate_pane_ParamLimits

0x6394,	// (0x00038237) aid_size_cell_vkb_ParamLimits

0x6394,	// (0x00038237) aid_size_cell_vkb

0x6700,	// (0x000385a3) cell_vkb_candidate_pane

0xdf7f,	// (0x0003fe22) bg_popup_fep_shadow_pane_g1

0x63fe,	// (0x000382a1) fep_vkb_bottom_pane_ParamLimits

0x63fe,	// (0x000382a1) fep_vkb_bottom_pane

0x643b,	// (0x000382de) fep_vkb_candidate_pane_ParamLimits

0x643b,	// (0x000382de) fep_vkb_candidate_pane

0x6457,	// (0x000382fa) fep_vkb_keypad_pane_ParamLimits

0x6457,	// (0x000382fa) fep_vkb_keypad_pane

0x648b,	// (0x0003832e) fep_vkb_side_pane_ParamLimits

0x648b,	// (0x0003832e) fep_vkb_side_pane

0x64b7,	// (0x0003835a) fep_vkb_top_pane_ParamLimits

0x64b7,	// (0x0003835a) fep_vkb_top_pane

0x64e3,	// (0x00038386) fep_vkb_top_pane_g1_ParamLimits

0x64e3,	// (0x00038386) fep_vkb_top_pane_g1

0x64f2,	// (0x00038395) fep_vkb_top_pane_g2_ParamLimits

0x64f2,	// (0x00038395) fep_vkb_top_pane_g2

0x6501,	// (0x000383a4) fep_vkb_top_pane_g3_ParamLimits

0x6501,	// (0x000383a4) fep_vkb_top_pane_g3

0x0003,

0xfb27,	// (0x000419ca) fep_vkb_top_pane_g_ParamLimits

0xfb27,	// (0x000419ca) fep_vkb_top_pane_g

0x651f,	// (0x000383c2) fep_vkb_top_text_pane_ParamLimits

0x651f,	// (0x000383c2) fep_vkb_top_text_pane

0x83fd,	// (0x0003a2a0) fep_vkb_side_pane_g1_ParamLimits

0x83fd,	// (0x0003a2a0) fep_vkb_side_pane_g1

0x653e,	// (0x000383e1) grid_vkb_side_pane_ParamLimits

0x653e,	// (0x000383e1) grid_vkb_side_pane

0xdf87,	// (0x0003fe2a) bg_popup_fep_shadow_pane_g2

0xdf90,	// (0x0003fe33) bg_popup_fep_shadow_pane_g3

0xdf98,	// (0x0003fe3b) bg_popup_fep_shadow_pane_g4

0xdfa1,	// (0x0003fe44) bg_popup_fep_shadow_pane_g5

0xdfa9,	// (0x0003fe4c) bg_popup_fep_shadow_pane_g6

0xdfb1,	// (0x0003fe54) bg_popup_fep_shadow_pane_g7

0x1945,	// (0x000337e8) bg_popup_fep_shadow_pane_g8

0x658f,	// (0x00038432) grid_vkb_keypad_number_pane_ParamLimits

0x658f,	// (0x00038432) grid_vkb_keypad_number_pane

0x659f,	// (0x00038442) grid_vkb_keypad_pane_ParamLimits

0x659f,	// (0x00038442) grid_vkb_keypad_pane

0x65c5,	// (0x00038468) fep_vkb_bottom_pane_g1_ParamLimits

0x65c5,	// (0x00038468) fep_vkb_bottom_pane_g1

0x65ee,	// (0x00038491) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x65ee,	// (0x00038491) grid_vkb_keypad_bottom_left_pane

0x6603,	// (0x000384a6) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6603,	// (0x000384a6) grid_vkb_keypad_bottom_right_pane

0x6618,	// (0x000384bb) fep_vkb_top_text_pane_g1

0x8447,	// (0x0003a2ea) fep_vkb_top_text_pane_t1

0x845c,	// (0x0003a2ff) cell_vkb_side_pane_ParamLimits

0x845c,	// (0x0003a2ff) cell_vkb_side_pane

0x62e5,	// (0x00038188) cell_vkb_side_pane_g1

0x6640,	// (0x000384e3) cell_vkb_keypad_pane_ParamLimits

0x6640,	// (0x000384e3) cell_vkb_keypad_pane

0x66ad,	// (0x00038550) cell_vkb_keypad_pane_g1

0x0008,

0xfb54,	// (0x000419f7) bg_popup_fep_shadow_pane_g

0xdfc1,	// (0x0003fe64) cell_hwr_side_pane_g1

0xdfc1,	// (0x0003fe64) cell_hwr_side_pane_g2

0x66b7,	// (0x0003855a) cell_vkb_keypad_pane_t1

0x847f,	// (0x0003a322) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x847f,	// (0x0003a322) cell_vkb_keypad_bottom_left_pane

0x849c,	// (0x0003a33f) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x849c,	// (0x0003a33f) cell_vkb_keypad_bottom_right_pane

0x62e5,	// (0x00038188) cell_vkb_keypad_bottom_left_pane_g1

0x62e5,	// (0x00038188) cell_vkb_keypad_bottom_right_pane_g1

0x66c5,	// (0x00038568) cell_vkb_keypad_number_pane_ParamLimits

0x66c5,	// (0x00038568) cell_vkb_keypad_number_pane

0x66e4,	// (0x00038587) cell_vkb_keypad_number_pane_g1

0x66ee,	// (0x00038591) cell_vkb_keypad_number_pane_g2

0x66f7,	// (0x0003859a) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb46,	// (0x000419e9) cell_vkb_keypad_number_pane_g

0x66b7,	// (0x0003855a) cell_vkb_keypad_number_pane_t1

0x6719,	// (0x000385bc) fep_vkb_candidate_pane_g1

0x0001,

0xfb67,	// (0x00041a0a) cell_hwr_side_pane_g

0x6732,	// (0x000385d5) cell_hwr_side_pane_t1

0xdfcb,	// (0x0003fe6e) cell_hwr_side_pane_t1_copy1

0xdfd9,	// (0x0003fe7c) cell_hwr_candidate_pane_g1

0xe008,	// (0x0003feab) cell_hwr_candidate_pane_t1

0x62e5,	// (0x00038188) cell_vkb_candidate_pane_g2

0x67b8,	// (0x0003865b) cell_vkb_candidate_pane_t1

0xdd86,	// (0x0003fc29) bg_popup_fep_shadow_pane_ParamLimits

0xdd86,	// (0x0003fc29) bg_popup_fep_shadow_pane

0xde35,	// (0x0003fcd8) bg_fep_hwr_top_pane_g4

0x6362,	// (0x00038205) bg_hwr_side_pane_g1_ParamLimits

0x6362,	// (0x00038205) bg_hwr_side_pane_g1

0xdea6,	// (0x0003fd49) cell_hwr_side_pane_ParamLimits

0xdea6,	// (0x0003fd49) cell_hwr_side_pane

0xdee1,	// (0x0003fd84) fep_hwr_write_pane_g1_ParamLimits

0xdee1,	// (0x0003fd84) fep_hwr_write_pane_g1

0xdeee,	// (0x0003fd91) fep_hwr_write_pane_g2_ParamLimits

0xdeee,	// (0x0003fd91) fep_hwr_write_pane_g2

0xdefb,	// (0x0003fd9e) fep_hwr_write_pane_g3_ParamLimits

0xdefb,	// (0x0003fd9e) fep_hwr_write_pane_g3

0xdf09,	// (0x0003fdac) fep_hwr_write_pane_g4_ParamLimits

0xdf09,	// (0x0003fdac) fep_hwr_write_pane_g4

0x0005,

0xfb13,	// (0x000419b6) fep_hwr_write_pane_g_ParamLimits

0xfb13,	// (0x000419b6) fep_hwr_write_pane_g

0xde35,	// (0x0003fcd8) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xde35,	// (0x0003fcd8) bg_fep_hwr_candidate_pane_g2

0xdf1e,	// (0x0003fdc1) cell_hwr_candidate_pane_ParamLimits

0xdf1e,	// (0x0003fdc1) cell_hwr_candidate_pane

0xdf58,	// (0x0003fdfb) fep_hwr_candidate_pane_g1_ParamLimits

0x63c2,	// (0x00038265) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x63c2,	// (0x00038265) bg_popup_fep_shadow_pane_cp2

0x6511,	// (0x000383b4) fep_vkb_top_pane_g4_ParamLimits

0x6511,	// (0x000383b4) fep_vkb_top_pane_g4

0x6530,	// (0x000383d3) fep_vkb_side_pane_g2_ParamLimits

0x6530,	// (0x000383d3) fep_vkb_side_pane_g2

0x040e,	// (0x000322b1) list_setting_pane_t4_ParamLimits

0x040e,	// (0x000322b1) list_setting_pane_t4

0x04a4,	// (0x00032347) list_setting_number_pane_t5_ParamLimits

0x04a4,	// (0x00032347) list_setting_number_pane_t5

0x790c,	// (0x000397af) list_double_heading_pane_cp2_ParamLimits

0x790c,	// (0x000397af) list_double_heading_pane_cp2

0x2450,	// (0x000342f3) list_double_heading_pane_g1_cp2_ParamLimits

0x2450,	// (0x000342f3) list_double_heading_pane_g1_cp2

0x67c6,	// (0x00038669) list_double_heading_pane_g2_cp2_ParamLimits

0x67c6,	// (0x00038669) list_double_heading_pane_g2_cp2

0x67da,	// (0x0003867d) list_double_heading_pane_t1_cp2_ParamLimits

0x67da,	// (0x0003867d) list_double_heading_pane_t1_cp2

0x67f0,	// (0x00038693) list_double_heading_pane_t2_cp2_ParamLimits

0x67f0,	// (0x00038693) list_double_heading_pane_t2_cp2

0x0e80,	// (0x00032d23) aid_value_unit2

0xcd53,	// (0x0003ebf6) popup_preview_fixed_window

0x13b8,	// (0x0003325b) bg_popup_preview_window_pane_cp02

0x6802,	// (0x000386a5) list_preview_fixed_pane

0x6848,	// (0x000386eb) list_empty_pane_fp_ParamLimits

0x6848,	// (0x000386eb) list_empty_pane_fp

0x6848,	// (0x000386eb) list_single_cale_day_pane_fp_ParamLimits

0x6848,	// (0x000386eb) list_single_cale_day_pane_fp

0x6848,	// (0x000386eb) list_single_graphic_heading_pane_fp_ParamLimits

0x6848,	// (0x000386eb) list_single_graphic_heading_pane_fp

0x6848,	// (0x000386eb) list_single_graphic_pane_fp_ParamLimits

0x6848,	// (0x000386eb) list_single_graphic_pane_fp

0x6848,	// (0x000386eb) list_single_heading_pane_fp_ParamLimits

0x6848,	// (0x000386eb) list_single_heading_pane_fp

0x6848,	// (0x000386eb) list_single_pane_fp_ParamLimits

0x6848,	// (0x000386eb) list_single_pane_fp

0x685c,	// (0x000386ff) list_single_pane_fp_g1_ParamLimits

0x685c,	// (0x000386ff) list_single_pane_fp_g1

0x182a,	// (0x000336cd) list_single_pane_fp_g2_ParamLimits

0x182a,	// (0x000336cd) list_single_pane_fp_g2

0x3403,	// (0x000352a6) list_single_pane_fp_g3_ParamLimits

0x3403,	// (0x000352a6) list_single_pane_fp_g3

0x6868,	// (0x0003870b) list_single_pane_fp_g4_ParamLimits

0x6868,	// (0x0003870b) list_single_pane_fp_g4

0x0003,

0xfb7a,	// (0x00041a1d) list_single_pane_fp_g_ParamLimits

0xfb7a,	// (0x00041a1d) list_single_pane_fp_g

0x0bd7,	// (0x00032a7a) list_single_pane_fp_t1_ParamLimits

0x0bd7,	// (0x00032a7a) list_single_pane_fp_t1

0x0bee,	// (0x00032a91) list_single_graphic_pane_fp_g1_ParamLimits

0x0bee,	// (0x00032a91) list_single_graphic_pane_fp_g1

0x685c,	// (0x000386ff) list_single_graphic_pane_fp_g2_ParamLimits

0x685c,	// (0x000386ff) list_single_graphic_pane_fp_g2

0x182a,	// (0x000336cd) list_single_graphic_pane_fp_g3_ParamLimits

0x182a,	// (0x000336cd) list_single_graphic_pane_fp_g3

0x3403,	// (0x000352a6) list_single_graphic_pane_fp_g4_ParamLimits

0x3403,	// (0x000352a6) list_single_graphic_pane_fp_g4

0x6868,	// (0x0003870b) list_single_graphic_pane_fp_g5_ParamLimits

0x6868,	// (0x0003870b) list_single_graphic_pane_fp_g5

0x0004,

0xfb83,	// (0x00041a26) list_single_graphic_pane_fp_g_ParamLimits

0xfb83,	// (0x00041a26) list_single_graphic_pane_fp_g

0x0bfa,	// (0x00032a9d) list_single_graphic_pane_fp_t1_ParamLimits

0x0bfa,	// (0x00032a9d) list_single_graphic_pane_fp_t1

0x0bee,	// (0x00032a91) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0bee,	// (0x00032a91) list_single_graphic_heading_pane_fp_g1

0x685c,	// (0x000386ff) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x685c,	// (0x000386ff) list_single_graphic_heading_pane_fp_g2

0x182a,	// (0x000336cd) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x182a,	// (0x000336cd) list_single_graphic_heading_pane_fp_g3

0x3403,	// (0x000352a6) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3403,	// (0x000352a6) list_single_graphic_heading_pane_fp_g4

0x6868,	// (0x0003870b) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6868,	// (0x0003870b) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb83,	// (0x00041a26) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb83,	// (0x00041a26) list_single_graphic_heading_pane_fp_g

0x0c10,	// (0x00032ab3) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0c10,	// (0x00032ab3) list_single_graphic_heading_pane_fp_t1

0x0c26,	// (0x00032ac9) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0c26,	// (0x00032ac9) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8e,	// (0x00041a31) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8e,	// (0x00041a31) list_single_graphic_heading_pane_fp_t

0x0c38,	// (0x00032adb) list_single_cale_day_pane_fp_g1_ParamLimits

0x0c38,	// (0x00032adb) list_single_cale_day_pane_fp_g1

0x6874,	// (0x00038717) list_single_cale_day_pane_fp_g2_ParamLimits

0x6874,	// (0x00038717) list_single_cale_day_pane_fp_g2

0x3417,	// (0x000352ba) list_single_cale_day_pane_fp_g3_ParamLimits

0x3417,	// (0x000352ba) list_single_cale_day_pane_fp_g3

0x343f,	// (0x000352e2) list_single_cale_day_pane_fp_g4_ParamLimits

0x343f,	// (0x000352e2) list_single_cale_day_pane_fp_g4

0x3463,	// (0x00035306) list_single_cale_day_pane_fp_g5_ParamLimits

0x3463,	// (0x00035306) list_single_cale_day_pane_fp_g5

0x0004,

0xfb93,	// (0x00041a36) list_single_cale_day_pane_fp_g_ParamLimits

0xfb93,	// (0x00041a36) list_single_cale_day_pane_fp_g

0x0c70,	// (0x00032b13) list_single_cale_day_pane_fp_t1_ParamLimits

0x0c70,	// (0x00032b13) list_single_cale_day_pane_fp_t1

0x0c96,	// (0x00032b39) list_single_cale_day_pane_fp_t2_ParamLimits

0x0c96,	// (0x00032b39) list_single_cale_day_pane_fp_t2

0x0caf,	// (0x00032b52) list_single_cale_day_pane_fp_t3_ParamLimits

0x0caf,	// (0x00032b52) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9e,	// (0x00041a41) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9e,	// (0x00041a41) list_single_cale_day_pane_fp_t

0x685c,	// (0x000386ff) list_empty_pane_fp_g1_ParamLimits

0x685c,	// (0x000386ff) list_empty_pane_fp_g1

0x0cc8,	// (0x00032b6b) list_empty_pane_fp_t1

0x0cd6,	// (0x00032b79) list_empty_pane_fp_t2

0x0001,

0xfba5,	// (0x00041a48) list_empty_pane_fp_t

0x685c,	// (0x000386ff) list_single_heading_pane_fp_g1_ParamLimits

0x685c,	// (0x000386ff) list_single_heading_pane_fp_g1

0x182a,	// (0x000336cd) list_single_heading_pane_fp_g2_ParamLimits

0x182a,	// (0x000336cd) list_single_heading_pane_fp_g2

0x3403,	// (0x000352a6) list_single_heading_pane_fp_g3_ParamLimits

0x3403,	// (0x000352a6) list_single_heading_pane_fp_g3

0x0002,

0xfbaa,	// (0x00041a4d) list_single_heading_pane_fp_g_ParamLimits

0xfbaa,	// (0x00041a4d) list_single_heading_pane_fp_g

0x0ce4,	// (0x00032b87) list_single_heading_pane_fp_t1_ParamLimits

0x0ce4,	// (0x00032b87) list_single_heading_pane_fp_t1

0x0cf6,	// (0x00032b99) list_single_heading_pane_fp_t2_ParamLimits

0x0cf6,	// (0x00032b99) list_single_heading_pane_fp_t2

0x0001,

0xfbb1,	// (0x00041a54) list_single_heading_pane_fp_t_ParamLimits

0xfbb1,	// (0x00041a54) list_single_heading_pane_fp_t

0x1a58,	// (0x000338fb) aid_size_cell_fast

0x138d,	// (0x00033230) soft_indicator_pane_cp1_t1

0x1a95,	// (0x00033938) cell_app_pane_cp2_ParamLimits

0x1a95,	// (0x00033938) cell_app_pane_cp2

0xdda8,	// (0x0003fc4b) fep_hwr_candidate_drop_down_list_pane

0xdf72,	// (0x0003fe15) fep_hwr_candidate_pane_g3_ParamLimits

0xdf72,	// (0x0003fe15) fep_hwr_candidate_pane_g3

0xf541,	// (0x000413e4) fep_hwr_candidate_pane_g4_ParamLimits

0xf541,	// (0x000413e4) fep_hwr_candidate_pane_g4

0x0002,

0xfb20,	// (0x000419c3) fep_hwr_candidate_pane_g_ParamLimits

0xfb20,	// (0x000419c3) fep_hwr_candidate_pane_g

0x642a,	// (0x000382cd) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x642a,	// (0x000382cd) fep_vkb_candidate_drop_down_list_pane

0x6721,	// (0x000385c4) fep_vkb_candidate_pane_g3

0x6729,	// (0x000385cc) fep_vkb_candidate_pane_g4

0x0002,

0xfb4d,	// (0x000419f0) fep_vkb_candidate_pane_g

0xdfd9,	// (0x0003fe7c) cell_hwr_candidate_pane_g1_ParamLimits

0xdfe7,	// (0x0003fe8a) cell_hwr_candidate_pane_g3_ParamLimits

0xdfe7,	// (0x0003fe8a) cell_hwr_candidate_pane_g3

0xb118,	// (0x0003cfbb) cell_hwr_candidate_pane_g4_ParamLimits

0xb118,	// (0x0003cfbb) cell_hwr_candidate_pane_g4

0x0002,

0xfb6c,	// (0x00041a0f) cell_hwr_candidate_pane_g_ParamLimits

0xfb6c,	// (0x00041a0f) cell_hwr_candidate_pane_g

0x6782,	// (0x00038625) cell_vkb_candidate_pane_g3_ParamLimits

0x6782,	// (0x00038625) cell_vkb_candidate_pane_g3

0x679d,	// (0x00038640) cell_vkb_candidate_pane_g4_ParamLimits

0x679d,	// (0x00038640) cell_vkb_candidate_pane_g4

0x6880,	// (0x00038723) cell_app_pane_cp2_g1_ParamLimits

0x6880,	// (0x00038723) cell_app_pane_cp2_g1

0x689e,	// (0x00038741) cell_app_pane_cp2_g2_ParamLimits

0x689e,	// (0x00038741) cell_app_pane_cp2_g2

0x0001,

0xfbb6,	// (0x00041a59) cell_app_pane_cp2_g_ParamLimits

0xfbb6,	// (0x00041a59) cell_app_pane_cp2_g

0x68aa,	// (0x0003874d) cell_app_pane_cp2_t1_ParamLimits

0x68aa,	// (0x0003874d) cell_app_pane_cp2_t1

0x18de,	// (0x00033781) grid_highlight_pane_cp1_ParamLimits

0x18de,	// (0x00033781) grid_highlight_pane_cp1

0xe025,	// (0x0003fec8) cell_hwr_candidate_pane_cp1_ParamLimits

0xe025,	// (0x0003fec8) cell_hwr_candidate_pane_cp1

0xdfd9,	// (0x0003fe7c) fep_hwr_candidate_drop_down_list_pane_g1

0xe043,	// (0x0003fee6) fep_hwr_candidate_drop_down_list_pane_g2

0xe050,	// (0x0003fef3) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbb,	// (0x00041a5e) fep_hwr_candidate_drop_down_list_pane_g

0xe05d,	// (0x0003ff00) fep_hwr_candidate_drop_down_list_scroll_pane

0xe066,	// (0x0003ff09) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xe066,	// (0x0003ff09) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xe073,	// (0x0003ff16) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xe073,	// (0x0003ff16) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xe080,	// (0x0003ff23) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xe080,	// (0x0003ff23) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xe08d,	// (0x0003ff30) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xe08d,	// (0x0003ff30) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xe0a8,	// (0x0003ff4b) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xe0a8,	// (0x0003ff4b) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xe0c3,	// (0x0003ff66) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xe0c3,	// (0x0003ff66) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xe0de,	// (0x0003ff81) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xe0de,	// (0x0003ff81) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xe0f9,	// (0x0003ff9c) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xe0f9,	// (0x0003ff9c) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc2,	// (0x00041a65) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc2,	// (0x00041a65) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x84d5,	// (0x0003a378) cell_vkb_candidate_pane_cp1_ParamLimits

0x84d5,	// (0x0003a378) cell_vkb_candidate_pane_cp1

0x6511,	// (0x000383b4) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x6511,	// (0x000383b4) fep_vkb_candidate_drop_down_list_pane_g1

0x68bc,	// (0x0003875f) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x68bc,	// (0x0003875f) fep_vkb_candidate_drop_down_list_pane_g2

0x68c9,	// (0x0003876c) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x68c9,	// (0x0003876c) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd3,	// (0x00041a76) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd3,	// (0x00041a76) fep_vkb_candidate_drop_down_list_pane_g

0x68d6,	// (0x00038779) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x68d6,	// (0x00038779) fep_vkb_candidate_drop_down_list_scroll_pane

0x68e3,	// (0x00038786) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x68e3,	// (0x00038786) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x68f0,	// (0x00038793) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x68f0,	// (0x00038793) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x68fc,	// (0x0003879f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x68fc,	// (0x0003879f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6740,	// (0x000385e3) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6740,	// (0x000385e3) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6761,	// (0x00038604) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6761,	// (0x00038604) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x6908,	// (0x000387ab) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6908,	// (0x000387ab) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x6929,	// (0x000387cc) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6929,	// (0x000387cc) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x694a,	// (0x000387ed) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x694a,	// (0x000387ed) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbda,	// (0x00041a7d) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbda,	// (0x00041a7d) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7524,	// (0x000393c7) title_pane_g1_ParamLimits

0x7531,	// (0x000393d4) title_pane_g2_ParamLimits

0xf54e,	// (0x000413f1) title_pane_g_ParamLimits

0x1f36,	// (0x00033dd9) aid_call2_pane

0x1f2e,	// (0x00033dd1) aid_call_pane

0x1f3e,	// (0x00033de1) popup_clock_analogue_window_g1

0x1f3e,	// (0x00033de1) popup_clock_analogue_window_g2

0xd02d,	// (0x0003eed0) popup_clock_analogue_window_g3

0xd036,	// (0x0003eed9) popup_clock_analogue_window_g4

0x0e92,	// (0x00032d35) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x000415a0) popup_clock_analogue_window_g

0xd03e,	// (0x0003eee1) popup_clock_analogue_window_t1

0xd04c,	// (0x0003eeef) clock_digital_number_pane_ParamLimits

0xd04c,	// (0x0003eeef) clock_digital_number_pane

0xd058,	// (0x0003eefb) clock_digital_number_pane_cp02_ParamLimits

0xd058,	// (0x0003eefb) clock_digital_number_pane_cp02

0xd064,	// (0x0003ef07) clock_digital_number_pane_cp03_ParamLimits

0xd064,	// (0x0003ef07) clock_digital_number_pane_cp03

0xd070,	// (0x0003ef13) clock_digital_number_pane_cp04_ParamLimits

0xd070,	// (0x0003ef13) clock_digital_number_pane_cp04

0xd07c,	// (0x0003ef1f) clock_digital_separator_pane_ParamLimits

0xd07c,	// (0x0003ef1f) clock_digital_separator_pane

0xd088,	// (0x0003ef2b) popup_clock_digital_window_t1_ParamLimits

0xd088,	// (0x0003ef2b) popup_clock_digital_window_t1

0x0e92,	// (0x00032d35) clock_digital_number_pane_g1

0x0e92,	// (0x00032d35) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x000415ab) clock_digital_number_pane_g

0x0e92,	// (0x00032d35) clock_digital_separator_pane_g1

0x0e92,	// (0x00032d35) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x000415ab) clock_digital_separator_pane_g

0x7b6e,	// (0x00039a11) aid_fill_nsta_ParamLimits

0x7c27,	// (0x00039aca) indicator_nsta_pane_ParamLimits

0x445b,	// (0x000362fe) popup_clock_analogue_window

0x445b,	// (0x000362fe) popup_clock_digital_window

0x11e5,	// (0x00033088) grid_indicator_nsta_pane_ParamLimits

0x5edd,	// (0x00037d80) clock_nsta_pane_t2

0x0001,

0xfaa0,	// (0x00041943) clock_nsta_pane_t

0xcff1,	// (0x0003ee94) aid_size_max_handle

0xcffb,	// (0x0003ee9e) aid_size_min_handle

0x41d0,	// (0x00036073) editor_scroll_pane

0x6965,	// (0x00038808) ex_editor_pane

0x1a21,	// (0x000338c4) scroll_pane_cp13

0x17cf,	// (0x00033672) scroll_pane_cp14

0x1f8c,	// (0x00033e2f) scroll_pane_cp36

0x791c,	// (0x000397bf) list_single_graphic_hl_pane_cp2_ParamLimits

0x791c,	// (0x000397bf) list_single_graphic_hl_pane_cp2

0x0964,	// (0x00032807) list_single_graphic_hl_pane_ParamLimits

0x0964,	// (0x00032807) list_single_graphic_hl_pane

0x0d0c,	// (0x00032baf) aid_size_min_hl_cp1

0x696d,	// (0x00038810) list_highlight_pane_cp34_ParamLimits

0x696d,	// (0x00038810) list_highlight_pane_cp34

0x697e,	// (0x00038821) list_single_graphic_hl_pane_g1_ParamLimits

0x697e,	// (0x00038821) list_single_graphic_hl_pane_g1

0x0d15,	// (0x00032bb8) list_single_graphic_hl_pane_g2_ParamLimits

0x0d15,	// (0x00032bb8) list_single_graphic_hl_pane_g2

0x0d15,	// (0x00032bb8) list_single_graphic_hl_pane_g3_ParamLimits

0x0d15,	// (0x00032bb8) list_single_graphic_hl_pane_g3

0x182a,	// (0x000336cd) list_single_graphic_hl_pane_g4_ParamLimits

0x182a,	// (0x000336cd) list_single_graphic_hl_pane_g4

0x3403,	// (0x000352a6) list_single_graphic_hl_pane_g5_ParamLimits

0x3403,	// (0x000352a6) list_single_graphic_hl_pane_g5

0x0004,

0xfbeb,	// (0x00041a8e) list_single_graphic_hl_pane_g_ParamLimits

0xfbeb,	// (0x00041a8e) list_single_graphic_hl_pane_g

0x022b,	// (0x000320ce) list_single_graphic_hl_pane_t1_ParamLimits

0x022b,	// (0x000320ce) list_single_graphic_hl_pane_t1

0x698b,	// (0x0003882e) aid_size_min_hl_cp2

0x6994,	// (0x00038837) list_highlight_pane_cp34_cp2_ParamLimits

0x6994,	// (0x00038837) list_highlight_pane_cp34_cp2

0x697e,	// (0x00038821) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x697e,	// (0x00038821) list_single_graphic_hl_pane_g1_cp2

0x69a1,	// (0x00038844) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x69a1,	// (0x00038844) list_single_graphic_hl_pane_g2_cp2

0x69ad,	// (0x00038850) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x69ad,	// (0x00038850) list_single_graphic_hl_pane_g3_cp2

0x2450,	// (0x000342f3) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x2450,	// (0x000342f3) list_single_graphic_hl_pane_g4_cp2

0x67c6,	// (0x00038669) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x67c6,	// (0x00038669) list_single_graphic_hl_pane_g5_cp2

0xd313,	// (0x0003f1b6) control_pane_g4_ParamLimits

0xd313,	// (0x0003f1b6) control_pane_g4

0x27b4,	// (0x00034657) bg_popup_sub_pane_cp10_ParamLimits

0x62ef,	// (0x00038192) list_choice_list_pane_ParamLimits

0x62fe,	// (0x000381a1) scroll_pane_cp23

0x13b8,	// (0x0003325b) bg_popup_preview_window_pane_cp02_ParamLimits

0x6802,	// (0x000386a5) list_preview_fixed_pane_ParamLimits

0x6818,	// (0x000386bb) list_preview_fixed_pane_cp_ParamLimits

0x6818,	// (0x000386bb) list_preview_fixed_pane_cp

0x6824,	// (0x000386c7) popup_preview_fixed_window_g1_ParamLimits

0x6824,	// (0x000386c7) popup_preview_fixed_window_g1

0x6830,	// (0x000386d3) popup_preview_fixed_window_g2_ParamLimits

0x6830,	// (0x000386d3) popup_preview_fixed_window_g2

0x0002,

0xfb73,	// (0x00041a16) popup_preview_fixed_window_g_ParamLimits

0xfb73,	// (0x00041a16) popup_preview_fixed_window_g

0xcf81,	// (0x0003ee24) aid_navi_side_left_pane_ParamLimits

0xcf91,	// (0x0003ee34) aid_navi_side_right_pane_ParamLimits

0xcfa0,	// (0x0003ee43) navi_icon_pane_stacon_ParamLimits

0xcfb0,	// (0x0003ee53) navi_navi_pane_stacon_ParamLimits

0xcfa0,	// (0x0003ee43) navi_text_pane_stacon_ParamLimits

0xcc34,	// (0x0003ead7) main_text_info_pane

0x69cf,	// (0x00038872) listscroll_text_info_pane

0x69d7,	// (0x0003887a) list_text_info_pane_ParamLimits

0x69d7,	// (0x0003887a) list_text_info_pane

0x69e6,	// (0x00038889) scroll_pane_cp24_ParamLimits

0x69e6,	// (0x00038889) scroll_pane_cp24

0x84f8,	// (0x0003a39b) list_text_info_pane_t1_ParamLimits

0x84f8,	// (0x0003a39b) list_text_info_pane_t1

0xd471,	// (0x0003f314) popup_fast_swap2_window_ParamLimits

0xd471,	// (0x0003f314) popup_fast_swap2_window

0x6a04,	// (0x000388a7) aid_size_cell_fast2

0x0e88,	// (0x00032d2b) bg_popup_window_pane_cp17

0x4912,	// (0x000367b5) heading_pane_cp2

0x15ce,	// (0x00033471) listscroll_fast2_pane

0x6a0e,	// (0x000388b1) grid_fast2_pane

0x6a16,	// (0x000388b9) listscroll_fast2_pane_g1

0x6a1e,	// (0x000388c1) listscroll_fast2_pane_g2

0x0001,

0xfbf6,	// (0x00041a99) listscroll_fast2_pane_g

0x1a21,	// (0x000338c4) scroll_pane_cp26

0x6a26,	// (0x000388c9) cell_fast2_pane_ParamLimits

0x6a26,	// (0x000388c9) cell_fast2_pane

0x6a3c,	// (0x000388df) cell_fast2_pane_g1

0x6a45,	// (0x000388e8) cell_fast2_pane_g2

0x6a4e,	// (0x000388f1) cell_fast2_pane_g3

0x0002,

0xfbfb,	// (0x00041a9e) cell_fast2_pane_g

0x1630,	// (0x000334d3) grid_highlight_pane_cp9

0xd43d,	// (0x0003f2e0) main_eswt_pane_ParamLimits

0xd43d,	// (0x0003f2e0) main_eswt_pane

0x69fb,	// (0x0003889e) list_single_text_info_pane

0x6a56,	// (0x000388f9) eswt_ctrl_button_pane

0x6a56,	// (0x000388f9) eswt_ctrl_canvas_pane

0x6a5e,	// (0x00038901) eswt_ctrl_combo_pane

0x6a56,	// (0x000388f9) eswt_ctrl_default_pane

0x6a56,	// (0x000388f9) eswt_ctrl_label_pane

0x6a66,	// (0x00038909) eswt_ctrl_wait_pane

0x6a6e,	// (0x00038911) eswt_shell_pane

0x0e88,	// (0x00032d2b) listscroll_eswt_app_pane

0x6a8a,	// (0x0003892d) popup_eswt_tasktip_window_ParamLimits

0x6a8a,	// (0x0003892d) popup_eswt_tasktip_window

0x45e8,	// (0x0003648b) bg_popup_window_pane_cp18

0x6a9b,	// (0x0003893e) eswt_control_pane_g1_ParamLimits

0x6a9b,	// (0x0003893e) eswt_control_pane_g1

0x6aa8,	// (0x0003894b) eswt_control_pane_g2_ParamLimits

0x6aa8,	// (0x0003894b) eswt_control_pane_g2

0x6ab5,	// (0x00038958) eswt_control_pane_g3_ParamLimits

0x6ab5,	// (0x00038958) eswt_control_pane_g3

0x6ac2,	// (0x00038965) eswt_control_pane_g4_ParamLimits

0x6ac2,	// (0x00038965) eswt_control_pane_g4

0x0003,

0xfc02,	// (0x00041aa5) eswt_control_pane_g_ParamLimits

0xfc02,	// (0x00041aa5) eswt_control_pane_g

0x18de,	// (0x00033781) bg_button_pane_ParamLimits

0x18de,	// (0x00033781) bg_button_pane

0x1645,	// (0x000334e8) common_borders_pane_copy2_ParamLimits

0x1645,	// (0x000334e8) common_borders_pane_copy2

0x6acf,	// (0x00038972) control_button_pane_g1_ParamLimits

0x6acf,	// (0x00038972) control_button_pane_g1

0x6adb,	// (0x0003897e) control_button_pane_g2_ParamLimits

0x6adb,	// (0x0003897e) control_button_pane_g2

0x6ae7,	// (0x0003898a) control_button_pane_g3_ParamLimits

0x6ae7,	// (0x0003898a) control_button_pane_g3

0x0002,

0xfc0b,	// (0x00041aae) control_button_pane_g_ParamLimits

0xfc0b,	// (0x00041aae) control_button_pane_g

0x6afb,	// (0x0003899e) control_button_pane_t1

0x6b09,	// (0x000389ac) control_button_pane_t2

0x0001,

0xfc12,	// (0x00041ab5) control_button_pane_t

0x4568,	// (0x0003640b) bg_button_pane_g1

0x4570,	// (0x00036413) bg_button_pane_g2

0x4578,	// (0x0003641b) bg_button_pane_g3

0x4580,	// (0x00036423) bg_button_pane_g4

0x4588,	// (0x0003642b) bg_button_pane_g5

0x4590,	// (0x00036433) bg_button_pane_g6

0x4598,	// (0x0003643b) bg_button_pane_g7

0x45a0,	// (0x00036443) bg_button_pane_g8

0x45a8,	// (0x0003644b) bg_button_pane_g9

0x0008,

0xf866,	// (0x00041709) bg_button_pane_g

0x62aa,	// (0x0003814d) common_borders_pane_ParamLimits

0x62aa,	// (0x0003814d) common_borders_pane

0x6a9b,	// (0x0003893e) eswt_control_pane_g1_copy1_ParamLimits

0x6a9b,	// (0x0003893e) eswt_control_pane_g1_copy1

0x6aa8,	// (0x0003894b) eswt_control_pane_g2_copy1_ParamLimits

0x6aa8,	// (0x0003894b) eswt_control_pane_g2_copy1

0x6ab5,	// (0x00038958) eswt_control_pane_g3_copy1_ParamLimits

0x6ab5,	// (0x00038958) eswt_control_pane_g3_copy1

0x6ac2,	// (0x00038965) eswt_control_pane_g4_copy1_ParamLimits

0x6ac2,	// (0x00038965) eswt_control_pane_g4_copy1

0x62e5,	// (0x00038188) bg_eswt_ctrl_canvas_pane_g1

0x62aa,	// (0x0003814d) common_borders_pane_cp2_ParamLimits

0x62aa,	// (0x0003814d) common_borders_pane_cp2

0x62aa,	// (0x0003814d) common_borders_pane_cp3_ParamLimits

0x62aa,	// (0x0003814d) common_borders_pane_cp3

0x6b17,	// (0x000389ba) separator_horizontal_pane

0x1dcd,	// (0x00033c70) separator_vertical_pane

0x6a9b,	// (0x0003893e) eswt_control_pane_g1_copy2_ParamLimits

0x6a9b,	// (0x0003893e) eswt_control_pane_g1_copy2

0x6aa8,	// (0x0003894b) eswt_control_pane_g2_copy2_ParamLimits

0x6aa8,	// (0x0003894b) eswt_control_pane_g2_copy2

0x6ab5,	// (0x00038958) eswt_control_pane_g3_copy2_ParamLimits

0x6ab5,	// (0x00038958) eswt_control_pane_g3_copy2

0x6ac2,	// (0x00038965) eswt_control_pane_g4_copy2_ParamLimits

0x6ac2,	// (0x00038965) eswt_control_pane_g4_copy2

0x0e88,	// (0x00032d2b) common_borders_pane_cp4

0x6b1f,	// (0x000389c2) separator_horizontal_pane_g1

0x6b28,	// (0x000389cb) separator_horizontal_pane_g2

0x6b31,	// (0x000389d4) separator_horizontal_pane_g3

0x0002,

0xfc17,	// (0x00041aba) separator_horizontal_pane_g

0x6a9b,	// (0x0003893e) eswt_control_pane_g1_copy3_ParamLimits

0x6a9b,	// (0x0003893e) eswt_control_pane_g1_copy3

0x6aa8,	// (0x0003894b) eswt_control_pane_g2_copy3_ParamLimits

0x6aa8,	// (0x0003894b) eswt_control_pane_g2_copy3

0x6ab5,	// (0x00038958) eswt_control_pane_g3_copy3_ParamLimits

0x6ab5,	// (0x00038958) eswt_control_pane_g3_copy3

0x6ac2,	// (0x00038965) eswt_control_pane_g4_copy3_ParamLimits

0x6ac2,	// (0x00038965) eswt_control_pane_g4_copy3

0x0e88,	// (0x00032d2b) common_borders_pane_cp5

0x6b3a,	// (0x000389dd) separator_vertical_pane_g1

0x6b43,	// (0x000389e6) separator_vertical_pane_g2

0x6b4c,	// (0x000389ef) separator_vertical_pane_g3

0x0002,

0xfc1e,	// (0x00041ac1) separator_vertical_pane_g

0x6a9b,	// (0x0003893e) eswt_control_pane_g1_copy4_ParamLimits

0x6a9b,	// (0x0003893e) eswt_control_pane_g1_copy4

0x6aa8,	// (0x0003894b) eswt_control_pane_g2_copy4_ParamLimits

0x6aa8,	// (0x0003894b) eswt_control_pane_g2_copy4

0x6ab5,	// (0x00038958) eswt_control_pane_g3_copy4_ParamLimits

0x6ab5,	// (0x00038958) eswt_control_pane_g3_copy4

0x6ac2,	// (0x00038965) eswt_control_pane_g4_copy4_ParamLimits

0x6ac2,	// (0x00038965) eswt_control_pane_g4_copy4

0x8515,	// (0x0003a3b8) eswt_ctrl_combo_button_pane

0x851d,	// (0x0003a3c0) eswt_ctrl_input_pane

0x8525,	// (0x0003a3c8) popup_choice_list_window_cp70

0x852d,	// (0x0003a3d0) eswt_ctrl_input_pane_t1

0x0e88,	// (0x00032d2b) input_focus_pane_cp70

0x62aa,	// (0x0003814d) bg_button_pane_cp70_ParamLimits

0x62aa,	// (0x0003814d) bg_button_pane_cp70

0x853b,	// (0x0003a3de) eswt_ctrl_combo_button_pane_g1

0x6b55,	// (0x000389f8) wait_bar_pane_cp70

0x45e8,	// (0x0003648b) bg_popup_window_pane_cp70_ParamLimits

0x45e8,	// (0x0003648b) bg_popup_window_pane_cp70

0x6b5d,	// (0x00038a00) popup_eswt_tasktip_window_t1

0x6b73,	// (0x00038a16) wait_bar_pane_cp71_ParamLimits

0x6b73,	// (0x00038a16) wait_bar_pane_cp71

0x6b7f,	// (0x00038a22) grid_eswt_app_pane

0x1dd6,	// (0x00033c79) scroll_pane_cp70

0x8543,	// (0x0003a3e6) cell_eswt_app_pane_ParamLimits

0x8543,	// (0x0003a3e6) cell_eswt_app_pane

0x856b,	// (0x0003a40e) cell_eswt_app_pane_g1_ParamLimits

0x856b,	// (0x0003a40e) cell_eswt_app_pane_g1

0x859a,	// (0x0003a43d) cell_eswt_app_pane_g2_ParamLimits

0x859a,	// (0x0003a43d) cell_eswt_app_pane_g2

0x0001,

0xfc25,	// (0x00041ac8) cell_eswt_app_pane_g_ParamLimits

0xfc25,	// (0x00041ac8) cell_eswt_app_pane_g

0x85c3,	// (0x0003a466) cell_eswt_app_pane_t1_ParamLimits

0x85c3,	// (0x0003a466) cell_eswt_app_pane_t1

0x6b88,	// (0x00038a2b) grid_highlight_pane_cp70_ParamLimits

0x6b88,	// (0x00038a2b) grid_highlight_pane_cp70

0x184e,	// (0x000336f1) set_content_pane_g1

0x434f,	// (0x000361f2) status_small_volume_pane

0xe114,	// (0x0003ffb7) status_small_volume_pane_g1

0xe11c,	// (0x0003ffbf) volume_small2_pane

0xe125,	// (0x0003ffc8) volume_small2_pane_g1

0xe12e,	// (0x0003ffd1) volume_small2_pane_g2

0xe137,	// (0x0003ffda) volume_small2_pane_g3

0xe140,	// (0x0003ffe3) volume_small2_pane_g4

0xe149,	// (0x0003ffec) volume_small2_pane_g5

0xe152,	// (0x0003fff5) volume_small2_pane_g6

0xe15b,	// (0x0003fffe) volume_small2_pane_g7

0xe164,	// (0x00040007) volume_small2_pane_g8

0xe16d,	// (0x00040010) volume_small2_pane_g9

0xe176,	// (0x00040019) volume_small2_pane_g10

0x0009,

0xfc2a,	// (0x00041acd) volume_small2_pane_g

0x6618,	// (0x000384bb) fep_vkb_top_text_pane_g1_ParamLimits

0x8447,	// (0x0003a2ea) fep_vkb_top_text_pane_t1_ParamLimits

0x683c,	// (0x000386df) popup_preview_fixed_window_g3_ParamLimits

0x683c,	// (0x000386df) popup_preview_fixed_window_g3

0xd833,	// (0x0003f6d6) popup_toolbar_trans_pane

0x8002,	// (0x00039ea5) aid_height_set_list_ParamLimits

0x5696,	// (0x00037539) aid_size_parent_ParamLimits

0x27b4,	// (0x00034657) list_highlight_pane_cp2_ParamLimits

0x184e,	// (0x000336f1) set_content_pane_g1_ParamLimits

0x814d,	// (0x00039ff0) list_single_image_pane_ParamLimits

0x814d,	// (0x00039ff0) list_single_image_pane

0x85f5,	// (0x0003a498) aid_size_cell_image_ParamLimits

0x85f5,	// (0x0003a498) aid_size_cell_image

0x8602,	// (0x0003a4a5) grid_single_image_pane_ParamLimits

0x8602,	// (0x0003a4a5) grid_single_image_pane

0x184e,	// (0x000336f1) list_single_image_pane_g1_ParamLimits

0x184e,	// (0x000336f1) list_single_image_pane_g1

0x18f8,	// (0x0003379b) list_single_image_pane_g2_ParamLimits

0x18f8,	// (0x0003379b) list_single_image_pane_g2

0x0001,

0xfc3f,	// (0x00041ae2) list_single_image_pane_g_ParamLimits

0xfc3f,	// (0x00041ae2) list_single_image_pane_g

0x6b94,	// (0x00038a37) list_single_image_pane_t1_ParamLimits

0x6b94,	// (0x00038a37) list_single_image_pane_t1

0x860e,	// (0x0003a4b1) cell_image_list_pane_ParamLimits

0x860e,	// (0x0003a4b1) cell_image_list_pane

0x8621,	// (0x0003a4c4) cell_image_list_pane_g1

0x862a,	// (0x0003a4cd) cell_image_list_pane_g2

0x0001,

0xfc44,	// (0x00041ae7) cell_image_list_pane_g

0x6baa,	// (0x00038a4d) aid_size_cell_tb_trans_pane

0x18de,	// (0x00033781) bg_tb_trans_pane

0x6bbc,	// (0x00038a5f) grid_tb_trans_pane

0x4568,	// (0x0003640b) bg_tb_trans_pane_g1

0x4570,	// (0x00036413) bg_tb_trans_pane_g2

0x4578,	// (0x0003641b) bg_tb_trans_pane_g3

0x4580,	// (0x00036423) bg_tb_trans_pane_g4

0x4588,	// (0x0003642b) bg_tb_trans_pane_g5

0x45a0,	// (0x00036443) bg_tb_trans_pane_g6

0x45a8,	// (0x0003644b) bg_tb_trans_pane_g7

0x4590,	// (0x00036433) bg_tb_trans_pane_g8

0x4598,	// (0x0003643b) bg_tb_trans_pane_g9

0x0008,

0xfc49,	// (0x00041aec) bg_tb_trans_pane_g

0x6bd0,	// (0x00038a73) cell_toolbar_trans_pane_ParamLimits

0x6bd0,	// (0x00038a73) cell_toolbar_trans_pane

0x62e5,	// (0x00038188) cell_toolbar_trans_pane_g1

0x8392,	// (0x0003a235) list_form2_midp_pane_t1

0x83a0,	// (0x0003a243) list_form2_midp_pane_t2

0x0001,

0xfae6,	// (0x00041989) list_form2_midp_pane_t

0x5fb9,	// (0x00037e5c) scroll_pane_cp51_ParamLimits

0x612f,	// (0x00037fd2) form2_midp_wait_pane_g1

0x6138,	// (0x00037fdb) form2_midp_wait_pane_g2

0x6141,	// (0x00037fe4) form2_midp_wait_pane_g3

0x0002,

0xfafb,	// (0x0004199e) form2_midp_wait_pane_g

0x11e5,	// (0x00033088) list_highlight_pane_cp21_ParamLimits

0x617f,	// (0x00038022) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x618e,	// (0x00038031) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x0925,	// (0x000327c8) list_single_2graphic_im_pane_ParamLimits

0x0925,	// (0x000327c8) list_single_2graphic_im_pane

0x8633,	// (0x0003a4d6) list_single_2graphic_im_pane_g1_ParamLimits

0x8633,	// (0x0003a4d6) list_single_2graphic_im_pane_g1

0x8644,	// (0x0003a4e7) list_single_2graphic_im_pane_g2_ParamLimits

0x8644,	// (0x0003a4e7) list_single_2graphic_im_pane_g2

0x8650,	// (0x0003a4f3) list_single_2graphic_im_pane_g3_ParamLimits

0x8650,	// (0x0003a4f3) list_single_2graphic_im_pane_g3

0x0003,

0xfc5c,	// (0x00041aff) list_single_2graphic_im_pane_g_ParamLimits

0xfc5c,	// (0x00041aff) list_single_2graphic_im_pane_g

0x8664,	// (0x0003a507) list_single_2graphic_im_pane_t1_ParamLimits

0x8664,	// (0x0003a507) list_single_2graphic_im_pane_t1

0x6848,	// (0x000386eb) list_single_graphic_2heading_pane_fp_ParamLimits

0x6848,	// (0x000386eb) list_single_graphic_2heading_pane_fp

0x0bee,	// (0x00032a91) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0bee,	// (0x00032a91) list_single_graphic_2heading_pane_fp_g1

0x685c,	// (0x000386ff) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x685c,	// (0x000386ff) list_single_graphic_2heading_pane_fp_g2

0x182a,	// (0x000336cd) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x182a,	// (0x000336cd) list_single_graphic_2heading_pane_fp_g3

0x3403,	// (0x000352a6) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3403,	// (0x000352a6) list_single_graphic_2heading_pane_fp_g4

0x6868,	// (0x0003870b) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6868,	// (0x0003870b) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb83,	// (0x00041a26) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb83,	// (0x00041a26) list_single_graphic_2heading_pane_fp_g

0x0d21,	// (0x00032bc4) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x0d21,	// (0x00032bc4) list_single_graphic_2heading_pane_fp_t1

0x0c26,	// (0x00032ac9) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0c26,	// (0x00032ac9) list_single_graphic_2heading_pane_fp_t2

0x0d37,	// (0x00032bda) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x0d37,	// (0x00032bda) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc65,	// (0x00041b08) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc65,	// (0x00041b08) list_single_graphic_2heading_pane_fp_t

0x636e,	// (0x00038211) fep_hwr_write_pane_g5_ParamLimits

0x636e,	// (0x00038211) fep_hwr_write_pane_g5

0x637a,	// (0x0003821d) fep_hwr_write_pane_g6_ParamLimits

0x637a,	// (0x0003821d) fep_hwr_write_pane_g6

0x6a6e,	// (0x00038911) eswt_shell_pane_ParamLimits

0x45e8,	// (0x0003648b) bg_popup_window_pane_cp18_ParamLimits

0x563a,	// (0x000374dd) heading_pane_cp70

0x6b5d,	// (0x00038a00) popup_eswt_tasktip_window_t1_ParamLimits

0x7ba4,	// (0x00039a47) aid_touch_tab_arrow_left

0x7bb0,	// (0x00039a53) aid_touch_tab_arrow_right

0x7542,	// (0x000393e5) title_pane_g3_ParamLimits

0x7542,	// (0x000393e5) title_pane_g3

0x18ae,	// (0x00033751) set_value_pane_g1

0xd833,	// (0x0003f6d6) popup_toolbar_trans_pane_ParamLimits

0x6baa,	// (0x00038a4d) aid_size_cell_tb_trans_pane_ParamLimits

0x18de,	// (0x00033781) bg_tb_trans_pane_ParamLimits

0x6bbc,	// (0x00038a5f) grid_tb_trans_pane_ParamLimits

0x13b8,	// (0x0003325b) cont_note_pane_ParamLimits

0x13b8,	// (0x0003325b) cont_note_pane

0x1645,	// (0x000334e8) cont_snote2_single_text_pane_ParamLimits

0x1645,	// (0x000334e8) cont_snote2_single_text_pane

0x1645,	// (0x000334e8) cont_snote2_single_graphic_pane_ParamLimits

0x1645,	// (0x000334e8) cont_snote2_single_graphic_pane

0x4b28,	// (0x000369cb) cont_note_wait_pane_ParamLimits

0x4b28,	// (0x000369cb) cont_note_wait_pane

0x4b28,	// (0x000369cb) cont_note_image_pane_ParamLimits

0x4b28,	// (0x000369cb) cont_note_image_pane

0x6c02,	// (0x00038aa5) popup_note2_window_g1_ParamLimits

0x6c02,	// (0x00038aa5) popup_note2_window_g1

0x6c33,	// (0x00038ad6) popup_note2_window_t1_ParamLimits

0x6c33,	// (0x00038ad6) popup_note2_window_t1

0x6c78,	// (0x00038b1b) popup_note2_window_t2_ParamLimits

0x6c78,	// (0x00038b1b) popup_note2_window_t2

0x6cbd,	// (0x00038b60) popup_note2_window_t3_ParamLimits

0x6cbd,	// (0x00038b60) popup_note2_window_t3

0x6d02,	// (0x00038ba5) popup_note2_window_t4_ParamLimits

0x6d02,	// (0x00038ba5) popup_note2_window_t4

0x143c,	// (0x000332df) popup_note2_window_t5_ParamLimits

0x143c,	// (0x000332df) popup_note2_window_t5

0x0004,

0xfc71,	// (0x00041b14) popup_note2_window_t_ParamLimits

0xfc71,	// (0x00041b14) popup_note2_window_t

0x6d31,	// (0x00038bd4) popup_note2_image_window_g1_ParamLimits

0x6d31,	// (0x00038bd4) popup_note2_image_window_g1

0x6d3d,	// (0x00038be0) popup_note2_image_window_g2_ParamLimits

0x6d3d,	// (0x00038be0) popup_note2_image_window_g2

0x0001,

0xfc7c,	// (0x00041b1f) popup_note2_image_window_g_ParamLimits

0xfc7c,	// (0x00041b1f) popup_note2_image_window_g

0x6d4f,	// (0x00038bf2) popup_note2_image_window_t1_ParamLimits

0x6d4f,	// (0x00038bf2) popup_note2_image_window_t1

0x6d67,	// (0x00038c0a) popup_note2_image_window_t2_ParamLimits

0x6d67,	// (0x00038c0a) popup_note2_image_window_t2

0x6d7f,	// (0x00038c22) popup_note2_image_window_t3_ParamLimits

0x6d7f,	// (0x00038c22) popup_note2_image_window_t3

0x0002,

0xfc81,	// (0x00041b24) popup_note2_image_window_t_ParamLimits

0xfc81,	// (0x00041b24) popup_note2_image_window_t

0x4b36,	// (0x000369d9) popup_note2_wait_window_g1_ParamLimits

0x4b36,	// (0x000369d9) popup_note2_wait_window_g1

0x4b42,	// (0x000369e5) popup_note2_wait_window_g2_ParamLimits

0x4b42,	// (0x000369e5) popup_note2_wait_window_g2

0x4b4e,	// (0x000369f1) popup_note2_wait_window_g3_ParamLimits

0x4b4e,	// (0x000369f1) popup_note2_wait_window_g3

0x0002,

0xf848,	// (0x000416eb) popup_note2_wait_window_g_ParamLimits

0xf848,	// (0x000416eb) popup_note2_wait_window_g

0x6d9b,	// (0x00038c3e) popup_note2_wait_window_t1_ParamLimits

0x6d9b,	// (0x00038c3e) popup_note2_wait_window_t1

0x6db9,	// (0x00038c5c) popup_note2_wait_window_t2_ParamLimits

0x6db9,	// (0x00038c5c) popup_note2_wait_window_t2

0x6dd7,	// (0x00038c7a) popup_note2_wait_window_t3_ParamLimits

0x6dd7,	// (0x00038c7a) popup_note2_wait_window_t3

0x6de9,	// (0x00038c8c) popup_note2_wait_window_t4_ParamLimits

0x6de9,	// (0x00038c8c) popup_note2_wait_window_t4

0x0003,

0xfc88,	// (0x00041b2b) popup_note2_wait_window_t_ParamLimits

0xfc88,	// (0x00041b2b) popup_note2_wait_window_t

0x6dfb,	// (0x00038c9e) wait_bar2_pane_ParamLimits

0x6dfb,	// (0x00038c9e) wait_bar2_pane

0x6e13,	// (0x00038cb6) popup_snote2_single_text_window_g1_ParamLimits

0x6e13,	// (0x00038cb6) popup_snote2_single_text_window_g1

0x6e3b,	// (0x00038cde) popup_snote2_single_text_window_t1_ParamLimits

0x6e3b,	// (0x00038cde) popup_snote2_single_text_window_t1

0x6e87,	// (0x00038d2a) popup_snote2_single_text_window_t2_ParamLimits

0x6e87,	// (0x00038d2a) popup_snote2_single_text_window_t2

0x6ed3,	// (0x00038d76) popup_snote2_single_text_window_t3_ParamLimits

0x6ed3,	// (0x00038d76) popup_snote2_single_text_window_t3

0x6f14,	// (0x00038db7) popup_snote2_single_text_window_t4_ParamLimits

0x6f14,	// (0x00038db7) popup_snote2_single_text_window_t4

0x6f4a,	// (0x00038ded) popup_snote2_single_text_window_t5_ParamLimits

0x6f4a,	// (0x00038ded) popup_snote2_single_text_window_t5

0x0004,

0xfc91,	// (0x00041b34) popup_snote2_single_text_window_t_ParamLimits

0xfc91,	// (0x00041b34) popup_snote2_single_text_window_t

0x6f75,	// (0x00038e18) popup_snote2_single_graphic_window_g1_ParamLimits

0x6f75,	// (0x00038e18) popup_snote2_single_graphic_window_g1

0x6f9d,	// (0x00038e40) popup_snote2_single_graphic_window_g2_ParamLimits

0x6f9d,	// (0x00038e40) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9c,	// (0x00041b3f) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9c,	// (0x00041b3f) popup_snote2_single_graphic_window_g

0x6fc5,	// (0x00038e68) popup_snote2_single_graphic_window_t1_ParamLimits

0x6fc5,	// (0x00038e68) popup_snote2_single_graphic_window_t1

0x7011,	// (0x00038eb4) popup_snote2_single_graphic_window_t2_ParamLimits

0x7011,	// (0x00038eb4) popup_snote2_single_graphic_window_t2

0x6ed3,	// (0x00038d76) popup_snote2_single_graphic_window_t3_ParamLimits

0x6ed3,	// (0x00038d76) popup_snote2_single_graphic_window_t3

0x6f14,	// (0x00038db7) popup_snote2_single_graphic_window_t4_ParamLimits

0x6f14,	// (0x00038db7) popup_snote2_single_graphic_window_t4

0x6f4a,	// (0x00038ded) popup_snote2_single_graphic_window_t5_ParamLimits

0x6f4a,	// (0x00038ded) popup_snote2_single_graphic_window_t5

0x0004,

0xfca1,	// (0x00041b44) popup_snote2_single_graphic_window_t_ParamLimits

0xfca1,	// (0x00041b44) popup_snote2_single_graphic_window_t

0x5f52,	// (0x00037df5) clock_nsta_pane_cp2_t1

0x5f52,	// (0x00037df5) clock_nsta_pane_cp2_t2

0x0001,

0xfabc,	// (0x0004195f) clock_nsta_pane_cp2_t

0x05a1,	// (0x00032444) form_field_data_wide_pane_g1_ParamLimits

0x184e,	// (0x000336f1) form_field_data_wide_pane_g2_ParamLimits

0x184e,	// (0x000336f1) form_field_data_wide_pane_g2

0x18f8,	// (0x0003379b) form_field_data_wide_pane_g3_ParamLimits

0x18f8,	// (0x0003379b) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x00041523) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x00041523) form_field_data_wide_pane_g

0x82a1,	// (0x0003a144) grid_touch_3_pane_ParamLimits

0x82a1,	// (0x0003a144) grid_touch_3_pane

0x8695,	// (0x0003a538) cell_touch_3_pane_ParamLimits

0x8695,	// (0x0003a538) cell_touch_3_pane

0x62e5,	// (0x00038188) cell_touch_3_pane_g1

0x62e5,	// (0x00038188) cell_touch_3_pane_g2

0x0001,

0xfb41,	// (0x000419e4) cell_touch_3_pane_g

0x1494,	// (0x00033337) cont_query_data_pane

0x149c,	// (0x0003333f) cont_query_data_pane_cp1

0x705d,	// (0x00038f00) button_value_adjust_pane_cp7

0x7065,	// (0x00038f08) query_popup_pane_cp3

0x1ff8,	// (0x00033e9b) bg_popup_sub_pane_cp22_ParamLimits

0xd0a7,	// (0x0003ef4a) navi_navi_volume_pane_cp2

0xd0bf,	// (0x0003ef62) popup_side_volume_key_window_g2

0xd0cb,	// (0x0003ef6e) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x000415b9) popup_side_volume_key_window_g

0xd0e5,	// (0x0003ef88) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x000415c0) popup_side_volume_key_window_t

0x23d3,	// (0x00034276) popup_side_volume_key_window_ParamLimits

0x1842,	// (0x000336e5) list_double_graphic_pane_g4_ParamLimits

0x1842,	// (0x000336e5) list_double_graphic_pane_g4

0x094e,	// (0x000327f1) list_single_2heading_msg_pane_ParamLimits

0x094e,	// (0x000327f1) list_single_2heading_msg_pane

0x0d55,	// (0x00032bf8) list_single_2heading_msg_pane_g1_ParamLimits

0x0d55,	// (0x00032bf8) list_single_2heading_msg_pane_g1

0x2450,	// (0x000342f3) list_single_2heading_msg_pane_g2_ParamLimits

0x2450,	// (0x000342f3) list_single_2heading_msg_pane_g2

0x0d61,	// (0x00032c04) list_single_2heading_msg_pane_g3_ParamLimits

0x0d61,	// (0x00032c04) list_single_2heading_msg_pane_g3

0x0d6d,	// (0x00032c10) list_single_2heading_msg_pane_g4_ParamLimits

0x0d6d,	// (0x00032c10) list_single_2heading_msg_pane_g4

0x0003,

0xfcac,	// (0x00041b4f) list_single_2heading_msg_pane_g_ParamLimits

0xfcac,	// (0x00041b4f) list_single_2heading_msg_pane_g

0x0d85,	// (0x00032c28) list_single_2heading_msg_pane_t1_ParamLimits

0x0d85,	// (0x00032c28) list_single_2heading_msg_pane_t1

0x0dad,	// (0x00032c50) list_single_2heading_msg_pane_t2_ParamLimits

0x0dad,	// (0x00032c50) list_single_2heading_msg_pane_t2

0x0ddc,	// (0x00032c7f) list_single_2heading_msg_pane_t3_ParamLimits

0x0ddc,	// (0x00032c7f) list_single_2heading_msg_pane_t3

0x0e15,	// (0x00032cb8) list_single_2heading_msg_pane_t4_ParamLimits

0x0e15,	// (0x00032cb8) list_single_2heading_msg_pane_t4

0x0003,

0xfcb5,	// (0x00041b58) list_single_2heading_msg_pane_t_ParamLimits

0xfcb5,	// (0x00041b58) list_single_2heading_msg_pane_t

0x11a1,	// (0x00033044) title_pane_g4_ParamLimits

0x11a1,	// (0x00033044) title_pane_g4

0xcef7,	// (0x0003ed9a) title_pane_stacon_g3_ParamLimits

0xcef7,	// (0x0003ed9a) title_pane_stacon_g3

0x6bf6,	// (0x00038a99) list_single_2graphic_im_pane_g4_ParamLimits

0x6bf6,	// (0x00038a99) list_single_2graphic_im_pane_g4

0x5464,	// (0x00037307) popup_side_volume_key_window_cp

0x58b6,	// (0x00037759) main_idle_act2_pane_t1

0xd8fe,	// (0x0003f7a1) toolbar_button_pane_g10

0x77c6,	// (0x00039669) popup_toolbar_window_cp1

0x5f43,	// (0x00037de6) clock_nsta_pane_cp_t1

0x5f43,	// (0x00037de6) clock_nsta_pane_cp_t2

0x0001,

0xfab7,	// (0x0004195a) clock_nsta_pane_cp_t

0xd0a7,	// (0x0003ef4a) navi_navi_volume_pane_cp2_ParamLimits

0xd0b3,	// (0x0003ef56) popup_side_volume_key_window_g1_ParamLimits

0xd0bf,	// (0x0003ef62) popup_side_volume_key_window_g2_ParamLimits

0xd0cb,	// (0x0003ef6e) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x000415b9) popup_side_volume_key_window_g_ParamLimits

0xdd94,	// (0x0003fc37) fep_hwr_aid_pane

0xde35,	// (0x0003fcd8) bg_fep_hwr_top_pane_g4_ParamLimits

0x6350,	// (0x000381f3) fep_hwr_top_pane_g1_ParamLimits

0x633e,	// (0x000381e1) fep_hwr_top_pane_g2_ParamLimits

0xde55,	// (0x0003fcf8) fep_hwr_top_pane_g3_ParamLimits

0xfb0c,	// (0x000419af) fep_hwr_top_pane_g_ParamLimits

0xde6a,	// (0x0003fd0d) fep_hwr_top_text_pane_ParamLimits

0x5238,	// (0x000370db) aid_touch_tab_arrow_arrow_2

0x522f,	// (0x000370d2) aid_touch_tab_arrow_left_2

0xdda8,	// (0x0003fc4b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xdddb,	// (0x0003fc7e) fep_hwr_prediction_pane

0x6483,	// (0x00038326) fep_vkb_prediction_pane

0x8424,	// (0x0003a2c7) fep_vkb_side_pane_g3_ParamLimits

0x8424,	// (0x0003a2c7) fep_vkb_side_pane_g3

0xdfd9,	// (0x0003fe7c) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xe043,	// (0x0003fee6) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xe050,	// (0x0003fef3) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbb,	// (0x00041a5e) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xe17f,	// (0x00040022) fep_hwr_prediction_pane_g1

0xe189,	// (0x0004002c) fep_hwr_prediction_pane_g2

0xe191,	// (0x00040034) fep_hwr_prediction_pane_g3

0xe199,	// (0x0004003c) fep_hwr_prediction_pane_g4

0x0003,

0xfcbe,	// (0x00041b61) fep_hwr_prediction_pane_g

0x7076,	// (0x00038f19) fep_vkb_prediction_pane_g1

0x7080,	// (0x00038f23) fep_vkb_prediction_pane_g2

0x7088,	// (0x00038f2b) fep_vkb_prediction_pane_g3

0x7090,	// (0x00038f33) fep_vkb_prediction_pane_g4

0x0003,

0xfcc7,	// (0x00041b6a) fep_vkb_prediction_pane_g

0xdbcc,	// (0x0003fa6f) slider_set_pane_g3

0xdbe0,	// (0x0003fa83) slider_set_pane_g4

0xdbf8,	// (0x0003fa9b) slider_set_pane_g5

0xdbcc,	// (0x0003fa6f) slider_set_pane_g6

0xdc0e,	// (0x0003fab1) slider_set_pane_g7

0x56b9,	// (0x0003755c) slider_form_pane_g3

0x56c2,	// (0x00037565) slider_form_pane_g4

0x56ca,	// (0x0003756d) slider_form_pane_g5

0x56b9,	// (0x0003755c) slider_form_pane_g6

0x8132,	// (0x00039fd5) slider_form_pane_g7

0x5aff,	// (0x000379a2) slider_set_pane_vc_g3

0x5b08,	// (0x000379ab) slider_set_pane_vc_g4

0x5b11,	// (0x000379b4) slider_set_pane_vc_g5

0x5aff,	// (0x000379a2) slider_set_pane_vc_g6

0x5b1a,	// (0x000379bd) slider_set_pane_vc_g7

0x5aff,	// (0x000379a2) slider_form_pane_vc_g1

0x5b08,	// (0x000379ab) slider_form_pane_vc_g2

0x5b11,	// (0x000379b4) slider_form_pane_vc_g3

0x5aff,	// (0x000379a2) slider_form_pane_vc_g4

0x5c8e,	// (0x00037b31) slider_form_pane_vc_g5

0x0004,

0xfa89,	// (0x0004192c) slider_form_pane_vc_g

0xcc34,	// (0x0003ead7) main_idle_act3_pane

0x7098,	// (0x00038f3b) ai3_links_pane

0x8787,	// (0x0003a62a) popup_ai3_data_window_ParamLimits

0x8787,	// (0x0003a62a) popup_ai3_data_window

0x0e88,	// (0x00032d2b) grid_ai3_links_pane

0x879f,	// (0x0003a642) cell_ai3_links_pane_ParamLimits

0x879f,	// (0x0003a642) cell_ai3_links_pane

0x70a1,	// (0x00038f44) bg_popup_sub_pane_cp11

0x70ae,	// (0x00038f51) cell_ai3_links_pane_g1

0x0e88,	// (0x00032d2b) bg_popup_sub_pane_cp12

0x70d3,	// (0x00038f76) heading_ai3_data_pane

0x70db,	// (0x00038f7e) list_ai3_gene_pane

0x70e7,	// (0x00038f8a) popup_ai3_data_window_g1

0x70ef,	// (0x00038f92) heading_ai3_data_pane_g1

0x70f7,	// (0x00038f9a) heading_ai3_data_pane_t1

0x7105,	// (0x00038fa8) list_double_ai3_gene_pane_ParamLimits

0x7105,	// (0x00038fa8) list_double_ai3_gene_pane

0x7112,	// (0x00038fb5) list_single_ai3_gene_pane_ParamLimits

0x7112,	// (0x00038fb5) list_single_ai3_gene_pane

0x62aa,	// (0x0003814d) list_highlight_pane_cp7_ParamLimits

0x62aa,	// (0x0003814d) list_highlight_pane_cp7

0x711f,	// (0x00038fc2) list_single_a13_gene_pane_t1_ParamLimits

0x711f,	// (0x00038fc2) list_single_a13_gene_pane_t1

0x7136,	// (0x00038fd9) list_single_ai3_gene_pane_g1

0x713f,	// (0x00038fe2) list_single_ai3_gene_pane_g2

0x0001,

0xfcd0,	// (0x00041b73) list_single_ai3_gene_pane_g

0x7147,	// (0x00038fea) list_double_ai3_gene_pane_g1_ParamLimits

0x7147,	// (0x00038fea) list_double_ai3_gene_pane_g1

0x7153,	// (0x00038ff6) list_double_ai3_gene_pane_t1_ParamLimits

0x7153,	// (0x00038ff6) list_double_ai3_gene_pane_t1

0x716f,	// (0x00039012) list_double_ai3_gene_pane_t2_ParamLimits

0x716f,	// (0x00039012) list_double_ai3_gene_pane_t2

0x7184,	// (0x00039027) list_double_ai3_gene_pane_t3_ParamLimits

0x7184,	// (0x00039027) list_double_ai3_gene_pane_t3

0x0002,

0xfcd5,	// (0x00041b78) list_double_ai3_gene_pane_t_ParamLimits

0xfcd5,	// (0x00041b78) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0d4d,	// (0x00032bf0) aid_size_min_col_2

0x8773,	// (0x0003a616) aid_size_min_msg_ParamLimits

0x8773,	// (0x0003a616) aid_size_min_msg

0x8438,	// (0x0003a2db) fep_vkb_top_text_pane_g2_ParamLimits

0x8438,	// (0x0003a2db) fep_vkb_top_text_pane_g2

0x0001,

0xfb3c,	// (0x000419df) fep_vkb_top_text_pane_g_ParamLimits

0xfb3c,	// (0x000419df) fep_vkb_top_text_pane_g

0xcc34,	// (0x0003ead7) main_hc_apps_shell_pane

0x71a1,	// (0x00039044) grid_hc_apps_pane_ParamLimits

0x71a1,	// (0x00039044) grid_hc_apps_pane

0x71b0,	// (0x00039053) list_hc_apps_pane

0x71b8,	// (0x0003905b) scroll_pane_cp37_ParamLimits

0x71b8,	// (0x0003905b) scroll_pane_cp37

0x87b3,	// (0x0003a656) cell_hc_apps_pane_ParamLimits

0x87b3,	// (0x0003a656) cell_hc_apps_pane

0x8841,	// (0x0003a6e4) cell_hc_apps_pane_g1_ParamLimits

0x8841,	// (0x0003a6e4) cell_hc_apps_pane_g1

0x71c4,	// (0x00039067) cell_hc_apps_pane_g2_ParamLimits

0x71c4,	// (0x00039067) cell_hc_apps_pane_g2

0x71e0,	// (0x00039083) cell_hc_apps_pane_g3_ParamLimits

0x71e0,	// (0x00039083) cell_hc_apps_pane_g3

0x0002,

0xfcdc,	// (0x00041b7f) cell_hc_apps_pane_g_ParamLimits

0xfcdc,	// (0x00041b7f) cell_hc_apps_pane_g

0x886e,	// (0x0003a711) cell_hc_apps_pane_t1_ParamLimits

0x886e,	// (0x0003a711) cell_hc_apps_pane_t1

0x13b8,	// (0x0003325b) grid_highlight_pane_cp10_ParamLimits

0x13b8,	// (0x0003325b) grid_highlight_pane_cp10

0x88ac,	// (0x0003a74f) list_single_hc_apps_pane_ParamLimits

0x88ac,	// (0x0003a74f) list_single_hc_apps_pane

0x88dc,	// (0x0003a77f) list_single_hc_apps_pane_g1

0x35a9,	// (0x0003544c) list_single_hc_apps_pane_g2

0x0001,

0xfce3,	// (0x00041b86) list_single_hc_apps_pane_g

0x35c2,	// (0x00035465) list_single_hc_apps_pane_g2_copy1

0x0e3a,	// (0x00032cdd) list_single_hc_apps_pane_t1

0x11e5,	// (0x00033088) bg_set_opt_pane_cp_ParamLimits

0xce45,	// (0x0003ece8) setting_slider_pane_t1_ParamLimits

0xce5b,	// (0x0003ecfe) setting_slider_pane_t2_ParamLimits

0xce74,	// (0x0003ed17) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00041401) setting_slider_pane_t_ParamLimits

0xce8b,	// (0x0003ed2e) slider_set_pane_ParamLimits

0xd327,	// (0x0003f1ca) control_pane_g5_ParamLimits

0xd327,	// (0x0003f1ca) control_pane_g5

0x5681,	// (0x00037524) slider_set_pane_g1_ParamLimits

0xdbc0,	// (0x0003fa63) slider_set_pane_g2_ParamLimits

0xdbcc,	// (0x0003fa6f) slider_set_pane_g3_ParamLimits

0xdbe0,	// (0x0003fa83) slider_set_pane_g4_ParamLimits

0xdbf8,	// (0x0003fa9b) slider_set_pane_g5_ParamLimits

0xdbcc,	// (0x0003fa6f) slider_set_pane_g6_ParamLimits

0xdc0e,	// (0x0003fab1) slider_set_pane_g7_ParamLimits

0xf964,	// (0x00041807) slider_set_pane_g_ParamLimits

0x11e5,	// (0x00033088) navi_icon_text_pane_ParamLimits

0x7b7e,	// (0x00039a21) aid_fill_nsta_2_ParamLimits

0x7ba4,	// (0x00039a47) aid_touch_tab_arrow_left_ParamLimits

0x7bb0,	// (0x00039a53) aid_touch_tab_arrow_right_ParamLimits

0x7c1a,	// (0x00039abd) clock_nsta_pane_ParamLimits

0x5211,	// (0x000370b4) navi_icon_pane_g1_ParamLimits

0x521d,	// (0x000370c0) navi_text_pane_t1_ParamLimits

0x5f93,	// (0x00037e36) navi_icon_text_pane_g1_ParamLimits

0x5f9f,	// (0x00037e42) navi_icon_text_pane_t1_ParamLimits

0x88dc,	// (0x0003a77f) list_single_hc_apps_pane_g1_ParamLimits

0x35a9,	// (0x0003544c) list_single_hc_apps_pane_g2_ParamLimits

0xfce3,	// (0x00041b86) list_single_hc_apps_pane_g_ParamLimits

0x35c2,	// (0x00035465) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x0e3a,	// (0x00032cdd) list_single_hc_apps_pane_t1_ParamLimits

0xcd77,	// (0x0003ec1a) popup_toolbar2_fixed_window_ParamLimits

0xcd77,	// (0x0003ec1a) popup_toolbar2_fixed_window

0xd82b,	// (0x0003f6ce) popup_toolbar2_float_window

0x0e88,	// (0x00032d2b) bg_popup_sub_pane_cp27

0x7202,	// (0x000390a5) grid_toolbar2_float_pane

0x0e88,	// (0x00032d2b) bg_popup_sub_pane_cp26

0x7202,	// (0x000390a5) grid_toolbar2_fixed_pane

0x88f5,	// (0x0003a798) cell_toolbar2_fixed_pane_ParamLimits

0x88f5,	// (0x0003a798) cell_toolbar2_fixed_pane

0x8906,	// (0x0003a7a9) cell_toolbar2_fixed_pane_g1

0x720a,	// (0x000390ad) toolbar2_fixed_button_pane

0x4568,	// (0x0003640b) toolbar2_fixed_button_pane_g1

0x4570,	// (0x00036413) toolbar2_fixed_button_pane_g2

0x4578,	// (0x0003641b) toolbar2_fixed_button_pane_g3

0x4580,	// (0x00036423) toolbar2_fixed_button_pane_g4

0x4588,	// (0x0003642b) toolbar2_fixed_button_pane_g5

0x4590,	// (0x00036433) toolbar2_fixed_button_pane_g6

0x4598,	// (0x0003643b) toolbar2_fixed_button_pane_g7

0x45a0,	// (0x00036443) toolbar2_fixed_button_pane_g8

0x45a8,	// (0x0003644b) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x00041709) toolbar2_fixed_button_pane_g

0x7212,	// (0x000390b5) cell_toolbar2_float_pane_ParamLimits

0x7212,	// (0x000390b5) cell_toolbar2_float_pane

0x7223,	// (0x000390c6) cell_toolbar2_float_pane_g1

0x720a,	// (0x000390ad) toolbar2_fixed_button_pane_cp

0x83f1,	// (0x0003a294) fep_vkb_accented_list_pane_ParamLimits

0x83f1,	// (0x0003a294) fep_vkb_accented_list_pane

0xdfb9,	// (0x0003fe5c) bg_popup_fep_shadow_pane_g9

0x41d0,	// (0x00036073) bg_popup_fep_shadow_pane_cp3

0x1a08,	// (0x000338ab) list_accented_list_pane

0x722c,	// (0x000390cf) list_single_accented_list_pane_ParamLimits

0x722c,	// (0x000390cf) list_single_accented_list_pane

0x41d0,	// (0x00036073) list_highlight_pane_cp10

0x723d,	// (0x000390e0) list_single_accented_list_pane_t1

0xd791,	// (0x0003f634) popup_slider_window_ParamLimits

0xd791,	// (0x0003f634) popup_slider_window

0x706d,	// (0x00038f10) aid_indentation_list_msg

0x89a1,	// (0x0003a844) bg_popup_window_pane_cp19

0x72a3,	// (0x00039146) popup_slider_window_g1

0x72bf,	// (0x00039162) popup_slider_window_g2

0x72db,	// (0x0003917e) popup_slider_window_g3

0x0005,

0xfce8,	// (0x00041b8b) popup_slider_window_g

0x72f7,	// (0x0003919a) popup_slider_window_t1

0x733b,	// (0x000391de) small_volume_slider_vertical_pane

0x62e5,	// (0x00038188) small_volume_slider_vertical_pane_g1

0x62e5,	// (0x00038188) small_volume_slider_vertical_pane_g2

0x7357,	// (0x000391fa) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfa,	// (0x00041b9d) small_volume_slider_vertical_pane_g

0xcbeb,	// (0x0003ea8e) area_side_right_pane_ParamLimits

0xcbeb,	// (0x0003ea8e) area_side_right_pane

0xe1a1,	// (0x00040044) aid_size_side_button_ParamLimits

0xe1a1,	// (0x00040044) aid_size_side_button

0xe1b5,	// (0x00040058) grid_sctrl_middle_pane_ParamLimits

0xe1b5,	// (0x00040058) grid_sctrl_middle_pane

0xe1d1,	// (0x00040074) sctrl_sk_bottom_pane

0xe1e2,	// (0x00040085) sctrl_sk_top_pane

0xe1f4,	// (0x00040097) aid_touch_sctrl_top

0xe201,	// (0x000400a4) bg_sctrl_sk_pane_ParamLimits

0xe201,	// (0x000400a4) bg_sctrl_sk_pane

0xe20f,	// (0x000400b2) sctrl_sk_top_pane_g1

0xe21c,	// (0x000400bf) sctrl_sk_top_pane_t1

0xe1f4,	// (0x00040097) aid_touch_sctrl_bottom

0xe201,	// (0x000400a4) bg_sctrl_sk_pane_cp_ParamLimits

0xe201,	// (0x000400a4) bg_sctrl_sk_pane_cp

0xe237,	// (0x000400da) sctrl_sk_bottom_pane_g1

0xe21c,	// (0x000400bf) sctrl_sk_bottom_pane_t1

0xe240,	// (0x000400e3) cell_sctrl_middle_pane_ParamLimits

0xe240,	// (0x000400e3) cell_sctrl_middle_pane

0xe25b,	// (0x000400fe) aid_touch_sctrl_middle_ParamLimits

0xe25b,	// (0x000400fe) aid_touch_sctrl_middle

0xe26c,	// (0x0004010f) bg_sctrl_middle_pane_ParamLimits

0xe26c,	// (0x0004010f) bg_sctrl_middle_pane

0xdfd9,	// (0x0003fe7c) cell_sctrl_middle_pane_g1_ParamLimits

0xdfd9,	// (0x0003fe7c) cell_sctrl_middle_pane_g1

0xe27a,	// (0x0004011d) cell_sctrl_middle_pane_g2_ParamLimits

0xe27a,	// (0x0004011d) cell_sctrl_middle_pane_g2

0x0001,

0xfd06,	// (0x00041ba9) cell_sctrl_middle_pane_g_ParamLimits

0xfd06,	// (0x00041ba9) cell_sctrl_middle_pane_g

0x4568,	// (0x0003640b) bg_sctrl_middle_pane_g1

0x4578,	// (0x0003641b) bg_sctrl_middle_pane_g2

0x4570,	// (0x00036413) bg_sctrl_middle_pane_g3

0x4588,	// (0x0003642b) bg_sctrl_middle_pane_g4

0x4580,	// (0x00036423) bg_sctrl_middle_pane_g5

0x4590,	// (0x00036433) bg_sctrl_middle_pane_g6

0x4598,	// (0x0003643b) bg_sctrl_middle_pane_g7

0x45a8,	// (0x0003644b) bg_sctrl_middle_pane_g8

0x0007,

0xfd0b,	// (0x00041bae) bg_sctrl_middle_pane_g

0x45a0,	// (0x00036443) bg_sctrl_middle_pane_g8_copy1

0x4568,	// (0x0003640b) bg_sctrl_sk_pane_g1

0x4570,	// (0x00036413) bg_sctrl_sk_pane_g2

0x4578,	// (0x0003641b) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x00041709) bg_sctrl_sk_pane_g

0x1767,	// (0x0003360a) aid_size_touch_scroll_bar

0x4580,	// (0x00036423) bg_sctrl_sk_pane_g4

0x4588,	// (0x0003642b) bg_sctrl_sk_pane_g5

0x4590,	// (0x00036433) bg_sctrl_sk_pane_g6

0x4598,	// (0x0003643b) bg_sctrl_sk_pane_g7

0x45a0,	// (0x00036443) bg_sctrl_sk_pane_g8

0x45a8,	// (0x0003644b) bg_sctrl_sk_pane_g9

0xd4c7,	// (0x0003f36a) popup_fep_china_hwr2_fs_candidate_window

0xd4cf,	// (0x0003f372) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xd4cf,	// (0x0003f372) popup_fep_china_hwr2_fs_control_window

0xdfd9,	// (0x0003fe7c) sctrl_sk_top_pane_g2

0x0001,

0xfd01,	// (0x00041ba4) sctrl_sk_top_pane_g

0x8a1b,	// (0x0003a8be) aid_fep_china_hwr2_fs_cell_ParamLimits

0x8a1b,	// (0x0003a8be) aid_fep_china_hwr2_fs_cell

0x8a2c,	// (0x0003a8cf) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x8a2c,	// (0x0003a8cf) bg_popup_fep_shadow_pane_cp4

0x8a43,	// (0x0003a8e6) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x8a43,	// (0x0003a8e6) bg_popup_fep_shadow_pane_cp5

0x8a55,	// (0x0003a8f8) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x8a55,	// (0x0003a8f8) popup_fep_china_hwr2_fs_control_bar_grid

0x8a65,	// (0x0003a908) popup_fep_china_hwr2_fs_control_funtion_grid

0x7360,	// (0x00039203) aid_fep_china_hwr2_fs_candi_cell

0x0e88,	// (0x00032d2b) bg_popup_fep_shadow_pane_cp6

0x736a,	// (0x0003920d) popup_fep_china_hwr2_fs_candidate_grid

0x8a6d,	// (0x0003a910) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x8a6d,	// (0x0003a910) cell_fep_china_hwr2_fs_funtion_grid

0x62e5,	// (0x00038188) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x7372,	// (0x00039215) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x7372,	// (0x00039215) cell_fep_china_hwr2_fs_funtion_grid_g1

0x7380,	// (0x00039223) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x7380,	// (0x00039223) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1c,	// (0x00041bbf) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1c,	// (0x00041bbf) cell_fep_china_hwr2_fs_funtion_grid_g

0x8a85,	// (0x0003a928) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x8a85,	// (0x0003a928) cell_fep_china_hwr2_fs_funtion_grid_t1

0x8a9a,	// (0x0003a93d) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x8a9a,	// (0x0003a93d) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd21,	// (0x00041bc4) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd21,	// (0x00041bc4) cell_fep_china_hwr2_fs_funtion_grid_t

0x7396,	// (0x00039239) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x739e,	// (0x00039241) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x73a6,	// (0x00039249) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd26,	// (0x00041bc9) popup_fep_china_hwr2_fs_control_bar_grid_g

0x73ae,	// (0x00039251) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x73ae,	// (0x00039251) cell_fep_china_hwr2_fs_candidate_grid

0x73c7,	// (0x0003926a) popup_fep_china_hwr2_fs_candidate_grid_g20

0x73cf,	// (0x00039272) popup_fep_china_hwr2_fs_candidate_grid_g21

0x62e5,	// (0x00038188) cell_fep_china_hwr2_fs_candidate_grid_g1

0x62e5,	// (0x00038188) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb41,	// (0x000419e4) cell_fep_china_hwr2_fs_candidate_grid_g

0x73d7,	// (0x0003927a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x43c1,	// (0x00036264) clock_nsta_pane_cp_24_ParamLimits

0x43c1,	// (0x00036264) clock_nsta_pane_cp_24

0x441e,	// (0x000362c1) indicator_nsta_pane_cp_24_ParamLimits

0x441e,	// (0x000362c1) indicator_nsta_pane_cp_24

0x511c,	// (0x00036fbf) heading_pane_g1

0x0001,

0xf8cb,	// (0x0004176e) heading_pane_g

0x81f0,	// (0x0003a093) grid_sct_catagory_button_pane

0x5788,	// (0x0003762b) scroll_pane_cp5_ParamLimits

0x5fc5,	// (0x00037e68) button_value_adjust_pane_cp5_ParamLimits

0x5fc5,	// (0x00037e68) button_value_adjust_pane_cp5

0x6083,	// (0x00037f26) form2_midp_time_pane_ParamLimits

0x73e5,	// (0x00039288) cell_sct_catagory_button_pane_ParamLimits

0x73e5,	// (0x00039288) cell_sct_catagory_button_pane

0x62aa,	// (0x0003814d) bg_button_pane_cp01_ParamLimits

0x62aa,	// (0x0003814d) bg_button_pane_cp01

0x62e5,	// (0x00038188) cell_sct_catagory_button_pane_g1

0xd7c8,	// (0x0003f66b) popup_tb_extension_window

0x8ab6,	// (0x0003a959) aid_size_cell_ext_ParamLimits

0x8ab6,	// (0x0003a959) aid_size_cell_ext

0x13b8,	// (0x0003325b) bg_tb_trans_pane_cp1_ParamLimits

0x13b8,	// (0x0003325b) bg_tb_trans_pane_cp1

0x8ad6,	// (0x0003a979) grid_tb_ext_pane_ParamLimits

0x8ad6,	// (0x0003a979) grid_tb_ext_pane

0x8afc,	// (0x0003a99f) cell_tb_ext_pane_ParamLimits

0x8afc,	// (0x0003a99f) cell_tb_ext_pane

0x8b11,	// (0x0003a9b4) cell_tb_ext_pane_g1_ParamLimits

0x8b11,	// (0x0003a9b4) cell_tb_ext_pane_g1

0x73f7,	// (0x0003929a) cell_tb_ext_pane_t1

0x13b8,	// (0x0003325b) list_highlight_pane_cp11_ParamLimits

0x13b8,	// (0x0003325b) list_highlight_pane_cp11

0xcd96,	// (0x0003ec39) popup_uni_indicator_window_ParamLimits

0xcd96,	// (0x0003ec39) popup_uni_indicator_window

0x18de,	// (0x00033781) bg_popup_sub_pane_cp14

0x7412,	// (0x000392b5) list_uniindi_pane

0x741e,	// (0x000392c1) uniindi_top_pane

0x13b8,	// (0x0003325b) bg_uniindi_top_pane

0x743d,	// (0x000392e0) uniindi_top_pane_g1

0x7453,	// (0x000392f6) uniindi_top_pane_g2

0x0003,

0xfd2d,	// (0x00041bd0) uniindi_top_pane_g

0x747d,	// (0x00039320) uniindi_top_pane_t1

0x86c2,	// (0x0003a565) list_single_uniindi_pane_ParamLimits

0x86c2,	// (0x0003a565) list_single_uniindi_pane

0x62e5,	// (0x00038188) bg_uniindi_top_pane_g1

0x86d4,	// (0x0003a577) list_single_uniindi_pane_g1

0x86e7,	// (0x0003a58a) list_single_uniindi_pane_t1

0xcc34,	// (0x0003ead7) control_bg_pane

0x870c,	// (0x0003a5af) bg_sctrl_sk_pane_cp1

0x8715,	// (0x0003a5b8) bg_sctrl_sk_pane_cp2

0x871e,	// (0x0003a5c1) control_bg_pane_g1

0x8727,	// (0x0003a5ca) control_bg_pane_g2

0x0001,

0xfd36,	// (0x00041bd9) control_bg_pane_g

0x5eeb,	// (0x00037d8e) cell_indicator_nsta_pane_g1_ParamLimits

0x82de,	// (0x0003a181) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa5,	// (0x00041948) cell_indicator_nsta_pane_g_ParamLimits

0x0bc4,	// (0x00032a67) form2_midp_time_pane_t1_ParamLimits

0xd43d,	// (0x0003f2e0) main_idle_act4_pane_ParamLimits

0xd43d,	// (0x0003f2e0) main_idle_act4_pane

0xd7c8,	// (0x0003f66b) popup_tb_extension_window_ParamLimits

0x8af0,	// (0x0003a993) tb_ext_find_pane_ParamLimits

0x8af0,	// (0x0003a993) tb_ext_find_pane

0x8730,	// (0x0003a5d3) ai_gene_pane_1_cp1

0x4264,	// (0x00036107) ai_gene_pane_2_cp1

0x8738,	// (0x0003a5db) list_single_idle_plugin_calendar_pane

0x8741,	// (0x0003a5e4) list_single_idle_plugin_notification_pane

0x874a,	// (0x0003a5ed) list_single_idle_plugin_player_pane

0x8b2e,	// (0x0003a9d1) list_single_idle_plugin_shortcut_pane_ParamLimits

0x8b2e,	// (0x0003a9d1) list_single_idle_plugin_shortcut_pane

0x8b50,	// (0x0003a9f3) main_idle_act4_pane_t1

0x8b62,	// (0x0003aa05) main_idle_act4_pane_t2

0x0001,

0xfd3b,	// (0x00041bde) main_idle_act4_pane_t

0x8b74,	// (0x0003aa17) middle_sk_idle_act4_pane_ParamLimits

0x8b74,	// (0x0003aa17) middle_sk_idle_act4_pane

0x8b8a,	// (0x0003aa2d) popup_clock_digital_analogue_window_cp2

0x8ba4,	// (0x0003aa47) shortcut_wheel_idle_act4_pane_ParamLimits

0x8ba4,	// (0x0003aa47) shortcut_wheel_idle_act4_pane

0x62e5,	// (0x00038188) shortcut_wheel_idle_act4_pane_g1

0x62e5,	// (0x00038188) shortcut_wheel_idle_act4_pane_g2

0x62e5,	// (0x00038188) shortcut_wheel_idle_act4_pane_g3

0x62e5,	// (0x00038188) shortcut_wheel_idle_act4_pane_g4

0x62e5,	// (0x00038188) shortcut_wheel_idle_act4_pane_g5

0x8753,	// (0x0003a5f6) shortcut_wheel_idle_act4_pane_g6

0x875b,	// (0x0003a5fe) shortcut_wheel_idle_act4_pane_g7

0x8763,	// (0x0003a606) shortcut_wheel_idle_act4_pane_g8

0x876b,	// (0x0003a60e) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd40,	// (0x00041be3) shortcut_wheel_idle_act4_pane_g

0x6511,	// (0x000383b4) middle_sk_idle_act4_pane_g1_ParamLimits

0x6511,	// (0x000383b4) middle_sk_idle_act4_pane_g1

0x8c14,	// (0x0003aab7) middle_sk_idle_act4_pane_g2_ParamLimits

0x8c14,	// (0x0003aab7) middle_sk_idle_act4_pane_g2

0x0001,

0xfd63,	// (0x00041c06) middle_sk_idle_act4_pane_g_ParamLimits

0xfd63,	// (0x00041c06) middle_sk_idle_act4_pane_g

0x8c20,	// (0x0003aac3) middle_sk_idle_act4_pane_t1_ParamLimits

0x8c20,	// (0x0003aac3) middle_sk_idle_act4_pane_t1

0x8c3d,	// (0x0003aae0) grid_ai_shortcut_pane_ParamLimits

0x8c3d,	// (0x0003aae0) grid_ai_shortcut_pane

0x8c56,	// (0x0003aaf9) list_highlight_pane_cp16_ParamLimits

0x8c56,	// (0x0003aaf9) list_highlight_pane_cp16

0x8c63,	// (0x0003ab06) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x8c63,	// (0x0003ab06) list_single_idle_plugin_shortcut_pane_g1

0x8c6f,	// (0x0003ab12) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x8c6f,	// (0x0003ab12) list_single_idle_plugin_shortcut_pane_g2

0x8c87,	// (0x0003ab2a) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x8c87,	// (0x0003ab2a) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd68,	// (0x00041c0b) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd68,	// (0x00041c0b) list_single_idle_plugin_shortcut_pane_g

0x8c9a,	// (0x0003ab3d) cell_ai_shortcut_pane_ParamLimits

0x8c9a,	// (0x0003ab3d) cell_ai_shortcut_pane

0x8cbb,	// (0x0003ab5e) cell_ai_shortcut_pane_g1_ParamLimits

0x8cbb,	// (0x0003ab5e) cell_ai_shortcut_pane_g1

0x8730,	// (0x0003a5d3) ai_gene_pane_1_cp2

0x8cdd,	// (0x0003ab80) ai_gene_pane_2_cp2

0x8ce5,	// (0x0003ab88) list_highlight_pane_cp15

0x8cee,	// (0x0003ab91) list_single_idle_plugin_calendar_pane_g1

0x8ce5,	// (0x0003ab88) list_highlight_pane_cp17

0x8cf6,	// (0x0003ab99) list_single_idle_plugin_calendar_pane_g1_copy1

0x8cfe,	// (0x0003aba1) list_single_idle_plugin_player_pane_g1

0x5942,	// (0x000377e5) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6f,	// (0x00041c12) list_single_idle_plugin_player_pane_g

0x8d06,	// (0x0003aba9) list_single_idle_plugin_player_pane_t1

0x8d14,	// (0x0003abb7) list_single_idle_plugin_player_pane_t2

0x8d22,	// (0x0003abc5) list_single_idle_plugin_player_pane_t3

0x8d30,	// (0x0003abd3) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd74,	// (0x00041c17) list_single_idle_plugin_player_pane_t

0x8d3e,	// (0x0003abe1) wait_bar_pane_cp15

0x8d46,	// (0x0003abe9) grid_ai_notification_pane

0x5942,	// (0x000377e5) list_single_idle_plugin_notification_pane_g1

0x8d4f,	// (0x0003abf2) cell_ai_notification_pane_ParamLimits

0x8d4f,	// (0x0003abf2) cell_ai_notification_pane

0x8d5c,	// (0x0003abff) cell_ai_notification_pane_g1

0x8d64,	// (0x0003ac07) cell_ai_notification_pane_t1

0x8d72,	// (0x0003ac15) tb_ext_find_button_pane

0x8d7a,	// (0x0003ac1d) tb_ext_find_pane_g1

0x8d82,	// (0x0003ac25) tb_ext_find_pane_t1

0x1f3e,	// (0x00033de1) tb_ext_find_button_pane_g1

0x8d90,	// (0x0003ac33) tb_ext_find_button_pane_g2

0x0001,

0xfd7d,	// (0x00041c20) tb_ext_find_button_pane_g

0x8b50,	// (0x0003a9f3) main_idle_act4_pane_t1_ParamLimits

0x8b62,	// (0x0003aa05) main_idle_act4_pane_t2_ParamLimits

0xfd3b,	// (0x00041bde) main_idle_act4_pane_t_ParamLimits

0x8b8a,	// (0x0003aa2d) popup_clock_digital_analogue_window_cp2_ParamLimits

0x8b98,	// (0x0003aa3b) sat_plugin_idle_act4_pane_ParamLimits

0x8b98,	// (0x0003aa3b) sat_plugin_idle_act4_pane

0x8d99,	// (0x0003ac3c) sat_plugin_idle_act4_pane_t1_ParamLimits

0x8d99,	// (0x0003ac3c) sat_plugin_idle_act4_pane_t1

0x8dac,	// (0x0003ac4f) sat_plugin_idle_act4_pane_t2_ParamLimits

0x8dac,	// (0x0003ac4f) sat_plugin_idle_act4_pane_t2

0x8dbf,	// (0x0003ac62) sat_plugin_idle_act4_pane_t3_ParamLimits

0x8dbf,	// (0x0003ac62) sat_plugin_idle_act4_pane_t3

0x8dd2,	// (0x0003ac75) sat_plugin_idle_act4_pane_t4_ParamLimits

0x8dd2,	// (0x0003ac75) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd82,	// (0x00041c25) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd82,	// (0x00041c25) sat_plugin_idle_act4_pane_t

0xccf7,	// (0x0003eb9a) popup_battery_window_ParamLimits

0xccf7,	// (0x0003eb9a) popup_battery_window

0x13b8,	// (0x0003325b) bg_popup_sub_pane_cp25_ParamLimits

0x13b8,	// (0x0003325b) bg_popup_sub_pane_cp25

0x8de5,	// (0x0003ac88) popup_battery_window_g1_ParamLimits

0x8de5,	// (0x0003ac88) popup_battery_window_g1

0x8df1,	// (0x0003ac94) popup_battery_window_t1_ParamLimits

0x8df1,	// (0x0003ac94) popup_battery_window_t1

0x8e03,	// (0x0003aca6) popup_battery_window_t2_ParamLimits

0x8e03,	// (0x0003aca6) popup_battery_window_t2

0x0001,

0xfd8b,	// (0x00041c2e) popup_battery_window_t_ParamLimits

0xfd8b,	// (0x00041c2e) popup_battery_window_t

0x7a17,	// (0x000398ba) midp_canvas_pane_ParamLimits

0x7a73,	// (0x00039916) midp_keypad_pane_ParamLimits

0x7a73,	// (0x00039916) midp_keypad_pane

0x27b4,	// (0x00034657) main_midp_pane_ParamLimits

0x5f61,	// (0x00037e04) signal_pane_g2_cp_ParamLimits

0x8e20,	// (0x0003acc3) aid_size_cell_midp_keypad_ParamLimits

0x8e20,	// (0x0003acc3) aid_size_cell_midp_keypad

0x8e3a,	// (0x0003acdd) midp_keyp_game_grid_pane_ParamLimits

0x8e3a,	// (0x0003acdd) midp_keyp_game_grid_pane

0x8e54,	// (0x0003acf7) midp_keyp_rocker_pane_ParamLimits

0x8e54,	// (0x0003acf7) midp_keyp_rocker_pane

0x8e81,	// (0x0003ad24) midp_keyp_sk_left_pane_ParamLimits

0x8e81,	// (0x0003ad24) midp_keyp_sk_left_pane

0x8ed9,	// (0x0003ad7c) midp_keyp_sk_right_pane_ParamLimits

0x8ed9,	// (0x0003ad7c) midp_keyp_sk_right_pane

0x0e88,	// (0x00032d2b) bg_button_pane_cp03

0x8f2b,	// (0x0003adce) midp_keyp_sk_left_pane_g1

0x0e88,	// (0x00032d2b) bg_button_pane_cp04

0x8f2b,	// (0x0003adce) midp_keyp_sk_right_pane_g1

0x62e5,	// (0x00038188) midp_keyp_rocker_pane_g1

0x8f34,	// (0x0003add7) keyp_game_cell_pane_ParamLimits

0x8f34,	// (0x0003add7) keyp_game_cell_pane

0x0e88,	// (0x00032d2b) bg_button_pane_cp02

0x8f45,	// (0x0003ade8) keyp_game_cell_pane_g1

0xcd2d,	// (0x0003ebd0) popup_fep_vkb2_window_ParamLimits

0xcd2d,	// (0x0003ebd0) popup_fep_vkb2_window

0xe29e,	// (0x00040141) aid_size_cell_vkb2_ParamLimits

0xe29e,	// (0x00040141) aid_size_cell_vkb2

0xe2f2,	// (0x00040195) popup_fep_vkb2_window_g1_ParamLimits

0xe2f2,	// (0x00040195) popup_fep_vkb2_window_g1

0xe33a,	// (0x000401dd) vkb2_area_bottom_pane_ParamLimits

0xe33a,	// (0x000401dd) vkb2_area_bottom_pane

0xe372,	// (0x00040215) vkb2_area_keypad_pane_ParamLimits

0xe372,	// (0x00040215) vkb2_area_keypad_pane

0xe3aa,	// (0x0004024d) vkb2_area_top_pane_ParamLimits

0xe3aa,	// (0x0004024d) vkb2_area_top_pane

0xe41a,	// (0x000402bd) vkb2_top_entry_pane_ParamLimits

0xe41a,	// (0x000402bd) vkb2_top_entry_pane

0xe444,	// (0x000402e7) vkb2_top_grid_left_pane_ParamLimits

0xe444,	// (0x000402e7) vkb2_top_grid_left_pane

0xe462,	// (0x00040305) vkb2_top_grid_right_pane_ParamLimits

0xe462,	// (0x00040305) vkb2_top_grid_right_pane

0xe480,	// (0x00040323) vkb2_cell_keypad_pane_ParamLimits

0xe480,	// (0x00040323) vkb2_cell_keypad_pane

0xe531,	// (0x000403d4) vkb2_area_bottom_grid_pane_ParamLimits

0xe531,	// (0x000403d4) vkb2_area_bottom_grid_pane

0xe555,	// (0x000403f8) vkb2_area_bottom_pane_g1_ParamLimits

0xe555,	// (0x000403f8) vkb2_area_bottom_pane_g1

0xe579,	// (0x0004041c) vkb2_area_bottom_pane_g2_ParamLimits

0xe579,	// (0x0004041c) vkb2_area_bottom_pane_g2

0xe5a7,	// (0x0004044a) vkb2_area_bottom_pane_g3_ParamLimits

0xe5a7,	// (0x0004044a) vkb2_area_bottom_pane_g3

0x0002,

0xfd90,	// (0x00041c33) vkb2_area_bottom_pane_g_ParamLimits

0xfd90,	// (0x00041c33) vkb2_area_bottom_pane_g

0xe5f8,	// (0x0004049b) vkb2_top_cell_left_pane_ParamLimits

0xe5f8,	// (0x0004049b) vkb2_top_cell_left_pane

0xe618,	// (0x000404bb) vkb2_top_entry_pane_g1_ParamLimits

0xe618,	// (0x000404bb) vkb2_top_entry_pane_g1

0xe626,	// (0x000404c9) vkb2_top_entry_pane_t1_ParamLimits

0xe626,	// (0x000404c9) vkb2_top_entry_pane_t1

0xaf80,	// (0x0003ce23) vkb2_top_entry_pane_t2_ParamLimits

0xaf80,	// (0x0003ce23) vkb2_top_entry_pane_t2

0xafb2,	// (0x0003ce55) vkb2_top_entry_pane_t3_ParamLimits

0xafb2,	// (0x0003ce55) vkb2_top_entry_pane_t3

0x0002,

0xfd97,	// (0x00041c3a) vkb2_top_entry_pane_t_ParamLimits

0xfd97,	// (0x00041c3a) vkb2_top_entry_pane_t

0xe685,	// (0x00040528) vkb2_top_grid_right_pane_g1_ParamLimits

0xe685,	// (0x00040528) vkb2_top_grid_right_pane_g1

0xe69b,	// (0x0004053e) vkb2_top_grid_right_pane_g2_ParamLimits

0xe69b,	// (0x0004053e) vkb2_top_grid_right_pane_g2

0xe6b3,	// (0x00040556) vkb2_top_grid_right_pane_g3_ParamLimits

0xe6b3,	// (0x00040556) vkb2_top_grid_right_pane_g3

0xe6cb,	// (0x0004056e) vkb2_top_grid_right_pane_g4_ParamLimits

0xe6cb,	// (0x0004056e) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9e,	// (0x00041c41) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9e,	// (0x00041c41) vkb2_top_grid_right_pane_g

0xe6e1,	// (0x00040584) vkb2_top_cell_left_pane_g1

0xe6f8,	// (0x0004059b) vkb2_cell_keypad_pane_g1_ParamLimits

0xe6f8,	// (0x0004059b) vkb2_cell_keypad_pane_g1

0xaff4,	// (0x0003ce97) vkb2_cell_keypad_pane_t1_ParamLimits

0xaff4,	// (0x0003ce97) vkb2_cell_keypad_pane_t1

0xe706,	// (0x000405a9) vkb2_cell_bottom_grid_pane_ParamLimits

0xe706,	// (0x000405a9) vkb2_cell_bottom_grid_pane

0xe73f,	// (0x000405e2) vkb2_cell_bottom_grid_pane_g1

0x8bb8,	// (0x0003aa5b) aid_call2_pane_cp02

0x8bc0,	// (0x0003aa63) aid_call_pane_cp02

0x8bc8,	// (0x0003aa6b) clock_digital_number_pane_cp10

0x8bd0,	// (0x0003aa73) clock_digital_number_pane_cp11

0x8bd8,	// (0x0003aa7b) clock_digital_number_pane_cp12

0x8be0,	// (0x0003aa83) clock_digital_number_pane_cp13

0x8be8,	// (0x0003aa8b) clock_digital_separator_pane_cp10

0x1f3e,	// (0x00033de1) popup_clock_digital_analogue_window_cp2_g1

0x1f3e,	// (0x00033de1) popup_clock_digital_analogue_window_cp2_g2

0x8bf0,	// (0x0003aa93) popup_clock_digital_analogue_window_cp2_g3

0x1f3e,	// (0x00033de1) popup_clock_digital_analogue_window_cp2_g4

0x8bf0,	// (0x0003aa93) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd53,	// (0x00041bf6) popup_clock_digital_analogue_window_cp2_g

0x8bf8,	// (0x0003aa9b) popup_clock_digital_analogue_window_cp2_t1

0x8c06,	// (0x0003aaa9) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5e,	// (0x00041c01) popup_clock_digital_analogue_window_cp2_t

0x62e5,	// (0x00038188) clock_digital_number_pane_cp10_g1

0x62e5,	// (0x00038188) clock_digital_number_pane_cp10_g2

0x0001,

0xfb41,	// (0x000419e4) clock_digital_number_pane_cp10_g

0x62e5,	// (0x00038188) clock_digital_separator_pane_cp10_g1

0x62e5,	// (0x00038188) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb41,	// (0x000419e4) clock_digital_separator_pane_cp10_g

0x745f,	// (0x00039302) uniindi_top_pane_g3

0x7470,	// (0x00039313) uniindi_top_pane_g4

0xe4eb,	// (0x0004038e) vkb2_row_keypad_pane_ParamLimits

0xe4eb,	// (0x0004038e) vkb2_row_keypad_pane

0xe75b,	// (0x000405fe) vkb2_cell_t_keypad_pane_ParamLimits

0xe75b,	// (0x000405fe) vkb2_cell_t_keypad_pane

0xe768,	// (0x0004060b) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xe768,	// (0x0004060b) vkb2_cell_t_keypad_pane_cp08

0xe778,	// (0x0004061b) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xe778,	// (0x0004061b) vkb2_cell_t_keypad_pane_cp09

0xe789,	// (0x0004062c) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xe789,	// (0x0004062c) vkb2_cell_t_keypad_pane_cp01

0xe799,	// (0x0004063c) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xe799,	// (0x0004063c) vkb2_cell_t_keypad_pane_cp02

0xe7a9,	// (0x0004064c) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xe7a9,	// (0x0004064c) vkb2_cell_t_keypad_pane_cp03

0xe7b9,	// (0x0004065c) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xe7b9,	// (0x0004065c) vkb2_cell_t_keypad_pane_cp04

0xe7c9,	// (0x0004066c) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xe7c9,	// (0x0004066c) vkb2_cell_t_keypad_pane_cp05

0xe7d9,	// (0x0004067c) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xe7d9,	// (0x0004067c) vkb2_cell_t_keypad_pane_cp06

0xe7e9,	// (0x0004068c) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xe7e9,	// (0x0004068c) vkb2_cell_t_keypad_pane_cp07

0xe7f9,	// (0x0004069c) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xe7f9,	// (0x0004069c) vkb2_cell_t_keypad_pane_cp10

0xdfd9,	// (0x0003fe7c) vkb2_cell_t_keypad_pane_g1

0xb00b,	// (0x0003ceae) vkb2_cell_t_keypad_pane_t1

0xcc34,	// (0x0003ead7) popup_grid_graphic2_window

0xe80e,	// (0x000406b1) aid_size_cell_graphic2_ParamLimits

0xe80e,	// (0x000406b1) aid_size_cell_graphic2

0xe846,	// (0x000406e9) bg_popup_window_pane_cp21_ParamLimits

0xe846,	// (0x000406e9) bg_popup_window_pane_cp21

0xe854,	// (0x000406f7) graphic2_pages_pane_ParamLimits

0xe854,	// (0x000406f7) graphic2_pages_pane

0xe88e,	// (0x00040731) grid_graphic2_control_pane_ParamLimits

0xe88e,	// (0x00040731) grid_graphic2_control_pane

0xe8c4,	// (0x00040767) grid_graphic2_pane_ParamLimits

0xe8c4,	// (0x00040767) grid_graphic2_pane

0xe924,	// (0x000407c7) cell_graphic2_pane

0xcc34,	// (0x0003ead7) main_comp_mode_pane

0x70db,	// (0x00038f7e) list_ai3_gene_pane_ParamLimits

0x89a1,	// (0x0003a844) bg_popup_window_pane_cp19_ParamLimits

0x724b,	// (0x000390ee) bg_touch_area_indi_pane_ParamLimits

0x724b,	// (0x000390ee) bg_touch_area_indi_pane

0x7261,	// (0x00039104) bg_touch_area_indi_pane_cp01_ParamLimits

0x7261,	// (0x00039104) bg_touch_area_indi_pane_cp01

0x7277,	// (0x0003911a) bg_touch_area_indi_pane_cp02_ParamLimits

0x7277,	// (0x0003911a) bg_touch_area_indi_pane_cp02

0x728d,	// (0x00039130) bg_touch_area_indi_pane_cp03_ParamLimits

0x728d,	// (0x00039130) bg_touch_area_indi_pane_cp03

0x72a3,	// (0x00039146) popup_slider_window_g1_ParamLimits

0x72bf,	// (0x00039162) popup_slider_window_g2_ParamLimits

0x72db,	// (0x0003917e) popup_slider_window_g3_ParamLimits

0xfce8,	// (0x00041b8b) popup_slider_window_g_ParamLimits

0x72f7,	// (0x0003919a) popup_slider_window_t1_ParamLimits

0x733b,	// (0x000391de) small_volume_slider_vertical_pane_ParamLimits

0xe924,	// (0x000407c7) cell_graphic2_pane_ParamLimits

0xe960,	// (0x00040803) bg_button_pane_cp10_ParamLimits

0xe960,	// (0x00040803) bg_button_pane_cp10

0xe971,	// (0x00040814) bg_button_pane_cp11_ParamLimits

0xe971,	// (0x00040814) bg_button_pane_cp11

0xe982,	// (0x00040825) graphic2_pages_pane_g1_ParamLimits

0xe982,	// (0x00040825) graphic2_pages_pane_g1

0xe995,	// (0x00040838) graphic2_pages_pane_g2_ParamLimits

0xe995,	// (0x00040838) graphic2_pages_pane_g2

0x0001,

0xfdac,	// (0x00041c4f) graphic2_pages_pane_g_ParamLimits

0xfdac,	// (0x00041c4f) graphic2_pages_pane_g

0xe9ab,	// (0x0004084e) graphic2_pages_pane_t1_ParamLimits

0xe9ab,	// (0x0004084e) graphic2_pages_pane_t1

0xe9c1,	// (0x00040864) cell_graphic2_control_pane_ParamLimits

0xe9c1,	// (0x00040864) cell_graphic2_control_pane

0xe9e0,	// (0x00040883) cell_graphic2_pane_g1_ParamLimits

0xe9e0,	// (0x00040883) cell_graphic2_pane_g1

0xe9ed,	// (0x00040890) cell_graphic2_pane_g2_ParamLimits

0xe9ed,	// (0x00040890) cell_graphic2_pane_g2

0xe9fa,	// (0x0004089d) cell_graphic2_pane_g3_ParamLimits

0xe9fa,	// (0x0004089d) cell_graphic2_pane_g3

0xea07,	// (0x000408aa) cell_graphic2_pane_g4_ParamLimits

0xea07,	// (0x000408aa) cell_graphic2_pane_g4

0xea14,	// (0x000408b7) cell_graphic2_pane_g5_ParamLimits

0xea14,	// (0x000408b7) cell_graphic2_pane_g5

0x0004,

0xfdb1,	// (0x00041c54) cell_graphic2_pane_g_ParamLimits

0xfdb1,	// (0x00041c54) cell_graphic2_pane_g

0xea2f,	// (0x000408d2) cell_graphic2_pane_t1_ParamLimits

0xea2f,	// (0x000408d2) cell_graphic2_pane_t1

0x45e8,	// (0x0003648b) grid_highlight_pane_cp11_ParamLimits

0x45e8,	// (0x0003648b) grid_highlight_pane_cp11

0x13b8,	// (0x0003325b) bg_button_pane_cp05

0xea58,	// (0x000408fb) cell_graphic2_control_pane_g1

0x62e5,	// (0x00038188) bg_touch_area_indi_pane_g1

0xb01d,	// (0x0003cec0) aid_cmod_rocker_key_size

0xb027,	// (0x0003ceca) aid_cmode_itu_key_size

0xb031,	// (0x0003ced4) main_cmode_video_pane

0xb039,	// (0x0003cedc) main_comp_mode_itu_pane

0xb043,	// (0x0003cee6) main_comp_mode_rocker_pane

0xb04b,	// (0x0003ceee) cell_cmode_rocker_pane_ParamLimits

0xb04b,	// (0x0003ceee) cell_cmode_rocker_pane

0xb05d,	// (0x0003cf00) cell_cmode_itu_pane_ParamLimits

0xb05d,	// (0x0003cf00) cell_cmode_itu_pane

0x18de,	// (0x00033781) bg_button_pane_cp06_ParamLimits

0x18de,	// (0x00033781) bg_button_pane_cp06

0x6511,	// (0x000383b4) cell_cmode_rocker_pane_g1_ParamLimits

0x6511,	// (0x000383b4) cell_cmode_rocker_pane_g1

0x7372,	// (0x00039215) cell_cmode_rocker_pane_g2_ParamLimits

0x7372,	// (0x00039215) cell_cmode_rocker_pane_g2

0x0001,

0xfdc1,	// (0x00041c64) cell_cmode_rocker_pane_g_ParamLimits

0xfdc1,	// (0x00041c64) cell_cmode_rocker_pane_g

0x0e88,	// (0x00032d2b) bg_button_pane_cp07

0xb072,	// (0x0003cf15) cell_cmode_itu_pane_g1

0xb07b,	// (0x0003cf1e) cell_cmode_itu_pane_t1

0xb089,	// (0x0003cf2c) cell_cmode_itu_pane_t2

0x0001,

0xfdc6,	// (0x00041c69) cell_cmode_itu_pane_t

0x86fc,	// (0x0003a59f) aid_touch_ctrl_left

0x8704,	// (0x0003a5a7) aid_touch_ctrl_right

0x0e88,	// (0x00032d2b) compa_mode_pane

0xea80,	// (0x00040923) aid_cmod_rocker_key_size_cp

0xea8a,	// (0x0004092d) aid_cmode_itu_key_size_cp

0xb097,	// (0x0003cf3a) compa_mode_pane_g1

0xb09f,	// (0x0003cf42) compa_mode_pane_g2

0xb0a7,	// (0x0003cf4a) compa_mode_pane_g3

0x0002,

0xfdcb,	// (0x00041c6e) compa_mode_pane_g

0xea94,	// (0x00040937) main_comp_mode_itu_pane_cp

0xea9c,	// (0x0004093f) main_comp_mode_rocker_pane_cp

0xeaa4,	// (0x00040947) cell_cmode_itu_pane_cp_ParamLimits

0xeaa4,	// (0x00040947) cell_cmode_itu_pane_cp

0xeab9,	// (0x0004095c) cell_cmode_rocker_pane_cp_ParamLimits

0xeab9,	// (0x0004095c) cell_cmode_rocker_pane_cp

0x18de,	// (0x00033781) bg_button_pane_cp06_cp_ParamLimits

0x18de,	// (0x00033781) bg_button_pane_cp06_cp

0x6511,	// (0x000383b4) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x6511,	// (0x000383b4) cell_cmode_rocker_pane_g1_cp

0x62e5,	// (0x00038188) cell_cmode_rocker_pane_g2_cp

0x0e88,	// (0x00032d2b) bg_button_pane_cp07_cp

0xeacb,	// (0x0004096e) cell_cmode_itu_pane_g1_cp

0xead4,	// (0x00040977) cell_cmode_itu_pane_t1_cp

0xeae2,	// (0x00040985) cell_cmode_itu_pane_t2_cp

0x812a,	// (0x00039fcd) settings_code_pane_cp2

0x11e5,	// (0x00033088) bg_popup_window_pane_cp3_ParamLimits

0x15b6,	// (0x00033459) heading_pane_cp3_ParamLimits

0x15c2,	// (0x00033465) listscroll_popup_graphic_pane_ParamLimits

0xdd94,	// (0x0003fc37) fep_hwr_aid_pane_ParamLimits

0xe1f4,	// (0x00040097) aid_touch_sctrl_top_ParamLimits

0xe20f,	// (0x000400b2) sctrl_sk_top_pane_g1_ParamLimits

0xdfd9,	// (0x0003fe7c) sctrl_sk_top_pane_g2_ParamLimits

0xfd01,	// (0x00041ba4) sctrl_sk_top_pane_g_ParamLimits

0xe21c,	// (0x000400bf) sctrl_sk_top_pane_t1_ParamLimits

0xe1f4,	// (0x00040097) aid_touch_sctrl_bottom_ParamLimits

0xe21c,	// (0x000400bf) sctrl_sk_bottom_pane_t1_ParamLimits

0x742b,	// (0x000392ce) aid_area_touch_clock

0xe3e2,	// (0x00040285) aid_vkb2_area_top_pane_cell_ParamLimits

0xe3e2,	// (0x00040285) aid_vkb2_area_top_pane_cell

0xe50d,	// (0x000403b0) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe50d,	// (0x000403b0) aid_vkb2_area_bottom_pane_cell

0xaf78,	// (0x0003ce1b) popup_char_count_window

0xb0af,	// (0x0003cf52) popup_char_count_window_g1

0xb0b8,	// (0x0003cf5b) popup_char_count_window_g2

0xb0c1,	// (0x0003cf64) popup_char_count_window_g3

0x0002,

0xfdd2,	// (0x00041c75) popup_char_count_window_g

0xb0ca,	// (0x0003cf6d) popup_char_count_window_t1

0xe2d0,	// (0x00040173) popup_fep_char_preview_window_ParamLimits

0xe2d0,	// (0x00040173) popup_fep_char_preview_window

0xe400,	// (0x000402a3) vkb2_top_candi_pane_ParamLimits

0xe400,	// (0x000402a3) vkb2_top_candi_pane

0xeaf0,	// (0x00040993) cell_vkb2_top_candi_pane_ParamLimits

0xeaf0,	// (0x00040993) cell_vkb2_top_candi_pane

0xeb29,	// (0x000409cc) bg_popup_fep_char_preview_window_ParamLimits

0xeb29,	// (0x000409cc) bg_popup_fep_char_preview_window

0xeb37,	// (0x000409da) popup_fep_char_preview_window_t1_ParamLimits

0xeb37,	// (0x000409da) popup_fep_char_preview_window_t1

0xb0e8,	// (0x0003cf8b) bg_popup_fep_char_preview_window_g1

0xb0e0,	// (0x0003cf83) bg_popup_fep_char_preview_window_g2

0xb0d8,	// (0x0003cf7b) bg_popup_fep_char_preview_window_g3

0xb108,	// (0x0003cfab) bg_popup_fep_char_preview_window_g4

0xb100,	// (0x0003cfa3) bg_popup_fep_char_preview_window_g5

0xeb71,	// (0x00040a14) bg_popup_fep_char_preview_window_g6

0xb0f8,	// (0x0003cf9b) bg_popup_fep_char_preview_window_g7

0xb0f0,	// (0x0003cf93) bg_popup_fep_char_preview_window_g8

0xb110,	// (0x0003cfb3) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd9,	// (0x00041c7c) bg_popup_fep_char_preview_window_g

0xdfd9,	// (0x0003fe7c) cell_vkb2_top_candi_pane_g1_ParamLimits

0xdfd9,	// (0x0003fe7c) cell_vkb2_top_candi_pane_g1

0xdfe7,	// (0x0003fe8a) cell_vkb2_top_candi_pane_g2_ParamLimits

0xdfe7,	// (0x0003fe8a) cell_vkb2_top_candi_pane_g2

0xb118,	// (0x0003cfbb) cell_vkb2_top_candi_pane_g3_ParamLimits

0xb118,	// (0x0003cfbb) cell_vkb2_top_candi_pane_g3

0xeb79,	// (0x00040a1c) cell_vkb2_top_candi_pane_g4_ParamLimits

0xeb79,	// (0x00040a1c) cell_vkb2_top_candi_pane_g4

0x6761,	// (0x00038604) cell_vkb2_top_candi_pane_g5_ParamLimits

0x6761,	// (0x00038604) cell_vkb2_top_candi_pane_g5

0xeb9a,	// (0x00040a3d) cell_vkb2_top_candi_pane_g6_ParamLimits

0xeb9a,	// (0x00040a3d) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdec,	// (0x00041c8f) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdec,	// (0x00041c8f) cell_vkb2_top_candi_pane_g

0xeba8,	// (0x00040a4b) cell_vkb2_top_candi_pane_t1

0xdbac,	// (0x0003fa4f) aid_size_touch_slider_mark_ParamLimits

0xdbac,	// (0x0003fa4f) aid_size_touch_slider_mark

0xe882,	// (0x00040725) grid_graphic2_catg_pane_ParamLimits

0xe882,	// (0x00040725) grid_graphic2_catg_pane

0xe900,	// (0x000407a3) popup_grid_graphic2_window_t1_ParamLimits

0xe900,	// (0x000407a3) popup_grid_graphic2_window_t1

0xe912,	// (0x000407b5) popup_grid_graphic2_window_t2_ParamLimits

0xe912,	// (0x000407b5) popup_grid_graphic2_window_t2

0x0001,

0xfda7,	// (0x00041c4a) popup_grid_graphic2_window_t_ParamLimits

0xfda7,	// (0x00041c4a) popup_grid_graphic2_window_t

0x13b8,	// (0x0003325b) bg_button_pane_cp05_ParamLimits

0xea58,	// (0x000408fb) cell_graphic2_control_pane_g1_ParamLimits

0xebbe,	// (0x00040a61) cell_graphic2_catg_pane_ParamLimits

0xebbe,	// (0x00040a61) cell_graphic2_catg_pane

0x0e88,	// (0x00032d2b) bg_button_pane_cp12

0xebd0,	// (0x00040a73) cell_graphic2_catg_pane_g1

0x73f7,	// (0x0003929a) cell_tb_ext_pane_t1_ParamLimits

0xe658,	// (0x000404fb) vkb2_top_cell_right_narrow_pane_ParamLimits

0xe658,	// (0x000404fb) vkb2_top_cell_right_narrow_pane

0xe670,	// (0x00040513) vkb2_top_cell_right_wide_pane_ParamLimits

0xe670,	// (0x00040513) vkb2_top_cell_right_wide_pane

0xdd86,	// (0x0003fc29) bg_vkb2_func_pane_ParamLimits

0xdd86,	// (0x0003fc29) bg_vkb2_func_pane

0xe6e1,	// (0x00040584) vkb2_top_cell_left_pane_g1_ParamLimits

0xdd86,	// (0x0003fc29) bg_vkb2_fuc_pane_cp03_ParamLimits

0xdd86,	// (0x0003fc29) bg_vkb2_fuc_pane_cp03

0xe73f,	// (0x000405e2) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4578,	// (0x0003641b) bg_vkb2_func_pane_g1

0x4570,	// (0x00036413) bg_vkb2_func_pane_g2

0x4580,	// (0x00036423) bg_vkb2_func_pane_g3

0x4588,	// (0x0003642b) bg_vkb2_func_pane_g4

0x4590,	// (0x00036433) bg_vkb2_func_pane_g5

0x4598,	// (0x0003643b) bg_vkb2_func_pane_g6

0x45a8,	// (0x0003644b) bg_vkb2_func_pane_g7

0x45a0,	// (0x00036443) bg_vkb2_func_pane_g8

0x4568,	// (0x0003640b) bg_vkb2_func_pane_g9

0x0008,

0xfdf9,	// (0x00041c9c) bg_vkb2_func_pane_g

0xdd86,	// (0x0003fc29) bg_vkb2_fuc_pane_cp01_ParamLimits

0xdd86,	// (0x0003fc29) bg_vkb2_fuc_pane_cp01

0xe6e1,	// (0x00040584) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xe6e1,	// (0x00040584) vkb2_top_cell_right_wide_pane_g1

0xdd86,	// (0x0003fc29) bg_vkb2_fuc_pane_cp02_ParamLimits

0xdd86,	// (0x0003fc29) bg_vkb2_fuc_pane_cp02

0xe73f,	// (0x000405e2) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xe73f,	// (0x000405e2) vkb2_top_cell_right_narrow_pane_g1

0x8933,	// (0x0003a7d6) aid_touch_area_decrease_ParamLimits

0x8933,	// (0x0003a7d6) aid_touch_area_decrease

0x894b,	// (0x0003a7ee) aid_touch_area_increase_ParamLimits

0x894b,	// (0x0003a7ee) aid_touch_area_increase

0x8957,	// (0x0003a7fa) aid_touch_area_mute_ParamLimits

0x8957,	// (0x0003a7fa) aid_touch_area_mute

0x8973,	// (0x0003a816) aid_touch_area_slider_ParamLimits

0x8973,	// (0x0003a816) aid_touch_area_slider

0x89ad,	// (0x0003a850) popup_slider_window_g4_ParamLimits

0x89ad,	// (0x0003a850) popup_slider_window_g4

0x89b9,	// (0x0003a85c) popup_slider_window_g5_ParamLimits

0x89b9,	// (0x0003a85c) popup_slider_window_g5

0x89db,	// (0x0003a87e) popup_slider_window_g6_ParamLimits

0x89db,	// (0x0003a87e) popup_slider_window_g6

0x7323,	// (0x000391c6) popup_slider_window_t2_ParamLimits

0x7323,	// (0x000391c6) popup_slider_window_t2

0x0001,

0xfcf5,	// (0x00041b98) popup_slider_window_t_ParamLimits

0xfcf5,	// (0x00041b98) popup_slider_window_t

0x89ed,	// (0x0003a890) slider_pane_ParamLimits

0x89ed,	// (0x0003a890) slider_pane

0xb139,	// (0x0003cfdc) slider_pane_g1_ParamLimits

0xb139,	// (0x0003cfdc) slider_pane_g1

0xb14d,	// (0x0003cff0) slider_pane_g2_ParamLimits

0xb14d,	// (0x0003cff0) slider_pane_g2

0xb163,	// (0x0003d006) slider_pane_g3_ParamLimits

0xb163,	// (0x0003d006) slider_pane_g3

0x0003,

0xfe0c,	// (0x00041caf) slider_pane_g_ParamLimits

0xfe0c,	// (0x00041caf) slider_pane_g

0xd818,	// (0x0003f6bb) popup_tb_float_extension_window_ParamLimits

0xd818,	// (0x0003f6bb) popup_tb_float_extension_window

0xb18f,	// (0x0003d032) aid_size_cell_tb_float_ext

0x0e88,	// (0x00032d2b) bg_popup_sub_window_cp28

0xb19a,	// (0x0003d03d) grid_tb_float_ext_pane

0xb1a2,	// (0x0003d045) cell_tb_float_ext_pane_ParamLimits

0xb1a2,	// (0x0003d045) cell_tb_float_ext_pane

0xb1ba,	// (0x0003d05d) cell_tb_float_ext_pane_g1

0xb1c3,	// (0x0003d066) grid_highlight_pane_cp12

0xdecf,	// (0x0003fd72) cell_last_hwr_side_pane_ParamLimits

0xdecf,	// (0x0003fd72) cell_last_hwr_side_pane

0x62e5,	// (0x00038188) cell_last_hwr_side_pane_g1

0xb1cc,	// (0x0003d06f) cell_last_hwr_side_pane_g2

0x0001,

0xfe15,	// (0x00041cb8) cell_last_hwr_side_pane_g

0xe5d5,	// (0x00040478) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe5d5,	// (0x00040478) vkb2_area_bottom_space_btn_pane

0xdfd9,	// (0x0003fe7c) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xb00b,	// (0x0003ceae) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xeba8,	// (0x00040a4b) cell_vkb2_top_candi_pane_t1_ParamLimits

0xebd9,	// (0x00040a7c) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xebd9,	// (0x00040a7c) vkb2_area_bottom_space_btn_pane_g1

0xec0f,	// (0x00040ab2) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xec0f,	// (0x00040ab2) vkb2_area_bottom_space_btn_pane_g2

0xec45,	// (0x00040ae8) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xec45,	// (0x00040ae8) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1a,	// (0x00041cbd) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1a,	// (0x00041cbd) vkb2_area_bottom_space_btn_pane_g

0xde43,	// (0x0003fce6) cel_fep_hwr_func_pane_ParamLimits

0xde43,	// (0x0003fce6) cel_fep_hwr_func_pane

0xde7f,	// (0x0003fd22) cell_hwr_side_button_pane_ParamLimits

0xde7f,	// (0x0003fd22) cell_hwr_side_button_pane

0x742b,	// (0x000392ce) aid_area_touch_clock_ParamLimits

0x13b8,	// (0x0003325b) bg_uniindi_top_pane_ParamLimits

0x743d,	// (0x000392e0) uniindi_top_pane_g1_ParamLimits

0x7453,	// (0x000392f6) uniindi_top_pane_g2_ParamLimits

0x745f,	// (0x00039302) uniindi_top_pane_g3_ParamLimits

0x7470,	// (0x00039313) uniindi_top_pane_g4_ParamLimits

0xfd2d,	// (0x00041bd0) uniindi_top_pane_g_ParamLimits

0x747d,	// (0x00039320) uniindi_top_pane_t1_ParamLimits

0x13b8,	// (0x0003325b) bg_vkb2_func_pane_cp01_ParamLimits

0x13b8,	// (0x0003325b) bg_vkb2_func_pane_cp01

0xb1d5,	// (0x0003d078) cel_fep_hwr_func_pane_g1_ParamLimits

0xb1d5,	// (0x0003d078) cel_fep_hwr_func_pane_g1

0x13b8,	// (0x0003325b) bg_vkb2_func_pane_cp02_ParamLimits

0x13b8,	// (0x0003325b) bg_vkb2_func_pane_cp02

0xb1d5,	// (0x0003d078) cell_hwr_side_button_pane_g1_ParamLimits

0xb1d5,	// (0x0003d078) cell_hwr_side_button_pane_g1

0x448c,	// (0x0003632f) status_pane_g4_ParamLimits

0x448c,	// (0x0003632f) status_pane_g4

0x44a4,	// (0x00036347) status_pane_t1

0x60eb,	// (0x00037f8e) form2_midp_gauge_slider_cont_pane

0x60f3,	// (0x00037f96) form2_midp_gauge_slider_pane_t1_ParamLimits

0x83cd,	// (0x0003a270) form2_midp_gauge_slider_pane_t2_ParamLimits

0x83df,	// (0x0003a282) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf4,	// (0x00041997) form2_midp_gauge_slider_pane_t_ParamLimits

0x6105,	// (0x00037fa8) form2_midp_slider_pane_ParamLimits

0xe290,	// (0x00040133) aid_size_cell_func_vkb2_ParamLimits

0xe290,	// (0x00040133) aid_size_cell_func_vkb2

0xb17b,	// (0x0003d01e) slider_pane_g4_ParamLimits

0xb17b,	// (0x0003d01e) slider_pane_g4

0xec8b,	// (0x00040b2e) form2_midp_gauge_slider_pane_t2_cp01

0xec99,	// (0x00040b3c) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xec99,	// (0x00040b3c) form2_midp_gauge_slider_pane_t3_cp01

0xecb6,	// (0x00040b59) form2_midp_slider_pane_cp01

0x0e88,	// (0x00032d2b) navi_smil_pane

0xb230,	// (0x0003d0d3) navi_smil_pane_g1

0xb238,	// (0x0003d0db) navi_smil_pane_t1

0xb20e,	// (0x0003d0b1) form2_midp_slider_pane_g1

0xb217,	// (0x0003d0ba) form2_midp_slider_pane_g2

0xb21f,	// (0x0003d0c2) form2_midp_slider_pane_g3

0xb20e,	// (0x0003d0b1) form2_midp_slider_pane_g4

0xecbf,	// (0x00040b62) form2_midp_slider_pane_g5

0x0004,

0xfe23,	// (0x00041cc6) form2_midp_slider_pane_g

0xec7b,	// (0x00040b1e) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xec7b,	// (0x00040b1e) vkb2_area_bottom_space_btn_pane_g4

0x7c3d,	// (0x00039ae0) lc0_navi_pane_ParamLimits

0x7c3d,	// (0x00039ae0) lc0_navi_pane

0x7cb3,	// (0x00039b56) lc0_stat_indi_pane_ParamLimits

0x7cb3,	// (0x00039b56) lc0_stat_indi_pane

0x7cca,	// (0x00039b6d) ls0_title_pane_ParamLimits

0x7cca,	// (0x00039b6d) ls0_title_pane

0x18de,	// (0x00033781) bg_popup_sub_pane_cp14_ParamLimits

0x7412,	// (0x000392b5) list_uniindi_pane_ParamLimits

0x741e,	// (0x000392c1) uniindi_top_pane_ParamLimits

0x86d4,	// (0x0003a577) list_single_uniindi_pane_g1_ParamLimits

0x86e7,	// (0x0003a58a) list_single_uniindi_pane_t1_ParamLimits

0xecc8,	// (0x00040b6b) lc0_stat_clock_pane_ParamLimits

0xecc8,	// (0x00040b6b) lc0_stat_clock_pane

0xecd5,	// (0x00040b78) lc0_stat_indi_pane_g1_ParamLimits

0xecd5,	// (0x00040b78) lc0_stat_indi_pane_g1

0xece2,	// (0x00040b85) lc0_stat_indi_pane_g2_ParamLimits

0xece2,	// (0x00040b85) lc0_stat_indi_pane_g2

0x0001,

0xfe2e,	// (0x00041cd1) lc0_stat_indi_pane_g_ParamLimits

0xfe2e,	// (0x00041cd1) lc0_stat_indi_pane_g

0xecef,	// (0x00040b92) lc0_uni_indicator_pane_ParamLimits

0xecef,	// (0x00040b92) lc0_uni_indicator_pane

0xb27a,	// (0x0003d11d) ls0_title_pane_g1_ParamLimits

0xb27a,	// (0x0003d11d) ls0_title_pane_g1

0xecfc,	// (0x00040b9f) ls0_title_pane_t1_ParamLimits

0xecfc,	// (0x00040b9f) ls0_title_pane_t1

0xed32,	// (0x00040bd5) lc0_uni_indicator_pane_g1_ParamLimits

0xed32,	// (0x00040bd5) lc0_uni_indicator_pane_g1

0xb2d1,	// (0x0003d174) lc0_stat_clock_pane_t1

0xcc34,	// (0x0003ead7) main_ai5_pane

0xb2df,	// (0x0003d182) ai5_sk_pane_ParamLimits

0xb2df,	// (0x0003d182) ai5_sk_pane

0xed44,	// (0x00040be7) cell_ai5_widget_pane_ParamLimits

0xed44,	// (0x00040be7) cell_ai5_widget_pane

0xb35c,	// (0x0003d1ff) aid_size_cell_widget_grid

0xb369,	// (0x0003d20c) bg_ai5_widget_pane_ParamLimits

0xb369,	// (0x0003d20c) bg_ai5_widget_pane

0xedd7,	// (0x00040c7a) cell_ai5_widget_pane_g2

0xedeb,	// (0x00040c8e) cell_ai5_widget_pane_g3

0xee05,	// (0x00040ca8) cell_ai5_widget_pane_g4

0xee15,	// (0x00040cb8) cell_ai5_widget_pane_g5

0xee25,	// (0x00040cc8) cell_ai5_widget_pane_g6

0xee31,	// (0x00040cd4) cell_ai5_widget_pane_g7

0xee79,	// (0x00040d1c) cell_ai5_widget_pane_t1_ParamLimits

0xee79,	// (0x00040d1c) cell_ai5_widget_pane_t1

0xee96,	// (0x00040d39) cell_ai5_widget_pane_t2_ParamLimits

0xee96,	// (0x00040d39) cell_ai5_widget_pane_t2

0xeeae,	// (0x00040d51) cell_ai5_widget_pane_t3_ParamLimits

0xeeae,	// (0x00040d51) cell_ai5_widget_pane_t3

0xeec6,	// (0x00040d69) cell_ai5_widget_pane_t4_ParamLimits

0xeec6,	// (0x00040d69) cell_ai5_widget_pane_t4

0xeeec,	// (0x00040d8f) cell_ai5_widget_pane_t5_ParamLimits

0xeeec,	// (0x00040d8f) cell_ai5_widget_pane_t5

0xb4f2,	// (0x0003d395) cell_ai5_widget_pane_t6_ParamLimits

0xb4f2,	// (0x0003d395) cell_ai5_widget_pane_t6

0xb504,	// (0x0003d3a7) cell_ai5_widget_pane_t7_ParamLimits

0xb504,	// (0x0003d3a7) cell_ai5_widget_pane_t7

0xef0b,	// (0x00040dae) cell_ai5_widget_pane_t8_ParamLimits

0xef0b,	// (0x00040dae) cell_ai5_widget_pane_t8

0x0009,

0xfe48,	// (0x00041ceb) cell_ai5_widget_pane_t_ParamLimits

0xfe48,	// (0x00041ceb) cell_ai5_widget_pane_t

0xef6a,	// (0x00040e0d) grid_ai5_widget_pane

0x18de,	// (0x00033781) highlight_cell_ai5_widget_pane_ParamLimits

0x18de,	// (0x00033781) highlight_cell_ai5_widget_pane

0xef76,	// (0x00040e19) ai5_sk_left_pane

0xef80,	// (0x00040e23) ai5_sk_middle_pane

0xef8a,	// (0x00040e2d) ai5_sk_right_pane

0xb5a6,	// (0x0003d449) bg_ai5_widget_pane_g1_ParamLimits

0xb5a6,	// (0x0003d449) bg_ai5_widget_pane_g1

0xb5b2,	// (0x0003d455) bg_ai5_widget_pane_g2_ParamLimits

0xb5b2,	// (0x0003d455) bg_ai5_widget_pane_g2

0xb5be,	// (0x0003d461) bg_ai5_widget_pane_g3_ParamLimits

0xb5be,	// (0x0003d461) bg_ai5_widget_pane_g3

0xb5ca,	// (0x0003d46d) bg_ai5_widget_pane_g4_ParamLimits

0xb5ca,	// (0x0003d46d) bg_ai5_widget_pane_g4

0xb5d6,	// (0x0003d479) bg_ai5_widget_pane_g5_ParamLimits

0xb5d6,	// (0x0003d479) bg_ai5_widget_pane_g5

0xb5e2,	// (0x0003d485) bg_ai5_widget_pane_g6_ParamLimits

0xb5e2,	// (0x0003d485) bg_ai5_widget_pane_g6

0xb5ee,	// (0x0003d491) bg_ai5_widget_pane_g7_ParamLimits

0xb5ee,	// (0x0003d491) bg_ai5_widget_pane_g7

0xb5fa,	// (0x0003d49d) bg_ai5_widget_pane_g8_ParamLimits

0xb5fa,	// (0x0003d49d) bg_ai5_widget_pane_g8

0xb606,	// (0x0003d4a9) bg_ai5_widget_pane_g9_ParamLimits

0xb606,	// (0x0003d4a9) bg_ai5_widget_pane_g9

0x0008,

0xfe5d,	// (0x00041d00) bg_ai5_widget_pane_g_ParamLimits

0xfe5d,	// (0x00041d00) bg_ai5_widget_pane_g

0xb636,	// (0x0003d4d9) cell_shortcut_ai5_widget_pane_ParamLimits

0xb636,	// (0x0003d4d9) cell_shortcut_ai5_widget_pane

0xb647,	// (0x0003d4ea) bg_cell_shortcut_ai5_widget_pane

0x1572,	// (0x00033415) cell_grid_ai5_widget_pane_g1

0x41d0,	// (0x00036073) highlight_cell_shortcut_ai5_widget_pane

0x4578,	// (0x0003641b) ai5_sk_left_pane_g1

0xb64f,	// (0x0003d4f2) ai5_sk_left_pane_g2

0xb657,	// (0x0003d4fa) ai5_sk_left_pane_g3

0xb65f,	// (0x0003d502) ai5_sk_left_pane_g4

0x0003,

0xfe70,	// (0x00041d13) ai5_sk_left_pane_g

0xb667,	// (0x0003d50a) ai5_sk_left_pane_t1

0x4570,	// (0x00036413) ai5_sk_right_pane_g1

0xb675,	// (0x0003d518) ai5_sk_right_pane_g2

0xb67d,	// (0x0003d520) ai5_sk_right_pane_g3

0xb685,	// (0x0003d528) ai5_sk_right_pane_g4

0x0003,

0xfe79,	// (0x00041d1c) ai5_sk_right_pane_g

0xb68d,	// (0x0003d530) ai5_sk_right_pane_t1

0x4570,	// (0x00036413) ai5_sk_middle_pane_g1

0x4578,	// (0x0003641b) ai5_sk_middle_pane_g2

0x4590,	// (0x00036433) ai5_sk_middle_pane_g3

0xb67d,	// (0x0003d520) ai5_sk_middle_pane_g4

0xb657,	// (0x0003d4fa) ai5_sk_middle_pane_g5

0xb69b,	// (0x0003d53e) ai5_sk_middle_pane_g6

0xef94,	// (0x00040e37) ai5_sk_middle_pane_g7

0x0006,

0xfe82,	// (0x00041d25) ai5_sk_middle_pane_g

0x7b8a,	// (0x00039a2d) aid_touch_area_size_lc0_ParamLimits

0x7b8a,	// (0x00039a2d) aid_touch_area_size_lc0

0xe008,	// (0x0003feab) cell_hwr_candidate_pane_t1_ParamLimits

0x43b5,	// (0x00036258) aid_touch_navi_pane

0x7d9c,	// (0x00039c3f) status_dt_navi_pane_ParamLimits

0x7d9c,	// (0x00039c3f) status_dt_navi_pane

0x7da9,	// (0x00039c4c) status_dt_sta_pane_ParamLimits

0x7da9,	// (0x00039c4c) status_dt_sta_pane

0xef9c,	// (0x00040e3f) dt_sta_controll_pane

0xefa9,	// (0x00040e4c) dt_sta_indi_pane

0xefba,	// (0x00040e5d) dt_sta_title_pane

0x13b8,	// (0x0003325b) bg_dt_sta_indi_pane_ParamLimits

0x13b8,	// (0x0003325b) bg_dt_sta_indi_pane

0xefcd,	// (0x00040e70) dt_sta_battery_pane

0xefd5,	// (0x00040e78) dt_sta_indi_pane_g1

0xefde,	// (0x00040e81) dt_sta_indi_pane_g2

0xefe7,	// (0x00040e8a) dt_sta_indi_pane_g3

0x0002,

0xfe91,	// (0x00041d34) dt_sta_indi_pane_g

0xeff0,	// (0x00040e93) dt_sta_signal_pane

0x18de,	// (0x00033781) bg_dt_sta_title_pane_ParamLimits

0x18de,	// (0x00033781) bg_dt_sta_title_pane

0xeff9,	// (0x00040e9c) dt_sta_title_pane_g1

0xf001,	// (0x00040ea4) dt_sta_title_pane_t1_ParamLimits

0xf001,	// (0x00040ea4) dt_sta_title_pane_t1

0x0e88,	// (0x00032d2b) bg_dt_sta_control_pane

0xf016,	// (0x00040eb9) dt_sta_controll_pane_g1

0xf01f,	// (0x00040ec2) bg_dt_sta_title_pane_g1

0xf028,	// (0x00040ecb) bg_dt_sta_title_pane_g2

0xf031,	// (0x00040ed4) bg_dt_sta_title_pane_g3

0x0002,

0xfe98,	// (0x00041d3b) bg_dt_sta_title_pane_g

0x62e5,	// (0x00038188) bg_dt_sta_indi_pane_g1

0xf03a,	// (0x00040edd) dt_sta_signal_pane_g1

0xf042,	// (0x00040ee5) dt_sta_signal_pane_g2

0x0001,

0xfe9f,	// (0x00041d42) dt_sta_signal_pane_g

0xb754,	// (0x0003d5f7) dt_sta_battery_pane_g1

0xb75d,	// (0x0003d600) dt_sta_battery_pane_t1

0x62e5,	// (0x00038188) bg_dt_sta_control_pane_g1

0x206e,	// (0x00033f11) fep_china_uni_eep_pane

0x2076,	// (0x00033f19) fep_china_uni_entry_pane_ParamLimits

0x2086,	// (0x00033f29) popup_fep_china_uni_window_g1_ParamLimits

0x2096,	// (0x00033f39) popup_fep_china_uni_window_g2_ParamLimits

0x2096,	// (0x00033f39) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x000415c5) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x000415c5) popup_fep_china_uni_window_g

0xb76c,	// (0x0003d60f) fep_china_uni_eep_pane_g1

0xb774,	// (0x0003d617) fep_china_uni_eep_pane_t1

0xb227,	// (0x0003d0ca) aid_touch_area_size_smil_player

0x4453,	// (0x000362f6) lc0_clock_pane

0x4498,	// (0x0003633b) status_pane_g5_ParamLimits

0x4498,	// (0x0003633b) status_pane_g5

0xd58c,	// (0x0003f42f) popup_keymap_window

0x446c,	// (0x0003630f) status_icon_pane

0xedeb,	// (0x00040c8e) cell_ai5_widget_pane_g3_ParamLimits

0xee05,	// (0x00040ca8) cell_ai5_widget_pane_g4_ParamLimits

0xee15,	// (0x00040cb8) cell_ai5_widget_pane_g5_ParamLimits

0xee3d,	// (0x00040ce0) cell_ai5_widget_pane_g8_ParamLimits

0xee3d,	// (0x00040ce0) cell_ai5_widget_pane_g8

0xee51,	// (0x00040cf4) cell_ai5_widget_pane_g9_ParamLimits

0xee51,	// (0x00040cf4) cell_ai5_widget_pane_g9

0xee65,	// (0x00040d08) cell_ai5_widget_pane_g10_ParamLimits

0xee65,	// (0x00040d08) cell_ai5_widget_pane_g10

0xb783,	// (0x0003d626) status_icon_pane_g1

0x0e88,	// (0x00032d2b) bg_popup_sub_pane_cp13

0xb78b,	// (0x0003d62e) popup_keymap_window_t1

0x7b55,	// (0x000399f8) control_pane_g6_ParamLimits

0x7b55,	// (0x000399f8) control_pane_g6

0x7b48,	// (0x000399eb) control_pane_g7_ParamLimits

0x7b48,	// (0x000399eb) control_pane_g7

0x7b3b,	// (0x000399de) control_pane_g8_ParamLimits

0x7b3b,	// (0x000399de) control_pane_g8

0xef9c,	// (0x00040e3f) dt_sta_controll_pane_ParamLimits

0xefa9,	// (0x00040e4c) dt_sta_indi_pane_ParamLimits

0xefba,	// (0x00040e5d) dt_sta_title_pane_ParamLimits

0x1770,	// (0x00033613) aid_size_touch_scroll_bar_cale

0xcd0b,	// (0x0003ebae) popup_discreet_window_ParamLimits

0xcd0b,	// (0x0003ebae) popup_discreet_window

0xcd6f,	// (0x0003ec12) popup_sk_window

0x4b28,	// (0x000369cb) bg_popup_sub_pane_cp28_ParamLimits

0x4b28,	// (0x000369cb) bg_popup_sub_pane_cp28

0xb799,	// (0x0003d63c) popup_discreet_window_g1_ParamLimits

0xb799,	// (0x0003d63c) popup_discreet_window_g1

0xb7b9,	// (0x0003d65c) popup_discreet_window_t1_ParamLimits

0xb7b9,	// (0x0003d65c) popup_discreet_window_t1

0xb7d7,	// (0x0003d67a) popup_discreet_window_t2_ParamLimits

0xb7d7,	// (0x0003d67a) popup_discreet_window_t2

0x0002,

0xfea4,	// (0x00041d47) popup_discreet_window_t_ParamLimits

0xfea4,	// (0x00041d47) popup_discreet_window_t

0xf04a,	// (0x00040eed) popup_sk_window_g1

0xf053,	// (0x00040ef6) popup_sk_window_g2

0x0001,

0xfeab,	// (0x00041d4e) popup_sk_window_g

0xf05c,	// (0x00040eff) popup_sk_window_t1

0xf06a,	// (0x00040f0d) popup_sk_window_t1_copy1

0xedd7,	// (0x00040c7a) cell_ai5_widget_pane_g2_ParamLimits

0xef1d,	// (0x00040dc0) cell_ai5_widget_pane_t9_ParamLimits

0xef1d,	// (0x00040dc0) cell_ai5_widget_pane_t9

0x0e88,	// (0x00032d2b) main_fep_fshwr2_pane

0xf078,	// (0x00040f1b) aid_fshwr2_btn_pane

0xf084,	// (0x00040f27) aid_fshwr2_syb_pane

0xf096,	// (0x00040f39) aid_fshwr2_txt_pane

0xf0a2,	// (0x00040f45) fshwr2_func_candi_pane

0xf0b6,	// (0x00040f59) fshwr2_hwr_syb_pane

0xf0c8,	// (0x00040f6b) fshwr2_icf_pane

0xcc34,	// (0x0003ead7) fshwr2_icf_bg_pane

0xf0f0,	// (0x00040f93) fshwr2_icf_pane_t1_ParamLimits

0xf0f0,	// (0x00040f93) fshwr2_icf_pane_t1

0x1f3e,	// (0x00033de1) fshwr2_func_candi_pane_g1

0xf108,	// (0x00040fab) fshwr2_func_candi_row_pane_ParamLimits

0xf108,	// (0x00040fab) fshwr2_func_candi_row_pane

0xf12b,	// (0x00040fce) cell_fshwr2_syb_pane_ParamLimits

0xf12b,	// (0x00040fce) cell_fshwr2_syb_pane

0xf14a,	// (0x00040fed) fshwr2_hwr_syb_pane_g1_ParamLimits

0xf14a,	// (0x00040fed) fshwr2_hwr_syb_pane_g1

0xcc34,	// (0x0003ead7) bg_popup_call_pane_cp01

0xf158,	// (0x00040ffb) fshwr2_func_candi_cell_pane_ParamLimits

0xf158,	// (0x00040ffb) fshwr2_func_candi_cell_pane

0x5110,	// (0x00036fb3) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x5110,	// (0x00036fb3) fshwr2_func_candi_cell_bg_pane

0xf197,	// (0x0004103a) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xf197,	// (0x0004103a) fshwr2_func_candi_cell_pane_g1

0xf1b7,	// (0x0004105a) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xf1b7,	// (0x0004105a) fshwr2_func_candi_cell_pane_t1

0xcc34,	// (0x0003ead7) bg_button_pane_cp08

0x27b4,	// (0x00034657) cell_fshwr2_syb_bg_pane

0xf1ca,	// (0x0004106d) cell_fshwr2_syb_bg_pane_g1

0xf1de,	// (0x00041081) cell_fshwr2_syb_bg_pane_t1

0x18de,	// (0x00033781) main_tmo_pane

0x7fa1,	// (0x00039e44) uni_indicator_pane_g1_ParamLimits

0x7fb7,	// (0x00039e5a) uni_indicator_pane_g2_ParamLimits

0x7fcd,	// (0x00039e70) uni_indicator_pane_g3_ParamLimits

0x54e9,	// (0x0003738c) uni_indicator_pane_g4_ParamLimits

0x54e9,	// (0x0003738c) uni_indicator_pane_g4

0x54fd,	// (0x000373a0) uni_indicator_pane_g5_ParamLimits

0x54fd,	// (0x000373a0) uni_indicator_pane_g5

0x54fd,	// (0x000373a0) uni_indicator_pane_g6_ParamLimits

0x54fd,	// (0x000373a0) uni_indicator_pane_g6

0xf921,	// (0x000417c4) uni_indicator_pane_g_ParamLimits

0x8917,	// (0x0003a7ba) popup_tmo_note_window_ParamLimits

0x8917,	// (0x0003a7ba) popup_tmo_note_window

0xe26c,	// (0x0004010f) fshwr2_bg_pane

0xf1a8,	// (0x0004104b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xf1a8,	// (0x0004104b) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb0,	// (0x00041d53) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb0,	// (0x00041d53) fshwr2_func_candi_cell_pane_g

0xdfc1,	// (0x0003fe64) bg_popup_window_pane_cp01

0xf1f4,	// (0x00041097) bg_popup_window_pane_g1_cp01

0xb9ce,	// (0x0003d871) bg_popup_window_pane_cp22_ParamLimits

0xb9ce,	// (0x0003d871) bg_popup_window_pane_cp22

0xb9dc,	// (0x0003d87f) listscroll_tmo_link_pane_ParamLimits

0xb9dc,	// (0x0003d87f) listscroll_tmo_link_pane

0xba1c,	// (0x0003d8bf) popup_tmo_note_window_g1_ParamLimits

0xba1c,	// (0x0003d8bf) popup_tmo_note_window_g1

0xba29,	// (0x0003d8cc) tmo_note_info_pane_ParamLimits

0xba29,	// (0x0003d8cc) tmo_note_info_pane

0xf1fd,	// (0x000410a0) list_tmo_note_info_pane_g1_ParamLimits

0xf1fd,	// (0x000410a0) list_tmo_note_info_pane_g1

0xba5a,	// (0x0003d8fd) list_tmo_note_info_pane_g2_ParamLimits

0xba5a,	// (0x0003d8fd) list_tmo_note_info_pane_g2

0x0001,

0xfeb5,	// (0x00041d58) list_tmo_note_info_pane_g_ParamLimits

0xfeb5,	// (0x00041d58) list_tmo_note_info_pane_g

0xba76,	// (0x0003d919) list_tmo_note_info_text_pane_ParamLimits

0xba76,	// (0x0003d919) list_tmo_note_info_text_pane

0xbaf7,	// (0x0003d99a) list_tmo_link_pane

0xbb04,	// (0x0003d9a7) scroll_pane_cp20

0xbb11,	// (0x0003d9b4) list_single_tmo_link_pane_ParamLimits

0xbb11,	// (0x0003d9b4) list_single_tmo_link_pane

0xbb21,	// (0x0003d9c4) list_single_tmo_link_pane_t1

0xbb2f,	// (0x0003d9d2) list_tmo_note_info_text_pane_t1_ParamLimits

0xbb2f,	// (0x0003d9d2) list_tmo_note_info_text_pane_t1

0x198c,	// (0x0003382f) aid_size_touch_scroll_bar_cp01_ParamLimits

0x198c,	// (0x0003382f) aid_size_touch_scroll_bar_cp01

0x0604,	// (0x000324a7) aid_size_touch_slider_marker

0xcd5b,	// (0x0003ebfe) popup_settings_window_ParamLimits

0xcd5b,	// (0x0003ebfe) popup_settings_window

0x07ba,	// (0x0003265d) popup_candi_list_indi_window

0x43b5,	// (0x00036258) aid_touch_navi_pane_ParamLimits

0xe1c8,	// (0x0004006b) rs_clock_indi_pane

0xe1d1,	// (0x00040074) sctrl_sk_bottom_pane_ParamLimits

0xe1e2,	// (0x00040085) sctrl_sk_top_pane_ParamLimits

0xe2ea,	// (0x0004018d) popup_fep_tooltip_window

0xb35c,	// (0x0003d1ff) aid_size_cell_widget_grid_ParamLimits

0xedc3,	// (0x00040c66) cell_ai5_widget_pane_g1_ParamLimits

0xedc3,	// (0x00040c66) cell_ai5_widget_pane_g1

0xee25,	// (0x00040cc8) cell_ai5_widget_pane_g6_ParamLimits

0xee31,	// (0x00040cd4) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe33,	// (0x00041cd6) cell_ai5_widget_pane_g_ParamLimits

0xfe33,	// (0x00041cd6) cell_ai5_widget_pane_g

0xef4c,	// (0x00040def) cell_ai5_widget_pane_t10_ParamLimits

0xef4c,	// (0x00040def) cell_ai5_widget_pane_t10

0xef6a,	// (0x00040e0d) grid_ai5_widget_pane_ParamLimits

0xb612,	// (0x0003d4b5) cell_contacts_ai5_widget_pane_ParamLimits

0xb612,	// (0x0003d4b5) cell_contacts_ai5_widget_pane

0xb7ec,	// (0x0003d68f) popup_discreet_window_t3_ParamLimits

0xb7ec,	// (0x0003d68f) popup_discreet_window_t3

0xf0de,	// (0x00040f81) popup_fshwr2_char_preview_window_ParamLimits

0xf0de,	// (0x00040f81) popup_fshwr2_char_preview_window

0xf214,	// (0x000410b7) tmo_note_info_pane_t1

0xf229,	// (0x000410cc) tmo_note_info_pane_t2

0xf23e,	// (0x000410e1) tmo_note_info_pane_t3

0xbad3,	// (0x0003d976) tmo_note_info_pane_t4

0xbae5,	// (0x0003d988) tmo_note_info_pane_t5

0x0004,

0xfeba,	// (0x00041d5d) tmo_note_info_pane_t

0xbaf7,	// (0x0003d99a) list_tmo_link_pane_ParamLimits

0xbb04,	// (0x0003d9a7) scroll_pane_cp20_ParamLimits

0xcc34,	// (0x0003ead7) bg_popup_fep_char_preview_window_cp01

0xbb48,	// (0x0003d9eb) popup_fshwr2_char_preview_window_t1

0xbb56,	// (0x0003d9f9) popup_candi_list_indi_window_g1

0xbb5f,	// (0x0003da02) bg_cell_contacts_ai5_widget_pane

0xbb6b,	// (0x0003da0e) cell_contacts_ai5_widget_pane_g1

0xbb80,	// (0x0003da23) cell_contacts_ai5_widget_pane_g2

0xbb8c,	// (0x0003da2f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec5,	// (0x00041d68) cell_contacts_ai5_widget_pane_g

0xbb98,	// (0x0003da3b) cell_contacts_ai5_widget_pane_t1

0x18de,	// (0x00033781) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf2b6,	// (0x00041159) settings_container_pane

0x41d0,	// (0x00036073) listscroll_set_pane_copy1

0x5c21,	// (0x00037ac4) scroll_pane_cp121_copy1

0xbc19,	// (0x0003dabc) set_content_pane_copy1

0xbc21,	// (0x0003dac4) aid_height_set_list_copy1_ParamLimits

0xbc21,	// (0x0003dac4) aid_height_set_list_copy1

0x5696,	// (0x00037539) aid_size_parent_copy1_ParamLimits

0x5696,	// (0x00037539) aid_size_parent_copy1

0xbc2d,	// (0x0003dad0) button_value_adjust_pane_cp6_copy1_ParamLimits

0xbc2d,	// (0x0003dad0) button_value_adjust_pane_cp6_copy1

0x27b4,	// (0x00034657) list_highlight_pane_cp2_copy1_ParamLimits

0x27b4,	// (0x00034657) list_highlight_pane_cp2_copy1

0xf2c2,	// (0x00041165) list_set_pane_copy1_ParamLimits

0xf2c2,	// (0x00041165) list_set_pane_copy1

0xf253,	// (0x000410f6) main_pane_set_t1_copy1_ParamLimits

0xf253,	// (0x000410f6) main_pane_set_t1_copy1

0xf28d,	// (0x00041130) main_pane_set_t2_copy1_ParamLimits

0xf28d,	// (0x00041130) main_pane_set_t2_copy1

0xbccf,	// (0x0003db72) main_pane_set_t3_copy1

0xbcdd,	// (0x0003db80) main_pane_set_t4_copy1

0xf2aa,	// (0x0004114d) set_content_pane_g1_copy1_ParamLimits

0xf2aa,	// (0x0004114d) set_content_pane_g1_copy1

0xbceb,	// (0x0003db8e) setting_code_pane_copy1

0xbcf3,	// (0x0003db96) setting_slider_graphic_pane_copy1

0xbcf3,	// (0x0003db96) setting_slider_pane_copy1

0xbcf3,	// (0x0003db96) setting_text_pane_copy1

0xbcf3,	// (0x0003db96) setting_volume_pane_copy1

0xbcfb,	// (0x0003db9e) settings_code_pane_cp2_copy1

0xbd03,	// (0x0003dba6) settings_code_pane_cp_copy1_ParamLimits

0xbd03,	// (0x0003dba6) settings_code_pane_cp_copy1

0xf350,	// (0x000411f3) volume_set_pane_copy1

0xf358,	// (0x000411fb) volume_set_pane_g10_copy1

0xf360,	// (0x00041203) volume_set_pane_g1_copy1

0xf368,	// (0x0004120b) volume_set_pane_g2_copy1

0xf370,	// (0x00041213) volume_set_pane_g3_copy1

0xf378,	// (0x0004121b) volume_set_pane_g4_copy1

0xf380,	// (0x00041223) volume_set_pane_g5_copy1

0xf388,	// (0x0004122b) volume_set_pane_g6_copy1

0xf390,	// (0x00041233) volume_set_pane_g7_copy1

0xf398,	// (0x0004123b) volume_set_pane_g8_copy1

0xf3a0,	// (0x00041243) volume_set_pane_g9_copy1

0x11e5,	// (0x00033088) bg_set_opt_pane_cp_copy1_ParamLimits

0x11e5,	// (0x00033088) bg_set_opt_pane_cp_copy1

0xce45,	// (0x0003ece8) setting_slider_pane_t1_copy1_ParamLimits

0xce45,	// (0x0003ece8) setting_slider_pane_t1_copy1

0xf3a8,	// (0x0004124b) setting_slider_pane_t2_copy1_ParamLimits

0xf3a8,	// (0x0004124b) setting_slider_pane_t2_copy1

0xf3c1,	// (0x00041264) setting_slider_pane_t3_copy1_ParamLimits

0xf3c1,	// (0x00041264) setting_slider_pane_t3_copy1

0xce8b,	// (0x0003ed2e) slider_set_pane_copy1_ParamLimits

0xce8b,	// (0x0003ed2e) slider_set_pane_copy1

0x192d,	// (0x000337d0) set_opt_bg_pane_g1_copy2

0x1935,	// (0x000337d8) set_opt_bg_pane_g2_copy2

0xbd6f,	// (0x0003dc12) set_opt_bg_pane_g3_copy2

0x1945,	// (0x000337e8) set_opt_bg_pane_g4_copy2

0x194d,	// (0x000337f0) set_opt_bg_pane_g5_copy2

0x1955,	// (0x000337f8) set_opt_bg_pane_g6_copy2

0xf3d8,	// (0x0004127b) set_opt_bg_pane_g7_copy2

0xbd7f,	// (0x0003dc22) set_opt_bg_pane_g8_copy2

0xbd87,	// (0x0003dc2a) set_opt_bg_pane_g9_copy2

0xdbac,	// (0x0003fa4f) aid_size_touch_slider_mark_copy1_ParamLimits

0xdbac,	// (0x0003fa4f) aid_size_touch_slider_mark_copy1

0x56a8,	// (0x0003754b) slider_set_pane_g1_copy1

0x56ca,	// (0x0003756d) slider_set_pane_g2_copy1

0xdbcc,	// (0x0003fa6f) slider_set_pane_g3_copy1_ParamLimits

0xdbcc,	// (0x0003fa6f) slider_set_pane_g3_copy1

0xdbe0,	// (0x0003fa83) slider_set_pane_g4_copy1_ParamLimits

0xdbe0,	// (0x0003fa83) slider_set_pane_g4_copy1

0xdbf8,	// (0x0003fa9b) slider_set_pane_g5_copy1_ParamLimits

0xdbf8,	// (0x0003fa9b) slider_set_pane_g5_copy1

0xdbcc,	// (0x0003fa6f) slider_set_pane_g6_copy1_ParamLimits

0xdbcc,	// (0x0003fa6f) slider_set_pane_g6_copy1

0xf3e0,	// (0x00041283) slider_set_pane_g7_copy1_ParamLimits

0xf3e0,	// (0x00041283) slider_set_pane_g7_copy1

0x1051,	// (0x00032ef4) bg_set_opt_pane_cp2_copy1

0x125f,	// (0x00033102) setting_slider_graphic_pane_g1_copy1

0xf3f6,	// (0x00041299) setting_slider_graphic_pane_t1_copy1

0xf405,	// (0x000412a8) setting_slider_graphic_pane_t2_copy1

0xf414,	// (0x000412b7) slider_set_pane_cp_copy1

0xbdd3,	// (0x0003dc76) input_focus_pane_cp1_copy1

0xbddc,	// (0x0003dc7f) list_set_text_pane_copy1

0xbde4,	// (0x0003dc87) setting_text_pane_g1_copy1

0x0e68,	// (0x00032d0b) set_text_pane_t1_copy1

0xbdd3,	// (0x0003dc76) input_focus_pane_cp2_copy1

0xbde4,	// (0x0003dc87) setting_code_pane_g1_copy1

0xbded,	// (0x0003dc90) setting_code_pane_t1_copy1

0x3f70,	// (0x00035e13) list_set_graphic_pane_copy1

0x1051,	// (0x00032ef4) bg_set_opt_pane_cp4_copy1

0xbdfb,	// (0x0003dc9e) list_set_graphic_pane_g1_copy1_ParamLimits

0xbdfb,	// (0x0003dc9e) list_set_graphic_pane_g1_copy1

0xbe07,	// (0x0003dcaa) list_set_graphic_pane_g2_copy1

0x2356,	// (0x000341f9) list_set_graphic_pane_t1_copy1_ParamLimits

0x2356,	// (0x000341f9) list_set_graphic_pane_t1_copy1

0x62e5,	// (0x00038188) rs_clock_indi_pane_g1

0xbe0f,	// (0x0003dcb2) rs_clock_indi_pane_t1

0xbe1d,	// (0x0003dcc0) rs_indi_pane

0xbe25,	// (0x0003dcc8) rs_indi_pane_g1

0xbe2e,	// (0x0003dcd1) rs_indi_pane_g2

0xbb56,	// (0x0003d9f9) rs_indi_pane_g3

0x0002,

0xfecc,	// (0x00041d6f) rs_indi_pane_g

0x41d0,	// (0x00036073) bg_popup_preview_window_pane_cp03

0xbe37,	// (0x0003dcda) popup_fep_tooltip_window_t1

0x6c26,	// (0x00038ac9) popup_note2_window_g2_ParamLimits

0x6c26,	// (0x00038ac9) popup_note2_window_g2

0x0001,

0xfc6c,	// (0x00041b0f) popup_note2_window_g_ParamLimits

0xfc6c,	// (0x00041b0f) popup_note2_window_g

0x70a1,	// (0x00038f44) bg_popup_sub_pane_cp11_ParamLimits

0x70ae,	// (0x00038f51) cell_ai3_links_pane_g1_ParamLimits

0x70c5,	// (0x00038f68) cell_ai3_links_pane_t1

0x0e68,	// (0x00032d0b) set_text_pane_t1_copy1_ParamLimits

0x2502,	// (0x000343a5) cell_graphic_popup_pane_cp2_ParamLimits

0x2502,	// (0x000343a5) cell_graphic_popup_pane_cp2

0xbe45,	// (0x0003dce8) cell_graphic_popup_pane_g1_cp2

0x161f,	// (0x000334c2) cell_graphic_popup_pane_g2_cp2

0xbe4d,	// (0x0003dcf0) cell_graphic_popup_pane_g3_cp2

0xbe55,	// (0x0003dcf8) cell_graphic_popup_pane_t2_cp2

0x1630,	// (0x000334d3) grid_highlight_pane_cp3_cp2

0x1d3b,	// (0x00033bde) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x18de,	// (0x00033781) main_tmo_pane_ParamLimits

0x890f,	// (0x0003a7b2) popup_tmo_big_image_note_window

0xb399,	// (0x0003d23c) cell_ai5_widget_list_pane

0xedba,	// (0x00040c5d) cell_ai5_widget_lrg_icon_pane

0xf214,	// (0x000410b7) tmo_note_info_pane_t1_ParamLimits

0xf229,	// (0x000410cc) tmo_note_info_pane_t2_ParamLimits

0xf23e,	// (0x000410e1) tmo_note_info_pane_t3_ParamLimits

0xbad3,	// (0x0003d976) tmo_note_info_pane_t4_ParamLimits

0xbae5,	// (0x0003d988) tmo_note_info_pane_t5_ParamLimits

0xfeba,	// (0x00041d5d) tmo_note_info_pane_t_ParamLimits

0xf2b6,	// (0x00041159) settings_container_pane_ParamLimits

0xbdcb,	// (0x0003dc6e) indicator_popup_pane_cp5

0xbdcb,	// (0x0003dc6e) indicator_popup_pane_cp6

0x3f70,	// (0x00035e13) list_set_graphic_pane_copy1_ParamLimits

0x0e88,	// (0x00032d2b) bg_popup_window_pane_cp23

0xbe63,	// (0x0003dd06) popup_tmo_big_image_note_window_g1

0xbe6c,	// (0x0003dd0f) popup_tmo_big_image_note_window_t1

0xbe7a,	// (0x0003dd1d) popup_tmo_big_image_note_window_t2

0xbe88,	// (0x0003dd2b) popup_tmo_big_image_note_window_t3

0x0002,

0xfed3,	// (0x00041d76) popup_tmo_big_image_note_window_t

0x62e5,	// (0x00038188) cell_ai5_widget_lrg_icon_pane_g1

0xbe96,	// (0x0003dd39) cell_ai5_widget_lrg_icon_pane_t1

0x3f84,	// (0x00035e27) cell_ai5_widget_list_row_pane_ParamLimits

0x3f84,	// (0x00035e27) cell_ai5_widget_list_row_pane

0x3f9b,	// (0x00035e3e) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x3f9b,	// (0x00035e3e) cell_ai5_widget_list_row_pane_g1

0x3fa8,	// (0x00035e4b) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x3fa8,	// (0x00035e4b) cell_ai5_widget_list_row_pane_t1

0x3fd6,	// (0x00035e79) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x3fd6,	// (0x00035e79) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeda,	// (0x00041d7d) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeda,	// (0x00041d7d) cell_ai5_widget_list_row_pane_t

0xcc34,	// (0x0003ead7) main_fep_vtchi_ss_pane

0xbf41,	// (0x0003dde4) popup_fep_char_pre_window

0xbf49,	// (0x0003ddec) popup_fep_ituss_window

0x400d,	// (0x00035eb0) popup_fep_vkbss_window

0xbf8d,	// (0x0003de30) grid_vkbss_keypad_pane_ParamLimits

0xbf8d,	// (0x0003de30) grid_vkbss_keypad_pane

0xbf9d,	// (0x0003de40) ituss_keypad_pane

0xf426,	// (0x000412c9) aid_vkbss_key_offset_ParamLimits

0xf426,	// (0x000412c9) aid_vkbss_key_offset

0xf432,	// (0x000412d5) cell_vkbss_key_pane_ParamLimits

0xf432,	// (0x000412d5) cell_vkbss_key_pane

0x4474,	// (0x00036317) bg_cell_vkbss_key_g1_ParamLimits

0x4474,	// (0x00036317) bg_cell_vkbss_key_g1

0xbfac,	// (0x0003de4f) cell_vkbss_key_3p_pane_ParamLimits

0xbfac,	// (0x0003de4f) cell_vkbss_key_3p_pane

0xbfc6,	// (0x0003de69) cell_vkbss_key_g1_ParamLimits

0xbfc6,	// (0x0003de69) cell_vkbss_key_g1

0xbfe0,	// (0x0003de83) cell_vkbss_key_t1_ParamLimits

0xbfe0,	// (0x0003de83) cell_vkbss_key_t1

0xf448,	// (0x000412eb) cell_ituss_key_pane_ParamLimits

0xf448,	// (0x000412eb) cell_ituss_key_pane

0xc00b,	// (0x0003deae) bg_cell_ituss_key_g1_ParamLimits

0xc00b,	// (0x0003deae) bg_cell_ituss_key_g1

0xc017,	// (0x0003deba) cell_ituss_key_pane_g1_ParamLimits

0xc017,	// (0x0003deba) cell_ituss_key_pane_g1

0xf459,	// (0x000412fc) cell_ituss_key_pane_g2_ParamLimits

0xf459,	// (0x000412fc) cell_ituss_key_pane_g2

0x0002,

0xfee1,	// (0x00041d84) cell_ituss_key_pane_g_ParamLimits

0xfee1,	// (0x00041d84) cell_ituss_key_pane_g

0xf485,	// (0x00041328) cell_ituss_key_t1_ParamLimits

0xf485,	// (0x00041328) cell_ituss_key_t1

0xf4bb,	// (0x0004135e) cell_ituss_key_t2_ParamLimits

0xf4bb,	// (0x0004135e) cell_ituss_key_t2

0xf4ec,	// (0x0004138f) cell_ituss_key_t3_ParamLimits

0xf4ec,	// (0x0004138f) cell_ituss_key_t3

0xf4bb,	// (0x0004135e) cell_ituss_key_t4_ParamLimits

0xf4bb,	// (0x0004135e) cell_ituss_key_t4

0x0004,

0xfee8,	// (0x00041d8b) cell_ituss_key_t_ParamLimits

0xfee8,	// (0x00041d8b) cell_ituss_key_t

0xc04d,	// (0x0003def0) cell_vkbss_key_3p_pane_g1

0xc045,	// (0x0003dee8) cell_vkbss_key_3p_pane_g2

0xc03d,	// (0x0003dee0) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef3,	// (0x00041d96) cell_vkbss_key_3p_pane_g

0x41d0,	// (0x00036073) bg_popup_fep_char_preview_window_cp02

0xc055,	// (0x0003def8) popup_fep_char_pre_window_t1

0xeda7,	// (0x00040c4a) main_ai5_sk_pane

0xbb5f,	// (0x0003da02) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xbb6b,	// (0x0003da0e) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xbb80,	// (0x0003da23) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xbb8c,	// (0x0003da2f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec5,	// (0x00041d68) cell_contacts_ai5_widget_pane_g_ParamLimits

0xbb98,	// (0x0003da3b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x18de,	// (0x00033781) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x412d,	// (0x00035fd0) main_ai5_sk_pane_g1

0x4972,	// (0x00036815) popup_query_code_window_g1

0x3ffe,	// (0x00035ea1) popup_fep_vkb_icf_pane

0xbf77,	// (0x0003de1a) popup_fep_vtchi_icf_pane

0xc06c,	// (0x0003df0f) bg_icf_pane

0xc078,	// (0x0003df1b) list_vkb_icf_pane

0xc084,	// (0x0003df27) bg_icf_pane_cp01

0xc097,	// (0x0003df3a) vtchi_icf_list_pane

0x4136,	// (0x00035fd9) list_vkb_icf_pane_t1_ParamLimits

0x4136,	// (0x00035fd9) list_vkb_icf_pane_t1

0xc0bd,	// (0x0003df60) vtchi_icf_list_pane_t1_ParamLimits

0xc0bd,	// (0x0003df60) vtchi_icf_list_pane_t1

0xbf49,	// (0x0003ddec) popup_fep_ituss_window_ParamLimits

0xbf77,	// (0x0003de1a) popup_fep_vtchi_icf_pane_ParamLimits

0xbf9d,	// (0x0003de40) ituss_keypad_pane_ParamLimits

0xf41c,	// (0x000412bf) ituss_sks_pane

0xc06c,	// (0x0003df0f) bg_icf_pane_ParamLimits

0xbf21,	// (0x0003ddc4) icf_edit_indi_pane_ParamLimits

0xbf21,	// (0x0003ddc4) icf_edit_indi_pane

0xc078,	// (0x0003df1b) list_vkb_icf_pane_ParamLimits

0xc084,	// (0x0003df27) bg_icf_pane_cp01_ParamLimits

0xbf34,	// (0x0003ddd7) icf_edit_indi_pane_cp01_ParamLimits

0xbf34,	// (0x0003ddd7) icf_edit_indi_pane_cp01

0xc09f,	// (0x0003df42) vtchi_query_pane

0xb1d5,	// (0x0003d078) icf_edit_indi_pane_g1_ParamLimits

0xb1d5,	// (0x0003d078) icf_edit_indi_pane_g1

0x415a,	// (0x00035ffd) icf_edit_indi_pane_g2_ParamLimits

0x415a,	// (0x00035ffd) icf_edit_indi_pane_g2

0x0001,

0xff0b,	// (0x00041dae) icf_edit_indi_pane_g_ParamLimits

0xff0b,	// (0x00041dae) icf_edit_indi_pane_g

0x416a,	// (0x0003600d) icf_edit_indi_pane_t1

0xc0d4,	// (0x0003df77) bg_input_focus_pane_cp042

0xc0dd,	// (0x0003df80) vtchi_button_pane

0xc0e6,	// (0x0003df89) vtchi_query_pane_t1

0xc0f4,	// (0x0003df97) vtchi_query_pane_t2

0xc13e,	// (0x0003dfe1) vtchi_query_pane_t3

0x0002,

0xfefa,	// (0x00041d9d) vtchi_query_pane_t

0xcc34,	// (0x0003ead7) bg_button_pane_cp13

0xc14c,	// (0x0003dfef) vtchi_button_pane_g1

0xf52f,	// (0x000413d2) ituss_sks_pane_g1

0xf538,	// (0x000413db) ituss_sks_pane_g2

0x0001,

0xff01,	// (0x00041da4) ituss_sks_pane_g

0xc162,	// (0x0003e005) ituss_sks_pane_t1

0xc154,	// (0x0003dff7) ituss_sks_pane_t2

0x0001,

0xff06,	// (0x00041da9) ituss_sks_pane_t

0x5f12,	// (0x00037db5) indicator_nsta_pane_cp_g1

0x5f1b,	// (0x00037dbe) indicator_nsta_pane_cp_g2

0x5f23,	// (0x00037dc6) indicator_nsta_pane_cp_g3

0x5f2b,	// (0x00037dce) indicator_nsta_pane_cp_g4

0x5f33,	// (0x00037dd6) indicator_nsta_pane_cp_g5

0x5f3b,	// (0x00037dde) indicator_nsta_pane_cp_g6

0x0005,

0xfaaa,	// (0x0004194d) indicator_nsta_pane_cp_g

0xea45,	// (0x000408e8) cell_graphic2_pane_t2_ParamLimits

0xea45,	// (0x000408e8) cell_graphic2_pane_t2

0x0001,

0xfdbc,	// (0x00041c5f) cell_graphic2_pane_t_ParamLimits

0xfdbc,	// (0x00041c5f) cell_graphic2_pane_t

0xea72,	// (0x00040915) cell_graphic2_control_pane_t1

0x797f,	// (0x00039822) signal_pane_g3_ParamLimits

0x797f,	// (0x00039822) signal_pane_g3

0x7990,	// (0x00039833) signal_pane_g4_ParamLimits

0x7990,	// (0x00039833) signal_pane_g4

0x3fe8,	// (0x00035e8b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x3fe8,	// (0x00035e8b) cell_ai5_widget_list_row_pane_t3

0xc02b,	// (0x0003dece) cell_ituss_key_pane_t1_ParamLimits

0xc02b,	// (0x0003dece) cell_ituss_key_pane_t1

0x4648,	// (0x000364eb) form_field_data_wide_pane_vc_t2_ParamLimits

0x4648,	// (0x000364eb) form_field_data_wide_pane_vc_t2

0x465a,	// (0x000364fd) form_field_data_wide_pane_vc_t3_ParamLimits

0x465a,	// (0x000364fd) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x000416ac) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x000416ac) form_field_data_wide_pane_vc_t

0x5c66,	// (0x00037b09) form_field_slider_wide_pane_vc_t3_ParamLimits

0x5c66,	// (0x00037b09) form_field_slider_wide_pane_vc_t3

0x5d24,	// (0x00037bc7) form_field_popup_wide_pane_vc_t2_ParamLimits

0x5d24,	// (0x00037bc7) form_field_popup_wide_pane_vc_t2

0x5d39,	// (0x00037bdc) form_field_popup_wide_pane_vc_t3_ParamLimits

0x5d39,	// (0x00037bdc) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa99,	// (0x0004193c) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa99,	// (0x0004193c) form_field_popup_wide_pane_vc_t

0xf078,	// (0x00040f1b) aid_fshwr2_btn_pane_ParamLimits

0xf084,	// (0x00040f27) aid_fshwr2_syb_pane_ParamLimits

0xf096,	// (0x00040f39) aid_fshwr2_txt_pane_ParamLimits

0xe26c,	// (0x0004010f) fshwr2_bg_pane_ParamLimits

0xf0a2,	// (0x00040f45) fshwr2_func_candi_pane_ParamLimits

0xf0b6,	// (0x00040f59) fshwr2_hwr_syb_pane_ParamLimits

0xf0c8,	// (0x00040f6b) fshwr2_icf_pane_ParamLimits

0x3164,	// (0x00035007) list_double_graphic_pane_vc_g4_ParamLimits

0x3164,	// (0x00035007) list_double_graphic_pane_vc_g4

0xf479,	// (0x0004131c) cell_ituss_key_pane_g3_ParamLimits

0xf479,	// (0x0004131c) cell_ituss_key_pane_g3

0xf51d,	// (0x000413c0) cell_ituss_key_t5_ParamLimits

0xf51d,	// (0x000413c0) cell_ituss_key_t5

0x400d,	// (0x00035eb0) popup_fep_vkbss_window_ParamLimits

0xedb1,	// (0x00040c54) aid_cell_ai5_quarter

0x416a,	// (0x0003600d) icf_edit_indi_pane_t1_ParamLimits

0x1460,	// (0x00033303) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x1460,	// (0x00033303) aid_tch_indicator_popup_pane_cp2

0x1473,	// (0x00033316) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x1473,	// (0x00033316) aid_tch_query_popup_data_pane_cp2

0x491a,	// (0x000367bd) aid_tch_query_popup_pane_ParamLimits

0x491a,	// (0x000367bd) aid_tch_query_popup_pane

0x491a,	// (0x000367bd) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x491a,	// (0x000367bd) aid_tch_query_popup_data_pane_cp1

0x27b4,	// (0x00034657) cell_fshwr2_syb_bg_pane_ParamLimits

0xf1ca,	// (0x0004106d) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xf1de,	// (0x00041081) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0x3ffe,	// (0x00035ea1) popup_fep_vkb_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Large
