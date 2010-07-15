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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0005b876 };

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
0x902b,	// (0x000648a1) Screen

0x9037,	// (0x000648ad) application_window_ParamLimits

0x9037,	// (0x000648ad) application_window

0x7e5a,	// (0x000636d0) screen_g1

0x906f,	// (0x000648e5) area_bottom_pane_ParamLimits

0x906f,	// (0x000648e5) area_bottom_pane

0xdd61,	// (0x000695d7) area_top_pane_ParamLimits

0xdd61,	// (0x000695d7) area_top_pane

0xddff,	// (0x00069675) main_pane_ParamLimits

0xddff,	// (0x00069675) main_pane

0x7e64,	// (0x000636da) misc_graphics

0xae82,	// (0x000666f8) battery_pane_ParamLimits

0xae82,	// (0x000666f8) battery_pane

0x2c06,	// (0x0005e47c) bg_status_flat_pane_g8

0x2c0e,	// (0x0005e484) bg_status_flat_pane_g9

0x1fe8,	// (0x0005d85e) context_pane_ParamLimits

0x1fe8,	// (0x0005d85e) context_pane

0xbda8,	// (0x0006761e) navi_pane_ParamLimits

0xbda8,	// (0x0006761e) navi_pane

0xbe26,	// (0x0006769c) signal_pane_ParamLimits

0xbe26,	// (0x0006769c) signal_pane

0x0008,

0xf863,	// (0x0006b0d9) bg_status_flat_pane_g

0xbeb6,	// (0x0006772c) status_pane_g1_ParamLimits

0xbeb6,	// (0x0006772c) status_pane_g1

0xbecc,	// (0x00067742) status_pane_g2_ParamLimits

0xbecc,	// (0x00067742) status_pane_g2

0x220f,	// (0x0005da85) status_pane_g3_ParamLimits

0x220f,	// (0x0005da85) status_pane_g3

0x0004,

0xf796,	// (0x0006b00c) status_pane_g_ParamLimits

0xf796,	// (0x0006b00c) status_pane_g

0xbed8,	// (0x0006774e) title_pane_ParamLimits

0xbed8,	// (0x0006774e) title_pane

0xbf3b,	// (0x000677b1) uni_indicator_pane_ParamLimits

0xbf3b,	// (0x000677b1) uni_indicator_pane

0x1e50,	// (0x0005d6c6) bg_list_pane_ParamLimits

0x1e50,	// (0x0005d6c6) bg_list_pane

0xa64a,	// (0x00065ec0) find_pane

0x2423,	// (0x0005dc99) listscroll_app_pane_ParamLimits

0x2423,	// (0x0005dc99) listscroll_app_pane

0x1e7c,	// (0x0005d6f2) listscroll_form_pane

0xa652,	// (0x00065ec8) listscroll_gen_pane_ParamLimits

0xa652,	// (0x00065ec8) listscroll_gen_pane

0x0198,	// (0x0005ba0e) listscroll_set_pane

0x376a,	// (0x0005efe0) main_idle_act_pane

0xe1e4,	// (0x00069a5a) main_idle_trad_pane

0xe1e4,	// (0x00069a5a) main_list_empty_pane

0x1e70,	// (0x0005d6e6) main_midp_pane

0x1e96,	// (0x0005d70c) main_pane_g1_ParamLimits

0x1e96,	// (0x0005d70c) main_pane_g1

0xa666,	// (0x00065edc) popup_ai_message_window_ParamLimits

0xa666,	// (0x00065edc) popup_ai_message_window

0xa717,	// (0x00065f8d) popup_fep_china_uni_window_ParamLimits

0xa717,	// (0x00065f8d) popup_fep_china_uni_window

0xa771,	// (0x00065fe7) popup_fep_japan_candidate_window_ParamLimits

0xa771,	// (0x00065fe7) popup_fep_japan_candidate_window

0xa78f,	// (0x00066005) popup_fep_japan_predictive_window_ParamLimits

0xa78f,	// (0x00066005) popup_fep_japan_predictive_window

0xa7a1,	// (0x00066017) popup_find_window

0xa7be,	// (0x00066034) popup_grid_graphic_window_ParamLimits

0xa7be,	// (0x00066034) popup_grid_graphic_window

0xa85c,	// (0x000660d2) popup_large_graphic_colour_window

0xa882,	// (0x000660f8) popup_menu_window_ParamLimits

0xa882,	// (0x000660f8) popup_menu_window

0xaa54,	// (0x000662ca) popup_note_image_window

0xaa1a,	// (0x00066290) popup_note_wait_window_ParamLimits

0xaa1a,	// (0x00066290) popup_note_wait_window

0xaa6c,	// (0x000662e2) popup_note_window_ParamLimits

0xaa6c,	// (0x000662e2) popup_note_window

0xab1b,	// (0x00066391) popup_query_code_window_ParamLimits

0xab1b,	// (0x00066391) popup_query_code_window

0xab55,	// (0x000663cb) popup_query_data_code_window_ParamLimits

0xab55,	// (0x000663cb) popup_query_data_code_window

0xab72,	// (0x000663e8) popup_query_data_window_ParamLimits

0xab72,	// (0x000663e8) popup_query_data_window

0xabf4,	// (0x0006646a) popup_query_sat_info_window_ParamLimits

0xabf4,	// (0x0006646a) popup_query_sat_info_window

0xac8b,	// (0x00066501) popup_snote_single_graphic_window_ParamLimits

0xac8b,	// (0x00066501) popup_snote_single_graphic_window

0xac8b,	// (0x00066501) popup_snote_single_text_window_ParamLimits

0xac8b,	// (0x00066501) popup_snote_single_text_window

0x0604,	// (0x0005be7a) popup_sub_window_general

0xade8,	// (0x0006665e) popup_window_general_ParamLimits

0xade8,	// (0x0006665e) popup_window_general

0x1ea4,	// (0x0005d71a) power_save_pane

0xa4a8,	// (0x00065d1e) control_pane_g1_ParamLimits

0xa4a8,	// (0x00065d1e) control_pane_g1

0xa4d1,	// (0x00065d47) control_pane_g2_ParamLimits

0xa4d1,	// (0x00065d47) control_pane_g2

0x004e,	// (0x0005b8c4) control_pane_g3_ParamLimits

0x004e,	// (0x0005b8c4) control_pane_g3

0x0007,

0xf77e,	// (0x0006aff4) control_pane_g_ParamLimits

0xf77e,	// (0x0006aff4) control_pane_g

0xa539,	// (0x00065daf) control_pane_t1_ParamLimits

0xa539,	// (0x00065daf) control_pane_t1

0xa59f,	// (0x00065e15) control_pane_t2_ParamLimits

0xa59f,	// (0x00065e15) control_pane_t2

0x0002,

0xf78f,	// (0x0006b005) control_pane_t_ParamLimits

0xf78f,	// (0x0006b005) control_pane_t

0xa401,	// (0x00065c77) navi_navi_volume_pane_cp1

0xa409,	// (0x00065c7f) status_small_icon_pane

0xe2e6,	// (0x00069b5c) status_small_pane_g1_ParamLimits

0xe2e6,	// (0x00069b5c) status_small_pane_g1

0xa411,	// (0x00065c87) status_small_pane_g2_ParamLimits

0xa411,	// (0x00065c87) status_small_pane_g2

0xa41d,	// (0x00065c93) status_small_pane_g3_ParamLimits

0xa41d,	// (0x00065c93) status_small_pane_g3

0xa429,	// (0x00065c9f) status_small_pane_g4_ParamLimits

0xa429,	// (0x00065c9f) status_small_pane_g4

0xa435,	// (0x00065cab) status_small_pane_g5_ParamLimits

0xa435,	// (0x00065cab) status_small_pane_g5

0xa443,	// (0x00065cb9) status_small_pane_g6_ParamLimits

0xa443,	// (0x00065cb9) status_small_pane_g6

0x0007,

0xf76d,	// (0x0006afe3) status_small_pane_g_ParamLimits

0xf76d,	// (0x0006afe3) status_small_pane_g

0xa472,	// (0x00065ce8) status_small_pane_t1

0xa494,	// (0x00065d0a) status_small_wait_pane_ParamLimits

0xa494,	// (0x00065d0a) status_small_wait_pane

0xa0dd,	// (0x00065953) aid_levels_signal_ParamLimits

0xa0dd,	// (0x00065953) aid_levels_signal

0xa0f5,	// (0x0006596b) signal_pane_g1_ParamLimits

0xa0f5,	// (0x0006596b) signal_pane_g1

0xa110,	// (0x00065986) signal_pane_g2_ParamLimits

0xa110,	// (0x00065986) signal_pane_g2

0x0003,

0xf6fe,	// (0x0006af74) signal_pane_g_ParamLimits

0xf6fe,	// (0x0006af74) signal_pane_g

0xbb7b,	// (0x000673f1) context_pane_g1

0x926d,	// (0x00064ae3) title_pane_g1

0x92a4,	// (0x00064b1a) title_pane_t1

0x7e7a,	// (0x000636f0) title_pane_t2

0x7ea0,	// (0x00063716) title_pane_t3

0x0002,

0xf557,	// (0x0006adcd) title_pane_t

0xbf63,	// (0x000677d9) aid_levels_battery_ParamLimits

0xbf63,	// (0x000677d9) aid_levels_battery

0xbf7f,	// (0x000677f5) battery_pane_g1_ParamLimits

0xbf7f,	// (0x000677f5) battery_pane_g1

0xbf9c,	// (0x00067812) battery_pane_g2_ParamLimits

0xbf9c,	// (0x00067812) battery_pane_g2

0x0001,

0xf7a1,	// (0x0006b017) battery_pane_g_ParamLimits

0xf7a1,	// (0x0006b017) battery_pane_g

0xc562,	// (0x00067dd8) uni_indicator_pane_g1

0xc578,	// (0x00067dee) uni_indicator_pane_g2

0xc58e,	// (0x00067e04) uni_indicator_pane_g3

0x0005,

0xf90b,	// (0x0006b181) uni_indicator_pane_g

0xe084,	// (0x000698fa) navi_icon_pane_ParamLimits

0xe084,	// (0x000698fa) navi_icon_pane

0xdfd9,	// (0x0006984f) navi_midp_pane

0xe0a0,	// (0x00069916) navi_navi_pane

0xe0aa,	// (0x00069920) navi_text_pane_ParamLimits

0xe0aa,	// (0x00069920) navi_text_pane

0x7e5a,	// (0x000636d0) status_small_wait_pane_g1

0x80f1,	// (0x00063967) status_small_wait_pane_g2

0x0001,

0xf906,	// (0x0006b17c) status_small_wait_pane_g

0xc4bb,	// (0x00067d31) navi_navi_icon_text_pane

0x3259,	// (0x0005eacf) navi_navi_pane_g1_ParamLimits

0x3259,	// (0x0005eacf) navi_navi_pane_g1

0x326b,	// (0x0005eae1) navi_navi_pane_g2_ParamLimits

0x326b,	// (0x0005eae1) navi_navi_pane_g2

0x0001,

0xf8d4,	// (0x0006b14a) navi_navi_pane_g_ParamLimits

0xf8d4,	// (0x0006b14a) navi_navi_pane_g

0x327d,	// (0x0005eaf3) navi_navi_tabs_pane

0x3286,	// (0x0005eafc) navi_navi_text_pane

0xc4bb,	// (0x00067d31) navi_navi_volume_pane

0x322d,	// (0x0005eaa3) navi_text_pane_t1

0x3221,	// (0x0005ea97) navi_icon_pane_g1

0x3174,	// (0x0005e9ea) navi_navi_text_pane_t1

0xb07c,	// (0x000668f2) navi_navi_volume_pane_g1

0x0a1c,	// (0x0005c292) volume_small_pane

0x30da,	// (0x0005e950) navi_navi_icon_text_pane_g1

0xc413,	// (0x00067c89) navi_navi_icon_text_pane_t1

0xe0a0,	// (0x00069916) navi_tabs_2_long_pane

0xe0a0,	// (0x00069916) navi_tabs_2_pane

0xe0a0,	// (0x00069916) navi_tabs_3_long_pane

0xe0a0,	// (0x00069916) navi_tabs_3_pane

0xe0a0,	// (0x00069916) navi_tabs_4_pane

0x09f4,	// (0x0005c26a) tabs_2_active_pane_ParamLimits

0x09f4,	// (0x0005c26a) tabs_2_active_pane

0x0a04,	// (0x0005c27a) tabs_2_passive_pane_ParamLimits

0x0a04,	// (0x0005c27a) tabs_2_passive_pane

0x09c2,	// (0x0005c238) tabs_3_active_pane_ParamLimits

0x09c2,	// (0x0005c238) tabs_3_active_pane

0x09d2,	// (0x0005c248) tabs_3_passive_pane_ParamLimits

0x09d2,	// (0x0005c248) tabs_3_passive_pane

0x09e3,	// (0x0005c259) tabs_3_passive_pane_cp_ParamLimits

0x09e3,	// (0x0005c259) tabs_3_passive_pane_cp

0x097e,	// (0x0005c1f4) tabs_4_active_pane_ParamLimits

0x097e,	// (0x0005c1f4) tabs_4_active_pane

0x098f,	// (0x0005c205) tabs_4_passive_pane_ParamLimits

0x098f,	// (0x0005c205) tabs_4_passive_pane

0x09a0,	// (0x0005c216) tabs_4_passive_pane_cp_ParamLimits

0x09a0,	// (0x0005c216) tabs_4_passive_pane_cp

0x09b1,	// (0x0005c227) tabs_4_passive_pane_cp2_ParamLimits

0x09b1,	// (0x0005c227) tabs_4_passive_pane_cp2

0x095a,	// (0x0005c1d0) tabs_2_long_active_pane_ParamLimits

0x095a,	// (0x0005c1d0) tabs_2_long_active_pane

0x096c,	// (0x0005c1e2) tabs_2_long_passive_pane_ParamLimits

0x096c,	// (0x0005c1e2) tabs_2_long_passive_pane

0x0915,	// (0x0005c18b) tabs_3_long_active_pane_ParamLimits

0x0915,	// (0x0005c18b) tabs_3_long_active_pane

0x092e,	// (0x0005c1a4) tabs_3_long_passive_pane_ParamLimits

0x092e,	// (0x0005c1a4) tabs_3_long_passive_pane

0x0941,	// (0x0005c1b7) tabs_3_long_passive_pane_cp_ParamLimits

0x0941,	// (0x0005c1b7) tabs_3_long_passive_pane_cp

0x08bb,	// (0x0005c131) volume_small_pane_g1

0x08c4,	// (0x0005c13a) volume_small_pane_g2

0x08cd,	// (0x0005c143) volume_small_pane_g3

0x08d6,	// (0x0005c14c) volume_small_pane_g4

0x08df,	// (0x0005c155) volume_small_pane_g5

0x08e8,	// (0x0005c15e) volume_small_pane_g6

0x08f1,	// (0x0005c167) volume_small_pane_g7

0x08fa,	// (0x0005c170) volume_small_pane_g8

0x0903,	// (0x0005c179) volume_small_pane_g9

0x090c,	// (0x0005c182) volume_small_pane_g10

0x0009,

0xf8a0,	// (0x0006b116) volume_small_pane_g

0x7fdc,	// (0x00063852) bg_active_tab_pane_cp2_ParamLimits

0x7fdc,	// (0x00063852) bg_active_tab_pane_cp2

0x9330,	// (0x00064ba6) tabs_3_active_pane_g1

0x9338,	// (0x00064bae) tabs_3_active_pane_t1

0x7fdc,	// (0x00063852) bg_passive_tab_pane_cp2_ParamLimits

0x7fdc,	// (0x00063852) bg_passive_tab_pane_cp2

0x9330,	// (0x00064ba6) tabs_3_passive_pane_g1

0x9338,	// (0x00064bae) tabs_3_passive_pane_t1

0x7fdc,	// (0x00063852) bg_active_tab_pane_cp3_ParamLimits

0x7fdc,	// (0x00063852) bg_active_tab_pane_cp3

0x934a,	// (0x00064bc0) tabs_4_active_pane_g1

0x9352,	// (0x00064bc8) tabs_4_active_pane_t1

0x7fdc,	// (0x00063852) bg_passive_tab_pane_cp3_ParamLimits

0x7fdc,	// (0x00063852) bg_passive_tab_pane_cp3

0x934a,	// (0x00064bc0) tabs_4_1_passive_pane_g1

0x9352,	// (0x00064bc8) tabs_4_1_passive_pane_t1

0x1e70,	// (0x0005d6e6) list_highlight_pane_cp2

0xc694,	// (0x00067f0a) list_set_pane_ParamLimits

0xc694,	// (0x00067f0a) list_set_pane

0xc72e,	// (0x00067fa4) main_pane_set_t1_ParamLimits

0xc72e,	// (0x00067fa4) main_pane_set_t1

0xc74e,	// (0x00067fc4) main_pane_set_t2_ParamLimits

0xc74e,	// (0x00067fc4) main_pane_set_t2

0xc762,	// (0x00067fd8) main_pane_set_t3_ParamLimits

0xc762,	// (0x00067fd8) main_pane_set_t3

0xc774,	// (0x00067fea) main_pane_set_t4_ParamLimits

0xc774,	// (0x00067fea) main_pane_set_t4

0x0003,

0xf970,	// (0x0006b1e6) main_pane_set_t_ParamLimits

0xf970,	// (0x0006b1e6) main_pane_set_t

0xc786,	// (0x00067ffc) setting_code_pane

0xc790,	// (0x00068006) setting_slider_graphic_pane

0xc790,	// (0x00068006) setting_slider_pane

0xc790,	// (0x00068006) setting_text_pane

0xc790,	// (0x00068006) setting_volume_pane

0x9364,	// (0x00064bda) volume_set_pane

0x7eb2,	// (0x00063728) bg_set_opt_pane_cp

0x936c,	// (0x00064be2) setting_slider_pane_t1

0x9385,	// (0x00064bfb) setting_slider_pane_t2

0x939f,	// (0x00064c15) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0006add4) setting_slider_pane_t

0x93b7,	// (0x00064c2d) slider_set_pane

0x7e64,	// (0x000636da) bg_set_opt_pane_cp2

0x7ec0,	// (0x00063736) setting_slider_graphic_pane_g1

0x93cd,	// (0x00064c43) setting_slider_graphic_pane_t1

0x93dd,	// (0x00064c53) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0006addb) setting_slider_graphic_pane_t

0x93ed,	// (0x00064c63) slider_set_pane_cp

0x7e64,	// (0x000636da) input_focus_pane_cp1

0x3751,	// (0x0005efc7) list_set_text_pane

0x7e5a,	// (0x000636d0) setting_text_pane_g1

0x7e64,	// (0x000636da) input_focus_pane_cp2

0x7e5a,	// (0x000636d0) setting_code_pane_g1

0x7ec9,	// (0x0006373f) setting_code_pane_t1

0xdeba,	// (0x00069730) set_text_pane_t1_ParamLimits

0xdeba,	// (0x00069730) set_text_pane_t1

0x82ca,	// (0x00063b40) set_opt_bg_pane_g1

0x82d2,	// (0x00063b48) set_opt_bg_pane_g2

0xc649,	// (0x00067ebf) set_opt_bg_pane_g3

0x82e2,	// (0x00063b58) set_opt_bg_pane_g4

0x82ea,	// (0x00063b60) set_opt_bg_pane_g5

0x82f2,	// (0x00063b68) set_opt_bg_pane_g6

0xc653,	// (0x00067ec9) set_opt_bg_pane_g7

0xc65b,	// (0x00067ed1) set_opt_bg_pane_g8

0xc665,	// (0x00067edb) set_opt_bg_pane_g9

0x0008,

0xf95d,	// (0x0006b1d3) set_opt_bg_pane_g

0xc63c,	// (0x00067eb2) slider_set_pane_g1

0x0a9b,	// (0x0005c311) slider_set_pane_g2

0x0006,

0xf94e,	// (0x0006b1c4) slider_set_pane_g

0xb084,	// (0x000668fa) volume_set_pane_g1

0xb08c,	// (0x00066902) volume_set_pane_g2

0xb094,	// (0x0006690a) volume_set_pane_g3

0xb09c,	// (0x00066912) volume_set_pane_g4

0xb0a4,	// (0x0006691a) volume_set_pane_g5

0xb0ac,	// (0x00066922) volume_set_pane_g6

0xb0b4,	// (0x0006692a) volume_set_pane_g7

0xb0bc,	// (0x00066932) volume_set_pane_g8

0xb0c4,	// (0x0006693a) volume_set_pane_g9

0xb0cc,	// (0x00066942) volume_set_pane_g10

0x0009,

0xf926,	// (0x0006b19c) volume_set_pane_g

0x93f5,	// (0x00064c6b) indicator_pane_ParamLimits

0x93f5,	// (0x00064c6b) indicator_pane

0x941d,	// (0x00064c93) main_idle_pane_g2_ParamLimits

0x941d,	// (0x00064c93) main_idle_pane_g2

0x9455,	// (0x00064ccb) main_pane_idle_g1_ParamLimits

0x9455,	// (0x00064ccb) main_pane_idle_g1

0x7ed7,	// (0x0006374d) popup_clock_digital_analogue_window_ParamLimits

0x7ed7,	// (0x0006374d) popup_clock_digital_analogue_window

0x947c,	// (0x00064cf2) soft_indicator_pane_ParamLimits

0x947c,	// (0x00064cf2) soft_indicator_pane

0x94a0,	// (0x00064d16) wallpaper_pane_ParamLimits

0x94a0,	// (0x00064d16) wallpaper_pane

0x7e5a,	// (0x000636d0) wallpaper_pane_g1

0x94b2,	// (0x00064d28) indicator_pane_g1_ParamLimits

0x94b2,	// (0x00064d28) indicator_pane_g1

0x3bb6,	// (0x0005f42c) navi_navi_icon_text_pane_srt_g1

0x7f05,	// (0x0006377b) soft_indicator_pane_t1

0x7f1f,	// (0x00063795) aid_ps_area_pane

0x94c8,	// (0x00064d3e) aid_ps_clock_pane

0x7f30,	// (0x000637a6) aid_ps_indicator_pane

0x7f3c,	// (0x000637b2) indicator_ps_pane_ParamLimits

0x7f3c,	// (0x000637b2) indicator_ps_pane

0x7f4b,	// (0x000637c1) power_save_pane_g1_ParamLimits

0x7f4b,	// (0x000637c1) power_save_pane_g1

0x7f57,	// (0x000637cd) power_save_pane_g2_ParamLimits

0x7f57,	// (0x000637cd) power_save_pane_g2

0xdd41,	// (0x000695b7) aid_navinavi_width_pane

0x7f1f,	// (0x00063795) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0006ade0) power_save_pane_g_ParamLimits

0xf56a,	// (0x0006ade0) power_save_pane_g

0x7f65,	// (0x000637db) power_save_pane_t1_ParamLimits

0x7f65,	// (0x000637db) power_save_pane_t1

0x94c8,	// (0x00064d3e) aid_ps_clock_pane_ParamLimits

0x7f30,	// (0x000637a6) aid_ps_indicator_pane_ParamLimits

0x7f77,	// (0x000637ed) power_save_pane_t4_ParamLimits

0x7f77,	// (0x000637ed) power_save_pane_t4

0x0001,

0xf56f,	// (0x0006ade5) power_save_pane_t_ParamLimits

0xf56f,	// (0x0006ade5) power_save_pane_t

0x7fa1,	// (0x00063817) power_save_t3_ParamLimits

0x7fa1,	// (0x00063817) power_save_t3

0x7f8c,	// (0x00063802) power_save_t2_ParamLimits

0x7f8c,	// (0x00063802) power_save_t2

0x7fb6,	// (0x0006382c) indicator_ps_pane_g1

0x94d6,	// (0x00064d4c) ai_gene_pane_ParamLimits

0x94d6,	// (0x00064d4c) ai_gene_pane

0x94ed,	// (0x00064d63) ai_links_pane_ParamLimits

0x94ed,	// (0x00064d63) ai_links_pane

0x9505,	// (0x00064d7b) indicator_pane_cp1_ParamLimits

0x9505,	// (0x00064d7b) indicator_pane_cp1

0x9514,	// (0x00064d8a) main_pane_idle_g1_cp_ParamLimits

0x9514,	// (0x00064d8a) main_pane_idle_g1_cp

0x952c,	// (0x00064da2) popup_ai_links_title_window

0x9535,	// (0x00064dab) soft_indicator_pane_cp1_ParamLimits

0x9535,	// (0x00064dab) soft_indicator_pane_cp1

0x3518,	// (0x0005ed8e) ai_links_pane_g1

0x3521,	// (0x0005ed97) grid_ai_links_pane

0xc559,	// (0x00067dcf) ai_gene_pane_1

0x3506,	// (0x0005ed7c) ai_gene_pane_2

0x350f,	// (0x0005ed85) list_highlight_pane_cp4

0xc535,	// (0x00067dab) cell_ai_link_pane_ParamLimits

0xc535,	// (0x00067dab) cell_ai_link_pane

0x34d7,	// (0x0005ed4d) cell_ai_link_pane_g1

0x80f1,	// (0x00063967) cell_ai_link_pane_g2

0x0001,

0xf901,	// (0x0006b177) cell_ai_link_pane_g

0x7e64,	// (0x000636da) grid_highlight_cp2

0x7e64,	// (0x000636da) bg_popup_sub_pane_cp1

0x7fcd,	// (0x00063843) popup_ai_links_title_window_t1

0x3427,	// (0x0005ec9d) ai_gene_pane_1_g1_ParamLimits

0x3427,	// (0x0005ec9d) ai_gene_pane_1_g1

0x3433,	// (0x0005eca9) ai_gene_pane_1_g2_ParamLimits

0x3433,	// (0x0005eca9) ai_gene_pane_1_g2

0x0001,

0xf8f7,	// (0x0006b16d) ai_gene_pane_1_g_ParamLimits

0xf8f7,	// (0x0006b16d) ai_gene_pane_1_g

0x3440,	// (0x0005ecb6) ai_gene_pane_1_t1_ParamLimits

0x3440,	// (0x0005ecb6) ai_gene_pane_1_t1

0x3474,	// (0x0005ecea) grid_ai_soft_ind_pane

0x3412,	// (0x0005ec88) ai_gene_pane_2_t1_ParamLimits

0x3412,	// (0x0005ec88) ai_gene_pane_2_t1

0x9549,	// (0x00064dbf) main_pane_empty_t1_ParamLimits

0x9549,	// (0x00064dbf) main_pane_empty_t1

0x9561,	// (0x00064dd7) main_pane_empty_t2_ParamLimits

0x9561,	// (0x00064dd7) main_pane_empty_t2

0x9576,	// (0x00064dec) main_pane_empty_t3_ParamLimits

0x9576,	// (0x00064dec) main_pane_empty_t3

0x9588,	// (0x00064dfe) main_pane_empty_t4_ParamLimits

0x9588,	// (0x00064dfe) main_pane_empty_t4

0x959a,	// (0x00064e10) main_pane_empty_t5_ParamLimits

0x959a,	// (0x00064e10) main_pane_empty_t5

0x0004,

0xf574,	// (0x0006adea) main_pane_empty_t_ParamLimits

0xf574,	// (0x0006adea) main_pane_empty_t

0x831b,	// (0x00063b91) bg_popup_window_pane_ParamLimits

0x831b,	// (0x00063b91) bg_popup_window_pane

0xc4af,	// (0x00067d25) find_popup_pane_cp2_ParamLimits

0xc4af,	// (0x00067d25) find_popup_pane_cp2

0x318e,	// (0x0005ea04) heading_pane_ParamLimits

0x318e,	// (0x0005ea04) heading_pane

0x7e64,	// (0x000636da) bg_popup_sub_pane

0xc430,	// (0x00067ca6) bg_popup_window_pane_g1_ParamLimits

0xc430,	// (0x00067ca6) bg_popup_window_pane_g1

0xc43f,	// (0x00067cb5) bg_popup_window_pane_g2_ParamLimits

0xc43f,	// (0x00067cb5) bg_popup_window_pane_g2

0xc44b,	// (0x00067cc1) bg_popup_window_pane_g3_ParamLimits

0xc44b,	// (0x00067cc1) bg_popup_window_pane_g3

0xc457,	// (0x00067ccd) bg_popup_window_pane_g4_ParamLimits

0xc457,	// (0x00067ccd) bg_popup_window_pane_g4

0xc466,	// (0x00067cdc) bg_popup_window_pane_g5_ParamLimits

0xc466,	// (0x00067cdc) bg_popup_window_pane_g5

0xc476,	// (0x00067cec) bg_popup_window_pane_g6_ParamLimits

0xc476,	// (0x00067cec) bg_popup_window_pane_g6

0xc482,	// (0x00067cf8) bg_popup_window_pane_g7_ParamLimits

0xc482,	// (0x00067cf8) bg_popup_window_pane_g7

0xc491,	// (0x00067d07) bg_popup_window_pane_g8_ParamLimits

0xc491,	// (0x00067d07) bg_popup_window_pane_g8

0xc4a0,	// (0x00067d16) bg_popup_window_pane_g9_ParamLimits

0xc4a0,	// (0x00067d16) bg_popup_window_pane_g9

0x3168,	// (0x0005e9de) bg_popup_window_pane_g10_ParamLimits

0x3168,	// (0x0005e9de) bg_popup_window_pane_g10

0x0009,

0xf8bf,	// (0x0006b135) bg_popup_window_pane_g_ParamLimits

0xf8bf,	// (0x0006b135) bg_popup_window_pane_g

0x3091,	// (0x0005e907) bg_popup_heading_pane_ParamLimits

0x3091,	// (0x0005e907) bg_popup_heading_pane

0x0ba2,	// (0x0005c418) tabs_4_passive_pane_cp_srt_ParamLimits

0x0ba2,	// (0x0005c418) tabs_4_passive_pane_cp_srt

0x0bb4,	// (0x0005c42a) tabs_4_passive_pane_srt_ParamLimits

0x30a5,	// (0x0005e91b) heading_pane_g2

0x0bb4,	// (0x0005c42a) tabs_4_passive_pane_srt

0x2423,	// (0x0005dc99) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2423,	// (0x0005dc99) bg_passive_tab_pane_cp3_srt

0x30ad,	// (0x0005e923) heading_pane_t1_ParamLimits

0x30ad,	// (0x0005e923) heading_pane_t1

0x30c4,	// (0x0005e93a) heading_pane_t2_ParamLimits

0x30c4,	// (0x0005e93a) heading_pane_t2

0x0001,

0xf8ba,	// (0x0006b130) heading_pane_t_ParamLimits

0xf8ba,	// (0x0006b130) heading_pane_t

0x2bce,	// (0x0005e444) bg_popup_heading_pane_g1

0x2c7d,	// (0x0005e4f3) bg_popup_heading_pane_g2

0x2c87,	// (0x0005e4fd) bg_popup_heading_pane_g3

0x2c91,	// (0x0005e507) bg_popup_heading_pane_g4

0x2c9b,	// (0x0005e511) bg_popup_heading_pane_g5

0x2ca5,	// (0x0005e51b) bg_popup_heading_pane_g6

0x2cad,	// (0x0005e523) bg_popup_heading_pane_g7

0x2cb5,	// (0x0005e52b) bg_popup_heading_pane_g8

0x2cbf,	// (0x0005e535) bg_popup_heading_pane_g9

0x0008,

0xf876,	// (0x0006b0ec) bg_popup_heading_pane_g

0x2397,	// (0x0005dc0d) bg_popup_sub_pane_g1

0x23a7,	// (0x0005dc1d) bg_popup_sub_pane_g2

0x239f,	// (0x0005dc15) bg_popup_sub_pane_g3

0x23b7,	// (0x0005dc2d) bg_popup_sub_pane_g4

0x23af,	// (0x0005dc25) bg_popup_sub_pane_g5

0x23bf,	// (0x0005dc35) bg_popup_sub_pane_g6

0x23c7,	// (0x0005dc3d) bg_popup_sub_pane_g7

0x23d7,	// (0x0005dc4d) bg_popup_sub_pane_g8

0x23cf,	// (0x0005dc45) bg_popup_sub_pane_g9

0x0008,

0xf850,	// (0x0006b0c6) bg_popup_sub_pane_g

0x7fdc,	// (0x00063852) bg_popup_window_pane_cp5_ParamLimits

0x7fdc,	// (0x00063852) bg_popup_window_pane_cp5

0x7ff8,	// (0x0006386e) popup_note_window_g1_ParamLimits

0x7ff8,	// (0x0006386e) popup_note_window_g1

0x8004,	// (0x0006387a) popup_note_window_t1_ParamLimits

0x8004,	// (0x0006387a) popup_note_window_t1

0x801a,	// (0x00063890) popup_note_window_t2_ParamLimits

0x801a,	// (0x00063890) popup_note_window_t2

0x8030,	// (0x000638a6) popup_note_window_t3_ParamLimits

0x8030,	// (0x000638a6) popup_note_window_t3

0x8046,	// (0x000638bc) popup_note_window_t4_ParamLimits

0x8046,	// (0x000638bc) popup_note_window_t4

0x806e,	// (0x000638e4) popup_note_window_t5_ParamLimits

0x806e,	// (0x000638e4) popup_note_window_t5

0x0004,

0xf57f,	// (0x0006adf5) popup_note_window_t_ParamLimits

0xf57f,	// (0x0006adf5) popup_note_window_t

0x8092,	// (0x00063908) bg_popup_window_pane_cp6_ParamLimits

0x8092,	// (0x00063908) bg_popup_window_pane_cp6

0x2b4a,	// (0x0005e3c0) popup_note_image_window_g1_ParamLimits

0x2b4a,	// (0x0005e3c0) popup_note_image_window_g1

0xc2d5,	// (0x00067b4b) popup_note_image_window_g2_ParamLimits

0xc2d5,	// (0x00067b4b) popup_note_image_window_g2

0x0001,

0xf844,	// (0x0006b0ba) popup_note_image_window_g_ParamLimits

0xf844,	// (0x0006b0ba) popup_note_image_window_g

0x2b6f,	// (0x0005e3e5) popup_note_image_window_t1_ParamLimits

0x2b6f,	// (0x0005e3e5) popup_note_image_window_t1

0x2b88,	// (0x0005e3fe) popup_note_image_window_t2_ParamLimits

0x2b88,	// (0x0005e3fe) popup_note_image_window_t2

0x2ba1,	// (0x0005e417) popup_note_image_window_t3_ParamLimits

0x2ba1,	// (0x0005e417) popup_note_image_window_t3

0x0002,

0xf849,	// (0x0006b0bf) popup_note_image_window_t_ParamLimits

0xf849,	// (0x0006b0bf) popup_note_image_window_t

0x2a13,	// (0x0005e289) bg_popup_window_pane_cp7_ParamLimits

0x2a13,	// (0x0005e289) bg_popup_window_pane_cp7

0x2a43,	// (0x0005e2b9) popup_note_wait_window_g1_ParamLimits

0x2a43,	// (0x0005e2b9) popup_note_wait_window_g1

0x2a4f,	// (0x0005e2c5) popup_note_wait_window_g2_ParamLimits

0x2a4f,	// (0x0005e2c5) popup_note_wait_window_g2

0x0002,

0xf832,	// (0x0006b0a8) popup_note_wait_window_g_ParamLimits

0xf832,	// (0x0006b0a8) popup_note_wait_window_g

0x2a67,	// (0x0005e2dd) popup_note_wait_window_t1_ParamLimits

0x2a67,	// (0x0005e2dd) popup_note_wait_window_t1

0xc276,	// (0x00067aec) popup_note_wait_window_t2_ParamLimits

0xc276,	// (0x00067aec) popup_note_wait_window_t2

0xc293,	// (0x00067b09) popup_note_wait_window_t3_ParamLimits

0xc293,	// (0x00067b09) popup_note_wait_window_t3

0xc2a6,	// (0x00067b1c) popup_note_wait_window_t4_ParamLimits

0xc2a6,	// (0x00067b1c) popup_note_wait_window_t4

0x0004,

0xf839,	// (0x0006b0af) popup_note_wait_window_t_ParamLimits

0xf839,	// (0x0006b0af) popup_note_wait_window_t

0x2ae3,	// (0x0005e359) wait_bar_pane_ParamLimits

0x2ae3,	// (0x0005e359) wait_bar_pane

0x7e64,	// (0x000636da) wait_anim_pane

0x7e64,	// (0x000636da) wait_border_pane

0x7e5a,	// (0x000636d0) wait_anim_pane_g1

0x7e5a,	// (0x000636d0) wait_anim_pane_g2

0x0001,

0xf6f9,	// (0x0006af6f) wait_anim_pane_g

0x29bf,	// (0x0005e235) wait_border_pane_g1

0x29ca,	// (0x0005e240) wait_border_pane_g2

0x29d3,	// (0x0005e249) wait_border_pane_g3

0x0002,

0xf82b,	// (0x0006b0a1) wait_border_pane_g

0x282a,	// (0x0005e0a0) bg_popup_window_pane_cp16_ParamLimits

0x282a,	// (0x0005e0a0) bg_popup_window_pane_cp16

0xc226,	// (0x00067a9c) indicator_popup_pane_cp4_ParamLimits

0xc226,	// (0x00067a9c) indicator_popup_pane_cp4

0x293e,	// (0x0005e1b4) popup_query_data_window_t1_ParamLimits

0x293e,	// (0x0005e1b4) popup_query_data_window_t1

0x2950,	// (0x0005e1c6) popup_query_data_window_t2_ParamLimits

0x2950,	// (0x0005e1c6) popup_query_data_window_t2

0x2969,	// (0x0005e1df) popup_query_data_window_t3_ParamLimits

0x2969,	// (0x0005e1df) popup_query_data_window_t3

0x0002,

0xf824,	// (0x0006b09a) popup_query_data_window_t_ParamLimits

0xf824,	// (0x0006b09a) popup_query_data_window_t

0xc23a,	// (0x00067ab0) query_popup_data_pane_ParamLimits

0xc23a,	// (0x00067ab0) query_popup_data_pane

0xc24e,	// (0x00067ac4) query_popup_data_pane_cp1_ParamLimits

0xc24e,	// (0x00067ac4) query_popup_data_pane_cp1

0x282a,	// (0x0005e0a0) bg_popup_window_pane_cp10_ParamLimits

0x282a,	// (0x0005e0a0) bg_popup_window_pane_cp10

0xc1a1,	// (0x00067a17) indicator_popup_pane_ParamLimits

0xc1a1,	// (0x00067a17) indicator_popup_pane

0xc1c3,	// (0x00067a39) popup_query_code_window_t1_ParamLimits

0xc1c3,	// (0x00067a39) popup_query_code_window_t1

0xc1dd,	// (0x00067a53) popup_query_code_window_t2_ParamLimits

0xc1dd,	// (0x00067a53) popup_query_code_window_t2

0x28e1,	// (0x0005e157) popup_query_code_window_t3_ParamLimits

0x28e1,	// (0x0005e157) popup_query_code_window_t3

0x0002,

0xf81d,	// (0x0006b093) popup_query_code_window_t_ParamLimits

0xf81d,	// (0x0006b093) popup_query_code_window_t

0x2910,	// (0x0005e186) query_popup_pane_ParamLimits

0x2910,	// (0x0005e186) query_popup_pane

0x8092,	// (0x00063908) bg_popup_window_pane_cp15_ParamLimits

0x8092,	// (0x00063908) bg_popup_window_pane_cp15

0x95d2,	// (0x00064e48) indicator_popup_pane_cp1_ParamLimits

0x95d2,	// (0x00064e48) indicator_popup_pane_cp1

0x95e5,	// (0x00064e5b) indicator_popup_pane_cp2_ParamLimits

0x95e5,	// (0x00064e5b) indicator_popup_pane_cp2

0x95f8,	// (0x00064e6e) popup_query_data_code_window_g1_ParamLimits

0x95f8,	// (0x00064e6e) popup_query_data_code_window_g1

0x80b0,	// (0x00063926) popup_query_data_code_window_t1_ParamLimits

0x80b0,	// (0x00063926) popup_query_data_code_window_t1

0x80c2,	// (0x00063938) popup_query_data_code_window_t2_ParamLimits

0x80c2,	// (0x00063938) popup_query_data_code_window_t2

0x960b,	// (0x00064e81) popup_query_data_code_window_t3_ParamLimits

0x960b,	// (0x00064e81) popup_query_data_code_window_t3

0x9621,	// (0x00064e97) popup_query_data_code_window_t4_ParamLimits

0x9621,	// (0x00064e97) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0006ae00) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0006ae00) popup_query_data_code_window_t

0x079e,	// (0x0005c014) list_single_midp_graphic_pane_g3

0x9639,	// (0x00064eaf) query_popup_data_pane_cp2_ParamLimits

0x964c,	// (0x00064ec2) query_popup_pane_cp2_ParamLimits

0x964c,	// (0x00064ec2) query_popup_pane_cp2

0x7e64,	// (0x000636da) bg_popup_window_pane_cp11

0x2816,	// (0x0005e08c) heading_pane_cp5

0x811e,	// (0x00063994) listscroll_popup_info_pane

0x7e64,	// (0x000636da) input_focus_pane_cp3

0x80d4,	// (0x0006394a) query_popup_pane_t1

0x80e2,	// (0x00063958) list_popup_info_pane_ParamLimits

0x80e2,	// (0x00063958) list_popup_info_pane

0x80f1,	// (0x00063967) listscroll_popup_info_pane_g1

0x80f9,	// (0x0006396f) scroll_pane_cp7

0x965f,	// (0x00064ed5) popup_info_list_pane_t1_ParamLimits

0x965f,	// (0x00064ed5) popup_info_list_pane_t1

0x9679,	// (0x00064eef) popup_info_list_pane_t2_ParamLimits

0x9679,	// (0x00064eef) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0006ae09) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0006ae09) popup_info_list_pane_t

0x7e64,	// (0x000636da) bg_popup_window_pane_cp12

0xc972,	// (0x000681e8) find_popup_pane

0x7eb2,	// (0x00063728) bg_popup_window_pane_cp3

0x8103,	// (0x00063979) heading_pane_cp3

0x810f,	// (0x00063985) listscroll_popup_graphic_pane

0x7e64,	// (0x000636da) bg_popup_window_pane_cp4

0x96e3,	// (0x00064f59) heading_pane_cp4

0x811e,	// (0x00063994) listscroll_popup_colour_pane

0x96eb,	// (0x00064f61) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x96eb,	// (0x00064f61) cell_large_graphic_colour_none_popup_pane

0x96ff,	// (0x00064f75) grid_large_graphic_colour_popup_pane_ParamLimits

0x96ff,	// (0x00064f75) grid_large_graphic_colour_popup_pane

0x9723,	// (0x00064f99) listscroll_popup_colour_pane_g1_ParamLimits

0x9723,	// (0x00064f99) listscroll_popup_colour_pane_g1

0x973a,	// (0x00064fb0) listscroll_popup_colour_pane_g2_ParamLimits

0x973a,	// (0x00064fb0) listscroll_popup_colour_pane_g2

0x9751,	// (0x00064fc7) listscroll_popup_colour_pane_g3_ParamLimits

0x9751,	// (0x00064fc7) listscroll_popup_colour_pane_g3

0x9761,	// (0x00064fd7) listscroll_popup_colour_pane_g4_ParamLimits

0x9761,	// (0x00064fd7) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0006ae0e) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0006ae0e) listscroll_popup_colour_pane_g

0x8126,	// (0x0006399c) scroll_pane_cp6_ParamLimits

0x8126,	// (0x0006399c) scroll_pane_cp6

0x9771,	// (0x00064fe7) cell_large_graphic_colour_popup_pane_ParamLimits

0x9771,	// (0x00064fe7) cell_large_graphic_colour_popup_pane

0x9790,	// (0x00065006) cell_large_graphic_colour_none_popup_pane_t1

0x7e64,	// (0x000636da) grid_highlight_pane_cp5

0x8138,	// (0x000639ae) cell_large_graphic_colour_popup_pane_g1

0x8140,	// (0x000639b6) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0006ae17) cell_large_graphic_colour_popup_pane_g

0x8148,	// (0x000639be) cell_large_graphic_colour_popup_pane_g2_copy1

0x8151,	// (0x000639c7) grid_highlight_pane_cp4

0x8159,	// (0x000639cf) bg_popup_window_pane_cp8_ParamLimits

0x8159,	// (0x000639cf) bg_popup_window_pane_cp8

0x979f,	// (0x00065015) popup_snote_single_text_window_g1_ParamLimits

0x979f,	// (0x00065015) popup_snote_single_text_window_g1

0x97b1,	// (0x00065027) popup_snote_single_text_window_t1_ParamLimits

0x97b1,	// (0x00065027) popup_snote_single_text_window_t1

0x97c4,	// (0x0006503a) popup_snote_single_text_window_t2_ParamLimits

0x97c4,	// (0x0006503a) popup_snote_single_text_window_t2

0x97d7,	// (0x0006504d) popup_snote_single_text_window_t3_ParamLimits

0x97d7,	// (0x0006504d) popup_snote_single_text_window_t3

0x9810,	// (0x00065086) popup_snote_single_text_window_t4_ParamLimits

0x9810,	// (0x00065086) popup_snote_single_text_window_t4

0x9844,	// (0x000650ba) popup_snote_single_text_window_t5_ParamLimits

0x9844,	// (0x000650ba) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0006ae1c) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0006ae1c) popup_snote_single_text_window_t

0x8174,	// (0x000639ea) bg_popup_window_pane_cp9_ParamLimits

0x8174,	// (0x000639ea) bg_popup_window_pane_cp9

0x979f,	// (0x00065015) popup_snote_single_graphic_window_g1_ParamLimits

0x979f,	// (0x00065015) popup_snote_single_graphic_window_g1

0x8182,	// (0x000639f8) popup_snote_single_graphic_window_g2_ParamLimits

0x8182,	// (0x000639f8) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0006ae27) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0006ae27) popup_snote_single_graphic_window_g

0x818e,	// (0x00063a04) popup_snote_single_graphic_window_t1_ParamLimits

0x818e,	// (0x00063a04) popup_snote_single_graphic_window_t1

0x81a1,	// (0x00063a17) popup_snote_single_graphic_window_t2_ParamLimits

0x81a1,	// (0x00063a17) popup_snote_single_graphic_window_t2

0x97d7,	// (0x0006504d) popup_snote_single_graphic_window_t3_ParamLimits

0x97d7,	// (0x0006504d) popup_snote_single_graphic_window_t3

0x9810,	// (0x00065086) popup_snote_single_graphic_window_t4_ParamLimits

0x9810,	// (0x00065086) popup_snote_single_graphic_window_t4

0x9873,	// (0x000650e9) popup_snote_single_graphic_window_t5_ParamLimits

0x9873,	// (0x000650e9) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0006ae2c) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0006ae2c) popup_snote_single_graphic_window_t

0x3b12,	// (0x0005f388) grid_graphic_popup_pane_ParamLimits

0x3b12,	// (0x0005f388) grid_graphic_popup_pane

0x3b3c,	// (0x0005f3b2) listscroll_popup_graphic_pane_g1_ParamLimits

0x3b3c,	// (0x0005f3b2) listscroll_popup_graphic_pane_g1

0xc910,	// (0x00068186) listscroll_popup_graphic_pane_g2_ParamLimits

0xc910,	// (0x00068186) listscroll_popup_graphic_pane_g2

0x0001,

0xf99a,	// (0x0006b210) listscroll_popup_graphic_pane_g_ParamLimits

0xf99a,	// (0x0006b210) listscroll_popup_graphic_pane_g

0x3b64,	// (0x0005f3da) scroll_pane_cp5

0xc8b5,	// (0x0006812b) cell_graphic_popup_pane_ParamLimits

0xc8b5,	// (0x0006812b) cell_graphic_popup_pane

0x3a92,	// (0x0005f308) cell_graphic_popup_pane_g1

0x3a9a,	// (0x0005f310) cell_graphic_popup_pane_g2

0x8148,	// (0x000639be) cell_graphic_popup_pane_g3

0x0002,

0xf993,	// (0x0006b209) cell_graphic_popup_pane_g

0x3aa3,	// (0x0005f319) cell_graphic_popup_pane_t2

0x8151,	// (0x000639c7) grid_highlight_pane_cp3

0x81c6,	// (0x00063a3c) list_gen_pane_ParamLimits

0x81c6,	// (0x00063a3c) list_gen_pane

0x81ee,	// (0x00063a64) scroll_pane

0xc81f,	// (0x00068095) bg_list_pane_g1_ParamLimits

0xc81f,	// (0x00068095) bg_list_pane_g1

0xc83a,	// (0x000680b0) bg_list_pane_g2_ParamLimits

0xc83a,	// (0x000680b0) bg_list_pane_g2

0xc84d,	// (0x000680c3) bg_list_pane_g3_ParamLimits

0xc84d,	// (0x000680c3) bg_list_pane_g3

0xc85f,	// (0x000680d5) bg_list_pane_g4_ParamLimits

0xc85f,	// (0x000680d5) bg_list_pane_g4

0xc871,	// (0x000680e7) bg_list_pane_g5_ParamLimits

0xc871,	// (0x000680e7) bg_list_pane_g5

0x0004,

0xf988,	// (0x0006b1fe) bg_list_pane_g_ParamLimits

0xf988,	// (0x0006b1fe) bg_list_pane_g

0xc7c3,	// (0x00068039) list_double2_graphic_large_graphic_pane_ParamLimits

0xc7c3,	// (0x00068039) list_double2_graphic_large_graphic_pane

0xc7c3,	// (0x00068039) list_double2_graphic_pane_ParamLimits

0xc7c3,	// (0x00068039) list_double2_graphic_pane

0xc7c3,	// (0x00068039) list_double2_large_graphic_pane_ParamLimits

0xc7c3,	// (0x00068039) list_double2_large_graphic_pane

0xc7c3,	// (0x00068039) list_double2_pane_ParamLimits

0xc7c3,	// (0x00068039) list_double2_pane

0xc7c3,	// (0x00068039) list_double_graphic_heading_pane_ParamLimits

0xc7c3,	// (0x00068039) list_double_graphic_heading_pane

0xc7c3,	// (0x00068039) list_double_graphic_pane_ParamLimits

0xc7c3,	// (0x00068039) list_double_graphic_pane

0xc7c3,	// (0x00068039) list_double_heading_pane_ParamLimits

0xc7c3,	// (0x00068039) list_double_heading_pane

0xc7c3,	// (0x00068039) list_double_large_graphic_pane_ParamLimits

0xc7c3,	// (0x00068039) list_double_large_graphic_pane

0xc7c3,	// (0x00068039) list_double_number_pane_ParamLimits

0xc7c3,	// (0x00068039) list_double_number_pane

0xc7c3,	// (0x00068039) list_double_pane_ParamLimits

0xc7c3,	// (0x00068039) list_double_pane

0xc7c3,	// (0x00068039) list_double_time_pane_ParamLimits

0xc7c3,	// (0x00068039) list_double_time_pane

0xc7c3,	// (0x00068039) list_setting_number_pane_ParamLimits

0xc7c3,	// (0x00068039) list_setting_number_pane

0xc7c3,	// (0x00068039) list_setting_pane_ParamLimits

0xc7c3,	// (0x00068039) list_setting_pane

0xc7d5,	// (0x0006804b) list_single_2graphic_pane_ParamLimits

0xc7d5,	// (0x0006804b) list_single_2graphic_pane

0xc7d5,	// (0x0006804b) list_single_graphic_heading_pane_ParamLimits

0xc7d5,	// (0x0006804b) list_single_graphic_heading_pane

0xc7d5,	// (0x0006804b) list_single_graphic_pane_ParamLimits

0xc7d5,	// (0x0006804b) list_single_graphic_pane

0xc7d5,	// (0x0006804b) list_single_heading_pane_ParamLimits

0xc7d5,	// (0x0006804b) list_single_heading_pane

0xc7d5,	// (0x0006804b) list_single_large_graphic_pane_ParamLimits

0xc7d5,	// (0x0006804b) list_single_large_graphic_pane

0xc7d5,	// (0x0006804b) list_single_number_heading_pane_ParamLimits

0xc7d5,	// (0x0006804b) list_single_number_heading_pane

0xc7d5,	// (0x0006804b) list_single_number_pane_ParamLimits

0xc7d5,	// (0x0006804b) list_single_number_pane

0xc7d5,	// (0x0006804b) list_single_pane_ParamLimits

0xc7d5,	// (0x0006804b) list_single_pane

0x7e64,	// (0x000636da) list_highlight_pane_cp1

0xdedf,	// (0x00069755) list_single_pane_g1_ParamLimits

0xdedf,	// (0x00069755) list_single_pane_g1

0xdeeb,	// (0x00069761) list_single_pane_g2_ParamLimits

0xdeeb,	// (0x00069761) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0006ae48) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0006ae48) list_single_pane_g

0xb180,	// (0x000669f6) list_single_pane_t1_ParamLimits

0xb180,	// (0x000669f6) list_single_pane_t1

0xdedf,	// (0x00069755) list_single_number_pane_g1_ParamLimits

0xdedf,	// (0x00069755) list_single_number_pane_g1

0xdeeb,	// (0x00069761) list_single_number_pane_g2_ParamLimits

0xdeeb,	// (0x00069761) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0006ae48) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0006ae48) list_single_number_pane_g

0xdef7,	// (0x0006976d) list_single_number_pane_t1_ParamLimits

0xdef7,	// (0x0006976d) list_single_number_pane_t1

0xb0d4,	// (0x0006694a) list_single_number_pane_t2_ParamLimits

0xb0d4,	// (0x0006694a) list_single_number_pane_t2

0x0001,

0xf949,	// (0x0006b1bf) list_single_number_pane_t_ParamLimits

0xf949,	// (0x0006b1bf) list_single_number_pane_t

0xded3,	// (0x00069749) list_single_graphic_pane_g1_ParamLimits

0xded3,	// (0x00069749) list_single_graphic_pane_g1

0xdedf,	// (0x00069755) list_single_graphic_pane_g2_ParamLimits

0xdedf,	// (0x00069755) list_single_graphic_pane_g2

0xdeeb,	// (0x00069761) list_single_graphic_pane_g3_ParamLimits

0xdeeb,	// (0x00069761) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0006ae37) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0006ae37) list_single_graphic_pane_g

0xdef7,	// (0x0006976d) list_single_graphic_pane_t1_ParamLimits

0xdef7,	// (0x0006976d) list_single_graphic_pane_t1

0x98ac,	// (0x00065122) list_single_heading_pane_g1_ParamLimits

0x98ac,	// (0x00065122) list_single_heading_pane_g1

0xdeeb,	// (0x00069761) list_single_heading_pane_g2_ParamLimits

0xdeeb,	// (0x00069761) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0006ae3e) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0006ae3e) list_single_heading_pane_g

0x98bf,	// (0x00065135) list_single_heading_pane_t1_ParamLimits

0x98bf,	// (0x00065135) list_single_heading_pane_t1

0x98d5,	// (0x0006514b) list_single_heading_pane_t2_ParamLimits

0x98d5,	// (0x0006514b) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0006ae43) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0006ae43) list_single_heading_pane_t

0xdedf,	// (0x00069755) list_single_number_heading_pane_g1_ParamLimits

0xdedf,	// (0x00069755) list_single_number_heading_pane_g1

0xdeeb,	// (0x00069761) list_single_number_heading_pane_g2_ParamLimits

0xdeeb,	// (0x00069761) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0006ae48) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0006ae48) list_single_number_heading_pane_g

0x98e7,	// (0x0006515d) list_single_number_heading_pane_t1_ParamLimits

0x98e7,	// (0x0006515d) list_single_number_heading_pane_t1

0x98fd,	// (0x00065173) list_single_number_heading_pane_t2_ParamLimits

0x98fd,	// (0x00065173) list_single_number_heading_pane_t2

0x990f,	// (0x00065185) list_single_number_heading_pane_t3_ParamLimits

0x990f,	// (0x00065185) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0006ae4d) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0006ae4d) list_single_number_heading_pane_t

0x9921,	// (0x00065197) list_single_graphic_heading_pane_g1_ParamLimits

0x9921,	// (0x00065197) list_single_graphic_heading_pane_g1

0x9937,	// (0x000651ad) list_single_graphic_heading_pane_g4_ParamLimits

0x9937,	// (0x000651ad) list_single_graphic_heading_pane_g4

0xdeeb,	// (0x00069761) list_single_graphic_heading_pane_g5_ParamLimits

0xdeeb,	// (0x00069761) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0006ae54) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0006ae54) list_single_graphic_heading_pane_g

0x98e7,	// (0x0006515d) list_single_graphic_heading_pane_t1_ParamLimits

0x98e7,	// (0x0006515d) list_single_graphic_heading_pane_t1

0x9948,	// (0x000651be) list_single_graphic_heading_pane_t2_ParamLimits

0x9948,	// (0x000651be) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0006ae5b) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0006ae5b) list_single_graphic_heading_pane_t

0x3f37,	// (0x0005f7ad) list_single_large_graphic_pane_g1_ParamLimits

0x3f37,	// (0x0005f7ad) list_single_large_graphic_pane_g1

0xdedf,	// (0x00069755) list_single_large_graphic_pane_g2_ParamLimits

0xdedf,	// (0x00069755) list_single_large_graphic_pane_g2

0xdeeb,	// (0x00069761) list_single_large_graphic_pane_g3_ParamLimits

0xdeeb,	// (0x00069761) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0006ae60) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0006ae60) list_single_large_graphic_pane_g

0x29ca,	// (0x0005e240) wait_border_pane_g2_copy1

0x9960,	// (0x000651d6) list_single_large_graphic_pane_g4_cp2

0xdef7,	// (0x0006976d) list_single_large_graphic_pane_t1_ParamLimits

0xdef7,	// (0x0006976d) list_single_large_graphic_pane_t1

0x4092,	// (0x0005f908) list_double_pane_g1_ParamLimits

0x4092,	// (0x0005f908) list_double_pane_g1

0xdf0d,	// (0x00069783) list_double_pane_g2_ParamLimits

0xdf0d,	// (0x00069783) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0006ae67) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0006ae67) list_double_pane_g

0x9968,	// (0x000651de) list_double_pane_t1_ParamLimits

0x9968,	// (0x000651de) list_double_pane_t1

0x997e,	// (0x000651f4) list_double_pane_t2_ParamLimits

0x997e,	// (0x000651f4) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0006ae6c) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0006ae6c) list_double_pane_t

0x9990,	// (0x00065206) list_double2_pane_g1_ParamLimits

0x9990,	// (0x00065206) list_double2_pane_g1

0x99a1,	// (0x00065217) list_double2_pane_g2_ParamLimits

0x99a1,	// (0x00065217) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0006ae71) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0006ae71) list_double2_pane_g

0x99ad,	// (0x00065223) list_double2_pane_t1_ParamLimits

0x99ad,	// (0x00065223) list_double2_pane_t1

0x99c3,	// (0x00065239) list_double2_pane_t2_ParamLimits

0x99c3,	// (0x00065239) list_double2_pane_t2

0x0001,

0xf600,	// (0x0006ae76) list_double2_pane_t_ParamLimits

0xf600,	// (0x0006ae76) list_double2_pane_t

0x4092,	// (0x0005f908) list_double_number_pane_g1_ParamLimits

0x4092,	// (0x0005f908) list_double_number_pane_g1

0xdf0d,	// (0x00069783) list_double_number_pane_g2_ParamLimits

0xdf0d,	// (0x00069783) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0006ae67) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0006ae67) list_double_number_pane_g

0x99d5,	// (0x0006524b) list_double_number_pane_t1_ParamLimits

0x99d5,	// (0x0006524b) list_double_number_pane_t1

0x99e7,	// (0x0006525d) list_double_number_pane_t2_ParamLimits

0x99e7,	// (0x0006525d) list_double_number_pane_t2

0x99fd,	// (0x00065273) list_double_number_pane_t3_ParamLimits

0x99fd,	// (0x00065273) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0006ae7b) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0006ae7b) list_double_number_pane_t

0x9a0f,	// (0x00065285) list_double_graphic_pane_g1_ParamLimits

0x9a0f,	// (0x00065285) list_double_graphic_pane_g1

0x9a1b,	// (0x00065291) list_double_graphic_pane_g2_ParamLimits

0x9a1b,	// (0x00065291) list_double_graphic_pane_g2

0x9a2a,	// (0x000652a0) list_double_graphic_pane_g3_ParamLimits

0x9a2a,	// (0x000652a0) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0006ae82) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0006ae82) list_double_graphic_pane_g

0x9968,	// (0x000651de) list_double_graphic_pane_t1_ParamLimits

0x9968,	// (0x000651de) list_double_graphic_pane_t1

0x997e,	// (0x000651f4) list_double_graphic_pane_t2_ParamLimits

0x997e,	// (0x000651f4) list_double_graphic_pane_t2

0x0001,

0xf5f6,	// (0x0006ae6c) list_double_graphic_pane_t_ParamLimits

0xf5f6,	// (0x0006ae6c) list_double_graphic_pane_t

0x9a42,	// (0x000652b8) list_double2_graphic_pane_g1_ParamLimits

0x9a42,	// (0x000652b8) list_double2_graphic_pane_g1

0x8280,	// (0x00063af6) list_double2_graphic_pane_g2_ParamLimits

0x8280,	// (0x00063af6) list_double2_graphic_pane_g2

0x9a4e,	// (0x000652c4) list_double2_graphic_pane_g3_ParamLimits

0x9a4e,	// (0x000652c4) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0006ae8b) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0006ae8b) list_double2_graphic_pane_g

0x9a5a,	// (0x000652d0) list_double2_graphic_pane_t1_ParamLimits

0x9a5a,	// (0x000652d0) list_double2_graphic_pane_t1

0x9a70,	// (0x000652e6) list_double2_graphic_pane_t2_ParamLimits

0x9a70,	// (0x000652e6) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0006ae92) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0006ae92) list_double2_graphic_pane_t

0x9a82,	// (0x000652f8) list_double_large_graphic_pane_g1_ParamLimits

0x9a82,	// (0x000652f8) list_double_large_graphic_pane_g1

0x9aa1,	// (0x00065317) list_double_large_graphic_pane_g2_ParamLimits

0x9aa1,	// (0x00065317) list_double_large_graphic_pane_g2

0xdf0d,	// (0x00069783) list_double_large_graphic_pane_g3_ParamLimits

0xdf0d,	// (0x00069783) list_double_large_graphic_pane_g3

0x9ab7,	// (0x0006532d) list_double_large_graphic_pane_g4_ParamLimits

0x9ab7,	// (0x0006532d) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0006ae97) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0006ae97) list_double_large_graphic_pane_g

0x9aca,	// (0x00065340) list_double_large_graphic_pane_t1_ParamLimits

0x9aca,	// (0x00065340) list_double_large_graphic_pane_t1

0x9ae3,	// (0x00065359) list_double_large_graphic_pane_t2_ParamLimits

0x9ae3,	// (0x00065359) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0006aea2) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0006aea2) list_double_large_graphic_pane_t

0x9af5,	// (0x0006536b) list_double2_large_graphic_pane_g1_ParamLimits

0x9af5,	// (0x0006536b) list_double2_large_graphic_pane_g1

0x9b01,	// (0x00065377) list_double2_large_graphic_pane_g2_ParamLimits

0x9b01,	// (0x00065377) list_double2_large_graphic_pane_g2

0x9a4e,	// (0x000652c4) list_double2_large_graphic_pane_g3_ParamLimits

0x9a4e,	// (0x000652c4) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0006aea7) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0006aea7) list_double2_large_graphic_pane_g

0x9a5a,	// (0x000652d0) list_double2_large_graphic_pane_t1_ParamLimits

0x9a5a,	// (0x000652d0) list_double2_large_graphic_pane_t1

0x9a70,	// (0x000652e6) list_double2_large_graphic_pane_t2_ParamLimits

0x9a70,	// (0x000652e6) list_double2_large_graphic_pane_t2

0x0001,

0xf61c,	// (0x0006ae92) list_double2_large_graphic_pane_t_ParamLimits

0xf61c,	// (0x0006ae92) list_double2_large_graphic_pane_t

0x9b12,	// (0x00065388) list_double_heading_pane_g1_ParamLimits

0x9b12,	// (0x00065388) list_double_heading_pane_g1

0x9b23,	// (0x00065399) list_double_heading_pane_g2_ParamLimits

0x9b23,	// (0x00065399) list_double_heading_pane_g2

0x0001,

0xf638,	// (0x0006aeae) list_double_heading_pane_g_ParamLimits

0xf638,	// (0x0006aeae) list_double_heading_pane_g

0x9b2f,	// (0x000653a5) list_double_heading_pane_t1_ParamLimits

0x9b2f,	// (0x000653a5) list_double_heading_pane_t1

0x9a70,	// (0x000652e6) list_double_heading_pane_t2_ParamLimits

0x9a70,	// (0x000652e6) list_double_heading_pane_t2

0x0001,

0xf63d,	// (0x0006aeb3) list_double_heading_pane_t_ParamLimits

0xf63d,	// (0x0006aeb3) list_double_heading_pane_t

0x9b45,	// (0x000653bb) list_double_graphic_heading_pane_g1_ParamLimits

0x9b45,	// (0x000653bb) list_double_graphic_heading_pane_g1

0x9b12,	// (0x00065388) list_double_graphic_heading_pane_g2_ParamLimits

0x9b12,	// (0x00065388) list_double_graphic_heading_pane_g2

0x9b23,	// (0x00065399) list_double_graphic_heading_pane_g3_ParamLimits

0x9b23,	// (0x00065399) list_double_graphic_heading_pane_g3

0x0002,

0xf642,	// (0x0006aeb8) list_double_graphic_heading_pane_g_ParamLimits

0xf642,	// (0x0006aeb8) list_double_graphic_heading_pane_g

0x9b2f,	// (0x000653a5) list_double_graphic_heading_pane_t1_ParamLimits

0x9b2f,	// (0x000653a5) list_double_graphic_heading_pane_t1

0x9a70,	// (0x000652e6) list_double_graphic_heading_pane_t2_ParamLimits

0x9a70,	// (0x000652e6) list_double_graphic_heading_pane_t2

0x0001,

0xf63d,	// (0x0006aeb3) list_double_graphic_heading_pane_t_ParamLimits

0xf63d,	// (0x0006aeb3) list_double_graphic_heading_pane_t

0x9b51,	// (0x000653c7) list_double_time_pane_g1_ParamLimits

0x9b51,	// (0x000653c7) list_double_time_pane_g1

0xdf2e,	// (0x000697a4) list_double_time_pane_g2_ParamLimits

0xdf2e,	// (0x000697a4) list_double_time_pane_g2

0x0001,

0xf649,	// (0x0006aebf) list_double_time_pane_g_ParamLimits

0xf649,	// (0x0006aebf) list_double_time_pane_g

0x9b62,	// (0x000653d8) list_double_time_pane_t1_ParamLimits

0x9b62,	// (0x000653d8) list_double_time_pane_t1

0x9b78,	// (0x000653ee) list_double_time_pane_t2_ParamLimits

0x9b78,	// (0x000653ee) list_double_time_pane_t2

0x9b8a,	// (0x00065400) list_double_time_pane_t3_ParamLimits

0x9b8a,	// (0x00065400) list_double_time_pane_t3

0x9b9c,	// (0x00065412) list_double_time_pane_t4_ParamLimits

0x9b9c,	// (0x00065412) list_double_time_pane_t4

0x0003,

0xf64e,	// (0x0006aec4) list_double_time_pane_t_ParamLimits

0xf64e,	// (0x0006aec4) list_double_time_pane_t

0x9bae,	// (0x00065424) list_setting_pane_g1_ParamLimits

0x9bae,	// (0x00065424) list_setting_pane_g1

0x9bba,	// (0x00065430) list_setting_pane_g2_ParamLimits

0x9bba,	// (0x00065430) list_setting_pane_g2

0x0001,

0xf657,	// (0x0006aecd) list_setting_pane_g_ParamLimits

0xf657,	// (0x0006aecd) list_setting_pane_g

0x9bc6,	// (0x0006543c) list_setting_pane_t1_ParamLimits

0x9bc6,	// (0x0006543c) list_setting_pane_t1

0x9be0,	// (0x00065456) list_setting_pane_t2_ParamLimits

0x9be0,	// (0x00065456) list_setting_pane_t2

0x0002,

0xf65c,	// (0x0006aed2) list_setting_pane_t_ParamLimits

0xf65c,	// (0x0006aed2) list_setting_pane_t

0x9c1f,	// (0x00065495) set_value_pane_cp_ParamLimits

0x9c1f,	// (0x00065495) set_value_pane_cp

0x9c2b,	// (0x000654a1) list_setting_number_pane_g1_ParamLimits

0x9c2b,	// (0x000654a1) list_setting_number_pane_g1

0x9c37,	// (0x000654ad) list_setting_number_pane_g2_ParamLimits

0x9c37,	// (0x000654ad) list_setting_number_pane_g2

0x0001,

0xf663,	// (0x0006aed9) list_setting_number_pane_g_ParamLimits

0xf663,	// (0x0006aed9) list_setting_number_pane_g

0x9c43,	// (0x000654b9) list_setting_number_pane_t1_ParamLimits

0x9c43,	// (0x000654b9) list_setting_number_pane_t1

0x9c5c,	// (0x000654d2) list_setting_number_pane_t2_ParamLimits

0x9c5c,	// (0x000654d2) list_setting_number_pane_t2

0x9c76,	// (0x000654ec) list_setting_number_pane_t3_ParamLimits

0x9c76,	// (0x000654ec) list_setting_number_pane_t3

0x0003,

0xf668,	// (0x0006aede) list_setting_number_pane_t_ParamLimits

0xf668,	// (0x0006aede) list_setting_number_pane_t

0x9c1f,	// (0x00065495) set_value_pane_ParamLimits

0x9c1f,	// (0x00065495) set_value_pane

0x8222,	// (0x00063a98) bg_set_opt_pane_ParamLimits

0x8222,	// (0x00063a98) bg_set_opt_pane

0xdf3a,	// (0x000697b0) set_value_pane_t1

0x8243,	// (0x00063ab9) slider_set_pane_cp3

0x9cb9,	// (0x0006552f) volume_small_pane_cp

0x824c,	// (0x00063ac2) list_form_gen_pane

0x8255,	// (0x00063acb) scroll_pane_cp8

0x9cc2,	// (0x00065538) form_field_data_pane_ParamLimits

0x9cc2,	// (0x00065538) form_field_data_pane

0x9cd9,	// (0x0006554f) form_field_data_wide_pane_ParamLimits

0x9cd9,	// (0x0006554f) form_field_data_wide_pane

0x9cf9,	// (0x0006556f) form_field_popup_pane_ParamLimits

0x9cf9,	// (0x0006556f) form_field_popup_pane

0x9d11,	// (0x00065587) form_field_popup_wide_pane_ParamLimits

0x9d11,	// (0x00065587) form_field_popup_wide_pane

0xdf58,	// (0x000697ce) form_field_slider_pane_ParamLimits

0xdf58,	// (0x000697ce) form_field_slider_pane

0x9d28,	// (0x0006559e) form_field_slider_wide_pane_ParamLimits

0x9d28,	// (0x0006559e) form_field_slider_wide_pane

0x8266,	// (0x00063adc) data_form_pane

0x9d45,	// (0x000655bb) form_field_data_pane_t1

0x8272,	// (0x00063ae8) input_focus_pane

0xdf6b,	// (0x000697e1) data_form_wide_pane

0xdf88,	// (0x000697fe) form_field_data_wide_pane_t1

0x8166,	// (0x000639dc) input_focus_pane_cp6

0x9d5f,	// (0x000655d5) form_field_popup_pane_t1

0x8272,	// (0x00063ae8) input_focus_pane_cp7

0x82a0,	// (0x00063b16) list_form_pane

0xdfb2,	// (0x00069828) form_field_popup_wide_pane_t1

0x8272,	// (0x00063ae8) input_focus_pane_cp8

0x82ac,	// (0x00063b22) list_form_wide_pane

0x9d81,	// (0x000655f7) form_field_slider_pane_t1_ParamLimits

0x9d81,	// (0x000655f7) form_field_slider_pane_t1

0x9d99,	// (0x0006560f) form_field_slider_pane_t2_ParamLimits

0x9d99,	// (0x0006560f) form_field_slider_pane_t2

0x0001,

0xf678,	// (0x0006aeee) form_field_slider_pane_t_ParamLimits

0xf678,	// (0x0006aeee) form_field_slider_pane_t

0x7fdc,	// (0x00063852) input_focus_pane_cp9_ParamLimits

0x7fdc,	// (0x00063852) input_focus_pane_cp9

0x9dae,	// (0x00065624) slider_cont_pane_ParamLimits

0x9dae,	// (0x00065624) slider_cont_pane

0x82b8,	// (0x00063b2e) form_field_slider_wide_pane_t1_ParamLimits

0x82b8,	// (0x00063b2e) form_field_slider_wide_pane_t1

0xdfc7,	// (0x0006983d) form_field_slider_wide_pane_t2_ParamLimits

0xdfc7,	// (0x0006983d) form_field_slider_wide_pane_t2

0x0001,

0xf67d,	// (0x0006aef3) form_field_slider_wide_pane_t_ParamLimits

0xf67d,	// (0x0006aef3) form_field_slider_wide_pane_t

0x7fdc,	// (0x00063852) input_focus_pane_cp10_ParamLimits

0x7fdc,	// (0x00063852) input_focus_pane_cp10

0x9dc2,	// (0x00065638) slider_cont_pane_cp1_ParamLimits

0x9dc2,	// (0x00065638) slider_cont_pane_cp1

0x9dd6,	// (0x0006564c) slider_form_pane_cp

0x82ca,	// (0x00063b40) input_focus_pane_g1

0x82d2,	// (0x00063b48) input_focus_pane_g2

0x82da,	// (0x00063b50) input_focus_pane_g3

0x82e2,	// (0x00063b58) input_focus_pane_g4

0x82ea,	// (0x00063b60) input_focus_pane_g5

0x82f2,	// (0x00063b68) input_focus_pane_g6

0x82fa,	// (0x00063b70) input_focus_pane_g7

0x8302,	// (0x00063b78) input_focus_pane_g8

0x830a,	// (0x00063b80) input_focus_pane_g9

0x7e5a,	// (0x000636d0) input_focus_pane_g10

0x0009,

0xf682,	// (0x0006aef8) input_focus_pane_g

0x29d3,	// (0x0005e249) wait_border_pane_g3_copy1

0x9dde,	// (0x00065654) data_form_pane_t1

0x7e5a,	// (0x000636d0) wait_anim_pane_g1_copy1

0xb152,	// (0x000669c8) data_form_wide_pane_t1

0x9df8,	// (0x0006566e) list_form_graphic_pane_cp_ParamLimits

0x9df8,	// (0x0006566e) list_form_graphic_pane_cp

0x38c2,	// (0x0005f138) slider_form_pane_g1

0x38cb,	// (0x0005f141) slider_form_pane_g2

0x0006,

0xf979,	// (0x0006b1ef) slider_form_pane_g

0x9df8,	// (0x0006566e) list_form_graphic_pane_ParamLimits

0x9df8,	// (0x0006566e) list_form_graphic_pane

0x9e0a,	// (0x00065680) list_form_graphic_pane_g1

0x9e12,	// (0x00065688) list_form_graphic_pane_t1_ParamLimits

0x9e12,	// (0x00065688) list_form_graphic_pane_t1

0x7eb2,	// (0x00063728) list_highlight_pane_cp5_ParamLimits

0x7eb2,	// (0x00063728) list_highlight_pane_cp5

0x9e27,	// (0x0006569d) find_pane_g1

0x8312,	// (0x00063b88) input_find_pane

0x9e30,	// (0x000656a6) input_find_pane_g1_ParamLimits

0x9e30,	// (0x000656a6) input_find_pane_g1

0x9e3c,	// (0x000656b2) input_find_pane_t1_ParamLimits

0x9e3c,	// (0x000656b2) input_find_pane_t1

0x9e51,	// (0x000656c7) input_find_pane_t2_ParamLimits

0x9e51,	// (0x000656c7) input_find_pane_t2

0x0001,

0xf697,	// (0x0006af0d) input_find_pane_t_ParamLimits

0xf697,	// (0x0006af0d) input_find_pane_t

0x831b,	// (0x00063b91) input_focus_pane_cp5_ParamLimits

0x831b,	// (0x00063b91) input_focus_pane_cp5

0x8329,	// (0x00063b9f) bg_popup_window_pane_cp2_ParamLimits

0x8329,	// (0x00063b9f) bg_popup_window_pane_cp2

0x8336,	// (0x00063bac) listscroll_menu_pane_ParamLimits

0x8336,	// (0x00063bac) listscroll_menu_pane

0x9e72,	// (0x000656e8) popup_submenu_window_ParamLimits

0x9e72,	// (0x000656e8) popup_submenu_window

0x8342,	// (0x00063bb8) find_popup_pane_g1

0x9e9a,	// (0x00065710) input_popup_find_pane_cp

0x831b,	// (0x00063b91) input_focus_pane_cp4_ParamLimits

0x831b,	// (0x00063b91) input_focus_pane_cp4

0x834a,	// (0x00063bc0) input_popup_find_pane_t1_ParamLimits

0x834a,	// (0x00063bc0) input_popup_find_pane_t1

0x7e64,	// (0x000636da) bg_popup_sub_pane_cp

0x8378,	// (0x00063bee) listscroll_popup_sub_pane

0x8380,	// (0x00063bf6) list_submenu_pane_ParamLimits

0x8380,	// (0x00063bf6) list_submenu_pane

0x8391,	// (0x00063c07) scroll_pane_cp4

0x9eb2,	// (0x00065728) list_single_popup_submenu_pane_ParamLimits

0x9eb2,	// (0x00065728) list_single_popup_submenu_pane

0x9ec6,	// (0x0006573c) list_single_popup_submenu_pane_g1

0x9ece,	// (0x00065744) list_single_popup_submenu_pane_t1_ParamLimits

0x9ece,	// (0x00065744) list_single_popup_submenu_pane_t1

0x7fdc,	// (0x00063852) bg_active_tab_pane_cp1_ParamLimits

0x7fdc,	// (0x00063852) bg_active_tab_pane_cp1

0x8399,	// (0x00063c0f) tabs_2_active_pane_g1

0x9ee3,	// (0x00065759) tabs_2_active_pane_t1

0x7fdc,	// (0x00063852) bg_passive_tab_pane_cp1_ParamLimits

0x7fdc,	// (0x00063852) bg_passive_tab_pane_cp1

0x8399,	// (0x00063c0f) tabs_2_passive_pane_g1

0x9ee3,	// (0x00065759) tabs_2_passive_pane_t1

0x7eb2,	// (0x00063728) bg_active_tab_pane_cp4

0x9ef5,	// (0x0006576b) tabs_2_long_active_pane_t1

0x1e70,	// (0x0005d6e6) bg_passive_tab_pane_cp4

0x07a6,	// (0x0005c01c) list_single_midp_graphic_pane_g4_ParamLimits

0x7eb2,	// (0x00063728) bg_active_tab_pane_cp5

0x9f08,	// (0x0006577e) tabs_3_long_active_pane_t1

0x1e70,	// (0x0005d6e6) bg_passive_tab_pane_cp5

0x07a6,	// (0x0005c01c) list_single_midp_graphic_pane_g4

0x7eb2,	// (0x00063728) bg_popup_window_pane_cp13_ParamLimits

0x7eb2,	// (0x00063728) bg_popup_window_pane_cp13

0x83a1,	// (0x00063c17) listscroll_popup_fast_pane_ParamLimits

0x83a1,	// (0x00063c17) listscroll_popup_fast_pane

0x83ad,	// (0x00063c23) grid_popup_fast_pane_ParamLimits

0x83ad,	// (0x00063c23) grid_popup_fast_pane

0x83bf,	// (0x00063c35) scroll_pane_cp9_ParamLimits

0x83bf,	// (0x00063c35) scroll_pane_cp9

0x53a9,	// (0x00060c1f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x53a9,	// (0x00060c1f) list_single_graphic_hl_pane_t1_cp2

0x83d2,	// (0x00063c48) input_focus_pane_cp20_ParamLimits

0x83d2,	// (0x00063c48) input_focus_pane_cp20

0x83e0,	// (0x00063c56) query_popup_data_pane_t1_ParamLimits

0x83e0,	// (0x00063c56) query_popup_data_pane_t1

0x83f3,	// (0x00063c69) query_popup_data_pane_t2_ParamLimits

0x83f3,	// (0x00063c69) query_popup_data_pane_t2

0x8439,	// (0x00063caf) query_popup_data_pane_t3_ParamLimits

0x8439,	// (0x00063caf) query_popup_data_pane_t3

0x847a,	// (0x00063cf0) query_popup_data_pane_t4_ParamLimits

0x847a,	// (0x00063cf0) query_popup_data_pane_t4

0x84b6,	// (0x00063d2c) query_popup_data_pane_t5_ParamLimits

0x84b6,	// (0x00063d2c) query_popup_data_pane_t5

0x0004,

0xf69c,	// (0x0006af12) query_popup_data_pane_t_ParamLimits

0xf69c,	// (0x0006af12) query_popup_data_pane_t

0x82ca,	// (0x00063b40) bg_set_opt_pane_g1

0x82d2,	// (0x00063b48) bg_set_opt_pane_g2

0x82da,	// (0x00063b50) bg_set_opt_pane_g3

0x82e2,	// (0x00063b58) bg_set_opt_pane_g4

0x82ea,	// (0x00063b60) bg_set_opt_pane_g5

0x82f2,	// (0x00063b68) bg_set_opt_pane_g6

0x82fa,	// (0x00063b70) bg_set_opt_pane_g7

0x8302,	// (0x00063b78) bg_set_opt_pane_g8

0x830a,	// (0x00063b80) bg_set_opt_pane_g9

0x0008,

0xf6a7,	// (0x0006af1d) bg_set_opt_pane_g

0xf364,	// (0x0006abda) control_top_pane_stacon_ParamLimits

0xf364,	// (0x0006abda) control_top_pane_stacon

0xf3b7,	// (0x0006ac2d) signal_pane_stacon_ParamLimits

0xf3b7,	// (0x0006ac2d) signal_pane_stacon

0xbcc0,	// (0x00067536) stacon_top_pane_g1_ParamLimits

0xbcc0,	// (0x00067536) stacon_top_pane_g1

0xf3dc,	// (0x0006ac52) title_pane_stacon_ParamLimits

0xf3dc,	// (0x0006ac52) title_pane_stacon

0xf406,	// (0x0006ac7c) uni_indicator_pane_stacon_ParamLimits

0xf406,	// (0x0006ac7c) uni_indicator_pane_stacon

0xf41b,	// (0x0006ac91) battery_pane_stacon_ParamLimits

0xf41b,	// (0x0006ac91) battery_pane_stacon

0xf45f,	// (0x0006acd5) control_bottom_pane_stacon_ParamLimits

0xf45f,	// (0x0006acd5) control_bottom_pane_stacon

0xf482,	// (0x0006acf8) navi_pane_stacon_ParamLimits

0xf482,	// (0x0006acf8) navi_pane_stacon

0xbce2,	// (0x00067558) stacon_bottom_pane_g1_ParamLimits

0xbce2,	// (0x00067558) stacon_bottom_pane_g1

0xf127,	// (0x0006a99d) aid_levels_signal_lsc_ParamLimits

0xf127,	// (0x0006a99d) aid_levels_signal_lsc

0xf13d,	// (0x0006a9b3) signal_pane_stacon_g1_ParamLimits

0xf13d,	// (0x0006a9b3) signal_pane_stacon_g1

0xf151,	// (0x0006a9c7) signal_pane_stacon_g2_ParamLimits

0xf151,	// (0x0006a9c7) signal_pane_stacon_g2

0x0001,

0xf6ba,	// (0x0006af30) signal_pane_stacon_g_ParamLimits

0xf6ba,	// (0x0006af30) signal_pane_stacon_g

0xf186,	// (0x0006a9fc) title_pane_stacon_t1_ParamLimits

0xf186,	// (0x0006a9fc) title_pane_stacon_t1

0x84fa,	// (0x00063d70) uni_indicator_pane_stacon_g1

0x8504,	// (0x00063d7a) uni_indicator_pane_stacon_g2

0x850e,	// (0x00063d84) uni_indicator_pane_stacon_g3

0x8518,	// (0x00063d8e) uni_indicator_pane_stacon_g4

0x0003,

0xf6c6,	// (0x0006af3c) uni_indicator_pane_stacon_g

0xf1ab,	// (0x0006aa21) control_top_pane_stacon_g1

0xf1b3,	// (0x0006aa29) control_top_pane_stacon_t1_ParamLimits

0xf1b3,	// (0x0006aa29) control_top_pane_stacon_t1

0xf1ea,	// (0x0006aa60) aid_levels_battery_lsc_ParamLimits

0xf1ea,	// (0x0006aa60) aid_levels_battery_lsc

0xf201,	// (0x0006aa77) battery_pane_stacon_g1_ParamLimits

0xf201,	// (0x0006aa77) battery_pane_stacon_g1

0xf214,	// (0x0006aa8a) battery_pane_stacon_g2_ParamLimits

0xf214,	// (0x0006aa8a) battery_pane_stacon_g2

0x0001,

0xf6cf,	// (0x0006af45) battery_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0006af45) battery_pane_stacon_g

0xf252,	// (0x0006aac8) navi_icon_pane_stacon

0xf266,	// (0x0006aadc) navi_navi_pane_stacon

0xf252,	// (0x0006aac8) navi_text_pane_stacon

0xf1ab,	// (0x0006aa21) control_bottom_pane_stacon_g1

0xf27a,	// (0x0006aaf0) control_bottom_pane_stacon_t1_ParamLimits

0xf27a,	// (0x0006aaf0) control_bottom_pane_stacon_t1

0x9f34,	// (0x000657aa) grid_app_pane_ParamLimits

0x9f34,	// (0x000657aa) grid_app_pane

0x9f6c,	// (0x000657e2) scroll_pane_cp15_ParamLimits

0x9f6c,	// (0x000657e2) scroll_pane_cp15

0x9f81,	// (0x000657f7) cell_app_pane_ParamLimits

0x9f81,	// (0x000657f7) cell_app_pane

0x9fc6,	// (0x0006583c) cell_app_pane_g1_ParamLimits

0x9fc6,	// (0x0006583c) cell_app_pane_g1

0x853c,	// (0x00063db2) cell_app_pane_g2_ParamLimits

0x853c,	// (0x00063db2) cell_app_pane_g2

0x0001,

0xf6d4,	// (0x0006af4a) cell_app_pane_g_ParamLimits

0xf6d4,	// (0x0006af4a) cell_app_pane_g

0x9fea,	// (0x00065860) cell_app_pane_t1_ParamLimits

0x9fea,	// (0x00065860) cell_app_pane_t1

0x8548,	// (0x00063dbe) grid_highlight_pane_ParamLimits

0x8548,	// (0x00063dbe) grid_highlight_pane

0x82ca,	// (0x00063b40) cell_highlight_pane_g1

0x82d2,	// (0x00063b48) cell_highlight_pane_g2

0x82da,	// (0x00063b50) cell_highlight_pane_g3

0x82e2,	// (0x00063b58) cell_highlight_pane_g4

0x82ea,	// (0x00063b60) cell_highlight_pane_g5

0x82f2,	// (0x00063b68) cell_highlight_pane_g6

0x82fa,	// (0x00063b70) cell_highlight_pane_g7

0x8302,	// (0x00063b78) cell_highlight_pane_g8

0x830a,	// (0x00063b80) cell_highlight_pane_g9

0x7e5a,	// (0x000636d0) cell_highlight_pane_g10

0x0009,

0xf682,	// (0x0006aef8) cell_highlight_pane_g

0x8559,	// (0x00063dcf) bg_scroll_pane

0xa00a,	// (0x00065880) scroll_handle_pane

0x85a0,	// (0x00063e16) scroll_bg_pane_g1

0x85b5,	// (0x00063e2b) scroll_bg_pane_g2

0x85cd,	// (0x00063e43) scroll_bg_pane_g3

0x0002,

0xf6d9,	// (0x0006af4f) scroll_bg_pane_g

0xa01e,	// (0x00065894) scroll_handle_focus_pane_ParamLimits

0xa01e,	// (0x00065894) scroll_handle_focus_pane

0x85a0,	// (0x00063e16) scroll_handle_pane_g1

0x85e2,	// (0x00063e58) scroll_handle_pane_g2

0x85cd,	// (0x00063e43) scroll_handle_pane_g3

0x0002,

0xf6e0,	// (0x0006af56) scroll_handle_pane_g

0x831b,	// (0x00063b91) bg_popup_sub_pane_cp21_ParamLimits

0x831b,	// (0x00063b91) bg_popup_sub_pane_cp21

0xa02b,	// (0x000658a1) popup_fep_japan_predictive_window_t1_ParamLimits

0xa02b,	// (0x000658a1) popup_fep_japan_predictive_window_t1

0xa042,	// (0x000658b8) popup_fep_japan_predictive_window_t2_ParamLimits

0xa042,	// (0x000658b8) popup_fep_japan_predictive_window_t2

0xa075,	// (0x000658eb) popup_fep_japan_predictive_window_t3_ParamLimits

0xa075,	// (0x000658eb) popup_fep_japan_predictive_window_t3

0x0002,

0xf6e7,	// (0x0006af5d) popup_fep_japan_predictive_window_t_ParamLimits

0xf6e7,	// (0x0006af5d) popup_fep_japan_predictive_window_t

0x7e64,	// (0x000636da) bg_popup_sub_pane_cp23

0xa0ac,	// (0x00065922) listscroll_japin_cand_pane

0x85f6,	// (0x00063e6c) popup_fep_japan_candidate_window_t1

0x8604,	// (0x00063e7a) candidate_pane_ParamLimits

0x8604,	// (0x00063e7a) candidate_pane

0xa0b4,	// (0x0006592a) scroll_pane_cp30

0x8616,	// (0x00063e8c) list_single_popup_jap_candidate_pane_ParamLimits

0x8616,	// (0x00063e8c) list_single_popup_jap_candidate_pane

0x7e64,	// (0x000636da) list_highlight_pane_cp30

0x862b,	// (0x00063ea1) list_single_popup_jap_candidate_pane_t1

0x863a,	// (0x00063eb0) level_1_signal

0x8647,	// (0x00063ebd) level_2_signal

0xbad2,	// (0x00067348) level_3_signal

0xbadf,	// (0x00067355) level_4_signal

0xbaec,	// (0x00067362) level_5_signal

0xbaf9,	// (0x0006736f) level_6_signal

0xbb06,	// (0x0006737c) level_7_signal

0x863a,	// (0x00063eb0) level_1_battery

0x8647,	// (0x00063ebd) level_2_battery

0xbad2,	// (0x00067348) level_3_battery

0xbadf,	// (0x00067355) level_4_battery

0xbaec,	// (0x00067362) level_5_battery

0xbaf9,	// (0x0006736f) level_6_battery

0xbb06,	// (0x0006737c) level_7_battery

0xbb2b,	// (0x000673a1) list_menu_pane_ParamLimits

0xbb2b,	// (0x000673a1) list_menu_pane

0xbb41,	// (0x000673b7) scroll_pane_cp25_ParamLimits

0xbb41,	// (0x000673b7) scroll_pane_cp25

0xa0bc,	// (0x00065932) list_double2_graphic_pane_cp2_ParamLimits

0xa0bc,	// (0x00065932) list_double2_graphic_pane_cp2

0xa0bc,	// (0x00065932) list_double2_large_graphic_pane_cp2_ParamLimits

0xa0bc,	// (0x00065932) list_double2_large_graphic_pane_cp2

0xa0bc,	// (0x00065932) list_double2_pane_cp2_ParamLimits

0xa0bc,	// (0x00065932) list_double2_pane_cp2

0xa0bc,	// (0x00065932) list_double_graphic_pane_cp2_ParamLimits

0xa0bc,	// (0x00065932) list_double_graphic_pane_cp2

0xa0bc,	// (0x00065932) list_double_large_graphic_pane_cp2_ParamLimits

0xa0bc,	// (0x00065932) list_double_large_graphic_pane_cp2

0xa0bc,	// (0x00065932) list_double_number_pane_cp2_ParamLimits

0xa0bc,	// (0x00065932) list_double_number_pane_cp2

0xa0bc,	// (0x00065932) list_double_pane_cp2_ParamLimits

0xa0bc,	// (0x00065932) list_double_pane_cp2

0xa0cb,	// (0x00065941) list_single_2graphic_pane_cp2_ParamLimits

0xa0cb,	// (0x00065941) list_single_2graphic_pane_cp2

0xa0cb,	// (0x00065941) list_single_graphic_heading_pane_cp2_ParamLimits

0xa0cb,	// (0x00065941) list_single_graphic_heading_pane_cp2

0xa0cb,	// (0x00065941) list_single_graphic_pane_cp2_ParamLimits

0xa0cb,	// (0x00065941) list_single_graphic_pane_cp2

0xa0cb,	// (0x00065941) list_single_heading_pane_cp2_ParamLimits

0xa0cb,	// (0x00065941) list_single_heading_pane_cp2

0xbb6a,	// (0x000673e0) list_single_large_graphic_pane_cp2_ParamLimits

0xbb6a,	// (0x000673e0) list_single_large_graphic_pane_cp2

0xa0cb,	// (0x00065941) list_single_number_heading_pane_cp2_ParamLimits

0xa0cb,	// (0x00065941) list_single_number_heading_pane_cp2

0xa0cb,	// (0x00065941) list_single_number_pane_cp2_ParamLimits

0xa0cb,	// (0x00065941) list_single_number_pane_cp2

0xa0cb,	// (0x00065941) list_single_pane_cp2_ParamLimits

0xa0cb,	// (0x00065941) list_single_pane_cp2

0xbb84,	// (0x000673fa) bg_popup_sub_pane_cp22

0xf34a,	// (0x0006abc0) popup_side_volume_key_window_g1

0xf356,	// (0x0006abcc) popup_side_volume_key_window_t1

0xa193,	// (0x00065a09) volume_small_pane_cp1

0x7fdc,	// (0x00063852) bg_popup_sub_pane_cp24_ParamLimits

0x7fdc,	// (0x00063852) bg_popup_sub_pane_cp24

0xbb9a,	// (0x00067410) fep_china_uni_candidate_pane_ParamLimits

0xbb9a,	// (0x00067410) fep_china_uni_candidate_pane

0xbbae,	// (0x00067424) fep_china_uni_entry_pane

0xbbbe,	// (0x00067434) popup_fep_china_uni_window_g1

0xa19b,	// (0x00065a11) fep_china_uni_entry_pane_g1

0xa1a3,	// (0x00065a19) fep_china_uni_entry_pane_g2

0x0001,

0xf718,	// (0x0006af8e) fep_china_uni_entry_pane_g

0xbbda,	// (0x00067450) fep_entry_item_pane

0xbbe4,	// (0x0006745a) fep_candidate_item_pane

0xa1ab,	// (0x00065a21) fep_china_uni_candidate_pane_g1

0xbbec,	// (0x00067462) fep_china_uni_candidate_pane_g2

0xbbf4,	// (0x0006746a) fep_china_uni_candidate_pane_g3

0xa1b3,	// (0x00065a29) fep_china_uni_candidate_pane_g4

0x0003,

0xf71d,	// (0x0006af93) fep_china_uni_candidate_pane_g

0x7e5a,	// (0x000636d0) fep_entry_item_pane_g1

0xbbfc,	// (0x00067472) fep_entry_item_pane_t1_ParamLimits

0xbbfc,	// (0x00067472) fep_entry_item_pane_t1

0xbc12,	// (0x00067488) fep_candidate_item_pane_t1_ParamLimits

0xbc12,	// (0x00067488) fep_candidate_item_pane_t1

0xbc27,	// (0x0006749d) fep_candidate_item_pane_t2_ParamLimits

0xbc27,	// (0x0006749d) fep_candidate_item_pane_t2

0x0001,

0xf726,	// (0x0006af9c) fep_candidate_item_pane_t_ParamLimits

0xf726,	// (0x0006af9c) fep_candidate_item_pane_t

0x7eb2,	// (0x00063728) list_highlight_pane_cp31_ParamLimits

0x7eb2,	// (0x00063728) list_highlight_pane_cp31

0xbc39,	// (0x000674af) level_1_signal_lsc

0xbc42,	// (0x000674b8) level_2_signal_lsc

0xbc4b,	// (0x000674c1) level_3_signal_lsc

0xbc54,	// (0x000674ca) level_4_signal_lsc

0xbc5d,	// (0x000674d3) level_5_signal_lsc

0xbc66,	// (0x000674dc) level_6_signal_lsc

0xbc6f,	// (0x000674e5) level_7_signal_lsc

0xbc6f,	// (0x000674e5) level_1_battery_lsc

0xbc78,	// (0x000674ee) level_2_battery_lsc

0xbc81,	// (0x000674f7) level_3_battery_lsc

0xbc8a,	// (0x00067500) level_4_battery_lsc

0xbc93,	// (0x00067509) level_5_battery_lsc

0xbc9c,	// (0x00067512) level_6_battery_lsc

0xbc39,	// (0x000674af) level_7_battery_lsc

0xbca5,	// (0x0006751b) scroll_handle_focus_pane_g1

0xbcae,	// (0x00067524) scroll_handle_focus_pane_g2

0xbcb7,	// (0x0006752d) scroll_handle_focus_pane_g3

0x0002,

0xf72b,	// (0x0006afa1) scroll_handle_focus_pane_g

0xa1bb,	// (0x00065a31) list_single_2graphic_pane_g1_ParamLimits

0xa1bb,	// (0x00065a31) list_single_2graphic_pane_g1

0x9937,	// (0x000651ad) list_single_2graphic_pane_g2_ParamLimits

0x9937,	// (0x000651ad) list_single_2graphic_pane_g2

0xdeeb,	// (0x00069761) list_single_2graphic_pane_g3_ParamLimits

0xdeeb,	// (0x00069761) list_single_2graphic_pane_g3

0xa1c7,	// (0x00065a3d) list_single_2graphic_pane_g4_ParamLimits

0xa1c7,	// (0x00065a3d) list_single_2graphic_pane_g4

0x0003,

0xf732,	// (0x0006afa8) list_single_2graphic_pane_g_ParamLimits

0xf732,	// (0x0006afa8) list_single_2graphic_pane_g

0xa1d3,	// (0x00065a49) list_single_2graphic_pane_t1_ParamLimits

0xa1d3,	// (0x00065a49) list_single_2graphic_pane_t1

0xa201,	// (0x00065a77) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa201,	// (0x00065a77) list_double2_graphic_large_graphic_pane_g1

0x9b01,	// (0x00065377) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9b01,	// (0x00065377) list_double2_graphic_large_graphic_pane_g2

0x9a4e,	// (0x000652c4) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9a4e,	// (0x000652c4) list_double2_graphic_large_graphic_pane_g3

0xa213,	// (0x00065a89) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa213,	// (0x00065a89) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf73b,	// (0x0006afb1) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf73b,	// (0x0006afb1) list_double2_graphic_large_graphic_pane_g

0xa21f,	// (0x00065a95) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa21f,	// (0x00065a95) list_double2_graphic_large_graphic_pane_t1

0xa235,	// (0x00065aab) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa235,	// (0x00065aab) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf744,	// (0x0006afba) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf744,	// (0x0006afba) list_double2_graphic_large_graphic_pane_t

0xa2ba,	// (0x00065b30) popup_fast_swap_window_ParamLimits

0xa2ba,	// (0x00065b30) popup_fast_swap_window

0xa2d6,	// (0x00065b4c) popup_side_volume_key_window

0xdfd9,	// (0x0006984f) stacon_top_pane

0xdfe3,	// (0x00069859) status_pane_ParamLimits

0xdfe3,	// (0x00069859) status_pane

0xa2f0,	// (0x00065b66) status_small_pane

0x7e64,	// (0x000636da) control_pane

0x7e64,	// (0x000636da) stacon_bottom_pane

0x8255,	// (0x00063acb) scroll_pane_cp121

0x824c,	// (0x00063ac2) set_content_pane

0xa247,	// (0x00065abd) bg_active_tab_pane_g1_cp1

0xa250,	// (0x00065ac6) bg_active_tab_pane_g2_cp1

0xa259,	// (0x00065acf) bg_active_tab_pane_g3_cp1

0xa247,	// (0x00065abd) bg_passive_tab_pane_g1_cp1

0xa250,	// (0x00065ac6) bg_passive_tab_pane_g2_cp1

0xa259,	// (0x00065acf) bg_passive_tab_pane_g3_cp1

0xa262,	// (0x00065ad8) bg_active_tab_pane_g1_cp2

0xa250,	// (0x00065ac6) bg_active_tab_pane_g2_cp2

0xa26b,	// (0x00065ae1) bg_active_tab_pane_g3_cp2

0xa262,	// (0x00065ad8) bg_passive_tab_pane_g1_cp2

0xa250,	// (0x00065ac6) bg_passive_tab_pane_g2_cp2

0xa26b,	// (0x00065ae1) bg_passive_tab_pane_g3_cp2

0xa274,	// (0x00065aea) bg_active_tab_pane_g1_cp3

0xa250,	// (0x00065ac6) bg_active_tab_pane_g2_cp3

0xa27d,	// (0x00065af3) bg_active_tab_pane_g3_cp3

0xa274,	// (0x00065aea) bg_passive_tab_pane_g1_cp3

0xa250,	// (0x00065ac6) bg_passive_tab_pane_g2_cp3

0xa27d,	// (0x00065af3) bg_passive_tab_pane_g3_cp3

0xa286,	// (0x00065afc) bg_active_tab_pane_g1_cp4

0xa250,	// (0x00065ac6) bg_active_tab_pane_g2_cp4

0xa291,	// (0x00065b07) bg_active_tab_pane_g3_cp4

0xa286,	// (0x00065afc) bg_passive_tab_pane_g1_cp4

0xa250,	// (0x00065ac6) bg_passive_tab_pane_g2_cp4

0xa291,	// (0x00065b07) bg_passive_tab_pane_g3_cp4

0xa29c,	// (0x00065b12) bg_active_tab_pane_g1_cp5

0xa250,	// (0x00065ac6) bg_active_tab_pane_g2_cp5

0xa2a5,	// (0x00065b1b) bg_active_tab_pane_g3_cp5

0xa29c,	// (0x00065b12) bg_passive_tab_pane_g1_cp5

0xa250,	// (0x00065ac6) bg_passive_tab_pane_g2_cp5

0xa2a5,	// (0x00065b1b) bg_passive_tab_pane_g3_cp5

0x3f24,	// (0x0005f79a) list_set_graphic_pane_ParamLimits

0x3f24,	// (0x0005f79a) list_set_graphic_pane

0x7e64,	// (0x000636da) bg_set_opt_pane_cp4

0xbcfe,	// (0x00067574) list_set_graphic_pane_g1_ParamLimits

0xbcfe,	// (0x00067574) list_set_graphic_pane_g1

0xbd0a,	// (0x00067580) list_set_graphic_pane_g2_ParamLimits

0xbd0a,	// (0x00067580) list_set_graphic_pane_g2

0x0001,

0xf749,	// (0x0006afbf) list_set_graphic_pane_g_ParamLimits

0xf749,	// (0x0006afbf) list_set_graphic_pane_g

0x0009,

0xface,	// (0x0006b344) volume_small_pane_cp_g

0xa2ae,	// (0x00065b24) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa2ae,	// (0x00065b24) list_double2_large_graphic_pane_g1_cp2

0xbd2c,	// (0x000675a2) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xbd2c,	// (0x000675a2) list_double2_large_graphic_pane_g2_cp2

0xbd3d,	// (0x000675b3) list_double2_large_graphic_pane_g3_cp2

0xbd45,	// (0x000675bb) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xbd45,	// (0x000675bb) list_double2_large_graphic_pane_t1_cp2

0xbd5b,	// (0x000675d1) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xbd5b,	// (0x000675d1) list_double2_large_graphic_pane_t2_cp2

0xc524,	// (0x00067d9a) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc524,	// (0x00067d9a) list_double_large_graphic_pane_g1_cp2

0x3495,	// (0x0005ed0b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3495,	// (0x0005ed0b) list_double_large_graphic_pane_g2_cp2

0xe0f3,	// (0x00069969) list_double_large_graphic_pane_g3_cp2

0x34a6,	// (0x0005ed1c) list_double_large_graphic_pane_g4_cp

0x34ae,	// (0x0005ed24) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x34ae,	// (0x0005ed24) list_double_large_graphic_pane_t1_cp2

0x34c5,	// (0x0005ed3b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x34c5,	// (0x0005ed3b) list_double_large_graphic_pane_t2_cp2

0xdff1,	// (0x00069867) list_double2_graphic_pane_g1_cp2_ParamLimits

0xdff1,	// (0x00069867) list_double2_graphic_pane_g1_cp2

0xdfff,	// (0x00069875) list_double2_graphic_pane_g2_cp2_ParamLimits

0xdfff,	// (0x00069875) list_double2_graphic_pane_g2_cp2

0xe010,	// (0x00069886) list_double2_graphic_pane_g3_cp2

0xe01a,	// (0x00069890) list_double2_graphic_pane_t1_cp2_ParamLimits

0xe01a,	// (0x00069890) list_double2_graphic_pane_t1_cp2

0xe030,	// (0x000698a6) list_double2_graphic_pane_t2_cp2_ParamLimits

0xe030,	// (0x000698a6) list_double2_graphic_pane_t2_cp2

0xbd6d,	// (0x000675e3) list_single_number_heading_pane_g1_cp2_ParamLimits

0xbd6d,	// (0x000675e3) list_single_number_heading_pane_g1_cp2

0xe042,	// (0x000698b8) list_single_number_heading_pane_g2_cp2

0xe04a,	// (0x000698c0) list_single_number_heading_pane_t1_cp2_ParamLimits

0xe04a,	// (0x000698c0) list_single_number_heading_pane_t1_cp2

0xe060,	// (0x000698d6) list_single_number_heading_pane_t2_cp2_ParamLimits

0xe060,	// (0x000698d6) list_single_number_heading_pane_t2_cp2

0xe072,	// (0x000698e8) list_single_number_heading_pane_t3_cp2_ParamLimits

0xe072,	// (0x000698e8) list_single_number_heading_pane_t3_cp2

0xbd6d,	// (0x000675e3) list_single_heading_pane_g1_cp2_ParamLimits

0xbd6d,	// (0x000675e3) list_single_heading_pane_g1_cp2

0xe042,	// (0x000698b8) list_single_heading_pane_g2_cp2

0xe04a,	// (0x000698c0) list_single_heading_pane_t1_cp2_ParamLimits

0xe04a,	// (0x000698c0) list_single_heading_pane_t1_cp2

0x328e,	// (0x0005eb04) list_single_heading_pane_t2_cp2_ParamLimits

0x328e,	// (0x0005eb04) list_single_heading_pane_t2_cp2

0x31d6,	// (0x0005ea4c) list_double_graphic_pane_g1_cp2_ParamLimits

0x31d6,	// (0x0005ea4c) list_double_graphic_pane_g1_cp2

0x31e2,	// (0x0005ea58) list_double_graphic_pane_g2_cp2_ParamLimits

0x31e2,	// (0x0005ea58) list_double_graphic_pane_g2_cp2

0x31f1,	// (0x0005ea67) list_double_graphic_pane_g3_cp2

0x31f9,	// (0x0005ea6f) list_double_graphic_pane_t1_cp2_ParamLimits

0x31f9,	// (0x0005ea6f) list_double_graphic_pane_t1_cp2

0x320f,	// (0x0005ea85) list_double_graphic_pane_t2_cp2_ParamLimits

0x320f,	// (0x0005ea85) list_double_graphic_pane_t2_cp2

0xe0e7,	// (0x0006995d) list_double_number_pane_g1_cp2_ParamLimits

0xe0e7,	// (0x0006995d) list_double_number_pane_g1_cp2

0xe0f3,	// (0x00069969) list_double_number_pane_g2_cp2

0x319a,	// (0x0005ea10) list_double_number_pane_t1_cp2_ParamLimits

0x319a,	// (0x0005ea10) list_double_number_pane_t1_cp2

0x31ae,	// (0x0005ea24) list_double_number_pane_t2_cp2_ParamLimits

0x31ae,	// (0x0005ea24) list_double_number_pane_t2_cp2

0x31c4,	// (0x0005ea3a) list_double_number_pane_t3_cp2_ParamLimits

0x31c4,	// (0x0005ea3a) list_double_number_pane_t3_cp2

0x3083,	// (0x0005e8f9) list_single_graphic_pane_g1_cp2_ParamLimits

0x3083,	// (0x0005e8f9) list_single_graphic_pane_g1_cp2

0xe143,	// (0x000699b9) list_single_graphic_pane_g2_cp2_ParamLimits

0xe143,	// (0x000699b9) list_single_graphic_pane_g2_cp2

0xe14f,	// (0x000699c5) list_single_graphic_pane_g3_cp2

0x3059,	// (0x0005e8cf) list_single_graphic_pane_t1_cp2_ParamLimits

0x3059,	// (0x0005e8cf) list_single_graphic_pane_t1_cp2

0xe143,	// (0x000699b9) list_single_number_pane_g1_cp2_ParamLimits

0xe143,	// (0x000699b9) list_single_number_pane_g1_cp2

0xe14f,	// (0x000699c5) list_single_number_pane_g2_cp2

0x3059,	// (0x0005e8cf) list_single_number_pane_t1_cp2_ParamLimits

0x3059,	// (0x0005e8cf) list_single_number_pane_t1_cp2

0x306f,	// (0x0005e8e5) list_single_number_pane_t2_cp2_ParamLimits

0x306f,	// (0x0005e8e5) list_single_number_pane_t2_cp2

0xbd2c,	// (0x000675a2) list_double2_pane_g1_cp2_ParamLimits

0xbd2c,	// (0x000675a2) list_double2_pane_g1_cp2

0xbd3d,	// (0x000675b3) list_double2_pane_g2_cp2

0xe0bf,	// (0x00069935) list_double2_pane_t1_cp2_ParamLimits

0xe0bf,	// (0x00069935) list_double2_pane_t1_cp2

0xe0d5,	// (0x0006994b) list_double2_pane_t2_cp2_ParamLimits

0xe0d5,	// (0x0006994b) list_double2_pane_t2_cp2

0xe0e7,	// (0x0006995d) list_double_pane_g1_cp2_ParamLimits

0xe0e7,	// (0x0006995d) list_double_pane_g1_cp2

0xe0f3,	// (0x00069969) list_double_pane_g2_cp2

0xe0fb,	// (0x00069971) list_double_pane_t1_cp2_ParamLimits

0xe0fb,	// (0x00069971) list_double_pane_t1_cp2

0xe111,	// (0x00069987) list_double_pane_t2_cp2_ParamLimits

0xe111,	// (0x00069987) list_double_pane_t2_cp2

0xa2fb,	// (0x00065b71) list_single_pane_cp2_g3

0xe143,	// (0x000699b9) list_single_pane_g1_cp2_ParamLimits

0xe143,	// (0x000699b9) list_single_pane_g1_cp2

0xe14f,	// (0x000699c5) list_single_pane_g2_cp2

0xe157,	// (0x000699cd) list_single_pane_t1_cp2_ParamLimits

0xe157,	// (0x000699cd) list_single_pane_t1_cp2

0xa303,	// (0x00065b79) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa303,	// (0x00065b79) list_single_large_graphic_pane_g1_cp2

0xe16f,	// (0x000699e5) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xe16f,	// (0x000699e5) list_single_large_graphic_pane_g2_cp2

0xe17b,	// (0x000699f1) list_single_large_graphic_pane_g3_cp2

0xa30f,	// (0x00065b85) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa30f,	// (0x00065b85) list_single_large_graphic_pane_g4_cp1

0xe183,	// (0x000699f9) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xe183,	// (0x000699f9) list_single_large_graphic_pane_t1_cp2

0x3025,	// (0x0005e89b) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3025,	// (0x0005e89b) list_single_graphic_heading_pane_g1_cp2

0x2ff2,	// (0x0005e868) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2ff2,	// (0x0005e868) list_single_graphic_heading_pane_g4_cp2

0xe14f,	// (0x000699c5) list_single_graphic_heading_pane_g5_cp2

0x3031,	// (0x0005e8a7) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3031,	// (0x0005e8a7) list_single_graphic_heading_pane_t1_cp2

0x3047,	// (0x0005e8bd) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x3047,	// (0x0005e8bd) list_single_graphic_heading_pane_t2_cp2

0x2fe6,	// (0x0005e85c) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2fe6,	// (0x0005e85c) list_single_2graphic_pane_g1_cp2

0x2ff2,	// (0x0005e868) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2ff2,	// (0x0005e868) list_single_2graphic_pane_g2_cp2

0xe14f,	// (0x000699c5) list_single_2graphic_pane_g3_cp2

0x3003,	// (0x0005e879) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3003,	// (0x0005e879) list_single_2graphic_pane_g4_cp2

0x300f,	// (0x0005e885) list_single_2graphic_pane_t1_cp2_ParamLimits

0x300f,	// (0x0005e885) list_single_2graphic_pane_t1_cp2

0x7e5a,	// (0x000636d0) list_highlight_pane_g10_cp1

0x2bce,	// (0x0005e444) list_highlight_pane_g1_cp1

0x2bd6,	// (0x0005e44c) list_highlight_pane_g2_cp1

0x2bde,	// (0x0005e454) list_highlight_pane_g3_cp1

0x2be6,	// (0x0005e45c) list_highlight_pane_g4_cp1

0x2bee,	// (0x0005e464) list_highlight_pane_g5_cp1

0x2bf6,	// (0x0005e46c) list_highlight_pane_g6_cp1

0x2bfe,	// (0x0005e474) list_highlight_pane_g7_cp1

0x2c06,	// (0x0005e47c) list_highlight_pane_g8_cp1

0x2c0e,	// (0x0005e484) list_highlight_pane_g9_cp1

0xc2b9,	// (0x00067b2f) form_field_slider_pane_t3

0xc2c7,	// (0x00067b3d) form_field_slider_pane_t4

0x2b12,	// (0x0005e388) slider_form_pane_ParamLimits

0x2b12,	// (0x0005e388) slider_form_pane

0x7e64,	// (0x000636da) control_abbreviations

0x7e64,	// (0x000636da) control_conventions

0x7e64,	// (0x000636da) control_definitions

0x7e64,	// (0x000636da) format_table_attribute

0xc4fb,	// (0x00067d71) bg_popup_preview_window_pane_g9

0x7e64,	// (0x000636da) format_table_data2

0x7e64,	// (0x000636da) format_table_data3

0x7e64,	// (0x000636da) format_table_data_example

0x0008,

0x7e64,	// (0x000636da) intro_purpose

0xf8d9,	// (0x0006b14f) bg_popup_preview_window_pane_g

0x7e64,	// (0x000636da) texts_category

0x7e64,	// (0x000636da) texts_graphics

0xe199,	// (0x00069a0f) text_digital

0xe1a8,	// (0x00069a1e) text_primary

0xe1b7,	// (0x00069a2d) text_primary_small

0xe1c6,	// (0x00069a3c) text_secondary

0xe1d5,	// (0x00069a4b) text_title

0xc885,	// (0x000680fb) bg_passive_tab_pane_g1_cp3_srt

0xa250,	// (0x00065ac6) bg_passive_tab_pane_g2_cp3_srt

0xc88e,	// (0x00068104) bg_passive_tab_pane_g3_cp3_srt

0x7fdc,	// (0x00063852) bg_active_tab_pane_cp3_srt_ParamLimits

0x7fdc,	// (0x00063852) bg_active_tab_pane_cp3_srt

0xc897,	// (0x0006810d) tabs_4_active_pane_srt_g1

0xc89f,	// (0x00068115) tabs_4_active_pane_srt_t1_ParamLimits

0xc89f,	// (0x00068115) tabs_4_active_pane_srt_t1

0xc885,	// (0x000680fb) bg_active_tab_pane_g1_cp3_copy1

0xa250,	// (0x00065ac6) bg_active_tab_pane_g2_cp3_copy1

0xc88e,	// (0x00068104) bg_active_tab_pane_g3_cp3_copy1

0x7eb2,	// (0x00063728) tabs_2_long_active_pane_srt_ParamLimits

0x7eb2,	// (0x00063728) tabs_2_long_active_pane_srt

0x7eb2,	// (0x00063728) tabs_2_long_passive_pane_srt_ParamLimits

0x7eb2,	// (0x00063728) tabs_2_long_passive_pane_srt

0x1e70,	// (0x0005d6e6) bg_passive_tab_pane_cp4_srt_ParamLimits

0x1e70,	// (0x0005d6e6) bg_passive_tab_pane_cp4_srt

0xc613,	// (0x00067e89) bg_passive_tab_pane_g1_cp4_srt

0xa250,	// (0x00065ac6) bg_passive_tab_pane_g2_cp4_srt

0xc61c,	// (0x00067e92) bg_passive_tab_pane_g3_cp4_srt

0x7eb2,	// (0x00063728) bg_active_tab_pane_cp4_srt_ParamLimits

0x7eb2,	// (0x00063728) bg_active_tab_pane_cp4_srt

0xc625,	// (0x00067e9b) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc625,	// (0x00067e9b) tabs_2_long_active_pane_srt_t1

0xc613,	// (0x00067e89) bg_active_tab_pane_g1_cp4_srt

0xa250,	// (0x00065ac6) bg_active_tab_pane_g2_cp4_srt

0xc61c,	// (0x00067e92) bg_active_tab_pane_g3_cp4_srt

0x7fdc,	// (0x00063852) tabs_3_long_active_pane_srt_ParamLimits

0x7fdc,	// (0x00063852) tabs_3_long_active_pane_srt

0x7fdc,	// (0x00063852) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7fdc,	// (0x00063852) tabs_3_long_passive_pane_cp_srt

0x7fdc,	// (0x00063852) tabs_3_long_passive_pane_srt_ParamLimits

0x7fdc,	// (0x00063852) tabs_3_long_passive_pane_srt

0x1e70,	// (0x0005d6e6) bg_passive_tab_pane_cp5_srt_ParamLimits

0x1e70,	// (0x0005d6e6) bg_passive_tab_pane_cp5_srt

0xa29c,	// (0x00065b12) bg_passive_tab_pane_g1_cp5_srt

0xa250,	// (0x00065ac6) bg_passive_tab_pane_g2_cp5_srt

0xa2a5,	// (0x00065b1b) bg_passive_tab_pane_g3_cp5_srt

0x7eb2,	// (0x00063728) bg_active_tab_pane_cp5_srt_ParamLimits

0x7eb2,	// (0x00063728) bg_active_tab_pane_cp5_srt

0xc5fd,	// (0x00067e73) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc5fd,	// (0x00067e73) tabs_3_long_active_pane_srt_t1

0xa29c,	// (0x00065b12) bg_active_tab_pane_g1_cp5_srt

0xa250,	// (0x00065ac6) bg_active_tab_pane_g2_cp5_srt

0xa2a5,	// (0x00065b1b) bg_active_tab_pane_g3_cp5_srt

0x36d9,	// (0x0005ef4f) navi_text_pane_srt_t1

0x36d1,	// (0x0005ef47) navi_icon_pane_srt_g1

0xe2c0,	// (0x00069b36) midp_editing_number_pane_srt

0xe1e4,	// (0x00069a5a) midp_ticker_pane_srt

0xe2c8,	// (0x00069b3e) midp_ticker_pane_srt_g1

0xe2d0,	// (0x00069b46) midp_ticker_pane_srt_g2

0x0001,

0xf768,	// (0x0006afde) midp_ticker_pane_srt_g

0xe2d8,	// (0x00069b4e) midp_ticker_pane_srt_t1

0x36c2,	// (0x0005ef38) midp_editing_number_pane_t1_copy1

0xa329,	// (0x00065b9f) listscroll_midp_pane

0xa329,	// (0x00065b9f) midp_form_pane

0xa394,	// (0x00065c0a) midp_info_popup_window_ParamLimits

0xa394,	// (0x00065c0a) midp_info_popup_window

0x831b,	// (0x00063b91) bg_popup_sub_pane_cp50_ParamLimits

0x831b,	// (0x00063b91) bg_popup_sub_pane_cp50

0x280a,	// (0x0005e080) listscroll_midp_info_pane_ParamLimits

0x280a,	// (0x0005e080) listscroll_midp_info_pane

0x27ea,	// (0x0005e060) listscroll_form_midp_pane_ParamLimits

0x27ea,	// (0x0005e060) listscroll_form_midp_pane

0x27f6,	// (0x0005e06c) scroll_bar_cp050

0x27ea,	// (0x0005e060) list_midp_pane

0xca41,	// (0x000682b7) signal_pane_g2_cp

0x2704,	// (0x0005df7a) listscroll_midp_info_pane_t1_ParamLimits

0x2704,	// (0x0005df7a) listscroll_midp_info_pane_t1

0xc0f3,	// (0x00067969) listscroll_midp_info_pane_t2_ParamLimits

0xc0f3,	// (0x00067969) listscroll_midp_info_pane_t2

0xc131,	// (0x000679a7) listscroll_midp_info_pane_t3_ParamLimits

0xc131,	// (0x000679a7) listscroll_midp_info_pane_t3

0xc16b,	// (0x000679e1) listscroll_midp_info_pane_t4_ParamLimits

0xc16b,	// (0x000679e1) listscroll_midp_info_pane_t4

0x0003,

0xf814,	// (0x0006b08a) listscroll_midp_info_pane_t_ParamLimits

0xf814,	// (0x0006b08a) listscroll_midp_info_pane_t

0x8391,	// (0x00063c07) scroll_pane_cp21

0x26a4,	// (0x0005df1a) form_midp_field_choice_group_pane

0xc0b6,	// (0x0006792c) form_midp_field_text_pane

0x26ea,	// (0x0005df60) form_midp_field_time_pane

0x26f2,	// (0x0005df68) form_midp_gauge_slider_pane

0x26fb,	// (0x0005df71) form_midp_gauge_wait_pane

0x7e64,	// (0x000636da) form_midp_image_pane

0xb066,	// (0x000668dc) list_single_midp_pane_ParamLimits

0xb066,	// (0x000668dc) list_single_midp_pane

0xc094,	// (0x0006790a) form_midp_field_text_pane_t1

0x2423,	// (0x0005dc99) input_focus_pane_cp050

0x2693,	// (0x0005df09) list_midp_form_text_pane

0x2628,	// (0x0005de9e) form_midp_field_choice_group_pane_t1

0x2636,	// (0x0005deac) input_focus_pane_cp051

0x264a,	// (0x0005dec0) list_midp_choice_pane

0x7e64,	// (0x000636da) status_idle_pane

0x260c,	// (0x0005de82) form_midp_field_time_pane_t1

0x7e5a,	// (0x000636d0) wait_anim_pane_g2_copy1

0x261a,	// (0x0005de90) form_midp_field_time_pane_t2

0x0001,

0xe244,	// (0x00069aba) aid_navinavi_width_2_pane

0xf80f,	// (0x0006b085) form_midp_field_time_pane_t

0x7e64,	// (0x000636da) input_focus_pane_cp052

0x7e64,	// (0x000636da) bg_input_focus_pane_cp040

0x25cc,	// (0x0005de42) form_midp_gauge_slider_pane_t1

0x25da,	// (0x0005de50) form_midp_gauge_slider_pane_t2

0xc078,	// (0x000678ee) form_midp_gauge_slider_pane_t3

0xc086,	// (0x000678fc) form_midp_gauge_slider_pane_t4

0x0003,

0xf806,	// (0x0006b07c) form_midp_gauge_slider_pane_t

0x2604,	// (0x0005de7a) form_midp_slider_pane

0x7eb2,	// (0x00063728) bg_input_focus_pane_cp041_ParamLimits

0x7eb2,	// (0x00063728) bg_input_focus_pane_cp041

0x2599,	// (0x0005de0f) form_midp_gauge_wait_pane_t1_ParamLimits

0x2599,	// (0x0005de0f) form_midp_gauge_wait_pane_t1

0x25ab,	// (0x0005de21) form_midp_gauge_wait_pane_t2_ParamLimits

0x25ab,	// (0x0005de21) form_midp_gauge_wait_pane_t2

0x0001,

0xf801,	// (0x0006b077) form_midp_gauge_wait_pane_t_ParamLimits

0xf801,	// (0x0006b077) form_midp_gauge_wait_pane_t

0x25bd,	// (0x0005de33) form_midp_wait_pane_ParamLimits

0x25bd,	// (0x0005de33) form_midp_wait_pane

0xc042,	// (0x000678b8) form_midp_image_pane_g1

0xc04b,	// (0x000678c1) form_midp_image_pane_t1

0xc05a,	// (0x000678d0) form_midp_image_pane_t2

0xc069,	// (0x000678df) form_midp_image_pane_t3

0x0002,

0xf7fa,	// (0x0006b070) form_midp_image_pane_t

0x255a,	// (0x0005ddd0) list_single_midp_pane_g1

0xe426,	// (0x00069c9c) list_single_midp_pane_t1

0xc02d,	// (0x000678a3) list_midp_form_item_pane_ParamLimits

0xc02d,	// (0x000678a3) list_midp_form_item_pane

0xe1ec,	// (0x00069a62) list_midp_form_item_pane_t1

0xe1fb,	// (0x00069a71) midp_ticker_pane_g1

0xe207,	// (0x00069a7d) midp_ticker_pane_g2

0x0001,

0xf74e,	// (0x0006afc4) midp_ticker_pane_g

0xe213,	// (0x00069a89) midp_ticker_pane_t1

0x390f,	// (0x0005f185) midp_editing_number_pane_t1

0x38ed,	// (0x0005f163) midp_editing_number_pane

0x38fc,	// (0x0005f172) midp_ticker_pane

0x36b2,	// (0x0005ef28) ai_message_heading_pane

0x7e64,	// (0x000636da) bg_popup_window_pane_cp14

0x36ba,	// (0x0005ef30) listscroll_ai_message_pane

0x363c,	// (0x0005eeb2) ai_message_heading_pane_g1_ParamLimits

0x363c,	// (0x0005eeb2) ai_message_heading_pane_g1

0xc5c5,	// (0x00067e3b) ai_message_heading_pane_g2_ParamLimits

0xc5c5,	// (0x00067e3b) ai_message_heading_pane_g2

0x3654,	// (0x0005eeca) ai_message_heading_pane_g3_ParamLimits

0x3654,	// (0x0005eeca) ai_message_heading_pane_g3

0x3660,	// (0x0005eed6) ai_message_heading_pane_g4_ParamLimits

0x3660,	// (0x0005eed6) ai_message_heading_pane_g4

0x0003,

0xf93b,	// (0x0006b1b1) ai_message_heading_pane_g_ParamLimits

0xf93b,	// (0x0006b1b1) ai_message_heading_pane_g

0xc5d1,	// (0x00067e47) ai_message_heading_pane_t1_ParamLimits

0xc5d1,	// (0x00067e47) ai_message_heading_pane_t1

0xc5eb,	// (0x00067e61) ai_message_heading_pane_t2_ParamLimits

0xc5eb,	// (0x00067e61) ai_message_heading_pane_t2

0x0001,

0xf944,	// (0x0006b1ba) ai_message_heading_pane_t_ParamLimits

0xf944,	// (0x0006b1ba) ai_message_heading_pane_t

0x3698,	// (0x0005ef0e) bg_popup_heading_pane_cp1_ParamLimits

0x3698,	// (0x0005ef0e) bg_popup_heading_pane_cp1

0x362a,	// (0x0005eea0) list_ai_message_pane_ParamLimits

0x362a,	// (0x0005eea0) list_ai_message_pane

0x8391,	// (0x00063c07) scroll_pane_cp10

0x35c6,	// (0x0005ee3c) list_ai_message_pane_g1

0x35ce,	// (0x0005ee44) list_ai_message_pane_g2

0x0001,

0xf918,	// (0x0006b18e) list_ai_message_pane_g

0x35d6,	// (0x0005ee4c) list_ai_message_pane_t1_ParamLimits

0x35d6,	// (0x0005ee4c) list_ai_message_pane_t1

0x35eb,	// (0x0005ee61) list_ai_message_pane_t2_ParamLimits

0x35eb,	// (0x0005ee61) list_ai_message_pane_t2

0x3600,	// (0x0005ee76) list_ai_message_pane_t3_ParamLimits

0x3600,	// (0x0005ee76) list_ai_message_pane_t3

0x3615,	// (0x0005ee8b) list_ai_message_pane_t4_ParamLimits

0x3615,	// (0x0005ee8b) list_ai_message_pane_t4

0x0003,

0xf91d,	// (0x0006b193) list_ai_message_pane_t_ParamLimits

0xf91d,	// (0x0006b193) list_ai_message_pane_t

0xc5a1,	// (0x00067e17) cell_ai_soft_ind_pane_ParamLimits

0xc5a1,	// (0x00067e17) cell_ai_soft_ind_pane

0xe225,	// (0x00069a9b) cell_ai_soft_ind_pane_g1_ParamLimits

0xe225,	// (0x00069a9b) cell_ai_soft_ind_pane_g1

0x7e64,	// (0x000636da) grid_highlight_cp1

0xe232,	// (0x00069aa8) text_secondary_cp56_ParamLimits

0xe232,	// (0x00069aa8) text_secondary_cp56

0x3586,	// (0x0005edfc) example_general_pane_ParamLimits

0x3586,	// (0x0005edfc) example_general_pane

0x3592,	// (0x0005ee08) example_parent_pane_g1_ParamLimits

0x3592,	// (0x0005ee08) example_parent_pane_g1

0x359e,	// (0x0005ee14) example_parent_pane_t1_ParamLimits

0x359e,	// (0x0005ee14) example_parent_pane_t1

0xaa9e,	// (0x00066314) popup_preview_text_window_ParamLimits

0xaa9e,	// (0x00066314) popup_preview_text_window

0xe13b,	// (0x000699b1) list_single_pane_cp2_g4

0x8092,	// (0x00063908) bg_popup_preview_window_pane_ParamLimits

0x8092,	// (0x00063908) bg_popup_preview_window_pane

0xc503,	// (0x00067d79) popup_preview_text_window_t1_ParamLimits

0xc503,	// (0x00067d79) popup_preview_text_window_t1

0x32fe,	// (0x0005eb74) popup_preview_text_window_t2_ParamLimits

0x32fe,	// (0x0005eb74) popup_preview_text_window_t2

0x3347,	// (0x0005ebbd) popup_preview_text_window_t3_ParamLimits

0x3347,	// (0x0005ebbd) popup_preview_text_window_t3

0x338c,	// (0x0005ec02) popup_preview_text_window_t4_ParamLimits

0x338c,	// (0x0005ec02) popup_preview_text_window_t4

0x0004,

0xf8ec,	// (0x0006b162) popup_preview_text_window_t_ParamLimits

0xf8ec,	// (0x0006b162) popup_preview_text_window_t

0x340a,	// (0x0005ec80) scroll_pane_cp11

0x2397,	// (0x0005dc0d) bg_popup_preview_window_pane_g1

0xc4c3,	// (0x00067d39) bg_popup_preview_window_pane_g2

0xc4cb,	// (0x00067d41) bg_popup_preview_window_pane_g3

0xc4d3,	// (0x00067d49) bg_popup_preview_window_pane_g4

0xc4db,	// (0x00067d51) bg_popup_preview_window_pane_g5

0xc4e3,	// (0x00067d59) bg_popup_preview_window_pane_g6

0xc4eb,	// (0x00067d61) bg_popup_preview_window_pane_g7

0xc4f3,	// (0x00067d69) bg_popup_preview_window_pane_g8

0xdd4d,	// (0x000695c3) aid_popup_width_pane

0xaa1a,	// (0x00066290) popup_midp_note_alarm_window_ParamLimits

0xaa1a,	// (0x00066290) popup_midp_note_alarm_window

0x8266,	// (0x00063adc) data_form_pane_ParamLimits

0x9d3b,	// (0x000655b1) form_field_data_pane_g1

0x9d45,	// (0x000655bb) form_field_data_pane_t1_ParamLimits

0x8272,	// (0x00063ae8) input_focus_pane_ParamLimits

0xdf6b,	// (0x000697e1) data_form_wide_pane_ParamLimits

0xdf7c,	// (0x000697f2) form_field_data_wide_pane_g1

0xdf88,	// (0x000697fe) form_field_data_wide_pane_t1_ParamLimits

0x8166,	// (0x000639dc) input_focus_pane_cp6_ParamLimits

0x9ea4,	// (0x0006571a) input_popup_find_pane_g1_ParamLimits

0x9ea4,	// (0x0006571a) input_popup_find_pane_g1

0xf225,	// (0x0006aa9b) aid_navi_side_left_pane

0xf23a,	// (0x0006aab0) aid_navi_side_right_pane

0x2cc9,	// (0x0005e53f) bg_popup_window_pane_cp30_ParamLimits

0x2cc9,	// (0x0005e53f) bg_popup_window_pane_cp30

0x2d43,	// (0x0005e5b9) popup_midp_note_alarm_window_g1_ParamLimits

0x2d43,	// (0x0005e5b9) popup_midp_note_alarm_window_g1

0x2d73,	// (0x0005e5e9) popup_midp_note_alarm_window_t1_ParamLimits

0x2d73,	// (0x0005e5e9) popup_midp_note_alarm_window_t1

0xc30c,	// (0x00067b82) popup_midp_note_alarm_window_t2_ParamLimits

0xc30c,	// (0x00067b82) popup_midp_note_alarm_window_t2

0xc3ba,	// (0x00067c30) popup_midp_note_alarm_window_t3_ParamLimits

0xc3ba,	// (0x00067c30) popup_midp_note_alarm_window_t3

0xc3e2,	// (0x00067c58) popup_midp_note_alarm_window_t4_ParamLimits

0xc3e2,	// (0x00067c58) popup_midp_note_alarm_window_t4

0x2f0a,	// (0x0005e780) popup_midp_note_alarm_window_t5_ParamLimits

0x2f0a,	// (0x0005e780) popup_midp_note_alarm_window_t5

0x000a,

0xf889,	// (0x0006b0ff) popup_midp_note_alarm_window_t_ParamLimits

0xf889,	// (0x0006b0ff) popup_midp_note_alarm_window_t

0x2fb6,	// (0x0005e82c) wait_bar_pane_cp1_ParamLimits

0x2fb6,	// (0x0005e82c) wait_bar_pane_cp1

0x7e64,	// (0x000636da) wait_anim_pane_copy1

0x7e64,	// (0x000636da) wait_border_pane_copy1

0x29bf,	// (0x0005e235) wait_border_pane_g1_copy1

0xdfa2,	// (0x00069818) form_field_popup_pane_g1

0x9d5f,	// (0x000655d5) form_field_popup_pane_t1_ParamLimits

0x8272,	// (0x00063ae8) input_focus_pane_cp7_ParamLimits

0x82a0,	// (0x00063b16) list_form_pane_ParamLimits

0xdfaa,	// (0x00069820) form_field_popup_wide_pane_g1

0xdfb2,	// (0x00069828) form_field_popup_wide_pane_t1_ParamLimits

0x8272,	// (0x00063ae8) input_focus_pane_cp8_ParamLimits

0x82ac,	// (0x00063b22) list_form_wide_pane_ParamLimits

0xc8f8,	// (0x0006816e) aid_size_cell_graphic_pane

0x9dde,	// (0x00065654) data_form_pane_t1_ParamLimits

0xb152,	// (0x000669c8) data_form_wide_pane_t1_ParamLimits

0xaee1,	// (0x00066757) bg_status_flat_pane

0x92a4,	// (0x00064b1a) title_pane_t1_ParamLimits

0x7e7a,	// (0x000636f0) title_pane_t2_ParamLimits

0x7ea0,	// (0x00063716) title_pane_t3_ParamLimits

0xf557,	// (0x0006adcd) title_pane_t_ParamLimits

0x863a,	// (0x00063eb0) level_1_signal_ParamLimits

0x8647,	// (0x00063ebd) level_2_signal_ParamLimits

0xbad2,	// (0x00067348) level_3_signal_ParamLimits

0xbadf,	// (0x00067355) level_4_signal_ParamLimits

0xbaec,	// (0x00067362) level_5_signal_ParamLimits

0xbaf9,	// (0x0006736f) level_6_signal_ParamLimits

0xbb06,	// (0x0006737c) level_7_signal_ParamLimits

0x863a,	// (0x00063eb0) level_1_battery_ParamLimits

0x8647,	// (0x00063ebd) level_2_battery_ParamLimits

0xbad2,	// (0x00067348) level_3_battery_ParamLimits

0xbadf,	// (0x00067355) level_4_battery_ParamLimits

0xbaec,	// (0x00067362) level_5_battery_ParamLimits

0xbaf9,	// (0x0006736f) level_6_battery_ParamLimits

0xbb06,	// (0x0006737c) level_7_battery_ParamLimits

0x2bce,	// (0x0005e444) bg_status_flat_pane_g1

0x2bd6,	// (0x0005e44c) bg_status_flat_pane_g2

0x2bde,	// (0x0005e454) bg_status_flat_pane_g3

0x2be6,	// (0x0005e45c) bg_status_flat_pane_g4

0x2bee,	// (0x0005e464) bg_status_flat_pane_g5

0x2bf6,	// (0x0005e46c) bg_status_flat_pane_g6

0x2bfe,	// (0x0005e474) bg_status_flat_pane_g7

0x9338,	// (0x00064bae) tabs_3_active_pane_t1_ParamLimits

0x9338,	// (0x00064bae) tabs_3_passive_pane_t1_ParamLimits

0x9352,	// (0x00064bc8) tabs_4_active_pane_t1_ParamLimits

0x9352,	// (0x00064bc8) tabs_4_1_passive_pane_t1_ParamLimits

0x9ee3,	// (0x00065759) tabs_2_active_pane_t1_ParamLimits

0x9ee3,	// (0x00065759) tabs_2_passive_pane_t1_ParamLimits

0x7eb2,	// (0x00063728) bg_active_tab_pane_cp4_ParamLimits

0x9ef5,	// (0x0006576b) tabs_2_long_active_pane_t1_ParamLimits

0x1e70,	// (0x0005d6e6) bg_passive_tab_pane_cp4_ParamLimits

0x07da,	// (0x0005c050) list_single_midp_graphic_pane_t1_ParamLimits

0x7eb2,	// (0x00063728) bg_active_tab_pane_cp5_ParamLimits

0x9f08,	// (0x0006577e) tabs_3_long_active_pane_t1_ParamLimits

0x1e70,	// (0x0005d6e6) bg_passive_tab_pane_cp5_ParamLimits

0x07da,	// (0x0005c050) list_single_midp_graphic_pane_t1

0xaee1,	// (0x00066757) bg_status_flat_pane_ParamLimits

0x202a,	// (0x0005d8a0) indicator_pane_cp2_ParamLimits

0x202a,	// (0x0005d8a0) indicator_pane_cp2

0xbe1a,	// (0x00067690) navi_pane_srt_ParamLimits

0xbe1a,	// (0x00067690) navi_pane_srt

0x2179,	// (0x0005d9ef) popup_clock_digital_analogue_window_cp1

0x7ef6,	// (0x0006376c) indicator_pane_t1

0xe1e4,	// (0x00069a5a) copy_highlight_pane

0xe1e4,	// (0x00069a5a) cursor_graphics_pane

0xe1e4,	// (0x00069a5a) graphic_within_text_pane

0xe1e4,	// (0x00069a5a) link_highlight_pane

0x33cd,	// (0x0005ec43) popup_preview_text_window_t5_ParamLimits

0x33cd,	// (0x0005ec43) popup_preview_text_window_t5

0xe24c,	// (0x00069ac2) cursor_digital_pane

0xe24c,	// (0x00069ac2) cursor_primary_pane

0xe25d,	// (0x00069ad3) cursor_primary_small_pane

0xe265,	// (0x00069adb) cursor_secondary_pane

0xe26d,	// (0x00069ae3) cursor_title_pane

0xe24c,	// (0x00069ac2) link_highlight_digital_pane

0xe254,	// (0x00069aca) link_highlight_primary_pane

0xe25d,	// (0x00069ad3) link_highlight_primary_small_pane

0xe265,	// (0x00069adb) link_highlight_secondary_pane

0xe26d,	// (0x00069ae3) link_highlight_title_pane

0xe24c,	// (0x00069ac2) copy_highlight_digital_pane

0xe24c,	// (0x00069ac2) copy_highlight_primary_pane

0xe25d,	// (0x00069ad3) copy_highlight_primary_small_pane

0xe265,	// (0x00069adb) copy_highlight_secondary_pane

0xe26d,	// (0x00069ae3) copy_highlight_title_pane

0xe265,	// (0x00069adb) graphic_text_digital_pane

0x2c6c,	// (0x0005e4e2) graphic_text_primary_pane

0x2c75,	// (0x0005e4eb) graphic_text_primary_small_pane

0xe25d,	// (0x00069ad3) graphic_text_secondary_pane

0xe24c,	// (0x00069ac2) graphic_text_title_pane

0xa3e5,	// (0x00065c5b) cursor_primary_pane_g1

0x2c5e,	// (0x0005e4d4) cursor_text_primary_t1

0xc302,	// (0x00067b78) cursor_primary_small_pane_g1

0x2c50,	// (0x0005e4c6) cursor_text_primary_small_t1

0xc2f8,	// (0x00067b6e) cursor_primary_small_pane_g1_copy1

0x2c38,	// (0x0005e4ae) cursor_text_primary_small_t1_copy1

0x2c16,	// (0x0005e48c) cursor_text_title_t1

0xc2ee,	// (0x00067b64) cursor_title_pane_g1

0xa3e5,	// (0x00065c5b) cursor_digital_pane_g1

0xe275,	// (0x00069aeb) cursor_text_digital_t1

0xe283,	// (0x00069af9) link_highlight_primary_pane_g1

0x2bbf,	// (0x0005e435) link_highlight_primary_pane_t1

0xe283,	// (0x00069af9) link_highlight_primary_small_pane_g1

0xe28b,	// (0x00069b01) link_highlight_primary_small_pane_t1

0xe283,	// (0x00069af9) link_highlight_secondary_pane_g1

0xe29a,	// (0x00069b10) link_highlight_secondary_pane_t1

0x2b24,	// (0x0005e39a) link_highlight_title_pane_g1

0x2b3b,	// (0x0005e3b1) link_highlight_title_pane_t1

0x2b24,	// (0x0005e39a) link_highlight_digital_pane_g1

0x2b2c,	// (0x0005e3a2) link_highlight_digital_pane_t1

0x29de,	// (0x0005e254) copy_highlight_primary_pane_g1

0x2a04,	// (0x0005e27a) copy_highlight_primary_pane_t1

0x29de,	// (0x0005e254) copy_highlight_primary_small_pane_g1

0x29f5,	// (0x0005e26b) copy_highlight_primary_small_pane_t1

0xe2a9,	// (0x00069b1f) copy_highlight_secondary_pane_g1

0xe2b1,	// (0x00069b27) copy_highlight_secondary_pane_t1

0x29de,	// (0x0005e254) copy_highlight_title_pane_g1

0x29e6,	// (0x0005e25c) copy_highlight_title_pane_t1

0x29de,	// (0x0005e254) copy_highlight_digital_pane_g1

0x3cc8,	// (0x0005f53e) copy_highlight_digital_pane_t1

0x3c1c,	// (0x0005f492) graphic_text_primary_pane_g1

0x3cac,	// (0x0005f522) graphic_text_primary_pane_t1

0x3cba,	// (0x0005f530) graphic_text_primary_pane_t2

0x0001,

0xf9b8,	// (0x0006b22e) graphic_text_primary_pane_t

0x3c88,	// (0x0005f4fe) graphic_text_primary_small_pane_g1

0x3c90,	// (0x0005f506) graphic_text_primary_small_pane_t1

0x3c9e,	// (0x0005f514) graphic_text_primary_small_pane_t2

0x0001,

0xf9b3,	// (0x0006b229) graphic_text_primary_small_pane_t

0x3c64,	// (0x0005f4da) graphic_text_secondary_pane_g1

0x3c6c,	// (0x0005f4e2) graphic_text_secondary_pane_t1

0x3c7a,	// (0x0005f4f0) graphic_text_secondary_pane_t2

0x0001,

0xf9ae,	// (0x0006b224) graphic_text_secondary_pane_t

0x3c40,	// (0x0005f4b6) graphic_text_title_pane_g1

0x3c48,	// (0x0005f4be) graphic_text_title_pane_t1

0x3c56,	// (0x0005f4cc) graphic_text_title_pane_t2

0x0001,

0xf9a9,	// (0x0006b21f) graphic_text_title_pane_t

0x3c1c,	// (0x0005f492) graphic_text_digital_pane_g1

0x3c24,	// (0x0005f49a) graphic_text_digital_pane_t1

0x3c32,	// (0x0005f4a8) graphic_text_digital_pane_t2

0x0001,

0xf9a4,	// (0x0006b21a) graphic_text_digital_pane_t

0x7eb2,	// (0x00063728) navi_icon_pane_srt_ParamLimits

0x7eb2,	// (0x00063728) navi_icon_pane_srt

0x7e64,	// (0x000636da) navi_midp_pane_srt

0x7e64,	// (0x000636da) navi_navi_pane_srt

0x7eb2,	// (0x00063728) navi_text_pane_srt_ParamLimits

0x7eb2,	// (0x00063728) navi_text_pane_srt

0x3be7,	// (0x0005f45d) navi_navi_icon_text_pane_srt

0x3bef,	// (0x0005f465) navi_navi_pane_srt_g1_ParamLimits

0x3bef,	// (0x0005f465) navi_navi_pane_srt_g1

0x3c01,	// (0x0005f477) navi_navi_pane_srt_g2_ParamLimits

0x3c01,	// (0x0005f477) navi_navi_pane_srt_g2

0x0001,

0xf99f,	// (0x0006b215) navi_navi_pane_srt_g_ParamLimits

0xf99f,	// (0x0006b215) navi_navi_pane_srt_g

0x3c13,	// (0x0005f489) navi_navi_tabs_pane_srt

0x3be7,	// (0x0005f45d) navi_navi_text_pane_srt

0x3be7,	// (0x0005f45d) navi_navi_volume_pane_srt

0x3bd8,	// (0x0005f44e) navi_navi_text_pane_srt_t1

0x0c19,	// (0x0005c48f) navi_navi_volume_pane_srt_g1

0x0c21,	// (0x0005c497) volume_small_pane_srt_ParamLimits

0x0c21,	// (0x0005c497) volume_small_pane_srt

0xf4a5,	// (0x0006ad1b) volume_small_pane_srt_g1_ParamLimits

0xf4a5,	// (0x0006ad1b) volume_small_pane_srt_g1

0xf4b5,	// (0x0006ad2b) volume_small_pane_srt_g2_ParamLimits

0xf4b5,	// (0x0006ad2b) volume_small_pane_srt_g2

0xf4c6,	// (0x0006ad3c) volume_small_pane_srt_g3_ParamLimits

0xf4c6,	// (0x0006ad3c) volume_small_pane_srt_g3

0xf4d7,	// (0x0006ad4d) volume_small_pane_srt_g4_ParamLimits

0xf4d7,	// (0x0006ad4d) volume_small_pane_srt_g4

0xf4e8,	// (0x0006ad5e) volume_small_pane_srt_g5_ParamLimits

0xf4e8,	// (0x0006ad5e) volume_small_pane_srt_g5

0xf4f9,	// (0x0006ad6f) volume_small_pane_srt_g6_ParamLimits

0xf4f9,	// (0x0006ad6f) volume_small_pane_srt_g6

0xf50a,	// (0x0006ad80) volume_small_pane_srt_g7_ParamLimits

0xf50a,	// (0x0006ad80) volume_small_pane_srt_g7

0xf51b,	// (0x0006ad91) volume_small_pane_srt_g8_ParamLimits

0xf51b,	// (0x0006ad91) volume_small_pane_srt_g8

0xf52c,	// (0x0006ada2) volume_small_pane_srt_g9_ParamLimits

0xf52c,	// (0x0006ada2) volume_small_pane_srt_g9

0xf53d,	// (0x0006adb3) volume_small_pane_srt_g10_ParamLimits

0xf53d,	// (0x0006adb3) volume_small_pane_srt_g10

0x0009,

0xf753,	// (0x0006afc9) volume_small_pane_srt_g_ParamLimits

0xf753,	// (0x0006afc9) volume_small_pane_srt_g

0x9639,	// (0x00064eaf) query_popup_data_pane_cp2

0x3bbe,	// (0x0005f434) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3bbe,	// (0x0005f434) navi_navi_icon_text_pane_srt_t1

0x2c6c,	// (0x0005e4e2) navi_tabs_2_long_pane_srt

0x2c6c,	// (0x0005e4e2) navi_tabs_2_pane_srt

0x2c6c,	// (0x0005e4e2) navi_tabs_3_long_pane_srt

0x2c6c,	// (0x0005e4e2) navi_tabs_3_pane_srt

0x2c6c,	// (0x0005e4e2) navi_tabs_4_pane_srt

0xb1c9,	// (0x00066a3f) tabs_2_active_pane_srt_ParamLimits

0xb1c9,	// (0x00066a3f) tabs_2_active_pane_srt

0xb1d9,	// (0x00066a4f) tabs_2_passive_pane_srt_ParamLimits

0xb1d9,	// (0x00066a4f) tabs_2_passive_pane_srt

0x2423,	// (0x0005dc99) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2423,	// (0x0005dc99) bg_passive_tab_pane_cp1_srt

0xc942,	// (0x000681b8) bg_passive_tab_pane_g1_cp1_srt

0xa250,	// (0x00065ac6) bg_passive_tab_pane_g2_cp1_srt

0xc94b,	// (0x000681c1) bg_passive_tab_pane_g3_cp1_srt

0x7fdc,	// (0x00063852) bg_active_tab_pane_cp1_srt_ParamLimits

0x7fdc,	// (0x00063852) bg_active_tab_pane_cp1_srt

0xc954,	// (0x000681ca) tabs_2_active_pane_srt_g1

0xc95c,	// (0x000681d2) tabs_2_active_pane_srt_t1_ParamLimits

0xc95c,	// (0x000681d2) tabs_2_active_pane_srt_t1

0xc942,	// (0x000681b8) bg_active_tab_pane_g1_cp1_srt

0xa250,	// (0x00065ac6) bg_active_tab_pane_g2_cp1_srt

0xc94b,	// (0x000681c1) bg_active_tab_pane_g3_cp1_srt

0xb196,	// (0x00066a0c) tabs_3_active_pane_srt_ParamLimits

0xb196,	// (0x00066a0c) tabs_3_active_pane_srt

0xb1a7,	// (0x00066a1d) tabs_3_passive_pane_cp_srt_ParamLimits

0xb1a7,	// (0x00066a1d) tabs_3_passive_pane_cp_srt

0xb1b8,	// (0x00066a2e) tabs_3_passive_pane_srt_ParamLimits

0xb1b8,	// (0x00066a2e) tabs_3_passive_pane_srt

0x2423,	// (0x0005dc99) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2423,	// (0x0005dc99) bg_passive_tab_pane_cp2_srt

0xa3ef,	// (0x00065c65) bg_passive_tab_pane_g1_cp2_srt

0xa250,	// (0x00065ac6) bg_passive_tab_pane_g2_cp2_srt

0xa3f8,	// (0x00065c6e) bg_passive_tab_pane_g3_cp2_srt

0x7fdc,	// (0x00063852) bg_active_tab_pane_cp2_srt_ParamLimits

0x7fdc,	// (0x00063852) bg_active_tab_pane_cp2_srt

0xc924,	// (0x0006819a) tabs_3_active_pane_srt_g1

0xc92c,	// (0x000681a2) tabs_3_active_pane_srt_t1_ParamLimits

0xc92c,	// (0x000681a2) tabs_3_active_pane_srt_t1

0xa3ef,	// (0x00065c65) bg_active_tab_pane_g1_cp2_srt

0xa250,	// (0x00065ac6) bg_active_tab_pane_g2_cp2_srt

0xa3f8,	// (0x00065c6e) bg_active_tab_pane_g3_cp2_srt

0x0b7e,	// (0x0005c3f4) tabs_4_active_pane_srt_ParamLimits

0x0b7e,	// (0x0005c3f4) tabs_4_active_pane_srt

0x0b90,	// (0x0005c406) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0b90,	// (0x0005c406) tabs_4_passive_pane_cp2_srt

0x016c,	// (0x0005b9e2) aid_size_cell_toolbar

0x376a,	// (0x0005efe0) main_idle_act_pane_ParamLimits

0xa85c,	// (0x000660d2) popup_large_graphic_colour_window_ParamLimits

0xad50,	// (0x000665c6) popup_toolbar_window_ParamLimits

0xad50,	// (0x000665c6) popup_toolbar_window

0x391e,	// (0x0005f194) list_single_graphic_2heading_pane_ParamLimits

0x391e,	// (0x0005f194) list_single_graphic_2heading_pane

0x8522,	// (0x00063d98) aid_size_cell_apps_grid_lsc_pane

0x8534,	// (0x00063daa) aid_size_cell_apps_grid_prt_pane

0x1e70,	// (0x0005d6e6) bg_wml_button_pane_cp1_ParamLimits

0x1e70,	// (0x0005d6e6) bg_wml_button_pane_cp1

0xc094,	// (0x0006790a) form_midp_field_text_pane_t1_ParamLimits

0x2423,	// (0x0005dc99) input_focus_pane_cp050_ParamLimits

0x2693,	// (0x0005df09) list_midp_form_text_pane_ParamLimits

0x2636,	// (0x0005deac) input_focus_pane_cp051_ParamLimits

0x264a,	// (0x0005dec0) list_midp_choice_pane_ParamLimits

0xbff9,	// (0x0006786f) list_single_2graphic_pane_cp3_ParamLimits

0xbff9,	// (0x0006786f) list_single_2graphic_pane_cp3

0xc00d,	// (0x00067883) list_single_midp_graphic_pane_ParamLimits

0xc00d,	// (0x00067883) list_single_midp_graphic_pane

0xe32a,	// (0x00069ba0) list_single_graphic_2heading_pane_g1_ParamLimits

0xe32a,	// (0x00069ba0) list_single_graphic_2heading_pane_g1

0xe336,	// (0x00069bac) list_single_graphic_2heading_pane_g4_ParamLimits

0xe336,	// (0x00069bac) list_single_graphic_2heading_pane_g4

0xe342,	// (0x00069bb8) list_single_graphic_2heading_pane_g5_ParamLimits

0xe342,	// (0x00069bb8) list_single_graphic_2heading_pane_g5

0x0002,

0xf7a6,	// (0x0006b01c) list_single_graphic_2heading_pane_g_ParamLimits

0xf7a6,	// (0x0006b01c) list_single_graphic_2heading_pane_g

0xe34e,	// (0x00069bc4) list_single_graphic_2heading_pane_t1_ParamLimits

0xe34e,	// (0x00069bc4) list_single_graphic_2heading_pane_t1

0xe362,	// (0x00069bd8) list_single_graphic_2heading_pane_t2_ParamLimits

0xe362,	// (0x00069bd8) list_single_graphic_2heading_pane_t2

0xe37c,	// (0x00069bf2) list_single_graphic_2heading_pane_t3_ParamLimits

0xe37c,	// (0x00069bf2) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ad,	// (0x0006b023) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ad,	// (0x0006b023) list_single_graphic_2heading_pane_t

0x22d5,	// (0x0005db4b) bg_popup_sub_pane_cp2

0x22ff,	// (0x0005db75) grid_toobar_pane

0x0749,	// (0x0005bfbf) cell_toolbar_pane_ParamLimits

0x0749,	// (0x0005bfbf) cell_toolbar_pane

0x233b,	// (0x0005dbb1) cell_toolbar_pane_g1_ParamLimits

0x233b,	// (0x0005dbb1) cell_toolbar_pane_g1

0xbfb9,	// (0x0006782f) cell_toolbar_pane_g2_ParamLimits

0xbfb9,	// (0x0006782f) cell_toolbar_pane_g2

0x0001,

0xf7b4,	// (0x0006b02a) cell_toolbar_pane_g_ParamLimits

0xf7b4,	// (0x0006b02a) cell_toolbar_pane_g

0x2371,	// (0x0005dbe7) grid_highlight_pane_cp2_ParamLimits

0x2371,	// (0x0005dbe7) grid_highlight_pane_cp2

0x238b,	// (0x0005dc01) toolbar_button_pane

0x2397,	// (0x0005dc0d) toolbar_button_pane_g1

0x239f,	// (0x0005dc15) toolbar_button_pane_g2

0x23a7,	// (0x0005dc1d) toolbar_button_pane_g3

0x23af,	// (0x0005dc25) toolbar_button_pane_g4

0x23b7,	// (0x0005dc2d) toolbar_button_pane_g5

0x23bf,	// (0x0005dc35) toolbar_button_pane_g6

0x23c7,	// (0x0005dc3d) toolbar_button_pane_g7

0x23cf,	// (0x0005dc45) toolbar_button_pane_g8

0x23d7,	// (0x0005dc4d) toolbar_button_pane_g9

0x0009,

0xf7b9,	// (0x0006b02f) toolbar_button_pane_g

0x0781,	// (0x0005bff7) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0781,	// (0x0005bff7) list_single_2graphic_pane_g1_cp3

0xafbe,	// (0x00066834) list_single_2graphic_pane_g2_cp3_ParamLimits

0xafbe,	// (0x00066834) list_single_2graphic_pane_g2_cp3

0x079e,	// (0x0005c014) list_single_2graphic_pane_g3_cp3

0x07a6,	// (0x0005c01c) list_single_2graphic_pane_g4_cp3_ParamLimits

0x07a6,	// (0x0005c01c) list_single_2graphic_pane_g4_cp3

0xafcf,	// (0x00066845) list_single_2graphic_pane_t1_cp3_ParamLimits

0xafcf,	// (0x00066845) list_single_2graphic_pane_t1_cp3

0x07ce,	// (0x0005c044) list_single_midp_graphic_pane_g2_ParamLimits

0x07ce,	// (0x0005c044) list_single_midp_graphic_pane_g2

0xe31a,	// (0x00069b90) aid_zoom_text_primary

0x0174,	// (0x0005b9ea) aid_zoom_text_secondary

0xa44f,	// (0x00065cc5) status_small_pane_g7_ParamLimits

0xa44f,	// (0x00065cc5) status_small_pane_g7

0xa472,	// (0x00065ce8) status_small_pane_t1_ParamLimits

0x9280,	// (0x00064af6) title_pane_g2

0x0003,

0xf54e,	// (0x0006adc4) title_pane_g

0x9693,	// (0x00064f09) aid_size_cell_colour_1_pane_ParamLimits

0x9693,	// (0x00064f09) aid_size_cell_colour_1_pane

0x96a7,	// (0x00064f1d) aid_size_cell_colour_2_pane_ParamLimits

0x96a7,	// (0x00064f1d) aid_size_cell_colour_2_pane

0x96bb,	// (0x00064f31) aid_size_cell_colour_3_pane_ParamLimits

0x96bb,	// (0x00064f31) aid_size_cell_colour_3_pane

0x96cf,	// (0x00064f45) aid_size_cell_colour_4_pane_ParamLimits

0x96cf,	// (0x00064f45) aid_size_cell_colour_4_pane

0xf162,	// (0x0006a9d8) title_pane_stacon_g1_ParamLimits

0xf162,	// (0x0006a9d8) title_pane_stacon_g1

0x2a5b,	// (0x0005e2d1) popup_note_wait_window_g3_ParamLimits

0x2a5b,	// (0x0005e2d1) popup_note_wait_window_g3

0x2ad1,	// (0x0005e347) popup_note_wait_window_t5_ParamLimits

0x2ad1,	// (0x0005e347) popup_note_wait_window_t5

0x7e64,	// (0x000636da) main_feb_china_hwr_fs_writing_pane

0xa6de,	// (0x00065f54) popup_feb_china_hwr_fs_window_ParamLimits

0xa6de,	// (0x00065f54) popup_feb_china_hwr_fs_window

0xafeb,	// (0x00066861) aid_size_cell_hwr_fs_ParamLimits

0xafeb,	// (0x00066861) aid_size_cell_hwr_fs

0x2423,	// (0x0005dc99) bg_popup_sub_pane_cp3_ParamLimits

0x2423,	// (0x0005dc99) bg_popup_sub_pane_cp3

0xb000,	// (0x00066876) grid_hwr_fs_pane_ParamLimits

0xb000,	// (0x00066876) grid_hwr_fs_pane

0x081d,	// (0x0005c093) linegrid_hwr_fs_pane_ParamLimits

0x081d,	// (0x0005c093) linegrid_hwr_fs_pane

0xb018,	// (0x0006688e) cell_hwr_fs_pane_ParamLimits

0xb018,	// (0x0006688e) cell_hwr_fs_pane

0x242f,	// (0x0005dca5) linegrid_hwr_fs_pane_g1_ParamLimits

0x242f,	// (0x0005dca5) linegrid_hwr_fs_pane_g1

0xbfcd,	// (0x00067843) linegrid_hwr_fs_pane_g2_ParamLimits

0xbfcd,	// (0x00067843) linegrid_hwr_fs_pane_g2

0x244d,	// (0x0005dcc3) linegrid_hwr_fs_pane_g3_ParamLimits

0x244d,	// (0x0005dcc3) linegrid_hwr_fs_pane_g3

0xb03e,	// (0x000668b4) linegrid_hwr_fs_pane_g4_ParamLimits

0xb03e,	// (0x000668b4) linegrid_hwr_fs_pane_g4

0x0869,	// (0x0005c0df) linegrid_hwr_fs_pane_g5_ParamLimits

0x0869,	// (0x0005c0df) linegrid_hwr_fs_pane_g5

0x0004,

0xf7df,	// (0x0006b055) linegrid_hwr_fs_pane_g_ParamLimits

0xf7df,	// (0x0006b055) linegrid_hwr_fs_pane_g

0x2459,	// (0x0005dccf) cell_hwr_fs_pane_g1_ParamLimits

0x2459,	// (0x0005dccf) cell_hwr_fs_pane_g1

0x220f,	// (0x0005da85) cell_hwr_fs_pane_g2_ParamLimits

0x220f,	// (0x0005da85) cell_hwr_fs_pane_g2

0xbfdf,	// (0x00067855) cell_hwr_fs_pane_g3_ParamLimits

0xbfdf,	// (0x00067855) cell_hwr_fs_pane_g3

0xbfec,	// (0x00067862) cell_hwr_fs_pane_g4_ParamLimits

0xbfec,	// (0x00067862) cell_hwr_fs_pane_g4

0x0003,

0xf7ea,	// (0x0006b060) cell_hwr_fs_pane_g_ParamLimits

0xf7ea,	// (0x0006b060) cell_hwr_fs_pane_g

0xb058,	// (0x000668ce) cell_hwr_fs_pane_t1

0x7e64,	// (0x000636da) grid_highlight_pane_cp6

0x7e64,	// (0x000636da) main_idle_act2_pane

0x8378,	// (0x00063bee) aid_inside_area_popup_secondary

0xc421,	// (0x00067c97) aid_inside_area_window_primary_ParamLimits

0xc421,	// (0x00067c97) aid_inside_area_window_primary

0xc97a,	// (0x000681f0) ai2_news_ticker_pane

0x3cdf,	// (0x0005f555) aid_size_cell_ai1_link_ParamLimits

0x3cdf,	// (0x0005f555) aid_size_cell_ai1_link

0xc982,	// (0x000681f8) popup_ai2_data_window_ParamLimits

0xc982,	// (0x000681f8) popup_ai2_data_window

0x3d0f,	// (0x0005f585) popup_ai2_link_window_ParamLimits

0x3d0f,	// (0x0005f585) popup_ai2_link_window

0x2423,	// (0x0005dc99) bg_popup_sub_pane_cp4_ParamLimits

0x2423,	// (0x0005dc99) bg_popup_sub_pane_cp4

0x3d23,	// (0x0005f599) grid_ai2_link_pane_ParamLimits

0x3d23,	// (0x0005f599) grid_ai2_link_pane

0x3d3a,	// (0x0005f5b0) popup_ai2_link_window_g1_ParamLimits

0x3d3a,	// (0x0005f5b0) popup_ai2_link_window_g1

0x3d46,	// (0x0005f5bc) popup_ai2_link_window_g2_ParamLimits

0x3d46,	// (0x0005f5bc) popup_ai2_link_window_g2

0x0001,

0xf9bd,	// (0x0006b233) popup_ai2_link_window_g_ParamLimits

0xf9bd,	// (0x0006b233) popup_ai2_link_window_g

0x3d55,	// (0x0005f5cb) ai2_mp_button_pane

0x3d5d,	// (0x0005f5d3) ai2_mp_volume_pane

0x2636,	// (0x0005deac) bg_popup_sub_pane_cp5_ParamLimits

0x2636,	// (0x0005deac) bg_popup_sub_pane_cp5

0x3d65,	// (0x0005f5db) heading_ai2_gene_pane_ParamLimits

0x3d65,	// (0x0005f5db) heading_ai2_gene_pane

0x3d71,	// (0x0005f5e7) list_ai2_gene_pane_ParamLimits

0x3d71,	// (0x0005f5e7) list_ai2_gene_pane

0x3db9,	// (0x0005f62f) cell_ai2_link_pane_ParamLimits

0x3db9,	// (0x0005f62f) cell_ai2_link_pane

0x3dcf,	// (0x0005f645) cell_ai2_link_pane_g1

0x7e64,	// (0x000636da) grid_highlight_pane_cp7

0x0c36,	// (0x0005c4ac) ai2_mp_volume_pane_g1

0x3e9f,	// (0x0005f715) ai2_mp_volume_pane_g2

0x3e14,	// (0x0005f68a) list_ai2_gene_pane_t1

0x3ea7,	// (0x0005f71d) ai2_mp_volume_pane_g3

0x0002,

0xf9d6,	// (0x0006b24c) ai2_mp_volume_pane_g

0xb1e9,	// (0x00066a5f) volume_small_pane_cp3

0x3eaf,	// (0x0005f725) aid_size_cell_ai2_button

0x3eb7,	// (0x0005f72d) grid_ai2_button_pane

0x3ec0,	// (0x0005f736) cell_ai2_button_pane_ParamLimits

0x3ec0,	// (0x0005f736) cell_ai2_button_pane

0x7e5a,	// (0x000636d0) cell_ai2_button_pane_g1

0x7e64,	// (0x000636da) grid_highlight_pane_cp8

0x3e5f,	// (0x0005f6d5) ai2_gene_pane_t1_ParamLimits

0x3e5f,	// (0x0005f6d5) ai2_gene_pane_t1

0xa640,	// (0x00065eb6) aid_height_parent_landscape

0xc66f,	// (0x00067ee5) aid_height_set_list

0x376a,	// (0x0005efe0) aid_size_parent

0xc8f8,	// (0x0006816e) aid_size_cell_graphic_pane_ParamLimits

0x3d81,	// (0x0005f5f7) popup_ai2_data_window_g1_ParamLimits

0x3d81,	// (0x0005f5f7) popup_ai2_data_window_g1

0x3d8d,	// (0x0005f603) ai2_news_ticker_pane_g1

0x3d95,	// (0x0005f60b) ai2_news_ticker_pane_g2

0x0001,

0xf9c2,	// (0x0006b238) ai2_news_ticker_pane_g

0x3d9d,	// (0x0005f613) ai2_news_ticker_pane_t1

0x3dab,	// (0x0005f621) ai2_news_ticker_pane_t2

0x0001,

0xf9c7,	// (0x0006b23d) ai2_news_ticker_pane_t

0x3dd8,	// (0x0005f64e) heading_ai2_gene_pane_g1

0x3de0,	// (0x0005f656) heading_ai2_gene_pane_t1_ParamLimits

0x3de0,	// (0x0005f656) heading_ai2_gene_pane_t1

0x3df5,	// (0x0005f66b) list_highlight_pane_cp6

0x3dfd,	// (0x0005f673) ai2_gene_pane_ParamLimits

0x3dfd,	// (0x0005f673) ai2_gene_pane

0x3e22,	// (0x0005f698) list_ai2_gene_pane_t2

0x0001,

0xf9cc,	// (0x0006b242) list_ai2_gene_pane_t

0x3e30,	// (0x0005f6a6) list_highlight_pane_cp8_ParamLimits

0x3e30,	// (0x0005f6a6) list_highlight_pane_cp8

0x3e41,	// (0x0005f6b7) ai2_gene_pane_g1_ParamLimits

0x3e41,	// (0x0005f6b7) ai2_gene_pane_g1

0x3e53,	// (0x0005f6c9) ai2_gene_pane_g2_ParamLimits

0x3e53,	// (0x0005f6c9) ai2_gene_pane_g2

0x0001,

0xf9d1,	// (0x0006b247) ai2_gene_pane_g_ParamLimits

0xf9d1,	// (0x0006b247) ai2_gene_pane_g

0x8211,	// (0x00063a87) scroll_pane_cp12

0xa5fd,	// (0x00065e73) control_pane_t3_ParamLimits

0xa5fd,	// (0x00065e73) control_pane_t3

0xa463,	// (0x00065cd9) status_small_pane_g8_ParamLimits

0xa463,	// (0x00065cd9) status_small_pane_g8

0xa7a1,	// (0x00066017) popup_find_window_ParamLimits

0xaa54,	// (0x000662ca) popup_note_image_window_ParamLimits

0xded3,	// (0x00069749) list_double2_graphic_pane_vc_g1_ParamLimits

0xded3,	// (0x00069749) list_double2_graphic_pane_vc_g1

0xdedf,	// (0x00069755) list_double2_graphic_pane_vc_g2_ParamLimits

0xdedf,	// (0x00069755) list_double2_graphic_pane_vc_g2

0xdeeb,	// (0x00069761) list_double2_graphic_pane_vc_g3_ParamLimits

0xdeeb,	// (0x00069761) list_double2_graphic_pane_vc_g3

0x0002,

0xf5c1,	// (0x0006ae37) list_double2_graphic_pane_vc_g_ParamLimits

0xf5c1,	// (0x0006ae37) list_double2_graphic_pane_vc_g

0xdef7,	// (0x0006976d) list_double2_graphic_pane_vc_t1_ParamLimits

0xdef7,	// (0x0006976d) list_double2_graphic_pane_vc_t1

0xdedf,	// (0x00069755) list_single_heading_pane_vc_g1_ParamLimits

0xdedf,	// (0x00069755) list_single_heading_pane_vc_g1

0xdeeb,	// (0x00069761) list_single_heading_pane_vc_g2_ParamLimits

0xdeeb,	// (0x00069761) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0006ae48) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0006ae48) list_single_heading_pane_vc_g

0xe394,	// (0x00069c0a) list_single_heading_pane_vc_t1_ParamLimits

0xe394,	// (0x00069c0a) list_single_heading_pane_vc_t1

0xe3aa,	// (0x00069c20) list_single_heading_pane_vc_t2_ParamLimits

0xe3aa,	// (0x00069c20) list_single_heading_pane_vc_t2

0x0001,

0xf7ce,	// (0x0006b044) list_single_heading_pane_vc_t_ParamLimits

0xf7ce,	// (0x0006b044) list_single_heading_pane_vc_t

0x23df,	// (0x0005dc55) list_setting_number_pane_vc_g1_ParamLimits

0x23df,	// (0x0005dc55) list_setting_number_pane_vc_g1

0x23eb,	// (0x0005dc61) list_setting_number_pane_vc_g2_ParamLimits

0x23eb,	// (0x0005dc61) list_setting_number_pane_vc_g2

0x0001,

0xf7d3,	// (0x0006b049) list_setting_number_pane_vc_g_ParamLimits

0xf7d3,	// (0x0006b049) list_setting_number_pane_vc_g

0xe3bc,	// (0x00069c32) list_setting_number_pane_vc_t1_ParamLimits

0xe3bc,	// (0x00069c32) list_setting_number_pane_vc_t1

0xe3d0,	// (0x00069c46) list_setting_number_pane_vc_t2_ParamLimits

0xe3d0,	// (0x00069c46) list_setting_number_pane_vc_t2

0xe3ec,	// (0x00069c62) list_setting_number_pane_vc_t3_ParamLimits

0xe3ec,	// (0x00069c62) list_setting_number_pane_vc_t3

0x0002,

0xf7d8,	// (0x0006b04e) list_setting_number_pane_vc_t_ParamLimits

0xf7d8,	// (0x0006b04e) list_setting_number_pane_vc_t

0xe416,	// (0x00069c8c) set_value_pane_vc_ParamLimits

0xe416,	// (0x00069c8c) set_value_pane_vc

0x391e,	// (0x0005f194) list_double2_graphic_pane_vc_ParamLimits

0x391e,	// (0x0005f194) list_double2_graphic_pane_vc

0x391e,	// (0x0005f194) list_double2_large_graphic_pane_vc_ParamLimits

0x391e,	// (0x0005f194) list_double2_large_graphic_pane_vc

0x391e,	// (0x0005f194) list_double2_pane_vc_ParamLimits

0x391e,	// (0x0005f194) list_double2_pane_vc

0x391e,	// (0x0005f194) list_double_graphic_heading_pane_vc_ParamLimits

0x391e,	// (0x0005f194) list_double_graphic_heading_pane_vc

0x391e,	// (0x0005f194) list_double_graphic_pane_vc_ParamLimits

0x391e,	// (0x0005f194) list_double_graphic_pane_vc

0x391e,	// (0x0005f194) list_double_heading_pane_vc_ParamLimits

0x391e,	// (0x0005f194) list_double_heading_pane_vc

0x3930,	// (0x0005f1a6) list_double_large_graphic_pane_vc_ParamLimits

0x3930,	// (0x0005f1a6) list_double_large_graphic_pane_vc

0x391e,	// (0x0005f194) list_double_number_pane_vc_ParamLimits

0x391e,	// (0x0005f194) list_double_number_pane_vc

0x391e,	// (0x0005f194) list_double_pane_vc_ParamLimits

0x391e,	// (0x0005f194) list_double_pane_vc

0x391e,	// (0x0005f194) list_double_time_pane_vc_ParamLimits

0x391e,	// (0x0005f194) list_double_time_pane_vc

0x391e,	// (0x0005f194) list_setting_number_pane_vc_ParamLimits

0x391e,	// (0x0005f194) list_setting_number_pane_vc

0x391e,	// (0x0005f194) list_setting_pane_vc_ParamLimits

0x391e,	// (0x0005f194) list_setting_pane_vc

0x391e,	// (0x0005f194) list_single_graphic_heading_pane_vc_ParamLimits

0x391e,	// (0x0005f194) list_single_graphic_heading_pane_vc

0x391e,	// (0x0005f194) list_single_heading_pane_vc_ParamLimits

0x391e,	// (0x0005f194) list_single_heading_pane_vc

0x391e,	// (0x0005f194) list_single_number_heading_pane_vc_ParamLimits

0x391e,	// (0x0005f194) list_single_number_heading_pane_vc

0xe435,	// (0x00069cab) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe435,	// (0x00069cab) list_double_graphic_heading_pane_vc_g1

0xdedf,	// (0x00069755) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xdedf,	// (0x00069755) list_double_graphic_heading_pane_vc_g2

0xdeeb,	// (0x00069761) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xdeeb,	// (0x00069761) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9dd,	// (0x0006b253) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9dd,	// (0x0006b253) list_double_graphic_heading_pane_vc_g

0xe441,	// (0x00069cb7) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xe441,	// (0x00069cb7) list_double_graphic_heading_pane_vc_t1

0xe455,	// (0x00069ccb) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xe455,	// (0x00069ccb) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9e4,	// (0x0006b25a) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9e4,	// (0x0006b25a) list_double_graphic_heading_pane_vc_t

0x23df,	// (0x0005dc55) list_setting_pane_vc_g1_ParamLimits

0x23df,	// (0x0005dc55) list_setting_pane_vc_g1

0x23eb,	// (0x0005dc61) list_setting_pane_vc_g2_ParamLimits

0x23eb,	// (0x0005dc61) list_setting_pane_vc_g2

0x0001,

0xf7d3,	// (0x0006b049) list_setting_pane_vc_g_ParamLimits

0xf7d3,	// (0x0006b049) list_setting_pane_vc_g

0xe46d,	// (0x00069ce3) list_setting_pane_vc_t1_ParamLimits

0xe46d,	// (0x00069ce3) list_setting_pane_vc_t1

0xe489,	// (0x00069cff) list_setting_pane_vc_t2_ParamLimits

0xe489,	// (0x00069cff) list_setting_pane_vc_t2

0x0001,

0xfa27,	// (0x0006b29d) list_setting_pane_vc_t_ParamLimits

0xfa27,	// (0x0006b29d) list_setting_pane_vc_t

0xe416,	// (0x00069c8c) set_value_pane_cp_vc_ParamLimits

0xe416,	// (0x00069c8c) set_value_pane_cp_vc

0xdedf,	// (0x00069755) list_single_number_heading_pane_vc_g1_ParamLimits

0xdedf,	// (0x00069755) list_single_number_heading_pane_vc_g1

0xdeeb,	// (0x00069761) list_single_number_heading_pane_vc_g2_ParamLimits

0xdeeb,	// (0x00069761) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0006ae48) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0006ae48) list_single_number_heading_pane_vc_g

0xe4a3,	// (0x00069d19) list_single_number_heading_pane_vc_t1_ParamLimits

0xe4a3,	// (0x00069d19) list_single_number_heading_pane_vc_t1

0xe4b9,	// (0x00069d2f) list_single_number_heading_pane_vc_t2_ParamLimits

0xe4b9,	// (0x00069d2f) list_single_number_heading_pane_vc_t2

0xe4cb,	// (0x00069d41) list_single_number_heading_pane_vc_t3_ParamLimits

0xe4cb,	// (0x00069d41) list_single_number_heading_pane_vc_t3

0x0002,

0xfa2c,	// (0x0006b2a2) list_single_number_heading_pane_vc_t_ParamLimits

0xfa2c,	// (0x0006b2a2) list_single_number_heading_pane_vc_t

0xe4dd,	// (0x00069d53) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xe4dd,	// (0x00069d53) list_single_graphic_heading_pane_vc_g1

0xdedf,	// (0x00069755) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xdedf,	// (0x00069755) list_single_graphic_heading_pane_vc_g4

0xdeeb,	// (0x00069761) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xdeeb,	// (0x00069761) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa33,	// (0x0006b2a9) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa33,	// (0x0006b2a9) list_single_graphic_heading_pane_vc_g

0xe394,	// (0x00069c0a) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe394,	// (0x00069c0a) list_single_graphic_heading_pane_vc_t1

0xe4e9,	// (0x00069d5f) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xe4e9,	// (0x00069d5f) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3a,	// (0x0006b2b0) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3a,	// (0x0006b2b0) list_single_graphic_heading_pane_vc_t

0xdedf,	// (0x00069755) list_double2_pane_vc_g1_ParamLimits

0xdedf,	// (0x00069755) list_double2_pane_vc_g1

0xdeeb,	// (0x00069761) list_double2_pane_vc_g2_ParamLimits

0xdeeb,	// (0x00069761) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x0006ae48) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x0006ae48) list_double2_pane_vc_g

0xe4fb,	// (0x00069d71) list_double2_pane_vc_t1_ParamLimits

0xe4fb,	// (0x00069d71) list_double2_pane_vc_t1

0x3f37,	// (0x0005f7ad) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3f37,	// (0x0005f7ad) list_double2_large_graphic_pane_vc_g1

0xdedf,	// (0x00069755) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xdedf,	// (0x00069755) list_double2_large_graphic_pane_vc_g2

0xdeeb,	// (0x00069761) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xdeeb,	// (0x00069761) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x0006ae60) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x0006ae60) list_double2_large_graphic_pane_vc_g

0xdef7,	// (0x0006976d) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xdef7,	// (0x0006976d) list_double2_large_graphic_pane_vc_t1

0x3f43,	// (0x0005f7b9) list_double_time_pane_vc_g1_ParamLimits

0x3f43,	// (0x0005f7b9) list_double_time_pane_vc_g1

0x3f4f,	// (0x0005f7c5) list_double_time_pane_vc_g2_ParamLimits

0x3f4f,	// (0x0005f7c5) list_double_time_pane_vc_g2

0x0001,

0xfa3f,	// (0x0006b2b5) list_double_time_pane_vc_g_ParamLimits

0xfa3f,	// (0x0006b2b5) list_double_time_pane_vc_g

0xe513,	// (0x00069d89) list_double_time_pane_vc_t1_ParamLimits

0xe513,	// (0x00069d89) list_double_time_pane_vc_t1

0xe537,	// (0x00069dad) list_double_time_pane_vc_t2_ParamLimits

0xe537,	// (0x00069dad) list_double_time_pane_vc_t2

0xe586,	// (0x00069dfc) list_double_time_pane_vc_t3_ParamLimits

0xe586,	// (0x00069dfc) list_double_time_pane_vc_t3

0xe598,	// (0x00069e0e) list_double_time_pane_vc_t4_ParamLimits

0xe598,	// (0x00069e0e) list_double_time_pane_vc_t4

0x0003,

0xfa44,	// (0x0006b2ba) list_double_time_pane_vc_t_ParamLimits

0xfa44,	// (0x0006b2ba) list_double_time_pane_vc_t

0xdedf,	// (0x00069755) list_double_pane_vc_g1_ParamLimits

0xdedf,	// (0x00069755) list_double_pane_vc_g1

0xdeeb,	// (0x00069761) list_double_pane_vc_g2_ParamLimits

0xdeeb,	// (0x00069761) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x0006ae48) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x0006ae48) list_double_pane_vc_g

0xe5ac,	// (0x00069e22) list_double_pane_vc_t1_ParamLimits

0xe5ac,	// (0x00069e22) list_double_pane_vc_t1

0xe5c0,	// (0x00069e36) list_double_pane_vc_t2_ParamLimits

0xe5c0,	// (0x00069e36) list_double_pane_vc_t2

0x0001,

0xfa4d,	// (0x0006b2c3) list_double_pane_vc_t_ParamLimits

0xfa4d,	// (0x0006b2c3) list_double_pane_vc_t

0xdedf,	// (0x00069755) list_double_number_pane_vc_g1_ParamLimits

0xdedf,	// (0x00069755) list_double_number_pane_vc_g1

0xdeeb,	// (0x00069761) list_double_number_pane_vc_g2_ParamLimits

0xdeeb,	// (0x00069761) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x0006ae48) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x0006ae48) list_double_number_pane_vc_g

0xe5d8,	// (0x00069e4e) list_double_number_pane_vc_t1_ParamLimits

0xe5d8,	// (0x00069e4e) list_double_number_pane_vc_t1

0xe5ac,	// (0x00069e22) list_double_number_pane_vc_t2_ParamLimits

0xe5ac,	// (0x00069e22) list_double_number_pane_vc_t2

0xe5ea,	// (0x00069e60) list_double_number_pane_vc_t3_ParamLimits

0xe5ea,	// (0x00069e60) list_double_number_pane_vc_t3

0x0002,

0xfa52,	// (0x0006b2c8) list_double_number_pane_vc_t_ParamLimits

0xfa52,	// (0x0006b2c8) list_double_number_pane_vc_t

0x3f5b,	// (0x0005f7d1) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3f5b,	// (0x0005f7d1) list_double_large_graphic_pane_vc_g1

0x3f7d,	// (0x0005f7f3) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3f7d,	// (0x0005f7f3) list_double_large_graphic_pane_vc_g2

0x3f91,	// (0x0005f807) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3f91,	// (0x0005f807) list_double_large_graphic_pane_vc_g3

0xe602,	// (0x00069e78) list_double_large_graphic_pane_vc_g4_ParamLimits

0xe602,	// (0x00069e78) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa59,	// (0x0006b2cf) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa59,	// (0x0006b2cf) list_double_large_graphic_pane_vc_g

0xe60e,	// (0x00069e84) list_double_large_graphic_pane_vc_t1_ParamLimits

0xe60e,	// (0x00069e84) list_double_large_graphic_pane_vc_t1

0xe62a,	// (0x00069ea0) list_double_large_graphic_pane_vc_t2_ParamLimits

0xe62a,	// (0x00069ea0) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa62,	// (0x0006b2d8) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa62,	// (0x0006b2d8) list_double_large_graphic_pane_vc_t

0xdedf,	// (0x00069755) list_double_heading_pane_vc_g1_ParamLimits

0xdedf,	// (0x00069755) list_double_heading_pane_vc_g1

0xdeeb,	// (0x00069761) list_double_heading_pane_vc_g2_ParamLimits

0xdeeb,	// (0x00069761) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0006ae48) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0006ae48) list_double_heading_pane_vc_g

0xe64c,	// (0x00069ec2) list_double_heading_pane_vc_t1_ParamLimits

0xe64c,	// (0x00069ec2) list_double_heading_pane_vc_t1

0xe660,	// (0x00069ed6) list_double_heading_pane_vc_t2_ParamLimits

0xe660,	// (0x00069ed6) list_double_heading_pane_vc_t2

0x0001,

0xfa67,	// (0x0006b2dd) list_double_heading_pane_vc_t_ParamLimits

0xfa67,	// (0x0006b2dd) list_double_heading_pane_vc_t

0xe678,	// (0x00069eee) list_double_graphic_pane_vc_g1_ParamLimits

0xe678,	// (0x00069eee) list_double_graphic_pane_vc_g1

0x3fa0,	// (0x0005f816) list_double_graphic_pane_vc_g2_ParamLimits

0x3fa0,	// (0x0005f816) list_double_graphic_pane_vc_g2

0xdedf,	// (0x00069755) list_double_graphic_pane_vc_g3_ParamLimits

0xdedf,	// (0x00069755) list_double_graphic_pane_vc_g3

0x0003,

0xfa6c,	// (0x0006b2e2) list_double_graphic_pane_vc_g_ParamLimits

0xfa6c,	// (0x0006b2e2) list_double_graphic_pane_vc_g

0xe68b,	// (0x00069f01) list_double_graphic_pane_vc_t1_ParamLimits

0xe68b,	// (0x00069f01) list_double_graphic_pane_vc_t1

0xe6aa,	// (0x00069f20) list_double_graphic_pane_vc_t2_ParamLimits

0xe6aa,	// (0x00069f20) list_double_graphic_pane_vc_t2

0x0001,

0xfa75,	// (0x0006b2eb) list_double_graphic_pane_vc_t_ParamLimits

0xfa75,	// (0x0006b2eb) list_double_graphic_pane_vc_t

0xdd59,	// (0x000695cf) aid_size_cell_fastswap

0x9047,	// (0x000648bd) aid_size_cell_touch_ParamLimits

0x9047,	// (0x000648bd) aid_size_cell_touch

0xf107,	// (0x0006a97d) popup_fast_swap_wide_window_ParamLimits

0xf107,	// (0x0006a97d) popup_fast_swap_wide_window

0x9217,	// (0x00064a8d) touch_pane_ParamLimits

0x9217,	// (0x00064a8d) touch_pane

0x825e,	// (0x00063ad4) button_value_adjust_pane_cp2

0xdf48,	// (0x000697be) button_value_adjust_pane_cp4

0xdf50,	// (0x000697c6) form_field_data_pane_cp2

0x9cef,	// (0x00065565) form_field_data_wide_pane_cp2

0x8559,	// (0x00063dcf) bg_scroll_pane_ParamLimits

0xa00a,	// (0x00065880) scroll_handle_pane_ParamLimits

0xf2bb,	// (0x0006ab31) scroll_sc2_down_pane_ParamLimits

0xf2bb,	// (0x0006ab31) scroll_sc2_down_pane

0x858a,	// (0x00063e00) scroll_sc2_up_pane_ParamLimits

0x858a,	// (0x00063e00) scroll_sc2_up_pane

0xcac9,	// (0x0006833f) grid_wheel_folder_pane_g1_ParamLimits

0xcac9,	// (0x0006833f) grid_wheel_folder_pane_g1

0xf43d,	// (0x0006acb3) clock_nsta_pane_cp2_ParamLimits

0xf43d,	// (0x0006acb3) clock_nsta_pane_cp2

0xa329,	// (0x00065b9f) listscroll_midp_pane_ParamLimits

0xa335,	// (0x00065bab) midp_canvas_pane

0x1e48,	// (0x0005d6be) nsta_clock_indic_pane

0x1e7c,	// (0x0005d6f2) listscroll_form_pane_vc

0x1e84,	// (0x0005d6fa) listscroll_set_pane_vc_ParamLimits

0x1e84,	// (0x0005d6fa) listscroll_set_pane_vc

0xaf09,	// (0x0006677f) clock_nsta_pane

0xaf33,	// (0x000667a9) indicator_nsta_pane

0x22d5,	// (0x0005db4b) bg_popup_sub_pane_cp2_ParamLimits

0x22e9,	// (0x0005db5f) find_pane_cp2_ParamLimits

0x22e9,	// (0x0005db5f) find_pane_cp2

0x22ff,	// (0x0005db75) grid_toobar_pane_ParamLimits

0x23f7,	// (0x0005dc6d) list_form_gen_pane_vc_ParamLimits

0x23f7,	// (0x0005dc6d) list_form_gen_pane_vc

0x240d,	// (0x0005dc83) scroll_pane_cp8_vc_ParamLimits

0x240d,	// (0x0005dc83) scroll_pane_cp8_vc

0x2489,	// (0x0005dcff) data_form_wide_pane_vc_ParamLimits

0x2489,	// (0x0005dcff) data_form_wide_pane_vc

0x2495,	// (0x0005dd0b) form_field_data_wide_pane_vc_g1

0x249d,	// (0x0005dd13) form_field_data_wide_pane_vc_t1_ParamLimits

0x249d,	// (0x0005dd13) form_field_data_wide_pane_vc_t1

0x8272,	// (0x00063ae8) input_focus_pane_cp6_vc_ParamLimits

0x8272,	// (0x00063ae8) input_focus_pane_cp6_vc

0x27ea,	// (0x0005e060) list_midp_pane_ParamLimits

0x3b64,	// (0x0005f3da) scroll_pane_cp16_ParamLimits

0x3b64,	// (0x0005f3da) scroll_pane_cp16

0x2838,	// (0x0005e0ae) button_value_adjust_pane_ParamLimits

0x2838,	// (0x0005e0ae) button_value_adjust_pane

0xc680,	// (0x00067ef6) button_value_adjust_pane_cp6_ParamLimits

0xc680,	// (0x00067ef6) button_value_adjust_pane_cp6

0xc79a,	// (0x00068010) settings_code_pane_cp_ParamLimits

0xc79a,	// (0x00068010) settings_code_pane_cp

0x7e5a,	// (0x000636d0) cell_touch_pane_g1

0x7e5a,	// (0x000636d0) cell_touch_pane_g2

0x0001,

0xf6f9,	// (0x0006af6f) cell_touch_pane_g

0xc998,	// (0x0006820e) cell_touch_pane_cp_ParamLimits

0xc998,	// (0x0006820e) cell_touch_pane_cp

0xc9b4,	// (0x0006822a) cell_touch_pane_ParamLimits

0xc9b4,	// (0x0006822a) cell_touch_pane

0x7e5a,	// (0x000636d0) scroll_sc2_down_pane_g1

0x7e5a,	// (0x000636d0) scroll_sc2_up_pane_g1

0x7e64,	// (0x000636da) bg_set_opt_pane_cp4_vc

0x3ef4,	// (0x0005f76a) list_set_graphic_pane_vc_g1_ParamLimits

0x3ef4,	// (0x0005f76a) list_set_graphic_pane_vc_g1

0x3f00,	// (0x0005f776) list_set_graphic_pane_vc_g2_ParamLimits

0x3f00,	// (0x0005f776) list_set_graphic_pane_vc_g2

0x0001,

0xf9e9,	// (0x0006b25f) list_set_graphic_pane_vc_g_ParamLimits

0xf9e9,	// (0x0006b25f) list_set_graphic_pane_vc_g

0x3f0c,	// (0x0005f782) text_primary_small_cp13_vc_ParamLimits

0x3f0c,	// (0x0005f782) text_primary_small_cp13_vc

0x3f24,	// (0x0005f79a) list_set_graphic_pane_vc_ParamLimits

0x3f24,	// (0x0005f79a) list_set_graphic_pane_vc

0x7e64,	// (0x000636da) input_focus_pane_cp2_vc

0x7e5a,	// (0x000636d0) setting_code_pane_vc_g1

0x7ec9,	// (0x0006373f) setting_code_pane_vc_t1

0x409e,	// (0x0005f914) set_text_pane_vc_t1_ParamLimits

0x409e,	// (0x0005f914) set_text_pane_vc_t1

0x7e64,	// (0x000636da) input_focus_pane_cp1_vc

0x40ba,	// (0x0005f930) list_set_text_pane_vc

0x7e5a,	// (0x000636d0) setting_text_pane_vc_g1

0x7e64,	// (0x000636da) bg_set_opt_pane_cp2_vc

0x7ec0,	// (0x00063736) setting_slider_graphic_pane_vc_g1

0x40c4,	// (0x0005f93a) setting_slider_graphic_pane_vc_t1

0x40d4,	// (0x0005f94a) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ee,	// (0x0006b264) setting_slider_graphic_pane_vc_t

0x40e4,	// (0x0005f95a) slider_set_pane_cp_vc

0x40ec,	// (0x0005f962) slider_set_pane_vc_g1

0x40f5,	// (0x0005f96b) slider_set_pane_vc_g2

0x0006,

0xf9f3,	// (0x0006b269) slider_set_pane_vc_g

0x82ca,	// (0x00063b40) set_opt_bg_pane_g1_copy1

0x82d2,	// (0x00063b48) set_opt_bg_pane_g2_copy1

0x4121,	// (0x0005f997) set_opt_bg_pane_g3_copy1

0x82e2,	// (0x00063b58) set_opt_bg_pane_g4_copy1

0x82ea,	// (0x00063b60) set_opt_bg_pane_g5_copy1

0x82f2,	// (0x00063b68) set_opt_bg_pane_g6_copy1

0x4129,	// (0x0005f99f) set_opt_bg_pane_g7_copy1

0x4131,	// (0x0005f9a7) set_opt_bg_pane_g8_copy1

0x4139,	// (0x0005f9af) set_opt_bg_pane_g9_copy1

0x7e64,	// (0x000636da) bg_set_opt_pane_cp_vc

0x4141,	// (0x0005f9b7) setting_slider_pane_vc_t1

0x4150,	// (0x0005f9c6) setting_slider_pane_vc_t2

0x4160,	// (0x0005f9d6) setting_slider_pane_vc_t3

0x0002,

0xfa02,	// (0x0006b278) setting_slider_pane_vc_t

0x4170,	// (0x0005f9e6) slider_set_pane_vc

0x08bb,	// (0x0005c131) volume_set_pane_vc_g1

0x0c47,	// (0x0005c4bd) volume_set_pane_vc_g2

0x0c50,	// (0x0005c4c6) volume_set_pane_vc_g3

0x0c59,	// (0x0005c4cf) volume_set_pane_vc_g4

0x0c62,	// (0x0005c4d8) volume_set_pane_vc_g5

0x0c6b,	// (0x0005c4e1) volume_set_pane_vc_g6

0x0c74,	// (0x0005c4ea) volume_set_pane_vc_g7

0x0c7d,	// (0x0005c4f3) volume_set_pane_vc_g8

0x0c86,	// (0x0005c4fc) volume_set_pane_vc_g9

0x0c8f,	// (0x0005c505) volume_set_pane_vc_g10

0x0009,

0xfa09,	// (0x0006b27f) volume_set_pane_vc_g

0x4178,	// (0x0005f9ee) volume_set_pane_vc

0x4180,	// (0x0005f9f6) button_value_adjust_pane_cp1_vc

0x418a,	// (0x0005fa00) list_highlight_pane_cp2_vc

0x4193,	// (0x0005fa09) list_set_pane_vc_ParamLimits

0x4193,	// (0x0005fa09) list_set_pane_vc

0x41f1,	// (0x0005fa67) main_pane_set_vc_t1_ParamLimits

0x41f1,	// (0x0005fa67) main_pane_set_vc_t1

0x4206,	// (0x0005fa7c) main_pane_set_vc_t2_ParamLimits

0x4206,	// (0x0005fa7c) main_pane_set_vc_t2

0x4218,	// (0x0005fa8e) main_pane_set_vc_t3_ParamLimits

0x4218,	// (0x0005fa8e) main_pane_set_vc_t3

0x422a,	// (0x0005faa0) main_pane_set_vc_t4_ParamLimits

0x422a,	// (0x0005faa0) main_pane_set_vc_t4

0x0003,

0xfa1e,	// (0x0006b294) main_pane_set_vc_t_ParamLimits

0xfa1e,	// (0x0006b294) main_pane_set_vc_t

0x423c,	// (0x0005fab2) setting_code_pane_vc_ParamLimits

0x423c,	// (0x0005fab2) setting_code_pane_vc

0x424b,	// (0x0005fac1) setting_slider_graphic_pane_vc

0x424b,	// (0x0005fac1) setting_slider_pane_vc

0x424b,	// (0x0005fac1) setting_text_pane_vc

0x424b,	// (0x0005fac1) setting_volume_pane_vc

0x4253,	// (0x0005fac9) scroll_pane_cp121_vc

0x824c,	// (0x00063ac2) set_content_pane_vc

0x425b,	// (0x0005fad1) button_value_adjust_pane_g1

0x4264,	// (0x0005fada) button_value_adjust_pane_g2

0x0001,

0xfa7a,	// (0x0006b2f0) button_value_adjust_pane_g

0x426d,	// (0x0005fae3) form_field_slider_wide_pane_vc_t1_ParamLimits

0x426d,	// (0x0005fae3) form_field_slider_wide_pane_vc_t1

0x4281,	// (0x0005faf7) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4281,	// (0x0005faf7) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7f,	// (0x0006b2f5) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7f,	// (0x0006b2f5) form_field_slider_wide_pane_vc_t

0x7fdc,	// (0x00063852) input_focus_pane_cp10_vc_ParamLimits

0x7fdc,	// (0x00063852) input_focus_pane_cp10_vc

0x42af,	// (0x0005fb25) slider_cont_pane_cp1_vc_ParamLimits

0x42af,	// (0x0005fb25) slider_cont_pane_cp1_vc

0x42c1,	// (0x0005fb37) slider_form_pane_g1_cp2

0x40f5,	// (0x0005f96b) slider_form_pane_g2_cp2

0x42ee,	// (0x0005fb64) form_field_slider_pane_vc_t3

0x42fc,	// (0x0005fb72) form_field_slider_pane_vc_t4

0x430a,	// (0x0005fb80) slider_form_pane_vc_ParamLimits

0x430a,	// (0x0005fb80) slider_form_pane_vc

0x4317,	// (0x0005fb8d) form_field_slider_pane_vc_t1_ParamLimits

0x4317,	// (0x0005fb8d) form_field_slider_pane_vc_t1

0x4281,	// (0x0005faf7) form_field_slider_pane_vc_t2_ParamLimits

0x4281,	// (0x0005faf7) form_field_slider_pane_vc_t2

0x0001,

0xfa91,	// (0x0006b307) form_field_slider_pane_vc_t_ParamLimits

0xfa91,	// (0x0006b307) form_field_slider_pane_vc_t

0x7fdc,	// (0x00063852) input_focus_pane_cp9_vc_ParamLimits

0x7fdc,	// (0x00063852) input_focus_pane_cp9_vc

0x4333,	// (0x0005fba9) slider_cont_pane_vc_ParamLimits

0x4333,	// (0x0005fba9) slider_cont_pane_vc

0x4347,	// (0x0005fbbd) list_form_graphic_pane_cp_vc_ParamLimits

0x4347,	// (0x0005fbbd) list_form_graphic_pane_cp_vc

0x2495,	// (0x0005dd0b) form_field_popup_wide_pane_vc_g1

0x435c,	// (0x0005fbd2) form_field_popup_wide_pane_vc_t1_ParamLimits

0x435c,	// (0x0005fbd2) form_field_popup_wide_pane_vc_t1

0x8272,	// (0x00063ae8) input_focus_pane_cp8_vc_ParamLimits

0x8272,	// (0x00063ae8) input_focus_pane_cp8_vc

0x43a1,	// (0x0005fc17) list_form_wide_pane_vc_ParamLimits

0x43a1,	// (0x0005fc17) list_form_wide_pane_vc

0x43ad,	// (0x0005fc23) list_form_graphic_pane_vc_g1

0x43b5,	// (0x0005fc2b) list_form_graphic_pane_vc_t1_ParamLimits

0x43b5,	// (0x0005fc2b) list_form_graphic_pane_vc_t1

0x7eb2,	// (0x00063728) list_highlight_pane_cp5_vc_ParamLimits

0x7eb2,	// (0x00063728) list_highlight_pane_cp5_vc

0x43d1,	// (0x0005fc47) list_form_graphic_pane_vc_ParamLimits

0x43d1,	// (0x0005fc47) list_form_graphic_pane_vc

0x2495,	// (0x0005dd0b) form_field_popup_pane_vc_g1

0x43e7,	// (0x0005fc5d) form_field_popup_pane_vc_t1_ParamLimits

0x43e7,	// (0x0005fc5d) form_field_popup_pane_vc_t1

0x8272,	// (0x00063ae8) input_focus_pane_cp7_vc_ParamLimits

0x8272,	// (0x00063ae8) input_focus_pane_cp7_vc

0x43fe,	// (0x0005fc74) list_form_pane_vc_ParamLimits

0x43fe,	// (0x0005fc74) list_form_pane_vc

0x440a,	// (0x0005fc80) data_form_pane_vc_t1_ParamLimits

0x440a,	// (0x0005fc80) data_form_pane_vc_t1

0x82ca,	// (0x00063b40) input_focus_pane_vc_g1

0x82d2,	// (0x00063b48) input_focus_pane_vc_g2

0x82da,	// (0x00063b50) input_focus_pane_vc_g3

0x82e2,	// (0x00063b58) input_focus_pane_vc_g4

0x82ea,	// (0x00063b60) input_focus_pane_vc_g5

0x82f2,	// (0x00063b68) input_focus_pane_vc_g6

0x82fa,	// (0x00063b70) input_focus_pane_vc_g7

0x8302,	// (0x00063b78) input_focus_pane_vc_g8

0x830a,	// (0x00063b80) input_focus_pane_vc_g9

0x7e5a,	// (0x000636d0) input_focus_pane_vc_g10

0x0009,

0xf682,	// (0x0006aef8) input_focus_pane_vc_g

0x2489,	// (0x0005dcff) data_form_pane_vc_ParamLimits

0x2489,	// (0x0005dcff) data_form_pane_vc

0x2495,	// (0x0005dd0b) form_field_data_pane_vc_g1

0x4425,	// (0x0005fc9b) form_field_data_pane_vc_t1_ParamLimits

0x4425,	// (0x0005fc9b) form_field_data_pane_vc_t1

0x8272,	// (0x00063ae8) input_focus_pane_vc_ParamLimits

0x8272,	// (0x00063ae8) input_focus_pane_vc

0x443f,	// (0x0005fcb5) button_value_adjust_pane_cp3_vc

0x4447,	// (0x0005fcbd) button_value_adjust_pane_cp5_vc

0x444f,	// (0x0005fcc5) form_field_data_pane_vc_ParamLimits

0x444f,	// (0x0005fcc5) form_field_data_pane_vc

0x4466,	// (0x0005fcdc) form_field_data_pane_vc_cp2

0x446e,	// (0x0005fce4) form_field_data_wide_pane_vc_ParamLimits

0x446e,	// (0x0005fce4) form_field_data_wide_pane_vc

0x4484,	// (0x0005fcfa) form_field_data_wide_pane_vc_cp2

0x448c,	// (0x0005fd02) form_field_popup_pane_vc_ParamLimits

0x448c,	// (0x0005fd02) form_field_popup_pane_vc

0x44a3,	// (0x0005fd19) form_field_popup_wide_pane_vc_ParamLimits

0x44a3,	// (0x0005fd19) form_field_popup_wide_pane_vc

0x44b9,	// (0x0005fd2f) form_field_slider_pane_vc_ParamLimits

0x44b9,	// (0x0005fd2f) form_field_slider_pane_vc

0x44cc,	// (0x0005fd42) form_field_slider_wide_pane_vc_ParamLimits

0x44cc,	// (0x0005fd42) form_field_slider_wide_pane_vc

0xc9d1,	// (0x00068247) grid_touch_1_pane_ParamLimits

0xc9d1,	// (0x00068247) grid_touch_1_pane

0xc9e5,	// (0x0006825b) grid_touch_2_pane_ParamLimits

0xc9e5,	// (0x0006825b) grid_touch_2_pane

0x459a,	// (0x0005fe10) touch_pane_g1_ParamLimits

0x459a,	// (0x0005fe10) touch_pane_g1

0x4503,	// (0x0005fd79) cell_app_pane_cp_wide_ParamLimits

0x4503,	// (0x0005fd79) cell_app_pane_cp_wide

0x4514,	// (0x0005fd8a) grid_popup_fast_wide_pane_ParamLimits

0x4514,	// (0x0005fd8a) grid_popup_fast_wide_pane

0x4528,	// (0x0005fd9e) scroll_pane_cp19_ParamLimits

0x4528,	// (0x0005fd9e) scroll_pane_cp19

0x7e64,	// (0x000636da) bg_popup_window_pane_cp20

0x453c,	// (0x0005fdb2) listscroll_popup_fast_wide_pane

0xca0f,	// (0x00068285) grid_indicator_nsta_pane

0x4544,	// (0x0005fdba) clock_nsta_pane_g1

0x454d,	// (0x0005fdc3) clock_nsta_pane_t1

0xca1d,	// (0x00068293) cell_indicator_nsta_pane_ParamLimits

0xca1d,	// (0x00068293) cell_indicator_nsta_pane

0x459a,	// (0x0005fe10) cell_indicator_nsta_pane_g1

0xca34,	// (0x000682aa) cell_indicator_nsta_pane_g2

0x0001,

0xfaa2,	// (0x0006b318) cell_indicator_nsta_pane_g

0x45b5,	// (0x0005fe2b) clock_nsta_pane_cp

0x45be,	// (0x0005fe34) indicator_nsta_pane_cp

0x45c6,	// (0x0005fe3c) nsta_clock_indic_pane_g1

0x7eee,	// (0x00063764) grid_indicator_pane

0xa0a4,	// (0x0006591a) scroll_pane_cp29

0xf38c,	// (0x0006ac02) indicator_nsta_pane_cp2_ParamLimits

0xf38c,	// (0x0006ac02) indicator_nsta_pane_cp2

0x7eb2,	// (0x00063728) main_apps_wheel_pane

0xc0b6,	// (0x0006792c) form_midp_field_text_pane_ParamLimits

0x27f6,	// (0x0005e06c) scroll_bar_cp050_ParamLimits

0x4616,	// (0x0005fe8c) cell_indicator_pane_ParamLimits

0x4616,	// (0x0005fe8c) cell_indicator_pane

0x462f,	// (0x0005fea5) cell_indicator_pane_g1

0xca53,	// (0x000682c9) grid_wheel_folder_pane_ParamLimits

0xca53,	// (0x000682c9) grid_wheel_folder_pane

0xca61,	// (0x000682d7) list_wheel_apps_pane_ParamLimits

0xca61,	// (0x000682d7) list_wheel_apps_pane

0xca6f,	// (0x000682e5) main_apps_wheel_pane_g1_ParamLimits

0xca6f,	// (0x000682e5) main_apps_wheel_pane_g1

0xca7b,	// (0x000682f1) main_apps_wheel_pane_g2_ParamLimits

0xca7b,	// (0x000682f1) main_apps_wheel_pane_g2

0x0001,

0xfabe,	// (0x0006b334) main_apps_wheel_pane_g_ParamLimits

0xfabe,	// (0x0006b334) main_apps_wheel_pane_g

0xca89,	// (0x000682ff) main_apps_wheel_pane_t1_ParamLimits

0xca89,	// (0x000682ff) main_apps_wheel_pane_t1

0xca9d,	// (0x00068313) list_wheel_apps_pane_g1

0xcaa5,	// (0x0006831b) list_wheel_apps_pane_g2

0xcaad,	// (0x00068323) list_wheel_apps_pane_g3

0xcab5,	// (0x0006832b) list_wheel_apps_pane_g4

0xcabf,	// (0x00068335) list_wheel_apps_pane_g5

0x0004,

0xfac3,	// (0x0006b339) list_wheel_apps_pane_g

0xe092,	// (0x00069908) navi_icon_text_pane

0xadfd,	// (0x00066673) aid_fill_nsta

0x46f6,	// (0x0005ff6c) navi_icon_text_pane_g1

0x4702,	// (0x0005ff78) navi_icon_text_pane_t1

0xbd16,	// (0x0006758c) list_set_graphic_pane_t1_ParamLimits

0xbd16,	// (0x0006758c) list_set_graphic_pane_t1

0x2f39,	// (0x0005e7af) popup_midp_note_alarm_window_t6_ParamLimits

0x2f39,	// (0x0005e7af) popup_midp_note_alarm_window_t6

0x2f4b,	// (0x0005e7c1) popup_midp_note_alarm_window_t7_ParamLimits

0x2f4b,	// (0x0005e7c1) popup_midp_note_alarm_window_t7

0x2f5d,	// (0x0005e7d3) popup_midp_note_alarm_window_t8_ParamLimits

0x2f5d,	// (0x0005e7d3) popup_midp_note_alarm_window_t8

0x2f6f,	// (0x0005e7e5) popup_midp_note_alarm_window_t9_ParamLimits

0x2f6f,	// (0x0005e7e5) popup_midp_note_alarm_window_t9

0x2f81,	// (0x0005e7f7) popup_midp_note_alarm_window_t10_ParamLimits

0x2f81,	// (0x0005e7f7) popup_midp_note_alarm_window_t10

0x2f93,	// (0x0005e809) popup_midp_note_alarm_window_t11_ParamLimits

0x2f93,	// (0x0005e809) popup_midp_note_alarm_window_t11

0xc402,	// (0x00067c78) scroll_pane_cp17_ParamLimits

0xc402,	// (0x00067c78) scroll_pane_cp17

0x08bb,	// (0x0005c131) volume_small_pane_cp_g1

0x0c98,	// (0x0005c50e) volume_small_pane_cp_g2

0x0ca1,	// (0x0005c517) volume_small_pane_cp_g3

0x0caa,	// (0x0005c520) volume_small_pane_cp_g4

0x0cb3,	// (0x0005c529) volume_small_pane_cp_g5

0x0c62,	// (0x0005c4d8) volume_small_pane_cp_g6

0x0cbc,	// (0x0005c532) volume_small_pane_cp_g7

0x0cc5,	// (0x0005c53b) volume_small_pane_cp_g8

0x0cce,	// (0x0005c544) volume_small_pane_cp_g9

0x0cd7,	// (0x0005c54d) volume_small_pane_cp_g10

0xe1fb,	// (0x00069a71) midp_ticker_pane_g1_ParamLimits

0xe207,	// (0x00069a7d) midp_ticker_pane_g2_ParamLimits

0xf74e,	// (0x0006afc4) midp_ticker_pane_g_ParamLimits

0xe213,	// (0x00069a89) midp_ticker_pane_t1_ParamLimits

0xae21,	// (0x00066697) aid_fill_nsta_2

0x27e2,	// (0x0005e058) list_form2_midp_pane

0x38ed,	// (0x0005f163) midp_editing_number_pane_ParamLimits

0x38fc,	// (0x0005f172) midp_ticker_pane_ParamLimits

0x4714,	// (0x0005ff8a) form2_midp_field_pane

0x4738,	// (0x0005ffae) scroll_pane_cp51

0x4758,	// (0x0005ffce) form2_midp_button_pane_ParamLimits

0x4758,	// (0x0005ffce) form2_midp_button_pane

0x476a,	// (0x0005ffe0) form2_midp_content_pane_ParamLimits

0x476a,	// (0x0005ffe0) form2_midp_content_pane

0x4784,	// (0x0005fffa) form2_midp_field_choice_group_pane

0x478c,	// (0x00060002) form2_midp_field_pane_g1

0x4794,	// (0x0006000a) form2_midp_field_pane_g2

0x479c,	// (0x00060012) form2_midp_field_pane_g3

0x47a4,	// (0x0006001a) form2_midp_field_pane_g4

0x0003,

0xfae8,	// (0x0006b35e) form2_midp_field_pane_g

0x47ac,	// (0x00060022) form2_midp_gauge_slider_pane

0x47b4,	// (0x0006002a) form2_midp_gauge_wait_pane

0x47bc,	// (0x00060032) form2_midp_image_pane_ParamLimits

0x47bc,	// (0x00060032) form2_midp_image_pane

0xcaf2,	// (0x00068368) form2_midp_label_pane_ParamLimits

0xcaf2,	// (0x00068368) form2_midp_label_pane

0xcb0b,	// (0x00068381) form2_midp_label_pane_cp_ParamLimits

0xcb0b,	// (0x00068381) form2_midp_label_pane_cp

0x4811,	// (0x00060087) form2_midp_string_pane_ParamLimits

0x4811,	// (0x00060087) form2_midp_string_pane

0xb1f2,	// (0x00066a68) form2_midp_text_pane_ParamLimits

0xb1f2,	// (0x00066a68) form2_midp_text_pane

0x4823,	// (0x00060099) form2_midp_time_pane

0x4833,	// (0x000600a9) input_focus_pane_cp51_ParamLimits

0x4833,	// (0x000600a9) input_focus_pane_cp51

0xcb2a,	// (0x000683a0) form2_midp_label_pane_t1_ParamLimits

0xcb2a,	// (0x000683a0) form2_midp_label_pane_t1

0xb20b,	// (0x00066a81) form2_mdip_text_pane_t1_ParamLimits

0xb20b,	// (0x00066a81) form2_mdip_text_pane_t1

0xe6d4,	// (0x00069f4a) form2_midp_time_pane_t1

0x4894,	// (0x0006010a) form2_midp_gauge_slider_pane_t1

0xcb6a,	// (0x000683e0) form2_midp_gauge_slider_pane_t2

0xcb7c,	// (0x000683f2) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf1,	// (0x0006b367) form2_midp_gauge_slider_pane_t

0x48ca,	// (0x00060140) form2_midp_slider_pane

0x48d6,	// (0x0006014c) form2_midp_gauge_wait_pane_t1

0x48e4,	// (0x0006015a) form2_midp_wait_pane_ParamLimits

0x48e4,	// (0x0006015a) form2_midp_wait_pane

0xcb8e,	// (0x00068404) list_single_2graphic_pane_cp4_ParamLimits

0xcb8e,	// (0x00068404) list_single_2graphic_pane_cp4

0xc00d,	// (0x00067883) list_single_midp_graphic_pane_cp_ParamLimits

0xc00d,	// (0x00067883) list_single_midp_graphic_pane_cp

0x7e64,	// (0x000636da) list_highlight_pane_cp20

0x4937,	// (0x000601ad) list_single_2graphic_pane_g1_cp4

0x3dd8,	// (0x0005f64e) list_single_2graphic_pane_g2_cp4

0x493f,	// (0x000601b5) list_single_2graphic_pane_t1_cp4

0x7eb2,	// (0x00063728) list_highlight_pane_cp21

0x494e,	// (0x000601c4) list_single_midp_graphic_pane_g4_cp

0x495d,	// (0x000601d3) list_single_midp_graphic_pane_t1_cp

0xcba3,	// (0x00068419) form2_mdip_string_pane_t1_ParamLimits

0xcba3,	// (0x00068419) form2_mdip_string_pane_t1

0x7e64,	// (0x000636da) bg_wml_button_pane_cp2

0x7e5a,	// (0x000636d0) form2_midp_image_pane_g1

0xdf19,	// (0x0006978f) list_double_large_graphic_pane_g5_ParamLimits

0xdf19,	// (0x0006978f) list_double_large_graphic_pane_g5

0xa329,	// (0x00065b9f) midp_form_pane_ParamLimits

0x7eb2,	// (0x00063728) main_apps_wheel_pane_ParamLimits

0xaadb,	// (0x00066351) popup_preview_window_ParamLimits

0xaadb,	// (0x00066351) popup_preview_window

0xada8,	// (0x0006661e) popup_touch_info_window_ParamLimits

0xada8,	// (0x0006661e) popup_touch_info_window

0xadc6,	// (0x0006663c) popup_touch_menu_window_ParamLimits

0xadc6,	// (0x0006663c) popup_touch_menu_window

0x7e50,	// (0x000636c6) bg_popup_sub_pane_cp6

0x4a79,	// (0x000602ef) list_touch_menu_pane

0xcc19,	// (0x0006848f) list_single_touch_menu_pane_ParamLimits

0xcc19,	// (0x0006848f) list_single_touch_menu_pane

0xcc2d,	// (0x000684a3) list_single_touch_menu_pane_t1

0x7eb2,	// (0x00063728) bg_popup_sub_pane_cp7_ParamLimits

0x7eb2,	// (0x00063728) bg_popup_sub_pane_cp7

0x4aa5,	// (0x0006031b) heading_sub_pane

0x4aad,	// (0x00060323) list_touch_info_pane_ParamLimits

0x4aad,	// (0x00060323) list_touch_info_pane

0x4abc,	// (0x00060332) list_single_touch_info_pane_ParamLimits

0x4abc,	// (0x00060332) list_single_touch_info_pane

0x4ace,	// (0x00060344) list_single_touch_info_pane_t1

0x4adc,	// (0x00060352) list_single_touch_info_pane_t2

0x0001,

0xfaff,	// (0x0006b375) list_single_touch_info_pane_t

0xe1e4,	// (0x00069a5a) bg_popup_heading_pane_cp

0x4aea,	// (0x00060360) heading_sub_pane_t1

0x2423,	// (0x0005dc99) bg_popup_preview_window_pane_cp_ParamLimits

0x2423,	// (0x0005dc99) bg_popup_preview_window_pane_cp

0x4aa5,	// (0x0006031b) heading_preview_pane

0x4aad,	// (0x00060323) list_preview_pane_ParamLimits

0x4aad,	// (0x00060323) list_preview_pane

0x4af8,	// (0x0006036e) popup_preview_window_g1

0x4abc,	// (0x00060332) list_single_preview_pane_ParamLimits

0x4abc,	// (0x00060332) list_single_preview_pane

0x4b00,	// (0x00060376) list_single_preview_pane_g1

0x4b08,	// (0x0006037e) list_single_preview_pane_t1

0x4ace,	// (0x00060344) list_single_preview_pane_t2

0x0001,

0xfb04,	// (0x0006b37a) list_single_preview_pane_t

0x4b16,	// (0x0006038c) bg_popup_heading_pane_cp2_ParamLimits

0x4b16,	// (0x0006038c) bg_popup_heading_pane_cp2

0x4b2c,	// (0x000603a2) heading_preview_pane_g1

0x4b34,	// (0x000603aa) heading_preview_pane_t1_ParamLimits

0x4b34,	// (0x000603aa) heading_preview_pane_t1

0x7f05,	// (0x0006377b) soft_indicator_pane_t1_ParamLimits

0x81ee,	// (0x00063a64) scroll_pane_ParamLimits

0x8578,	// (0x00063dee) scroll_sc2_left_pane

0x8581,	// (0x00063df7) scroll_sc2_right_pane

0x85a0,	// (0x00063e16) scroll_bg_pane_g1_ParamLimits

0x85b5,	// (0x00063e2b) scroll_bg_pane_g2_ParamLimits

0x85cd,	// (0x00063e43) scroll_bg_pane_g3_ParamLimits

0xf6d9,	// (0x0006af4f) scroll_bg_pane_g_ParamLimits

0x85a0,	// (0x00063e16) scroll_handle_pane_g1_ParamLimits

0x85e2,	// (0x00063e58) scroll_handle_pane_g2_ParamLimits

0x85cd,	// (0x00063e43) scroll_handle_pane_g3_ParamLimits

0xf6e0,	// (0x0006af56) scroll_handle_pane_g_ParamLimits

0xa682,	// (0x00065ef8) popup_choice_list_window_ParamLimits

0xa682,	// (0x00065ef8) popup_choice_list_window

0x22e1,	// (0x0005db57) choice_list_pane

0x2363,	// (0x0005dbd9) cell_toolbar_pane_t1

0x238b,	// (0x0005dc01) toolbar_button_pane_ParamLimits

0x345f,	// (0x0005ecd5) ai_gene_pane_1_t2_ParamLimits

0x345f,	// (0x0005ecd5) ai_gene_pane_1_t2

0x0001,

0xf8fc,	// (0x0006b172) ai_gene_pane_1_t_ParamLimits

0xf8fc,	// (0x0006b172) ai_gene_pane_1_t

0x4b51,	// (0x000603c7) scroll_sc2_left_pane_g1

0x4b51,	// (0x000603c7) scroll_sc2_right_pane_g1

0x1e70,	// (0x0005d6e6) bg_popup_sub_pane_cp10

0x4b5b,	// (0x000603d1) list_choice_list_pane

0xcc3b,	// (0x000684b1) list_single_choice_list_pane_ParamLimits

0xcc3b,	// (0x000684b1) list_single_choice_list_pane

0xcc4f,	// (0x000684c5) list_single_choice_list_pane_g1

0x9ece,	// (0x00065744) list_single_choice_list_pane_t1_ParamLimits

0x9ece,	// (0x00065744) list_single_choice_list_pane_t1

0x4b8f,	// (0x00060405) choice_list_pane_g1

0xcc57,	// (0x000684cd) choice_list_pane_t1

0x7e50,	// (0x000636c6) input_focus_pane_cp11

0x84ed,	// (0x00063d63) title_pane_stacon_g2_ParamLimits

0x84ed,	// (0x00063d63) title_pane_stacon_g2

0x0002,

0xf6bf,	// (0x0006af35) title_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0006af35) title_pane_stacon_g

0xe1e4,	// (0x00069a5a) cursor_press_pane

0xa729,	// (0x00065f9f) popup_fep_hwr_window_ParamLimits

0xa729,	// (0x00065f9f) popup_fep_hwr_window

0x02dc,	// (0x0005bb52) popup_fep_vkb_window_ParamLimits

0x02dc,	// (0x0005bb52) popup_fep_vkb_window

0xcc65,	// (0x000684db) cursor_press_pane_g1

0x0002,

0xfb2d,	// (0x0006b3a3) fep_vkb_side_pane_g_ParamLimits

0x0d54,	// (0x0005c5ca) fep_hwr_candidate_pane_ParamLimits

0x0d54,	// (0x0005c5ca) fep_hwr_candidate_pane

0x0d7e,	// (0x0005c5f4) fep_hwr_side_pane_ParamLimits

0x0d7e,	// (0x0005c5f4) fep_hwr_side_pane

0x0d9e,	// (0x0005c614) fep_hwr_top_pane_ParamLimits

0x0d9e,	// (0x0005c614) fep_hwr_top_pane

0x0db6,	// (0x0005c62c) fep_hwr_write_pane_ParamLimits

0x0db6,	// (0x0005c62c) fep_hwr_write_pane

0xfb2d,	// (0x0006b3a3) fep_vkb_side_pane_g

0x4bad,	// (0x00060423) fep_hwr_top_pane_g1

0x4bbf,	// (0x00060435) fep_hwr_top_pane_g2

0x0df0,	// (0x0005c666) fep_hwr_top_pane_g3

0x0002,

0xfb09,	// (0x0006b37f) fep_hwr_top_pane_g

0x0e05,	// (0x0005c67b) fep_hwr_top_text_pane

0xbb23,	// (0x00067399) fep_hwr_top_text_pane_g1

0x4bf5,	// (0x0006046b) fep_hwr_top_text_pane_t1

0x0efb,	// (0x0005c771) fep_hwr_candidate_pane_g1

0x4e3a,	// (0x000606b0) fep_vkb_keypad_pane_g3_ParamLimits

0x4e3a,	// (0x000606b0) fep_vkb_keypad_pane_g3

0x4e62,	// (0x000606d8) fep_vkb_keypad_pane_g4_ParamLimits

0x4e62,	// (0x000606d8) fep_vkb_keypad_pane_g4

0x4ed1,	// (0x00060747) fep_vkb_bottom_pane_g2_ParamLimits

0x4ed1,	// (0x00060747) fep_vkb_bottom_pane_g2

0x0001,

0xfb34,	// (0x0006b3aa) fep_vkb_bottom_pane_g_ParamLimits

0xfb34,	// (0x0006b3aa) fep_vkb_bottom_pane_g

0x4b51,	// (0x000603c7) cell_vkb_side_pane_g2

0x0001,

0xfb3e,	// (0x0006b3b4) cell_vkb_side_pane_g

0x4f5c,	// (0x000607d2) cell_vkb_side_pane_t1

0x4f6a,	// (0x000607e0) cell_vkb_side_pane_t1_copy1

0x4b51,	// (0x000603c7) bg_fep_vkb_candidate_pane_g2

0x5096,	// (0x0006090c) cell_vkb_candidate_pane_ParamLimits

0x4c03,	// (0x00060479) aid_size_cell_vkb_ParamLimits

0x4c03,	// (0x00060479) aid_size_cell_vkb

0x5096,	// (0x0006090c) cell_vkb_candidate_pane

0x0f22,	// (0x0005c798) bg_popup_fep_shadow_pane_g1

0xcc7f,	// (0x000684f5) fep_vkb_bottom_pane_ParamLimits

0xcc7f,	// (0x000684f5) fep_vkb_bottom_pane

0x4cc7,	// (0x0006053d) fep_vkb_candidate_pane_ParamLimits

0x4cc7,	// (0x0006053d) fep_vkb_candidate_pane

0xcca4,	// (0x0006851a) fep_vkb_keypad_pane_ParamLimits

0xcca4,	// (0x0006851a) fep_vkb_keypad_pane

0xccd9,	// (0x0006854f) fep_vkb_side_pane_ParamLimits

0xccd9,	// (0x0006854f) fep_vkb_side_pane

0xcd15,	// (0x0006858b) fep_vkb_top_pane_ParamLimits

0xcd15,	// (0x0006858b) fep_vkb_top_pane

0x4d93,	// (0x00060609) fep_vkb_top_pane_g1_ParamLimits

0x4d93,	// (0x00060609) fep_vkb_top_pane_g1

0x4da2,	// (0x00060618) fep_vkb_top_pane_g2_ParamLimits

0x4da2,	// (0x00060618) fep_vkb_top_pane_g2

0x4db1,	// (0x00060627) fep_vkb_top_pane_g3_ParamLimits

0x4db1,	// (0x00060627) fep_vkb_top_pane_g3

0x0003,

0xfb24,	// (0x0006b39a) fep_vkb_top_pane_g_ParamLimits

0xfb24,	// (0x0006b39a) fep_vkb_top_pane_g

0x4dcf,	// (0x00060645) fep_vkb_top_text_pane_ParamLimits

0x4dcf,	// (0x00060645) fep_vkb_top_text_pane

0xcd4a,	// (0x000685c0) fep_vkb_side_pane_g1_ParamLimits

0xcd4a,	// (0x000685c0) fep_vkb_side_pane_g1

0x4e29,	// (0x0006069f) grid_vkb_side_pane_ParamLimits

0x4e29,	// (0x0006069f) grid_vkb_side_pane

0x0f2a,	// (0x0005c7a0) bg_popup_fep_shadow_pane_g2

0x0f33,	// (0x0005c7a9) bg_popup_fep_shadow_pane_g3

0x0f3b,	// (0x0005c7b1) bg_popup_fep_shadow_pane_g4

0x0f44,	// (0x0005c7ba) bg_popup_fep_shadow_pane_g5

0x0f4e,	// (0x0005c7c4) bg_popup_fep_shadow_pane_g6

0x0f56,	// (0x0005c7cc) bg_popup_fep_shadow_pane_g7

0x82e2,	// (0x00063b58) bg_popup_fep_shadow_pane_g8

0x4e80,	// (0x000606f6) grid_vkb_keypad_number_pane_ParamLimits

0x4e80,	// (0x000606f6) grid_vkb_keypad_number_pane

0x4e90,	// (0x00060706) grid_vkb_keypad_pane_ParamLimits

0x4e90,	// (0x00060706) grid_vkb_keypad_pane

0x4eb6,	// (0x0006072c) fep_vkb_bottom_pane_g1_ParamLimits

0x4eb6,	// (0x0006072c) fep_vkb_bottom_pane_g1

0x4edf,	// (0x00060755) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4edf,	// (0x00060755) grid_vkb_keypad_bottom_left_pane

0x4ef4,	// (0x0006076a) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4ef4,	// (0x0006076a) grid_vkb_keypad_bottom_right_pane

0x4f09,	// (0x0006077f) fep_vkb_top_text_pane_g1

0xcd91,	// (0x00068607) fep_vkb_top_text_pane_t1

0xcda3,	// (0x00068619) cell_vkb_side_pane_ParamLimits

0xcda3,	// (0x00068619) cell_vkb_side_pane

0x4b51,	// (0x000603c7) cell_vkb_side_pane_g1

0x4f78,	// (0x000607ee) cell_vkb_keypad_pane_ParamLimits

0x4f78,	// (0x000607ee) cell_vkb_keypad_pane

0x4fed,	// (0x00060863) cell_vkb_keypad_pane_g1

0x0008,

0xfb51,	// (0x0006b3c7) bg_popup_fep_shadow_pane_g

0x0f68,	// (0x0005c7de) cell_hwr_side_pane_g1

0x0f68,	// (0x0005c7de) cell_hwr_side_pane_g2

0x4ff7,	// (0x0006086d) cell_vkb_keypad_pane_t1

0xcdb9,	// (0x0006862f) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcdb9,	// (0x0006862f) cell_vkb_keypad_bottom_left_pane

0xcdce,	// (0x00068644) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcdce,	// (0x00068644) cell_vkb_keypad_bottom_right_pane

0x4b51,	// (0x000603c7) cell_vkb_keypad_bottom_left_pane_g1

0x4b51,	// (0x000603c7) cell_vkb_keypad_bottom_right_pane_g1

0x505b,	// (0x000608d1) cell_vkb_keypad_number_pane_ParamLimits

0x505b,	// (0x000608d1) cell_vkb_keypad_number_pane

0x507a,	// (0x000608f0) cell_vkb_keypad_number_pane_g1

0x5084,	// (0x000608fa) cell_vkb_keypad_number_pane_g2

0x508d,	// (0x00060903) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb43,	// (0x0006b3b9) cell_vkb_keypad_number_pane_g

0x4ff7,	// (0x0006086d) cell_vkb_keypad_number_pane_t1

0x50b1,	// (0x00060927) fep_vkb_candidate_pane_g1

0x0001,

0xfb64,	// (0x0006b3da) cell_hwr_side_pane_g

0x50ca,	// (0x00060940) cell_hwr_side_pane_t1

0x0f72,	// (0x0005c7e8) cell_hwr_side_pane_t1_copy1

0x0f80,	// (0x0005c7f6) cell_hwr_candidate_pane_g1

0x0faf,	// (0x0005c825) cell_hwr_candidate_pane_t1

0x4b51,	// (0x000603c7) cell_vkb_candidate_pane_g2

0x510e,	// (0x00060984) cell_vkb_candidate_pane_t1

0x0d1b,	// (0x0005c591) bg_popup_fep_shadow_pane_ParamLimits

0x0d1b,	// (0x0005c591) bg_popup_fep_shadow_pane

0x0dd0,	// (0x0005c646) bg_fep_hwr_top_pane_g4

0x4bd1,	// (0x00060447) bg_hwr_side_pane_g1_ParamLimits

0x4bd1,	// (0x00060447) bg_hwr_side_pane_g1

0xb23d,	// (0x00066ab3) cell_hwr_side_pane_ParamLimits

0xb23d,	// (0x00066ab3) cell_hwr_side_pane

0x0e7c,	// (0x0005c6f2) fep_hwr_write_pane_g1_ParamLimits

0x0e7c,	// (0x0005c6f2) fep_hwr_write_pane_g1

0x0e89,	// (0x0005c6ff) fep_hwr_write_pane_g2_ParamLimits

0x0e89,	// (0x0005c6ff) fep_hwr_write_pane_g2

0x0e96,	// (0x0005c70c) fep_hwr_write_pane_g3_ParamLimits

0x0e96,	// (0x0005c70c) fep_hwr_write_pane_g3

0xb25d,	// (0x00066ad3) fep_hwr_write_pane_g4_ParamLimits

0xb25d,	// (0x00066ad3) fep_hwr_write_pane_g4

0x0005,

0xfb10,	// (0x0006b386) fep_hwr_write_pane_g_ParamLimits

0xfb10,	// (0x0006b386) fep_hwr_write_pane_g

0x0dd0,	// (0x0005c646) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0dd0,	// (0x0005c646) bg_fep_hwr_candidate_pane_g2

0x0eb9,	// (0x0005c72f) cell_hwr_candidate_pane_ParamLimits

0x0eb9,	// (0x0005c72f) cell_hwr_candidate_pane

0x0efb,	// (0x0005c771) fep_hwr_candidate_pane_g1_ParamLimits

0x4c31,	// (0x000604a7) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4c31,	// (0x000604a7) bg_popup_fep_shadow_pane_cp2

0x4dc1,	// (0x00060637) fep_vkb_top_pane_g4_ParamLimits

0x4dc1,	// (0x00060637) fep_vkb_top_pane_g4

0x4e07,	// (0x0006067d) fep_vkb_side_pane_g2_ParamLimits

0x4e07,	// (0x0006067d) fep_vkb_side_pane_g2

0x9bf4,	// (0x0006546a) list_setting_pane_t4_ParamLimits

0x9bf4,	// (0x0006546a) list_setting_pane_t4

0x9c8e,	// (0x00065504) list_setting_number_pane_t5_ParamLimits

0x9c8e,	// (0x00065504) list_setting_number_pane_t5

0xbb5a,	// (0x000673d0) list_double_heading_pane_cp2_ParamLimits

0xbb5a,	// (0x000673d0) list_double_heading_pane_cp2

0x4092,	// (0x0005f908) list_double_heading_pane_g1_cp2_ParamLimits

0x4092,	// (0x0005f908) list_double_heading_pane_g1_cp2

0x511c,	// (0x00060992) list_double_heading_pane_g2_cp2_ParamLimits

0x511c,	// (0x00060992) list_double_heading_pane_g2_cp2

0x5130,	// (0x000609a6) list_double_heading_pane_t1_cp2_ParamLimits

0x5130,	// (0x000609a6) list_double_heading_pane_t1_cp2

0x5146,	// (0x000609bc) list_double_heading_pane_t2_cp2_ParamLimits

0x5146,	// (0x000609bc) list_double_heading_pane_t2_cp2

0x7e48,	// (0x000636be) aid_value_unit2

0xf11d,	// (0x0006a993) popup_preview_fixed_window

0x7fea,	// (0x00063860) bg_popup_preview_window_pane_cp02

0x5158,	// (0x000609ce) list_preview_fixed_pane

0x519e,	// (0x00060a14) list_empty_pane_fp_ParamLimits

0x519e,	// (0x00060a14) list_empty_pane_fp

0x519e,	// (0x00060a14) list_single_cale_day_pane_fp_ParamLimits

0x519e,	// (0x00060a14) list_single_cale_day_pane_fp

0x519e,	// (0x00060a14) list_single_graphic_heading_pane_fp_ParamLimits

0x519e,	// (0x00060a14) list_single_graphic_heading_pane_fp

0x519e,	// (0x00060a14) list_single_graphic_pane_fp_ParamLimits

0x519e,	// (0x00060a14) list_single_graphic_pane_fp

0x519e,	// (0x00060a14) list_single_heading_pane_fp_ParamLimits

0x519e,	// (0x00060a14) list_single_heading_pane_fp

0x519e,	// (0x00060a14) list_single_pane_fp_ParamLimits

0x519e,	// (0x00060a14) list_single_pane_fp

0x51b4,	// (0x00060a2a) list_single_pane_fp_g1_ParamLimits

0x51b4,	// (0x00060a2a) list_single_pane_fp_g1

0x51c0,	// (0x00060a36) list_single_pane_fp_g2_ParamLimits

0x51c0,	// (0x00060a36) list_single_pane_fp_g2

0x51cc,	// (0x00060a42) list_single_pane_fp_g3_ParamLimits

0x51cc,	// (0x00060a42) list_single_pane_fp_g3

0x51e0,	// (0x00060a56) list_single_pane_fp_g4_ParamLimits

0x51e0,	// (0x00060a56) list_single_pane_fp_g4

0x0003,

0xfb77,	// (0x0006b3ed) list_single_pane_fp_g_ParamLimits

0xfb77,	// (0x0006b3ed) list_single_pane_fp_g

0xe6f4,	// (0x00069f6a) list_single_pane_fp_t1_ParamLimits

0xe6f4,	// (0x00069f6a) list_single_pane_fp_t1

0xe70b,	// (0x00069f81) list_single_graphic_pane_fp_g1_ParamLimits

0xe70b,	// (0x00069f81) list_single_graphic_pane_fp_g1

0x51b4,	// (0x00060a2a) list_single_graphic_pane_fp_g2_ParamLimits

0x51b4,	// (0x00060a2a) list_single_graphic_pane_fp_g2

0x51c0,	// (0x00060a36) list_single_graphic_pane_fp_g3_ParamLimits

0x51c0,	// (0x00060a36) list_single_graphic_pane_fp_g3

0x51cc,	// (0x00060a42) list_single_graphic_pane_fp_g4_ParamLimits

0x51cc,	// (0x00060a42) list_single_graphic_pane_fp_g4

0x51e0,	// (0x00060a56) list_single_graphic_pane_fp_g5_ParamLimits

0x51e0,	// (0x00060a56) list_single_graphic_pane_fp_g5

0x0004,

0xfb80,	// (0x0006b3f6) list_single_graphic_pane_fp_g_ParamLimits

0xfb80,	// (0x0006b3f6) list_single_graphic_pane_fp_g

0xe717,	// (0x00069f8d) list_single_graphic_pane_fp_t1_ParamLimits

0xe717,	// (0x00069f8d) list_single_graphic_pane_fp_t1

0xe70b,	// (0x00069f81) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xe70b,	// (0x00069f81) list_single_graphic_heading_pane_fp_g1

0x51b4,	// (0x00060a2a) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x51b4,	// (0x00060a2a) list_single_graphic_heading_pane_fp_g2

0x51c0,	// (0x00060a36) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x51c0,	// (0x00060a36) list_single_graphic_heading_pane_fp_g3

0x51cc,	// (0x00060a42) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x51cc,	// (0x00060a42) list_single_graphic_heading_pane_fp_g4

0x51e0,	// (0x00060a56) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x51e0,	// (0x00060a56) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb80,	// (0x0006b3f6) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb80,	// (0x0006b3f6) list_single_graphic_heading_pane_fp_g

0xe72d,	// (0x00069fa3) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xe72d,	// (0x00069fa3) list_single_graphic_heading_pane_fp_t1

0xe743,	// (0x00069fb9) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xe743,	// (0x00069fb9) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8b,	// (0x0006b401) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8b,	// (0x0006b401) list_single_graphic_heading_pane_fp_t

0xe755,	// (0x00069fcb) list_single_cale_day_pane_fp_g1_ParamLimits

0xe755,	// (0x00069fcb) list_single_cale_day_pane_fp_g1

0x51ec,	// (0x00060a62) list_single_cale_day_pane_fp_g2_ParamLimits

0x51ec,	// (0x00060a62) list_single_cale_day_pane_fp_g2

0x3fbd,	// (0x0005f833) list_single_cale_day_pane_fp_g3_ParamLimits

0x3fbd,	// (0x0005f833) list_single_cale_day_pane_fp_g3

0x3fe5,	// (0x0005f85b) list_single_cale_day_pane_fp_g4_ParamLimits

0x3fe5,	// (0x0005f85b) list_single_cale_day_pane_fp_g4

0x4009,	// (0x0005f87f) list_single_cale_day_pane_fp_g5_ParamLimits

0x4009,	// (0x0005f87f) list_single_cale_day_pane_fp_g5

0x0004,

0xfb90,	// (0x0006b406) list_single_cale_day_pane_fp_g_ParamLimits

0xfb90,	// (0x0006b406) list_single_cale_day_pane_fp_g

0xe78d,	// (0x0006a003) list_single_cale_day_pane_fp_t1_ParamLimits

0xe78d,	// (0x0006a003) list_single_cale_day_pane_fp_t1

0xe7b3,	// (0x0006a029) list_single_cale_day_pane_fp_t2_ParamLimits

0xe7b3,	// (0x0006a029) list_single_cale_day_pane_fp_t2

0xe7cc,	// (0x0006a042) list_single_cale_day_pane_fp_t3_ParamLimits

0xe7cc,	// (0x0006a042) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9b,	// (0x0006b411) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9b,	// (0x0006b411) list_single_cale_day_pane_fp_t

0x51b4,	// (0x00060a2a) list_empty_pane_fp_g1_ParamLimits

0x51b4,	// (0x00060a2a) list_empty_pane_fp_g1

0xe7e5,	// (0x0006a05b) list_empty_pane_fp_t1

0xe7f3,	// (0x0006a069) list_empty_pane_fp_t2

0x0001,

0xfba2,	// (0x0006b418) list_empty_pane_fp_t

0x51b4,	// (0x00060a2a) list_single_heading_pane_fp_g1_ParamLimits

0x51b4,	// (0x00060a2a) list_single_heading_pane_fp_g1

0x51c0,	// (0x00060a36) list_single_heading_pane_fp_g2_ParamLimits

0x51c0,	// (0x00060a36) list_single_heading_pane_fp_g2

0x51cc,	// (0x00060a42) list_single_heading_pane_fp_g3_ParamLimits

0x51cc,	// (0x00060a42) list_single_heading_pane_fp_g3

0x0002,

0xfba7,	// (0x0006b41d) list_single_heading_pane_fp_g_ParamLimits

0xfba7,	// (0x0006b41d) list_single_heading_pane_fp_g

0xe801,	// (0x0006a077) list_single_heading_pane_fp_t1_ParamLimits

0xe801,	// (0x0006a077) list_single_heading_pane_fp_t1

0xe813,	// (0x0006a089) list_single_heading_pane_fp_t2_ParamLimits

0xe813,	// (0x0006a089) list_single_heading_pane_fp_t2

0x0001,

0xfbae,	// (0x0006b424) list_single_heading_pane_fp_t_ParamLimits

0xfbae,	// (0x0006b424) list_single_heading_pane_fp_t

0x9f1a,	// (0x00065790) aid_size_cell_fast

0x7fbf,	// (0x00063835) soft_indicator_pane_cp1_t1

0x9f23,	// (0x00065799) cell_app_pane_cp2_ParamLimits

0x9f23,	// (0x00065799) cell_app_pane_cp2

0x0d3d,	// (0x0005c5b3) fep_hwr_candidate_drop_down_list_pane

0x0f15,	// (0x0005c78b) fep_hwr_candidate_pane_g3_ParamLimits

0x0f15,	// (0x0005c78b) fep_hwr_candidate_pane_g3

0xe6e7,	// (0x00069f5d) fep_hwr_candidate_pane_g4_ParamLimits

0xe6e7,	// (0x00069f5d) fep_hwr_candidate_pane_g4

0x0002,

0xfb1d,	// (0x0006b393) fep_hwr_candidate_pane_g_ParamLimits

0xfb1d,	// (0x0006b393) fep_hwr_candidate_pane_g

0x4cb6,	// (0x0006052c) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4cb6,	// (0x0006052c) fep_vkb_candidate_drop_down_list_pane

0x50b9,	// (0x0006092f) fep_vkb_candidate_pane_g3

0x50c1,	// (0x00060937) fep_vkb_candidate_pane_g4

0x0002,

0xfb4a,	// (0x0006b3c0) fep_vkb_candidate_pane_g

0x0f80,	// (0x0005c7f6) cell_hwr_candidate_pane_g1_ParamLimits

0x0f8e,	// (0x0005c804) cell_hwr_candidate_pane_g3_ParamLimits

0x0f8e,	// (0x0005c804) cell_hwr_candidate_pane_g3

0x62f1,	// (0x00061b67) cell_hwr_candidate_pane_g4_ParamLimits

0x62f1,	// (0x00061b67) cell_hwr_candidate_pane_g4

0x0002,

0xfb69,	// (0x0006b3df) cell_hwr_candidate_pane_g_ParamLimits

0xfb69,	// (0x0006b3df) cell_hwr_candidate_pane_g

0x50d8,	// (0x0006094e) cell_vkb_candidate_pane_g3_ParamLimits

0x50d8,	// (0x0006094e) cell_vkb_candidate_pane_g3

0x50f3,	// (0x00060969) cell_vkb_candidate_pane_g4_ParamLimits

0x50f3,	// (0x00060969) cell_vkb_candidate_pane_g4

0xcde9,	// (0x0006865f) cell_app_pane_cp2_g1_ParamLimits

0xcde9,	// (0x0006865f) cell_app_pane_cp2_g1

0x5216,	// (0x00060a8c) cell_app_pane_cp2_g2_ParamLimits

0x5216,	// (0x00060a8c) cell_app_pane_cp2_g2

0x0001,

0xfbb3,	// (0x0006b429) cell_app_pane_cp2_g_ParamLimits

0xfbb3,	// (0x0006b429) cell_app_pane_cp2_g

0x5222,	// (0x00060a98) cell_app_pane_cp2_t1_ParamLimits

0x5222,	// (0x00060a98) cell_app_pane_cp2_t1

0x8272,	// (0x00063ae8) grid_highlight_pane_cp1_ParamLimits

0x8272,	// (0x00063ae8) grid_highlight_pane_cp1

0x0fcd,	// (0x0005c843) cell_hwr_candidate_pane_cp1_ParamLimits

0x0fcd,	// (0x0005c843) cell_hwr_candidate_pane_cp1

0x0f80,	// (0x0005c7f6) fep_hwr_candidate_drop_down_list_pane_g1

0x0fec,	// (0x0005c862) fep_hwr_candidate_drop_down_list_pane_g2

0x0ff9,	// (0x0005c86f) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb8,	// (0x0006b42e) fep_hwr_candidate_drop_down_list_pane_g

0x1006,	// (0x0005c87c) fep_hwr_candidate_drop_down_list_scroll_pane

0x100f,	// (0x0005c885) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x100f,	// (0x0005c885) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x101c,	// (0x0005c892) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x101c,	// (0x0005c892) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1029,	// (0x0005c89f) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1029,	// (0x0005c89f) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1036,	// (0x0005c8ac) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1036,	// (0x0005c8ac) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1051,	// (0x0005c8c7) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1051,	// (0x0005c8c7) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x106c,	// (0x0005c8e2) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x106c,	// (0x0005c8e2) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1087,	// (0x0005c8fd) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1087,	// (0x0005c8fd) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x10a2,	// (0x0005c918) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x10a2,	// (0x0005c918) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbf,	// (0x0006b435) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbf,	// (0x0006b435) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5234,	// (0x00060aaa) cell_vkb_candidate_pane_cp1_ParamLimits

0x5234,	// (0x00060aaa) cell_vkb_candidate_pane_cp1

0x4dc1,	// (0x00060637) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4dc1,	// (0x00060637) fep_vkb_candidate_drop_down_list_pane_g1

0x5254,	// (0x00060aca) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5254,	// (0x00060aca) fep_vkb_candidate_drop_down_list_pane_g2

0x5261,	// (0x00060ad7) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5261,	// (0x00060ad7) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd0,	// (0x0006b446) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd0,	// (0x0006b446) fep_vkb_candidate_drop_down_list_pane_g

0x526e,	// (0x00060ae4) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x526e,	// (0x00060ae4) fep_vkb_candidate_drop_down_list_scroll_pane

0x527b,	// (0x00060af1) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x527b,	// (0x00060af1) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5288,	// (0x00060afe) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5288,	// (0x00060afe) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5294,	// (0x00060b0a) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5294,	// (0x00060b0a) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x52a0,	// (0x00060b16) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x52a0,	// (0x00060b16) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x52c1,	// (0x00060b37) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x52c1,	// (0x00060b37) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x52e2,	// (0x00060b58) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x52e2,	// (0x00060b58) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5303,	// (0x00060b79) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5303,	// (0x00060b79) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5324,	// (0x00060b9a) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5324,	// (0x00060b9a) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd7,	// (0x0006b44d) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd7,	// (0x0006b44d) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x926d,	// (0x00064ae3) title_pane_g1_ParamLimits

0x9280,	// (0x00064af6) title_pane_g2_ParamLimits

0xf54e,	// (0x0006adc4) title_pane_g_ParamLimits

0xbb13,	// (0x00067389) aid_call2_pane

0xbb1b,	// (0x00067391) aid_call_pane

0xbb23,	// (0x00067399) popup_clock_analogue_window_g1

0xbb23,	// (0x00067399) popup_clock_analogue_window_g2

0xf2d0,	// (0x0006ab46) popup_clock_analogue_window_g3

0xf2d9,	// (0x0006ab4f) popup_clock_analogue_window_g4

0x7e5a,	// (0x000636d0) popup_clock_analogue_window_g5

0x0004,

0xf6ee,	// (0x0006af64) popup_clock_analogue_window_g

0xf2e1,	// (0x0006ab57) popup_clock_analogue_window_t1

0xf2ef,	// (0x0006ab65) clock_digital_number_pane_ParamLimits

0xf2ef,	// (0x0006ab65) clock_digital_number_pane

0xf2fb,	// (0x0006ab71) clock_digital_number_pane_cp02_ParamLimits

0xf2fb,	// (0x0006ab71) clock_digital_number_pane_cp02

0xf307,	// (0x0006ab7d) clock_digital_number_pane_cp03_ParamLimits

0xf307,	// (0x0006ab7d) clock_digital_number_pane_cp03

0xf313,	// (0x0006ab89) clock_digital_number_pane_cp04_ParamLimits

0xf313,	// (0x0006ab89) clock_digital_number_pane_cp04

0xf31f,	// (0x0006ab95) clock_digital_separator_pane_ParamLimits

0xf31f,	// (0x0006ab95) clock_digital_separator_pane

0xf32b,	// (0x0006aba1) popup_clock_digital_window_t1_ParamLimits

0xf32b,	// (0x0006aba1) popup_clock_digital_window_t1

0x7e5a,	// (0x000636d0) clock_digital_number_pane_g1

0x7e5a,	// (0x000636d0) clock_digital_number_pane_g2

0x0001,

0xf6f9,	// (0x0006af6f) clock_digital_number_pane_g

0x7e5a,	// (0x000636d0) clock_digital_separator_pane_g1

0x7e5a,	// (0x000636d0) clock_digital_separator_pane_g2

0x0001,

0xf6f9,	// (0x0006af6f) clock_digital_separator_pane_g

0xadfd,	// (0x00066673) aid_fill_nsta_ParamLimits

0xaf33,	// (0x000667a9) indicator_nsta_pane_ParamLimits

0x2171,	// (0x0005d9e7) popup_clock_analogue_window

0x2171,	// (0x0005d9e7) popup_clock_digital_window

0xca0f,	// (0x00068285) grid_indicator_nsta_pane_ParamLimits

0x455b,	// (0x0005fdd1) clock_nsta_pane_t2

0x0001,

0xfa9d,	// (0x0006b313) clock_nsta_pane_t

0xf2b1,	// (0x0006ab27) aid_size_max_handle

0xa001,	// (0x00065877) aid_size_min_handle

0xe1e4,	// (0x00069a5a) editor_scroll_pane

0x533f,	// (0x00060bb5) ex_editor_pane

0x8391,	// (0x00063c07) scroll_pane_cp13

0x821a,	// (0x00063a90) scroll_pane_cp14

0xbb52,	// (0x000673c8) scroll_pane_cp36

0xa0cb,	// (0x00065941) list_single_graphic_hl_pane_cp2_ParamLimits

0xa0cb,	// (0x00065941) list_single_graphic_hl_pane_cp2

0xc7fb,	// (0x00068071) list_single_graphic_hl_pane_ParamLimits

0xc7fb,	// (0x00068071) list_single_graphic_hl_pane

0xb272,	// (0x00066ae8) aid_size_min_hl_cp1

0x5347,	// (0x00060bbd) list_highlight_pane_cp34_ParamLimits

0x5347,	// (0x00060bbd) list_highlight_pane_cp34

0x5358,	// (0x00060bce) list_single_graphic_hl_pane_g1_ParamLimits

0x5358,	// (0x00060bce) list_single_graphic_hl_pane_g1

0xb27b,	// (0x00066af1) list_single_graphic_hl_pane_g2_ParamLimits

0xb27b,	// (0x00066af1) list_single_graphic_hl_pane_g2

0xb27b,	// (0x00066af1) list_single_graphic_hl_pane_g3_ParamLimits

0xb27b,	// (0x00066af1) list_single_graphic_hl_pane_g3

0xe143,	// (0x000699b9) list_single_graphic_hl_pane_g4_ParamLimits

0xe143,	// (0x000699b9) list_single_graphic_hl_pane_g4

0x5395,	// (0x00060c0b) list_single_graphic_hl_pane_g5_ParamLimits

0x5395,	// (0x00060c0b) list_single_graphic_hl_pane_g5

0x0004,

0xfbe8,	// (0x0006b45e) list_single_graphic_hl_pane_g_ParamLimits

0xfbe8,	// (0x0006b45e) list_single_graphic_hl_pane_g

0xb287,	// (0x00066afd) list_single_graphic_hl_pane_t1_ParamLimits

0xb287,	// (0x00066afd) list_single_graphic_hl_pane_t1

0x5365,	// (0x00060bdb) aid_size_min_hl_cp2

0x536e,	// (0x00060be4) list_highlight_pane_cp34_cp2_ParamLimits

0x536e,	// (0x00060be4) list_highlight_pane_cp34_cp2

0x5358,	// (0x00060bce) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5358,	// (0x00060bce) list_single_graphic_hl_pane_g1_cp2

0x537b,	// (0x00060bf1) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x537b,	// (0x00060bf1) list_single_graphic_hl_pane_g2_cp2

0xce07,	// (0x0006867d) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xce07,	// (0x0006867d) list_single_graphic_hl_pane_g3_cp2

0xe143,	// (0x000699b9) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xe143,	// (0x000699b9) list_single_graphic_hl_pane_g4_cp2

0x5395,	// (0x00060c0b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5395,	// (0x00060c0b) list_single_graphic_hl_pane_g5_cp2

0xa4fa,	// (0x00065d70) control_pane_g4_ParamLimits

0xa4fa,	// (0x00065d70) control_pane_g4

0x1e70,	// (0x0005d6e6) bg_popup_sub_pane_cp10_ParamLimits

0x4b5b,	// (0x000603d1) list_choice_list_pane_ParamLimits

0x4b6a,	// (0x000603e0) scroll_pane_cp23

0x7fea,	// (0x00063860) bg_popup_preview_window_pane_cp02_ParamLimits

0x5158,	// (0x000609ce) list_preview_fixed_pane_ParamLimits

0x516e,	// (0x000609e4) list_preview_fixed_pane_cp_ParamLimits

0x516e,	// (0x000609e4) list_preview_fixed_pane_cp

0x517a,	// (0x000609f0) popup_preview_fixed_window_g1_ParamLimits

0x517a,	// (0x000609f0) popup_preview_fixed_window_g1

0x5186,	// (0x000609fc) popup_preview_fixed_window_g2_ParamLimits

0x5186,	// (0x000609fc) popup_preview_fixed_window_g2

0x0002,

0xfb70,	// (0x0006b3e6) popup_preview_fixed_window_g_ParamLimits

0xfb70,	// (0x0006b3e6) popup_preview_fixed_window_g

0xf225,	// (0x0006aa9b) aid_navi_side_left_pane_ParamLimits

0xf23a,	// (0x0006aab0) aid_navi_side_right_pane_ParamLimits

0xf252,	// (0x0006aac8) navi_icon_pane_stacon_ParamLimits

0xf266,	// (0x0006aadc) navi_navi_pane_stacon_ParamLimits

0xf252,	// (0x0006aac8) navi_text_pane_stacon_ParamLimits

0xddf5,	// (0x0006966b) main_text_info_pane

0x53bf,	// (0x00060c35) listscroll_text_info_pane

0x53c7,	// (0x00060c3d) list_text_info_pane_ParamLimits

0x53c7,	// (0x00060c3d) list_text_info_pane

0x53d6,	// (0x00060c4c) scroll_pane_cp24_ParamLimits

0x53d6,	// (0x00060c4c) scroll_pane_cp24

0xce15,	// (0x0006868b) list_text_info_pane_t1_ParamLimits

0xce15,	// (0x0006868b) list_text_info_pane_t1

0xa69e,	// (0x00065f14) popup_fast_swap2_window_ParamLimits

0xa69e,	// (0x00065f14) popup_fast_swap2_window

0x5428,	// (0x00060c9e) aid_size_cell_fast2

0x7e50,	// (0x000636c6) bg_popup_window_pane_cp17

0x2816,	// (0x0005e08c) heading_pane_cp2

0x811e,	// (0x00063994) listscroll_fast2_pane

0x5432,	// (0x00060ca8) grid_fast2_pane

0x543c,	// (0x00060cb2) listscroll_fast2_pane_g1

0x5444,	// (0x00060cba) listscroll_fast2_pane_g2

0x0001,

0xfbf3,	// (0x0006b469) listscroll_fast2_pane_g

0x8391,	// (0x00063c07) scroll_pane_cp26

0x544e,	// (0x00060cc4) cell_fast2_pane_ParamLimits

0x544e,	// (0x00060cc4) cell_fast2_pane

0x5463,	// (0x00060cd9) cell_fast2_pane_g1

0x546c,	// (0x00060ce2) cell_fast2_pane_g2

0x5475,	// (0x00060ceb) cell_fast2_pane_g3

0x0002,

0xfbf8,	// (0x0006b46e) cell_fast2_pane_g

0x8151,	// (0x000639c7) grid_highlight_pane_cp9

0x01a0,	// (0x0005ba16) main_eswt_pane_ParamLimits

0x01a0,	// (0x0005ba16) main_eswt_pane

0x53eb,	// (0x00060c61) list_single_text_info_pane

0x547d,	// (0x00060cf3) eswt_ctrl_button_pane

0x547d,	// (0x00060cf3) eswt_ctrl_canvas_pane

0xce31,	// (0x000686a7) eswt_ctrl_combo_pane

0x547d,	// (0x00060cf3) eswt_ctrl_default_pane

0x547d,	// (0x00060cf3) eswt_ctrl_label_pane

0x548d,	// (0x00060d03) eswt_ctrl_wait_pane

0xce39,	// (0x000686af) eswt_shell_pane

0x7e50,	// (0x000636c6) listscroll_eswt_app_pane

0x54b5,	// (0x00060d2b) popup_eswt_tasktip_window_ParamLimits

0x54b5,	// (0x00060d2b) popup_eswt_tasktip_window

0x2423,	// (0x0005dc99) bg_popup_window_pane_cp18

0x54c6,	// (0x00060d3c) eswt_control_pane_g1_ParamLimits

0x54c6,	// (0x00060d3c) eswt_control_pane_g1

0x54d3,	// (0x00060d49) eswt_control_pane_g2_ParamLimits

0x54d3,	// (0x00060d49) eswt_control_pane_g2

0x54e0,	// (0x00060d56) eswt_control_pane_g3_ParamLimits

0x54e0,	// (0x00060d56) eswt_control_pane_g3

0x54ed,	// (0x00060d63) eswt_control_pane_g4_ParamLimits

0x54ed,	// (0x00060d63) eswt_control_pane_g4

0x0003,

0xfbff,	// (0x0006b475) eswt_control_pane_g_ParamLimits

0xfbff,	// (0x0006b475) eswt_control_pane_g

0x8272,	// (0x00063ae8) bg_button_pane_ParamLimits

0x8272,	// (0x00063ae8) bg_button_pane

0x8166,	// (0x000639dc) common_borders_pane_copy2_ParamLimits

0x8166,	// (0x000639dc) common_borders_pane_copy2

0x54fa,	// (0x00060d70) control_button_pane_g1_ParamLimits

0x54fa,	// (0x00060d70) control_button_pane_g1

0x5506,	// (0x00060d7c) control_button_pane_g2_ParamLimits

0x5506,	// (0x00060d7c) control_button_pane_g2

0x5512,	// (0x00060d88) control_button_pane_g3_ParamLimits

0x5512,	// (0x00060d88) control_button_pane_g3

0x0002,

0xfc08,	// (0x0006b47e) control_button_pane_g_ParamLimits

0xfc08,	// (0x0006b47e) control_button_pane_g

0x5526,	// (0x00060d9c) control_button_pane_t1

0x5534,	// (0x00060daa) control_button_pane_t2

0x0001,

0xfc0f,	// (0x0006b485) control_button_pane_t

0x2397,	// (0x0005dc0d) bg_button_pane_g1

0x23a7,	// (0x0005dc1d) bg_button_pane_g2

0x239f,	// (0x0005dc15) bg_button_pane_g3

0x23b7,	// (0x0005dc2d) bg_button_pane_g4

0x23af,	// (0x0005dc25) bg_button_pane_g5

0x23bf,	// (0x0005dc35) bg_button_pane_g6

0x23c7,	// (0x0005dc3d) bg_button_pane_g7

0x23d7,	// (0x0005dc4d) bg_button_pane_g8

0x23cf,	// (0x0005dc45) bg_button_pane_g9

0x0008,

0xf850,	// (0x0006b0c6) bg_button_pane_g

0x4b16,	// (0x0006038c) common_borders_pane_ParamLimits

0x4b16,	// (0x0006038c) common_borders_pane

0x54c6,	// (0x00060d3c) eswt_control_pane_g1_copy1_ParamLimits

0x54c6,	// (0x00060d3c) eswt_control_pane_g1_copy1

0x54d3,	// (0x00060d49) eswt_control_pane_g2_copy1_ParamLimits

0x54d3,	// (0x00060d49) eswt_control_pane_g2_copy1

0x54e0,	// (0x00060d56) eswt_control_pane_g3_copy1_ParamLimits

0x54e0,	// (0x00060d56) eswt_control_pane_g3_copy1

0x54ed,	// (0x00060d63) eswt_control_pane_g4_copy1_ParamLimits

0x54ed,	// (0x00060d63) eswt_control_pane_g4_copy1

0x4b51,	// (0x000603c7) bg_eswt_ctrl_canvas_pane_g1

0x4b16,	// (0x0006038c) common_borders_pane_cp2_ParamLimits

0x4b16,	// (0x0006038c) common_borders_pane_cp2

0x4b16,	// (0x0006038c) common_borders_pane_cp3_ParamLimits

0x4b16,	// (0x0006038c) common_borders_pane_cp3

0x5542,	// (0x00060db8) separator_horizontal_pane

0x554a,	// (0x00060dc0) separator_vertical_pane

0x54c6,	// (0x00060d3c) eswt_control_pane_g1_copy2_ParamLimits

0x54c6,	// (0x00060d3c) eswt_control_pane_g1_copy2

0x54d3,	// (0x00060d49) eswt_control_pane_g2_copy2_ParamLimits

0x54d3,	// (0x00060d49) eswt_control_pane_g2_copy2

0x54e0,	// (0x00060d56) eswt_control_pane_g3_copy2_ParamLimits

0x54e0,	// (0x00060d56) eswt_control_pane_g3_copy2

0x54ed,	// (0x00060d63) eswt_control_pane_g4_copy2_ParamLimits

0x54ed,	// (0x00060d63) eswt_control_pane_g4_copy2

0x7e50,	// (0x000636c6) common_borders_pane_cp4

0x5553,	// (0x00060dc9) separator_horizontal_pane_g1

0x555c,	// (0x00060dd2) separator_horizontal_pane_g2

0x5565,	// (0x00060ddb) separator_horizontal_pane_g3

0x0002,

0xfc14,	// (0x0006b48a) separator_horizontal_pane_g

0x54c6,	// (0x00060d3c) eswt_control_pane_g1_copy3_ParamLimits

0x54c6,	// (0x00060d3c) eswt_control_pane_g1_copy3

0x54d3,	// (0x00060d49) eswt_control_pane_g2_copy3_ParamLimits

0x54d3,	// (0x00060d49) eswt_control_pane_g2_copy3

0x54e0,	// (0x00060d56) eswt_control_pane_g3_copy3_ParamLimits

0x54e0,	// (0x00060d56) eswt_control_pane_g3_copy3

0x54ed,	// (0x00060d63) eswt_control_pane_g4_copy3_ParamLimits

0x54ed,	// (0x00060d63) eswt_control_pane_g4_copy3

0x7e50,	// (0x000636c6) common_borders_pane_cp5

0x556e,	// (0x00060de4) separator_vertical_pane_g1

0x5577,	// (0x00060ded) separator_vertical_pane_g2

0x5580,	// (0x00060df6) separator_vertical_pane_g3

0x0002,

0xfc1b,	// (0x0006b491) separator_vertical_pane_g

0x54c6,	// (0x00060d3c) eswt_control_pane_g1_copy4_ParamLimits

0x54c6,	// (0x00060d3c) eswt_control_pane_g1_copy4

0x54d3,	// (0x00060d49) eswt_control_pane_g2_copy4_ParamLimits

0x54d3,	// (0x00060d49) eswt_control_pane_g2_copy4

0x54e0,	// (0x00060d56) eswt_control_pane_g3_copy4_ParamLimits

0x54e0,	// (0x00060d56) eswt_control_pane_g3_copy4

0x54ed,	// (0x00060d63) eswt_control_pane_g4_copy4_ParamLimits

0x54ed,	// (0x00060d63) eswt_control_pane_g4_copy4

0xce59,	// (0x000686cf) eswt_ctrl_combo_button_pane

0xce61,	// (0x000686d7) eswt_ctrl_input_pane

0xce69,	// (0x000686df) popup_choice_list_window_cp70

0xce71,	// (0x000686e7) eswt_ctrl_input_pane_t1

0x7e50,	// (0x000636c6) input_focus_pane_cp70

0x4b16,	// (0x0006038c) bg_button_pane_cp70_ParamLimits

0x4b16,	// (0x0006038c) bg_button_pane_cp70

0xce7f,	// (0x000686f5) eswt_ctrl_combo_button_pane_g1

0x55b7,	// (0x00060e2d) wait_bar_pane_cp70

0x2423,	// (0x0005dc99) bg_popup_window_pane_cp70_ParamLimits

0x2423,	// (0x0005dc99) bg_popup_window_pane_cp70

0x55bf,	// (0x00060e35) popup_eswt_tasktip_window_t1

0x55d5,	// (0x00060e4b) wait_bar_pane_cp71_ParamLimits

0x55d5,	// (0x00060e4b) wait_bar_pane_cp71

0x55e1,	// (0x00060e57) grid_eswt_app_pane

0x8578,	// (0x00063dee) scroll_pane_cp70

0xce87,	// (0x000686fd) cell_eswt_app_pane_ParamLimits

0xce87,	// (0x000686fd) cell_eswt_app_pane

0xceb1,	// (0x00068727) cell_eswt_app_pane_g1_ParamLimits

0xceb1,	// (0x00068727) cell_eswt_app_pane_g1

0xcee0,	// (0x00068756) cell_eswt_app_pane_g2_ParamLimits

0xcee0,	// (0x00068756) cell_eswt_app_pane_g2

0x0001,

0xfc22,	// (0x0006b498) cell_eswt_app_pane_g_ParamLimits

0xfc22,	// (0x0006b498) cell_eswt_app_pane_g

0xcf04,	// (0x0006877a) cell_eswt_app_pane_t1_ParamLimits

0xcf04,	// (0x0006877a) cell_eswt_app_pane_t1

0x569f,	// (0x00060f15) grid_highlight_pane_cp70_ParamLimits

0x569f,	// (0x00060f15) grid_highlight_pane_cp70

0xe0e7,	// (0x0006995d) set_content_pane_g1

0xa48c,	// (0x00065d02) status_small_volume_pane

0xb29d,	// (0x00066b13) status_small_volume_pane_g1

0xb2a5,	// (0x00066b1b) volume_small2_pane

0xb2ae,	// (0x00066b24) volume_small2_pane_g1

0xb2b7,	// (0x00066b2d) volume_small2_pane_g2

0xb2c0,	// (0x00066b36) volume_small2_pane_g3

0xb2c9,	// (0x00066b3f) volume_small2_pane_g4

0xb2d2,	// (0x00066b48) volume_small2_pane_g5

0xb2db,	// (0x00066b51) volume_small2_pane_g6

0xb2e4,	// (0x00066b5a) volume_small2_pane_g7

0xb2ed,	// (0x00066b63) volume_small2_pane_g8

0xb2f6,	// (0x00066b6c) volume_small2_pane_g9

0xb2ff,	// (0x00066b75) volume_small2_pane_g10

0x0009,

0xfc27,	// (0x0006b49d) volume_small2_pane_g

0x4f09,	// (0x0006077f) fep_vkb_top_text_pane_g1_ParamLimits

0xcd91,	// (0x00068607) fep_vkb_top_text_pane_t1_ParamLimits

0x5192,	// (0x00060a08) popup_preview_fixed_window_g3_ParamLimits

0x5192,	// (0x00060a08) popup_preview_fixed_window_g3

0xad3b,	// (0x000665b1) popup_toolbar_trans_pane

0xc66f,	// (0x00067ee5) aid_height_set_list_ParamLimits

0x376a,	// (0x0005efe0) aid_size_parent_ParamLimits

0x1e70,	// (0x0005d6e6) list_highlight_pane_cp2_ParamLimits

0xe0e7,	// (0x0006995d) set_content_pane_g1_ParamLimits

0xc80d,	// (0x00068083) list_single_image_pane_ParamLimits

0xc80d,	// (0x00068083) list_single_image_pane

0xcf36,	// (0x000687ac) aid_size_cell_image_ParamLimits

0xcf36,	// (0x000687ac) aid_size_cell_image

0xcf43,	// (0x000687b9) grid_single_image_pane_ParamLimits

0xcf43,	// (0x000687b9) grid_single_image_pane

0x51c0,	// (0x00060a36) list_single_image_pane_g1_ParamLimits

0x51c0,	// (0x00060a36) list_single_image_pane_g1

0x51cc,	// (0x00060a42) list_single_image_pane_g2_ParamLimits

0x51cc,	// (0x00060a42) list_single_image_pane_g2

0x0001,

0xfc3c,	// (0x0006b4b2) list_single_image_pane_g_ParamLimits

0xfc3c,	// (0x0006b4b2) list_single_image_pane_g

0x56c6,	// (0x00060f3c) list_single_image_pane_t1_ParamLimits

0x56c6,	// (0x00060f3c) list_single_image_pane_t1

0xcf4f,	// (0x000687c5) cell_image_list_pane_ParamLimits

0xcf4f,	// (0x000687c5) cell_image_list_pane

0xcf63,	// (0x000687d9) cell_image_list_pane_g1

0xcf6c,	// (0x000687e2) cell_image_list_pane_g2

0x0001,

0xfc41,	// (0x0006b4b7) cell_image_list_pane_g

0xcf75,	// (0x000687eb) aid_size_cell_tb_trans_pane

0x8272,	// (0x00063ae8) bg_tb_trans_pane

0xcf87,	// (0x000687fd) grid_tb_trans_pane

0x2397,	// (0x0005dc0d) bg_tb_trans_pane_g1

0x23a7,	// (0x0005dc1d) bg_tb_trans_pane_g2

0x239f,	// (0x0005dc15) bg_tb_trans_pane_g3

0x23b7,	// (0x0005dc2d) bg_tb_trans_pane_g4

0x23af,	// (0x0005dc25) bg_tb_trans_pane_g5

0x23d7,	// (0x0005dc4d) bg_tb_trans_pane_g6

0x23cf,	// (0x0005dc45) bg_tb_trans_pane_g7

0x23bf,	// (0x0005dc35) bg_tb_trans_pane_g8

0x23c7,	// (0x0005dc3d) bg_tb_trans_pane_g9

0x0008,

0xfc46,	// (0x0006b4bc) bg_tb_trans_pane_g

0xcf9b,	// (0x00068811) cell_toolbar_trans_pane_ParamLimits

0xcf9b,	// (0x00068811) cell_toolbar_trans_pane

0x4b51,	// (0x000603c7) cell_toolbar_trans_pane_g1

0xcad6,	// (0x0006834c) list_form2_midp_pane_t1

0xcae4,	// (0x0006835a) list_form2_midp_pane_t2

0x0001,

0xfae3,	// (0x0006b359) list_form2_midp_pane_t

0x4738,	// (0x0005ffae) scroll_pane_cp51_ParamLimits

0x48f4,	// (0x0006016a) form2_midp_wait_pane_g1

0x48fd,	// (0x00060173) form2_midp_wait_pane_g2

0x4906,	// (0x0006017c) form2_midp_wait_pane_g3

0x0002,

0xfaf8,	// (0x0006b36e) form2_midp_wait_pane_g

0x7eb2,	// (0x00063728) list_highlight_pane_cp21_ParamLimits

0x494e,	// (0x000601c4) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x495d,	// (0x000601d3) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x391e,	// (0x0005f194) list_single_2graphic_im_pane_ParamLimits

0x391e,	// (0x0005f194) list_single_2graphic_im_pane

0xcfc1,	// (0x00068837) list_single_2graphic_im_pane_g1_ParamLimits

0xcfc1,	// (0x00068837) list_single_2graphic_im_pane_g1

0xcfd2,	// (0x00068848) list_single_2graphic_im_pane_g2_ParamLimits

0xcfd2,	// (0x00068848) list_single_2graphic_im_pane_g2

0xcfde,	// (0x00068854) list_single_2graphic_im_pane_g3_ParamLimits

0xcfde,	// (0x00068854) list_single_2graphic_im_pane_g3

0x0003,

0xfc59,	// (0x0006b4cf) list_single_2graphic_im_pane_g_ParamLimits

0xfc59,	// (0x0006b4cf) list_single_2graphic_im_pane_g

0xcff2,	// (0x00068868) list_single_2graphic_im_pane_t1_ParamLimits

0xcff2,	// (0x00068868) list_single_2graphic_im_pane_t1

0x519e,	// (0x00060a14) list_single_graphic_2heading_pane_fp_ParamLimits

0x519e,	// (0x00060a14) list_single_graphic_2heading_pane_fp

0xe70b,	// (0x00069f81) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xe70b,	// (0x00069f81) list_single_graphic_2heading_pane_fp_g1

0x51b4,	// (0x00060a2a) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x51b4,	// (0x00060a2a) list_single_graphic_2heading_pane_fp_g2

0x51c0,	// (0x00060a36) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x51c0,	// (0x00060a36) list_single_graphic_2heading_pane_fp_g3

0x51cc,	// (0x00060a42) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x51cc,	// (0x00060a42) list_single_graphic_2heading_pane_fp_g4

0x51e0,	// (0x00060a56) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x51e0,	// (0x00060a56) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb80,	// (0x0006b3f6) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb80,	// (0x0006b3f6) list_single_graphic_2heading_pane_fp_g

0xe829,	// (0x0006a09f) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe829,	// (0x0006a09f) list_single_graphic_2heading_pane_fp_t1

0xe743,	// (0x00069fb9) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xe743,	// (0x00069fb9) list_single_graphic_2heading_pane_fp_t2

0xe83f,	// (0x0006a0b5) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe83f,	// (0x0006a0b5) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc62,	// (0x0006b4d8) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc62,	// (0x0006b4d8) list_single_graphic_2heading_pane_fp_t

0x4bdd,	// (0x00060453) fep_hwr_write_pane_g5_ParamLimits

0x4bdd,	// (0x00060453) fep_hwr_write_pane_g5

0x4be9,	// (0x0006045f) fep_hwr_write_pane_g6_ParamLimits

0x4be9,	// (0x0006045f) fep_hwr_write_pane_g6

0xce39,	// (0x000686af) eswt_shell_pane_ParamLimits

0x2423,	// (0x0005dc99) bg_popup_window_pane_cp18_ParamLimits

0x36b2,	// (0x0005ef28) heading_pane_cp70

0x55bf,	// (0x00060e35) popup_eswt_tasktip_window_t1_ParamLimits

0xae58,	// (0x000666ce) aid_touch_tab_arrow_left

0xae6e,	// (0x000666e4) aid_touch_tab_arrow_right

0x9298,	// (0x00064b0e) title_pane_g3_ParamLimits

0x9298,	// (0x00064b0e) title_pane_g3

0x823a,	// (0x00063ab0) set_value_pane_g1

0xad3b,	// (0x000665b1) popup_toolbar_trans_pane_ParamLimits

0xcf75,	// (0x000687eb) aid_size_cell_tb_trans_pane_ParamLimits

0x8272,	// (0x00063ae8) bg_tb_trans_pane_ParamLimits

0xcf87,	// (0x000687fd) grid_tb_trans_pane_ParamLimits

0x7fea,	// (0x00063860) cont_note_pane_ParamLimits

0x7fea,	// (0x00063860) cont_note_pane

0x8166,	// (0x000639dc) cont_snote2_single_text_pane_ParamLimits

0x8166,	// (0x000639dc) cont_snote2_single_text_pane

0x8166,	// (0x000639dc) cont_snote2_single_graphic_pane_ParamLimits

0x8166,	// (0x000639dc) cont_snote2_single_graphic_pane

0x2a35,	// (0x0005e2ab) cont_note_wait_pane_ParamLimits

0x2a35,	// (0x0005e2ab) cont_note_wait_pane

0x2a35,	// (0x0005e2ab) cont_note_image_pane_ParamLimits

0x2a35,	// (0x0005e2ab) cont_note_image_pane

0x57bc,	// (0x00061032) popup_note2_window_g1_ParamLimits

0x57bc,	// (0x00061032) popup_note2_window_g1

0xd030,	// (0x000688a6) popup_note2_window_t1_ParamLimits

0xd030,	// (0x000688a6) popup_note2_window_t1

0xd075,	// (0x000688eb) popup_note2_window_t2_ParamLimits

0xd075,	// (0x000688eb) popup_note2_window_t2

0xd0ba,	// (0x00068930) popup_note2_window_t3_ParamLimits

0xd0ba,	// (0x00068930) popup_note2_window_t3

0x58bc,	// (0x00061132) popup_note2_window_t4_ParamLimits

0x58bc,	// (0x00061132) popup_note2_window_t4

0x806e,	// (0x000638e4) popup_note2_window_t5_ParamLimits

0x806e,	// (0x000638e4) popup_note2_window_t5

0x0004,

0xfc6e,	// (0x0006b4e4) popup_note2_window_t_ParamLimits

0xfc6e,	// (0x0006b4e4) popup_note2_window_t

0x58eb,	// (0x00061161) popup_note2_image_window_g1_ParamLimits

0x58eb,	// (0x00061161) popup_note2_image_window_g1

0xd0ff,	// (0x00068975) popup_note2_image_window_g2_ParamLimits

0xd0ff,	// (0x00068975) popup_note2_image_window_g2

0x0001,

0xfc79,	// (0x0006b4ef) popup_note2_image_window_g_ParamLimits

0xfc79,	// (0x0006b4ef) popup_note2_image_window_g

0x5909,	// (0x0006117f) popup_note2_image_window_t1_ParamLimits

0x5909,	// (0x0006117f) popup_note2_image_window_t1

0x5921,	// (0x00061197) popup_note2_image_window_t2_ParamLimits

0x5921,	// (0x00061197) popup_note2_image_window_t2

0x5939,	// (0x000611af) popup_note2_image_window_t3_ParamLimits

0x5939,	// (0x000611af) popup_note2_image_window_t3

0x0002,

0xfc7e,	// (0x0006b4f4) popup_note2_image_window_t_ParamLimits

0xfc7e,	// (0x0006b4f4) popup_note2_image_window_t

0x2a43,	// (0x0005e2b9) popup_note2_wait_window_g1_ParamLimits

0x2a43,	// (0x0005e2b9) popup_note2_wait_window_g1

0x2a4f,	// (0x0005e2c5) popup_note2_wait_window_g2_ParamLimits

0x2a4f,	// (0x0005e2c5) popup_note2_wait_window_g2

0x2a5b,	// (0x0005e2d1) popup_note2_wait_window_g3_ParamLimits

0x2a5b,	// (0x0005e2d1) popup_note2_wait_window_g3

0x0002,

0xf832,	// (0x0006b0a8) popup_note2_wait_window_g_ParamLimits

0xf832,	// (0x0006b0a8) popup_note2_wait_window_g

0x5955,	// (0x000611cb) popup_note2_wait_window_t1_ParamLimits

0x5955,	// (0x000611cb) popup_note2_wait_window_t1

0x5973,	// (0x000611e9) popup_note2_wait_window_t2_ParamLimits

0x5973,	// (0x000611e9) popup_note2_wait_window_t2

0x5991,	// (0x00061207) popup_note2_wait_window_t3_ParamLimits

0x5991,	// (0x00061207) popup_note2_wait_window_t3

0x59a3,	// (0x00061219) popup_note2_wait_window_t4_ParamLimits

0x59a3,	// (0x00061219) popup_note2_wait_window_t4

0x0003,

0xfc85,	// (0x0006b4fb) popup_note2_wait_window_t_ParamLimits

0xfc85,	// (0x0006b4fb) popup_note2_wait_window_t

0x59b5,	// (0x0006122b) wait_bar2_pane_ParamLimits

0x59b5,	// (0x0006122b) wait_bar2_pane

0x59cd,	// (0x00061243) popup_snote2_single_text_window_g1_ParamLimits

0x59cd,	// (0x00061243) popup_snote2_single_text_window_g1

0x59f5,	// (0x0006126b) popup_snote2_single_text_window_t1_ParamLimits

0x59f5,	// (0x0006126b) popup_snote2_single_text_window_t1

0x5a41,	// (0x000612b7) popup_snote2_single_text_window_t2_ParamLimits

0x5a41,	// (0x000612b7) popup_snote2_single_text_window_t2

0x5a8d,	// (0x00061303) popup_snote2_single_text_window_t3_ParamLimits

0x5a8d,	// (0x00061303) popup_snote2_single_text_window_t3

0x5ace,	// (0x00061344) popup_snote2_single_text_window_t4_ParamLimits

0x5ace,	// (0x00061344) popup_snote2_single_text_window_t4

0x5b04,	// (0x0006137a) popup_snote2_single_text_window_t5_ParamLimits

0x5b04,	// (0x0006137a) popup_snote2_single_text_window_t5

0x0004,

0xfc8e,	// (0x0006b504) popup_snote2_single_text_window_t_ParamLimits

0xfc8e,	// (0x0006b504) popup_snote2_single_text_window_t

0xd111,	// (0x00068987) popup_snote2_single_graphic_window_g1_ParamLimits

0xd111,	// (0x00068987) popup_snote2_single_graphic_window_g1

0x5b57,	// (0x000613cd) popup_snote2_single_graphic_window_g2_ParamLimits

0x5b57,	// (0x000613cd) popup_snote2_single_graphic_window_g2

0x0001,

0xfc99,	// (0x0006b50f) popup_snote2_single_graphic_window_g_ParamLimits

0xfc99,	// (0x0006b50f) popup_snote2_single_graphic_window_g

0x5b7f,	// (0x000613f5) popup_snote2_single_graphic_window_t1_ParamLimits

0x5b7f,	// (0x000613f5) popup_snote2_single_graphic_window_t1

0x5bcb,	// (0x00061441) popup_snote2_single_graphic_window_t2_ParamLimits

0x5bcb,	// (0x00061441) popup_snote2_single_graphic_window_t2

0x5a8d,	// (0x00061303) popup_snote2_single_graphic_window_t3_ParamLimits

0x5a8d,	// (0x00061303) popup_snote2_single_graphic_window_t3

0x5ace,	// (0x00061344) popup_snote2_single_graphic_window_t4_ParamLimits

0x5ace,	// (0x00061344) popup_snote2_single_graphic_window_t4

0x5b04,	// (0x0006137a) popup_snote2_single_graphic_window_t5_ParamLimits

0x5b04,	// (0x0006137a) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9e,	// (0x0006b514) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9e,	// (0x0006b514) popup_snote2_single_graphic_window_t

0x45f5,	// (0x0005fe6b) clock_nsta_pane_cp2_t1

0x45f5,	// (0x0005fe6b) clock_nsta_pane_cp2_t2

0x0001,

0xfab9,	// (0x0006b32f) clock_nsta_pane_cp2_t

0xdf7c,	// (0x000697f2) form_field_data_wide_pane_g1_ParamLimits

0x8280,	// (0x00063af6) form_field_data_wide_pane_g2_ParamLimits

0x8280,	// (0x00063af6) form_field_data_wide_pane_g2

0x828c,	// (0x00063b02) form_field_data_wide_pane_g3_ParamLimits

0x828c,	// (0x00063b02) form_field_data_wide_pane_g3

0x0002,

0xf671,	// (0x0006aee7) form_field_data_wide_pane_g_ParamLimits

0xf671,	// (0x0006aee7) form_field_data_wide_pane_g

0xc9f9,	// (0x0006826f) grid_touch_3_pane_ParamLimits

0xc9f9,	// (0x0006826f) grid_touch_3_pane

0xd139,	// (0x000689af) cell_touch_3_pane_ParamLimits

0xd139,	// (0x000689af) cell_touch_3_pane

0x4b51,	// (0x000603c7) cell_touch_3_pane_g1

0x4b51,	// (0x000603c7) cell_touch_3_pane_g2

0x0001,

0xfb3e,	// (0x0006b3b4) cell_touch_3_pane_g

0x80a0,	// (0x00063916) cont_query_data_pane

0x80a8,	// (0x0006391e) cont_query_data_pane_cp1

0x5c45,	// (0x000614bb) button_value_adjust_pane_cp7

0x5c4d,	// (0x000614c3) query_popup_pane_cp3

0xbb84,	// (0x000673fa) bg_popup_sub_pane_cp22_ParamLimits

0xa158,	// (0x000659ce) navi_navi_volume_pane_cp2

0xa167,	// (0x000659dd) popup_side_volume_key_window_g2

0xa176,	// (0x000659ec) popup_side_volume_key_window_g3

0x0002,

0xf707,	// (0x0006af7d) popup_side_volume_key_window_g

0xa185,	// (0x000659fb) popup_side_volume_key_window_t2

0x0001,

0xf70e,	// (0x0006af84) popup_side_volume_key_window_t

0xa2d6,	// (0x00065b4c) popup_side_volume_key_window_ParamLimits

0x9a36,	// (0x000652ac) list_double_graphic_pane_g4_ParamLimits

0x9a36,	// (0x000652ac) list_double_graphic_pane_g4

0xc7e8,	// (0x0006805e) list_single_2heading_msg_pane_ParamLimits

0xc7e8,	// (0x0006805e) list_single_2heading_msg_pane

0xd182,	// (0x000689f8) list_single_2heading_msg_pane_g1_ParamLimits

0xd182,	// (0x000689f8) list_single_2heading_msg_pane_g1

0xd18e,	// (0x00068a04) list_single_2heading_msg_pane_g2_ParamLimits

0xd18e,	// (0x00068a04) list_single_2heading_msg_pane_g2

0xd1a1,	// (0x00068a17) list_single_2heading_msg_pane_g3_ParamLimits

0xd1a1,	// (0x00068a17) list_single_2heading_msg_pane_g3

0xd1ad,	// (0x00068a23) list_single_2heading_msg_pane_g4_ParamLimits

0xd1ad,	// (0x00068a23) list_single_2heading_msg_pane_g4

0x0003,

0xfca9,	// (0x0006b51f) list_single_2heading_msg_pane_g_ParamLimits

0xfca9,	// (0x0006b51f) list_single_2heading_msg_pane_g

0xb308,	// (0x00066b7e) list_single_2heading_msg_pane_t1_ParamLimits

0xb308,	// (0x00066b7e) list_single_2heading_msg_pane_t1

0xb330,	// (0x00066ba6) list_single_2heading_msg_pane_t2_ParamLimits

0xb330,	// (0x00066ba6) list_single_2heading_msg_pane_t2

0xb39b,	// (0x00066c11) list_single_2heading_msg_pane_t3_ParamLimits

0xb39b,	// (0x00066c11) list_single_2heading_msg_pane_t3

0xe85f,	// (0x0006a0d5) list_single_2heading_msg_pane_t4_ParamLimits

0xe85f,	// (0x0006a0d5) list_single_2heading_msg_pane_t4

0x0003,

0xfcb2,	// (0x0006b528) list_single_2heading_msg_pane_t_ParamLimits

0xfcb2,	// (0x0006b528) list_single_2heading_msg_pane_t

0x7e6e,	// (0x000636e4) title_pane_g4_ParamLimits

0x7e6e,	// (0x000636e4) title_pane_g4

0xf176,	// (0x0006a9ec) title_pane_stacon_g3_ParamLimits

0xf176,	// (0x0006a9ec) title_pane_stacon_g3

0x577f,	// (0x00060ff5) list_single_2graphic_im_pane_g4_ParamLimits

0x577f,	// (0x00060ff5) list_single_2graphic_im_pane_g4

0xc51c,	// (0x00067d92) popup_side_volume_key_window_cp

0x3ceb,	// (0x0005f561) main_idle_act2_pane_t1

0x0779,	// (0x0005bfef) toolbar_button_pane_g10

0x98a2,	// (0x00065118) popup_toolbar_window_cp1

0x45e6,	// (0x0005fe5c) clock_nsta_pane_cp_t1

0x45e6,	// (0x0005fe5c) clock_nsta_pane_cp_t2

0x0001,

0xfab4,	// (0x0006b32a) clock_nsta_pane_cp_t

0xa158,	// (0x000659ce) navi_navi_volume_pane_cp2_ParamLimits

0xf34a,	// (0x0006abc0) popup_side_volume_key_window_g1_ParamLimits

0xa167,	// (0x000659dd) popup_side_volume_key_window_g2_ParamLimits

0xa176,	// (0x000659ec) popup_side_volume_key_window_g3_ParamLimits

0xf707,	// (0x0006af7d) popup_side_volume_key_window_g_ParamLimits

0x0d29,	// (0x0005c59f) fep_hwr_aid_pane

0x0dd0,	// (0x0005c646) bg_fep_hwr_top_pane_g4_ParamLimits

0x4bad,	// (0x00060423) fep_hwr_top_pane_g1_ParamLimits

0x4bbf,	// (0x00060435) fep_hwr_top_pane_g2_ParamLimits

0x0df0,	// (0x0005c666) fep_hwr_top_pane_g3_ParamLimits

0xfb09,	// (0x0006b37f) fep_hwr_top_pane_g_ParamLimits

0x0e05,	// (0x0005c67b) fep_hwr_top_text_pane_ParamLimits

0x323f,	// (0x0005eab5) aid_touch_tab_arrow_arrow_2

0x3248,	// (0x0005eabe) aid_touch_tab_arrow_left_2

0x0d3d,	// (0x0005c5b3) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0d74,	// (0x0005c5ea) fep_hwr_prediction_pane

0x4d18,	// (0x0006058e) fep_vkb_prediction_pane

0xcd71,	// (0x000685e7) fep_vkb_side_pane_g3_ParamLimits

0xcd71,	// (0x000685e7) fep_vkb_side_pane_g3

0x0f80,	// (0x0005c7f6) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x0fec,	// (0x0005c862) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0ff9,	// (0x0005c86f) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb8,	// (0x0006b42e) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x11f7,	// (0x0005ca6d) fep_hwr_prediction_pane_g1

0x1201,	// (0x0005ca77) fep_hwr_prediction_pane_g2

0x1209,	// (0x0005ca7f) fep_hwr_prediction_pane_g3

0x1211,	// (0x0005ca87) fep_hwr_prediction_pane_g4

0x0003,

0xfcbb,	// (0x0006b531) fep_hwr_prediction_pane_g

0x5c72,	// (0x000614e8) fep_vkb_prediction_pane_g1

0x5c7c,	// (0x000614f2) fep_vkb_prediction_pane_g2

0x5c84,	// (0x000614fa) fep_vkb_prediction_pane_g3

0x5c8c,	// (0x00061502) fep_vkb_prediction_pane_g4

0x0003,

0xfcc4,	// (0x0006b53a) fep_vkb_prediction_pane_g

0xb0fa,	// (0x00066970) slider_set_pane_g3

0xb10e,	// (0x00066984) slider_set_pane_g4

0xb126,	// (0x0006699c) slider_set_pane_g5

0xb0fa,	// (0x00066970) slider_set_pane_g6

0xb13c,	// (0x000669b2) slider_set_pane_g7

0x38cb,	// (0x0005f141) slider_form_pane_g3

0x38d4,	// (0x0005f14a) slider_form_pane_g4

0x38dc,	// (0x0005f152) slider_form_pane_g5

0x38cb,	// (0x0005f141) slider_form_pane_g6

0xc7ba,	// (0x00068030) slider_form_pane_g7

0x40fd,	// (0x0005f973) slider_set_pane_vc_g3

0x4106,	// (0x0005f97c) slider_set_pane_vc_g4

0x410f,	// (0x0005f985) slider_set_pane_vc_g5

0x40fd,	// (0x0005f973) slider_set_pane_vc_g6

0x4118,	// (0x0005f98e) slider_set_pane_vc_g7

0x42ca,	// (0x0005fb40) slider_form_pane_vc_g1

0x42d3,	// (0x0005fb49) slider_form_pane_vc_g2

0x42dc,	// (0x0005fb52) slider_form_pane_vc_g3

0x42ca,	// (0x0005fb40) slider_form_pane_vc_g4

0x42e5,	// (0x0005fb5b) slider_form_pane_vc_g5

0x0004,

0xfa86,	// (0x0006b2fc) slider_form_pane_vc_g

0xddf5,	// (0x0006966b) main_idle_act3_pane

0x5c94,	// (0x0006150a) ai3_links_pane

0xd1c5,	// (0x00068a3b) popup_ai3_data_window_ParamLimits

0xd1c5,	// (0x00068a3b) popup_ai3_data_window

0x7e50,	// (0x000636c6) grid_ai3_links_pane

0xd1dd,	// (0x00068a53) cell_ai3_links_pane_ParamLimits

0xd1dd,	// (0x00068a53) cell_ai3_links_pane

0x5ccd,	// (0x00061543) bg_popup_sub_pane_cp11

0x5cda,	// (0x00061550) cell_ai3_links_pane_g1

0x7e50,	// (0x000636c6) bg_popup_sub_pane_cp12

0x5cff,	// (0x00061575) heading_ai3_data_pane

0x5d07,	// (0x0006157d) list_ai3_gene_pane

0x5d13,	// (0x00061589) popup_ai3_data_window_g1

0x5d1b,	// (0x00061591) heading_ai3_data_pane_g1

0x5d23,	// (0x00061599) heading_ai3_data_pane_t1

0xd1f7,	// (0x00068a6d) list_double_ai3_gene_pane_ParamLimits

0xd1f7,	// (0x00068a6d) list_double_ai3_gene_pane

0x5d3e,	// (0x000615b4) list_single_ai3_gene_pane_ParamLimits

0x5d3e,	// (0x000615b4) list_single_ai3_gene_pane

0x4b16,	// (0x0006038c) list_highlight_pane_cp7_ParamLimits

0x4b16,	// (0x0006038c) list_highlight_pane_cp7

0x5d4b,	// (0x000615c1) list_single_a13_gene_pane_t1_ParamLimits

0x5d4b,	// (0x000615c1) list_single_a13_gene_pane_t1

0x5d62,	// (0x000615d8) list_single_ai3_gene_pane_g1

0x5d6b,	// (0x000615e1) list_single_ai3_gene_pane_g2

0x0001,

0xfccd,	// (0x0006b543) list_single_ai3_gene_pane_g

0x5d73,	// (0x000615e9) list_double_ai3_gene_pane_g1_ParamLimits

0x5d73,	// (0x000615e9) list_double_ai3_gene_pane_g1

0xd204,	// (0x00068a7a) list_double_ai3_gene_pane_t1_ParamLimits

0xd204,	// (0x00068a7a) list_double_ai3_gene_pane_t1

0x5d9b,	// (0x00061611) list_double_ai3_gene_pane_t2_ParamLimits

0x5d9b,	// (0x00061611) list_double_ai3_gene_pane_t2

0x5db0,	// (0x00061626) list_double_ai3_gene_pane_t3_ParamLimits

0x5db0,	// (0x00061626) list_double_ai3_gene_pane_t3

0x0002,

0xfcd2,	// (0x0006b548) list_double_ai3_gene_pane_t_ParamLimits

0xfcd2,	// (0x0006b548) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe855,	// (0x0006a0cb) aid_size_min_col_2

0xd16c,	// (0x000689e2) aid_size_min_msg_ParamLimits

0xd16c,	// (0x000689e2) aid_size_min_msg

0xcd85,	// (0x000685fb) fep_vkb_top_text_pane_g2_ParamLimits

0xcd85,	// (0x000685fb) fep_vkb_top_text_pane_g2

0x0001,

0xfb39,	// (0x0006b3af) fep_vkb_top_text_pane_g_ParamLimits

0xfb39,	// (0x0006b3af) fep_vkb_top_text_pane_g

0xddf5,	// (0x0006966b) main_hc_apps_shell_pane

0x5dcd,	// (0x00061643) grid_hc_apps_pane_ParamLimits

0x5dcd,	// (0x00061643) grid_hc_apps_pane

0x5ddc,	// (0x00061652) list_hc_apps_pane

0x5de4,	// (0x0006165a) scroll_pane_cp37_ParamLimits

0x5de4,	// (0x0006165a) scroll_pane_cp37

0xd220,	// (0x00068a96) cell_hc_apps_pane_ParamLimits

0xd220,	// (0x00068a96) cell_hc_apps_pane

0xd2de,	// (0x00068b54) cell_hc_apps_pane_g1_ParamLimits

0xd2de,	// (0x00068b54) cell_hc_apps_pane_g1

0x5ecf,	// (0x00061745) cell_hc_apps_pane_g2_ParamLimits

0x5ecf,	// (0x00061745) cell_hc_apps_pane_g2

0x5eeb,	// (0x00061761) cell_hc_apps_pane_g3_ParamLimits

0x5eeb,	// (0x00061761) cell_hc_apps_pane_g3

0x0002,

0xfcd9,	// (0x0006b54f) cell_hc_apps_pane_g_ParamLimits

0xfcd9,	// (0x0006b54f) cell_hc_apps_pane_g

0xd30b,	// (0x00068b81) cell_hc_apps_pane_t1_ParamLimits

0xd30b,	// (0x00068b81) cell_hc_apps_pane_t1

0x7fea,	// (0x00063860) grid_highlight_pane_cp10_ParamLimits

0x7fea,	// (0x00063860) grid_highlight_pane_cp10

0xd349,	// (0x00068bbf) list_single_hc_apps_pane_ParamLimits

0xd349,	// (0x00068bbf) list_single_hc_apps_pane

0xd379,	// (0x00068bef) list_single_hc_apps_pane_g1

0xd392,	// (0x00068c08) list_single_hc_apps_pane_g2

0x0001,

0xfce0,	// (0x0006b556) list_single_hc_apps_pane_g

0xd3ab,	// (0x00068c21) list_single_hc_apps_pane_g2_copy1

0xb409,	// (0x00066c7f) list_single_hc_apps_pane_t1

0x7eb2,	// (0x00063728) bg_set_opt_pane_cp_ParamLimits

0x936c,	// (0x00064be2) setting_slider_pane_t1_ParamLimits

0x9385,	// (0x00064bfb) setting_slider_pane_t2_ParamLimits

0x939f,	// (0x00064c15) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0006add4) setting_slider_pane_t_ParamLimits

0x93b7,	// (0x00064c2d) slider_set_pane_ParamLimits

0x0070,	// (0x0005b8e6) control_pane_g5_ParamLimits

0x0070,	// (0x0005b8e6) control_pane_g5

0xc63c,	// (0x00067eb2) slider_set_pane_g1_ParamLimits

0x0a9b,	// (0x0005c311) slider_set_pane_g2_ParamLimits

0xb0fa,	// (0x00066970) slider_set_pane_g3_ParamLimits

0xb10e,	// (0x00066984) slider_set_pane_g4_ParamLimits

0xb126,	// (0x0006699c) slider_set_pane_g5_ParamLimits

0xb0fa,	// (0x00066970) slider_set_pane_g6_ParamLimits

0xb13c,	// (0x000669b2) slider_set_pane_g7_ParamLimits

0xf94e,	// (0x0006b1c4) slider_set_pane_g_ParamLimits

0xe092,	// (0x00069908) navi_icon_text_pane_ParamLimits

0xae21,	// (0x00066697) aid_fill_nsta_2_ParamLimits

0xae58,	// (0x000666ce) aid_touch_tab_arrow_left_ParamLimits

0xae6e,	// (0x000666e4) aid_touch_tab_arrow_right_ParamLimits

0xaf09,	// (0x0006677f) clock_nsta_pane_ParamLimits

0x3221,	// (0x0005ea97) navi_icon_pane_g1_ParamLimits

0x322d,	// (0x0005eaa3) navi_text_pane_t1_ParamLimits

0x46f6,	// (0x0005ff6c) navi_icon_text_pane_g1_ParamLimits

0x4702,	// (0x0005ff78) navi_icon_text_pane_t1_ParamLimits

0xd379,	// (0x00068bef) list_single_hc_apps_pane_g1_ParamLimits

0xd392,	// (0x00068c08) list_single_hc_apps_pane_g2_ParamLimits

0xfce0,	// (0x0006b556) list_single_hc_apps_pane_g_ParamLimits

0xd3ab,	// (0x00068c21) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb409,	// (0x00066c7f) list_single_hc_apps_pane_t1_ParamLimits

0x919d,	// (0x00064a13) popup_toolbar2_fixed_window_ParamLimits

0x919d,	// (0x00064a13) popup_toolbar2_fixed_window

0xad31,	// (0x000665a7) popup_toolbar2_float_window

0x7e50,	// (0x000636c6) bg_popup_sub_pane_cp27

0x5fc9,	// (0x0006183f) grid_toolbar2_float_pane

0x7e50,	// (0x000636c6) bg_popup_sub_pane_cp26

0x5fc9,	// (0x0006183f) grid_toolbar2_fixed_pane

0xd3c7,	// (0x00068c3d) cell_toolbar2_fixed_pane_ParamLimits

0xd3c7,	// (0x00068c3d) cell_toolbar2_fixed_pane

0xd3e1,	// (0x00068c57) cell_toolbar2_fixed_pane_g1

0x054f,	// (0x0005bdc5) toolbar2_fixed_button_pane

0x2397,	// (0x0005dc0d) toolbar2_fixed_button_pane_g1

0x23a7,	// (0x0005dc1d) toolbar2_fixed_button_pane_g2

0x239f,	// (0x0005dc15) toolbar2_fixed_button_pane_g3

0x23b7,	// (0x0005dc2d) toolbar2_fixed_button_pane_g4

0x23af,	// (0x0005dc25) toolbar2_fixed_button_pane_g5

0x23bf,	// (0x0005dc35) toolbar2_fixed_button_pane_g6

0x23c7,	// (0x0005dc3d) toolbar2_fixed_button_pane_g7

0x23d7,	// (0x0005dc4d) toolbar2_fixed_button_pane_g8

0x23cf,	// (0x0005dc45) toolbar2_fixed_button_pane_g9

0x0008,

0xf850,	// (0x0006b0c6) toolbar2_fixed_button_pane_g

0x5fea,	// (0x00061860) cell_toolbar2_float_pane_ParamLimits

0x5fea,	// (0x00061860) cell_toolbar2_float_pane

0x5ffb,	// (0x00061871) cell_toolbar2_float_pane_g1

0x054f,	// (0x0005bdc5) toolbar2_fixed_button_pane_cp

0xcc6d,	// (0x000684e3) fep_vkb_accented_list_pane_ParamLimits

0xcc6d,	// (0x000684e3) fep_vkb_accented_list_pane

0x0f60,	// (0x0005c7d6) bg_popup_fep_shadow_pane_g9

0xe1e4,	// (0x00069a5a) bg_popup_fep_shadow_pane_cp3

0x8378,	// (0x00063bee) list_accented_list_pane

0x6004,	// (0x0006187a) list_single_accented_list_pane_ParamLimits

0x6004,	// (0x0006187a) list_single_accented_list_pane

0xe1e4,	// (0x00069a5a) list_highlight_pane_cp10

0x6015,	// (0x0006188b) list_single_accented_list_pane_t1

0xac5b,	// (0x000664d1) popup_slider_window_ParamLimits

0xac5b,	// (0x000664d1) popup_slider_window

0x5c55,	// (0x000614cb) aid_indentation_list_msg

0xd4d2,	// (0x00068d48) bg_popup_window_pane_cp19

0x613b,	// (0x000619b1) popup_slider_window_g1

0x6157,	// (0x000619cd) popup_slider_window_g2

0x6173,	// (0x000619e9) popup_slider_window_g3

0x0005,

0xfce5,	// (0x0006b55b) popup_slider_window_g

0x61d9,	// (0x00061a4f) popup_slider_window_t1

0x624d,	// (0x00061ac3) small_volume_slider_vertical_pane

0x4b51,	// (0x000603c7) small_volume_slider_vertical_pane_g1

0x4b51,	// (0x000603c7) small_volume_slider_vertical_pane_g2

0x6269,	// (0x00061adf) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf7,	// (0x0006b56d) small_volume_slider_vertical_pane_g

0x90eb,	// (0x00064961) area_side_right_pane_ParamLimits

0x90eb,	// (0x00064961) area_side_right_pane

0xb437,	// (0x00066cad) aid_size_side_button_ParamLimits

0xb437,	// (0x00066cad) aid_size_side_button

0xb450,	// (0x00066cc6) grid_sctrl_middle_pane_ParamLimits

0xb450,	// (0x00066cc6) grid_sctrl_middle_pane

0x127a,	// (0x0005caf0) sctrl_sk_bottom_pane

0x128b,	// (0x0005cb01) sctrl_sk_top_pane

0x129d,	// (0x0005cb13) aid_touch_sctrl_top

0x12aa,	// (0x0005cb20) bg_sctrl_sk_pane_ParamLimits

0x12aa,	// (0x0005cb20) bg_sctrl_sk_pane

0x12b8,	// (0x0005cb2e) sctrl_sk_top_pane_g1

0x12c5,	// (0x0005cb3b) sctrl_sk_top_pane_t1

0x129d,	// (0x0005cb13) aid_touch_sctrl_bottom

0x12aa,	// (0x0005cb20) bg_sctrl_sk_pane_cp_ParamLimits

0x12aa,	// (0x0005cb20) bg_sctrl_sk_pane_cp

0x12e0,	// (0x0005cb56) sctrl_sk_bottom_pane_g1

0x12c5,	// (0x0005cb3b) sctrl_sk_bottom_pane_t1

0xb46a,	// (0x00066ce0) cell_sctrl_middle_pane_ParamLimits

0xb46a,	// (0x00066ce0) cell_sctrl_middle_pane

0xb47b,	// (0x00066cf1) aid_touch_sctrl_middle_ParamLimits

0xb47b,	// (0x00066cf1) aid_touch_sctrl_middle

0xb488,	// (0x00066cfe) bg_sctrl_middle_pane_ParamLimits

0xb488,	// (0x00066cfe) bg_sctrl_middle_pane

0x194d,	// (0x0005d1c3) cell_sctrl_middle_pane_g1_ParamLimits

0x194d,	// (0x0005d1c3) cell_sctrl_middle_pane_g1

0xb496,	// (0x00066d0c) cell_sctrl_middle_pane_g2_ParamLimits

0xb496,	// (0x00066d0c) cell_sctrl_middle_pane_g2

0x0001,

0xfd03,	// (0x0006b579) cell_sctrl_middle_pane_g_ParamLimits

0xfd03,	// (0x0006b579) cell_sctrl_middle_pane_g

0x2397,	// (0x0005dc0d) bg_sctrl_middle_pane_g1

0x239f,	// (0x0005dc15) bg_sctrl_middle_pane_g2

0x23a7,	// (0x0005dc1d) bg_sctrl_middle_pane_g3

0x23af,	// (0x0005dc25) bg_sctrl_middle_pane_g4

0x23b7,	// (0x0005dc2d) bg_sctrl_middle_pane_g5

0x23bf,	// (0x0005dc35) bg_sctrl_middle_pane_g6

0x23c7,	// (0x0005dc3d) bg_sctrl_middle_pane_g7

0x23cf,	// (0x0005dc45) bg_sctrl_middle_pane_g8

0x0007,

0xfd08,	// (0x0006b57e) bg_sctrl_middle_pane_g

0x23d7,	// (0x0005dc4d) bg_sctrl_middle_pane_g8_copy1

0x2397,	// (0x0005dc0d) bg_sctrl_sk_pane_g1

0x23a7,	// (0x0005dc1d) bg_sctrl_sk_pane_g2

0x239f,	// (0x0005dc15) bg_sctrl_sk_pane_g3

0x0008,

0xf850,	// (0x0006b0c6) bg_sctrl_sk_pane_g

0x81b4,	// (0x00063a2a) aid_size_touch_scroll_bar

0x23b7,	// (0x0005dc2d) bg_sctrl_sk_pane_g4

0x23af,	// (0x0005dc25) bg_sctrl_sk_pane_g5

0x23bf,	// (0x0005dc35) bg_sctrl_sk_pane_g6

0x23c7,	// (0x0005dc3d) bg_sctrl_sk_pane_g7

0x23d7,	// (0x0005dc4d) bg_sctrl_sk_pane_g8

0x23cf,	// (0x0005dc45) bg_sctrl_sk_pane_g9

0x0236,	// (0x0005baac) popup_fep_china_hwr2_fs_candidate_window

0xa6fb,	// (0x00065f71) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa6fb,	// (0x00065f71) popup_fep_china_hwr2_fs_control_window

0x0f80,	// (0x0005c7f6) sctrl_sk_top_pane_g2

0x0001,

0xfcfe,	// (0x0006b574) sctrl_sk_top_pane_g

0xd58a,	// (0x00068e00) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd58a,	// (0x00068e00) aid_fep_china_hwr2_fs_cell

0xd59e,	// (0x00068e14) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd59e,	// (0x00068e14) bg_popup_fep_shadow_pane_cp4

0xd5b5,	// (0x00068e2b) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd5b5,	// (0x00068e2b) bg_popup_fep_shadow_pane_cp5

0xd5c7,	// (0x00068e3d) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd5c7,	// (0x00068e3d) popup_fep_china_hwr2_fs_control_bar_grid

0xd5db,	// (0x00068e51) popup_fep_china_hwr2_fs_control_funtion_grid

0x62c5,	// (0x00061b3b) aid_fep_china_hwr2_fs_candi_cell

0x7e50,	// (0x000636c6) bg_popup_fep_shadow_pane_cp6

0x62cf,	// (0x00061b45) popup_fep_china_hwr2_fs_candidate_grid

0xd5e3,	// (0x00068e59) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd5e3,	// (0x00068e59) cell_fep_china_hwr2_fs_funtion_grid

0x4b51,	// (0x000603c7) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6312,	// (0x00061b88) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6312,	// (0x00061b88) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6320,	// (0x00061b96) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6320,	// (0x00061b96) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd19,	// (0x0006b58f) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd19,	// (0x0006b58f) cell_fep_china_hwr2_fs_funtion_grid_g

0xd5fb,	// (0x00068e71) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd5fb,	// (0x00068e71) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd610,	// (0x00068e86) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd610,	// (0x00068e86) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1e,	// (0x0006b594) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1e,	// (0x0006b594) cell_fep_china_hwr2_fs_funtion_grid_t

0x6367,	// (0x00061bdd) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x636f,	// (0x00061be5) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6377,	// (0x00061bed) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd23,	// (0x0006b599) popup_fep_china_hwr2_fs_control_bar_grid_g

0x637f,	// (0x00061bf5) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x637f,	// (0x00061bf5) cell_fep_china_hwr2_fs_candidate_grid

0x6398,	// (0x00061c0e) popup_fep_china_hwr2_fs_candidate_grid_g20

0x63a0,	// (0x00061c16) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4b51,	// (0x000603c7) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4b51,	// (0x000603c7) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3e,	// (0x0006b3b4) cell_fep_china_hwr2_fs_candidate_grid_g

0x63a8,	// (0x00061c1e) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1f90,	// (0x0005d806) clock_nsta_pane_cp_24_ParamLimits

0x1f90,	// (0x0005d806) clock_nsta_pane_cp_24

0x200e,	// (0x0005d884) indicator_nsta_pane_cp_24_ParamLimits

0x200e,	// (0x0005d884) indicator_nsta_pane_cp_24

0x309d,	// (0x0005e913) heading_pane_g1

0x0001,

0xf8b5,	// (0x0006b12b) heading_pane_g

0x3b34,	// (0x0005f3aa) grid_sct_catagory_button_pane

0x3b64,	// (0x0005f3da) scroll_pane_cp5_ParamLimits

0x4744,	// (0x0005ffba) button_value_adjust_pane_cp5_ParamLimits

0x4744,	// (0x0005ffba) button_value_adjust_pane_cp5

0x4823,	// (0x00060099) form2_midp_time_pane_ParamLimits

0x63b6,	// (0x00061c2c) cell_sct_catagory_button_pane_ParamLimits

0x63b6,	// (0x00061c2c) cell_sct_catagory_button_pane

0x4b16,	// (0x0006038c) bg_button_pane_cp01_ParamLimits

0x4b16,	// (0x0006038c) bg_button_pane_cp01

0x4b51,	// (0x000603c7) cell_sct_catagory_button_pane_g1

0xacd4,	// (0x0006654a) popup_tb_extension_window

0xd62c,	// (0x00068ea2) aid_size_cell_ext_ParamLimits

0xd62c,	// (0x00068ea2) aid_size_cell_ext

0x8166,	// (0x000639dc) bg_tb_trans_pane_cp1_ParamLimits

0x8166,	// (0x000639dc) bg_tb_trans_pane_cp1

0xd652,	// (0x00068ec8) grid_tb_ext_pane_ParamLimits

0xd652,	// (0x00068ec8) grid_tb_ext_pane

0xd691,	// (0x00068f07) cell_tb_ext_pane_ParamLimits

0xd691,	// (0x00068f07) cell_tb_ext_pane

0xd6b9,	// (0x00068f2f) cell_tb_ext_pane_g1_ParamLimits

0xd6b9,	// (0x00068f2f) cell_tb_ext_pane_g1

0x644c,	// (0x00061cc2) cell_tb_ext_pane_t1

0x7fea,	// (0x00063860) list_highlight_pane_cp11_ParamLimits

0x7fea,	// (0x00063860) list_highlight_pane_cp11

0x91b2,	// (0x00064a28) popup_uni_indicator_window_ParamLimits

0x91b2,	// (0x00064a28) popup_uni_indicator_window

0x8272,	// (0x00063ae8) bg_popup_sub_pane_cp14

0xd6d6,	// (0x00068f4c) list_uniindi_pane

0xd6e2,	// (0x00068f58) uniindi_top_pane

0x7fea,	// (0x00063860) bg_uniindi_top_pane

0xd701,	// (0x00068f77) uniindi_top_pane_g1

0xd717,	// (0x00068f8d) uniindi_top_pane_g2

0x0003,

0xfd2a,	// (0x0006b5a0) uniindi_top_pane_g

0xd734,	// (0x00068faa) uniindi_top_pane_t1

0x64fd,	// (0x00061d73) list_single_uniindi_pane_ParamLimits

0x64fd,	// (0x00061d73) list_single_uniindi_pane

0x4b51,	// (0x000603c7) bg_uniindi_top_pane_g1

0x650f,	// (0x00061d85) list_single_uniindi_pane_g1

0x6522,	// (0x00061d98) list_single_uniindi_pane_t1

0xddf5,	// (0x0006966b) control_bg_pane

0x6547,	// (0x00061dbd) bg_sctrl_sk_pane_cp1

0x6550,	// (0x00061dc6) bg_sctrl_sk_pane_cp2

0x6559,	// (0x00061dcf) control_bg_pane_g1

0x6562,	// (0x00061dd8) control_bg_pane_g2

0x0001,

0xfd33,	// (0x0006b5a9) control_bg_pane_g

0x459a,	// (0x0005fe10) cell_indicator_nsta_pane_g1_ParamLimits

0xca34,	// (0x000682aa) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa2,	// (0x0006b318) cell_indicator_nsta_pane_g_ParamLimits

0xe6d4,	// (0x00069f4a) form2_midp_time_pane_t1_ParamLimits

0x0d1b,	// (0x0005c591) main_idle_act4_pane_ParamLimits

0x0d1b,	// (0x0005c591) main_idle_act4_pane

0xacd4,	// (0x0006654a) popup_tb_extension_window_ParamLimits

0xd677,	// (0x00068eed) tb_ext_find_pane_ParamLimits

0xd677,	// (0x00068eed) tb_ext_find_pane

0x656b,	// (0x00061de1) ai_gene_pane_1_cp1

0xe265,	// (0x00069adb) ai_gene_pane_2_cp1

0xd75e,	// (0x00068fd4) list_single_idle_plugin_calendar_pane

0x657c,	// (0x00061df2) list_single_idle_plugin_notification_pane

0x6585,	// (0x00061dfb) list_single_idle_plugin_player_pane

0xd767,	// (0x00068fdd) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd767,	// (0x00068fdd) list_single_idle_plugin_shortcut_pane

0xd78f,	// (0x00069005) main_idle_act4_pane_t1

0xd7a6,	// (0x0006901c) main_idle_act4_pane_t2

0x0001,

0xfd38,	// (0x0006b5ae) main_idle_act4_pane_t

0xd7bd,	// (0x00069033) middle_sk_idle_act4_pane_ParamLimits

0xd7bd,	// (0x00069033) middle_sk_idle_act4_pane

0xd7d9,	// (0x0006904f) popup_clock_digital_analogue_window_cp2

0xd805,	// (0x0006907b) shortcut_wheel_idle_act4_pane_ParamLimits

0xd805,	// (0x0006907b) shortcut_wheel_idle_act4_pane

0x4b51,	// (0x000603c7) shortcut_wheel_idle_act4_pane_g1

0x4b51,	// (0x000603c7) shortcut_wheel_idle_act4_pane_g2

0x4b51,	// (0x000603c7) shortcut_wheel_idle_act4_pane_g3

0x4b51,	// (0x000603c7) shortcut_wheel_idle_act4_pane_g4

0x4b51,	// (0x000603c7) shortcut_wheel_idle_act4_pane_g5

0x6618,	// (0x00061e8e) shortcut_wheel_idle_act4_pane_g6

0x6620,	// (0x00061e96) shortcut_wheel_idle_act4_pane_g7

0x6628,	// (0x00061e9e) shortcut_wheel_idle_act4_pane_g8

0x6630,	// (0x00061ea6) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3d,	// (0x0006b5b3) shortcut_wheel_idle_act4_pane_g

0xd882,	// (0x000690f8) middle_sk_idle_act4_pane_g1_ParamLimits

0xd882,	// (0x000690f8) middle_sk_idle_act4_pane_g1

0xd890,	// (0x00069106) middle_sk_idle_act4_pane_g2_ParamLimits

0xd890,	// (0x00069106) middle_sk_idle_act4_pane_g2

0x0001,

0xfd60,	// (0x0006b5d6) middle_sk_idle_act4_pane_g_ParamLimits

0xfd60,	// (0x0006b5d6) middle_sk_idle_act4_pane_g

0xd8a8,	// (0x0006911e) middle_sk_idle_act4_pane_t1_ParamLimits

0xd8a8,	// (0x0006911e) middle_sk_idle_act4_pane_t1

0xd8d7,	// (0x0006914d) grid_ai_shortcut_pane_ParamLimits

0xd8d7,	// (0x0006914d) grid_ai_shortcut_pane

0xd8f4,	// (0x0006916a) list_highlight_pane_cp16_ParamLimits

0xd8f4,	// (0x0006916a) list_highlight_pane_cp16

0xd901,	// (0x00069177) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd901,	// (0x00069177) list_single_idle_plugin_shortcut_pane_g1

0xd90d,	// (0x00069183) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd90d,	// (0x00069183) list_single_idle_plugin_shortcut_pane_g2

0xd929,	// (0x0006919f) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd929,	// (0x0006919f) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd65,	// (0x0006b5db) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd65,	// (0x0006b5db) list_single_idle_plugin_shortcut_pane_g

0xd93e,	// (0x000691b4) cell_ai_shortcut_pane_ParamLimits

0xd93e,	// (0x000691b4) cell_ai_shortcut_pane

0xd954,	// (0x000691ca) cell_ai_shortcut_pane_g1_ParamLimits

0xd954,	// (0x000691ca) cell_ai_shortcut_pane_g1

0x656b,	// (0x00061de1) ai_gene_pane_1_cp2

0x6760,	// (0x00061fd6) ai_gene_pane_2_cp2

0x6768,	// (0x00061fde) list_highlight_pane_cp15

0xd976,	// (0x000691ec) list_single_idle_plugin_calendar_pane_g1

0x6768,	// (0x00061fde) list_highlight_pane_cp17

0x6779,	// (0x00061fef) list_single_idle_plugin_calendar_pane_g1_copy1

0x6781,	// (0x00061ff7) list_single_idle_plugin_player_pane_g1

0x3d8d,	// (0x0005f603) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6c,	// (0x0006b5e2) list_single_idle_plugin_player_pane_g

0x6789,	// (0x00061fff) list_single_idle_plugin_player_pane_t1

0x6797,	// (0x0006200d) list_single_idle_plugin_player_pane_t2

0x67a5,	// (0x0006201b) list_single_idle_plugin_player_pane_t3

0x67b3,	// (0x00062029) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd71,	// (0x0006b5e7) list_single_idle_plugin_player_pane_t

0x67c1,	// (0x00062037) wait_bar_pane_cp15

0x67c9,	// (0x0006203f) grid_ai_notification_pane

0x3d8d,	// (0x0005f603) list_single_idle_plugin_notification_pane_g1

0xd97e,	// (0x000691f4) cell_ai_notification_pane_ParamLimits

0xd97e,	// (0x000691f4) cell_ai_notification_pane

0x67df,	// (0x00062055) cell_ai_notification_pane_g1

0x67e7,	// (0x0006205d) cell_ai_notification_pane_t1

0xd98b,	// (0x00069201) tb_ext_find_button_pane

0xd993,	// (0x00069209) tb_ext_find_pane_g1

0xd99b,	// (0x00069211) tb_ext_find_pane_t1

0xbb23,	// (0x00067399) tb_ext_find_button_pane_g1

0xd9a9,	// (0x0006921f) tb_ext_find_button_pane_g2

0x0001,

0xfd7a,	// (0x0006b5f0) tb_ext_find_button_pane_g

0xd78f,	// (0x00069005) main_idle_act4_pane_t1_ParamLimits

0xd7a6,	// (0x0006901c) main_idle_act4_pane_t2_ParamLimits

0xfd38,	// (0x0006b5ae) main_idle_act4_pane_t_ParamLimits

0xd7d9,	// (0x0006904f) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd7f1,	// (0x00069067) sat_plugin_idle_act4_pane_ParamLimits

0xd7f1,	// (0x00069067) sat_plugin_idle_act4_pane

0xd9b2,	// (0x00069228) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd9b2,	// (0x00069228) sat_plugin_idle_act4_pane_t1

0xd9ca,	// (0x00069240) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd9ca,	// (0x00069240) sat_plugin_idle_act4_pane_t2

0xd9e2,	// (0x00069258) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd9e2,	// (0x00069258) sat_plugin_idle_act4_pane_t3

0xd9fa,	// (0x00069270) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd9fa,	// (0x00069270) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7f,	// (0x0006b5f5) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7f,	// (0x0006b5f5) sat_plugin_idle_act4_pane_t

0x912d,	// (0x000649a3) popup_battery_window_ParamLimits

0x912d,	// (0x000649a3) popup_battery_window

0x7fea,	// (0x00063860) bg_popup_sub_pane_cp25_ParamLimits

0x7fea,	// (0x00063860) bg_popup_sub_pane_cp25

0x6868,	// (0x000620de) popup_battery_window_g1_ParamLimits

0x6868,	// (0x000620de) popup_battery_window_g1

0x6874,	// (0x000620ea) popup_battery_window_t1_ParamLimits

0x6874,	// (0x000620ea) popup_battery_window_t1

0x6886,	// (0x000620fc) popup_battery_window_t2_ParamLimits

0x6886,	// (0x000620fc) popup_battery_window_t2

0x0001,

0xfd88,	// (0x0006b5fe) popup_battery_window_t_ParamLimits

0xfd88,	// (0x0006b5fe) popup_battery_window_t

0xa335,	// (0x00065bab) midp_canvas_pane_ParamLimits

0xa3a7,	// (0x00065c1d) midp_keypad_pane_ParamLimits

0xa3a7,	// (0x00065c1d) midp_keypad_pane

0x1e70,	// (0x0005d6e6) main_midp_pane_ParamLimits

0xca41,	// (0x000682b7) signal_pane_g2_cp_ParamLimits

0xda12,	// (0x00069288) aid_size_cell_midp_keypad_ParamLimits

0xda12,	// (0x00069288) aid_size_cell_midp_keypad

0xda30,	// (0x000692a6) midp_keyp_game_grid_pane_ParamLimits

0xda30,	// (0x000692a6) midp_keyp_game_grid_pane

0xda57,	// (0x000692cd) midp_keyp_rocker_pane_ParamLimits

0xda57,	// (0x000692cd) midp_keyp_rocker_pane

0xdaa8,	// (0x0006931e) midp_keyp_sk_left_pane_ParamLimits

0xdaa8,	// (0x0006931e) midp_keyp_sk_left_pane

0xdafc,	// (0x00069372) midp_keyp_sk_right_pane_ParamLimits

0xdafc,	// (0x00069372) midp_keyp_sk_right_pane

0x7e50,	// (0x000636c6) bg_button_pane_cp03

0xdb50,	// (0x000693c6) midp_keyp_sk_left_pane_g1

0x7e50,	// (0x000636c6) bg_button_pane_cp04

0xdb50,	// (0x000693c6) midp_keyp_sk_right_pane_g1

0x4b51,	// (0x000603c7) midp_keyp_rocker_pane_g1

0xdb59,	// (0x000693cf) keyp_game_cell_pane_ParamLimits

0xdb59,	// (0x000693cf) keyp_game_cell_pane

0x7e50,	// (0x000636c6) bg_button_pane_cp02

0xdb7d,	// (0x000693f3) keyp_game_cell_pane_g1

0x914d,	// (0x000649c3) popup_fep_vkb2_window_ParamLimits

0x914d,	// (0x000649c3) popup_fep_vkb2_window

0xb4a2,	// (0x00066d18) aid_size_cell_vkb2_ParamLimits

0xb4a2,	// (0x00066d18) aid_size_cell_vkb2

0xb4e0,	// (0x00066d56) popup_fep_vkb2_window_g1_ParamLimits

0xb4e0,	// (0x00066d56) popup_fep_vkb2_window_g1

0xb530,	// (0x00066da6) vkb2_area_bottom_pane_ParamLimits

0xb530,	// (0x00066da6) vkb2_area_bottom_pane

0xb584,	// (0x00066dfa) vkb2_area_keypad_pane_ParamLimits

0xb584,	// (0x00066dfa) vkb2_area_keypad_pane

0xb5cc,	// (0x00066e42) vkb2_area_top_pane_ParamLimits

0xb5cc,	// (0x00066e42) vkb2_area_top_pane

0xb652,	// (0x00066ec8) vkb2_top_entry_pane_ParamLimits

0xb652,	// (0x00066ec8) vkb2_top_entry_pane

0xb67f,	// (0x00066ef5) vkb2_top_grid_left_pane_ParamLimits

0xb67f,	// (0x00066ef5) vkb2_top_grid_left_pane

0xb69f,	// (0x00066f15) vkb2_top_grid_right_pane_ParamLimits

0xb69f,	// (0x00066f15) vkb2_top_grid_right_pane

0x154c,	// (0x0005cdc2) vkb2_cell_keypad_pane_ParamLimits

0x154c,	// (0x0005cdc2) vkb2_cell_keypad_pane

0xb6e5,	// (0x00066f5b) vkb2_area_bottom_grid_pane_ParamLimits

0xb6e5,	// (0x00066f5b) vkb2_area_bottom_grid_pane

0xb70f,	// (0x00066f85) vkb2_area_bottom_pane_g1_ParamLimits

0xb70f,	// (0x00066f85) vkb2_area_bottom_pane_g1

0xb735,	// (0x00066fab) vkb2_area_bottom_pane_g2_ParamLimits

0xb735,	// (0x00066fab) vkb2_area_bottom_pane_g2

0xb766,	// (0x00066fdc) vkb2_area_bottom_pane_g3_ParamLimits

0xb766,	// (0x00066fdc) vkb2_area_bottom_pane_g3

0x0002,

0xfd8d,	// (0x0006b603) vkb2_area_bottom_pane_g_ParamLimits

0xfd8d,	// (0x0006b603) vkb2_area_bottom_pane_g

0x16f6,	// (0x0005cf6c) vkb2_top_cell_left_pane_ParamLimits

0x16f6,	// (0x0005cf6c) vkb2_top_cell_left_pane

0xdb86,	// (0x000693fc) vkb2_top_entry_pane_g1_ParamLimits

0xdb86,	// (0x000693fc) vkb2_top_entry_pane_g1

0xdb94,	// (0x0006940a) vkb2_top_entry_pane_t1_ParamLimits

0xdb94,	// (0x0006940a) vkb2_top_entry_pane_t1

0x6a37,	// (0x000622ad) vkb2_top_entry_pane_t2_ParamLimits

0x6a37,	// (0x000622ad) vkb2_top_entry_pane_t2

0x6a69,	// (0x000622df) vkb2_top_entry_pane_t3_ParamLimits

0x6a69,	// (0x000622df) vkb2_top_entry_pane_t3

0x0002,

0xfd94,	// (0x0006b60a) vkb2_top_entry_pane_t_ParamLimits

0xfd94,	// (0x0006b60a) vkb2_top_entry_pane_t

0xb7d0,	// (0x00067046) vkb2_top_grid_right_pane_g1_ParamLimits

0xb7d0,	// (0x00067046) vkb2_top_grid_right_pane_g1

0x1759,	// (0x0005cfcf) vkb2_top_grid_right_pane_g2_ParamLimits

0x1759,	// (0x0005cfcf) vkb2_top_grid_right_pane_g2

0x1771,	// (0x0005cfe7) vkb2_top_grid_right_pane_g3_ParamLimits

0x1771,	// (0x0005cfe7) vkb2_top_grid_right_pane_g3

0xb7e6,	// (0x0006705c) vkb2_top_grid_right_pane_g4_ParamLimits

0xb7e6,	// (0x0006705c) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9b,	// (0x0006b611) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9b,	// (0x0006b611) vkb2_top_grid_right_pane_g

0x179f,	// (0x0005d015) vkb2_top_cell_left_pane_g1

0x17b6,	// (0x0005d02c) vkb2_cell_keypad_pane_g1_ParamLimits

0x17b6,	// (0x0005d02c) vkb2_cell_keypad_pane_g1

0x6a8d,	// (0x00062303) vkb2_cell_keypad_pane_t1_ParamLimits

0x6a8d,	// (0x00062303) vkb2_cell_keypad_pane_t1

0x17c4,	// (0x0005d03a) vkb2_cell_bottom_grid_pane_ParamLimits

0x17c4,	// (0x0005d03a) vkb2_cell_bottom_grid_pane

0x17fd,	// (0x0005d073) vkb2_cell_bottom_grid_pane_g1

0xd826,	// (0x0006909c) aid_call2_pane_cp02

0xd82e,	// (0x000690a4) aid_call_pane_cp02

0xd836,	// (0x000690ac) clock_digital_number_pane_cp10

0xd83e,	// (0x000690b4) clock_digital_number_pane_cp11

0xd846,	// (0x000690bc) clock_digital_number_pane_cp12

0xd84e,	// (0x000690c4) clock_digital_number_pane_cp13

0xd856,	// (0x000690cc) clock_digital_separator_pane_cp10

0xbb23,	// (0x00067399) popup_clock_digital_analogue_window_cp2_g1

0xbb23,	// (0x00067399) popup_clock_digital_analogue_window_cp2_g2

0xd85e,	// (0x000690d4) popup_clock_digital_analogue_window_cp2_g3

0xbb23,	// (0x00067399) popup_clock_digital_analogue_window_cp2_g4

0xd85e,	// (0x000690d4) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd50,	// (0x0006b5c6) popup_clock_digital_analogue_window_cp2_g

0xd866,	// (0x000690dc) popup_clock_digital_analogue_window_cp2_t1

0xd874,	// (0x000690ea) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5b,	// (0x0006b5d1) popup_clock_digital_analogue_window_cp2_t

0x4b51,	// (0x000603c7) clock_digital_number_pane_cp10_g1

0x4b51,	// (0x000603c7) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3e,	// (0x0006b3b4) clock_digital_number_pane_cp10_g

0x4b51,	// (0x000603c7) clock_digital_separator_pane_cp10_g1

0x4b51,	// (0x000603c7) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3e,	// (0x0006b3b4) clock_digital_separator_pane_cp10_g

0xd723,	// (0x00068f99) uniindi_top_pane_g3

0x64c6,	// (0x00061d3c) uniindi_top_pane_g4

0x15d7,	// (0x0005ce4d) vkb2_row_keypad_pane_ParamLimits

0x15d7,	// (0x0005ce4d) vkb2_row_keypad_pane

0x1819,	// (0x0005d08f) vkb2_cell_t_keypad_pane_ParamLimits

0x1819,	// (0x0005d08f) vkb2_cell_t_keypad_pane

0x1829,	// (0x0005d09f) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1829,	// (0x0005d09f) vkb2_cell_t_keypad_pane_cp08

0x183c,	// (0x0005d0b2) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x183c,	// (0x0005d0b2) vkb2_cell_t_keypad_pane_cp09

0x1850,	// (0x0005d0c6) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1850,	// (0x0005d0c6) vkb2_cell_t_keypad_pane_cp01

0x1861,	// (0x0005d0d7) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1861,	// (0x0005d0d7) vkb2_cell_t_keypad_pane_cp02

0x1872,	// (0x0005d0e8) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1872,	// (0x0005d0e8) vkb2_cell_t_keypad_pane_cp03

0x1883,	// (0x0005d0f9) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1883,	// (0x0005d0f9) vkb2_cell_t_keypad_pane_cp04

0x1894,	// (0x0005d10a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1894,	// (0x0005d10a) vkb2_cell_t_keypad_pane_cp05

0x18a5,	// (0x0005d11b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x18a5,	// (0x0005d11b) vkb2_cell_t_keypad_pane_cp06

0x18b6,	// (0x0005d12c) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x18b6,	// (0x0005d12c) vkb2_cell_t_keypad_pane_cp07

0x18c7,	// (0x0005d13d) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x18c7,	// (0x0005d13d) vkb2_cell_t_keypad_pane_cp10

0x0f80,	// (0x0005c7f6) vkb2_cell_t_keypad_pane_g1

0x6aa4,	// (0x0006231a) vkb2_cell_t_keypad_pane_t1

0xddf5,	// (0x0006966b) popup_grid_graphic2_window

0xdbcd,	// (0x00069443) aid_size_cell_graphic2_ParamLimits

0xdbcd,	// (0x00069443) aid_size_cell_graphic2

0xdc0b,	// (0x00069481) bg_popup_window_pane_cp21_ParamLimits

0xdc0b,	// (0x00069481) bg_popup_window_pane_cp21

0xdc19,	// (0x0006948f) graphic2_pages_pane_ParamLimits

0xdc19,	// (0x0006948f) graphic2_pages_pane

0xdc6f,	// (0x000694e5) grid_graphic2_control_pane_ParamLimits

0xdc6f,	// (0x000694e5) grid_graphic2_control_pane

0xdcb7,	// (0x0006952d) grid_graphic2_pane_ParamLimits

0xdcb7,	// (0x0006952d) grid_graphic2_pane

0xe89b,	// (0x0006a111) cell_graphic2_pane

0xddf5,	// (0x0006966b) main_comp_mode_pane

0x5d07,	// (0x0006157d) list_ai3_gene_pane_ParamLimits

0xd4d2,	// (0x00068d48) bg_popup_window_pane_cp19_ParamLimits

0x60df,	// (0x00061955) bg_touch_area_indi_pane_ParamLimits

0x60df,	// (0x00061955) bg_touch_area_indi_pane

0x60f5,	// (0x0006196b) bg_touch_area_indi_pane_cp01_ParamLimits

0x60f5,	// (0x0006196b) bg_touch_area_indi_pane_cp01

0x610b,	// (0x00061981) bg_touch_area_indi_pane_cp02_ParamLimits

0x610b,	// (0x00061981) bg_touch_area_indi_pane_cp02

0x6121,	// (0x00061997) bg_touch_area_indi_pane_cp03_ParamLimits

0x6121,	// (0x00061997) bg_touch_area_indi_pane_cp03

0x613b,	// (0x000619b1) popup_slider_window_g1_ParamLimits

0x6157,	// (0x000619cd) popup_slider_window_g2_ParamLimits

0x6173,	// (0x000619e9) popup_slider_window_g3_ParamLimits

0xfce5,	// (0x0006b55b) popup_slider_window_g_ParamLimits

0x61d9,	// (0x00061a4f) popup_slider_window_t1_ParamLimits

0x624d,	// (0x00061ac3) small_volume_slider_vertical_pane_ParamLimits

0xe89b,	// (0x0006a111) cell_graphic2_pane_ParamLimits

0xe8f6,	// (0x0006a16c) bg_button_pane_cp10_ParamLimits

0xe8f6,	// (0x0006a16c) bg_button_pane_cp10

0xe909,	// (0x0006a17f) bg_button_pane_cp11_ParamLimits

0xe909,	// (0x0006a17f) bg_button_pane_cp11

0xe91c,	// (0x0006a192) graphic2_pages_pane_g1_ParamLimits

0xe91c,	// (0x0006a192) graphic2_pages_pane_g1

0xe937,	// (0x0006a1ad) graphic2_pages_pane_g2_ParamLimits

0xe937,	// (0x0006a1ad) graphic2_pages_pane_g2

0x0001,

0xfda9,	// (0x0006b61f) graphic2_pages_pane_g_ParamLimits

0xfda9,	// (0x0006b61f) graphic2_pages_pane_g

0xe94f,	// (0x0006a1c5) graphic2_pages_pane_t1_ParamLimits

0xe94f,	// (0x0006a1c5) graphic2_pages_pane_t1

0xe967,	// (0x0006a1dd) cell_graphic2_control_pane_ParamLimits

0xe967,	// (0x0006a1dd) cell_graphic2_control_pane

0xe999,	// (0x0006a20f) cell_graphic2_pane_g1_ParamLimits

0xe999,	// (0x0006a20f) cell_graphic2_pane_g1

0xdd27,	// (0x0006959d) cell_graphic2_pane_g2_ParamLimits

0xdd27,	// (0x0006959d) cell_graphic2_pane_g2

0xe6e7,	// (0x00069f5d) cell_graphic2_pane_g3_ParamLimits

0xe6e7,	// (0x00069f5d) cell_graphic2_pane_g3

0xdd34,	// (0x000695aa) cell_graphic2_pane_g4_ParamLimits

0xdd34,	// (0x000695aa) cell_graphic2_pane_g4

0xe9a6,	// (0x0006a21c) cell_graphic2_pane_g5_ParamLimits

0xe9a6,	// (0x0006a21c) cell_graphic2_pane_g5

0x0004,

0xfdae,	// (0x0006b624) cell_graphic2_pane_g_ParamLimits

0xfdae,	// (0x0006b624) cell_graphic2_pane_g

0xe9c6,	// (0x0006a23c) cell_graphic2_pane_t1_ParamLimits

0xe9c6,	// (0x0006a23c) cell_graphic2_pane_t1

0x3091,	// (0x0005e907) grid_highlight_pane_cp11_ParamLimits

0x3091,	// (0x0005e907) grid_highlight_pane_cp11

0x7fea,	// (0x00063860) bg_button_pane_cp05

0xea12,	// (0x0006a288) cell_graphic2_control_pane_g1

0x4b51,	// (0x000603c7) bg_touch_area_indi_pane_g1

0x6d80,	// (0x000625f6) aid_cmod_rocker_key_size

0x6d8a,	// (0x00062600) aid_cmode_itu_key_size

0x6d94,	// (0x0006260a) main_cmode_video_pane

0x6d9e,	// (0x00062614) main_comp_mode_itu_pane

0x6daa,	// (0x00062620) main_comp_mode_rocker_pane

0x6db6,	// (0x0006262c) cell_cmode_rocker_pane_ParamLimits

0x6db6,	// (0x0006262c) cell_cmode_rocker_pane

0x6dc8,	// (0x0006263e) cell_cmode_itu_pane_ParamLimits

0x6dc8,	// (0x0006263e) cell_cmode_itu_pane

0x8272,	// (0x00063ae8) bg_button_pane_cp06_ParamLimits

0x8272,	// (0x00063ae8) bg_button_pane_cp06

0x4dc1,	// (0x00060637) cell_cmode_rocker_pane_g1_ParamLimits

0x4dc1,	// (0x00060637) cell_cmode_rocker_pane_g1

0x6312,	// (0x00061b88) cell_cmode_rocker_pane_g2_ParamLimits

0x6312,	// (0x00061b88) cell_cmode_rocker_pane_g2

0x0001,

0xfdbe,	// (0x0006b634) cell_cmode_rocker_pane_g_ParamLimits

0xfdbe,	// (0x0006b634) cell_cmode_rocker_pane_g

0x7e50,	// (0x000636c6) bg_button_pane_cp07

0x6ddd,	// (0x00062653) cell_cmode_itu_pane_g1

0x6de6,	// (0x0006265c) cell_cmode_itu_pane_t1

0x6df4,	// (0x0006266a) cell_cmode_itu_pane_t2

0x0001,

0xfdc3,	// (0x0006b639) cell_cmode_itu_pane_t

0x6537,	// (0x00061dad) aid_touch_ctrl_left

0x653f,	// (0x00061db5) aid_touch_ctrl_right

0x7e50,	// (0x000636c6) compa_mode_pane

0xea38,	// (0x0006a2ae) aid_cmod_rocker_key_size_cp

0xea42,	// (0x0006a2b8) aid_cmode_itu_key_size_cp

0x6e16,	// (0x0006268c) compa_mode_pane_g1

0x6e1e,	// (0x00062694) compa_mode_pane_g2

0x6e26,	// (0x0006269c) compa_mode_pane_g3

0x0002,

0xfdc8,	// (0x0006b63e) compa_mode_pane_g

0xea4c,	// (0x0006a2c2) main_comp_mode_itu_pane_cp

0xea54,	// (0x0006a2ca) main_comp_mode_rocker_pane_cp

0xea5c,	// (0x0006a2d2) cell_cmode_itu_pane_cp_ParamLimits

0xea5c,	// (0x0006a2d2) cell_cmode_itu_pane_cp

0xea71,	// (0x0006a2e7) cell_cmode_rocker_pane_cp_ParamLimits

0xea71,	// (0x0006a2e7) cell_cmode_rocker_pane_cp

0x8272,	// (0x00063ae8) bg_button_pane_cp06_cp_ParamLimits

0x8272,	// (0x00063ae8) bg_button_pane_cp06_cp

0x4dc1,	// (0x00060637) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4dc1,	// (0x00060637) cell_cmode_rocker_pane_g1_cp

0x4b51,	// (0x000603c7) cell_cmode_rocker_pane_g2_cp

0x7e50,	// (0x000636c6) bg_button_pane_cp07_cp

0xea83,	// (0x0006a2f9) cell_cmode_itu_pane_g1_cp

0xea8c,	// (0x0006a302) cell_cmode_itu_pane_t1_cp

0xea8c,	// (0x0006a302) cell_cmode_itu_pane_t2_cp

0xc7b0,	// (0x00068026) settings_code_pane_cp2

0x7eb2,	// (0x00063728) bg_popup_window_pane_cp3_ParamLimits

0x8103,	// (0x00063979) heading_pane_cp3_ParamLimits

0x810f,	// (0x00063985) listscroll_popup_graphic_pane_ParamLimits

0x0d29,	// (0x0005c59f) fep_hwr_aid_pane_ParamLimits

0x129d,	// (0x0005cb13) aid_touch_sctrl_top_ParamLimits

0x12b8,	// (0x0005cb2e) sctrl_sk_top_pane_g1_ParamLimits

0x0f80,	// (0x0005c7f6) sctrl_sk_top_pane_g2_ParamLimits

0xfcfe,	// (0x0006b574) sctrl_sk_top_pane_g_ParamLimits

0x12c5,	// (0x0005cb3b) sctrl_sk_top_pane_t1_ParamLimits

0x129d,	// (0x0005cb13) aid_touch_sctrl_bottom_ParamLimits

0x12c5,	// (0x0005cb3b) sctrl_sk_bottom_pane_t1_ParamLimits

0xd6ef,	// (0x00068f65) aid_area_touch_clock

0xb614,	// (0x00066e8a) aid_vkb2_area_top_pane_cell_ParamLimits

0xb614,	// (0x00066e8a) aid_vkb2_area_top_pane_cell

0xb6bf,	// (0x00066f35) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb6bf,	// (0x00066f35) aid_vkb2_area_bottom_pane_cell

0x69ef,	// (0x00062265) popup_char_count_window

0x6e7c,	// (0x000626f2) popup_char_count_window_g1

0x6e85,	// (0x000626fb) popup_char_count_window_g2

0x6e8e,	// (0x00062704) popup_char_count_window_g3

0x0002,

0xfdcf,	// (0x0006b645) popup_char_count_window_g

0x6e97,	// (0x0006270d) popup_char_count_window_t1

0x1374,	// (0x0005cbea) popup_fep_char_preview_window_ParamLimits

0x1374,	// (0x0005cbea) popup_fep_char_preview_window

0xb634,	// (0x00066eaa) vkb2_top_candi_pane_ParamLimits

0xb634,	// (0x00066eaa) vkb2_top_candi_pane

0xea9a,	// (0x0006a310) cell_vkb2_top_candi_pane_ParamLimits

0xea9a,	// (0x0006a310) cell_vkb2_top_candi_pane

0x18dc,	// (0x0005d152) bg_popup_fep_char_preview_window_ParamLimits

0x18dc,	// (0x0005d152) bg_popup_fep_char_preview_window

0x18ea,	// (0x0005d160) popup_fep_char_preview_window_t1_ParamLimits

0x18ea,	// (0x0005d160) popup_fep_char_preview_window_t1

0x6ef2,	// (0x00062768) bg_popup_fep_char_preview_window_g1

0x6efa,	// (0x00062770) bg_popup_fep_char_preview_window_g2

0x6f02,	// (0x00062778) bg_popup_fep_char_preview_window_g3

0x6f0a,	// (0x00062780) bg_popup_fep_char_preview_window_g4

0x6f12,	// (0x00062788) bg_popup_fep_char_preview_window_g5

0x1924,	// (0x0005d19a) bg_popup_fep_char_preview_window_g6

0x6f1a,	// (0x00062790) bg_popup_fep_char_preview_window_g7

0x6f22,	// (0x00062798) bg_popup_fep_char_preview_window_g8

0x6f2a,	// (0x000627a0) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd6,	// (0x0006b64c) bg_popup_fep_char_preview_window_g

0x0f80,	// (0x0005c7f6) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0f80,	// (0x0005c7f6) cell_vkb2_top_candi_pane_g1

0x0f8e,	// (0x0005c804) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0f8e,	// (0x0005c804) cell_vkb2_top_candi_pane_g2

0x62f1,	// (0x00061b67) cell_vkb2_top_candi_pane_g3_ParamLimits

0x62f1,	// (0x00061b67) cell_vkb2_top_candi_pane_g3

0x192c,	// (0x0005d1a2) cell_vkb2_top_candi_pane_g4_ParamLimits

0x192c,	// (0x0005d1a2) cell_vkb2_top_candi_pane_g4

0x52c1,	// (0x00060b37) cell_vkb2_top_candi_pane_g5_ParamLimits

0x52c1,	// (0x00060b37) cell_vkb2_top_candi_pane_g5

0x194d,	// (0x0005d1c3) cell_vkb2_top_candi_pane_g6_ParamLimits

0x194d,	// (0x0005d1c3) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde9,	// (0x0006b65f) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde9,	// (0x0006b65f) cell_vkb2_top_candi_pane_g

0x195b,	// (0x0005d1d1) cell_vkb2_top_candi_pane_t1

0xb0e6,	// (0x0006695c) aid_size_touch_slider_mark_ParamLimits

0xb0e6,	// (0x0006695c) aid_size_touch_slider_mark

0xdc55,	// (0x000694cb) grid_graphic2_catg_pane_ParamLimits

0xdc55,	// (0x000694cb) grid_graphic2_catg_pane

0xdd11,	// (0x00069587) popup_grid_graphic2_window_t1_ParamLimits

0xdd11,	// (0x00069587) popup_grid_graphic2_window_t1

0xe884,	// (0x0006a0fa) popup_grid_graphic2_window_t2_ParamLimits

0xe884,	// (0x0006a0fa) popup_grid_graphic2_window_t2

0x0001,

0xfda4,	// (0x0006b61a) popup_grid_graphic2_window_t_ParamLimits

0xfda4,	// (0x0006b61a) popup_grid_graphic2_window_t

0x7fea,	// (0x00063860) bg_button_pane_cp05_ParamLimits

0xea12,	// (0x0006a288) cell_graphic2_control_pane_g1_ParamLimits

0xeb00,	// (0x0006a376) cell_graphic2_catg_pane_ParamLimits

0xeb00,	// (0x0006a376) cell_graphic2_catg_pane

0x7e50,	// (0x000636c6) bg_button_pane_cp12

0xeb12,	// (0x0006a388) cell_graphic2_catg_pane_g1

0x644c,	// (0x00061cc2) cell_tb_ext_pane_t1_ParamLimits

0x1716,	// (0x0005cf8c) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1716,	// (0x0005cf8c) vkb2_top_cell_right_narrow_pane

0x172e,	// (0x0005cfa4) vkb2_top_cell_right_wide_pane_ParamLimits

0x172e,	// (0x0005cfa4) vkb2_top_cell_right_wide_pane

0x0d1b,	// (0x0005c591) bg_vkb2_func_pane_ParamLimits

0x0d1b,	// (0x0005c591) bg_vkb2_func_pane

0x179f,	// (0x0005d015) vkb2_top_cell_left_pane_g1_ParamLimits

0x0d1b,	// (0x0005c591) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0d1b,	// (0x0005c591) bg_vkb2_fuc_pane_cp03

0x17fd,	// (0x0005d073) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x239f,	// (0x0005dc15) bg_vkb2_func_pane_g1

0x23a7,	// (0x0005dc1d) bg_vkb2_func_pane_g2

0x23b7,	// (0x0005dc2d) bg_vkb2_func_pane_g3

0x23af,	// (0x0005dc25) bg_vkb2_func_pane_g4

0x23bf,	// (0x0005dc35) bg_vkb2_func_pane_g5

0x23c7,	// (0x0005dc3d) bg_vkb2_func_pane_g6

0x23cf,	// (0x0005dc45) bg_vkb2_func_pane_g7

0x23d7,	// (0x0005dc4d) bg_vkb2_func_pane_g8

0x2397,	// (0x0005dc0d) bg_vkb2_func_pane_g9

0x0008,

0xfdf6,	// (0x0006b66c) bg_vkb2_func_pane_g

0x0d1b,	// (0x0005c591) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0d1b,	// (0x0005c591) bg_vkb2_fuc_pane_cp01

0x179f,	// (0x0005d015) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x179f,	// (0x0005d015) vkb2_top_cell_right_wide_pane_g1

0x0d1b,	// (0x0005c591) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0d1b,	// (0x0005c591) bg_vkb2_fuc_pane_cp02

0x17fd,	// (0x0005d073) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x17fd,	// (0x0005d073) vkb2_top_cell_right_narrow_pane_g1

0xd414,	// (0x00068c8a) aid_touch_area_decrease_ParamLimits

0xd414,	// (0x00068c8a) aid_touch_area_decrease

0xd44e,	// (0x00068cc4) aid_touch_area_increase_ParamLimits

0xd44e,	// (0x00068cc4) aid_touch_area_increase

0xd476,	// (0x00068cec) aid_touch_area_mute_ParamLimits

0xd476,	// (0x00068cec) aid_touch_area_mute

0xd49e,	// (0x00068d14) aid_touch_area_slider_ParamLimits

0xd49e,	// (0x00068d14) aid_touch_area_slider

0xd4de,	// (0x00068d54) popup_slider_window_g4_ParamLimits

0xd4de,	// (0x00068d54) popup_slider_window_g4

0xd506,	// (0x00068d7c) popup_slider_window_g5_ParamLimits

0xd506,	// (0x00068d7c) popup_slider_window_g5

0xd53a,	// (0x00068db0) popup_slider_window_g6_ParamLimits

0xd53a,	// (0x00068db0) popup_slider_window_g6

0x6207,	// (0x00061a7d) popup_slider_window_t2_ParamLimits

0x6207,	// (0x00061a7d) popup_slider_window_t2

0x0001,

0xfcf2,	// (0x0006b568) popup_slider_window_t_ParamLimits

0xfcf2,	// (0x0006b568) popup_slider_window_t

0xd556,	// (0x00068dcc) slider_pane_ParamLimits

0xd556,	// (0x00068dcc) slider_pane

0x6f4d,	// (0x000627c3) slider_pane_g1_ParamLimits

0x6f4d,	// (0x000627c3) slider_pane_g1

0x6f61,	// (0x000627d7) slider_pane_g2_ParamLimits

0x6f61,	// (0x000627d7) slider_pane_g2

0x6f77,	// (0x000627ed) slider_pane_g3_ParamLimits

0x6f77,	// (0x000627ed) slider_pane_g3

0x0003,

0xfe09,	// (0x0006b67f) slider_pane_g_ParamLimits

0xfe09,	// (0x0006b67f) slider_pane_g

0xad1c,	// (0x00066592) popup_tb_float_extension_window_ParamLimits

0xad1c,	// (0x00066592) popup_tb_float_extension_window

0x6fa3,	// (0x00062819) aid_size_cell_tb_float_ext

0x7e50,	// (0x000636c6) bg_popup_sub_window_cp28

0xeb1b,	// (0x0006a391) grid_tb_float_ext_pane

0xeb25,	// (0x0006a39b) cell_tb_float_ext_pane_ParamLimits

0xeb25,	// (0x0006a39b) cell_tb_float_ext_pane

0xeb3f,	// (0x0006a3b5) cell_tb_float_ext_pane_g1

0xeb48,	// (0x0006a3be) grid_highlight_pane_cp12

0xb250,	// (0x00066ac6) cell_last_hwr_side_pane_ParamLimits

0xb250,	// (0x00066ac6) cell_last_hwr_side_pane

0x4b51,	// (0x000603c7) cell_last_hwr_side_pane_g1

0x6fe5,	// (0x0006285b) cell_last_hwr_side_pane_g2

0x0001,

0xfe12,	// (0x0006b688) cell_last_hwr_side_pane_g

0xb79b,	// (0x00067011) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb79b,	// (0x00067011) vkb2_area_bottom_space_btn_pane

0x0f80,	// (0x0005c7f6) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6aa4,	// (0x0006231a) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x195b,	// (0x0005d1d1) cell_vkb2_top_candi_pane_t1_ParamLimits

0x197a,	// (0x0005d1f0) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x197a,	// (0x0005d1f0) vkb2_area_bottom_space_btn_pane_g1

0x19b4,	// (0x0005d22a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x19b4,	// (0x0005d22a) vkb2_area_bottom_space_btn_pane_g2

0x19ea,	// (0x0005d260) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x19ea,	// (0x0005d260) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe17,	// (0x0006b68d) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe17,	// (0x0006b68d) vkb2_area_bottom_space_btn_pane_g

0x0dde,	// (0x0005c654) cel_fep_hwr_func_pane_ParamLimits

0x0dde,	// (0x0005c654) cel_fep_hwr_func_pane

0xb225,	// (0x00066a9b) cell_hwr_side_button_pane_ParamLimits

0xb225,	// (0x00066a9b) cell_hwr_side_button_pane

0xd6ef,	// (0x00068f65) aid_area_touch_clock_ParamLimits

0x7fea,	// (0x00063860) bg_uniindi_top_pane_ParamLimits

0xd701,	// (0x00068f77) uniindi_top_pane_g1_ParamLimits

0xd717,	// (0x00068f8d) uniindi_top_pane_g2_ParamLimits

0xd723,	// (0x00068f99) uniindi_top_pane_g3_ParamLimits

0x64c6,	// (0x00061d3c) uniindi_top_pane_g4_ParamLimits

0xfd2a,	// (0x0006b5a0) uniindi_top_pane_g_ParamLimits

0xd734,	// (0x00068faa) uniindi_top_pane_t1_ParamLimits

0x7fea,	// (0x00063860) bg_vkb2_func_pane_cp01_ParamLimits

0x7fea,	// (0x00063860) bg_vkb2_func_pane_cp01

0x6fee,	// (0x00062864) cel_fep_hwr_func_pane_g1_ParamLimits

0x6fee,	// (0x00062864) cel_fep_hwr_func_pane_g1

0x7fea,	// (0x00063860) bg_vkb2_func_pane_cp02_ParamLimits

0x7fea,	// (0x00063860) bg_vkb2_func_pane_cp02

0x6fee,	// (0x00062864) cell_hwr_side_button_pane_g1_ParamLimits

0x6fee,	// (0x00062864) cell_hwr_side_button_pane_g1

0x221b,	// (0x0005da91) status_pane_g4_ParamLimits

0x221b,	// (0x0005da91) status_pane_g4

0x2235,	// (0x0005daab) status_pane_t1

0x488c,	// (0x00060102) form2_midp_gauge_slider_cont_pane

0x4894,	// (0x0006010a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcb6a,	// (0x000683e0) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcb7c,	// (0x000683f2) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf1,	// (0x0006b367) form2_midp_gauge_slider_pane_t_ParamLimits

0x48ca,	// (0x00060140) form2_midp_slider_pane_ParamLimits

0x1334,	// (0x0005cbaa) aid_size_cell_func_vkb2_ParamLimits

0x1334,	// (0x0005cbaa) aid_size_cell_func_vkb2

0x6f8f,	// (0x00062805) slider_pane_g4_ParamLimits

0x6f8f,	// (0x00062805) slider_pane_g4

0xb7fc,	// (0x00067072) form2_midp_gauge_slider_pane_t2_cp01

0xb80a,	// (0x00067080) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb80a,	// (0x00067080) form2_midp_gauge_slider_pane_t3_cp01

0x1a5f,	// (0x0005d2d5) form2_midp_slider_pane_cp01

0x7e50,	// (0x000636c6) navi_smil_pane

0x7027,	// (0x0006289d) navi_smil_pane_g1

0x702f,	// (0x000628a5) navi_smil_pane_t1

0x6ffc,	// (0x00062872) form2_midp_slider_pane_g1

0x7005,	// (0x0006287b) form2_midp_slider_pane_g2

0x700d,	// (0x00062883) form2_midp_slider_pane_g3

0x6ffc,	// (0x00062872) form2_midp_slider_pane_g4

0xeb51,	// (0x0006a3c7) form2_midp_slider_pane_g5

0x0004,

0xfe20,	// (0x0006b696) form2_midp_slider_pane_g

0x1a24,	// (0x0005d29a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1a24,	// (0x0005d29a) vkb2_area_bottom_space_btn_pane_g4

0xaf54,	// (0x000667ca) lc0_navi_pane_ParamLimits

0xaf54,	// (0x000667ca) lc0_navi_pane

0xbd79,	// (0x000675ef) lc0_stat_indi_pane_ParamLimits

0xbd79,	// (0x000675ef) lc0_stat_indi_pane

0xbd8e,	// (0x00067604) ls0_title_pane_ParamLimits

0xbd8e,	// (0x00067604) ls0_title_pane

0x8272,	// (0x00063ae8) bg_popup_sub_pane_cp14_ParamLimits

0xd6d6,	// (0x00068f4c) list_uniindi_pane_ParamLimits

0xd6e2,	// (0x00068f58) uniindi_top_pane_ParamLimits

0x650f,	// (0x00061d85) list_single_uniindi_pane_g1_ParamLimits

0x6522,	// (0x00061d98) list_single_uniindi_pane_t1_ParamLimits

0xb827,	// (0x0006709d) lc0_stat_clock_pane_ParamLimits

0xb827,	// (0x0006709d) lc0_stat_clock_pane

0xeb5c,	// (0x0006a3d2) lc0_stat_indi_pane_g1_ParamLimits

0xeb5c,	// (0x0006a3d2) lc0_stat_indi_pane_g1

0xeb69,	// (0x0006a3df) lc0_stat_indi_pane_g2_ParamLimits

0xeb69,	// (0x0006a3df) lc0_stat_indi_pane_g2

0x0001,

0xfe2b,	// (0x0006b6a1) lc0_stat_indi_pane_g_ParamLimits

0xfe2b,	// (0x0006b6a1) lc0_stat_indi_pane_g

0xb837,	// (0x000670ad) lc0_uni_indicator_pane_ParamLimits

0xb837,	// (0x000670ad) lc0_uni_indicator_pane

0xeb76,	// (0x0006a3ec) ls0_title_pane_g1_ParamLimits

0xeb76,	// (0x0006a3ec) ls0_title_pane_g1

0xeb8a,	// (0x0006a400) ls0_title_pane_t1_ParamLimits

0xeb8a,	// (0x0006a400) ls0_title_pane_t1

0xb847,	// (0x000670bd) lc0_uni_indicator_pane_g1_ParamLimits

0xb847,	// (0x000670bd) lc0_uni_indicator_pane_g1

0x70a1,	// (0x00062917) lc0_stat_clock_pane_t1

0xddf5,	// (0x0006966b) main_ai5_pane

0x70af,	// (0x00062925) ai5_sk_pane_ParamLimits

0x70af,	// (0x00062925) ai5_sk_pane

0xebb8,	// (0x0006a42e) cell_ai5_widget_pane_ParamLimits

0xebb8,	// (0x0006a42e) cell_ai5_widget_pane

0x7177,	// (0x000629ed) aid_size_cell_widget_grid

0x7185,	// (0x000629fb) bg_ai5_widget_pane_ParamLimits

0x7185,	// (0x000629fb) bg_ai5_widget_pane

0x71fd,	// (0x00062a73) cell_ai5_widget_pane_g2

0x7211,	// (0x00062a87) cell_ai5_widget_pane_g3

0x722b,	// (0x00062aa1) cell_ai5_widget_pane_g4

0x723b,	// (0x00062ab1) cell_ai5_widget_pane_g5

0x724b,	// (0x00062ac1) cell_ai5_widget_pane_g6

0x7257,	// (0x00062acd) cell_ai5_widget_pane_g7

0x729f,	// (0x00062b15) cell_ai5_widget_pane_t1_ParamLimits

0x729f,	// (0x00062b15) cell_ai5_widget_pane_t1

0x72bc,	// (0x00062b32) cell_ai5_widget_pane_t2_ParamLimits

0x72bc,	// (0x00062b32) cell_ai5_widget_pane_t2

0x72d4,	// (0x00062b4a) cell_ai5_widget_pane_t3_ParamLimits

0x72d4,	// (0x00062b4a) cell_ai5_widget_pane_t3

0x72ec,	// (0x00062b62) cell_ai5_widget_pane_t4_ParamLimits

0x72ec,	// (0x00062b62) cell_ai5_widget_pane_t4

0x7312,	// (0x00062b88) cell_ai5_widget_pane_t5_ParamLimits

0x7312,	// (0x00062b88) cell_ai5_widget_pane_t5

0x7332,	// (0x00062ba8) cell_ai5_widget_pane_t6_ParamLimits

0x7332,	// (0x00062ba8) cell_ai5_widget_pane_t6

0x7344,	// (0x00062bba) cell_ai5_widget_pane_t7_ParamLimits

0x7344,	// (0x00062bba) cell_ai5_widget_pane_t7

0x735d,	// (0x00062bd3) cell_ai5_widget_pane_t8_ParamLimits

0x735d,	// (0x00062bd3) cell_ai5_widget_pane_t8

0x0009,

0xfe45,	// (0x0006b6bb) cell_ai5_widget_pane_t_ParamLimits

0xfe45,	// (0x0006b6bb) cell_ai5_widget_pane_t

0x73bc,	// (0x00062c32) grid_ai5_widget_pane

0x8272,	// (0x00063ae8) highlight_cell_ai5_widget_pane_ParamLimits

0x8272,	// (0x00063ae8) highlight_cell_ai5_widget_pane

0xec1e,	// (0x0006a494) ai5_sk_left_pane

0xec28,	// (0x0006a49e) ai5_sk_middle_pane

0xec32,	// (0x0006a4a8) ai5_sk_right_pane

0x73e8,	// (0x00062c5e) bg_ai5_widget_pane_g1_ParamLimits

0x73e8,	// (0x00062c5e) bg_ai5_widget_pane_g1

0x73f4,	// (0x00062c6a) bg_ai5_widget_pane_g2_ParamLimits

0x73f4,	// (0x00062c6a) bg_ai5_widget_pane_g2

0x7400,	// (0x00062c76) bg_ai5_widget_pane_g3_ParamLimits

0x7400,	// (0x00062c76) bg_ai5_widget_pane_g3

0x740c,	// (0x00062c82) bg_ai5_widget_pane_g4_ParamLimits

0x740c,	// (0x00062c82) bg_ai5_widget_pane_g4

0x7418,	// (0x00062c8e) bg_ai5_widget_pane_g5_ParamLimits

0x7418,	// (0x00062c8e) bg_ai5_widget_pane_g5

0x7424,	// (0x00062c9a) bg_ai5_widget_pane_g6_ParamLimits

0x7424,	// (0x00062c9a) bg_ai5_widget_pane_g6

0x7430,	// (0x00062ca6) bg_ai5_widget_pane_g7_ParamLimits

0x7430,	// (0x00062ca6) bg_ai5_widget_pane_g7

0x743c,	// (0x00062cb2) bg_ai5_widget_pane_g8_ParamLimits

0x743c,	// (0x00062cb2) bg_ai5_widget_pane_g8

0x7448,	// (0x00062cbe) bg_ai5_widget_pane_g9_ParamLimits

0x7448,	// (0x00062cbe) bg_ai5_widget_pane_g9

0x0008,

0xfe5a,	// (0x0006b6d0) bg_ai5_widget_pane_g_ParamLimits

0xfe5a,	// (0x0006b6d0) bg_ai5_widget_pane_g

0x747a,	// (0x00062cf0) cell_shortcut_ai5_widget_pane_ParamLimits

0x747a,	// (0x00062cf0) cell_shortcut_ai5_widget_pane

0xe1e4,	// (0x00069a5a) bg_cell_shortcut_ai5_widget_pane

0x748b,	// (0x00062d01) cell_grid_ai5_widget_pane_g1

0xe1e4,	// (0x00069a5a) highlight_cell_shortcut_ai5_widget_pane

0x239f,	// (0x0005dc15) ai5_sk_left_pane_g1

0x7494,	// (0x00062d0a) ai5_sk_left_pane_g2

0x749c,	// (0x00062d12) ai5_sk_left_pane_g3

0x74a4,	// (0x00062d1a) ai5_sk_left_pane_g4

0x0003,

0xfe6d,	// (0x0006b6e3) ai5_sk_left_pane_g

0x74ac,	// (0x00062d22) ai5_sk_left_pane_t1

0x23a7,	// (0x0005dc1d) ai5_sk_right_pane_g1

0x74ba,	// (0x00062d30) ai5_sk_right_pane_g2

0x74c2,	// (0x00062d38) ai5_sk_right_pane_g3

0x74ca,	// (0x00062d40) ai5_sk_right_pane_g4

0x0003,

0xfe76,	// (0x0006b6ec) ai5_sk_right_pane_g

0x74d2,	// (0x00062d48) ai5_sk_right_pane_t1

0x23a7,	// (0x0005dc1d) ai5_sk_middle_pane_g1

0x239f,	// (0x0005dc15) ai5_sk_middle_pane_g2

0x23bf,	// (0x0005dc35) ai5_sk_middle_pane_g3

0x74c2,	// (0x00062d38) ai5_sk_middle_pane_g4

0x749c,	// (0x00062d12) ai5_sk_middle_pane_g5

0x74e0,	// (0x00062d56) ai5_sk_middle_pane_g6

0xec3c,	// (0x0006a4b2) ai5_sk_middle_pane_g7

0x0006,

0xfe7f,	// (0x0006b6f5) ai5_sk_middle_pane_g

0xae40,	// (0x000666b6) aid_touch_area_size_lc0_ParamLimits

0xae40,	// (0x000666b6) aid_touch_area_size_lc0

0x0faf,	// (0x0005c825) cell_hwr_candidate_pane_t1_ParamLimits

0x1eec,	// (0x0005d762) aid_touch_navi_pane

0xbe87,	// (0x000676fd) status_dt_navi_pane_ParamLimits

0xbe87,	// (0x000676fd) status_dt_navi_pane

0xbe9f,	// (0x00067715) status_dt_sta_pane_ParamLimits

0xbe9f,	// (0x00067715) status_dt_sta_pane

0xec44,	// (0x0006a4ba) dt_sta_controll_pane

0xec51,	// (0x0006a4c7) dt_sta_indi_pane

0xec5e,	// (0x0006a4d4) dt_sta_title_pane

0x7fea,	// (0x00063860) bg_dt_sta_indi_pane_ParamLimits

0x7fea,	// (0x00063860) bg_dt_sta_indi_pane

0xec70,	// (0x0006a4e6) dt_sta_battery_pane

0xec78,	// (0x0006a4ee) dt_sta_indi_pane_g1

0x7532,	// (0x00062da8) dt_sta_indi_pane_g2

0x753b,	// (0x00062db1) dt_sta_indi_pane_g3

0x0002,

0xfe8e,	// (0x0006b704) dt_sta_indi_pane_g

0x7544,	// (0x00062dba) dt_sta_signal_pane

0x8272,	// (0x00063ae8) bg_dt_sta_title_pane_ParamLimits

0x8272,	// (0x00063ae8) bg_dt_sta_title_pane

0x31f1,	// (0x0005ea67) dt_sta_title_pane_g1

0xec81,	// (0x0006a4f7) dt_sta_title_pane_t1_ParamLimits

0xec81,	// (0x0006a4f7) dt_sta_title_pane_t1

0x7e50,	// (0x000636c6) bg_dt_sta_control_pane

0xec96,	// (0x0006a50c) dt_sta_controll_pane_g1

0xec9f,	// (0x0006a515) bg_dt_sta_title_pane_g1

0xeca8,	// (0x0006a51e) bg_dt_sta_title_pane_g2

0xecb1,	// (0x0006a527) bg_dt_sta_title_pane_g3

0x0002,

0xfe95,	// (0x0006b70b) bg_dt_sta_title_pane_g

0x4b51,	// (0x000603c7) bg_dt_sta_indi_pane_g1

0x7586,	// (0x00062dfc) dt_sta_signal_pane_g1

0x758e,	// (0x00062e04) dt_sta_signal_pane_g2

0x0001,

0xfe9c,	// (0x0006b712) dt_sta_signal_pane_g

0x7596,	// (0x00062e0c) dt_sta_battery_pane_g1

0x759f,	// (0x00062e15) dt_sta_battery_pane_t1

0x4b51,	// (0x000603c7) bg_dt_sta_control_pane_g1

0xbba6,	// (0x0006741c) fep_china_uni_eep_pane

0xbbae,	// (0x00067424) fep_china_uni_entry_pane_ParamLimits

0xbbbe,	// (0x00067434) popup_fep_china_uni_window_g1_ParamLimits

0xbbce,	// (0x00067444) popup_fep_china_uni_window_g2_ParamLimits

0xbbce,	// (0x00067444) popup_fep_china_uni_window_g2

0x0001,

0xf713,	// (0x0006af89) popup_fep_china_uni_window_g_ParamLimits

0xf713,	// (0x0006af89) popup_fep_china_uni_window_g

0x75ae,	// (0x00062e24) fep_china_uni_eep_pane_g1

0x75b6,	// (0x00062e2c) fep_china_uni_eep_pane_t1

0x701e,	// (0x00062894) aid_touch_area_size_smil_player

0x2042,	// (0x0005d8b8) lc0_clock_pane

0x2229,	// (0x0005da9f) status_pane_g5_ParamLimits

0x2229,	// (0x0005da9f) status_pane_g5

0xa852,	// (0x000660c8) popup_keymap_window

0x21e7,	// (0x0005da5d) status_icon_pane

0x7211,	// (0x00062a87) cell_ai5_widget_pane_g3_ParamLimits

0x722b,	// (0x00062aa1) cell_ai5_widget_pane_g4_ParamLimits

0x723b,	// (0x00062ab1) cell_ai5_widget_pane_g5_ParamLimits

0x7263,	// (0x00062ad9) cell_ai5_widget_pane_g8_ParamLimits

0x7263,	// (0x00062ad9) cell_ai5_widget_pane_g8

0x7277,	// (0x00062aed) cell_ai5_widget_pane_g9_ParamLimits

0x7277,	// (0x00062aed) cell_ai5_widget_pane_g9

0x728b,	// (0x00062b01) cell_ai5_widget_pane_g10_ParamLimits

0x728b,	// (0x00062b01) cell_ai5_widget_pane_g10

0x75c5,	// (0x00062e3b) status_icon_pane_g1

0x7e50,	// (0x000636c6) bg_popup_sub_pane_cp13

0x75cd,	// (0x00062e43) popup_keymap_window_t1

0xa512,	// (0x00065d88) control_pane_g6_ParamLimits

0xa512,	// (0x00065d88) control_pane_g6

0xa51f,	// (0x00065d95) control_pane_g7_ParamLimits

0xa51f,	// (0x00065d95) control_pane_g7

0xa52c,	// (0x00065da2) control_pane_g8_ParamLimits

0xa52c,	// (0x00065da2) control_pane_g8

0xec44,	// (0x0006a4ba) dt_sta_controll_pane_ParamLimits

0xec51,	// (0x0006a4c7) dt_sta_indi_pane_ParamLimits

0xec5e,	// (0x0006a4d4) dt_sta_title_pane_ParamLimits

0x81bd,	// (0x00063a33) aid_size_touch_scroll_bar_cale

0x9141,	// (0x000649b7) popup_discreet_window_ParamLimits

0x9141,	// (0x000649b7) popup_discreet_window

0x9193,	// (0x00064a09) popup_sk_window

0x2a35,	// (0x0005e2ab) bg_popup_sub_pane_cp28_ParamLimits

0x2a35,	// (0x0005e2ab) bg_popup_sub_pane_cp28

0x75db,	// (0x00062e51) popup_discreet_window_g1_ParamLimits

0x75db,	// (0x00062e51) popup_discreet_window_g1

0xecba,	// (0x0006a530) popup_discreet_window_t1_ParamLimits

0xecba,	// (0x0006a530) popup_discreet_window_t1

0x7619,	// (0x00062e8f) popup_discreet_window_t2_ParamLimits

0x7619,	// (0x00062e8f) popup_discreet_window_t2

0x0002,

0xfea1,	// (0x0006b717) popup_discreet_window_t_ParamLimits

0xfea1,	// (0x0006b717) popup_discreet_window_t

0x1a96,	// (0x0005d30c) popup_sk_window_g1

0x1aa0,	// (0x0005d316) popup_sk_window_g2

0x0001,

0xfea8,	// (0x0006b71e) popup_sk_window_g

0xb872,	// (0x000670e8) popup_sk_window_t1

0xb880,	// (0x000670f6) popup_sk_window_t1_copy1

0x71fd,	// (0x00062a73) cell_ai5_widget_pane_g2_ParamLimits

0x736f,	// (0x00062be5) cell_ai5_widget_pane_t9_ParamLimits

0x736f,	// (0x00062be5) cell_ai5_widget_pane_t9

0x7e50,	// (0x000636c6) main_fep_fshwr2_pane

0xb88e,	// (0x00067104) aid_fshwr2_btn_pane

0xb8a2,	// (0x00067118) aid_fshwr2_syb_pane

0xb8b6,	// (0x0006712c) aid_fshwr2_txt_pane

0xb8c6,	// (0x0006713c) fshwr2_func_candi_pane

0xb8e6,	// (0x0006715c) fshwr2_hwr_syb_pane

0xb908,	// (0x0006717e) fshwr2_icf_pane

0xddf5,	// (0x0006966b) fshwr2_icf_bg_pane

0x1b52,	// (0x0005d3c8) fshwr2_icf_pane_t1_ParamLimits

0x1b52,	// (0x0005d3c8) fshwr2_icf_pane_t1

0xbb23,	// (0x00067399) fshwr2_func_candi_pane_g1

0xecd8,	// (0x0006a54e) fshwr2_func_candi_row_pane_ParamLimits

0xecd8,	// (0x0006a54e) fshwr2_func_candi_row_pane

0xb938,	// (0x000671ae) cell_fshwr2_syb_pane_ParamLimits

0xb938,	// (0x000671ae) cell_fshwr2_syb_pane

0x1b8e,	// (0x0005d404) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1b8e,	// (0x0005d404) fshwr2_hwr_syb_pane_g1

0xddf5,	// (0x0006966b) bg_popup_call_pane_cp01

0xb95e,	// (0x000671d4) fshwr2_func_candi_cell_pane_ParamLimits

0xb95e,	// (0x000671d4) fshwr2_func_candi_cell_pane

0x281e,	// (0x0005e094) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x281e,	// (0x0005e094) fshwr2_func_candi_cell_bg_pane

0xb9a9,	// (0x0006721f) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb9a9,	// (0x0006721f) fshwr2_func_candi_cell_pane_g1

0xb9e0,	// (0x00067256) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xb9e0,	// (0x00067256) fshwr2_func_candi_cell_pane_t1

0xddf5,	// (0x0006966b) bg_button_pane_cp08

0x7692,	// (0x00062f08) cell_fshwr2_syb_bg_pane

0xb9fb,	// (0x00067271) cell_fshwr2_syb_bg_pane_g1

0xba0e,	// (0x00067284) cell_fshwr2_syb_bg_pane_t1

0x8272,	// (0x00063ae8) main_tmo_pane

0xc562,	// (0x00067dd8) uni_indicator_pane_g1_ParamLimits

0xc578,	// (0x00067dee) uni_indicator_pane_g2_ParamLimits

0xc58e,	// (0x00067e04) uni_indicator_pane_g3_ParamLimits

0x355e,	// (0x0005edd4) uni_indicator_pane_g4_ParamLimits

0x355e,	// (0x0005edd4) uni_indicator_pane_g4

0x3572,	// (0x0005ede8) uni_indicator_pane_g5_ParamLimits

0x3572,	// (0x0005ede8) uni_indicator_pane_g5

0x3572,	// (0x0005ede8) uni_indicator_pane_g6_ParamLimits

0x3572,	// (0x0005ede8) uni_indicator_pane_g6

0xf90b,	// (0x0006b181) uni_indicator_pane_g_ParamLimits

0xd3f6,	// (0x00068c6c) popup_tmo_note_window_ParamLimits

0xd3f6,	// (0x00068c6c) popup_tmo_note_window

0x1316,	// (0x0005cb8c) fshwr2_bg_pane

0xb9d1,	// (0x00067247) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xb9d1,	// (0x00067247) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfead,	// (0x0006b723) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfead,	// (0x0006b723) fshwr2_func_candi_cell_pane_g

0x0f68,	// (0x0005c7de) bg_popup_window_pane_cp01

0x1c4c,	// (0x0005d4c2) bg_popup_window_pane_g1_cp01

0x769e,	// (0x00062f14) bg_popup_window_pane_cp22_ParamLimits

0x769e,	// (0x00062f14) bg_popup_window_pane_cp22

0xecfb,	// (0x0006a571) listscroll_tmo_link_pane_ParamLimits

0xecfb,	// (0x0006a571) listscroll_tmo_link_pane

0x76ec,	// (0x00062f62) popup_tmo_note_window_g1_ParamLimits

0x76ec,	// (0x00062f62) popup_tmo_note_window_g1

0xed3b,	// (0x0006a5b1) tmo_note_info_pane_ParamLimits

0xed3b,	// (0x0006a5b1) tmo_note_info_pane

0xed55,	// (0x0006a5cb) list_tmo_note_info_pane_g1_ParamLimits

0xed55,	// (0x0006a5cb) list_tmo_note_info_pane_g1

0x772a,	// (0x00062fa0) list_tmo_note_info_pane_g2_ParamLimits

0x772a,	// (0x00062fa0) list_tmo_note_info_pane_g2

0x0001,

0xfeb2,	// (0x0006b728) list_tmo_note_info_pane_g_ParamLimits

0xfeb2,	// (0x0006b728) list_tmo_note_info_pane_g

0x7746,	// (0x00062fbc) list_tmo_note_info_text_pane_ParamLimits

0x7746,	// (0x00062fbc) list_tmo_note_info_text_pane

0x77c7,	// (0x0006303d) list_tmo_link_pane

0x77d4,	// (0x0006304a) scroll_pane_cp20

0x77e1,	// (0x00063057) list_single_tmo_link_pane_ParamLimits

0x77e1,	// (0x00063057) list_single_tmo_link_pane

0x77f1,	// (0x00063067) list_single_tmo_link_pane_t1

0x77ff,	// (0x00063075) list_tmo_note_info_text_pane_t1_ParamLimits

0x77ff,	// (0x00063075) list_tmo_note_info_text_pane_t1

0x9e66,	// (0x000656dc) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9e66,	// (0x000656dc) aid_size_touch_scroll_bar_cp01

0x9d79,	// (0x000655ef) aid_size_touch_slider_marker

0x9183,	// (0x000649f9) popup_settings_window_ParamLimits

0x9183,	// (0x000649f9) popup_settings_window

0xe322,	// (0x00069b98) popup_candi_list_indi_window

0x1eec,	// (0x0005d762) aid_touch_navi_pane_ParamLimits

0x1271,	// (0x0005cae7) rs_clock_indi_pane

0x127a,	// (0x0005caf0) sctrl_sk_bottom_pane_ParamLimits

0x128b,	// (0x0005cb01) sctrl_sk_top_pane_ParamLimits

0xb4d8,	// (0x00066d4e) popup_fep_tooltip_window

0x7177,	// (0x000629ed) aid_size_cell_widget_grid_ParamLimits

0x71e8,	// (0x00062a5e) cell_ai5_widget_pane_g1_ParamLimits

0x71e8,	// (0x00062a5e) cell_ai5_widget_pane_g1

0x724b,	// (0x00062ac1) cell_ai5_widget_pane_g6_ParamLimits

0x7257,	// (0x00062acd) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe30,	// (0x0006b6a6) cell_ai5_widget_pane_g_ParamLimits

0xfe30,	// (0x0006b6a6) cell_ai5_widget_pane_g

0x739e,	// (0x00062c14) cell_ai5_widget_pane_t10_ParamLimits

0x739e,	// (0x00062c14) cell_ai5_widget_pane_t10

0x73bc,	// (0x00062c32) grid_ai5_widget_pane_ParamLimits

0x7454,	// (0x00062cca) cell_contacts_ai5_widget_pane_ParamLimits

0x7454,	// (0x00062cca) cell_contacts_ai5_widget_pane

0x762e,	// (0x00062ea4) popup_discreet_window_t3_ParamLimits

0x762e,	// (0x00062ea4) popup_discreet_window_t3

0xb924,	// (0x0006719a) popup_fshwr2_char_preview_window_ParamLimits

0xb924,	// (0x0006719a) popup_fshwr2_char_preview_window

0xed6c,	// (0x0006a5e2) tmo_note_info_pane_t1

0xed81,	// (0x0006a5f7) tmo_note_info_pane_t2

0xed98,	// (0x0006a60e) tmo_note_info_pane_t3

0x77a3,	// (0x00063019) tmo_note_info_pane_t4

0x77b5,	// (0x0006302b) tmo_note_info_pane_t5

0x0004,

0xfeb7,	// (0x0006b72d) tmo_note_info_pane_t

0x77c7,	// (0x0006303d) list_tmo_link_pane_ParamLimits

0x77d4,	// (0x0006304a) scroll_pane_cp20_ParamLimits

0xddf5,	// (0x0006966b) bg_popup_fep_char_preview_window_cp01

0xedad,	// (0x0006a623) popup_fshwr2_char_preview_window_t1

0x7826,	// (0x0006309c) popup_candi_list_indi_window_g1

0x782f,	// (0x000630a5) bg_cell_contacts_ai5_widget_pane

0x783b,	// (0x000630b1) cell_contacts_ai5_widget_pane_g1

0x5216,	// (0x00060a8c) cell_contacts_ai5_widget_pane_g2

0x7850,	// (0x000630c6) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec2,	// (0x0006b738) cell_contacts_ai5_widget_pane_g

0x785c,	// (0x000630d2) cell_contacts_ai5_widget_pane_t1

0x8272,	// (0x00063ae8) highlight_cell_shortcut_ai5_widget_pane_cp01

0x78d3,	// (0x00063149) settings_container_pane

0xe1e4,	// (0x00069a5a) listscroll_set_pane_copy1

0x4253,	// (0x0005fac9) scroll_pane_cp121_copy1

0x27e2,	// (0x0005e058) set_content_pane_copy1

0xee20,	// (0x0006a696) aid_height_set_list_copy1_ParamLimits

0xee20,	// (0x0006a696) aid_height_set_list_copy1

0x376a,	// (0x0005efe0) aid_size_parent_copy1_ParamLimits

0x376a,	// (0x0005efe0) aid_size_parent_copy1

0xee2c,	// (0x0006a6a2) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee2c,	// (0x0006a6a2) button_value_adjust_pane_cp6_copy1

0x1e70,	// (0x0005d6e6) list_highlight_pane_cp2_copy1_ParamLimits

0x1e70,	// (0x0005d6e6) list_highlight_pane_cp2_copy1

0xee40,	// (0x0006a6b6) list_set_pane_copy1_ParamLimits

0xee40,	// (0x0006a6b6) list_set_pane_copy1

0xedbb,	// (0x0006a631) main_pane_set_t1_copy1_ParamLimits

0xedbb,	// (0x0006a631) main_pane_set_t1_copy1

0xedf5,	// (0x0006a66b) main_pane_set_t2_copy1_ParamLimits

0xedf5,	// (0x0006a66b) main_pane_set_t2_copy1

0xeeed,	// (0x0006a763) main_pane_set_t3_copy1

0xeefb,	// (0x0006a771) main_pane_set_t4_copy1

0xee14,	// (0x0006a68a) set_content_pane_g1_copy1_ParamLimits

0xee14,	// (0x0006a68a) set_content_pane_g1_copy1

0xef09,	// (0x0006a77f) setting_code_pane_copy1

0x79d0,	// (0x00063246) setting_slider_graphic_pane_copy1

0x79d0,	// (0x00063246) setting_slider_pane_copy1

0x79d0,	// (0x00063246) setting_text_pane_copy1

0x79d0,	// (0x00063246) setting_volume_pane_copy1

0xef09,	// (0x0006a77f) settings_code_pane_cp2_copy1

0xef11,	// (0x0006a787) settings_code_pane_cp_copy1_ParamLimits

0xef11,	// (0x0006a787) settings_code_pane_cp_copy1

0xba24,	// (0x0006729a) volume_set_pane_copy1

0xef25,	// (0x0006a79b) volume_set_pane_g10_copy1

0xef2d,	// (0x0006a7a3) volume_set_pane_g1_copy1

0xef35,	// (0x0006a7ab) volume_set_pane_g2_copy1

0xef3d,	// (0x0006a7b3) volume_set_pane_g3_copy1

0xef45,	// (0x0006a7bb) volume_set_pane_g4_copy1

0xef4d,	// (0x0006a7c3) volume_set_pane_g5_copy1

0xef55,	// (0x0006a7cb) volume_set_pane_g6_copy1

0xef5d,	// (0x0006a7d3) volume_set_pane_g7_copy1

0xef65,	// (0x0006a7db) volume_set_pane_g8_copy1

0xef6d,	// (0x0006a7e3) volume_set_pane_g9_copy1

0x7eb2,	// (0x00063728) bg_set_opt_pane_cp_copy1_ParamLimits

0x7eb2,	// (0x00063728) bg_set_opt_pane_cp_copy1

0xba2c,	// (0x000672a2) setting_slider_pane_t1_copy1_ParamLimits

0xba2c,	// (0x000672a2) setting_slider_pane_t1_copy1

0xba4a,	// (0x000672c0) setting_slider_pane_t2_copy1_ParamLimits

0xba4a,	// (0x000672c0) setting_slider_pane_t2_copy1

0xba64,	// (0x000672da) setting_slider_pane_t3_copy1_ParamLimits

0xba64,	// (0x000672da) setting_slider_pane_t3_copy1

0xba7c,	// (0x000672f2) slider_set_pane_copy1_ParamLimits

0xba7c,	// (0x000672f2) slider_set_pane_copy1

0x82ca,	// (0x00063b40) set_opt_bg_pane_g1_copy2

0x82d2,	// (0x00063b48) set_opt_bg_pane_g2_copy2

0x7a3c,	// (0x000632b2) set_opt_bg_pane_g3_copy2

0x82e2,	// (0x00063b58) set_opt_bg_pane_g4_copy2

0x82ea,	// (0x00063b60) set_opt_bg_pane_g5_copy2

0x82f2,	// (0x00063b68) set_opt_bg_pane_g6_copy2

0xef75,	// (0x0006a7eb) set_opt_bg_pane_g7_copy2

0x7a4e,	// (0x000632c4) set_opt_bg_pane_g8_copy2

0x7a58,	// (0x000632ce) set_opt_bg_pane_g9_copy2

0xba92,	// (0x00067308) aid_size_touch_slider_mark_copy1_ParamLimits

0xba92,	// (0x00067308) aid_size_touch_slider_mark_copy1

0xef7d,	// (0x0006a7f3) slider_set_pane_g1_copy1

0x1cd7,	// (0x0005d54d) slider_set_pane_g2_copy1

0xb0fa,	// (0x00066970) slider_set_pane_g3_copy1_ParamLimits

0xb0fa,	// (0x00066970) slider_set_pane_g3_copy1

0xb10e,	// (0x00066984) slider_set_pane_g4_copy1_ParamLimits

0xb10e,	// (0x00066984) slider_set_pane_g4_copy1

0xb126,	// (0x0006699c) slider_set_pane_g5_copy1_ParamLimits

0xb126,	// (0x0006699c) slider_set_pane_g5_copy1

0xb0fa,	// (0x00066970) slider_set_pane_g6_copy1_ParamLimits

0xb0fa,	// (0x00066970) slider_set_pane_g6_copy1

0xbaa6,	// (0x0006731c) slider_set_pane_g7_copy1_ParamLimits

0xbaa6,	// (0x0006731c) slider_set_pane_g7_copy1

0x7e64,	// (0x000636da) bg_set_opt_pane_cp2_copy1

0xef86,	// (0x0006a7fc) setting_slider_graphic_pane_g1_copy1

0xef8f,	// (0x0006a805) setting_slider_graphic_pane_t1_copy1

0xef9f,	// (0x0006a815) setting_slider_graphic_pane_t2_copy1

0xefaf,	// (0x0006a825) slider_set_pane_cp_copy1

0x7aa4,	// (0x0006331a) input_focus_pane_cp1_copy1

0x7aad,	// (0x00063323) list_set_text_pane_copy1

0x7ab5,	// (0x0006332b) setting_text_pane_g1_copy1

0xefbf,	// (0x0006a835) set_text_pane_t1_copy1

0x7aa4,	// (0x0006331a) input_focus_pane_cp2_copy1

0x7ab5,	// (0x0006332b) setting_code_pane_g1_copy1

0x7abe,	// (0x00063334) setting_code_pane_t1_copy1

0x7acc,	// (0x00063342) list_set_graphic_pane_copy1

0x7e64,	// (0x000636da) bg_set_opt_pane_cp4_copy1

0xbcfe,	// (0x00067574) list_set_graphic_pane_g1_copy1_ParamLimits

0xbcfe,	// (0x00067574) list_set_graphic_pane_g1_copy1

0x7ae0,	// (0x00063356) list_set_graphic_pane_g2_copy1

0xbd16,	// (0x0006758c) list_set_graphic_pane_t1_copy1_ParamLimits

0xbd16,	// (0x0006758c) list_set_graphic_pane_t1_copy1

0x4b51,	// (0x000603c7) rs_clock_indi_pane_g1

0x7ae8,	// (0x0006335e) rs_clock_indi_pane_t1

0x7af6,	// (0x0006336c) rs_indi_pane

0x7afe,	// (0x00063374) rs_indi_pane_g1

0x7b07,	// (0x0006337d) rs_indi_pane_g2

0x7826,	// (0x0006309c) rs_indi_pane_g3

0x0002,

0xfec9,	// (0x0006b73f) rs_indi_pane_g

0xe1e4,	// (0x00069a5a) bg_popup_preview_window_pane_cp03

0x7b10,	// (0x00063386) popup_fep_tooltip_window_t1

0xd023,	// (0x00068899) popup_note2_window_g2_ParamLimits

0xd023,	// (0x00068899) popup_note2_window_g2

0x0001,

0xfc69,	// (0x0006b4df) popup_note2_window_g_ParamLimits

0xfc69,	// (0x0006b4df) popup_note2_window_g

0x5ccd,	// (0x00061543) bg_popup_sub_pane_cp11_ParamLimits

0x5cda,	// (0x00061550) cell_ai3_links_pane_g1_ParamLimits

0x5cf1,	// (0x00061567) cell_ai3_links_pane_t1

0xefbf,	// (0x0006a835) set_text_pane_t1_copy1_ParamLimits

0xe123,	// (0x00069999) cell_graphic_popup_pane_cp2_ParamLimits

0xe123,	// (0x00069999) cell_graphic_popup_pane_cp2

0xefd9,	// (0x0006a84f) cell_graphic_popup_pane_g1_cp2

0x8140,	// (0x000639b6) cell_graphic_popup_pane_g2_cp2

0x7b26,	// (0x0006339c) cell_graphic_popup_pane_g3_cp2

0xefe1,	// (0x0006a857) cell_graphic_popup_pane_t2_cp2

0x8151,	// (0x000639c7) grid_highlight_pane_cp3_cp2

0x8522,	// (0x00063d98) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8272,	// (0x00063ae8) main_tmo_pane_ParamLimits

0xd3ea,	// (0x00068c60) popup_tmo_big_image_note_window

0x71d7,	// (0x00062a4d) cell_ai5_widget_list_pane

0x71df,	// (0x00062a55) cell_ai5_widget_lrg_icon_pane

0xed6c,	// (0x0006a5e2) tmo_note_info_pane_t1_ParamLimits

0xed81,	// (0x0006a5f7) tmo_note_info_pane_t2_ParamLimits

0xed98,	// (0x0006a60e) tmo_note_info_pane_t3_ParamLimits

0x77a3,	// (0x00063019) tmo_note_info_pane_t4_ParamLimits

0x77b5,	// (0x0006302b) tmo_note_info_pane_t5_ParamLimits

0xfeb7,	// (0x0006b72d) tmo_note_info_pane_t_ParamLimits

0x78d3,	// (0x00063149) settings_container_pane_ParamLimits

0xefb7,	// (0x0006a82d) indicator_popup_pane_cp5

0xefb7,	// (0x0006a82d) indicator_popup_pane_cp6

0x7acc,	// (0x00063342) list_set_graphic_pane_copy1_ParamLimits

0x7e50,	// (0x000636c6) bg_popup_window_pane_cp23

0x7b3c,	// (0x000633b2) popup_tmo_big_image_note_window_g1

0x7b45,	// (0x000633bb) popup_tmo_big_image_note_window_t1

0x7b55,	// (0x000633cb) popup_tmo_big_image_note_window_t2

0x7b65,	// (0x000633db) popup_tmo_big_image_note_window_t3

0x0002,

0xfed0,	// (0x0006b746) popup_tmo_big_image_note_window_t

0x4b51,	// (0x000603c7) cell_ai5_widget_lrg_icon_pane_g1

0x7b75,	// (0x000633eb) cell_ai5_widget_lrg_icon_pane_t1

0x7b83,	// (0x000633f9) cell_ai5_widget_list_row_pane_ParamLimits

0x7b83,	// (0x000633f9) cell_ai5_widget_list_row_pane

0x7b9a,	// (0x00063410) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7b9a,	// (0x00063410) cell_ai5_widget_list_row_pane_g1

0xefef,	// (0x0006a865) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xefef,	// (0x0006a865) cell_ai5_widget_list_row_pane_t1

0x7bd2,	// (0x00063448) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7bd2,	// (0x00063448) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed7,	// (0x0006b74d) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed7,	// (0x0006b74d) cell_ai5_widget_list_row_pane_t

0xddf5,	// (0x0006966b) main_fep_vtchi_ss_pane

0x7c1a,	// (0x00063490) popup_fep_char_pre_window

0x7c22,	// (0x00063498) popup_fep_ituss_window

0xf042,	// (0x0006a8b8) popup_fep_vkbss_window

0xf04f,	// (0x0006a8c5) grid_vkbss_keypad_pane_ParamLimits

0xf04f,	// (0x0006a8c5) grid_vkbss_keypad_pane

0x7c88,	// (0x000634fe) ituss_keypad_pane

0x1d01,	// (0x0005d577) aid_vkbss_key_offset_ParamLimits

0x1d01,	// (0x0005d577) aid_vkbss_key_offset

0xbabc,	// (0x00067332) cell_vkbss_key_pane_ParamLimits

0xbabc,	// (0x00067332) cell_vkbss_key_pane

0x2203,	// (0x0005da79) bg_cell_vkbss_key_g1_ParamLimits

0x2203,	// (0x0005da79) bg_cell_vkbss_key_g1

0xf05f,	// (0x0006a8d5) cell_vkbss_key_3p_pane_ParamLimits

0xf05f,	// (0x0006a8d5) cell_vkbss_key_3p_pane

0xf079,	// (0x0006a8ef) cell_vkbss_key_g1_ParamLimits

0xf079,	// (0x0006a8ef) cell_vkbss_key_g1

0xf093,	// (0x0006a909) cell_vkbss_key_t1_ParamLimits

0xf093,	// (0x0006a909) cell_vkbss_key_t1

0x1d23,	// (0x0005d599) cell_ituss_key_pane_ParamLimits

0x1d23,	// (0x0005d599) cell_ituss_key_pane

0x7cea,	// (0x00063560) bg_cell_ituss_key_g1_ParamLimits

0x7cea,	// (0x00063560) bg_cell_ituss_key_g1

0x7cf6,	// (0x0006356c) cell_ituss_key_pane_g1_ParamLimits

0x7cf6,	// (0x0006356c) cell_ituss_key_pane_g1

0x1d34,	// (0x0005d5aa) cell_ituss_key_pane_g2_ParamLimits

0x1d34,	// (0x0005d5aa) cell_ituss_key_pane_g2

0x0002,

0xfede,	// (0x0006b754) cell_ituss_key_pane_g_ParamLimits

0xfede,	// (0x0006b754) cell_ituss_key_pane_g

0x1d60,	// (0x0005d5d6) cell_ituss_key_t1_ParamLimits

0x1d60,	// (0x0005d5d6) cell_ituss_key_t1

0x1d9a,	// (0x0005d610) cell_ituss_key_t2_ParamLimits

0x1d9a,	// (0x0005d610) cell_ituss_key_t2

0x1dcb,	// (0x0005d641) cell_ituss_key_t3_ParamLimits

0x1dcb,	// (0x0005d641) cell_ituss_key_t3

0x1d9a,	// (0x0005d610) cell_ituss_key_t4_ParamLimits

0x1d9a,	// (0x0005d610) cell_ituss_key_t4

0x0004,

0xfee5,	// (0x0006b75b) cell_ituss_key_t_ParamLimits

0xfee5,	// (0x0006b75b) cell_ituss_key_t

0x7d1c,	// (0x00063592) cell_vkbss_key_3p_pane_g1

0x7d24,	// (0x0006359a) cell_vkbss_key_3p_pane_g2

0x7d2c,	// (0x000635a2) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef0,	// (0x0006b766) cell_vkbss_key_3p_pane_g

0xe1e4,	// (0x00069a5a) bg_popup_fep_char_preview_window_cp02

0x7d34,	// (0x000635aa) popup_fep_char_pre_window_t1

0xec14,	// (0x0006a48a) main_ai5_sk_pane

0x782f,	// (0x000630a5) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x783b,	// (0x000630b1) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x5216,	// (0x00060a8c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7850,	// (0x000630c6) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec2,	// (0x0006b738) cell_contacts_ai5_widget_pane_g_ParamLimits

0x785c,	// (0x000630d2) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8272,	// (0x00063ae8) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf0be,	// (0x0006a934) main_ai5_sk_pane_g1

0xc1bb,	// (0x00067a31) popup_query_code_window_g1

0xf033,	// (0x0006a8a9) popup_fep_vkb_icf_pane

0x7c62,	// (0x000634d8) popup_fep_vtchi_icf_pane

0x7d4b,	// (0x000635c1) bg_icf_pane

0x7d57,	// (0x000635cd) list_vkb_icf_pane

0x7d66,	// (0x000635dc) bg_icf_pane_cp01

0x7d79,	// (0x000635ef) vtchi_icf_list_pane

0xf0c7,	// (0x0006a93d) list_vkb_icf_pane_t1_ParamLimits

0xf0c7,	// (0x0006a93d) list_vkb_icf_pane_t1

0x7daa,	// (0x00063620) vtchi_icf_list_pane_t1_ParamLimits

0x7daa,	// (0x00063620) vtchi_icf_list_pane_t1

0x7c22,	// (0x00063498) popup_fep_ituss_window_ParamLimits

0x7c62,	// (0x000634d8) popup_fep_vtchi_icf_pane_ParamLimits

0x7c88,	// (0x000634fe) ituss_keypad_pane_ParamLimits

0x1cf5,	// (0x0005d56b) ituss_sks_pane

0x7d4b,	// (0x000635c1) bg_icf_pane_ParamLimits

0xf020,	// (0x0006a896) icf_edit_indi_pane_ParamLimits

0xf020,	// (0x0006a896) icf_edit_indi_pane

0x7d57,	// (0x000635cd) list_vkb_icf_pane_ParamLimits

0x7d66,	// (0x000635dc) bg_icf_pane_cp01_ParamLimits

0x7c0d,	// (0x00063483) icf_edit_indi_pane_cp01_ParamLimits

0x7c0d,	// (0x00063483) icf_edit_indi_pane_cp01

0x7d81,	// (0x000635f7) vtchi_query_pane

0x6fee,	// (0x00062864) icf_edit_indi_pane_g1_ParamLimits

0x6fee,	// (0x00062864) icf_edit_indi_pane_g1

0xf0de,	// (0x0006a954) icf_edit_indi_pane_g2_ParamLimits

0xf0de,	// (0x0006a954) icf_edit_indi_pane_g2

0x0001,

0xff08,	// (0x0006b77e) icf_edit_indi_pane_g_ParamLimits

0xff08,	// (0x0006b77e) icf_edit_indi_pane_g

0xf0f0,	// (0x0006a966) icf_edit_indi_pane_t1

0x7dc8,	// (0x0006363e) bg_input_focus_pane_cp042

0x81b4,	// (0x00063a2a) vtchi_button_pane

0x7dd1,	// (0x00063647) vtchi_query_pane_t1

0x7ddf,	// (0x00063655) vtchi_query_pane_t2

0x7ded,	// (0x00063663) vtchi_query_pane_t3

0x0002,

0xfef7,	// (0x0006b76d) vtchi_query_pane_t

0xddf5,	// (0x0006966b) bg_button_pane_cp13

0x7dfb,	// (0x00063671) vtchi_button_pane_g1

0x1e0e,	// (0x0005d684) ituss_sks_pane_g1

0x1e19,	// (0x0005d68f) ituss_sks_pane_g2

0x0001,

0xfefe,	// (0x0006b774) ituss_sks_pane_g

0x7e03,	// (0x00063679) ituss_sks_pane_t1

0x7e11,	// (0x00063687) ituss_sks_pane_t2

0x0001,

0xff03,	// (0x0006b779) ituss_sks_pane_t

0x45ce,	// (0x0005fe44) indicator_nsta_pane_cp_g1

0x45d6,	// (0x0005fe4c) indicator_nsta_pane_cp_g2

0x45de,	// (0x0005fe54) indicator_nsta_pane_cp_g3

0x45ce,	// (0x0005fe44) indicator_nsta_pane_cp_g4

0x45d6,	// (0x0005fe4c) indicator_nsta_pane_cp_g5

0x45de,	// (0x0005fe54) indicator_nsta_pane_cp_g6

0x0005,

0xfaa7,	// (0x0006b31d) indicator_nsta_pane_cp_g

0xe9f1,	// (0x0006a267) cell_graphic2_pane_t2_ParamLimits

0xe9f1,	// (0x0006a267) cell_graphic2_pane_t2

0x0001,

0xfdb9,	// (0x0006b62f) cell_graphic2_pane_t_ParamLimits

0xfdb9,	// (0x0006b62f) cell_graphic2_pane_t

0xea2a,	// (0x0006a2a0) cell_graphic2_control_pane_t1

0xa12c,	// (0x000659a2) signal_pane_g3_ParamLimits

0xa12c,	// (0x000659a2) signal_pane_g3

0xa140,	// (0x000659b6) signal_pane_g4_ParamLimits

0xa140,	// (0x000659b6) signal_pane_g4

0x7be4,	// (0x0006345a) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7be4,	// (0x0006345a) cell_ai5_widget_list_row_pane_t3

0x7d0a,	// (0x00063580) cell_ituss_key_pane_t1_ParamLimits

0x7d0a,	// (0x00063580) cell_ituss_key_pane_t1

0x24b1,	// (0x0005dd27) form_field_data_wide_pane_vc_t2_ParamLimits

0x24b1,	// (0x0005dd27) form_field_data_wide_pane_vc_t2

0x24c5,	// (0x0005dd3b) form_field_data_wide_pane_vc_t3_ParamLimits

0x24c5,	// (0x0005dd3b) form_field_data_wide_pane_vc_t3

0x0002,

0xf7f3,	// (0x0006b069) form_field_data_wide_pane_vc_t_ParamLimits

0xf7f3,	// (0x0006b069) form_field_data_wide_pane_vc_t

0x4295,	// (0x0005fb0b) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4295,	// (0x0005fb0b) form_field_slider_wide_pane_vc_t3

0x4373,	// (0x0005fbe9) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4373,	// (0x0005fbe9) form_field_popup_wide_pane_vc_t2

0x438a,	// (0x0005fc00) form_field_popup_wide_pane_vc_t3_ParamLimits

0x438a,	// (0x0005fc00) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa96,	// (0x0006b30c) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa96,	// (0x0006b30c) form_field_popup_wide_pane_vc_t

0xb88e,	// (0x00067104) aid_fshwr2_btn_pane_ParamLimits

0xb8a2,	// (0x00067118) aid_fshwr2_syb_pane_ParamLimits

0xb8b6,	// (0x0006712c) aid_fshwr2_txt_pane_ParamLimits

0x1316,	// (0x0005cb8c) fshwr2_bg_pane_ParamLimits

0xb8c6,	// (0x0006713c) fshwr2_func_candi_pane_ParamLimits

0xb8e6,	// (0x0006715c) fshwr2_hwr_syb_pane_ParamLimits

0xb908,	// (0x0006717e) fshwr2_icf_pane_ParamLimits

0x3fb1,	// (0x0005f827) list_double_graphic_pane_vc_g4_ParamLimits

0x3fb1,	// (0x0005f827) list_double_graphic_pane_vc_g4

0x1d54,	// (0x0005d5ca) cell_ituss_key_pane_g3_ParamLimits

0x1d54,	// (0x0005d5ca) cell_ituss_key_pane_g3

0x1dfc,	// (0x0005d672) cell_ituss_key_t5_ParamLimits

0x1dfc,	// (0x0005d672) cell_ituss_key_t5

0xf042,	// (0x0006a8b8) popup_fep_vkbss_window_ParamLimits

0x716e,	// (0x000629e4) aid_cell_ai5_quarter

0xf0f0,	// (0x0006a966) icf_edit_indi_pane_t1_ParamLimits

0x95ac,	// (0x00064e22) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x95ac,	// (0x00064e22) aid_tch_indicator_popup_pane_cp2

0x95bf,	// (0x00064e35) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x95bf,	// (0x00064e35) aid_tch_query_popup_data_pane_cp2

0x281e,	// (0x0005e094) aid_tch_query_popup_pane_ParamLimits

0x281e,	// (0x0005e094) aid_tch_query_popup_pane

0x281e,	// (0x0005e094) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x281e,	// (0x0005e094) aid_tch_query_popup_data_pane_cp1

0x7692,	// (0x00062f08) cell_fshwr2_syb_bg_pane_ParamLimits

0xb9fb,	// (0x00067271) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xba0e,	// (0x00067284) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf033,	// (0x0006a8a9) popup_fep_vkb_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Large
