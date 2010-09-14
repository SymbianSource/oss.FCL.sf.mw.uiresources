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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0005d871 };

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
0x8da2,	// (0x00066613) Screen

0x8dae,	// (0x0006661f) application_window_ParamLimits

0x8dae,	// (0x0006661f) application_window

0x7064,	// (0x000648d5) screen_g1

0x8de6,	// (0x00066657) area_bottom_pane_ParamLimits

0x8de6,	// (0x00066657) area_bottom_pane

0xe734,	// (0x0006bfa5) area_top_pane_ParamLimits

0xe734,	// (0x0006bfa5) area_top_pane

0xe7d2,	// (0x0006c043) main_pane_ParamLimits

0xe7d2,	// (0x0006c043) main_pane

0x706e,	// (0x000648df) misc_graphics

0xac12,	// (0x00068483) battery_pane_ParamLimits

0xac12,	// (0x00068483) battery_pane

0x27a5,	// (0x00060016) bg_status_flat_pane_g8

0x27ad,	// (0x0006001e) bg_status_flat_pane_g9

0x0356,	// (0x0005dbc7) context_pane_ParamLimits

0x0356,	// (0x0005dbc7) context_pane

0xad7d,	// (0x000685ee) navi_pane_ParamLimits

0xad7d,	// (0x000685ee) navi_pane

0xadfb,	// (0x0006866c) signal_pane_ParamLimits

0xadfb,	// (0x0006866c) signal_pane

0x0008,

0xf83e,	// (0x0006d0af) bg_status_flat_pane_g

0xae8b,	// (0x000686fc) status_pane_g1_ParamLimits

0xae8b,	// (0x000686fc) status_pane_g1

0xaea1,	// (0x00068712) status_pane_g2_ParamLimits

0xaea1,	// (0x00068712) status_pane_g2

0x1da6,	// (0x0005f617) status_pane_g3_ParamLimits

0x1da6,	// (0x0005f617) status_pane_g3

0x0004,

0xf771,	// (0x0006cfe2) status_pane_g_ParamLimits

0xf771,	// (0x0006cfe2) status_pane_g

0xaead,	// (0x0006871e) title_pane_ParamLimits

0xaead,	// (0x0006871e) title_pane

0xaf10,	// (0x00068781) uni_indicator_pane_ParamLimits

0xaf10,	// (0x00068781) uni_indicator_pane

0xc624,	// (0x00069e95) bg_list_pane_ParamLimits

0xc624,	// (0x00069e95) bg_list_pane

0xa400,	// (0x00067c71) find_pane

0x1fba,	// (0x0005f82b) listscroll_app_pane_ParamLimits

0x1fba,	// (0x0005f82b) listscroll_app_pane

0xc644,	// (0x00069eb5) listscroll_form_pane

0xa408,	// (0x00067c79) listscroll_gen_pane_ParamLimits

0xa408,	// (0x00067c79) listscroll_gen_pane

0xf4c5,	// (0x0006cd36) listscroll_set_pane

0x3309,	// (0x00060b7a) main_idle_act_pane

0xc4d8,	// (0x00069d49) main_idle_trad_pane

0xc4d8,	// (0x00069d49) main_list_empty_pane

0x839a,	// (0x00065c0b) main_midp_pane

0xc65e,	// (0x00069ecf) main_pane_g1_ParamLimits

0xc65e,	// (0x00069ecf) main_pane_g1

0xa41c,	// (0x00067c8d) popup_ai_message_window_ParamLimits

0xa41c,	// (0x00067c8d) popup_ai_message_window

0xa4cd,	// (0x00067d3e) popup_fep_china_uni_window_ParamLimits

0xa4cd,	// (0x00067d3e) popup_fep_china_uni_window

0xa527,	// (0x00067d98) popup_fep_japan_candidate_window_ParamLimits

0xa527,	// (0x00067d98) popup_fep_japan_candidate_window

0xa545,	// (0x00067db6) popup_fep_japan_predictive_window_ParamLimits

0xa545,	// (0x00067db6) popup_fep_japan_predictive_window

0xa557,	// (0x00067dc8) popup_find_window

0xa574,	// (0x00067de5) popup_grid_graphic_window_ParamLimits

0xa574,	// (0x00067de5) popup_grid_graphic_window

0xf503,	// (0x0006cd74) popup_large_graphic_colour_window

0xa612,	// (0x00067e83) popup_menu_window_ParamLimits

0xa612,	// (0x00067e83) popup_menu_window

0xa7e4,	// (0x00068055) popup_note_image_window

0xa7aa,	// (0x0006801b) popup_note_wait_window_ParamLimits

0xa7aa,	// (0x0006801b) popup_note_wait_window

0xa7fc,	// (0x0006806d) popup_note_window_ParamLimits

0xa7fc,	// (0x0006806d) popup_note_window

0xa8ab,	// (0x0006811c) popup_query_code_window_ParamLimits

0xa8ab,	// (0x0006811c) popup_query_code_window

0xa8e5,	// (0x00068156) popup_query_data_code_window_ParamLimits

0xa8e5,	// (0x00068156) popup_query_data_code_window

0xa902,	// (0x00068173) popup_query_data_window_ParamLimits

0xa902,	// (0x00068173) popup_query_data_window

0xa984,	// (0x000681f5) popup_query_sat_info_window_ParamLimits

0xa984,	// (0x000681f5) popup_query_sat_info_window

0xaa1b,	// (0x0006828c) popup_snote_single_graphic_window_ParamLimits

0xaa1b,	// (0x0006828c) popup_snote_single_graphic_window

0xaa1b,	// (0x0006828c) popup_snote_single_text_window_ParamLimits

0xaa1b,	// (0x0006828c) popup_snote_single_text_window

0x00cd,	// (0x0005d93e) popup_sub_window_general

0xab78,	// (0x000683e9) popup_window_general_ParamLimits

0xab78,	// (0x000683e9) popup_window_general

0x0212,	// (0x0005da83) power_save_pane

0xa25a,	// (0x00067acb) control_pane_g1_ParamLimits

0xa25a,	// (0x00067acb) control_pane_g1

0xa283,	// (0x00067af4) control_pane_g2_ParamLimits

0xa283,	// (0x00067af4) control_pane_g2

0xc60e,	// (0x00069e7f) control_pane_g3_ParamLimits

0xc60e,	// (0x00069e7f) control_pane_g3

0x0007,

0xf759,	// (0x0006cfca) control_pane_g_ParamLimits

0xf759,	// (0x0006cfca) control_pane_g

0xa2eb,	// (0x00067b5c) control_pane_t1_ParamLimits

0xa2eb,	// (0x00067b5c) control_pane_t1

0xa353,	// (0x00067bc4) control_pane_t2_ParamLimits

0xa353,	// (0x00067bc4) control_pane_t2

0x0002,

0xf76a,	// (0x0006cfdb) control_pane_t_ParamLimits

0xf76a,	// (0x0006cfdb) control_pane_t

0xa1b3,	// (0x00067a24) navi_navi_volume_pane_cp1

0xa1bb,	// (0x00067a2c) status_small_icon_pane

0xc5da,	// (0x00069e4b) status_small_pane_g1_ParamLimits

0xc5da,	// (0x00069e4b) status_small_pane_g1

0xa1c3,	// (0x00067a34) status_small_pane_g2_ParamLimits

0xa1c3,	// (0x00067a34) status_small_pane_g2

0xa1cf,	// (0x00067a40) status_small_pane_g3_ParamLimits

0xa1cf,	// (0x00067a40) status_small_pane_g3

0xa1db,	// (0x00067a4c) status_small_pane_g4_ParamLimits

0xa1db,	// (0x00067a4c) status_small_pane_g4

0xa1e7,	// (0x00067a58) status_small_pane_g5_ParamLimits

0xa1e7,	// (0x00067a58) status_small_pane_g5

0xa1f5,	// (0x00067a66) status_small_pane_g6_ParamLimits

0xa1f5,	// (0x00067a66) status_small_pane_g6

0x0007,

0xf748,	// (0x0006cfb9) status_small_pane_g_ParamLimits

0xf748,	// (0x0006cfb9) status_small_pane_g

0xa224,	// (0x00067a95) status_small_pane_t1

0xa246,	// (0x00067ab7) status_small_wait_pane_ParamLimits

0xa246,	// (0x00067ab7) status_small_wait_pane

0x9e8f,	// (0x00067700) aid_levels_signal_ParamLimits

0x9e8f,	// (0x00067700) aid_levels_signal

0x9ea7,	// (0x00067718) signal_pane_g1_ParamLimits

0x9ea7,	// (0x00067718) signal_pane_g1

0x9ec2,	// (0x00067733) signal_pane_g2_ParamLimits

0x9ec2,	// (0x00067733) signal_pane_g2

0x0003,

0xf6d9,	// (0x0006cf4a) signal_pane_g_ParamLimits

0xf6d9,	// (0x0006cf4a) signal_pane_g

0xc0d2,	// (0x00069943) context_pane_g1

0x8fe4,	// (0x00066855) title_pane_g1

0x901b,	// (0x0006688c) title_pane_t1

0x7084,	// (0x000648f5) title_pane_t2

0x70aa,	// (0x0006491b) title_pane_t3

0x0002,

0xf532,	// (0x0006cda3) title_pane_t

0xaf38,	// (0x000687a9) aid_levels_battery_ParamLimits

0xaf38,	// (0x000687a9) aid_levels_battery

0xaf54,	// (0x000687c5) battery_pane_g1_ParamLimits

0xaf54,	// (0x000687c5) battery_pane_g1

0xaf71,	// (0x000687e2) battery_pane_g2_ParamLimits

0xaf71,	// (0x000687e2) battery_pane_g2

0x0001,

0xf77c,	// (0x0006cfed) battery_pane_g_ParamLimits

0xf77c,	// (0x0006cfed) battery_pane_g

0xc814,	// (0x0006a085) uni_indicator_pane_g1

0xc82a,	// (0x0006a09b) uni_indicator_pane_g2

0xc840,	// (0x0006a0b1) uni_indicator_pane_g3

0x0005,

0xf8e6,	// (0x0006d157) uni_indicator_pane_g

0xc37b,	// (0x00069bec) navi_icon_pane_ParamLimits

0xc37b,	// (0x00069bec) navi_icon_pane

0xc2c4,	// (0x00069b35) navi_midp_pane

0xc397,	// (0x00069c08) navi_navi_pane

0xc3a1,	// (0x00069c12) navi_text_pane_ParamLimits

0xc3a1,	// (0x00069c12) navi_text_pane

0x7064,	// (0x000648d5) status_small_wait_pane_g1

0x72fb,	// (0x00064b6c) status_small_wait_pane_g2

0x0001,

0xf8e1,	// (0x0006d152) status_small_wait_pane_g

0xc76d,	// (0x00069fde) navi_navi_icon_text_pane

0x2df8,	// (0x00060669) navi_navi_pane_g1_ParamLimits

0x2df8,	// (0x00060669) navi_navi_pane_g1

0x2e0a,	// (0x0006067b) navi_navi_pane_g2_ParamLimits

0x2e0a,	// (0x0006067b) navi_navi_pane_g2

0x0001,

0xf8af,	// (0x0006d120) navi_navi_pane_g_ParamLimits

0xf8af,	// (0x0006d120) navi_navi_pane_g

0x2e1c,	// (0x0006068d) navi_navi_tabs_pane

0x2e25,	// (0x00060696) navi_navi_text_pane

0xc76d,	// (0x00069fde) navi_navi_volume_pane

0x2dcc,	// (0x0006063d) navi_text_pane_t1

0x2dc0,	// (0x00060631) navi_icon_pane_g1

0x2d13,	// (0x00060584) navi_navi_text_pane_t1

0xb44d,	// (0x00068cbe) navi_navi_volume_pane_g1

0x081f,	// (0x0005e090) volume_small_pane

0x2c79,	// (0x000604ea) navi_navi_icon_text_pane_g1

0xc6c5,	// (0x00069f36) navi_navi_icon_text_pane_t1

0xc397,	// (0x00069c08) navi_tabs_2_long_pane

0xc397,	// (0x00069c08) navi_tabs_2_pane

0xc397,	// (0x00069c08) navi_tabs_3_long_pane

0xc397,	// (0x00069c08) navi_tabs_3_pane

0xc397,	// (0x00069c08) navi_tabs_4_pane

0x07f7,	// (0x0005e068) tabs_2_active_pane_ParamLimits

0x07f7,	// (0x0005e068) tabs_2_active_pane

0x0807,	// (0x0005e078) tabs_2_passive_pane_ParamLimits

0x0807,	// (0x0005e078) tabs_2_passive_pane

0x07c5,	// (0x0005e036) tabs_3_active_pane_ParamLimits

0x07c5,	// (0x0005e036) tabs_3_active_pane

0x07d5,	// (0x0005e046) tabs_3_passive_pane_ParamLimits

0x07d5,	// (0x0005e046) tabs_3_passive_pane

0x07e6,	// (0x0005e057) tabs_3_passive_pane_cp_ParamLimits

0x07e6,	// (0x0005e057) tabs_3_passive_pane_cp

0x0781,	// (0x0005dff2) tabs_4_active_pane_ParamLimits

0x0781,	// (0x0005dff2) tabs_4_active_pane

0x0792,	// (0x0005e003) tabs_4_passive_pane_ParamLimits

0x0792,	// (0x0005e003) tabs_4_passive_pane

0x07a3,	// (0x0005e014) tabs_4_passive_pane_cp_ParamLimits

0x07a3,	// (0x0005e014) tabs_4_passive_pane_cp

0x07b4,	// (0x0005e025) tabs_4_passive_pane_cp2_ParamLimits

0x07b4,	// (0x0005e025) tabs_4_passive_pane_cp2

0x075d,	// (0x0005dfce) tabs_2_long_active_pane_ParamLimits

0x075d,	// (0x0005dfce) tabs_2_long_active_pane

0x076f,	// (0x0005dfe0) tabs_2_long_passive_pane_ParamLimits

0x076f,	// (0x0005dfe0) tabs_2_long_passive_pane

0x0718,	// (0x0005df89) tabs_3_long_active_pane_ParamLimits

0x0718,	// (0x0005df89) tabs_3_long_active_pane

0x0731,	// (0x0005dfa2) tabs_3_long_passive_pane_ParamLimits

0x0731,	// (0x0005dfa2) tabs_3_long_passive_pane

0x0744,	// (0x0005dfb5) tabs_3_long_passive_pane_cp_ParamLimits

0x0744,	// (0x0005dfb5) tabs_3_long_passive_pane_cp

0x06be,	// (0x0005df2f) volume_small_pane_g1

0x06c7,	// (0x0005df38) volume_small_pane_g2

0x06d0,	// (0x0005df41) volume_small_pane_g3

0x06d9,	// (0x0005df4a) volume_small_pane_g4

0x06e2,	// (0x0005df53) volume_small_pane_g5

0x06eb,	// (0x0005df5c) volume_small_pane_g6

0x06f4,	// (0x0005df65) volume_small_pane_g7

0x06fd,	// (0x0005df6e) volume_small_pane_g8

0x0706,	// (0x0005df77) volume_small_pane_g9

0x070f,	// (0x0005df80) volume_small_pane_g10

0x0009,

0xf87b,	// (0x0006d0ec) volume_small_pane_g

0x71e6,	// (0x00064a57) bg_active_tab_pane_cp2_ParamLimits

0x71e6,	// (0x00064a57) bg_active_tab_pane_cp2

0x90a7,	// (0x00066918) tabs_3_active_pane_g1

0x90af,	// (0x00066920) tabs_3_active_pane_t1

0x71e6,	// (0x00064a57) bg_passive_tab_pane_cp2_ParamLimits

0x71e6,	// (0x00064a57) bg_passive_tab_pane_cp2

0x90a7,	// (0x00066918) tabs_3_passive_pane_g1

0x90af,	// (0x00066920) tabs_3_passive_pane_t1

0x71e6,	// (0x00064a57) bg_active_tab_pane_cp3_ParamLimits

0x71e6,	// (0x00064a57) bg_active_tab_pane_cp3

0x90c1,	// (0x00066932) tabs_4_active_pane_g1

0x90c9,	// (0x0006693a) tabs_4_active_pane_t1

0x71e6,	// (0x00064a57) bg_passive_tab_pane_cp3_ParamLimits

0x71e6,	// (0x00064a57) bg_passive_tab_pane_cp3

0x90c1,	// (0x00066932) tabs_4_1_passive_pane_g1

0x90c9,	// (0x0006693a) tabs_4_1_passive_pane_t1

0x839a,	// (0x00065c0b) list_highlight_pane_cp2

0xc946,	// (0x0006a1b7) list_set_pane_ParamLimits

0xc946,	// (0x0006a1b7) list_set_pane

0xc9e0,	// (0x0006a251) main_pane_set_t1_ParamLimits

0xc9e0,	// (0x0006a251) main_pane_set_t1

0xca00,	// (0x0006a271) main_pane_set_t2_ParamLimits

0xca00,	// (0x0006a271) main_pane_set_t2

0xca14,	// (0x0006a285) main_pane_set_t3_ParamLimits

0xca14,	// (0x0006a285) main_pane_set_t3

0xca26,	// (0x0006a297) main_pane_set_t4_ParamLimits

0xca26,	// (0x0006a297) main_pane_set_t4

0x0003,

0xf94b,	// (0x0006d1bc) main_pane_set_t_ParamLimits

0xf94b,	// (0x0006d1bc) main_pane_set_t

0xca38,	// (0x0006a2a9) setting_code_pane

0xca42,	// (0x0006a2b3) setting_slider_graphic_pane

0xca42,	// (0x0006a2b3) setting_slider_pane

0xca42,	// (0x0006a2b3) setting_text_pane

0xca42,	// (0x0006a2b3) setting_volume_pane

0x90db,	// (0x0006694c) volume_set_pane

0x70bc,	// (0x0006492d) bg_set_opt_pane_cp

0x90e3,	// (0x00066954) setting_slider_pane_t1

0x90fc,	// (0x0006696d) setting_slider_pane_t2

0x9116,	// (0x00066987) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0006cdaa) setting_slider_pane_t

0x912e,	// (0x0006699f) slider_set_pane

0x706e,	// (0x000648df) bg_set_opt_pane_cp2

0x70ca,	// (0x0006493b) setting_slider_graphic_pane_g1

0x9144,	// (0x000669b5) setting_slider_graphic_pane_t1

0x9154,	// (0x000669c5) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0006cdb1) setting_slider_graphic_pane_t

0x9164,	// (0x000669d5) slider_set_pane_cp

0x706e,	// (0x000648df) input_focus_pane_cp1

0x32f0,	// (0x00060b61) list_set_text_pane

0x7064,	// (0x000648d5) setting_text_pane_g1

0x706e,	// (0x000648df) input_focus_pane_cp2

0x7064,	// (0x000648d5) setting_code_pane_g1

0x70d3,	// (0x00064944) setting_code_pane_t1

0xbf1d,	// (0x0006978e) set_text_pane_t1_ParamLimits

0xbf1d,	// (0x0006978e) set_text_pane_t1

0x806f,	// (0x000658e0) set_opt_bg_pane_g1

0x8077,	// (0x000658e8) set_opt_bg_pane_g2

0xc8fb,	// (0x0006a16c) set_opt_bg_pane_g3

0x8087,	// (0x000658f8) set_opt_bg_pane_g4

0x808f,	// (0x00065900) set_opt_bg_pane_g5

0x8097,	// (0x00065908) set_opt_bg_pane_g6

0xc905,	// (0x0006a176) set_opt_bg_pane_g7

0xc90d,	// (0x0006a17e) set_opt_bg_pane_g8

0xc917,	// (0x0006a188) set_opt_bg_pane_g9

0x0008,

0xf938,	// (0x0006d1a9) set_opt_bg_pane_g

0xc8ee,	// (0x0006a15f) slider_set_pane_g1

0x089e,	// (0x0005e10f) slider_set_pane_g2

0x0006,

0xf929,	// (0x0006d19a) slider_set_pane_g

0xb455,	// (0x00068cc6) volume_set_pane_g1

0xb45d,	// (0x00068cce) volume_set_pane_g2

0xb465,	// (0x00068cd6) volume_set_pane_g3

0xb46d,	// (0x00068cde) volume_set_pane_g4

0xb475,	// (0x00068ce6) volume_set_pane_g5

0xb47d,	// (0x00068cee) volume_set_pane_g6

0xb485,	// (0x00068cf6) volume_set_pane_g7

0xb48d,	// (0x00068cfe) volume_set_pane_g8

0xb495,	// (0x00068d06) volume_set_pane_g9

0xb49d,	// (0x00068d0e) volume_set_pane_g10

0x0009,

0xf901,	// (0x0006d172) volume_set_pane_g

0x916c,	// (0x000669dd) indicator_pane_ParamLimits

0x916c,	// (0x000669dd) indicator_pane

0x9194,	// (0x00066a05) main_idle_pane_g2_ParamLimits

0x9194,	// (0x00066a05) main_idle_pane_g2

0x91cc,	// (0x00066a3d) main_pane_idle_g1_ParamLimits

0x91cc,	// (0x00066a3d) main_pane_idle_g1

0x70e1,	// (0x00064952) popup_clock_digital_analogue_window_ParamLimits

0x70e1,	// (0x00064952) popup_clock_digital_analogue_window

0x91f3,	// (0x00066a64) soft_indicator_pane_ParamLimits

0x91f3,	// (0x00066a64) soft_indicator_pane

0x9217,	// (0x00066a88) wallpaper_pane_ParamLimits

0x9217,	// (0x00066a88) wallpaper_pane

0x7064,	// (0x000648d5) wallpaper_pane_g1

0x9229,	// (0x00066a9a) indicator_pane_g1_ParamLimits

0x9229,	// (0x00066a9a) indicator_pane_g1

0x3750,	// (0x00060fc1) navi_navi_icon_text_pane_srt_g1

0x710f,	// (0x00064980) soft_indicator_pane_t1

0x7129,	// (0x0006499a) aid_ps_area_pane

0x923f,	// (0x00066ab0) aid_ps_clock_pane

0x713a,	// (0x000649ab) aid_ps_indicator_pane

0x7146,	// (0x000649b7) indicator_ps_pane_ParamLimits

0x7146,	// (0x000649b7) indicator_ps_pane

0x7155,	// (0x000649c6) power_save_pane_g1_ParamLimits

0x7155,	// (0x000649c6) power_save_pane_g1

0x7161,	// (0x000649d2) power_save_pane_g2_ParamLimits

0x7161,	// (0x000649d2) power_save_pane_g2

0xe714,	// (0x0006bf85) aid_navinavi_width_pane

0x7129,	// (0x0006499a) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0006cdb6) power_save_pane_g_ParamLimits

0xf545,	// (0x0006cdb6) power_save_pane_g

0x716f,	// (0x000649e0) power_save_pane_t1_ParamLimits

0x716f,	// (0x000649e0) power_save_pane_t1

0x923f,	// (0x00066ab0) aid_ps_clock_pane_ParamLimits

0x713a,	// (0x000649ab) aid_ps_indicator_pane_ParamLimits

0x7181,	// (0x000649f2) power_save_pane_t4_ParamLimits

0x7181,	// (0x000649f2) power_save_pane_t4

0x0001,

0xf54a,	// (0x0006cdbb) power_save_pane_t_ParamLimits

0xf54a,	// (0x0006cdbb) power_save_pane_t

0x71ab,	// (0x00064a1c) power_save_t3_ParamLimits

0x71ab,	// (0x00064a1c) power_save_t3

0x7196,	// (0x00064a07) power_save_t2_ParamLimits

0x7196,	// (0x00064a07) power_save_t2

0x71c0,	// (0x00064a31) indicator_ps_pane_g1

0x924d,	// (0x00066abe) ai_gene_pane_ParamLimits

0x924d,	// (0x00066abe) ai_gene_pane

0x9264,	// (0x00066ad5) ai_links_pane_ParamLimits

0x9264,	// (0x00066ad5) ai_links_pane

0x927c,	// (0x00066aed) indicator_pane_cp1_ParamLimits

0x927c,	// (0x00066aed) indicator_pane_cp1

0x928b,	// (0x00066afc) main_pane_idle_g1_cp_ParamLimits

0x928b,	// (0x00066afc) main_pane_idle_g1_cp

0x92a3,	// (0x00066b14) popup_ai_links_title_window

0x92ac,	// (0x00066b1d) soft_indicator_pane_cp1_ParamLimits

0x92ac,	// (0x00066b1d) soft_indicator_pane_cp1

0x30b7,	// (0x00060928) ai_links_pane_g1

0x30c0,	// (0x00060931) grid_ai_links_pane

0xc80b,	// (0x0006a07c) ai_gene_pane_1

0x30a5,	// (0x00060916) ai_gene_pane_2

0x30ae,	// (0x0006091f) list_highlight_pane_cp4

0xc7e7,	// (0x0006a058) cell_ai_link_pane_ParamLimits

0xc7e7,	// (0x0006a058) cell_ai_link_pane

0x3076,	// (0x000608e7) cell_ai_link_pane_g1

0x72fb,	// (0x00064b6c) cell_ai_link_pane_g2

0x0001,

0xf8dc,	// (0x0006d14d) cell_ai_link_pane_g

0x706e,	// (0x000648df) grid_highlight_cp2

0x706e,	// (0x000648df) bg_popup_sub_pane_cp1

0x71d7,	// (0x00064a48) popup_ai_links_title_window_t1

0x2fc6,	// (0x00060837) ai_gene_pane_1_g1_ParamLimits

0x2fc6,	// (0x00060837) ai_gene_pane_1_g1

0x2fd2,	// (0x00060843) ai_gene_pane_1_g2_ParamLimits

0x2fd2,	// (0x00060843) ai_gene_pane_1_g2

0x0001,

0xf8d2,	// (0x0006d143) ai_gene_pane_1_g_ParamLimits

0xf8d2,	// (0x0006d143) ai_gene_pane_1_g

0x2fdf,	// (0x00060850) ai_gene_pane_1_t1_ParamLimits

0x2fdf,	// (0x00060850) ai_gene_pane_1_t1

0x3013,	// (0x00060884) grid_ai_soft_ind_pane

0x2fb1,	// (0x00060822) ai_gene_pane_2_t1_ParamLimits

0x2fb1,	// (0x00060822) ai_gene_pane_2_t1

0x92c0,	// (0x00066b31) main_pane_empty_t1_ParamLimits

0x92c0,	// (0x00066b31) main_pane_empty_t1

0x92d8,	// (0x00066b49) main_pane_empty_t2_ParamLimits

0x92d8,	// (0x00066b49) main_pane_empty_t2

0x92ed,	// (0x00066b5e) main_pane_empty_t3_ParamLimits

0x92ed,	// (0x00066b5e) main_pane_empty_t3

0x92ff,	// (0x00066b70) main_pane_empty_t4_ParamLimits

0x92ff,	// (0x00066b70) main_pane_empty_t4

0x9311,	// (0x00066b82) main_pane_empty_t5_ParamLimits

0x9311,	// (0x00066b82) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0006cdc0) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0006cdc0) main_pane_empty_t

0x80f4,	// (0x00065965) bg_popup_window_pane_ParamLimits

0x80f4,	// (0x00065965) bg_popup_window_pane

0xc761,	// (0x00069fd2) find_popup_pane_cp2_ParamLimits

0xc761,	// (0x00069fd2) find_popup_pane_cp2

0x2d2d,	// (0x0006059e) heading_pane_ParamLimits

0x2d2d,	// (0x0006059e) heading_pane

0x706e,	// (0x000648df) bg_popup_sub_pane

0xc6e2,	// (0x00069f53) bg_popup_window_pane_g1_ParamLimits

0xc6e2,	// (0x00069f53) bg_popup_window_pane_g1

0xc6f1,	// (0x00069f62) bg_popup_window_pane_g2_ParamLimits

0xc6f1,	// (0x00069f62) bg_popup_window_pane_g2

0xc6fd,	// (0x00069f6e) bg_popup_window_pane_g3_ParamLimits

0xc6fd,	// (0x00069f6e) bg_popup_window_pane_g3

0xc709,	// (0x00069f7a) bg_popup_window_pane_g4_ParamLimits

0xc709,	// (0x00069f7a) bg_popup_window_pane_g4

0xc718,	// (0x00069f89) bg_popup_window_pane_g5_ParamLimits

0xc718,	// (0x00069f89) bg_popup_window_pane_g5

0xc728,	// (0x00069f99) bg_popup_window_pane_g6_ParamLimits

0xc728,	// (0x00069f99) bg_popup_window_pane_g6

0xc734,	// (0x00069fa5) bg_popup_window_pane_g7_ParamLimits

0xc734,	// (0x00069fa5) bg_popup_window_pane_g7

0xc743,	// (0x00069fb4) bg_popup_window_pane_g8_ParamLimits

0xc743,	// (0x00069fb4) bg_popup_window_pane_g8

0xc752,	// (0x00069fc3) bg_popup_window_pane_g9_ParamLimits

0xc752,	// (0x00069fc3) bg_popup_window_pane_g9

0x2d07,	// (0x00060578) bg_popup_window_pane_g10_ParamLimits

0x2d07,	// (0x00060578) bg_popup_window_pane_g10

0x0009,

0xf89a,	// (0x0006d10b) bg_popup_window_pane_g_ParamLimits

0xf89a,	// (0x0006d10b) bg_popup_window_pane_g

0x2c30,	// (0x000604a1) bg_popup_heading_pane_ParamLimits

0x2c30,	// (0x000604a1) bg_popup_heading_pane

0x09e2,	// (0x0005e253) tabs_4_passive_pane_cp_srt_ParamLimits

0x09e2,	// (0x0005e253) tabs_4_passive_pane_cp_srt

0x09f4,	// (0x0005e265) tabs_4_passive_pane_srt_ParamLimits

0x2c44,	// (0x000604b5) heading_pane_g2

0x09f4,	// (0x0005e265) tabs_4_passive_pane_srt

0x1fba,	// (0x0005f82b) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1fba,	// (0x0005f82b) bg_passive_tab_pane_cp3_srt

0x2c4c,	// (0x000604bd) heading_pane_t1_ParamLimits

0x2c4c,	// (0x000604bd) heading_pane_t1

0x2c63,	// (0x000604d4) heading_pane_t2_ParamLimits

0x2c63,	// (0x000604d4) heading_pane_t2

0x0001,

0xf895,	// (0x0006d106) heading_pane_t_ParamLimits

0xf895,	// (0x0006d106) heading_pane_t

0x276d,	// (0x0005ffde) bg_popup_heading_pane_g1

0x281c,	// (0x0006008d) bg_popup_heading_pane_g2

0x2826,	// (0x00060097) bg_popup_heading_pane_g3

0x2830,	// (0x000600a1) bg_popup_heading_pane_g4

0x283a,	// (0x000600ab) bg_popup_heading_pane_g5

0x2844,	// (0x000600b5) bg_popup_heading_pane_g6

0x284c,	// (0x000600bd) bg_popup_heading_pane_g7

0x2854,	// (0x000600c5) bg_popup_heading_pane_g8

0x285e,	// (0x000600cf) bg_popup_heading_pane_g9

0x0008,

0xf851,	// (0x0006d0c2) bg_popup_heading_pane_g

0x1f2e,	// (0x0005f79f) bg_popup_sub_pane_g1

0x1f3e,	// (0x0005f7af) bg_popup_sub_pane_g2

0x1f36,	// (0x0005f7a7) bg_popup_sub_pane_g3

0x1f4e,	// (0x0005f7bf) bg_popup_sub_pane_g4

0x1f46,	// (0x0005f7b7) bg_popup_sub_pane_g5

0x1f56,	// (0x0005f7c7) bg_popup_sub_pane_g6

0x1f5e,	// (0x0005f7cf) bg_popup_sub_pane_g7

0x1f6e,	// (0x0005f7df) bg_popup_sub_pane_g8

0x1f66,	// (0x0005f7d7) bg_popup_sub_pane_g9

0x0008,

0xf82b,	// (0x0006d09c) bg_popup_sub_pane_g

0x71e6,	// (0x00064a57) bg_popup_window_pane_cp5_ParamLimits

0x71e6,	// (0x00064a57) bg_popup_window_pane_cp5

0x7202,	// (0x00064a73) popup_note_window_g1_ParamLimits

0x7202,	// (0x00064a73) popup_note_window_g1

0x720e,	// (0x00064a7f) popup_note_window_t1_ParamLimits

0x720e,	// (0x00064a7f) popup_note_window_t1

0x7224,	// (0x00064a95) popup_note_window_t2_ParamLimits

0x7224,	// (0x00064a95) popup_note_window_t2

0x723a,	// (0x00064aab) popup_note_window_t3_ParamLimits

0x723a,	// (0x00064aab) popup_note_window_t3

0x7250,	// (0x00064ac1) popup_note_window_t4_ParamLimits

0x7250,	// (0x00064ac1) popup_note_window_t4

0x7278,	// (0x00064ae9) popup_note_window_t5_ParamLimits

0x7278,	// (0x00064ae9) popup_note_window_t5

0x0004,

0xf55a,	// (0x0006cdcb) popup_note_window_t_ParamLimits

0xf55a,	// (0x0006cdcb) popup_note_window_t

0x729c,	// (0x00064b0d) bg_popup_window_pane_cp6_ParamLimits

0x729c,	// (0x00064b0d) bg_popup_window_pane_cp6

0x26e9,	// (0x0005ff5a) popup_note_image_window_g1_ParamLimits

0x26e9,	// (0x0005ff5a) popup_note_image_window_g1

0xb368,	// (0x00068bd9) popup_note_image_window_g2_ParamLimits

0xb368,	// (0x00068bd9) popup_note_image_window_g2

0x0001,

0xf81f,	// (0x0006d090) popup_note_image_window_g_ParamLimits

0xf81f,	// (0x0006d090) popup_note_image_window_g

0x270e,	// (0x0005ff7f) popup_note_image_window_t1_ParamLimits

0x270e,	// (0x0005ff7f) popup_note_image_window_t1

0x2727,	// (0x0005ff98) popup_note_image_window_t2_ParamLimits

0x2727,	// (0x0005ff98) popup_note_image_window_t2

0x2740,	// (0x0005ffb1) popup_note_image_window_t3_ParamLimits

0x2740,	// (0x0005ffb1) popup_note_image_window_t3

0x0002,

0xf824,	// (0x0006d095) popup_note_image_window_t_ParamLimits

0xf824,	// (0x0006d095) popup_note_image_window_t

0x25b2,	// (0x0005fe23) bg_popup_window_pane_cp7_ParamLimits

0x25b2,	// (0x0005fe23) bg_popup_window_pane_cp7

0x25e2,	// (0x0005fe53) popup_note_wait_window_g1_ParamLimits

0x25e2,	// (0x0005fe53) popup_note_wait_window_g1

0x25ee,	// (0x0005fe5f) popup_note_wait_window_g2_ParamLimits

0x25ee,	// (0x0005fe5f) popup_note_wait_window_g2

0x0002,

0xf80d,	// (0x0006d07e) popup_note_wait_window_g_ParamLimits

0xf80d,	// (0x0006d07e) popup_note_wait_window_g

0x2606,	// (0x0005fe77) popup_note_wait_window_t1_ParamLimits

0x2606,	// (0x0005fe77) popup_note_wait_window_t1

0xb309,	// (0x00068b7a) popup_note_wait_window_t2_ParamLimits

0xb309,	// (0x00068b7a) popup_note_wait_window_t2

0xb326,	// (0x00068b97) popup_note_wait_window_t3_ParamLimits

0xb326,	// (0x00068b97) popup_note_wait_window_t3

0xb339,	// (0x00068baa) popup_note_wait_window_t4_ParamLimits

0xb339,	// (0x00068baa) popup_note_wait_window_t4

0x0004,

0xf814,	// (0x0006d085) popup_note_wait_window_t_ParamLimits

0xf814,	// (0x0006d085) popup_note_wait_window_t

0x2682,	// (0x0005fef3) wait_bar_pane_ParamLimits

0x2682,	// (0x0005fef3) wait_bar_pane

0x706e,	// (0x000648df) wait_anim_pane

0x706e,	// (0x000648df) wait_border_pane

0x7064,	// (0x000648d5) wait_anim_pane_g1

0x7064,	// (0x000648d5) wait_anim_pane_g2

0x0001,

0xf6d4,	// (0x0006cf45) wait_anim_pane_g

0x255e,	// (0x0005fdcf) wait_border_pane_g1

0x2569,	// (0x0005fdda) wait_border_pane_g2

0x2572,	// (0x0005fde3) wait_border_pane_g3

0x0002,

0xf806,	// (0x0006d077) wait_border_pane_g

0x23c9,	// (0x0005fc3a) bg_popup_window_pane_cp16_ParamLimits

0x23c9,	// (0x0005fc3a) bg_popup_window_pane_cp16

0xb2b9,	// (0x00068b2a) indicator_popup_pane_cp4_ParamLimits

0xb2b9,	// (0x00068b2a) indicator_popup_pane_cp4

0x24dd,	// (0x0005fd4e) popup_query_data_window_t1_ParamLimits

0x24dd,	// (0x0005fd4e) popup_query_data_window_t1

0x24ef,	// (0x0005fd60) popup_query_data_window_t2_ParamLimits

0x24ef,	// (0x0005fd60) popup_query_data_window_t2

0x2508,	// (0x0005fd79) popup_query_data_window_t3_ParamLimits

0x2508,	// (0x0005fd79) popup_query_data_window_t3

0x0002,

0xf7ff,	// (0x0006d070) popup_query_data_window_t_ParamLimits

0xf7ff,	// (0x0006d070) popup_query_data_window_t

0xb2cd,	// (0x00068b3e) query_popup_data_pane_ParamLimits

0xb2cd,	// (0x00068b3e) query_popup_data_pane

0xb2e1,	// (0x00068b52) query_popup_data_pane_cp1_ParamLimits

0xb2e1,	// (0x00068b52) query_popup_data_pane_cp1

0x23c9,	// (0x0005fc3a) bg_popup_window_pane_cp10_ParamLimits

0x23c9,	// (0x0005fc3a) bg_popup_window_pane_cp10

0xb234,	// (0x00068aa5) indicator_popup_pane_ParamLimits

0xb234,	// (0x00068aa5) indicator_popup_pane

0xb256,	// (0x00068ac7) popup_query_code_window_t1_ParamLimits

0xb256,	// (0x00068ac7) popup_query_code_window_t1

0xb270,	// (0x00068ae1) popup_query_code_window_t2_ParamLimits

0xb270,	// (0x00068ae1) popup_query_code_window_t2

0x2480,	// (0x0005fcf1) popup_query_code_window_t3_ParamLimits

0x2480,	// (0x0005fcf1) popup_query_code_window_t3

0x0002,

0xf7f8,	// (0x0006d069) popup_query_code_window_t_ParamLimits

0xf7f8,	// (0x0006d069) popup_query_code_window_t

0x24af,	// (0x0005fd20) query_popup_pane_ParamLimits

0x24af,	// (0x0005fd20) query_popup_pane

0x729c,	// (0x00064b0d) bg_popup_window_pane_cp15_ParamLimits

0x729c,	// (0x00064b0d) bg_popup_window_pane_cp15

0x9349,	// (0x00066bba) indicator_popup_pane_cp1_ParamLimits

0x9349,	// (0x00066bba) indicator_popup_pane_cp1

0x935c,	// (0x00066bcd) indicator_popup_pane_cp2_ParamLimits

0x935c,	// (0x00066bcd) indicator_popup_pane_cp2

0x936f,	// (0x00066be0) popup_query_data_code_window_g1_ParamLimits

0x936f,	// (0x00066be0) popup_query_data_code_window_g1

0x72ba,	// (0x00064b2b) popup_query_data_code_window_t1_ParamLimits

0x72ba,	// (0x00064b2b) popup_query_data_code_window_t1

0x72cc,	// (0x00064b3d) popup_query_data_code_window_t2_ParamLimits

0x72cc,	// (0x00064b3d) popup_query_data_code_window_t2

0x9382,	// (0x00066bf3) popup_query_data_code_window_t3_ParamLimits

0x9382,	// (0x00066bf3) popup_query_data_code_window_t3

0x9398,	// (0x00066c09) popup_query_data_code_window_t4_ParamLimits

0x9398,	// (0x00066c09) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0006cdd6) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0006cdd6) popup_query_data_code_window_t

0x05a1,	// (0x0005de12) list_single_midp_graphic_pane_g3

0x93b0,	// (0x00066c21) query_popup_data_pane_cp2_ParamLimits

0x93c3,	// (0x00066c34) query_popup_pane_cp2_ParamLimits

0x93c3,	// (0x00066c34) query_popup_pane_cp2

0x706e,	// (0x000648df) bg_popup_window_pane_cp11

0x23ad,	// (0x0005fc1e) heading_pane_cp5

0x23b5,	// (0x0005fc26) listscroll_popup_info_pane

0x706e,	// (0x000648df) input_focus_pane_cp3

0x72de,	// (0x00064b4f) query_popup_pane_t1

0x72ec,	// (0x00064b5d) list_popup_info_pane_ParamLimits

0x72ec,	// (0x00064b5d) list_popup_info_pane

0x72fb,	// (0x00064b6c) listscroll_popup_info_pane_g1

0x7303,	// (0x00064b74) scroll_pane_cp7

0x93d6,	// (0x00066c47) popup_info_list_pane_t1_ParamLimits

0x93d6,	// (0x00066c47) popup_info_list_pane_t1

0x93f0,	// (0x00066c61) popup_info_list_pane_t2_ParamLimits

0x93f0,	// (0x00066c61) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0006cddf) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0006cddf) popup_info_list_pane_t

0x706e,	// (0x000648df) bg_popup_window_pane_cp12

0xcbe7,	// (0x0006a458) find_popup_pane

0x70bc,	// (0x0006492d) bg_popup_window_pane_cp3

0x730d,	// (0x00064b7e) heading_pane_cp3

0x731c,	// (0x00064b8d) listscroll_popup_graphic_pane

0x706e,	// (0x000648df) bg_popup_window_pane_cp4

0x945a,	// (0x00066ccb) heading_pane_cp4

0x732c,	// (0x00064b9d) listscroll_popup_colour_pane

0x9464,	// (0x00066cd5) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9464,	// (0x00066cd5) cell_large_graphic_colour_none_popup_pane

0x9478,	// (0x00066ce9) grid_large_graphic_colour_popup_pane_ParamLimits

0x9478,	// (0x00066ce9) grid_large_graphic_colour_popup_pane

0x949c,	// (0x00066d0d) listscroll_popup_colour_pane_g1_ParamLimits

0x949c,	// (0x00066d0d) listscroll_popup_colour_pane_g1

0x94b3,	// (0x00066d24) listscroll_popup_colour_pane_g2_ParamLimits

0x94b3,	// (0x00066d24) listscroll_popup_colour_pane_g2

0x94ca,	// (0x00066d3b) listscroll_popup_colour_pane_g3_ParamLimits

0x94ca,	// (0x00066d3b) listscroll_popup_colour_pane_g3

0x94da,	// (0x00066d4b) listscroll_popup_colour_pane_g4_ParamLimits

0x94da,	// (0x00066d4b) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0006cde4) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0006cde4) listscroll_popup_colour_pane_g

0x7334,	// (0x00064ba5) scroll_pane_cp6_ParamLimits

0x7334,	// (0x00064ba5) scroll_pane_cp6

0x94ea,	// (0x00066d5b) cell_large_graphic_colour_popup_pane_ParamLimits

0x94ea,	// (0x00066d5b) cell_large_graphic_colour_popup_pane

0x9509,	// (0x00066d7a) cell_large_graphic_colour_none_popup_pane_t1

0x706e,	// (0x000648df) grid_highlight_pane_cp5

0x7346,	// (0x00064bb7) cell_large_graphic_colour_popup_pane_g1

0x734e,	// (0x00064bbf) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0006cded) cell_large_graphic_colour_popup_pane_g

0x7356,	// (0x00064bc7) cell_large_graphic_colour_popup_pane_g2_copy1

0x735f,	// (0x00064bd0) grid_highlight_pane_cp4

0x7367,	// (0x00064bd8) bg_popup_window_pane_cp8_ParamLimits

0x7367,	// (0x00064bd8) bg_popup_window_pane_cp8

0x9518,	// (0x00066d89) popup_snote_single_text_window_g1_ParamLimits

0x9518,	// (0x00066d89) popup_snote_single_text_window_g1

0x952a,	// (0x00066d9b) popup_snote_single_text_window_t1_ParamLimits

0x952a,	// (0x00066d9b) popup_snote_single_text_window_t1

0x953d,	// (0x00066dae) popup_snote_single_text_window_t2_ParamLimits

0x953d,	// (0x00066dae) popup_snote_single_text_window_t2

0x9550,	// (0x00066dc1) popup_snote_single_text_window_t3_ParamLimits

0x9550,	// (0x00066dc1) popup_snote_single_text_window_t3

0x9589,	// (0x00066dfa) popup_snote_single_text_window_t4_ParamLimits

0x9589,	// (0x00066dfa) popup_snote_single_text_window_t4

0x95bd,	// (0x00066e2e) popup_snote_single_text_window_t5_ParamLimits

0x95bd,	// (0x00066e2e) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0006cdf2) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0006cdf2) popup_snote_single_text_window_t

0x7382,	// (0x00064bf3) bg_popup_window_pane_cp9_ParamLimits

0x7382,	// (0x00064bf3) bg_popup_window_pane_cp9

0x9518,	// (0x00066d89) popup_snote_single_graphic_window_g1_ParamLimits

0x9518,	// (0x00066d89) popup_snote_single_graphic_window_g1

0x7390,	// (0x00064c01) popup_snote_single_graphic_window_g2_ParamLimits

0x7390,	// (0x00064c01) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0006cdfd) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0006cdfd) popup_snote_single_graphic_window_g

0x739c,	// (0x00064c0d) popup_snote_single_graphic_window_t1_ParamLimits

0x739c,	// (0x00064c0d) popup_snote_single_graphic_window_t1

0x73af,	// (0x00064c20) popup_snote_single_graphic_window_t2_ParamLimits

0x73af,	// (0x00064c20) popup_snote_single_graphic_window_t2

0x9550,	// (0x00066dc1) popup_snote_single_graphic_window_t3_ParamLimits

0x9550,	// (0x00066dc1) popup_snote_single_graphic_window_t3

0x9589,	// (0x00066dfa) popup_snote_single_graphic_window_t4_ParamLimits

0x9589,	// (0x00066dfa) popup_snote_single_graphic_window_t4

0x95ec,	// (0x00066e5d) popup_snote_single_graphic_window_t5_ParamLimits

0x95ec,	// (0x00066e5d) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0006ce02) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0006ce02) popup_snote_single_graphic_window_t

0x36ac,	// (0x00060f1d) grid_graphic_popup_pane_ParamLimits

0x36ac,	// (0x00060f1d) grid_graphic_popup_pane

0x36d6,	// (0x00060f47) listscroll_popup_graphic_pane_g1_ParamLimits

0x36d6,	// (0x00060f47) listscroll_popup_graphic_pane_g1

0xcb85,	// (0x0006a3f6) listscroll_popup_graphic_pane_g2_ParamLimits

0xcb85,	// (0x0006a3f6) listscroll_popup_graphic_pane_g2

0x0001,

0xf975,	// (0x0006d1e6) listscroll_popup_graphic_pane_g_ParamLimits

0xf975,	// (0x0006d1e6) listscroll_popup_graphic_pane_g

0x36fe,	// (0x00060f6f) scroll_pane_cp5

0xcb44,	// (0x0006a3b5) cell_graphic_popup_pane_ParamLimits

0xcb44,	// (0x0006a3b5) cell_graphic_popup_pane

0x3623,	// (0x00060e94) cell_graphic_popup_pane_g1

0x362b,	// (0x00060e9c) cell_graphic_popup_pane_g2

0x7356,	// (0x00064bc7) cell_graphic_popup_pane_g3

0x0002,

0xf96e,	// (0x0006d1df) cell_graphic_popup_pane_g

0x3634,	// (0x00060ea5) cell_graphic_popup_pane_t2

0x735f,	// (0x00064bd0) grid_highlight_pane_cp3

0x7f6b,	// (0x000657dc) list_gen_pane_ParamLimits

0x7f6b,	// (0x000657dc) list_gen_pane

0x7f93,	// (0x00065804) scroll_pane

0xcaae,	// (0x0006a31f) bg_list_pane_g1_ParamLimits

0xcaae,	// (0x0006a31f) bg_list_pane_g1

0xcac9,	// (0x0006a33a) bg_list_pane_g2_ParamLimits

0xcac9,	// (0x0006a33a) bg_list_pane_g2

0xcadc,	// (0x0006a34d) bg_list_pane_g3_ParamLimits

0xcadc,	// (0x0006a34d) bg_list_pane_g3

0xcaee,	// (0x0006a35f) bg_list_pane_g4_ParamLimits

0xcaee,	// (0x0006a35f) bg_list_pane_g4

0xcb00,	// (0x0006a371) bg_list_pane_g5_ParamLimits

0xcb00,	// (0x0006a371) bg_list_pane_g5

0x0004,

0xf963,	// (0x0006d1d4) bg_list_pane_g_ParamLimits

0xf963,	// (0x0006d1d4) bg_list_pane_g

0xb567,	// (0x00068dd8) list_double2_graphic_large_graphic_pane_ParamLimits

0xb567,	// (0x00068dd8) list_double2_graphic_large_graphic_pane

0xb567,	// (0x00068dd8) list_double2_graphic_pane_ParamLimits

0xb567,	// (0x00068dd8) list_double2_graphic_pane

0xb567,	// (0x00068dd8) list_double2_large_graphic_pane_ParamLimits

0xb567,	// (0x00068dd8) list_double2_large_graphic_pane

0xb567,	// (0x00068dd8) list_double2_pane_ParamLimits

0xb567,	// (0x00068dd8) list_double2_pane

0xb567,	// (0x00068dd8) list_double_graphic_heading_pane_ParamLimits

0xb567,	// (0x00068dd8) list_double_graphic_heading_pane

0xb567,	// (0x00068dd8) list_double_graphic_pane_ParamLimits

0xb567,	// (0x00068dd8) list_double_graphic_pane

0xb567,	// (0x00068dd8) list_double_heading_pane_ParamLimits

0xb567,	// (0x00068dd8) list_double_heading_pane

0xb567,	// (0x00068dd8) list_double_large_graphic_pane_ParamLimits

0xb567,	// (0x00068dd8) list_double_large_graphic_pane

0xb567,	// (0x00068dd8) list_double_number_pane_ParamLimits

0xb567,	// (0x00068dd8) list_double_number_pane

0xb567,	// (0x00068dd8) list_double_pane_ParamLimits

0xb567,	// (0x00068dd8) list_double_pane

0xb567,	// (0x00068dd8) list_double_time_pane_ParamLimits

0xb567,	// (0x00068dd8) list_double_time_pane

0xb567,	// (0x00068dd8) list_setting_number_pane_ParamLimits

0xb567,	// (0x00068dd8) list_setting_number_pane

0xb567,	// (0x00068dd8) list_setting_pane_ParamLimits

0xb567,	// (0x00068dd8) list_setting_pane

0x9c52,	// (0x000674c3) list_single_2graphic_pane_ParamLimits

0x9c52,	// (0x000674c3) list_single_2graphic_pane

0x9c52,	// (0x000674c3) list_single_graphic_heading_pane_ParamLimits

0x9c52,	// (0x000674c3) list_single_graphic_heading_pane

0x9c52,	// (0x000674c3) list_single_graphic_pane_ParamLimits

0x9c52,	// (0x000674c3) list_single_graphic_pane

0x9c52,	// (0x000674c3) list_single_heading_pane_ParamLimits

0x9c52,	// (0x000674c3) list_single_heading_pane

0xca9b,	// (0x0006a30c) list_single_large_graphic_pane_ParamLimits

0xca9b,	// (0x0006a30c) list_single_large_graphic_pane

0x9c52,	// (0x000674c3) list_single_number_heading_pane_ParamLimits

0x9c52,	// (0x000674c3) list_single_number_heading_pane

0x9c52,	// (0x000674c3) list_single_number_pane_ParamLimits

0x9c52,	// (0x000674c3) list_single_number_pane

0x9c52,	// (0x000674c3) list_single_pane_ParamLimits

0x9c52,	// (0x000674c3) list_single_pane

0x706e,	// (0x000648df) list_highlight_pane_cp1

0xbf42,	// (0x000697b3) list_single_pane_g1_ParamLimits

0xbf42,	// (0x000697b3) list_single_pane_g1

0x0570,	// (0x0005dde1) list_single_pane_g2_ParamLimits

0x0570,	// (0x0005dde1) list_single_pane_g2

0x0001,

0xf5ad,	// (0x0006ce1e) list_single_pane_g_ParamLimits

0xf5ad,	// (0x0006ce1e) list_single_pane_g

0xb551,	// (0x00068dc2) list_single_pane_t1_ParamLimits

0xb551,	// (0x00068dc2) list_single_pane_t1

0xbf42,	// (0x000697b3) list_single_number_pane_g1_ParamLimits

0xbf42,	// (0x000697b3) list_single_number_pane_g1

0x0570,	// (0x0005dde1) list_single_number_pane_g2_ParamLimits

0x0570,	// (0x0005dde1) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x0006ce1e) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x0006ce1e) list_single_number_pane_g

0xbf4e,	// (0x000697bf) list_single_number_pane_t1_ParamLimits

0xbf4e,	// (0x000697bf) list_single_number_pane_t1

0xb4a5,	// (0x00068d16) list_single_number_pane_t2_ParamLimits

0xb4a5,	// (0x00068d16) list_single_number_pane_t2

0x0001,

0xf924,	// (0x0006d195) list_single_number_pane_t_ParamLimits

0xf924,	// (0x0006d195) list_single_number_pane_t

0xbf36,	// (0x000697a7) list_single_graphic_pane_g1_ParamLimits

0xbf36,	// (0x000697a7) list_single_graphic_pane_g1

0xbf42,	// (0x000697b3) list_single_graphic_pane_g2_ParamLimits

0xbf42,	// (0x000697b3) list_single_graphic_pane_g2

0x0570,	// (0x0005dde1) list_single_graphic_pane_g3_ParamLimits

0x0570,	// (0x0005dde1) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0006ce0d) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0006ce0d) list_single_graphic_pane_g

0xbf4e,	// (0x000697bf) list_single_graphic_pane_t1_ParamLimits

0xbf4e,	// (0x000697bf) list_single_graphic_pane_t1

0x9625,	// (0x00066e96) list_single_heading_pane_g1_ParamLimits

0x9625,	// (0x00066e96) list_single_heading_pane_g1

0x0570,	// (0x0005dde1) list_single_heading_pane_g2_ParamLimits

0x0570,	// (0x0005dde1) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0006ce14) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0006ce14) list_single_heading_pane_g

0x9638,	// (0x00066ea9) list_single_heading_pane_t1_ParamLimits

0x9638,	// (0x00066ea9) list_single_heading_pane_t1

0x964e,	// (0x00066ebf) list_single_heading_pane_t2_ParamLimits

0x964e,	// (0x00066ebf) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0006ce19) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0006ce19) list_single_heading_pane_t

0xbf42,	// (0x000697b3) list_single_number_heading_pane_g1_ParamLimits

0xbf42,	// (0x000697b3) list_single_number_heading_pane_g1

0x0570,	// (0x0005dde1) list_single_number_heading_pane_g2_ParamLimits

0x0570,	// (0x0005dde1) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x0006ce1e) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x0006ce1e) list_single_number_heading_pane_g

0x9660,	// (0x00066ed1) list_single_number_heading_pane_t1_ParamLimits

0x9660,	// (0x00066ed1) list_single_number_heading_pane_t1

0x9676,	// (0x00066ee7) list_single_number_heading_pane_t2_ParamLimits

0x9676,	// (0x00066ee7) list_single_number_heading_pane_t2

0x9688,	// (0x00066ef9) list_single_number_heading_pane_t3_ParamLimits

0x9688,	// (0x00066ef9) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x0006ce23) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x0006ce23) list_single_number_heading_pane_t

0x969a,	// (0x00066f0b) list_single_graphic_heading_pane_g1_ParamLimits

0x969a,	// (0x00066f0b) list_single_graphic_heading_pane_g1

0x96b0,	// (0x00066f21) list_single_graphic_heading_pane_g4_ParamLimits

0x96b0,	// (0x00066f21) list_single_graphic_heading_pane_g4

0x0570,	// (0x0005dde1) list_single_graphic_heading_pane_g5_ParamLimits

0x0570,	// (0x0005dde1) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x0006ce2a) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x0006ce2a) list_single_graphic_heading_pane_g

0x9660,	// (0x00066ed1) list_single_graphic_heading_pane_t1_ParamLimits

0x9660,	// (0x00066ed1) list_single_graphic_heading_pane_t1

0x96c1,	// (0x00066f32) list_single_graphic_heading_pane_t2_ParamLimits

0x96c1,	// (0x00066f32) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x0006ce31) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x0006ce31) list_single_graphic_heading_pane_t

0x3c93,	// (0x00061504) list_single_large_graphic_pane_g1_ParamLimits

0x3c93,	// (0x00061504) list_single_large_graphic_pane_g1

0xe8ad,	// (0x0006c11e) list_single_large_graphic_pane_g2_ParamLimits

0xe8ad,	// (0x0006c11e) list_single_large_graphic_pane_g2

0xe8b9,	// (0x0006c12a) list_single_large_graphic_pane_g3_ParamLimits

0xe8b9,	// (0x0006c12a) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x0006ce36) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x0006ce36) list_single_large_graphic_pane_g

0x2569,	// (0x0005fdda) wait_border_pane_g2_copy1

0x96d9,	// (0x00066f4a) list_single_large_graphic_pane_g4_cp2

0xbf64,	// (0x000697d5) list_single_large_graphic_pane_t1_ParamLimits

0xbf64,	// (0x000697d5) list_single_large_graphic_pane_t1

0x96e1,	// (0x00066f52) list_double_pane_g1_ParamLimits

0x96e1,	// (0x00066f52) list_double_pane_g1

0x96ed,	// (0x00066f5e) list_double_pane_g2_ParamLimits

0x96ed,	// (0x00066f5e) list_double_pane_g2

0x0001,

0xf5cc,	// (0x0006ce3d) list_double_pane_g_ParamLimits

0xf5cc,	// (0x0006ce3d) list_double_pane_g

0x96f9,	// (0x00066f6a) list_double_pane_t1_ParamLimits

0x96f9,	// (0x00066f6a) list_double_pane_t1

0x970f,	// (0x00066f80) list_double_pane_t2_ParamLimits

0x970f,	// (0x00066f80) list_double_pane_t2

0x0001,

0xf5d1,	// (0x0006ce42) list_double_pane_t_ParamLimits

0xf5d1,	// (0x0006ce42) list_double_pane_t

0x9721,	// (0x00066f92) list_double2_pane_g1_ParamLimits

0x9721,	// (0x00066f92) list_double2_pane_g1

0x9732,	// (0x00066fa3) list_double2_pane_g2_ParamLimits

0x9732,	// (0x00066fa3) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x0006ce47) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x0006ce47) list_double2_pane_g

0x973e,	// (0x00066faf) list_double2_pane_t1_ParamLimits

0x973e,	// (0x00066faf) list_double2_pane_t1

0x9754,	// (0x00066fc5) list_double2_pane_t2_ParamLimits

0x9754,	// (0x00066fc5) list_double2_pane_t2

0x0001,

0xf5db,	// (0x0006ce4c) list_double2_pane_t_ParamLimits

0xf5db,	// (0x0006ce4c) list_double2_pane_t

0x96e1,	// (0x00066f52) list_double_number_pane_g1_ParamLimits

0x96e1,	// (0x00066f52) list_double_number_pane_g1

0x96ed,	// (0x00066f5e) list_double_number_pane_g2_ParamLimits

0x96ed,	// (0x00066f5e) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x0006ce3d) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x0006ce3d) list_double_number_pane_g

0x9766,	// (0x00066fd7) list_double_number_pane_t1_ParamLimits

0x9766,	// (0x00066fd7) list_double_number_pane_t1

0x9778,	// (0x00066fe9) list_double_number_pane_t2_ParamLimits

0x9778,	// (0x00066fe9) list_double_number_pane_t2

0x978e,	// (0x00066fff) list_double_number_pane_t3_ParamLimits

0x978e,	// (0x00066fff) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x0006ce51) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x0006ce51) list_double_number_pane_t

0x97a0,	// (0x00067011) list_double_graphic_pane_g1_ParamLimits

0x97a0,	// (0x00067011) list_double_graphic_pane_g1

0x97ac,	// (0x0006701d) list_double_graphic_pane_g2_ParamLimits

0x97ac,	// (0x0006701d) list_double_graphic_pane_g2

0x3a9a,	// (0x0006130b) list_double_graphic_pane_g3_ParamLimits

0x3a9a,	// (0x0006130b) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x0006ce58) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x0006ce58) list_double_graphic_pane_g

0x96f9,	// (0x00066f6a) list_double_graphic_pane_t1_ParamLimits

0x96f9,	// (0x00066f6a) list_double_graphic_pane_t1

0x970f,	// (0x00066f80) list_double_graphic_pane_t2_ParamLimits

0x970f,	// (0x00066f80) list_double_graphic_pane_t2

0x0001,

0xf5d1,	// (0x0006ce42) list_double_graphic_pane_t_ParamLimits

0xf5d1,	// (0x0006ce42) list_double_graphic_pane_t

0x97c7,	// (0x00067038) list_double2_graphic_pane_g1_ParamLimits

0x97c7,	// (0x00067038) list_double2_graphic_pane_g1

0x97d3,	// (0x00067044) list_double2_graphic_pane_g2_ParamLimits

0x97d3,	// (0x00067044) list_double2_graphic_pane_g2

0x97df,	// (0x00067050) list_double2_graphic_pane_g3_ParamLimits

0x97df,	// (0x00067050) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0006ce61) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0006ce61) list_double2_graphic_pane_g

0x97eb,	// (0x0006705c) list_double2_graphic_pane_t1_ParamLimits

0x97eb,	// (0x0006705c) list_double2_graphic_pane_t1

0x9801,	// (0x00067072) list_double2_graphic_pane_t2_ParamLimits

0x9801,	// (0x00067072) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0006ce68) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0006ce68) list_double2_graphic_pane_t

0x9813,	// (0x00067084) list_double_large_graphic_pane_g1_ParamLimits

0x9813,	// (0x00067084) list_double_large_graphic_pane_g1

0x9832,	// (0x000670a3) list_double_large_graphic_pane_g2_ParamLimits

0x9832,	// (0x000670a3) list_double_large_graphic_pane_g2

0x96ed,	// (0x00066f5e) list_double_large_graphic_pane_g3_ParamLimits

0x96ed,	// (0x00066f5e) list_double_large_graphic_pane_g3

0x9848,	// (0x000670b9) list_double_large_graphic_pane_g4_ParamLimits

0x9848,	// (0x000670b9) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0006ce6d) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0006ce6d) list_double_large_graphic_pane_g

0x985b,	// (0x000670cc) list_double_large_graphic_pane_t1_ParamLimits

0x985b,	// (0x000670cc) list_double_large_graphic_pane_t1

0x9874,	// (0x000670e5) list_double_large_graphic_pane_t2_ParamLimits

0x9874,	// (0x000670e5) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0006ce78) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0006ce78) list_double_large_graphic_pane_t

0x9886,	// (0x000670f7) list_double2_large_graphic_pane_g1_ParamLimits

0x9886,	// (0x000670f7) list_double2_large_graphic_pane_g1

0x9892,	// (0x00067103) list_double2_large_graphic_pane_g2_ParamLimits

0x9892,	// (0x00067103) list_double2_large_graphic_pane_g2

0x97df,	// (0x00067050) list_double2_large_graphic_pane_g3_ParamLimits

0x97df,	// (0x00067050) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0006ce7d) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0006ce7d) list_double2_large_graphic_pane_g

0x97eb,	// (0x0006705c) list_double2_large_graphic_pane_t1_ParamLimits

0x97eb,	// (0x0006705c) list_double2_large_graphic_pane_t1

0x9801,	// (0x00067072) list_double2_large_graphic_pane_t2_ParamLimits

0x9801,	// (0x00067072) list_double2_large_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0006ce68) list_double2_large_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0006ce68) list_double2_large_graphic_pane_t

0x98a3,	// (0x00067114) list_double_heading_pane_g1_ParamLimits

0x98a3,	// (0x00067114) list_double_heading_pane_g1

0xe8da,	// (0x0006c14b) list_double_heading_pane_g2_ParamLimits

0xe8da,	// (0x0006c14b) list_double_heading_pane_g2

0x0001,

0xf613,	// (0x0006ce84) list_double_heading_pane_g_ParamLimits

0xf613,	// (0x0006ce84) list_double_heading_pane_g

0x98b4,	// (0x00067125) list_double_heading_pane_t1_ParamLimits

0x98b4,	// (0x00067125) list_double_heading_pane_t1

0x9801,	// (0x00067072) list_double_heading_pane_t2_ParamLimits

0x9801,	// (0x00067072) list_double_heading_pane_t2

0x0001,

0xf618,	// (0x0006ce89) list_double_heading_pane_t_ParamLimits

0xf618,	// (0x0006ce89) list_double_heading_pane_t

0x98ca,	// (0x0006713b) list_double_graphic_heading_pane_g1_ParamLimits

0x98ca,	// (0x0006713b) list_double_graphic_heading_pane_g1

0x98a3,	// (0x00067114) list_double_graphic_heading_pane_g2_ParamLimits

0x98a3,	// (0x00067114) list_double_graphic_heading_pane_g2

0xe8da,	// (0x0006c14b) list_double_graphic_heading_pane_g3_ParamLimits

0xe8da,	// (0x0006c14b) list_double_graphic_heading_pane_g3

0x0002,

0xf61d,	// (0x0006ce8e) list_double_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0006ce8e) list_double_graphic_heading_pane_g

0x98b4,	// (0x00067125) list_double_graphic_heading_pane_t1_ParamLimits

0x98b4,	// (0x00067125) list_double_graphic_heading_pane_t1

0x9801,	// (0x00067072) list_double_graphic_heading_pane_t2_ParamLimits

0x9801,	// (0x00067072) list_double_graphic_heading_pane_t2

0x0001,

0xf618,	// (0x0006ce89) list_double_graphic_heading_pane_t_ParamLimits

0xf618,	// (0x0006ce89) list_double_graphic_heading_pane_t

0x98d6,	// (0x00067147) list_double_time_pane_g1_ParamLimits

0x98d6,	// (0x00067147) list_double_time_pane_g1

0xbf7a,	// (0x000697eb) list_double_time_pane_g2_ParamLimits

0xbf7a,	// (0x000697eb) list_double_time_pane_g2

0x0001,

0xf624,	// (0x0006ce95) list_double_time_pane_g_ParamLimits

0xf624,	// (0x0006ce95) list_double_time_pane_g

0x98e7,	// (0x00067158) list_double_time_pane_t1_ParamLimits

0x98e7,	// (0x00067158) list_double_time_pane_t1

0x98fd,	// (0x0006716e) list_double_time_pane_t2_ParamLimits

0x98fd,	// (0x0006716e) list_double_time_pane_t2

0x990f,	// (0x00067180) list_double_time_pane_t3_ParamLimits

0x990f,	// (0x00067180) list_double_time_pane_t3

0x9921,	// (0x00067192) list_double_time_pane_t4_ParamLimits

0x9921,	// (0x00067192) list_double_time_pane_t4

0x0003,

0xf629,	// (0x0006ce9a) list_double_time_pane_t_ParamLimits

0xf629,	// (0x0006ce9a) list_double_time_pane_t

0x9933,	// (0x000671a4) list_setting_pane_g1_ParamLimits

0x9933,	// (0x000671a4) list_setting_pane_g1

0x993f,	// (0x000671b0) list_setting_pane_g2_ParamLimits

0x993f,	// (0x000671b0) list_setting_pane_g2

0x0001,

0xf632,	// (0x0006cea3) list_setting_pane_g_ParamLimits

0xf632,	// (0x0006cea3) list_setting_pane_g

0x994b,	// (0x000671bc) list_setting_pane_t1_ParamLimits

0x994b,	// (0x000671bc) list_setting_pane_t1

0x9965,	// (0x000671d6) list_setting_pane_t2_ParamLimits

0x9965,	// (0x000671d6) list_setting_pane_t2

0x0002,

0xf637,	// (0x0006cea8) list_setting_pane_t_ParamLimits

0xf637,	// (0x0006cea8) list_setting_pane_t

0x99a4,	// (0x00067215) set_value_pane_cp_ParamLimits

0x99a4,	// (0x00067215) set_value_pane_cp

0x99b0,	// (0x00067221) list_setting_number_pane_g1_ParamLimits

0x99b0,	// (0x00067221) list_setting_number_pane_g1

0x99bc,	// (0x0006722d) list_setting_number_pane_g2_ParamLimits

0x99bc,	// (0x0006722d) list_setting_number_pane_g2

0x0001,

0xf63e,	// (0x0006ceaf) list_setting_number_pane_g_ParamLimits

0xf63e,	// (0x0006ceaf) list_setting_number_pane_g

0x99c8,	// (0x00067239) list_setting_number_pane_t1_ParamLimits

0x99c8,	// (0x00067239) list_setting_number_pane_t1

0x99e1,	// (0x00067252) list_setting_number_pane_t2_ParamLimits

0x99e1,	// (0x00067252) list_setting_number_pane_t2

0x99fb,	// (0x0006726c) list_setting_number_pane_t3_ParamLimits

0x99fb,	// (0x0006726c) list_setting_number_pane_t3

0x0003,

0xf643,	// (0x0006ceb4) list_setting_number_pane_t_ParamLimits

0xf643,	// (0x0006ceb4) list_setting_number_pane_t

0x99a4,	// (0x00067215) set_value_pane_ParamLimits

0x99a4,	// (0x00067215) set_value_pane

0x7fc7,	// (0x00065838) bg_set_opt_pane_ParamLimits

0x7fc7,	// (0x00065838) bg_set_opt_pane

0xbf86,	// (0x000697f7) set_value_pane_t1

0x7fe8,	// (0x00065859) slider_set_pane_cp3

0x9a3e,	// (0x000672af) volume_small_pane_cp

0x7ff1,	// (0x00065862) list_form_gen_pane

0x7ffa,	// (0x0006586b) scroll_pane_cp8

0x9a47,	// (0x000672b8) form_field_data_pane_ParamLimits

0x9a47,	// (0x000672b8) form_field_data_pane

0x9a5e,	// (0x000672cf) form_field_data_wide_pane_ParamLimits

0x9a5e,	// (0x000672cf) form_field_data_wide_pane

0x9a7e,	// (0x000672ef) form_field_popup_pane_ParamLimits

0x9a7e,	// (0x000672ef) form_field_popup_pane

0x9a9e,	// (0x0006730f) form_field_popup_wide_pane_ParamLimits

0x9a9e,	// (0x0006730f) form_field_popup_wide_pane

0xbfa4,	// (0x00069815) form_field_slider_pane_ParamLimits

0xbfa4,	// (0x00069815) form_field_slider_pane

0x9ab5,	// (0x00067326) form_field_slider_wide_pane_ParamLimits

0x9ab5,	// (0x00067326) form_field_slider_wide_pane

0x800b,	// (0x0006587c) data_form_pane

0x9ad2,	// (0x00067343) form_field_data_pane_t1

0x8017,	// (0x00065888) input_focus_pane

0xe8e6,	// (0x0006c157) data_form_wide_pane

0xe903,	// (0x0006c174) form_field_data_wide_pane_t1

0x7374,	// (0x00064be5) input_focus_pane_cp6

0x9aec,	// (0x0006735d) form_field_popup_pane_t1

0x8017,	// (0x00065888) input_focus_pane_cp7

0x8045,	// (0x000658b6) list_form_pane

0xe92d,	// (0x0006c19e) form_field_popup_wide_pane_t1

0x8017,	// (0x00065888) input_focus_pane_cp8

0x8051,	// (0x000658c2) list_form_wide_pane

0x9b0e,	// (0x0006737f) form_field_slider_pane_t1_ParamLimits

0x9b0e,	// (0x0006737f) form_field_slider_pane_t1

0x9b26,	// (0x00067397) form_field_slider_pane_t2_ParamLimits

0x9b26,	// (0x00067397) form_field_slider_pane_t2

0x0001,

0xf653,	// (0x0006cec4) form_field_slider_pane_t_ParamLimits

0xf653,	// (0x0006cec4) form_field_slider_pane_t

0x71e6,	// (0x00064a57) input_focus_pane_cp9_ParamLimits

0x71e6,	// (0x00064a57) input_focus_pane_cp9

0x9b3b,	// (0x000673ac) slider_cont_pane_ParamLimits

0x9b3b,	// (0x000673ac) slider_cont_pane

0x805d,	// (0x000658ce) form_field_slider_wide_pane_t1_ParamLimits

0x805d,	// (0x000658ce) form_field_slider_wide_pane_t1

0xe942,	// (0x0006c1b3) form_field_slider_wide_pane_t2_ParamLimits

0xe942,	// (0x0006c1b3) form_field_slider_wide_pane_t2

0x0001,

0xf658,	// (0x0006cec9) form_field_slider_wide_pane_t_ParamLimits

0xf658,	// (0x0006cec9) form_field_slider_wide_pane_t

0x71e6,	// (0x00064a57) input_focus_pane_cp10_ParamLimits

0x71e6,	// (0x00064a57) input_focus_pane_cp10

0x9b4f,	// (0x000673c0) slider_cont_pane_cp1_ParamLimits

0x9b4f,	// (0x000673c0) slider_cont_pane_cp1

0x9b63,	// (0x000673d4) slider_form_pane_cp

0x806f,	// (0x000658e0) input_focus_pane_g1

0x8077,	// (0x000658e8) input_focus_pane_g2

0x807f,	// (0x000658f0) input_focus_pane_g3

0x8087,	// (0x000658f8) input_focus_pane_g4

0x808f,	// (0x00065900) input_focus_pane_g5

0x8097,	// (0x00065908) input_focus_pane_g6

0x809f,	// (0x00065910) input_focus_pane_g7

0x80a7,	// (0x00065918) input_focus_pane_g8

0x80af,	// (0x00065920) input_focus_pane_g9

0x7064,	// (0x000648d5) input_focus_pane_g10

0x0009,

0xf65d,	// (0x0006cece) input_focus_pane_g

0x2572,	// (0x0005fde3) wait_border_pane_g3_copy1

0x9b6b,	// (0x000673dc) data_form_pane_t1

0x7064,	// (0x000648d5) wait_anim_pane_g1_copy1

0xb523,	// (0x00068d94) data_form_wide_pane_t1

0x9b85,	// (0x000673f6) list_form_graphic_pane_cp_ParamLimits

0x9b85,	// (0x000673f6) list_form_graphic_pane_cp

0x3461,	// (0x00060cd2) slider_form_pane_g1

0x346a,	// (0x00060cdb) slider_form_pane_g2

0x0006,

0xf954,	// (0x0006d1c5) slider_form_pane_g

0x9b97,	// (0x00067408) list_form_graphic_pane_ParamLimits

0x9b97,	// (0x00067408) list_form_graphic_pane

0x9baa,	// (0x0006741b) list_form_graphic_pane_g1

0x9bb2,	// (0x00067423) list_form_graphic_pane_t1_ParamLimits

0x9bb2,	// (0x00067423) list_form_graphic_pane_t1

0x70bc,	// (0x0006492d) list_highlight_pane_cp5_ParamLimits

0x70bc,	// (0x0006492d) list_highlight_pane_cp5

0x9bc7,	// (0x00067438) find_pane_g1

0x80b7,	// (0x00065928) input_find_pane

0x9bd0,	// (0x00067441) input_find_pane_g1_ParamLimits

0x9bd0,	// (0x00067441) input_find_pane_g1

0x9bdc,	// (0x0006744d) input_find_pane_t1_ParamLimits

0x9bdc,	// (0x0006744d) input_find_pane_t1

0x9bf1,	// (0x00067462) input_find_pane_t2_ParamLimits

0x9bf1,	// (0x00067462) input_find_pane_t2

0x0001,

0xf672,	// (0x0006cee3) input_find_pane_t_ParamLimits

0xf672,	// (0x0006cee3) input_find_pane_t

0x80c0,	// (0x00065931) input_focus_pane_cp5_ParamLimits

0x80c0,	// (0x00065931) input_focus_pane_cp5

0x80d3,	// (0x00065944) bg_popup_window_pane_cp2_ParamLimits

0x80d3,	// (0x00065944) bg_popup_window_pane_cp2

0x80e0,	// (0x00065951) listscroll_menu_pane_ParamLimits

0x80e0,	// (0x00065951) listscroll_menu_pane

0x9c12,	// (0x00067483) popup_submenu_window_ParamLimits

0x9c12,	// (0x00067483) popup_submenu_window

0x80ec,	// (0x0006595d) find_popup_pane_g1

0x9c3a,	// (0x000674ab) input_popup_find_pane_cp

0x80f4,	// (0x00065965) input_focus_pane_cp4_ParamLimits

0x80f4,	// (0x00065965) input_focus_pane_cp4

0x8102,	// (0x00065973) input_popup_find_pane_t1_ParamLimits

0x8102,	// (0x00065973) input_popup_find_pane_t1

0x706e,	// (0x000648df) bg_popup_sub_pane_cp

0x8130,	// (0x000659a1) listscroll_popup_sub_pane

0x8138,	// (0x000659a9) list_submenu_pane_ParamLimits

0x8138,	// (0x000659a9) list_submenu_pane

0x8149,	// (0x000659ba) scroll_pane_cp4

0x9c52,	// (0x000674c3) list_single_popup_submenu_pane_ParamLimits

0x9c52,	// (0x000674c3) list_single_popup_submenu_pane

0x9c66,	// (0x000674d7) list_single_popup_submenu_pane_g1

0x9c6e,	// (0x000674df) list_single_popup_submenu_pane_t1_ParamLimits

0x9c6e,	// (0x000674df) list_single_popup_submenu_pane_t1

0x71e6,	// (0x00064a57) bg_active_tab_pane_cp1_ParamLimits

0x71e6,	// (0x00064a57) bg_active_tab_pane_cp1

0x8151,	// (0x000659c2) tabs_2_active_pane_g1

0x9c83,	// (0x000674f4) tabs_2_active_pane_t1

0x71e6,	// (0x00064a57) bg_passive_tab_pane_cp1_ParamLimits

0x71e6,	// (0x00064a57) bg_passive_tab_pane_cp1

0x8151,	// (0x000659c2) tabs_2_passive_pane_g1

0x9c83,	// (0x000674f4) tabs_2_passive_pane_t1

0x70bc,	// (0x0006492d) bg_active_tab_pane_cp4

0x9c95,	// (0x00067506) tabs_2_long_active_pane_t1

0x839a,	// (0x00065c0b) bg_passive_tab_pane_cp4

0x05a9,	// (0x0005de1a) list_single_midp_graphic_pane_g4_ParamLimits

0x70bc,	// (0x0006492d) bg_active_tab_pane_cp5

0x9ca8,	// (0x00067519) tabs_3_long_active_pane_t1

0x839a,	// (0x00065c0b) bg_passive_tab_pane_cp5

0x05a9,	// (0x0005de1a) list_single_midp_graphic_pane_g4

0x70bc,	// (0x0006492d) bg_popup_window_pane_cp13_ParamLimits

0x70bc,	// (0x0006492d) bg_popup_window_pane_cp13

0x8159,	// (0x000659ca) listscroll_popup_fast_pane_ParamLimits

0x8159,	// (0x000659ca) listscroll_popup_fast_pane

0x8165,	// (0x000659d6) grid_popup_fast_pane_ParamLimits

0x8165,	// (0x000659d6) grid_popup_fast_pane

0x8177,	// (0x000659e8) scroll_pane_cp9_ParamLimits

0x8177,	// (0x000659e8) scroll_pane_cp9

0x4f71,	// (0x000627e2) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4f71,	// (0x000627e2) list_single_graphic_hl_pane_t1_cp2

0x818a,	// (0x000659fb) input_focus_pane_cp20_ParamLimits

0x818a,	// (0x000659fb) input_focus_pane_cp20

0x8198,	// (0x00065a09) query_popup_data_pane_t1_ParamLimits

0x8198,	// (0x00065a09) query_popup_data_pane_t1

0x81ab,	// (0x00065a1c) query_popup_data_pane_t2_ParamLimits

0x81ab,	// (0x00065a1c) query_popup_data_pane_t2

0x81f1,	// (0x00065a62) query_popup_data_pane_t3_ParamLimits

0x81f1,	// (0x00065a62) query_popup_data_pane_t3

0x8232,	// (0x00065aa3) query_popup_data_pane_t4_ParamLimits

0x8232,	// (0x00065aa3) query_popup_data_pane_t4

0x826e,	// (0x00065adf) query_popup_data_pane_t5_ParamLimits

0x826e,	// (0x00065adf) query_popup_data_pane_t5

0x0004,

0xf677,	// (0x0006cee8) query_popup_data_pane_t_ParamLimits

0xf677,	// (0x0006cee8) query_popup_data_pane_t

0x806f,	// (0x000658e0) bg_set_opt_pane_g1

0x8077,	// (0x000658e8) bg_set_opt_pane_g2

0x807f,	// (0x000658f0) bg_set_opt_pane_g3

0x8087,	// (0x000658f8) bg_set_opt_pane_g4

0x808f,	// (0x00065900) bg_set_opt_pane_g5

0x8097,	// (0x00065908) bg_set_opt_pane_g6

0x809f,	// (0x00065910) bg_set_opt_pane_g7

0x80a7,	// (0x00065918) bg_set_opt_pane_g8

0x80af,	// (0x00065920) bg_set_opt_pane_g9

0x0008,

0xf682,	// (0x0006cef3) bg_set_opt_pane_g

0xf2bc,	// (0x0006cb2d) control_top_pane_stacon_ParamLimits

0xf2bc,	// (0x0006cb2d) control_top_pane_stacon

0xf30f,	// (0x0006cb80) signal_pane_stacon_ParamLimits

0xf30f,	// (0x0006cb80) signal_pane_stacon

0xc217,	// (0x00069a88) stacon_top_pane_g1_ParamLimits

0xc217,	// (0x00069a88) stacon_top_pane_g1

0xf334,	// (0x0006cba5) title_pane_stacon_ParamLimits

0xf334,	// (0x0006cba5) title_pane_stacon

0xf35e,	// (0x0006cbcf) uni_indicator_pane_stacon_ParamLimits

0xf35e,	// (0x0006cbcf) uni_indicator_pane_stacon

0xf373,	// (0x0006cbe4) battery_pane_stacon_ParamLimits

0xf373,	// (0x0006cbe4) battery_pane_stacon

0xf3b7,	// (0x0006cc28) control_bottom_pane_stacon_ParamLimits

0xf3b7,	// (0x0006cc28) control_bottom_pane_stacon

0xf3da,	// (0x0006cc4b) navi_pane_stacon_ParamLimits

0xf3da,	// (0x0006cc4b) navi_pane_stacon

0xc239,	// (0x00069aaa) stacon_bottom_pane_g1_ParamLimits

0xc239,	// (0x00069aaa) stacon_bottom_pane_g1

0xe954,	// (0x0006c1c5) aid_levels_signal_lsc_ParamLimits

0xe954,	// (0x0006c1c5) aid_levels_signal_lsc

0xe96a,	// (0x0006c1db) signal_pane_stacon_g1_ParamLimits

0xe96a,	// (0x0006c1db) signal_pane_stacon_g1

0xe97e,	// (0x0006c1ef) signal_pane_stacon_g2_ParamLimits

0xe97e,	// (0x0006c1ef) signal_pane_stacon_g2

0x0001,

0xf695,	// (0x0006cf06) signal_pane_stacon_g_ParamLimits

0xf695,	// (0x0006cf06) signal_pane_stacon_g

0xe9b3,	// (0x0006c224) title_pane_stacon_t1_ParamLimits

0xe9b3,	// (0x0006c224) title_pane_stacon_t1

0x82b2,	// (0x00065b23) uni_indicator_pane_stacon_g1

0x82bc,	// (0x00065b2d) uni_indicator_pane_stacon_g2

0x82c6,	// (0x00065b37) uni_indicator_pane_stacon_g3

0x82d0,	// (0x00065b41) uni_indicator_pane_stacon_g4

0x0003,

0xf6a1,	// (0x0006cf12) uni_indicator_pane_stacon_g

0xe9d8,	// (0x0006c249) control_top_pane_stacon_g1

0xe9e0,	// (0x0006c251) control_top_pane_stacon_t1_ParamLimits

0xe9e0,	// (0x0006c251) control_top_pane_stacon_t1

0xf142,	// (0x0006c9b3) aid_levels_battery_lsc_ParamLimits

0xf142,	// (0x0006c9b3) aid_levels_battery_lsc

0xf159,	// (0x0006c9ca) battery_pane_stacon_g1_ParamLimits

0xf159,	// (0x0006c9ca) battery_pane_stacon_g1

0xf16c,	// (0x0006c9dd) battery_pane_stacon_g2_ParamLimits

0xf16c,	// (0x0006c9dd) battery_pane_stacon_g2

0x0001,

0xf6aa,	// (0x0006cf1b) battery_pane_stacon_g_ParamLimits

0xf6aa,	// (0x0006cf1b) battery_pane_stacon_g

0xf1aa,	// (0x0006ca1b) navi_icon_pane_stacon

0xf1be,	// (0x0006ca2f) navi_navi_pane_stacon

0xf1aa,	// (0x0006ca1b) navi_text_pane_stacon

0xe9d8,	// (0x0006c249) control_bottom_pane_stacon_g1

0xf1d2,	// (0x0006ca43) control_bottom_pane_stacon_t1_ParamLimits

0xf1d2,	// (0x0006ca43) control_bottom_pane_stacon_t1

0x9cd4,	// (0x00067545) grid_app_pane_ParamLimits

0x9cd4,	// (0x00067545) grid_app_pane

0x9d0c,	// (0x0006757d) scroll_pane_cp15_ParamLimits

0x9d0c,	// (0x0006757d) scroll_pane_cp15

0x9d21,	// (0x00067592) cell_app_pane_ParamLimits

0x9d21,	// (0x00067592) cell_app_pane

0x9d66,	// (0x000675d7) cell_app_pane_g1_ParamLimits

0x9d66,	// (0x000675d7) cell_app_pane_g1

0x82f4,	// (0x00065b65) cell_app_pane_g2_ParamLimits

0x82f4,	// (0x00065b65) cell_app_pane_g2

0x0001,

0xf6af,	// (0x0006cf20) cell_app_pane_g_ParamLimits

0xf6af,	// (0x0006cf20) cell_app_pane_g

0x9d8a,	// (0x000675fb) cell_app_pane_t1_ParamLimits

0x9d8a,	// (0x000675fb) cell_app_pane_t1

0x8300,	// (0x00065b71) grid_highlight_pane_ParamLimits

0x8300,	// (0x00065b71) grid_highlight_pane

0x806f,	// (0x000658e0) cell_highlight_pane_g1

0x8077,	// (0x000658e8) cell_highlight_pane_g2

0x807f,	// (0x000658f0) cell_highlight_pane_g3

0x8087,	// (0x000658f8) cell_highlight_pane_g4

0x808f,	// (0x00065900) cell_highlight_pane_g5

0x8097,	// (0x00065908) cell_highlight_pane_g6

0x809f,	// (0x00065910) cell_highlight_pane_g7

0x80a7,	// (0x00065918) cell_highlight_pane_g8

0x80af,	// (0x00065920) cell_highlight_pane_g9

0x7064,	// (0x000648d5) cell_highlight_pane_g10

0x0009,

0xf65d,	// (0x0006cece) cell_highlight_pane_g

0x8311,	// (0x00065b82) bg_scroll_pane

0x9daa,	// (0x0006761b) scroll_handle_pane

0x8358,	// (0x00065bc9) scroll_bg_pane_g1

0x836d,	// (0x00065bde) scroll_bg_pane_g2

0x8385,	// (0x00065bf6) scroll_bg_pane_g3

0x0002,

0xf6b4,	// (0x0006cf25) scroll_bg_pane_g

0x9dbe,	// (0x0006762f) scroll_handle_focus_pane_ParamLimits

0x9dbe,	// (0x0006762f) scroll_handle_focus_pane

0x8358,	// (0x00065bc9) scroll_handle_pane_g1

0xbfb7,	// (0x00069828) scroll_handle_pane_g2

0x8385,	// (0x00065bf6) scroll_handle_pane_g3

0x0002,

0xf6bb,	// (0x0006cf2c) scroll_handle_pane_g

0x80f4,	// (0x00065965) bg_popup_sub_pane_cp21_ParamLimits

0x80f4,	// (0x00065965) bg_popup_sub_pane_cp21

0x9dcb,	// (0x0006763c) popup_fep_japan_predictive_window_t1_ParamLimits

0x9dcb,	// (0x0006763c) popup_fep_japan_predictive_window_t1

0x9de2,	// (0x00067653) popup_fep_japan_predictive_window_t2_ParamLimits

0x9de2,	// (0x00067653) popup_fep_japan_predictive_window_t2

0x9e15,	// (0x00067686) popup_fep_japan_predictive_window_t3_ParamLimits

0x9e15,	// (0x00067686) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c2,	// (0x0006cf33) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c2,	// (0x0006cf33) popup_fep_japan_predictive_window_t

0x706e,	// (0x000648df) bg_popup_sub_pane_cp23

0x9e4c,	// (0x000676bd) listscroll_japin_cand_pane

0xbfcb,	// (0x0006983c) popup_fep_japan_candidate_window_t1

0xbfd9,	// (0x0006984a) candidate_pane_ParamLimits

0xbfd9,	// (0x0006984a) candidate_pane

0x9e54,	// (0x000676c5) scroll_pane_cp30

0xbfeb,	// (0x0006985c) list_single_popup_jap_candidate_pane_ParamLimits

0xbfeb,	// (0x0006985c) list_single_popup_jap_candidate_pane

0x706e,	// (0x000648df) list_highlight_pane_cp30

0xc000,	// (0x00069871) list_single_popup_jap_candidate_pane_t1

0xc00f,	// (0x00069880) level_1_signal

0xc01c,	// (0x0006988d) level_2_signal

0xc029,	// (0x0006989a) level_3_signal

0xc036,	// (0x000698a7) level_4_signal

0xc043,	// (0x000698b4) level_5_signal

0xc050,	// (0x000698c1) level_6_signal

0xc05d,	// (0x000698ce) level_7_signal

0xc00f,	// (0x00069880) level_1_battery

0xc01c,	// (0x0006988d) level_2_battery

0xc029,	// (0x0006989a) level_3_battery

0xc036,	// (0x000698a7) level_4_battery

0xc043,	// (0x000698b4) level_5_battery

0xc050,	// (0x000698c1) level_6_battery

0xc05d,	// (0x000698ce) level_7_battery

0xc082,	// (0x000698f3) list_menu_pane_ParamLimits

0xc082,	// (0x000698f3) list_menu_pane

0xc098,	// (0x00069909) scroll_pane_cp25_ParamLimits

0xc098,	// (0x00069909) scroll_pane_cp25

0x9e5c,	// (0x000676cd) list_double2_graphic_pane_cp2_ParamLimits

0x9e5c,	// (0x000676cd) list_double2_graphic_pane_cp2

0x9e5c,	// (0x000676cd) list_double2_large_graphic_pane_cp2_ParamLimits

0x9e5c,	// (0x000676cd) list_double2_large_graphic_pane_cp2

0x9e5c,	// (0x000676cd) list_double2_pane_cp2_ParamLimits

0x9e5c,	// (0x000676cd) list_double2_pane_cp2

0x9e5c,	// (0x000676cd) list_double_graphic_pane_cp2_ParamLimits

0x9e5c,	// (0x000676cd) list_double_graphic_pane_cp2

0x9e5c,	// (0x000676cd) list_double_large_graphic_pane_cp2_ParamLimits

0x9e5c,	// (0x000676cd) list_double_large_graphic_pane_cp2

0x9e5c,	// (0x000676cd) list_double_number_pane_cp2_ParamLimits

0x9e5c,	// (0x000676cd) list_double_number_pane_cp2

0x9e5c,	// (0x000676cd) list_double_pane_cp2_ParamLimits

0x9e5c,	// (0x000676cd) list_double_pane_cp2

0x9e6b,	// (0x000676dc) list_single_2graphic_pane_cp2_ParamLimits

0x9e6b,	// (0x000676dc) list_single_2graphic_pane_cp2

0x9e6b,	// (0x000676dc) list_single_graphic_heading_pane_cp2_ParamLimits

0x9e6b,	// (0x000676dc) list_single_graphic_heading_pane_cp2

0x9e6b,	// (0x000676dc) list_single_graphic_pane_cp2_ParamLimits

0x9e6b,	// (0x000676dc) list_single_graphic_pane_cp2

0x9e6b,	// (0x000676dc) list_single_heading_pane_cp2_ParamLimits

0x9e6b,	// (0x000676dc) list_single_heading_pane_cp2

0xc0c1,	// (0x00069932) list_single_large_graphic_pane_cp2_ParamLimits

0xc0c1,	// (0x00069932) list_single_large_graphic_pane_cp2

0x9e6b,	// (0x000676dc) list_single_number_heading_pane_cp2_ParamLimits

0x9e6b,	// (0x000676dc) list_single_number_heading_pane_cp2

0x9e6b,	// (0x000676dc) list_single_number_pane_cp2_ParamLimits

0x9e6b,	// (0x000676dc) list_single_number_pane_cp2

0x9e7d,	// (0x000676ee) list_single_pane_cp2_ParamLimits

0x9e7d,	// (0x000676ee) list_single_pane_cp2

0xc0db,	// (0x0006994c) bg_popup_sub_pane_cp22

0xf2a2,	// (0x0006cb13) popup_side_volume_key_window_g1

0xf2ae,	// (0x0006cb1f) popup_side_volume_key_window_t1

0x9f45,	// (0x000677b6) volume_small_pane_cp1

0x71e6,	// (0x00064a57) bg_popup_sub_pane_cp24_ParamLimits

0x71e6,	// (0x00064a57) bg_popup_sub_pane_cp24

0xc0f1,	// (0x00069962) fep_china_uni_candidate_pane_ParamLimits

0xc0f1,	// (0x00069962) fep_china_uni_candidate_pane

0xc105,	// (0x00069976) fep_china_uni_entry_pane

0xc115,	// (0x00069986) popup_fep_china_uni_window_g1

0x9f4d,	// (0x000677be) fep_china_uni_entry_pane_g1

0x9f55,	// (0x000677c6) fep_china_uni_entry_pane_g2

0x0001,

0xf6f3,	// (0x0006cf64) fep_china_uni_entry_pane_g

0xc131,	// (0x000699a2) fep_entry_item_pane

0xc13b,	// (0x000699ac) fep_candidate_item_pane

0x9f5d,	// (0x000677ce) fep_china_uni_candidate_pane_g1

0xc143,	// (0x000699b4) fep_china_uni_candidate_pane_g2

0xc14b,	// (0x000699bc) fep_china_uni_candidate_pane_g3

0x9f65,	// (0x000677d6) fep_china_uni_candidate_pane_g4

0x0003,

0xf6f8,	// (0x0006cf69) fep_china_uni_candidate_pane_g

0x7064,	// (0x000648d5) fep_entry_item_pane_g1

0xc153,	// (0x000699c4) fep_entry_item_pane_t1_ParamLimits

0xc153,	// (0x000699c4) fep_entry_item_pane_t1

0xc169,	// (0x000699da) fep_candidate_item_pane_t1_ParamLimits

0xc169,	// (0x000699da) fep_candidate_item_pane_t1

0xc17e,	// (0x000699ef) fep_candidate_item_pane_t2_ParamLimits

0xc17e,	// (0x000699ef) fep_candidate_item_pane_t2

0x0001,

0xf701,	// (0x0006cf72) fep_candidate_item_pane_t_ParamLimits

0xf701,	// (0x0006cf72) fep_candidate_item_pane_t

0x70bc,	// (0x0006492d) list_highlight_pane_cp31_ParamLimits

0x70bc,	// (0x0006492d) list_highlight_pane_cp31

0xc190,	// (0x00069a01) level_1_signal_lsc

0xc199,	// (0x00069a0a) level_2_signal_lsc

0xc1a2,	// (0x00069a13) level_3_signal_lsc

0xc1ab,	// (0x00069a1c) level_4_signal_lsc

0xc1b4,	// (0x00069a25) level_5_signal_lsc

0xc1bd,	// (0x00069a2e) level_6_signal_lsc

0xc1c6,	// (0x00069a37) level_7_signal_lsc

0xc1c6,	// (0x00069a37) level_1_battery_lsc

0xc1cf,	// (0x00069a40) level_2_battery_lsc

0xc1d8,	// (0x00069a49) level_3_battery_lsc

0xc1e1,	// (0x00069a52) level_4_battery_lsc

0xc1ea,	// (0x00069a5b) level_5_battery_lsc

0xc1f3,	// (0x00069a64) level_6_battery_lsc

0xc190,	// (0x00069a01) level_7_battery_lsc

0xc1fc,	// (0x00069a6d) scroll_handle_focus_pane_g1

0xc205,	// (0x00069a76) scroll_handle_focus_pane_g2

0xc20e,	// (0x00069a7f) scroll_handle_focus_pane_g3

0x0002,

0xf706,	// (0x0006cf77) scroll_handle_focus_pane_g

0x9f6d,	// (0x000677de) list_single_2graphic_pane_g1_ParamLimits

0x9f6d,	// (0x000677de) list_single_2graphic_pane_g1

0x96b0,	// (0x00066f21) list_single_2graphic_pane_g2_ParamLimits

0x96b0,	// (0x00066f21) list_single_2graphic_pane_g2

0x0570,	// (0x0005dde1) list_single_2graphic_pane_g3_ParamLimits

0x0570,	// (0x0005dde1) list_single_2graphic_pane_g3

0x9f79,	// (0x000677ea) list_single_2graphic_pane_g4_ParamLimits

0x9f79,	// (0x000677ea) list_single_2graphic_pane_g4

0x0003,

0xf70d,	// (0x0006cf7e) list_single_2graphic_pane_g_ParamLimits

0xf70d,	// (0x0006cf7e) list_single_2graphic_pane_g

0x9f85,	// (0x000677f6) list_single_2graphic_pane_t1_ParamLimits

0x9f85,	// (0x000677f6) list_single_2graphic_pane_t1

0x9fb3,	// (0x00067824) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9fb3,	// (0x00067824) list_double2_graphic_large_graphic_pane_g1

0x9892,	// (0x00067103) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9892,	// (0x00067103) list_double2_graphic_large_graphic_pane_g2

0x97df,	// (0x00067050) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x97df,	// (0x00067050) list_double2_graphic_large_graphic_pane_g3

0x9fc5,	// (0x00067836) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9fc5,	// (0x00067836) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf716,	// (0x0006cf87) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf716,	// (0x0006cf87) list_double2_graphic_large_graphic_pane_g

0x9fd1,	// (0x00067842) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9fd1,	// (0x00067842) list_double2_graphic_large_graphic_pane_t1

0x9fe7,	// (0x00067858) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9fe7,	// (0x00067858) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf71f,	// (0x0006cf90) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf71f,	// (0x0006cf90) list_double2_graphic_large_graphic_pane_t

0xa06c,	// (0x000678dd) popup_fast_swap_window_ParamLimits

0xa06c,	// (0x000678dd) popup_fast_swap_window

0xa088,	// (0x000678f9) popup_side_volume_key_window

0xc2c4,	// (0x00069b35) stacon_top_pane

0xc2ce,	// (0x00069b3f) status_pane_ParamLimits

0xc2ce,	// (0x00069b3f) status_pane

0xa0a2,	// (0x00067913) status_small_pane

0x706e,	// (0x000648df) control_pane

0x706e,	// (0x000648df) stacon_bottom_pane

0x7ffa,	// (0x0006586b) scroll_pane_cp121

0x7ff1,	// (0x00065862) set_content_pane

0x9ff9,	// (0x0006786a) bg_active_tab_pane_g1_cp1

0xa002,	// (0x00067873) bg_active_tab_pane_g2_cp1

0xa00b,	// (0x0006787c) bg_active_tab_pane_g3_cp1

0x9ff9,	// (0x0006786a) bg_passive_tab_pane_g1_cp1

0xa002,	// (0x00067873) bg_passive_tab_pane_g2_cp1

0xa00b,	// (0x0006787c) bg_passive_tab_pane_g3_cp1

0xa014,	// (0x00067885) bg_active_tab_pane_g1_cp2

0xa002,	// (0x00067873) bg_active_tab_pane_g2_cp2

0xa01d,	// (0x0006788e) bg_active_tab_pane_g3_cp2

0xa014,	// (0x00067885) bg_passive_tab_pane_g1_cp2

0xa002,	// (0x00067873) bg_passive_tab_pane_g2_cp2

0xa01d,	// (0x0006788e) bg_passive_tab_pane_g3_cp2

0xa026,	// (0x00067897) bg_active_tab_pane_g1_cp3

0xa002,	// (0x00067873) bg_active_tab_pane_g2_cp3

0xa02f,	// (0x000678a0) bg_active_tab_pane_g3_cp3

0xa026,	// (0x00067897) bg_passive_tab_pane_g1_cp3

0xa002,	// (0x00067873) bg_passive_tab_pane_g2_cp3

0xa02f,	// (0x000678a0) bg_passive_tab_pane_g3_cp3

0xa038,	// (0x000678a9) bg_active_tab_pane_g1_cp4

0xa002,	// (0x00067873) bg_active_tab_pane_g2_cp4

0xa043,	// (0x000678b4) bg_active_tab_pane_g3_cp4

0xa038,	// (0x000678a9) bg_passive_tab_pane_g1_cp4

0xa002,	// (0x00067873) bg_passive_tab_pane_g2_cp4

0xa043,	// (0x000678b4) bg_passive_tab_pane_g3_cp4

0xa04e,	// (0x000678bf) bg_active_tab_pane_g1_cp5

0xa002,	// (0x00067873) bg_active_tab_pane_g2_cp5

0xa057,	// (0x000678c8) bg_active_tab_pane_g3_cp5

0xa04e,	// (0x000678bf) bg_passive_tab_pane_g1_cp5

0xa002,	// (0x00067873) bg_passive_tab_pane_g2_cp5

0xa057,	// (0x000678c8) bg_passive_tab_pane_g3_cp5

0x3abe,	// (0x0006132f) list_set_graphic_pane_ParamLimits

0x3abe,	// (0x0006132f) list_set_graphic_pane

0x706e,	// (0x000648df) bg_set_opt_pane_cp4

0xc255,	// (0x00069ac6) list_set_graphic_pane_g1_ParamLimits

0xc255,	// (0x00069ac6) list_set_graphic_pane_g1

0xc261,	// (0x00069ad2) list_set_graphic_pane_g2_ParamLimits

0xc261,	// (0x00069ad2) list_set_graphic_pane_g2

0x0001,

0xf724,	// (0x0006cf95) list_set_graphic_pane_g_ParamLimits

0xf724,	// (0x0006cf95) list_set_graphic_pane_g

0x0009,

0xfaa9,	// (0x0006d31a) volume_small_pane_cp_g

0xa060,	// (0x000678d1) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa060,	// (0x000678d1) list_double2_large_graphic_pane_g1_cp2

0xc283,	// (0x00069af4) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc283,	// (0x00069af4) list_double2_large_graphic_pane_g2_cp2

0xc294,	// (0x00069b05) list_double2_large_graphic_pane_g3_cp2

0xc29c,	// (0x00069b0d) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc29c,	// (0x00069b0d) list_double2_large_graphic_pane_t1_cp2

0xc2b2,	// (0x00069b23) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc2b2,	// (0x00069b23) list_double2_large_graphic_pane_t2_cp2

0xc7d6,	// (0x0006a047) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc7d6,	// (0x0006a047) list_double_large_graphic_pane_g1_cp2

0x3034,	// (0x000608a5) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3034,	// (0x000608a5) list_double_large_graphic_pane_g2_cp2

0xc3ea,	// (0x00069c5b) list_double_large_graphic_pane_g3_cp2

0x3045,	// (0x000608b6) list_double_large_graphic_pane_g4_cp

0x304d,	// (0x000608be) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x304d,	// (0x000608be) list_double_large_graphic_pane_t1_cp2

0x3064,	// (0x000608d5) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3064,	// (0x000608d5) list_double_large_graphic_pane_t2_cp2

0xc2dc,	// (0x00069b4d) list_double2_graphic_pane_g1_cp2_ParamLimits

0xc2dc,	// (0x00069b4d) list_double2_graphic_pane_g1_cp2

0xc2ea,	// (0x00069b5b) list_double2_graphic_pane_g2_cp2_ParamLimits

0xc2ea,	// (0x00069b5b) list_double2_graphic_pane_g2_cp2

0xc2fb,	// (0x00069b6c) list_double2_graphic_pane_g3_cp2

0xc305,	// (0x00069b76) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc305,	// (0x00069b76) list_double2_graphic_pane_t1_cp2

0xc31b,	// (0x00069b8c) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc31b,	// (0x00069b8c) list_double2_graphic_pane_t2_cp2

0xc32d,	// (0x00069b9e) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc32d,	// (0x00069b9e) list_single_number_heading_pane_g1_cp2

0xc339,	// (0x00069baa) list_single_number_heading_pane_g2_cp2

0xc341,	// (0x00069bb2) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc341,	// (0x00069bb2) list_single_number_heading_pane_t1_cp2

0xc357,	// (0x00069bc8) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc357,	// (0x00069bc8) list_single_number_heading_pane_t2_cp2

0xc369,	// (0x00069bda) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc369,	// (0x00069bda) list_single_number_heading_pane_t3_cp2

0xc32d,	// (0x00069b9e) list_single_heading_pane_g1_cp2_ParamLimits

0xc32d,	// (0x00069b9e) list_single_heading_pane_g1_cp2

0xc339,	// (0x00069baa) list_single_heading_pane_g2_cp2

0xc341,	// (0x00069bb2) list_single_heading_pane_t1_cp2_ParamLimits

0xc341,	// (0x00069bb2) list_single_heading_pane_t1_cp2

0x2e2d,	// (0x0006069e) list_single_heading_pane_t2_cp2_ParamLimits

0x2e2d,	// (0x0006069e) list_single_heading_pane_t2_cp2

0x2d75,	// (0x000605e6) list_double_graphic_pane_g1_cp2_ParamLimits

0x2d75,	// (0x000605e6) list_double_graphic_pane_g1_cp2

0x2d81,	// (0x000605f2) list_double_graphic_pane_g2_cp2_ParamLimits

0x2d81,	// (0x000605f2) list_double_graphic_pane_g2_cp2

0x2d90,	// (0x00060601) list_double_graphic_pane_g3_cp2

0x2d98,	// (0x00060609) list_double_graphic_pane_t1_cp2_ParamLimits

0x2d98,	// (0x00060609) list_double_graphic_pane_t1_cp2

0x2dae,	// (0x0006061f) list_double_graphic_pane_t2_cp2_ParamLimits

0x2dae,	// (0x0006061f) list_double_graphic_pane_t2_cp2

0xc3de,	// (0x00069c4f) list_double_number_pane_g1_cp2_ParamLimits

0xc3de,	// (0x00069c4f) list_double_number_pane_g1_cp2

0xc3ea,	// (0x00069c5b) list_double_number_pane_g2_cp2

0x2d39,	// (0x000605aa) list_double_number_pane_t1_cp2_ParamLimits

0x2d39,	// (0x000605aa) list_double_number_pane_t1_cp2

0x2d4d,	// (0x000605be) list_double_number_pane_t2_cp2_ParamLimits

0x2d4d,	// (0x000605be) list_double_number_pane_t2_cp2

0x2d63,	// (0x000605d4) list_double_number_pane_t3_cp2_ParamLimits

0x2d63,	// (0x000605d4) list_double_number_pane_t3_cp2

0x2c22,	// (0x00060493) list_single_graphic_pane_g1_cp2_ParamLimits

0x2c22,	// (0x00060493) list_single_graphic_pane_g1_cp2

0xbf42,	// (0x000697b3) list_single_graphic_pane_g2_cp2_ParamLimits

0xbf42,	// (0x000697b3) list_single_graphic_pane_g2_cp2

0xc443,	// (0x00069cb4) list_single_graphic_pane_g3_cp2

0x2bf8,	// (0x00060469) list_single_graphic_pane_t1_cp2_ParamLimits

0x2bf8,	// (0x00060469) list_single_graphic_pane_t1_cp2

0xbf42,	// (0x000697b3) list_single_number_pane_g1_cp2_ParamLimits

0xbf42,	// (0x000697b3) list_single_number_pane_g1_cp2

0xc443,	// (0x00069cb4) list_single_number_pane_g2_cp2

0x2bf8,	// (0x00060469) list_single_number_pane_t1_cp2_ParamLimits

0x2bf8,	// (0x00060469) list_single_number_pane_t1_cp2

0x2c0e,	// (0x0006047f) list_single_number_pane_t2_cp2_ParamLimits

0x2c0e,	// (0x0006047f) list_single_number_pane_t2_cp2

0xc283,	// (0x00069af4) list_double2_pane_g1_cp2_ParamLimits

0xc283,	// (0x00069af4) list_double2_pane_g1_cp2

0xc294,	// (0x00069b05) list_double2_pane_g2_cp2

0xc3b6,	// (0x00069c27) list_double2_pane_t1_cp2_ParamLimits

0xc3b6,	// (0x00069c27) list_double2_pane_t1_cp2

0xc3cc,	// (0x00069c3d) list_double2_pane_t2_cp2_ParamLimits

0xc3cc,	// (0x00069c3d) list_double2_pane_t2_cp2

0xc3de,	// (0x00069c4f) list_double_pane_g1_cp2_ParamLimits

0xc3de,	// (0x00069c4f) list_double_pane_g1_cp2

0xc3ea,	// (0x00069c5b) list_double_pane_g2_cp2

0xc3f2,	// (0x00069c63) list_double_pane_t1_cp2_ParamLimits

0xc3f2,	// (0x00069c63) list_double_pane_t1_cp2

0xc408,	// (0x00069c79) list_double_pane_t2_cp2_ParamLimits

0xc408,	// (0x00069c79) list_double_pane_t2_cp2

0xa0ad,	// (0x0006791e) list_single_pane_cp2_g3

0xbf42,	// (0x000697b3) list_single_pane_g1_cp2_ParamLimits

0xbf42,	// (0x000697b3) list_single_pane_g1_cp2

0xc443,	// (0x00069cb4) list_single_pane_g2_cp2

0xc44b,	// (0x00069cbc) list_single_pane_t1_cp2_ParamLimits

0xc44b,	// (0x00069cbc) list_single_pane_t1_cp2

0xa0b5,	// (0x00067926) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa0b5,	// (0x00067926) list_single_large_graphic_pane_g1_cp2

0xc463,	// (0x00069cd4) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc463,	// (0x00069cd4) list_single_large_graphic_pane_g2_cp2

0xc46f,	// (0x00069ce0) list_single_large_graphic_pane_g3_cp2

0xa0c1,	// (0x00067932) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa0c1,	// (0x00067932) list_single_large_graphic_pane_g4_cp1

0xc477,	// (0x00069ce8) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc477,	// (0x00069ce8) list_single_large_graphic_pane_t1_cp2

0x2bc4,	// (0x00060435) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2bc4,	// (0x00060435) list_single_graphic_heading_pane_g1_cp2

0x2b91,	// (0x00060402) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2b91,	// (0x00060402) list_single_graphic_heading_pane_g4_cp2

0xc443,	// (0x00069cb4) list_single_graphic_heading_pane_g5_cp2

0x2bd0,	// (0x00060441) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2bd0,	// (0x00060441) list_single_graphic_heading_pane_t1_cp2

0x2be6,	// (0x00060457) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2be6,	// (0x00060457) list_single_graphic_heading_pane_t2_cp2

0x2b85,	// (0x000603f6) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2b85,	// (0x000603f6) list_single_2graphic_pane_g1_cp2

0x2b91,	// (0x00060402) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2b91,	// (0x00060402) list_single_2graphic_pane_g2_cp2

0xc443,	// (0x00069cb4) list_single_2graphic_pane_g3_cp2

0x2ba2,	// (0x00060413) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2ba2,	// (0x00060413) list_single_2graphic_pane_g4_cp2

0x2bae,	// (0x0006041f) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2bae,	// (0x0006041f) list_single_2graphic_pane_t1_cp2

0x7064,	// (0x000648d5) list_highlight_pane_g10_cp1

0x276d,	// (0x0005ffde) list_highlight_pane_g1_cp1

0x2775,	// (0x0005ffe6) list_highlight_pane_g2_cp1

0x277d,	// (0x0005ffee) list_highlight_pane_g3_cp1

0x2785,	// (0x0005fff6) list_highlight_pane_g4_cp1

0x278d,	// (0x0005fffe) list_highlight_pane_g5_cp1

0x2795,	// (0x00060006) list_highlight_pane_g6_cp1

0x279d,	// (0x0006000e) list_highlight_pane_g7_cp1

0x27a5,	// (0x00060016) list_highlight_pane_g8_cp1

0x27ad,	// (0x0006001e) list_highlight_pane_g9_cp1

0xb34c,	// (0x00068bbd) form_field_slider_pane_t3

0xb35a,	// (0x00068bcb) form_field_slider_pane_t4

0x26b1,	// (0x0005ff22) slider_form_pane_ParamLimits

0x26b1,	// (0x0005ff22) slider_form_pane

0x706e,	// (0x000648df) control_abbreviations

0x706e,	// (0x000648df) control_conventions

0x706e,	// (0x000648df) control_definitions

0x706e,	// (0x000648df) format_table_attribute

0xc7ad,	// (0x0006a01e) bg_popup_preview_window_pane_g9

0x706e,	// (0x000648df) format_table_data2

0x706e,	// (0x000648df) format_table_data3

0x706e,	// (0x000648df) format_table_data_example

0x0008,

0x706e,	// (0x000648df) intro_purpose

0xf8b4,	// (0x0006d125) bg_popup_preview_window_pane_g

0x706e,	// (0x000648df) texts_category

0x706e,	// (0x000648df) texts_graphics

0xc48d,	// (0x00069cfe) text_digital

0xc49c,	// (0x00069d0d) text_primary

0xc4ab,	// (0x00069d1c) text_primary_small

0xc4ba,	// (0x00069d2b) text_secondary

0xc4c9,	// (0x00069d3a) text_title

0xcb14,	// (0x0006a385) bg_passive_tab_pane_g1_cp3_srt

0xa002,	// (0x00067873) bg_passive_tab_pane_g2_cp3_srt

0xcb1d,	// (0x0006a38e) bg_passive_tab_pane_g3_cp3_srt

0x71e6,	// (0x00064a57) bg_active_tab_pane_cp3_srt_ParamLimits

0x71e6,	// (0x00064a57) bg_active_tab_pane_cp3_srt

0xcb26,	// (0x0006a397) tabs_4_active_pane_srt_g1

0xcb2e,	// (0x0006a39f) tabs_4_active_pane_srt_t1_ParamLimits

0xcb2e,	// (0x0006a39f) tabs_4_active_pane_srt_t1

0xcb14,	// (0x0006a385) bg_active_tab_pane_g1_cp3_copy1

0xa002,	// (0x00067873) bg_active_tab_pane_g2_cp3_copy1

0xcb1d,	// (0x0006a38e) bg_active_tab_pane_g3_cp3_copy1

0x70bc,	// (0x0006492d) tabs_2_long_active_pane_srt_ParamLimits

0x70bc,	// (0x0006492d) tabs_2_long_active_pane_srt

0x70bc,	// (0x0006492d) tabs_2_long_passive_pane_srt_ParamLimits

0x70bc,	// (0x0006492d) tabs_2_long_passive_pane_srt

0x839a,	// (0x00065c0b) bg_passive_tab_pane_cp4_srt_ParamLimits

0x839a,	// (0x00065c0b) bg_passive_tab_pane_cp4_srt

0xc8c5,	// (0x0006a136) bg_passive_tab_pane_g1_cp4_srt

0xa002,	// (0x00067873) bg_passive_tab_pane_g2_cp4_srt

0xc8ce,	// (0x0006a13f) bg_passive_tab_pane_g3_cp4_srt

0x70bc,	// (0x0006492d) bg_active_tab_pane_cp4_srt_ParamLimits

0x70bc,	// (0x0006492d) bg_active_tab_pane_cp4_srt

0xc8d7,	// (0x0006a148) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc8d7,	// (0x0006a148) tabs_2_long_active_pane_srt_t1

0xc8c5,	// (0x0006a136) bg_active_tab_pane_g1_cp4_srt

0xa002,	// (0x00067873) bg_active_tab_pane_g2_cp4_srt

0xc8ce,	// (0x0006a13f) bg_active_tab_pane_g3_cp4_srt

0x71e6,	// (0x00064a57) tabs_3_long_active_pane_srt_ParamLimits

0x71e6,	// (0x00064a57) tabs_3_long_active_pane_srt

0x71e6,	// (0x00064a57) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x71e6,	// (0x00064a57) tabs_3_long_passive_pane_cp_srt

0x71e6,	// (0x00064a57) tabs_3_long_passive_pane_srt_ParamLimits

0x71e6,	// (0x00064a57) tabs_3_long_passive_pane_srt

0x839a,	// (0x00065c0b) bg_passive_tab_pane_cp5_srt_ParamLimits

0x839a,	// (0x00065c0b) bg_passive_tab_pane_cp5_srt

0xa04e,	// (0x000678bf) bg_passive_tab_pane_g1_cp5_srt

0xa002,	// (0x00067873) bg_passive_tab_pane_g2_cp5_srt

0xa057,	// (0x000678c8) bg_passive_tab_pane_g3_cp5_srt

0x70bc,	// (0x0006492d) bg_active_tab_pane_cp5_srt_ParamLimits

0x70bc,	// (0x0006492d) bg_active_tab_pane_cp5_srt

0xc8af,	// (0x0006a120) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc8af,	// (0x0006a120) tabs_3_long_active_pane_srt_t1

0xa04e,	// (0x000678bf) bg_active_tab_pane_g1_cp5_srt

0xa002,	// (0x00067873) bg_active_tab_pane_g2_cp5_srt

0xa057,	// (0x000678c8) bg_active_tab_pane_g3_cp5_srt

0x3278,	// (0x00060ae9) navi_text_pane_srt_t1

0x3270,	// (0x00060ae1) navi_icon_pane_srt_g1

0xc5b4,	// (0x00069e25) midp_editing_number_pane_srt

0xc4d8,	// (0x00069d49) midp_ticker_pane_srt

0xc5bc,	// (0x00069e2d) midp_ticker_pane_srt_g1

0xc5c4,	// (0x00069e35) midp_ticker_pane_srt_g2

0x0001,

0xf743,	// (0x0006cfb4) midp_ticker_pane_srt_g

0xc5cc,	// (0x00069e3d) midp_ticker_pane_srt_t1

0x3261,	// (0x00060ad2) midp_editing_number_pane_t1_copy1

0xa0db,	// (0x0006794c) listscroll_midp_pane

0xa0db,	// (0x0006794c) midp_form_pane

0xa146,	// (0x000679b7) midp_info_popup_window_ParamLimits

0xa146,	// (0x000679b7) midp_info_popup_window

0x80f4,	// (0x00065965) bg_popup_sub_pane_cp50_ParamLimits

0x80f4,	// (0x00065965) bg_popup_sub_pane_cp50

0x23a1,	// (0x0005fc12) listscroll_midp_info_pane_ParamLimits

0x23a1,	// (0x0005fc12) listscroll_midp_info_pane

0x2381,	// (0x0005fbf2) listscroll_form_midp_pane_ParamLimits

0x2381,	// (0x0005fbf2) listscroll_form_midp_pane

0x238d,	// (0x0005fbfe) scroll_bar_cp050

0x2381,	// (0x0005fbf2) list_midp_pane

0xccb8,	// (0x0006a529) signal_pane_g2_cp

0x229b,	// (0x0005fb0c) listscroll_midp_info_pane_t1_ParamLimits

0x229b,	// (0x0005fb0c) listscroll_midp_info_pane_t1

0xb186,	// (0x000689f7) listscroll_midp_info_pane_t2_ParamLimits

0xb186,	// (0x000689f7) listscroll_midp_info_pane_t2

0xb1c4,	// (0x00068a35) listscroll_midp_info_pane_t3_ParamLimits

0xb1c4,	// (0x00068a35) listscroll_midp_info_pane_t3

0xb1fe,	// (0x00068a6f) listscroll_midp_info_pane_t4_ParamLimits

0xb1fe,	// (0x00068a6f) listscroll_midp_info_pane_t4

0x0003,

0xf7ef,	// (0x0006d060) listscroll_midp_info_pane_t_ParamLimits

0xf7ef,	// (0x0006d060) listscroll_midp_info_pane_t

0x8149,	// (0x000659ba) scroll_pane_cp21

0x223b,	// (0x0005faac) form_midp_field_choice_group_pane

0xb149,	// (0x000689ba) form_midp_field_text_pane

0x2281,	// (0x0005faf2) form_midp_field_time_pane

0x2289,	// (0x0005fafa) form_midp_gauge_slider_pane

0x2292,	// (0x0005fb03) form_midp_gauge_wait_pane

0x706e,	// (0x000648df) form_midp_image_pane

0xb133,	// (0x000689a4) list_single_midp_pane_ParamLimits

0xb133,	// (0x000689a4) list_single_midp_pane

0xb111,	// (0x00068982) form_midp_field_text_pane_t1

0x1fba,	// (0x0005f82b) input_focus_pane_cp050

0x222a,	// (0x0005fa9b) list_midp_form_text_pane

0x21bf,	// (0x0005fa30) form_midp_field_choice_group_pane_t1

0x21cd,	// (0x0005fa3e) input_focus_pane_cp051

0x21e1,	// (0x0005fa52) list_midp_choice_pane

0x706e,	// (0x000648df) status_idle_pane

0x21a3,	// (0x0005fa14) form_midp_field_time_pane_t1

0x7064,	// (0x000648d5) wait_anim_pane_g2_copy1

0x21b1,	// (0x0005fa22) form_midp_field_time_pane_t2

0x0001,

0xc538,	// (0x00069da9) aid_navinavi_width_2_pane

0xf7ea,	// (0x0006d05b) form_midp_field_time_pane_t

0x706e,	// (0x000648df) input_focus_pane_cp052

0x706e,	// (0x000648df) bg_input_focus_pane_cp040

0x2163,	// (0x0005f9d4) form_midp_gauge_slider_pane_t1

0x2171,	// (0x0005f9e2) form_midp_gauge_slider_pane_t2

0xb0f5,	// (0x00068966) form_midp_gauge_slider_pane_t3

0xb103,	// (0x00068974) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e1,	// (0x0006d052) form_midp_gauge_slider_pane_t

0x219b,	// (0x0005fa0c) form_midp_slider_pane

0x70bc,	// (0x0006492d) bg_input_focus_pane_cp041_ParamLimits

0x70bc,	// (0x0006492d) bg_input_focus_pane_cp041

0x2130,	// (0x0005f9a1) form_midp_gauge_wait_pane_t1_ParamLimits

0x2130,	// (0x0005f9a1) form_midp_gauge_wait_pane_t1

0x2142,	// (0x0005f9b3) form_midp_gauge_wait_pane_t2_ParamLimits

0x2142,	// (0x0005f9b3) form_midp_gauge_wait_pane_t2

0x0001,

0xf7dc,	// (0x0006d04d) form_midp_gauge_wait_pane_t_ParamLimits

0xf7dc,	// (0x0006d04d) form_midp_gauge_wait_pane_t

0x2154,	// (0x0005f9c5) form_midp_wait_pane_ParamLimits

0x2154,	// (0x0005f9c5) form_midp_wait_pane

0xb0bf,	// (0x00068930) form_midp_image_pane_g1

0xb0c8,	// (0x00068939) form_midp_image_pane_t1

0xb0d7,	// (0x00068948) form_midp_image_pane_t2

0xb0e6,	// (0x00068957) form_midp_image_pane_t3

0x0002,

0xf7d5,	// (0x0006d046) form_midp_image_pane_t

0x20f1,	// (0x0005f962) list_single_midp_pane_g1

0xeb23,	// (0x0006c394) list_single_midp_pane_t1

0xb0aa,	// (0x0006891b) list_midp_form_item_pane_ParamLimits

0xb0aa,	// (0x0006891b) list_midp_form_item_pane

0xc4e0,	// (0x00069d51) list_midp_form_item_pane_t1

0xc4ef,	// (0x00069d60) midp_ticker_pane_g1

0xc4fb,	// (0x00069d6c) midp_ticker_pane_g2

0x0001,

0xf729,	// (0x0006cf9a) midp_ticker_pane_g

0xc507,	// (0x00069d78) midp_ticker_pane_t1

0x34ae,	// (0x00060d1f) midp_editing_number_pane_t1

0x348c,	// (0x00060cfd) midp_editing_number_pane

0x349b,	// (0x00060d0c) midp_ticker_pane

0x3251,	// (0x00060ac2) ai_message_heading_pane

0x706e,	// (0x000648df) bg_popup_window_pane_cp14

0x3259,	// (0x00060aca) listscroll_ai_message_pane

0x31db,	// (0x00060a4c) ai_message_heading_pane_g1_ParamLimits

0x31db,	// (0x00060a4c) ai_message_heading_pane_g1

0xc877,	// (0x0006a0e8) ai_message_heading_pane_g2_ParamLimits

0xc877,	// (0x0006a0e8) ai_message_heading_pane_g2

0x31f3,	// (0x00060a64) ai_message_heading_pane_g3_ParamLimits

0x31f3,	// (0x00060a64) ai_message_heading_pane_g3

0x31ff,	// (0x00060a70) ai_message_heading_pane_g4_ParamLimits

0x31ff,	// (0x00060a70) ai_message_heading_pane_g4

0x0003,

0xf916,	// (0x0006d187) ai_message_heading_pane_g_ParamLimits

0xf916,	// (0x0006d187) ai_message_heading_pane_g

0xc883,	// (0x0006a0f4) ai_message_heading_pane_t1_ParamLimits

0xc883,	// (0x0006a0f4) ai_message_heading_pane_t1

0xc89d,	// (0x0006a10e) ai_message_heading_pane_t2_ParamLimits

0xc89d,	// (0x0006a10e) ai_message_heading_pane_t2

0x0001,

0xf91f,	// (0x0006d190) ai_message_heading_pane_t_ParamLimits

0xf91f,	// (0x0006d190) ai_message_heading_pane_t

0x3237,	// (0x00060aa8) bg_popup_heading_pane_cp1_ParamLimits

0x3237,	// (0x00060aa8) bg_popup_heading_pane_cp1

0x31c9,	// (0x00060a3a) list_ai_message_pane_ParamLimits

0x31c9,	// (0x00060a3a) list_ai_message_pane

0x8149,	// (0x000659ba) scroll_pane_cp10

0x3165,	// (0x000609d6) list_ai_message_pane_g1

0x316d,	// (0x000609de) list_ai_message_pane_g2

0x0001,

0xf8f3,	// (0x0006d164) list_ai_message_pane_g

0x3175,	// (0x000609e6) list_ai_message_pane_t1_ParamLimits

0x3175,	// (0x000609e6) list_ai_message_pane_t1

0x318a,	// (0x000609fb) list_ai_message_pane_t2_ParamLimits

0x318a,	// (0x000609fb) list_ai_message_pane_t2

0x319f,	// (0x00060a10) list_ai_message_pane_t3_ParamLimits

0x319f,	// (0x00060a10) list_ai_message_pane_t3

0x31b4,	// (0x00060a25) list_ai_message_pane_t4_ParamLimits

0x31b4,	// (0x00060a25) list_ai_message_pane_t4

0x0003,

0xf8f8,	// (0x0006d169) list_ai_message_pane_t_ParamLimits

0xf8f8,	// (0x0006d169) list_ai_message_pane_t

0xc853,	// (0x0006a0c4) cell_ai_soft_ind_pane_ParamLimits

0xc853,	// (0x0006a0c4) cell_ai_soft_ind_pane

0xc519,	// (0x00069d8a) cell_ai_soft_ind_pane_g1_ParamLimits

0xc519,	// (0x00069d8a) cell_ai_soft_ind_pane_g1

0x706e,	// (0x000648df) grid_highlight_cp1

0xc526,	// (0x00069d97) text_secondary_cp56_ParamLimits

0xc526,	// (0x00069d97) text_secondary_cp56

0x3125,	// (0x00060996) example_general_pane_ParamLimits

0x3125,	// (0x00060996) example_general_pane

0x3131,	// (0x000609a2) example_parent_pane_g1_ParamLimits

0x3131,	// (0x000609a2) example_parent_pane_g1

0x313d,	// (0x000609ae) example_parent_pane_t1_ParamLimits

0x313d,	// (0x000609ae) example_parent_pane_t1

0xa82e,	// (0x0006809f) popup_preview_text_window_ParamLimits

0xa82e,	// (0x0006809f) popup_preview_text_window

0xc43b,	// (0x00069cac) list_single_pane_cp2_g4

0x729c,	// (0x00064b0d) bg_popup_preview_window_pane_ParamLimits

0x729c,	// (0x00064b0d) bg_popup_preview_window_pane

0xc7b5,	// (0x0006a026) popup_preview_text_window_t1_ParamLimits

0xc7b5,	// (0x0006a026) popup_preview_text_window_t1

0x2e9d,	// (0x0006070e) popup_preview_text_window_t2_ParamLimits

0x2e9d,	// (0x0006070e) popup_preview_text_window_t2

0x2ee6,	// (0x00060757) popup_preview_text_window_t3_ParamLimits

0x2ee6,	// (0x00060757) popup_preview_text_window_t3

0x2f2b,	// (0x0006079c) popup_preview_text_window_t4_ParamLimits

0x2f2b,	// (0x0006079c) popup_preview_text_window_t4

0x0004,

0xf8c7,	// (0x0006d138) popup_preview_text_window_t_ParamLimits

0xf8c7,	// (0x0006d138) popup_preview_text_window_t

0x2fa9,	// (0x0006081a) scroll_pane_cp11

0x1f2e,	// (0x0005f79f) bg_popup_preview_window_pane_g1

0xc775,	// (0x00069fe6) bg_popup_preview_window_pane_g2

0xc77d,	// (0x00069fee) bg_popup_preview_window_pane_g3

0xc785,	// (0x00069ff6) bg_popup_preview_window_pane_g4

0xc78d,	// (0x00069ffe) bg_popup_preview_window_pane_g5

0xc795,	// (0x0006a006) bg_popup_preview_window_pane_g6

0xc79d,	// (0x0006a00e) bg_popup_preview_window_pane_g7

0xc7a5,	// (0x0006a016) bg_popup_preview_window_pane_g8

0xe720,	// (0x0006bf91) aid_popup_width_pane

0xa7aa,	// (0x0006801b) popup_midp_note_alarm_window_ParamLimits

0xa7aa,	// (0x0006801b) popup_midp_note_alarm_window

0x800b,	// (0x0006587c) data_form_pane_ParamLimits

0x9ac8,	// (0x00067339) form_field_data_pane_g1

0x9ad2,	// (0x00067343) form_field_data_pane_t1_ParamLimits

0x8017,	// (0x00065888) input_focus_pane_ParamLimits

0xe8e6,	// (0x0006c157) data_form_wide_pane_ParamLimits

0xe8f7,	// (0x0006c168) form_field_data_wide_pane_g1

0xe903,	// (0x0006c174) form_field_data_wide_pane_t1_ParamLimits

0x7374,	// (0x00064be5) input_focus_pane_cp6_ParamLimits

0x9c44,	// (0x000674b5) input_popup_find_pane_g1_ParamLimits

0x9c44,	// (0x000674b5) input_popup_find_pane_g1

0xf17d,	// (0x0006c9ee) aid_navi_side_left_pane

0xf192,	// (0x0006ca03) aid_navi_side_right_pane

0x2868,	// (0x000600d9) bg_popup_window_pane_cp30_ParamLimits

0x2868,	// (0x000600d9) bg_popup_window_pane_cp30

0x28e2,	// (0x00060153) popup_midp_note_alarm_window_g1_ParamLimits

0x28e2,	// (0x00060153) popup_midp_note_alarm_window_g1

0x2912,	// (0x00060183) popup_midp_note_alarm_window_t1_ParamLimits

0x2912,	// (0x00060183) popup_midp_note_alarm_window_t1

0xb39f,	// (0x00068c10) popup_midp_note_alarm_window_t2_ParamLimits

0xb39f,	// (0x00068c10) popup_midp_note_alarm_window_t2

0xc66c,	// (0x00069edd) popup_midp_note_alarm_window_t3_ParamLimits

0xc66c,	// (0x00069edd) popup_midp_note_alarm_window_t3

0xc694,	// (0x00069f05) popup_midp_note_alarm_window_t4_ParamLimits

0xc694,	// (0x00069f05) popup_midp_note_alarm_window_t4

0x2aa9,	// (0x0006031a) popup_midp_note_alarm_window_t5_ParamLimits

0x2aa9,	// (0x0006031a) popup_midp_note_alarm_window_t5

0x000a,

0xf864,	// (0x0006d0d5) popup_midp_note_alarm_window_t_ParamLimits

0xf864,	// (0x0006d0d5) popup_midp_note_alarm_window_t

0x2b55,	// (0x000603c6) wait_bar_pane_cp1_ParamLimits

0x2b55,	// (0x000603c6) wait_bar_pane_cp1

0x706e,	// (0x000648df) wait_anim_pane_copy1

0x706e,	// (0x000648df) wait_border_pane_copy1

0x255e,	// (0x0005fdcf) wait_border_pane_g1_copy1

0xe91d,	// (0x0006c18e) form_field_popup_pane_g1

0x9aec,	// (0x0006735d) form_field_popup_pane_t1_ParamLimits

0x8017,	// (0x00065888) input_focus_pane_cp7_ParamLimits

0x8045,	// (0x000658b6) list_form_pane_ParamLimits

0xe925,	// (0x0006c196) form_field_popup_wide_pane_g1

0xe92d,	// (0x0006c19e) form_field_popup_wide_pane_t1_ParamLimits

0x8017,	// (0x00065888) input_focus_pane_cp8_ParamLimits

0x8051,	// (0x000658c2) list_form_wide_pane_ParamLimits

0x3694,	// (0x00060f05) aid_size_cell_graphic_pane

0x9b6b,	// (0x000673dc) data_form_pane_t1_ParamLimits

0xb523,	// (0x00068d94) data_form_wide_pane_t1_ParamLimits

0xac71,	// (0x000684e2) bg_status_flat_pane

0x901b,	// (0x0006688c) title_pane_t1_ParamLimits

0x7084,	// (0x000648f5) title_pane_t2_ParamLimits

0x70aa,	// (0x0006491b) title_pane_t3_ParamLimits

0xf532,	// (0x0006cda3) title_pane_t_ParamLimits

0xc00f,	// (0x00069880) level_1_signal_ParamLimits

0xc01c,	// (0x0006988d) level_2_signal_ParamLimits

0xc029,	// (0x0006989a) level_3_signal_ParamLimits

0xc036,	// (0x000698a7) level_4_signal_ParamLimits

0xc043,	// (0x000698b4) level_5_signal_ParamLimits

0xc050,	// (0x000698c1) level_6_signal_ParamLimits

0xc05d,	// (0x000698ce) level_7_signal_ParamLimits

0xc00f,	// (0x00069880) level_1_battery_ParamLimits

0xc01c,	// (0x0006988d) level_2_battery_ParamLimits

0xc029,	// (0x0006989a) level_3_battery_ParamLimits

0xc036,	// (0x000698a7) level_4_battery_ParamLimits

0xc043,	// (0x000698b4) level_5_battery_ParamLimits

0xc050,	// (0x000698c1) level_6_battery_ParamLimits

0xc05d,	// (0x000698ce) level_7_battery_ParamLimits

0x276d,	// (0x0005ffde) bg_status_flat_pane_g1

0x2775,	// (0x0005ffe6) bg_status_flat_pane_g2

0x277d,	// (0x0005ffee) bg_status_flat_pane_g3

0x2785,	// (0x0005fff6) bg_status_flat_pane_g4

0x278d,	// (0x0005fffe) bg_status_flat_pane_g5

0x2795,	// (0x00060006) bg_status_flat_pane_g6

0x279d,	// (0x0006000e) bg_status_flat_pane_g7

0x90af,	// (0x00066920) tabs_3_active_pane_t1_ParamLimits

0x90af,	// (0x00066920) tabs_3_passive_pane_t1_ParamLimits

0x90c9,	// (0x0006693a) tabs_4_active_pane_t1_ParamLimits

0x90c9,	// (0x0006693a) tabs_4_1_passive_pane_t1_ParamLimits

0x9c83,	// (0x000674f4) tabs_2_active_pane_t1_ParamLimits

0x9c83,	// (0x000674f4) tabs_2_passive_pane_t1_ParamLimits

0x70bc,	// (0x0006492d) bg_active_tab_pane_cp4_ParamLimits

0x9c95,	// (0x00067506) tabs_2_long_active_pane_t1_ParamLimits

0x839a,	// (0x00065c0b) bg_passive_tab_pane_cp4_ParamLimits

0x05dd,	// (0x0005de4e) list_single_midp_graphic_pane_t1_ParamLimits

0x70bc,	// (0x0006492d) bg_active_tab_pane_cp5_ParamLimits

0x9ca8,	// (0x00067519) tabs_3_long_active_pane_t1_ParamLimits

0x839a,	// (0x00065c0b) bg_passive_tab_pane_cp5_ParamLimits

0x05dd,	// (0x0005de4e) list_single_midp_graphic_pane_t1

0xac71,	// (0x000684e2) bg_status_flat_pane_ParamLimits

0x0398,	// (0x0005dc09) indicator_pane_cp2_ParamLimits

0x0398,	// (0x0005dc09) indicator_pane_cp2

0xadef,	// (0x00068660) navi_pane_srt_ParamLimits

0xadef,	// (0x00068660) navi_pane_srt

0x04e7,	// (0x0005dd58) popup_clock_digital_analogue_window_cp1

0x7100,	// (0x00064971) indicator_pane_t1

0xc4d8,	// (0x00069d49) copy_highlight_pane

0xc4d8,	// (0x00069d49) cursor_graphics_pane

0xc4d8,	// (0x00069d49) graphic_within_text_pane

0xc4d8,	// (0x00069d49) link_highlight_pane

0x2f6c,	// (0x000607dd) popup_preview_text_window_t5_ParamLimits

0x2f6c,	// (0x000607dd) popup_preview_text_window_t5

0xc540,	// (0x00069db1) cursor_digital_pane

0xc540,	// (0x00069db1) cursor_primary_pane

0xc551,	// (0x00069dc2) cursor_primary_small_pane

0xc559,	// (0x00069dca) cursor_secondary_pane

0xc561,	// (0x00069dd2) cursor_title_pane

0xc540,	// (0x00069db1) link_highlight_digital_pane

0xc548,	// (0x00069db9) link_highlight_primary_pane

0xc551,	// (0x00069dc2) link_highlight_primary_small_pane

0xc559,	// (0x00069dca) link_highlight_secondary_pane

0xc561,	// (0x00069dd2) link_highlight_title_pane

0xc540,	// (0x00069db1) copy_highlight_digital_pane

0xc540,	// (0x00069db1) copy_highlight_primary_pane

0xc551,	// (0x00069dc2) copy_highlight_primary_small_pane

0xc559,	// (0x00069dca) copy_highlight_secondary_pane

0xc561,	// (0x00069dd2) copy_highlight_title_pane

0xc559,	// (0x00069dca) graphic_text_digital_pane

0x280b,	// (0x0006007c) graphic_text_primary_pane

0x2814,	// (0x00060085) graphic_text_primary_small_pane

0xc551,	// (0x00069dc2) graphic_text_secondary_pane

0xc540,	// (0x00069db1) graphic_text_title_pane

0xa197,	// (0x00067a08) cursor_primary_pane_g1

0x27fd,	// (0x0006006e) cursor_text_primary_t1

0xb395,	// (0x00068c06) cursor_primary_small_pane_g1

0x27ef,	// (0x00060060) cursor_text_primary_small_t1

0xb38b,	// (0x00068bfc) cursor_primary_small_pane_g1_copy1

0x27d7,	// (0x00060048) cursor_text_primary_small_t1_copy1

0x27b5,	// (0x00060026) cursor_text_title_t1

0xb381,	// (0x00068bf2) cursor_title_pane_g1

0xa197,	// (0x00067a08) cursor_digital_pane_g1

0xc569,	// (0x00069dda) cursor_text_digital_t1

0xc577,	// (0x00069de8) link_highlight_primary_pane_g1

0x275e,	// (0x0005ffcf) link_highlight_primary_pane_t1

0xc577,	// (0x00069de8) link_highlight_primary_small_pane_g1

0xc57f,	// (0x00069df0) link_highlight_primary_small_pane_t1

0xc577,	// (0x00069de8) link_highlight_secondary_pane_g1

0xc58e,	// (0x00069dff) link_highlight_secondary_pane_t1

0x26c3,	// (0x0005ff34) link_highlight_title_pane_g1

0x26da,	// (0x0005ff4b) link_highlight_title_pane_t1

0x26c3,	// (0x0005ff34) link_highlight_digital_pane_g1

0x26cb,	// (0x0005ff3c) link_highlight_digital_pane_t1

0x257d,	// (0x0005fdee) copy_highlight_primary_pane_g1

0x25a3,	// (0x0005fe14) copy_highlight_primary_pane_t1

0x257d,	// (0x0005fdee) copy_highlight_primary_small_pane_g1

0x2594,	// (0x0005fe05) copy_highlight_primary_small_pane_t1

0xc59d,	// (0x00069e0e) copy_highlight_secondary_pane_g1

0xc5a5,	// (0x00069e16) copy_highlight_secondary_pane_t1

0x257d,	// (0x0005fdee) copy_highlight_title_pane_g1

0x2585,	// (0x0005fdf6) copy_highlight_title_pane_t1

0x257d,	// (0x0005fdee) copy_highlight_digital_pane_g1

0x3862,	// (0x000610d3) copy_highlight_digital_pane_t1

0x37b6,	// (0x00061027) graphic_text_primary_pane_g1

0x3846,	// (0x000610b7) graphic_text_primary_pane_t1

0x3854,	// (0x000610c5) graphic_text_primary_pane_t2

0x0001,

0xf993,	// (0x0006d204) graphic_text_primary_pane_t

0x3822,	// (0x00061093) graphic_text_primary_small_pane_g1

0x382a,	// (0x0006109b) graphic_text_primary_small_pane_t1

0x3838,	// (0x000610a9) graphic_text_primary_small_pane_t2

0x0001,

0xf98e,	// (0x0006d1ff) graphic_text_primary_small_pane_t

0x37fe,	// (0x0006106f) graphic_text_secondary_pane_g1

0x3806,	// (0x00061077) graphic_text_secondary_pane_t1

0x3814,	// (0x00061085) graphic_text_secondary_pane_t2

0x0001,

0xf989,	// (0x0006d1fa) graphic_text_secondary_pane_t

0x37da,	// (0x0006104b) graphic_text_title_pane_g1

0x37e2,	// (0x00061053) graphic_text_title_pane_t1

0x37f0,	// (0x00061061) graphic_text_title_pane_t2

0x0001,

0xf984,	// (0x0006d1f5) graphic_text_title_pane_t

0x37b6,	// (0x00061027) graphic_text_digital_pane_g1

0x37be,	// (0x0006102f) graphic_text_digital_pane_t1

0x37cc,	// (0x0006103d) graphic_text_digital_pane_t2

0x0001,

0xf97f,	// (0x0006d1f0) graphic_text_digital_pane_t

0x70bc,	// (0x0006492d) navi_icon_pane_srt_ParamLimits

0x70bc,	// (0x0006492d) navi_icon_pane_srt

0x706e,	// (0x000648df) navi_midp_pane_srt

0x706e,	// (0x000648df) navi_navi_pane_srt

0x70bc,	// (0x0006492d) navi_text_pane_srt_ParamLimits

0x70bc,	// (0x0006492d) navi_text_pane_srt

0x3781,	// (0x00060ff2) navi_navi_icon_text_pane_srt

0x3789,	// (0x00060ffa) navi_navi_pane_srt_g1_ParamLimits

0x3789,	// (0x00060ffa) navi_navi_pane_srt_g1

0x379b,	// (0x0006100c) navi_navi_pane_srt_g2_ParamLimits

0x379b,	// (0x0006100c) navi_navi_pane_srt_g2

0x0001,

0xf97a,	// (0x0006d1eb) navi_navi_pane_srt_g_ParamLimits

0xf97a,	// (0x0006d1eb) navi_navi_pane_srt_g

0x37ad,	// (0x0006101e) navi_navi_tabs_pane_srt

0x3781,	// (0x00060ff2) navi_navi_text_pane_srt

0x3781,	// (0x00060ff2) navi_navi_volume_pane_srt

0x3772,	// (0x00060fe3) navi_navi_text_pane_srt_t1

0x0a59,	// (0x0005e2ca) navi_navi_volume_pane_srt_g1

0x0a61,	// (0x0005e2d2) volume_small_pane_srt_ParamLimits

0x0a61,	// (0x0005e2d2) volume_small_pane_srt

0xf3fd,	// (0x0006cc6e) volume_small_pane_srt_g1_ParamLimits

0xf3fd,	// (0x0006cc6e) volume_small_pane_srt_g1

0xf40d,	// (0x0006cc7e) volume_small_pane_srt_g2_ParamLimits

0xf40d,	// (0x0006cc7e) volume_small_pane_srt_g2

0xf41e,	// (0x0006cc8f) volume_small_pane_srt_g3_ParamLimits

0xf41e,	// (0x0006cc8f) volume_small_pane_srt_g3

0xf42f,	// (0x0006cca0) volume_small_pane_srt_g4_ParamLimits

0xf42f,	// (0x0006cca0) volume_small_pane_srt_g4

0xf440,	// (0x0006ccb1) volume_small_pane_srt_g5_ParamLimits

0xf440,	// (0x0006ccb1) volume_small_pane_srt_g5

0xf451,	// (0x0006ccc2) volume_small_pane_srt_g6_ParamLimits

0xf451,	// (0x0006ccc2) volume_small_pane_srt_g6

0xf462,	// (0x0006ccd3) volume_small_pane_srt_g7_ParamLimits

0xf462,	// (0x0006ccd3) volume_small_pane_srt_g7

0xf473,	// (0x0006cce4) volume_small_pane_srt_g8_ParamLimits

0xf473,	// (0x0006cce4) volume_small_pane_srt_g8

0xf484,	// (0x0006ccf5) volume_small_pane_srt_g9_ParamLimits

0xf484,	// (0x0006ccf5) volume_small_pane_srt_g9

0xf495,	// (0x0006cd06) volume_small_pane_srt_g10_ParamLimits

0xf495,	// (0x0006cd06) volume_small_pane_srt_g10

0x0009,

0xf72e,	// (0x0006cf9f) volume_small_pane_srt_g_ParamLimits

0xf72e,	// (0x0006cf9f) volume_small_pane_srt_g

0x93b0,	// (0x00066c21) query_popup_data_pane_cp2

0x3758,	// (0x00060fc9) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3758,	// (0x00060fc9) navi_navi_icon_text_pane_srt_t1

0x280b,	// (0x0006007c) navi_tabs_2_long_pane_srt

0x280b,	// (0x0006007c) navi_tabs_2_pane_srt

0x280b,	// (0x0006007c) navi_tabs_3_long_pane_srt

0x280b,	// (0x0006007c) navi_tabs_3_pane_srt

0x280b,	// (0x0006007c) navi_tabs_4_pane_srt

0xb5be,	// (0x00068e2f) tabs_2_active_pane_srt_ParamLimits

0xb5be,	// (0x00068e2f) tabs_2_active_pane_srt

0xb5ce,	// (0x00068e3f) tabs_2_passive_pane_srt_ParamLimits

0xb5ce,	// (0x00068e3f) tabs_2_passive_pane_srt

0x1fba,	// (0x0005f82b) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1fba,	// (0x0005f82b) bg_passive_tab_pane_cp1_srt

0xcbb7,	// (0x0006a428) bg_passive_tab_pane_g1_cp1_srt

0xa002,	// (0x00067873) bg_passive_tab_pane_g2_cp1_srt

0xcbc0,	// (0x0006a431) bg_passive_tab_pane_g3_cp1_srt

0x71e6,	// (0x00064a57) bg_active_tab_pane_cp1_srt_ParamLimits

0x71e6,	// (0x00064a57) bg_active_tab_pane_cp1_srt

0xcbc9,	// (0x0006a43a) tabs_2_active_pane_srt_g1

0xcbd1,	// (0x0006a442) tabs_2_active_pane_srt_t1_ParamLimits

0xcbd1,	// (0x0006a442) tabs_2_active_pane_srt_t1

0xcbb7,	// (0x0006a428) bg_active_tab_pane_g1_cp1_srt

0xa002,	// (0x00067873) bg_active_tab_pane_g2_cp1_srt

0xcbc0,	// (0x0006a431) bg_active_tab_pane_g3_cp1_srt

0xb58b,	// (0x00068dfc) tabs_3_active_pane_srt_ParamLimits

0xb58b,	// (0x00068dfc) tabs_3_active_pane_srt

0xb59c,	// (0x00068e0d) tabs_3_passive_pane_cp_srt_ParamLimits

0xb59c,	// (0x00068e0d) tabs_3_passive_pane_cp_srt

0xb5ad,	// (0x00068e1e) tabs_3_passive_pane_srt_ParamLimits

0xb5ad,	// (0x00068e1e) tabs_3_passive_pane_srt

0x1fba,	// (0x0005f82b) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1fba,	// (0x0005f82b) bg_passive_tab_pane_cp2_srt

0xa1a1,	// (0x00067a12) bg_passive_tab_pane_g1_cp2_srt

0xa002,	// (0x00067873) bg_passive_tab_pane_g2_cp2_srt

0xa1aa,	// (0x00067a1b) bg_passive_tab_pane_g3_cp2_srt

0x71e6,	// (0x00064a57) bg_active_tab_pane_cp2_srt_ParamLimits

0x71e6,	// (0x00064a57) bg_active_tab_pane_cp2_srt

0xcb99,	// (0x0006a40a) tabs_3_active_pane_srt_g1

0xcba1,	// (0x0006a412) tabs_3_active_pane_srt_t1_ParamLimits

0xcba1,	// (0x0006a412) tabs_3_active_pane_srt_t1

0xa1a1,	// (0x00067a12) bg_active_tab_pane_g1_cp2_srt

0xa002,	// (0x00067873) bg_active_tab_pane_g2_cp2_srt

0xa1aa,	// (0x00067a1b) bg_active_tab_pane_g3_cp2_srt

0x09be,	// (0x0005e22f) tabs_4_active_pane_srt_ParamLimits

0x09be,	// (0x0005e22f) tabs_4_active_pane_srt

0x09d0,	// (0x0005e241) tabs_4_passive_pane_cp2_srt_ParamLimits

0x09d0,	// (0x0005e241) tabs_4_passive_pane_cp2_srt

0xf4b5,	// (0x0006cd26) aid_size_cell_toolbar

0x3309,	// (0x00060b7a) main_idle_act_pane_ParamLimits

0xf503,	// (0x0006cd74) popup_large_graphic_colour_window_ParamLimits

0xaae0,	// (0x00068351) popup_toolbar_window_ParamLimits

0xaae0,	// (0x00068351) popup_toolbar_window

0x34d9,	// (0x00060d4a) list_single_graphic_2heading_pane_ParamLimits

0x34d9,	// (0x00060d4a) list_single_graphic_2heading_pane

0x82da,	// (0x00065b4b) aid_size_cell_apps_grid_lsc_pane

0x82ec,	// (0x00065b5d) aid_size_cell_apps_grid_prt_pane

0x839a,	// (0x00065c0b) bg_wml_button_pane_cp1_ParamLimits

0x839a,	// (0x00065c0b) bg_wml_button_pane_cp1

0xb111,	// (0x00068982) form_midp_field_text_pane_t1_ParamLimits

0x1fba,	// (0x0005f82b) input_focus_pane_cp050_ParamLimits

0x222a,	// (0x0005fa9b) list_midp_form_text_pane_ParamLimits

0x21cd,	// (0x0005fa3e) input_focus_pane_cp051_ParamLimits

0x21e1,	// (0x0005fa52) list_midp_choice_pane_ParamLimits

0xb076,	// (0x000688e7) list_single_2graphic_pane_cp3_ParamLimits

0xb076,	// (0x000688e7) list_single_2graphic_pane_cp3

0xb08a,	// (0x000688fb) list_single_midp_graphic_pane_ParamLimits

0xb08a,	// (0x000688fb) list_single_midp_graphic_pane

0xea27,	// (0x0006c298) list_single_graphic_2heading_pane_g1_ParamLimits

0xea27,	// (0x0006c298) list_single_graphic_2heading_pane_g1

0xea33,	// (0x0006c2a4) list_single_graphic_2heading_pane_g4_ParamLimits

0xea33,	// (0x0006c2a4) list_single_graphic_2heading_pane_g4

0xea3f,	// (0x0006c2b0) list_single_graphic_2heading_pane_g5_ParamLimits

0xea3f,	// (0x0006c2b0) list_single_graphic_2heading_pane_g5

0x0002,

0xf781,	// (0x0006cff2) list_single_graphic_2heading_pane_g_ParamLimits

0xf781,	// (0x0006cff2) list_single_graphic_2heading_pane_g

0xea4b,	// (0x0006c2bc) list_single_graphic_2heading_pane_t1_ParamLimits

0xea4b,	// (0x0006c2bc) list_single_graphic_2heading_pane_t1

0xea5f,	// (0x0006c2d0) list_single_graphic_2heading_pane_t2_ParamLimits

0xea5f,	// (0x0006c2d0) list_single_graphic_2heading_pane_t2

0xea79,	// (0x0006c2ea) list_single_graphic_2heading_pane_t3_ParamLimits

0xea79,	// (0x0006c2ea) list_single_graphic_2heading_pane_t3

0x0002,

0xf788,	// (0x0006cff9) list_single_graphic_2heading_pane_t_ParamLimits

0xf788,	// (0x0006cff9) list_single_graphic_2heading_pane_t

0x1e6c,	// (0x0005f6dd) bg_popup_sub_pane_cp2

0x1e96,	// (0x0005f707) grid_toobar_pane

0x0540,	// (0x0005ddb1) cell_toolbar_pane_ParamLimits

0x0540,	// (0x0005ddb1) cell_toolbar_pane

0x1ed2,	// (0x0005f743) cell_toolbar_pane_g1_ParamLimits

0x1ed2,	// (0x0005f743) cell_toolbar_pane_g1

0xaf8e,	// (0x000687ff) cell_toolbar_pane_g2_ParamLimits

0xaf8e,	// (0x000687ff) cell_toolbar_pane_g2

0x0001,

0xf78f,	// (0x0006d000) cell_toolbar_pane_g_ParamLimits

0xf78f,	// (0x0006d000) cell_toolbar_pane_g

0x1f08,	// (0x0005f779) grid_highlight_pane_cp2_ParamLimits

0x1f08,	// (0x0005f779) grid_highlight_pane_cp2

0x1f22,	// (0x0005f793) toolbar_button_pane

0x1f2e,	// (0x0005f79f) toolbar_button_pane_g1

0x1f36,	// (0x0005f7a7) toolbar_button_pane_g2

0x1f3e,	// (0x0005f7af) toolbar_button_pane_g3

0x1f46,	// (0x0005f7b7) toolbar_button_pane_g4

0x1f4e,	// (0x0005f7bf) toolbar_button_pane_g5

0x1f56,	// (0x0005f7c7) toolbar_button_pane_g6

0x1f5e,	// (0x0005f7cf) toolbar_button_pane_g7

0x1f66,	// (0x0005f7d7) toolbar_button_pane_g8

0x1f6e,	// (0x0005f7df) toolbar_button_pane_g9

0x0009,

0xf794,	// (0x0006d005) toolbar_button_pane_g

0x0584,	// (0x0005ddf5) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0584,	// (0x0005ddf5) list_single_2graphic_pane_g1_cp3

0xafa2,	// (0x00068813) list_single_2graphic_pane_g2_cp3_ParamLimits

0xafa2,	// (0x00068813) list_single_2graphic_pane_g2_cp3

0x05a1,	// (0x0005de12) list_single_2graphic_pane_g3_cp3

0x05a9,	// (0x0005de1a) list_single_2graphic_pane_g4_cp3_ParamLimits

0x05a9,	// (0x0005de1a) list_single_2graphic_pane_g4_cp3

0xafb3,	// (0x00068824) list_single_2graphic_pane_t1_cp3_ParamLimits

0xafb3,	// (0x00068824) list_single_2graphic_pane_t1_cp3

0x05d1,	// (0x0005de42) list_single_midp_graphic_pane_g2_ParamLimits

0x05d1,	// (0x0005de42) list_single_midp_graphic_pane_g2

0xea17,	// (0x0006c288) aid_zoom_text_primary

0xf4bd,	// (0x0006cd2e) aid_zoom_text_secondary

0xa201,	// (0x00067a72) status_small_pane_g7_ParamLimits

0xa201,	// (0x00067a72) status_small_pane_g7

0xa224,	// (0x00067a95) status_small_pane_t1_ParamLimits

0x8ff7,	// (0x00066868) title_pane_g2

0x0003,

0xf529,	// (0x0006cd9a) title_pane_g

0x940a,	// (0x00066c7b) aid_size_cell_colour_1_pane_ParamLimits

0x940a,	// (0x00066c7b) aid_size_cell_colour_1_pane

0x941e,	// (0x00066c8f) aid_size_cell_colour_2_pane_ParamLimits

0x941e,	// (0x00066c8f) aid_size_cell_colour_2_pane

0x9432,	// (0x00066ca3) aid_size_cell_colour_3_pane_ParamLimits

0x9432,	// (0x00066ca3) aid_size_cell_colour_3_pane

0x9446,	// (0x00066cb7) aid_size_cell_colour_4_pane_ParamLimits

0x9446,	// (0x00066cb7) aid_size_cell_colour_4_pane

0xe98f,	// (0x0006c200) title_pane_stacon_g1_ParamLimits

0xe98f,	// (0x0006c200) title_pane_stacon_g1

0x25fa,	// (0x0005fe6b) popup_note_wait_window_g3_ParamLimits

0x25fa,	// (0x0005fe6b) popup_note_wait_window_g3

0x2670,	// (0x0005fee1) popup_note_wait_window_t5_ParamLimits

0x2670,	// (0x0005fee1) popup_note_wait_window_t5

0x706e,	// (0x000648df) main_feb_china_hwr_fs_writing_pane

0xa494,	// (0x00067d05) popup_feb_china_hwr_fs_window_ParamLimits

0xa494,	// (0x00067d05) popup_feb_china_hwr_fs_window

0xafcf,	// (0x00068840) aid_size_cell_hwr_fs_ParamLimits

0xafcf,	// (0x00068840) aid_size_cell_hwr_fs

0x1fba,	// (0x0005f82b) bg_popup_sub_pane_cp3_ParamLimits

0x1fba,	// (0x0005f82b) bg_popup_sub_pane_cp3

0xafe4,	// (0x00068855) grid_hwr_fs_pane_ParamLimits

0xafe4,	// (0x00068855) grid_hwr_fs_pane

0x0620,	// (0x0005de91) linegrid_hwr_fs_pane_ParamLimits

0x0620,	// (0x0005de91) linegrid_hwr_fs_pane

0xaffc,	// (0x0006886d) cell_hwr_fs_pane_ParamLimits

0xaffc,	// (0x0006886d) cell_hwr_fs_pane

0x1fc6,	// (0x0005f837) linegrid_hwr_fs_pane_g1_ParamLimits

0x1fc6,	// (0x0005f837) linegrid_hwr_fs_pane_g1

0xb022,	// (0x00068893) linegrid_hwr_fs_pane_g2_ParamLimits

0xb022,	// (0x00068893) linegrid_hwr_fs_pane_g2

0x1fe4,	// (0x0005f855) linegrid_hwr_fs_pane_g3_ParamLimits

0x1fe4,	// (0x0005f855) linegrid_hwr_fs_pane_g3

0xb034,	// (0x000688a5) linegrid_hwr_fs_pane_g4_ParamLimits

0xb034,	// (0x000688a5) linegrid_hwr_fs_pane_g4

0x066c,	// (0x0005dedd) linegrid_hwr_fs_pane_g5_ParamLimits

0x066c,	// (0x0005dedd) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ba,	// (0x0006d02b) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ba,	// (0x0006d02b) linegrid_hwr_fs_pane_g

0x1ff0,	// (0x0005f861) cell_hwr_fs_pane_g1_ParamLimits

0x1ff0,	// (0x0005f861) cell_hwr_fs_pane_g1

0x1da6,	// (0x0005f617) cell_hwr_fs_pane_g2_ParamLimits

0x1da6,	// (0x0005f617) cell_hwr_fs_pane_g2

0xb04e,	// (0x000688bf) cell_hwr_fs_pane_g3_ParamLimits

0xb04e,	// (0x000688bf) cell_hwr_fs_pane_g3

0xb05b,	// (0x000688cc) cell_hwr_fs_pane_g4_ParamLimits

0xb05b,	// (0x000688cc) cell_hwr_fs_pane_g4

0x0003,

0xf7c5,	// (0x0006d036) cell_hwr_fs_pane_g_ParamLimits

0xf7c5,	// (0x0006d036) cell_hwr_fs_pane_g

0xb068,	// (0x000688d9) cell_hwr_fs_pane_t1

0x706e,	// (0x000648df) grid_highlight_pane_cp6

0x706e,	// (0x000648df) main_idle_act2_pane

0x8130,	// (0x000659a1) aid_inside_area_popup_secondary

0xc6d3,	// (0x00069f44) aid_inside_area_window_primary_ParamLimits

0xc6d3,	// (0x00069f44) aid_inside_area_window_primary

0xcbef,	// (0x0006a460) ai2_news_ticker_pane

0x3879,	// (0x000610ea) aid_size_cell_ai1_link_ParamLimits

0x3879,	// (0x000610ea) aid_size_cell_ai1_link

0xcbf7,	// (0x0006a468) popup_ai2_data_window_ParamLimits

0xcbf7,	// (0x0006a468) popup_ai2_data_window

0x38a9,	// (0x0006111a) popup_ai2_link_window_ParamLimits

0x38a9,	// (0x0006111a) popup_ai2_link_window

0x1fba,	// (0x0005f82b) bg_popup_sub_pane_cp4_ParamLimits

0x1fba,	// (0x0005f82b) bg_popup_sub_pane_cp4

0x38bd,	// (0x0006112e) grid_ai2_link_pane_ParamLimits

0x38bd,	// (0x0006112e) grid_ai2_link_pane

0x38d4,	// (0x00061145) popup_ai2_link_window_g1_ParamLimits

0x38d4,	// (0x00061145) popup_ai2_link_window_g1

0x38e0,	// (0x00061151) popup_ai2_link_window_g2_ParamLimits

0x38e0,	// (0x00061151) popup_ai2_link_window_g2

0x0001,

0xf998,	// (0x0006d209) popup_ai2_link_window_g_ParamLimits

0xf998,	// (0x0006d209) popup_ai2_link_window_g

0x38ef,	// (0x00061160) ai2_mp_button_pane

0x38f7,	// (0x00061168) ai2_mp_volume_pane

0x21cd,	// (0x0005fa3e) bg_popup_sub_pane_cp5_ParamLimits

0x21cd,	// (0x0005fa3e) bg_popup_sub_pane_cp5

0x38ff,	// (0x00061170) heading_ai2_gene_pane_ParamLimits

0x38ff,	// (0x00061170) heading_ai2_gene_pane

0x390b,	// (0x0006117c) list_ai2_gene_pane_ParamLimits

0x390b,	// (0x0006117c) list_ai2_gene_pane

0x3953,	// (0x000611c4) cell_ai2_link_pane_ParamLimits

0x3953,	// (0x000611c4) cell_ai2_link_pane

0x3969,	// (0x000611da) cell_ai2_link_pane_g1

0x706e,	// (0x000648df) grid_highlight_pane_cp7

0x0a76,	// (0x0005e2e7) ai2_mp_volume_pane_g1

0x3a39,	// (0x000612aa) ai2_mp_volume_pane_g2

0x39ae,	// (0x0006121f) list_ai2_gene_pane_t1

0x3a41,	// (0x000612b2) ai2_mp_volume_pane_g3

0x0002,

0xf9b1,	// (0x0006d222) ai2_mp_volume_pane_g

0xb5de,	// (0x00068e4f) volume_small_pane_cp3

0x3a49,	// (0x000612ba) aid_size_cell_ai2_button

0x3a51,	// (0x000612c2) grid_ai2_button_pane

0x3a5a,	// (0x000612cb) cell_ai2_button_pane_ParamLimits

0x3a5a,	// (0x000612cb) cell_ai2_button_pane

0x7064,	// (0x000648d5) cell_ai2_button_pane_g1

0x706e,	// (0x000648df) grid_highlight_pane_cp8

0x39f9,	// (0x0006126a) ai2_gene_pane_t1_ParamLimits

0x39f9,	// (0x0006126a) ai2_gene_pane_t1

0xa3f6,	// (0x00067c67) aid_height_parent_landscape

0xc921,	// (0x0006a192) aid_height_set_list

0x3309,	// (0x00060b7a) aid_size_parent

0x3694,	// (0x00060f05) aid_size_cell_graphic_pane_ParamLimits

0x391b,	// (0x0006118c) popup_ai2_data_window_g1_ParamLimits

0x391b,	// (0x0006118c) popup_ai2_data_window_g1

0x3927,	// (0x00061198) ai2_news_ticker_pane_g1

0x392f,	// (0x000611a0) ai2_news_ticker_pane_g2

0x0001,

0xf99d,	// (0x0006d20e) ai2_news_ticker_pane_g

0x3937,	// (0x000611a8) ai2_news_ticker_pane_t1

0x3945,	// (0x000611b6) ai2_news_ticker_pane_t2

0x0001,

0xf9a2,	// (0x0006d213) ai2_news_ticker_pane_t

0x3972,	// (0x000611e3) heading_ai2_gene_pane_g1

0x397a,	// (0x000611eb) heading_ai2_gene_pane_t1_ParamLimits

0x397a,	// (0x000611eb) heading_ai2_gene_pane_t1

0x398f,	// (0x00061200) list_highlight_pane_cp6

0x3997,	// (0x00061208) ai2_gene_pane_ParamLimits

0x3997,	// (0x00061208) ai2_gene_pane

0x39bc,	// (0x0006122d) list_ai2_gene_pane_t2

0x0001,

0xf9a7,	// (0x0006d218) list_ai2_gene_pane_t

0x39ca,	// (0x0006123b) list_highlight_pane_cp8_ParamLimits

0x39ca,	// (0x0006123b) list_highlight_pane_cp8

0x39db,	// (0x0006124c) ai2_gene_pane_g1_ParamLimits

0x39db,	// (0x0006124c) ai2_gene_pane_g1

0x39ed,	// (0x0006125e) ai2_gene_pane_g2_ParamLimits

0x39ed,	// (0x0006125e) ai2_gene_pane_g2

0x0001,

0xf9ac,	// (0x0006d21d) ai2_gene_pane_g_ParamLimits

0xf9ac,	// (0x0006d21d) ai2_gene_pane_g

0x7fb6,	// (0x00065827) scroll_pane_cp12

0xa3b3,	// (0x00067c24) control_pane_t3_ParamLimits

0xa3b3,	// (0x00067c24) control_pane_t3

0xa215,	// (0x00067a86) status_small_pane_g8_ParamLimits

0xa215,	// (0x00067a86) status_small_pane_g8

0xa557,	// (0x00067dc8) popup_find_window_ParamLimits

0xa7e4,	// (0x00068055) popup_note_image_window_ParamLimits

0xbf36,	// (0x000697a7) list_double2_graphic_pane_vc_g1_ParamLimits

0xbf36,	// (0x000697a7) list_double2_graphic_pane_vc_g1

0xbf42,	// (0x000697b3) list_double2_graphic_pane_vc_g2_ParamLimits

0xbf42,	// (0x000697b3) list_double2_graphic_pane_vc_g2

0x0570,	// (0x0005dde1) list_double2_graphic_pane_vc_g3_ParamLimits

0x0570,	// (0x0005dde1) list_double2_graphic_pane_vc_g3

0x0002,

0xf59c,	// (0x0006ce0d) list_double2_graphic_pane_vc_g_ParamLimits

0xf59c,	// (0x0006ce0d) list_double2_graphic_pane_vc_g

0xbf4e,	// (0x000697bf) list_double2_graphic_pane_vc_t1_ParamLimits

0xbf4e,	// (0x000697bf) list_double2_graphic_pane_vc_t1

0xbf42,	// (0x000697b3) list_single_heading_pane_vc_g1_ParamLimits

0xbf42,	// (0x000697b3) list_single_heading_pane_vc_g1

0x0570,	// (0x0005dde1) list_single_heading_pane_vc_g2_ParamLimits

0x0570,	// (0x0005dde1) list_single_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0006ce1e) list_single_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0006ce1e) list_single_heading_pane_vc_g

0xea91,	// (0x0006c302) list_single_heading_pane_vc_t1_ParamLimits

0xea91,	// (0x0006c302) list_single_heading_pane_vc_t1

0xeaa7,	// (0x0006c318) list_single_heading_pane_vc_t2_ParamLimits

0xeaa7,	// (0x0006c318) list_single_heading_pane_vc_t2

0x0001,

0xf7a9,	// (0x0006d01a) list_single_heading_pane_vc_t_ParamLimits

0xf7a9,	// (0x0006d01a) list_single_heading_pane_vc_t

0x1f76,	// (0x0005f7e7) list_setting_number_pane_vc_g1_ParamLimits

0x1f76,	// (0x0005f7e7) list_setting_number_pane_vc_g1

0x1f82,	// (0x0005f7f3) list_setting_number_pane_vc_g2_ParamLimits

0x1f82,	// (0x0005f7f3) list_setting_number_pane_vc_g2

0x0001,

0xf7ae,	// (0x0006d01f) list_setting_number_pane_vc_g_ParamLimits

0xf7ae,	// (0x0006d01f) list_setting_number_pane_vc_g

0xeab9,	// (0x0006c32a) list_setting_number_pane_vc_t1_ParamLimits

0xeab9,	// (0x0006c32a) list_setting_number_pane_vc_t1

0xeacd,	// (0x0006c33e) list_setting_number_pane_vc_t2_ParamLimits

0xeacd,	// (0x0006c33e) list_setting_number_pane_vc_t2

0xeae9,	// (0x0006c35a) list_setting_number_pane_vc_t3_ParamLimits

0xeae9,	// (0x0006c35a) list_setting_number_pane_vc_t3

0x0002,

0xf7b3,	// (0x0006d024) list_setting_number_pane_vc_t_ParamLimits

0xf7b3,	// (0x0006d024) list_setting_number_pane_vc_t

0xeb13,	// (0x0006c384) set_value_pane_vc_ParamLimits

0xeb13,	// (0x0006c384) set_value_pane_vc

0x34d9,	// (0x00060d4a) list_double2_graphic_pane_vc_ParamLimits

0x34d9,	// (0x00060d4a) list_double2_graphic_pane_vc

0x34ec,	// (0x00060d5d) list_double2_large_graphic_pane_vc_ParamLimits

0x34ec,	// (0x00060d5d) list_double2_large_graphic_pane_vc

0x34d9,	// (0x00060d4a) list_double2_pane_vc_ParamLimits

0x34d9,	// (0x00060d4a) list_double2_pane_vc

0x34d9,	// (0x00060d4a) list_double_graphic_heading_pane_vc_ParamLimits

0x34d9,	// (0x00060d4a) list_double_graphic_heading_pane_vc

0x34d9,	// (0x00060d4a) list_double_graphic_pane_vc_ParamLimits

0x34d9,	// (0x00060d4a) list_double_graphic_pane_vc

0x34d9,	// (0x00060d4a) list_double_heading_pane_vc_ParamLimits

0x34d9,	// (0x00060d4a) list_double_heading_pane_vc

0x34fe,	// (0x00060d6f) list_double_large_graphic_pane_vc_ParamLimits

0x34fe,	// (0x00060d6f) list_double_large_graphic_pane_vc

0x34d9,	// (0x00060d4a) list_double_number_pane_vc_ParamLimits

0x34d9,	// (0x00060d4a) list_double_number_pane_vc

0x34d9,	// (0x00060d4a) list_double_pane_vc_ParamLimits

0x34d9,	// (0x00060d4a) list_double_pane_vc

0x34d9,	// (0x00060d4a) list_double_time_pane_vc_ParamLimits

0x34d9,	// (0x00060d4a) list_double_time_pane_vc

0x34d9,	// (0x00060d4a) list_setting_number_pane_vc_ParamLimits

0x34d9,	// (0x00060d4a) list_setting_number_pane_vc

0x34d9,	// (0x00060d4a) list_setting_pane_vc_ParamLimits

0x34d9,	// (0x00060d4a) list_setting_pane_vc

0x34d9,	// (0x00060d4a) list_single_graphic_heading_pane_vc_ParamLimits

0x34d9,	// (0x00060d4a) list_single_graphic_heading_pane_vc

0x34d9,	// (0x00060d4a) list_single_heading_pane_vc_ParamLimits

0x34d9,	// (0x00060d4a) list_single_heading_pane_vc

0x34d9,	// (0x00060d4a) list_single_number_heading_pane_vc_ParamLimits

0x34d9,	// (0x00060d4a) list_single_number_heading_pane_vc

0xeb32,	// (0x0006c3a3) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xeb32,	// (0x0006c3a3) list_double_graphic_heading_pane_vc_g1

0xbf42,	// (0x000697b3) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xbf42,	// (0x000697b3) list_double_graphic_heading_pane_vc_g2

0x0570,	// (0x0005dde1) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0570,	// (0x0005dde1) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9b8,	// (0x0006d229) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9b8,	// (0x0006d229) list_double_graphic_heading_pane_vc_g

0xeb3e,	// (0x0006c3af) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xeb3e,	// (0x0006c3af) list_double_graphic_heading_pane_vc_t1

0xeb52,	// (0x0006c3c3) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xeb52,	// (0x0006c3c3) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9bf,	// (0x0006d230) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9bf,	// (0x0006d230) list_double_graphic_heading_pane_vc_t

0x1f76,	// (0x0005f7e7) list_setting_pane_vc_g1_ParamLimits

0x1f76,	// (0x0005f7e7) list_setting_pane_vc_g1

0x1f82,	// (0x0005f7f3) list_setting_pane_vc_g2_ParamLimits

0x1f82,	// (0x0005f7f3) list_setting_pane_vc_g2

0x0001,

0xf7ae,	// (0x0006d01f) list_setting_pane_vc_g_ParamLimits

0xf7ae,	// (0x0006d01f) list_setting_pane_vc_g

0xeb6a,	// (0x0006c3db) list_setting_pane_vc_t1_ParamLimits

0xeb6a,	// (0x0006c3db) list_setting_pane_vc_t1

0xeb86,	// (0x0006c3f7) list_setting_pane_vc_t2_ParamLimits

0xeb86,	// (0x0006c3f7) list_setting_pane_vc_t2

0x0001,

0xfa02,	// (0x0006d273) list_setting_pane_vc_t_ParamLimits

0xfa02,	// (0x0006d273) list_setting_pane_vc_t

0xeb13,	// (0x0006c384) set_value_pane_cp_vc_ParamLimits

0xeb13,	// (0x0006c384) set_value_pane_cp_vc

0xbf42,	// (0x000697b3) list_single_number_heading_pane_vc_g1_ParamLimits

0xbf42,	// (0x000697b3) list_single_number_heading_pane_vc_g1

0x0570,	// (0x0005dde1) list_single_number_heading_pane_vc_g2_ParamLimits

0x0570,	// (0x0005dde1) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0006ce1e) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0006ce1e) list_single_number_heading_pane_vc_g

0xeba0,	// (0x0006c411) list_single_number_heading_pane_vc_t1_ParamLimits

0xeba0,	// (0x0006c411) list_single_number_heading_pane_vc_t1

0xebb6,	// (0x0006c427) list_single_number_heading_pane_vc_t2_ParamLimits

0xebb6,	// (0x0006c427) list_single_number_heading_pane_vc_t2

0xebc8,	// (0x0006c439) list_single_number_heading_pane_vc_t3_ParamLimits

0xebc8,	// (0x0006c439) list_single_number_heading_pane_vc_t3

0x0002,

0xfa07,	// (0x0006d278) list_single_number_heading_pane_vc_t_ParamLimits

0xfa07,	// (0x0006d278) list_single_number_heading_pane_vc_t

0xebda,	// (0x0006c44b) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xebda,	// (0x0006c44b) list_single_graphic_heading_pane_vc_g1

0xbf42,	// (0x000697b3) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xbf42,	// (0x000697b3) list_single_graphic_heading_pane_vc_g4

0x0570,	// (0x0005dde1) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0570,	// (0x0005dde1) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa0e,	// (0x0006d27f) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa0e,	// (0x0006d27f) list_single_graphic_heading_pane_vc_g

0xea91,	// (0x0006c302) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xea91,	// (0x0006c302) list_single_graphic_heading_pane_vc_t1

0xebe6,	// (0x0006c457) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xebe6,	// (0x0006c457) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa15,	// (0x0006d286) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa15,	// (0x0006d286) list_single_graphic_heading_pane_vc_t

0xbf42,	// (0x000697b3) list_double2_pane_vc_g1_ParamLimits

0xbf42,	// (0x000697b3) list_double2_pane_vc_g1

0x0570,	// (0x0005dde1) list_double2_pane_vc_g2_ParamLimits

0x0570,	// (0x0005dde1) list_double2_pane_vc_g2

0x0001,

0xf5ad,	// (0x0006ce1e) list_double2_pane_vc_g_ParamLimits

0xf5ad,	// (0x0006ce1e) list_double2_pane_vc_g

0xebf8,	// (0x0006c469) list_double2_pane_vc_t1_ParamLimits

0xebf8,	// (0x0006c469) list_double2_pane_vc_t1

0x3c93,	// (0x00061504) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3c93,	// (0x00061504) list_double2_large_graphic_pane_vc_g1

0xe8ad,	// (0x0006c11e) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xe8ad,	// (0x0006c11e) list_double2_large_graphic_pane_vc_g2

0xe8b9,	// (0x0006c12a) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xe8b9,	// (0x0006c12a) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c5,	// (0x0006ce36) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c5,	// (0x0006ce36) list_double2_large_graphic_pane_vc_g

0xbf64,	// (0x000697d5) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xbf64,	// (0x000697d5) list_double2_large_graphic_pane_vc_t1

0x3c9f,	// (0x00061510) list_double_time_pane_vc_g1_ParamLimits

0x3c9f,	// (0x00061510) list_double_time_pane_vc_g1

0x3cab,	// (0x0006151c) list_double_time_pane_vc_g2_ParamLimits

0x3cab,	// (0x0006151c) list_double_time_pane_vc_g2

0x0001,

0xfa1a,	// (0x0006d28b) list_double_time_pane_vc_g_ParamLimits

0xfa1a,	// (0x0006d28b) list_double_time_pane_vc_g

0xec10,	// (0x0006c481) list_double_time_pane_vc_t1_ParamLimits

0xec10,	// (0x0006c481) list_double_time_pane_vc_t1

0xec34,	// (0x0006c4a5) list_double_time_pane_vc_t2_ParamLimits

0xec34,	// (0x0006c4a5) list_double_time_pane_vc_t2

0xec83,	// (0x0006c4f4) list_double_time_pane_vc_t3_ParamLimits

0xec83,	// (0x0006c4f4) list_double_time_pane_vc_t3

0xec95,	// (0x0006c506) list_double_time_pane_vc_t4_ParamLimits

0xec95,	// (0x0006c506) list_double_time_pane_vc_t4

0x0003,

0xfa1f,	// (0x0006d290) list_double_time_pane_vc_t_ParamLimits

0xfa1f,	// (0x0006d290) list_double_time_pane_vc_t

0xbf42,	// (0x000697b3) list_double_pane_vc_g1_ParamLimits

0xbf42,	// (0x000697b3) list_double_pane_vc_g1

0x0570,	// (0x0005dde1) list_double_pane_vc_g2_ParamLimits

0x0570,	// (0x0005dde1) list_double_pane_vc_g2

0x0001,

0xf5ad,	// (0x0006ce1e) list_double_pane_vc_g_ParamLimits

0xf5ad,	// (0x0006ce1e) list_double_pane_vc_g

0xeca9,	// (0x0006c51a) list_double_pane_vc_t1_ParamLimits

0xeca9,	// (0x0006c51a) list_double_pane_vc_t1

0xecbd,	// (0x0006c52e) list_double_pane_vc_t2_ParamLimits

0xecbd,	// (0x0006c52e) list_double_pane_vc_t2

0x0001,

0xfa28,	// (0x0006d299) list_double_pane_vc_t_ParamLimits

0xfa28,	// (0x0006d299) list_double_pane_vc_t

0xbf42,	// (0x000697b3) list_double_number_pane_vc_g1_ParamLimits

0xbf42,	// (0x000697b3) list_double_number_pane_vc_g1

0x0570,	// (0x0005dde1) list_double_number_pane_vc_g2_ParamLimits

0x0570,	// (0x0005dde1) list_double_number_pane_vc_g2

0x0001,

0xf5ad,	// (0x0006ce1e) list_double_number_pane_vc_g_ParamLimits

0xf5ad,	// (0x0006ce1e) list_double_number_pane_vc_g

0xecd5,	// (0x0006c546) list_double_number_pane_vc_t1_ParamLimits

0xecd5,	// (0x0006c546) list_double_number_pane_vc_t1

0xeca9,	// (0x0006c51a) list_double_number_pane_vc_t2_ParamLimits

0xeca9,	// (0x0006c51a) list_double_number_pane_vc_t2

0xece7,	// (0x0006c558) list_double_number_pane_vc_t3_ParamLimits

0xece7,	// (0x0006c558) list_double_number_pane_vc_t3

0x0002,

0xfa2d,	// (0x0006d29e) list_double_number_pane_vc_t_ParamLimits

0xfa2d,	// (0x0006d29e) list_double_number_pane_vc_t

0x3cb7,	// (0x00061528) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3cb7,	// (0x00061528) list_double_large_graphic_pane_vc_g1

0x3cd3,	// (0x00061544) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3cd3,	// (0x00061544) list_double_large_graphic_pane_vc_g2

0x3ce7,	// (0x00061558) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3ce7,	// (0x00061558) list_double_large_graphic_pane_vc_g3

0xecff,	// (0x0006c570) list_double_large_graphic_pane_vc_g4_ParamLimits

0xecff,	// (0x0006c570) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa34,	// (0x0006d2a5) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa34,	// (0x0006d2a5) list_double_large_graphic_pane_vc_g

0xed0e,	// (0x0006c57f) list_double_large_graphic_pane_vc_t1_ParamLimits

0xed0e,	// (0x0006c57f) list_double_large_graphic_pane_vc_t1

0xed2a,	// (0x0006c59b) list_double_large_graphic_pane_vc_t2_ParamLimits

0xed2a,	// (0x0006c59b) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3d,	// (0x0006d2ae) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3d,	// (0x0006d2ae) list_double_large_graphic_pane_vc_t

0xbf42,	// (0x000697b3) list_double_heading_pane_vc_g1_ParamLimits

0xbf42,	// (0x000697b3) list_double_heading_pane_vc_g1

0x0570,	// (0x0005dde1) list_double_heading_pane_vc_g2_ParamLimits

0x0570,	// (0x0005dde1) list_double_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0006ce1e) list_double_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0006ce1e) list_double_heading_pane_vc_g

0xed4c,	// (0x0006c5bd) list_double_heading_pane_vc_t1_ParamLimits

0xed4c,	// (0x0006c5bd) list_double_heading_pane_vc_t1

0xed60,	// (0x0006c5d1) list_double_heading_pane_vc_t2_ParamLimits

0xed60,	// (0x0006c5d1) list_double_heading_pane_vc_t2

0x0001,

0xfa42,	// (0x0006d2b3) list_double_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0006d2b3) list_double_heading_pane_vc_t

0xed78,	// (0x0006c5e9) list_double_graphic_pane_vc_g1_ParamLimits

0xed78,	// (0x0006c5e9) list_double_graphic_pane_vc_g1

0x3cf6,	// (0x00061567) list_double_graphic_pane_vc_g2_ParamLimits

0x3cf6,	// (0x00061567) list_double_graphic_pane_vc_g2

0xbf42,	// (0x000697b3) list_double_graphic_pane_vc_g3_ParamLimits

0xbf42,	// (0x000697b3) list_double_graphic_pane_vc_g3

0x0003,

0xfa47,	// (0x0006d2b8) list_double_graphic_pane_vc_g_ParamLimits

0xfa47,	// (0x0006d2b8) list_double_graphic_pane_vc_g

0xed8b,	// (0x0006c5fc) list_double_graphic_pane_vc_t1_ParamLimits

0xed8b,	// (0x0006c5fc) list_double_graphic_pane_vc_t1

0xedaa,	// (0x0006c61b) list_double_graphic_pane_vc_t2_ParamLimits

0xedaa,	// (0x0006c61b) list_double_graphic_pane_vc_t2

0x0001,

0xfa50,	// (0x0006d2c1) list_double_graphic_pane_vc_t_ParamLimits

0xfa50,	// (0x0006d2c1) list_double_graphic_pane_vc_t

0xe72c,	// (0x0006bf9d) aid_size_cell_fastswap

0x8dbe,	// (0x0006662f) aid_size_cell_touch_ParamLimits

0x8dbe,	// (0x0006662f) aid_size_cell_touch

0xe88d,	// (0x0006c0fe) popup_fast_swap_wide_window_ParamLimits

0xe88d,	// (0x0006c0fe) popup_fast_swap_wide_window

0x8f8e,	// (0x000667ff) touch_pane_ParamLimits

0x8f8e,	// (0x000667ff) touch_pane

0x8003,	// (0x00065874) button_value_adjust_pane_cp2

0xbf94,	// (0x00069805) button_value_adjust_pane_cp4

0xbf9c,	// (0x0006980d) form_field_data_pane_cp2

0x9a74,	// (0x000672e5) form_field_data_wide_pane_cp2

0x8311,	// (0x00065b82) bg_scroll_pane_ParamLimits

0x9daa,	// (0x0006761b) scroll_handle_pane_ParamLimits

0xf213,	// (0x0006ca84) scroll_sc2_down_pane_ParamLimits

0xf213,	// (0x0006ca84) scroll_sc2_down_pane

0x8342,	// (0x00065bb3) scroll_sc2_up_pane_ParamLimits

0x8342,	// (0x00065bb3) scroll_sc2_up_pane

0xcd40,	// (0x0006a5b1) grid_wheel_folder_pane_g1_ParamLimits

0xcd40,	// (0x0006a5b1) grid_wheel_folder_pane_g1

0xf395,	// (0x0006cc06) clock_nsta_pane_cp2_ParamLimits

0xf395,	// (0x0006cc06) clock_nsta_pane_cp2

0xa0db,	// (0x0006794c) listscroll_midp_pane_ParamLimits

0xa0e7,	// (0x00067958) midp_canvas_pane

0xc61c,	// (0x00069e8d) nsta_clock_indic_pane

0xc644,	// (0x00069eb5) listscroll_form_pane_vc

0xc64c,	// (0x00069ebd) listscroll_set_pane_vc_ParamLimits

0xc64c,	// (0x00069ebd) listscroll_set_pane_vc

0xac99,	// (0x0006850a) clock_nsta_pane

0xacc3,	// (0x00068534) indicator_nsta_pane

0x1e6c,	// (0x0005f6dd) bg_popup_sub_pane_cp2_ParamLimits

0x1e80,	// (0x0005f6f1) find_pane_cp2_ParamLimits

0x1e80,	// (0x0005f6f1) find_pane_cp2

0x1e96,	// (0x0005f707) grid_toobar_pane_ParamLimits

0x1f8e,	// (0x0005f7ff) list_form_gen_pane_vc_ParamLimits

0x1f8e,	// (0x0005f7ff) list_form_gen_pane_vc

0x1fa4,	// (0x0005f815) scroll_pane_cp8_vc_ParamLimits

0x1fa4,	// (0x0005f815) scroll_pane_cp8_vc

0x2020,	// (0x0005f891) data_form_wide_pane_vc_ParamLimits

0x2020,	// (0x0005f891) data_form_wide_pane_vc

0x202c,	// (0x0005f89d) form_field_data_wide_pane_vc_g1

0x2034,	// (0x0005f8a5) form_field_data_wide_pane_vc_t1_ParamLimits

0x2034,	// (0x0005f8a5) form_field_data_wide_pane_vc_t1

0x8017,	// (0x00065888) input_focus_pane_cp6_vc_ParamLimits

0x8017,	// (0x00065888) input_focus_pane_cp6_vc

0x2381,	// (0x0005fbf2) list_midp_pane_ParamLimits

0x36fe,	// (0x00060f6f) scroll_pane_cp16_ParamLimits

0x36fe,	// (0x00060f6f) scroll_pane_cp16

0x23d7,	// (0x0005fc48) button_value_adjust_pane_ParamLimits

0x23d7,	// (0x0005fc48) button_value_adjust_pane

0xc932,	// (0x0006a1a3) button_value_adjust_pane_cp6_ParamLimits

0xc932,	// (0x0006a1a3) button_value_adjust_pane_cp6

0xca4c,	// (0x0006a2bd) settings_code_pane_cp_ParamLimits

0xca4c,	// (0x0006a2bd) settings_code_pane_cp

0x7064,	// (0x000648d5) cell_touch_pane_g1

0x7064,	// (0x000648d5) cell_touch_pane_g2

0x0001,

0xf6d4,	// (0x0006cf45) cell_touch_pane_g

0xcc0d,	// (0x0006a47e) cell_touch_pane_cp_ParamLimits

0xcc0d,	// (0x0006a47e) cell_touch_pane_cp

0xcc29,	// (0x0006a49a) cell_touch_pane_ParamLimits

0xcc29,	// (0x0006a49a) cell_touch_pane

0x7064,	// (0x000648d5) scroll_sc2_down_pane_g1

0x7064,	// (0x000648d5) scroll_sc2_up_pane_g1

0x706e,	// (0x000648df) bg_set_opt_pane_cp4_vc

0x3a8e,	// (0x000612ff) list_set_graphic_pane_vc_g1_ParamLimits

0x3a8e,	// (0x000612ff) list_set_graphic_pane_vc_g1

0x3a9a,	// (0x0006130b) list_set_graphic_pane_vc_g2_ParamLimits

0x3a9a,	// (0x0006130b) list_set_graphic_pane_vc_g2

0x0001,

0xf9c4,	// (0x0006d235) list_set_graphic_pane_vc_g_ParamLimits

0xf9c4,	// (0x0006d235) list_set_graphic_pane_vc_g

0x3aa6,	// (0x00061317) text_primary_small_cp13_vc_ParamLimits

0x3aa6,	// (0x00061317) text_primary_small_cp13_vc

0x3abe,	// (0x0006132f) list_set_graphic_pane_vc_ParamLimits

0x3abe,	// (0x0006132f) list_set_graphic_pane_vc

0x706e,	// (0x000648df) input_focus_pane_cp2_vc

0x7064,	// (0x000648d5) setting_code_pane_vc_g1

0x70d3,	// (0x00064944) setting_code_pane_vc_t1

0x3ad1,	// (0x00061342) set_text_pane_vc_t1_ParamLimits

0x3ad1,	// (0x00061342) set_text_pane_vc_t1

0x706e,	// (0x000648df) input_focus_pane_cp1_vc

0x3aee,	// (0x0006135f) list_set_text_pane_vc

0x7064,	// (0x000648d5) setting_text_pane_vc_g1

0x706e,	// (0x000648df) bg_set_opt_pane_cp2_vc

0x70ca,	// (0x0006493b) setting_slider_graphic_pane_vc_g1

0x3af8,	// (0x00061369) setting_slider_graphic_pane_vc_t1

0x3b08,	// (0x00061379) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9c9,	// (0x0006d23a) setting_slider_graphic_pane_vc_t

0x3b18,	// (0x00061389) slider_set_pane_cp_vc

0x3b20,	// (0x00061391) slider_set_pane_vc_g1

0x3b29,	// (0x0006139a) slider_set_pane_vc_g2

0x0006,

0xf9ce,	// (0x0006d23f) slider_set_pane_vc_g

0x806f,	// (0x000658e0) set_opt_bg_pane_g1_copy1

0x8077,	// (0x000658e8) set_opt_bg_pane_g2_copy1

0x3b55,	// (0x000613c6) set_opt_bg_pane_g3_copy1

0x8087,	// (0x000658f8) set_opt_bg_pane_g4_copy1

0x808f,	// (0x00065900) set_opt_bg_pane_g5_copy1

0x8097,	// (0x00065908) set_opt_bg_pane_g6_copy1

0x3b5d,	// (0x000613ce) set_opt_bg_pane_g7_copy1

0x3b67,	// (0x000613d8) set_opt_bg_pane_g8_copy1

0x3b6f,	// (0x000613e0) set_opt_bg_pane_g9_copy1

0x706e,	// (0x000648df) bg_set_opt_pane_cp_vc

0x3b77,	// (0x000613e8) setting_slider_pane_vc_t1

0x3b86,	// (0x000613f7) setting_slider_pane_vc_t2

0x3b96,	// (0x00061407) setting_slider_pane_vc_t3

0x0002,

0xf9dd,	// (0x0006d24e) setting_slider_pane_vc_t

0x3ba6,	// (0x00061417) slider_set_pane_vc

0x06be,	// (0x0005df2f) volume_set_pane_vc_g1

0x0a87,	// (0x0005e2f8) volume_set_pane_vc_g2

0x0a90,	// (0x0005e301) volume_set_pane_vc_g3

0x0a99,	// (0x0005e30a) volume_set_pane_vc_g4

0x0aa2,	// (0x0005e313) volume_set_pane_vc_g5

0x0aab,	// (0x0005e31c) volume_set_pane_vc_g6

0x0ab4,	// (0x0005e325) volume_set_pane_vc_g7

0x0abd,	// (0x0005e32e) volume_set_pane_vc_g8

0x0ac6,	// (0x0005e337) volume_set_pane_vc_g9

0x0acf,	// (0x0005e340) volume_set_pane_vc_g10

0x0009,

0xf9e4,	// (0x0006d255) volume_set_pane_vc_g

0x3bae,	// (0x0006141f) volume_set_pane_vc

0x3bb8,	// (0x00061429) button_value_adjust_pane_cp1_vc

0x3bc2,	// (0x00061433) list_highlight_pane_cp2_vc

0x3bcb,	// (0x0006143c) list_set_pane_vc_ParamLimits

0x3bcb,	// (0x0006143c) list_set_pane_vc

0x3c29,	// (0x0006149a) main_pane_set_vc_t1_ParamLimits

0x3c29,	// (0x0006149a) main_pane_set_vc_t1

0x3c3e,	// (0x000614af) main_pane_set_vc_t2_ParamLimits

0x3c3e,	// (0x000614af) main_pane_set_vc_t2

0x3c50,	// (0x000614c1) main_pane_set_vc_t3_ParamLimits

0x3c50,	// (0x000614c1) main_pane_set_vc_t3

0x3c62,	// (0x000614d3) main_pane_set_vc_t4_ParamLimits

0x3c62,	// (0x000614d3) main_pane_set_vc_t4

0x0003,

0xf9f9,	// (0x0006d26a) main_pane_set_vc_t_ParamLimits

0xf9f9,	// (0x0006d26a) main_pane_set_vc_t

0x3c74,	// (0x000614e5) setting_code_pane_vc_ParamLimits

0x3c74,	// (0x000614e5) setting_code_pane_vc

0x3c83,	// (0x000614f4) setting_slider_graphic_pane_vc

0x3c83,	// (0x000614f4) setting_slider_pane_vc

0x3c83,	// (0x000614f4) setting_text_pane_vc

0x3c83,	// (0x000614f4) setting_volume_pane_vc

0x3c8b,	// (0x000614fc) scroll_pane_cp121_vc

0x7ff1,	// (0x00065862) set_content_pane_vc

0x3d13,	// (0x00061584) button_value_adjust_pane_g1

0x3d1c,	// (0x0006158d) button_value_adjust_pane_g2

0x0001,

0xfa55,	// (0x0006d2c6) button_value_adjust_pane_g

0x3d25,	// (0x00061596) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3d25,	// (0x00061596) form_field_slider_wide_pane_vc_t1

0x3d39,	// (0x000615aa) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3d39,	// (0x000615aa) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5a,	// (0x0006d2cb) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5a,	// (0x0006d2cb) form_field_slider_wide_pane_vc_t

0x71e6,	// (0x00064a57) input_focus_pane_cp10_vc_ParamLimits

0x71e6,	// (0x00064a57) input_focus_pane_cp10_vc

0x3d67,	// (0x000615d8) slider_cont_pane_cp1_vc_ParamLimits

0x3d67,	// (0x000615d8) slider_cont_pane_cp1_vc

0x3d79,	// (0x000615ea) slider_form_pane_g1_cp2

0x3b29,	// (0x0006139a) slider_form_pane_g2_cp2

0x3da6,	// (0x00061617) form_field_slider_pane_vc_t3

0x3db4,	// (0x00061625) form_field_slider_pane_vc_t4

0x3dc2,	// (0x00061633) slider_form_pane_vc_ParamLimits

0x3dc2,	// (0x00061633) slider_form_pane_vc

0x3dcf,	// (0x00061640) form_field_slider_pane_vc_t1_ParamLimits

0x3dcf,	// (0x00061640) form_field_slider_pane_vc_t1

0x3d39,	// (0x000615aa) form_field_slider_pane_vc_t2_ParamLimits

0x3d39,	// (0x000615aa) form_field_slider_pane_vc_t2

0x0001,

0xfa6c,	// (0x0006d2dd) form_field_slider_pane_vc_t_ParamLimits

0xfa6c,	// (0x0006d2dd) form_field_slider_pane_vc_t

0x71e6,	// (0x00064a57) input_focus_pane_cp9_vc_ParamLimits

0x71e6,	// (0x00064a57) input_focus_pane_cp9_vc

0x3deb,	// (0x0006165c) slider_cont_pane_vc_ParamLimits

0x3deb,	// (0x0006165c) slider_cont_pane_vc

0x3dff,	// (0x00061670) list_form_graphic_pane_cp_vc_ParamLimits

0x3dff,	// (0x00061670) list_form_graphic_pane_cp_vc

0x202c,	// (0x0005f89d) form_field_popup_wide_pane_vc_g1

0x3e14,	// (0x00061685) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3e14,	// (0x00061685) form_field_popup_wide_pane_vc_t1

0x8017,	// (0x00065888) input_focus_pane_cp8_vc_ParamLimits

0x8017,	// (0x00065888) input_focus_pane_cp8_vc

0x3e59,	// (0x000616ca) list_form_wide_pane_vc_ParamLimits

0x3e59,	// (0x000616ca) list_form_wide_pane_vc

0x3e65,	// (0x000616d6) list_form_graphic_pane_vc_g1

0x3e6d,	// (0x000616de) list_form_graphic_pane_vc_t1_ParamLimits

0x3e6d,	// (0x000616de) list_form_graphic_pane_vc_t1

0x70bc,	// (0x0006492d) list_highlight_pane_cp5_vc_ParamLimits

0x70bc,	// (0x0006492d) list_highlight_pane_cp5_vc

0x3e89,	// (0x000616fa) list_form_graphic_pane_vc_ParamLimits

0x3e89,	// (0x000616fa) list_form_graphic_pane_vc

0x202c,	// (0x0005f89d) form_field_popup_pane_vc_g1

0x3e9f,	// (0x00061710) form_field_popup_pane_vc_t1_ParamLimits

0x3e9f,	// (0x00061710) form_field_popup_pane_vc_t1

0x8017,	// (0x00065888) input_focus_pane_cp7_vc_ParamLimits

0x8017,	// (0x00065888) input_focus_pane_cp7_vc

0x3eb6,	// (0x00061727) list_form_pane_vc_ParamLimits

0x3eb6,	// (0x00061727) list_form_pane_vc

0x3ec2,	// (0x00061733) data_form_pane_vc_t1_ParamLimits

0x3ec2,	// (0x00061733) data_form_pane_vc_t1

0x806f,	// (0x000658e0) input_focus_pane_vc_g1

0x8077,	// (0x000658e8) input_focus_pane_vc_g2

0x807f,	// (0x000658f0) input_focus_pane_vc_g3

0x8087,	// (0x000658f8) input_focus_pane_vc_g4

0x808f,	// (0x00065900) input_focus_pane_vc_g5

0x8097,	// (0x00065908) input_focus_pane_vc_g6

0x809f,	// (0x00065910) input_focus_pane_vc_g7

0x80a7,	// (0x00065918) input_focus_pane_vc_g8

0x80af,	// (0x00065920) input_focus_pane_vc_g9

0x7064,	// (0x000648d5) input_focus_pane_vc_g10

0x0009,

0xf65d,	// (0x0006cece) input_focus_pane_vc_g

0x2020,	// (0x0005f891) data_form_pane_vc_ParamLimits

0x2020,	// (0x0005f891) data_form_pane_vc

0x202c,	// (0x0005f89d) form_field_data_pane_vc_g1

0x3edd,	// (0x0006174e) form_field_data_pane_vc_t1_ParamLimits

0x3edd,	// (0x0006174e) form_field_data_pane_vc_t1

0x8017,	// (0x00065888) input_focus_pane_vc_ParamLimits

0x8017,	// (0x00065888) input_focus_pane_vc

0x3ef7,	// (0x00061768) button_value_adjust_pane_cp3_vc

0x3eff,	// (0x00061770) button_value_adjust_pane_cp5_vc

0x3f07,	// (0x00061778) form_field_data_pane_vc_ParamLimits

0x3f07,	// (0x00061778) form_field_data_pane_vc

0x3f1e,	// (0x0006178f) form_field_data_pane_vc_cp2

0x3f26,	// (0x00061797) form_field_data_wide_pane_vc_ParamLimits

0x3f26,	// (0x00061797) form_field_data_wide_pane_vc

0x3f3c,	// (0x000617ad) form_field_data_wide_pane_vc_cp2

0x3f44,	// (0x000617b5) form_field_popup_pane_vc_ParamLimits

0x3f44,	// (0x000617b5) form_field_popup_pane_vc

0x3f5b,	// (0x000617cc) form_field_popup_wide_pane_vc_ParamLimits

0x3f5b,	// (0x000617cc) form_field_popup_wide_pane_vc

0x3f71,	// (0x000617e2) form_field_slider_pane_vc_ParamLimits

0x3f71,	// (0x000617e2) form_field_slider_pane_vc

0x3f84,	// (0x000617f5) form_field_slider_wide_pane_vc_ParamLimits

0x3f84,	// (0x000617f5) form_field_slider_wide_pane_vc

0xcc46,	// (0x0006a4b7) grid_touch_1_pane_ParamLimits

0xcc46,	// (0x0006a4b7) grid_touch_1_pane

0xcc5a,	// (0x0006a4cb) grid_touch_2_pane_ParamLimits

0xcc5a,	// (0x0006a4cb) grid_touch_2_pane

0x4068,	// (0x000618d9) touch_pane_g1_ParamLimits

0x4068,	// (0x000618d9) touch_pane_g1

0x3fbb,	// (0x0006182c) cell_app_pane_cp_wide_ParamLimits

0x3fbb,	// (0x0006182c) cell_app_pane_cp_wide

0x3fcc,	// (0x0006183d) grid_popup_fast_wide_pane_ParamLimits

0x3fcc,	// (0x0006183d) grid_popup_fast_wide_pane

0x3fe0,	// (0x00061851) scroll_pane_cp19_ParamLimits

0x3fe0,	// (0x00061851) scroll_pane_cp19

0x706e,	// (0x000648df) bg_popup_window_pane_cp20

0x3ff4,	// (0x00061865) listscroll_popup_fast_wide_pane

0xcc84,	// (0x0006a4f5) grid_indicator_nsta_pane

0x400e,	// (0x0006187f) clock_nsta_pane_g1

0x4017,	// (0x00061888) clock_nsta_pane_t1

0xcc90,	// (0x0006a501) cell_indicator_nsta_pane_ParamLimits

0xcc90,	// (0x0006a501) cell_indicator_nsta_pane

0x4068,	// (0x000618d9) cell_indicator_nsta_pane_g1

0xccab,	// (0x0006a51c) cell_indicator_nsta_pane_g2

0x0001,

0xfa7d,	// (0x0006d2ee) cell_indicator_nsta_pane_g

0x4088,	// (0x000618f9) clock_nsta_pane_cp

0x4091,	// (0x00061902) indicator_nsta_pane_cp

0x409b,	// (0x0006190c) nsta_clock_indic_pane_g1

0x70f8,	// (0x00064969) grid_indicator_pane

0x9e44,	// (0x000676b5) scroll_pane_cp29

0xf2e4,	// (0x0006cb55) indicator_nsta_pane_cp2_ParamLimits

0xf2e4,	// (0x0006cb55) indicator_nsta_pane_cp2

0x70bc,	// (0x0006492d) main_apps_wheel_pane

0xb149,	// (0x000689ba) form_midp_field_text_pane_ParamLimits

0x238d,	// (0x0005fbfe) scroll_bar_cp050_ParamLimits

0x40f4,	// (0x00061965) cell_indicator_pane_ParamLimits

0x40f4,	// (0x00061965) cell_indicator_pane

0x410d,	// (0x0006197e) cell_indicator_pane_g1

0xccca,	// (0x0006a53b) grid_wheel_folder_pane_ParamLimits

0xccca,	// (0x0006a53b) grid_wheel_folder_pane

0xccd8,	// (0x0006a549) list_wheel_apps_pane_ParamLimits

0xccd8,	// (0x0006a549) list_wheel_apps_pane

0xcce6,	// (0x0006a557) main_apps_wheel_pane_g1_ParamLimits

0xcce6,	// (0x0006a557) main_apps_wheel_pane_g1

0xccf2,	// (0x0006a563) main_apps_wheel_pane_g2_ParamLimits

0xccf2,	// (0x0006a563) main_apps_wheel_pane_g2

0x0001,

0xfa99,	// (0x0006d30a) main_apps_wheel_pane_g_ParamLimits

0xfa99,	// (0x0006d30a) main_apps_wheel_pane_g

0xcd00,	// (0x0006a571) main_apps_wheel_pane_t1_ParamLimits

0xcd00,	// (0x0006a571) main_apps_wheel_pane_t1

0xcd14,	// (0x0006a585) list_wheel_apps_pane_g1

0xcd1c,	// (0x0006a58d) list_wheel_apps_pane_g2

0xcd24,	// (0x0006a595) list_wheel_apps_pane_g3

0xcd2c,	// (0x0006a59d) list_wheel_apps_pane_g4

0xcd36,	// (0x0006a5a7) list_wheel_apps_pane_g5

0x0004,

0xfa9e,	// (0x0006d30f) list_wheel_apps_pane_g

0xc389,	// (0x00069bfa) navi_icon_text_pane

0xab8d,	// (0x000683fe) aid_fill_nsta

0x41d4,	// (0x00061a45) navi_icon_text_pane_g1

0x41e0,	// (0x00061a51) navi_icon_text_pane_t1

0xc26d,	// (0x00069ade) list_set_graphic_pane_t1_ParamLimits

0xc26d,	// (0x00069ade) list_set_graphic_pane_t1

0x2ad8,	// (0x00060349) popup_midp_note_alarm_window_t6_ParamLimits

0x2ad8,	// (0x00060349) popup_midp_note_alarm_window_t6

0x2aea,	// (0x0006035b) popup_midp_note_alarm_window_t7_ParamLimits

0x2aea,	// (0x0006035b) popup_midp_note_alarm_window_t7

0x2afc,	// (0x0006036d) popup_midp_note_alarm_window_t8_ParamLimits

0x2afc,	// (0x0006036d) popup_midp_note_alarm_window_t8

0x2b0e,	// (0x0006037f) popup_midp_note_alarm_window_t9_ParamLimits

0x2b0e,	// (0x0006037f) popup_midp_note_alarm_window_t9

0x2b20,	// (0x00060391) popup_midp_note_alarm_window_t10_ParamLimits

0x2b20,	// (0x00060391) popup_midp_note_alarm_window_t10

0x2b32,	// (0x000603a3) popup_midp_note_alarm_window_t11_ParamLimits

0x2b32,	// (0x000603a3) popup_midp_note_alarm_window_t11

0xc6b4,	// (0x00069f25) scroll_pane_cp17_ParamLimits

0xc6b4,	// (0x00069f25) scroll_pane_cp17

0x06be,	// (0x0005df2f) volume_small_pane_cp_g1

0x0ad8,	// (0x0005e349) volume_small_pane_cp_g2

0x0ae1,	// (0x0005e352) volume_small_pane_cp_g3

0x0aea,	// (0x0005e35b) volume_small_pane_cp_g4

0x0af3,	// (0x0005e364) volume_small_pane_cp_g5

0x0aa2,	// (0x0005e313) volume_small_pane_cp_g6

0x0afc,	// (0x0005e36d) volume_small_pane_cp_g7

0x0b05,	// (0x0005e376) volume_small_pane_cp_g8

0x0b0e,	// (0x0005e37f) volume_small_pane_cp_g9

0x0b17,	// (0x0005e388) volume_small_pane_cp_g10

0xc4ef,	// (0x00069d60) midp_ticker_pane_g1_ParamLimits

0xc4fb,	// (0x00069d6c) midp_ticker_pane_g2_ParamLimits

0xf729,	// (0x0006cf9a) midp_ticker_pane_g_ParamLimits

0xc507,	// (0x00069d78) midp_ticker_pane_t1_ParamLimits

0xabb1,	// (0x00068422) aid_fill_nsta_2

0x2379,	// (0x0005fbea) list_form2_midp_pane

0x348c,	// (0x00060cfd) midp_editing_number_pane_ParamLimits

0x349b,	// (0x00060d0c) midp_ticker_pane_ParamLimits

0x41f2,	// (0x00061a63) form2_midp_field_pane

0x4216,	// (0x00061a87) scroll_pane_cp51

0x4236,	// (0x00061aa7) form2_midp_button_pane_ParamLimits

0x4236,	// (0x00061aa7) form2_midp_button_pane

0x4248,	// (0x00061ab9) form2_midp_content_pane_ParamLimits

0x4248,	// (0x00061ab9) form2_midp_content_pane

0x4262,	// (0x00061ad3) form2_midp_field_choice_group_pane

0x426a,	// (0x00061adb) form2_midp_field_pane_g1

0x4272,	// (0x00061ae3) form2_midp_field_pane_g2

0x427a,	// (0x00061aeb) form2_midp_field_pane_g3

0x4282,	// (0x00061af3) form2_midp_field_pane_g4

0x0003,

0xfac3,	// (0x0006d334) form2_midp_field_pane_g

0x428a,	// (0x00061afb) form2_midp_gauge_slider_pane

0x4292,	// (0x00061b03) form2_midp_gauge_wait_pane

0x429a,	// (0x00061b0b) form2_midp_image_pane_ParamLimits

0x429a,	// (0x00061b0b) form2_midp_image_pane

0xcd69,	// (0x0006a5da) form2_midp_label_pane_ParamLimits

0xcd69,	// (0x0006a5da) form2_midp_label_pane

0xcd82,	// (0x0006a5f3) form2_midp_label_pane_cp_ParamLimits

0xcd82,	// (0x0006a5f3) form2_midp_label_pane_cp

0x42ef,	// (0x00061b60) form2_midp_string_pane_ParamLimits

0x42ef,	// (0x00061b60) form2_midp_string_pane

0xb5e7,	// (0x00068e58) form2_midp_text_pane_ParamLimits

0xb5e7,	// (0x00068e58) form2_midp_text_pane

0x4301,	// (0x00061b72) form2_midp_time_pane

0x4311,	// (0x00061b82) input_focus_pane_cp51_ParamLimits

0x4311,	// (0x00061b82) input_focus_pane_cp51

0xcda1,	// (0x0006a612) form2_midp_label_pane_t1_ParamLimits

0xcda1,	// (0x0006a612) form2_midp_label_pane_t1

0xb600,	// (0x00068e71) form2_mdip_text_pane_t1_ParamLimits

0xb600,	// (0x00068e71) form2_mdip_text_pane_t1

0xedd4,	// (0x0006c645) form2_midp_time_pane_t1

0x4372,	// (0x00061be3) form2_midp_gauge_slider_pane_t1

0xcde1,	// (0x0006a652) form2_midp_gauge_slider_pane_t2

0xcdf3,	// (0x0006a664) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacc,	// (0x0006d33d) form2_midp_gauge_slider_pane_t

0x43a8,	// (0x00061c19) form2_midp_slider_pane

0x43b4,	// (0x00061c25) form2_midp_gauge_wait_pane_t1

0x43c2,	// (0x00061c33) form2_midp_wait_pane_ParamLimits

0x43c2,	// (0x00061c33) form2_midp_wait_pane

0xce05,	// (0x0006a676) list_single_2graphic_pane_cp4_ParamLimits

0xce05,	// (0x0006a676) list_single_2graphic_pane_cp4

0xb08a,	// (0x000688fb) list_single_midp_graphic_pane_cp_ParamLimits

0xb08a,	// (0x000688fb) list_single_midp_graphic_pane_cp

0x706e,	// (0x000648df) list_highlight_pane_cp20

0x4415,	// (0x00061c86) list_single_2graphic_pane_g1_cp4

0x3972,	// (0x000611e3) list_single_2graphic_pane_g2_cp4

0x441d,	// (0x00061c8e) list_single_2graphic_pane_t1_cp4

0x70bc,	// (0x0006492d) list_highlight_pane_cp21

0x442c,	// (0x00061c9d) list_single_midp_graphic_pane_g4_cp

0x443b,	// (0x00061cac) list_single_midp_graphic_pane_t1_cp

0xce1a,	// (0x0006a68b) form2_mdip_string_pane_t1_ParamLimits

0xce1a,	// (0x0006a68b) form2_mdip_string_pane_t1

0x706e,	// (0x000648df) bg_wml_button_pane_cp2

0x7064,	// (0x000648d5) form2_midp_image_pane_g1

0xe8c5,	// (0x0006c136) list_double_large_graphic_pane_g5_ParamLimits

0xe8c5,	// (0x0006c136) list_double_large_graphic_pane_g5

0xa0db,	// (0x0006794c) midp_form_pane_ParamLimits

0x70bc,	// (0x0006492d) main_apps_wheel_pane_ParamLimits

0xa86b,	// (0x000680dc) popup_preview_window_ParamLimits

0xa86b,	// (0x000680dc) popup_preview_window

0xab38,	// (0x000683a9) popup_touch_info_window_ParamLimits

0xab38,	// (0x000683a9) popup_touch_info_window

0xab56,	// (0x000683c7) popup_touch_menu_window_ParamLimits

0xab56,	// (0x000683c7) popup_touch_menu_window

0x705a,	// (0x000648cb) bg_popup_sub_pane_cp6

0x4557,	// (0x00061dc8) list_touch_menu_pane

0xce90,	// (0x0006a701) list_single_touch_menu_pane_ParamLimits

0xce90,	// (0x0006a701) list_single_touch_menu_pane

0xcea4,	// (0x0006a715) list_single_touch_menu_pane_t1

0x70bc,	// (0x0006492d) bg_popup_sub_pane_cp7_ParamLimits

0x70bc,	// (0x0006492d) bg_popup_sub_pane_cp7

0x4583,	// (0x00061df4) heading_sub_pane

0x458b,	// (0x00061dfc) list_touch_info_pane_ParamLimits

0x458b,	// (0x00061dfc) list_touch_info_pane

0x459a,	// (0x00061e0b) list_single_touch_info_pane_ParamLimits

0x459a,	// (0x00061e0b) list_single_touch_info_pane

0x45ac,	// (0x00061e1d) list_single_touch_info_pane_t1

0x45ba,	// (0x00061e2b) list_single_touch_info_pane_t2

0x0001,

0xfada,	// (0x0006d34b) list_single_touch_info_pane_t

0xc4d8,	// (0x00069d49) bg_popup_heading_pane_cp

0x45c8,	// (0x00061e39) heading_sub_pane_t1

0x1fba,	// (0x0005f82b) bg_popup_preview_window_pane_cp_ParamLimits

0x1fba,	// (0x0005f82b) bg_popup_preview_window_pane_cp

0x4583,	// (0x00061df4) heading_preview_pane

0x458b,	// (0x00061dfc) list_preview_pane_ParamLimits

0x458b,	// (0x00061dfc) list_preview_pane

0x45d6,	// (0x00061e47) popup_preview_window_g1

0x459a,	// (0x00061e0b) list_single_preview_pane_ParamLimits

0x459a,	// (0x00061e0b) list_single_preview_pane

0x45de,	// (0x00061e4f) list_single_preview_pane_g1

0x45e6,	// (0x00061e57) list_single_preview_pane_t1

0x45ac,	// (0x00061e1d) list_single_preview_pane_t2

0x0001,

0xfadf,	// (0x0006d350) list_single_preview_pane_t

0x45f4,	// (0x00061e65) bg_popup_heading_pane_cp2_ParamLimits

0x45f4,	// (0x00061e65) bg_popup_heading_pane_cp2

0x46df,	// (0x00061f50) heading_preview_pane_g1

0x46e7,	// (0x00061f58) heading_preview_pane_t1_ParamLimits

0x46e7,	// (0x00061f58) heading_preview_pane_t1

0x710f,	// (0x00064980) soft_indicator_pane_t1_ParamLimits

0x7f93,	// (0x00065804) scroll_pane_ParamLimits

0x8330,	// (0x00065ba1) scroll_sc2_left_pane

0x8339,	// (0x00065baa) scroll_sc2_right_pane

0x8358,	// (0x00065bc9) scroll_bg_pane_g1_ParamLimits

0x836d,	// (0x00065bde) scroll_bg_pane_g2_ParamLimits

0x8385,	// (0x00065bf6) scroll_bg_pane_g3_ParamLimits

0xf6b4,	// (0x0006cf25) scroll_bg_pane_g_ParamLimits

0x8358,	// (0x00065bc9) scroll_handle_pane_g1_ParamLimits

0xbfb7,	// (0x00069828) scroll_handle_pane_g2_ParamLimits

0x8385,	// (0x00065bf6) scroll_handle_pane_g3_ParamLimits

0xf6bb,	// (0x0006cf2c) scroll_handle_pane_g_ParamLimits

0xa438,	// (0x00067ca9) popup_choice_list_window_ParamLimits

0xa438,	// (0x00067ca9) popup_choice_list_window

0x1e78,	// (0x0005f6e9) choice_list_pane

0x1efa,	// (0x0005f76b) cell_toolbar_pane_t1

0x1f22,	// (0x0005f793) toolbar_button_pane_ParamLimits

0x2ffe,	// (0x0006086f) ai_gene_pane_1_t2_ParamLimits

0x2ffe,	// (0x0006086f) ai_gene_pane_1_t2

0x0001,

0xf8d7,	// (0x0006d148) ai_gene_pane_1_t_ParamLimits

0xf8d7,	// (0x0006d148) ai_gene_pane_1_t

0x4704,	// (0x00061f75) scroll_sc2_left_pane_g1

0x4704,	// (0x00061f75) scroll_sc2_right_pane_g1

0x839a,	// (0x00065c0b) bg_popup_sub_pane_cp10

0x470e,	// (0x00061f7f) list_choice_list_pane

0xca75,	// (0x0006a2e6) list_single_choice_list_pane_ParamLimits

0xca75,	// (0x0006a2e6) list_single_choice_list_pane

0xceb2,	// (0x0006a723) list_single_choice_list_pane_g1

0x9c6e,	// (0x000674df) list_single_choice_list_pane_t1_ParamLimits

0x9c6e,	// (0x000674df) list_single_choice_list_pane_t1

0x4742,	// (0x00061fb3) choice_list_pane_g1

0xceba,	// (0x0006a72b) choice_list_pane_t1

0x705a,	// (0x000648cb) input_focus_pane_cp11

0x82a5,	// (0x00065b16) title_pane_stacon_g2_ParamLimits

0x82a5,	// (0x00065b16) title_pane_stacon_g2

0x0002,

0xf69a,	// (0x0006cf0b) title_pane_stacon_g_ParamLimits

0xf69a,	// (0x0006cf0b) title_pane_stacon_g

0xc4d8,	// (0x00069d49) cursor_press_pane

0xa4df,	// (0x00067d50) popup_fep_hwr_window_ParamLimits

0xa4df,	// (0x00067d50) popup_fep_hwr_window

0xf4e5,	// (0x0006cd56) popup_fep_vkb_window_ParamLimits

0xf4e5,	// (0x0006cd56) popup_fep_vkb_window

0xcec8,	// (0x0006a739) cursor_press_pane_g1

0x0002,

0xfb08,	// (0x0006d379) fep_vkb_side_pane_g_ParamLimits

0x0b94,	// (0x0005e405) fep_hwr_candidate_pane_ParamLimits

0x0b94,	// (0x0005e405) fep_hwr_candidate_pane

0x0bbe,	// (0x0005e42f) fep_hwr_side_pane_ParamLimits

0x0bbe,	// (0x0005e42f) fep_hwr_side_pane

0x0bde,	// (0x0005e44f) fep_hwr_top_pane_ParamLimits

0x0bde,	// (0x0005e44f) fep_hwr_top_pane

0x0bf6,	// (0x0005e467) fep_hwr_write_pane_ParamLimits

0x0bf6,	// (0x0005e467) fep_hwr_write_pane

0xfb08,	// (0x0006d379) fep_vkb_side_pane_g

0x4760,	// (0x00061fd1) fep_hwr_top_pane_g1

0x4772,	// (0x00061fe3) fep_hwr_top_pane_g2

0x0c30,	// (0x0005e4a1) fep_hwr_top_pane_g3

0x0002,

0xfae4,	// (0x0006d355) fep_hwr_top_pane_g

0x0c45,	// (0x0005e4b6) fep_hwr_top_text_pane

0xc07a,	// (0x000698eb) fep_hwr_top_text_pane_g1

0x47a8,	// (0x00062019) fep_hwr_top_text_pane_t1

0x0d3b,	// (0x0005e5ac) fep_hwr_candidate_pane_g1

0x49ed,	// (0x0006225e) fep_vkb_keypad_pane_g3_ParamLimits

0x49ed,	// (0x0006225e) fep_vkb_keypad_pane_g3

0x4a15,	// (0x00062286) fep_vkb_keypad_pane_g4_ParamLimits

0x4a15,	// (0x00062286) fep_vkb_keypad_pane_g4

0x4a84,	// (0x000622f5) fep_vkb_bottom_pane_g2_ParamLimits

0x4a84,	// (0x000622f5) fep_vkb_bottom_pane_g2

0x0001,

0xfb0f,	// (0x0006d380) fep_vkb_bottom_pane_g_ParamLimits

0xfb0f,	// (0x0006d380) fep_vkb_bottom_pane_g

0x4704,	// (0x00061f75) cell_vkb_side_pane_g2

0x0001,

0xfb19,	// (0x0006d38a) cell_vkb_side_pane_g

0x4b0f,	// (0x00062380) cell_vkb_side_pane_t1

0x4b1d,	// (0x0006238e) cell_vkb_side_pane_t1_copy1

0x4704,	// (0x00061f75) bg_fep_vkb_candidate_pane_g2

0x4c49,	// (0x000624ba) cell_vkb_candidate_pane_ParamLimits

0x47b6,	// (0x00062027) aid_size_cell_vkb_ParamLimits

0x47b6,	// (0x00062027) aid_size_cell_vkb

0x4c49,	// (0x000624ba) cell_vkb_candidate_pane

0x0d62,	// (0x0005e5d3) bg_popup_fep_shadow_pane_g1

0xceef,	// (0x0006a760) fep_vkb_bottom_pane_ParamLimits

0xceef,	// (0x0006a760) fep_vkb_bottom_pane

0x487a,	// (0x000620eb) fep_vkb_candidate_pane_ParamLimits

0x487a,	// (0x000620eb) fep_vkb_candidate_pane

0xcf14,	// (0x0006a785) fep_vkb_keypad_pane_ParamLimits

0xcf14,	// (0x0006a785) fep_vkb_keypad_pane

0xcf49,	// (0x0006a7ba) fep_vkb_side_pane_ParamLimits

0xcf49,	// (0x0006a7ba) fep_vkb_side_pane

0xcf85,	// (0x0006a7f6) fep_vkb_top_pane_ParamLimits

0xcf85,	// (0x0006a7f6) fep_vkb_top_pane

0x4946,	// (0x000621b7) fep_vkb_top_pane_g1_ParamLimits

0x4946,	// (0x000621b7) fep_vkb_top_pane_g1

0x4955,	// (0x000621c6) fep_vkb_top_pane_g2_ParamLimits

0x4955,	// (0x000621c6) fep_vkb_top_pane_g2

0x4964,	// (0x000621d5) fep_vkb_top_pane_g3_ParamLimits

0x4964,	// (0x000621d5) fep_vkb_top_pane_g3

0x0003,

0xfaff,	// (0x0006d370) fep_vkb_top_pane_g_ParamLimits

0xfaff,	// (0x0006d370) fep_vkb_top_pane_g

0x4982,	// (0x000621f3) fep_vkb_top_text_pane_ParamLimits

0x4982,	// (0x000621f3) fep_vkb_top_text_pane

0xcfba,	// (0x0006a82b) fep_vkb_side_pane_g1_ParamLimits

0xcfba,	// (0x0006a82b) fep_vkb_side_pane_g1

0x49dc,	// (0x0006224d) grid_vkb_side_pane_ParamLimits

0x49dc,	// (0x0006224d) grid_vkb_side_pane

0x0d6a,	// (0x0005e5db) bg_popup_fep_shadow_pane_g2

0x0d73,	// (0x0005e5e4) bg_popup_fep_shadow_pane_g3

0x0d7b,	// (0x0005e5ec) bg_popup_fep_shadow_pane_g4

0x0d84,	// (0x0005e5f5) bg_popup_fep_shadow_pane_g5

0x0d8e,	// (0x0005e5ff) bg_popup_fep_shadow_pane_g6

0x0d96,	// (0x0005e607) bg_popup_fep_shadow_pane_g7

0x8087,	// (0x000658f8) bg_popup_fep_shadow_pane_g8

0x4a33,	// (0x000622a4) grid_vkb_keypad_number_pane_ParamLimits

0x4a33,	// (0x000622a4) grid_vkb_keypad_number_pane

0x4a43,	// (0x000622b4) grid_vkb_keypad_pane_ParamLimits

0x4a43,	// (0x000622b4) grid_vkb_keypad_pane

0x4a69,	// (0x000622da) fep_vkb_bottom_pane_g1_ParamLimits

0x4a69,	// (0x000622da) fep_vkb_bottom_pane_g1

0x4a92,	// (0x00062303) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4a92,	// (0x00062303) grid_vkb_keypad_bottom_left_pane

0x4aa7,	// (0x00062318) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4aa7,	// (0x00062318) grid_vkb_keypad_bottom_right_pane

0x4abc,	// (0x0006232d) fep_vkb_top_text_pane_g1

0xd001,	// (0x0006a872) fep_vkb_top_text_pane_t1

0xd013,	// (0x0006a884) cell_vkb_side_pane_ParamLimits

0xd013,	// (0x0006a884) cell_vkb_side_pane

0x4704,	// (0x00061f75) cell_vkb_side_pane_g1

0x4b2b,	// (0x0006239c) cell_vkb_keypad_pane_ParamLimits

0x4b2b,	// (0x0006239c) cell_vkb_keypad_pane

0x4ba0,	// (0x00062411) cell_vkb_keypad_pane_g1

0x0008,

0xfb2c,	// (0x0006d39d) bg_popup_fep_shadow_pane_g

0x0da8,	// (0x0005e619) cell_hwr_side_pane_g1

0x0da8,	// (0x0005e619) cell_hwr_side_pane_g2

0x4baa,	// (0x0006241b) cell_vkb_keypad_pane_t1

0xd029,	// (0x0006a89a) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd029,	// (0x0006a89a) cell_vkb_keypad_bottom_left_pane

0xd03e,	// (0x0006a8af) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd03e,	// (0x0006a8af) cell_vkb_keypad_bottom_right_pane

0x4704,	// (0x00061f75) cell_vkb_keypad_bottom_left_pane_g1

0x4704,	// (0x00061f75) cell_vkb_keypad_bottom_right_pane_g1

0x4c0e,	// (0x0006247f) cell_vkb_keypad_number_pane_ParamLimits

0x4c0e,	// (0x0006247f) cell_vkb_keypad_number_pane

0x4c2d,	// (0x0006249e) cell_vkb_keypad_number_pane_g1

0x4c37,	// (0x000624a8) cell_vkb_keypad_number_pane_g2

0x4c40,	// (0x000624b1) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1e,	// (0x0006d38f) cell_vkb_keypad_number_pane_g

0x4baa,	// (0x0006241b) cell_vkb_keypad_number_pane_t1

0x4c64,	// (0x000624d5) fep_vkb_candidate_pane_g1

0x0001,

0xfb3f,	// (0x0006d3b0) cell_hwr_side_pane_g

0x4c7d,	// (0x000624ee) cell_hwr_side_pane_t1

0x0db2,	// (0x0005e623) cell_hwr_side_pane_t1_copy1

0x0dc0,	// (0x0005e631) cell_hwr_candidate_pane_g1

0x0def,	// (0x0005e660) cell_hwr_candidate_pane_t1

0x4704,	// (0x00061f75) cell_vkb_candidate_pane_g2

0x4ce2,	// (0x00062553) cell_vkb_candidate_pane_t1

0x0b5b,	// (0x0005e3cc) bg_popup_fep_shadow_pane_ParamLimits

0x0b5b,	// (0x0005e3cc) bg_popup_fep_shadow_pane

0x0c10,	// (0x0005e481) bg_fep_hwr_top_pane_g4

0x4784,	// (0x00061ff5) bg_hwr_side_pane_g1_ParamLimits

0x4784,	// (0x00061ff5) bg_hwr_side_pane_g1

0xb632,	// (0x00068ea3) cell_hwr_side_pane_ParamLimits

0xb632,	// (0x00068ea3) cell_hwr_side_pane

0x0cbc,	// (0x0005e52d) fep_hwr_write_pane_g1_ParamLimits

0x0cbc,	// (0x0005e52d) fep_hwr_write_pane_g1

0x0cc9,	// (0x0005e53a) fep_hwr_write_pane_g2_ParamLimits

0x0cc9,	// (0x0005e53a) fep_hwr_write_pane_g2

0x0cd6,	// (0x0005e547) fep_hwr_write_pane_g3_ParamLimits

0x0cd6,	// (0x0005e547) fep_hwr_write_pane_g3

0xb652,	// (0x00068ec3) fep_hwr_write_pane_g4_ParamLimits

0xb652,	// (0x00068ec3) fep_hwr_write_pane_g4

0x0005,

0xfaeb,	// (0x0006d35c) fep_hwr_write_pane_g_ParamLimits

0xfaeb,	// (0x0006d35c) fep_hwr_write_pane_g

0x0c10,	// (0x0005e481) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0c10,	// (0x0005e481) bg_fep_hwr_candidate_pane_g2

0x0cf9,	// (0x0005e56a) cell_hwr_candidate_pane_ParamLimits

0x0cf9,	// (0x0005e56a) cell_hwr_candidate_pane

0x0d3b,	// (0x0005e5ac) fep_hwr_candidate_pane_g1_ParamLimits

0x47e4,	// (0x00062055) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x47e4,	// (0x00062055) bg_popup_fep_shadow_pane_cp2

0x4974,	// (0x000621e5) fep_vkb_top_pane_g4_ParamLimits

0x4974,	// (0x000621e5) fep_vkb_top_pane_g4

0x49ba,	// (0x0006222b) fep_vkb_side_pane_g2_ParamLimits

0x49ba,	// (0x0006222b) fep_vkb_side_pane_g2

0x9979,	// (0x000671ea) list_setting_pane_t4_ParamLimits

0x9979,	// (0x000671ea) list_setting_pane_t4

0x9a13,	// (0x00067284) list_setting_number_pane_t5_ParamLimits

0x9a13,	// (0x00067284) list_setting_number_pane_t5

0xc0b1,	// (0x00069922) list_double_heading_pane_cp2_ParamLimits

0xc0b1,	// (0x00069922) list_double_heading_pane_cp2

0xd059,	// (0x0006a8ca) list_double_heading_pane_g1_cp2_ParamLimits

0xd059,	// (0x0006a8ca) list_double_heading_pane_g1_cp2

0x4cf0,	// (0x00062561) list_double_heading_pane_g2_cp2_ParamLimits

0x4cf0,	// (0x00062561) list_double_heading_pane_g2_cp2

0x4d04,	// (0x00062575) list_double_heading_pane_t1_cp2_ParamLimits

0x4d04,	// (0x00062575) list_double_heading_pane_t1_cp2

0x4d1a,	// (0x0006258b) list_double_heading_pane_t2_cp2_ParamLimits

0x4d1a,	// (0x0006258b) list_double_heading_pane_t2_cp2

0x7052,	// (0x000648c3) aid_value_unit2

0xe8a3,	// (0x0006c114) popup_preview_fixed_window

0x71f4,	// (0x00064a65) bg_popup_preview_window_pane_cp02

0x4d2c,	// (0x0006259d) list_preview_fixed_pane

0x4d72,	// (0x000625e3) list_empty_pane_fp_ParamLimits

0x4d72,	// (0x000625e3) list_empty_pane_fp

0x4d72,	// (0x000625e3) list_single_cale_day_pane_fp_ParamLimits

0x4d72,	// (0x000625e3) list_single_cale_day_pane_fp

0x4d72,	// (0x000625e3) list_single_graphic_heading_pane_fp_ParamLimits

0x4d72,	// (0x000625e3) list_single_graphic_heading_pane_fp

0x4d72,	// (0x000625e3) list_single_graphic_pane_fp_ParamLimits

0x4d72,	// (0x000625e3) list_single_graphic_pane_fp

0x4d72,	// (0x000625e3) list_single_heading_pane_fp_ParamLimits

0x4d72,	// (0x000625e3) list_single_heading_pane_fp

0x4d72,	// (0x000625e3) list_single_pane_fp_ParamLimits

0x4d72,	// (0x000625e3) list_single_pane_fp

0x4d88,	// (0x000625f9) list_single_pane_fp_g1_ParamLimits

0x4d88,	// (0x000625f9) list_single_pane_fp_g1

0xd065,	// (0x0006a8d6) list_single_pane_fp_g2_ParamLimits

0xd065,	// (0x0006a8d6) list_single_pane_fp_g2

0x4d94,	// (0x00062605) list_single_pane_fp_g3_ParamLimits

0x4d94,	// (0x00062605) list_single_pane_fp_g3

0x4da8,	// (0x00062619) list_single_pane_fp_g4_ParamLimits

0x4da8,	// (0x00062619) list_single_pane_fp_g4

0x0003,

0xfb52,	// (0x0006d3c3) list_single_pane_fp_g_ParamLimits

0xfb52,	// (0x0006d3c3) list_single_pane_fp_g

0xede7,	// (0x0006c658) list_single_pane_fp_t1_ParamLimits

0xede7,	// (0x0006c658) list_single_pane_fp_t1

0xedfe,	// (0x0006c66f) list_single_graphic_pane_fp_g1_ParamLimits

0xedfe,	// (0x0006c66f) list_single_graphic_pane_fp_g1

0x4d88,	// (0x000625f9) list_single_graphic_pane_fp_g2_ParamLimits

0x4d88,	// (0x000625f9) list_single_graphic_pane_fp_g2

0xd065,	// (0x0006a8d6) list_single_graphic_pane_fp_g3_ParamLimits

0xd065,	// (0x0006a8d6) list_single_graphic_pane_fp_g3

0x4d94,	// (0x00062605) list_single_graphic_pane_fp_g4_ParamLimits

0x4d94,	// (0x00062605) list_single_graphic_pane_fp_g4

0x4da8,	// (0x00062619) list_single_graphic_pane_fp_g5_ParamLimits

0x4da8,	// (0x00062619) list_single_graphic_pane_fp_g5

0x0004,

0xfb5b,	// (0x0006d3cc) list_single_graphic_pane_fp_g_ParamLimits

0xfb5b,	// (0x0006d3cc) list_single_graphic_pane_fp_g

0xee0a,	// (0x0006c67b) list_single_graphic_pane_fp_t1_ParamLimits

0xee0a,	// (0x0006c67b) list_single_graphic_pane_fp_t1

0xedfe,	// (0x0006c66f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xedfe,	// (0x0006c66f) list_single_graphic_heading_pane_fp_g1

0x4d88,	// (0x000625f9) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4d88,	// (0x000625f9) list_single_graphic_heading_pane_fp_g2

0xd065,	// (0x0006a8d6) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd065,	// (0x0006a8d6) list_single_graphic_heading_pane_fp_g3

0x4d94,	// (0x00062605) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4d94,	// (0x00062605) list_single_graphic_heading_pane_fp_g4

0x4da8,	// (0x00062619) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4da8,	// (0x00062619) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb5b,	// (0x0006d3cc) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb5b,	// (0x0006d3cc) list_single_graphic_heading_pane_fp_g

0xee20,	// (0x0006c691) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xee20,	// (0x0006c691) list_single_graphic_heading_pane_fp_t1

0xee36,	// (0x0006c6a7) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xee36,	// (0x0006c6a7) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb66,	// (0x0006d3d7) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb66,	// (0x0006d3d7) list_single_graphic_heading_pane_fp_t

0xee48,	// (0x0006c6b9) list_single_cale_day_pane_fp_g1_ParamLimits

0xee48,	// (0x0006c6b9) list_single_cale_day_pane_fp_g1

0x4db4,	// (0x00062625) list_single_cale_day_pane_fp_g2_ParamLimits

0x4db4,	// (0x00062625) list_single_cale_day_pane_fp_g2

0x460a,	// (0x00061e7b) list_single_cale_day_pane_fp_g3_ParamLimits

0x460a,	// (0x00061e7b) list_single_cale_day_pane_fp_g3

0x4632,	// (0x00061ea3) list_single_cale_day_pane_fp_g4_ParamLimits

0x4632,	// (0x00061ea3) list_single_cale_day_pane_fp_g4

0x4656,	// (0x00061ec7) list_single_cale_day_pane_fp_g5_ParamLimits

0x4656,	// (0x00061ec7) list_single_cale_day_pane_fp_g5

0x0004,

0xfb6b,	// (0x0006d3dc) list_single_cale_day_pane_fp_g_ParamLimits

0xfb6b,	// (0x0006d3dc) list_single_cale_day_pane_fp_g

0xee80,	// (0x0006c6f1) list_single_cale_day_pane_fp_t1_ParamLimits

0xee80,	// (0x0006c6f1) list_single_cale_day_pane_fp_t1

0xeea6,	// (0x0006c717) list_single_cale_day_pane_fp_t2_ParamLimits

0xeea6,	// (0x0006c717) list_single_cale_day_pane_fp_t2

0xeebf,	// (0x0006c730) list_single_cale_day_pane_fp_t3_ParamLimits

0xeebf,	// (0x0006c730) list_single_cale_day_pane_fp_t3

0x0002,

0xfb76,	// (0x0006d3e7) list_single_cale_day_pane_fp_t_ParamLimits

0xfb76,	// (0x0006d3e7) list_single_cale_day_pane_fp_t

0x4d88,	// (0x000625f9) list_empty_pane_fp_g1_ParamLimits

0x4d88,	// (0x000625f9) list_empty_pane_fp_g1

0xeed8,	// (0x0006c749) list_empty_pane_fp_t1

0xeee6,	// (0x0006c757) list_empty_pane_fp_t2

0x0001,

0xfb7d,	// (0x0006d3ee) list_empty_pane_fp_t

0x4d88,	// (0x000625f9) list_single_heading_pane_fp_g1_ParamLimits

0x4d88,	// (0x000625f9) list_single_heading_pane_fp_g1

0xd065,	// (0x0006a8d6) list_single_heading_pane_fp_g2_ParamLimits

0xd065,	// (0x0006a8d6) list_single_heading_pane_fp_g2

0x4d94,	// (0x00062605) list_single_heading_pane_fp_g3_ParamLimits

0x4d94,	// (0x00062605) list_single_heading_pane_fp_g3

0x0002,

0xfb82,	// (0x0006d3f3) list_single_heading_pane_fp_g_ParamLimits

0xfb82,	// (0x0006d3f3) list_single_heading_pane_fp_g

0xeef4,	// (0x0006c765) list_single_heading_pane_fp_t1_ParamLimits

0xeef4,	// (0x0006c765) list_single_heading_pane_fp_t1

0xef06,	// (0x0006c777) list_single_heading_pane_fp_t2_ParamLimits

0xef06,	// (0x0006c777) list_single_heading_pane_fp_t2

0x0001,

0xfb89,	// (0x0006d3fa) list_single_heading_pane_fp_t_ParamLimits

0xfb89,	// (0x0006d3fa) list_single_heading_pane_fp_t

0x9cba,	// (0x0006752b) aid_size_cell_fast

0x71c9,	// (0x00064a3a) soft_indicator_pane_cp1_t1

0x9cc3,	// (0x00067534) cell_app_pane_cp2_ParamLimits

0x9cc3,	// (0x00067534) cell_app_pane_cp2

0x0b7d,	// (0x0005e3ee) fep_hwr_candidate_drop_down_list_pane

0x0d55,	// (0x0005e5c6) fep_hwr_candidate_pane_g3_ParamLimits

0x0d55,	// (0x0005e5c6) fep_hwr_candidate_pane_g3

0xced0,	// (0x0006a741) fep_hwr_candidate_pane_g4_ParamLimits

0xced0,	// (0x0006a741) fep_hwr_candidate_pane_g4

0x0002,

0xfaf8,	// (0x0006d369) fep_hwr_candidate_pane_g_ParamLimits

0xfaf8,	// (0x0006d369) fep_hwr_candidate_pane_g

0x4869,	// (0x000620da) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4869,	// (0x000620da) fep_vkb_candidate_drop_down_list_pane

0x4c6c,	// (0x000624dd) fep_vkb_candidate_pane_g3

0x4c74,	// (0x000624e5) fep_vkb_candidate_pane_g4

0x0002,

0xfb25,	// (0x0006d396) fep_vkb_candidate_pane_g

0x0dc0,	// (0x0005e631) cell_hwr_candidate_pane_g1_ParamLimits

0x0dce,	// (0x0005e63f) cell_hwr_candidate_pane_g3_ParamLimits

0x0dce,	// (0x0005e63f) cell_hwr_candidate_pane_g3

0x4c8b,	// (0x000624fc) cell_hwr_candidate_pane_g4_ParamLimits

0x4c8b,	// (0x000624fc) cell_hwr_candidate_pane_g4

0x0002,

0xfb44,	// (0x0006d3b5) cell_hwr_candidate_pane_g_ParamLimits

0xfb44,	// (0x0006d3b5) cell_hwr_candidate_pane_g

0x4cac,	// (0x0006251d) cell_vkb_candidate_pane_g3_ParamLimits

0x4cac,	// (0x0006251d) cell_vkb_candidate_pane_g3

0x4cc7,	// (0x00062538) cell_vkb_candidate_pane_g4_ParamLimits

0x4cc7,	// (0x00062538) cell_vkb_candidate_pane_g4

0xd071,	// (0x0006a8e2) cell_app_pane_cp2_g1_ParamLimits

0xd071,	// (0x0006a8e2) cell_app_pane_cp2_g1

0x4dde,	// (0x0006264f) cell_app_pane_cp2_g2_ParamLimits

0x4dde,	// (0x0006264f) cell_app_pane_cp2_g2

0x0001,

0xfb8e,	// (0x0006d3ff) cell_app_pane_cp2_g_ParamLimits

0xfb8e,	// (0x0006d3ff) cell_app_pane_cp2_g

0x4dea,	// (0x0006265b) cell_app_pane_cp2_t1_ParamLimits

0x4dea,	// (0x0006265b) cell_app_pane_cp2_t1

0x8017,	// (0x00065888) grid_highlight_pane_cp1_ParamLimits

0x8017,	// (0x00065888) grid_highlight_pane_cp1

0x0e0d,	// (0x0005e67e) cell_hwr_candidate_pane_cp1_ParamLimits

0x0e0d,	// (0x0005e67e) cell_hwr_candidate_pane_cp1

0x0dc0,	// (0x0005e631) fep_hwr_candidate_drop_down_list_pane_g1

0x0e2c,	// (0x0005e69d) fep_hwr_candidate_drop_down_list_pane_g2

0x0e39,	// (0x0005e6aa) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb93,	// (0x0006d404) fep_hwr_candidate_drop_down_list_pane_g

0x0e46,	// (0x0005e6b7) fep_hwr_candidate_drop_down_list_scroll_pane

0x0e4f,	// (0x0005e6c0) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0e4f,	// (0x0005e6c0) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x0e5c,	// (0x0005e6cd) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x0e5c,	// (0x0005e6cd) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x0e69,	// (0x0005e6da) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x0e69,	// (0x0005e6da) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x0e76,	// (0x0005e6e7) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0e76,	// (0x0005e6e7) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x0e91,	// (0x0005e702) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x0e91,	// (0x0005e702) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x0eac,	// (0x0005e71d) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x0eac,	// (0x0005e71d) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x0ec7,	// (0x0005e738) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x0ec7,	// (0x0005e738) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x0ee2,	// (0x0005e753) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x0ee2,	// (0x0005e753) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9a,	// (0x0006d40b) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9a,	// (0x0006d40b) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4dfc,	// (0x0006266d) cell_vkb_candidate_pane_cp1_ParamLimits

0x4dfc,	// (0x0006266d) cell_vkb_candidate_pane_cp1

0x4974,	// (0x000621e5) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4974,	// (0x000621e5) fep_vkb_candidate_drop_down_list_pane_g1

0x4e1c,	// (0x0006268d) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4e1c,	// (0x0006268d) fep_vkb_candidate_drop_down_list_pane_g2

0x4e29,	// (0x0006269a) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4e29,	// (0x0006269a) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbab,	// (0x0006d41c) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbab,	// (0x0006d41c) fep_vkb_candidate_drop_down_list_pane_g

0x4e36,	// (0x000626a7) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4e36,	// (0x000626a7) fep_vkb_candidate_drop_down_list_scroll_pane

0x4e43,	// (0x000626b4) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4e43,	// (0x000626b4) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4e50,	// (0x000626c1) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4e50,	// (0x000626c1) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4e5c,	// (0x000626cd) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4e5c,	// (0x000626cd) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4e68,	// (0x000626d9) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4e68,	// (0x000626d9) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4e89,	// (0x000626fa) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4e89,	// (0x000626fa) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4eaa,	// (0x0006271b) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4eaa,	// (0x0006271b) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4ecb,	// (0x0006273c) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4ecb,	// (0x0006273c) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4eec,	// (0x0006275d) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4eec,	// (0x0006275d) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb2,	// (0x0006d423) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb2,	// (0x0006d423) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x8fe4,	// (0x00066855) title_pane_g1_ParamLimits

0x8ff7,	// (0x00066868) title_pane_g2_ParamLimits

0xf529,	// (0x0006cd9a) title_pane_g_ParamLimits

0xc06a,	// (0x000698db) aid_call2_pane

0xc072,	// (0x000698e3) aid_call_pane

0xc07a,	// (0x000698eb) popup_clock_analogue_window_g1

0xc07a,	// (0x000698eb) popup_clock_analogue_window_g2

0xf228,	// (0x0006ca99) popup_clock_analogue_window_g3

0xf231,	// (0x0006caa2) popup_clock_analogue_window_g4

0x7064,	// (0x000648d5) popup_clock_analogue_window_g5

0x0004,

0xf6c9,	// (0x0006cf3a) popup_clock_analogue_window_g

0xf239,	// (0x0006caaa) popup_clock_analogue_window_t1

0xf247,	// (0x0006cab8) clock_digital_number_pane_ParamLimits

0xf247,	// (0x0006cab8) clock_digital_number_pane

0xf253,	// (0x0006cac4) clock_digital_number_pane_cp02_ParamLimits

0xf253,	// (0x0006cac4) clock_digital_number_pane_cp02

0xf25f,	// (0x0006cad0) clock_digital_number_pane_cp03_ParamLimits

0xf25f,	// (0x0006cad0) clock_digital_number_pane_cp03

0xf26b,	// (0x0006cadc) clock_digital_number_pane_cp04_ParamLimits

0xf26b,	// (0x0006cadc) clock_digital_number_pane_cp04

0xf277,	// (0x0006cae8) clock_digital_separator_pane_ParamLimits

0xf277,	// (0x0006cae8) clock_digital_separator_pane

0xf283,	// (0x0006caf4) popup_clock_digital_window_t1_ParamLimits

0xf283,	// (0x0006caf4) popup_clock_digital_window_t1

0x7064,	// (0x000648d5) clock_digital_number_pane_g1

0x7064,	// (0x000648d5) clock_digital_number_pane_g2

0x0001,

0xf6d4,	// (0x0006cf45) clock_digital_number_pane_g

0x7064,	// (0x000648d5) clock_digital_separator_pane_g1

0x7064,	// (0x000648d5) clock_digital_separator_pane_g2

0x0001,

0xf6d4,	// (0x0006cf45) clock_digital_separator_pane_g

0xab8d,	// (0x000683fe) aid_fill_nsta_ParamLimits

0xacc3,	// (0x00068534) indicator_nsta_pane_ParamLimits

0x04df,	// (0x0005dd50) popup_clock_analogue_window

0x04df,	// (0x0005dd50) popup_clock_digital_window

0xcc84,	// (0x0006a4f5) grid_indicator_nsta_pane_ParamLimits

0x4025,	// (0x00061896) clock_nsta_pane_t2

0x0001,

0xfa78,	// (0x0006d2e9) clock_nsta_pane_t

0xf209,	// (0x0006ca7a) aid_size_max_handle

0x9da1,	// (0x00067612) aid_size_min_handle

0xc4d8,	// (0x00069d49) editor_scroll_pane

0x4f07,	// (0x00062778) ex_editor_pane

0x8149,	// (0x000659ba) scroll_pane_cp13

0x7fbf,	// (0x00065830) scroll_pane_cp14

0xc0a9,	// (0x0006991a) scroll_pane_cp36

0x9e6b,	// (0x000676dc) list_single_graphic_hl_pane_cp2_ParamLimits

0x9e6b,	// (0x000676dc) list_single_graphic_hl_pane_cp2

0xb579,	// (0x00068dea) list_single_graphic_hl_pane_ParamLimits

0xb579,	// (0x00068dea) list_single_graphic_hl_pane

0xb667,	// (0x00068ed8) aid_size_min_hl_cp1

0x4f0f,	// (0x00062780) list_highlight_pane_cp34_ParamLimits

0x4f0f,	// (0x00062780) list_highlight_pane_cp34

0x4f20,	// (0x00062791) list_single_graphic_hl_pane_g1_ParamLimits

0x4f20,	// (0x00062791) list_single_graphic_hl_pane_g1

0xb670,	// (0x00068ee1) list_single_graphic_hl_pane_g2_ParamLimits

0xb670,	// (0x00068ee1) list_single_graphic_hl_pane_g2

0xb670,	// (0x00068ee1) list_single_graphic_hl_pane_g3_ParamLimits

0xb670,	// (0x00068ee1) list_single_graphic_hl_pane_g3

0xc463,	// (0x00069cd4) list_single_graphic_hl_pane_g4_ParamLimits

0xc463,	// (0x00069cd4) list_single_graphic_hl_pane_g4

0xd08f,	// (0x0006a900) list_single_graphic_hl_pane_g5_ParamLimits

0xd08f,	// (0x0006a900) list_single_graphic_hl_pane_g5

0x0004,

0xfbc3,	// (0x0006d434) list_single_graphic_hl_pane_g_ParamLimits

0xfbc3,	// (0x0006d434) list_single_graphic_hl_pane_g

0xb67c,	// (0x00068eed) list_single_graphic_hl_pane_t1_ParamLimits

0xb67c,	// (0x00068eed) list_single_graphic_hl_pane_t1

0x4f2d,	// (0x0006279e) aid_size_min_hl_cp2

0x4f36,	// (0x000627a7) list_highlight_pane_cp34_cp2_ParamLimits

0x4f36,	// (0x000627a7) list_highlight_pane_cp34_cp2

0x4f20,	// (0x00062791) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4f20,	// (0x00062791) list_single_graphic_hl_pane_g1_cp2

0x4f43,	// (0x000627b4) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4f43,	// (0x000627b4) list_single_graphic_hl_pane_g2_cp2

0xd0a3,	// (0x0006a914) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd0a3,	// (0x0006a914) list_single_graphic_hl_pane_g3_cp2

0xbf42,	// (0x000697b3) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xbf42,	// (0x000697b3) list_single_graphic_hl_pane_g4_cp2

0x4f5d,	// (0x000627ce) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4f5d,	// (0x000627ce) list_single_graphic_hl_pane_g5_cp2

0xa2ac,	// (0x00067b1d) control_pane_g4_ParamLimits

0xa2ac,	// (0x00067b1d) control_pane_g4

0x839a,	// (0x00065c0b) bg_popup_sub_pane_cp10_ParamLimits

0x470e,	// (0x00061f7f) list_choice_list_pane_ParamLimits

0x471d,	// (0x00061f8e) scroll_pane_cp23

0x71f4,	// (0x00064a65) bg_popup_preview_window_pane_cp02_ParamLimits

0x4d2c,	// (0x0006259d) list_preview_fixed_pane_ParamLimits

0x4d42,	// (0x000625b3) list_preview_fixed_pane_cp_ParamLimits

0x4d42,	// (0x000625b3) list_preview_fixed_pane_cp

0x4d4e,	// (0x000625bf) popup_preview_fixed_window_g1_ParamLimits

0x4d4e,	// (0x000625bf) popup_preview_fixed_window_g1

0x4d5a,	// (0x000625cb) popup_preview_fixed_window_g2_ParamLimits

0x4d5a,	// (0x000625cb) popup_preview_fixed_window_g2

0x0002,

0xfb4b,	// (0x0006d3bc) popup_preview_fixed_window_g_ParamLimits

0xfb4b,	// (0x0006d3bc) popup_preview_fixed_window_g

0xf17d,	// (0x0006c9ee) aid_navi_side_left_pane_ParamLimits

0xf192,	// (0x0006ca03) aid_navi_side_right_pane_ParamLimits

0xf1aa,	// (0x0006ca1b) navi_icon_pane_stacon_ParamLimits

0xf1be,	// (0x0006ca2f) navi_navi_pane_stacon_ParamLimits

0xf1aa,	// (0x0006ca1b) navi_text_pane_stacon_ParamLimits

0xe7c8,	// (0x0006c039) main_text_info_pane

0x4f87,	// (0x000627f8) listscroll_text_info_pane

0x4f8f,	// (0x00062800) list_text_info_pane_ParamLimits

0x4f8f,	// (0x00062800) list_text_info_pane

0x4f9e,	// (0x0006280f) scroll_pane_cp24_ParamLimits

0x4f9e,	// (0x0006280f) scroll_pane_cp24

0xd0b1,	// (0x0006a922) list_text_info_pane_t1_ParamLimits

0xd0b1,	// (0x0006a922) list_text_info_pane_t1

0xa454,	// (0x00067cc5) popup_fast_swap2_window_ParamLimits

0xa454,	// (0x00067cc5) popup_fast_swap2_window

0x4ff0,	// (0x00062861) aid_size_cell_fast2

0x705a,	// (0x000648cb) bg_popup_window_pane_cp17

0x23ad,	// (0x0005fc1e) heading_pane_cp2

0x23b5,	// (0x0005fc26) listscroll_fast2_pane

0x4ffa,	// (0x0006286b) grid_fast2_pane

0x5004,	// (0x00062875) listscroll_fast2_pane_g1

0x500c,	// (0x0006287d) listscroll_fast2_pane_g2

0x0001,

0xfbce,	// (0x0006d43f) listscroll_fast2_pane_g

0x8149,	// (0x000659ba) scroll_pane_cp26

0x5016,	// (0x00062887) cell_fast2_pane_ParamLimits

0x5016,	// (0x00062887) cell_fast2_pane

0x502b,	// (0x0006289c) cell_fast2_pane_g1

0x5034,	// (0x000628a5) cell_fast2_pane_g2

0x503d,	// (0x000628ae) cell_fast2_pane_g3

0x0002,

0xfbd3,	// (0x0006d444) cell_fast2_pane_g

0x735f,	// (0x00064bd0) grid_highlight_pane_cp9

0xf4cd,	// (0x0006cd3e) main_eswt_pane_ParamLimits

0xf4cd,	// (0x0006cd3e) main_eswt_pane

0x4fb3,	// (0x00062824) list_single_text_info_pane

0x5045,	// (0x000628b6) eswt_ctrl_button_pane

0x5045,	// (0x000628b6) eswt_ctrl_canvas_pane

0xd0cd,	// (0x0006a93e) eswt_ctrl_combo_pane

0x5045,	// (0x000628b6) eswt_ctrl_default_pane

0x5045,	// (0x000628b6) eswt_ctrl_label_pane

0x5055,	// (0x000628c6) eswt_ctrl_wait_pane

0xd0d5,	// (0x0006a946) eswt_shell_pane

0x705a,	// (0x000648cb) listscroll_eswt_app_pane

0x507d,	// (0x000628ee) popup_eswt_tasktip_window_ParamLimits

0x507d,	// (0x000628ee) popup_eswt_tasktip_window

0x1fba,	// (0x0005f82b) bg_popup_window_pane_cp18

0x508e,	// (0x000628ff) eswt_control_pane_g1_ParamLimits

0x508e,	// (0x000628ff) eswt_control_pane_g1

0x509b,	// (0x0006290c) eswt_control_pane_g2_ParamLimits

0x509b,	// (0x0006290c) eswt_control_pane_g2

0x50a8,	// (0x00062919) eswt_control_pane_g3_ParamLimits

0x50a8,	// (0x00062919) eswt_control_pane_g3

0x50b5,	// (0x00062926) eswt_control_pane_g4_ParamLimits

0x50b5,	// (0x00062926) eswt_control_pane_g4

0x0003,

0xfbda,	// (0x0006d44b) eswt_control_pane_g_ParamLimits

0xfbda,	// (0x0006d44b) eswt_control_pane_g

0x8017,	// (0x00065888) bg_button_pane_ParamLimits

0x8017,	// (0x00065888) bg_button_pane

0x7374,	// (0x00064be5) common_borders_pane_copy2_ParamLimits

0x7374,	// (0x00064be5) common_borders_pane_copy2

0x50c2,	// (0x00062933) control_button_pane_g1_ParamLimits

0x50c2,	// (0x00062933) control_button_pane_g1

0x50ce,	// (0x0006293f) control_button_pane_g2_ParamLimits

0x50ce,	// (0x0006293f) control_button_pane_g2

0x50da,	// (0x0006294b) control_button_pane_g3_ParamLimits

0x50da,	// (0x0006294b) control_button_pane_g3

0x0002,

0xfbe3,	// (0x0006d454) control_button_pane_g_ParamLimits

0xfbe3,	// (0x0006d454) control_button_pane_g

0x50ee,	// (0x0006295f) control_button_pane_t1

0x50fc,	// (0x0006296d) control_button_pane_t2

0x0001,

0xfbea,	// (0x0006d45b) control_button_pane_t

0x1f2e,	// (0x0005f79f) bg_button_pane_g1

0x1f3e,	// (0x0005f7af) bg_button_pane_g2

0x1f36,	// (0x0005f7a7) bg_button_pane_g3

0x1f4e,	// (0x0005f7bf) bg_button_pane_g4

0x1f46,	// (0x0005f7b7) bg_button_pane_g5

0x1f56,	// (0x0005f7c7) bg_button_pane_g6

0x1f5e,	// (0x0005f7cf) bg_button_pane_g7

0x1f6e,	// (0x0005f7df) bg_button_pane_g8

0x1f66,	// (0x0005f7d7) bg_button_pane_g9

0x0008,

0xf82b,	// (0x0006d09c) bg_button_pane_g

0x45f4,	// (0x00061e65) common_borders_pane_ParamLimits

0x45f4,	// (0x00061e65) common_borders_pane

0x508e,	// (0x000628ff) eswt_control_pane_g1_copy1_ParamLimits

0x508e,	// (0x000628ff) eswt_control_pane_g1_copy1

0x509b,	// (0x0006290c) eswt_control_pane_g2_copy1_ParamLimits

0x509b,	// (0x0006290c) eswt_control_pane_g2_copy1

0x50a8,	// (0x00062919) eswt_control_pane_g3_copy1_ParamLimits

0x50a8,	// (0x00062919) eswt_control_pane_g3_copy1

0x50b5,	// (0x00062926) eswt_control_pane_g4_copy1_ParamLimits

0x50b5,	// (0x00062926) eswt_control_pane_g4_copy1

0x4704,	// (0x00061f75) bg_eswt_ctrl_canvas_pane_g1

0x45f4,	// (0x00061e65) common_borders_pane_cp2_ParamLimits

0x45f4,	// (0x00061e65) common_borders_pane_cp2

0x45f4,	// (0x00061e65) common_borders_pane_cp3_ParamLimits

0x45f4,	// (0x00061e65) common_borders_pane_cp3

0x510a,	// (0x0006297b) separator_horizontal_pane

0x5112,	// (0x00062983) separator_vertical_pane

0x508e,	// (0x000628ff) eswt_control_pane_g1_copy2_ParamLimits

0x508e,	// (0x000628ff) eswt_control_pane_g1_copy2

0x509b,	// (0x0006290c) eswt_control_pane_g2_copy2_ParamLimits

0x509b,	// (0x0006290c) eswt_control_pane_g2_copy2

0x50a8,	// (0x00062919) eswt_control_pane_g3_copy2_ParamLimits

0x50a8,	// (0x00062919) eswt_control_pane_g3_copy2

0x50b5,	// (0x00062926) eswt_control_pane_g4_copy2_ParamLimits

0x50b5,	// (0x00062926) eswt_control_pane_g4_copy2

0x705a,	// (0x000648cb) common_borders_pane_cp4

0x511b,	// (0x0006298c) separator_horizontal_pane_g1

0x5124,	// (0x00062995) separator_horizontal_pane_g2

0x512d,	// (0x0006299e) separator_horizontal_pane_g3

0x0002,

0xfbef,	// (0x0006d460) separator_horizontal_pane_g

0x508e,	// (0x000628ff) eswt_control_pane_g1_copy3_ParamLimits

0x508e,	// (0x000628ff) eswt_control_pane_g1_copy3

0x509b,	// (0x0006290c) eswt_control_pane_g2_copy3_ParamLimits

0x509b,	// (0x0006290c) eswt_control_pane_g2_copy3

0x50a8,	// (0x00062919) eswt_control_pane_g3_copy3_ParamLimits

0x50a8,	// (0x00062919) eswt_control_pane_g3_copy3

0x50b5,	// (0x00062926) eswt_control_pane_g4_copy3_ParamLimits

0x50b5,	// (0x00062926) eswt_control_pane_g4_copy3

0x705a,	// (0x000648cb) common_borders_pane_cp5

0x5136,	// (0x000629a7) separator_vertical_pane_g1

0x513f,	// (0x000629b0) separator_vertical_pane_g2

0x5148,	// (0x000629b9) separator_vertical_pane_g3

0x0002,

0xfbf6,	// (0x0006d467) separator_vertical_pane_g

0x508e,	// (0x000628ff) eswt_control_pane_g1_copy4_ParamLimits

0x508e,	// (0x000628ff) eswt_control_pane_g1_copy4

0x509b,	// (0x0006290c) eswt_control_pane_g2_copy4_ParamLimits

0x509b,	// (0x0006290c) eswt_control_pane_g2_copy4

0x50a8,	// (0x00062919) eswt_control_pane_g3_copy4_ParamLimits

0x50a8,	// (0x00062919) eswt_control_pane_g3_copy4

0x50b5,	// (0x00062926) eswt_control_pane_g4_copy4_ParamLimits

0x50b5,	// (0x00062926) eswt_control_pane_g4_copy4

0xd0f5,	// (0x0006a966) eswt_ctrl_combo_button_pane

0xd0fd,	// (0x0006a96e) eswt_ctrl_input_pane

0xd105,	// (0x0006a976) popup_choice_list_window_cp70

0xd10d,	// (0x0006a97e) eswt_ctrl_input_pane_t1

0x705a,	// (0x000648cb) input_focus_pane_cp70

0x45f4,	// (0x00061e65) bg_button_pane_cp70_ParamLimits

0x45f4,	// (0x00061e65) bg_button_pane_cp70

0xd11b,	// (0x0006a98c) eswt_ctrl_combo_button_pane_g1

0x517f,	// (0x000629f0) wait_bar_pane_cp70

0x1fba,	// (0x0005f82b) bg_popup_window_pane_cp70_ParamLimits

0x1fba,	// (0x0005f82b) bg_popup_window_pane_cp70

0x5187,	// (0x000629f8) popup_eswt_tasktip_window_t1

0x519d,	// (0x00062a0e) wait_bar_pane_cp71_ParamLimits

0x519d,	// (0x00062a0e) wait_bar_pane_cp71

0x51a9,	// (0x00062a1a) grid_eswt_app_pane

0x8330,	// (0x00065ba1) scroll_pane_cp70

0xd123,	// (0x0006a994) cell_eswt_app_pane_ParamLimits

0xd123,	// (0x0006a994) cell_eswt_app_pane

0xd14d,	// (0x0006a9be) cell_eswt_app_pane_g1_ParamLimits

0xd14d,	// (0x0006a9be) cell_eswt_app_pane_g1

0xd17c,	// (0x0006a9ed) cell_eswt_app_pane_g2_ParamLimits

0xd17c,	// (0x0006a9ed) cell_eswt_app_pane_g2

0x0001,

0xfbfd,	// (0x0006d46e) cell_eswt_app_pane_g_ParamLimits

0xfbfd,	// (0x0006d46e) cell_eswt_app_pane_g

0xd1a0,	// (0x0006aa11) cell_eswt_app_pane_t1_ParamLimits

0xd1a0,	// (0x0006aa11) cell_eswt_app_pane_t1

0x5267,	// (0x00062ad8) grid_highlight_pane_cp70_ParamLimits

0x5267,	// (0x00062ad8) grid_highlight_pane_cp70

0xc3de,	// (0x00069c4f) set_content_pane_g1

0xa23e,	// (0x00067aaf) status_small_volume_pane

0xb692,	// (0x00068f03) status_small_volume_pane_g1

0xb69a,	// (0x00068f0b) volume_small2_pane

0xb6a3,	// (0x00068f14) volume_small2_pane_g1

0xb6ac,	// (0x00068f1d) volume_small2_pane_g2

0xb6b5,	// (0x00068f26) volume_small2_pane_g3

0xb6be,	// (0x00068f2f) volume_small2_pane_g4

0xb6c7,	// (0x00068f38) volume_small2_pane_g5

0xb6d0,	// (0x00068f41) volume_small2_pane_g6

0xb6d9,	// (0x00068f4a) volume_small2_pane_g7

0xb6e2,	// (0x00068f53) volume_small2_pane_g8

0xb6eb,	// (0x00068f5c) volume_small2_pane_g9

0xb6f4,	// (0x00068f65) volume_small2_pane_g10

0x0009,

0xfc02,	// (0x0006d473) volume_small2_pane_g

0x4abc,	// (0x0006232d) fep_vkb_top_text_pane_g1_ParamLimits

0xd001,	// (0x0006a872) fep_vkb_top_text_pane_t1_ParamLimits

0x4d66,	// (0x000625d7) popup_preview_fixed_window_g3_ParamLimits

0x4d66,	// (0x000625d7) popup_preview_fixed_window_g3

0xaacb,	// (0x0006833c) popup_toolbar_trans_pane

0xc921,	// (0x0006a192) aid_height_set_list_ParamLimits

0x3309,	// (0x00060b7a) aid_size_parent_ParamLimits

0x839a,	// (0x00065c0b) list_highlight_pane_cp2_ParamLimits

0xc3de,	// (0x00069c4f) set_content_pane_g1_ParamLimits

0xca89,	// (0x0006a2fa) list_single_image_pane_ParamLimits

0xca89,	// (0x0006a2fa) list_single_image_pane

0xd1d2,	// (0x0006aa43) aid_size_cell_image_ParamLimits

0xd1d2,	// (0x0006aa43) aid_size_cell_image

0xd1df,	// (0x0006aa50) grid_single_image_pane_ParamLimits

0xd1df,	// (0x0006aa50) grid_single_image_pane

0xd065,	// (0x0006a8d6) list_single_image_pane_g1_ParamLimits

0xd065,	// (0x0006a8d6) list_single_image_pane_g1

0x4d94,	// (0x00062605) list_single_image_pane_g2_ParamLimits

0x4d94,	// (0x00062605) list_single_image_pane_g2

0x0001,

0xfc17,	// (0x0006d488) list_single_image_pane_g_ParamLimits

0xfc17,	// (0x0006d488) list_single_image_pane_g

0x528c,	// (0x00062afd) list_single_image_pane_t1_ParamLimits

0x528c,	// (0x00062afd) list_single_image_pane_t1

0xd1eb,	// (0x0006aa5c) cell_image_list_pane_ParamLimits

0xd1eb,	// (0x0006aa5c) cell_image_list_pane

0xd1ff,	// (0x0006aa70) cell_image_list_pane_g1

0xd208,	// (0x0006aa79) cell_image_list_pane_g2

0x0001,

0xfc1c,	// (0x0006d48d) cell_image_list_pane_g

0xd211,	// (0x0006aa82) aid_size_cell_tb_trans_pane

0x8017,	// (0x00065888) bg_tb_trans_pane

0xd223,	// (0x0006aa94) grid_tb_trans_pane

0x1f2e,	// (0x0005f79f) bg_tb_trans_pane_g1

0x1f3e,	// (0x0005f7af) bg_tb_trans_pane_g2

0x1f36,	// (0x0005f7a7) bg_tb_trans_pane_g3

0x1f4e,	// (0x0005f7bf) bg_tb_trans_pane_g4

0x1f46,	// (0x0005f7b7) bg_tb_trans_pane_g5

0x1f6e,	// (0x0005f7df) bg_tb_trans_pane_g6

0x1f66,	// (0x0005f7d7) bg_tb_trans_pane_g7

0x1f56,	// (0x0005f7c7) bg_tb_trans_pane_g8

0x1f5e,	// (0x0005f7cf) bg_tb_trans_pane_g9

0x0008,

0xfc21,	// (0x0006d492) bg_tb_trans_pane_g

0xd237,	// (0x0006aaa8) cell_toolbar_trans_pane_ParamLimits

0xd237,	// (0x0006aaa8) cell_toolbar_trans_pane

0x4704,	// (0x00061f75) cell_toolbar_trans_pane_g1

0xcd4d,	// (0x0006a5be) list_form2_midp_pane_t1

0xcd5b,	// (0x0006a5cc) list_form2_midp_pane_t2

0x0001,

0xfabe,	// (0x0006d32f) list_form2_midp_pane_t

0x4216,	// (0x00061a87) scroll_pane_cp51_ParamLimits

0x43d2,	// (0x00061c43) form2_midp_wait_pane_g1

0x43db,	// (0x00061c4c) form2_midp_wait_pane_g2

0x43e4,	// (0x00061c55) form2_midp_wait_pane_g3

0x0002,

0xfad3,	// (0x0006d344) form2_midp_wait_pane_g

0x70bc,	// (0x0006492d) list_highlight_pane_cp21_ParamLimits

0x442c,	// (0x00061c9d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x443b,	// (0x00061cac) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x34d9,	// (0x00060d4a) list_single_2graphic_im_pane_ParamLimits

0x34d9,	// (0x00060d4a) list_single_2graphic_im_pane

0xd25d,	// (0x0006aace) list_single_2graphic_im_pane_g1_ParamLimits

0xd25d,	// (0x0006aace) list_single_2graphic_im_pane_g1

0xd26e,	// (0x0006aadf) list_single_2graphic_im_pane_g2_ParamLimits

0xd26e,	// (0x0006aadf) list_single_2graphic_im_pane_g2

0xd27a,	// (0x0006aaeb) list_single_2graphic_im_pane_g3_ParamLimits

0xd27a,	// (0x0006aaeb) list_single_2graphic_im_pane_g3

0x0003,

0xfc34,	// (0x0006d4a5) list_single_2graphic_im_pane_g_ParamLimits

0xfc34,	// (0x0006d4a5) list_single_2graphic_im_pane_g

0xd28e,	// (0x0006aaff) list_single_2graphic_im_pane_t1_ParamLimits

0xd28e,	// (0x0006aaff) list_single_2graphic_im_pane_t1

0x4d72,	// (0x000625e3) list_single_graphic_2heading_pane_fp_ParamLimits

0x4d72,	// (0x000625e3) list_single_graphic_2heading_pane_fp

0xedfe,	// (0x0006c66f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xedfe,	// (0x0006c66f) list_single_graphic_2heading_pane_fp_g1

0x4d88,	// (0x000625f9) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4d88,	// (0x000625f9) list_single_graphic_2heading_pane_fp_g2

0xd065,	// (0x0006a8d6) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd065,	// (0x0006a8d6) list_single_graphic_2heading_pane_fp_g3

0x4d94,	// (0x00062605) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4d94,	// (0x00062605) list_single_graphic_2heading_pane_fp_g4

0x4da8,	// (0x00062619) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4da8,	// (0x00062619) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb5b,	// (0x0006d3cc) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb5b,	// (0x0006d3cc) list_single_graphic_2heading_pane_fp_g

0xef1c,	// (0x0006c78d) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xef1c,	// (0x0006c78d) list_single_graphic_2heading_pane_fp_t1

0xee36,	// (0x0006c6a7) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xee36,	// (0x0006c6a7) list_single_graphic_2heading_pane_fp_t2

0xef32,	// (0x0006c7a3) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xef32,	// (0x0006c7a3) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3d,	// (0x0006d4ae) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3d,	// (0x0006d4ae) list_single_graphic_2heading_pane_fp_t

0x4790,	// (0x00062001) fep_hwr_write_pane_g5_ParamLimits

0x4790,	// (0x00062001) fep_hwr_write_pane_g5

0x479c,	// (0x0006200d) fep_hwr_write_pane_g6_ParamLimits

0x479c,	// (0x0006200d) fep_hwr_write_pane_g6

0xd0d5,	// (0x0006a946) eswt_shell_pane_ParamLimits

0x1fba,	// (0x0005f82b) bg_popup_window_pane_cp18_ParamLimits

0x3251,	// (0x00060ac2) heading_pane_cp70

0x5187,	// (0x000629f8) popup_eswt_tasktip_window_t1_ParamLimits

0xabe8,	// (0x00068459) aid_touch_tab_arrow_left

0xabfe,	// (0x0006846f) aid_touch_tab_arrow_right

0x900f,	// (0x00066880) title_pane_g3_ParamLimits

0x900f,	// (0x00066880) title_pane_g3

0x7fdf,	// (0x00065850) set_value_pane_g1

0xaacb,	// (0x0006833c) popup_toolbar_trans_pane_ParamLimits

0xd211,	// (0x0006aa82) aid_size_cell_tb_trans_pane_ParamLimits

0x8017,	// (0x00065888) bg_tb_trans_pane_ParamLimits

0xd223,	// (0x0006aa94) grid_tb_trans_pane_ParamLimits

0x71f4,	// (0x00064a65) cont_note_pane_ParamLimits

0x71f4,	// (0x00064a65) cont_note_pane

0x7374,	// (0x00064be5) cont_snote2_single_text_pane_ParamLimits

0x7374,	// (0x00064be5) cont_snote2_single_text_pane

0x7374,	// (0x00064be5) cont_snote2_single_graphic_pane_ParamLimits

0x7374,	// (0x00064be5) cont_snote2_single_graphic_pane

0x25d4,	// (0x0005fe45) cont_note_wait_pane_ParamLimits

0x25d4,	// (0x0005fe45) cont_note_wait_pane

0x25d4,	// (0x0005fe45) cont_note_image_pane_ParamLimits

0x25d4,	// (0x0005fe45) cont_note_image_pane

0x5382,	// (0x00062bf3) popup_note2_window_g1_ParamLimits

0x5382,	// (0x00062bf3) popup_note2_window_g1

0xd2cc,	// (0x0006ab3d) popup_note2_window_t1_ParamLimits

0xd2cc,	// (0x0006ab3d) popup_note2_window_t1

0xd311,	// (0x0006ab82) popup_note2_window_t2_ParamLimits

0xd311,	// (0x0006ab82) popup_note2_window_t2

0xd356,	// (0x0006abc7) popup_note2_window_t3_ParamLimits

0xd356,	// (0x0006abc7) popup_note2_window_t3

0x5482,	// (0x00062cf3) popup_note2_window_t4_ParamLimits

0x5482,	// (0x00062cf3) popup_note2_window_t4

0x7278,	// (0x00064ae9) popup_note2_window_t5_ParamLimits

0x7278,	// (0x00064ae9) popup_note2_window_t5

0x0004,

0xfc49,	// (0x0006d4ba) popup_note2_window_t_ParamLimits

0xfc49,	// (0x0006d4ba) popup_note2_window_t

0x54b1,	// (0x00062d22) popup_note2_image_window_g1_ParamLimits

0x54b1,	// (0x00062d22) popup_note2_image_window_g1

0xd39b,	// (0x0006ac0c) popup_note2_image_window_g2_ParamLimits

0xd39b,	// (0x0006ac0c) popup_note2_image_window_g2

0x0001,

0xfc54,	// (0x0006d4c5) popup_note2_image_window_g_ParamLimits

0xfc54,	// (0x0006d4c5) popup_note2_image_window_g

0x54cf,	// (0x00062d40) popup_note2_image_window_t1_ParamLimits

0x54cf,	// (0x00062d40) popup_note2_image_window_t1

0x54e7,	// (0x00062d58) popup_note2_image_window_t2_ParamLimits

0x54e7,	// (0x00062d58) popup_note2_image_window_t2

0x54ff,	// (0x00062d70) popup_note2_image_window_t3_ParamLimits

0x54ff,	// (0x00062d70) popup_note2_image_window_t3

0x0002,

0xfc59,	// (0x0006d4ca) popup_note2_image_window_t_ParamLimits

0xfc59,	// (0x0006d4ca) popup_note2_image_window_t

0x25e2,	// (0x0005fe53) popup_note2_wait_window_g1_ParamLimits

0x25e2,	// (0x0005fe53) popup_note2_wait_window_g1

0x25ee,	// (0x0005fe5f) popup_note2_wait_window_g2_ParamLimits

0x25ee,	// (0x0005fe5f) popup_note2_wait_window_g2

0x25fa,	// (0x0005fe6b) popup_note2_wait_window_g3_ParamLimits

0x25fa,	// (0x0005fe6b) popup_note2_wait_window_g3

0x0002,

0xf80d,	// (0x0006d07e) popup_note2_wait_window_g_ParamLimits

0xf80d,	// (0x0006d07e) popup_note2_wait_window_g

0x551b,	// (0x00062d8c) popup_note2_wait_window_t1_ParamLimits

0x551b,	// (0x00062d8c) popup_note2_wait_window_t1

0x5539,	// (0x00062daa) popup_note2_wait_window_t2_ParamLimits

0x5539,	// (0x00062daa) popup_note2_wait_window_t2

0x5557,	// (0x00062dc8) popup_note2_wait_window_t3_ParamLimits

0x5557,	// (0x00062dc8) popup_note2_wait_window_t3

0x5569,	// (0x00062dda) popup_note2_wait_window_t4_ParamLimits

0x5569,	// (0x00062dda) popup_note2_wait_window_t4

0x0003,

0xfc60,	// (0x0006d4d1) popup_note2_wait_window_t_ParamLimits

0xfc60,	// (0x0006d4d1) popup_note2_wait_window_t

0x557b,	// (0x00062dec) wait_bar2_pane_ParamLimits

0x557b,	// (0x00062dec) wait_bar2_pane

0x5593,	// (0x00062e04) popup_snote2_single_text_window_g1_ParamLimits

0x5593,	// (0x00062e04) popup_snote2_single_text_window_g1

0x55bb,	// (0x00062e2c) popup_snote2_single_text_window_t1_ParamLimits

0x55bb,	// (0x00062e2c) popup_snote2_single_text_window_t1

0x5607,	// (0x00062e78) popup_snote2_single_text_window_t2_ParamLimits

0x5607,	// (0x00062e78) popup_snote2_single_text_window_t2

0x5653,	// (0x00062ec4) popup_snote2_single_text_window_t3_ParamLimits

0x5653,	// (0x00062ec4) popup_snote2_single_text_window_t3

0x5694,	// (0x00062f05) popup_snote2_single_text_window_t4_ParamLimits

0x5694,	// (0x00062f05) popup_snote2_single_text_window_t4

0x56ca,	// (0x00062f3b) popup_snote2_single_text_window_t5_ParamLimits

0x56ca,	// (0x00062f3b) popup_snote2_single_text_window_t5

0x0004,

0xfc69,	// (0x0006d4da) popup_snote2_single_text_window_t_ParamLimits

0xfc69,	// (0x0006d4da) popup_snote2_single_text_window_t

0xd3ad,	// (0x0006ac1e) popup_snote2_single_graphic_window_g1_ParamLimits

0xd3ad,	// (0x0006ac1e) popup_snote2_single_graphic_window_g1

0x571d,	// (0x00062f8e) popup_snote2_single_graphic_window_g2_ParamLimits

0x571d,	// (0x00062f8e) popup_snote2_single_graphic_window_g2

0x0001,

0xfc74,	// (0x0006d4e5) popup_snote2_single_graphic_window_g_ParamLimits

0xfc74,	// (0x0006d4e5) popup_snote2_single_graphic_window_g

0x5745,	// (0x00062fb6) popup_snote2_single_graphic_window_t1_ParamLimits

0x5745,	// (0x00062fb6) popup_snote2_single_graphic_window_t1

0x5791,	// (0x00063002) popup_snote2_single_graphic_window_t2_ParamLimits

0x5791,	// (0x00063002) popup_snote2_single_graphic_window_t2

0x5653,	// (0x00062ec4) popup_snote2_single_graphic_window_t3_ParamLimits

0x5653,	// (0x00062ec4) popup_snote2_single_graphic_window_t3

0x5694,	// (0x00062f05) popup_snote2_single_graphic_window_t4_ParamLimits

0x5694,	// (0x00062f05) popup_snote2_single_graphic_window_t4

0x56ca,	// (0x00062f3b) popup_snote2_single_graphic_window_t5_ParamLimits

0x56ca,	// (0x00062f3b) popup_snote2_single_graphic_window_t5

0x0004,

0xfc79,	// (0x0006d4ea) popup_snote2_single_graphic_window_t_ParamLimits

0xfc79,	// (0x0006d4ea) popup_snote2_single_graphic_window_t

0x40d3,	// (0x00061944) clock_nsta_pane_cp2_t1

0x40d3,	// (0x00061944) clock_nsta_pane_cp2_t2

0x0001,

0xfa94,	// (0x0006d305) clock_nsta_pane_cp2_t

0xe8f7,	// (0x0006c168) form_field_data_wide_pane_g1_ParamLimits

0x8025,	// (0x00065896) form_field_data_wide_pane_g2_ParamLimits

0x8025,	// (0x00065896) form_field_data_wide_pane_g2

0x8031,	// (0x000658a2) form_field_data_wide_pane_g3_ParamLimits

0x8031,	// (0x000658a2) form_field_data_wide_pane_g3

0x0002,

0xf64c,	// (0x0006cebd) form_field_data_wide_pane_g_ParamLimits

0xf64c,	// (0x0006cebd) form_field_data_wide_pane_g

0xcc6e,	// (0x0006a4df) grid_touch_3_pane_ParamLimits

0xcc6e,	// (0x0006a4df) grid_touch_3_pane

0xd3d5,	// (0x0006ac46) cell_touch_3_pane_ParamLimits

0xd3d5,	// (0x0006ac46) cell_touch_3_pane

0x4704,	// (0x00061f75) cell_touch_3_pane_g1

0x4704,	// (0x00061f75) cell_touch_3_pane_g2

0x0001,

0xfb19,	// (0x0006d38a) cell_touch_3_pane_g

0x72aa,	// (0x00064b1b) cont_query_data_pane

0x72b2,	// (0x00064b23) cont_query_data_pane_cp1

0x580b,	// (0x0006307c) button_value_adjust_pane_cp7

0x5813,	// (0x00063084) query_popup_pane_cp3

0xc0db,	// (0x0006994c) bg_popup_sub_pane_cp22_ParamLimits

0x9f0a,	// (0x0006777b) navi_navi_volume_pane_cp2

0x9f19,	// (0x0006778a) popup_side_volume_key_window_g2

0x9f28,	// (0x00067799) popup_side_volume_key_window_g3

0x0002,

0xf6e2,	// (0x0006cf53) popup_side_volume_key_window_g

0x9f37,	// (0x000677a8) popup_side_volume_key_window_t2

0x0001,

0xf6e9,	// (0x0006cf5a) popup_side_volume_key_window_t

0xa088,	// (0x000678f9) popup_side_volume_key_window_ParamLimits

0x97bb,	// (0x0006702c) list_double_graphic_pane_g4_ParamLimits

0x97bb,	// (0x0006702c) list_double_graphic_pane_g4

0xca75,	// (0x0006a2e6) list_single_2heading_msg_pane_ParamLimits

0xca75,	// (0x0006a2e6) list_single_2heading_msg_pane

0xd41e,	// (0x0006ac8f) list_single_2heading_msg_pane_g1_ParamLimits

0xd41e,	// (0x0006ac8f) list_single_2heading_msg_pane_g1

0xd42a,	// (0x0006ac9b) list_single_2heading_msg_pane_g2_ParamLimits

0xd42a,	// (0x0006ac9b) list_single_2heading_msg_pane_g2

0xd43d,	// (0x0006acae) list_single_2heading_msg_pane_g3_ParamLimits

0xd43d,	// (0x0006acae) list_single_2heading_msg_pane_g3

0xd449,	// (0x0006acba) list_single_2heading_msg_pane_g4_ParamLimits

0xd449,	// (0x0006acba) list_single_2heading_msg_pane_g4

0x0003,

0xfc84,	// (0x0006d4f5) list_single_2heading_msg_pane_g_ParamLimits

0xfc84,	// (0x0006d4f5) list_single_2heading_msg_pane_g

0xb6fd,	// (0x00068f6e) list_single_2heading_msg_pane_t1_ParamLimits

0xb6fd,	// (0x00068f6e) list_single_2heading_msg_pane_t1

0xb725,	// (0x00068f96) list_single_2heading_msg_pane_t2_ParamLimits

0xb725,	// (0x00068f96) list_single_2heading_msg_pane_t2

0xb790,	// (0x00069001) list_single_2heading_msg_pane_t3_ParamLimits

0xb790,	// (0x00069001) list_single_2heading_msg_pane_t3

0xef52,	// (0x0006c7c3) list_single_2heading_msg_pane_t4_ParamLimits

0xef52,	// (0x0006c7c3) list_single_2heading_msg_pane_t4

0x0003,

0xfc8d,	// (0x0006d4fe) list_single_2heading_msg_pane_t_ParamLimits

0xfc8d,	// (0x0006d4fe) list_single_2heading_msg_pane_t

0x7078,	// (0x000648e9) title_pane_g4_ParamLimits

0x7078,	// (0x000648e9) title_pane_g4

0xe9a3,	// (0x0006c214) title_pane_stacon_g3_ParamLimits

0xe9a3,	// (0x0006c214) title_pane_stacon_g3

0x5345,	// (0x00062bb6) list_single_2graphic_im_pane_g4_ParamLimits

0x5345,	// (0x00062bb6) list_single_2graphic_im_pane_g4

0xc7ce,	// (0x0006a03f) popup_side_volume_key_window_cp

0x3885,	// (0x000610f6) main_idle_act2_pane_t1

0x057c,	// (0x0005dded) toolbar_button_pane_g10

0x961b,	// (0x00066e8c) popup_toolbar_window_cp1

0x40c4,	// (0x00061935) clock_nsta_pane_cp_t1

0x40c4,	// (0x00061935) clock_nsta_pane_cp_t2

0x0001,

0xfa8f,	// (0x0006d300) clock_nsta_pane_cp_t

0x9f0a,	// (0x0006777b) navi_navi_volume_pane_cp2_ParamLimits

0xf2a2,	// (0x0006cb13) popup_side_volume_key_window_g1_ParamLimits

0x9f19,	// (0x0006778a) popup_side_volume_key_window_g2_ParamLimits

0x9f28,	// (0x00067799) popup_side_volume_key_window_g3_ParamLimits

0xf6e2,	// (0x0006cf53) popup_side_volume_key_window_g_ParamLimits

0x0b69,	// (0x0005e3da) fep_hwr_aid_pane

0x0c10,	// (0x0005e481) bg_fep_hwr_top_pane_g4_ParamLimits

0x4760,	// (0x00061fd1) fep_hwr_top_pane_g1_ParamLimits

0x4772,	// (0x00061fe3) fep_hwr_top_pane_g2_ParamLimits

0x0c30,	// (0x0005e4a1) fep_hwr_top_pane_g3_ParamLimits

0xfae4,	// (0x0006d355) fep_hwr_top_pane_g_ParamLimits

0x0c45,	// (0x0005e4b6) fep_hwr_top_text_pane_ParamLimits

0x2dde,	// (0x0006064f) aid_touch_tab_arrow_arrow_2

0x2de7,	// (0x00060658) aid_touch_tab_arrow_left_2

0x0b7d,	// (0x0005e3ee) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0bb4,	// (0x0005e425) fep_hwr_prediction_pane

0x48cb,	// (0x0006213c) fep_vkb_prediction_pane

0xcfe1,	// (0x0006a852) fep_vkb_side_pane_g3_ParamLimits

0xcfe1,	// (0x0006a852) fep_vkb_side_pane_g3

0x0dc0,	// (0x0005e631) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x0e2c,	// (0x0005e69d) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0e39,	// (0x0005e6aa) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb93,	// (0x0006d404) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1043,	// (0x0005e8b4) fep_hwr_prediction_pane_g1

0x104d,	// (0x0005e8be) fep_hwr_prediction_pane_g2

0x1055,	// (0x0005e8c6) fep_hwr_prediction_pane_g3

0x105d,	// (0x0005e8ce) fep_hwr_prediction_pane_g4

0x0003,

0xfc96,	// (0x0006d507) fep_hwr_prediction_pane_g

0x5838,	// (0x000630a9) fep_vkb_prediction_pane_g1

0x5842,	// (0x000630b3) fep_vkb_prediction_pane_g2

0x584a,	// (0x000630bb) fep_vkb_prediction_pane_g3

0x5852,	// (0x000630c3) fep_vkb_prediction_pane_g4

0x0003,

0xfc9f,	// (0x0006d510) fep_vkb_prediction_pane_g

0xb4cb,	// (0x00068d3c) slider_set_pane_g3

0xb4df,	// (0x00068d50) slider_set_pane_g4

0xb4f7,	// (0x00068d68) slider_set_pane_g5

0xb4cb,	// (0x00068d3c) slider_set_pane_g6

0xb50d,	// (0x00068d7e) slider_set_pane_g7

0x346a,	// (0x00060cdb) slider_form_pane_g3

0x3473,	// (0x00060ce4) slider_form_pane_g4

0x347b,	// (0x00060cec) slider_form_pane_g5

0x346a,	// (0x00060cdb) slider_form_pane_g6

0xca6c,	// (0x0006a2dd) slider_form_pane_g7

0x3b31,	// (0x000613a2) slider_set_pane_vc_g3

0x3b3a,	// (0x000613ab) slider_set_pane_vc_g4

0x3b43,	// (0x000613b4) slider_set_pane_vc_g5

0x3b31,	// (0x000613a2) slider_set_pane_vc_g6

0x3b4c,	// (0x000613bd) slider_set_pane_vc_g7

0x3d82,	// (0x000615f3) slider_form_pane_vc_g1

0x3d8b,	// (0x000615fc) slider_form_pane_vc_g2

0x3d94,	// (0x00061605) slider_form_pane_vc_g3

0x3d82,	// (0x000615f3) slider_form_pane_vc_g4

0x3d9d,	// (0x0006160e) slider_form_pane_vc_g5

0x0004,

0xfa61,	// (0x0006d2d2) slider_form_pane_vc_g

0xe7c8,	// (0x0006c039) main_idle_act3_pane

0x585a,	// (0x000630cb) ai3_links_pane

0xd461,	// (0x0006acd2) popup_ai3_data_window_ParamLimits

0xd461,	// (0x0006acd2) popup_ai3_data_window

0x705a,	// (0x000648cb) grid_ai3_links_pane

0xd479,	// (0x0006acea) cell_ai3_links_pane_ParamLimits

0xd479,	// (0x0006acea) cell_ai3_links_pane

0x5893,	// (0x00063104) bg_popup_sub_pane_cp11

0x58a0,	// (0x00063111) cell_ai3_links_pane_g1

0x705a,	// (0x000648cb) bg_popup_sub_pane_cp12

0x58c5,	// (0x00063136) heading_ai3_data_pane

0x58cd,	// (0x0006313e) list_ai3_gene_pane

0x58d9,	// (0x0006314a) popup_ai3_data_window_g1

0x58e1,	// (0x00063152) heading_ai3_data_pane_g1

0x58e9,	// (0x0006315a) heading_ai3_data_pane_t1

0xd493,	// (0x0006ad04) list_double_ai3_gene_pane_ParamLimits

0xd493,	// (0x0006ad04) list_double_ai3_gene_pane

0x5904,	// (0x00063175) list_single_ai3_gene_pane_ParamLimits

0x5904,	// (0x00063175) list_single_ai3_gene_pane

0x45f4,	// (0x00061e65) list_highlight_pane_cp7_ParamLimits

0x45f4,	// (0x00061e65) list_highlight_pane_cp7

0x5911,	// (0x00063182) list_single_a13_gene_pane_t1_ParamLimits

0x5911,	// (0x00063182) list_single_a13_gene_pane_t1

0x5928,	// (0x00063199) list_single_ai3_gene_pane_g1

0x5931,	// (0x000631a2) list_single_ai3_gene_pane_g2

0x0001,

0xfca8,	// (0x0006d519) list_single_ai3_gene_pane_g

0x5939,	// (0x000631aa) list_double_ai3_gene_pane_g1_ParamLimits

0x5939,	// (0x000631aa) list_double_ai3_gene_pane_g1

0xd4a0,	// (0x0006ad11) list_double_ai3_gene_pane_t1_ParamLimits

0xd4a0,	// (0x0006ad11) list_double_ai3_gene_pane_t1

0x5961,	// (0x000631d2) list_double_ai3_gene_pane_t2_ParamLimits

0x5961,	// (0x000631d2) list_double_ai3_gene_pane_t2

0x5976,	// (0x000631e7) list_double_ai3_gene_pane_t3_ParamLimits

0x5976,	// (0x000631e7) list_double_ai3_gene_pane_t3

0x0002,

0xfcad,	// (0x0006d51e) list_double_ai3_gene_pane_t_ParamLimits

0xfcad,	// (0x0006d51e) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xef48,	// (0x0006c7b9) aid_size_min_col_2

0xd408,	// (0x0006ac79) aid_size_min_msg_ParamLimits

0xd408,	// (0x0006ac79) aid_size_min_msg

0xcff5,	// (0x0006a866) fep_vkb_top_text_pane_g2_ParamLimits

0xcff5,	// (0x0006a866) fep_vkb_top_text_pane_g2

0x0001,

0xfb14,	// (0x0006d385) fep_vkb_top_text_pane_g_ParamLimits

0xfb14,	// (0x0006d385) fep_vkb_top_text_pane_g

0xe7c8,	// (0x0006c039) main_hc_apps_shell_pane

0x5993,	// (0x00063204) grid_hc_apps_pane_ParamLimits

0x5993,	// (0x00063204) grid_hc_apps_pane

0x59a5,	// (0x00063216) list_hc_apps_pane

0x59ad,	// (0x0006321e) scroll_pane_cp37_ParamLimits

0x59ad,	// (0x0006321e) scroll_pane_cp37

0xd4bc,	// (0x0006ad2d) cell_hc_apps_pane_ParamLimits

0xd4bc,	// (0x0006ad2d) cell_hc_apps_pane

0xd57a,	// (0x0006adeb) cell_hc_apps_pane_g1_ParamLimits

0xd57a,	// (0x0006adeb) cell_hc_apps_pane_g1

0x5a97,	// (0x00063308) cell_hc_apps_pane_g2_ParamLimits

0x5a97,	// (0x00063308) cell_hc_apps_pane_g2

0x5ab3,	// (0x00063324) cell_hc_apps_pane_g3_ParamLimits

0x5ab3,	// (0x00063324) cell_hc_apps_pane_g3

0x0002,

0xfcb4,	// (0x0006d525) cell_hc_apps_pane_g_ParamLimits

0xfcb4,	// (0x0006d525) cell_hc_apps_pane_g

0xd5a6,	// (0x0006ae17) cell_hc_apps_pane_t1_ParamLimits

0xd5a6,	// (0x0006ae17) cell_hc_apps_pane_t1

0x71f4,	// (0x00064a65) grid_highlight_pane_cp10_ParamLimits

0x71f4,	// (0x00064a65) grid_highlight_pane_cp10

0xd5e4,	// (0x0006ae55) list_single_hc_apps_pane_ParamLimits

0xd5e4,	// (0x0006ae55) list_single_hc_apps_pane

0xd614,	// (0x0006ae85) list_single_hc_apps_pane_g1

0xd62d,	// (0x0006ae9e) list_single_hc_apps_pane_g2

0x0001,

0xfcbb,	// (0x0006d52c) list_single_hc_apps_pane_g

0xd646,	// (0x0006aeb7) list_single_hc_apps_pane_g2_copy1

0xb7fe,	// (0x0006906f) list_single_hc_apps_pane_t1

0x70bc,	// (0x0006492d) bg_set_opt_pane_cp_ParamLimits

0x90e3,	// (0x00066954) setting_slider_pane_t1_ParamLimits

0x90fc,	// (0x0006696d) setting_slider_pane_t2_ParamLimits

0x9116,	// (0x00066987) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0006cdaa) setting_slider_pane_t_ParamLimits

0x912e,	// (0x0006699f) slider_set_pane_ParamLimits

0xf4a6,	// (0x0006cd17) control_pane_g5_ParamLimits

0xf4a6,	// (0x0006cd17) control_pane_g5

0xc8ee,	// (0x0006a15f) slider_set_pane_g1_ParamLimits

0x089e,	// (0x0005e10f) slider_set_pane_g2_ParamLimits

0xb4cb,	// (0x00068d3c) slider_set_pane_g3_ParamLimits

0xb4df,	// (0x00068d50) slider_set_pane_g4_ParamLimits

0xb4f7,	// (0x00068d68) slider_set_pane_g5_ParamLimits

0xb4cb,	// (0x00068d3c) slider_set_pane_g6_ParamLimits

0xb50d,	// (0x00068d7e) slider_set_pane_g7_ParamLimits

0xf929,	// (0x0006d19a) slider_set_pane_g_ParamLimits

0xc389,	// (0x00069bfa) navi_icon_text_pane_ParamLimits

0xabb1,	// (0x00068422) aid_fill_nsta_2_ParamLimits

0xabe8,	// (0x00068459) aid_touch_tab_arrow_left_ParamLimits

0xabfe,	// (0x0006846f) aid_touch_tab_arrow_right_ParamLimits

0xac99,	// (0x0006850a) clock_nsta_pane_ParamLimits

0x2dc0,	// (0x00060631) navi_icon_pane_g1_ParamLimits

0x2dcc,	// (0x0006063d) navi_text_pane_t1_ParamLimits

0x41d4,	// (0x00061a45) navi_icon_text_pane_g1_ParamLimits

0x41e0,	// (0x00061a51) navi_icon_text_pane_t1_ParamLimits

0xd614,	// (0x0006ae85) list_single_hc_apps_pane_g1_ParamLimits

0xd62d,	// (0x0006ae9e) list_single_hc_apps_pane_g2_ParamLimits

0xfcbb,	// (0x0006d52c) list_single_hc_apps_pane_g_ParamLimits

0xd646,	// (0x0006aeb7) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb7fe,	// (0x0006906f) list_single_hc_apps_pane_t1_ParamLimits

0x8f14,	// (0x00066785) popup_toolbar2_fixed_window_ParamLimits

0x8f14,	// (0x00066785) popup_toolbar2_fixed_window

0xaac1,	// (0x00068332) popup_toolbar2_float_window

0x705a,	// (0x000648cb) bg_popup_sub_pane_cp27

0x5b91,	// (0x00063402) grid_toolbar2_float_pane

0x705a,	// (0x000648cb) bg_popup_sub_pane_cp26

0x5b91,	// (0x00063402) grid_toolbar2_fixed_pane

0xd662,	// (0x0006aed3) cell_toolbar2_fixed_pane_ParamLimits

0xd662,	// (0x0006aed3) cell_toolbar2_fixed_pane

0xd67c,	// (0x0006aeed) cell_toolbar2_fixed_pane_g1

0x0018,	// (0x0005d889) toolbar2_fixed_button_pane

0x1f2e,	// (0x0005f79f) toolbar2_fixed_button_pane_g1

0x1f3e,	// (0x0005f7af) toolbar2_fixed_button_pane_g2

0x1f36,	// (0x0005f7a7) toolbar2_fixed_button_pane_g3

0x1f4e,	// (0x0005f7bf) toolbar2_fixed_button_pane_g4

0x1f46,	// (0x0005f7b7) toolbar2_fixed_button_pane_g5

0x1f56,	// (0x0005f7c7) toolbar2_fixed_button_pane_g6

0x1f5e,	// (0x0005f7cf) toolbar2_fixed_button_pane_g7

0x1f6e,	// (0x0005f7df) toolbar2_fixed_button_pane_g8

0x1f66,	// (0x0005f7d7) toolbar2_fixed_button_pane_g9

0x0008,

0xf82b,	// (0x0006d09c) toolbar2_fixed_button_pane_g

0x5bb2,	// (0x00063423) cell_toolbar2_float_pane_ParamLimits

0x5bb2,	// (0x00063423) cell_toolbar2_float_pane

0x5bc3,	// (0x00063434) cell_toolbar2_float_pane_g1

0x0018,	// (0x0005d889) toolbar2_fixed_button_pane_cp

0xcedd,	// (0x0006a74e) fep_vkb_accented_list_pane_ParamLimits

0xcedd,	// (0x0006a74e) fep_vkb_accented_list_pane

0x0da0,	// (0x0005e611) bg_popup_fep_shadow_pane_g9

0xc4d8,	// (0x00069d49) bg_popup_fep_shadow_pane_cp3

0x8130,	// (0x000659a1) list_accented_list_pane

0x5bcc,	// (0x0006343d) list_single_accented_list_pane_ParamLimits

0x5bcc,	// (0x0006343d) list_single_accented_list_pane

0xc4d8,	// (0x00069d49) list_highlight_pane_cp10

0x5bdd,	// (0x0006344e) list_single_accented_list_pane_t1

0xa9eb,	// (0x0006825c) popup_slider_window_ParamLimits

0xa9eb,	// (0x0006825c) popup_slider_window

0x581b,	// (0x0006308c) aid_indentation_list_msg

0xd76d,	// (0x0006afde) bg_popup_window_pane_cp19

0x5d03,	// (0x00063574) popup_slider_window_g1

0x5d1f,	// (0x00063590) popup_slider_window_g2

0x5d3b,	// (0x000635ac) popup_slider_window_g3

0x0005,

0xfcc0,	// (0x0006d531) popup_slider_window_g

0x5da1,	// (0x00063612) popup_slider_window_t1

0x5e15,	// (0x00063686) small_volume_slider_vertical_pane

0x4704,	// (0x00061f75) small_volume_slider_vertical_pane_g1

0x4704,	// (0x00061f75) small_volume_slider_vertical_pane_g2

0x5e31,	// (0x000636a2) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd2,	// (0x0006d543) small_volume_slider_vertical_pane_g

0x8e62,	// (0x000666d3) area_side_right_pane_ParamLimits

0x8e62,	// (0x000666d3) area_side_right_pane

0xb82c,	// (0x0006909d) aid_size_side_button_ParamLimits

0xb82c,	// (0x0006909d) aid_size_side_button

0xb845,	// (0x000690b6) grid_sctrl_middle_pane_ParamLimits

0xb845,	// (0x000690b6) grid_sctrl_middle_pane

0x10c6,	// (0x0005e937) sctrl_sk_bottom_pane

0x10d7,	// (0x0005e948) sctrl_sk_top_pane

0x10e9,	// (0x0005e95a) aid_touch_sctrl_top

0x10f6,	// (0x0005e967) bg_sctrl_sk_pane_ParamLimits

0x10f6,	// (0x0005e967) bg_sctrl_sk_pane

0x1104,	// (0x0005e975) sctrl_sk_top_pane_g1

0x1111,	// (0x0005e982) sctrl_sk_top_pane_t1

0x10e9,	// (0x0005e95a) aid_touch_sctrl_bottom

0x10f6,	// (0x0005e967) bg_sctrl_sk_pane_cp_ParamLimits

0x10f6,	// (0x0005e967) bg_sctrl_sk_pane_cp

0x112c,	// (0x0005e99d) sctrl_sk_bottom_pane_g1

0x1111,	// (0x0005e982) sctrl_sk_bottom_pane_t1

0xb85f,	// (0x000690d0) cell_sctrl_middle_pane_ParamLimits

0xb85f,	// (0x000690d0) cell_sctrl_middle_pane

0xb870,	// (0x000690e1) aid_touch_sctrl_middle_ParamLimits

0xb870,	// (0x000690e1) aid_touch_sctrl_middle

0xb87d,	// (0x000690ee) bg_sctrl_middle_pane_ParamLimits

0xb87d,	// (0x000690ee) bg_sctrl_middle_pane

0x179c,	// (0x0005f00d) cell_sctrl_middle_pane_g1_ParamLimits

0x179c,	// (0x0005f00d) cell_sctrl_middle_pane_g1

0xb88b,	// (0x000690fc) cell_sctrl_middle_pane_g2_ParamLimits

0xb88b,	// (0x000690fc) cell_sctrl_middle_pane_g2

0x0001,

0xfcde,	// (0x0006d54f) cell_sctrl_middle_pane_g_ParamLimits

0xfcde,	// (0x0006d54f) cell_sctrl_middle_pane_g

0x1f2e,	// (0x0005f79f) bg_sctrl_middle_pane_g1

0x1f36,	// (0x0005f7a7) bg_sctrl_middle_pane_g2

0x1f3e,	// (0x0005f7af) bg_sctrl_middle_pane_g3

0x1f46,	// (0x0005f7b7) bg_sctrl_middle_pane_g4

0x1f4e,	// (0x0005f7bf) bg_sctrl_middle_pane_g5

0x1f56,	// (0x0005f7c7) bg_sctrl_middle_pane_g6

0x1f5e,	// (0x0005f7cf) bg_sctrl_middle_pane_g7

0x1f66,	// (0x0005f7d7) bg_sctrl_middle_pane_g8

0x0007,

0xfce3,	// (0x0006d554) bg_sctrl_middle_pane_g

0x1f6e,	// (0x0005f7df) bg_sctrl_middle_pane_g8_copy1

0x1f2e,	// (0x0005f79f) bg_sctrl_sk_pane_g1

0x1f3e,	// (0x0005f7af) bg_sctrl_sk_pane_g2

0x1f36,	// (0x0005f7a7) bg_sctrl_sk_pane_g3

0x0008,

0xf82b,	// (0x0006d09c) bg_sctrl_sk_pane_g

0x7f59,	// (0x000657ca) aid_size_touch_scroll_bar

0x1f4e,	// (0x0005f7bf) bg_sctrl_sk_pane_g4

0x1f46,	// (0x0005f7b7) bg_sctrl_sk_pane_g5

0x1f56,	// (0x0005f7c7) bg_sctrl_sk_pane_g6

0x1f5e,	// (0x0005f7cf) bg_sctrl_sk_pane_g7

0x1f6e,	// (0x0005f7df) bg_sctrl_sk_pane_g8

0x1f66,	// (0x0005f7d7) bg_sctrl_sk_pane_g9

0xf4db,	// (0x0006cd4c) popup_fep_china_hwr2_fs_candidate_window

0xa4b1,	// (0x00067d22) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa4b1,	// (0x00067d22) popup_fep_china_hwr2_fs_control_window

0x0dc0,	// (0x0005e631) sctrl_sk_top_pane_g2

0x0001,

0xfcd9,	// (0x0006d54a) sctrl_sk_top_pane_g

0xd825,	// (0x0006b096) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd825,	// (0x0006b096) aid_fep_china_hwr2_fs_cell

0xd839,	// (0x0006b0aa) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd839,	// (0x0006b0aa) bg_popup_fep_shadow_pane_cp4

0xd850,	// (0x0006b0c1) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd850,	// (0x0006b0c1) bg_popup_fep_shadow_pane_cp5

0xd862,	// (0x0006b0d3) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd862,	// (0x0006b0d3) popup_fep_china_hwr2_fs_control_bar_grid

0xd876,	// (0x0006b0e7) popup_fep_china_hwr2_fs_control_funtion_grid

0x5e8d,	// (0x000636fe) aid_fep_china_hwr2_fs_candi_cell

0x705a,	// (0x000648cb) bg_popup_fep_shadow_pane_cp6

0x5e97,	// (0x00063708) popup_fep_china_hwr2_fs_candidate_grid

0xd87e,	// (0x0006b0ef) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd87e,	// (0x0006b0ef) cell_fep_china_hwr2_fs_funtion_grid

0x4704,	// (0x00061f75) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x5eb9,	// (0x0006372a) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x5eb9,	// (0x0006372a) cell_fep_china_hwr2_fs_funtion_grid_g1

0x5ec7,	// (0x00063738) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x5ec7,	// (0x00063738) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf4,	// (0x0006d565) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf4,	// (0x0006d565) cell_fep_china_hwr2_fs_funtion_grid_g

0xd896,	// (0x0006b107) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd896,	// (0x0006b107) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd8ab,	// (0x0006b11c) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd8ab,	// (0x0006b11c) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf9,	// (0x0006d56a) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf9,	// (0x0006d56a) cell_fep_china_hwr2_fs_funtion_grid_t

0x5f0e,	// (0x0006377f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5f16,	// (0x00063787) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5f1e,	// (0x0006378f) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcfe,	// (0x0006d56f) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5f26,	// (0x00063797) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5f26,	// (0x00063797) cell_fep_china_hwr2_fs_candidate_grid

0x5f3f,	// (0x000637b0) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5f47,	// (0x000637b8) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4704,	// (0x00061f75) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4704,	// (0x00061f75) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb19,	// (0x0006d38a) cell_fep_china_hwr2_fs_candidate_grid_g

0x5f4f,	// (0x000637c0) cell_fep_china_hwr2_fs_candidate_grid_t1

0x02fe,	// (0x0005db6f) clock_nsta_pane_cp_24_ParamLimits

0x02fe,	// (0x0005db6f) clock_nsta_pane_cp_24

0x037c,	// (0x0005dbed) indicator_nsta_pane_cp_24_ParamLimits

0x037c,	// (0x0005dbed) indicator_nsta_pane_cp_24

0x2c3c,	// (0x000604ad) heading_pane_g1

0x0001,

0xf890,	// (0x0006d101) heading_pane_g

0x36ce,	// (0x00060f3f) grid_sct_catagory_button_pane

0x36fe,	// (0x00060f6f) scroll_pane_cp5_ParamLimits

0x4222,	// (0x00061a93) button_value_adjust_pane_cp5_ParamLimits

0x4222,	// (0x00061a93) button_value_adjust_pane_cp5

0x4301,	// (0x00061b72) form2_midp_time_pane_ParamLimits

0x5f5d,	// (0x000637ce) cell_sct_catagory_button_pane_ParamLimits

0x5f5d,	// (0x000637ce) cell_sct_catagory_button_pane

0x45f4,	// (0x00061e65) bg_button_pane_cp01_ParamLimits

0x45f4,	// (0x00061e65) bg_button_pane_cp01

0x4704,	// (0x00061f75) cell_sct_catagory_button_pane_g1

0xaa64,	// (0x000682d5) popup_tb_extension_window

0xd8c7,	// (0x0006b138) aid_size_cell_ext_ParamLimits

0xd8c7,	// (0x0006b138) aid_size_cell_ext

0x7374,	// (0x00064be5) bg_tb_trans_pane_cp1_ParamLimits

0x7374,	// (0x00064be5) bg_tb_trans_pane_cp1

0xd8ed,	// (0x0006b15e) grid_tb_ext_pane_ParamLimits

0xd8ed,	// (0x0006b15e) grid_tb_ext_pane

0xd92c,	// (0x0006b19d) cell_tb_ext_pane_ParamLimits

0xd92c,	// (0x0006b19d) cell_tb_ext_pane

0xd954,	// (0x0006b1c5) cell_tb_ext_pane_g1_ParamLimits

0xd954,	// (0x0006b1c5) cell_tb_ext_pane_g1

0x5ff3,	// (0x00063864) cell_tb_ext_pane_t1

0x71f4,	// (0x00064a65) list_highlight_pane_cp11_ParamLimits

0x71f4,	// (0x00064a65) list_highlight_pane_cp11

0x8f29,	// (0x0006679a) popup_uni_indicator_window_ParamLimits

0x8f29,	// (0x0006679a) popup_uni_indicator_window

0x8017,	// (0x00065888) bg_popup_sub_pane_cp14

0xd971,	// (0x0006b1e2) list_uniindi_pane

0xd97d,	// (0x0006b1ee) uniindi_top_pane

0x71f4,	// (0x00064a65) bg_uniindi_top_pane

0xd99c,	// (0x0006b20d) uniindi_top_pane_g1

0xd9b2,	// (0x0006b223) uniindi_top_pane_g2

0x0003,

0xfd05,	// (0x0006d576) uniindi_top_pane_g

0xd9cf,	// (0x0006b240) uniindi_top_pane_t1

0x60a4,	// (0x00063915) list_single_uniindi_pane_ParamLimits

0x60a4,	// (0x00063915) list_single_uniindi_pane

0x4704,	// (0x00061f75) bg_uniindi_top_pane_g1

0x60b7,	// (0x00063928) list_single_uniindi_pane_g1

0x60ca,	// (0x0006393b) list_single_uniindi_pane_t1

0xe7c8,	// (0x0006c039) control_bg_pane

0x60ef,	// (0x00063960) bg_sctrl_sk_pane_cp1

0x60f8,	// (0x00063969) bg_sctrl_sk_pane_cp2

0x6101,	// (0x00063972) control_bg_pane_g1

0x610a,	// (0x0006397b) control_bg_pane_g2

0x0001,

0xfd0e,	// (0x0006d57f) control_bg_pane_g

0x4068,	// (0x000618d9) cell_indicator_nsta_pane_g1_ParamLimits

0xccab,	// (0x0006a51c) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7d,	// (0x0006d2ee) cell_indicator_nsta_pane_g_ParamLimits

0xedd4,	// (0x0006c645) form2_midp_time_pane_t1_ParamLimits

0x0b5b,	// (0x0005e3cc) main_idle_act4_pane_ParamLimits

0x0b5b,	// (0x0005e3cc) main_idle_act4_pane

0xaa64,	// (0x000682d5) popup_tb_extension_window_ParamLimits

0xd912,	// (0x0006b183) tb_ext_find_pane_ParamLimits

0xd912,	// (0x0006b183) tb_ext_find_pane

0x6113,	// (0x00063984) ai_gene_pane_1_cp1

0xc559,	// (0x00069dca) ai_gene_pane_2_cp1

0xd9f9,	// (0x0006b26a) list_single_idle_plugin_calendar_pane

0x6124,	// (0x00063995) list_single_idle_plugin_notification_pane

0x612d,	// (0x0006399e) list_single_idle_plugin_player_pane

0xda02,	// (0x0006b273) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda02,	// (0x0006b273) list_single_idle_plugin_shortcut_pane

0xda2a,	// (0x0006b29b) main_idle_act4_pane_t1

0xda41,	// (0x0006b2b2) main_idle_act4_pane_t2

0x0001,

0xfd13,	// (0x0006d584) main_idle_act4_pane_t

0xda58,	// (0x0006b2c9) middle_sk_idle_act4_pane_ParamLimits

0xda58,	// (0x0006b2c9) middle_sk_idle_act4_pane

0xda74,	// (0x0006b2e5) popup_clock_digital_analogue_window_cp2

0xdaa0,	// (0x0006b311) shortcut_wheel_idle_act4_pane_ParamLimits

0xdaa0,	// (0x0006b311) shortcut_wheel_idle_act4_pane

0x4704,	// (0x00061f75) shortcut_wheel_idle_act4_pane_g1

0x4704,	// (0x00061f75) shortcut_wheel_idle_act4_pane_g2

0x4704,	// (0x00061f75) shortcut_wheel_idle_act4_pane_g3

0x4704,	// (0x00061f75) shortcut_wheel_idle_act4_pane_g4

0x4704,	// (0x00061f75) shortcut_wheel_idle_act4_pane_g5

0x61c0,	// (0x00063a31) shortcut_wheel_idle_act4_pane_g6

0x61c8,	// (0x00063a39) shortcut_wheel_idle_act4_pane_g7

0x61d0,	// (0x00063a41) shortcut_wheel_idle_act4_pane_g8

0x61d8,	// (0x00063a49) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd18,	// (0x0006d589) shortcut_wheel_idle_act4_pane_g

0xdb1d,	// (0x0006b38e) middle_sk_idle_act4_pane_g1_ParamLimits

0xdb1d,	// (0x0006b38e) middle_sk_idle_act4_pane_g1

0xdb2b,	// (0x0006b39c) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb2b,	// (0x0006b39c) middle_sk_idle_act4_pane_g2

0x0001,

0xfd3b,	// (0x0006d5ac) middle_sk_idle_act4_pane_g_ParamLimits

0xfd3b,	// (0x0006d5ac) middle_sk_idle_act4_pane_g

0xdb43,	// (0x0006b3b4) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb43,	// (0x0006b3b4) middle_sk_idle_act4_pane_t1

0xdb72,	// (0x0006b3e3) grid_ai_shortcut_pane_ParamLimits

0xdb72,	// (0x0006b3e3) grid_ai_shortcut_pane

0xdb8f,	// (0x0006b400) list_highlight_pane_cp16_ParamLimits

0xdb8f,	// (0x0006b400) list_highlight_pane_cp16

0xdb9c,	// (0x0006b40d) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdb9c,	// (0x0006b40d) list_single_idle_plugin_shortcut_pane_g1

0xdba8,	// (0x0006b419) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdba8,	// (0x0006b419) list_single_idle_plugin_shortcut_pane_g2

0xdbc4,	// (0x0006b435) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbc4,	// (0x0006b435) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd40,	// (0x0006d5b1) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd40,	// (0x0006d5b1) list_single_idle_plugin_shortcut_pane_g

0xdbd9,	// (0x0006b44a) cell_ai_shortcut_pane_ParamLimits

0xdbd9,	// (0x0006b44a) cell_ai_shortcut_pane

0xdbef,	// (0x0006b460) cell_ai_shortcut_pane_g1_ParamLimits

0xdbef,	// (0x0006b460) cell_ai_shortcut_pane_g1

0x6113,	// (0x00063984) ai_gene_pane_1_cp2

0x6308,	// (0x00063b79) ai_gene_pane_2_cp2

0x6310,	// (0x00063b81) list_highlight_pane_cp15

0xdc11,	// (0x0006b482) list_single_idle_plugin_calendar_pane_g1

0x6310,	// (0x00063b81) list_highlight_pane_cp17

0x6321,	// (0x00063b92) list_single_idle_plugin_calendar_pane_g1_copy1

0x6329,	// (0x00063b9a) list_single_idle_plugin_player_pane_g1

0x3927,	// (0x00061198) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd47,	// (0x0006d5b8) list_single_idle_plugin_player_pane_g

0x6331,	// (0x00063ba2) list_single_idle_plugin_player_pane_t1

0x633f,	// (0x00063bb0) list_single_idle_plugin_player_pane_t2

0x634d,	// (0x00063bbe) list_single_idle_plugin_player_pane_t3

0x635b,	// (0x00063bcc) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4c,	// (0x0006d5bd) list_single_idle_plugin_player_pane_t

0x6369,	// (0x00063bda) wait_bar_pane_cp15

0x6371,	// (0x00063be2) grid_ai_notification_pane

0x3927,	// (0x00061198) list_single_idle_plugin_notification_pane_g1

0xdc19,	// (0x0006b48a) cell_ai_notification_pane_ParamLimits

0xdc19,	// (0x0006b48a) cell_ai_notification_pane

0x6387,	// (0x00063bf8) cell_ai_notification_pane_g1

0x638f,	// (0x00063c00) cell_ai_notification_pane_t1

0xdc26,	// (0x0006b497) tb_ext_find_button_pane

0xdc2e,	// (0x0006b49f) tb_ext_find_pane_g1

0xdc36,	// (0x0006b4a7) tb_ext_find_pane_t1

0xc07a,	// (0x000698eb) tb_ext_find_button_pane_g1

0xdc44,	// (0x0006b4b5) tb_ext_find_button_pane_g2

0x0001,

0xfd55,	// (0x0006d5c6) tb_ext_find_button_pane_g

0xda2a,	// (0x0006b29b) main_idle_act4_pane_t1_ParamLimits

0xda41,	// (0x0006b2b2) main_idle_act4_pane_t2_ParamLimits

0xfd13,	// (0x0006d584) main_idle_act4_pane_t_ParamLimits

0xda74,	// (0x0006b2e5) popup_clock_digital_analogue_window_cp2_ParamLimits

0xda8c,	// (0x0006b2fd) sat_plugin_idle_act4_pane_ParamLimits

0xda8c,	// (0x0006b2fd) sat_plugin_idle_act4_pane

0xdc4d,	// (0x0006b4be) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdc4d,	// (0x0006b4be) sat_plugin_idle_act4_pane_t1

0xdc65,	// (0x0006b4d6) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdc65,	// (0x0006b4d6) sat_plugin_idle_act4_pane_t2

0xdc7d,	// (0x0006b4ee) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdc7d,	// (0x0006b4ee) sat_plugin_idle_act4_pane_t3

0xdc95,	// (0x0006b506) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdc95,	// (0x0006b506) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd5a,	// (0x0006d5cb) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd5a,	// (0x0006d5cb) sat_plugin_idle_act4_pane_t

0x8ea4,	// (0x00066715) popup_battery_window_ParamLimits

0x8ea4,	// (0x00066715) popup_battery_window

0x71f4,	// (0x00064a65) bg_popup_sub_pane_cp25_ParamLimits

0x71f4,	// (0x00064a65) bg_popup_sub_pane_cp25

0x6410,	// (0x00063c81) popup_battery_window_g1_ParamLimits

0x6410,	// (0x00063c81) popup_battery_window_g1

0x641c,	// (0x00063c8d) popup_battery_window_t1_ParamLimits

0x641c,	// (0x00063c8d) popup_battery_window_t1

0x642e,	// (0x00063c9f) popup_battery_window_t2_ParamLimits

0x642e,	// (0x00063c9f) popup_battery_window_t2

0x0001,

0xfd63,	// (0x0006d5d4) popup_battery_window_t_ParamLimits

0xfd63,	// (0x0006d5d4) popup_battery_window_t

0xa0e7,	// (0x00067958) midp_canvas_pane_ParamLimits

0xa159,	// (0x000679ca) midp_keypad_pane_ParamLimits

0xa159,	// (0x000679ca) midp_keypad_pane

0x839a,	// (0x00065c0b) main_midp_pane_ParamLimits

0xccb8,	// (0x0006a529) signal_pane_g2_cp_ParamLimits

0xdcad,	// (0x0006b51e) aid_size_cell_midp_keypad_ParamLimits

0xdcad,	// (0x0006b51e) aid_size_cell_midp_keypad

0xdccb,	// (0x0006b53c) midp_keyp_game_grid_pane_ParamLimits

0xdccb,	// (0x0006b53c) midp_keyp_game_grid_pane

0xdcf2,	// (0x0006b563) midp_keyp_rocker_pane_ParamLimits

0xdcf2,	// (0x0006b563) midp_keyp_rocker_pane

0xdd43,	// (0x0006b5b4) midp_keyp_sk_left_pane_ParamLimits

0xdd43,	// (0x0006b5b4) midp_keyp_sk_left_pane

0xdd97,	// (0x0006b608) midp_keyp_sk_right_pane_ParamLimits

0xdd97,	// (0x0006b608) midp_keyp_sk_right_pane

0x705a,	// (0x000648cb) bg_button_pane_cp03

0xddeb,	// (0x0006b65c) midp_keyp_sk_left_pane_g1

0x705a,	// (0x000648cb) bg_button_pane_cp04

0xddeb,	// (0x0006b65c) midp_keyp_sk_right_pane_g1

0x4704,	// (0x00061f75) midp_keyp_rocker_pane_g1

0xddf4,	// (0x0006b665) keyp_game_cell_pane_ParamLimits

0xddf4,	// (0x0006b665) keyp_game_cell_pane

0x705a,	// (0x000648cb) bg_button_pane_cp02

0xde18,	// (0x0006b689) keyp_game_cell_pane_g1

0x8ec4,	// (0x00066735) popup_fep_vkb2_window_ParamLimits

0x8ec4,	// (0x00066735) popup_fep_vkb2_window

0xb897,	// (0x00069108) aid_size_cell_vkb2_ParamLimits

0xb897,	// (0x00069108) aid_size_cell_vkb2

0xb8cb,	// (0x0006913c) popup_fep_vkb2_window_g1_ParamLimits

0xb8cb,	// (0x0006913c) popup_fep_vkb2_window_g1

0xb91b,	// (0x0006918c) vkb2_area_bottom_pane_ParamLimits

0xb91b,	// (0x0006918c) vkb2_area_bottom_pane

0xb96f,	// (0x000691e0) vkb2_area_keypad_pane_ParamLimits

0xb96f,	// (0x000691e0) vkb2_area_keypad_pane

0xb9b7,	// (0x00069228) vkb2_area_top_pane_ParamLimits

0xb9b7,	// (0x00069228) vkb2_area_top_pane

0xba43,	// (0x000692b4) vkb2_top_entry_pane_ParamLimits

0xba43,	// (0x000692b4) vkb2_top_entry_pane

0xba70,	// (0x000692e1) vkb2_top_grid_left_pane_ParamLimits

0xba70,	// (0x000692e1) vkb2_top_grid_left_pane

0xba91,	// (0x00069302) vkb2_top_grid_right_pane_ParamLimits

0xba91,	// (0x00069302) vkb2_top_grid_right_pane

0x1397,	// (0x0005ec08) vkb2_cell_keypad_pane_ParamLimits

0x1397,	// (0x0005ec08) vkb2_cell_keypad_pane

0xbad9,	// (0x0006934a) vkb2_area_bottom_grid_pane_ParamLimits

0xbad9,	// (0x0006934a) vkb2_area_bottom_grid_pane

0xbb03,	// (0x00069374) vkb2_area_bottom_pane_g1_ParamLimits

0xbb03,	// (0x00069374) vkb2_area_bottom_pane_g1

0xbb29,	// (0x0006939a) vkb2_area_bottom_pane_g2_ParamLimits

0xbb29,	// (0x0006939a) vkb2_area_bottom_pane_g2

0xbb5a,	// (0x000693cb) vkb2_area_bottom_pane_g3_ParamLimits

0xbb5a,	// (0x000693cb) vkb2_area_bottom_pane_g3

0x0002,

0xfd68,	// (0x0006d5d9) vkb2_area_bottom_pane_g_ParamLimits

0xfd68,	// (0x0006d5d9) vkb2_area_bottom_pane_g

0x1541,	// (0x0005edb2) vkb2_top_cell_left_pane_ParamLimits

0x1541,	// (0x0005edb2) vkb2_top_cell_left_pane

0xde21,	// (0x0006b692) vkb2_top_entry_pane_g1_ParamLimits

0xde21,	// (0x0006b692) vkb2_top_entry_pane_g1

0xde2f,	// (0x0006b6a0) vkb2_top_entry_pane_t1_ParamLimits

0xde2f,	// (0x0006b6a0) vkb2_top_entry_pane_t1

0x65df,	// (0x00063e50) vkb2_top_entry_pane_t2_ParamLimits

0x65df,	// (0x00063e50) vkb2_top_entry_pane_t2

0x6611,	// (0x00063e82) vkb2_top_entry_pane_t3_ParamLimits

0x6611,	// (0x00063e82) vkb2_top_entry_pane_t3

0x0002,

0xfd6f,	// (0x0006d5e0) vkb2_top_entry_pane_t_ParamLimits

0xfd6f,	// (0x0006d5e0) vkb2_top_entry_pane_t

0xbbc4,	// (0x00069435) vkb2_top_grid_right_pane_g1_ParamLimits

0xbbc4,	// (0x00069435) vkb2_top_grid_right_pane_g1

0x15a4,	// (0x0005ee15) vkb2_top_grid_right_pane_g2_ParamLimits

0x15a4,	// (0x0005ee15) vkb2_top_grid_right_pane_g2

0x15bc,	// (0x0005ee2d) vkb2_top_grid_right_pane_g3_ParamLimits

0x15bc,	// (0x0005ee2d) vkb2_top_grid_right_pane_g3

0xbbda,	// (0x0006944b) vkb2_top_grid_right_pane_g4_ParamLimits

0xbbda,	// (0x0006944b) vkb2_top_grid_right_pane_g4

0x0003,

0xfd76,	// (0x0006d5e7) vkb2_top_grid_right_pane_g_ParamLimits

0xfd76,	// (0x0006d5e7) vkb2_top_grid_right_pane_g

0x15ea,	// (0x0005ee5b) vkb2_top_cell_left_pane_g1

0x1601,	// (0x0005ee72) vkb2_cell_keypad_pane_g1_ParamLimits

0x1601,	// (0x0005ee72) vkb2_cell_keypad_pane_g1

0x6635,	// (0x00063ea6) vkb2_cell_keypad_pane_t1_ParamLimits

0x6635,	// (0x00063ea6) vkb2_cell_keypad_pane_t1

0x160f,	// (0x0005ee80) vkb2_cell_bottom_grid_pane_ParamLimits

0x160f,	// (0x0005ee80) vkb2_cell_bottom_grid_pane

0x1648,	// (0x0005eeb9) vkb2_cell_bottom_grid_pane_g1

0xdac1,	// (0x0006b332) aid_call2_pane_cp02

0xdac9,	// (0x0006b33a) aid_call_pane_cp02

0xdad1,	// (0x0006b342) clock_digital_number_pane_cp10

0xdad9,	// (0x0006b34a) clock_digital_number_pane_cp11

0xdae1,	// (0x0006b352) clock_digital_number_pane_cp12

0xdae9,	// (0x0006b35a) clock_digital_number_pane_cp13

0xdaf1,	// (0x0006b362) clock_digital_separator_pane_cp10

0xc07a,	// (0x000698eb) popup_clock_digital_analogue_window_cp2_g1

0xc07a,	// (0x000698eb) popup_clock_digital_analogue_window_cp2_g2

0xdaf9,	// (0x0006b36a) popup_clock_digital_analogue_window_cp2_g3

0xc07a,	// (0x000698eb) popup_clock_digital_analogue_window_cp2_g4

0xdaf9,	// (0x0006b36a) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd2b,	// (0x0006d59c) popup_clock_digital_analogue_window_cp2_g

0xdb01,	// (0x0006b372) popup_clock_digital_analogue_window_cp2_t1

0xdb0f,	// (0x0006b380) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd36,	// (0x0006d5a7) popup_clock_digital_analogue_window_cp2_t

0x4704,	// (0x00061f75) clock_digital_number_pane_cp10_g1

0x4704,	// (0x00061f75) clock_digital_number_pane_cp10_g2

0x0001,

0xfb19,	// (0x0006d38a) clock_digital_number_pane_cp10_g

0x4704,	// (0x00061f75) clock_digital_separator_pane_cp10_g1

0x4704,	// (0x00061f75) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb19,	// (0x0006d38a) clock_digital_separator_pane_cp10_g

0xd9be,	// (0x0006b22f) uniindi_top_pane_g3

0x606d,	// (0x000638de) uniindi_top_pane_g4

0x1422,	// (0x0005ec93) vkb2_row_keypad_pane_ParamLimits

0x1422,	// (0x0005ec93) vkb2_row_keypad_pane

0x1668,	// (0x0005eed9) vkb2_cell_t_keypad_pane_ParamLimits

0x1668,	// (0x0005eed9) vkb2_cell_t_keypad_pane

0x1678,	// (0x0005eee9) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1678,	// (0x0005eee9) vkb2_cell_t_keypad_pane_cp08

0x168b,	// (0x0005eefc) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x168b,	// (0x0005eefc) vkb2_cell_t_keypad_pane_cp09

0x169f,	// (0x0005ef10) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x169f,	// (0x0005ef10) vkb2_cell_t_keypad_pane_cp01

0x16b0,	// (0x0005ef21) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x16b0,	// (0x0005ef21) vkb2_cell_t_keypad_pane_cp02

0x16c1,	// (0x0005ef32) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x16c1,	// (0x0005ef32) vkb2_cell_t_keypad_pane_cp03

0x16d2,	// (0x0005ef43) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x16d2,	// (0x0005ef43) vkb2_cell_t_keypad_pane_cp04

0x16e3,	// (0x0005ef54) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x16e3,	// (0x0005ef54) vkb2_cell_t_keypad_pane_cp05

0x16f4,	// (0x0005ef65) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x16f4,	// (0x0005ef65) vkb2_cell_t_keypad_pane_cp06

0x1705,	// (0x0005ef76) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1705,	// (0x0005ef76) vkb2_cell_t_keypad_pane_cp07

0x1716,	// (0x0005ef87) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1716,	// (0x0005ef87) vkb2_cell_t_keypad_pane_cp10

0x0dc0,	// (0x0005e631) vkb2_cell_t_keypad_pane_g1

0x664c,	// (0x00063ebd) vkb2_cell_t_keypad_pane_t1

0xe7c8,	// (0x0006c039) popup_grid_graphic2_window

0xde68,	// (0x0006b6d9) aid_size_cell_graphic2_ParamLimits

0xde68,	// (0x0006b6d9) aid_size_cell_graphic2

0xdea6,	// (0x0006b717) bg_popup_window_pane_cp21_ParamLimits

0xdea6,	// (0x0006b717) bg_popup_window_pane_cp21

0xdeb4,	// (0x0006b725) graphic2_pages_pane_ParamLimits

0xdeb4,	// (0x0006b725) graphic2_pages_pane

0xdf0a,	// (0x0006b77b) grid_graphic2_control_pane_ParamLimits

0xdf0a,	// (0x0006b77b) grid_graphic2_control_pane

0xdf52,	// (0x0006b7c3) grid_graphic2_pane_ParamLimits

0xdf52,	// (0x0006b7c3) grid_graphic2_pane

0xdfd9,	// (0x0006b84a) cell_graphic2_pane

0xe7c8,	// (0x0006c039) main_comp_mode_pane

0x58cd,	// (0x0006313e) list_ai3_gene_pane_ParamLimits

0xd76d,	// (0x0006afde) bg_popup_window_pane_cp19_ParamLimits

0x5ca7,	// (0x00063518) bg_touch_area_indi_pane_ParamLimits

0x5ca7,	// (0x00063518) bg_touch_area_indi_pane

0x5cbd,	// (0x0006352e) bg_touch_area_indi_pane_cp01_ParamLimits

0x5cbd,	// (0x0006352e) bg_touch_area_indi_pane_cp01

0x5cd3,	// (0x00063544) bg_touch_area_indi_pane_cp02_ParamLimits

0x5cd3,	// (0x00063544) bg_touch_area_indi_pane_cp02

0x5ce9,	// (0x0006355a) bg_touch_area_indi_pane_cp03_ParamLimits

0x5ce9,	// (0x0006355a) bg_touch_area_indi_pane_cp03

0x5d03,	// (0x00063574) popup_slider_window_g1_ParamLimits

0x5d1f,	// (0x00063590) popup_slider_window_g2_ParamLimits

0x5d3b,	// (0x000635ac) popup_slider_window_g3_ParamLimits

0xfcc0,	// (0x0006d531) popup_slider_window_g_ParamLimits

0x5da1,	// (0x00063612) popup_slider_window_t1_ParamLimits

0x5e15,	// (0x00063686) small_volume_slider_vertical_pane_ParamLimits

0xdfd9,	// (0x0006b84a) cell_graphic2_pane_ParamLimits

0xe034,	// (0x0006b8a5) bg_button_pane_cp10_ParamLimits

0xe034,	// (0x0006b8a5) bg_button_pane_cp10

0xe047,	// (0x0006b8b8) bg_button_pane_cp11_ParamLimits

0xe047,	// (0x0006b8b8) bg_button_pane_cp11

0xe05a,	// (0x0006b8cb) graphic2_pages_pane_g1_ParamLimits

0xe05a,	// (0x0006b8cb) graphic2_pages_pane_g1

0xe075,	// (0x0006b8e6) graphic2_pages_pane_g2_ParamLimits

0xe075,	// (0x0006b8e6) graphic2_pages_pane_g2

0x0001,

0xfd84,	// (0x0006d5f5) graphic2_pages_pane_g_ParamLimits

0xfd84,	// (0x0006d5f5) graphic2_pages_pane_g

0xe08d,	// (0x0006b8fe) graphic2_pages_pane_t1_ParamLimits

0xe08d,	// (0x0006b8fe) graphic2_pages_pane_t1

0xe0a5,	// (0x0006b916) cell_graphic2_control_pane_ParamLimits

0xe0a5,	// (0x0006b916) cell_graphic2_control_pane

0xe0d7,	// (0x0006b948) cell_graphic2_pane_g1_ParamLimits

0xe0d7,	// (0x0006b948) cell_graphic2_pane_g1

0xe0e4,	// (0x0006b955) cell_graphic2_pane_g2_ParamLimits

0xe0e4,	// (0x0006b955) cell_graphic2_pane_g2

0xced0,	// (0x0006a741) cell_graphic2_pane_g3_ParamLimits

0xced0,	// (0x0006a741) cell_graphic2_pane_g3

0xe0f1,	// (0x0006b962) cell_graphic2_pane_g4_ParamLimits

0xe0f1,	// (0x0006b962) cell_graphic2_pane_g4

0xe0fe,	// (0x0006b96f) cell_graphic2_pane_g5_ParamLimits

0xe0fe,	// (0x0006b96f) cell_graphic2_pane_g5

0x0004,

0xfd89,	// (0x0006d5fa) cell_graphic2_pane_g_ParamLimits

0xfd89,	// (0x0006d5fa) cell_graphic2_pane_g

0xe11b,	// (0x0006b98c) cell_graphic2_pane_t1_ParamLimits

0xe11b,	// (0x0006b98c) cell_graphic2_pane_t1

0x2c30,	// (0x000604a1) grid_highlight_pane_cp11_ParamLimits

0x2c30,	// (0x000604a1) grid_highlight_pane_cp11

0x71f4,	// (0x00064a65) bg_button_pane_cp05

0xe165,	// (0x0006b9d6) cell_graphic2_control_pane_g1

0x4704,	// (0x00061f75) bg_touch_area_indi_pane_g1

0x6925,	// (0x00064196) aid_cmod_rocker_key_size

0x692f,	// (0x000641a0) aid_cmode_itu_key_size

0x6939,	// (0x000641aa) main_cmode_video_pane

0x6943,	// (0x000641b4) main_comp_mode_itu_pane

0x694f,	// (0x000641c0) main_comp_mode_rocker_pane

0x695b,	// (0x000641cc) cell_cmode_rocker_pane_ParamLimits

0x695b,	// (0x000641cc) cell_cmode_rocker_pane

0x696d,	// (0x000641de) cell_cmode_itu_pane_ParamLimits

0x696d,	// (0x000641de) cell_cmode_itu_pane

0x8017,	// (0x00065888) bg_button_pane_cp06_ParamLimits

0x8017,	// (0x00065888) bg_button_pane_cp06

0x4974,	// (0x000621e5) cell_cmode_rocker_pane_g1_ParamLimits

0x4974,	// (0x000621e5) cell_cmode_rocker_pane_g1

0x5eb9,	// (0x0006372a) cell_cmode_rocker_pane_g2_ParamLimits

0x5eb9,	// (0x0006372a) cell_cmode_rocker_pane_g2

0x0001,

0xfd99,	// (0x0006d60a) cell_cmode_rocker_pane_g_ParamLimits

0xfd99,	// (0x0006d60a) cell_cmode_rocker_pane_g

0x705a,	// (0x000648cb) bg_button_pane_cp07

0x6982,	// (0x000641f3) cell_cmode_itu_pane_g1

0x698b,	// (0x000641fc) cell_cmode_itu_pane_t1

0x6999,	// (0x0006420a) cell_cmode_itu_pane_t2

0x0001,

0xfd9e,	// (0x0006d60f) cell_cmode_itu_pane_t

0x60df,	// (0x00063950) aid_touch_ctrl_left

0x60e7,	// (0x00063958) aid_touch_ctrl_right

0x705a,	// (0x000648cb) compa_mode_pane

0xe18b,	// (0x0006b9fc) aid_cmod_rocker_key_size_cp

0xe195,	// (0x0006ba06) aid_cmode_itu_key_size_cp

0x69bb,	// (0x0006422c) compa_mode_pane_g1

0x69c3,	// (0x00064234) compa_mode_pane_g2

0x69cb,	// (0x0006423c) compa_mode_pane_g3

0x0002,

0xfda3,	// (0x0006d614) compa_mode_pane_g

0xe19f,	// (0x0006ba10) main_comp_mode_itu_pane_cp

0xe1a7,	// (0x0006ba18) main_comp_mode_rocker_pane_cp

0xe1af,	// (0x0006ba20) cell_cmode_itu_pane_cp_ParamLimits

0xe1af,	// (0x0006ba20) cell_cmode_itu_pane_cp

0xe1c4,	// (0x0006ba35) cell_cmode_rocker_pane_cp_ParamLimits

0xe1c4,	// (0x0006ba35) cell_cmode_rocker_pane_cp

0x8017,	// (0x00065888) bg_button_pane_cp06_cp_ParamLimits

0x8017,	// (0x00065888) bg_button_pane_cp06_cp

0x4974,	// (0x000621e5) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4974,	// (0x000621e5) cell_cmode_rocker_pane_g1_cp

0x4704,	// (0x00061f75) cell_cmode_rocker_pane_g2_cp

0x705a,	// (0x000648cb) bg_button_pane_cp07_cp

0xe1d6,	// (0x0006ba47) cell_cmode_itu_pane_g1_cp

0xe1df,	// (0x0006ba50) cell_cmode_itu_pane_t1_cp

0xe1df,	// (0x0006ba50) cell_cmode_itu_pane_t2_cp

0xca62,	// (0x0006a2d3) settings_code_pane_cp2

0x70bc,	// (0x0006492d) bg_popup_window_pane_cp3_ParamLimits

0x730d,	// (0x00064b7e) heading_pane_cp3_ParamLimits

0x731c,	// (0x00064b8d) listscroll_popup_graphic_pane_ParamLimits

0x0b69,	// (0x0005e3da) fep_hwr_aid_pane_ParamLimits

0x10e9,	// (0x0005e95a) aid_touch_sctrl_top_ParamLimits

0x1104,	// (0x0005e975) sctrl_sk_top_pane_g1_ParamLimits

0x0dc0,	// (0x0005e631) sctrl_sk_top_pane_g2_ParamLimits

0xfcd9,	// (0x0006d54a) sctrl_sk_top_pane_g_ParamLimits

0x1111,	// (0x0005e982) sctrl_sk_top_pane_t1_ParamLimits

0x10e9,	// (0x0005e95a) aid_touch_sctrl_bottom_ParamLimits

0x1111,	// (0x0005e982) sctrl_sk_bottom_pane_t1_ParamLimits

0xd98a,	// (0x0006b1fb) aid_area_touch_clock

0xba03,	// (0x00069274) aid_vkb2_area_top_pane_cell_ParamLimits

0xba03,	// (0x00069274) aid_vkb2_area_top_pane_cell

0xbab2,	// (0x00069323) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbab2,	// (0x00069323) aid_vkb2_area_bottom_pane_cell

0x6597,	// (0x00063e08) popup_char_count_window

0x6a21,	// (0x00064292) popup_char_count_window_g1

0x6a2a,	// (0x0006429b) popup_char_count_window_g2

0x6a33,	// (0x000642a4) popup_char_count_window_g3

0x0002,

0xfdaa,	// (0x0006d61b) popup_char_count_window_g

0x6a3c,	// (0x000642ad) popup_char_count_window_t1

0x11b8,	// (0x0005ea29) popup_fep_char_preview_window_ParamLimits

0x11b8,	// (0x0005ea29) popup_fep_char_preview_window

0xba23,	// (0x00069294) vkb2_top_candi_pane_ParamLimits

0xba23,	// (0x00069294) vkb2_top_candi_pane

0xe1ed,	// (0x0006ba5e) cell_vkb2_top_candi_pane_ParamLimits

0xe1ed,	// (0x0006ba5e) cell_vkb2_top_candi_pane

0x172b,	// (0x0005ef9c) bg_popup_fep_char_preview_window_ParamLimits

0x172b,	// (0x0005ef9c) bg_popup_fep_char_preview_window

0x1739,	// (0x0005efaa) popup_fep_char_preview_window_t1_ParamLimits

0x1739,	// (0x0005efaa) popup_fep_char_preview_window_t1

0x6a94,	// (0x00064305) bg_popup_fep_char_preview_window_g1

0x6a9c,	// (0x0006430d) bg_popup_fep_char_preview_window_g2

0x6aa4,	// (0x00064315) bg_popup_fep_char_preview_window_g3

0x6aac,	// (0x0006431d) bg_popup_fep_char_preview_window_g4

0x6ab4,	// (0x00064325) bg_popup_fep_char_preview_window_g5

0x6abc,	// (0x0006432d) bg_popup_fep_char_preview_window_g6

0x6ac4,	// (0x00064335) bg_popup_fep_char_preview_window_g7

0x6acc,	// (0x0006433d) bg_popup_fep_char_preview_window_g8

0x6ad4,	// (0x00064345) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb1,	// (0x0006d622) bg_popup_fep_char_preview_window_g

0x0dc0,	// (0x0005e631) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0dc0,	// (0x0005e631) cell_vkb2_top_candi_pane_g1

0x0dce,	// (0x0005e63f) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0dce,	// (0x0005e63f) cell_vkb2_top_candi_pane_g2

0x4c8b,	// (0x000624fc) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4c8b,	// (0x000624fc) cell_vkb2_top_candi_pane_g3

0x177b,	// (0x0005efec) cell_vkb2_top_candi_pane_g4_ParamLimits

0x177b,	// (0x0005efec) cell_vkb2_top_candi_pane_g4

0x4e89,	// (0x000626fa) cell_vkb2_top_candi_pane_g5_ParamLimits

0x4e89,	// (0x000626fa) cell_vkb2_top_candi_pane_g5

0x179c,	// (0x0005f00d) cell_vkb2_top_candi_pane_g6_ParamLimits

0x179c,	// (0x0005f00d) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc6,	// (0x0006d637) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc6,	// (0x0006d637) cell_vkb2_top_candi_pane_g

0x17aa,	// (0x0005f01b) cell_vkb2_top_candi_pane_t1

0xb4b7,	// (0x00068d28) aid_size_touch_slider_mark_ParamLimits

0xb4b7,	// (0x00068d28) aid_size_touch_slider_mark

0xdef0,	// (0x0006b761) grid_graphic2_catg_pane_ParamLimits

0xdef0,	// (0x0006b761) grid_graphic2_catg_pane

0xdfac,	// (0x0006b81d) popup_grid_graphic2_window_t1_ParamLimits

0xdfac,	// (0x0006b81d) popup_grid_graphic2_window_t1

0xdfc2,	// (0x0006b833) popup_grid_graphic2_window_t2_ParamLimits

0xdfc2,	// (0x0006b833) popup_grid_graphic2_window_t2

0x0001,

0xfd7f,	// (0x0006d5f0) popup_grid_graphic2_window_t_ParamLimits

0xfd7f,	// (0x0006d5f0) popup_grid_graphic2_window_t

0x71f4,	// (0x00064a65) bg_button_pane_cp05_ParamLimits

0xe165,	// (0x0006b9d6) cell_graphic2_control_pane_g1_ParamLimits

0xe24d,	// (0x0006babe) cell_graphic2_catg_pane_ParamLimits

0xe24d,	// (0x0006babe) cell_graphic2_catg_pane

0x705a,	// (0x000648cb) bg_button_pane_cp12

0xe25f,	// (0x0006bad0) cell_graphic2_catg_pane_g1

0x5ff3,	// (0x00063864) cell_tb_ext_pane_t1_ParamLimits

0x1561,	// (0x0005edd2) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1561,	// (0x0005edd2) vkb2_top_cell_right_narrow_pane

0x1579,	// (0x0005edea) vkb2_top_cell_right_wide_pane_ParamLimits

0x1579,	// (0x0005edea) vkb2_top_cell_right_wide_pane

0x0b5b,	// (0x0005e3cc) bg_vkb2_func_pane_ParamLimits

0x0b5b,	// (0x0005e3cc) bg_vkb2_func_pane

0x15ea,	// (0x0005ee5b) vkb2_top_cell_left_pane_g1_ParamLimits

0x0b5b,	// (0x0005e3cc) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0b5b,	// (0x0005e3cc) bg_vkb2_fuc_pane_cp03

0x1648,	// (0x0005eeb9) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1f36,	// (0x0005f7a7) bg_vkb2_func_pane_g1

0x1f3e,	// (0x0005f7af) bg_vkb2_func_pane_g2

0x1f4e,	// (0x0005f7bf) bg_vkb2_func_pane_g3

0x1f46,	// (0x0005f7b7) bg_vkb2_func_pane_g4

0x1f56,	// (0x0005f7c7) bg_vkb2_func_pane_g5

0x1f5e,	// (0x0005f7cf) bg_vkb2_func_pane_g6

0x1f66,	// (0x0005f7d7) bg_vkb2_func_pane_g7

0x1f6e,	// (0x0005f7df) bg_vkb2_func_pane_g8

0x1f2e,	// (0x0005f79f) bg_vkb2_func_pane_g9

0x0008,

0xfdd3,	// (0x0006d644) bg_vkb2_func_pane_g

0x0b5b,	// (0x0005e3cc) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0b5b,	// (0x0005e3cc) bg_vkb2_fuc_pane_cp01

0x15ea,	// (0x0005ee5b) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x15ea,	// (0x0005ee5b) vkb2_top_cell_right_wide_pane_g1

0x0b5b,	// (0x0005e3cc) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0b5b,	// (0x0005e3cc) bg_vkb2_fuc_pane_cp02

0x17c9,	// (0x0005f03a) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x17c9,	// (0x0005f03a) vkb2_top_cell_right_narrow_pane_g1

0xd6af,	// (0x0006af20) aid_touch_area_decrease_ParamLimits

0xd6af,	// (0x0006af20) aid_touch_area_decrease

0xd6e9,	// (0x0006af5a) aid_touch_area_increase_ParamLimits

0xd6e9,	// (0x0006af5a) aid_touch_area_increase

0xd711,	// (0x0006af82) aid_touch_area_mute_ParamLimits

0xd711,	// (0x0006af82) aid_touch_area_mute

0xd739,	// (0x0006afaa) aid_touch_area_slider_ParamLimits

0xd739,	// (0x0006afaa) aid_touch_area_slider

0xd779,	// (0x0006afea) popup_slider_window_g4_ParamLimits

0xd779,	// (0x0006afea) popup_slider_window_g4

0xd7a1,	// (0x0006b012) popup_slider_window_g5_ParamLimits

0xd7a1,	// (0x0006b012) popup_slider_window_g5

0xd7d5,	// (0x0006b046) popup_slider_window_g6_ParamLimits

0xd7d5,	// (0x0006b046) popup_slider_window_g6

0x5dcf,	// (0x00063640) popup_slider_window_t2_ParamLimits

0x5dcf,	// (0x00063640) popup_slider_window_t2

0x0001,

0xfccd,	// (0x0006d53e) popup_slider_window_t_ParamLimits

0xfccd,	// (0x0006d53e) popup_slider_window_t

0xd7f1,	// (0x0006b062) slider_pane_ParamLimits

0xd7f1,	// (0x0006b062) slider_pane

0x6af7,	// (0x00064368) slider_pane_g1_ParamLimits

0x6af7,	// (0x00064368) slider_pane_g1

0x6b0b,	// (0x0006437c) slider_pane_g2_ParamLimits

0x6b0b,	// (0x0006437c) slider_pane_g2

0x6b21,	// (0x00064392) slider_pane_g3_ParamLimits

0x6b21,	// (0x00064392) slider_pane_g3

0x0003,

0xfde6,	// (0x0006d657) slider_pane_g_ParamLimits

0xfde6,	// (0x0006d657) slider_pane_g

0xaaac,	// (0x0006831d) popup_tb_float_extension_window_ParamLimits

0xaaac,	// (0x0006831d) popup_tb_float_extension_window

0x6b4d,	// (0x000643be) aid_size_cell_tb_float_ext

0x705a,	// (0x000648cb) bg_popup_sub_window_cp28

0xe268,	// (0x0006bad9) grid_tb_float_ext_pane

0xe272,	// (0x0006bae3) cell_tb_float_ext_pane_ParamLimits

0xe272,	// (0x0006bae3) cell_tb_float_ext_pane

0xe28c,	// (0x0006bafd) cell_tb_float_ext_pane_g1

0xe295,	// (0x0006bb06) grid_highlight_pane_cp12

0xb645,	// (0x00068eb6) cell_last_hwr_side_pane_ParamLimits

0xb645,	// (0x00068eb6) cell_last_hwr_side_pane

0x4704,	// (0x00061f75) cell_last_hwr_side_pane_g1

0x6b8f,	// (0x00064400) cell_last_hwr_side_pane_g2

0x0001,

0xfdef,	// (0x0006d660) cell_last_hwr_side_pane_g

0xbb8f,	// (0x00069400) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbb8f,	// (0x00069400) vkb2_area_bottom_space_btn_pane

0x0dc0,	// (0x0005e631) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x664c,	// (0x00063ebd) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x17aa,	// (0x0005f01b) cell_vkb2_top_candi_pane_t1_ParamLimits

0x17e9,	// (0x0005f05a) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x17e9,	// (0x0005f05a) vkb2_area_bottom_space_btn_pane_g1

0x1823,	// (0x0005f094) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1823,	// (0x0005f094) vkb2_area_bottom_space_btn_pane_g2

0x1859,	// (0x0005f0ca) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1859,	// (0x0005f0ca) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf4,	// (0x0006d665) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf4,	// (0x0006d665) vkb2_area_bottom_space_btn_pane_g

0x0c1e,	// (0x0005e48f) cel_fep_hwr_func_pane_ParamLimits

0x0c1e,	// (0x0005e48f) cel_fep_hwr_func_pane

0xb61a,	// (0x00068e8b) cell_hwr_side_button_pane_ParamLimits

0xb61a,	// (0x00068e8b) cell_hwr_side_button_pane

0xd98a,	// (0x0006b1fb) aid_area_touch_clock_ParamLimits

0x71f4,	// (0x00064a65) bg_uniindi_top_pane_ParamLimits

0xd99c,	// (0x0006b20d) uniindi_top_pane_g1_ParamLimits

0xd9b2,	// (0x0006b223) uniindi_top_pane_g2_ParamLimits

0xd9be,	// (0x0006b22f) uniindi_top_pane_g3_ParamLimits

0x606d,	// (0x000638de) uniindi_top_pane_g4_ParamLimits

0xfd05,	// (0x0006d576) uniindi_top_pane_g_ParamLimits

0xd9cf,	// (0x0006b240) uniindi_top_pane_t1_ParamLimits

0x71f4,	// (0x00064a65) bg_vkb2_func_pane_cp01_ParamLimits

0x71f4,	// (0x00064a65) bg_vkb2_func_pane_cp01

0x6b98,	// (0x00064409) cel_fep_hwr_func_pane_g1_ParamLimits

0x6b98,	// (0x00064409) cel_fep_hwr_func_pane_g1

0x71f4,	// (0x00064a65) bg_vkb2_func_pane_cp02_ParamLimits

0x71f4,	// (0x00064a65) bg_vkb2_func_pane_cp02

0x6b98,	// (0x00064409) cell_hwr_side_button_pane_g1_ParamLimits

0x6b98,	// (0x00064409) cell_hwr_side_button_pane_g1

0x1db2,	// (0x0005f623) status_pane_g4_ParamLimits

0x1db2,	// (0x0005f623) status_pane_g4

0x1dcc,	// (0x0005f63d) status_pane_t1

0x436a,	// (0x00061bdb) form2_midp_gauge_slider_cont_pane

0x4372,	// (0x00061be3) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcde1,	// (0x0006a652) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcdf3,	// (0x0006a664) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacc,	// (0x0006d33d) form2_midp_gauge_slider_pane_t_ParamLimits

0x43a8,	// (0x00061c19) form2_midp_slider_pane_ParamLimits

0x1180,	// (0x0005e9f1) aid_size_cell_func_vkb2_ParamLimits

0x1180,	// (0x0005e9f1) aid_size_cell_func_vkb2

0x6b39,	// (0x000643aa) slider_pane_g4_ParamLimits

0x6b39,	// (0x000643aa) slider_pane_g4

0xbbf8,	// (0x00069469) form2_midp_gauge_slider_pane_t2_cp01

0xbc06,	// (0x00069477) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbc06,	// (0x00069477) form2_midp_gauge_slider_pane_t3_cp01

0x18ce,	// (0x0005f13f) form2_midp_slider_pane_cp01

0x705a,	// (0x000648cb) navi_smil_pane

0x6bd1,	// (0x00064442) navi_smil_pane_g1

0x6bd9,	// (0x0006444a) navi_smil_pane_t1

0x6ba6,	// (0x00064417) form2_midp_slider_pane_g1

0x6baf,	// (0x00064420) form2_midp_slider_pane_g2

0x6bb7,	// (0x00064428) form2_midp_slider_pane_g3

0x6ba6,	// (0x00064417) form2_midp_slider_pane_g4

0xe29e,	// (0x0006bb0f) form2_midp_slider_pane_g5

0x0004,

0xfdfd,	// (0x0006d66e) form2_midp_slider_pane_g

0x1893,	// (0x0005f104) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1893,	// (0x0005f104) vkb2_area_bottom_space_btn_pane_g4

0xace4,	// (0x00068555) lc0_navi_pane_ParamLimits

0xace4,	// (0x00068555) lc0_navi_pane

0xad4e,	// (0x000685bf) lc0_stat_indi_pane_ParamLimits

0xad4e,	// (0x000685bf) lc0_stat_indi_pane

0xad63,	// (0x000685d4) ls0_title_pane_ParamLimits

0xad63,	// (0x000685d4) ls0_title_pane

0x8017,	// (0x00065888) bg_popup_sub_pane_cp14_ParamLimits

0xd971,	// (0x0006b1e2) list_uniindi_pane_ParamLimits

0xd97d,	// (0x0006b1ee) uniindi_top_pane_ParamLimits

0x60b7,	// (0x00063928) list_single_uniindi_pane_g1_ParamLimits

0x60ca,	// (0x0006393b) list_single_uniindi_pane_t1_ParamLimits

0xbc23,	// (0x00069494) lc0_stat_clock_pane_ParamLimits

0xbc23,	// (0x00069494) lc0_stat_clock_pane

0xe2a9,	// (0x0006bb1a) lc0_stat_indi_pane_g1_ParamLimits

0xe2a9,	// (0x0006bb1a) lc0_stat_indi_pane_g1

0xe2b6,	// (0x0006bb27) lc0_stat_indi_pane_g2_ParamLimits

0xe2b6,	// (0x0006bb27) lc0_stat_indi_pane_g2

0x0001,

0xfe08,	// (0x0006d679) lc0_stat_indi_pane_g_ParamLimits

0xfe08,	// (0x0006d679) lc0_stat_indi_pane_g

0xbc33,	// (0x000694a4) lc0_uni_indicator_pane_ParamLimits

0xbc33,	// (0x000694a4) lc0_uni_indicator_pane

0xe2c3,	// (0x0006bb34) ls0_title_pane_g1_ParamLimits

0xe2c3,	// (0x0006bb34) ls0_title_pane_g1

0xe2d7,	// (0x0006bb48) ls0_title_pane_t1_ParamLimits

0xe2d7,	// (0x0006bb48) ls0_title_pane_t1

0xbc43,	// (0x000694b4) lc0_uni_indicator_pane_g1_ParamLimits

0xbc43,	// (0x000694b4) lc0_uni_indicator_pane_g1

0x6c4b,	// (0x000644bc) lc0_stat_clock_pane_t1

0xe7c8,	// (0x0006c039) main_ai5_pane

0x6c59,	// (0x000644ca) ai5_sk_pane_ParamLimits

0x6c59,	// (0x000644ca) ai5_sk_pane

0xe305,	// (0x0006bb76) cell_ai5_widget_pane_ParamLimits

0xe305,	// (0x0006bb76) cell_ai5_widget_pane

0x6d2f,	// (0x000645a0) aid_size_cell_widget_grid

0x6d3d,	// (0x000645ae) bg_ai5_widget_pane_ParamLimits

0x6d3d,	// (0x000645ae) bg_ai5_widget_pane

0x6db9,	// (0x0006462a) cell_ai5_widget_pane_g2

0x6dcd,	// (0x0006463e) cell_ai5_widget_pane_g3

0x6de7,	// (0x00064658) cell_ai5_widget_pane_g4

0x6df7,	// (0x00064668) cell_ai5_widget_pane_g5

0x6e07,	// (0x00064678) cell_ai5_widget_pane_g6

0x6e13,	// (0x00064684) cell_ai5_widget_pane_g7

0x6e7f,	// (0x000646f0) cell_ai5_widget_pane_t1_ParamLimits

0x6e7f,	// (0x000646f0) cell_ai5_widget_pane_t1

0x6e9c,	// (0x0006470d) cell_ai5_widget_pane_t2_ParamLimits

0x6e9c,	// (0x0006470d) cell_ai5_widget_pane_t2

0x6eb4,	// (0x00064725) cell_ai5_widget_pane_t3_ParamLimits

0x6eb4,	// (0x00064725) cell_ai5_widget_pane_t3

0x6ecc,	// (0x0006473d) cell_ai5_widget_pane_t4_ParamLimits

0x6ecc,	// (0x0006473d) cell_ai5_widget_pane_t4

0xe371,	// (0x0006bbe2) cell_ai5_widget_pane_t5_ParamLimits

0xe371,	// (0x0006bbe2) cell_ai5_widget_pane_t5

0x6f11,	// (0x00064782) cell_ai5_widget_pane_t6_ParamLimits

0x6f11,	// (0x00064782) cell_ai5_widget_pane_t6

0x6f23,	// (0x00064794) cell_ai5_widget_pane_t7_ParamLimits

0x6f23,	// (0x00064794) cell_ai5_widget_pane_t7

0x6f42,	// (0x000647b3) cell_ai5_widget_pane_t8_ParamLimits

0x6f42,	// (0x000647b3) cell_ai5_widget_pane_t8

0x000b,

0xfe28,	// (0x0006d699) cell_ai5_widget_pane_t_ParamLimits

0xfe28,	// (0x0006d699) cell_ai5_widget_pane_t

0x6fc6,	// (0x00064837) grid_ai5_widget_pane

0x8017,	// (0x00065888) highlight_cell_ai5_widget_pane_ParamLimits

0x8017,	// (0x00065888) highlight_cell_ai5_widget_pane

0xe391,	// (0x0006bc02) ai5_sk_left_pane

0xe39b,	// (0x0006bc0c) ai5_sk_middle_pane

0xe3a5,	// (0x0006bc16) ai5_sk_right_pane

0x6ff2,	// (0x00064863) bg_ai5_widget_pane_g1_ParamLimits

0x6ff2,	// (0x00064863) bg_ai5_widget_pane_g1

0x6ffe,	// (0x0006486f) bg_ai5_widget_pane_g2_ParamLimits

0x6ffe,	// (0x0006486f) bg_ai5_widget_pane_g2

0x700a,	// (0x0006487b) bg_ai5_widget_pane_g3_ParamLimits

0x700a,	// (0x0006487b) bg_ai5_widget_pane_g3

0x7016,	// (0x00064887) bg_ai5_widget_pane_g4_ParamLimits

0x7016,	// (0x00064887) bg_ai5_widget_pane_g4

0x7022,	// (0x00064893) bg_ai5_widget_pane_g5_ParamLimits

0x7022,	// (0x00064893) bg_ai5_widget_pane_g5

0x702e,	// (0x0006489f) bg_ai5_widget_pane_g6_ParamLimits

0x702e,	// (0x0006489f) bg_ai5_widget_pane_g6

0x703a,	// (0x000648ab) bg_ai5_widget_pane_g7_ParamLimits

0x703a,	// (0x000648ab) bg_ai5_widget_pane_g7

0x7046,	// (0x000648b7) bg_ai5_widget_pane_g8_ParamLimits

0x7046,	// (0x000648b7) bg_ai5_widget_pane_g8

0x73c2,	// (0x00064c33) bg_ai5_widget_pane_g9_ParamLimits

0x73c2,	// (0x00064c33) bg_ai5_widget_pane_g9

0x0008,

0xfe41,	// (0x0006d6b2) bg_ai5_widget_pane_g_ParamLimits

0xfe41,	// (0x0006d6b2) bg_ai5_widget_pane_g

0x73f4,	// (0x00064c65) cell_shortcut_ai5_widget_pane_ParamLimits

0x73f4,	// (0x00064c65) cell_shortcut_ai5_widget_pane

0xc4d8,	// (0x00069d49) bg_cell_shortcut_ai5_widget_pane

0x7405,	// (0x00064c76) cell_grid_ai5_widget_pane_g1

0xc4d8,	// (0x00069d49) highlight_cell_shortcut_ai5_widget_pane

0x1f36,	// (0x0005f7a7) ai5_sk_left_pane_g1

0x740e,	// (0x00064c7f) ai5_sk_left_pane_g2

0x7416,	// (0x00064c87) ai5_sk_left_pane_g3

0x741e,	// (0x00064c8f) ai5_sk_left_pane_g4

0x0003,

0xfe54,	// (0x0006d6c5) ai5_sk_left_pane_g

0x7426,	// (0x00064c97) ai5_sk_left_pane_t1

0x1f3e,	// (0x0005f7af) ai5_sk_right_pane_g1

0x7434,	// (0x00064ca5) ai5_sk_right_pane_g2

0x743c,	// (0x00064cad) ai5_sk_right_pane_g3

0x7444,	// (0x00064cb5) ai5_sk_right_pane_g4

0x0003,

0xfe5d,	// (0x0006d6ce) ai5_sk_right_pane_g

0x744c,	// (0x00064cbd) ai5_sk_right_pane_t1

0x1f3e,	// (0x0005f7af) ai5_sk_middle_pane_g1

0x1f36,	// (0x0005f7a7) ai5_sk_middle_pane_g2

0x1f56,	// (0x0005f7c7) ai5_sk_middle_pane_g3

0x743c,	// (0x00064cad) ai5_sk_middle_pane_g4

0x7416,	// (0x00064c87) ai5_sk_middle_pane_g5

0x745a,	// (0x00064ccb) ai5_sk_middle_pane_g6

0xe3af,	// (0x0006bc20) ai5_sk_middle_pane_g7

0x0006,

0xfe66,	// (0x0006d6d7) ai5_sk_middle_pane_g

0xabd0,	// (0x00068441) aid_touch_area_size_lc0_ParamLimits

0xabd0,	// (0x00068441) aid_touch_area_size_lc0

0x0def,	// (0x0005e660) cell_hwr_candidate_pane_t1_ParamLimits

0x025a,	// (0x0005dacb) aid_touch_navi_pane

0xae5c,	// (0x000686cd) status_dt_navi_pane_ParamLimits

0xae5c,	// (0x000686cd) status_dt_navi_pane

0xae74,	// (0x000686e5) status_dt_sta_pane_ParamLimits

0xae74,	// (0x000686e5) status_dt_sta_pane

0xe3b7,	// (0x0006bc28) dt_sta_controll_pane

0xe3c4,	// (0x0006bc35) dt_sta_indi_pane

0xe3d1,	// (0x0006bc42) dt_sta_title_pane

0x71f4,	// (0x00064a65) bg_dt_sta_indi_pane_ParamLimits

0x71f4,	// (0x00064a65) bg_dt_sta_indi_pane

0xe3e3,	// (0x0006bc54) dt_sta_battery_pane

0xe3eb,	// (0x0006bc5c) dt_sta_indi_pane_g1

0x74ac,	// (0x00064d1d) dt_sta_indi_pane_g2

0x74b5,	// (0x00064d26) dt_sta_indi_pane_g3

0x0002,

0xfe75,	// (0x0006d6e6) dt_sta_indi_pane_g

0x74be,	// (0x00064d2f) dt_sta_signal_pane

0x8017,	// (0x00065888) bg_dt_sta_title_pane_ParamLimits

0x8017,	// (0x00065888) bg_dt_sta_title_pane

0x2d90,	// (0x00060601) dt_sta_title_pane_g1

0xe3f4,	// (0x0006bc65) dt_sta_title_pane_t1_ParamLimits

0xe3f4,	// (0x0006bc65) dt_sta_title_pane_t1

0x705a,	// (0x000648cb) bg_dt_sta_control_pane

0xe409,	// (0x0006bc7a) dt_sta_controll_pane_g1

0xe412,	// (0x0006bc83) bg_dt_sta_title_pane_g1

0xe41b,	// (0x0006bc8c) bg_dt_sta_title_pane_g2

0xe424,	// (0x0006bc95) bg_dt_sta_title_pane_g3

0x0002,

0xfe7c,	// (0x0006d6ed) bg_dt_sta_title_pane_g

0x4704,	// (0x00061f75) bg_dt_sta_indi_pane_g1

0x7500,	// (0x00064d71) dt_sta_signal_pane_g1

0x7508,	// (0x00064d79) dt_sta_signal_pane_g2

0x0001,

0xfe83,	// (0x0006d6f4) dt_sta_signal_pane_g

0x7510,	// (0x00064d81) dt_sta_battery_pane_g1

0x7519,	// (0x00064d8a) dt_sta_battery_pane_t1

0x4704,	// (0x00061f75) bg_dt_sta_control_pane_g1

0xc0fd,	// (0x0006996e) fep_china_uni_eep_pane

0xc105,	// (0x00069976) fep_china_uni_entry_pane_ParamLimits

0xc115,	// (0x00069986) popup_fep_china_uni_window_g1_ParamLimits

0xc125,	// (0x00069996) popup_fep_china_uni_window_g2_ParamLimits

0xc125,	// (0x00069996) popup_fep_china_uni_window_g2

0x0001,

0xf6ee,	// (0x0006cf5f) popup_fep_china_uni_window_g_ParamLimits

0xf6ee,	// (0x0006cf5f) popup_fep_china_uni_window_g

0x7528,	// (0x00064d99) fep_china_uni_eep_pane_g1

0x7530,	// (0x00064da1) fep_china_uni_eep_pane_t1

0x6bc8,	// (0x00064439) aid_touch_area_size_smil_player

0x03b0,	// (0x0005dc21) lc0_clock_pane

0x1dc0,	// (0x0005f631) status_pane_g5_ParamLimits

0x1dc0,	// (0x0005f631) status_pane_g5

0xa608,	// (0x00067e79) popup_keymap_window

0x1d7e,	// (0x0005f5ef) status_icon_pane

0x6dcd,	// (0x0006463e) cell_ai5_widget_pane_g3_ParamLimits

0x6de7,	// (0x00064658) cell_ai5_widget_pane_g4_ParamLimits

0x6df7,	// (0x00064668) cell_ai5_widget_pane_g5_ParamLimits

0x6e1f,	// (0x00064690) cell_ai5_widget_pane_g8_ParamLimits

0x6e1f,	// (0x00064690) cell_ai5_widget_pane_g8

0x6e33,	// (0x000646a4) cell_ai5_widget_pane_g9_ParamLimits

0x6e33,	// (0x000646a4) cell_ai5_widget_pane_g9

0x6e47,	// (0x000646b8) cell_ai5_widget_pane_g10_ParamLimits

0x6e47,	// (0x000646b8) cell_ai5_widget_pane_g10

0x753f,	// (0x00064db0) status_icon_pane_g1

0x705a,	// (0x000648cb) bg_popup_sub_pane_cp13

0x7547,	// (0x00064db8) popup_keymap_window_t1

0xa2c4,	// (0x00067b35) control_pane_g6_ParamLimits

0xa2c4,	// (0x00067b35) control_pane_g6

0xa2d1,	// (0x00067b42) control_pane_g7_ParamLimits

0xa2d1,	// (0x00067b42) control_pane_g7

0xa2de,	// (0x00067b4f) control_pane_g8_ParamLimits

0xa2de,	// (0x00067b4f) control_pane_g8

0xe3b7,	// (0x0006bc28) dt_sta_controll_pane_ParamLimits

0xe3c4,	// (0x0006bc35) dt_sta_indi_pane_ParamLimits

0xe3d1,	// (0x0006bc42) dt_sta_title_pane_ParamLimits

0x7f62,	// (0x000657d3) aid_size_touch_scroll_bar_cale

0x8eb8,	// (0x00066729) popup_discreet_window_ParamLimits

0x8eb8,	// (0x00066729) popup_discreet_window

0x8f0a,	// (0x0006677b) popup_sk_window

0x25d4,	// (0x0005fe45) bg_popup_sub_pane_cp28_ParamLimits

0x25d4,	// (0x0005fe45) bg_popup_sub_pane_cp28

0x7555,	// (0x00064dc6) popup_discreet_window_g1_ParamLimits

0x7555,	// (0x00064dc6) popup_discreet_window_g1

0xe42d,	// (0x0006bc9e) popup_discreet_window_t1_ParamLimits

0xe42d,	// (0x0006bc9e) popup_discreet_window_t1

0x7593,	// (0x00064e04) popup_discreet_window_t2_ParamLimits

0x7593,	// (0x00064e04) popup_discreet_window_t2

0x0002,

0xfe88,	// (0x0006d6f9) popup_discreet_window_t_ParamLimits

0xfe88,	// (0x0006d6f9) popup_discreet_window_t

0x1905,	// (0x0005f176) popup_sk_window_g1

0x190f,	// (0x0005f180) popup_sk_window_g2

0x0001,

0xfe8f,	// (0x0006d700) popup_sk_window_g

0xbc6e,	// (0x000694df) popup_sk_window_t1

0xbc7c,	// (0x000694ed) popup_sk_window_t1_copy1

0x6db9,	// (0x0006462a) cell_ai5_widget_pane_g2_ParamLimits

0x6f54,	// (0x000647c5) cell_ai5_widget_pane_t9_ParamLimits

0x6f54,	// (0x000647c5) cell_ai5_widget_pane_t9

0x705a,	// (0x000648cb) main_fep_fshwr2_pane

0xbc8a,	// (0x000694fb) aid_fshwr2_btn_pane

0xbc9e,	// (0x0006950f) aid_fshwr2_syb_pane

0xbcb2,	// (0x00069523) aid_fshwr2_txt_pane

0xbcc2,	// (0x00069533) fshwr2_func_candi_pane

0xbce2,	// (0x00069553) fshwr2_hwr_syb_pane

0xbd04,	// (0x00069575) fshwr2_icf_pane

0xe7c8,	// (0x0006c039) fshwr2_icf_bg_pane

0x19d7,	// (0x0005f248) fshwr2_icf_pane_t1_ParamLimits

0x19d7,	// (0x0005f248) fshwr2_icf_pane_t1

0xc07a,	// (0x000698eb) fshwr2_func_candi_pane_g1

0xe44b,	// (0x0006bcbc) fshwr2_func_candi_row_pane_ParamLimits

0xe44b,	// (0x0006bcbc) fshwr2_func_candi_row_pane

0xbd34,	// (0x000695a5) cell_fshwr2_syb_pane_ParamLimits

0xbd34,	// (0x000695a5) cell_fshwr2_syb_pane

0x1a13,	// (0x0005f284) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1a13,	// (0x0005f284) fshwr2_hwr_syb_pane_g1

0xe7c8,	// (0x0006c039) bg_popup_call_pane_cp01

0xbd5a,	// (0x000695cb) fshwr2_func_candi_cell_pane_ParamLimits

0xbd5a,	// (0x000695cb) fshwr2_func_candi_cell_pane

0x23bd,	// (0x0005fc2e) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x23bd,	// (0x0005fc2e) fshwr2_func_candi_cell_bg_pane

0xbda5,	// (0x00069616) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xbda5,	// (0x00069616) fshwr2_func_candi_cell_pane_g1

0xbddc,	// (0x0006964d) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xbddc,	// (0x0006964d) fshwr2_func_candi_cell_pane_t1

0xe7c8,	// (0x0006c039) bg_button_pane_cp08

0x839a,	// (0x00065c0b) cell_fshwr2_syb_bg_pane

0xbdf7,	// (0x00069668) cell_fshwr2_syb_bg_pane_g1

0xbe0a,	// (0x0006967b) cell_fshwr2_syb_bg_pane_t1

0x8017,	// (0x00065888) main_tmo_pane

0xc814,	// (0x0006a085) uni_indicator_pane_g1_ParamLimits

0xc82a,	// (0x0006a09b) uni_indicator_pane_g2_ParamLimits

0xc840,	// (0x0006a0b1) uni_indicator_pane_g3_ParamLimits

0x30fd,	// (0x0006096e) uni_indicator_pane_g4_ParamLimits

0x30fd,	// (0x0006096e) uni_indicator_pane_g4

0x3111,	// (0x00060982) uni_indicator_pane_g5_ParamLimits

0x3111,	// (0x00060982) uni_indicator_pane_g5

0x3111,	// (0x00060982) uni_indicator_pane_g6_ParamLimits

0x3111,	// (0x00060982) uni_indicator_pane_g6

0xf8e6,	// (0x0006d157) uni_indicator_pane_g_ParamLimits

0xd691,	// (0x0006af02) popup_tmo_note_window_ParamLimits

0xd691,	// (0x0006af02) popup_tmo_note_window

0x1162,	// (0x0005e9d3) fshwr2_bg_pane

0xbdcd,	// (0x0006963e) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xbdcd,	// (0x0006963e) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe94,	// (0x0006d705) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe94,	// (0x0006d705) fshwr2_func_candi_cell_pane_g

0x0da8,	// (0x0005e619) bg_popup_window_pane_cp01

0x1ac9,	// (0x0005f33a) bg_popup_window_pane_g1_cp01

0x760c,	// (0x00064e7d) bg_popup_window_pane_cp22_ParamLimits

0x760c,	// (0x00064e7d) bg_popup_window_pane_cp22

0xe46e,	// (0x0006bcdf) listscroll_tmo_link_pane_ParamLimits

0xe46e,	// (0x0006bcdf) listscroll_tmo_link_pane

0x765a,	// (0x00064ecb) popup_tmo_note_window_g1_ParamLimits

0x765a,	// (0x00064ecb) popup_tmo_note_window_g1

0xe4ae,	// (0x0006bd1f) tmo_note_info_pane_ParamLimits

0xe4ae,	// (0x0006bd1f) tmo_note_info_pane

0xe4c8,	// (0x0006bd39) list_tmo_note_info_pane_g1_ParamLimits

0xe4c8,	// (0x0006bd39) list_tmo_note_info_pane_g1

0x7698,	// (0x00064f09) list_tmo_note_info_pane_g2_ParamLimits

0x7698,	// (0x00064f09) list_tmo_note_info_pane_g2

0x0001,

0xfe99,	// (0x0006d70a) list_tmo_note_info_pane_g_ParamLimits

0xfe99,	// (0x0006d70a) list_tmo_note_info_pane_g

0x76b4,	// (0x00064f25) list_tmo_note_info_text_pane_ParamLimits

0x76b4,	// (0x00064f25) list_tmo_note_info_text_pane

0x7735,	// (0x00064fa6) list_tmo_link_pane

0x7742,	// (0x00064fb3) scroll_pane_cp20

0x774f,	// (0x00064fc0) list_single_tmo_link_pane_ParamLimits

0x774f,	// (0x00064fc0) list_single_tmo_link_pane

0x775f,	// (0x00064fd0) list_single_tmo_link_pane_t1

0x776d,	// (0x00064fde) list_tmo_note_info_text_pane_t1_ParamLimits

0x776d,	// (0x00064fde) list_tmo_note_info_text_pane_t1

0x9c06,	// (0x00067477) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9c06,	// (0x00067477) aid_size_touch_scroll_bar_cp01

0x9b06,	// (0x00067377) aid_size_touch_slider_marker

0x8efa,	// (0x0006676b) popup_settings_window_ParamLimits

0x8efa,	// (0x0006676b) popup_settings_window

0xea1f,	// (0x0006c290) popup_candi_list_indi_window

0x025a,	// (0x0005dacb) aid_touch_navi_pane_ParamLimits

0x10bd,	// (0x0005e92e) rs_clock_indi_pane

0x10c6,	// (0x0005e937) sctrl_sk_bottom_pane_ParamLimits

0x10d7,	// (0x0005e948) sctrl_sk_top_pane_ParamLimits

0xb8c3,	// (0x00069134) popup_fep_tooltip_window

0x6d2f,	// (0x000645a0) aid_size_cell_widget_grid_ParamLimits

0x6da4,	// (0x00064615) cell_ai5_widget_pane_g1_ParamLimits

0x6da4,	// (0x00064615) cell_ai5_widget_pane_g1

0x6e07,	// (0x00064678) cell_ai5_widget_pane_g6_ParamLimits

0x6e13,	// (0x00064684) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe0d,	// (0x0006d67e) cell_ai5_widget_pane_g_ParamLimits

0xfe0d,	// (0x0006d67e) cell_ai5_widget_pane_g

0x6f83,	// (0x000647f4) cell_ai5_widget_pane_t10_ParamLimits

0x6f83,	// (0x000647f4) cell_ai5_widget_pane_t10

0x6fc6,	// (0x00064837) grid_ai5_widget_pane_ParamLimits

0x73ce,	// (0x00064c3f) cell_contacts_ai5_widget_pane_ParamLimits

0x73ce,	// (0x00064c3f) cell_contacts_ai5_widget_pane

0x75a8,	// (0x00064e19) popup_discreet_window_t3_ParamLimits

0x75a8,	// (0x00064e19) popup_discreet_window_t3

0xbd20,	// (0x00069591) popup_fshwr2_char_preview_window_ParamLimits

0xbd20,	// (0x00069591) popup_fshwr2_char_preview_window

0xe4df,	// (0x0006bd50) tmo_note_info_pane_t1

0xe4f4,	// (0x0006bd65) tmo_note_info_pane_t2

0xe50b,	// (0x0006bd7c) tmo_note_info_pane_t3

0x7711,	// (0x00064f82) tmo_note_info_pane_t4

0x7723,	// (0x00064f94) tmo_note_info_pane_t5

0x0004,

0xfe9e,	// (0x0006d70f) tmo_note_info_pane_t

0x7735,	// (0x00064fa6) list_tmo_link_pane_ParamLimits

0x7742,	// (0x00064fb3) scroll_pane_cp20_ParamLimits

0xe7c8,	// (0x0006c039) bg_popup_fep_char_preview_window_cp01

0xe520,	// (0x0006bd91) popup_fshwr2_char_preview_window_t1

0x7794,	// (0x00065005) popup_candi_list_indi_window_g1

0x779d,	// (0x0006500e) bg_cell_contacts_ai5_widget_pane

0x77a9,	// (0x0006501a) cell_contacts_ai5_widget_pane_g1

0x4dde,	// (0x0006264f) cell_contacts_ai5_widget_pane_g2

0x77be,	// (0x0006502f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea9,	// (0x0006d71a) cell_contacts_ai5_widget_pane_g

0x77ca,	// (0x0006503b) cell_contacts_ai5_widget_pane_t1

0x8017,	// (0x00065888) highlight_cell_shortcut_ai5_widget_pane_cp01

0x7841,	// (0x000650b2) settings_container_pane

0xc4d8,	// (0x00069d49) listscroll_set_pane_copy1

0x3c8b,	// (0x000614fc) scroll_pane_cp121_copy1

0x2379,	// (0x0005fbea) set_content_pane_copy1

0xe52e,	// (0x0006bd9f) aid_height_set_list_copy1_ParamLimits

0xe52e,	// (0x0006bd9f) aid_height_set_list_copy1

0x3309,	// (0x00060b7a) aid_size_parent_copy1_ParamLimits

0x3309,	// (0x00060b7a) aid_size_parent_copy1

0xe53a,	// (0x0006bdab) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe53a,	// (0x0006bdab) button_value_adjust_pane_cp6_copy1

0x839a,	// (0x00065c0b) list_highlight_pane_cp2_copy1_ParamLimits

0x839a,	// (0x00065c0b) list_highlight_pane_cp2_copy1

0xe54e,	// (0x0006bdbf) list_set_pane_copy1_ParamLimits

0xe54e,	// (0x0006bdbf) list_set_pane_copy1

0x77dc,	// (0x0006504d) main_pane_set_t1_copy1_ParamLimits

0x77dc,	// (0x0006504d) main_pane_set_t1_copy1

0x7816,	// (0x00065087) main_pane_set_t2_copy1_ParamLimits

0x7816,	// (0x00065087) main_pane_set_t2_copy1

0xe5fb,	// (0x0006be6c) main_pane_set_t3_copy1

0xe609,	// (0x0006be7a) main_pane_set_t4_copy1

0x7835,	// (0x000650a6) set_content_pane_g1_copy1_ParamLimits

0x7835,	// (0x000650a6) set_content_pane_g1_copy1

0xe617,	// (0x0006be88) setting_code_pane_copy1

0x793e,	// (0x000651af) setting_slider_graphic_pane_copy1

0x793e,	// (0x000651af) setting_slider_pane_copy1

0x7946,	// (0x000651b7) setting_text_pane_copy1

0x7946,	// (0x000651b7) setting_volume_pane_copy1

0xe617,	// (0x0006be88) settings_code_pane_cp2_copy1

0xe61f,	// (0x0006be90) settings_code_pane_cp_copy1_ParamLimits

0xe61f,	// (0x0006be90) settings_code_pane_cp_copy1

0xbe20,	// (0x00069691) volume_set_pane_copy1

0xe633,	// (0x0006bea4) volume_set_pane_g10_copy1

0xe63b,	// (0x0006beac) volume_set_pane_g1_copy1

0xe643,	// (0x0006beb4) volume_set_pane_g2_copy1

0xe64b,	// (0x0006bebc) volume_set_pane_g3_copy1

0xe653,	// (0x0006bec4) volume_set_pane_g4_copy1

0xe65b,	// (0x0006becc) volume_set_pane_g5_copy1

0xe663,	// (0x0006bed4) volume_set_pane_g6_copy1

0xe66b,	// (0x0006bedc) volume_set_pane_g7_copy1

0xe673,	// (0x0006bee4) volume_set_pane_g8_copy1

0xe67b,	// (0x0006beec) volume_set_pane_g9_copy1

0x70bc,	// (0x0006492d) bg_set_opt_pane_cp_copy1_ParamLimits

0x70bc,	// (0x0006492d) bg_set_opt_pane_cp_copy1

0xbe28,	// (0x00069699) setting_slider_pane_t1_copy1_ParamLimits

0xbe28,	// (0x00069699) setting_slider_pane_t1_copy1

0xbe47,	// (0x000696b8) setting_slider_pane_t2_copy1_ParamLimits

0xbe47,	// (0x000696b8) setting_slider_pane_t2_copy1

0xbe61,	// (0x000696d2) setting_slider_pane_t3_copy1_ParamLimits

0xbe61,	// (0x000696d2) setting_slider_pane_t3_copy1

0xbe79,	// (0x000696ea) slider_set_pane_copy1_ParamLimits

0xbe79,	// (0x000696ea) slider_set_pane_copy1

0x806f,	// (0x000658e0) set_opt_bg_pane_g1_copy2

0x8077,	// (0x000658e8) set_opt_bg_pane_g2_copy2

0x79b2,	// (0x00065223) set_opt_bg_pane_g3_copy2

0x8087,	// (0x000658f8) set_opt_bg_pane_g4_copy2

0x808f,	// (0x00065900) set_opt_bg_pane_g5_copy2

0x8097,	// (0x00065908) set_opt_bg_pane_g6_copy2

0xe683,	// (0x0006bef4) set_opt_bg_pane_g7_copy2

0x79c4,	// (0x00065235) set_opt_bg_pane_g8_copy2

0x79ce,	// (0x0006523f) set_opt_bg_pane_g9_copy2

0xbe8f,	// (0x00069700) aid_size_touch_slider_mark_copy1_ParamLimits

0xbe8f,	// (0x00069700) aid_size_touch_slider_mark_copy1

0xe68b,	// (0x0006befc) slider_set_pane_g1_copy1

0x1b55,	// (0x0005f3c6) slider_set_pane_g2_copy1

0xb4cb,	// (0x00068d3c) slider_set_pane_g3_copy1_ParamLimits

0xb4cb,	// (0x00068d3c) slider_set_pane_g3_copy1

0xb4df,	// (0x00068d50) slider_set_pane_g4_copy1_ParamLimits

0xb4df,	// (0x00068d50) slider_set_pane_g4_copy1

0xb4f7,	// (0x00068d68) slider_set_pane_g5_copy1_ParamLimits

0xb4f7,	// (0x00068d68) slider_set_pane_g5_copy1

0xb4cb,	// (0x00068d3c) slider_set_pane_g6_copy1_ParamLimits

0xb4cb,	// (0x00068d3c) slider_set_pane_g6_copy1

0xbea3,	// (0x00069714) slider_set_pane_g7_copy1_ParamLimits

0xbea3,	// (0x00069714) slider_set_pane_g7_copy1

0x706e,	// (0x000648df) bg_set_opt_pane_cp2_copy1

0xe694,	// (0x0006bf05) setting_slider_graphic_pane_g1_copy1

0xe69d,	// (0x0006bf0e) setting_slider_graphic_pane_t1_copy1

0xe6ad,	// (0x0006bf1e) setting_slider_graphic_pane_t2_copy1

0xe6bd,	// (0x0006bf2e) slider_set_pane_cp_copy1

0x7a1a,	// (0x0006528b) input_focus_pane_cp1_copy1

0x7a23,	// (0x00065294) list_set_text_pane_copy1

0x7a2b,	// (0x0006529c) setting_text_pane_g1_copy1

0xef77,	// (0x0006c7e8) set_text_pane_t1_copy1

0x7a1a,	// (0x0006528b) input_focus_pane_cp2_copy1

0x7a2b,	// (0x0006529c) setting_code_pane_g1_copy1

0x7a34,	// (0x000652a5) setting_code_pane_t1_copy1

0x7a42,	// (0x000652b3) list_set_graphic_pane_copy1

0x706e,	// (0x000648df) bg_set_opt_pane_cp4_copy1

0xc255,	// (0x00069ac6) list_set_graphic_pane_g1_copy1_ParamLimits

0xc255,	// (0x00069ac6) list_set_graphic_pane_g1_copy1

0x7a56,	// (0x000652c7) list_set_graphic_pane_g2_copy1

0xc26d,	// (0x00069ade) list_set_graphic_pane_t1_copy1_ParamLimits

0xc26d,	// (0x00069ade) list_set_graphic_pane_t1_copy1

0x4704,	// (0x00061f75) rs_clock_indi_pane_g1

0x7a5e,	// (0x000652cf) rs_clock_indi_pane_t1

0x7a6c,	// (0x000652dd) rs_indi_pane

0x7a74,	// (0x000652e5) rs_indi_pane_g1

0x7a7d,	// (0x000652ee) rs_indi_pane_g2

0x7794,	// (0x00065005) rs_indi_pane_g3

0x0002,

0xfeb0,	// (0x0006d721) rs_indi_pane_g

0xc4d8,	// (0x00069d49) bg_popup_preview_window_pane_cp03

0x7a86,	// (0x000652f7) popup_fep_tooltip_window_t1

0xd2bf,	// (0x0006ab30) popup_note2_window_g2_ParamLimits

0xd2bf,	// (0x0006ab30) popup_note2_window_g2

0x0001,

0xfc44,	// (0x0006d4b5) popup_note2_window_g_ParamLimits

0xfc44,	// (0x0006d4b5) popup_note2_window_g

0x5893,	// (0x00063104) bg_popup_sub_pane_cp11_ParamLimits

0x58a0,	// (0x00063111) cell_ai3_links_pane_g1_ParamLimits

0x58b7,	// (0x00063128) cell_ai3_links_pane_t1

0xef77,	// (0x0006c7e8) set_text_pane_t1_copy1_ParamLimits

0xc41a,	// (0x00069c8b) cell_graphic_popup_pane_cp2_ParamLimits

0xc41a,	// (0x00069c8b) cell_graphic_popup_pane_cp2

0xe6cd,	// (0x0006bf3e) cell_graphic_popup_pane_g1_cp2

0x734e,	// (0x00064bbf) cell_graphic_popup_pane_g2_cp2

0x7a9c,	// (0x0006530d) cell_graphic_popup_pane_g3_cp2

0xe6d5,	// (0x0006bf46) cell_graphic_popup_pane_t2_cp2

0x735f,	// (0x00064bd0) grid_highlight_pane_cp3_cp2

0x82da,	// (0x00065b4b) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8017,	// (0x00065888) main_tmo_pane_ParamLimits

0xd685,	// (0x0006aef6) popup_tmo_big_image_note_window

0x6d93,	// (0x00064604) cell_ai5_widget_list_pane

0x6d9b,	// (0x0006460c) cell_ai5_widget_lrg_icon_pane

0xe4df,	// (0x0006bd50) tmo_note_info_pane_t1_ParamLimits

0xe4f4,	// (0x0006bd65) tmo_note_info_pane_t2_ParamLimits

0xe50b,	// (0x0006bd7c) tmo_note_info_pane_t3_ParamLimits

0x7711,	// (0x00064f82) tmo_note_info_pane_t4_ParamLimits

0x7723,	// (0x00064f94) tmo_note_info_pane_t5_ParamLimits

0xfe9e,	// (0x0006d70f) tmo_note_info_pane_t_ParamLimits

0x7841,	// (0x000650b2) settings_container_pane_ParamLimits

0xe6c5,	// (0x0006bf36) indicator_popup_pane_cp5

0xe6c5,	// (0x0006bf36) indicator_popup_pane_cp6

0x7a42,	// (0x000652b3) list_set_graphic_pane_copy1_ParamLimits

0x705a,	// (0x000648cb) bg_popup_window_pane_cp23

0x7ab2,	// (0x00065323) popup_tmo_big_image_note_window_g1

0x7abb,	// (0x0006532c) popup_tmo_big_image_note_window_t1

0x7acb,	// (0x0006533c) popup_tmo_big_image_note_window_t2

0x7adb,	// (0x0006534c) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb7,	// (0x0006d728) popup_tmo_big_image_note_window_t

0x4704,	// (0x00061f75) cell_ai5_widget_lrg_icon_pane_g1

0x7aeb,	// (0x0006535c) cell_ai5_widget_lrg_icon_pane_t1

0x7af9,	// (0x0006536a) cell_ai5_widget_list_row_pane_ParamLimits

0x7af9,	// (0x0006536a) cell_ai5_widget_list_row_pane

0x7b10,	// (0x00065381) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7b10,	// (0x00065381) cell_ai5_widget_list_row_pane_g1

0xe6e3,	// (0x0006bf54) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe6e3,	// (0x0006bf54) cell_ai5_widget_list_row_pane_t1

0x7b48,	// (0x000653b9) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7b48,	// (0x000653b9) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfebe,	// (0x0006d72f) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfebe,	// (0x0006d72f) cell_ai5_widget_list_row_pane_t

0xe7c8,	// (0x0006c039) main_fep_vtchi_ss_pane

0x7b98,	// (0x00065409) popup_fep_char_pre_window

0x7ba0,	// (0x00065411) popup_fep_ituss_window

0xefbb,	// (0x0006c82c) popup_fep_vkbss_window

0x839a,	// (0x00065c0b) grid_vkbss_keypad_pane_ParamLimits

0x839a,	// (0x00065c0b) grid_vkbss_keypad_pane

0x7c0c,	// (0x0006547d) ituss_keypad_pane

0x1b7d,	// (0x0005f3ee) aid_vkbss_key_offset_ParamLimits

0x1b7d,	// (0x0005f3ee) aid_vkbss_key_offset

0xbeb9,	// (0x0006972a) cell_vkbss_key_pane_ParamLimits

0xbeb9,	// (0x0006972a) cell_vkbss_key_pane

0x7c1c,	// (0x0006548d) bg_cell_vkbss_key_g1_ParamLimits

0x7c1c,	// (0x0006548d) bg_cell_vkbss_key_g1

0xefc8,	// (0x0006c839) cell_vkbss_key_3p_pane_ParamLimits

0xefc8,	// (0x0006c839) cell_vkbss_key_3p_pane

0xeffe,	// (0x0006c86f) cell_vkbss_key_g1_ParamLimits

0xeffe,	// (0x0006c86f) cell_vkbss_key_g1

0xf034,	// (0x0006c8a5) cell_vkbss_key_t1_ParamLimits

0xf034,	// (0x0006c8a5) cell_vkbss_key_t1

0x1be1,	// (0x0005f452) cell_ituss_key_pane_ParamLimits

0x1be1,	// (0x0005f452) cell_ituss_key_pane

0x7cf0,	// (0x00065561) bg_cell_ituss_key_g1_ParamLimits

0x7cf0,	// (0x00065561) bg_cell_ituss_key_g1

0x7cfc,	// (0x0006556d) cell_ituss_key_pane_g1_ParamLimits

0x7cfc,	// (0x0006556d) cell_ituss_key_pane_g1

0x1bf2,	// (0x0005f463) cell_ituss_key_pane_g2_ParamLimits

0x1bf2,	// (0x0005f463) cell_ituss_key_pane_g2

0x0005,

0xfec5,	// (0x0006d736) cell_ituss_key_pane_g_ParamLimits

0xfec5,	// (0x0006d736) cell_ituss_key_pane_g

0x1c76,	// (0x0005f4e7) cell_ituss_key_t1_ParamLimits

0x1c76,	// (0x0005f4e7) cell_ituss_key_t1

0x1cb0,	// (0x0005f521) cell_ituss_key_t2_ParamLimits

0x1cb0,	// (0x0005f521) cell_ituss_key_t2

0x1ce2,	// (0x0005f553) cell_ituss_key_t3_ParamLimits

0x1ce2,	// (0x0005f553) cell_ituss_key_t3

0x1d13,	// (0x0005f584) cell_ituss_key_t4_ParamLimits

0x1d13,	// (0x0005f584) cell_ituss_key_t4

0x0004,

0xfed2,	// (0x0006d743) cell_ituss_key_t_ParamLimits

0xfed2,	// (0x0006d743) cell_ituss_key_t

0xf090,	// (0x0006c901) cell_vkbss_key_3p_pane_g1

0xf098,	// (0x0006c909) cell_vkbss_key_3p_pane_g2

0xf0a0,	// (0x0006c911) cell_vkbss_key_3p_pane_g3

0x0002,

0xfedd,	// (0x0006d74e) cell_vkbss_key_3p_pane_g

0xc4d8,	// (0x00069d49) bg_popup_fep_char_preview_window_cp02

0x7d3a,	// (0x000655ab) popup_fep_char_pre_window_t1

0xe367,	// (0x0006bbd8) main_ai5_sk_pane

0x779d,	// (0x0006500e) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x77a9,	// (0x0006501a) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x4dde,	// (0x0006264f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x77be,	// (0x0006502f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea9,	// (0x0006d71a) cell_contacts_ai5_widget_pane_g_ParamLimits

0x77ca,	// (0x0006503b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8017,	// (0x00065888) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf0a8,	// (0x0006c919) main_ai5_sk_pane_g1

0xb24e,	// (0x00068abf) popup_query_code_window_g1

0xefac,	// (0x0006c81d) popup_fep_vkb_icf_pane

0x7be3,	// (0x00065454) popup_fep_vtchi_icf_pane

0x7d51,	// (0x000655c2) bg_icf_pane

0x7d51,	// (0x000655c2) list_vkb_icf_pane

0x7d5d,	// (0x000655ce) bg_icf_pane_cp01

0x7d70,	// (0x000655e1) vtchi_icf_list_pane

0xf0fd,	// (0x0006c96e) list_vkb_icf_pane_t1_ParamLimits

0xf0fd,	// (0x0006c96e) list_vkb_icf_pane_t1

0x7df2,	// (0x00065663) vtchi_icf_list_pane_t1_ParamLimits

0x7df2,	// (0x00065663) vtchi_icf_list_pane_t1

0x7ba0,	// (0x00065411) popup_fep_ituss_window_ParamLimits

0x7be3,	// (0x00065454) popup_fep_vtchi_icf_pane_ParamLimits

0x7c0c,	// (0x0006547d) ituss_keypad_pane_ParamLimits

0x1b73,	// (0x0005f3e4) ituss_sks_pane

0x7d51,	// (0x000655c2) bg_icf_pane_ParamLimits

0xef91,	// (0x0006c802) icf_edit_indi_pane_ParamLimits

0xef91,	// (0x0006c802) icf_edit_indi_pane

0x7d51,	// (0x000655c2) list_vkb_icf_pane_ParamLimits

0x7d5d,	// (0x000655ce) bg_icf_pane_cp01_ParamLimits

0x7b8b,	// (0x000653fc) icf_edit_indi_pane_cp01_ParamLimits

0x7b8b,	// (0x000653fc) icf_edit_indi_pane_cp01

0x7d70,	// (0x000655e1) vtchi_query_pane

0x6b98,	// (0x00064409) icf_edit_indi_pane_g1_ParamLimits

0x6b98,	// (0x00064409) icf_edit_indi_pane_g1

0xf115,	// (0x0006c986) icf_edit_indi_pane_g2_ParamLimits

0xf115,	// (0x0006c986) icf_edit_indi_pane_g2

0x0001,

0xff08,	// (0x0006d779) icf_edit_indi_pane_g_ParamLimits

0xff08,	// (0x0006d779) icf_edit_indi_pane_g

0xf129,	// (0x0006c99a) icf_edit_indi_pane_t1

0x7e13,	// (0x00065684) bg_input_focus_pane_cp042

0x7f59,	// (0x000657ca) vtchi_button_pane

0x7e1c,	// (0x0006568d) vtchi_query_pane_t1

0x7e2a,	// (0x0006569b) vtchi_query_pane_t2

0x7e38,	// (0x000656a9) vtchi_query_pane_t3

0x0002,

0xfef7,	// (0x0006d768) vtchi_query_pane_t

0xe7c8,	// (0x0006c039) bg_button_pane_cp13

0x7e46,	// (0x000656b7) vtchi_button_pane_g1

0x1d56,	// (0x0005f5c7) ituss_sks_pane_g1

0x1d61,	// (0x0005f5d2) ituss_sks_pane_g2

0x0001,

0xfefe,	// (0x0006d76f) ituss_sks_pane_g

0x7e4e,	// (0x000656bf) ituss_sks_pane_t1

0x7e5c,	// (0x000656cd) ituss_sks_pane_t2

0x0001,

0xff03,	// (0x0006d774) ituss_sks_pane_t

0x40a3,	// (0x00061914) indicator_nsta_pane_cp_g1

0x40ac,	// (0x0006191d) indicator_nsta_pane_cp_g2

0x40b4,	// (0x00061925) indicator_nsta_pane_cp_g3

0x40bc,	// (0x0006192d) indicator_nsta_pane_cp_g4

0x40ac,	// (0x0006191d) indicator_nsta_pane_cp_g5

0x40b4,	// (0x00061925) indicator_nsta_pane_cp_g6

0x0005,

0xfa82,	// (0x0006d2f3) indicator_nsta_pane_cp_g

0xe146,	// (0x0006b9b7) cell_graphic2_pane_t2_ParamLimits

0xe146,	// (0x0006b9b7) cell_graphic2_pane_t2

0x0001,

0xfd94,	// (0x0006d605) cell_graphic2_pane_t_ParamLimits

0xfd94,	// (0x0006d605) cell_graphic2_pane_t

0xe17d,	// (0x0006b9ee) cell_graphic2_control_pane_t1

0x9ede,	// (0x0006774f) signal_pane_g3_ParamLimits

0x9ede,	// (0x0006774f) signal_pane_g3

0x9ef2,	// (0x00067763) signal_pane_g4_ParamLimits

0x9ef2,	// (0x00067763) signal_pane_g4

0x7b5a,	// (0x000653cb) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7b5a,	// (0x000653cb) cell_ai5_widget_list_row_pane_t3

0x7d10,	// (0x00065581) cell_ituss_key_pane_t1_ParamLimits

0x7d10,	// (0x00065581) cell_ituss_key_pane_t1

0x2048,	// (0x0005f8b9) form_field_data_wide_pane_vc_t2_ParamLimits

0x2048,	// (0x0005f8b9) form_field_data_wide_pane_vc_t2

0x205c,	// (0x0005f8cd) form_field_data_wide_pane_vc_t3_ParamLimits

0x205c,	// (0x0005f8cd) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ce,	// (0x0006d03f) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ce,	// (0x0006d03f) form_field_data_wide_pane_vc_t

0x3d4d,	// (0x000615be) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3d4d,	// (0x000615be) form_field_slider_wide_pane_vc_t3

0x3e2b,	// (0x0006169c) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3e2b,	// (0x0006169c) form_field_popup_wide_pane_vc_t2

0x3e42,	// (0x000616b3) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3e42,	// (0x000616b3) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa71,	// (0x0006d2e2) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa71,	// (0x0006d2e2) form_field_popup_wide_pane_vc_t

0xbc8a,	// (0x000694fb) aid_fshwr2_btn_pane_ParamLimits

0xbc9e,	// (0x0006950f) aid_fshwr2_syb_pane_ParamLimits

0xbcb2,	// (0x00069523) aid_fshwr2_txt_pane_ParamLimits

0x1162,	// (0x0005e9d3) fshwr2_bg_pane_ParamLimits

0xbcc2,	// (0x00069533) fshwr2_func_candi_pane_ParamLimits

0xbce2,	// (0x00069553) fshwr2_hwr_syb_pane_ParamLimits

0xbd04,	// (0x00069575) fshwr2_icf_pane_ParamLimits

0x3d07,	// (0x00061578) list_double_graphic_pane_vc_g4_ParamLimits

0x3d07,	// (0x00061578) list_double_graphic_pane_vc_g4

0x1c12,	// (0x0005f483) cell_ituss_key_pane_g3_ParamLimits

0x1c12,	// (0x0005f483) cell_ituss_key_pane_g3

0x1d44,	// (0x0005f5b5) cell_ituss_key_t5_ParamLimits

0x1d44,	// (0x0005f5b5) cell_ituss_key_t5

0xefbb,	// (0x0006c82c) popup_fep_vkbss_window_ParamLimits

0x6d26,	// (0x00064597) aid_cell_ai5_quarter

0xf129,	// (0x0006c99a) icf_edit_indi_pane_t1_ParamLimits

0x9323,	// (0x00066b94) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x9323,	// (0x00066b94) aid_tch_indicator_popup_pane_cp2

0x9336,	// (0x00066ba7) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x9336,	// (0x00066ba7) aid_tch_query_popup_data_pane_cp2

0x23bd,	// (0x0005fc2e) aid_tch_query_popup_pane_ParamLimits

0x23bd,	// (0x0005fc2e) aid_tch_query_popup_pane

0x23bd,	// (0x0005fc2e) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x23bd,	// (0x0005fc2e) aid_tch_query_popup_data_pane_cp1

0x839a,	// (0x00065c0b) cell_fshwr2_syb_bg_pane_ParamLimits

0xbdf7,	// (0x00069668) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xbe0a,	// (0x0006967b) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xefac,	// (0x0006c81d) popup_fep_vkb_icf_pane_ParamLimits

0xbbf0,	// (0x00069461) bg_popup_fep_char_preview_window_g10

0x6e5b,	// (0x000646cc) cell_ai5_widget_pane_g11_ParamLimits

0x6e5b,	// (0x000646cc) cell_ai5_widget_pane_g11

0x6e67,	// (0x000646d8) cell_ai5_widget_pane_g12_ParamLimits

0x6e67,	// (0x000646d8) cell_ai5_widget_pane_g12

0x6e73,	// (0x000646e4) cell_ai5_widget_pane_g13_ParamLimits

0x6e73,	// (0x000646e4) cell_ai5_widget_pane_g13

0x6fa2,	// (0x00064813) cell_ai5_widget_pane_t11_ParamLimits

0x6fa2,	// (0x00064813) cell_ai5_widget_pane_t11

0x6fb4,	// (0x00064825) cell_ai5_widget_pane_t12_ParamLimits

0x6fb4,	// (0x00064825) cell_ai5_widget_pane_t12

0x1c1e,	// (0x0005f48f) cell_ituss_key_pane_g4_ParamLimits

0x1c1e,	// (0x0005f48f) cell_ituss_key_pane_g4

0x1c3a,	// (0x0005f4ab) cell_ituss_key_pane_g5_ParamLimits

0x1c3a,	// (0x0005f4ab) cell_ituss_key_pane_g5

0x1c56,	// (0x0005f4c7) cell_ituss_key_pane_g6_ParamLimits

0x1c56,	// (0x0005f4c7) cell_ituss_key_pane_g6

0x1f2e,	// (0x0005f79f) bg_icf_pane_g1

0xf0b1,	// (0x0006c922) bg_icf_pane_g2

0xf0bb,	// (0x0006c92c) bg_icf_pane_g3

0xf0c3,	// (0x0006c934) bg_icf_pane_g4

0xf0cd,	// (0x0006c93e) bg_icf_pane_g5

0xf0d7,	// (0x0006c948) bg_icf_pane_g6

0xf0e1,	// (0x0006c952) bg_icf_pane_g7

0xf0e9,	// (0x0006c95a) bg_icf_pane_g8

0xf0f3,	// (0x0006c964) bg_icf_pane_g9

0x0008,

0xfee4,	// (0x0006d755) bg_icf_pane_g

0x7bf9,	// (0x0006546a) popup_hyb_candi_window_ParamLimits

0x7bf9,	// (0x0006546a) popup_hyb_candi_window

0x1fba,	// (0x0005f82b) bg_popup_sub_pane_cp01_ParamLimits

0x1fba,	// (0x0005f82b) bg_popup_sub_pane_cp01

0x7e97,	// (0x00065708) entry_hyb_candi_pane_ParamLimits

0x7e97,	// (0x00065708) entry_hyb_candi_pane

0x7ea6,	// (0x00065717) grid_hyb_candi_pane_ParamLimits

0x7ea6,	// (0x00065717) grid_hyb_candi_pane

0x7ebb,	// (0x0006572c) grid_hyb_phrase_pane_ParamLimits

0x7ebb,	// (0x0006572c) grid_hyb_phrase_pane

0x7eca,	// (0x0006573b) cell_hyb_candi_pane_ParamLimits

0x7eca,	// (0x0006573b) cell_hyb_candi_pane

0x7eed,	// (0x0006575e) cell_hyb_candi_scroll_pane

0xc07a,	// (0x000698eb) cell_hyb_candi_pane_g1

0x7ef6,	// (0x00065767) cell_hyb_candi_pane_t1

0x7f04,	// (0x00065775) cell_hyb_phrase_pane

0xc07a,	// (0x000698eb) cell_hyb_phrase_pane_g1

0x7f0d,	// (0x0006577e) cell_hyb_phrase_pane_t1

0x7f1b,	// (0x0006578c) entry_hyb_candi_pane_t1

0xc4d8,	// (0x00069d49) input_focus_pane_cp06

0x7f29,	// (0x0006579a) cell_hyb_candi_scroll_pane_g1

0x7f31,	// (0x000657a2) cell_hyb_candi_scroll_pane_g1_aid

0x7f39,	// (0x000657aa) cell_hyb_candi_scroll_pane_g2

0x7f41,	// (0x000657b2) cell_hyb_candi_scroll_pane_g2_aid

0x7f49,	// (0x000657ba) cell_hyb_candi_scroll_pane_g3

0x7f51,	// (0x000657c2) cell_hyb_candi_scroll_pane_g4
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
