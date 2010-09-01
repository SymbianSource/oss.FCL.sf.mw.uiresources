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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0005d3ea };

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
0x8e69,	// (0x00066253) Screen

0x8e75,	// (0x0006625f) application_window_ParamLimits

0x8e75,	// (0x0006625f) application_window

0x6f2a,	// (0x00064314) screen_g1

0x8ead,	// (0x00066297) area_bottom_pane_ParamLimits

0x8ead,	// (0x00066297) area_bottom_pane

0xe65f,	// (0x0006ba49) area_top_pane_ParamLimits

0xe65f,	// (0x0006ba49) area_top_pane

0xe6fd,	// (0x0006bae7) main_pane_ParamLimits

0xe6fd,	// (0x0006bae7) main_pane

0x6f34,	// (0x0006431e) misc_graphics

0xace6,	// (0x000680d0) battery_pane_ParamLimits

0xace6,	// (0x000680d0) battery_pane

0x27c8,	// (0x0005fbb2) bg_status_flat_pane_g8

0x27d0,	// (0x0005fbba) bg_status_flat_pane_g9

0x0400,	// (0x0005d7ea) context_pane_ParamLimits

0x0400,	// (0x0005d7ea) context_pane

0xae51,	// (0x0006823b) navi_pane_ParamLimits

0xae51,	// (0x0006823b) navi_pane

0xaecf,	// (0x000682b9) signal_pane_ParamLimits

0xaecf,	// (0x000682b9) signal_pane

0x0008,

0xf83e,	// (0x0006cc28) bg_status_flat_pane_g

0xaf5f,	// (0x00068349) status_pane_g1_ParamLimits

0xaf5f,	// (0x00068349) status_pane_g1

0xaf75,	// (0x0006835f) status_pane_g2_ParamLimits

0xaf75,	// (0x0006835f) status_pane_g2

0x1dc9,	// (0x0005f1b3) status_pane_g3_ParamLimits

0x1dc9,	// (0x0005f1b3) status_pane_g3

0x0004,

0xf771,	// (0x0006cb5b) status_pane_g_ParamLimits

0xf771,	// (0x0006cb5b) status_pane_g

0xaf81,	// (0x0006836b) title_pane_ParamLimits

0xaf81,	// (0x0006836b) title_pane

0xafe4,	// (0x000683ce) uni_indicator_pane_ParamLimits

0xafe4,	// (0x000683ce) uni_indicator_pane

0xc43e,	// (0x00069828) bg_list_pane_ParamLimits

0xc43e,	// (0x00069828) bg_list_pane

0xa4d4,	// (0x000678be) find_pane

0x1fdd,	// (0x0005f3c7) listscroll_app_pane_ParamLimits

0x1fdd,	// (0x0005f3c7) listscroll_app_pane

0xc45e,	// (0x00069848) listscroll_form_pane

0xa4dc,	// (0x000678c6) listscroll_gen_pane_ParamLimits

0xa4dc,	// (0x000678c6) listscroll_gen_pane

0xf4c5,	// (0x0006c8af) listscroll_set_pane

0x332c,	// (0x00060716) main_idle_act_pane

0xc2f2,	// (0x000696dc) main_idle_trad_pane

0xc2f2,	// (0x000696dc) main_list_empty_pane

0x8461,	// (0x0006584b) main_midp_pane

0xc478,	// (0x00069862) main_pane_g1_ParamLimits

0xc478,	// (0x00069862) main_pane_g1

0xa4f0,	// (0x000678da) popup_ai_message_window_ParamLimits

0xa4f0,	// (0x000678da) popup_ai_message_window

0xa5a1,	// (0x0006798b) popup_fep_china_uni_window_ParamLimits

0xa5a1,	// (0x0006798b) popup_fep_china_uni_window

0xa5fb,	// (0x000679e5) popup_fep_japan_candidate_window_ParamLimits

0xa5fb,	// (0x000679e5) popup_fep_japan_candidate_window

0xa619,	// (0x00067a03) popup_fep_japan_predictive_window_ParamLimits

0xa619,	// (0x00067a03) popup_fep_japan_predictive_window

0xa62b,	// (0x00067a15) popup_find_window

0xa648,	// (0x00067a32) popup_grid_graphic_window_ParamLimits

0xa648,	// (0x00067a32) popup_grid_graphic_window

0xf503,	// (0x0006c8ed) popup_large_graphic_colour_window

0xa6e6,	// (0x00067ad0) popup_menu_window_ParamLimits

0xa6e6,	// (0x00067ad0) popup_menu_window

0xa8b8,	// (0x00067ca2) popup_note_image_window

0xa87e,	// (0x00067c68) popup_note_wait_window_ParamLimits

0xa87e,	// (0x00067c68) popup_note_wait_window

0xa8d0,	// (0x00067cba) popup_note_window_ParamLimits

0xa8d0,	// (0x00067cba) popup_note_window

0xa97f,	// (0x00067d69) popup_query_code_window_ParamLimits

0xa97f,	// (0x00067d69) popup_query_code_window

0xa9b9,	// (0x00067da3) popup_query_data_code_window_ParamLimits

0xa9b9,	// (0x00067da3) popup_query_data_code_window

0xa9d6,	// (0x00067dc0) popup_query_data_window_ParamLimits

0xa9d6,	// (0x00067dc0) popup_query_data_window

0xaa58,	// (0x00067e42) popup_query_sat_info_window_ParamLimits

0xaa58,	// (0x00067e42) popup_query_sat_info_window

0xaaef,	// (0x00067ed9) popup_snote_single_graphic_window_ParamLimits

0xaaef,	// (0x00067ed9) popup_snote_single_graphic_window

0xaaef,	// (0x00067ed9) popup_snote_single_text_window_ParamLimits

0xaaef,	// (0x00067ed9) popup_snote_single_text_window

0x0177,	// (0x0005d561) popup_sub_window_general

0xac4c,	// (0x00068036) popup_window_general_ParamLimits

0xac4c,	// (0x00068036) popup_window_general

0x02bc,	// (0x0005d6a6) power_save_pane

0xa332,	// (0x0006771c) control_pane_g1_ParamLimits

0xa332,	// (0x0006771c) control_pane_g1

0xa35b,	// (0x00067745) control_pane_g2_ParamLimits

0xa35b,	// (0x00067745) control_pane_g2

0xc428,	// (0x00069812) control_pane_g3_ParamLimits

0xc428,	// (0x00069812) control_pane_g3

0x0007,

0xf759,	// (0x0006cb43) control_pane_g_ParamLimits

0xf759,	// (0x0006cb43) control_pane_g

0xa3c3,	// (0x000677ad) control_pane_t1_ParamLimits

0xa3c3,	// (0x000677ad) control_pane_t1

0xa429,	// (0x00067813) control_pane_t2_ParamLimits

0xa429,	// (0x00067813) control_pane_t2

0x0002,

0xf76a,	// (0x0006cb54) control_pane_t_ParamLimits

0xf76a,	// (0x0006cb54) control_pane_t

0xa28b,	// (0x00067675) navi_navi_volume_pane_cp1

0xa293,	// (0x0006767d) status_small_icon_pane

0xc3f4,	// (0x000697de) status_small_pane_g1_ParamLimits

0xc3f4,	// (0x000697de) status_small_pane_g1

0xa29b,	// (0x00067685) status_small_pane_g2_ParamLimits

0xa29b,	// (0x00067685) status_small_pane_g2

0xa2a7,	// (0x00067691) status_small_pane_g3_ParamLimits

0xa2a7,	// (0x00067691) status_small_pane_g3

0xa2b3,	// (0x0006769d) status_small_pane_g4_ParamLimits

0xa2b3,	// (0x0006769d) status_small_pane_g4

0xa2bf,	// (0x000676a9) status_small_pane_g5_ParamLimits

0xa2bf,	// (0x000676a9) status_small_pane_g5

0xa2cd,	// (0x000676b7) status_small_pane_g6_ParamLimits

0xa2cd,	// (0x000676b7) status_small_pane_g6

0x0007,

0xf748,	// (0x0006cb32) status_small_pane_g_ParamLimits

0xf748,	// (0x0006cb32) status_small_pane_g

0xa2fc,	// (0x000676e6) status_small_pane_t1

0xa31e,	// (0x00067708) status_small_wait_pane_ParamLimits

0xa31e,	// (0x00067708) status_small_wait_pane

0x9f44,	// (0x0006732e) aid_levels_signal_ParamLimits

0x9f44,	// (0x0006732e) aid_levels_signal

0x9f5c,	// (0x00067346) signal_pane_g1_ParamLimits

0x9f5c,	// (0x00067346) signal_pane_g1

0x9f77,	// (0x00067361) signal_pane_g2_ParamLimits

0x9f77,	// (0x00067361) signal_pane_g2

0x0003,

0xf6d9,	// (0x0006cac3) signal_pane_g_ParamLimits

0xf6d9,	// (0x0006cac3) signal_pane_g

0xbf0d,	// (0x000692f7) context_pane_g1

0x90ab,	// (0x00066495) title_pane_g1

0x90e2,	// (0x000664cc) title_pane_t1

0x6f4a,	// (0x00064334) title_pane_t2

0x6f70,	// (0x0006435a) title_pane_t3

0x0002,

0xf532,	// (0x0006c91c) title_pane_t

0xb00c,	// (0x000683f6) aid_levels_battery_ParamLimits

0xb00c,	// (0x000683f6) aid_levels_battery

0xb028,	// (0x00068412) battery_pane_g1_ParamLimits

0xb028,	// (0x00068412) battery_pane_g1

0xb045,	// (0x0006842f) battery_pane_g2_ParamLimits

0xb045,	// (0x0006842f) battery_pane_g2

0x0001,

0xf77c,	// (0x0006cb66) battery_pane_g_ParamLimits

0xf77c,	// (0x0006cb66) battery_pane_g

0xc772,	// (0x00069b5c) uni_indicator_pane_g1

0xc788,	// (0x00069b72) uni_indicator_pane_g2

0xc79e,	// (0x00069b88) uni_indicator_pane_g3

0x0005,

0xf8e6,	// (0x0006ccd0) uni_indicator_pane_g

0xc1b6,	// (0x000695a0) navi_icon_pane_ParamLimits

0xc1b6,	// (0x000695a0) navi_icon_pane

0xc0ff,	// (0x000694e9) navi_midp_pane

0xc1d2,	// (0x000695bc) navi_navi_pane

0xc1dc,	// (0x000695c6) navi_text_pane_ParamLimits

0xc1dc,	// (0x000695c6) navi_text_pane

0x6f2a,	// (0x00064314) status_small_wait_pane_g1

0x71c1,	// (0x000645ab) status_small_wait_pane_g2

0x0001,

0xf8e1,	// (0x0006cccb) status_small_wait_pane_g

0xc6cb,	// (0x00069ab5) navi_navi_icon_text_pane

0x2e1b,	// (0x00060205) navi_navi_pane_g1_ParamLimits

0x2e1b,	// (0x00060205) navi_navi_pane_g1

0x2e2d,	// (0x00060217) navi_navi_pane_g2_ParamLimits

0x2e2d,	// (0x00060217) navi_navi_pane_g2

0x0001,

0xf8af,	// (0x0006cc99) navi_navi_pane_g_ParamLimits

0xf8af,	// (0x0006cc99) navi_navi_pane_g

0x2e3f,	// (0x00060229) navi_navi_tabs_pane

0x2e48,	// (0x00060232) navi_navi_text_pane

0xc6cb,	// (0x00069ab5) navi_navi_volume_pane

0x2def,	// (0x000601d9) navi_text_pane_t1

0x2de3,	// (0x000601cd) navi_icon_pane_g1

0x2d36,	// (0x00060120) navi_navi_text_pane_t1

0xb3dd,	// (0x000687c7) navi_navi_volume_pane_g1

0x084c,	// (0x0005dc36) volume_small_pane

0x2c9c,	// (0x00060086) navi_navi_icon_text_pane_g1

0xc623,	// (0x00069a0d) navi_navi_icon_text_pane_t1

0xc1d2,	// (0x000695bc) navi_tabs_2_long_pane

0xc1d2,	// (0x000695bc) navi_tabs_2_pane

0xc1d2,	// (0x000695bc) navi_tabs_3_long_pane

0xc1d2,	// (0x000695bc) navi_tabs_3_pane

0xc1d2,	// (0x000695bc) navi_tabs_4_pane

0x0824,	// (0x0005dc0e) tabs_2_active_pane_ParamLimits

0x0824,	// (0x0005dc0e) tabs_2_active_pane

0x0834,	// (0x0005dc1e) tabs_2_passive_pane_ParamLimits

0x0834,	// (0x0005dc1e) tabs_2_passive_pane

0x07f2,	// (0x0005dbdc) tabs_3_active_pane_ParamLimits

0x07f2,	// (0x0005dbdc) tabs_3_active_pane

0x0802,	// (0x0005dbec) tabs_3_passive_pane_ParamLimits

0x0802,	// (0x0005dbec) tabs_3_passive_pane

0x0813,	// (0x0005dbfd) tabs_3_passive_pane_cp_ParamLimits

0x0813,	// (0x0005dbfd) tabs_3_passive_pane_cp

0x07ae,	// (0x0005db98) tabs_4_active_pane_ParamLimits

0x07ae,	// (0x0005db98) tabs_4_active_pane

0x07bf,	// (0x0005dba9) tabs_4_passive_pane_ParamLimits

0x07bf,	// (0x0005dba9) tabs_4_passive_pane

0x07d0,	// (0x0005dbba) tabs_4_passive_pane_cp_ParamLimits

0x07d0,	// (0x0005dbba) tabs_4_passive_pane_cp

0x07e1,	// (0x0005dbcb) tabs_4_passive_pane_cp2_ParamLimits

0x07e1,	// (0x0005dbcb) tabs_4_passive_pane_cp2

0x078a,	// (0x0005db74) tabs_2_long_active_pane_ParamLimits

0x078a,	// (0x0005db74) tabs_2_long_active_pane

0x079c,	// (0x0005db86) tabs_2_long_passive_pane_ParamLimits

0x079c,	// (0x0005db86) tabs_2_long_passive_pane

0x0745,	// (0x0005db2f) tabs_3_long_active_pane_ParamLimits

0x0745,	// (0x0005db2f) tabs_3_long_active_pane

0x075e,	// (0x0005db48) tabs_3_long_passive_pane_ParamLimits

0x075e,	// (0x0005db48) tabs_3_long_passive_pane

0x0771,	// (0x0005db5b) tabs_3_long_passive_pane_cp_ParamLimits

0x0771,	// (0x0005db5b) tabs_3_long_passive_pane_cp

0x06eb,	// (0x0005dad5) volume_small_pane_g1

0x06f4,	// (0x0005dade) volume_small_pane_g2

0x06fd,	// (0x0005dae7) volume_small_pane_g3

0x0706,	// (0x0005daf0) volume_small_pane_g4

0x070f,	// (0x0005daf9) volume_small_pane_g5

0x0718,	// (0x0005db02) volume_small_pane_g6

0x0721,	// (0x0005db0b) volume_small_pane_g7

0x072a,	// (0x0005db14) volume_small_pane_g8

0x0733,	// (0x0005db1d) volume_small_pane_g9

0x073c,	// (0x0005db26) volume_small_pane_g10

0x0009,

0xf87b,	// (0x0006cc65) volume_small_pane_g

0x70ac,	// (0x00064496) bg_active_tab_pane_cp2_ParamLimits

0x70ac,	// (0x00064496) bg_active_tab_pane_cp2

0x916e,	// (0x00066558) tabs_3_active_pane_g1

0x9176,	// (0x00066560) tabs_3_active_pane_t1

0x70ac,	// (0x00064496) bg_passive_tab_pane_cp2_ParamLimits

0x70ac,	// (0x00064496) bg_passive_tab_pane_cp2

0x916e,	// (0x00066558) tabs_3_passive_pane_g1

0x9176,	// (0x00066560) tabs_3_passive_pane_t1

0x70ac,	// (0x00064496) bg_active_tab_pane_cp3_ParamLimits

0x70ac,	// (0x00064496) bg_active_tab_pane_cp3

0x9188,	// (0x00066572) tabs_4_active_pane_g1

0x9190,	// (0x0006657a) tabs_4_active_pane_t1

0x70ac,	// (0x00064496) bg_passive_tab_pane_cp3_ParamLimits

0x70ac,	// (0x00064496) bg_passive_tab_pane_cp3

0x9188,	// (0x00066572) tabs_4_1_passive_pane_g1

0x9190,	// (0x0006657a) tabs_4_1_passive_pane_t1

0x8461,	// (0x0006584b) list_highlight_pane_cp2

0xc8a4,	// (0x00069c8e) list_set_pane_ParamLimits

0xc8a4,	// (0x00069c8e) list_set_pane

0xc93e,	// (0x00069d28) main_pane_set_t1_ParamLimits

0xc93e,	// (0x00069d28) main_pane_set_t1

0xc95e,	// (0x00069d48) main_pane_set_t2_ParamLimits

0xc95e,	// (0x00069d48) main_pane_set_t2

0xc972,	// (0x00069d5c) main_pane_set_t3_ParamLimits

0xc972,	// (0x00069d5c) main_pane_set_t3

0xc984,	// (0x00069d6e) main_pane_set_t4_ParamLimits

0xc984,	// (0x00069d6e) main_pane_set_t4

0x0003,

0xf94b,	// (0x0006cd35) main_pane_set_t_ParamLimits

0xf94b,	// (0x0006cd35) main_pane_set_t

0xc996,	// (0x00069d80) setting_code_pane

0xc9a0,	// (0x00069d8a) setting_slider_graphic_pane

0xc9a0,	// (0x00069d8a) setting_slider_pane

0xc9a0,	// (0x00069d8a) setting_text_pane

0xc9a0,	// (0x00069d8a) setting_volume_pane

0x91a2,	// (0x0006658c) volume_set_pane

0x6f82,	// (0x0006436c) bg_set_opt_pane_cp

0x91aa,	// (0x00066594) setting_slider_pane_t1

0x91c3,	// (0x000665ad) setting_slider_pane_t2

0x91dd,	// (0x000665c7) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0006c923) setting_slider_pane_t

0x91f5,	// (0x000665df) slider_set_pane

0x6f34,	// (0x0006431e) bg_set_opt_pane_cp2

0x6f90,	// (0x0006437a) setting_slider_graphic_pane_g1

0x920b,	// (0x000665f5) setting_slider_graphic_pane_t1

0x921b,	// (0x00066605) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0006c92a) setting_slider_graphic_pane_t

0x922b,	// (0x00066615) slider_set_pane_cp

0x6f34,	// (0x0006431e) input_focus_pane_cp1

0x3313,	// (0x000606fd) list_set_text_pane

0x6f2a,	// (0x00064314) setting_text_pane_g1

0x6f34,	// (0x0006431e) input_focus_pane_cp2

0x6f2a,	// (0x00064314) setting_code_pane_g1

0x6f99,	// (0x00064383) setting_code_pane_t1

0xe7d8,	// (0x0006bbc2) set_text_pane_t1_ParamLimits

0xe7d8,	// (0x0006bbc2) set_text_pane_t1

0x8090,	// (0x0006547a) set_opt_bg_pane_g1

0x8098,	// (0x00065482) set_opt_bg_pane_g2

0xc859,	// (0x00069c43) set_opt_bg_pane_g3

0x80a8,	// (0x00065492) set_opt_bg_pane_g4

0x80b0,	// (0x0006549a) set_opt_bg_pane_g5

0x80b8,	// (0x000654a2) set_opt_bg_pane_g6

0xc863,	// (0x00069c4d) set_opt_bg_pane_g7

0xc86b,	// (0x00069c55) set_opt_bg_pane_g8

0xc875,	// (0x00069c5f) set_opt_bg_pane_g9

0x0008,

0xf938,	// (0x0006cd22) set_opt_bg_pane_g

0xc84c,	// (0x00069c36) slider_set_pane_g1

0x08cb,	// (0x0005dcb5) slider_set_pane_g2

0x0006,

0xf929,	// (0x0006cd13) slider_set_pane_g

0xb3e5,	// (0x000687cf) volume_set_pane_g1

0xb3ed,	// (0x000687d7) volume_set_pane_g2

0xb3f5,	// (0x000687df) volume_set_pane_g3

0xb3fd,	// (0x000687e7) volume_set_pane_g4

0xb405,	// (0x000687ef) volume_set_pane_g5

0xb40d,	// (0x000687f7) volume_set_pane_g6

0xb415,	// (0x000687ff) volume_set_pane_g7

0xb41d,	// (0x00068807) volume_set_pane_g8

0xb425,	// (0x0006880f) volume_set_pane_g9

0xb42d,	// (0x00068817) volume_set_pane_g10

0x0009,

0xf901,	// (0x0006cceb) volume_set_pane_g

0x9233,	// (0x0006661d) indicator_pane_ParamLimits

0x9233,	// (0x0006661d) indicator_pane

0x925b,	// (0x00066645) main_idle_pane_g2_ParamLimits

0x925b,	// (0x00066645) main_idle_pane_g2

0x9293,	// (0x0006667d) main_pane_idle_g1_ParamLimits

0x9293,	// (0x0006667d) main_pane_idle_g1

0x6fa7,	// (0x00064391) popup_clock_digital_analogue_window_ParamLimits

0x6fa7,	// (0x00064391) popup_clock_digital_analogue_window

0x92ba,	// (0x000666a4) soft_indicator_pane_ParamLimits

0x92ba,	// (0x000666a4) soft_indicator_pane

0x92de,	// (0x000666c8) wallpaper_pane_ParamLimits

0x92de,	// (0x000666c8) wallpaper_pane

0x6f2a,	// (0x00064314) wallpaper_pane_g1

0x92f0,	// (0x000666da) indicator_pane_g1_ParamLimits

0x92f0,	// (0x000666da) indicator_pane_g1

0x3773,	// (0x00060b5d) navi_navi_icon_text_pane_srt_g1

0x6fd5,	// (0x000643bf) soft_indicator_pane_t1

0x6fef,	// (0x000643d9) aid_ps_area_pane

0x9306,	// (0x000666f0) aid_ps_clock_pane

0x7000,	// (0x000643ea) aid_ps_indicator_pane

0x700c,	// (0x000643f6) indicator_ps_pane_ParamLimits

0x700c,	// (0x000643f6) indicator_ps_pane

0x701b,	// (0x00064405) power_save_pane_g1_ParamLimits

0x701b,	// (0x00064405) power_save_pane_g1

0x7027,	// (0x00064411) power_save_pane_g2_ParamLimits

0x7027,	// (0x00064411) power_save_pane_g2

0xe63f,	// (0x0006ba29) aid_navinavi_width_pane

0x6fef,	// (0x000643d9) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0006c92f) power_save_pane_g_ParamLimits

0xf545,	// (0x0006c92f) power_save_pane_g

0x7035,	// (0x0006441f) power_save_pane_t1_ParamLimits

0x7035,	// (0x0006441f) power_save_pane_t1

0x9306,	// (0x000666f0) aid_ps_clock_pane_ParamLimits

0x7000,	// (0x000643ea) aid_ps_indicator_pane_ParamLimits

0x7047,	// (0x00064431) power_save_pane_t4_ParamLimits

0x7047,	// (0x00064431) power_save_pane_t4

0x0001,

0xf54a,	// (0x0006c934) power_save_pane_t_ParamLimits

0xf54a,	// (0x0006c934) power_save_pane_t

0x7071,	// (0x0006445b) power_save_t3_ParamLimits

0x7071,	// (0x0006445b) power_save_t3

0x705c,	// (0x00064446) power_save_t2_ParamLimits

0x705c,	// (0x00064446) power_save_t2

0x7086,	// (0x00064470) indicator_ps_pane_g1

0x9314,	// (0x000666fe) ai_gene_pane_ParamLimits

0x9314,	// (0x000666fe) ai_gene_pane

0x932b,	// (0x00066715) ai_links_pane_ParamLimits

0x932b,	// (0x00066715) ai_links_pane

0x9343,	// (0x0006672d) indicator_pane_cp1_ParamLimits

0x9343,	// (0x0006672d) indicator_pane_cp1

0x9352,	// (0x0006673c) main_pane_idle_g1_cp_ParamLimits

0x9352,	// (0x0006673c) main_pane_idle_g1_cp

0x936a,	// (0x00066754) popup_ai_links_title_window

0x9373,	// (0x0006675d) soft_indicator_pane_cp1_ParamLimits

0x9373,	// (0x0006675d) soft_indicator_pane_cp1

0x30da,	// (0x000604c4) ai_links_pane_g1

0x30e3,	// (0x000604cd) grid_ai_links_pane

0xc769,	// (0x00069b53) ai_gene_pane_1

0x30c8,	// (0x000604b2) ai_gene_pane_2

0x30d1,	// (0x000604bb) list_highlight_pane_cp4

0xc745,	// (0x00069b2f) cell_ai_link_pane_ParamLimits

0xc745,	// (0x00069b2f) cell_ai_link_pane

0x3099,	// (0x00060483) cell_ai_link_pane_g1

0x71c1,	// (0x000645ab) cell_ai_link_pane_g2

0x0001,

0xf8dc,	// (0x0006ccc6) cell_ai_link_pane_g

0x6f34,	// (0x0006431e) grid_highlight_cp2

0x6f34,	// (0x0006431e) bg_popup_sub_pane_cp1

0x709d,	// (0x00064487) popup_ai_links_title_window_t1

0x2fe9,	// (0x000603d3) ai_gene_pane_1_g1_ParamLimits

0x2fe9,	// (0x000603d3) ai_gene_pane_1_g1

0x2ff5,	// (0x000603df) ai_gene_pane_1_g2_ParamLimits

0x2ff5,	// (0x000603df) ai_gene_pane_1_g2

0x0001,

0xf8d2,	// (0x0006ccbc) ai_gene_pane_1_g_ParamLimits

0xf8d2,	// (0x0006ccbc) ai_gene_pane_1_g

0x3002,	// (0x000603ec) ai_gene_pane_1_t1_ParamLimits

0x3002,	// (0x000603ec) ai_gene_pane_1_t1

0x3036,	// (0x00060420) grid_ai_soft_ind_pane

0x2fd4,	// (0x000603be) ai_gene_pane_2_t1_ParamLimits

0x2fd4,	// (0x000603be) ai_gene_pane_2_t1

0x9387,	// (0x00066771) main_pane_empty_t1_ParamLimits

0x9387,	// (0x00066771) main_pane_empty_t1

0x939f,	// (0x00066789) main_pane_empty_t2_ParamLimits

0x939f,	// (0x00066789) main_pane_empty_t2

0x93b4,	// (0x0006679e) main_pane_empty_t3_ParamLimits

0x93b4,	// (0x0006679e) main_pane_empty_t3

0x93c6,	// (0x000667b0) main_pane_empty_t4_ParamLimits

0x93c6,	// (0x000667b0) main_pane_empty_t4

0x93d8,	// (0x000667c2) main_pane_empty_t5_ParamLimits

0x93d8,	// (0x000667c2) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0006c939) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0006c939) main_pane_empty_t

0x8115,	// (0x000654ff) bg_popup_window_pane_ParamLimits

0x8115,	// (0x000654ff) bg_popup_window_pane

0xc6bf,	// (0x00069aa9) find_popup_pane_cp2_ParamLimits

0xc6bf,	// (0x00069aa9) find_popup_pane_cp2

0x2d50,	// (0x0006013a) heading_pane_ParamLimits

0x2d50,	// (0x0006013a) heading_pane

0x6f34,	// (0x0006431e) bg_popup_sub_pane

0xc640,	// (0x00069a2a) bg_popup_window_pane_g1_ParamLimits

0xc640,	// (0x00069a2a) bg_popup_window_pane_g1

0xc64f,	// (0x00069a39) bg_popup_window_pane_g2_ParamLimits

0xc64f,	// (0x00069a39) bg_popup_window_pane_g2

0xc65b,	// (0x00069a45) bg_popup_window_pane_g3_ParamLimits

0xc65b,	// (0x00069a45) bg_popup_window_pane_g3

0xc667,	// (0x00069a51) bg_popup_window_pane_g4_ParamLimits

0xc667,	// (0x00069a51) bg_popup_window_pane_g4

0xc676,	// (0x00069a60) bg_popup_window_pane_g5_ParamLimits

0xc676,	// (0x00069a60) bg_popup_window_pane_g5

0xc686,	// (0x00069a70) bg_popup_window_pane_g6_ParamLimits

0xc686,	// (0x00069a70) bg_popup_window_pane_g6

0xc692,	// (0x00069a7c) bg_popup_window_pane_g7_ParamLimits

0xc692,	// (0x00069a7c) bg_popup_window_pane_g7

0xc6a1,	// (0x00069a8b) bg_popup_window_pane_g8_ParamLimits

0xc6a1,	// (0x00069a8b) bg_popup_window_pane_g8

0xc6b0,	// (0x00069a9a) bg_popup_window_pane_g9_ParamLimits

0xc6b0,	// (0x00069a9a) bg_popup_window_pane_g9

0x2d2a,	// (0x00060114) bg_popup_window_pane_g10_ParamLimits

0x2d2a,	// (0x00060114) bg_popup_window_pane_g10

0x0009,

0xf89a,	// (0x0006cc84) bg_popup_window_pane_g_ParamLimits

0xf89a,	// (0x0006cc84) bg_popup_window_pane_g

0x2c53,	// (0x0006003d) bg_popup_heading_pane_ParamLimits

0x2c53,	// (0x0006003d) bg_popup_heading_pane

0x0a0f,	// (0x0005ddf9) tabs_4_passive_pane_cp_srt_ParamLimits

0x0a0f,	// (0x0005ddf9) tabs_4_passive_pane_cp_srt

0x0a21,	// (0x0005de0b) tabs_4_passive_pane_srt_ParamLimits

0x2c67,	// (0x00060051) heading_pane_g2

0x0a21,	// (0x0005de0b) tabs_4_passive_pane_srt

0x1fdd,	// (0x0005f3c7) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1fdd,	// (0x0005f3c7) bg_passive_tab_pane_cp3_srt

0x2c6f,	// (0x00060059) heading_pane_t1_ParamLimits

0x2c6f,	// (0x00060059) heading_pane_t1

0x2c86,	// (0x00060070) heading_pane_t2_ParamLimits

0x2c86,	// (0x00060070) heading_pane_t2

0x0001,

0xf895,	// (0x0006cc7f) heading_pane_t_ParamLimits

0xf895,	// (0x0006cc7f) heading_pane_t

0x2790,	// (0x0005fb7a) bg_popup_heading_pane_g1

0x283f,	// (0x0005fc29) bg_popup_heading_pane_g2

0x2849,	// (0x0005fc33) bg_popup_heading_pane_g3

0x2853,	// (0x0005fc3d) bg_popup_heading_pane_g4

0x285d,	// (0x0005fc47) bg_popup_heading_pane_g5

0x2867,	// (0x0005fc51) bg_popup_heading_pane_g6

0x286f,	// (0x0005fc59) bg_popup_heading_pane_g7

0x2877,	// (0x0005fc61) bg_popup_heading_pane_g8

0x2881,	// (0x0005fc6b) bg_popup_heading_pane_g9

0x0008,

0xf851,	// (0x0006cc3b) bg_popup_heading_pane_g

0x1f51,	// (0x0005f33b) bg_popup_sub_pane_g1

0x1f61,	// (0x0005f34b) bg_popup_sub_pane_g2

0x1f59,	// (0x0005f343) bg_popup_sub_pane_g3

0x1f71,	// (0x0005f35b) bg_popup_sub_pane_g4

0x1f69,	// (0x0005f353) bg_popup_sub_pane_g5

0x1f79,	// (0x0005f363) bg_popup_sub_pane_g6

0x1f81,	// (0x0005f36b) bg_popup_sub_pane_g7

0x1f91,	// (0x0005f37b) bg_popup_sub_pane_g8

0x1f89,	// (0x0005f373) bg_popup_sub_pane_g9

0x0008,

0xf82b,	// (0x0006cc15) bg_popup_sub_pane_g

0x70ac,	// (0x00064496) bg_popup_window_pane_cp5_ParamLimits

0x70ac,	// (0x00064496) bg_popup_window_pane_cp5

0x70c8,	// (0x000644b2) popup_note_window_g1_ParamLimits

0x70c8,	// (0x000644b2) popup_note_window_g1

0x70d4,	// (0x000644be) popup_note_window_t1_ParamLimits

0x70d4,	// (0x000644be) popup_note_window_t1

0x70ea,	// (0x000644d4) popup_note_window_t2_ParamLimits

0x70ea,	// (0x000644d4) popup_note_window_t2

0x7100,	// (0x000644ea) popup_note_window_t3_ParamLimits

0x7100,	// (0x000644ea) popup_note_window_t3

0x7116,	// (0x00064500) popup_note_window_t4_ParamLimits

0x7116,	// (0x00064500) popup_note_window_t4

0x713e,	// (0x00064528) popup_note_window_t5_ParamLimits

0x713e,	// (0x00064528) popup_note_window_t5

0x0004,

0xf55a,	// (0x0006c944) popup_note_window_t_ParamLimits

0xf55a,	// (0x0006c944) popup_note_window_t

0x7162,	// (0x0006454c) bg_popup_window_pane_cp6_ParamLimits

0x7162,	// (0x0006454c) bg_popup_window_pane_cp6

0x270c,	// (0x0005faf6) popup_note_image_window_g1_ParamLimits

0x270c,	// (0x0005faf6) popup_note_image_window_g1

0xc4e5,	// (0x000698cf) popup_note_image_window_g2_ParamLimits

0xc4e5,	// (0x000698cf) popup_note_image_window_g2

0x0001,

0xf81f,	// (0x0006cc09) popup_note_image_window_g_ParamLimits

0xf81f,	// (0x0006cc09) popup_note_image_window_g

0x2731,	// (0x0005fb1b) popup_note_image_window_t1_ParamLimits

0x2731,	// (0x0005fb1b) popup_note_image_window_t1

0x274a,	// (0x0005fb34) popup_note_image_window_t2_ParamLimits

0x274a,	// (0x0005fb34) popup_note_image_window_t2

0x2763,	// (0x0005fb4d) popup_note_image_window_t3_ParamLimits

0x2763,	// (0x0005fb4d) popup_note_image_window_t3

0x0002,

0xf824,	// (0x0006cc0e) popup_note_image_window_t_ParamLimits

0xf824,	// (0x0006cc0e) popup_note_image_window_t

0x25d5,	// (0x0005f9bf) bg_popup_window_pane_cp7_ParamLimits

0x25d5,	// (0x0005f9bf) bg_popup_window_pane_cp7

0x2605,	// (0x0005f9ef) popup_note_wait_window_g1_ParamLimits

0x2605,	// (0x0005f9ef) popup_note_wait_window_g1

0x2611,	// (0x0005f9fb) popup_note_wait_window_g2_ParamLimits

0x2611,	// (0x0005f9fb) popup_note_wait_window_g2

0x0002,

0xf80d,	// (0x0006cbf7) popup_note_wait_window_g_ParamLimits

0xf80d,	// (0x0006cbf7) popup_note_wait_window_g

0x2629,	// (0x0005fa13) popup_note_wait_window_t1_ParamLimits

0x2629,	// (0x0005fa13) popup_note_wait_window_t1

0xc486,	// (0x00069870) popup_note_wait_window_t2_ParamLimits

0xc486,	// (0x00069870) popup_note_wait_window_t2

0xc4a3,	// (0x0006988d) popup_note_wait_window_t3_ParamLimits

0xc4a3,	// (0x0006988d) popup_note_wait_window_t3

0xc4b6,	// (0x000698a0) popup_note_wait_window_t4_ParamLimits

0xc4b6,	// (0x000698a0) popup_note_wait_window_t4

0x0004,

0xf814,	// (0x0006cbfe) popup_note_wait_window_t_ParamLimits

0xf814,	// (0x0006cbfe) popup_note_wait_window_t

0x26a5,	// (0x0005fa8f) wait_bar_pane_ParamLimits

0x26a5,	// (0x0005fa8f) wait_bar_pane

0x6f34,	// (0x0006431e) wait_anim_pane

0x6f34,	// (0x0006431e) wait_border_pane

0x6f2a,	// (0x00064314) wait_anim_pane_g1

0x6f2a,	// (0x00064314) wait_anim_pane_g2

0x0001,

0xf6d4,	// (0x0006cabe) wait_anim_pane_g

0x2581,	// (0x0005f96b) wait_border_pane_g1

0x258c,	// (0x0005f976) wait_border_pane_g2

0x2595,	// (0x0005f97f) wait_border_pane_g3

0x0002,

0xf806,	// (0x0006cbf0) wait_border_pane_g

0x23ec,	// (0x0005f7d6) bg_popup_window_pane_cp16_ParamLimits

0x23ec,	// (0x0005f7d6) bg_popup_window_pane_cp16

0xb38d,	// (0x00068777) indicator_popup_pane_cp4_ParamLimits

0xb38d,	// (0x00068777) indicator_popup_pane_cp4

0x2500,	// (0x0005f8ea) popup_query_data_window_t1_ParamLimits

0x2500,	// (0x0005f8ea) popup_query_data_window_t1

0x2512,	// (0x0005f8fc) popup_query_data_window_t2_ParamLimits

0x2512,	// (0x0005f8fc) popup_query_data_window_t2

0x252b,	// (0x0005f915) popup_query_data_window_t3_ParamLimits

0x252b,	// (0x0005f915) popup_query_data_window_t3

0x0002,

0xf7ff,	// (0x0006cbe9) popup_query_data_window_t_ParamLimits

0xf7ff,	// (0x0006cbe9) popup_query_data_window_t

0xb3a1,	// (0x0006878b) query_popup_data_pane_ParamLimits

0xb3a1,	// (0x0006878b) query_popup_data_pane

0xb3b5,	// (0x0006879f) query_popup_data_pane_cp1_ParamLimits

0xb3b5,	// (0x0006879f) query_popup_data_pane_cp1

0x23ec,	// (0x0005f7d6) bg_popup_window_pane_cp10_ParamLimits

0x23ec,	// (0x0005f7d6) bg_popup_window_pane_cp10

0xb308,	// (0x000686f2) indicator_popup_pane_ParamLimits

0xb308,	// (0x000686f2) indicator_popup_pane

0xb32a,	// (0x00068714) popup_query_code_window_t1_ParamLimits

0xb32a,	// (0x00068714) popup_query_code_window_t1

0xb344,	// (0x0006872e) popup_query_code_window_t2_ParamLimits

0xb344,	// (0x0006872e) popup_query_code_window_t2

0x24a3,	// (0x0005f88d) popup_query_code_window_t3_ParamLimits

0x24a3,	// (0x0005f88d) popup_query_code_window_t3

0x0002,

0xf7f8,	// (0x0006cbe2) popup_query_code_window_t_ParamLimits

0xf7f8,	// (0x0006cbe2) popup_query_code_window_t

0x24d2,	// (0x0005f8bc) query_popup_pane_ParamLimits

0x24d2,	// (0x0005f8bc) query_popup_pane

0x7162,	// (0x0006454c) bg_popup_window_pane_cp15_ParamLimits

0x7162,	// (0x0006454c) bg_popup_window_pane_cp15

0x9410,	// (0x000667fa) indicator_popup_pane_cp1_ParamLimits

0x9410,	// (0x000667fa) indicator_popup_pane_cp1

0x9423,	// (0x0006680d) indicator_popup_pane_cp2_ParamLimits

0x9423,	// (0x0006680d) indicator_popup_pane_cp2

0x9436,	// (0x00066820) popup_query_data_code_window_g1_ParamLimits

0x9436,	// (0x00066820) popup_query_data_code_window_g1

0x7180,	// (0x0006456a) popup_query_data_code_window_t1_ParamLimits

0x7180,	// (0x0006456a) popup_query_data_code_window_t1

0x7192,	// (0x0006457c) popup_query_data_code_window_t2_ParamLimits

0x7192,	// (0x0006457c) popup_query_data_code_window_t2

0x9449,	// (0x00066833) popup_query_data_code_window_t3_ParamLimits

0x9449,	// (0x00066833) popup_query_data_code_window_t3

0x945f,	// (0x00066849) popup_query_data_code_window_t4_ParamLimits

0x945f,	// (0x00066849) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0006c94f) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0006c94f) popup_query_data_code_window_t

0x05ce,	// (0x0005d9b8) list_single_midp_graphic_pane_g3

0x9477,	// (0x00066861) query_popup_data_pane_cp2_ParamLimits

0x948a,	// (0x00066874) query_popup_pane_cp2_ParamLimits

0x948a,	// (0x00066874) query_popup_pane_cp2

0x6f34,	// (0x0006431e) bg_popup_window_pane_cp11

0x23d0,	// (0x0005f7ba) heading_pane_cp5

0x23d8,	// (0x0005f7c2) listscroll_popup_info_pane

0x6f34,	// (0x0006431e) input_focus_pane_cp3

0x71a4,	// (0x0006458e) query_popup_pane_t1

0x71b2,	// (0x0006459c) list_popup_info_pane_ParamLimits

0x71b2,	// (0x0006459c) list_popup_info_pane

0x71c1,	// (0x000645ab) listscroll_popup_info_pane_g1

0x71c9,	// (0x000645b3) scroll_pane_cp7

0x949d,	// (0x00066887) popup_info_list_pane_t1_ParamLimits

0x949d,	// (0x00066887) popup_info_list_pane_t1

0x94b7,	// (0x000668a1) popup_info_list_pane_t2_ParamLimits

0x94b7,	// (0x000668a1) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0006c958) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0006c958) popup_info_list_pane_t

0x6f34,	// (0x0006431e) bg_popup_window_pane_cp12

0xcb53,	// (0x00069f3d) find_popup_pane

0x6f82,	// (0x0006436c) bg_popup_window_pane_cp3

0x71d3,	// (0x000645bd) heading_pane_cp3

0x71e2,	// (0x000645cc) listscroll_popup_graphic_pane

0x6f34,	// (0x0006431e) bg_popup_window_pane_cp4

0x9521,	// (0x0006690b) heading_pane_cp4

0x71f2,	// (0x000645dc) listscroll_popup_colour_pane

0x952b,	// (0x00066915) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x952b,	// (0x00066915) cell_large_graphic_colour_none_popup_pane

0x953f,	// (0x00066929) grid_large_graphic_colour_popup_pane_ParamLimits

0x953f,	// (0x00066929) grid_large_graphic_colour_popup_pane

0x9563,	// (0x0006694d) listscroll_popup_colour_pane_g1_ParamLimits

0x9563,	// (0x0006694d) listscroll_popup_colour_pane_g1

0x957a,	// (0x00066964) listscroll_popup_colour_pane_g2_ParamLimits

0x957a,	// (0x00066964) listscroll_popup_colour_pane_g2

0x9591,	// (0x0006697b) listscroll_popup_colour_pane_g3_ParamLimits

0x9591,	// (0x0006697b) listscroll_popup_colour_pane_g3

0x95a1,	// (0x0006698b) listscroll_popup_colour_pane_g4_ParamLimits

0x95a1,	// (0x0006698b) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0006c95d) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0006c95d) listscroll_popup_colour_pane_g

0x7eec,	// (0x000652d6) scroll_pane_cp6_ParamLimits

0x7eec,	// (0x000652d6) scroll_pane_cp6

0x95b1,	// (0x0006699b) cell_large_graphic_colour_popup_pane_ParamLimits

0x95b1,	// (0x0006699b) cell_large_graphic_colour_popup_pane

0x95d0,	// (0x000669ba) cell_large_graphic_colour_none_popup_pane_t1

0x6f34,	// (0x0006431e) grid_highlight_pane_cp5

0x7efe,	// (0x000652e8) cell_large_graphic_colour_popup_pane_g1

0x7f06,	// (0x000652f0) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0006c966) cell_large_graphic_colour_popup_pane_g

0x7f0e,	// (0x000652f8) cell_large_graphic_colour_popup_pane_g2_copy1

0x7f17,	// (0x00065301) grid_highlight_pane_cp4

0x7f1f,	// (0x00065309) bg_popup_window_pane_cp8_ParamLimits

0x7f1f,	// (0x00065309) bg_popup_window_pane_cp8

0x95df,	// (0x000669c9) popup_snote_single_text_window_g1_ParamLimits

0x95df,	// (0x000669c9) popup_snote_single_text_window_g1

0x95f1,	// (0x000669db) popup_snote_single_text_window_t1_ParamLimits

0x95f1,	// (0x000669db) popup_snote_single_text_window_t1

0x9604,	// (0x000669ee) popup_snote_single_text_window_t2_ParamLimits

0x9604,	// (0x000669ee) popup_snote_single_text_window_t2

0x9617,	// (0x00066a01) popup_snote_single_text_window_t3_ParamLimits

0x9617,	// (0x00066a01) popup_snote_single_text_window_t3

0x9650,	// (0x00066a3a) popup_snote_single_text_window_t4_ParamLimits

0x9650,	// (0x00066a3a) popup_snote_single_text_window_t4

0x9684,	// (0x00066a6e) popup_snote_single_text_window_t5_ParamLimits

0x9684,	// (0x00066a6e) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0006c96b) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0006c96b) popup_snote_single_text_window_t

0x7f3a,	// (0x00065324) bg_popup_window_pane_cp9_ParamLimits

0x7f3a,	// (0x00065324) bg_popup_window_pane_cp9

0x95df,	// (0x000669c9) popup_snote_single_graphic_window_g1_ParamLimits

0x95df,	// (0x000669c9) popup_snote_single_graphic_window_g1

0x7f48,	// (0x00065332) popup_snote_single_graphic_window_g2_ParamLimits

0x7f48,	// (0x00065332) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0006c976) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0006c976) popup_snote_single_graphic_window_g

0x7f54,	// (0x0006533e) popup_snote_single_graphic_window_t1_ParamLimits

0x7f54,	// (0x0006533e) popup_snote_single_graphic_window_t1

0x7f67,	// (0x00065351) popup_snote_single_graphic_window_t2_ParamLimits

0x7f67,	// (0x00065351) popup_snote_single_graphic_window_t2

0x9617,	// (0x00066a01) popup_snote_single_graphic_window_t3_ParamLimits

0x9617,	// (0x00066a01) popup_snote_single_graphic_window_t3

0x9650,	// (0x00066a3a) popup_snote_single_graphic_window_t4_ParamLimits

0x9650,	// (0x00066a3a) popup_snote_single_graphic_window_t4

0x96b3,	// (0x00066a9d) popup_snote_single_graphic_window_t5_ParamLimits

0x96b3,	// (0x00066a9d) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0006c97b) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0006c97b) popup_snote_single_graphic_window_t

0x36cf,	// (0x00060ab9) grid_graphic_popup_pane_ParamLimits

0x36cf,	// (0x00060ab9) grid_graphic_popup_pane

0x36f9,	// (0x00060ae3) listscroll_popup_graphic_pane_g1_ParamLimits

0x36f9,	// (0x00060ae3) listscroll_popup_graphic_pane_g1

0xcaf1,	// (0x00069edb) listscroll_popup_graphic_pane_g2_ParamLimits

0xcaf1,	// (0x00069edb) listscroll_popup_graphic_pane_g2

0x0001,

0xf975,	// (0x0006cd5f) listscroll_popup_graphic_pane_g_ParamLimits

0xf975,	// (0x0006cd5f) listscroll_popup_graphic_pane_g

0x3721,	// (0x00060b0b) scroll_pane_cp5

0xcab0,	// (0x00069e9a) cell_graphic_popup_pane_ParamLimits

0xcab0,	// (0x00069e9a) cell_graphic_popup_pane

0x3646,	// (0x00060a30) cell_graphic_popup_pane_g1

0x364e,	// (0x00060a38) cell_graphic_popup_pane_g2

0x7f0e,	// (0x000652f8) cell_graphic_popup_pane_g3

0x0002,

0xf96e,	// (0x0006cd58) cell_graphic_popup_pane_g

0xcaa2,	// (0x00069e8c) cell_graphic_popup_pane_t2

0x7f17,	// (0x00065301) grid_highlight_pane_cp3

0x7f8c,	// (0x00065376) list_gen_pane_ParamLimits

0x7f8c,	// (0x00065376) list_gen_pane

0x7fb4,	// (0x0006539e) scroll_pane

0xca0c,	// (0x00069df6) bg_list_pane_g1_ParamLimits

0xca0c,	// (0x00069df6) bg_list_pane_g1

0xca27,	// (0x00069e11) bg_list_pane_g2_ParamLimits

0xca27,	// (0x00069e11) bg_list_pane_g2

0xca3a,	// (0x00069e24) bg_list_pane_g3_ParamLimits

0xca3a,	// (0x00069e24) bg_list_pane_g3

0xca4c,	// (0x00069e36) bg_list_pane_g4_ParamLimits

0xca4c,	// (0x00069e36) bg_list_pane_g4

0xca5e,	// (0x00069e48) bg_list_pane_g5_ParamLimits

0xca5e,	// (0x00069e48) bg_list_pane_g5

0x0004,

0xf963,	// (0x0006cd4d) bg_list_pane_g_ParamLimits

0xf963,	// (0x0006cd4d) bg_list_pane_g

0xb4f7,	// (0x000688e1) list_double2_graphic_large_graphic_pane_ParamLimits

0xb4f7,	// (0x000688e1) list_double2_graphic_large_graphic_pane

0xb4f7,	// (0x000688e1) list_double2_graphic_pane_ParamLimits

0xb4f7,	// (0x000688e1) list_double2_graphic_pane

0xb4f7,	// (0x000688e1) list_double2_large_graphic_pane_ParamLimits

0xb4f7,	// (0x000688e1) list_double2_large_graphic_pane

0xb4f7,	// (0x000688e1) list_double2_pane_ParamLimits

0xb4f7,	// (0x000688e1) list_double2_pane

0xb4f7,	// (0x000688e1) list_double_graphic_heading_pane_ParamLimits

0xb4f7,	// (0x000688e1) list_double_graphic_heading_pane

0xb4f7,	// (0x000688e1) list_double_graphic_pane_ParamLimits

0xb4f7,	// (0x000688e1) list_double_graphic_pane

0xb4f7,	// (0x000688e1) list_double_heading_pane_ParamLimits

0xb4f7,	// (0x000688e1) list_double_heading_pane

0xb4f7,	// (0x000688e1) list_double_large_graphic_pane_ParamLimits

0xb4f7,	// (0x000688e1) list_double_large_graphic_pane

0xb4f7,	// (0x000688e1) list_double_number_pane_ParamLimits

0xb4f7,	// (0x000688e1) list_double_number_pane

0xb4f7,	// (0x000688e1) list_double_pane_ParamLimits

0xb4f7,	// (0x000688e1) list_double_pane

0xb4f7,	// (0x000688e1) list_double_time_pane_ParamLimits

0xb4f7,	// (0x000688e1) list_double_time_pane

0xb4f7,	// (0x000688e1) list_setting_number_pane_ParamLimits

0xb4f7,	// (0x000688e1) list_setting_number_pane

0xb4f7,	// (0x000688e1) list_setting_pane_ParamLimits

0xb4f7,	// (0x000688e1) list_setting_pane

0x9d19,	// (0x00067103) list_single_2graphic_pane_ParamLimits

0x9d19,	// (0x00067103) list_single_2graphic_pane

0x9d19,	// (0x00067103) list_single_graphic_heading_pane_ParamLimits

0x9d19,	// (0x00067103) list_single_graphic_heading_pane

0x9d19,	// (0x00067103) list_single_graphic_pane_ParamLimits

0x9d19,	// (0x00067103) list_single_graphic_pane

0x9d19,	// (0x00067103) list_single_heading_pane_ParamLimits

0x9d19,	// (0x00067103) list_single_heading_pane

0xc9f9,	// (0x00069de3) list_single_large_graphic_pane_ParamLimits

0xc9f9,	// (0x00069de3) list_single_large_graphic_pane

0x9d19,	// (0x00067103) list_single_number_heading_pane_ParamLimits

0x9d19,	// (0x00067103) list_single_number_heading_pane

0x9d19,	// (0x00067103) list_single_number_pane_ParamLimits

0x9d19,	// (0x00067103) list_single_number_pane

0x9d19,	// (0x00067103) list_single_pane_ParamLimits

0x9d19,	// (0x00067103) list_single_pane

0x6f34,	// (0x0006431e) list_highlight_pane_cp1

0xbe8c,	// (0x00069276) list_single_pane_g1_ParamLimits

0xbe8c,	// (0x00069276) list_single_pane_g1

0x059d,	// (0x0005d987) list_single_pane_g2_ParamLimits

0x059d,	// (0x0005d987) list_single_pane_g2

0x0001,

0xf5ad,	// (0x0006c997) list_single_pane_g_ParamLimits

0xf5ad,	// (0x0006c997) list_single_pane_g

0xb4e1,	// (0x000688cb) list_single_pane_t1_ParamLimits

0xb4e1,	// (0x000688cb) list_single_pane_t1

0xbe8c,	// (0x00069276) list_single_number_pane_g1_ParamLimits

0xbe8c,	// (0x00069276) list_single_number_pane_g1

0x059d,	// (0x0005d987) list_single_number_pane_g2_ParamLimits

0x059d,	// (0x0005d987) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x0006c997) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x0006c997) list_single_number_pane_g

0xe7fd,	// (0x0006bbe7) list_single_number_pane_t1_ParamLimits

0xe7fd,	// (0x0006bbe7) list_single_number_pane_t1

0xb435,	// (0x0006881f) list_single_number_pane_t2_ParamLimits

0xb435,	// (0x0006881f) list_single_number_pane_t2

0x0001,

0xf924,	// (0x0006cd0e) list_single_number_pane_t_ParamLimits

0xf924,	// (0x0006cd0e) list_single_number_pane_t

0xe7f1,	// (0x0006bbdb) list_single_graphic_pane_g1_ParamLimits

0xe7f1,	// (0x0006bbdb) list_single_graphic_pane_g1

0xbe8c,	// (0x00069276) list_single_graphic_pane_g2_ParamLimits

0xbe8c,	// (0x00069276) list_single_graphic_pane_g2

0x059d,	// (0x0005d987) list_single_graphic_pane_g3_ParamLimits

0x059d,	// (0x0005d987) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0006c986) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0006c986) list_single_graphic_pane_g

0xe7fd,	// (0x0006bbe7) list_single_graphic_pane_t1_ParamLimits

0xe7fd,	// (0x0006bbe7) list_single_graphic_pane_t1

0x96ec,	// (0x00066ad6) list_single_heading_pane_g1_ParamLimits

0x96ec,	// (0x00066ad6) list_single_heading_pane_g1

0x059d,	// (0x0005d987) list_single_heading_pane_g2_ParamLimits

0x059d,	// (0x0005d987) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0006c98d) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0006c98d) list_single_heading_pane_g

0x96ff,	// (0x00066ae9) list_single_heading_pane_t1_ParamLimits

0x96ff,	// (0x00066ae9) list_single_heading_pane_t1

0x9715,	// (0x00066aff) list_single_heading_pane_t2_ParamLimits

0x9715,	// (0x00066aff) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0006c992) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0006c992) list_single_heading_pane_t

0xbe8c,	// (0x00069276) list_single_number_heading_pane_g1_ParamLimits

0xbe8c,	// (0x00069276) list_single_number_heading_pane_g1

0x059d,	// (0x0005d987) list_single_number_heading_pane_g2_ParamLimits

0x059d,	// (0x0005d987) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x0006c997) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x0006c997) list_single_number_heading_pane_g

0x9727,	// (0x00066b11) list_single_number_heading_pane_t1_ParamLimits

0x9727,	// (0x00066b11) list_single_number_heading_pane_t1

0x973d,	// (0x00066b27) list_single_number_heading_pane_t2_ParamLimits

0x973d,	// (0x00066b27) list_single_number_heading_pane_t2

0x974f,	// (0x00066b39) list_single_number_heading_pane_t3_ParamLimits

0x974f,	// (0x00066b39) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x0006c99c) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x0006c99c) list_single_number_heading_pane_t

0x9761,	// (0x00066b4b) list_single_graphic_heading_pane_g1_ParamLimits

0x9761,	// (0x00066b4b) list_single_graphic_heading_pane_g1

0x9777,	// (0x00066b61) list_single_graphic_heading_pane_g4_ParamLimits

0x9777,	// (0x00066b61) list_single_graphic_heading_pane_g4

0x059d,	// (0x0005d987) list_single_graphic_heading_pane_g5_ParamLimits

0x059d,	// (0x0005d987) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x0006c9a3) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x0006c9a3) list_single_graphic_heading_pane_g

0x9727,	// (0x00066b11) list_single_graphic_heading_pane_t1_ParamLimits

0x9727,	// (0x00066b11) list_single_graphic_heading_pane_t1

0x9788,	// (0x00066b72) list_single_graphic_heading_pane_t2_ParamLimits

0x9788,	// (0x00066b72) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x0006c9aa) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x0006c9aa) list_single_graphic_heading_pane_t

0x3cb6,	// (0x000610a0) list_single_large_graphic_pane_g1_ParamLimits

0x3cb6,	// (0x000610a0) list_single_large_graphic_pane_g1

0xe813,	// (0x0006bbfd) list_single_large_graphic_pane_g2_ParamLimits

0xe813,	// (0x0006bbfd) list_single_large_graphic_pane_g2

0xe81f,	// (0x0006bc09) list_single_large_graphic_pane_g3_ParamLimits

0xe81f,	// (0x0006bc09) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x0006c9af) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x0006c9af) list_single_large_graphic_pane_g

0x258c,	// (0x0005f976) wait_border_pane_g2_copy1

0x97a0,	// (0x00066b8a) list_single_large_graphic_pane_g4_cp2

0xe82b,	// (0x0006bc15) list_single_large_graphic_pane_t1_ParamLimits

0xe82b,	// (0x0006bc15) list_single_large_graphic_pane_t1

0x97a8,	// (0x00066b92) list_double_pane_g1_ParamLimits

0x97a8,	// (0x00066b92) list_double_pane_g1

0x97b4,	// (0x00066b9e) list_double_pane_g2_ParamLimits

0x97b4,	// (0x00066b9e) list_double_pane_g2

0x0001,

0xf5cc,	// (0x0006c9b6) list_double_pane_g_ParamLimits

0xf5cc,	// (0x0006c9b6) list_double_pane_g

0x97c0,	// (0x00066baa) list_double_pane_t1_ParamLimits

0x97c0,	// (0x00066baa) list_double_pane_t1

0x97d6,	// (0x00066bc0) list_double_pane_t2_ParamLimits

0x97d6,	// (0x00066bc0) list_double_pane_t2

0x0001,

0xf5d1,	// (0x0006c9bb) list_double_pane_t_ParamLimits

0xf5d1,	// (0x0006c9bb) list_double_pane_t

0x97e8,	// (0x00066bd2) list_double2_pane_g1_ParamLimits

0x97e8,	// (0x00066bd2) list_double2_pane_g1

0x97f9,	// (0x00066be3) list_double2_pane_g2_ParamLimits

0x97f9,	// (0x00066be3) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x0006c9c0) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x0006c9c0) list_double2_pane_g

0x9805,	// (0x00066bef) list_double2_pane_t1_ParamLimits

0x9805,	// (0x00066bef) list_double2_pane_t1

0x981b,	// (0x00066c05) list_double2_pane_t2_ParamLimits

0x981b,	// (0x00066c05) list_double2_pane_t2

0x0001,

0xf5db,	// (0x0006c9c5) list_double2_pane_t_ParamLimits

0xf5db,	// (0x0006c9c5) list_double2_pane_t

0x97a8,	// (0x00066b92) list_double_number_pane_g1_ParamLimits

0x97a8,	// (0x00066b92) list_double_number_pane_g1

0x97b4,	// (0x00066b9e) list_double_number_pane_g2_ParamLimits

0x97b4,	// (0x00066b9e) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x0006c9b6) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x0006c9b6) list_double_number_pane_g

0x982d,	// (0x00066c17) list_double_number_pane_t1_ParamLimits

0x982d,	// (0x00066c17) list_double_number_pane_t1

0x983f,	// (0x00066c29) list_double_number_pane_t2_ParamLimits

0x983f,	// (0x00066c29) list_double_number_pane_t2

0x9855,	// (0x00066c3f) list_double_number_pane_t3_ParamLimits

0x9855,	// (0x00066c3f) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x0006c9ca) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x0006c9ca) list_double_number_pane_t

0x9867,	// (0x00066c51) list_double_graphic_pane_g1_ParamLimits

0x9867,	// (0x00066c51) list_double_graphic_pane_g1

0x9873,	// (0x00066c5d) list_double_graphic_pane_g2_ParamLimits

0x9873,	// (0x00066c5d) list_double_graphic_pane_g2

0x3abd,	// (0x00060ea7) list_double_graphic_pane_g3_ParamLimits

0x3abd,	// (0x00060ea7) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x0006c9d1) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x0006c9d1) list_double_graphic_pane_g

0x97c0,	// (0x00066baa) list_double_graphic_pane_t1_ParamLimits

0x97c0,	// (0x00066baa) list_double_graphic_pane_t1

0x97d6,	// (0x00066bc0) list_double_graphic_pane_t2_ParamLimits

0x97d6,	// (0x00066bc0) list_double_graphic_pane_t2

0x0001,

0xf5d1,	// (0x0006c9bb) list_double_graphic_pane_t_ParamLimits

0xf5d1,	// (0x0006c9bb) list_double_graphic_pane_t

0x988e,	// (0x00066c78) list_double2_graphic_pane_g1_ParamLimits

0x988e,	// (0x00066c78) list_double2_graphic_pane_g1

0x989a,	// (0x00066c84) list_double2_graphic_pane_g2_ParamLimits

0x989a,	// (0x00066c84) list_double2_graphic_pane_g2

0x98a6,	// (0x00066c90) list_double2_graphic_pane_g3_ParamLimits

0x98a6,	// (0x00066c90) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0006c9da) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0006c9da) list_double2_graphic_pane_g

0x98b2,	// (0x00066c9c) list_double2_graphic_pane_t1_ParamLimits

0x98b2,	// (0x00066c9c) list_double2_graphic_pane_t1

0x98c8,	// (0x00066cb2) list_double2_graphic_pane_t2_ParamLimits

0x98c8,	// (0x00066cb2) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0006c9e1) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0006c9e1) list_double2_graphic_pane_t

0x98da,	// (0x00066cc4) list_double_large_graphic_pane_g1_ParamLimits

0x98da,	// (0x00066cc4) list_double_large_graphic_pane_g1

0x98f9,	// (0x00066ce3) list_double_large_graphic_pane_g2_ParamLimits

0x98f9,	// (0x00066ce3) list_double_large_graphic_pane_g2

0x97b4,	// (0x00066b9e) list_double_large_graphic_pane_g3_ParamLimits

0x97b4,	// (0x00066b9e) list_double_large_graphic_pane_g3

0x990f,	// (0x00066cf9) list_double_large_graphic_pane_g4_ParamLimits

0x990f,	// (0x00066cf9) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0006c9e6) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0006c9e6) list_double_large_graphic_pane_g

0x9922,	// (0x00066d0c) list_double_large_graphic_pane_t1_ParamLimits

0x9922,	// (0x00066d0c) list_double_large_graphic_pane_t1

0x993b,	// (0x00066d25) list_double_large_graphic_pane_t2_ParamLimits

0x993b,	// (0x00066d25) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0006c9f1) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0006c9f1) list_double_large_graphic_pane_t

0x994d,	// (0x00066d37) list_double2_large_graphic_pane_g1_ParamLimits

0x994d,	// (0x00066d37) list_double2_large_graphic_pane_g1

0x9959,	// (0x00066d43) list_double2_large_graphic_pane_g2_ParamLimits

0x9959,	// (0x00066d43) list_double2_large_graphic_pane_g2

0x98a6,	// (0x00066c90) list_double2_large_graphic_pane_g3_ParamLimits

0x98a6,	// (0x00066c90) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0006c9f6) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0006c9f6) list_double2_large_graphic_pane_g

0x98b2,	// (0x00066c9c) list_double2_large_graphic_pane_t1_ParamLimits

0x98b2,	// (0x00066c9c) list_double2_large_graphic_pane_t1

0x98c8,	// (0x00066cb2) list_double2_large_graphic_pane_t2_ParamLimits

0x98c8,	// (0x00066cb2) list_double2_large_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0006c9e1) list_double2_large_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0006c9e1) list_double2_large_graphic_pane_t

0x996a,	// (0x00066d54) list_double_heading_pane_g1_ParamLimits

0x996a,	// (0x00066d54) list_double_heading_pane_g1

0xe856,	// (0x0006bc40) list_double_heading_pane_g2_ParamLimits

0xe856,	// (0x0006bc40) list_double_heading_pane_g2

0x0001,

0xf613,	// (0x0006c9fd) list_double_heading_pane_g_ParamLimits

0xf613,	// (0x0006c9fd) list_double_heading_pane_g

0x997b,	// (0x00066d65) list_double_heading_pane_t1_ParamLimits

0x997b,	// (0x00066d65) list_double_heading_pane_t1

0x98c8,	// (0x00066cb2) list_double_heading_pane_t2_ParamLimits

0x98c8,	// (0x00066cb2) list_double_heading_pane_t2

0x0001,

0xf618,	// (0x0006ca02) list_double_heading_pane_t_ParamLimits

0xf618,	// (0x0006ca02) list_double_heading_pane_t

0x9991,	// (0x00066d7b) list_double_graphic_heading_pane_g1_ParamLimits

0x9991,	// (0x00066d7b) list_double_graphic_heading_pane_g1

0x996a,	// (0x00066d54) list_double_graphic_heading_pane_g2_ParamLimits

0x996a,	// (0x00066d54) list_double_graphic_heading_pane_g2

0xe856,	// (0x0006bc40) list_double_graphic_heading_pane_g3_ParamLimits

0xe856,	// (0x0006bc40) list_double_graphic_heading_pane_g3

0x0002,

0xf61d,	// (0x0006ca07) list_double_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0006ca07) list_double_graphic_heading_pane_g

0x997b,	// (0x00066d65) list_double_graphic_heading_pane_t1_ParamLimits

0x997b,	// (0x00066d65) list_double_graphic_heading_pane_t1

0x98c8,	// (0x00066cb2) list_double_graphic_heading_pane_t2_ParamLimits

0x98c8,	// (0x00066cb2) list_double_graphic_heading_pane_t2

0x0001,

0xf618,	// (0x0006ca02) list_double_graphic_heading_pane_t_ParamLimits

0xf618,	// (0x0006ca02) list_double_graphic_heading_pane_t

0x999d,	// (0x00066d87) list_double_time_pane_g1_ParamLimits

0x999d,	// (0x00066d87) list_double_time_pane_g1

0xe862,	// (0x0006bc4c) list_double_time_pane_g2_ParamLimits

0xe862,	// (0x0006bc4c) list_double_time_pane_g2

0x0001,

0xf624,	// (0x0006ca0e) list_double_time_pane_g_ParamLimits

0xf624,	// (0x0006ca0e) list_double_time_pane_g

0x99ae,	// (0x00066d98) list_double_time_pane_t1_ParamLimits

0x99ae,	// (0x00066d98) list_double_time_pane_t1

0x99c4,	// (0x00066dae) list_double_time_pane_t2_ParamLimits

0x99c4,	// (0x00066dae) list_double_time_pane_t2

0x99d6,	// (0x00066dc0) list_double_time_pane_t3_ParamLimits

0x99d6,	// (0x00066dc0) list_double_time_pane_t3

0x99e8,	// (0x00066dd2) list_double_time_pane_t4_ParamLimits

0x99e8,	// (0x00066dd2) list_double_time_pane_t4

0x0003,

0xf629,	// (0x0006ca13) list_double_time_pane_t_ParamLimits

0xf629,	// (0x0006ca13) list_double_time_pane_t

0x99fa,	// (0x00066de4) list_setting_pane_g1_ParamLimits

0x99fa,	// (0x00066de4) list_setting_pane_g1

0x9a06,	// (0x00066df0) list_setting_pane_g2_ParamLimits

0x9a06,	// (0x00066df0) list_setting_pane_g2

0x0001,

0xf632,	// (0x0006ca1c) list_setting_pane_g_ParamLimits

0xf632,	// (0x0006ca1c) list_setting_pane_g

0x9a12,	// (0x00066dfc) list_setting_pane_t1_ParamLimits

0x9a12,	// (0x00066dfc) list_setting_pane_t1

0x9a2c,	// (0x00066e16) list_setting_pane_t2_ParamLimits

0x9a2c,	// (0x00066e16) list_setting_pane_t2

0x0002,

0xf637,	// (0x0006ca21) list_setting_pane_t_ParamLimits

0xf637,	// (0x0006ca21) list_setting_pane_t

0x9a6b,	// (0x00066e55) set_value_pane_cp_ParamLimits

0x9a6b,	// (0x00066e55) set_value_pane_cp

0x9a77,	// (0x00066e61) list_setting_number_pane_g1_ParamLimits

0x9a77,	// (0x00066e61) list_setting_number_pane_g1

0x9a83,	// (0x00066e6d) list_setting_number_pane_g2_ParamLimits

0x9a83,	// (0x00066e6d) list_setting_number_pane_g2

0x0001,

0xf63e,	// (0x0006ca28) list_setting_number_pane_g_ParamLimits

0xf63e,	// (0x0006ca28) list_setting_number_pane_g

0x9a8f,	// (0x00066e79) list_setting_number_pane_t1_ParamLimits

0x9a8f,	// (0x00066e79) list_setting_number_pane_t1

0x9aa8,	// (0x00066e92) list_setting_number_pane_t2_ParamLimits

0x9aa8,	// (0x00066e92) list_setting_number_pane_t2

0x9ac2,	// (0x00066eac) list_setting_number_pane_t3_ParamLimits

0x9ac2,	// (0x00066eac) list_setting_number_pane_t3

0x0003,

0xf643,	// (0x0006ca2d) list_setting_number_pane_t_ParamLimits

0xf643,	// (0x0006ca2d) list_setting_number_pane_t

0x9a6b,	// (0x00066e55) set_value_pane_ParamLimits

0x9a6b,	// (0x00066e55) set_value_pane

0x7fe8,	// (0x000653d2) bg_set_opt_pane_ParamLimits

0x7fe8,	// (0x000653d2) bg_set_opt_pane

0xe86e,	// (0x0006bc58) set_value_pane_t1

0x8009,	// (0x000653f3) slider_set_pane_cp3

0x9b05,	// (0x00066eef) volume_small_pane_cp

0x8012,	// (0x000653fc) list_form_gen_pane

0x801b,	// (0x00065405) scroll_pane_cp8

0x9b0e,	// (0x00066ef8) form_field_data_pane_ParamLimits

0x9b0e,	// (0x00066ef8) form_field_data_pane

0x9b25,	// (0x00066f0f) form_field_data_wide_pane_ParamLimits

0x9b25,	// (0x00066f0f) form_field_data_wide_pane

0x9b45,	// (0x00066f2f) form_field_popup_pane_ParamLimits

0x9b45,	// (0x00066f2f) form_field_popup_pane

0x9b65,	// (0x00066f4f) form_field_popup_wide_pane_ParamLimits

0x9b65,	// (0x00066f4f) form_field_popup_wide_pane

0xe88c,	// (0x0006bc76) form_field_slider_pane_ParamLimits

0xe88c,	// (0x0006bc76) form_field_slider_pane

0x9b7c,	// (0x00066f66) form_field_slider_wide_pane_ParamLimits

0x9b7c,	// (0x00066f66) form_field_slider_wide_pane

0x802c,	// (0x00065416) data_form_pane

0x9b99,	// (0x00066f83) form_field_data_pane_t1

0x8038,	// (0x00065422) input_focus_pane

0xe89f,	// (0x0006bc89) data_form_wide_pane

0xe8bc,	// (0x0006bca6) form_field_data_wide_pane_t1

0x7f2c,	// (0x00065316) input_focus_pane_cp6

0x9bb3,	// (0x00066f9d) form_field_popup_pane_t1

0x8038,	// (0x00065422) input_focus_pane_cp7

0x8066,	// (0x00065450) list_form_pane

0xe8e6,	// (0x0006bcd0) form_field_popup_wide_pane_t1

0x8038,	// (0x00065422) input_focus_pane_cp8

0x8072,	// (0x0006545c) list_form_wide_pane

0x9bd5,	// (0x00066fbf) form_field_slider_pane_t1_ParamLimits

0x9bd5,	// (0x00066fbf) form_field_slider_pane_t1

0x9bed,	// (0x00066fd7) form_field_slider_pane_t2_ParamLimits

0x9bed,	// (0x00066fd7) form_field_slider_pane_t2

0x0001,

0xf653,	// (0x0006ca3d) form_field_slider_pane_t_ParamLimits

0xf653,	// (0x0006ca3d) form_field_slider_pane_t

0x70ac,	// (0x00064496) input_focus_pane_cp9_ParamLimits

0x70ac,	// (0x00064496) input_focus_pane_cp9

0x9c02,	// (0x00066fec) slider_cont_pane_ParamLimits

0x9c02,	// (0x00066fec) slider_cont_pane

0x807e,	// (0x00065468) form_field_slider_wide_pane_t1_ParamLimits

0x807e,	// (0x00065468) form_field_slider_wide_pane_t1

0xe8fb,	// (0x0006bce5) form_field_slider_wide_pane_t2_ParamLimits

0xe8fb,	// (0x0006bce5) form_field_slider_wide_pane_t2

0x0001,

0xf658,	// (0x0006ca42) form_field_slider_wide_pane_t_ParamLimits

0xf658,	// (0x0006ca42) form_field_slider_wide_pane_t

0x70ac,	// (0x00064496) input_focus_pane_cp10_ParamLimits

0x70ac,	// (0x00064496) input_focus_pane_cp10

0x9c16,	// (0x00067000) slider_cont_pane_cp1_ParamLimits

0x9c16,	// (0x00067000) slider_cont_pane_cp1

0x9c2a,	// (0x00067014) slider_form_pane_cp

0x8090,	// (0x0006547a) input_focus_pane_g1

0x8098,	// (0x00065482) input_focus_pane_g2

0x80a0,	// (0x0006548a) input_focus_pane_g3

0x80a8,	// (0x00065492) input_focus_pane_g4

0x80b0,	// (0x0006549a) input_focus_pane_g5

0x80b8,	// (0x000654a2) input_focus_pane_g6

0x80c0,	// (0x000654aa) input_focus_pane_g7

0x80c8,	// (0x000654b2) input_focus_pane_g8

0x80d0,	// (0x000654ba) input_focus_pane_g9

0x6f2a,	// (0x00064314) input_focus_pane_g10

0x0009,

0xf65d,	// (0x0006ca47) input_focus_pane_g

0x2595,	// (0x0005f97f) wait_border_pane_g3_copy1

0x9c32,	// (0x0006701c) data_form_pane_t1

0x6f2a,	// (0x00064314) wait_anim_pane_g1_copy1

0xb4b3,	// (0x0006889d) data_form_wide_pane_t1

0x9c4c,	// (0x00067036) list_form_graphic_pane_cp_ParamLimits

0x9c4c,	// (0x00067036) list_form_graphic_pane_cp

0x3484,	// (0x0006086e) slider_form_pane_g1

0x348d,	// (0x00060877) slider_form_pane_g2

0x0006,

0xf954,	// (0x0006cd3e) slider_form_pane_g

0x9c5e,	// (0x00067048) list_form_graphic_pane_ParamLimits

0x9c5e,	// (0x00067048) list_form_graphic_pane

0x9c71,	// (0x0006705b) list_form_graphic_pane_g1

0x9c79,	// (0x00067063) list_form_graphic_pane_t1_ParamLimits

0x9c79,	// (0x00067063) list_form_graphic_pane_t1

0x6f82,	// (0x0006436c) list_highlight_pane_cp5_ParamLimits

0x6f82,	// (0x0006436c) list_highlight_pane_cp5

0x9c8e,	// (0x00067078) find_pane_g1

0x80d8,	// (0x000654c2) input_find_pane

0x9c97,	// (0x00067081) input_find_pane_g1_ParamLimits

0x9c97,	// (0x00067081) input_find_pane_g1

0x9ca3,	// (0x0006708d) input_find_pane_t1_ParamLimits

0x9ca3,	// (0x0006708d) input_find_pane_t1

0x9cb8,	// (0x000670a2) input_find_pane_t2_ParamLimits

0x9cb8,	// (0x000670a2) input_find_pane_t2

0x0001,

0xf672,	// (0x0006ca5c) input_find_pane_t_ParamLimits

0xf672,	// (0x0006ca5c) input_find_pane_t

0x80e1,	// (0x000654cb) input_focus_pane_cp5_ParamLimits

0x80e1,	// (0x000654cb) input_focus_pane_cp5

0x80f4,	// (0x000654de) bg_popup_window_pane_cp2_ParamLimits

0x80f4,	// (0x000654de) bg_popup_window_pane_cp2

0x8101,	// (0x000654eb) listscroll_menu_pane_ParamLimits

0x8101,	// (0x000654eb) listscroll_menu_pane

0x9cd9,	// (0x000670c3) popup_submenu_window_ParamLimits

0x9cd9,	// (0x000670c3) popup_submenu_window

0x810d,	// (0x000654f7) find_popup_pane_g1

0x9d01,	// (0x000670eb) input_popup_find_pane_cp

0x8115,	// (0x000654ff) input_focus_pane_cp4_ParamLimits

0x8115,	// (0x000654ff) input_focus_pane_cp4

0x8123,	// (0x0006550d) input_popup_find_pane_t1_ParamLimits

0x8123,	// (0x0006550d) input_popup_find_pane_t1

0x6f34,	// (0x0006431e) bg_popup_sub_pane_cp

0x8151,	// (0x0006553b) listscroll_popup_sub_pane

0x8159,	// (0x00065543) list_submenu_pane_ParamLimits

0x8159,	// (0x00065543) list_submenu_pane

0x816a,	// (0x00065554) scroll_pane_cp4

0x9d19,	// (0x00067103) list_single_popup_submenu_pane_ParamLimits

0x9d19,	// (0x00067103) list_single_popup_submenu_pane

0x9d2d,	// (0x00067117) list_single_popup_submenu_pane_g1

0x9d35,	// (0x0006711f) list_single_popup_submenu_pane_t1_ParamLimits

0x9d35,	// (0x0006711f) list_single_popup_submenu_pane_t1

0x70ac,	// (0x00064496) bg_active_tab_pane_cp1_ParamLimits

0x70ac,	// (0x00064496) bg_active_tab_pane_cp1

0x8172,	// (0x0006555c) tabs_2_active_pane_g1

0x9d4a,	// (0x00067134) tabs_2_active_pane_t1

0x70ac,	// (0x00064496) bg_passive_tab_pane_cp1_ParamLimits

0x70ac,	// (0x00064496) bg_passive_tab_pane_cp1

0x8172,	// (0x0006555c) tabs_2_passive_pane_g1

0x9d4a,	// (0x00067134) tabs_2_passive_pane_t1

0x6f82,	// (0x0006436c) bg_active_tab_pane_cp4

0x9d5c,	// (0x00067146) tabs_2_long_active_pane_t1

0x8461,	// (0x0006584b) bg_passive_tab_pane_cp4

0x05d6,	// (0x0005d9c0) list_single_midp_graphic_pane_g4_ParamLimits

0x6f82,	// (0x0006436c) bg_active_tab_pane_cp5

0x9d6f,	// (0x00067159) tabs_3_long_active_pane_t1

0x8461,	// (0x0006584b) bg_passive_tab_pane_cp5

0x05d6,	// (0x0005d9c0) list_single_midp_graphic_pane_g4

0x6f82,	// (0x0006436c) bg_popup_window_pane_cp13_ParamLimits

0x6f82,	// (0x0006436c) bg_popup_window_pane_cp13

0x817a,	// (0x00065564) listscroll_popup_fast_pane_ParamLimits

0x817a,	// (0x00065564) listscroll_popup_fast_pane

0x8186,	// (0x00065570) grid_popup_fast_pane_ParamLimits

0x8186,	// (0x00065570) grid_popup_fast_pane

0x8198,	// (0x00065582) scroll_pane_cp9_ParamLimits

0x8198,	// (0x00065582) scroll_pane_cp9

0x4f94,	// (0x0006237e) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4f94,	// (0x0006237e) list_single_graphic_hl_pane_t1_cp2

0x81ab,	// (0x00065595) input_focus_pane_cp20_ParamLimits

0x81ab,	// (0x00065595) input_focus_pane_cp20

0x81b9,	// (0x000655a3) query_popup_data_pane_t1_ParamLimits

0x81b9,	// (0x000655a3) query_popup_data_pane_t1

0x81cc,	// (0x000655b6) query_popup_data_pane_t2_ParamLimits

0x81cc,	// (0x000655b6) query_popup_data_pane_t2

0x8212,	// (0x000655fc) query_popup_data_pane_t3_ParamLimits

0x8212,	// (0x000655fc) query_popup_data_pane_t3

0x8253,	// (0x0006563d) query_popup_data_pane_t4_ParamLimits

0x8253,	// (0x0006563d) query_popup_data_pane_t4

0x828f,	// (0x00065679) query_popup_data_pane_t5_ParamLimits

0x828f,	// (0x00065679) query_popup_data_pane_t5

0x0004,

0xf677,	// (0x0006ca61) query_popup_data_pane_t_ParamLimits

0xf677,	// (0x0006ca61) query_popup_data_pane_t

0x8090,	// (0x0006547a) bg_set_opt_pane_g1

0x8098,	// (0x00065482) bg_set_opt_pane_g2

0x80a0,	// (0x0006548a) bg_set_opt_pane_g3

0x80a8,	// (0x00065492) bg_set_opt_pane_g4

0x80b0,	// (0x0006549a) bg_set_opt_pane_g5

0x80b8,	// (0x000654a2) bg_set_opt_pane_g6

0x80c0,	// (0x000654aa) bg_set_opt_pane_g7

0x80c8,	// (0x000654b2) bg_set_opt_pane_g8

0x80d0,	// (0x000654ba) bg_set_opt_pane_g9

0x0008,

0xf682,	// (0x0006ca6c) bg_set_opt_pane_g

0xf2bc,	// (0x0006c6a6) control_top_pane_stacon_ParamLimits

0xf2bc,	// (0x0006c6a6) control_top_pane_stacon

0xf30f,	// (0x0006c6f9) signal_pane_stacon_ParamLimits

0xf30f,	// (0x0006c6f9) signal_pane_stacon

0xc052,	// (0x0006943c) stacon_top_pane_g1_ParamLimits

0xc052,	// (0x0006943c) stacon_top_pane_g1

0xf334,	// (0x0006c71e) title_pane_stacon_ParamLimits

0xf334,	// (0x0006c71e) title_pane_stacon

0xf35e,	// (0x0006c748) uni_indicator_pane_stacon_ParamLimits

0xf35e,	// (0x0006c748) uni_indicator_pane_stacon

0xf373,	// (0x0006c75d) battery_pane_stacon_ParamLimits

0xf373,	// (0x0006c75d) battery_pane_stacon

0xf3b7,	// (0x0006c7a1) control_bottom_pane_stacon_ParamLimits

0xf3b7,	// (0x0006c7a1) control_bottom_pane_stacon

0xf3da,	// (0x0006c7c4) navi_pane_stacon_ParamLimits

0xf3da,	// (0x0006c7c4) navi_pane_stacon

0xc074,	// (0x0006945e) stacon_bottom_pane_g1_ParamLimits

0xc074,	// (0x0006945e) stacon_bottom_pane_g1

0xf07f,	// (0x0006c469) aid_levels_signal_lsc_ParamLimits

0xf07f,	// (0x0006c469) aid_levels_signal_lsc

0xf095,	// (0x0006c47f) signal_pane_stacon_g1_ParamLimits

0xf095,	// (0x0006c47f) signal_pane_stacon_g1

0xf0a9,	// (0x0006c493) signal_pane_stacon_g2_ParamLimits

0xf0a9,	// (0x0006c493) signal_pane_stacon_g2

0x0001,

0xf695,	// (0x0006ca7f) signal_pane_stacon_g_ParamLimits

0xf695,	// (0x0006ca7f) signal_pane_stacon_g

0xf0de,	// (0x0006c4c8) title_pane_stacon_t1_ParamLimits

0xf0de,	// (0x0006c4c8) title_pane_stacon_t1

0x82d3,	// (0x000656bd) uni_indicator_pane_stacon_g1

0x82dd,	// (0x000656c7) uni_indicator_pane_stacon_g2

0x82e7,	// (0x000656d1) uni_indicator_pane_stacon_g3

0x82f1,	// (0x000656db) uni_indicator_pane_stacon_g4

0x0003,

0xf6a1,	// (0x0006ca8b) uni_indicator_pane_stacon_g

0xf103,	// (0x0006c4ed) control_top_pane_stacon_g1

0xf10b,	// (0x0006c4f5) control_top_pane_stacon_t1_ParamLimits

0xf10b,	// (0x0006c4f5) control_top_pane_stacon_t1

0xf142,	// (0x0006c52c) aid_levels_battery_lsc_ParamLimits

0xf142,	// (0x0006c52c) aid_levels_battery_lsc

0xf159,	// (0x0006c543) battery_pane_stacon_g1_ParamLimits

0xf159,	// (0x0006c543) battery_pane_stacon_g1

0xf16c,	// (0x0006c556) battery_pane_stacon_g2_ParamLimits

0xf16c,	// (0x0006c556) battery_pane_stacon_g2

0x0001,

0xf6aa,	// (0x0006ca94) battery_pane_stacon_g_ParamLimits

0xf6aa,	// (0x0006ca94) battery_pane_stacon_g

0xf1aa,	// (0x0006c594) navi_icon_pane_stacon

0xf1be,	// (0x0006c5a8) navi_navi_pane_stacon

0xf1aa,	// (0x0006c594) navi_text_pane_stacon

0xf103,	// (0x0006c4ed) control_bottom_pane_stacon_g1

0xf1d2,	// (0x0006c5bc) control_bottom_pane_stacon_t1_ParamLimits

0xf1d2,	// (0x0006c5bc) control_bottom_pane_stacon_t1

0x9d9b,	// (0x00067185) grid_app_pane_ParamLimits

0x9d9b,	// (0x00067185) grid_app_pane

0x9dd3,	// (0x000671bd) scroll_pane_cp15_ParamLimits

0x9dd3,	// (0x000671bd) scroll_pane_cp15

0x9de8,	// (0x000671d2) cell_app_pane_ParamLimits

0x9de8,	// (0x000671d2) cell_app_pane

0x9e2d,	// (0x00067217) cell_app_pane_g1_ParamLimits

0x9e2d,	// (0x00067217) cell_app_pane_g1

0x8315,	// (0x000656ff) cell_app_pane_g2_ParamLimits

0x8315,	// (0x000656ff) cell_app_pane_g2

0x0001,

0xf6af,	// (0x0006ca99) cell_app_pane_g_ParamLimits

0xf6af,	// (0x0006ca99) cell_app_pane_g

0x9e51,	// (0x0006723b) cell_app_pane_t1_ParamLimits

0x9e51,	// (0x0006723b) cell_app_pane_t1

0x8321,	// (0x0006570b) grid_highlight_pane_ParamLimits

0x8321,	// (0x0006570b) grid_highlight_pane

0x8090,	// (0x0006547a) cell_highlight_pane_g1

0x8098,	// (0x00065482) cell_highlight_pane_g2

0x80a0,	// (0x0006548a) cell_highlight_pane_g3

0x80a8,	// (0x00065492) cell_highlight_pane_g4

0x80b0,	// (0x0006549a) cell_highlight_pane_g5

0x80b8,	// (0x000654a2) cell_highlight_pane_g6

0x80c0,	// (0x000654aa) cell_highlight_pane_g7

0x80c8,	// (0x000654b2) cell_highlight_pane_g8

0x80d0,	// (0x000654ba) cell_highlight_pane_g9

0x6f2a,	// (0x00064314) cell_highlight_pane_g10

0x0009,

0xf65d,	// (0x0006ca47) cell_highlight_pane_g

0x8332,	// (0x0006571c) bg_scroll_pane

0x9e71,	// (0x0006725b) scroll_handle_pane

0x8379,	// (0x00065763) scroll_bg_pane_g1

0x838e,	// (0x00065778) scroll_bg_pane_g2

0x83a6,	// (0x00065790) scroll_bg_pane_g3

0x0002,

0xf6b4,	// (0x0006ca9e) scroll_bg_pane_g

0x9e85,	// (0x0006726f) scroll_handle_focus_pane_ParamLimits

0x9e85,	// (0x0006726f) scroll_handle_focus_pane

0x8379,	// (0x00065763) scroll_handle_pane_g1

0x83bb,	// (0x000657a5) scroll_handle_pane_g2

0x83a6,	// (0x00065790) scroll_handle_pane_g3

0x0002,

0xf6bb,	// (0x0006caa5) scroll_handle_pane_g

0x8115,	// (0x000654ff) bg_popup_sub_pane_cp21_ParamLimits

0x8115,	// (0x000654ff) bg_popup_sub_pane_cp21

0x9e92,	// (0x0006727c) popup_fep_japan_predictive_window_t1_ParamLimits

0x9e92,	// (0x0006727c) popup_fep_japan_predictive_window_t1

0x9ea9,	// (0x00067293) popup_fep_japan_predictive_window_t2_ParamLimits

0x9ea9,	// (0x00067293) popup_fep_japan_predictive_window_t2

0x9edc,	// (0x000672c6) popup_fep_japan_predictive_window_t3_ParamLimits

0x9edc,	// (0x000672c6) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c2,	// (0x0006caac) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c2,	// (0x0006caac) popup_fep_japan_predictive_window_t

0x6f34,	// (0x0006431e) bg_popup_sub_pane_cp23

0x9f13,	// (0x000672fd) listscroll_japin_cand_pane

0x83cf,	// (0x000657b9) popup_fep_japan_candidate_window_t1

0x83dd,	// (0x000657c7) candidate_pane_ParamLimits

0x83dd,	// (0x000657c7) candidate_pane

0x9f1b,	// (0x00067305) scroll_pane_cp30

0x83ef,	// (0x000657d9) list_single_popup_jap_candidate_pane_ParamLimits

0x83ef,	// (0x000657d9) list_single_popup_jap_candidate_pane

0x6f34,	// (0x0006431e) list_highlight_pane_cp30

0x8404,	// (0x000657ee) list_single_popup_jap_candidate_pane_t1

0x8413,	// (0x000657fd) level_1_signal

0x8420,	// (0x0006580a) level_2_signal

0x842d,	// (0x00065817) level_3_signal

0x843a,	// (0x00065824) level_4_signal

0x8447,	// (0x00065831) level_5_signal

0x8454,	// (0x0006583e) level_6_signal

0xbe98,	// (0x00069282) level_7_signal

0x8413,	// (0x000657fd) level_1_battery

0x8420,	// (0x0006580a) level_2_battery

0x842d,	// (0x00065817) level_3_battery

0x843a,	// (0x00065824) level_4_battery

0x8447,	// (0x00065831) level_5_battery

0x8454,	// (0x0006583e) level_6_battery

0xbe98,	// (0x00069282) level_7_battery

0xbebd,	// (0x000692a7) list_menu_pane_ParamLimits

0xbebd,	// (0x000692a7) list_menu_pane

0xbed3,	// (0x000692bd) scroll_pane_cp25_ParamLimits

0xbed3,	// (0x000692bd) scroll_pane_cp25

0x9f23,	// (0x0006730d) list_double2_graphic_pane_cp2_ParamLimits

0x9f23,	// (0x0006730d) list_double2_graphic_pane_cp2

0x9f23,	// (0x0006730d) list_double2_large_graphic_pane_cp2_ParamLimits

0x9f23,	// (0x0006730d) list_double2_large_graphic_pane_cp2

0x9f23,	// (0x0006730d) list_double2_pane_cp2_ParamLimits

0x9f23,	// (0x0006730d) list_double2_pane_cp2

0x9f23,	// (0x0006730d) list_double_graphic_pane_cp2_ParamLimits

0x9f23,	// (0x0006730d) list_double_graphic_pane_cp2

0x9f23,	// (0x0006730d) list_double_large_graphic_pane_cp2_ParamLimits

0x9f23,	// (0x0006730d) list_double_large_graphic_pane_cp2

0x9f23,	// (0x0006730d) list_double_number_pane_cp2_ParamLimits

0x9f23,	// (0x0006730d) list_double_number_pane_cp2

0x9f23,	// (0x0006730d) list_double_pane_cp2_ParamLimits

0x9f23,	// (0x0006730d) list_double_pane_cp2

0x9f32,	// (0x0006731c) list_single_2graphic_pane_cp2_ParamLimits

0x9f32,	// (0x0006731c) list_single_2graphic_pane_cp2

0x9f32,	// (0x0006731c) list_single_graphic_heading_pane_cp2_ParamLimits

0x9f32,	// (0x0006731c) list_single_graphic_heading_pane_cp2

0x9f32,	// (0x0006731c) list_single_graphic_pane_cp2_ParamLimits

0x9f32,	// (0x0006731c) list_single_graphic_pane_cp2

0x9f32,	// (0x0006731c) list_single_heading_pane_cp2_ParamLimits

0x9f32,	// (0x0006731c) list_single_heading_pane_cp2

0xbefc,	// (0x000692e6) list_single_large_graphic_pane_cp2_ParamLimits

0xbefc,	// (0x000692e6) list_single_large_graphic_pane_cp2

0x9f32,	// (0x0006731c) list_single_number_heading_pane_cp2_ParamLimits

0x9f32,	// (0x0006731c) list_single_number_heading_pane_cp2

0x9f32,	// (0x0006731c) list_single_number_pane_cp2_ParamLimits

0x9f32,	// (0x0006731c) list_single_number_pane_cp2

0x9f32,	// (0x0006731c) list_single_pane_cp2_ParamLimits

0x9f32,	// (0x0006731c) list_single_pane_cp2

0xbf16,	// (0x00069300) bg_popup_sub_pane_cp22

0xf2a2,	// (0x0006c68c) popup_side_volume_key_window_g1

0xf2ae,	// (0x0006c698) popup_side_volume_key_window_t1

0x9ffa,	// (0x000673e4) volume_small_pane_cp1

0x70ac,	// (0x00064496) bg_popup_sub_pane_cp24_ParamLimits

0x70ac,	// (0x00064496) bg_popup_sub_pane_cp24

0xbf2c,	// (0x00069316) fep_china_uni_candidate_pane_ParamLimits

0xbf2c,	// (0x00069316) fep_china_uni_candidate_pane

0xbf40,	// (0x0006932a) fep_china_uni_entry_pane

0xbf50,	// (0x0006933a) popup_fep_china_uni_window_g1

0xa002,	// (0x000673ec) fep_china_uni_entry_pane_g1

0xa00a,	// (0x000673f4) fep_china_uni_entry_pane_g2

0x0001,

0xf6f3,	// (0x0006cadd) fep_china_uni_entry_pane_g

0xbf6c,	// (0x00069356) fep_entry_item_pane

0xbf76,	// (0x00069360) fep_candidate_item_pane

0xa012,	// (0x000673fc) fep_china_uni_candidate_pane_g1

0xbf7e,	// (0x00069368) fep_china_uni_candidate_pane_g2

0xbf86,	// (0x00069370) fep_china_uni_candidate_pane_g3

0xa01a,	// (0x00067404) fep_china_uni_candidate_pane_g4

0x0003,

0xf6f8,	// (0x0006cae2) fep_china_uni_candidate_pane_g

0x6f2a,	// (0x00064314) fep_entry_item_pane_g1

0xbf8e,	// (0x00069378) fep_entry_item_pane_t1_ParamLimits

0xbf8e,	// (0x00069378) fep_entry_item_pane_t1

0xbfa4,	// (0x0006938e) fep_candidate_item_pane_t1_ParamLimits

0xbfa4,	// (0x0006938e) fep_candidate_item_pane_t1

0xbfb9,	// (0x000693a3) fep_candidate_item_pane_t2_ParamLimits

0xbfb9,	// (0x000693a3) fep_candidate_item_pane_t2

0x0001,

0xf701,	// (0x0006caeb) fep_candidate_item_pane_t_ParamLimits

0xf701,	// (0x0006caeb) fep_candidate_item_pane_t

0x6f82,	// (0x0006436c) list_highlight_pane_cp31_ParamLimits

0x6f82,	// (0x0006436c) list_highlight_pane_cp31

0xbfcb,	// (0x000693b5) level_1_signal_lsc

0xbfd4,	// (0x000693be) level_2_signal_lsc

0xbfdd,	// (0x000693c7) level_3_signal_lsc

0xbfe6,	// (0x000693d0) level_4_signal_lsc

0xbfef,	// (0x000693d9) level_5_signal_lsc

0xbff8,	// (0x000693e2) level_6_signal_lsc

0xc001,	// (0x000693eb) level_7_signal_lsc

0xc001,	// (0x000693eb) level_1_battery_lsc

0xc00a,	// (0x000693f4) level_2_battery_lsc

0xc013,	// (0x000693fd) level_3_battery_lsc

0xc01c,	// (0x00069406) level_4_battery_lsc

0xc025,	// (0x0006940f) level_5_battery_lsc

0xc02e,	// (0x00069418) level_6_battery_lsc

0xbfcb,	// (0x000693b5) level_7_battery_lsc

0xc037,	// (0x00069421) scroll_handle_focus_pane_g1

0xc040,	// (0x0006942a) scroll_handle_focus_pane_g2

0xc049,	// (0x00069433) scroll_handle_focus_pane_g3

0x0002,

0xf706,	// (0x0006caf0) scroll_handle_focus_pane_g

0xa022,	// (0x0006740c) list_single_2graphic_pane_g1_ParamLimits

0xa022,	// (0x0006740c) list_single_2graphic_pane_g1

0x9777,	// (0x00066b61) list_single_2graphic_pane_g2_ParamLimits

0x9777,	// (0x00066b61) list_single_2graphic_pane_g2

0x059d,	// (0x0005d987) list_single_2graphic_pane_g3_ParamLimits

0x059d,	// (0x0005d987) list_single_2graphic_pane_g3

0xa02e,	// (0x00067418) list_single_2graphic_pane_g4_ParamLimits

0xa02e,	// (0x00067418) list_single_2graphic_pane_g4

0x0003,

0xf70d,	// (0x0006caf7) list_single_2graphic_pane_g_ParamLimits

0xf70d,	// (0x0006caf7) list_single_2graphic_pane_g

0xa03a,	// (0x00067424) list_single_2graphic_pane_t1_ParamLimits

0xa03a,	// (0x00067424) list_single_2graphic_pane_t1

0xa068,	// (0x00067452) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa068,	// (0x00067452) list_double2_graphic_large_graphic_pane_g1

0x9959,	// (0x00066d43) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9959,	// (0x00066d43) list_double2_graphic_large_graphic_pane_g2

0x98a6,	// (0x00066c90) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x98a6,	// (0x00066c90) list_double2_graphic_large_graphic_pane_g3

0xa07a,	// (0x00067464) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa07a,	// (0x00067464) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf716,	// (0x0006cb00) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf716,	// (0x0006cb00) list_double2_graphic_large_graphic_pane_g

0xa086,	// (0x00067470) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa086,	// (0x00067470) list_double2_graphic_large_graphic_pane_t1

0xa09c,	// (0x00067486) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa09c,	// (0x00067486) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf71f,	// (0x0006cb09) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf71f,	// (0x0006cb09) list_double2_graphic_large_graphic_pane_t

0xa121,	// (0x0006750b) popup_fast_swap_window_ParamLimits

0xa121,	// (0x0006750b) popup_fast_swap_window

0xa13d,	// (0x00067527) popup_side_volume_key_window

0xc0ff,	// (0x000694e9) stacon_top_pane

0xc109,	// (0x000694f3) status_pane_ParamLimits

0xc109,	// (0x000694f3) status_pane

0xa157,	// (0x00067541) status_small_pane

0x6f34,	// (0x0006431e) control_pane

0x6f34,	// (0x0006431e) stacon_bottom_pane

0x801b,	// (0x00065405) scroll_pane_cp121

0x8012,	// (0x000653fc) set_content_pane

0xa0ae,	// (0x00067498) bg_active_tab_pane_g1_cp1

0xa0b7,	// (0x000674a1) bg_active_tab_pane_g2_cp1

0xa0c0,	// (0x000674aa) bg_active_tab_pane_g3_cp1

0xa0ae,	// (0x00067498) bg_passive_tab_pane_g1_cp1

0xa0b7,	// (0x000674a1) bg_passive_tab_pane_g2_cp1

0xa0c0,	// (0x000674aa) bg_passive_tab_pane_g3_cp1

0xa0c9,	// (0x000674b3) bg_active_tab_pane_g1_cp2

0xa0b7,	// (0x000674a1) bg_active_tab_pane_g2_cp2

0xa0d2,	// (0x000674bc) bg_active_tab_pane_g3_cp2

0xa0c9,	// (0x000674b3) bg_passive_tab_pane_g1_cp2

0xa0b7,	// (0x000674a1) bg_passive_tab_pane_g2_cp2

0xa0d2,	// (0x000674bc) bg_passive_tab_pane_g3_cp2

0xa0db,	// (0x000674c5) bg_active_tab_pane_g1_cp3

0xa0b7,	// (0x000674a1) bg_active_tab_pane_g2_cp3

0xa0e4,	// (0x000674ce) bg_active_tab_pane_g3_cp3

0xa0db,	// (0x000674c5) bg_passive_tab_pane_g1_cp3

0xa0b7,	// (0x000674a1) bg_passive_tab_pane_g2_cp3

0xa0e4,	// (0x000674ce) bg_passive_tab_pane_g3_cp3

0xa0ed,	// (0x000674d7) bg_active_tab_pane_g1_cp4

0xa0b7,	// (0x000674a1) bg_active_tab_pane_g2_cp4

0xa0f8,	// (0x000674e2) bg_active_tab_pane_g3_cp4

0xa0ed,	// (0x000674d7) bg_passive_tab_pane_g1_cp4

0xa0b7,	// (0x000674a1) bg_passive_tab_pane_g2_cp4

0xa0f8,	// (0x000674e2) bg_passive_tab_pane_g3_cp4

0xa103,	// (0x000674ed) bg_active_tab_pane_g1_cp5

0xa0b7,	// (0x000674a1) bg_active_tab_pane_g2_cp5

0xa10c,	// (0x000674f6) bg_active_tab_pane_g3_cp5

0xa103,	// (0x000674ed) bg_passive_tab_pane_g1_cp5

0xa0b7,	// (0x000674a1) bg_passive_tab_pane_g2_cp5

0xa10c,	// (0x000674f6) bg_passive_tab_pane_g3_cp5

0x3ae1,	// (0x00060ecb) list_set_graphic_pane_ParamLimits

0x3ae1,	// (0x00060ecb) list_set_graphic_pane

0x6f34,	// (0x0006431e) bg_set_opt_pane_cp4

0xc090,	// (0x0006947a) list_set_graphic_pane_g1_ParamLimits

0xc090,	// (0x0006947a) list_set_graphic_pane_g1

0xc09c,	// (0x00069486) list_set_graphic_pane_g2_ParamLimits

0xc09c,	// (0x00069486) list_set_graphic_pane_g2

0x0001,

0xf724,	// (0x0006cb0e) list_set_graphic_pane_g_ParamLimits

0xf724,	// (0x0006cb0e) list_set_graphic_pane_g

0x0009,

0xfaa9,	// (0x0006ce93) volume_small_pane_cp_g

0xa115,	// (0x000674ff) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa115,	// (0x000674ff) list_double2_large_graphic_pane_g1_cp2

0xc0be,	// (0x000694a8) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc0be,	// (0x000694a8) list_double2_large_graphic_pane_g2_cp2

0xc0cf,	// (0x000694b9) list_double2_large_graphic_pane_g3_cp2

0xc0d7,	// (0x000694c1) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc0d7,	// (0x000694c1) list_double2_large_graphic_pane_t1_cp2

0xc0ed,	// (0x000694d7) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc0ed,	// (0x000694d7) list_double2_large_graphic_pane_t2_cp2

0xc734,	// (0x00069b1e) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc734,	// (0x00069b1e) list_double_large_graphic_pane_g1_cp2

0x3057,	// (0x00060441) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3057,	// (0x00060441) list_double_large_graphic_pane_g2_cp2

0xc225,	// (0x0006960f) list_double_large_graphic_pane_g3_cp2

0x3068,	// (0x00060452) list_double_large_graphic_pane_g4_cp

0x3070,	// (0x0006045a) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3070,	// (0x0006045a) list_double_large_graphic_pane_t1_cp2

0x3087,	// (0x00060471) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3087,	// (0x00060471) list_double_large_graphic_pane_t2_cp2

0xc117,	// (0x00069501) list_double2_graphic_pane_g1_cp2_ParamLimits

0xc117,	// (0x00069501) list_double2_graphic_pane_g1_cp2

0xc125,	// (0x0006950f) list_double2_graphic_pane_g2_cp2_ParamLimits

0xc125,	// (0x0006950f) list_double2_graphic_pane_g2_cp2

0xc136,	// (0x00069520) list_double2_graphic_pane_g3_cp2

0xc140,	// (0x0006952a) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc140,	// (0x0006952a) list_double2_graphic_pane_t1_cp2

0xc156,	// (0x00069540) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc156,	// (0x00069540) list_double2_graphic_pane_t2_cp2

0xc168,	// (0x00069552) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc168,	// (0x00069552) list_single_number_heading_pane_g1_cp2

0xc174,	// (0x0006955e) list_single_number_heading_pane_g2_cp2

0xc17c,	// (0x00069566) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc17c,	// (0x00069566) list_single_number_heading_pane_t1_cp2

0xc192,	// (0x0006957c) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc192,	// (0x0006957c) list_single_number_heading_pane_t2_cp2

0xc1a4,	// (0x0006958e) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc1a4,	// (0x0006958e) list_single_number_heading_pane_t3_cp2

0xc168,	// (0x00069552) list_single_heading_pane_g1_cp2_ParamLimits

0xc168,	// (0x00069552) list_single_heading_pane_g1_cp2

0xc174,	// (0x0006955e) list_single_heading_pane_g2_cp2

0xc17c,	// (0x00069566) list_single_heading_pane_t1_cp2_ParamLimits

0xc17c,	// (0x00069566) list_single_heading_pane_t1_cp2

0x2e50,	// (0x0006023a) list_single_heading_pane_t2_cp2_ParamLimits

0x2e50,	// (0x0006023a) list_single_heading_pane_t2_cp2

0x2d98,	// (0x00060182) list_double_graphic_pane_g1_cp2_ParamLimits

0x2d98,	// (0x00060182) list_double_graphic_pane_g1_cp2

0x2da4,	// (0x0006018e) list_double_graphic_pane_g2_cp2_ParamLimits

0x2da4,	// (0x0006018e) list_double_graphic_pane_g2_cp2

0x2db3,	// (0x0006019d) list_double_graphic_pane_g3_cp2

0x2dbb,	// (0x000601a5) list_double_graphic_pane_t1_cp2_ParamLimits

0x2dbb,	// (0x000601a5) list_double_graphic_pane_t1_cp2

0x2dd1,	// (0x000601bb) list_double_graphic_pane_t2_cp2_ParamLimits

0x2dd1,	// (0x000601bb) list_double_graphic_pane_t2_cp2

0xc219,	// (0x00069603) list_double_number_pane_g1_cp2_ParamLimits

0xc219,	// (0x00069603) list_double_number_pane_g1_cp2

0xc225,	// (0x0006960f) list_double_number_pane_g2_cp2

0x2d5c,	// (0x00060146) list_double_number_pane_t1_cp2_ParamLimits

0x2d5c,	// (0x00060146) list_double_number_pane_t1_cp2

0x2d70,	// (0x0006015a) list_double_number_pane_t2_cp2_ParamLimits

0x2d70,	// (0x0006015a) list_double_number_pane_t2_cp2

0x2d86,	// (0x00060170) list_double_number_pane_t3_cp2_ParamLimits

0x2d86,	// (0x00060170) list_double_number_pane_t3_cp2

0x2c45,	// (0x0006002f) list_single_graphic_pane_g1_cp2_ParamLimits

0x2c45,	// (0x0006002f) list_single_graphic_pane_g1_cp2

0xbe8c,	// (0x00069276) list_single_graphic_pane_g2_cp2_ParamLimits

0xbe8c,	// (0x00069276) list_single_graphic_pane_g2_cp2

0xc25d,	// (0x00069647) list_single_graphic_pane_g3_cp2

0x2c1b,	// (0x00060005) list_single_graphic_pane_t1_cp2_ParamLimits

0x2c1b,	// (0x00060005) list_single_graphic_pane_t1_cp2

0xbe8c,	// (0x00069276) list_single_number_pane_g1_cp2_ParamLimits

0xbe8c,	// (0x00069276) list_single_number_pane_g1_cp2

0xc25d,	// (0x00069647) list_single_number_pane_g2_cp2

0x2c1b,	// (0x00060005) list_single_number_pane_t1_cp2_ParamLimits

0x2c1b,	// (0x00060005) list_single_number_pane_t1_cp2

0x2c31,	// (0x0006001b) list_single_number_pane_t2_cp2_ParamLimits

0x2c31,	// (0x0006001b) list_single_number_pane_t2_cp2

0xc0be,	// (0x000694a8) list_double2_pane_g1_cp2_ParamLimits

0xc0be,	// (0x000694a8) list_double2_pane_g1_cp2

0xc0cf,	// (0x000694b9) list_double2_pane_g2_cp2

0xc1f1,	// (0x000695db) list_double2_pane_t1_cp2_ParamLimits

0xc1f1,	// (0x000695db) list_double2_pane_t1_cp2

0xc207,	// (0x000695f1) list_double2_pane_t2_cp2_ParamLimits

0xc207,	// (0x000695f1) list_double2_pane_t2_cp2

0xc219,	// (0x00069603) list_double_pane_g1_cp2_ParamLimits

0xc219,	// (0x00069603) list_double_pane_g1_cp2

0xc225,	// (0x0006960f) list_double_pane_g2_cp2

0xc22d,	// (0x00069617) list_double_pane_t1_cp2_ParamLimits

0xc22d,	// (0x00069617) list_double_pane_t1_cp2

0xc243,	// (0x0006962d) list_double_pane_t2_cp2_ParamLimits

0xc243,	// (0x0006962d) list_double_pane_t2_cp2

0xa185,	// (0x0006756f) list_single_pane_cp2_g3

0xbe8c,	// (0x00069276) list_single_pane_g1_cp2_ParamLimits

0xbe8c,	// (0x00069276) list_single_pane_g1_cp2

0xc25d,	// (0x00069647) list_single_pane_g2_cp2

0xc265,	// (0x0006964f) list_single_pane_t1_cp2_ParamLimits

0xc265,	// (0x0006964f) list_single_pane_t1_cp2

0xa18d,	// (0x00067577) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa18d,	// (0x00067577) list_single_large_graphic_pane_g1_cp2

0xc27d,	// (0x00069667) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc27d,	// (0x00069667) list_single_large_graphic_pane_g2_cp2

0xc289,	// (0x00069673) list_single_large_graphic_pane_g3_cp2

0xa199,	// (0x00067583) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa199,	// (0x00067583) list_single_large_graphic_pane_g4_cp1

0xc291,	// (0x0006967b) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc291,	// (0x0006967b) list_single_large_graphic_pane_t1_cp2

0x2be7,	// (0x0005ffd1) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2be7,	// (0x0005ffd1) list_single_graphic_heading_pane_g1_cp2

0x2bb4,	// (0x0005ff9e) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2bb4,	// (0x0005ff9e) list_single_graphic_heading_pane_g4_cp2

0xc25d,	// (0x00069647) list_single_graphic_heading_pane_g5_cp2

0x2bf3,	// (0x0005ffdd) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2bf3,	// (0x0005ffdd) list_single_graphic_heading_pane_t1_cp2

0x2c09,	// (0x0005fff3) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2c09,	// (0x0005fff3) list_single_graphic_heading_pane_t2_cp2

0x2ba8,	// (0x0005ff92) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2ba8,	// (0x0005ff92) list_single_2graphic_pane_g1_cp2

0x2bb4,	// (0x0005ff9e) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2bb4,	// (0x0005ff9e) list_single_2graphic_pane_g2_cp2

0xc25d,	// (0x00069647) list_single_2graphic_pane_g3_cp2

0x2bc5,	// (0x0005ffaf) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2bc5,	// (0x0005ffaf) list_single_2graphic_pane_g4_cp2

0x2bd1,	// (0x0005ffbb) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2bd1,	// (0x0005ffbb) list_single_2graphic_pane_t1_cp2

0x6f2a,	// (0x00064314) list_highlight_pane_g10_cp1

0x2790,	// (0x0005fb7a) list_highlight_pane_g1_cp1

0x2798,	// (0x0005fb82) list_highlight_pane_g2_cp1

0x27a0,	// (0x0005fb8a) list_highlight_pane_g3_cp1

0x27a8,	// (0x0005fb92) list_highlight_pane_g4_cp1

0x27b0,	// (0x0005fb9a) list_highlight_pane_g5_cp1

0x27b8,	// (0x0005fba2) list_highlight_pane_g6_cp1

0x27c0,	// (0x0005fbaa) list_highlight_pane_g7_cp1

0x27c8,	// (0x0005fbb2) list_highlight_pane_g8_cp1

0x27d0,	// (0x0005fbba) list_highlight_pane_g9_cp1

0xc4c9,	// (0x000698b3) form_field_slider_pane_t3

0xc4d7,	// (0x000698c1) form_field_slider_pane_t4

0x26d4,	// (0x0005fabe) slider_form_pane_ParamLimits

0x26d4,	// (0x0005fabe) slider_form_pane

0x6f34,	// (0x0006431e) control_abbreviations

0x6f34,	// (0x0006431e) control_conventions

0x6f34,	// (0x0006431e) control_definitions

0x6f34,	// (0x0006431e) format_table_attribute

0xc70b,	// (0x00069af5) bg_popup_preview_window_pane_g9

0x6f34,	// (0x0006431e) format_table_data2

0x6f34,	// (0x0006431e) format_table_data3

0x6f34,	// (0x0006431e) format_table_data_example

0x0008,

0x6f34,	// (0x0006431e) intro_purpose

0xf8b4,	// (0x0006cc9e) bg_popup_preview_window_pane_g

0x6f34,	// (0x0006431e) texts_category

0x6f34,	// (0x0006431e) texts_graphics

0xc2a7,	// (0x00069691) text_digital

0xc2b6,	// (0x000696a0) text_primary

0xc2c5,	// (0x000696af) text_primary_small

0xc2d4,	// (0x000696be) text_secondary

0xc2e3,	// (0x000696cd) text_title

0xca72,	// (0x00069e5c) bg_passive_tab_pane_g1_cp3_srt

0xa0b7,	// (0x000674a1) bg_passive_tab_pane_g2_cp3_srt

0xca7b,	// (0x00069e65) bg_passive_tab_pane_g3_cp3_srt

0x70ac,	// (0x00064496) bg_active_tab_pane_cp3_srt_ParamLimits

0x70ac,	// (0x00064496) bg_active_tab_pane_cp3_srt

0xca84,	// (0x00069e6e) tabs_4_active_pane_srt_g1

0xca8c,	// (0x00069e76) tabs_4_active_pane_srt_t1_ParamLimits

0xca8c,	// (0x00069e76) tabs_4_active_pane_srt_t1

0xca72,	// (0x00069e5c) bg_active_tab_pane_g1_cp3_copy1

0xa0b7,	// (0x000674a1) bg_active_tab_pane_g2_cp3_copy1

0xca7b,	// (0x00069e65) bg_active_tab_pane_g3_cp3_copy1

0x6f82,	// (0x0006436c) tabs_2_long_active_pane_srt_ParamLimits

0x6f82,	// (0x0006436c) tabs_2_long_active_pane_srt

0x6f82,	// (0x0006436c) tabs_2_long_passive_pane_srt_ParamLimits

0x6f82,	// (0x0006436c) tabs_2_long_passive_pane_srt

0x8461,	// (0x0006584b) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8461,	// (0x0006584b) bg_passive_tab_pane_cp4_srt

0xc823,	// (0x00069c0d) bg_passive_tab_pane_g1_cp4_srt

0xa0b7,	// (0x000674a1) bg_passive_tab_pane_g2_cp4_srt

0xc82c,	// (0x00069c16) bg_passive_tab_pane_g3_cp4_srt

0x6f82,	// (0x0006436c) bg_active_tab_pane_cp4_srt_ParamLimits

0x6f82,	// (0x0006436c) bg_active_tab_pane_cp4_srt

0xc835,	// (0x00069c1f) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc835,	// (0x00069c1f) tabs_2_long_active_pane_srt_t1

0xc823,	// (0x00069c0d) bg_active_tab_pane_g1_cp4_srt

0xa0b7,	// (0x000674a1) bg_active_tab_pane_g2_cp4_srt

0xc82c,	// (0x00069c16) bg_active_tab_pane_g3_cp4_srt

0x70ac,	// (0x00064496) tabs_3_long_active_pane_srt_ParamLimits

0x70ac,	// (0x00064496) tabs_3_long_active_pane_srt

0x70ac,	// (0x00064496) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x70ac,	// (0x00064496) tabs_3_long_passive_pane_cp_srt

0x70ac,	// (0x00064496) tabs_3_long_passive_pane_srt_ParamLimits

0x70ac,	// (0x00064496) tabs_3_long_passive_pane_srt

0x8461,	// (0x0006584b) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8461,	// (0x0006584b) bg_passive_tab_pane_cp5_srt

0xa103,	// (0x000674ed) bg_passive_tab_pane_g1_cp5_srt

0xa0b7,	// (0x000674a1) bg_passive_tab_pane_g2_cp5_srt

0xa10c,	// (0x000674f6) bg_passive_tab_pane_g3_cp5_srt

0x6f82,	// (0x0006436c) bg_active_tab_pane_cp5_srt_ParamLimits

0x6f82,	// (0x0006436c) bg_active_tab_pane_cp5_srt

0xc80d,	// (0x00069bf7) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc80d,	// (0x00069bf7) tabs_3_long_active_pane_srt_t1

0xa103,	// (0x000674ed) bg_active_tab_pane_g1_cp5_srt

0xa0b7,	// (0x000674a1) bg_active_tab_pane_g2_cp5_srt

0xa10c,	// (0x000674f6) bg_active_tab_pane_g3_cp5_srt

0x329b,	// (0x00060685) navi_text_pane_srt_t1

0x3293,	// (0x0006067d) navi_icon_pane_srt_g1

0xc3ce,	// (0x000697b8) midp_editing_number_pane_srt

0xc2f2,	// (0x000696dc) midp_ticker_pane_srt

0xc3d6,	// (0x000697c0) midp_ticker_pane_srt_g1

0xc3de,	// (0x000697c8) midp_ticker_pane_srt_g2

0x0001,

0xf743,	// (0x0006cb2d) midp_ticker_pane_srt_g

0xc3e6,	// (0x000697d0) midp_ticker_pane_srt_t1

0x3284,	// (0x0006066e) midp_editing_number_pane_t1_copy1

0xa1b3,	// (0x0006759d) listscroll_midp_pane

0xa1b3,	// (0x0006759d) midp_form_pane

0xa21e,	// (0x00067608) midp_info_popup_window_ParamLimits

0xa21e,	// (0x00067608) midp_info_popup_window

0x8115,	// (0x000654ff) bg_popup_sub_pane_cp50_ParamLimits

0x8115,	// (0x000654ff) bg_popup_sub_pane_cp50

0x23c4,	// (0x0005f7ae) listscroll_midp_info_pane_ParamLimits

0x23c4,	// (0x0005f7ae) listscroll_midp_info_pane

0x23a4,	// (0x0005f78e) listscroll_form_midp_pane_ParamLimits

0x23a4,	// (0x0005f78e) listscroll_form_midp_pane

0x23b0,	// (0x0005f79a) scroll_bar_cp050

0x23a4,	// (0x0005f78e) list_midp_pane

0xcc24,	// (0x0006a00e) signal_pane_g2_cp

0x22be,	// (0x0005f6a8) listscroll_midp_info_pane_t1_ParamLimits

0x22be,	// (0x0005f6a8) listscroll_midp_info_pane_t1

0xb25a,	// (0x00068644) listscroll_midp_info_pane_t2_ParamLimits

0xb25a,	// (0x00068644) listscroll_midp_info_pane_t2

0xb298,	// (0x00068682) listscroll_midp_info_pane_t3_ParamLimits

0xb298,	// (0x00068682) listscroll_midp_info_pane_t3

0xb2d2,	// (0x000686bc) listscroll_midp_info_pane_t4_ParamLimits

0xb2d2,	// (0x000686bc) listscroll_midp_info_pane_t4

0x0003,

0xf7ef,	// (0x0006cbd9) listscroll_midp_info_pane_t_ParamLimits

0xf7ef,	// (0x0006cbd9) listscroll_midp_info_pane_t

0x816a,	// (0x00065554) scroll_pane_cp21

0x225e,	// (0x0005f648) form_midp_field_choice_group_pane

0xb21d,	// (0x00068607) form_midp_field_text_pane

0x22a4,	// (0x0005f68e) form_midp_field_time_pane

0x22ac,	// (0x0005f696) form_midp_gauge_slider_pane

0x22b5,	// (0x0005f69f) form_midp_gauge_wait_pane

0x6f34,	// (0x0006431e) form_midp_image_pane

0xb207,	// (0x000685f1) list_single_midp_pane_ParamLimits

0xb207,	// (0x000685f1) list_single_midp_pane

0xb1e5,	// (0x000685cf) form_midp_field_text_pane_t1

0x1fdd,	// (0x0005f3c7) input_focus_pane_cp050

0x224d,	// (0x0005f637) list_midp_form_text_pane

0x21e2,	// (0x0005f5cc) form_midp_field_choice_group_pane_t1

0x21f0,	// (0x0005f5da) input_focus_pane_cp051

0x2204,	// (0x0005f5ee) list_midp_choice_pane

0x6f34,	// (0x0006431e) status_idle_pane

0x21c6,	// (0x0005f5b0) form_midp_field_time_pane_t1

0x6f2a,	// (0x00064314) wait_anim_pane_g2_copy1

0x21d4,	// (0x0005f5be) form_midp_field_time_pane_t2

0x0001,

0xc352,	// (0x0006973c) aid_navinavi_width_2_pane

0xf7ea,	// (0x0006cbd4) form_midp_field_time_pane_t

0x6f34,	// (0x0006431e) input_focus_pane_cp052

0x6f34,	// (0x0006431e) bg_input_focus_pane_cp040

0x2186,	// (0x0005f570) form_midp_gauge_slider_pane_t1

0x2194,	// (0x0005f57e) form_midp_gauge_slider_pane_t2

0xb1c9,	// (0x000685b3) form_midp_gauge_slider_pane_t3

0xb1d7,	// (0x000685c1) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e1,	// (0x0006cbcb) form_midp_gauge_slider_pane_t

0x21be,	// (0x0005f5a8) form_midp_slider_pane

0x6f82,	// (0x0006436c) bg_input_focus_pane_cp041_ParamLimits

0x6f82,	// (0x0006436c) bg_input_focus_pane_cp041

0x2153,	// (0x0005f53d) form_midp_gauge_wait_pane_t1_ParamLimits

0x2153,	// (0x0005f53d) form_midp_gauge_wait_pane_t1

0x2165,	// (0x0005f54f) form_midp_gauge_wait_pane_t2_ParamLimits

0x2165,	// (0x0005f54f) form_midp_gauge_wait_pane_t2

0x0001,

0xf7dc,	// (0x0006cbc6) form_midp_gauge_wait_pane_t_ParamLimits

0xf7dc,	// (0x0006cbc6) form_midp_gauge_wait_pane_t

0x2177,	// (0x0005f561) form_midp_wait_pane_ParamLimits

0x2177,	// (0x0005f561) form_midp_wait_pane

0xb193,	// (0x0006857d) form_midp_image_pane_g1

0xb19c,	// (0x00068586) form_midp_image_pane_t1

0xb1ab,	// (0x00068595) form_midp_image_pane_t2

0xb1ba,	// (0x000685a4) form_midp_image_pane_t3

0x0002,

0xf7d5,	// (0x0006cbbf) form_midp_image_pane_t

0x2114,	// (0x0005f4fe) list_single_midp_pane_g1

0xea19,	// (0x0006be03) list_single_midp_pane_t1

0xb17e,	// (0x00068568) list_midp_form_item_pane_ParamLimits

0xb17e,	// (0x00068568) list_midp_form_item_pane

0xc2fa,	// (0x000696e4) list_midp_form_item_pane_t1

0xc309,	// (0x000696f3) midp_ticker_pane_g1

0xc315,	// (0x000696ff) midp_ticker_pane_g2

0x0001,

0xf729,	// (0x0006cb13) midp_ticker_pane_g

0xc321,	// (0x0006970b) midp_ticker_pane_t1

0x34d1,	// (0x000608bb) midp_editing_number_pane_t1

0x34af,	// (0x00060899) midp_editing_number_pane

0x34be,	// (0x000608a8) midp_ticker_pane

0x3274,	// (0x0006065e) ai_message_heading_pane

0x6f34,	// (0x0006431e) bg_popup_window_pane_cp14

0x327c,	// (0x00060666) listscroll_ai_message_pane

0x31fe,	// (0x000605e8) ai_message_heading_pane_g1_ParamLimits

0x31fe,	// (0x000605e8) ai_message_heading_pane_g1

0xc7d5,	// (0x00069bbf) ai_message_heading_pane_g2_ParamLimits

0xc7d5,	// (0x00069bbf) ai_message_heading_pane_g2

0x3216,	// (0x00060600) ai_message_heading_pane_g3_ParamLimits

0x3216,	// (0x00060600) ai_message_heading_pane_g3

0x3222,	// (0x0006060c) ai_message_heading_pane_g4_ParamLimits

0x3222,	// (0x0006060c) ai_message_heading_pane_g4

0x0003,

0xf916,	// (0x0006cd00) ai_message_heading_pane_g_ParamLimits

0xf916,	// (0x0006cd00) ai_message_heading_pane_g

0xc7e1,	// (0x00069bcb) ai_message_heading_pane_t1_ParamLimits

0xc7e1,	// (0x00069bcb) ai_message_heading_pane_t1

0xc7fb,	// (0x00069be5) ai_message_heading_pane_t2_ParamLimits

0xc7fb,	// (0x00069be5) ai_message_heading_pane_t2

0x0001,

0xf91f,	// (0x0006cd09) ai_message_heading_pane_t_ParamLimits

0xf91f,	// (0x0006cd09) ai_message_heading_pane_t

0x325a,	// (0x00060644) bg_popup_heading_pane_cp1_ParamLimits

0x325a,	// (0x00060644) bg_popup_heading_pane_cp1

0x31ec,	// (0x000605d6) list_ai_message_pane_ParamLimits

0x31ec,	// (0x000605d6) list_ai_message_pane

0x816a,	// (0x00065554) scroll_pane_cp10

0x3188,	// (0x00060572) list_ai_message_pane_g1

0x3190,	// (0x0006057a) list_ai_message_pane_g2

0x0001,

0xf8f3,	// (0x0006ccdd) list_ai_message_pane_g

0x3198,	// (0x00060582) list_ai_message_pane_t1_ParamLimits

0x3198,	// (0x00060582) list_ai_message_pane_t1

0x31ad,	// (0x00060597) list_ai_message_pane_t2_ParamLimits

0x31ad,	// (0x00060597) list_ai_message_pane_t2

0x31c2,	// (0x000605ac) list_ai_message_pane_t3_ParamLimits

0x31c2,	// (0x000605ac) list_ai_message_pane_t3

0x31d7,	// (0x000605c1) list_ai_message_pane_t4_ParamLimits

0x31d7,	// (0x000605c1) list_ai_message_pane_t4

0x0003,

0xf8f8,	// (0x0006cce2) list_ai_message_pane_t_ParamLimits

0xf8f8,	// (0x0006cce2) list_ai_message_pane_t

0xc7b1,	// (0x00069b9b) cell_ai_soft_ind_pane_ParamLimits

0xc7b1,	// (0x00069b9b) cell_ai_soft_ind_pane

0xc333,	// (0x0006971d) cell_ai_soft_ind_pane_g1_ParamLimits

0xc333,	// (0x0006971d) cell_ai_soft_ind_pane_g1

0x6f34,	// (0x0006431e) grid_highlight_cp1

0xc340,	// (0x0006972a) text_secondary_cp56_ParamLimits

0xc340,	// (0x0006972a) text_secondary_cp56

0x3148,	// (0x00060532) example_general_pane_ParamLimits

0x3148,	// (0x00060532) example_general_pane

0x3154,	// (0x0006053e) example_parent_pane_g1_ParamLimits

0x3154,	// (0x0006053e) example_parent_pane_g1

0x3160,	// (0x0006054a) example_parent_pane_t1_ParamLimits

0x3160,	// (0x0006054a) example_parent_pane_t1

0xa902,	// (0x00067cec) popup_preview_text_window_ParamLimits

0xa902,	// (0x00067cec) popup_preview_text_window

0xc255,	// (0x0006963f) list_single_pane_cp2_g4

0x7162,	// (0x0006454c) bg_popup_preview_window_pane_ParamLimits

0x7162,	// (0x0006454c) bg_popup_preview_window_pane

0xc713,	// (0x00069afd) popup_preview_text_window_t1_ParamLimits

0xc713,	// (0x00069afd) popup_preview_text_window_t1

0x2ec0,	// (0x000602aa) popup_preview_text_window_t2_ParamLimits

0x2ec0,	// (0x000602aa) popup_preview_text_window_t2

0x2f09,	// (0x000602f3) popup_preview_text_window_t3_ParamLimits

0x2f09,	// (0x000602f3) popup_preview_text_window_t3

0x2f4e,	// (0x00060338) popup_preview_text_window_t4_ParamLimits

0x2f4e,	// (0x00060338) popup_preview_text_window_t4

0x0004,

0xf8c7,	// (0x0006ccb1) popup_preview_text_window_t_ParamLimits

0xf8c7,	// (0x0006ccb1) popup_preview_text_window_t

0x2fcc,	// (0x000603b6) scroll_pane_cp11

0x1f51,	// (0x0005f33b) bg_popup_preview_window_pane_g1

0xc6d3,	// (0x00069abd) bg_popup_preview_window_pane_g2

0xc6db,	// (0x00069ac5) bg_popup_preview_window_pane_g3

0xc6e3,	// (0x00069acd) bg_popup_preview_window_pane_g4

0xc6eb,	// (0x00069ad5) bg_popup_preview_window_pane_g5

0xc6f3,	// (0x00069add) bg_popup_preview_window_pane_g6

0xc6fb,	// (0x00069ae5) bg_popup_preview_window_pane_g7

0xc703,	// (0x00069aed) bg_popup_preview_window_pane_g8

0xe64b,	// (0x0006ba35) aid_popup_width_pane

0xa87e,	// (0x00067c68) popup_midp_note_alarm_window_ParamLimits

0xa87e,	// (0x00067c68) popup_midp_note_alarm_window

0x802c,	// (0x00065416) data_form_pane_ParamLimits

0x9b8f,	// (0x00066f79) form_field_data_pane_g1

0x9b99,	// (0x00066f83) form_field_data_pane_t1_ParamLimits

0x8038,	// (0x00065422) input_focus_pane_ParamLimits

0xe89f,	// (0x0006bc89) data_form_wide_pane_ParamLimits

0xe8b0,	// (0x0006bc9a) form_field_data_wide_pane_g1

0xe8bc,	// (0x0006bca6) form_field_data_wide_pane_t1_ParamLimits

0x7f2c,	// (0x00065316) input_focus_pane_cp6_ParamLimits

0x9d0b,	// (0x000670f5) input_popup_find_pane_g1_ParamLimits

0x9d0b,	// (0x000670f5) input_popup_find_pane_g1

0xf17d,	// (0x0006c567) aid_navi_side_left_pane

0xf192,	// (0x0006c57c) aid_navi_side_right_pane

0x288b,	// (0x0005fc75) bg_popup_window_pane_cp30_ParamLimits

0x288b,	// (0x0005fc75) bg_popup_window_pane_cp30

0x2905,	// (0x0005fcef) popup_midp_note_alarm_window_g1_ParamLimits

0x2905,	// (0x0005fcef) popup_midp_note_alarm_window_g1

0x2935,	// (0x0005fd1f) popup_midp_note_alarm_window_t1_ParamLimits

0x2935,	// (0x0005fd1f) popup_midp_note_alarm_window_t1

0xc51c,	// (0x00069906) popup_midp_note_alarm_window_t2_ParamLimits

0xc51c,	// (0x00069906) popup_midp_note_alarm_window_t2

0xc5ca,	// (0x000699b4) popup_midp_note_alarm_window_t3_ParamLimits

0xc5ca,	// (0x000699b4) popup_midp_note_alarm_window_t3

0xc5f2,	// (0x000699dc) popup_midp_note_alarm_window_t4_ParamLimits

0xc5f2,	// (0x000699dc) popup_midp_note_alarm_window_t4

0x2acc,	// (0x0005feb6) popup_midp_note_alarm_window_t5_ParamLimits

0x2acc,	// (0x0005feb6) popup_midp_note_alarm_window_t5

0x000a,

0xf864,	// (0x0006cc4e) popup_midp_note_alarm_window_t_ParamLimits

0xf864,	// (0x0006cc4e) popup_midp_note_alarm_window_t

0x2b78,	// (0x0005ff62) wait_bar_pane_cp1_ParamLimits

0x2b78,	// (0x0005ff62) wait_bar_pane_cp1

0x6f34,	// (0x0006431e) wait_anim_pane_copy1

0x6f34,	// (0x0006431e) wait_border_pane_copy1

0x2581,	// (0x0005f96b) wait_border_pane_g1_copy1

0xe8d6,	// (0x0006bcc0) form_field_popup_pane_g1

0x9bb3,	// (0x00066f9d) form_field_popup_pane_t1_ParamLimits

0x8038,	// (0x00065422) input_focus_pane_cp7_ParamLimits

0x8066,	// (0x00065450) list_form_pane_ParamLimits

0xe8de,	// (0x0006bcc8) form_field_popup_wide_pane_g1

0xe8e6,	// (0x0006bcd0) form_field_popup_wide_pane_t1_ParamLimits

0x8038,	// (0x00065422) input_focus_pane_cp8_ParamLimits

0x8072,	// (0x0006545c) list_form_wide_pane_ParamLimits

0x36b7,	// (0x00060aa1) aid_size_cell_graphic_pane

0x9c32,	// (0x0006701c) data_form_pane_t1_ParamLimits

0xb4b3,	// (0x0006889d) data_form_wide_pane_t1_ParamLimits

0xad45,	// (0x0006812f) bg_status_flat_pane

0x90e2,	// (0x000664cc) title_pane_t1_ParamLimits

0x6f4a,	// (0x00064334) title_pane_t2_ParamLimits

0x6f70,	// (0x0006435a) title_pane_t3_ParamLimits

0xf532,	// (0x0006c91c) title_pane_t_ParamLimits

0x8413,	// (0x000657fd) level_1_signal_ParamLimits

0x8420,	// (0x0006580a) level_2_signal_ParamLimits

0x842d,	// (0x00065817) level_3_signal_ParamLimits

0x843a,	// (0x00065824) level_4_signal_ParamLimits

0x8447,	// (0x00065831) level_5_signal_ParamLimits

0x8454,	// (0x0006583e) level_6_signal_ParamLimits

0xbe98,	// (0x00069282) level_7_signal_ParamLimits

0x8413,	// (0x000657fd) level_1_battery_ParamLimits

0x8420,	// (0x0006580a) level_2_battery_ParamLimits

0x842d,	// (0x00065817) level_3_battery_ParamLimits

0x843a,	// (0x00065824) level_4_battery_ParamLimits

0x8447,	// (0x00065831) level_5_battery_ParamLimits

0x8454,	// (0x0006583e) level_6_battery_ParamLimits

0xbe98,	// (0x00069282) level_7_battery_ParamLimits

0x2790,	// (0x0005fb7a) bg_status_flat_pane_g1

0x2798,	// (0x0005fb82) bg_status_flat_pane_g2

0x27a0,	// (0x0005fb8a) bg_status_flat_pane_g3

0x27a8,	// (0x0005fb92) bg_status_flat_pane_g4

0x27b0,	// (0x0005fb9a) bg_status_flat_pane_g5

0x27b8,	// (0x0005fba2) bg_status_flat_pane_g6

0x27c0,	// (0x0005fbaa) bg_status_flat_pane_g7

0x9176,	// (0x00066560) tabs_3_active_pane_t1_ParamLimits

0x9176,	// (0x00066560) tabs_3_passive_pane_t1_ParamLimits

0x9190,	// (0x0006657a) tabs_4_active_pane_t1_ParamLimits

0x9190,	// (0x0006657a) tabs_4_1_passive_pane_t1_ParamLimits

0x9d4a,	// (0x00067134) tabs_2_active_pane_t1_ParamLimits

0x9d4a,	// (0x00067134) tabs_2_passive_pane_t1_ParamLimits

0x6f82,	// (0x0006436c) bg_active_tab_pane_cp4_ParamLimits

0x9d5c,	// (0x00067146) tabs_2_long_active_pane_t1_ParamLimits

0x8461,	// (0x0006584b) bg_passive_tab_pane_cp4_ParamLimits

0x060a,	// (0x0005d9f4) list_single_midp_graphic_pane_t1_ParamLimits

0x6f82,	// (0x0006436c) bg_active_tab_pane_cp5_ParamLimits

0x9d6f,	// (0x00067159) tabs_3_long_active_pane_t1_ParamLimits

0x8461,	// (0x0006584b) bg_passive_tab_pane_cp5_ParamLimits

0x060a,	// (0x0005d9f4) list_single_midp_graphic_pane_t1

0xad45,	// (0x0006812f) bg_status_flat_pane_ParamLimits

0x0442,	// (0x0005d82c) indicator_pane_cp2_ParamLimits

0x0442,	// (0x0005d82c) indicator_pane_cp2

0xaec3,	// (0x000682ad) navi_pane_srt_ParamLimits

0xaec3,	// (0x000682ad) navi_pane_srt

0x1d33,	// (0x0005f11d) popup_clock_digital_analogue_window_cp1

0x6fc6,	// (0x000643b0) indicator_pane_t1

0xc2f2,	// (0x000696dc) copy_highlight_pane

0xc2f2,	// (0x000696dc) cursor_graphics_pane

0xc2f2,	// (0x000696dc) graphic_within_text_pane

0xc2f2,	// (0x000696dc) link_highlight_pane

0x2f8f,	// (0x00060379) popup_preview_text_window_t5_ParamLimits

0x2f8f,	// (0x00060379) popup_preview_text_window_t5

0xc35a,	// (0x00069744) cursor_digital_pane

0xc35a,	// (0x00069744) cursor_primary_pane

0xc36b,	// (0x00069755) cursor_primary_small_pane

0xc373,	// (0x0006975d) cursor_secondary_pane

0xc37b,	// (0x00069765) cursor_title_pane

0xc35a,	// (0x00069744) link_highlight_digital_pane

0xc362,	// (0x0006974c) link_highlight_primary_pane

0xc36b,	// (0x00069755) link_highlight_primary_small_pane

0xc373,	// (0x0006975d) link_highlight_secondary_pane

0xc37b,	// (0x00069765) link_highlight_title_pane

0xc35a,	// (0x00069744) copy_highlight_digital_pane

0xc35a,	// (0x00069744) copy_highlight_primary_pane

0xc36b,	// (0x00069755) copy_highlight_primary_small_pane

0xc373,	// (0x0006975d) copy_highlight_secondary_pane

0xc37b,	// (0x00069765) copy_highlight_title_pane

0xc373,	// (0x0006975d) graphic_text_digital_pane

0x282e,	// (0x0005fc18) graphic_text_primary_pane

0x2837,	// (0x0005fc21) graphic_text_primary_small_pane

0xc36b,	// (0x00069755) graphic_text_secondary_pane

0xc35a,	// (0x00069744) graphic_text_title_pane

0xa26f,	// (0x00067659) cursor_primary_pane_g1

0x2820,	// (0x0005fc0a) cursor_text_primary_t1

0xc512,	// (0x000698fc) cursor_primary_small_pane_g1

0x2812,	// (0x0005fbfc) cursor_text_primary_small_t1

0xc508,	// (0x000698f2) cursor_primary_small_pane_g1_copy1

0x27fa,	// (0x0005fbe4) cursor_text_primary_small_t1_copy1

0x27d8,	// (0x0005fbc2) cursor_text_title_t1

0xc4fe,	// (0x000698e8) cursor_title_pane_g1

0xa26f,	// (0x00067659) cursor_digital_pane_g1

0xc383,	// (0x0006976d) cursor_text_digital_t1

0xc391,	// (0x0006977b) link_highlight_primary_pane_g1

0x2781,	// (0x0005fb6b) link_highlight_primary_pane_t1

0xc391,	// (0x0006977b) link_highlight_primary_small_pane_g1

0xc399,	// (0x00069783) link_highlight_primary_small_pane_t1

0xc391,	// (0x0006977b) link_highlight_secondary_pane_g1

0xc3a8,	// (0x00069792) link_highlight_secondary_pane_t1

0x26e6,	// (0x0005fad0) link_highlight_title_pane_g1

0x26fd,	// (0x0005fae7) link_highlight_title_pane_t1

0x26e6,	// (0x0005fad0) link_highlight_digital_pane_g1

0x26ee,	// (0x0005fad8) link_highlight_digital_pane_t1

0x25a0,	// (0x0005f98a) copy_highlight_primary_pane_g1

0x25c6,	// (0x0005f9b0) copy_highlight_primary_pane_t1

0x25a0,	// (0x0005f98a) copy_highlight_primary_small_pane_g1

0x25b7,	// (0x0005f9a1) copy_highlight_primary_small_pane_t1

0xc3b7,	// (0x000697a1) copy_highlight_secondary_pane_g1

0xc3bf,	// (0x000697a9) copy_highlight_secondary_pane_t1

0x25a0,	// (0x0005f98a) copy_highlight_title_pane_g1

0x25a8,	// (0x0005f992) copy_highlight_title_pane_t1

0x25a0,	// (0x0005f98a) copy_highlight_digital_pane_g1

0x3885,	// (0x00060c6f) copy_highlight_digital_pane_t1

0x37d9,	// (0x00060bc3) graphic_text_primary_pane_g1

0x3869,	// (0x00060c53) graphic_text_primary_pane_t1

0x3877,	// (0x00060c61) graphic_text_primary_pane_t2

0x0001,

0xf993,	// (0x0006cd7d) graphic_text_primary_pane_t

0x3845,	// (0x00060c2f) graphic_text_primary_small_pane_g1

0x384d,	// (0x00060c37) graphic_text_primary_small_pane_t1

0x385b,	// (0x00060c45) graphic_text_primary_small_pane_t2

0x0001,

0xf98e,	// (0x0006cd78) graphic_text_primary_small_pane_t

0x3821,	// (0x00060c0b) graphic_text_secondary_pane_g1

0x3829,	// (0x00060c13) graphic_text_secondary_pane_t1

0x3837,	// (0x00060c21) graphic_text_secondary_pane_t2

0x0001,

0xf989,	// (0x0006cd73) graphic_text_secondary_pane_t

0x37fd,	// (0x00060be7) graphic_text_title_pane_g1

0x3805,	// (0x00060bef) graphic_text_title_pane_t1

0x3813,	// (0x00060bfd) graphic_text_title_pane_t2

0x0001,

0xf984,	// (0x0006cd6e) graphic_text_title_pane_t

0x37d9,	// (0x00060bc3) graphic_text_digital_pane_g1

0x37e1,	// (0x00060bcb) graphic_text_digital_pane_t1

0x37ef,	// (0x00060bd9) graphic_text_digital_pane_t2

0x0001,

0xf97f,	// (0x0006cd69) graphic_text_digital_pane_t

0x6f82,	// (0x0006436c) navi_icon_pane_srt_ParamLimits

0x6f82,	// (0x0006436c) navi_icon_pane_srt

0x6f34,	// (0x0006431e) navi_midp_pane_srt

0x6f34,	// (0x0006431e) navi_navi_pane_srt

0x6f82,	// (0x0006436c) navi_text_pane_srt_ParamLimits

0x6f82,	// (0x0006436c) navi_text_pane_srt

0x37a4,	// (0x00060b8e) navi_navi_icon_text_pane_srt

0x37ac,	// (0x00060b96) navi_navi_pane_srt_g1_ParamLimits

0x37ac,	// (0x00060b96) navi_navi_pane_srt_g1

0x37be,	// (0x00060ba8) navi_navi_pane_srt_g2_ParamLimits

0x37be,	// (0x00060ba8) navi_navi_pane_srt_g2

0x0001,

0xf97a,	// (0x0006cd64) navi_navi_pane_srt_g_ParamLimits

0xf97a,	// (0x0006cd64) navi_navi_pane_srt_g

0x37d0,	// (0x00060bba) navi_navi_tabs_pane_srt

0x37a4,	// (0x00060b8e) navi_navi_text_pane_srt

0x37a4,	// (0x00060b8e) navi_navi_volume_pane_srt

0x3795,	// (0x00060b7f) navi_navi_text_pane_srt_t1

0x0a86,	// (0x0005de70) navi_navi_volume_pane_srt_g1

0x0a8e,	// (0x0005de78) volume_small_pane_srt_ParamLimits

0x0a8e,	// (0x0005de78) volume_small_pane_srt

0xf3fd,	// (0x0006c7e7) volume_small_pane_srt_g1_ParamLimits

0xf3fd,	// (0x0006c7e7) volume_small_pane_srt_g1

0xf40d,	// (0x0006c7f7) volume_small_pane_srt_g2_ParamLimits

0xf40d,	// (0x0006c7f7) volume_small_pane_srt_g2

0xf41e,	// (0x0006c808) volume_small_pane_srt_g3_ParamLimits

0xf41e,	// (0x0006c808) volume_small_pane_srt_g3

0xf42f,	// (0x0006c819) volume_small_pane_srt_g4_ParamLimits

0xf42f,	// (0x0006c819) volume_small_pane_srt_g4

0xf440,	// (0x0006c82a) volume_small_pane_srt_g5_ParamLimits

0xf440,	// (0x0006c82a) volume_small_pane_srt_g5

0xf451,	// (0x0006c83b) volume_small_pane_srt_g6_ParamLimits

0xf451,	// (0x0006c83b) volume_small_pane_srt_g6

0xf462,	// (0x0006c84c) volume_small_pane_srt_g7_ParamLimits

0xf462,	// (0x0006c84c) volume_small_pane_srt_g7

0xf473,	// (0x0006c85d) volume_small_pane_srt_g8_ParamLimits

0xf473,	// (0x0006c85d) volume_small_pane_srt_g8

0xf484,	// (0x0006c86e) volume_small_pane_srt_g9_ParamLimits

0xf484,	// (0x0006c86e) volume_small_pane_srt_g9

0xf495,	// (0x0006c87f) volume_small_pane_srt_g10_ParamLimits

0xf495,	// (0x0006c87f) volume_small_pane_srt_g10

0x0009,

0xf72e,	// (0x0006cb18) volume_small_pane_srt_g_ParamLimits

0xf72e,	// (0x0006cb18) volume_small_pane_srt_g

0x9477,	// (0x00066861) query_popup_data_pane_cp2

0x377b,	// (0x00060b65) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x377b,	// (0x00060b65) navi_navi_icon_text_pane_srt_t1

0x282e,	// (0x0005fc18) navi_tabs_2_long_pane_srt

0x282e,	// (0x0005fc18) navi_tabs_2_pane_srt

0x282e,	// (0x0005fc18) navi_tabs_3_long_pane_srt

0x282e,	// (0x0005fc18) navi_tabs_3_pane_srt

0x282e,	// (0x0005fc18) navi_tabs_4_pane_srt

0xb54e,	// (0x00068938) tabs_2_active_pane_srt_ParamLimits

0xb54e,	// (0x00068938) tabs_2_active_pane_srt

0xb55e,	// (0x00068948) tabs_2_passive_pane_srt_ParamLimits

0xb55e,	// (0x00068948) tabs_2_passive_pane_srt

0x1fdd,	// (0x0005f3c7) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1fdd,	// (0x0005f3c7) bg_passive_tab_pane_cp1_srt

0xcb23,	// (0x00069f0d) bg_passive_tab_pane_g1_cp1_srt

0xa0b7,	// (0x000674a1) bg_passive_tab_pane_g2_cp1_srt

0xcb2c,	// (0x00069f16) bg_passive_tab_pane_g3_cp1_srt

0x70ac,	// (0x00064496) bg_active_tab_pane_cp1_srt_ParamLimits

0x70ac,	// (0x00064496) bg_active_tab_pane_cp1_srt

0xcb35,	// (0x00069f1f) tabs_2_active_pane_srt_g1

0xcb3d,	// (0x00069f27) tabs_2_active_pane_srt_t1_ParamLimits

0xcb3d,	// (0x00069f27) tabs_2_active_pane_srt_t1

0xcb23,	// (0x00069f0d) bg_active_tab_pane_g1_cp1_srt

0xa0b7,	// (0x000674a1) bg_active_tab_pane_g2_cp1_srt

0xcb2c,	// (0x00069f16) bg_active_tab_pane_g3_cp1_srt

0xb51b,	// (0x00068905) tabs_3_active_pane_srt_ParamLimits

0xb51b,	// (0x00068905) tabs_3_active_pane_srt

0xb52c,	// (0x00068916) tabs_3_passive_pane_cp_srt_ParamLimits

0xb52c,	// (0x00068916) tabs_3_passive_pane_cp_srt

0xb53d,	// (0x00068927) tabs_3_passive_pane_srt_ParamLimits

0xb53d,	// (0x00068927) tabs_3_passive_pane_srt

0x1fdd,	// (0x0005f3c7) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1fdd,	// (0x0005f3c7) bg_passive_tab_pane_cp2_srt

0xa279,	// (0x00067663) bg_passive_tab_pane_g1_cp2_srt

0xa0b7,	// (0x000674a1) bg_passive_tab_pane_g2_cp2_srt

0xa282,	// (0x0006766c) bg_passive_tab_pane_g3_cp2_srt

0x70ac,	// (0x00064496) bg_active_tab_pane_cp2_srt_ParamLimits

0x70ac,	// (0x00064496) bg_active_tab_pane_cp2_srt

0xcb05,	// (0x00069eef) tabs_3_active_pane_srt_g1

0xcb0d,	// (0x00069ef7) tabs_3_active_pane_srt_t1_ParamLimits

0xcb0d,	// (0x00069ef7) tabs_3_active_pane_srt_t1

0xa279,	// (0x00067663) bg_active_tab_pane_g1_cp2_srt

0xa0b7,	// (0x000674a1) bg_active_tab_pane_g2_cp2_srt

0xa282,	// (0x0006766c) bg_active_tab_pane_g3_cp2_srt

0x09eb,	// (0x0005ddd5) tabs_4_active_pane_srt_ParamLimits

0x09eb,	// (0x0005ddd5) tabs_4_active_pane_srt

0x09fd,	// (0x0005dde7) tabs_4_passive_pane_cp2_srt_ParamLimits

0x09fd,	// (0x0005dde7) tabs_4_passive_pane_cp2_srt

0xf4b5,	// (0x0006c89f) aid_size_cell_toolbar

0x332c,	// (0x00060716) main_idle_act_pane_ParamLimits

0xf503,	// (0x0006c8ed) popup_large_graphic_colour_window_ParamLimits

0xabb4,	// (0x00067f9e) popup_toolbar_window_ParamLimits

0xabb4,	// (0x00067f9e) popup_toolbar_window

0x34fc,	// (0x000608e6) list_single_graphic_2heading_pane_ParamLimits

0x34fc,	// (0x000608e6) list_single_graphic_2heading_pane

0x82fb,	// (0x000656e5) aid_size_cell_apps_grid_lsc_pane

0x830d,	// (0x000656f7) aid_size_cell_apps_grid_prt_pane

0x8461,	// (0x0006584b) bg_wml_button_pane_cp1_ParamLimits

0x8461,	// (0x0006584b) bg_wml_button_pane_cp1

0xb1e5,	// (0x000685cf) form_midp_field_text_pane_t1_ParamLimits

0x1fdd,	// (0x0005f3c7) input_focus_pane_cp050_ParamLimits

0x224d,	// (0x0005f637) list_midp_form_text_pane_ParamLimits

0x21f0,	// (0x0005f5da) input_focus_pane_cp051_ParamLimits

0x2204,	// (0x0005f5ee) list_midp_choice_pane_ParamLimits

0xb14a,	// (0x00068534) list_single_2graphic_pane_cp3_ParamLimits

0xb14a,	// (0x00068534) list_single_2graphic_pane_cp3

0xb15e,	// (0x00068548) list_single_midp_graphic_pane_ParamLimits

0xb15e,	// (0x00068548) list_single_midp_graphic_pane

0xe91d,	// (0x0006bd07) list_single_graphic_2heading_pane_g1_ParamLimits

0xe91d,	// (0x0006bd07) list_single_graphic_2heading_pane_g1

0xe929,	// (0x0006bd13) list_single_graphic_2heading_pane_g4_ParamLimits

0xe929,	// (0x0006bd13) list_single_graphic_2heading_pane_g4

0xe935,	// (0x0006bd1f) list_single_graphic_2heading_pane_g5_ParamLimits

0xe935,	// (0x0006bd1f) list_single_graphic_2heading_pane_g5

0x0002,

0xf781,	// (0x0006cb6b) list_single_graphic_2heading_pane_g_ParamLimits

0xf781,	// (0x0006cb6b) list_single_graphic_2heading_pane_g

0xe941,	// (0x0006bd2b) list_single_graphic_2heading_pane_t1_ParamLimits

0xe941,	// (0x0006bd2b) list_single_graphic_2heading_pane_t1

0xe955,	// (0x0006bd3f) list_single_graphic_2heading_pane_t2_ParamLimits

0xe955,	// (0x0006bd3f) list_single_graphic_2heading_pane_t2

0xe96f,	// (0x0006bd59) list_single_graphic_2heading_pane_t3_ParamLimits

0xe96f,	// (0x0006bd59) list_single_graphic_2heading_pane_t3

0x0002,

0xf788,	// (0x0006cb72) list_single_graphic_2heading_pane_t_ParamLimits

0xf788,	// (0x0006cb72) list_single_graphic_2heading_pane_t

0x1e8f,	// (0x0005f279) bg_popup_sub_pane_cp2

0x1eb9,	// (0x0005f2a3) grid_toobar_pane

0x056d,	// (0x0005d957) cell_toolbar_pane_ParamLimits

0x056d,	// (0x0005d957) cell_toolbar_pane

0x1ef5,	// (0x0005f2df) cell_toolbar_pane_g1_ParamLimits

0x1ef5,	// (0x0005f2df) cell_toolbar_pane_g1

0xb062,	// (0x0006844c) cell_toolbar_pane_g2_ParamLimits

0xb062,	// (0x0006844c) cell_toolbar_pane_g2

0x0001,

0xf78f,	// (0x0006cb79) cell_toolbar_pane_g_ParamLimits

0xf78f,	// (0x0006cb79) cell_toolbar_pane_g

0x1f2b,	// (0x0005f315) grid_highlight_pane_cp2_ParamLimits

0x1f2b,	// (0x0005f315) grid_highlight_pane_cp2

0x1f45,	// (0x0005f32f) toolbar_button_pane

0x1f51,	// (0x0005f33b) toolbar_button_pane_g1

0x1f59,	// (0x0005f343) toolbar_button_pane_g2

0x1f61,	// (0x0005f34b) toolbar_button_pane_g3

0x1f69,	// (0x0005f353) toolbar_button_pane_g4

0x1f71,	// (0x0005f35b) toolbar_button_pane_g5

0x1f79,	// (0x0005f363) toolbar_button_pane_g6

0x1f81,	// (0x0005f36b) toolbar_button_pane_g7

0x1f89,	// (0x0005f373) toolbar_button_pane_g8

0x1f91,	// (0x0005f37b) toolbar_button_pane_g9

0x0009,

0xf794,	// (0x0006cb7e) toolbar_button_pane_g

0x05b1,	// (0x0005d99b) list_single_2graphic_pane_g1_cp3_ParamLimits

0x05b1,	// (0x0005d99b) list_single_2graphic_pane_g1_cp3

0xb076,	// (0x00068460) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb076,	// (0x00068460) list_single_2graphic_pane_g2_cp3

0x05ce,	// (0x0005d9b8) list_single_2graphic_pane_g3_cp3

0x05d6,	// (0x0005d9c0) list_single_2graphic_pane_g4_cp3_ParamLimits

0x05d6,	// (0x0005d9c0) list_single_2graphic_pane_g4_cp3

0xb087,	// (0x00068471) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb087,	// (0x00068471) list_single_2graphic_pane_t1_cp3

0x05fe,	// (0x0005d9e8) list_single_midp_graphic_pane_g2_ParamLimits

0x05fe,	// (0x0005d9e8) list_single_midp_graphic_pane_g2

0xe90d,	// (0x0006bcf7) aid_zoom_text_primary

0xf4bd,	// (0x0006c8a7) aid_zoom_text_secondary

0xa2d9,	// (0x000676c3) status_small_pane_g7_ParamLimits

0xa2d9,	// (0x000676c3) status_small_pane_g7

0xa2fc,	// (0x000676e6) status_small_pane_t1_ParamLimits

0x90be,	// (0x000664a8) title_pane_g2

0x0003,

0xf529,	// (0x0006c913) title_pane_g

0x94d1,	// (0x000668bb) aid_size_cell_colour_1_pane_ParamLimits

0x94d1,	// (0x000668bb) aid_size_cell_colour_1_pane

0x94e5,	// (0x000668cf) aid_size_cell_colour_2_pane_ParamLimits

0x94e5,	// (0x000668cf) aid_size_cell_colour_2_pane

0x94f9,	// (0x000668e3) aid_size_cell_colour_3_pane_ParamLimits

0x94f9,	// (0x000668e3) aid_size_cell_colour_3_pane

0x950d,	// (0x000668f7) aid_size_cell_colour_4_pane_ParamLimits

0x950d,	// (0x000668f7) aid_size_cell_colour_4_pane

0xf0ba,	// (0x0006c4a4) title_pane_stacon_g1_ParamLimits

0xf0ba,	// (0x0006c4a4) title_pane_stacon_g1

0x261d,	// (0x0005fa07) popup_note_wait_window_g3_ParamLimits

0x261d,	// (0x0005fa07) popup_note_wait_window_g3

0x2693,	// (0x0005fa7d) popup_note_wait_window_t5_ParamLimits

0x2693,	// (0x0005fa7d) popup_note_wait_window_t5

0x6f34,	// (0x0006431e) main_feb_china_hwr_fs_writing_pane

0xa568,	// (0x00067952) popup_feb_china_hwr_fs_window_ParamLimits

0xa568,	// (0x00067952) popup_feb_china_hwr_fs_window

0xb0a3,	// (0x0006848d) aid_size_cell_hwr_fs_ParamLimits

0xb0a3,	// (0x0006848d) aid_size_cell_hwr_fs

0x1fdd,	// (0x0005f3c7) bg_popup_sub_pane_cp3_ParamLimits

0x1fdd,	// (0x0005f3c7) bg_popup_sub_pane_cp3

0xb0b8,	// (0x000684a2) grid_hwr_fs_pane_ParamLimits

0xb0b8,	// (0x000684a2) grid_hwr_fs_pane

0x064d,	// (0x0005da37) linegrid_hwr_fs_pane_ParamLimits

0x064d,	// (0x0005da37) linegrid_hwr_fs_pane

0xb0d0,	// (0x000684ba) cell_hwr_fs_pane_ParamLimits

0xb0d0,	// (0x000684ba) cell_hwr_fs_pane

0x1fe9,	// (0x0005f3d3) linegrid_hwr_fs_pane_g1_ParamLimits

0x1fe9,	// (0x0005f3d3) linegrid_hwr_fs_pane_g1

0xb0f6,	// (0x000684e0) linegrid_hwr_fs_pane_g2_ParamLimits

0xb0f6,	// (0x000684e0) linegrid_hwr_fs_pane_g2

0x2007,	// (0x0005f3f1) linegrid_hwr_fs_pane_g3_ParamLimits

0x2007,	// (0x0005f3f1) linegrid_hwr_fs_pane_g3

0xb108,	// (0x000684f2) linegrid_hwr_fs_pane_g4_ParamLimits

0xb108,	// (0x000684f2) linegrid_hwr_fs_pane_g4

0x0699,	// (0x0005da83) linegrid_hwr_fs_pane_g5_ParamLimits

0x0699,	// (0x0005da83) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ba,	// (0x0006cba4) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ba,	// (0x0006cba4) linegrid_hwr_fs_pane_g

0x2013,	// (0x0005f3fd) cell_hwr_fs_pane_g1_ParamLimits

0x2013,	// (0x0005f3fd) cell_hwr_fs_pane_g1

0x1dc9,	// (0x0005f1b3) cell_hwr_fs_pane_g2_ParamLimits

0x1dc9,	// (0x0005f1b3) cell_hwr_fs_pane_g2

0xb122,	// (0x0006850c) cell_hwr_fs_pane_g3_ParamLimits

0xb122,	// (0x0006850c) cell_hwr_fs_pane_g3

0xb12f,	// (0x00068519) cell_hwr_fs_pane_g4_ParamLimits

0xb12f,	// (0x00068519) cell_hwr_fs_pane_g4

0x0003,

0xf7c5,	// (0x0006cbaf) cell_hwr_fs_pane_g_ParamLimits

0xf7c5,	// (0x0006cbaf) cell_hwr_fs_pane_g

0xb13c,	// (0x00068526) cell_hwr_fs_pane_t1

0x6f34,	// (0x0006431e) grid_highlight_pane_cp6

0x6f34,	// (0x0006431e) main_idle_act2_pane

0x8151,	// (0x0006553b) aid_inside_area_popup_secondary

0xc631,	// (0x00069a1b) aid_inside_area_window_primary_ParamLimits

0xc631,	// (0x00069a1b) aid_inside_area_window_primary

0xcb5b,	// (0x00069f45) ai2_news_ticker_pane

0x389c,	// (0x00060c86) aid_size_cell_ai1_link_ParamLimits

0x389c,	// (0x00060c86) aid_size_cell_ai1_link

0xcb63,	// (0x00069f4d) popup_ai2_data_window_ParamLimits

0xcb63,	// (0x00069f4d) popup_ai2_data_window

0x38cc,	// (0x00060cb6) popup_ai2_link_window_ParamLimits

0x38cc,	// (0x00060cb6) popup_ai2_link_window

0x1fdd,	// (0x0005f3c7) bg_popup_sub_pane_cp4_ParamLimits

0x1fdd,	// (0x0005f3c7) bg_popup_sub_pane_cp4

0x38e0,	// (0x00060cca) grid_ai2_link_pane_ParamLimits

0x38e0,	// (0x00060cca) grid_ai2_link_pane

0x38f7,	// (0x00060ce1) popup_ai2_link_window_g1_ParamLimits

0x38f7,	// (0x00060ce1) popup_ai2_link_window_g1

0x3903,	// (0x00060ced) popup_ai2_link_window_g2_ParamLimits

0x3903,	// (0x00060ced) popup_ai2_link_window_g2

0x0001,

0xf998,	// (0x0006cd82) popup_ai2_link_window_g_ParamLimits

0xf998,	// (0x0006cd82) popup_ai2_link_window_g

0x3912,	// (0x00060cfc) ai2_mp_button_pane

0x391a,	// (0x00060d04) ai2_mp_volume_pane

0x21f0,	// (0x0005f5da) bg_popup_sub_pane_cp5_ParamLimits

0x21f0,	// (0x0005f5da) bg_popup_sub_pane_cp5

0x3922,	// (0x00060d0c) heading_ai2_gene_pane_ParamLimits

0x3922,	// (0x00060d0c) heading_ai2_gene_pane

0x392e,	// (0x00060d18) list_ai2_gene_pane_ParamLimits

0x392e,	// (0x00060d18) list_ai2_gene_pane

0x3976,	// (0x00060d60) cell_ai2_link_pane_ParamLimits

0x3976,	// (0x00060d60) cell_ai2_link_pane

0x398c,	// (0x00060d76) cell_ai2_link_pane_g1

0x6f34,	// (0x0006431e) grid_highlight_pane_cp7

0x0aa3,	// (0x0005de8d) ai2_mp_volume_pane_g1

0x3a5c,	// (0x00060e46) ai2_mp_volume_pane_g2

0x39d1,	// (0x00060dbb) list_ai2_gene_pane_t1

0x3a64,	// (0x00060e4e) ai2_mp_volume_pane_g3

0x0002,

0xf9b1,	// (0x0006cd9b) ai2_mp_volume_pane_g

0xb56e,	// (0x00068958) volume_small_pane_cp3

0x3a6c,	// (0x00060e56) aid_size_cell_ai2_button

0x3a74,	// (0x00060e5e) grid_ai2_button_pane

0x3a7d,	// (0x00060e67) cell_ai2_button_pane_ParamLimits

0x3a7d,	// (0x00060e67) cell_ai2_button_pane

0x6f2a,	// (0x00064314) cell_ai2_button_pane_g1

0x6f34,	// (0x0006431e) grid_highlight_pane_cp8

0x3a1c,	// (0x00060e06) ai2_gene_pane_t1_ParamLimits

0x3a1c,	// (0x00060e06) ai2_gene_pane_t1

0xa4ca,	// (0x000678b4) aid_height_parent_landscape

0xc87f,	// (0x00069c69) aid_height_set_list

0x332c,	// (0x00060716) aid_size_parent

0x36b7,	// (0x00060aa1) aid_size_cell_graphic_pane_ParamLimits

0x393e,	// (0x00060d28) popup_ai2_data_window_g1_ParamLimits

0x393e,	// (0x00060d28) popup_ai2_data_window_g1

0x394a,	// (0x00060d34) ai2_news_ticker_pane_g1

0x3952,	// (0x00060d3c) ai2_news_ticker_pane_g2

0x0001,

0xf99d,	// (0x0006cd87) ai2_news_ticker_pane_g

0x395a,	// (0x00060d44) ai2_news_ticker_pane_t1

0x3968,	// (0x00060d52) ai2_news_ticker_pane_t2

0x0001,

0xf9a2,	// (0x0006cd8c) ai2_news_ticker_pane_t

0x3995,	// (0x00060d7f) heading_ai2_gene_pane_g1

0x399d,	// (0x00060d87) heading_ai2_gene_pane_t1_ParamLimits

0x399d,	// (0x00060d87) heading_ai2_gene_pane_t1

0x39b2,	// (0x00060d9c) list_highlight_pane_cp6

0x39ba,	// (0x00060da4) ai2_gene_pane_ParamLimits

0x39ba,	// (0x00060da4) ai2_gene_pane

0x39df,	// (0x00060dc9) list_ai2_gene_pane_t2

0x0001,

0xf9a7,	// (0x0006cd91) list_ai2_gene_pane_t

0x39ed,	// (0x00060dd7) list_highlight_pane_cp8_ParamLimits

0x39ed,	// (0x00060dd7) list_highlight_pane_cp8

0x39fe,	// (0x00060de8) ai2_gene_pane_g1_ParamLimits

0x39fe,	// (0x00060de8) ai2_gene_pane_g1

0x3a10,	// (0x00060dfa) ai2_gene_pane_g2_ParamLimits

0x3a10,	// (0x00060dfa) ai2_gene_pane_g2

0x0001,

0xf9ac,	// (0x0006cd96) ai2_gene_pane_g_ParamLimits

0xf9ac,	// (0x0006cd96) ai2_gene_pane_g

0x7fd7,	// (0x000653c1) scroll_pane_cp12

0xa487,	// (0x00067871) control_pane_t3_ParamLimits

0xa487,	// (0x00067871) control_pane_t3

0xa2ed,	// (0x000676d7) status_small_pane_g8_ParamLimits

0xa2ed,	// (0x000676d7) status_small_pane_g8

0xa62b,	// (0x00067a15) popup_find_window_ParamLimits

0xa8b8,	// (0x00067ca2) popup_note_image_window_ParamLimits

0xe7f1,	// (0x0006bbdb) list_double2_graphic_pane_vc_g1_ParamLimits

0xe7f1,	// (0x0006bbdb) list_double2_graphic_pane_vc_g1

0xbe8c,	// (0x00069276) list_double2_graphic_pane_vc_g2_ParamLimits

0xbe8c,	// (0x00069276) list_double2_graphic_pane_vc_g2

0x059d,	// (0x0005d987) list_double2_graphic_pane_vc_g3_ParamLimits

0x059d,	// (0x0005d987) list_double2_graphic_pane_vc_g3

0x0002,

0xf59c,	// (0x0006c986) list_double2_graphic_pane_vc_g_ParamLimits

0xf59c,	// (0x0006c986) list_double2_graphic_pane_vc_g

0xe7fd,	// (0x0006bbe7) list_double2_graphic_pane_vc_t1_ParamLimits

0xe7fd,	// (0x0006bbe7) list_double2_graphic_pane_vc_t1

0xbe8c,	// (0x00069276) list_single_heading_pane_vc_g1_ParamLimits

0xbe8c,	// (0x00069276) list_single_heading_pane_vc_g1

0x059d,	// (0x0005d987) list_single_heading_pane_vc_g2_ParamLimits

0x059d,	// (0x0005d987) list_single_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0006c997) list_single_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0006c997) list_single_heading_pane_vc_g

0xe987,	// (0x0006bd71) list_single_heading_pane_vc_t1_ParamLimits

0xe987,	// (0x0006bd71) list_single_heading_pane_vc_t1

0xe99d,	// (0x0006bd87) list_single_heading_pane_vc_t2_ParamLimits

0xe99d,	// (0x0006bd87) list_single_heading_pane_vc_t2

0x0001,

0xf7a9,	// (0x0006cb93) list_single_heading_pane_vc_t_ParamLimits

0xf7a9,	// (0x0006cb93) list_single_heading_pane_vc_t

0x1f99,	// (0x0005f383) list_setting_number_pane_vc_g1_ParamLimits

0x1f99,	// (0x0005f383) list_setting_number_pane_vc_g1

0x1fa5,	// (0x0005f38f) list_setting_number_pane_vc_g2_ParamLimits

0x1fa5,	// (0x0005f38f) list_setting_number_pane_vc_g2

0x0001,

0xf7ae,	// (0x0006cb98) list_setting_number_pane_vc_g_ParamLimits

0xf7ae,	// (0x0006cb98) list_setting_number_pane_vc_g

0xe9af,	// (0x0006bd99) list_setting_number_pane_vc_t1_ParamLimits

0xe9af,	// (0x0006bd99) list_setting_number_pane_vc_t1

0xe9c3,	// (0x0006bdad) list_setting_number_pane_vc_t2_ParamLimits

0xe9c3,	// (0x0006bdad) list_setting_number_pane_vc_t2

0xe9df,	// (0x0006bdc9) list_setting_number_pane_vc_t3_ParamLimits

0xe9df,	// (0x0006bdc9) list_setting_number_pane_vc_t3

0x0002,

0xf7b3,	// (0x0006cb9d) list_setting_number_pane_vc_t_ParamLimits

0xf7b3,	// (0x0006cb9d) list_setting_number_pane_vc_t

0xea09,	// (0x0006bdf3) set_value_pane_vc_ParamLimits

0xea09,	// (0x0006bdf3) set_value_pane_vc

0x34fc,	// (0x000608e6) list_double2_graphic_pane_vc_ParamLimits

0x34fc,	// (0x000608e6) list_double2_graphic_pane_vc

0x350f,	// (0x000608f9) list_double2_large_graphic_pane_vc_ParamLimits

0x350f,	// (0x000608f9) list_double2_large_graphic_pane_vc

0x34fc,	// (0x000608e6) list_double2_pane_vc_ParamLimits

0x34fc,	// (0x000608e6) list_double2_pane_vc

0x34fc,	// (0x000608e6) list_double_graphic_heading_pane_vc_ParamLimits

0x34fc,	// (0x000608e6) list_double_graphic_heading_pane_vc

0x34fc,	// (0x000608e6) list_double_graphic_pane_vc_ParamLimits

0x34fc,	// (0x000608e6) list_double_graphic_pane_vc

0x34fc,	// (0x000608e6) list_double_heading_pane_vc_ParamLimits

0x34fc,	// (0x000608e6) list_double_heading_pane_vc

0x3521,	// (0x0006090b) list_double_large_graphic_pane_vc_ParamLimits

0x3521,	// (0x0006090b) list_double_large_graphic_pane_vc

0x34fc,	// (0x000608e6) list_double_number_pane_vc_ParamLimits

0x34fc,	// (0x000608e6) list_double_number_pane_vc

0x34fc,	// (0x000608e6) list_double_pane_vc_ParamLimits

0x34fc,	// (0x000608e6) list_double_pane_vc

0x34fc,	// (0x000608e6) list_double_time_pane_vc_ParamLimits

0x34fc,	// (0x000608e6) list_double_time_pane_vc

0x34fc,	// (0x000608e6) list_setting_number_pane_vc_ParamLimits

0x34fc,	// (0x000608e6) list_setting_number_pane_vc

0x34fc,	// (0x000608e6) list_setting_pane_vc_ParamLimits

0x34fc,	// (0x000608e6) list_setting_pane_vc

0x34fc,	// (0x000608e6) list_single_graphic_heading_pane_vc_ParamLimits

0x34fc,	// (0x000608e6) list_single_graphic_heading_pane_vc

0x34fc,	// (0x000608e6) list_single_heading_pane_vc_ParamLimits

0x34fc,	// (0x000608e6) list_single_heading_pane_vc

0x34fc,	// (0x000608e6) list_single_number_heading_pane_vc_ParamLimits

0x34fc,	// (0x000608e6) list_single_number_heading_pane_vc

0xea28,	// (0x0006be12) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xea28,	// (0x0006be12) list_double_graphic_heading_pane_vc_g1

0xbe8c,	// (0x00069276) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xbe8c,	// (0x00069276) list_double_graphic_heading_pane_vc_g2

0x059d,	// (0x0005d987) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x059d,	// (0x0005d987) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9b8,	// (0x0006cda2) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9b8,	// (0x0006cda2) list_double_graphic_heading_pane_vc_g

0xea34,	// (0x0006be1e) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xea34,	// (0x0006be1e) list_double_graphic_heading_pane_vc_t1

0xea48,	// (0x0006be32) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xea48,	// (0x0006be32) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9bf,	// (0x0006cda9) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9bf,	// (0x0006cda9) list_double_graphic_heading_pane_vc_t

0x1f99,	// (0x0005f383) list_setting_pane_vc_g1_ParamLimits

0x1f99,	// (0x0005f383) list_setting_pane_vc_g1

0x1fa5,	// (0x0005f38f) list_setting_pane_vc_g2_ParamLimits

0x1fa5,	// (0x0005f38f) list_setting_pane_vc_g2

0x0001,

0xf7ae,	// (0x0006cb98) list_setting_pane_vc_g_ParamLimits

0xf7ae,	// (0x0006cb98) list_setting_pane_vc_g

0xea60,	// (0x0006be4a) list_setting_pane_vc_t1_ParamLimits

0xea60,	// (0x0006be4a) list_setting_pane_vc_t1

0xea7c,	// (0x0006be66) list_setting_pane_vc_t2_ParamLimits

0xea7c,	// (0x0006be66) list_setting_pane_vc_t2

0x0001,

0xfa02,	// (0x0006cdec) list_setting_pane_vc_t_ParamLimits

0xfa02,	// (0x0006cdec) list_setting_pane_vc_t

0xea09,	// (0x0006bdf3) set_value_pane_cp_vc_ParamLimits

0xea09,	// (0x0006bdf3) set_value_pane_cp_vc

0xbe8c,	// (0x00069276) list_single_number_heading_pane_vc_g1_ParamLimits

0xbe8c,	// (0x00069276) list_single_number_heading_pane_vc_g1

0x059d,	// (0x0005d987) list_single_number_heading_pane_vc_g2_ParamLimits

0x059d,	// (0x0005d987) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0006c997) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0006c997) list_single_number_heading_pane_vc_g

0xea96,	// (0x0006be80) list_single_number_heading_pane_vc_t1_ParamLimits

0xea96,	// (0x0006be80) list_single_number_heading_pane_vc_t1

0xeaac,	// (0x0006be96) list_single_number_heading_pane_vc_t2_ParamLimits

0xeaac,	// (0x0006be96) list_single_number_heading_pane_vc_t2

0xeabe,	// (0x0006bea8) list_single_number_heading_pane_vc_t3_ParamLimits

0xeabe,	// (0x0006bea8) list_single_number_heading_pane_vc_t3

0x0002,

0xfa07,	// (0x0006cdf1) list_single_number_heading_pane_vc_t_ParamLimits

0xfa07,	// (0x0006cdf1) list_single_number_heading_pane_vc_t

0xead0,	// (0x0006beba) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xead0,	// (0x0006beba) list_single_graphic_heading_pane_vc_g1

0xbe8c,	// (0x00069276) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xbe8c,	// (0x00069276) list_single_graphic_heading_pane_vc_g4

0x059d,	// (0x0005d987) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x059d,	// (0x0005d987) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa0e,	// (0x0006cdf8) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa0e,	// (0x0006cdf8) list_single_graphic_heading_pane_vc_g

0xe987,	// (0x0006bd71) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe987,	// (0x0006bd71) list_single_graphic_heading_pane_vc_t1

0xeadc,	// (0x0006bec6) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xeadc,	// (0x0006bec6) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa15,	// (0x0006cdff) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa15,	// (0x0006cdff) list_single_graphic_heading_pane_vc_t

0xbe8c,	// (0x00069276) list_double2_pane_vc_g1_ParamLimits

0xbe8c,	// (0x00069276) list_double2_pane_vc_g1

0x059d,	// (0x0005d987) list_double2_pane_vc_g2_ParamLimits

0x059d,	// (0x0005d987) list_double2_pane_vc_g2

0x0001,

0xf5ad,	// (0x0006c997) list_double2_pane_vc_g_ParamLimits

0xf5ad,	// (0x0006c997) list_double2_pane_vc_g

0xeaee,	// (0x0006bed8) list_double2_pane_vc_t1_ParamLimits

0xeaee,	// (0x0006bed8) list_double2_pane_vc_t1

0x3cb6,	// (0x000610a0) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3cb6,	// (0x000610a0) list_double2_large_graphic_pane_vc_g1

0xe813,	// (0x0006bbfd) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xe813,	// (0x0006bbfd) list_double2_large_graphic_pane_vc_g2

0xe81f,	// (0x0006bc09) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xe81f,	// (0x0006bc09) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c5,	// (0x0006c9af) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c5,	// (0x0006c9af) list_double2_large_graphic_pane_vc_g

0xe82b,	// (0x0006bc15) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe82b,	// (0x0006bc15) list_double2_large_graphic_pane_vc_t1

0x3cc2,	// (0x000610ac) list_double_time_pane_vc_g1_ParamLimits

0x3cc2,	// (0x000610ac) list_double_time_pane_vc_g1

0x3cce,	// (0x000610b8) list_double_time_pane_vc_g2_ParamLimits

0x3cce,	// (0x000610b8) list_double_time_pane_vc_g2

0x0001,

0xfa1a,	// (0x0006ce04) list_double_time_pane_vc_g_ParamLimits

0xfa1a,	// (0x0006ce04) list_double_time_pane_vc_g

0xeb06,	// (0x0006bef0) list_double_time_pane_vc_t1_ParamLimits

0xeb06,	// (0x0006bef0) list_double_time_pane_vc_t1

0xeb2a,	// (0x0006bf14) list_double_time_pane_vc_t2_ParamLimits

0xeb2a,	// (0x0006bf14) list_double_time_pane_vc_t2

0xeb79,	// (0x0006bf63) list_double_time_pane_vc_t3_ParamLimits

0xeb79,	// (0x0006bf63) list_double_time_pane_vc_t3

0xeb8b,	// (0x0006bf75) list_double_time_pane_vc_t4_ParamLimits

0xeb8b,	// (0x0006bf75) list_double_time_pane_vc_t4

0x0003,

0xfa1f,	// (0x0006ce09) list_double_time_pane_vc_t_ParamLimits

0xfa1f,	// (0x0006ce09) list_double_time_pane_vc_t

0xbe8c,	// (0x00069276) list_double_pane_vc_g1_ParamLimits

0xbe8c,	// (0x00069276) list_double_pane_vc_g1

0x059d,	// (0x0005d987) list_double_pane_vc_g2_ParamLimits

0x059d,	// (0x0005d987) list_double_pane_vc_g2

0x0001,

0xf5ad,	// (0x0006c997) list_double_pane_vc_g_ParamLimits

0xf5ad,	// (0x0006c997) list_double_pane_vc_g

0xeb9f,	// (0x0006bf89) list_double_pane_vc_t1_ParamLimits

0xeb9f,	// (0x0006bf89) list_double_pane_vc_t1

0xebb3,	// (0x0006bf9d) list_double_pane_vc_t2_ParamLimits

0xebb3,	// (0x0006bf9d) list_double_pane_vc_t2

0x0001,

0xfa28,	// (0x0006ce12) list_double_pane_vc_t_ParamLimits

0xfa28,	// (0x0006ce12) list_double_pane_vc_t

0xbe8c,	// (0x00069276) list_double_number_pane_vc_g1_ParamLimits

0xbe8c,	// (0x00069276) list_double_number_pane_vc_g1

0x059d,	// (0x0005d987) list_double_number_pane_vc_g2_ParamLimits

0x059d,	// (0x0005d987) list_double_number_pane_vc_g2

0x0001,

0xf5ad,	// (0x0006c997) list_double_number_pane_vc_g_ParamLimits

0xf5ad,	// (0x0006c997) list_double_number_pane_vc_g

0xebcb,	// (0x0006bfb5) list_double_number_pane_vc_t1_ParamLimits

0xebcb,	// (0x0006bfb5) list_double_number_pane_vc_t1

0xeb9f,	// (0x0006bf89) list_double_number_pane_vc_t2_ParamLimits

0xeb9f,	// (0x0006bf89) list_double_number_pane_vc_t2

0xebdd,	// (0x0006bfc7) list_double_number_pane_vc_t3_ParamLimits

0xebdd,	// (0x0006bfc7) list_double_number_pane_vc_t3

0x0002,

0xfa2d,	// (0x0006ce17) list_double_number_pane_vc_t_ParamLimits

0xfa2d,	// (0x0006ce17) list_double_number_pane_vc_t

0x3cda,	// (0x000610c4) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3cda,	// (0x000610c4) list_double_large_graphic_pane_vc_g1

0x3cf6,	// (0x000610e0) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3cf6,	// (0x000610e0) list_double_large_graphic_pane_vc_g2

0x3d0a,	// (0x000610f4) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3d0a,	// (0x000610f4) list_double_large_graphic_pane_vc_g3

0xebf5,	// (0x0006bfdf) list_double_large_graphic_pane_vc_g4_ParamLimits

0xebf5,	// (0x0006bfdf) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa34,	// (0x0006ce1e) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa34,	// (0x0006ce1e) list_double_large_graphic_pane_vc_g

0xec04,	// (0x0006bfee) list_double_large_graphic_pane_vc_t1_ParamLimits

0xec04,	// (0x0006bfee) list_double_large_graphic_pane_vc_t1

0xec20,	// (0x0006c00a) list_double_large_graphic_pane_vc_t2_ParamLimits

0xec20,	// (0x0006c00a) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3d,	// (0x0006ce27) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3d,	// (0x0006ce27) list_double_large_graphic_pane_vc_t

0xbe8c,	// (0x00069276) list_double_heading_pane_vc_g1_ParamLimits

0xbe8c,	// (0x00069276) list_double_heading_pane_vc_g1

0x059d,	// (0x0005d987) list_double_heading_pane_vc_g2_ParamLimits

0x059d,	// (0x0005d987) list_double_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0006c997) list_double_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0006c997) list_double_heading_pane_vc_g

0xec42,	// (0x0006c02c) list_double_heading_pane_vc_t1_ParamLimits

0xec42,	// (0x0006c02c) list_double_heading_pane_vc_t1

0xec56,	// (0x0006c040) list_double_heading_pane_vc_t2_ParamLimits

0xec56,	// (0x0006c040) list_double_heading_pane_vc_t2

0x0001,

0xfa42,	// (0x0006ce2c) list_double_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0006ce2c) list_double_heading_pane_vc_t

0xec6e,	// (0x0006c058) list_double_graphic_pane_vc_g1_ParamLimits

0xec6e,	// (0x0006c058) list_double_graphic_pane_vc_g1

0x3d19,	// (0x00061103) list_double_graphic_pane_vc_g2_ParamLimits

0x3d19,	// (0x00061103) list_double_graphic_pane_vc_g2

0xbe8c,	// (0x00069276) list_double_graphic_pane_vc_g3_ParamLimits

0xbe8c,	// (0x00069276) list_double_graphic_pane_vc_g3

0x0003,

0xfa47,	// (0x0006ce31) list_double_graphic_pane_vc_g_ParamLimits

0xfa47,	// (0x0006ce31) list_double_graphic_pane_vc_g

0xec81,	// (0x0006c06b) list_double_graphic_pane_vc_t1_ParamLimits

0xec81,	// (0x0006c06b) list_double_graphic_pane_vc_t1

0xeca0,	// (0x0006c08a) list_double_graphic_pane_vc_t2_ParamLimits

0xeca0,	// (0x0006c08a) list_double_graphic_pane_vc_t2

0x0001,

0xfa50,	// (0x0006ce3a) list_double_graphic_pane_vc_t_ParamLimits

0xfa50,	// (0x0006ce3a) list_double_graphic_pane_vc_t

0xe657,	// (0x0006ba41) aid_size_cell_fastswap

0x8e85,	// (0x0006626f) aid_size_cell_touch_ParamLimits

0x8e85,	// (0x0006626f) aid_size_cell_touch

0xe7b8,	// (0x0006bba2) popup_fast_swap_wide_window_ParamLimits

0xe7b8,	// (0x0006bba2) popup_fast_swap_wide_window

0x9055,	// (0x0006643f) touch_pane_ParamLimits

0x9055,	// (0x0006643f) touch_pane

0x8024,	// (0x0006540e) button_value_adjust_pane_cp2

0xe87c,	// (0x0006bc66) button_value_adjust_pane_cp4

0xe884,	// (0x0006bc6e) form_field_data_pane_cp2

0x9b3b,	// (0x00066f25) form_field_data_wide_pane_cp2

0x8332,	// (0x0006571c) bg_scroll_pane_ParamLimits

0x9e71,	// (0x0006725b) scroll_handle_pane_ParamLimits

0xf213,	// (0x0006c5fd) scroll_sc2_down_pane_ParamLimits

0xf213,	// (0x0006c5fd) scroll_sc2_down_pane

0x8363,	// (0x0006574d) scroll_sc2_up_pane_ParamLimits

0x8363,	// (0x0006574d) scroll_sc2_up_pane

0xccac,	// (0x0006a096) grid_wheel_folder_pane_g1_ParamLimits

0xccac,	// (0x0006a096) grid_wheel_folder_pane_g1

0xf395,	// (0x0006c77f) clock_nsta_pane_cp2_ParamLimits

0xf395,	// (0x0006c77f) clock_nsta_pane_cp2

0xa1b3,	// (0x0006759d) listscroll_midp_pane_ParamLimits

0xa1bf,	// (0x000675a9) midp_canvas_pane

0xc436,	// (0x00069820) nsta_clock_indic_pane

0xc45e,	// (0x00069848) listscroll_form_pane_vc

0xc466,	// (0x00069850) listscroll_set_pane_vc_ParamLimits

0xc466,	// (0x00069850) listscroll_set_pane_vc

0xad6d,	// (0x00068157) clock_nsta_pane

0xad97,	// (0x00068181) indicator_nsta_pane

0x1e8f,	// (0x0005f279) bg_popup_sub_pane_cp2_ParamLimits

0x1ea3,	// (0x0005f28d) find_pane_cp2_ParamLimits

0x1ea3,	// (0x0005f28d) find_pane_cp2

0x1eb9,	// (0x0005f2a3) grid_toobar_pane_ParamLimits

0x1fb1,	// (0x0005f39b) list_form_gen_pane_vc_ParamLimits

0x1fb1,	// (0x0005f39b) list_form_gen_pane_vc

0x1fc7,	// (0x0005f3b1) scroll_pane_cp8_vc_ParamLimits

0x1fc7,	// (0x0005f3b1) scroll_pane_cp8_vc

0x2043,	// (0x0005f42d) data_form_wide_pane_vc_ParamLimits

0x2043,	// (0x0005f42d) data_form_wide_pane_vc

0x204f,	// (0x0005f439) form_field_data_wide_pane_vc_g1

0x2057,	// (0x0005f441) form_field_data_wide_pane_vc_t1_ParamLimits

0x2057,	// (0x0005f441) form_field_data_wide_pane_vc_t1

0x8038,	// (0x00065422) input_focus_pane_cp6_vc_ParamLimits

0x8038,	// (0x00065422) input_focus_pane_cp6_vc

0x23a4,	// (0x0005f78e) list_midp_pane_ParamLimits

0x3721,	// (0x00060b0b) scroll_pane_cp16_ParamLimits

0x3721,	// (0x00060b0b) scroll_pane_cp16

0x23fa,	// (0x0005f7e4) button_value_adjust_pane_ParamLimits

0x23fa,	// (0x0005f7e4) button_value_adjust_pane

0xc890,	// (0x00069c7a) button_value_adjust_pane_cp6_ParamLimits

0xc890,	// (0x00069c7a) button_value_adjust_pane_cp6

0xc9aa,	// (0x00069d94) settings_code_pane_cp_ParamLimits

0xc9aa,	// (0x00069d94) settings_code_pane_cp

0x6f2a,	// (0x00064314) cell_touch_pane_g1

0x6f2a,	// (0x00064314) cell_touch_pane_g2

0x0001,

0xf6d4,	// (0x0006cabe) cell_touch_pane_g

0xcb79,	// (0x00069f63) cell_touch_pane_cp_ParamLimits

0xcb79,	// (0x00069f63) cell_touch_pane_cp

0xcb95,	// (0x00069f7f) cell_touch_pane_ParamLimits

0xcb95,	// (0x00069f7f) cell_touch_pane

0x6f2a,	// (0x00064314) scroll_sc2_down_pane_g1

0x6f2a,	// (0x00064314) scroll_sc2_up_pane_g1

0x6f34,	// (0x0006431e) bg_set_opt_pane_cp4_vc

0x3ab1,	// (0x00060e9b) list_set_graphic_pane_vc_g1_ParamLimits

0x3ab1,	// (0x00060e9b) list_set_graphic_pane_vc_g1

0x3abd,	// (0x00060ea7) list_set_graphic_pane_vc_g2_ParamLimits

0x3abd,	// (0x00060ea7) list_set_graphic_pane_vc_g2

0x0001,

0xf9c4,	// (0x0006cdae) list_set_graphic_pane_vc_g_ParamLimits

0xf9c4,	// (0x0006cdae) list_set_graphic_pane_vc_g

0x3ac9,	// (0x00060eb3) text_primary_small_cp13_vc_ParamLimits

0x3ac9,	// (0x00060eb3) text_primary_small_cp13_vc

0x3ae1,	// (0x00060ecb) list_set_graphic_pane_vc_ParamLimits

0x3ae1,	// (0x00060ecb) list_set_graphic_pane_vc

0x6f34,	// (0x0006431e) input_focus_pane_cp2_vc

0x6f2a,	// (0x00064314) setting_code_pane_vc_g1

0x6f99,	// (0x00064383) setting_code_pane_vc_t1

0x3af4,	// (0x00060ede) set_text_pane_vc_t1_ParamLimits

0x3af4,	// (0x00060ede) set_text_pane_vc_t1

0x6f34,	// (0x0006431e) input_focus_pane_cp1_vc

0x3b11,	// (0x00060efb) list_set_text_pane_vc

0x6f2a,	// (0x00064314) setting_text_pane_vc_g1

0x6f34,	// (0x0006431e) bg_set_opt_pane_cp2_vc

0x6f90,	// (0x0006437a) setting_slider_graphic_pane_vc_g1

0x3b1b,	// (0x00060f05) setting_slider_graphic_pane_vc_t1

0x3b2b,	// (0x00060f15) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9c9,	// (0x0006cdb3) setting_slider_graphic_pane_vc_t

0x3b3b,	// (0x00060f25) slider_set_pane_cp_vc

0x3b43,	// (0x00060f2d) slider_set_pane_vc_g1

0x3b4c,	// (0x00060f36) slider_set_pane_vc_g2

0x0006,

0xf9ce,	// (0x0006cdb8) slider_set_pane_vc_g

0x8090,	// (0x0006547a) set_opt_bg_pane_g1_copy1

0x8098,	// (0x00065482) set_opt_bg_pane_g2_copy1

0x3b78,	// (0x00060f62) set_opt_bg_pane_g3_copy1

0x80a8,	// (0x00065492) set_opt_bg_pane_g4_copy1

0x80b0,	// (0x0006549a) set_opt_bg_pane_g5_copy1

0x80b8,	// (0x000654a2) set_opt_bg_pane_g6_copy1

0x3b80,	// (0x00060f6a) set_opt_bg_pane_g7_copy1

0x3b8a,	// (0x00060f74) set_opt_bg_pane_g8_copy1

0x3b92,	// (0x00060f7c) set_opt_bg_pane_g9_copy1

0x6f34,	// (0x0006431e) bg_set_opt_pane_cp_vc

0x3b9a,	// (0x00060f84) setting_slider_pane_vc_t1

0x3ba9,	// (0x00060f93) setting_slider_pane_vc_t2

0x3bb9,	// (0x00060fa3) setting_slider_pane_vc_t3

0x0002,

0xf9dd,	// (0x0006cdc7) setting_slider_pane_vc_t

0x3bc9,	// (0x00060fb3) slider_set_pane_vc

0x06eb,	// (0x0005dad5) volume_set_pane_vc_g1

0x0ab4,	// (0x0005de9e) volume_set_pane_vc_g2

0x0abd,	// (0x0005dea7) volume_set_pane_vc_g3

0x0ac6,	// (0x0005deb0) volume_set_pane_vc_g4

0x0acf,	// (0x0005deb9) volume_set_pane_vc_g5

0x0ad8,	// (0x0005dec2) volume_set_pane_vc_g6

0x0ae1,	// (0x0005decb) volume_set_pane_vc_g7

0x0aea,	// (0x0005ded4) volume_set_pane_vc_g8

0x0af3,	// (0x0005dedd) volume_set_pane_vc_g9

0x0afc,	// (0x0005dee6) volume_set_pane_vc_g10

0x0009,

0xf9e4,	// (0x0006cdce) volume_set_pane_vc_g

0x3bd1,	// (0x00060fbb) volume_set_pane_vc

0x3bdb,	// (0x00060fc5) button_value_adjust_pane_cp1_vc

0x3be5,	// (0x00060fcf) list_highlight_pane_cp2_vc

0x3bee,	// (0x00060fd8) list_set_pane_vc_ParamLimits

0x3bee,	// (0x00060fd8) list_set_pane_vc

0x3c4c,	// (0x00061036) main_pane_set_vc_t1_ParamLimits

0x3c4c,	// (0x00061036) main_pane_set_vc_t1

0x3c61,	// (0x0006104b) main_pane_set_vc_t2_ParamLimits

0x3c61,	// (0x0006104b) main_pane_set_vc_t2

0x3c73,	// (0x0006105d) main_pane_set_vc_t3_ParamLimits

0x3c73,	// (0x0006105d) main_pane_set_vc_t3

0x3c85,	// (0x0006106f) main_pane_set_vc_t4_ParamLimits

0x3c85,	// (0x0006106f) main_pane_set_vc_t4

0x0003,

0xf9f9,	// (0x0006cde3) main_pane_set_vc_t_ParamLimits

0xf9f9,	// (0x0006cde3) main_pane_set_vc_t

0x3c97,	// (0x00061081) setting_code_pane_vc_ParamLimits

0x3c97,	// (0x00061081) setting_code_pane_vc

0x3ca6,	// (0x00061090) setting_slider_graphic_pane_vc

0x3ca6,	// (0x00061090) setting_slider_pane_vc

0x3ca6,	// (0x00061090) setting_text_pane_vc

0x3ca6,	// (0x00061090) setting_volume_pane_vc

0x3cae,	// (0x00061098) scroll_pane_cp121_vc

0x8012,	// (0x000653fc) set_content_pane_vc

0x3d36,	// (0x00061120) button_value_adjust_pane_g1

0x3d3f,	// (0x00061129) button_value_adjust_pane_g2

0x0001,

0xfa55,	// (0x0006ce3f) button_value_adjust_pane_g

0x3d48,	// (0x00061132) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3d48,	// (0x00061132) form_field_slider_wide_pane_vc_t1

0x3d5c,	// (0x00061146) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3d5c,	// (0x00061146) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5a,	// (0x0006ce44) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5a,	// (0x0006ce44) form_field_slider_wide_pane_vc_t

0x70ac,	// (0x00064496) input_focus_pane_cp10_vc_ParamLimits

0x70ac,	// (0x00064496) input_focus_pane_cp10_vc

0x3d8a,	// (0x00061174) slider_cont_pane_cp1_vc_ParamLimits

0x3d8a,	// (0x00061174) slider_cont_pane_cp1_vc

0x3d9c,	// (0x00061186) slider_form_pane_g1_cp2

0x3b4c,	// (0x00060f36) slider_form_pane_g2_cp2

0x3dc9,	// (0x000611b3) form_field_slider_pane_vc_t3

0x3dd7,	// (0x000611c1) form_field_slider_pane_vc_t4

0x3de5,	// (0x000611cf) slider_form_pane_vc_ParamLimits

0x3de5,	// (0x000611cf) slider_form_pane_vc

0x3df2,	// (0x000611dc) form_field_slider_pane_vc_t1_ParamLimits

0x3df2,	// (0x000611dc) form_field_slider_pane_vc_t1

0x3d5c,	// (0x00061146) form_field_slider_pane_vc_t2_ParamLimits

0x3d5c,	// (0x00061146) form_field_slider_pane_vc_t2

0x0001,

0xfa6c,	// (0x0006ce56) form_field_slider_pane_vc_t_ParamLimits

0xfa6c,	// (0x0006ce56) form_field_slider_pane_vc_t

0x70ac,	// (0x00064496) input_focus_pane_cp9_vc_ParamLimits

0x70ac,	// (0x00064496) input_focus_pane_cp9_vc

0x3e0e,	// (0x000611f8) slider_cont_pane_vc_ParamLimits

0x3e0e,	// (0x000611f8) slider_cont_pane_vc

0x3e22,	// (0x0006120c) list_form_graphic_pane_cp_vc_ParamLimits

0x3e22,	// (0x0006120c) list_form_graphic_pane_cp_vc

0x204f,	// (0x0005f439) form_field_popup_wide_pane_vc_g1

0x3e37,	// (0x00061221) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3e37,	// (0x00061221) form_field_popup_wide_pane_vc_t1

0x8038,	// (0x00065422) input_focus_pane_cp8_vc_ParamLimits

0x8038,	// (0x00065422) input_focus_pane_cp8_vc

0x3e7c,	// (0x00061266) list_form_wide_pane_vc_ParamLimits

0x3e7c,	// (0x00061266) list_form_wide_pane_vc

0x3e88,	// (0x00061272) list_form_graphic_pane_vc_g1

0x3e90,	// (0x0006127a) list_form_graphic_pane_vc_t1_ParamLimits

0x3e90,	// (0x0006127a) list_form_graphic_pane_vc_t1

0x6f82,	// (0x0006436c) list_highlight_pane_cp5_vc_ParamLimits

0x6f82,	// (0x0006436c) list_highlight_pane_cp5_vc

0x3eac,	// (0x00061296) list_form_graphic_pane_vc_ParamLimits

0x3eac,	// (0x00061296) list_form_graphic_pane_vc

0x204f,	// (0x0005f439) form_field_popup_pane_vc_g1

0x3ec2,	// (0x000612ac) form_field_popup_pane_vc_t1_ParamLimits

0x3ec2,	// (0x000612ac) form_field_popup_pane_vc_t1

0x8038,	// (0x00065422) input_focus_pane_cp7_vc_ParamLimits

0x8038,	// (0x00065422) input_focus_pane_cp7_vc

0x3ed9,	// (0x000612c3) list_form_pane_vc_ParamLimits

0x3ed9,	// (0x000612c3) list_form_pane_vc

0x3ee5,	// (0x000612cf) data_form_pane_vc_t1_ParamLimits

0x3ee5,	// (0x000612cf) data_form_pane_vc_t1

0x8090,	// (0x0006547a) input_focus_pane_vc_g1

0x8098,	// (0x00065482) input_focus_pane_vc_g2

0x80a0,	// (0x0006548a) input_focus_pane_vc_g3

0x80a8,	// (0x00065492) input_focus_pane_vc_g4

0x80b0,	// (0x0006549a) input_focus_pane_vc_g5

0x80b8,	// (0x000654a2) input_focus_pane_vc_g6

0x80c0,	// (0x000654aa) input_focus_pane_vc_g7

0x80c8,	// (0x000654b2) input_focus_pane_vc_g8

0x80d0,	// (0x000654ba) input_focus_pane_vc_g9

0x6f2a,	// (0x00064314) input_focus_pane_vc_g10

0x0009,

0xf65d,	// (0x0006ca47) input_focus_pane_vc_g

0x2043,	// (0x0005f42d) data_form_pane_vc_ParamLimits

0x2043,	// (0x0005f42d) data_form_pane_vc

0x204f,	// (0x0005f439) form_field_data_pane_vc_g1

0x3f00,	// (0x000612ea) form_field_data_pane_vc_t1_ParamLimits

0x3f00,	// (0x000612ea) form_field_data_pane_vc_t1

0x8038,	// (0x00065422) input_focus_pane_vc_ParamLimits

0x8038,	// (0x00065422) input_focus_pane_vc

0x3f1a,	// (0x00061304) button_value_adjust_pane_cp3_vc

0x3f22,	// (0x0006130c) button_value_adjust_pane_cp5_vc

0x3f2a,	// (0x00061314) form_field_data_pane_vc_ParamLimits

0x3f2a,	// (0x00061314) form_field_data_pane_vc

0x3f41,	// (0x0006132b) form_field_data_pane_vc_cp2

0x3f49,	// (0x00061333) form_field_data_wide_pane_vc_ParamLimits

0x3f49,	// (0x00061333) form_field_data_wide_pane_vc

0x3f5f,	// (0x00061349) form_field_data_wide_pane_vc_cp2

0x3f67,	// (0x00061351) form_field_popup_pane_vc_ParamLimits

0x3f67,	// (0x00061351) form_field_popup_pane_vc

0x3f7e,	// (0x00061368) form_field_popup_wide_pane_vc_ParamLimits

0x3f7e,	// (0x00061368) form_field_popup_wide_pane_vc

0x3f94,	// (0x0006137e) form_field_slider_pane_vc_ParamLimits

0x3f94,	// (0x0006137e) form_field_slider_pane_vc

0x3fa7,	// (0x00061391) form_field_slider_wide_pane_vc_ParamLimits

0x3fa7,	// (0x00061391) form_field_slider_wide_pane_vc

0xcbb2,	// (0x00069f9c) grid_touch_1_pane_ParamLimits

0xcbb2,	// (0x00069f9c) grid_touch_1_pane

0xcbc6,	// (0x00069fb0) grid_touch_2_pane_ParamLimits

0xcbc6,	// (0x00069fb0) grid_touch_2_pane

0x408b,	// (0x00061475) touch_pane_g1_ParamLimits

0x408b,	// (0x00061475) touch_pane_g1

0x3fde,	// (0x000613c8) cell_app_pane_cp_wide_ParamLimits

0x3fde,	// (0x000613c8) cell_app_pane_cp_wide

0x3fef,	// (0x000613d9) grid_popup_fast_wide_pane_ParamLimits

0x3fef,	// (0x000613d9) grid_popup_fast_wide_pane

0x4003,	// (0x000613ed) scroll_pane_cp19_ParamLimits

0x4003,	// (0x000613ed) scroll_pane_cp19

0x6f34,	// (0x0006431e) bg_popup_window_pane_cp20

0x4017,	// (0x00061401) listscroll_popup_fast_wide_pane

0xcbf0,	// (0x00069fda) grid_indicator_nsta_pane

0x4031,	// (0x0006141b) clock_nsta_pane_g1

0x403a,	// (0x00061424) clock_nsta_pane_t1

0xcbfc,	// (0x00069fe6) cell_indicator_nsta_pane_ParamLimits

0xcbfc,	// (0x00069fe6) cell_indicator_nsta_pane

0x408b,	// (0x00061475) cell_indicator_nsta_pane_g1

0xcc17,	// (0x0006a001) cell_indicator_nsta_pane_g2

0x0001,

0xfa7d,	// (0x0006ce67) cell_indicator_nsta_pane_g

0x40ab,	// (0x00061495) clock_nsta_pane_cp

0x40b4,	// (0x0006149e) indicator_nsta_pane_cp

0x40be,	// (0x000614a8) nsta_clock_indic_pane_g1

0x6fbe,	// (0x000643a8) grid_indicator_pane

0x9f0b,	// (0x000672f5) scroll_pane_cp29

0xf2e4,	// (0x0006c6ce) indicator_nsta_pane_cp2_ParamLimits

0xf2e4,	// (0x0006c6ce) indicator_nsta_pane_cp2

0x6f82,	// (0x0006436c) main_apps_wheel_pane

0xb21d,	// (0x00068607) form_midp_field_text_pane_ParamLimits

0x23b0,	// (0x0005f79a) scroll_bar_cp050_ParamLimits

0x4117,	// (0x00061501) cell_indicator_pane_ParamLimits

0x4117,	// (0x00061501) cell_indicator_pane

0x4130,	// (0x0006151a) cell_indicator_pane_g1

0xcc36,	// (0x0006a020) grid_wheel_folder_pane_ParamLimits

0xcc36,	// (0x0006a020) grid_wheel_folder_pane

0xcc44,	// (0x0006a02e) list_wheel_apps_pane_ParamLimits

0xcc44,	// (0x0006a02e) list_wheel_apps_pane

0xcc52,	// (0x0006a03c) main_apps_wheel_pane_g1_ParamLimits

0xcc52,	// (0x0006a03c) main_apps_wheel_pane_g1

0xcc5e,	// (0x0006a048) main_apps_wheel_pane_g2_ParamLimits

0xcc5e,	// (0x0006a048) main_apps_wheel_pane_g2

0x0001,

0xfa99,	// (0x0006ce83) main_apps_wheel_pane_g_ParamLimits

0xfa99,	// (0x0006ce83) main_apps_wheel_pane_g

0xcc6c,	// (0x0006a056) main_apps_wheel_pane_t1_ParamLimits

0xcc6c,	// (0x0006a056) main_apps_wheel_pane_t1

0xcc80,	// (0x0006a06a) list_wheel_apps_pane_g1

0xcc88,	// (0x0006a072) list_wheel_apps_pane_g2

0xcc90,	// (0x0006a07a) list_wheel_apps_pane_g3

0xcc98,	// (0x0006a082) list_wheel_apps_pane_g4

0xcca2,	// (0x0006a08c) list_wheel_apps_pane_g5

0x0004,

0xfa9e,	// (0x0006ce88) list_wheel_apps_pane_g

0xc1c4,	// (0x000695ae) navi_icon_text_pane

0xac61,	// (0x0006804b) aid_fill_nsta

0x41f7,	// (0x000615e1) navi_icon_text_pane_g1

0x4203,	// (0x000615ed) navi_icon_text_pane_t1

0xc0a8,	// (0x00069492) list_set_graphic_pane_t1_ParamLimits

0xc0a8,	// (0x00069492) list_set_graphic_pane_t1

0x2afb,	// (0x0005fee5) popup_midp_note_alarm_window_t6_ParamLimits

0x2afb,	// (0x0005fee5) popup_midp_note_alarm_window_t6

0x2b0d,	// (0x0005fef7) popup_midp_note_alarm_window_t7_ParamLimits

0x2b0d,	// (0x0005fef7) popup_midp_note_alarm_window_t7

0x2b1f,	// (0x0005ff09) popup_midp_note_alarm_window_t8_ParamLimits

0x2b1f,	// (0x0005ff09) popup_midp_note_alarm_window_t8

0x2b31,	// (0x0005ff1b) popup_midp_note_alarm_window_t9_ParamLimits

0x2b31,	// (0x0005ff1b) popup_midp_note_alarm_window_t9

0x2b43,	// (0x0005ff2d) popup_midp_note_alarm_window_t10_ParamLimits

0x2b43,	// (0x0005ff2d) popup_midp_note_alarm_window_t10

0x2b55,	// (0x0005ff3f) popup_midp_note_alarm_window_t11_ParamLimits

0x2b55,	// (0x0005ff3f) popup_midp_note_alarm_window_t11

0xc612,	// (0x000699fc) scroll_pane_cp17_ParamLimits

0xc612,	// (0x000699fc) scroll_pane_cp17

0x06eb,	// (0x0005dad5) volume_small_pane_cp_g1

0x0b05,	// (0x0005deef) volume_small_pane_cp_g2

0x0b0e,	// (0x0005def8) volume_small_pane_cp_g3

0x0b17,	// (0x0005df01) volume_small_pane_cp_g4

0x0b20,	// (0x0005df0a) volume_small_pane_cp_g5

0x0acf,	// (0x0005deb9) volume_small_pane_cp_g6

0x0b29,	// (0x0005df13) volume_small_pane_cp_g7

0x0b32,	// (0x0005df1c) volume_small_pane_cp_g8

0x0b3b,	// (0x0005df25) volume_small_pane_cp_g9

0x0b44,	// (0x0005df2e) volume_small_pane_cp_g10

0xc309,	// (0x000696f3) midp_ticker_pane_g1_ParamLimits

0xc315,	// (0x000696ff) midp_ticker_pane_g2_ParamLimits

0xf729,	// (0x0006cb13) midp_ticker_pane_g_ParamLimits

0xc321,	// (0x0006970b) midp_ticker_pane_t1_ParamLimits

0xac85,	// (0x0006806f) aid_fill_nsta_2

0x239c,	// (0x0005f786) list_form2_midp_pane

0x34af,	// (0x00060899) midp_editing_number_pane_ParamLimits

0x34be,	// (0x000608a8) midp_ticker_pane_ParamLimits

0x4215,	// (0x000615ff) form2_midp_field_pane

0x4239,	// (0x00061623) scroll_pane_cp51

0x4259,	// (0x00061643) form2_midp_button_pane_ParamLimits

0x4259,	// (0x00061643) form2_midp_button_pane

0x426b,	// (0x00061655) form2_midp_content_pane_ParamLimits

0x426b,	// (0x00061655) form2_midp_content_pane

0x4285,	// (0x0006166f) form2_midp_field_choice_group_pane

0x428d,	// (0x00061677) form2_midp_field_pane_g1

0x4295,	// (0x0006167f) form2_midp_field_pane_g2

0x429d,	// (0x00061687) form2_midp_field_pane_g3

0x42a5,	// (0x0006168f) form2_midp_field_pane_g4

0x0003,

0xfac3,	// (0x0006cead) form2_midp_field_pane_g

0x42ad,	// (0x00061697) form2_midp_gauge_slider_pane

0x42b5,	// (0x0006169f) form2_midp_gauge_wait_pane

0x42bd,	// (0x000616a7) form2_midp_image_pane_ParamLimits

0x42bd,	// (0x000616a7) form2_midp_image_pane

0xccd5,	// (0x0006a0bf) form2_midp_label_pane_ParamLimits

0xccd5,	// (0x0006a0bf) form2_midp_label_pane

0xccee,	// (0x0006a0d8) form2_midp_label_pane_cp_ParamLimits

0xccee,	// (0x0006a0d8) form2_midp_label_pane_cp

0x4312,	// (0x000616fc) form2_midp_string_pane_ParamLimits

0x4312,	// (0x000616fc) form2_midp_string_pane

0xb577,	// (0x00068961) form2_midp_text_pane_ParamLimits

0xb577,	// (0x00068961) form2_midp_text_pane

0x4324,	// (0x0006170e) form2_midp_time_pane

0x4334,	// (0x0006171e) input_focus_pane_cp51_ParamLimits

0x4334,	// (0x0006171e) input_focus_pane_cp51

0xcd0d,	// (0x0006a0f7) form2_midp_label_pane_t1_ParamLimits

0xcd0d,	// (0x0006a0f7) form2_midp_label_pane_t1

0xb590,	// (0x0006897a) form2_mdip_text_pane_t1_ParamLimits

0xb590,	// (0x0006897a) form2_mdip_text_pane_t1

0xecca,	// (0x0006c0b4) form2_midp_time_pane_t1

0x4395,	// (0x0006177f) form2_midp_gauge_slider_pane_t1

0xcd4d,	// (0x0006a137) form2_midp_gauge_slider_pane_t2

0xcd5f,	// (0x0006a149) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacc,	// (0x0006ceb6) form2_midp_gauge_slider_pane_t

0x43cb,	// (0x000617b5) form2_midp_slider_pane

0x43d7,	// (0x000617c1) form2_midp_gauge_wait_pane_t1

0x43e5,	// (0x000617cf) form2_midp_wait_pane_ParamLimits

0x43e5,	// (0x000617cf) form2_midp_wait_pane

0xcd71,	// (0x0006a15b) list_single_2graphic_pane_cp4_ParamLimits

0xcd71,	// (0x0006a15b) list_single_2graphic_pane_cp4

0xb15e,	// (0x00068548) list_single_midp_graphic_pane_cp_ParamLimits

0xb15e,	// (0x00068548) list_single_midp_graphic_pane_cp

0x6f34,	// (0x0006431e) list_highlight_pane_cp20

0x4438,	// (0x00061822) list_single_2graphic_pane_g1_cp4

0x3995,	// (0x00060d7f) list_single_2graphic_pane_g2_cp4

0x4440,	// (0x0006182a) list_single_2graphic_pane_t1_cp4

0x6f82,	// (0x0006436c) list_highlight_pane_cp21

0x444f,	// (0x00061839) list_single_midp_graphic_pane_g4_cp

0x445e,	// (0x00061848) list_single_midp_graphic_pane_t1_cp

0xcd86,	// (0x0006a170) form2_mdip_string_pane_t1_ParamLimits

0xcd86,	// (0x0006a170) form2_mdip_string_pane_t1

0x6f34,	// (0x0006431e) bg_wml_button_pane_cp2

0x6f2a,	// (0x00064314) form2_midp_image_pane_g1

0xe841,	// (0x0006bc2b) list_double_large_graphic_pane_g5_ParamLimits

0xe841,	// (0x0006bc2b) list_double_large_graphic_pane_g5

0xa1b3,	// (0x0006759d) midp_form_pane_ParamLimits

0x6f82,	// (0x0006436c) main_apps_wheel_pane_ParamLimits

0xa93f,	// (0x00067d29) popup_preview_window_ParamLimits

0xa93f,	// (0x00067d29) popup_preview_window

0xac0c,	// (0x00067ff6) popup_touch_info_window_ParamLimits

0xac0c,	// (0x00067ff6) popup_touch_info_window

0xac2a,	// (0x00068014) popup_touch_menu_window_ParamLimits

0xac2a,	// (0x00068014) popup_touch_menu_window

0x6f20,	// (0x0006430a) bg_popup_sub_pane_cp6

0x464f,	// (0x00061a39) list_touch_menu_pane

0xcdfc,	// (0x0006a1e6) list_single_touch_menu_pane_ParamLimits

0xcdfc,	// (0x0006a1e6) list_single_touch_menu_pane

0xce10,	// (0x0006a1fa) list_single_touch_menu_pane_t1

0x6f82,	// (0x0006436c) bg_popup_sub_pane_cp7_ParamLimits

0x6f82,	// (0x0006436c) bg_popup_sub_pane_cp7

0x467b,	// (0x00061a65) heading_sub_pane

0x4683,	// (0x00061a6d) list_touch_info_pane_ParamLimits

0x4683,	// (0x00061a6d) list_touch_info_pane

0x4692,	// (0x00061a7c) list_single_touch_info_pane_ParamLimits

0x4692,	// (0x00061a7c) list_single_touch_info_pane

0x46a4,	// (0x00061a8e) list_single_touch_info_pane_t1

0x46b2,	// (0x00061a9c) list_single_touch_info_pane_t2

0x0001,

0xfada,	// (0x0006cec4) list_single_touch_info_pane_t

0xc2f2,	// (0x000696dc) bg_popup_heading_pane_cp

0x46c0,	// (0x00061aaa) heading_sub_pane_t1

0x1fdd,	// (0x0005f3c7) bg_popup_preview_window_pane_cp_ParamLimits

0x1fdd,	// (0x0005f3c7) bg_popup_preview_window_pane_cp

0x467b,	// (0x00061a65) heading_preview_pane

0x4683,	// (0x00061a6d) list_preview_pane_ParamLimits

0x4683,	// (0x00061a6d) list_preview_pane

0x46ce,	// (0x00061ab8) popup_preview_window_g1

0x4692,	// (0x00061a7c) list_single_preview_pane_ParamLimits

0x4692,	// (0x00061a7c) list_single_preview_pane

0x46d6,	// (0x00061ac0) list_single_preview_pane_g1

0x46de,	// (0x00061ac8) list_single_preview_pane_t1

0x46a4,	// (0x00061a8e) list_single_preview_pane_t2

0x0001,

0xfadf,	// (0x0006cec9) list_single_preview_pane_t

0x46ec,	// (0x00061ad6) bg_popup_heading_pane_cp2_ParamLimits

0x46ec,	// (0x00061ad6) bg_popup_heading_pane_cp2

0x4702,	// (0x00061aec) heading_preview_pane_g1

0x470a,	// (0x00061af4) heading_preview_pane_t1_ParamLimits

0x470a,	// (0x00061af4) heading_preview_pane_t1

0x6fd5,	// (0x000643bf) soft_indicator_pane_t1_ParamLimits

0x7fb4,	// (0x0006539e) scroll_pane_ParamLimits

0x8351,	// (0x0006573b) scroll_sc2_left_pane

0x835a,	// (0x00065744) scroll_sc2_right_pane

0x8379,	// (0x00065763) scroll_bg_pane_g1_ParamLimits

0x838e,	// (0x00065778) scroll_bg_pane_g2_ParamLimits

0x83a6,	// (0x00065790) scroll_bg_pane_g3_ParamLimits

0xf6b4,	// (0x0006ca9e) scroll_bg_pane_g_ParamLimits

0x8379,	// (0x00065763) scroll_handle_pane_g1_ParamLimits

0x83bb,	// (0x000657a5) scroll_handle_pane_g2_ParamLimits

0x83a6,	// (0x00065790) scroll_handle_pane_g3_ParamLimits

0xf6bb,	// (0x0006caa5) scroll_handle_pane_g_ParamLimits

0xa50c,	// (0x000678f6) popup_choice_list_window_ParamLimits

0xa50c,	// (0x000678f6) popup_choice_list_window

0x1e9b,	// (0x0005f285) choice_list_pane

0x1f1d,	// (0x0005f307) cell_toolbar_pane_t1

0x1f45,	// (0x0005f32f) toolbar_button_pane_ParamLimits

0x3021,	// (0x0006040b) ai_gene_pane_1_t2_ParamLimits

0x3021,	// (0x0006040b) ai_gene_pane_1_t2

0x0001,

0xf8d7,	// (0x0006ccc1) ai_gene_pane_1_t_ParamLimits

0xf8d7,	// (0x0006ccc1) ai_gene_pane_1_t

0x4727,	// (0x00061b11) scroll_sc2_left_pane_g1

0x4727,	// (0x00061b11) scroll_sc2_right_pane_g1

0x8461,	// (0x0006584b) bg_popup_sub_pane_cp10

0x4731,	// (0x00061b1b) list_choice_list_pane

0xc9d3,	// (0x00069dbd) list_single_choice_list_pane_ParamLimits

0xc9d3,	// (0x00069dbd) list_single_choice_list_pane

0xce1e,	// (0x0006a208) list_single_choice_list_pane_g1

0x9d35,	// (0x0006711f) list_single_choice_list_pane_t1_ParamLimits

0x9d35,	// (0x0006711f) list_single_choice_list_pane_t1

0x4765,	// (0x00061b4f) choice_list_pane_g1

0xce26,	// (0x0006a210) choice_list_pane_t1

0x6f20,	// (0x0006430a) input_focus_pane_cp11

0x82c6,	// (0x000656b0) title_pane_stacon_g2_ParamLimits

0x82c6,	// (0x000656b0) title_pane_stacon_g2

0x0002,

0xf69a,	// (0x0006ca84) title_pane_stacon_g_ParamLimits

0xf69a,	// (0x0006ca84) title_pane_stacon_g

0xc2f2,	// (0x000696dc) cursor_press_pane

0xa5b3,	// (0x0006799d) popup_fep_hwr_window_ParamLimits

0xa5b3,	// (0x0006799d) popup_fep_hwr_window

0xf4e5,	// (0x0006c8cf) popup_fep_vkb_window_ParamLimits

0xf4e5,	// (0x0006c8cf) popup_fep_vkb_window

0xce34,	// (0x0006a21e) cursor_press_pane_g1

0x0002,

0xfb08,	// (0x0006cef2) fep_vkb_side_pane_g_ParamLimits

0x0bc1,	// (0x0005dfab) fep_hwr_candidate_pane_ParamLimits

0x0bc1,	// (0x0005dfab) fep_hwr_candidate_pane

0x0beb,	// (0x0005dfd5) fep_hwr_side_pane_ParamLimits

0x0beb,	// (0x0005dfd5) fep_hwr_side_pane

0x0c0b,	// (0x0005dff5) fep_hwr_top_pane_ParamLimits

0x0c0b,	// (0x0005dff5) fep_hwr_top_pane

0x0c23,	// (0x0005e00d) fep_hwr_write_pane_ParamLimits

0x0c23,	// (0x0005e00d) fep_hwr_write_pane

0xfb08,	// (0x0006cef2) fep_vkb_side_pane_g

0x4783,	// (0x00061b6d) fep_hwr_top_pane_g1

0x4795,	// (0x00061b7f) fep_hwr_top_pane_g2

0x0c5d,	// (0x0005e047) fep_hwr_top_pane_g3

0x0002,

0xfae4,	// (0x0006cece) fep_hwr_top_pane_g

0x0c72,	// (0x0005e05c) fep_hwr_top_text_pane

0xbeb5,	// (0x0006929f) fep_hwr_top_text_pane_g1

0x47cb,	// (0x00061bb5) fep_hwr_top_text_pane_t1

0x0d68,	// (0x0005e152) fep_hwr_candidate_pane_g1

0x4a10,	// (0x00061dfa) fep_vkb_keypad_pane_g3_ParamLimits

0x4a10,	// (0x00061dfa) fep_vkb_keypad_pane_g3

0x4a38,	// (0x00061e22) fep_vkb_keypad_pane_g4_ParamLimits

0x4a38,	// (0x00061e22) fep_vkb_keypad_pane_g4

0x4aa7,	// (0x00061e91) fep_vkb_bottom_pane_g2_ParamLimits

0x4aa7,	// (0x00061e91) fep_vkb_bottom_pane_g2

0x0001,

0xfb0f,	// (0x0006cef9) fep_vkb_bottom_pane_g_ParamLimits

0xfb0f,	// (0x0006cef9) fep_vkb_bottom_pane_g

0x4727,	// (0x00061b11) cell_vkb_side_pane_g2

0x0001,

0xfb19,	// (0x0006cf03) cell_vkb_side_pane_g

0x4b32,	// (0x00061f1c) cell_vkb_side_pane_t1

0x4b40,	// (0x00061f2a) cell_vkb_side_pane_t1_copy1

0x4727,	// (0x00061b11) bg_fep_vkb_candidate_pane_g2

0x4c6c,	// (0x00062056) cell_vkb_candidate_pane_ParamLimits

0x47d9,	// (0x00061bc3) aid_size_cell_vkb_ParamLimits

0x47d9,	// (0x00061bc3) aid_size_cell_vkb

0x4c6c,	// (0x00062056) cell_vkb_candidate_pane

0x0d8f,	// (0x0005e179) bg_popup_fep_shadow_pane_g1

0xce5b,	// (0x0006a245) fep_vkb_bottom_pane_ParamLimits

0xce5b,	// (0x0006a245) fep_vkb_bottom_pane

0x489d,	// (0x00061c87) fep_vkb_candidate_pane_ParamLimits

0x489d,	// (0x00061c87) fep_vkb_candidate_pane

0xce80,	// (0x0006a26a) fep_vkb_keypad_pane_ParamLimits

0xce80,	// (0x0006a26a) fep_vkb_keypad_pane

0xceb5,	// (0x0006a29f) fep_vkb_side_pane_ParamLimits

0xceb5,	// (0x0006a29f) fep_vkb_side_pane

0xcef1,	// (0x0006a2db) fep_vkb_top_pane_ParamLimits

0xcef1,	// (0x0006a2db) fep_vkb_top_pane

0x4969,	// (0x00061d53) fep_vkb_top_pane_g1_ParamLimits

0x4969,	// (0x00061d53) fep_vkb_top_pane_g1

0x4978,	// (0x00061d62) fep_vkb_top_pane_g2_ParamLimits

0x4978,	// (0x00061d62) fep_vkb_top_pane_g2

0x4987,	// (0x00061d71) fep_vkb_top_pane_g3_ParamLimits

0x4987,	// (0x00061d71) fep_vkb_top_pane_g3

0x0003,

0xfaff,	// (0x0006cee9) fep_vkb_top_pane_g_ParamLimits

0xfaff,	// (0x0006cee9) fep_vkb_top_pane_g

0x49a5,	// (0x00061d8f) fep_vkb_top_text_pane_ParamLimits

0x49a5,	// (0x00061d8f) fep_vkb_top_text_pane

0xcf26,	// (0x0006a310) fep_vkb_side_pane_g1_ParamLimits

0xcf26,	// (0x0006a310) fep_vkb_side_pane_g1

0x49ff,	// (0x00061de9) grid_vkb_side_pane_ParamLimits

0x49ff,	// (0x00061de9) grid_vkb_side_pane

0x0d97,	// (0x0005e181) bg_popup_fep_shadow_pane_g2

0x0da0,	// (0x0005e18a) bg_popup_fep_shadow_pane_g3

0x0da8,	// (0x0005e192) bg_popup_fep_shadow_pane_g4

0x0db1,	// (0x0005e19b) bg_popup_fep_shadow_pane_g5

0x0dbb,	// (0x0005e1a5) bg_popup_fep_shadow_pane_g6

0x0dc3,	// (0x0005e1ad) bg_popup_fep_shadow_pane_g7

0x80a8,	// (0x00065492) bg_popup_fep_shadow_pane_g8

0x4a56,	// (0x00061e40) grid_vkb_keypad_number_pane_ParamLimits

0x4a56,	// (0x00061e40) grid_vkb_keypad_number_pane

0x4a66,	// (0x00061e50) grid_vkb_keypad_pane_ParamLimits

0x4a66,	// (0x00061e50) grid_vkb_keypad_pane

0x4a8c,	// (0x00061e76) fep_vkb_bottom_pane_g1_ParamLimits

0x4a8c,	// (0x00061e76) fep_vkb_bottom_pane_g1

0x4ab5,	// (0x00061e9f) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4ab5,	// (0x00061e9f) grid_vkb_keypad_bottom_left_pane

0x4aca,	// (0x00061eb4) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4aca,	// (0x00061eb4) grid_vkb_keypad_bottom_right_pane

0x4adf,	// (0x00061ec9) fep_vkb_top_text_pane_g1

0xcf6d,	// (0x0006a357) fep_vkb_top_text_pane_t1

0xcf7f,	// (0x0006a369) cell_vkb_side_pane_ParamLimits

0xcf7f,	// (0x0006a369) cell_vkb_side_pane

0x4727,	// (0x00061b11) cell_vkb_side_pane_g1

0x4b4e,	// (0x00061f38) cell_vkb_keypad_pane_ParamLimits

0x4b4e,	// (0x00061f38) cell_vkb_keypad_pane

0x4bc3,	// (0x00061fad) cell_vkb_keypad_pane_g1

0x0008,

0xfb2c,	// (0x0006cf16) bg_popup_fep_shadow_pane_g

0x0dd5,	// (0x0005e1bf) cell_hwr_side_pane_g1

0x0dd5,	// (0x0005e1bf) cell_hwr_side_pane_g2

0x4bcd,	// (0x00061fb7) cell_vkb_keypad_pane_t1

0xcf95,	// (0x0006a37f) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcf95,	// (0x0006a37f) cell_vkb_keypad_bottom_left_pane

0xcfaa,	// (0x0006a394) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcfaa,	// (0x0006a394) cell_vkb_keypad_bottom_right_pane

0x4727,	// (0x00061b11) cell_vkb_keypad_bottom_left_pane_g1

0x4727,	// (0x00061b11) cell_vkb_keypad_bottom_right_pane_g1

0x4c31,	// (0x0006201b) cell_vkb_keypad_number_pane_ParamLimits

0x4c31,	// (0x0006201b) cell_vkb_keypad_number_pane

0x4c50,	// (0x0006203a) cell_vkb_keypad_number_pane_g1

0x4c5a,	// (0x00062044) cell_vkb_keypad_number_pane_g2

0x4c63,	// (0x0006204d) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1e,	// (0x0006cf08) cell_vkb_keypad_number_pane_g

0x4bcd,	// (0x00061fb7) cell_vkb_keypad_number_pane_t1

0x4c87,	// (0x00062071) fep_vkb_candidate_pane_g1

0x0001,

0xfb3f,	// (0x0006cf29) cell_hwr_side_pane_g

0x4ca0,	// (0x0006208a) cell_hwr_side_pane_t1

0x0ddf,	// (0x0005e1c9) cell_hwr_side_pane_t1_copy1

0x0ded,	// (0x0005e1d7) cell_hwr_candidate_pane_g1

0x0e1c,	// (0x0005e206) cell_hwr_candidate_pane_t1

0x4727,	// (0x00061b11) cell_vkb_candidate_pane_g2

0x4d05,	// (0x000620ef) cell_vkb_candidate_pane_t1

0x0b88,	// (0x0005df72) bg_popup_fep_shadow_pane_ParamLimits

0x0b88,	// (0x0005df72) bg_popup_fep_shadow_pane

0x0c3d,	// (0x0005e027) bg_fep_hwr_top_pane_g4

0x47a7,	// (0x00061b91) bg_hwr_side_pane_g1_ParamLimits

0x47a7,	// (0x00061b91) bg_hwr_side_pane_g1

0xb5c2,	// (0x000689ac) cell_hwr_side_pane_ParamLimits

0xb5c2,	// (0x000689ac) cell_hwr_side_pane

0x0ce9,	// (0x0005e0d3) fep_hwr_write_pane_g1_ParamLimits

0x0ce9,	// (0x0005e0d3) fep_hwr_write_pane_g1

0x0cf6,	// (0x0005e0e0) fep_hwr_write_pane_g2_ParamLimits

0x0cf6,	// (0x0005e0e0) fep_hwr_write_pane_g2

0x0d03,	// (0x0005e0ed) fep_hwr_write_pane_g3_ParamLimits

0x0d03,	// (0x0005e0ed) fep_hwr_write_pane_g3

0xb5e2,	// (0x000689cc) fep_hwr_write_pane_g4_ParamLimits

0xb5e2,	// (0x000689cc) fep_hwr_write_pane_g4

0x0005,

0xfaeb,	// (0x0006ced5) fep_hwr_write_pane_g_ParamLimits

0xfaeb,	// (0x0006ced5) fep_hwr_write_pane_g

0x0c3d,	// (0x0005e027) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0c3d,	// (0x0005e027) bg_fep_hwr_candidate_pane_g2

0x0d26,	// (0x0005e110) cell_hwr_candidate_pane_ParamLimits

0x0d26,	// (0x0005e110) cell_hwr_candidate_pane

0x0d68,	// (0x0005e152) fep_hwr_candidate_pane_g1_ParamLimits

0x4807,	// (0x00061bf1) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4807,	// (0x00061bf1) bg_popup_fep_shadow_pane_cp2

0x4997,	// (0x00061d81) fep_vkb_top_pane_g4_ParamLimits

0x4997,	// (0x00061d81) fep_vkb_top_pane_g4

0x49dd,	// (0x00061dc7) fep_vkb_side_pane_g2_ParamLimits

0x49dd,	// (0x00061dc7) fep_vkb_side_pane_g2

0x9a40,	// (0x00066e2a) list_setting_pane_t4_ParamLimits

0x9a40,	// (0x00066e2a) list_setting_pane_t4

0x9ada,	// (0x00066ec4) list_setting_number_pane_t5_ParamLimits

0x9ada,	// (0x00066ec4) list_setting_number_pane_t5

0xbeec,	// (0x000692d6) list_double_heading_pane_cp2_ParamLimits

0xbeec,	// (0x000692d6) list_double_heading_pane_cp2

0xcfc5,	// (0x0006a3af) list_double_heading_pane_g1_cp2_ParamLimits

0xcfc5,	// (0x0006a3af) list_double_heading_pane_g1_cp2

0x4d13,	// (0x000620fd) list_double_heading_pane_g2_cp2_ParamLimits

0x4d13,	// (0x000620fd) list_double_heading_pane_g2_cp2

0x4d27,	// (0x00062111) list_double_heading_pane_t1_cp2_ParamLimits

0x4d27,	// (0x00062111) list_double_heading_pane_t1_cp2

0x4d3d,	// (0x00062127) list_double_heading_pane_t2_cp2_ParamLimits

0x4d3d,	// (0x00062127) list_double_heading_pane_t2_cp2

0x6f18,	// (0x00064302) aid_value_unit2

0xe7ce,	// (0x0006bbb8) popup_preview_fixed_window

0x70ba,	// (0x000644a4) bg_popup_preview_window_pane_cp02

0x4d4f,	// (0x00062139) list_preview_fixed_pane

0x4d95,	// (0x0006217f) list_empty_pane_fp_ParamLimits

0x4d95,	// (0x0006217f) list_empty_pane_fp

0x4d95,	// (0x0006217f) list_single_cale_day_pane_fp_ParamLimits

0x4d95,	// (0x0006217f) list_single_cale_day_pane_fp

0x4d95,	// (0x0006217f) list_single_graphic_heading_pane_fp_ParamLimits

0x4d95,	// (0x0006217f) list_single_graphic_heading_pane_fp

0x4d95,	// (0x0006217f) list_single_graphic_pane_fp_ParamLimits

0x4d95,	// (0x0006217f) list_single_graphic_pane_fp

0x4d95,	// (0x0006217f) list_single_heading_pane_fp_ParamLimits

0x4d95,	// (0x0006217f) list_single_heading_pane_fp

0x4d95,	// (0x0006217f) list_single_pane_fp_ParamLimits

0x4d95,	// (0x0006217f) list_single_pane_fp

0x4dab,	// (0x00062195) list_single_pane_fp_g1_ParamLimits

0x4dab,	// (0x00062195) list_single_pane_fp_g1

0xcfd1,	// (0x0006a3bb) list_single_pane_fp_g2_ParamLimits

0xcfd1,	// (0x0006a3bb) list_single_pane_fp_g2

0x4db7,	// (0x000621a1) list_single_pane_fp_g3_ParamLimits

0x4db7,	// (0x000621a1) list_single_pane_fp_g3

0x4dcb,	// (0x000621b5) list_single_pane_fp_g4_ParamLimits

0x4dcb,	// (0x000621b5) list_single_pane_fp_g4

0x0003,

0xfb52,	// (0x0006cf3c) list_single_pane_fp_g_ParamLimits

0xfb52,	// (0x0006cf3c) list_single_pane_fp_g

0xecdd,	// (0x0006c0c7) list_single_pane_fp_t1_ParamLimits

0xecdd,	// (0x0006c0c7) list_single_pane_fp_t1

0xecf4,	// (0x0006c0de) list_single_graphic_pane_fp_g1_ParamLimits

0xecf4,	// (0x0006c0de) list_single_graphic_pane_fp_g1

0x4dab,	// (0x00062195) list_single_graphic_pane_fp_g2_ParamLimits

0x4dab,	// (0x00062195) list_single_graphic_pane_fp_g2

0xcfd1,	// (0x0006a3bb) list_single_graphic_pane_fp_g3_ParamLimits

0xcfd1,	// (0x0006a3bb) list_single_graphic_pane_fp_g3

0x4db7,	// (0x000621a1) list_single_graphic_pane_fp_g4_ParamLimits

0x4db7,	// (0x000621a1) list_single_graphic_pane_fp_g4

0x4dcb,	// (0x000621b5) list_single_graphic_pane_fp_g5_ParamLimits

0x4dcb,	// (0x000621b5) list_single_graphic_pane_fp_g5

0x0004,

0xfb5b,	// (0x0006cf45) list_single_graphic_pane_fp_g_ParamLimits

0xfb5b,	// (0x0006cf45) list_single_graphic_pane_fp_g

0xed00,	// (0x0006c0ea) list_single_graphic_pane_fp_t1_ParamLimits

0xed00,	// (0x0006c0ea) list_single_graphic_pane_fp_t1

0xecf4,	// (0x0006c0de) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xecf4,	// (0x0006c0de) list_single_graphic_heading_pane_fp_g1

0x4dab,	// (0x00062195) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4dab,	// (0x00062195) list_single_graphic_heading_pane_fp_g2

0xcfd1,	// (0x0006a3bb) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xcfd1,	// (0x0006a3bb) list_single_graphic_heading_pane_fp_g3

0x4db7,	// (0x000621a1) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4db7,	// (0x000621a1) list_single_graphic_heading_pane_fp_g4

0x4dcb,	// (0x000621b5) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4dcb,	// (0x000621b5) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb5b,	// (0x0006cf45) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb5b,	// (0x0006cf45) list_single_graphic_heading_pane_fp_g

0xed16,	// (0x0006c100) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xed16,	// (0x0006c100) list_single_graphic_heading_pane_fp_t1

0xed2c,	// (0x0006c116) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xed2c,	// (0x0006c116) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb66,	// (0x0006cf50) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb66,	// (0x0006cf50) list_single_graphic_heading_pane_fp_t

0xed3e,	// (0x0006c128) list_single_cale_day_pane_fp_g1_ParamLimits

0xed3e,	// (0x0006c128) list_single_cale_day_pane_fp_g1

0x4dd7,	// (0x000621c1) list_single_cale_day_pane_fp_g2_ParamLimits

0x4dd7,	// (0x000621c1) list_single_cale_day_pane_fp_g2

0x457a,	// (0x00061964) list_single_cale_day_pane_fp_g3_ParamLimits

0x457a,	// (0x00061964) list_single_cale_day_pane_fp_g3

0x45a2,	// (0x0006198c) list_single_cale_day_pane_fp_g4_ParamLimits

0x45a2,	// (0x0006198c) list_single_cale_day_pane_fp_g4

0x45c6,	// (0x000619b0) list_single_cale_day_pane_fp_g5_ParamLimits

0x45c6,	// (0x000619b0) list_single_cale_day_pane_fp_g5

0x0004,

0xfb6b,	// (0x0006cf55) list_single_cale_day_pane_fp_g_ParamLimits

0xfb6b,	// (0x0006cf55) list_single_cale_day_pane_fp_g

0xed76,	// (0x0006c160) list_single_cale_day_pane_fp_t1_ParamLimits

0xed76,	// (0x0006c160) list_single_cale_day_pane_fp_t1

0xed9c,	// (0x0006c186) list_single_cale_day_pane_fp_t2_ParamLimits

0xed9c,	// (0x0006c186) list_single_cale_day_pane_fp_t2

0xedb5,	// (0x0006c19f) list_single_cale_day_pane_fp_t3_ParamLimits

0xedb5,	// (0x0006c19f) list_single_cale_day_pane_fp_t3

0x0002,

0xfb76,	// (0x0006cf60) list_single_cale_day_pane_fp_t_ParamLimits

0xfb76,	// (0x0006cf60) list_single_cale_day_pane_fp_t

0x4dab,	// (0x00062195) list_empty_pane_fp_g1_ParamLimits

0x4dab,	// (0x00062195) list_empty_pane_fp_g1

0xedce,	// (0x0006c1b8) list_empty_pane_fp_t1

0xeddc,	// (0x0006c1c6) list_empty_pane_fp_t2

0x0001,

0xfb7d,	// (0x0006cf67) list_empty_pane_fp_t

0x4dab,	// (0x00062195) list_single_heading_pane_fp_g1_ParamLimits

0x4dab,	// (0x00062195) list_single_heading_pane_fp_g1

0xcfd1,	// (0x0006a3bb) list_single_heading_pane_fp_g2_ParamLimits

0xcfd1,	// (0x0006a3bb) list_single_heading_pane_fp_g2

0x4db7,	// (0x000621a1) list_single_heading_pane_fp_g3_ParamLimits

0x4db7,	// (0x000621a1) list_single_heading_pane_fp_g3

0x0002,

0xfb82,	// (0x0006cf6c) list_single_heading_pane_fp_g_ParamLimits

0xfb82,	// (0x0006cf6c) list_single_heading_pane_fp_g

0xedea,	// (0x0006c1d4) list_single_heading_pane_fp_t1_ParamLimits

0xedea,	// (0x0006c1d4) list_single_heading_pane_fp_t1

0xedfc,	// (0x0006c1e6) list_single_heading_pane_fp_t2_ParamLimits

0xedfc,	// (0x0006c1e6) list_single_heading_pane_fp_t2

0x0001,

0xfb89,	// (0x0006cf73) list_single_heading_pane_fp_t_ParamLimits

0xfb89,	// (0x0006cf73) list_single_heading_pane_fp_t

0x9d81,	// (0x0006716b) aid_size_cell_fast

0x708f,	// (0x00064479) soft_indicator_pane_cp1_t1

0x9d8a,	// (0x00067174) cell_app_pane_cp2_ParamLimits

0x9d8a,	// (0x00067174) cell_app_pane_cp2

0x0baa,	// (0x0005df94) fep_hwr_candidate_drop_down_list_pane

0x0d82,	// (0x0005e16c) fep_hwr_candidate_pane_g3_ParamLimits

0x0d82,	// (0x0005e16c) fep_hwr_candidate_pane_g3

0xce3c,	// (0x0006a226) fep_hwr_candidate_pane_g4_ParamLimits

0xce3c,	// (0x0006a226) fep_hwr_candidate_pane_g4

0x0002,

0xfaf8,	// (0x0006cee2) fep_hwr_candidate_pane_g_ParamLimits

0xfaf8,	// (0x0006cee2) fep_hwr_candidate_pane_g

0x488c,	// (0x00061c76) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x488c,	// (0x00061c76) fep_vkb_candidate_drop_down_list_pane

0x4c8f,	// (0x00062079) fep_vkb_candidate_pane_g3

0x4c97,	// (0x00062081) fep_vkb_candidate_pane_g4

0x0002,

0xfb25,	// (0x0006cf0f) fep_vkb_candidate_pane_g

0x0ded,	// (0x0005e1d7) cell_hwr_candidate_pane_g1_ParamLimits

0x0dfb,	// (0x0005e1e5) cell_hwr_candidate_pane_g3_ParamLimits

0x0dfb,	// (0x0005e1e5) cell_hwr_candidate_pane_g3

0x4cae,	// (0x00062098) cell_hwr_candidate_pane_g4_ParamLimits

0x4cae,	// (0x00062098) cell_hwr_candidate_pane_g4

0x0002,

0xfb44,	// (0x0006cf2e) cell_hwr_candidate_pane_g_ParamLimits

0xfb44,	// (0x0006cf2e) cell_hwr_candidate_pane_g

0x4ccf,	// (0x000620b9) cell_vkb_candidate_pane_g3_ParamLimits

0x4ccf,	// (0x000620b9) cell_vkb_candidate_pane_g3

0x4cea,	// (0x000620d4) cell_vkb_candidate_pane_g4_ParamLimits

0x4cea,	// (0x000620d4) cell_vkb_candidate_pane_g4

0xcfdd,	// (0x0006a3c7) cell_app_pane_cp2_g1_ParamLimits

0xcfdd,	// (0x0006a3c7) cell_app_pane_cp2_g1

0x4e01,	// (0x000621eb) cell_app_pane_cp2_g2_ParamLimits

0x4e01,	// (0x000621eb) cell_app_pane_cp2_g2

0x0001,

0xfb8e,	// (0x0006cf78) cell_app_pane_cp2_g_ParamLimits

0xfb8e,	// (0x0006cf78) cell_app_pane_cp2_g

0x4e0d,	// (0x000621f7) cell_app_pane_cp2_t1_ParamLimits

0x4e0d,	// (0x000621f7) cell_app_pane_cp2_t1

0x8038,	// (0x00065422) grid_highlight_pane_cp1_ParamLimits

0x8038,	// (0x00065422) grid_highlight_pane_cp1

0x0e3a,	// (0x0005e224) cell_hwr_candidate_pane_cp1_ParamLimits

0x0e3a,	// (0x0005e224) cell_hwr_candidate_pane_cp1

0x0ded,	// (0x0005e1d7) fep_hwr_candidate_drop_down_list_pane_g1

0x0e59,	// (0x0005e243) fep_hwr_candidate_drop_down_list_pane_g2

0x0e66,	// (0x0005e250) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb93,	// (0x0006cf7d) fep_hwr_candidate_drop_down_list_pane_g

0x0e73,	// (0x0005e25d) fep_hwr_candidate_drop_down_list_scroll_pane

0x0e7c,	// (0x0005e266) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0e7c,	// (0x0005e266) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x0e89,	// (0x0005e273) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x0e89,	// (0x0005e273) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x0e96,	// (0x0005e280) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x0e96,	// (0x0005e280) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x0ea3,	// (0x0005e28d) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0ea3,	// (0x0005e28d) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x0ebe,	// (0x0005e2a8) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x0ebe,	// (0x0005e2a8) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x0ed9,	// (0x0005e2c3) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x0ed9,	// (0x0005e2c3) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x0ef4,	// (0x0005e2de) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x0ef4,	// (0x0005e2de) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x0f0f,	// (0x0005e2f9) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x0f0f,	// (0x0005e2f9) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9a,	// (0x0006cf84) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9a,	// (0x0006cf84) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4e1f,	// (0x00062209) cell_vkb_candidate_pane_cp1_ParamLimits

0x4e1f,	// (0x00062209) cell_vkb_candidate_pane_cp1

0x4997,	// (0x00061d81) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4997,	// (0x00061d81) fep_vkb_candidate_drop_down_list_pane_g1

0x4e3f,	// (0x00062229) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4e3f,	// (0x00062229) fep_vkb_candidate_drop_down_list_pane_g2

0x4e4c,	// (0x00062236) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4e4c,	// (0x00062236) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbab,	// (0x0006cf95) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbab,	// (0x0006cf95) fep_vkb_candidate_drop_down_list_pane_g

0x4e59,	// (0x00062243) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4e59,	// (0x00062243) fep_vkb_candidate_drop_down_list_scroll_pane

0x4e66,	// (0x00062250) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4e66,	// (0x00062250) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4e73,	// (0x0006225d) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4e73,	// (0x0006225d) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4e7f,	// (0x00062269) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4e7f,	// (0x00062269) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4e8b,	// (0x00062275) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4e8b,	// (0x00062275) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4eac,	// (0x00062296) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4eac,	// (0x00062296) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4ecd,	// (0x000622b7) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4ecd,	// (0x000622b7) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4eee,	// (0x000622d8) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4eee,	// (0x000622d8) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4f0f,	// (0x000622f9) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4f0f,	// (0x000622f9) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb2,	// (0x0006cf9c) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb2,	// (0x0006cf9c) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x90ab,	// (0x00066495) title_pane_g1_ParamLimits

0x90be,	// (0x000664a8) title_pane_g2_ParamLimits

0xf529,	// (0x0006c913) title_pane_g_ParamLimits

0xbea5,	// (0x0006928f) aid_call2_pane

0xbead,	// (0x00069297) aid_call_pane

0xbeb5,	// (0x0006929f) popup_clock_analogue_window_g1

0xbeb5,	// (0x0006929f) popup_clock_analogue_window_g2

0xf228,	// (0x0006c612) popup_clock_analogue_window_g3

0xf231,	// (0x0006c61b) popup_clock_analogue_window_g4

0x6f2a,	// (0x00064314) popup_clock_analogue_window_g5

0x0004,

0xf6c9,	// (0x0006cab3) popup_clock_analogue_window_g

0xf239,	// (0x0006c623) popup_clock_analogue_window_t1

0xf247,	// (0x0006c631) clock_digital_number_pane_ParamLimits

0xf247,	// (0x0006c631) clock_digital_number_pane

0xf253,	// (0x0006c63d) clock_digital_number_pane_cp02_ParamLimits

0xf253,	// (0x0006c63d) clock_digital_number_pane_cp02

0xf25f,	// (0x0006c649) clock_digital_number_pane_cp03_ParamLimits

0xf25f,	// (0x0006c649) clock_digital_number_pane_cp03

0xf26b,	// (0x0006c655) clock_digital_number_pane_cp04_ParamLimits

0xf26b,	// (0x0006c655) clock_digital_number_pane_cp04

0xf277,	// (0x0006c661) clock_digital_separator_pane_ParamLimits

0xf277,	// (0x0006c661) clock_digital_separator_pane

0xf283,	// (0x0006c66d) popup_clock_digital_window_t1_ParamLimits

0xf283,	// (0x0006c66d) popup_clock_digital_window_t1

0x6f2a,	// (0x00064314) clock_digital_number_pane_g1

0x6f2a,	// (0x00064314) clock_digital_number_pane_g2

0x0001,

0xf6d4,	// (0x0006cabe) clock_digital_number_pane_g

0x6f2a,	// (0x00064314) clock_digital_separator_pane_g1

0x6f2a,	// (0x00064314) clock_digital_separator_pane_g2

0x0001,

0xf6d4,	// (0x0006cabe) clock_digital_separator_pane_g

0xac61,	// (0x0006804b) aid_fill_nsta_ParamLimits

0xad97,	// (0x00068181) indicator_nsta_pane_ParamLimits

0x1d2b,	// (0x0005f115) popup_clock_analogue_window

0x1d2b,	// (0x0005f115) popup_clock_digital_window

0xcbf0,	// (0x00069fda) grid_indicator_nsta_pane_ParamLimits

0x4048,	// (0x00061432) clock_nsta_pane_t2

0x0001,

0xfa78,	// (0x0006ce62) clock_nsta_pane_t

0xf209,	// (0x0006c5f3) aid_size_max_handle

0x9e68,	// (0x00067252) aid_size_min_handle

0xc2f2,	// (0x000696dc) editor_scroll_pane

0x4f2a,	// (0x00062314) ex_editor_pane

0x816a,	// (0x00065554) scroll_pane_cp13

0x7fe0,	// (0x000653ca) scroll_pane_cp14

0xbee4,	// (0x000692ce) scroll_pane_cp36

0x9f32,	// (0x0006731c) list_single_graphic_hl_pane_cp2_ParamLimits

0x9f32,	// (0x0006731c) list_single_graphic_hl_pane_cp2

0xb509,	// (0x000688f3) list_single_graphic_hl_pane_ParamLimits

0xb509,	// (0x000688f3) list_single_graphic_hl_pane

0xb5f7,	// (0x000689e1) aid_size_min_hl_cp1

0x4f32,	// (0x0006231c) list_highlight_pane_cp34_ParamLimits

0x4f32,	// (0x0006231c) list_highlight_pane_cp34

0x4f43,	// (0x0006232d) list_single_graphic_hl_pane_g1_ParamLimits

0x4f43,	// (0x0006232d) list_single_graphic_hl_pane_g1

0xb600,	// (0x000689ea) list_single_graphic_hl_pane_g2_ParamLimits

0xb600,	// (0x000689ea) list_single_graphic_hl_pane_g2

0xb600,	// (0x000689ea) list_single_graphic_hl_pane_g3_ParamLimits

0xb600,	// (0x000689ea) list_single_graphic_hl_pane_g3

0xc27d,	// (0x00069667) list_single_graphic_hl_pane_g4_ParamLimits

0xc27d,	// (0x00069667) list_single_graphic_hl_pane_g4

0xcffb,	// (0x0006a3e5) list_single_graphic_hl_pane_g5_ParamLimits

0xcffb,	// (0x0006a3e5) list_single_graphic_hl_pane_g5

0x0004,

0xfbc3,	// (0x0006cfad) list_single_graphic_hl_pane_g_ParamLimits

0xfbc3,	// (0x0006cfad) list_single_graphic_hl_pane_g

0xb60c,	// (0x000689f6) list_single_graphic_hl_pane_t1_ParamLimits

0xb60c,	// (0x000689f6) list_single_graphic_hl_pane_t1

0x4f50,	// (0x0006233a) aid_size_min_hl_cp2

0x4f59,	// (0x00062343) list_highlight_pane_cp34_cp2_ParamLimits

0x4f59,	// (0x00062343) list_highlight_pane_cp34_cp2

0x4f43,	// (0x0006232d) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4f43,	// (0x0006232d) list_single_graphic_hl_pane_g1_cp2

0x4f66,	// (0x00062350) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4f66,	// (0x00062350) list_single_graphic_hl_pane_g2_cp2

0xd00f,	// (0x0006a3f9) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd00f,	// (0x0006a3f9) list_single_graphic_hl_pane_g3_cp2

0xbe8c,	// (0x00069276) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xbe8c,	// (0x00069276) list_single_graphic_hl_pane_g4_cp2

0x4f80,	// (0x0006236a) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4f80,	// (0x0006236a) list_single_graphic_hl_pane_g5_cp2

0xa384,	// (0x0006776e) control_pane_g4_ParamLimits

0xa384,	// (0x0006776e) control_pane_g4

0x8461,	// (0x0006584b) bg_popup_sub_pane_cp10_ParamLimits

0x4731,	// (0x00061b1b) list_choice_list_pane_ParamLimits

0x4740,	// (0x00061b2a) scroll_pane_cp23

0x70ba,	// (0x000644a4) bg_popup_preview_window_pane_cp02_ParamLimits

0x4d4f,	// (0x00062139) list_preview_fixed_pane_ParamLimits

0x4d65,	// (0x0006214f) list_preview_fixed_pane_cp_ParamLimits

0x4d65,	// (0x0006214f) list_preview_fixed_pane_cp

0x4d71,	// (0x0006215b) popup_preview_fixed_window_g1_ParamLimits

0x4d71,	// (0x0006215b) popup_preview_fixed_window_g1

0x4d7d,	// (0x00062167) popup_preview_fixed_window_g2_ParamLimits

0x4d7d,	// (0x00062167) popup_preview_fixed_window_g2

0x0002,

0xfb4b,	// (0x0006cf35) popup_preview_fixed_window_g_ParamLimits

0xfb4b,	// (0x0006cf35) popup_preview_fixed_window_g

0xf17d,	// (0x0006c567) aid_navi_side_left_pane_ParamLimits

0xf192,	// (0x0006c57c) aid_navi_side_right_pane_ParamLimits

0xf1aa,	// (0x0006c594) navi_icon_pane_stacon_ParamLimits

0xf1be,	// (0x0006c5a8) navi_navi_pane_stacon_ParamLimits

0xf1aa,	// (0x0006c594) navi_text_pane_stacon_ParamLimits

0xe6f3,	// (0x0006badd) main_text_info_pane

0x4faa,	// (0x00062394) listscroll_text_info_pane

0x4fb2,	// (0x0006239c) list_text_info_pane_ParamLimits

0x4fb2,	// (0x0006239c) list_text_info_pane

0x4fc1,	// (0x000623ab) scroll_pane_cp24_ParamLimits

0x4fc1,	// (0x000623ab) scroll_pane_cp24

0xd01d,	// (0x0006a407) list_text_info_pane_t1_ParamLimits

0xd01d,	// (0x0006a407) list_text_info_pane_t1

0xa528,	// (0x00067912) popup_fast_swap2_window_ParamLimits

0xa528,	// (0x00067912) popup_fast_swap2_window

0x5013,	// (0x000623fd) aid_size_cell_fast2

0x6f20,	// (0x0006430a) bg_popup_window_pane_cp17

0x23d0,	// (0x0005f7ba) heading_pane_cp2

0x23d8,	// (0x0005f7c2) listscroll_fast2_pane

0x501d,	// (0x00062407) grid_fast2_pane

0x5027,	// (0x00062411) listscroll_fast2_pane_g1

0x502f,	// (0x00062419) listscroll_fast2_pane_g2

0x0001,

0xfbce,	// (0x0006cfb8) listscroll_fast2_pane_g

0x816a,	// (0x00065554) scroll_pane_cp26

0x5039,	// (0x00062423) cell_fast2_pane_ParamLimits

0x5039,	// (0x00062423) cell_fast2_pane

0x504e,	// (0x00062438) cell_fast2_pane_g1

0x5057,	// (0x00062441) cell_fast2_pane_g2

0x5060,	// (0x0006244a) cell_fast2_pane_g3

0x0002,

0xfbd3,	// (0x0006cfbd) cell_fast2_pane_g

0x7f17,	// (0x00065301) grid_highlight_pane_cp9

0xf4cd,	// (0x0006c8b7) main_eswt_pane_ParamLimits

0xf4cd,	// (0x0006c8b7) main_eswt_pane

0x4fd6,	// (0x000623c0) list_single_text_info_pane

0x5068,	// (0x00062452) eswt_ctrl_button_pane

0x5068,	// (0x00062452) eswt_ctrl_canvas_pane

0xd039,	// (0x0006a423) eswt_ctrl_combo_pane

0x5068,	// (0x00062452) eswt_ctrl_default_pane

0x5068,	// (0x00062452) eswt_ctrl_label_pane

0x5078,	// (0x00062462) eswt_ctrl_wait_pane

0xd041,	// (0x0006a42b) eswt_shell_pane

0x6f20,	// (0x0006430a) listscroll_eswt_app_pane

0x50a0,	// (0x0006248a) popup_eswt_tasktip_window_ParamLimits

0x50a0,	// (0x0006248a) popup_eswt_tasktip_window

0x1fdd,	// (0x0005f3c7) bg_popup_window_pane_cp18

0x50b1,	// (0x0006249b) eswt_control_pane_g1_ParamLimits

0x50b1,	// (0x0006249b) eswt_control_pane_g1

0x50be,	// (0x000624a8) eswt_control_pane_g2_ParamLimits

0x50be,	// (0x000624a8) eswt_control_pane_g2

0x50cb,	// (0x000624b5) eswt_control_pane_g3_ParamLimits

0x50cb,	// (0x000624b5) eswt_control_pane_g3

0x50d8,	// (0x000624c2) eswt_control_pane_g4_ParamLimits

0x50d8,	// (0x000624c2) eswt_control_pane_g4

0x0003,

0xfbda,	// (0x0006cfc4) eswt_control_pane_g_ParamLimits

0xfbda,	// (0x0006cfc4) eswt_control_pane_g

0x8038,	// (0x00065422) bg_button_pane_ParamLimits

0x8038,	// (0x00065422) bg_button_pane

0x7f2c,	// (0x00065316) common_borders_pane_copy2_ParamLimits

0x7f2c,	// (0x00065316) common_borders_pane_copy2

0x50e5,	// (0x000624cf) control_button_pane_g1_ParamLimits

0x50e5,	// (0x000624cf) control_button_pane_g1

0x50f1,	// (0x000624db) control_button_pane_g2_ParamLimits

0x50f1,	// (0x000624db) control_button_pane_g2

0x50fd,	// (0x000624e7) control_button_pane_g3_ParamLimits

0x50fd,	// (0x000624e7) control_button_pane_g3

0x0002,

0xfbe3,	// (0x0006cfcd) control_button_pane_g_ParamLimits

0xfbe3,	// (0x0006cfcd) control_button_pane_g

0x5111,	// (0x000624fb) control_button_pane_t1

0x511f,	// (0x00062509) control_button_pane_t2

0x0001,

0xfbea,	// (0x0006cfd4) control_button_pane_t

0x1f51,	// (0x0005f33b) bg_button_pane_g1

0x1f61,	// (0x0005f34b) bg_button_pane_g2

0x1f59,	// (0x0005f343) bg_button_pane_g3

0x1f71,	// (0x0005f35b) bg_button_pane_g4

0x1f69,	// (0x0005f353) bg_button_pane_g5

0x1f79,	// (0x0005f363) bg_button_pane_g6

0x1f81,	// (0x0005f36b) bg_button_pane_g7

0x1f91,	// (0x0005f37b) bg_button_pane_g8

0x1f89,	// (0x0005f373) bg_button_pane_g9

0x0008,

0xf82b,	// (0x0006cc15) bg_button_pane_g

0x46ec,	// (0x00061ad6) common_borders_pane_ParamLimits

0x46ec,	// (0x00061ad6) common_borders_pane

0x50b1,	// (0x0006249b) eswt_control_pane_g1_copy1_ParamLimits

0x50b1,	// (0x0006249b) eswt_control_pane_g1_copy1

0x50be,	// (0x000624a8) eswt_control_pane_g2_copy1_ParamLimits

0x50be,	// (0x000624a8) eswt_control_pane_g2_copy1

0x50cb,	// (0x000624b5) eswt_control_pane_g3_copy1_ParamLimits

0x50cb,	// (0x000624b5) eswt_control_pane_g3_copy1

0x50d8,	// (0x000624c2) eswt_control_pane_g4_copy1_ParamLimits

0x50d8,	// (0x000624c2) eswt_control_pane_g4_copy1

0x4727,	// (0x00061b11) bg_eswt_ctrl_canvas_pane_g1

0x46ec,	// (0x00061ad6) common_borders_pane_cp2_ParamLimits

0x46ec,	// (0x00061ad6) common_borders_pane_cp2

0x46ec,	// (0x00061ad6) common_borders_pane_cp3_ParamLimits

0x46ec,	// (0x00061ad6) common_borders_pane_cp3

0x512d,	// (0x00062517) separator_horizontal_pane

0x5135,	// (0x0006251f) separator_vertical_pane

0x50b1,	// (0x0006249b) eswt_control_pane_g1_copy2_ParamLimits

0x50b1,	// (0x0006249b) eswt_control_pane_g1_copy2

0x50be,	// (0x000624a8) eswt_control_pane_g2_copy2_ParamLimits

0x50be,	// (0x000624a8) eswt_control_pane_g2_copy2

0x50cb,	// (0x000624b5) eswt_control_pane_g3_copy2_ParamLimits

0x50cb,	// (0x000624b5) eswt_control_pane_g3_copy2

0x50d8,	// (0x000624c2) eswt_control_pane_g4_copy2_ParamLimits

0x50d8,	// (0x000624c2) eswt_control_pane_g4_copy2

0x6f20,	// (0x0006430a) common_borders_pane_cp4

0x513e,	// (0x00062528) separator_horizontal_pane_g1

0x5147,	// (0x00062531) separator_horizontal_pane_g2

0x5150,	// (0x0006253a) separator_horizontal_pane_g3

0x0002,

0xfbef,	// (0x0006cfd9) separator_horizontal_pane_g

0x50b1,	// (0x0006249b) eswt_control_pane_g1_copy3_ParamLimits

0x50b1,	// (0x0006249b) eswt_control_pane_g1_copy3

0x50be,	// (0x000624a8) eswt_control_pane_g2_copy3_ParamLimits

0x50be,	// (0x000624a8) eswt_control_pane_g2_copy3

0x50cb,	// (0x000624b5) eswt_control_pane_g3_copy3_ParamLimits

0x50cb,	// (0x000624b5) eswt_control_pane_g3_copy3

0x50d8,	// (0x000624c2) eswt_control_pane_g4_copy3_ParamLimits

0x50d8,	// (0x000624c2) eswt_control_pane_g4_copy3

0x6f20,	// (0x0006430a) common_borders_pane_cp5

0x5159,	// (0x00062543) separator_vertical_pane_g1

0x5162,	// (0x0006254c) separator_vertical_pane_g2

0x516b,	// (0x00062555) separator_vertical_pane_g3

0x0002,

0xfbf6,	// (0x0006cfe0) separator_vertical_pane_g

0x50b1,	// (0x0006249b) eswt_control_pane_g1_copy4_ParamLimits

0x50b1,	// (0x0006249b) eswt_control_pane_g1_copy4

0x50be,	// (0x000624a8) eswt_control_pane_g2_copy4_ParamLimits

0x50be,	// (0x000624a8) eswt_control_pane_g2_copy4

0x50cb,	// (0x000624b5) eswt_control_pane_g3_copy4_ParamLimits

0x50cb,	// (0x000624b5) eswt_control_pane_g3_copy4

0x50d8,	// (0x000624c2) eswt_control_pane_g4_copy4_ParamLimits

0x50d8,	// (0x000624c2) eswt_control_pane_g4_copy4

0xd061,	// (0x0006a44b) eswt_ctrl_combo_button_pane

0xd069,	// (0x0006a453) eswt_ctrl_input_pane

0xd071,	// (0x0006a45b) popup_choice_list_window_cp70

0xd079,	// (0x0006a463) eswt_ctrl_input_pane_t1

0x6f20,	// (0x0006430a) input_focus_pane_cp70

0x46ec,	// (0x00061ad6) bg_button_pane_cp70_ParamLimits

0x46ec,	// (0x00061ad6) bg_button_pane_cp70

0xd087,	// (0x0006a471) eswt_ctrl_combo_button_pane_g1

0x51a2,	// (0x0006258c) wait_bar_pane_cp70

0x1fdd,	// (0x0005f3c7) bg_popup_window_pane_cp70_ParamLimits

0x1fdd,	// (0x0005f3c7) bg_popup_window_pane_cp70

0x51aa,	// (0x00062594) popup_eswt_tasktip_window_t1

0x51c0,	// (0x000625aa) wait_bar_pane_cp71_ParamLimits

0x51c0,	// (0x000625aa) wait_bar_pane_cp71

0x51cc,	// (0x000625b6) grid_eswt_app_pane

0x8351,	// (0x0006573b) scroll_pane_cp70

0xd08f,	// (0x0006a479) cell_eswt_app_pane_ParamLimits

0xd08f,	// (0x0006a479) cell_eswt_app_pane

0xd0b9,	// (0x0006a4a3) cell_eswt_app_pane_g1_ParamLimits

0xd0b9,	// (0x0006a4a3) cell_eswt_app_pane_g1

0xd0e8,	// (0x0006a4d2) cell_eswt_app_pane_g2_ParamLimits

0xd0e8,	// (0x0006a4d2) cell_eswt_app_pane_g2

0x0001,

0xfbfd,	// (0x0006cfe7) cell_eswt_app_pane_g_ParamLimits

0xfbfd,	// (0x0006cfe7) cell_eswt_app_pane_g

0xd10c,	// (0x0006a4f6) cell_eswt_app_pane_t1_ParamLimits

0xd10c,	// (0x0006a4f6) cell_eswt_app_pane_t1

0x528a,	// (0x00062674) grid_highlight_pane_cp70_ParamLimits

0x528a,	// (0x00062674) grid_highlight_pane_cp70

0xc219,	// (0x00069603) set_content_pane_g1

0xa316,	// (0x00067700) status_small_volume_pane

0xb622,	// (0x00068a0c) status_small_volume_pane_g1

0xb62a,	// (0x00068a14) volume_small2_pane

0xb633,	// (0x00068a1d) volume_small2_pane_g1

0xb63c,	// (0x00068a26) volume_small2_pane_g2

0xb645,	// (0x00068a2f) volume_small2_pane_g3

0xb64e,	// (0x00068a38) volume_small2_pane_g4

0xb657,	// (0x00068a41) volume_small2_pane_g5

0xb660,	// (0x00068a4a) volume_small2_pane_g6

0xb669,	// (0x00068a53) volume_small2_pane_g7

0xb672,	// (0x00068a5c) volume_small2_pane_g8

0xb67b,	// (0x00068a65) volume_small2_pane_g9

0xb684,	// (0x00068a6e) volume_small2_pane_g10

0x0009,

0xfc02,	// (0x0006cfec) volume_small2_pane_g

0x4adf,	// (0x00061ec9) fep_vkb_top_text_pane_g1_ParamLimits

0xcf6d,	// (0x0006a357) fep_vkb_top_text_pane_t1_ParamLimits

0x4d89,	// (0x00062173) popup_preview_fixed_window_g3_ParamLimits

0x4d89,	// (0x00062173) popup_preview_fixed_window_g3

0xab9f,	// (0x00067f89) popup_toolbar_trans_pane

0xc87f,	// (0x00069c69) aid_height_set_list_ParamLimits

0x332c,	// (0x00060716) aid_size_parent_ParamLimits

0x8461,	// (0x0006584b) list_highlight_pane_cp2_ParamLimits

0xc219,	// (0x00069603) set_content_pane_g1_ParamLimits

0xc9e7,	// (0x00069dd1) list_single_image_pane_ParamLimits

0xc9e7,	// (0x00069dd1) list_single_image_pane

0xd13e,	// (0x0006a528) aid_size_cell_image_ParamLimits

0xd13e,	// (0x0006a528) aid_size_cell_image

0xd14b,	// (0x0006a535) grid_single_image_pane_ParamLimits

0xd14b,	// (0x0006a535) grid_single_image_pane

0xcfd1,	// (0x0006a3bb) list_single_image_pane_g1_ParamLimits

0xcfd1,	// (0x0006a3bb) list_single_image_pane_g1

0x4db7,	// (0x000621a1) list_single_image_pane_g2_ParamLimits

0x4db7,	// (0x000621a1) list_single_image_pane_g2

0x0001,

0xfc17,	// (0x0006d001) list_single_image_pane_g_ParamLimits

0xfc17,	// (0x0006d001) list_single_image_pane_g

0x52af,	// (0x00062699) list_single_image_pane_t1_ParamLimits

0x52af,	// (0x00062699) list_single_image_pane_t1

0xd157,	// (0x0006a541) cell_image_list_pane_ParamLimits

0xd157,	// (0x0006a541) cell_image_list_pane

0xd16b,	// (0x0006a555) cell_image_list_pane_g1

0xd174,	// (0x0006a55e) cell_image_list_pane_g2

0x0001,

0xfc1c,	// (0x0006d006) cell_image_list_pane_g

0xd17d,	// (0x0006a567) aid_size_cell_tb_trans_pane

0x8038,	// (0x00065422) bg_tb_trans_pane

0xd18f,	// (0x0006a579) grid_tb_trans_pane

0x1f51,	// (0x0005f33b) bg_tb_trans_pane_g1

0x1f61,	// (0x0005f34b) bg_tb_trans_pane_g2

0x1f59,	// (0x0005f343) bg_tb_trans_pane_g3

0x1f71,	// (0x0005f35b) bg_tb_trans_pane_g4

0x1f69,	// (0x0005f353) bg_tb_trans_pane_g5

0x1f91,	// (0x0005f37b) bg_tb_trans_pane_g6

0x1f89,	// (0x0005f373) bg_tb_trans_pane_g7

0x1f79,	// (0x0005f363) bg_tb_trans_pane_g8

0x1f81,	// (0x0005f36b) bg_tb_trans_pane_g9

0x0008,

0xfc21,	// (0x0006d00b) bg_tb_trans_pane_g

0xd1a3,	// (0x0006a58d) cell_toolbar_trans_pane_ParamLimits

0xd1a3,	// (0x0006a58d) cell_toolbar_trans_pane

0x4727,	// (0x00061b11) cell_toolbar_trans_pane_g1

0xccb9,	// (0x0006a0a3) list_form2_midp_pane_t1

0xccc7,	// (0x0006a0b1) list_form2_midp_pane_t2

0x0001,

0xfabe,	// (0x0006cea8) list_form2_midp_pane_t

0x4239,	// (0x00061623) scroll_pane_cp51_ParamLimits

0x43f5,	// (0x000617df) form2_midp_wait_pane_g1

0x43fe,	// (0x000617e8) form2_midp_wait_pane_g2

0x4407,	// (0x000617f1) form2_midp_wait_pane_g3

0x0002,

0xfad3,	// (0x0006cebd) form2_midp_wait_pane_g

0x6f82,	// (0x0006436c) list_highlight_pane_cp21_ParamLimits

0x444f,	// (0x00061839) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x445e,	// (0x00061848) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x34fc,	// (0x000608e6) list_single_2graphic_im_pane_ParamLimits

0x34fc,	// (0x000608e6) list_single_2graphic_im_pane

0xd1c9,	// (0x0006a5b3) list_single_2graphic_im_pane_g1_ParamLimits

0xd1c9,	// (0x0006a5b3) list_single_2graphic_im_pane_g1

0xd1da,	// (0x0006a5c4) list_single_2graphic_im_pane_g2_ParamLimits

0xd1da,	// (0x0006a5c4) list_single_2graphic_im_pane_g2

0xd1e6,	// (0x0006a5d0) list_single_2graphic_im_pane_g3_ParamLimits

0xd1e6,	// (0x0006a5d0) list_single_2graphic_im_pane_g3

0x0003,

0xfc34,	// (0x0006d01e) list_single_2graphic_im_pane_g_ParamLimits

0xfc34,	// (0x0006d01e) list_single_2graphic_im_pane_g

0xd1fa,	// (0x0006a5e4) list_single_2graphic_im_pane_t1_ParamLimits

0xd1fa,	// (0x0006a5e4) list_single_2graphic_im_pane_t1

0x4d95,	// (0x0006217f) list_single_graphic_2heading_pane_fp_ParamLimits

0x4d95,	// (0x0006217f) list_single_graphic_2heading_pane_fp

0xecf4,	// (0x0006c0de) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xecf4,	// (0x0006c0de) list_single_graphic_2heading_pane_fp_g1

0x4dab,	// (0x00062195) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4dab,	// (0x00062195) list_single_graphic_2heading_pane_fp_g2

0xcfd1,	// (0x0006a3bb) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xcfd1,	// (0x0006a3bb) list_single_graphic_2heading_pane_fp_g3

0x4db7,	// (0x000621a1) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4db7,	// (0x000621a1) list_single_graphic_2heading_pane_fp_g4

0x4dcb,	// (0x000621b5) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4dcb,	// (0x000621b5) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb5b,	// (0x0006cf45) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb5b,	// (0x0006cf45) list_single_graphic_2heading_pane_fp_g

0xee12,	// (0x0006c1fc) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xee12,	// (0x0006c1fc) list_single_graphic_2heading_pane_fp_t1

0xed2c,	// (0x0006c116) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xed2c,	// (0x0006c116) list_single_graphic_2heading_pane_fp_t2

0xee28,	// (0x0006c212) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xee28,	// (0x0006c212) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3d,	// (0x0006d027) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3d,	// (0x0006d027) list_single_graphic_2heading_pane_fp_t

0x47b3,	// (0x00061b9d) fep_hwr_write_pane_g5_ParamLimits

0x47b3,	// (0x00061b9d) fep_hwr_write_pane_g5

0x47bf,	// (0x00061ba9) fep_hwr_write_pane_g6_ParamLimits

0x47bf,	// (0x00061ba9) fep_hwr_write_pane_g6

0xd041,	// (0x0006a42b) eswt_shell_pane_ParamLimits

0x1fdd,	// (0x0005f3c7) bg_popup_window_pane_cp18_ParamLimits

0x3274,	// (0x0006065e) heading_pane_cp70

0x51aa,	// (0x00062594) popup_eswt_tasktip_window_t1_ParamLimits

0xacbc,	// (0x000680a6) aid_touch_tab_arrow_left

0xacd2,	// (0x000680bc) aid_touch_tab_arrow_right

0x90d6,	// (0x000664c0) title_pane_g3_ParamLimits

0x90d6,	// (0x000664c0) title_pane_g3

0x8000,	// (0x000653ea) set_value_pane_g1

0xab9f,	// (0x00067f89) popup_toolbar_trans_pane_ParamLimits

0xd17d,	// (0x0006a567) aid_size_cell_tb_trans_pane_ParamLimits

0x8038,	// (0x00065422) bg_tb_trans_pane_ParamLimits

0xd18f,	// (0x0006a579) grid_tb_trans_pane_ParamLimits

0x70ba,	// (0x000644a4) cont_note_pane_ParamLimits

0x70ba,	// (0x000644a4) cont_note_pane

0x7f2c,	// (0x00065316) cont_snote2_single_text_pane_ParamLimits

0x7f2c,	// (0x00065316) cont_snote2_single_text_pane

0x7f2c,	// (0x00065316) cont_snote2_single_graphic_pane_ParamLimits

0x7f2c,	// (0x00065316) cont_snote2_single_graphic_pane

0x25f7,	// (0x0005f9e1) cont_note_wait_pane_ParamLimits

0x25f7,	// (0x0005f9e1) cont_note_wait_pane

0x25f7,	// (0x0005f9e1) cont_note_image_pane_ParamLimits

0x25f7,	// (0x0005f9e1) cont_note_image_pane

0x53a5,	// (0x0006278f) popup_note2_window_g1_ParamLimits

0x53a5,	// (0x0006278f) popup_note2_window_g1

0xd238,	// (0x0006a622) popup_note2_window_t1_ParamLimits

0xd238,	// (0x0006a622) popup_note2_window_t1

0xd27d,	// (0x0006a667) popup_note2_window_t2_ParamLimits

0xd27d,	// (0x0006a667) popup_note2_window_t2

0xd2c2,	// (0x0006a6ac) popup_note2_window_t3_ParamLimits

0xd2c2,	// (0x0006a6ac) popup_note2_window_t3

0x54a5,	// (0x0006288f) popup_note2_window_t4_ParamLimits

0x54a5,	// (0x0006288f) popup_note2_window_t4

0x713e,	// (0x00064528) popup_note2_window_t5_ParamLimits

0x713e,	// (0x00064528) popup_note2_window_t5

0x0004,

0xfc49,	// (0x0006d033) popup_note2_window_t_ParamLimits

0xfc49,	// (0x0006d033) popup_note2_window_t

0x54d4,	// (0x000628be) popup_note2_image_window_g1_ParamLimits

0x54d4,	// (0x000628be) popup_note2_image_window_g1

0xd307,	// (0x0006a6f1) popup_note2_image_window_g2_ParamLimits

0xd307,	// (0x0006a6f1) popup_note2_image_window_g2

0x0001,

0xfc54,	// (0x0006d03e) popup_note2_image_window_g_ParamLimits

0xfc54,	// (0x0006d03e) popup_note2_image_window_g

0x54f2,	// (0x000628dc) popup_note2_image_window_t1_ParamLimits

0x54f2,	// (0x000628dc) popup_note2_image_window_t1

0x550a,	// (0x000628f4) popup_note2_image_window_t2_ParamLimits

0x550a,	// (0x000628f4) popup_note2_image_window_t2

0x5522,	// (0x0006290c) popup_note2_image_window_t3_ParamLimits

0x5522,	// (0x0006290c) popup_note2_image_window_t3

0x0002,

0xfc59,	// (0x0006d043) popup_note2_image_window_t_ParamLimits

0xfc59,	// (0x0006d043) popup_note2_image_window_t

0x2605,	// (0x0005f9ef) popup_note2_wait_window_g1_ParamLimits

0x2605,	// (0x0005f9ef) popup_note2_wait_window_g1

0x2611,	// (0x0005f9fb) popup_note2_wait_window_g2_ParamLimits

0x2611,	// (0x0005f9fb) popup_note2_wait_window_g2

0x261d,	// (0x0005fa07) popup_note2_wait_window_g3_ParamLimits

0x261d,	// (0x0005fa07) popup_note2_wait_window_g3

0x0002,

0xf80d,	// (0x0006cbf7) popup_note2_wait_window_g_ParamLimits

0xf80d,	// (0x0006cbf7) popup_note2_wait_window_g

0x553e,	// (0x00062928) popup_note2_wait_window_t1_ParamLimits

0x553e,	// (0x00062928) popup_note2_wait_window_t1

0x555c,	// (0x00062946) popup_note2_wait_window_t2_ParamLimits

0x555c,	// (0x00062946) popup_note2_wait_window_t2

0x557a,	// (0x00062964) popup_note2_wait_window_t3_ParamLimits

0x557a,	// (0x00062964) popup_note2_wait_window_t3

0x558c,	// (0x00062976) popup_note2_wait_window_t4_ParamLimits

0x558c,	// (0x00062976) popup_note2_wait_window_t4

0x0003,

0xfc60,	// (0x0006d04a) popup_note2_wait_window_t_ParamLimits

0xfc60,	// (0x0006d04a) popup_note2_wait_window_t

0x559e,	// (0x00062988) wait_bar2_pane_ParamLimits

0x559e,	// (0x00062988) wait_bar2_pane

0x55b6,	// (0x000629a0) popup_snote2_single_text_window_g1_ParamLimits

0x55b6,	// (0x000629a0) popup_snote2_single_text_window_g1

0x55de,	// (0x000629c8) popup_snote2_single_text_window_t1_ParamLimits

0x55de,	// (0x000629c8) popup_snote2_single_text_window_t1

0x562a,	// (0x00062a14) popup_snote2_single_text_window_t2_ParamLimits

0x562a,	// (0x00062a14) popup_snote2_single_text_window_t2

0x5676,	// (0x00062a60) popup_snote2_single_text_window_t3_ParamLimits

0x5676,	// (0x00062a60) popup_snote2_single_text_window_t3

0x56b7,	// (0x00062aa1) popup_snote2_single_text_window_t4_ParamLimits

0x56b7,	// (0x00062aa1) popup_snote2_single_text_window_t4

0x56ed,	// (0x00062ad7) popup_snote2_single_text_window_t5_ParamLimits

0x56ed,	// (0x00062ad7) popup_snote2_single_text_window_t5

0x0004,

0xfc69,	// (0x0006d053) popup_snote2_single_text_window_t_ParamLimits

0xfc69,	// (0x0006d053) popup_snote2_single_text_window_t

0xd319,	// (0x0006a703) popup_snote2_single_graphic_window_g1_ParamLimits

0xd319,	// (0x0006a703) popup_snote2_single_graphic_window_g1

0x5740,	// (0x00062b2a) popup_snote2_single_graphic_window_g2_ParamLimits

0x5740,	// (0x00062b2a) popup_snote2_single_graphic_window_g2

0x0001,

0xfc74,	// (0x0006d05e) popup_snote2_single_graphic_window_g_ParamLimits

0xfc74,	// (0x0006d05e) popup_snote2_single_graphic_window_g

0x5768,	// (0x00062b52) popup_snote2_single_graphic_window_t1_ParamLimits

0x5768,	// (0x00062b52) popup_snote2_single_graphic_window_t1

0x57b4,	// (0x00062b9e) popup_snote2_single_graphic_window_t2_ParamLimits

0x57b4,	// (0x00062b9e) popup_snote2_single_graphic_window_t2

0x5676,	// (0x00062a60) popup_snote2_single_graphic_window_t3_ParamLimits

0x5676,	// (0x00062a60) popup_snote2_single_graphic_window_t3

0x56b7,	// (0x00062aa1) popup_snote2_single_graphic_window_t4_ParamLimits

0x56b7,	// (0x00062aa1) popup_snote2_single_graphic_window_t4

0x56ed,	// (0x00062ad7) popup_snote2_single_graphic_window_t5_ParamLimits

0x56ed,	// (0x00062ad7) popup_snote2_single_graphic_window_t5

0x0004,

0xfc79,	// (0x0006d063) popup_snote2_single_graphic_window_t_ParamLimits

0xfc79,	// (0x0006d063) popup_snote2_single_graphic_window_t

0x40f6,	// (0x000614e0) clock_nsta_pane_cp2_t1

0x40f6,	// (0x000614e0) clock_nsta_pane_cp2_t2

0x0001,

0xfa94,	// (0x0006ce7e) clock_nsta_pane_cp2_t

0xe8b0,	// (0x0006bc9a) form_field_data_wide_pane_g1_ParamLimits

0x8046,	// (0x00065430) form_field_data_wide_pane_g2_ParamLimits

0x8046,	// (0x00065430) form_field_data_wide_pane_g2

0x8052,	// (0x0006543c) form_field_data_wide_pane_g3_ParamLimits

0x8052,	// (0x0006543c) form_field_data_wide_pane_g3

0x0002,

0xf64c,	// (0x0006ca36) form_field_data_wide_pane_g_ParamLimits

0xf64c,	// (0x0006ca36) form_field_data_wide_pane_g

0xcbda,	// (0x00069fc4) grid_touch_3_pane_ParamLimits

0xcbda,	// (0x00069fc4) grid_touch_3_pane

0xd341,	// (0x0006a72b) cell_touch_3_pane_ParamLimits

0xd341,	// (0x0006a72b) cell_touch_3_pane

0x4727,	// (0x00061b11) cell_touch_3_pane_g1

0x4727,	// (0x00061b11) cell_touch_3_pane_g2

0x0001,

0xfb19,	// (0x0006cf03) cell_touch_3_pane_g

0x7170,	// (0x0006455a) cont_query_data_pane

0x7178,	// (0x00064562) cont_query_data_pane_cp1

0x582e,	// (0x00062c18) button_value_adjust_pane_cp7

0x5836,	// (0x00062c20) query_popup_pane_cp3

0xbf16,	// (0x00069300) bg_popup_sub_pane_cp22_ParamLimits

0x9fbf,	// (0x000673a9) navi_navi_volume_pane_cp2

0x9fce,	// (0x000673b8) popup_side_volume_key_window_g2

0x9fdd,	// (0x000673c7) popup_side_volume_key_window_g3

0x0002,

0xf6e2,	// (0x0006cacc) popup_side_volume_key_window_g

0x9fec,	// (0x000673d6) popup_side_volume_key_window_t2

0x0001,

0xf6e9,	// (0x0006cad3) popup_side_volume_key_window_t

0xa13d,	// (0x00067527) popup_side_volume_key_window_ParamLimits

0x9882,	// (0x00066c6c) list_double_graphic_pane_g4_ParamLimits

0x9882,	// (0x00066c6c) list_double_graphic_pane_g4

0xc9d3,	// (0x00069dbd) list_single_2heading_msg_pane_ParamLimits

0xc9d3,	// (0x00069dbd) list_single_2heading_msg_pane

0xd38a,	// (0x0006a774) list_single_2heading_msg_pane_g1_ParamLimits

0xd38a,	// (0x0006a774) list_single_2heading_msg_pane_g1

0xd396,	// (0x0006a780) list_single_2heading_msg_pane_g2_ParamLimits

0xd396,	// (0x0006a780) list_single_2heading_msg_pane_g2

0xd3a9,	// (0x0006a793) list_single_2heading_msg_pane_g3_ParamLimits

0xd3a9,	// (0x0006a793) list_single_2heading_msg_pane_g3

0xd3b5,	// (0x0006a79f) list_single_2heading_msg_pane_g4_ParamLimits

0xd3b5,	// (0x0006a79f) list_single_2heading_msg_pane_g4

0x0003,

0xfc84,	// (0x0006d06e) list_single_2heading_msg_pane_g_ParamLimits

0xfc84,	// (0x0006d06e) list_single_2heading_msg_pane_g

0xb68d,	// (0x00068a77) list_single_2heading_msg_pane_t1_ParamLimits

0xb68d,	// (0x00068a77) list_single_2heading_msg_pane_t1

0xb6b5,	// (0x00068a9f) list_single_2heading_msg_pane_t2_ParamLimits

0xb6b5,	// (0x00068a9f) list_single_2heading_msg_pane_t2

0xb720,	// (0x00068b0a) list_single_2heading_msg_pane_t3_ParamLimits

0xb720,	// (0x00068b0a) list_single_2heading_msg_pane_t3

0xee48,	// (0x0006c232) list_single_2heading_msg_pane_t4_ParamLimits

0xee48,	// (0x0006c232) list_single_2heading_msg_pane_t4

0x0003,

0xfc8d,	// (0x0006d077) list_single_2heading_msg_pane_t_ParamLimits

0xfc8d,	// (0x0006d077) list_single_2heading_msg_pane_t

0x6f3e,	// (0x00064328) title_pane_g4_ParamLimits

0x6f3e,	// (0x00064328) title_pane_g4

0xf0ce,	// (0x0006c4b8) title_pane_stacon_g3_ParamLimits

0xf0ce,	// (0x0006c4b8) title_pane_stacon_g3

0x5368,	// (0x00062752) list_single_2graphic_im_pane_g4_ParamLimits

0x5368,	// (0x00062752) list_single_2graphic_im_pane_g4

0xc72c,	// (0x00069b16) popup_side_volume_key_window_cp

0x38a8,	// (0x00060c92) main_idle_act2_pane_t1

0x05a9,	// (0x0005d993) toolbar_button_pane_g10

0x96e2,	// (0x00066acc) popup_toolbar_window_cp1

0x40e7,	// (0x000614d1) clock_nsta_pane_cp_t1

0x40e7,	// (0x000614d1) clock_nsta_pane_cp_t2

0x0001,

0xfa8f,	// (0x0006ce79) clock_nsta_pane_cp_t

0x9fbf,	// (0x000673a9) navi_navi_volume_pane_cp2_ParamLimits

0xf2a2,	// (0x0006c68c) popup_side_volume_key_window_g1_ParamLimits

0x9fce,	// (0x000673b8) popup_side_volume_key_window_g2_ParamLimits

0x9fdd,	// (0x000673c7) popup_side_volume_key_window_g3_ParamLimits

0xf6e2,	// (0x0006cacc) popup_side_volume_key_window_g_ParamLimits

0x0b96,	// (0x0005df80) fep_hwr_aid_pane

0x0c3d,	// (0x0005e027) bg_fep_hwr_top_pane_g4_ParamLimits

0x4783,	// (0x00061b6d) fep_hwr_top_pane_g1_ParamLimits

0x4795,	// (0x00061b7f) fep_hwr_top_pane_g2_ParamLimits

0x0c5d,	// (0x0005e047) fep_hwr_top_pane_g3_ParamLimits

0xfae4,	// (0x0006cece) fep_hwr_top_pane_g_ParamLimits

0x0c72,	// (0x0005e05c) fep_hwr_top_text_pane_ParamLimits

0x2e01,	// (0x000601eb) aid_touch_tab_arrow_arrow_2

0x2e0a,	// (0x000601f4) aid_touch_tab_arrow_left_2

0x0baa,	// (0x0005df94) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0be1,	// (0x0005dfcb) fep_hwr_prediction_pane

0x48ee,	// (0x00061cd8) fep_vkb_prediction_pane

0xcf4d,	// (0x0006a337) fep_vkb_side_pane_g3_ParamLimits

0xcf4d,	// (0x0006a337) fep_vkb_side_pane_g3

0x0ded,	// (0x0005e1d7) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x0e59,	// (0x0005e243) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0e66,	// (0x0005e250) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb93,	// (0x0006cf7d) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1070,	// (0x0005e45a) fep_hwr_prediction_pane_g1

0x107a,	// (0x0005e464) fep_hwr_prediction_pane_g2

0x1082,	// (0x0005e46c) fep_hwr_prediction_pane_g3

0x108a,	// (0x0005e474) fep_hwr_prediction_pane_g4

0x0003,

0xfc96,	// (0x0006d080) fep_hwr_prediction_pane_g

0x585b,	// (0x00062c45) fep_vkb_prediction_pane_g1

0x5865,	// (0x00062c4f) fep_vkb_prediction_pane_g2

0x586d,	// (0x00062c57) fep_vkb_prediction_pane_g3

0x5875,	// (0x00062c5f) fep_vkb_prediction_pane_g4

0x0003,

0xfc9f,	// (0x0006d089) fep_vkb_prediction_pane_g

0xb45b,	// (0x00068845) slider_set_pane_g3

0xb46f,	// (0x00068859) slider_set_pane_g4

0xb487,	// (0x00068871) slider_set_pane_g5

0xb45b,	// (0x00068845) slider_set_pane_g6

0xb49d,	// (0x00068887) slider_set_pane_g7

0x348d,	// (0x00060877) slider_form_pane_g3

0x3496,	// (0x00060880) slider_form_pane_g4

0x349e,	// (0x00060888) slider_form_pane_g5

0x348d,	// (0x00060877) slider_form_pane_g6

0xc9ca,	// (0x00069db4) slider_form_pane_g7

0x3b54,	// (0x00060f3e) slider_set_pane_vc_g3

0x3b5d,	// (0x00060f47) slider_set_pane_vc_g4

0x3b66,	// (0x00060f50) slider_set_pane_vc_g5

0x3b54,	// (0x00060f3e) slider_set_pane_vc_g6

0x3b6f,	// (0x00060f59) slider_set_pane_vc_g7

0x3da5,	// (0x0006118f) slider_form_pane_vc_g1

0x3dae,	// (0x00061198) slider_form_pane_vc_g2

0x3db7,	// (0x000611a1) slider_form_pane_vc_g3

0x3da5,	// (0x0006118f) slider_form_pane_vc_g4

0x3dc0,	// (0x000611aa) slider_form_pane_vc_g5

0x0004,

0xfa61,	// (0x0006ce4b) slider_form_pane_vc_g

0xe6f3,	// (0x0006badd) main_idle_act3_pane

0x587d,	// (0x00062c67) ai3_links_pane

0xd3cd,	// (0x0006a7b7) popup_ai3_data_window_ParamLimits

0xd3cd,	// (0x0006a7b7) popup_ai3_data_window

0x6f20,	// (0x0006430a) grid_ai3_links_pane

0xd3e5,	// (0x0006a7cf) cell_ai3_links_pane_ParamLimits

0xd3e5,	// (0x0006a7cf) cell_ai3_links_pane

0x58b6,	// (0x00062ca0) bg_popup_sub_pane_cp11

0x58c3,	// (0x00062cad) cell_ai3_links_pane_g1

0x6f20,	// (0x0006430a) bg_popup_sub_pane_cp12

0x58e8,	// (0x00062cd2) heading_ai3_data_pane

0x58f0,	// (0x00062cda) list_ai3_gene_pane

0x58fc,	// (0x00062ce6) popup_ai3_data_window_g1

0x5904,	// (0x00062cee) heading_ai3_data_pane_g1

0x590c,	// (0x00062cf6) heading_ai3_data_pane_t1

0xd3ff,	// (0x0006a7e9) list_double_ai3_gene_pane_ParamLimits

0xd3ff,	// (0x0006a7e9) list_double_ai3_gene_pane

0x5927,	// (0x00062d11) list_single_ai3_gene_pane_ParamLimits

0x5927,	// (0x00062d11) list_single_ai3_gene_pane

0x46ec,	// (0x00061ad6) list_highlight_pane_cp7_ParamLimits

0x46ec,	// (0x00061ad6) list_highlight_pane_cp7

0x5934,	// (0x00062d1e) list_single_a13_gene_pane_t1_ParamLimits

0x5934,	// (0x00062d1e) list_single_a13_gene_pane_t1

0x594b,	// (0x00062d35) list_single_ai3_gene_pane_g1

0x5954,	// (0x00062d3e) list_single_ai3_gene_pane_g2

0x0001,

0xfca8,	// (0x0006d092) list_single_ai3_gene_pane_g

0x595c,	// (0x00062d46) list_double_ai3_gene_pane_g1_ParamLimits

0x595c,	// (0x00062d46) list_double_ai3_gene_pane_g1

0xd40c,	// (0x0006a7f6) list_double_ai3_gene_pane_t1_ParamLimits

0xd40c,	// (0x0006a7f6) list_double_ai3_gene_pane_t1

0x5984,	// (0x00062d6e) list_double_ai3_gene_pane_t2_ParamLimits

0x5984,	// (0x00062d6e) list_double_ai3_gene_pane_t2

0x5999,	// (0x00062d83) list_double_ai3_gene_pane_t3_ParamLimits

0x5999,	// (0x00062d83) list_double_ai3_gene_pane_t3

0x0002,

0xfcad,	// (0x0006d097) list_double_ai3_gene_pane_t_ParamLimits

0xfcad,	// (0x0006d097) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xee3e,	// (0x0006c228) aid_size_min_col_2

0xd374,	// (0x0006a75e) aid_size_min_msg_ParamLimits

0xd374,	// (0x0006a75e) aid_size_min_msg

0xcf61,	// (0x0006a34b) fep_vkb_top_text_pane_g2_ParamLimits

0xcf61,	// (0x0006a34b) fep_vkb_top_text_pane_g2

0x0001,

0xfb14,	// (0x0006cefe) fep_vkb_top_text_pane_g_ParamLimits

0xfb14,	// (0x0006cefe) fep_vkb_top_text_pane_g

0xe6f3,	// (0x0006badd) main_hc_apps_shell_pane

0x59b6,	// (0x00062da0) grid_hc_apps_pane_ParamLimits

0x59b6,	// (0x00062da0) grid_hc_apps_pane

0x59c8,	// (0x00062db2) list_hc_apps_pane

0x59d0,	// (0x00062dba) scroll_pane_cp37_ParamLimits

0x59d0,	// (0x00062dba) scroll_pane_cp37

0xd428,	// (0x0006a812) cell_hc_apps_pane_ParamLimits

0xd428,	// (0x0006a812) cell_hc_apps_pane

0xd4e6,	// (0x0006a8d0) cell_hc_apps_pane_g1_ParamLimits

0xd4e6,	// (0x0006a8d0) cell_hc_apps_pane_g1

0x5aba,	// (0x00062ea4) cell_hc_apps_pane_g2_ParamLimits

0x5aba,	// (0x00062ea4) cell_hc_apps_pane_g2

0x5ad6,	// (0x00062ec0) cell_hc_apps_pane_g3_ParamLimits

0x5ad6,	// (0x00062ec0) cell_hc_apps_pane_g3

0x0002,

0xfcb4,	// (0x0006d09e) cell_hc_apps_pane_g_ParamLimits

0xfcb4,	// (0x0006d09e) cell_hc_apps_pane_g

0xd512,	// (0x0006a8fc) cell_hc_apps_pane_t1_ParamLimits

0xd512,	// (0x0006a8fc) cell_hc_apps_pane_t1

0x70ba,	// (0x000644a4) grid_highlight_pane_cp10_ParamLimits

0x70ba,	// (0x000644a4) grid_highlight_pane_cp10

0xd550,	// (0x0006a93a) list_single_hc_apps_pane_ParamLimits

0xd550,	// (0x0006a93a) list_single_hc_apps_pane

0xd580,	// (0x0006a96a) list_single_hc_apps_pane_g1

0xd599,	// (0x0006a983) list_single_hc_apps_pane_g2

0x0001,

0xfcbb,	// (0x0006d0a5) list_single_hc_apps_pane_g

0xd5b2,	// (0x0006a99c) list_single_hc_apps_pane_g2_copy1

0xb78e,	// (0x00068b78) list_single_hc_apps_pane_t1

0x6f82,	// (0x0006436c) bg_set_opt_pane_cp_ParamLimits

0x91aa,	// (0x00066594) setting_slider_pane_t1_ParamLimits

0x91c3,	// (0x000665ad) setting_slider_pane_t2_ParamLimits

0x91dd,	// (0x000665c7) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0006c923) setting_slider_pane_t_ParamLimits

0x91f5,	// (0x000665df) slider_set_pane_ParamLimits

0xf4a6,	// (0x0006c890) control_pane_g5_ParamLimits

0xf4a6,	// (0x0006c890) control_pane_g5

0xc84c,	// (0x00069c36) slider_set_pane_g1_ParamLimits

0x08cb,	// (0x0005dcb5) slider_set_pane_g2_ParamLimits

0xb45b,	// (0x00068845) slider_set_pane_g3_ParamLimits

0xb46f,	// (0x00068859) slider_set_pane_g4_ParamLimits

0xb487,	// (0x00068871) slider_set_pane_g5_ParamLimits

0xb45b,	// (0x00068845) slider_set_pane_g6_ParamLimits

0xb49d,	// (0x00068887) slider_set_pane_g7_ParamLimits

0xf929,	// (0x0006cd13) slider_set_pane_g_ParamLimits

0xc1c4,	// (0x000695ae) navi_icon_text_pane_ParamLimits

0xac85,	// (0x0006806f) aid_fill_nsta_2_ParamLimits

0xacbc,	// (0x000680a6) aid_touch_tab_arrow_left_ParamLimits

0xacd2,	// (0x000680bc) aid_touch_tab_arrow_right_ParamLimits

0xad6d,	// (0x00068157) clock_nsta_pane_ParamLimits

0x2de3,	// (0x000601cd) navi_icon_pane_g1_ParamLimits

0x2def,	// (0x000601d9) navi_text_pane_t1_ParamLimits

0x41f7,	// (0x000615e1) navi_icon_text_pane_g1_ParamLimits

0x4203,	// (0x000615ed) navi_icon_text_pane_t1_ParamLimits

0xd580,	// (0x0006a96a) list_single_hc_apps_pane_g1_ParamLimits

0xd599,	// (0x0006a983) list_single_hc_apps_pane_g2_ParamLimits

0xfcbb,	// (0x0006d0a5) list_single_hc_apps_pane_g_ParamLimits

0xd5b2,	// (0x0006a99c) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb78e,	// (0x00068b78) list_single_hc_apps_pane_t1_ParamLimits

0x8fdb,	// (0x000663c5) popup_toolbar2_fixed_window_ParamLimits

0x8fdb,	// (0x000663c5) popup_toolbar2_fixed_window

0xab95,	// (0x00067f7f) popup_toolbar2_float_window

0x6f20,	// (0x0006430a) bg_popup_sub_pane_cp27

0x5bb4,	// (0x00062f9e) grid_toolbar2_float_pane

0x6f20,	// (0x0006430a) bg_popup_sub_pane_cp26

0x5bb4,	// (0x00062f9e) grid_toolbar2_fixed_pane

0xd5ce,	// (0x0006a9b8) cell_toolbar2_fixed_pane_ParamLimits

0xd5ce,	// (0x0006a9b8) cell_toolbar2_fixed_pane

0xd5e8,	// (0x0006a9d2) cell_toolbar2_fixed_pane_g1

0x00c2,	// (0x0005d4ac) toolbar2_fixed_button_pane

0x1f51,	// (0x0005f33b) toolbar2_fixed_button_pane_g1

0x1f61,	// (0x0005f34b) toolbar2_fixed_button_pane_g2

0x1f59,	// (0x0005f343) toolbar2_fixed_button_pane_g3

0x1f71,	// (0x0005f35b) toolbar2_fixed_button_pane_g4

0x1f69,	// (0x0005f353) toolbar2_fixed_button_pane_g5

0x1f79,	// (0x0005f363) toolbar2_fixed_button_pane_g6

0x1f81,	// (0x0005f36b) toolbar2_fixed_button_pane_g7

0x1f91,	// (0x0005f37b) toolbar2_fixed_button_pane_g8

0x1f89,	// (0x0005f373) toolbar2_fixed_button_pane_g9

0x0008,

0xf82b,	// (0x0006cc15) toolbar2_fixed_button_pane_g

0x5bd5,	// (0x00062fbf) cell_toolbar2_float_pane_ParamLimits

0x5bd5,	// (0x00062fbf) cell_toolbar2_float_pane

0x5be6,	// (0x00062fd0) cell_toolbar2_float_pane_g1

0x00c2,	// (0x0005d4ac) toolbar2_fixed_button_pane_cp

0xce49,	// (0x0006a233) fep_vkb_accented_list_pane_ParamLimits

0xce49,	// (0x0006a233) fep_vkb_accented_list_pane

0x0dcd,	// (0x0005e1b7) bg_popup_fep_shadow_pane_g9

0xc2f2,	// (0x000696dc) bg_popup_fep_shadow_pane_cp3

0x8151,	// (0x0006553b) list_accented_list_pane

0x5bef,	// (0x00062fd9) list_single_accented_list_pane_ParamLimits

0x5bef,	// (0x00062fd9) list_single_accented_list_pane

0xc2f2,	// (0x000696dc) list_highlight_pane_cp10

0x5c00,	// (0x00062fea) list_single_accented_list_pane_t1

0xaabf,	// (0x00067ea9) popup_slider_window_ParamLimits

0xaabf,	// (0x00067ea9) popup_slider_window

0x583e,	// (0x00062c28) aid_indentation_list_msg

0xd6d9,	// (0x0006aac3) bg_popup_window_pane_cp19

0x5d26,	// (0x00063110) popup_slider_window_g1

0x5d42,	// (0x0006312c) popup_slider_window_g2

0x5d5e,	// (0x00063148) popup_slider_window_g3

0x0005,

0xfcc0,	// (0x0006d0aa) popup_slider_window_g

0x5dc4,	// (0x000631ae) popup_slider_window_t1

0x5e38,	// (0x00063222) small_volume_slider_vertical_pane

0x4727,	// (0x00061b11) small_volume_slider_vertical_pane_g1

0x4727,	// (0x00061b11) small_volume_slider_vertical_pane_g2

0x5e54,	// (0x0006323e) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd2,	// (0x0006d0bc) small_volume_slider_vertical_pane_g

0x8f29,	// (0x00066313) area_side_right_pane_ParamLimits

0x8f29,	// (0x00066313) area_side_right_pane

0xb7bc,	// (0x00068ba6) aid_size_side_button_ParamLimits

0xb7bc,	// (0x00068ba6) aid_size_side_button

0xb7d5,	// (0x00068bbf) grid_sctrl_middle_pane_ParamLimits

0xb7d5,	// (0x00068bbf) grid_sctrl_middle_pane

0x10f3,	// (0x0005e4dd) sctrl_sk_bottom_pane

0x1104,	// (0x0005e4ee) sctrl_sk_top_pane

0x1116,	// (0x0005e500) aid_touch_sctrl_top

0x1123,	// (0x0005e50d) bg_sctrl_sk_pane_ParamLimits

0x1123,	// (0x0005e50d) bg_sctrl_sk_pane

0x1131,	// (0x0005e51b) sctrl_sk_top_pane_g1

0x113e,	// (0x0005e528) sctrl_sk_top_pane_t1

0x1116,	// (0x0005e500) aid_touch_sctrl_bottom

0x1123,	// (0x0005e50d) bg_sctrl_sk_pane_cp_ParamLimits

0x1123,	// (0x0005e50d) bg_sctrl_sk_pane_cp

0x1159,	// (0x0005e543) sctrl_sk_bottom_pane_g1

0x113e,	// (0x0005e528) sctrl_sk_bottom_pane_t1

0xb7ef,	// (0x00068bd9) cell_sctrl_middle_pane_ParamLimits

0xb7ef,	// (0x00068bd9) cell_sctrl_middle_pane

0xb800,	// (0x00068bea) aid_touch_sctrl_middle_ParamLimits

0xb800,	// (0x00068bea) aid_touch_sctrl_middle

0xb80d,	// (0x00068bf7) bg_sctrl_middle_pane_ParamLimits

0xb80d,	// (0x00068bf7) bg_sctrl_middle_pane

0x17c6,	// (0x0005ebb0) cell_sctrl_middle_pane_g1_ParamLimits

0x17c6,	// (0x0005ebb0) cell_sctrl_middle_pane_g1

0xb81b,	// (0x00068c05) cell_sctrl_middle_pane_g2_ParamLimits

0xb81b,	// (0x00068c05) cell_sctrl_middle_pane_g2

0x0001,

0xfcde,	// (0x0006d0c8) cell_sctrl_middle_pane_g_ParamLimits

0xfcde,	// (0x0006d0c8) cell_sctrl_middle_pane_g

0x1f51,	// (0x0005f33b) bg_sctrl_middle_pane_g1

0x1f59,	// (0x0005f343) bg_sctrl_middle_pane_g2

0x1f61,	// (0x0005f34b) bg_sctrl_middle_pane_g3

0x1f69,	// (0x0005f353) bg_sctrl_middle_pane_g4

0x1f71,	// (0x0005f35b) bg_sctrl_middle_pane_g5

0x1f79,	// (0x0005f363) bg_sctrl_middle_pane_g6

0x1f81,	// (0x0005f36b) bg_sctrl_middle_pane_g7

0x1f89,	// (0x0005f373) bg_sctrl_middle_pane_g8

0x0007,

0xfce3,	// (0x0006d0cd) bg_sctrl_middle_pane_g

0x1f91,	// (0x0005f37b) bg_sctrl_middle_pane_g8_copy1

0x1f51,	// (0x0005f33b) bg_sctrl_sk_pane_g1

0x1f61,	// (0x0005f34b) bg_sctrl_sk_pane_g2

0x1f59,	// (0x0005f343) bg_sctrl_sk_pane_g3

0x0008,

0xf82b,	// (0x0006cc15) bg_sctrl_sk_pane_g

0x7f7a,	// (0x00065364) aid_size_touch_scroll_bar

0x1f71,	// (0x0005f35b) bg_sctrl_sk_pane_g4

0x1f69,	// (0x0005f353) bg_sctrl_sk_pane_g5

0x1f79,	// (0x0005f363) bg_sctrl_sk_pane_g6

0x1f81,	// (0x0005f36b) bg_sctrl_sk_pane_g7

0x1f91,	// (0x0005f37b) bg_sctrl_sk_pane_g8

0x1f89,	// (0x0005f373) bg_sctrl_sk_pane_g9

0xf4db,	// (0x0006c8c5) popup_fep_china_hwr2_fs_candidate_window

0xa585,	// (0x0006796f) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa585,	// (0x0006796f) popup_fep_china_hwr2_fs_control_window

0x0ded,	// (0x0005e1d7) sctrl_sk_top_pane_g2

0x0001,

0xfcd9,	// (0x0006d0c3) sctrl_sk_top_pane_g

0xd791,	// (0x0006ab7b) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd791,	// (0x0006ab7b) aid_fep_china_hwr2_fs_cell

0xd7a5,	// (0x0006ab8f) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd7a5,	// (0x0006ab8f) bg_popup_fep_shadow_pane_cp4

0xd7bc,	// (0x0006aba6) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd7bc,	// (0x0006aba6) bg_popup_fep_shadow_pane_cp5

0xd7ce,	// (0x0006abb8) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd7ce,	// (0x0006abb8) popup_fep_china_hwr2_fs_control_bar_grid

0xd7e2,	// (0x0006abcc) popup_fep_china_hwr2_fs_control_funtion_grid

0x5eb0,	// (0x0006329a) aid_fep_china_hwr2_fs_candi_cell

0x6f20,	// (0x0006430a) bg_popup_fep_shadow_pane_cp6

0x5eba,	// (0x000632a4) popup_fep_china_hwr2_fs_candidate_grid

0xd7ea,	// (0x0006abd4) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7ea,	// (0x0006abd4) cell_fep_china_hwr2_fs_funtion_grid

0x4727,	// (0x00061b11) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x5edc,	// (0x000632c6) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x5edc,	// (0x000632c6) cell_fep_china_hwr2_fs_funtion_grid_g1

0x5eea,	// (0x000632d4) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x5eea,	// (0x000632d4) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf4,	// (0x0006d0de) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf4,	// (0x0006d0de) cell_fep_china_hwr2_fs_funtion_grid_g

0xd802,	// (0x0006abec) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd802,	// (0x0006abec) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd817,	// (0x0006ac01) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd817,	// (0x0006ac01) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf9,	// (0x0006d0e3) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf9,	// (0x0006d0e3) cell_fep_china_hwr2_fs_funtion_grid_t

0x5f31,	// (0x0006331b) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5f39,	// (0x00063323) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5f41,	// (0x0006332b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcfe,	// (0x0006d0e8) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5f49,	// (0x00063333) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5f49,	// (0x00063333) cell_fep_china_hwr2_fs_candidate_grid

0x5f62,	// (0x0006334c) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5f6a,	// (0x00063354) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4727,	// (0x00061b11) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4727,	// (0x00061b11) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb19,	// (0x0006cf03) cell_fep_china_hwr2_fs_candidate_grid_g

0x5f72,	// (0x0006335c) cell_fep_china_hwr2_fs_candidate_grid_t1

0x03a8,	// (0x0005d792) clock_nsta_pane_cp_24_ParamLimits

0x03a8,	// (0x0005d792) clock_nsta_pane_cp_24

0x0426,	// (0x0005d810) indicator_nsta_pane_cp_24_ParamLimits

0x0426,	// (0x0005d810) indicator_nsta_pane_cp_24

0x2c5f,	// (0x00060049) heading_pane_g1

0x0001,

0xf890,	// (0x0006cc7a) heading_pane_g

0x36f1,	// (0x00060adb) grid_sct_catagory_button_pane

0x3721,	// (0x00060b0b) scroll_pane_cp5_ParamLimits

0x4245,	// (0x0006162f) button_value_adjust_pane_cp5_ParamLimits

0x4245,	// (0x0006162f) button_value_adjust_pane_cp5

0x4324,	// (0x0006170e) form2_midp_time_pane_ParamLimits

0x5f80,	// (0x0006336a) cell_sct_catagory_button_pane_ParamLimits

0x5f80,	// (0x0006336a) cell_sct_catagory_button_pane

0x46ec,	// (0x00061ad6) bg_button_pane_cp01_ParamLimits

0x46ec,	// (0x00061ad6) bg_button_pane_cp01

0x4727,	// (0x00061b11) cell_sct_catagory_button_pane_g1

0xab38,	// (0x00067f22) popup_tb_extension_window

0xd833,	// (0x0006ac1d) aid_size_cell_ext_ParamLimits

0xd833,	// (0x0006ac1d) aid_size_cell_ext

0x7f2c,	// (0x00065316) bg_tb_trans_pane_cp1_ParamLimits

0x7f2c,	// (0x00065316) bg_tb_trans_pane_cp1

0xd859,	// (0x0006ac43) grid_tb_ext_pane_ParamLimits

0xd859,	// (0x0006ac43) grid_tb_ext_pane

0xd898,	// (0x0006ac82) cell_tb_ext_pane_ParamLimits

0xd898,	// (0x0006ac82) cell_tb_ext_pane

0xd8c0,	// (0x0006acaa) cell_tb_ext_pane_g1_ParamLimits

0xd8c0,	// (0x0006acaa) cell_tb_ext_pane_g1

0x6016,	// (0x00063400) cell_tb_ext_pane_t1

0x70ba,	// (0x000644a4) list_highlight_pane_cp11_ParamLimits

0x70ba,	// (0x000644a4) list_highlight_pane_cp11

0x8ff0,	// (0x000663da) popup_uni_indicator_window_ParamLimits

0x8ff0,	// (0x000663da) popup_uni_indicator_window

0x8038,	// (0x00065422) bg_popup_sub_pane_cp14

0xd8dd,	// (0x0006acc7) list_uniindi_pane

0xd8e9,	// (0x0006acd3) uniindi_top_pane

0x70ba,	// (0x000644a4) bg_uniindi_top_pane

0xd908,	// (0x0006acf2) uniindi_top_pane_g1

0xd91e,	// (0x0006ad08) uniindi_top_pane_g2

0x0003,

0xfd05,	// (0x0006d0ef) uniindi_top_pane_g

0xd93b,	// (0x0006ad25) uniindi_top_pane_t1

0x60c7,	// (0x000634b1) list_single_uniindi_pane_ParamLimits

0x60c7,	// (0x000634b1) list_single_uniindi_pane

0x4727,	// (0x00061b11) bg_uniindi_top_pane_g1

0x60da,	// (0x000634c4) list_single_uniindi_pane_g1

0x60ed,	// (0x000634d7) list_single_uniindi_pane_t1

0xe6f3,	// (0x0006badd) control_bg_pane

0x6112,	// (0x000634fc) bg_sctrl_sk_pane_cp1

0x611b,	// (0x00063505) bg_sctrl_sk_pane_cp2

0x6124,	// (0x0006350e) control_bg_pane_g1

0x612d,	// (0x00063517) control_bg_pane_g2

0x0001,

0xfd0e,	// (0x0006d0f8) control_bg_pane_g

0x408b,	// (0x00061475) cell_indicator_nsta_pane_g1_ParamLimits

0xcc17,	// (0x0006a001) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7d,	// (0x0006ce67) cell_indicator_nsta_pane_g_ParamLimits

0xecca,	// (0x0006c0b4) form2_midp_time_pane_t1_ParamLimits

0x0b88,	// (0x0005df72) main_idle_act4_pane_ParamLimits

0x0b88,	// (0x0005df72) main_idle_act4_pane

0xab38,	// (0x00067f22) popup_tb_extension_window_ParamLimits

0xd87e,	// (0x0006ac68) tb_ext_find_pane_ParamLimits

0xd87e,	// (0x0006ac68) tb_ext_find_pane

0x6136,	// (0x00063520) ai_gene_pane_1_cp1

0xc373,	// (0x0006975d) ai_gene_pane_2_cp1

0xd965,	// (0x0006ad4f) list_single_idle_plugin_calendar_pane

0x6147,	// (0x00063531) list_single_idle_plugin_notification_pane

0x6150,	// (0x0006353a) list_single_idle_plugin_player_pane

0xd96e,	// (0x0006ad58) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd96e,	// (0x0006ad58) list_single_idle_plugin_shortcut_pane

0xd996,	// (0x0006ad80) main_idle_act4_pane_t1

0xd9ad,	// (0x0006ad97) main_idle_act4_pane_t2

0x0001,

0xfd13,	// (0x0006d0fd) main_idle_act4_pane_t

0xd9c4,	// (0x0006adae) middle_sk_idle_act4_pane_ParamLimits

0xd9c4,	// (0x0006adae) middle_sk_idle_act4_pane

0xd9e0,	// (0x0006adca) popup_clock_digital_analogue_window_cp2

0xda0c,	// (0x0006adf6) shortcut_wheel_idle_act4_pane_ParamLimits

0xda0c,	// (0x0006adf6) shortcut_wheel_idle_act4_pane

0x4727,	// (0x00061b11) shortcut_wheel_idle_act4_pane_g1

0x4727,	// (0x00061b11) shortcut_wheel_idle_act4_pane_g2

0x4727,	// (0x00061b11) shortcut_wheel_idle_act4_pane_g3

0x4727,	// (0x00061b11) shortcut_wheel_idle_act4_pane_g4

0x4727,	// (0x00061b11) shortcut_wheel_idle_act4_pane_g5

0x61e3,	// (0x000635cd) shortcut_wheel_idle_act4_pane_g6

0x61eb,	// (0x000635d5) shortcut_wheel_idle_act4_pane_g7

0x61f3,	// (0x000635dd) shortcut_wheel_idle_act4_pane_g8

0x61fb,	// (0x000635e5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd18,	// (0x0006d102) shortcut_wheel_idle_act4_pane_g

0xda89,	// (0x0006ae73) middle_sk_idle_act4_pane_g1_ParamLimits

0xda89,	// (0x0006ae73) middle_sk_idle_act4_pane_g1

0xda97,	// (0x0006ae81) middle_sk_idle_act4_pane_g2_ParamLimits

0xda97,	// (0x0006ae81) middle_sk_idle_act4_pane_g2

0x0001,

0xfd3b,	// (0x0006d125) middle_sk_idle_act4_pane_g_ParamLimits

0xfd3b,	// (0x0006d125) middle_sk_idle_act4_pane_g

0xdaaf,	// (0x0006ae99) middle_sk_idle_act4_pane_t1_ParamLimits

0xdaaf,	// (0x0006ae99) middle_sk_idle_act4_pane_t1

0xdade,	// (0x0006aec8) grid_ai_shortcut_pane_ParamLimits

0xdade,	// (0x0006aec8) grid_ai_shortcut_pane

0xdafb,	// (0x0006aee5) list_highlight_pane_cp16_ParamLimits

0xdafb,	// (0x0006aee5) list_highlight_pane_cp16

0xdb08,	// (0x0006aef2) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdb08,	// (0x0006aef2) list_single_idle_plugin_shortcut_pane_g1

0xdb14,	// (0x0006aefe) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdb14,	// (0x0006aefe) list_single_idle_plugin_shortcut_pane_g2

0xdb30,	// (0x0006af1a) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdb30,	// (0x0006af1a) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd40,	// (0x0006d12a) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd40,	// (0x0006d12a) list_single_idle_plugin_shortcut_pane_g

0xdb45,	// (0x0006af2f) cell_ai_shortcut_pane_ParamLimits

0xdb45,	// (0x0006af2f) cell_ai_shortcut_pane

0xdb5b,	// (0x0006af45) cell_ai_shortcut_pane_g1_ParamLimits

0xdb5b,	// (0x0006af45) cell_ai_shortcut_pane_g1

0x6136,	// (0x00063520) ai_gene_pane_1_cp2

0x632b,	// (0x00063715) ai_gene_pane_2_cp2

0x6333,	// (0x0006371d) list_highlight_pane_cp15

0xdb7d,	// (0x0006af67) list_single_idle_plugin_calendar_pane_g1

0x6333,	// (0x0006371d) list_highlight_pane_cp17

0x6344,	// (0x0006372e) list_single_idle_plugin_calendar_pane_g1_copy1

0x634c,	// (0x00063736) list_single_idle_plugin_player_pane_g1

0x394a,	// (0x00060d34) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd47,	// (0x0006d131) list_single_idle_plugin_player_pane_g

0x6354,	// (0x0006373e) list_single_idle_plugin_player_pane_t1

0x6362,	// (0x0006374c) list_single_idle_plugin_player_pane_t2

0x6370,	// (0x0006375a) list_single_idle_plugin_player_pane_t3

0x637e,	// (0x00063768) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4c,	// (0x0006d136) list_single_idle_plugin_player_pane_t

0x638c,	// (0x00063776) wait_bar_pane_cp15

0x6394,	// (0x0006377e) grid_ai_notification_pane

0x394a,	// (0x00060d34) list_single_idle_plugin_notification_pane_g1

0xdb85,	// (0x0006af6f) cell_ai_notification_pane_ParamLimits

0xdb85,	// (0x0006af6f) cell_ai_notification_pane

0x63aa,	// (0x00063794) cell_ai_notification_pane_g1

0x63b2,	// (0x0006379c) cell_ai_notification_pane_t1

0xdb92,	// (0x0006af7c) tb_ext_find_button_pane

0xdb9a,	// (0x0006af84) tb_ext_find_pane_g1

0xdba2,	// (0x0006af8c) tb_ext_find_pane_t1

0xbeb5,	// (0x0006929f) tb_ext_find_button_pane_g1

0xdbb0,	// (0x0006af9a) tb_ext_find_button_pane_g2

0x0001,

0xfd55,	// (0x0006d13f) tb_ext_find_button_pane_g

0xd996,	// (0x0006ad80) main_idle_act4_pane_t1_ParamLimits

0xd9ad,	// (0x0006ad97) main_idle_act4_pane_t2_ParamLimits

0xfd13,	// (0x0006d0fd) main_idle_act4_pane_t_ParamLimits

0xd9e0,	// (0x0006adca) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd9f8,	// (0x0006ade2) sat_plugin_idle_act4_pane_ParamLimits

0xd9f8,	// (0x0006ade2) sat_plugin_idle_act4_pane

0xdbb9,	// (0x0006afa3) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdbb9,	// (0x0006afa3) sat_plugin_idle_act4_pane_t1

0xdbd1,	// (0x0006afbb) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdbd1,	// (0x0006afbb) sat_plugin_idle_act4_pane_t2

0xdbe9,	// (0x0006afd3) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdbe9,	// (0x0006afd3) sat_plugin_idle_act4_pane_t3

0xdc01,	// (0x0006afeb) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdc01,	// (0x0006afeb) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd5a,	// (0x0006d144) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd5a,	// (0x0006d144) sat_plugin_idle_act4_pane_t

0x8f6b,	// (0x00066355) popup_battery_window_ParamLimits

0x8f6b,	// (0x00066355) popup_battery_window

0x70ba,	// (0x000644a4) bg_popup_sub_pane_cp25_ParamLimits

0x70ba,	// (0x000644a4) bg_popup_sub_pane_cp25

0x6433,	// (0x0006381d) popup_battery_window_g1_ParamLimits

0x6433,	// (0x0006381d) popup_battery_window_g1

0x643f,	// (0x00063829) popup_battery_window_t1_ParamLimits

0x643f,	// (0x00063829) popup_battery_window_t1

0x6451,	// (0x0006383b) popup_battery_window_t2_ParamLimits

0x6451,	// (0x0006383b) popup_battery_window_t2

0x0001,

0xfd63,	// (0x0006d14d) popup_battery_window_t_ParamLimits

0xfd63,	// (0x0006d14d) popup_battery_window_t

0xa1bf,	// (0x000675a9) midp_canvas_pane_ParamLimits

0xa231,	// (0x0006761b) midp_keypad_pane_ParamLimits

0xa231,	// (0x0006761b) midp_keypad_pane

0x8461,	// (0x0006584b) main_midp_pane_ParamLimits

0xcc24,	// (0x0006a00e) signal_pane_g2_cp_ParamLimits

0xdc19,	// (0x0006b003) aid_size_cell_midp_keypad_ParamLimits

0xdc19,	// (0x0006b003) aid_size_cell_midp_keypad

0xdc37,	// (0x0006b021) midp_keyp_game_grid_pane_ParamLimits

0xdc37,	// (0x0006b021) midp_keyp_game_grid_pane

0xdc5e,	// (0x0006b048) midp_keyp_rocker_pane_ParamLimits

0xdc5e,	// (0x0006b048) midp_keyp_rocker_pane

0xdcaf,	// (0x0006b099) midp_keyp_sk_left_pane_ParamLimits

0xdcaf,	// (0x0006b099) midp_keyp_sk_left_pane

0xdd03,	// (0x0006b0ed) midp_keyp_sk_right_pane_ParamLimits

0xdd03,	// (0x0006b0ed) midp_keyp_sk_right_pane

0x6f20,	// (0x0006430a) bg_button_pane_cp03

0xdd57,	// (0x0006b141) midp_keyp_sk_left_pane_g1

0x6f20,	// (0x0006430a) bg_button_pane_cp04

0xdd57,	// (0x0006b141) midp_keyp_sk_right_pane_g1

0x4727,	// (0x00061b11) midp_keyp_rocker_pane_g1

0xdd60,	// (0x0006b14a) keyp_game_cell_pane_ParamLimits

0xdd60,	// (0x0006b14a) keyp_game_cell_pane

0x6f20,	// (0x0006430a) bg_button_pane_cp02

0xdd84,	// (0x0006b16e) keyp_game_cell_pane_g1

0x8f8b,	// (0x00066375) popup_fep_vkb2_window_ParamLimits

0x8f8b,	// (0x00066375) popup_fep_vkb2_window

0xb827,	// (0x00068c11) aid_size_cell_vkb2_ParamLimits

0xb827,	// (0x00068c11) aid_size_cell_vkb2

0xb865,	// (0x00068c4f) popup_fep_vkb2_window_g1_ParamLimits

0xb865,	// (0x00068c4f) popup_fep_vkb2_window_g1

0xb8b5,	// (0x00068c9f) vkb2_area_bottom_pane_ParamLimits

0xb8b5,	// (0x00068c9f) vkb2_area_bottom_pane

0xb909,	// (0x00068cf3) vkb2_area_keypad_pane_ParamLimits

0xb909,	// (0x00068cf3) vkb2_area_keypad_pane

0xb951,	// (0x00068d3b) vkb2_area_top_pane_ParamLimits

0xb951,	// (0x00068d3b) vkb2_area_top_pane

0xb9d7,	// (0x00068dc1) vkb2_top_entry_pane_ParamLimits

0xb9d7,	// (0x00068dc1) vkb2_top_entry_pane

0xba04,	// (0x00068dee) vkb2_top_grid_left_pane_ParamLimits

0xba04,	// (0x00068dee) vkb2_top_grid_left_pane

0xba24,	// (0x00068e0e) vkb2_top_grid_right_pane_ParamLimits

0xba24,	// (0x00068e0e) vkb2_top_grid_right_pane

0x13c5,	// (0x0005e7af) vkb2_cell_keypad_pane_ParamLimits

0x13c5,	// (0x0005e7af) vkb2_cell_keypad_pane

0xba6a,	// (0x00068e54) vkb2_area_bottom_grid_pane_ParamLimits

0xba6a,	// (0x00068e54) vkb2_area_bottom_grid_pane

0xba94,	// (0x00068e7e) vkb2_area_bottom_pane_g1_ParamLimits

0xba94,	// (0x00068e7e) vkb2_area_bottom_pane_g1

0xbaba,	// (0x00068ea4) vkb2_area_bottom_pane_g2_ParamLimits

0xbaba,	// (0x00068ea4) vkb2_area_bottom_pane_g2

0xbaeb,	// (0x00068ed5) vkb2_area_bottom_pane_g3_ParamLimits

0xbaeb,	// (0x00068ed5) vkb2_area_bottom_pane_g3

0x0002,

0xfd68,	// (0x0006d152) vkb2_area_bottom_pane_g_ParamLimits

0xfd68,	// (0x0006d152) vkb2_area_bottom_pane_g

0x156f,	// (0x0005e959) vkb2_top_cell_left_pane_ParamLimits

0x156f,	// (0x0005e959) vkb2_top_cell_left_pane

0xdd8d,	// (0x0006b177) vkb2_top_entry_pane_g1_ParamLimits

0xdd8d,	// (0x0006b177) vkb2_top_entry_pane_g1

0xdd9b,	// (0x0006b185) vkb2_top_entry_pane_t1_ParamLimits

0xdd9b,	// (0x0006b185) vkb2_top_entry_pane_t1

0x6602,	// (0x000639ec) vkb2_top_entry_pane_t2_ParamLimits

0x6602,	// (0x000639ec) vkb2_top_entry_pane_t2

0x6634,	// (0x00063a1e) vkb2_top_entry_pane_t3_ParamLimits

0x6634,	// (0x00063a1e) vkb2_top_entry_pane_t3

0x0002,

0xfd6f,	// (0x0006d159) vkb2_top_entry_pane_t_ParamLimits

0xfd6f,	// (0x0006d159) vkb2_top_entry_pane_t

0xbb55,	// (0x00068f3f) vkb2_top_grid_right_pane_g1_ParamLimits

0xbb55,	// (0x00068f3f) vkb2_top_grid_right_pane_g1

0x15d2,	// (0x0005e9bc) vkb2_top_grid_right_pane_g2_ParamLimits

0x15d2,	// (0x0005e9bc) vkb2_top_grid_right_pane_g2

0x15ea,	// (0x0005e9d4) vkb2_top_grid_right_pane_g3_ParamLimits

0x15ea,	// (0x0005e9d4) vkb2_top_grid_right_pane_g3

0xbb6b,	// (0x00068f55) vkb2_top_grid_right_pane_g4_ParamLimits

0xbb6b,	// (0x00068f55) vkb2_top_grid_right_pane_g4

0x0003,

0xfd76,	// (0x0006d160) vkb2_top_grid_right_pane_g_ParamLimits

0xfd76,	// (0x0006d160) vkb2_top_grid_right_pane_g

0x1618,	// (0x0005ea02) vkb2_top_cell_left_pane_g1

0x162f,	// (0x0005ea19) vkb2_cell_keypad_pane_g1_ParamLimits

0x162f,	// (0x0005ea19) vkb2_cell_keypad_pane_g1

0x6658,	// (0x00063a42) vkb2_cell_keypad_pane_t1_ParamLimits

0x6658,	// (0x00063a42) vkb2_cell_keypad_pane_t1

0x163d,	// (0x0005ea27) vkb2_cell_bottom_grid_pane_ParamLimits

0x163d,	// (0x0005ea27) vkb2_cell_bottom_grid_pane

0x1676,	// (0x0005ea60) vkb2_cell_bottom_grid_pane_g1

0xda2d,	// (0x0006ae17) aid_call2_pane_cp02

0xda35,	// (0x0006ae1f) aid_call_pane_cp02

0xda3d,	// (0x0006ae27) clock_digital_number_pane_cp10

0xda45,	// (0x0006ae2f) clock_digital_number_pane_cp11

0xda4d,	// (0x0006ae37) clock_digital_number_pane_cp12

0xda55,	// (0x0006ae3f) clock_digital_number_pane_cp13

0xda5d,	// (0x0006ae47) clock_digital_separator_pane_cp10

0xbeb5,	// (0x0006929f) popup_clock_digital_analogue_window_cp2_g1

0xbeb5,	// (0x0006929f) popup_clock_digital_analogue_window_cp2_g2

0xda65,	// (0x0006ae4f) popup_clock_digital_analogue_window_cp2_g3

0xbeb5,	// (0x0006929f) popup_clock_digital_analogue_window_cp2_g4

0xda65,	// (0x0006ae4f) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd2b,	// (0x0006d115) popup_clock_digital_analogue_window_cp2_g

0xda6d,	// (0x0006ae57) popup_clock_digital_analogue_window_cp2_t1

0xda7b,	// (0x0006ae65) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd36,	// (0x0006d120) popup_clock_digital_analogue_window_cp2_t

0x4727,	// (0x00061b11) clock_digital_number_pane_cp10_g1

0x4727,	// (0x00061b11) clock_digital_number_pane_cp10_g2

0x0001,

0xfb19,	// (0x0006cf03) clock_digital_number_pane_cp10_g

0x4727,	// (0x00061b11) clock_digital_separator_pane_cp10_g1

0x4727,	// (0x00061b11) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb19,	// (0x0006cf03) clock_digital_separator_pane_cp10_g

0xd92a,	// (0x0006ad14) uniindi_top_pane_g3

0x6090,	// (0x0006347a) uniindi_top_pane_g4

0x1450,	// (0x0005e83a) vkb2_row_keypad_pane_ParamLimits

0x1450,	// (0x0005e83a) vkb2_row_keypad_pane

0x1692,	// (0x0005ea7c) vkb2_cell_t_keypad_pane_ParamLimits

0x1692,	// (0x0005ea7c) vkb2_cell_t_keypad_pane

0x16a2,	// (0x0005ea8c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x16a2,	// (0x0005ea8c) vkb2_cell_t_keypad_pane_cp08

0x16b5,	// (0x0005ea9f) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x16b5,	// (0x0005ea9f) vkb2_cell_t_keypad_pane_cp09

0x16c9,	// (0x0005eab3) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x16c9,	// (0x0005eab3) vkb2_cell_t_keypad_pane_cp01

0x16da,	// (0x0005eac4) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x16da,	// (0x0005eac4) vkb2_cell_t_keypad_pane_cp02

0x16eb,	// (0x0005ead5) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x16eb,	// (0x0005ead5) vkb2_cell_t_keypad_pane_cp03

0x16fc,	// (0x0005eae6) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x16fc,	// (0x0005eae6) vkb2_cell_t_keypad_pane_cp04

0x170d,	// (0x0005eaf7) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x170d,	// (0x0005eaf7) vkb2_cell_t_keypad_pane_cp05

0x171e,	// (0x0005eb08) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x171e,	// (0x0005eb08) vkb2_cell_t_keypad_pane_cp06

0x172f,	// (0x0005eb19) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x172f,	// (0x0005eb19) vkb2_cell_t_keypad_pane_cp07

0x1740,	// (0x0005eb2a) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1740,	// (0x0005eb2a) vkb2_cell_t_keypad_pane_cp10

0x0ded,	// (0x0005e1d7) vkb2_cell_t_keypad_pane_g1

0x666f,	// (0x00063a59) vkb2_cell_t_keypad_pane_t1

0xe6f3,	// (0x0006badd) popup_grid_graphic2_window

0xddd4,	// (0x0006b1be) aid_size_cell_graphic2_ParamLimits

0xddd4,	// (0x0006b1be) aid_size_cell_graphic2

0xde12,	// (0x0006b1fc) bg_popup_window_pane_cp21_ParamLimits

0xde12,	// (0x0006b1fc) bg_popup_window_pane_cp21

0xde20,	// (0x0006b20a) graphic2_pages_pane_ParamLimits

0xde20,	// (0x0006b20a) graphic2_pages_pane

0xde76,	// (0x0006b260) grid_graphic2_control_pane_ParamLimits

0xde76,	// (0x0006b260) grid_graphic2_control_pane

0xdebe,	// (0x0006b2a8) grid_graphic2_pane_ParamLimits

0xdebe,	// (0x0006b2a8) grid_graphic2_pane

0xdf45,	// (0x0006b32f) cell_graphic2_pane

0xe6f3,	// (0x0006badd) main_comp_mode_pane

0x58f0,	// (0x00062cda) list_ai3_gene_pane_ParamLimits

0xd6d9,	// (0x0006aac3) bg_popup_window_pane_cp19_ParamLimits

0x5cca,	// (0x000630b4) bg_touch_area_indi_pane_ParamLimits

0x5cca,	// (0x000630b4) bg_touch_area_indi_pane

0x5ce0,	// (0x000630ca) bg_touch_area_indi_pane_cp01_ParamLimits

0x5ce0,	// (0x000630ca) bg_touch_area_indi_pane_cp01

0x5cf6,	// (0x000630e0) bg_touch_area_indi_pane_cp02_ParamLimits

0x5cf6,	// (0x000630e0) bg_touch_area_indi_pane_cp02

0x5d0c,	// (0x000630f6) bg_touch_area_indi_pane_cp03_ParamLimits

0x5d0c,	// (0x000630f6) bg_touch_area_indi_pane_cp03

0x5d26,	// (0x00063110) popup_slider_window_g1_ParamLimits

0x5d42,	// (0x0006312c) popup_slider_window_g2_ParamLimits

0x5d5e,	// (0x00063148) popup_slider_window_g3_ParamLimits

0xfcc0,	// (0x0006d0aa) popup_slider_window_g_ParamLimits

0x5dc4,	// (0x000631ae) popup_slider_window_t1_ParamLimits

0x5e38,	// (0x00063222) small_volume_slider_vertical_pane_ParamLimits

0xdf45,	// (0x0006b32f) cell_graphic2_pane_ParamLimits

0xdfa0,	// (0x0006b38a) bg_button_pane_cp10_ParamLimits

0xdfa0,	// (0x0006b38a) bg_button_pane_cp10

0xdfb3,	// (0x0006b39d) bg_button_pane_cp11_ParamLimits

0xdfb3,	// (0x0006b39d) bg_button_pane_cp11

0xdfc6,	// (0x0006b3b0) graphic2_pages_pane_g1_ParamLimits

0xdfc6,	// (0x0006b3b0) graphic2_pages_pane_g1

0xdfe1,	// (0x0006b3cb) graphic2_pages_pane_g2_ParamLimits

0xdfe1,	// (0x0006b3cb) graphic2_pages_pane_g2

0x0001,

0xfd84,	// (0x0006d16e) graphic2_pages_pane_g_ParamLimits

0xfd84,	// (0x0006d16e) graphic2_pages_pane_g

0xdff9,	// (0x0006b3e3) graphic2_pages_pane_t1_ParamLimits

0xdff9,	// (0x0006b3e3) graphic2_pages_pane_t1

0xe011,	// (0x0006b3fb) cell_graphic2_control_pane_ParamLimits

0xe011,	// (0x0006b3fb) cell_graphic2_control_pane

0xe043,	// (0x0006b42d) cell_graphic2_pane_g1_ParamLimits

0xe043,	// (0x0006b42d) cell_graphic2_pane_g1

0xe050,	// (0x0006b43a) cell_graphic2_pane_g2_ParamLimits

0xe050,	// (0x0006b43a) cell_graphic2_pane_g2

0xce3c,	// (0x0006a226) cell_graphic2_pane_g3_ParamLimits

0xce3c,	// (0x0006a226) cell_graphic2_pane_g3

0xe05d,	// (0x0006b447) cell_graphic2_pane_g4_ParamLimits

0xe05d,	// (0x0006b447) cell_graphic2_pane_g4

0xe06a,	// (0x0006b454) cell_graphic2_pane_g5_ParamLimits

0xe06a,	// (0x0006b454) cell_graphic2_pane_g5

0x0004,

0xfd89,	// (0x0006d173) cell_graphic2_pane_g_ParamLimits

0xfd89,	// (0x0006d173) cell_graphic2_pane_g

0xe087,	// (0x0006b471) cell_graphic2_pane_t1_ParamLimits

0xe087,	// (0x0006b471) cell_graphic2_pane_t1

0x2c53,	// (0x0006003d) grid_highlight_pane_cp11_ParamLimits

0x2c53,	// (0x0006003d) grid_highlight_pane_cp11

0x70ba,	// (0x000644a4) bg_button_pane_cp05

0xe0d1,	// (0x0006b4bb) cell_graphic2_control_pane_g1

0x4727,	// (0x00061b11) bg_touch_area_indi_pane_g1

0x6948,	// (0x00063d32) aid_cmod_rocker_key_size

0x6952,	// (0x00063d3c) aid_cmode_itu_key_size

0x695c,	// (0x00063d46) main_cmode_video_pane

0x6966,	// (0x00063d50) main_comp_mode_itu_pane

0x6972,	// (0x00063d5c) main_comp_mode_rocker_pane

0x697e,	// (0x00063d68) cell_cmode_rocker_pane_ParamLimits

0x697e,	// (0x00063d68) cell_cmode_rocker_pane

0x6990,	// (0x00063d7a) cell_cmode_itu_pane_ParamLimits

0x6990,	// (0x00063d7a) cell_cmode_itu_pane

0x8038,	// (0x00065422) bg_button_pane_cp06_ParamLimits

0x8038,	// (0x00065422) bg_button_pane_cp06

0x4997,	// (0x00061d81) cell_cmode_rocker_pane_g1_ParamLimits

0x4997,	// (0x00061d81) cell_cmode_rocker_pane_g1

0x5edc,	// (0x000632c6) cell_cmode_rocker_pane_g2_ParamLimits

0x5edc,	// (0x000632c6) cell_cmode_rocker_pane_g2

0x0001,

0xfd99,	// (0x0006d183) cell_cmode_rocker_pane_g_ParamLimits

0xfd99,	// (0x0006d183) cell_cmode_rocker_pane_g

0x6f20,	// (0x0006430a) bg_button_pane_cp07

0x69a5,	// (0x00063d8f) cell_cmode_itu_pane_g1

0x69ae,	// (0x00063d98) cell_cmode_itu_pane_t1

0x69bc,	// (0x00063da6) cell_cmode_itu_pane_t2

0x0001,

0xfd9e,	// (0x0006d188) cell_cmode_itu_pane_t

0x6102,	// (0x000634ec) aid_touch_ctrl_left

0x610a,	// (0x000634f4) aid_touch_ctrl_right

0x6f20,	// (0x0006430a) compa_mode_pane

0xe0f7,	// (0x0006b4e1) aid_cmod_rocker_key_size_cp

0xe101,	// (0x0006b4eb) aid_cmode_itu_key_size_cp

0x69de,	// (0x00063dc8) compa_mode_pane_g1

0x69e6,	// (0x00063dd0) compa_mode_pane_g2

0x69ee,	// (0x00063dd8) compa_mode_pane_g3

0x0002,

0xfda3,	// (0x0006d18d) compa_mode_pane_g

0xe10b,	// (0x0006b4f5) main_comp_mode_itu_pane_cp

0xe113,	// (0x0006b4fd) main_comp_mode_rocker_pane_cp

0xe11b,	// (0x0006b505) cell_cmode_itu_pane_cp_ParamLimits

0xe11b,	// (0x0006b505) cell_cmode_itu_pane_cp

0xe130,	// (0x0006b51a) cell_cmode_rocker_pane_cp_ParamLimits

0xe130,	// (0x0006b51a) cell_cmode_rocker_pane_cp

0x8038,	// (0x00065422) bg_button_pane_cp06_cp_ParamLimits

0x8038,	// (0x00065422) bg_button_pane_cp06_cp

0x4997,	// (0x00061d81) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4997,	// (0x00061d81) cell_cmode_rocker_pane_g1_cp

0x4727,	// (0x00061b11) cell_cmode_rocker_pane_g2_cp

0x6f20,	// (0x0006430a) bg_button_pane_cp07_cp

0xe142,	// (0x0006b52c) cell_cmode_itu_pane_g1_cp

0xe14b,	// (0x0006b535) cell_cmode_itu_pane_t1_cp

0xe14b,	// (0x0006b535) cell_cmode_itu_pane_t2_cp

0xc9c0,	// (0x00069daa) settings_code_pane_cp2

0x6f82,	// (0x0006436c) bg_popup_window_pane_cp3_ParamLimits

0x71d3,	// (0x000645bd) heading_pane_cp3_ParamLimits

0x71e2,	// (0x000645cc) listscroll_popup_graphic_pane_ParamLimits

0x0b96,	// (0x0005df80) fep_hwr_aid_pane_ParamLimits

0x1116,	// (0x0005e500) aid_touch_sctrl_top_ParamLimits

0x1131,	// (0x0005e51b) sctrl_sk_top_pane_g1_ParamLimits

0x0ded,	// (0x0005e1d7) sctrl_sk_top_pane_g2_ParamLimits

0xfcd9,	// (0x0006d0c3) sctrl_sk_top_pane_g_ParamLimits

0x113e,	// (0x0005e528) sctrl_sk_top_pane_t1_ParamLimits

0x1116,	// (0x0005e500) aid_touch_sctrl_bottom_ParamLimits

0x113e,	// (0x0005e528) sctrl_sk_bottom_pane_t1_ParamLimits

0xd8f6,	// (0x0006ace0) aid_area_touch_clock

0xb999,	// (0x00068d83) aid_vkb2_area_top_pane_cell_ParamLimits

0xb999,	// (0x00068d83) aid_vkb2_area_top_pane_cell

0xba44,	// (0x00068e2e) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xba44,	// (0x00068e2e) aid_vkb2_area_bottom_pane_cell

0x65ba,	// (0x000639a4) popup_char_count_window

0x6a44,	// (0x00063e2e) popup_char_count_window_g1

0x6a4d,	// (0x00063e37) popup_char_count_window_g2

0x6a56,	// (0x00063e40) popup_char_count_window_g3

0x0002,

0xfdaa,	// (0x0006d194) popup_char_count_window_g

0x6a5f,	// (0x00063e49) popup_char_count_window_t1

0x11ed,	// (0x0005e5d7) popup_fep_char_preview_window_ParamLimits

0x11ed,	// (0x0005e5d7) popup_fep_char_preview_window

0xb9b9,	// (0x00068da3) vkb2_top_candi_pane_ParamLimits

0xb9b9,	// (0x00068da3) vkb2_top_candi_pane

0xe159,	// (0x0006b543) cell_vkb2_top_candi_pane_ParamLimits

0xe159,	// (0x0006b543) cell_vkb2_top_candi_pane

0x1755,	// (0x0005eb3f) bg_popup_fep_char_preview_window_ParamLimits

0x1755,	// (0x0005eb3f) bg_popup_fep_char_preview_window

0x1763,	// (0x0005eb4d) popup_fep_char_preview_window_t1_ParamLimits

0x1763,	// (0x0005eb4d) popup_fep_char_preview_window_t1

0x6aba,	// (0x00063ea4) bg_popup_fep_char_preview_window_g1

0x6ac2,	// (0x00063eac) bg_popup_fep_char_preview_window_g2

0x6aca,	// (0x00063eb4) bg_popup_fep_char_preview_window_g3

0x6ad2,	// (0x00063ebc) bg_popup_fep_char_preview_window_g4

0x6ada,	// (0x00063ec4) bg_popup_fep_char_preview_window_g5

0x6ae2,	// (0x00063ecc) bg_popup_fep_char_preview_window_g6

0x6aea,	// (0x00063ed4) bg_popup_fep_char_preview_window_g7

0x6af2,	// (0x00063edc) bg_popup_fep_char_preview_window_g8

0x6afa,	// (0x00063ee4) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb1,	// (0x0006d19b) bg_popup_fep_char_preview_window_g

0x0ded,	// (0x0005e1d7) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0ded,	// (0x0005e1d7) cell_vkb2_top_candi_pane_g1

0x0dfb,	// (0x0005e1e5) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0dfb,	// (0x0005e1e5) cell_vkb2_top_candi_pane_g2

0x4cae,	// (0x00062098) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4cae,	// (0x00062098) cell_vkb2_top_candi_pane_g3

0x17a5,	// (0x0005eb8f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x17a5,	// (0x0005eb8f) cell_vkb2_top_candi_pane_g4

0x4eac,	// (0x00062296) cell_vkb2_top_candi_pane_g5_ParamLimits

0x4eac,	// (0x00062296) cell_vkb2_top_candi_pane_g5

0x17c6,	// (0x0005ebb0) cell_vkb2_top_candi_pane_g6_ParamLimits

0x17c6,	// (0x0005ebb0) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc6,	// (0x0006d1b0) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc6,	// (0x0006d1b0) cell_vkb2_top_candi_pane_g

0x17d4,	// (0x0005ebbe) cell_vkb2_top_candi_pane_t1

0xb447,	// (0x00068831) aid_size_touch_slider_mark_ParamLimits

0xb447,	// (0x00068831) aid_size_touch_slider_mark

0xde5c,	// (0x0006b246) grid_graphic2_catg_pane_ParamLimits

0xde5c,	// (0x0006b246) grid_graphic2_catg_pane

0xdf18,	// (0x0006b302) popup_grid_graphic2_window_t1_ParamLimits

0xdf18,	// (0x0006b302) popup_grid_graphic2_window_t1

0xdf2e,	// (0x0006b318) popup_grid_graphic2_window_t2_ParamLimits

0xdf2e,	// (0x0006b318) popup_grid_graphic2_window_t2

0x0001,

0xfd7f,	// (0x0006d169) popup_grid_graphic2_window_t_ParamLimits

0xfd7f,	// (0x0006d169) popup_grid_graphic2_window_t

0x70ba,	// (0x000644a4) bg_button_pane_cp05_ParamLimits

0xe0d1,	// (0x0006b4bb) cell_graphic2_control_pane_g1_ParamLimits

0xe1bf,	// (0x0006b5a9) cell_graphic2_catg_pane_ParamLimits

0xe1bf,	// (0x0006b5a9) cell_graphic2_catg_pane

0x6f20,	// (0x0006430a) bg_button_pane_cp12

0xe1d1,	// (0x0006b5bb) cell_graphic2_catg_pane_g1

0x6016,	// (0x00063400) cell_tb_ext_pane_t1_ParamLimits

0x158f,	// (0x0005e979) vkb2_top_cell_right_narrow_pane_ParamLimits

0x158f,	// (0x0005e979) vkb2_top_cell_right_narrow_pane

0x15a7,	// (0x0005e991) vkb2_top_cell_right_wide_pane_ParamLimits

0x15a7,	// (0x0005e991) vkb2_top_cell_right_wide_pane

0x0b88,	// (0x0005df72) bg_vkb2_func_pane_ParamLimits

0x0b88,	// (0x0005df72) bg_vkb2_func_pane

0x1618,	// (0x0005ea02) vkb2_top_cell_left_pane_g1_ParamLimits

0x0b88,	// (0x0005df72) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0b88,	// (0x0005df72) bg_vkb2_fuc_pane_cp03

0x1676,	// (0x0005ea60) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1f59,	// (0x0005f343) bg_vkb2_func_pane_g1

0x1f61,	// (0x0005f34b) bg_vkb2_func_pane_g2

0x1f71,	// (0x0005f35b) bg_vkb2_func_pane_g3

0x1f69,	// (0x0005f353) bg_vkb2_func_pane_g4

0x1f79,	// (0x0005f363) bg_vkb2_func_pane_g5

0x1f81,	// (0x0005f36b) bg_vkb2_func_pane_g6

0x1f89,	// (0x0005f373) bg_vkb2_func_pane_g7

0x1f91,	// (0x0005f37b) bg_vkb2_func_pane_g8

0x1f51,	// (0x0005f33b) bg_vkb2_func_pane_g9

0x0008,

0xfdd3,	// (0x0006d1bd) bg_vkb2_func_pane_g

0x0b88,	// (0x0005df72) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0b88,	// (0x0005df72) bg_vkb2_fuc_pane_cp01

0x1618,	// (0x0005ea02) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1618,	// (0x0005ea02) vkb2_top_cell_right_wide_pane_g1

0x0b88,	// (0x0005df72) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0b88,	// (0x0005df72) bg_vkb2_fuc_pane_cp02

0x1676,	// (0x0005ea60) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1676,	// (0x0005ea60) vkb2_top_cell_right_narrow_pane_g1

0xd61b,	// (0x0006aa05) aid_touch_area_decrease_ParamLimits

0xd61b,	// (0x0006aa05) aid_touch_area_decrease

0xd655,	// (0x0006aa3f) aid_touch_area_increase_ParamLimits

0xd655,	// (0x0006aa3f) aid_touch_area_increase

0xd67d,	// (0x0006aa67) aid_touch_area_mute_ParamLimits

0xd67d,	// (0x0006aa67) aid_touch_area_mute

0xd6a5,	// (0x0006aa8f) aid_touch_area_slider_ParamLimits

0xd6a5,	// (0x0006aa8f) aid_touch_area_slider

0xd6e5,	// (0x0006aacf) popup_slider_window_g4_ParamLimits

0xd6e5,	// (0x0006aacf) popup_slider_window_g4

0xd70d,	// (0x0006aaf7) popup_slider_window_g5_ParamLimits

0xd70d,	// (0x0006aaf7) popup_slider_window_g5

0xd741,	// (0x0006ab2b) popup_slider_window_g6_ParamLimits

0xd741,	// (0x0006ab2b) popup_slider_window_g6

0x5df2,	// (0x000631dc) popup_slider_window_t2_ParamLimits

0x5df2,	// (0x000631dc) popup_slider_window_t2

0x0001,

0xfccd,	// (0x0006d0b7) popup_slider_window_t_ParamLimits

0xfccd,	// (0x0006d0b7) popup_slider_window_t

0xd75d,	// (0x0006ab47) slider_pane_ParamLimits

0xd75d,	// (0x0006ab47) slider_pane

0x6b1d,	// (0x00063f07) slider_pane_g1_ParamLimits

0x6b1d,	// (0x00063f07) slider_pane_g1

0x6b31,	// (0x00063f1b) slider_pane_g2_ParamLimits

0x6b31,	// (0x00063f1b) slider_pane_g2

0x6b47,	// (0x00063f31) slider_pane_g3_ParamLimits

0x6b47,	// (0x00063f31) slider_pane_g3

0x0003,

0xfde6,	// (0x0006d1d0) slider_pane_g_ParamLimits

0xfde6,	// (0x0006d1d0) slider_pane_g

0xab80,	// (0x00067f6a) popup_tb_float_extension_window_ParamLimits

0xab80,	// (0x00067f6a) popup_tb_float_extension_window

0x6b73,	// (0x00063f5d) aid_size_cell_tb_float_ext

0x6f20,	// (0x0006430a) bg_popup_sub_window_cp28

0xe1da,	// (0x0006b5c4) grid_tb_float_ext_pane

0xe1e4,	// (0x0006b5ce) cell_tb_float_ext_pane_ParamLimits

0xe1e4,	// (0x0006b5ce) cell_tb_float_ext_pane

0xe1fe,	// (0x0006b5e8) cell_tb_float_ext_pane_g1

0xe207,	// (0x0006b5f1) grid_highlight_pane_cp12

0xb5d5,	// (0x000689bf) cell_last_hwr_side_pane_ParamLimits

0xb5d5,	// (0x000689bf) cell_last_hwr_side_pane

0x4727,	// (0x00061b11) cell_last_hwr_side_pane_g1

0x6bb5,	// (0x00063f9f) cell_last_hwr_side_pane_g2

0x0001,

0xfdef,	// (0x0006d1d9) cell_last_hwr_side_pane_g

0xbb20,	// (0x00068f0a) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbb20,	// (0x00068f0a) vkb2_area_bottom_space_btn_pane

0x0ded,	// (0x0005e1d7) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x666f,	// (0x00063a59) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x17d4,	// (0x0005ebbe) cell_vkb2_top_candi_pane_t1_ParamLimits

0x17f3,	// (0x0005ebdd) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x17f3,	// (0x0005ebdd) vkb2_area_bottom_space_btn_pane_g1

0x182d,	// (0x0005ec17) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x182d,	// (0x0005ec17) vkb2_area_bottom_space_btn_pane_g2

0x1863,	// (0x0005ec4d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1863,	// (0x0005ec4d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf4,	// (0x0006d1de) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf4,	// (0x0006d1de) vkb2_area_bottom_space_btn_pane_g

0x0c4b,	// (0x0005e035) cel_fep_hwr_func_pane_ParamLimits

0x0c4b,	// (0x0005e035) cel_fep_hwr_func_pane

0xb5aa,	// (0x00068994) cell_hwr_side_button_pane_ParamLimits

0xb5aa,	// (0x00068994) cell_hwr_side_button_pane

0xd8f6,	// (0x0006ace0) aid_area_touch_clock_ParamLimits

0x70ba,	// (0x000644a4) bg_uniindi_top_pane_ParamLimits

0xd908,	// (0x0006acf2) uniindi_top_pane_g1_ParamLimits

0xd91e,	// (0x0006ad08) uniindi_top_pane_g2_ParamLimits

0xd92a,	// (0x0006ad14) uniindi_top_pane_g3_ParamLimits

0x6090,	// (0x0006347a) uniindi_top_pane_g4_ParamLimits

0xfd05,	// (0x0006d0ef) uniindi_top_pane_g_ParamLimits

0xd93b,	// (0x0006ad25) uniindi_top_pane_t1_ParamLimits

0x70ba,	// (0x000644a4) bg_vkb2_func_pane_cp01_ParamLimits

0x70ba,	// (0x000644a4) bg_vkb2_func_pane_cp01

0x6bbe,	// (0x00063fa8) cel_fep_hwr_func_pane_g1_ParamLimits

0x6bbe,	// (0x00063fa8) cel_fep_hwr_func_pane_g1

0x70ba,	// (0x000644a4) bg_vkb2_func_pane_cp02_ParamLimits

0x70ba,	// (0x000644a4) bg_vkb2_func_pane_cp02

0x6bbe,	// (0x00063fa8) cell_hwr_side_button_pane_g1_ParamLimits

0x6bbe,	// (0x00063fa8) cell_hwr_side_button_pane_g1

0x1dd5,	// (0x0005f1bf) status_pane_g4_ParamLimits

0x1dd5,	// (0x0005f1bf) status_pane_g4

0x1def,	// (0x0005f1d9) status_pane_t1

0x438d,	// (0x00061777) form2_midp_gauge_slider_cont_pane

0x4395,	// (0x0006177f) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcd4d,	// (0x0006a137) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcd5f,	// (0x0006a149) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacc,	// (0x0006ceb6) form2_midp_gauge_slider_pane_t_ParamLimits

0x43cb,	// (0x000617b5) form2_midp_slider_pane_ParamLimits

0x11ad,	// (0x0005e597) aid_size_cell_func_vkb2_ParamLimits

0x11ad,	// (0x0005e597) aid_size_cell_func_vkb2

0x6b5f,	// (0x00063f49) slider_pane_g4_ParamLimits

0x6b5f,	// (0x00063f49) slider_pane_g4

0xbb89,	// (0x00068f73) form2_midp_gauge_slider_pane_t2_cp01

0xbb97,	// (0x00068f81) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbb97,	// (0x00068f81) form2_midp_gauge_slider_pane_t3_cp01

0x18d8,	// (0x0005ecc2) form2_midp_slider_pane_cp01

0x6f20,	// (0x0006430a) navi_smil_pane

0x6bf7,	// (0x00063fe1) navi_smil_pane_g1

0x6bff,	// (0x00063fe9) navi_smil_pane_t1

0x6bcc,	// (0x00063fb6) form2_midp_slider_pane_g1

0x6bd5,	// (0x00063fbf) form2_midp_slider_pane_g2

0x6bdd,	// (0x00063fc7) form2_midp_slider_pane_g3

0x6bcc,	// (0x00063fb6) form2_midp_slider_pane_g4

0xe210,	// (0x0006b5fa) form2_midp_slider_pane_g5

0x0004,

0xfdfd,	// (0x0006d1e7) form2_midp_slider_pane_g

0x189d,	// (0x0005ec87) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x189d,	// (0x0005ec87) vkb2_area_bottom_space_btn_pane_g4

0xadb8,	// (0x000681a2) lc0_navi_pane_ParamLimits

0xadb8,	// (0x000681a2) lc0_navi_pane

0xae22,	// (0x0006820c) lc0_stat_indi_pane_ParamLimits

0xae22,	// (0x0006820c) lc0_stat_indi_pane

0xae37,	// (0x00068221) ls0_title_pane_ParamLimits

0xae37,	// (0x00068221) ls0_title_pane

0x8038,	// (0x00065422) bg_popup_sub_pane_cp14_ParamLimits

0xd8dd,	// (0x0006acc7) list_uniindi_pane_ParamLimits

0xd8e9,	// (0x0006acd3) uniindi_top_pane_ParamLimits

0x60da,	// (0x000634c4) list_single_uniindi_pane_g1_ParamLimits

0x60ed,	// (0x000634d7) list_single_uniindi_pane_t1_ParamLimits

0xbbb4,	// (0x00068f9e) lc0_stat_clock_pane_ParamLimits

0xbbb4,	// (0x00068f9e) lc0_stat_clock_pane

0xe21b,	// (0x0006b605) lc0_stat_indi_pane_g1_ParamLimits

0xe21b,	// (0x0006b605) lc0_stat_indi_pane_g1

0xe228,	// (0x0006b612) lc0_stat_indi_pane_g2_ParamLimits

0xe228,	// (0x0006b612) lc0_stat_indi_pane_g2

0x0001,

0xfe08,	// (0x0006d1f2) lc0_stat_indi_pane_g_ParamLimits

0xfe08,	// (0x0006d1f2) lc0_stat_indi_pane_g

0xbbc4,	// (0x00068fae) lc0_uni_indicator_pane_ParamLimits

0xbbc4,	// (0x00068fae) lc0_uni_indicator_pane

0xe235,	// (0x0006b61f) ls0_title_pane_g1_ParamLimits

0xe235,	// (0x0006b61f) ls0_title_pane_g1

0xe249,	// (0x0006b633) ls0_title_pane_t1_ParamLimits

0xe249,	// (0x0006b633) ls0_title_pane_t1

0xbbd4,	// (0x00068fbe) lc0_uni_indicator_pane_g1_ParamLimits

0xbbd4,	// (0x00068fbe) lc0_uni_indicator_pane_g1

0x6c71,	// (0x0006405b) lc0_stat_clock_pane_t1

0xe6f3,	// (0x0006badd) main_ai5_pane

0x6c7f,	// (0x00064069) ai5_sk_pane_ParamLimits

0x6c7f,	// (0x00064069) ai5_sk_pane

0xe277,	// (0x0006b661) cell_ai5_widget_pane_ParamLimits

0xe277,	// (0x0006b661) cell_ai5_widget_pane

0x6d55,	// (0x0006413f) aid_size_cell_widget_grid

0x6d63,	// (0x0006414d) bg_ai5_widget_pane_ParamLimits

0x6d63,	// (0x0006414d) bg_ai5_widget_pane

0x6ddf,	// (0x000641c9) cell_ai5_widget_pane_g2

0x6df3,	// (0x000641dd) cell_ai5_widget_pane_g3

0x6e0d,	// (0x000641f7) cell_ai5_widget_pane_g4

0x6e1d,	// (0x00064207) cell_ai5_widget_pane_g5

0x6e2d,	// (0x00064217) cell_ai5_widget_pane_g6

0x6e39,	// (0x00064223) cell_ai5_widget_pane_g7

0x6ea5,	// (0x0006428f) cell_ai5_widget_pane_t1_ParamLimits

0x6ea5,	// (0x0006428f) cell_ai5_widget_pane_t1

0x6ec2,	// (0x000642ac) cell_ai5_widget_pane_t2_ParamLimits

0x6ec2,	// (0x000642ac) cell_ai5_widget_pane_t2

0x6eda,	// (0x000642c4) cell_ai5_widget_pane_t3_ParamLimits

0x6eda,	// (0x000642c4) cell_ai5_widget_pane_t3

0x6ef2,	// (0x000642dc) cell_ai5_widget_pane_t4_ParamLimits

0x6ef2,	// (0x000642dc) cell_ai5_widget_pane_t4

0xe2e3,	// (0x0006b6cd) cell_ai5_widget_pane_t5_ParamLimits

0xe2e3,	// (0x0006b6cd) cell_ai5_widget_pane_t5

0x7219,	// (0x00064603) cell_ai5_widget_pane_t6_ParamLimits

0x7219,	// (0x00064603) cell_ai5_widget_pane_t6

0x722b,	// (0x00064615) cell_ai5_widget_pane_t7_ParamLimits

0x722b,	// (0x00064615) cell_ai5_widget_pane_t7

0x724a,	// (0x00064634) cell_ai5_widget_pane_t8_ParamLimits

0x724a,	// (0x00064634) cell_ai5_widget_pane_t8

0x000b,

0xfe28,	// (0x0006d212) cell_ai5_widget_pane_t_ParamLimits

0xfe28,	// (0x0006d212) cell_ai5_widget_pane_t

0x72ce,	// (0x000646b8) grid_ai5_widget_pane

0x8038,	// (0x00065422) highlight_cell_ai5_widget_pane_ParamLimits

0x8038,	// (0x00065422) highlight_cell_ai5_widget_pane

0xe303,	// (0x0006b6ed) ai5_sk_left_pane

0xe30d,	// (0x0006b6f7) ai5_sk_middle_pane

0xe317,	// (0x0006b701) ai5_sk_right_pane

0x72fa,	// (0x000646e4) bg_ai5_widget_pane_g1_ParamLimits

0x72fa,	// (0x000646e4) bg_ai5_widget_pane_g1

0x7306,	// (0x000646f0) bg_ai5_widget_pane_g2_ParamLimits

0x7306,	// (0x000646f0) bg_ai5_widget_pane_g2

0x7312,	// (0x000646fc) bg_ai5_widget_pane_g3_ParamLimits

0x7312,	// (0x000646fc) bg_ai5_widget_pane_g3

0x731e,	// (0x00064708) bg_ai5_widget_pane_g4_ParamLimits

0x731e,	// (0x00064708) bg_ai5_widget_pane_g4

0x732a,	// (0x00064714) bg_ai5_widget_pane_g5_ParamLimits

0x732a,	// (0x00064714) bg_ai5_widget_pane_g5

0x7336,	// (0x00064720) bg_ai5_widget_pane_g6_ParamLimits

0x7336,	// (0x00064720) bg_ai5_widget_pane_g6

0x7342,	// (0x0006472c) bg_ai5_widget_pane_g7_ParamLimits

0x7342,	// (0x0006472c) bg_ai5_widget_pane_g7

0x734e,	// (0x00064738) bg_ai5_widget_pane_g8_ParamLimits

0x734e,	// (0x00064738) bg_ai5_widget_pane_g8

0x735a,	// (0x00064744) bg_ai5_widget_pane_g9_ParamLimits

0x735a,	// (0x00064744) bg_ai5_widget_pane_g9

0x0008,

0xfe41,	// (0x0006d22b) bg_ai5_widget_pane_g_ParamLimits

0xfe41,	// (0x0006d22b) bg_ai5_widget_pane_g

0x738c,	// (0x00064776) cell_shortcut_ai5_widget_pane_ParamLimits

0x738c,	// (0x00064776) cell_shortcut_ai5_widget_pane

0xc2f2,	// (0x000696dc) bg_cell_shortcut_ai5_widget_pane

0x739d,	// (0x00064787) cell_grid_ai5_widget_pane_g1

0xc2f2,	// (0x000696dc) highlight_cell_shortcut_ai5_widget_pane

0x1f59,	// (0x0005f343) ai5_sk_left_pane_g1

0x73a6,	// (0x00064790) ai5_sk_left_pane_g2

0x73ae,	// (0x00064798) ai5_sk_left_pane_g3

0x73b6,	// (0x000647a0) ai5_sk_left_pane_g4

0x0003,

0xfe54,	// (0x0006d23e) ai5_sk_left_pane_g

0x73be,	// (0x000647a8) ai5_sk_left_pane_t1

0x1f61,	// (0x0005f34b) ai5_sk_right_pane_g1

0x73cc,	// (0x000647b6) ai5_sk_right_pane_g2

0x73d4,	// (0x000647be) ai5_sk_right_pane_g3

0x73dc,	// (0x000647c6) ai5_sk_right_pane_g4

0x0003,

0xfe5d,	// (0x0006d247) ai5_sk_right_pane_g

0x73e4,	// (0x000647ce) ai5_sk_right_pane_t1

0x1f61,	// (0x0005f34b) ai5_sk_middle_pane_g1

0x1f59,	// (0x0005f343) ai5_sk_middle_pane_g2

0x1f79,	// (0x0005f363) ai5_sk_middle_pane_g3

0x73d4,	// (0x000647be) ai5_sk_middle_pane_g4

0x73ae,	// (0x00064798) ai5_sk_middle_pane_g5

0x73f2,	// (0x000647dc) ai5_sk_middle_pane_g6

0xe321,	// (0x0006b70b) ai5_sk_middle_pane_g7

0x0006,

0xfe66,	// (0x0006d250) ai5_sk_middle_pane_g

0xaca4,	// (0x0006808e) aid_touch_area_size_lc0_ParamLimits

0xaca4,	// (0x0006808e) aid_touch_area_size_lc0

0x0e1c,	// (0x0005e206) cell_hwr_candidate_pane_t1_ParamLimits

0x0304,	// (0x0005d6ee) aid_touch_navi_pane

0xaf30,	// (0x0006831a) status_dt_navi_pane_ParamLimits

0xaf30,	// (0x0006831a) status_dt_navi_pane

0xaf48,	// (0x00068332) status_dt_sta_pane_ParamLimits

0xaf48,	// (0x00068332) status_dt_sta_pane

0xe329,	// (0x0006b713) dt_sta_controll_pane

0xe336,	// (0x0006b720) dt_sta_indi_pane

0xe343,	// (0x0006b72d) dt_sta_title_pane

0x70ba,	// (0x000644a4) bg_dt_sta_indi_pane_ParamLimits

0x70ba,	// (0x000644a4) bg_dt_sta_indi_pane

0xe355,	// (0x0006b73f) dt_sta_battery_pane

0xe35d,	// (0x0006b747) dt_sta_indi_pane_g1

0x7444,	// (0x0006482e) dt_sta_indi_pane_g2

0x744d,	// (0x00064837) dt_sta_indi_pane_g3

0x0002,

0xfe75,	// (0x0006d25f) dt_sta_indi_pane_g

0x7456,	// (0x00064840) dt_sta_signal_pane

0x8038,	// (0x00065422) bg_dt_sta_title_pane_ParamLimits

0x8038,	// (0x00065422) bg_dt_sta_title_pane

0x2db3,	// (0x0006019d) dt_sta_title_pane_g1

0xe366,	// (0x0006b750) dt_sta_title_pane_t1_ParamLimits

0xe366,	// (0x0006b750) dt_sta_title_pane_t1

0x6f20,	// (0x0006430a) bg_dt_sta_control_pane

0xe37b,	// (0x0006b765) dt_sta_controll_pane_g1

0xe384,	// (0x0006b76e) bg_dt_sta_title_pane_g1

0xe38d,	// (0x0006b777) bg_dt_sta_title_pane_g2

0xe396,	// (0x0006b780) bg_dt_sta_title_pane_g3

0x0002,

0xfe7c,	// (0x0006d266) bg_dt_sta_title_pane_g

0x4727,	// (0x00061b11) bg_dt_sta_indi_pane_g1

0x7498,	// (0x00064882) dt_sta_signal_pane_g1

0x74a0,	// (0x0006488a) dt_sta_signal_pane_g2

0x0001,

0xfe83,	// (0x0006d26d) dt_sta_signal_pane_g

0x74a8,	// (0x00064892) dt_sta_battery_pane_g1

0x74b1,	// (0x0006489b) dt_sta_battery_pane_t1

0x4727,	// (0x00061b11) bg_dt_sta_control_pane_g1

0xbf38,	// (0x00069322) fep_china_uni_eep_pane

0xbf40,	// (0x0006932a) fep_china_uni_entry_pane_ParamLimits

0xbf50,	// (0x0006933a) popup_fep_china_uni_window_g1_ParamLimits

0xbf60,	// (0x0006934a) popup_fep_china_uni_window_g2_ParamLimits

0xbf60,	// (0x0006934a) popup_fep_china_uni_window_g2

0x0001,

0xf6ee,	// (0x0006cad8) popup_fep_china_uni_window_g_ParamLimits

0xf6ee,	// (0x0006cad8) popup_fep_china_uni_window_g

0x74c0,	// (0x000648aa) fep_china_uni_eep_pane_g1

0x74c8,	// (0x000648b2) fep_china_uni_eep_pane_t1

0x6bee,	// (0x00063fd8) aid_touch_area_size_smil_player

0x045a,	// (0x0005d844) lc0_clock_pane

0x1de3,	// (0x0005f1cd) status_pane_g5_ParamLimits

0x1de3,	// (0x0005f1cd) status_pane_g5

0xa6dc,	// (0x00067ac6) popup_keymap_window

0x1da1,	// (0x0005f18b) status_icon_pane

0x6df3,	// (0x000641dd) cell_ai5_widget_pane_g3_ParamLimits

0x6e0d,	// (0x000641f7) cell_ai5_widget_pane_g4_ParamLimits

0x6e1d,	// (0x00064207) cell_ai5_widget_pane_g5_ParamLimits

0x6e45,	// (0x0006422f) cell_ai5_widget_pane_g8_ParamLimits

0x6e45,	// (0x0006422f) cell_ai5_widget_pane_g8

0x6e59,	// (0x00064243) cell_ai5_widget_pane_g9_ParamLimits

0x6e59,	// (0x00064243) cell_ai5_widget_pane_g9

0x6e6d,	// (0x00064257) cell_ai5_widget_pane_g10_ParamLimits

0x6e6d,	// (0x00064257) cell_ai5_widget_pane_g10

0x74d7,	// (0x000648c1) status_icon_pane_g1

0x6f20,	// (0x0006430a) bg_popup_sub_pane_cp13

0x74df,	// (0x000648c9) popup_keymap_window_t1

0xa39c,	// (0x00067786) control_pane_g6_ParamLimits

0xa39c,	// (0x00067786) control_pane_g6

0xa3a9,	// (0x00067793) control_pane_g7_ParamLimits

0xa3a9,	// (0x00067793) control_pane_g7

0xa3b6,	// (0x000677a0) control_pane_g8_ParamLimits

0xa3b6,	// (0x000677a0) control_pane_g8

0xe329,	// (0x0006b713) dt_sta_controll_pane_ParamLimits

0xe336,	// (0x0006b720) dt_sta_indi_pane_ParamLimits

0xe343,	// (0x0006b72d) dt_sta_title_pane_ParamLimits

0x7f83,	// (0x0006536d) aid_size_touch_scroll_bar_cale

0x8f7f,	// (0x00066369) popup_discreet_window_ParamLimits

0x8f7f,	// (0x00066369) popup_discreet_window

0x8fd1,	// (0x000663bb) popup_sk_window

0x25f7,	// (0x0005f9e1) bg_popup_sub_pane_cp28_ParamLimits

0x25f7,	// (0x0005f9e1) bg_popup_sub_pane_cp28

0x74ed,	// (0x000648d7) popup_discreet_window_g1_ParamLimits

0x74ed,	// (0x000648d7) popup_discreet_window_g1

0xe39f,	// (0x0006b789) popup_discreet_window_t1_ParamLimits

0xe39f,	// (0x0006b789) popup_discreet_window_t1

0x752b,	// (0x00064915) popup_discreet_window_t2_ParamLimits

0x752b,	// (0x00064915) popup_discreet_window_t2

0x0002,

0xfe88,	// (0x0006d272) popup_discreet_window_t_ParamLimits

0xfe88,	// (0x0006d272) popup_discreet_window_t

0x190f,	// (0x0005ecf9) popup_sk_window_g1

0x1919,	// (0x0005ed03) popup_sk_window_g2

0x0001,

0xfe8f,	// (0x0006d279) popup_sk_window_g

0xbbff,	// (0x00068fe9) popup_sk_window_t1

0xbc0d,	// (0x00068ff7) popup_sk_window_t1_copy1

0x6ddf,	// (0x000641c9) cell_ai5_widget_pane_g2_ParamLimits

0x725c,	// (0x00064646) cell_ai5_widget_pane_t9_ParamLimits

0x725c,	// (0x00064646) cell_ai5_widget_pane_t9

0x6f20,	// (0x0006430a) main_fep_fshwr2_pane

0xbc1b,	// (0x00069005) aid_fshwr2_btn_pane

0xbc2f,	// (0x00069019) aid_fshwr2_syb_pane

0xbc43,	// (0x0006902d) aid_fshwr2_txt_pane

0xbc53,	// (0x0006903d) fshwr2_func_candi_pane

0xbc73,	// (0x0006905d) fshwr2_hwr_syb_pane

0xbc97,	// (0x00069081) fshwr2_icf_pane

0xe6f3,	// (0x0006badd) fshwr2_icf_bg_pane

0x19d1,	// (0x0005edbb) fshwr2_icf_pane_t1_ParamLimits

0x19d1,	// (0x0005edbb) fshwr2_icf_pane_t1

0xbeb5,	// (0x0006929f) fshwr2_func_candi_pane_g1

0xe3bd,	// (0x0006b7a7) fshwr2_func_candi_row_pane_ParamLimits

0xe3bd,	// (0x0006b7a7) fshwr2_func_candi_row_pane

0xbcc7,	// (0x000690b1) cell_fshwr2_syb_pane_ParamLimits

0xbcc7,	// (0x000690b1) cell_fshwr2_syb_pane

0x1a0d,	// (0x0005edf7) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1a0d,	// (0x0005edf7) fshwr2_hwr_syb_pane_g1

0xe6f3,	// (0x0006badd) bg_popup_call_pane_cp01

0xbced,	// (0x000690d7) fshwr2_func_candi_cell_pane_ParamLimits

0xbced,	// (0x000690d7) fshwr2_func_candi_cell_pane

0x23e0,	// (0x0005f7ca) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x23e0,	// (0x0005f7ca) fshwr2_func_candi_cell_bg_pane

0xbd38,	// (0x00069122) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xbd38,	// (0x00069122) fshwr2_func_candi_cell_pane_g1

0xbd6f,	// (0x00069159) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xbd6f,	// (0x00069159) fshwr2_func_candi_cell_pane_t1

0xe6f3,	// (0x0006badd) bg_button_pane_cp08

0x8461,	// (0x0006584b) cell_fshwr2_syb_bg_pane

0xbd8a,	// (0x00069174) cell_fshwr2_syb_bg_pane_g1

0xbd9d,	// (0x00069187) cell_fshwr2_syb_bg_pane_t1

0x8038,	// (0x00065422) main_tmo_pane

0xc772,	// (0x00069b5c) uni_indicator_pane_g1_ParamLimits

0xc788,	// (0x00069b72) uni_indicator_pane_g2_ParamLimits

0xc79e,	// (0x00069b88) uni_indicator_pane_g3_ParamLimits

0x3120,	// (0x0006050a) uni_indicator_pane_g4_ParamLimits

0x3120,	// (0x0006050a) uni_indicator_pane_g4

0x3134,	// (0x0006051e) uni_indicator_pane_g5_ParamLimits

0x3134,	// (0x0006051e) uni_indicator_pane_g5

0x3134,	// (0x0006051e) uni_indicator_pane_g6_ParamLimits

0x3134,	// (0x0006051e) uni_indicator_pane_g6

0xf8e6,	// (0x0006ccd0) uni_indicator_pane_g_ParamLimits

0xd5fd,	// (0x0006a9e7) popup_tmo_note_window_ParamLimits

0xd5fd,	// (0x0006a9e7) popup_tmo_note_window

0x118f,	// (0x0005e579) fshwr2_bg_pane

0xbd60,	// (0x0006914a) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xbd60,	// (0x0006914a) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe94,	// (0x0006d27e) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe94,	// (0x0006d27e) fshwr2_func_candi_cell_pane_g

0x0dd5,	// (0x0005e1bf) bg_popup_window_pane_cp01

0x1ac3,	// (0x0005eead) bg_popup_window_pane_g1_cp01

0x75a4,	// (0x0006498e) bg_popup_window_pane_cp22_ParamLimits

0x75a4,	// (0x0006498e) bg_popup_window_pane_cp22

0xe3e0,	// (0x0006b7ca) listscroll_tmo_link_pane_ParamLimits

0xe3e0,	// (0x0006b7ca) listscroll_tmo_link_pane

0x75f2,	// (0x000649dc) popup_tmo_note_window_g1_ParamLimits

0x75f2,	// (0x000649dc) popup_tmo_note_window_g1

0xe420,	// (0x0006b80a) tmo_note_info_pane_ParamLimits

0xe420,	// (0x0006b80a) tmo_note_info_pane

0xe43a,	// (0x0006b824) list_tmo_note_info_pane_g1_ParamLimits

0xe43a,	// (0x0006b824) list_tmo_note_info_pane_g1

0x7630,	// (0x00064a1a) list_tmo_note_info_pane_g2_ParamLimits

0x7630,	// (0x00064a1a) list_tmo_note_info_pane_g2

0x0001,

0xfe99,	// (0x0006d283) list_tmo_note_info_pane_g_ParamLimits

0xfe99,	// (0x0006d283) list_tmo_note_info_pane_g

0x764c,	// (0x00064a36) list_tmo_note_info_text_pane_ParamLimits

0x764c,	// (0x00064a36) list_tmo_note_info_text_pane

0x76cd,	// (0x00064ab7) list_tmo_link_pane

0x76da,	// (0x00064ac4) scroll_pane_cp20

0x76e7,	// (0x00064ad1) list_single_tmo_link_pane_ParamLimits

0x76e7,	// (0x00064ad1) list_single_tmo_link_pane

0x76f7,	// (0x00064ae1) list_single_tmo_link_pane_t1

0x7705,	// (0x00064aef) list_tmo_note_info_text_pane_t1_ParamLimits

0x7705,	// (0x00064aef) list_tmo_note_info_text_pane_t1

0x9ccd,	// (0x000670b7) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9ccd,	// (0x000670b7) aid_size_touch_scroll_bar_cp01

0x9bcd,	// (0x00066fb7) aid_size_touch_slider_marker

0x8fc1,	// (0x000663ab) popup_settings_window_ParamLimits

0x8fc1,	// (0x000663ab) popup_settings_window

0xe915,	// (0x0006bcff) popup_candi_list_indi_window

0x0304,	// (0x0005d6ee) aid_touch_navi_pane_ParamLimits

0x10ea,	// (0x0005e4d4) rs_clock_indi_pane

0x10f3,	// (0x0005e4dd) sctrl_sk_bottom_pane_ParamLimits

0x1104,	// (0x0005e4ee) sctrl_sk_top_pane_ParamLimits

0xb85d,	// (0x00068c47) popup_fep_tooltip_window

0x6d55,	// (0x0006413f) aid_size_cell_widget_grid_ParamLimits

0x6dca,	// (0x000641b4) cell_ai5_widget_pane_g1_ParamLimits

0x6dca,	// (0x000641b4) cell_ai5_widget_pane_g1

0x6e2d,	// (0x00064217) cell_ai5_widget_pane_g6_ParamLimits

0x6e39,	// (0x00064223) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe0d,	// (0x0006d1f7) cell_ai5_widget_pane_g_ParamLimits

0xfe0d,	// (0x0006d1f7) cell_ai5_widget_pane_g

0x728b,	// (0x00064675) cell_ai5_widget_pane_t10_ParamLimits

0x728b,	// (0x00064675) cell_ai5_widget_pane_t10

0x72ce,	// (0x000646b8) grid_ai5_widget_pane_ParamLimits

0x7366,	// (0x00064750) cell_contacts_ai5_widget_pane_ParamLimits

0x7366,	// (0x00064750) cell_contacts_ai5_widget_pane

0x7540,	// (0x0006492a) popup_discreet_window_t3_ParamLimits

0x7540,	// (0x0006492a) popup_discreet_window_t3

0xbcb3,	// (0x0006909d) popup_fshwr2_char_preview_window_ParamLimits

0xbcb3,	// (0x0006909d) popup_fshwr2_char_preview_window

0xe451,	// (0x0006b83b) tmo_note_info_pane_t1

0xe466,	// (0x0006b850) tmo_note_info_pane_t2

0xe47d,	// (0x0006b867) tmo_note_info_pane_t3

0x76a9,	// (0x00064a93) tmo_note_info_pane_t4

0x76bb,	// (0x00064aa5) tmo_note_info_pane_t5

0x0004,

0xfe9e,	// (0x0006d288) tmo_note_info_pane_t

0x76cd,	// (0x00064ab7) list_tmo_link_pane_ParamLimits

0x76da,	// (0x00064ac4) scroll_pane_cp20_ParamLimits

0xe6f3,	// (0x0006badd) bg_popup_fep_char_preview_window_cp01

0xe492,	// (0x0006b87c) popup_fshwr2_char_preview_window_t1

0x772c,	// (0x00064b16) popup_candi_list_indi_window_g1

0x7735,	// (0x00064b1f) bg_cell_contacts_ai5_widget_pane

0x7741,	// (0x00064b2b) cell_contacts_ai5_widget_pane_g1

0x4e01,	// (0x000621eb) cell_contacts_ai5_widget_pane_g2

0x7756,	// (0x00064b40) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea9,	// (0x0006d293) cell_contacts_ai5_widget_pane_g

0x7762,	// (0x00064b4c) cell_contacts_ai5_widget_pane_t1

0x8038,	// (0x00065422) highlight_cell_shortcut_ai5_widget_pane_cp01

0x77d9,	// (0x00064bc3) settings_container_pane

0xc2f2,	// (0x000696dc) listscroll_set_pane_copy1

0x3cae,	// (0x00061098) scroll_pane_cp121_copy1

0x239c,	// (0x0005f786) set_content_pane_copy1

0xe4a0,	// (0x0006b88a) aid_height_set_list_copy1_ParamLimits

0xe4a0,	// (0x0006b88a) aid_height_set_list_copy1

0x332c,	// (0x00060716) aid_size_parent_copy1_ParamLimits

0x332c,	// (0x00060716) aid_size_parent_copy1

0xe4ac,	// (0x0006b896) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe4ac,	// (0x0006b896) button_value_adjust_pane_cp6_copy1

0x8461,	// (0x0006584b) list_highlight_pane_cp2_copy1_ParamLimits

0x8461,	// (0x0006584b) list_highlight_pane_cp2_copy1

0xe4c0,	// (0x0006b8aa) list_set_pane_copy1_ParamLimits

0xe4c0,	// (0x0006b8aa) list_set_pane_copy1

0x7774,	// (0x00064b5e) main_pane_set_t1_copy1_ParamLimits

0x7774,	// (0x00064b5e) main_pane_set_t1_copy1

0x77ae,	// (0x00064b98) main_pane_set_t2_copy1_ParamLimits

0x77ae,	// (0x00064b98) main_pane_set_t2_copy1

0xe56d,	// (0x0006b957) main_pane_set_t3_copy1

0xe57b,	// (0x0006b965) main_pane_set_t4_copy1

0x77cd,	// (0x00064bb7) set_content_pane_g1_copy1_ParamLimits

0x77cd,	// (0x00064bb7) set_content_pane_g1_copy1

0xe589,	// (0x0006b973) setting_code_pane_copy1

0x78d6,	// (0x00064cc0) setting_slider_graphic_pane_copy1

0x78d6,	// (0x00064cc0) setting_slider_pane_copy1

0x78de,	// (0x00064cc8) setting_text_pane_copy1

0x78de,	// (0x00064cc8) setting_volume_pane_copy1

0xe589,	// (0x0006b973) settings_code_pane_cp2_copy1

0xe591,	// (0x0006b97b) settings_code_pane_cp_copy1_ParamLimits

0xe591,	// (0x0006b97b) settings_code_pane_cp_copy1

0xbdb3,	// (0x0006919d) volume_set_pane_copy1

0xe5a5,	// (0x0006b98f) volume_set_pane_g10_copy1

0xe5ad,	// (0x0006b997) volume_set_pane_g1_copy1

0xe5b5,	// (0x0006b99f) volume_set_pane_g2_copy1

0xe5bd,	// (0x0006b9a7) volume_set_pane_g3_copy1

0xe5c5,	// (0x0006b9af) volume_set_pane_g4_copy1

0xe5cd,	// (0x0006b9b7) volume_set_pane_g5_copy1

0xe5d5,	// (0x0006b9bf) volume_set_pane_g6_copy1

0xe5dd,	// (0x0006b9c7) volume_set_pane_g7_copy1

0xe5e5,	// (0x0006b9cf) volume_set_pane_g8_copy1

0xe5ed,	// (0x0006b9d7) volume_set_pane_g9_copy1

0x6f82,	// (0x0006436c) bg_set_opt_pane_cp_copy1_ParamLimits

0x6f82,	// (0x0006436c) bg_set_opt_pane_cp_copy1

0xbdbb,	// (0x000691a5) setting_slider_pane_t1_copy1_ParamLimits

0xbdbb,	// (0x000691a5) setting_slider_pane_t1_copy1

0xbdda,	// (0x000691c4) setting_slider_pane_t2_copy1_ParamLimits

0xbdda,	// (0x000691c4) setting_slider_pane_t2_copy1

0xbdf4,	// (0x000691de) setting_slider_pane_t3_copy1_ParamLimits

0xbdf4,	// (0x000691de) setting_slider_pane_t3_copy1

0xbe0c,	// (0x000691f6) slider_set_pane_copy1_ParamLimits

0xbe0c,	// (0x000691f6) slider_set_pane_copy1

0x8090,	// (0x0006547a) set_opt_bg_pane_g1_copy2

0x8098,	// (0x00065482) set_opt_bg_pane_g2_copy2

0x794a,	// (0x00064d34) set_opt_bg_pane_g3_copy2

0x80a8,	// (0x00065492) set_opt_bg_pane_g4_copy2

0x80b0,	// (0x0006549a) set_opt_bg_pane_g5_copy2

0x80b8,	// (0x000654a2) set_opt_bg_pane_g6_copy2

0xe5f5,	// (0x0006b9df) set_opt_bg_pane_g7_copy2

0x795c,	// (0x00064d46) set_opt_bg_pane_g8_copy2

0x7966,	// (0x00064d50) set_opt_bg_pane_g9_copy2

0xbe22,	// (0x0006920c) aid_size_touch_slider_mark_copy1_ParamLimits

0xbe22,	// (0x0006920c) aid_size_touch_slider_mark_copy1

0xe5fd,	// (0x0006b9e7) slider_set_pane_g1_copy1

0x1b4f,	// (0x0005ef39) slider_set_pane_g2_copy1

0xb45b,	// (0x00068845) slider_set_pane_g3_copy1_ParamLimits

0xb45b,	// (0x00068845) slider_set_pane_g3_copy1

0xb46f,	// (0x00068859) slider_set_pane_g4_copy1_ParamLimits

0xb46f,	// (0x00068859) slider_set_pane_g4_copy1

0xb487,	// (0x00068871) slider_set_pane_g5_copy1_ParamLimits

0xb487,	// (0x00068871) slider_set_pane_g5_copy1

0xb45b,	// (0x00068845) slider_set_pane_g6_copy1_ParamLimits

0xb45b,	// (0x00068845) slider_set_pane_g6_copy1

0xbe36,	// (0x00069220) slider_set_pane_g7_copy1_ParamLimits

0xbe36,	// (0x00069220) slider_set_pane_g7_copy1

0x6f34,	// (0x0006431e) bg_set_opt_pane_cp2_copy1

0xe606,	// (0x0006b9f0) setting_slider_graphic_pane_g1_copy1

0xe60f,	// (0x0006b9f9) setting_slider_graphic_pane_t1_copy1

0xe61f,	// (0x0006ba09) setting_slider_graphic_pane_t2_copy1

0xe62f,	// (0x0006ba19) slider_set_pane_cp_copy1

0x79b2,	// (0x00064d9c) input_focus_pane_cp1_copy1

0x79bb,	// (0x00064da5) list_set_text_pane_copy1

0x79c3,	// (0x00064dad) setting_text_pane_g1_copy1

0xee6d,	// (0x0006c257) set_text_pane_t1_copy1

0x79b2,	// (0x00064d9c) input_focus_pane_cp2_copy1

0x79c3,	// (0x00064dad) setting_code_pane_g1_copy1

0x79cc,	// (0x00064db6) setting_code_pane_t1_copy1

0x79da,	// (0x00064dc4) list_set_graphic_pane_copy1

0x6f34,	// (0x0006431e) bg_set_opt_pane_cp4_copy1

0xc090,	// (0x0006947a) list_set_graphic_pane_g1_copy1_ParamLimits

0xc090,	// (0x0006947a) list_set_graphic_pane_g1_copy1

0x79ee,	// (0x00064dd8) list_set_graphic_pane_g2_copy1

0xc0a8,	// (0x00069492) list_set_graphic_pane_t1_copy1_ParamLimits

0xc0a8,	// (0x00069492) list_set_graphic_pane_t1_copy1

0x4727,	// (0x00061b11) rs_clock_indi_pane_g1

0x79f6,	// (0x00064de0) rs_clock_indi_pane_t1

0x7a04,	// (0x00064dee) rs_indi_pane

0x7a0c,	// (0x00064df6) rs_indi_pane_g1

0x7a15,	// (0x00064dff) rs_indi_pane_g2

0x772c,	// (0x00064b16) rs_indi_pane_g3

0x0002,

0xfeb0,	// (0x0006d29a) rs_indi_pane_g

0xc2f2,	// (0x000696dc) bg_popup_preview_window_pane_cp03

0x7a1e,	// (0x00064e08) popup_fep_tooltip_window_t1

0xd22b,	// (0x0006a615) popup_note2_window_g2_ParamLimits

0xd22b,	// (0x0006a615) popup_note2_window_g2

0x0001,

0xfc44,	// (0x0006d02e) popup_note2_window_g_ParamLimits

0xfc44,	// (0x0006d02e) popup_note2_window_g

0x58b6,	// (0x00062ca0) bg_popup_sub_pane_cp11_ParamLimits

0x58c3,	// (0x00062cad) cell_ai3_links_pane_g1_ParamLimits

0x58da,	// (0x00062cc4) cell_ai3_links_pane_t1

0xee6d,	// (0x0006c257) set_text_pane_t1_copy1_ParamLimits

0xa162,	// (0x0006754c) cell_graphic_popup_pane_cp2_ParamLimits

0xa162,	// (0x0006754c) cell_graphic_popup_pane_cp2

0xee87,	// (0x0006c271) cell_graphic_popup_pane_g1_cp2

0x7f06,	// (0x000652f0) cell_graphic_popup_pane_g2_cp2

0x7a34,	// (0x00064e1e) cell_graphic_popup_pane_g3_cp2

0xee8f,	// (0x0006c279) cell_graphic_popup_pane_t2_cp2

0x7f17,	// (0x00065301) grid_highlight_pane_cp3_cp2

0x82fb,	// (0x000656e5) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8038,	// (0x00065422) main_tmo_pane_ParamLimits

0xd5f1,	// (0x0006a9db) popup_tmo_big_image_note_window

0x6db9,	// (0x000641a3) cell_ai5_widget_list_pane

0x6dc1,	// (0x000641ab) cell_ai5_widget_lrg_icon_pane

0xe451,	// (0x0006b83b) tmo_note_info_pane_t1_ParamLimits

0xe466,	// (0x0006b850) tmo_note_info_pane_t2_ParamLimits

0xe47d,	// (0x0006b867) tmo_note_info_pane_t3_ParamLimits

0x76a9,	// (0x00064a93) tmo_note_info_pane_t4_ParamLimits

0x76bb,	// (0x00064aa5) tmo_note_info_pane_t5_ParamLimits

0xfe9e,	// (0x0006d288) tmo_note_info_pane_t_ParamLimits

0x77d9,	// (0x00064bc3) settings_container_pane_ParamLimits

0xe637,	// (0x0006ba21) indicator_popup_pane_cp5

0xe637,	// (0x0006ba21) indicator_popup_pane_cp6

0x79da,	// (0x00064dc4) list_set_graphic_pane_copy1_ParamLimits

0x6f20,	// (0x0006430a) bg_popup_window_pane_cp23

0x7a4a,	// (0x00064e34) popup_tmo_big_image_note_window_g1

0x7a53,	// (0x00064e3d) popup_tmo_big_image_note_window_t1

0x7a63,	// (0x00064e4d) popup_tmo_big_image_note_window_t2

0x7a73,	// (0x00064e5d) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb7,	// (0x0006d2a1) popup_tmo_big_image_note_window_t

0x4727,	// (0x00061b11) cell_ai5_widget_lrg_icon_pane_g1

0x7a83,	// (0x00064e6d) cell_ai5_widget_lrg_icon_pane_t1

0x7a91,	// (0x00064e7b) cell_ai5_widget_list_row_pane_ParamLimits

0x7a91,	// (0x00064e7b) cell_ai5_widget_list_row_pane

0x7aa8,	// (0x00064e92) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7aa8,	// (0x00064e92) cell_ai5_widget_list_row_pane_g1

0xee9d,	// (0x0006c287) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xee9d,	// (0x0006c287) cell_ai5_widget_list_row_pane_t1

0x7ae0,	// (0x00064eca) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7ae0,	// (0x00064eca) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfebe,	// (0x0006d2a8) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfebe,	// (0x0006d2a8) cell_ai5_widget_list_row_pane_t

0xe6f3,	// (0x0006badd) main_fep_vtchi_ss_pane

0x7b30,	// (0x00064f1a) popup_fep_char_pre_window

0x7b38,	// (0x00064f22) popup_fep_ituss_window

0xeef8,	// (0x0006c2e2) popup_fep_vkbss_window

0x8461,	// (0x0006584b) grid_vkbss_keypad_pane_ParamLimits

0x8461,	// (0x0006584b) grid_vkbss_keypad_pane

0x7ba4,	// (0x00064f8e) ituss_keypad_pane

0x1b79,	// (0x0005ef63) aid_vkbss_key_offset_ParamLimits

0x1b79,	// (0x0005ef63) aid_vkbss_key_offset

0xbe4c,	// (0x00069236) cell_vkbss_key_pane_ParamLimits

0xbe4c,	// (0x00069236) cell_vkbss_key_pane

0x7bb3,	// (0x00064f9d) bg_cell_vkbss_key_g1_ParamLimits

0x7bb3,	// (0x00064f9d) bg_cell_vkbss_key_g1

0xef05,	// (0x0006c2ef) cell_vkbss_key_3p_pane_ParamLimits

0xef05,	// (0x0006c2ef) cell_vkbss_key_3p_pane

0xef3b,	// (0x0006c325) cell_vkbss_key_g1_ParamLimits

0xef3b,	// (0x0006c325) cell_vkbss_key_g1

0xef71,	// (0x0006c35b) cell_vkbss_key_t1_ParamLimits

0xef71,	// (0x0006c35b) cell_vkbss_key_t1

0x1bb9,	// (0x0005efa3) cell_ituss_key_pane_ParamLimits

0x1bb9,	// (0x0005efa3) cell_ituss_key_pane

0x7c87,	// (0x00065071) bg_cell_ituss_key_g1_ParamLimits

0x7c87,	// (0x00065071) bg_cell_ituss_key_g1

0x7c93,	// (0x0006507d) cell_ituss_key_pane_g1_ParamLimits

0x7c93,	// (0x0006507d) cell_ituss_key_pane_g1

0x1bca,	// (0x0005efb4) cell_ituss_key_pane_g2_ParamLimits

0x1bca,	// (0x0005efb4) cell_ituss_key_pane_g2

0x0005,

0xfec5,	// (0x0006d2af) cell_ituss_key_pane_g_ParamLimits

0xfec5,	// (0x0006d2af) cell_ituss_key_pane_g

0x1c4e,	// (0x0005f038) cell_ituss_key_t1_ParamLimits

0x1c4e,	// (0x0005f038) cell_ituss_key_t1

0x1c88,	// (0x0005f072) cell_ituss_key_t2_ParamLimits

0x1c88,	// (0x0005f072) cell_ituss_key_t2

0x1cb9,	// (0x0005f0a3) cell_ituss_key_t3_ParamLimits

0x1cb9,	// (0x0005f0a3) cell_ituss_key_t3

0x1c88,	// (0x0005f072) cell_ituss_key_t4_ParamLimits

0x1c88,	// (0x0005f072) cell_ituss_key_t4

0x0004,

0xfed2,	// (0x0006d2bc) cell_ituss_key_t_ParamLimits

0xfed2,	// (0x0006d2bc) cell_ituss_key_t

0xefcd,	// (0x0006c3b7) cell_vkbss_key_3p_pane_g1

0xefd5,	// (0x0006c3bf) cell_vkbss_key_3p_pane_g2

0xefdd,	// (0x0006c3c7) cell_vkbss_key_3p_pane_g3

0x0002,

0xfedd,	// (0x0006d2c7) cell_vkbss_key_3p_pane_g

0xc2f2,	// (0x000696dc) bg_popup_fep_char_preview_window_cp02

0x7cd1,	// (0x000650bb) popup_fep_char_pre_window_t1

0xe2d9,	// (0x0006b6c3) main_ai5_sk_pane

0x7735,	// (0x00064b1f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7741,	// (0x00064b2b) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x4e01,	// (0x000621eb) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7756,	// (0x00064b40) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea9,	// (0x0006d293) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7762,	// (0x00064b4c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8038,	// (0x00065422) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xefe5,	// (0x0006c3cf) main_ai5_sk_pane_g1

0xb322,	// (0x0006870c) popup_query_code_window_g1

0xeee9,	// (0x0006c2d3) popup_fep_vkb_icf_pane

0x7b7b,	// (0x00064f65) popup_fep_vtchi_icf_pane

0x8461,	// (0x0006584b) bg_icf_pane

0x8461,	// (0x0006584b) list_vkb_icf_pane

0x7ce8,	// (0x000650d2) bg_icf_pane_cp01

0x7cfb,	// (0x000650e5) vtchi_icf_list_pane

0xf03a,	// (0x0006c424) list_vkb_icf_pane_t1_ParamLimits

0xf03a,	// (0x0006c424) list_vkb_icf_pane_t1

0x7d85,	// (0x0006516f) vtchi_icf_list_pane_t1_ParamLimits

0x7d85,	// (0x0006516f) vtchi_icf_list_pane_t1

0x7b38,	// (0x00064f22) popup_fep_ituss_window_ParamLimits

0x7b7b,	// (0x00064f65) popup_fep_vtchi_icf_pane_ParamLimits

0x7ba4,	// (0x00064f8e) ituss_keypad_pane_ParamLimits

0x1b6d,	// (0x0005ef57) ituss_sks_pane

0x8461,	// (0x0006584b) bg_icf_pane_ParamLimits

0xeece,	// (0x0006c2b8) icf_edit_indi_pane_ParamLimits

0xeece,	// (0x0006c2b8) icf_edit_indi_pane

0x8461,	// (0x0006584b) list_vkb_icf_pane_ParamLimits

0x7ce8,	// (0x000650d2) bg_icf_pane_cp01_ParamLimits

0x7b23,	// (0x00064f0d) icf_edit_indi_pane_cp01_ParamLimits

0x7b23,	// (0x00064f0d) icf_edit_indi_pane_cp01

0x7d03,	// (0x000650ed) vtchi_query_pane

0x6bbe,	// (0x00063fa8) icf_edit_indi_pane_g1_ParamLimits

0x6bbe,	// (0x00063fa8) icf_edit_indi_pane_g1

0xf052,	// (0x0006c43c) icf_edit_indi_pane_g2_ParamLimits

0xf052,	// (0x0006c43c) icf_edit_indi_pane_g2

0x0001,

0xff08,	// (0x0006d2f2) icf_edit_indi_pane_g_ParamLimits

0xff08,	// (0x0006d2f2) icf_edit_indi_pane_g

0xf066,	// (0x0006c450) icf_edit_indi_pane_t1

0x7da6,	// (0x00065190) bg_input_focus_pane_cp042

0x7f7a,	// (0x00065364) vtchi_button_pane

0x7daf,	// (0x00065199) vtchi_query_pane_t1

0x7dbd,	// (0x000651a7) vtchi_query_pane_t2

0x7dcb,	// (0x000651b5) vtchi_query_pane_t3

0x0002,

0xfef7,	// (0x0006d2e1) vtchi_query_pane_t

0xe6f3,	// (0x0006badd) bg_button_pane_cp13

0x7dd9,	// (0x000651c3) vtchi_button_pane_g1

0x1cfc,	// (0x0005f0e6) ituss_sks_pane_g1

0x1d07,	// (0x0005f0f1) ituss_sks_pane_g2

0x0001,

0xfefe,	// (0x0006d2e8) ituss_sks_pane_g

0x7de1,	// (0x000651cb) ituss_sks_pane_t1

0x7def,	// (0x000651d9) ituss_sks_pane_t2

0x0001,

0xff03,	// (0x0006d2ed) ituss_sks_pane_t

0x40c6,	// (0x000614b0) indicator_nsta_pane_cp_g1

0x40cf,	// (0x000614b9) indicator_nsta_pane_cp_g2

0x40d7,	// (0x000614c1) indicator_nsta_pane_cp_g3

0x40df,	// (0x000614c9) indicator_nsta_pane_cp_g4

0x40cf,	// (0x000614b9) indicator_nsta_pane_cp_g5

0x40d7,	// (0x000614c1) indicator_nsta_pane_cp_g6

0x0005,

0xfa82,	// (0x0006ce6c) indicator_nsta_pane_cp_g

0xe0b2,	// (0x0006b49c) cell_graphic2_pane_t2_ParamLimits

0xe0b2,	// (0x0006b49c) cell_graphic2_pane_t2

0x0001,

0xfd94,	// (0x0006d17e) cell_graphic2_pane_t_ParamLimits

0xfd94,	// (0x0006d17e) cell_graphic2_pane_t

0xe0e9,	// (0x0006b4d3) cell_graphic2_control_pane_t1

0x9f93,	// (0x0006737d) signal_pane_g3_ParamLimits

0x9f93,	// (0x0006737d) signal_pane_g3

0x9fa7,	// (0x00067391) signal_pane_g4_ParamLimits

0x9fa7,	// (0x00067391) signal_pane_g4

0x7af2,	// (0x00064edc) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7af2,	// (0x00064edc) cell_ai5_widget_list_row_pane_t3

0x7ca7,	// (0x00065091) cell_ituss_key_pane_t1_ParamLimits

0x7ca7,	// (0x00065091) cell_ituss_key_pane_t1

0x206b,	// (0x0005f455) form_field_data_wide_pane_vc_t2_ParamLimits

0x206b,	// (0x0005f455) form_field_data_wide_pane_vc_t2

0x207f,	// (0x0005f469) form_field_data_wide_pane_vc_t3_ParamLimits

0x207f,	// (0x0005f469) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ce,	// (0x0006cbb8) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ce,	// (0x0006cbb8) form_field_data_wide_pane_vc_t

0x3d70,	// (0x0006115a) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3d70,	// (0x0006115a) form_field_slider_wide_pane_vc_t3

0x3e4e,	// (0x00061238) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3e4e,	// (0x00061238) form_field_popup_wide_pane_vc_t2

0x3e65,	// (0x0006124f) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3e65,	// (0x0006124f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa71,	// (0x0006ce5b) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa71,	// (0x0006ce5b) form_field_popup_wide_pane_vc_t

0xbc1b,	// (0x00069005) aid_fshwr2_btn_pane_ParamLimits

0xbc2f,	// (0x00069019) aid_fshwr2_syb_pane_ParamLimits

0xbc43,	// (0x0006902d) aid_fshwr2_txt_pane_ParamLimits

0x118f,	// (0x0005e579) fshwr2_bg_pane_ParamLimits

0xbc53,	// (0x0006903d) fshwr2_func_candi_pane_ParamLimits

0xbc73,	// (0x0006905d) fshwr2_hwr_syb_pane_ParamLimits

0xbc97,	// (0x00069081) fshwr2_icf_pane_ParamLimits

0x3d2a,	// (0x00061114) list_double_graphic_pane_vc_g4_ParamLimits

0x3d2a,	// (0x00061114) list_double_graphic_pane_vc_g4

0x1bea,	// (0x0005efd4) cell_ituss_key_pane_g3_ParamLimits

0x1bea,	// (0x0005efd4) cell_ituss_key_pane_g3

0x1cea,	// (0x0005f0d4) cell_ituss_key_t5_ParamLimits

0x1cea,	// (0x0005f0d4) cell_ituss_key_t5

0xeef8,	// (0x0006c2e2) popup_fep_vkbss_window_ParamLimits

0x6d4c,	// (0x00064136) aid_cell_ai5_quarter

0xf066,	// (0x0006c450) icf_edit_indi_pane_t1_ParamLimits

0x93ea,	// (0x000667d4) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x93ea,	// (0x000667d4) aid_tch_indicator_popup_pane_cp2

0x93fd,	// (0x000667e7) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x93fd,	// (0x000667e7) aid_tch_query_popup_data_pane_cp2

0x23e0,	// (0x0005f7ca) aid_tch_query_popup_pane_ParamLimits

0x23e0,	// (0x0005f7ca) aid_tch_query_popup_pane

0x23e0,	// (0x0005f7ca) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x23e0,	// (0x0005f7ca) aid_tch_query_popup_data_pane_cp1

0x8461,	// (0x0006584b) cell_fshwr2_syb_bg_pane_ParamLimits

0xbd8a,	// (0x00069174) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xbd9d,	// (0x00069187) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xeee9,	// (0x0006c2d3) popup_fep_vkb_icf_pane_ParamLimits

0xbb81,	// (0x00068f6b) bg_popup_fep_char_preview_window_g10

0x6e81,	// (0x0006426b) cell_ai5_widget_pane_g11_ParamLimits

0x6e81,	// (0x0006426b) cell_ai5_widget_pane_g11

0x6e8d,	// (0x00064277) cell_ai5_widget_pane_g12_ParamLimits

0x6e8d,	// (0x00064277) cell_ai5_widget_pane_g12

0x6e99,	// (0x00064283) cell_ai5_widget_pane_g13_ParamLimits

0x6e99,	// (0x00064283) cell_ai5_widget_pane_g13

0x72aa,	// (0x00064694) cell_ai5_widget_pane_t11_ParamLimits

0x72aa,	// (0x00064694) cell_ai5_widget_pane_t11

0x72bc,	// (0x000646a6) cell_ai5_widget_pane_t12_ParamLimits

0x72bc,	// (0x000646a6) cell_ai5_widget_pane_t12

0x1bf6,	// (0x0005efe0) cell_ituss_key_pane_g4_ParamLimits

0x1bf6,	// (0x0005efe0) cell_ituss_key_pane_g4

0x1c12,	// (0x0005effc) cell_ituss_key_pane_g5_ParamLimits

0x1c12,	// (0x0005effc) cell_ituss_key_pane_g5

0x1c2e,	// (0x0005f018) cell_ituss_key_pane_g6_ParamLimits

0x1c2e,	// (0x0005f018) cell_ituss_key_pane_g6

0x1f51,	// (0x0005f33b) bg_icf_pane_g1

0xefee,	// (0x0006c3d8) bg_icf_pane_g2

0xeff8,	// (0x0006c3e2) bg_icf_pane_g3

0xf000,	// (0x0006c3ea) bg_icf_pane_g4

0xf00a,	// (0x0006c3f4) bg_icf_pane_g5

0xf014,	// (0x0006c3fe) bg_icf_pane_g6

0xf01e,	// (0x0006c408) bg_icf_pane_g7

0xf026,	// (0x0006c410) bg_icf_pane_g8

0xf030,	// (0x0006c41a) bg_icf_pane_g9

0x0008,

0xfee4,	// (0x0006d2ce) bg_icf_pane_g

0x7b91,	// (0x00064f7b) popup_hyb_candi_window_ParamLimits

0x7b91,	// (0x00064f7b) popup_hyb_candi_window

0x1fdd,	// (0x0005f3c7) bg_popup_sub_pane_cp01_ParamLimits

0x1fdd,	// (0x0005f3c7) bg_popup_sub_pane_cp01

0x7e2a,	// (0x00065214) entry_hyb_candi_pane_ParamLimits

0x7e2a,	// (0x00065214) entry_hyb_candi_pane

0x7e39,	// (0x00065223) grid_hyb_candi_pane_ParamLimits

0x7e39,	// (0x00065223) grid_hyb_candi_pane

0x7e4e,	// (0x00065238) grid_hyb_phrase_pane_ParamLimits

0x7e4e,	// (0x00065238) grid_hyb_phrase_pane

0x7e5d,	// (0x00065247) cell_hyb_candi_pane_ParamLimits

0x7e5d,	// (0x00065247) cell_hyb_candi_pane

0x7e80,	// (0x0006526a) cell_hyb_candi_scroll_pane

0xbeb5,	// (0x0006929f) cell_hyb_candi_pane_g1

0x7e89,	// (0x00065273) cell_hyb_candi_pane_t1

0x7e97,	// (0x00065281) cell_hyb_phrase_pane

0xbeb5,	// (0x0006929f) cell_hyb_phrase_pane_g1

0x7ea0,	// (0x0006528a) cell_hyb_phrase_pane_t1

0x7eae,	// (0x00065298) entry_hyb_candi_pane_t1

0xc2f2,	// (0x000696dc) input_focus_pane_cp06

0x7ebc,	// (0x000652a6) cell_hyb_candi_scroll_pane_g1

0x7ec4,	// (0x000652ae) cell_hyb_candi_scroll_pane_g1_aid

0x7ecc,	// (0x000652b6) cell_hyb_candi_scroll_pane_g2

0x7ed4,	// (0x000652be) cell_hyb_candi_scroll_pane_g2_aid

0x7edc,	// (0x000652c6) cell_hyb_candi_scroll_pane_g3

0x7ee4,	// (0x000652ce) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Large
