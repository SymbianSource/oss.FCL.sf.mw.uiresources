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

#include "aknlayoutscalable_elaf_pnp4_av_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0002d99b };

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
0x9389,	// (0x00036d24) Screen

0x9395,	// (0x00036d30) application_window_ParamLimits

0x9395,	// (0x00036d30) application_window

0x4321,	// (0x00031cbc) screen_g1

0x93f1,	// (0x00036d8c) area_bottom_pane_ParamLimits

0x93f1,	// (0x00036d8c) area_bottom_pane

0x94b1,	// (0x00036e4c) area_top_pane_ParamLimits

0x94b1,	// (0x00036e4c) area_top_pane

0x9545,	// (0x00036ee0) main_pane_ParamLimits

0x9545,	// (0x00036ee0) main_pane

0x432b,	// (0x00031cc6) misc_graphics

0xbb9b,	// (0x00039536) battery_pane_ParamLimits

0xbb9b,	// (0x00039536) battery_pane

0x60e8,	// (0x00033a83) bg_status_flat_pane_g8

0x60f0,	// (0x00033a8b) bg_status_flat_pane_g9

0x580f,	// (0x000331aa) context_pane_ParamLimits

0x580f,	// (0x000331aa) context_pane

0xbccf,	// (0x0003966a) navi_pane_ParamLimits

0xbccf,	// (0x0003966a) navi_pane

0xbd3c,	// (0x000396d7) signal_pane_ParamLimits

0xbd3c,	// (0x000396d7) signal_pane

0x0008,

0xf88f,	// (0x0003d22a) bg_status_flat_pane_g

0xbda1,	// (0x0003973c) status_pane_g1_ParamLimits

0xbda1,	// (0x0003973c) status_pane_g1

0x6451,	// (0x00033dec) status_pane_g2_ParamLimits

0x6451,	// (0x00033dec) status_pane_g2

0x5882,	// (0x0003321d) status_pane_g3_ParamLimits

0x5882,	// (0x0003321d) status_pane_g3

0x0004,

0xf7bd,	// (0x0003d158) status_pane_g_ParamLimits

0xf7bd,	// (0x0003d158) status_pane_g

0xbdb5,	// (0x00039750) title_pane_ParamLimits

0xbdb5,	// (0x00039750) title_pane

0xbdf2,	// (0x0003978d) uni_indicator_pane_ParamLimits

0xbdf2,	// (0x0003978d) uni_indicator_pane

0x5648,	// (0x00032fe3) bg_list_pane_ParamLimits

0x5648,	// (0x00032fe3) bg_list_pane

0xa47d,	// (0x00037e18) find_pane

0xb6b3,	// (0x0003904e) listscroll_app_pane_ParamLimits

0xb6b3,	// (0x0003904e) listscroll_app_pane

0x5668,	// (0x00033003) listscroll_form_pane

0xa485,	// (0x00037e20) listscroll_gen_pane_ParamLimits

0xa485,	// (0x00037e20) listscroll_gen_pane

0x5668,	// (0x00033003) listscroll_set_pane

0x9c34,	// (0x000375cf) main_idle_act_pane

0x541c,	// (0x00032db7) main_idle_trad_pane

0x541c,	// (0x00032db7) main_list_empty_pane

0x4b3e,	// (0x000324d9) main_midp_pane

0x5682,	// (0x0003301d) main_pane_g1_ParamLimits

0x5682,	// (0x0003301d) main_pane_g1

0xb6bf,	// (0x0003905a) popup_ai_message_window_ParamLimits

0xb6bf,	// (0x0003905a) popup_ai_message_window

0xb73d,	// (0x000390d8) popup_fep_china_uni_window_ParamLimits

0xb73d,	// (0x000390d8) popup_fep_china_uni_window

0x56b4,	// (0x0003304f) popup_fep_japan_candidate_window_ParamLimits

0x56b4,	// (0x0003304f) popup_fep_japan_candidate_window

0x56d2,	// (0x0003306d) popup_fep_japan_predictive_window_ParamLimits

0x56d2,	// (0x0003306d) popup_fep_japan_predictive_window

0xb797,	// (0x00039132) popup_find_window

0xb7a4,	// (0x0003913f) popup_grid_graphic_window_ParamLimits

0xb7a4,	// (0x0003913f) popup_grid_graphic_window

0x5702,	// (0x0003309d) popup_large_graphic_colour_window

0xb7ca,	// (0x00039165) popup_menu_window_ParamLimits

0xb7ca,	// (0x00039165) popup_menu_window

0xb984,	// (0x0003931f) popup_note_image_window

0xb970,	// (0x0003930b) popup_note_wait_window_ParamLimits

0xb970,	// (0x0003930b) popup_note_wait_window

0xb970,	// (0x0003930b) popup_note_window_ParamLimits

0xb970,	// (0x0003930b) popup_note_window

0xb9da,	// (0x00039375) popup_query_code_window_ParamLimits

0xb9da,	// (0x00039375) popup_query_code_window

0x5728,	// (0x000330c3) popup_query_data_code_window_ParamLimits

0x5728,	// (0x000330c3) popup_query_data_code_window

0xb9ee,	// (0x00039389) popup_query_data_window_ParamLimits

0xb9ee,	// (0x00039389) popup_query_data_window

0xba06,	// (0x000393a1) popup_query_sat_info_window_ParamLimits

0xba06,	// (0x000393a1) popup_query_sat_info_window

0xba3f,	// (0x000393da) popup_snote_single_graphic_window_ParamLimits

0xba3f,	// (0x000393da) popup_snote_single_graphic_window

0xba3f,	// (0x000393da) popup_snote_single_text_window_ParamLimits

0xba3f,	// (0x000393da) popup_snote_single_text_window

0x573f,	// (0x000330da) popup_sub_window_general

0x5785,	// (0x00033120) popup_window_general_ParamLimits

0x5785,	// (0x00033120) popup_window_general

0x579a,	// (0x00033135) power_save_pane

0xa339,	// (0x00037cd4) control_pane_g1_ParamLimits

0xa339,	// (0x00037cd4) control_pane_g1

0xa360,	// (0x00037cfb) control_pane_g2_ParamLimits

0xa360,	// (0x00037cfb) control_pane_g2

0x5622,	// (0x00032fbd) control_pane_g3_ParamLimits

0x5622,	// (0x00032fbd) control_pane_g3

0x0007,

0xf7a5,	// (0x0003d140) control_pane_g_ParamLimits

0xf7a5,	// (0x0003d140) control_pane_g

0xa3a4,	// (0x00037d3f) control_pane_t1_ParamLimits

0xa3a4,	// (0x00037d3f) control_pane_t1

0xa3f0,	// (0x00037d8b) control_pane_t2_ParamLimits

0xa3f0,	// (0x00037d8b) control_pane_t2

0x0002,

0xf7b6,	// (0x0003d151) control_pane_t_ParamLimits

0xf7b6,	// (0x0003d151) control_pane_t

0x5543,	// (0x00032ede) navi_navi_volume_pane_cp1

0x554c,	// (0x00032ee7) status_small_icon_pane

0x5554,	// (0x00032eef) status_small_pane_g1_ParamLimits

0x5554,	// (0x00032eef) status_small_pane_g1

0x5588,	// (0x00032f23) status_small_pane_g2_ParamLimits

0x5588,	// (0x00032f23) status_small_pane_g2

0x5594,	// (0x00032f2f) status_small_pane_g3_ParamLimits

0x5594,	// (0x00032f2f) status_small_pane_g3

0x55a0,	// (0x00032f3b) status_small_pane_g4_ParamLimits

0x55a0,	// (0x00032f3b) status_small_pane_g4

0x55ac,	// (0x00032f47) status_small_pane_g5_ParamLimits

0x55ac,	// (0x00032f47) status_small_pane_g5

0x55bb,	// (0x00032f56) status_small_pane_g6_ParamLimits

0x55bb,	// (0x00032f56) status_small_pane_g6

0x0007,

0xf794,	// (0x0003d12f) status_small_pane_g_ParamLimits

0xf794,	// (0x0003d12f) status_small_pane_g

0x55eb,	// (0x00032f86) status_small_pane_t1

0x560e,	// (0x00032fa9) status_small_wait_pane_ParamLimits

0x560e,	// (0x00032fa9) status_small_wait_pane

0x9f55,	// (0x000378f0) aid_levels_signal_ParamLimits

0x9f55,	// (0x000378f0) aid_levels_signal

0x9f67,	// (0x00037902) signal_pane_g1_ParamLimits

0x9f67,	// (0x00037902) signal_pane_g1

0x9f7c,	// (0x00037917) signal_pane_g2_ParamLimits

0x9f7c,	// (0x00037917) signal_pane_g2

0x0003,

0xf725,	// (0x0003d0c0) signal_pane_g_ParamLimits

0xf725,	// (0x0003d0c0) signal_pane_g

0x4f60,	// (0x000328fb) context_pane_g1

0x9776,	// (0x00037111) title_pane_g1

0x97a0,	// (0x0003713b) title_pane_t1

0x4341,	// (0x00031cdc) title_pane_t2

0x4367,	// (0x00031d02) title_pane_t3

0x0002,

0xf56f,	// (0x0003cf0a) title_pane_t

0xbe0a,	// (0x000397a5) aid_levels_battery_ParamLimits

0xbe0a,	// (0x000397a5) aid_levels_battery

0xbe1e,	// (0x000397b9) battery_pane_g1_ParamLimits

0xbe1e,	// (0x000397b9) battery_pane_g1

0xbe34,	// (0x000397cf) battery_pane_g2_ParamLimits

0xbe34,	// (0x000397cf) battery_pane_g2

0x0001,

0xf7c8,	// (0x0003d163) battery_pane_g_ParamLimits

0xf7c8,	// (0x0003d163) battery_pane_g

0xc06e,	// (0x00039a09) uni_indicator_pane_g1

0xc083,	// (0x00039a1e) uni_indicator_pane_g2

0x695d,	// (0x000342f8) uni_indicator_pane_g3

0x0005,

0xf937,	// (0x0003d2d2) uni_indicator_pane_g

0x528c,	// (0x00032c27) navi_icon_pane_ParamLimits

0x528c,	// (0x00032c27) navi_icon_pane

0x51d3,	// (0x00032b6e) navi_midp_pane

0x52a8,	// (0x00032c43) navi_navi_pane

0x52b2,	// (0x00032c4d) navi_text_pane_ParamLimits

0x52b2,	// (0x00032c4d) navi_text_pane

0x4321,	// (0x00031cbc) status_small_wait_pane_g1

0x46ad,	// (0x00032048) status_small_wait_pane_g2

0x0001,

0xf932,	// (0x0003d2cd) status_small_wait_pane_g

0x66a7,	// (0x00034042) navi_navi_icon_text_pane

0x66af,	// (0x0003404a) navi_navi_pane_g1_ParamLimits

0x66af,	// (0x0003404a) navi_navi_pane_g1

0x66c1,	// (0x0003405c) navi_navi_pane_g2_ParamLimits

0x66c1,	// (0x0003405c) navi_navi_pane_g2

0x0001,

0xf900,	// (0x0003d29b) navi_navi_pane_g_ParamLimits

0xf900,	// (0x0003d29b) navi_navi_pane_g

0x66d3,	// (0x0003406e) navi_navi_tabs_pane

0x66dc,	// (0x00034077) navi_navi_text_pane

0x66a7,	// (0x00034042) navi_navi_volume_pane

0x6683,	// (0x0003401e) navi_text_pane_t1

0x6677,	// (0x00034012) navi_icon_pane_g1

0x65d6,	// (0x00033f71) navi_navi_text_pane_t1

0xa720,	// (0x000380bb) navi_navi_volume_pane_g1

0xa728,	// (0x000380c3) volume_small_pane

0xbfb9,	// (0x00039954) navi_navi_icon_text_pane_g1

0xbfc1,	// (0x0003995c) navi_navi_icon_text_pane_t1

0x52a8,	// (0x00032c43) navi_tabs_2_long_pane

0x52a8,	// (0x00032c43) navi_tabs_2_pane

0x52a8,	// (0x00032c43) navi_tabs_3_long_pane

0x52a8,	// (0x00032c43) navi_tabs_3_pane

0x52a8,	// (0x00032c43) navi_tabs_4_pane

0xa700,	// (0x0003809b) tabs_2_active_pane_ParamLimits

0xa700,	// (0x0003809b) tabs_2_active_pane

0xa710,	// (0x000380ab) tabs_2_passive_pane_ParamLimits

0xa710,	// (0x000380ab) tabs_2_passive_pane

0xa6ce,	// (0x00038069) tabs_3_active_pane_ParamLimits

0xa6ce,	// (0x00038069) tabs_3_active_pane

0xa6de,	// (0x00038079) tabs_3_passive_pane_ParamLimits

0xa6de,	// (0x00038079) tabs_3_passive_pane

0xa6ef,	// (0x0003808a) tabs_3_passive_pane_cp_ParamLimits

0xa6ef,	// (0x0003808a) tabs_3_passive_pane_cp

0xa68a,	// (0x00038025) tabs_4_active_pane_ParamLimits

0xa68a,	// (0x00038025) tabs_4_active_pane

0xa69b,	// (0x00038036) tabs_4_passive_pane_ParamLimits

0xa69b,	// (0x00038036) tabs_4_passive_pane

0xa6ac,	// (0x00038047) tabs_4_passive_pane_cp_ParamLimits

0xa6ac,	// (0x00038047) tabs_4_passive_pane_cp

0xa6bd,	// (0x00038058) tabs_4_passive_pane_cp2_ParamLimits

0xa6bd,	// (0x00038058) tabs_4_passive_pane_cp2

0xa666,	// (0x00038001) tabs_2_long_active_pane_ParamLimits

0xa666,	// (0x00038001) tabs_2_long_active_pane

0xa678,	// (0x00038013) tabs_2_long_passive_pane_ParamLimits

0xa678,	// (0x00038013) tabs_2_long_passive_pane

0xa621,	// (0x00037fbc) tabs_3_long_active_pane_ParamLimits

0xa621,	// (0x00037fbc) tabs_3_long_active_pane

0xa63a,	// (0x00037fd5) tabs_3_long_passive_pane_ParamLimits

0xa63a,	// (0x00037fd5) tabs_3_long_passive_pane

0xa64d,	// (0x00037fe8) tabs_3_long_passive_pane_cp_ParamLimits

0xa64d,	// (0x00037fe8) tabs_3_long_passive_pane_cp

0xa5c7,	// (0x00037f62) volume_small_pane_g1

0xa5d0,	// (0x00037f6b) volume_small_pane_g2

0xa5d9,	// (0x00037f74) volume_small_pane_g3

0xa5e2,	// (0x00037f7d) volume_small_pane_g4

0xa5eb,	// (0x00037f86) volume_small_pane_g5

0xa5f4,	// (0x00037f8f) volume_small_pane_g6

0xa5fd,	// (0x00037f98) volume_small_pane_g7

0xa606,	// (0x00037fa1) volume_small_pane_g8

0xa60f,	// (0x00037faa) volume_small_pane_g9

0xa618,	// (0x00037fb3) volume_small_pane_g10

0x0009,

0xf8cc,	// (0x0003d267) volume_small_pane_g

0x4387,	// (0x00031d22) bg_active_tab_pane_cp2_ParamLimits

0x4387,	// (0x00031d22) bg_active_tab_pane_cp2

0x9808,	// (0x000371a3) tabs_3_active_pane_g1

0x9810,	// (0x000371ab) tabs_3_active_pane_t1

0x4387,	// (0x00031d22) bg_passive_tab_pane_cp2_ParamLimits

0x4387,	// (0x00031d22) bg_passive_tab_pane_cp2

0x9808,	// (0x000371a3) tabs_3_passive_pane_g1

0x9810,	// (0x000371ab) tabs_3_passive_pane_t1

0x4387,	// (0x00031d22) bg_active_tab_pane_cp3_ParamLimits

0x4387,	// (0x00031d22) bg_active_tab_pane_cp3

0x9822,	// (0x000371bd) tabs_4_active_pane_g1

0x982a,	// (0x000371c5) tabs_4_active_pane_t1

0x4387,	// (0x00031d22) bg_passive_tab_pane_cp3_ParamLimits

0x4387,	// (0x00031d22) bg_passive_tab_pane_cp3

0x9822,	// (0x000371bd) tabs_4_1_passive_pane_g1

0x982a,	// (0x000371c5) tabs_4_1_passive_pane_t1

0x4b3e,	// (0x000324d9) list_highlight_pane_cp2

0xc0fb,	// (0x00039a96) list_set_pane_ParamLimits

0xc0fb,	// (0x00039a96) list_set_pane

0xc19d,	// (0x00039b38) main_pane_set_t1_ParamLimits

0xc19d,	// (0x00039b38) main_pane_set_t1

0xc1bd,	// (0x00039b58) main_pane_set_t2_ParamLimits

0xc1bd,	// (0x00039b58) main_pane_set_t2

0xc1d1,	// (0x00039b6c) main_pane_set_t3_ParamLimits

0xc1d1,	// (0x00039b6c) main_pane_set_t3

0xc1e3,	// (0x00039b7e) main_pane_set_t4_ParamLimits

0xc1e3,	// (0x00039b7e) main_pane_set_t4

0x0003,

0xf99c,	// (0x0003d337) main_pane_set_t_ParamLimits

0xf99c,	// (0x0003d337) main_pane_set_t

0xc1f5,	// (0x00039b90) setting_code_pane

0xc1ff,	// (0x00039b9a) setting_slider_graphic_pane

0xc1ff,	// (0x00039b9a) setting_slider_pane

0xc1ff,	// (0x00039b9a) setting_text_pane

0xc1ff,	// (0x00039b9a) setting_volume_pane

0x983c,	// (0x000371d7) volume_set_pane

0x4387,	// (0x00031d22) bg_set_opt_pane_cp

0x9844,	// (0x000371df) setting_slider_pane_t1

0x985d,	// (0x000371f8) setting_slider_pane_t2

0x9876,	// (0x00037211) setting_slider_pane_t3

0x0002,

0xf576,	// (0x0003cf11) setting_slider_pane_t

0x988d,	// (0x00037228) slider_set_pane

0x432b,	// (0x00031cc6) bg_set_opt_pane_cp2

0x4395,	// (0x00031d30) setting_slider_graphic_pane_g1

0x98a3,	// (0x0003723e) setting_slider_graphic_pane_t1

0x98b2,	// (0x0003724d) setting_slider_graphic_pane_t2

0x0001,

0xf57d,	// (0x0003cf18) setting_slider_graphic_pane_t

0x98c1,	// (0x0003725c) slider_set_pane_cp

0x432b,	// (0x00031cc6) input_focus_pane_cp1

0x6b3a,	// (0x000344d5) list_set_text_pane

0x4321,	// (0x00031cbc) setting_text_pane_g1

0x432b,	// (0x00031cc6) input_focus_pane_cp2

0x4321,	// (0x00031cbc) setting_code_pane_g1

0x439e,	// (0x00031d39) setting_code_pane_t1

0x851e,	// (0x00035eb9) set_text_pane_t1_ParamLimits

0x851e,	// (0x00035eb9) set_text_pane_t1

0x4a4e,	// (0x000323e9) set_opt_bg_pane_g1

0x4a56,	// (0x000323f1) set_opt_bg_pane_g2

0x6b1a,	// (0x000344b5) set_opt_bg_pane_g3

0x4a66,	// (0x00032401) set_opt_bg_pane_g4

0x4a6e,	// (0x00032409) set_opt_bg_pane_g5

0x4a76,	// (0x00032411) set_opt_bg_pane_g6

0x6b22,	// (0x000344bd) set_opt_bg_pane_g7

0x6b2a,	// (0x000344c5) set_opt_bg_pane_g8

0x6b32,	// (0x000344cd) set_opt_bg_pane_g9

0x0008,

0xf989,	// (0x0003d324) set_opt_bg_pane_g

0x6b0d,	// (0x000344a8) slider_set_pane_g1

0xa795,	// (0x00038130) slider_set_pane_g2

0x0006,

0xf97a,	// (0x0003d315) slider_set_pane_g

0xa731,	// (0x000380cc) volume_set_pane_g1

0xa739,	// (0x000380d4) volume_set_pane_g2

0xa741,	// (0x000380dc) volume_set_pane_g3

0xa749,	// (0x000380e4) volume_set_pane_g4

0xa751,	// (0x000380ec) volume_set_pane_g5

0xa759,	// (0x000380f4) volume_set_pane_g6

0xa761,	// (0x000380fc) volume_set_pane_g7

0xa769,	// (0x00038104) volume_set_pane_g8

0xa771,	// (0x0003810c) volume_set_pane_g9

0xa779,	// (0x00038114) volume_set_pane_g10

0x0009,

0xf952,	// (0x0003d2ed) volume_set_pane_g

0x98c9,	// (0x00037264) indicator_pane_ParamLimits

0x98c9,	// (0x00037264) indicator_pane

0x98d5,	// (0x00037270) main_idle_pane_g2_ParamLimits

0x98d5,	// (0x00037270) main_idle_pane_g2

0x98fd,	// (0x00037298) main_pane_idle_g1_ParamLimits

0x98fd,	// (0x00037298) main_pane_idle_g1

0x43ac,	// (0x00031d47) popup_clock_digital_analogue_window_ParamLimits

0x43ac,	// (0x00031d47) popup_clock_digital_analogue_window

0x990a,	// (0x000372a5) soft_indicator_pane_ParamLimits

0x990a,	// (0x000372a5) soft_indicator_pane

0x9916,	// (0x000372b1) wallpaper_pane_ParamLimits

0x9916,	// (0x000372b1) wallpaper_pane

0x4321,	// (0x00031cbc) wallpaper_pane_g1

0x9922,	// (0x000372bd) indicator_pane_g1_ParamLimits

0x9922,	// (0x000372bd) indicator_pane_g1

0x6cb0,	// (0x0003464b) navi_navi_icon_text_pane_srt_g1

0x43da,	// (0x00031d75) soft_indicator_pane_t1

0x43f4,	// (0x00031d8f) aid_ps_area_pane

0x992e,	// (0x000372c9) aid_ps_clock_pane

0x4405,	// (0x00031da0) aid_ps_indicator_pane

0x4411,	// (0x00031dac) indicator_ps_pane_ParamLimits

0x4411,	// (0x00031dac) indicator_ps_pane

0x4420,	// (0x00031dbb) power_save_pane_g1_ParamLimits

0x4420,	// (0x00031dbb) power_save_pane_g1

0x442c,	// (0x00031dc7) power_save_pane_g2_ParamLimits

0x442c,	// (0x00031dc7) power_save_pane_g2

0x93a5,	// (0x00036d40) aid_navinavi_width_pane

0x43f4,	// (0x00031d8f) aid_ps_area_pane_ParamLimits

0x0001,

0xf582,	// (0x0003cf1d) power_save_pane_g_ParamLimits

0xf582,	// (0x0003cf1d) power_save_pane_g

0x443a,	// (0x00031dd5) power_save_pane_t1_ParamLimits

0x443a,	// (0x00031dd5) power_save_pane_t1

0x992e,	// (0x000372c9) aid_ps_clock_pane_ParamLimits

0x4405,	// (0x00031da0) aid_ps_indicator_pane_ParamLimits

0x444c,	// (0x00031de7) power_save_pane_t4_ParamLimits

0x444c,	// (0x00031de7) power_save_pane_t4

0x0001,

0xf587,	// (0x0003cf22) power_save_pane_t_ParamLimits

0xf587,	// (0x0003cf22) power_save_pane_t

0x4476,	// (0x00031e11) power_save_t3_ParamLimits

0x4476,	// (0x00031e11) power_save_t3

0x4461,	// (0x00031dfc) power_save_t2_ParamLimits

0x4461,	// (0x00031dfc) power_save_t2

0x448b,	// (0x00031e26) indicator_ps_pane_g1

0x993c,	// (0x000372d7) ai_gene_pane_ParamLimits

0x993c,	// (0x000372d7) ai_gene_pane

0x9948,	// (0x000372e3) ai_links_pane_ParamLimits

0x9948,	// (0x000372e3) ai_links_pane

0x9954,	// (0x000372ef) indicator_pane_cp1_ParamLimits

0x9954,	// (0x000372ef) indicator_pane_cp1

0x9960,	// (0x000372fb) main_pane_idle_g1_cp_ParamLimits

0x9960,	// (0x000372fb) main_pane_idle_g1_cp

0x4494,	// (0x00031e2f) popup_ai_links_title_window

0x996c,	// (0x00037307) soft_indicator_pane_cp1_ParamLimits

0x996c,	// (0x00037307) soft_indicator_pane_cp1

0x694b,	// (0x000342e6) ai_links_pane_g1

0x6954,	// (0x000342ef) grid_ai_links_pane

0xc063,	// (0x000399fe) ai_gene_pane_1

0x6939,	// (0x000342d4) ai_gene_pane_2

0x6942,	// (0x000342dd) list_highlight_pane_cp4

0xc047,	// (0x000399e2) cell_ai_link_pane_ParamLimits

0xc047,	// (0x000399e2) cell_ai_link_pane

0x6931,	// (0x000342cc) cell_ai_link_pane_g1

0x46ad,	// (0x00032048) cell_ai_link_pane_g2

0x0001,

0xf92d,	// (0x0003d2c8) cell_ai_link_pane_g

0x432b,	// (0x00031cc6) grid_highlight_cp2

0x432b,	// (0x00031cc6) bg_popup_sub_pane_cp1

0x44ab,	// (0x00031e46) popup_ai_links_title_window_t1

0x687f,	// (0x0003421a) ai_gene_pane_1_g1_ParamLimits

0x687f,	// (0x0003421a) ai_gene_pane_1_g1

0x688b,	// (0x00034226) ai_gene_pane_1_g2_ParamLimits

0x688b,	// (0x00034226) ai_gene_pane_1_g2

0x0001,

0xf923,	// (0x0003d2be) ai_gene_pane_1_g_ParamLimits

0xf923,	// (0x0003d2be) ai_gene_pane_1_g

0x6898,	// (0x00034233) ai_gene_pane_1_t1_ParamLimits

0x6898,	// (0x00034233) ai_gene_pane_1_t1

0x68cc,	// (0x00034267) grid_ai_soft_ind_pane

0x686a,	// (0x00034205) ai_gene_pane_2_t1_ParamLimits

0x686a,	// (0x00034205) ai_gene_pane_2_t1

0x9978,	// (0x00037313) main_pane_empty_t1_ParamLimits

0x9978,	// (0x00037313) main_pane_empty_t1

0x9990,	// (0x0003732b) main_pane_empty_t2_ParamLimits

0x9990,	// (0x0003732b) main_pane_empty_t2

0x99a5,	// (0x00037340) main_pane_empty_t3_ParamLimits

0x99a5,	// (0x00037340) main_pane_empty_t3

0x99b7,	// (0x00037352) main_pane_empty_t4_ParamLimits

0x99b7,	// (0x00037352) main_pane_empty_t4

0x99c9,	// (0x00037364) main_pane_empty_t5_ParamLimits

0x99c9,	// (0x00037364) main_pane_empty_t5

0x0004,

0xf58c,	// (0x0003cf27) main_pane_empty_t_ParamLimits

0xf58c,	// (0x0003cf27) main_pane_empty_t

0x4a9f,	// (0x0003243a) bg_popup_window_pane_ParamLimits

0x4a9f,	// (0x0003243a) bg_popup_window_pane

0x65e4,	// (0x00033f7f) find_popup_pane_cp2_ParamLimits

0x65e4,	// (0x00033f7f) find_popup_pane_cp2

0x65f0,	// (0x00033f8b) heading_pane_ParamLimits

0x65f0,	// (0x00033f8b) heading_pane

0x432b,	// (0x00031cc6) bg_popup_sub_pane

0xbfdb,	// (0x00039976) bg_popup_window_pane_g1_ParamLimits

0xbfdb,	// (0x00039976) bg_popup_window_pane_g1

0xbfe7,	// (0x00039982) bg_popup_window_pane_g2_ParamLimits

0xbfe7,	// (0x00039982) bg_popup_window_pane_g2

0xbff3,	// (0x0003998e) bg_popup_window_pane_g3_ParamLimits

0xbff3,	// (0x0003998e) bg_popup_window_pane_g3

0xbfff,	// (0x0003999a) bg_popup_window_pane_g4_ParamLimits

0xbfff,	// (0x0003999a) bg_popup_window_pane_g4

0xc00b,	// (0x000399a6) bg_popup_window_pane_g5_ParamLimits

0xc00b,	// (0x000399a6) bg_popup_window_pane_g5

0xc017,	// (0x000399b2) bg_popup_window_pane_g6_ParamLimits

0xc017,	// (0x000399b2) bg_popup_window_pane_g6

0xc023,	// (0x000399be) bg_popup_window_pane_g7_ParamLimits

0xc023,	// (0x000399be) bg_popup_window_pane_g7

0xc02f,	// (0x000399ca) bg_popup_window_pane_g8_ParamLimits

0xc02f,	// (0x000399ca) bg_popup_window_pane_g8

0xc03b,	// (0x000399d6) bg_popup_window_pane_g9_ParamLimits

0xc03b,	// (0x000399d6) bg_popup_window_pane_g9

0x65ca,	// (0x00033f65) bg_popup_window_pane_g10_ParamLimits

0x65ca,	// (0x00033f65) bg_popup_window_pane_g10

0x0009,

0xf8eb,	// (0x0003d286) bg_popup_window_pane_g_ParamLimits

0xf8eb,	// (0x0003d286) bg_popup_window_pane_g

0x6581,	// (0x00033f1c) bg_popup_heading_pane_ParamLimits

0x6581,	// (0x00033f1c) bg_popup_heading_pane

0xa8d3,	// (0x0003826e) tabs_4_passive_pane_cp_srt_ParamLimits

0xa8d3,	// (0x0003826e) tabs_4_passive_pane_cp_srt

0xa8e5,	// (0x00038280) tabs_4_passive_pane_srt_ParamLimits

0x6595,	// (0x00033f30) heading_pane_g2

0xa8e5,	// (0x00038280) tabs_4_passive_pane_srt

0x4b3e,	// (0x000324d9) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4b3e,	// (0x000324d9) bg_passive_tab_pane_cp3_srt

0x659d,	// (0x00033f38) heading_pane_t1_ParamLimits

0x659d,	// (0x00033f38) heading_pane_t1

0x65b4,	// (0x00033f4f) heading_pane_t2_ParamLimits

0x65b4,	// (0x00033f4f) heading_pane_t2

0x0001,

0xf8e6,	// (0x0003d281) heading_pane_t_ParamLimits

0xf8e6,	// (0x0003d281) heading_pane_t

0x60b0,	// (0x00033a4b) bg_popup_heading_pane_g1

0x6141,	// (0x00033adc) bg_popup_heading_pane_g2

0x614b,	// (0x00033ae6) bg_popup_heading_pane_g3

0x6155,	// (0x00033af0) bg_popup_heading_pane_g4

0x615f,	// (0x00033afa) bg_popup_heading_pane_g5

0x6169,	// (0x00033b04) bg_popup_heading_pane_g6

0x6171,	// (0x00033b0c) bg_popup_heading_pane_g7

0x6179,	// (0x00033b14) bg_popup_heading_pane_g8

0x6183,	// (0x00033b1e) bg_popup_heading_pane_g9

0x0008,

0xf8a2,	// (0x0003d23d) bg_popup_heading_pane_g

0x5976,	// (0x00033311) bg_popup_sub_pane_g1

0x5986,	// (0x00033321) bg_popup_sub_pane_g2

0x597e,	// (0x00033319) bg_popup_sub_pane_g3

0x5996,	// (0x00033331) bg_popup_sub_pane_g4

0x598e,	// (0x00033329) bg_popup_sub_pane_g5

0x599e,	// (0x00033339) bg_popup_sub_pane_g6

0x59a6,	// (0x00033341) bg_popup_sub_pane_g7

0x59b6,	// (0x00033351) bg_popup_sub_pane_g8

0x59ae,	// (0x00033349) bg_popup_sub_pane_g9

0x0008,

0xf87c,	// (0x0003d217) bg_popup_sub_pane_g

0x4379,	// (0x00031d14) bg_popup_window_pane_cp5_ParamLimits

0x4379,	// (0x00031d14) bg_popup_window_pane_cp5

0x44c8,	// (0x00031e63) popup_note_window_g1_ParamLimits

0x44c8,	// (0x00031e63) popup_note_window_g1

0x44d4,	// (0x00031e6f) popup_note_window_t1_ParamLimits

0x44d4,	// (0x00031e6f) popup_note_window_t1

0x44e6,	// (0x00031e81) popup_note_window_t2_ParamLimits

0x44e6,	// (0x00031e81) popup_note_window_t2

0x4563,	// (0x00031efe) popup_note_window_t3_ParamLimits

0x4563,	// (0x00031efe) popup_note_window_t3

0x4575,	// (0x00031f10) popup_note_window_t4_ParamLimits

0x4575,	// (0x00031f10) popup_note_window_t4

0x459d,	// (0x00031f38) popup_note_window_t5_ParamLimits

0x459d,	// (0x00031f38) popup_note_window_t5

0x0004,

0xf597,	// (0x0003cf32) popup_note_window_t_ParamLimits

0xf597,	// (0x0003cf32) popup_note_window_t

0x45c1,	// (0x00031f5c) bg_popup_window_pane_cp6_ParamLimits

0x45c1,	// (0x00031f5c) bg_popup_window_pane_cp6

0x6024,	// (0x000339bf) popup_note_image_window_g1_ParamLimits

0x6024,	// (0x000339bf) popup_note_image_window_g1

0x6030,	// (0x000339cb) popup_note_image_window_g2_ParamLimits

0x6030,	// (0x000339cb) popup_note_image_window_g2

0x0001,

0xf870,	// (0x0003d20b) popup_note_image_window_g_ParamLimits

0xf870,	// (0x0003d20b) popup_note_image_window_g

0x6049,	// (0x000339e4) popup_note_image_window_t1_ParamLimits

0x6049,	// (0x000339e4) popup_note_image_window_t1

0x6062,	// (0x000339fd) popup_note_image_window_t2_ParamLimits

0x6062,	// (0x000339fd) popup_note_image_window_t2

0x607b,	// (0x00033a16) popup_note_image_window_t3_ParamLimits

0x607b,	// (0x00033a16) popup_note_image_window_t3

0x0002,

0xf875,	// (0x0003d210) popup_note_image_window_t_ParamLimits

0xf875,	// (0x0003d210) popup_note_image_window_t

0x5f01,	// (0x0003389c) bg_popup_window_pane_cp7_ParamLimits

0x5f01,	// (0x0003389c) bg_popup_window_pane_cp7

0x5f31,	// (0x000338cc) popup_note_wait_window_g1_ParamLimits

0x5f31,	// (0x000338cc) popup_note_wait_window_g1

0x5f3d,	// (0x000338d8) popup_note_wait_window_g2_ParamLimits

0x5f3d,	// (0x000338d8) popup_note_wait_window_g2

0x0002,

0xf85e,	// (0x0003d1f9) popup_note_wait_window_g_ParamLimits

0xf85e,	// (0x0003d1f9) popup_note_wait_window_g

0x5f55,	// (0x000338f0) popup_note_wait_window_t1_ParamLimits

0x5f55,	// (0x000338f0) popup_note_wait_window_t1

0x5f7c,	// (0x00033917) popup_note_wait_window_t2_ParamLimits

0x5f7c,	// (0x00033917) popup_note_wait_window_t2

0x5f99,	// (0x00033934) popup_note_wait_window_t3_ParamLimits

0x5f99,	// (0x00033934) popup_note_wait_window_t3

0x5fac,	// (0x00033947) popup_note_wait_window_t4_ParamLimits

0x5fac,	// (0x00033947) popup_note_wait_window_t4

0x0004,

0xf865,	// (0x0003d200) popup_note_wait_window_t_ParamLimits

0xf865,	// (0x0003d200) popup_note_wait_window_t

0x5fd1,	// (0x0003396c) wait_bar_pane_ParamLimits

0x5fd1,	// (0x0003396c) wait_bar_pane

0x432b,	// (0x00031cc6) wait_anim_pane

0x432b,	// (0x00031cc6) wait_border_pane

0x4321,	// (0x00031cbc) wait_anim_pane_g1

0x4321,	// (0x00031cbc) wait_anim_pane_g2

0x0001,

0xf720,	// (0x0003d0bb) wait_anim_pane_g

0x5ea5,	// (0x00033840) wait_border_pane_g1

0x5eb0,	// (0x0003384b) wait_border_pane_g2

0x5eb9,	// (0x00033854) wait_border_pane_g3

0x0002,

0xf857,	// (0x0003d1f2) wait_border_pane_g

0x5d15,	// (0x000336b0) bg_popup_window_pane_cp16_ParamLimits

0x5d15,	// (0x000336b0) bg_popup_window_pane_cp16

0x5e15,	// (0x000337b0) indicator_popup_pane_cp4_ParamLimits

0x5e15,	// (0x000337b0) indicator_popup_pane_cp4

0x5e29,	// (0x000337c4) popup_query_data_window_t1_ParamLimits

0x5e29,	// (0x000337c4) popup_query_data_window_t1

0x5e3b,	// (0x000337d6) popup_query_data_window_t2_ParamLimits

0x5e3b,	// (0x000337d6) popup_query_data_window_t2

0x5e54,	// (0x000337ef) popup_query_data_window_t3_ParamLimits

0x5e54,	// (0x000337ef) popup_query_data_window_t3

0x0002,

0xf850,	// (0x0003d1eb) popup_query_data_window_t_ParamLimits

0xf850,	// (0x0003d1eb) popup_query_data_window_t

0x5e6e,	// (0x00033809) query_popup_data_pane_ParamLimits

0x5e6e,	// (0x00033809) query_popup_data_pane

0x5e82,	// (0x0003381d) query_popup_data_pane_cp1_ParamLimits

0x5e82,	// (0x0003381d) query_popup_data_pane_cp1

0x5d15,	// (0x000336b0) bg_popup_window_pane_cp10_ParamLimits

0x5d15,	// (0x000336b0) bg_popup_window_pane_cp10

0x5d47,	// (0x000336e2) indicator_popup_pane_ParamLimits

0x5d47,	// (0x000336e2) indicator_popup_pane

0x5d69,	// (0x00033704) popup_query_code_window_t1_ParamLimits

0x5d69,	// (0x00033704) popup_query_code_window_t1

0x5d83,	// (0x0003371e) popup_query_code_window_t2_ParamLimits

0x5d83,	// (0x0003371e) popup_query_code_window_t2

0x5dcc,	// (0x00033767) popup_query_code_window_t3_ParamLimits

0x5dcc,	// (0x00033767) popup_query_code_window_t3

0x0002,

0xf849,	// (0x0003d1e4) popup_query_code_window_t_ParamLimits

0xf849,	// (0x0003d1e4) popup_query_code_window_t

0x5dfb,	// (0x00033796) query_popup_pane_ParamLimits

0x5dfb,	// (0x00033796) query_popup_pane

0x45c1,	// (0x00031f5c) bg_popup_window_pane_cp15_ParamLimits

0x45c1,	// (0x00031f5c) bg_popup_window_pane_cp15

0x45df,	// (0x00031f7a) indicator_popup_pane_cp1_ParamLimits

0x45df,	// (0x00031f7a) indicator_popup_pane_cp1

0x45f2,	// (0x00031f8d) indicator_popup_pane_cp2_ParamLimits

0x45f2,	// (0x00031f8d) indicator_popup_pane_cp2

0x4605,	// (0x00031fa0) popup_query_data_code_window_g1_ParamLimits

0x4605,	// (0x00031fa0) popup_query_data_code_window_g1

0x4618,	// (0x00031fb3) popup_query_data_code_window_t1_ParamLimits

0x4618,	// (0x00031fb3) popup_query_data_code_window_t1

0x462a,	// (0x00031fc5) popup_query_data_code_window_t2_ParamLimits

0x462a,	// (0x00031fc5) popup_query_data_code_window_t2

0x463c,	// (0x00031fd7) popup_query_data_code_window_t3_ParamLimits

0x463c,	// (0x00031fd7) popup_query_data_code_window_t3

0x4652,	// (0x00031fed) popup_query_data_code_window_t4_ParamLimits

0x4652,	// (0x00031fed) popup_query_data_code_window_t4

0x0003,

0xf5a2,	// (0x0003cf3d) popup_query_data_code_window_t_ParamLimits

0xf5a2,	// (0x0003cf3d) popup_query_data_code_window_t

0x5248,	// (0x00032be3) list_single_midp_graphic_pane_g3

0x466a,	// (0x00032005) query_popup_data_pane_cp2_ParamLimits

0x467d,	// (0x00032018) query_popup_pane_cp2_ParamLimits

0x467d,	// (0x00032018) query_popup_pane_cp2

0x432b,	// (0x00031cc6) bg_popup_window_pane_cp11

0x5d0d,	// (0x000336a8) heading_pane_cp5

0x470b,	// (0x000320a6) listscroll_popup_info_pane

0x432b,	// (0x00031cc6) input_focus_pane_cp3

0x4690,	// (0x0003202b) query_popup_pane_t1

0x469e,	// (0x00032039) list_popup_info_pane_ParamLimits

0x469e,	// (0x00032039) list_popup_info_pane

0x46ad,	// (0x00032048) listscroll_popup_info_pane_g1

0x46b5,	// (0x00032050) scroll_pane_cp7

0x46bf,	// (0x0003205a) popup_info_list_pane_t1_ParamLimits

0x46bf,	// (0x0003205a) popup_info_list_pane_t1

0x46d9,	// (0x00032074) popup_info_list_pane_t2_ParamLimits

0x46d9,	// (0x00032074) popup_info_list_pane_t2

0x0001,

0xf5ab,	// (0x0003cf46) popup_info_list_pane_t_ParamLimits

0xf5ab,	// (0x0003cf46) popup_info_list_pane_t

0x432b,	// (0x00031cc6) bg_popup_window_pane_cp12

0x6cca,	// (0x00034665) find_popup_pane

0x4387,	// (0x00031d22) bg_popup_window_pane_cp3

0x46f3,	// (0x0003208e) heading_pane_cp3

0x46ff,	// (0x0003209a) listscroll_popup_graphic_pane

0x432b,	// (0x00031cc6) bg_popup_window_pane_cp4

0x9a2d,	// (0x000373c8) heading_pane_cp4

0x470b,	// (0x000320a6) listscroll_popup_colour_pane

0x9a37,	// (0x000373d2) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9a37,	// (0x000373d2) cell_large_graphic_colour_none_popup_pane

0x9a4b,	// (0x000373e6) grid_large_graphic_colour_popup_pane_ParamLimits

0x9a4b,	// (0x000373e6) grid_large_graphic_colour_popup_pane

0x9a6f,	// (0x0003740a) listscroll_popup_colour_pane_g1_ParamLimits

0x9a6f,	// (0x0003740a) listscroll_popup_colour_pane_g1

0x9a86,	// (0x00037421) listscroll_popup_colour_pane_g2_ParamLimits

0x9a86,	// (0x00037421) listscroll_popup_colour_pane_g2

0x9a9d,	// (0x00037438) listscroll_popup_colour_pane_g3_ParamLimits

0x9a9d,	// (0x00037438) listscroll_popup_colour_pane_g3

0x9aad,	// (0x00037448) listscroll_popup_colour_pane_g4_ParamLimits

0x9aad,	// (0x00037448) listscroll_popup_colour_pane_g4

0x0003,

0xf5b0,	// (0x0003cf4b) listscroll_popup_colour_pane_g_ParamLimits

0xf5b0,	// (0x0003cf4b) listscroll_popup_colour_pane_g

0x4713,	// (0x000320ae) scroll_pane_cp6_ParamLimits

0x4713,	// (0x000320ae) scroll_pane_cp6

0x9abc,	// (0x00037457) cell_large_graphic_colour_popup_pane_ParamLimits

0x9abc,	// (0x00037457) cell_large_graphic_colour_popup_pane

0x4725,	// (0x000320c0) cell_large_graphic_colour_none_popup_pane_t1

0x432b,	// (0x00031cc6) grid_highlight_pane_cp5

0x4734,	// (0x000320cf) cell_large_graphic_colour_popup_pane_g1

0x473c,	// (0x000320d7) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5b9,	// (0x0003cf54) cell_large_graphic_colour_popup_pane_g

0x4744,	// (0x000320df) cell_large_graphic_colour_popup_pane_g2_copy1

0x474d,	// (0x000320e8) grid_highlight_pane_cp4

0x4755,	// (0x000320f0) bg_popup_window_pane_cp8_ParamLimits

0x4755,	// (0x000320f0) bg_popup_window_pane_cp8

0x4770,	// (0x0003210b) popup_snote_single_text_window_g1_ParamLimits

0x4770,	// (0x0003210b) popup_snote_single_text_window_g1

0x4782,	// (0x0003211d) popup_snote_single_text_window_t1_ParamLimits

0x4782,	// (0x0003211d) popup_snote_single_text_window_t1

0x4795,	// (0x00032130) popup_snote_single_text_window_t2_ParamLimits

0x4795,	// (0x00032130) popup_snote_single_text_window_t2

0x47a8,	// (0x00032143) popup_snote_single_text_window_t3_ParamLimits

0x47a8,	// (0x00032143) popup_snote_single_text_window_t3

0x47e1,	// (0x0003217c) popup_snote_single_text_window_t4_ParamLimits

0x47e1,	// (0x0003217c) popup_snote_single_text_window_t4

0x4815,	// (0x000321b0) popup_snote_single_text_window_t5_ParamLimits

0x4815,	// (0x000321b0) popup_snote_single_text_window_t5

0x0004,

0xf5be,	// (0x0003cf59) popup_snote_single_text_window_t_ParamLimits

0xf5be,	// (0x0003cf59) popup_snote_single_text_window_t

0x4844,	// (0x000321df) bg_popup_window_pane_cp9_ParamLimits

0x4844,	// (0x000321df) bg_popup_window_pane_cp9

0x4770,	// (0x0003210b) popup_snote_single_graphic_window_g1_ParamLimits

0x4770,	// (0x0003210b) popup_snote_single_graphic_window_g1

0x4852,	// (0x000321ed) popup_snote_single_graphic_window_g2_ParamLimits

0x4852,	// (0x000321ed) popup_snote_single_graphic_window_g2

0x0001,

0xf5c9,	// (0x0003cf64) popup_snote_single_graphic_window_g_ParamLimits

0xf5c9,	// (0x0003cf64) popup_snote_single_graphic_window_g

0x485e,	// (0x000321f9) popup_snote_single_graphic_window_t1_ParamLimits

0x485e,	// (0x000321f9) popup_snote_single_graphic_window_t1

0x4871,	// (0x0003220c) popup_snote_single_graphic_window_t2_ParamLimits

0x4871,	// (0x0003220c) popup_snote_single_graphic_window_t2

0x4884,	// (0x0003221f) popup_snote_single_graphic_window_t3_ParamLimits

0x4884,	// (0x0003221f) popup_snote_single_graphic_window_t3

0x48bd,	// (0x00032258) popup_snote_single_graphic_window_t4_ParamLimits

0x48bd,	// (0x00032258) popup_snote_single_graphic_window_t4

0x48f1,	// (0x0003228c) popup_snote_single_graphic_window_t5_ParamLimits

0x48f1,	// (0x0003228c) popup_snote_single_graphic_window_t5

0x0004,

0xf5ce,	// (0x0003cf69) popup_snote_single_graphic_window_t_ParamLimits

0xf5ce,	// (0x0003cf69) popup_snote_single_graphic_window_t

0x6c4e,	// (0x000345e9) grid_graphic_popup_pane_ParamLimits

0x6c4e,	// (0x000345e9) grid_graphic_popup_pane

0x6c7a,	// (0x00034615) listscroll_popup_graphic_pane_g1_ParamLimits

0x6c7a,	// (0x00034615) listscroll_popup_graphic_pane_g1

0xc2bc,	// (0x00039c57) listscroll_popup_graphic_pane_g2_ParamLimits

0xc2bc,	// (0x00039c57) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c6,	// (0x0003d361) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c6,	// (0x0003d361) listscroll_popup_graphic_pane_g

0x6b73,	// (0x0003450e) scroll_pane_cp5

0xc27d,	// (0x00039c18) cell_graphic_popup_pane_ParamLimits

0xc27d,	// (0x00039c18) cell_graphic_popup_pane

0x6c19,	// (0x000345b4) cell_graphic_popup_pane_g1

0x6c21,	// (0x000345bc) cell_graphic_popup_pane_g2

0x4744,	// (0x000320df) cell_graphic_popup_pane_g3

0x0002,

0xf9bf,	// (0x0003d35a) cell_graphic_popup_pane_g

0x6c2a,	// (0x000345c5) cell_graphic_popup_pane_t2

0x474d,	// (0x000320e8) grid_highlight_pane_cp3

0x4932,	// (0x000322cd) list_gen_pane_ParamLimits

0x4932,	// (0x000322cd) list_gen_pane

0x495a,	// (0x000322f5) scroll_pane

0xc230,	// (0x00039bcb) bg_list_pane_g1_ParamLimits

0xc230,	// (0x00039bcb) bg_list_pane_g1

0x6bc8,	// (0x00034563) bg_list_pane_g2_ParamLimits

0x6bc8,	// (0x00034563) bg_list_pane_g2

0x6bdb,	// (0x00034576) bg_list_pane_g3_ParamLimits

0x6bdb,	// (0x00034576) bg_list_pane_g3

0x6bed,	// (0x00034588) bg_list_pane_g4_ParamLimits

0x6bed,	// (0x00034588) bg_list_pane_g4

0xc24b,	// (0x00039be6) bg_list_pane_g5_ParamLimits

0xc24b,	// (0x00039be6) bg_list_pane_g5

0x0004,

0xf9b4,	// (0x0003d34f) bg_list_pane_g_ParamLimits

0xf9b4,	// (0x0003d34f) bg_list_pane_g

0xa7f9,	// (0x00038194) list_double2_graphic_large_graphic_pane_ParamLimits

0xa7f9,	// (0x00038194) list_double2_graphic_large_graphic_pane

0xa7f9,	// (0x00038194) list_double2_graphic_pane_ParamLimits

0xa7f9,	// (0x00038194) list_double2_graphic_pane

0xa7f9,	// (0x00038194) list_double2_large_graphic_pane_ParamLimits

0xa7f9,	// (0x00038194) list_double2_large_graphic_pane

0xa7f9,	// (0x00038194) list_double2_pane_ParamLimits

0xa7f9,	// (0x00038194) list_double2_pane

0xa7f9,	// (0x00038194) list_double_graphic_heading_pane_ParamLimits

0xa7f9,	// (0x00038194) list_double_graphic_heading_pane

0xa7f9,	// (0x00038194) list_double_graphic_pane_ParamLimits

0xa7f9,	// (0x00038194) list_double_graphic_pane

0xa7f9,	// (0x00038194) list_double_heading_pane_ParamLimits

0xa7f9,	// (0x00038194) list_double_heading_pane

0xa7f9,	// (0x00038194) list_double_large_graphic_pane_ParamLimits

0xa7f9,	// (0x00038194) list_double_large_graphic_pane

0xa7f9,	// (0x00038194) list_double_number_pane_ParamLimits

0xa7f9,	// (0x00038194) list_double_number_pane

0xa7f9,	// (0x00038194) list_double_pane_ParamLimits

0xa7f9,	// (0x00038194) list_double_pane

0xa7f9,	// (0x00038194) list_double_time_pane_ParamLimits

0xa7f9,	// (0x00038194) list_double_time_pane

0xa7f9,	// (0x00038194) list_setting_number_pane_ParamLimits

0xa7f9,	// (0x00038194) list_setting_number_pane

0xa7f9,	// (0x00038194) list_setting_pane_ParamLimits

0xa7f9,	// (0x00038194) list_setting_pane

0xa83d,	// (0x000381d8) list_single_2graphic_pane_ParamLimits

0xa83d,	// (0x000381d8) list_single_2graphic_pane

0xa83d,	// (0x000381d8) list_single_graphic_heading_pane_ParamLimits

0xa83d,	// (0x000381d8) list_single_graphic_heading_pane

0xa83d,	// (0x000381d8) list_single_graphic_pane_ParamLimits

0xa83d,	// (0x000381d8) list_single_graphic_pane

0xa83d,	// (0x000381d8) list_single_heading_pane_ParamLimits

0xa83d,	// (0x000381d8) list_single_heading_pane

0xa889,	// (0x00038224) list_single_large_graphic_pane_ParamLimits

0xa889,	// (0x00038224) list_single_large_graphic_pane

0xa83d,	// (0x000381d8) list_single_number_heading_pane_ParamLimits

0xa83d,	// (0x000381d8) list_single_number_heading_pane

0xa83d,	// (0x000381d8) list_single_number_pane_ParamLimits

0xa83d,	// (0x000381d8) list_single_number_pane

0xa83d,	// (0x000381d8) list_single_pane_ParamLimits

0xa83d,	// (0x000381d8) list_single_pane

0x432b,	// (0x00031cc6) list_highlight_pane_cp1

0x538d,	// (0x00032d28) list_single_pane_g1_ParamLimits

0x538d,	// (0x00032d28) list_single_pane_g1

0x8543,	// (0x00035ede) list_single_pane_g2_ParamLimits

0x8543,	// (0x00035ede) list_single_pane_g2

0x0001,

0xf5ea,	// (0x0003cf85) list_single_pane_g_ParamLimits

0xf5ea,	// (0x0003cf85) list_single_pane_g

0x8dda,	// (0x00036775) list_single_pane_t1_ParamLimits

0x8dda,	// (0x00036775) list_single_pane_t1

0x538d,	// (0x00032d28) list_single_number_pane_g1_ParamLimits

0x538d,	// (0x00032d28) list_single_number_pane_g1

0x8543,	// (0x00035ede) list_single_number_pane_g2_ParamLimits

0x8543,	// (0x00035ede) list_single_number_pane_g2

0x0001,

0xf5ea,	// (0x0003cf85) list_single_number_pane_g_ParamLimits

0xf5ea,	// (0x0003cf85) list_single_number_pane_g

0x8d82,	// (0x0003671d) list_single_number_pane_t1_ParamLimits

0x8d82,	// (0x0003671d) list_single_number_pane_t1

0x8d98,	// (0x00036733) list_single_number_pane_t2_ParamLimits

0x8d98,	// (0x00036733) list_single_number_pane_t2

0x0001,

0xf975,	// (0x0003d310) list_single_number_pane_t_ParamLimits

0xf975,	// (0x0003d310) list_single_number_pane_t

0x8537,	// (0x00035ed2) list_single_graphic_pane_g1_ParamLimits

0x8537,	// (0x00035ed2) list_single_graphic_pane_g1

0x538d,	// (0x00032d28) list_single_graphic_pane_g2_ParamLimits

0x538d,	// (0x00032d28) list_single_graphic_pane_g2

0x8543,	// (0x00035ede) list_single_graphic_pane_g3_ParamLimits

0x8543,	// (0x00035ede) list_single_graphic_pane_g3

0x0002,

0xf5d9,	// (0x0003cf74) list_single_graphic_pane_g_ParamLimits

0xf5d9,	// (0x0003cf74) list_single_graphic_pane_g

0x854f,	// (0x00035eea) list_single_graphic_pane_t1_ParamLimits

0x854f,	// (0x00035eea) list_single_graphic_pane_t1

0x8565,	// (0x00035f00) list_single_heading_pane_g1_ParamLimits

0x8565,	// (0x00035f00) list_single_heading_pane_g1

0x8543,	// (0x00035ede) list_single_heading_pane_g2_ParamLimits

0x8543,	// (0x00035ede) list_single_heading_pane_g2

0x0001,

0xf5e0,	// (0x0003cf7b) list_single_heading_pane_g_ParamLimits

0xf5e0,	// (0x0003cf7b) list_single_heading_pane_g

0x8578,	// (0x00035f13) list_single_heading_pane_t1_ParamLimits

0x8578,	// (0x00035f13) list_single_heading_pane_t1

0x9ae5,	// (0x00037480) list_single_heading_pane_t2_ParamLimits

0x9ae5,	// (0x00037480) list_single_heading_pane_t2

0x0001,

0xf5e5,	// (0x0003cf80) list_single_heading_pane_t_ParamLimits

0xf5e5,	// (0x0003cf80) list_single_heading_pane_t

0x538d,	// (0x00032d28) list_single_number_heading_pane_g1_ParamLimits

0x538d,	// (0x00032d28) list_single_number_heading_pane_g1

0x8543,	// (0x00035ede) list_single_number_heading_pane_g2_ParamLimits

0x8543,	// (0x00035ede) list_single_number_heading_pane_g2

0x0001,

0xf5ea,	// (0x0003cf85) list_single_number_heading_pane_g_ParamLimits

0xf5ea,	// (0x0003cf85) list_single_number_heading_pane_g

0x858e,	// (0x00035f29) list_single_number_heading_pane_t1_ParamLimits

0x858e,	// (0x00035f29) list_single_number_heading_pane_t1

0x85a4,	// (0x00035f3f) list_single_number_heading_pane_t2_ParamLimits

0x85a4,	// (0x00035f3f) list_single_number_heading_pane_t2

0x85b6,	// (0x00035f51) list_single_number_heading_pane_t3_ParamLimits

0x85b6,	// (0x00035f51) list_single_number_heading_pane_t3

0x0002,

0xf5ef,	// (0x0003cf8a) list_single_number_heading_pane_t_ParamLimits

0xf5ef,	// (0x0003cf8a) list_single_number_heading_pane_t

0x85c8,	// (0x00035f63) list_single_graphic_heading_pane_g1_ParamLimits

0x85c8,	// (0x00035f63) list_single_graphic_heading_pane_g1

0x85de,	// (0x00035f79) list_single_graphic_heading_pane_g4_ParamLimits

0x85de,	// (0x00035f79) list_single_graphic_heading_pane_g4

0x8543,	// (0x00035ede) list_single_graphic_heading_pane_g5_ParamLimits

0x8543,	// (0x00035ede) list_single_graphic_heading_pane_g5

0x0002,

0xf5f6,	// (0x0003cf91) list_single_graphic_heading_pane_g_ParamLimits

0xf5f6,	// (0x0003cf91) list_single_graphic_heading_pane_g

0x858e,	// (0x00035f29) list_single_graphic_heading_pane_t1_ParamLimits

0x858e,	// (0x00035f29) list_single_graphic_heading_pane_t1

0x85ef,	// (0x00035f8a) list_single_graphic_heading_pane_t2_ParamLimits

0x85ef,	// (0x00035f8a) list_single_graphic_heading_pane_t2

0x0001,

0xf5fd,	// (0x0003cf98) list_single_graphic_heading_pane_t_ParamLimits

0xf5fd,	// (0x0003cf98) list_single_graphic_heading_pane_t

0x9af7,	// (0x00037492) list_single_large_graphic_pane_g1_ParamLimits

0x9af7,	// (0x00037492) list_single_large_graphic_pane_g1

0x9b03,	// (0x0003749e) list_single_large_graphic_pane_g2_ParamLimits

0x9b03,	// (0x0003749e) list_single_large_graphic_pane_g2

0x9b0f,	// (0x000374aa) list_single_large_graphic_pane_g3_ParamLimits

0x9b0f,	// (0x000374aa) list_single_large_graphic_pane_g3

0x0002,

0xf602,	// (0x0003cf9d) list_single_large_graphic_pane_g_ParamLimits

0xf602,	// (0x0003cf9d) list_single_large_graphic_pane_g

0x5eb0,	// (0x0003384b) wait_border_pane_g2_copy1

0x9b1b,	// (0x000374b6) list_single_large_graphic_pane_g4_cp2

0x8607,	// (0x00035fa2) list_single_large_graphic_pane_t1_ParamLimits

0x8607,	// (0x00035fa2) list_single_large_graphic_pane_t1

0x9b23,	// (0x000374be) list_double_pane_g1_ParamLimits

0x9b23,	// (0x000374be) list_double_pane_g1

0x9b2f,	// (0x000374ca) list_double_pane_g2_ParamLimits

0x9b2f,	// (0x000374ca) list_double_pane_g2

0x0001,

0xf609,	// (0x0003cfa4) list_double_pane_g_ParamLimits

0xf609,	// (0x0003cfa4) list_double_pane_g

0x861d,	// (0x00035fb8) list_double_pane_t1_ParamLimits

0x861d,	// (0x00035fb8) list_double_pane_t1

0x8633,	// (0x00035fce) list_double_pane_t2_ParamLimits

0x8633,	// (0x00035fce) list_double_pane_t2

0x0001,

0xf60e,	// (0x0003cfa9) list_double_pane_t_ParamLimits

0xf60e,	// (0x0003cfa9) list_double_pane_t

0x8645,	// (0x00035fe0) list_double2_pane_g1_ParamLimits

0x8645,	// (0x00035fe0) list_double2_pane_g1

0x8656,	// (0x00035ff1) list_double2_pane_g2_ParamLimits

0x8656,	// (0x00035ff1) list_double2_pane_g2

0x0001,

0xf613,	// (0x0003cfae) list_double2_pane_g_ParamLimits

0xf613,	// (0x0003cfae) list_double2_pane_g

0x8662,	// (0x00035ffd) list_double2_pane_t1_ParamLimits

0x8662,	// (0x00035ffd) list_double2_pane_t1

0x8678,	// (0x00036013) list_double2_pane_t2_ParamLimits

0x8678,	// (0x00036013) list_double2_pane_t2

0x0001,

0xf618,	// (0x0003cfb3) list_double2_pane_t_ParamLimits

0xf618,	// (0x0003cfb3) list_double2_pane_t

0x9b23,	// (0x000374be) list_double_number_pane_g1_ParamLimits

0x9b23,	// (0x000374be) list_double_number_pane_g1

0x9b2f,	// (0x000374ca) list_double_number_pane_g2_ParamLimits

0x9b2f,	// (0x000374ca) list_double_number_pane_g2

0x0001,

0xf609,	// (0x0003cfa4) list_double_number_pane_g_ParamLimits

0xf609,	// (0x0003cfa4) list_double_number_pane_g

0x868a,	// (0x00036025) list_double_number_pane_t1_ParamLimits

0x868a,	// (0x00036025) list_double_number_pane_t1

0x869c,	// (0x00036037) list_double_number_pane_t2_ParamLimits

0x869c,	// (0x00036037) list_double_number_pane_t2

0x86b2,	// (0x0003604d) list_double_number_pane_t3_ParamLimits

0x86b2,	// (0x0003604d) list_double_number_pane_t3

0x0002,

0xf61d,	// (0x0003cfb8) list_double_number_pane_t_ParamLimits

0xf61d,	// (0x0003cfb8) list_double_number_pane_t

0x86c4,	// (0x0003605f) list_double_graphic_pane_g1_ParamLimits

0x86c4,	// (0x0003605f) list_double_graphic_pane_g1

0x9b3b,	// (0x000374d6) list_double_graphic_pane_g2_ParamLimits

0x9b3b,	// (0x000374d6) list_double_graphic_pane_g2

0x9b4a,	// (0x000374e5) list_double_graphic_pane_g3_ParamLimits

0x9b4a,	// (0x000374e5) list_double_graphic_pane_g3

0x0003,

0xf624,	// (0x0003cfbf) list_double_graphic_pane_g_ParamLimits

0xf624,	// (0x0003cfbf) list_double_graphic_pane_g

0x86dc,	// (0x00036077) list_double_graphic_pane_t1_ParamLimits

0x86dc,	// (0x00036077) list_double_graphic_pane_t1

0x86f2,	// (0x0003608d) list_double_graphic_pane_t2_ParamLimits

0x86f2,	// (0x0003608d) list_double_graphic_pane_t2

0x0001,

0xf62d,	// (0x0003cfc8) list_double_graphic_pane_t_ParamLimits

0xf62d,	// (0x0003cfc8) list_double_graphic_pane_t

0x8704,	// (0x0003609f) list_double2_graphic_pane_g1_ParamLimits

0x8704,	// (0x0003609f) list_double2_graphic_pane_g1

0x9b56,	// (0x000374f1) list_double2_graphic_pane_g2_ParamLimits

0x9b56,	// (0x000374f1) list_double2_graphic_pane_g2

0x9b62,	// (0x000374fd) list_double2_graphic_pane_g3_ParamLimits

0x9b62,	// (0x000374fd) list_double2_graphic_pane_g3

0x0002,

0xf632,	// (0x0003cfcd) list_double2_graphic_pane_g_ParamLimits

0xf632,	// (0x0003cfcd) list_double2_graphic_pane_g

0x8710,	// (0x000360ab) list_double2_graphic_pane_t1_ParamLimits

0x8710,	// (0x000360ab) list_double2_graphic_pane_t1

0x8726,	// (0x000360c1) list_double2_graphic_pane_t2_ParamLimits

0x8726,	// (0x000360c1) list_double2_graphic_pane_t2

0x0001,

0xf639,	// (0x0003cfd4) list_double2_graphic_pane_t_ParamLimits

0xf639,	// (0x0003cfd4) list_double2_graphic_pane_t

0x8738,	// (0x000360d3) list_double_large_graphic_pane_g1_ParamLimits

0x8738,	// (0x000360d3) list_double_large_graphic_pane_g1

0x8763,	// (0x000360fe) list_double_large_graphic_pane_g2_ParamLimits

0x8763,	// (0x000360fe) list_double_large_graphic_pane_g2

0x9b2f,	// (0x000374ca) list_double_large_graphic_pane_g3_ParamLimits

0x9b2f,	// (0x000374ca) list_double_large_graphic_pane_g3

0x8779,	// (0x00036114) list_double_large_graphic_pane_g4_ParamLimits

0x8779,	// (0x00036114) list_double_large_graphic_pane_g4

0x0004,

0xf63e,	// (0x0003cfd9) list_double_large_graphic_pane_g_ParamLimits

0xf63e,	// (0x0003cfd9) list_double_large_graphic_pane_g

0x878c,	// (0x00036127) list_double_large_graphic_pane_t1_ParamLimits

0x878c,	// (0x00036127) list_double_large_graphic_pane_t1

0x87a5,	// (0x00036140) list_double_large_graphic_pane_t2_ParamLimits

0x87a5,	// (0x00036140) list_double_large_graphic_pane_t2

0x0001,

0xf649,	// (0x0003cfe4) list_double_large_graphic_pane_t_ParamLimits

0xf649,	// (0x0003cfe4) list_double_large_graphic_pane_t

0x9b83,	// (0x0003751e) list_double2_large_graphic_pane_g1_ParamLimits

0x9b83,	// (0x0003751e) list_double2_large_graphic_pane_g1

0x9b8f,	// (0x0003752a) list_double2_large_graphic_pane_g2_ParamLimits

0x9b8f,	// (0x0003752a) list_double2_large_graphic_pane_g2

0x9b62,	// (0x000374fd) list_double2_large_graphic_pane_g3_ParamLimits

0x9b62,	// (0x000374fd) list_double2_large_graphic_pane_g3

0x0002,

0xf64e,	// (0x0003cfe9) list_double2_large_graphic_pane_g_ParamLimits

0xf64e,	// (0x0003cfe9) list_double2_large_graphic_pane_g

0x87b7,	// (0x00036152) list_double2_large_graphic_pane_t1_ParamLimits

0x87b7,	// (0x00036152) list_double2_large_graphic_pane_t1

0x87cd,	// (0x00036168) list_double2_large_graphic_pane_t2_ParamLimits

0x87cd,	// (0x00036168) list_double2_large_graphic_pane_t2

0x0001,

0xf655,	// (0x0003cff0) list_double2_large_graphic_pane_t_ParamLimits

0xf655,	// (0x0003cff0) list_double2_large_graphic_pane_t

0x87df,	// (0x0003617a) list_double_heading_pane_g1_ParamLimits

0x87df,	// (0x0003617a) list_double_heading_pane_g1

0x9ba0,	// (0x0003753b) list_double_heading_pane_g2_ParamLimits

0x9ba0,	// (0x0003753b) list_double_heading_pane_g2

0x0001,

0xf65a,	// (0x0003cff5) list_double_heading_pane_g_ParamLimits

0xf65a,	// (0x0003cff5) list_double_heading_pane_g

0x87f0,	// (0x0003618b) list_double_heading_pane_t1_ParamLimits

0x87f0,	// (0x0003618b) list_double_heading_pane_t1

0x8678,	// (0x00036013) list_double_heading_pane_t2_ParamLimits

0x8678,	// (0x00036013) list_double_heading_pane_t2

0x0001,

0xf65f,	// (0x0003cffa) list_double_heading_pane_t_ParamLimits

0xf65f,	// (0x0003cffa) list_double_heading_pane_t

0x8806,	// (0x000361a1) list_double_graphic_heading_pane_g1_ParamLimits

0x8806,	// (0x000361a1) list_double_graphic_heading_pane_g1

0x87df,	// (0x0003617a) list_double_graphic_heading_pane_g2_ParamLimits

0x87df,	// (0x0003617a) list_double_graphic_heading_pane_g2

0x9ba0,	// (0x0003753b) list_double_graphic_heading_pane_g3_ParamLimits

0x9ba0,	// (0x0003753b) list_double_graphic_heading_pane_g3

0x0002,

0xf664,	// (0x0003cfff) list_double_graphic_heading_pane_g_ParamLimits

0xf664,	// (0x0003cfff) list_double_graphic_heading_pane_g

0x8812,	// (0x000361ad) list_double_graphic_heading_pane_t1_ParamLimits

0x8812,	// (0x000361ad) list_double_graphic_heading_pane_t1

0x8726,	// (0x000360c1) list_double_graphic_heading_pane_t2_ParamLimits

0x8726,	// (0x000360c1) list_double_graphic_heading_pane_t2

0x0001,

0xf66b,	// (0x0003d006) list_double_graphic_heading_pane_t_ParamLimits

0xf66b,	// (0x0003d006) list_double_graphic_heading_pane_t

0x8828,	// (0x000361c3) list_double_time_pane_g1_ParamLimits

0x8828,	// (0x000361c3) list_double_time_pane_g1

0x8839,	// (0x000361d4) list_double_time_pane_g2_ParamLimits

0x8839,	// (0x000361d4) list_double_time_pane_g2

0x0001,

0xf670,	// (0x0003d00b) list_double_time_pane_g_ParamLimits

0xf670,	// (0x0003d00b) list_double_time_pane_g

0x8845,	// (0x000361e0) list_double_time_pane_t1_ParamLimits

0x8845,	// (0x000361e0) list_double_time_pane_t1

0x885b,	// (0x000361f6) list_double_time_pane_t2_ParamLimits

0x885b,	// (0x000361f6) list_double_time_pane_t2

0x886d,	// (0x00036208) list_double_time_pane_t3_ParamLimits

0x886d,	// (0x00036208) list_double_time_pane_t3

0x887f,	// (0x0003621a) list_double_time_pane_t4_ParamLimits

0x887f,	// (0x0003621a) list_double_time_pane_t4

0x0003,

0xf675,	// (0x0003d010) list_double_time_pane_t_ParamLimits

0xf675,	// (0x0003d010) list_double_time_pane_t

0x8891,	// (0x0003622c) list_setting_pane_g1_ParamLimits

0x8891,	// (0x0003622c) list_setting_pane_g1

0x889d,	// (0x00036238) list_setting_pane_g2_ParamLimits

0x889d,	// (0x00036238) list_setting_pane_g2

0x0001,

0xf67e,	// (0x0003d019) list_setting_pane_g_ParamLimits

0xf67e,	// (0x0003d019) list_setting_pane_g

0x88a9,	// (0x00036244) list_setting_pane_t1_ParamLimits

0x88a9,	// (0x00036244) list_setting_pane_t1

0x88c3,	// (0x0003625e) list_setting_pane_t2_ParamLimits

0x88c3,	// (0x0003625e) list_setting_pane_t2

0x0002,

0xf683,	// (0x0003d01e) list_setting_pane_t_ParamLimits

0xf683,	// (0x0003d01e) list_setting_pane_t

0x8900,	// (0x0003629b) set_value_pane_cp_ParamLimits

0x8900,	// (0x0003629b) set_value_pane_cp

0x890c,	// (0x000362a7) list_setting_number_pane_g1_ParamLimits

0x890c,	// (0x000362a7) list_setting_number_pane_g1

0x8918,	// (0x000362b3) list_setting_number_pane_g2_ParamLimits

0x8918,	// (0x000362b3) list_setting_number_pane_g2

0x0001,

0xf68a,	// (0x0003d025) list_setting_number_pane_g_ParamLimits

0xf68a,	// (0x0003d025) list_setting_number_pane_g

0x8924,	// (0x000362bf) list_setting_number_pane_t1_ParamLimits

0x8924,	// (0x000362bf) list_setting_number_pane_t1

0x893d,	// (0x000362d8) list_setting_number_pane_t2_ParamLimits

0x893d,	// (0x000362d8) list_setting_number_pane_t2

0x8957,	// (0x000362f2) list_setting_number_pane_t3_ParamLimits

0x8957,	// (0x000362f2) list_setting_number_pane_t3

0x0003,

0xf68f,	// (0x0003d02a) list_setting_number_pane_t_ParamLimits

0xf68f,	// (0x0003d02a) list_setting_number_pane_t

0x8900,	// (0x0003629b) set_value_pane_ParamLimits

0x8900,	// (0x0003629b) set_value_pane

0x498e,	// (0x00032329) bg_set_opt_pane_ParamLimits

0x498e,	// (0x00032329) bg_set_opt_pane

0x899a,	// (0x00036335) set_value_pane_t1

0x49af,	// (0x0003234a) slider_set_pane_cp3

0x49b8,	// (0x00032353) volume_small_pane_cp

0x49c1,	// (0x0003235c) list_form_gen_pane

0x49ca,	// (0x00032365) scroll_pane_cp8

0x89b0,	// (0x0003634b) form_field_data_pane_ParamLimits

0x89b0,	// (0x0003634b) form_field_data_pane

0x89d0,	// (0x0003636b) form_field_data_wide_pane_ParamLimits

0x89d0,	// (0x0003636b) form_field_data_wide_pane

0x89f1,	// (0x0003638c) form_field_popup_pane_ParamLimits

0x89f1,	// (0x0003638c) form_field_popup_pane

0x8a0f,	// (0x000363aa) form_field_popup_wide_pane_ParamLimits

0x8a0f,	// (0x000363aa) form_field_popup_wide_pane

0x8a2c,	// (0x000363c7) form_field_slider_pane_ParamLimits

0x8a2c,	// (0x000363c7) form_field_slider_pane

0x8a3f,	// (0x000363da) form_field_slider_wide_pane_ParamLimits

0x8a3f,	// (0x000363da) form_field_slider_wide_pane

0x49db,	// (0x00032376) data_form_pane

0x8a5c,	// (0x000363f7) form_field_data_pane_t1

0x49e7,	// (0x00032382) input_focus_pane

0x49f5,	// (0x00032390) data_form_wide_pane

0x8a82,	// (0x0003641d) form_field_data_wide_pane_t1

0x4762,	// (0x000320fd) input_focus_pane_cp6

0x8aa4,	// (0x0003643f) form_field_popup_pane_t1

0x49e7,	// (0x00032382) input_focus_pane_cp7

0x4a21,	// (0x000323bc) list_form_pane

0x8ac6,	// (0x00036461) form_field_popup_wide_pane_t1

0x49e7,	// (0x00032382) input_focus_pane_cp8

0x4a2d,	// (0x000323c8) list_form_wide_pane

0x8ae3,	// (0x0003647e) form_field_slider_pane_t1_ParamLimits

0x8ae3,	// (0x0003647e) form_field_slider_pane_t1

0x8afb,	// (0x00036496) form_field_slider_pane_t2_ParamLimits

0x8afb,	// (0x00036496) form_field_slider_pane_t2

0x0001,

0xf69f,	// (0x0003d03a) form_field_slider_pane_t_ParamLimits

0xf69f,	// (0x0003d03a) form_field_slider_pane_t

0x4379,	// (0x00031d14) input_focus_pane_cp9_ParamLimits

0x4379,	// (0x00031d14) input_focus_pane_cp9

0x8b10,	// (0x000364ab) slider_cont_pane_ParamLimits

0x8b10,	// (0x000364ab) slider_cont_pane

0x4a3c,	// (0x000323d7) form_field_slider_wide_pane_t1_ParamLimits

0x4a3c,	// (0x000323d7) form_field_slider_wide_pane_t1

0x8b24,	// (0x000364bf) form_field_slider_wide_pane_t2_ParamLimits

0x8b24,	// (0x000364bf) form_field_slider_wide_pane_t2

0x0001,

0xf6a4,	// (0x0003d03f) form_field_slider_wide_pane_t_ParamLimits

0xf6a4,	// (0x0003d03f) form_field_slider_wide_pane_t

0x4379,	// (0x00031d14) input_focus_pane_cp10_ParamLimits

0x4379,	// (0x00031d14) input_focus_pane_cp10

0x8b36,	// (0x000364d1) slider_cont_pane_cp1_ParamLimits

0x8b36,	// (0x000364d1) slider_cont_pane_cp1

0x8b4a,	// (0x000364e5) slider_form_pane_cp

0x4a4e,	// (0x000323e9) input_focus_pane_g1

0x4a56,	// (0x000323f1) input_focus_pane_g2

0x4a5e,	// (0x000323f9) input_focus_pane_g3

0x4a66,	// (0x00032401) input_focus_pane_g4

0x4a6e,	// (0x00032409) input_focus_pane_g5

0x4a76,	// (0x00032411) input_focus_pane_g6

0x4a7e,	// (0x00032419) input_focus_pane_g7

0x4a86,	// (0x00032421) input_focus_pane_g8

0x4a8e,	// (0x00032429) input_focus_pane_g9

0x4321,	// (0x00031cbc) input_focus_pane_g10

0x0009,

0xf6a9,	// (0x0003d044) input_focus_pane_g

0x5eb9,	// (0x00033854) wait_border_pane_g3_copy1

0x8b52,	// (0x000364ed) data_form_pane_t1

0x4321,	// (0x00031cbc) wait_anim_pane_g1_copy1

0x8daa,	// (0x00036745) data_form_wide_pane_t1

0x8b6d,	// (0x00036508) list_form_graphic_pane_cp_ParamLimits

0x8b6d,	// (0x00036508) list_form_graphic_pane_cp

0x6b42,	// (0x000344dd) slider_form_pane_g1

0x6b4b,	// (0x000344e6) slider_form_pane_g2

0x0006,

0xf9a5,	// (0x0003d340) slider_form_pane_g

0x8b84,	// (0x0003651f) list_form_graphic_pane_ParamLimits

0x8b84,	// (0x0003651f) list_form_graphic_pane

0x8b9e,	// (0x00036539) list_form_graphic_pane_g1

0x8ba6,	// (0x00036541) list_form_graphic_pane_t1_ParamLimits

0x8ba6,	// (0x00036541) list_form_graphic_pane_t1

0x4387,	// (0x00031d22) list_highlight_pane_cp5_ParamLimits

0x4387,	// (0x00031d22) list_highlight_pane_cp5

0x8bbb,	// (0x00036556) find_pane_g1

0x4a96,	// (0x00032431) input_find_pane

0x8bc4,	// (0x0003655f) input_find_pane_g1_ParamLimits

0x8bc4,	// (0x0003655f) input_find_pane_g1

0x8bd0,	// (0x0003656b) input_find_pane_t1_ParamLimits

0x8bd0,	// (0x0003656b) input_find_pane_t1

0x8be5,	// (0x00036580) input_find_pane_t2_ParamLimits

0x8be5,	// (0x00036580) input_find_pane_t2

0x0001,

0xf6be,	// (0x0003d059) input_find_pane_t_ParamLimits

0xf6be,	// (0x0003d059) input_find_pane_t

0x4a9f,	// (0x0003243a) input_focus_pane_cp5_ParamLimits

0x4a9f,	// (0x0003243a) input_focus_pane_cp5

0x9bb8,	// (0x00037553) bg_popup_window_pane_cp2_ParamLimits

0x9bb8,	// (0x00037553) bg_popup_window_pane_cp2

0x9bc5,	// (0x00037560) listscroll_menu_pane_ParamLimits

0x9bc5,	// (0x00037560) listscroll_menu_pane

0x9bd1,	// (0x0003756c) popup_submenu_window_ParamLimits

0x9bd1,	// (0x0003756c) popup_submenu_window

0x4aad,	// (0x00032448) find_popup_pane_g1

0x4ab5,	// (0x00032450) input_popup_find_pane_cp

0x4a9f,	// (0x0003243a) input_focus_pane_cp4_ParamLimits

0x4a9f,	// (0x0003243a) input_focus_pane_cp4

0x4abf,	// (0x0003245a) input_popup_find_pane_t1_ParamLimits

0x4abf,	// (0x0003245a) input_popup_find_pane_t1

0x432b,	// (0x00031cc6) bg_popup_sub_pane_cp

0x4aed,	// (0x00032488) listscroll_popup_sub_pane

0x4af5,	// (0x00032490) list_submenu_pane_ParamLimits

0x4af5,	// (0x00032490) list_submenu_pane

0x4b06,	// (0x000324a1) scroll_pane_cp4

0x4b0e,	// (0x000324a9) list_single_popup_submenu_pane_ParamLimits

0x4b0e,	// (0x000324a9) list_single_popup_submenu_pane

0x4b21,	// (0x000324bc) list_single_popup_submenu_pane_g1

0x4b29,	// (0x000324c4) list_single_popup_submenu_pane_t1_ParamLimits

0x4b29,	// (0x000324c4) list_single_popup_submenu_pane_t1

0x4387,	// (0x00031d22) bg_active_tab_pane_cp1_ParamLimits

0x4387,	// (0x00031d22) bg_active_tab_pane_cp1

0x9c07,	// (0x000375a2) tabs_2_active_pane_g1

0x9c0f,	// (0x000375aa) tabs_2_active_pane_t1

0x4387,	// (0x00031d22) bg_passive_tab_pane_cp1_ParamLimits

0x4387,	// (0x00031d22) bg_passive_tab_pane_cp1

0x9c07,	// (0x000375a2) tabs_2_passive_pane_g1

0x9c0f,	// (0x000375aa) tabs_2_passive_pane_t1

0x5853,	// (0x000331ee) bg_active_tab_pane_cp4

0x9c21,	// (0x000375bc) tabs_2_long_active_pane_t1

0x9c34,	// (0x000375cf) bg_passive_tab_pane_cp4

0xa4ee,	// (0x00037e89) list_single_midp_graphic_pane_g4_ParamLimits

0x5853,	// (0x000331ee) bg_active_tab_pane_cp5

0x9c40,	// (0x000375db) tabs_3_long_active_pane_t1

0x9c34,	// (0x000375cf) bg_passive_tab_pane_cp5

0xa4ee,	// (0x00037e89) list_single_midp_graphic_pane_g4

0x4387,	// (0x00031d22) bg_popup_window_pane_cp13_ParamLimits

0x4387,	// (0x00031d22) bg_popup_window_pane_cp13

0x4b53,	// (0x000324ee) listscroll_popup_fast_pane_ParamLimits

0x4b53,	// (0x000324ee) listscroll_popup_fast_pane

0x4b62,	// (0x000324fd) grid_popup_fast_pane_ParamLimits

0x4b62,	// (0x000324fd) grid_popup_fast_pane

0x4b74,	// (0x0003250f) scroll_pane_cp9_ParamLimits

0x4b74,	// (0x0003250f) scroll_pane_cp9

0xc8aa,	// (0x0003a245) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc8aa,	// (0x0003a245) list_single_graphic_hl_pane_t1_cp2

0x4b98,	// (0x00032533) input_focus_pane_cp20_ParamLimits

0x4b98,	// (0x00032533) input_focus_pane_cp20

0x4ba6,	// (0x00032541) query_popup_data_pane_t1_ParamLimits

0x4ba6,	// (0x00032541) query_popup_data_pane_t1

0x4bb9,	// (0x00032554) query_popup_data_pane_t2_ParamLimits

0x4bb9,	// (0x00032554) query_popup_data_pane_t2

0x4bff,	// (0x0003259a) query_popup_data_pane_t3_ParamLimits

0x4bff,	// (0x0003259a) query_popup_data_pane_t3

0x4c40,	// (0x000325db) query_popup_data_pane_t4_ParamLimits

0x4c40,	// (0x000325db) query_popup_data_pane_t4

0x4c7c,	// (0x00032617) query_popup_data_pane_t5_ParamLimits

0x4c7c,	// (0x00032617) query_popup_data_pane_t5

0x0004,

0xf6c3,	// (0x0003d05e) query_popup_data_pane_t_ParamLimits

0xf6c3,	// (0x0003d05e) query_popup_data_pane_t

0x4a4e,	// (0x000323e9) bg_set_opt_pane_g1

0x4a56,	// (0x000323f1) bg_set_opt_pane_g2

0x4a5e,	// (0x000323f9) bg_set_opt_pane_g3

0x4a66,	// (0x00032401) bg_set_opt_pane_g4

0x4a6e,	// (0x00032409) bg_set_opt_pane_g5

0x4a76,	// (0x00032411) bg_set_opt_pane_g6

0x4a7e,	// (0x00032419) bg_set_opt_pane_g7

0x4a86,	// (0x00032421) bg_set_opt_pane_g8

0x4a8e,	// (0x00032429) bg_set_opt_pane_g9

0x0008,

0xf6ce,	// (0x0003d069) bg_set_opt_pane_g

0xa07e,	// (0x00037a19) control_top_pane_stacon_ParamLimits

0xa07e,	// (0x00037a19) control_top_pane_stacon

0xa0d1,	// (0x00037a6c) signal_pane_stacon_ParamLimits

0xa0d1,	// (0x00037a6c) signal_pane_stacon

0x50ce,	// (0x00032a69) stacon_top_pane_g1_ParamLimits

0x50ce,	// (0x00032a69) stacon_top_pane_g1

0xa0f6,	// (0x00037a91) title_pane_stacon_ParamLimits

0xa0f6,	// (0x00037a91) title_pane_stacon

0xa120,	// (0x00037abb) uni_indicator_pane_stacon_ParamLimits

0xa120,	// (0x00037abb) uni_indicator_pane_stacon

0xa135,	// (0x00037ad0) battery_pane_stacon_ParamLimits

0xa135,	// (0x00037ad0) battery_pane_stacon

0xa179,	// (0x00037b14) control_bottom_pane_stacon_ParamLimits

0xa179,	// (0x00037b14) control_bottom_pane_stacon

0xa19c,	// (0x00037b37) navi_pane_stacon_ParamLimits

0xa19c,	// (0x00037b37) navi_pane_stacon

0x50f0,	// (0x00032a8b) stacon_bottom_pane_g1_ParamLimits

0x50f0,	// (0x00032a8b) stacon_bottom_pane_g1

0x9c52,	// (0x000375ed) aid_levels_signal_lsc_ParamLimits

0x9c52,	// (0x000375ed) aid_levels_signal_lsc

0x9c69,	// (0x00037604) signal_pane_stacon_g1_ParamLimits

0x9c69,	// (0x00037604) signal_pane_stacon_g1

0x9c7d,	// (0x00037618) signal_pane_stacon_g2_ParamLimits

0x9c7d,	// (0x00037618) signal_pane_stacon_g2

0x0001,

0xf6e1,	// (0x0003d07c) signal_pane_stacon_g_ParamLimits

0xf6e1,	// (0x0003d07c) signal_pane_stacon_g

0x9cb2,	// (0x0003764d) title_pane_stacon_t1_ParamLimits

0x9cb2,	// (0x0003764d) title_pane_stacon_t1

0x4cd4,	// (0x0003266f) uni_indicator_pane_stacon_g1

0x4cde,	// (0x00032679) uni_indicator_pane_stacon_g2

0x4cc0,	// (0x0003265b) uni_indicator_pane_stacon_g3

0x4cca,	// (0x00032665) uni_indicator_pane_stacon_g4

0x0003,

0xf6ed,	// (0x0003d088) uni_indicator_pane_stacon_g

0x9cd7,	// (0x00037672) control_top_pane_stacon_g1

0x9cdf,	// (0x0003767a) control_top_pane_stacon_t1_ParamLimits

0x9cdf,	// (0x0003767a) control_top_pane_stacon_t1

0x9d16,	// (0x000376b1) aid_levels_battery_lsc_ParamLimits

0x9d16,	// (0x000376b1) aid_levels_battery_lsc

0x9d2e,	// (0x000376c9) battery_pane_stacon_g1_ParamLimits

0x9d2e,	// (0x000376c9) battery_pane_stacon_g1

0x9d41,	// (0x000376dc) battery_pane_stacon_g2_ParamLimits

0x9d41,	// (0x000376dc) battery_pane_stacon_g2

0x0001,

0xf6f6,	// (0x0003d091) battery_pane_stacon_g_ParamLimits

0xf6f6,	// (0x0003d091) battery_pane_stacon_g

0x9d7f,	// (0x0003771a) navi_icon_pane_stacon

0x9d93,	// (0x0003772e) navi_navi_pane_stacon

0x9d7f,	// (0x0003771a) navi_text_pane_stacon

0x9cd7,	// (0x00037672) control_bottom_pane_stacon_g1

0x9da7,	// (0x00037742) control_bottom_pane_stacon_t1_ParamLimits

0x9da7,	// (0x00037742) control_bottom_pane_stacon_t1

0x9dde,	// (0x00037779) grid_app_pane_ParamLimits

0x9dde,	// (0x00037779) grid_app_pane

0x9e00,	// (0x0003779b) scroll_pane_cp15_ParamLimits

0x9e00,	// (0x0003779b) scroll_pane_cp15

0x9e15,	// (0x000377b0) cell_app_pane_ParamLimits

0x9e15,	// (0x000377b0) cell_app_pane

0x9e3f,	// (0x000377da) cell_app_pane_g1_ParamLimits

0x9e3f,	// (0x000377da) cell_app_pane_g1

0x4d02,	// (0x0003269d) cell_app_pane_g2_ParamLimits

0x4d02,	// (0x0003269d) cell_app_pane_g2

0x0001,

0xf6fb,	// (0x0003d096) cell_app_pane_g_ParamLimits

0xf6fb,	// (0x0003d096) cell_app_pane_g

0x9e5f,	// (0x000377fa) cell_app_pane_t1_ParamLimits

0x9e5f,	// (0x000377fa) cell_app_pane_t1

0x4d0e,	// (0x000326a9) grid_highlight_pane_ParamLimits

0x4d0e,	// (0x000326a9) grid_highlight_pane

0x4a4e,	// (0x000323e9) cell_highlight_pane_g1

0x4a56,	// (0x000323f1) cell_highlight_pane_g2

0x4a5e,	// (0x000323f9) cell_highlight_pane_g3

0x4a66,	// (0x00032401) cell_highlight_pane_g4

0x4a6e,	// (0x00032409) cell_highlight_pane_g5

0x4a76,	// (0x00032411) cell_highlight_pane_g6

0x4a7e,	// (0x00032419) cell_highlight_pane_g7

0x4a86,	// (0x00032421) cell_highlight_pane_g8

0x4a8e,	// (0x00032429) cell_highlight_pane_g9

0x4321,	// (0x00031cbc) cell_highlight_pane_g10

0x0009,

0xf6a9,	// (0x0003d044) cell_highlight_pane_g

0x4d1f,	// (0x000326ba) bg_scroll_pane

0x9e89,	// (0x00037824) scroll_handle_pane

0x4d66,	// (0x00032701) scroll_bg_pane_g1

0x4d7b,	// (0x00032716) scroll_bg_pane_g2

0x4d93,	// (0x0003272e) scroll_bg_pane_g3

0x0002,

0xf700,	// (0x0003d09b) scroll_bg_pane_g

0x4da8,	// (0x00032743) scroll_handle_focus_pane_ParamLimits

0x4da8,	// (0x00032743) scroll_handle_focus_pane

0x4d66,	// (0x00032701) scroll_handle_pane_g1

0x4db5,	// (0x00032750) scroll_handle_pane_g2

0x4d93,	// (0x0003272e) scroll_handle_pane_g3

0x0002,

0xf707,	// (0x0003d0a2) scroll_handle_pane_g

0x4a9f,	// (0x0003243a) bg_popup_sub_pane_cp21_ParamLimits

0x4a9f,	// (0x0003243a) bg_popup_sub_pane_cp21

0x4dc9,	// (0x00032764) popup_fep_japan_predictive_window_t1_ParamLimits

0x4dc9,	// (0x00032764) popup_fep_japan_predictive_window_t1

0x4de0,	// (0x0003277b) popup_fep_japan_predictive_window_t2_ParamLimits

0x4de0,	// (0x0003277b) popup_fep_japan_predictive_window_t2

0x4e13,	// (0x000327ae) popup_fep_japan_predictive_window_t3_ParamLimits

0x4e13,	// (0x000327ae) popup_fep_japan_predictive_window_t3

0x0002,

0xf70e,	// (0x0003d0a9) popup_fep_japan_predictive_window_t_ParamLimits

0xf70e,	// (0x0003d0a9) popup_fep_japan_predictive_window_t

0x432b,	// (0x00031cc6) bg_popup_sub_pane_cp23

0x4e4a,	// (0x000327e5) listscroll_japin_cand_pane

0x4e52,	// (0x000327ed) popup_fep_japan_candidate_window_t1

0x4e60,	// (0x000327fb) candidate_pane_ParamLimits

0x4e60,	// (0x000327fb) candidate_pane

0x4e72,	// (0x0003280d) scroll_pane_cp30

0x4e7a,	// (0x00032815) list_single_popup_jap_candidate_pane_ParamLimits

0x4e7a,	// (0x00032815) list_single_popup_jap_candidate_pane

0x432b,	// (0x00031cc6) list_highlight_pane_cp30

0x4e8e,	// (0x00032829) list_single_popup_jap_candidate_pane_t1

0x4e9d,	// (0x00032838) level_1_signal

0x4eaa,	// (0x00032845) level_2_signal

0x4eb7,	// (0x00032852) level_3_signal

0x4ec4,	// (0x0003285f) level_4_signal

0x4ed1,	// (0x0003286c) level_5_signal

0x4ede,	// (0x00032879) level_6_signal

0x4eeb,	// (0x00032886) level_7_signal

0x4e9d,	// (0x00032838) level_1_battery

0x4eaa,	// (0x00032845) level_2_battery

0x4eb7,	// (0x00032852) level_3_battery

0x4ec4,	// (0x0003285f) level_4_battery

0x4ed1,	// (0x0003286c) level_5_battery

0x4ede,	// (0x00032879) level_6_battery

0x4eeb,	// (0x00032886) level_7_battery

0x4f10,	// (0x000328ab) list_menu_pane_ParamLimits

0x4f10,	// (0x000328ab) list_menu_pane

0x4f26,	// (0x000328c1) scroll_pane_cp25_ParamLimits

0x4f26,	// (0x000328c1) scroll_pane_cp25

0x4f3f,	// (0x000328da) list_double2_graphic_pane_cp2_ParamLimits

0x4f3f,	// (0x000328da) list_double2_graphic_pane_cp2

0x4f3f,	// (0x000328da) list_double2_large_graphic_pane_cp2_ParamLimits

0x4f3f,	// (0x000328da) list_double2_large_graphic_pane_cp2

0x4f3f,	// (0x000328da) list_double2_pane_cp2_ParamLimits

0x4f3f,	// (0x000328da) list_double2_pane_cp2

0x4f3f,	// (0x000328da) list_double_graphic_pane_cp2_ParamLimits

0x4f3f,	// (0x000328da) list_double_graphic_pane_cp2

0x4f3f,	// (0x000328da) list_double_large_graphic_pane_cp2_ParamLimits

0x4f3f,	// (0x000328da) list_double_large_graphic_pane_cp2

0x4f3f,	// (0x000328da) list_double_number_pane_cp2_ParamLimits

0x4f3f,	// (0x000328da) list_double_number_pane_cp2

0x4f3f,	// (0x000328da) list_double_pane_cp2_ParamLimits

0x4f3f,	// (0x000328da) list_double_pane_cp2

0x9ee3,	// (0x0003787e) list_single_2graphic_pane_cp2_ParamLimits

0x9ee3,	// (0x0003787e) list_single_2graphic_pane_cp2

0x9ee3,	// (0x0003787e) list_single_graphic_heading_pane_cp2_ParamLimits

0x9ee3,	// (0x0003787e) list_single_graphic_heading_pane_cp2

0x9ee3,	// (0x0003787e) list_single_graphic_pane_cp2_ParamLimits

0x9ee3,	// (0x0003787e) list_single_graphic_pane_cp2

0x9ee3,	// (0x0003787e) list_single_heading_pane_cp2_ParamLimits

0x9ee3,	// (0x0003787e) list_single_heading_pane_cp2

0x4f4f,	// (0x000328ea) list_single_large_graphic_pane_cp2_ParamLimits

0x4f4f,	// (0x000328ea) list_single_large_graphic_pane_cp2

0x9ee3,	// (0x0003787e) list_single_number_heading_pane_cp2_ParamLimits

0x9ee3,	// (0x0003787e) list_single_number_heading_pane_cp2

0x9ee3,	// (0x0003787e) list_single_number_pane_cp2_ParamLimits

0x9ee3,	// (0x0003787e) list_single_number_pane_cp2

0x9ee3,	// (0x0003787e) list_single_pane_cp2_ParamLimits

0x9ee3,	// (0x0003787e) list_single_pane_cp2

0x4f69,	// (0x00032904) bg_popup_sub_pane_cp22

0x9fc6,	// (0x00037961) popup_side_volume_key_window_g1

0x9ff0,	// (0x0003798b) popup_side_volume_key_window_t1

0xa00c,	// (0x000379a7) volume_small_pane_cp1

0x4379,	// (0x00031d14) bg_popup_sub_pane_cp24_ParamLimits

0x4379,	// (0x00031d14) bg_popup_sub_pane_cp24

0x4f7f,	// (0x0003291a) fep_china_uni_candidate_pane_ParamLimits

0x4f7f,	// (0x0003291a) fep_china_uni_candidate_pane

0x4f93,	// (0x0003292e) fep_china_uni_entry_pane

0x4fa3,	// (0x0003293e) popup_fep_china_uni_window_g1

0x4fbf,	// (0x0003295a) fep_china_uni_entry_pane_g1

0x4fc7,	// (0x00032962) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x0003d0da) fep_china_uni_entry_pane_g

0x4fcf,	// (0x0003296a) fep_entry_item_pane

0x4fd9,	// (0x00032974) fep_candidate_item_pane

0x4fe1,	// (0x0003297c) fep_china_uni_candidate_pane_g1

0x4fe9,	// (0x00032984) fep_china_uni_candidate_pane_g2

0x4ff1,	// (0x0003298c) fep_china_uni_candidate_pane_g3

0x4ff9,	// (0x00032994) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x0003d0df) fep_china_uni_candidate_pane_g

0x4321,	// (0x00031cbc) fep_entry_item_pane_g1

0x5001,	// (0x0003299c) fep_entry_item_pane_t1_ParamLimits

0x5001,	// (0x0003299c) fep_entry_item_pane_t1

0x5017,	// (0x000329b2) fep_candidate_item_pane_t1_ParamLimits

0x5017,	// (0x000329b2) fep_candidate_item_pane_t1

0x502c,	// (0x000329c7) fep_candidate_item_pane_t2_ParamLimits

0x502c,	// (0x000329c7) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x0003d0e8) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x0003d0e8) fep_candidate_item_pane_t

0x4387,	// (0x00031d22) list_highlight_pane_cp31_ParamLimits

0x4387,	// (0x00031d22) list_highlight_pane_cp31

0x503e,	// (0x000329d9) level_1_signal_lsc

0x5047,	// (0x000329e2) level_2_signal_lsc

0x5050,	// (0x000329eb) level_3_signal_lsc

0x5059,	// (0x000329f4) level_4_signal_lsc

0x5062,	// (0x000329fd) level_5_signal_lsc

0x506b,	// (0x00032a06) level_6_signal_lsc

0x5074,	// (0x00032a0f) level_7_signal_lsc

0x5074,	// (0x00032a0f) level_1_battery_lsc

0x507d,	// (0x00032a18) level_2_battery_lsc

0x5086,	// (0x00032a21) level_3_battery_lsc

0x508f,	// (0x00032a2a) level_4_battery_lsc

0x5098,	// (0x00032a33) level_5_battery_lsc

0x50a1,	// (0x00032a3c) level_6_battery_lsc

0x503e,	// (0x000329d9) level_7_battery_lsc

0x50aa,	// (0x00032a45) scroll_handle_focus_pane_g1

0x50b3,	// (0x00032a4e) scroll_handle_focus_pane_g2

0x50bc,	// (0x00032a57) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x0003d0ed) scroll_handle_focus_pane_g

0x8bfa,	// (0x00036595) list_single_2graphic_pane_g1_ParamLimits

0x8bfa,	// (0x00036595) list_single_2graphic_pane_g1

0x85de,	// (0x00035f79) list_single_2graphic_pane_g2_ParamLimits

0x85de,	// (0x00035f79) list_single_2graphic_pane_g2

0x8543,	// (0x00035ede) list_single_2graphic_pane_g3_ParamLimits

0x8543,	// (0x00035ede) list_single_2graphic_pane_g3

0x8c06,	// (0x000365a1) list_single_2graphic_pane_g4_ParamLimits

0x8c06,	// (0x000365a1) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x0003d0f4) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x0003d0f4) list_single_2graphic_pane_g

0x8c17,	// (0x000365b2) list_single_2graphic_pane_t1_ParamLimits

0x8c17,	// (0x000365b2) list_single_2graphic_pane_t1

0xa014,	// (0x000379af) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa014,	// (0x000379af) list_double2_graphic_large_graphic_pane_g1

0x9b8f,	// (0x0003752a) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9b8f,	// (0x0003752a) list_double2_graphic_large_graphic_pane_g2

0x9b62,	// (0x000374fd) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9b62,	// (0x000374fd) list_double2_graphic_large_graphic_pane_g3

0xa026,	// (0x000379c1) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa026,	// (0x000379c1) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x0003d0fd) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x0003d0fd) list_double2_graphic_large_graphic_pane_g

0x8c45,	// (0x000365e0) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8c45,	// (0x000365e0) list_double2_graphic_large_graphic_pane_t1

0x8c5b,	// (0x000365f6) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8c5b,	// (0x000365f6) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x0003d106) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x0003d106) list_double2_graphic_large_graphic_pane_t

0x519d,	// (0x00032b38) popup_fast_swap_window_ParamLimits

0x519d,	// (0x00032b38) popup_fast_swap_window

0x51b9,	// (0x00032b54) popup_side_volume_key_window

0x51d3,	// (0x00032b6e) stacon_top_pane

0x51dd,	// (0x00032b78) status_pane_ParamLimits

0x51dd,	// (0x00032b78) status_pane

0x51d3,	// (0x00032b6e) status_small_pane

0x432b,	// (0x00031cc6) control_pane

0x432b,	// (0x00031cc6) stacon_bottom_pane

0x49ca,	// (0x00032365) scroll_pane_cp121

0x49c1,	// (0x0003235c) set_content_pane

0xa032,	// (0x000379cd) bg_active_tab_pane_g1_cp1

0x50c5,	// (0x00032a60) bg_active_tab_pane_g2_cp1

0xa03b,	// (0x000379d6) bg_active_tab_pane_g3_cp1

0xa032,	// (0x000379cd) bg_passive_tab_pane_g1_cp1

0x50c5,	// (0x00032a60) bg_passive_tab_pane_g2_cp1

0xa03b,	// (0x000379d6) bg_passive_tab_pane_g3_cp1

0xa044,	// (0x000379df) bg_active_tab_pane_g1_cp2

0x50c5,	// (0x00032a60) bg_active_tab_pane_g2_cp2

0xa04d,	// (0x000379e8) bg_active_tab_pane_g3_cp2

0xa044,	// (0x000379df) bg_passive_tab_pane_g1_cp2

0x50c5,	// (0x00032a60) bg_passive_tab_pane_g2_cp2

0xa04d,	// (0x000379e8) bg_passive_tab_pane_g3_cp2

0xa056,	// (0x000379f1) bg_active_tab_pane_g1_cp3

0x50c5,	// (0x00032a60) bg_active_tab_pane_g2_cp3

0xa05f,	// (0x000379fa) bg_active_tab_pane_g3_cp3

0xa056,	// (0x000379f1) bg_passive_tab_pane_g1_cp3

0x50c5,	// (0x00032a60) bg_passive_tab_pane_g2_cp3

0xa05f,	// (0x000379fa) bg_passive_tab_pane_g3_cp3

0xa068,	// (0x00037a03) bg_active_tab_pane_g1_cp4

0x50c5,	// (0x00032a60) bg_active_tab_pane_g2_cp4

0xa073,	// (0x00037a0e) bg_active_tab_pane_g3_cp4

0xa068,	// (0x00037a03) bg_passive_tab_pane_g1_cp4

0x50c5,	// (0x00032a60) bg_passive_tab_pane_g2_cp4

0xa073,	// (0x00037a0e) bg_passive_tab_pane_g3_cp4

0x5115,	// (0x00032ab0) bg_active_tab_pane_g1_cp5

0x50c5,	// (0x00032a60) bg_active_tab_pane_g2_cp5

0x510c,	// (0x00032aa7) bg_active_tab_pane_g3_cp5

0x5115,	// (0x00032ab0) bg_passive_tab_pane_g1_cp5

0x50c5,	// (0x00032a60) bg_passive_tab_pane_g2_cp5

0x510c,	// (0x00032aa7) bg_passive_tab_pane_g3_cp5

0xa1bf,	// (0x00037b5a) list_set_graphic_pane_ParamLimits

0xa1bf,	// (0x00037b5a) list_set_graphic_pane

0x432b,	// (0x00031cc6) bg_set_opt_pane_cp4

0x511e,	// (0x00032ab9) list_set_graphic_pane_g1_ParamLimits

0x511e,	// (0x00032ab9) list_set_graphic_pane_g1

0x512a,	// (0x00032ac5) list_set_graphic_pane_g2_ParamLimits

0x512a,	// (0x00032ac5) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x0003d10b) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x0003d10b) list_set_graphic_pane_g

0x0009,

0xfae8,	// (0x0003d483) volume_small_pane_cp_g

0x514e,	// (0x00032ae9) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x514e,	// (0x00032ae9) list_double2_large_graphic_pane_g1_cp2

0x515c,	// (0x00032af7) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x515c,	// (0x00032af7) list_double2_large_graphic_pane_g2_cp2

0x516d,	// (0x00032b08) list_double2_large_graphic_pane_g3_cp2

0x5175,	// (0x00032b10) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x5175,	// (0x00032b10) list_double2_large_graphic_pane_t1_cp2

0x518b,	// (0x00032b26) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x518b,	// (0x00032b26) list_double2_large_graphic_pane_t2_cp2

0x68dc,	// (0x00034277) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x68dc,	// (0x00034277) list_double_large_graphic_pane_g1_cp2

0x68ef,	// (0x0003428a) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x68ef,	// (0x0003428a) list_double_large_graphic_pane_g2_cp2

0x52fb,	// (0x00032c96) list_double_large_graphic_pane_g3_cp2

0x6900,	// (0x0003429b) list_double_large_graphic_pane_g4_cp

0x6908,	// (0x000342a3) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6908,	// (0x000342a3) list_double_large_graphic_pane_t1_cp2

0x691f,	// (0x000342ba) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x691f,	// (0x000342ba) list_double_large_graphic_pane_t2_cp2

0x51eb,	// (0x00032b86) list_double2_graphic_pane_g1_cp2_ParamLimits

0x51eb,	// (0x00032b86) list_double2_graphic_pane_g1_cp2

0x51f9,	// (0x00032b94) list_double2_graphic_pane_g2_cp2_ParamLimits

0x51f9,	// (0x00032b94) list_double2_graphic_pane_g2_cp2

0x520a,	// (0x00032ba5) list_double2_graphic_pane_g3_cp2

0x5214,	// (0x00032baf) list_double2_graphic_pane_t1_cp2_ParamLimits

0x5214,	// (0x00032baf) list_double2_graphic_pane_t1_cp2

0x522a,	// (0x00032bc5) list_double2_graphic_pane_t2_cp2_ParamLimits

0x522a,	// (0x00032bc5) list_double2_graphic_pane_t2_cp2

0x523c,	// (0x00032bd7) list_single_number_heading_pane_g1_cp2_ParamLimits

0x523c,	// (0x00032bd7) list_single_number_heading_pane_g1_cp2

0x5248,	// (0x00032be3) list_single_number_heading_pane_g2_cp2

0x5250,	// (0x00032beb) list_single_number_heading_pane_t1_cp2_ParamLimits

0x5250,	// (0x00032beb) list_single_number_heading_pane_t1_cp2

0x5266,	// (0x00032c01) list_single_number_heading_pane_t2_cp2_ParamLimits

0x5266,	// (0x00032c01) list_single_number_heading_pane_t2_cp2

0x527a,	// (0x00032c15) list_single_number_heading_pane_t3_cp2_ParamLimits

0x527a,	// (0x00032c15) list_single_number_heading_pane_t3_cp2

0x523c,	// (0x00032bd7) list_single_heading_pane_g1_cp2_ParamLimits

0x523c,	// (0x00032bd7) list_single_heading_pane_g1_cp2

0x5248,	// (0x00032be3) list_single_heading_pane_g2_cp2

0x5250,	// (0x00032beb) list_single_heading_pane_t1_cp2_ParamLimits

0x5250,	// (0x00032beb) list_single_heading_pane_t1_cp2

0x66e4,	// (0x0003407f) list_single_heading_pane_t2_cp2_ParamLimits

0x66e4,	// (0x0003407f) list_single_heading_pane_t2_cp2

0x6445,	// (0x00033de0) list_double_graphic_pane_g1_cp2_ParamLimits

0x6445,	// (0x00033de0) list_double_graphic_pane_g1_cp2

0x6638,	// (0x00033fd3) list_double_graphic_pane_g2_cp2_ParamLimits

0x6638,	// (0x00033fd3) list_double_graphic_pane_g2_cp2

0x6647,	// (0x00033fe2) list_double_graphic_pane_g3_cp2

0x664f,	// (0x00033fea) list_double_graphic_pane_t1_cp2_ParamLimits

0x664f,	// (0x00033fea) list_double_graphic_pane_t1_cp2

0x6665,	// (0x00034000) list_double_graphic_pane_t2_cp2_ParamLimits

0x6665,	// (0x00034000) list_double_graphic_pane_t2_cp2

0x52ef,	// (0x00032c8a) list_double_number_pane_g1_cp2_ParamLimits

0x52ef,	// (0x00032c8a) list_double_number_pane_g1_cp2

0x52fb,	// (0x00032c96) list_double_number_pane_g2_cp2

0x65fc,	// (0x00033f97) list_double_number_pane_t1_cp2_ParamLimits

0x65fc,	// (0x00033f97) list_double_number_pane_t1_cp2

0x6610,	// (0x00033fab) list_double_number_pane_t2_cp2_ParamLimits

0x6610,	// (0x00033fab) list_double_number_pane_t2_cp2

0x6626,	// (0x00033fc1) list_double_number_pane_t3_cp2_ParamLimits

0x6626,	// (0x00033fc1) list_double_number_pane_t3_cp2

0x6573,	// (0x00033f0e) list_single_graphic_pane_g1_cp2_ParamLimits

0x6573,	// (0x00033f0e) list_single_graphic_pane_g1_cp2

0x5353,	// (0x00032cee) list_single_graphic_pane_g2_cp2_ParamLimits

0x5353,	// (0x00032cee) list_single_graphic_pane_g2_cp2

0x535f,	// (0x00032cfa) list_single_graphic_pane_g3_cp2

0x6549,	// (0x00033ee4) list_single_graphic_pane_t1_cp2_ParamLimits

0x6549,	// (0x00033ee4) list_single_graphic_pane_t1_cp2

0x5353,	// (0x00032cee) list_single_number_pane_g1_cp2_ParamLimits

0x5353,	// (0x00032cee) list_single_number_pane_g1_cp2

0x535f,	// (0x00032cfa) list_single_number_pane_g2_cp2

0x6549,	// (0x00033ee4) list_single_number_pane_t1_cp2_ParamLimits

0x6549,	// (0x00033ee4) list_single_number_pane_t1_cp2

0x655f,	// (0x00033efa) list_single_number_pane_t2_cp2_ParamLimits

0x655f,	// (0x00033efa) list_single_number_pane_t2_cp2

0x515c,	// (0x00032af7) list_double2_pane_g1_cp2_ParamLimits

0x515c,	// (0x00032af7) list_double2_pane_g1_cp2

0x516d,	// (0x00032b08) list_double2_pane_g2_cp2

0x52c7,	// (0x00032c62) list_double2_pane_t1_cp2_ParamLimits

0x52c7,	// (0x00032c62) list_double2_pane_t1_cp2

0x52dd,	// (0x00032c78) list_double2_pane_t2_cp2_ParamLimits

0x52dd,	// (0x00032c78) list_double2_pane_t2_cp2

0x52ef,	// (0x00032c8a) list_double_pane_g1_cp2_ParamLimits

0x52ef,	// (0x00032c8a) list_double_pane_g1_cp2

0x52fb,	// (0x00032c96) list_double_pane_g2_cp2

0x5303,	// (0x00032c9e) list_double_pane_t1_cp2_ParamLimits

0x5303,	// (0x00032c9e) list_double_pane_t1_cp2

0x5319,	// (0x00032cb4) list_double_pane_t2_cp2_ParamLimits

0x5319,	// (0x00032cb4) list_double_pane_t2_cp2

0x5343,	// (0x00032cde) list_single_pane_cp2_g3

0x5353,	// (0x00032cee) list_single_pane_g1_cp2_ParamLimits

0x5353,	// (0x00032cee) list_single_pane_g1_cp2

0x535f,	// (0x00032cfa) list_single_pane_g2_cp2

0x5367,	// (0x00032d02) list_single_pane_t1_cp2_ParamLimits

0x5367,	// (0x00032d02) list_single_pane_t1_cp2

0x537f,	// (0x00032d1a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x537f,	// (0x00032d1a) list_single_large_graphic_pane_g1_cp2

0x538d,	// (0x00032d28) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x538d,	// (0x00032d28) list_single_large_graphic_pane_g2_cp2

0x5399,	// (0x00032d34) list_single_large_graphic_pane_g3_cp2

0x53a1,	// (0x00032d3c) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x53a1,	// (0x00032d3c) list_single_large_graphic_pane_g4_cp1

0x53bb,	// (0x00032d56) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x53bb,	// (0x00032d56) list_single_large_graphic_pane_t1_cp2

0x6513,	// (0x00033eae) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x6513,	// (0x00033eae) list_single_graphic_heading_pane_g1_cp2

0x64e0,	// (0x00033e7b) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x64e0,	// (0x00033e7b) list_single_graphic_heading_pane_g4_cp2

0x535f,	// (0x00032cfa) list_single_graphic_heading_pane_g5_cp2

0x651f,	// (0x00033eba) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x651f,	// (0x00033eba) list_single_graphic_heading_pane_t1_cp2

0x6535,	// (0x00033ed0) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x6535,	// (0x00033ed0) list_single_graphic_heading_pane_t2_cp2

0x64d4,	// (0x00033e6f) list_single_2graphic_pane_g1_cp2_ParamLimits

0x64d4,	// (0x00033e6f) list_single_2graphic_pane_g1_cp2

0x64e0,	// (0x00033e7b) list_single_2graphic_pane_g2_cp2_ParamLimits

0x64e0,	// (0x00033e7b) list_single_2graphic_pane_g2_cp2

0x535f,	// (0x00032cfa) list_single_2graphic_pane_g3_cp2

0x64f1,	// (0x00033e8c) list_single_2graphic_pane_g4_cp2_ParamLimits

0x64f1,	// (0x00033e8c) list_single_2graphic_pane_g4_cp2

0x64fd,	// (0x00033e98) list_single_2graphic_pane_t1_cp2_ParamLimits

0x64fd,	// (0x00033e98) list_single_2graphic_pane_t1_cp2

0x4321,	// (0x00031cbc) list_highlight_pane_g10_cp1

0x60b0,	// (0x00033a4b) list_highlight_pane_g1_cp1

0x60b8,	// (0x00033a53) list_highlight_pane_g2_cp1

0x60c0,	// (0x00033a5b) list_highlight_pane_g3_cp1

0x60c8,	// (0x00033a63) list_highlight_pane_g4_cp1

0x60d0,	// (0x00033a6b) list_highlight_pane_g5_cp1

0x60d8,	// (0x00033a73) list_highlight_pane_g6_cp1

0x60e0,	// (0x00033a7b) list_highlight_pane_g7_cp1

0x60e8,	// (0x00033a83) list_highlight_pane_g8_cp1

0x60f0,	// (0x00033a8b) list_highlight_pane_g9_cp1

0xbf7f,	// (0x0003991a) form_field_slider_pane_t3

0xbf8d,	// (0x00039928) form_field_slider_pane_t4

0x5fe4,	// (0x0003397f) slider_form_pane_ParamLimits

0x5fe4,	// (0x0003397f) slider_form_pane

0x432b,	// (0x00031cc6) control_abbreviations

0x432b,	// (0x00031cc6) control_conventions

0x432b,	// (0x00031cc6) control_definitions

0x432b,	// (0x00031cc6) format_table_attribute

0x6730,	// (0x000340cb) bg_popup_preview_window_pane_g9

0x432b,	// (0x00031cc6) format_table_data2

0x432b,	// (0x00031cc6) format_table_data3

0x432b,	// (0x00031cc6) format_table_data_example

0x0008,

0x432b,	// (0x00031cc6) intro_purpose

0xf905,	// (0x0003d2a0) bg_popup_preview_window_pane_g

0x432b,	// (0x00031cc6) texts_category

0x432b,	// (0x00031cc6) texts_graphics

0x53d1,	// (0x00032d6c) text_digital

0x53e0,	// (0x00032d7b) text_primary

0x53ef,	// (0x00032d8a) text_primary_small

0x53fe,	// (0x00032d99) text_secondary

0x540d,	// (0x00032da8) text_title

0x6c08,	// (0x000345a3) bg_passive_tab_pane_g1_cp3_srt

0x50c5,	// (0x00032a60) bg_passive_tab_pane_g2_cp3_srt

0x6bff,	// (0x0003459a) bg_passive_tab_pane_g3_cp3_srt

0x4387,	// (0x00031d22) bg_active_tab_pane_cp3_srt_ParamLimits

0x4387,	// (0x00031d22) bg_active_tab_pane_cp3_srt

0x6c11,	// (0x000345ac) tabs_4_active_pane_srt_g1

0xc26b,	// (0x00039c06) tabs_4_active_pane_srt_t1_ParamLimits

0xc26b,	// (0x00039c06) tabs_4_active_pane_srt_t1

0x6c08,	// (0x000345a3) bg_active_tab_pane_g1_cp3_copy1

0x50c5,	// (0x00032a60) bg_active_tab_pane_g2_cp3_copy1

0x6bff,	// (0x0003459a) bg_active_tab_pane_g3_cp3_copy1

0x4387,	// (0x00031d22) tabs_2_long_active_pane_srt_ParamLimits

0x4387,	// (0x00031d22) tabs_2_long_active_pane_srt

0x4387,	// (0x00031d22) tabs_2_long_passive_pane_srt_ParamLimits

0x4387,	// (0x00031d22) tabs_2_long_passive_pane_srt

0x9c34,	// (0x000375cf) bg_passive_tab_pane_cp4_srt_ParamLimits

0x9c34,	// (0x000375cf) bg_passive_tab_pane_cp4_srt

0x6b04,	// (0x0003449f) bg_passive_tab_pane_g1_cp4_srt

0x50c5,	// (0x00032a60) bg_passive_tab_pane_g2_cp4_srt

0x6afb,	// (0x00034496) bg_passive_tab_pane_g3_cp4_srt

0x5853,	// (0x000331ee) bg_active_tab_pane_cp4_srt_ParamLimits

0x5853,	// (0x000331ee) bg_active_tab_pane_cp4_srt

0xc0c1,	// (0x00039a5c) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc0c1,	// (0x00039a5c) tabs_2_long_active_pane_srt_t1

0x6b04,	// (0x0003449f) bg_active_tab_pane_g1_cp4_srt

0x50c5,	// (0x00032a60) bg_active_tab_pane_g2_cp4_srt

0x6afb,	// (0x00034496) bg_active_tab_pane_g3_cp4_srt

0x4379,	// (0x00031d14) tabs_3_long_active_pane_srt_ParamLimits

0x4379,	// (0x00031d14) tabs_3_long_active_pane_srt

0x4379,	// (0x00031d14) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x4379,	// (0x00031d14) tabs_3_long_passive_pane_cp_srt

0x4379,	// (0x00031d14) tabs_3_long_passive_pane_srt_ParamLimits

0x4379,	// (0x00031d14) tabs_3_long_passive_pane_srt

0x9c34,	// (0x000375cf) bg_passive_tab_pane_cp5_srt_ParamLimits

0x9c34,	// (0x000375cf) bg_passive_tab_pane_cp5_srt

0x5115,	// (0x00032ab0) bg_passive_tab_pane_g1_cp5_srt

0x50c5,	// (0x00032a60) bg_passive_tab_pane_g2_cp5_srt

0x510c,	// (0x00032aa7) bg_passive_tab_pane_g3_cp5_srt

0x5853,	// (0x000331ee) bg_active_tab_pane_cp5_srt_ParamLimits

0x5853,	// (0x000331ee) bg_active_tab_pane_cp5_srt

0xc0af,	// (0x00039a4a) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc0af,	// (0x00039a4a) tabs_3_long_active_pane_srt_t1

0x5115,	// (0x00032ab0) bg_active_tab_pane_g1_cp5_srt

0x50c5,	// (0x00032a60) bg_active_tab_pane_g2_cp5_srt

0x510c,	// (0x00032aa7) bg_active_tab_pane_g3_cp5_srt

0x6aed,	// (0x00034488) navi_text_pane_srt_t1

0x6ae5,	// (0x00034480) navi_icon_pane_srt_g1

0x551d,	// (0x00032eb8) midp_editing_number_pane_srt

0x541c,	// (0x00032db7) midp_ticker_pane_srt

0x5525,	// (0x00032ec0) midp_ticker_pane_srt_g1

0x552d,	// (0x00032ec8) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x0003d12a) midp_ticker_pane_srt_g

0x5535,	// (0x00032ed0) midp_ticker_pane_srt_t1

0x6ad6,	// (0x00034471) midp_editing_number_pane_t1_copy1

0x9c34,	// (0x000375cf) listscroll_midp_pane

0x9c34,	// (0x000375cf) midp_form_pane

0x5424,	// (0x00032dbf) midp_info_popup_window_ParamLimits

0x5424,	// (0x00032dbf) midp_info_popup_window

0x4a9f,	// (0x0003243a) bg_popup_sub_pane_cp50_ParamLimits

0x4a9f,	// (0x0003243a) bg_popup_sub_pane_cp50

0x5d01,	// (0x0003369c) listscroll_midp_info_pane_ParamLimits

0x5d01,	// (0x0003369c) listscroll_midp_info_pane

0x5ce9,	// (0x00033684) listscroll_form_midp_pane_ParamLimits

0x5ce9,	// (0x00033684) listscroll_form_midp_pane

0x5cf5,	// (0x00033690) scroll_bar_cp050

0xbf67,	// (0x00039902) list_midp_pane

0x74cd,	// (0x00034e68) signal_pane_g2_cp

0x5c1b,	// (0x000335b6) listscroll_midp_info_pane_t1_ParamLimits

0x5c1b,	// (0x000335b6) listscroll_midp_info_pane_t1

0x5c33,	// (0x000335ce) listscroll_midp_info_pane_t2_ParamLimits

0x5c33,	// (0x000335ce) listscroll_midp_info_pane_t2

0x5c71,	// (0x0003360c) listscroll_midp_info_pane_t3_ParamLimits

0x5c71,	// (0x0003360c) listscroll_midp_info_pane_t3

0x5cab,	// (0x00033646) listscroll_midp_info_pane_t4_ParamLimits

0x5cab,	// (0x00033646) listscroll_midp_info_pane_t4

0x0003,

0xf840,	// (0x0003d1db) listscroll_midp_info_pane_t_ParamLimits

0xf840,	// (0x0003d1db) listscroll_midp_info_pane_t

0x4b06,	// (0x000324a1) scroll_pane_cp21

0x5bbf,	// (0x0003355a) form_midp_field_choice_group_pane

0x5bc8,	// (0x00033563) form_midp_field_text_pane

0x5c01,	// (0x0003359c) form_midp_field_time_pane

0x5c09,	// (0x000335a4) form_midp_gauge_slider_pane

0x5c12,	// (0x000335ad) form_midp_gauge_wait_pane

0x432b,	// (0x00031cc6) form_midp_image_pane

0x8d4a,	// (0x000366e5) list_single_midp_pane_ParamLimits

0x8d4a,	// (0x000366e5) list_single_midp_pane

0xbf28,	// (0x000398c3) form_midp_field_text_pane_t1

0x5a66,	// (0x00033401) input_focus_pane_cp050

0x5bae,	// (0x00033549) list_midp_form_text_pane

0x5b7d,	// (0x00033518) form_midp_field_choice_group_pane_t1

0x5b8b,	// (0x00033526) input_focus_pane_cp051

0x5b9f,	// (0x0003353a) list_midp_choice_pane

0x432b,	// (0x00031cc6) status_idle_pane

0x5b61,	// (0x000334fc) form_midp_field_time_pane_t1

0x4321,	// (0x00031cbc) wait_anim_pane_g2_copy1

0x5b6f,	// (0x0003350a) form_midp_field_time_pane_t2

0x0001,

0x548f,	// (0x00032e2a) aid_navinavi_width_2_pane

0xf83b,	// (0x0003d1d6) form_midp_field_time_pane_t

0x432b,	// (0x00031cc6) input_focus_pane_cp052

0x432b,	// (0x00031cc6) bg_input_focus_pane_cp040

0x5b3d,	// (0x000334d8) form_midp_gauge_slider_pane_t1

0x5b4b,	// (0x000334e6) form_midp_gauge_slider_pane_t2

0xbf0c,	// (0x000398a7) form_midp_gauge_slider_pane_t3

0xbf1a,	// (0x000398b5) form_midp_gauge_slider_pane_t4

0x0003,

0xf832,	// (0x0003d1cd) form_midp_gauge_slider_pane_t

0x5b59,	// (0x000334f4) form_midp_slider_pane

0x4387,	// (0x00031d22) bg_input_focus_pane_cp041_ParamLimits

0x4387,	// (0x00031d22) bg_input_focus_pane_cp041

0x5b0a,	// (0x000334a5) form_midp_gauge_wait_pane_t1_ParamLimits

0x5b0a,	// (0x000334a5) form_midp_gauge_wait_pane_t1

0x5b1c,	// (0x000334b7) form_midp_gauge_wait_pane_t2_ParamLimits

0x5b1c,	// (0x000334b7) form_midp_gauge_wait_pane_t2

0x0001,

0xf82d,	// (0x0003d1c8) form_midp_gauge_wait_pane_t_ParamLimits

0xf82d,	// (0x0003d1c8) form_midp_gauge_wait_pane_t

0x5b2e,	// (0x000334c9) form_midp_wait_pane_ParamLimits

0x5b2e,	// (0x000334c9) form_midp_wait_pane

0x5ad4,	// (0x0003346f) form_midp_image_pane_g1

0x5add,	// (0x00033478) form_midp_image_pane_t1

0x5aec,	// (0x00033487) form_midp_image_pane_t2

0x5afb,	// (0x00033496) form_midp_image_pane_t3

0x0002,

0xf826,	// (0x0003d1c1) form_midp_image_pane_t

0x5acb,	// (0x00033466) list_single_midp_pane_g1

0x8d3b,	// (0x000366d6) list_single_midp_pane_t1

0xbedc,	// (0x00039877) list_midp_form_item_pane_ParamLimits

0xbedc,	// (0x00039877) list_midp_form_item_pane

0x5437,	// (0x00032dd2) list_midp_form_item_pane_t1

0x5446,	// (0x00032de1) midp_ticker_pane_g1

0x5452,	// (0x00032ded) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x0003d110) midp_ticker_pane_g

0x545e,	// (0x00032df9) midp_ticker_pane_t1

0x6b92,	// (0x0003452d) midp_editing_number_pane_t1

0x6b64,	// (0x000344ff) midp_editing_number_pane

0x6b7f,	// (0x0003451a) midp_ticker_pane

0x6ac6,	// (0x00034461) ai_message_heading_pane

0x432b,	// (0x00031cc6) bg_popup_window_pane_cp14

0x6ace,	// (0x00034469) listscroll_ai_message_pane

0x6a50,	// (0x000343eb) ai_message_heading_pane_g1_ParamLimits

0x6a50,	// (0x000343eb) ai_message_heading_pane_g1

0x6a5c,	// (0x000343f7) ai_message_heading_pane_g2_ParamLimits

0x6a5c,	// (0x000343f7) ai_message_heading_pane_g2

0x6a68,	// (0x00034403) ai_message_heading_pane_g3_ParamLimits

0x6a68,	// (0x00034403) ai_message_heading_pane_g3

0x6a74,	// (0x0003440f) ai_message_heading_pane_g4_ParamLimits

0x6a74,	// (0x0003440f) ai_message_heading_pane_g4

0x0003,

0xf967,	// (0x0003d302) ai_message_heading_pane_g_ParamLimits

0xf967,	// (0x0003d302) ai_message_heading_pane_g

0x6a80,	// (0x0003441b) ai_message_heading_pane_t1_ParamLimits

0x6a80,	// (0x0003441b) ai_message_heading_pane_t1

0x6a9a,	// (0x00034435) ai_message_heading_pane_t2_ParamLimits

0x6a9a,	// (0x00034435) ai_message_heading_pane_t2

0x0001,

0xf970,	// (0x0003d30b) ai_message_heading_pane_t_ParamLimits

0xf970,	// (0x0003d30b) ai_message_heading_pane_t

0x6aac,	// (0x00034447) bg_popup_heading_pane_cp1_ParamLimits

0x6aac,	// (0x00034447) bg_popup_heading_pane_cp1

0x6a3e,	// (0x000343d9) list_ai_message_pane_ParamLimits

0x6a3e,	// (0x000343d9) list_ai_message_pane

0x4b06,	// (0x000324a1) scroll_pane_cp10

0x69da,	// (0x00034375) list_ai_message_pane_g1

0x69e2,	// (0x0003437d) list_ai_message_pane_g2

0x0001,

0xf944,	// (0x0003d2df) list_ai_message_pane_g

0x69ea,	// (0x00034385) list_ai_message_pane_t1_ParamLimits

0x69ea,	// (0x00034385) list_ai_message_pane_t1

0x69ff,	// (0x0003439a) list_ai_message_pane_t2_ParamLimits

0x69ff,	// (0x0003439a) list_ai_message_pane_t2

0x6a14,	// (0x000343af) list_ai_message_pane_t3_ParamLimits

0x6a14,	// (0x000343af) list_ai_message_pane_t3

0x6a29,	// (0x000343c4) list_ai_message_pane_t4_ParamLimits

0x6a29,	// (0x000343c4) list_ai_message_pane_t4

0x0003,

0xf949,	// (0x0003d2e4) list_ai_message_pane_t_ParamLimits

0xf949,	// (0x0003d2e4) list_ai_message_pane_t

0xc099,	// (0x00039a34) cell_ai_soft_ind_pane_ParamLimits

0xc099,	// (0x00039a34) cell_ai_soft_ind_pane

0x5470,	// (0x00032e0b) cell_ai_soft_ind_pane_g1_ParamLimits

0x5470,	// (0x00032e0b) cell_ai_soft_ind_pane_g1

0x432b,	// (0x00031cc6) grid_highlight_cp1

0x547d,	// (0x00032e18) text_secondary_cp56_ParamLimits

0x547d,	// (0x00032e18) text_secondary_cp56

0x69af,	// (0x0003434a) example_general_pane_ParamLimits

0x69af,	// (0x0003434a) example_general_pane

0x69bb,	// (0x00034356) example_parent_pane_g1_ParamLimits

0x69bb,	// (0x00034356) example_parent_pane_g1

0x69c7,	// (0x00034362) example_parent_pane_t1_ParamLimits

0x69c7,	// (0x00034362) example_parent_pane_t1

0xb992,	// (0x0003932d) popup_preview_text_window_ParamLimits

0xb992,	// (0x0003932d) popup_preview_text_window

0x534b,	// (0x00032ce6) list_single_pane_cp2_g4

0x45c1,	// (0x00031f5c) bg_popup_preview_window_pane_ParamLimits

0x45c1,	// (0x00031f5c) bg_popup_preview_window_pane

0x6738,	// (0x000340d3) popup_preview_text_window_t1_ParamLimits

0x6738,	// (0x000340d3) popup_preview_text_window_t1

0x6756,	// (0x000340f1) popup_preview_text_window_t2_ParamLimits

0x6756,	// (0x000340f1) popup_preview_text_window_t2

0x679f,	// (0x0003413a) popup_preview_text_window_t3_ParamLimits

0x679f,	// (0x0003413a) popup_preview_text_window_t3

0x67e4,	// (0x0003417f) popup_preview_text_window_t4_ParamLimits

0x67e4,	// (0x0003417f) popup_preview_text_window_t4

0x0004,

0xf918,	// (0x0003d2b3) popup_preview_text_window_t_ParamLimits

0xf918,	// (0x0003d2b3) popup_preview_text_window_t

0x6862,	// (0x000341fd) scroll_pane_cp11

0x5976,	// (0x00033311) bg_popup_preview_window_pane_g1

0x66f8,	// (0x00034093) bg_popup_preview_window_pane_g2

0x6700,	// (0x0003409b) bg_popup_preview_window_pane_g3

0x6708,	// (0x000340a3) bg_popup_preview_window_pane_g4

0x6710,	// (0x000340ab) bg_popup_preview_window_pane_g5

0x6718,	// (0x000340b3) bg_popup_preview_window_pane_g6

0x6720,	// (0x000340bb) bg_popup_preview_window_pane_g7

0x6728,	// (0x000340c3) bg_popup_preview_window_pane_g8

0x93b1,	// (0x00036d4c) aid_popup_width_pane

0xb970,	// (0x0003930b) popup_midp_note_alarm_window_ParamLimits

0xb970,	// (0x0003930b) popup_midp_note_alarm_window

0x49db,	// (0x00032376) data_form_pane_ParamLimits

0x8a52,	// (0x000363ed) form_field_data_pane_g1

0x8a5c,	// (0x000363f7) form_field_data_pane_t1_ParamLimits

0x49e7,	// (0x00032382) input_focus_pane_ParamLimits

0x49f5,	// (0x00032390) data_form_wide_pane_ParamLimits

0x8a76,	// (0x00036411) form_field_data_wide_pane_g1

0x8a82,	// (0x0003641d) form_field_data_wide_pane_t1_ParamLimits

0x4762,	// (0x000320fd) input_focus_pane_cp6_ParamLimits

0x9bf9,	// (0x00037594) input_popup_find_pane_g1_ParamLimits

0x9bf9,	// (0x00037594) input_popup_find_pane_g1

0x9d52,	// (0x000376ed) aid_navi_side_left_pane

0x9d67,	// (0x00037702) aid_navi_side_right_pane

0x618d,	// (0x00033b28) bg_popup_window_pane_cp30_ParamLimits

0x618d,	// (0x00033b28) bg_popup_window_pane_cp30

0x6219,	// (0x00033bb4) popup_midp_note_alarm_window_g1_ParamLimits

0x6219,	// (0x00033bb4) popup_midp_note_alarm_window_g1

0x6249,	// (0x00033be4) popup_midp_note_alarm_window_t1_ParamLimits

0x6249,	// (0x00033be4) popup_midp_note_alarm_window_t1

0x62ea,	// (0x00033c85) popup_midp_note_alarm_window_t2_ParamLimits

0x62ea,	// (0x00033c85) popup_midp_note_alarm_window_t2

0x6398,	// (0x00033d33) popup_midp_note_alarm_window_t3_ParamLimits

0x6398,	// (0x00033d33) popup_midp_note_alarm_window_t3

0x63c0,	// (0x00033d5b) popup_midp_note_alarm_window_t4_ParamLimits

0x63c0,	// (0x00033d5b) popup_midp_note_alarm_window_t4

0x63e0,	// (0x00033d7b) popup_midp_note_alarm_window_t5_ParamLimits

0x63e0,	// (0x00033d7b) popup_midp_note_alarm_window_t5

0x000a,

0xf8b5,	// (0x0003d250) popup_midp_note_alarm_window_t_ParamLimits

0xf8b5,	// (0x0003d250) popup_midp_note_alarm_window_t

0x64a4,	// (0x00033e3f) wait_bar_pane_cp1_ParamLimits

0x64a4,	// (0x00033e3f) wait_bar_pane_cp1

0x432b,	// (0x00031cc6) wait_anim_pane_copy1

0x432b,	// (0x00031cc6) wait_border_pane_copy1

0x5ea5,	// (0x00033840) wait_border_pane_g1_copy1

0x8a9c,	// (0x00036437) form_field_popup_pane_g1

0x8aa4,	// (0x0003643f) form_field_popup_pane_t1_ParamLimits

0x49e7,	// (0x00032382) input_focus_pane_cp7_ParamLimits

0x4a21,	// (0x000323bc) list_form_pane_ParamLimits

0x8abe,	// (0x00036459) form_field_popup_wide_pane_g1

0x8ac6,	// (0x00036461) form_field_popup_wide_pane_t1_ParamLimits

0x49e7,	// (0x00032382) input_focus_pane_cp8_ParamLimits

0x4a2d,	// (0x000323c8) list_form_wide_pane_ParamLimits

0x6c38,	// (0x000345d3) aid_size_cell_graphic_pane

0x8b52,	// (0x000364ed) data_form_pane_t1_ParamLimits

0x8daa,	// (0x00036745) data_form_wide_pane_t1_ParamLimits

0xbbdc,	// (0x00039577) bg_status_flat_pane

0x97a0,	// (0x0003713b) title_pane_t1_ParamLimits

0x4341,	// (0x00031cdc) title_pane_t2_ParamLimits

0x4367,	// (0x00031d02) title_pane_t3_ParamLimits

0xf56f,	// (0x0003cf0a) title_pane_t_ParamLimits

0x4e9d,	// (0x00032838) level_1_signal_ParamLimits

0x4eaa,	// (0x00032845) level_2_signal_ParamLimits

0x4eb7,	// (0x00032852) level_3_signal_ParamLimits

0x4ec4,	// (0x0003285f) level_4_signal_ParamLimits

0x4ed1,	// (0x0003286c) level_5_signal_ParamLimits

0x4ede,	// (0x00032879) level_6_signal_ParamLimits

0x4eeb,	// (0x00032886) level_7_signal_ParamLimits

0x4e9d,	// (0x00032838) level_1_battery_ParamLimits

0x4eaa,	// (0x00032845) level_2_battery_ParamLimits

0x4eb7,	// (0x00032852) level_3_battery_ParamLimits

0x4ec4,	// (0x0003285f) level_4_battery_ParamLimits

0x4ed1,	// (0x0003286c) level_5_battery_ParamLimits

0x4ede,	// (0x00032879) level_6_battery_ParamLimits

0x4eeb,	// (0x00032886) level_7_battery_ParamLimits

0x60b0,	// (0x00033a4b) bg_status_flat_pane_g1

0x60b8,	// (0x00033a53) bg_status_flat_pane_g2

0x60c0,	// (0x00033a5b) bg_status_flat_pane_g3

0x60c8,	// (0x00033a63) bg_status_flat_pane_g4

0x60d0,	// (0x00033a6b) bg_status_flat_pane_g5

0x60d8,	// (0x00033a73) bg_status_flat_pane_g6

0x60e0,	// (0x00033a7b) bg_status_flat_pane_g7

0x9810,	// (0x000371ab) tabs_3_active_pane_t1_ParamLimits

0x9810,	// (0x000371ab) tabs_3_passive_pane_t1_ParamLimits

0x982a,	// (0x000371c5) tabs_4_active_pane_t1_ParamLimits

0x982a,	// (0x000371c5) tabs_4_1_passive_pane_t1_ParamLimits

0x9c0f,	// (0x000375aa) tabs_2_active_pane_t1_ParamLimits

0x9c0f,	// (0x000375aa) tabs_2_passive_pane_t1_ParamLimits

0x5853,	// (0x000331ee) bg_active_tab_pane_cp4_ParamLimits

0x9c21,	// (0x000375bc) tabs_2_long_active_pane_t1_ParamLimits

0x9c34,	// (0x000375cf) bg_passive_tab_pane_cp4_ParamLimits

0xa514,	// (0x00037eaf) list_single_midp_graphic_pane_t1_ParamLimits

0x5853,	// (0x000331ee) bg_active_tab_pane_cp5_ParamLimits

0x9c40,	// (0x000375db) tabs_3_long_active_pane_t1_ParamLimits

0x9c34,	// (0x000375cf) bg_passive_tab_pane_cp5_ParamLimits

0xa514,	// (0x00037eaf) list_single_midp_graphic_pane_t1

0xbbdc,	// (0x00039577) bg_status_flat_pane_ParamLimits

0x583b,	// (0x000331d6) indicator_pane_cp2_ParamLimits

0x583b,	// (0x000331d6) indicator_pane_cp2

0xbd20,	// (0x000396bb) navi_pane_srt_ParamLimits

0xbd20,	// (0x000396bb) navi_pane_srt

0x5871,	// (0x0003320c) popup_clock_digital_analogue_window_cp1

0x43cb,	// (0x00031d66) indicator_pane_t1

0x541c,	// (0x00032db7) copy_highlight_pane

0x541c,	// (0x00032db7) cursor_graphics_pane

0x541c,	// (0x00032db7) graphic_within_text_pane

0x541c,	// (0x00032db7) link_highlight_pane

0x6825,	// (0x000341c0) popup_preview_text_window_t5_ParamLimits

0x6825,	// (0x000341c0) popup_preview_text_window_t5

0x5497,	// (0x00032e32) cursor_digital_pane

0x5497,	// (0x00032e32) cursor_primary_pane

0x54a8,	// (0x00032e43) cursor_primary_small_pane

0x54b0,	// (0x00032e4b) cursor_secondary_pane

0x54b8,	// (0x00032e53) cursor_title_pane

0x5497,	// (0x00032e32) link_highlight_digital_pane

0x549f,	// (0x00032e3a) link_highlight_primary_pane

0x54a8,	// (0x00032e43) link_highlight_primary_small_pane

0x54b0,	// (0x00032e4b) link_highlight_secondary_pane

0x54b8,	// (0x00032e53) link_highlight_title_pane

0x5497,	// (0x00032e32) copy_highlight_digital_pane

0x5497,	// (0x00032e32) copy_highlight_primary_pane

0x54a8,	// (0x00032e43) copy_highlight_primary_small_pane

0x54b0,	// (0x00032e4b) copy_highlight_secondary_pane

0x54b8,	// (0x00032e53) copy_highlight_title_pane

0x54b0,	// (0x00032e4b) graphic_text_digital_pane

0x6130,	// (0x00033acb) graphic_text_primary_pane

0x6139,	// (0x00033ad4) graphic_text_primary_small_pane

0x54a8,	// (0x00032e43) graphic_text_secondary_pane

0x5497,	// (0x00032e32) graphic_text_title_pane

0xa286,	// (0x00037c21) cursor_primary_pane_g1

0x6122,	// (0x00033abd) cursor_text_primary_t1

0xbfaf,	// (0x0003994a) cursor_primary_small_pane_g1

0x6114,	// (0x00033aaf) cursor_text_primary_small_t1

0xbfa5,	// (0x00039940) cursor_primary_small_pane_g1_copy1

0x6106,	// (0x00033aa1) cursor_text_primary_small_t1_copy1

0x60f8,	// (0x00033a93) cursor_text_title_t1

0xbf9b,	// (0x00039936) cursor_title_pane_g1

0xa286,	// (0x00037c21) cursor_digital_pane_g1

0x54c0,	// (0x00032e5b) cursor_text_digital_t1

0x6099,	// (0x00033a34) link_highlight_primary_pane_g1

0x60a1,	// (0x00033a3c) link_highlight_primary_pane_t1

0x54ce,	// (0x00032e69) link_highlight_primary_small_pane_g1

0x54d6,	// (0x00032e71) link_highlight_primary_small_pane_t1

0x54ce,	// (0x00032e69) link_highlight_secondary_pane_g1

0x54e5,	// (0x00032e80) link_highlight_secondary_pane_t1

0x600d,	// (0x000339a8) link_highlight_title_pane_g1

0x6015,	// (0x000339b0) link_highlight_title_pane_t1

0x5ff6,	// (0x00033991) link_highlight_digital_pane_g1

0x5ffe,	// (0x00033999) link_highlight_digital_pane_t1

0x5eea,	// (0x00033885) copy_highlight_primary_pane_g1

0x5ef2,	// (0x0003388d) copy_highlight_primary_pane_t1

0x5ec4,	// (0x0003385f) copy_highlight_primary_small_pane_g1

0x5edb,	// (0x00033876) copy_highlight_primary_small_pane_t1

0x54f4,	// (0x00032e8f) copy_highlight_secondary_pane_g1

0x54fc,	// (0x00032e97) copy_highlight_secondary_pane_t1

0x5ec4,	// (0x0003385f) copy_highlight_title_pane_g1

0x5ecc,	// (0x00033867) copy_highlight_title_pane_t1

0x5eea,	// (0x00033885) copy_highlight_digital_pane_g1

0x6dc2,	// (0x0003475d) copy_highlight_digital_pane_t1

0x6d16,	// (0x000346b1) graphic_text_primary_pane_g1

0x6da6,	// (0x00034741) graphic_text_primary_pane_t1

0x6db4,	// (0x0003474f) graphic_text_primary_pane_t2

0x0001,

0xf9e4,	// (0x0003d37f) graphic_text_primary_pane_t

0x6d82,	// (0x0003471d) graphic_text_primary_small_pane_g1

0x6d8a,	// (0x00034725) graphic_text_primary_small_pane_t1

0x6d98,	// (0x00034733) graphic_text_primary_small_pane_t2

0x0001,

0xf9df,	// (0x0003d37a) graphic_text_primary_small_pane_t

0x6d5e,	// (0x000346f9) graphic_text_secondary_pane_g1

0x6d66,	// (0x00034701) graphic_text_secondary_pane_t1

0x6d74,	// (0x0003470f) graphic_text_secondary_pane_t2

0x0001,

0xf9da,	// (0x0003d375) graphic_text_secondary_pane_t

0x6d3a,	// (0x000346d5) graphic_text_title_pane_g1

0x6d42,	// (0x000346dd) graphic_text_title_pane_t1

0x6d50,	// (0x000346eb) graphic_text_title_pane_t2

0x0001,

0xf9d5,	// (0x0003d370) graphic_text_title_pane_t

0x6d16,	// (0x000346b1) graphic_text_digital_pane_g1

0x6d1e,	// (0x000346b9) graphic_text_digital_pane_t1

0x6d2c,	// (0x000346c7) graphic_text_digital_pane_t2

0x0001,

0xf9d0,	// (0x0003d36b) graphic_text_digital_pane_t

0x4387,	// (0x00031d22) navi_icon_pane_srt_ParamLimits

0x4387,	// (0x00031d22) navi_icon_pane_srt

0x432b,	// (0x00031cc6) navi_midp_pane_srt

0x432b,	// (0x00031cc6) navi_navi_pane_srt

0x4387,	// (0x00031d22) navi_text_pane_srt_ParamLimits

0x4387,	// (0x00031d22) navi_text_pane_srt

0x6ce1,	// (0x0003467c) navi_navi_icon_text_pane_srt

0x6cfb,	// (0x00034696) navi_navi_pane_srt_g1_ParamLimits

0x6cfb,	// (0x00034696) navi_navi_pane_srt_g1

0x6ce9,	// (0x00034684) navi_navi_pane_srt_g2_ParamLimits

0x6ce9,	// (0x00034684) navi_navi_pane_srt_g2

0x0001,

0xf9cb,	// (0x0003d366) navi_navi_pane_srt_g_ParamLimits

0xf9cb,	// (0x0003d366) navi_navi_pane_srt_g

0x6d0d,	// (0x000346a8) navi_navi_tabs_pane_srt

0x6ce1,	// (0x0003467c) navi_navi_text_pane_srt

0x6ce1,	// (0x0003467c) navi_navi_volume_pane_srt

0x6cd2,	// (0x0003466d) navi_navi_text_pane_srt_t1

0xa94a,	// (0x000382e5) navi_navi_volume_pane_srt_g1

0xa952,	// (0x000382ed) volume_small_pane_srt_ParamLimits

0xa952,	// (0x000382ed) volume_small_pane_srt

0xa290,	// (0x00037c2b) volume_small_pane_srt_g1_ParamLimits

0xa290,	// (0x00037c2b) volume_small_pane_srt_g1

0xa2a0,	// (0x00037c3b) volume_small_pane_srt_g2_ParamLimits

0xa2a0,	// (0x00037c3b) volume_small_pane_srt_g2

0xa2b1,	// (0x00037c4c) volume_small_pane_srt_g3_ParamLimits

0xa2b1,	// (0x00037c4c) volume_small_pane_srt_g3

0xa2c2,	// (0x00037c5d) volume_small_pane_srt_g4_ParamLimits

0xa2c2,	// (0x00037c5d) volume_small_pane_srt_g4

0xa2d3,	// (0x00037c6e) volume_small_pane_srt_g5_ParamLimits

0xa2d3,	// (0x00037c6e) volume_small_pane_srt_g5

0xa2e4,	// (0x00037c7f) volume_small_pane_srt_g6_ParamLimits

0xa2e4,	// (0x00037c7f) volume_small_pane_srt_g6

0xa2f5,	// (0x00037c90) volume_small_pane_srt_g7_ParamLimits

0xa2f5,	// (0x00037c90) volume_small_pane_srt_g7

0xa306,	// (0x00037ca1) volume_small_pane_srt_g8_ParamLimits

0xa306,	// (0x00037ca1) volume_small_pane_srt_g8

0xa317,	// (0x00037cb2) volume_small_pane_srt_g9_ParamLimits

0xa317,	// (0x00037cb2) volume_small_pane_srt_g9

0xa328,	// (0x00037cc3) volume_small_pane_srt_g10_ParamLimits

0xa328,	// (0x00037cc3) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x0003d115) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x0003d115) volume_small_pane_srt_g

0x466a,	// (0x00032005) query_popup_data_pane_cp2

0x6cb8,	// (0x00034653) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6cb8,	// (0x00034653) navi_navi_icon_text_pane_srt_t1

0x6130,	// (0x00033acb) navi_tabs_2_long_pane_srt

0x6130,	// (0x00033acb) navi_tabs_2_pane_srt

0x6130,	// (0x00033acb) navi_tabs_3_long_pane_srt

0x6130,	// (0x00033acb) navi_tabs_3_pane_srt

0x6130,	// (0x00033acb) navi_tabs_4_pane_srt

0xa92a,	// (0x000382c5) tabs_2_active_pane_srt_ParamLimits

0xa92a,	// (0x000382c5) tabs_2_active_pane_srt

0xa93a,	// (0x000382d5) tabs_2_passive_pane_srt_ParamLimits

0xa93a,	// (0x000382d5) tabs_2_passive_pane_srt

0x4b3e,	// (0x000324d9) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4b3e,	// (0x000324d9) bg_passive_tab_pane_cp1_srt

0x6c9f,	// (0x0003463a) bg_passive_tab_pane_g1_cp1_srt

0x50c5,	// (0x00032a60) bg_passive_tab_pane_g2_cp1_srt

0x6c96,	// (0x00034631) bg_passive_tab_pane_g3_cp1_srt

0x4387,	// (0x00031d22) bg_active_tab_pane_cp1_srt_ParamLimits

0x4387,	// (0x00031d22) bg_active_tab_pane_cp1_srt

0x6ca8,	// (0x00034643) tabs_2_active_pane_srt_g1

0xc2e2,	// (0x00039c7d) tabs_2_active_pane_srt_t1_ParamLimits

0xc2e2,	// (0x00039c7d) tabs_2_active_pane_srt_t1

0x6c9f,	// (0x0003463a) bg_active_tab_pane_g1_cp1_srt

0x50c5,	// (0x00032a60) bg_active_tab_pane_g2_cp1_srt

0x6c96,	// (0x00034631) bg_active_tab_pane_g3_cp1_srt

0xa8f7,	// (0x00038292) tabs_3_active_pane_srt_ParamLimits

0xa8f7,	// (0x00038292) tabs_3_active_pane_srt

0xa908,	// (0x000382a3) tabs_3_passive_pane_cp_srt_ParamLimits

0xa908,	// (0x000382a3) tabs_3_passive_pane_cp_srt

0xa919,	// (0x000382b4) tabs_3_passive_pane_srt_ParamLimits

0xa919,	// (0x000382b4) tabs_3_passive_pane_srt

0x4b3e,	// (0x000324d9) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4b3e,	// (0x000324d9) bg_passive_tab_pane_cp2_srt

0x5514,	// (0x00032eaf) bg_passive_tab_pane_g1_cp2_srt

0x50c5,	// (0x00032a60) bg_passive_tab_pane_g2_cp2_srt

0x550b,	// (0x00032ea6) bg_passive_tab_pane_g3_cp2_srt

0x4387,	// (0x00031d22) bg_active_tab_pane_cp2_srt_ParamLimits

0x4387,	// (0x00031d22) bg_active_tab_pane_cp2_srt

0x6c8e,	// (0x00034629) tabs_3_active_pane_srt_g1

0xc2d0,	// (0x00039c6b) tabs_3_active_pane_srt_t1_ParamLimits

0xc2d0,	// (0x00039c6b) tabs_3_active_pane_srt_t1

0x5514,	// (0x00032eaf) bg_active_tab_pane_g1_cp2_srt

0x50c5,	// (0x00032a60) bg_active_tab_pane_g2_cp2_srt

0x550b,	// (0x00032ea6) bg_active_tab_pane_g3_cp2_srt

0xa8af,	// (0x0003824a) tabs_4_active_pane_srt_ParamLimits

0xa8af,	// (0x0003824a) tabs_4_active_pane_srt

0xa8c1,	// (0x0003825c) tabs_4_passive_pane_cp2_srt_ParamLimits

0xa8c1,	// (0x0003825c) tabs_4_passive_pane_cp2_srt

0x5638,	// (0x00032fd3) aid_size_cell_toolbar

0x9c34,	// (0x000375cf) main_idle_act_pane_ParamLimits

0x5702,	// (0x0003309d) popup_large_graphic_colour_window_ParamLimits

0xbae4,	// (0x0003947f) popup_toolbar_window_ParamLimits

0xbae4,	// (0x0003947f) popup_toolbar_window

0x6bb5,	// (0x00034550) list_single_graphic_2heading_pane_ParamLimits

0x6bb5,	// (0x00034550) list_single_graphic_2heading_pane

0x4ce8,	// (0x00032683) aid_size_cell_apps_grid_lsc_pane

0x4cfa,	// (0x00032695) aid_size_cell_apps_grid_prt_pane

0x4b3e,	// (0x000324d9) bg_wml_button_pane_cp1_ParamLimits

0x4b3e,	// (0x000324d9) bg_wml_button_pane_cp1

0xbf28,	// (0x000398c3) form_midp_field_text_pane_t1_ParamLimits

0x5a66,	// (0x00033401) input_focus_pane_cp050_ParamLimits

0x5bae,	// (0x00033549) list_midp_form_text_pane_ParamLimits

0x5b8b,	// (0x00033526) input_focus_pane_cp051_ParamLimits

0x5b9f,	// (0x0003353a) list_midp_choice_pane_ParamLimits

0xbe76,	// (0x00039811) list_single_2graphic_pane_cp3_ParamLimits

0xbe76,	// (0x00039811) list_single_2graphic_pane_cp3

0xbea2,	// (0x0003983d) list_single_midp_graphic_pane_ParamLimits

0xbea2,	// (0x0003983d) list_single_midp_graphic_pane

0x8c85,	// (0x00036620) list_single_graphic_2heading_pane_g1_ParamLimits

0x8c85,	// (0x00036620) list_single_graphic_2heading_pane_g1

0x8c91,	// (0x0003662c) list_single_graphic_2heading_pane_g4_ParamLimits

0x8c91,	// (0x0003662c) list_single_graphic_2heading_pane_g4

0x8c9d,	// (0x00036638) list_single_graphic_2heading_pane_g5_ParamLimits

0x8c9d,	// (0x00036638) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x0003d168) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x0003d168) list_single_graphic_2heading_pane_g

0x8ca9,	// (0x00036644) list_single_graphic_2heading_pane_t1_ParamLimits

0x8ca9,	// (0x00036644) list_single_graphic_2heading_pane_t1

0x8cbd,	// (0x00036658) list_single_graphic_2heading_pane_t2_ParamLimits

0x8cbd,	// (0x00036658) list_single_graphic_2heading_pane_t2

0x8cd7,	// (0x00036672) list_single_graphic_2heading_pane_t3_ParamLimits

0x8cd7,	// (0x00036672) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x0003d16f) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x0003d16f) list_single_graphic_2heading_pane_t

0x58b4,	// (0x0003324f) bg_popup_sub_pane_cp2

0x58de,	// (0x00033279) grid_toobar_pane

0xa499,	// (0x00037e34) cell_toolbar_pane_ParamLimits

0xa499,	// (0x00037e34) cell_toolbar_pane

0x591a,	// (0x000332b5) cell_toolbar_pane_g1_ParamLimits

0x591a,	// (0x000332b5) cell_toolbar_pane_g1

0x592e,	// (0x000332c9) cell_toolbar_pane_g2_ParamLimits

0x592e,	// (0x000332c9) cell_toolbar_pane_g2

0x0001,

0xf7e2,	// (0x0003d17d) cell_toolbar_pane_g_ParamLimits

0xf7e2,	// (0x0003d17d) cell_toolbar_pane_g

0x5950,	// (0x000332eb) grid_highlight_pane_cp2_ParamLimits

0x5950,	// (0x000332eb) grid_highlight_pane_cp2

0x596a,	// (0x00033305) toolbar_button_pane

0x5976,	// (0x00033311) toolbar_button_pane_g1

0x5986,	// (0x00033321) toolbar_button_pane_g2

0x597e,	// (0x00033319) toolbar_button_pane_g3

0x5996,	// (0x00033331) toolbar_button_pane_g4

0x598e,	// (0x00033329) toolbar_button_pane_g5

0x599e,	// (0x00033339) toolbar_button_pane_g6

0x59a6,	// (0x00033341) toolbar_button_pane_g7

0x59b6,	// (0x00033351) toolbar_button_pane_g8

0x59ae,	// (0x00033349) toolbar_button_pane_g9

0x0009,

0xf7e7,	// (0x0003d182) toolbar_button_pane_g

0xa4d1,	// (0x00037e6c) list_single_2graphic_pane_g1_cp3_ParamLimits

0xa4d1,	// (0x00037e6c) list_single_2graphic_pane_g1_cp3

0xa4dd,	// (0x00037e78) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa4dd,	// (0x00037e78) list_single_2graphic_pane_g2_cp3

0x5248,	// (0x00032be3) list_single_2graphic_pane_g3_cp3

0xa4ee,	// (0x00037e89) list_single_2graphic_pane_g4_cp3_ParamLimits

0xa4ee,	// (0x00037e89) list_single_2graphic_pane_g4_cp3

0xa4fa,	// (0x00037e95) list_single_2graphic_pane_t1_cp3_ParamLimits

0xa4fa,	// (0x00037e95) list_single_2graphic_pane_t1_cp3

0x523c,	// (0x00032bd7) list_single_midp_graphic_pane_g2_ParamLimits

0x523c,	// (0x00032bd7) list_single_midp_graphic_pane_g2

0x8c6d,	// (0x00036608) aid_zoom_text_primary

0x8c75,	// (0x00036610) aid_zoom_text_secondary

0x55c8,	// (0x00032f63) status_small_pane_g7_ParamLimits

0x55c8,	// (0x00032f63) status_small_pane_g7

0x55eb,	// (0x00032f86) status_small_pane_t1_ParamLimits

0x9783,	// (0x0003711e) title_pane_g2

0x0003,

0xf566,	// (0x0003cf01) title_pane_g

0x99dd,	// (0x00037378) aid_size_cell_colour_1_pane_ParamLimits

0x99dd,	// (0x00037378) aid_size_cell_colour_1_pane

0x99f1,	// (0x0003738c) aid_size_cell_colour_2_pane_ParamLimits

0x99f1,	// (0x0003738c) aid_size_cell_colour_2_pane

0x9a05,	// (0x000373a0) aid_size_cell_colour_3_pane_ParamLimits

0x9a05,	// (0x000373a0) aid_size_cell_colour_3_pane

0x9a19,	// (0x000373b4) aid_size_cell_colour_4_pane_ParamLimits

0x9a19,	// (0x000373b4) aid_size_cell_colour_4_pane

0x9c8e,	// (0x00037629) title_pane_stacon_g1_ParamLimits

0x9c8e,	// (0x00037629) title_pane_stacon_g1

0x5f49,	// (0x000338e4) popup_note_wait_window_g3_ParamLimits

0x5f49,	// (0x000338e4) popup_note_wait_window_g3

0x5fbf,	// (0x0003395a) popup_note_wait_window_t5_ParamLimits

0x5fbf,	// (0x0003395a) popup_note_wait_window_t5

0x432b,	// (0x00031cc6) main_feb_china_hwr_fs_writing_pane

0xb70d,	// (0x000390a8) popup_feb_china_hwr_fs_window_ParamLimits

0xb70d,	// (0x000390a8) popup_feb_china_hwr_fs_window

0xa52a,	// (0x00037ec5) aid_size_cell_hwr_fs_ParamLimits

0xa52a,	// (0x00037ec5) aid_size_cell_hwr_fs

0x5a66,	// (0x00033401) bg_popup_sub_pane_cp3_ParamLimits

0x5a66,	// (0x00033401) bg_popup_sub_pane_cp3

0xa53f,	// (0x00037eda) grid_hwr_fs_pane_ParamLimits

0xa53f,	// (0x00037eda) grid_hwr_fs_pane

0xa557,	// (0x00037ef2) linegrid_hwr_fs_pane_ParamLimits

0xa557,	// (0x00037ef2) linegrid_hwr_fs_pane

0xa567,	// (0x00037f02) cell_hwr_fs_pane_ParamLimits

0xa567,	// (0x00037f02) cell_hwr_fs_pane

0x5a72,	// (0x0003340d) linegrid_hwr_fs_pane_g1_ParamLimits

0x5a72,	// (0x0003340d) linegrid_hwr_fs_pane_g1

0xbe4a,	// (0x000397e5) linegrid_hwr_fs_pane_g2_ParamLimits

0xbe4a,	// (0x000397e5) linegrid_hwr_fs_pane_g2

0x5a7e,	// (0x00033419) linegrid_hwr_fs_pane_g3_ParamLimits

0x5a7e,	// (0x00033419) linegrid_hwr_fs_pane_g3

0xa589,	// (0x00037f24) linegrid_hwr_fs_pane_g4_ParamLimits

0xa589,	// (0x00037f24) linegrid_hwr_fs_pane_g4

0xa5a3,	// (0x00037f3e) linegrid_hwr_fs_pane_g5_ParamLimits

0xa5a3,	// (0x00037f3e) linegrid_hwr_fs_pane_g5

0x0004,

0xf812,	// (0x0003d1ad) linegrid_hwr_fs_pane_g_ParamLimits

0xf812,	// (0x0003d1ad) linegrid_hwr_fs_pane_g

0x5a8a,	// (0x00033425) cell_hwr_fs_pane_g1_ParamLimits

0x5a8a,	// (0x00033425) cell_hwr_fs_pane_g1

0x5882,	// (0x0003321d) cell_hwr_fs_pane_g2_ParamLimits

0x5882,	// (0x0003321d) cell_hwr_fs_pane_g2

0xbe5c,	// (0x000397f7) cell_hwr_fs_pane_g3_ParamLimits

0xbe5c,	// (0x000397f7) cell_hwr_fs_pane_g3

0xbe69,	// (0x00039804) cell_hwr_fs_pane_g4_ParamLimits

0xbe69,	// (0x00039804) cell_hwr_fs_pane_g4

0x0003,

0xf81d,	// (0x0003d1b8) cell_hwr_fs_pane_g_ParamLimits

0xf81d,	// (0x0003d1b8) cell_hwr_fs_pane_g

0xa5b9,	// (0x00037f54) cell_hwr_fs_pane_t1

0x432b,	// (0x00031cc6) grid_highlight_pane_cp6

0x432b,	// (0x00031cc6) main_idle_act2_pane

0x4aed,	// (0x00032488) aid_inside_area_popup_secondary

0xbfcf,	// (0x0003996a) aid_inside_area_window_primary_ParamLimits

0xbfcf,	// (0x0003996a) aid_inside_area_window_primary

0x6dd1,	// (0x0003476c) ai2_news_ticker_pane

0x6dd9,	// (0x00034774) aid_size_cell_ai1_link_ParamLimits

0x6dd9,	// (0x00034774) aid_size_cell_ai1_link

0x6df3,	// (0x0003478e) popup_ai2_data_window_ParamLimits

0x6df3,	// (0x0003478e) popup_ai2_data_window

0x6e07,	// (0x000347a2) popup_ai2_link_window_ParamLimits

0x6e07,	// (0x000347a2) popup_ai2_link_window

0x5a66,	// (0x00033401) bg_popup_sub_pane_cp4_ParamLimits

0x5a66,	// (0x00033401) bg_popup_sub_pane_cp4

0x6e1b,	// (0x000347b6) grid_ai2_link_pane_ParamLimits

0x6e1b,	// (0x000347b6) grid_ai2_link_pane

0x6e32,	// (0x000347cd) popup_ai2_link_window_g1_ParamLimits

0x6e32,	// (0x000347cd) popup_ai2_link_window_g1

0x6e3e,	// (0x000347d9) popup_ai2_link_window_g2_ParamLimits

0x6e3e,	// (0x000347d9) popup_ai2_link_window_g2

0x0001,

0xf9e9,	// (0x0003d384) popup_ai2_link_window_g_ParamLimits

0xf9e9,	// (0x0003d384) popup_ai2_link_window_g

0x6e4d,	// (0x000347e8) ai2_mp_button_pane

0x6e55,	// (0x000347f0) ai2_mp_volume_pane

0x5b8b,	// (0x00033526) bg_popup_sub_pane_cp5_ParamLimits

0x5b8b,	// (0x00033526) bg_popup_sub_pane_cp5

0x6e5d,	// (0x000347f8) heading_ai2_gene_pane_ParamLimits

0x6e5d,	// (0x000347f8) heading_ai2_gene_pane

0x6e69,	// (0x00034804) list_ai2_gene_pane_ParamLimits

0x6e69,	// (0x00034804) list_ai2_gene_pane

0x6eb1,	// (0x0003484c) cell_ai2_link_pane_ParamLimits

0x6eb1,	// (0x0003484c) cell_ai2_link_pane

0x6ec7,	// (0x00034862) cell_ai2_link_pane_g1

0x432b,	// (0x00031cc6) grid_highlight_pane_cp7

0xa967,	// (0x00038302) ai2_mp_volume_pane_g1

0x6fa0,	// (0x0003493b) ai2_mp_volume_pane_g2

0x6f0d,	// (0x000348a8) list_ai2_gene_pane_t1

0x6f98,	// (0x00034933) ai2_mp_volume_pane_g3

0x0002,

0xfa02,	// (0x0003d39d) ai2_mp_volume_pane_g

0xa96f,	// (0x0003830a) volume_small_pane_cp3

0x6fa8,	// (0x00034943) aid_size_cell_ai2_button

0x6fb0,	// (0x0003494b) grid_ai2_button_pane

0x6fb9,	// (0x00034954) cell_ai2_button_pane_ParamLimits

0x6fb9,	// (0x00034954) cell_ai2_button_pane

0x4321,	// (0x00031cbc) cell_ai2_button_pane_g1

0x432b,	// (0x00031cc6) grid_highlight_pane_cp8

0x6f58,	// (0x000348f3) ai2_gene_pane_t1_ParamLimits

0x6f58,	// (0x000348f3) ai2_gene_pane_t1

0xb6a9,	// (0x00039044) aid_height_parent_landscape

0xc0d4,	// (0x00039a6f) aid_height_set_list

0x6207,	// (0x00033ba2) aid_size_parent

0x6c38,	// (0x000345d3) aid_size_cell_graphic_pane_ParamLimits

0x6e79,	// (0x00034814) popup_ai2_data_window_g1_ParamLimits

0x6e79,	// (0x00034814) popup_ai2_data_window_g1

0x6e85,	// (0x00034820) ai2_news_ticker_pane_g1

0x6e8d,	// (0x00034828) ai2_news_ticker_pane_g2

0x0001,

0xf9ee,	// (0x0003d389) ai2_news_ticker_pane_g

0x6e95,	// (0x00034830) ai2_news_ticker_pane_t1

0x6ea3,	// (0x0003483e) ai2_news_ticker_pane_t2

0x0001,

0xf9f3,	// (0x0003d38e) ai2_news_ticker_pane_t

0x6ed0,	// (0x0003486b) heading_ai2_gene_pane_g1

0x6ed8,	// (0x00034873) heading_ai2_gene_pane_t1_ParamLimits

0x6ed8,	// (0x00034873) heading_ai2_gene_pane_t1

0x6eed,	// (0x00034888) list_highlight_pane_cp6

0x6ef5,	// (0x00034890) ai2_gene_pane_ParamLimits

0x6ef5,	// (0x00034890) ai2_gene_pane

0x6f1b,	// (0x000348b6) list_ai2_gene_pane_t2

0x0001,

0xf9f8,	// (0x0003d393) list_ai2_gene_pane_t

0x6f29,	// (0x000348c4) list_highlight_pane_cp8_ParamLimits

0x6f29,	// (0x000348c4) list_highlight_pane_cp8

0x6f3a,	// (0x000348d5) ai2_gene_pane_g1_ParamLimits

0x6f3a,	// (0x000348d5) ai2_gene_pane_g1

0x6f4c,	// (0x000348e7) ai2_gene_pane_g2_ParamLimits

0x6f4c,	// (0x000348e7) ai2_gene_pane_g2

0x0001,

0xf9fd,	// (0x0003d398) ai2_gene_pane_g_ParamLimits

0xf9fd,	// (0x0003d398) ai2_gene_pane_g

0x497d,	// (0x00032318) scroll_pane_cp12

0xa43c,	// (0x00037dd7) control_pane_t3_ParamLimits

0xa43c,	// (0x00037dd7) control_pane_t3

0x55dc,	// (0x00032f77) status_small_pane_g8_ParamLimits

0x55dc,	// (0x00032f77) status_small_pane_g8

0xb797,	// (0x00039132) popup_find_window_ParamLimits

0xb984,	// (0x0003931f) popup_note_image_window_ParamLimits

0x8cef,	// (0x0003668a) list_double2_graphic_pane_vc_g1_ParamLimits

0x8cef,	// (0x0003668a) list_double2_graphic_pane_vc_g1

0x9b03,	// (0x0003749e) list_double2_graphic_pane_vc_g2_ParamLimits

0x9b03,	// (0x0003749e) list_double2_graphic_pane_vc_g2

0x9b0f,	// (0x000374aa) list_double2_graphic_pane_vc_g3_ParamLimits

0x9b0f,	// (0x000374aa) list_double2_graphic_pane_vc_g3

0x0002,

0xf7db,	// (0x0003d176) list_double2_graphic_pane_vc_g_ParamLimits

0xf7db,	// (0x0003d176) list_double2_graphic_pane_vc_g

0x8cfb,	// (0x00036696) list_double2_graphic_pane_vc_t1_ParamLimits

0x8cfb,	// (0x00036696) list_double2_graphic_pane_vc_t1

0x9b03,	// (0x0003749e) list_single_heading_pane_vc_g1_ParamLimits

0x9b03,	// (0x0003749e) list_single_heading_pane_vc_g1

0x9b0f,	// (0x000374aa) list_single_heading_pane_vc_g2_ParamLimits

0x9b0f,	// (0x000374aa) list_single_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0003d197) list_single_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0003d197) list_single_heading_pane_vc_g

0x8d11,	// (0x000366ac) list_single_heading_pane_vc_t1_ParamLimits

0x8d11,	// (0x000366ac) list_single_heading_pane_vc_t1

0x8d27,	// (0x000366c2) list_single_heading_pane_vc_t2_ParamLimits

0x8d27,	// (0x000366c2) list_single_heading_pane_vc_t2

0x0001,

0xf801,	// (0x0003d19c) list_single_heading_pane_vc_t_ParamLimits

0xf801,	// (0x0003d19c) list_single_heading_pane_vc_t

0x59be,	// (0x00033359) list_setting_number_pane_vc_g1_ParamLimits

0x59be,	// (0x00033359) list_setting_number_pane_vc_g1

0x59ca,	// (0x00033365) list_setting_number_pane_vc_g2_ParamLimits

0x59ca,	// (0x00033365) list_setting_number_pane_vc_g2

0x0001,

0xf806,	// (0x0003d1a1) list_setting_number_pane_vc_g_ParamLimits

0xf806,	// (0x0003d1a1) list_setting_number_pane_vc_g

0x59d6,	// (0x00033371) list_setting_number_pane_vc_t1_ParamLimits

0x59d6,	// (0x00033371) list_setting_number_pane_vc_t1

0x59ea,	// (0x00033385) list_setting_number_pane_vc_t2_ParamLimits

0x59ea,	// (0x00033385) list_setting_number_pane_vc_t2

0x5a04,	// (0x0003339f) list_setting_number_pane_vc_t3_ParamLimits

0x5a04,	// (0x0003339f) list_setting_number_pane_vc_t3

0x0002,

0xf80b,	// (0x0003d1a6) list_setting_number_pane_vc_t_ParamLimits

0xf80b,	// (0x0003d1a6) list_setting_number_pane_vc_t

0x5a2a,	// (0x000333c5) set_value_pane_vc_ParamLimits

0x5a2a,	// (0x000333c5) set_value_pane_vc

0x6bb5,	// (0x00034550) list_double2_graphic_pane_vc_ParamLimits

0x6bb5,	// (0x00034550) list_double2_graphic_pane_vc

0x6bb5,	// (0x00034550) list_double2_large_graphic_pane_vc_ParamLimits

0x6bb5,	// (0x00034550) list_double2_large_graphic_pane_vc

0x6bb5,	// (0x00034550) list_double2_pane_vc_ParamLimits

0x6bb5,	// (0x00034550) list_double2_pane_vc

0x6bb5,	// (0x00034550) list_double_graphic_heading_pane_vc_ParamLimits

0x6bb5,	// (0x00034550) list_double_graphic_heading_pane_vc

0x6bb5,	// (0x00034550) list_double_graphic_pane_vc_ParamLimits

0x6bb5,	// (0x00034550) list_double_graphic_pane_vc

0x6bb5,	// (0x00034550) list_double_heading_pane_vc_ParamLimits

0x6bb5,	// (0x00034550) list_double_heading_pane_vc

0x6bb5,	// (0x00034550) list_double_large_graphic_pane_vc_ParamLimits

0x6bb5,	// (0x00034550) list_double_large_graphic_pane_vc

0x6bb5,	// (0x00034550) list_double_number_pane_vc_ParamLimits

0x6bb5,	// (0x00034550) list_double_number_pane_vc

0x6bb5,	// (0x00034550) list_double_pane_vc_ParamLimits

0x6bb5,	// (0x00034550) list_double_pane_vc

0x6bb5,	// (0x00034550) list_double_time_pane_vc_ParamLimits

0x6bb5,	// (0x00034550) list_double_time_pane_vc

0x6bb5,	// (0x00034550) list_setting_number_pane_vc_ParamLimits

0x6bb5,	// (0x00034550) list_setting_number_pane_vc

0x6bb5,	// (0x00034550) list_setting_pane_vc_ParamLimits

0x6bb5,	// (0x00034550) list_setting_pane_vc

0x6bb5,	// (0x00034550) list_single_graphic_heading_pane_vc_ParamLimits

0x6bb5,	// (0x00034550) list_single_graphic_heading_pane_vc

0x6bb5,	// (0x00034550) list_single_heading_pane_vc_ParamLimits

0x6bb5,	// (0x00034550) list_single_heading_pane_vc

0xa818,	// (0x000381b3) list_single_number_heading_pane_vc_ParamLimits

0xa818,	// (0x000381b3) list_single_number_heading_pane_vc

0x8cef,	// (0x0003668a) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x8cef,	// (0x0003668a) list_double_graphic_heading_pane_vc_g1

0x9b03,	// (0x0003749e) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x9b03,	// (0x0003749e) list_double_graphic_heading_pane_vc_g2

0x9b0f,	// (0x000374aa) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x9b0f,	// (0x000374aa) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7db,	// (0x0003d176) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x0003d176) list_double_graphic_heading_pane_vc_g

0x8e2e,	// (0x000367c9) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x8e2e,	// (0x000367c9) list_double_graphic_heading_pane_vc_t1

0x8d11,	// (0x000366ac) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x8d11,	// (0x000366ac) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa09,	// (0x0003d3a4) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa09,	// (0x0003d3a4) list_double_graphic_heading_pane_vc_t

0x59be,	// (0x00033359) list_setting_pane_vc_g1_ParamLimits

0x59be,	// (0x00033359) list_setting_pane_vc_g1

0x59ca,	// (0x00033365) list_setting_pane_vc_g2_ParamLimits

0x59ca,	// (0x00033365) list_setting_pane_vc_g2

0x0001,

0xf806,	// (0x0003d1a1) list_setting_pane_vc_g_ParamLimits

0xf806,	// (0x0003d1a1) list_setting_pane_vc_g

0x71af,	// (0x00034b4a) list_setting_pane_vc_t1_ParamLimits

0x71af,	// (0x00034b4a) list_setting_pane_vc_t1

0x71c9,	// (0x00034b64) list_setting_pane_vc_t2_ParamLimits

0x71c9,	// (0x00034b64) list_setting_pane_vc_t2

0x0001,

0xfa4c,	// (0x0003d3e7) list_setting_pane_vc_t_ParamLimits

0xfa4c,	// (0x0003d3e7) list_setting_pane_vc_t

0x5a2a,	// (0x000333c5) set_value_pane_cp_vc_ParamLimits

0x5a2a,	// (0x000333c5) set_value_pane_cp_vc

0x9b03,	// (0x0003749e) list_single_number_heading_pane_vc_g1_ParamLimits

0x9b03,	// (0x0003749e) list_single_number_heading_pane_vc_g1

0x9b0f,	// (0x000374aa) list_single_number_heading_pane_vc_g2_ParamLimits

0x9b0f,	// (0x000374aa) list_single_number_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0003d197) list_single_number_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0003d197) list_single_number_heading_pane_vc_g

0x8d11,	// (0x000366ac) list_single_number_heading_pane_vc_t1_ParamLimits

0x8d11,	// (0x000366ac) list_single_number_heading_pane_vc_t1

0x8e42,	// (0x000367dd) list_single_number_heading_pane_vc_t2_ParamLimits

0x8e42,	// (0x000367dd) list_single_number_heading_pane_vc_t2

0x8e56,	// (0x000367f1) list_single_number_heading_pane_vc_t3_ParamLimits

0x8e56,	// (0x000367f1) list_single_number_heading_pane_vc_t3

0x0002,

0xfa51,	// (0x0003d3ec) list_single_number_heading_pane_vc_t_ParamLimits

0xfa51,	// (0x0003d3ec) list_single_number_heading_pane_vc_t

0x8cef,	// (0x0003668a) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x8cef,	// (0x0003668a) list_single_graphic_heading_pane_vc_g1

0x9b03,	// (0x0003749e) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x9b03,	// (0x0003749e) list_single_graphic_heading_pane_vc_g4

0x9b0f,	// (0x000374aa) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x9b0f,	// (0x000374aa) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7db,	// (0x0003d176) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x0003d176) list_single_graphic_heading_pane_vc_g

0x8d11,	// (0x000366ac) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x8d11,	// (0x000366ac) list_single_graphic_heading_pane_vc_t1

0x8e68,	// (0x00036803) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x8e68,	// (0x00036803) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa58,	// (0x0003d3f3) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa58,	// (0x0003d3f3) list_single_graphic_heading_pane_vc_t

0x9b03,	// (0x0003749e) list_double2_pane_vc_g1_ParamLimits

0x9b03,	// (0x0003749e) list_double2_pane_vc_g1

0x9b0f,	// (0x000374aa) list_double2_pane_vc_g2_ParamLimits

0x9b0f,	// (0x000374aa) list_double2_pane_vc_g2

0x0001,

0xf7fc,	// (0x0003d197) list_double2_pane_vc_g_ParamLimits

0xf7fc,	// (0x0003d197) list_double2_pane_vc_g

0x8e7c,	// (0x00036817) list_double2_pane_vc_t1_ParamLimits

0x8e7c,	// (0x00036817) list_double2_pane_vc_t1

0xa9c9,	// (0x00038364) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xa9c9,	// (0x00038364) list_double2_large_graphic_pane_vc_g1

0x9b03,	// (0x0003749e) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x9b03,	// (0x0003749e) list_double2_large_graphic_pane_vc_g2

0x9b0f,	// (0x000374aa) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x9b0f,	// (0x000374aa) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa5d,	// (0x0003d3f8) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa5d,	// (0x0003d3f8) list_double2_large_graphic_pane_vc_g

0x8e92,	// (0x0003682d) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x8e92,	// (0x0003682d) list_double2_large_graphic_pane_vc_t1

0x8ea8,	// (0x00036843) list_double_time_pane_vc_g1_ParamLimits

0x8ea8,	// (0x00036843) list_double_time_pane_vc_g1

0x8eb4,	// (0x0003684f) list_double_time_pane_vc_g2_ParamLimits

0x8eb4,	// (0x0003684f) list_double_time_pane_vc_g2

0x0001,

0xfa64,	// (0x0003d3ff) list_double_time_pane_vc_g_ParamLimits

0xfa64,	// (0x0003d3ff) list_double_time_pane_vc_g

0x8ec0,	// (0x0003685b) list_double_time_pane_vc_t1_ParamLimits

0x8ec0,	// (0x0003685b) list_double_time_pane_vc_t1

0x8ed9,	// (0x00036874) list_double_time_pane_vc_t2_ParamLimits

0x8ed9,	// (0x00036874) list_double_time_pane_vc_t2

0x8f19,	// (0x000368b4) list_double_time_pane_vc_t3_ParamLimits

0x8f19,	// (0x000368b4) list_double_time_pane_vc_t3

0x8f31,	// (0x000368cc) list_double_time_pane_vc_t4_ParamLimits

0x8f31,	// (0x000368cc) list_double_time_pane_vc_t4

0x0003,

0xfa69,	// (0x0003d404) list_double_time_pane_vc_t_ParamLimits

0xfa69,	// (0x0003d404) list_double_time_pane_vc_t

0x9b03,	// (0x0003749e) list_double_pane_vc_g1_ParamLimits

0x9b03,	// (0x0003749e) list_double_pane_vc_g1

0x9b0f,	// (0x000374aa) list_double_pane_vc_g2_ParamLimits

0x9b0f,	// (0x000374aa) list_double_pane_vc_g2

0x0001,

0xf7fc,	// (0x0003d197) list_double_pane_vc_g_ParamLimits

0xf7fc,	// (0x0003d197) list_double_pane_vc_g

0x8f45,	// (0x000368e0) list_double_pane_vc_t1_ParamLimits

0x8f45,	// (0x000368e0) list_double_pane_vc_t1

0x8f57,	// (0x000368f2) list_double_pane_vc_t2_ParamLimits

0x8f57,	// (0x000368f2) list_double_pane_vc_t2

0x0001,

0xfa72,	// (0x0003d40d) list_double_pane_vc_t_ParamLimits

0xfa72,	// (0x0003d40d) list_double_pane_vc_t

0x9b03,	// (0x0003749e) list_double_number_pane_vc_g1_ParamLimits

0x9b03,	// (0x0003749e) list_double_number_pane_vc_g1

0x9b0f,	// (0x000374aa) list_double_number_pane_vc_g2_ParamLimits

0x9b0f,	// (0x000374aa) list_double_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x0003d197) list_double_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x0003d197) list_double_number_pane_vc_g

0x8f6f,	// (0x0003690a) list_double_number_pane_vc_t1_ParamLimits

0x8f6f,	// (0x0003690a) list_double_number_pane_vc_t1

0x8f83,	// (0x0003691e) list_double_number_pane_vc_t2_ParamLimits

0x8f83,	// (0x0003691e) list_double_number_pane_vc_t2

0x8f57,	// (0x000368f2) list_double_number_pane_vc_t3_ParamLimits

0x8f57,	// (0x000368f2) list_double_number_pane_vc_t3

0x0002,

0xfa77,	// (0x0003d412) list_double_number_pane_vc_t_ParamLimits

0xfa77,	// (0x0003d412) list_double_number_pane_vc_t

0xa9d5,	// (0x00038370) list_double_large_graphic_pane_vc_g1_ParamLimits

0xa9d5,	// (0x00038370) list_double_large_graphic_pane_vc_g1

0xa9e1,	// (0x0003837c) list_double_large_graphic_pane_vc_g2_ParamLimits

0xa9e1,	// (0x0003837c) list_double_large_graphic_pane_vc_g2

0x9b0f,	// (0x000374aa) list_double_large_graphic_pane_vc_g3_ParamLimits

0x9b0f,	// (0x000374aa) list_double_large_graphic_pane_vc_g3

0x8f95,	// (0x00036930) list_double_large_graphic_pane_vc_g4_ParamLimits

0x8f95,	// (0x00036930) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa7e,	// (0x0003d419) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa7e,	// (0x0003d419) list_double_large_graphic_pane_vc_g

0x8fa1,	// (0x0003693c) list_double_large_graphic_pane_vc_t1_ParamLimits

0x8fa1,	// (0x0003693c) list_double_large_graphic_pane_vc_t1

0x8fb3,	// (0x0003694e) list_double_large_graphic_pane_vc_t2_ParamLimits

0x8fb3,	// (0x0003694e) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa87,	// (0x0003d422) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa87,	// (0x0003d422) list_double_large_graphic_pane_vc_t

0x9b03,	// (0x0003749e) list_double_heading_pane_vc_g1_ParamLimits

0x9b03,	// (0x0003749e) list_double_heading_pane_vc_g1

0x9b0f,	// (0x000374aa) list_double_heading_pane_vc_g2_ParamLimits

0x9b0f,	// (0x000374aa) list_double_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0003d197) list_double_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0003d197) list_double_heading_pane_vc_g

0x8fcc,	// (0x00036967) list_double_heading_pane_vc_t1_ParamLimits

0x8fcc,	// (0x00036967) list_double_heading_pane_vc_t1

0x8d11,	// (0x000366ac) list_double_heading_pane_vc_t2_ParamLimits

0x8d11,	// (0x000366ac) list_double_heading_pane_vc_t2

0x0001,

0xfa8c,	// (0x0003d427) list_double_heading_pane_vc_t_ParamLimits

0xfa8c,	// (0x0003d427) list_double_heading_pane_vc_t

0x8cef,	// (0x0003668a) list_double_graphic_pane_vc_g1_ParamLimits

0x8cef,	// (0x0003668a) list_double_graphic_pane_vc_g1

0x8fe0,	// (0x0003697b) list_double_graphic_pane_vc_g2_ParamLimits

0x8fe0,	// (0x0003697b) list_double_graphic_pane_vc_g2

0x8fef,	// (0x0003698a) list_double_graphic_pane_vc_g3_ParamLimits

0x8fef,	// (0x0003698a) list_double_graphic_pane_vc_g3

0x0002,

0xfa91,	// (0x0003d42c) list_double_graphic_pane_vc_g_ParamLimits

0xfa91,	// (0x0003d42c) list_double_graphic_pane_vc_g

0x8ffb,	// (0x00036996) list_double_graphic_pane_vc_t1_ParamLimits

0x8ffb,	// (0x00036996) list_double_graphic_pane_vc_t1

0x8f57,	// (0x000368f2) list_double_graphic_pane_vc_t2_ParamLimits

0x8f57,	// (0x000368f2) list_double_graphic_pane_vc_t2

0x0001,

0xfa98,	// (0x0003d433) list_double_graphic_pane_vc_t_ParamLimits

0xfa98,	// (0x0003d433) list_double_graphic_pane_vc_t

0x93bd,	// (0x00036d58) aid_size_cell_fastswap

0x93c5,	// (0x00036d60) aid_size_cell_touch_ParamLimits

0x93c5,	// (0x00036d60) aid_size_cell_touch

0x9620,	// (0x00036fbb) popup_fast_swap_wide_window_ParamLimits

0x9620,	// (0x00036fbb) popup_fast_swap_wide_window

0x9716,	// (0x000370b1) touch_pane_ParamLimits

0x9716,	// (0x000370b1) touch_pane

0x49d3,	// (0x0003236e) button_value_adjust_pane_cp2

0x89a8,	// (0x00036343) button_value_adjust_pane_cp4

0x89c8,	// (0x00036363) form_field_data_pane_cp2

0x89e7,	// (0x00036382) form_field_data_wide_pane_cp2

0x4d1f,	// (0x000326ba) bg_scroll_pane_ParamLimits

0x9e89,	// (0x00037824) scroll_handle_pane_ParamLimits

0x9e9d,	// (0x00037838) scroll_sc2_down_pane_ParamLimits

0x9e9d,	// (0x00037838) scroll_sc2_down_pane

0x4d50,	// (0x000326eb) scroll_sc2_up_pane_ParamLimits

0x4d50,	// (0x000326eb) scroll_sc2_up_pane

0xc42c,	// (0x00039dc7) grid_wheel_folder_pane_g1_ParamLimits

0xc42c,	// (0x00039dc7) grid_wheel_folder_pane_g1

0xa157,	// (0x00037af2) clock_nsta_pane_cp2_ParamLimits

0xa157,	// (0x00037af2) clock_nsta_pane_cp2

0x9c34,	// (0x000375cf) listscroll_midp_pane_ParamLimits

0xa1dd,	// (0x00037b78) midp_canvas_pane

0x5630,	// (0x00032fcb) nsta_clock_indic_pane

0x5668,	// (0x00033003) listscroll_form_pane_vc

0x5670,	// (0x0003300b) listscroll_set_pane_vc_ParamLimits

0x5670,	// (0x0003300b) listscroll_set_pane_vc

0xbbf8,	// (0x00039593) clock_nsta_pane

0xbc05,	// (0x000395a0) indicator_nsta_pane

0x58b4,	// (0x0003324f) bg_popup_sub_pane_cp2_ParamLimits

0x58c8,	// (0x00033263) find_pane_cp2_ParamLimits

0x58c8,	// (0x00033263) find_pane_cp2

0x58de,	// (0x00033279) grid_toobar_pane_ParamLimits

0x5a3a,	// (0x000333d5) list_form_gen_pane_vc_ParamLimits

0x5a3a,	// (0x000333d5) list_form_gen_pane_vc

0x5a50,	// (0x000333eb) scroll_pane_cp8_vc_ParamLimits

0x5a50,	// (0x000333eb) scroll_pane_cp8_vc

0x5aa0,	// (0x0003343b) data_form_wide_pane_vc_ParamLimits

0x5aa0,	// (0x0003343b) data_form_wide_pane_vc

0x5aac,	// (0x00033447) form_field_data_wide_pane_vc_g1

0x5ab4,	// (0x0003344f) form_field_data_wide_pane_vc_t1_ParamLimits

0x5ab4,	// (0x0003344f) form_field_data_wide_pane_vc_t1

0x49e7,	// (0x00032382) input_focus_pane_cp6_vc_ParamLimits

0x49e7,	// (0x00032382) input_focus_pane_cp6_vc

0xbf67,	// (0x00039902) list_midp_pane_ParamLimits

0xbf73,	// (0x0003990e) scroll_pane_cp16_ParamLimits

0xbf73,	// (0x0003990e) scroll_pane_cp16

0x5d23,	// (0x000336be) button_value_adjust_pane_ParamLimits

0x5d23,	// (0x000336be) button_value_adjust_pane

0xc0e5,	// (0x00039a80) button_value_adjust_pane_cp6_ParamLimits

0xc0e5,	// (0x00039a80) button_value_adjust_pane_cp6

0xc207,	// (0x00039ba2) settings_code_pane_cp_ParamLimits

0xc207,	// (0x00039ba2) settings_code_pane_cp

0x4321,	// (0x00031cbc) cell_touch_pane_g1

0x4321,	// (0x00031cbc) cell_touch_pane_g2

0x0001,

0xf720,	// (0x0003d0bb) cell_touch_pane_g

0xc2f4,	// (0x00039c8f) cell_touch_pane_cp_ParamLimits

0xc2f4,	// (0x00039c8f) cell_touch_pane_cp

0xc304,	// (0x00039c9f) cell_touch_pane_ParamLimits

0xc304,	// (0x00039c9f) cell_touch_pane

0x4321,	// (0x00031cbc) scroll_sc2_down_pane_g1

0x4321,	// (0x00031cbc) scroll_sc2_up_pane_g1

0x432b,	// (0x00031cc6) bg_set_opt_pane_cp4_vc

0x6fcb,	// (0x00034966) list_set_graphic_pane_vc_g1_ParamLimits

0x6fcb,	// (0x00034966) list_set_graphic_pane_vc_g1

0x6fd7,	// (0x00034972) list_set_graphic_pane_vc_g2_ParamLimits

0x6fd7,	// (0x00034972) list_set_graphic_pane_vc_g2

0x0001,

0xfa0e,	// (0x0003d3a9) list_set_graphic_pane_vc_g_ParamLimits

0xfa0e,	// (0x0003d3a9) list_set_graphic_pane_vc_g

0x6fe3,	// (0x0003497e) text_primary_small_cp13_vc_ParamLimits

0x6fe3,	// (0x0003497e) text_primary_small_cp13_vc

0x6ffb,	// (0x00034996) list_set_graphic_pane_vc_ParamLimits

0x6ffb,	// (0x00034996) list_set_graphic_pane_vc

0x432b,	// (0x00031cc6) input_focus_pane_cp2_vc

0x4321,	// (0x00031cbc) setting_code_pane_vc_g1

0x700f,	// (0x000349aa) setting_code_pane_vc_t1

0x701d,	// (0x000349b8) set_text_pane_vc_t1_ParamLimits

0x701d,	// (0x000349b8) set_text_pane_vc_t1

0x432b,	// (0x00031cc6) input_focus_pane_cp1_vc

0x703c,	// (0x000349d7) list_set_text_pane_vc

0x4321,	// (0x00031cbc) setting_text_pane_vc_g1

0x432b,	// (0x00031cc6) bg_set_opt_pane_cp2_vc

0x7046,	// (0x000349e1) setting_slider_graphic_pane_vc_g1

0x704e,	// (0x000349e9) setting_slider_graphic_pane_vc_t1

0x705c,	// (0x000349f7) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa13,	// (0x0003d3ae) setting_slider_graphic_pane_vc_t

0x706a,	// (0x00034a05) slider_set_pane_cp_vc

0x7072,	// (0x00034a0d) slider_set_pane_vc_g1

0x707b,	// (0x00034a16) slider_set_pane_vc_g2

0x0006,

0xfa18,	// (0x0003d3b3) slider_set_pane_vc_g

0x4a4e,	// (0x000323e9) set_opt_bg_pane_g1_copy1

0x4a56,	// (0x000323f1) set_opt_bg_pane_g2_copy1

0x70a7,	// (0x00034a42) set_opt_bg_pane_g3_copy1

0x4a66,	// (0x00032401) set_opt_bg_pane_g4_copy1

0x4a6e,	// (0x00032409) set_opt_bg_pane_g5_copy1

0x4a76,	// (0x00032411) set_opt_bg_pane_g6_copy1

0x70af,	// (0x00034a4a) set_opt_bg_pane_g7_copy1

0x70b9,	// (0x00034a54) set_opt_bg_pane_g8_copy1

0x70c1,	// (0x00034a5c) set_opt_bg_pane_g9_copy1

0x432b,	// (0x00031cc6) bg_set_opt_pane_cp_vc

0x70c9,	// (0x00034a64) setting_slider_pane_vc_t1

0x704e,	// (0x000349e9) setting_slider_pane_vc_t2

0x705c,	// (0x000349f7) setting_slider_pane_vc_t3

0x0002,

0xfa27,	// (0x0003d3c2) setting_slider_pane_vc_t

0x706a,	// (0x00034a05) slider_set_pane_vc

0xa5c7,	// (0x00037f62) volume_set_pane_vc_g1

0xa978,	// (0x00038313) volume_set_pane_vc_g2

0xa981,	// (0x0003831c) volume_set_pane_vc_g3

0xa98a,	// (0x00038325) volume_set_pane_vc_g4

0xa993,	// (0x0003832e) volume_set_pane_vc_g5

0xa99c,	// (0x00038337) volume_set_pane_vc_g6

0xa9a5,	// (0x00038340) volume_set_pane_vc_g7

0xa9ae,	// (0x00038349) volume_set_pane_vc_g8

0xa9b7,	// (0x00038352) volume_set_pane_vc_g9

0xa9c0,	// (0x0003835b) volume_set_pane_vc_g10

0x0009,

0xfa2e,	// (0x0003d3c9) volume_set_pane_vc_g

0x70d8,	// (0x00034a73) volume_set_pane_vc

0x70e0,	// (0x00034a7b) button_value_adjust_pane_cp1_vc

0x70ea,	// (0x00034a85) list_highlight_pane_cp2_vc

0x70f3,	// (0x00034a8e) list_set_pane_vc_ParamLimits

0x70f3,	// (0x00034a8e) list_set_pane_vc

0x7145,	// (0x00034ae0) main_pane_set_vc_t1_ParamLimits

0x7145,	// (0x00034ae0) main_pane_set_vc_t1

0x715a,	// (0x00034af5) main_pane_set_vc_t2_ParamLimits

0x715a,	// (0x00034af5) main_pane_set_vc_t2

0x716c,	// (0x00034b07) main_pane_set_vc_t3_ParamLimits

0x716c,	// (0x00034b07) main_pane_set_vc_t3

0x717e,	// (0x00034b19) main_pane_set_vc_t4_ParamLimits

0x717e,	// (0x00034b19) main_pane_set_vc_t4

0x0003,

0xfa43,	// (0x0003d3de) main_pane_set_vc_t_ParamLimits

0xfa43,	// (0x0003d3de) main_pane_set_vc_t

0x7190,	// (0x00034b2b) setting_code_pane_vc_ParamLimits

0x7190,	// (0x00034b2b) setting_code_pane_vc

0x719f,	// (0x00034b3a) setting_slider_graphic_pane_vc

0x719f,	// (0x00034b3a) setting_slider_pane_vc

0x719f,	// (0x00034b3a) setting_text_pane_vc

0x719f,	// (0x00034b3a) setting_volume_pane_vc

0x71a7,	// (0x00034b42) scroll_pane_cp121_vc

0x49c1,	// (0x0003235c) set_content_pane_vc

0x71df,	// (0x00034b7a) button_value_adjust_pane_g1

0x71e8,	// (0x00034b83) button_value_adjust_pane_g2

0x0001,

0xfa9d,	// (0x0003d438) button_value_adjust_pane_g

0x71f1,	// (0x00034b8c) form_field_slider_wide_pane_vc_t1_ParamLimits

0x71f1,	// (0x00034b8c) form_field_slider_wide_pane_vc_t1

0x7205,	// (0x00034ba0) form_field_slider_wide_pane_vc_t2_ParamLimits

0x7205,	// (0x00034ba0) form_field_slider_wide_pane_vc_t2

0x0001,

0xfaa2,	// (0x0003d43d) form_field_slider_wide_pane_vc_t_ParamLimits

0xfaa2,	// (0x0003d43d) form_field_slider_wide_pane_vc_t

0x4379,	// (0x00031d14) input_focus_pane_cp10_vc_ParamLimits

0x4379,	// (0x00031d14) input_focus_pane_cp10_vc

0x7217,	// (0x00034bb2) slider_cont_pane_cp1_vc_ParamLimits

0x7217,	// (0x00034bb2) slider_cont_pane_cp1_vc

0x7072,	// (0x00034a0d) slider_form_pane_g1_cp2

0x707b,	// (0x00034a16) slider_form_pane_g2_cp2

0x7230,	// (0x00034bcb) form_field_slider_pane_vc_t3

0x723e,	// (0x00034bd9) form_field_slider_pane_vc_t4

0x724c,	// (0x00034be7) slider_form_pane_vc_ParamLimits

0x724c,	// (0x00034be7) slider_form_pane_vc

0x7259,	// (0x00034bf4) form_field_slider_pane_vc_t1_ParamLimits

0x7259,	// (0x00034bf4) form_field_slider_pane_vc_t1

0x7205,	// (0x00034ba0) form_field_slider_pane_vc_t2_ParamLimits

0x7205,	// (0x00034ba0) form_field_slider_pane_vc_t2

0x0001,

0xfab2,	// (0x0003d44d) form_field_slider_pane_vc_t_ParamLimits

0xfab2,	// (0x0003d44d) form_field_slider_pane_vc_t

0x4379,	// (0x00031d14) input_focus_pane_cp9_vc_ParamLimits

0x4379,	// (0x00031d14) input_focus_pane_cp9_vc

0x7275,	// (0x00034c10) slider_cont_pane_vc_ParamLimits

0x7275,	// (0x00034c10) slider_cont_pane_vc

0x7287,	// (0x00034c22) list_form_graphic_pane_cp_vc_ParamLimits

0x7287,	// (0x00034c22) list_form_graphic_pane_cp_vc

0x5aac,	// (0x00033447) form_field_popup_wide_pane_vc_g1

0x729c,	// (0x00034c37) form_field_popup_wide_pane_vc_t1_ParamLimits

0x729c,	// (0x00034c37) form_field_popup_wide_pane_vc_t1

0x49e7,	// (0x00032382) input_focus_pane_cp8_vc_ParamLimits

0x49e7,	// (0x00032382) input_focus_pane_cp8_vc

0x72b3,	// (0x00034c4e) list_form_wide_pane_vc_ParamLimits

0x72b3,	// (0x00034c4e) list_form_wide_pane_vc

0x72bf,	// (0x00034c5a) list_form_graphic_pane_vc_g1

0x72c7,	// (0x00034c62) list_form_graphic_pane_vc_t1_ParamLimits

0x72c7,	// (0x00034c62) list_form_graphic_pane_vc_t1

0x4387,	// (0x00031d22) list_highlight_pane_cp5_vc_ParamLimits

0x4387,	// (0x00031d22) list_highlight_pane_cp5_vc

0x72e3,	// (0x00034c7e) list_form_graphic_pane_vc_ParamLimits

0x72e3,	// (0x00034c7e) list_form_graphic_pane_vc

0x5aac,	// (0x00033447) form_field_popup_pane_vc_g1

0x72f9,	// (0x00034c94) form_field_popup_pane_vc_t1_ParamLimits

0x72f9,	// (0x00034c94) form_field_popup_pane_vc_t1

0x49e7,	// (0x00032382) input_focus_pane_cp7_vc_ParamLimits

0x49e7,	// (0x00032382) input_focus_pane_cp7_vc

0x7310,	// (0x00034cab) list_form_pane_vc_ParamLimits

0x7310,	// (0x00034cab) list_form_pane_vc

0x731c,	// (0x00034cb7) data_form_pane_vc_t1_ParamLimits

0x731c,	// (0x00034cb7) data_form_pane_vc_t1

0x4a4e,	// (0x000323e9) input_focus_pane_vc_g1

0x4a56,	// (0x000323f1) input_focus_pane_vc_g2

0x4a5e,	// (0x000323f9) input_focus_pane_vc_g3

0x4a66,	// (0x00032401) input_focus_pane_vc_g4

0x4a6e,	// (0x00032409) input_focus_pane_vc_g5

0x4a76,	// (0x00032411) input_focus_pane_vc_g6

0x4a7e,	// (0x00032419) input_focus_pane_vc_g7

0x4a86,	// (0x00032421) input_focus_pane_vc_g8

0x4a8e,	// (0x00032429) input_focus_pane_vc_g9

0x4321,	// (0x00031cbc) input_focus_pane_vc_g10

0x0009,

0xf6a9,	// (0x0003d044) input_focus_pane_vc_g

0x5aa0,	// (0x0003343b) data_form_pane_vc_ParamLimits

0x5aa0,	// (0x0003343b) data_form_pane_vc

0x5aac,	// (0x00033447) form_field_data_pane_vc_g1

0x7337,	// (0x00034cd2) form_field_data_pane_vc_t1_ParamLimits

0x7337,	// (0x00034cd2) form_field_data_pane_vc_t1

0x49e7,	// (0x00032382) input_focus_pane_vc_ParamLimits

0x49e7,	// (0x00032382) input_focus_pane_vc

0x7351,	// (0x00034cec) button_value_adjust_pane_cp3_vc

0x7359,	// (0x00034cf4) button_value_adjust_pane_cp5_vc

0x7361,	// (0x00034cfc) form_field_data_pane_vc_ParamLimits

0x7361,	// (0x00034cfc) form_field_data_pane_vc

0x7378,	// (0x00034d13) form_field_data_pane_vc_cp2

0x7380,	// (0x00034d1b) form_field_data_wide_pane_vc_ParamLimits

0x7380,	// (0x00034d1b) form_field_data_wide_pane_vc

0x7396,	// (0x00034d31) form_field_data_wide_pane_vc_cp2

0x739e,	// (0x00034d39) form_field_popup_pane_vc_ParamLimits

0x739e,	// (0x00034d39) form_field_popup_pane_vc

0x73b5,	// (0x00034d50) form_field_popup_wide_pane_vc_ParamLimits

0x73b5,	// (0x00034d50) form_field_popup_wide_pane_vc

0x73cb,	// (0x00034d66) form_field_slider_pane_vc_ParamLimits

0x73cb,	// (0x00034d66) form_field_slider_pane_vc

0x73de,	// (0x00034d79) form_field_slider_wide_pane_vc_ParamLimits

0x73de,	// (0x00034d79) form_field_slider_wide_pane_vc

0xc316,	// (0x00039cb1) grid_touch_1_pane_ParamLimits

0xc316,	// (0x00039cb1) grid_touch_1_pane

0xc322,	// (0x00039cbd) grid_touch_2_pane_ParamLimits

0xc322,	// (0x00039cbd) grid_touch_2_pane

0x5622,	// (0x00032fbd) touch_pane_g1_ParamLimits

0x5622,	// (0x00032fbd) touch_pane_g1

0x73ff,	// (0x00034d9a) cell_app_pane_cp_wide_ParamLimits

0x73ff,	// (0x00034d9a) cell_app_pane_cp_wide

0x7410,	// (0x00034dab) grid_popup_fast_wide_pane_ParamLimits

0x7410,	// (0x00034dab) grid_popup_fast_wide_pane

0x7424,	// (0x00034dbf) scroll_pane_cp19_ParamLimits

0x7424,	// (0x00034dbf) scroll_pane_cp19

0x432b,	// (0x00031cc6) bg_popup_window_pane_cp20

0x7438,	// (0x00034dd3) listscroll_popup_fast_wide_pane

0x4387,	// (0x00031d22) grid_indicator_nsta_pane

0x7440,	// (0x00034ddb) clock_nsta_pane_g1

0x7449,	// (0x00034de4) clock_nsta_pane_t1

0xc33a,	// (0x00039cd5) cell_indicator_nsta_pane_ParamLimits

0xc33a,	// (0x00039cd5) cell_indicator_nsta_pane

0x73f1,	// (0x00034d8c) cell_indicator_nsta_pane_g1

0xc372,	// (0x00039d0d) cell_indicator_nsta_pane_g2

0x0001,

0xfabc,	// (0x0003d457) cell_indicator_nsta_pane_g

0x7465,	// (0x00034e00) clock_nsta_pane_cp

0x746d,	// (0x00034e08) indicator_nsta_pane_cp

0x7476,	// (0x00034e11) nsta_clock_indic_pane_g1

0x43c3,	// (0x00031d5e) grid_indicator_pane

0x4e42,	// (0x000327dd) scroll_pane_cp29

0xa0a6,	// (0x00037a41) indicator_nsta_pane_cp2_ParamLimits

0xa0a6,	// (0x00037a41) indicator_nsta_pane_cp2

0x4387,	// (0x00031d22) main_apps_wheel_pane

0x5bc8,	// (0x00033563) form_midp_field_text_pane_ParamLimits

0x5cf5,	// (0x00033690) scroll_bar_cp050_ParamLimits

0x74df,	// (0x00034e7a) cell_indicator_pane_ParamLimits

0x74df,	// (0x00034e7a) cell_indicator_pane

0x74fc,	// (0x00034e97) cell_indicator_pane_g1

0xc388,	// (0x00039d23) grid_wheel_folder_pane_ParamLimits

0xc388,	// (0x00039d23) grid_wheel_folder_pane

0xc39e,	// (0x00039d39) list_wheel_apps_pane_ParamLimits

0xc39e,	// (0x00039d39) list_wheel_apps_pane

0xc3af,	// (0x00039d4a) main_apps_wheel_pane_g1_ParamLimits

0xc3af,	// (0x00039d4a) main_apps_wheel_pane_g1

0xc3c3,	// (0x00039d5e) main_apps_wheel_pane_g2_ParamLimits

0xc3c3,	// (0x00039d5e) main_apps_wheel_pane_g2

0x0001,

0xfad8,	// (0x0003d473) main_apps_wheel_pane_g_ParamLimits

0xfad8,	// (0x0003d473) main_apps_wheel_pane_g

0xc3db,	// (0x00039d76) main_apps_wheel_pane_t1_ParamLimits

0xc3db,	// (0x00039d76) main_apps_wheel_pane_t1

0xc3fe,	// (0x00039d99) list_wheel_apps_pane_g1

0xc406,	// (0x00039da1) list_wheel_apps_pane_g2

0xc40e,	// (0x00039da9) list_wheel_apps_pane_g3

0xc418,	// (0x00039db3) list_wheel_apps_pane_g4

0xc422,	// (0x00039dbd) list_wheel_apps_pane_g5

0x0004,

0xfadd,	// (0x0003d478) list_wheel_apps_pane_g

0x529a,	// (0x00032c35) navi_icon_text_pane

0xbb3c,	// (0x000394d7) aid_fill_nsta

0x7506,	// (0x00034ea1) navi_icon_text_pane_g1

0x7512,	// (0x00034ead) navi_icon_text_pane_t1

0x5136,	// (0x00032ad1) list_set_graphic_pane_t1_ParamLimits

0x5136,	// (0x00032ad1) list_set_graphic_pane_t1

0x640f,	// (0x00033daa) popup_midp_note_alarm_window_t6_ParamLimits

0x640f,	// (0x00033daa) popup_midp_note_alarm_window_t6

0x6421,	// (0x00033dbc) popup_midp_note_alarm_window_t7_ParamLimits

0x6421,	// (0x00033dbc) popup_midp_note_alarm_window_t7

0x6433,	// (0x00033dce) popup_midp_note_alarm_window_t8_ParamLimits

0x6433,	// (0x00033dce) popup_midp_note_alarm_window_t8

0x645d,	// (0x00033df8) popup_midp_note_alarm_window_t9_ParamLimits

0x645d,	// (0x00033df8) popup_midp_note_alarm_window_t9

0x646f,	// (0x00033e0a) popup_midp_note_alarm_window_t10_ParamLimits

0x646f,	// (0x00033e0a) popup_midp_note_alarm_window_t10

0x6481,	// (0x00033e1c) popup_midp_note_alarm_window_t11_ParamLimits

0x6481,	// (0x00033e1c) popup_midp_note_alarm_window_t11

0x6493,	// (0x00033e2e) scroll_pane_cp17_ParamLimits

0x6493,	// (0x00033e2e) scroll_pane_cp17

0xa5c7,	// (0x00037f62) volume_small_pane_cp_g1

0xa9f0,	// (0x0003838b) volume_small_pane_cp_g2

0xa9f9,	// (0x00038394) volume_small_pane_cp_g3

0xaa02,	// (0x0003839d) volume_small_pane_cp_g4

0xaa0b,	// (0x000383a6) volume_small_pane_cp_g5

0xaa14,	// (0x000383af) volume_small_pane_cp_g6

0xaa1d,	// (0x000383b8) volume_small_pane_cp_g7

0xaa26,	// (0x000383c1) volume_small_pane_cp_g8

0xaa2f,	// (0x000383ca) volume_small_pane_cp_g9

0xaa38,	// (0x000383d3) volume_small_pane_cp_g10

0x5446,	// (0x00032de1) midp_ticker_pane_g1_ParamLimits

0x5452,	// (0x00032ded) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x0003d110) midp_ticker_pane_g_ParamLimits

0x545e,	// (0x00032df9) midp_ticker_pane_t1_ParamLimits

0xbb52,	// (0x000394ed) aid_fill_nsta_2

0x5ce1,	// (0x0003367c) list_form2_midp_pane

0x6b64,	// (0x000344ff) midp_editing_number_pane_ParamLimits

0x6b7f,	// (0x0003451a) midp_ticker_pane_ParamLimits

0x7524,	// (0x00034ebf) form2_midp_field_pane

0x752c,	// (0x00034ec7) scroll_pane_cp51

0x754c,	// (0x00034ee7) form2_midp_button_pane_ParamLimits

0x754c,	// (0x00034ee7) form2_midp_button_pane

0x755e,	// (0x00034ef9) form2_midp_content_pane_ParamLimits

0x755e,	// (0x00034ef9) form2_midp_content_pane

0x7578,	// (0x00034f13) form2_midp_field_choice_group_pane

0x7580,	// (0x00034f1b) form2_midp_field_pane_g1

0x7588,	// (0x00034f23) form2_midp_field_pane_g2

0x7590,	// (0x00034f2b) form2_midp_field_pane_g3

0x7598,	// (0x00034f33) form2_midp_field_pane_g4

0x0003,

0xfb02,	// (0x0003d49d) form2_midp_field_pane_g

0x75a0,	// (0x00034f3b) form2_midp_gauge_slider_pane

0x75a8,	// (0x00034f43) form2_midp_gauge_wait_pane

0x75b0,	// (0x00034f4b) form2_midp_image_pane_ParamLimits

0x75b0,	// (0x00034f4b) form2_midp_image_pane

0x75cb,	// (0x00034f66) form2_midp_label_pane_ParamLimits

0x75cb,	// (0x00034f66) form2_midp_label_pane

0xc461,	// (0x00039dfc) form2_midp_label_pane_cp_ParamLimits

0xc461,	// (0x00039dfc) form2_midp_label_pane_cp

0x75e4,	// (0x00034f7f) form2_midp_string_pane_ParamLimits

0x75e4,	// (0x00034f7f) form2_midp_string_pane

0x900d,	// (0x000369a8) form2_midp_text_pane_ParamLimits

0x900d,	// (0x000369a8) form2_midp_text_pane

0x75f6,	// (0x00034f91) form2_midp_time_pane

0x7606,	// (0x00034fa1) input_focus_pane_cp51_ParamLimits

0x7606,	// (0x00034fa1) input_focus_pane_cp51

0x761e,	// (0x00034fb9) form2_midp_label_pane_t1_ParamLimits

0x761e,	// (0x00034fb9) form2_midp_label_pane_t1

0x9028,	// (0x000369c3) form2_mdip_text_pane_t1_ParamLimits

0x9028,	// (0x000369c3) form2_mdip_text_pane_t1

0x9044,	// (0x000369df) form2_midp_time_pane_t1

0x7666,	// (0x00035001) form2_midp_gauge_slider_pane_t1

0xc482,	// (0x00039e1d) form2_midp_gauge_slider_pane_t2

0xc494,	// (0x00039e2f) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb0b,	// (0x0003d4a6) form2_midp_gauge_slider_pane_t

0x7678,	// (0x00035013) form2_midp_slider_pane

0x7684,	// (0x0003501f) form2_midp_gauge_wait_pane_t1

0x7692,	// (0x0003502d) form2_midp_wait_pane_ParamLimits

0x7692,	// (0x0003502d) form2_midp_wait_pane

0xc4a6,	// (0x00039e41) list_single_2graphic_pane_cp4_ParamLimits

0xc4a6,	// (0x00039e41) list_single_2graphic_pane_cp4

0xbea2,	// (0x0003983d) list_single_midp_graphic_pane_cp_ParamLimits

0xbea2,	// (0x0003983d) list_single_midp_graphic_pane_cp

0x432b,	// (0x00031cc6) list_highlight_pane_cp20

0x76bd,	// (0x00035058) list_single_2graphic_pane_g1_cp4

0x6ed0,	// (0x0003486b) list_single_2graphic_pane_g2_cp4

0x76c5,	// (0x00035060) list_single_2graphic_pane_t1_cp4

0x4387,	// (0x00031d22) list_highlight_pane_cp21

0x76d4,	// (0x0003506f) list_single_midp_graphic_pane_g4_cp

0x76e3,	// (0x0003507e) list_single_midp_graphic_pane_t1_cp

0xc4d5,	// (0x00039e70) form2_mdip_string_pane_t1_ParamLimits

0xc4d5,	// (0x00039e70) form2_mdip_string_pane_t1

0x432b,	// (0x00031cc6) bg_wml_button_pane_cp2

0x4321,	// (0x00031cbc) form2_midp_image_pane_g1

0x9b6e,	// (0x00037509) list_double_large_graphic_pane_g5_ParamLimits

0x9b6e,	// (0x00037509) list_double_large_graphic_pane_g5

0x9c34,	// (0x000375cf) midp_form_pane_ParamLimits

0x4387,	// (0x00031d22) main_apps_wheel_pane_ParamLimits

0xb9aa,	// (0x00039345) popup_preview_window_ParamLimits

0xb9aa,	// (0x00039345) popup_preview_window

0x5747,	// (0x000330e2) popup_touch_info_window_ParamLimits

0x5747,	// (0x000330e2) popup_touch_info_window

0x5765,	// (0x00033100) popup_touch_menu_window_ParamLimits

0x5765,	// (0x00033100) popup_touch_menu_window

0x4317,	// (0x00031cb2) bg_popup_sub_pane_cp6

0x76f8,	// (0x00035093) list_touch_menu_pane

0x7700,	// (0x0003509b) list_single_touch_menu_pane_ParamLimits

0x7700,	// (0x0003509b) list_single_touch_menu_pane

0x7714,	// (0x000350af) list_single_touch_menu_pane_t1

0x4387,	// (0x00031d22) bg_popup_sub_pane_cp7_ParamLimits

0x4387,	// (0x00031d22) bg_popup_sub_pane_cp7

0x7722,	// (0x000350bd) heading_sub_pane

0x772a,	// (0x000350c5) list_touch_info_pane_ParamLimits

0x772a,	// (0x000350c5) list_touch_info_pane

0x7739,	// (0x000350d4) list_single_touch_info_pane_ParamLimits

0x7739,	// (0x000350d4) list_single_touch_info_pane

0x774b,	// (0x000350e6) list_single_touch_info_pane_t1

0x7759,	// (0x000350f4) list_single_touch_info_pane_t2

0x0001,

0xfb19,	// (0x0003d4b4) list_single_touch_info_pane_t

0x541c,	// (0x00032db7) bg_popup_heading_pane_cp

0x7767,	// (0x00035102) heading_sub_pane_t1

0x5a66,	// (0x00033401) bg_popup_preview_window_pane_cp_ParamLimits

0x5a66,	// (0x00033401) bg_popup_preview_window_pane_cp

0x7722,	// (0x000350bd) heading_preview_pane

0x772a,	// (0x000350c5) list_preview_pane_ParamLimits

0x772a,	// (0x000350c5) list_preview_pane

0x7775,	// (0x00035110) popup_preview_window_g1

0x7739,	// (0x000350d4) list_single_preview_pane_ParamLimits

0x7739,	// (0x000350d4) list_single_preview_pane

0x777d,	// (0x00035118) list_single_preview_pane_g1

0x7785,	// (0x00035120) list_single_preview_pane_t1

0x774b,	// (0x000350e6) list_single_preview_pane_t2

0x0001,

0xfb1e,	// (0x0003d4b9) list_single_preview_pane_t

0x7793,	// (0x0003512e) bg_popup_heading_pane_cp2_ParamLimits

0x7793,	// (0x0003512e) bg_popup_heading_pane_cp2

0x77a9,	// (0x00035144) heading_preview_pane_g1

0x77b1,	// (0x0003514c) heading_preview_pane_t1_ParamLimits

0x77b1,	// (0x0003514c) heading_preview_pane_t1

0x43da,	// (0x00031d75) soft_indicator_pane_t1_ParamLimits

0x495a,	// (0x000322f5) scroll_pane_ParamLimits

0x4d47,	// (0x000326e2) scroll_sc2_left_pane

0x4d3e,	// (0x000326d9) scroll_sc2_right_pane

0x4d66,	// (0x00032701) scroll_bg_pane_g1_ParamLimits

0x4d7b,	// (0x00032716) scroll_bg_pane_g2_ParamLimits

0x4d93,	// (0x0003272e) scroll_bg_pane_g3_ParamLimits

0xf700,	// (0x0003d09b) scroll_bg_pane_g_ParamLimits

0x4d66,	// (0x00032701) scroll_handle_pane_g1_ParamLimits

0x4db5,	// (0x00032750) scroll_handle_pane_g2_ParamLimits

0x4d93,	// (0x0003272e) scroll_handle_pane_g3_ParamLimits

0xf707,	// (0x0003d0a2) scroll_handle_pane_g_ParamLimits

0x5690,	// (0x0003302b) popup_choice_list_window_ParamLimits

0x5690,	// (0x0003302b) popup_choice_list_window

0x58c0,	// (0x0003325b) choice_list_pane

0x5942,	// (0x000332dd) cell_toolbar_pane_t1

0x596a,	// (0x00033305) toolbar_button_pane_ParamLimits

0x68b7,	// (0x00034252) ai_gene_pane_1_t2_ParamLimits

0x68b7,	// (0x00034252) ai_gene_pane_1_t2

0x0001,

0xf928,	// (0x0003d2c3) ai_gene_pane_1_t_ParamLimits

0xf928,	// (0x0003d2c3) ai_gene_pane_1_t

0x77ce,	// (0x00035169) scroll_sc2_left_pane_g1

0x77ce,	// (0x00035169) scroll_sc2_right_pane_g1

0x4b3e,	// (0x000324d9) bg_popup_sub_pane_cp10

0x77d8,	// (0x00035173) list_choice_list_pane

0x77ef,	// (0x0003518a) list_single_choice_list_pane_ParamLimits

0x77ef,	// (0x0003518a) list_single_choice_list_pane

0x4b21,	// (0x000324bc) list_single_choice_list_pane_g1

0x4b29,	// (0x000324c4) list_single_choice_list_pane_t1_ParamLimits

0x4b29,	// (0x000324c4) list_single_choice_list_pane_t1

0x7802,	// (0x0003519d) choice_list_pane_g1

0x780a,	// (0x000351a5) choice_list_pane_t1

0x4317,	// (0x00031cb2) input_focus_pane_cp11

0x4cb3,	// (0x0003264e) title_pane_stacon_g2_ParamLimits

0x4cb3,	// (0x0003264e) title_pane_stacon_g2

0x0002,

0xf6e6,	// (0x0003d081) title_pane_stacon_g_ParamLimits

0xf6e6,	// (0x0003d081) title_pane_stacon_g

0x541c,	// (0x00032db7) cursor_press_pane

0xb74f,	// (0x000390ea) popup_fep_hwr_window_ParamLimits

0xb74f,	// (0x000390ea) popup_fep_hwr_window

0x56e4,	// (0x0003307f) popup_fep_vkb_window_ParamLimits

0x56e4,	// (0x0003307f) popup_fep_vkb_window

0x7818,	// (0x000351b3) cursor_press_pane_g1

0x0002,

0xfb47,	// (0x0003d4e2) fep_vkb_side_pane_g_ParamLimits

0xaa6c,	// (0x00038407) fep_hwr_candidate_pane_ParamLimits

0xaa6c,	// (0x00038407) fep_hwr_candidate_pane

0xaa96,	// (0x00038431) fep_hwr_side_pane_ParamLimits

0xaa96,	// (0x00038431) fep_hwr_side_pane

0xaab6,	// (0x00038451) fep_hwr_top_pane_ParamLimits

0xaab6,	// (0x00038451) fep_hwr_top_pane

0xaace,	// (0x00038469) fep_hwr_write_pane_ParamLimits

0xaace,	// (0x00038469) fep_hwr_write_pane

0xfb47,	// (0x0003d4e2) fep_vkb_side_pane_g

0x7832,	// (0x000351cd) fep_hwr_top_pane_g1

0x7820,	// (0x000351bb) fep_hwr_top_pane_g2

0xaafa,	// (0x00038495) fep_hwr_top_pane_g3

0x0002,

0xfb23,	// (0x0003d4be) fep_hwr_top_pane_g

0xab0f,	// (0x000384aa) fep_hwr_top_text_pane

0x4f08,	// (0x000328a3) fep_hwr_top_text_pane_g1

0x7868,	// (0x00035203) fep_hwr_top_text_pane_t1

0xac05,	// (0x000385a0) fep_hwr_candidate_pane_g1

0x7a75,	// (0x00035410) fep_vkb_keypad_pane_g3_ParamLimits

0x7a75,	// (0x00035410) fep_vkb_keypad_pane_g3

0x7a9d,	// (0x00035438) fep_vkb_keypad_pane_g4_ParamLimits

0x7a9d,	// (0x00035438) fep_vkb_keypad_pane_g4

0x7b0c,	// (0x000354a7) fep_vkb_bottom_pane_g2_ParamLimits

0x7b0c,	// (0x000354a7) fep_vkb_bottom_pane_g2

0x0001,

0xfb4e,	// (0x0003d4e9) fep_vkb_bottom_pane_g_ParamLimits

0xfb4e,	// (0x0003d4e9) fep_vkb_bottom_pane_g

0x77ce,	// (0x00035169) cell_vkb_side_pane_g2

0x0001,

0xfb58,	// (0x0003d4f3) cell_vkb_side_pane_g

0x7b50,	// (0x000354eb) cell_vkb_side_pane_t1

0x7b5e,	// (0x000354f9) cell_vkb_side_pane_t1_copy1

0x77ce,	// (0x00035169) bg_fep_vkb_candidate_pane_g2

0x7c3a,	// (0x000355d5) cell_vkb_candidate_pane_ParamLimits

0x7876,	// (0x00035211) aid_size_cell_vkb_ParamLimits

0x7876,	// (0x00035211) aid_size_cell_vkb

0x7c3a,	// (0x000355d5) cell_vkb_candidate_pane

0xac1f,	// (0x000385ba) bg_popup_fep_shadow_pane_g1

0x78f2,	// (0x0003528d) fep_vkb_bottom_pane_ParamLimits

0x78f2,	// (0x0003528d) fep_vkb_bottom_pane

0x792f,	// (0x000352ca) fep_vkb_candidate_pane_ParamLimits

0x792f,	// (0x000352ca) fep_vkb_candidate_pane

0x794b,	// (0x000352e6) fep_vkb_keypad_pane_ParamLimits

0x794b,	// (0x000352e6) fep_vkb_keypad_pane

0x7991,	// (0x0003532c) fep_vkb_side_pane_ParamLimits

0x7991,	// (0x0003532c) fep_vkb_side_pane

0x79cd,	// (0x00035368) fep_vkb_top_pane_ParamLimits

0x79cd,	// (0x00035368) fep_vkb_top_pane

0x7a09,	// (0x000353a4) fep_vkb_top_pane_g1_ParamLimits

0x7a09,	// (0x000353a4) fep_vkb_top_pane_g1

0x7a18,	// (0x000353b3) fep_vkb_top_pane_g2_ParamLimits

0x7a18,	// (0x000353b3) fep_vkb_top_pane_g2

0x7a27,	// (0x000353c2) fep_vkb_top_pane_g3_ParamLimits

0x7a27,	// (0x000353c2) fep_vkb_top_pane_g3

0x0003,

0xfb3e,	// (0x0003d4d9) fep_vkb_top_pane_g_ParamLimits

0xfb3e,	// (0x0003d4d9) fep_vkb_top_pane_g

0x7a45,	// (0x000353e0) fep_vkb_top_text_pane_ParamLimits

0x7a45,	// (0x000353e0) fep_vkb_top_text_pane

0xc621,	// (0x00039fbc) fep_vkb_side_pane_g1_ParamLimits

0xc621,	// (0x00039fbc) fep_vkb_side_pane_g1

0x7a64,	// (0x000353ff) grid_vkb_side_pane_ParamLimits

0x7a64,	// (0x000353ff) grid_vkb_side_pane

0xac27,	// (0x000385c2) bg_popup_fep_shadow_pane_g2

0xac30,	// (0x000385cb) bg_popup_fep_shadow_pane_g3

0xac38,	// (0x000385d3) bg_popup_fep_shadow_pane_g4

0xac41,	// (0x000385dc) bg_popup_fep_shadow_pane_g5

0xac4b,	// (0x000385e6) bg_popup_fep_shadow_pane_g6

0xac53,	// (0x000385ee) bg_popup_fep_shadow_pane_g7

0x4a6e,	// (0x00032409) bg_popup_fep_shadow_pane_g8

0x7abb,	// (0x00035456) grid_vkb_keypad_number_pane_ParamLimits

0x7abb,	// (0x00035456) grid_vkb_keypad_number_pane

0x7acb,	// (0x00035466) grid_vkb_keypad_pane_ParamLimits

0x7acb,	// (0x00035466) grid_vkb_keypad_pane

0x7af1,	// (0x0003548c) fep_vkb_bottom_pane_g1_ParamLimits

0x7af1,	// (0x0003548c) fep_vkb_bottom_pane_g1

0x7b1a,	// (0x000354b5) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7b1a,	// (0x000354b5) grid_vkb_keypad_bottom_left_pane

0x7b2f,	// (0x000354ca) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7b2f,	// (0x000354ca) grid_vkb_keypad_bottom_right_pane

0x7b44,	// (0x000354df) fep_vkb_top_text_pane_g1

0xc66b,	// (0x0003a006) fep_vkb_top_text_pane_t1

0xc680,	// (0x0003a01b) cell_vkb_side_pane_ParamLimits

0xc680,	// (0x0003a01b) cell_vkb_side_pane

0x77ce,	// (0x00035169) cell_vkb_side_pane_g1

0x7b6c,	// (0x00035507) cell_vkb_keypad_pane_ParamLimits

0x7b6c,	// (0x00035507) cell_vkb_keypad_pane

0x7be7,	// (0x00035582) cell_vkb_keypad_pane_g1

0x0008,

0xfb6b,	// (0x0003d506) bg_popup_fep_shadow_pane_g

0x77ce,	// (0x00035169) cell_hwr_side_pane_g1

0x77ce,	// (0x00035169) cell_hwr_side_pane_g2

0x7bf1,	// (0x0003558c) cell_vkb_keypad_pane_t1

0xc6a3,	// (0x0003a03e) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc6a3,	// (0x0003a03e) cell_vkb_keypad_bottom_left_pane

0xc6c0,	// (0x0003a05b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc6c0,	// (0x0003a05b) cell_vkb_keypad_bottom_right_pane

0x77ce,	// (0x00035169) cell_vkb_keypad_bottom_left_pane_g1

0x77ce,	// (0x00035169) cell_vkb_keypad_bottom_right_pane_g1

0x7bff,	// (0x0003559a) cell_vkb_keypad_number_pane_ParamLimits

0x7bff,	// (0x0003559a) cell_vkb_keypad_number_pane

0x7c1e,	// (0x000355b9) cell_vkb_keypad_number_pane_g1

0x7c28,	// (0x000355c3) cell_vkb_keypad_number_pane_g2

0x7c31,	// (0x000355cc) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb5d,	// (0x0003d4f8) cell_vkb_keypad_number_pane_g

0x7bf1,	// (0x0003558c) cell_vkb_keypad_number_pane_t1

0x7c57,	// (0x000355f2) fep_vkb_candidate_pane_g1

0x0001,

0xfb58,	// (0x0003d4f3) cell_hwr_side_pane_g

0x7c70,	// (0x0003560b) cell_hwr_side_pane_t1

0xac65,	// (0x00038600) cell_hwr_side_pane_t1_copy1

0x7a37,	// (0x000353d2) cell_hwr_candidate_pane_g1

0xac73,	// (0x0003860e) cell_hwr_candidate_pane_t1

0x77ce,	// (0x00035169) cell_vkb_candidate_pane_g2

0x7cb4,	// (0x0003564f) cell_vkb_candidate_pane_t1

0x0e89,	// (0x0002e824) bg_popup_fep_shadow_pane_ParamLimits

0x0e89,	// (0x0002e824) bg_popup_fep_shadow_pane

0x110e,	// (0x0002eaa9) bg_fep_hwr_top_pane_g4

0x7844,	// (0x000351df) bg_hwr_side_pane_g1_ParamLimits

0x7844,	// (0x000351df) bg_hwr_side_pane_g1

0xab4b,	// (0x000384e6) cell_hwr_side_pane_ParamLimits

0xab4b,	// (0x000384e6) cell_hwr_side_pane

0xab86,	// (0x00038521) fep_hwr_write_pane_g1_ParamLimits

0xab86,	// (0x00038521) fep_hwr_write_pane_g1

0xab93,	// (0x0003852e) fep_hwr_write_pane_g2_ParamLimits

0xab93,	// (0x0003852e) fep_hwr_write_pane_g2

0xaba0,	// (0x0003853b) fep_hwr_write_pane_g3_ParamLimits

0xaba0,	// (0x0003853b) fep_hwr_write_pane_g3

0xabae,	// (0x00038549) fep_hwr_write_pane_g4_ParamLimits

0xabae,	// (0x00038549) fep_hwr_write_pane_g4

0x0005,

0xfb2a,	// (0x0003d4c5) fep_hwr_write_pane_g_ParamLimits

0xfb2a,	// (0x0003d4c5) fep_hwr_write_pane_g

0x110e,	// (0x0002eaa9) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x110e,	// (0x0002eaa9) bg_fep_hwr_candidate_pane_g2

0xabc3,	// (0x0003855e) cell_hwr_candidate_pane_ParamLimits

0xabc3,	// (0x0003855e) cell_hwr_candidate_pane

0xac05,	// (0x000385a0) fep_hwr_candidate_pane_g1_ParamLimits

0x78a4,	// (0x0003523f) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x78a4,	// (0x0003523f) bg_popup_fep_shadow_pane_cp2

0x7a37,	// (0x000353d2) fep_vkb_top_pane_g4_ParamLimits

0x7a37,	// (0x000353d2) fep_vkb_top_pane_g4

0x7a56,	// (0x000353f1) fep_vkb_side_pane_g2_ParamLimits

0x7a56,	// (0x000353f1) fep_vkb_side_pane_g2

0x88d5,	// (0x00036270) list_setting_pane_t4_ParamLimits

0x88d5,	// (0x00036270) list_setting_pane_t4

0x896f,	// (0x0003630a) list_setting_number_pane_t5_ParamLimits

0x896f,	// (0x0003630a) list_setting_number_pane_t5

0x9ed1,	// (0x0003786c) list_double_heading_pane_cp2_ParamLimits

0x9ed1,	// (0x0003786c) list_double_heading_pane_cp2

0x4a01,	// (0x0003239c) list_double_heading_pane_g1_cp2_ParamLimits

0x4a01,	// (0x0003239c) list_double_heading_pane_g1_cp2

0x4a0d,	// (0x000323a8) list_double_heading_pane_g2_cp2_ParamLimits

0x4a0d,	// (0x000323a8) list_double_heading_pane_g2_cp2

0x7cc2,	// (0x0003565d) list_double_heading_pane_t1_cp2_ParamLimits

0x7cc2,	// (0x0003565d) list_double_heading_pane_t1_cp2

0x7cd8,	// (0x00035673) list_double_heading_pane_t2_cp2_ParamLimits

0x7cd8,	// (0x00035673) list_double_heading_pane_t2_cp2

0x430f,	// (0x00031caa) aid_value_unit2

0x966c,	// (0x00037007) popup_preview_fixed_window

0x44ba,	// (0x00031e55) bg_popup_preview_window_pane_cp02

0x7cea,	// (0x00035685) list_preview_fixed_pane

0x7d30,	// (0x000356cb) list_empty_pane_fp_ParamLimits

0x7d30,	// (0x000356cb) list_empty_pane_fp

0x7d30,	// (0x000356cb) list_single_cale_day_pane_fp_ParamLimits

0x7d30,	// (0x000356cb) list_single_cale_day_pane_fp

0x7d30,	// (0x000356cb) list_single_graphic_heading_pane_fp_ParamLimits

0x7d30,	// (0x000356cb) list_single_graphic_heading_pane_fp

0x7d30,	// (0x000356cb) list_single_graphic_pane_fp_ParamLimits

0x7d30,	// (0x000356cb) list_single_graphic_pane_fp

0x7d30,	// (0x000356cb) list_single_heading_pane_fp_ParamLimits

0x7d30,	// (0x000356cb) list_single_heading_pane_fp

0x7d30,	// (0x000356cb) list_single_pane_fp_ParamLimits

0x7d30,	// (0x000356cb) list_single_pane_fp

0x7d47,	// (0x000356e2) list_single_pane_fp_g1_ParamLimits

0x7d47,	// (0x000356e2) list_single_pane_fp_g1

0x9b56,	// (0x000374f1) list_single_pane_fp_g2_ParamLimits

0x9b56,	// (0x000374f1) list_single_pane_fp_g2

0x9057,	// (0x000369f2) list_single_pane_fp_g3_ParamLimits

0x9057,	// (0x000369f2) list_single_pane_fp_g3

0x7d53,	// (0x000356ee) list_single_pane_fp_g4_ParamLimits

0x7d53,	// (0x000356ee) list_single_pane_fp_g4

0x0003,

0xfb8c,	// (0x0003d527) list_single_pane_fp_g_ParamLimits

0xfb8c,	// (0x0003d527) list_single_pane_fp_g

0x906b,	// (0x00036a06) list_single_pane_fp_t1_ParamLimits

0x906b,	// (0x00036a06) list_single_pane_fp_t1

0x9082,	// (0x00036a1d) list_single_graphic_pane_fp_g1_ParamLimits

0x9082,	// (0x00036a1d) list_single_graphic_pane_fp_g1

0x7d47,	// (0x000356e2) list_single_graphic_pane_fp_g2_ParamLimits

0x7d47,	// (0x000356e2) list_single_graphic_pane_fp_g2

0x9b56,	// (0x000374f1) list_single_graphic_pane_fp_g3_ParamLimits

0x9b56,	// (0x000374f1) list_single_graphic_pane_fp_g3

0x9057,	// (0x000369f2) list_single_graphic_pane_fp_g4_ParamLimits

0x9057,	// (0x000369f2) list_single_graphic_pane_fp_g4

0x7d53,	// (0x000356ee) list_single_graphic_pane_fp_g5_ParamLimits

0x7d53,	// (0x000356ee) list_single_graphic_pane_fp_g5

0x0004,

0xfb95,	// (0x0003d530) list_single_graphic_pane_fp_g_ParamLimits

0xfb95,	// (0x0003d530) list_single_graphic_pane_fp_g

0x908e,	// (0x00036a29) list_single_graphic_pane_fp_t1_ParamLimits

0x908e,	// (0x00036a29) list_single_graphic_pane_fp_t1

0x9082,	// (0x00036a1d) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x9082,	// (0x00036a1d) list_single_graphic_heading_pane_fp_g1

0x7d47,	// (0x000356e2) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7d47,	// (0x000356e2) list_single_graphic_heading_pane_fp_g2

0x9b56,	// (0x000374f1) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x9b56,	// (0x000374f1) list_single_graphic_heading_pane_fp_g3

0x9057,	// (0x000369f2) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x9057,	// (0x000369f2) list_single_graphic_heading_pane_fp_g4

0x7d53,	// (0x000356ee) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7d53,	// (0x000356ee) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb95,	// (0x0003d530) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb95,	// (0x0003d530) list_single_graphic_heading_pane_fp_g

0x90a4,	// (0x00036a3f) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x90a4,	// (0x00036a3f) list_single_graphic_heading_pane_fp_t1

0x90ba,	// (0x00036a55) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x90ba,	// (0x00036a55) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba0,	// (0x0003d53b) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba0,	// (0x0003d53b) list_single_graphic_heading_pane_fp_t

0x90cc,	// (0x00036a67) list_single_cale_day_pane_fp_g1_ParamLimits

0x90cc,	// (0x00036a67) list_single_cale_day_pane_fp_g1

0x7d5f,	// (0x000356fa) list_single_cale_day_pane_fp_g2_ParamLimits

0x7d5f,	// (0x000356fa) list_single_cale_day_pane_fp_g2

0x9104,	// (0x00036a9f) list_single_cale_day_pane_fp_g3_ParamLimits

0x9104,	// (0x00036a9f) list_single_cale_day_pane_fp_g3

0x912c,	// (0x00036ac7) list_single_cale_day_pane_fp_g4_ParamLimits

0x912c,	// (0x00036ac7) list_single_cale_day_pane_fp_g4

0x9150,	// (0x00036aeb) list_single_cale_day_pane_fp_g5_ParamLimits

0x9150,	// (0x00036aeb) list_single_cale_day_pane_fp_g5

0x0004,

0xfba5,	// (0x0003d540) list_single_cale_day_pane_fp_g_ParamLimits

0xfba5,	// (0x0003d540) list_single_cale_day_pane_fp_g

0x9174,	// (0x00036b0f) list_single_cale_day_pane_fp_t1_ParamLimits

0x9174,	// (0x00036b0f) list_single_cale_day_pane_fp_t1

0x919a,	// (0x00036b35) list_single_cale_day_pane_fp_t2_ParamLimits

0x919a,	// (0x00036b35) list_single_cale_day_pane_fp_t2

0x91b3,	// (0x00036b4e) list_single_cale_day_pane_fp_t3_ParamLimits

0x91b3,	// (0x00036b4e) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb0,	// (0x0003d54b) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb0,	// (0x0003d54b) list_single_cale_day_pane_fp_t

0x7d47,	// (0x000356e2) list_empty_pane_fp_g1_ParamLimits

0x7d47,	// (0x000356e2) list_empty_pane_fp_g1

0x91cc,	// (0x00036b67) list_empty_pane_fp_t1

0x91da,	// (0x00036b75) list_empty_pane_fp_t2

0x0001,

0xfbb7,	// (0x0003d552) list_empty_pane_fp_t

0x7d47,	// (0x000356e2) list_single_heading_pane_fp_g1_ParamLimits

0x7d47,	// (0x000356e2) list_single_heading_pane_fp_g1

0x9b56,	// (0x000374f1) list_single_heading_pane_fp_g2_ParamLimits

0x9b56,	// (0x000374f1) list_single_heading_pane_fp_g2

0x9057,	// (0x000369f2) list_single_heading_pane_fp_g3_ParamLimits

0x9057,	// (0x000369f2) list_single_heading_pane_fp_g3

0x0002,

0xfbbc,	// (0x0003d557) list_single_heading_pane_fp_g_ParamLimits

0xfbbc,	// (0x0003d557) list_single_heading_pane_fp_g

0x91e8,	// (0x00036b83) list_single_heading_pane_fp_t1_ParamLimits

0x91e8,	// (0x00036b83) list_single_heading_pane_fp_t1

0x91fa,	// (0x00036b95) list_single_heading_pane_fp_t2_ParamLimits

0x91fa,	// (0x00036b95) list_single_heading_pane_fp_t2

0x0001,

0xfbc3,	// (0x0003d55e) list_single_heading_pane_fp_t_ParamLimits

0xfbc3,	// (0x0003d55e) list_single_heading_pane_fp_t

0x4b4a,	// (0x000324e5) aid_size_cell_fast

0x449d,	// (0x00031e38) soft_indicator_pane_cp1_t1

0x4b87,	// (0x00032522) cell_app_pane_cp2_ParamLimits

0x4b87,	// (0x00032522) cell_app_pane_cp2

0xaa55,	// (0x000383f0) fep_hwr_candidate_drop_down_list_pane

0x1465,	// (0x0002ee00) fep_hwr_candidate_pane_g3_ParamLimits

0x1465,	// (0x0002ee00) fep_hwr_candidate_pane_g3

0x1472,	// (0x0002ee0d) fep_hwr_candidate_pane_g4_ParamLimits

0x1472,	// (0x0002ee0d) fep_hwr_candidate_pane_g4

0x0002,

0xfb37,	// (0x0003d4d2) fep_hwr_candidate_pane_g_ParamLimits

0xfb37,	// (0x0003d4d2) fep_hwr_candidate_pane_g

0x791e,	// (0x000352b9) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x791e,	// (0x000352b9) fep_vkb_candidate_drop_down_list_pane

0x7c5f,	// (0x000355fa) fep_vkb_candidate_pane_g3

0x7c67,	// (0x00035602) fep_vkb_candidate_pane_g4

0x0002,

0xfb64,	// (0x0003d4ff) fep_vkb_candidate_pane_g

0x7a37,	// (0x000353d2) cell_hwr_candidate_pane_g1_ParamLimits

0xc6f9,	// (0x0003a094) cell_hwr_candidate_pane_g3_ParamLimits

0xc6f9,	// (0x0003a094) cell_hwr_candidate_pane_g3

0xc71a,	// (0x0003a0b5) cell_hwr_candidate_pane_g4_ParamLimits

0xc71a,	// (0x0003a0b5) cell_hwr_candidate_pane_g4

0x0002,

0xfb7e,	// (0x0003d519) cell_hwr_candidate_pane_g_ParamLimits

0xfb7e,	// (0x0003d519) cell_hwr_candidate_pane_g

0x7c7e,	// (0x00035619) cell_vkb_candidate_pane_g3_ParamLimits

0x7c7e,	// (0x00035619) cell_vkb_candidate_pane_g3

0x7c99,	// (0x00035634) cell_vkb_candidate_pane_g4_ParamLimits

0x7c99,	// (0x00035634) cell_vkb_candidate_pane_g4

0xc73b,	// (0x0003a0d6) cell_app_pane_cp2_g1_ParamLimits

0xc73b,	// (0x0003a0d6) cell_app_pane_cp2_g1

0xc759,	// (0x0003a0f4) cell_app_pane_cp2_g2_ParamLimits

0xc759,	// (0x0003a0f4) cell_app_pane_cp2_g2

0x0001,

0xfbc8,	// (0x0003d563) cell_app_pane_cp2_g_ParamLimits

0xfbc8,	// (0x0003d563) cell_app_pane_cp2_g

0xc765,	// (0x0003a100) cell_app_pane_cp2_t1_ParamLimits

0xc765,	// (0x0003a100) cell_app_pane_cp2_t1

0x49e7,	// (0x00032382) grid_highlight_pane_cp1_ParamLimits

0x49e7,	// (0x00032382) grid_highlight_pane_cp1

0xac91,	// (0x0003862c) cell_hwr_candidate_pane_cp1_ParamLimits

0xac91,	// (0x0003862c) cell_hwr_candidate_pane_cp1

0x7a37,	// (0x000353d2) fep_hwr_candidate_drop_down_list_pane_g1

0xc777,	// (0x0003a112) fep_hwr_candidate_drop_down_list_pane_g2

0xc784,	// (0x0003a11f) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbcd,	// (0x0003d568) fep_hwr_candidate_drop_down_list_pane_g

0xacb0,	// (0x0003864b) fep_hwr_candidate_drop_down_list_scroll_pane

0xacb9,	// (0x00038654) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xacb9,	// (0x00038654) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xacc6,	// (0x00038661) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xacc6,	// (0x00038661) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xacd3,	// (0x0003866e) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xacd3,	// (0x0003866e) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7c7e,	// (0x00035619) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7c7e,	// (0x00035619) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7c99,	// (0x00035634) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7c99,	// (0x00035634) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xace0,	// (0x0003867b) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xace0,	// (0x0003867b) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xacfb,	// (0x00038696) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xacfb,	// (0x00038696) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xc791,	// (0x0003a12c) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc791,	// (0x0003a12c) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd4,	// (0x0003d56f) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd4,	// (0x0003d56f) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc7ac,	// (0x0003a147) cell_vkb_candidate_pane_cp1_ParamLimits

0xc7ac,	// (0x0003a147) cell_vkb_candidate_pane_cp1

0x7a37,	// (0x000353d2) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7a37,	// (0x000353d2) fep_vkb_candidate_drop_down_list_pane_g1

0xc777,	// (0x0003a112) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc777,	// (0x0003a112) fep_vkb_candidate_drop_down_list_pane_g2

0xc784,	// (0x0003a11f) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc784,	// (0x0003a11f) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbcd,	// (0x0003d568) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbcd,	// (0x0003d568) fep_vkb_candidate_drop_down_list_pane_g

0xc7cc,	// (0x0003a167) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc7cc,	// (0x0003a167) fep_vkb_candidate_drop_down_list_scroll_pane

0xc7d9,	// (0x0003a174) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc7d9,	// (0x0003a174) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc7e6,	// (0x0003a181) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc7e6,	// (0x0003a181) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc7f2,	// (0x0003a18d) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc7f2,	// (0x0003a18d) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc6f9,	// (0x0003a094) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc6f9,	// (0x0003a094) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc71a,	// (0x0003a0b5) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc71a,	// (0x0003a0b5) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc7fe,	// (0x0003a199) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc7fe,	// (0x0003a199) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc81f,	// (0x0003a1ba) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc81f,	// (0x0003a1ba) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc791,	// (0x0003a12c) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc791,	// (0x0003a12c) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x0003d580) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x0003d580) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9776,	// (0x00037111) title_pane_g1_ParamLimits

0x9783,	// (0x0003711e) title_pane_g2_ParamLimits

0xf566,	// (0x0003cf01) title_pane_g_ParamLimits

0x4f00,	// (0x0003289b) aid_call2_pane

0x4ef8,	// (0x00032893) aid_call_pane

0x4f08,	// (0x000328a3) popup_clock_analogue_window_g1

0x4f08,	// (0x000328a3) popup_clock_analogue_window_g2

0x9eb2,	// (0x0003784d) popup_clock_analogue_window_g3

0x9ebb,	// (0x00037856) popup_clock_analogue_window_g4

0x4321,	// (0x00031cbc) popup_clock_analogue_window_g5

0x0004,

0xf715,	// (0x0003d0b0) popup_clock_analogue_window_g

0x9ec3,	// (0x0003785e) popup_clock_analogue_window_t1

0x9efa,	// (0x00037895) clock_digital_number_pane_ParamLimits

0x9efa,	// (0x00037895) clock_digital_number_pane

0x9f06,	// (0x000378a1) clock_digital_number_pane_cp02_ParamLimits

0x9f06,	// (0x000378a1) clock_digital_number_pane_cp02

0x9f12,	// (0x000378ad) clock_digital_number_pane_cp03_ParamLimits

0x9f12,	// (0x000378ad) clock_digital_number_pane_cp03

0x9f1e,	// (0x000378b9) clock_digital_number_pane_cp04_ParamLimits

0x9f1e,	// (0x000378b9) clock_digital_number_pane_cp04

0x9f2a,	// (0x000378c5) clock_digital_separator_pane_ParamLimits

0x9f2a,	// (0x000378c5) clock_digital_separator_pane

0x9f36,	// (0x000378d1) popup_clock_digital_window_t1_ParamLimits

0x9f36,	// (0x000378d1) popup_clock_digital_window_t1

0x4321,	// (0x00031cbc) clock_digital_number_pane_g1

0x4321,	// (0x00031cbc) clock_digital_number_pane_g2

0x0001,

0xf720,	// (0x0003d0bb) clock_digital_number_pane_g

0x4321,	// (0x00031cbc) clock_digital_separator_pane_g1

0x4321,	// (0x00031cbc) clock_digital_separator_pane_g2

0x0001,

0xf720,	// (0x0003d0bb) clock_digital_separator_pane_g

0xbb3c,	// (0x000394d7) aid_fill_nsta_ParamLimits

0xbc05,	// (0x000395a0) indicator_nsta_pane_ParamLimits

0x5869,	// (0x00033204) popup_clock_analogue_window

0x5869,	// (0x00033204) popup_clock_digital_window

0x4387,	// (0x00031d22) grid_indicator_nsta_pane_ParamLimits

0x7457,	// (0x00034df2) clock_nsta_pane_t2

0x0001,

0xfab7,	// (0x0003d452) clock_nsta_pane_t

0x9e76,	// (0x00037811) aid_size_max_handle

0x9e80,	// (0x0003781b) aid_size_min_handle

0x541c,	// (0x00032db7) editor_scroll_pane

0xc840,	// (0x0003a1db) ex_editor_pane

0x4b06,	// (0x000324a1) scroll_pane_cp13

0x4986,	// (0x00032321) scroll_pane_cp14

0x4f37,	// (0x000328d2) scroll_pane_cp36

0x9ee3,	// (0x0003787e) list_single_graphic_hl_pane_cp2_ParamLimits

0x9ee3,	// (0x0003787e) list_single_graphic_hl_pane_cp2

0x8df0,	// (0x0003678b) list_single_graphic_hl_pane_ParamLimits

0x8df0,	// (0x0003678b) list_single_graphic_hl_pane

0x9210,	// (0x00036bab) aid_size_min_hl_cp1

0xc848,	// (0x0003a1e3) list_highlight_pane_cp34_ParamLimits

0xc848,	// (0x0003a1e3) list_highlight_pane_cp34

0xc859,	// (0x0003a1f4) list_single_graphic_hl_pane_g1_ParamLimits

0xc859,	// (0x0003a1f4) list_single_graphic_hl_pane_g1

0x9219,	// (0x00036bb4) list_single_graphic_hl_pane_g2_ParamLimits

0x9219,	// (0x00036bb4) list_single_graphic_hl_pane_g2

0x9219,	// (0x00036bb4) list_single_graphic_hl_pane_g3_ParamLimits

0x9219,	// (0x00036bb4) list_single_graphic_hl_pane_g3

0x538d,	// (0x00032d28) list_single_graphic_hl_pane_g4_ParamLimits

0x538d,	// (0x00032d28) list_single_graphic_hl_pane_g4

0x9225,	// (0x00036bc0) list_single_graphic_hl_pane_g5_ParamLimits

0x9225,	// (0x00036bc0) list_single_graphic_hl_pane_g5

0x0004,

0xfbf6,	// (0x0003d591) list_single_graphic_hl_pane_g_ParamLimits

0xfbf6,	// (0x0003d591) list_single_graphic_hl_pane_g

0x9239,	// (0x00036bd4) list_single_graphic_hl_pane_t1_ParamLimits

0x9239,	// (0x00036bd4) list_single_graphic_hl_pane_t1

0xc866,	// (0x0003a201) aid_size_min_hl_cp2

0xc86f,	// (0x0003a20a) list_highlight_pane_cp34_cp2_ParamLimits

0xc86f,	// (0x0003a20a) list_highlight_pane_cp34_cp2

0xc859,	// (0x0003a1f4) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc859,	// (0x0003a1f4) list_single_graphic_hl_pane_g1_cp2

0xc87c,	// (0x0003a217) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc87c,	// (0x0003a217) list_single_graphic_hl_pane_g2_cp2

0xc888,	// (0x0003a223) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc888,	// (0x0003a223) list_single_graphic_hl_pane_g3_cp2

0x5353,	// (0x00032cee) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5353,	// (0x00032cee) list_single_graphic_hl_pane_g4_cp2

0xc896,	// (0x0003a231) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc896,	// (0x0003a231) list_single_graphic_hl_pane_g5_cp2

0xa383,	// (0x00037d1e) control_pane_g4_ParamLimits

0xa383,	// (0x00037d1e) control_pane_g4

0x4b3e,	// (0x000324d9) bg_popup_sub_pane_cp10_ParamLimits

0x77d8,	// (0x00035173) list_choice_list_pane_ParamLimits

0x77e7,	// (0x00035182) scroll_pane_cp23

0x44ba,	// (0x00031e55) bg_popup_preview_window_pane_cp02_ParamLimits

0x7cea,	// (0x00035685) list_preview_fixed_pane_ParamLimits

0x7d00,	// (0x0003569b) list_preview_fixed_pane_cp_ParamLimits

0x7d00,	// (0x0003569b) list_preview_fixed_pane_cp

0x7d0c,	// (0x000356a7) popup_preview_fixed_window_g1_ParamLimits

0x7d0c,	// (0x000356a7) popup_preview_fixed_window_g1

0x7d18,	// (0x000356b3) popup_preview_fixed_window_g2_ParamLimits

0x7d18,	// (0x000356b3) popup_preview_fixed_window_g2

0x0002,

0xfb85,	// (0x0003d520) popup_preview_fixed_window_g_ParamLimits

0xfb85,	// (0x0003d520) popup_preview_fixed_window_g

0x9d52,	// (0x000376ed) aid_navi_side_left_pane_ParamLimits

0x9d67,	// (0x00037702) aid_navi_side_right_pane_ParamLimits

0x9d7f,	// (0x0003771a) navi_icon_pane_stacon_ParamLimits

0x9d93,	// (0x0003772e) navi_navi_pane_stacon_ParamLimits

0x9d7f,	// (0x0003771a) navi_text_pane_stacon_ParamLimits

0x4317,	// (0x00031cb2) main_text_info_pane

0xc8c0,	// (0x0003a25b) listscroll_text_info_pane

0xc8c8,	// (0x0003a263) list_text_info_pane_ParamLimits

0xc8c8,	// (0x0003a263) list_text_info_pane

0xc8d7,	// (0x0003a272) scroll_pane_cp24_ParamLimits

0xc8d7,	// (0x0003a272) scroll_pane_cp24

0xc8f5,	// (0x0003a290) list_text_info_pane_t1_ParamLimits

0xc8f5,	// (0x0003a290) list_text_info_pane_t1

0xb6cd,	// (0x00039068) popup_fast_swap2_window_ParamLimits

0xb6cd,	// (0x00039068) popup_fast_swap2_window

0xc92e,	// (0x0003a2c9) aid_size_cell_fast2

0x4317,	// (0x00031cb2) bg_popup_window_pane_cp17

0x5d0d,	// (0x000336a8) heading_pane_cp2

0x470b,	// (0x000320a6) listscroll_fast2_pane

0xc938,	// (0x0003a2d3) grid_fast2_pane

0xc942,	// (0x0003a2dd) listscroll_fast2_pane_g1

0xc94a,	// (0x0003a2e5) listscroll_fast2_pane_g2

0x0001,

0xfc01,	// (0x0003d59c) listscroll_fast2_pane_g

0x4b06,	// (0x000324a1) scroll_pane_cp26

0xc954,	// (0x0003a2ef) cell_fast2_pane_ParamLimits

0xc954,	// (0x0003a2ef) cell_fast2_pane

0xc969,	// (0x0003a304) cell_fast2_pane_g1

0xc972,	// (0x0003a30d) cell_fast2_pane_g2

0xc97b,	// (0x0003a316) cell_fast2_pane_g3

0x0002,

0xfc06,	// (0x0003d5a1) cell_fast2_pane_g

0x474d,	// (0x000320e8) grid_highlight_pane_cp9

0x4762,	// (0x000320fd) main_eswt_pane_ParamLimits

0x4762,	// (0x000320fd) main_eswt_pane

0xc8ec,	// (0x0003a287) list_single_text_info_pane

0xc983,	// (0x0003a31e) eswt_ctrl_button_pane

0xc983,	// (0x0003a31e) eswt_ctrl_canvas_pane

0xc98b,	// (0x0003a326) eswt_ctrl_combo_pane

0xc983,	// (0x0003a31e) eswt_ctrl_default_pane

0xc983,	// (0x0003a31e) eswt_ctrl_label_pane

0xc993,	// (0x0003a32e) eswt_ctrl_wait_pane

0xc99b,	// (0x0003a336) eswt_shell_pane

0x4317,	// (0x00031cb2) listscroll_eswt_app_pane

0xc9bb,	// (0x0003a356) popup_eswt_tasktip_window_ParamLimits

0xc9bb,	// (0x0003a356) popup_eswt_tasktip_window

0x5a66,	// (0x00033401) bg_popup_window_pane_cp18

0xc9cc,	// (0x0003a367) eswt_control_pane_g1_ParamLimits

0xc9cc,	// (0x0003a367) eswt_control_pane_g1

0xc9d9,	// (0x0003a374) eswt_control_pane_g2_ParamLimits

0xc9d9,	// (0x0003a374) eswt_control_pane_g2

0xc9e6,	// (0x0003a381) eswt_control_pane_g3_ParamLimits

0xc9e6,	// (0x0003a381) eswt_control_pane_g3

0xc9f3,	// (0x0003a38e) eswt_control_pane_g4_ParamLimits

0xc9f3,	// (0x0003a38e) eswt_control_pane_g4

0x0003,

0xfc0d,	// (0x0003d5a8) eswt_control_pane_g_ParamLimits

0xfc0d,	// (0x0003d5a8) eswt_control_pane_g

0x49e7,	// (0x00032382) bg_button_pane_ParamLimits

0x49e7,	// (0x00032382) bg_button_pane

0x4762,	// (0x000320fd) common_borders_pane_copy2_ParamLimits

0x4762,	// (0x000320fd) common_borders_pane_copy2

0xca00,	// (0x0003a39b) control_button_pane_g1_ParamLimits

0xca00,	// (0x0003a39b) control_button_pane_g1

0xca0c,	// (0x0003a3a7) control_button_pane_g2_ParamLimits

0xca0c,	// (0x0003a3a7) control_button_pane_g2

0xca18,	// (0x0003a3b3) control_button_pane_g3_ParamLimits

0xca18,	// (0x0003a3b3) control_button_pane_g3

0x0002,

0xfc16,	// (0x0003d5b1) control_button_pane_g_ParamLimits

0xfc16,	// (0x0003d5b1) control_button_pane_g

0xca2c,	// (0x0003a3c7) control_button_pane_t1

0xca3a,	// (0x0003a3d5) control_button_pane_t2

0x0001,

0xfc1d,	// (0x0003d5b8) control_button_pane_t

0x5976,	// (0x00033311) bg_button_pane_g1

0x5986,	// (0x00033321) bg_button_pane_g2

0x597e,	// (0x00033319) bg_button_pane_g3

0x5996,	// (0x00033331) bg_button_pane_g4

0x598e,	// (0x00033329) bg_button_pane_g5

0x599e,	// (0x00033339) bg_button_pane_g6

0x59a6,	// (0x00033341) bg_button_pane_g7

0x59b6,	// (0x00033351) bg_button_pane_g8

0x59ae,	// (0x00033349) bg_button_pane_g9

0x0008,

0xf87c,	// (0x0003d217) bg_button_pane_g

0x7793,	// (0x0003512e) common_borders_pane_ParamLimits

0x7793,	// (0x0003512e) common_borders_pane

0xc9cc,	// (0x0003a367) eswt_control_pane_g1_copy1_ParamLimits

0xc9cc,	// (0x0003a367) eswt_control_pane_g1_copy1

0xc9d9,	// (0x0003a374) eswt_control_pane_g2_copy1_ParamLimits

0xc9d9,	// (0x0003a374) eswt_control_pane_g2_copy1

0xc9e6,	// (0x0003a381) eswt_control_pane_g3_copy1_ParamLimits

0xc9e6,	// (0x0003a381) eswt_control_pane_g3_copy1

0xc9f3,	// (0x0003a38e) eswt_control_pane_g4_copy1_ParamLimits

0xc9f3,	// (0x0003a38e) eswt_control_pane_g4_copy1

0x77ce,	// (0x00035169) bg_eswt_ctrl_canvas_pane_g1

0x7793,	// (0x0003512e) common_borders_pane_cp2_ParamLimits

0x7793,	// (0x0003512e) common_borders_pane_cp2

0x7793,	// (0x0003512e) common_borders_pane_cp3_ParamLimits

0x7793,	// (0x0003512e) common_borders_pane_cp3

0xca48,	// (0x0003a3e3) separator_horizontal_pane

0xca50,	// (0x0003a3eb) separator_vertical_pane

0xc9cc,	// (0x0003a367) eswt_control_pane_g1_copy2_ParamLimits

0xc9cc,	// (0x0003a367) eswt_control_pane_g1_copy2

0xc9d9,	// (0x0003a374) eswt_control_pane_g2_copy2_ParamLimits

0xc9d9,	// (0x0003a374) eswt_control_pane_g2_copy2

0xc9e6,	// (0x0003a381) eswt_control_pane_g3_copy2_ParamLimits

0xc9e6,	// (0x0003a381) eswt_control_pane_g3_copy2

0xc9f3,	// (0x0003a38e) eswt_control_pane_g4_copy2_ParamLimits

0xc9f3,	// (0x0003a38e) eswt_control_pane_g4_copy2

0x4317,	// (0x00031cb2) common_borders_pane_cp4

0xca59,	// (0x0003a3f4) separator_horizontal_pane_g1

0xca62,	// (0x0003a3fd) separator_horizontal_pane_g2

0xca6b,	// (0x0003a406) separator_horizontal_pane_g3

0x0002,

0xfc22,	// (0x0003d5bd) separator_horizontal_pane_g

0xc9cc,	// (0x0003a367) eswt_control_pane_g1_copy3_ParamLimits

0xc9cc,	// (0x0003a367) eswt_control_pane_g1_copy3

0xc9d9,	// (0x0003a374) eswt_control_pane_g2_copy3_ParamLimits

0xc9d9,	// (0x0003a374) eswt_control_pane_g2_copy3

0xc9e6,	// (0x0003a381) eswt_control_pane_g3_copy3_ParamLimits

0xc9e6,	// (0x0003a381) eswt_control_pane_g3_copy3

0xc9f3,	// (0x0003a38e) eswt_control_pane_g4_copy3_ParamLimits

0xc9f3,	// (0x0003a38e) eswt_control_pane_g4_copy3

0x4317,	// (0x00031cb2) common_borders_pane_cp5

0xca74,	// (0x0003a40f) separator_vertical_pane_g1

0xca7d,	// (0x0003a418) separator_vertical_pane_g2

0xca86,	// (0x0003a421) separator_vertical_pane_g3

0x0002,

0xfc29,	// (0x0003d5c4) separator_vertical_pane_g

0xc9cc,	// (0x0003a367) eswt_control_pane_g1_copy4_ParamLimits

0xc9cc,	// (0x0003a367) eswt_control_pane_g1_copy4

0xc9d9,	// (0x0003a374) eswt_control_pane_g2_copy4_ParamLimits

0xc9d9,	// (0x0003a374) eswt_control_pane_g2_copy4

0xc9e6,	// (0x0003a381) eswt_control_pane_g3_copy4_ParamLimits

0xc9e6,	// (0x0003a381) eswt_control_pane_g3_copy4

0xc9f3,	// (0x0003a38e) eswt_control_pane_g4_copy4_ParamLimits

0xc9f3,	// (0x0003a38e) eswt_control_pane_g4_copy4

0xca8f,	// (0x0003a42a) eswt_ctrl_combo_button_pane

0xca97,	// (0x0003a432) eswt_ctrl_input_pane

0xca9f,	// (0x0003a43a) popup_choice_list_window_cp70

0xcaa7,	// (0x0003a442) eswt_ctrl_input_pane_t1

0x4317,	// (0x00031cb2) input_focus_pane_cp70

0x7793,	// (0x0003512e) bg_button_pane_cp70_ParamLimits

0x7793,	// (0x0003512e) bg_button_pane_cp70

0xcab5,	// (0x0003a450) eswt_ctrl_combo_button_pane_g1

0xcabd,	// (0x0003a458) wait_bar_pane_cp70

0x5a66,	// (0x00033401) bg_popup_window_pane_cp70_ParamLimits

0x5a66,	// (0x00033401) bg_popup_window_pane_cp70

0xcac5,	// (0x0003a460) popup_eswt_tasktip_window_t1

0xcadb,	// (0x0003a476) wait_bar_pane_cp71_ParamLimits

0xcadb,	// (0x0003a476) wait_bar_pane_cp71

0xcae7,	// (0x0003a482) grid_eswt_app_pane

0x4d3e,	// (0x000326d9) scroll_pane_cp70

0xcaf0,	// (0x0003a48b) cell_eswt_app_pane_ParamLimits

0xcaf0,	// (0x0003a48b) cell_eswt_app_pane

0xcb24,	// (0x0003a4bf) cell_eswt_app_pane_g1_ParamLimits

0xcb24,	// (0x0003a4bf) cell_eswt_app_pane_g1

0xcb53,	// (0x0003a4ee) cell_eswt_app_pane_g2_ParamLimits

0xcb53,	// (0x0003a4ee) cell_eswt_app_pane_g2

0x0001,

0xfc30,	// (0x0003d5cb) cell_eswt_app_pane_g_ParamLimits

0xfc30,	// (0x0003d5cb) cell_eswt_app_pane_g

0xcb7c,	// (0x0003a517) cell_eswt_app_pane_t1_ParamLimits

0xcb7c,	// (0x0003a517) cell_eswt_app_pane_t1

0xcbae,	// (0x0003a549) grid_highlight_pane_cp70_ParamLimits

0xcbae,	// (0x0003a549) grid_highlight_pane_cp70

0x52ef,	// (0x00032c8a) set_content_pane_g1

0x5605,	// (0x00032fa0) status_small_volume_pane

0xad16,	// (0x000386b1) status_small_volume_pane_g1

0xad1e,	// (0x000386b9) volume_small2_pane

0xad27,	// (0x000386c2) volume_small2_pane_g1

0xad30,	// (0x000386cb) volume_small2_pane_g2

0xad39,	// (0x000386d4) volume_small2_pane_g3

0xad42,	// (0x000386dd) volume_small2_pane_g4

0xad4b,	// (0x000386e6) volume_small2_pane_g5

0xad54,	// (0x000386ef) volume_small2_pane_g6

0xad5d,	// (0x000386f8) volume_small2_pane_g7

0xad66,	// (0x00038701) volume_small2_pane_g8

0xad6f,	// (0x0003870a) volume_small2_pane_g9

0xad78,	// (0x00038713) volume_small2_pane_g10

0x0009,

0xfc35,	// (0x0003d5d0) volume_small2_pane_g

0x7b44,	// (0x000354df) fep_vkb_top_text_pane_g1_ParamLimits

0xc66b,	// (0x0003a006) fep_vkb_top_text_pane_t1_ParamLimits

0x7d24,	// (0x000356bf) popup_preview_fixed_window_g3_ParamLimits

0x7d24,	// (0x000356bf) popup_preview_fixed_window_g3

0xbacf,	// (0x0003946a) popup_toolbar_trans_pane

0xc0d4,	// (0x00039a6f) aid_height_set_list_ParamLimits

0x6207,	// (0x00033ba2) aid_size_parent_ParamLimits

0x4b3e,	// (0x000324d9) list_highlight_pane_cp2_ParamLimits

0x52ef,	// (0x00032c8a) set_content_pane_g1_ParamLimits

0x8e12,	// (0x000367ad) list_single_image_pane_ParamLimits

0x8e12,	// (0x000367ad) list_single_image_pane

0xcbba,	// (0x0003a555) aid_size_cell_image_ParamLimits

0xcbba,	// (0x0003a555) aid_size_cell_image

0xcbc7,	// (0x0003a562) grid_single_image_pane_ParamLimits

0xcbc7,	// (0x0003a562) grid_single_image_pane

0x4a01,	// (0x0003239c) list_single_image_pane_g1_ParamLimits

0x4a01,	// (0x0003239c) list_single_image_pane_g1

0x4a0d,	// (0x000323a8) list_single_image_pane_g2_ParamLimits

0x4a0d,	// (0x000323a8) list_single_image_pane_g2

0x0001,

0xfc4a,	// (0x0003d5e5) list_single_image_pane_g_ParamLimits

0xfc4a,	// (0x0003d5e5) list_single_image_pane_g

0xcbd3,	// (0x0003a56e) list_single_image_pane_t1_ParamLimits

0xcbd3,	// (0x0003a56e) list_single_image_pane_t1

0xcbe9,	// (0x0003a584) cell_image_list_pane_ParamLimits

0xcbe9,	// (0x0003a584) cell_image_list_pane

0xcbfd,	// (0x0003a598) cell_image_list_pane_g1

0xcc06,	// (0x0003a5a1) cell_image_list_pane_g2

0x0001,

0xfc4f,	// (0x0003d5ea) cell_image_list_pane_g

0xcc0f,	// (0x0003a5aa) aid_size_cell_tb_trans_pane

0x49e7,	// (0x00032382) bg_tb_trans_pane

0xcc21,	// (0x0003a5bc) grid_tb_trans_pane

0x5976,	// (0x00033311) bg_tb_trans_pane_g1

0x5986,	// (0x00033321) bg_tb_trans_pane_g2

0x597e,	// (0x00033319) bg_tb_trans_pane_g3

0x5996,	// (0x00033331) bg_tb_trans_pane_g4

0x598e,	// (0x00033329) bg_tb_trans_pane_g5

0x59b6,	// (0x00033351) bg_tb_trans_pane_g6

0x59ae,	// (0x00033349) bg_tb_trans_pane_g7

0x599e,	// (0x00033339) bg_tb_trans_pane_g8

0x59a6,	// (0x00033341) bg_tb_trans_pane_g9

0x0008,

0xfc54,	// (0x0003d5ef) bg_tb_trans_pane_g

0xcc35,	// (0x0003a5d0) cell_toolbar_trans_pane_ParamLimits

0xcc35,	// (0x0003a5d0) cell_toolbar_trans_pane

0x77ce,	// (0x00035169) cell_toolbar_trans_pane_g1

0xc445,	// (0x00039de0) list_form2_midp_pane_t1

0xc453,	// (0x00039dee) list_form2_midp_pane_t2

0x0001,

0xfafd,	// (0x0003d498) list_form2_midp_pane_t

0x752c,	// (0x00034ec7) scroll_pane_cp51_ParamLimits

0x76a2,	// (0x0003503d) form2_midp_wait_pane_g1

0x76ab,	// (0x00035046) form2_midp_wait_pane_g2

0x76b4,	// (0x0003504f) form2_midp_wait_pane_g3

0x0002,

0xfb12,	// (0x0003d4ad) form2_midp_wait_pane_g

0x4387,	// (0x00031d22) list_highlight_pane_cp21_ParamLimits

0x76d4,	// (0x0003506f) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x76e3,	// (0x0003507e) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa818,	// (0x000381b3) list_single_2graphic_im_pane_ParamLimits

0xa818,	// (0x000381b3) list_single_2graphic_im_pane

0xcc5b,	// (0x0003a5f6) list_single_2graphic_im_pane_g1_ParamLimits

0xcc5b,	// (0x0003a5f6) list_single_2graphic_im_pane_g1

0xcc6c,	// (0x0003a607) list_single_2graphic_im_pane_g2_ParamLimits

0xcc6c,	// (0x0003a607) list_single_2graphic_im_pane_g2

0xcc78,	// (0x0003a613) list_single_2graphic_im_pane_g3_ParamLimits

0xcc78,	// (0x0003a613) list_single_2graphic_im_pane_g3

0x0003,

0xfc67,	// (0x0003d602) list_single_2graphic_im_pane_g_ParamLimits

0xfc67,	// (0x0003d602) list_single_2graphic_im_pane_g

0xcc98,	// (0x0003a633) list_single_2graphic_im_pane_t1_ParamLimits

0xcc98,	// (0x0003a633) list_single_2graphic_im_pane_t1

0x7d30,	// (0x000356cb) list_single_graphic_2heading_pane_fp_ParamLimits

0x7d30,	// (0x000356cb) list_single_graphic_2heading_pane_fp

0x9082,	// (0x00036a1d) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x9082,	// (0x00036a1d) list_single_graphic_2heading_pane_fp_g1

0x7d47,	// (0x000356e2) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7d47,	// (0x000356e2) list_single_graphic_2heading_pane_fp_g2

0x9b56,	// (0x000374f1) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x9b56,	// (0x000374f1) list_single_graphic_2heading_pane_fp_g3

0x9057,	// (0x000369f2) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x9057,	// (0x000369f2) list_single_graphic_2heading_pane_fp_g4

0x7d53,	// (0x000356ee) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7d53,	// (0x000356ee) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb95,	// (0x0003d530) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb95,	// (0x0003d530) list_single_graphic_2heading_pane_fp_g

0x924f,	// (0x00036bea) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x924f,	// (0x00036bea) list_single_graphic_2heading_pane_fp_t1

0x90ba,	// (0x00036a55) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x90ba,	// (0x00036a55) list_single_graphic_2heading_pane_fp_t2

0x9265,	// (0x00036c00) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x9265,	// (0x00036c00) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc70,	// (0x0003d60b) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc70,	// (0x0003d60b) list_single_graphic_2heading_pane_fp_t

0x7850,	// (0x000351eb) fep_hwr_write_pane_g5_ParamLimits

0x7850,	// (0x000351eb) fep_hwr_write_pane_g5

0x785c,	// (0x000351f7) fep_hwr_write_pane_g6_ParamLimits

0x785c,	// (0x000351f7) fep_hwr_write_pane_g6

0xc99b,	// (0x0003a336) eswt_shell_pane_ParamLimits

0x5a66,	// (0x00033401) bg_popup_window_pane_cp18_ParamLimits

0x6ac6,	// (0x00034461) heading_pane_cp70

0xcac5,	// (0x0003a460) popup_eswt_tasktip_window_t1_ParamLimits

0xbb7c,	// (0x00039517) aid_touch_tab_arrow_left

0xbb8b,	// (0x00039526) aid_touch_tab_arrow_right

0x9794,	// (0x0003712f) title_pane_g3_ParamLimits

0x9794,	// (0x0003712f) title_pane_g3

0x49a6,	// (0x00032341) set_value_pane_g1

0xbacf,	// (0x0003946a) popup_toolbar_trans_pane_ParamLimits

0xcc0f,	// (0x0003a5aa) aid_size_cell_tb_trans_pane_ParamLimits

0x49e7,	// (0x00032382) bg_tb_trans_pane_ParamLimits

0xcc21,	// (0x0003a5bc) grid_tb_trans_pane_ParamLimits

0x44ba,	// (0x00031e55) cont_note_pane_ParamLimits

0x44ba,	// (0x00031e55) cont_note_pane

0x4762,	// (0x000320fd) cont_snote2_single_text_pane_ParamLimits

0x4762,	// (0x000320fd) cont_snote2_single_text_pane

0x4762,	// (0x000320fd) cont_snote2_single_graphic_pane_ParamLimits

0x4762,	// (0x000320fd) cont_snote2_single_graphic_pane

0x5f23,	// (0x000338be) cont_note_wait_pane_ParamLimits

0x5f23,	// (0x000338be) cont_note_wait_pane

0x5f23,	// (0x000338be) cont_note_image_pane_ParamLimits

0x5f23,	// (0x000338be) cont_note_image_pane

0xccc9,	// (0x0003a664) popup_note2_window_g1_ParamLimits

0xccc9,	// (0x0003a664) popup_note2_window_g1

0xccfa,	// (0x0003a695) popup_note2_window_t1_ParamLimits

0xccfa,	// (0x0003a695) popup_note2_window_t1

0xcd3f,	// (0x0003a6da) popup_note2_window_t2_ParamLimits

0xcd3f,	// (0x0003a6da) popup_note2_window_t2

0xcd84,	// (0x0003a71f) popup_note2_window_t3_ParamLimits

0xcd84,	// (0x0003a71f) popup_note2_window_t3

0xcdc9,	// (0x0003a764) popup_note2_window_t4_ParamLimits

0xcdc9,	// (0x0003a764) popup_note2_window_t4

0x459d,	// (0x00031f38) popup_note2_window_t5_ParamLimits

0x459d,	// (0x00031f38) popup_note2_window_t5

0x0004,

0xfc7c,	// (0x0003d617) popup_note2_window_t_ParamLimits

0xfc7c,	// (0x0003d617) popup_note2_window_t

0xcdf8,	// (0x0003a793) popup_note2_image_window_g1_ParamLimits

0xcdf8,	// (0x0003a793) popup_note2_image_window_g1

0xce04,	// (0x0003a79f) popup_note2_image_window_g2_ParamLimits

0xce04,	// (0x0003a79f) popup_note2_image_window_g2

0x0001,

0xfc87,	// (0x0003d622) popup_note2_image_window_g_ParamLimits

0xfc87,	// (0x0003d622) popup_note2_image_window_g

0xce16,	// (0x0003a7b1) popup_note2_image_window_t1_ParamLimits

0xce16,	// (0x0003a7b1) popup_note2_image_window_t1

0xce2e,	// (0x0003a7c9) popup_note2_image_window_t2_ParamLimits

0xce2e,	// (0x0003a7c9) popup_note2_image_window_t2

0xce46,	// (0x0003a7e1) popup_note2_image_window_t3_ParamLimits

0xce46,	// (0x0003a7e1) popup_note2_image_window_t3

0x0002,

0xfc8c,	// (0x0003d627) popup_note2_image_window_t_ParamLimits

0xfc8c,	// (0x0003d627) popup_note2_image_window_t

0x5f31,	// (0x000338cc) popup_note2_wait_window_g1_ParamLimits

0x5f31,	// (0x000338cc) popup_note2_wait_window_g1

0x5f3d,	// (0x000338d8) popup_note2_wait_window_g2_ParamLimits

0x5f3d,	// (0x000338d8) popup_note2_wait_window_g2

0x5f49,	// (0x000338e4) popup_note2_wait_window_g3_ParamLimits

0x5f49,	// (0x000338e4) popup_note2_wait_window_g3

0x0002,

0xf85e,	// (0x0003d1f9) popup_note2_wait_window_g_ParamLimits

0xf85e,	// (0x0003d1f9) popup_note2_wait_window_g

0xce62,	// (0x0003a7fd) popup_note2_wait_window_t1_ParamLimits

0xce62,	// (0x0003a7fd) popup_note2_wait_window_t1

0xce80,	// (0x0003a81b) popup_note2_wait_window_t2_ParamLimits

0xce80,	// (0x0003a81b) popup_note2_wait_window_t2

0xce9e,	// (0x0003a839) popup_note2_wait_window_t3_ParamLimits

0xce9e,	// (0x0003a839) popup_note2_wait_window_t3

0xceb0,	// (0x0003a84b) popup_note2_wait_window_t4_ParamLimits

0xceb0,	// (0x0003a84b) popup_note2_wait_window_t4

0x0003,

0xfc93,	// (0x0003d62e) popup_note2_wait_window_t_ParamLimits

0xfc93,	// (0x0003d62e) popup_note2_wait_window_t

0xcec2,	// (0x0003a85d) wait_bar2_pane_ParamLimits

0xcec2,	// (0x0003a85d) wait_bar2_pane

0xceda,	// (0x0003a875) popup_snote2_single_text_window_g1_ParamLimits

0xceda,	// (0x0003a875) popup_snote2_single_text_window_g1

0xcf02,	// (0x0003a89d) popup_snote2_single_text_window_t1_ParamLimits

0xcf02,	// (0x0003a89d) popup_snote2_single_text_window_t1

0xcf4e,	// (0x0003a8e9) popup_snote2_single_text_window_t2_ParamLimits

0xcf4e,	// (0x0003a8e9) popup_snote2_single_text_window_t2

0xcf9a,	// (0x0003a935) popup_snote2_single_text_window_t3_ParamLimits

0xcf9a,	// (0x0003a935) popup_snote2_single_text_window_t3

0xcfdb,	// (0x0003a976) popup_snote2_single_text_window_t4_ParamLimits

0xcfdb,	// (0x0003a976) popup_snote2_single_text_window_t4

0xd011,	// (0x0003a9ac) popup_snote2_single_text_window_t5_ParamLimits

0xd011,	// (0x0003a9ac) popup_snote2_single_text_window_t5

0x0004,

0xfc9c,	// (0x0003d637) popup_snote2_single_text_window_t_ParamLimits

0xfc9c,	// (0x0003d637) popup_snote2_single_text_window_t

0xd03c,	// (0x0003a9d7) popup_snote2_single_graphic_window_g1_ParamLimits

0xd03c,	// (0x0003a9d7) popup_snote2_single_graphic_window_g1

0xd064,	// (0x0003a9ff) popup_snote2_single_graphic_window_g2_ParamLimits

0xd064,	// (0x0003a9ff) popup_snote2_single_graphic_window_g2

0x0001,

0xfca7,	// (0x0003d642) popup_snote2_single_graphic_window_g_ParamLimits

0xfca7,	// (0x0003d642) popup_snote2_single_graphic_window_g

0xd08c,	// (0x0003aa27) popup_snote2_single_graphic_window_t1_ParamLimits

0xd08c,	// (0x0003aa27) popup_snote2_single_graphic_window_t1

0xd0d8,	// (0x0003aa73) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0d8,	// (0x0003aa73) popup_snote2_single_graphic_window_t2

0xcf9a,	// (0x0003a935) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf9a,	// (0x0003a935) popup_snote2_single_graphic_window_t3

0xcfdb,	// (0x0003a976) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfdb,	// (0x0003a976) popup_snote2_single_graphic_window_t4

0xd011,	// (0x0003a9ac) popup_snote2_single_graphic_window_t5_ParamLimits

0xd011,	// (0x0003a9ac) popup_snote2_single_graphic_window_t5

0x0004,

0xfcac,	// (0x0003d647) popup_snote2_single_graphic_window_t_ParamLimits

0xfcac,	// (0x0003d647) popup_snote2_single_graphic_window_t

0x74be,	// (0x00034e59) clock_nsta_pane_cp2_t1

0x74be,	// (0x00034e59) clock_nsta_pane_cp2_t2

0x0001,

0xfad3,	// (0x0003d46e) clock_nsta_pane_cp2_t

0x8a76,	// (0x00036411) form_field_data_wide_pane_g1_ParamLimits

0x4a01,	// (0x0003239c) form_field_data_wide_pane_g2_ParamLimits

0x4a01,	// (0x0003239c) form_field_data_wide_pane_g2

0x4a0d,	// (0x000323a8) form_field_data_wide_pane_g3_ParamLimits

0x4a0d,	// (0x000323a8) form_field_data_wide_pane_g3

0x0002,

0xf698,	// (0x0003d033) form_field_data_wide_pane_g_ParamLimits

0xf698,	// (0x0003d033) form_field_data_wide_pane_g

0xc32e,	// (0x00039cc9) grid_touch_3_pane_ParamLimits

0xc32e,	// (0x00039cc9) grid_touch_3_pane

0xd124,	// (0x0003aabf) cell_touch_3_pane_ParamLimits

0xd124,	// (0x0003aabf) cell_touch_3_pane

0x77ce,	// (0x00035169) cell_touch_3_pane_g1

0x77ce,	// (0x00035169) cell_touch_3_pane_g2

0x0001,

0xfb58,	// (0x0003d4f3) cell_touch_3_pane_g

0x45cf,	// (0x00031f6a) cont_query_data_pane

0x45d7,	// (0x00031f72) cont_query_data_pane_cp1

0xd153,	// (0x0003aaee) button_value_adjust_pane_cp7

0xd15b,	// (0x0003aaf6) query_popup_pane_cp3

0x4f69,	// (0x00032904) bg_popup_sub_pane_cp22_ParamLimits

0x9fb7,	// (0x00037952) navi_navi_volume_pane_cp2

0x9fd2,	// (0x0003796d) popup_side_volume_key_window_g2

0x9fe1,	// (0x0003797c) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x0003d0c9) popup_side_volume_key_window_g

0x9ffe,	// (0x00037999) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x0003d0d0) popup_side_volume_key_window_t

0x51b9,	// (0x00032b54) popup_side_volume_key_window_ParamLimits

0x86d0,	// (0x0003606b) list_double_graphic_pane_g4_ParamLimits

0x86d0,	// (0x0003606b) list_double_graphic_pane_g4

0xa863,	// (0x000381fe) list_single_2heading_msg_pane_ParamLimits

0xa863,	// (0x000381fe) list_single_2heading_msg_pane

0xad81,	// (0x0003871c) list_single_2heading_msg_pane_g1_ParamLimits

0xad81,	// (0x0003871c) list_single_2heading_msg_pane_g1

0xad8d,	// (0x00038728) list_single_2heading_msg_pane_g2_ParamLimits

0xad8d,	// (0x00038728) list_single_2heading_msg_pane_g2

0xad99,	// (0x00038734) list_single_2heading_msg_pane_g3_ParamLimits

0xad99,	// (0x00038734) list_single_2heading_msg_pane_g3

0xada5,	// (0x00038740) list_single_2heading_msg_pane_g4_ParamLimits

0xada5,	// (0x00038740) list_single_2heading_msg_pane_g4

0x0003,

0xfcb7,	// (0x0003d652) list_single_2heading_msg_pane_g_ParamLimits

0xfcb7,	// (0x0003d652) list_single_2heading_msg_pane_g

0x9285,	// (0x00036c20) list_single_2heading_msg_pane_t1_ParamLimits

0x9285,	// (0x00036c20) list_single_2heading_msg_pane_t1

0x92ad,	// (0x00036c48) list_single_2heading_msg_pane_t2_ParamLimits

0x92ad,	// (0x00036c48) list_single_2heading_msg_pane_t2

0x92e1,	// (0x00036c7c) list_single_2heading_msg_pane_t3_ParamLimits

0x92e1,	// (0x00036c7c) list_single_2heading_msg_pane_t3

0x931a,	// (0x00036cb5) list_single_2heading_msg_pane_t4_ParamLimits

0x931a,	// (0x00036cb5) list_single_2heading_msg_pane_t4

0x0003,

0xfcc0,	// (0x0003d65b) list_single_2heading_msg_pane_t_ParamLimits

0xfcc0,	// (0x0003d65b) list_single_2heading_msg_pane_t

0x4335,	// (0x00031cd0) title_pane_g4_ParamLimits

0x4335,	// (0x00031cd0) title_pane_g4

0x9ca2,	// (0x0003763d) title_pane_stacon_g3_ParamLimits

0x9ca2,	// (0x0003763d) title_pane_stacon_g3

0xcc8c,	// (0x0003a627) list_single_2graphic_im_pane_g4_ParamLimits

0xcc8c,	// (0x0003a627) list_single_2graphic_im_pane_g4

0x68d4,	// (0x0003426f) popup_side_volume_key_window_cp

0x6de5,	// (0x00034780) main_idle_act2_pane_t1

0xa4c9,	// (0x00037e64) toolbar_button_pane_g10

0x9adb,	// (0x00037476) popup_toolbar_window_cp1

0x74af,	// (0x00034e4a) clock_nsta_pane_cp_t1

0x74af,	// (0x00034e4a) clock_nsta_pane_cp_t2

0x0001,

0xface,	// (0x0003d469) clock_nsta_pane_cp_t

0x9fb7,	// (0x00037952) navi_navi_volume_pane_cp2_ParamLimits

0x9fc6,	// (0x00037961) popup_side_volume_key_window_g1_ParamLimits

0x9fd2,	// (0x0003796d) popup_side_volume_key_window_g2_ParamLimits

0x9fe1,	// (0x0003797c) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x0003d0c9) popup_side_volume_key_window_g_ParamLimits

0xaa41,	// (0x000383dc) fep_hwr_aid_pane

0x110e,	// (0x0002eaa9) bg_fep_hwr_top_pane_g4_ParamLimits

0x7832,	// (0x000351cd) fep_hwr_top_pane_g1_ParamLimits

0x7820,	// (0x000351bb) fep_hwr_top_pane_g2_ParamLimits

0xaafa,	// (0x00038495) fep_hwr_top_pane_g3_ParamLimits

0xfb23,	// (0x0003d4be) fep_hwr_top_pane_g_ParamLimits

0xab0f,	// (0x000384aa) fep_hwr_top_text_pane_ParamLimits

0x669e,	// (0x00034039) aid_touch_tab_arrow_arrow_2

0x6695,	// (0x00034030) aid_touch_tab_arrow_left_2

0xaa55,	// (0x000383f0) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xaa8c,	// (0x00038427) fep_hwr_prediction_pane

0x7987,	// (0x00035322) fep_vkb_prediction_pane

0xc648,	// (0x00039fe3) fep_vkb_side_pane_g3_ParamLimits

0xc648,	// (0x00039fe3) fep_vkb_side_pane_g3

0x7a37,	// (0x000353d2) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc777,	// (0x0003a112) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc784,	// (0x0003a11f) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbcd,	// (0x0003d568) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd180,	// (0x0003ab1b) fep_hwr_prediction_pane_g1

0xadbd,	// (0x00038758) fep_hwr_prediction_pane_g2

0xadc5,	// (0x00038760) fep_hwr_prediction_pane_g3

0xadcd,	// (0x00038768) fep_hwr_prediction_pane_g4

0x0003,

0xfcc9,	// (0x0003d664) fep_hwr_prediction_pane_g

0xd180,	// (0x0003ab1b) fep_vkb_prediction_pane_g1

0xd18a,	// (0x0003ab25) fep_vkb_prediction_pane_g2

0xd192,	// (0x0003ab2d) fep_vkb_prediction_pane_g3

0xd19a,	// (0x0003ab35) fep_vkb_prediction_pane_g4

0x0003,

0xfcd2,	// (0x0003d66d) fep_vkb_prediction_pane_g

0xa7a1,	// (0x0003813c) slider_set_pane_g3

0xa7b5,	// (0x00038150) slider_set_pane_g4

0xa7cd,	// (0x00038168) slider_set_pane_g5

0xa7a1,	// (0x0003813c) slider_set_pane_g6

0xa7e3,	// (0x0003817e) slider_set_pane_g7

0x6b4b,	// (0x000344e6) slider_form_pane_g3

0x6b54,	// (0x000344ef) slider_form_pane_g4

0x6b5c,	// (0x000344f7) slider_form_pane_g5

0x6b4b,	// (0x000344e6) slider_form_pane_g6

0xc227,	// (0x00039bc2) slider_form_pane_g7

0x7083,	// (0x00034a1e) slider_set_pane_vc_g3

0x708c,	// (0x00034a27) slider_set_pane_vc_g4

0x7095,	// (0x00034a30) slider_set_pane_vc_g5

0x7083,	// (0x00034a1e) slider_set_pane_vc_g6

0x709e,	// (0x00034a39) slider_set_pane_vc_g7

0x7083,	// (0x00034a1e) slider_form_pane_vc_g1

0x708c,	// (0x00034a27) slider_form_pane_vc_g2

0x7095,	// (0x00034a30) slider_form_pane_vc_g3

0x7083,	// (0x00034a1e) slider_form_pane_vc_g4

0x7227,	// (0x00034bc2) slider_form_pane_vc_g5

0x0004,

0xfaa7,	// (0x0003d442) slider_form_pane_vc_g

0x4317,	// (0x00031cb2) main_idle_act3_pane

0xd1a2,	// (0x0003ab3d) ai3_links_pane

0xd1ab,	// (0x0003ab46) popup_ai3_data_window_ParamLimits

0xd1ab,	// (0x0003ab46) popup_ai3_data_window

0x4317,	// (0x00031cb2) grid_ai3_links_pane

0xd1c3,	// (0x0003ab5e) cell_ai3_links_pane_ParamLimits

0xd1c3,	// (0x0003ab5e) cell_ai3_links_pane

0xd1db,	// (0x0003ab76) bg_popup_sub_pane_cp11

0xd1e8,	// (0x0003ab83) cell_ai3_links_pane_g1

0x4317,	// (0x00031cb2) bg_popup_sub_pane_cp12

0xd20d,	// (0x0003aba8) heading_ai3_data_pane

0xd215,	// (0x0003abb0) list_ai3_gene_pane

0xd221,	// (0x0003abbc) popup_ai3_data_window_g1

0xd229,	// (0x0003abc4) heading_ai3_data_pane_g1

0xd231,	// (0x0003abcc) heading_ai3_data_pane_t1

0xd23f,	// (0x0003abda) list_double_ai3_gene_pane_ParamLimits

0xd23f,	// (0x0003abda) list_double_ai3_gene_pane

0xd24c,	// (0x0003abe7) list_single_ai3_gene_pane_ParamLimits

0xd24c,	// (0x0003abe7) list_single_ai3_gene_pane

0x7793,	// (0x0003512e) list_highlight_pane_cp7_ParamLimits

0x7793,	// (0x0003512e) list_highlight_pane_cp7

0xd259,	// (0x0003abf4) list_single_a13_gene_pane_t1_ParamLimits

0xd259,	// (0x0003abf4) list_single_a13_gene_pane_t1

0xd270,	// (0x0003ac0b) list_single_ai3_gene_pane_g1

0xd279,	// (0x0003ac14) list_single_ai3_gene_pane_g2

0x0001,

0xfcdb,	// (0x0003d676) list_single_ai3_gene_pane_g

0xd281,	// (0x0003ac1c) list_double_ai3_gene_pane_g1_ParamLimits

0xd281,	// (0x0003ac1c) list_double_ai3_gene_pane_g1

0xd28d,	// (0x0003ac28) list_double_ai3_gene_pane_t1_ParamLimits

0xd28d,	// (0x0003ac28) list_double_ai3_gene_pane_t1

0xd2a9,	// (0x0003ac44) list_double_ai3_gene_pane_t2_ParamLimits

0xd2a9,	// (0x0003ac44) list_double_ai3_gene_pane_t2

0xd2be,	// (0x0003ac59) list_double_ai3_gene_pane_t3_ParamLimits

0xd2be,	// (0x0003ac59) list_double_ai3_gene_pane_t3

0x0002,

0xfce0,	// (0x0003d67b) list_double_ai3_gene_pane_t_ParamLimits

0xfce0,	// (0x0003d67b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x927b,	// (0x00036c16) aid_size_min_col_2

0xd16c,	// (0x0003ab07) aid_size_min_msg_ParamLimits

0xd16c,	// (0x0003ab07) aid_size_min_msg

0xc65c,	// (0x00039ff7) fep_vkb_top_text_pane_g2_ParamLimits

0xc65c,	// (0x00039ff7) fep_vkb_top_text_pane_g2

0x0001,

0xfb53,	// (0x0003d4ee) fep_vkb_top_text_pane_g_ParamLimits

0xfb53,	// (0x0003d4ee) fep_vkb_top_text_pane_g

0x4317,	// (0x00031cb2) main_hc_apps_shell_pane

0xd2db,	// (0x0003ac76) grid_hc_apps_pane_ParamLimits

0xd2db,	// (0x0003ac76) grid_hc_apps_pane

0xd2ea,	// (0x0003ac85) list_hc_apps_pane

0xd2f2,	// (0x0003ac8d) scroll_pane_cp37_ParamLimits

0xd2f2,	// (0x0003ac8d) scroll_pane_cp37

0xd2fe,	// (0x0003ac99) cell_hc_apps_pane_ParamLimits

0xd2fe,	// (0x0003ac99) cell_hc_apps_pane

0xd3ae,	// (0x0003ad49) cell_hc_apps_pane_g1_ParamLimits

0xd3ae,	// (0x0003ad49) cell_hc_apps_pane_g1

0xd3df,	// (0x0003ad7a) cell_hc_apps_pane_g2_ParamLimits

0xd3df,	// (0x0003ad7a) cell_hc_apps_pane_g2

0xd3fb,	// (0x0003ad96) cell_hc_apps_pane_g3_ParamLimits

0xd3fb,	// (0x0003ad96) cell_hc_apps_pane_g3

0x0002,

0xfce7,	// (0x0003d682) cell_hc_apps_pane_g_ParamLimits

0xfce7,	// (0x0003d682) cell_hc_apps_pane_g

0xd41d,	// (0x0003adb8) cell_hc_apps_pane_t1_ParamLimits

0xd41d,	// (0x0003adb8) cell_hc_apps_pane_t1

0x44ba,	// (0x00031e55) grid_highlight_pane_cp10_ParamLimits

0x44ba,	// (0x00031e55) grid_highlight_pane_cp10

0xd45d,	// (0x0003adf8) list_single_hc_apps_pane_ParamLimits

0xd45d,	// (0x0003adf8) list_single_hc_apps_pane

0xd4d0,	// (0x0003ae6b) list_single_hc_apps_pane_g1

0xadd5,	// (0x00038770) list_single_hc_apps_pane_g2

0x0001,

0xfcee,	// (0x0003d689) list_single_hc_apps_pane_g

0xadee,	// (0x00038789) list_single_hc_apps_pane_g2_copy1

0x933f,	// (0x00036cda) list_single_hc_apps_pane_t1

0x4387,	// (0x00031d22) bg_set_opt_pane_cp_ParamLimits

0x9844,	// (0x000371df) setting_slider_pane_t1_ParamLimits

0x985d,	// (0x000371f8) setting_slider_pane_t2_ParamLimits

0x9876,	// (0x00037211) setting_slider_pane_t3_ParamLimits

0xf576,	// (0x0003cf11) setting_slider_pane_t_ParamLimits

0x988d,	// (0x00037228) slider_set_pane_ParamLimits

0xa397,	// (0x00037d32) control_pane_g5_ParamLimits

0xa397,	// (0x00037d32) control_pane_g5

0x6b0d,	// (0x000344a8) slider_set_pane_g1_ParamLimits

0xa795,	// (0x00038130) slider_set_pane_g2_ParamLimits

0xa7a1,	// (0x0003813c) slider_set_pane_g3_ParamLimits

0xa7b5,	// (0x00038150) slider_set_pane_g4_ParamLimits

0xa7cd,	// (0x00038168) slider_set_pane_g5_ParamLimits

0xa7a1,	// (0x0003813c) slider_set_pane_g6_ParamLimits

0xa7e3,	// (0x0003817e) slider_set_pane_g7_ParamLimits

0xf97a,	// (0x0003d315) slider_set_pane_g_ParamLimits

0x529a,	// (0x00032c35) navi_icon_text_pane_ParamLimits

0xbb52,	// (0x000394ed) aid_fill_nsta_2_ParamLimits

0xbb7c,	// (0x00039517) aid_touch_tab_arrow_left_ParamLimits

0xbb8b,	// (0x00039526) aid_touch_tab_arrow_right_ParamLimits

0xbbf8,	// (0x00039593) clock_nsta_pane_ParamLimits

0x6677,	// (0x00034012) navi_icon_pane_g1_ParamLimits

0x6683,	// (0x0003401e) navi_text_pane_t1_ParamLimits

0x7506,	// (0x00034ea1) navi_icon_text_pane_g1_ParamLimits

0x7512,	// (0x00034ead) navi_icon_text_pane_t1_ParamLimits

0xd4d0,	// (0x0003ae6b) list_single_hc_apps_pane_g1_ParamLimits

0xadd5,	// (0x00038770) list_single_hc_apps_pane_g2_ParamLimits

0xfcee,	// (0x0003d689) list_single_hc_apps_pane_g_ParamLimits

0xadee,	// (0x00038789) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x933f,	// (0x00036cda) list_single_hc_apps_pane_t1_ParamLimits

0x9698,	// (0x00037033) popup_toolbar2_fixed_window_ParamLimits

0x9698,	// (0x00037033) popup_toolbar2_fixed_window

0xbac5,	// (0x00039460) popup_toolbar2_float_window

0x4317,	// (0x00031cb2) bg_popup_sub_pane_cp27

0xd4e9,	// (0x0003ae84) grid_toolbar2_float_pane

0x4317,	// (0x00031cb2) bg_popup_sub_pane_cp26

0xd4e9,	// (0x0003ae84) grid_toolbar2_fixed_pane

0xd4f1,	// (0x0003ae8c) cell_toolbar2_fixed_pane_ParamLimits

0xd4f1,	// (0x0003ae8c) cell_toolbar2_fixed_pane

0xd502,	// (0x0003ae9d) cell_toolbar2_fixed_pane_g1

0xd50b,	// (0x0003aea6) toolbar2_fixed_button_pane

0x5976,	// (0x00033311) toolbar2_fixed_button_pane_g1

0x5986,	// (0x00033321) toolbar2_fixed_button_pane_g2

0x597e,	// (0x00033319) toolbar2_fixed_button_pane_g3

0x5996,	// (0x00033331) toolbar2_fixed_button_pane_g4

0x598e,	// (0x00033329) toolbar2_fixed_button_pane_g5

0x599e,	// (0x00033339) toolbar2_fixed_button_pane_g6

0x59a6,	// (0x00033341) toolbar2_fixed_button_pane_g7

0x59b6,	// (0x00033351) toolbar2_fixed_button_pane_g8

0x59ae,	// (0x00033349) toolbar2_fixed_button_pane_g9

0x0008,

0xf87c,	// (0x0003d217) toolbar2_fixed_button_pane_g

0xd513,	// (0x0003aeae) cell_toolbar2_float_pane_ParamLimits

0xd513,	// (0x0003aeae) cell_toolbar2_float_pane

0xd524,	// (0x0003aebf) cell_toolbar2_float_pane_g1

0xd50b,	// (0x0003aea6) toolbar2_fixed_button_pane_cp

0xc60f,	// (0x00039faa) fep_vkb_accented_list_pane_ParamLimits

0xc60f,	// (0x00039faa) fep_vkb_accented_list_pane

0xac5d,	// (0x000385f8) bg_popup_fep_shadow_pane_g9

0x541c,	// (0x00032db7) bg_popup_fep_shadow_pane_cp3

0x4aed,	// (0x00032488) list_accented_list_pane

0xd52d,	// (0x0003aec8) list_single_accented_list_pane_ParamLimits

0xd52d,	// (0x0003aec8) list_single_accented_list_pane

0x541c,	// (0x00032db7) list_highlight_pane_cp10

0xd53e,	// (0x0003aed9) list_single_accented_list_pane_t1

0xba1d,	// (0x000393b8) popup_slider_window_ParamLimits

0xba1d,	// (0x000393b8) popup_slider_window

0xd163,	// (0x0003aafe) aid_indentation_list_msg

0xd5f8,	// (0x0003af93) bg_popup_window_pane_cp19

0xd662,	// (0x0003affd) popup_slider_window_g1

0xd67e,	// (0x0003b019) popup_slider_window_g2

0xd69a,	// (0x0003b035) popup_slider_window_g3

0x0005,

0xfcf3,	// (0x0003d68e) popup_slider_window_g

0xd6f6,	// (0x0003b091) popup_slider_window_t1

0xd76a,	// (0x0003b105) small_volume_slider_vertical_pane

0x77ce,	// (0x00035169) small_volume_slider_vertical_pane_g1

0x77ce,	// (0x00035169) small_volume_slider_vertical_pane_g2

0xd786,	// (0x0003b121) small_volume_slider_vertical_pane_g3

0x0002,

0xfd05,	// (0x0003d6a0) small_volume_slider_vertical_pane_g

0x9468,	// (0x00036e03) area_side_right_pane_ParamLimits

0x9468,	// (0x00036e03) area_side_right_pane

0xae0a,	// (0x000387a5) aid_size_side_button_ParamLimits

0xae0a,	// (0x000387a5) aid_size_side_button

0xae1e,	// (0x000387b9) grid_sctrl_middle_pane_ParamLimits

0xae1e,	// (0x000387b9) grid_sctrl_middle_pane

0xae3e,	// (0x000387d9) sctrl_sk_bottom_pane

0xae4f,	// (0x000387ea) sctrl_sk_top_pane

0xae61,	// (0x000387fc) aid_touch_sctrl_top

0x44ba,	// (0x00031e55) bg_sctrl_sk_pane_ParamLimits

0x44ba,	// (0x00031e55) bg_sctrl_sk_pane

0xae6e,	// (0x00038809) sctrl_sk_top_pane_g1

0xae7b,	// (0x00038816) sctrl_sk_top_pane_t1

0xae61,	// (0x000387fc) aid_touch_sctrl_bottom

0x44ba,	// (0x00031e55) bg_sctrl_sk_pane_cp_ParamLimits

0x44ba,	// (0x00031e55) bg_sctrl_sk_pane_cp

0xae96,	// (0x00038831) sctrl_sk_bottom_pane_g1

0xae7b,	// (0x00038816) sctrl_sk_bottom_pane_t1

0xae9f,	// (0x0003883a) cell_sctrl_middle_pane_ParamLimits

0xae9f,	// (0x0003883a) cell_sctrl_middle_pane

0xaeba,	// (0x00038855) aid_touch_sctrl_middle_ParamLimits

0xaeba,	// (0x00038855) aid_touch_sctrl_middle

0x49e7,	// (0x00032382) bg_sctrl_middle_pane_ParamLimits

0x49e7,	// (0x00032382) bg_sctrl_middle_pane

0x7a37,	// (0x000353d2) cell_sctrl_middle_pane_g1_ParamLimits

0x7a37,	// (0x000353d2) cell_sctrl_middle_pane_g1

0xaecc,	// (0x00038867) cell_sctrl_middle_pane_g2_ParamLimits

0xaecc,	// (0x00038867) cell_sctrl_middle_pane_g2

0x0001,

0xfd11,	// (0x0003d6ac) cell_sctrl_middle_pane_g_ParamLimits

0xfd11,	// (0x0003d6ac) cell_sctrl_middle_pane_g

0x5976,	// (0x00033311) bg_sctrl_middle_pane_g1

0x5986,	// (0x00033321) bg_sctrl_middle_pane_g2

0x597e,	// (0x00033319) bg_sctrl_middle_pane_g3

0x5996,	// (0x00033331) bg_sctrl_middle_pane_g4

0x598e,	// (0x00033329) bg_sctrl_middle_pane_g5

0x599e,	// (0x00033339) bg_sctrl_middle_pane_g6

0x59a6,	// (0x00033341) bg_sctrl_middle_pane_g7

0x59b6,	// (0x00033351) bg_sctrl_middle_pane_g8

0x0007,

0xfd16,	// (0x0003d6b1) bg_sctrl_middle_pane_g

0x59ae,	// (0x00033349) bg_sctrl_middle_pane_g8_copy1

0x5976,	// (0x00033311) bg_sctrl_sk_pane_g1

0x5986,	// (0x00033321) bg_sctrl_sk_pane_g2

0x597e,	// (0x00033319) bg_sctrl_sk_pane_g3

0x0008,

0xf87c,	// (0x0003d217) bg_sctrl_sk_pane_g

0x4920,	// (0x000322bb) aid_size_touch_scroll_bar

0x5996,	// (0x00033331) bg_sctrl_sk_pane_g4

0x598e,	// (0x00033329) bg_sctrl_sk_pane_g5

0x599e,	// (0x00033339) bg_sctrl_sk_pane_g6

0x59a6,	// (0x00033341) bg_sctrl_sk_pane_g7

0x59b6,	// (0x00033351) bg_sctrl_sk_pane_g8

0x59ae,	// (0x00033349) bg_sctrl_sk_pane_g9

0x56aa,	// (0x00033045) popup_fep_china_hwr2_fs_candidate_window

0xb72b,	// (0x000390c6) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb72b,	// (0x000390c6) popup_fep_china_hwr2_fs_control_window

0x7a37,	// (0x000353d2) sctrl_sk_top_pane_g2

0x0001,

0xfd0c,	// (0x0003d6a7) sctrl_sk_top_pane_g

0xd78f,	// (0x0003b12a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd78f,	// (0x0003b12a) aid_fep_china_hwr2_fs_cell

0xd7a1,	// (0x0003b13c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd7a1,	// (0x0003b13c) bg_popup_fep_shadow_pane_cp4

0xd7b8,	// (0x0003b153) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd7b8,	// (0x0003b153) bg_popup_fep_shadow_pane_cp5

0xd7ca,	// (0x0003b165) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd7ca,	// (0x0003b165) popup_fep_china_hwr2_fs_control_bar_grid

0xd7da,	// (0x0003b175) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7e2,	// (0x0003b17d) aid_fep_china_hwr2_fs_candi_cell

0x4317,	// (0x00031cb2) bg_popup_fep_shadow_pane_cp6

0xd7ec,	// (0x0003b187) popup_fep_china_hwr2_fs_candidate_grid

0xd7f6,	// (0x0003b191) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7f6,	// (0x0003b191) cell_fep_china_hwr2_fs_funtion_grid

0x77ce,	// (0x00035169) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd80e,	// (0x0003b1a9) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd80e,	// (0x0003b1a9) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd81c,	// (0x0003b1b7) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd81c,	// (0x0003b1b7) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd27,	// (0x0003d6c2) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd27,	// (0x0003d6c2) cell_fep_china_hwr2_fs_funtion_grid_g

0xd832,	// (0x0003b1cd) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd832,	// (0x0003b1cd) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd847,	// (0x0003b1e2) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd847,	// (0x0003b1e2) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2c,	// (0x0003d6c7) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2c,	// (0x0003d6c7) cell_fep_china_hwr2_fs_funtion_grid_t

0xd863,	// (0x0003b1fe) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd86b,	// (0x0003b206) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd873,	// (0x0003b20e) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd31,	// (0x0003d6cc) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd87b,	// (0x0003b216) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd87b,	// (0x0003b216) cell_fep_china_hwr2_fs_candidate_grid

0xd894,	// (0x0003b22f) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd89c,	// (0x0003b237) popup_fep_china_hwr2_fs_candidate_grid_g21

0x77ce,	// (0x00035169) cell_fep_china_hwr2_fs_candidate_grid_g1

0x77ce,	// (0x00035169) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb58,	// (0x0003d4f3) cell_fep_china_hwr2_fs_candidate_grid_g

0xd8a4,	// (0x0003b23f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x57b7,	// (0x00033152) clock_nsta_pane_cp_24_ParamLimits

0x57b7,	// (0x00033152) clock_nsta_pane_cp_24

0x581f,	// (0x000331ba) indicator_nsta_pane_cp_24_ParamLimits

0x581f,	// (0x000331ba) indicator_nsta_pane_cp_24

0x658d,	// (0x00033f28) heading_pane_g1

0x0001,

0xf8e1,	// (0x0003d27c) heading_pane_g

0x6c70,	// (0x0003460b) grid_sct_catagory_button_pane

0x6b73,	// (0x0003450e) scroll_pane_cp5_ParamLimits

0x7538,	// (0x00034ed3) button_value_adjust_pane_cp5_ParamLimits

0x7538,	// (0x00034ed3) button_value_adjust_pane_cp5

0x75f6,	// (0x00034f91) form2_midp_time_pane_ParamLimits

0xd8b2,	// (0x0003b24d) cell_sct_catagory_button_pane_ParamLimits

0xd8b2,	// (0x0003b24d) cell_sct_catagory_button_pane

0x7793,	// (0x0003512e) bg_button_pane_cp01_ParamLimits

0x7793,	// (0x0003512e) bg_button_pane_cp01

0x77ce,	// (0x00035169) cell_sct_catagory_button_pane_g1

0xba54,	// (0x000393ef) popup_tb_extension_window

0xd8c4,	// (0x0003b25f) aid_size_cell_ext_ParamLimits

0xd8c4,	// (0x0003b25f) aid_size_cell_ext

0x44ba,	// (0x00031e55) bg_tb_trans_pane_cp1_ParamLimits

0x44ba,	// (0x00031e55) bg_tb_trans_pane_cp1

0xd8e4,	// (0x0003b27f) grid_tb_ext_pane_ParamLimits

0xd8e4,	// (0x0003b27f) grid_tb_ext_pane

0xd914,	// (0x0003b2af) cell_tb_ext_pane_ParamLimits

0xd914,	// (0x0003b2af) cell_tb_ext_pane

0xd92b,	// (0x0003b2c6) cell_tb_ext_pane_g1_ParamLimits

0xd92b,	// (0x0003b2c6) cell_tb_ext_pane_g1

0xd948,	// (0x0003b2e3) cell_tb_ext_pane_t1

0x44ba,	// (0x00031e55) list_highlight_pane_cp11_ParamLimits

0x44ba,	// (0x00031e55) list_highlight_pane_cp11

0x96b7,	// (0x00037052) popup_uni_indicator_window_ParamLimits

0x96b7,	// (0x00037052) popup_uni_indicator_window

0x49e7,	// (0x00032382) bg_popup_sub_pane_cp14

0xd963,	// (0x0003b2fe) list_uniindi_pane

0xd96f,	// (0x0003b30a) uniindi_top_pane

0x44ba,	// (0x00031e55) bg_uniindi_top_pane

0xd98e,	// (0x0003b329) uniindi_top_pane_g1

0xd9a4,	// (0x0003b33f) uniindi_top_pane_g2

0x0003,

0xfd38,	// (0x0003d6d3) uniindi_top_pane_g

0xd9ce,	// (0x0003b369) uniindi_top_pane_t1

0xd9f8,	// (0x0003b393) list_single_uniindi_pane_ParamLimits

0xd9f8,	// (0x0003b393) list_single_uniindi_pane

0x77ce,	// (0x00035169) bg_uniindi_top_pane_g1

0xda0a,	// (0x0003b3a5) list_single_uniindi_pane_g1

0xda1d,	// (0x0003b3b8) list_single_uniindi_pane_t1

0x4317,	// (0x00031cb2) control_bg_pane

0xda42,	// (0x0003b3dd) bg_sctrl_sk_pane_cp1

0xda4b,	// (0x0003b3e6) bg_sctrl_sk_pane_cp2

0xda54,	// (0x0003b3ef) control_bg_pane_g1

0xda5d,	// (0x0003b3f8) control_bg_pane_g2

0x0001,

0xfd41,	// (0x0003d6dc) control_bg_pane_g

0x73f1,	// (0x00034d8c) cell_indicator_nsta_pane_g1_ParamLimits

0xc372,	// (0x00039d0d) cell_indicator_nsta_pane_g2_ParamLimits

0xfabc,	// (0x0003d457) cell_indicator_nsta_pane_g_ParamLimits

0x9044,	// (0x000369df) form2_midp_time_pane_t1_ParamLimits

0x4762,	// (0x000320fd) main_idle_act4_pane_ParamLimits

0x4762,	// (0x000320fd) main_idle_act4_pane

0xba54,	// (0x000393ef) popup_tb_extension_window_ParamLimits

0xd904,	// (0x0003b29f) tb_ext_find_pane_ParamLimits

0xd904,	// (0x0003b29f) tb_ext_find_pane

0xda66,	// (0x0003b401) ai_gene_pane_1_cp1

0x54b0,	// (0x00032e4b) ai_gene_pane_2_cp1

0xda6e,	// (0x0003b409) list_single_idle_plugin_calendar_pane

0xda77,	// (0x0003b412) list_single_idle_plugin_notification_pane

0xda80,	// (0x0003b41b) list_single_idle_plugin_player_pane

0xda89,	// (0x0003b424) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda89,	// (0x0003b424) list_single_idle_plugin_shortcut_pane

0xdaab,	// (0x0003b446) main_idle_act4_pane_t1

0xdabd,	// (0x0003b458) main_idle_act4_pane_t2

0x0001,

0xfd46,	// (0x0003d6e1) main_idle_act4_pane_t

0xdacf,	// (0x0003b46a) middle_sk_idle_act4_pane_ParamLimits

0xdacf,	// (0x0003b46a) middle_sk_idle_act4_pane

0xdae5,	// (0x0003b480) popup_clock_digital_analogue_window_cp2

0xdaff,	// (0x0003b49a) shortcut_wheel_idle_act4_pane_ParamLimits

0xdaff,	// (0x0003b49a) shortcut_wheel_idle_act4_pane

0x77ce,	// (0x00035169) shortcut_wheel_idle_act4_pane_g1

0x77ce,	// (0x00035169) shortcut_wheel_idle_act4_pane_g2

0x77ce,	// (0x00035169) shortcut_wheel_idle_act4_pane_g3

0x77ce,	// (0x00035169) shortcut_wheel_idle_act4_pane_g4

0x77ce,	// (0x00035169) shortcut_wheel_idle_act4_pane_g5

0xdb13,	// (0x0003b4ae) shortcut_wheel_idle_act4_pane_g6

0xdb1b,	// (0x0003b4b6) shortcut_wheel_idle_act4_pane_g7

0xdb23,	// (0x0003b4be) shortcut_wheel_idle_act4_pane_g8

0xdb2b,	// (0x0003b4c6) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4b,	// (0x0003d6e6) shortcut_wheel_idle_act4_pane_g

0x7a37,	// (0x000353d2) middle_sk_idle_act4_pane_g1_ParamLimits

0x7a37,	// (0x000353d2) middle_sk_idle_act4_pane_g1

0xdb8f,	// (0x0003b52a) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb8f,	// (0x0003b52a) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6e,	// (0x0003d709) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6e,	// (0x0003d709) middle_sk_idle_act4_pane_g

0xdb9b,	// (0x0003b536) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb9b,	// (0x0003b536) middle_sk_idle_act4_pane_t1

0xdbb8,	// (0x0003b553) grid_ai_shortcut_pane_ParamLimits

0xdbb8,	// (0x0003b553) grid_ai_shortcut_pane

0xdbd1,	// (0x0003b56c) list_highlight_pane_cp16_ParamLimits

0xdbd1,	// (0x0003b56c) list_highlight_pane_cp16

0xdbde,	// (0x0003b579) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbde,	// (0x0003b579) list_single_idle_plugin_shortcut_pane_g1

0xdbea,	// (0x0003b585) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbea,	// (0x0003b585) list_single_idle_plugin_shortcut_pane_g2

0xdc02,	// (0x0003b59d) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdc02,	// (0x0003b59d) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd73,	// (0x0003d70e) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd73,	// (0x0003d70e) list_single_idle_plugin_shortcut_pane_g

0xdc15,	// (0x0003b5b0) cell_ai_shortcut_pane_ParamLimits

0xdc15,	// (0x0003b5b0) cell_ai_shortcut_pane

0xdc36,	// (0x0003b5d1) cell_ai_shortcut_pane_g1_ParamLimits

0xdc36,	// (0x0003b5d1) cell_ai_shortcut_pane_g1

0xda66,	// (0x0003b401) ai_gene_pane_1_cp2

0xdc58,	// (0x0003b5f3) ai_gene_pane_2_cp2

0xdc60,	// (0x0003b5fb) list_highlight_pane_cp15

0xdc69,	// (0x0003b604) list_single_idle_plugin_calendar_pane_g1

0xdc60,	// (0x0003b5fb) list_highlight_pane_cp17

0xdc71,	// (0x0003b60c) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc79,	// (0x0003b614) list_single_idle_plugin_player_pane_g1

0x6e85,	// (0x00034820) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7a,	// (0x0003d715) list_single_idle_plugin_player_pane_g

0xdc81,	// (0x0003b61c) list_single_idle_plugin_player_pane_t1

0xdc8f,	// (0x0003b62a) list_single_idle_plugin_player_pane_t2

0xdc9d,	// (0x0003b638) list_single_idle_plugin_player_pane_t3

0xdcab,	// (0x0003b646) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7f,	// (0x0003d71a) list_single_idle_plugin_player_pane_t

0xdcb9,	// (0x0003b654) wait_bar_pane_cp15

0xdcc1,	// (0x0003b65c) grid_ai_notification_pane

0x6e85,	// (0x00034820) list_single_idle_plugin_notification_pane_g1

0xdcca,	// (0x0003b665) cell_ai_notification_pane_ParamLimits

0xdcca,	// (0x0003b665) cell_ai_notification_pane

0xdcd7,	// (0x0003b672) cell_ai_notification_pane_g1

0xdcdf,	// (0x0003b67a) cell_ai_notification_pane_t1

0xdced,	// (0x0003b688) tb_ext_find_button_pane

0xdcf5,	// (0x0003b690) tb_ext_find_pane_g1

0xdcfd,	// (0x0003b698) tb_ext_find_pane_t1

0x4f08,	// (0x000328a3) tb_ext_find_button_pane_g1

0xdd0b,	// (0x0003b6a6) tb_ext_find_button_pane_g2

0x0001,

0xfd88,	// (0x0003d723) tb_ext_find_button_pane_g

0xdaab,	// (0x0003b446) main_idle_act4_pane_t1_ParamLimits

0xdabd,	// (0x0003b458) main_idle_act4_pane_t2_ParamLimits

0xfd46,	// (0x0003d6e1) main_idle_act4_pane_t_ParamLimits

0xdae5,	// (0x0003b480) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdaf3,	// (0x0003b48e) sat_plugin_idle_act4_pane_ParamLimits

0xdaf3,	// (0x0003b48e) sat_plugin_idle_act4_pane

0xdd14,	// (0x0003b6af) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd14,	// (0x0003b6af) sat_plugin_idle_act4_pane_t1

0xdd27,	// (0x0003b6c2) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd27,	// (0x0003b6c2) sat_plugin_idle_act4_pane_t2

0xdd3a,	// (0x0003b6d5) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd3a,	// (0x0003b6d5) sat_plugin_idle_act4_pane_t3

0xdd4d,	// (0x0003b6e8) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd4d,	// (0x0003b6e8) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8d,	// (0x0003d728) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8d,	// (0x0003d728) sat_plugin_idle_act4_pane_t

0x9600,	// (0x00036f9b) popup_battery_window_ParamLimits

0x9600,	// (0x00036f9b) popup_battery_window

0x44ba,	// (0x00031e55) bg_popup_sub_pane_cp25_ParamLimits

0x44ba,	// (0x00031e55) bg_popup_sub_pane_cp25

0xdd60,	// (0x0003b6fb) popup_battery_window_g1_ParamLimits

0xdd60,	// (0x0003b6fb) popup_battery_window_g1

0xdd6c,	// (0x0003b707) popup_battery_window_t1_ParamLimits

0xdd6c,	// (0x0003b707) popup_battery_window_t1

0xdd7e,	// (0x0003b719) popup_battery_window_t2_ParamLimits

0xdd7e,	// (0x0003b719) popup_battery_window_t2

0x0001,

0xfd96,	// (0x0003d731) popup_battery_window_t_ParamLimits

0xfd96,	// (0x0003d731) popup_battery_window_t

0xa1dd,	// (0x00037b78) midp_canvas_pane_ParamLimits

0xa241,	// (0x00037bdc) midp_keypad_pane_ParamLimits

0xa241,	// (0x00037bdc) midp_keypad_pane

0x4b3e,	// (0x000324d9) main_midp_pane_ParamLimits

0x74cd,	// (0x00034e68) signal_pane_g2_cp_ParamLimits

0xdd9b,	// (0x0003b736) aid_size_cell_midp_keypad_ParamLimits

0xdd9b,	// (0x0003b736) aid_size_cell_midp_keypad

0xddb5,	// (0x0003b750) midp_keyp_game_grid_pane_ParamLimits

0xddb5,	// (0x0003b750) midp_keyp_game_grid_pane

0xddd5,	// (0x0003b770) midp_keyp_rocker_pane_ParamLimits

0xddd5,	// (0x0003b770) midp_keyp_rocker_pane

0xde00,	// (0x0003b79b) midp_keyp_sk_left_pane_ParamLimits

0xde00,	// (0x0003b79b) midp_keyp_sk_left_pane

0xde7b,	// (0x0003b816) midp_keyp_sk_right_pane_ParamLimits

0xde7b,	// (0x0003b816) midp_keyp_sk_right_pane

0x4317,	// (0x00031cb2) bg_button_pane_cp03

0xded5,	// (0x0003b870) midp_keyp_sk_left_pane_g1

0x4317,	// (0x00031cb2) bg_button_pane_cp04

0xded5,	// (0x0003b870) midp_keyp_sk_right_pane_g1

0x77ce,	// (0x00035169) midp_keyp_rocker_pane_g1

0xdede,	// (0x0003b879) keyp_game_cell_pane_ParamLimits

0xdede,	// (0x0003b879) keyp_game_cell_pane

0x4317,	// (0x00031cb2) bg_button_pane_cp02

0xdef1,	// (0x0003b88c) keyp_game_cell_pane_g1

0x9636,	// (0x00036fd1) popup_fep_vkb2_window_ParamLimits

0x9636,	// (0x00036fd1) popup_fep_vkb2_window

0xaeea,	// (0x00038885) aid_size_cell_vkb2_ParamLimits

0xaeea,	// (0x00038885) aid_size_cell_vkb2

0xaf3e,	// (0x000388d9) popup_fep_vkb2_window_g1_ParamLimits

0xaf3e,	// (0x000388d9) popup_fep_vkb2_window_g1

0xaf7e,	// (0x00038919) vkb2_area_bottom_pane_ParamLimits

0xaf7e,	// (0x00038919) vkb2_area_bottom_pane

0xafca,	// (0x00038965) vkb2_area_keypad_pane_ParamLimits

0xafca,	// (0x00038965) vkb2_area_keypad_pane

0xb00c,	// (0x000389a7) vkb2_area_top_pane_ParamLimits

0xb00c,	// (0x000389a7) vkb2_area_top_pane

0xb086,	// (0x00038a21) vkb2_top_entry_pane_ParamLimits

0xb086,	// (0x00038a21) vkb2_top_entry_pane

0xb0b0,	// (0x00038a4b) vkb2_top_grid_left_pane_ParamLimits

0xb0b0,	// (0x00038a4b) vkb2_top_grid_left_pane

0xb0ce,	// (0x00038a69) vkb2_top_grid_right_pane_ParamLimits

0xb0ce,	// (0x00038a69) vkb2_top_grid_right_pane

0xb0ec,	// (0x00038a87) vkb2_cell_keypad_pane_ParamLimits

0xb0ec,	// (0x00038a87) vkb2_cell_keypad_pane

0xb1bd,	// (0x00038b58) vkb2_area_bottom_grid_pane_ParamLimits

0xb1bd,	// (0x00038b58) vkb2_area_bottom_grid_pane

0xb1e3,	// (0x00038b7e) vkb2_area_bottom_pane_g1_ParamLimits

0xb1e3,	// (0x00038b7e) vkb2_area_bottom_pane_g1

0xb207,	// (0x00038ba2) vkb2_area_bottom_pane_g2_ParamLimits

0xb207,	// (0x00038ba2) vkb2_area_bottom_pane_g2

0xb235,	// (0x00038bd0) vkb2_area_bottom_pane_g3_ParamLimits

0xb235,	// (0x00038bd0) vkb2_area_bottom_pane_g3

0x0002,

0xfd9b,	// (0x0003d736) vkb2_area_bottom_pane_g_ParamLimits

0xfd9b,	// (0x0003d736) vkb2_area_bottom_pane_g

0xb296,	// (0x00038c31) vkb2_top_cell_left_pane_ParamLimits

0xb296,	// (0x00038c31) vkb2_top_cell_left_pane

0xef4e,	// (0x0003c8e9) vkb2_top_entry_pane_g1_ParamLimits

0xef4e,	// (0x0003c8e9) vkb2_top_entry_pane_g1

0xef5c,	// (0x0003c8f7) vkb2_top_entry_pane_t1_ParamLimits

0xef5c,	// (0x0003c8f7) vkb2_top_entry_pane_t1

0xdf02,	// (0x0003b89d) vkb2_top_entry_pane_t2_ParamLimits

0xdf02,	// (0x0003b89d) vkb2_top_entry_pane_t2

0xdf34,	// (0x0003b8cf) vkb2_top_entry_pane_t3_ParamLimits

0xdf34,	// (0x0003b8cf) vkb2_top_entry_pane_t3

0x0002,

0xfda2,	// (0x0003d73d) vkb2_top_entry_pane_t_ParamLimits

0xfda2,	// (0x0003d73d) vkb2_top_entry_pane_t

0xb2e3,	// (0x00038c7e) vkb2_top_grid_right_pane_g1_ParamLimits

0xb2e3,	// (0x00038c7e) vkb2_top_grid_right_pane_g1

0xb2f9,	// (0x00038c94) vkb2_top_grid_right_pane_g2_ParamLimits

0xb2f9,	// (0x00038c94) vkb2_top_grid_right_pane_g2

0xb311,	// (0x00038cac) vkb2_top_grid_right_pane_g3_ParamLimits

0xb311,	// (0x00038cac) vkb2_top_grid_right_pane_g3

0xb329,	// (0x00038cc4) vkb2_top_grid_right_pane_g4_ParamLimits

0xb329,	// (0x00038cc4) vkb2_top_grid_right_pane_g4

0x0003,

0xfda9,	// (0x0003d744) vkb2_top_grid_right_pane_g_ParamLimits

0xfda9,	// (0x0003d744) vkb2_top_grid_right_pane_g

0xb33f,	// (0x00038cda) vkb2_top_cell_left_pane_g1

0xb356,	// (0x00038cf1) vkb2_cell_keypad_pane_g1_ParamLimits

0xb356,	// (0x00038cf1) vkb2_cell_keypad_pane_g1

0xdf58,	// (0x0003b8f3) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf58,	// (0x0003b8f3) vkb2_cell_keypad_pane_t1

0xb364,	// (0x00038cff) vkb2_cell_bottom_grid_pane_ParamLimits

0xb364,	// (0x00038cff) vkb2_cell_bottom_grid_pane

0xb39d,	// (0x00038d38) vkb2_cell_bottom_grid_pane_g1

0xdb33,	// (0x0003b4ce) aid_call2_pane_cp02

0xdb3b,	// (0x0003b4d6) aid_call_pane_cp02

0xdb43,	// (0x0003b4de) clock_digital_number_pane_cp10

0xdb4b,	// (0x0003b4e6) clock_digital_number_pane_cp11

0xdb53,	// (0x0003b4ee) clock_digital_number_pane_cp12

0xdb5b,	// (0x0003b4f6) clock_digital_number_pane_cp13

0xdb63,	// (0x0003b4fe) clock_digital_separator_pane_cp10

0x4f08,	// (0x000328a3) popup_clock_digital_analogue_window_cp2_g1

0x4f08,	// (0x000328a3) popup_clock_digital_analogue_window_cp2_g2

0xdb6b,	// (0x0003b506) popup_clock_digital_analogue_window_cp2_g3

0x4f08,	// (0x000328a3) popup_clock_digital_analogue_window_cp2_g4

0xdb6b,	// (0x0003b506) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5e,	// (0x0003d6f9) popup_clock_digital_analogue_window_cp2_g

0xdb73,	// (0x0003b50e) popup_clock_digital_analogue_window_cp2_t1

0xdb81,	// (0x0003b51c) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd69,	// (0x0003d704) popup_clock_digital_analogue_window_cp2_t

0x77ce,	// (0x00035169) clock_digital_number_pane_cp10_g1

0x77ce,	// (0x00035169) clock_digital_number_pane_cp10_g2

0x0001,

0xfb58,	// (0x0003d4f3) clock_digital_number_pane_cp10_g

0x77ce,	// (0x00035169) clock_digital_separator_pane_cp10_g1

0x77ce,	// (0x00035169) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb58,	// (0x0003d4f3) clock_digital_separator_pane_cp10_g

0xd9b0,	// (0x0003b34b) uniindi_top_pane_g3

0xd9c1,	// (0x0003b35c) uniindi_top_pane_g4

0xb177,	// (0x00038b12) vkb2_row_keypad_pane_ParamLimits

0xb177,	// (0x00038b12) vkb2_row_keypad_pane

0xb3bd,	// (0x00038d58) vkb2_cell_t_keypad_pane_ParamLimits

0xb3bd,	// (0x00038d58) vkb2_cell_t_keypad_pane

0xb3cd,	// (0x00038d68) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xb3cd,	// (0x00038d68) vkb2_cell_t_keypad_pane_cp08

0xb3e0,	// (0x00038d7b) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xb3e0,	// (0x00038d7b) vkb2_cell_t_keypad_pane_cp09

0xb3f4,	// (0x00038d8f) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xb3f4,	// (0x00038d8f) vkb2_cell_t_keypad_pane_cp01

0xb405,	// (0x00038da0) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xb405,	// (0x00038da0) vkb2_cell_t_keypad_pane_cp02

0xb416,	// (0x00038db1) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xb416,	// (0x00038db1) vkb2_cell_t_keypad_pane_cp03

0xb427,	// (0x00038dc2) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xb427,	// (0x00038dc2) vkb2_cell_t_keypad_pane_cp04

0xb438,	// (0x00038dd3) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xb438,	// (0x00038dd3) vkb2_cell_t_keypad_pane_cp05

0xb449,	// (0x00038de4) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xb449,	// (0x00038de4) vkb2_cell_t_keypad_pane_cp06

0xb45a,	// (0x00038df5) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xb45a,	// (0x00038df5) vkb2_cell_t_keypad_pane_cp07

0xb46b,	// (0x00038e06) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xb46b,	// (0x00038e06) vkb2_cell_t_keypad_pane_cp10

0x7a37,	// (0x000353d2) vkb2_cell_t_keypad_pane_g1

0xdf6f,	// (0x0003b90a) vkb2_cell_t_keypad_pane_t1

0x4317,	// (0x00031cb2) popup_grid_graphic2_window

0xef8e,	// (0x0003c929) aid_size_cell_graphic2_ParamLimits

0xef8e,	// (0x0003c929) aid_size_cell_graphic2

0xefc6,	// (0x0003c961) bg_popup_window_pane_cp21_ParamLimits

0xefc6,	// (0x0003c961) bg_popup_window_pane_cp21

0xefd4,	// (0x0003c96f) graphic2_pages_pane_ParamLimits

0xefd4,	// (0x0003c96f) graphic2_pages_pane

0xf01a,	// (0x0003c9b5) grid_graphic2_control_pane_ParamLimits

0xf01a,	// (0x0003c9b5) grid_graphic2_control_pane

0xf058,	// (0x0003c9f3) grid_graphic2_pane_ParamLimits

0xf058,	// (0x0003c9f3) grid_graphic2_pane

0xf0cc,	// (0x0003ca67) cell_graphic2_pane

0x4317,	// (0x00031cb2) main_comp_mode_pane

0xd215,	// (0x0003abb0) list_ai3_gene_pane_ParamLimits

0xd5f8,	// (0x0003af93) bg_popup_window_pane_cp19_ParamLimits

0xd604,	// (0x0003af9f) bg_touch_area_indi_pane_ParamLimits

0xd604,	// (0x0003af9f) bg_touch_area_indi_pane

0xd61a,	// (0x0003afb5) bg_touch_area_indi_pane_cp01_ParamLimits

0xd61a,	// (0x0003afb5) bg_touch_area_indi_pane_cp01

0xd630,	// (0x0003afcb) bg_touch_area_indi_pane_cp02_ParamLimits

0xd630,	// (0x0003afcb) bg_touch_area_indi_pane_cp02

0xd648,	// (0x0003afe3) bg_touch_area_indi_pane_cp03_ParamLimits

0xd648,	// (0x0003afe3) bg_touch_area_indi_pane_cp03

0xd662,	// (0x0003affd) popup_slider_window_g1_ParamLimits

0xd67e,	// (0x0003b019) popup_slider_window_g2_ParamLimits

0xd69a,	// (0x0003b035) popup_slider_window_g3_ParamLimits

0xfcf3,	// (0x0003d68e) popup_slider_window_g_ParamLimits

0xd6f6,	// (0x0003b091) popup_slider_window_t1_ParamLimits

0xd76a,	// (0x0003b105) small_volume_slider_vertical_pane_ParamLimits

0xf0cc,	// (0x0003ca67) cell_graphic2_pane_ParamLimits

0xf11a,	// (0x0003cab5) bg_button_pane_cp10_ParamLimits

0xf11a,	// (0x0003cab5) bg_button_pane_cp10

0xf12d,	// (0x0003cac8) bg_button_pane_cp11_ParamLimits

0xf12d,	// (0x0003cac8) bg_button_pane_cp11

0xf140,	// (0x0003cadb) graphic2_pages_pane_g1_ParamLimits

0xf140,	// (0x0003cadb) graphic2_pages_pane_g1

0xf15b,	// (0x0003caf6) graphic2_pages_pane_g2_ParamLimits

0xf15b,	// (0x0003caf6) graphic2_pages_pane_g2

0x0001,

0x07f9,	// (0x0002e194) graphic2_pages_pane_g_ParamLimits

0x07f9,	// (0x0002e194) graphic2_pages_pane_g

0xf173,	// (0x0003cb0e) graphic2_pages_pane_t1_ParamLimits

0xf173,	// (0x0003cb0e) graphic2_pages_pane_t1

0xf189,	// (0x0003cb24) cell_graphic2_control_pane_ParamLimits

0xf189,	// (0x0003cb24) cell_graphic2_control_pane

0xf1aa,	// (0x0003cb45) cell_graphic2_pane_g1_ParamLimits

0xf1aa,	// (0x0003cb45) cell_graphic2_pane_g1

0xf1b7,	// (0x0003cb52) cell_graphic2_pane_g2_ParamLimits

0xf1b7,	// (0x0003cb52) cell_graphic2_pane_g2

0xf1c4,	// (0x0003cb5f) cell_graphic2_pane_g3_ParamLimits

0xf1c4,	// (0x0003cb5f) cell_graphic2_pane_g3

0xf1d1,	// (0x0003cb6c) cell_graphic2_pane_g4_ParamLimits

0xf1d1,	// (0x0003cb6c) cell_graphic2_pane_g4

0xf1de,	// (0x0003cb79) cell_graphic2_pane_g5_ParamLimits

0xf1de,	// (0x0003cb79) cell_graphic2_pane_g5

0x0004,

0x07fe,	// (0x0002e199) cell_graphic2_pane_g_ParamLimits

0x07fe,	// (0x0002e199) cell_graphic2_pane_g

0xf1f9,	// (0x0003cb94) cell_graphic2_pane_t1_ParamLimits

0xf1f9,	// (0x0003cb94) cell_graphic2_pane_t1

0x5a66,	// (0x00033401) grid_highlight_pane_cp11_ParamLimits

0x5a66,	// (0x00033401) grid_highlight_pane_cp11

0x44ba,	// (0x00031e55) bg_button_pane_cp05

0xf222,	// (0x0003cbbd) cell_graphic2_control_pane_g1

0x77ce,	// (0x00035169) bg_touch_area_indi_pane_g1

0xdf81,	// (0x0003b91c) aid_cmod_rocker_key_size

0xdf8b,	// (0x0003b926) aid_cmode_itu_key_size

0xdf95,	// (0x0003b930) main_cmode_video_pane

0xdf9f,	// (0x0003b93a) main_comp_mode_itu_pane

0xdfab,	// (0x0003b946) main_comp_mode_rocker_pane

0xdfb7,	// (0x0003b952) cell_cmode_rocker_pane_ParamLimits

0xdfb7,	// (0x0003b952) cell_cmode_rocker_pane

0xdfc9,	// (0x0003b964) cell_cmode_itu_pane_ParamLimits

0xdfc9,	// (0x0003b964) cell_cmode_itu_pane

0x49e7,	// (0x00032382) bg_button_pane_cp06_ParamLimits

0x49e7,	// (0x00032382) bg_button_pane_cp06

0x7a37,	// (0x000353d2) cell_cmode_rocker_pane_g1_ParamLimits

0x7a37,	// (0x000353d2) cell_cmode_rocker_pane_g1

0xd80e,	// (0x0003b1a9) cell_cmode_rocker_pane_g2_ParamLimits

0xd80e,	// (0x0003b1a9) cell_cmode_rocker_pane_g2

0x0001,

0xfdb2,	// (0x0003d74d) cell_cmode_rocker_pane_g_ParamLimits

0xfdb2,	// (0x0003d74d) cell_cmode_rocker_pane_g

0x4317,	// (0x00031cb2) bg_button_pane_cp07

0xdfde,	// (0x0003b979) cell_cmode_itu_pane_g1

0xdfe7,	// (0x0003b982) cell_cmode_itu_pane_t1

0xdff5,	// (0x0003b990) cell_cmode_itu_pane_t2

0x0001,

0xfdb7,	// (0x0003d752) cell_cmode_itu_pane_t

0xda32,	// (0x0003b3cd) aid_touch_ctrl_left

0xda3a,	// (0x0003b3d5) aid_touch_ctrl_right

0x4317,	// (0x00031cb2) compa_mode_pane

0xf24a,	// (0x0003cbe5) aid_cmod_rocker_key_size_cp

0xf254,	// (0x0003cbef) aid_cmode_itu_key_size_cp

0xe003,	// (0x0003b99e) compa_mode_pane_g1

0xe00b,	// (0x0003b9a6) compa_mode_pane_g2

0xe013,	// (0x0003b9ae) compa_mode_pane_g3

0x0002,

0xfdbc,	// (0x0003d757) compa_mode_pane_g

0xf25e,	// (0x0003cbf9) main_comp_mode_itu_pane_cp

0xf266,	// (0x0003cc01) main_comp_mode_rocker_pane_cp

0xf26e,	// (0x0003cc09) cell_cmode_itu_pane_cp_ParamLimits

0xf26e,	// (0x0003cc09) cell_cmode_itu_pane_cp

0xf283,	// (0x0003cc1e) cell_cmode_rocker_pane_cp_ParamLimits

0xf283,	// (0x0003cc1e) cell_cmode_rocker_pane_cp

0x49e7,	// (0x00032382) bg_button_pane_cp06_cp_ParamLimits

0x49e7,	// (0x00032382) bg_button_pane_cp06_cp

0x7a37,	// (0x000353d2) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7a37,	// (0x000353d2) cell_cmode_rocker_pane_g1_cp

0x77ce,	// (0x00035169) cell_cmode_rocker_pane_g2_cp

0x4317,	// (0x00031cb2) bg_button_pane_cp07_cp

0xf295,	// (0x0003cc30) cell_cmode_itu_pane_g1_cp

0xf29e,	// (0x0003cc39) cell_cmode_itu_pane_t1_cp

0xf29e,	// (0x0003cc39) cell_cmode_itu_pane_t2_cp

0xc21d,	// (0x00039bb8) settings_code_pane_cp2

0x4387,	// (0x00031d22) bg_popup_window_pane_cp3_ParamLimits

0x46f3,	// (0x0003208e) heading_pane_cp3_ParamLimits

0x46ff,	// (0x0003209a) listscroll_popup_graphic_pane_ParamLimits

0xaa41,	// (0x000383dc) fep_hwr_aid_pane_ParamLimits

0xae61,	// (0x000387fc) aid_touch_sctrl_top_ParamLimits

0xae6e,	// (0x00038809) sctrl_sk_top_pane_g1_ParamLimits

0x7a37,	// (0x000353d2) sctrl_sk_top_pane_g2_ParamLimits

0xfd0c,	// (0x0003d6a7) sctrl_sk_top_pane_g_ParamLimits

0xae7b,	// (0x00038816) sctrl_sk_top_pane_t1_ParamLimits

0xae61,	// (0x000387fc) aid_touch_sctrl_bottom_ParamLimits

0xae7b,	// (0x00038816) sctrl_sk_bottom_pane_t1_ParamLimits

0xd97c,	// (0x0003b317) aid_area_touch_clock

0xb04e,	// (0x000389e9) aid_vkb2_area_top_pane_cell_ParamLimits

0xb04e,	// (0x000389e9) aid_vkb2_area_top_pane_cell

0xb199,	// (0x00038b34) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb199,	// (0x00038b34) aid_vkb2_area_bottom_pane_cell

0xdefa,	// (0x0003b895) popup_char_count_window

0xe01b,	// (0x0003b9b6) popup_char_count_window_g1

0xe024,	// (0x0003b9bf) popup_char_count_window_g2

0xe02d,	// (0x0003b9c8) popup_char_count_window_g3

0x0002,

0xfdc3,	// (0x0003d75e) popup_char_count_window_g

0xe036,	// (0x0003b9d1) popup_char_count_window_t1

0xaf1c,	// (0x000388b7) popup_fep_char_preview_window_ParamLimits

0xaf1c,	// (0x000388b7) popup_fep_char_preview_window

0xb06c,	// (0x00038a07) vkb2_top_candi_pane_ParamLimits

0xb06c,	// (0x00038a07) vkb2_top_candi_pane

0xf2ac,	// (0x0003cc47) cell_vkb2_top_candi_pane_ParamLimits

0xf2ac,	// (0x0003cc47) cell_vkb2_top_candi_pane

0x5f23,	// (0x000338be) bg_popup_fep_char_preview_window_ParamLimits

0x5f23,	// (0x000338be) bg_popup_fep_char_preview_window

0xb480,	// (0x00038e1b) popup_fep_char_preview_window_t1_ParamLimits

0xb480,	// (0x00038e1b) popup_fep_char_preview_window_t1

0xe044,	// (0x0003b9df) bg_popup_fep_char_preview_window_g1

0xe04c,	// (0x0003b9e7) bg_popup_fep_char_preview_window_g2

0xe054,	// (0x0003b9ef) bg_popup_fep_char_preview_window_g3

0xe05c,	// (0x0003b9f7) bg_popup_fep_char_preview_window_g4

0xe064,	// (0x0003b9ff) bg_popup_fep_char_preview_window_g5

0xb4ba,	// (0x00038e55) bg_popup_fep_char_preview_window_g6

0xe06c,	// (0x0003ba07) bg_popup_fep_char_preview_window_g7

0xe074,	// (0x0003ba0f) bg_popup_fep_char_preview_window_g8

0xe07c,	// (0x0003ba17) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdca,	// (0x0003d765) bg_popup_fep_char_preview_window_g

0x7a37,	// (0x000353d2) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7a37,	// (0x000353d2) cell_vkb2_top_candi_pane_g1

0xc6f9,	// (0x0003a094) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc6f9,	// (0x0003a094) cell_vkb2_top_candi_pane_g2

0xc71a,	// (0x0003a0b5) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc71a,	// (0x0003a0b5) cell_vkb2_top_candi_pane_g3

0xb4c2,	// (0x00038e5d) cell_vkb2_top_candi_pane_g4_ParamLimits

0xb4c2,	// (0x00038e5d) cell_vkb2_top_candi_pane_g4

0xde5a,	// (0x0003b7f5) cell_vkb2_top_candi_pane_g5_ParamLimits

0xde5a,	// (0x0003b7f5) cell_vkb2_top_candi_pane_g5

0xd80e,	// (0x0003b1a9) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd80e,	// (0x0003b1a9) cell_vkb2_top_candi_pane_g6

0x0005,

0xfddd,	// (0x0003d778) cell_vkb2_top_candi_pane_g_ParamLimits

0xfddd,	// (0x0003d778) cell_vkb2_top_candi_pane_g

0xb4e3,	// (0x00038e7e) cell_vkb2_top_candi_pane_t1

0xa781,	// (0x0003811c) aid_size_touch_slider_mark_ParamLimits

0xa781,	// (0x0003811c) aid_size_touch_slider_mark

0xf00a,	// (0x0003c9a5) grid_graphic2_catg_pane_ParamLimits

0xf00a,	// (0x0003c9a5) grid_graphic2_catg_pane

0xf0a8,	// (0x0003ca43) popup_grid_graphic2_window_t1_ParamLimits

0xf0a8,	// (0x0003ca43) popup_grid_graphic2_window_t1

0xf0ba,	// (0x0003ca55) popup_grid_graphic2_window_t2_ParamLimits

0xf0ba,	// (0x0003ca55) popup_grid_graphic2_window_t2

0x0001,

0x07f4,	// (0x0002e18f) popup_grid_graphic2_window_t_ParamLimits

0x07f4,	// (0x0002e18f) popup_grid_graphic2_window_t

0x44ba,	// (0x00031e55) bg_button_pane_cp05_ParamLimits

0xf222,	// (0x0003cbbd) cell_graphic2_control_pane_g1_ParamLimits

0xf2f9,	// (0x0003cc94) cell_graphic2_catg_pane_ParamLimits

0xf2f9,	// (0x0003cc94) cell_graphic2_catg_pane

0x4317,	// (0x00031cb2) bg_button_pane_cp12

0xf30b,	// (0x0003cca6) cell_graphic2_catg_pane_g1

0xd948,	// (0x0003b2e3) cell_tb_ext_pane_t1_ParamLimits

0xb2b6,	// (0x00038c51) vkb2_top_cell_right_narrow_pane_ParamLimits

0xb2b6,	// (0x00038c51) vkb2_top_cell_right_narrow_pane

0xb2ce,	// (0x00038c69) vkb2_top_cell_right_wide_pane_ParamLimits

0xb2ce,	// (0x00038c69) vkb2_top_cell_right_wide_pane

0x0e89,	// (0x0002e824) bg_vkb2_func_pane_ParamLimits

0x0e89,	// (0x0002e824) bg_vkb2_func_pane

0xb33f,	// (0x00038cda) vkb2_top_cell_left_pane_g1_ParamLimits

0x0e89,	// (0x0002e824) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0e89,	// (0x0002e824) bg_vkb2_fuc_pane_cp03

0xb39d,	// (0x00038d38) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x5986,	// (0x00033321) bg_vkb2_func_pane_g1

0x597e,	// (0x00033319) bg_vkb2_func_pane_g2

0x598e,	// (0x00033329) bg_vkb2_func_pane_g3

0x5996,	// (0x00033331) bg_vkb2_func_pane_g4

0x599e,	// (0x00033339) bg_vkb2_func_pane_g5

0x59a6,	// (0x00033341) bg_vkb2_func_pane_g6

0x59b6,	// (0x00033351) bg_vkb2_func_pane_g7

0x59ae,	// (0x00033349) bg_vkb2_func_pane_g8

0x5976,	// (0x00033311) bg_vkb2_func_pane_g9

0x0008,

0xfdea,	// (0x0003d785) bg_vkb2_func_pane_g

0x0e89,	// (0x0002e824) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0e89,	// (0x0002e824) bg_vkb2_fuc_pane_cp01

0xb33f,	// (0x00038cda) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xb33f,	// (0x00038cda) vkb2_top_cell_right_wide_pane_g1

0x0e89,	// (0x0002e824) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0e89,	// (0x0002e824) bg_vkb2_fuc_pane_cp02

0xb39d,	// (0x00038d38) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xb39d,	// (0x00038d38) vkb2_top_cell_right_narrow_pane_g1

0xd576,	// (0x0003af11) aid_touch_area_decrease_ParamLimits

0xd576,	// (0x0003af11) aid_touch_area_decrease

0xd59a,	// (0x0003af35) aid_touch_area_increase_ParamLimits

0xd59a,	// (0x0003af35) aid_touch_area_increase

0xd5a6,	// (0x0003af41) aid_touch_area_mute_ParamLimits

0xd5a6,	// (0x0003af41) aid_touch_area_mute

0xd5ca,	// (0x0003af65) aid_touch_area_slider_ParamLimits

0xd5ca,	// (0x0003af65) aid_touch_area_slider

0xd6b6,	// (0x0003b051) popup_slider_window_g4_ParamLimits

0xd6b6,	// (0x0003b051) popup_slider_window_g4

0xd6c2,	// (0x0003b05d) popup_slider_window_g5_ParamLimits

0xd6c2,	// (0x0003b05d) popup_slider_window_g5

0xd6e4,	// (0x0003b07f) popup_slider_window_g6_ParamLimits

0xd6e4,	// (0x0003b07f) popup_slider_window_g6

0xd724,	// (0x0003b0bf) popup_slider_window_t2_ParamLimits

0xd724,	// (0x0003b0bf) popup_slider_window_t2

0x0001,

0xfd00,	// (0x0003d69b) popup_slider_window_t_ParamLimits

0xfd00,	// (0x0003d69b) popup_slider_window_t

0xd73c,	// (0x0003b0d7) slider_pane_ParamLimits

0xd73c,	// (0x0003b0d7) slider_pane

0xe084,	// (0x0003ba1f) slider_pane_g1_ParamLimits

0xe084,	// (0x0003ba1f) slider_pane_g1

0xe098,	// (0x0003ba33) slider_pane_g2_ParamLimits

0xe098,	// (0x0003ba33) slider_pane_g2

0xe0ae,	// (0x0003ba49) slider_pane_g3_ParamLimits

0xe0ae,	// (0x0003ba49) slider_pane_g3

0x0003,

0xfdfd,	// (0x0003d798) slider_pane_g_ParamLimits

0xfdfd,	// (0x0003d798) slider_pane_g

0xbab0,	// (0x0003944b) popup_tb_float_extension_window_ParamLimits

0xbab0,	// (0x0003944b) popup_tb_float_extension_window

0xe0da,	// (0x0003ba75) aid_size_cell_tb_float_ext

0x4317,	// (0x00031cb2) bg_popup_sub_window_cp28

0xe0e6,	// (0x0003ba81) grid_tb_float_ext_pane

0xe0f0,	// (0x0003ba8b) cell_tb_float_ext_pane_ParamLimits

0xe0f0,	// (0x0003ba8b) cell_tb_float_ext_pane

0xe10a,	// (0x0003baa5) cell_tb_float_ext_pane_g1

0xe113,	// (0x0003baae) grid_highlight_pane_cp12

0xab74,	// (0x0003850f) cell_last_hwr_side_pane_ParamLimits

0xab74,	// (0x0003850f) cell_last_hwr_side_pane

0x77ce,	// (0x00035169) cell_last_hwr_side_pane_g1

0xe11c,	// (0x0003bab7) cell_last_hwr_side_pane_g2

0x0001,

0xfe06,	// (0x0003d7a1) cell_last_hwr_side_pane_g

0xb265,	// (0x00038c00) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb265,	// (0x00038c00) vkb2_area_bottom_space_btn_pane

0x7a37,	// (0x000353d2) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf6f,	// (0x0003b90a) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xb4e3,	// (0x00038e7e) cell_vkb2_top_candi_pane_t1_ParamLimits

0xb502,	// (0x00038e9d) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xb502,	// (0x00038e9d) vkb2_area_bottom_space_btn_pane_g1

0xb53c,	// (0x00038ed7) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xb53c,	// (0x00038ed7) vkb2_area_bottom_space_btn_pane_g2

0xb572,	// (0x00038f0d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xb572,	// (0x00038f0d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0b,	// (0x0003d7a6) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0b,	// (0x0003d7a6) vkb2_area_bottom_space_btn_pane_g

0xaae8,	// (0x00038483) cel_fep_hwr_func_pane_ParamLimits

0xaae8,	// (0x00038483) cel_fep_hwr_func_pane

0xab24,	// (0x000384bf) cell_hwr_side_button_pane_ParamLimits

0xab24,	// (0x000384bf) cell_hwr_side_button_pane

0xd97c,	// (0x0003b317) aid_area_touch_clock_ParamLimits

0x44ba,	// (0x00031e55) bg_uniindi_top_pane_ParamLimits

0xd98e,	// (0x0003b329) uniindi_top_pane_g1_ParamLimits

0xd9a4,	// (0x0003b33f) uniindi_top_pane_g2_ParamLimits

0xd9b0,	// (0x0003b34b) uniindi_top_pane_g3_ParamLimits

0xd9c1,	// (0x0003b35c) uniindi_top_pane_g4_ParamLimits

0xfd38,	// (0x0003d6d3) uniindi_top_pane_g_ParamLimits

0xd9ce,	// (0x0003b369) uniindi_top_pane_t1_ParamLimits

0x44ba,	// (0x00031e55) bg_vkb2_func_pane_cp01_ParamLimits

0x44ba,	// (0x00031e55) bg_vkb2_func_pane_cp01

0xe125,	// (0x0003bac0) cel_fep_hwr_func_pane_g1_ParamLimits

0xe125,	// (0x0003bac0) cel_fep_hwr_func_pane_g1

0x44ba,	// (0x00031e55) bg_vkb2_func_pane_cp02_ParamLimits

0x44ba,	// (0x00031e55) bg_vkb2_func_pane_cp02

0xe125,	// (0x0003bac0) cell_hwr_side_button_pane_g1_ParamLimits

0xe125,	// (0x0003bac0) cell_hwr_side_button_pane_g1

0x588e,	// (0x00033229) status_pane_g4_ParamLimits

0x588e,	// (0x00033229) status_pane_g4

0x58a6,	// (0x00033241) status_pane_t1

0x765e,	// (0x00034ff9) form2_midp_gauge_slider_cont_pane

0x7666,	// (0x00035001) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc482,	// (0x00039e1d) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc494,	// (0x00039e2f) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb0b,	// (0x0003d4a6) form2_midp_gauge_slider_pane_t_ParamLimits

0x7678,	// (0x00035013) form2_midp_slider_pane_ParamLimits

0xaedc,	// (0x00038877) aid_size_cell_func_vkb2_ParamLimits

0xaedc,	// (0x00038877) aid_size_cell_func_vkb2

0xe0c6,	// (0x0003ba61) slider_pane_g4_ParamLimits

0xe0c6,	// (0x0003ba61) slider_pane_g4

0xb5bc,	// (0x00038f57) form2_midp_gauge_slider_pane_t2_cp01

0xb5ca,	// (0x00038f65) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb5ca,	// (0x00038f65) form2_midp_gauge_slider_pane_t3_cp01

0xb5e7,	// (0x00038f82) form2_midp_slider_pane_cp01

0x4317,	// (0x00031cb2) navi_smil_pane

0xe155,	// (0x0003baf0) navi_smil_pane_g1

0xe15d,	// (0x0003baf8) navi_smil_pane_t1

0xe133,	// (0x0003bace) form2_midp_slider_pane_g1

0xe13c,	// (0x0003bad7) form2_midp_slider_pane_g2

0xe144,	// (0x0003badf) form2_midp_slider_pane_g3

0xe133,	// (0x0003bace) form2_midp_slider_pane_g4

0xf314,	// (0x0003ccaf) form2_midp_slider_pane_g5

0x0004,

0xfe14,	// (0x0003d7af) form2_midp_slider_pane_g

0xb5ac,	// (0x00038f47) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xb5ac,	// (0x00038f47) vkb2_area_bottom_space_btn_pane_g4

0xbc1b,	// (0x000395b6) lc0_navi_pane_ParamLimits

0xbc1b,	// (0x000395b6) lc0_navi_pane

0xbc91,	// (0x0003962c) lc0_stat_indi_pane_ParamLimits

0xbc91,	// (0x0003962c) lc0_stat_indi_pane

0xbca8,	// (0x00039643) ls0_title_pane_ParamLimits

0xbca8,	// (0x00039643) ls0_title_pane

0x49e7,	// (0x00032382) bg_popup_sub_pane_cp14_ParamLimits

0xd963,	// (0x0003b2fe) list_uniindi_pane_ParamLimits

0xd96f,	// (0x0003b30a) uniindi_top_pane_ParamLimits

0xda0a,	// (0x0003b3a5) list_single_uniindi_pane_g1_ParamLimits

0xda1d,	// (0x0003b3b8) list_single_uniindi_pane_t1_ParamLimits

0xb5f0,	// (0x00038f8b) lc0_stat_clock_pane_ParamLimits

0xb5f0,	// (0x00038f8b) lc0_stat_clock_pane

0xf31d,	// (0x0003ccb8) lc0_stat_indi_pane_g1_ParamLimits

0xf31d,	// (0x0003ccb8) lc0_stat_indi_pane_g1

0xf32a,	// (0x0003ccc5) lc0_stat_indi_pane_g2_ParamLimits

0xf32a,	// (0x0003ccc5) lc0_stat_indi_pane_g2

0x0001,

0x087b,	// (0x0002e216) lc0_stat_indi_pane_g_ParamLimits

0x087b,	// (0x0002e216) lc0_stat_indi_pane_g

0xb5fd,	// (0x00038f98) lc0_uni_indicator_pane_ParamLimits

0xb5fd,	// (0x00038f98) lc0_uni_indicator_pane

0xe16b,	// (0x0003bb06) ls0_title_pane_g1_ParamLimits

0xe16b,	// (0x0003bb06) ls0_title_pane_g1

0xf337,	// (0x0003ccd2) ls0_title_pane_t1_ParamLimits

0xf337,	// (0x0003ccd2) ls0_title_pane_t1

0xb60a,	// (0x00038fa5) lc0_uni_indicator_pane_g1_ParamLimits

0xb60a,	// (0x00038fa5) lc0_uni_indicator_pane_g1

0xe17f,	// (0x0003bb1a) lc0_stat_clock_pane_t1

0x4317,	// (0x00031cb2) main_ai5_pane

0xe18d,	// (0x0003bb28) ai5_sk_pane_ParamLimits

0xe18d,	// (0x0003bb28) ai5_sk_pane

0xf36d,	// (0x0003cd08) cell_ai5_widget_pane_ParamLimits

0xf36d,	// (0x0003cd08) cell_ai5_widget_pane

0xe19a,	// (0x0003bb35) aid_size_cell_widget_grid

0xe1ae,	// (0x0003bb49) bg_ai5_widget_pane_ParamLimits

0xe1ae,	// (0x0003bb49) bg_ai5_widget_pane

0xe1f8,	// (0x0003bb93) cell_ai5_widget_pane_g2

0xe208,	// (0x0003bba3) cell_ai5_widget_pane_g3

0xe227,	// (0x0003bbc2) cell_ai5_widget_pane_g4

0xe233,	// (0x0003bbce) cell_ai5_widget_pane_g5

0xe23f,	// (0x0003bbda) cell_ai5_widget_pane_g6

0xe24b,	// (0x0003bbe6) cell_ai5_widget_pane_g7

0xe293,	// (0x0003bc2e) cell_ai5_widget_pane_t1_ParamLimits

0xe293,	// (0x0003bc2e) cell_ai5_widget_pane_t1

0xe2b0,	// (0x0003bc4b) cell_ai5_widget_pane_t2_ParamLimits

0xe2b0,	// (0x0003bc4b) cell_ai5_widget_pane_t2

0xe2c8,	// (0x0003bc63) cell_ai5_widget_pane_t3_ParamLimits

0xe2c8,	// (0x0003bc63) cell_ai5_widget_pane_t3

0xe2e0,	// (0x0003bc7b) cell_ai5_widget_pane_t4_ParamLimits

0xe2e0,	// (0x0003bc7b) cell_ai5_widget_pane_t4

0xe2fa,	// (0x0003bc95) cell_ai5_widget_pane_t5_ParamLimits

0xe2fa,	// (0x0003bc95) cell_ai5_widget_pane_t5

0xe319,	// (0x0003bcb4) cell_ai5_widget_pane_t6_ParamLimits

0xe319,	// (0x0003bcb4) cell_ai5_widget_pane_t6

0xe32b,	// (0x0003bcc6) cell_ai5_widget_pane_t7_ParamLimits

0xe32b,	// (0x0003bcc6) cell_ai5_widget_pane_t7

0xe344,	// (0x0003bcdf) cell_ai5_widget_pane_t8_ParamLimits

0xe344,	// (0x0003bcdf) cell_ai5_widget_pane_t8

0x0009,

0xfe34,	// (0x0003d7cf) cell_ai5_widget_pane_t_ParamLimits

0xfe34,	// (0x0003d7cf) cell_ai5_widget_pane_t

0xe390,	// (0x0003bd2b) grid_ai5_widget_pane

0x49e7,	// (0x00032382) highlight_cell_ai5_widget_pane_ParamLimits

0x49e7,	// (0x00032382) highlight_cell_ai5_widget_pane

0xf43d,	// (0x0003cdd8) ai5_sk_left_pane

0xf447,	// (0x0003cde2) ai5_sk_middle_pane

0xf451,	// (0x0003cdec) ai5_sk_right_pane

0xe3a4,	// (0x0003bd3f) bg_ai5_widget_pane_g1_ParamLimits

0xe3a4,	// (0x0003bd3f) bg_ai5_widget_pane_g1

0xe3b0,	// (0x0003bd4b) bg_ai5_widget_pane_g2_ParamLimits

0xe3b0,	// (0x0003bd4b) bg_ai5_widget_pane_g2

0xe3bc,	// (0x0003bd57) bg_ai5_widget_pane_g3_ParamLimits

0xe3bc,	// (0x0003bd57) bg_ai5_widget_pane_g3

0xe3c8,	// (0x0003bd63) bg_ai5_widget_pane_g4_ParamLimits

0xe3c8,	// (0x0003bd63) bg_ai5_widget_pane_g4

0xe3d4,	// (0x0003bd6f) bg_ai5_widget_pane_g5_ParamLimits

0xe3d4,	// (0x0003bd6f) bg_ai5_widget_pane_g5

0xe3e0,	// (0x0003bd7b) bg_ai5_widget_pane_g6_ParamLimits

0xe3e0,	// (0x0003bd7b) bg_ai5_widget_pane_g6

0xe3ec,	// (0x0003bd87) bg_ai5_widget_pane_g7_ParamLimits

0xe3ec,	// (0x0003bd87) bg_ai5_widget_pane_g7

0xe3f8,	// (0x0003bd93) bg_ai5_widget_pane_g8_ParamLimits

0xe3f8,	// (0x0003bd93) bg_ai5_widget_pane_g8

0xe404,	// (0x0003bd9f) bg_ai5_widget_pane_g9_ParamLimits

0xe404,	// (0x0003bd9f) bg_ai5_widget_pane_g9

0x0008,

0xfe49,	// (0x0003d7e4) bg_ai5_widget_pane_g_ParamLimits

0xfe49,	// (0x0003d7e4) bg_ai5_widget_pane_g

0xe437,	// (0x0003bdd2) cell_shortcut_ai5_widget_pane_ParamLimits

0xe437,	// (0x0003bdd2) cell_shortcut_ai5_widget_pane

0x43c3,	// (0x00031d5e) bg_cell_shortcut_ai5_widget_pane

0xe448,	// (0x0003bde3) cell_grid_ai5_widget_pane_g1

0xe451,	// (0x0003bdec) highlight_cell_shortcut_ai5_widget_pane

0x597e,	// (0x00033319) ai5_sk_left_pane_g1

0xe459,	// (0x0003bdf4) ai5_sk_left_pane_g2

0xe461,	// (0x0003bdfc) ai5_sk_left_pane_g3

0xe469,	// (0x0003be04) ai5_sk_left_pane_g4

0x0003,

0xfe5c,	// (0x0003d7f7) ai5_sk_left_pane_g

0xe471,	// (0x0003be0c) ai5_sk_left_pane_t1

0x5986,	// (0x00033321) ai5_sk_right_pane_g1

0xe47f,	// (0x0003be1a) ai5_sk_right_pane_g2

0xe487,	// (0x0003be22) ai5_sk_right_pane_g3

0xe48f,	// (0x0003be2a) ai5_sk_right_pane_g4

0x0003,

0xfe65,	// (0x0003d800) ai5_sk_right_pane_g

0xe497,	// (0x0003be32) ai5_sk_right_pane_t1

0x5986,	// (0x00033321) ai5_sk_middle_pane_g1

0x597e,	// (0x00033319) ai5_sk_middle_pane_g2

0x599e,	// (0x00033339) ai5_sk_middle_pane_g3

0xe487,	// (0x0003be22) ai5_sk_middle_pane_g4

0xe461,	// (0x0003bdfc) ai5_sk_middle_pane_g5

0xe4a5,	// (0x0003be40) ai5_sk_middle_pane_g6

0xf45b,	// (0x0003cdf6) ai5_sk_middle_pane_g7

0x0006,

0xfe6e,	// (0x0003d809) ai5_sk_middle_pane_g

0xbb60,	// (0x000394fb) aid_touch_area_size_lc0_ParamLimits

0xbb60,	// (0x000394fb) aid_touch_area_size_lc0

0xac73,	// (0x0003860e) cell_hwr_candidate_pane_t1_ParamLimits

0x57a2,	// (0x0003313d) aid_touch_navi_pane

0xbd7f,	// (0x0003971a) status_dt_navi_pane_ParamLimits

0xbd7f,	// (0x0003971a) status_dt_navi_pane

0xbd8c,	// (0x00039727) status_dt_sta_pane_ParamLimits

0xbd8c,	// (0x00039727) status_dt_sta_pane

0xf463,	// (0x0003cdfe) dt_sta_controll_pane

0xf470,	// (0x0003ce0b) dt_sta_indi_pane

0xf47d,	// (0x0003ce18) dt_sta_title_pane

0x44ba,	// (0x00031e55) bg_dt_sta_indi_pane_ParamLimits

0x44ba,	// (0x00031e55) bg_dt_sta_indi_pane

0xe4ad,	// (0x0003be48) dt_sta_battery_pane

0xe4b5,	// (0x0003be50) dt_sta_indi_pane_g1

0xe4be,	// (0x0003be59) dt_sta_indi_pane_g2

0xe4c7,	// (0x0003be62) dt_sta_indi_pane_g3

0x0002,

0xfe7d,	// (0x0003d818) dt_sta_indi_pane_g

0xe4d0,	// (0x0003be6b) dt_sta_signal_pane

0x49e7,	// (0x00032382) bg_dt_sta_title_pane_ParamLimits

0x49e7,	// (0x00032382) bg_dt_sta_title_pane

0x6647,	// (0x00033fe2) dt_sta_title_pane_g1

0xe4d9,	// (0x0003be74) dt_sta_title_pane_t1_ParamLimits

0xe4d9,	// (0x0003be74) dt_sta_title_pane_t1

0x4317,	// (0x00031cb2) bg_dt_sta_control_pane

0xe4ee,	// (0x0003be89) dt_sta_controll_pane_g1

0xe4f7,	// (0x0003be92) bg_dt_sta_title_pane_g1

0xe500,	// (0x0003be9b) bg_dt_sta_title_pane_g2

0xe509,	// (0x0003bea4) bg_dt_sta_title_pane_g3

0x0002,

0xfe84,	// (0x0003d81f) bg_dt_sta_title_pane_g

0x77ce,	// (0x00035169) bg_dt_sta_indi_pane_g1

0xe512,	// (0x0003bead) dt_sta_signal_pane_g1

0xe51a,	// (0x0003beb5) dt_sta_signal_pane_g2

0x0001,

0xfe8b,	// (0x0003d826) dt_sta_signal_pane_g

0xe522,	// (0x0003bebd) dt_sta_battery_pane_g1

0xe52b,	// (0x0003bec6) dt_sta_battery_pane_t1

0x77ce,	// (0x00035169) bg_dt_sta_control_pane_g1

0x4f8b,	// (0x00032926) fep_china_uni_eep_pane

0x4f93,	// (0x0003292e) fep_china_uni_entry_pane_ParamLimits

0x4fa3,	// (0x0003293e) popup_fep_china_uni_window_g1_ParamLimits

0x4fb3,	// (0x0003294e) popup_fep_china_uni_window_g2_ParamLimits

0x4fb3,	// (0x0003294e) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x0003d0d5) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x0003d0d5) popup_fep_china_uni_window_g

0xe53a,	// (0x0003bed5) fep_china_uni_eep_pane_g1

0xe542,	// (0x0003bedd) fep_china_uni_eep_pane_t1

0xe14c,	// (0x0003bae7) aid_touch_area_size_smil_player

0x5861,	// (0x000331fc) lc0_clock_pane

0x589a,	// (0x00033235) status_pane_g5_ParamLimits

0x589a,	// (0x00033235) status_pane_g5

0xb7c2,	// (0x0003915d) popup_keymap_window

0x587a,	// (0x00033215) status_icon_pane

0xe208,	// (0x0003bba3) cell_ai5_widget_pane_g3_ParamLimits

0xe227,	// (0x0003bbc2) cell_ai5_widget_pane_g4_ParamLimits

0xe233,	// (0x0003bbce) cell_ai5_widget_pane_g5_ParamLimits

0xe257,	// (0x0003bbf2) cell_ai5_widget_pane_g8_ParamLimits

0xe257,	// (0x0003bbf2) cell_ai5_widget_pane_g8

0xe26b,	// (0x0003bc06) cell_ai5_widget_pane_g9_ParamLimits

0xe26b,	// (0x0003bc06) cell_ai5_widget_pane_g9

0xe27f,	// (0x0003bc1a) cell_ai5_widget_pane_g10_ParamLimits

0xe27f,	// (0x0003bc1a) cell_ai5_widget_pane_g10

0xe551,	// (0x0003beec) status_icon_pane_g1

0x4317,	// (0x00031cb2) bg_popup_sub_pane_cp13

0xe559,	// (0x0003bef4) popup_keymap_window_t1

0xb682,	// (0x0003901d) control_pane_g6_ParamLimits

0xb682,	// (0x0003901d) control_pane_g6

0xb68f,	// (0x0003902a) control_pane_g7_ParamLimits

0xb68f,	// (0x0003902a) control_pane_g7

0xb69c,	// (0x00039037) control_pane_g8_ParamLimits

0xb69c,	// (0x00039037) control_pane_g8

0xf463,	// (0x0003cdfe) dt_sta_controll_pane_ParamLimits

0xf470,	// (0x0003ce0b) dt_sta_indi_pane_ParamLimits

0xf47d,	// (0x0003ce18) dt_sta_title_pane_ParamLimits

0x4929,	// (0x000322c4) aid_size_touch_scroll_bar_cale

0x9614,	// (0x00036faf) popup_discreet_window_ParamLimits

0x9614,	// (0x00036faf) popup_discreet_window

0x968e,	// (0x00037029) popup_sk_window

0x5f23,	// (0x000338be) bg_popup_sub_pane_cp28_ParamLimits

0x5f23,	// (0x000338be) bg_popup_sub_pane_cp28

0xe567,	// (0x0003bf02) popup_discreet_window_g1_ParamLimits

0xe567,	// (0x0003bf02) popup_discreet_window_g1

0xe587,	// (0x0003bf22) popup_discreet_window_t1_ParamLimits

0xe587,	// (0x0003bf22) popup_discreet_window_t1

0xe5a5,	// (0x0003bf40) popup_discreet_window_t2_ParamLimits

0xe5a5,	// (0x0003bf40) popup_discreet_window_t2

0x0002,

0xfe90,	// (0x0003d82b) popup_discreet_window_t_ParamLimits

0xfe90,	// (0x0003d82b) popup_discreet_window_t

0xb620,	// (0x00038fbb) popup_sk_window_g1

0xb62a,	// (0x00038fc5) popup_sk_window_g2

0x0001,

0xfe97,	// (0x0003d832) popup_sk_window_g

0xb634,	// (0x00038fcf) popup_sk_window_t1

0xb642,	// (0x00038fdd) popup_sk_window_t1_copy1

0xe1f8,	// (0x0003bb93) cell_ai5_widget_pane_g2_ParamLimits

0xe356,	// (0x0003bcf1) cell_ai5_widget_pane_t9_ParamLimits

0xe356,	// (0x0003bcf1) cell_ai5_widget_pane_t9

0x4317,	// (0x00031cb2) main_fep_fshwr2_pane

0xf48e,	// (0x0003ce29) aid_fshwr2_btn_pane

0xf496,	// (0x0003ce31) aid_fshwr2_syb_pane

0xf49e,	// (0x0003ce39) aid_fshwr2_txt_pane

0xf4a6,	// (0x0003ce41) fshwr2_func_candi_pane

0xf4b2,	// (0x0003ce4d) fshwr2_hwr_syb_pane

0xf4be,	// (0x0003ce59) fshwr2_icf_pane

0x4317,	// (0x00031cb2) fshwr2_icf_bg_pane

0xf4c8,	// (0x0003ce63) fshwr2_icf_pane_t1_ParamLimits

0xf4c8,	// (0x0003ce63) fshwr2_icf_pane_t1

0x77ce,	// (0x00035169) fshwr2_func_candi_pane_g1

0xe60b,	// (0x0003bfa6) fshwr2_func_candi_row_pane_ParamLimits

0xe60b,	// (0x0003bfa6) fshwr2_func_candi_row_pane

0xf4df,	// (0x0003ce7a) cell_fshwr2_syb_pane_ParamLimits

0xf4df,	// (0x0003ce7a) cell_fshwr2_syb_pane

0x7a37,	// (0x000353d2) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7a37,	// (0x000353d2) fshwr2_hwr_syb_pane_g1

0x4317,	// (0x00031cb2) bg_popup_call_pane_cp01

0xe61c,	// (0x0003bfb7) fshwr2_func_candi_cell_pane_ParamLimits

0xe61c,	// (0x0003bfb7) fshwr2_func_candi_cell_pane

0xe64d,	// (0x0003bfe8) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe64d,	// (0x0003bfe8) fshwr2_func_candi_cell_bg_pane

0xe667,	// (0x0003c002) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe667,	// (0x0003c002) fshwr2_func_candi_cell_pane_g1

0xe687,	// (0x0003c022) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe687,	// (0x0003c022) fshwr2_func_candi_cell_pane_t1

0x4317,	// (0x00031cb2) bg_button_pane_cp08

0x541c,	// (0x00032db7) cell_fshwr2_syb_bg_pane

0xf4fb,	// (0x0003ce96) cell_fshwr2_syb_bg_pane_g1

0xe69a,	// (0x0003c035) cell_fshwr2_syb_bg_pane_t1

0x49e7,	// (0x00032382) main_tmo_pane

0xc06e,	// (0x00039a09) uni_indicator_pane_g1_ParamLimits

0xc083,	// (0x00039a1e) uni_indicator_pane_g2_ParamLimits

0x695d,	// (0x000342f8) uni_indicator_pane_g3_ParamLimits

0x6973,	// (0x0003430e) uni_indicator_pane_g4_ParamLimits

0x6973,	// (0x0003430e) uni_indicator_pane_g4

0x6987,	// (0x00034322) uni_indicator_pane_g5_ParamLimits

0x6987,	// (0x00034322) uni_indicator_pane_g5

0x699b,	// (0x00034336) uni_indicator_pane_g6_ParamLimits

0x699b,	// (0x00034336) uni_indicator_pane_g6

0xf937,	// (0x0003d2d2) uni_indicator_pane_g_ParamLimits

0xd558,	// (0x0003aef3) popup_tmo_note_window_ParamLimits

0xd558,	// (0x0003aef3) popup_tmo_note_window

0x4317,	// (0x00031cb2) fshwr2_bg_pane

0xe678,	// (0x0003c013) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe678,	// (0x0003c013) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9c,	// (0x0003d837) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9c,	// (0x0003d837) fshwr2_func_candi_cell_pane_g

0x77ce,	// (0x00035169) bg_popup_window_pane_cp01

0xe6a9,	// (0x0003c044) bg_popup_window_pane_g1_cp01

0xe6b2,	// (0x0003c04d) bg_popup_window_pane_cp22_ParamLimits

0xe6b2,	// (0x0003c04d) bg_popup_window_pane_cp22

0xe6c0,	// (0x0003c05b) listscroll_tmo_link_pane_ParamLimits

0xe6c0,	// (0x0003c05b) listscroll_tmo_link_pane

0xe700,	// (0x0003c09b) popup_tmo_note_window_g1_ParamLimits

0xe700,	// (0x0003c09b) popup_tmo_note_window_g1

0xe70d,	// (0x0003c0a8) tmo_note_info_pane_ParamLimits

0xe70d,	// (0x0003c0a8) tmo_note_info_pane

0xf503,	// (0x0003ce9e) list_tmo_note_info_pane_g1_ParamLimits

0xf503,	// (0x0003ce9e) list_tmo_note_info_pane_g1

0xe727,	// (0x0003c0c2) list_tmo_note_info_pane_g2_ParamLimits

0xe727,	// (0x0003c0c2) list_tmo_note_info_pane_g2

0x0001,

0xfea1,	// (0x0003d83c) list_tmo_note_info_pane_g_ParamLimits

0xfea1,	// (0x0003d83c) list_tmo_note_info_pane_g

0xe743,	// (0x0003c0de) list_tmo_note_info_text_pane_ParamLimits

0xe743,	// (0x0003c0de) list_tmo_note_info_text_pane

0xe785,	// (0x0003c120) list_tmo_link_pane

0xe792,	// (0x0003c12d) scroll_pane_cp20

0xe79f,	// (0x0003c13a) list_single_tmo_link_pane_ParamLimits

0xe79f,	// (0x0003c13a) list_single_tmo_link_pane

0xe7af,	// (0x0003c14a) list_single_tmo_link_pane_t1

0xe7bd,	// (0x0003c158) list_tmo_note_info_text_pane_t1_ParamLimits

0xe7bd,	// (0x0003c158) list_tmo_note_info_text_pane_t1

0x9bac,	// (0x00037547) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9bac,	// (0x00037547) aid_size_touch_scroll_bar_cp01

0x8adb,	// (0x00036476) aid_size_touch_slider_marker

0x9676,	// (0x00037011) popup_settings_window_ParamLimits

0x9676,	// (0x00037011) popup_settings_window

0x8c7d,	// (0x00036618) popup_candi_list_indi_window

0x57a2,	// (0x0003313d) aid_touch_navi_pane_ParamLimits

0xae35,	// (0x000387d0) rs_clock_indi_pane

0xae3e,	// (0x000387d9) sctrl_sk_bottom_pane_ParamLimits

0xae4f,	// (0x000387ea) sctrl_sk_top_pane_ParamLimits

0xaf36,	// (0x000388d1) popup_fep_tooltip_window

0xe19a,	// (0x0003bb35) aid_size_cell_widget_grid_ParamLimits

0xe1ec,	// (0x0003bb87) cell_ai5_widget_pane_g1_ParamLimits

0xe1ec,	// (0x0003bb87) cell_ai5_widget_pane_g1

0xe23f,	// (0x0003bbda) cell_ai5_widget_pane_g6_ParamLimits

0xe24b,	// (0x0003bbe6) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe1f,	// (0x0003d7ba) cell_ai5_widget_pane_g_ParamLimits

0xfe1f,	// (0x0003d7ba) cell_ai5_widget_pane_g

0xe37a,	// (0x0003bd15) cell_ai5_widget_pane_t10_ParamLimits

0xe37a,	// (0x0003bd15) cell_ai5_widget_pane_t10

0xe390,	// (0x0003bd2b) grid_ai5_widget_pane_ParamLimits

0xe410,	// (0x0003bdab) cell_contacts_ai5_widget_pane_ParamLimits

0xe410,	// (0x0003bdab) cell_contacts_ai5_widget_pane

0xe5ba,	// (0x0003bf55) popup_discreet_window_t3_ParamLimits

0xe5ba,	// (0x0003bf55) popup_discreet_window_t3

0xe5f7,	// (0x0003bf92) popup_fshwr2_char_preview_window_ParamLimits

0xe5f7,	// (0x0003bf92) popup_fshwr2_char_preview_window

0xf51a,	// (0x0003ceb5) tmo_note_info_pane_t1

0xf52f,	// (0x0003ceca) tmo_note_info_pane_t2

0xf548,	// (0x0003cee3) tmo_note_info_pane_t3

0xe761,	// (0x0003c0fc) tmo_note_info_pane_t4

0xe773,	// (0x0003c10e) tmo_note_info_pane_t5

0x0004,

0xfea6,	// (0x0003d841) tmo_note_info_pane_t

0xe785,	// (0x0003c120) list_tmo_link_pane_ParamLimits

0xe792,	// (0x0003c12d) scroll_pane_cp20_ParamLimits

0x4317,	// (0x00031cb2) bg_popup_fep_char_preview_window_cp01

0xe7d6,	// (0x0003c171) popup_fshwr2_char_preview_window_t1

0xe7e4,	// (0x0003c17f) popup_candi_list_indi_window_g1

0xe7ed,	// (0x0003c188) bg_cell_contacts_ai5_widget_pane

0xe7f9,	// (0x0003c194) cell_contacts_ai5_widget_pane_g1

0xe80c,	// (0x0003c1a7) cell_contacts_ai5_widget_pane_g2

0xe818,	// (0x0003c1b3) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb1,	// (0x0003d84c) cell_contacts_ai5_widget_pane_g

0xe82a,	// (0x0003c1c5) cell_contacts_ai5_widget_pane_t1

0x49e7,	// (0x00032382) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe8a4,	// (0x0003c23f) settings_container_pane

0x541c,	// (0x00032db7) listscroll_set_pane_copy1

0x71a7,	// (0x00034b42) scroll_pane_cp121_copy1

0xe8b0,	// (0x0003c24b) set_content_pane_copy1

0xe8b8,	// (0x0003c253) aid_height_set_list_copy1_ParamLimits

0xe8b8,	// (0x0003c253) aid_height_set_list_copy1

0x6207,	// (0x00033ba2) aid_size_parent_copy1_ParamLimits

0x6207,	// (0x00033ba2) aid_size_parent_copy1

0xe8c4,	// (0x0003c25f) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe8c4,	// (0x0003c25f) button_value_adjust_pane_cp6_copy1

0x4b3e,	// (0x000324d9) list_highlight_pane_cp2_copy1_ParamLimits

0x4b3e,	// (0x000324d9) list_highlight_pane_cp2_copy1

0xe8d8,	// (0x0003c273) list_set_pane_copy1_ParamLimits

0xe8d8,	// (0x0003c273) list_set_pane_copy1

0xe83f,	// (0x0003c1da) main_pane_set_t1_copy1_ParamLimits

0xe83f,	// (0x0003c1da) main_pane_set_t1_copy1

0xe879,	// (0x0003c214) main_pane_set_t2_copy1_ParamLimits

0xe879,	// (0x0003c214) main_pane_set_t2_copy1

0xe985,	// (0x0003c320) main_pane_set_t3_copy1

0xe993,	// (0x0003c32e) main_pane_set_t4_copy1

0xe898,	// (0x0003c233) set_content_pane_g1_copy1_ParamLimits

0xe898,	// (0x0003c233) set_content_pane_g1_copy1

0xe9a1,	// (0x0003c33c) setting_code_pane_copy1

0xe9ab,	// (0x0003c346) setting_slider_graphic_pane_copy1

0xe9ab,	// (0x0003c346) setting_slider_pane_copy1

0xe9ab,	// (0x0003c346) setting_text_pane_copy1

0xe9b5,	// (0x0003c350) setting_volume_pane_copy1

0xe9be,	// (0x0003c359) settings_code_pane_cp2_copy1

0xe9c6,	// (0x0003c361) settings_code_pane_cp_copy1_ParamLimits

0xe9c6,	// (0x0003c361) settings_code_pane_cp_copy1

0xe9da,	// (0x0003c375) volume_set_pane_copy1

0xe9e2,	// (0x0003c37d) volume_set_pane_g10_copy1

0xe9ea,	// (0x0003c385) volume_set_pane_g1_copy1

0xe9f2,	// (0x0003c38d) volume_set_pane_g2_copy1

0xe9fa,	// (0x0003c395) volume_set_pane_g3_copy1

0xea02,	// (0x0003c39d) volume_set_pane_g4_copy1

0xea0a,	// (0x0003c3a5) volume_set_pane_g5_copy1

0xea12,	// (0x0003c3ad) volume_set_pane_g6_copy1

0xea1a,	// (0x0003c3b5) volume_set_pane_g7_copy1

0xea22,	// (0x0003c3bd) volume_set_pane_g8_copy1

0xea2a,	// (0x0003c3c5) volume_set_pane_g9_copy1

0x4387,	// (0x00031d22) bg_set_opt_pane_cp_copy1_ParamLimits

0x4387,	// (0x00031d22) bg_set_opt_pane_cp_copy1

0xea32,	// (0x0003c3cd) setting_slider_pane_t1_copy1_ParamLimits

0xea32,	// (0x0003c3cd) setting_slider_pane_t1_copy1

0xea50,	// (0x0003c3eb) setting_slider_pane_t2_copy1_ParamLimits

0xea50,	// (0x0003c3eb) setting_slider_pane_t2_copy1

0xea6a,	// (0x0003c405) setting_slider_pane_t3_copy1_ParamLimits

0xea6a,	// (0x0003c405) setting_slider_pane_t3_copy1

0xea82,	// (0x0003c41d) slider_set_pane_copy1_ParamLimits

0xea82,	// (0x0003c41d) slider_set_pane_copy1

0x4a4e,	// (0x000323e9) set_opt_bg_pane_g1_copy2

0x4a56,	// (0x000323f1) set_opt_bg_pane_g2_copy2

0xea98,	// (0x0003c433) set_opt_bg_pane_g3_copy2

0x4a66,	// (0x00032401) set_opt_bg_pane_g4_copy2

0x4a6e,	// (0x00032409) set_opt_bg_pane_g5_copy2

0x4a76,	// (0x00032411) set_opt_bg_pane_g6_copy2

0xeaa2,	// (0x0003c43d) set_opt_bg_pane_g7_copy2

0xeaaa,	// (0x0003c445) set_opt_bg_pane_g8_copy2

0xeab4,	// (0x0003c44f) set_opt_bg_pane_g9_copy2

0xb650,	// (0x00038feb) aid_size_touch_slider_mark_copy1_ParamLimits

0xb650,	// (0x00038feb) aid_size_touch_slider_mark_copy1

0xeabe,	// (0x0003c459) slider_set_pane_g1_copy1

0xb664,	// (0x00038fff) slider_set_pane_g2_copy1

0xa7a1,	// (0x0003813c) slider_set_pane_g3_copy1_ParamLimits

0xa7a1,	// (0x0003813c) slider_set_pane_g3_copy1

0xa7b5,	// (0x00038150) slider_set_pane_g4_copy1_ParamLimits

0xa7b5,	// (0x00038150) slider_set_pane_g4_copy1

0xa7cd,	// (0x00038168) slider_set_pane_g5_copy1_ParamLimits

0xa7cd,	// (0x00038168) slider_set_pane_g5_copy1

0xa7a1,	// (0x0003813c) slider_set_pane_g6_copy1_ParamLimits

0xa7a1,	// (0x0003813c) slider_set_pane_g6_copy1

0xb66c,	// (0x00039007) slider_set_pane_g7_copy1_ParamLimits

0xb66c,	// (0x00039007) slider_set_pane_g7_copy1

0x432b,	// (0x00031cc6) bg_set_opt_pane_cp2_copy1

0xeac7,	// (0x0003c462) setting_slider_graphic_pane_g1_copy1

0xead0,	// (0x0003c46b) setting_slider_graphic_pane_t1_copy1

0xeae0,	// (0x0003c47b) setting_slider_graphic_pane_t2_copy1

0xeaf0,	// (0x0003c48b) slider_set_pane_cp_copy1

0xeb00,	// (0x0003c49b) input_focus_pane_cp1_copy1

0xeb09,	// (0x0003c4a4) list_set_text_pane_copy1

0xeb11,	// (0x0003c4ac) setting_text_pane_g1_copy1

0x936d,	// (0x00036d08) set_text_pane_t1_copy1

0xeb00,	// (0x0003c49b) input_focus_pane_cp2_copy1

0xeb11,	// (0x0003c4ac) setting_code_pane_g1_copy1

0xeb1a,	// (0x0003c4b5) setting_code_pane_t1_copy1

0xeb28,	// (0x0003c4c3) list_set_graphic_pane_copy1

0x432b,	// (0x00031cc6) bg_set_opt_pane_cp4_copy1

0x511e,	// (0x00032ab9) list_set_graphic_pane_g1_copy1_ParamLimits

0x511e,	// (0x00032ab9) list_set_graphic_pane_g1_copy1

0xeb3c,	// (0x0003c4d7) list_set_graphic_pane_g2_copy1

0x5136,	// (0x00032ad1) list_set_graphic_pane_t1_copy1_ParamLimits

0x5136,	// (0x00032ad1) list_set_graphic_pane_t1_copy1

0x77ce,	// (0x00035169) rs_clock_indi_pane_g1

0xeb44,	// (0x0003c4df) rs_clock_indi_pane_t1

0xeb52,	// (0x0003c4ed) rs_indi_pane

0xeb5a,	// (0x0003c4f5) rs_indi_pane_g1

0xeb63,	// (0x0003c4fe) rs_indi_pane_g2

0xeb6c,	// (0x0003c507) rs_indi_pane_g3

0x0002,

0xfeb8,	// (0x0003d853) rs_indi_pane_g

0x541c,	// (0x00032db7) bg_popup_preview_window_pane_cp03

0xeb75,	// (0x0003c510) popup_fep_tooltip_window_t1

0xcced,	// (0x0003a688) popup_note2_window_g2_ParamLimits

0xcced,	// (0x0003a688) popup_note2_window_g2

0x0001,

0xfc77,	// (0x0003d612) popup_note2_window_g_ParamLimits

0xfc77,	// (0x0003d612) popup_note2_window_g

0xd1db,	// (0x0003ab76) bg_popup_sub_pane_cp11_ParamLimits

0xd1e8,	// (0x0003ab83) cell_ai3_links_pane_g1_ParamLimits

0xd1ff,	// (0x0003ab9a) cell_ai3_links_pane_t1

0x936d,	// (0x00036d08) set_text_pane_t1_copy1_ParamLimits

0x532b,	// (0x00032cc6) cell_graphic_popup_pane_cp2_ParamLimits

0x532b,	// (0x00032cc6) cell_graphic_popup_pane_cp2

0xeb83,	// (0x0003c51e) cell_graphic_popup_pane_g1_cp2

0x473c,	// (0x000320d7) cell_graphic_popup_pane_g2_cp2

0xeb8b,	// (0x0003c526) cell_graphic_popup_pane_g3_cp2

0xeb93,	// (0x0003c52e) cell_graphic_popup_pane_t2_cp2

0x474d,	// (0x000320e8) grid_highlight_pane_cp3_cp2

0x4ce8,	// (0x00032683) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x49e7,	// (0x00032382) main_tmo_pane_ParamLimits

0xd54c,	// (0x0003aee7) popup_tmo_big_image_note_window

0xe1dc,	// (0x0003bb77) cell_ai5_widget_list_pane

0xe1e4,	// (0x0003bb7f) cell_ai5_widget_lrg_icon_pane

0xf51a,	// (0x0003ceb5) tmo_note_info_pane_t1_ParamLimits

0xf52f,	// (0x0003ceca) tmo_note_info_pane_t2_ParamLimits

0xf548,	// (0x0003cee3) tmo_note_info_pane_t3_ParamLimits

0xe761,	// (0x0003c0fc) tmo_note_info_pane_t4_ParamLimits

0xe773,	// (0x0003c10e) tmo_note_info_pane_t5_ParamLimits

0xfea6,	// (0x0003d841) tmo_note_info_pane_t_ParamLimits

0xe8a4,	// (0x0003c23f) settings_container_pane_ParamLimits

0xeaf8,	// (0x0003c493) indicator_popup_pane_cp5

0xeaf8,	// (0x0003c493) indicator_popup_pane_cp6

0xeb28,	// (0x0003c4c3) list_set_graphic_pane_copy1_ParamLimits

0x4317,	// (0x00031cb2) bg_popup_window_pane_cp23

0xeba1,	// (0x0003c53c) popup_tmo_big_image_note_window_g1

0xebac,	// (0x0003c547) popup_tmo_big_image_note_window_t1

0xebbc,	// (0x0003c557) popup_tmo_big_image_note_window_t2

0xebcc,	// (0x0003c567) popup_tmo_big_image_note_window_t3

0x0002,

0xfebf,	// (0x0003d85a) popup_tmo_big_image_note_window_t

0xebdc,	// (0x0003c577) cell_ai5_widget_lrg_icon_pane_g1

0xebe4,	// (0x0003c57f) cell_ai5_widget_lrg_icon_pane_t1

0xebf2,	// (0x0003c58d) cell_ai5_widget_list_row_pane_ParamLimits

0xebf2,	// (0x0003c58d) cell_ai5_widget_list_row_pane

0xec0b,	// (0x0003c5a6) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xec0b,	// (0x0003c5a6) cell_ai5_widget_list_row_pane_g1

0xec18,	// (0x0003c5b3) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xec18,	// (0x0003c5b3) cell_ai5_widget_list_row_pane_t1

0xec30,	// (0x0003c5cb) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xec30,	// (0x0003c5cb) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfec6,	// (0x0003d861) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec6,	// (0x0003d861) cell_ai5_widget_list_row_pane_t

0x4317,	// (0x00031cb2) main_fep_vtchi_ss_pane

0xec42,	// (0x0003c5dd) popup_fep_char_pre_window

0xec4a,	// (0x0003c5e5) popup_fep_ituss_window

0xec64,	// (0x0003c5ff) popup_fep_vkbss_window

0xec82,	// (0x0003c61d) grid_vkbss_keypad_pane_ParamLimits

0xec82,	// (0x0003c61d) grid_vkbss_keypad_pane

0xec92,	// (0x0003c62d) ituss_keypad_pane

0xeca8,	// (0x0003c643) aid_vkbss_key_offset_ParamLimits

0xeca8,	// (0x0003c643) aid_vkbss_key_offset

0xecb4,	// (0x0003c64f) cell_vkbss_key_pane_ParamLimits

0xecb4,	// (0x0003c64f) cell_vkbss_key_pane

0x6451,	// (0x00033dec) bg_cell_vkbss_key_g1_ParamLimits

0x6451,	// (0x00033dec) bg_cell_vkbss_key_g1

0xecca,	// (0x0003c665) cell_vkbss_key_3p_pane_ParamLimits

0xecca,	// (0x0003c665) cell_vkbss_key_3p_pane

0xece4,	// (0x0003c67f) cell_vkbss_key_g1_ParamLimits

0xece4,	// (0x0003c67f) cell_vkbss_key_g1

0xecfe,	// (0x0003c699) cell_vkbss_key_t1_ParamLimits

0xecfe,	// (0x0003c699) cell_vkbss_key_t1

0xed29,	// (0x0003c6c4) cell_ituss_key_pane_ParamLimits

0xed29,	// (0x0003c6c4) cell_ituss_key_pane

0xed39,	// (0x0003c6d4) bg_cell_ituss_key_g1_ParamLimits

0xed39,	// (0x0003c6d4) bg_cell_ituss_key_g1

0xed45,	// (0x0003c6e0) cell_ituss_key_pane_g1_ParamLimits

0xed45,	// (0x0003c6e0) cell_ituss_key_pane_g1

0xed51,	// (0x0003c6ec) cell_ituss_key_pane_g2_ParamLimits

0xed51,	// (0x0003c6ec) cell_ituss_key_pane_g2

0x0001,

0xfecb,	// (0x0003d866) cell_ituss_key_pane_g_ParamLimits

0xfecb,	// (0x0003d866) cell_ituss_key_pane_g

0xed6a,	// (0x0003c705) cell_ituss_key_t1_ParamLimits

0xed6a,	// (0x0003c705) cell_ituss_key_t1

0xed98,	// (0x0003c733) cell_ituss_key_t2_ParamLimits

0xed98,	// (0x0003c733) cell_ituss_key_t2

0xedc9,	// (0x0003c764) cell_ituss_key_t3_ParamLimits

0xedc9,	// (0x0003c764) cell_ituss_key_t3

0xedfa,	// (0x0003c795) cell_ituss_key_t4_ParamLimits

0xedfa,	// (0x0003c795) cell_ituss_key_t4

0x0003,

0xfed0,	// (0x0003d86b) cell_ituss_key_t_ParamLimits

0xfed0,	// (0x0003d86b) cell_ituss_key_t

0xee2b,	// (0x0003c7c6) cell_vkbss_key_3p_pane_g1

0xee33,	// (0x0003c7ce) cell_vkbss_key_3p_pane_g2

0xee3b,	// (0x0003c7d6) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed9,	// (0x0003d874) cell_vkbss_key_3p_pane_g

0x4317,	// (0x00031cb2) bg_popup_fep_char_preview_window_cp02

0xee43,	// (0x0003c7de) popup_fep_char_pre_window_t1

0xf433,	// (0x0003cdce) main_ai5_sk_pane

0xe7ed,	// (0x0003c188) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe7f9,	// (0x0003c194) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xe80c,	// (0x0003c1a7) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe818,	// (0x0003c1b3) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb1,	// (0x0003d84c) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe82a,	// (0x0003c1c5) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x49e7,	// (0x00032382) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf55d,	// (0x0003cef8) main_ai5_sk_pane_g1

0x5d61,	// (0x000336fc) popup_query_code_window_g1

0xec59,	// (0x0003c5f4) popup_fep_vkb_icf_pane

0xec6d,	// (0x0003c608) popup_fep_vtchi_icf_pane

0x49e7,	// (0x00032382) bg_icf_pane

0xee61,	// (0x0003c7fc) list_vkb_icf_pane

0x49e7,	// (0x00032382) bg_icf_pane_cp01

0xee79,	// (0x0003c814) vtchi_icf_list_pane

0xee89,	// (0x0003c824) list_vkb_icf_pane_t1_ParamLimits

0xee89,	// (0x0003c824) list_vkb_icf_pane_t1

0xeea3,	// (0x0003c83e) vtchi_icf_list_pane_t1_ParamLimits

0xeea3,	// (0x0003c83e) vtchi_icf_list_pane_t1

0xec4a,	// (0x0003c5e5) popup_fep_ituss_window_ParamLimits

0xec6d,	// (0x0003c608) popup_fep_vtchi_icf_pane_ParamLimits

0xec92,	// (0x0003c62d) ituss_keypad_pane_ParamLimits

0xec9e,	// (0x0003c639) ituss_sks_pane

0x49e7,	// (0x00032382) bg_icf_pane_ParamLimits

0xee52,	// (0x0003c7ed) icf_edit_indi_pane_ParamLimits

0xee52,	// (0x0003c7ed) icf_edit_indi_pane

0xee61,	// (0x0003c7fc) list_vkb_icf_pane_ParamLimits

0x49e7,	// (0x00032382) bg_icf_pane_cp01_ParamLimits

0xee6d,	// (0x0003c808) icf_edit_indi_pane_cp01_ParamLimits

0xee6d,	// (0x0003c808) icf_edit_indi_pane_cp01

0xee81,	// (0x0003c81c) vtchi_query_pane

0x7a37,	// (0x000353d2) icf_edit_indi_pane_g1_ParamLimits

0x7a37,	// (0x000353d2) icf_edit_indi_pane_g1

0xeeca,	// (0x0003c865) icf_edit_indi_pane_g2_ParamLimits

0xeeca,	// (0x0003c865) icf_edit_indi_pane_g2

0x0001,

0xfee0,	// (0x0003d87b) icf_edit_indi_pane_g_ParamLimits

0xfee0,	// (0x0003d87b) icf_edit_indi_pane_g

0xeed6,	// (0x0003c871) icf_edit_indi_pane_t1

0xeee4,	// (0x0003c87f) bg_input_focus_pane_cp042

0x4920,	// (0x000322bb) vtchi_button_pane

0xeeed,	// (0x0003c888) vtchi_query_pane_t1

0xeefb,	// (0x0003c896) vtchi_query_pane_t2

0xef09,	// (0x0003c8a4) vtchi_query_pane_t3

0x0002,

0xfee5,	// (0x0003d880) vtchi_query_pane_t

0x4317,	// (0x00031cb2) bg_button_pane_cp13

0xef17,	// (0x0003c8b2) vtchi_button_pane_g1

0xef1f,	// (0x0003c8ba) ituss_sks_pane_g1

0xef2a,	// (0x0003c8c5) ituss_sks_pane_g2

0x0001,

0xfeec,	// (0x0003d887) ituss_sks_pane_g

0xef32,	// (0x0003c8cd) ituss_sks_pane_t1

0xef40,	// (0x0003c8db) ituss_sks_pane_t2

0x0001,

0xfef1,	// (0x0003d88c) ituss_sks_pane_t

0x747e,	// (0x00034e19) indicator_nsta_pane_cp_g1

0x7487,	// (0x00034e22) indicator_nsta_pane_cp_g2

0x748f,	// (0x00034e2a) indicator_nsta_pane_cp_g3

0x7497,	// (0x00034e32) indicator_nsta_pane_cp_g4

0x749f,	// (0x00034e3a) indicator_nsta_pane_cp_g5

0x74a7,	// (0x00034e42) indicator_nsta_pane_cp_g6

0x0005,

0xfac1,	// (0x0003d45c) indicator_nsta_pane_cp_g

0xf20f,	// (0x0003cbaa) cell_graphic2_pane_t2_ParamLimits

0xf20f,	// (0x0003cbaa) cell_graphic2_pane_t2

0x0001,

0x0809,	// (0x0002e1a4) cell_graphic2_pane_t_ParamLimits

0x0809,	// (0x0002e1a4) cell_graphic2_pane_t

0xf23c,	// (0x0003cbd7) cell_graphic2_control_pane_t1

0x9f91,	// (0x0003792c) signal_pane_g3_ParamLimits

0x9f91,	// (0x0003792c) signal_pane_g3

0x9fa3,	// (0x0003793e) signal_pane_g4_ParamLimits

0x9fa3,	// (0x0003793e) signal_pane_g4
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Large
