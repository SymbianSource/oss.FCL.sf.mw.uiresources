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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0000cfee };

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
0x7666,	// (0x00014654) Screen

0x7672,	// (0x00014660) application_window_ParamLimits

0x7672,	// (0x00014660) application_window

0x3313,	// (0x00010301) screen_g1

0x507c,	// (0x0001206a) area_bottom_pane_ParamLimits

0x507c,	// (0x0001206a) area_bottom_pane

0x513c,	// (0x0001212a) area_top_pane_ParamLimits

0x513c,	// (0x0001212a) area_top_pane

0x51da,	// (0x000121c8) main_pane_ParamLimits

0x51da,	// (0x000121c8) main_pane

0x348c,	// (0x0001047a) misc_graphics

0x89c3,	// (0x000159b1) battery_pane_ParamLimits

0x89c3,	// (0x000159b1) battery_pane

0x978a,	// (0x00016778) bg_status_flat_pane_g8

0x9792,	// (0x00016780) bg_status_flat_pane_g9

0x8a85,	// (0x00015a73) context_pane_ParamLimits

0x8a85,	// (0x00015a73) context_pane

0x8ba9,	// (0x00015b97) navi_pane_ParamLimits

0x8ba9,	// (0x00015b97) navi_pane

0x8c39,	// (0x00015c27) signal_pane_ParamLimits

0x8c39,	// (0x00015c27) signal_pane

0x0008,

0xf874,	// (0x0001c862) bg_status_flat_pane_g

0x8ca6,	// (0x00015c94) status_pane_g1_ParamLimits

0x8ca6,	// (0x00015c94) status_pane_g1

0x8cb2,	// (0x00015ca0) status_pane_g2_ParamLimits

0x8cb2,	// (0x00015ca0) status_pane_g2

0x8cbe,	// (0x00015cac) status_pane_g3_ParamLimits

0x8cbe,	// (0x00015cac) status_pane_g3

0x0004,

0xf79b,	// (0x0001c789) status_pane_g_ParamLimits

0xf79b,	// (0x0001c789) status_pane_g

0x8cf2,	// (0x00015ce0) title_pane_ParamLimits

0x8cf2,	// (0x00015ce0) title_pane

0x8d31,	// (0x00015d1f) uni_indicator_pane_ParamLimits

0x8d31,	// (0x00015d1f) uni_indicator_pane

0x88e5,	// (0x000158d3) bg_list_pane_ParamLimits

0x88e5,	// (0x000158d3) bg_list_pane

0x8905,	// (0x000158f3) find_pane

0x890d,	// (0x000158fb) listscroll_app_pane_ParamLimits

0x890d,	// (0x000158fb) listscroll_app_pane

0x8919,	// (0x00015907) listscroll_form_pane

0x5adf,	// (0x00012acd) listscroll_gen_pane_ParamLimits

0x5adf,	// (0x00012acd) listscroll_gen_pane

0x5af3,	// (0x00012ae1) listscroll_set_pane

0x7ff3,	// (0x00014fe1) main_idle_act_pane

0x85de,	// (0x000155cc) main_idle_trad_pane

0x85de,	// (0x000155cc) main_list_empty_pane

0x890d,	// (0x000158fb) main_midp_pane

0x8933,	// (0x00015921) main_pane_g1_ParamLimits

0x8933,	// (0x00015921) main_pane_g1

0x5b09,	// (0x00012af7) popup_ai_message_window_ParamLimits

0x5b09,	// (0x00012af7) popup_ai_message_window

0x5bbd,	// (0x00012bab) popup_fep_china_uni_window_ParamLimits

0x5bbd,	// (0x00012bab) popup_fep_china_uni_window

0x5c1d,	// (0x00012c0b) popup_fep_japan_candidate_window_ParamLimits

0x5c1d,	// (0x00012c0b) popup_fep_japan_candidate_window

0x5c47,	// (0x00012c35) popup_fep_japan_predictive_window_ParamLimits

0x5c47,	// (0x00012c35) popup_fep_japan_predictive_window

0x5c7d,	// (0x00012c6b) popup_find_window

0x5c8a,	// (0x00012c78) popup_grid_graphic_window_ParamLimits

0x5c8a,	// (0x00012c78) popup_grid_graphic_window

0x5cb8,	// (0x00012ca6) popup_large_graphic_colour_window

0x5cde,	// (0x00012ccc) popup_menu_window_ParamLimits

0x5cde,	// (0x00012ccc) popup_menu_window

0x5ea8,	// (0x00012e96) popup_note_image_window

0x5e92,	// (0x00012e80) popup_note_wait_window_ParamLimits

0x5e92,	// (0x00012e80) popup_note_wait_window

0x5e92,	// (0x00012e80) popup_note_window_ParamLimits

0x5e92,	// (0x00012e80) popup_note_window

0x5f0e,	// (0x00012efc) popup_query_code_window_ParamLimits

0x5f0e,	// (0x00012efc) popup_query_code_window

0x5f24,	// (0x00012f12) popup_query_data_code_window_ParamLimits

0x5f24,	// (0x00012f12) popup_query_data_code_window

0x5f47,	// (0x00012f35) popup_query_data_window_ParamLimits

0x5f47,	// (0x00012f35) popup_query_data_window

0x5f69,	// (0x00012f57) popup_query_sat_info_window_ParamLimits

0x5f69,	// (0x00012f57) popup_query_sat_info_window

0x5fa8,	// (0x00012f96) popup_snote_single_graphic_window_ParamLimits

0x5fa8,	// (0x00012f96) popup_snote_single_graphic_window

0x5fa8,	// (0x00012f96) popup_snote_single_text_window_ParamLimits

0x5fa8,	// (0x00012f96) popup_snote_single_text_window

0x5fbf,	// (0x00012fad) popup_sub_window_general

0x6105,	// (0x000130f3) popup_window_general_ParamLimits

0x6105,	// (0x000130f3) popup_window_general

0x8949,	// (0x00015937) power_save_pane

0x5959,	// (0x00012947) control_pane_g1_ParamLimits

0x5959,	// (0x00012947) control_pane_g1

0x5982,	// (0x00012970) control_pane_g2_ParamLimits

0x5982,	// (0x00012970) control_pane_g2

0x88a8,	// (0x00015896) control_pane_g3_ParamLimits

0x88a8,	// (0x00015896) control_pane_g3

0x0007,

0xf783,	// (0x0001c771) control_pane_g_ParamLimits

0xf783,	// (0x0001c771) control_pane_g

0x59ce,	// (0x000129bc) control_pane_t1_ParamLimits

0x59ce,	// (0x000129bc) control_pane_t1

0x5a28,	// (0x00012a16) control_pane_t2_ParamLimits

0x5a28,	// (0x00012a16) control_pane_t2

0x0002,

0xf794,	// (0x0001c782) control_pane_t_ParamLimits

0xf794,	// (0x0001c782) control_pane_t

0x87cd,	// (0x000157bb) navi_navi_volume_pane_cp1

0x87d5,	// (0x000157c3) status_small_icon_pane

0x87dd,	// (0x000157cb) status_small_pane_g1_ParamLimits

0x87dd,	// (0x000157cb) status_small_pane_g1

0x8811,	// (0x000157ff) status_small_pane_g2_ParamLimits

0x8811,	// (0x000157ff) status_small_pane_g2

0x881d,	// (0x0001580b) status_small_pane_g3_ParamLimits

0x881d,	// (0x0001580b) status_small_pane_g3

0x8829,	// (0x00015817) status_small_pane_g4_ParamLimits

0x8829,	// (0x00015817) status_small_pane_g4

0x8835,	// (0x00015823) status_small_pane_g5_ParamLimits

0x8835,	// (0x00015823) status_small_pane_g5

0x8843,	// (0x00015831) status_small_pane_g6_ParamLimits

0x8843,	// (0x00015831) status_small_pane_g6

0x0007,

0xf772,	// (0x0001c760) status_small_pane_g_ParamLimits

0xf772,	// (0x0001c760) status_small_pane_g

0x8872,	// (0x00015860) status_small_pane_t1

0x8894,	// (0x00015882) status_small_wait_pane_ParamLimits

0x8894,	// (0x00015882) status_small_wait_pane

0x813b,	// (0x00015129) aid_levels_signal_ParamLimits

0x813b,	// (0x00015129) aid_levels_signal

0x814a,	// (0x00015138) signal_pane_g1_ParamLimits

0x814a,	// (0x00015138) signal_pane_g1

0x815f,	// (0x0001514d) signal_pane_g2_ParamLimits

0x815f,	// (0x0001514d) signal_pane_g2

0x0003,

0xf703,	// (0x0001c6f1) signal_pane_g_ParamLimits

0xf703,	// (0x0001c6f1) signal_pane_g

0x44a7,	// (0x00011495) context_pane_g1

0x7682,	// (0x00014670) title_pane_g1

0x76b4,	// (0x000146a2) title_pane_t1

0x34f6,	// (0x000104e4) title_pane_t2

0x351c,	// (0x0001050a) title_pane_t3

0x0002,

0xf557,	// (0x0001c545) title_pane_t

0x8d49,	// (0x00015d37) aid_levels_battery_ParamLimits

0x8d49,	// (0x00015d37) aid_levels_battery

0x8d5a,	// (0x00015d48) battery_pane_g1_ParamLimits

0x8d5a,	// (0x00015d48) battery_pane_g1

0x8d70,	// (0x00015d5e) battery_pane_g2_ParamLimits

0x8d70,	// (0x00015d5e) battery_pane_g2

0x0001,

0xf7a6,	// (0x0001c794) battery_pane_g_ParamLimits

0xf7a6,	// (0x0001c794) battery_pane_g

0xa0d4,	// (0x000170c2) uni_indicator_pane_g1

0xa0e7,	// (0x000170d5) uni_indicator_pane_g2

0xa0f9,	// (0x000170e7) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0001c90a) uni_indicator_pane_g

0x8458,	// (0x00015446) navi_icon_pane_ParamLimits

0x8458,	// (0x00015446) navi_icon_pane

0x8394,	// (0x00015382) navi_midp_pane

0x8474,	// (0x00015462) navi_navi_pane

0x847e,	// (0x0001546c) navi_text_pane_ParamLimits

0x847e,	// (0x0001546c) navi_text_pane

0x3313,	// (0x00010301) status_small_wait_pane_g1

0x38ea,	// (0x000108d8) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0001c905) status_small_wait_pane_g

0x9de7,	// (0x00016dd5) navi_navi_icon_text_pane

0x9def,	// (0x00016ddd) navi_navi_pane_g1_ParamLimits

0x9def,	// (0x00016ddd) navi_navi_pane_g1

0x9e01,	// (0x00016def) navi_navi_pane_g2_ParamLimits

0x9e01,	// (0x00016def) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0001c8d3) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0001c8d3) navi_navi_pane_g

0x9e13,	// (0x00016e01) navi_navi_tabs_pane

0x9e1c,	// (0x00016e0a) navi_navi_text_pane

0x9de7,	// (0x00016dd5) navi_navi_volume_pane

0x9dc3,	// (0x00016db1) navi_text_pane_t1

0x9db7,	// (0x00016da5) navi_icon_pane_g1

0x9d0a,	// (0x00016cf8) navi_navi_text_pane_t1

0x642e,	// (0x0001341c) navi_navi_volume_pane_g1

0x6436,	// (0x00013424) volume_small_pane

0x9c70,	// (0x00016c5e) navi_navi_icon_text_pane_g1

0x9c78,	// (0x00016c66) navi_navi_icon_text_pane_t1

0x8474,	// (0x00015462) navi_tabs_2_long_pane

0x8474,	// (0x00015462) navi_tabs_2_pane

0x8474,	// (0x00015462) navi_tabs_3_long_pane

0x8474,	// (0x00015462) navi_tabs_3_pane

0x8474,	// (0x00015462) navi_tabs_4_pane

0x640e,	// (0x000133fc) tabs_2_active_pane_ParamLimits

0x640e,	// (0x000133fc) tabs_2_active_pane

0x641e,	// (0x0001340c) tabs_2_passive_pane_ParamLimits

0x641e,	// (0x0001340c) tabs_2_passive_pane

0x63dc,	// (0x000133ca) tabs_3_active_pane_ParamLimits

0x63dc,	// (0x000133ca) tabs_3_active_pane

0x63ec,	// (0x000133da) tabs_3_passive_pane_ParamLimits

0x63ec,	// (0x000133da) tabs_3_passive_pane

0x63fd,	// (0x000133eb) tabs_3_passive_pane_cp_ParamLimits

0x63fd,	// (0x000133eb) tabs_3_passive_pane_cp

0x6390,	// (0x0001337e) tabs_4_active_pane_ParamLimits

0x6390,	// (0x0001337e) tabs_4_active_pane

0x63a3,	// (0x00013391) tabs_4_passive_pane_ParamLimits

0x63a3,	// (0x00013391) tabs_4_passive_pane

0x63b4,	// (0x000133a2) tabs_4_passive_pane_cp_ParamLimits

0x63b4,	// (0x000133a2) tabs_4_passive_pane_cp

0x63c5,	// (0x000133b3) tabs_4_passive_pane_cp2_ParamLimits

0x63c5,	// (0x000133b3) tabs_4_passive_pane_cp2

0x636c,	// (0x0001335a) tabs_2_long_active_pane_ParamLimits

0x636c,	// (0x0001335a) tabs_2_long_active_pane

0x637e,	// (0x0001336c) tabs_2_long_passive_pane_ParamLimits

0x637e,	// (0x0001336c) tabs_2_long_passive_pane

0x632d,	// (0x0001331b) tabs_3_long_active_pane_ParamLimits

0x632d,	// (0x0001331b) tabs_3_long_active_pane

0x6340,	// (0x0001332e) tabs_3_long_passive_pane_ParamLimits

0x6340,	// (0x0001332e) tabs_3_long_passive_pane

0x6359,	// (0x00013347) tabs_3_long_passive_pane_cp_ParamLimits

0x6359,	// (0x00013347) tabs_3_long_passive_pane_cp

0x62d3,	// (0x000132c1) volume_small_pane_g1

0x62dc,	// (0x000132ca) volume_small_pane_g2

0x62e5,	// (0x000132d3) volume_small_pane_g3

0x62ee,	// (0x000132dc) volume_small_pane_g4

0x62f7,	// (0x000132e5) volume_small_pane_g5

0x6300,	// (0x000132ee) volume_small_pane_g6

0x6309,	// (0x000132f7) volume_small_pane_g7

0x6312,	// (0x00013300) volume_small_pane_g8

0x631b,	// (0x00013309) volume_small_pane_g9

0x6324,	// (0x00013312) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0001c89f) volume_small_pane_g

0x3546,	// (0x00010534) bg_active_tab_pane_cp2_ParamLimits

0x3546,	// (0x00010534) bg_active_tab_pane_cp2

0x771c,	// (0x0001470a) tabs_3_active_pane_g1

0x7724,	// (0x00014712) tabs_3_active_pane_t1

0x3546,	// (0x00010534) bg_passive_tab_pane_cp2_ParamLimits

0x3546,	// (0x00010534) bg_passive_tab_pane_cp2

0x771c,	// (0x0001470a) tabs_3_passive_pane_g1

0x7724,	// (0x00014712) tabs_3_passive_pane_t1

0x3546,	// (0x00010534) bg_active_tab_pane_cp3_ParamLimits

0x3546,	// (0x00010534) bg_active_tab_pane_cp3

0x7736,	// (0x00014724) tabs_4_active_pane_g1

0x773e,	// (0x0001472c) tabs_4_active_pane_t1

0x3546,	// (0x00010534) bg_passive_tab_pane_cp3_ParamLimits

0x3546,	// (0x00010534) bg_passive_tab_pane_cp3

0x7736,	// (0x00014724) tabs_4_1_passive_pane_g1

0x773e,	// (0x0001472c) tabs_4_1_passive_pane_t1

0x890d,	// (0x000158fb) list_highlight_pane_cp2

0xa36a,	// (0x00017358) list_set_pane_ParamLimits

0xa36a,	// (0x00017358) list_set_pane

0xa42c,	// (0x0001741a) main_pane_set_t1_ParamLimits

0xa42c,	// (0x0001741a) main_pane_set_t1

0xa44c,	// (0x0001743a) main_pane_set_t2_ParamLimits

0xa44c,	// (0x0001743a) main_pane_set_t2

0xa460,	// (0x0001744e) main_pane_set_t3_ParamLimits

0xa460,	// (0x0001744e) main_pane_set_t3

0xa474,	// (0x00017462) main_pane_set_t4_ParamLimits

0xa474,	// (0x00017462) main_pane_set_t4

0x0003,

0xf981,	// (0x0001c96f) main_pane_set_t_ParamLimits

0xf981,	// (0x0001c96f) main_pane_set_t

0xa488,	// (0x00017476) setting_code_pane

0xa492,	// (0x00017480) setting_slider_graphic_pane

0xa492,	// (0x00017480) setting_slider_pane

0xa492,	// (0x00017480) setting_text_pane

0xa492,	// (0x00017480) setting_volume_pane

0x5439,	// (0x00012427) volume_set_pane

0x3546,	// (0x00010534) bg_set_opt_pane_cp

0x5443,	// (0x00012431) setting_slider_pane_t1

0x545c,	// (0x0001244a) setting_slider_pane_t2

0x5476,	// (0x00012464) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0001c54c) setting_slider_pane_t

0x548e,	// (0x0001247c) slider_set_pane

0x348c,	// (0x0001047a) bg_set_opt_pane_cp2

0x35b5,	// (0x000105a3) setting_slider_graphic_pane_g1

0x54a4,	// (0x00012492) setting_slider_graphic_pane_t1

0x54b4,	// (0x000124a2) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0001c553) setting_slider_graphic_pane_t

0x54c4,	// (0x000124b2) slider_set_pane_cp

0x348c,	// (0x0001047a) input_focus_pane_cp1

0xa32b,	// (0x00017319) list_set_text_pane

0x3313,	// (0x00010301) setting_text_pane_g1

0x348c,	// (0x0001047a) input_focus_pane_cp2

0x3313,	// (0x00010301) setting_code_pane_g1

0x35e6,	// (0x000105d4) setting_code_pane_t1

0x35f4,	// (0x000105e2) set_text_pane_t1_ParamLimits

0x35f4,	// (0x000105e2) set_text_pane_t1

0x3d5c,	// (0x00010d4a) set_opt_bg_pane_g1

0x3d64,	// (0x00010d52) set_opt_bg_pane_g2

0xa303,	// (0x000172f1) set_opt_bg_pane_g3

0x3d74,	// (0x00010d62) set_opt_bg_pane_g4

0x3d7c,	// (0x00010d6a) set_opt_bg_pane_g5

0x3d84,	// (0x00010d72) set_opt_bg_pane_g6

0xa30d,	// (0x000172fb) set_opt_bg_pane_g7

0xa317,	// (0x00017305) set_opt_bg_pane_g8

0xa321,	// (0x0001730f) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0001c95c) set_opt_bg_pane_g

0xa2f6,	// (0x000172e4) slider_set_pane_g1

0x64b7,	// (0x000134a5) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0001c94d) slider_set_pane_g

0x643f,	// (0x0001342d) volume_set_pane_g1

0x6449,	// (0x00013437) volume_set_pane_g2

0x6453,	// (0x00013441) volume_set_pane_g3

0x645d,	// (0x0001344b) volume_set_pane_g4

0x6467,	// (0x00013455) volume_set_pane_g5

0x6471,	// (0x0001345f) volume_set_pane_g6

0x647b,	// (0x00013469) volume_set_pane_g7

0x6485,	// (0x00013473) volume_set_pane_g8

0x648f,	// (0x0001347d) volume_set_pane_g9

0x6499,	// (0x00013487) volume_set_pane_g10

0x0009,

0xf937,	// (0x0001c925) volume_set_pane_g

0x7750,	// (0x0001473e) indicator_pane_ParamLimits

0x7750,	// (0x0001473e) indicator_pane

0x775c,	// (0x0001474a) main_idle_pane_g2_ParamLimits

0x775c,	// (0x0001474a) main_idle_pane_g2

0x7784,	// (0x00014772) main_pane_idle_g1_ParamLimits

0x7784,	// (0x00014772) main_pane_idle_g1

0x360e,	// (0x000105fc) popup_clock_digital_analogue_window_ParamLimits

0x360e,	// (0x000105fc) popup_clock_digital_analogue_window

0x7792,	// (0x00014780) soft_indicator_pane_ParamLimits

0x7792,	// (0x00014780) soft_indicator_pane

0x77a0,	// (0x0001478e) wallpaper_pane_ParamLimits

0x77a0,	// (0x0001478e) wallpaper_pane

0x3313,	// (0x00010301) wallpaper_pane_g1

0x77ac,	// (0x0001479a) indicator_pane_g1_ParamLimits

0x77ac,	// (0x0001479a) indicator_pane_g1

0xa7f7,	// (0x000177e5) navi_navi_icon_text_pane_srt_g1

0x363c,	// (0x0001062a) soft_indicator_pane_t1

0x3656,	// (0x00010644) aid_ps_area_pane

0x77b8,	// (0x000147a6) aid_ps_clock_pane

0x3667,	// (0x00010655) aid_ps_indicator_pane

0x3673,	// (0x00010661) indicator_ps_pane_ParamLimits

0x3673,	// (0x00010661) indicator_ps_pane

0x3682,	// (0x00010670) power_save_pane_g1_ParamLimits

0x3682,	// (0x00010670) power_save_pane_g1

0x368e,	// (0x0001067c) power_save_pane_g2_ParamLimits

0x368e,	// (0x0001067c) power_save_pane_g2

0x5030,	// (0x0001201e) aid_navinavi_width_pane

0x3656,	// (0x00010644) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0001c558) power_save_pane_g_ParamLimits

0xf56a,	// (0x0001c558) power_save_pane_g

0x369c,	// (0x0001068a) power_save_pane_t1_ParamLimits

0x369c,	// (0x0001068a) power_save_pane_t1

0x77b8,	// (0x000147a6) aid_ps_clock_pane_ParamLimits

0x3667,	// (0x00010655) aid_ps_indicator_pane_ParamLimits

0x36ae,	// (0x0001069c) power_save_pane_t4_ParamLimits

0x36ae,	// (0x0001069c) power_save_pane_t4

0x0001,

0xf56f,	// (0x0001c55d) power_save_pane_t_ParamLimits

0xf56f,	// (0x0001c55d) power_save_pane_t

0x36d8,	// (0x000106c6) power_save_t3_ParamLimits

0x36d8,	// (0x000106c6) power_save_t3

0x36c3,	// (0x000106b1) power_save_t2_ParamLimits

0x36c3,	// (0x000106b1) power_save_t2

0x36ed,	// (0x000106db) indicator_ps_pane_g1

0x77c6,	// (0x000147b4) ai_gene_pane_ParamLimits

0x77c6,	// (0x000147b4) ai_gene_pane

0x77d2,	// (0x000147c0) ai_links_pane_ParamLimits

0x77d2,	// (0x000147c0) ai_links_pane

0x77de,	// (0x000147cc) indicator_pane_cp1_ParamLimits

0x77de,	// (0x000147cc) indicator_pane_cp1

0x77ea,	// (0x000147d8) main_pane_idle_g1_cp_ParamLimits

0x77ea,	// (0x000147d8) main_pane_idle_g1_cp

0x36f6,	// (0x000106e4) popup_ai_links_title_window

0x77f6,	// (0x000147e4) soft_indicator_pane_cp1_ParamLimits

0x77f6,	// (0x000147e4) soft_indicator_pane_cp1

0xa0c2,	// (0x000170b0) ai_links_pane_g1

0xa0cb,	// (0x000170b9) grid_ai_links_pane

0xa0a7,	// (0x00017095) ai_gene_pane_1

0xa0b0,	// (0x0001709e) ai_gene_pane_2

0xa0b9,	// (0x000170a7) list_highlight_pane_cp4

0xa087,	// (0x00017075) cell_ai_link_pane_ParamLimits

0xa087,	// (0x00017075) cell_ai_link_pane

0xa07f,	// (0x0001706d) cell_ai_link_pane_g1

0x38ea,	// (0x000108d8) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0001c900) cell_ai_link_pane_g

0x348c,	// (0x0001047a) grid_highlight_cp2

0x348c,	// (0x0001047a) bg_popup_sub_pane_cp1

0x370d,	// (0x000106fb) popup_ai_links_title_window_t1

0x9fcb,	// (0x00016fb9) ai_gene_pane_1_g1_ParamLimits

0x9fcb,	// (0x00016fb9) ai_gene_pane_1_g1

0x9fd7,	// (0x00016fc5) ai_gene_pane_1_g2_ParamLimits

0x9fd7,	// (0x00016fc5) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0001c8f6) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0001c8f6) ai_gene_pane_1_g

0x9fe4,	// (0x00016fd2) ai_gene_pane_1_t1_ParamLimits

0x9fe4,	// (0x00016fd2) ai_gene_pane_1_t1

0xa018,	// (0x00017006) grid_ai_soft_ind_pane

0x9fb6,	// (0x00016fa4) ai_gene_pane_2_t1_ParamLimits

0x9fb6,	// (0x00016fa4) ai_gene_pane_2_t1

0x7802,	// (0x000147f0) main_pane_empty_t1_ParamLimits

0x7802,	// (0x000147f0) main_pane_empty_t1

0x781a,	// (0x00014808) main_pane_empty_t2_ParamLimits

0x781a,	// (0x00014808) main_pane_empty_t2

0x782f,	// (0x0001481d) main_pane_empty_t3_ParamLimits

0x782f,	// (0x0001481d) main_pane_empty_t3

0x7841,	// (0x0001482f) main_pane_empty_t4_ParamLimits

0x7841,	// (0x0001482f) main_pane_empty_t4

0x7853,	// (0x00014841) main_pane_empty_t5_ParamLimits

0x7853,	// (0x00014841) main_pane_empty_t5

0x0004,

0xf574,	// (0x0001c562) main_pane_empty_t_ParamLimits

0xf574,	// (0x0001c562) main_pane_empty_t

0x3de8,	// (0x00010dd6) bg_popup_window_pane_ParamLimits

0x3de8,	// (0x00010dd6) bg_popup_window_pane

0x9d18,	// (0x00016d06) find_popup_pane_cp2_ParamLimits

0x9d18,	// (0x00016d06) find_popup_pane_cp2

0x9d24,	// (0x00016d12) heading_pane_ParamLimits

0x9d24,	// (0x00016d12) heading_pane

0x348c,	// (0x0001047a) bg_popup_sub_pane

0x9c92,	// (0x00016c80) bg_popup_window_pane_g1_ParamLimits

0x9c92,	// (0x00016c80) bg_popup_window_pane_g1

0x9c9e,	// (0x00016c8c) bg_popup_window_pane_g2_ParamLimits

0x9c9e,	// (0x00016c8c) bg_popup_window_pane_g2

0x9caa,	// (0x00016c98) bg_popup_window_pane_g3_ParamLimits

0x9caa,	// (0x00016c98) bg_popup_window_pane_g3

0x9cb6,	// (0x00016ca4) bg_popup_window_pane_g4_ParamLimits

0x9cb6,	// (0x00016ca4) bg_popup_window_pane_g4

0x9cc2,	// (0x00016cb0) bg_popup_window_pane_g5_ParamLimits

0x9cc2,	// (0x00016cb0) bg_popup_window_pane_g5

0x9cce,	// (0x00016cbc) bg_popup_window_pane_g6_ParamLimits

0x9cce,	// (0x00016cbc) bg_popup_window_pane_g6

0x9cda,	// (0x00016cc8) bg_popup_window_pane_g7_ParamLimits

0x9cda,	// (0x00016cc8) bg_popup_window_pane_g7

0x9ce6,	// (0x00016cd4) bg_popup_window_pane_g8_ParamLimits

0x9ce6,	// (0x00016cd4) bg_popup_window_pane_g8

0x9cf2,	// (0x00016ce0) bg_popup_window_pane_g9_ParamLimits

0x9cf2,	// (0x00016ce0) bg_popup_window_pane_g9

0x9cfe,	// (0x00016cec) bg_popup_window_pane_g10_ParamLimits

0x9cfe,	// (0x00016cec) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0001c8be) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0001c8be) bg_popup_window_pane_g

0x9c27,	// (0x00016c15) bg_popup_heading_pane_ParamLimits

0x9c27,	// (0x00016c15) bg_popup_heading_pane

0x653f,	// (0x0001352d) tabs_4_passive_pane_cp_srt_ParamLimits

0x653f,	// (0x0001352d) tabs_4_passive_pane_cp_srt

0x6551,	// (0x0001353f) tabs_4_passive_pane_srt_ParamLimits

0x9c3b,	// (0x00016c29) heading_pane_g2

0x6551,	// (0x0001353f) tabs_4_passive_pane_srt

0x890d,	// (0x000158fb) bg_passive_tab_pane_cp3_srt_ParamLimits

0x890d,	// (0x000158fb) bg_passive_tab_pane_cp3_srt

0x9c43,	// (0x00016c31) heading_pane_t1_ParamLimits

0x9c43,	// (0x00016c31) heading_pane_t1

0x9c5a,	// (0x00016c48) heading_pane_t2_ParamLimits

0x9c5a,	// (0x00016c48) heading_pane_t2

0x0001,

0xf8cb,	// (0x0001c8b9) heading_pane_t_ParamLimits

0xf8cb,	// (0x0001c8b9) heading_pane_t

0x9752,	// (0x00016740) bg_popup_heading_pane_g1

0x9801,	// (0x000167ef) bg_popup_heading_pane_g2

0x980b,	// (0x000167f9) bg_popup_heading_pane_g3

0x9815,	// (0x00016803) bg_popup_heading_pane_g4

0x981f,	// (0x0001680d) bg_popup_heading_pane_g5

0x9829,	// (0x00016817) bg_popup_heading_pane_g6

0x9831,	// (0x0001681f) bg_popup_heading_pane_g7

0x9839,	// (0x00016827) bg_popup_heading_pane_g8

0x9843,	// (0x00016831) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0001c875) bg_popup_heading_pane_g

0x8e73,	// (0x00015e61) bg_popup_sub_pane_g1

0x8e83,	// (0x00015e71) bg_popup_sub_pane_g2

0x8e7b,	// (0x00015e69) bg_popup_sub_pane_g3

0x8e93,	// (0x00015e81) bg_popup_sub_pane_g4

0x8e8b,	// (0x00015e79) bg_popup_sub_pane_g5

0x8e9b,	// (0x00015e89) bg_popup_sub_pane_g6

0x8ea3,	// (0x00015e91) bg_popup_sub_pane_g7

0x8eb3,	// (0x00015ea1) bg_popup_sub_pane_g8

0x8eab,	// (0x00015e99) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0001c84f) bg_popup_sub_pane_g

0x352e,	// (0x0001051c) bg_popup_window_pane_cp5_ParamLimits

0x352e,	// (0x0001051c) bg_popup_window_pane_cp5

0x372a,	// (0x00010718) popup_note_window_g1_ParamLimits

0x372a,	// (0x00010718) popup_note_window_g1

0x3736,	// (0x00010724) popup_note_window_t1_ParamLimits

0x3736,	// (0x00010724) popup_note_window_t1

0x374c,	// (0x0001073a) popup_note_window_t2_ParamLimits

0x374c,	// (0x0001073a) popup_note_window_t2

0x3762,	// (0x00010750) popup_note_window_t3_ParamLimits

0x3762,	// (0x00010750) popup_note_window_t3

0x3778,	// (0x00010766) popup_note_window_t4_ParamLimits

0x3778,	// (0x00010766) popup_note_window_t4

0x37a0,	// (0x0001078e) popup_note_window_t5_ParamLimits

0x37a0,	// (0x0001078e) popup_note_window_t5

0x0004,

0xf57f,	// (0x0001c56d) popup_note_window_t_ParamLimits

0xf57f,	// (0x0001c56d) popup_note_window_t

0x37ea,	// (0x000107d8) bg_popup_window_pane_cp6_ParamLimits

0x37ea,	// (0x000107d8) bg_popup_window_pane_cp6

0x96ce,	// (0x000166bc) popup_note_image_window_g1_ParamLimits

0x96ce,	// (0x000166bc) popup_note_image_window_g1

0x96da,	// (0x000166c8) popup_note_image_window_g2_ParamLimits

0x96da,	// (0x000166c8) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0001c843) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0001c843) popup_note_image_window_g

0x96f3,	// (0x000166e1) popup_note_image_window_t1_ParamLimits

0x96f3,	// (0x000166e1) popup_note_image_window_t1

0x970c,	// (0x000166fa) popup_note_image_window_t2_ParamLimits

0x970c,	// (0x000166fa) popup_note_image_window_t2

0x9725,	// (0x00016713) popup_note_image_window_t3_ParamLimits

0x9725,	// (0x00016713) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0001c848) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0001c848) popup_note_image_window_t

0x958e,	// (0x0001657c) bg_popup_window_pane_cp7_ParamLimits

0x958e,	// (0x0001657c) bg_popup_window_pane_cp7

0x95be,	// (0x000165ac) popup_note_wait_window_g1_ParamLimits

0x95be,	// (0x000165ac) popup_note_wait_window_g1

0x95ca,	// (0x000165b8) popup_note_wait_window_g2_ParamLimits

0x95ca,	// (0x000165b8) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0001c831) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0001c831) popup_note_wait_window_g

0x95e2,	// (0x000165d0) popup_note_wait_window_t1_ParamLimits

0x95e2,	// (0x000165d0) popup_note_wait_window_t1

0x9609,	// (0x000165f7) popup_note_wait_window_t2_ParamLimits

0x9609,	// (0x000165f7) popup_note_wait_window_t2

0x9627,	// (0x00016615) popup_note_wait_window_t3_ParamLimits

0x9627,	// (0x00016615) popup_note_wait_window_t3

0x963a,	// (0x00016628) popup_note_wait_window_t4_ParamLimits

0x963a,	// (0x00016628) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0001c838) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0001c838) popup_note_wait_window_t

0x965f,	// (0x0001664d) wait_bar_pane_ParamLimits

0x965f,	// (0x0001664d) wait_bar_pane

0x348c,	// (0x0001047a) wait_anim_pane

0x348c,	// (0x0001047a) wait_border_pane

0x3313,	// (0x00010301) wait_anim_pane_g1

0x3313,	// (0x00010301) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0001c6ec) wait_anim_pane_g

0x9532,	// (0x00016520) wait_border_pane_g1

0x953d,	// (0x0001652b) wait_border_pane_g2

0x9546,	// (0x00016534) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0001c82a) wait_border_pane_g

0x939c,	// (0x0001638a) bg_popup_window_pane_cp16_ParamLimits

0x939c,	// (0x0001638a) bg_popup_window_pane_cp16

0x949c,	// (0x0001648a) indicator_popup_pane_cp4_ParamLimits

0x949c,	// (0x0001648a) indicator_popup_pane_cp4

0x94b0,	// (0x0001649e) popup_query_data_window_t1_ParamLimits

0x94b0,	// (0x0001649e) popup_query_data_window_t1

0x94c2,	// (0x000164b0) popup_query_data_window_t2_ParamLimits

0x94c2,	// (0x000164b0) popup_query_data_window_t2

0x94db,	// (0x000164c9) popup_query_data_window_t3_ParamLimits

0x94db,	// (0x000164c9) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0001c823) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0001c823) popup_query_data_window_t

0x94f5,	// (0x000164e3) query_popup_data_pane_ParamLimits

0x94f5,	// (0x000164e3) query_popup_data_pane

0x9509,	// (0x000164f7) query_popup_data_pane_cp1_ParamLimits

0x9509,	// (0x000164f7) query_popup_data_pane_cp1

0x939c,	// (0x0001638a) bg_popup_window_pane_cp10_ParamLimits

0x939c,	// (0x0001638a) bg_popup_window_pane_cp10

0x93ce,	// (0x000163bc) indicator_popup_pane_ParamLimits

0x93ce,	// (0x000163bc) indicator_popup_pane

0x93f0,	// (0x000163de) popup_query_code_window_t1_ParamLimits

0x93f0,	// (0x000163de) popup_query_code_window_t1

0x940a,	// (0x000163f8) popup_query_code_window_t2_ParamLimits

0x940a,	// (0x000163f8) popup_query_code_window_t2

0x9453,	// (0x00016441) popup_query_code_window_t3_ParamLimits

0x9453,	// (0x00016441) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0001c81c) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0001c81c) popup_query_code_window_t

0x9482,	// (0x00016470) query_popup_pane_ParamLimits

0x9482,	// (0x00016470) query_popup_pane

0x37ea,	// (0x000107d8) bg_popup_window_pane_cp15_ParamLimits

0x37ea,	// (0x000107d8) bg_popup_window_pane_cp15

0x380a,	// (0x000107f8) indicator_popup_pane_cp1_ParamLimits

0x380a,	// (0x000107f8) indicator_popup_pane_cp1

0x381d,	// (0x0001080b) indicator_popup_pane_cp2_ParamLimits

0x381d,	// (0x0001080b) indicator_popup_pane_cp2

0x3838,	// (0x00010826) popup_query_data_code_window_g1_ParamLimits

0x3838,	// (0x00010826) popup_query_data_code_window_g1

0x384b,	// (0x00010839) popup_query_data_code_window_t1_ParamLimits

0x384b,	// (0x00010839) popup_query_data_code_window_t1

0x385d,	// (0x0001084b) popup_query_data_code_window_t2_ParamLimits

0x385d,	// (0x0001084b) popup_query_data_code_window_t2

0x386f,	// (0x0001085d) popup_query_data_code_window_t3_ParamLimits

0x386f,	// (0x0001085d) popup_query_data_code_window_t3

0x3885,	// (0x00010873) popup_query_data_code_window_t4_ParamLimits

0x3885,	// (0x00010873) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0001c578) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0001c578) popup_query_data_code_window_t

0x61df,	// (0x000131cd) list_single_midp_graphic_pane_g3

0x389f,	// (0x0001088d) query_popup_data_pane_cp2_ParamLimits

0x38b2,	// (0x000108a0) query_popup_pane_cp2_ParamLimits

0x38b2,	// (0x000108a0) query_popup_pane_cp2

0x348c,	// (0x0001047a) bg_popup_window_pane_cp11

0x9388,	// (0x00016376) heading_pane_cp5

0x394b,	// (0x00010939) listscroll_popup_info_pane

0x348c,	// (0x0001047a) input_focus_pane_cp3

0x38cd,	// (0x000108bb) query_popup_pane_t1

0x38db,	// (0x000108c9) list_popup_info_pane_ParamLimits

0x38db,	// (0x000108c9) list_popup_info_pane

0x38ea,	// (0x000108d8) listscroll_popup_info_pane_g1

0x38f2,	// (0x000108e0) scroll_pane_cp7

0x38fc,	// (0x000108ea) popup_info_list_pane_t1_ParamLimits

0x38fc,	// (0x000108ea) popup_info_list_pane_t1

0x3916,	// (0x00010904) popup_info_list_pane_t2_ParamLimits

0x3916,	// (0x00010904) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0001c581) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0001c581) popup_info_list_pane_t

0x348c,	// (0x0001047a) bg_popup_window_pane_cp12

0xa811,	// (0x000177ff) find_popup_pane

0x3546,	// (0x00010534) bg_popup_window_pane_cp3

0x3930,	// (0x0001091e) heading_pane_cp3

0x393c,	// (0x0001092a) listscroll_popup_graphic_pane

0x348c,	// (0x0001047a) bg_popup_window_pane_cp4

0x78b5,	// (0x000148a3) heading_pane_cp4

0x394b,	// (0x00010939) listscroll_popup_colour_pane

0x78bf,	// (0x000148ad) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x78bf,	// (0x000148ad) cell_large_graphic_colour_none_popup_pane

0x78d3,	// (0x000148c1) grid_large_graphic_colour_popup_pane_ParamLimits

0x78d3,	// (0x000148c1) grid_large_graphic_colour_popup_pane

0x78ff,	// (0x000148ed) listscroll_popup_colour_pane_g1_ParamLimits

0x78ff,	// (0x000148ed) listscroll_popup_colour_pane_g1

0x7916,	// (0x00014904) listscroll_popup_colour_pane_g2_ParamLimits

0x7916,	// (0x00014904) listscroll_popup_colour_pane_g2

0x792d,	// (0x0001491b) listscroll_popup_colour_pane_g3_ParamLimits

0x792d,	// (0x0001491b) listscroll_popup_colour_pane_g3

0x793d,	// (0x0001492b) listscroll_popup_colour_pane_g4_ParamLimits

0x793d,	// (0x0001492b) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0001c586) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0001c586) listscroll_popup_colour_pane_g

0x3953,	// (0x00010941) scroll_pane_cp6_ParamLimits

0x3953,	// (0x00010941) scroll_pane_cp6

0x7951,	// (0x0001493f) cell_large_graphic_colour_popup_pane_ParamLimits

0x7951,	// (0x0001493f) cell_large_graphic_colour_popup_pane

0x3965,	// (0x00010953) cell_large_graphic_colour_none_popup_pane_t1

0x348c,	// (0x0001047a) grid_highlight_pane_cp5

0x3974,	// (0x00010962) cell_large_graphic_colour_popup_pane_g1

0x397c,	// (0x0001096a) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001c58f) cell_large_graphic_colour_popup_pane_g

0x3984,	// (0x00010972) cell_large_graphic_colour_popup_pane_g2_copy1

0x398d,	// (0x0001097b) grid_highlight_pane_cp4

0x3995,	// (0x00010983) bg_popup_window_pane_cp8_ParamLimits

0x3995,	// (0x00010983) bg_popup_window_pane_cp8

0x39b0,	// (0x0001099e) popup_snote_single_text_window_g1_ParamLimits

0x39b0,	// (0x0001099e) popup_snote_single_text_window_g1

0x39c2,	// (0x000109b0) popup_snote_single_text_window_t1_ParamLimits

0x39c2,	// (0x000109b0) popup_snote_single_text_window_t1

0x39d5,	// (0x000109c3) popup_snote_single_text_window_t2_ParamLimits

0x39d5,	// (0x000109c3) popup_snote_single_text_window_t2

0x39e8,	// (0x000109d6) popup_snote_single_text_window_t3_ParamLimits

0x39e8,	// (0x000109d6) popup_snote_single_text_window_t3

0x3a21,	// (0x00010a0f) popup_snote_single_text_window_t4_ParamLimits

0x3a21,	// (0x00010a0f) popup_snote_single_text_window_t4

0x3a55,	// (0x00010a43) popup_snote_single_text_window_t5_ParamLimits

0x3a55,	// (0x00010a43) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0001c594) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0001c594) popup_snote_single_text_window_t

0x3a84,	// (0x00010a72) bg_popup_window_pane_cp9_ParamLimits

0x3a84,	// (0x00010a72) bg_popup_window_pane_cp9

0x39b0,	// (0x0001099e) popup_snote_single_graphic_window_g1_ParamLimits

0x39b0,	// (0x0001099e) popup_snote_single_graphic_window_g1

0x3a92,	// (0x00010a80) popup_snote_single_graphic_window_g2_ParamLimits

0x3a92,	// (0x00010a80) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0001c59f) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0001c59f) popup_snote_single_graphic_window_g

0x3a9e,	// (0x00010a8c) popup_snote_single_graphic_window_t1_ParamLimits

0x3a9e,	// (0x00010a8c) popup_snote_single_graphic_window_t1

0x3ab1,	// (0x00010a9f) popup_snote_single_graphic_window_t2_ParamLimits

0x3ab1,	// (0x00010a9f) popup_snote_single_graphic_window_t2

0x3ac4,	// (0x00010ab2) popup_snote_single_graphic_window_t3_ParamLimits

0x3ac4,	// (0x00010ab2) popup_snote_single_graphic_window_t3

0x3afd,	// (0x00010aeb) popup_snote_single_graphic_window_t4_ParamLimits

0x3afd,	// (0x00010aeb) popup_snote_single_graphic_window_t4

0x3b31,	// (0x00010b1f) popup_snote_single_graphic_window_t5_ParamLimits

0x3b31,	// (0x00010b1f) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0001c5a4) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0001c5a4) popup_snote_single_graphic_window_t

0xa74f,	// (0x0001773d) grid_graphic_popup_pane_ParamLimits

0xa74f,	// (0x0001773d) grid_graphic_popup_pane

0xa77d,	// (0x0001776b) listscroll_popup_graphic_pane_g1_ParamLimits

0xa77d,	// (0x0001776b) listscroll_popup_graphic_pane_g1

0xa791,	// (0x0001777f) listscroll_popup_graphic_pane_g2_ParamLimits

0xa791,	// (0x0001777f) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0001c999) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0001c999) listscroll_popup_graphic_pane_g

0xa7a5,	// (0x00017793) scroll_pane_cp5

0xa6e4,	// (0x000176d2) cell_graphic_popup_pane_ParamLimits

0xa6e4,	// (0x000176d2) cell_graphic_popup_pane

0xa6c5,	// (0x000176b3) cell_graphic_popup_pane_g1

0xa6cd,	// (0x000176bb) cell_graphic_popup_pane_g2

0x3984,	// (0x00010972) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0001c992) cell_graphic_popup_pane_g

0xa6d6,	// (0x000176c4) cell_graphic_popup_pane_t2

0x398d,	// (0x0001097b) grid_highlight_pane_cp3

0x3b72,	// (0x00010b60) list_gen_pane_ParamLimits

0x3b72,	// (0x00010b60) list_gen_pane

0x3b9a,	// (0x00010b88) scroll_pane

0xa61d,	// (0x0001760b) bg_list_pane_g1_ParamLimits

0xa61d,	// (0x0001760b) bg_list_pane_g1

0xa63a,	// (0x00017628) bg_list_pane_g2_ParamLimits

0xa63a,	// (0x00017628) bg_list_pane_g2

0xa64f,	// (0x0001763d) bg_list_pane_g3_ParamLimits

0xa64f,	// (0x0001763d) bg_list_pane_g3

0xa663,	// (0x00017651) bg_list_pane_g4_ParamLimits

0xa663,	// (0x00017651) bg_list_pane_g4

0xa677,	// (0x00017665) bg_list_pane_g5_ParamLimits

0xa677,	// (0x00017665) bg_list_pane_g5

0x0004,

0xf999,	// (0x0001c987) bg_list_pane_g_ParamLimits

0xf999,	// (0x0001c987) bg_list_pane_g

0xa54b,	// (0x00017539) list_double2_graphic_large_graphic_pane_ParamLimits

0xa54b,	// (0x00017539) list_double2_graphic_large_graphic_pane

0xa54b,	// (0x00017539) list_double2_graphic_pane_ParamLimits

0xa54b,	// (0x00017539) list_double2_graphic_pane

0xa54b,	// (0x00017539) list_double2_large_graphic_pane_ParamLimits

0xa54b,	// (0x00017539) list_double2_large_graphic_pane

0xa574,	// (0x00017562) list_double2_pane_ParamLimits

0xa574,	// (0x00017562) list_double2_pane

0xa54b,	// (0x00017539) list_double_graphic_heading_pane_ParamLimits

0xa54b,	// (0x00017539) list_double_graphic_heading_pane

0xa54b,	// (0x00017539) list_double_graphic_pane_ParamLimits

0xa54b,	// (0x00017539) list_double_graphic_pane

0xa54b,	// (0x00017539) list_double_heading_pane_ParamLimits

0xa54b,	// (0x00017539) list_double_heading_pane

0xa54b,	// (0x00017539) list_double_large_graphic_pane_ParamLimits

0xa54b,	// (0x00017539) list_double_large_graphic_pane

0xa54b,	// (0x00017539) list_double_number_pane_ParamLimits

0xa54b,	// (0x00017539) list_double_number_pane

0xa54b,	// (0x00017539) list_double_pane_ParamLimits

0xa54b,	// (0x00017539) list_double_pane

0xa54b,	// (0x00017539) list_double_time_pane_ParamLimits

0xa54b,	// (0x00017539) list_double_time_pane

0xa54b,	// (0x00017539) list_setting_number_pane_ParamLimits

0xa54b,	// (0x00017539) list_setting_number_pane

0xa54b,	// (0x00017539) list_setting_pane_ParamLimits

0xa54b,	// (0x00017539) list_setting_pane

0xa5c1,	// (0x000175af) list_single_2graphic_pane_ParamLimits

0xa5c1,	// (0x000175af) list_single_2graphic_pane

0xa5c1,	// (0x000175af) list_single_graphic_heading_pane_ParamLimits

0xa5c1,	// (0x000175af) list_single_graphic_heading_pane

0xa5c1,	// (0x000175af) list_single_graphic_pane_ParamLimits

0xa5c1,	// (0x000175af) list_single_graphic_pane

0xa5c1,	// (0x000175af) list_single_heading_pane_ParamLimits

0xa5c1,	// (0x000175af) list_single_heading_pane

0xa605,	// (0x000175f3) list_single_large_graphic_pane_ParamLimits

0xa605,	// (0x000175f3) list_single_large_graphic_pane

0xa5c1,	// (0x000175af) list_single_number_heading_pane_ParamLimits

0xa5c1,	// (0x000175af) list_single_number_heading_pane

0xa5c1,	// (0x000175af) list_single_number_pane_ParamLimits

0xa5c1,	// (0x000175af) list_single_number_pane

0xa5c1,	// (0x000175af) list_single_pane_ParamLimits

0xa5c1,	// (0x000175af) list_single_pane

0x348c,	// (0x0001047a) list_highlight_pane_cp1

0x3ddc,	// (0x00010dca) list_single_pane_g1_ParamLimits

0x3ddc,	// (0x00010dca) list_single_pane_g1

0x798c,	// (0x0001497a) list_single_pane_g2_ParamLimits

0x798c,	// (0x0001497a) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0001c5b6) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0001c5b6) list_single_pane_g

0xa504,	// (0x000174f2) list_single_pane_t1_ParamLimits

0xa504,	// (0x000174f2) list_single_pane_t1

0x3ddc,	// (0x00010dca) list_single_number_pane_g1_ParamLimits

0x3ddc,	// (0x00010dca) list_single_number_pane_g1

0x798c,	// (0x0001497a) list_single_number_pane_g2_ParamLimits

0x798c,	// (0x0001497a) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0001c5b6) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0001c5b6) list_single_number_pane_g

0xa272,	// (0x00017260) list_single_number_pane_t1_ParamLimits

0xa272,	// (0x00017260) list_single_number_pane_t1

0xa288,	// (0x00017276) list_single_number_pane_t2_ParamLimits

0xa288,	// (0x00017276) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0001c948) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0001c948) list_single_number_pane_t

0x7980,	// (0x0001496e) list_single_graphic_pane_g1_ParamLimits

0x7980,	// (0x0001496e) list_single_graphic_pane_g1

0x3ddc,	// (0x00010dca) list_single_graphic_pane_g2_ParamLimits

0x3ddc,	// (0x00010dca) list_single_graphic_pane_g2

0x798c,	// (0x0001497a) list_single_graphic_pane_g3_ParamLimits

0x798c,	// (0x0001497a) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0001c5af) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0001c5af) list_single_graphic_pane_g

0x7998,	// (0x00014986) list_single_graphic_pane_t1_ParamLimits

0x7998,	// (0x00014986) list_single_graphic_pane_t1

0x3ddc,	// (0x00010dca) list_single_heading_pane_g1_ParamLimits

0x3ddc,	// (0x00010dca) list_single_heading_pane_g1

0x798c,	// (0x0001497a) list_single_heading_pane_g2_ParamLimits

0x798c,	// (0x0001497a) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001c5b6) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001c5b6) list_single_heading_pane_g

0x79ae,	// (0x0001499c) list_single_heading_pane_t1_ParamLimits

0x79ae,	// (0x0001499c) list_single_heading_pane_t1

0x79c4,	// (0x000149b2) list_single_heading_pane_t2_ParamLimits

0x79c4,	// (0x000149b2) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0001c5bb) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0001c5bb) list_single_heading_pane_t

0x3ddc,	// (0x00010dca) list_single_number_heading_pane_g1_ParamLimits

0x3ddc,	// (0x00010dca) list_single_number_heading_pane_g1

0x798c,	// (0x0001497a) list_single_number_heading_pane_g2_ParamLimits

0x798c,	// (0x0001497a) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001c5b6) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001c5b6) list_single_number_heading_pane_g

0x79ae,	// (0x0001499c) list_single_number_heading_pane_t1_ParamLimits

0x79ae,	// (0x0001499c) list_single_number_heading_pane_t1

0x79d6,	// (0x000149c4) list_single_number_heading_pane_t2_ParamLimits

0x79d6,	// (0x000149c4) list_single_number_heading_pane_t2

0x79e8,	// (0x000149d6) list_single_number_heading_pane_t3_ParamLimits

0x79e8,	// (0x000149d6) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0001c5c0) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0001c5c0) list_single_number_heading_pane_t

0x79fa,	// (0x000149e8) list_single_graphic_heading_pane_g1_ParamLimits

0x79fa,	// (0x000149e8) list_single_graphic_heading_pane_g1

0x7a06,	// (0x000149f4) list_single_graphic_heading_pane_g4_ParamLimits

0x7a06,	// (0x000149f4) list_single_graphic_heading_pane_g4

0x798c,	// (0x0001497a) list_single_graphic_heading_pane_g5_ParamLimits

0x798c,	// (0x0001497a) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0001c5c7) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0001c5c7) list_single_graphic_heading_pane_g

0x79ae,	// (0x0001499c) list_single_graphic_heading_pane_t1_ParamLimits

0x79ae,	// (0x0001499c) list_single_graphic_heading_pane_t1

0x7a17,	// (0x00014a05) list_single_graphic_heading_pane_t2_ParamLimits

0x7a17,	// (0x00014a05) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0001c5ce) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0001c5ce) list_single_graphic_heading_pane_t

0x7a29,	// (0x00014a17) list_single_large_graphic_pane_g1_ParamLimits

0x7a29,	// (0x00014a17) list_single_large_graphic_pane_g1

0x7a35,	// (0x00014a23) list_single_large_graphic_pane_g2_ParamLimits

0x7a35,	// (0x00014a23) list_single_large_graphic_pane_g2

0x7a41,	// (0x00014a2f) list_single_large_graphic_pane_g3_ParamLimits

0x7a41,	// (0x00014a2f) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0001c5d3) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0001c5d3) list_single_large_graphic_pane_g

0x953d,	// (0x0001652b) wait_border_pane_g2_copy1

0x7a4d,	// (0x00014a3b) list_single_large_graphic_pane_g4_cp2

0x7a55,	// (0x00014a43) list_single_large_graphic_pane_t1_ParamLimits

0x7a55,	// (0x00014a43) list_single_large_graphic_pane_t1

0x7a6b,	// (0x00014a59) list_double_pane_g1_ParamLimits

0x7a6b,	// (0x00014a59) list_double_pane_g1

0x7a77,	// (0x00014a65) list_double_pane_g2_ParamLimits

0x7a77,	// (0x00014a65) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0001c5da) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0001c5da) list_double_pane_g

0x7a83,	// (0x00014a71) list_double_pane_t1_ParamLimits

0x7a83,	// (0x00014a71) list_double_pane_t1

0x7a99,	// (0x00014a87) list_double_pane_t2_ParamLimits

0x7a99,	// (0x00014a87) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0001c5df) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0001c5df) list_double_pane_t

0x7aab,	// (0x00014a99) list_double2_pane_g1_ParamLimits

0x7aab,	// (0x00014a99) list_double2_pane_g1

0x7abc,	// (0x00014aaa) list_double2_pane_g2_ParamLimits

0x7abc,	// (0x00014aaa) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001c5e4) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001c5e4) list_double2_pane_g

0x7ac8,	// (0x00014ab6) list_double2_pane_t1_ParamLimits

0x7ac8,	// (0x00014ab6) list_double2_pane_t1

0x7ade,	// (0x00014acc) list_double2_pane_t2_ParamLimits

0x7ade,	// (0x00014acc) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0001c5e9) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0001c5e9) list_double2_pane_t

0x7a6b,	// (0x00014a59) list_double_number_pane_g1_ParamLimits

0x7a6b,	// (0x00014a59) list_double_number_pane_g1

0x7a77,	// (0x00014a65) list_double_number_pane_g2_ParamLimits

0x7a77,	// (0x00014a65) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0001c5da) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0001c5da) list_double_number_pane_g

0x7af0,	// (0x00014ade) list_double_number_pane_t1_ParamLimits

0x7af0,	// (0x00014ade) list_double_number_pane_t1

0x7b02,	// (0x00014af0) list_double_number_pane_t2_ParamLimits

0x7b02,	// (0x00014af0) list_double_number_pane_t2

0x7b18,	// (0x00014b06) list_double_number_pane_t3_ParamLimits

0x7b18,	// (0x00014b06) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0001c5ee) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0001c5ee) list_double_number_pane_t

0x7b2a,	// (0x00014b18) list_double_graphic_pane_g1_ParamLimits

0x7b2a,	// (0x00014b18) list_double_graphic_pane_g1

0x7b36,	// (0x00014b24) list_double_graphic_pane_g2_ParamLimits

0x7b36,	// (0x00014b24) list_double_graphic_pane_g2

0x7b45,	// (0x00014b33) list_double_graphic_pane_g3_ParamLimits

0x7b45,	// (0x00014b33) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0001c5f5) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0001c5f5) list_double_graphic_pane_g

0x7b5d,	// (0x00014b4b) list_double_graphic_pane_t1_ParamLimits

0x7b5d,	// (0x00014b4b) list_double_graphic_pane_t1

0x7b73,	// (0x00014b61) list_double_graphic_pane_t2_ParamLimits

0x7b73,	// (0x00014b61) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0001c5fe) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0001c5fe) list_double_graphic_pane_t

0x7b85,	// (0x00014b73) list_double2_graphic_pane_g1_ParamLimits

0x7b85,	// (0x00014b73) list_double2_graphic_pane_g1

0x7b91,	// (0x00014b7f) list_double2_graphic_pane_g2_ParamLimits

0x7b91,	// (0x00014b7f) list_double2_graphic_pane_g2

0x7b9d,	// (0x00014b8b) list_double2_graphic_pane_g3_ParamLimits

0x7b9d,	// (0x00014b8b) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0001c603) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0001c603) list_double2_graphic_pane_g

0x7ba9,	// (0x00014b97) list_double2_graphic_pane_t1_ParamLimits

0x7ba9,	// (0x00014b97) list_double2_graphic_pane_t1

0x7bbf,	// (0x00014bad) list_double2_graphic_pane_t2_ParamLimits

0x7bbf,	// (0x00014bad) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001c60a) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001c60a) list_double2_graphic_pane_t

0x7bd1,	// (0x00014bbf) list_double_large_graphic_pane_g1_ParamLimits

0x7bd1,	// (0x00014bbf) list_double_large_graphic_pane_g1

0x7bf0,	// (0x00014bde) list_double_large_graphic_pane_g2_ParamLimits

0x7bf0,	// (0x00014bde) list_double_large_graphic_pane_g2

0x7a77,	// (0x00014a65) list_double_large_graphic_pane_g3_ParamLimits

0x7a77,	// (0x00014a65) list_double_large_graphic_pane_g3

0x7c01,	// (0x00014bef) list_double_large_graphic_pane_g4_ParamLimits

0x7c01,	// (0x00014bef) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0001c60f) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0001c60f) list_double_large_graphic_pane_g

0x7c14,	// (0x00014c02) list_double_large_graphic_pane_t1_ParamLimits

0x7c14,	// (0x00014c02) list_double_large_graphic_pane_t1

0x7c2d,	// (0x00014c1b) list_double_large_graphic_pane_t2_ParamLimits

0x7c2d,	// (0x00014c1b) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001c61a) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001c61a) list_double_large_graphic_pane_t

0x7c3f,	// (0x00014c2d) list_double2_large_graphic_pane_g1_ParamLimits

0x7c3f,	// (0x00014c2d) list_double2_large_graphic_pane_g1

0x7c4b,	// (0x00014c39) list_double2_large_graphic_pane_g2_ParamLimits

0x7c4b,	// (0x00014c39) list_double2_large_graphic_pane_g2

0x7b9d,	// (0x00014b8b) list_double2_large_graphic_pane_g3_ParamLimits

0x7b9d,	// (0x00014b8b) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0001c61f) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0001c61f) list_double2_large_graphic_pane_g

0x7c5c,	// (0x00014c4a) list_double2_large_graphic_pane_t1_ParamLimits

0x7c5c,	// (0x00014c4a) list_double2_large_graphic_pane_t1

0x7c72,	// (0x00014c60) list_double2_large_graphic_pane_t2_ParamLimits

0x7c72,	// (0x00014c60) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0001c626) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0001c626) list_double2_large_graphic_pane_t

0x7c84,	// (0x00014c72) list_double_heading_pane_g1_ParamLimits

0x7c84,	// (0x00014c72) list_double_heading_pane_g1

0x7c95,	// (0x00014c83) list_double_heading_pane_g2_ParamLimits

0x7c95,	// (0x00014c83) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0001c62b) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0001c62b) list_double_heading_pane_g

0x7ca1,	// (0x00014c8f) list_double_heading_pane_t1_ParamLimits

0x7ca1,	// (0x00014c8f) list_double_heading_pane_t1

0x7cb7,	// (0x00014ca5) list_double_heading_pane_t2_ParamLimits

0x7cb7,	// (0x00014ca5) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0001c630) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0001c630) list_double_heading_pane_t

0x7cc9,	// (0x00014cb7) list_double_graphic_heading_pane_g1_ParamLimits

0x7cc9,	// (0x00014cb7) list_double_graphic_heading_pane_g1

0x7c84,	// (0x00014c72) list_double_graphic_heading_pane_g2_ParamLimits

0x7c84,	// (0x00014c72) list_double_graphic_heading_pane_g2

0x7c95,	// (0x00014c83) list_double_graphic_heading_pane_g3_ParamLimits

0x7c95,	// (0x00014c83) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0001c635) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0001c635) list_double_graphic_heading_pane_g

0x7cd5,	// (0x00014cc3) list_double_graphic_heading_pane_t1_ParamLimits

0x7cd5,	// (0x00014cc3) list_double_graphic_heading_pane_t1

0x7ceb,	// (0x00014cd9) list_double_graphic_heading_pane_t2_ParamLimits

0x7ceb,	// (0x00014cd9) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0001c63c) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0001c63c) list_double_graphic_heading_pane_t

0x7bf0,	// (0x00014bde) list_double_time_pane_g1_ParamLimits

0x7bf0,	// (0x00014bde) list_double_time_pane_g1

0x7a77,	// (0x00014a65) list_double_time_pane_g2_ParamLimits

0x7a77,	// (0x00014a65) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0001c641) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0001c641) list_double_time_pane_g

0x7cfd,	// (0x00014ceb) list_double_time_pane_t1_ParamLimits

0x7cfd,	// (0x00014ceb) list_double_time_pane_t1

0x7d13,	// (0x00014d01) list_double_time_pane_t2_ParamLimits

0x7d13,	// (0x00014d01) list_double_time_pane_t2

0x7d25,	// (0x00014d13) list_double_time_pane_t3_ParamLimits

0x7d25,	// (0x00014d13) list_double_time_pane_t3

0x7d37,	// (0x00014d25) list_double_time_pane_t4_ParamLimits

0x7d37,	// (0x00014d25) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0001c646) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0001c646) list_double_time_pane_t

0x7b91,	// (0x00014b7f) list_setting_pane_g1_ParamLimits

0x7b91,	// (0x00014b7f) list_setting_pane_g1

0x7b9d,	// (0x00014b8b) list_setting_pane_g2_ParamLimits

0x7b9d,	// (0x00014b8b) list_setting_pane_g2

0x0001,

0xf661,	// (0x0001c64f) list_setting_pane_g_ParamLimits

0xf661,	// (0x0001c64f) list_setting_pane_g

0x7d49,	// (0x00014d37) list_setting_pane_t1_ParamLimits

0x7d49,	// (0x00014d37) list_setting_pane_t1

0x7d60,	// (0x00014d4e) list_setting_pane_t2_ParamLimits

0x7d60,	// (0x00014d4e) list_setting_pane_t2

0x0002,

0xf666,	// (0x0001c654) list_setting_pane_t_ParamLimits

0xf666,	// (0x0001c654) list_setting_pane_t

0x7d9f,	// (0x00014d8d) set_value_pane_cp_ParamLimits

0x7d9f,	// (0x00014d8d) set_value_pane_cp

0x7b91,	// (0x00014b7f) list_setting_number_pane_g1_ParamLimits

0x7b91,	// (0x00014b7f) list_setting_number_pane_g1

0x7b9d,	// (0x00014b8b) list_setting_number_pane_g2_ParamLimits

0x7b9d,	// (0x00014b8b) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x0001c64f) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x0001c64f) list_setting_number_pane_g

0x7dad,	// (0x00014d9b) list_setting_number_pane_t1_ParamLimits

0x7dad,	// (0x00014d9b) list_setting_number_pane_t1

0x7dc1,	// (0x00014daf) list_setting_number_pane_t2_ParamLimits

0x7dc1,	// (0x00014daf) list_setting_number_pane_t2

0x7dd8,	// (0x00014dc6) list_setting_number_pane_t3_ParamLimits

0x7dd8,	// (0x00014dc6) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0001c65b) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0001c65b) list_setting_number_pane_t

0x7d9f,	// (0x00014d8d) set_value_pane_ParamLimits

0x7d9f,	// (0x00014d8d) set_value_pane

0x3be3,	// (0x00010bd1) bg_set_opt_pane_ParamLimits

0x3be3,	// (0x00010bd1) bg_set_opt_pane

0x3c04,	// (0x00010bf2) set_value_pane_t1

0x3c12,	// (0x00010c00) slider_set_pane_cp3

0x3c1b,	// (0x00010c09) volume_small_pane_cp

0x3c24,	// (0x00010c12) list_form_gen_pane

0x3c2d,	// (0x00010c1b) scroll_pane_cp8

0x7e1b,	// (0x00014e09) form_field_data_pane_ParamLimits

0x7e1b,	// (0x00014e09) form_field_data_pane

0x7e39,	// (0x00014e27) form_field_data_wide_pane_ParamLimits

0x7e39,	// (0x00014e27) form_field_data_wide_pane

0x7e60,	// (0x00014e4e) form_field_popup_pane_ParamLimits

0x7e60,	// (0x00014e4e) form_field_popup_pane

0x3c4e,	// (0x00010c3c) form_field_popup_wide_pane_ParamLimits

0x3c4e,	// (0x00010c3c) form_field_popup_wide_pane

0x3c6f,	// (0x00010c5d) form_field_slider_pane_ParamLimits

0x3c6f,	// (0x00010c5d) form_field_slider_pane

0x3c82,	// (0x00010c70) form_field_slider_wide_pane_ParamLimits

0x3c82,	// (0x00010c70) form_field_slider_wide_pane

0x3c95,	// (0x00010c83) data_form_pane

0x7e8c,	// (0x00014e7a) form_field_data_pane_t1

0x3ca1,	// (0x00010c8f) input_focus_pane

0x3caf,	// (0x00010c9d) data_form_wide_pane

0x3ce7,	// (0x00010cd5) form_field_data_wide_pane_t1

0x39a2,	// (0x00010990) input_focus_pane_cp6

0x7ea6,	// (0x00014e94) form_field_popup_pane_t1

0x3ca1,	// (0x00010c8f) input_focus_pane_cp7

0x3d06,	// (0x00010cf4) list_form_pane

0x3d1a,	// (0x00010d08) form_field_popup_wide_pane_t1

0x3ca1,	// (0x00010c8f) input_focus_pane_cp8

0x3d2c,	// (0x00010d1a) list_form_wide_pane

0x7ec8,	// (0x00014eb6) form_field_slider_pane_t1_ParamLimits

0x7ec8,	// (0x00014eb6) form_field_slider_pane_t1

0x7edc,	// (0x00014eca) form_field_slider_pane_t2_ParamLimits

0x7edc,	// (0x00014eca) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0001c66b) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0001c66b) form_field_slider_pane_t

0x352e,	// (0x0001051c) input_focus_pane_cp9_ParamLimits

0x352e,	// (0x0001051c) input_focus_pane_cp9

0x7eee,	// (0x00014edc) slider_cont_pane_ParamLimits

0x7eee,	// (0x00014edc) slider_cont_pane

0x3d38,	// (0x00010d26) form_field_slider_wide_pane_t1_ParamLimits

0x3d38,	// (0x00010d26) form_field_slider_wide_pane_t1

0x3d4a,	// (0x00010d38) form_field_slider_wide_pane_t2_ParamLimits

0x3d4a,	// (0x00010d38) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0001c670) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0001c670) form_field_slider_wide_pane_t

0x352e,	// (0x0001051c) input_focus_pane_cp10_ParamLimits

0x352e,	// (0x0001051c) input_focus_pane_cp10

0x7f02,	// (0x00014ef0) slider_cont_pane_cp1_ParamLimits

0x7f02,	// (0x00014ef0) slider_cont_pane_cp1

0x7f16,	// (0x00014f04) slider_form_pane_cp

0x3d5c,	// (0x00010d4a) input_focus_pane_g1

0x3d64,	// (0x00010d52) input_focus_pane_g2

0x3d6c,	// (0x00010d5a) input_focus_pane_g3

0x3d74,	// (0x00010d62) input_focus_pane_g4

0x3d7c,	// (0x00010d6a) input_focus_pane_g5

0x3d84,	// (0x00010d72) input_focus_pane_g6

0x3d8c,	// (0x00010d7a) input_focus_pane_g7

0x3d94,	// (0x00010d82) input_focus_pane_g8

0x3d9c,	// (0x00010d8a) input_focus_pane_g9

0x3313,	// (0x00010301) input_focus_pane_g10

0x0009,

0xf687,	// (0x0001c675) input_focus_pane_g

0x9546,	// (0x00016534) wait_border_pane_g3_copy1

0x7f1e,	// (0x00014f0c) data_form_pane_t1

0x3313,	// (0x00010301) wait_anim_pane_g1_copy1

0xa4e5,	// (0x000174d3) data_form_wide_pane_t1

0x3da4,	// (0x00010d92) list_form_graphic_pane_cp_ParamLimits

0x3da4,	// (0x00010d92) list_form_graphic_pane_cp

0xa4ba,	// (0x000174a8) slider_form_pane_g1

0xa4c3,	// (0x000174b1) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0001c978) slider_form_pane_g

0x3da4,	// (0x00010d92) list_form_graphic_pane_ParamLimits

0x3da4,	// (0x00010d92) list_form_graphic_pane

0x3db6,	// (0x00010da4) list_form_graphic_pane_g1

0x3dbe,	// (0x00010dac) list_form_graphic_pane_t1_ParamLimits

0x3dbe,	// (0x00010dac) list_form_graphic_pane_t1

0x3546,	// (0x00010534) list_highlight_pane_cp5_ParamLimits

0x3546,	// (0x00010534) list_highlight_pane_cp5

0x7f3d,	// (0x00014f2b) find_pane_g1

0x3dd3,	// (0x00010dc1) input_find_pane

0x7f46,	// (0x00014f34) input_find_pane_g1_ParamLimits

0x7f46,	// (0x00014f34) input_find_pane_g1

0x7f52,	// (0x00014f40) input_find_pane_t1_ParamLimits

0x7f52,	// (0x00014f40) input_find_pane_t1

0x7f67,	// (0x00014f55) input_find_pane_t2_ParamLimits

0x7f67,	// (0x00014f55) input_find_pane_t2

0x0001,

0xf69c,	// (0x0001c68a) input_find_pane_t_ParamLimits

0xf69c,	// (0x0001c68a) input_find_pane_t

0x3de8,	// (0x00010dd6) input_focus_pane_cp5_ParamLimits

0x3de8,	// (0x00010dd6) input_focus_pane_cp5

0x3df6,	// (0x00010de4) bg_popup_window_pane_cp2_ParamLimits

0x3df6,	// (0x00010de4) bg_popup_window_pane_cp2

0x3e03,	// (0x00010df1) listscroll_menu_pane_ParamLimits

0x3e03,	// (0x00010df1) listscroll_menu_pane

0x7f88,	// (0x00014f76) popup_submenu_window_ParamLimits

0x7f88,	// (0x00014f76) popup_submenu_window

0x3e0f,	// (0x00010dfd) find_popup_pane_g1

0x3e17,	// (0x00010e05) input_popup_find_pane_cp

0x3de8,	// (0x00010dd6) input_focus_pane_cp4_ParamLimits

0x3de8,	// (0x00010dd6) input_focus_pane_cp4

0x3e21,	// (0x00010e0f) input_popup_find_pane_t1_ParamLimits

0x3e21,	// (0x00010e0f) input_popup_find_pane_t1

0x348c,	// (0x0001047a) bg_popup_sub_pane_cp

0x3e4f,	// (0x00010e3d) listscroll_popup_sub_pane

0x3e57,	// (0x00010e45) list_submenu_pane_ParamLimits

0x3e57,	// (0x00010e45) list_submenu_pane

0x3e68,	// (0x00010e56) scroll_pane_cp4

0x3e70,	// (0x00010e5e) list_single_popup_submenu_pane_ParamLimits

0x3e70,	// (0x00010e5e) list_single_popup_submenu_pane

0x3e85,	// (0x00010e73) list_single_popup_submenu_pane_g1

0x3e8d,	// (0x00010e7b) list_single_popup_submenu_pane_t1_ParamLimits

0x3e8d,	// (0x00010e7b) list_single_popup_submenu_pane_t1

0x3546,	// (0x00010534) bg_active_tab_pane_cp1_ParamLimits

0x3546,	// (0x00010534) bg_active_tab_pane_cp1

0x7fc6,	// (0x00014fb4) tabs_2_active_pane_g1

0x7fce,	// (0x00014fbc) tabs_2_active_pane_t1

0x3546,	// (0x00010534) bg_passive_tab_pane_cp1_ParamLimits

0x3546,	// (0x00010534) bg_passive_tab_pane_cp1

0x7fc6,	// (0x00014fb4) tabs_2_passive_pane_g1

0x7fce,	// (0x00014fbc) tabs_2_passive_pane_t1

0x3f98,	// (0x00010f86) bg_active_tab_pane_cp4

0x7fe0,	// (0x00014fce) tabs_2_long_active_pane_t1

0x7ff3,	// (0x00014fe1) bg_passive_tab_pane_cp4

0x61e7,	// (0x000131d5) list_single_midp_graphic_pane_g4_ParamLimits

0x3f98,	// (0x00010f86) bg_active_tab_pane_cp5

0x7fff,	// (0x00014fed) tabs_3_long_active_pane_t1

0x7ff3,	// (0x00014fe1) bg_passive_tab_pane_cp5

0x61e7,	// (0x000131d5) list_single_midp_graphic_pane_g4

0x3546,	// (0x00010534) bg_popup_window_pane_cp13_ParamLimits

0x3546,	// (0x00010534) bg_popup_window_pane_cp13

0x3eab,	// (0x00010e99) listscroll_popup_fast_pane_ParamLimits

0x3eab,	// (0x00010e99) listscroll_popup_fast_pane

0x3eba,	// (0x00010ea8) grid_popup_fast_pane_ParamLimits

0x3eba,	// (0x00010ea8) grid_popup_fast_pane

0x3ecc,	// (0x00010eba) scroll_pane_cp9_ParamLimits

0x3ecc,	// (0x00010eba) scroll_pane_cp9

0xc3c5,	// (0x000193b3) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc3c5,	// (0x000193b3) list_single_graphic_hl_pane_t1_cp2

0x3ef0,	// (0x00010ede) input_focus_pane_cp20_ParamLimits

0x3ef0,	// (0x00010ede) input_focus_pane_cp20

0x3efe,	// (0x00010eec) query_popup_data_pane_t1_ParamLimits

0x3efe,	// (0x00010eec) query_popup_data_pane_t1

0x3f11,	// (0x00010eff) query_popup_data_pane_t2_ParamLimits

0x3f11,	// (0x00010eff) query_popup_data_pane_t2

0x3f57,	// (0x00010f45) query_popup_data_pane_t3_ParamLimits

0x3f57,	// (0x00010f45) query_popup_data_pane_t3

0x3fa6,	// (0x00010f94) query_popup_data_pane_t4_ParamLimits

0x3fa6,	// (0x00010f94) query_popup_data_pane_t4

0x3fe2,	// (0x00010fd0) query_popup_data_pane_t5_ParamLimits

0x3fe2,	// (0x00010fd0) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0001c68f) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0001c68f) query_popup_data_pane_t

0x3d5c,	// (0x00010d4a) bg_set_opt_pane_g1

0x3d64,	// (0x00010d52) bg_set_opt_pane_g2

0x3d6c,	// (0x00010d5a) bg_set_opt_pane_g3

0x3d74,	// (0x00010d62) bg_set_opt_pane_g4

0x3d7c,	// (0x00010d6a) bg_set_opt_pane_g5

0x3d84,	// (0x00010d72) bg_set_opt_pane_g6

0x3d8c,	// (0x00010d7a) bg_set_opt_pane_g7

0x3d94,	// (0x00010d82) bg_set_opt_pane_g8

0x3d9c,	// (0x00010d8a) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0001c69a) bg_set_opt_pane_g

0x576f,	// (0x0001275d) control_top_pane_stacon_ParamLimits

0x576f,	// (0x0001275d) control_top_pane_stacon

0x57c2,	// (0x000127b0) signal_pane_stacon_ParamLimits

0x57c2,	// (0x000127b0) signal_pane_stacon

0x8276,	// (0x00015264) stacon_top_pane_g1_ParamLimits

0x8276,	// (0x00015264) stacon_top_pane_g1

0x57e7,	// (0x000127d5) title_pane_stacon_ParamLimits

0x57e7,	// (0x000127d5) title_pane_stacon

0x5811,	// (0x000127ff) uni_indicator_pane_stacon_ParamLimits

0x5811,	// (0x000127ff) uni_indicator_pane_stacon

0x5826,	// (0x00012814) battery_pane_stacon_ParamLimits

0x5826,	// (0x00012814) battery_pane_stacon

0x586a,	// (0x00012858) control_bottom_pane_stacon_ParamLimits

0x586a,	// (0x00012858) control_bottom_pane_stacon

0x588d,	// (0x0001287b) navi_pane_stacon_ParamLimits

0x588d,	// (0x0001287b) navi_pane_stacon

0x8298,	// (0x00015286) stacon_bottom_pane_g1_ParamLimits

0x8298,	// (0x00015286) stacon_bottom_pane_g1

0x54cc,	// (0x000124ba) aid_levels_signal_lsc_ParamLimits

0x54cc,	// (0x000124ba) aid_levels_signal_lsc

0x54e3,	// (0x000124d1) signal_pane_stacon_g1_ParamLimits

0x54e3,	// (0x000124d1) signal_pane_stacon_g1

0x54f7,	// (0x000124e5) signal_pane_stacon_g2_ParamLimits

0x54f7,	// (0x000124e5) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0001c6ad) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0001c6ad) signal_pane_stacon_g

0x552c,	// (0x0001251a) title_pane_stacon_t1_ParamLimits

0x552c,	// (0x0001251a) title_pane_stacon_t1

0x40bf,	// (0x000110ad) uni_indicator_pane_stacon_g1

0x40c9,	// (0x000110b7) uni_indicator_pane_stacon_g2

0x40ab,	// (0x00011099) uni_indicator_pane_stacon_g3

0x40b5,	// (0x000110a3) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0001c6b9) uni_indicator_pane_stacon_g

0x5551,	// (0x0001253f) control_top_pane_stacon_g1

0x5559,	// (0x00012547) control_top_pane_stacon_t1_ParamLimits

0x5559,	// (0x00012547) control_top_pane_stacon_t1

0x5590,	// (0x0001257e) aid_levels_battery_lsc_ParamLimits

0x5590,	// (0x0001257e) aid_levels_battery_lsc

0x55a8,	// (0x00012596) battery_pane_stacon_g1_ParamLimits

0x55a8,	// (0x00012596) battery_pane_stacon_g1

0x55bb,	// (0x000125a9) battery_pane_stacon_g2_ParamLimits

0x55bb,	// (0x000125a9) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0001c6c2) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0001c6c2) battery_pane_stacon_g

0x55f9,	// (0x000125e7) navi_icon_pane_stacon

0x560d,	// (0x000125fb) navi_navi_pane_stacon

0x55f9,	// (0x000125e7) navi_text_pane_stacon

0x5551,	// (0x0001253f) control_bottom_pane_stacon_g1

0x5623,	// (0x00012611) control_bottom_pane_stacon_t1_ParamLimits

0x5623,	// (0x00012611) control_bottom_pane_stacon_t1

0x8011,	// (0x00014fff) grid_app_pane_ParamLimits

0x8011,	// (0x00014fff) grid_app_pane

0x8033,	// (0x00015021) scroll_pane_cp15_ParamLimits

0x8033,	// (0x00015021) scroll_pane_cp15

0x8046,	// (0x00015034) cell_app_pane_ParamLimits

0x8046,	// (0x00015034) cell_app_pane

0x8072,	// (0x00015060) cell_app_pane_g1_ParamLimits

0x8072,	// (0x00015060) cell_app_pane_g1

0x41f6,	// (0x000111e4) cell_app_pane_g2_ParamLimits

0x41f6,	// (0x000111e4) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0001c6c7) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0001c6c7) cell_app_pane_g

0x8096,	// (0x00015084) cell_app_pane_t1_ParamLimits

0x8096,	// (0x00015084) cell_app_pane_t1

0x4202,	// (0x000111f0) grid_highlight_pane_ParamLimits

0x4202,	// (0x000111f0) grid_highlight_pane

0x3d5c,	// (0x00010d4a) cell_highlight_pane_g1

0x3d64,	// (0x00010d52) cell_highlight_pane_g2

0x3d6c,	// (0x00010d5a) cell_highlight_pane_g3

0x3d74,	// (0x00010d62) cell_highlight_pane_g4

0x3d7c,	// (0x00010d6a) cell_highlight_pane_g5

0x3d84,	// (0x00010d72) cell_highlight_pane_g6

0x3d8c,	// (0x00010d7a) cell_highlight_pane_g7

0x3d94,	// (0x00010d82) cell_highlight_pane_g8

0x3d9c,	// (0x00010d8a) cell_highlight_pane_g9

0x3313,	// (0x00010301) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0001c675) cell_highlight_pane_g

0x421d,	// (0x0001120b) bg_scroll_pane

0x566d,	// (0x0001265b) scroll_handle_pane

0x428d,	// (0x0001127b) scroll_bg_pane_g1

0x42a2,	// (0x00011290) scroll_bg_pane_g2

0x42ba,	// (0x000112a8) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0001c6cc) scroll_bg_pane_g

0x42cf,	// (0x000112bd) scroll_handle_focus_pane_ParamLimits

0x42cf,	// (0x000112bd) scroll_handle_focus_pane

0x428d,	// (0x0001127b) scroll_handle_pane_g1

0x42dc,	// (0x000112ca) scroll_handle_pane_g2

0x42ba,	// (0x000112a8) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0001c6d3) scroll_handle_pane_g

0x3de8,	// (0x00010dd6) bg_popup_sub_pane_cp21_ParamLimits

0x3de8,	// (0x00010dd6) bg_popup_sub_pane_cp21

0x42f0,	// (0x000112de) popup_fep_japan_predictive_window_t1_ParamLimits

0x42f0,	// (0x000112de) popup_fep_japan_predictive_window_t1

0x4307,	// (0x000112f5) popup_fep_japan_predictive_window_t2_ParamLimits

0x4307,	// (0x000112f5) popup_fep_japan_predictive_window_t2

0x433a,	// (0x00011328) popup_fep_japan_predictive_window_t3_ParamLimits

0x433a,	// (0x00011328) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0001c6da) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0001c6da) popup_fep_japan_predictive_window_t

0x348c,	// (0x0001047a) bg_popup_sub_pane_cp23

0x4371,	// (0x0001135f) listscroll_japin_cand_pane

0x4379,	// (0x00011367) popup_fep_japan_candidate_window_t1

0x4387,	// (0x00011375) candidate_pane_ParamLimits

0x4387,	// (0x00011375) candidate_pane

0x4399,	// (0x00011387) scroll_pane_cp30

0x43a3,	// (0x00011391) list_single_popup_jap_candidate_pane_ParamLimits

0x43a3,	// (0x00011391) list_single_popup_jap_candidate_pane

0x348c,	// (0x0001047a) list_highlight_pane_cp30

0x43b7,	// (0x000113a5) list_single_popup_jap_candidate_pane_t1

0x80ad,	// (0x0001509b) level_1_signal

0x80ba,	// (0x000150a8) level_2_signal

0x80c7,	// (0x000150b5) level_3_signal

0x80d4,	// (0x000150c2) level_4_signal

0x80e1,	// (0x000150cf) level_5_signal

0x80ee,	// (0x000150dc) level_6_signal

0x80fb,	// (0x000150e9) level_7_signal

0x80ad,	// (0x0001509b) level_1_battery

0x80ba,	// (0x000150a8) level_2_battery

0x80c7,	// (0x000150b5) level_3_battery

0x80d4,	// (0x000150c2) level_4_battery

0x80e1,	// (0x000150cf) level_5_battery

0x80ee,	// (0x000150dc) level_6_battery

0x80fb,	// (0x000150e9) level_7_battery

0x43fd,	// (0x000113eb) list_menu_pane_ParamLimits

0x43fd,	// (0x000113eb) list_menu_pane

0x4413,	// (0x00011401) scroll_pane_cp25_ParamLimits

0x4413,	// (0x00011401) scroll_pane_cp25

0x442c,	// (0x0001141a) list_double2_graphic_pane_cp2_ParamLimits

0x442c,	// (0x0001141a) list_double2_graphic_pane_cp2

0x442c,	// (0x0001141a) list_double2_large_graphic_pane_cp2_ParamLimits

0x442c,	// (0x0001141a) list_double2_large_graphic_pane_cp2

0x442c,	// (0x0001141a) list_double2_pane_cp2_ParamLimits

0x442c,	// (0x0001141a) list_double2_pane_cp2

0x442c,	// (0x0001141a) list_double_graphic_pane_cp2_ParamLimits

0x442c,	// (0x0001141a) list_double_graphic_pane_cp2

0x442c,	// (0x0001141a) list_double_large_graphic_pane_cp2_ParamLimits

0x442c,	// (0x0001141a) list_double_large_graphic_pane_cp2

0x442c,	// (0x0001141a) list_double_number_pane_cp2_ParamLimits

0x442c,	// (0x0001141a) list_double_number_pane_cp2

0x442c,	// (0x0001141a) list_double_pane_cp2_ParamLimits

0x442c,	// (0x0001141a) list_double_pane_cp2

0x811e,	// (0x0001510c) list_single_2graphic_pane_cp2_ParamLimits

0x811e,	// (0x0001510c) list_single_2graphic_pane_cp2

0x811e,	// (0x0001510c) list_single_graphic_heading_pane_cp2_ParamLimits

0x811e,	// (0x0001510c) list_single_graphic_heading_pane_cp2

0x811e,	// (0x0001510c) list_single_graphic_pane_cp2_ParamLimits

0x811e,	// (0x0001510c) list_single_graphic_pane_cp2

0x811e,	// (0x0001510c) list_single_heading_pane_cp2_ParamLimits

0x811e,	// (0x0001510c) list_single_heading_pane_cp2

0x443c,	// (0x0001142a) list_single_large_graphic_pane_cp2_ParamLimits

0x443c,	// (0x0001142a) list_single_large_graphic_pane_cp2

0x811e,	// (0x0001510c) list_single_number_heading_pane_cp2_ParamLimits

0x811e,	// (0x0001510c) list_single_number_heading_pane_cp2

0x811e,	// (0x0001510c) list_single_number_pane_cp2_ParamLimits

0x811e,	// (0x0001510c) list_single_number_pane_cp2

0x811e,	// (0x0001510c) list_single_pane_cp2_ParamLimits

0x811e,	// (0x0001510c) list_single_pane_cp2

0x44b0,	// (0x0001149e) bg_popup_sub_pane_cp22

0x571f,	// (0x0001270d) popup_side_volume_key_window_g1

0x5749,	// (0x00012737) popup_side_volume_key_window_t1

0x5767,	// (0x00012755) volume_small_pane_cp1

0x352e,	// (0x0001051c) bg_popup_sub_pane_cp24_ParamLimits

0x352e,	// (0x0001051c) bg_popup_sub_pane_cp24

0x4525,	// (0x00011513) fep_china_uni_candidate_pane_ParamLimits

0x4525,	// (0x00011513) fep_china_uni_candidate_pane

0x4539,	// (0x00011527) fep_china_uni_entry_pane

0x4549,	// (0x00011537) popup_fep_china_uni_window_g1

0x4565,	// (0x00011553) fep_china_uni_entry_pane_g1

0x456f,	// (0x0001155d) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0001c70b) fep_china_uni_entry_pane_g

0x4579,	// (0x00011567) fep_entry_item_pane

0x4583,	// (0x00011571) fep_candidate_item_pane

0x458b,	// (0x00011579) fep_china_uni_candidate_pane_g1

0x4595,	// (0x00011583) fep_china_uni_candidate_pane_g2

0x459d,	// (0x0001158b) fep_china_uni_candidate_pane_g3

0x45a5,	// (0x00011593) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0001c710) fep_china_uni_candidate_pane_g

0x3313,	// (0x00010301) fep_entry_item_pane_g1

0x45af,	// (0x0001159d) fep_entry_item_pane_t1_ParamLimits

0x45af,	// (0x0001159d) fep_entry_item_pane_t1

0x45c5,	// (0x000115b3) fep_candidate_item_pane_t1_ParamLimits

0x45c5,	// (0x000115b3) fep_candidate_item_pane_t1

0x45da,	// (0x000115c8) fep_candidate_item_pane_t2_ParamLimits

0x45da,	// (0x000115c8) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0001c719) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0001c719) fep_candidate_item_pane_t

0x3546,	// (0x00010534) list_highlight_pane_cp31_ParamLimits

0x3546,	// (0x00010534) list_highlight_pane_cp31

0x45ec,	// (0x000115da) level_1_signal_lsc

0x45f5,	// (0x000115e3) level_2_signal_lsc

0x45fe,	// (0x000115ec) level_3_signal_lsc

0x4607,	// (0x000115f5) level_4_signal_lsc

0x4610,	// (0x000115fe) level_5_signal_lsc

0x4619,	// (0x00011607) level_6_signal_lsc

0x4622,	// (0x00011610) level_7_signal_lsc

0x4622,	// (0x00011610) level_1_battery_lsc

0x462b,	// (0x00011619) level_2_battery_lsc

0x4634,	// (0x00011622) level_3_battery_lsc

0x463d,	// (0x0001162b) level_4_battery_lsc

0x4646,	// (0x00011634) level_5_battery_lsc

0x464f,	// (0x0001163d) level_6_battery_lsc

0x45ec,	// (0x000115da) level_7_battery_lsc

0x4658,	// (0x00011646) scroll_handle_focus_pane_g1

0x4661,	// (0x0001164f) scroll_handle_focus_pane_g2

0x466a,	// (0x00011658) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0001c71e) scroll_handle_focus_pane_g

0x8190,	// (0x0001517e) list_single_2graphic_pane_g1_ParamLimits

0x8190,	// (0x0001517e) list_single_2graphic_pane_g1

0x7a06,	// (0x000149f4) list_single_2graphic_pane_g2_ParamLimits

0x7a06,	// (0x000149f4) list_single_2graphic_pane_g2

0x798c,	// (0x0001497a) list_single_2graphic_pane_g3_ParamLimits

0x798c,	// (0x0001497a) list_single_2graphic_pane_g3

0x819c,	// (0x0001518a) list_single_2graphic_pane_g4_ParamLimits

0x819c,	// (0x0001518a) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0001c725) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0001c725) list_single_2graphic_pane_g

0x81ad,	// (0x0001519b) list_single_2graphic_pane_t1_ParamLimits

0x81ad,	// (0x0001519b) list_single_2graphic_pane_t1

0x81db,	// (0x000151c9) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x81db,	// (0x000151c9) list_double2_graphic_large_graphic_pane_g1

0x7c4b,	// (0x00014c39) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x7c4b,	// (0x00014c39) list_double2_graphic_large_graphic_pane_g2

0x7b9d,	// (0x00014b8b) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x7b9d,	// (0x00014b8b) list_double2_graphic_large_graphic_pane_g3

0x81ed,	// (0x000151db) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x81ed,	// (0x000151db) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0001c72e) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0001c72e) list_double2_graphic_large_graphic_pane_g

0x81f9,	// (0x000151e7) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x81f9,	// (0x000151e7) list_double2_graphic_large_graphic_pane_t1

0x820f,	// (0x000151fd) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x820f,	// (0x000151fd) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0001c737) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0001c737) list_double2_graphic_large_graphic_pane_t

0x8358,	// (0x00015346) popup_fast_swap_window_ParamLimits

0x8358,	// (0x00015346) popup_fast_swap_window

0x8376,	// (0x00015364) popup_side_volume_key_window

0x8394,	// (0x00015382) stacon_top_pane

0x839e,	// (0x0001538c) status_pane_ParamLimits

0x839e,	// (0x0001538c) status_pane

0x83ac,	// (0x0001539a) status_small_pane

0x348c,	// (0x0001047a) control_pane

0x348c,	// (0x0001047a) stacon_bottom_pane

0x3c2d,	// (0x00010c1b) scroll_pane_cp121

0x3c24,	// (0x00010c12) set_content_pane

0x8221,	// (0x0001520f) bg_active_tab_pane_g1_cp1

0x822a,	// (0x00015218) bg_active_tab_pane_g2_cp1

0x8233,	// (0x00015221) bg_active_tab_pane_g3_cp1

0x8221,	// (0x0001520f) bg_passive_tab_pane_g1_cp1

0x822a,	// (0x00015218) bg_passive_tab_pane_g2_cp1

0x8233,	// (0x00015221) bg_passive_tab_pane_g3_cp1

0x823c,	// (0x0001522a) bg_active_tab_pane_g1_cp2

0x822a,	// (0x00015218) bg_active_tab_pane_g2_cp2

0x8245,	// (0x00015233) bg_active_tab_pane_g3_cp2

0x823c,	// (0x0001522a) bg_passive_tab_pane_g1_cp2

0x822a,	// (0x00015218) bg_passive_tab_pane_g2_cp2

0x8245,	// (0x00015233) bg_passive_tab_pane_g3_cp2

0x824e,	// (0x0001523c) bg_active_tab_pane_g1_cp3

0x822a,	// (0x00015218) bg_active_tab_pane_g2_cp3

0x8257,	// (0x00015245) bg_active_tab_pane_g3_cp3

0x824e,	// (0x0001523c) bg_passive_tab_pane_g1_cp3

0x822a,	// (0x00015218) bg_passive_tab_pane_g2_cp3

0x8257,	// (0x00015245) bg_passive_tab_pane_g3_cp3

0x8260,	// (0x0001524e) bg_active_tab_pane_g1_cp4

0x822a,	// (0x00015218) bg_active_tab_pane_g2_cp4

0x826b,	// (0x00015259) bg_active_tab_pane_g3_cp4

0x8260,	// (0x0001524e) bg_passive_tab_pane_g1_cp4

0x822a,	// (0x00015218) bg_passive_tab_pane_g2_cp4

0x826b,	// (0x00015259) bg_passive_tab_pane_g3_cp4

0x82b4,	// (0x000152a2) bg_active_tab_pane_g1_cp5

0x822a,	// (0x00015218) bg_active_tab_pane_g2_cp5

0x82bd,	// (0x000152ab) bg_active_tab_pane_g3_cp5

0x82b4,	// (0x000152a2) bg_passive_tab_pane_g1_cp5

0x822a,	// (0x00015218) bg_passive_tab_pane_g2_cp5

0x82bd,	// (0x000152ab) bg_passive_tab_pane_g3_cp5

0x82c6,	// (0x000152b4) list_set_graphic_pane_ParamLimits

0x82c6,	// (0x000152b4) list_set_graphic_pane

0x348c,	// (0x0001047a) bg_set_opt_pane_cp4

0x82d9,	// (0x000152c7) list_set_graphic_pane_g1_ParamLimits

0x82d9,	// (0x000152c7) list_set_graphic_pane_g1

0x82e5,	// (0x000152d3) list_set_graphic_pane_g2_ParamLimits

0x82e5,	// (0x000152d3) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0001c73c) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0001c73c) list_set_graphic_pane_g

0x0009,

0xfacf,	// (0x0001cabd) volume_small_pane_cp_g

0x8309,	// (0x000152f7) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8309,	// (0x000152f7) list_double2_large_graphic_pane_g1_cp2

0x8317,	// (0x00015305) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8317,	// (0x00015305) list_double2_large_graphic_pane_g2_cp2

0x8328,	// (0x00015316) list_double2_large_graphic_pane_g3_cp2

0x8330,	// (0x0001531e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8330,	// (0x0001531e) list_double2_large_graphic_pane_t1_cp2

0x8346,	// (0x00015334) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8346,	// (0x00015334) list_double2_large_graphic_pane_t2_cp2

0xa02a,	// (0x00017018) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa02a,	// (0x00017018) list_double_large_graphic_pane_g1_cp2

0xa03d,	// (0x0001702b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa03d,	// (0x0001702b) list_double_large_graphic_pane_g2_cp2

0x84c7,	// (0x000154b5) list_double_large_graphic_pane_g3_cp2

0xa04e,	// (0x0001703c) list_double_large_graphic_pane_g4_cp

0xa056,	// (0x00017044) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa056,	// (0x00017044) list_double_large_graphic_pane_t1_cp2

0xa06d,	// (0x0001705b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa06d,	// (0x0001705b) list_double_large_graphic_pane_t2_cp2

0x83b7,	// (0x000153a5) list_double2_graphic_pane_g1_cp2_ParamLimits

0x83b7,	// (0x000153a5) list_double2_graphic_pane_g1_cp2

0x83c5,	// (0x000153b3) list_double2_graphic_pane_g2_cp2_ParamLimits

0x83c5,	// (0x000153b3) list_double2_graphic_pane_g2_cp2

0x83d6,	// (0x000153c4) list_double2_graphic_pane_g3_cp2

0x83e0,	// (0x000153ce) list_double2_graphic_pane_t1_cp2_ParamLimits

0x83e0,	// (0x000153ce) list_double2_graphic_pane_t1_cp2

0x83f6,	// (0x000153e4) list_double2_graphic_pane_t2_cp2_ParamLimits

0x83f6,	// (0x000153e4) list_double2_graphic_pane_t2_cp2

0x8408,	// (0x000153f6) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8408,	// (0x000153f6) list_single_number_heading_pane_g1_cp2

0x8414,	// (0x00015402) list_single_number_heading_pane_g2_cp2

0x841c,	// (0x0001540a) list_single_number_heading_pane_t1_cp2_ParamLimits

0x841c,	// (0x0001540a) list_single_number_heading_pane_t1_cp2

0x8432,	// (0x00015420) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8432,	// (0x00015420) list_single_number_heading_pane_t2_cp2

0x8446,	// (0x00015434) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8446,	// (0x00015434) list_single_number_heading_pane_t3_cp2

0x8408,	// (0x000153f6) list_single_heading_pane_g1_cp2_ParamLimits

0x8408,	// (0x000153f6) list_single_heading_pane_g1_cp2

0x8414,	// (0x00015402) list_single_heading_pane_g2_cp2

0x841c,	// (0x0001540a) list_single_heading_pane_t1_cp2_ParamLimits

0x841c,	// (0x0001540a) list_single_heading_pane_t1_cp2

0x9e24,	// (0x00016e12) list_single_heading_pane_t2_cp2_ParamLimits

0x9e24,	// (0x00016e12) list_single_heading_pane_t2_cp2

0x9d6c,	// (0x00016d5a) list_double_graphic_pane_g1_cp2_ParamLimits

0x9d6c,	// (0x00016d5a) list_double_graphic_pane_g1_cp2

0x9d78,	// (0x00016d66) list_double_graphic_pane_g2_cp2_ParamLimits

0x9d78,	// (0x00016d66) list_double_graphic_pane_g2_cp2

0x9d87,	// (0x00016d75) list_double_graphic_pane_g3_cp2

0x9d8f,	// (0x00016d7d) list_double_graphic_pane_t1_cp2_ParamLimits

0x9d8f,	// (0x00016d7d) list_double_graphic_pane_t1_cp2

0x9da5,	// (0x00016d93) list_double_graphic_pane_t2_cp2_ParamLimits

0x9da5,	// (0x00016d93) list_double_graphic_pane_t2_cp2

0x84bb,	// (0x000154a9) list_double_number_pane_g1_cp2_ParamLimits

0x84bb,	// (0x000154a9) list_double_number_pane_g1_cp2

0x84c7,	// (0x000154b5) list_double_number_pane_g2_cp2

0x9d30,	// (0x00016d1e) list_double_number_pane_t1_cp2_ParamLimits

0x9d30,	// (0x00016d1e) list_double_number_pane_t1_cp2

0x9d44,	// (0x00016d32) list_double_number_pane_t2_cp2_ParamLimits

0x9d44,	// (0x00016d32) list_double_number_pane_t2_cp2

0x9d5a,	// (0x00016d48) list_double_number_pane_t3_cp2_ParamLimits

0x9d5a,	// (0x00016d48) list_double_number_pane_t3_cp2

0x9c19,	// (0x00016c07) list_single_graphic_pane_g1_cp2_ParamLimits

0x9c19,	// (0x00016c07) list_single_graphic_pane_g1_cp2

0x3ddc,	// (0x00010dca) list_single_graphic_pane_g2_cp2_ParamLimits

0x3ddc,	// (0x00010dca) list_single_graphic_pane_g2_cp2

0x8521,	// (0x0001550f) list_single_graphic_pane_g3_cp2

0x9bef,	// (0x00016bdd) list_single_graphic_pane_t1_cp2_ParamLimits

0x9bef,	// (0x00016bdd) list_single_graphic_pane_t1_cp2

0x3ddc,	// (0x00010dca) list_single_number_pane_g1_cp2_ParamLimits

0x3ddc,	// (0x00010dca) list_single_number_pane_g1_cp2

0x8521,	// (0x0001550f) list_single_number_pane_g2_cp2

0x9bef,	// (0x00016bdd) list_single_number_pane_t1_cp2_ParamLimits

0x9bef,	// (0x00016bdd) list_single_number_pane_t1_cp2

0x9c05,	// (0x00016bf3) list_single_number_pane_t2_cp2_ParamLimits

0x9c05,	// (0x00016bf3) list_single_number_pane_t2_cp2

0x8317,	// (0x00015305) list_double2_pane_g1_cp2_ParamLimits

0x8317,	// (0x00015305) list_double2_pane_g1_cp2

0x8328,	// (0x00015316) list_double2_pane_g2_cp2

0x8493,	// (0x00015481) list_double2_pane_t1_cp2_ParamLimits

0x8493,	// (0x00015481) list_double2_pane_t1_cp2

0x84a9,	// (0x00015497) list_double2_pane_t2_cp2_ParamLimits

0x84a9,	// (0x00015497) list_double2_pane_t2_cp2

0x84bb,	// (0x000154a9) list_double_pane_g1_cp2_ParamLimits

0x84bb,	// (0x000154a9) list_double_pane_g1_cp2

0x84c7,	// (0x000154b5) list_double_pane_g2_cp2

0x84cf,	// (0x000154bd) list_double_pane_t1_cp2_ParamLimits

0x84cf,	// (0x000154bd) list_double_pane_t1_cp2

0x84e5,	// (0x000154d3) list_double_pane_t2_cp2_ParamLimits

0x84e5,	// (0x000154d3) list_double_pane_t2_cp2

0x8511,	// (0x000154ff) list_single_pane_cp2_g3

0x3ddc,	// (0x00010dca) list_single_pane_g1_cp2_ParamLimits

0x3ddc,	// (0x00010dca) list_single_pane_g1_cp2

0x8521,	// (0x0001550f) list_single_pane_g2_cp2

0x8529,	// (0x00015517) list_single_pane_t1_cp2_ParamLimits

0x8529,	// (0x00015517) list_single_pane_t1_cp2

0x8541,	// (0x0001552f) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8541,	// (0x0001552f) list_single_large_graphic_pane_g1_cp2

0x854f,	// (0x0001553d) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x854f,	// (0x0001553d) list_single_large_graphic_pane_g2_cp2

0x855b,	// (0x00015549) list_single_large_graphic_pane_g3_cp2

0x8563,	// (0x00015551) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8563,	// (0x00015551) list_single_large_graphic_pane_g4_cp1

0x857d,	// (0x0001556b) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x857d,	// (0x0001556b) list_single_large_graphic_pane_t1_cp2

0x9bb9,	// (0x00016ba7) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9bb9,	// (0x00016ba7) list_single_graphic_heading_pane_g1_cp2

0x9b86,	// (0x00016b74) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9b86,	// (0x00016b74) list_single_graphic_heading_pane_g4_cp2

0x8521,	// (0x0001550f) list_single_graphic_heading_pane_g5_cp2

0x9bc5,	// (0x00016bb3) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9bc5,	// (0x00016bb3) list_single_graphic_heading_pane_t1_cp2

0x9bdb,	// (0x00016bc9) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9bdb,	// (0x00016bc9) list_single_graphic_heading_pane_t2_cp2

0x9b7a,	// (0x00016b68) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9b7a,	// (0x00016b68) list_single_2graphic_pane_g1_cp2

0x9b86,	// (0x00016b74) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9b86,	// (0x00016b74) list_single_2graphic_pane_g2_cp2

0x8521,	// (0x0001550f) list_single_2graphic_pane_g3_cp2

0x9b97,	// (0x00016b85) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9b97,	// (0x00016b85) list_single_2graphic_pane_g4_cp2

0x9ba3,	// (0x00016b91) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9ba3,	// (0x00016b91) list_single_2graphic_pane_t1_cp2

0x3313,	// (0x00010301) list_highlight_pane_g10_cp1

0x9752,	// (0x00016740) list_highlight_pane_g1_cp1

0x975a,	// (0x00016748) list_highlight_pane_g2_cp1

0x9762,	// (0x00016750) list_highlight_pane_g3_cp1

0x976a,	// (0x00016758) list_highlight_pane_g4_cp1

0x9772,	// (0x00016760) list_highlight_pane_g5_cp1

0x977a,	// (0x00016768) list_highlight_pane_g6_cp1

0x9782,	// (0x00016770) list_highlight_pane_g7_cp1

0x978a,	// (0x00016778) list_highlight_pane_g8_cp1

0x9792,	// (0x00016780) list_highlight_pane_g9_cp1

0x9672,	// (0x00016660) form_field_slider_pane_t3

0x9680,	// (0x0001666e) form_field_slider_pane_t4

0x968e,	// (0x0001667c) slider_form_pane_ParamLimits

0x968e,	// (0x0001667c) slider_form_pane

0x348c,	// (0x0001047a) control_abbreviations

0x348c,	// (0x0001047a) control_conventions

0x348c,	// (0x0001047a) control_definitions

0x348c,	// (0x0001047a) format_table_attribute

0x9e7a,	// (0x00016e68) bg_popup_preview_window_pane_g9

0x348c,	// (0x0001047a) format_table_data2

0x348c,	// (0x0001047a) format_table_data3

0x348c,	// (0x0001047a) format_table_data_example

0x0008,

0x348c,	// (0x0001047a) intro_purpose

0xf8ea,	// (0x0001c8d8) bg_popup_preview_window_pane_g

0x348c,	// (0x0001047a) texts_category

0x348c,	// (0x0001047a) texts_graphics

0x8593,	// (0x00015581) text_digital

0x85a2,	// (0x00015590) text_primary

0x85b1,	// (0x0001559f) text_primary_small

0x85c0,	// (0x000155ae) text_secondary

0x85cf,	// (0x000155bd) text_title

0xa699,	// (0x00017687) bg_passive_tab_pane_g1_cp3_srt

0x822a,	// (0x00015218) bg_passive_tab_pane_g2_cp3_srt

0xa6a2,	// (0x00017690) bg_passive_tab_pane_g3_cp3_srt

0x3546,	// (0x00010534) bg_active_tab_pane_cp3_srt_ParamLimits

0x3546,	// (0x00010534) bg_active_tab_pane_cp3_srt

0xa6ab,	// (0x00017699) tabs_4_active_pane_srt_g1

0xa6b3,	// (0x000176a1) tabs_4_active_pane_srt_t1_ParamLimits

0xa6b3,	// (0x000176a1) tabs_4_active_pane_srt_t1

0xa699,	// (0x00017687) bg_active_tab_pane_g1_cp3_copy1

0x822a,	// (0x00015218) bg_active_tab_pane_g2_cp3_copy1

0xa6a2,	// (0x00017690) bg_active_tab_pane_g3_cp3_copy1

0x3546,	// (0x00010534) tabs_2_long_active_pane_srt_ParamLimits

0x3546,	// (0x00010534) tabs_2_long_active_pane_srt

0x3546,	// (0x00010534) tabs_2_long_passive_pane_srt_ParamLimits

0x3546,	// (0x00010534) tabs_2_long_passive_pane_srt

0x7ff3,	// (0x00014fe1) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7ff3,	// (0x00014fe1) bg_passive_tab_pane_cp4_srt

0xa2d1,	// (0x000172bf) bg_passive_tab_pane_g1_cp4_srt

0x822a,	// (0x00015218) bg_passive_tab_pane_g2_cp4_srt

0xa2da,	// (0x000172c8) bg_passive_tab_pane_g3_cp4_srt

0x3f98,	// (0x00010f86) bg_active_tab_pane_cp4_srt_ParamLimits

0x3f98,	// (0x00010f86) bg_active_tab_pane_cp4_srt

0xa2e3,	// (0x000172d1) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa2e3,	// (0x000172d1) tabs_2_long_active_pane_srt_t1

0xa2d1,	// (0x000172bf) bg_active_tab_pane_g1_cp4_srt

0x822a,	// (0x00015218) bg_active_tab_pane_g2_cp4_srt

0xa2da,	// (0x000172c8) bg_active_tab_pane_g3_cp4_srt

0x352e,	// (0x0001051c) tabs_3_long_active_pane_srt_ParamLimits

0x352e,	// (0x0001051c) tabs_3_long_active_pane_srt

0x352e,	// (0x0001051c) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x352e,	// (0x0001051c) tabs_3_long_passive_pane_cp_srt

0x352e,	// (0x0001051c) tabs_3_long_passive_pane_srt_ParamLimits

0x352e,	// (0x0001051c) tabs_3_long_passive_pane_srt

0x7ff3,	// (0x00014fe1) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7ff3,	// (0x00014fe1) bg_passive_tab_pane_cp5_srt

0x82b4,	// (0x000152a2) bg_passive_tab_pane_g1_cp5_srt

0x822a,	// (0x00015218) bg_passive_tab_pane_g2_cp5_srt

0x82bd,	// (0x000152ab) bg_passive_tab_pane_g3_cp5_srt

0x3f98,	// (0x00010f86) bg_active_tab_pane_cp5_srt_ParamLimits

0x3f98,	// (0x00010f86) bg_active_tab_pane_cp5_srt

0xa2bf,	// (0x000172ad) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa2bf,	// (0x000172ad) tabs_3_long_active_pane_srt_t1

0x82b4,	// (0x000152a2) bg_active_tab_pane_g1_cp5_srt

0x822a,	// (0x00015218) bg_active_tab_pane_g2_cp5_srt

0x82bd,	// (0x000152ab) bg_active_tab_pane_g3_cp5_srt

0xa2b1,	// (0x0001729f) navi_text_pane_srt_t1

0xa2a9,	// (0x00017297) navi_icon_pane_srt_g1

0x87a7,	// (0x00015795) midp_editing_number_pane_srt

0x85de,	// (0x000155cc) midp_ticker_pane_srt

0x87af,	// (0x0001579d) midp_ticker_pane_srt_g1

0x87b7,	// (0x000157a5) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0001c75b) midp_ticker_pane_srt_g

0x87bf,	// (0x000157ad) midp_ticker_pane_srt_t1

0xa29a,	// (0x00017288) midp_editing_number_pane_t1_copy1

0x85e6,	// (0x000155d4) listscroll_midp_pane

0x85e6,	// (0x000155d4) midp_form_pane

0x8655,	// (0x00015643) midp_info_popup_window_ParamLimits

0x8655,	// (0x00015643) midp_info_popup_window

0x3de8,	// (0x00010dd6) bg_popup_sub_pane_cp50_ParamLimits

0x3de8,	// (0x00010dd6) bg_popup_sub_pane_cp50

0x937c,	// (0x0001636a) listscroll_midp_info_pane_ParamLimits

0x937c,	// (0x0001636a) listscroll_midp_info_pane

0x935c,	// (0x0001634a) listscroll_form_midp_pane_ParamLimits

0x935c,	// (0x0001634a) listscroll_form_midp_pane

0x9368,	// (0x00016356) scroll_bar_cp050

0x933c,	// (0x0001632a) list_midp_pane

0xb42b,	// (0x00018419) signal_pane_g2_cp

0x9276,	// (0x00016264) listscroll_midp_info_pane_t1_ParamLimits

0x9276,	// (0x00016264) listscroll_midp_info_pane_t1

0x928e,	// (0x0001627c) listscroll_midp_info_pane_t2_ParamLimits

0x928e,	// (0x0001627c) listscroll_midp_info_pane_t2

0x92cc,	// (0x000162ba) listscroll_midp_info_pane_t3_ParamLimits

0x92cc,	// (0x000162ba) listscroll_midp_info_pane_t3

0x9306,	// (0x000162f4) listscroll_midp_info_pane_t4_ParamLimits

0x9306,	// (0x000162f4) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0001c813) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0001c813) listscroll_midp_info_pane_t

0x3e68,	// (0x00010e56) scroll_pane_cp21

0x9210,	// (0x000161fe) form_midp_field_choice_group_pane

0x9219,	// (0x00016207) form_midp_field_text_pane

0x925c,	// (0x0001624a) form_midp_field_time_pane

0x9264,	// (0x00016252) form_midp_gauge_slider_pane

0x926d,	// (0x0001625b) form_midp_gauge_wait_pane

0x348c,	// (0x0001047a) form_midp_image_pane

0x91f0,	// (0x000161de) list_single_midp_pane_ParamLimits

0x91f0,	// (0x000161de) list_single_midp_pane

0x91b4,	// (0x000161a2) form_midp_field_text_pane_t1

0x8f97,	// (0x00015f85) input_focus_pane_cp050

0x91df,	// (0x000161cd) list_midp_form_text_pane

0x9183,	// (0x00016171) form_midp_field_choice_group_pane_t1

0x9191,	// (0x0001617f) input_focus_pane_cp051

0x91a5,	// (0x00016193) list_midp_choice_pane

0x348c,	// (0x0001047a) status_idle_pane

0x9167,	// (0x00016155) form_midp_field_time_pane_t1

0x3313,	// (0x00010301) wait_anim_pane_g2_copy1

0x9175,	// (0x00016163) form_midp_field_time_pane_t2

0x0001,

0x8705,	// (0x000156f3) aid_navinavi_width_2_pane

0xf820,	// (0x0001c80e) form_midp_field_time_pane_t

0x348c,	// (0x0001047a) input_focus_pane_cp052

0x348c,	// (0x0001047a) bg_input_focus_pane_cp040

0x9127,	// (0x00016115) form_midp_gauge_slider_pane_t1

0x9135,	// (0x00016123) form_midp_gauge_slider_pane_t2

0x9143,	// (0x00016131) form_midp_gauge_slider_pane_t3

0x9151,	// (0x0001613f) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0001c805) form_midp_gauge_slider_pane_t

0x915f,	// (0x0001614d) form_midp_slider_pane

0x3546,	// (0x00010534) bg_input_focus_pane_cp041_ParamLimits

0x3546,	// (0x00010534) bg_input_focus_pane_cp041

0x90f4,	// (0x000160e2) form_midp_gauge_wait_pane_t1_ParamLimits

0x90f4,	// (0x000160e2) form_midp_gauge_wait_pane_t1

0x9106,	// (0x000160f4) form_midp_gauge_wait_pane_t2_ParamLimits

0x9106,	// (0x000160f4) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0001c800) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0001c800) form_midp_gauge_wait_pane_t

0x9118,	// (0x00016106) form_midp_wait_pane_ParamLimits

0x9118,	// (0x00016106) form_midp_wait_pane

0x90bc,	// (0x000160aa) form_midp_image_pane_g1

0x90c5,	// (0x000160b3) form_midp_image_pane_t1

0x90d4,	// (0x000160c2) form_midp_image_pane_t2

0x90e3,	// (0x000160d1) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0001c7f9) form_midp_image_pane_t

0x90a4,	// (0x00016092) list_single_midp_pane_g1

0x90ad,	// (0x0001609b) list_single_midp_pane_t1

0x908a,	// (0x00016078) list_midp_form_item_pane_ParamLimits

0x908a,	// (0x00016078) list_midp_form_item_pane

0x86ad,	// (0x0001569b) list_midp_form_item_pane_t1

0x86bc,	// (0x000156aa) midp_ticker_pane_g1

0x86c8,	// (0x000156b6) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0001c741) midp_ticker_pane_g

0x86d4,	// (0x000156c2) midp_ticker_pane_t1

0xa53c,	// (0x0001752a) midp_editing_number_pane_t1

0xa51a,	// (0x00017508) midp_editing_number_pane

0xa529,	// (0x00017517) midp_ticker_pane

0xa262,	// (0x00017250) ai_message_heading_pane

0x348c,	// (0x0001047a) bg_popup_window_pane_cp14

0xa26a,	// (0x00017258) listscroll_ai_message_pane

0xa1e8,	// (0x000171d6) ai_message_heading_pane_g1_ParamLimits

0xa1e8,	// (0x000171d6) ai_message_heading_pane_g1

0xa1f4,	// (0x000171e2) ai_message_heading_pane_g2_ParamLimits

0xa1f4,	// (0x000171e2) ai_message_heading_pane_g2

0xa202,	// (0x000171f0) ai_message_heading_pane_g3_ParamLimits

0xa202,	// (0x000171f0) ai_message_heading_pane_g3

0xa20e,	// (0x000171fc) ai_message_heading_pane_g4_ParamLimits

0xa20e,	// (0x000171fc) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0001c93a) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0001c93a) ai_message_heading_pane_g

0xa21a,	// (0x00017208) ai_message_heading_pane_t1_ParamLimits

0xa21a,	// (0x00017208) ai_message_heading_pane_t1

0xa234,	// (0x00017222) ai_message_heading_pane_t2_ParamLimits

0xa234,	// (0x00017222) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0001c943) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0001c943) ai_message_heading_pane_t

0xa248,	// (0x00017236) bg_popup_heading_pane_cp1_ParamLimits

0xa248,	// (0x00017236) bg_popup_heading_pane_cp1

0xa1d6,	// (0x000171c4) list_ai_message_pane_ParamLimits

0xa1d6,	// (0x000171c4) list_ai_message_pane

0x3e68,	// (0x00010e56) scroll_pane_cp10

0xa172,	// (0x00017160) list_ai_message_pane_g1

0xa17a,	// (0x00017168) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0001c917) list_ai_message_pane_g

0xa182,	// (0x00017170) list_ai_message_pane_t1_ParamLimits

0xa182,	// (0x00017170) list_ai_message_pane_t1

0xa197,	// (0x00017185) list_ai_message_pane_t2_ParamLimits

0xa197,	// (0x00017185) list_ai_message_pane_t2

0xa1ac,	// (0x0001719a) list_ai_message_pane_t3_ParamLimits

0xa1ac,	// (0x0001719a) list_ai_message_pane_t3

0xa1c1,	// (0x000171af) list_ai_message_pane_t4_ParamLimits

0xa1c1,	// (0x000171af) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0001c91c) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0001c91c) list_ai_message_pane_t

0xa15b,	// (0x00017149) cell_ai_soft_ind_pane_ParamLimits

0xa15b,	// (0x00017149) cell_ai_soft_ind_pane

0x86e6,	// (0x000156d4) cell_ai_soft_ind_pane_g1_ParamLimits

0x86e6,	// (0x000156d4) cell_ai_soft_ind_pane_g1

0x348c,	// (0x0001047a) grid_highlight_cp1

0x86f3,	// (0x000156e1) text_secondary_cp56_ParamLimits

0x86f3,	// (0x000156e1) text_secondary_cp56

0xa130,	// (0x0001711e) example_general_pane_ParamLimits

0xa130,	// (0x0001711e) example_general_pane

0xa13c,	// (0x0001712a) example_parent_pane_g1_ParamLimits

0xa13c,	// (0x0001712a) example_parent_pane_g1

0xa148,	// (0x00017136) example_parent_pane_t1_ParamLimits

0xa148,	// (0x00017136) example_parent_pane_t1

0x5eb6,	// (0x00012ea4) popup_preview_text_window_ParamLimits

0x5eb6,	// (0x00012ea4) popup_preview_text_window

0x8519,	// (0x00015507) list_single_pane_cp2_g4

0x37ea,	// (0x000107d8) bg_popup_preview_window_pane_ParamLimits

0x37ea,	// (0x000107d8) bg_popup_preview_window_pane

0x9e84,	// (0x00016e72) popup_preview_text_window_t1_ParamLimits

0x9e84,	// (0x00016e72) popup_preview_text_window_t1

0x9ea2,	// (0x00016e90) popup_preview_text_window_t2_ParamLimits

0x9ea2,	// (0x00016e90) popup_preview_text_window_t2

0x9eeb,	// (0x00016ed9) popup_preview_text_window_t3_ParamLimits

0x9eeb,	// (0x00016ed9) popup_preview_text_window_t3

0x9f30,	// (0x00016f1e) popup_preview_text_window_t4_ParamLimits

0x9f30,	// (0x00016f1e) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0001c8eb) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0001c8eb) popup_preview_text_window_t

0x9fae,	// (0x00016f9c) scroll_pane_cp11

0x8e73,	// (0x00015e61) bg_popup_preview_window_pane_g1

0x9e38,	// (0x00016e26) bg_popup_preview_window_pane_g2

0x9e42,	// (0x00016e30) bg_popup_preview_window_pane_g3

0x9e4c,	// (0x00016e3a) bg_popup_preview_window_pane_g4

0x9e56,	// (0x00016e44) bg_popup_preview_window_pane_g5

0x9e60,	// (0x00016e4e) bg_popup_preview_window_pane_g6

0x9e68,	// (0x00016e56) bg_popup_preview_window_pane_g7

0x9e70,	// (0x00016e5e) bg_popup_preview_window_pane_g8

0x503c,	// (0x0001202a) aid_popup_width_pane

0x5e92,	// (0x00012e80) popup_midp_note_alarm_window_ParamLimits

0x5e92,	// (0x00012e80) popup_midp_note_alarm_window

0x3c95,	// (0x00010c83) data_form_pane_ParamLimits

0x7e82,	// (0x00014e70) form_field_data_pane_g1

0x7e8c,	// (0x00014e7a) form_field_data_pane_t1_ParamLimits

0x3ca1,	// (0x00010c8f) input_focus_pane_ParamLimits

0x3caf,	// (0x00010c9d) data_form_wide_pane_ParamLimits

0x3cbb,	// (0x00010ca9) form_field_data_wide_pane_g1

0x3ce7,	// (0x00010cd5) form_field_data_wide_pane_t1_ParamLimits

0x39a2,	// (0x00010990) input_focus_pane_cp6_ParamLimits

0x7fb8,	// (0x00014fa6) input_popup_find_pane_g1_ParamLimits

0x7fb8,	// (0x00014fa6) input_popup_find_pane_g1

0x55cc,	// (0x000125ba) aid_navi_side_left_pane

0x55e1,	// (0x000125cf) aid_navi_side_right_pane

0x984d,	// (0x0001683b) bg_popup_window_pane_cp30_ParamLimits

0x984d,	// (0x0001683b) bg_popup_window_pane_cp30

0x98c7,	// (0x000168b5) popup_midp_note_alarm_window_g1_ParamLimits

0x98c7,	// (0x000168b5) popup_midp_note_alarm_window_g1

0x98f7,	// (0x000168e5) popup_midp_note_alarm_window_t1_ParamLimits

0x98f7,	// (0x000168e5) popup_midp_note_alarm_window_t1

0x9998,	// (0x00016986) popup_midp_note_alarm_window_t2_ParamLimits

0x9998,	// (0x00016986) popup_midp_note_alarm_window_t2

0x9a46,	// (0x00016a34) popup_midp_note_alarm_window_t3_ParamLimits

0x9a46,	// (0x00016a34) popup_midp_note_alarm_window_t3

0x9a78,	// (0x00016a66) popup_midp_note_alarm_window_t4_ParamLimits

0x9a78,	// (0x00016a66) popup_midp_note_alarm_window_t4

0x9a9e,	// (0x00016a8c) popup_midp_note_alarm_window_t5_ParamLimits

0x9a9e,	// (0x00016a8c) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0001c888) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0001c888) popup_midp_note_alarm_window_t

0x9b4a,	// (0x00016b38) wait_bar_pane_cp1_ParamLimits

0x9b4a,	// (0x00016b38) wait_bar_pane_cp1

0x348c,	// (0x0001047a) wait_anim_pane_copy1

0x348c,	// (0x0001047a) wait_border_pane_copy1

0x9532,	// (0x00016520) wait_border_pane_g1_copy1

0x3cfe,	// (0x00010cec) form_field_popup_pane_g1

0x7ea6,	// (0x00014e94) form_field_popup_pane_t1_ParamLimits

0x3ca1,	// (0x00010c8f) input_focus_pane_cp7_ParamLimits

0x3d06,	// (0x00010cf4) list_form_pane_ParamLimits

0x3d12,	// (0x00010d00) form_field_popup_wide_pane_g1

0x3d1a,	// (0x00010d08) form_field_popup_wide_pane_t1_ParamLimits

0x3ca1,	// (0x00010c8f) input_focus_pane_cp8_ParamLimits

0x3d2c,	// (0x00010d1a) list_form_wide_pane_ParamLimits

0xa737,	// (0x00017725) aid_size_cell_graphic_pane

0x7f1e,	// (0x00014f0c) data_form_pane_t1_ParamLimits

0xa4e5,	// (0x000174d3) data_form_wide_pane_t1_ParamLimits

0x8a04,	// (0x000159f2) bg_status_flat_pane

0x76b4,	// (0x000146a2) title_pane_t1_ParamLimits

0x34f6,	// (0x000104e4) title_pane_t2_ParamLimits

0x351c,	// (0x0001050a) title_pane_t3_ParamLimits

0xf557,	// (0x0001c545) title_pane_t_ParamLimits

0x80ad,	// (0x0001509b) level_1_signal_ParamLimits

0x80ba,	// (0x000150a8) level_2_signal_ParamLimits

0x80c7,	// (0x000150b5) level_3_signal_ParamLimits

0x80d4,	// (0x000150c2) level_4_signal_ParamLimits

0x80e1,	// (0x000150cf) level_5_signal_ParamLimits

0x80ee,	// (0x000150dc) level_6_signal_ParamLimits

0x80fb,	// (0x000150e9) level_7_signal_ParamLimits

0x80ad,	// (0x0001509b) level_1_battery_ParamLimits

0x80ba,	// (0x000150a8) level_2_battery_ParamLimits

0x80c7,	// (0x000150b5) level_3_battery_ParamLimits

0x80d4,	// (0x000150c2) level_4_battery_ParamLimits

0x80e1,	// (0x000150cf) level_5_battery_ParamLimits

0x80ee,	// (0x000150dc) level_6_battery_ParamLimits

0x80fb,	// (0x000150e9) level_7_battery_ParamLimits

0x9752,	// (0x00016740) bg_status_flat_pane_g1

0x975a,	// (0x00016748) bg_status_flat_pane_g2

0x9762,	// (0x00016750) bg_status_flat_pane_g3

0x976a,	// (0x00016758) bg_status_flat_pane_g4

0x9772,	// (0x00016760) bg_status_flat_pane_g5

0x977a,	// (0x00016768) bg_status_flat_pane_g6

0x9782,	// (0x00016770) bg_status_flat_pane_g7

0x7724,	// (0x00014712) tabs_3_active_pane_t1_ParamLimits

0x7724,	// (0x00014712) tabs_3_passive_pane_t1_ParamLimits

0x773e,	// (0x0001472c) tabs_4_active_pane_t1_ParamLimits

0x773e,	// (0x0001472c) tabs_4_1_passive_pane_t1_ParamLimits

0x7fce,	// (0x00014fbc) tabs_2_active_pane_t1_ParamLimits

0x7fce,	// (0x00014fbc) tabs_2_passive_pane_t1_ParamLimits

0x3f98,	// (0x00010f86) bg_active_tab_pane_cp4_ParamLimits

0x7fe0,	// (0x00014fce) tabs_2_long_active_pane_t1_ParamLimits

0x7ff3,	// (0x00014fe1) bg_passive_tab_pane_cp4_ParamLimits

0x621a,	// (0x00013208) list_single_midp_graphic_pane_t1_ParamLimits

0x3f98,	// (0x00010f86) bg_active_tab_pane_cp5_ParamLimits

0x7fff,	// (0x00014fed) tabs_3_long_active_pane_t1_ParamLimits

0x7ff3,	// (0x00014fe1) bg_passive_tab_pane_cp5_ParamLimits

0x621a,	// (0x00013208) list_single_midp_graphic_pane_t1

0x8a04,	// (0x000159f2) bg_status_flat_pane_ParamLimits

0x8ac9,	// (0x00015ab7) indicator_pane_cp2_ParamLimits

0x8ac9,	// (0x00015ab7) indicator_pane_cp2

0x8c0c,	// (0x00015bfa) navi_pane_srt_ParamLimits

0x8c0c,	// (0x00015bfa) navi_pane_srt

0x8c30,	// (0x00015c1e) popup_clock_digital_analogue_window_cp1

0x362d,	// (0x0001061b) indicator_pane_t1

0x85de,	// (0x000155cc) copy_highlight_pane

0x85de,	// (0x000155cc) cursor_graphics_pane

0x85de,	// (0x000155cc) graphic_within_text_pane

0x85de,	// (0x000155cc) link_highlight_pane

0x9f71,	// (0x00016f5f) popup_preview_text_window_t5_ParamLimits

0x9f71,	// (0x00016f5f) popup_preview_text_window_t5

0x870f,	// (0x000156fd) cursor_digital_pane

0x870f,	// (0x000156fd) cursor_primary_pane

0x8720,	// (0x0001570e) cursor_primary_small_pane

0x8728,	// (0x00015716) cursor_secondary_pane

0x8730,	// (0x0001571e) cursor_title_pane

0x870f,	// (0x000156fd) link_highlight_digital_pane

0x8717,	// (0x00015705) link_highlight_primary_pane

0x8720,	// (0x0001570e) link_highlight_primary_small_pane

0x8728,	// (0x00015716) link_highlight_secondary_pane

0x8730,	// (0x0001571e) link_highlight_title_pane

0x870f,	// (0x000156fd) copy_highlight_digital_pane

0x870f,	// (0x000156fd) copy_highlight_primary_pane

0x8720,	// (0x0001570e) copy_highlight_primary_small_pane

0x8728,	// (0x00015716) copy_highlight_secondary_pane

0x8730,	// (0x0001571e) copy_highlight_title_pane

0x8728,	// (0x00015716) graphic_text_digital_pane

0x97f0,	// (0x000167de) graphic_text_primary_pane

0x97f9,	// (0x000167e7) graphic_text_primary_small_pane

0x8720,	// (0x0001570e) graphic_text_secondary_pane

0x870f,	// (0x000156fd) graphic_text_title_pane

0x8738,	// (0x00015726) cursor_primary_pane_g1

0x97e2,	// (0x000167d0) cursor_text_primary_t1

0x97ca,	// (0x000167b8) cursor_primary_small_pane_g1

0x97d4,	// (0x000167c2) cursor_text_primary_small_t1

0x97b2,	// (0x000167a0) cursor_primary_small_pane_g1_copy1

0x97bc,	// (0x000167aa) cursor_text_primary_small_t1_copy1

0x979a,	// (0x00016788) cursor_text_title_t1

0x97a8,	// (0x00016796) cursor_title_pane_g1

0x8738,	// (0x00015726) cursor_digital_pane_g1

0x8742,	// (0x00015730) cursor_text_digital_t1

0x8750,	// (0x0001573e) link_highlight_primary_pane_g1

0x9743,	// (0x00016731) link_highlight_primary_pane_t1

0x8750,	// (0x0001573e) link_highlight_primary_small_pane_g1

0x8758,	// (0x00015746) link_highlight_primary_small_pane_t1

0x8767,	// (0x00015755) link_highlight_secondary_pane_g1

0x876f,	// (0x0001575d) link_highlight_secondary_pane_t1

0x96b7,	// (0x000166a5) link_highlight_title_pane_g1

0x96bf,	// (0x000166ad) link_highlight_title_pane_t1

0x96a0,	// (0x0001668e) link_highlight_digital_pane_g1

0x96a8,	// (0x00016696) link_highlight_digital_pane_t1

0x9568,	// (0x00016556) copy_highlight_primary_pane_g1

0x957f,	// (0x0001656d) copy_highlight_primary_pane_t1

0x9568,	// (0x00016556) copy_highlight_primary_small_pane_g1

0x9570,	// (0x0001655e) copy_highlight_primary_small_pane_t1

0x877e,	// (0x0001576c) copy_highlight_secondary_pane_g1

0x8786,	// (0x00015774) copy_highlight_secondary_pane_t1

0x9551,	// (0x0001653f) copy_highlight_title_pane_g1

0x9559,	// (0x00016547) copy_highlight_title_pane_t1

0x9568,	// (0x00016556) copy_highlight_digital_pane_g1

0xa909,	// (0x000178f7) copy_highlight_digital_pane_t1

0xa85d,	// (0x0001784b) graphic_text_primary_pane_g1

0xa8ed,	// (0x000178db) graphic_text_primary_pane_t1

0xa8fb,	// (0x000178e9) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0001c9b7) graphic_text_primary_pane_t

0xa8c9,	// (0x000178b7) graphic_text_primary_small_pane_g1

0xa8d1,	// (0x000178bf) graphic_text_primary_small_pane_t1

0xa8df,	// (0x000178cd) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0001c9b2) graphic_text_primary_small_pane_t

0xa8a5,	// (0x00017893) graphic_text_secondary_pane_g1

0xa8ad,	// (0x0001789b) graphic_text_secondary_pane_t1

0xa8bb,	// (0x000178a9) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0001c9ad) graphic_text_secondary_pane_t

0xa881,	// (0x0001786f) graphic_text_title_pane_g1

0xa889,	// (0x00017877) graphic_text_title_pane_t1

0xa897,	// (0x00017885) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0001c9a8) graphic_text_title_pane_t

0xa85d,	// (0x0001784b) graphic_text_digital_pane_g1

0xa865,	// (0x00017853) graphic_text_digital_pane_t1

0xa873,	// (0x00017861) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0001c9a3) graphic_text_digital_pane_t

0x3546,	// (0x00010534) navi_icon_pane_srt_ParamLimits

0x3546,	// (0x00010534) navi_icon_pane_srt

0x348c,	// (0x0001047a) navi_midp_pane_srt

0x348c,	// (0x0001047a) navi_navi_pane_srt

0x3546,	// (0x00010534) navi_text_pane_srt_ParamLimits

0x3546,	// (0x00010534) navi_text_pane_srt

0xa828,	// (0x00017816) navi_navi_icon_text_pane_srt

0xa830,	// (0x0001781e) navi_navi_pane_srt_g1_ParamLimits

0xa830,	// (0x0001781e) navi_navi_pane_srt_g1

0xa842,	// (0x00017830) navi_navi_pane_srt_g2_ParamLimits

0xa842,	// (0x00017830) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0001c99e) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0001c99e) navi_navi_pane_srt_g

0xa854,	// (0x00017842) navi_navi_tabs_pane_srt

0xa828,	// (0x00017816) navi_navi_text_pane_srt

0xa828,	// (0x00017816) navi_navi_volume_pane_srt

0xa819,	// (0x00017807) navi_navi_text_pane_srt_t1

0x65b6,	// (0x000135a4) navi_navi_volume_pane_srt_g1

0x65be,	// (0x000135ac) volume_small_pane_srt_ParamLimits

0x65be,	// (0x000135ac) volume_small_pane_srt

0x58b0,	// (0x0001289e) volume_small_pane_srt_g1_ParamLimits

0x58b0,	// (0x0001289e) volume_small_pane_srt_g1

0x58c0,	// (0x000128ae) volume_small_pane_srt_g2_ParamLimits

0x58c0,	// (0x000128ae) volume_small_pane_srt_g2

0x58d1,	// (0x000128bf) volume_small_pane_srt_g3_ParamLimits

0x58d1,	// (0x000128bf) volume_small_pane_srt_g3

0x58e2,	// (0x000128d0) volume_small_pane_srt_g4_ParamLimits

0x58e2,	// (0x000128d0) volume_small_pane_srt_g4

0x58f3,	// (0x000128e1) volume_small_pane_srt_g5_ParamLimits

0x58f3,	// (0x000128e1) volume_small_pane_srt_g5

0x5904,	// (0x000128f2) volume_small_pane_srt_g6_ParamLimits

0x5904,	// (0x000128f2) volume_small_pane_srt_g6

0x5915,	// (0x00012903) volume_small_pane_srt_g7_ParamLimits

0x5915,	// (0x00012903) volume_small_pane_srt_g7

0x5926,	// (0x00012914) volume_small_pane_srt_g8_ParamLimits

0x5926,	// (0x00012914) volume_small_pane_srt_g8

0x5937,	// (0x00012925) volume_small_pane_srt_g9_ParamLimits

0x5937,	// (0x00012925) volume_small_pane_srt_g9

0x5948,	// (0x00012936) volume_small_pane_srt_g10_ParamLimits

0x5948,	// (0x00012936) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0001c746) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0001c746) volume_small_pane_srt_g

0x389f,	// (0x0001088d) query_popup_data_pane_cp2

0xa7ff,	// (0x000177ed) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa7ff,	// (0x000177ed) navi_navi_icon_text_pane_srt_t1

0x97f0,	// (0x000167de) navi_tabs_2_long_pane_srt

0x97f0,	// (0x000167de) navi_tabs_2_pane_srt

0x97f0,	// (0x000167de) navi_tabs_3_long_pane_srt

0x97f0,	// (0x000167de) navi_tabs_3_pane_srt

0x97f0,	// (0x000167de) navi_tabs_4_pane_srt

0x6596,	// (0x00013584) tabs_2_active_pane_srt_ParamLimits

0x6596,	// (0x00013584) tabs_2_active_pane_srt

0x65a6,	// (0x00013594) tabs_2_passive_pane_srt_ParamLimits

0x65a6,	// (0x00013594) tabs_2_passive_pane_srt

0x890d,	// (0x000158fb) bg_passive_tab_pane_cp1_srt_ParamLimits

0x890d,	// (0x000158fb) bg_passive_tab_pane_cp1_srt

0xa7cb,	// (0x000177b9) bg_passive_tab_pane_g1_cp1_srt

0x822a,	// (0x00015218) bg_passive_tab_pane_g2_cp1_srt

0xa7d4,	// (0x000177c2) bg_passive_tab_pane_g3_cp1_srt

0x3546,	// (0x00010534) bg_active_tab_pane_cp1_srt_ParamLimits

0x3546,	// (0x00010534) bg_active_tab_pane_cp1_srt

0xa7dd,	// (0x000177cb) tabs_2_active_pane_srt_g1

0xa7e5,	// (0x000177d3) tabs_2_active_pane_srt_t1_ParamLimits

0xa7e5,	// (0x000177d3) tabs_2_active_pane_srt_t1

0xa7cb,	// (0x000177b9) bg_active_tab_pane_g1_cp1_srt

0x822a,	// (0x00015218) bg_active_tab_pane_g2_cp1_srt

0xa7d4,	// (0x000177c2) bg_active_tab_pane_g3_cp1_srt

0x6563,	// (0x00013551) tabs_3_active_pane_srt_ParamLimits

0x6563,	// (0x00013551) tabs_3_active_pane_srt

0x6574,	// (0x00013562) tabs_3_passive_pane_cp_srt_ParamLimits

0x6574,	// (0x00013562) tabs_3_passive_pane_cp_srt

0x6585,	// (0x00013573) tabs_3_passive_pane_srt_ParamLimits

0x6585,	// (0x00013573) tabs_3_passive_pane_srt

0x890d,	// (0x000158fb) bg_passive_tab_pane_cp2_srt_ParamLimits

0x890d,	// (0x000158fb) bg_passive_tab_pane_cp2_srt

0x8795,	// (0x00015783) bg_passive_tab_pane_g1_cp2_srt

0x822a,	// (0x00015218) bg_passive_tab_pane_g2_cp2_srt

0x879e,	// (0x0001578c) bg_passive_tab_pane_g3_cp2_srt

0x3546,	// (0x00010534) bg_active_tab_pane_cp2_srt_ParamLimits

0x3546,	// (0x00010534) bg_active_tab_pane_cp2_srt

0xa7b1,	// (0x0001779f) tabs_3_active_pane_srt_g1

0xa7b9,	// (0x000177a7) tabs_3_active_pane_srt_t1_ParamLimits

0xa7b9,	// (0x000177a7) tabs_3_active_pane_srt_t1

0x8795,	// (0x00015783) bg_active_tab_pane_g1_cp2_srt

0x822a,	// (0x00015218) bg_active_tab_pane_g2_cp2_srt

0x879e,	// (0x0001578c) bg_active_tab_pane_g3_cp2_srt

0x651b,	// (0x00013509) tabs_4_active_pane_srt_ParamLimits

0x651b,	// (0x00013509) tabs_4_active_pane_srt

0x652d,	// (0x0001351b) tabs_4_passive_pane_cp2_srt_ParamLimits

0x652d,	// (0x0001351b) tabs_4_passive_pane_cp2_srt

0x5ac7,	// (0x00012ab5) aid_size_cell_toolbar

0x7ff3,	// (0x00014fe1) main_idle_act_pane_ParamLimits

0x5cb8,	// (0x00012ca6) popup_large_graphic_colour_window_ParamLimits

0x605f,	// (0x0001304d) popup_toolbar_window_ParamLimits

0x605f,	// (0x0001304d) popup_toolbar_window

0xa560,	// (0x0001754e) list_single_graphic_2heading_pane_ParamLimits

0xa560,	// (0x0001754e) list_single_graphic_2heading_pane

0x41dc,	// (0x000111ca) aid_size_cell_apps_grid_lsc_pane

0x41ee,	// (0x000111dc) aid_size_cell_apps_grid_prt_pane

0x890d,	// (0x000158fb) bg_wml_button_pane_cp1_ParamLimits

0x890d,	// (0x000158fb) bg_wml_button_pane_cp1

0x91b4,	// (0x000161a2) form_midp_field_text_pane_t1_ParamLimits

0x8f97,	// (0x00015f85) input_focus_pane_cp050_ParamLimits

0x91df,	// (0x000161cd) list_midp_form_text_pane_ParamLimits

0x9191,	// (0x0001617f) input_focus_pane_cp051_ParamLimits

0x91a5,	// (0x00016193) list_midp_choice_pane_ParamLimits

0x9050,	// (0x0001603e) list_single_2graphic_pane_cp3_ParamLimits

0x9050,	// (0x0001603e) list_single_2graphic_pane_cp3

0x9066,	// (0x00016054) list_single_midp_graphic_pane_ParamLimits

0x9066,	// (0x00016054) list_single_midp_graphic_pane

0x611e,	// (0x0001310c) list_single_graphic_2heading_pane_g1_ParamLimits

0x611e,	// (0x0001310c) list_single_graphic_2heading_pane_g1

0x612a,	// (0x00013118) list_single_graphic_2heading_pane_g4_ParamLimits

0x612a,	// (0x00013118) list_single_graphic_2heading_pane_g4

0x6136,	// (0x00013124) list_single_graphic_2heading_pane_g5_ParamLimits

0x6136,	// (0x00013124) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0001c799) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0001c799) list_single_graphic_2heading_pane_g

0x6142,	// (0x00013130) list_single_graphic_2heading_pane_t1_ParamLimits

0x6142,	// (0x00013130) list_single_graphic_2heading_pane_t1

0x6156,	// (0x00013144) list_single_graphic_2heading_pane_t2_ParamLimits

0x6156,	// (0x00013144) list_single_graphic_2heading_pane_t2

0x6172,	// (0x00013160) list_single_graphic_2heading_pane_t3_ParamLimits

0x6172,	// (0x00013160) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0001c7a0) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0001c7a0) list_single_graphic_2heading_pane_t

0x8d83,	// (0x00015d71) bg_popup_sub_pane_cp2

0x8dad,	// (0x00015d9b) grid_toobar_pane

0x618a,	// (0x00013178) cell_toolbar_pane_ParamLimits

0x618a,	// (0x00013178) cell_toolbar_pane

0x8e17,	// (0x00015e05) cell_toolbar_pane_g1_ParamLimits

0x8e17,	// (0x00015e05) cell_toolbar_pane_g1

0x8e2b,	// (0x00015e19) cell_toolbar_pane_g2_ParamLimits

0x8e2b,	// (0x00015e19) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0001c7ae) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0001c7ae) cell_toolbar_pane_g

0x8e4d,	// (0x00015e3b) grid_highlight_pane_cp2_ParamLimits

0x8e4d,	// (0x00015e3b) grid_highlight_pane_cp2

0x8e67,	// (0x00015e55) toolbar_button_pane

0x8e73,	// (0x00015e61) toolbar_button_pane_g1

0x8e7b,	// (0x00015e69) toolbar_button_pane_g2

0x8e83,	// (0x00015e71) toolbar_button_pane_g3

0x8e8b,	// (0x00015e79) toolbar_button_pane_g4

0x8e93,	// (0x00015e81) toolbar_button_pane_g5

0x8e9b,	// (0x00015e89) toolbar_button_pane_g6

0x8ea3,	// (0x00015e91) toolbar_button_pane_g7

0x8eab,	// (0x00015e99) toolbar_button_pane_g8

0x8eb3,	// (0x00015ea1) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x0001c7b3) toolbar_button_pane_g

0x61c2,	// (0x000131b0) list_single_2graphic_pane_g1_cp3_ParamLimits

0x61c2,	// (0x000131b0) list_single_2graphic_pane_g1_cp3

0x61ce,	// (0x000131bc) list_single_2graphic_pane_g2_cp3_ParamLimits

0x61ce,	// (0x000131bc) list_single_2graphic_pane_g2_cp3

0x61df,	// (0x000131cd) list_single_2graphic_pane_g3_cp3

0x61e7,	// (0x000131d5) list_single_2graphic_pane_g4_cp3_ParamLimits

0x61e7,	// (0x000131d5) list_single_2graphic_pane_g4_cp3

0x61f3,	// (0x000131e1) list_single_2graphic_pane_t1_cp3_ParamLimits

0x61f3,	// (0x000131e1) list_single_2graphic_pane_t1_cp3

0x620e,	// (0x000131fc) list_single_midp_graphic_pane_g2_ParamLimits

0x620e,	// (0x000131fc) list_single_midp_graphic_pane_g2

0x5acf,	// (0x00012abd) aid_zoom_text_primary

0x5ad7,	// (0x00012ac5) aid_zoom_text_secondary

0x884f,	// (0x0001583d) status_small_pane_g7_ParamLimits

0x884f,	// (0x0001583d) status_small_pane_g7

0x8872,	// (0x00015860) status_small_pane_t1_ParamLimits

0x768f,	// (0x0001467d) title_pane_g2

0x0003,

0xf54e,	// (0x0001c53c) title_pane_g

0x7865,	// (0x00014853) aid_size_cell_colour_1_pane_ParamLimits

0x7865,	// (0x00014853) aid_size_cell_colour_1_pane

0x7879,	// (0x00014867) aid_size_cell_colour_2_pane_ParamLimits

0x7879,	// (0x00014867) aid_size_cell_colour_2_pane

0x788d,	// (0x0001487b) aid_size_cell_colour_3_pane_ParamLimits

0x788d,	// (0x0001487b) aid_size_cell_colour_3_pane

0x78a1,	// (0x0001488f) aid_size_cell_colour_4_pane_ParamLimits

0x78a1,	// (0x0001488f) aid_size_cell_colour_4_pane

0x5508,	// (0x000124f6) title_pane_stacon_g1_ParamLimits

0x5508,	// (0x000124f6) title_pane_stacon_g1

0x95d6,	// (0x000165c4) popup_note_wait_window_g3_ParamLimits

0x95d6,	// (0x000165c4) popup_note_wait_window_g3

0x964d,	// (0x0001663b) popup_note_wait_window_t5_ParamLimits

0x964d,	// (0x0001663b) popup_note_wait_window_t5

0x348c,	// (0x0001047a) main_feb_china_hwr_fs_writing_pane

0x5b7f,	// (0x00012b6d) popup_feb_china_hwr_fs_window_ParamLimits

0x5b7f,	// (0x00012b6d) popup_feb_china_hwr_fs_window

0x6230,	// (0x0001321e) aid_size_cell_hwr_fs_ParamLimits

0x6230,	// (0x0001321e) aid_size_cell_hwr_fs

0x8f97,	// (0x00015f85) bg_popup_sub_pane_cp3_ParamLimits

0x8f97,	// (0x00015f85) bg_popup_sub_pane_cp3

0x6245,	// (0x00013233) grid_hwr_fs_pane_ParamLimits

0x6245,	// (0x00013233) grid_hwr_fs_pane

0x625d,	// (0x0001324b) linegrid_hwr_fs_pane_ParamLimits

0x625d,	// (0x0001324b) linegrid_hwr_fs_pane

0x626d,	// (0x0001325b) cell_hwr_fs_pane_ParamLimits

0x626d,	// (0x0001325b) cell_hwr_fs_pane

0x8fa3,	// (0x00015f91) linegrid_hwr_fs_pane_g1_ParamLimits

0x8fa3,	// (0x00015f91) linegrid_hwr_fs_pane_g1

0x8faf,	// (0x00015f9d) linegrid_hwr_fs_pane_g2_ParamLimits

0x8faf,	// (0x00015f9d) linegrid_hwr_fs_pane_g2

0x8fc1,	// (0x00015faf) linegrid_hwr_fs_pane_g3_ParamLimits

0x8fc1,	// (0x00015faf) linegrid_hwr_fs_pane_g3

0x6291,	// (0x0001327f) linegrid_hwr_fs_pane_g4_ParamLimits

0x6291,	// (0x0001327f) linegrid_hwr_fs_pane_g4

0x62af,	// (0x0001329d) linegrid_hwr_fs_pane_g5_ParamLimits

0x62af,	// (0x0001329d) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0001c7de) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0001c7de) linegrid_hwr_fs_pane_g

0x8fcd,	// (0x00015fbb) cell_hwr_fs_pane_g1_ParamLimits

0x8fcd,	// (0x00015fbb) cell_hwr_fs_pane_g1

0x8cbe,	// (0x00015cac) cell_hwr_fs_pane_g2_ParamLimits

0x8cbe,	// (0x00015cac) cell_hwr_fs_pane_g2

0x8fe3,	// (0x00015fd1) cell_hwr_fs_pane_g3_ParamLimits

0x8fe3,	// (0x00015fd1) cell_hwr_fs_pane_g3

0x8ff0,	// (0x00015fde) cell_hwr_fs_pane_g4_ParamLimits

0x8ff0,	// (0x00015fde) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0001c7e9) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0001c7e9) cell_hwr_fs_pane_g

0x62c5,	// (0x000132b3) cell_hwr_fs_pane_t1

0x348c,	// (0x0001047a) grid_highlight_pane_cp6

0x348c,	// (0x0001047a) main_idle_act2_pane

0x3e4f,	// (0x00010e3d) aid_inside_area_popup_secondary

0x9c86,	// (0x00016c74) aid_inside_area_window_primary_ParamLimits

0x9c86,	// (0x00016c74) aid_inside_area_window_primary

0xa918,	// (0x00017906) ai2_news_ticker_pane

0xa920,	// (0x0001790e) aid_size_cell_ai1_link_ParamLimits

0xa920,	// (0x0001790e) aid_size_cell_ai1_link

0xa93a,	// (0x00017928) popup_ai2_data_window_ParamLimits

0xa93a,	// (0x00017928) popup_ai2_data_window

0xa958,	// (0x00017946) popup_ai2_link_window_ParamLimits

0xa958,	// (0x00017946) popup_ai2_link_window

0x8f97,	// (0x00015f85) bg_popup_sub_pane_cp4_ParamLimits

0x8f97,	// (0x00015f85) bg_popup_sub_pane_cp4

0xa96e,	// (0x0001795c) grid_ai2_link_pane_ParamLimits

0xa96e,	// (0x0001795c) grid_ai2_link_pane

0xa985,	// (0x00017973) popup_ai2_link_window_g1_ParamLimits

0xa985,	// (0x00017973) popup_ai2_link_window_g1

0xa991,	// (0x0001797f) popup_ai2_link_window_g2_ParamLimits

0xa991,	// (0x0001797f) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0001c9bc) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0001c9bc) popup_ai2_link_window_g

0xa9a2,	// (0x00017990) ai2_mp_button_pane

0xa9aa,	// (0x00017998) ai2_mp_volume_pane

0x9191,	// (0x0001617f) bg_popup_sub_pane_cp5_ParamLimits

0x9191,	// (0x0001617f) bg_popup_sub_pane_cp5

0xa9b2,	// (0x000179a0) heading_ai2_gene_pane_ParamLimits

0xa9b2,	// (0x000179a0) heading_ai2_gene_pane

0xa9be,	// (0x000179ac) list_ai2_gene_pane_ParamLimits

0xa9be,	// (0x000179ac) list_ai2_gene_pane

0xaa06,	// (0x000179f4) cell_ai2_link_pane_ParamLimits

0xaa06,	// (0x000179f4) cell_ai2_link_pane

0xaa1c,	// (0x00017a0a) cell_ai2_link_pane_g1

0x348c,	// (0x0001047a) grid_highlight_pane_cp7

0x65d3,	// (0x000135c1) ai2_mp_volume_pane_g1

0xaaef,	// (0x00017add) ai2_mp_volume_pane_g2

0xaa64,	// (0x00017a52) list_ai2_gene_pane_t1

0xaaf7,	// (0x00017ae5) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0001c9d5) ai2_mp_volume_pane_g

0x65db,	// (0x000135c9) volume_small_pane_cp3

0xaaff,	// (0x00017aed) aid_size_cell_ai2_button

0xab07,	// (0x00017af5) grid_ai2_button_pane

0xab10,	// (0x00017afe) cell_ai2_button_pane_ParamLimits

0xab10,	// (0x00017afe) cell_ai2_button_pane

0x3313,	// (0x00010301) cell_ai2_button_pane_g1

0x348c,	// (0x0001047a) grid_highlight_pane_cp8

0xaaaf,	// (0x00017a9d) ai2_gene_pane_t1_ParamLimits

0xaaaf,	// (0x00017a9d) ai2_gene_pane_t1

0x5abd,	// (0x00012aab) aid_height_parent_landscape

0xa333,	// (0x00017321) aid_height_set_list

0xa344,	// (0x00017332) aid_size_parent

0xa737,	// (0x00017725) aid_size_cell_graphic_pane_ParamLimits

0xa9ce,	// (0x000179bc) popup_ai2_data_window_g1_ParamLimits

0xa9ce,	// (0x000179bc) popup_ai2_data_window_g1

0xa9da,	// (0x000179c8) ai2_news_ticker_pane_g1

0xa9e2,	// (0x000179d0) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0001c9c1) ai2_news_ticker_pane_g

0xa9ea,	// (0x000179d8) ai2_news_ticker_pane_t1

0xa9f8,	// (0x000179e6) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0001c9c6) ai2_news_ticker_pane_t

0xaa25,	// (0x00017a13) heading_ai2_gene_pane_g1

0xaa2d,	// (0x00017a1b) heading_ai2_gene_pane_t1_ParamLimits

0xaa2d,	// (0x00017a1b) heading_ai2_gene_pane_t1

0xaa42,	// (0x00017a30) list_highlight_pane_cp6

0xaa4a,	// (0x00017a38) ai2_gene_pane_ParamLimits

0xaa4a,	// (0x00017a38) ai2_gene_pane

0xaa72,	// (0x00017a60) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0001c9cb) list_ai2_gene_pane_t

0xaa80,	// (0x00017a6e) list_highlight_pane_cp8_ParamLimits

0xaa80,	// (0x00017a6e) list_highlight_pane_cp8

0xaa91,	// (0x00017a7f) ai2_gene_pane_g1_ParamLimits

0xaa91,	// (0x00017a7f) ai2_gene_pane_g1

0xaaa3,	// (0x00017a91) ai2_gene_pane_g2_ParamLimits

0xaaa3,	// (0x00017a91) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0001c9d0) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0001c9d0) ai2_gene_pane_g

0x3bbd,	// (0x00010bab) scroll_pane_cp12

0x5a7a,	// (0x00012a68) control_pane_t3_ParamLimits

0x5a7a,	// (0x00012a68) control_pane_t3

0x8863,	// (0x00015851) status_small_pane_g8_ParamLimits

0x8863,	// (0x00015851) status_small_pane_g8

0x5c7d,	// (0x00012c6b) popup_find_window_ParamLimits

0x5ea8,	// (0x00012e96) popup_note_image_window_ParamLimits

0x8de9,	// (0x00015dd7) list_double2_graphic_pane_vc_g1_ParamLimits

0x8de9,	// (0x00015dd7) list_double2_graphic_pane_vc_g1

0x854f,	// (0x0001553d) list_double2_graphic_pane_vc_g2_ParamLimits

0x854f,	// (0x0001553d) list_double2_graphic_pane_vc_g2

0x8df5,	// (0x00015de3) list_double2_graphic_pane_vc_g3_ParamLimits

0x8df5,	// (0x00015de3) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x0001c7a7) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001c7a7) list_double2_graphic_pane_vc_g

0x8e01,	// (0x00015def) list_double2_graphic_pane_vc_t1_ParamLimits

0x8e01,	// (0x00015def) list_double2_graphic_pane_vc_t1

0x854f,	// (0x0001553d) list_single_heading_pane_vc_g1_ParamLimits

0x854f,	// (0x0001553d) list_single_heading_pane_vc_g1

0x8df5,	// (0x00015de3) list_single_heading_pane_vc_g2_ParamLimits

0x8df5,	// (0x00015de3) list_single_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c7c8) list_single_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c7c8) list_single_heading_pane_vc_g

0x8ebb,	// (0x00015ea9) list_single_heading_pane_vc_t1_ParamLimits

0x8ebb,	// (0x00015ea9) list_single_heading_pane_vc_t1

0x8ed1,	// (0x00015ebf) list_single_heading_pane_vc_t2_ParamLimits

0x8ed1,	// (0x00015ebf) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0001c7cd) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0001c7cd) list_single_heading_pane_vc_t

0x8ee3,	// (0x00015ed1) list_setting_number_pane_vc_g1_ParamLimits

0x8ee3,	// (0x00015ed1) list_setting_number_pane_vc_g1

0x8eef,	// (0x00015edd) list_setting_number_pane_vc_g2_ParamLimits

0x8eef,	// (0x00015edd) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0001c7d2) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0001c7d2) list_setting_number_pane_vc_g

0x8efb,	// (0x00015ee9) list_setting_number_pane_vc_t1_ParamLimits

0x8efb,	// (0x00015ee9) list_setting_number_pane_vc_t1

0x8f0f,	// (0x00015efd) list_setting_number_pane_vc_t2_ParamLimits

0x8f0f,	// (0x00015efd) list_setting_number_pane_vc_t2

0x8f2b,	// (0x00015f19) list_setting_number_pane_vc_t3_ParamLimits

0x8f2b,	// (0x00015f19) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0001c7d7) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0001c7d7) list_setting_number_pane_vc_t

0x8f59,	// (0x00015f47) set_value_pane_vc_ParamLimits

0x8f59,	// (0x00015f47) set_value_pane_vc

0xa560,	// (0x0001754e) list_double2_graphic_pane_vc_ParamLimits

0xa560,	// (0x0001754e) list_double2_graphic_pane_vc

0xa560,	// (0x0001754e) list_double2_large_graphic_pane_vc_ParamLimits

0xa560,	// (0x0001754e) list_double2_large_graphic_pane_vc

0xa560,	// (0x0001754e) list_double2_pane_vc_ParamLimits

0xa560,	// (0x0001754e) list_double2_pane_vc

0xa560,	// (0x0001754e) list_double_graphic_heading_pane_vc_ParamLimits

0xa560,	// (0x0001754e) list_double_graphic_heading_pane_vc

0xa560,	// (0x0001754e) list_double_graphic_pane_vc_ParamLimits

0xa560,	// (0x0001754e) list_double_graphic_pane_vc

0xa560,	// (0x0001754e) list_double_heading_pane_vc_ParamLimits

0xa560,	// (0x0001754e) list_double_heading_pane_vc

0xa588,	// (0x00017576) list_double_large_graphic_pane_vc_ParamLimits

0xa588,	// (0x00017576) list_double_large_graphic_pane_vc

0xa560,	// (0x0001754e) list_double_number_pane_vc_ParamLimits

0xa560,	// (0x0001754e) list_double_number_pane_vc

0xa560,	// (0x0001754e) list_double_pane_vc_ParamLimits

0xa560,	// (0x0001754e) list_double_pane_vc

0xa560,	// (0x0001754e) list_double_time_pane_vc_ParamLimits

0xa560,	// (0x0001754e) list_double_time_pane_vc

0xa560,	// (0x0001754e) list_setting_number_pane_vc_ParamLimits

0xa560,	// (0x0001754e) list_setting_number_pane_vc

0xa560,	// (0x0001754e) list_setting_pane_vc_ParamLimits

0xa560,	// (0x0001754e) list_setting_pane_vc

0xa560,	// (0x0001754e) list_single_graphic_heading_pane_vc_ParamLimits

0xa560,	// (0x0001754e) list_single_graphic_heading_pane_vc

0xa560,	// (0x0001754e) list_single_heading_pane_vc_ParamLimits

0xa560,	// (0x0001754e) list_single_heading_pane_vc

0xa5aa,	// (0x00017598) list_single_number_heading_pane_vc_ParamLimits

0xa5aa,	// (0x00017598) list_single_number_heading_pane_vc

0x8de9,	// (0x00015dd7) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x8de9,	// (0x00015dd7) list_double_graphic_heading_pane_vc_g1

0xab43,	// (0x00017b31) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xab43,	// (0x00017b31) list_double_graphic_heading_pane_vc_g2

0xab4f,	// (0x00017b3d) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xab4f,	// (0x00017b3d) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x0001c9dc) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x0001c9dc) list_double_graphic_heading_pane_vc_g

0xab5b,	// (0x00017b49) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xab5b,	// (0x00017b49) list_double_graphic_heading_pane_vc_t1

0xab71,	// (0x00017b5f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xab71,	// (0x00017b5f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x0001c9e3) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x0001c9e3) list_double_graphic_heading_pane_vc_t

0x8ee3,	// (0x00015ed1) list_setting_pane_vc_g1_ParamLimits

0x8ee3,	// (0x00015ed1) list_setting_pane_vc_g1

0x8eef,	// (0x00015edd) list_setting_pane_vc_g2_ParamLimits

0x8eef,	// (0x00015edd) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0001c7d2) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0001c7d2) list_setting_pane_vc_g

0xadaa,	// (0x00017d98) list_setting_pane_vc_t1_ParamLimits

0xadaa,	// (0x00017d98) list_setting_pane_vc_t1

0xadc6,	// (0x00017db4) list_setting_pane_vc_t2_ParamLimits

0xadc6,	// (0x00017db4) list_setting_pane_vc_t2

0x0001,

0xfa23,	// (0x0001ca11) list_setting_pane_vc_t_ParamLimits

0xfa23,	// (0x0001ca11) list_setting_pane_vc_t

0x8f59,	// (0x00015f47) set_value_pane_cp_vc_ParamLimits

0x8f59,	// (0x00015f47) set_value_pane_cp_vc

0x854f,	// (0x0001553d) list_single_number_heading_pane_vc_g1_ParamLimits

0x854f,	// (0x0001553d) list_single_number_heading_pane_vc_g1

0x8df5,	// (0x00015de3) list_single_number_heading_pane_vc_g2_ParamLimits

0x8df5,	// (0x00015de3) list_single_number_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c7c8) list_single_number_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c7c8) list_single_number_heading_pane_vc_g

0xade2,	// (0x00017dd0) list_single_number_heading_pane_vc_t1_ParamLimits

0xade2,	// (0x00017dd0) list_single_number_heading_pane_vc_t1

0xadf8,	// (0x00017de6) list_single_number_heading_pane_vc_t2_ParamLimits

0xadf8,	// (0x00017de6) list_single_number_heading_pane_vc_t2

0xae0a,	// (0x00017df8) list_single_number_heading_pane_vc_t3_ParamLimits

0xae0a,	// (0x00017df8) list_single_number_heading_pane_vc_t3

0x0002,

0xfa28,	// (0x0001ca16) list_single_number_heading_pane_vc_t_ParamLimits

0xfa28,	// (0x0001ca16) list_single_number_heading_pane_vc_t

0x8de9,	// (0x00015dd7) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x8de9,	// (0x00015dd7) list_single_graphic_heading_pane_vc_g1

0x854f,	// (0x0001553d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x854f,	// (0x0001553d) list_single_graphic_heading_pane_vc_g4

0x8df5,	// (0x00015de3) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x8df5,	// (0x00015de3) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x0001c7a7) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001c7a7) list_single_graphic_heading_pane_vc_g

0xade2,	// (0x00017dd0) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xade2,	// (0x00017dd0) list_single_graphic_heading_pane_vc_t1

0xae1c,	// (0x00017e0a) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xae1c,	// (0x00017e0a) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2f,	// (0x0001ca1d) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2f,	// (0x0001ca1d) list_single_graphic_heading_pane_vc_t

0x854f,	// (0x0001553d) list_double2_pane_vc_g1_ParamLimits

0x854f,	// (0x0001553d) list_double2_pane_vc_g1

0x8df5,	// (0x00015de3) list_double2_pane_vc_g2_ParamLimits

0x8df5,	// (0x00015de3) list_double2_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c7c8) list_double2_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c7c8) list_double2_pane_vc_g

0xae2e,	// (0x00017e1c) list_double2_pane_vc_t1_ParamLimits

0xae2e,	// (0x00017e1c) list_double2_pane_vc_t1

0xae44,	// (0x00017e32) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xae44,	// (0x00017e32) list_double2_large_graphic_pane_vc_g1

0x854f,	// (0x0001553d) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x854f,	// (0x0001553d) list_double2_large_graphic_pane_vc_g2

0x8df5,	// (0x00015de3) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x8df5,	// (0x00015de3) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa34,	// (0x0001ca22) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa34,	// (0x0001ca22) list_double2_large_graphic_pane_vc_g

0xae50,	// (0x00017e3e) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xae50,	// (0x00017e3e) list_double2_large_graphic_pane_vc_t1

0xae66,	// (0x00017e54) list_double_time_pane_vc_g1_ParamLimits

0xae66,	// (0x00017e54) list_double_time_pane_vc_g1

0xae72,	// (0x00017e60) list_double_time_pane_vc_g2_ParamLimits

0xae72,	// (0x00017e60) list_double_time_pane_vc_g2

0x0001,

0xfa3b,	// (0x0001ca29) list_double_time_pane_vc_g_ParamLimits

0xfa3b,	// (0x0001ca29) list_double_time_pane_vc_g

0xae7e,	// (0x00017e6c) list_double_time_pane_vc_t1_ParamLimits

0xae7e,	// (0x00017e6c) list_double_time_pane_vc_t1

0xaeae,	// (0x00017e9c) list_double_time_pane_vc_t2_ParamLimits

0xaeae,	// (0x00017e9c) list_double_time_pane_vc_t2

0xaed7,	// (0x00017ec5) list_double_time_pane_vc_t3_ParamLimits

0xaed7,	// (0x00017ec5) list_double_time_pane_vc_t3

0xaee9,	// (0x00017ed7) list_double_time_pane_vc_t4_ParamLimits

0xaee9,	// (0x00017ed7) list_double_time_pane_vc_t4

0x0003,

0xfa40,	// (0x0001ca2e) list_double_time_pane_vc_t_ParamLimits

0xfa40,	// (0x0001ca2e) list_double_time_pane_vc_t

0x854f,	// (0x0001553d) list_double_pane_vc_g1_ParamLimits

0x854f,	// (0x0001553d) list_double_pane_vc_g1

0x8df5,	// (0x00015de3) list_double_pane_vc_g2_ParamLimits

0x8df5,	// (0x00015de3) list_double_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c7c8) list_double_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c7c8) list_double_pane_vc_g

0xaefd,	// (0x00017eeb) list_double_pane_vc_t1_ParamLimits

0xaefd,	// (0x00017eeb) list_double_pane_vc_t1

0xaf11,	// (0x00017eff) list_double_pane_vc_t2_ParamLimits

0xaf11,	// (0x00017eff) list_double_pane_vc_t2

0x0001,

0xfa49,	// (0x0001ca37) list_double_pane_vc_t_ParamLimits

0xfa49,	// (0x0001ca37) list_double_pane_vc_t

0x854f,	// (0x0001553d) list_double_number_pane_vc_g1_ParamLimits

0x854f,	// (0x0001553d) list_double_number_pane_vc_g1

0x8df5,	// (0x00015de3) list_double_number_pane_vc_g2_ParamLimits

0x8df5,	// (0x00015de3) list_double_number_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c7c8) list_double_number_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c7c8) list_double_number_pane_vc_g

0xaf27,	// (0x00017f15) list_double_number_pane_vc_t1_ParamLimits

0xaf27,	// (0x00017f15) list_double_number_pane_vc_t1

0xaf39,	// (0x00017f27) list_double_number_pane_vc_t2_ParamLimits

0xaf39,	// (0x00017f27) list_double_number_pane_vc_t2

0xaf11,	// (0x00017eff) list_double_number_pane_vc_t3_ParamLimits

0xaf11,	// (0x00017eff) list_double_number_pane_vc_t3

0x0002,

0xfa4e,	// (0x0001ca3c) list_double_number_pane_vc_t_ParamLimits

0xfa4e,	// (0x0001ca3c) list_double_number_pane_vc_t

0xaf4d,	// (0x00017f3b) list_double_large_graphic_pane_vc_g1_ParamLimits

0xaf4d,	// (0x00017f3b) list_double_large_graphic_pane_vc_g1

0xaf6f,	// (0x00017f5d) list_double_large_graphic_pane_vc_g2_ParamLimits

0xaf6f,	// (0x00017f5d) list_double_large_graphic_pane_vc_g2

0xaf83,	// (0x00017f71) list_double_large_graphic_pane_vc_g3_ParamLimits

0xaf83,	// (0x00017f71) list_double_large_graphic_pane_vc_g3

0xaf92,	// (0x00017f80) list_double_large_graphic_pane_vc_g4_ParamLimits

0xaf92,	// (0x00017f80) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa55,	// (0x0001ca43) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x0001ca43) list_double_large_graphic_pane_vc_g

0xafa1,	// (0x00017f8f) list_double_large_graphic_pane_vc_t1_ParamLimits

0xafa1,	// (0x00017f8f) list_double_large_graphic_pane_vc_t1

0xafbd,	// (0x00017fab) list_double_large_graphic_pane_vc_t2_ParamLimits

0xafbd,	// (0x00017fab) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5e,	// (0x0001ca4c) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5e,	// (0x0001ca4c) list_double_large_graphic_pane_vc_t

0xab43,	// (0x00017b31) list_double_heading_pane_vc_g1_ParamLimits

0xab43,	// (0x00017b31) list_double_heading_pane_vc_g1

0xab4f,	// (0x00017b3d) list_double_heading_pane_vc_g2_ParamLimits

0xab4f,	// (0x00017b3d) list_double_heading_pane_vc_g2

0x0001,

0xfa63,	// (0x0001ca51) list_double_heading_pane_vc_g_ParamLimits

0xfa63,	// (0x0001ca51) list_double_heading_pane_vc_g

0xafdd,	// (0x00017fcb) list_double_heading_pane_vc_t1_ParamLimits

0xafdd,	// (0x00017fcb) list_double_heading_pane_vc_t1

0xafef,	// (0x00017fdd) list_double_heading_pane_vc_t2_ParamLimits

0xafef,	// (0x00017fdd) list_double_heading_pane_vc_t2

0x0001,

0xfa68,	// (0x0001ca56) list_double_heading_pane_vc_t_ParamLimits

0xfa68,	// (0x0001ca56) list_double_heading_pane_vc_t

0xb007,	// (0x00017ff5) list_double_graphic_pane_vc_g1_ParamLimits

0xb007,	// (0x00017ff5) list_double_graphic_pane_vc_g1

0xb013,	// (0x00018001) list_double_graphic_pane_vc_g2_ParamLimits

0xb013,	// (0x00018001) list_double_graphic_pane_vc_g2

0x854f,	// (0x0001553d) list_double_graphic_pane_vc_g3_ParamLimits

0x854f,	// (0x0001553d) list_double_graphic_pane_vc_g3

0x0003,

0xfa6d,	// (0x0001ca5b) list_double_graphic_pane_vc_g_ParamLimits

0xfa6d,	// (0x0001ca5b) list_double_graphic_pane_vc_g

0xb030,	// (0x0001801e) list_double_graphic_pane_vc_t1_ParamLimits

0xb030,	// (0x0001801e) list_double_graphic_pane_vc_t1

0xb05a,	// (0x00018048) list_double_graphic_pane_vc_t2_ParamLimits

0xb05a,	// (0x00018048) list_double_graphic_pane_vc_t2

0x0001,

0xfa76,	// (0x0001ca64) list_double_graphic_pane_vc_t_ParamLimits

0xfa76,	// (0x0001ca64) list_double_graphic_pane_vc_t

0x5048,	// (0x00012036) aid_size_cell_fastswap

0x5050,	// (0x0001203e) aid_size_cell_touch_ParamLimits

0x5050,	// (0x0001203e) aid_size_cell_touch

0x52bb,	// (0x000122a9) popup_fast_swap_wide_window_ParamLimits

0x52bb,	// (0x000122a9) popup_fast_swap_wide_window

0x53d9,	// (0x000123c7) touch_pane_ParamLimits

0x53d9,	// (0x000123c7) touch_pane

0x3c36,	// (0x00010c24) button_value_adjust_pane_cp2

0x3c3e,	// (0x00010c2c) button_value_adjust_pane_cp4

0x3c46,	// (0x00010c34) form_field_data_pane_cp2

0x7e56,	// (0x00014e44) form_field_data_wide_pane_cp2

0x421d,	// (0x0001120b) bg_scroll_pane_ParamLimits

0x566d,	// (0x0001265b) scroll_handle_pane_ParamLimits

0x5681,	// (0x0001266f) scroll_sc2_down_pane_ParamLimits

0x5681,	// (0x0001266f) scroll_sc2_down_pane

0x4277,	// (0x00011265) scroll_sc2_up_pane_ParamLimits

0x4277,	// (0x00011265) scroll_sc2_up_pane

0xb513,	// (0x00018501) grid_wheel_folder_pane_g1_ParamLimits

0xb513,	// (0x00018501) grid_wheel_folder_pane_g1

0x5848,	// (0x00012836) clock_nsta_pane_cp2_ParamLimits

0x5848,	// (0x00012836) clock_nsta_pane_cp2

0x85e6,	// (0x000155d4) listscroll_midp_pane_ParamLimits

0x85f2,	// (0x000155e0) midp_canvas_pane

0x88dd,	// (0x000158cb) nsta_clock_indic_pane

0x8919,	// (0x00015907) listscroll_form_pane_vc

0x8921,	// (0x0001590f) listscroll_set_pane_vc_ParamLimits

0x8921,	// (0x0001590f) listscroll_set_pane_vc

0x8a20,	// (0x00015a0e) clock_nsta_pane

0x8a97,	// (0x00015a85) indicator_nsta_pane

0x8d83,	// (0x00015d71) bg_popup_sub_pane_cp2_ParamLimits

0x8d97,	// (0x00015d85) find_pane_cp2_ParamLimits

0x8d97,	// (0x00015d85) find_pane_cp2

0x8dad,	// (0x00015d9b) grid_toobar_pane_ParamLimits

0x8f6b,	// (0x00015f59) list_form_gen_pane_vc_ParamLimits

0x8f6b,	// (0x00015f59) list_form_gen_pane_vc

0x8f81,	// (0x00015f6f) scroll_pane_cp8_vc_ParamLimits

0x8f81,	// (0x00015f6f) scroll_pane_cp8_vc

0x8ffd,	// (0x00015feb) data_form_wide_pane_vc_ParamLimits

0x8ffd,	// (0x00015feb) data_form_wide_pane_vc

0x9009,	// (0x00015ff7) form_field_data_wide_pane_vc_g1

0x9011,	// (0x00015fff) form_field_data_wide_pane_vc_t1_ParamLimits

0x9011,	// (0x00015fff) form_field_data_wide_pane_vc_t1

0x3ca1,	// (0x00010c8f) input_focus_pane_cp6_vc_ParamLimits

0x3ca1,	// (0x00010c8f) input_focus_pane_cp6_vc

0x933c,	// (0x0001632a) list_midp_pane_ParamLimits

0x9348,	// (0x00016336) scroll_pane_cp16_ParamLimits

0x9348,	// (0x00016336) scroll_pane_cp16

0x93aa,	// (0x00016398) button_value_adjust_pane_ParamLimits

0x93aa,	// (0x00016398) button_value_adjust_pane

0xa356,	// (0x00017344) button_value_adjust_pane_cp6_ParamLimits

0xa356,	// (0x00017344) button_value_adjust_pane_cp6

0xa49e,	// (0x0001748c) settings_code_pane_cp_ParamLimits

0xa49e,	// (0x0001748c) settings_code_pane_cp

0x3313,	// (0x00010301) cell_touch_pane_g1

0x3313,	// (0x00010301) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0001c6ec) cell_touch_pane_g

0xab22,	// (0x00017b10) cell_touch_pane_cp_ParamLimits

0xab22,	// (0x00017b10) cell_touch_pane_cp

0xab32,	// (0x00017b20) cell_touch_pane_ParamLimits

0xab32,	// (0x00017b20) cell_touch_pane

0x3313,	// (0x00010301) scroll_sc2_down_pane_g1

0x3313,	// (0x00010301) scroll_sc2_up_pane_g1

0x348c,	// (0x0001047a) bg_set_opt_pane_cp4_vc

0xab8f,	// (0x00017b7d) list_set_graphic_pane_vc_g1_ParamLimits

0xab8f,	// (0x00017b7d) list_set_graphic_pane_vc_g1

0xab9b,	// (0x00017b89) list_set_graphic_pane_vc_g2_ParamLimits

0xab9b,	// (0x00017b89) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x0001c9e8) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x0001c9e8) list_set_graphic_pane_vc_g

0xaba7,	// (0x00017b95) text_primary_small_cp13_vc_ParamLimits

0xaba7,	// (0x00017b95) text_primary_small_cp13_vc

0x82c6,	// (0x000152b4) list_set_graphic_pane_vc_ParamLimits

0x82c6,	// (0x000152b4) list_set_graphic_pane_vc

0x348c,	// (0x0001047a) input_focus_pane_cp2_vc

0x3313,	// (0x00010301) setting_code_pane_vc_g1

0x35e6,	// (0x000105d4) setting_code_pane_vc_t1

0xabbf,	// (0x00017bad) set_text_pane_vc_t1_ParamLimits

0xabbf,	// (0x00017bad) set_text_pane_vc_t1

0x348c,	// (0x0001047a) input_focus_pane_cp1_vc

0xabdd,	// (0x00017bcb) list_set_text_pane_vc

0x3313,	// (0x00010301) setting_text_pane_vc_g1

0x348c,	// (0x0001047a) bg_set_opt_pane_cp2_vc

0x35b5,	// (0x000105a3) setting_slider_graphic_pane_vc_g1

0xabe7,	// (0x00017bd5) setting_slider_graphic_pane_vc_t1

0xabf9,	// (0x00017be7) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x0001c9ed) setting_slider_graphic_pane_vc_t

0xac0b,	// (0x00017bf9) slider_set_pane_cp_vc

0xac15,	// (0x00017c03) slider_set_pane_vc_g1

0xac1e,	// (0x00017c0c) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x0001c9f2) slider_set_pane_vc_g

0x3d5c,	// (0x00010d4a) set_opt_bg_pane_g1_copy1

0x3d64,	// (0x00010d52) set_opt_bg_pane_g2_copy1

0xac4a,	// (0x00017c38) set_opt_bg_pane_g3_copy1

0x3d74,	// (0x00010d62) set_opt_bg_pane_g4_copy1

0x3d7c,	// (0x00010d6a) set_opt_bg_pane_g5_copy1

0x3d84,	// (0x00010d72) set_opt_bg_pane_g6_copy1

0xac54,	// (0x00017c42) set_opt_bg_pane_g7_copy1

0xac5e,	// (0x00017c4c) set_opt_bg_pane_g8_copy1

0xac68,	// (0x00017c56) set_opt_bg_pane_g9_copy1

0x348c,	// (0x0001047a) bg_set_opt_pane_cp_vc

0xac72,	// (0x00017c60) setting_slider_pane_vc_t1

0xac81,	// (0x00017c6f) setting_slider_pane_vc_t2

0xac93,	// (0x00017c81) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x0001ca01) setting_slider_pane_vc_t

0xaca5,	// (0x00017c93) slider_set_pane_vc

0x62d3,	// (0x000132c1) volume_set_pane_vc_g1

0x62dc,	// (0x000132ca) volume_set_pane_vc_g2

0x62e5,	// (0x000132d3) volume_set_pane_vc_g3

0x62ee,	// (0x000132dc) volume_set_pane_vc_g4

0x62f7,	// (0x000132e5) volume_set_pane_vc_g5

0x6300,	// (0x000132ee) volume_set_pane_vc_g6

0x6309,	// (0x000132f7) volume_set_pane_vc_g7

0x6312,	// (0x00013300) volume_set_pane_vc_g8

0x631b,	// (0x00013309) volume_set_pane_vc_g9

0x6324,	// (0x00013312) volume_set_pane_vc_g10

0x0009,

0xf8b1,	// (0x0001c89f) volume_set_pane_vc_g

0xacad,	// (0x00017c9b) volume_set_pane_vc

0xacb7,	// (0x00017ca5) button_value_adjust_pane_cp1_vc

0xacc1,	// (0x00017caf) list_highlight_pane_cp2_vc

0xacca,	// (0x00017cb8) list_set_pane_vc_ParamLimits

0xacca,	// (0x00017cb8) list_set_pane_vc

0xad38,	// (0x00017d26) main_pane_set_vc_t1_ParamLimits

0xad38,	// (0x00017d26) main_pane_set_vc_t1

0xad4d,	// (0x00017d3b) main_pane_set_vc_t2_ParamLimits

0xad4d,	// (0x00017d3b) main_pane_set_vc_t2

0xad5f,	// (0x00017d4d) main_pane_set_vc_t3_ParamLimits

0xad5f,	// (0x00017d4d) main_pane_set_vc_t3

0xad73,	// (0x00017d61) main_pane_set_vc_t4_ParamLimits

0xad73,	// (0x00017d61) main_pane_set_vc_t4

0x0003,

0xfa1a,	// (0x0001ca08) main_pane_set_vc_t_ParamLimits

0xfa1a,	// (0x0001ca08) main_pane_set_vc_t

0xad87,	// (0x00017d75) setting_code_pane_vc_ParamLimits

0xad87,	// (0x00017d75) setting_code_pane_vc

0xad98,	// (0x00017d86) setting_slider_graphic_pane_vc

0xad98,	// (0x00017d86) setting_slider_pane_vc

0xad98,	// (0x00017d86) setting_text_pane_vc

0xad98,	// (0x00017d86) setting_volume_pane_vc

0xada2,	// (0x00017d90) scroll_pane_cp121_vc

0x3c24,	// (0x00010c12) set_content_pane_vc

0xb078,	// (0x00018066) button_value_adjust_pane_g1

0xb081,	// (0x0001806f) button_value_adjust_pane_g2

0x0001,

0xfa7b,	// (0x0001ca69) button_value_adjust_pane_g

0xb08a,	// (0x00018078) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb08a,	// (0x00018078) form_field_slider_wide_pane_vc_t1

0xb09c,	// (0x0001808a) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb09c,	// (0x0001808a) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa80,	// (0x0001ca6e) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa80,	// (0x0001ca6e) form_field_slider_wide_pane_vc_t

0x352e,	// (0x0001051c) input_focus_pane_cp10_vc_ParamLimits

0x352e,	// (0x0001051c) input_focus_pane_cp10_vc

0xb0c8,	// (0x000180b6) slider_cont_pane_cp1_vc_ParamLimits

0xb0c8,	// (0x000180b6) slider_cont_pane_cp1_vc

0xb0da,	// (0x000180c8) slider_form_pane_g1_cp2

0xac1e,	// (0x00017c0c) slider_form_pane_g2_cp2

0xb107,	// (0x000180f5) form_field_slider_pane_vc_t3

0xb115,	// (0x00018103) form_field_slider_pane_vc_t4

0xb123,	// (0x00018111) slider_form_pane_vc_ParamLimits

0xb123,	// (0x00018111) slider_form_pane_vc

0xb130,	// (0x0001811e) form_field_slider_pane_vc_t1_ParamLimits

0xb130,	// (0x0001811e) form_field_slider_pane_vc_t1

0xb09c,	// (0x0001808a) form_field_slider_pane_vc_t2_ParamLimits

0xb09c,	// (0x0001808a) form_field_slider_pane_vc_t2

0x0001,

0xfa92,	// (0x0001ca80) form_field_slider_pane_vc_t_ParamLimits

0xfa92,	// (0x0001ca80) form_field_slider_pane_vc_t

0x352e,	// (0x0001051c) input_focus_pane_cp9_vc_ParamLimits

0x352e,	// (0x0001051c) input_focus_pane_cp9_vc

0xb146,	// (0x00018134) slider_cont_pane_vc_ParamLimits

0xb146,	// (0x00018134) slider_cont_pane_vc

0xb15a,	// (0x00018148) list_form_graphic_pane_cp_vc_ParamLimits

0xb15a,	// (0x00018148) list_form_graphic_pane_cp_vc

0x9009,	// (0x00015ff7) form_field_popup_wide_pane_vc_g1

0xb16f,	// (0x0001815d) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb16f,	// (0x0001815d) form_field_popup_wide_pane_vc_t1

0x3ca1,	// (0x00010c8f) input_focus_pane_cp8_vc_ParamLimits

0x3ca1,	// (0x00010c8f) input_focus_pane_cp8_vc

0xb1b4,	// (0x000181a2) list_form_wide_pane_vc_ParamLimits

0xb1b4,	// (0x000181a2) list_form_wide_pane_vc

0xb1c0,	// (0x000181ae) list_form_graphic_pane_vc_g1

0xb1c8,	// (0x000181b6) list_form_graphic_pane_vc_t1_ParamLimits

0xb1c8,	// (0x000181b6) list_form_graphic_pane_vc_t1

0x3546,	// (0x00010534) list_highlight_pane_cp5_vc_ParamLimits

0x3546,	// (0x00010534) list_highlight_pane_cp5_vc

0xb1e4,	// (0x000181d2) list_form_graphic_pane_vc_ParamLimits

0xb1e4,	// (0x000181d2) list_form_graphic_pane_vc

0x9009,	// (0x00015ff7) form_field_popup_pane_vc_g1

0xb1fa,	// (0x000181e8) form_field_popup_pane_vc_t1_ParamLimits

0xb1fa,	// (0x000181e8) form_field_popup_pane_vc_t1

0x3ca1,	// (0x00010c8f) input_focus_pane_cp7_vc_ParamLimits

0x3ca1,	// (0x00010c8f) input_focus_pane_cp7_vc

0xb211,	// (0x000181ff) list_form_pane_vc_ParamLimits

0xb211,	// (0x000181ff) list_form_pane_vc

0xb21d,	// (0x0001820b) data_form_pane_vc_t1_ParamLimits

0xb21d,	// (0x0001820b) data_form_pane_vc_t1

0x3d5c,	// (0x00010d4a) input_focus_pane_vc_g1

0x3d64,	// (0x00010d52) input_focus_pane_vc_g2

0x3d6c,	// (0x00010d5a) input_focus_pane_vc_g3

0x3d74,	// (0x00010d62) input_focus_pane_vc_g4

0x3d7c,	// (0x00010d6a) input_focus_pane_vc_g5

0x3d84,	// (0x00010d72) input_focus_pane_vc_g6

0x3d8c,	// (0x00010d7a) input_focus_pane_vc_g7

0x3d94,	// (0x00010d82) input_focus_pane_vc_g8

0x3d9c,	// (0x00010d8a) input_focus_pane_vc_g9

0x3313,	// (0x00010301) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0001c675) input_focus_pane_vc_g

0x8ffd,	// (0x00015feb) data_form_pane_vc_ParamLimits

0x8ffd,	// (0x00015feb) data_form_pane_vc

0x9009,	// (0x00015ff7) form_field_data_pane_vc_g1

0xb23a,	// (0x00018228) form_field_data_pane_vc_t1_ParamLimits

0xb23a,	// (0x00018228) form_field_data_pane_vc_t1

0x3ca1,	// (0x00010c8f) input_focus_pane_vc_ParamLimits

0x3ca1,	// (0x00010c8f) input_focus_pane_vc

0xb254,	// (0x00018242) button_value_adjust_pane_cp3_vc

0xb25c,	// (0x0001824a) button_value_adjust_pane_cp5_vc

0xb264,	// (0x00018252) form_field_data_pane_vc_ParamLimits

0xb264,	// (0x00018252) form_field_data_pane_vc

0xb27f,	// (0x0001826d) form_field_data_pane_vc_cp2

0xb287,	// (0x00018275) form_field_data_wide_pane_vc_ParamLimits

0xb287,	// (0x00018275) form_field_data_wide_pane_vc

0xb2a1,	// (0x0001828f) form_field_data_wide_pane_vc_cp2

0xb2a9,	// (0x00018297) form_field_popup_pane_vc_ParamLimits

0xb2a9,	// (0x00018297) form_field_popup_pane_vc

0xb2c4,	// (0x000182b2) form_field_popup_wide_pane_vc_ParamLimits

0xb2c4,	// (0x000182b2) form_field_popup_wide_pane_vc

0xb2de,	// (0x000182cc) form_field_slider_pane_vc_ParamLimits

0xb2de,	// (0x000182cc) form_field_slider_pane_vc

0xb2f1,	// (0x000182df) form_field_slider_wide_pane_vc_ParamLimits

0xb2f1,	// (0x000182df) form_field_slider_wide_pane_vc

0xb304,	// (0x000182f2) grid_touch_1_pane_ParamLimits

0xb304,	// (0x000182f2) grid_touch_1_pane

0xb310,	// (0x000182fe) grid_touch_2_pane_ParamLimits

0xb310,	// (0x000182fe) grid_touch_2_pane

0x88a8,	// (0x00015896) touch_pane_g1_ParamLimits

0x88a8,	// (0x00015896) touch_pane_g1

0xb32a,	// (0x00018318) cell_app_pane_cp_wide_ParamLimits

0xb32a,	// (0x00018318) cell_app_pane_cp_wide

0xb33b,	// (0x00018329) grid_popup_fast_wide_pane_ParamLimits

0xb33b,	// (0x00018329) grid_popup_fast_wide_pane

0xb34f,	// (0x0001833d) scroll_pane_cp19_ParamLimits

0xb34f,	// (0x0001833d) scroll_pane_cp19

0x348c,	// (0x0001047a) bg_popup_window_pane_cp20

0xb363,	// (0x00018351) listscroll_popup_fast_wide_pane

0x3546,	// (0x00010534) grid_indicator_nsta_pane

0xb36b,	// (0x00018359) clock_nsta_pane_g1

0xb374,	// (0x00018362) clock_nsta_pane_t1

0xb390,	// (0x0001837e) cell_indicator_nsta_pane_ParamLimits

0xb390,	// (0x0001837e) cell_indicator_nsta_pane

0xb3c1,	// (0x000183af) cell_indicator_nsta_pane_g1

0xb3cf,	// (0x000183bd) cell_indicator_nsta_pane_g2

0x0001,

0xfaa3,	// (0x0001ca91) cell_indicator_nsta_pane_g

0xb3dc,	// (0x000183ca) clock_nsta_pane_cp

0xb3e5,	// (0x000183d3) indicator_nsta_pane_cp

0xb3ed,	// (0x000183db) nsta_clock_indic_pane_g1

0x3625,	// (0x00010613) grid_indicator_pane

0x4369,	// (0x00011357) scroll_pane_cp29

0x5797,	// (0x00012785) indicator_nsta_pane_cp2_ParamLimits

0x5797,	// (0x00012785) indicator_nsta_pane_cp2

0x3546,	// (0x00010534) main_apps_wheel_pane

0x9219,	// (0x00016207) form_midp_field_text_pane_ParamLimits

0x9368,	// (0x00016356) scroll_bar_cp050_ParamLimits

0xb43d,	// (0x0001842b) cell_indicator_pane_ParamLimits

0xb43d,	// (0x0001842b) cell_indicator_pane

0xb455,	// (0x00018443) cell_indicator_pane_g1

0xb45f,	// (0x0001844d) grid_wheel_folder_pane_ParamLimits

0xb45f,	// (0x0001844d) grid_wheel_folder_pane

0xb473,	// (0x00018461) list_wheel_apps_pane_ParamLimits

0xb473,	// (0x00018461) list_wheel_apps_pane

0xb486,	// (0x00018474) main_apps_wheel_pane_g1_ParamLimits

0xb486,	// (0x00018474) main_apps_wheel_pane_g1

0xb4a2,	// (0x00018490) main_apps_wheel_pane_g2_ParamLimits

0xb4a2,	// (0x00018490) main_apps_wheel_pane_g2

0x0001,

0xfabf,	// (0x0001caad) main_apps_wheel_pane_g_ParamLimits

0xfabf,	// (0x0001caad) main_apps_wheel_pane_g

0xb4be,	// (0x000184ac) main_apps_wheel_pane_t1_ParamLimits

0xb4be,	// (0x000184ac) main_apps_wheel_pane_t1

0xb4e7,	// (0x000184d5) list_wheel_apps_pane_g1

0xb4ef,	// (0x000184dd) list_wheel_apps_pane_g2

0xb4f7,	// (0x000184e5) list_wheel_apps_pane_g3

0xb4ff,	// (0x000184ed) list_wheel_apps_pane_g4

0xb509,	// (0x000184f7) list_wheel_apps_pane_g5

0x0004,

0xfac4,	// (0x0001cab2) list_wheel_apps_pane_g

0x8466,	// (0x00015454) navi_icon_text_pane

0x8951,	// (0x0001593f) aid_fill_nsta

0xb52a,	// (0x00018518) navi_icon_text_pane_g1

0xb536,	// (0x00018524) navi_icon_text_pane_t1

0x82f1,	// (0x000152df) list_set_graphic_pane_t1_ParamLimits

0x82f1,	// (0x000152df) list_set_graphic_pane_t1

0x9acd,	// (0x00016abb) popup_midp_note_alarm_window_t6_ParamLimits

0x9acd,	// (0x00016abb) popup_midp_note_alarm_window_t6

0x9adf,	// (0x00016acd) popup_midp_note_alarm_window_t7_ParamLimits

0x9adf,	// (0x00016acd) popup_midp_note_alarm_window_t7

0x9af1,	// (0x00016adf) popup_midp_note_alarm_window_t8_ParamLimits

0x9af1,	// (0x00016adf) popup_midp_note_alarm_window_t8

0x9b03,	// (0x00016af1) popup_midp_note_alarm_window_t9_ParamLimits

0x9b03,	// (0x00016af1) popup_midp_note_alarm_window_t9

0x9b15,	// (0x00016b03) popup_midp_note_alarm_window_t10_ParamLimits

0x9b15,	// (0x00016b03) popup_midp_note_alarm_window_t10

0x9b27,	// (0x00016b15) popup_midp_note_alarm_window_t11_ParamLimits

0x9b27,	// (0x00016b15) popup_midp_note_alarm_window_t11

0x9b39,	// (0x00016b27) scroll_pane_cp17_ParamLimits

0x9b39,	// (0x00016b27) scroll_pane_cp17

0x62d3,	// (0x000132c1) volume_small_pane_cp_g1

0x65e4,	// (0x000135d2) volume_small_pane_cp_g2

0x65ed,	// (0x000135db) volume_small_pane_cp_g3

0x65f6,	// (0x000135e4) volume_small_pane_cp_g4

0x65ff,	// (0x000135ed) volume_small_pane_cp_g5

0x6608,	// (0x000135f6) volume_small_pane_cp_g6

0x6611,	// (0x000135ff) volume_small_pane_cp_g7

0x661a,	// (0x00013608) volume_small_pane_cp_g8

0x6623,	// (0x00013611) volume_small_pane_cp_g9

0x662c,	// (0x0001361a) volume_small_pane_cp_g10

0x86bc,	// (0x000156aa) midp_ticker_pane_g1_ParamLimits

0x86c8,	// (0x000156b6) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0001c741) midp_ticker_pane_g_ParamLimits

0x86d4,	// (0x000156c2) midp_ticker_pane_t1_ParamLimits

0x8967,	// (0x00015955) aid_fill_nsta_2

0x9354,	// (0x00016342) list_form2_midp_pane

0xa51a,	// (0x00017508) midp_editing_number_pane_ParamLimits

0xa529,	// (0x00017517) midp_ticker_pane_ParamLimits

0xb548,	// (0x00018536) form2_midp_field_pane

0xb56c,	// (0x0001855a) scroll_pane_cp51

0xb58c,	// (0x0001857a) form2_midp_button_pane_ParamLimits

0xb58c,	// (0x0001857a) form2_midp_button_pane

0xb59e,	// (0x0001858c) form2_midp_content_pane_ParamLimits

0xb59e,	// (0x0001858c) form2_midp_content_pane

0xb5b8,	// (0x000185a6) form2_midp_field_choice_group_pane

0xb5c0,	// (0x000185ae) form2_midp_field_pane_g1

0xb5c8,	// (0x000185b6) form2_midp_field_pane_g2

0xb5d0,	// (0x000185be) form2_midp_field_pane_g3

0xb5d8,	// (0x000185c6) form2_midp_field_pane_g4

0x0003,

0xfae9,	// (0x0001cad7) form2_midp_field_pane_g

0xb5e0,	// (0x000185ce) form2_midp_gauge_slider_pane

0xb5e8,	// (0x000185d6) form2_midp_gauge_wait_pane

0xb5f0,	// (0x000185de) form2_midp_image_pane_ParamLimits

0xb5f0,	// (0x000185de) form2_midp_image_pane

0xb60b,	// (0x000185f9) form2_midp_label_pane_ParamLimits

0xb60b,	// (0x000185f9) form2_midp_label_pane

0xb62a,	// (0x00018618) form2_midp_label_pane_cp_ParamLimits

0xb62a,	// (0x00018618) form2_midp_label_pane_cp

0xb64b,	// (0x00018639) form2_midp_string_pane_ParamLimits

0xb64b,	// (0x00018639) form2_midp_string_pane

0xb65d,	// (0x0001864b) form2_midp_text_pane_ParamLimits

0xb65d,	// (0x0001864b) form2_midp_text_pane

0xb67e,	// (0x0001866c) form2_midp_time_pane

0xb68e,	// (0x0001867c) input_focus_pane_cp51_ParamLimits

0xb68e,	// (0x0001867c) input_focus_pane_cp51

0xb6a6,	// (0x00018694) form2_midp_label_pane_t1_ParamLimits

0xb6a6,	// (0x00018694) form2_midp_label_pane_t1

0xb6ec,	// (0x000186da) form2_mdip_text_pane_t1_ParamLimits

0xb6ec,	// (0x000186da) form2_mdip_text_pane_t1

0xb70b,	// (0x000186f9) form2_midp_time_pane_t1

0xb726,	// (0x00018714) form2_midp_gauge_slider_pane_t1

0xb738,	// (0x00018726) form2_midp_gauge_slider_pane_t2

0xb74a,	// (0x00018738) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf2,	// (0x0001cae0) form2_midp_gauge_slider_pane_t

0xb75c,	// (0x0001874a) form2_midp_slider_pane

0xb768,	// (0x00018756) form2_midp_gauge_wait_pane_t1

0xb776,	// (0x00018764) form2_midp_wait_pane_ParamLimits

0xb776,	// (0x00018764) form2_midp_wait_pane

0xb7a1,	// (0x0001878f) list_single_2graphic_pane_cp4_ParamLimits

0xb7a1,	// (0x0001878f) list_single_2graphic_pane_cp4

0x9066,	// (0x00016054) list_single_midp_graphic_pane_cp_ParamLimits

0x9066,	// (0x00016054) list_single_midp_graphic_pane_cp

0x348c,	// (0x0001047a) list_highlight_pane_cp20

0xb7ba,	// (0x000187a8) list_single_2graphic_pane_g1_cp4

0xaa25,	// (0x00017a13) list_single_2graphic_pane_g2_cp4

0xb7c2,	// (0x000187b0) list_single_2graphic_pane_t1_cp4

0x3546,	// (0x00010534) list_highlight_pane_cp21

0xb7d1,	// (0x000187bf) list_single_midp_graphic_pane_g4_cp

0xb7e0,	// (0x000187ce) list_single_midp_graphic_pane_t1_cp

0xb7f5,	// (0x000187e3) form2_mdip_string_pane_t1_ParamLimits

0xb7f5,	// (0x000187e3) form2_mdip_string_pane_t1

0x348c,	// (0x0001047a) bg_wml_button_pane_cp2

0x3313,	// (0x00010301) form2_midp_image_pane_g1

0x3bce,	// (0x00010bbc) list_double_large_graphic_pane_g5_ParamLimits

0x3bce,	// (0x00010bbc) list_double_large_graphic_pane_g5

0x85e6,	// (0x000155d4) midp_form_pane_ParamLimits

0x3546,	// (0x00010534) main_apps_wheel_pane_ParamLimits

0x5ed0,	// (0x00012ebe) popup_preview_window_ParamLimits

0x5ed0,	// (0x00012ebe) popup_preview_window

0x60b7,	// (0x000130a5) popup_touch_info_window_ParamLimits

0x60b7,	// (0x000130a5) popup_touch_info_window

0x60d9,	// (0x000130c7) popup_touch_menu_window_ParamLimits

0x60d9,	// (0x000130c7) popup_touch_menu_window

0x3309,	// (0x000102f7) bg_popup_sub_pane_cp6

0xb891,	// (0x0001887f) list_touch_menu_pane

0xb899,	// (0x00018887) list_single_touch_menu_pane_ParamLimits

0xb899,	// (0x00018887) list_single_touch_menu_pane

0xb8b1,	// (0x0001889f) list_single_touch_menu_pane_t1

0x3546,	// (0x00010534) bg_popup_sub_pane_cp7_ParamLimits

0x3546,	// (0x00010534) bg_popup_sub_pane_cp7

0xb8bf,	// (0x000188ad) heading_sub_pane

0xb8c7,	// (0x000188b5) list_touch_info_pane_ParamLimits

0xb8c7,	// (0x000188b5) list_touch_info_pane

0xb8d6,	// (0x000188c4) list_single_touch_info_pane_ParamLimits

0xb8d6,	// (0x000188c4) list_single_touch_info_pane

0xb8e8,	// (0x000188d6) list_single_touch_info_pane_t1

0xb8f6,	// (0x000188e4) list_single_touch_info_pane_t2

0x0001,

0xfb00,	// (0x0001caee) list_single_touch_info_pane_t

0x85de,	// (0x000155cc) bg_popup_heading_pane_cp

0xb904,	// (0x000188f2) heading_sub_pane_t1

0x8f97,	// (0x00015f85) bg_popup_preview_window_pane_cp_ParamLimits

0x8f97,	// (0x00015f85) bg_popup_preview_window_pane_cp

0xb8bf,	// (0x000188ad) heading_preview_pane

0xb8c7,	// (0x000188b5) list_preview_pane_ParamLimits

0xb8c7,	// (0x000188b5) list_preview_pane

0xb912,	// (0x00018900) popup_preview_window_g1

0xb8d6,	// (0x000188c4) list_single_preview_pane_ParamLimits

0xb8d6,	// (0x000188c4) list_single_preview_pane

0xb91a,	// (0x00018908) list_single_preview_pane_g1

0xb922,	// (0x00018910) list_single_preview_pane_t1

0xb8e8,	// (0x000188d6) list_single_preview_pane_t2

0x0001,

0xfb05,	// (0x0001caf3) list_single_preview_pane_t

0xb930,	// (0x0001891e) bg_popup_heading_pane_cp2_ParamLimits

0xb930,	// (0x0001891e) bg_popup_heading_pane_cp2

0xb946,	// (0x00018934) heading_preview_pane_g1

0xb94e,	// (0x0001893c) heading_preview_pane_t1_ParamLimits

0xb94e,	// (0x0001893c) heading_preview_pane_t1

0x363c,	// (0x0001062a) soft_indicator_pane_t1_ParamLimits

0x3b9a,	// (0x00010b88) scroll_pane_ParamLimits

0x426e,	// (0x0001125c) scroll_sc2_left_pane

0x4265,	// (0x00011253) scroll_sc2_right_pane

0x428d,	// (0x0001127b) scroll_bg_pane_g1_ParamLimits

0x42a2,	// (0x00011290) scroll_bg_pane_g2_ParamLimits

0x42ba,	// (0x000112a8) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0001c6cc) scroll_bg_pane_g_ParamLimits

0x428d,	// (0x0001127b) scroll_handle_pane_g1_ParamLimits

0x42dc,	// (0x000112ca) scroll_handle_pane_g2_ParamLimits

0x42ba,	// (0x000112a8) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0001c6d3) scroll_handle_pane_g_ParamLimits

0x5b17,	// (0x00012b05) popup_choice_list_window_ParamLimits

0x5b17,	// (0x00012b05) popup_choice_list_window

0x8d8f,	// (0x00015d7d) choice_list_pane

0x8e3f,	// (0x00015e2d) cell_toolbar_pane_t1

0x8e67,	// (0x00015e55) toolbar_button_pane_ParamLimits

0xa003,	// (0x00016ff1) ai_gene_pane_1_t2_ParamLimits

0xa003,	// (0x00016ff1) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0001c8fb) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0001c8fb) ai_gene_pane_1_t

0xb96b,	// (0x00018959) scroll_sc2_left_pane_g1

0xb96b,	// (0x00018959) scroll_sc2_right_pane_g1

0x890d,	// (0x000158fb) bg_popup_sub_pane_cp10

0xb975,	// (0x00018963) list_choice_list_pane

0xa5d9,	// (0x000175c7) list_single_choice_list_pane_ParamLimits

0xa5d9,	// (0x000175c7) list_single_choice_list_pane

0xb98e,	// (0x0001897c) list_single_choice_list_pane_g1

0x3e8d,	// (0x00010e7b) list_single_choice_list_pane_t1_ParamLimits

0x3e8d,	// (0x00010e7b) list_single_choice_list_pane_t1

0xb996,	// (0x00018984) choice_list_pane_g1

0xb99e,	// (0x0001898c) choice_list_pane_t1

0x3309,	// (0x000102f7) input_focus_pane_cp11

0x4069,	// (0x00011057) title_pane_stacon_g2_ParamLimits

0x4069,	// (0x00011057) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0001c6b2) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0001c6b2) title_pane_stacon_g

0x85de,	// (0x000155cc) cursor_press_pane

0x5bd1,	// (0x00012bbf) popup_fep_hwr_window_ParamLimits

0x5bd1,	// (0x00012bbf) popup_fep_hwr_window

0x5c5b,	// (0x00012c49) popup_fep_vkb_window_ParamLimits

0x5c5b,	// (0x00012c49) popup_fep_vkb_window

0xb9ac,	// (0x0001899a) cursor_press_pane_g1

0x0002,

0xfb2e,	// (0x0001cb1c) fep_vkb_side_pane_g_ParamLimits

0x666e,	// (0x0001365c) fep_hwr_candidate_pane_ParamLimits

0x666e,	// (0x0001365c) fep_hwr_candidate_pane

0x6698,	// (0x00013686) fep_hwr_side_pane_ParamLimits

0x6698,	// (0x00013686) fep_hwr_side_pane

0x66ba,	// (0x000136a8) fep_hwr_top_pane_ParamLimits

0x66ba,	// (0x000136a8) fep_hwr_top_pane

0x66d2,	// (0x000136c0) fep_hwr_write_pane_ParamLimits

0x66d2,	// (0x000136c0) fep_hwr_write_pane

0xfb2e,	// (0x0001cb1c) fep_vkb_side_pane_g

0xb9b4,	// (0x000189a2) fep_hwr_top_pane_g1

0xb9c6,	// (0x000189b4) fep_hwr_top_pane_g2

0x670c,	// (0x000136fa) fep_hwr_top_pane_g3

0x0002,

0xfb0a,	// (0x0001caf8) fep_hwr_top_pane_g

0x6721,	// (0x0001370f) fep_hwr_top_text_pane

0x43d6,	// (0x000113c4) fep_hwr_top_text_pane_g1

0xb9fc,	// (0x000189ea) fep_hwr_top_text_pane_t1

0x682b,	// (0x00013819) fep_hwr_candidate_pane_g1

0xbc47,	// (0x00018c35) fep_vkb_keypad_pane_g3_ParamLimits

0xbc47,	// (0x00018c35) fep_vkb_keypad_pane_g3

0xbc73,	// (0x00018c61) fep_vkb_keypad_pane_g4_ParamLimits

0xbc73,	// (0x00018c61) fep_vkb_keypad_pane_g4

0xbcea,	// (0x00018cd8) fep_vkb_bottom_pane_g2_ParamLimits

0xbcea,	// (0x00018cd8) fep_vkb_bottom_pane_g2

0x0001,

0xfb35,	// (0x0001cb23) fep_vkb_bottom_pane_g_ParamLimits

0xfb35,	// (0x0001cb23) fep_vkb_bottom_pane_g

0xb96b,	// (0x00018959) cell_vkb_side_pane_g2

0x0001,

0xfb3f,	// (0x0001cb2d) cell_vkb_side_pane_g

0xbd75,	// (0x00018d63) cell_vkb_side_pane_t1

0xbd83,	// (0x00018d71) cell_vkb_side_pane_t1_copy1

0xb96b,	// (0x00018959) bg_fep_vkb_candidate_pane_g2

0xbec7,	// (0x00018eb5) cell_vkb_candidate_pane_ParamLimits

0xba0a,	// (0x000189f8) aid_size_cell_vkb_ParamLimits

0xba0a,	// (0x000189f8) aid_size_cell_vkb

0xbec7,	// (0x00018eb5) cell_vkb_candidate_pane

0x6852,	// (0x00013840) bg_popup_fep_shadow_pane_g1

0xba9c,	// (0x00018a8a) fep_vkb_bottom_pane_ParamLimits

0xba9c,	// (0x00018a8a) fep_vkb_bottom_pane

0xbad9,	// (0x00018ac7) fep_vkb_candidate_pane_ParamLimits

0xbad9,	// (0x00018ac7) fep_vkb_candidate_pane

0xbaf5,	// (0x00018ae3) fep_vkb_keypad_pane_ParamLimits

0xbaf5,	// (0x00018ae3) fep_vkb_keypad_pane

0xbb28,	// (0x00018b16) fep_vkb_side_pane_ParamLimits

0xbb28,	// (0x00018b16) fep_vkb_side_pane

0xbb64,	// (0x00018b52) fep_vkb_top_pane_ParamLimits

0xbb64,	// (0x00018b52) fep_vkb_top_pane

0xbba0,	// (0x00018b8e) fep_vkb_top_pane_g1_ParamLimits

0xbba0,	// (0x00018b8e) fep_vkb_top_pane_g1

0xbbaf,	// (0x00018b9d) fep_vkb_top_pane_g2_ParamLimits

0xbbaf,	// (0x00018b9d) fep_vkb_top_pane_g2

0xbbbe,	// (0x00018bac) fep_vkb_top_pane_g3_ParamLimits

0xbbbe,	// (0x00018bac) fep_vkb_top_pane_g3

0x0003,

0xfb25,	// (0x0001cb13) fep_vkb_top_pane_g_ParamLimits

0xfb25,	// (0x0001cb13) fep_vkb_top_pane_g

0xbbdc,	// (0x00018bca) fep_vkb_top_text_pane_ParamLimits

0xbbdc,	// (0x00018bca) fep_vkb_top_text_pane

0xbbed,	// (0x00018bdb) fep_vkb_side_pane_g1_ParamLimits

0xbbed,	// (0x00018bdb) fep_vkb_side_pane_g1

0xbc36,	// (0x00018c24) grid_vkb_side_pane_ParamLimits

0xbc36,	// (0x00018c24) grid_vkb_side_pane

0x685a,	// (0x00013848) bg_popup_fep_shadow_pane_g2

0x6863,	// (0x00013851) bg_popup_fep_shadow_pane_g3

0x686b,	// (0x00013859) bg_popup_fep_shadow_pane_g4

0x6874,	// (0x00013862) bg_popup_fep_shadow_pane_g5

0x687e,	// (0x0001386c) bg_popup_fep_shadow_pane_g6

0x6886,	// (0x00013874) bg_popup_fep_shadow_pane_g7

0x3d74,	// (0x00010d62) bg_popup_fep_shadow_pane_g8

0xbc95,	// (0x00018c83) grid_vkb_keypad_number_pane_ParamLimits

0xbc95,	// (0x00018c83) grid_vkb_keypad_number_pane

0xbca9,	// (0x00018c97) grid_vkb_keypad_pane_ParamLimits

0xbca9,	// (0x00018c97) grid_vkb_keypad_pane

0xbccf,	// (0x00018cbd) fep_vkb_bottom_pane_g1_ParamLimits

0xbccf,	// (0x00018cbd) fep_vkb_bottom_pane_g1

0xbcf8,	// (0x00018ce6) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbcf8,	// (0x00018ce6) grid_vkb_keypad_bottom_left_pane

0xbd0d,	// (0x00018cfb) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbd0d,	// (0x00018cfb) grid_vkb_keypad_bottom_right_pane

0xbd22,	// (0x00018d10) fep_vkb_top_text_pane_g1

0xbd3d,	// (0x00018d2b) fep_vkb_top_text_pane_t1

0xbd52,	// (0x00018d40) cell_vkb_side_pane_ParamLimits

0xbd52,	// (0x00018d40) cell_vkb_side_pane

0xb96b,	// (0x00018959) cell_vkb_side_pane_g1

0xbd91,	// (0x00018d7f) cell_vkb_keypad_pane_ParamLimits

0xbd91,	// (0x00018d7f) cell_vkb_keypad_pane

0xbe1e,	// (0x00018e0c) cell_vkb_keypad_pane_g1

0x0008,

0xfb52,	// (0x0001cb40) bg_popup_fep_shadow_pane_g

0x6898,	// (0x00013886) cell_hwr_side_pane_g1

0x6898,	// (0x00013886) cell_hwr_side_pane_g2

0xbe28,	// (0x00018e16) cell_vkb_keypad_pane_t1

0xbe36,	// (0x00018e24) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbe36,	// (0x00018e24) cell_vkb_keypad_bottom_left_pane

0xbe53,	// (0x00018e41) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbe53,	// (0x00018e41) cell_vkb_keypad_bottom_right_pane

0xb96b,	// (0x00018959) cell_vkb_keypad_bottom_left_pane_g1

0xb96b,	// (0x00018959) cell_vkb_keypad_bottom_right_pane_g1

0xbe8c,	// (0x00018e7a) cell_vkb_keypad_number_pane_ParamLimits

0xbe8c,	// (0x00018e7a) cell_vkb_keypad_number_pane

0xbeab,	// (0x00018e99) cell_vkb_keypad_number_pane_g1

0xbeb5,	// (0x00018ea3) cell_vkb_keypad_number_pane_g2

0xbebe,	// (0x00018eac) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb44,	// (0x0001cb32) cell_vkb_keypad_number_pane_g

0xbe28,	// (0x00018e16) cell_vkb_keypad_number_pane_t1

0xbee8,	// (0x00018ed6) fep_vkb_candidate_pane_g1

0x0001,

0xfb65,	// (0x0001cb53) cell_hwr_side_pane_g

0xbf01,	// (0x00018eef) cell_hwr_side_pane_t1

0x68a2,	// (0x00013890) cell_hwr_side_pane_t1_copy1

0x68b0,	// (0x0001389e) cell_hwr_candidate_pane_g1

0x68df,	// (0x000138cd) cell_hwr_candidate_pane_t1

0xb96b,	// (0x00018959) cell_vkb_candidate_pane_g2

0xbf45,	// (0x00018f33) cell_vkb_candidate_pane_t1

0x6635,	// (0x00013623) bg_popup_fep_shadow_pane_ParamLimits

0x6635,	// (0x00013623) bg_popup_fep_shadow_pane

0x66ec,	// (0x000136da) bg_fep_hwr_top_pane_g4

0xb9d8,	// (0x000189c6) bg_hwr_side_pane_g1_ParamLimits

0xb9d8,	// (0x000189c6) bg_hwr_side_pane_g1

0x675f,	// (0x0001374d) cell_hwr_side_pane_ParamLimits

0x675f,	// (0x0001374d) cell_hwr_side_pane

0x679c,	// (0x0001378a) fep_hwr_write_pane_g1_ParamLimits

0x679c,	// (0x0001378a) fep_hwr_write_pane_g1

0x67a9,	// (0x00013797) fep_hwr_write_pane_g2_ParamLimits

0x67a9,	// (0x00013797) fep_hwr_write_pane_g2

0x67b6,	// (0x000137a4) fep_hwr_write_pane_g3_ParamLimits

0x67b6,	// (0x000137a4) fep_hwr_write_pane_g3

0x67c4,	// (0x000137b2) fep_hwr_write_pane_g4_ParamLimits

0x67c4,	// (0x000137b2) fep_hwr_write_pane_g4

0x0005,

0xfb11,	// (0x0001caff) fep_hwr_write_pane_g_ParamLimits

0xfb11,	// (0x0001caff) fep_hwr_write_pane_g

0x66ec,	// (0x000136da) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x66ec,	// (0x000136da) bg_fep_hwr_candidate_pane_g2

0x67d9,	// (0x000137c7) cell_hwr_candidate_pane_ParamLimits

0x67d9,	// (0x000137c7) cell_hwr_candidate_pane

0x682b,	// (0x00013819) fep_hwr_candidate_pane_g1_ParamLimits

0xba38,	// (0x00018a26) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xba38,	// (0x00018a26) bg_popup_fep_shadow_pane_cp2

0xbbce,	// (0x00018bbc) fep_vkb_top_pane_g4_ParamLimits

0xbbce,	// (0x00018bbc) fep_vkb_top_pane_g4

0xbc14,	// (0x00018c02) fep_vkb_side_pane_g2_ParamLimits

0xbc14,	// (0x00018c02) fep_vkb_side_pane_g2

0x7d74,	// (0x00014d62) list_setting_pane_t4_ParamLimits

0x7d74,	// (0x00014d62) list_setting_pane_t4

0x7df0,	// (0x00014dde) list_setting_number_pane_t5_ParamLimits

0x7df0,	// (0x00014dde) list_setting_number_pane_t5

0x8108,	// (0x000150f6) list_double_heading_pane_cp2_ParamLimits

0x8108,	// (0x000150f6) list_double_heading_pane_cp2

0xbf53,	// (0x00018f41) list_double_heading_pane_g1_cp2_ParamLimits

0xbf53,	// (0x00018f41) list_double_heading_pane_g1_cp2

0xbf5f,	// (0x00018f4d) list_double_heading_pane_g2_cp2_ParamLimits

0xbf5f,	// (0x00018f4d) list_double_heading_pane_g2_cp2

0xbf73,	// (0x00018f61) list_double_heading_pane_t1_cp2_ParamLimits

0xbf73,	// (0x00018f61) list_double_heading_pane_t1_cp2

0xbf89,	// (0x00018f77) list_double_heading_pane_t2_cp2_ParamLimits

0xbf89,	// (0x00018f77) list_double_heading_pane_t2_cp2

0x3301,	// (0x000102ef) aid_value_unit2

0x5319,	// (0x00012307) popup_preview_fixed_window

0x371c,	// (0x0001070a) bg_popup_preview_window_pane_cp02

0xbf9b,	// (0x00018f89) list_preview_fixed_pane

0xbfe1,	// (0x00018fcf) list_empty_pane_fp_ParamLimits

0xbfe1,	// (0x00018fcf) list_empty_pane_fp

0xbfe1,	// (0x00018fcf) list_single_cale_day_pane_fp_ParamLimits

0xbfe1,	// (0x00018fcf) list_single_cale_day_pane_fp

0xbfe1,	// (0x00018fcf) list_single_graphic_heading_pane_fp_ParamLimits

0xbfe1,	// (0x00018fcf) list_single_graphic_heading_pane_fp

0xbfe1,	// (0x00018fcf) list_single_graphic_pane_fp_ParamLimits

0xbfe1,	// (0x00018fcf) list_single_graphic_pane_fp

0xbfe1,	// (0x00018fcf) list_single_heading_pane_fp_ParamLimits

0xbfe1,	// (0x00018fcf) list_single_heading_pane_fp

0xbfe1,	// (0x00018fcf) list_single_pane_fp_ParamLimits

0xbfe1,	// (0x00018fcf) list_single_pane_fp

0xbffa,	// (0x00018fe8) list_single_pane_fp_g1_ParamLimits

0xbffa,	// (0x00018fe8) list_single_pane_fp_g1

0xbf53,	// (0x00018f41) list_single_pane_fp_g2_ParamLimits

0xbf53,	// (0x00018f41) list_single_pane_fp_g2

0xbf5f,	// (0x00018f4d) list_single_pane_fp_g3_ParamLimits

0xbf5f,	// (0x00018f4d) list_single_pane_fp_g3

0xc006,	// (0x00018ff4) list_single_pane_fp_g4_ParamLimits

0xc006,	// (0x00018ff4) list_single_pane_fp_g4

0x0003,

0xfb78,	// (0x0001cb66) list_single_pane_fp_g_ParamLimits

0xfb78,	// (0x0001cb66) list_single_pane_fp_g

0xc012,	// (0x00019000) list_single_pane_fp_t1_ParamLimits

0xc012,	// (0x00019000) list_single_pane_fp_t1

0xc029,	// (0x00019017) list_single_graphic_pane_fp_g1_ParamLimits

0xc029,	// (0x00019017) list_single_graphic_pane_fp_g1

0xbffa,	// (0x00018fe8) list_single_graphic_pane_fp_g2_ParamLimits

0xbffa,	// (0x00018fe8) list_single_graphic_pane_fp_g2

0xbf53,	// (0x00018f41) list_single_graphic_pane_fp_g3_ParamLimits

0xbf53,	// (0x00018f41) list_single_graphic_pane_fp_g3

0xbf5f,	// (0x00018f4d) list_single_graphic_pane_fp_g4_ParamLimits

0xbf5f,	// (0x00018f4d) list_single_graphic_pane_fp_g4

0xc006,	// (0x00018ff4) list_single_graphic_pane_fp_g5_ParamLimits

0xc006,	// (0x00018ff4) list_single_graphic_pane_fp_g5

0x0004,

0xfb81,	// (0x0001cb6f) list_single_graphic_pane_fp_g_ParamLimits

0xfb81,	// (0x0001cb6f) list_single_graphic_pane_fp_g

0xc035,	// (0x00019023) list_single_graphic_pane_fp_t1_ParamLimits

0xc035,	// (0x00019023) list_single_graphic_pane_fp_t1

0xc029,	// (0x00019017) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc029,	// (0x00019017) list_single_graphic_heading_pane_fp_g1

0xbffa,	// (0x00018fe8) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xbffa,	// (0x00018fe8) list_single_graphic_heading_pane_fp_g2

0xbf53,	// (0x00018f41) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xbf53,	// (0x00018f41) list_single_graphic_heading_pane_fp_g3

0xbf5f,	// (0x00018f4d) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xbf5f,	// (0x00018f4d) list_single_graphic_heading_pane_fp_g4

0xc006,	// (0x00018ff4) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc006,	// (0x00018ff4) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb81,	// (0x0001cb6f) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb81,	// (0x0001cb6f) list_single_graphic_heading_pane_fp_g

0xc04b,	// (0x00019039) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc04b,	// (0x00019039) list_single_graphic_heading_pane_fp_t1

0xc061,	// (0x0001904f) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc061,	// (0x0001904f) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8c,	// (0x0001cb7a) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8c,	// (0x0001cb7a) list_single_graphic_heading_pane_fp_t

0xc073,	// (0x00019061) list_single_cale_day_pane_fp_g1_ParamLimits

0xc073,	// (0x00019061) list_single_cale_day_pane_fp_g1

0xc0ab,	// (0x00019099) list_single_cale_day_pane_fp_g2_ParamLimits

0xc0ab,	// (0x00019099) list_single_cale_day_pane_fp_g2

0xc0b7,	// (0x000190a5) list_single_cale_day_pane_fp_g3_ParamLimits

0xc0b7,	// (0x000190a5) list_single_cale_day_pane_fp_g3

0xc0df,	// (0x000190cd) list_single_cale_day_pane_fp_g4_ParamLimits

0xc0df,	// (0x000190cd) list_single_cale_day_pane_fp_g4

0xc103,	// (0x000190f1) list_single_cale_day_pane_fp_g5_ParamLimits

0xc103,	// (0x000190f1) list_single_cale_day_pane_fp_g5

0x0004,

0xfb91,	// (0x0001cb7f) list_single_cale_day_pane_fp_g_ParamLimits

0xfb91,	// (0x0001cb7f) list_single_cale_day_pane_fp_g

0xc127,	// (0x00019115) list_single_cale_day_pane_fp_t1_ParamLimits

0xc127,	// (0x00019115) list_single_cale_day_pane_fp_t1

0xc14d,	// (0x0001913b) list_single_cale_day_pane_fp_t2_ParamLimits

0xc14d,	// (0x0001913b) list_single_cale_day_pane_fp_t2

0xc166,	// (0x00019154) list_single_cale_day_pane_fp_t3_ParamLimits

0xc166,	// (0x00019154) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9c,	// (0x0001cb8a) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9c,	// (0x0001cb8a) list_single_cale_day_pane_fp_t

0xbffa,	// (0x00018fe8) list_empty_pane_fp_g1_ParamLimits

0xbffa,	// (0x00018fe8) list_empty_pane_fp_g1

0xc17f,	// (0x0001916d) list_empty_pane_fp_t1

0xc18d,	// (0x0001917b) list_empty_pane_fp_t2

0x0001,

0xfba3,	// (0x0001cb91) list_empty_pane_fp_t

0xbffa,	// (0x00018fe8) list_single_heading_pane_fp_g1_ParamLimits

0xbffa,	// (0x00018fe8) list_single_heading_pane_fp_g1

0xbf53,	// (0x00018f41) list_single_heading_pane_fp_g2_ParamLimits

0xbf53,	// (0x00018f41) list_single_heading_pane_fp_g2

0xbf5f,	// (0x00018f4d) list_single_heading_pane_fp_g3_ParamLimits

0xbf5f,	// (0x00018f4d) list_single_heading_pane_fp_g3

0x0002,

0xfba8,	// (0x0001cb96) list_single_heading_pane_fp_g_ParamLimits

0xfba8,	// (0x0001cb96) list_single_heading_pane_fp_g

0xc19b,	// (0x00019189) list_single_heading_pane_fp_t1_ParamLimits

0xc19b,	// (0x00019189) list_single_heading_pane_fp_t1

0xc1ad,	// (0x0001919b) list_single_heading_pane_fp_t2_ParamLimits

0xc1ad,	// (0x0001919b) list_single_heading_pane_fp_t2

0x0001,

0xfbaf,	// (0x0001cb9d) list_single_heading_pane_fp_t_ParamLimits

0xfbaf,	// (0x0001cb9d) list_single_heading_pane_fp_t

0x3ea2,	// (0x00010e90) aid_size_cell_fast

0x36ff,	// (0x000106ed) soft_indicator_pane_cp1_t1

0x3edf,	// (0x00010ecd) cell_app_pane_cp2_ParamLimits

0x3edf,	// (0x00010ecd) cell_app_pane_cp2

0x6657,	// (0x00013645) fep_hwr_candidate_drop_down_list_pane

0x6845,	// (0x00013833) fep_hwr_candidate_pane_g3_ParamLimits

0x6845,	// (0x00013833) fep_hwr_candidate_pane_g3

0x276a,	// (0x0000f758) fep_hwr_candidate_pane_g4_ParamLimits

0x276a,	// (0x0000f758) fep_hwr_candidate_pane_g4

0x0002,

0xfb1e,	// (0x0001cb0c) fep_hwr_candidate_pane_g_ParamLimits

0xfb1e,	// (0x0001cb0c) fep_hwr_candidate_pane_g

0xbac8,	// (0x00018ab6) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbac8,	// (0x00018ab6) fep_vkb_candidate_drop_down_list_pane

0xbef0,	// (0x00018ede) fep_vkb_candidate_pane_g3

0xbef8,	// (0x00018ee6) fep_vkb_candidate_pane_g4

0x0002,

0xfb4b,	// (0x0001cb39) fep_vkb_candidate_pane_g

0x68b0,	// (0x0001389e) cell_hwr_candidate_pane_g1_ParamLimits

0x68be,	// (0x000138ac) cell_hwr_candidate_pane_g3_ParamLimits

0x68be,	// (0x000138ac) cell_hwr_candidate_pane_g3

0xcd95,	// (0x00019d83) cell_hwr_candidate_pane_g4_ParamLimits

0xcd95,	// (0x00019d83) cell_hwr_candidate_pane_g4

0x0002,

0xfb6a,	// (0x0001cb58) cell_hwr_candidate_pane_g_ParamLimits

0xfb6a,	// (0x0001cb58) cell_hwr_candidate_pane_g

0xbf0f,	// (0x00018efd) cell_vkb_candidate_pane_g3_ParamLimits

0xbf0f,	// (0x00018efd) cell_vkb_candidate_pane_g3

0xbf2a,	// (0x00018f18) cell_vkb_candidate_pane_g4_ParamLimits

0xbf2a,	// (0x00018f18) cell_vkb_candidate_pane_g4

0xc1c3,	// (0x000191b1) cell_app_pane_cp2_g1_ParamLimits

0xc1c3,	// (0x000191b1) cell_app_pane_cp2_g1

0xc1e1,	// (0x000191cf) cell_app_pane_cp2_g2_ParamLimits

0xc1e1,	// (0x000191cf) cell_app_pane_cp2_g2

0x0001,

0xfbb4,	// (0x0001cba2) cell_app_pane_cp2_g_ParamLimits

0xfbb4,	// (0x0001cba2) cell_app_pane_cp2_g

0xc1ed,	// (0x000191db) cell_app_pane_cp2_t1_ParamLimits

0xc1ed,	// (0x000191db) cell_app_pane_cp2_t1

0x3ca1,	// (0x00010c8f) grid_highlight_pane_cp1_ParamLimits

0x3ca1,	// (0x00010c8f) grid_highlight_pane_cp1

0x68fd,	// (0x000138eb) cell_hwr_candidate_pane_cp1_ParamLimits

0x68fd,	// (0x000138eb) cell_hwr_candidate_pane_cp1

0x68b0,	// (0x0001389e) fep_hwr_candidate_drop_down_list_pane_g1

0x6921,	// (0x0001390f) fep_hwr_candidate_drop_down_list_pane_g2

0x692e,	// (0x0001391c) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb9,	// (0x0001cba7) fep_hwr_candidate_drop_down_list_pane_g

0x693b,	// (0x00013929) fep_hwr_candidate_drop_down_list_scroll_pane

0x6944,	// (0x00013932) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6944,	// (0x00013932) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6951,	// (0x0001393f) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6951,	// (0x0001393f) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x695e,	// (0x0001394c) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x695e,	// (0x0001394c) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x696b,	// (0x00013959) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x696b,	// (0x00013959) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6986,	// (0x00013974) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6986,	// (0x00013974) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x69a1,	// (0x0001398f) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x69a1,	// (0x0001398f) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x69bc,	// (0x000139aa) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x69bc,	// (0x000139aa) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x69d7,	// (0x000139c5) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x69d7,	// (0x000139c5) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc0,	// (0x0001cbae) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc0,	// (0x0001cbae) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc1ff,	// (0x000191ed) cell_vkb_candidate_pane_cp1_ParamLimits

0xc1ff,	// (0x000191ed) cell_vkb_candidate_pane_cp1

0xbbce,	// (0x00018bbc) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbbce,	// (0x00018bbc) fep_vkb_candidate_drop_down_list_pane_g1

0xc225,	// (0x00019213) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc225,	// (0x00019213) fep_vkb_candidate_drop_down_list_pane_g2

0xc232,	// (0x00019220) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc232,	// (0x00019220) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd1,	// (0x0001cbbf) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd1,	// (0x0001cbbf) fep_vkb_candidate_drop_down_list_pane_g

0xc23f,	// (0x0001922d) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc23f,	// (0x0001922d) fep_vkb_candidate_drop_down_list_scroll_pane

0xc24c,	// (0x0001923a) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc24c,	// (0x0001923a) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc259,	// (0x00019247) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc259,	// (0x00019247) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc265,	// (0x00019253) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc265,	// (0x00019253) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc271,	// (0x0001925f) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc271,	// (0x0001925f) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc292,	// (0x00019280) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc292,	// (0x00019280) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc2b3,	// (0x000192a1) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc2b3,	// (0x000192a1) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc2d4,	// (0x000192c2) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc2d4,	// (0x000192c2) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc2f5,	// (0x000192e3) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc2f5,	// (0x000192e3) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd8,	// (0x0001cbc6) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd8,	// (0x0001cbc6) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7682,	// (0x00014670) title_pane_g1_ParamLimits

0x768f,	// (0x0001467d) title_pane_g2_ParamLimits

0xf54e,	// (0x0001c53c) title_pane_g_ParamLimits

0x43ce,	// (0x000113bc) aid_call2_pane

0x43c6,	// (0x000113b4) aid_call_pane

0x43d6,	// (0x000113c4) popup_clock_analogue_window_g1

0x43d6,	// (0x000113c4) popup_clock_analogue_window_g2

0x5696,	// (0x00012684) popup_clock_analogue_window_g3

0x569f,	// (0x0001268d) popup_clock_analogue_window_g4

0x3313,	// (0x00010301) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0001c6e1) popup_clock_analogue_window_g

0x56a7,	// (0x00012695) popup_clock_analogue_window_t1

0x56b5,	// (0x000126a3) clock_digital_number_pane_ParamLimits

0x56b5,	// (0x000126a3) clock_digital_number_pane

0x56c1,	// (0x000126af) clock_digital_number_pane_cp02_ParamLimits

0x56c1,	// (0x000126af) clock_digital_number_pane_cp02

0x56cd,	// (0x000126bb) clock_digital_number_pane_cp03_ParamLimits

0x56cd,	// (0x000126bb) clock_digital_number_pane_cp03

0x56d9,	// (0x000126c7) clock_digital_number_pane_cp04_ParamLimits

0x56d9,	// (0x000126c7) clock_digital_number_pane_cp04

0x56e5,	// (0x000126d3) clock_digital_separator_pane_ParamLimits

0x56e5,	// (0x000126d3) clock_digital_separator_pane

0x56f1,	// (0x000126df) popup_clock_digital_window_t1_ParamLimits

0x56f1,	// (0x000126df) popup_clock_digital_window_t1

0x3313,	// (0x00010301) clock_digital_number_pane_g1

0x3313,	// (0x00010301) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0001c6ec) clock_digital_number_pane_g

0x3313,	// (0x00010301) clock_digital_separator_pane_g1

0x3313,	// (0x00010301) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0001c6ec) clock_digital_separator_pane_g

0x8951,	// (0x0001593f) aid_fill_nsta_ParamLimits

0x8a97,	// (0x00015a85) indicator_nsta_pane_ParamLimits

0x8c28,	// (0x00015c16) popup_clock_analogue_window

0x8c28,	// (0x00015c16) popup_clock_digital_window

0x3546,	// (0x00010534) grid_indicator_nsta_pane_ParamLimits

0xb382,	// (0x00018370) clock_nsta_pane_t2

0x0001,

0xfa9e,	// (0x0001ca8c) clock_nsta_pane_t

0x565a,	// (0x00012648) aid_size_max_handle

0x5664,	// (0x00012652) aid_size_min_handle

0x85de,	// (0x000155cc) editor_scroll_pane

0xc310,	// (0x000192fe) ex_editor_pane

0x3e68,	// (0x00010e56) scroll_pane_cp13

0x3bc6,	// (0x00010bb4) scroll_pane_cp14

0x4424,	// (0x00011412) scroll_pane_cp36

0x811e,	// (0x0001510c) list_single_graphic_hl_pane_cp2_ParamLimits

0x811e,	// (0x0001510c) list_single_graphic_hl_pane_cp2

0xa560,	// (0x0001754e) list_single_graphic_hl_pane_ParamLimits

0xa560,	// (0x0001754e) list_single_graphic_hl_pane

0xc318,	// (0x00019306) aid_size_min_hl_cp1

0xc321,	// (0x0001930f) list_highlight_pane_cp34_ParamLimits

0xc321,	// (0x0001930f) list_highlight_pane_cp34

0xc332,	// (0x00019320) list_single_graphic_hl_pane_g1_ParamLimits

0xc332,	// (0x00019320) list_single_graphic_hl_pane_g1

0xc33f,	// (0x0001932d) list_single_graphic_hl_pane_g2_ParamLimits

0xc33f,	// (0x0001932d) list_single_graphic_hl_pane_g2

0xc33f,	// (0x0001932d) list_single_graphic_hl_pane_g3_ParamLimits

0xc33f,	// (0x0001932d) list_single_graphic_hl_pane_g3

0xab43,	// (0x00017b31) list_single_graphic_hl_pane_g4_ParamLimits

0xab43,	// (0x00017b31) list_single_graphic_hl_pane_g4

0xc34b,	// (0x00019339) list_single_graphic_hl_pane_g5_ParamLimits

0xc34b,	// (0x00019339) list_single_graphic_hl_pane_g5

0x0004,

0xfbe9,	// (0x0001cbd7) list_single_graphic_hl_pane_g_ParamLimits

0xfbe9,	// (0x0001cbd7) list_single_graphic_hl_pane_g

0xc35f,	// (0x0001934d) list_single_graphic_hl_pane_t1_ParamLimits

0xc35f,	// (0x0001934d) list_single_graphic_hl_pane_t1

0xc375,	// (0x00019363) aid_size_min_hl_cp2

0xc37e,	// (0x0001936c) list_highlight_pane_cp34_cp2_ParamLimits

0xc37e,	// (0x0001936c) list_highlight_pane_cp34_cp2

0xc332,	// (0x00019320) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc332,	// (0x00019320) list_single_graphic_hl_pane_g1_cp2

0xc38b,	// (0x00019379) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc38b,	// (0x00019379) list_single_graphic_hl_pane_g2_cp2

0xc397,	// (0x00019385) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc397,	// (0x00019385) list_single_graphic_hl_pane_g3_cp2

0xc3a5,	// (0x00019393) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc3a5,	// (0x00019393) list_single_graphic_hl_pane_g4_cp2

0xc3b1,	// (0x0001939f) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc3b1,	// (0x0001939f) list_single_graphic_hl_pane_g5_cp2

0x59ab,	// (0x00012999) control_pane_g4_ParamLimits

0x59ab,	// (0x00012999) control_pane_g4

0x890d,	// (0x000158fb) bg_popup_sub_pane_cp10_ParamLimits

0xb975,	// (0x00018963) list_choice_list_pane_ParamLimits

0xb984,	// (0x00018972) scroll_pane_cp23

0x371c,	// (0x0001070a) bg_popup_preview_window_pane_cp02_ParamLimits

0xbf9b,	// (0x00018f89) list_preview_fixed_pane_ParamLimits

0xbfb1,	// (0x00018f9f) list_preview_fixed_pane_cp_ParamLimits

0xbfb1,	// (0x00018f9f) list_preview_fixed_pane_cp

0xbfbd,	// (0x00018fab) popup_preview_fixed_window_g1_ParamLimits

0xbfbd,	// (0x00018fab) popup_preview_fixed_window_g1

0xbfc9,	// (0x00018fb7) popup_preview_fixed_window_g2_ParamLimits

0xbfc9,	// (0x00018fb7) popup_preview_fixed_window_g2

0x0002,

0xfb71,	// (0x0001cb5f) popup_preview_fixed_window_g_ParamLimits

0xfb71,	// (0x0001cb5f) popup_preview_fixed_window_g

0x55cc,	// (0x000125ba) aid_navi_side_left_pane_ParamLimits

0x55e1,	// (0x000125cf) aid_navi_side_right_pane_ParamLimits

0x55f9,	// (0x000125e7) navi_icon_pane_stacon_ParamLimits

0x560d,	// (0x000125fb) navi_navi_pane_stacon_ParamLimits

0x55f9,	// (0x000125e7) navi_text_pane_stacon_ParamLimits

0x51d0,	// (0x000121be) main_text_info_pane

0xc3db,	// (0x000193c9) listscroll_text_info_pane

0xc3e3,	// (0x000193d1) list_text_info_pane_ParamLimits

0xc3e3,	// (0x000193d1) list_text_info_pane

0xc3f2,	// (0x000193e0) scroll_pane_cp24_ParamLimits

0xc3f2,	// (0x000193e0) scroll_pane_cp24

0xc410,	// (0x000193fe) list_text_info_pane_t1_ParamLimits

0xc410,	// (0x000193fe) list_text_info_pane_t1

0x5b39,	// (0x00012b27) popup_fast_swap2_window_ParamLimits

0x5b39,	// (0x00012b27) popup_fast_swap2_window

0xc435,	// (0x00019423) aid_size_cell_fast2

0x3309,	// (0x000102f7) bg_popup_window_pane_cp17

0x9388,	// (0x00016376) heading_pane_cp2

0x394b,	// (0x00010939) listscroll_fast2_pane

0xc43f,	// (0x0001942d) grid_fast2_pane

0xc449,	// (0x00019437) listscroll_fast2_pane_g1

0xc453,	// (0x00019441) listscroll_fast2_pane_g2

0x0001,

0xfbf4,	// (0x0001cbe2) listscroll_fast2_pane_g

0x3e68,	// (0x00010e56) scroll_pane_cp26

0xc45d,	// (0x0001944b) cell_fast2_pane_ParamLimits

0xc45d,	// (0x0001944b) cell_fast2_pane

0xc474,	// (0x00019462) cell_fast2_pane_g1

0xc47d,	// (0x0001946b) cell_fast2_pane_g2

0xc486,	// (0x00019474) cell_fast2_pane_g3

0x0002,

0xfbf9,	// (0x0001cbe7) cell_fast2_pane_g

0x398d,	// (0x0001097b) grid_highlight_pane_cp9

0x5afb,	// (0x00012ae9) main_eswt_pane_ParamLimits

0x5afb,	// (0x00012ae9) main_eswt_pane

0xc407,	// (0x000193f5) list_single_text_info_pane

0xc48e,	// (0x0001947c) eswt_ctrl_button_pane

0xc48e,	// (0x0001947c) eswt_ctrl_canvas_pane

0xc496,	// (0x00019484) eswt_ctrl_combo_pane

0xc48e,	// (0x0001947c) eswt_ctrl_default_pane

0xc48e,	// (0x0001947c) eswt_ctrl_label_pane

0xc49e,	// (0x0001948c) eswt_ctrl_wait_pane

0xc4a6,	// (0x00019494) eswt_shell_pane

0x3309,	// (0x000102f7) listscroll_eswt_app_pane

0xc4c6,	// (0x000194b4) popup_eswt_tasktip_window_ParamLimits

0xc4c6,	// (0x000194b4) popup_eswt_tasktip_window

0x8f97,	// (0x00015f85) bg_popup_window_pane_cp18

0xc4d7,	// (0x000194c5) eswt_control_pane_g1_ParamLimits

0xc4d7,	// (0x000194c5) eswt_control_pane_g1

0xc4e4,	// (0x000194d2) eswt_control_pane_g2_ParamLimits

0xc4e4,	// (0x000194d2) eswt_control_pane_g2

0xc4f1,	// (0x000194df) eswt_control_pane_g3_ParamLimits

0xc4f1,	// (0x000194df) eswt_control_pane_g3

0xc4fe,	// (0x000194ec) eswt_control_pane_g4_ParamLimits

0xc4fe,	// (0x000194ec) eswt_control_pane_g4

0x0003,

0xfc00,	// (0x0001cbee) eswt_control_pane_g_ParamLimits

0xfc00,	// (0x0001cbee) eswt_control_pane_g

0x3ca1,	// (0x00010c8f) bg_button_pane_ParamLimits

0x3ca1,	// (0x00010c8f) bg_button_pane

0x39a2,	// (0x00010990) common_borders_pane_copy2_ParamLimits

0x39a2,	// (0x00010990) common_borders_pane_copy2

0xc50b,	// (0x000194f9) control_button_pane_g1_ParamLimits

0xc50b,	// (0x000194f9) control_button_pane_g1

0xc517,	// (0x00019505) control_button_pane_g2_ParamLimits

0xc517,	// (0x00019505) control_button_pane_g2

0xc523,	// (0x00019511) control_button_pane_g3_ParamLimits

0xc523,	// (0x00019511) control_button_pane_g3

0x0002,

0xfc09,	// (0x0001cbf7) control_button_pane_g_ParamLimits

0xfc09,	// (0x0001cbf7) control_button_pane_g

0xc537,	// (0x00019525) control_button_pane_t1

0xc545,	// (0x00019533) control_button_pane_t2

0x0001,

0xfc10,	// (0x0001cbfe) control_button_pane_t

0x8e73,	// (0x00015e61) bg_button_pane_g1

0x8e83,	// (0x00015e71) bg_button_pane_g2

0x8e7b,	// (0x00015e69) bg_button_pane_g3

0x8e93,	// (0x00015e81) bg_button_pane_g4

0x8e8b,	// (0x00015e79) bg_button_pane_g5

0x8e9b,	// (0x00015e89) bg_button_pane_g6

0x8ea3,	// (0x00015e91) bg_button_pane_g7

0x8eb3,	// (0x00015ea1) bg_button_pane_g8

0x8eab,	// (0x00015e99) bg_button_pane_g9

0x0008,

0xf861,	// (0x0001c84f) bg_button_pane_g

0xb930,	// (0x0001891e) common_borders_pane_ParamLimits

0xb930,	// (0x0001891e) common_borders_pane

0xc4d7,	// (0x000194c5) eswt_control_pane_g1_copy1_ParamLimits

0xc4d7,	// (0x000194c5) eswt_control_pane_g1_copy1

0xc4e4,	// (0x000194d2) eswt_control_pane_g2_copy1_ParamLimits

0xc4e4,	// (0x000194d2) eswt_control_pane_g2_copy1

0xc4f1,	// (0x000194df) eswt_control_pane_g3_copy1_ParamLimits

0xc4f1,	// (0x000194df) eswt_control_pane_g3_copy1

0xc4fe,	// (0x000194ec) eswt_control_pane_g4_copy1_ParamLimits

0xc4fe,	// (0x000194ec) eswt_control_pane_g4_copy1

0xb96b,	// (0x00018959) bg_eswt_ctrl_canvas_pane_g1

0xb930,	// (0x0001891e) common_borders_pane_cp2_ParamLimits

0xb930,	// (0x0001891e) common_borders_pane_cp2

0xb930,	// (0x0001891e) common_borders_pane_cp3_ParamLimits

0xb930,	// (0x0001891e) common_borders_pane_cp3

0xc553,	// (0x00019541) separator_horizontal_pane

0xc55b,	// (0x00019549) separator_vertical_pane

0xc4d7,	// (0x000194c5) eswt_control_pane_g1_copy2_ParamLimits

0xc4d7,	// (0x000194c5) eswt_control_pane_g1_copy2

0xc4e4,	// (0x000194d2) eswt_control_pane_g2_copy2_ParamLimits

0xc4e4,	// (0x000194d2) eswt_control_pane_g2_copy2

0xc4f1,	// (0x000194df) eswt_control_pane_g3_copy2_ParamLimits

0xc4f1,	// (0x000194df) eswt_control_pane_g3_copy2

0xc4fe,	// (0x000194ec) eswt_control_pane_g4_copy2_ParamLimits

0xc4fe,	// (0x000194ec) eswt_control_pane_g4_copy2

0x3309,	// (0x000102f7) common_borders_pane_cp4

0xc564,	// (0x00019552) separator_horizontal_pane_g1

0xc56d,	// (0x0001955b) separator_horizontal_pane_g2

0xc576,	// (0x00019564) separator_horizontal_pane_g3

0x0002,

0xfc15,	// (0x0001cc03) separator_horizontal_pane_g

0xc4d7,	// (0x000194c5) eswt_control_pane_g1_copy3_ParamLimits

0xc4d7,	// (0x000194c5) eswt_control_pane_g1_copy3

0xc4e4,	// (0x000194d2) eswt_control_pane_g2_copy3_ParamLimits

0xc4e4,	// (0x000194d2) eswt_control_pane_g2_copy3

0xc4f1,	// (0x000194df) eswt_control_pane_g3_copy3_ParamLimits

0xc4f1,	// (0x000194df) eswt_control_pane_g3_copy3

0xc4fe,	// (0x000194ec) eswt_control_pane_g4_copy3_ParamLimits

0xc4fe,	// (0x000194ec) eswt_control_pane_g4_copy3

0x3309,	// (0x000102f7) common_borders_pane_cp5

0xc57f,	// (0x0001956d) separator_vertical_pane_g1

0xc588,	// (0x00019576) separator_vertical_pane_g2

0xc591,	// (0x0001957f) separator_vertical_pane_g3

0x0002,

0xfc1c,	// (0x0001cc0a) separator_vertical_pane_g

0xc4d7,	// (0x000194c5) eswt_control_pane_g1_copy4_ParamLimits

0xc4d7,	// (0x000194c5) eswt_control_pane_g1_copy4

0xc4e4,	// (0x000194d2) eswt_control_pane_g2_copy4_ParamLimits

0xc4e4,	// (0x000194d2) eswt_control_pane_g2_copy4

0xc4f1,	// (0x000194df) eswt_control_pane_g3_copy4_ParamLimits

0xc4f1,	// (0x000194df) eswt_control_pane_g3_copy4

0xc4fe,	// (0x000194ec) eswt_control_pane_g4_copy4_ParamLimits

0xc4fe,	// (0x000194ec) eswt_control_pane_g4_copy4

0xc59a,	// (0x00019588) eswt_ctrl_combo_button_pane

0xc5a2,	// (0x00019590) eswt_ctrl_input_pane

0xc5aa,	// (0x00019598) popup_choice_list_window_cp70

0xc5b2,	// (0x000195a0) eswt_ctrl_input_pane_t1

0x3309,	// (0x000102f7) input_focus_pane_cp70

0xb930,	// (0x0001891e) bg_button_pane_cp70_ParamLimits

0xb930,	// (0x0001891e) bg_button_pane_cp70

0xc5c0,	// (0x000195ae) eswt_ctrl_combo_button_pane_g1

0xc5c8,	// (0x000195b6) wait_bar_pane_cp70

0x8f97,	// (0x00015f85) bg_popup_window_pane_cp70_ParamLimits

0x8f97,	// (0x00015f85) bg_popup_window_pane_cp70

0xc5d0,	// (0x000195be) popup_eswt_tasktip_window_t1

0xc5e6,	// (0x000195d4) wait_bar_pane_cp71_ParamLimits

0xc5e6,	// (0x000195d4) wait_bar_pane_cp71

0xc5f2,	// (0x000195e0) grid_eswt_app_pane

0x426e,	// (0x0001125c) scroll_pane_cp70

0xc5fb,	// (0x000195e9) cell_eswt_app_pane_ParamLimits

0xc5fb,	// (0x000195e9) cell_eswt_app_pane

0xc62d,	// (0x0001961b) cell_eswt_app_pane_g1_ParamLimits

0xc62d,	// (0x0001961b) cell_eswt_app_pane_g1

0xc65c,	// (0x0001964a) cell_eswt_app_pane_g2_ParamLimits

0xc65c,	// (0x0001964a) cell_eswt_app_pane_g2

0x0001,

0xfc23,	// (0x0001cc11) cell_eswt_app_pane_g_ParamLimits

0xfc23,	// (0x0001cc11) cell_eswt_app_pane_g

0xc685,	// (0x00019673) cell_eswt_app_pane_t1_ParamLimits

0xc685,	// (0x00019673) cell_eswt_app_pane_t1

0xc6b7,	// (0x000196a5) grid_highlight_pane_cp70_ParamLimits

0xc6b7,	// (0x000196a5) grid_highlight_pane_cp70

0x84bb,	// (0x000154a9) set_content_pane_g1

0x888c,	// (0x0001587a) status_small_volume_pane

0x69f2,	// (0x000139e0) status_small_volume_pane_g1

0x69fa,	// (0x000139e8) volume_small2_pane

0x6a03,	// (0x000139f1) volume_small2_pane_g1

0x6a0c,	// (0x000139fa) volume_small2_pane_g2

0x6a15,	// (0x00013a03) volume_small2_pane_g3

0x6a1e,	// (0x00013a0c) volume_small2_pane_g4

0x6a27,	// (0x00013a15) volume_small2_pane_g5

0x6a30,	// (0x00013a1e) volume_small2_pane_g6

0x6a39,	// (0x00013a27) volume_small2_pane_g7

0x6a42,	// (0x00013a30) volume_small2_pane_g8

0x6a4b,	// (0x00013a39) volume_small2_pane_g9

0x6a54,	// (0x00013a42) volume_small2_pane_g10

0x0009,

0xfc28,	// (0x0001cc16) volume_small2_pane_g

0xbd22,	// (0x00018d10) fep_vkb_top_text_pane_g1_ParamLimits

0xbd3d,	// (0x00018d2b) fep_vkb_top_text_pane_t1_ParamLimits

0xbfd5,	// (0x00018fc3) popup_preview_fixed_window_g3_ParamLimits

0xbfd5,	// (0x00018fc3) popup_preview_fixed_window_g3

0x604a,	// (0x00013038) popup_toolbar_trans_pane

0xa333,	// (0x00017321) aid_height_set_list_ParamLimits

0xa344,	// (0x00017332) aid_size_parent_ParamLimits

0x890d,	// (0x000158fb) list_highlight_pane_cp2_ParamLimits

0x84bb,	// (0x000154a9) set_content_pane_g1_ParamLimits

0xa5f1,	// (0x000175df) list_single_image_pane_ParamLimits

0xa5f1,	// (0x000175df) list_single_image_pane

0xc6c3,	// (0x000196b1) aid_size_cell_image_ParamLimits

0xc6c3,	// (0x000196b1) aid_size_cell_image

0xc6d0,	// (0x000196be) grid_single_image_pane_ParamLimits

0xc6d0,	// (0x000196be) grid_single_image_pane

0x3cc7,	// (0x00010cb5) list_single_image_pane_g1_ParamLimits

0x3cc7,	// (0x00010cb5) list_single_image_pane_g1

0x3cd3,	// (0x00010cc1) list_single_image_pane_g2_ParamLimits

0x3cd3,	// (0x00010cc1) list_single_image_pane_g2

0x0001,

0xfc3d,	// (0x0001cc2b) list_single_image_pane_g_ParamLimits

0xfc3d,	// (0x0001cc2b) list_single_image_pane_g

0xc6de,	// (0x000196cc) list_single_image_pane_t1_ParamLimits

0xc6de,	// (0x000196cc) list_single_image_pane_t1

0xc6f4,	// (0x000196e2) cell_image_list_pane_ParamLimits

0xc6f4,	// (0x000196e2) cell_image_list_pane

0xc70a,	// (0x000196f8) cell_image_list_pane_g1

0xc713,	// (0x00019701) cell_image_list_pane_g2

0x0001,

0xfc42,	// (0x0001cc30) cell_image_list_pane_g

0xc71c,	// (0x0001970a) aid_size_cell_tb_trans_pane

0x3ca1,	// (0x00010c8f) bg_tb_trans_pane

0xc72e,	// (0x0001971c) grid_tb_trans_pane

0x8e73,	// (0x00015e61) bg_tb_trans_pane_g1

0x8e83,	// (0x00015e71) bg_tb_trans_pane_g2

0x8e7b,	// (0x00015e69) bg_tb_trans_pane_g3

0x8e93,	// (0x00015e81) bg_tb_trans_pane_g4

0x8e8b,	// (0x00015e79) bg_tb_trans_pane_g5

0x8eb3,	// (0x00015ea1) bg_tb_trans_pane_g6

0x8eab,	// (0x00015e99) bg_tb_trans_pane_g7

0x8e9b,	// (0x00015e89) bg_tb_trans_pane_g8

0x8ea3,	// (0x00015e91) bg_tb_trans_pane_g9

0x0008,

0xfc47,	// (0x0001cc35) bg_tb_trans_pane_g

0xc742,	// (0x00019730) cell_toolbar_trans_pane_ParamLimits

0xc742,	// (0x00019730) cell_toolbar_trans_pane

0xb96b,	// (0x00018959) cell_toolbar_trans_pane_g1

0xb550,	// (0x0001853e) list_form2_midp_pane_t1

0xb55e,	// (0x0001854c) list_form2_midp_pane_t2

0x0001,

0xfae4,	// (0x0001cad2) list_form2_midp_pane_t

0xb56c,	// (0x0001855a) scroll_pane_cp51_ParamLimits

0xb786,	// (0x00018774) form2_midp_wait_pane_g1

0xb78f,	// (0x0001877d) form2_midp_wait_pane_g2

0xb798,	// (0x00018786) form2_midp_wait_pane_g3

0x0002,

0xfaf9,	// (0x0001cae7) form2_midp_wait_pane_g

0x3546,	// (0x00010534) list_highlight_pane_cp21_ParamLimits

0xb7d1,	// (0x000187bf) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb7e0,	// (0x000187ce) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa5aa,	// (0x00017598) list_single_2graphic_im_pane_ParamLimits

0xa5aa,	// (0x00017598) list_single_2graphic_im_pane

0xc768,	// (0x00019756) list_single_2graphic_im_pane_g1_ParamLimits

0xc768,	// (0x00019756) list_single_2graphic_im_pane_g1

0xc779,	// (0x00019767) list_single_2graphic_im_pane_g2_ParamLimits

0xc779,	// (0x00019767) list_single_2graphic_im_pane_g2

0xc785,	// (0x00019773) list_single_2graphic_im_pane_g3_ParamLimits

0xc785,	// (0x00019773) list_single_2graphic_im_pane_g3

0x0003,

0xfc5a,	// (0x0001cc48) list_single_2graphic_im_pane_g_ParamLimits

0xfc5a,	// (0x0001cc48) list_single_2graphic_im_pane_g

0xc7a5,	// (0x00019793) list_single_2graphic_im_pane_t1_ParamLimits

0xc7a5,	// (0x00019793) list_single_2graphic_im_pane_t1

0xbfe1,	// (0x00018fcf) list_single_graphic_2heading_pane_fp_ParamLimits

0xbfe1,	// (0x00018fcf) list_single_graphic_2heading_pane_fp

0xc029,	// (0x00019017) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc029,	// (0x00019017) list_single_graphic_2heading_pane_fp_g1

0xbffa,	// (0x00018fe8) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xbffa,	// (0x00018fe8) list_single_graphic_2heading_pane_fp_g2

0xbf53,	// (0x00018f41) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xbf53,	// (0x00018f41) list_single_graphic_2heading_pane_fp_g3

0xbf5f,	// (0x00018f4d) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xbf5f,	// (0x00018f4d) list_single_graphic_2heading_pane_fp_g4

0xc006,	// (0x00018ff4) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc006,	// (0x00018ff4) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb81,	// (0x0001cb6f) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb81,	// (0x0001cb6f) list_single_graphic_2heading_pane_fp_g

0xc7d6,	// (0x000197c4) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xc7d6,	// (0x000197c4) list_single_graphic_2heading_pane_fp_t1

0xc061,	// (0x0001904f) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc061,	// (0x0001904f) list_single_graphic_2heading_pane_fp_t2

0xc7ec,	// (0x000197da) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xc7ec,	// (0x000197da) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc63,	// (0x0001cc51) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc63,	// (0x0001cc51) list_single_graphic_2heading_pane_fp_t

0xb9e4,	// (0x000189d2) fep_hwr_write_pane_g5_ParamLimits

0xb9e4,	// (0x000189d2) fep_hwr_write_pane_g5

0xb9f0,	// (0x000189de) fep_hwr_write_pane_g6_ParamLimits

0xb9f0,	// (0x000189de) fep_hwr_write_pane_g6

0xc4a6,	// (0x00019494) eswt_shell_pane_ParamLimits

0x8f97,	// (0x00015f85) bg_popup_window_pane_cp18_ParamLimits

0xa262,	// (0x00017250) heading_pane_cp70

0xc5d0,	// (0x000195be) popup_eswt_tasktip_window_t1_ParamLimits

0x89a8,	// (0x00015996) aid_touch_tab_arrow_left

0x89b4,	// (0x000159a2) aid_touch_tab_arrow_right

0x76a8,	// (0x00014696) title_pane_g3_ParamLimits

0x76a8,	// (0x00014696) title_pane_g3

0x3bfb,	// (0x00010be9) set_value_pane_g1

0x604a,	// (0x00013038) popup_toolbar_trans_pane_ParamLimits

0xc71c,	// (0x0001970a) aid_size_cell_tb_trans_pane_ParamLimits

0x3ca1,	// (0x00010c8f) bg_tb_trans_pane_ParamLimits

0xc72e,	// (0x0001971c) grid_tb_trans_pane_ParamLimits

0x371c,	// (0x0001070a) cont_note_pane_ParamLimits

0x371c,	// (0x0001070a) cont_note_pane

0x39a2,	// (0x00010990) cont_snote2_single_text_pane_ParamLimits

0x39a2,	// (0x00010990) cont_snote2_single_text_pane

0x39a2,	// (0x00010990) cont_snote2_single_graphic_pane_ParamLimits

0x39a2,	// (0x00010990) cont_snote2_single_graphic_pane

0x95b0,	// (0x0001659e) cont_note_wait_pane_ParamLimits

0x95b0,	// (0x0001659e) cont_note_wait_pane

0x95b0,	// (0x0001659e) cont_note_image_pane_ParamLimits

0x95b0,	// (0x0001659e) cont_note_image_pane

0xc802,	// (0x000197f0) popup_note2_window_g1_ParamLimits

0xc802,	// (0x000197f0) popup_note2_window_g1

0xc833,	// (0x00019821) popup_note2_window_t1_ParamLimits

0xc833,	// (0x00019821) popup_note2_window_t1

0xc878,	// (0x00019866) popup_note2_window_t2_ParamLimits

0xc878,	// (0x00019866) popup_note2_window_t2

0xc8bd,	// (0x000198ab) popup_note2_window_t3_ParamLimits

0xc8bd,	// (0x000198ab) popup_note2_window_t3

0xc902,	// (0x000198f0) popup_note2_window_t4_ParamLimits

0xc902,	// (0x000198f0) popup_note2_window_t4

0x37a0,	// (0x0001078e) popup_note2_window_t5_ParamLimits

0x37a0,	// (0x0001078e) popup_note2_window_t5

0x0004,

0xfc6f,	// (0x0001cc5d) popup_note2_window_t_ParamLimits

0xfc6f,	// (0x0001cc5d) popup_note2_window_t

0xc931,	// (0x0001991f) popup_note2_image_window_g1_ParamLimits

0xc931,	// (0x0001991f) popup_note2_image_window_g1

0xc93d,	// (0x0001992b) popup_note2_image_window_g2_ParamLimits

0xc93d,	// (0x0001992b) popup_note2_image_window_g2

0x0001,

0xfc7a,	// (0x0001cc68) popup_note2_image_window_g_ParamLimits

0xfc7a,	// (0x0001cc68) popup_note2_image_window_g

0xc94f,	// (0x0001993d) popup_note2_image_window_t1_ParamLimits

0xc94f,	// (0x0001993d) popup_note2_image_window_t1

0xc967,	// (0x00019955) popup_note2_image_window_t2_ParamLimits

0xc967,	// (0x00019955) popup_note2_image_window_t2

0xc97f,	// (0x0001996d) popup_note2_image_window_t3_ParamLimits

0xc97f,	// (0x0001996d) popup_note2_image_window_t3

0x0002,

0xfc7f,	// (0x0001cc6d) popup_note2_image_window_t_ParamLimits

0xfc7f,	// (0x0001cc6d) popup_note2_image_window_t

0x95be,	// (0x000165ac) popup_note2_wait_window_g1_ParamLimits

0x95be,	// (0x000165ac) popup_note2_wait_window_g1

0xc99b,	// (0x00019989) popup_note2_wait_window_g2_ParamLimits

0xc99b,	// (0x00019989) popup_note2_wait_window_g2

0x95d6,	// (0x000165c4) popup_note2_wait_window_g3_ParamLimits

0x95d6,	// (0x000165c4) popup_note2_wait_window_g3

0x0002,

0xfc86,	// (0x0001cc74) popup_note2_wait_window_g_ParamLimits

0xfc86,	// (0x0001cc74) popup_note2_wait_window_g

0xc9a7,	// (0x00019995) popup_note2_wait_window_t1_ParamLimits

0xc9a7,	// (0x00019995) popup_note2_wait_window_t1

0xc9c5,	// (0x000199b3) popup_note2_wait_window_t2_ParamLimits

0xc9c5,	// (0x000199b3) popup_note2_wait_window_t2

0xc9e3,	// (0x000199d1) popup_note2_wait_window_t3_ParamLimits

0xc9e3,	// (0x000199d1) popup_note2_wait_window_t3

0xc9f5,	// (0x000199e3) popup_note2_wait_window_t4_ParamLimits

0xc9f5,	// (0x000199e3) popup_note2_wait_window_t4

0x0003,

0xfc8d,	// (0x0001cc7b) popup_note2_wait_window_t_ParamLimits

0xfc8d,	// (0x0001cc7b) popup_note2_wait_window_t

0xca07,	// (0x000199f5) wait_bar2_pane_ParamLimits

0xca07,	// (0x000199f5) wait_bar2_pane

0xca1f,	// (0x00019a0d) popup_snote2_single_text_window_g1_ParamLimits

0xca1f,	// (0x00019a0d) popup_snote2_single_text_window_g1

0xca47,	// (0x00019a35) popup_snote2_single_text_window_t1_ParamLimits

0xca47,	// (0x00019a35) popup_snote2_single_text_window_t1

0xca93,	// (0x00019a81) popup_snote2_single_text_window_t2_ParamLimits

0xca93,	// (0x00019a81) popup_snote2_single_text_window_t2

0xcadf,	// (0x00019acd) popup_snote2_single_text_window_t3_ParamLimits

0xcadf,	// (0x00019acd) popup_snote2_single_text_window_t3

0xcb20,	// (0x00019b0e) popup_snote2_single_text_window_t4_ParamLimits

0xcb20,	// (0x00019b0e) popup_snote2_single_text_window_t4

0xcb56,	// (0x00019b44) popup_snote2_single_text_window_t5_ParamLimits

0xcb56,	// (0x00019b44) popup_snote2_single_text_window_t5

0x0004,

0xfc96,	// (0x0001cc84) popup_snote2_single_text_window_t_ParamLimits

0xfc96,	// (0x0001cc84) popup_snote2_single_text_window_t

0xcb81,	// (0x00019b6f) popup_snote2_single_graphic_window_g1_ParamLimits

0xcb81,	// (0x00019b6f) popup_snote2_single_graphic_window_g1

0xcba9,	// (0x00019b97) popup_snote2_single_graphic_window_g2_ParamLimits

0xcba9,	// (0x00019b97) popup_snote2_single_graphic_window_g2

0x0001,

0xfca1,	// (0x0001cc8f) popup_snote2_single_graphic_window_g_ParamLimits

0xfca1,	// (0x0001cc8f) popup_snote2_single_graphic_window_g

0xcbd1,	// (0x00019bbf) popup_snote2_single_graphic_window_t1_ParamLimits

0xcbd1,	// (0x00019bbf) popup_snote2_single_graphic_window_t1

0xcc1d,	// (0x00019c0b) popup_snote2_single_graphic_window_t2_ParamLimits

0xcc1d,	// (0x00019c0b) popup_snote2_single_graphic_window_t2

0xcadf,	// (0x00019acd) popup_snote2_single_graphic_window_t3_ParamLimits

0xcadf,	// (0x00019acd) popup_snote2_single_graphic_window_t3

0xcb20,	// (0x00019b0e) popup_snote2_single_graphic_window_t4_ParamLimits

0xcb20,	// (0x00019b0e) popup_snote2_single_graphic_window_t4

0xcb56,	// (0x00019b44) popup_snote2_single_graphic_window_t5_ParamLimits

0xcb56,	// (0x00019b44) popup_snote2_single_graphic_window_t5

0x0004,

0xfca6,	// (0x0001cc94) popup_snote2_single_graphic_window_t_ParamLimits

0xfca6,	// (0x0001cc94) popup_snote2_single_graphic_window_t

0xb41c,	// (0x0001840a) clock_nsta_pane_cp2_t1

0xb41c,	// (0x0001840a) clock_nsta_pane_cp2_t2

0x0001,

0xfaba,	// (0x0001caa8) clock_nsta_pane_cp2_t

0x3cbb,	// (0x00010ca9) form_field_data_wide_pane_g1_ParamLimits

0x3cc7,	// (0x00010cb5) form_field_data_wide_pane_g2_ParamLimits

0x3cc7,	// (0x00010cb5) form_field_data_wide_pane_g2

0x3cd3,	// (0x00010cc1) form_field_data_wide_pane_g3_ParamLimits

0x3cd3,	// (0x00010cc1) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0001c664) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0001c664) form_field_data_wide_pane_g

0xb31e,	// (0x0001830c) grid_touch_3_pane_ParamLimits

0xb31e,	// (0x0001830c) grid_touch_3_pane

0xcc69,	// (0x00019c57) cell_touch_3_pane_ParamLimits

0xcc69,	// (0x00019c57) cell_touch_3_pane

0xb96b,	// (0x00018959) cell_touch_3_pane_g1

0xb96b,	// (0x00018959) cell_touch_3_pane_g2

0x0001,

0xfb3f,	// (0x0001cb2d) cell_touch_3_pane_g

0x37f8,	// (0x000107e6) cont_query_data_pane

0x3800,	// (0x000107ee) cont_query_data_pane_cp1

0xcc9c,	// (0x00019c8a) button_value_adjust_pane_cp7

0xcca4,	// (0x00019c92) query_popup_pane_cp3

0x44b0,	// (0x0001149e) bg_popup_sub_pane_cp22_ParamLimits

0x5710,	// (0x000126fe) navi_navi_volume_pane_cp2

0x572b,	// (0x00012719) popup_side_volume_key_window_g2

0x573a,	// (0x00012728) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0001c6fa) popup_side_volume_key_window_g

0x5757,	// (0x00012745) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0001c701) popup_side_volume_key_window_t

0x8376,	// (0x00015364) popup_side_volume_key_window_ParamLimits

0x7b51,	// (0x00014b3f) list_double_graphic_pane_g4_ParamLimits

0x7b51,	// (0x00014b3f) list_double_graphic_pane_g4

0xa5d9,	// (0x000175c7) list_single_2heading_msg_pane_ParamLimits

0xa5d9,	// (0x000175c7) list_single_2heading_msg_pane

0xccd5,	// (0x00019cc3) list_single_2heading_msg_pane_g1_ParamLimits

0xccd5,	// (0x00019cc3) list_single_2heading_msg_pane_g1

0xc3a5,	// (0x00019393) list_single_2heading_msg_pane_g2_ParamLimits

0xc3a5,	// (0x00019393) list_single_2heading_msg_pane_g2

0xcce1,	// (0x00019ccf) list_single_2heading_msg_pane_g3_ParamLimits

0xcce1,	// (0x00019ccf) list_single_2heading_msg_pane_g3

0xcced,	// (0x00019cdb) list_single_2heading_msg_pane_g4_ParamLimits

0xcced,	// (0x00019cdb) list_single_2heading_msg_pane_g4

0x0003,

0xfcb1,	// (0x0001cc9f) list_single_2heading_msg_pane_g_ParamLimits

0xfcb1,	// (0x0001cc9f) list_single_2heading_msg_pane_g

0xcd05,	// (0x00019cf3) list_single_2heading_msg_pane_t1_ParamLimits

0xcd05,	// (0x00019cf3) list_single_2heading_msg_pane_t1

0xcd2d,	// (0x00019d1b) list_single_2heading_msg_pane_t2_ParamLimits

0xcd2d,	// (0x00019d1b) list_single_2heading_msg_pane_t2

0xcd5c,	// (0x00019d4a) list_single_2heading_msg_pane_t3_ParamLimits

0xcd5c,	// (0x00019d4a) list_single_2heading_msg_pane_t3

0xcdb6,	// (0x00019da4) list_single_2heading_msg_pane_t4_ParamLimits

0xcdb6,	// (0x00019da4) list_single_2heading_msg_pane_t4

0x0003,

0xfcba,	// (0x0001cca8) list_single_2heading_msg_pane_t_ParamLimits

0xfcba,	// (0x0001cca8) list_single_2heading_msg_pane_t

0x34ea,	// (0x000104d8) title_pane_g4_ParamLimits

0x34ea,	// (0x000104d8) title_pane_g4

0x551c,	// (0x0001250a) title_pane_stacon_g3_ParamLimits

0x551c,	// (0x0001250a) title_pane_stacon_g3

0xc799,	// (0x00019787) list_single_2graphic_im_pane_g4_ParamLimits

0xc799,	// (0x00019787) list_single_2graphic_im_pane_g4

0xa020,	// (0x0001700e) popup_side_volume_key_window_cp

0xa92c,	// (0x0001791a) main_idle_act2_pane_t1

0x61ba,	// (0x000131a8) toolbar_button_pane_g10

0x7976,	// (0x00014964) popup_toolbar_window_cp1

0xb40d,	// (0x000183fb) clock_nsta_pane_cp_t1

0xb40d,	// (0x000183fb) clock_nsta_pane_cp_t2

0x0001,

0xfab5,	// (0x0001caa3) clock_nsta_pane_cp_t

0x5710,	// (0x000126fe) navi_navi_volume_pane_cp2_ParamLimits

0x571f,	// (0x0001270d) popup_side_volume_key_window_g1_ParamLimits

0x572b,	// (0x00012719) popup_side_volume_key_window_g2_ParamLimits

0x573a,	// (0x00012728) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0001c6fa) popup_side_volume_key_window_g_ParamLimits

0x6643,	// (0x00013631) fep_hwr_aid_pane

0x66ec,	// (0x000136da) bg_fep_hwr_top_pane_g4_ParamLimits

0xb9b4,	// (0x000189a2) fep_hwr_top_pane_g1_ParamLimits

0xb9c6,	// (0x000189b4) fep_hwr_top_pane_g2_ParamLimits

0x670c,	// (0x000136fa) fep_hwr_top_pane_g3_ParamLimits

0xfb0a,	// (0x0001caf8) fep_hwr_top_pane_g_ParamLimits

0x6721,	// (0x0001370f) fep_hwr_top_text_pane_ParamLimits

0x9dd5,	// (0x00016dc3) aid_touch_tab_arrow_arrow_2

0x9dde,	// (0x00016dcc) aid_touch_tab_arrow_left_2

0x6657,	// (0x00013645) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x668e,	// (0x0001367c) fep_hwr_prediction_pane

0xbb1c,	// (0x00018b0a) fep_vkb_prediction_pane

0xbc22,	// (0x00018c10) fep_vkb_side_pane_g3_ParamLimits

0xbc22,	// (0x00018c10) fep_vkb_side_pane_g3

0x68b0,	// (0x0001389e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6921,	// (0x0001390f) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x692e,	// (0x0001391c) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb9,	// (0x0001cba7) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6a5d,	// (0x00013a4b) fep_hwr_prediction_pane_g1

0x6a67,	// (0x00013a55) fep_hwr_prediction_pane_g2

0x6a6f,	// (0x00013a5d) fep_hwr_prediction_pane_g3

0x6a77,	// (0x00013a65) fep_hwr_prediction_pane_g4

0x0003,

0xfcc3,	// (0x0001ccb1) fep_hwr_prediction_pane_g

0xcddb,	// (0x00019dc9) fep_vkb_prediction_pane_g1

0xcde5,	// (0x00019dd3) fep_vkb_prediction_pane_g2

0xcded,	// (0x00019ddb) fep_vkb_prediction_pane_g3

0xcdf5,	// (0x00019de3) fep_vkb_prediction_pane_g4

0x0003,

0xfccc,	// (0x0001ccba) fep_vkb_prediction_pane_g

0x64c3,	// (0x000134b1) slider_set_pane_g3

0x64d7,	// (0x000134c5) slider_set_pane_g4

0x64ef,	// (0x000134dd) slider_set_pane_g5

0x64c3,	// (0x000134b1) slider_set_pane_g6

0x6505,	// (0x000134f3) slider_set_pane_g7

0xa4c3,	// (0x000174b1) slider_form_pane_g3

0xa4cc,	// (0x000174ba) slider_form_pane_g4

0xa4d4,	// (0x000174c2) slider_form_pane_g5

0xa4c3,	// (0x000174b1) slider_form_pane_g6

0xa4dc,	// (0x000174ca) slider_form_pane_g7

0xac26,	// (0x00017c14) slider_set_pane_vc_g3

0xac2f,	// (0x00017c1d) slider_set_pane_vc_g4

0xac38,	// (0x00017c26) slider_set_pane_vc_g5

0xac26,	// (0x00017c14) slider_set_pane_vc_g6

0xac41,	// (0x00017c2f) slider_set_pane_vc_g7

0xb0e3,	// (0x000180d1) slider_form_pane_vc_g1

0xb0ec,	// (0x000180da) slider_form_pane_vc_g2

0xb0f5,	// (0x000180e3) slider_form_pane_vc_g3

0xb0e3,	// (0x000180d1) slider_form_pane_vc_g4

0xb0fe,	// (0x000180ec) slider_form_pane_vc_g5

0x0004,

0xfa87,	// (0x0001ca75) slider_form_pane_vc_g

0x51d0,	// (0x000121be) main_idle_act3_pane

0xcdfd,	// (0x00019deb) ai3_links_pane

0xce06,	// (0x00019df4) popup_ai3_data_window_ParamLimits

0xce06,	// (0x00019df4) popup_ai3_data_window

0x3309,	// (0x000102f7) grid_ai3_links_pane

0xce24,	// (0x00019e12) cell_ai3_links_pane_ParamLimits

0xce24,	// (0x00019e12) cell_ai3_links_pane

0xce3e,	// (0x00019e2c) bg_popup_sub_pane_cp11

0xce4b,	// (0x00019e39) cell_ai3_links_pane_g1

0x3309,	// (0x000102f7) bg_popup_sub_pane_cp12

0xce70,	// (0x00019e5e) heading_ai3_data_pane

0xce78,	// (0x00019e66) list_ai3_gene_pane

0xce84,	// (0x00019e72) popup_ai3_data_window_g1

0xce8c,	// (0x00019e7a) heading_ai3_data_pane_g1

0xce94,	// (0x00019e82) heading_ai3_data_pane_t1

0xcea2,	// (0x00019e90) list_double_ai3_gene_pane_ParamLimits

0xcea2,	// (0x00019e90) list_double_ai3_gene_pane

0xceaf,	// (0x00019e9d) list_single_ai3_gene_pane_ParamLimits

0xceaf,	// (0x00019e9d) list_single_ai3_gene_pane

0xb930,	// (0x0001891e) list_highlight_pane_cp7_ParamLimits

0xb930,	// (0x0001891e) list_highlight_pane_cp7

0xcebc,	// (0x00019eaa) list_single_a13_gene_pane_t1_ParamLimits

0xcebc,	// (0x00019eaa) list_single_a13_gene_pane_t1

0xced3,	// (0x00019ec1) list_single_ai3_gene_pane_g1

0xcedc,	// (0x00019eca) list_single_ai3_gene_pane_g2

0x0001,

0xfcd5,	// (0x0001ccc3) list_single_ai3_gene_pane_g

0xcee4,	// (0x00019ed2) list_double_ai3_gene_pane_g1_ParamLimits

0xcee4,	// (0x00019ed2) list_double_ai3_gene_pane_g1

0xcef0,	// (0x00019ede) list_double_ai3_gene_pane_t1_ParamLimits

0xcef0,	// (0x00019ede) list_double_ai3_gene_pane_t1

0xcf0c,	// (0x00019efa) list_double_ai3_gene_pane_t2_ParamLimits

0xcf0c,	// (0x00019efa) list_double_ai3_gene_pane_t2

0xcf21,	// (0x00019f0f) list_double_ai3_gene_pane_t3_ParamLimits

0xcf21,	// (0x00019f0f) list_double_ai3_gene_pane_t3

0x0002,

0xfcda,	// (0x0001ccc8) list_double_ai3_gene_pane_t_ParamLimits

0xfcda,	// (0x0001ccc8) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xccb5,	// (0x00019ca3) aid_size_min_col_2

0xccbf,	// (0x00019cad) aid_size_min_msg_ParamLimits

0xccbf,	// (0x00019cad) aid_size_min_msg

0xbd2e,	// (0x00018d1c) fep_vkb_top_text_pane_g2_ParamLimits

0xbd2e,	// (0x00018d1c) fep_vkb_top_text_pane_g2

0x0001,

0xfb3a,	// (0x0001cb28) fep_vkb_top_text_pane_g_ParamLimits

0xfb3a,	// (0x0001cb28) fep_vkb_top_text_pane_g

0x51d0,	// (0x000121be) main_hc_apps_shell_pane

0xcf3e,	// (0x00019f2c) grid_hc_apps_pane_ParamLimits

0xcf3e,	// (0x00019f2c) grid_hc_apps_pane

0xcf4d,	// (0x00019f3b) list_hc_apps_pane

0xcf55,	// (0x00019f43) scroll_pane_cp37_ParamLimits

0xcf55,	// (0x00019f43) scroll_pane_cp37

0xcf61,	// (0x00019f4f) cell_hc_apps_pane_ParamLimits

0xcf61,	// (0x00019f4f) cell_hc_apps_pane

0xd019,	// (0x0001a007) cell_hc_apps_pane_g1_ParamLimits

0xd019,	// (0x0001a007) cell_hc_apps_pane_g1

0xd04a,	// (0x0001a038) cell_hc_apps_pane_g2_ParamLimits

0xd04a,	// (0x0001a038) cell_hc_apps_pane_g2

0xd066,	// (0x0001a054) cell_hc_apps_pane_g3_ParamLimits

0xd066,	// (0x0001a054) cell_hc_apps_pane_g3

0x0002,

0xfce1,	// (0x0001cccf) cell_hc_apps_pane_g_ParamLimits

0xfce1,	// (0x0001cccf) cell_hc_apps_pane_g

0xd088,	// (0x0001a076) cell_hc_apps_pane_t1_ParamLimits

0xd088,	// (0x0001a076) cell_hc_apps_pane_t1

0x371c,	// (0x0001070a) grid_highlight_pane_cp10_ParamLimits

0x371c,	// (0x0001070a) grid_highlight_pane_cp10

0xd0c8,	// (0x0001a0b6) list_single_hc_apps_pane_ParamLimits

0xd0c8,	// (0x0001a0b6) list_single_hc_apps_pane

0xd107,	// (0x0001a0f5) list_single_hc_apps_pane_g1

0xd120,	// (0x0001a10e) list_single_hc_apps_pane_g2

0x0001,

0xfce8,	// (0x0001ccd6) list_single_hc_apps_pane_g

0xd139,	// (0x0001a127) list_single_hc_apps_pane_g2_copy1

0xd155,	// (0x0001a143) list_single_hc_apps_pane_t1

0x3546,	// (0x00010534) bg_set_opt_pane_cp_ParamLimits

0x5443,	// (0x00012431) setting_slider_pane_t1_ParamLimits

0x545c,	// (0x0001244a) setting_slider_pane_t2_ParamLimits

0x5476,	// (0x00012464) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0001c54c) setting_slider_pane_t_ParamLimits

0x548e,	// (0x0001247c) slider_set_pane_ParamLimits

0x59bf,	// (0x000129ad) control_pane_g5_ParamLimits

0x59bf,	// (0x000129ad) control_pane_g5

0xa2f6,	// (0x000172e4) slider_set_pane_g1_ParamLimits

0x64b7,	// (0x000134a5) slider_set_pane_g2_ParamLimits

0x64c3,	// (0x000134b1) slider_set_pane_g3_ParamLimits

0x64d7,	// (0x000134c5) slider_set_pane_g4_ParamLimits

0x64ef,	// (0x000134dd) slider_set_pane_g5_ParamLimits

0x64c3,	// (0x000134b1) slider_set_pane_g6_ParamLimits

0x6505,	// (0x000134f3) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0001c94d) slider_set_pane_g_ParamLimits

0x8466,	// (0x00015454) navi_icon_text_pane_ParamLimits

0x8967,	// (0x00015955) aid_fill_nsta_2_ParamLimits

0x89a8,	// (0x00015996) aid_touch_tab_arrow_left_ParamLimits

0x89b4,	// (0x000159a2) aid_touch_tab_arrow_right_ParamLimits

0x8a20,	// (0x00015a0e) clock_nsta_pane_ParamLimits

0x9db7,	// (0x00016da5) navi_icon_pane_g1_ParamLimits

0x9dc3,	// (0x00016db1) navi_text_pane_t1_ParamLimits

0xb52a,	// (0x00018518) navi_icon_text_pane_g1_ParamLimits

0xb536,	// (0x00018524) navi_icon_text_pane_t1_ParamLimits

0xd107,	// (0x0001a0f5) list_single_hc_apps_pane_g1_ParamLimits

0xd120,	// (0x0001a10e) list_single_hc_apps_pane_g2_ParamLimits

0xfce8,	// (0x0001ccd6) list_single_hc_apps_pane_g_ParamLimits

0xd139,	// (0x0001a127) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd155,	// (0x0001a143) list_single_hc_apps_pane_t1_ParamLimits

0x5345,	// (0x00012333) popup_toolbar2_fixed_window_ParamLimits

0x5345,	// (0x00012333) popup_toolbar2_fixed_window

0x6040,	// (0x0001302e) popup_toolbar2_float_window

0x3309,	// (0x000102f7) bg_popup_sub_pane_cp27

0xd183,	// (0x0001a171) grid_toolbar2_float_pane

0x3309,	// (0x000102f7) bg_popup_sub_pane_cp26

0xd183,	// (0x0001a171) grid_toolbar2_fixed_pane

0xd18b,	// (0x0001a179) cell_toolbar2_fixed_pane_ParamLimits

0xd18b,	// (0x0001a179) cell_toolbar2_fixed_pane

0xd19b,	// (0x0001a189) cell_toolbar2_fixed_pane_g1

0xd1a4,	// (0x0001a192) toolbar2_fixed_button_pane

0x8e73,	// (0x00015e61) toolbar2_fixed_button_pane_g1

0x8e83,	// (0x00015e71) toolbar2_fixed_button_pane_g2

0x8e7b,	// (0x00015e69) toolbar2_fixed_button_pane_g3

0x8e93,	// (0x00015e81) toolbar2_fixed_button_pane_g4

0x8e8b,	// (0x00015e79) toolbar2_fixed_button_pane_g5

0x8e9b,	// (0x00015e89) toolbar2_fixed_button_pane_g6

0x8ea3,	// (0x00015e91) toolbar2_fixed_button_pane_g7

0x8eb3,	// (0x00015ea1) toolbar2_fixed_button_pane_g8

0x8eab,	// (0x00015e99) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0001c84f) toolbar2_fixed_button_pane_g

0xd1ac,	// (0x0001a19a) cell_toolbar2_float_pane_ParamLimits

0xd1ac,	// (0x0001a19a) cell_toolbar2_float_pane

0xd1bd,	// (0x0001a1ab) cell_toolbar2_float_pane_g1

0xd1a4,	// (0x0001a192) toolbar2_fixed_button_pane_cp

0xba8a,	// (0x00018a78) fep_vkb_accented_list_pane_ParamLimits

0xba8a,	// (0x00018a78) fep_vkb_accented_list_pane

0x6890,	// (0x0001387e) bg_popup_fep_shadow_pane_g9

0x85de,	// (0x000155cc) bg_popup_fep_shadow_pane_cp3

0x3e4f,	// (0x00010e3d) list_accented_list_pane

0xd1c6,	// (0x0001a1b4) list_single_accented_list_pane_ParamLimits

0xd1c6,	// (0x0001a1b4) list_single_accented_list_pane

0x85de,	// (0x000155cc) list_highlight_pane_cp10

0xd1d7,	// (0x0001a1c5) list_single_accented_list_pane_t1

0x5f86,	// (0x00012f74) popup_slider_window_ParamLimits

0x5f86,	// (0x00012f74) popup_slider_window

0xccac,	// (0x00019c9a) aid_indentation_list_msg

0xd2a7,	// (0x0001a295) bg_popup_window_pane_cp19

0xd313,	// (0x0001a301) popup_slider_window_g1

0xd32f,	// (0x0001a31d) popup_slider_window_g2

0xd34b,	// (0x0001a339) popup_slider_window_g3

0x0005,

0xfced,	// (0x0001ccdb) popup_slider_window_g

0xd3b1,	// (0x0001a39f) popup_slider_window_t1

0xd425,	// (0x0001a413) small_volume_slider_vertical_pane

0xb96b,	// (0x00018959) small_volume_slider_vertical_pane_g1

0xb96b,	// (0x00018959) small_volume_slider_vertical_pane_g2

0xd441,	// (0x0001a42f) small_volume_slider_vertical_pane_g3

0x0002,

0xfcff,	// (0x0001cced) small_volume_slider_vertical_pane_g

0x50f3,	// (0x000120e1) area_side_right_pane_ParamLimits

0x50f3,	// (0x000120e1) area_side_right_pane

0x6a7f,	// (0x00013a6d) aid_size_side_button_ParamLimits

0x6a7f,	// (0x00013a6d) aid_size_side_button

0x6a93,	// (0x00013a81) grid_sctrl_middle_pane_ParamLimits

0x6a93,	// (0x00013a81) grid_sctrl_middle_pane

0x6ab2,	// (0x00013aa0) sctrl_sk_bottom_pane

0x6ac3,	// (0x00013ab1) sctrl_sk_top_pane

0x6ad5,	// (0x00013ac3) aid_touch_sctrl_top

0x6ae2,	// (0x00013ad0) bg_sctrl_sk_pane_ParamLimits

0x6ae2,	// (0x00013ad0) bg_sctrl_sk_pane

0x6af0,	// (0x00013ade) sctrl_sk_top_pane_g1

0x6afd,	// (0x00013aeb) sctrl_sk_top_pane_t1

0x6ad5,	// (0x00013ac3) aid_touch_sctrl_bottom

0x6ae2,	// (0x00013ad0) bg_sctrl_sk_pane_cp_ParamLimits

0x6ae2,	// (0x00013ad0) bg_sctrl_sk_pane_cp

0x6b18,	// (0x00013b06) sctrl_sk_bottom_pane_g1

0x6afd,	// (0x00013aeb) sctrl_sk_bottom_pane_t1

0x6b21,	// (0x00013b0f) cell_sctrl_middle_pane_ParamLimits

0x6b21,	// (0x00013b0f) cell_sctrl_middle_pane

0x6b3e,	// (0x00013b2c) aid_touch_sctrl_middle_ParamLimits

0x6b3e,	// (0x00013b2c) aid_touch_sctrl_middle

0x6b50,	// (0x00013b3e) bg_sctrl_middle_pane_ParamLimits

0x6b50,	// (0x00013b3e) bg_sctrl_middle_pane

0x68b0,	// (0x0001389e) cell_sctrl_middle_pane_g1_ParamLimits

0x68b0,	// (0x0001389e) cell_sctrl_middle_pane_g1

0x6b5e,	// (0x00013b4c) cell_sctrl_middle_pane_g2_ParamLimits

0x6b5e,	// (0x00013b4c) cell_sctrl_middle_pane_g2

0x0001,

0xfd0b,	// (0x0001ccf9) cell_sctrl_middle_pane_g_ParamLimits

0xfd0b,	// (0x0001ccf9) cell_sctrl_middle_pane_g

0x8e73,	// (0x00015e61) bg_sctrl_middle_pane_g1

0x8e7b,	// (0x00015e69) bg_sctrl_middle_pane_g2

0x8e83,	// (0x00015e71) bg_sctrl_middle_pane_g3

0x8e8b,	// (0x00015e79) bg_sctrl_middle_pane_g4

0x8e93,	// (0x00015e81) bg_sctrl_middle_pane_g5

0x8e9b,	// (0x00015e89) bg_sctrl_middle_pane_g6

0x8ea3,	// (0x00015e91) bg_sctrl_middle_pane_g7

0x8eab,	// (0x00015e99) bg_sctrl_middle_pane_g8

0x0007,

0xfd10,	// (0x0001ccfe) bg_sctrl_middle_pane_g

0x8eb3,	// (0x00015ea1) bg_sctrl_middle_pane_g8_copy1

0x8e73,	// (0x00015e61) bg_sctrl_sk_pane_g1

0x8e83,	// (0x00015e71) bg_sctrl_sk_pane_g2

0x8e7b,	// (0x00015e69) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0001c84f) bg_sctrl_sk_pane_g

0x3b60,	// (0x00010b4e) aid_size_touch_scroll_bar

0x8e93,	// (0x00015e81) bg_sctrl_sk_pane_g4

0x8e8b,	// (0x00015e79) bg_sctrl_sk_pane_g5

0x8e9b,	// (0x00015e89) bg_sctrl_sk_pane_g6

0x8ea3,	// (0x00015e91) bg_sctrl_sk_pane_g7

0x8eb3,	// (0x00015ea1) bg_sctrl_sk_pane_g8

0x8eab,	// (0x00015e99) bg_sctrl_sk_pane_g9

0x5b9d,	// (0x00012b8b) popup_fep_china_hwr2_fs_candidate_window

0x5ba7,	// (0x00012b95) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5ba7,	// (0x00012b95) popup_fep_china_hwr2_fs_control_window

0x68b0,	// (0x0001389e) sctrl_sk_top_pane_g2

0x0001,

0xfd06,	// (0x0001ccf4) sctrl_sk_top_pane_g

0xd44a,	// (0x0001a438) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd44a,	// (0x0001a438) aid_fep_china_hwr2_fs_cell

0xd45d,	// (0x0001a44b) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd45d,	// (0x0001a44b) bg_popup_fep_shadow_pane_cp4

0xd476,	// (0x0001a464) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd476,	// (0x0001a464) bg_popup_fep_shadow_pane_cp5

0xd488,	// (0x0001a476) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd488,	// (0x0001a476) popup_fep_china_hwr2_fs_control_bar_grid

0xd498,	// (0x0001a486) popup_fep_china_hwr2_fs_control_funtion_grid

0xd4a0,	// (0x0001a48e) aid_fep_china_hwr2_fs_candi_cell

0x3309,	// (0x000102f7) bg_popup_fep_shadow_pane_cp6

0xd4aa,	// (0x0001a498) popup_fep_china_hwr2_fs_candidate_grid

0xd4b4,	// (0x0001a4a2) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd4b4,	// (0x0001a4a2) cell_fep_china_hwr2_fs_funtion_grid

0xb96b,	// (0x00018959) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd4cc,	// (0x0001a4ba) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd4cc,	// (0x0001a4ba) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd4da,	// (0x0001a4c8) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd4da,	// (0x0001a4c8) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd21,	// (0x0001cd0f) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd21,	// (0x0001cd0f) cell_fep_china_hwr2_fs_funtion_grid_g

0xd4f0,	// (0x0001a4de) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd4f0,	// (0x0001a4de) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd505,	// (0x0001a4f3) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd505,	// (0x0001a4f3) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd26,	// (0x0001cd14) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd26,	// (0x0001cd14) cell_fep_china_hwr2_fs_funtion_grid_t

0xd521,	// (0x0001a50f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd529,	// (0x0001a517) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd531,	// (0x0001a51f) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2b,	// (0x0001cd19) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd539,	// (0x0001a527) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd539,	// (0x0001a527) cell_fep_china_hwr2_fs_candidate_grid

0xd558,	// (0x0001a546) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd560,	// (0x0001a54e) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb96b,	// (0x00018959) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb96b,	// (0x00018959) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3f,	// (0x0001cb2d) cell_fep_china_hwr2_fs_candidate_grid_g

0xd568,	// (0x0001a556) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8a2d,	// (0x00015a1b) clock_nsta_pane_cp_24_ParamLimits

0x8a2d,	// (0x00015a1b) clock_nsta_pane_cp_24

0x8aad,	// (0x00015a9b) indicator_nsta_pane_cp_24_ParamLimits

0x8aad,	// (0x00015a9b) indicator_nsta_pane_cp_24

0x9c33,	// (0x00016c21) heading_pane_g1

0x0001,

0xf8c6,	// (0x0001c8b4) heading_pane_g

0xa773,	// (0x00017761) grid_sct_catagory_button_pane

0xa7a5,	// (0x00017793) scroll_pane_cp5_ParamLimits

0xb578,	// (0x00018566) button_value_adjust_pane_cp5_ParamLimits

0xb578,	// (0x00018566) button_value_adjust_pane_cp5

0xb67e,	// (0x0001866c) form2_midp_time_pane_ParamLimits

0xd576,	// (0x0001a564) cell_sct_catagory_button_pane_ParamLimits

0xd576,	// (0x0001a564) cell_sct_catagory_button_pane

0xb930,	// (0x0001891e) bg_button_pane_cp01_ParamLimits

0xb930,	// (0x0001891e) bg_button_pane_cp01

0xb96b,	// (0x00018959) cell_sct_catagory_button_pane_g1

0x5fc7,	// (0x00012fb5) popup_tb_extension_window

0xd588,	// (0x0001a576) aid_size_cell_ext_ParamLimits

0xd588,	// (0x0001a576) aid_size_cell_ext

0x371c,	// (0x0001070a) bg_tb_trans_pane_cp1_ParamLimits

0x371c,	// (0x0001070a) bg_tb_trans_pane_cp1

0xd5a8,	// (0x0001a596) grid_tb_ext_pane_ParamLimits

0xd5a8,	// (0x0001a596) grid_tb_ext_pane

0xd5d6,	// (0x0001a5c4) cell_tb_ext_pane_ParamLimits

0xd5d6,	// (0x0001a5c4) cell_tb_ext_pane

0xd5ed,	// (0x0001a5db) cell_tb_ext_pane_g1_ParamLimits

0xd5ed,	// (0x0001a5db) cell_tb_ext_pane_g1

0xd60a,	// (0x0001a5f8) cell_tb_ext_pane_t1

0x371c,	// (0x0001070a) list_highlight_pane_cp11_ParamLimits

0x371c,	// (0x0001070a) list_highlight_pane_cp11

0x5364,	// (0x00012352) popup_uni_indicator_window_ParamLimits

0x5364,	// (0x00012352) popup_uni_indicator_window

0x3ca1,	// (0x00010c8f) bg_popup_sub_pane_cp14

0xd625,	// (0x0001a613) list_uniindi_pane

0xd631,	// (0x0001a61f) uniindi_top_pane

0x371c,	// (0x0001070a) bg_uniindi_top_pane

0xd652,	// (0x0001a640) uniindi_top_pane_g1

0xd668,	// (0x0001a656) uniindi_top_pane_g2

0x0003,

0xfd32,	// (0x0001cd20) uniindi_top_pane_g

0xd692,	// (0x0001a680) uniindi_top_pane_t1

0xd6be,	// (0x0001a6ac) list_single_uniindi_pane_ParamLimits

0xd6be,	// (0x0001a6ac) list_single_uniindi_pane

0xb96b,	// (0x00018959) bg_uniindi_top_pane_g1

0xd6d0,	// (0x0001a6be) list_single_uniindi_pane_g1

0xd6e3,	// (0x0001a6d1) list_single_uniindi_pane_t1

0x51d0,	// (0x000121be) control_bg_pane

0xd708,	// (0x0001a6f6) bg_sctrl_sk_pane_cp1

0xd711,	// (0x0001a6ff) bg_sctrl_sk_pane_cp2

0xd71a,	// (0x0001a708) control_bg_pane_g1

0xd723,	// (0x0001a711) control_bg_pane_g2

0x0001,

0xfd3b,	// (0x0001cd29) control_bg_pane_g

0xb3c1,	// (0x000183af) cell_indicator_nsta_pane_g1_ParamLimits

0xb3cf,	// (0x000183bd) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa3,	// (0x0001ca91) cell_indicator_nsta_pane_g_ParamLimits

0xb70b,	// (0x000186f9) form2_midp_time_pane_t1_ParamLimits

0x5afb,	// (0x00012ae9) main_idle_act4_pane_ParamLimits

0x5afb,	// (0x00012ae9) main_idle_act4_pane

0x5fc7,	// (0x00012fb5) popup_tb_extension_window_ParamLimits

0xd5c8,	// (0x0001a5b6) tb_ext_find_pane_ParamLimits

0xd5c8,	// (0x0001a5b6) tb_ext_find_pane

0xd72c,	// (0x0001a71a) ai_gene_pane_1_cp1

0x8728,	// (0x00015716) ai_gene_pane_2_cp1

0xd734,	// (0x0001a722) list_single_idle_plugin_calendar_pane

0xd73d,	// (0x0001a72b) list_single_idle_plugin_notification_pane

0xd746,	// (0x0001a734) list_single_idle_plugin_player_pane

0xd74f,	// (0x0001a73d) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd74f,	// (0x0001a73d) list_single_idle_plugin_shortcut_pane

0xd771,	// (0x0001a75f) main_idle_act4_pane_t1

0xd783,	// (0x0001a771) main_idle_act4_pane_t2

0x0001,

0xfd40,	// (0x0001cd2e) main_idle_act4_pane_t

0xd795,	// (0x0001a783) middle_sk_idle_act4_pane_ParamLimits

0xd795,	// (0x0001a783) middle_sk_idle_act4_pane

0xd7ab,	// (0x0001a799) popup_clock_digital_analogue_window_cp2

0xd7c5,	// (0x0001a7b3) shortcut_wheel_idle_act4_pane_ParamLimits

0xd7c5,	// (0x0001a7b3) shortcut_wheel_idle_act4_pane

0xb96b,	// (0x00018959) shortcut_wheel_idle_act4_pane_g1

0xb96b,	// (0x00018959) shortcut_wheel_idle_act4_pane_g2

0xb96b,	// (0x00018959) shortcut_wheel_idle_act4_pane_g3

0xb96b,	// (0x00018959) shortcut_wheel_idle_act4_pane_g4

0xb96b,	// (0x00018959) shortcut_wheel_idle_act4_pane_g5

0xd7d9,	// (0x0001a7c7) shortcut_wheel_idle_act4_pane_g6

0xd7e1,	// (0x0001a7cf) shortcut_wheel_idle_act4_pane_g7

0xd7e9,	// (0x0001a7d7) shortcut_wheel_idle_act4_pane_g8

0xd7f1,	// (0x0001a7df) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd45,	// (0x0001cd33) shortcut_wheel_idle_act4_pane_g

0xbbce,	// (0x00018bbc) middle_sk_idle_act4_pane_g1_ParamLimits

0xbbce,	// (0x00018bbc) middle_sk_idle_act4_pane_g1

0xd855,	// (0x0001a843) middle_sk_idle_act4_pane_g2_ParamLimits

0xd855,	// (0x0001a843) middle_sk_idle_act4_pane_g2

0x0001,

0xfd68,	// (0x0001cd56) middle_sk_idle_act4_pane_g_ParamLimits

0xfd68,	// (0x0001cd56) middle_sk_idle_act4_pane_g

0xd861,	// (0x0001a84f) middle_sk_idle_act4_pane_t1_ParamLimits

0xd861,	// (0x0001a84f) middle_sk_idle_act4_pane_t1

0xd87e,	// (0x0001a86c) grid_ai_shortcut_pane_ParamLimits

0xd87e,	// (0x0001a86c) grid_ai_shortcut_pane

0xd897,	// (0x0001a885) list_highlight_pane_cp16_ParamLimits

0xd897,	// (0x0001a885) list_highlight_pane_cp16

0xd8a4,	// (0x0001a892) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd8a4,	// (0x0001a892) list_single_idle_plugin_shortcut_pane_g1

0xd8b0,	// (0x0001a89e) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd8b0,	// (0x0001a89e) list_single_idle_plugin_shortcut_pane_g2

0xd8ca,	// (0x0001a8b8) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd8ca,	// (0x0001a8b8) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6d,	// (0x0001cd5b) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6d,	// (0x0001cd5b) list_single_idle_plugin_shortcut_pane_g

0xd8dd,	// (0x0001a8cb) cell_ai_shortcut_pane_ParamLimits

0xd8dd,	// (0x0001a8cb) cell_ai_shortcut_pane

0xd900,	// (0x0001a8ee) cell_ai_shortcut_pane_g1_ParamLimits

0xd900,	// (0x0001a8ee) cell_ai_shortcut_pane_g1

0xd72c,	// (0x0001a71a) ai_gene_pane_1_cp2

0xd922,	// (0x0001a910) ai_gene_pane_2_cp2

0xd92a,	// (0x0001a918) list_highlight_pane_cp15

0xd933,	// (0x0001a921) list_single_idle_plugin_calendar_pane_g1

0xd92a,	// (0x0001a918) list_highlight_pane_cp17

0xd93b,	// (0x0001a929) list_single_idle_plugin_calendar_pane_g1_copy1

0xd943,	// (0x0001a931) list_single_idle_plugin_player_pane_g1

0xa9da,	// (0x000179c8) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd74,	// (0x0001cd62) list_single_idle_plugin_player_pane_g

0xd94b,	// (0x0001a939) list_single_idle_plugin_player_pane_t1

0xd959,	// (0x0001a947) list_single_idle_plugin_player_pane_t2

0xd967,	// (0x0001a955) list_single_idle_plugin_player_pane_t3

0xd975,	// (0x0001a963) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd79,	// (0x0001cd67) list_single_idle_plugin_player_pane_t

0xd983,	// (0x0001a971) wait_bar_pane_cp15

0xd98b,	// (0x0001a979) grid_ai_notification_pane

0xa9da,	// (0x000179c8) list_single_idle_plugin_notification_pane_g1

0xd994,	// (0x0001a982) cell_ai_notification_pane_ParamLimits

0xd994,	// (0x0001a982) cell_ai_notification_pane

0xd9a1,	// (0x0001a98f) cell_ai_notification_pane_g1

0xd9a9,	// (0x0001a997) cell_ai_notification_pane_t1

0xd9b7,	// (0x0001a9a5) tb_ext_find_button_pane

0xd9bf,	// (0x0001a9ad) tb_ext_find_pane_g1

0xd9c7,	// (0x0001a9b5) tb_ext_find_pane_t1

0x43d6,	// (0x000113c4) tb_ext_find_button_pane_g1

0xd9d5,	// (0x0001a9c3) tb_ext_find_button_pane_g2

0x0001,

0xfd82,	// (0x0001cd70) tb_ext_find_button_pane_g

0xd771,	// (0x0001a75f) main_idle_act4_pane_t1_ParamLimits

0xd783,	// (0x0001a771) main_idle_act4_pane_t2_ParamLimits

0xfd40,	// (0x0001cd2e) main_idle_act4_pane_t_ParamLimits

0xd7ab,	// (0x0001a799) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd7b9,	// (0x0001a7a7) sat_plugin_idle_act4_pane_ParamLimits

0xd7b9,	// (0x0001a7a7) sat_plugin_idle_act4_pane

0xd9de,	// (0x0001a9cc) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd9de,	// (0x0001a9cc) sat_plugin_idle_act4_pane_t1

0xd9f1,	// (0x0001a9df) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd9f1,	// (0x0001a9df) sat_plugin_idle_act4_pane_t2

0xda04,	// (0x0001a9f2) sat_plugin_idle_act4_pane_t3_ParamLimits

0xda04,	// (0x0001a9f2) sat_plugin_idle_act4_pane_t3

0xda17,	// (0x0001aa05) sat_plugin_idle_act4_pane_t4_ParamLimits

0xda17,	// (0x0001aa05) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd87,	// (0x0001cd75) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd87,	// (0x0001cd75) sat_plugin_idle_act4_pane_t

0x5295,	// (0x00012283) popup_battery_window_ParamLimits

0x5295,	// (0x00012283) popup_battery_window

0x371c,	// (0x0001070a) bg_popup_sub_pane_cp25_ParamLimits

0x371c,	// (0x0001070a) bg_popup_sub_pane_cp25

0xda2a,	// (0x0001aa18) popup_battery_window_g1_ParamLimits

0xda2a,	// (0x0001aa18) popup_battery_window_g1

0xda36,	// (0x0001aa24) popup_battery_window_t1_ParamLimits

0xda36,	// (0x0001aa24) popup_battery_window_t1

0xda48,	// (0x0001aa36) popup_battery_window_t2_ParamLimits

0xda48,	// (0x0001aa36) popup_battery_window_t2

0x0001,

0xfd90,	// (0x0001cd7e) popup_battery_window_t_ParamLimits

0xfd90,	// (0x0001cd7e) popup_battery_window_t

0x85f2,	// (0x000155e0) midp_canvas_pane_ParamLimits

0x866a,	// (0x00015658) midp_keypad_pane_ParamLimits

0x866a,	// (0x00015658) midp_keypad_pane

0x890d,	// (0x000158fb) main_midp_pane_ParamLimits

0xb42b,	// (0x00018419) signal_pane_g2_cp_ParamLimits

0xda65,	// (0x0001aa53) aid_size_cell_midp_keypad_ParamLimits

0xda65,	// (0x0001aa53) aid_size_cell_midp_keypad

0xda7f,	// (0x0001aa6d) midp_keyp_game_grid_pane_ParamLimits

0xda7f,	// (0x0001aa6d) midp_keyp_game_grid_pane

0xda9f,	// (0x0001aa8d) midp_keyp_rocker_pane_ParamLimits

0xda9f,	// (0x0001aa8d) midp_keyp_rocker_pane

0xdace,	// (0x0001aabc) midp_keyp_sk_left_pane_ParamLimits

0xdace,	// (0x0001aabc) midp_keyp_sk_left_pane

0xdb2a,	// (0x0001ab18) midp_keyp_sk_right_pane_ParamLimits

0xdb2a,	// (0x0001ab18) midp_keyp_sk_right_pane

0x3309,	// (0x000102f7) bg_button_pane_cp03

0xdb86,	// (0x0001ab74) midp_keyp_sk_left_pane_g1

0x3309,	// (0x000102f7) bg_button_pane_cp04

0xdb86,	// (0x0001ab74) midp_keyp_sk_right_pane_g1

0xb96b,	// (0x00018959) midp_keyp_rocker_pane_g1

0xdb8e,	// (0x0001ab7c) keyp_game_cell_pane_ParamLimits

0xdb8e,	// (0x0001ab7c) keyp_game_cell_pane

0x3309,	// (0x000102f7) bg_button_pane_cp02

0xdba1,	// (0x0001ab8f) keyp_game_cell_pane_g1

0x52df,	// (0x000122cd) popup_fep_vkb2_window_ParamLimits

0x52df,	// (0x000122cd) popup_fep_vkb2_window

0x6b7c,	// (0x00013b6a) aid_size_cell_vkb2_ParamLimits

0x6b7c,	// (0x00013b6a) aid_size_cell_vkb2

0x6bd0,	// (0x00013bbe) popup_fep_vkb2_window_g1_ParamLimits

0x6bd0,	// (0x00013bbe) popup_fep_vkb2_window_g1

0x6c18,	// (0x00013c06) vkb2_area_bottom_pane_ParamLimits

0x6c18,	// (0x00013c06) vkb2_area_bottom_pane

0x6c6c,	// (0x00013c5a) vkb2_area_keypad_pane_ParamLimits

0x6c6c,	// (0x00013c5a) vkb2_area_keypad_pane

0x6cb2,	// (0x00013ca0) vkb2_area_top_pane_ParamLimits

0x6cb2,	// (0x00013ca0) vkb2_area_top_pane

0x6d2c,	// (0x00013d1a) vkb2_top_entry_pane_ParamLimits

0x6d2c,	// (0x00013d1a) vkb2_top_entry_pane

0x6d56,	// (0x00013d44) vkb2_top_grid_left_pane_ParamLimits

0x6d56,	// (0x00013d44) vkb2_top_grid_left_pane

0x6d74,	// (0x00013d62) vkb2_top_grid_right_pane_ParamLimits

0x6d74,	// (0x00013d62) vkb2_top_grid_right_pane

0x6d92,	// (0x00013d80) vkb2_cell_keypad_pane_ParamLimits

0x6d92,	// (0x00013d80) vkb2_cell_keypad_pane

0x6e63,	// (0x00013e51) vkb2_area_bottom_grid_pane_ParamLimits

0x6e63,	// (0x00013e51) vkb2_area_bottom_grid_pane

0x6e89,	// (0x00013e77) vkb2_area_bottom_pane_g1_ParamLimits

0x6e89,	// (0x00013e77) vkb2_area_bottom_pane_g1

0x6ead,	// (0x00013e9b) vkb2_area_bottom_pane_g2_ParamLimits

0x6ead,	// (0x00013e9b) vkb2_area_bottom_pane_g2

0x6edb,	// (0x00013ec9) vkb2_area_bottom_pane_g3_ParamLimits

0x6edb,	// (0x00013ec9) vkb2_area_bottom_pane_g3

0x0002,

0xfd95,	// (0x0001cd83) vkb2_area_bottom_pane_g_ParamLimits

0xfd95,	// (0x0001cd83) vkb2_area_bottom_pane_g

0x6f3c,	// (0x00013f2a) vkb2_top_cell_left_pane_ParamLimits

0x6f3c,	// (0x00013f2a) vkb2_top_cell_left_pane

0xdbb2,	// (0x0001aba0) vkb2_top_entry_pane_g1_ParamLimits

0xdbb2,	// (0x0001aba0) vkb2_top_entry_pane_g1

0xdbc0,	// (0x0001abae) vkb2_top_entry_pane_t1_ParamLimits

0xdbc0,	// (0x0001abae) vkb2_top_entry_pane_t1

0xdbf2,	// (0x0001abe0) vkb2_top_entry_pane_t2_ParamLimits

0xdbf2,	// (0x0001abe0) vkb2_top_entry_pane_t2

0xdc24,	// (0x0001ac12) vkb2_top_entry_pane_t3_ParamLimits

0xdc24,	// (0x0001ac12) vkb2_top_entry_pane_t3

0x0002,

0xfd9c,	// (0x0001cd8a) vkb2_top_entry_pane_t_ParamLimits

0xfd9c,	// (0x0001cd8a) vkb2_top_entry_pane_t

0x6f89,	// (0x00013f77) vkb2_top_grid_right_pane_g1_ParamLimits

0x6f89,	// (0x00013f77) vkb2_top_grid_right_pane_g1

0x6f9f,	// (0x00013f8d) vkb2_top_grid_right_pane_g2_ParamLimits

0x6f9f,	// (0x00013f8d) vkb2_top_grid_right_pane_g2

0x6fb7,	// (0x00013fa5) vkb2_top_grid_right_pane_g3_ParamLimits

0x6fb7,	// (0x00013fa5) vkb2_top_grid_right_pane_g3

0x6fcf,	// (0x00013fbd) vkb2_top_grid_right_pane_g4_ParamLimits

0x6fcf,	// (0x00013fbd) vkb2_top_grid_right_pane_g4

0x0003,

0xfda3,	// (0x0001cd91) vkb2_top_grid_right_pane_g_ParamLimits

0xfda3,	// (0x0001cd91) vkb2_top_grid_right_pane_g

0x6fe5,	// (0x00013fd3) vkb2_top_cell_left_pane_g1

0x6ffc,	// (0x00013fea) vkb2_cell_keypad_pane_g1_ParamLimits

0x6ffc,	// (0x00013fea) vkb2_cell_keypad_pane_g1

0xdc48,	// (0x0001ac36) vkb2_cell_keypad_pane_t1_ParamLimits

0xdc48,	// (0x0001ac36) vkb2_cell_keypad_pane_t1

0x700a,	// (0x00013ff8) vkb2_cell_bottom_grid_pane_ParamLimits

0x700a,	// (0x00013ff8) vkb2_cell_bottom_grid_pane

0x7043,	// (0x00014031) vkb2_cell_bottom_grid_pane_g1

0xd7f9,	// (0x0001a7e7) aid_call2_pane_cp02

0xd801,	// (0x0001a7ef) aid_call_pane_cp02

0xd809,	// (0x0001a7f7) clock_digital_number_pane_cp10

0xd811,	// (0x0001a7ff) clock_digital_number_pane_cp11

0xd819,	// (0x0001a807) clock_digital_number_pane_cp12

0xd821,	// (0x0001a80f) clock_digital_number_pane_cp13

0xd829,	// (0x0001a817) clock_digital_separator_pane_cp10

0x43d6,	// (0x000113c4) popup_clock_digital_analogue_window_cp2_g1

0x43d6,	// (0x000113c4) popup_clock_digital_analogue_window_cp2_g2

0xd831,	// (0x0001a81f) popup_clock_digital_analogue_window_cp2_g3

0x43d6,	// (0x000113c4) popup_clock_digital_analogue_window_cp2_g4

0xd831,	// (0x0001a81f) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd58,	// (0x0001cd46) popup_clock_digital_analogue_window_cp2_g

0xd839,	// (0x0001a827) popup_clock_digital_analogue_window_cp2_t1

0xd847,	// (0x0001a835) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd63,	// (0x0001cd51) popup_clock_digital_analogue_window_cp2_t

0xb96b,	// (0x00018959) clock_digital_number_pane_cp10_g1

0xb96b,	// (0x00018959) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3f,	// (0x0001cb2d) clock_digital_number_pane_cp10_g

0xb96b,	// (0x00018959) clock_digital_separator_pane_cp10_g1

0xb96b,	// (0x00018959) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3f,	// (0x0001cb2d) clock_digital_separator_pane_cp10_g

0xd674,	// (0x0001a662) uniindi_top_pane_g3

0xd685,	// (0x0001a673) uniindi_top_pane_g4

0x6e1d,	// (0x00013e0b) vkb2_row_keypad_pane_ParamLimits

0x6e1d,	// (0x00013e0b) vkb2_row_keypad_pane

0x705f,	// (0x0001404d) vkb2_cell_t_keypad_pane_ParamLimits

0x705f,	// (0x0001404d) vkb2_cell_t_keypad_pane

0x706f,	// (0x0001405d) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x706f,	// (0x0001405d) vkb2_cell_t_keypad_pane_cp08

0x7084,	// (0x00014072) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7084,	// (0x00014072) vkb2_cell_t_keypad_pane_cp09

0x7098,	// (0x00014086) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7098,	// (0x00014086) vkb2_cell_t_keypad_pane_cp01

0x70a9,	// (0x00014097) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x70a9,	// (0x00014097) vkb2_cell_t_keypad_pane_cp02

0x70ba,	// (0x000140a8) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x70ba,	// (0x000140a8) vkb2_cell_t_keypad_pane_cp03

0x70cb,	// (0x000140b9) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x70cb,	// (0x000140b9) vkb2_cell_t_keypad_pane_cp04

0x70dc,	// (0x000140ca) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x70dc,	// (0x000140ca) vkb2_cell_t_keypad_pane_cp05

0x70ed,	// (0x000140db) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x70ed,	// (0x000140db) vkb2_cell_t_keypad_pane_cp06

0x7100,	// (0x000140ee) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7100,	// (0x000140ee) vkb2_cell_t_keypad_pane_cp07

0x7115,	// (0x00014103) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7115,	// (0x00014103) vkb2_cell_t_keypad_pane_cp10

0x68b0,	// (0x0001389e) vkb2_cell_t_keypad_pane_g1

0xdc5f,	// (0x0001ac4d) vkb2_cell_t_keypad_pane_t1

0x51d0,	// (0x000121be) popup_grid_graphic2_window

0xdc71,	// (0x0001ac5f) aid_size_cell_graphic2_ParamLimits

0xdc71,	// (0x0001ac5f) aid_size_cell_graphic2

0xdca9,	// (0x0001ac97) bg_popup_window_pane_cp21_ParamLimits

0xdca9,	// (0x0001ac97) bg_popup_window_pane_cp21

0xdcb7,	// (0x0001aca5) graphic2_pages_pane_ParamLimits

0xdcb7,	// (0x0001aca5) graphic2_pages_pane

0xdcfd,	// (0x0001aceb) grid_graphic2_control_pane_ParamLimits

0xdcfd,	// (0x0001aceb) grid_graphic2_control_pane

0xdd3b,	// (0x0001ad29) grid_graphic2_pane_ParamLimits

0xdd3b,	// (0x0001ad29) grid_graphic2_pane

0xddb1,	// (0x0001ad9f) cell_graphic2_pane

0x51d0,	// (0x000121be) main_comp_mode_pane

0xce78,	// (0x00019e66) list_ai3_gene_pane_ParamLimits

0xd2a7,	// (0x0001a295) bg_popup_window_pane_cp19_ParamLimits

0xd2b3,	// (0x0001a2a1) bg_touch_area_indi_pane_ParamLimits

0xd2b3,	// (0x0001a2a1) bg_touch_area_indi_pane

0xd2c9,	// (0x0001a2b7) bg_touch_area_indi_pane_cp01_ParamLimits

0xd2c9,	// (0x0001a2b7) bg_touch_area_indi_pane_cp01

0xd2df,	// (0x0001a2cd) bg_touch_area_indi_pane_cp02_ParamLimits

0xd2df,	// (0x0001a2cd) bg_touch_area_indi_pane_cp02

0xd2f9,	// (0x0001a2e7) bg_touch_area_indi_pane_cp03_ParamLimits

0xd2f9,	// (0x0001a2e7) bg_touch_area_indi_pane_cp03

0xd313,	// (0x0001a301) popup_slider_window_g1_ParamLimits

0xd32f,	// (0x0001a31d) popup_slider_window_g2_ParamLimits

0xd34b,	// (0x0001a339) popup_slider_window_g3_ParamLimits

0xfced,	// (0x0001ccdb) popup_slider_window_g_ParamLimits

0xd3b1,	// (0x0001a39f) popup_slider_window_t1_ParamLimits

0xd425,	// (0x0001a413) small_volume_slider_vertical_pane_ParamLimits

0xddb1,	// (0x0001ad9f) cell_graphic2_pane_ParamLimits

0xde06,	// (0x0001adf4) bg_button_pane_cp10_ParamLimits

0xde06,	// (0x0001adf4) bg_button_pane_cp10

0xde1b,	// (0x0001ae09) bg_button_pane_cp11_ParamLimits

0xde1b,	// (0x0001ae09) bg_button_pane_cp11

0xde30,	// (0x0001ae1e) graphic2_pages_pane_g1_ParamLimits

0xde30,	// (0x0001ae1e) graphic2_pages_pane_g1

0xde4b,	// (0x0001ae39) graphic2_pages_pane_g2_ParamLimits

0xde4b,	// (0x0001ae39) graphic2_pages_pane_g2

0x0001,

0xfdb1,	// (0x0001cd9f) graphic2_pages_pane_g_ParamLimits

0xfdb1,	// (0x0001cd9f) graphic2_pages_pane_g

0xde63,	// (0x0001ae51) graphic2_pages_pane_t1_ParamLimits

0xde63,	// (0x0001ae51) graphic2_pages_pane_t1

0xde79,	// (0x0001ae67) cell_graphic2_control_pane_ParamLimits

0xde79,	// (0x0001ae67) cell_graphic2_control_pane

0xde99,	// (0x0001ae87) cell_graphic2_pane_g1_ParamLimits

0xde99,	// (0x0001ae87) cell_graphic2_pane_g1

0xdea6,	// (0x0001ae94) cell_graphic2_pane_g2_ParamLimits

0xdea6,	// (0x0001ae94) cell_graphic2_pane_g2

0xdeb3,	// (0x0001aea1) cell_graphic2_pane_g3_ParamLimits

0xdeb3,	// (0x0001aea1) cell_graphic2_pane_g3

0xdec0,	// (0x0001aeae) cell_graphic2_pane_g4_ParamLimits

0xdec0,	// (0x0001aeae) cell_graphic2_pane_g4

0xdecd,	// (0x0001aebb) cell_graphic2_pane_g5_ParamLimits

0xdecd,	// (0x0001aebb) cell_graphic2_pane_g5

0x0004,

0xfdb6,	// (0x0001cda4) cell_graphic2_pane_g_ParamLimits

0xfdb6,	// (0x0001cda4) cell_graphic2_pane_g

0xdee8,	// (0x0001aed6) cell_graphic2_pane_t1_ParamLimits

0xdee8,	// (0x0001aed6) cell_graphic2_pane_t1

0x8f97,	// (0x00015f85) grid_highlight_pane_cp11_ParamLimits

0x8f97,	// (0x00015f85) grid_highlight_pane_cp11

0x371c,	// (0x0001070a) bg_button_pane_cp05

0xdf1f,	// (0x0001af0d) cell_graphic2_control_pane_g1

0xb96b,	// (0x00018959) bg_touch_area_indi_pane_g1

0xdf47,	// (0x0001af35) aid_cmod_rocker_key_size

0xdf51,	// (0x0001af3f) aid_cmode_itu_key_size

0xdf5b,	// (0x0001af49) main_cmode_video_pane

0xdf65,	// (0x0001af53) main_comp_mode_itu_pane

0xdf71,	// (0x0001af5f) main_comp_mode_rocker_pane

0xdf7d,	// (0x0001af6b) cell_cmode_rocker_pane_ParamLimits

0xdf7d,	// (0x0001af6b) cell_cmode_rocker_pane

0xdf91,	// (0x0001af7f) cell_cmode_itu_pane_ParamLimits

0xdf91,	// (0x0001af7f) cell_cmode_itu_pane

0x3ca1,	// (0x00010c8f) bg_button_pane_cp06_ParamLimits

0x3ca1,	// (0x00010c8f) bg_button_pane_cp06

0xbbce,	// (0x00018bbc) cell_cmode_rocker_pane_g1_ParamLimits

0xbbce,	// (0x00018bbc) cell_cmode_rocker_pane_g1

0xd4cc,	// (0x0001a4ba) cell_cmode_rocker_pane_g2_ParamLimits

0xd4cc,	// (0x0001a4ba) cell_cmode_rocker_pane_g2

0x0001,

0xfdc6,	// (0x0001cdb4) cell_cmode_rocker_pane_g_ParamLimits

0xfdc6,	// (0x0001cdb4) cell_cmode_rocker_pane_g

0x3309,	// (0x000102f7) bg_button_pane_cp07

0xdfa8,	// (0x0001af96) cell_cmode_itu_pane_g1

0xdfb1,	// (0x0001af9f) cell_cmode_itu_pane_t1

0xdfbf,	// (0x0001afad) cell_cmode_itu_pane_t2

0x0001,

0xfdcb,	// (0x0001cdb9) cell_cmode_itu_pane_t

0xd6f8,	// (0x0001a6e6) aid_touch_ctrl_left

0xd700,	// (0x0001a6ee) aid_touch_ctrl_right

0x3309,	// (0x000102f7) compa_mode_pane

0xdfcd,	// (0x0001afbb) aid_cmod_rocker_key_size_cp

0xdfd7,	// (0x0001afc5) aid_cmode_itu_key_size_cp

0xdfe1,	// (0x0001afcf) compa_mode_pane_g1

0xdfe9,	// (0x0001afd7) compa_mode_pane_g2

0xdff1,	// (0x0001afdf) compa_mode_pane_g3

0x0002,

0xfdd0,	// (0x0001cdbe) compa_mode_pane_g

0xdff9,	// (0x0001afe7) main_comp_mode_itu_pane_cp

0xe001,	// (0x0001afef) main_comp_mode_rocker_pane_cp

0xe009,	// (0x0001aff7) cell_cmode_itu_pane_cp_ParamLimits

0xe009,	// (0x0001aff7) cell_cmode_itu_pane_cp

0xe01e,	// (0x0001b00c) cell_cmode_rocker_pane_cp_ParamLimits

0xe01e,	// (0x0001b00c) cell_cmode_rocker_pane_cp

0x3ca1,	// (0x00010c8f) bg_button_pane_cp06_cp_ParamLimits

0x3ca1,	// (0x00010c8f) bg_button_pane_cp06_cp

0xbbce,	// (0x00018bbc) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbbce,	// (0x00018bbc) cell_cmode_rocker_pane_g1_cp

0xb96b,	// (0x00018959) cell_cmode_rocker_pane_g2_cp

0x3309,	// (0x000102f7) bg_button_pane_cp07_cp

0xe030,	// (0x0001b01e) cell_cmode_itu_pane_g1_cp

0xe039,	// (0x0001b027) cell_cmode_itu_pane_t1_cp

0xe039,	// (0x0001b027) cell_cmode_itu_pane_t2_cp

0xa4b2,	// (0x000174a0) settings_code_pane_cp2

0x3546,	// (0x00010534) bg_popup_window_pane_cp3_ParamLimits

0x3930,	// (0x0001091e) heading_pane_cp3_ParamLimits

0x393c,	// (0x0001092a) listscroll_popup_graphic_pane_ParamLimits

0x6643,	// (0x00013631) fep_hwr_aid_pane_ParamLimits

0x6ad5,	// (0x00013ac3) aid_touch_sctrl_top_ParamLimits

0x6af0,	// (0x00013ade) sctrl_sk_top_pane_g1_ParamLimits

0x68b0,	// (0x0001389e) sctrl_sk_top_pane_g2_ParamLimits

0xfd06,	// (0x0001ccf4) sctrl_sk_top_pane_g_ParamLimits

0x6afd,	// (0x00013aeb) sctrl_sk_top_pane_t1_ParamLimits

0x6ad5,	// (0x00013ac3) aid_touch_sctrl_bottom_ParamLimits

0x6afd,	// (0x00013aeb) sctrl_sk_bottom_pane_t1_ParamLimits

0xd63e,	// (0x0001a62c) aid_area_touch_clock

0x6cf4,	// (0x00013ce2) aid_vkb2_area_top_pane_cell_ParamLimits

0x6cf4,	// (0x00013ce2) aid_vkb2_area_top_pane_cell

0x6e3f,	// (0x00013e2d) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6e3f,	// (0x00013e2d) aid_vkb2_area_bottom_pane_cell

0xdbaa,	// (0x0001ab98) popup_char_count_window

0xe047,	// (0x0001b035) popup_char_count_window_g1

0xe050,	// (0x0001b03e) popup_char_count_window_g2

0xe059,	// (0x0001b047) popup_char_count_window_g3

0x0002,

0xfdd7,	// (0x0001cdc5) popup_char_count_window_g

0xe062,	// (0x0001b050) popup_char_count_window_t1

0x6bae,	// (0x00013b9c) popup_fep_char_preview_window_ParamLimits

0x6bae,	// (0x00013b9c) popup_fep_char_preview_window

0x6d12,	// (0x00013d00) vkb2_top_candi_pane_ParamLimits

0x6d12,	// (0x00013d00) vkb2_top_candi_pane

0xe070,	// (0x0001b05e) cell_vkb2_top_candi_pane_ParamLimits

0xe070,	// (0x0001b05e) cell_vkb2_top_candi_pane

0x712a,	// (0x00014118) bg_popup_fep_char_preview_window_ParamLimits

0x712a,	// (0x00014118) bg_popup_fep_char_preview_window

0x7138,	// (0x00014126) popup_fep_char_preview_window_t1_ParamLimits

0x7138,	// (0x00014126) popup_fep_char_preview_window_t1

0xe0c1,	// (0x0001b0af) bg_popup_fep_char_preview_window_g1

0xe0c9,	// (0x0001b0b7) bg_popup_fep_char_preview_window_g2

0xe0d1,	// (0x0001b0bf) bg_popup_fep_char_preview_window_g3

0xe0d9,	// (0x0001b0c7) bg_popup_fep_char_preview_window_g4

0xe0e1,	// (0x0001b0cf) bg_popup_fep_char_preview_window_g5

0x7172,	// (0x00014160) bg_popup_fep_char_preview_window_g6

0xe0e9,	// (0x0001b0d7) bg_popup_fep_char_preview_window_g7

0xe0f1,	// (0x0001b0df) bg_popup_fep_char_preview_window_g8

0xe0f9,	// (0x0001b0e7) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdde,	// (0x0001cdcc) bg_popup_fep_char_preview_window_g

0x68b0,	// (0x0001389e) cell_vkb2_top_candi_pane_g1_ParamLimits

0x68b0,	// (0x0001389e) cell_vkb2_top_candi_pane_g1

0x68be,	// (0x000138ac) cell_vkb2_top_candi_pane_g2_ParamLimits

0x68be,	// (0x000138ac) cell_vkb2_top_candi_pane_g2

0xcd95,	// (0x00019d83) cell_vkb2_top_candi_pane_g3_ParamLimits

0xcd95,	// (0x00019d83) cell_vkb2_top_candi_pane_g3

0x717a,	// (0x00014168) cell_vkb2_top_candi_pane_g4_ParamLimits

0x717a,	// (0x00014168) cell_vkb2_top_candi_pane_g4

0xc292,	// (0x00019280) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc292,	// (0x00019280) cell_vkb2_top_candi_pane_g5

0x719b,	// (0x00014189) cell_vkb2_top_candi_pane_g6_ParamLimits

0x719b,	// (0x00014189) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf1,	// (0x0001cddf) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf1,	// (0x0001cddf) cell_vkb2_top_candi_pane_g

0x71a9,	// (0x00014197) cell_vkb2_top_candi_pane_t1

0x64a3,	// (0x00013491) aid_size_touch_slider_mark_ParamLimits

0x64a3,	// (0x00013491) aid_size_touch_slider_mark

0xdced,	// (0x0001acdb) grid_graphic2_catg_pane_ParamLimits

0xdced,	// (0x0001acdb) grid_graphic2_catg_pane

0xdd8b,	// (0x0001ad79) popup_grid_graphic2_window_t1_ParamLimits

0xdd8b,	// (0x0001ad79) popup_grid_graphic2_window_t1

0xdd9d,	// (0x0001ad8b) popup_grid_graphic2_window_t2_ParamLimits

0xdd9d,	// (0x0001ad8b) popup_grid_graphic2_window_t2

0x0001,

0xfdac,	// (0x0001cd9a) popup_grid_graphic2_window_t_ParamLimits

0xfdac,	// (0x0001cd9a) popup_grid_graphic2_window_t

0x371c,	// (0x0001070a) bg_button_pane_cp05_ParamLimits

0xdf1f,	// (0x0001af0d) cell_graphic2_control_pane_g1_ParamLimits

0xe101,	// (0x0001b0ef) cell_graphic2_catg_pane_ParamLimits

0xe101,	// (0x0001b0ef) cell_graphic2_catg_pane

0x3309,	// (0x000102f7) bg_button_pane_cp12

0xe113,	// (0x0001b101) cell_graphic2_catg_pane_g1

0xd60a,	// (0x0001a5f8) cell_tb_ext_pane_t1_ParamLimits

0x6f5c,	// (0x00013f4a) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6f5c,	// (0x00013f4a) vkb2_top_cell_right_narrow_pane

0x6f74,	// (0x00013f62) vkb2_top_cell_right_wide_pane_ParamLimits

0x6f74,	// (0x00013f62) vkb2_top_cell_right_wide_pane

0x6635,	// (0x00013623) bg_vkb2_func_pane_ParamLimits

0x6635,	// (0x00013623) bg_vkb2_func_pane

0x6fe5,	// (0x00013fd3) vkb2_top_cell_left_pane_g1_ParamLimits

0x6635,	// (0x00013623) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6635,	// (0x00013623) bg_vkb2_fuc_pane_cp03

0x7043,	// (0x00014031) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x8e7b,	// (0x00015e69) bg_vkb2_func_pane_g1

0x8e83,	// (0x00015e71) bg_vkb2_func_pane_g2

0x8e93,	// (0x00015e81) bg_vkb2_func_pane_g3

0x8e8b,	// (0x00015e79) bg_vkb2_func_pane_g4

0x8e9b,	// (0x00015e89) bg_vkb2_func_pane_g5

0x8ea3,	// (0x00015e91) bg_vkb2_func_pane_g6

0x8eab,	// (0x00015e99) bg_vkb2_func_pane_g7

0x8eb3,	// (0x00015ea1) bg_vkb2_func_pane_g8

0x8e73,	// (0x00015e61) bg_vkb2_func_pane_g9

0x0008,

0xfdfe,	// (0x0001cdec) bg_vkb2_func_pane_g

0x6635,	// (0x00013623) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6635,	// (0x00013623) bg_vkb2_fuc_pane_cp01

0x6fe5,	// (0x00013fd3) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6fe5,	// (0x00013fd3) vkb2_top_cell_right_wide_pane_g1

0x6635,	// (0x00013623) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6635,	// (0x00013623) bg_vkb2_fuc_pane_cp02

0x7043,	// (0x00014031) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7043,	// (0x00014031) vkb2_top_cell_right_narrow_pane_g1

0xd221,	// (0x0001a20f) aid_touch_area_decrease_ParamLimits

0xd221,	// (0x0001a20f) aid_touch_area_decrease

0xd245,	// (0x0001a233) aid_touch_area_increase_ParamLimits

0xd245,	// (0x0001a233) aid_touch_area_increase

0xd25d,	// (0x0001a24b) aid_touch_area_mute_ParamLimits

0xd25d,	// (0x0001a24b) aid_touch_area_mute

0xd279,	// (0x0001a267) aid_touch_area_slider_ParamLimits

0xd279,	// (0x0001a267) aid_touch_area_slider

0xd367,	// (0x0001a355) popup_slider_window_g4_ParamLimits

0xd367,	// (0x0001a355) popup_slider_window_g4

0xd37f,	// (0x0001a36d) popup_slider_window_g5_ParamLimits

0xd37f,	// (0x0001a36d) popup_slider_window_g5

0xd3a1,	// (0x0001a38f) popup_slider_window_g6_ParamLimits

0xd3a1,	// (0x0001a38f) popup_slider_window_g6

0xd3df,	// (0x0001a3cd) popup_slider_window_t2_ParamLimits

0xd3df,	// (0x0001a3cd) popup_slider_window_t2

0x0001,

0xfcfa,	// (0x0001cce8) popup_slider_window_t_ParamLimits

0xfcfa,	// (0x0001cce8) popup_slider_window_t

0xd3f7,	// (0x0001a3e5) slider_pane_ParamLimits

0xd3f7,	// (0x0001a3e5) slider_pane

0xe11c,	// (0x0001b10a) slider_pane_g1_ParamLimits

0xe11c,	// (0x0001b10a) slider_pane_g1

0xe130,	// (0x0001b11e) slider_pane_g2_ParamLimits

0xe130,	// (0x0001b11e) slider_pane_g2

0xe146,	// (0x0001b134) slider_pane_g3_ParamLimits

0xe146,	// (0x0001b134) slider_pane_g3

0x0003,

0xfe11,	// (0x0001cdff) slider_pane_g_ParamLimits

0xfe11,	// (0x0001cdff) slider_pane_g

0x6029,	// (0x00013017) popup_tb_float_extension_window_ParamLimits

0x6029,	// (0x00013017) popup_tb_float_extension_window

0xe172,	// (0x0001b160) aid_size_cell_tb_float_ext

0x3309,	// (0x000102f7) bg_popup_sub_window_cp28

0xe17e,	// (0x0001b16c) grid_tb_float_ext_pane

0xe18a,	// (0x0001b178) cell_tb_float_ext_pane_ParamLimits

0xe18a,	// (0x0001b178) cell_tb_float_ext_pane

0xe1a6,	// (0x0001b194) cell_tb_float_ext_pane_g1

0xe1af,	// (0x0001b19d) grid_highlight_pane_cp12

0x678a,	// (0x00013778) cell_last_hwr_side_pane_ParamLimits

0x678a,	// (0x00013778) cell_last_hwr_side_pane

0xb96b,	// (0x00018959) cell_last_hwr_side_pane_g1

0xe1b8,	// (0x0001b1a6) cell_last_hwr_side_pane_g2

0x0001,

0xfe1a,	// (0x0001ce08) cell_last_hwr_side_pane_g

0x6f0b,	// (0x00013ef9) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6f0b,	// (0x00013ef9) vkb2_area_bottom_space_btn_pane

0x68b0,	// (0x0001389e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdc5f,	// (0x0001ac4d) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x71a9,	// (0x00014197) cell_vkb2_top_candi_pane_t1_ParamLimits

0x71c7,	// (0x000141b5) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x71c7,	// (0x000141b5) vkb2_area_bottom_space_btn_pane_g1

0x7201,	// (0x000141ef) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7201,	// (0x000141ef) vkb2_area_bottom_space_btn_pane_g2

0x7237,	// (0x00014225) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7237,	// (0x00014225) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1f,	// (0x0001ce0d) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1f,	// (0x0001ce0d) vkb2_area_bottom_space_btn_pane_g

0x66fa,	// (0x000136e8) cel_fep_hwr_func_pane_ParamLimits

0x66fa,	// (0x000136e8) cel_fep_hwr_func_pane

0x6736,	// (0x00013724) cell_hwr_side_button_pane_ParamLimits

0x6736,	// (0x00013724) cell_hwr_side_button_pane

0xd63e,	// (0x0001a62c) aid_area_touch_clock_ParamLimits

0x371c,	// (0x0001070a) bg_uniindi_top_pane_ParamLimits

0xd652,	// (0x0001a640) uniindi_top_pane_g1_ParamLimits

0xd668,	// (0x0001a656) uniindi_top_pane_g2_ParamLimits

0xd674,	// (0x0001a662) uniindi_top_pane_g3_ParamLimits

0xd685,	// (0x0001a673) uniindi_top_pane_g4_ParamLimits

0xfd32,	// (0x0001cd20) uniindi_top_pane_g_ParamLimits

0xd692,	// (0x0001a680) uniindi_top_pane_t1_ParamLimits

0x371c,	// (0x0001070a) bg_vkb2_func_pane_cp01_ParamLimits

0x371c,	// (0x0001070a) bg_vkb2_func_pane_cp01

0xe1c1,	// (0x0001b1af) cel_fep_hwr_func_pane_g1_ParamLimits

0xe1c1,	// (0x0001b1af) cel_fep_hwr_func_pane_g1

0x371c,	// (0x0001070a) bg_vkb2_func_pane_cp02_ParamLimits

0x371c,	// (0x0001070a) bg_vkb2_func_pane_cp02

0xe1c1,	// (0x0001b1af) cell_hwr_side_button_pane_g1_ParamLimits

0xe1c1,	// (0x0001b1af) cell_hwr_side_button_pane_g1

0x8cca,	// (0x00015cb8) status_pane_g4_ParamLimits

0x8cca,	// (0x00015cb8) status_pane_g4

0x8ce4,	// (0x00015cd2) status_pane_t1

0xb71e,	// (0x0001870c) form2_midp_gauge_slider_cont_pane

0xb726,	// (0x00018714) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb738,	// (0x00018726) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb74a,	// (0x00018738) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf2,	// (0x0001cae0) form2_midp_gauge_slider_pane_t_ParamLimits

0xb75c,	// (0x0001874a) form2_midp_slider_pane_ParamLimits

0x6b6e,	// (0x00013b5c) aid_size_cell_func_vkb2_ParamLimits

0x6b6e,	// (0x00013b5c) aid_size_cell_func_vkb2

0xe15e,	// (0x0001b14c) slider_pane_g4_ParamLimits

0xe15e,	// (0x0001b14c) slider_pane_g4

0x7281,	// (0x0001426f) form2_midp_gauge_slider_pane_t2_cp01

0x728f,	// (0x0001427d) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x728f,	// (0x0001427d) form2_midp_gauge_slider_pane_t3_cp01

0x72ac,	// (0x0001429a) form2_midp_slider_pane_cp01

0x3309,	// (0x000102f7) navi_smil_pane

0xe1fa,	// (0x0001b1e8) navi_smil_pane_g1

0xe202,	// (0x0001b1f0) navi_smil_pane_t1

0xe1cf,	// (0x0001b1bd) form2_midp_slider_pane_g1

0xe1d8,	// (0x0001b1c6) form2_midp_slider_pane_g2

0xe1e0,	// (0x0001b1ce) form2_midp_slider_pane_g3

0xe1cf,	// (0x0001b1bd) form2_midp_slider_pane_g4

0xe1e8,	// (0x0001b1d6) form2_midp_slider_pane_g5

0x0004,

0xfe28,	// (0x0001ce16) form2_midp_slider_pane_g

0x7271,	// (0x0001425f) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7271,	// (0x0001425f) vkb2_area_bottom_space_btn_pane_g4

0x8ae9,	// (0x00015ad7) lc0_navi_pane_ParamLimits

0x8ae9,	// (0x00015ad7) lc0_navi_pane

0x8b65,	// (0x00015b53) lc0_stat_indi_pane_ParamLimits

0x8b65,	// (0x00015b53) lc0_stat_indi_pane

0x8b7c,	// (0x00015b6a) ls0_title_pane_ParamLimits

0x8b7c,	// (0x00015b6a) ls0_title_pane

0x3ca1,	// (0x00010c8f) bg_popup_sub_pane_cp14_ParamLimits

0xd625,	// (0x0001a613) list_uniindi_pane_ParamLimits

0xd631,	// (0x0001a61f) uniindi_top_pane_ParamLimits

0xd6d0,	// (0x0001a6be) list_single_uniindi_pane_g1_ParamLimits

0xd6e3,	// (0x0001a6d1) list_single_uniindi_pane_t1_ParamLimits

0x72b5,	// (0x000142a3) lc0_stat_clock_pane_ParamLimits

0x72b5,	// (0x000142a3) lc0_stat_clock_pane

0xe210,	// (0x0001b1fe) lc0_stat_indi_pane_g1_ParamLimits

0xe210,	// (0x0001b1fe) lc0_stat_indi_pane_g1

0xe21d,	// (0x0001b20b) lc0_stat_indi_pane_g2_ParamLimits

0xe21d,	// (0x0001b20b) lc0_stat_indi_pane_g2

0x0001,

0xfe33,	// (0x0001ce21) lc0_stat_indi_pane_g_ParamLimits

0xfe33,	// (0x0001ce21) lc0_stat_indi_pane_g

0x72c2,	// (0x000142b0) lc0_uni_indicator_pane_ParamLimits

0x72c2,	// (0x000142b0) lc0_uni_indicator_pane

0xe22a,	// (0x0001b218) ls0_title_pane_g1_ParamLimits

0xe22a,	// (0x0001b218) ls0_title_pane_g1

0xe23e,	// (0x0001b22c) ls0_title_pane_t1_ParamLimits

0xe23e,	// (0x0001b22c) ls0_title_pane_t1

0x72cf,	// (0x000142bd) lc0_uni_indicator_pane_g1_ParamLimits

0x72cf,	// (0x000142bd) lc0_uni_indicator_pane_g1

0xe274,	// (0x0001b262) lc0_stat_clock_pane_t1

0x51d0,	// (0x000121be) main_ai5_pane

0xe282,	// (0x0001b270) ai5_sk_pane_ParamLimits

0xe282,	// (0x0001b270) ai5_sk_pane

0xe28f,	// (0x0001b27d) cell_ai5_widget_pane_ParamLimits

0xe28f,	// (0x0001b27d) cell_ai5_widget_pane

0xe831,	// (0x0001b81f) aid_size_cell_widget_grid

0xe83f,	// (0x0001b82d) bg_ai5_widget_pane_ParamLimits

0xe83f,	// (0x0001b82d) bg_ai5_widget_pane

0xe8b7,	// (0x0001b8a5) cell_ai5_widget_pane_g2

0xe8cb,	// (0x0001b8b9) cell_ai5_widget_pane_g3

0xe8e5,	// (0x0001b8d3) cell_ai5_widget_pane_g4

0xe8f5,	// (0x0001b8e3) cell_ai5_widget_pane_g5

0xe905,	// (0x0001b8f3) cell_ai5_widget_pane_g6

0xe911,	// (0x0001b8ff) cell_ai5_widget_pane_g7

0xe959,	// (0x0001b947) cell_ai5_widget_pane_t1_ParamLimits

0xe959,	// (0x0001b947) cell_ai5_widget_pane_t1

0xe976,	// (0x0001b964) cell_ai5_widget_pane_t2_ParamLimits

0xe976,	// (0x0001b964) cell_ai5_widget_pane_t2

0xe98e,	// (0x0001b97c) cell_ai5_widget_pane_t3_ParamLimits

0xe98e,	// (0x0001b97c) cell_ai5_widget_pane_t3

0xe9a6,	// (0x0001b994) cell_ai5_widget_pane_t4_ParamLimits

0xe9a6,	// (0x0001b994) cell_ai5_widget_pane_t4

0xe9cc,	// (0x0001b9ba) cell_ai5_widget_pane_t5_ParamLimits

0xe9cc,	// (0x0001b9ba) cell_ai5_widget_pane_t5

0xe9ec,	// (0x0001b9da) cell_ai5_widget_pane_t6_ParamLimits

0xe9ec,	// (0x0001b9da) cell_ai5_widget_pane_t6

0xe9fe,	// (0x0001b9ec) cell_ai5_widget_pane_t7_ParamLimits

0xe9fe,	// (0x0001b9ec) cell_ai5_widget_pane_t7

0xea17,	// (0x0001ba05) cell_ai5_widget_pane_t8_ParamLimits

0xea17,	// (0x0001ba05) cell_ai5_widget_pane_t8

0x0009,

0xfe4d,	// (0x0001ce3b) cell_ai5_widget_pane_t_ParamLimits

0xfe4d,	// (0x0001ce3b) cell_ai5_widget_pane_t

0xea76,	// (0x0001ba64) grid_ai5_widget_pane

0x3ca1,	// (0x00010c8f) highlight_cell_ai5_widget_pane_ParamLimits

0x3ca1,	// (0x00010c8f) highlight_cell_ai5_widget_pane

0xea84,	// (0x0001ba72) ai5_sk_left_pane

0xea8e,	// (0x0001ba7c) ai5_sk_middle_pane

0xea98,	// (0x0001ba86) ai5_sk_right_pane

0xeaa2,	// (0x0001ba90) bg_ai5_widget_pane_g1_ParamLimits

0xeaa2,	// (0x0001ba90) bg_ai5_widget_pane_g1

0xeaae,	// (0x0001ba9c) bg_ai5_widget_pane_g2_ParamLimits

0xeaae,	// (0x0001ba9c) bg_ai5_widget_pane_g2

0xeaba,	// (0x0001baa8) bg_ai5_widget_pane_g3_ParamLimits

0xeaba,	// (0x0001baa8) bg_ai5_widget_pane_g3

0xeac6,	// (0x0001bab4) bg_ai5_widget_pane_g4_ParamLimits

0xeac6,	// (0x0001bab4) bg_ai5_widget_pane_g4

0xead2,	// (0x0001bac0) bg_ai5_widget_pane_g5_ParamLimits

0xead2,	// (0x0001bac0) bg_ai5_widget_pane_g5

0xeade,	// (0x0001bacc) bg_ai5_widget_pane_g6_ParamLimits

0xeade,	// (0x0001bacc) bg_ai5_widget_pane_g6

0xeaea,	// (0x0001bad8) bg_ai5_widget_pane_g7_ParamLimits

0xeaea,	// (0x0001bad8) bg_ai5_widget_pane_g7

0xeaf6,	// (0x0001bae4) bg_ai5_widget_pane_g8_ParamLimits

0xeaf6,	// (0x0001bae4) bg_ai5_widget_pane_g8

0xeb02,	// (0x0001baf0) bg_ai5_widget_pane_g9_ParamLimits

0xeb02,	// (0x0001baf0) bg_ai5_widget_pane_g9

0x0008,

0xfe62,	// (0x0001ce50) bg_ai5_widget_pane_g_ParamLimits

0xfe62,	// (0x0001ce50) bg_ai5_widget_pane_g

0xeb3a,	// (0x0001bb28) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb3a,	// (0x0001bb28) cell_shortcut_ai5_widget_pane

0x85de,	// (0x000155cc) bg_cell_shortcut_ai5_widget_pane

0xeb4d,	// (0x0001bb3b) cell_grid_ai5_widget_pane_g1

0x85de,	// (0x000155cc) highlight_cell_shortcut_ai5_widget_pane

0x8e7b,	// (0x00015e69) ai5_sk_left_pane_g1

0xeb56,	// (0x0001bb44) ai5_sk_left_pane_g2

0xeb5e,	// (0x0001bb4c) ai5_sk_left_pane_g3

0xeb66,	// (0x0001bb54) ai5_sk_left_pane_g4

0x0003,

0xfe75,	// (0x0001ce63) ai5_sk_left_pane_g

0xeb6e,	// (0x0001bb5c) ai5_sk_left_pane_t1

0x8e83,	// (0x00015e71) ai5_sk_right_pane_g1

0xeb7c,	// (0x0001bb6a) ai5_sk_right_pane_g2

0xeb84,	// (0x0001bb72) ai5_sk_right_pane_g3

0xeb8c,	// (0x0001bb7a) ai5_sk_right_pane_g4

0x0003,

0xfe7e,	// (0x0001ce6c) ai5_sk_right_pane_g

0xeb94,	// (0x0001bb82) ai5_sk_right_pane_t1

0x8e83,	// (0x00015e71) ai5_sk_middle_pane_g1

0x8e7b,	// (0x00015e69) ai5_sk_middle_pane_g2

0x8e9b,	// (0x00015e89) ai5_sk_middle_pane_g3

0xeb84,	// (0x0001bb72) ai5_sk_middle_pane_g4

0xeb5e,	// (0x0001bb4c) ai5_sk_middle_pane_g5

0xeba2,	// (0x0001bb90) ai5_sk_middle_pane_g6

0xebaa,	// (0x0001bb98) ai5_sk_middle_pane_g7

0x0006,

0xfe87,	// (0x0001ce75) ai5_sk_middle_pane_g

0x8975,	// (0x00015963) aid_touch_area_size_lc0_ParamLimits

0x8975,	// (0x00015963) aid_touch_area_size_lc0

0x68df,	// (0x000138cd) cell_hwr_candidate_pane_t1_ParamLimits

0x8993,	// (0x00015981) aid_touch_navi_pane

0x8c7c,	// (0x00015c6a) status_dt_navi_pane_ParamLimits

0x8c7c,	// (0x00015c6a) status_dt_navi_pane

0x8c89,	// (0x00015c77) status_dt_sta_pane_ParamLimits

0x8c89,	// (0x00015c77) status_dt_sta_pane

0xebb2,	// (0x0001bba0) dt_sta_controll_pane

0xebbf,	// (0x0001bbad) dt_sta_indi_pane

0xebd0,	// (0x0001bbbe) dt_sta_title_pane

0x371c,	// (0x0001070a) bg_dt_sta_indi_pane_ParamLimits

0x371c,	// (0x0001070a) bg_dt_sta_indi_pane

0xebe3,	// (0x0001bbd1) dt_sta_battery_pane

0xebeb,	// (0x0001bbd9) dt_sta_indi_pane_g1

0xebf4,	// (0x0001bbe2) dt_sta_indi_pane_g2

0xebfd,	// (0x0001bbeb) dt_sta_indi_pane_g3

0x0002,

0xfe96,	// (0x0001ce84) dt_sta_indi_pane_g

0xec06,	// (0x0001bbf4) dt_sta_signal_pane

0x3ca1,	// (0x00010c8f) bg_dt_sta_title_pane_ParamLimits

0x3ca1,	// (0x00010c8f) bg_dt_sta_title_pane

0xec0f,	// (0x0001bbfd) dt_sta_title_pane_g1

0xec17,	// (0x0001bc05) dt_sta_title_pane_t1_ParamLimits

0xec17,	// (0x0001bc05) dt_sta_title_pane_t1

0x3309,	// (0x000102f7) bg_dt_sta_control_pane

0xec2c,	// (0x0001bc1a) dt_sta_controll_pane_g1

0xec35,	// (0x0001bc23) bg_dt_sta_title_pane_g1

0xec3e,	// (0x0001bc2c) bg_dt_sta_title_pane_g2

0xec47,	// (0x0001bc35) bg_dt_sta_title_pane_g3

0x0002,

0xfe9d,	// (0x0001ce8b) bg_dt_sta_title_pane_g

0xb96b,	// (0x00018959) bg_dt_sta_indi_pane_g1

0xec50,	// (0x0001bc3e) dt_sta_signal_pane_g1

0xec58,	// (0x0001bc46) dt_sta_signal_pane_g2

0x0001,

0xfea4,	// (0x0001ce92) dt_sta_signal_pane_g

0xec60,	// (0x0001bc4e) dt_sta_battery_pane_g1

0xec69,	// (0x0001bc57) dt_sta_battery_pane_t1

0xb96b,	// (0x00018959) bg_dt_sta_control_pane_g1

0x4531,	// (0x0001151f) fep_china_uni_eep_pane

0x4539,	// (0x00011527) fep_china_uni_entry_pane_ParamLimits

0x4549,	// (0x00011537) popup_fep_china_uni_window_g1_ParamLimits

0x4559,	// (0x00011547) popup_fep_china_uni_window_g2_ParamLimits

0x4559,	// (0x00011547) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0001c706) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0001c706) popup_fep_china_uni_window_g

0xec78,	// (0x0001bc66) fep_china_uni_eep_pane_g1

0xec80,	// (0x0001bc6e) fep_china_uni_eep_pane_t1

0xe1f1,	// (0x0001b1df) aid_touch_area_size_smil_player

0x8ae1,	// (0x00015acf) lc0_clock_pane

0x8cd8,	// (0x00015cc6) status_pane_g5_ParamLimits

0x8cd8,	// (0x00015cc6) status_pane_g5

0x5cae,	// (0x00012c9c) popup_keymap_window

0x8c9e,	// (0x00015c8c) status_icon_pane

0xe8cb,	// (0x0001b8b9) cell_ai5_widget_pane_g3_ParamLimits

0xe8e5,	// (0x0001b8d3) cell_ai5_widget_pane_g4_ParamLimits

0xe8f5,	// (0x0001b8e3) cell_ai5_widget_pane_g5_ParamLimits

0xe91d,	// (0x0001b90b) cell_ai5_widget_pane_g8_ParamLimits

0xe91d,	// (0x0001b90b) cell_ai5_widget_pane_g8

0xe931,	// (0x0001b91f) cell_ai5_widget_pane_g9_ParamLimits

0xe931,	// (0x0001b91f) cell_ai5_widget_pane_g9

0xe945,	// (0x0001b933) cell_ai5_widget_pane_g10_ParamLimits

0xe945,	// (0x0001b933) cell_ai5_widget_pane_g10

0xec8f,	// (0x0001bc7d) status_icon_pane_g1

0x3309,	// (0x000102f7) bg_popup_sub_pane_cp13

0xec97,	// (0x0001bc85) popup_keymap_window_t1

0x88b6,	// (0x000158a4) control_pane_g6_ParamLimits

0x88b6,	// (0x000158a4) control_pane_g6

0x88c3,	// (0x000158b1) control_pane_g7_ParamLimits

0x88c3,	// (0x000158b1) control_pane_g7

0x88d0,	// (0x000158be) control_pane_g8_ParamLimits

0x88d0,	// (0x000158be) control_pane_g8

0xebb2,	// (0x0001bba0) dt_sta_controll_pane_ParamLimits

0xebbf,	// (0x0001bbad) dt_sta_indi_pane_ParamLimits

0xebd0,	// (0x0001bbbe) dt_sta_title_pane_ParamLimits

0x3b69,	// (0x00010b57) aid_size_touch_scroll_bar_cale

0x52ad,	// (0x0001229b) popup_discreet_window_ParamLimits

0x52ad,	// (0x0001229b) popup_discreet_window

0x533b,	// (0x00012329) popup_sk_window

0x95b0,	// (0x0001659e) bg_popup_sub_pane_cp28_ParamLimits

0x95b0,	// (0x0001659e) bg_popup_sub_pane_cp28

0xeca5,	// (0x0001bc93) popup_discreet_window_g1_ParamLimits

0xeca5,	// (0x0001bc93) popup_discreet_window_g1

0xecc5,	// (0x0001bcb3) popup_discreet_window_t1_ParamLimits

0xecc5,	// (0x0001bcb3) popup_discreet_window_t1

0xece3,	// (0x0001bcd1) popup_discreet_window_t2_ParamLimits

0xece3,	// (0x0001bcd1) popup_discreet_window_t2

0x0002,

0xfea9,	// (0x0001ce97) popup_discreet_window_t_ParamLimits

0xfea9,	// (0x0001ce97) popup_discreet_window_t

0x72e2,	// (0x000142d0) popup_sk_window_g1

0x72ec,	// (0x000142da) popup_sk_window_g2

0x0001,

0xfeb0,	// (0x0001ce9e) popup_sk_window_g

0x72f4,	// (0x000142e2) popup_sk_window_t1

0x7302,	// (0x000142f0) popup_sk_window_t1_copy1

0xe8b7,	// (0x0001b8a5) cell_ai5_widget_pane_g2_ParamLimits

0xea29,	// (0x0001ba17) cell_ai5_widget_pane_t9_ParamLimits

0xea29,	// (0x0001ba17) cell_ai5_widget_pane_t9

0x3309,	// (0x000102f7) main_fep_fshwr2_pane

0x7310,	// (0x000142fe) aid_fshwr2_btn_pane

0x731c,	// (0x0001430a) aid_fshwr2_syb_pane

0x732e,	// (0x0001431c) aid_fshwr2_txt_pane

0x733a,	// (0x00014328) fshwr2_func_candi_pane

0x7350,	// (0x0001433e) fshwr2_hwr_syb_pane

0x7364,	// (0x00014352) fshwr2_icf_pane

0x51d0,	// (0x000121be) fshwr2_icf_bg_pane

0x7398,	// (0x00014386) fshwr2_icf_pane_t1_ParamLimits

0x7398,	// (0x00014386) fshwr2_icf_pane_t1

0x43d6,	// (0x000113c4) fshwr2_func_candi_pane_g1

0xed35,	// (0x0001bd23) fshwr2_func_candi_row_pane_ParamLimits

0xed35,	// (0x0001bd23) fshwr2_func_candi_row_pane

0x73b0,	// (0x0001439e) cell_fshwr2_syb_pane_ParamLimits

0x73b0,	// (0x0001439e) cell_fshwr2_syb_pane

0x73d1,	// (0x000143bf) fshwr2_hwr_syb_pane_g1_ParamLimits

0x73d1,	// (0x000143bf) fshwr2_hwr_syb_pane_g1

0x51d0,	// (0x000121be) bg_popup_call_pane_cp01

0x73df,	// (0x000143cd) fshwr2_func_candi_cell_pane_ParamLimits

0x73df,	// (0x000143cd) fshwr2_func_candi_cell_pane

0xed58,	// (0x0001bd46) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed58,	// (0x0001bd46) fshwr2_func_candi_cell_bg_pane

0x7430,	// (0x0001441e) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7430,	// (0x0001441e) fshwr2_func_candi_cell_pane_g1

0x7450,	// (0x0001443e) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7450,	// (0x0001443e) fshwr2_func_candi_cell_pane_t1

0x51d0,	// (0x000121be) bg_button_pane_cp08

0xed64,	// (0x0001bd52) cell_fshwr2_syb_bg_pane

0x7463,	// (0x00014451) cell_fshwr2_syb_bg_pane_g1

0x7477,	// (0x00014465) cell_fshwr2_syb_bg_pane_t1

0x3ca1,	// (0x00010c8f) main_tmo_pane

0xa0d4,	// (0x000170c2) uni_indicator_pane_g1_ParamLimits

0xa0e7,	// (0x000170d5) uni_indicator_pane_g2_ParamLimits

0xa0f9,	// (0x000170e7) uni_indicator_pane_g3_ParamLimits

0xa108,	// (0x000170f6) uni_indicator_pane_g4_ParamLimits

0xa108,	// (0x000170f6) uni_indicator_pane_g4

0xa11c,	// (0x0001710a) uni_indicator_pane_g5_ParamLimits

0xa11c,	// (0x0001710a) uni_indicator_pane_g5

0xa11c,	// (0x0001710a) uni_indicator_pane_g6_ParamLimits

0xa11c,	// (0x0001710a) uni_indicator_pane_g6

0xf91c,	// (0x0001c90a) uni_indicator_pane_g_ParamLimits

0xd1f1,	// (0x0001a1df) popup_tmo_note_window_ParamLimits

0xd1f1,	// (0x0001a1df) popup_tmo_note_window

0x6b50,	// (0x00013b3e) fshwr2_bg_pane

0x7441,	// (0x0001442f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7441,	// (0x0001442f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb5,	// (0x0001cea3) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb5,	// (0x0001cea3) fshwr2_func_candi_cell_pane_g

0x6898,	// (0x00013886) bg_popup_window_pane_cp01

0x748d,	// (0x0001447b) bg_popup_window_pane_g1_cp01

0xed70,	// (0x0001bd5e) bg_popup_window_pane_cp22_ParamLimits

0xed70,	// (0x0001bd5e) bg_popup_window_pane_cp22

0xed7e,	// (0x0001bd6c) listscroll_tmo_link_pane_ParamLimits

0xed7e,	// (0x0001bd6c) listscroll_tmo_link_pane

0xedbe,	// (0x0001bdac) popup_tmo_note_window_g1_ParamLimits

0xedbe,	// (0x0001bdac) popup_tmo_note_window_g1

0xedcb,	// (0x0001bdb9) tmo_note_info_pane_ParamLimits

0xedcb,	// (0x0001bdb9) tmo_note_info_pane

0xede5,	// (0x0001bdd3) list_tmo_note_info_pane_g1_ParamLimits

0xede5,	// (0x0001bdd3) list_tmo_note_info_pane_g1

0xedfc,	// (0x0001bdea) list_tmo_note_info_pane_g2_ParamLimits

0xedfc,	// (0x0001bdea) list_tmo_note_info_pane_g2

0x0001,

0xfeba,	// (0x0001cea8) list_tmo_note_info_pane_g_ParamLimits

0xfeba,	// (0x0001cea8) list_tmo_note_info_pane_g

0xee18,	// (0x0001be06) list_tmo_note_info_text_pane_ParamLimits

0xee18,	// (0x0001be06) list_tmo_note_info_text_pane

0xee9d,	// (0x0001be8b) list_tmo_link_pane

0xeeaa,	// (0x0001be98) scroll_pane_cp20

0xeeb7,	// (0x0001bea5) list_single_tmo_link_pane_ParamLimits

0xeeb7,	// (0x0001bea5) list_single_tmo_link_pane

0xeec7,	// (0x0001beb5) list_single_tmo_link_pane_t1

0xeed5,	// (0x0001bec3) list_tmo_note_info_text_pane_t1_ParamLimits

0xeed5,	// (0x0001bec3) list_tmo_note_info_text_pane_t1

0x7f7c,	// (0x00014f6a) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7f7c,	// (0x00014f6a) aid_size_touch_scroll_bar_cp01

0x7ec0,	// (0x00014eae) aid_size_touch_slider_marker

0x5323,	// (0x00012311) popup_settings_window_ParamLimits

0x5323,	// (0x00012311) popup_settings_window

0x8941,	// (0x0001592f) popup_candi_list_indi_window

0x8993,	// (0x00015981) aid_touch_navi_pane_ParamLimits

0x6aa9,	// (0x00013a97) rs_clock_indi_pane

0x6ab2,	// (0x00013aa0) sctrl_sk_bottom_pane_ParamLimits

0x6ac3,	// (0x00013ab1) sctrl_sk_top_pane_ParamLimits

0x6bc8,	// (0x00013bb6) popup_fep_tooltip_window

0xe831,	// (0x0001b81f) aid_size_cell_widget_grid_ParamLimits

0xe8a2,	// (0x0001b890) cell_ai5_widget_pane_g1_ParamLimits

0xe8a2,	// (0x0001b890) cell_ai5_widget_pane_g1

0xe905,	// (0x0001b8f3) cell_ai5_widget_pane_g6_ParamLimits

0xe911,	// (0x0001b8ff) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe38,	// (0x0001ce26) cell_ai5_widget_pane_g_ParamLimits

0xfe38,	// (0x0001ce26) cell_ai5_widget_pane_g

0xea58,	// (0x0001ba46) cell_ai5_widget_pane_t10_ParamLimits

0xea58,	// (0x0001ba46) cell_ai5_widget_pane_t10

0xea76,	// (0x0001ba64) grid_ai5_widget_pane_ParamLimits

0xeb0e,	// (0x0001bafc) cell_contacts_ai5_widget_pane_ParamLimits

0xeb0e,	// (0x0001bafc) cell_contacts_ai5_widget_pane

0xecf8,	// (0x0001bce6) popup_discreet_window_t3_ParamLimits

0xecf8,	// (0x0001bce6) popup_discreet_window_t3

0x7380,	// (0x0001436e) popup_fshwr2_char_preview_window_ParamLimits

0x7380,	// (0x0001436e) popup_fshwr2_char_preview_window

0xee36,	// (0x0001be24) tmo_note_info_pane_t1

0xee4b,	// (0x0001be39) tmo_note_info_pane_t2

0xee64,	// (0x0001be52) tmo_note_info_pane_t3

0xee79,	// (0x0001be67) tmo_note_info_pane_t4

0xee8b,	// (0x0001be79) tmo_note_info_pane_t5

0x0004,

0xfebf,	// (0x0001cead) tmo_note_info_pane_t

0xee9d,	// (0x0001be8b) list_tmo_link_pane_ParamLimits

0xeeaa,	// (0x0001be98) scroll_pane_cp20_ParamLimits

0x51d0,	// (0x000121be) bg_popup_fep_char_preview_window_cp01

0xeeee,	// (0x0001bedc) popup_fshwr2_char_preview_window_t1

0xeefc,	// (0x0001beea) popup_candi_list_indi_window_g1

0xef05,	// (0x0001bef3) bg_cell_contacts_ai5_widget_pane

0xef11,	// (0x0001beff) cell_contacts_ai5_widget_pane_g1

0xef26,	// (0x0001bf14) cell_contacts_ai5_widget_pane_g2

0xef32,	// (0x0001bf20) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeca,	// (0x0001ceb8) cell_contacts_ai5_widget_pane_g

0xef3e,	// (0x0001bf2c) cell_contacts_ai5_widget_pane_t1

0x3ca1,	// (0x00010c8f) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefb5,	// (0x0001bfa3) settings_container_pane

0x85de,	// (0x000155cc) listscroll_set_pane_copy1

0xada2,	// (0x00017d90) scroll_pane_cp121_copy1

0xefc1,	// (0x0001bfaf) set_content_pane_copy1

0xefc9,	// (0x0001bfb7) aid_height_set_list_copy1_ParamLimits

0xefc9,	// (0x0001bfb7) aid_height_set_list_copy1

0xa344,	// (0x00017332) aid_size_parent_copy1_ParamLimits

0xa344,	// (0x00017332) aid_size_parent_copy1

0xefd5,	// (0x0001bfc3) button_value_adjust_pane_cp6_copy1_ParamLimits

0xefd5,	// (0x0001bfc3) button_value_adjust_pane_cp6_copy1

0x890d,	// (0x000158fb) list_highlight_pane_cp2_copy1_ParamLimits

0x890d,	// (0x000158fb) list_highlight_pane_cp2_copy1

0xefe9,	// (0x0001bfd7) list_set_pane_copy1_ParamLimits

0xefe9,	// (0x0001bfd7) list_set_pane_copy1

0xef50,	// (0x0001bf3e) main_pane_set_t1_copy1_ParamLimits

0xef50,	// (0x0001bf3e) main_pane_set_t1_copy1

0xef8a,	// (0x0001bf78) main_pane_set_t2_copy1_ParamLimits

0xef8a,	// (0x0001bf78) main_pane_set_t2_copy1

0xf0aa,	// (0x0001c098) main_pane_set_t3_copy1

0xf0b8,	// (0x0001c0a6) main_pane_set_t4_copy1

0xefa9,	// (0x0001bf97) set_content_pane_g1_copy1_ParamLimits

0xefa9,	// (0x0001bf97) set_content_pane_g1_copy1

0xf0c6,	// (0x0001c0b4) setting_code_pane_copy1

0xf0ce,	// (0x0001c0bc) setting_slider_graphic_pane_copy1

0xf0ce,	// (0x0001c0bc) setting_slider_pane_copy1

0xf0ce,	// (0x0001c0bc) setting_text_pane_copy1

0xf0ce,	// (0x0001c0bc) setting_volume_pane_copy1

0xf0c6,	// (0x0001c0b4) settings_code_pane_cp2_copy1

0xf0d6,	// (0x0001c0c4) settings_code_pane_cp_copy1_ParamLimits

0xf0d6,	// (0x0001c0c4) settings_code_pane_cp_copy1

0x7496,	// (0x00014484) volume_set_pane_copy1

0xf0ea,	// (0x0001c0d8) volume_set_pane_g10_copy1

0xf0f6,	// (0x0001c0e4) volume_set_pane_g1_copy1

0xf100,	// (0x0001c0ee) volume_set_pane_g2_copy1

0xf10a,	// (0x0001c0f8) volume_set_pane_g3_copy1

0xf114,	// (0x0001c102) volume_set_pane_g4_copy1

0xf11e,	// (0x0001c10c) volume_set_pane_g5_copy1

0xf128,	// (0x0001c116) volume_set_pane_g6_copy1

0xf132,	// (0x0001c120) volume_set_pane_g7_copy1

0xf13c,	// (0x0001c12a) volume_set_pane_g8_copy1

0xf146,	// (0x0001c134) volume_set_pane_g9_copy1

0x3546,	// (0x00010534) bg_set_opt_pane_cp_copy1_ParamLimits

0x3546,	// (0x00010534) bg_set_opt_pane_cp_copy1

0x74a2,	// (0x00014490) setting_slider_pane_t1_copy1_ParamLimits

0x74a2,	// (0x00014490) setting_slider_pane_t1_copy1

0x74c0,	// (0x000144ae) setting_slider_pane_t2_copy1_ParamLimits

0x74c0,	// (0x000144ae) setting_slider_pane_t2_copy1

0x74da,	// (0x000144c8) setting_slider_pane_t3_copy1_ParamLimits

0x74da,	// (0x000144c8) setting_slider_pane_t3_copy1

0x74f2,	// (0x000144e0) slider_set_pane_copy1_ParamLimits

0x74f2,	// (0x000144e0) slider_set_pane_copy1

0x3d5c,	// (0x00010d4a) set_opt_bg_pane_g1_copy2

0x3d64,	// (0x00010d52) set_opt_bg_pane_g2_copy2

0xf150,	// (0x0001c13e) set_opt_bg_pane_g3_copy2

0x3d74,	// (0x00010d62) set_opt_bg_pane_g4_copy2

0x3d7c,	// (0x00010d6a) set_opt_bg_pane_g5_copy2

0x3d84,	// (0x00010d72) set_opt_bg_pane_g6_copy2

0xf15a,	// (0x0001c148) set_opt_bg_pane_g7_copy2

0xf164,	// (0x0001c152) set_opt_bg_pane_g8_copy2

0xf16e,	// (0x0001c15c) set_opt_bg_pane_g9_copy2

0x7508,	// (0x000144f6) aid_size_touch_slider_mark_copy1_ParamLimits

0x7508,	// (0x000144f6) aid_size_touch_slider_mark_copy1

0xf178,	// (0x0001c166) slider_set_pane_g1_copy1

0x751c,	// (0x0001450a) slider_set_pane_g2_copy1

0x64c3,	// (0x000134b1) slider_set_pane_g3_copy1_ParamLimits

0x64c3,	// (0x000134b1) slider_set_pane_g3_copy1

0x64d7,	// (0x000134c5) slider_set_pane_g4_copy1_ParamLimits

0x64d7,	// (0x000134c5) slider_set_pane_g4_copy1

0x64ef,	// (0x000134dd) slider_set_pane_g5_copy1_ParamLimits

0x64ef,	// (0x000134dd) slider_set_pane_g5_copy1

0x64c3,	// (0x000134b1) slider_set_pane_g6_copy1_ParamLimits

0x64c3,	// (0x000134b1) slider_set_pane_g6_copy1

0x7524,	// (0x00014512) slider_set_pane_g7_copy1_ParamLimits

0x7524,	// (0x00014512) slider_set_pane_g7_copy1

0x348c,	// (0x0001047a) bg_set_opt_pane_cp2_copy1

0xf181,	// (0x0001c16f) setting_slider_graphic_pane_g1_copy1

0xf18a,	// (0x0001c178) setting_slider_graphic_pane_t1_copy1

0xf19a,	// (0x0001c188) setting_slider_graphic_pane_t2_copy1

0xf1aa,	// (0x0001c198) slider_set_pane_cp_copy1

0xf1ba,	// (0x0001c1a8) input_focus_pane_cp1_copy1

0xf1c3,	// (0x0001c1b1) list_set_text_pane_copy1

0xf1cb,	// (0x0001c1b9) setting_text_pane_g1_copy1

0x35f4,	// (0x000105e2) set_text_pane_t1_copy1

0xf1ba,	// (0x0001c1a8) input_focus_pane_cp2_copy1

0xf1cb,	// (0x0001c1b9) setting_code_pane_g1_copy1

0xf1d4,	// (0x0001c1c2) setting_code_pane_t1_copy1

0x82c6,	// (0x000152b4) list_set_graphic_pane_copy1

0x348c,	// (0x0001047a) bg_set_opt_pane_cp4_copy1

0x82d9,	// (0x000152c7) list_set_graphic_pane_g1_copy1_ParamLimits

0x82d9,	// (0x000152c7) list_set_graphic_pane_g1_copy1

0xf1e2,	// (0x0001c1d0) list_set_graphic_pane_g2_copy1

0x82f1,	// (0x000152df) list_set_graphic_pane_t1_copy1_ParamLimits

0x82f1,	// (0x000152df) list_set_graphic_pane_t1_copy1

0xb96b,	// (0x00018959) rs_clock_indi_pane_g1

0xf1ea,	// (0x0001c1d8) rs_clock_indi_pane_t1

0xf1f8,	// (0x0001c1e6) rs_indi_pane

0xf200,	// (0x0001c1ee) rs_indi_pane_g1

0xf209,	// (0x0001c1f7) rs_indi_pane_g2

0xf212,	// (0x0001c200) rs_indi_pane_g3

0x0002,

0xfed1,	// (0x0001cebf) rs_indi_pane_g

0x85de,	// (0x000155cc) bg_popup_preview_window_pane_cp03

0xf21b,	// (0x0001c209) popup_fep_tooltip_window_t1

0xc826,	// (0x00019814) popup_note2_window_g2_ParamLimits

0xc826,	// (0x00019814) popup_note2_window_g2

0x0001,

0xfc6a,	// (0x0001cc58) popup_note2_window_g_ParamLimits

0xfc6a,	// (0x0001cc58) popup_note2_window_g

0xce3e,	// (0x00019e2c) bg_popup_sub_pane_cp11_ParamLimits

0xce4b,	// (0x00019e39) cell_ai3_links_pane_g1_ParamLimits

0xce62,	// (0x00019e50) cell_ai3_links_pane_t1

0x35f4,	// (0x000105e2) set_text_pane_t1_copy1_ParamLimits

0x84f7,	// (0x000154e5) cell_graphic_popup_pane_cp2_ParamLimits

0x84f7,	// (0x000154e5) cell_graphic_popup_pane_cp2

0xf229,	// (0x0001c217) cell_graphic_popup_pane_g1_cp2

0x397c,	// (0x0001096a) cell_graphic_popup_pane_g2_cp2

0xf231,	// (0x0001c21f) cell_graphic_popup_pane_g3_cp2

0xf239,	// (0x0001c227) cell_graphic_popup_pane_t2_cp2

0x398d,	// (0x0001097b) grid_highlight_pane_cp3_cp2

0x41dc,	// (0x000111ca) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3ca1,	// (0x00010c8f) main_tmo_pane_ParamLimits

0xd1e5,	// (0x0001a1d3) popup_tmo_big_image_note_window

0xe891,	// (0x0001b87f) cell_ai5_widget_list_pane

0xe899,	// (0x0001b887) cell_ai5_widget_lrg_icon_pane

0xee36,	// (0x0001be24) tmo_note_info_pane_t1_ParamLimits

0xee4b,	// (0x0001be39) tmo_note_info_pane_t2_ParamLimits

0xee64,	// (0x0001be52) tmo_note_info_pane_t3_ParamLimits

0xee79,	// (0x0001be67) tmo_note_info_pane_t4_ParamLimits

0xee8b,	// (0x0001be79) tmo_note_info_pane_t5_ParamLimits

0xfebf,	// (0x0001cead) tmo_note_info_pane_t_ParamLimits

0xefb5,	// (0x0001bfa3) settings_container_pane_ParamLimits

0xf1b2,	// (0x0001c1a0) indicator_popup_pane_cp5

0xf1b2,	// (0x0001c1a0) indicator_popup_pane_cp6

0x82c6,	// (0x000152b4) list_set_graphic_pane_copy1_ParamLimits

0x3309,	// (0x000102f7) bg_popup_window_pane_cp23

0xf247,	// (0x0001c235) popup_tmo_big_image_note_window_g1

0xf253,	// (0x0001c241) popup_tmo_big_image_note_window_t1

0xf263,	// (0x0001c251) popup_tmo_big_image_note_window_t2

0xf273,	// (0x0001c261) popup_tmo_big_image_note_window_t3

0x0002,

0xfed8,	// (0x0001cec6) popup_tmo_big_image_note_window_t

0xb96b,	// (0x00018959) cell_ai5_widget_lrg_icon_pane_g1

0xf283,	// (0x0001c271) cell_ai5_widget_lrg_icon_pane_t1

0xf291,	// (0x0001c27f) cell_ai5_widget_list_row_pane_ParamLimits

0xf291,	// (0x0001c27f) cell_ai5_widget_list_row_pane

0xf2a9,	// (0x0001c297) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2a9,	// (0x0001c297) cell_ai5_widget_list_row_pane_g1

0xf2b6,	// (0x0001c2a4) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2b6,	// (0x0001c2a4) cell_ai5_widget_list_row_pane_t1

0xf2e1,	// (0x0001c2cf) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2e1,	// (0x0001c2cf) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfedf,	// (0x0001cecd) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedf,	// (0x0001cecd) cell_ai5_widget_list_row_pane_t

0x51d0,	// (0x000121be) main_fep_vtchi_ss_pane

0xf329,	// (0x0001c317) popup_fep_char_pre_window

0xf331,	// (0x0001c31f) popup_fep_ituss_window

0xf356,	// (0x0001c344) popup_fep_vkbss_window

0xf37b,	// (0x0001c369) grid_vkbss_keypad_pane_ParamLimits

0xf37b,	// (0x0001c369) grid_vkbss_keypad_pane

0xf38b,	// (0x0001c379) ituss_keypad_pane

0x7546,	// (0x00014534) aid_vkbss_key_offset_ParamLimits

0x7546,	// (0x00014534) aid_vkbss_key_offset

0x7552,	// (0x00014540) cell_vkbss_key_pane_ParamLimits

0x7552,	// (0x00014540) cell_vkbss_key_pane

0xf39a,	// (0x0001c388) bg_cell_vkbss_key_g1_ParamLimits

0xf39a,	// (0x0001c388) bg_cell_vkbss_key_g1

0xf3a6,	// (0x0001c394) cell_vkbss_key_3p_pane_ParamLimits

0xf3a6,	// (0x0001c394) cell_vkbss_key_3p_pane

0xf3ba,	// (0x0001c3a8) cell_vkbss_key_g1_ParamLimits

0xf3ba,	// (0x0001c3a8) cell_vkbss_key_g1

0xf3ce,	// (0x0001c3bc) cell_vkbss_key_t1_ParamLimits

0xf3ce,	// (0x0001c3bc) cell_vkbss_key_t1

0x7568,	// (0x00014556) cell_ituss_key_pane_ParamLimits

0x7568,	// (0x00014556) cell_ituss_key_pane

0xf3f9,	// (0x0001c3e7) bg_cell_ituss_key_g1_ParamLimits

0xf3f9,	// (0x0001c3e7) bg_cell_ituss_key_g1

0xf405,	// (0x0001c3f3) cell_ituss_key_pane_g1_ParamLimits

0xf405,	// (0x0001c3f3) cell_ituss_key_pane_g1

0x7579,	// (0x00014567) cell_ituss_key_pane_g2_ParamLimits

0x7579,	// (0x00014567) cell_ituss_key_pane_g2

0x0002,

0xfee6,	// (0x0001ced4) cell_ituss_key_pane_g_ParamLimits

0xfee6,	// (0x0001ced4) cell_ituss_key_pane_g

0x75a5,	// (0x00014593) cell_ituss_key_t1_ParamLimits

0x75a5,	// (0x00014593) cell_ituss_key_t1

0x75df,	// (0x000145cd) cell_ituss_key_t2_ParamLimits

0x75df,	// (0x000145cd) cell_ituss_key_t2

0x7610,	// (0x000145fe) cell_ituss_key_t3_ParamLimits

0x7610,	// (0x000145fe) cell_ituss_key_t3

0x75df,	// (0x000145cd) cell_ituss_key_t4_ParamLimits

0x75df,	// (0x000145cd) cell_ituss_key_t4

0x0004,

0xfeed,	// (0x0001cedb) cell_ituss_key_t_ParamLimits

0xfeed,	// (0x0001cedb) cell_ituss_key_t

0xf42b,	// (0x0001c419) cell_vkbss_key_3p_pane_g1

0xf433,	// (0x0001c421) cell_vkbss_key_3p_pane_g2

0xf43b,	// (0x0001c429) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef8,	// (0x0001cee6) cell_vkbss_key_3p_pane_g

0x85de,	// (0x000155cc) bg_popup_fep_char_preview_window_cp02

0xf443,	// (0x0001c431) popup_fep_char_pre_window_t1

0xe81e,	// (0x0001b80c) main_ai5_sk_pane

0xef05,	// (0x0001bef3) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef11,	// (0x0001beff) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xef26,	// (0x0001bf14) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef32,	// (0x0001bf20) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeca,	// (0x0001ceb8) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef3e,	// (0x0001bf2c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3ca1,	// (0x00010c8f) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf451,	// (0x0001c43f) main_ai5_sk_pane_g1

0x93e8,	// (0x000163d6) popup_query_code_window_g1

0xf347,	// (0x0001c335) popup_fep_vkb_icf_pane

0xf365,	// (0x0001c353) popup_fep_vtchi_icf_pane

0xf45a,	// (0x0001c448) bg_icf_pane

0xf466,	// (0x0001c454) list_vkb_icf_pane

0xf475,	// (0x0001c463) bg_icf_pane_cp01

0xf488,	// (0x0001c476) vtchi_icf_list_pane

0xf498,	// (0x0001c486) list_vkb_icf_pane_t1_ParamLimits

0xf498,	// (0x0001c486) list_vkb_icf_pane_t1

0xf4b6,	// (0x0001c4a4) vtchi_icf_list_pane_t1_ParamLimits

0xf4b6,	// (0x0001c4a4) vtchi_icf_list_pane_t1

0xf331,	// (0x0001c31f) popup_fep_ituss_window_ParamLimits

0xf365,	// (0x0001c353) popup_fep_vtchi_icf_pane_ParamLimits

0xf38b,	// (0x0001c379) ituss_keypad_pane_ParamLimits

0x753a,	// (0x00014528) ituss_sks_pane

0xf45a,	// (0x0001c448) bg_icf_pane_ParamLimits

0xf309,	// (0x0001c2f7) icf_edit_indi_pane_ParamLimits

0xf309,	// (0x0001c2f7) icf_edit_indi_pane

0xf466,	// (0x0001c454) list_vkb_icf_pane_ParamLimits

0xf475,	// (0x0001c463) bg_icf_pane_cp01_ParamLimits

0xf31c,	// (0x0001c30a) icf_edit_indi_pane_cp01_ParamLimits

0xf31c,	// (0x0001c30a) icf_edit_indi_pane_cp01

0xf490,	// (0x0001c47e) vtchi_query_pane

0xe1c1,	// (0x0001b1af) icf_edit_indi_pane_g1_ParamLimits

0xe1c1,	// (0x0001b1af) icf_edit_indi_pane_g1

0xf525,	// (0x0001c513) icf_edit_indi_pane_g2_ParamLimits

0xf525,	// (0x0001c513) icf_edit_indi_pane_g2

0x0001,

0xff10,	// (0x0001cefe) icf_edit_indi_pane_g_ParamLimits

0xff10,	// (0x0001cefe) icf_edit_indi_pane_g

0xf537,	// (0x0001c525) icf_edit_indi_pane_t1

0xf4ce,	// (0x0001c4bc) bg_input_focus_pane_cp042

0x3b60,	// (0x00010b4e) vtchi_button_pane

0xf4d7,	// (0x0001c4c5) vtchi_query_pane_t1

0xf4e5,	// (0x0001c4d3) vtchi_query_pane_t2

0xf4f3,	// (0x0001c4e1) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0001ceed) vtchi_query_pane_t

0x51d0,	// (0x000121be) bg_button_pane_cp13

0xf501,	// (0x0001c4ef) vtchi_button_pane_g1

0x7653,	// (0x00014641) ituss_sks_pane_g1

0x765e,	// (0x0001464c) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x0001cef4) ituss_sks_pane_g

0xf509,	// (0x0001c4f7) ituss_sks_pane_t1

0xf517,	// (0x0001c505) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x0001cef9) ituss_sks_pane_t

0xb3f5,	// (0x000183e3) indicator_nsta_pane_cp_g1

0xb3fd,	// (0x000183eb) indicator_nsta_pane_cp_g2

0xb405,	// (0x000183f3) indicator_nsta_pane_cp_g3

0xb3f5,	// (0x000183e3) indicator_nsta_pane_cp_g4

0xb3fd,	// (0x000183eb) indicator_nsta_pane_cp_g5

0xb405,	// (0x000183f3) indicator_nsta_pane_cp_g6

0x0005,

0xfaa8,	// (0x0001ca96) indicator_nsta_pane_cp_g

0xdf0c,	// (0x0001aefa) cell_graphic2_pane_t2_ParamLimits

0xdf0c,	// (0x0001aefa) cell_graphic2_pane_t2

0x0001,

0xfdc1,	// (0x0001cdaf) cell_graphic2_pane_t_ParamLimits

0xfdc1,	// (0x0001cdaf) cell_graphic2_pane_t

0xdf39,	// (0x0001af27) cell_graphic2_control_pane_t1

0x8171,	// (0x0001515f) signal_pane_g3_ParamLimits

0x8171,	// (0x0001515f) signal_pane_g3

0x8180,	// (0x0001516e) signal_pane_g4_ParamLimits

0x8180,	// (0x0001516e) signal_pane_g4

0xf2f3,	// (0x0001c2e1) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf2f3,	// (0x0001c2e1) cell_ai5_widget_list_row_pane_t3

0xf419,	// (0x0001c407) cell_ituss_key_pane_t1_ParamLimits

0xf419,	// (0x0001c407) cell_ituss_key_pane_t1

0x9028,	// (0x00016016) form_field_data_wide_pane_vc_t2_ParamLimits

0x9028,	// (0x00016016) form_field_data_wide_pane_vc_t2

0x903c,	// (0x0001602a) form_field_data_wide_pane_vc_t3_ParamLimits

0x903c,	// (0x0001602a) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0001c7f2) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0001c7f2) form_field_data_wide_pane_vc_t

0xb0b0,	// (0x0001809e) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb0b0,	// (0x0001809e) form_field_slider_wide_pane_vc_t3

0xb186,	// (0x00018174) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb186,	// (0x00018174) form_field_popup_wide_pane_vc_t2

0xb19d,	// (0x0001818b) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb19d,	// (0x0001818b) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa97,	// (0x0001ca85) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa97,	// (0x0001ca85) form_field_popup_wide_pane_vc_t

0x7310,	// (0x000142fe) aid_fshwr2_btn_pane_ParamLimits

0x731c,	// (0x0001430a) aid_fshwr2_syb_pane_ParamLimits

0x732e,	// (0x0001431c) aid_fshwr2_txt_pane_ParamLimits

0x6b50,	// (0x00013b3e) fshwr2_bg_pane_ParamLimits

0x733a,	// (0x00014328) fshwr2_func_candi_pane_ParamLimits

0x7350,	// (0x0001433e) fshwr2_hwr_syb_pane_ParamLimits

0x7364,	// (0x00014352) fshwr2_icf_pane_ParamLimits

0xb024,	// (0x00018012) list_double_graphic_pane_vc_g4_ParamLimits

0xb024,	// (0x00018012) list_double_graphic_pane_vc_g4

0x7599,	// (0x00014587) cell_ituss_key_pane_g3_ParamLimits

0x7599,	// (0x00014587) cell_ituss_key_pane_g3

0x7641,	// (0x0001462f) cell_ituss_key_t5_ParamLimits

0x7641,	// (0x0001462f) cell_ituss_key_t5

0xf356,	// (0x0001c344) popup_fep_vkbss_window_ParamLimits

0xe828,	// (0x0001b816) aid_cell_ai5_quarter

0xf537,	// (0x0001c525) icf_edit_indi_pane_t1_ParamLimits

0x37c4,	// (0x000107b2) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x37c4,	// (0x000107b2) aid_tch_indicator_popup_pane_cp2

0x37d7,	// (0x000107c5) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x37d7,	// (0x000107c5) aid_tch_query_popup_data_pane_cp2

0x9390,	// (0x0001637e) aid_tch_query_popup_pane_ParamLimits

0x9390,	// (0x0001637e) aid_tch_query_popup_pane

0x9390,	// (0x0001637e) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9390,	// (0x0001637e) aid_tch_query_popup_data_pane_cp1

0xed64,	// (0x0001bd52) cell_fshwr2_syb_bg_pane_ParamLimits

0x7463,	// (0x00014451) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x7477,	// (0x00014465) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf347,	// (0x0001c335) popup_fep_vkb_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Normal
