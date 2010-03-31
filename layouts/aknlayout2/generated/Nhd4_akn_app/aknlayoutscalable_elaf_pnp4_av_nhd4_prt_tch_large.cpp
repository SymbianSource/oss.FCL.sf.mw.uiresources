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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0002f417 };

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
0xa1bc,	// (0x000395d3) Screen

0xa1c8,	// (0x000395df) application_window_ParamLimits

0xa1c8,	// (0x000395df) application_window

0x22d2,	// (0x000316e9) screen_g1

0xa224,	// (0x0003963b) area_bottom_pane_ParamLimits

0xa224,	// (0x0003963b) area_bottom_pane

0xa2e4,	// (0x000396fb) area_top_pane_ParamLimits

0xa2e4,	// (0x000396fb) area_top_pane

0xa378,	// (0x0003978f) main_pane_ParamLimits

0xa378,	// (0x0003978f) main_pane

0x22dc,	// (0x000316f3) misc_graphics

0xcf10,	// (0x0003c327) battery_pane_ParamLimits

0xcf10,	// (0x0003c327) battery_pane

0x5f33,	// (0x0003534a) bg_status_flat_pane_g8

0x5f3b,	// (0x00035352) bg_status_flat_pane_g9

0x56bb,	// (0x00034ad2) context_pane_ParamLimits

0x56bb,	// (0x00034ad2) context_pane

0xd044,	// (0x0003c45b) navi_pane_ParamLimits

0xd044,	// (0x0003c45b) navi_pane

0xd0b7,	// (0x0003c4ce) signal_pane_ParamLimits

0xd0b7,	// (0x0003c4ce) signal_pane

0x0008,

0xf87f,	// (0x0003ec96) bg_status_flat_pane_g

0xd11c,	// (0x0003c533) status_pane_g1_ParamLimits

0xd11c,	// (0x0003c533) status_pane_g1

0x6c1a,	// (0x00036031) status_pane_g2_ParamLimits

0x6c1a,	// (0x00036031) status_pane_g2

0x5720,	// (0x00034b37) status_pane_g3_ParamLimits

0x5720,	// (0x00034b37) status_pane_g3

0x0004,

0xf7ab,	// (0x0003ebc2) status_pane_g_ParamLimits

0xf7ab,	// (0x0003ebc2) status_pane_g

0xd128,	// (0x0003c53f) title_pane_ParamLimits

0xd128,	// (0x0003c53f) title_pane

0xd165,	// (0x0003c57c) uni_indicator_pane_ParamLimits

0xd165,	// (0x0003c57c) uni_indicator_pane

0x55e4,	// (0x000349fb) bg_list_pane_ParamLimits

0x55e4,	// (0x000349fb) bg_list_pane

0x5604,	// (0x00034a1b) find_pane

0xcea9,	// (0x0003c2c0) listscroll_app_pane_ParamLimits

0xcea9,	// (0x0003c2c0) listscroll_app_pane

0x560c,	// (0x00034a23) listscroll_form_pane

0xb24e,	// (0x0003a665) listscroll_gen_pane_ParamLimits

0xb24e,	// (0x0003a665) listscroll_gen_pane

0xb262,	// (0x0003a679) listscroll_set_pane

0xa9e9,	// (0x00039e00) main_idle_act_pane

0x53c8,	// (0x000347df) main_idle_trad_pane

0x53c8,	// (0x000347df) main_list_empty_pane

0x4ae3,	// (0x00033efa) main_midp_pane

0x5638,	// (0x00034a4f) main_pane_g1_ParamLimits

0x5638,	// (0x00034a4f) main_pane_g1

0xb26a,	// (0x0003a681) popup_ai_message_window_ParamLimits

0xb26a,	// (0x0003a681) popup_ai_message_window

0xb30e,	// (0x0003a725) popup_fep_china_uni_window_ParamLimits

0xb30e,	// (0x0003a725) popup_fep_china_uni_window

0xb368,	// (0x0003a77f) popup_fep_japan_candidate_window_ParamLimits

0xb368,	// (0x0003a77f) popup_fep_japan_candidate_window

0xb386,	// (0x0003a79d) popup_fep_japan_predictive_window_ParamLimits

0xb386,	// (0x0003a79d) popup_fep_japan_predictive_window

0xb3b6,	// (0x0003a7cd) popup_find_window

0xb3c3,	// (0x0003a7da) popup_grid_graphic_window_ParamLimits

0xb3c3,	// (0x0003a7da) popup_grid_graphic_window

0xb3eb,	// (0x0003a802) popup_large_graphic_colour_window

0xb411,	// (0x0003a828) popup_menu_window_ParamLimits

0xb411,	// (0x0003a828) popup_menu_window

0xb5cb,	// (0x0003a9e2) popup_note_image_window

0xb5b7,	// (0x0003a9ce) popup_note_wait_window_ParamLimits

0xb5b7,	// (0x0003a9ce) popup_note_wait_window

0xb5b7,	// (0x0003a9ce) popup_note_window_ParamLimits

0xb5b7,	// (0x0003a9ce) popup_note_window

0xb621,	// (0x0003aa38) popup_query_code_window_ParamLimits

0xb621,	// (0x0003aa38) popup_query_code_window

0xb635,	// (0x0003aa4c) popup_query_data_code_window_ParamLimits

0xb635,	// (0x0003aa4c) popup_query_data_code_window

0xb650,	// (0x0003aa67) popup_query_data_window_ParamLimits

0xb650,	// (0x0003aa67) popup_query_data_window

0xb66a,	// (0x0003aa81) popup_query_sat_info_window_ParamLimits

0xb66a,	// (0x0003aa81) popup_query_sat_info_window

0xb6a3,	// (0x0003aaba) popup_snote_single_graphic_window_ParamLimits

0xb6a3,	// (0x0003aaba) popup_snote_single_graphic_window

0xb6a3,	// (0x0003aaba) popup_snote_single_text_window_ParamLimits

0xb6a3,	// (0x0003aaba) popup_snote_single_text_window

0xb6b8,	// (0x0003aacf) popup_sub_window_general

0xb7e6,	// (0x0003abfd) popup_window_general_ParamLimits

0xb7e6,	// (0x0003abfd) popup_window_general

0x5646,	// (0x00034a5d) power_save_pane

0xb0cd,	// (0x0003a4e4) control_pane_g1_ParamLimits

0xb0cd,	// (0x0003a4e4) control_pane_g1

0xb0f4,	// (0x0003a50b) control_pane_g2_ParamLimits

0xb0f4,	// (0x0003a50b) control_pane_g2

0x55ce,	// (0x000349e5) control_pane_g3_ParamLimits

0x55ce,	// (0x000349e5) control_pane_g3

0x0007,

0xf793,	// (0x0003ebaa) control_pane_g_ParamLimits

0xf793,	// (0x0003ebaa) control_pane_g

0xb163,	// (0x0003a57a) control_pane_t1_ParamLimits

0xb163,	// (0x0003a57a) control_pane_t1

0xb1af,	// (0x0003a5c6) control_pane_t2_ParamLimits

0xb1af,	// (0x0003a5c6) control_pane_t2

0x0002,

0xf7a4,	// (0x0003ebbb) control_pane_t_ParamLimits

0xf7a4,	// (0x0003ebbb) control_pane_t

0x54ef,	// (0x00034906) navi_navi_volume_pane_cp1

0x54f8,	// (0x0003490f) status_small_icon_pane

0x5500,	// (0x00034917) status_small_pane_g1_ParamLimits

0x5500,	// (0x00034917) status_small_pane_g1

0x5534,	// (0x0003494b) status_small_pane_g2_ParamLimits

0x5534,	// (0x0003494b) status_small_pane_g2

0x5540,	// (0x00034957) status_small_pane_g3_ParamLimits

0x5540,	// (0x00034957) status_small_pane_g3

0x554c,	// (0x00034963) status_small_pane_g4_ParamLimits

0x554c,	// (0x00034963) status_small_pane_g4

0x5558,	// (0x0003496f) status_small_pane_g5_ParamLimits

0x5558,	// (0x0003496f) status_small_pane_g5

0x5567,	// (0x0003497e) status_small_pane_g6_ParamLimits

0x5567,	// (0x0003497e) status_small_pane_g6

0x0007,

0xf782,	// (0x0003eb99) status_small_pane_g_ParamLimits

0xf782,	// (0x0003eb99) status_small_pane_g

0x5597,	// (0x000349ae) status_small_pane_t1

0x55ba,	// (0x000349d1) status_small_wait_pane_ParamLimits

0x55ba,	// (0x000349d1) status_small_wait_pane

0xad05,	// (0x0003a11c) aid_levels_signal_ParamLimits

0xad05,	// (0x0003a11c) aid_levels_signal

0xad17,	// (0x0003a12e) signal_pane_g1_ParamLimits

0xad17,	// (0x0003a12e) signal_pane_g1

0xad2c,	// (0x0003a143) signal_pane_g2_ParamLimits

0xad2c,	// (0x0003a143) signal_pane_g2

0x0003,

0xf713,	// (0x0003eb2a) signal_pane_g_ParamLimits

0xf713,	// (0x0003eb2a) signal_pane_g

0x4f0e,	// (0x00034325) context_pane_g1

0xa5b9,	// (0x000399d0) title_pane_g1

0xa5e3,	// (0x000399fa) title_pane_t1

0x22f2,	// (0x00031709) title_pane_t2

0x2318,	// (0x0003172f) title_pane_t3

0x0002,

0xf55d,	// (0x0003e974) title_pane_t

0xd17d,	// (0x0003c594) aid_levels_battery_ParamLimits

0xd17d,	// (0x0003c594) aid_levels_battery

0xd191,	// (0x0003c5a8) battery_pane_g1_ParamLimits

0xd191,	// (0x0003c5a8) battery_pane_g1

0xd1a7,	// (0x0003c5be) battery_pane_g2_ParamLimits

0xd1a7,	// (0x0003c5be) battery_pane_g2

0x0001,

0xf7b6,	// (0x0003ebcd) battery_pane_g_ParamLimits

0xf7b6,	// (0x0003ebcd) battery_pane_g

0xd3cc,	// (0x0003c7e3) uni_indicator_pane_g1

0xd3e3,	// (0x0003c7fa) uni_indicator_pane_g2

0xd3f6,	// (0x0003c80d) uni_indicator_pane_g3

0x0005,

0xf927,	// (0x0003ed3e) uni_indicator_pane_g

0x5246,	// (0x0003465d) navi_icon_pane_ParamLimits

0x5246,	// (0x0003465d) navi_icon_pane

0x518f,	// (0x000345a6) navi_midp_pane

0x5262,	// (0x00034679) navi_navi_pane

0x526c,	// (0x00034683) navi_text_pane_ParamLimits

0x526c,	// (0x00034683) navi_text_pane

0x22d2,	// (0x000316e9) status_small_wait_pane_g1

0x2603,	// (0x00031a1a) status_small_wait_pane_g2

0x0001,

0xf922,	// (0x0003ed39) status_small_wait_pane_g

0x64f0,	// (0x00035907) navi_navi_icon_text_pane

0x650a,	// (0x00035921) navi_navi_pane_g1_ParamLimits

0x650a,	// (0x00035921) navi_navi_pane_g1

0x64f8,	// (0x0003590f) navi_navi_pane_g2_ParamLimits

0x64f8,	// (0x0003590f) navi_navi_pane_g2

0x0001,

0xf8f0,	// (0x0003ed07) navi_navi_pane_g_ParamLimits

0xf8f0,	// (0x0003ed07) navi_navi_pane_g

0x651c,	// (0x00035933) navi_navi_tabs_pane

0x6525,	// (0x0003593c) navi_navi_text_pane

0x64f0,	// (0x00035907) navi_navi_volume_pane

0x64cc,	// (0x000358e3) navi_text_pane_t1

0x64c0,	// (0x000358d7) navi_icon_pane_g1

0x6413,	// (0x0003582a) navi_navi_text_pane_t1

0xba76,	// (0x0003ae8d) navi_navi_volume_pane_g1

0xba7e,	// (0x0003ae95) volume_small_pane

0xd325,	// (0x0003c73c) navi_navi_icon_text_pane_g1

0x63f9,	// (0x00035810) navi_navi_icon_text_pane_t1

0x5262,	// (0x00034679) navi_tabs_2_long_pane

0x5262,	// (0x00034679) navi_tabs_2_pane

0x5262,	// (0x00034679) navi_tabs_3_long_pane

0x5262,	// (0x00034679) navi_tabs_3_pane

0x5262,	// (0x00034679) navi_tabs_4_pane

0xba56,	// (0x0003ae6d) tabs_2_active_pane_ParamLimits

0xba56,	// (0x0003ae6d) tabs_2_active_pane

0xba66,	// (0x0003ae7d) tabs_2_passive_pane_ParamLimits

0xba66,	// (0x0003ae7d) tabs_2_passive_pane

0xba24,	// (0x0003ae3b) tabs_3_active_pane_ParamLimits

0xba24,	// (0x0003ae3b) tabs_3_active_pane

0xba34,	// (0x0003ae4b) tabs_3_passive_pane_ParamLimits

0xba34,	// (0x0003ae4b) tabs_3_passive_pane

0xba45,	// (0x0003ae5c) tabs_3_passive_pane_cp_ParamLimits

0xba45,	// (0x0003ae5c) tabs_3_passive_pane_cp

0xb9e0,	// (0x0003adf7) tabs_4_active_pane_ParamLimits

0xb9e0,	// (0x0003adf7) tabs_4_active_pane

0xb9f1,	// (0x0003ae08) tabs_4_passive_pane_ParamLimits

0xb9f1,	// (0x0003ae08) tabs_4_passive_pane

0xba02,	// (0x0003ae19) tabs_4_passive_pane_cp_ParamLimits

0xba02,	// (0x0003ae19) tabs_4_passive_pane_cp

0xba13,	// (0x0003ae2a) tabs_4_passive_pane_cp2_ParamLimits

0xba13,	// (0x0003ae2a) tabs_4_passive_pane_cp2

0xb9bc,	// (0x0003add3) tabs_2_long_active_pane_ParamLimits

0xb9bc,	// (0x0003add3) tabs_2_long_active_pane

0xb9ce,	// (0x0003ade5) tabs_2_long_passive_pane_ParamLimits

0xb9ce,	// (0x0003ade5) tabs_2_long_passive_pane

0xb983,	// (0x0003ad9a) tabs_3_long_active_pane_ParamLimits

0xb983,	// (0x0003ad9a) tabs_3_long_active_pane

0xb996,	// (0x0003adad) tabs_3_long_passive_pane_ParamLimits

0xb996,	// (0x0003adad) tabs_3_long_passive_pane

0xb9a9,	// (0x0003adc0) tabs_3_long_passive_pane_cp_ParamLimits

0xb9a9,	// (0x0003adc0) tabs_3_long_passive_pane_cp

0xb929,	// (0x0003ad40) volume_small_pane_g1

0xb932,	// (0x0003ad49) volume_small_pane_g2

0xb93b,	// (0x0003ad52) volume_small_pane_g3

0xb944,	// (0x0003ad5b) volume_small_pane_g4

0xb94d,	// (0x0003ad64) volume_small_pane_g5

0xb956,	// (0x0003ad6d) volume_small_pane_g6

0xb95f,	// (0x0003ad76) volume_small_pane_g7

0xb968,	// (0x0003ad7f) volume_small_pane_g8

0xb971,	// (0x0003ad88) volume_small_pane_g9

0xb97a,	// (0x0003ad91) volume_small_pane_g10

0x0009,

0xf8bc,	// (0x0003ecd3) volume_small_pane_g

0x2348,	// (0x0003175f) bg_active_tab_pane_cp2_ParamLimits

0x2348,	// (0x0003175f) bg_active_tab_pane_cp2

0x2338,	// (0x0003174f) tabs_3_active_pane_g1

0xa64b,	// (0x00039a62) tabs_3_active_pane_t1

0x2348,	// (0x0003175f) bg_passive_tab_pane_cp2_ParamLimits

0x2348,	// (0x0003175f) bg_passive_tab_pane_cp2

0x2338,	// (0x0003174f) tabs_3_passive_pane_g1

0xa64b,	// (0x00039a62) tabs_3_passive_pane_t1

0x2348,	// (0x0003175f) bg_active_tab_pane_cp3_ParamLimits

0x2348,	// (0x0003175f) bg_active_tab_pane_cp3

0x2340,	// (0x00031757) tabs_4_active_pane_g1

0xa65d,	// (0x00039a74) tabs_4_active_pane_t1

0x2348,	// (0x0003175f) bg_passive_tab_pane_cp3_ParamLimits

0x2348,	// (0x0003175f) bg_passive_tab_pane_cp3

0x2340,	// (0x00031757) tabs_4_1_passive_pane_g1

0xa65d,	// (0x00039a74) tabs_4_1_passive_pane_t1

0x4ae3,	// (0x00033efa) list_highlight_pane_cp2

0xd46a,	// (0x0003c881) list_set_pane_ParamLimits

0xd46a,	// (0x0003c881) list_set_pane

0xd510,	// (0x0003c927) main_pane_set_t1_ParamLimits

0xd510,	// (0x0003c927) main_pane_set_t1

0xd530,	// (0x0003c947) main_pane_set_t2_ParamLimits

0xd530,	// (0x0003c947) main_pane_set_t2

0xd544,	// (0x0003c95b) main_pane_set_t3_ParamLimits

0xd544,	// (0x0003c95b) main_pane_set_t3

0xd556,	// (0x0003c96d) main_pane_set_t4_ParamLimits

0xd556,	// (0x0003c96d) main_pane_set_t4

0x0003,

0xf98c,	// (0x0003eda3) main_pane_set_t_ParamLimits

0xf98c,	// (0x0003eda3) main_pane_set_t

0xd568,	// (0x0003c97f) setting_code_pane

0xd572,	// (0x0003c989) setting_slider_graphic_pane

0xd572,	// (0x0003c989) setting_slider_pane

0xd572,	// (0x0003c989) setting_text_pane

0xd572,	// (0x0003c989) setting_volume_pane

0xa66f,	// (0x00039a86) volume_set_pane

0x2348,	// (0x0003175f) bg_set_opt_pane_cp

0xa677,	// (0x00039a8e) setting_slider_pane_t1

0xa690,	// (0x00039aa7) setting_slider_pane_t2

0xa6aa,	// (0x00039ac1) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0003e97b) setting_slider_pane_t

0xa6c2,	// (0x00039ad9) slider_set_pane

0x22dc,	// (0x000316f3) bg_set_opt_pane_cp2

0x2356,	// (0x0003176d) setting_slider_graphic_pane_g1

0xa6d8,	// (0x00039aef) setting_slider_graphic_pane_t1

0xa6e8,	// (0x00039aff) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0003e982) setting_slider_graphic_pane_t

0xa6f8,	// (0x00039b0f) slider_set_pane_cp

0x22dc,	// (0x000316f3) input_focus_pane_cp1

0x6974,	// (0x00035d8b) list_set_text_pane

0x22d2,	// (0x000316e9) setting_text_pane_g1

0x22dc,	// (0x000316f3) input_focus_pane_cp2

0x22d2,	// (0x000316e9) setting_code_pane_g1

0x235f,	// (0x00031776) setting_code_pane_t1

0x938b,	// (0x000387a2) set_text_pane_t1_ParamLimits

0x938b,	// (0x000387a2) set_text_pane_t1

0x49d9,	// (0x00033df0) set_opt_bg_pane_g1

0x49e1,	// (0x00033df8) set_opt_bg_pane_g2

0x6954,	// (0x00035d6b) set_opt_bg_pane_g3

0x49f1,	// (0x00033e08) set_opt_bg_pane_g4

0x49f9,	// (0x00033e10) set_opt_bg_pane_g5

0x4a01,	// (0x00033e18) set_opt_bg_pane_g6

0x695c,	// (0x00035d73) set_opt_bg_pane_g7

0x6964,	// (0x00035d7b) set_opt_bg_pane_g8

0x696c,	// (0x00035d83) set_opt_bg_pane_g9

0x0008,

0xf979,	// (0x0003ed90) set_opt_bg_pane_g

0x6947,	// (0x00035d5e) slider_set_pane_g1

0xbaeb,	// (0x0003af02) slider_set_pane_g2

0x0006,

0xf96a,	// (0x0003ed81) slider_set_pane_g

0xba87,	// (0x0003ae9e) volume_set_pane_g1

0xba8f,	// (0x0003aea6) volume_set_pane_g2

0xba97,	// (0x0003aeae) volume_set_pane_g3

0xba9f,	// (0x0003aeb6) volume_set_pane_g4

0xbaa7,	// (0x0003aebe) volume_set_pane_g5

0xbaaf,	// (0x0003aec6) volume_set_pane_g6

0xbab7,	// (0x0003aece) volume_set_pane_g7

0xbabf,	// (0x0003aed6) volume_set_pane_g8

0xbac7,	// (0x0003aede) volume_set_pane_g9

0xbacf,	// (0x0003aee6) volume_set_pane_g10

0x0009,

0xf942,	// (0x0003ed59) volume_set_pane_g

0xa700,	// (0x00039b17) indicator_pane_ParamLimits

0xa700,	// (0x00039b17) indicator_pane

0xa70c,	// (0x00039b23) main_idle_pane_g2_ParamLimits

0xa70c,	// (0x00039b23) main_idle_pane_g2

0xa734,	// (0x00039b4b) main_pane_idle_g1_ParamLimits

0xa734,	// (0x00039b4b) main_pane_idle_g1

0x236d,	// (0x00031784) popup_clock_digital_analogue_window_ParamLimits

0x236d,	// (0x00031784) popup_clock_digital_analogue_window

0xa741,	// (0x00039b58) soft_indicator_pane_ParamLimits

0xa741,	// (0x00039b58) soft_indicator_pane

0xa74d,	// (0x00039b64) wallpaper_pane_ParamLimits

0xa74d,	// (0x00039b64) wallpaper_pane

0x22d2,	// (0x000316e9) wallpaper_pane_g1

0xa759,	// (0x00039b70) indicator_pane_g1_ParamLimits

0xa759,	// (0x00039b70) indicator_pane_g1

0x6ac6,	// (0x00035edd) navi_navi_icon_text_pane_srt_g1

0x239b,	// (0x000317b2) soft_indicator_pane_t1

0x23b5,	// (0x000317cc) aid_ps_area_pane

0xa765,	// (0x00039b7c) aid_ps_clock_pane

0x23c6,	// (0x000317dd) aid_ps_indicator_pane

0x23d2,	// (0x000317e9) indicator_ps_pane_ParamLimits

0x23d2,	// (0x000317e9) indicator_ps_pane

0x23e1,	// (0x000317f8) power_save_pane_g1_ParamLimits

0x23e1,	// (0x000317f8) power_save_pane_g1

0x23ed,	// (0x00031804) power_save_pane_g2_ParamLimits

0x23ed,	// (0x00031804) power_save_pane_g2

0xa1d8,	// (0x000395ef) aid_navinavi_width_pane

0x23b5,	// (0x000317cc) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0003e987) power_save_pane_g_ParamLimits

0xf570,	// (0x0003e987) power_save_pane_g

0x23fb,	// (0x00031812) power_save_pane_t1_ParamLimits

0x23fb,	// (0x00031812) power_save_pane_t1

0xa765,	// (0x00039b7c) aid_ps_clock_pane_ParamLimits

0x23c6,	// (0x000317dd) aid_ps_indicator_pane_ParamLimits

0x240d,	// (0x00031824) power_save_pane_t4_ParamLimits

0x240d,	// (0x00031824) power_save_pane_t4

0x0001,

0xf575,	// (0x0003e98c) power_save_pane_t_ParamLimits

0xf575,	// (0x0003e98c) power_save_pane_t

0x2437,	// (0x0003184e) power_save_t3_ParamLimits

0x2437,	// (0x0003184e) power_save_t3

0x2422,	// (0x00031839) power_save_t2_ParamLimits

0x2422,	// (0x00031839) power_save_t2

0x244c,	// (0x00031863) indicator_ps_pane_g1

0xa773,	// (0x00039b8a) ai_gene_pane_ParamLimits

0xa773,	// (0x00039b8a) ai_gene_pane

0xa77f,	// (0x00039b96) ai_links_pane_ParamLimits

0xa77f,	// (0x00039b96) ai_links_pane

0xa78b,	// (0x00039ba2) indicator_pane_cp1_ParamLimits

0xa78b,	// (0x00039ba2) indicator_pane_cp1

0xa797,	// (0x00039bae) main_pane_idle_g1_cp_ParamLimits

0xa797,	// (0x00039bae) main_pane_idle_g1_cp

0x2455,	// (0x0003186c) popup_ai_links_title_window

0xa7a3,	// (0x00039bba) soft_indicator_pane_cp1_ParamLimits

0xa7a3,	// (0x00039bba) soft_indicator_pane_cp1

0x6790,	// (0x00035ba7) ai_links_pane_g1

0x6799,	// (0x00035bb0) grid_ai_links_pane

0xd3c1,	// (0x0003c7d8) ai_gene_pane_1

0x677e,	// (0x00035b95) ai_gene_pane_2

0x6787,	// (0x00035b9e) list_highlight_pane_cp4

0xd3a5,	// (0x0003c7bc) cell_ai_link_pane_ParamLimits

0xd3a5,	// (0x0003c7bc) cell_ai_link_pane

0x6776,	// (0x00035b8d) cell_ai_link_pane_g1

0x2603,	// (0x00031a1a) cell_ai_link_pane_g2

0x0001,

0xf91d,	// (0x0003ed34) cell_ai_link_pane_g

0x22dc,	// (0x000316f3) grid_highlight_cp2

0x22dc,	// (0x000316f3) bg_popup_sub_pane_cp1

0x246c,	// (0x00031883) popup_ai_links_title_window_t1

0x66c6,	// (0x00035add) ai_gene_pane_1_g1_ParamLimits

0x66c6,	// (0x00035add) ai_gene_pane_1_g1

0x66d2,	// (0x00035ae9) ai_gene_pane_1_g2_ParamLimits

0x66d2,	// (0x00035ae9) ai_gene_pane_1_g2

0x0001,

0xf913,	// (0x0003ed2a) ai_gene_pane_1_g_ParamLimits

0xf913,	// (0x0003ed2a) ai_gene_pane_1_g

0x66df,	// (0x00035af6) ai_gene_pane_1_t1_ParamLimits

0x66df,	// (0x00035af6) ai_gene_pane_1_t1

0x6713,	// (0x00035b2a) grid_ai_soft_ind_pane

0x66b1,	// (0x00035ac8) ai_gene_pane_2_t1_ParamLimits

0x66b1,	// (0x00035ac8) ai_gene_pane_2_t1

0xa7af,	// (0x00039bc6) main_pane_empty_t1_ParamLimits

0xa7af,	// (0x00039bc6) main_pane_empty_t1

0xa7c7,	// (0x00039bde) main_pane_empty_t2_ParamLimits

0xa7c7,	// (0x00039bde) main_pane_empty_t2

0xa7dc,	// (0x00039bf3) main_pane_empty_t3_ParamLimits

0xa7dc,	// (0x00039bf3) main_pane_empty_t3

0xa7ee,	// (0x00039c05) main_pane_empty_t4_ParamLimits

0xa7ee,	// (0x00039c05) main_pane_empty_t4

0xa800,	// (0x00039c17) main_pane_empty_t5_ParamLimits

0xa800,	// (0x00039c17) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0003e991) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0003e991) main_pane_empty_t

0x4a2a,	// (0x00033e41) bg_popup_window_pane_ParamLimits

0x4a2a,	// (0x00033e41) bg_popup_window_pane

0x6421,	// (0x00035838) find_popup_pane_cp2_ParamLimits

0x6421,	// (0x00035838) find_popup_pane_cp2

0x642d,	// (0x00035844) heading_pane_ParamLimits

0x642d,	// (0x00035844) heading_pane

0x22dc,	// (0x000316f3) bg_popup_sub_pane

0xd339,	// (0x0003c750) bg_popup_window_pane_g1_ParamLimits

0xd339,	// (0x0003c750) bg_popup_window_pane_g1

0xd345,	// (0x0003c75c) bg_popup_window_pane_g2_ParamLimits

0xd345,	// (0x0003c75c) bg_popup_window_pane_g2

0xd351,	// (0x0003c768) bg_popup_window_pane_g3_ParamLimits

0xd351,	// (0x0003c768) bg_popup_window_pane_g3

0xd35d,	// (0x0003c774) bg_popup_window_pane_g4_ParamLimits

0xd35d,	// (0x0003c774) bg_popup_window_pane_g4

0xd369,	// (0x0003c780) bg_popup_window_pane_g5_ParamLimits

0xd369,	// (0x0003c780) bg_popup_window_pane_g5

0xd375,	// (0x0003c78c) bg_popup_window_pane_g6_ParamLimits

0xd375,	// (0x0003c78c) bg_popup_window_pane_g6

0xd381,	// (0x0003c798) bg_popup_window_pane_g7_ParamLimits

0xd381,	// (0x0003c798) bg_popup_window_pane_g7

0xd38d,	// (0x0003c7a4) bg_popup_window_pane_g8_ParamLimits

0xd38d,	// (0x0003c7a4) bg_popup_window_pane_g8

0xd399,	// (0x0003c7b0) bg_popup_window_pane_g9_ParamLimits

0xd399,	// (0x0003c7b0) bg_popup_window_pane_g9

0x6407,	// (0x0003581e) bg_popup_window_pane_g10_ParamLimits

0x6407,	// (0x0003581e) bg_popup_window_pane_g10

0x0009,

0xf8db,	// (0x0003ecf2) bg_popup_window_pane_g_ParamLimits

0xf8db,	// (0x0003ecf2) bg_popup_window_pane_g

0x63b0,	// (0x000357c7) bg_popup_heading_pane_ParamLimits

0x63b0,	// (0x000357c7) bg_popup_heading_pane

0xbc25,	// (0x0003b03c) tabs_4_passive_pane_cp_srt_ParamLimits

0xbc25,	// (0x0003b03c) tabs_4_passive_pane_cp_srt

0xbc37,	// (0x0003b04e) tabs_4_passive_pane_srt_ParamLimits

0x63c4,	// (0x000357db) heading_pane_g2

0xbc37,	// (0x0003b04e) tabs_4_passive_pane_srt

0x4ae3,	// (0x00033efa) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4ae3,	// (0x00033efa) bg_passive_tab_pane_cp3_srt

0x63cc,	// (0x000357e3) heading_pane_t1_ParamLimits

0x63cc,	// (0x000357e3) heading_pane_t1

0x63e3,	// (0x000357fa) heading_pane_t2_ParamLimits

0x63e3,	// (0x000357fa) heading_pane_t2

0x0001,

0xf8d6,	// (0x0003eced) heading_pane_t_ParamLimits

0xf8d6,	// (0x0003eced) heading_pane_t

0x5efb,	// (0x00035312) bg_popup_heading_pane_g1

0x5f8c,	// (0x000353a3) bg_popup_heading_pane_g2

0x5f96,	// (0x000353ad) bg_popup_heading_pane_g3

0x5fa0,	// (0x000353b7) bg_popup_heading_pane_g4

0x5faa,	// (0x000353c1) bg_popup_heading_pane_g5

0x5fb4,	// (0x000353cb) bg_popup_heading_pane_g6

0x5fbc,	// (0x000353d3) bg_popup_heading_pane_g7

0x5fc4,	// (0x000353db) bg_popup_heading_pane_g8

0x5fce,	// (0x000353e5) bg_popup_heading_pane_g9

0x0008,

0xf892,	// (0x0003eca9) bg_popup_heading_pane_g

0x5816,	// (0x00034c2d) bg_popup_sub_pane_g1

0x5826,	// (0x00034c3d) bg_popup_sub_pane_g2

0x581e,	// (0x00034c35) bg_popup_sub_pane_g3

0x5836,	// (0x00034c4d) bg_popup_sub_pane_g4

0x582e,	// (0x00034c45) bg_popup_sub_pane_g5

0x583e,	// (0x00034c55) bg_popup_sub_pane_g6

0x5846,	// (0x00034c5d) bg_popup_sub_pane_g7

0x5856,	// (0x00034c6d) bg_popup_sub_pane_g8

0x584e,	// (0x00034c65) bg_popup_sub_pane_g9

0x0008,

0xf86c,	// (0x0003ec83) bg_popup_sub_pane_g

0x232a,	// (0x00031741) bg_popup_window_pane_cp5_ParamLimits

0x232a,	// (0x00031741) bg_popup_window_pane_cp5

0x2489,	// (0x000318a0) popup_note_window_g1_ParamLimits

0x2489,	// (0x000318a0) popup_note_window_g1

0x2495,	// (0x000318ac) popup_note_window_t1_ParamLimits

0x2495,	// (0x000318ac) popup_note_window_t1

0x24a7,	// (0x000318be) popup_note_window_t2_ParamLimits

0x24a7,	// (0x000318be) popup_note_window_t2

0x24b9,	// (0x000318d0) popup_note_window_t3_ParamLimits

0x24b9,	// (0x000318d0) popup_note_window_t3

0x24cb,	// (0x000318e2) popup_note_window_t4_ParamLimits

0x24cb,	// (0x000318e2) popup_note_window_t4

0x24f3,	// (0x0003190a) popup_note_window_t5_ParamLimits

0x24f3,	// (0x0003190a) popup_note_window_t5

0x0004,

0xf585,	// (0x0003e99c) popup_note_window_t_ParamLimits

0xf585,	// (0x0003e99c) popup_note_window_t

0x2517,	// (0x0003192e) bg_popup_window_pane_cp6_ParamLimits

0x2517,	// (0x0003192e) bg_popup_window_pane_cp6

0x5e6f,	// (0x00035286) popup_note_image_window_g1_ParamLimits

0x5e6f,	// (0x00035286) popup_note_image_window_g1

0x5e7b,	// (0x00035292) popup_note_image_window_g2_ParamLimits

0x5e7b,	// (0x00035292) popup_note_image_window_g2

0x0001,

0xf860,	// (0x0003ec77) popup_note_image_window_g_ParamLimits

0xf860,	// (0x0003ec77) popup_note_image_window_g

0x5e94,	// (0x000352ab) popup_note_image_window_t1_ParamLimits

0x5e94,	// (0x000352ab) popup_note_image_window_t1

0x5ead,	// (0x000352c4) popup_note_image_window_t2_ParamLimits

0x5ead,	// (0x000352c4) popup_note_image_window_t2

0x5ec6,	// (0x000352dd) popup_note_image_window_t3_ParamLimits

0x5ec6,	// (0x000352dd) popup_note_image_window_t3

0x0002,

0xf865,	// (0x0003ec7c) popup_note_image_window_t_ParamLimits

0xf865,	// (0x0003ec7c) popup_note_image_window_t

0x5d4c,	// (0x00035163) bg_popup_window_pane_cp7_ParamLimits

0x5d4c,	// (0x00035163) bg_popup_window_pane_cp7

0x5d7c,	// (0x00035193) popup_note_wait_window_g1_ParamLimits

0x5d7c,	// (0x00035193) popup_note_wait_window_g1

0x5d88,	// (0x0003519f) popup_note_wait_window_g2_ParamLimits

0x5d88,	// (0x0003519f) popup_note_wait_window_g2

0x0002,

0xf84e,	// (0x0003ec65) popup_note_wait_window_g_ParamLimits

0xf84e,	// (0x0003ec65) popup_note_wait_window_g

0x5da0,	// (0x000351b7) popup_note_wait_window_t1_ParamLimits

0x5da0,	// (0x000351b7) popup_note_wait_window_t1

0x5dc7,	// (0x000351de) popup_note_wait_window_t2_ParamLimits

0x5dc7,	// (0x000351de) popup_note_wait_window_t2

0x5de4,	// (0x000351fb) popup_note_wait_window_t3_ParamLimits

0x5de4,	// (0x000351fb) popup_note_wait_window_t3

0x5df7,	// (0x0003520e) popup_note_wait_window_t4_ParamLimits

0x5df7,	// (0x0003520e) popup_note_wait_window_t4

0x0004,

0xf855,	// (0x0003ec6c) popup_note_wait_window_t_ParamLimits

0xf855,	// (0x0003ec6c) popup_note_wait_window_t

0x5e1c,	// (0x00035233) wait_bar_pane_ParamLimits

0x5e1c,	// (0x00035233) wait_bar_pane

0x22dc,	// (0x000316f3) wait_anim_pane

0x22dc,	// (0x000316f3) wait_border_pane

0x22d2,	// (0x000316e9) wait_anim_pane_g1

0x22d2,	// (0x000316e9) wait_anim_pane_g2

0x0001,

0xf70e,	// (0x0003eb25) wait_anim_pane_g

0x5cf0,	// (0x00035107) wait_border_pane_g1

0x5cfb,	// (0x00035112) wait_border_pane_g2

0x5d04,	// (0x0003511b) wait_border_pane_g3

0x0002,

0xf847,	// (0x0003ec5e) wait_border_pane_g

0x5b60,	// (0x00034f77) bg_popup_window_pane_cp16_ParamLimits

0x5b60,	// (0x00034f77) bg_popup_window_pane_cp16

0x5c60,	// (0x00035077) indicator_popup_pane_cp4_ParamLimits

0x5c60,	// (0x00035077) indicator_popup_pane_cp4

0x5c74,	// (0x0003508b) popup_query_data_window_t1_ParamLimits

0x5c74,	// (0x0003508b) popup_query_data_window_t1

0x5c86,	// (0x0003509d) popup_query_data_window_t2_ParamLimits

0x5c86,	// (0x0003509d) popup_query_data_window_t2

0x5c9f,	// (0x000350b6) popup_query_data_window_t3_ParamLimits

0x5c9f,	// (0x000350b6) popup_query_data_window_t3

0x0002,

0xf840,	// (0x0003ec57) popup_query_data_window_t_ParamLimits

0xf840,	// (0x0003ec57) popup_query_data_window_t

0x5cb9,	// (0x000350d0) query_popup_data_pane_ParamLimits

0x5cb9,	// (0x000350d0) query_popup_data_pane

0x5ccd,	// (0x000350e4) query_popup_data_pane_cp1_ParamLimits

0x5ccd,	// (0x000350e4) query_popup_data_pane_cp1

0x5b60,	// (0x00034f77) bg_popup_window_pane_cp10_ParamLimits

0x5b60,	// (0x00034f77) bg_popup_window_pane_cp10

0x5b92,	// (0x00034fa9) indicator_popup_pane_ParamLimits

0x5b92,	// (0x00034fa9) indicator_popup_pane

0x5bb4,	// (0x00034fcb) popup_query_code_window_t1_ParamLimits

0x5bb4,	// (0x00034fcb) popup_query_code_window_t1

0x5bce,	// (0x00034fe5) popup_query_code_window_t2_ParamLimits

0x5bce,	// (0x00034fe5) popup_query_code_window_t2

0x5c17,	// (0x0003502e) popup_query_code_window_t3_ParamLimits

0x5c17,	// (0x0003502e) popup_query_code_window_t3

0x0002,

0xf839,	// (0x0003ec50) popup_query_code_window_t_ParamLimits

0xf839,	// (0x0003ec50) popup_query_code_window_t

0x5c46,	// (0x0003505d) query_popup_pane_ParamLimits

0x5c46,	// (0x0003505d) query_popup_pane

0x2517,	// (0x0003192e) bg_popup_window_pane_cp15_ParamLimits

0x2517,	// (0x0003192e) bg_popup_window_pane_cp15

0x2535,	// (0x0003194c) indicator_popup_pane_cp1_ParamLimits

0x2535,	// (0x0003194c) indicator_popup_pane_cp1

0x2548,	// (0x0003195f) indicator_popup_pane_cp2_ParamLimits

0x2548,	// (0x0003195f) indicator_popup_pane_cp2

0x255b,	// (0x00031972) popup_query_data_code_window_g1_ParamLimits

0x255b,	// (0x00031972) popup_query_data_code_window_g1

0x256e,	// (0x00031985) popup_query_data_code_window_t1_ParamLimits

0x256e,	// (0x00031985) popup_query_data_code_window_t1

0x2580,	// (0x00031997) popup_query_data_code_window_t2_ParamLimits

0x2580,	// (0x00031997) popup_query_data_code_window_t2

0x2592,	// (0x000319a9) popup_query_data_code_window_t3_ParamLimits

0x2592,	// (0x000319a9) popup_query_data_code_window_t3

0x25a8,	// (0x000319bf) popup_query_data_code_window_t4_ParamLimits

0x25a8,	// (0x000319bf) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0003e9a7) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0003e9a7) popup_query_data_code_window_t

0x5204,	// (0x0003461b) list_single_midp_graphic_pane_g3

0x25c0,	// (0x000319d7) query_popup_data_pane_cp2_ParamLimits

0x25d3,	// (0x000319ea) query_popup_pane_cp2_ParamLimits

0x25d3,	// (0x000319ea) query_popup_pane_cp2

0x22dc,	// (0x000316f3) bg_popup_window_pane_cp11

0x5b58,	// (0x00034f6f) heading_pane_cp5

0x2661,	// (0x00031a78) listscroll_popup_info_pane

0x22dc,	// (0x000316f3) input_focus_pane_cp3

0x25e6,	// (0x000319fd) query_popup_pane_t1

0x25f4,	// (0x00031a0b) list_popup_info_pane_ParamLimits

0x25f4,	// (0x00031a0b) list_popup_info_pane

0x2603,	// (0x00031a1a) listscroll_popup_info_pane_g1

0x260b,	// (0x00031a22) scroll_pane_cp7

0x2615,	// (0x00031a2c) popup_info_list_pane_t1_ParamLimits

0x2615,	// (0x00031a2c) popup_info_list_pane_t1

0x262f,	// (0x00031a46) popup_info_list_pane_t2_ParamLimits

0x262f,	// (0x00031a46) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0003e9b0) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0003e9b0) popup_info_list_pane_t

0x22dc,	// (0x000316f3) bg_popup_window_pane_cp12

0x6ae0,	// (0x00035ef7) find_popup_pane

0x2348,	// (0x0003175f) bg_popup_window_pane_cp3

0x2649,	// (0x00031a60) heading_pane_cp3

0x2655,	// (0x00031a6c) listscroll_popup_graphic_pane

0x22dc,	// (0x000316f3) bg_popup_window_pane_cp4

0xa864,	// (0x00039c7b) heading_pane_cp4

0x2661,	// (0x00031a78) listscroll_popup_colour_pane

0x2669,	// (0x00031a80) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x2669,	// (0x00031a80) cell_large_graphic_colour_none_popup_pane

0xa86e,	// (0x00039c85) grid_large_graphic_colour_popup_pane_ParamLimits

0xa86e,	// (0x00039c85) grid_large_graphic_colour_popup_pane

0x267d,	// (0x00031a94) listscroll_popup_colour_pane_g1_ParamLimits

0x267d,	// (0x00031a94) listscroll_popup_colour_pane_g1

0x2694,	// (0x00031aab) listscroll_popup_colour_pane_g2_ParamLimits

0x2694,	// (0x00031aab) listscroll_popup_colour_pane_g2

0x26ab,	// (0x00031ac2) listscroll_popup_colour_pane_g3_ParamLimits

0x26ab,	// (0x00031ac2) listscroll_popup_colour_pane_g3

0xa896,	// (0x00039cad) listscroll_popup_colour_pane_g4_ParamLimits

0xa896,	// (0x00039cad) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0003e9b5) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0003e9b5) listscroll_popup_colour_pane_g

0x26bb,	// (0x00031ad2) scroll_pane_cp6_ParamLimits

0x26bb,	// (0x00031ad2) scroll_pane_cp6

0xa8a5,	// (0x00039cbc) cell_large_graphic_colour_popup_pane_ParamLimits

0xa8a5,	// (0x00039cbc) cell_large_graphic_colour_popup_pane

0x26cd,	// (0x00031ae4) cell_large_graphic_colour_none_popup_pane_t1

0x22dc,	// (0x000316f3) grid_highlight_pane_cp5

0x26dc,	// (0x00031af3) cell_large_graphic_colour_popup_pane_g1

0x26e4,	// (0x00031afb) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0003e9be) cell_large_graphic_colour_popup_pane_g

0x26ec,	// (0x00031b03) cell_large_graphic_colour_popup_pane_g2_copy1

0x26f5,	// (0x00031b0c) grid_highlight_pane_cp4

0x26fd,	// (0x00031b14) bg_popup_window_pane_cp8_ParamLimits

0x26fd,	// (0x00031b14) bg_popup_window_pane_cp8

0x2718,	// (0x00031b2f) popup_snote_single_text_window_g1_ParamLimits

0x2718,	// (0x00031b2f) popup_snote_single_text_window_g1

0x272a,	// (0x00031b41) popup_snote_single_text_window_t1_ParamLimits

0x272a,	// (0x00031b41) popup_snote_single_text_window_t1

0x273d,	// (0x00031b54) popup_snote_single_text_window_t2_ParamLimits

0x273d,	// (0x00031b54) popup_snote_single_text_window_t2

0x2750,	// (0x00031b67) popup_snote_single_text_window_t3_ParamLimits

0x2750,	// (0x00031b67) popup_snote_single_text_window_t3

0x2789,	// (0x00031ba0) popup_snote_single_text_window_t4_ParamLimits

0x2789,	// (0x00031ba0) popup_snote_single_text_window_t4

0x27bd,	// (0x00031bd4) popup_snote_single_text_window_t5_ParamLimits

0x27bd,	// (0x00031bd4) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0003e9c3) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0003e9c3) popup_snote_single_text_window_t

0x27ec,	// (0x00031c03) bg_popup_window_pane_cp9_ParamLimits

0x27ec,	// (0x00031c03) bg_popup_window_pane_cp9

0x2718,	// (0x00031b2f) popup_snote_single_graphic_window_g1_ParamLimits

0x2718,	// (0x00031b2f) popup_snote_single_graphic_window_g1

0x27fa,	// (0x00031c11) popup_snote_single_graphic_window_g2_ParamLimits

0x27fa,	// (0x00031c11) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0003e9ce) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0003e9ce) popup_snote_single_graphic_window_g

0x2806,	// (0x00031c1d) popup_snote_single_graphic_window_t1_ParamLimits

0x2806,	// (0x00031c1d) popup_snote_single_graphic_window_t1

0x2819,	// (0x00031c30) popup_snote_single_graphic_window_t2_ParamLimits

0x2819,	// (0x00031c30) popup_snote_single_graphic_window_t2

0x282c,	// (0x00031c43) popup_snote_single_graphic_window_t3_ParamLimits

0x282c,	// (0x00031c43) popup_snote_single_graphic_window_t3

0x2865,	// (0x00031c7c) popup_snote_single_graphic_window_t4_ParamLimits

0x2865,	// (0x00031c7c) popup_snote_single_graphic_window_t4

0x2899,	// (0x00031cb0) popup_snote_single_graphic_window_t5_ParamLimits

0x2899,	// (0x00031cb0) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0003e9d3) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0003e9d3) popup_snote_single_graphic_window_t

0x6a68,	// (0x00035e7f) grid_graphic_popup_pane_ParamLimits

0x6a68,	// (0x00035e7f) grid_graphic_popup_pane

0x6a90,	// (0x00035ea7) listscroll_popup_graphic_pane_g1_ParamLimits

0x6a90,	// (0x00035ea7) listscroll_popup_graphic_pane_g1

0xd62f,	// (0x0003ca46) listscroll_popup_graphic_pane_g2_ParamLimits

0xd62f,	// (0x0003ca46) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b6,	// (0x0003edcd) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b6,	// (0x0003edcd) listscroll_popup_graphic_pane_g

0x68c8,	// (0x00035cdf) scroll_pane_cp5

0xd5f0,	// (0x0003ca07) cell_graphic_popup_pane_ParamLimits

0xd5f0,	// (0x0003ca07) cell_graphic_popup_pane

0x6a33,	// (0x00035e4a) cell_graphic_popup_pane_g1

0x6a3b,	// (0x00035e52) cell_graphic_popup_pane_g2

0x26ec,	// (0x00031b03) cell_graphic_popup_pane_g3

0x0002,

0xf9af,	// (0x0003edc6) cell_graphic_popup_pane_g

0x6a44,	// (0x00035e5b) cell_graphic_popup_pane_t2

0x26f5,	// (0x00031b0c) grid_highlight_pane_cp3

0x28da,	// (0x00031cf1) list_gen_pane_ParamLimits

0x28da,	// (0x00031cf1) list_gen_pane

0x2902,	// (0x00031d19) scroll_pane

0xd5a3,	// (0x0003c9ba) bg_list_pane_g1_ParamLimits

0xd5a3,	// (0x0003c9ba) bg_list_pane_g1

0x69e2,	// (0x00035df9) bg_list_pane_g2_ParamLimits

0x69e2,	// (0x00035df9) bg_list_pane_g2

0x69f5,	// (0x00035e0c) bg_list_pane_g3_ParamLimits

0x69f5,	// (0x00035e0c) bg_list_pane_g3

0x6a07,	// (0x00035e1e) bg_list_pane_g4_ParamLimits

0x6a07,	// (0x00035e1e) bg_list_pane_g4

0xd5be,	// (0x0003c9d5) bg_list_pane_g5_ParamLimits

0xd5be,	// (0x0003c9d5) bg_list_pane_g5

0x0004,

0xf9a4,	// (0x0003edbb) bg_list_pane_g_ParamLimits

0xf9a4,	// (0x0003edbb) bg_list_pane_g

0xbb0d,	// (0x0003af24) list_double2_graphic_large_graphic_pane_ParamLimits

0xbb0d,	// (0x0003af24) list_double2_graphic_large_graphic_pane

0xbb0d,	// (0x0003af24) list_double2_graphic_pane_ParamLimits

0xbb0d,	// (0x0003af24) list_double2_graphic_pane

0xbb0d,	// (0x0003af24) list_double2_large_graphic_pane_ParamLimits

0xbb0d,	// (0x0003af24) list_double2_large_graphic_pane

0xbb0d,	// (0x0003af24) list_double2_pane_ParamLimits

0xbb0d,	// (0x0003af24) list_double2_pane

0xbb0d,	// (0x0003af24) list_double_graphic_heading_pane_ParamLimits

0xbb0d,	// (0x0003af24) list_double_graphic_heading_pane

0xbb0d,	// (0x0003af24) list_double_graphic_pane_ParamLimits

0xbb0d,	// (0x0003af24) list_double_graphic_pane

0xbb0d,	// (0x0003af24) list_double_heading_pane_ParamLimits

0xbb0d,	// (0x0003af24) list_double_heading_pane

0xbb0d,	// (0x0003af24) list_double_large_graphic_pane_ParamLimits

0xbb0d,	// (0x0003af24) list_double_large_graphic_pane

0xbb0d,	// (0x0003af24) list_double_number_pane_ParamLimits

0xbb0d,	// (0x0003af24) list_double_number_pane

0xbb0d,	// (0x0003af24) list_double_pane_ParamLimits

0xbb0d,	// (0x0003af24) list_double_pane

0xbb0d,	// (0x0003af24) list_double_time_pane_ParamLimits

0xbb0d,	// (0x0003af24) list_double_time_pane

0xbb0d,	// (0x0003af24) list_setting_number_pane_ParamLimits

0xbb0d,	// (0x0003af24) list_setting_number_pane

0xbb0d,	// (0x0003af24) list_setting_pane_ParamLimits

0xbb0d,	// (0x0003af24) list_setting_pane

0xbb5d,	// (0x0003af74) list_single_2graphic_pane_ParamLimits

0xbb5d,	// (0x0003af74) list_single_2graphic_pane

0xbb5d,	// (0x0003af74) list_single_graphic_heading_pane_ParamLimits

0xbb5d,	// (0x0003af74) list_single_graphic_heading_pane

0xbb5d,	// (0x0003af74) list_single_graphic_pane_ParamLimits

0xbb5d,	// (0x0003af74) list_single_graphic_pane

0xbb5d,	// (0x0003af74) list_single_heading_pane_ParamLimits

0xbb5d,	// (0x0003af74) list_single_heading_pane

0xbbde,	// (0x0003aff5) list_single_large_graphic_pane_ParamLimits

0xbbde,	// (0x0003aff5) list_single_large_graphic_pane

0xbb5d,	// (0x0003af74) list_single_number_heading_pane_ParamLimits

0xbb5d,	// (0x0003af74) list_single_number_heading_pane

0xbb5d,	// (0x0003af74) list_single_number_pane_ParamLimits

0xbb5d,	// (0x0003af74) list_single_number_pane

0xbb5d,	// (0x0003af74) list_single_pane_ParamLimits

0xbb5d,	// (0x0003af74) list_single_pane

0x22dc,	// (0x000316f3) list_highlight_pane_cp1

0xa8ce,	// (0x00039ce5) list_single_pane_g1_ParamLimits

0xa8ce,	// (0x00039ce5) list_single_pane_g1

0xa8da,	// (0x00039cf1) list_single_pane_g2_ParamLimits

0xa8da,	// (0x00039cf1) list_single_pane_g2

0x0001,

0xf5d8,	// (0x0003e9ef) list_single_pane_g_ParamLimits

0xf5d8,	// (0x0003e9ef) list_single_pane_g

0x9c99,	// (0x000390b0) list_single_pane_t1_ParamLimits

0x9c99,	// (0x000390b0) list_single_pane_t1

0xa8ce,	// (0x00039ce5) list_single_number_pane_g1_ParamLimits

0xa8ce,	// (0x00039ce5) list_single_number_pane_g1

0xa8da,	// (0x00039cf1) list_single_number_pane_g2_ParamLimits

0xa8da,	// (0x00039cf1) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x0003e9ef) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x0003e9ef) list_single_number_pane_g

0x9b68,	// (0x00038f7f) list_single_number_pane_t1_ParamLimits

0x9b68,	// (0x00038f7f) list_single_number_pane_t1

0x9c57,	// (0x0003906e) list_single_number_pane_t2_ParamLimits

0x9c57,	// (0x0003906e) list_single_number_pane_t2

0x0001,

0xf965,	// (0x0003ed7c) list_single_number_pane_t_ParamLimits

0xf965,	// (0x0003ed7c) list_single_number_pane_t

0x93a4,	// (0x000387bb) list_single_graphic_pane_g1_ParamLimits

0x93a4,	// (0x000387bb) list_single_graphic_pane_g1

0xa8ce,	// (0x00039ce5) list_single_graphic_pane_g2_ParamLimits

0xa8ce,	// (0x00039ce5) list_single_graphic_pane_g2

0xa8da,	// (0x00039cf1) list_single_graphic_pane_g3_ParamLimits

0xa8da,	// (0x00039cf1) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0003e9de) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0003e9de) list_single_graphic_pane_g

0x93b0,	// (0x000387c7) list_single_graphic_pane_t1_ParamLimits

0x93b0,	// (0x000387c7) list_single_graphic_pane_t1

0x93c6,	// (0x000387dd) list_single_heading_pane_g1_ParamLimits

0x93c6,	// (0x000387dd) list_single_heading_pane_g1

0xa8da,	// (0x00039cf1) list_single_heading_pane_g2_ParamLimits

0xa8da,	// (0x00039cf1) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0003e9e5) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0003e9e5) list_single_heading_pane_g

0x93d9,	// (0x000387f0) list_single_heading_pane_t1_ParamLimits

0x93d9,	// (0x000387f0) list_single_heading_pane_t1

0xa8e6,	// (0x00039cfd) list_single_heading_pane_t2_ParamLimits

0xa8e6,	// (0x00039cfd) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0003e9ea) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0003e9ea) list_single_heading_pane_t

0xa8ce,	// (0x00039ce5) list_single_number_heading_pane_g1_ParamLimits

0xa8ce,	// (0x00039ce5) list_single_number_heading_pane_g1

0xa8da,	// (0x00039cf1) list_single_number_heading_pane_g2_ParamLimits

0xa8da,	// (0x00039cf1) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x0003e9ef) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x0003e9ef) list_single_number_heading_pane_g

0x93ef,	// (0x00038806) list_single_number_heading_pane_t1_ParamLimits

0x93ef,	// (0x00038806) list_single_number_heading_pane_t1

0x9405,	// (0x0003881c) list_single_number_heading_pane_t2_ParamLimits

0x9405,	// (0x0003881c) list_single_number_heading_pane_t2

0x9417,	// (0x0003882e) list_single_number_heading_pane_t3_ParamLimits

0x9417,	// (0x0003882e) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x0003e9f4) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x0003e9f4) list_single_number_heading_pane_t

0x9429,	// (0x00038840) list_single_graphic_heading_pane_g1_ParamLimits

0x9429,	// (0x00038840) list_single_graphic_heading_pane_g1

0x943f,	// (0x00038856) list_single_graphic_heading_pane_g4_ParamLimits

0x943f,	// (0x00038856) list_single_graphic_heading_pane_g4

0xa8da,	// (0x00039cf1) list_single_graphic_heading_pane_g5_ParamLimits

0xa8da,	// (0x00039cf1) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x0003e9fb) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x0003e9fb) list_single_graphic_heading_pane_g

0x93ef,	// (0x00038806) list_single_graphic_heading_pane_t1_ParamLimits

0x93ef,	// (0x00038806) list_single_graphic_heading_pane_t1

0x9450,	// (0x00038867) list_single_graphic_heading_pane_t2_ParamLimits

0x9450,	// (0x00038867) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x0003ea02) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x0003ea02) list_single_graphic_heading_pane_t

0xa8f8,	// (0x00039d0f) list_single_large_graphic_pane_g1_ParamLimits

0xa8f8,	// (0x00039d0f) list_single_large_graphic_pane_g1

0xa904,	// (0x00039d1b) list_single_large_graphic_pane_g2_ParamLimits

0xa904,	// (0x00039d1b) list_single_large_graphic_pane_g2

0xa910,	// (0x00039d27) list_single_large_graphic_pane_g3_ParamLimits

0xa910,	// (0x00039d27) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0003ea07) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0003ea07) list_single_large_graphic_pane_g

0x5cfb,	// (0x00035112) wait_border_pane_g2_copy1

0xa91c,	// (0x00039d33) list_single_large_graphic_pane_g4_cp2

0x9468,	// (0x0003887f) list_single_large_graphic_pane_t1_ParamLimits

0x9468,	// (0x0003887f) list_single_large_graphic_pane_t1

0x947e,	// (0x00038895) list_double_pane_g1_ParamLimits

0x947e,	// (0x00038895) list_double_pane_g1

0x948a,	// (0x000388a1) list_double_pane_g2_ParamLimits

0x948a,	// (0x000388a1) list_double_pane_g2

0x0001,

0xf5f7,	// (0x0003ea0e) list_double_pane_g_ParamLimits

0xf5f7,	// (0x0003ea0e) list_double_pane_g

0x9496,	// (0x000388ad) list_double_pane_t1_ParamLimits

0x9496,	// (0x000388ad) list_double_pane_t1

0x94ac,	// (0x000388c3) list_double_pane_t2_ParamLimits

0x94ac,	// (0x000388c3) list_double_pane_t2

0x0001,

0xf5fc,	// (0x0003ea13) list_double_pane_t_ParamLimits

0xf5fc,	// (0x0003ea13) list_double_pane_t

0x94be,	// (0x000388d5) list_double2_pane_g1_ParamLimits

0x94be,	// (0x000388d5) list_double2_pane_g1

0x94cf,	// (0x000388e6) list_double2_pane_g2_ParamLimits

0x94cf,	// (0x000388e6) list_double2_pane_g2

0x0001,

0xf601,	// (0x0003ea18) list_double2_pane_g_ParamLimits

0xf601,	// (0x0003ea18) list_double2_pane_g

0x94db,	// (0x000388f2) list_double2_pane_t1_ParamLimits

0x94db,	// (0x000388f2) list_double2_pane_t1

0x94f1,	// (0x00038908) list_double2_pane_t2_ParamLimits

0x94f1,	// (0x00038908) list_double2_pane_t2

0x0001,

0xf606,	// (0x0003ea1d) list_double2_pane_t_ParamLimits

0xf606,	// (0x0003ea1d) list_double2_pane_t

0x947e,	// (0x00038895) list_double_number_pane_g1_ParamLimits

0x947e,	// (0x00038895) list_double_number_pane_g1

0x948a,	// (0x000388a1) list_double_number_pane_g2_ParamLimits

0x948a,	// (0x000388a1) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x0003ea0e) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x0003ea0e) list_double_number_pane_g

0x9503,	// (0x0003891a) list_double_number_pane_t1_ParamLimits

0x9503,	// (0x0003891a) list_double_number_pane_t1

0x9515,	// (0x0003892c) list_double_number_pane_t2_ParamLimits

0x9515,	// (0x0003892c) list_double_number_pane_t2

0x952b,	// (0x00038942) list_double_number_pane_t3_ParamLimits

0x952b,	// (0x00038942) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x0003ea22) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x0003ea22) list_double_number_pane_t

0x953d,	// (0x00038954) list_double_graphic_pane_g1_ParamLimits

0x953d,	// (0x00038954) list_double_graphic_pane_g1

0x9549,	// (0x00038960) list_double_graphic_pane_g2_ParamLimits

0x9549,	// (0x00038960) list_double_graphic_pane_g2

0x9558,	// (0x0003896f) list_double_graphic_pane_g3_ParamLimits

0x9558,	// (0x0003896f) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x0003ea29) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x0003ea29) list_double_graphic_pane_g

0x9564,	// (0x0003897b) list_double_graphic_pane_t1_ParamLimits

0x9564,	// (0x0003897b) list_double_graphic_pane_t1

0x957a,	// (0x00038991) list_double_graphic_pane_t2_ParamLimits

0x957a,	// (0x00038991) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x0003ea32) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x0003ea32) list_double_graphic_pane_t

0x958c,	// (0x000389a3) list_double2_graphic_pane_g1_ParamLimits

0x958c,	// (0x000389a3) list_double2_graphic_pane_g1

0x2d5b,	// (0x00032172) list_double2_graphic_pane_g2_ParamLimits

0x2d5b,	// (0x00032172) list_double2_graphic_pane_g2

0xa930,	// (0x00039d47) list_double2_graphic_pane_g3_ParamLimits

0xa930,	// (0x00039d47) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x0003ea37) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x0003ea37) list_double2_graphic_pane_g

0x9598,	// (0x000389af) list_double2_graphic_pane_t1_ParamLimits

0x9598,	// (0x000389af) list_double2_graphic_pane_t1

0x95ae,	// (0x000389c5) list_double2_graphic_pane_t2_ParamLimits

0x95ae,	// (0x000389c5) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x0003ea3e) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x0003ea3e) list_double2_graphic_pane_t

0x95c0,	// (0x000389d7) list_double_large_graphic_pane_g1_ParamLimits

0x95c0,	// (0x000389d7) list_double_large_graphic_pane_g1

0x95df,	// (0x000389f6) list_double_large_graphic_pane_g2_ParamLimits

0x95df,	// (0x000389f6) list_double_large_graphic_pane_g2

0x948a,	// (0x000388a1) list_double_large_graphic_pane_g3_ParamLimits

0x948a,	// (0x000388a1) list_double_large_graphic_pane_g3

0x95f5,	// (0x00038a0c) list_double_large_graphic_pane_g4_ParamLimits

0x95f5,	// (0x00038a0c) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x0003ea43) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x0003ea43) list_double_large_graphic_pane_g

0x9608,	// (0x00038a1f) list_double_large_graphic_pane_t1_ParamLimits

0x9608,	// (0x00038a1f) list_double_large_graphic_pane_t1

0x9621,	// (0x00038a38) list_double_large_graphic_pane_t2_ParamLimits

0x9621,	// (0x00038a38) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x0003ea4e) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x0003ea4e) list_double_large_graphic_pane_t

0xa951,	// (0x00039d68) list_double2_large_graphic_pane_g1_ParamLimits

0xa951,	// (0x00039d68) list_double2_large_graphic_pane_g1

0xa95d,	// (0x00039d74) list_double2_large_graphic_pane_g2_ParamLimits

0xa95d,	// (0x00039d74) list_double2_large_graphic_pane_g2

0xa930,	// (0x00039d47) list_double2_large_graphic_pane_g3_ParamLimits

0xa930,	// (0x00039d47) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x0003ea53) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x0003ea53) list_double2_large_graphic_pane_g

0x9633,	// (0x00038a4a) list_double2_large_graphic_pane_t1_ParamLimits

0x9633,	// (0x00038a4a) list_double2_large_graphic_pane_t1

0x9649,	// (0x00038a60) list_double2_large_graphic_pane_t2_ParamLimits

0x9649,	// (0x00038a60) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x0003ea5a) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x0003ea5a) list_double2_large_graphic_pane_t

0x965b,	// (0x00038a72) list_double_heading_pane_g1_ParamLimits

0x965b,	// (0x00038a72) list_double_heading_pane_g1

0xa96e,	// (0x00039d85) list_double_heading_pane_g2_ParamLimits

0xa96e,	// (0x00039d85) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x0003ea5f) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x0003ea5f) list_double_heading_pane_g

0x966c,	// (0x00038a83) list_double_heading_pane_t1_ParamLimits

0x966c,	// (0x00038a83) list_double_heading_pane_t1

0x94f1,	// (0x00038908) list_double_heading_pane_t2_ParamLimits

0x94f1,	// (0x00038908) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x0003ea64) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x0003ea64) list_double_heading_pane_t

0x9682,	// (0x00038a99) list_double_graphic_heading_pane_g1_ParamLimits

0x9682,	// (0x00038a99) list_double_graphic_heading_pane_g1

0x965b,	// (0x00038a72) list_double_graphic_heading_pane_g2_ParamLimits

0x965b,	// (0x00038a72) list_double_graphic_heading_pane_g2

0xa96e,	// (0x00039d85) list_double_graphic_heading_pane_g3_ParamLimits

0xa96e,	// (0x00039d85) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x0003ea69) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x0003ea69) list_double_graphic_heading_pane_g

0x968e,	// (0x00038aa5) list_double_graphic_heading_pane_t1_ParamLimits

0x968e,	// (0x00038aa5) list_double_graphic_heading_pane_t1

0x95ae,	// (0x000389c5) list_double_graphic_heading_pane_t2_ParamLimits

0x95ae,	// (0x000389c5) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x0003ea70) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x0003ea70) list_double_graphic_heading_pane_t

0x96a4,	// (0x00038abb) list_double_time_pane_g1_ParamLimits

0x96a4,	// (0x00038abb) list_double_time_pane_g1

0x96b5,	// (0x00038acc) list_double_time_pane_g2_ParamLimits

0x96b5,	// (0x00038acc) list_double_time_pane_g2

0x0001,

0xf65e,	// (0x0003ea75) list_double_time_pane_g_ParamLimits

0xf65e,	// (0x0003ea75) list_double_time_pane_g

0x96c1,	// (0x00038ad8) list_double_time_pane_t1_ParamLimits

0x96c1,	// (0x00038ad8) list_double_time_pane_t1

0x96d7,	// (0x00038aee) list_double_time_pane_t2_ParamLimits

0x96d7,	// (0x00038aee) list_double_time_pane_t2

0x96e9,	// (0x00038b00) list_double_time_pane_t3_ParamLimits

0x96e9,	// (0x00038b00) list_double_time_pane_t3

0x96fb,	// (0x00038b12) list_double_time_pane_t4_ParamLimits

0x96fb,	// (0x00038b12) list_double_time_pane_t4

0x0003,

0xf663,	// (0x0003ea7a) list_double_time_pane_t_ParamLimits

0xf663,	// (0x0003ea7a) list_double_time_pane_t

0x970d,	// (0x00038b24) list_setting_pane_g1_ParamLimits

0x970d,	// (0x00038b24) list_setting_pane_g1

0x94cf,	// (0x000388e6) list_setting_pane_g2_ParamLimits

0x94cf,	// (0x000388e6) list_setting_pane_g2

0x0001,

0xf66c,	// (0x0003ea83) list_setting_pane_g_ParamLimits

0xf66c,	// (0x0003ea83) list_setting_pane_g

0x9719,	// (0x00038b30) list_setting_pane_t1_ParamLimits

0x9719,	// (0x00038b30) list_setting_pane_t1

0x9733,	// (0x00038b4a) list_setting_pane_t2_ParamLimits

0x9733,	// (0x00038b4a) list_setting_pane_t2

0x0002,

0xf671,	// (0x0003ea88) list_setting_pane_t_ParamLimits

0xf671,	// (0x0003ea88) list_setting_pane_t

0x9770,	// (0x00038b87) set_value_pane_cp_ParamLimits

0x9770,	// (0x00038b87) set_value_pane_cp

0x977c,	// (0x00038b93) list_setting_number_pane_g1_ParamLimits

0x977c,	// (0x00038b93) list_setting_number_pane_g1

0x9788,	// (0x00038b9f) list_setting_number_pane_g2_ParamLimits

0x9788,	// (0x00038b9f) list_setting_number_pane_g2

0x0001,

0xf678,	// (0x0003ea8f) list_setting_number_pane_g_ParamLimits

0xf678,	// (0x0003ea8f) list_setting_number_pane_g

0x9794,	// (0x00038bab) list_setting_number_pane_t1_ParamLimits

0x9794,	// (0x00038bab) list_setting_number_pane_t1

0x97ad,	// (0x00038bc4) list_setting_number_pane_t2_ParamLimits

0x97ad,	// (0x00038bc4) list_setting_number_pane_t2

0x97c7,	// (0x00038bde) list_setting_number_pane_t3_ParamLimits

0x97c7,	// (0x00038bde) list_setting_number_pane_t3

0x0003,

0xf67d,	// (0x0003ea94) list_setting_number_pane_t_ParamLimits

0xf67d,	// (0x0003ea94) list_setting_number_pane_t

0x9770,	// (0x00038b87) set_value_pane_ParamLimits

0x9770,	// (0x00038b87) set_value_pane

0x4931,	// (0x00033d48) bg_set_opt_pane_ParamLimits

0x4931,	// (0x00033d48) bg_set_opt_pane

0x980a,	// (0x00038c21) set_value_pane_t1

0x4952,	// (0x00033d69) slider_set_pane_cp3

0x495b,	// (0x00033d72) volume_small_pane_cp

0x4964,	// (0x00033d7b) list_form_gen_pane

0x496d,	// (0x00033d84) scroll_pane_cp8

0x9820,	// (0x00038c37) form_field_data_pane_ParamLimits

0x9820,	// (0x00038c37) form_field_data_pane

0x9842,	// (0x00038c59) form_field_data_wide_pane_ParamLimits

0x9842,	// (0x00038c59) form_field_data_wide_pane

0x9863,	// (0x00038c7a) form_field_popup_pane_ParamLimits

0x9863,	// (0x00038c7a) form_field_popup_pane

0x9883,	// (0x00038c9a) form_field_popup_wide_pane_ParamLimits

0x9883,	// (0x00038c9a) form_field_popup_wide_pane

0x98a0,	// (0x00038cb7) form_field_slider_pane_ParamLimits

0x98a0,	// (0x00038cb7) form_field_slider_pane

0x98b3,	// (0x00038cca) form_field_slider_wide_pane_ParamLimits

0x98b3,	// (0x00038cca) form_field_slider_wide_pane

0x497e,	// (0x00033d95) data_form_pane

0x98d0,	// (0x00038ce7) form_field_data_pane_t1

0x498a,	// (0x00033da1) input_focus_pane

0x98ea,	// (0x00038d01) data_form_wide_pane

0x9907,	// (0x00038d1e) form_field_data_wide_pane_t1

0x270a,	// (0x00031b21) input_focus_pane_cp6

0x9929,	// (0x00038d40) form_field_popup_pane_t1

0x498a,	// (0x00033da1) input_focus_pane_cp7

0x49ac,	// (0x00033dc3) list_form_pane

0x994b,	// (0x00038d62) form_field_popup_wide_pane_t1

0x498a,	// (0x00033da1) input_focus_pane_cp8

0x49b8,	// (0x00033dcf) list_form_wide_pane

0x9968,	// (0x00038d7f) form_field_slider_pane_t1_ParamLimits

0x9968,	// (0x00038d7f) form_field_slider_pane_t1

0x9980,	// (0x00038d97) form_field_slider_pane_t2_ParamLimits

0x9980,	// (0x00038d97) form_field_slider_pane_t2

0x0001,

0xf68d,	// (0x0003eaa4) form_field_slider_pane_t_ParamLimits

0xf68d,	// (0x0003eaa4) form_field_slider_pane_t

0x232a,	// (0x00031741) input_focus_pane_cp9_ParamLimits

0x232a,	// (0x00031741) input_focus_pane_cp9

0x9995,	// (0x00038dac) slider_cont_pane_ParamLimits

0x9995,	// (0x00038dac) slider_cont_pane

0x49c7,	// (0x00033dde) form_field_slider_wide_pane_t1_ParamLimits

0x49c7,	// (0x00033dde) form_field_slider_wide_pane_t1

0x99a9,	// (0x00038dc0) form_field_slider_wide_pane_t2_ParamLimits

0x99a9,	// (0x00038dc0) form_field_slider_wide_pane_t2

0x0001,

0xf692,	// (0x0003eaa9) form_field_slider_wide_pane_t_ParamLimits

0xf692,	// (0x0003eaa9) form_field_slider_wide_pane_t

0x232a,	// (0x00031741) input_focus_pane_cp10_ParamLimits

0x232a,	// (0x00031741) input_focus_pane_cp10

0x99bb,	// (0x00038dd2) slider_cont_pane_cp1_ParamLimits

0x99bb,	// (0x00038dd2) slider_cont_pane_cp1

0x99cf,	// (0x00038de6) slider_form_pane_cp

0x49d9,	// (0x00033df0) input_focus_pane_g1

0x49e1,	// (0x00033df8) input_focus_pane_g2

0x49e9,	// (0x00033e00) input_focus_pane_g3

0x49f1,	// (0x00033e08) input_focus_pane_g4

0x49f9,	// (0x00033e10) input_focus_pane_g5

0x4a01,	// (0x00033e18) input_focus_pane_g6

0x4a09,	// (0x00033e20) input_focus_pane_g7

0x4a11,	// (0x00033e28) input_focus_pane_g8

0x4a19,	// (0x00033e30) input_focus_pane_g9

0x22d2,	// (0x000316e9) input_focus_pane_g10

0x0009,

0xf697,	// (0x0003eaae) input_focus_pane_g

0x5d04,	// (0x0003511b) wait_border_pane_g3_copy1

0x99d7,	// (0x00038dee) data_form_pane_t1

0x22d2,	// (0x000316e9) wait_anim_pane_g1_copy1

0x9c69,	// (0x00039080) data_form_wide_pane_t1

0x99f2,	// (0x00038e09) list_form_graphic_pane_cp_ParamLimits

0x99f2,	// (0x00038e09) list_form_graphic_pane_cp

0x697c,	// (0x00035d93) slider_form_pane_g1

0x6985,	// (0x00035d9c) slider_form_pane_g2

0x0006,

0xf995,	// (0x0003edac) slider_form_pane_g

0x99f2,	// (0x00038e09) list_form_graphic_pane_ParamLimits

0x99f2,	// (0x00038e09) list_form_graphic_pane

0x9a09,	// (0x00038e20) list_form_graphic_pane_g1

0x9a11,	// (0x00038e28) list_form_graphic_pane_t1_ParamLimits

0x9a11,	// (0x00038e28) list_form_graphic_pane_t1

0x2348,	// (0x0003175f) list_highlight_pane_cp5_ParamLimits

0x2348,	// (0x0003175f) list_highlight_pane_cp5

0x9a26,	// (0x00038e3d) find_pane_g1

0x4a21,	// (0x00033e38) input_find_pane

0x9a2f,	// (0x00038e46) input_find_pane_g1_ParamLimits

0x9a2f,	// (0x00038e46) input_find_pane_g1

0x9a3b,	// (0x00038e52) input_find_pane_t1_ParamLimits

0x9a3b,	// (0x00038e52) input_find_pane_t1

0x9a50,	// (0x00038e67) input_find_pane_t2_ParamLimits

0x9a50,	// (0x00038e67) input_find_pane_t2

0x0001,

0xf6ac,	// (0x0003eac3) input_find_pane_t_ParamLimits

0xf6ac,	// (0x0003eac3) input_find_pane_t

0x4a2a,	// (0x00033e41) input_focus_pane_cp5_ParamLimits

0x4a2a,	// (0x00033e41) input_focus_pane_cp5

0x4a38,	// (0x00033e4f) bg_popup_window_pane_cp2_ParamLimits

0x4a38,	// (0x00033e4f) bg_popup_window_pane_cp2

0x4a45,	// (0x00033e5c) listscroll_menu_pane_ParamLimits

0x4a45,	// (0x00033e5c) listscroll_menu_pane

0xa986,	// (0x00039d9d) popup_submenu_window_ParamLimits

0xa986,	// (0x00039d9d) popup_submenu_window

0x4a51,	// (0x00033e68) find_popup_pane_g1

0x4a59,	// (0x00033e70) input_popup_find_pane_cp

0x4a2a,	// (0x00033e41) input_focus_pane_cp4_ParamLimits

0x4a2a,	// (0x00033e41) input_focus_pane_cp4

0x4a63,	// (0x00033e7a) input_popup_find_pane_t1_ParamLimits

0x4a63,	// (0x00033e7a) input_popup_find_pane_t1

0x22dc,	// (0x000316f3) bg_popup_sub_pane_cp

0x4a91,	// (0x00033ea8) listscroll_popup_sub_pane

0x4a99,	// (0x00033eb0) list_submenu_pane_ParamLimits

0x4a99,	// (0x00033eb0) list_submenu_pane

0x4aaa,	// (0x00033ec1) scroll_pane_cp4

0x4ab2,	// (0x00033ec9) list_single_popup_submenu_pane_ParamLimits

0x4ab2,	// (0x00033ec9) list_single_popup_submenu_pane

0x4ac6,	// (0x00033edd) list_single_popup_submenu_pane_g1

0x4ace,	// (0x00033ee5) list_single_popup_submenu_pane_t1_ParamLimits

0x4ace,	// (0x00033ee5) list_single_popup_submenu_pane_t1

0x2348,	// (0x0003175f) bg_active_tab_pane_cp1_ParamLimits

0x2348,	// (0x0003175f) bg_active_tab_pane_cp1

0xa9bc,	// (0x00039dd3) tabs_2_active_pane_g1

0xa9c4,	// (0x00039ddb) tabs_2_active_pane_t1

0x2348,	// (0x0003175f) bg_passive_tab_pane_cp1_ParamLimits

0x2348,	// (0x0003175f) bg_passive_tab_pane_cp1

0xa9bc,	// (0x00039dd3) tabs_2_passive_pane_g1

0xa9c4,	// (0x00039ddb) tabs_2_passive_pane_t1

0x6bca,	// (0x00035fe1) bg_active_tab_pane_cp4

0xa9d6,	// (0x00039ded) tabs_2_long_active_pane_t1

0xa9e9,	// (0x00039e00) bg_passive_tab_pane_cp4

0xb850,	// (0x0003ac67) list_single_midp_graphic_pane_g4_ParamLimits

0x6bca,	// (0x00035fe1) bg_active_tab_pane_cp5

0xa9f5,	// (0x00039e0c) tabs_3_long_active_pane_t1

0xa9e9,	// (0x00039e00) bg_passive_tab_pane_cp5

0xb850,	// (0x0003ac67) list_single_midp_graphic_pane_g4

0x2348,	// (0x0003175f) bg_popup_window_pane_cp13_ParamLimits

0x2348,	// (0x0003175f) bg_popup_window_pane_cp13

0x4af8,	// (0x00033f0f) listscroll_popup_fast_pane_ParamLimits

0x4af8,	// (0x00033f0f) listscroll_popup_fast_pane

0x4b04,	// (0x00033f1b) grid_popup_fast_pane_ParamLimits

0x4b04,	// (0x00033f1b) grid_popup_fast_pane

0x4b16,	// (0x00033f2d) scroll_pane_cp9_ParamLimits

0x4b16,	// (0x00033f2d) scroll_pane_cp9

0x7ceb,	// (0x00037102) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7ceb,	// (0x00037102) list_single_graphic_hl_pane_t1_cp2

0x4b3a,	// (0x00033f51) input_focus_pane_cp20_ParamLimits

0x4b3a,	// (0x00033f51) input_focus_pane_cp20

0x4b48,	// (0x00033f5f) query_popup_data_pane_t1_ParamLimits

0x4b48,	// (0x00033f5f) query_popup_data_pane_t1

0x4b5b,	// (0x00033f72) query_popup_data_pane_t2_ParamLimits

0x4b5b,	// (0x00033f72) query_popup_data_pane_t2

0x4ba1,	// (0x00033fb8) query_popup_data_pane_t3_ParamLimits

0x4ba1,	// (0x00033fb8) query_popup_data_pane_t3

0x4be2,	// (0x00033ff9) query_popup_data_pane_t4_ParamLimits

0x4be2,	// (0x00033ff9) query_popup_data_pane_t4

0x4c1e,	// (0x00034035) query_popup_data_pane_t5_ParamLimits

0x4c1e,	// (0x00034035) query_popup_data_pane_t5

0x0004,

0xf6b1,	// (0x0003eac8) query_popup_data_pane_t_ParamLimits

0xf6b1,	// (0x0003eac8) query_popup_data_pane_t

0x49d9,	// (0x00033df0) bg_set_opt_pane_g1

0x49e1,	// (0x00033df8) bg_set_opt_pane_g2

0x49e9,	// (0x00033e00) bg_set_opt_pane_g3

0x49f1,	// (0x00033e08) bg_set_opt_pane_g4

0x49f9,	// (0x00033e10) bg_set_opt_pane_g5

0x4a01,	// (0x00033e18) bg_set_opt_pane_g6

0x4a09,	// (0x00033e20) bg_set_opt_pane_g7

0x4a11,	// (0x00033e28) bg_set_opt_pane_g8

0x4a19,	// (0x00033e30) bg_set_opt_pane_g9

0x0008,

0xf6bc,	// (0x0003ead3) bg_set_opt_pane_g

0xae10,	// (0x0003a227) control_top_pane_stacon_ParamLimits

0xae10,	// (0x0003a227) control_top_pane_stacon

0xae63,	// (0x0003a27a) signal_pane_stacon_ParamLimits

0xae63,	// (0x0003a27a) signal_pane_stacon

0x508e,	// (0x000344a5) stacon_top_pane_g1_ParamLimits

0x508e,	// (0x000344a5) stacon_top_pane_g1

0xae88,	// (0x0003a29f) title_pane_stacon_ParamLimits

0xae88,	// (0x0003a29f) title_pane_stacon

0xaeb2,	// (0x0003a2c9) uni_indicator_pane_stacon_ParamLimits

0xaeb2,	// (0x0003a2c9) uni_indicator_pane_stacon

0xaec7,	// (0x0003a2de) battery_pane_stacon_ParamLimits

0xaec7,	// (0x0003a2de) battery_pane_stacon

0xaf0b,	// (0x0003a322) control_bottom_pane_stacon_ParamLimits

0xaf0b,	// (0x0003a322) control_bottom_pane_stacon

0xaf2e,	// (0x0003a345) navi_pane_stacon_ParamLimits

0xaf2e,	// (0x0003a345) navi_pane_stacon

0x50b0,	// (0x000344c7) stacon_bottom_pane_g1_ParamLimits

0x50b0,	// (0x000344c7) stacon_bottom_pane_g1

0xaa07,	// (0x00039e1e) aid_levels_signal_lsc_ParamLimits

0xaa07,	// (0x00039e1e) aid_levels_signal_lsc

0xaa1e,	// (0x00039e35) signal_pane_stacon_g1_ParamLimits

0xaa1e,	// (0x00039e35) signal_pane_stacon_g1

0xaa32,	// (0x00039e49) signal_pane_stacon_g2_ParamLimits

0xaa32,	// (0x00039e49) signal_pane_stacon_g2

0x0001,

0xf6cf,	// (0x0003eae6) signal_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0003eae6) signal_pane_stacon_g

0xaa67,	// (0x00039e7e) title_pane_stacon_t1_ParamLimits

0xaa67,	// (0x00039e7e) title_pane_stacon_t1

0x4c76,	// (0x0003408d) uni_indicator_pane_stacon_g1

0x4c80,	// (0x00034097) uni_indicator_pane_stacon_g2

0x4c62,	// (0x00034079) uni_indicator_pane_stacon_g3

0x4c6c,	// (0x00034083) uni_indicator_pane_stacon_g4

0x0003,

0xf6db,	// (0x0003eaf2) uni_indicator_pane_stacon_g

0xaa8c,	// (0x00039ea3) control_top_pane_stacon_g1

0xaa94,	// (0x00039eab) control_top_pane_stacon_t1_ParamLimits

0xaa94,	// (0x00039eab) control_top_pane_stacon_t1

0xaacb,	// (0x00039ee2) aid_levels_battery_lsc_ParamLimits

0xaacb,	// (0x00039ee2) aid_levels_battery_lsc

0xaae3,	// (0x00039efa) battery_pane_stacon_g1_ParamLimits

0xaae3,	// (0x00039efa) battery_pane_stacon_g1

0xaaf6,	// (0x00039f0d) battery_pane_stacon_g2_ParamLimits

0xaaf6,	// (0x00039f0d) battery_pane_stacon_g2

0x0001,

0xf6e4,	// (0x0003eafb) battery_pane_stacon_g_ParamLimits

0xf6e4,	// (0x0003eafb) battery_pane_stacon_g

0xab34,	// (0x00039f4b) navi_icon_pane_stacon

0xab48,	// (0x00039f5f) navi_navi_pane_stacon

0xab34,	// (0x00039f4b) navi_text_pane_stacon

0xaa8c,	// (0x00039ea3) control_bottom_pane_stacon_g1

0xab5c,	// (0x00039f73) control_bottom_pane_stacon_t1_ParamLimits

0xab5c,	// (0x00039f73) control_bottom_pane_stacon_t1

0xab93,	// (0x00039faa) grid_app_pane_ParamLimits

0xab93,	// (0x00039faa) grid_app_pane

0xabb5,	// (0x00039fcc) scroll_pane_cp15_ParamLimits

0xabb5,	// (0x00039fcc) scroll_pane_cp15

0xabc8,	// (0x00039fdf) cell_app_pane_ParamLimits

0xabc8,	// (0x00039fdf) cell_app_pane

0xabee,	// (0x0003a005) cell_app_pane_g1_ParamLimits

0xabee,	// (0x0003a005) cell_app_pane_g1

0x4cad,	// (0x000340c4) cell_app_pane_g2_ParamLimits

0x4cad,	// (0x000340c4) cell_app_pane_g2

0x0001,

0xf6e9,	// (0x0003eb00) cell_app_pane_g_ParamLimits

0xf6e9,	// (0x0003eb00) cell_app_pane_g

0xac0e,	// (0x0003a025) cell_app_pane_t1_ParamLimits

0xac0e,	// (0x0003a025) cell_app_pane_t1

0x4cb9,	// (0x000340d0) grid_highlight_pane_ParamLimits

0x4cb9,	// (0x000340d0) grid_highlight_pane

0x49d9,	// (0x00033df0) cell_highlight_pane_g1

0x49e1,	// (0x00033df8) cell_highlight_pane_g2

0x49e9,	// (0x00033e00) cell_highlight_pane_g3

0x49f1,	// (0x00033e08) cell_highlight_pane_g4

0x49f9,	// (0x00033e10) cell_highlight_pane_g5

0x4a01,	// (0x00033e18) cell_highlight_pane_g6

0x4a09,	// (0x00033e20) cell_highlight_pane_g7

0x4a11,	// (0x00033e28) cell_highlight_pane_g8

0x4a19,	// (0x00033e30) cell_highlight_pane_g9

0x22d2,	// (0x000316e9) cell_highlight_pane_g10

0x0009,

0xf697,	// (0x0003eaae) cell_highlight_pane_g

0x4cca,	// (0x000340e1) bg_scroll_pane

0xac38,	// (0x0003a04f) scroll_handle_pane

0x4d11,	// (0x00034128) scroll_bg_pane_g1

0x4d26,	// (0x0003413d) scroll_bg_pane_g2

0x4d3e,	// (0x00034155) scroll_bg_pane_g3

0x0002,

0xf6ee,	// (0x0003eb05) scroll_bg_pane_g

0x4d53,	// (0x0003416a) scroll_handle_focus_pane_ParamLimits

0x4d53,	// (0x0003416a) scroll_handle_focus_pane

0x4d11,	// (0x00034128) scroll_handle_pane_g1

0x4d60,	// (0x00034177) scroll_handle_pane_g2

0x4d3e,	// (0x00034155) scroll_handle_pane_g3

0x0002,

0xf6f5,	// (0x0003eb0c) scroll_handle_pane_g

0x4a2a,	// (0x00033e41) bg_popup_sub_pane_cp21_ParamLimits

0x4a2a,	// (0x00033e41) bg_popup_sub_pane_cp21

0x4d74,	// (0x0003418b) popup_fep_japan_predictive_window_t1_ParamLimits

0x4d74,	// (0x0003418b) popup_fep_japan_predictive_window_t1

0x4d8e,	// (0x000341a5) popup_fep_japan_predictive_window_t2_ParamLimits

0x4d8e,	// (0x000341a5) popup_fep_japan_predictive_window_t2

0x4dc1,	// (0x000341d8) popup_fep_japan_predictive_window_t3_ParamLimits

0x4dc1,	// (0x000341d8) popup_fep_japan_predictive_window_t3

0x0002,

0xf6fc,	// (0x0003eb13) popup_fep_japan_predictive_window_t_ParamLimits

0xf6fc,	// (0x0003eb13) popup_fep_japan_predictive_window_t

0x22dc,	// (0x000316f3) bg_popup_sub_pane_cp23

0x4df8,	// (0x0003420f) listscroll_japin_cand_pane

0x4e00,	// (0x00034217) popup_fep_japan_candidate_window_t1

0x4e0e,	// (0x00034225) candidate_pane_ParamLimits

0x4e0e,	// (0x00034225) candidate_pane

0x4e20,	// (0x00034237) scroll_pane_cp30

0x4e28,	// (0x0003423f) list_single_popup_jap_candidate_pane_ParamLimits

0x4e28,	// (0x0003423f) list_single_popup_jap_candidate_pane

0x22dc,	// (0x000316f3) list_highlight_pane_cp30

0x4e3c,	// (0x00034253) list_single_popup_jap_candidate_pane_t1

0x4e4b,	// (0x00034262) level_1_signal

0x4e58,	// (0x0003426f) level_2_signal

0x4e65,	// (0x0003427c) level_3_signal

0x4e72,	// (0x00034289) level_4_signal

0x4e7f,	// (0x00034296) level_5_signal

0x4e8c,	// (0x000342a3) level_6_signal

0x4e99,	// (0x000342b0) level_7_signal

0x4e4b,	// (0x00034262) level_1_battery

0x4e58,	// (0x0003426f) level_2_battery

0x4e65,	// (0x0003427c) level_3_battery

0x4e72,	// (0x00034289) level_4_battery

0x4e7f,	// (0x00034296) level_5_battery

0x4e8c,	// (0x000342a3) level_6_battery

0x4e99,	// (0x000342b0) level_7_battery

0x4ebe,	// (0x000342d5) list_menu_pane_ParamLimits

0x4ebe,	// (0x000342d5) list_menu_pane

0x4ed4,	// (0x000342eb) scroll_pane_cp25_ParamLimits

0x4ed4,	// (0x000342eb) scroll_pane_cp25

0x4eed,	// (0x00034304) list_double2_graphic_pane_cp2_ParamLimits

0x4eed,	// (0x00034304) list_double2_graphic_pane_cp2

0x4eed,	// (0x00034304) list_double2_large_graphic_pane_cp2_ParamLimits

0x4eed,	// (0x00034304) list_double2_large_graphic_pane_cp2

0x4eed,	// (0x00034304) list_double2_pane_cp2_ParamLimits

0x4eed,	// (0x00034304) list_double2_pane_cp2

0x4eed,	// (0x00034304) list_double_graphic_pane_cp2_ParamLimits

0x4eed,	// (0x00034304) list_double_graphic_pane_cp2

0x4eed,	// (0x00034304) list_double_large_graphic_pane_cp2_ParamLimits

0x4eed,	// (0x00034304) list_double_large_graphic_pane_cp2

0x4eed,	// (0x00034304) list_double_number_pane_cp2_ParamLimits

0x4eed,	// (0x00034304) list_double_number_pane_cp2

0x4eed,	// (0x00034304) list_double_pane_cp2_ParamLimits

0x4eed,	// (0x00034304) list_double_pane_cp2

0xac94,	// (0x0003a0ab) list_single_2graphic_pane_cp2_ParamLimits

0xac94,	// (0x0003a0ab) list_single_2graphic_pane_cp2

0xac94,	// (0x0003a0ab) list_single_graphic_heading_pane_cp2_ParamLimits

0xac94,	// (0x0003a0ab) list_single_graphic_heading_pane_cp2

0xac94,	// (0x0003a0ab) list_single_graphic_pane_cp2_ParamLimits

0xac94,	// (0x0003a0ab) list_single_graphic_pane_cp2

0xac94,	// (0x0003a0ab) list_single_heading_pane_cp2_ParamLimits

0xac94,	// (0x0003a0ab) list_single_heading_pane_cp2

0x4efd,	// (0x00034314) list_single_large_graphic_pane_cp2_ParamLimits

0x4efd,	// (0x00034314) list_single_large_graphic_pane_cp2

0xac94,	// (0x0003a0ab) list_single_number_heading_pane_cp2_ParamLimits

0xac94,	// (0x0003a0ab) list_single_number_heading_pane_cp2

0xac94,	// (0x0003a0ab) list_single_number_pane_cp2_ParamLimits

0xac94,	// (0x0003a0ab) list_single_number_pane_cp2

0xac94,	// (0x0003a0ab) list_single_pane_cp2_ParamLimits

0xac94,	// (0x0003a0ab) list_single_pane_cp2

0x4f17,	// (0x0003432e) bg_popup_sub_pane_cp22

0xad72,	// (0x0003a189) popup_side_volume_key_window_g1

0xad96,	// (0x0003a1ad) popup_side_volume_key_window_t1

0xadb2,	// (0x0003a1c9) volume_small_pane_cp1

0x232a,	// (0x00031741) bg_popup_sub_pane_cp24_ParamLimits

0x232a,	// (0x00031741) bg_popup_sub_pane_cp24

0x4f2d,	// (0x00034344) fep_china_uni_candidate_pane_ParamLimits

0x4f2d,	// (0x00034344) fep_china_uni_candidate_pane

0x4f41,	// (0x00034358) fep_china_uni_entry_pane

0x4f51,	// (0x00034368) popup_fep_china_uni_window_g1

0x4f6d,	// (0x00034384) fep_china_uni_entry_pane_g1

0x4f75,	// (0x0003438c) fep_china_uni_entry_pane_g2

0x0001,

0xf72d,	// (0x0003eb44) fep_china_uni_entry_pane_g

0x4f7d,	// (0x00034394) fep_entry_item_pane

0x4f87,	// (0x0003439e) fep_candidate_item_pane

0x4f8f,	// (0x000343a6) fep_china_uni_candidate_pane_g1

0x4f97,	// (0x000343ae) fep_china_uni_candidate_pane_g2

0x4f9f,	// (0x000343b6) fep_china_uni_candidate_pane_g3

0x4fa7,	// (0x000343be) fep_china_uni_candidate_pane_g4

0x0003,

0xf732,	// (0x0003eb49) fep_china_uni_candidate_pane_g

0x22d2,	// (0x000316e9) fep_entry_item_pane_g1

0x4faf,	// (0x000343c6) fep_entry_item_pane_t1_ParamLimits

0x4faf,	// (0x000343c6) fep_entry_item_pane_t1

0x4fc5,	// (0x000343dc) fep_candidate_item_pane_t1_ParamLimits

0x4fc5,	// (0x000343dc) fep_candidate_item_pane_t1

0x4fda,	// (0x000343f1) fep_candidate_item_pane_t2_ParamLimits

0x4fda,	// (0x000343f1) fep_candidate_item_pane_t2

0x0001,

0xf73b,	// (0x0003eb52) fep_candidate_item_pane_t_ParamLimits

0xf73b,	// (0x0003eb52) fep_candidate_item_pane_t

0x2348,	// (0x0003175f) list_highlight_pane_cp31_ParamLimits

0x2348,	// (0x0003175f) list_highlight_pane_cp31

0x4fec,	// (0x00034403) level_1_signal_lsc

0x4ff5,	// (0x0003440c) level_2_signal_lsc

0x4ffe,	// (0x00034415) level_3_signal_lsc

0x5007,	// (0x0003441e) level_4_signal_lsc

0x5010,	// (0x00034427) level_5_signal_lsc

0x5019,	// (0x00034430) level_6_signal_lsc

0x5022,	// (0x00034439) level_7_signal_lsc

0x5022,	// (0x00034439) level_1_battery_lsc

0x502b,	// (0x00034442) level_2_battery_lsc

0x5034,	// (0x0003444b) level_3_battery_lsc

0x503d,	// (0x00034454) level_4_battery_lsc

0x5046,	// (0x0003445d) level_5_battery_lsc

0x504f,	// (0x00034466) level_6_battery_lsc

0x4fec,	// (0x00034403) level_7_battery_lsc

0x5058,	// (0x0003446f) scroll_handle_focus_pane_g1

0x5061,	// (0x00034478) scroll_handle_focus_pane_g2

0x506a,	// (0x00034481) scroll_handle_focus_pane_g3

0x0002,

0xf740,	// (0x0003eb57) scroll_handle_focus_pane_g

0x9a65,	// (0x00038e7c) list_single_2graphic_pane_g1_ParamLimits

0x9a65,	// (0x00038e7c) list_single_2graphic_pane_g1

0x943f,	// (0x00038856) list_single_2graphic_pane_g2_ParamLimits

0x943f,	// (0x00038856) list_single_2graphic_pane_g2

0xa8da,	// (0x00039cf1) list_single_2graphic_pane_g3_ParamLimits

0xa8da,	// (0x00039cf1) list_single_2graphic_pane_g3

0x9a71,	// (0x00038e88) list_single_2graphic_pane_g4_ParamLimits

0x9a71,	// (0x00038e88) list_single_2graphic_pane_g4

0x0003,

0xf747,	// (0x0003eb5e) list_single_2graphic_pane_g_ParamLimits

0xf747,	// (0x0003eb5e) list_single_2graphic_pane_g

0x9a82,	// (0x00038e99) list_single_2graphic_pane_t1_ParamLimits

0x9a82,	// (0x00038e99) list_single_2graphic_pane_t1

0xadba,	// (0x0003a1d1) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xadba,	// (0x0003a1d1) list_double2_graphic_large_graphic_pane_g1

0xa95d,	// (0x00039d74) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa95d,	// (0x00039d74) list_double2_graphic_large_graphic_pane_g2

0xa930,	// (0x00039d47) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa930,	// (0x00039d47) list_double2_graphic_large_graphic_pane_g3

0xadca,	// (0x0003a1e1) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xadca,	// (0x0003a1e1) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf750,	// (0x0003eb67) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf750,	// (0x0003eb67) list_double2_graphic_large_graphic_pane_g

0x9ab0,	// (0x00038ec7) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9ab0,	// (0x00038ec7) list_double2_graphic_large_graphic_pane_t1

0x9ac6,	// (0x00038edd) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9ac6,	// (0x00038edd) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf759,	// (0x0003eb70) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf759,	// (0x0003eb70) list_double2_graphic_large_graphic_pane_t

0x5159,	// (0x00034570) popup_fast_swap_window_ParamLimits

0x5159,	// (0x00034570) popup_fast_swap_window

0x5175,	// (0x0003458c) popup_side_volume_key_window

0x518f,	// (0x000345a6) stacon_top_pane

0x5199,	// (0x000345b0) status_pane_ParamLimits

0x5199,	// (0x000345b0) status_pane

0x518f,	// (0x000345a6) status_small_pane

0x22dc,	// (0x000316f3) control_pane

0x22dc,	// (0x000316f3) stacon_bottom_pane

0x496d,	// (0x00033d84) scroll_pane_cp121

0x4964,	// (0x00033d7b) set_content_pane

0xadd6,	// (0x0003a1ed) bg_active_tab_pane_g1_cp1

0x5073,	// (0x0003448a) bg_active_tab_pane_g2_cp1

0xaddf,	// (0x0003a1f6) bg_active_tab_pane_g3_cp1

0xadd6,	// (0x0003a1ed) bg_passive_tab_pane_g1_cp1

0x5073,	// (0x0003448a) bg_passive_tab_pane_g2_cp1

0xaddf,	// (0x0003a1f6) bg_passive_tab_pane_g3_cp1

0xade8,	// (0x0003a1ff) bg_active_tab_pane_g1_cp2

0x5073,	// (0x0003448a) bg_active_tab_pane_g2_cp2

0xadf1,	// (0x0003a208) bg_active_tab_pane_g3_cp2

0xade8,	// (0x0003a1ff) bg_passive_tab_pane_g1_cp2

0x5073,	// (0x0003448a) bg_passive_tab_pane_g2_cp2

0xadf1,	// (0x0003a208) bg_passive_tab_pane_g3_cp2

0x5085,	// (0x0003449c) bg_active_tab_pane_g1_cp3

0x5073,	// (0x0003448a) bg_active_tab_pane_g2_cp3

0x507c,	// (0x00034493) bg_active_tab_pane_g3_cp3

0x5085,	// (0x0003449c) bg_passive_tab_pane_g1_cp3

0x5073,	// (0x0003448a) bg_passive_tab_pane_g2_cp3

0x507c,	// (0x00034493) bg_passive_tab_pane_g3_cp3

0xadfa,	// (0x0003a211) bg_active_tab_pane_g1_cp4

0x5073,	// (0x0003448a) bg_active_tab_pane_g2_cp4

0xae05,	// (0x0003a21c) bg_active_tab_pane_g3_cp4

0xadfa,	// (0x0003a211) bg_passive_tab_pane_g1_cp4

0x5073,	// (0x0003448a) bg_passive_tab_pane_g2_cp4

0xae05,	// (0x0003a21c) bg_passive_tab_pane_g3_cp4

0x50d5,	// (0x000344ec) bg_active_tab_pane_g1_cp5

0x5073,	// (0x0003448a) bg_active_tab_pane_g2_cp5

0x50cc,	// (0x000344e3) bg_active_tab_pane_g3_cp5

0x50d5,	// (0x000344ec) bg_passive_tab_pane_g1_cp5

0x5073,	// (0x0003448a) bg_passive_tab_pane_g2_cp5

0x50cc,	// (0x000344e3) bg_passive_tab_pane_g3_cp5

0xaf51,	// (0x0003a368) list_set_graphic_pane_ParamLimits

0xaf51,	// (0x0003a368) list_set_graphic_pane

0x22dc,	// (0x000316f3) bg_set_opt_pane_cp4

0x50de,	// (0x000344f5) list_set_graphic_pane_g1_ParamLimits

0x50de,	// (0x000344f5) list_set_graphic_pane_g1

0x50ea,	// (0x00034501) list_set_graphic_pane_g2_ParamLimits

0x50ea,	// (0x00034501) list_set_graphic_pane_g2

0x0001,

0xf75e,	// (0x0003eb75) list_set_graphic_pane_g_ParamLimits

0xf75e,	// (0x0003eb75) list_set_graphic_pane_g

0x0009,

0xfae1,	// (0x0003eef8) volume_small_pane_cp_g

0x510c,	// (0x00034523) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x510c,	// (0x00034523) list_double2_large_graphic_pane_g1_cp2

0x5118,	// (0x0003452f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x5118,	// (0x0003452f) list_double2_large_graphic_pane_g2_cp2

0x5129,	// (0x00034540) list_double2_large_graphic_pane_g3_cp2

0x5131,	// (0x00034548) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x5131,	// (0x00034548) list_double2_large_graphic_pane_t1_cp2

0x5147,	// (0x0003455e) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x5147,	// (0x0003455e) list_double2_large_graphic_pane_t2_cp2

0x6723,	// (0x00035b3a) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x6723,	// (0x00035b3a) list_double_large_graphic_pane_g1_cp2

0x6734,	// (0x00035b4b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x6734,	// (0x00035b4b) list_double_large_graphic_pane_g2_cp2

0x52b5,	// (0x000346cc) list_double_large_graphic_pane_g3_cp2

0x6745,	// (0x00035b5c) list_double_large_graphic_pane_g4_cp

0x674d,	// (0x00035b64) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x674d,	// (0x00035b64) list_double_large_graphic_pane_t1_cp2

0x6764,	// (0x00035b7b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6764,	// (0x00035b7b) list_double_large_graphic_pane_t2_cp2

0x51a7,	// (0x000345be) list_double2_graphic_pane_g1_cp2_ParamLimits

0x51a7,	// (0x000345be) list_double2_graphic_pane_g1_cp2

0x51b5,	// (0x000345cc) list_double2_graphic_pane_g2_cp2_ParamLimits

0x51b5,	// (0x000345cc) list_double2_graphic_pane_g2_cp2

0x51c6,	// (0x000345dd) list_double2_graphic_pane_g3_cp2

0x51d0,	// (0x000345e7) list_double2_graphic_pane_t1_cp2_ParamLimits

0x51d0,	// (0x000345e7) list_double2_graphic_pane_t1_cp2

0x51e6,	// (0x000345fd) list_double2_graphic_pane_t2_cp2_ParamLimits

0x51e6,	// (0x000345fd) list_double2_graphic_pane_t2_cp2

0x51f8,	// (0x0003460f) list_single_number_heading_pane_g1_cp2_ParamLimits

0x51f8,	// (0x0003460f) list_single_number_heading_pane_g1_cp2

0x5204,	// (0x0003461b) list_single_number_heading_pane_g2_cp2

0x520c,	// (0x00034623) list_single_number_heading_pane_t1_cp2_ParamLimits

0x520c,	// (0x00034623) list_single_number_heading_pane_t1_cp2

0x5222,	// (0x00034639) list_single_number_heading_pane_t2_cp2_ParamLimits

0x5222,	// (0x00034639) list_single_number_heading_pane_t2_cp2

0x5234,	// (0x0003464b) list_single_number_heading_pane_t3_cp2_ParamLimits

0x5234,	// (0x0003464b) list_single_number_heading_pane_t3_cp2

0x51f8,	// (0x0003460f) list_single_heading_pane_g1_cp2_ParamLimits

0x51f8,	// (0x0003460f) list_single_heading_pane_g1_cp2

0x5204,	// (0x0003461b) list_single_heading_pane_g2_cp2

0x520c,	// (0x00034623) list_single_heading_pane_t1_cp2_ParamLimits

0x520c,	// (0x00034623) list_single_heading_pane_t1_cp2

0x652d,	// (0x00035944) list_single_heading_pane_t2_cp2_ParamLimits

0x652d,	// (0x00035944) list_single_heading_pane_t2_cp2

0x6475,	// (0x0003588c) list_double_graphic_pane_g1_cp2_ParamLimits

0x6475,	// (0x0003588c) list_double_graphic_pane_g1_cp2

0x6481,	// (0x00035898) list_double_graphic_pane_g2_cp2_ParamLimits

0x6481,	// (0x00035898) list_double_graphic_pane_g2_cp2

0x6490,	// (0x000358a7) list_double_graphic_pane_g3_cp2

0x6498,	// (0x000358af) list_double_graphic_pane_t1_cp2_ParamLimits

0x6498,	// (0x000358af) list_double_graphic_pane_t1_cp2

0x64ae,	// (0x000358c5) list_double_graphic_pane_t2_cp2_ParamLimits

0x64ae,	// (0x000358c5) list_double_graphic_pane_t2_cp2

0x52a9,	// (0x000346c0) list_double_number_pane_g1_cp2_ParamLimits

0x52a9,	// (0x000346c0) list_double_number_pane_g1_cp2

0x52b5,	// (0x000346cc) list_double_number_pane_g2_cp2

0x6439,	// (0x00035850) list_double_number_pane_t1_cp2_ParamLimits

0x6439,	// (0x00035850) list_double_number_pane_t1_cp2

0x644d,	// (0x00035864) list_double_number_pane_t2_cp2_ParamLimits

0x644d,	// (0x00035864) list_double_number_pane_t2_cp2

0x6463,	// (0x0003587a) list_double_number_pane_t3_cp2_ParamLimits

0x6463,	// (0x0003587a) list_double_number_pane_t3_cp2

0x63a2,	// (0x000357b9) list_single_graphic_pane_g1_cp2_ParamLimits

0x63a2,	// (0x000357b9) list_single_graphic_pane_g1_cp2

0x2ef0,	// (0x00032307) list_single_graphic_pane_g2_cp2_ParamLimits

0x2ef0,	// (0x00032307) list_single_graphic_pane_g2_cp2

0x530d,	// (0x00034724) list_single_graphic_pane_g3_cp2

0x6378,	// (0x0003578f) list_single_graphic_pane_t1_cp2_ParamLimits

0x6378,	// (0x0003578f) list_single_graphic_pane_t1_cp2

0x2ef0,	// (0x00032307) list_single_number_pane_g1_cp2_ParamLimits

0x2ef0,	// (0x00032307) list_single_number_pane_g1_cp2

0x530d,	// (0x00034724) list_single_number_pane_g2_cp2

0x6378,	// (0x0003578f) list_single_number_pane_t1_cp2_ParamLimits

0x6378,	// (0x0003578f) list_single_number_pane_t1_cp2

0x638e,	// (0x000357a5) list_single_number_pane_t2_cp2_ParamLimits

0x638e,	// (0x000357a5) list_single_number_pane_t2_cp2

0x5118,	// (0x0003452f) list_double2_pane_g1_cp2_ParamLimits

0x5118,	// (0x0003452f) list_double2_pane_g1_cp2

0x5129,	// (0x00034540) list_double2_pane_g2_cp2

0x5281,	// (0x00034698) list_double2_pane_t1_cp2_ParamLimits

0x5281,	// (0x00034698) list_double2_pane_t1_cp2

0x5297,	// (0x000346ae) list_double2_pane_t2_cp2_ParamLimits

0x5297,	// (0x000346ae) list_double2_pane_t2_cp2

0x52a9,	// (0x000346c0) list_double_pane_g1_cp2_ParamLimits

0x52a9,	// (0x000346c0) list_double_pane_g1_cp2

0x52b5,	// (0x000346cc) list_double_pane_g2_cp2

0x52bd,	// (0x000346d4) list_double_pane_t1_cp2_ParamLimits

0x52bd,	// (0x000346d4) list_double_pane_t1_cp2

0x52d3,	// (0x000346ea) list_double_pane_t2_cp2_ParamLimits

0x52d3,	// (0x000346ea) list_double_pane_t2_cp2

0x52fd,	// (0x00034714) list_single_pane_cp2_g3

0x2ef0,	// (0x00032307) list_single_pane_g1_cp2_ParamLimits

0x2ef0,	// (0x00032307) list_single_pane_g1_cp2

0x530d,	// (0x00034724) list_single_pane_g2_cp2

0x5315,	// (0x0003472c) list_single_pane_t1_cp2_ParamLimits

0x5315,	// (0x0003472c) list_single_pane_t1_cp2

0x532d,	// (0x00034744) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x532d,	// (0x00034744) list_single_large_graphic_pane_g1_cp2

0x5339,	// (0x00034750) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x5339,	// (0x00034750) list_single_large_graphic_pane_g2_cp2

0x5345,	// (0x0003475c) list_single_large_graphic_pane_g3_cp2

0x534d,	// (0x00034764) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x534d,	// (0x00034764) list_single_large_graphic_pane_g4_cp1

0x5367,	// (0x0003477e) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x5367,	// (0x0003477e) list_single_large_graphic_pane_t1_cp2

0x6344,	// (0x0003575b) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x6344,	// (0x0003575b) list_single_graphic_heading_pane_g1_cp2

0x6311,	// (0x00035728) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x6311,	// (0x00035728) list_single_graphic_heading_pane_g4_cp2

0x530d,	// (0x00034724) list_single_graphic_heading_pane_g5_cp2

0x6350,	// (0x00035767) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x6350,	// (0x00035767) list_single_graphic_heading_pane_t1_cp2

0x6366,	// (0x0003577d) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x6366,	// (0x0003577d) list_single_graphic_heading_pane_t2_cp2

0x6305,	// (0x0003571c) list_single_2graphic_pane_g1_cp2_ParamLimits

0x6305,	// (0x0003571c) list_single_2graphic_pane_g1_cp2

0x6311,	// (0x00035728) list_single_2graphic_pane_g2_cp2_ParamLimits

0x6311,	// (0x00035728) list_single_2graphic_pane_g2_cp2

0x530d,	// (0x00034724) list_single_2graphic_pane_g3_cp2

0x6322,	// (0x00035739) list_single_2graphic_pane_g4_cp2_ParamLimits

0x6322,	// (0x00035739) list_single_2graphic_pane_g4_cp2

0x632e,	// (0x00035745) list_single_2graphic_pane_t1_cp2_ParamLimits

0x632e,	// (0x00035745) list_single_2graphic_pane_t1_cp2

0x22d2,	// (0x000316e9) list_highlight_pane_g10_cp1

0x5efb,	// (0x00035312) list_highlight_pane_g1_cp1

0x5f03,	// (0x0003531a) list_highlight_pane_g2_cp1

0x5f0b,	// (0x00035322) list_highlight_pane_g3_cp1

0x5f13,	// (0x0003532a) list_highlight_pane_g4_cp1

0x5f1b,	// (0x00035332) list_highlight_pane_g5_cp1

0x5f23,	// (0x0003533a) list_highlight_pane_g6_cp1

0x5f2b,	// (0x00035342) list_highlight_pane_g7_cp1

0x5f33,	// (0x0003534a) list_highlight_pane_g8_cp1

0x5f3b,	// (0x00035352) list_highlight_pane_g9_cp1

0xd2eb,	// (0x0003c702) form_field_slider_pane_t3

0xd2f9,	// (0x0003c710) form_field_slider_pane_t4

0x5e2f,	// (0x00035246) slider_form_pane_ParamLimits

0x5e2f,	// (0x00035246) slider_form_pane

0x22dc,	// (0x000316f3) control_abbreviations

0x22dc,	// (0x000316f3) control_conventions

0x22dc,	// (0x000316f3) control_definitions

0x22dc,	// (0x000316f3) format_table_attribute

0x6577,	// (0x0003598e) bg_popup_preview_window_pane_g9

0x22dc,	// (0x000316f3) format_table_data2

0x22dc,	// (0x000316f3) format_table_data3

0x22dc,	// (0x000316f3) format_table_data_example

0x0008,

0x22dc,	// (0x000316f3) intro_purpose

0xf8f5,	// (0x0003ed0c) bg_popup_preview_window_pane_g

0x22dc,	// (0x000316f3) texts_category

0x22dc,	// (0x000316f3) texts_graphics

0x537d,	// (0x00034794) text_digital

0x538c,	// (0x000347a3) text_primary

0x539b,	// (0x000347b2) text_primary_small

0x53aa,	// (0x000347c1) text_secondary

0x53b9,	// (0x000347d0) text_title

0x6a22,	// (0x00035e39) bg_passive_tab_pane_g1_cp3_srt

0x5073,	// (0x0003448a) bg_passive_tab_pane_g2_cp3_srt

0x6a19,	// (0x00035e30) bg_passive_tab_pane_g3_cp3_srt

0x2348,	// (0x0003175f) bg_active_tab_pane_cp3_srt_ParamLimits

0x2348,	// (0x0003175f) bg_active_tab_pane_cp3_srt

0x6a2b,	// (0x00035e42) tabs_4_active_pane_srt_g1

0xd5de,	// (0x0003c9f5) tabs_4_active_pane_srt_t1_ParamLimits

0xd5de,	// (0x0003c9f5) tabs_4_active_pane_srt_t1

0x6a22,	// (0x00035e39) bg_active_tab_pane_g1_cp3_copy1

0x5073,	// (0x0003448a) bg_active_tab_pane_g2_cp3_copy1

0x6a19,	// (0x00035e30) bg_active_tab_pane_g3_cp3_copy1

0x2348,	// (0x0003175f) tabs_2_long_active_pane_srt_ParamLimits

0x2348,	// (0x0003175f) tabs_2_long_active_pane_srt

0x2348,	// (0x0003175f) tabs_2_long_passive_pane_srt_ParamLimits

0x2348,	// (0x0003175f) tabs_2_long_passive_pane_srt

0xa9e9,	// (0x00039e00) bg_passive_tab_pane_cp4_srt_ParamLimits

0xa9e9,	// (0x00039e00) bg_passive_tab_pane_cp4_srt

0x693e,	// (0x00035d55) bg_passive_tab_pane_g1_cp4_srt

0x5073,	// (0x0003448a) bg_passive_tab_pane_g2_cp4_srt

0x6935,	// (0x00035d4c) bg_passive_tab_pane_g3_cp4_srt

0x6bca,	// (0x00035fe1) bg_active_tab_pane_cp4_srt_ParamLimits

0x6bca,	// (0x00035fe1) bg_active_tab_pane_cp4_srt

0xd430,	// (0x0003c847) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd430,	// (0x0003c847) tabs_2_long_active_pane_srt_t1

0x693e,	// (0x00035d55) bg_active_tab_pane_g1_cp4_srt

0x5073,	// (0x0003448a) bg_active_tab_pane_g2_cp4_srt

0x6935,	// (0x00035d4c) bg_active_tab_pane_g3_cp4_srt

0x232a,	// (0x00031741) tabs_3_long_active_pane_srt_ParamLimits

0x232a,	// (0x00031741) tabs_3_long_active_pane_srt

0x232a,	// (0x00031741) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x232a,	// (0x00031741) tabs_3_long_passive_pane_cp_srt

0x232a,	// (0x00031741) tabs_3_long_passive_pane_srt_ParamLimits

0x232a,	// (0x00031741) tabs_3_long_passive_pane_srt

0xa9e9,	// (0x00039e00) bg_passive_tab_pane_cp5_srt_ParamLimits

0xa9e9,	// (0x00039e00) bg_passive_tab_pane_cp5_srt

0x50d5,	// (0x000344ec) bg_passive_tab_pane_g1_cp5_srt

0x5073,	// (0x0003448a) bg_passive_tab_pane_g2_cp5_srt

0x50cc,	// (0x000344e3) bg_passive_tab_pane_g3_cp5_srt

0x6bca,	// (0x00035fe1) bg_active_tab_pane_cp5_srt_ParamLimits

0x6bca,	// (0x00035fe1) bg_active_tab_pane_cp5_srt

0xd41e,	// (0x0003c835) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd41e,	// (0x0003c835) tabs_3_long_active_pane_srt_t1

0x50d5,	// (0x000344ec) bg_active_tab_pane_g1_cp5_srt

0x5073,	// (0x0003448a) bg_active_tab_pane_g2_cp5_srt

0x50cc,	// (0x000344e3) bg_active_tab_pane_g3_cp5_srt

0x6927,	// (0x00035d3e) navi_text_pane_srt_t1

0x691f,	// (0x00035d36) navi_icon_pane_srt_g1

0x54c9,	// (0x000348e0) midp_editing_number_pane_srt

0x53c8,	// (0x000347df) midp_ticker_pane_srt

0x54d1,	// (0x000348e8) midp_ticker_pane_srt_g1

0x54d9,	// (0x000348f0) midp_ticker_pane_srt_g2

0x0001,

0xf77d,	// (0x0003eb94) midp_ticker_pane_srt_g

0x54e1,	// (0x000348f8) midp_ticker_pane_srt_t1

0x6910,	// (0x00035d27) midp_editing_number_pane_t1_copy1

0xa9e9,	// (0x00039e00) listscroll_midp_pane

0xa9e9,	// (0x00039e00) midp_form_pane

0x53d0,	// (0x000347e7) midp_info_popup_window_ParamLimits

0x53d0,	// (0x000347e7) midp_info_popup_window

0x4a2a,	// (0x00033e41) bg_popup_sub_pane_cp50_ParamLimits

0x4a2a,	// (0x00033e41) bg_popup_sub_pane_cp50

0x5b4c,	// (0x00034f63) listscroll_midp_info_pane_ParamLimits

0x5b4c,	// (0x00034f63) listscroll_midp_info_pane

0x5b34,	// (0x00034f4b) listscroll_form_midp_pane_ParamLimits

0x5b34,	// (0x00034f4b) listscroll_form_midp_pane

0x5b40,	// (0x00034f57) scroll_bar_cp050

0xd2d3,	// (0x0003c6ea) list_midp_pane

0x737e,	// (0x00036795) signal_pane_g2_cp

0x5a66,	// (0x00034e7d) listscroll_midp_info_pane_t1_ParamLimits

0x5a66,	// (0x00034e7d) listscroll_midp_info_pane_t1

0x5a7e,	// (0x00034e95) listscroll_midp_info_pane_t2_ParamLimits

0x5a7e,	// (0x00034e95) listscroll_midp_info_pane_t2

0x5abc,	// (0x00034ed3) listscroll_midp_info_pane_t3_ParamLimits

0x5abc,	// (0x00034ed3) listscroll_midp_info_pane_t3

0x5af6,	// (0x00034f0d) listscroll_midp_info_pane_t4_ParamLimits

0x5af6,	// (0x00034f0d) listscroll_midp_info_pane_t4

0x0003,

0xf830,	// (0x0003ec47) listscroll_midp_info_pane_t_ParamLimits

0xf830,	// (0x0003ec47) listscroll_midp_info_pane_t

0x4aaa,	// (0x00033ec1) scroll_pane_cp21

0x5a08,	// (0x00034e1f) form_midp_field_choice_group_pane

0x5a11,	// (0x00034e28) form_midp_field_text_pane

0x5a4c,	// (0x00034e63) form_midp_field_time_pane

0x5a54,	// (0x00034e6b) form_midp_gauge_slider_pane

0x5a5d,	// (0x00034e74) form_midp_gauge_wait_pane

0x22dc,	// (0x000316f3) form_midp_image_pane

0x9c25,	// (0x0003903c) list_single_midp_pane_ParamLimits

0x9c25,	// (0x0003903c) list_single_midp_pane

0xd298,	// (0x0003c6af) form_midp_field_text_pane_t1

0x588a,	// (0x00034ca1) input_focus_pane_cp050

0x59f7,	// (0x00034e0e) list_midp_form_text_pane

0x59c6,	// (0x00034ddd) form_midp_field_choice_group_pane_t1

0x59d4,	// (0x00034deb) input_focus_pane_cp051

0x59e8,	// (0x00034dff) list_midp_choice_pane

0x22dc,	// (0x000316f3) status_idle_pane

0x59aa,	// (0x00034dc1) form_midp_field_time_pane_t1

0x22d2,	// (0x000316e9) wait_anim_pane_g2_copy1

0x59b8,	// (0x00034dcf) form_midp_field_time_pane_t2

0x0001,

0x543b,	// (0x00034852) aid_navinavi_width_2_pane

0xf82b,	// (0x0003ec42) form_midp_field_time_pane_t

0x22dc,	// (0x000316f3) input_focus_pane_cp052

0x22dc,	// (0x000316f3) bg_input_focus_pane_cp040

0x5986,	// (0x00034d9d) form_midp_gauge_slider_pane_t1

0x5994,	// (0x00034dab) form_midp_gauge_slider_pane_t2

0xd27c,	// (0x0003c693) form_midp_gauge_slider_pane_t3

0xd28a,	// (0x0003c6a1) form_midp_gauge_slider_pane_t4

0x0003,

0xf822,	// (0x0003ec39) form_midp_gauge_slider_pane_t

0x59a2,	// (0x00034db9) form_midp_slider_pane

0x2348,	// (0x0003175f) bg_input_focus_pane_cp041_ParamLimits

0x2348,	// (0x0003175f) bg_input_focus_pane_cp041

0x5953,	// (0x00034d6a) form_midp_gauge_wait_pane_t1_ParamLimits

0x5953,	// (0x00034d6a) form_midp_gauge_wait_pane_t1

0x5965,	// (0x00034d7c) form_midp_gauge_wait_pane_t2_ParamLimits

0x5965,	// (0x00034d7c) form_midp_gauge_wait_pane_t2

0x0001,

0xf81d,	// (0x0003ec34) form_midp_gauge_wait_pane_t_ParamLimits

0xf81d,	// (0x0003ec34) form_midp_gauge_wait_pane_t

0x5977,	// (0x00034d8e) form_midp_wait_pane_ParamLimits

0x5977,	// (0x00034d8e) form_midp_wait_pane

0x591d,	// (0x00034d34) form_midp_image_pane_g1

0x5926,	// (0x00034d3d) form_midp_image_pane_t1

0x5935,	// (0x00034d4c) form_midp_image_pane_t2

0x5944,	// (0x00034d5b) form_midp_image_pane_t3

0x0002,

0xf816,	// (0x0003ec2d) form_midp_image_pane_t

0x5914,	// (0x00034d2b) list_single_midp_pane_g1

0x9c16,	// (0x0003902d) list_single_midp_pane_t1

0xd24d,	// (0x0003c664) list_midp_form_item_pane_ParamLimits

0xd24d,	// (0x0003c664) list_midp_form_item_pane

0x53e3,	// (0x000347fa) list_midp_form_item_pane_t1

0x53f2,	// (0x00034809) midp_ticker_pane_g1

0x53fe,	// (0x00034815) midp_ticker_pane_g2

0x0001,

0xf763,	// (0x0003eb7a) midp_ticker_pane_g

0x540a,	// (0x00034821) midp_ticker_pane_t1

0x69c0,	// (0x00035dd7) midp_editing_number_pane_t1

0x699e,	// (0x00035db5) midp_editing_number_pane

0x69ad,	// (0x00035dc4) midp_ticker_pane

0x6900,	// (0x00035d17) ai_message_heading_pane

0x22dc,	// (0x000316f3) bg_popup_window_pane_cp14

0x6908,	// (0x00035d1f) listscroll_ai_message_pane

0x686b,	// (0x00035c82) ai_message_heading_pane_g1_ParamLimits

0x686b,	// (0x00035c82) ai_message_heading_pane_g1

0x6877,	// (0x00035c8e) ai_message_heading_pane_g2_ParamLimits

0x6877,	// (0x00035c8e) ai_message_heading_pane_g2

0x6883,	// (0x00035c9a) ai_message_heading_pane_g3_ParamLimits

0x6883,	// (0x00035c9a) ai_message_heading_pane_g3

0x688f,	// (0x00035ca6) ai_message_heading_pane_g4_ParamLimits

0x688f,	// (0x00035ca6) ai_message_heading_pane_g4

0x0003,

0xf957,	// (0x0003ed6e) ai_message_heading_pane_g_ParamLimits

0xf957,	// (0x0003ed6e) ai_message_heading_pane_g

0x689b,	// (0x00035cb2) ai_message_heading_pane_t1_ParamLimits

0x689b,	// (0x00035cb2) ai_message_heading_pane_t1

0x68d4,	// (0x00035ceb) ai_message_heading_pane_t2_ParamLimits

0x68d4,	// (0x00035ceb) ai_message_heading_pane_t2

0x0001,

0xf960,	// (0x0003ed77) ai_message_heading_pane_t_ParamLimits

0xf960,	// (0x0003ed77) ai_message_heading_pane_t

0x68e6,	// (0x00035cfd) bg_popup_heading_pane_cp1_ParamLimits

0x68e6,	// (0x00035cfd) bg_popup_heading_pane_cp1

0x6859,	// (0x00035c70) list_ai_message_pane_ParamLimits

0x6859,	// (0x00035c70) list_ai_message_pane

0x4aaa,	// (0x00033ec1) scroll_pane_cp10

0x67f5,	// (0x00035c0c) list_ai_message_pane_g1

0x67fd,	// (0x00035c14) list_ai_message_pane_g2

0x0001,

0xf934,	// (0x0003ed4b) list_ai_message_pane_g

0x6805,	// (0x00035c1c) list_ai_message_pane_t1_ParamLimits

0x6805,	// (0x00035c1c) list_ai_message_pane_t1

0x681a,	// (0x00035c31) list_ai_message_pane_t2_ParamLimits

0x681a,	// (0x00035c31) list_ai_message_pane_t2

0x682f,	// (0x00035c46) list_ai_message_pane_t3_ParamLimits

0x682f,	// (0x00035c46) list_ai_message_pane_t3

0x6844,	// (0x00035c5b) list_ai_message_pane_t4_ParamLimits

0x6844,	// (0x00035c5b) list_ai_message_pane_t4

0x0003,

0xf939,	// (0x0003ed50) list_ai_message_pane_t_ParamLimits

0xf939,	// (0x0003ed50) list_ai_message_pane_t

0xd408,	// (0x0003c81f) cell_ai_soft_ind_pane_ParamLimits

0xd408,	// (0x0003c81f) cell_ai_soft_ind_pane

0x541c,	// (0x00034833) cell_ai_soft_ind_pane_g1_ParamLimits

0x541c,	// (0x00034833) cell_ai_soft_ind_pane_g1

0x22dc,	// (0x000316f3) grid_highlight_cp1

0x5429,	// (0x00034840) text_secondary_cp56_ParamLimits

0x5429,	// (0x00034840) text_secondary_cp56

0x67ca,	// (0x00035be1) example_general_pane_ParamLimits

0x67ca,	// (0x00035be1) example_general_pane

0x67d6,	// (0x00035bed) example_parent_pane_g1_ParamLimits

0x67d6,	// (0x00035bed) example_parent_pane_g1

0x67e2,	// (0x00035bf9) example_parent_pane_t1_ParamLimits

0x67e2,	// (0x00035bf9) example_parent_pane_t1

0xb5d9,	// (0x0003a9f0) popup_preview_text_window_ParamLimits

0xb5d9,	// (0x0003a9f0) popup_preview_text_window

0x5305,	// (0x0003471c) list_single_pane_cp2_g4

0x2517,	// (0x0003192e) bg_popup_preview_window_pane_ParamLimits

0x2517,	// (0x0003192e) bg_popup_preview_window_pane

0x657f,	// (0x00035996) popup_preview_text_window_t1_ParamLimits

0x657f,	// (0x00035996) popup_preview_text_window_t1

0x659d,	// (0x000359b4) popup_preview_text_window_t2_ParamLimits

0x659d,	// (0x000359b4) popup_preview_text_window_t2

0x65e6,	// (0x000359fd) popup_preview_text_window_t3_ParamLimits

0x65e6,	// (0x000359fd) popup_preview_text_window_t3

0x662b,	// (0x00035a42) popup_preview_text_window_t4_ParamLimits

0x662b,	// (0x00035a42) popup_preview_text_window_t4

0x0004,

0xf908,	// (0x0003ed1f) popup_preview_text_window_t_ParamLimits

0xf908,	// (0x0003ed1f) popup_preview_text_window_t

0x66a9,	// (0x00035ac0) scroll_pane_cp11

0x5816,	// (0x00034c2d) bg_popup_preview_window_pane_g1

0x653f,	// (0x00035956) bg_popup_preview_window_pane_g2

0x6547,	// (0x0003595e) bg_popup_preview_window_pane_g3

0x654f,	// (0x00035966) bg_popup_preview_window_pane_g4

0x6557,	// (0x0003596e) bg_popup_preview_window_pane_g5

0x655f,	// (0x00035976) bg_popup_preview_window_pane_g6

0x6567,	// (0x0003597e) bg_popup_preview_window_pane_g7

0x656f,	// (0x00035986) bg_popup_preview_window_pane_g8

0xa1e4,	// (0x000395fb) aid_popup_width_pane

0xb5b7,	// (0x0003a9ce) popup_midp_note_alarm_window_ParamLimits

0xb5b7,	// (0x0003a9ce) popup_midp_note_alarm_window

0x497e,	// (0x00033d95) data_form_pane_ParamLimits

0x98c6,	// (0x00038cdd) form_field_data_pane_g1

0x98d0,	// (0x00038ce7) form_field_data_pane_t1_ParamLimits

0x498a,	// (0x00033da1) input_focus_pane_ParamLimits

0x98ea,	// (0x00038d01) data_form_wide_pane_ParamLimits

0x98fb,	// (0x00038d12) form_field_data_wide_pane_g1

0x9907,	// (0x00038d1e) form_field_data_wide_pane_t1_ParamLimits

0x270a,	// (0x00031b21) input_focus_pane_cp6_ParamLimits

0xa9ae,	// (0x00039dc5) input_popup_find_pane_g1_ParamLimits

0xa9ae,	// (0x00039dc5) input_popup_find_pane_g1

0xab07,	// (0x00039f1e) aid_navi_side_left_pane

0xab1c,	// (0x00039f33) aid_navi_side_right_pane

0x5fd8,	// (0x000353ef) bg_popup_window_pane_cp30_ParamLimits

0x5fd8,	// (0x000353ef) bg_popup_window_pane_cp30

0x6052,	// (0x00035469) popup_midp_note_alarm_window_g1_ParamLimits

0x6052,	// (0x00035469) popup_midp_note_alarm_window_g1

0x6082,	// (0x00035499) popup_midp_note_alarm_window_t1_ParamLimits

0x6082,	// (0x00035499) popup_midp_note_alarm_window_t1

0x6123,	// (0x0003553a) popup_midp_note_alarm_window_t2_ParamLimits

0x6123,	// (0x0003553a) popup_midp_note_alarm_window_t2

0x61d1,	// (0x000355e8) popup_midp_note_alarm_window_t3_ParamLimits

0x61d1,	// (0x000355e8) popup_midp_note_alarm_window_t3

0x6203,	// (0x0003561a) popup_midp_note_alarm_window_t4_ParamLimits

0x6203,	// (0x0003561a) popup_midp_note_alarm_window_t4

0x6229,	// (0x00035640) popup_midp_note_alarm_window_t5_ParamLimits

0x6229,	// (0x00035640) popup_midp_note_alarm_window_t5

0x000a,

0xf8a5,	// (0x0003ecbc) popup_midp_note_alarm_window_t_ParamLimits

0xf8a5,	// (0x0003ecbc) popup_midp_note_alarm_window_t

0x62d5,	// (0x000356ec) wait_bar_pane_cp1_ParamLimits

0x62d5,	// (0x000356ec) wait_bar_pane_cp1

0x22dc,	// (0x000316f3) wait_anim_pane_copy1

0x22dc,	// (0x000316f3) wait_border_pane_copy1

0x5cf0,	// (0x00035107) wait_border_pane_g1_copy1

0x9921,	// (0x00038d38) form_field_popup_pane_g1

0x9929,	// (0x00038d40) form_field_popup_pane_t1_ParamLimits

0x498a,	// (0x00033da1) input_focus_pane_cp7_ParamLimits

0x49ac,	// (0x00033dc3) list_form_pane_ParamLimits

0x9943,	// (0x00038d5a) form_field_popup_wide_pane_g1

0x994b,	// (0x00038d62) form_field_popup_wide_pane_t1_ParamLimits

0x498a,	// (0x00033da1) input_focus_pane_cp8_ParamLimits

0x49b8,	// (0x00033dcf) list_form_wide_pane_ParamLimits

0x6a52,	// (0x00035e69) aid_size_cell_graphic_pane

0x99d7,	// (0x00038dee) data_form_pane_t1_ParamLimits

0x9c69,	// (0x00039080) data_form_wide_pane_t1_ParamLimits

0xcf51,	// (0x0003c368) bg_status_flat_pane

0xa5e3,	// (0x000399fa) title_pane_t1_ParamLimits

0x22f2,	// (0x00031709) title_pane_t2_ParamLimits

0x2318,	// (0x0003172f) title_pane_t3_ParamLimits

0xf55d,	// (0x0003e974) title_pane_t_ParamLimits

0x4e4b,	// (0x00034262) level_1_signal_ParamLimits

0x4e58,	// (0x0003426f) level_2_signal_ParamLimits

0x4e65,	// (0x0003427c) level_3_signal_ParamLimits

0x4e72,	// (0x00034289) level_4_signal_ParamLimits

0x4e7f,	// (0x00034296) level_5_signal_ParamLimits

0x4e8c,	// (0x000342a3) level_6_signal_ParamLimits

0x4e99,	// (0x000342b0) level_7_signal_ParamLimits

0x4e4b,	// (0x00034262) level_1_battery_ParamLimits

0x4e58,	// (0x0003426f) level_2_battery_ParamLimits

0x4e65,	// (0x0003427c) level_3_battery_ParamLimits

0x4e72,	// (0x00034289) level_4_battery_ParamLimits

0x4e7f,	// (0x00034296) level_5_battery_ParamLimits

0x4e8c,	// (0x000342a3) level_6_battery_ParamLimits

0x4e99,	// (0x000342b0) level_7_battery_ParamLimits

0x5efb,	// (0x00035312) bg_status_flat_pane_g1

0x5f03,	// (0x0003531a) bg_status_flat_pane_g2

0x5f0b,	// (0x00035322) bg_status_flat_pane_g3

0x5f13,	// (0x0003532a) bg_status_flat_pane_g4

0x5f1b,	// (0x00035332) bg_status_flat_pane_g5

0x5f23,	// (0x0003533a) bg_status_flat_pane_g6

0x5f2b,	// (0x00035342) bg_status_flat_pane_g7

0xa64b,	// (0x00039a62) tabs_3_active_pane_t1_ParamLimits

0xa64b,	// (0x00039a62) tabs_3_passive_pane_t1_ParamLimits

0xa65d,	// (0x00039a74) tabs_4_active_pane_t1_ParamLimits

0xa65d,	// (0x00039a74) tabs_4_1_passive_pane_t1_ParamLimits

0xa9c4,	// (0x00039ddb) tabs_2_active_pane_t1_ParamLimits

0xa9c4,	// (0x00039ddb) tabs_2_passive_pane_t1_ParamLimits

0x6bca,	// (0x00035fe1) bg_active_tab_pane_cp4_ParamLimits

0xa9d6,	// (0x00039ded) tabs_2_long_active_pane_t1_ParamLimits

0xa9e9,	// (0x00039e00) bg_passive_tab_pane_cp4_ParamLimits

0xb876,	// (0x0003ac8d) list_single_midp_graphic_pane_t1_ParamLimits

0x6bca,	// (0x00035fe1) bg_active_tab_pane_cp5_ParamLimits

0xa9f5,	// (0x00039e0c) tabs_3_long_active_pane_t1_ParamLimits

0xa9e9,	// (0x00039e00) bg_passive_tab_pane_cp5_ParamLimits

0xb876,	// (0x0003ac8d) list_single_midp_graphic_pane_t1

0xcf51,	// (0x0003c368) bg_status_flat_pane_ParamLimits

0x56e7,	// (0x00034afe) indicator_pane_cp2_ParamLimits

0x56e7,	// (0x00034afe) indicator_pane_cp2

0xd09b,	// (0x0003c4b2) navi_pane_srt_ParamLimits

0xd09b,	// (0x0003c4b2) navi_pane_srt

0x570f,	// (0x00034b26) popup_clock_digital_analogue_window_cp1

0x238c,	// (0x000317a3) indicator_pane_t1

0x53c8,	// (0x000347df) copy_highlight_pane

0x53c8,	// (0x000347df) cursor_graphics_pane

0x53c8,	// (0x000347df) graphic_within_text_pane

0x53c8,	// (0x000347df) link_highlight_pane

0x666c,	// (0x00035a83) popup_preview_text_window_t5_ParamLimits

0x666c,	// (0x00035a83) popup_preview_text_window_t5

0x5443,	// (0x0003485a) cursor_digital_pane

0x5443,	// (0x0003485a) cursor_primary_pane

0x5454,	// (0x0003486b) cursor_primary_small_pane

0x545c,	// (0x00034873) cursor_secondary_pane

0x5464,	// (0x0003487b) cursor_title_pane

0x5443,	// (0x0003485a) link_highlight_digital_pane

0x544b,	// (0x00034862) link_highlight_primary_pane

0x5454,	// (0x0003486b) link_highlight_primary_small_pane

0x545c,	// (0x00034873) link_highlight_secondary_pane

0x5464,	// (0x0003487b) link_highlight_title_pane

0x5443,	// (0x0003485a) copy_highlight_digital_pane

0x5443,	// (0x0003485a) copy_highlight_primary_pane

0x5454,	// (0x0003486b) copy_highlight_primary_small_pane

0x545c,	// (0x00034873) copy_highlight_secondary_pane

0x5464,	// (0x0003487b) copy_highlight_title_pane

0x545c,	// (0x00034873) graphic_text_digital_pane

0x5f7b,	// (0x00035392) graphic_text_primary_pane

0x5f84,	// (0x0003539b) graphic_text_primary_small_pane

0x5454,	// (0x0003486b) graphic_text_secondary_pane

0x5443,	// (0x0003485a) graphic_text_title_pane

0xb01a,	// (0x0003a431) cursor_primary_pane_g1

0x5f6d,	// (0x00035384) cursor_text_primary_t1

0xd31b,	// (0x0003c732) cursor_primary_small_pane_g1

0x5f5f,	// (0x00035376) cursor_text_primary_small_t1

0xd311,	// (0x0003c728) cursor_primary_small_pane_g1_copy1

0x5f51,	// (0x00035368) cursor_text_primary_small_t1_copy1

0x5f43,	// (0x0003535a) cursor_text_title_t1

0xd307,	// (0x0003c71e) cursor_title_pane_g1

0xb01a,	// (0x0003a431) cursor_digital_pane_g1

0x546c,	// (0x00034883) cursor_text_digital_t1

0x5ee4,	// (0x000352fb) link_highlight_primary_pane_g1

0x5eec,	// (0x00035303) link_highlight_primary_pane_t1

0x547a,	// (0x00034891) link_highlight_primary_small_pane_g1

0x5482,	// (0x00034899) link_highlight_primary_small_pane_t1

0x547a,	// (0x00034891) link_highlight_secondary_pane_g1

0x5491,	// (0x000348a8) link_highlight_secondary_pane_t1

0x5e58,	// (0x0003526f) link_highlight_title_pane_g1

0x5e60,	// (0x00035277) link_highlight_title_pane_t1

0x5e41,	// (0x00035258) link_highlight_digital_pane_g1

0x5e49,	// (0x00035260) link_highlight_digital_pane_t1

0x5d35,	// (0x0003514c) copy_highlight_primary_pane_g1

0x5d3d,	// (0x00035154) copy_highlight_primary_pane_t1

0x5d0f,	// (0x00035126) copy_highlight_primary_small_pane_g1

0x5d26,	// (0x0003513d) copy_highlight_primary_small_pane_t1

0x54a0,	// (0x000348b7) copy_highlight_secondary_pane_g1

0x54a8,	// (0x000348bf) copy_highlight_secondary_pane_t1

0x5d0f,	// (0x00035126) copy_highlight_title_pane_g1

0x5d17,	// (0x0003512e) copy_highlight_title_pane_t1

0x5d35,	// (0x0003514c) copy_highlight_digital_pane_g1

0x6c34,	// (0x0003604b) copy_highlight_digital_pane_t1

0x6b2c,	// (0x00035f43) graphic_text_primary_pane_g1

0x6bbc,	// (0x00035fd3) graphic_text_primary_pane_t1

0x6c26,	// (0x0003603d) graphic_text_primary_pane_t2

0x0001,

0xf9d4,	// (0x0003edeb) graphic_text_primary_pane_t

0x6b98,	// (0x00035faf) graphic_text_primary_small_pane_g1

0x6ba0,	// (0x00035fb7) graphic_text_primary_small_pane_t1

0x6bae,	// (0x00035fc5) graphic_text_primary_small_pane_t2

0x0001,

0xf9cf,	// (0x0003ede6) graphic_text_primary_small_pane_t

0x6b74,	// (0x00035f8b) graphic_text_secondary_pane_g1

0x6b7c,	// (0x00035f93) graphic_text_secondary_pane_t1

0x6b8a,	// (0x00035fa1) graphic_text_secondary_pane_t2

0x0001,

0xf9ca,	// (0x0003ede1) graphic_text_secondary_pane_t

0x6b50,	// (0x00035f67) graphic_text_title_pane_g1

0x6b58,	// (0x00035f6f) graphic_text_title_pane_t1

0x6b66,	// (0x00035f7d) graphic_text_title_pane_t2

0x0001,

0xf9c5,	// (0x0003eddc) graphic_text_title_pane_t

0x6b2c,	// (0x00035f43) graphic_text_digital_pane_g1

0x6b34,	// (0x00035f4b) graphic_text_digital_pane_t1

0x6b42,	// (0x00035f59) graphic_text_digital_pane_t2

0x0001,

0xf9c0,	// (0x0003edd7) graphic_text_digital_pane_t

0x2348,	// (0x0003175f) navi_icon_pane_srt_ParamLimits

0x2348,	// (0x0003175f) navi_icon_pane_srt

0x22dc,	// (0x000316f3) navi_midp_pane_srt

0x22dc,	// (0x000316f3) navi_navi_pane_srt

0x2348,	// (0x0003175f) navi_text_pane_srt_ParamLimits

0x2348,	// (0x0003175f) navi_text_pane_srt

0x6af7,	// (0x00035f0e) navi_navi_icon_text_pane_srt

0x6b11,	// (0x00035f28) navi_navi_pane_srt_g1_ParamLimits

0x6b11,	// (0x00035f28) navi_navi_pane_srt_g1

0x6aff,	// (0x00035f16) navi_navi_pane_srt_g2_ParamLimits

0x6aff,	// (0x00035f16) navi_navi_pane_srt_g2

0x0001,

0xf9bb,	// (0x0003edd2) navi_navi_pane_srt_g_ParamLimits

0xf9bb,	// (0x0003edd2) navi_navi_pane_srt_g

0x6b23,	// (0x00035f3a) navi_navi_tabs_pane_srt

0x6af7,	// (0x00035f0e) navi_navi_text_pane_srt

0x6af7,	// (0x00035f0e) navi_navi_volume_pane_srt

0x6ae8,	// (0x00035eff) navi_navi_text_pane_srt_t1

0xbc9c,	// (0x0003b0b3) navi_navi_volume_pane_srt_g1

0xbca4,	// (0x0003b0bb) volume_small_pane_srt_ParamLimits

0xbca4,	// (0x0003b0bb) volume_small_pane_srt

0xb024,	// (0x0003a43b) volume_small_pane_srt_g1_ParamLimits

0xb024,	// (0x0003a43b) volume_small_pane_srt_g1

0xb034,	// (0x0003a44b) volume_small_pane_srt_g2_ParamLimits

0xb034,	// (0x0003a44b) volume_small_pane_srt_g2

0xb045,	// (0x0003a45c) volume_small_pane_srt_g3_ParamLimits

0xb045,	// (0x0003a45c) volume_small_pane_srt_g3

0xb056,	// (0x0003a46d) volume_small_pane_srt_g4_ParamLimits

0xb056,	// (0x0003a46d) volume_small_pane_srt_g4

0xb067,	// (0x0003a47e) volume_small_pane_srt_g5_ParamLimits

0xb067,	// (0x0003a47e) volume_small_pane_srt_g5

0xb078,	// (0x0003a48f) volume_small_pane_srt_g6_ParamLimits

0xb078,	// (0x0003a48f) volume_small_pane_srt_g6

0xb089,	// (0x0003a4a0) volume_small_pane_srt_g7_ParamLimits

0xb089,	// (0x0003a4a0) volume_small_pane_srt_g7

0xb09a,	// (0x0003a4b1) volume_small_pane_srt_g8_ParamLimits

0xb09a,	// (0x0003a4b1) volume_small_pane_srt_g8

0xb0ab,	// (0x0003a4c2) volume_small_pane_srt_g9_ParamLimits

0xb0ab,	// (0x0003a4c2) volume_small_pane_srt_g9

0xb0bc,	// (0x0003a4d3) volume_small_pane_srt_g10_ParamLimits

0xb0bc,	// (0x0003a4d3) volume_small_pane_srt_g10

0x0009,

0xf768,	// (0x0003eb7f) volume_small_pane_srt_g_ParamLimits

0xf768,	// (0x0003eb7f) volume_small_pane_srt_g

0x25c0,	// (0x000319d7) query_popup_data_pane_cp2

0x6ace,	// (0x00035ee5) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6ace,	// (0x00035ee5) navi_navi_icon_text_pane_srt_t1

0x5f7b,	// (0x00035392) navi_tabs_2_long_pane_srt

0x5f7b,	// (0x00035392) navi_tabs_2_pane_srt

0x5f7b,	// (0x00035392) navi_tabs_3_long_pane_srt

0x5f7b,	// (0x00035392) navi_tabs_3_pane_srt

0x5f7b,	// (0x00035392) navi_tabs_4_pane_srt

0xbc7c,	// (0x0003b093) tabs_2_active_pane_srt_ParamLimits

0xbc7c,	// (0x0003b093) tabs_2_active_pane_srt

0xbc8c,	// (0x0003b0a3) tabs_2_passive_pane_srt_ParamLimits

0xbc8c,	// (0x0003b0a3) tabs_2_passive_pane_srt

0x4ae3,	// (0x00033efa) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4ae3,	// (0x00033efa) bg_passive_tab_pane_cp1_srt

0x6ab5,	// (0x00035ecc) bg_passive_tab_pane_g1_cp1_srt

0x5073,	// (0x0003448a) bg_passive_tab_pane_g2_cp1_srt

0x6aac,	// (0x00035ec3) bg_passive_tab_pane_g3_cp1_srt

0x2348,	// (0x0003175f) bg_active_tab_pane_cp1_srt_ParamLimits

0x2348,	// (0x0003175f) bg_active_tab_pane_cp1_srt

0x6abe,	// (0x00035ed5) tabs_2_active_pane_srt_g1

0xd655,	// (0x0003ca6c) tabs_2_active_pane_srt_t1_ParamLimits

0xd655,	// (0x0003ca6c) tabs_2_active_pane_srt_t1

0x6ab5,	// (0x00035ecc) bg_active_tab_pane_g1_cp1_srt

0x5073,	// (0x0003448a) bg_active_tab_pane_g2_cp1_srt

0x6aac,	// (0x00035ec3) bg_active_tab_pane_g3_cp1_srt

0xbc49,	// (0x0003b060) tabs_3_active_pane_srt_ParamLimits

0xbc49,	// (0x0003b060) tabs_3_active_pane_srt

0xbc5a,	// (0x0003b071) tabs_3_passive_pane_cp_srt_ParamLimits

0xbc5a,	// (0x0003b071) tabs_3_passive_pane_cp_srt

0xbc6b,	// (0x0003b082) tabs_3_passive_pane_srt_ParamLimits

0xbc6b,	// (0x0003b082) tabs_3_passive_pane_srt

0x4ae3,	// (0x00033efa) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4ae3,	// (0x00033efa) bg_passive_tab_pane_cp2_srt

0x54c0,	// (0x000348d7) bg_passive_tab_pane_g1_cp2_srt

0x5073,	// (0x0003448a) bg_passive_tab_pane_g2_cp2_srt

0x54b7,	// (0x000348ce) bg_passive_tab_pane_g3_cp2_srt

0x2348,	// (0x0003175f) bg_active_tab_pane_cp2_srt_ParamLimits

0x2348,	// (0x0003175f) bg_active_tab_pane_cp2_srt

0x6aa4,	// (0x00035ebb) tabs_3_active_pane_srt_g1

0xd643,	// (0x0003ca5a) tabs_3_active_pane_srt_t1_ParamLimits

0xd643,	// (0x0003ca5a) tabs_3_active_pane_srt_t1

0x54c0,	// (0x000348d7) bg_active_tab_pane_g1_cp2_srt

0x5073,	// (0x0003448a) bg_active_tab_pane_g2_cp2_srt

0x54b7,	// (0x000348ce) bg_active_tab_pane_g3_cp2_srt

0xbc01,	// (0x0003b018) tabs_4_active_pane_srt_ParamLimits

0xbc01,	// (0x0003b018) tabs_4_active_pane_srt

0xbc13,	// (0x0003b02a) tabs_4_passive_pane_cp2_srt_ParamLimits

0xbc13,	// (0x0003b02a) tabs_4_passive_pane_cp2_srt

0xb246,	// (0x0003a65d) aid_size_cell_toolbar

0xa9e9,	// (0x00039e00) main_idle_act_pane_ParamLimits

0xb3eb,	// (0x0003a802) popup_large_graphic_colour_window_ParamLimits

0xb750,	// (0x0003ab67) popup_toolbar_window_ParamLimits

0xb750,	// (0x0003ab67) popup_toolbar_window

0x69cf,	// (0x00035de6) list_single_graphic_2heading_pane_ParamLimits

0x69cf,	// (0x00035de6) list_single_graphic_2heading_pane

0x4c8a,	// (0x000340a1) aid_size_cell_apps_grid_lsc_pane

0x4ca5,	// (0x000340bc) aid_size_cell_apps_grid_prt_pane

0x4ae3,	// (0x00033efa) bg_wml_button_pane_cp1_ParamLimits

0x4ae3,	// (0x00033efa) bg_wml_button_pane_cp1

0xd298,	// (0x0003c6af) form_midp_field_text_pane_t1_ParamLimits

0x588a,	// (0x00034ca1) input_focus_pane_cp050_ParamLimits

0x59f7,	// (0x00034e0e) list_midp_form_text_pane_ParamLimits

0x59d4,	// (0x00034deb) input_focus_pane_cp051_ParamLimits

0x59e8,	// (0x00034dff) list_midp_choice_pane_ParamLimits

0xd1e9,	// (0x0003c600) list_single_2graphic_pane_cp3_ParamLimits

0xd1e9,	// (0x0003c600) list_single_2graphic_pane_cp3

0xd214,	// (0x0003c62b) list_single_midp_graphic_pane_ParamLimits

0xd214,	// (0x0003c62b) list_single_midp_graphic_pane

0x9af0,	// (0x00038f07) list_single_graphic_2heading_pane_g1_ParamLimits

0x9af0,	// (0x00038f07) list_single_graphic_2heading_pane_g1

0x9afc,	// (0x00038f13) list_single_graphic_2heading_pane_g4_ParamLimits

0x9afc,	// (0x00038f13) list_single_graphic_2heading_pane_g4

0x9b08,	// (0x00038f1f) list_single_graphic_2heading_pane_g5_ParamLimits

0x9b08,	// (0x00038f1f) list_single_graphic_2heading_pane_g5

0x0002,

0xf7bb,	// (0x0003ebd2) list_single_graphic_2heading_pane_g_ParamLimits

0xf7bb,	// (0x0003ebd2) list_single_graphic_2heading_pane_g

0x9b14,	// (0x00038f2b) list_single_graphic_2heading_pane_t1_ParamLimits

0x9b14,	// (0x00038f2b) list_single_graphic_2heading_pane_t1

0x9b28,	// (0x00038f3f) list_single_graphic_2heading_pane_t2_ParamLimits

0x9b28,	// (0x00038f3f) list_single_graphic_2heading_pane_t2

0x9b44,	// (0x00038f5b) list_single_graphic_2heading_pane_t3_ParamLimits

0x9b44,	// (0x00038f5b) list_single_graphic_2heading_pane_t3

0x0002,

0xf7c2,	// (0x0003ebd9) list_single_graphic_2heading_pane_t_ParamLimits

0xf7c2,	// (0x0003ebd9) list_single_graphic_2heading_pane_t

0x5754,	// (0x00034b6b) bg_popup_sub_pane_cp2

0x577e,	// (0x00034b95) grid_toobar_pane

0xb7fb,	// (0x0003ac12) cell_toolbar_pane_ParamLimits

0xb7fb,	// (0x0003ac12) cell_toolbar_pane

0x57ba,	// (0x00034bd1) cell_toolbar_pane_g1_ParamLimits

0x57ba,	// (0x00034bd1) cell_toolbar_pane_g1

0x57ce,	// (0x00034be5) cell_toolbar_pane_g2_ParamLimits

0x57ce,	// (0x00034be5) cell_toolbar_pane_g2

0x0001,

0xf7d0,	// (0x0003ebe7) cell_toolbar_pane_g_ParamLimits

0xf7d0,	// (0x0003ebe7) cell_toolbar_pane_g

0x57f0,	// (0x00034c07) grid_highlight_pane_cp2_ParamLimits

0x57f0,	// (0x00034c07) grid_highlight_pane_cp2

0x580a,	// (0x00034c21) toolbar_button_pane

0x5816,	// (0x00034c2d) toolbar_button_pane_g1

0x5826,	// (0x00034c3d) toolbar_button_pane_g2

0x581e,	// (0x00034c35) toolbar_button_pane_g3

0x5836,	// (0x00034c4d) toolbar_button_pane_g4

0x582e,	// (0x00034c45) toolbar_button_pane_g5

0x583e,	// (0x00034c55) toolbar_button_pane_g6

0x5846,	// (0x00034c5d) toolbar_button_pane_g7

0x5856,	// (0x00034c6d) toolbar_button_pane_g8

0x584e,	// (0x00034c65) toolbar_button_pane_g9

0x0009,

0xf7d5,	// (0x0003ebec) toolbar_button_pane_g

0xb833,	// (0x0003ac4a) list_single_2graphic_pane_g1_cp3_ParamLimits

0xb833,	// (0x0003ac4a) list_single_2graphic_pane_g1_cp3

0xb83f,	// (0x0003ac56) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb83f,	// (0x0003ac56) list_single_2graphic_pane_g2_cp3

0x5204,	// (0x0003461b) list_single_2graphic_pane_g3_cp3

0xb850,	// (0x0003ac67) list_single_2graphic_pane_g4_cp3_ParamLimits

0xb850,	// (0x0003ac67) list_single_2graphic_pane_g4_cp3

0xb85c,	// (0x0003ac73) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb85c,	// (0x0003ac73) list_single_2graphic_pane_t1_cp3

0x51f8,	// (0x0003460f) list_single_midp_graphic_pane_g2_ParamLimits

0x51f8,	// (0x0003460f) list_single_midp_graphic_pane_g2

0x9ad8,	// (0x00038eef) aid_zoom_text_primary

0x9ae0,	// (0x00038ef7) aid_zoom_text_secondary

0x5574,	// (0x0003498b) status_small_pane_g7_ParamLimits

0x5574,	// (0x0003498b) status_small_pane_g7

0x5597,	// (0x000349ae) status_small_pane_t1_ParamLimits

0xa5c6,	// (0x000399dd) title_pane_g2

0x0003,

0xf554,	// (0x0003e96b) title_pane_g

0xa814,	// (0x00039c2b) aid_size_cell_colour_1_pane_ParamLimits

0xa814,	// (0x00039c2b) aid_size_cell_colour_1_pane

0xa828,	// (0x00039c3f) aid_size_cell_colour_2_pane_ParamLimits

0xa828,	// (0x00039c3f) aid_size_cell_colour_2_pane

0xa83c,	// (0x00039c53) aid_size_cell_colour_3_pane_ParamLimits

0xa83c,	// (0x00039c53) aid_size_cell_colour_3_pane

0xa850,	// (0x00039c67) aid_size_cell_colour_4_pane_ParamLimits

0xa850,	// (0x00039c67) aid_size_cell_colour_4_pane

0xaa43,	// (0x00039e5a) title_pane_stacon_g1_ParamLimits

0xaa43,	// (0x00039e5a) title_pane_stacon_g1

0x5d94,	// (0x000351ab) popup_note_wait_window_g3_ParamLimits

0x5d94,	// (0x000351ab) popup_note_wait_window_g3

0x5e0a,	// (0x00035221) popup_note_wait_window_t5_ParamLimits

0x5e0a,	// (0x00035221) popup_note_wait_window_t5

0x22dc,	// (0x000316f3) main_feb_china_hwr_fs_writing_pane

0xb2d4,	// (0x0003a6eb) popup_feb_china_hwr_fs_window_ParamLimits

0xb2d4,	// (0x0003a6eb) popup_feb_china_hwr_fs_window

0xb88c,	// (0x0003aca3) aid_size_cell_hwr_fs_ParamLimits

0xb88c,	// (0x0003aca3) aid_size_cell_hwr_fs

0x588a,	// (0x00034ca1) bg_popup_sub_pane_cp3_ParamLimits

0x588a,	// (0x00034ca1) bg_popup_sub_pane_cp3

0xb8a1,	// (0x0003acb8) grid_hwr_fs_pane_ParamLimits

0xb8a1,	// (0x0003acb8) grid_hwr_fs_pane

0xb8b9,	// (0x0003acd0) linegrid_hwr_fs_pane_ParamLimits

0xb8b9,	// (0x0003acd0) linegrid_hwr_fs_pane

0xb8c9,	// (0x0003ace0) cell_hwr_fs_pane_ParamLimits

0xb8c9,	// (0x0003ace0) cell_hwr_fs_pane

0x5896,	// (0x00034cad) linegrid_hwr_fs_pane_g1_ParamLimits

0x5896,	// (0x00034cad) linegrid_hwr_fs_pane_g1

0xd1bd,	// (0x0003c5d4) linegrid_hwr_fs_pane_g2_ParamLimits

0xd1bd,	// (0x0003c5d4) linegrid_hwr_fs_pane_g2

0x58a2,	// (0x00034cb9) linegrid_hwr_fs_pane_g3_ParamLimits

0x58a2,	// (0x00034cb9) linegrid_hwr_fs_pane_g3

0xb8eb,	// (0x0003ad02) linegrid_hwr_fs_pane_g4_ParamLimits

0xb8eb,	// (0x0003ad02) linegrid_hwr_fs_pane_g4

0xb905,	// (0x0003ad1c) linegrid_hwr_fs_pane_g5_ParamLimits

0xb905,	// (0x0003ad1c) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fb,	// (0x0003ec12) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0003ec12) linegrid_hwr_fs_pane_g

0x58ae,	// (0x00034cc5) cell_hwr_fs_pane_g1_ParamLimits

0x58ae,	// (0x00034cc5) cell_hwr_fs_pane_g1

0x5720,	// (0x00034b37) cell_hwr_fs_pane_g2_ParamLimits

0x5720,	// (0x00034b37) cell_hwr_fs_pane_g2

0xd1cf,	// (0x0003c5e6) cell_hwr_fs_pane_g3_ParamLimits

0xd1cf,	// (0x0003c5e6) cell_hwr_fs_pane_g3

0xd1dc,	// (0x0003c5f3) cell_hwr_fs_pane_g4_ParamLimits

0xd1dc,	// (0x0003c5f3) cell_hwr_fs_pane_g4

0x0003,

0xf806,	// (0x0003ec1d) cell_hwr_fs_pane_g_ParamLimits

0xf806,	// (0x0003ec1d) cell_hwr_fs_pane_g

0xb91b,	// (0x0003ad32) cell_hwr_fs_pane_t1

0x22dc,	// (0x000316f3) grid_highlight_pane_cp6

0x22dc,	// (0x000316f3) main_idle_act2_pane

0x4a91,	// (0x00033ea8) aid_inside_area_popup_secondary

0xd32d,	// (0x0003c744) aid_inside_area_window_primary_ParamLimits

0xd32d,	// (0x0003c744) aid_inside_area_window_primary

0x6c43,	// (0x0003605a) ai2_news_ticker_pane

0x6c4b,	// (0x00036062) aid_size_cell_ai1_link_ParamLimits

0x6c4b,	// (0x00036062) aid_size_cell_ai1_link

0x6c65,	// (0x0003607c) popup_ai2_data_window_ParamLimits

0x6c65,	// (0x0003607c) popup_ai2_data_window

0x6c79,	// (0x00036090) popup_ai2_link_window_ParamLimits

0x6c79,	// (0x00036090) popup_ai2_link_window

0x588a,	// (0x00034ca1) bg_popup_sub_pane_cp4_ParamLimits

0x588a,	// (0x00034ca1) bg_popup_sub_pane_cp4

0x6c8d,	// (0x000360a4) grid_ai2_link_pane_ParamLimits

0x6c8d,	// (0x000360a4) grid_ai2_link_pane

0x6ca4,	// (0x000360bb) popup_ai2_link_window_g1_ParamLimits

0x6ca4,	// (0x000360bb) popup_ai2_link_window_g1

0x6cb0,	// (0x000360c7) popup_ai2_link_window_g2_ParamLimits

0x6cb0,	// (0x000360c7) popup_ai2_link_window_g2

0x0001,

0xf9d9,	// (0x0003edf0) popup_ai2_link_window_g_ParamLimits

0xf9d9,	// (0x0003edf0) popup_ai2_link_window_g

0x6cbf,	// (0x000360d6) ai2_mp_button_pane

0x6cc7,	// (0x000360de) ai2_mp_volume_pane

0x59d4,	// (0x00034deb) bg_popup_sub_pane_cp5_ParamLimits

0x59d4,	// (0x00034deb) bg_popup_sub_pane_cp5

0x6ccf,	// (0x000360e6) heading_ai2_gene_pane_ParamLimits

0x6ccf,	// (0x000360e6) heading_ai2_gene_pane

0x6cdb,	// (0x000360f2) list_ai2_gene_pane_ParamLimits

0x6cdb,	// (0x000360f2) list_ai2_gene_pane

0x6d23,	// (0x0003613a) cell_ai2_link_pane_ParamLimits

0x6d23,	// (0x0003613a) cell_ai2_link_pane

0x6d39,	// (0x00036150) cell_ai2_link_pane_g1

0x22dc,	// (0x000316f3) grid_highlight_pane_cp7

0xbcb9,	// (0x0003b0d0) ai2_mp_volume_pane_g1

0x6e12,	// (0x00036229) ai2_mp_volume_pane_g2

0x6d7f,	// (0x00036196) list_ai2_gene_pane_t1

0x6e0a,	// (0x00036221) ai2_mp_volume_pane_g3

0x0002,

0xf9f2,	// (0x0003ee09) ai2_mp_volume_pane_g

0xbcc1,	// (0x0003b0d8) volume_small_pane_cp3

0x6e1a,	// (0x00036231) aid_size_cell_ai2_button

0x6e22,	// (0x00036239) grid_ai2_button_pane

0x6e2b,	// (0x00036242) cell_ai2_button_pane_ParamLimits

0x6e2b,	// (0x00036242) cell_ai2_button_pane

0x22d2,	// (0x000316e9) cell_ai2_button_pane_g1

0x22dc,	// (0x000316f3) grid_highlight_pane_cp8

0x6dca,	// (0x000361e1) ai2_gene_pane_t1_ParamLimits

0x6dca,	// (0x000361e1) ai2_gene_pane_t1

0xb23c,	// (0x0003a653) aid_height_parent_landscape

0xd443,	// (0x0003c85a) aid_height_set_list

0x5626,	// (0x00034a3d) aid_size_parent

0x6a52,	// (0x00035e69) aid_size_cell_graphic_pane_ParamLimits

0x6ceb,	// (0x00036102) popup_ai2_data_window_g1_ParamLimits

0x6ceb,	// (0x00036102) popup_ai2_data_window_g1

0x6cf7,	// (0x0003610e) ai2_news_ticker_pane_g1

0x6cff,	// (0x00036116) ai2_news_ticker_pane_g2

0x0001,

0xf9de,	// (0x0003edf5) ai2_news_ticker_pane_g

0x6d07,	// (0x0003611e) ai2_news_ticker_pane_t1

0x6d15,	// (0x0003612c) ai2_news_ticker_pane_t2

0x0001,

0xf9e3,	// (0x0003edfa) ai2_news_ticker_pane_t

0x6d42,	// (0x00036159) heading_ai2_gene_pane_g1

0x6d4a,	// (0x00036161) heading_ai2_gene_pane_t1_ParamLimits

0x6d4a,	// (0x00036161) heading_ai2_gene_pane_t1

0x6d5f,	// (0x00036176) list_highlight_pane_cp6

0x6d67,	// (0x0003617e) ai2_gene_pane_ParamLimits

0x6d67,	// (0x0003617e) ai2_gene_pane

0x6d8d,	// (0x000361a4) list_ai2_gene_pane_t2

0x0001,

0xf9e8,	// (0x0003edff) list_ai2_gene_pane_t

0x6d9b,	// (0x000361b2) list_highlight_pane_cp8_ParamLimits

0x6d9b,	// (0x000361b2) list_highlight_pane_cp8

0x6dac,	// (0x000361c3) ai2_gene_pane_g1_ParamLimits

0x6dac,	// (0x000361c3) ai2_gene_pane_g1

0x6dbe,	// (0x000361d5) ai2_gene_pane_g2_ParamLimits

0x6dbe,	// (0x000361d5) ai2_gene_pane_g2

0x0001,

0xf9ed,	// (0x0003ee04) ai2_gene_pane_g_ParamLimits

0xf9ed,	// (0x0003ee04) ai2_gene_pane_g

0x2925,	// (0x00031d3c) scroll_pane_cp12

0xb1fb,	// (0x0003a612) control_pane_t3_ParamLimits

0xb1fb,	// (0x0003a612) control_pane_t3

0x5588,	// (0x0003499f) status_small_pane_g8_ParamLimits

0x5588,	// (0x0003499f) status_small_pane_g8

0xb3b6,	// (0x0003a7cd) popup_find_window_ParamLimits

0xb5cb,	// (0x0003a9e2) popup_note_image_window_ParamLimits

0x9b5c,	// (0x00038f73) list_double2_graphic_pane_vc_g1_ParamLimits

0x9b5c,	// (0x00038f73) list_double2_graphic_pane_vc_g1

0xa8ce,	// (0x00039ce5) list_double2_graphic_pane_vc_g2_ParamLimits

0xa8ce,	// (0x00039ce5) list_double2_graphic_pane_vc_g2

0xa8da,	// (0x00039cf1) list_double2_graphic_pane_vc_g3_ParamLimits

0xa8da,	// (0x00039cf1) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c9,	// (0x0003ebe0) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c9,	// (0x0003ebe0) list_double2_graphic_pane_vc_g

0x9b68,	// (0x00038f7f) list_double2_graphic_pane_vc_t1_ParamLimits

0x9b68,	// (0x00038f7f) list_double2_graphic_pane_vc_t1

0xa8ce,	// (0x00039ce5) list_single_heading_pane_vc_g1_ParamLimits

0xa8ce,	// (0x00039ce5) list_single_heading_pane_vc_g1

0xa8da,	// (0x00039cf1) list_single_heading_pane_vc_g2_ParamLimits

0xa8da,	// (0x00039cf1) list_single_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x0003e9ef) list_single_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x0003e9ef) list_single_heading_pane_vc_g

0x9b7e,	// (0x00038f95) list_single_heading_pane_vc_t1_ParamLimits

0x9b7e,	// (0x00038f95) list_single_heading_pane_vc_t1

0x9b94,	// (0x00038fab) list_single_heading_pane_vc_t2_ParamLimits

0x9b94,	// (0x00038fab) list_single_heading_pane_vc_t2

0x0001,

0xf7ea,	// (0x0003ec01) list_single_heading_pane_vc_t_ParamLimits

0xf7ea,	// (0x0003ec01) list_single_heading_pane_vc_t

0xe5f8,	// (0x0003da0f) list_setting_number_pane_vc_g1_ParamLimits

0xe5f8,	// (0x0003da0f) list_setting_number_pane_vc_g1

0xe604,	// (0x0003da1b) list_setting_number_pane_vc_g2_ParamLimits

0xe604,	// (0x0003da1b) list_setting_number_pane_vc_g2

0x0001,

0xf7ef,	// (0x0003ec06) list_setting_number_pane_vc_g_ParamLimits

0xf7ef,	// (0x0003ec06) list_setting_number_pane_vc_g

0x9bb0,	// (0x00038fc7) list_setting_number_pane_vc_t1_ParamLimits

0x9bb0,	// (0x00038fc7) list_setting_number_pane_vc_t1

0x9bc4,	// (0x00038fdb) list_setting_number_pane_vc_t2_ParamLimits

0x9bc4,	// (0x00038fdb) list_setting_number_pane_vc_t2

0x9bde,	// (0x00038ff5) list_setting_number_pane_vc_t3_ParamLimits

0x9bde,	// (0x00038ff5) list_setting_number_pane_vc_t3

0x0002,

0xf7f4,	// (0x0003ec0b) list_setting_number_pane_vc_t_ParamLimits

0xf7f4,	// (0x0003ec0b) list_setting_number_pane_vc_t

0x9c06,	// (0x0003901d) set_value_pane_vc_ParamLimits

0x9c06,	// (0x0003901d) set_value_pane_vc

0x69cf,	// (0x00035de6) list_double2_graphic_pane_vc_ParamLimits

0x69cf,	// (0x00035de6) list_double2_graphic_pane_vc

0xbb29,	// (0x0003af40) list_double2_large_graphic_pane_vc_ParamLimits

0xbb29,	// (0x0003af40) list_double2_large_graphic_pane_vc

0x69cf,	// (0x00035de6) list_double2_pane_vc_ParamLimits

0x69cf,	// (0x00035de6) list_double2_pane_vc

0x69cf,	// (0x00035de6) list_double_graphic_heading_pane_vc_ParamLimits

0x69cf,	// (0x00035de6) list_double_graphic_heading_pane_vc

0x69cf,	// (0x00035de6) list_double_graphic_pane_vc_ParamLimits

0x69cf,	// (0x00035de6) list_double_graphic_pane_vc

0x69cf,	// (0x00035de6) list_double_heading_pane_vc_ParamLimits

0x69cf,	// (0x00035de6) list_double_heading_pane_vc

0xbb29,	// (0x0003af40) list_double_large_graphic_pane_vc_ParamLimits

0xbb29,	// (0x0003af40) list_double_large_graphic_pane_vc

0x69cf,	// (0x00035de6) list_double_number_pane_vc_ParamLimits

0x69cf,	// (0x00035de6) list_double_number_pane_vc

0x69cf,	// (0x00035de6) list_double_pane_vc_ParamLimits

0x69cf,	// (0x00035de6) list_double_pane_vc

0x69cf,	// (0x00035de6) list_double_time_pane_vc_ParamLimits

0x69cf,	// (0x00035de6) list_double_time_pane_vc

0x69cf,	// (0x00035de6) list_setting_number_pane_vc_ParamLimits

0x69cf,	// (0x00035de6) list_setting_number_pane_vc

0x69cf,	// (0x00035de6) list_setting_pane_vc_ParamLimits

0x69cf,	// (0x00035de6) list_setting_pane_vc

0x69cf,	// (0x00035de6) list_single_graphic_heading_pane_vc_ParamLimits

0x69cf,	// (0x00035de6) list_single_graphic_heading_pane_vc

0x69cf,	// (0x00035de6) list_single_heading_pane_vc_ParamLimits

0x69cf,	// (0x00035de6) list_single_heading_pane_vc

0xbb3b,	// (0x0003af52) list_single_number_heading_pane_vc_ParamLimits

0xbb3b,	// (0x0003af52) list_single_number_heading_pane_vc

0x9b5c,	// (0x00038f73) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x9b5c,	// (0x00038f73) list_double_graphic_heading_pane_vc_g1

0xa8ce,	// (0x00039ce5) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xa8ce,	// (0x00039ce5) list_double_graphic_heading_pane_vc_g2

0xa8da,	// (0x00039cf1) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xa8da,	// (0x00039cf1) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c9,	// (0x0003ebe0) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x0003ebe0) list_double_graphic_heading_pane_vc_g

0x9caf,	// (0x000390c6) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x9caf,	// (0x000390c6) list_double_graphic_heading_pane_vc_t1

0x9ccb,	// (0x000390e2) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x9ccb,	// (0x000390e2) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f9,	// (0x0003ee10) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f9,	// (0x0003ee10) list_double_graphic_heading_pane_vc_t

0xe5f8,	// (0x0003da0f) list_setting_pane_vc_g1_ParamLimits

0xe5f8,	// (0x0003da0f) list_setting_pane_vc_g1

0xe604,	// (0x0003da1b) list_setting_pane_vc_g2_ParamLimits

0xe604,	// (0x0003da1b) list_setting_pane_vc_g2

0x0001,

0xf7ef,	// (0x0003ec06) list_setting_pane_vc_g_ParamLimits

0xf7ef,	// (0x0003ec06) list_setting_pane_vc_g

0x9ce3,	// (0x000390fa) list_setting_pane_vc_t1_ParamLimits

0x9ce3,	// (0x000390fa) list_setting_pane_vc_t1

0x9cfd,	// (0x00039114) list_setting_pane_vc_t2_ParamLimits

0x9cfd,	// (0x00039114) list_setting_pane_vc_t2

0x0001,

0xfa3c,	// (0x0003ee53) list_setting_pane_vc_t_ParamLimits

0xfa3c,	// (0x0003ee53) list_setting_pane_vc_t

0x9c06,	// (0x0003901d) set_value_pane_cp_vc_ParamLimits

0x9c06,	// (0x0003901d) set_value_pane_cp_vc

0xa8ce,	// (0x00039ce5) list_single_number_heading_pane_vc_g1_ParamLimits

0xa8ce,	// (0x00039ce5) list_single_number_heading_pane_vc_g1

0xa8da,	// (0x00039cf1) list_single_number_heading_pane_vc_g2_ParamLimits

0xa8da,	// (0x00039cf1) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x0003e9ef) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x0003e9ef) list_single_number_heading_pane_vc_g

0x9b7e,	// (0x00038f95) list_single_number_heading_pane_vc_t1_ParamLimits

0x9b7e,	// (0x00038f95) list_single_number_heading_pane_vc_t1

0x9d15,	// (0x0003912c) list_single_number_heading_pane_vc_t2_ParamLimits

0x9d15,	// (0x0003912c) list_single_number_heading_pane_vc_t2

0x9417,	// (0x0003882e) list_single_number_heading_pane_vc_t3_ParamLimits

0x9417,	// (0x0003882e) list_single_number_heading_pane_vc_t3

0x0002,

0xfa41,	// (0x0003ee58) list_single_number_heading_pane_vc_t_ParamLimits

0xfa41,	// (0x0003ee58) list_single_number_heading_pane_vc_t

0x9b5c,	// (0x00038f73) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x9b5c,	// (0x00038f73) list_single_graphic_heading_pane_vc_g1

0xa8ce,	// (0x00039ce5) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xa8ce,	// (0x00039ce5) list_single_graphic_heading_pane_vc_g4

0xa8da,	// (0x00039cf1) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xa8da,	// (0x00039cf1) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c9,	// (0x0003ebe0) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x0003ebe0) list_single_graphic_heading_pane_vc_g

0x9b7e,	// (0x00038f95) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x9b7e,	// (0x00038f95) list_single_graphic_heading_pane_vc_t1

0x9d29,	// (0x00039140) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x9d29,	// (0x00039140) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa48,	// (0x0003ee5f) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa48,	// (0x0003ee5f) list_single_graphic_heading_pane_vc_t

0xa8ce,	// (0x00039ce5) list_double2_pane_vc_g1_ParamLimits

0xa8ce,	// (0x00039ce5) list_double2_pane_vc_g1

0xa8da,	// (0x00039cf1) list_double2_pane_vc_g2_ParamLimits

0xa8da,	// (0x00039cf1) list_double2_pane_vc_g2

0x0001,

0xf5d8,	// (0x0003e9ef) list_double2_pane_vc_g_ParamLimits

0xf5d8,	// (0x0003e9ef) list_double2_pane_vc_g

0x9c99,	// (0x000390b0) list_double2_pane_vc_t1_ParamLimits

0x9c99,	// (0x000390b0) list_double2_pane_vc_t1

0xbd12,	// (0x0003b129) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xbd12,	// (0x0003b129) list_double2_large_graphic_pane_vc_g1

0xbd1e,	// (0x0003b135) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xbd1e,	// (0x0003b135) list_double2_large_graphic_pane_vc_g2

0xbd2a,	// (0x0003b141) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xbd2a,	// (0x0003b141) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa4d,	// (0x0003ee64) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa4d,	// (0x0003ee64) list_double2_large_graphic_pane_vc_g

0x9d3d,	// (0x00039154) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x9d3d,	// (0x00039154) list_double2_large_graphic_pane_vc_t1

0x9d53,	// (0x0003916a) list_double_time_pane_vc_g1_ParamLimits

0x9d53,	// (0x0003916a) list_double_time_pane_vc_g1

0x9d5f,	// (0x00039176) list_double_time_pane_vc_g2_ParamLimits

0x9d5f,	// (0x00039176) list_double_time_pane_vc_g2

0x0001,

0xfa54,	// (0x0003ee6b) list_double_time_pane_vc_g_ParamLimits

0xfa54,	// (0x0003ee6b) list_double_time_pane_vc_g

0x9d6b,	// (0x00039182) list_double_time_pane_vc_t1_ParamLimits

0x9d6b,	// (0x00039182) list_double_time_pane_vc_t1

0x9d8f,	// (0x000391a6) list_double_time_pane_vc_t2_ParamLimits

0x9d8f,	// (0x000391a6) list_double_time_pane_vc_t2

0x9dd9,	// (0x000391f0) list_double_time_pane_vc_t3_ParamLimits

0x9dd9,	// (0x000391f0) list_double_time_pane_vc_t3

0x9deb,	// (0x00039202) list_double_time_pane_vc_t4_ParamLimits

0x9deb,	// (0x00039202) list_double_time_pane_vc_t4

0x0003,

0xfa59,	// (0x0003ee70) list_double_time_pane_vc_t_ParamLimits

0xfa59,	// (0x0003ee70) list_double_time_pane_vc_t

0xa8ce,	// (0x00039ce5) list_double_pane_vc_g1_ParamLimits

0xa8ce,	// (0x00039ce5) list_double_pane_vc_g1

0xa8da,	// (0x00039cf1) list_double_pane_vc_g2_ParamLimits

0xa8da,	// (0x00039cf1) list_double_pane_vc_g2

0x0001,

0xf5d8,	// (0x0003e9ef) list_double_pane_vc_g_ParamLimits

0xf5d8,	// (0x0003e9ef) list_double_pane_vc_g

0x9dff,	// (0x00039216) list_double_pane_vc_t1_ParamLimits

0x9dff,	// (0x00039216) list_double_pane_vc_t1

0x9e13,	// (0x0003922a) list_double_pane_vc_t2_ParamLimits

0x9e13,	// (0x0003922a) list_double_pane_vc_t2

0x0001,

0xfa62,	// (0x0003ee79) list_double_pane_vc_t_ParamLimits

0xfa62,	// (0x0003ee79) list_double_pane_vc_t

0xa8ce,	// (0x00039ce5) list_double_number_pane_vc_g1_ParamLimits

0xa8ce,	// (0x00039ce5) list_double_number_pane_vc_g1

0xa8da,	// (0x00039cf1) list_double_number_pane_vc_g2_ParamLimits

0xa8da,	// (0x00039cf1) list_double_number_pane_vc_g2

0x0001,

0xf5d8,	// (0x0003e9ef) list_double_number_pane_vc_g_ParamLimits

0xf5d8,	// (0x0003e9ef) list_double_number_pane_vc_g

0x9e2b,	// (0x00039242) list_double_number_pane_vc_t1_ParamLimits

0x9e2b,	// (0x00039242) list_double_number_pane_vc_t1

0x9e3d,	// (0x00039254) list_double_number_pane_vc_t2_ParamLimits

0x9e3d,	// (0x00039254) list_double_number_pane_vc_t2

0x9e13,	// (0x0003922a) list_double_number_pane_vc_t3_ParamLimits

0x9e13,	// (0x0003922a) list_double_number_pane_vc_t3

0x0002,

0xfa67,	// (0x0003ee7e) list_double_number_pane_vc_t_ParamLimits

0xfa67,	// (0x0003ee7e) list_double_number_pane_vc_t

0xbd36,	// (0x0003b14d) list_double_large_graphic_pane_vc_g1_ParamLimits

0xbd36,	// (0x0003b14d) list_double_large_graphic_pane_vc_g1

0xbd42,	// (0x0003b159) list_double_large_graphic_pane_vc_g2_ParamLimits

0xbd42,	// (0x0003b159) list_double_large_graphic_pane_vc_g2

0xbd2a,	// (0x0003b141) list_double_large_graphic_pane_vc_g3_ParamLimits

0xbd2a,	// (0x0003b141) list_double_large_graphic_pane_vc_g3

0x9e51,	// (0x00039268) list_double_large_graphic_pane_vc_g4_ParamLimits

0x9e51,	// (0x00039268) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6e,	// (0x0003ee85) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6e,	// (0x0003ee85) list_double_large_graphic_pane_vc_g

0x9e5d,	// (0x00039274) list_double_large_graphic_pane_vc_t1_ParamLimits

0x9e5d,	// (0x00039274) list_double_large_graphic_pane_vc_t1

0x9e71,	// (0x00039288) list_double_large_graphic_pane_vc_t2_ParamLimits

0x9e71,	// (0x00039288) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa77,	// (0x0003ee8e) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa77,	// (0x0003ee8e) list_double_large_graphic_pane_vc_t

0xa8ce,	// (0x00039ce5) list_double_heading_pane_vc_g1_ParamLimits

0xa8ce,	// (0x00039ce5) list_double_heading_pane_vc_g1

0xa8da,	// (0x00039cf1) list_double_heading_pane_vc_g2_ParamLimits

0xa8da,	// (0x00039cf1) list_double_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x0003e9ef) list_double_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x0003e9ef) list_double_heading_pane_vc_g

0x9e8a,	// (0x000392a1) list_double_heading_pane_vc_t1_ParamLimits

0x9e8a,	// (0x000392a1) list_double_heading_pane_vc_t1

0x9b7e,	// (0x00038f95) list_double_heading_pane_vc_t2_ParamLimits

0x9b7e,	// (0x00038f95) list_double_heading_pane_vc_t2

0x0001,

0xfa7c,	// (0x0003ee93) list_double_heading_pane_vc_t_ParamLimits

0xfa7c,	// (0x0003ee93) list_double_heading_pane_vc_t

0x9b5c,	// (0x00038f73) list_double_graphic_pane_vc_g1_ParamLimits

0x9b5c,	// (0x00038f73) list_double_graphic_pane_vc_g1

0x9e9e,	// (0x000392b5) list_double_graphic_pane_vc_g2_ParamLimits

0x9e9e,	// (0x000392b5) list_double_graphic_pane_vc_g2

0x6e49,	// (0x00036260) list_double_graphic_pane_vc_g3_ParamLimits

0x6e49,	// (0x00036260) list_double_graphic_pane_vc_g3

0x0002,

0xfa81,	// (0x0003ee98) list_double_graphic_pane_vc_g_ParamLimits

0xfa81,	// (0x0003ee98) list_double_graphic_pane_vc_g

0x9ead,	// (0x000392c4) list_double_graphic_pane_vc_t1_ParamLimits

0x9ead,	// (0x000392c4) list_double_graphic_pane_vc_t1

0x9ec1,	// (0x000392d8) list_double_graphic_pane_vc_t2_ParamLimits

0x9ec1,	// (0x000392d8) list_double_graphic_pane_vc_t2

0x0001,

0xfa88,	// (0x0003ee9f) list_double_graphic_pane_vc_t_ParamLimits

0xfa88,	// (0x0003ee9f) list_double_graphic_pane_vc_t

0xa1f0,	// (0x00039607) aid_size_cell_fastswap

0xa1f8,	// (0x0003960f) aid_size_cell_touch_ParamLimits

0xa1f8,	// (0x0003960f) aid_size_cell_touch

0xa453,	// (0x0003986a) popup_fast_swap_wide_window_ParamLimits

0xa453,	// (0x0003986a) popup_fast_swap_wide_window

0xa559,	// (0x00039970) touch_pane_ParamLimits

0xa559,	// (0x00039970) touch_pane

0x4976,	// (0x00033d8d) button_value_adjust_pane_cp2

0x9818,	// (0x00038c2f) button_value_adjust_pane_cp4

0x983a,	// (0x00038c51) form_field_data_pane_cp2

0x9859,	// (0x00038c70) form_field_data_wide_pane_cp2

0x4cca,	// (0x000340e1) bg_scroll_pane_ParamLimits

0xac38,	// (0x0003a04f) scroll_handle_pane_ParamLimits

0xac4c,	// (0x0003a063) scroll_sc2_down_pane_ParamLimits

0xac4c,	// (0x0003a063) scroll_sc2_down_pane

0x4cfb,	// (0x00034112) scroll_sc2_up_pane_ParamLimits

0x4cfb,	// (0x00034112) scroll_sc2_up_pane

0xd79e,	// (0x0003cbb5) grid_wheel_folder_pane_g1_ParamLimits

0xd79e,	// (0x0003cbb5) grid_wheel_folder_pane_g1

0xaee9,	// (0x0003a300) clock_nsta_pane_cp2_ParamLimits

0xaee9,	// (0x0003a300) clock_nsta_pane_cp2

0xa9e9,	// (0x00039e00) listscroll_midp_pane_ParamLimits

0xaf71,	// (0x0003a388) midp_canvas_pane

0x55dc,	// (0x000349f3) nsta_clock_indic_pane

0x560c,	// (0x00034a23) listscroll_form_pane_vc

0x5614,	// (0x00034a2b) listscroll_set_pane_vc_ParamLimits

0x5614,	// (0x00034a2b) listscroll_set_pane_vc

0xcf6d,	// (0x0003c384) clock_nsta_pane

0xcf7a,	// (0x0003c391) indicator_nsta_pane

0x5754,	// (0x00034b6b) bg_popup_sub_pane_cp2_ParamLimits

0x5768,	// (0x00034b7f) find_pane_cp2_ParamLimits

0x5768,	// (0x00034b7f) find_pane_cp2

0x577e,	// (0x00034b95) grid_toobar_pane_ParamLimits

0x585e,	// (0x00034c75) list_form_gen_pane_vc_ParamLimits

0x585e,	// (0x00034c75) list_form_gen_pane_vc

0x5874,	// (0x00034c8b) scroll_pane_cp8_vc_ParamLimits

0x5874,	// (0x00034c8b) scroll_pane_cp8_vc

0x58c4,	// (0x00034cdb) data_form_wide_pane_vc_ParamLimits

0x58c4,	// (0x00034cdb) data_form_wide_pane_vc

0x58d0,	// (0x00034ce7) form_field_data_wide_pane_vc_g1

0x58d8,	// (0x00034cef) form_field_data_wide_pane_vc_t1_ParamLimits

0x58d8,	// (0x00034cef) form_field_data_wide_pane_vc_t1

0x498a,	// (0x00033da1) input_focus_pane_cp6_vc_ParamLimits

0x498a,	// (0x00033da1) input_focus_pane_cp6_vc

0xd2d3,	// (0x0003c6ea) list_midp_pane_ParamLimits

0xd2df,	// (0x0003c6f6) scroll_pane_cp16_ParamLimits

0xd2df,	// (0x0003c6f6) scroll_pane_cp16

0x5b6e,	// (0x00034f85) button_value_adjust_pane_ParamLimits

0x5b6e,	// (0x00034f85) button_value_adjust_pane

0xd454,	// (0x0003c86b) button_value_adjust_pane_cp6_ParamLimits

0xd454,	// (0x0003c86b) button_value_adjust_pane_cp6

0xd57a,	// (0x0003c991) settings_code_pane_cp_ParamLimits

0xd57a,	// (0x0003c991) settings_code_pane_cp

0x22d2,	// (0x000316e9) cell_touch_pane_g1

0x22d2,	// (0x000316e9) cell_touch_pane_g2

0x0001,

0xf70e,	// (0x0003eb25) cell_touch_pane_g

0xd667,	// (0x0003ca7e) cell_touch_pane_cp_ParamLimits

0xd667,	// (0x0003ca7e) cell_touch_pane_cp

0xd677,	// (0x0003ca8e) cell_touch_pane_ParamLimits

0xd677,	// (0x0003ca8e) cell_touch_pane

0x22d2,	// (0x000316e9) scroll_sc2_down_pane_g1

0x22d2,	// (0x000316e9) scroll_sc2_up_pane_g1

0x22dc,	// (0x000316f3) bg_set_opt_pane_cp4_vc

0x6e3d,	// (0x00036254) list_set_graphic_pane_vc_g1_ParamLimits

0x6e3d,	// (0x00036254) list_set_graphic_pane_vc_g1

0x6e49,	// (0x00036260) list_set_graphic_pane_vc_g2_ParamLimits

0x6e49,	// (0x00036260) list_set_graphic_pane_vc_g2

0x0001,

0xf9fe,	// (0x0003ee15) list_set_graphic_pane_vc_g_ParamLimits

0xf9fe,	// (0x0003ee15) list_set_graphic_pane_vc_g

0x6e55,	// (0x0003626c) text_primary_small_cp13_vc_ParamLimits

0x6e55,	// (0x0003626c) text_primary_small_cp13_vc

0x68b5,	// (0x00035ccc) list_set_graphic_pane_vc_ParamLimits

0x68b5,	// (0x00035ccc) list_set_graphic_pane_vc

0x22dc,	// (0x000316f3) input_focus_pane_cp2_vc

0x22d2,	// (0x000316e9) setting_code_pane_vc_g1

0x235f,	// (0x00031776) setting_code_pane_vc_t1

0x6e6d,	// (0x00036284) set_text_pane_vc_t1_ParamLimits

0x6e6d,	// (0x00036284) set_text_pane_vc_t1

0x22dc,	// (0x000316f3) input_focus_pane_cp1_vc

0x6e8a,	// (0x000362a1) list_set_text_pane_vc

0x22d2,	// (0x000316e9) setting_text_pane_vc_g1

0x22dc,	// (0x000316f3) bg_set_opt_pane_cp2_vc

0x2356,	// (0x0003176d) setting_slider_graphic_pane_vc_g1

0x6e94,	// (0x000362ab) setting_slider_graphic_pane_vc_t1

0x6ea4,	// (0x000362bb) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa03,	// (0x0003ee1a) setting_slider_graphic_pane_vc_t

0x6eb4,	// (0x000362cb) slider_set_pane_cp_vc

0x6ebc,	// (0x000362d3) slider_set_pane_vc_g1

0x6ec5,	// (0x000362dc) slider_set_pane_vc_g2

0x0006,

0xfa08,	// (0x0003ee1f) slider_set_pane_vc_g

0x49d9,	// (0x00033df0) set_opt_bg_pane_g1_copy1

0x49e1,	// (0x00033df8) set_opt_bg_pane_g2_copy1

0x6ef1,	// (0x00036308) set_opt_bg_pane_g3_copy1

0x49f1,	// (0x00033e08) set_opt_bg_pane_g4_copy1

0x49f9,	// (0x00033e10) set_opt_bg_pane_g5_copy1

0x4a01,	// (0x00033e18) set_opt_bg_pane_g6_copy1

0x6ef9,	// (0x00036310) set_opt_bg_pane_g7_copy1

0x6f03,	// (0x0003631a) set_opt_bg_pane_g8_copy1

0x6f0b,	// (0x00036322) set_opt_bg_pane_g9_copy1

0x22dc,	// (0x000316f3) bg_set_opt_pane_cp_vc

0x6f13,	// (0x0003632a) setting_slider_pane_vc_t1

0x6f22,	// (0x00036339) setting_slider_pane_vc_t2

0x6f32,	// (0x00036349) setting_slider_pane_vc_t3

0x0002,

0xfa17,	// (0x0003ee2e) setting_slider_pane_vc_t

0x6f42,	// (0x00036359) slider_set_pane_vc

0xb929,	// (0x0003ad40) volume_set_pane_vc_g1

0xbcca,	// (0x0003b0e1) volume_set_pane_vc_g2

0xbcd3,	// (0x0003b0ea) volume_set_pane_vc_g3

0xbcdc,	// (0x0003b0f3) volume_set_pane_vc_g4

0xbce5,	// (0x0003b0fc) volume_set_pane_vc_g5

0xbcee,	// (0x0003b105) volume_set_pane_vc_g6

0xb956,	// (0x0003ad6d) volume_set_pane_vc_g7

0xbcf7,	// (0x0003b10e) volume_set_pane_vc_g8

0xbd00,	// (0x0003b117) volume_set_pane_vc_g9

0xbd09,	// (0x0003b120) volume_set_pane_vc_g10

0x0009,

0xfa1e,	// (0x0003ee35) volume_set_pane_vc_g

0x6f4a,	// (0x00036361) volume_set_pane_vc

0x6f52,	// (0x00036369) button_value_adjust_pane_cp1_vc

0x6f5c,	// (0x00036373) list_highlight_pane_cp2_vc

0x6f65,	// (0x0003637c) list_set_pane_vc_ParamLimits

0x6f65,	// (0x0003637c) list_set_pane_vc

0x6fc3,	// (0x000363da) main_pane_set_vc_t1_ParamLimits

0x6fc3,	// (0x000363da) main_pane_set_vc_t1

0x6fd8,	// (0x000363ef) main_pane_set_vc_t2_ParamLimits

0x6fd8,	// (0x000363ef) main_pane_set_vc_t2

0x6fea,	// (0x00036401) main_pane_set_vc_t3_ParamLimits

0x6fea,	// (0x00036401) main_pane_set_vc_t3

0x6ffc,	// (0x00036413) main_pane_set_vc_t4_ParamLimits

0x6ffc,	// (0x00036413) main_pane_set_vc_t4

0x0003,

0xfa33,	// (0x0003ee4a) main_pane_set_vc_t_ParamLimits

0xfa33,	// (0x0003ee4a) main_pane_set_vc_t

0x700e,	// (0x00036425) setting_code_pane_vc_ParamLimits

0x700e,	// (0x00036425) setting_code_pane_vc

0x701d,	// (0x00036434) setting_slider_graphic_pane_vc

0x701d,	// (0x00036434) setting_slider_pane_vc

0x701d,	// (0x00036434) setting_text_pane_vc

0x701d,	// (0x00036434) setting_volume_pane_vc

0x7025,	// (0x0003643c) scroll_pane_cp121_vc

0x4964,	// (0x00033d7b) set_content_pane_vc

0x702d,	// (0x00036444) button_value_adjust_pane_g1

0x7036,	// (0x0003644d) button_value_adjust_pane_g2

0x0001,

0xfa8d,	// (0x0003eea4) button_value_adjust_pane_g

0x703f,	// (0x00036456) form_field_slider_wide_pane_vc_t1_ParamLimits

0x703f,	// (0x00036456) form_field_slider_wide_pane_vc_t1

0x7053,	// (0x0003646a) form_field_slider_wide_pane_vc_t2_ParamLimits

0x7053,	// (0x0003646a) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa92,	// (0x0003eea9) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa92,	// (0x0003eea9) form_field_slider_wide_pane_vc_t

0x232a,	// (0x00031741) input_focus_pane_cp10_vc_ParamLimits

0x232a,	// (0x00031741) input_focus_pane_cp10_vc

0x707f,	// (0x00036496) slider_cont_pane_cp1_vc_ParamLimits

0x707f,	// (0x00036496) slider_cont_pane_cp1_vc

0x708f,	// (0x000364a6) slider_form_pane_g1_cp2

0x6ec5,	// (0x000362dc) slider_form_pane_g2_cp2

0x70bc,	// (0x000364d3) form_field_slider_pane_vc_t3

0x70ca,	// (0x000364e1) form_field_slider_pane_vc_t4

0x70d8,	// (0x000364ef) slider_form_pane_vc_ParamLimits

0x70d8,	// (0x000364ef) slider_form_pane_vc

0x70e5,	// (0x000364fc) form_field_slider_pane_vc_t1_ParamLimits

0x70e5,	// (0x000364fc) form_field_slider_pane_vc_t1

0x7053,	// (0x0003646a) form_field_slider_pane_vc_t2_ParamLimits

0x7053,	// (0x0003646a) form_field_slider_pane_vc_t2

0x0001,

0xfaa4,	// (0x0003eebb) form_field_slider_pane_vc_t_ParamLimits

0xfaa4,	// (0x0003eebb) form_field_slider_pane_vc_t

0x232a,	// (0x00031741) input_focus_pane_cp9_vc_ParamLimits

0x232a,	// (0x00031741) input_focus_pane_cp9_vc

0x7101,	// (0x00036518) slider_cont_pane_vc_ParamLimits

0x7101,	// (0x00036518) slider_cont_pane_vc

0x7113,	// (0x0003652a) list_form_graphic_pane_cp_vc_ParamLimits

0x7113,	// (0x0003652a) list_form_graphic_pane_cp_vc

0x58d0,	// (0x00034ce7) form_field_popup_wide_pane_vc_g1

0x7128,	// (0x0003653f) form_field_popup_wide_pane_vc_t1_ParamLimits

0x7128,	// (0x0003653f) form_field_popup_wide_pane_vc_t1

0x498a,	// (0x00033da1) input_focus_pane_cp8_vc_ParamLimits

0x498a,	// (0x00033da1) input_focus_pane_cp8_vc

0x716d,	// (0x00036584) list_form_wide_pane_vc_ParamLimits

0x716d,	// (0x00036584) list_form_wide_pane_vc

0x7179,	// (0x00036590) list_form_graphic_pane_vc_g1

0x7181,	// (0x00036598) list_form_graphic_pane_vc_t1_ParamLimits

0x7181,	// (0x00036598) list_form_graphic_pane_vc_t1

0x2348,	// (0x0003175f) list_highlight_pane_cp5_vc_ParamLimits

0x2348,	// (0x0003175f) list_highlight_pane_cp5_vc

0x719d,	// (0x000365b4) list_form_graphic_pane_vc_ParamLimits

0x719d,	// (0x000365b4) list_form_graphic_pane_vc

0x58d0,	// (0x00034ce7) form_field_popup_pane_vc_g1

0x71b3,	// (0x000365ca) form_field_popup_pane_vc_t1_ParamLimits

0x71b3,	// (0x000365ca) form_field_popup_pane_vc_t1

0x498a,	// (0x00033da1) input_focus_pane_cp7_vc_ParamLimits

0x498a,	// (0x00033da1) input_focus_pane_cp7_vc

0x71ca,	// (0x000365e1) list_form_pane_vc_ParamLimits

0x71ca,	// (0x000365e1) list_form_pane_vc

0x71d6,	// (0x000365ed) data_form_pane_vc_t1_ParamLimits

0x71d6,	// (0x000365ed) data_form_pane_vc_t1

0x49d9,	// (0x00033df0) input_focus_pane_vc_g1

0x49e1,	// (0x00033df8) input_focus_pane_vc_g2

0x49e9,	// (0x00033e00) input_focus_pane_vc_g3

0x49f1,	// (0x00033e08) input_focus_pane_vc_g4

0x49f9,	// (0x00033e10) input_focus_pane_vc_g5

0x4a01,	// (0x00033e18) input_focus_pane_vc_g6

0x4a09,	// (0x00033e20) input_focus_pane_vc_g7

0x4a11,	// (0x00033e28) input_focus_pane_vc_g8

0x4a19,	// (0x00033e30) input_focus_pane_vc_g9

0x22d2,	// (0x000316e9) input_focus_pane_vc_g10

0x0009,

0xf697,	// (0x0003eaae) input_focus_pane_vc_g

0x58c4,	// (0x00034cdb) data_form_pane_vc_ParamLimits

0x58c4,	// (0x00034cdb) data_form_pane_vc

0x58d0,	// (0x00034ce7) form_field_data_pane_vc_g1

0x71f1,	// (0x00036608) form_field_data_pane_vc_t1_ParamLimits

0x71f1,	// (0x00036608) form_field_data_pane_vc_t1

0x498a,	// (0x00033da1) input_focus_pane_vc_ParamLimits

0x498a,	// (0x00033da1) input_focus_pane_vc

0x720b,	// (0x00036622) button_value_adjust_pane_cp3_vc

0x7213,	// (0x0003662a) button_value_adjust_pane_cp5_vc

0x721b,	// (0x00036632) form_field_data_pane_vc_ParamLimits

0x721b,	// (0x00036632) form_field_data_pane_vc

0x7232,	// (0x00036649) form_field_data_pane_vc_cp2

0x723a,	// (0x00036651) form_field_data_wide_pane_vc_ParamLimits

0x723a,	// (0x00036651) form_field_data_wide_pane_vc

0x7250,	// (0x00036667) form_field_data_wide_pane_vc_cp2

0x7258,	// (0x0003666f) form_field_popup_pane_vc_ParamLimits

0x7258,	// (0x0003666f) form_field_popup_pane_vc

0x726f,	// (0x00036686) form_field_popup_wide_pane_vc_ParamLimits

0x726f,	// (0x00036686) form_field_popup_wide_pane_vc

0x7285,	// (0x0003669c) form_field_slider_pane_vc_ParamLimits

0x7285,	// (0x0003669c) form_field_slider_pane_vc

0x7298,	// (0x000366af) form_field_slider_wide_pane_vc_ParamLimits

0x7298,	// (0x000366af) form_field_slider_wide_pane_vc

0xd688,	// (0x0003ca9f) grid_touch_1_pane_ParamLimits

0xd688,	// (0x0003ca9f) grid_touch_1_pane

0xd694,	// (0x0003caab) grid_touch_2_pane_ParamLimits

0xd694,	// (0x0003caab) grid_touch_2_pane

0x55ce,	// (0x000349e5) touch_pane_g1_ParamLimits

0x55ce,	// (0x000349e5) touch_pane_g1

0x72b9,	// (0x000366d0) cell_app_pane_cp_wide_ParamLimits

0x72b9,	// (0x000366d0) cell_app_pane_cp_wide

0x72ca,	// (0x000366e1) grid_popup_fast_wide_pane_ParamLimits

0x72ca,	// (0x000366e1) grid_popup_fast_wide_pane

0x72de,	// (0x000366f5) scroll_pane_cp19_ParamLimits

0x72de,	// (0x000366f5) scroll_pane_cp19

0x22dc,	// (0x000316f3) bg_popup_window_pane_cp20

0x72f2,	// (0x00036709) listscroll_popup_fast_wide_pane

0x2348,	// (0x0003175f) grid_indicator_nsta_pane

0x72fa,	// (0x00036711) clock_nsta_pane_g1

0x7303,	// (0x0003671a) clock_nsta_pane_t1

0xd6ac,	// (0x0003cac3) cell_indicator_nsta_pane_ParamLimits

0xd6ac,	// (0x0003cac3) cell_indicator_nsta_pane

0x72ab,	// (0x000366c2) cell_indicator_nsta_pane_g1

0xd6e4,	// (0x0003cafb) cell_indicator_nsta_pane_g2

0x0001,

0xfab5,	// (0x0003eecc) cell_indicator_nsta_pane_g

0x731f,	// (0x00036736) clock_nsta_pane_cp

0x7327,	// (0x0003673e) indicator_nsta_pane_cp

0x732f,	// (0x00036746) nsta_clock_indic_pane_g1

0x2384,	// (0x0003179b) grid_indicator_pane

0x4df0,	// (0x00034207) scroll_pane_cp29

0xae38,	// (0x0003a24f) indicator_nsta_pane_cp2_ParamLimits

0xae38,	// (0x0003a24f) indicator_nsta_pane_cp2

0x2348,	// (0x0003175f) main_apps_wheel_pane

0x5a11,	// (0x00034e28) form_midp_field_text_pane_ParamLimits

0x5b40,	// (0x00034f57) scroll_bar_cp050_ParamLimits

0x7390,	// (0x000367a7) cell_indicator_pane_ParamLimits

0x7390,	// (0x000367a7) cell_indicator_pane

0x73ab,	// (0x000367c2) cell_indicator_pane_g1

0xd6fa,	// (0x0003cb11) grid_wheel_folder_pane_ParamLimits

0xd6fa,	// (0x0003cb11) grid_wheel_folder_pane

0xd710,	// (0x0003cb27) list_wheel_apps_pane_ParamLimits

0xd710,	// (0x0003cb27) list_wheel_apps_pane

0xd721,	// (0x0003cb38) main_apps_wheel_pane_g1_ParamLimits

0xd721,	// (0x0003cb38) main_apps_wheel_pane_g1

0xd735,	// (0x0003cb4c) main_apps_wheel_pane_g2_ParamLimits

0xd735,	// (0x0003cb4c) main_apps_wheel_pane_g2

0x0001,

0xfad1,	// (0x0003eee8) main_apps_wheel_pane_g_ParamLimits

0xfad1,	// (0x0003eee8) main_apps_wheel_pane_g

0xd74d,	// (0x0003cb64) main_apps_wheel_pane_t1_ParamLimits

0xd74d,	// (0x0003cb64) main_apps_wheel_pane_t1

0xd770,	// (0x0003cb87) list_wheel_apps_pane_g1

0xd778,	// (0x0003cb8f) list_wheel_apps_pane_g2

0xd780,	// (0x0003cb97) list_wheel_apps_pane_g3

0xd78a,	// (0x0003cba1) list_wheel_apps_pane_g4

0xd794,	// (0x0003cbab) list_wheel_apps_pane_g5

0x0004,

0xfad6,	// (0x0003eeed) list_wheel_apps_pane_g

0x5254,	// (0x0003466b) navi_icon_text_pane

0xceb5,	// (0x0003c2cc) aid_fill_nsta

0x73b5,	// (0x000367cc) navi_icon_text_pane_g1

0x73c1,	// (0x000367d8) navi_icon_text_pane_t1

0x50f6,	// (0x0003450d) list_set_graphic_pane_t1_ParamLimits

0x50f6,	// (0x0003450d) list_set_graphic_pane_t1

0x6258,	// (0x0003566f) popup_midp_note_alarm_window_t6_ParamLimits

0x6258,	// (0x0003566f) popup_midp_note_alarm_window_t6

0x626a,	// (0x00035681) popup_midp_note_alarm_window_t7_ParamLimits

0x626a,	// (0x00035681) popup_midp_note_alarm_window_t7

0x627c,	// (0x00035693) popup_midp_note_alarm_window_t8_ParamLimits

0x627c,	// (0x00035693) popup_midp_note_alarm_window_t8

0x628e,	// (0x000356a5) popup_midp_note_alarm_window_t9_ParamLimits

0x628e,	// (0x000356a5) popup_midp_note_alarm_window_t9

0x62a0,	// (0x000356b7) popup_midp_note_alarm_window_t10_ParamLimits

0x62a0,	// (0x000356b7) popup_midp_note_alarm_window_t10

0x62b2,	// (0x000356c9) popup_midp_note_alarm_window_t11_ParamLimits

0x62b2,	// (0x000356c9) popup_midp_note_alarm_window_t11

0x62c4,	// (0x000356db) scroll_pane_cp17_ParamLimits

0x62c4,	// (0x000356db) scroll_pane_cp17

0xb929,	// (0x0003ad40) volume_small_pane_cp_g1

0xbd51,	// (0x0003b168) volume_small_pane_cp_g2

0xbd5a,	// (0x0003b171) volume_small_pane_cp_g3

0xb93b,	// (0x0003ad52) volume_small_pane_cp_g4

0xbd63,	// (0x0003b17a) volume_small_pane_cp_g5

0xbce5,	// (0x0003b0fc) volume_small_pane_cp_g6

0xb94d,	// (0x0003ad64) volume_small_pane_cp_g7

0xbd6c,	// (0x0003b183) volume_small_pane_cp_g8

0xbd75,	// (0x0003b18c) volume_small_pane_cp_g9

0xb95f,	// (0x0003ad76) volume_small_pane_cp_g10

0x53f2,	// (0x00034809) midp_ticker_pane_g1_ParamLimits

0x53fe,	// (0x00034815) midp_ticker_pane_g2_ParamLimits

0xf763,	// (0x0003eb7a) midp_ticker_pane_g_ParamLimits

0x540a,	// (0x00034821) midp_ticker_pane_t1_ParamLimits

0xcecb,	// (0x0003c2e2) aid_fill_nsta_2

0x5b2c,	// (0x00034f43) list_form2_midp_pane

0x699e,	// (0x00035db5) midp_editing_number_pane_ParamLimits

0x69ad,	// (0x00035dc4) midp_ticker_pane_ParamLimits

0x73d3,	// (0x000367ea) form2_midp_field_pane

0x73db,	// (0x000367f2) scroll_pane_cp51

0x73fb,	// (0x00036812) form2_midp_button_pane_ParamLimits

0x73fb,	// (0x00036812) form2_midp_button_pane

0x740d,	// (0x00036824) form2_midp_content_pane_ParamLimits

0x740d,	// (0x00036824) form2_midp_content_pane

0x7427,	// (0x0003683e) form2_midp_field_choice_group_pane

0x742f,	// (0x00036846) form2_midp_field_pane_g1

0x7437,	// (0x0003684e) form2_midp_field_pane_g2

0x743f,	// (0x00036856) form2_midp_field_pane_g3

0x7447,	// (0x0003685e) form2_midp_field_pane_g4

0x0003,

0xfafb,	// (0x0003ef12) form2_midp_field_pane_g

0x744f,	// (0x00036866) form2_midp_gauge_slider_pane

0x7457,	// (0x0003686e) form2_midp_gauge_wait_pane

0x745f,	// (0x00036876) form2_midp_image_pane_ParamLimits

0x745f,	// (0x00036876) form2_midp_image_pane

0x747a,	// (0x00036891) form2_midp_label_pane_ParamLimits

0x747a,	// (0x00036891) form2_midp_label_pane

0xd7d3,	// (0x0003cbea) form2_midp_label_pane_cp_ParamLimits

0xd7d3,	// (0x0003cbea) form2_midp_label_pane_cp

0x7493,	// (0x000368aa) form2_midp_string_pane_ParamLimits

0x7493,	// (0x000368aa) form2_midp_string_pane

0x9ed9,	// (0x000392f0) form2_midp_text_pane_ParamLimits

0x9ed9,	// (0x000392f0) form2_midp_text_pane

0x74a5,	// (0x000368bc) form2_midp_time_pane

0x74b5,	// (0x000368cc) input_focus_pane_cp51_ParamLimits

0x74b5,	// (0x000368cc) input_focus_pane_cp51

0x74cd,	// (0x000368e4) form2_midp_label_pane_t1_ParamLimits

0x74cd,	// (0x000368e4) form2_midp_label_pane_t1

0x9ef4,	// (0x0003930b) form2_mdip_text_pane_t1_ParamLimits

0x9ef4,	// (0x0003930b) form2_mdip_text_pane_t1

0x9f10,	// (0x00039327) form2_midp_time_pane_t1

0x7515,	// (0x0003692c) form2_midp_gauge_slider_pane_t1

0xd7f4,	// (0x0003cc0b) form2_midp_gauge_slider_pane_t2

0xd806,	// (0x0003cc1d) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb04,	// (0x0003ef1b) form2_midp_gauge_slider_pane_t

0x7527,	// (0x0003693e) form2_midp_slider_pane

0x7533,	// (0x0003694a) form2_midp_gauge_wait_pane_t1

0x7541,	// (0x00036958) form2_midp_wait_pane_ParamLimits

0x7541,	// (0x00036958) form2_midp_wait_pane

0xd818,	// (0x0003cc2f) list_single_2graphic_pane_cp4_ParamLimits

0xd818,	// (0x0003cc2f) list_single_2graphic_pane_cp4

0xd214,	// (0x0003c62b) list_single_midp_graphic_pane_cp_ParamLimits

0xd214,	// (0x0003c62b) list_single_midp_graphic_pane_cp

0x22dc,	// (0x000316f3) list_highlight_pane_cp20

0x756d,	// (0x00036984) list_single_2graphic_pane_g1_cp4

0x6d42,	// (0x00036159) list_single_2graphic_pane_g2_cp4

0x7575,	// (0x0003698c) list_single_2graphic_pane_t1_cp4

0x2348,	// (0x0003175f) list_highlight_pane_cp21

0x7584,	// (0x0003699b) list_single_midp_graphic_pane_g4_cp

0x7593,	// (0x000369aa) list_single_midp_graphic_pane_t1_cp

0xd846,	// (0x0003cc5d) form2_mdip_string_pane_t1_ParamLimits

0xd846,	// (0x0003cc5d) form2_mdip_string_pane_t1

0x22dc,	// (0x000316f3) bg_wml_button_pane_cp2

0x22d2,	// (0x000316e9) form2_midp_image_pane_g1

0xa93c,	// (0x00039d53) list_double_large_graphic_pane_g5_ParamLimits

0xa93c,	// (0x00039d53) list_double_large_graphic_pane_g5

0xa9e9,	// (0x00039e00) midp_form_pane_ParamLimits

0x2348,	// (0x0003175f) main_apps_wheel_pane_ParamLimits

0xb5f1,	// (0x0003aa08) popup_preview_window_ParamLimits

0xb5f1,	// (0x0003aa08) popup_preview_window

0xb7a8,	// (0x0003abbf) popup_touch_info_window_ParamLimits

0xb7a8,	// (0x0003abbf) popup_touch_info_window

0xb7c6,	// (0x0003abdd) popup_touch_menu_window_ParamLimits

0xb7c6,	// (0x0003abdd) popup_touch_menu_window

0x22c8,	// (0x000316df) bg_popup_sub_pane_cp6

0x75a8,	// (0x000369bf) list_touch_menu_pane

0x75b0,	// (0x000369c7) list_single_touch_menu_pane_ParamLimits

0x75b0,	// (0x000369c7) list_single_touch_menu_pane

0x75c4,	// (0x000369db) list_single_touch_menu_pane_t1

0x2348,	// (0x0003175f) bg_popup_sub_pane_cp7_ParamLimits

0x2348,	// (0x0003175f) bg_popup_sub_pane_cp7

0x75d2,	// (0x000369e9) heading_sub_pane

0x75da,	// (0x000369f1) list_touch_info_pane_ParamLimits

0x75da,	// (0x000369f1) list_touch_info_pane

0x75e9,	// (0x00036a00) list_single_touch_info_pane_ParamLimits

0x75e9,	// (0x00036a00) list_single_touch_info_pane

0x75fb,	// (0x00036a12) list_single_touch_info_pane_t1

0x7609,	// (0x00036a20) list_single_touch_info_pane_t2

0x0001,

0xfb12,	// (0x0003ef29) list_single_touch_info_pane_t

0x53c8,	// (0x000347df) bg_popup_heading_pane_cp

0x7617,	// (0x00036a2e) heading_sub_pane_t1

0x588a,	// (0x00034ca1) bg_popup_preview_window_pane_cp_ParamLimits

0x588a,	// (0x00034ca1) bg_popup_preview_window_pane_cp

0x75d2,	// (0x000369e9) heading_preview_pane

0x75da,	// (0x000369f1) list_preview_pane_ParamLimits

0x75da,	// (0x000369f1) list_preview_pane

0x7625,	// (0x00036a3c) popup_preview_window_g1

0x75e9,	// (0x00036a00) list_single_preview_pane_ParamLimits

0x75e9,	// (0x00036a00) list_single_preview_pane

0x762d,	// (0x00036a44) list_single_preview_pane_g1

0x7635,	// (0x00036a4c) list_single_preview_pane_t1

0x75fb,	// (0x00036a12) list_single_preview_pane_t2

0x0001,

0xfb17,	// (0x0003ef2e) list_single_preview_pane_t

0x7643,	// (0x00036a5a) bg_popup_heading_pane_cp2_ParamLimits

0x7643,	// (0x00036a5a) bg_popup_heading_pane_cp2

0x7659,	// (0x00036a70) heading_preview_pane_g1

0x7661,	// (0x00036a78) heading_preview_pane_t1_ParamLimits

0x7661,	// (0x00036a78) heading_preview_pane_t1

0x239b,	// (0x000317b2) soft_indicator_pane_t1_ParamLimits

0x2902,	// (0x00031d19) scroll_pane_ParamLimits

0x4cf2,	// (0x00034109) scroll_sc2_left_pane

0x4ce9,	// (0x00034100) scroll_sc2_right_pane

0x4d11,	// (0x00034128) scroll_bg_pane_g1_ParamLimits

0x4d26,	// (0x0003413d) scroll_bg_pane_g2_ParamLimits

0x4d3e,	// (0x00034155) scroll_bg_pane_g3_ParamLimits

0xf6ee,	// (0x0003eb05) scroll_bg_pane_g_ParamLimits

0x4d11,	// (0x00034128) scroll_handle_pane_g1_ParamLimits

0x4d60,	// (0x00034177) scroll_handle_pane_g2_ParamLimits

0x4d3e,	// (0x00034155) scroll_handle_pane_g3_ParamLimits

0xf6f5,	// (0x0003eb0c) scroll_handle_pane_g_ParamLimits

0xb278,	// (0x0003a68f) popup_choice_list_window_ParamLimits

0xb278,	// (0x0003a68f) popup_choice_list_window

0x5760,	// (0x00034b77) choice_list_pane

0x57e2,	// (0x00034bf9) cell_toolbar_pane_t1

0x580a,	// (0x00034c21) toolbar_button_pane_ParamLimits

0x66fe,	// (0x00035b15) ai_gene_pane_1_t2_ParamLimits

0x66fe,	// (0x00035b15) ai_gene_pane_1_t2

0x0001,

0xf918,	// (0x0003ed2f) ai_gene_pane_1_t_ParamLimits

0xf918,	// (0x0003ed2f) ai_gene_pane_1_t

0x767e,	// (0x00036a95) scroll_sc2_left_pane_g1

0x767e,	// (0x00036a95) scroll_sc2_right_pane_g1

0x4ae3,	// (0x00033efa) bg_popup_sub_pane_cp10

0x7688,	// (0x00036a9f) list_choice_list_pane

0x76a1,	// (0x00036ab8) list_single_choice_list_pane_ParamLimits

0x76a1,	// (0x00036ab8) list_single_choice_list_pane

0x76b4,	// (0x00036acb) list_single_choice_list_pane_g1

0x4ace,	// (0x00033ee5) list_single_choice_list_pane_t1_ParamLimits

0x4ace,	// (0x00033ee5) list_single_choice_list_pane_t1

0x76bc,	// (0x00036ad3) choice_list_pane_g1

0x76c4,	// (0x00036adb) choice_list_pane_t1

0x22c8,	// (0x000316df) input_focus_pane_cp11

0x4c55,	// (0x0003406c) title_pane_stacon_g2_ParamLimits

0x4c55,	// (0x0003406c) title_pane_stacon_g2

0x0002,

0xf6d4,	// (0x0003eaeb) title_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0003eaeb) title_pane_stacon_g

0x53c8,	// (0x000347df) cursor_press_pane

0xb320,	// (0x0003a737) popup_fep_hwr_window_ParamLimits

0xb320,	// (0x0003a737) popup_fep_hwr_window

0xb398,	// (0x0003a7af) popup_fep_vkb_window_ParamLimits

0xb398,	// (0x0003a7af) popup_fep_vkb_window

0x76d2,	// (0x00036ae9) cursor_press_pane_g1

0x0002,

0xfb40,	// (0x0003ef57) fep_vkb_side_pane_g_ParamLimits

0xbdb7,	// (0x0003b1ce) fep_hwr_candidate_pane_ParamLimits

0xbdb7,	// (0x0003b1ce) fep_hwr_candidate_pane

0xbde1,	// (0x0003b1f8) fep_hwr_side_pane_ParamLimits

0xbde1,	// (0x0003b1f8) fep_hwr_side_pane

0xbe01,	// (0x0003b218) fep_hwr_top_pane_ParamLimits

0xbe01,	// (0x0003b218) fep_hwr_top_pane

0xbe19,	// (0x0003b230) fep_hwr_write_pane_ParamLimits

0xbe19,	// (0x0003b230) fep_hwr_write_pane

0xfb40,	// (0x0003ef57) fep_vkb_side_pane_g

0x76ec,	// (0x00036b03) fep_hwr_top_pane_g1

0x76da,	// (0x00036af1) fep_hwr_top_pane_g2

0xbe45,	// (0x0003b25c) fep_hwr_top_pane_g3

0x0002,

0xfb1c,	// (0x0003ef33) fep_hwr_top_pane_g

0xbe5a,	// (0x0003b271) fep_hwr_top_text_pane

0x4eb6,	// (0x000342cd) fep_hwr_top_text_pane_g1

0x7722,	// (0x00036b39) fep_hwr_top_text_pane_t1

0xbf50,	// (0x0003b367) fep_hwr_candidate_pane_g1

0x784d,	// (0x00036c64) fep_vkb_keypad_pane_g3_ParamLimits

0x784d,	// (0x00036c64) fep_vkb_keypad_pane_g3

0x7875,	// (0x00036c8c) fep_vkb_keypad_pane_g4_ParamLimits

0x7875,	// (0x00036c8c) fep_vkb_keypad_pane_g4

0x78e4,	// (0x00036cfb) fep_vkb_bottom_pane_g2_ParamLimits

0x78e4,	// (0x00036cfb) fep_vkb_bottom_pane_g2

0x0001,

0xfb47,	// (0x0003ef5e) fep_vkb_bottom_pane_g_ParamLimits

0xfb47,	// (0x0003ef5e) fep_vkb_bottom_pane_g

0x767e,	// (0x00036a95) cell_vkb_side_pane_g2

0x0001,

0xfb51,	// (0x0003ef68) cell_vkb_side_pane_g

0x7928,	// (0x00036d3f) cell_vkb_side_pane_t1

0x7936,	// (0x00036d4d) cell_vkb_side_pane_t1_copy1

0x767e,	// (0x00036a95) bg_fep_vkb_candidate_pane_g2

0x7a0c,	// (0x00036e23) cell_vkb_candidate_pane_ParamLimits

0x7730,	// (0x00036b47) aid_size_cell_vkb_ParamLimits

0x7730,	// (0x00036b47) aid_size_cell_vkb

0x7a0c,	// (0x00036e23) cell_vkb_candidate_pane

0xbf6a,	// (0x0003b381) bg_popup_fep_shadow_pane_g1

0xd97b,	// (0x0003cd92) fep_vkb_bottom_pane_ParamLimits

0xd97b,	// (0x0003cd92) fep_vkb_bottom_pane

0x77bb,	// (0x00036bd2) fep_vkb_candidate_pane_ParamLimits

0x77bb,	// (0x00036bd2) fep_vkb_candidate_pane

0xd9a0,	// (0x0003cdb7) fep_vkb_keypad_pane_ParamLimits

0xd9a0,	// (0x0003cdb7) fep_vkb_keypad_pane

0xd9d5,	// (0x0003cdec) fep_vkb_side_pane_ParamLimits

0xd9d5,	// (0x0003cdec) fep_vkb_side_pane

0xda11,	// (0x0003ce28) fep_vkb_top_pane_ParamLimits

0xda11,	// (0x0003ce28) fep_vkb_top_pane

0x77e1,	// (0x00036bf8) fep_vkb_top_pane_g1_ParamLimits

0x77e1,	// (0x00036bf8) fep_vkb_top_pane_g1

0x77f0,	// (0x00036c07) fep_vkb_top_pane_g2_ParamLimits

0x77f0,	// (0x00036c07) fep_vkb_top_pane_g2

0x77ff,	// (0x00036c16) fep_vkb_top_pane_g3_ParamLimits

0x77ff,	// (0x00036c16) fep_vkb_top_pane_g3

0x0003,

0xfb37,	// (0x0003ef4e) fep_vkb_top_pane_g_ParamLimits

0xfb37,	// (0x0003ef4e) fep_vkb_top_pane_g

0x781d,	// (0x00036c34) fep_vkb_top_text_pane_ParamLimits

0x781d,	// (0x00036c34) fep_vkb_top_text_pane

0xda46,	// (0x0003ce5d) fep_vkb_side_pane_g1_ParamLimits

0xda46,	// (0x0003ce5d) fep_vkb_side_pane_g1

0x783c,	// (0x00036c53) grid_vkb_side_pane_ParamLimits

0x783c,	// (0x00036c53) grid_vkb_side_pane

0xbf72,	// (0x0003b389) bg_popup_fep_shadow_pane_g2

0xbf7b,	// (0x0003b392) bg_popup_fep_shadow_pane_g3

0xbf83,	// (0x0003b39a) bg_popup_fep_shadow_pane_g4

0xbf8c,	// (0x0003b3a3) bg_popup_fep_shadow_pane_g5

0xbf96,	// (0x0003b3ad) bg_popup_fep_shadow_pane_g6

0xbf9e,	// (0x0003b3b5) bg_popup_fep_shadow_pane_g7

0x49f9,	// (0x00033e10) bg_popup_fep_shadow_pane_g8

0x7893,	// (0x00036caa) grid_vkb_keypad_number_pane_ParamLimits

0x7893,	// (0x00036caa) grid_vkb_keypad_number_pane

0x78a3,	// (0x00036cba) grid_vkb_keypad_pane_ParamLimits

0x78a3,	// (0x00036cba) grid_vkb_keypad_pane

0x78c9,	// (0x00036ce0) fep_vkb_bottom_pane_g1_ParamLimits

0x78c9,	// (0x00036ce0) fep_vkb_bottom_pane_g1

0x78f2,	// (0x00036d09) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x78f2,	// (0x00036d09) grid_vkb_keypad_bottom_left_pane

0x7907,	// (0x00036d1e) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7907,	// (0x00036d1e) grid_vkb_keypad_bottom_right_pane

0x791c,	// (0x00036d33) fep_vkb_top_text_pane_g1

0xda90,	// (0x0003cea7) fep_vkb_top_text_pane_t1

0xdaa5,	// (0x0003cebc) cell_vkb_side_pane_ParamLimits

0xdaa5,	// (0x0003cebc) cell_vkb_side_pane

0x767e,	// (0x00036a95) cell_vkb_side_pane_g1

0x7944,	// (0x00036d5b) cell_vkb_keypad_pane_ParamLimits

0x7944,	// (0x00036d5b) cell_vkb_keypad_pane

0x79b9,	// (0x00036dd0) cell_vkb_keypad_pane_g1

0x0008,

0xfb64,	// (0x0003ef7b) bg_popup_fep_shadow_pane_g

0x767e,	// (0x00036a95) cell_hwr_side_pane_g1

0x767e,	// (0x00036a95) cell_hwr_side_pane_g2

0x79c3,	// (0x00036dda) cell_vkb_keypad_pane_t1

0xdac8,	// (0x0003cedf) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdac8,	// (0x0003cedf) cell_vkb_keypad_bottom_left_pane

0xdae5,	// (0x0003cefc) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdae5,	// (0x0003cefc) cell_vkb_keypad_bottom_right_pane

0x767e,	// (0x00036a95) cell_vkb_keypad_bottom_left_pane_g1

0x767e,	// (0x00036a95) cell_vkb_keypad_bottom_right_pane_g1

0x79d1,	// (0x00036de8) cell_vkb_keypad_number_pane_ParamLimits

0x79d1,	// (0x00036de8) cell_vkb_keypad_number_pane

0x79f0,	// (0x00036e07) cell_vkb_keypad_number_pane_g1

0x79fa,	// (0x00036e11) cell_vkb_keypad_number_pane_g2

0x7a03,	// (0x00036e1a) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb56,	// (0x0003ef6d) cell_vkb_keypad_number_pane_g

0x79c3,	// (0x00036dda) cell_vkb_keypad_number_pane_t1

0x7a27,	// (0x00036e3e) fep_vkb_candidate_pane_g1

0x0001,

0xfb51,	// (0x0003ef68) cell_hwr_side_pane_g

0x7a40,	// (0x00036e57) cell_hwr_side_pane_t1

0xbfb0,	// (0x0003b3c7) cell_hwr_side_pane_t1_copy1

0x780f,	// (0x00036c26) cell_hwr_candidate_pane_g1

0xbfbe,	// (0x0003b3d5) cell_hwr_candidate_pane_t1

0x767e,	// (0x00036a95) cell_vkb_candidate_pane_g2

0x7a84,	// (0x00036e9b) cell_vkb_candidate_pane_t1

0xbd7e,	// (0x0003b195) bg_popup_fep_shadow_pane_ParamLimits

0xbd7e,	// (0x0003b195) bg_popup_fep_shadow_pane

0x1e3c,	// (0x00031253) bg_fep_hwr_top_pane_g4

0x76fe,	// (0x00036b15) bg_hwr_side_pane_g1_ParamLimits

0x76fe,	// (0x00036b15) bg_hwr_side_pane_g1

0xbe96,	// (0x0003b2ad) cell_hwr_side_pane_ParamLimits

0xbe96,	// (0x0003b2ad) cell_hwr_side_pane

0xbed1,	// (0x0003b2e8) fep_hwr_write_pane_g1_ParamLimits

0xbed1,	// (0x0003b2e8) fep_hwr_write_pane_g1

0xbede,	// (0x0003b2f5) fep_hwr_write_pane_g2_ParamLimits

0xbede,	// (0x0003b2f5) fep_hwr_write_pane_g2

0xbeeb,	// (0x0003b302) fep_hwr_write_pane_g3_ParamLimits

0xbeeb,	// (0x0003b302) fep_hwr_write_pane_g3

0xbef9,	// (0x0003b310) fep_hwr_write_pane_g4_ParamLimits

0xbef9,	// (0x0003b310) fep_hwr_write_pane_g4

0x0005,

0xfb23,	// (0x0003ef3a) fep_hwr_write_pane_g_ParamLimits

0xfb23,	// (0x0003ef3a) fep_hwr_write_pane_g

0x1e3c,	// (0x00031253) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1e3c,	// (0x00031253) bg_fep_hwr_candidate_pane_g2

0xbf0e,	// (0x0003b325) cell_hwr_candidate_pane_ParamLimits

0xbf0e,	// (0x0003b325) cell_hwr_candidate_pane

0xbf50,	// (0x0003b367) fep_hwr_candidate_pane_g1_ParamLimits

0x775e,	// (0x00036b75) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x775e,	// (0x00036b75) bg_popup_fep_shadow_pane_cp2

0x780f,	// (0x00036c26) fep_vkb_top_pane_g4_ParamLimits

0x780f,	// (0x00036c26) fep_vkb_top_pane_g4

0x782e,	// (0x00036c45) fep_vkb_side_pane_g2_ParamLimits

0x782e,	// (0x00036c45) fep_vkb_side_pane_g2

0x9745,	// (0x00038b5c) list_setting_pane_t4_ParamLimits

0x9745,	// (0x00038b5c) list_setting_pane_t4

0x97df,	// (0x00038bf6) list_setting_number_pane_t5_ParamLimits

0x97df,	// (0x00038bf6) list_setting_number_pane_t5

0xac80,	// (0x0003a097) list_double_heading_pane_cp2_ParamLimits

0xac80,	// (0x0003a097) list_double_heading_pane_cp2

0x2d5b,	// (0x00032172) list_double_heading_pane_g1_cp2_ParamLimits

0x2d5b,	// (0x00032172) list_double_heading_pane_g1_cp2

0x4998,	// (0x00033daf) list_double_heading_pane_g2_cp2_ParamLimits

0x4998,	// (0x00033daf) list_double_heading_pane_g2_cp2

0x7a92,	// (0x00036ea9) list_double_heading_pane_t1_cp2_ParamLimits

0x7a92,	// (0x00036ea9) list_double_heading_pane_t1_cp2

0x7aa8,	// (0x00036ebf) list_double_heading_pane_t2_cp2_ParamLimits

0x7aa8,	// (0x00036ebf) list_double_heading_pane_t2_cp2

0x22c0,	// (0x000316d7) aid_value_unit2

0xa49f,	// (0x000398b6) popup_preview_fixed_window

0x247b,	// (0x00031892) bg_popup_preview_window_pane_cp02

0x7aba,	// (0x00036ed1) list_preview_fixed_pane

0x7b00,	// (0x00036f17) list_empty_pane_fp_ParamLimits

0x7b00,	// (0x00036f17) list_empty_pane_fp

0x7b00,	// (0x00036f17) list_single_cale_day_pane_fp_ParamLimits

0x7b00,	// (0x00036f17) list_single_cale_day_pane_fp

0x7b00,	// (0x00036f17) list_single_graphic_heading_pane_fp_ParamLimits

0x7b00,	// (0x00036f17) list_single_graphic_heading_pane_fp

0x7b00,	// (0x00036f17) list_single_graphic_pane_fp_ParamLimits

0x7b00,	// (0x00036f17) list_single_graphic_pane_fp

0x7b00,	// (0x00036f17) list_single_heading_pane_fp_ParamLimits

0x7b00,	// (0x00036f17) list_single_heading_pane_fp

0x7b00,	// (0x00036f17) list_single_pane_fp_ParamLimits

0x7b00,	// (0x00036f17) list_single_pane_fp

0x7b16,	// (0x00036f2d) list_single_pane_fp_g1_ParamLimits

0x7b16,	// (0x00036f2d) list_single_pane_fp_g1

0x2d5b,	// (0x00032172) list_single_pane_fp_g2_ParamLimits

0x2d5b,	// (0x00032172) list_single_pane_fp_g2

0x4998,	// (0x00033daf) list_single_pane_fp_g3_ParamLimits

0x4998,	// (0x00033daf) list_single_pane_fp_g3

0x7b22,	// (0x00036f39) list_single_pane_fp_g4_ParamLimits

0x7b22,	// (0x00036f39) list_single_pane_fp_g4

0x0003,

0xfb85,	// (0x0003ef9c) list_single_pane_fp_g_ParamLimits

0xfb85,	// (0x0003ef9c) list_single_pane_fp_g

0x9f23,	// (0x0003933a) list_single_pane_fp_t1_ParamLimits

0x9f23,	// (0x0003933a) list_single_pane_fp_t1

0x9f3a,	// (0x00039351) list_single_graphic_pane_fp_g1_ParamLimits

0x9f3a,	// (0x00039351) list_single_graphic_pane_fp_g1

0x7b16,	// (0x00036f2d) list_single_graphic_pane_fp_g2_ParamLimits

0x7b16,	// (0x00036f2d) list_single_graphic_pane_fp_g2

0x2d5b,	// (0x00032172) list_single_graphic_pane_fp_g3_ParamLimits

0x2d5b,	// (0x00032172) list_single_graphic_pane_fp_g3

0x4998,	// (0x00033daf) list_single_graphic_pane_fp_g4_ParamLimits

0x4998,	// (0x00033daf) list_single_graphic_pane_fp_g4

0x7b22,	// (0x00036f39) list_single_graphic_pane_fp_g5_ParamLimits

0x7b22,	// (0x00036f39) list_single_graphic_pane_fp_g5

0x0004,

0xfb8e,	// (0x0003efa5) list_single_graphic_pane_fp_g_ParamLimits

0xfb8e,	// (0x0003efa5) list_single_graphic_pane_fp_g

0x9f46,	// (0x0003935d) list_single_graphic_pane_fp_t1_ParamLimits

0x9f46,	// (0x0003935d) list_single_graphic_pane_fp_t1

0x9f3a,	// (0x00039351) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x9f3a,	// (0x00039351) list_single_graphic_heading_pane_fp_g1

0x7b16,	// (0x00036f2d) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7b16,	// (0x00036f2d) list_single_graphic_heading_pane_fp_g2

0x2d5b,	// (0x00032172) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x2d5b,	// (0x00032172) list_single_graphic_heading_pane_fp_g3

0x4998,	// (0x00033daf) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4998,	// (0x00033daf) list_single_graphic_heading_pane_fp_g4

0x7b22,	// (0x00036f39) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7b22,	// (0x00036f39) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x0003efa5) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x0003efa5) list_single_graphic_heading_pane_fp_g

0x9f5c,	// (0x00039373) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x9f5c,	// (0x00039373) list_single_graphic_heading_pane_fp_t1

0x9f72,	// (0x00039389) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x9f72,	// (0x00039389) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb99,	// (0x0003efb0) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb99,	// (0x0003efb0) list_single_graphic_heading_pane_fp_t

0x9f84,	// (0x0003939b) list_single_cale_day_pane_fp_g1_ParamLimits

0x9f84,	// (0x0003939b) list_single_cale_day_pane_fp_g1

0x7b2e,	// (0x00036f45) list_single_cale_day_pane_fp_g2_ParamLimits

0x7b2e,	// (0x00036f45) list_single_cale_day_pane_fp_g2

0xbfdc,	// (0x0003b3f3) list_single_cale_day_pane_fp_g3_ParamLimits

0xbfdc,	// (0x0003b3f3) list_single_cale_day_pane_fp_g3

0xc004,	// (0x0003b41b) list_single_cale_day_pane_fp_g4_ParamLimits

0xc004,	// (0x0003b41b) list_single_cale_day_pane_fp_g4

0xc028,	// (0x0003b43f) list_single_cale_day_pane_fp_g5_ParamLimits

0xc028,	// (0x0003b43f) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9e,	// (0x0003efb5) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9e,	// (0x0003efb5) list_single_cale_day_pane_fp_g

0x9fbc,	// (0x000393d3) list_single_cale_day_pane_fp_t1_ParamLimits

0x9fbc,	// (0x000393d3) list_single_cale_day_pane_fp_t1

0x9fe2,	// (0x000393f9) list_single_cale_day_pane_fp_t2_ParamLimits

0x9fe2,	// (0x000393f9) list_single_cale_day_pane_fp_t2

0x9ffb,	// (0x00039412) list_single_cale_day_pane_fp_t3_ParamLimits

0x9ffb,	// (0x00039412) list_single_cale_day_pane_fp_t3

0x0002,

0xfba9,	// (0x0003efc0) list_single_cale_day_pane_fp_t_ParamLimits

0xfba9,	// (0x0003efc0) list_single_cale_day_pane_fp_t

0x7b16,	// (0x00036f2d) list_empty_pane_fp_g1_ParamLimits

0x7b16,	// (0x00036f2d) list_empty_pane_fp_g1

0xa014,	// (0x0003942b) list_empty_pane_fp_t1

0xa022,	// (0x00039439) list_empty_pane_fp_t2

0x0001,

0xfbb0,	// (0x0003efc7) list_empty_pane_fp_t

0x7b16,	// (0x00036f2d) list_single_heading_pane_fp_g1_ParamLimits

0x7b16,	// (0x00036f2d) list_single_heading_pane_fp_g1

0x2d5b,	// (0x00032172) list_single_heading_pane_fp_g2_ParamLimits

0x2d5b,	// (0x00032172) list_single_heading_pane_fp_g2

0x4998,	// (0x00033daf) list_single_heading_pane_fp_g3_ParamLimits

0x4998,	// (0x00033daf) list_single_heading_pane_fp_g3

0x0002,

0xfbb5,	// (0x0003efcc) list_single_heading_pane_fp_g_ParamLimits

0xfbb5,	// (0x0003efcc) list_single_heading_pane_fp_g

0xa030,	// (0x00039447) list_single_heading_pane_fp_t1_ParamLimits

0xa030,	// (0x00039447) list_single_heading_pane_fp_t1

0xa042,	// (0x00039459) list_single_heading_pane_fp_t2_ParamLimits

0xa042,	// (0x00039459) list_single_heading_pane_fp_t2

0x0001,

0xfbbc,	// (0x0003efd3) list_single_heading_pane_fp_t_ParamLimits

0xfbbc,	// (0x0003efd3) list_single_heading_pane_fp_t

0x4aef,	// (0x00033f06) aid_size_cell_fast

0x245e,	// (0x00031875) soft_indicator_pane_cp1_t1

0x4b29,	// (0x00033f40) cell_app_pane_cp2_ParamLimits

0x4b29,	// (0x00033f40) cell_app_pane_cp2

0xbda0,	// (0x0003b1b7) fep_hwr_candidate_drop_down_list_pane

0x219c,	// (0x000315b3) fep_hwr_candidate_pane_g3_ParamLimits

0x219c,	// (0x000315b3) fep_hwr_candidate_pane_g3

0x21a9,	// (0x000315c0) fep_hwr_candidate_pane_g4_ParamLimits

0x21a9,	// (0x000315c0) fep_hwr_candidate_pane_g4

0x0002,

0xfb30,	// (0x0003ef47) fep_hwr_candidate_pane_g_ParamLimits

0xfb30,	// (0x0003ef47) fep_hwr_candidate_pane_g

0x77aa,	// (0x00036bc1) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x77aa,	// (0x00036bc1) fep_vkb_candidate_drop_down_list_pane

0x7a2f,	// (0x00036e46) fep_vkb_candidate_pane_g3

0x7a37,	// (0x00036e4e) fep_vkb_candidate_pane_g4

0x0002,

0xfb5d,	// (0x0003ef74) fep_vkb_candidate_pane_g

0x780f,	// (0x00036c26) cell_hwr_candidate_pane_g1_ParamLimits

0x7be2,	// (0x00036ff9) cell_hwr_candidate_pane_g3_ParamLimits

0x7be2,	// (0x00036ff9) cell_hwr_candidate_pane_g3

0x7c03,	// (0x0003701a) cell_hwr_candidate_pane_g4_ParamLimits

0x7c03,	// (0x0003701a) cell_hwr_candidate_pane_g4

0x0002,

0xfb77,	// (0x0003ef8e) cell_hwr_candidate_pane_g_ParamLimits

0xfb77,	// (0x0003ef8e) cell_hwr_candidate_pane_g

0x7a4e,	// (0x00036e65) cell_vkb_candidate_pane_g3_ParamLimits

0x7a4e,	// (0x00036e65) cell_vkb_candidate_pane_g3

0x7a69,	// (0x00036e80) cell_vkb_candidate_pane_g4_ParamLimits

0x7a69,	// (0x00036e80) cell_vkb_candidate_pane_g4

0x7b3a,	// (0x00036f51) cell_app_pane_cp2_g1_ParamLimits

0x7b3a,	// (0x00036f51) cell_app_pane_cp2_g1

0x7b58,	// (0x00036f6f) cell_app_pane_cp2_g2_ParamLimits

0x7b58,	// (0x00036f6f) cell_app_pane_cp2_g2

0x0001,

0xfbc1,	// (0x0003efd8) cell_app_pane_cp2_g_ParamLimits

0xfbc1,	// (0x0003efd8) cell_app_pane_cp2_g

0x7b64,	// (0x00036f7b) cell_app_pane_cp2_t1_ParamLimits

0x7b64,	// (0x00036f7b) cell_app_pane_cp2_t1

0x498a,	// (0x00033da1) grid_highlight_pane_cp1_ParamLimits

0x498a,	// (0x00033da1) grid_highlight_pane_cp1

0xc04c,	// (0x0003b463) cell_hwr_candidate_pane_cp1_ParamLimits

0xc04c,	// (0x0003b463) cell_hwr_candidate_pane_cp1

0x780f,	// (0x00036c26) fep_hwr_candidate_drop_down_list_pane_g1

0x7b96,	// (0x00036fad) fep_hwr_candidate_drop_down_list_pane_g2

0x7ba3,	// (0x00036fba) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc6,	// (0x0003efdd) fep_hwr_candidate_drop_down_list_pane_g

0xc06b,	// (0x0003b482) fep_hwr_candidate_drop_down_list_scroll_pane

0xc074,	// (0x0003b48b) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc074,	// (0x0003b48b) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xc081,	// (0x0003b498) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc081,	// (0x0003b498) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xc08e,	// (0x0003b4a5) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc08e,	// (0x0003b4a5) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7a4e,	// (0x00036e65) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7a4e,	// (0x00036e65) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7a69,	// (0x00036e80) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7a69,	// (0x00036e80) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xc09b,	// (0x0003b4b2) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc09b,	// (0x0003b4b2) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xc0b6,	// (0x0003b4cd) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc0b6,	// (0x0003b4cd) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xc0d1,	// (0x0003b4e8) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc0d1,	// (0x0003b4e8) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcd,	// (0x0003efe4) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcd,	// (0x0003efe4) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7b76,	// (0x00036f8d) cell_vkb_candidate_pane_cp1_ParamLimits

0x7b76,	// (0x00036f8d) cell_vkb_candidate_pane_cp1

0x780f,	// (0x00036c26) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x780f,	// (0x00036c26) fep_vkb_candidate_drop_down_list_pane_g1

0x7b96,	// (0x00036fad) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7b96,	// (0x00036fad) fep_vkb_candidate_drop_down_list_pane_g2

0x7ba3,	// (0x00036fba) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7ba3,	// (0x00036fba) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc6,	// (0x0003efdd) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc6,	// (0x0003efdd) fep_vkb_candidate_drop_down_list_pane_g

0x7bb0,	// (0x00036fc7) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7bb0,	// (0x00036fc7) fep_vkb_candidate_drop_down_list_scroll_pane

0x7bbd,	// (0x00036fd4) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7bbd,	// (0x00036fd4) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7bca,	// (0x00036fe1) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7bca,	// (0x00036fe1) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7bd6,	// (0x00036fed) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7bd6,	// (0x00036fed) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7be2,	// (0x00036ff9) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7be2,	// (0x00036ff9) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7c03,	// (0x0003701a) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7c03,	// (0x0003701a) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7c24,	// (0x0003703b) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7c24,	// (0x0003703b) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7c45,	// (0x0003705c) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7c45,	// (0x0003705c) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7c66,	// (0x0003707d) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7c66,	// (0x0003707d) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbde,	// (0x0003eff5) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbde,	// (0x0003eff5) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa5b9,	// (0x000399d0) title_pane_g1_ParamLimits

0xa5c6,	// (0x000399dd) title_pane_g2_ParamLimits

0xf554,	// (0x0003e96b) title_pane_g_ParamLimits

0x4eae,	// (0x000342c5) aid_call2_pane

0x4ea6,	// (0x000342bd) aid_call_pane

0x4eb6,	// (0x000342cd) popup_clock_analogue_window_g1

0x4eb6,	// (0x000342cd) popup_clock_analogue_window_g2

0xac61,	// (0x0003a078) popup_clock_analogue_window_g3

0xac6a,	// (0x0003a081) popup_clock_analogue_window_g4

0x22d2,	// (0x000316e9) popup_clock_analogue_window_g5

0x0004,

0xf703,	// (0x0003eb1a) popup_clock_analogue_window_g

0xac72,	// (0x0003a089) popup_clock_analogue_window_t1

0xacaa,	// (0x0003a0c1) clock_digital_number_pane_ParamLimits

0xacaa,	// (0x0003a0c1) clock_digital_number_pane

0xacb6,	// (0x0003a0cd) clock_digital_number_pane_cp02_ParamLimits

0xacb6,	// (0x0003a0cd) clock_digital_number_pane_cp02

0xacc2,	// (0x0003a0d9) clock_digital_number_pane_cp03_ParamLimits

0xacc2,	// (0x0003a0d9) clock_digital_number_pane_cp03

0xacce,	// (0x0003a0e5) clock_digital_number_pane_cp04_ParamLimits

0xacce,	// (0x0003a0e5) clock_digital_number_pane_cp04

0xacda,	// (0x0003a0f1) clock_digital_separator_pane_ParamLimits

0xacda,	// (0x0003a0f1) clock_digital_separator_pane

0xace6,	// (0x0003a0fd) popup_clock_digital_window_t1_ParamLimits

0xace6,	// (0x0003a0fd) popup_clock_digital_window_t1

0x22d2,	// (0x000316e9) clock_digital_number_pane_g1

0x22d2,	// (0x000316e9) clock_digital_number_pane_g2

0x0001,

0xf70e,	// (0x0003eb25) clock_digital_number_pane_g

0x22d2,	// (0x000316e9) clock_digital_separator_pane_g1

0x22d2,	// (0x000316e9) clock_digital_separator_pane_g2

0x0001,

0xf70e,	// (0x0003eb25) clock_digital_separator_pane_g

0xceb5,	// (0x0003c2cc) aid_fill_nsta_ParamLimits

0xcf7a,	// (0x0003c391) indicator_nsta_pane_ParamLimits

0x5707,	// (0x00034b1e) popup_clock_analogue_window

0x5707,	// (0x00034b1e) popup_clock_digital_window

0x2348,	// (0x0003175f) grid_indicator_nsta_pane_ParamLimits

0x7311,	// (0x00036728) clock_nsta_pane_t2

0x0001,

0xfab0,	// (0x0003eec7) clock_nsta_pane_t

0xac25,	// (0x0003a03c) aid_size_max_handle

0xac2f,	// (0x0003a046) aid_size_min_handle

0x53c8,	// (0x000347df) editor_scroll_pane

0x7c81,	// (0x00037098) ex_editor_pane

0x4aaa,	// (0x00033ec1) scroll_pane_cp13

0x292e,	// (0x00031d45) scroll_pane_cp14

0x4ee5,	// (0x000342fc) scroll_pane_cp36

0xac94,	// (0x0003a0ab) list_single_graphic_hl_pane_cp2_ParamLimits

0xac94,	// (0x0003a0ab) list_single_graphic_hl_pane_cp2

0xbba3,	// (0x0003afba) list_single_graphic_hl_pane_ParamLimits

0xbba3,	// (0x0003afba) list_single_graphic_hl_pane

0xa058,	// (0x0003946f) aid_size_min_hl_cp1

0x7c89,	// (0x000370a0) list_highlight_pane_cp34_ParamLimits

0x7c89,	// (0x000370a0) list_highlight_pane_cp34

0x7c9a,	// (0x000370b1) list_single_graphic_hl_pane_g1_ParamLimits

0x7c9a,	// (0x000370b1) list_single_graphic_hl_pane_g1

0xa061,	// (0x00039478) list_single_graphic_hl_pane_g2_ParamLimits

0xa061,	// (0x00039478) list_single_graphic_hl_pane_g2

0xa061,	// (0x00039478) list_single_graphic_hl_pane_g3_ParamLimits

0xa061,	// (0x00039478) list_single_graphic_hl_pane_g3

0xa8ce,	// (0x00039ce5) list_single_graphic_hl_pane_g4_ParamLimits

0xa8ce,	// (0x00039ce5) list_single_graphic_hl_pane_g4

0xc0ec,	// (0x0003b503) list_single_graphic_hl_pane_g5_ParamLimits

0xc0ec,	// (0x0003b503) list_single_graphic_hl_pane_g5

0x0004,

0xfbef,	// (0x0003f006) list_single_graphic_hl_pane_g_ParamLimits

0xfbef,	// (0x0003f006) list_single_graphic_hl_pane_g

0xa06d,	// (0x00039484) list_single_graphic_hl_pane_t1_ParamLimits

0xa06d,	// (0x00039484) list_single_graphic_hl_pane_t1

0x7ca7,	// (0x000370be) aid_size_min_hl_cp2

0x7cb0,	// (0x000370c7) list_highlight_pane_cp34_cp2_ParamLimits

0x7cb0,	// (0x000370c7) list_highlight_pane_cp34_cp2

0x7c9a,	// (0x000370b1) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7c9a,	// (0x000370b1) list_single_graphic_hl_pane_g1_cp2

0x7cbd,	// (0x000370d4) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7cbd,	// (0x000370d4) list_single_graphic_hl_pane_g2_cp2

0x7cc9,	// (0x000370e0) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7cc9,	// (0x000370e0) list_single_graphic_hl_pane_g3_cp2

0x2ef0,	// (0x00032307) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x2ef0,	// (0x00032307) list_single_graphic_hl_pane_g4_cp2

0x7cd7,	// (0x000370ee) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7cd7,	// (0x000370ee) list_single_graphic_hl_pane_g5_cp2

0xb11b,	// (0x0003a532) control_pane_g4_ParamLimits

0xb11b,	// (0x0003a532) control_pane_g4

0x4ae3,	// (0x00033efa) bg_popup_sub_pane_cp10_ParamLimits

0x7688,	// (0x00036a9f) list_choice_list_pane_ParamLimits

0x7697,	// (0x00036aae) scroll_pane_cp23

0x247b,	// (0x00031892) bg_popup_preview_window_pane_cp02_ParamLimits

0x7aba,	// (0x00036ed1) list_preview_fixed_pane_ParamLimits

0x7ad0,	// (0x00036ee7) list_preview_fixed_pane_cp_ParamLimits

0x7ad0,	// (0x00036ee7) list_preview_fixed_pane_cp

0x7adc,	// (0x00036ef3) popup_preview_fixed_window_g1_ParamLimits

0x7adc,	// (0x00036ef3) popup_preview_fixed_window_g1

0x7ae8,	// (0x00036eff) popup_preview_fixed_window_g2_ParamLimits

0x7ae8,	// (0x00036eff) popup_preview_fixed_window_g2

0x0002,

0xfb7e,	// (0x0003ef95) popup_preview_fixed_window_g_ParamLimits

0xfb7e,	// (0x0003ef95) popup_preview_fixed_window_g

0xab07,	// (0x00039f1e) aid_navi_side_left_pane_ParamLimits

0xab1c,	// (0x00039f33) aid_navi_side_right_pane_ParamLimits

0xab34,	// (0x00039f4b) navi_icon_pane_stacon_ParamLimits

0xab48,	// (0x00039f5f) navi_navi_pane_stacon_ParamLimits

0xab34,	// (0x00039f4b) navi_text_pane_stacon_ParamLimits

0x22c8,	// (0x000316df) main_text_info_pane

0x7d01,	// (0x00037118) listscroll_text_info_pane

0x7d09,	// (0x00037120) list_text_info_pane_ParamLimits

0x7d09,	// (0x00037120) list_text_info_pane

0x7d18,	// (0x0003712f) scroll_pane_cp24_ParamLimits

0x7d18,	// (0x0003712f) scroll_pane_cp24

0xdb1e,	// (0x0003cf35) list_text_info_pane_t1_ParamLimits

0xdb1e,	// (0x0003cf35) list_text_info_pane_t1

0xb294,	// (0x0003a6ab) popup_fast_swap2_window_ParamLimits

0xb294,	// (0x0003a6ab) popup_fast_swap2_window

0x7d36,	// (0x0003714d) aid_size_cell_fast2

0x22c8,	// (0x000316df) bg_popup_window_pane_cp17

0x5b58,	// (0x00034f6f) heading_pane_cp2

0x2661,	// (0x00031a78) listscroll_fast2_pane

0x7d40,	// (0x00037157) grid_fast2_pane

0x7d4a,	// (0x00037161) listscroll_fast2_pane_g1

0x7d52,	// (0x00037169) listscroll_fast2_pane_g2

0x0001,

0xfbfa,	// (0x0003f011) listscroll_fast2_pane_g

0x4aaa,	// (0x00033ec1) scroll_pane_cp26

0x7d5c,	// (0x00037173) cell_fast2_pane_ParamLimits

0x7d5c,	// (0x00037173) cell_fast2_pane

0x7d71,	// (0x00037188) cell_fast2_pane_g1

0x7d7a,	// (0x00037191) cell_fast2_pane_g2

0x7d83,	// (0x0003719a) cell_fast2_pane_g3

0x0002,

0xfbff,	// (0x0003f016) cell_fast2_pane_g

0x26f5,	// (0x00031b0c) grid_highlight_pane_cp9

0x270a,	// (0x00031b21) main_eswt_pane_ParamLimits

0x270a,	// (0x00031b21) main_eswt_pane

0x7d2d,	// (0x00037144) list_single_text_info_pane

0x7d8b,	// (0x000371a2) eswt_ctrl_button_pane

0x7d8b,	// (0x000371a2) eswt_ctrl_canvas_pane

0x7d93,	// (0x000371aa) eswt_ctrl_combo_pane

0x7d8b,	// (0x000371a2) eswt_ctrl_default_pane

0x7d8b,	// (0x000371a2) eswt_ctrl_label_pane

0x7d9b,	// (0x000371b2) eswt_ctrl_wait_pane

0x7da3,	// (0x000371ba) eswt_shell_pane

0x22c8,	// (0x000316df) listscroll_eswt_app_pane

0x7dc3,	// (0x000371da) popup_eswt_tasktip_window_ParamLimits

0x7dc3,	// (0x000371da) popup_eswt_tasktip_window

0x588a,	// (0x00034ca1) bg_popup_window_pane_cp18

0x7dd4,	// (0x000371eb) eswt_control_pane_g1_ParamLimits

0x7dd4,	// (0x000371eb) eswt_control_pane_g1

0x7de1,	// (0x000371f8) eswt_control_pane_g2_ParamLimits

0x7de1,	// (0x000371f8) eswt_control_pane_g2

0x7dee,	// (0x00037205) eswt_control_pane_g3_ParamLimits

0x7dee,	// (0x00037205) eswt_control_pane_g3

0x7dfb,	// (0x00037212) eswt_control_pane_g4_ParamLimits

0x7dfb,	// (0x00037212) eswt_control_pane_g4

0x0003,

0xfc06,	// (0x0003f01d) eswt_control_pane_g_ParamLimits

0xfc06,	// (0x0003f01d) eswt_control_pane_g

0x498a,	// (0x00033da1) bg_button_pane_ParamLimits

0x498a,	// (0x00033da1) bg_button_pane

0x270a,	// (0x00031b21) common_borders_pane_copy2_ParamLimits

0x270a,	// (0x00031b21) common_borders_pane_copy2

0x7e08,	// (0x0003721f) control_button_pane_g1_ParamLimits

0x7e08,	// (0x0003721f) control_button_pane_g1

0x7e14,	// (0x0003722b) control_button_pane_g2_ParamLimits

0x7e14,	// (0x0003722b) control_button_pane_g2

0x7e20,	// (0x00037237) control_button_pane_g3_ParamLimits

0x7e20,	// (0x00037237) control_button_pane_g3

0x0002,

0xfc0f,	// (0x0003f026) control_button_pane_g_ParamLimits

0xfc0f,	// (0x0003f026) control_button_pane_g

0x7e34,	// (0x0003724b) control_button_pane_t1

0x7e42,	// (0x00037259) control_button_pane_t2

0x0001,

0xfc16,	// (0x0003f02d) control_button_pane_t

0x5816,	// (0x00034c2d) bg_button_pane_g1

0x5826,	// (0x00034c3d) bg_button_pane_g2

0x581e,	// (0x00034c35) bg_button_pane_g3

0x5836,	// (0x00034c4d) bg_button_pane_g4

0x582e,	// (0x00034c45) bg_button_pane_g5

0x583e,	// (0x00034c55) bg_button_pane_g6

0x5846,	// (0x00034c5d) bg_button_pane_g7

0x5856,	// (0x00034c6d) bg_button_pane_g8

0x584e,	// (0x00034c65) bg_button_pane_g9

0x0008,

0xf86c,	// (0x0003ec83) bg_button_pane_g

0x7643,	// (0x00036a5a) common_borders_pane_ParamLimits

0x7643,	// (0x00036a5a) common_borders_pane

0x7dd4,	// (0x000371eb) eswt_control_pane_g1_copy1_ParamLimits

0x7dd4,	// (0x000371eb) eswt_control_pane_g1_copy1

0x7de1,	// (0x000371f8) eswt_control_pane_g2_copy1_ParamLimits

0x7de1,	// (0x000371f8) eswt_control_pane_g2_copy1

0x7dee,	// (0x00037205) eswt_control_pane_g3_copy1_ParamLimits

0x7dee,	// (0x00037205) eswt_control_pane_g3_copy1

0x7dfb,	// (0x00037212) eswt_control_pane_g4_copy1_ParamLimits

0x7dfb,	// (0x00037212) eswt_control_pane_g4_copy1

0x767e,	// (0x00036a95) bg_eswt_ctrl_canvas_pane_g1

0x7643,	// (0x00036a5a) common_borders_pane_cp2_ParamLimits

0x7643,	// (0x00036a5a) common_borders_pane_cp2

0x7643,	// (0x00036a5a) common_borders_pane_cp3_ParamLimits

0x7643,	// (0x00036a5a) common_borders_pane_cp3

0x7e50,	// (0x00037267) separator_horizontal_pane

0x7e58,	// (0x0003726f) separator_vertical_pane

0x7dd4,	// (0x000371eb) eswt_control_pane_g1_copy2_ParamLimits

0x7dd4,	// (0x000371eb) eswt_control_pane_g1_copy2

0x7de1,	// (0x000371f8) eswt_control_pane_g2_copy2_ParamLimits

0x7de1,	// (0x000371f8) eswt_control_pane_g2_copy2

0x7dee,	// (0x00037205) eswt_control_pane_g3_copy2_ParamLimits

0x7dee,	// (0x00037205) eswt_control_pane_g3_copy2

0x7dfb,	// (0x00037212) eswt_control_pane_g4_copy2_ParamLimits

0x7dfb,	// (0x00037212) eswt_control_pane_g4_copy2

0x22c8,	// (0x000316df) common_borders_pane_cp4

0x7e61,	// (0x00037278) separator_horizontal_pane_g1

0x7e6a,	// (0x00037281) separator_horizontal_pane_g2

0x7e73,	// (0x0003728a) separator_horizontal_pane_g3

0x0002,

0xfc1b,	// (0x0003f032) separator_horizontal_pane_g

0x7dd4,	// (0x000371eb) eswt_control_pane_g1_copy3_ParamLimits

0x7dd4,	// (0x000371eb) eswt_control_pane_g1_copy3

0x7de1,	// (0x000371f8) eswt_control_pane_g2_copy3_ParamLimits

0x7de1,	// (0x000371f8) eswt_control_pane_g2_copy3

0x7dee,	// (0x00037205) eswt_control_pane_g3_copy3_ParamLimits

0x7dee,	// (0x00037205) eswt_control_pane_g3_copy3

0x7dfb,	// (0x00037212) eswt_control_pane_g4_copy3_ParamLimits

0x7dfb,	// (0x00037212) eswt_control_pane_g4_copy3

0x22c8,	// (0x000316df) common_borders_pane_cp5

0x7e7c,	// (0x00037293) separator_vertical_pane_g1

0x7e85,	// (0x0003729c) separator_vertical_pane_g2

0x7e8e,	// (0x000372a5) separator_vertical_pane_g3

0x0002,

0xfc22,	// (0x0003f039) separator_vertical_pane_g

0x7dd4,	// (0x000371eb) eswt_control_pane_g1_copy4_ParamLimits

0x7dd4,	// (0x000371eb) eswt_control_pane_g1_copy4

0x7de1,	// (0x000371f8) eswt_control_pane_g2_copy4_ParamLimits

0x7de1,	// (0x000371f8) eswt_control_pane_g2_copy4

0x7dee,	// (0x00037205) eswt_control_pane_g3_copy4_ParamLimits

0x7dee,	// (0x00037205) eswt_control_pane_g3_copy4

0x7dfb,	// (0x00037212) eswt_control_pane_g4_copy4_ParamLimits

0x7dfb,	// (0x00037212) eswt_control_pane_g4_copy4

0x7e97,	// (0x000372ae) eswt_ctrl_combo_button_pane

0x7e9f,	// (0x000372b6) eswt_ctrl_input_pane

0x7ea7,	// (0x000372be) popup_choice_list_window_cp70

0x7eaf,	// (0x000372c6) eswt_ctrl_input_pane_t1

0x22c8,	// (0x000316df) input_focus_pane_cp70

0x7643,	// (0x00036a5a) bg_button_pane_cp70_ParamLimits

0x7643,	// (0x00036a5a) bg_button_pane_cp70

0x7ebd,	// (0x000372d4) eswt_ctrl_combo_button_pane_g1

0x7ec5,	// (0x000372dc) wait_bar_pane_cp70

0x588a,	// (0x00034ca1) bg_popup_window_pane_cp70_ParamLimits

0x588a,	// (0x00034ca1) bg_popup_window_pane_cp70

0x7ecd,	// (0x000372e4) popup_eswt_tasktip_window_t1

0x7ee3,	// (0x000372fa) wait_bar_pane_cp71_ParamLimits

0x7ee3,	// (0x000372fa) wait_bar_pane_cp71

0x7eef,	// (0x00037306) grid_eswt_app_pane

0x4ce9,	// (0x00034100) scroll_pane_cp70

0xdb53,	// (0x0003cf6a) cell_eswt_app_pane_ParamLimits

0xdb53,	// (0x0003cf6a) cell_eswt_app_pane

0xdb87,	// (0x0003cf9e) cell_eswt_app_pane_g1_ParamLimits

0xdb87,	// (0x0003cf9e) cell_eswt_app_pane_g1

0xdbb6,	// (0x0003cfcd) cell_eswt_app_pane_g2_ParamLimits

0xdbb6,	// (0x0003cfcd) cell_eswt_app_pane_g2

0x0001,

0xfc29,	// (0x0003f040) cell_eswt_app_pane_g_ParamLimits

0xfc29,	// (0x0003f040) cell_eswt_app_pane_g

0xdbda,	// (0x0003cff1) cell_eswt_app_pane_t1_ParamLimits

0xdbda,	// (0x0003cff1) cell_eswt_app_pane_t1

0x7ef8,	// (0x0003730f) grid_highlight_pane_cp70_ParamLimits

0x7ef8,	// (0x0003730f) grid_highlight_pane_cp70

0x52a9,	// (0x000346c0) set_content_pane_g1

0x55b1,	// (0x000349c8) status_small_volume_pane

0xc100,	// (0x0003b517) status_small_volume_pane_g1

0xc108,	// (0x0003b51f) volume_small2_pane

0xc111,	// (0x0003b528) volume_small2_pane_g1

0xc11a,	// (0x0003b531) volume_small2_pane_g2

0xc123,	// (0x0003b53a) volume_small2_pane_g3

0xc12c,	// (0x0003b543) volume_small2_pane_g4

0xc135,	// (0x0003b54c) volume_small2_pane_g5

0xc13e,	// (0x0003b555) volume_small2_pane_g6

0xc147,	// (0x0003b55e) volume_small2_pane_g7

0xc150,	// (0x0003b567) volume_small2_pane_g8

0xc159,	// (0x0003b570) volume_small2_pane_g9

0xc162,	// (0x0003b579) volume_small2_pane_g10

0x0009,

0xfc2e,	// (0x0003f045) volume_small2_pane_g

0x791c,	// (0x00036d33) fep_vkb_top_text_pane_g1_ParamLimits

0xda90,	// (0x0003cea7) fep_vkb_top_text_pane_t1_ParamLimits

0x7af4,	// (0x00036f0b) popup_preview_fixed_window_g3_ParamLimits

0x7af4,	// (0x00036f0b) popup_preview_fixed_window_g3

0xb73b,	// (0x0003ab52) popup_toolbar_trans_pane

0xd443,	// (0x0003c85a) aid_height_set_list_ParamLimits

0x5626,	// (0x00034a3d) aid_size_parent_ParamLimits

0x4ae3,	// (0x00033efa) list_highlight_pane_cp2_ParamLimits

0x52a9,	// (0x000346c0) set_content_pane_g1_ParamLimits

0xbbc2,	// (0x0003afd9) list_single_image_pane_ParamLimits

0xbbc2,	// (0x0003afd9) list_single_image_pane

0xdc0c,	// (0x0003d023) aid_size_cell_image_ParamLimits

0xdc0c,	// (0x0003d023) aid_size_cell_image

0xdc19,	// (0x0003d030) grid_single_image_pane_ParamLimits

0xdc19,	// (0x0003d030) grid_single_image_pane

0x7f04,	// (0x0003731b) list_single_image_pane_g1_ParamLimits

0x7f04,	// (0x0003731b) list_single_image_pane_g1

0x7f10,	// (0x00037327) list_single_image_pane_g2_ParamLimits

0x7f10,	// (0x00037327) list_single_image_pane_g2

0x0001,

0xfc43,	// (0x0003f05a) list_single_image_pane_g_ParamLimits

0xfc43,	// (0x0003f05a) list_single_image_pane_g

0x7f24,	// (0x0003733b) list_single_image_pane_t1_ParamLimits

0x7f24,	// (0x0003733b) list_single_image_pane_t1

0xdc25,	// (0x0003d03c) cell_image_list_pane_ParamLimits

0xdc25,	// (0x0003d03c) cell_image_list_pane

0xdc39,	// (0x0003d050) cell_image_list_pane_g1

0xdc42,	// (0x0003d059) cell_image_list_pane_g2

0x0001,

0xfc48,	// (0x0003f05f) cell_image_list_pane_g

0x7f3a,	// (0x00037351) aid_size_cell_tb_trans_pane

0x498a,	// (0x00033da1) bg_tb_trans_pane

0x7f4c,	// (0x00037363) grid_tb_trans_pane

0x5816,	// (0x00034c2d) bg_tb_trans_pane_g1

0x5826,	// (0x00034c3d) bg_tb_trans_pane_g2

0x581e,	// (0x00034c35) bg_tb_trans_pane_g3

0x5836,	// (0x00034c4d) bg_tb_trans_pane_g4

0x582e,	// (0x00034c45) bg_tb_trans_pane_g5

0x5856,	// (0x00034c6d) bg_tb_trans_pane_g6

0x584e,	// (0x00034c65) bg_tb_trans_pane_g7

0x583e,	// (0x00034c55) bg_tb_trans_pane_g8

0x5846,	// (0x00034c5d) bg_tb_trans_pane_g9

0x0008,

0xfc4d,	// (0x0003f064) bg_tb_trans_pane_g

0x7f60,	// (0x00037377) cell_toolbar_trans_pane_ParamLimits

0x7f60,	// (0x00037377) cell_toolbar_trans_pane

0x767e,	// (0x00036a95) cell_toolbar_trans_pane_g1

0xd7b7,	// (0x0003cbce) list_form2_midp_pane_t1

0xd7c5,	// (0x0003cbdc) list_form2_midp_pane_t2

0x0001,

0xfaf6,	// (0x0003ef0d) list_form2_midp_pane_t

0x73db,	// (0x000367f2) scroll_pane_cp51_ParamLimits

0x7552,	// (0x00036969) form2_midp_wait_pane_g1

0x755b,	// (0x00036972) form2_midp_wait_pane_g2

0x7564,	// (0x0003697b) form2_midp_wait_pane_g3

0x0002,

0xfb0b,	// (0x0003ef22) form2_midp_wait_pane_g

0x2348,	// (0x0003175f) list_highlight_pane_cp21_ParamLimits

0x7584,	// (0x0003699b) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7593,	// (0x000369aa) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xbb3b,	// (0x0003af52) list_single_2graphic_im_pane_ParamLimits

0xbb3b,	// (0x0003af52) list_single_2graphic_im_pane

0x7f86,	// (0x0003739d) list_single_2graphic_im_pane_g1_ParamLimits

0x7f86,	// (0x0003739d) list_single_2graphic_im_pane_g1

0x7f97,	// (0x000373ae) list_single_2graphic_im_pane_g2_ParamLimits

0x7f97,	// (0x000373ae) list_single_2graphic_im_pane_g2

0x7fa3,	// (0x000373ba) list_single_2graphic_im_pane_g3_ParamLimits

0x7fa3,	// (0x000373ba) list_single_2graphic_im_pane_g3

0x0003,

0xfc60,	// (0x0003f077) list_single_2graphic_im_pane_g_ParamLimits

0xfc60,	// (0x0003f077) list_single_2graphic_im_pane_g

0x7fc3,	// (0x000373da) list_single_2graphic_im_pane_t1_ParamLimits

0x7fc3,	// (0x000373da) list_single_2graphic_im_pane_t1

0x7b00,	// (0x00036f17) list_single_graphic_2heading_pane_fp_ParamLimits

0x7b00,	// (0x00036f17) list_single_graphic_2heading_pane_fp

0x9f3a,	// (0x00039351) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x9f3a,	// (0x00039351) list_single_graphic_2heading_pane_fp_g1

0x7b16,	// (0x00036f2d) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7b16,	// (0x00036f2d) list_single_graphic_2heading_pane_fp_g2

0x2d5b,	// (0x00032172) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x2d5b,	// (0x00032172) list_single_graphic_2heading_pane_fp_g3

0x4998,	// (0x00033daf) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4998,	// (0x00033daf) list_single_graphic_2heading_pane_fp_g4

0x7b22,	// (0x00036f39) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7b22,	// (0x00036f39) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x0003efa5) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x0003efa5) list_single_graphic_2heading_pane_fp_g

0xa083,	// (0x0003949a) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xa083,	// (0x0003949a) list_single_graphic_2heading_pane_fp_t1

0x9f72,	// (0x00039389) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x9f72,	// (0x00039389) list_single_graphic_2heading_pane_fp_t2

0xa099,	// (0x000394b0) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xa099,	// (0x000394b0) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc69,	// (0x0003f080) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc69,	// (0x0003f080) list_single_graphic_2heading_pane_fp_t

0x770a,	// (0x00036b21) fep_hwr_write_pane_g5_ParamLimits

0x770a,	// (0x00036b21) fep_hwr_write_pane_g5

0x7716,	// (0x00036b2d) fep_hwr_write_pane_g6_ParamLimits

0x7716,	// (0x00036b2d) fep_hwr_write_pane_g6

0x7da3,	// (0x000371ba) eswt_shell_pane_ParamLimits

0x588a,	// (0x00034ca1) bg_popup_window_pane_cp18_ParamLimits

0x6900,	// (0x00035d17) heading_pane_cp70

0x7ecd,	// (0x000372e4) popup_eswt_tasktip_window_t1_ParamLimits

0xcef5,	// (0x0003c30c) aid_touch_tab_arrow_left

0xcf01,	// (0x0003c318) aid_touch_tab_arrow_right

0xa5d7,	// (0x000399ee) title_pane_g3_ParamLimits

0xa5d7,	// (0x000399ee) title_pane_g3

0x4949,	// (0x00033d60) set_value_pane_g1

0xb73b,	// (0x0003ab52) popup_toolbar_trans_pane_ParamLimits

0x7f3a,	// (0x00037351) aid_size_cell_tb_trans_pane_ParamLimits

0x498a,	// (0x00033da1) bg_tb_trans_pane_ParamLimits

0x7f4c,	// (0x00037363) grid_tb_trans_pane_ParamLimits

0x247b,	// (0x00031892) cont_note_pane_ParamLimits

0x247b,	// (0x00031892) cont_note_pane

0x270a,	// (0x00031b21) cont_snote2_single_text_pane_ParamLimits

0x270a,	// (0x00031b21) cont_snote2_single_text_pane

0x270a,	// (0x00031b21) cont_snote2_single_graphic_pane_ParamLimits

0x270a,	// (0x00031b21) cont_snote2_single_graphic_pane

0x5d6e,	// (0x00035185) cont_note_wait_pane_ParamLimits

0x5d6e,	// (0x00035185) cont_note_wait_pane

0x5d6e,	// (0x00035185) cont_note_image_pane_ParamLimits

0x5d6e,	// (0x00035185) cont_note_image_pane

0x7ff4,	// (0x0003740b) popup_note2_window_g1_ParamLimits

0x7ff4,	// (0x0003740b) popup_note2_window_g1

0x8025,	// (0x0003743c) popup_note2_window_t1_ParamLimits

0x8025,	// (0x0003743c) popup_note2_window_t1

0x806a,	// (0x00037481) popup_note2_window_t2_ParamLimits

0x806a,	// (0x00037481) popup_note2_window_t2

0x80af,	// (0x000374c6) popup_note2_window_t3_ParamLimits

0x80af,	// (0x000374c6) popup_note2_window_t3

0x80f4,	// (0x0003750b) popup_note2_window_t4_ParamLimits

0x80f4,	// (0x0003750b) popup_note2_window_t4

0x24f3,	// (0x0003190a) popup_note2_window_t5_ParamLimits

0x24f3,	// (0x0003190a) popup_note2_window_t5

0x0004,

0xfc75,	// (0x0003f08c) popup_note2_window_t_ParamLimits

0xfc75,	// (0x0003f08c) popup_note2_window_t

0x8123,	// (0x0003753a) popup_note2_image_window_g1_ParamLimits

0x8123,	// (0x0003753a) popup_note2_image_window_g1

0x812f,	// (0x00037546) popup_note2_image_window_g2_ParamLimits

0x812f,	// (0x00037546) popup_note2_image_window_g2

0x0001,

0xfc80,	// (0x0003f097) popup_note2_image_window_g_ParamLimits

0xfc80,	// (0x0003f097) popup_note2_image_window_g

0x8141,	// (0x00037558) popup_note2_image_window_t1_ParamLimits

0x8141,	// (0x00037558) popup_note2_image_window_t1

0x8159,	// (0x00037570) popup_note2_image_window_t2_ParamLimits

0x8159,	// (0x00037570) popup_note2_image_window_t2

0x8171,	// (0x00037588) popup_note2_image_window_t3_ParamLimits

0x8171,	// (0x00037588) popup_note2_image_window_t3

0x0002,

0xfc85,	// (0x0003f09c) popup_note2_image_window_t_ParamLimits

0xfc85,	// (0x0003f09c) popup_note2_image_window_t

0x5d7c,	// (0x00035193) popup_note2_wait_window_g1_ParamLimits

0x5d7c,	// (0x00035193) popup_note2_wait_window_g1

0x818d,	// (0x000375a4) popup_note2_wait_window_g2_ParamLimits

0x818d,	// (0x000375a4) popup_note2_wait_window_g2

0x5d94,	// (0x000351ab) popup_note2_wait_window_g3_ParamLimits

0x5d94,	// (0x000351ab) popup_note2_wait_window_g3

0x0002,

0xfc8c,	// (0x0003f0a3) popup_note2_wait_window_g_ParamLimits

0xfc8c,	// (0x0003f0a3) popup_note2_wait_window_g

0x8199,	// (0x000375b0) popup_note2_wait_window_t1_ParamLimits

0x8199,	// (0x000375b0) popup_note2_wait_window_t1

0x81b7,	// (0x000375ce) popup_note2_wait_window_t2_ParamLimits

0x81b7,	// (0x000375ce) popup_note2_wait_window_t2

0x81d5,	// (0x000375ec) popup_note2_wait_window_t3_ParamLimits

0x81d5,	// (0x000375ec) popup_note2_wait_window_t3

0x81e7,	// (0x000375fe) popup_note2_wait_window_t4_ParamLimits

0x81e7,	// (0x000375fe) popup_note2_wait_window_t4

0x0003,

0xfc93,	// (0x0003f0aa) popup_note2_wait_window_t_ParamLimits

0xfc93,	// (0x0003f0aa) popup_note2_wait_window_t

0x81f9,	// (0x00037610) wait_bar2_pane_ParamLimits

0x81f9,	// (0x00037610) wait_bar2_pane

0x8211,	// (0x00037628) popup_snote2_single_text_window_g1_ParamLimits

0x8211,	// (0x00037628) popup_snote2_single_text_window_g1

0x8239,	// (0x00037650) popup_snote2_single_text_window_t1_ParamLimits

0x8239,	// (0x00037650) popup_snote2_single_text_window_t1

0x8285,	// (0x0003769c) popup_snote2_single_text_window_t2_ParamLimits

0x8285,	// (0x0003769c) popup_snote2_single_text_window_t2

0x82d1,	// (0x000376e8) popup_snote2_single_text_window_t3_ParamLimits

0x82d1,	// (0x000376e8) popup_snote2_single_text_window_t3

0x8312,	// (0x00037729) popup_snote2_single_text_window_t4_ParamLimits

0x8312,	// (0x00037729) popup_snote2_single_text_window_t4

0x8348,	// (0x0003775f) popup_snote2_single_text_window_t5_ParamLimits

0x8348,	// (0x0003775f) popup_snote2_single_text_window_t5

0x0004,

0xfc9c,	// (0x0003f0b3) popup_snote2_single_text_window_t_ParamLimits

0xfc9c,	// (0x0003f0b3) popup_snote2_single_text_window_t

0x8373,	// (0x0003778a) popup_snote2_single_graphic_window_g1_ParamLimits

0x8373,	// (0x0003778a) popup_snote2_single_graphic_window_g1

0x839b,	// (0x000377b2) popup_snote2_single_graphic_window_g2_ParamLimits

0x839b,	// (0x000377b2) popup_snote2_single_graphic_window_g2

0x0001,

0xfca7,	// (0x0003f0be) popup_snote2_single_graphic_window_g_ParamLimits

0xfca7,	// (0x0003f0be) popup_snote2_single_graphic_window_g

0x83c3,	// (0x000377da) popup_snote2_single_graphic_window_t1_ParamLimits

0x83c3,	// (0x000377da) popup_snote2_single_graphic_window_t1

0x840f,	// (0x00037826) popup_snote2_single_graphic_window_t2_ParamLimits

0x840f,	// (0x00037826) popup_snote2_single_graphic_window_t2

0x82d1,	// (0x000376e8) popup_snote2_single_graphic_window_t3_ParamLimits

0x82d1,	// (0x000376e8) popup_snote2_single_graphic_window_t3

0x8312,	// (0x00037729) popup_snote2_single_graphic_window_t4_ParamLimits

0x8312,	// (0x00037729) popup_snote2_single_graphic_window_t4

0x8348,	// (0x0003775f) popup_snote2_single_graphic_window_t5_ParamLimits

0x8348,	// (0x0003775f) popup_snote2_single_graphic_window_t5

0x0004,

0xfcac,	// (0x0003f0c3) popup_snote2_single_graphic_window_t_ParamLimits

0xfcac,	// (0x0003f0c3) popup_snote2_single_graphic_window_t

0x736f,	// (0x00036786) clock_nsta_pane_cp2_t1

0x736f,	// (0x00036786) clock_nsta_pane_cp2_t2

0x0001,

0xfacc,	// (0x0003eee3) clock_nsta_pane_cp2_t

0x98fb,	// (0x00038d12) form_field_data_wide_pane_g1_ParamLimits

0x2d5b,	// (0x00032172) form_field_data_wide_pane_g2_ParamLimits

0x2d5b,	// (0x00032172) form_field_data_wide_pane_g2

0x4998,	// (0x00033daf) form_field_data_wide_pane_g3_ParamLimits

0x4998,	// (0x00033daf) form_field_data_wide_pane_g3

0x0002,

0xf686,	// (0x0003ea9d) form_field_data_wide_pane_g_ParamLimits

0xf686,	// (0x0003ea9d) form_field_data_wide_pane_g

0xd6a0,	// (0x0003cab7) grid_touch_3_pane_ParamLimits

0xd6a0,	// (0x0003cab7) grid_touch_3_pane

0xdc4b,	// (0x0003d062) cell_touch_3_pane_ParamLimits

0xdc4b,	// (0x0003d062) cell_touch_3_pane

0x767e,	// (0x00036a95) cell_touch_3_pane_g1

0x767e,	// (0x00036a95) cell_touch_3_pane_g2

0x0001,

0xfb51,	// (0x0003ef68) cell_touch_3_pane_g

0x2525,	// (0x0003193c) cont_query_data_pane

0x252d,	// (0x00031944) cont_query_data_pane_cp1

0x845b,	// (0x00037872) button_value_adjust_pane_cp7

0x8463,	// (0x0003787a) query_popup_pane_cp3

0x4f17,	// (0x0003432e) bg_popup_sub_pane_cp22_ParamLimits

0xad66,	// (0x0003a17d) navi_navi_volume_pane_cp2

0xad7e,	// (0x0003a195) popup_side_volume_key_window_g2

0xad8a,	// (0x0003a1a1) popup_side_volume_key_window_g3

0x0002,

0xf71c,	// (0x0003eb33) popup_side_volume_key_window_g

0xada4,	// (0x0003a1bb) popup_side_volume_key_window_t2

0x0001,

0xf723,	// (0x0003eb3a) popup_side_volume_key_window_t

0x5175,	// (0x0003458c) popup_side_volume_key_window_ParamLimits

0xa924,	// (0x00039d3b) list_double_graphic_pane_g4_ParamLimits

0xa924,	// (0x00039d3b) list_double_graphic_pane_g4

0xbb80,	// (0x0003af97) list_single_2heading_msg_pane_ParamLimits

0xbb80,	// (0x0003af97) list_single_2heading_msg_pane

0xc16b,	// (0x0003b582) list_single_2heading_msg_pane_g1_ParamLimits

0xc16b,	// (0x0003b582) list_single_2heading_msg_pane_g1

0x2ef0,	// (0x00032307) list_single_2heading_msg_pane_g2_ParamLimits

0x2ef0,	// (0x00032307) list_single_2heading_msg_pane_g2

0xc177,	// (0x0003b58e) list_single_2heading_msg_pane_g3_ParamLimits

0xc177,	// (0x0003b58e) list_single_2heading_msg_pane_g3

0xc183,	// (0x0003b59a) list_single_2heading_msg_pane_g4_ParamLimits

0xc183,	// (0x0003b59a) list_single_2heading_msg_pane_g4

0x0003,

0xfcb7,	// (0x0003f0ce) list_single_2heading_msg_pane_g_ParamLimits

0xfcb7,	// (0x0003f0ce) list_single_2heading_msg_pane_g

0xa0b9,	// (0x000394d0) list_single_2heading_msg_pane_t1_ParamLimits

0xa0b9,	// (0x000394d0) list_single_2heading_msg_pane_t1

0xa0e1,	// (0x000394f8) list_single_2heading_msg_pane_t2_ParamLimits

0xa0e1,	// (0x000394f8) list_single_2heading_msg_pane_t2

0xa115,	// (0x0003952c) list_single_2heading_msg_pane_t3_ParamLimits

0xa115,	// (0x0003952c) list_single_2heading_msg_pane_t3

0xa14e,	// (0x00039565) list_single_2heading_msg_pane_t4_ParamLimits

0xa14e,	// (0x00039565) list_single_2heading_msg_pane_t4

0x0003,

0xfcc0,	// (0x0003f0d7) list_single_2heading_msg_pane_t_ParamLimits

0xfcc0,	// (0x0003f0d7) list_single_2heading_msg_pane_t

0x22e6,	// (0x000316fd) title_pane_g4_ParamLimits

0x22e6,	// (0x000316fd) title_pane_g4

0xaa57,	// (0x00039e6e) title_pane_stacon_g3_ParamLimits

0xaa57,	// (0x00039e6e) title_pane_stacon_g3

0x7fb7,	// (0x000373ce) list_single_2graphic_im_pane_g4_ParamLimits

0x7fb7,	// (0x000373ce) list_single_2graphic_im_pane_g4

0x671b,	// (0x00035b32) popup_side_volume_key_window_cp

0x6c57,	// (0x0003606e) main_idle_act2_pane_t1

0xb82b,	// (0x0003ac42) toolbar_button_pane_g10

0xa8c4,	// (0x00039cdb) popup_toolbar_window_cp1

0x7360,	// (0x00036777) clock_nsta_pane_cp_t1

0x7360,	// (0x00036777) clock_nsta_pane_cp_t2

0x0001,

0xfac7,	// (0x0003eede) clock_nsta_pane_cp_t

0xad66,	// (0x0003a17d) navi_navi_volume_pane_cp2_ParamLimits

0xad72,	// (0x0003a189) popup_side_volume_key_window_g1_ParamLimits

0xad7e,	// (0x0003a195) popup_side_volume_key_window_g2_ParamLimits

0xad8a,	// (0x0003a1a1) popup_side_volume_key_window_g3_ParamLimits

0xf71c,	// (0x0003eb33) popup_side_volume_key_window_g_ParamLimits

0xbd8c,	// (0x0003b1a3) fep_hwr_aid_pane

0x1e3c,	// (0x00031253) bg_fep_hwr_top_pane_g4_ParamLimits

0x76ec,	// (0x00036b03) fep_hwr_top_pane_g1_ParamLimits

0x76da,	// (0x00036af1) fep_hwr_top_pane_g2_ParamLimits

0xbe45,	// (0x0003b25c) fep_hwr_top_pane_g3_ParamLimits

0xfb1c,	// (0x0003ef33) fep_hwr_top_pane_g_ParamLimits

0xbe5a,	// (0x0003b271) fep_hwr_top_text_pane_ParamLimits

0x64e7,	// (0x000358fe) aid_touch_tab_arrow_arrow_2

0x64de,	// (0x000358f5) aid_touch_tab_arrow_left_2

0xbda0,	// (0x0003b1b7) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xbdd7,	// (0x0003b1ee) fep_hwr_prediction_pane

0x77d7,	// (0x00036bee) fep_vkb_prediction_pane

0xda6d,	// (0x0003ce84) fep_vkb_side_pane_g3_ParamLimits

0xda6d,	// (0x0003ce84) fep_vkb_side_pane_g3

0x780f,	// (0x00036c26) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7b96,	// (0x00036fad) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7ba3,	// (0x00036fba) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc6,	// (0x0003efdd) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8474,	// (0x0003788b) fep_hwr_prediction_pane_g1

0xc19b,	// (0x0003b5b2) fep_hwr_prediction_pane_g2

0xc1a3,	// (0x0003b5ba) fep_hwr_prediction_pane_g3

0xc1ab,	// (0x0003b5c2) fep_hwr_prediction_pane_g4

0x0003,

0xfcc9,	// (0x0003f0e0) fep_hwr_prediction_pane_g

0x8474,	// (0x0003788b) fep_vkb_prediction_pane_g1

0x847e,	// (0x00037895) fep_vkb_prediction_pane_g2

0x8486,	// (0x0003789d) fep_vkb_prediction_pane_g3

0x848e,	// (0x000378a5) fep_vkb_prediction_pane_g4

0x0003,

0xfcd2,	// (0x0003f0e9) fep_vkb_prediction_pane_g

0x6bd8,	// (0x00035fef) slider_set_pane_g3

0x6bec,	// (0x00036003) slider_set_pane_g4

0x6c04,	// (0x0003601b) slider_set_pane_g5

0x6bd8,	// (0x00035fef) slider_set_pane_g6

0xbaf7,	// (0x0003af0e) slider_set_pane_g7

0x6985,	// (0x00035d9c) slider_form_pane_g3

0x698e,	// (0x00035da5) slider_form_pane_g4

0x6996,	// (0x00035dad) slider_form_pane_g5

0x6985,	// (0x00035d9c) slider_form_pane_g6

0xd59a,	// (0x0003c9b1) slider_form_pane_g7

0x6ecd,	// (0x000362e4) slider_set_pane_vc_g3

0x6ed6,	// (0x000362ed) slider_set_pane_vc_g4

0x6edf,	// (0x000362f6) slider_set_pane_vc_g5

0x6ecd,	// (0x000362e4) slider_set_pane_vc_g6

0x6ee8,	// (0x000362ff) slider_set_pane_vc_g7

0x7098,	// (0x000364af) slider_form_pane_vc_g1

0x70a1,	// (0x000364b8) slider_form_pane_vc_g2

0x70aa,	// (0x000364c1) slider_form_pane_vc_g3

0x7098,	// (0x000364af) slider_form_pane_vc_g4

0x70b3,	// (0x000364ca) slider_form_pane_vc_g5

0x0004,

0xfa99,	// (0x0003eeb0) slider_form_pane_vc_g

0x22c8,	// (0x000316df) main_idle_act3_pane

0x8496,	// (0x000378ad) ai3_links_pane

0xdc90,	// (0x0003d0a7) popup_ai3_data_window_ParamLimits

0xdc90,	// (0x0003d0a7) popup_ai3_data_window

0x22c8,	// (0x000316df) grid_ai3_links_pane

0xdca8,	// (0x0003d0bf) cell_ai3_links_pane_ParamLimits

0xdca8,	// (0x0003d0bf) cell_ai3_links_pane

0x849f,	// (0x000378b6) bg_popup_sub_pane_cp11

0x84ac,	// (0x000378c3) cell_ai3_links_pane_g1

0x22c8,	// (0x000316df) bg_popup_sub_pane_cp12

0x84d1,	// (0x000378e8) heading_ai3_data_pane

0x84d9,	// (0x000378f0) list_ai3_gene_pane

0x84e5,	// (0x000378fc) popup_ai3_data_window_g1

0x84ed,	// (0x00037904) heading_ai3_data_pane_g1

0x84f5,	// (0x0003790c) heading_ai3_data_pane_t1

0x8503,	// (0x0003791a) list_double_ai3_gene_pane_ParamLimits

0x8503,	// (0x0003791a) list_double_ai3_gene_pane

0x8510,	// (0x00037927) list_single_ai3_gene_pane_ParamLimits

0x8510,	// (0x00037927) list_single_ai3_gene_pane

0x7643,	// (0x00036a5a) list_highlight_pane_cp7_ParamLimits

0x7643,	// (0x00036a5a) list_highlight_pane_cp7

0x851d,	// (0x00037934) list_single_a13_gene_pane_t1_ParamLimits

0x851d,	// (0x00037934) list_single_a13_gene_pane_t1

0x8534,	// (0x0003794b) list_single_ai3_gene_pane_g1

0x853d,	// (0x00037954) list_single_ai3_gene_pane_g2

0x0001,

0xfcdb,	// (0x0003f0f2) list_single_ai3_gene_pane_g

0x8545,	// (0x0003795c) list_double_ai3_gene_pane_g1_ParamLimits

0x8545,	// (0x0003795c) list_double_ai3_gene_pane_g1

0x8551,	// (0x00037968) list_double_ai3_gene_pane_t1_ParamLimits

0x8551,	// (0x00037968) list_double_ai3_gene_pane_t1

0x856d,	// (0x00037984) list_double_ai3_gene_pane_t2_ParamLimits

0x856d,	// (0x00037984) list_double_ai3_gene_pane_t2

0x8582,	// (0x00037999) list_double_ai3_gene_pane_t3_ParamLimits

0x8582,	// (0x00037999) list_double_ai3_gene_pane_t3

0x0002,

0xfce0,	// (0x0003f0f7) list_double_ai3_gene_pane_t_ParamLimits

0xfce0,	// (0x0003f0f7) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa0af,	// (0x000394c6) aid_size_min_col_2

0xdc7c,	// (0x0003d093) aid_size_min_msg_ParamLimits

0xdc7c,	// (0x0003d093) aid_size_min_msg

0xda81,	// (0x0003ce98) fep_vkb_top_text_pane_g2_ParamLimits

0xda81,	// (0x0003ce98) fep_vkb_top_text_pane_g2

0x0001,

0xfb4c,	// (0x0003ef63) fep_vkb_top_text_pane_g_ParamLimits

0xfb4c,	// (0x0003ef63) fep_vkb_top_text_pane_g

0x22c8,	// (0x000316df) main_hc_apps_shell_pane

0x859f,	// (0x000379b6) grid_hc_apps_pane_ParamLimits

0x859f,	// (0x000379b6) grid_hc_apps_pane

0x85ae,	// (0x000379c5) list_hc_apps_pane

0x85b6,	// (0x000379cd) scroll_pane_cp37_ParamLimits

0x85b6,	// (0x000379cd) scroll_pane_cp37

0xdcc0,	// (0x0003d0d7) cell_hc_apps_pane_ParamLimits

0xdcc0,	// (0x0003d0d7) cell_hc_apps_pane

0xdd6e,	// (0x0003d185) cell_hc_apps_pane_g1_ParamLimits

0xdd6e,	// (0x0003d185) cell_hc_apps_pane_g1

0x85c2,	// (0x000379d9) cell_hc_apps_pane_g2_ParamLimits

0x85c2,	// (0x000379d9) cell_hc_apps_pane_g2

0x85de,	// (0x000379f5) cell_hc_apps_pane_g3_ParamLimits

0x85de,	// (0x000379f5) cell_hc_apps_pane_g3

0x0002,

0xfce7,	// (0x0003f0fe) cell_hc_apps_pane_g_ParamLimits

0xfce7,	// (0x0003f0fe) cell_hc_apps_pane_g

0xdd9f,	// (0x0003d1b6) cell_hc_apps_pane_t1_ParamLimits

0xdd9f,	// (0x0003d1b6) cell_hc_apps_pane_t1

0x247b,	// (0x00031892) grid_highlight_pane_cp10_ParamLimits

0x247b,	// (0x00031892) grid_highlight_pane_cp10

0xdddf,	// (0x0003d1f6) list_single_hc_apps_pane_ParamLimits

0xdddf,	// (0x0003d1f6) list_single_hc_apps_pane

0xde47,	// (0x0003d25e) list_single_hc_apps_pane_g1

0xc1b3,	// (0x0003b5ca) list_single_hc_apps_pane_g2

0x0001,

0xfcee,	// (0x0003f105) list_single_hc_apps_pane_g

0xc1cc,	// (0x0003b5e3) list_single_hc_apps_pane_g2_copy1

0xa173,	// (0x0003958a) list_single_hc_apps_pane_t1

0x2348,	// (0x0003175f) bg_set_opt_pane_cp_ParamLimits

0xa677,	// (0x00039a8e) setting_slider_pane_t1_ParamLimits

0xa690,	// (0x00039aa7) setting_slider_pane_t2_ParamLimits

0xa6aa,	// (0x00039ac1) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0003e97b) setting_slider_pane_t_ParamLimits

0xa6c2,	// (0x00039ad9) slider_set_pane_ParamLimits

0xb12f,	// (0x0003a546) control_pane_g5_ParamLimits

0xb12f,	// (0x0003a546) control_pane_g5

0x6947,	// (0x00035d5e) slider_set_pane_g1_ParamLimits

0xbaeb,	// (0x0003af02) slider_set_pane_g2_ParamLimits

0x6bd8,	// (0x00035fef) slider_set_pane_g3_ParamLimits

0x6bec,	// (0x00036003) slider_set_pane_g4_ParamLimits

0x6c04,	// (0x0003601b) slider_set_pane_g5_ParamLimits

0x6bd8,	// (0x00035fef) slider_set_pane_g6_ParamLimits

0xbaf7,	// (0x0003af0e) slider_set_pane_g7_ParamLimits

0xf96a,	// (0x0003ed81) slider_set_pane_g_ParamLimits

0x5254,	// (0x0003466b) navi_icon_text_pane_ParamLimits

0xcecb,	// (0x0003c2e2) aid_fill_nsta_2_ParamLimits

0xcef5,	// (0x0003c30c) aid_touch_tab_arrow_left_ParamLimits

0xcf01,	// (0x0003c318) aid_touch_tab_arrow_right_ParamLimits

0xcf6d,	// (0x0003c384) clock_nsta_pane_ParamLimits

0x64c0,	// (0x000358d7) navi_icon_pane_g1_ParamLimits

0x64cc,	// (0x000358e3) navi_text_pane_t1_ParamLimits

0x73b5,	// (0x000367cc) navi_icon_text_pane_g1_ParamLimits

0x73c1,	// (0x000367d8) navi_icon_text_pane_t1_ParamLimits

0xde47,	// (0x0003d25e) list_single_hc_apps_pane_g1_ParamLimits

0xc1b3,	// (0x0003b5ca) list_single_hc_apps_pane_g2_ParamLimits

0xfcee,	// (0x0003f105) list_single_hc_apps_pane_g_ParamLimits

0xc1cc,	// (0x0003b5e3) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xa173,	// (0x0003958a) list_single_hc_apps_pane_t1_ParamLimits

0xa4cb,	// (0x000398e2) popup_toolbar2_fixed_window_ParamLimits

0xa4cb,	// (0x000398e2) popup_toolbar2_fixed_window

0xb731,	// (0x0003ab48) popup_toolbar2_float_window

0x22c8,	// (0x000316df) bg_popup_sub_pane_cp27

0x8600,	// (0x00037a17) grid_toolbar2_float_pane

0x22c8,	// (0x000316df) bg_popup_sub_pane_cp26

0x8600,	// (0x00037a17) grid_toolbar2_fixed_pane

0xde60,	// (0x0003d277) cell_toolbar2_fixed_pane_ParamLimits

0xde60,	// (0x0003d277) cell_toolbar2_fixed_pane

0xde71,	// (0x0003d288) cell_toolbar2_fixed_pane_g1

0x1487,	// (0x0003089e) toolbar2_fixed_button_pane

0x5816,	// (0x00034c2d) toolbar2_fixed_button_pane_g1

0x5826,	// (0x00034c3d) toolbar2_fixed_button_pane_g2

0x581e,	// (0x00034c35) toolbar2_fixed_button_pane_g3

0x5836,	// (0x00034c4d) toolbar2_fixed_button_pane_g4

0x582e,	// (0x00034c45) toolbar2_fixed_button_pane_g5

0x583e,	// (0x00034c55) toolbar2_fixed_button_pane_g6

0x5846,	// (0x00034c5d) toolbar2_fixed_button_pane_g7

0x5856,	// (0x00034c6d) toolbar2_fixed_button_pane_g8

0x584e,	// (0x00034c65) toolbar2_fixed_button_pane_g9

0x0008,

0xf86c,	// (0x0003ec83) toolbar2_fixed_button_pane_g

0x8608,	// (0x00037a1f) cell_toolbar2_float_pane_ParamLimits

0x8608,	// (0x00037a1f) cell_toolbar2_float_pane

0x861c,	// (0x00037a33) cell_toolbar2_float_pane_g1

0x1487,	// (0x0003089e) toolbar2_fixed_button_pane_cp

0xd969,	// (0x0003cd80) fep_vkb_accented_list_pane_ParamLimits

0xd969,	// (0x0003cd80) fep_vkb_accented_list_pane

0xbfa8,	// (0x0003b3bf) bg_popup_fep_shadow_pane_g9

0x53c8,	// (0x000347df) bg_popup_fep_shadow_pane_cp3

0x4a91,	// (0x00033ea8) list_accented_list_pane

0x8625,	// (0x00037a3c) list_single_accented_list_pane_ParamLimits

0x8625,	// (0x00037a3c) list_single_accented_list_pane

0x53c8,	// (0x000347df) list_highlight_pane_cp10

0x8636,	// (0x00037a4d) list_single_accented_list_pane_t1

0xb681,	// (0x0003aa98) popup_slider_window_ParamLimits

0xb681,	// (0x0003aa98) popup_slider_window

0x846b,	// (0x00037882) aid_indentation_list_msg

0xdf26,	// (0x0003d33d) bg_popup_window_pane_cp19

0x86a2,	// (0x00037ab9) popup_slider_window_g1

0x86be,	// (0x00037ad5) popup_slider_window_g2

0x86da,	// (0x00037af1) popup_slider_window_g3

0x0005,

0xfcf3,	// (0x0003f10a) popup_slider_window_g

0x86f6,	// (0x00037b0d) popup_slider_window_t1

0x873c,	// (0x00037b53) small_volume_slider_vertical_pane

0x767e,	// (0x00036a95) small_volume_slider_vertical_pane_g1

0x767e,	// (0x00036a95) small_volume_slider_vertical_pane_g2

0x8758,	// (0x00037b6f) small_volume_slider_vertical_pane_g3

0x0002,

0xfd05,	// (0x0003f11c) small_volume_slider_vertical_pane_g

0xa29b,	// (0x000396b2) area_side_right_pane_ParamLimits

0xa29b,	// (0x000396b2) area_side_right_pane

0xc1e8,	// (0x0003b5ff) aid_size_side_button_ParamLimits

0xc1e8,	// (0x0003b5ff) aid_size_side_button

0xc1fc,	// (0x0003b613) grid_sctrl_middle_pane_ParamLimits

0xc1fc,	// (0x0003b613) grid_sctrl_middle_pane

0xc21b,	// (0x0003b632) sctrl_sk_bottom_pane

0xc22c,	// (0x0003b643) sctrl_sk_top_pane

0xc23e,	// (0x0003b655) aid_touch_sctrl_top

0x247b,	// (0x00031892) bg_sctrl_sk_pane_ParamLimits

0x247b,	// (0x00031892) bg_sctrl_sk_pane

0xc24b,	// (0x0003b662) sctrl_sk_top_pane_g1

0xc258,	// (0x0003b66f) sctrl_sk_top_pane_t1

0xc23e,	// (0x0003b655) aid_touch_sctrl_bottom

0x247b,	// (0x00031892) bg_sctrl_sk_pane_cp_ParamLimits

0x247b,	// (0x00031892) bg_sctrl_sk_pane_cp

0xc273,	// (0x0003b68a) sctrl_sk_bottom_pane_g1

0xc258,	// (0x0003b66f) sctrl_sk_bottom_pane_t1

0xc27c,	// (0x0003b693) cell_sctrl_middle_pane_ParamLimits

0xc27c,	// (0x0003b693) cell_sctrl_middle_pane

0xc297,	// (0x0003b6ae) aid_touch_sctrl_middle_ParamLimits

0xc297,	// (0x0003b6ae) aid_touch_sctrl_middle

0x498a,	// (0x00033da1) bg_sctrl_middle_pane_ParamLimits

0x498a,	// (0x00033da1) bg_sctrl_middle_pane

0x780f,	// (0x00036c26) cell_sctrl_middle_pane_g1_ParamLimits

0x780f,	// (0x00036c26) cell_sctrl_middle_pane_g1

0xc2a9,	// (0x0003b6c0) cell_sctrl_middle_pane_g2_ParamLimits

0xc2a9,	// (0x0003b6c0) cell_sctrl_middle_pane_g2

0x0001,

0xfd11,	// (0x0003f128) cell_sctrl_middle_pane_g_ParamLimits

0xfd11,	// (0x0003f128) cell_sctrl_middle_pane_g

0x5816,	// (0x00034c2d) bg_sctrl_middle_pane_g1

0x5826,	// (0x00034c3d) bg_sctrl_middle_pane_g2

0x581e,	// (0x00034c35) bg_sctrl_middle_pane_g3

0x5836,	// (0x00034c4d) bg_sctrl_middle_pane_g4

0x582e,	// (0x00034c45) bg_sctrl_middle_pane_g5

0x583e,	// (0x00034c55) bg_sctrl_middle_pane_g6

0x5846,	// (0x00034c5d) bg_sctrl_middle_pane_g7

0x5856,	// (0x00034c6d) bg_sctrl_middle_pane_g8

0x0007,

0xfd16,	// (0x0003f12d) bg_sctrl_middle_pane_g

0x584e,	// (0x00034c65) bg_sctrl_middle_pane_g8_copy1

0x5816,	// (0x00034c2d) bg_sctrl_sk_pane_g1

0x5826,	// (0x00034c3d) bg_sctrl_sk_pane_g2

0x581e,	// (0x00034c35) bg_sctrl_sk_pane_g3

0x0008,

0xf86c,	// (0x0003ec83) bg_sctrl_sk_pane_g

0x28c8,	// (0x00031cdf) aid_size_touch_scroll_bar

0x5836,	// (0x00034c4d) bg_sctrl_sk_pane_g4

0x582e,	// (0x00034c45) bg_sctrl_sk_pane_g5

0x583e,	// (0x00034c55) bg_sctrl_sk_pane_g6

0x5846,	// (0x00034c5d) bg_sctrl_sk_pane_g7

0x5856,	// (0x00034c6d) bg_sctrl_sk_pane_g8

0x584e,	// (0x00034c65) bg_sctrl_sk_pane_g9

0xb2f2,	// (0x0003a709) popup_fep_china_hwr2_fs_candidate_window

0xb2fc,	// (0x0003a713) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb2fc,	// (0x0003a713) popup_fep_china_hwr2_fs_control_window

0x780f,	// (0x00036c26) sctrl_sk_top_pane_g2

0x0001,

0xfd0c,	// (0x0003f123) sctrl_sk_top_pane_g

0xdfa0,	// (0x0003d3b7) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdfa0,	// (0x0003d3b7) aid_fep_china_hwr2_fs_cell

0xdfb2,	// (0x0003d3c9) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdfb2,	// (0x0003d3c9) bg_popup_fep_shadow_pane_cp4

0xdfc9,	// (0x0003d3e0) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdfc9,	// (0x0003d3e0) bg_popup_fep_shadow_pane_cp5

0xdfdb,	// (0x0003d3f2) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdfdb,	// (0x0003d3f2) popup_fep_china_hwr2_fs_control_bar_grid

0xdfeb,	// (0x0003d402) popup_fep_china_hwr2_fs_control_funtion_grid

0x8761,	// (0x00037b78) aid_fep_china_hwr2_fs_candi_cell

0x22c8,	// (0x000316df) bg_popup_fep_shadow_pane_cp6

0x876b,	// (0x00037b82) popup_fep_china_hwr2_fs_candidate_grid

0xdff3,	// (0x0003d40a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdff3,	// (0x0003d40a) cell_fep_china_hwr2_fs_funtion_grid

0x767e,	// (0x00036a95) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8775,	// (0x00037b8c) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8775,	// (0x00037b8c) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8783,	// (0x00037b9a) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8783,	// (0x00037b9a) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd27,	// (0x0003f13e) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd27,	// (0x0003f13e) cell_fep_china_hwr2_fs_funtion_grid_g

0xe00b,	// (0x0003d422) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe00b,	// (0x0003d422) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe020,	// (0x0003d437) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe020,	// (0x0003d437) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2c,	// (0x0003f143) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2c,	// (0x0003f143) cell_fep_china_hwr2_fs_funtion_grid_t

0x8799,	// (0x00037bb0) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x87a1,	// (0x00037bb8) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x87a9,	// (0x00037bc0) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd31,	// (0x0003f148) popup_fep_china_hwr2_fs_control_bar_grid_g

0x87b1,	// (0x00037bc8) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x87b1,	// (0x00037bc8) cell_fep_china_hwr2_fs_candidate_grid

0x87ca,	// (0x00037be1) popup_fep_china_hwr2_fs_candidate_grid_g20

0x87d2,	// (0x00037be9) popup_fep_china_hwr2_fs_candidate_grid_g21

0x767e,	// (0x00036a95) cell_fep_china_hwr2_fs_candidate_grid_g1

0x767e,	// (0x00036a95) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb51,	// (0x0003ef68) cell_fep_china_hwr2_fs_candidate_grid_g

0x87da,	// (0x00037bf1) cell_fep_china_hwr2_fs_candidate_grid_t1

0x5663,	// (0x00034a7a) clock_nsta_pane_cp_24_ParamLimits

0x5663,	// (0x00034a7a) clock_nsta_pane_cp_24

0x56cb,	// (0x00034ae2) indicator_nsta_pane_cp_24_ParamLimits

0x56cb,	// (0x00034ae2) indicator_nsta_pane_cp_24

0x63bc,	// (0x000357d3) heading_pane_g1

0x0001,

0xf8d1,	// (0x0003ece8) heading_pane_g

0x6a88,	// (0x00035e9f) grid_sct_catagory_button_pane

0x68c8,	// (0x00035cdf) scroll_pane_cp5_ParamLimits

0x73e7,	// (0x000367fe) button_value_adjust_pane_cp5_ParamLimits

0x73e7,	// (0x000367fe) button_value_adjust_pane_cp5

0x74a5,	// (0x000368bc) form2_midp_time_pane_ParamLimits

0x87e8,	// (0x00037bff) cell_sct_catagory_button_pane_ParamLimits

0x87e8,	// (0x00037bff) cell_sct_catagory_button_pane

0x7643,	// (0x00036a5a) bg_button_pane_cp01_ParamLimits

0x7643,	// (0x00036a5a) bg_button_pane_cp01

0x767e,	// (0x00036a95) cell_sct_catagory_button_pane_g1

0xb6c0,	// (0x0003aad7) popup_tb_extension_window

0xe03c,	// (0x0003d453) aid_size_cell_ext_ParamLimits

0xe03c,	// (0x0003d453) aid_size_cell_ext

0x247b,	// (0x00031892) bg_tb_trans_pane_cp1_ParamLimits

0x247b,	// (0x00031892) bg_tb_trans_pane_cp1

0xe05c,	// (0x0003d473) grid_tb_ext_pane_ParamLimits

0xe05c,	// (0x0003d473) grid_tb_ext_pane

0xe08e,	// (0x0003d4a5) cell_tb_ext_pane_ParamLimits

0xe08e,	// (0x0003d4a5) cell_tb_ext_pane

0xe0a5,	// (0x0003d4bc) cell_tb_ext_pane_g1_ParamLimits

0xe0a5,	// (0x0003d4bc) cell_tb_ext_pane_g1

0x87fa,	// (0x00037c11) cell_tb_ext_pane_t1

0x247b,	// (0x00031892) list_highlight_pane_cp11_ParamLimits

0x247b,	// (0x00031892) list_highlight_pane_cp11

0xa4ea,	// (0x00039901) popup_uni_indicator_window_ParamLimits

0xa4ea,	// (0x00039901) popup_uni_indicator_window

0x498a,	// (0x00033da1) bg_popup_sub_pane_cp14

0x8815,	// (0x00037c2c) list_uniindi_pane

0x8821,	// (0x00037c38) uniindi_top_pane

0x247b,	// (0x00031892) bg_uniindi_top_pane

0x8840,	// (0x00037c57) uniindi_top_pane_g1

0x8856,	// (0x00037c6d) uniindi_top_pane_g2

0x0003,

0xfd38,	// (0x0003f14f) uniindi_top_pane_g

0x8880,	// (0x00037c97) uniindi_top_pane_t1

0x88aa,	// (0x00037cc1) list_single_uniindi_pane_ParamLimits

0x88aa,	// (0x00037cc1) list_single_uniindi_pane

0x767e,	// (0x00036a95) bg_uniindi_top_pane_g1

0x88bd,	// (0x00037cd4) list_single_uniindi_pane_g1

0x88d0,	// (0x00037ce7) list_single_uniindi_pane_t1

0x22c8,	// (0x000316df) control_bg_pane

0x88f5,	// (0x00037d0c) bg_sctrl_sk_pane_cp1

0x88fe,	// (0x00037d15) bg_sctrl_sk_pane_cp2

0x8907,	// (0x00037d1e) control_bg_pane_g1

0x8910,	// (0x00037d27) control_bg_pane_g2

0x0001,

0xfd41,	// (0x0003f158) control_bg_pane_g

0x72ab,	// (0x000366c2) cell_indicator_nsta_pane_g1_ParamLimits

0xd6e4,	// (0x0003cafb) cell_indicator_nsta_pane_g2_ParamLimits

0xfab5,	// (0x0003eecc) cell_indicator_nsta_pane_g_ParamLimits

0x9f10,	// (0x00039327) form2_midp_time_pane_t1_ParamLimits

0x270a,	// (0x00031b21) main_idle_act4_pane_ParamLimits

0x270a,	// (0x00031b21) main_idle_act4_pane

0xb6c0,	// (0x0003aad7) popup_tb_extension_window_ParamLimits

0xe07e,	// (0x0003d495) tb_ext_find_pane_ParamLimits

0xe07e,	// (0x0003d495) tb_ext_find_pane

0x8919,	// (0x00037d30) ai_gene_pane_1_cp1

0x545c,	// (0x00034873) ai_gene_pane_2_cp1

0x8921,	// (0x00037d38) list_single_idle_plugin_calendar_pane

0x892a,	// (0x00037d41) list_single_idle_plugin_notification_pane

0x8933,	// (0x00037d4a) list_single_idle_plugin_player_pane

0xe0c2,	// (0x0003d4d9) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe0c2,	// (0x0003d4d9) list_single_idle_plugin_shortcut_pane

0xe0e4,	// (0x0003d4fb) main_idle_act4_pane_t1

0xe0f6,	// (0x0003d50d) main_idle_act4_pane_t2

0x0001,

0xfd46,	// (0x0003f15d) main_idle_act4_pane_t

0xe108,	// (0x0003d51f) middle_sk_idle_act4_pane_ParamLimits

0xe108,	// (0x0003d51f) middle_sk_idle_act4_pane

0xe11e,	// (0x0003d535) popup_clock_digital_analogue_window_cp2

0xe138,	// (0x0003d54f) shortcut_wheel_idle_act4_pane_ParamLimits

0xe138,	// (0x0003d54f) shortcut_wheel_idle_act4_pane

0x767e,	// (0x00036a95) shortcut_wheel_idle_act4_pane_g1

0x767e,	// (0x00036a95) shortcut_wheel_idle_act4_pane_g2

0x767e,	// (0x00036a95) shortcut_wheel_idle_act4_pane_g3

0x767e,	// (0x00036a95) shortcut_wheel_idle_act4_pane_g4

0x767e,	// (0x00036a95) shortcut_wheel_idle_act4_pane_g5

0x893c,	// (0x00037d53) shortcut_wheel_idle_act4_pane_g6

0x8944,	// (0x00037d5b) shortcut_wheel_idle_act4_pane_g7

0x894c,	// (0x00037d63) shortcut_wheel_idle_act4_pane_g8

0x8954,	// (0x00037d6b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4b,	// (0x0003f162) shortcut_wheel_idle_act4_pane_g

0x780f,	// (0x00036c26) middle_sk_idle_act4_pane_g1_ParamLimits

0x780f,	// (0x00036c26) middle_sk_idle_act4_pane_g1

0xe1a8,	// (0x0003d5bf) middle_sk_idle_act4_pane_g2_ParamLimits

0xe1a8,	// (0x0003d5bf) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6e,	// (0x0003f185) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6e,	// (0x0003f185) middle_sk_idle_act4_pane_g

0xe1b4,	// (0x0003d5cb) middle_sk_idle_act4_pane_t1_ParamLimits

0xe1b4,	// (0x0003d5cb) middle_sk_idle_act4_pane_t1

0xe1d1,	// (0x0003d5e8) grid_ai_shortcut_pane_ParamLimits

0xe1d1,	// (0x0003d5e8) grid_ai_shortcut_pane

0xe1ea,	// (0x0003d601) list_highlight_pane_cp16_ParamLimits

0xe1ea,	// (0x0003d601) list_highlight_pane_cp16

0xe1f7,	// (0x0003d60e) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe1f7,	// (0x0003d60e) list_single_idle_plugin_shortcut_pane_g1

0xe203,	// (0x0003d61a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe203,	// (0x0003d61a) list_single_idle_plugin_shortcut_pane_g2

0xe21b,	// (0x0003d632) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe21b,	// (0x0003d632) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd73,	// (0x0003f18a) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd73,	// (0x0003f18a) list_single_idle_plugin_shortcut_pane_g

0xe22e,	// (0x0003d645) cell_ai_shortcut_pane_ParamLimits

0xe22e,	// (0x0003d645) cell_ai_shortcut_pane

0xe24f,	// (0x0003d666) cell_ai_shortcut_pane_g1_ParamLimits

0xe24f,	// (0x0003d666) cell_ai_shortcut_pane_g1

0x8919,	// (0x00037d30) ai_gene_pane_1_cp2

0x895c,	// (0x00037d73) ai_gene_pane_2_cp2

0x8964,	// (0x00037d7b) list_highlight_pane_cp15

0x896d,	// (0x00037d84) list_single_idle_plugin_calendar_pane_g1

0x8964,	// (0x00037d7b) list_highlight_pane_cp17

0x8975,	// (0x00037d8c) list_single_idle_plugin_calendar_pane_g1_copy1

0x897d,	// (0x00037d94) list_single_idle_plugin_player_pane_g1

0x6cf7,	// (0x0003610e) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7a,	// (0x0003f191) list_single_idle_plugin_player_pane_g

0x8985,	// (0x00037d9c) list_single_idle_plugin_player_pane_t1

0x8993,	// (0x00037daa) list_single_idle_plugin_player_pane_t2

0x89a1,	// (0x00037db8) list_single_idle_plugin_player_pane_t3

0x89af,	// (0x00037dc6) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7f,	// (0x0003f196) list_single_idle_plugin_player_pane_t

0x89bd,	// (0x00037dd4) wait_bar_pane_cp15

0x89c5,	// (0x00037ddc) grid_ai_notification_pane

0x6cf7,	// (0x0003610e) list_single_idle_plugin_notification_pane_g1

0xe271,	// (0x0003d688) cell_ai_notification_pane_ParamLimits

0xe271,	// (0x0003d688) cell_ai_notification_pane

0x89ce,	// (0x00037de5) cell_ai_notification_pane_g1

0x89d6,	// (0x00037ded) cell_ai_notification_pane_t1

0xe27e,	// (0x0003d695) tb_ext_find_button_pane

0xe286,	// (0x0003d69d) tb_ext_find_pane_g1

0xe28e,	// (0x0003d6a5) tb_ext_find_pane_t1

0x4eb6,	// (0x000342cd) tb_ext_find_button_pane_g1

0x89e4,	// (0x00037dfb) tb_ext_find_button_pane_g2

0x0001,

0xfd88,	// (0x0003f19f) tb_ext_find_button_pane_g

0xe0e4,	// (0x0003d4fb) main_idle_act4_pane_t1_ParamLimits

0xe0f6,	// (0x0003d50d) main_idle_act4_pane_t2_ParamLimits

0xfd46,	// (0x0003f15d) main_idle_act4_pane_t_ParamLimits

0xe11e,	// (0x0003d535) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe12c,	// (0x0003d543) sat_plugin_idle_act4_pane_ParamLimits

0xe12c,	// (0x0003d543) sat_plugin_idle_act4_pane

0xe29c,	// (0x0003d6b3) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe29c,	// (0x0003d6b3) sat_plugin_idle_act4_pane_t1

0xe2af,	// (0x0003d6c6) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe2af,	// (0x0003d6c6) sat_plugin_idle_act4_pane_t2

0xe2c2,	// (0x0003d6d9) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe2c2,	// (0x0003d6d9) sat_plugin_idle_act4_pane_t3

0xe2d5,	// (0x0003d6ec) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe2d5,	// (0x0003d6ec) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8d,	// (0x0003f1a4) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8d,	// (0x0003f1a4) sat_plugin_idle_act4_pane_t

0xa433,	// (0x0003984a) popup_battery_window_ParamLimits

0xa433,	// (0x0003984a) popup_battery_window

0x247b,	// (0x00031892) bg_popup_sub_pane_cp25_ParamLimits

0x247b,	// (0x00031892) bg_popup_sub_pane_cp25

0x89ed,	// (0x00037e04) popup_battery_window_g1_ParamLimits

0x89ed,	// (0x00037e04) popup_battery_window_g1

0x89f9,	// (0x00037e10) popup_battery_window_t1_ParamLimits

0x89f9,	// (0x00037e10) popup_battery_window_t1

0x8a0b,	// (0x00037e22) popup_battery_window_t2_ParamLimits

0x8a0b,	// (0x00037e22) popup_battery_window_t2

0x0001,

0xfd96,	// (0x0003f1ad) popup_battery_window_t_ParamLimits

0xfd96,	// (0x0003f1ad) popup_battery_window_t

0xaf71,	// (0x0003a388) midp_canvas_pane_ParamLimits

0xafd5,	// (0x0003a3ec) midp_keypad_pane_ParamLimits

0xafd5,	// (0x0003a3ec) midp_keypad_pane

0x4ae3,	// (0x00033efa) main_midp_pane_ParamLimits

0x737e,	// (0x00036795) signal_pane_g2_cp_ParamLimits

0xe2e8,	// (0x0003d6ff) aid_size_cell_midp_keypad_ParamLimits

0xe2e8,	// (0x0003d6ff) aid_size_cell_midp_keypad

0xe302,	// (0x0003d719) midp_keyp_game_grid_pane_ParamLimits

0xe302,	// (0x0003d719) midp_keyp_game_grid_pane

0xe322,	// (0x0003d739) midp_keyp_rocker_pane_ParamLimits

0xe322,	// (0x0003d739) midp_keyp_rocker_pane

0xe357,	// (0x0003d76e) midp_keyp_sk_left_pane_ParamLimits

0xe357,	// (0x0003d76e) midp_keyp_sk_left_pane

0xe3af,	// (0x0003d7c6) midp_keyp_sk_right_pane_ParamLimits

0xe3af,	// (0x0003d7c6) midp_keyp_sk_right_pane

0x22c8,	// (0x000316df) bg_button_pane_cp03

0xe407,	// (0x0003d81e) midp_keyp_sk_left_pane_g1

0x22c8,	// (0x000316df) bg_button_pane_cp04

0xe407,	// (0x0003d81e) midp_keyp_sk_right_pane_g1

0x767e,	// (0x00036a95) midp_keyp_rocker_pane_g1

0xe410,	// (0x0003d827) keyp_game_cell_pane_ParamLimits

0xe410,	// (0x0003d827) keyp_game_cell_pane

0x22c8,	// (0x000316df) bg_button_pane_cp02

0xe423,	// (0x0003d83a) keyp_game_cell_pane_g1

0xa469,	// (0x00039880) popup_fep_vkb2_window_ParamLimits

0xa469,	// (0x00039880) popup_fep_vkb2_window

0xc2c7,	// (0x0003b6de) aid_size_cell_vkb2_ParamLimits

0xc2c7,	// (0x0003b6de) aid_size_cell_vkb2

0xc31b,	// (0x0003b732) popup_fep_vkb2_window_g1_ParamLimits

0xc31b,	// (0x0003b732) popup_fep_vkb2_window_g1

0xc363,	// (0x0003b77a) vkb2_area_bottom_pane_ParamLimits

0xc363,	// (0x0003b77a) vkb2_area_bottom_pane

0xc3af,	// (0x0003b7c6) vkb2_area_keypad_pane_ParamLimits

0xc3af,	// (0x0003b7c6) vkb2_area_keypad_pane

0xc3f1,	// (0x0003b808) vkb2_area_top_pane_ParamLimits

0xc3f1,	// (0x0003b808) vkb2_area_top_pane

0xc46b,	// (0x0003b882) vkb2_top_entry_pane_ParamLimits

0xc46b,	// (0x0003b882) vkb2_top_entry_pane

0xc495,	// (0x0003b8ac) vkb2_top_grid_left_pane_ParamLimits

0xc495,	// (0x0003b8ac) vkb2_top_grid_left_pane

0xc4b3,	// (0x0003b8ca) vkb2_top_grid_right_pane_ParamLimits

0xc4b3,	// (0x0003b8ca) vkb2_top_grid_right_pane

0xc4d1,	// (0x0003b8e8) vkb2_cell_keypad_pane_ParamLimits

0xc4d1,	// (0x0003b8e8) vkb2_cell_keypad_pane

0xc5a2,	// (0x0003b9b9) vkb2_area_bottom_grid_pane_ParamLimits

0xc5a2,	// (0x0003b9b9) vkb2_area_bottom_grid_pane

0xc5c8,	// (0x0003b9df) vkb2_area_bottom_pane_g1_ParamLimits

0xc5c8,	// (0x0003b9df) vkb2_area_bottom_pane_g1

0xc5ec,	// (0x0003ba03) vkb2_area_bottom_pane_g2_ParamLimits

0xc5ec,	// (0x0003ba03) vkb2_area_bottom_pane_g2

0xc61a,	// (0x0003ba31) vkb2_area_bottom_pane_g3_ParamLimits

0xc61a,	// (0x0003ba31) vkb2_area_bottom_pane_g3

0x0002,

0xfd9b,	// (0x0003f1b2) vkb2_area_bottom_pane_g_ParamLimits

0xfd9b,	// (0x0003f1b2) vkb2_area_bottom_pane_g

0xc67b,	// (0x0003ba92) vkb2_top_cell_left_pane_ParamLimits

0xc67b,	// (0x0003ba92) vkb2_top_cell_left_pane

0xe42c,	// (0x0003d843) vkb2_top_entry_pane_g1_ParamLimits

0xe42c,	// (0x0003d843) vkb2_top_entry_pane_g1

0xe43a,	// (0x0003d851) vkb2_top_entry_pane_t1_ParamLimits

0xe43a,	// (0x0003d851) vkb2_top_entry_pane_t1

0x8a30,	// (0x00037e47) vkb2_top_entry_pane_t2_ParamLimits

0x8a30,	// (0x00037e47) vkb2_top_entry_pane_t2

0x8a62,	// (0x00037e79) vkb2_top_entry_pane_t3_ParamLimits

0x8a62,	// (0x00037e79) vkb2_top_entry_pane_t3

0x0002,

0xfda2,	// (0x0003f1b9) vkb2_top_entry_pane_t_ParamLimits

0xfda2,	// (0x0003f1b9) vkb2_top_entry_pane_t

0xc6c8,	// (0x0003badf) vkb2_top_grid_right_pane_g1_ParamLimits

0xc6c8,	// (0x0003badf) vkb2_top_grid_right_pane_g1

0xc6de,	// (0x0003baf5) vkb2_top_grid_right_pane_g2_ParamLimits

0xc6de,	// (0x0003baf5) vkb2_top_grid_right_pane_g2

0xc6f6,	// (0x0003bb0d) vkb2_top_grid_right_pane_g3_ParamLimits

0xc6f6,	// (0x0003bb0d) vkb2_top_grid_right_pane_g3

0xc70e,	// (0x0003bb25) vkb2_top_grid_right_pane_g4_ParamLimits

0xc70e,	// (0x0003bb25) vkb2_top_grid_right_pane_g4

0x0003,

0xfda9,	// (0x0003f1c0) vkb2_top_grid_right_pane_g_ParamLimits

0xfda9,	// (0x0003f1c0) vkb2_top_grid_right_pane_g

0xc724,	// (0x0003bb3b) vkb2_top_cell_left_pane_g1

0xc73b,	// (0x0003bb52) vkb2_cell_keypad_pane_g1_ParamLimits

0xc73b,	// (0x0003bb52) vkb2_cell_keypad_pane_g1

0x8a86,	// (0x00037e9d) vkb2_cell_keypad_pane_t1_ParamLimits

0x8a86,	// (0x00037e9d) vkb2_cell_keypad_pane_t1

0xc749,	// (0x0003bb60) vkb2_cell_bottom_grid_pane_ParamLimits

0xc749,	// (0x0003bb60) vkb2_cell_bottom_grid_pane

0xc782,	// (0x0003bb99) vkb2_cell_bottom_grid_pane_g1

0xe14c,	// (0x0003d563) aid_call2_pane_cp02

0xe154,	// (0x0003d56b) aid_call_pane_cp02

0xe15c,	// (0x0003d573) clock_digital_number_pane_cp10

0xe164,	// (0x0003d57b) clock_digital_number_pane_cp11

0xe16c,	// (0x0003d583) clock_digital_number_pane_cp12

0xe174,	// (0x0003d58b) clock_digital_number_pane_cp13

0xe17c,	// (0x0003d593) clock_digital_separator_pane_cp10

0x4eb6,	// (0x000342cd) popup_clock_digital_analogue_window_cp2_g1

0x4eb6,	// (0x000342cd) popup_clock_digital_analogue_window_cp2_g2

0xe184,	// (0x0003d59b) popup_clock_digital_analogue_window_cp2_g3

0x4eb6,	// (0x000342cd) popup_clock_digital_analogue_window_cp2_g4

0xe184,	// (0x0003d59b) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5e,	// (0x0003f175) popup_clock_digital_analogue_window_cp2_g

0xe18c,	// (0x0003d5a3) popup_clock_digital_analogue_window_cp2_t1

0xe19a,	// (0x0003d5b1) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd69,	// (0x0003f180) popup_clock_digital_analogue_window_cp2_t

0x767e,	// (0x00036a95) clock_digital_number_pane_cp10_g1

0x767e,	// (0x00036a95) clock_digital_number_pane_cp10_g2

0x0001,

0xfb51,	// (0x0003ef68) clock_digital_number_pane_cp10_g

0x767e,	// (0x00036a95) clock_digital_separator_pane_cp10_g1

0x767e,	// (0x00036a95) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb51,	// (0x0003ef68) clock_digital_separator_pane_cp10_g

0x8862,	// (0x00037c79) uniindi_top_pane_g3

0x8873,	// (0x00037c8a) uniindi_top_pane_g4

0xc55c,	// (0x0003b973) vkb2_row_keypad_pane_ParamLimits

0xc55c,	// (0x0003b973) vkb2_row_keypad_pane

0xc7a2,	// (0x0003bbb9) vkb2_cell_t_keypad_pane_ParamLimits

0xc7a2,	// (0x0003bbb9) vkb2_cell_t_keypad_pane

0xc7b2,	// (0x0003bbc9) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xc7b2,	// (0x0003bbc9) vkb2_cell_t_keypad_pane_cp08

0xc7c5,	// (0x0003bbdc) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xc7c5,	// (0x0003bbdc) vkb2_cell_t_keypad_pane_cp09

0xc7d9,	// (0x0003bbf0) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xc7d9,	// (0x0003bbf0) vkb2_cell_t_keypad_pane_cp01

0xc7ea,	// (0x0003bc01) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xc7ea,	// (0x0003bc01) vkb2_cell_t_keypad_pane_cp02

0xc7fb,	// (0x0003bc12) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xc7fb,	// (0x0003bc12) vkb2_cell_t_keypad_pane_cp03

0xc80c,	// (0x0003bc23) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xc80c,	// (0x0003bc23) vkb2_cell_t_keypad_pane_cp04

0xc81d,	// (0x0003bc34) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xc81d,	// (0x0003bc34) vkb2_cell_t_keypad_pane_cp05

0xc82e,	// (0x0003bc45) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xc82e,	// (0x0003bc45) vkb2_cell_t_keypad_pane_cp06

0xc83f,	// (0x0003bc56) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xc83f,	// (0x0003bc56) vkb2_cell_t_keypad_pane_cp07

0xc850,	// (0x0003bc67) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xc850,	// (0x0003bc67) vkb2_cell_t_keypad_pane_cp10

0x780f,	// (0x00036c26) vkb2_cell_t_keypad_pane_g1

0x8a9d,	// (0x00037eb4) vkb2_cell_t_keypad_pane_t1

0x22c8,	// (0x000316df) popup_grid_graphic2_window

0xe46c,	// (0x0003d883) aid_size_cell_graphic2_ParamLimits

0xe46c,	// (0x0003d883) aid_size_cell_graphic2

0xe4a4,	// (0x0003d8bb) bg_popup_window_pane_cp21_ParamLimits

0xe4a4,	// (0x0003d8bb) bg_popup_window_pane_cp21

0xe4b2,	// (0x0003d8c9) graphic2_pages_pane_ParamLimits

0xe4b2,	// (0x0003d8c9) graphic2_pages_pane

0xe4f8,	// (0x0003d90f) grid_graphic2_control_pane_ParamLimits

0xe4f8,	// (0x0003d90f) grid_graphic2_control_pane

0xe536,	// (0x0003d94d) grid_graphic2_pane_ParamLimits

0xe536,	// (0x0003d94d) grid_graphic2_pane

0xe5aa,	// (0x0003d9c1) cell_graphic2_pane

0x22c8,	// (0x000316df) main_comp_mode_pane

0x84d9,	// (0x000378f0) list_ai3_gene_pane_ParamLimits

0xdf26,	// (0x0003d33d) bg_popup_window_pane_cp19_ParamLimits

0x8644,	// (0x00037a5b) bg_touch_area_indi_pane_ParamLimits

0x8644,	// (0x00037a5b) bg_touch_area_indi_pane

0x865a,	// (0x00037a71) bg_touch_area_indi_pane_cp01_ParamLimits

0x865a,	// (0x00037a71) bg_touch_area_indi_pane_cp01

0x8670,	// (0x00037a87) bg_touch_area_indi_pane_cp02_ParamLimits

0x8670,	// (0x00037a87) bg_touch_area_indi_pane_cp02

0x8688,	// (0x00037a9f) bg_touch_area_indi_pane_cp03_ParamLimits

0x8688,	// (0x00037a9f) bg_touch_area_indi_pane_cp03

0x86a2,	// (0x00037ab9) popup_slider_window_g1_ParamLimits

0x86be,	// (0x00037ad5) popup_slider_window_g2_ParamLimits

0x86da,	// (0x00037af1) popup_slider_window_g3_ParamLimits

0xfcf3,	// (0x0003f10a) popup_slider_window_g_ParamLimits

0x86f6,	// (0x00037b0d) popup_slider_window_t1_ParamLimits

0x873c,	// (0x00037b53) small_volume_slider_vertical_pane_ParamLimits

0xe5aa,	// (0x0003d9c1) cell_graphic2_pane_ParamLimits

0xe610,	// (0x0003da27) bg_button_pane_cp10_ParamLimits

0xe610,	// (0x0003da27) bg_button_pane_cp10

0xe623,	// (0x0003da3a) bg_button_pane_cp11_ParamLimits

0xe623,	// (0x0003da3a) bg_button_pane_cp11

0xe636,	// (0x0003da4d) graphic2_pages_pane_g1_ParamLimits

0xe636,	// (0x0003da4d) graphic2_pages_pane_g1

0xe651,	// (0x0003da68) graphic2_pages_pane_g2_ParamLimits

0xe651,	// (0x0003da68) graphic2_pages_pane_g2

0x0001,

0xfdb7,	// (0x0003f1ce) graphic2_pages_pane_g_ParamLimits

0xfdb7,	// (0x0003f1ce) graphic2_pages_pane_g

0xe669,	// (0x0003da80) graphic2_pages_pane_t1_ParamLimits

0xe669,	// (0x0003da80) graphic2_pages_pane_t1

0xe67f,	// (0x0003da96) cell_graphic2_control_pane_ParamLimits

0xe67f,	// (0x0003da96) cell_graphic2_control_pane

0xe6a0,	// (0x0003dab7) cell_graphic2_pane_g1_ParamLimits

0xe6a0,	// (0x0003dab7) cell_graphic2_pane_g1

0xe6ad,	// (0x0003dac4) cell_graphic2_pane_g2_ParamLimits

0xe6ad,	// (0x0003dac4) cell_graphic2_pane_g2

0xe6ba,	// (0x0003dad1) cell_graphic2_pane_g3_ParamLimits

0xe6ba,	// (0x0003dad1) cell_graphic2_pane_g3

0xe6c7,	// (0x0003dade) cell_graphic2_pane_g4_ParamLimits

0xe6c7,	// (0x0003dade) cell_graphic2_pane_g4

0xe6d4,	// (0x0003daeb) cell_graphic2_pane_g5_ParamLimits

0xe6d4,	// (0x0003daeb) cell_graphic2_pane_g5

0x0004,

0xfdbc,	// (0x0003f1d3) cell_graphic2_pane_g_ParamLimits

0xfdbc,	// (0x0003f1d3) cell_graphic2_pane_g

0xe6ef,	// (0x0003db06) cell_graphic2_pane_t1_ParamLimits

0xe6ef,	// (0x0003db06) cell_graphic2_pane_t1

0x588a,	// (0x00034ca1) grid_highlight_pane_cp11_ParamLimits

0x588a,	// (0x00034ca1) grid_highlight_pane_cp11

0x247b,	// (0x00031892) bg_button_pane_cp05

0xe718,	// (0x0003db2f) cell_graphic2_control_pane_g1

0x767e,	// (0x00036a95) bg_touch_area_indi_pane_g1

0x8aaf,	// (0x00037ec6) aid_cmod_rocker_key_size

0x8ab9,	// (0x00037ed0) aid_cmode_itu_key_size

0x8ac3,	// (0x00037eda) main_cmode_video_pane

0x8acd,	// (0x00037ee4) main_comp_mode_itu_pane

0x8ad9,	// (0x00037ef0) main_comp_mode_rocker_pane

0x8ae5,	// (0x00037efc) cell_cmode_rocker_pane_ParamLimits

0x8ae5,	// (0x00037efc) cell_cmode_rocker_pane

0x8af7,	// (0x00037f0e) cell_cmode_itu_pane_ParamLimits

0x8af7,	// (0x00037f0e) cell_cmode_itu_pane

0x498a,	// (0x00033da1) bg_button_pane_cp06_ParamLimits

0x498a,	// (0x00033da1) bg_button_pane_cp06

0x780f,	// (0x00036c26) cell_cmode_rocker_pane_g1_ParamLimits

0x780f,	// (0x00036c26) cell_cmode_rocker_pane_g1

0x8775,	// (0x00037b8c) cell_cmode_rocker_pane_g2_ParamLimits

0x8775,	// (0x00037b8c) cell_cmode_rocker_pane_g2

0x0001,

0xfdcc,	// (0x0003f1e3) cell_cmode_rocker_pane_g_ParamLimits

0xfdcc,	// (0x0003f1e3) cell_cmode_rocker_pane_g

0x22c8,	// (0x000316df) bg_button_pane_cp07

0x8b0c,	// (0x00037f23) cell_cmode_itu_pane_g1

0x8b15,	// (0x00037f2c) cell_cmode_itu_pane_t1

0x8b23,	// (0x00037f3a) cell_cmode_itu_pane_t2

0x0001,

0xfdd1,	// (0x0003f1e8) cell_cmode_itu_pane_t

0x88e5,	// (0x00037cfc) aid_touch_ctrl_left

0x88ed,	// (0x00037d04) aid_touch_ctrl_right

0x22c8,	// (0x000316df) compa_mode_pane

0xe740,	// (0x0003db57) aid_cmod_rocker_key_size_cp

0xe74a,	// (0x0003db61) aid_cmode_itu_key_size_cp

0x8b52,	// (0x00037f69) compa_mode_pane_g1

0x8b5a,	// (0x00037f71) compa_mode_pane_g2

0x8b62,	// (0x00037f79) compa_mode_pane_g3

0x0002,

0xfdd6,	// (0x0003f1ed) compa_mode_pane_g

0xe754,	// (0x0003db6b) main_comp_mode_itu_pane_cp

0xe75c,	// (0x0003db73) main_comp_mode_rocker_pane_cp

0xe764,	// (0x0003db7b) cell_cmode_itu_pane_cp_ParamLimits

0xe764,	// (0x0003db7b) cell_cmode_itu_pane_cp

0xe779,	// (0x0003db90) cell_cmode_rocker_pane_cp_ParamLimits

0xe779,	// (0x0003db90) cell_cmode_rocker_pane_cp

0x498a,	// (0x00033da1) bg_button_pane_cp06_cp_ParamLimits

0x498a,	// (0x00033da1) bg_button_pane_cp06_cp

0x780f,	// (0x00036c26) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x780f,	// (0x00036c26) cell_cmode_rocker_pane_g1_cp

0x767e,	// (0x00036a95) cell_cmode_rocker_pane_g2_cp

0x22c8,	// (0x000316df) bg_button_pane_cp07_cp

0xe78b,	// (0x0003dba2) cell_cmode_itu_pane_g1_cp

0xe794,	// (0x0003dbab) cell_cmode_itu_pane_t1_cp

0xe794,	// (0x0003dbab) cell_cmode_itu_pane_t2_cp

0xd590,	// (0x0003c9a7) settings_code_pane_cp2

0x2348,	// (0x0003175f) bg_popup_window_pane_cp3_ParamLimits

0x2649,	// (0x00031a60) heading_pane_cp3_ParamLimits

0x2655,	// (0x00031a6c) listscroll_popup_graphic_pane_ParamLimits

0xbd8c,	// (0x0003b1a3) fep_hwr_aid_pane_ParamLimits

0xc23e,	// (0x0003b655) aid_touch_sctrl_top_ParamLimits

0xc24b,	// (0x0003b662) sctrl_sk_top_pane_g1_ParamLimits

0x780f,	// (0x00036c26) sctrl_sk_top_pane_g2_ParamLimits

0xfd0c,	// (0x0003f123) sctrl_sk_top_pane_g_ParamLimits

0xc258,	// (0x0003b66f) sctrl_sk_top_pane_t1_ParamLimits

0xc23e,	// (0x0003b655) aid_touch_sctrl_bottom_ParamLimits

0xc258,	// (0x0003b66f) sctrl_sk_bottom_pane_t1_ParamLimits

0x882e,	// (0x00037c45) aid_area_touch_clock

0xc433,	// (0x0003b84a) aid_vkb2_area_top_pane_cell_ParamLimits

0xc433,	// (0x0003b84a) aid_vkb2_area_top_pane_cell

0xc57e,	// (0x0003b995) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc57e,	// (0x0003b995) aid_vkb2_area_bottom_pane_cell

0x8a28,	// (0x00037e3f) popup_char_count_window

0x8b6a,	// (0x00037f81) popup_char_count_window_g1

0x8b73,	// (0x00037f8a) popup_char_count_window_g2

0x8b7c,	// (0x00037f93) popup_char_count_window_g3

0x0002,

0xfddd,	// (0x0003f1f4) popup_char_count_window_g

0x8b85,	// (0x00037f9c) popup_char_count_window_t1

0xc2f9,	// (0x0003b710) popup_fep_char_preview_window_ParamLimits

0xc2f9,	// (0x0003b710) popup_fep_char_preview_window

0xc451,	// (0x0003b868) vkb2_top_candi_pane_ParamLimits

0xc451,	// (0x0003b868) vkb2_top_candi_pane

0xe7a2,	// (0x0003dbb9) cell_vkb2_top_candi_pane_ParamLimits

0xe7a2,	// (0x0003dbb9) cell_vkb2_top_candi_pane

0x5d6e,	// (0x00035185) bg_popup_fep_char_preview_window_ParamLimits

0x5d6e,	// (0x00035185) bg_popup_fep_char_preview_window

0xc865,	// (0x0003bc7c) popup_fep_char_preview_window_t1_ParamLimits

0xc865,	// (0x0003bc7c) popup_fep_char_preview_window_t1

0x8ba3,	// (0x00037fba) bg_popup_fep_char_preview_window_g1

0x8b9b,	// (0x00037fb2) bg_popup_fep_char_preview_window_g2

0x8b93,	// (0x00037faa) bg_popup_fep_char_preview_window_g3

0x8bc3,	// (0x00037fda) bg_popup_fep_char_preview_window_g4

0x8bbb,	// (0x00037fd2) bg_popup_fep_char_preview_window_g5

0xc89f,	// (0x0003bcb6) bg_popup_fep_char_preview_window_g6

0x8bb3,	// (0x00037fca) bg_popup_fep_char_preview_window_g7

0x8bab,	// (0x00037fc2) bg_popup_fep_char_preview_window_g8

0x8bcb,	// (0x00037fe2) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde4,	// (0x0003f1fb) bg_popup_fep_char_preview_window_g

0x780f,	// (0x00036c26) cell_vkb2_top_candi_pane_g1_ParamLimits

0x780f,	// (0x00036c26) cell_vkb2_top_candi_pane_g1

0x7be2,	// (0x00036ff9) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7be2,	// (0x00036ff9) cell_vkb2_top_candi_pane_g2

0x7c03,	// (0x0003701a) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7c03,	// (0x0003701a) cell_vkb2_top_candi_pane_g3

0xc8a7,	// (0x0003bcbe) cell_vkb2_top_candi_pane_g4_ParamLimits

0xc8a7,	// (0x0003bcbe) cell_vkb2_top_candi_pane_g4

0x8b31,	// (0x00037f48) cell_vkb2_top_candi_pane_g5_ParamLimits

0x8b31,	// (0x00037f48) cell_vkb2_top_candi_pane_g5

0x8775,	// (0x00037b8c) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8775,	// (0x00037b8c) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf7,	// (0x0003f20e) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf7,	// (0x0003f20e) cell_vkb2_top_candi_pane_g

0xc8c8,	// (0x0003bcdf) cell_vkb2_top_candi_pane_t1

0xbad7,	// (0x0003aeee) aid_size_touch_slider_mark_ParamLimits

0xbad7,	// (0x0003aeee) aid_size_touch_slider_mark

0xe4e8,	// (0x0003d8ff) grid_graphic2_catg_pane_ParamLimits

0xe4e8,	// (0x0003d8ff) grid_graphic2_catg_pane

0xe586,	// (0x0003d99d) popup_grid_graphic2_window_t1_ParamLimits

0xe586,	// (0x0003d99d) popup_grid_graphic2_window_t1

0xe598,	// (0x0003d9af) popup_grid_graphic2_window_t2_ParamLimits

0xe598,	// (0x0003d9af) popup_grid_graphic2_window_t2

0x0001,

0xfdb2,	// (0x0003f1c9) popup_grid_graphic2_window_t_ParamLimits

0xfdb2,	// (0x0003f1c9) popup_grid_graphic2_window_t

0x247b,	// (0x00031892) bg_button_pane_cp05_ParamLimits

0xe718,	// (0x0003db2f) cell_graphic2_control_pane_g1_ParamLimits

0xc8e7,	// (0x0003bcfe) cell_graphic2_catg_pane_ParamLimits

0xc8e7,	// (0x0003bcfe) cell_graphic2_catg_pane

0x22c8,	// (0x000316df) bg_button_pane_cp12

0xc8f9,	// (0x0003bd10) cell_graphic2_catg_pane_g1

0x87fa,	// (0x00037c11) cell_tb_ext_pane_t1_ParamLimits

0xc69b,	// (0x0003bab2) vkb2_top_cell_right_narrow_pane_ParamLimits

0xc69b,	// (0x0003bab2) vkb2_top_cell_right_narrow_pane

0xc6b3,	// (0x0003baca) vkb2_top_cell_right_wide_pane_ParamLimits

0xc6b3,	// (0x0003baca) vkb2_top_cell_right_wide_pane

0xbd7e,	// (0x0003b195) bg_vkb2_func_pane_ParamLimits

0xbd7e,	// (0x0003b195) bg_vkb2_func_pane

0xc724,	// (0x0003bb3b) vkb2_top_cell_left_pane_g1_ParamLimits

0xbd7e,	// (0x0003b195) bg_vkb2_fuc_pane_cp03_ParamLimits

0xbd7e,	// (0x0003b195) bg_vkb2_fuc_pane_cp03

0xc782,	// (0x0003bb99) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x5826,	// (0x00034c3d) bg_vkb2_func_pane_g1

0x581e,	// (0x00034c35) bg_vkb2_func_pane_g2

0x582e,	// (0x00034c45) bg_vkb2_func_pane_g3

0x5836,	// (0x00034c4d) bg_vkb2_func_pane_g4

0x583e,	// (0x00034c55) bg_vkb2_func_pane_g5

0x5846,	// (0x00034c5d) bg_vkb2_func_pane_g6

0x5856,	// (0x00034c6d) bg_vkb2_func_pane_g7

0x584e,	// (0x00034c65) bg_vkb2_func_pane_g8

0x5816,	// (0x00034c2d) bg_vkb2_func_pane_g9

0x0008,

0xfe04,	// (0x0003f21b) bg_vkb2_func_pane_g

0xbd7e,	// (0x0003b195) bg_vkb2_fuc_pane_cp01_ParamLimits

0xbd7e,	// (0x0003b195) bg_vkb2_fuc_pane_cp01

0xc724,	// (0x0003bb3b) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xc724,	// (0x0003bb3b) vkb2_top_cell_right_wide_pane_g1

0xbd7e,	// (0x0003b195) bg_vkb2_fuc_pane_cp02_ParamLimits

0xbd7e,	// (0x0003b195) bg_vkb2_fuc_pane_cp02

0xc782,	// (0x0003bb99) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xc782,	// (0x0003bb99) vkb2_top_cell_right_narrow_pane_g1

0xdea4,	// (0x0003d2bb) aid_touch_area_decrease_ParamLimits

0xdea4,	// (0x0003d2bb) aid_touch_area_decrease

0xdec8,	// (0x0003d2df) aid_touch_area_increase_ParamLimits

0xdec8,	// (0x0003d2df) aid_touch_area_increase

0xded4,	// (0x0003d2eb) aid_touch_area_mute_ParamLimits

0xded4,	// (0x0003d2eb) aid_touch_area_mute

0xdef8,	// (0x0003d30f) aid_touch_area_slider_ParamLimits

0xdef8,	// (0x0003d30f) aid_touch_area_slider

0xdf32,	// (0x0003d349) popup_slider_window_g4_ParamLimits

0xdf32,	// (0x0003d349) popup_slider_window_g4

0xdf3e,	// (0x0003d355) popup_slider_window_g5_ParamLimits

0xdf3e,	// (0x0003d355) popup_slider_window_g5

0xdf60,	// (0x0003d377) popup_slider_window_g6_ParamLimits

0xdf60,	// (0x0003d377) popup_slider_window_g6

0x8724,	// (0x00037b3b) popup_slider_window_t2_ParamLimits

0x8724,	// (0x00037b3b) popup_slider_window_t2

0x0001,

0xfd00,	// (0x0003f117) popup_slider_window_t_ParamLimits

0xfd00,	// (0x0003f117) popup_slider_window_t

0xdf72,	// (0x0003d389) slider_pane_ParamLimits

0xdf72,	// (0x0003d389) slider_pane

0xe7ef,	// (0x0003dc06) slider_pane_g1_ParamLimits

0xe7ef,	// (0x0003dc06) slider_pane_g1

0xe803,	// (0x0003dc1a) slider_pane_g2_ParamLimits

0xe803,	// (0x0003dc1a) slider_pane_g2

0xe819,	// (0x0003dc30) slider_pane_g3_ParamLimits

0xe819,	// (0x0003dc30) slider_pane_g3

0x0003,

0xfe17,	// (0x0003f22e) slider_pane_g_ParamLimits

0xfe17,	// (0x0003f22e) slider_pane_g

0xb71c,	// (0x0003ab33) popup_tb_float_extension_window_ParamLimits

0xb71c,	// (0x0003ab33) popup_tb_float_extension_window

0xe845,	// (0x0003dc5c) aid_size_cell_tb_float_ext

0x22c8,	// (0x000316df) bg_popup_sub_window_cp28

0xe851,	// (0x0003dc68) grid_tb_float_ext_pane

0xe85b,	// (0x0003dc72) cell_tb_float_ext_pane_ParamLimits

0xe85b,	// (0x0003dc72) cell_tb_float_ext_pane

0xe875,	// (0x0003dc8c) cell_tb_float_ext_pane_g1

0xe87e,	// (0x0003dc95) grid_highlight_pane_cp12

0xbebf,	// (0x0003b2d6) cell_last_hwr_side_pane_ParamLimits

0xbebf,	// (0x0003b2d6) cell_last_hwr_side_pane

0x767e,	// (0x00036a95) cell_last_hwr_side_pane_g1

0xe887,	// (0x0003dc9e) cell_last_hwr_side_pane_g2

0x0001,

0xfe20,	// (0x0003f237) cell_last_hwr_side_pane_g

0xc64a,	// (0x0003ba61) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc64a,	// (0x0003ba61) vkb2_area_bottom_space_btn_pane

0x780f,	// (0x00036c26) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x8a9d,	// (0x00037eb4) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xc8c8,	// (0x0003bcdf) cell_vkb2_top_candi_pane_t1_ParamLimits

0xc902,	// (0x0003bd19) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xc902,	// (0x0003bd19) vkb2_area_bottom_space_btn_pane_g1

0xc93c,	// (0x0003bd53) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xc93c,	// (0x0003bd53) vkb2_area_bottom_space_btn_pane_g2

0xc972,	// (0x0003bd89) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xc972,	// (0x0003bd89) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe25,	// (0x0003f23c) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe25,	// (0x0003f23c) vkb2_area_bottom_space_btn_pane_g

0xbe33,	// (0x0003b24a) cel_fep_hwr_func_pane_ParamLimits

0xbe33,	// (0x0003b24a) cel_fep_hwr_func_pane

0xbe6f,	// (0x0003b286) cell_hwr_side_button_pane_ParamLimits

0xbe6f,	// (0x0003b286) cell_hwr_side_button_pane

0x882e,	// (0x00037c45) aid_area_touch_clock_ParamLimits

0x247b,	// (0x00031892) bg_uniindi_top_pane_ParamLimits

0x8840,	// (0x00037c57) uniindi_top_pane_g1_ParamLimits

0x8856,	// (0x00037c6d) uniindi_top_pane_g2_ParamLimits

0x8862,	// (0x00037c79) uniindi_top_pane_g3_ParamLimits

0x8873,	// (0x00037c8a) uniindi_top_pane_g4_ParamLimits

0xfd38,	// (0x0003f14f) uniindi_top_pane_g_ParamLimits

0x8880,	// (0x00037c97) uniindi_top_pane_t1_ParamLimits

0x247b,	// (0x00031892) bg_vkb2_func_pane_cp01_ParamLimits

0x247b,	// (0x00031892) bg_vkb2_func_pane_cp01

0xe890,	// (0x0003dca7) cel_fep_hwr_func_pane_g1_ParamLimits

0xe890,	// (0x0003dca7) cel_fep_hwr_func_pane_g1

0x247b,	// (0x00031892) bg_vkb2_func_pane_cp02_ParamLimits

0x247b,	// (0x00031892) bg_vkb2_func_pane_cp02

0xe890,	// (0x0003dca7) cell_hwr_side_button_pane_g1_ParamLimits

0xe890,	// (0x0003dca7) cell_hwr_side_button_pane_g1

0x572c,	// (0x00034b43) status_pane_g4_ParamLimits

0x572c,	// (0x00034b43) status_pane_g4

0x5746,	// (0x00034b5d) status_pane_t1

0x750d,	// (0x00036924) form2_midp_gauge_slider_cont_pane

0x7515,	// (0x0003692c) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd7f4,	// (0x0003cc0b) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd806,	// (0x0003cc1d) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb04,	// (0x0003ef1b) form2_midp_gauge_slider_pane_t_ParamLimits

0x7527,	// (0x0003693e) form2_midp_slider_pane_ParamLimits

0xc2b9,	// (0x0003b6d0) aid_size_cell_func_vkb2_ParamLimits

0xc2b9,	// (0x0003b6d0) aid_size_cell_func_vkb2

0xe831,	// (0x0003dc48) slider_pane_g4_ParamLimits

0xe831,	// (0x0003dc48) slider_pane_g4

0xc9bc,	// (0x0003bdd3) form2_midp_gauge_slider_pane_t2_cp01

0xc9ca,	// (0x0003bde1) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc9ca,	// (0x0003bde1) form2_midp_gauge_slider_pane_t3_cp01

0xc9e7,	// (0x0003bdfe) form2_midp_slider_pane_cp01

0x22c8,	// (0x000316df) navi_smil_pane

0xe8c0,	// (0x0003dcd7) navi_smil_pane_g1

0xe8c8,	// (0x0003dcdf) navi_smil_pane_t1

0xe89e,	// (0x0003dcb5) form2_midp_slider_pane_g1

0xe8a7,	// (0x0003dcbe) form2_midp_slider_pane_g2

0xe8af,	// (0x0003dcc6) form2_midp_slider_pane_g3

0xe89e,	// (0x0003dcb5) form2_midp_slider_pane_g4

0xc9f0,	// (0x0003be07) form2_midp_slider_pane_g5

0x0004,

0xfe2e,	// (0x0003f245) form2_midp_slider_pane_g

0xc9ac,	// (0x0003bdc3) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xc9ac,	// (0x0003bdc3) vkb2_area_bottom_space_btn_pane_g4

0xcf90,	// (0x0003c3a7) lc0_navi_pane_ParamLimits

0xcf90,	// (0x0003c3a7) lc0_navi_pane

0xd006,	// (0x0003c41d) lc0_stat_indi_pane_ParamLimits

0xd006,	// (0x0003c41d) lc0_stat_indi_pane

0xd01d,	// (0x0003c434) ls0_title_pane_ParamLimits

0xd01d,	// (0x0003c434) ls0_title_pane

0x498a,	// (0x00033da1) bg_popup_sub_pane_cp14_ParamLimits

0x8815,	// (0x00037c2c) list_uniindi_pane_ParamLimits

0x8821,	// (0x00037c38) uniindi_top_pane_ParamLimits

0x88bd,	// (0x00037cd4) list_single_uniindi_pane_g1_ParamLimits

0x88d0,	// (0x00037ce7) list_single_uniindi_pane_t1_ParamLimits

0xc9f9,	// (0x0003be10) lc0_stat_clock_pane_ParamLimits

0xc9f9,	// (0x0003be10) lc0_stat_clock_pane

0xca06,	// (0x0003be1d) lc0_stat_indi_pane_g1_ParamLimits

0xca06,	// (0x0003be1d) lc0_stat_indi_pane_g1

0xca13,	// (0x0003be2a) lc0_stat_indi_pane_g2_ParamLimits

0xca13,	// (0x0003be2a) lc0_stat_indi_pane_g2

0x0001,

0xfe39,	// (0x0003f250) lc0_stat_indi_pane_g_ParamLimits

0xfe39,	// (0x0003f250) lc0_stat_indi_pane_g

0xca20,	// (0x0003be37) lc0_uni_indicator_pane_ParamLimits

0xca20,	// (0x0003be37) lc0_uni_indicator_pane

0xca2d,	// (0x0003be44) ls0_title_pane_g1_ParamLimits

0xca2d,	// (0x0003be44) ls0_title_pane_g1

0xca41,	// (0x0003be58) ls0_title_pane_t1_ParamLimits

0xca41,	// (0x0003be58) ls0_title_pane_t1

0xca77,	// (0x0003be8e) lc0_uni_indicator_pane_g1_ParamLimits

0xca77,	// (0x0003be8e) lc0_uni_indicator_pane_g1

0xe8d6,	// (0x0003dced) lc0_stat_clock_pane_t1

0x22c8,	// (0x000316df) main_ai5_pane

0xe8e4,	// (0x0003dcfb) ai5_sk_pane_ParamLimits

0xe8e4,	// (0x0003dcfb) ai5_sk_pane

0xca8c,	// (0x0003bea3) cell_ai5_widget_pane_ParamLimits

0xca8c,	// (0x0003bea3) cell_ai5_widget_pane

0xe8f1,	// (0x0003dd08) aid_size_cell_widget_grid

0xe8ff,	// (0x0003dd16) bg_ai5_widget_pane_ParamLimits

0xe8ff,	// (0x0003dd16) bg_ai5_widget_pane

0xe973,	// (0x0003dd8a) cell_ai5_widget_pane_g2

0xe983,	// (0x0003dd9a) cell_ai5_widget_pane_g3

0xe99a,	// (0x0003ddb1) cell_ai5_widget_pane_g4

0xe9a6,	// (0x0003ddbd) cell_ai5_widget_pane_g5

0xe9b2,	// (0x0003ddc9) cell_ai5_widget_pane_g6

0xe9be,	// (0x0003ddd5) cell_ai5_widget_pane_g7

0xea06,	// (0x0003de1d) cell_ai5_widget_pane_t1_ParamLimits

0xea06,	// (0x0003de1d) cell_ai5_widget_pane_t1

0xea23,	// (0x0003de3a) cell_ai5_widget_pane_t2_ParamLimits

0xea23,	// (0x0003de3a) cell_ai5_widget_pane_t2

0xea3b,	// (0x0003de52) cell_ai5_widget_pane_t3_ParamLimits

0xea3b,	// (0x0003de52) cell_ai5_widget_pane_t3

0xea53,	// (0x0003de6a) cell_ai5_widget_pane_t4_ParamLimits

0xea53,	// (0x0003de6a) cell_ai5_widget_pane_t4

0xea70,	// (0x0003de87) cell_ai5_widget_pane_t5_ParamLimits

0xea70,	// (0x0003de87) cell_ai5_widget_pane_t5

0xea8f,	// (0x0003dea6) cell_ai5_widget_pane_t6_ParamLimits

0xea8f,	// (0x0003dea6) cell_ai5_widget_pane_t6

0xeaa1,	// (0x0003deb8) cell_ai5_widget_pane_t7_ParamLimits

0xeaa1,	// (0x0003deb8) cell_ai5_widget_pane_t7

0xeaba,	// (0x0003ded1) cell_ai5_widget_pane_t8_ParamLimits

0xeaba,	// (0x0003ded1) cell_ai5_widget_pane_t8

0x0009,

0xfe53,	// (0x0003f26a) cell_ai5_widget_pane_t_ParamLimits

0xfe53,	// (0x0003f26a) cell_ai5_widget_pane_t

0xeb0e,	// (0x0003df25) grid_ai5_widget_pane

0x498a,	// (0x00033da1) highlight_cell_ai5_widget_pane_ParamLimits

0x498a,	// (0x00033da1) highlight_cell_ai5_widget_pane

0xcb56,	// (0x0003bf6d) ai5_sk_left_pane

0xcb60,	// (0x0003bf77) ai5_sk_middle_pane

0xcb6a,	// (0x0003bf81) ai5_sk_right_pane

0xeb22,	// (0x0003df39) bg_ai5_widget_pane_g1_ParamLimits

0xeb22,	// (0x0003df39) bg_ai5_widget_pane_g1

0xeb2e,	// (0x0003df45) bg_ai5_widget_pane_g2_ParamLimits

0xeb2e,	// (0x0003df45) bg_ai5_widget_pane_g2

0xeb3a,	// (0x0003df51) bg_ai5_widget_pane_g3_ParamLimits

0xeb3a,	// (0x0003df51) bg_ai5_widget_pane_g3

0xeb46,	// (0x0003df5d) bg_ai5_widget_pane_g4_ParamLimits

0xeb46,	// (0x0003df5d) bg_ai5_widget_pane_g4

0xeb52,	// (0x0003df69) bg_ai5_widget_pane_g5_ParamLimits

0xeb52,	// (0x0003df69) bg_ai5_widget_pane_g5

0xeb5e,	// (0x0003df75) bg_ai5_widget_pane_g6_ParamLimits

0xeb5e,	// (0x0003df75) bg_ai5_widget_pane_g6

0xeb6a,	// (0x0003df81) bg_ai5_widget_pane_g7_ParamLimits

0xeb6a,	// (0x0003df81) bg_ai5_widget_pane_g7

0xeb76,	// (0x0003df8d) bg_ai5_widget_pane_g8_ParamLimits

0xeb76,	// (0x0003df8d) bg_ai5_widget_pane_g8

0xeb82,	// (0x0003df99) bg_ai5_widget_pane_g9_ParamLimits

0xeb82,	// (0x0003df99) bg_ai5_widget_pane_g9

0x0008,

0xfe68,	// (0x0003f27f) bg_ai5_widget_pane_g_ParamLimits

0xfe68,	// (0x0003f27f) bg_ai5_widget_pane_g

0xebb4,	// (0x0003dfcb) cell_shortcut_ai5_widget_pane_ParamLimits

0xebb4,	// (0x0003dfcb) cell_shortcut_ai5_widget_pane

0x53c8,	// (0x000347df) bg_cell_shortcut_ai5_widget_pane

0xebc5,	// (0x0003dfdc) cell_grid_ai5_widget_pane_g1

0xebce,	// (0x0003dfe5) highlight_cell_shortcut_ai5_widget_pane

0x581e,	// (0x00034c35) ai5_sk_left_pane_g1

0xebd6,	// (0x0003dfed) ai5_sk_left_pane_g2

0xebde,	// (0x0003dff5) ai5_sk_left_pane_g3

0xebe6,	// (0x0003dffd) ai5_sk_left_pane_g4

0x0003,

0xfe7b,	// (0x0003f292) ai5_sk_left_pane_g

0xebee,	// (0x0003e005) ai5_sk_left_pane_t1

0x5826,	// (0x00034c3d) ai5_sk_right_pane_g1

0xebfc,	// (0x0003e013) ai5_sk_right_pane_g2

0xec04,	// (0x0003e01b) ai5_sk_right_pane_g3

0xec0c,	// (0x0003e023) ai5_sk_right_pane_g4

0x0003,

0xfe84,	// (0x0003f29b) ai5_sk_right_pane_g

0xec14,	// (0x0003e02b) ai5_sk_right_pane_t1

0x5826,	// (0x00034c3d) ai5_sk_middle_pane_g1

0x581e,	// (0x00034c35) ai5_sk_middle_pane_g2

0x583e,	// (0x00034c55) ai5_sk_middle_pane_g3

0xec04,	// (0x0003e01b) ai5_sk_middle_pane_g4

0xebde,	// (0x0003dff5) ai5_sk_middle_pane_g5

0xec22,	// (0x0003e039) ai5_sk_middle_pane_g6

0xcb74,	// (0x0003bf8b) ai5_sk_middle_pane_g7

0x0006,

0xfe8d,	// (0x0003f2a4) ai5_sk_middle_pane_g

0xced9,	// (0x0003c2f0) aid_touch_area_size_lc0_ParamLimits

0xced9,	// (0x0003c2f0) aid_touch_area_size_lc0

0xbfbe,	// (0x0003b3d5) cell_hwr_candidate_pane_t1_ParamLimits

0x564e,	// (0x00034a65) aid_touch_navi_pane

0xd0fa,	// (0x0003c511) status_dt_navi_pane_ParamLimits

0xd0fa,	// (0x0003c511) status_dt_navi_pane

0xd107,	// (0x0003c51e) status_dt_sta_pane_ParamLimits

0xd107,	// (0x0003c51e) status_dt_sta_pane

0xcb7c,	// (0x0003bf93) dt_sta_controll_pane

0xcb89,	// (0x0003bfa0) dt_sta_indi_pane

0xcb9a,	// (0x0003bfb1) dt_sta_title_pane

0x247b,	// (0x00031892) bg_dt_sta_indi_pane_ParamLimits

0x247b,	// (0x00031892) bg_dt_sta_indi_pane

0xec2a,	// (0x0003e041) dt_sta_battery_pane

0xcbad,	// (0x0003bfc4) dt_sta_indi_pane_g1

0xcbb6,	// (0x0003bfcd) dt_sta_indi_pane_g2

0xcbbf,	// (0x0003bfd6) dt_sta_indi_pane_g3

0x0002,

0xfe9c,	// (0x0003f2b3) dt_sta_indi_pane_g

0xcbc8,	// (0x0003bfdf) dt_sta_signal_pane

0x498a,	// (0x00033da1) bg_dt_sta_title_pane_ParamLimits

0x498a,	// (0x00033da1) bg_dt_sta_title_pane

0xec32,	// (0x0003e049) dt_sta_title_pane_g1

0xcbd1,	// (0x0003bfe8) dt_sta_title_pane_t1_ParamLimits

0xcbd1,	// (0x0003bfe8) dt_sta_title_pane_t1

0x22c8,	// (0x000316df) bg_dt_sta_control_pane

0xcbe6,	// (0x0003bffd) dt_sta_controll_pane_g1

0xec3a,	// (0x0003e051) bg_dt_sta_title_pane_g1

0xec43,	// (0x0003e05a) bg_dt_sta_title_pane_g2

0xec4c,	// (0x0003e063) bg_dt_sta_title_pane_g3

0x0002,

0xfea3,	// (0x0003f2ba) bg_dt_sta_title_pane_g

0x767e,	// (0x00036a95) bg_dt_sta_indi_pane_g1

0xec55,	// (0x0003e06c) dt_sta_signal_pane_g1

0xec5d,	// (0x0003e074) dt_sta_signal_pane_g2

0x0001,

0xfeaa,	// (0x0003f2c1) dt_sta_signal_pane_g

0xec65,	// (0x0003e07c) dt_sta_battery_pane_g1

0xec6e,	// (0x0003e085) dt_sta_battery_pane_t1

0x767e,	// (0x00036a95) bg_dt_sta_control_pane_g1

0x4f39,	// (0x00034350) fep_china_uni_eep_pane

0x4f41,	// (0x00034358) fep_china_uni_entry_pane_ParamLimits

0x4f51,	// (0x00034368) popup_fep_china_uni_window_g1_ParamLimits

0x4f61,	// (0x00034378) popup_fep_china_uni_window_g2_ParamLimits

0x4f61,	// (0x00034378) popup_fep_china_uni_window_g2

0x0001,

0xf728,	// (0x0003eb3f) popup_fep_china_uni_window_g_ParamLimits

0xf728,	// (0x0003eb3f) popup_fep_china_uni_window_g

0xec7d,	// (0x0003e094) fep_china_uni_eep_pane_g1

0xec85,	// (0x0003e09c) fep_china_uni_eep_pane_t1

0xe8b7,	// (0x0003dcce) aid_touch_area_size_smil_player

0x56ff,	// (0x00034b16) lc0_clock_pane

0x573a,	// (0x00034b51) status_pane_g5_ParamLimits

0x573a,	// (0x00034b51) status_pane_g5

0xb3e3,	// (0x0003a7fa) popup_keymap_window

0x5718,	// (0x00034b2f) status_icon_pane

0xe983,	// (0x0003dd9a) cell_ai5_widget_pane_g3_ParamLimits

0xe99a,	// (0x0003ddb1) cell_ai5_widget_pane_g4_ParamLimits

0xe9a6,	// (0x0003ddbd) cell_ai5_widget_pane_g5_ParamLimits

0xe9ca,	// (0x0003dde1) cell_ai5_widget_pane_g8_ParamLimits

0xe9ca,	// (0x0003dde1) cell_ai5_widget_pane_g8

0xe9de,	// (0x0003ddf5) cell_ai5_widget_pane_g9_ParamLimits

0xe9de,	// (0x0003ddf5) cell_ai5_widget_pane_g9

0xe9f2,	// (0x0003de09) cell_ai5_widget_pane_g10_ParamLimits

0xe9f2,	// (0x0003de09) cell_ai5_widget_pane_g10

0xec94,	// (0x0003e0ab) status_icon_pane_g1

0x22c8,	// (0x000316df) bg_popup_sub_pane_cp13

0xec9c,	// (0x0003e0b3) popup_keymap_window_t1

0xb13c,	// (0x0003a553) control_pane_g6_ParamLimits

0xb13c,	// (0x0003a553) control_pane_g6

0xb149,	// (0x0003a560) control_pane_g7_ParamLimits

0xb149,	// (0x0003a560) control_pane_g7

0xb156,	// (0x0003a56d) control_pane_g8_ParamLimits

0xb156,	// (0x0003a56d) control_pane_g8

0xcb7c,	// (0x0003bf93) dt_sta_controll_pane_ParamLimits

0xcb89,	// (0x0003bfa0) dt_sta_indi_pane_ParamLimits

0xcb9a,	// (0x0003bfb1) dt_sta_title_pane_ParamLimits

0x28d1,	// (0x00031ce8) aid_size_touch_scroll_bar_cale

0xa447,	// (0x0003985e) popup_discreet_window_ParamLimits

0xa447,	// (0x0003985e) popup_discreet_window

0xa4c1,	// (0x000398d8) popup_sk_window

0x5d6e,	// (0x00035185) bg_popup_sub_pane_cp28_ParamLimits

0x5d6e,	// (0x00035185) bg_popup_sub_pane_cp28

0xecaa,	// (0x0003e0c1) popup_discreet_window_g1_ParamLimits

0xecaa,	// (0x0003e0c1) popup_discreet_window_g1

0xecca,	// (0x0003e0e1) popup_discreet_window_t1_ParamLimits

0xecca,	// (0x0003e0e1) popup_discreet_window_t1

0xece8,	// (0x0003e0ff) popup_discreet_window_t2_ParamLimits

0xece8,	// (0x0003e0ff) popup_discreet_window_t2

0x0002,

0xfeaf,	// (0x0003f2c6) popup_discreet_window_t_ParamLimits

0xfeaf,	// (0x0003f2c6) popup_discreet_window_t

0xcbef,	// (0x0003c006) popup_sk_window_g1

0xcbf9,	// (0x0003c010) popup_sk_window_g2

0x0001,

0xfeb6,	// (0x0003f2cd) popup_sk_window_g

0xcc03,	// (0x0003c01a) popup_sk_window_t1

0xcc11,	// (0x0003c028) popup_sk_window_t1_copy1

0xe973,	// (0x0003dd8a) cell_ai5_widget_pane_g2_ParamLimits

0xeacc,	// (0x0003dee3) cell_ai5_widget_pane_t9_ParamLimits

0xeacc,	// (0x0003dee3) cell_ai5_widget_pane_t9

0x22c8,	// (0x000316df) main_fep_fshwr2_pane

0xcc1f,	// (0x0003c036) aid_fshwr2_btn_pane

0xcc2b,	// (0x0003c042) aid_fshwr2_syb_pane

0xcc3c,	// (0x0003c053) aid_fshwr2_txt_pane

0xcc48,	// (0x0003c05f) fshwr2_func_candi_pane

0xcc60,	// (0x0003c077) fshwr2_hwr_syb_pane

0xcc77,	// (0x0003c08e) fshwr2_icf_pane

0x22c8,	// (0x000316df) fshwr2_icf_bg_pane

0xcca0,	// (0x0003c0b7) fshwr2_icf_pane_t1_ParamLimits

0xcca0,	// (0x0003c0b7) fshwr2_icf_pane_t1

0x4eb6,	// (0x000342cd) fshwr2_func_candi_pane_g1

0xccb8,	// (0x0003c0cf) fshwr2_func_candi_row_pane_ParamLimits

0xccb8,	// (0x0003c0cf) fshwr2_func_candi_row_pane

0xccc8,	// (0x0003c0df) cell_fshwr2_syb_pane_ParamLimits

0xccc8,	// (0x0003c0df) cell_fshwr2_syb_pane

0x780f,	// (0x00036c26) fshwr2_hwr_syb_pane_g1_ParamLimits

0x780f,	// (0x00036c26) fshwr2_hwr_syb_pane_g1

0x22c8,	// (0x000316df) bg_popup_call_pane_cp01

0xcce2,	// (0x0003c0f9) fshwr2_func_candi_cell_pane_ParamLimits

0xcce2,	// (0x0003c0f9) fshwr2_func_candi_cell_pane

0x63b0,	// (0x000357c7) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x63b0,	// (0x000357c7) fshwr2_func_candi_cell_bg_pane

0xcd0d,	// (0x0003c124) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcd0d,	// (0x0003c124) fshwr2_func_candi_cell_pane_g1

0xed3a,	// (0x0003e151) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xed3a,	// (0x0003e151) fshwr2_func_candi_cell_pane_t1

0x22c8,	// (0x000316df) bg_button_pane_cp08

0x53c8,	// (0x000347df) cell_fshwr2_syb_bg_pane

0xcd2d,	// (0x0003c144) cell_fshwr2_syb_bg_pane_g1

0xcd35,	// (0x0003c14c) cell_fshwr2_syb_bg_pane_t1

0x498a,	// (0x00033da1) main_tmo_pane

0xd3cc,	// (0x0003c7e3) uni_indicator_pane_g1_ParamLimits

0xd3e3,	// (0x0003c7fa) uni_indicator_pane_g2_ParamLimits

0xd3f6,	// (0x0003c80d) uni_indicator_pane_g3_ParamLimits

0x67a2,	// (0x00035bb9) uni_indicator_pane_g4_ParamLimits

0x67a2,	// (0x00035bb9) uni_indicator_pane_g4

0x67b6,	// (0x00035bcd) uni_indicator_pane_g5_ParamLimits

0x67b6,	// (0x00035bcd) uni_indicator_pane_g5

0x67b6,	// (0x00035bcd) uni_indicator_pane_g6_ParamLimits

0x67b6,	// (0x00035bcd) uni_indicator_pane_g6

0xf927,	// (0x0003ed3e) uni_indicator_pane_g_ParamLimits

0xde86,	// (0x0003d29d) popup_tmo_note_window_ParamLimits

0xde86,	// (0x0003d29d) popup_tmo_note_window

0x498a,	// (0x00033da1) fshwr2_bg_pane

0xcd1e,	// (0x0003c135) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xcd1e,	// (0x0003c135) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebb,	// (0x0003f2d2) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebb,	// (0x0003f2d2) fshwr2_func_candi_cell_pane_g

0x767e,	// (0x00036a95) bg_popup_window_pane_cp01

0xed4d,	// (0x0003e164) bg_popup_window_pane_g1_cp01

0xed56,	// (0x0003e16d) bg_popup_window_pane_cp22_ParamLimits

0xed56,	// (0x0003e16d) bg_popup_window_pane_cp22

0xed64,	// (0x0003e17b) listscroll_tmo_link_pane_ParamLimits

0xed64,	// (0x0003e17b) listscroll_tmo_link_pane

0xeda4,	// (0x0003e1bb) popup_tmo_note_window_g1_ParamLimits

0xeda4,	// (0x0003e1bb) popup_tmo_note_window_g1

0xedb1,	// (0x0003e1c8) tmo_note_info_pane_ParamLimits

0xedb1,	// (0x0003e1c8) tmo_note_info_pane

0xcd44,	// (0x0003c15b) list_tmo_note_info_pane_g1_ParamLimits

0xcd44,	// (0x0003c15b) list_tmo_note_info_pane_g1

0xedcb,	// (0x0003e1e2) list_tmo_note_info_pane_g2_ParamLimits

0xedcb,	// (0x0003e1e2) list_tmo_note_info_pane_g2

0x0001,

0xfec0,	// (0x0003f2d7) list_tmo_note_info_pane_g_ParamLimits

0xfec0,	// (0x0003f2d7) list_tmo_note_info_pane_g

0xede7,	// (0x0003e1fe) list_tmo_note_info_text_pane_ParamLimits

0xede7,	// (0x0003e1fe) list_tmo_note_info_text_pane

0xee29,	// (0x0003e240) list_tmo_link_pane

0xee36,	// (0x0003e24d) scroll_pane_cp20

0xee43,	// (0x0003e25a) list_single_tmo_link_pane_ParamLimits

0xee43,	// (0x0003e25a) list_single_tmo_link_pane

0xee53,	// (0x0003e26a) list_single_tmo_link_pane_t1

0xee61,	// (0x0003e278) list_tmo_note_info_text_pane_t1_ParamLimits

0xee61,	// (0x0003e278) list_tmo_note_info_text_pane_t1

0xa97a,	// (0x00039d91) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa97a,	// (0x00039d91) aid_size_touch_scroll_bar_cp01

0x9960,	// (0x00038d77) aid_size_touch_slider_marker

0xa4a9,	// (0x000398c0) popup_settings_window_ParamLimits

0xa4a9,	// (0x000398c0) popup_settings_window

0x9ae8,	// (0x00038eff) popup_candi_list_indi_window

0x564e,	// (0x00034a65) aid_touch_navi_pane_ParamLimits

0xc212,	// (0x0003b629) rs_clock_indi_pane

0xc21b,	// (0x0003b632) sctrl_sk_bottom_pane_ParamLimits

0xc22c,	// (0x0003b643) sctrl_sk_top_pane_ParamLimits

0xc313,	// (0x0003b72a) popup_fep_tooltip_window

0xe8f1,	// (0x0003dd08) aid_size_cell_widget_grid_ParamLimits

0xe95e,	// (0x0003dd75) cell_ai5_widget_pane_g1_ParamLimits

0xe95e,	// (0x0003dd75) cell_ai5_widget_pane_g1

0xe9b2,	// (0x0003ddc9) cell_ai5_widget_pane_g6_ParamLimits

0xe9be,	// (0x0003ddd5) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3e,	// (0x0003f255) cell_ai5_widget_pane_g_ParamLimits

0xfe3e,	// (0x0003f255) cell_ai5_widget_pane_g

0xeaf0,	// (0x0003df07) cell_ai5_widget_pane_t10_ParamLimits

0xeaf0,	// (0x0003df07) cell_ai5_widget_pane_t10

0xeb0e,	// (0x0003df25) grid_ai5_widget_pane_ParamLimits

0xeb8e,	// (0x0003dfa5) cell_contacts_ai5_widget_pane_ParamLimits

0xeb8e,	// (0x0003dfa5) cell_contacts_ai5_widget_pane

0xecfd,	// (0x0003e114) popup_discreet_window_t3_ParamLimits

0xecfd,	// (0x0003e114) popup_discreet_window_t3

0xcc8c,	// (0x0003c0a3) popup_fshwr2_char_preview_window_ParamLimits

0xcc8c,	// (0x0003c0a3) popup_fshwr2_char_preview_window

0xcd5b,	// (0x0003c172) tmo_note_info_pane_t1

0xcd70,	// (0x0003c187) tmo_note_info_pane_t2

0xcd87,	// (0x0003c19e) tmo_note_info_pane_t3

0xee05,	// (0x0003e21c) tmo_note_info_pane_t4

0xee17,	// (0x0003e22e) tmo_note_info_pane_t5

0x0004,

0xfec5,	// (0x0003f2dc) tmo_note_info_pane_t

0xee29,	// (0x0003e240) list_tmo_link_pane_ParamLimits

0xee36,	// (0x0003e24d) scroll_pane_cp20_ParamLimits

0x22c8,	// (0x000316df) bg_popup_fep_char_preview_window_cp01

0xee7a,	// (0x0003e291) popup_fshwr2_char_preview_window_t1

0xee88,	// (0x0003e29f) popup_candi_list_indi_window_g1

0xee91,	// (0x0003e2a8) bg_cell_contacts_ai5_widget_pane

0xee9d,	// (0x0003e2b4) cell_contacts_ai5_widget_pane_g1

0xeeb0,	// (0x0003e2c7) cell_contacts_ai5_widget_pane_g2

0xeebc,	// (0x0003e2d3) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed0,	// (0x0003f2e7) cell_contacts_ai5_widget_pane_g

0xeece,	// (0x0003e2e5) cell_contacts_ai5_widget_pane_t1

0x498a,	// (0x00033da1) highlight_cell_shortcut_ai5_widget_pane_cp01

0xef48,	// (0x0003e35f) settings_container_pane

0x53c8,	// (0x000347df) listscroll_set_pane_copy1

0x7025,	// (0x0003643c) scroll_pane_cp121_copy1

0xef54,	// (0x0003e36b) set_content_pane_copy1

0xef5c,	// (0x0003e373) aid_height_set_list_copy1_ParamLimits

0xef5c,	// (0x0003e373) aid_height_set_list_copy1

0x5626,	// (0x00034a3d) aid_size_parent_copy1_ParamLimits

0x5626,	// (0x00034a3d) aid_size_parent_copy1

0xef68,	// (0x0003e37f) button_value_adjust_pane_cp6_copy1_ParamLimits

0xef68,	// (0x0003e37f) button_value_adjust_pane_cp6_copy1

0x4ae3,	// (0x00033efa) list_highlight_pane_cp2_copy1_ParamLimits

0x4ae3,	// (0x00033efa) list_highlight_pane_cp2_copy1

0xef7c,	// (0x0003e393) list_set_pane_copy1_ParamLimits

0xef7c,	// (0x0003e393) list_set_pane_copy1

0xeee3,	// (0x0003e2fa) main_pane_set_t1_copy1_ParamLimits

0xeee3,	// (0x0003e2fa) main_pane_set_t1_copy1

0xef1d,	// (0x0003e334) main_pane_set_t2_copy1_ParamLimits

0xef1d,	// (0x0003e334) main_pane_set_t2_copy1

0xf029,	// (0x0003e440) main_pane_set_t3_copy1

0xf037,	// (0x0003e44e) main_pane_set_t4_copy1

0xef3c,	// (0x0003e353) set_content_pane_g1_copy1_ParamLimits

0xef3c,	// (0x0003e353) set_content_pane_g1_copy1

0xf045,	// (0x0003e45c) setting_code_pane_copy1

0xf04d,	// (0x0003e464) setting_slider_graphic_pane_copy1

0xf04d,	// (0x0003e464) setting_slider_pane_copy1

0xf04d,	// (0x0003e464) setting_text_pane_copy1

0xf04d,	// (0x0003e464) setting_volume_pane_copy1

0xf045,	// (0x0003e45c) settings_code_pane_cp2_copy1

0xf055,	// (0x0003e46c) settings_code_pane_cp_copy1_ParamLimits

0xf055,	// (0x0003e46c) settings_code_pane_cp_copy1

0xcd9c,	// (0x0003c1b3) volume_set_pane_copy1

0xf069,	// (0x0003e480) volume_set_pane_g10_copy1

0xf071,	// (0x0003e488) volume_set_pane_g1_copy1

0xf079,	// (0x0003e490) volume_set_pane_g2_copy1

0xf081,	// (0x0003e498) volume_set_pane_g3_copy1

0xf089,	// (0x0003e4a0) volume_set_pane_g4_copy1

0xf091,	// (0x0003e4a8) volume_set_pane_g5_copy1

0xf099,	// (0x0003e4b0) volume_set_pane_g6_copy1

0xf0a1,	// (0x0003e4b8) volume_set_pane_g7_copy1

0xf0a9,	// (0x0003e4c0) volume_set_pane_g8_copy1

0xf0b1,	// (0x0003e4c8) volume_set_pane_g9_copy1

0x2348,	// (0x0003175f) bg_set_opt_pane_cp_copy1_ParamLimits

0x2348,	// (0x0003175f) bg_set_opt_pane_cp_copy1

0xcda4,	// (0x0003c1bb) setting_slider_pane_t1_copy1_ParamLimits

0xcda4,	// (0x0003c1bb) setting_slider_pane_t1_copy1

0xcdc2,	// (0x0003c1d9) setting_slider_pane_t2_copy1_ParamLimits

0xcdc2,	// (0x0003c1d9) setting_slider_pane_t2_copy1

0xcddc,	// (0x0003c1f3) setting_slider_pane_t3_copy1_ParamLimits

0xcddc,	// (0x0003c1f3) setting_slider_pane_t3_copy1

0xcdf4,	// (0x0003c20b) slider_set_pane_copy1_ParamLimits

0xcdf4,	// (0x0003c20b) slider_set_pane_copy1

0x49d9,	// (0x00033df0) set_opt_bg_pane_g1_copy2

0x49e1,	// (0x00033df8) set_opt_bg_pane_g2_copy2

0xf0b9,	// (0x0003e4d0) set_opt_bg_pane_g3_copy2

0x49f1,	// (0x00033e08) set_opt_bg_pane_g4_copy2

0x49f9,	// (0x00033e10) set_opt_bg_pane_g5_copy2

0x4a01,	// (0x00033e18) set_opt_bg_pane_g6_copy2

0xf0c3,	// (0x0003e4da) set_opt_bg_pane_g7_copy2

0xf0cb,	// (0x0003e4e2) set_opt_bg_pane_g8_copy2

0xf0d5,	// (0x0003e4ec) set_opt_bg_pane_g9_copy2

0xf0df,	// (0x0003e4f6) aid_size_touch_slider_mark_copy1_ParamLimits

0xf0df,	// (0x0003e4f6) aid_size_touch_slider_mark_copy1

0xf0f3,	// (0x0003e50a) slider_set_pane_g1_copy1

0xf0fc,	// (0x0003e513) slider_set_pane_g2_copy1

0x6bd8,	// (0x00035fef) slider_set_pane_g3_copy1_ParamLimits

0x6bd8,	// (0x00035fef) slider_set_pane_g3_copy1

0x6bec,	// (0x00036003) slider_set_pane_g4_copy1_ParamLimits

0x6bec,	// (0x00036003) slider_set_pane_g4_copy1

0x6c04,	// (0x0003601b) slider_set_pane_g5_copy1_ParamLimits

0x6c04,	// (0x0003601b) slider_set_pane_g5_copy1

0x6bd8,	// (0x00035fef) slider_set_pane_g6_copy1_ParamLimits

0x6bd8,	// (0x00035fef) slider_set_pane_g6_copy1

0xf104,	// (0x0003e51b) slider_set_pane_g7_copy1_ParamLimits

0xf104,	// (0x0003e51b) slider_set_pane_g7_copy1

0x22dc,	// (0x000316f3) bg_set_opt_pane_cp2_copy1

0xf11a,	// (0x0003e531) setting_slider_graphic_pane_g1_copy1

0xf123,	// (0x0003e53a) setting_slider_graphic_pane_t1_copy1

0xf133,	// (0x0003e54a) setting_slider_graphic_pane_t2_copy1

0xf143,	// (0x0003e55a) slider_set_pane_cp_copy1

0xf153,	// (0x0003e56a) input_focus_pane_cp1_copy1

0xf15c,	// (0x0003e573) list_set_text_pane_copy1

0xf164,	// (0x0003e57b) setting_text_pane_g1_copy1

0xa1a1,	// (0x000395b8) set_text_pane_t1_copy1

0xf153,	// (0x0003e56a) input_focus_pane_cp2_copy1

0xf164,	// (0x0003e57b) setting_code_pane_g1_copy1

0xf16d,	// (0x0003e584) setting_code_pane_t1_copy1

0x68b5,	// (0x00035ccc) list_set_graphic_pane_copy1

0x22dc,	// (0x000316f3) bg_set_opt_pane_cp4_copy1

0x50de,	// (0x000344f5) list_set_graphic_pane_g1_copy1_ParamLimits

0x50de,	// (0x000344f5) list_set_graphic_pane_g1_copy1

0xf17b,	// (0x0003e592) list_set_graphic_pane_g2_copy1

0x50f6,	// (0x0003450d) list_set_graphic_pane_t1_copy1_ParamLimits

0x50f6,	// (0x0003450d) list_set_graphic_pane_t1_copy1

0x767e,	// (0x00036a95) rs_clock_indi_pane_g1

0xf183,	// (0x0003e59a) rs_clock_indi_pane_t1

0xf191,	// (0x0003e5a8) rs_indi_pane

0xf199,	// (0x0003e5b0) rs_indi_pane_g1

0xf1a2,	// (0x0003e5b9) rs_indi_pane_g2

0xf1ab,	// (0x0003e5c2) rs_indi_pane_g3

0x0002,

0xfed7,	// (0x0003f2ee) rs_indi_pane_g

0x53c8,	// (0x000347df) bg_popup_preview_window_pane_cp03

0xf1b4,	// (0x0003e5cb) popup_fep_tooltip_window_t1

0x8018,	// (0x0003742f) popup_note2_window_g2_ParamLimits

0x8018,	// (0x0003742f) popup_note2_window_g2

0x0001,

0xfc70,	// (0x0003f087) popup_note2_window_g_ParamLimits

0xfc70,	// (0x0003f087) popup_note2_window_g

0x849f,	// (0x000378b6) bg_popup_sub_pane_cp11_ParamLimits

0x84ac,	// (0x000378c3) cell_ai3_links_pane_g1_ParamLimits

0x84c3,	// (0x000378da) cell_ai3_links_pane_t1

0xa1a1,	// (0x000395b8) set_text_pane_t1_copy1_ParamLimits

0x52e5,	// (0x000346fc) cell_graphic_popup_pane_cp2_ParamLimits

0x52e5,	// (0x000346fc) cell_graphic_popup_pane_cp2

0xf1c2,	// (0x0003e5d9) cell_graphic_popup_pane_g1_cp2

0x26e4,	// (0x00031afb) cell_graphic_popup_pane_g2_cp2

0xf1ca,	// (0x0003e5e1) cell_graphic_popup_pane_g3_cp2

0xf1d2,	// (0x0003e5e9) cell_graphic_popup_pane_t2_cp2

0x26f5,	// (0x00031b0c) grid_highlight_pane_cp3_cp2

0x4c8a,	// (0x000340a1) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x498a,	// (0x00033da1) main_tmo_pane_ParamLimits

0xde7a,	// (0x0003d291) popup_tmo_big_image_note_window

0xe94d,	// (0x0003dd64) cell_ai5_widget_list_pane

0xe955,	// (0x0003dd6c) cell_ai5_widget_lrg_icon_pane

0xcd5b,	// (0x0003c172) tmo_note_info_pane_t1_ParamLimits

0xcd70,	// (0x0003c187) tmo_note_info_pane_t2_ParamLimits

0xcd87,	// (0x0003c19e) tmo_note_info_pane_t3_ParamLimits

0xee05,	// (0x0003e21c) tmo_note_info_pane_t4_ParamLimits

0xee17,	// (0x0003e22e) tmo_note_info_pane_t5_ParamLimits

0xfec5,	// (0x0003f2dc) tmo_note_info_pane_t_ParamLimits

0xef48,	// (0x0003e35f) settings_container_pane_ParamLimits

0xf14b,	// (0x0003e562) indicator_popup_pane_cp5

0xf14b,	// (0x0003e562) indicator_popup_pane_cp6

0x68b5,	// (0x00035ccc) list_set_graphic_pane_copy1_ParamLimits

0x22c8,	// (0x000316df) bg_popup_window_pane_cp23

0xf1e0,	// (0x0003e5f7) popup_tmo_big_image_note_window_g1

0xf1e9,	// (0x0003e600) popup_tmo_big_image_note_window_t1

0xf1f9,	// (0x0003e610) popup_tmo_big_image_note_window_t2

0xf209,	// (0x0003e620) popup_tmo_big_image_note_window_t3

0x0002,

0xfede,	// (0x0003f2f5) popup_tmo_big_image_note_window_t

0x767e,	// (0x00036a95) cell_ai5_widget_lrg_icon_pane_g1

0xf219,	// (0x0003e630) cell_ai5_widget_lrg_icon_pane_t1

0xf227,	// (0x0003e63e) cell_ai5_widget_list_row_pane_ParamLimits

0xf227,	// (0x0003e63e) cell_ai5_widget_list_row_pane

0xf240,	// (0x0003e657) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf240,	// (0x0003e657) cell_ai5_widget_list_row_pane_g1

0xf24d,	// (0x0003e664) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf24d,	// (0x0003e664) cell_ai5_widget_list_row_pane_t1

0xf27b,	// (0x0003e692) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf27b,	// (0x0003e692) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee5,	// (0x0003f2fc) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee5,	// (0x0003f2fc) cell_ai5_widget_list_row_pane_t

0x22c8,	// (0x000316df) main_fep_vtchi_ss_pane

0xce19,	// (0x0003c230) popup_fep_char_pre_window

0xce21,	// (0x0003c238) popup_fep_ituss_window

0xce42,	// (0x0003c259) popup_fep_vkbss_window

0xf2a3,	// (0x0003e6ba) grid_vkbss_keypad_pane_ParamLimits

0xf2a3,	// (0x0003e6ba) grid_vkbss_keypad_pane

0xf2b3,	// (0x0003e6ca) ituss_keypad_pane

0xce6d,	// (0x0003c284) aid_vkbss_key_offset_ParamLimits

0xce6d,	// (0x0003c284) aid_vkbss_key_offset

0xce79,	// (0x0003c290) cell_vkbss_key_pane_ParamLimits

0xce79,	// (0x0003c290) cell_vkbss_key_pane

0x6c1a,	// (0x00036031) bg_cell_vkbss_key_g1_ParamLimits

0x6c1a,	// (0x00036031) bg_cell_vkbss_key_g1

0xf2c3,	// (0x0003e6da) cell_vkbss_key_3p_pane_ParamLimits

0xf2c3,	// (0x0003e6da) cell_vkbss_key_3p_pane

0xf2dd,	// (0x0003e6f4) cell_vkbss_key_g1_ParamLimits

0xf2dd,	// (0x0003e6f4) cell_vkbss_key_g1

0xf2f7,	// (0x0003e70e) cell_vkbss_key_t1_ParamLimits

0xf2f7,	// (0x0003e70e) cell_vkbss_key_t1

0xce8f,	// (0x0003c2a6) cell_ituss_key_pane_ParamLimits

0xce8f,	// (0x0003c2a6) cell_ituss_key_pane

0xf322,	// (0x0003e739) bg_cell_ituss_key_g1_ParamLimits

0xf322,	// (0x0003e739) bg_cell_ituss_key_g1

0xf32e,	// (0x0003e745) cell_ituss_key_pane_g1_ParamLimits

0xf32e,	// (0x0003e745) cell_ituss_key_pane_g1

0xf342,	// (0x0003e759) cell_ituss_key_pane_g2_ParamLimits

0xf342,	// (0x0003e759) cell_ituss_key_pane_g2

0x0001,

0xfeec,	// (0x0003f303) cell_ituss_key_pane_g_ParamLimits

0xfeec,	// (0x0003f303) cell_ituss_key_pane_g

0xf370,	// (0x0003e787) cell_ituss_key_t1_ParamLimits

0xf370,	// (0x0003e787) cell_ituss_key_t1

0xf3aa,	// (0x0003e7c1) cell_ituss_key_t2_ParamLimits

0xf3aa,	// (0x0003e7c1) cell_ituss_key_t2

0xf3db,	// (0x0003e7f2) cell_ituss_key_t3_ParamLimits

0xf3db,	// (0x0003e7f2) cell_ituss_key_t3

0xf415,	// (0x0003e82c) cell_ituss_key_t4_ParamLimits

0xf415,	// (0x0003e82c) cell_ituss_key_t4

0x0003,

0xfef1,	// (0x0003f308) cell_ituss_key_t_ParamLimits

0xfef1,	// (0x0003f308) cell_ituss_key_t

0xf44f,	// (0x0003e866) cell_vkbss_key_3p_pane_g1

0xf457,	// (0x0003e86e) cell_vkbss_key_3p_pane_g2

0xf45f,	// (0x0003e876) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefa,	// (0x0003f311) cell_vkbss_key_3p_pane_g

0x22c8,	// (0x000316df) bg_popup_fep_char_preview_window_cp02

0xf467,	// (0x0003e87e) popup_fep_char_pre_window_t1

0xcb4c,	// (0x0003bf63) main_ai5_sk_pane

0xee91,	// (0x0003e2a8) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xee9d,	// (0x0003e2b4) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xeeb0,	// (0x0003e2c7) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xeebc,	// (0x0003e2d3) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed0,	// (0x0003f2e7) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeece,	// (0x0003e2e5) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x498a,	// (0x00033da1) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xcea0,	// (0x0003c2b7) main_ai5_sk_pane_g1

0x5bac,	// (0x00034fc3) popup_query_code_window_g1

0xce37,	// (0x0003c24e) popup_fep_vkb_icf_pane

0xce4b,	// (0x0003c262) popup_fep_vtchi_icf_pane

0x498a,	// (0x00033da1) bg_icf_pane

0xf476,	// (0x0003e88d) list_vkb_icf_pane

0x498a,	// (0x00033da1) bg_icf_pane_cp01

0xf482,	// (0x0003e899) vtchi_icf_list_pane

0xf493,	// (0x0003e8aa) list_vkb_icf_pane_t1_ParamLimits

0xf493,	// (0x0003e8aa) list_vkb_icf_pane_t1

0xf4ab,	// (0x0003e8c2) vtchi_icf_list_pane_t1_ParamLimits

0xf4ab,	// (0x0003e8c2) vtchi_icf_list_pane_t1

0xce21,	// (0x0003c238) popup_fep_ituss_window_ParamLimits

0xce4b,	// (0x0003c262) popup_fep_vtchi_icf_pane_ParamLimits

0xf2b3,	// (0x0003e6ca) ituss_keypad_pane_ParamLimits

0xce61,	// (0x0003c278) ituss_sks_pane

0x498a,	// (0x00033da1) bg_icf_pane_ParamLimits

0xce0a,	// (0x0003c221) icf_edit_indi_pane_ParamLimits

0xce0a,	// (0x0003c221) icf_edit_indi_pane

0xf476,	// (0x0003e88d) list_vkb_icf_pane_ParamLimits

0x498a,	// (0x00033da1) bg_icf_pane_cp01_ParamLimits

0xce0a,	// (0x0003c221) icf_edit_indi_pane_cp01_ParamLimits

0xce0a,	// (0x0003c221) icf_edit_indi_pane_cp01

0xf48a,	// (0x0003e8a1) vtchi_query_pane

0x780f,	// (0x00036c26) icf_edit_indi_pane_g1_ParamLimits

0x780f,	// (0x00036c26) icf_edit_indi_pane_g1

0xf537,	// (0x0003e94e) icf_edit_indi_pane_g2_ParamLimits

0xf537,	// (0x0003e94e) icf_edit_indi_pane_g2

0x0001,

0xff12,	// (0x0003f329) icf_edit_indi_pane_g_ParamLimits

0xff12,	// (0x0003f329) icf_edit_indi_pane_g

0xf546,	// (0x0003e95d) icf_edit_indi_pane_t1

0xf4cd,	// (0x0003e8e4) bg_input_focus_pane_cp042

0x28c8,	// (0x00031cdf) vtchi_button_pane

0xf4d6,	// (0x0003e8ed) vtchi_query_pane_t1

0xf4e4,	// (0x0003e8fb) vtchi_query_pane_t2

0xf4f2,	// (0x0003e909) vtchi_query_pane_t3

0x0002,

0xff01,	// (0x0003f318) vtchi_query_pane_t

0x22c8,	// (0x000316df) bg_button_pane_cp13

0xf500,	// (0x0003e917) vtchi_button_pane_g1

0xf508,	// (0x0003e91f) ituss_sks_pane_g1

0xf513,	// (0x0003e92a) ituss_sks_pane_g2

0x0001,

0xff08,	// (0x0003f31f) ituss_sks_pane_g

0xf51b,	// (0x0003e932) ituss_sks_pane_t1

0xf529,	// (0x0003e940) ituss_sks_pane_t2

0x0001,

0xff0d,	// (0x0003f324) ituss_sks_pane_t

0x7337,	// (0x0003674e) indicator_nsta_pane_cp_g1

0x7340,	// (0x00036757) indicator_nsta_pane_cp_g2

0x7348,	// (0x0003675f) indicator_nsta_pane_cp_g3

0x7350,	// (0x00036767) indicator_nsta_pane_cp_g4

0x7358,	// (0x0003676f) indicator_nsta_pane_cp_g5

0x7358,	// (0x0003676f) indicator_nsta_pane_cp_g6

0x0005,

0xfaba,	// (0x0003eed1) indicator_nsta_pane_cp_g

0xe705,	// (0x0003db1c) cell_graphic2_pane_t2_ParamLimits

0xe705,	// (0x0003db1c) cell_graphic2_pane_t2

0x0001,

0xfdc7,	// (0x0003f1de) cell_graphic2_pane_t_ParamLimits

0xfdc7,	// (0x0003f1de) cell_graphic2_pane_t

0xe732,	// (0x0003db49) cell_graphic2_control_pane_t1

0xad41,	// (0x0003a158) signal_pane_g3_ParamLimits

0xad41,	// (0x0003a158) signal_pane_g3

0xad53,	// (0x0003a16a) signal_pane_g4_ParamLimits

0xad53,	// (0x0003a16a) signal_pane_g4

0xf28d,	// (0x0003e6a4) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf28d,	// (0x0003e6a4) cell_ai5_widget_list_row_pane_t3

0xf35e,	// (0x0003e775) cell_ituss_key_pane_t1_ParamLimits

0xf35e,	// (0x0003e775) cell_ituss_key_pane_t1

0x58ec,	// (0x00034d03) form_field_data_wide_pane_vc_t2_ParamLimits

0x58ec,	// (0x00034d03) form_field_data_wide_pane_vc_t2

0x5900,	// (0x00034d17) form_field_data_wide_pane_vc_t3_ParamLimits

0x5900,	// (0x00034d17) form_field_data_wide_pane_vc_t3

0x0002,

0xf80f,	// (0x0003ec26) form_field_data_wide_pane_vc_t_ParamLimits

0xf80f,	// (0x0003ec26) form_field_data_wide_pane_vc_t

0x7065,	// (0x0003647c) form_field_slider_wide_pane_vc_t3_ParamLimits

0x7065,	// (0x0003647c) form_field_slider_wide_pane_vc_t3

0x713f,	// (0x00036556) form_field_popup_wide_pane_vc_t2_ParamLimits

0x713f,	// (0x00036556) form_field_popup_wide_pane_vc_t2

0x7156,	// (0x0003656d) form_field_popup_wide_pane_vc_t3_ParamLimits

0x7156,	// (0x0003656d) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa9,	// (0x0003eec0) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa9,	// (0x0003eec0) form_field_popup_wide_pane_vc_t

0xcc1f,	// (0x0003c036) aid_fshwr2_btn_pane_ParamLimits

0xcc2b,	// (0x0003c042) aid_fshwr2_syb_pane_ParamLimits

0xcc3c,	// (0x0003c053) aid_fshwr2_txt_pane_ParamLimits

0x498a,	// (0x00033da1) fshwr2_bg_pane_ParamLimits

0xcc48,	// (0x0003c05f) fshwr2_func_candi_pane_ParamLimits

0xcc60,	// (0x0003c077) fshwr2_hwr_syb_pane_ParamLimits

0xcc77,	// (0x0003c08e) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Large
