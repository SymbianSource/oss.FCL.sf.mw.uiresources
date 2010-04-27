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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00049b1c };

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
0x9bc5,	// (0x000536e1) Screen

0x9bd1,	// (0x000536ed) application_window_ParamLimits

0x9bd1,	// (0x000536ed) application_window

0x6eb3,	// (0x000509cf) screen_g1

0x9c09,	// (0x00053725) area_bottom_pane_ParamLimits

0x9c09,	// (0x00053725) area_bottom_pane

0xef00,	// (0x00058a1c) area_top_pane_ParamLimits

0xef00,	// (0x00058a1c) area_top_pane

0xef94,	// (0x00058ab0) main_pane_ParamLimits

0xef94,	// (0x00058ab0) main_pane

0x6ebd,	// (0x000509d9) misc_graphics

0xb953,	// (0x0005546f) battery_pane_ParamLimits

0xb953,	// (0x0005546f) battery_pane

0x2d9a,	// (0x0004c8b6) bg_status_flat_pane_g8

0x2da2,	// (0x0004c8be) bg_status_flat_pane_g9

0x21a4,	// (0x0004bcc0) context_pane_ParamLimits

0x21a4,	// (0x0004bcc0) context_pane

0xbaca,	// (0x000555e6) navi_pane_ParamLimits

0xbaca,	// (0x000555e6) navi_pane

0xbb54,	// (0x00055670) signal_pane_ParamLimits

0xbb54,	// (0x00055670) signal_pane

0x0008,

0xf879,	// (0x00059395) bg_status_flat_pane_g

0xbbe4,	// (0x00055700) status_pane_g1_ParamLimits

0xbbe4,	// (0x00055700) status_pane_g1

0xbbfa,	// (0x00055716) status_pane_g2_ParamLimits

0xbbfa,	// (0x00055716) status_pane_g2

0x23e5,	// (0x0004bf01) status_pane_g3_ParamLimits

0x23e5,	// (0x0004bf01) status_pane_g3

0x0004,

0xf7a5,	// (0x000592c1) status_pane_g_ParamLimits

0xf7a5,	// (0x000592c1) status_pane_g

0xbc06,	// (0x00055722) title_pane_ParamLimits

0xbc06,	// (0x00055722) title_pane

0xbc69,	// (0x00055785) uni_indicator_pane_ParamLimits

0xbc69,	// (0x00055785) uni_indicator_pane

0x0449,	// (0x00049f65) bg_list_pane_ParamLimits

0x0449,	// (0x00049f65) bg_list_pane

0xb181,	// (0x00054c9d) find_pane

0xb189,	// (0x00054ca5) listscroll_app_pane_ParamLimits

0xb189,	// (0x00054ca5) listscroll_app_pane

0x047d,	// (0x00049f99) listscroll_form_pane

0xb199,	// (0x00054cb5) listscroll_gen_pane_ParamLimits

0xb199,	// (0x00054cb5) listscroll_gen_pane

0x0499,	// (0x00049fb5) listscroll_set_pane

0x3939,	// (0x0004d455) main_idle_act_pane

0xe7f5,	// (0x00058311) main_idle_trad_pane

0xe7f5,	// (0x00058311) main_list_empty_pane

0x04b3,	// (0x00049fcf) main_midp_pane

0x04bf,	// (0x00049fdb) main_pane_g1_ParamLimits

0x04bf,	// (0x00049fdb) main_pane_g1

0xb1ad,	// (0x00054cc9) popup_ai_message_window_ParamLimits

0xb1ad,	// (0x00054cc9) popup_ai_message_window

0xb24d,	// (0x00054d69) popup_fep_china_uni_window_ParamLimits

0xb24d,	// (0x00054d69) popup_fep_china_uni_window

0x1b5d,	// (0x0004b679) popup_fep_japan_candidate_window_ParamLimits

0x1b5d,	// (0x0004b679) popup_fep_japan_candidate_window

0x1b87,	// (0x0004b6a3) popup_fep_japan_predictive_window_ParamLimits

0x1b87,	// (0x0004b6a3) popup_fep_japan_predictive_window

0xb2ad,	// (0x00054dc9) popup_find_window

0xb2ca,	// (0x00054de6) popup_grid_graphic_window_ParamLimits

0xb2ca,	// (0x00054de6) popup_grid_graphic_window

0x1bf8,	// (0x0004b714) popup_large_graphic_colour_window

0xb36e,	// (0x00054e8a) popup_menu_window_ParamLimits

0xb36e,	// (0x00054e8a) popup_menu_window

0xb55e,	// (0x0005507a) popup_note_image_window

0xb51e,	// (0x0005503a) popup_note_wait_window_ParamLimits

0xb51e,	// (0x0005503a) popup_note_wait_window

0xb576,	// (0x00055092) popup_note_window_ParamLimits

0xb576,	// (0x00055092) popup_note_window

0xb624,	// (0x00055140) popup_query_code_window_ParamLimits

0xb624,	// (0x00055140) popup_query_code_window

0x1e64,	// (0x0004b980) popup_query_data_code_window_ParamLimits

0x1e64,	// (0x0004b980) popup_query_data_code_window

0xb664,	// (0x00055180) popup_query_data_window_ParamLimits

0xb664,	// (0x00055180) popup_query_data_window

0xb6f8,	// (0x00055214) popup_query_sat_info_window_ParamLimits

0xb6f8,	// (0x00055214) popup_query_sat_info_window

0xb7a3,	// (0x000552bf) popup_snote_single_graphic_window_ParamLimits

0xb7a3,	// (0x000552bf) popup_snote_single_graphic_window

0xb7a3,	// (0x000552bf) popup_snote_single_text_window_ParamLimits

0xb7a3,	// (0x000552bf) popup_snote_single_text_window

0x1eff,	// (0x0004ba1b) popup_sub_window_general

0x2045,	// (0x0004bb61) popup_window_general_ParamLimits

0x2045,	// (0x0004bb61) popup_window_general

0x205e,	// (0x0004bb7a) power_save_pane

0xafef,	// (0x00054b0b) control_pane_g1_ParamLimits

0xafef,	// (0x00054b0b) control_pane_g1

0xb018,	// (0x00054b34) control_pane_g2_ParamLimits

0xb018,	// (0x00054b34) control_pane_g2

0xe94a,	// (0x00058466) control_pane_g3_ParamLimits

0xe94a,	// (0x00058466) control_pane_g3

0x0007,

0xf78d,	// (0x000592a9) control_pane_g_ParamLimits

0xf78d,	// (0x000592a9) control_pane_g

0xb07a,	// (0x00054b96) control_pane_t1_ParamLimits

0xb07a,	// (0x00054b96) control_pane_t1

0xb0d8,	// (0x00054bf4) control_pane_t2_ParamLimits

0xb0d8,	// (0x00054bf4) control_pane_t2

0x0002,

0xf79e,	// (0x000592ba) control_pane_t_ParamLimits

0xf79e,	// (0x000592ba) control_pane_t

0xaf48,	// (0x00054a64) navi_navi_volume_pane_cp1

0xaf50,	// (0x00054a6c) status_small_icon_pane

0xe916,	// (0x00058432) status_small_pane_g1_ParamLimits

0xe916,	// (0x00058432) status_small_pane_g1

0xaf58,	// (0x00054a74) status_small_pane_g2_ParamLimits

0xaf58,	// (0x00054a74) status_small_pane_g2

0xaf64,	// (0x00054a80) status_small_pane_g3_ParamLimits

0xaf64,	// (0x00054a80) status_small_pane_g3

0xaf70,	// (0x00054a8c) status_small_pane_g4_ParamLimits

0xaf70,	// (0x00054a8c) status_small_pane_g4

0xaf7c,	// (0x00054a98) status_small_pane_g5_ParamLimits

0xaf7c,	// (0x00054a98) status_small_pane_g5

0xaf8a,	// (0x00054aa6) status_small_pane_g6_ParamLimits

0xaf8a,	// (0x00054aa6) status_small_pane_g6

0x0007,

0xf77c,	// (0x00059298) status_small_pane_g_ParamLimits

0xf77c,	// (0x00059298) status_small_pane_g

0xafb9,	// (0x00054ad5) status_small_pane_t1

0xafdb,	// (0x00054af7) status_small_wait_pane_ParamLimits

0xafdb,	// (0x00054af7) status_small_wait_pane

0xa997,	// (0x000544b3) aid_levels_signal_ParamLimits

0xa997,	// (0x000544b3) aid_levels_signal

0xa9af,	// (0x000544cb) signal_pane_g1_ParamLimits

0xa9af,	// (0x000544cb) signal_pane_g1

0xa9ca,	// (0x000544e6) signal_pane_g2_ParamLimits

0xa9ca,	// (0x000544e6) signal_pane_g2

0x0003,

0xf70d,	// (0x00059229) signal_pane_g_ParamLimits

0xf70d,	// (0x00059229) signal_pane_g

0xaa12,	// (0x0005452e) context_pane_g1

0x9df5,	// (0x00053911) title_pane_g1

0x9e20,	// (0x0005393c) title_pane_t1

0x6edf,	// (0x000509fb) title_pane_t2

0x6f05,	// (0x00050a21) title_pane_t3

0x0002,

0xf557,	// (0x00059073) title_pane_t

0xbc91,	// (0x000557ad) aid_levels_battery_ParamLimits

0xbc91,	// (0x000557ad) aid_levels_battery

0xbcad,	// (0x000557c9) battery_pane_g1_ParamLimits

0xbcad,	// (0x000557c9) battery_pane_g1

0xbcca,	// (0x000557e6) battery_pane_g2_ParamLimits

0xbcca,	// (0x000557e6) battery_pane_g2

0x0001,

0xf7b0,	// (0x000592cc) battery_pane_g_ParamLimits

0xf7b0,	// (0x000592cc) battery_pane_g

0xc805,	// (0x00056321) uni_indicator_pane_g1

0xc81b,	// (0x00056337) uni_indicator_pane_g2

0xc831,	// (0x0005634d) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0005943d) uni_indicator_pane_g

0xadce,	// (0x000548ea) navi_icon_pane_ParamLimits

0xadce,	// (0x000548ea) navi_icon_pane

0xad0a,	// (0x00054826) navi_midp_pane

0xadea,	// (0x00054906) navi_navi_pane

0xadf4,	// (0x00054910) navi_text_pane_ParamLimits

0xadf4,	// (0x00054910) navi_text_pane

0x6eb3,	// (0x000509cf) status_small_wait_pane_g1

0x7200,	// (0x00050d1c) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x00059438) status_small_wait_pane_g

0xc76c,	// (0x00056288) navi_navi_icon_text_pane

0xc774,	// (0x00056290) navi_navi_pane_g1_ParamLimits

0xc774,	// (0x00056290) navi_navi_pane_g1

0xc786,	// (0x000562a2) navi_navi_pane_g2_ParamLimits

0xc786,	// (0x000562a2) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x00059406) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x00059406) navi_navi_pane_g

0x3423,	// (0x0004cf3f) navi_navi_tabs_pane

0xc798,	// (0x000562b4) navi_navi_text_pane

0xc76c,	// (0x00056288) navi_navi_volume_pane

0xc75a,	// (0x00056276) navi_text_pane_t1

0xc74e,	// (0x0005626a) navi_icon_pane_g1

0x331a,	// (0x0004ce36) navi_navi_text_pane_t1

0xbf08,	// (0x00055a24) navi_navi_volume_pane_g1

0xbf10,	// (0x00055a2c) volume_small_pane

0xc696,	// (0x000561b2) navi_navi_icon_text_pane_g1

0xc69e,	// (0x000561ba) navi_navi_icon_text_pane_t1

0xadea,	// (0x00054906) navi_tabs_2_long_pane

0xadea,	// (0x00054906) navi_tabs_2_pane

0xadea,	// (0x00054906) navi_tabs_3_long_pane

0xadea,	// (0x00054906) navi_tabs_3_pane

0xadea,	// (0x00054906) navi_tabs_4_pane

0xbee8,	// (0x00055a04) tabs_2_active_pane_ParamLimits

0xbee8,	// (0x00055a04) tabs_2_active_pane

0xbef8,	// (0x00055a14) tabs_2_passive_pane_ParamLimits

0xbef8,	// (0x00055a14) tabs_2_passive_pane

0xbeb6,	// (0x000559d2) tabs_3_active_pane_ParamLimits

0xbeb6,	// (0x000559d2) tabs_3_active_pane

0xbec6,	// (0x000559e2) tabs_3_passive_pane_ParamLimits

0xbec6,	// (0x000559e2) tabs_3_passive_pane

0xbed7,	// (0x000559f3) tabs_3_passive_pane_cp_ParamLimits

0xbed7,	// (0x000559f3) tabs_3_passive_pane_cp

0xbe72,	// (0x0005598e) tabs_4_active_pane_ParamLimits

0xbe72,	// (0x0005598e) tabs_4_active_pane

0xbe83,	// (0x0005599f) tabs_4_passive_pane_ParamLimits

0xbe83,	// (0x0005599f) tabs_4_passive_pane

0xbe94,	// (0x000559b0) tabs_4_passive_pane_cp_ParamLimits

0xbe94,	// (0x000559b0) tabs_4_passive_pane_cp

0xbea5,	// (0x000559c1) tabs_4_passive_pane_cp2_ParamLimits

0xbea5,	// (0x000559c1) tabs_4_passive_pane_cp2

0xbe4e,	// (0x0005596a) tabs_2_long_active_pane_ParamLimits

0xbe4e,	// (0x0005596a) tabs_2_long_active_pane

0xbe60,	// (0x0005597c) tabs_2_long_passive_pane_ParamLimits

0xbe60,	// (0x0005597c) tabs_2_long_passive_pane

0xbe03,	// (0x0005591f) tabs_3_long_active_pane_ParamLimits

0xbe03,	// (0x0005591f) tabs_3_long_active_pane

0xbe1c,	// (0x00055938) tabs_3_long_passive_pane_ParamLimits

0xbe1c,	// (0x00055938) tabs_3_long_passive_pane

0xbe35,	// (0x00055951) tabs_3_long_passive_pane_cp_ParamLimits

0xbe35,	// (0x00055951) tabs_3_long_passive_pane_cp

0x073a,	// (0x0004a256) volume_small_pane_g1

0xbdb2,	// (0x000558ce) volume_small_pane_g2

0xbdbb,	// (0x000558d7) volume_small_pane_g3

0xbdc4,	// (0x000558e0) volume_small_pane_g4

0xbdcd,	// (0x000558e9) volume_small_pane_g5

0xbdd6,	// (0x000558f2) volume_small_pane_g6

0xbddf,	// (0x000558fb) volume_small_pane_g7

0xbde8,	// (0x00055904) volume_small_pane_g8

0xbdf1,	// (0x0005590d) volume_small_pane_g9

0xbdfa,	// (0x00055916) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x000593d2) volume_small_pane_g

0x704a,	// (0x00050b66) bg_active_tab_pane_cp2_ParamLimits

0x704a,	// (0x00050b66) bg_active_tab_pane_cp2

0x9eac,	// (0x000539c8) tabs_3_active_pane_g1

0x9eb4,	// (0x000539d0) tabs_3_active_pane_t1

0x704a,	// (0x00050b66) bg_passive_tab_pane_cp2_ParamLimits

0x704a,	// (0x00050b66) bg_passive_tab_pane_cp2

0x9eac,	// (0x000539c8) tabs_3_passive_pane_g1

0x9eb4,	// (0x000539d0) tabs_3_passive_pane_t1

0x704a,	// (0x00050b66) bg_active_tab_pane_cp3_ParamLimits

0x704a,	// (0x00050b66) bg_active_tab_pane_cp3

0x9ec6,	// (0x000539e2) tabs_4_active_pane_g1

0x9ece,	// (0x000539ea) tabs_4_active_pane_t1

0x704a,	// (0x00050b66) bg_passive_tab_pane_cp3_ParamLimits

0x704a,	// (0x00050b66) bg_passive_tab_pane_cp3

0x9ec6,	// (0x000539e2) tabs_4_1_passive_pane_g1

0x9ece,	// (0x000539ea) tabs_4_1_passive_pane_t1

0x04b3,	// (0x00049fcf) list_highlight_pane_cp2

0xc8c6,	// (0x000563e2) list_set_pane_ParamLimits

0xc8c6,	// (0x000563e2) list_set_pane

0xc98e,	// (0x000564aa) main_pane_set_t1_ParamLimits

0xc98e,	// (0x000564aa) main_pane_set_t1

0xc9ae,	// (0x000564ca) main_pane_set_t2_ParamLimits

0xc9ae,	// (0x000564ca) main_pane_set_t2

0xc9c2,	// (0x000564de) main_pane_set_t3_ParamLimits

0xc9c2,	// (0x000564de) main_pane_set_t3

0xc9d6,	// (0x000564f2) main_pane_set_t4_ParamLimits

0xc9d6,	// (0x000564f2) main_pane_set_t4

0x0003,

0xf986,	// (0x000594a2) main_pane_set_t_ParamLimits

0xf986,	// (0x000594a2) main_pane_set_t

0xc9ea,	// (0x00056506) setting_code_pane

0x3a8d,	// (0x0004d5a9) setting_slider_graphic_pane

0x3a8d,	// (0x0004d5a9) setting_slider_pane

0x3a8d,	// (0x0004d5a9) setting_text_pane

0x3a8d,	// (0x0004d5a9) setting_volume_pane

0xf0a3,	// (0x00058bbf) volume_set_pane

0x6f17,	// (0x00050a33) bg_set_opt_pane_cp

0xf0ad,	// (0x00058bc9) setting_slider_pane_t1

0xf0c6,	// (0x00058be2) setting_slider_pane_t2

0xf0e0,	// (0x00058bfc) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0005907a) setting_slider_pane_t

0xf0f8,	// (0x00058c14) slider_set_pane

0x6ebd,	// (0x000509d9) bg_set_opt_pane_cp2

0x6f25,	// (0x00050a41) setting_slider_graphic_pane_g1

0xf10e,	// (0x00058c2a) setting_slider_graphic_pane_t1

0xf11e,	// (0x00058c3a) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00059081) setting_slider_graphic_pane_t

0xf12e,	// (0x00058c4a) slider_set_pane_cp

0x6ebd,	// (0x000509d9) input_focus_pane_cp1

0x3920,	// (0x0004d43c) list_set_text_pane

0x6eb3,	// (0x000509cf) setting_text_pane_g1

0x6ebd,	// (0x000509d9) input_focus_pane_cp2

0x6eb3,	// (0x000509cf) setting_code_pane_g1

0x6f2e,	// (0x00050a4a) setting_code_pane_t1

0xe5db,	// (0x000580f7) set_text_pane_t1_ParamLimits

0xe5db,	// (0x000580f7) set_text_pane_t1

0xa2bf,	// (0x00053ddb) set_opt_bg_pane_g1

0xa2c7,	// (0x00053de3) set_opt_bg_pane_g2

0x38f8,	// (0x0004d414) set_opt_bg_pane_g3

0xa2d7,	// (0x00053df3) set_opt_bg_pane_g4

0xa2df,	// (0x00053dfb) set_opt_bg_pane_g5

0xa2e7,	// (0x00053e03) set_opt_bg_pane_g6

0x3902,	// (0x0004d41e) set_opt_bg_pane_g7

0x390c,	// (0x0004d428) set_opt_bg_pane_g8

0x3916,	// (0x0004d432) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0005948f) set_opt_bg_pane_g

0x38eb,	// (0x0004d407) slider_set_pane_g1

0x091e,	// (0x0004a43a) slider_set_pane_g2

0x0006,

0xf964,	// (0x00059480) slider_set_pane_g

0x08a6,	// (0x0004a3c2) volume_set_pane_g1

0x08b0,	// (0x0004a3cc) volume_set_pane_g2

0x08ba,	// (0x0004a3d6) volume_set_pane_g3

0x08c4,	// (0x0004a3e0) volume_set_pane_g4

0x08ce,	// (0x0004a3ea) volume_set_pane_g5

0x08d8,	// (0x0004a3f4) volume_set_pane_g6

0x08e2,	// (0x0004a3fe) volume_set_pane_g7

0x08ec,	// (0x0004a408) volume_set_pane_g8

0x08f6,	// (0x0004a412) volume_set_pane_g9

0x0900,	// (0x0004a41c) volume_set_pane_g10

0x0009,

0xf93c,	// (0x00059458) volume_set_pane_g

0x9ee0,	// (0x000539fc) indicator_pane_ParamLimits

0x9ee0,	// (0x000539fc) indicator_pane

0x9f0c,	// (0x00053a28) main_idle_pane_g2_ParamLimits

0x9f0c,	// (0x00053a28) main_idle_pane_g2

0x9f44,	// (0x00053a60) main_pane_idle_g1_ParamLimits

0x9f44,	// (0x00053a60) main_pane_idle_g1

0x6f3c,	// (0x00050a58) popup_clock_digital_analogue_window_ParamLimits

0x6f3c,	// (0x00050a58) popup_clock_digital_analogue_window

0x9f72,	// (0x00053a8e) soft_indicator_pane_ParamLimits

0x9f72,	// (0x00053a8e) soft_indicator_pane

0x9f8e,	// (0x00053aaa) wallpaper_pane_ParamLimits

0x9f8e,	// (0x00053aaa) wallpaper_pane

0x6eb3,	// (0x000509cf) wallpaper_pane_g1

0x9fa0,	// (0x00053abc) indicator_pane_g1_ParamLimits

0x9fa0,	// (0x00053abc) indicator_pane_g1

0x3d69,	// (0x0004d885) navi_navi_icon_text_pane_srt_g1

0x6f6a,	// (0x00050a86) soft_indicator_pane_t1

0x6f84,	// (0x00050aa0) aid_ps_area_pane

0x9fb9,	// (0x00053ad5) aid_ps_clock_pane

0x6f95,	// (0x00050ab1) aid_ps_indicator_pane

0x6fa1,	// (0x00050abd) indicator_ps_pane_ParamLimits

0x6fa1,	// (0x00050abd) indicator_ps_pane

0x6fb0,	// (0x00050acc) power_save_pane_g1_ParamLimits

0x6fb0,	// (0x00050acc) power_save_pane_g1

0x6fbc,	// (0x00050ad8) power_save_pane_g2_ParamLimits

0x6fbc,	// (0x00050ad8) power_save_pane_g2

0xeee0,	// (0x000589fc) aid_navinavi_width_pane

0x6f84,	// (0x00050aa0) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00059086) power_save_pane_g_ParamLimits

0xf56a,	// (0x00059086) power_save_pane_g

0x6fca,	// (0x00050ae6) power_save_pane_t1_ParamLimits

0x6fca,	// (0x00050ae6) power_save_pane_t1

0x9fb9,	// (0x00053ad5) aid_ps_clock_pane_ParamLimits

0x6f95,	// (0x00050ab1) aid_ps_indicator_pane_ParamLimits

0x6fdc,	// (0x00050af8) power_save_pane_t4_ParamLimits

0x6fdc,	// (0x00050af8) power_save_pane_t4

0x0001,

0xf56f,	// (0x0005908b) power_save_pane_t_ParamLimits

0xf56f,	// (0x0005908b) power_save_pane_t

0x7006,	// (0x00050b22) power_save_t3_ParamLimits

0x7006,	// (0x00050b22) power_save_t3

0x6ff1,	// (0x00050b0d) power_save_t2_ParamLimits

0x6ff1,	// (0x00050b0d) power_save_t2

0x701b,	// (0x00050b37) indicator_ps_pane_g1

0x9fc7,	// (0x00053ae3) ai_gene_pane_ParamLimits

0x9fc7,	// (0x00053ae3) ai_gene_pane

0x9fde,	// (0x00053afa) ai_links_pane_ParamLimits

0x9fde,	// (0x00053afa) ai_links_pane

0x9ff6,	// (0x00053b12) indicator_pane_cp1_ParamLimits

0x9ff6,	// (0x00053b12) indicator_pane_cp1

0xa005,	// (0x00053b21) main_pane_idle_g1_cp_ParamLimits

0xa005,	// (0x00053b21) main_pane_idle_g1_cp

0x7024,	// (0x00050b40) popup_ai_links_title_window

0xa01d,	// (0x00053b39) soft_indicator_pane_cp1_ParamLimits

0xa01d,	// (0x00053b39) soft_indicator_pane_cp1

0x36d2,	// (0x0004d1ee) ai_links_pane_g1

0x36db,	// (0x0004d1f7) grid_ai_links_pane

0xc7fc,	// (0x00056318) ai_gene_pane_1

0x36c0,	// (0x0004d1dc) ai_gene_pane_2

0x36c9,	// (0x0004d1e5) list_highlight_pane_cp4

0xc7d8,	// (0x000562f4) cell_ai_link_pane_ParamLimits

0xc7d8,	// (0x000562f4) cell_ai_link_pane

0x368f,	// (0x0004d1ab) cell_ai_link_pane_g1

0x7200,	// (0x00050d1c) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x00059433) cell_ai_link_pane_g

0x6ebd,	// (0x000509d9) grid_highlight_cp2

0x6ebd,	// (0x000509d9) bg_popup_sub_pane_cp1

0x703b,	// (0x00050b57) popup_ai_links_title_window_t1

0x35db,	// (0x0004d0f7) ai_gene_pane_1_g1_ParamLimits

0x35db,	// (0x0004d0f7) ai_gene_pane_1_g1

0x35e7,	// (0x0004d103) ai_gene_pane_1_g2_ParamLimits

0x35e7,	// (0x0004d103) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x00059429) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x00059429) ai_gene_pane_1_g

0x35f4,	// (0x0004d110) ai_gene_pane_1_t1_ParamLimits

0x35f4,	// (0x0004d110) ai_gene_pane_1_t1

0x3628,	// (0x0004d144) grid_ai_soft_ind_pane

0x35c6,	// (0x0004d0e2) ai_gene_pane_2_t1_ParamLimits

0x35c6,	// (0x0004d0e2) ai_gene_pane_2_t1

0xa031,	// (0x00053b4d) main_pane_empty_t1_ParamLimits

0xa031,	// (0x00053b4d) main_pane_empty_t1

0xa049,	// (0x00053b65) main_pane_empty_t2_ParamLimits

0xa049,	// (0x00053b65) main_pane_empty_t2

0xa05e,	// (0x00053b7a) main_pane_empty_t3_ParamLimits

0xa05e,	// (0x00053b7a) main_pane_empty_t3

0xa070,	// (0x00053b8c) main_pane_empty_t4_ParamLimits

0xa070,	// (0x00053b8c) main_pane_empty_t4

0xa082,	// (0x00053b9e) main_pane_empty_t5_ParamLimits

0xa082,	// (0x00053b9e) main_pane_empty_t5

0x0004,

0xf574,	// (0x00059090) main_pane_empty_t_ParamLimits

0xf574,	// (0x00059090) main_pane_empty_t

0xa310,	// (0x00053e2c) bg_popup_window_pane_ParamLimits

0xa310,	// (0x00053e2c) bg_popup_window_pane

0x3328,	// (0x0004ce44) find_popup_pane_cp2_ParamLimits

0x3328,	// (0x0004ce44) find_popup_pane_cp2

0x3334,	// (0x0004ce50) heading_pane_ParamLimits

0x3334,	// (0x0004ce50) heading_pane

0x6ebd,	// (0x000509d9) bg_popup_sub_pane

0xc6bb,	// (0x000561d7) bg_popup_window_pane_g1_ParamLimits

0xc6bb,	// (0x000561d7) bg_popup_window_pane_g1

0xc6ca,	// (0x000561e6) bg_popup_window_pane_g2_ParamLimits

0xc6ca,	// (0x000561e6) bg_popup_window_pane_g2

0xc6d6,	// (0x000561f2) bg_popup_window_pane_g3_ParamLimits

0xc6d6,	// (0x000561f2) bg_popup_window_pane_g3

0xc6e2,	// (0x000561fe) bg_popup_window_pane_g4_ParamLimits

0xc6e2,	// (0x000561fe) bg_popup_window_pane_g4

0xc6f1,	// (0x0005620d) bg_popup_window_pane_g5_ParamLimits

0xc6f1,	// (0x0005620d) bg_popup_window_pane_g5

0xc701,	// (0x0005621d) bg_popup_window_pane_g6_ParamLimits

0xc701,	// (0x0005621d) bg_popup_window_pane_g6

0xc70d,	// (0x00056229) bg_popup_window_pane_g7_ParamLimits

0xc70d,	// (0x00056229) bg_popup_window_pane_g7

0xc71c,	// (0x00056238) bg_popup_window_pane_g8_ParamLimits

0xc71c,	// (0x00056238) bg_popup_window_pane_g8

0xc72b,	// (0x00056247) bg_popup_window_pane_g9_ParamLimits

0xc72b,	// (0x00056247) bg_popup_window_pane_g9

0x330e,	// (0x0004ce2a) bg_popup_window_pane_g10_ParamLimits

0x330e,	// (0x0004ce2a) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x000593f1) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x000593f1) bg_popup_window_pane_g

0x3237,	// (0x0004cd53) bg_popup_heading_pane_ParamLimits

0x3237,	// (0x0004cd53) bg_popup_heading_pane

0x09e6,	// (0x0004a502) tabs_4_passive_pane_cp_srt_ParamLimits

0x09e6,	// (0x0004a502) tabs_4_passive_pane_cp_srt

0x09f8,	// (0x0004a514) tabs_4_passive_pane_srt_ParamLimits

0x324b,	// (0x0004cd67) heading_pane_g2

0x09f8,	// (0x0004a514) tabs_4_passive_pane_srt

0x25e4,	// (0x0004c100) bg_passive_tab_pane_cp3_srt_ParamLimits

0x25e4,	// (0x0004c100) bg_passive_tab_pane_cp3_srt

0x3253,	// (0x0004cd6f) heading_pane_t1_ParamLimits

0x3253,	// (0x0004cd6f) heading_pane_t1

0x326a,	// (0x0004cd86) heading_pane_t2_ParamLimits

0x326a,	// (0x0004cd86) heading_pane_t2

0x0001,

0xf8d0,	// (0x000593ec) heading_pane_t_ParamLimits

0xf8d0,	// (0x000593ec) heading_pane_t

0x2d62,	// (0x0004c87e) bg_popup_heading_pane_g1

0x2e11,	// (0x0004c92d) bg_popup_heading_pane_g2

0x2e1b,	// (0x0004c937) bg_popup_heading_pane_g3

0x2e25,	// (0x0004c941) bg_popup_heading_pane_g4

0x2e2f,	// (0x0004c94b) bg_popup_heading_pane_g5

0x2e39,	// (0x0004c955) bg_popup_heading_pane_g6

0x2e41,	// (0x0004c95d) bg_popup_heading_pane_g7

0x2e49,	// (0x0004c965) bg_popup_heading_pane_g8

0x2e53,	// (0x0004c96f) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x000593a8) bg_popup_heading_pane_g

0x2570,	// (0x0004c08c) bg_popup_sub_pane_g1

0x2578,	// (0x0004c094) bg_popup_sub_pane_g2

0x2580,	// (0x0004c09c) bg_popup_sub_pane_g3

0x2588,	// (0x0004c0a4) bg_popup_sub_pane_g4

0x2590,	// (0x0004c0ac) bg_popup_sub_pane_g5

0x2598,	// (0x0004c0b4) bg_popup_sub_pane_g6

0x25a0,	// (0x0004c0bc) bg_popup_sub_pane_g7

0x25a8,	// (0x0004c0c4) bg_popup_sub_pane_g8

0x25b0,	// (0x0004c0cc) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x00059382) bg_popup_sub_pane_g

0x704a,	// (0x00050b66) bg_popup_window_pane_cp5_ParamLimits

0x704a,	// (0x00050b66) bg_popup_window_pane_cp5

0x7066,	// (0x00050b82) popup_note_window_g1_ParamLimits

0x7066,	// (0x00050b82) popup_note_window_g1

0x7072,	// (0x00050b8e) popup_note_window_t1_ParamLimits

0x7072,	// (0x00050b8e) popup_note_window_t1

0x7088,	// (0x00050ba4) popup_note_window_t2_ParamLimits

0x7088,	// (0x00050ba4) popup_note_window_t2

0x709e,	// (0x00050bba) popup_note_window_t3_ParamLimits

0x709e,	// (0x00050bba) popup_note_window_t3

0x70b4,	// (0x00050bd0) popup_note_window_t4_ParamLimits

0x70b4,	// (0x00050bd0) popup_note_window_t4

0x70dc,	// (0x00050bf8) popup_note_window_t5_ParamLimits

0x70dc,	// (0x00050bf8) popup_note_window_t5

0x0004,

0xf57f,	// (0x0005909b) popup_note_window_t_ParamLimits

0xf57f,	// (0x0005909b) popup_note_window_t

0x7100,	// (0x00050c1c) bg_popup_window_pane_cp6_ParamLimits

0x7100,	// (0x00050c1c) bg_popup_window_pane_cp6

0x2cde,	// (0x0004c7fa) popup_note_image_window_g1_ParamLimits

0x2cde,	// (0x0004c7fa) popup_note_image_window_g1

0x2cea,	// (0x0004c806) popup_note_image_window_g2_ParamLimits

0x2cea,	// (0x0004c806) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x00059376) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x00059376) popup_note_image_window_g

0x2d03,	// (0x0004c81f) popup_note_image_window_t1_ParamLimits

0x2d03,	// (0x0004c81f) popup_note_image_window_t1

0x2d1c,	// (0x0004c838) popup_note_image_window_t2_ParamLimits

0x2d1c,	// (0x0004c838) popup_note_image_window_t2

0x2d35,	// (0x0004c851) popup_note_image_window_t3_ParamLimits

0x2d35,	// (0x0004c851) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0005937b) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0005937b) popup_note_image_window_t

0x2b9e,	// (0x0004c6ba) bg_popup_window_pane_cp7_ParamLimits

0x2b9e,	// (0x0004c6ba) bg_popup_window_pane_cp7

0x2bce,	// (0x0004c6ea) popup_note_wait_window_g1_ParamLimits

0x2bce,	// (0x0004c6ea) popup_note_wait_window_g1

0x2bda,	// (0x0004c6f6) popup_note_wait_window_g2_ParamLimits

0x2bda,	// (0x0004c6f6) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x00059364) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x00059364) popup_note_wait_window_g

0x2bf2,	// (0x0004c70e) popup_note_wait_window_t1_ParamLimits

0x2bf2,	// (0x0004c70e) popup_note_wait_window_t1

0x2c19,	// (0x0004c735) popup_note_wait_window_t2_ParamLimits

0x2c19,	// (0x0004c735) popup_note_wait_window_t2

0x2c37,	// (0x0004c753) popup_note_wait_window_t3_ParamLimits

0x2c37,	// (0x0004c753) popup_note_wait_window_t3

0x2c4a,	// (0x0004c766) popup_note_wait_window_t4_ParamLimits

0x2c4a,	// (0x0004c766) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0005936b) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0005936b) popup_note_wait_window_t

0x2c6f,	// (0x0004c78b) wait_bar_pane_ParamLimits

0x2c6f,	// (0x0004c78b) wait_bar_pane

0x6ebd,	// (0x000509d9) wait_anim_pane

0x6ebd,	// (0x000509d9) wait_border_pane

0x6eb3,	// (0x000509cf) wait_anim_pane_g1

0x6eb3,	// (0x000509cf) wait_anim_pane_g2

0x0001,

0xf708,	// (0x00059224) wait_anim_pane_g

0x2b42,	// (0x0004c65e) wait_border_pane_g1

0x2b4d,	// (0x0004c669) wait_border_pane_g2

0x2b56,	// (0x0004c672) wait_border_pane_g3

0x0002,

0xf841,	// (0x0005935d) wait_border_pane_g

0x29ac,	// (0x0004c4c8) bg_popup_window_pane_cp16_ParamLimits

0x29ac,	// (0x0004c4c8) bg_popup_window_pane_cp16

0x2aac,	// (0x0004c5c8) indicator_popup_pane_cp4_ParamLimits

0x2aac,	// (0x0004c5c8) indicator_popup_pane_cp4

0x2ac0,	// (0x0004c5dc) popup_query_data_window_t1_ParamLimits

0x2ac0,	// (0x0004c5dc) popup_query_data_window_t1

0x2ad2,	// (0x0004c5ee) popup_query_data_window_t2_ParamLimits

0x2ad2,	// (0x0004c5ee) popup_query_data_window_t2

0x2aeb,	// (0x0004c607) popup_query_data_window_t3_ParamLimits

0x2aeb,	// (0x0004c607) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x00059356) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x00059356) popup_query_data_window_t

0x2b05,	// (0x0004c621) query_popup_data_pane_ParamLimits

0x2b05,	// (0x0004c621) query_popup_data_pane

0x2b19,	// (0x0004c635) query_popup_data_pane_cp1_ParamLimits

0x2b19,	// (0x0004c635) query_popup_data_pane_cp1

0x29ac,	// (0x0004c4c8) bg_popup_window_pane_cp10_ParamLimits

0x29ac,	// (0x0004c4c8) bg_popup_window_pane_cp10

0x29de,	// (0x0004c4fa) indicator_popup_pane_ParamLimits

0x29de,	// (0x0004c4fa) indicator_popup_pane

0x2a00,	// (0x0004c51c) popup_query_code_window_t1_ParamLimits

0x2a00,	// (0x0004c51c) popup_query_code_window_t1

0x2a1a,	// (0x0004c536) popup_query_code_window_t2_ParamLimits

0x2a1a,	// (0x0004c536) popup_query_code_window_t2

0x2a63,	// (0x0004c57f) popup_query_code_window_t3_ParamLimits

0x2a63,	// (0x0004c57f) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0005934f) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0005934f) popup_query_code_window_t

0x2a92,	// (0x0004c5ae) query_popup_pane_ParamLimits

0x2a92,	// (0x0004c5ae) query_popup_pane

0x7100,	// (0x00050c1c) bg_popup_window_pane_cp15_ParamLimits

0x7100,	// (0x00050c1c) bg_popup_window_pane_cp15

0x7120,	// (0x00050c3c) indicator_popup_pane_cp1_ParamLimits

0x7120,	// (0x00050c3c) indicator_popup_pane_cp1

0x7133,	// (0x00050c4f) indicator_popup_pane_cp2_ParamLimits

0x7133,	// (0x00050c4f) indicator_popup_pane_cp2

0x714e,	// (0x00050c6a) popup_query_data_code_window_g1_ParamLimits

0x714e,	// (0x00050c6a) popup_query_data_code_window_g1

0x7161,	// (0x00050c7d) popup_query_data_code_window_t1_ParamLimits

0x7161,	// (0x00050c7d) popup_query_data_code_window_t1

0x7173,	// (0x00050c8f) popup_query_data_code_window_t2_ParamLimits

0x7173,	// (0x00050c8f) popup_query_data_code_window_t2

0x7185,	// (0x00050ca1) popup_query_data_code_window_t3_ParamLimits

0x7185,	// (0x00050ca1) popup_query_data_code_window_t3

0x719b,	// (0x00050cb7) popup_query_data_code_window_t4_ParamLimits

0x719b,	// (0x00050cb7) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x000590a6) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x000590a6) popup_query_data_code_window_t

0xad8a,	// (0x000548a6) list_single_midp_graphic_pane_g3

0x71b5,	// (0x00050cd1) query_popup_data_pane_cp2_ParamLimits

0x71c8,	// (0x00050ce4) query_popup_pane_cp2_ParamLimits

0x71c8,	// (0x00050ce4) query_popup_pane_cp2

0x6ebd,	// (0x000509d9) bg_popup_window_pane_cp11

0x29a4,	// (0x0004c4c0) heading_pane_cp5

0x725e,	// (0x00050d7a) listscroll_popup_info_pane

0x6ebd,	// (0x000509d9) input_focus_pane_cp3

0x71e3,	// (0x00050cff) query_popup_pane_t1

0x71f1,	// (0x00050d0d) list_popup_info_pane_ParamLimits

0x71f1,	// (0x00050d0d) list_popup_info_pane

0x7200,	// (0x00050d1c) listscroll_popup_info_pane_g1

0x7208,	// (0x00050d24) scroll_pane_cp7

0x7212,	// (0x00050d2e) popup_info_list_pane_t1_ParamLimits

0x7212,	// (0x00050d2e) popup_info_list_pane_t1

0x722c,	// (0x00050d48) popup_info_list_pane_t2_ParamLimits

0x722c,	// (0x00050d48) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x000590af) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x000590af) popup_info_list_pane_t

0x6ebd,	// (0x000509d9) bg_popup_window_pane_cp12

0x3d83,	// (0x0004d89f) find_popup_pane

0x6f17,	// (0x00050a33) bg_popup_window_pane_cp3

0x7246,	// (0x00050d62) heading_pane_cp3

0x7252,	// (0x00050d6e) listscroll_popup_graphic_pane

0x6ebd,	// (0x000509d9) bg_popup_window_pane_cp4

0xa0e4,	// (0x00053c00) heading_pane_cp4

0x725e,	// (0x00050d7a) listscroll_popup_colour_pane

0xa0ee,	// (0x00053c0a) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa0ee,	// (0x00053c0a) cell_large_graphic_colour_none_popup_pane

0xa102,	// (0x00053c1e) grid_large_graphic_colour_popup_pane_ParamLimits

0xa102,	// (0x00053c1e) grid_large_graphic_colour_popup_pane

0xa126,	// (0x00053c42) listscroll_popup_colour_pane_g1_ParamLimits

0xa126,	// (0x00053c42) listscroll_popup_colour_pane_g1

0xa13d,	// (0x00053c59) listscroll_popup_colour_pane_g2_ParamLimits

0xa13d,	// (0x00053c59) listscroll_popup_colour_pane_g2

0xa154,	// (0x00053c70) listscroll_popup_colour_pane_g3_ParamLimits

0xa154,	// (0x00053c70) listscroll_popup_colour_pane_g3

0xa164,	// (0x00053c80) listscroll_popup_colour_pane_g4_ParamLimits

0xa164,	// (0x00053c80) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x000590b4) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x000590b4) listscroll_popup_colour_pane_g

0x7266,	// (0x00050d82) scroll_pane_cp6_ParamLimits

0x7266,	// (0x00050d82) scroll_pane_cp6

0xa174,	// (0x00053c90) cell_large_graphic_colour_popup_pane_ParamLimits

0xa174,	// (0x00053c90) cell_large_graphic_colour_popup_pane

0x7278,	// (0x00050d94) cell_large_graphic_colour_none_popup_pane_t1

0x6ebd,	// (0x000509d9) grid_highlight_pane_cp5

0x7287,	// (0x00050da3) cell_large_graphic_colour_popup_pane_g1

0x728f,	// (0x00050dab) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x000590bd) cell_large_graphic_colour_popup_pane_g

0x7297,	// (0x00050db3) cell_large_graphic_colour_popup_pane_g2_copy1

0x72a0,	// (0x00050dbc) grid_highlight_pane_cp4

0x72a8,	// (0x00050dc4) bg_popup_window_pane_cp8_ParamLimits

0x72a8,	// (0x00050dc4) bg_popup_window_pane_cp8

0x72c3,	// (0x00050ddf) popup_snote_single_text_window_g1_ParamLimits

0x72c3,	// (0x00050ddf) popup_snote_single_text_window_g1

0x72d5,	// (0x00050df1) popup_snote_single_text_window_t1_ParamLimits

0x72d5,	// (0x00050df1) popup_snote_single_text_window_t1

0x72e8,	// (0x00050e04) popup_snote_single_text_window_t2_ParamLimits

0x72e8,	// (0x00050e04) popup_snote_single_text_window_t2

0x72fb,	// (0x00050e17) popup_snote_single_text_window_t3_ParamLimits

0x72fb,	// (0x00050e17) popup_snote_single_text_window_t3

0x7334,	// (0x00050e50) popup_snote_single_text_window_t4_ParamLimits

0x7334,	// (0x00050e50) popup_snote_single_text_window_t4

0x7368,	// (0x00050e84) popup_snote_single_text_window_t5_ParamLimits

0x7368,	// (0x00050e84) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x000590c2) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x000590c2) popup_snote_single_text_window_t

0x7397,	// (0x00050eb3) bg_popup_window_pane_cp9_ParamLimits

0x7397,	// (0x00050eb3) bg_popup_window_pane_cp9

0x72c3,	// (0x00050ddf) popup_snote_single_graphic_window_g1_ParamLimits

0x72c3,	// (0x00050ddf) popup_snote_single_graphic_window_g1

0x73a5,	// (0x00050ec1) popup_snote_single_graphic_window_g2_ParamLimits

0x73a5,	// (0x00050ec1) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x000590cd) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x000590cd) popup_snote_single_graphic_window_g

0x73b1,	// (0x00050ecd) popup_snote_single_graphic_window_t1_ParamLimits

0x73b1,	// (0x00050ecd) popup_snote_single_graphic_window_t1

0x73c4,	// (0x00050ee0) popup_snote_single_graphic_window_t2_ParamLimits

0x73c4,	// (0x00050ee0) popup_snote_single_graphic_window_t2

0x73d7,	// (0x00050ef3) popup_snote_single_graphic_window_t3_ParamLimits

0x73d7,	// (0x00050ef3) popup_snote_single_graphic_window_t3

0x7410,	// (0x00050f2c) popup_snote_single_graphic_window_t4_ParamLimits

0x7410,	// (0x00050f2c) popup_snote_single_graphic_window_t4

0x7444,	// (0x00050f60) popup_snote_single_graphic_window_t5_ParamLimits

0x7444,	// (0x00050f60) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x000590d2) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x000590d2) popup_snote_single_graphic_window_t

0x3cc1,	// (0x0004d7dd) grid_graphic_popup_pane_ParamLimits

0x3cc1,	// (0x0004d7dd) grid_graphic_popup_pane

0x3cef,	// (0x0004d80b) listscroll_popup_graphic_pane_g1_ParamLimits

0x3cef,	// (0x0004d80b) listscroll_popup_graphic_pane_g1

0xcaef,	// (0x0005660b) listscroll_popup_graphic_pane_g2_ParamLimits

0xcaef,	// (0x0005660b) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x000594cc) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x000594cc) listscroll_popup_graphic_pane_g

0x3d17,	// (0x0004d833) scroll_pane_cp5

0xcaae,	// (0x000565ca) cell_graphic_popup_pane_ParamLimits

0xcaae,	// (0x000565ca) cell_graphic_popup_pane

0x3c4a,	// (0x0004d766) cell_graphic_popup_pane_g1

0x3c52,	// (0x0004d76e) cell_graphic_popup_pane_g2

0x7297,	// (0x00050db3) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x000594c5) cell_graphic_popup_pane_g

0x3c5b,	// (0x0004d777) cell_graphic_popup_pane_t2

0x72a0,	// (0x00050dbc) grid_highlight_pane_cp3

0x7485,	// (0x00050fa1) list_gen_pane_ParamLimits

0x7485,	// (0x00050fa1) list_gen_pane

0x74ad,	// (0x00050fc9) scroll_pane

0xca65,	// (0x00056581) bg_list_pane_g1_ParamLimits

0xca65,	// (0x00056581) bg_list_pane_g1

0x3bbf,	// (0x0004d6db) bg_list_pane_g2_ParamLimits

0x3bbf,	// (0x0004d6db) bg_list_pane_g2

0x3bd4,	// (0x0004d6f0) bg_list_pane_g3_ParamLimits

0x3bd4,	// (0x0004d6f0) bg_list_pane_g3

0x3be8,	// (0x0004d704) bg_list_pane_g4_ParamLimits

0x3be8,	// (0x0004d704) bg_list_pane_g4

0xca82,	// (0x0005659e) bg_list_pane_g5_ParamLimits

0xca82,	// (0x0005659e) bg_list_pane_g5

0x0004,

0xf99e,	// (0x000594ba) bg_list_pane_g_ParamLimits

0xf99e,	// (0x000594ba) bg_list_pane_g

0xca28,	// (0x00056544) list_double2_graphic_large_graphic_pane_ParamLimits

0xca28,	// (0x00056544) list_double2_graphic_large_graphic_pane

0xca28,	// (0x00056544) list_double2_graphic_pane_ParamLimits

0xca28,	// (0x00056544) list_double2_graphic_pane

0xca28,	// (0x00056544) list_double2_large_graphic_pane_ParamLimits

0xca28,	// (0x00056544) list_double2_large_graphic_pane

0xca28,	// (0x00056544) list_double2_pane_ParamLimits

0xca28,	// (0x00056544) list_double2_pane

0xca28,	// (0x00056544) list_double_graphic_heading_pane_ParamLimits

0xca28,	// (0x00056544) list_double_graphic_heading_pane

0xca28,	// (0x00056544) list_double_graphic_pane_ParamLimits

0xca28,	// (0x00056544) list_double_graphic_pane

0xca28,	// (0x00056544) list_double_heading_pane_ParamLimits

0xca28,	// (0x00056544) list_double_heading_pane

0xca28,	// (0x00056544) list_double_large_graphic_pane_ParamLimits

0xca28,	// (0x00056544) list_double_large_graphic_pane

0xca28,	// (0x00056544) list_double_number_pane_ParamLimits

0xca28,	// (0x00056544) list_double_number_pane

0xca28,	// (0x00056544) list_double_pane_ParamLimits

0xca28,	// (0x00056544) list_double_pane

0xca28,	// (0x00056544) list_double_time_pane_ParamLimits

0xca28,	// (0x00056544) list_double_time_pane

0xca28,	// (0x00056544) list_setting_number_pane_ParamLimits

0xca28,	// (0x00056544) list_setting_number_pane

0xca28,	// (0x00056544) list_setting_pane_ParamLimits

0xca28,	// (0x00056544) list_setting_pane

0xca3c,	// (0x00056558) list_single_2graphic_pane_ParamLimits

0xca3c,	// (0x00056558) list_single_2graphic_pane

0xca3c,	// (0x00056558) list_single_graphic_heading_pane_ParamLimits

0xca3c,	// (0x00056558) list_single_graphic_heading_pane

0xca3c,	// (0x00056558) list_single_graphic_pane_ParamLimits

0xca3c,	// (0x00056558) list_single_graphic_pane

0xca3c,	// (0x00056558) list_single_heading_pane_ParamLimits

0xca3c,	// (0x00056558) list_single_heading_pane

0xca3c,	// (0x00056558) list_single_large_graphic_pane_ParamLimits

0xca3c,	// (0x00056558) list_single_large_graphic_pane

0xca3c,	// (0x00056558) list_single_number_heading_pane_ParamLimits

0xca3c,	// (0x00056558) list_single_number_heading_pane

0xca3c,	// (0x00056558) list_single_number_pane_ParamLimits

0xca3c,	// (0x00056558) list_single_number_pane

0xca3c,	// (0x00056558) list_single_pane_ParamLimits

0xca3c,	// (0x00056558) list_single_pane

0x6ebd,	// (0x000509d9) list_highlight_pane_cp1

0xe5f4,	// (0x00058110) list_single_pane_g1_ParamLimits

0xe5f4,	// (0x00058110) list_single_pane_g1

0x0611,	// (0x0004a12d) list_single_pane_g2_ParamLimits

0x0611,	// (0x0004a12d) list_single_pane_g2

0x0001,

0xf5d2,	// (0x000590ee) list_single_pane_g_ParamLimits

0xf5d2,	// (0x000590ee) list_single_pane_g

0xeaa7,	// (0x000585c3) list_single_pane_t1_ParamLimits

0xeaa7,	// (0x000585c3) list_single_pane_t1

0xe5f4,	// (0x00058110) list_single_number_pane_g1_ParamLimits

0xe5f4,	// (0x00058110) list_single_number_pane_g1

0x0611,	// (0x0004a12d) list_single_number_pane_g2_ParamLimits

0x0611,	// (0x0004a12d) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x000590ee) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x000590ee) list_single_number_pane_g

0xe9e8,	// (0x00058504) list_single_number_pane_t1_ParamLimits

0xe9e8,	// (0x00058504) list_single_number_pane_t1

0x9a21,	// (0x0005353d) list_single_number_pane_t2_ParamLimits

0x9a21,	// (0x0005353d) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0005947b) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0005947b) list_single_number_pane_t

0x93e4,	// (0x00052f00) list_single_graphic_pane_g1_ParamLimits

0x93e4,	// (0x00052f00) list_single_graphic_pane_g1

0xe5f4,	// (0x00058110) list_single_graphic_pane_g2_ParamLimits

0xe5f4,	// (0x00058110) list_single_graphic_pane_g2

0x0611,	// (0x0004a12d) list_single_graphic_pane_g3_ParamLimits

0x0611,	// (0x0004a12d) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x000590dd) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x000590dd) list_single_graphic_pane_g

0x93f0,	// (0x00052f0c) list_single_graphic_pane_t1_ParamLimits

0x93f0,	// (0x00052f0c) list_single_graphic_pane_t1

0x9406,	// (0x00052f22) list_single_heading_pane_g1_ParamLimits

0x9406,	// (0x00052f22) list_single_heading_pane_g1

0x0611,	// (0x0004a12d) list_single_heading_pane_g2_ParamLimits

0x0611,	// (0x0004a12d) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x000590e4) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x000590e4) list_single_heading_pane_g

0x9419,	// (0x00052f35) list_single_heading_pane_t1_ParamLimits

0x9419,	// (0x00052f35) list_single_heading_pane_t1

0xa19f,	// (0x00053cbb) list_single_heading_pane_t2_ParamLimits

0xa19f,	// (0x00053cbb) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x000590e9) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x000590e9) list_single_heading_pane_t

0xe5f4,	// (0x00058110) list_single_number_heading_pane_g1_ParamLimits

0xe5f4,	// (0x00058110) list_single_number_heading_pane_g1

0x0611,	// (0x0004a12d) list_single_number_heading_pane_g2_ParamLimits

0x0611,	// (0x0004a12d) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x000590ee) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x000590ee) list_single_number_heading_pane_g

0xe600,	// (0x0005811c) list_single_number_heading_pane_t1_ParamLimits

0xe600,	// (0x0005811c) list_single_number_heading_pane_t1

0x942f,	// (0x00052f4b) list_single_number_heading_pane_t2_ParamLimits

0x942f,	// (0x00052f4b) list_single_number_heading_pane_t2

0xe616,	// (0x00058132) list_single_number_heading_pane_t3_ParamLimits

0xe616,	// (0x00058132) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x000590f3) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x000590f3) list_single_number_heading_pane_t

0x9441,	// (0x00052f5d) list_single_graphic_heading_pane_g1_ParamLimits

0x9441,	// (0x00052f5d) list_single_graphic_heading_pane_g1

0xa1b1,	// (0x00053ccd) list_single_graphic_heading_pane_g4_ParamLimits

0xa1b1,	// (0x00053ccd) list_single_graphic_heading_pane_g4

0x0611,	// (0x0004a12d) list_single_graphic_heading_pane_g5_ParamLimits

0x0611,	// (0x0004a12d) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x000590fa) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x000590fa) list_single_graphic_heading_pane_g

0xe600,	// (0x0005811c) list_single_graphic_heading_pane_t1_ParamLimits

0xe600,	// (0x0005811c) list_single_graphic_heading_pane_t1

0x9459,	// (0x00052f75) list_single_graphic_heading_pane_t2_ParamLimits

0x9459,	// (0x00052f75) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x00059101) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x00059101) list_single_graphic_heading_pane_t

0x0aa3,	// (0x0004a5bf) list_single_large_graphic_pane_g1_ParamLimits

0x0aa3,	// (0x0004a5bf) list_single_large_graphic_pane_g1

0xe5f4,	// (0x00058110) list_single_large_graphic_pane_g2_ParamLimits

0xe5f4,	// (0x00058110) list_single_large_graphic_pane_g2

0x0611,	// (0x0004a12d) list_single_large_graphic_pane_g3_ParamLimits

0x0611,	// (0x0004a12d) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00059106) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00059106) list_single_large_graphic_pane_g

0x2b4d,	// (0x0004c669) wait_border_pane_g2_copy1

0xa1c2,	// (0x00053cde) list_single_large_graphic_pane_g4_cp2

0xe600,	// (0x0005811c) list_single_large_graphic_pane_t1_ParamLimits

0xe600,	// (0x0005811c) list_single_large_graphic_pane_t1

0x51f6,	// (0x0004ed12) list_double_pane_g1_ParamLimits

0x51f6,	// (0x0004ed12) list_double_pane_g1

0xa1ca,	// (0x00053ce6) list_double_pane_g2_ParamLimits

0xa1ca,	// (0x00053ce6) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0005910d) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0005910d) list_double_pane_g

0x9471,	// (0x00052f8d) list_double_pane_t1_ParamLimits

0x9471,	// (0x00052f8d) list_double_pane_t1

0x9487,	// (0x00052fa3) list_double_pane_t2_ParamLimits

0x9487,	// (0x00052fa3) list_double_pane_t2

0x0001,

0xf5f6,	// (0x00059112) list_double_pane_t_ParamLimits

0xf5f6,	// (0x00059112) list_double_pane_t

0x9499,	// (0x00052fb5) list_double2_pane_g1_ParamLimits

0x9499,	// (0x00052fb5) list_double2_pane_g1

0x94aa,	// (0x00052fc6) list_double2_pane_g2_ParamLimits

0x94aa,	// (0x00052fc6) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x00059117) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x00059117) list_double2_pane_g

0x94b6,	// (0x00052fd2) list_double2_pane_t1_ParamLimits

0x94b6,	// (0x00052fd2) list_double2_pane_t1

0x94cc,	// (0x00052fe8) list_double2_pane_t2_ParamLimits

0x94cc,	// (0x00052fe8) list_double2_pane_t2

0x0001,

0xf600,	// (0x0005911c) list_double2_pane_t_ParamLimits

0xf600,	// (0x0005911c) list_double2_pane_t

0x51f6,	// (0x0004ed12) list_double_number_pane_g1_ParamLimits

0x51f6,	// (0x0004ed12) list_double_number_pane_g1

0xa1ca,	// (0x00053ce6) list_double_number_pane_g2_ParamLimits

0xa1ca,	// (0x00053ce6) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0005910d) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0005910d) list_double_number_pane_g

0x94de,	// (0x00052ffa) list_double_number_pane_t1_ParamLimits

0x94de,	// (0x00052ffa) list_double_number_pane_t1

0x94f0,	// (0x0005300c) list_double_number_pane_t2_ParamLimits

0x94f0,	// (0x0005300c) list_double_number_pane_t2

0x9506,	// (0x00053022) list_double_number_pane_t3_ParamLimits

0x9506,	// (0x00053022) list_double_number_pane_t3

0x0002,

0xf605,	// (0x00059121) list_double_number_pane_t_ParamLimits

0xf605,	// (0x00059121) list_double_number_pane_t

0x9518,	// (0x00053034) list_double_graphic_pane_g1_ParamLimits

0x9518,	// (0x00053034) list_double_graphic_pane_g1

0x9524,	// (0x00053040) list_double_graphic_pane_g2_ParamLimits

0x9524,	// (0x00053040) list_double_graphic_pane_g2

0x9533,	// (0x0005304f) list_double_graphic_pane_g3_ParamLimits

0x9533,	// (0x0005304f) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x00059128) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x00059128) list_double_graphic_pane_g

0x954b,	// (0x00053067) list_double_graphic_pane_t1_ParamLimits

0x954b,	// (0x00053067) list_double_graphic_pane_t1

0x9561,	// (0x0005307d) list_double_graphic_pane_t2_ParamLimits

0x9561,	// (0x0005307d) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x00059131) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x00059131) list_double_graphic_pane_t

0x9573,	// (0x0005308f) list_double2_graphic_pane_g1_ParamLimits

0x9573,	// (0x0005308f) list_double2_graphic_pane_g1

0xa1d6,	// (0x00053cf2) list_double2_graphic_pane_g2_ParamLimits

0xa1d6,	// (0x00053cf2) list_double2_graphic_pane_g2

0xa1e2,	// (0x00053cfe) list_double2_graphic_pane_g3_ParamLimits

0xa1e2,	// (0x00053cfe) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x00059136) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x00059136) list_double2_graphic_pane_g

0x957f,	// (0x0005309b) list_double2_graphic_pane_t1_ParamLimits

0x957f,	// (0x0005309b) list_double2_graphic_pane_t1

0x9595,	// (0x000530b1) list_double2_graphic_pane_t2_ParamLimits

0x9595,	// (0x000530b1) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0005913d) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0005913d) list_double2_graphic_pane_t

0x95a7,	// (0x000530c3) list_double_large_graphic_pane_g1_ParamLimits

0x95a7,	// (0x000530c3) list_double_large_graphic_pane_g1

0x95d2,	// (0x000530ee) list_double_large_graphic_pane_g2_ParamLimits

0x95d2,	// (0x000530ee) list_double_large_graphic_pane_g2

0xa1ca,	// (0x00053ce6) list_double_large_graphic_pane_g3_ParamLimits

0xa1ca,	// (0x00053ce6) list_double_large_graphic_pane_g3

0x95e8,	// (0x00053104) list_double_large_graphic_pane_g4_ParamLimits

0x95e8,	// (0x00053104) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x00059142) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x00059142) list_double_large_graphic_pane_g

0x95fb,	// (0x00053117) list_double_large_graphic_pane_t1_ParamLimits

0x95fb,	// (0x00053117) list_double_large_graphic_pane_t1

0x9614,	// (0x00053130) list_double_large_graphic_pane_t2_ParamLimits

0x9614,	// (0x00053130) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0005914d) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0005914d) list_double_large_graphic_pane_t

0xa1ee,	// (0x00053d0a) list_double2_large_graphic_pane_g1_ParamLimits

0xa1ee,	// (0x00053d0a) list_double2_large_graphic_pane_g1

0xa1fa,	// (0x00053d16) list_double2_large_graphic_pane_g2_ParamLimits

0xa1fa,	// (0x00053d16) list_double2_large_graphic_pane_g2

0xa1e2,	// (0x00053cfe) list_double2_large_graphic_pane_g3_ParamLimits

0xa1e2,	// (0x00053cfe) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x00059152) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x00059152) list_double2_large_graphic_pane_g

0x9626,	// (0x00053142) list_double2_large_graphic_pane_t1_ParamLimits

0x9626,	// (0x00053142) list_double2_large_graphic_pane_t1

0x963c,	// (0x00053158) list_double2_large_graphic_pane_t2_ParamLimits

0x963c,	// (0x00053158) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x00059159) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x00059159) list_double2_large_graphic_pane_t

0x964e,	// (0x0005316a) list_double_heading_pane_g1_ParamLimits

0x964e,	// (0x0005316a) list_double_heading_pane_g1

0x965f,	// (0x0005317b) list_double_heading_pane_g2_ParamLimits

0x965f,	// (0x0005317b) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0005915e) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0005915e) list_double_heading_pane_g

0x966b,	// (0x00053187) list_double_heading_pane_t1_ParamLimits

0x966b,	// (0x00053187) list_double_heading_pane_t1

0x9681,	// (0x0005319d) list_double_heading_pane_t2_ParamLimits

0x9681,	// (0x0005319d) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x00059163) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x00059163) list_double_heading_pane_t

0xe628,	// (0x00058144) list_double_graphic_heading_pane_g1_ParamLimits

0xe628,	// (0x00058144) list_double_graphic_heading_pane_g1

0x964e,	// (0x0005316a) list_double_graphic_heading_pane_g2_ParamLimits

0x964e,	// (0x0005316a) list_double_graphic_heading_pane_g2

0x965f,	// (0x0005317b) list_double_graphic_heading_pane_g3_ParamLimits

0x965f,	// (0x0005317b) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x00059168) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x00059168) list_double_graphic_heading_pane_g

0x9693,	// (0x000531af) list_double_graphic_heading_pane_t1_ParamLimits

0x9693,	// (0x000531af) list_double_graphic_heading_pane_t1

0x96a9,	// (0x000531c5) list_double_graphic_heading_pane_t2_ParamLimits

0x96a9,	// (0x000531c5) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0005916f) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0005916f) list_double_graphic_heading_pane_t

0x96bb,	// (0x000531d7) list_double_time_pane_g1_ParamLimits

0x96bb,	// (0x000531d7) list_double_time_pane_g1

0x96cc,	// (0x000531e8) list_double_time_pane_g2_ParamLimits

0x96cc,	// (0x000531e8) list_double_time_pane_g2

0x0001,

0xf658,	// (0x00059174) list_double_time_pane_g_ParamLimits

0xf658,	// (0x00059174) list_double_time_pane_g

0x96d8,	// (0x000531f4) list_double_time_pane_t1_ParamLimits

0x96d8,	// (0x000531f4) list_double_time_pane_t1

0x96ee,	// (0x0005320a) list_double_time_pane_t2_ParamLimits

0x96ee,	// (0x0005320a) list_double_time_pane_t2

0x9700,	// (0x0005321c) list_double_time_pane_t3_ParamLimits

0x9700,	// (0x0005321c) list_double_time_pane_t3

0x9712,	// (0x0005322e) list_double_time_pane_t4_ParamLimits

0x9712,	// (0x0005322e) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x00059179) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x00059179) list_double_time_pane_t

0x9724,	// (0x00053240) list_setting_pane_g1_ParamLimits

0x9724,	// (0x00053240) list_setting_pane_g1

0x9730,	// (0x0005324c) list_setting_pane_g2_ParamLimits

0x9730,	// (0x0005324c) list_setting_pane_g2

0x0001,

0xf666,	// (0x00059182) list_setting_pane_g_ParamLimits

0xf666,	// (0x00059182) list_setting_pane_g

0x973c,	// (0x00053258) list_setting_pane_t1_ParamLimits

0x973c,	// (0x00053258) list_setting_pane_t1

0x9756,	// (0x00053272) list_setting_pane_t2_ParamLimits

0x9756,	// (0x00053272) list_setting_pane_t2

0x0002,

0xf66b,	// (0x00059187) list_setting_pane_t_ParamLimits

0xf66b,	// (0x00059187) list_setting_pane_t

0x9795,	// (0x000532b1) set_value_pane_cp_ParamLimits

0x9795,	// (0x000532b1) set_value_pane_cp

0x97a3,	// (0x000532bf) list_setting_number_pane_g1_ParamLimits

0x97a3,	// (0x000532bf) list_setting_number_pane_g1

0x97af,	// (0x000532cb) list_setting_number_pane_g2_ParamLimits

0x97af,	// (0x000532cb) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0005918e) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0005918e) list_setting_number_pane_g

0x97bb,	// (0x000532d7) list_setting_number_pane_t1_ParamLimits

0x97bb,	// (0x000532d7) list_setting_number_pane_t1

0x97d4,	// (0x000532f0) list_setting_number_pane_t2_ParamLimits

0x97d4,	// (0x000532f0) list_setting_number_pane_t2

0x97ee,	// (0x0005330a) list_setting_number_pane_t3_ParamLimits

0x97ee,	// (0x0005330a) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x00059193) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x00059193) list_setting_number_pane_t

0x9795,	// (0x000532b1) set_value_pane_ParamLimits

0x9795,	// (0x000532b1) set_value_pane

0xa20b,	// (0x00053d27) bg_set_opt_pane_ParamLimits

0xa20b,	// (0x00053d27) bg_set_opt_pane

0xe634,	// (0x00058150) set_value_pane_t1

0xa22c,	// (0x00053d48) slider_set_pane_cp3

0xa235,	// (0x00053d51) volume_small_pane_cp

0xa23e,	// (0x00053d5a) list_form_gen_pane

0xa247,	// (0x00053d63) scroll_pane_cp8

0x9831,	// (0x0005334d) form_field_data_pane_ParamLimits

0x9831,	// (0x0005334d) form_field_data_pane

0x984e,	// (0x0005336a) form_field_data_wide_pane_ParamLimits

0x984e,	// (0x0005336a) form_field_data_wide_pane

0x9872,	// (0x0005338e) form_field_popup_pane_ParamLimits

0x9872,	// (0x0005338e) form_field_popup_pane

0xe652,	// (0x0005816e) form_field_popup_wide_pane_ParamLimits

0xe652,	// (0x0005816e) form_field_popup_wide_pane

0xe673,	// (0x0005818f) form_field_slider_pane_ParamLimits

0xe673,	// (0x0005818f) form_field_slider_pane

0xe686,	// (0x000581a2) form_field_slider_wide_pane_ParamLimits

0xe686,	// (0x000581a2) form_field_slider_wide_pane

0xa258,	// (0x00053d74) data_form_pane

0x989e,	// (0x000533ba) form_field_data_pane_t1

0xa264,	// (0x00053d80) input_focus_pane

0xe699,	// (0x000581b5) data_form_wide_pane

0xe6b6,	// (0x000581d2) form_field_data_wide_pane_t1

0x72b5,	// (0x00050dd1) input_focus_pane_cp6

0x98b8,	// (0x000533d4) form_field_popup_pane_t1

0xa264,	// (0x00053d80) input_focus_pane_cp7

0xa292,	// (0x00053dae) list_form_pane

0xe6e0,	// (0x000581fc) form_field_popup_wide_pane_t1

0xa264,	// (0x00053d80) input_focus_pane_cp8

0xa29e,	// (0x00053dba) list_form_wide_pane

0x98da,	// (0x000533f6) form_field_slider_pane_t1_ParamLimits

0x98da,	// (0x000533f6) form_field_slider_pane_t1

0x98f2,	// (0x0005340e) form_field_slider_pane_t2_ParamLimits

0x98f2,	// (0x0005340e) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x000591a3) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x000591a3) form_field_slider_pane_t

0x704a,	// (0x00050b66) input_focus_pane_cp9_ParamLimits

0x704a,	// (0x00050b66) input_focus_pane_cp9

0x9907,	// (0x00053423) slider_cont_pane_ParamLimits

0x9907,	// (0x00053423) slider_cont_pane

0xa2ad,	// (0x00053dc9) form_field_slider_wide_pane_t1_ParamLimits

0xa2ad,	// (0x00053dc9) form_field_slider_wide_pane_t1

0xe6f5,	// (0x00058211) form_field_slider_wide_pane_t2_ParamLimits

0xe6f5,	// (0x00058211) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x000591a8) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x000591a8) form_field_slider_wide_pane_t

0x704a,	// (0x00050b66) input_focus_pane_cp10_ParamLimits

0x704a,	// (0x00050b66) input_focus_pane_cp10

0x991b,	// (0x00053437) slider_cont_pane_cp1_ParamLimits

0x991b,	// (0x00053437) slider_cont_pane_cp1

0x992f,	// (0x0005344b) slider_form_pane_cp

0xa2bf,	// (0x00053ddb) input_focus_pane_g1

0xa2c7,	// (0x00053de3) input_focus_pane_g2

0xa2cf,	// (0x00053deb) input_focus_pane_g3

0xa2d7,	// (0x00053df3) input_focus_pane_g4

0xa2df,	// (0x00053dfb) input_focus_pane_g5

0xa2e7,	// (0x00053e03) input_focus_pane_g6

0xa2ef,	// (0x00053e0b) input_focus_pane_g7

0xa2f7,	// (0x00053e13) input_focus_pane_g8

0xa2ff,	// (0x00053e1b) input_focus_pane_g9

0x6eb3,	// (0x000509cf) input_focus_pane_g10

0x0009,

0xf691,	// (0x000591ad) input_focus_pane_g

0x2b56,	// (0x0004c672) wait_border_pane_g3_copy1

0x9937,	// (0x00053453) data_form_pane_t1

0x6eb3,	// (0x000509cf) wait_anim_pane_g1_copy1

0x9a33,	// (0x0005354f) data_form_wide_pane_t1

0xe707,	// (0x00058223) list_form_graphic_pane_cp_ParamLimits

0xe707,	// (0x00058223) list_form_graphic_pane_cp

0x3ab5,	// (0x0004d5d1) slider_form_pane_g1

0x3abe,	// (0x0004d5da) slider_form_pane_g2

0x0006,

0xf98f,	// (0x000594ab) slider_form_pane_g

0x9953,	// (0x0005346f) list_form_graphic_pane_ParamLimits

0x9953,	// (0x0005346f) list_form_graphic_pane

0xe719,	// (0x00058235) list_form_graphic_pane_g1

0xe721,	// (0x0005823d) list_form_graphic_pane_t1_ParamLimits

0xe721,	// (0x0005823d) list_form_graphic_pane_t1

0x6f17,	// (0x00050a33) list_highlight_pane_cp5_ParamLimits

0x6f17,	// (0x00050a33) list_highlight_pane_cp5

0x9964,	// (0x00053480) find_pane_g1

0xa307,	// (0x00053e23) input_find_pane

0x996d,	// (0x00053489) input_find_pane_g1_ParamLimits

0x996d,	// (0x00053489) input_find_pane_g1

0x9979,	// (0x00053495) input_find_pane_t1_ParamLimits

0x9979,	// (0x00053495) input_find_pane_t1

0x998e,	// (0x000534aa) input_find_pane_t2_ParamLimits

0x998e,	// (0x000534aa) input_find_pane_t2

0x0001,

0xf6a6,	// (0x000591c2) input_find_pane_t_ParamLimits

0xf6a6,	// (0x000591c2) input_find_pane_t

0xa310,	// (0x00053e2c) input_focus_pane_cp5_ParamLimits

0xa310,	// (0x00053e2c) input_focus_pane_cp5

0xa32a,	// (0x00053e46) bg_popup_window_pane_cp2_ParamLimits

0xa32a,	// (0x00053e46) bg_popup_window_pane_cp2

0xa337,	// (0x00053e53) listscroll_menu_pane_ParamLimits

0xa337,	// (0x00053e53) listscroll_menu_pane

0xa343,	// (0x00053e5f) popup_submenu_window_ParamLimits

0xa343,	// (0x00053e5f) popup_submenu_window

0xa373,	// (0x00053e8f) find_popup_pane_g1

0xa37b,	// (0x00053e97) input_popup_find_pane_cp

0xa310,	// (0x00053e2c) input_focus_pane_cp4_ParamLimits

0xa310,	// (0x00053e2c) input_focus_pane_cp4

0xa393,	// (0x00053eaf) input_popup_find_pane_t1_ParamLimits

0xa393,	// (0x00053eaf) input_popup_find_pane_t1

0x6ebd,	// (0x000509d9) bg_popup_sub_pane_cp

0xa3c1,	// (0x00053edd) listscroll_popup_sub_pane

0xa3c9,	// (0x00053ee5) list_submenu_pane_ParamLimits

0xa3c9,	// (0x00053ee5) list_submenu_pane

0xa3da,	// (0x00053ef6) scroll_pane_cp4

0xa3e2,	// (0x00053efe) list_single_popup_submenu_pane_ParamLimits

0xa3e2,	// (0x00053efe) list_single_popup_submenu_pane

0xa3f7,	// (0x00053f13) list_single_popup_submenu_pane_g1

0xa3ff,	// (0x00053f1b) list_single_popup_submenu_pane_t1_ParamLimits

0xa3ff,	// (0x00053f1b) list_single_popup_submenu_pane_t1

0x704a,	// (0x00050b66) bg_active_tab_pane_cp1_ParamLimits

0x704a,	// (0x00050b66) bg_active_tab_pane_cp1

0xa414,	// (0x00053f30) tabs_2_active_pane_g1

0xa41c,	// (0x00053f38) tabs_2_active_pane_t1

0x704a,	// (0x00050b66) bg_passive_tab_pane_cp1_ParamLimits

0x704a,	// (0x00050b66) bg_passive_tab_pane_cp1

0xa414,	// (0x00053f30) tabs_2_passive_pane_g1

0xa41c,	// (0x00053f38) tabs_2_passive_pane_t1

0x6f17,	// (0x00050a33) bg_active_tab_pane_cp4

0xa42e,	// (0x00053f4a) tabs_2_long_active_pane_t1

0x04b3,	// (0x00049fcf) bg_passive_tab_pane_cp4

0x0642,	// (0x0004a15e) list_single_midp_graphic_pane_g4_ParamLimits

0x6f17,	// (0x00050a33) bg_active_tab_pane_cp5

0xa441,	// (0x00053f5d) tabs_3_long_active_pane_t1

0x04b3,	// (0x00049fcf) bg_passive_tab_pane_cp5

0x0642,	// (0x0004a15e) list_single_midp_graphic_pane_g4

0x6f17,	// (0x00050a33) bg_popup_window_pane_cp13_ParamLimits

0x6f17,	// (0x00050a33) bg_popup_window_pane_cp13

0xa45c,	// (0x00053f78) listscroll_popup_fast_pane_ParamLimits

0xa45c,	// (0x00053f78) listscroll_popup_fast_pane

0xa46b,	// (0x00053f87) grid_popup_fast_pane_ParamLimits

0xa46b,	// (0x00053f87) grid_popup_fast_pane

0xa47d,	// (0x00053f99) scroll_pane_cp9_ParamLimits

0xa47d,	// (0x00053f99) scroll_pane_cp9

0x5436,	// (0x0004ef52) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5436,	// (0x0004ef52) list_single_graphic_hl_pane_t1_cp2

0xa4a1,	// (0x00053fbd) input_focus_pane_cp20_ParamLimits

0xa4a1,	// (0x00053fbd) input_focus_pane_cp20

0xa4af,	// (0x00053fcb) query_popup_data_pane_t1_ParamLimits

0xa4af,	// (0x00053fcb) query_popup_data_pane_t1

0xa4c2,	// (0x00053fde) query_popup_data_pane_t2_ParamLimits

0xa4c2,	// (0x00053fde) query_popup_data_pane_t2

0xa508,	// (0x00054024) query_popup_data_pane_t3_ParamLimits

0xa508,	// (0x00054024) query_popup_data_pane_t3

0xa549,	// (0x00054065) query_popup_data_pane_t4_ParamLimits

0xa549,	// (0x00054065) query_popup_data_pane_t4

0xa585,	// (0x000540a1) query_popup_data_pane_t5_ParamLimits

0xa585,	// (0x000540a1) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x000591c7) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x000591c7) query_popup_data_pane_t

0xa2bf,	// (0x00053ddb) bg_set_opt_pane_g1

0xa2c7,	// (0x00053de3) bg_set_opt_pane_g2

0xa2cf,	// (0x00053deb) bg_set_opt_pane_g3

0xa2d7,	// (0x00053df3) bg_set_opt_pane_g4

0xa2df,	// (0x00053dfb) bg_set_opt_pane_g5

0xa2e7,	// (0x00053e03) bg_set_opt_pane_g6

0xa2ef,	// (0x00053e0b) bg_set_opt_pane_g7

0xa2f7,	// (0x00053e13) bg_set_opt_pane_g8

0xa2ff,	// (0x00053e1b) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x000591d2) bg_set_opt_pane_g

0xf40a,	// (0x00058f26) control_top_pane_stacon_ParamLimits

0xf40a,	// (0x00058f26) control_top_pane_stacon

0xf45d,	// (0x00058f79) signal_pane_stacon_ParamLimits

0xf45d,	// (0x00058f79) signal_pane_stacon

0xabff,	// (0x0005471b) stacon_top_pane_g1_ParamLimits

0xabff,	// (0x0005471b) stacon_top_pane_g1

0xf482,	// (0x00058f9e) title_pane_stacon_ParamLimits

0xf482,	// (0x00058f9e) title_pane_stacon

0xf4ac,	// (0x00058fc8) uni_indicator_pane_stacon_ParamLimits

0xf4ac,	// (0x00058fc8) uni_indicator_pane_stacon

0xf4c4,	// (0x00058fe0) battery_pane_stacon_ParamLimits

0xf4c4,	// (0x00058fe0) battery_pane_stacon

0xf508,	// (0x00059024) control_bottom_pane_stacon_ParamLimits

0xf508,	// (0x00059024) control_bottom_pane_stacon

0xf52b,	// (0x00059047) navi_pane_stacon_ParamLimits

0xf52b,	// (0x00059047) navi_pane_stacon

0xac21,	// (0x0005473d) stacon_bottom_pane_g1_ParamLimits

0xac21,	// (0x0005473d) stacon_bottom_pane_g1

0xf170,	// (0x00058c8c) aid_levels_signal_lsc_ParamLimits

0xf170,	// (0x00058c8c) aid_levels_signal_lsc

0xf187,	// (0x00058ca3) signal_pane_stacon_g1_ParamLimits

0xf187,	// (0x00058ca3) signal_pane_stacon_g1

0xf19b,	// (0x00058cb7) signal_pane_stacon_g2_ParamLimits

0xf19b,	// (0x00058cb7) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x000591e5) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x000591e5) signal_pane_stacon_g

0xf1d0,	// (0x00058cec) title_pane_stacon_t1_ParamLimits

0xf1d0,	// (0x00058cec) title_pane_stacon_t1

0xa5c9,	// (0x000540e5) uni_indicator_pane_stacon_g1

0xa5d3,	// (0x000540ef) uni_indicator_pane_stacon_g2

0xa5dd,	// (0x000540f9) uni_indicator_pane_stacon_g3

0xa5e7,	// (0x00054103) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x000591f1) uni_indicator_pane_stacon_g

0xf1f5,	// (0x00058d11) control_top_pane_stacon_g1

0xf1fd,	// (0x00058d19) control_top_pane_stacon_t1_ParamLimits

0xf1fd,	// (0x00058d19) control_top_pane_stacon_t1

0xf234,	// (0x00058d50) aid_levels_battery_lsc_ParamLimits

0xf234,	// (0x00058d50) aid_levels_battery_lsc

0xf24c,	// (0x00058d68) battery_pane_stacon_g1_ParamLimits

0xf24c,	// (0x00058d68) battery_pane_stacon_g1

0xf25f,	// (0x00058d7b) battery_pane_stacon_g2_ParamLimits

0xf25f,	// (0x00058d7b) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x000591fa) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x000591fa) battery_pane_stacon_g

0xf29d,	// (0x00058db9) navi_icon_pane_stacon

0xf2b1,	// (0x00058dcd) navi_navi_pane_stacon

0xf29d,	// (0x00058db9) navi_text_pane_stacon

0xf1f5,	// (0x00058d11) control_bottom_pane_stacon_g1

0xf2c7,	// (0x00058de3) control_bottom_pane_stacon_t1_ParamLimits

0xf2c7,	// (0x00058de3) control_bottom_pane_stacon_t1

0xa60b,	// (0x00054127) grid_app_pane_ParamLimits

0xa60b,	// (0x00054127) grid_app_pane

0xa643,	// (0x0005415f) scroll_pane_cp15_ParamLimits

0xa643,	// (0x0005415f) scroll_pane_cp15

0xa658,	// (0x00054174) cell_app_pane_ParamLimits

0xa658,	// (0x00054174) cell_app_pane

0xa6a5,	// (0x000541c1) cell_app_pane_g1_ParamLimits

0xa6a5,	// (0x000541c1) cell_app_pane_g1

0xa6c5,	// (0x000541e1) cell_app_pane_g2_ParamLimits

0xa6c5,	// (0x000541e1) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x000591ff) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x000591ff) cell_app_pane_g

0xa6d1,	// (0x000541ed) cell_app_pane_t1_ParamLimits

0xa6d1,	// (0x000541ed) cell_app_pane_t1

0xa6e8,	// (0x00054204) grid_highlight_pane_ParamLimits

0xa6e8,	// (0x00054204) grid_highlight_pane

0xa2bf,	// (0x00053ddb) cell_highlight_pane_g1

0xa2c7,	// (0x00053de3) cell_highlight_pane_g2

0xa2cf,	// (0x00053deb) cell_highlight_pane_g3

0xa2d7,	// (0x00053df3) cell_highlight_pane_g4

0xa2df,	// (0x00053dfb) cell_highlight_pane_g5

0xa2e7,	// (0x00053e03) cell_highlight_pane_g6

0xa2ef,	// (0x00053e0b) cell_highlight_pane_g7

0xa2f7,	// (0x00053e13) cell_highlight_pane_g8

0xa2ff,	// (0x00053e1b) cell_highlight_pane_g9

0x6eb3,	// (0x000509cf) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x000591ad) cell_highlight_pane_g

0xa702,	// (0x0005421e) bg_scroll_pane

0xf308,	// (0x00058e24) scroll_handle_pane

0xa749,	// (0x00054265) scroll_bg_pane_g1

0xa75e,	// (0x0005427a) scroll_bg_pane_g2

0xa776,	// (0x00054292) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x00059204) scroll_bg_pane_g

0xa78b,	// (0x000542a7) scroll_handle_focus_pane_ParamLimits

0xa78b,	// (0x000542a7) scroll_handle_focus_pane

0xa749,	// (0x00054265) scroll_handle_pane_g1

0xa798,	// (0x000542b4) scroll_handle_pane_g2

0xa776,	// (0x00054292) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0005920b) scroll_handle_pane_g

0xa310,	// (0x00053e2c) bg_popup_sub_pane_cp21_ParamLimits

0xa310,	// (0x00053e2c) bg_popup_sub_pane_cp21

0xa7ac,	// (0x000542c8) popup_fep_japan_predictive_window_t1_ParamLimits

0xa7ac,	// (0x000542c8) popup_fep_japan_predictive_window_t1

0xa7c3,	// (0x000542df) popup_fep_japan_predictive_window_t2_ParamLimits

0xa7c3,	// (0x000542df) popup_fep_japan_predictive_window_t2

0xa7f6,	// (0x00054312) popup_fep_japan_predictive_window_t3_ParamLimits

0xa7f6,	// (0x00054312) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x00059212) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x00059212) popup_fep_japan_predictive_window_t

0x6ebd,	// (0x000509d9) bg_popup_sub_pane_cp23

0xa82d,	// (0x00054349) listscroll_japin_cand_pane

0xa835,	// (0x00054351) popup_fep_japan_candidate_window_t1

0xa843,	// (0x0005435f) candidate_pane_ParamLimits

0xa843,	// (0x0005435f) candidate_pane

0xa855,	// (0x00054371) scroll_pane_cp30

0xa85f,	// (0x0005437b) list_single_popup_jap_candidate_pane_ParamLimits

0xa85f,	// (0x0005437b) list_single_popup_jap_candidate_pane

0x6ebd,	// (0x000509d9) list_highlight_pane_cp30

0xa873,	// (0x0005438f) list_single_popup_jap_candidate_pane_t1

0xa882,	// (0x0005439e) level_1_signal

0xa894,	// (0x000543b0) level_2_signal

0xa8a7,	// (0x000543c3) level_3_signal

0xa8ba,	// (0x000543d6) level_4_signal

0xa8cd,	// (0x000543e9) level_5_signal

0xa8e0,	// (0x000543fc) level_6_signal

0xa8f3,	// (0x0005440f) level_7_signal

0xa882,	// (0x0005439e) level_1_battery

0xa894,	// (0x000543b0) level_2_battery

0xa8a7,	// (0x000543c3) level_3_battery

0xa8ba,	// (0x000543d6) level_4_battery

0xa8cd,	// (0x000543e9) level_5_battery

0xa8e0,	// (0x000543fc) level_6_battery

0xa8f3,	// (0x0005440f) level_7_battery

0xa91e,	// (0x0005443a) list_menu_pane_ParamLimits

0xa91e,	// (0x0005443a) list_menu_pane

0xa934,	// (0x00054450) scroll_pane_cp25_ParamLimits

0xa934,	// (0x00054450) scroll_pane_cp25

0xa94d,	// (0x00054469) list_double2_graphic_pane_cp2_ParamLimits

0xa94d,	// (0x00054469) list_double2_graphic_pane_cp2

0xa94d,	// (0x00054469) list_double2_large_graphic_pane_cp2_ParamLimits

0xa94d,	// (0x00054469) list_double2_large_graphic_pane_cp2

0xa94d,	// (0x00054469) list_double2_pane_cp2_ParamLimits

0xa94d,	// (0x00054469) list_double2_pane_cp2

0xa94d,	// (0x00054469) list_double_graphic_pane_cp2_ParamLimits

0xa94d,	// (0x00054469) list_double_graphic_pane_cp2

0xa94d,	// (0x00054469) list_double_large_graphic_pane_cp2_ParamLimits

0xa94d,	// (0x00054469) list_double_large_graphic_pane_cp2

0xa94d,	// (0x00054469) list_double_number_pane_cp2_ParamLimits

0xa94d,	// (0x00054469) list_double_number_pane_cp2

0xa94d,	// (0x00054469) list_double_pane_cp2_ParamLimits

0xa94d,	// (0x00054469) list_double_pane_cp2

0xa970,	// (0x0005448c) list_single_2graphic_pane_cp2_ParamLimits

0xa970,	// (0x0005448c) list_single_2graphic_pane_cp2

0xa970,	// (0x0005448c) list_single_graphic_heading_pane_cp2_ParamLimits

0xa970,	// (0x0005448c) list_single_graphic_heading_pane_cp2

0xa970,	// (0x0005448c) list_single_graphic_pane_cp2_ParamLimits

0xa970,	// (0x0005448c) list_single_graphic_pane_cp2

0xa970,	// (0x0005448c) list_single_heading_pane_cp2_ParamLimits

0xa970,	// (0x0005448c) list_single_heading_pane_cp2

0xa987,	// (0x000544a3) list_single_large_graphic_pane_cp2_ParamLimits

0xa987,	// (0x000544a3) list_single_large_graphic_pane_cp2

0xa970,	// (0x0005448c) list_single_number_heading_pane_cp2_ParamLimits

0xa970,	// (0x0005448c) list_single_number_heading_pane_cp2

0xa970,	// (0x0005448c) list_single_number_pane_cp2_ParamLimits

0xa970,	// (0x0005448c) list_single_number_pane_cp2

0xa970,	// (0x0005448c) list_single_pane_cp2_ParamLimits

0xa970,	// (0x0005448c) list_single_pane_cp2

0xaa1b,	// (0x00054537) bg_popup_sub_pane_cp22

0xf3ba,	// (0x00058ed6) popup_side_volume_key_window_g1

0xf3e4,	// (0x00058f00) popup_side_volume_key_window_t1

0xf402,	// (0x00058f1e) volume_small_pane_cp1

0x704a,	// (0x00050b66) bg_popup_sub_pane_cp24_ParamLimits

0x704a,	// (0x00050b66) bg_popup_sub_pane_cp24

0xaa31,	// (0x0005454d) fep_china_uni_candidate_pane_ParamLimits

0xaa31,	// (0x0005454d) fep_china_uni_candidate_pane

0xaa45,	// (0x00054561) fep_china_uni_entry_pane

0xaa55,	// (0x00054571) popup_fep_china_uni_window_g1

0xaa71,	// (0x0005458d) fep_china_uni_entry_pane_g1

0xaa7b,	// (0x00054597) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x00059243) fep_china_uni_entry_pane_g

0xaa85,	// (0x000545a1) fep_entry_item_pane

0xaa8f,	// (0x000545ab) fep_candidate_item_pane

0xaa97,	// (0x000545b3) fep_china_uni_candidate_pane_g1

0xaaa1,	// (0x000545bd) fep_china_uni_candidate_pane_g2

0xaaa9,	// (0x000545c5) fep_china_uni_candidate_pane_g3

0xaab1,	// (0x000545cd) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x00059248) fep_china_uni_candidate_pane_g

0x6eb3,	// (0x000509cf) fep_entry_item_pane_g1

0xaabb,	// (0x000545d7) fep_entry_item_pane_t1_ParamLimits

0xaabb,	// (0x000545d7) fep_entry_item_pane_t1

0xaad1,	// (0x000545ed) fep_candidate_item_pane_t1_ParamLimits

0xaad1,	// (0x000545ed) fep_candidate_item_pane_t1

0xaae6,	// (0x00054602) fep_candidate_item_pane_t2_ParamLimits

0xaae6,	// (0x00054602) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x00059251) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x00059251) fep_candidate_item_pane_t

0x6f17,	// (0x00050a33) list_highlight_pane_cp31_ParamLimits

0x6f17,	// (0x00050a33) list_highlight_pane_cp31

0xaaf8,	// (0x00054614) level_1_signal_lsc

0xab01,	// (0x0005461d) level_2_signal_lsc

0xab0a,	// (0x00054626) level_3_signal_lsc

0xab13,	// (0x0005462f) level_4_signal_lsc

0xab1c,	// (0x00054638) level_5_signal_lsc

0xab25,	// (0x00054641) level_6_signal_lsc

0xab2e,	// (0x0005464a) level_7_signal_lsc

0xab2e,	// (0x0005464a) level_1_battery_lsc

0xab37,	// (0x00054653) level_2_battery_lsc

0xab40,	// (0x0005465c) level_3_battery_lsc

0xab49,	// (0x00054665) level_4_battery_lsc

0xab52,	// (0x0005466e) level_5_battery_lsc

0xab5b,	// (0x00054677) level_6_battery_lsc

0xaaf8,	// (0x00054614) level_7_battery_lsc

0xab64,	// (0x00054680) scroll_handle_focus_pane_g1

0xab6d,	// (0x00054689) scroll_handle_focus_pane_g2

0xab76,	// (0x00054692) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x00059256) scroll_handle_focus_pane_g

0x99a3,	// (0x000534bf) list_single_2graphic_pane_g1_ParamLimits

0x99a3,	// (0x000534bf) list_single_2graphic_pane_g1

0xa1b1,	// (0x00053ccd) list_single_2graphic_pane_g2_ParamLimits

0xa1b1,	// (0x00053ccd) list_single_2graphic_pane_g2

0x0611,	// (0x0004a12d) list_single_2graphic_pane_g3_ParamLimits

0x0611,	// (0x0004a12d) list_single_2graphic_pane_g3

0xab7f,	// (0x0005469b) list_single_2graphic_pane_g4_ParamLimits

0xab7f,	// (0x0005469b) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0005925d) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0005925d) list_single_2graphic_pane_g

0x99af,	// (0x000534cb) list_single_2graphic_pane_t1_ParamLimits

0x99af,	// (0x000534cb) list_single_2graphic_pane_t1

0xab90,	// (0x000546ac) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xab90,	// (0x000546ac) list_double2_graphic_large_graphic_pane_g1

0xa1fa,	// (0x00053d16) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa1fa,	// (0x00053d16) list_double2_graphic_large_graphic_pane_g2

0xa1e2,	// (0x00053cfe) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa1e2,	// (0x00053cfe) list_double2_graphic_large_graphic_pane_g3

0xaba2,	// (0x000546be) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xaba2,	// (0x000546be) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x00059266) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x00059266) list_double2_graphic_large_graphic_pane_g

0x99dd,	// (0x000534f9) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x99dd,	// (0x000534f9) list_double2_graphic_large_graphic_pane_t1

0x99f3,	// (0x0005350f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x99f3,	// (0x0005350f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0005926f) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0005926f) list_double2_graphic_large_graphic_pane_t

0xacce,	// (0x000547ea) popup_fast_swap_window_ParamLimits

0xacce,	// (0x000547ea) popup_fast_swap_window

0xacec,	// (0x00054808) popup_side_volume_key_window

0xad0a,	// (0x00054826) stacon_top_pane

0xad14,	// (0x00054830) status_pane_ParamLimits

0xad14,	// (0x00054830) status_pane

0xad22,	// (0x0005483e) status_small_pane

0x6ebd,	// (0x000509d9) control_pane

0x6ebd,	// (0x000509d9) stacon_bottom_pane

0xa247,	// (0x00053d63) scroll_pane_cp121

0xa23e,	// (0x00053d5a) set_content_pane

0xabae,	// (0x000546ca) bg_active_tab_pane_g1_cp1

0xabb7,	// (0x000546d3) bg_active_tab_pane_g2_cp1

0xabc0,	// (0x000546dc) bg_active_tab_pane_g3_cp1

0xabae,	// (0x000546ca) bg_passive_tab_pane_g1_cp1

0xabb7,	// (0x000546d3) bg_passive_tab_pane_g2_cp1

0xabc0,	// (0x000546dc) bg_passive_tab_pane_g3_cp1

0xabc9,	// (0x000546e5) bg_active_tab_pane_g1_cp2

0xabb7,	// (0x000546d3) bg_active_tab_pane_g2_cp2

0xabd2,	// (0x000546ee) bg_active_tab_pane_g3_cp2

0xabc9,	// (0x000546e5) bg_passive_tab_pane_g1_cp2

0xabb7,	// (0x000546d3) bg_passive_tab_pane_g2_cp2

0xabd2,	// (0x000546ee) bg_passive_tab_pane_g3_cp2

0xabdb,	// (0x000546f7) bg_active_tab_pane_g1_cp3

0xabb7,	// (0x000546d3) bg_active_tab_pane_g2_cp3

0xabe4,	// (0x00054700) bg_active_tab_pane_g3_cp3

0xabdb,	// (0x000546f7) bg_passive_tab_pane_g1_cp3

0xabb7,	// (0x000546d3) bg_passive_tab_pane_g2_cp3

0xabe4,	// (0x00054700) bg_passive_tab_pane_g3_cp3

0xabed,	// (0x00054709) bg_active_tab_pane_g1_cp4

0xabb7,	// (0x000546d3) bg_active_tab_pane_g2_cp4

0xabf6,	// (0x00054712) bg_active_tab_pane_g3_cp4

0xabed,	// (0x00054709) bg_passive_tab_pane_g1_cp4

0xabb7,	// (0x000546d3) bg_passive_tab_pane_g2_cp4

0xabf6,	// (0x00054712) bg_passive_tab_pane_g3_cp4

0xac3d,	// (0x00054759) bg_active_tab_pane_g1_cp5

0xabb7,	// (0x000546d3) bg_active_tab_pane_g2_cp5

0xac46,	// (0x00054762) bg_active_tab_pane_g3_cp5

0xac3d,	// (0x00054759) bg_passive_tab_pane_g1_cp5

0xabb7,	// (0x000546d3) bg_passive_tab_pane_g2_cp5

0xac46,	// (0x00054762) bg_passive_tab_pane_g3_cp5

0x40d9,	// (0x0004dbf5) list_set_graphic_pane_ParamLimits

0x40d9,	// (0x0004dbf5) list_set_graphic_pane

0x6ebd,	// (0x000509d9) bg_set_opt_pane_cp4

0xac4f,	// (0x0005476b) list_set_graphic_pane_g1_ParamLimits

0xac4f,	// (0x0005476b) list_set_graphic_pane_g1

0xac5b,	// (0x00054777) list_set_graphic_pane_g2_ParamLimits

0xac5b,	// (0x00054777) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x00059274) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x00059274) list_set_graphic_pane_g

0x0009,

0xfae2,	// (0x000595fe) volume_small_pane_cp_g

0xac7f,	// (0x0005479b) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xac7f,	// (0x0005479b) list_double2_large_graphic_pane_g1_cp2

0xac8d,	// (0x000547a9) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xac8d,	// (0x000547a9) list_double2_large_graphic_pane_g2_cp2

0xac9e,	// (0x000547ba) list_double2_large_graphic_pane_g3_cp2

0xaca6,	// (0x000547c2) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xaca6,	// (0x000547c2) list_double2_large_graphic_pane_t1_cp2

0xacbc,	// (0x000547d8) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xacbc,	// (0x000547d8) list_double2_large_graphic_pane_t2_cp2

0xc7b4,	// (0x000562d0) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc7b4,	// (0x000562d0) list_double_large_graphic_pane_g1_cp2

0xc7c7,	// (0x000562e3) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xc7c7,	// (0x000562e3) list_double_large_graphic_pane_g2_cp2

0xae3d,	// (0x00054959) list_double_large_graphic_pane_g3_cp2

0x365e,	// (0x0004d17a) list_double_large_graphic_pane_g4_cp

0x3666,	// (0x0004d182) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3666,	// (0x0004d182) list_double_large_graphic_pane_t1_cp2

0x367d,	// (0x0004d199) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x367d,	// (0x0004d199) list_double_large_graphic_pane_t2_cp2

0xad2d,	// (0x00054849) list_double2_graphic_pane_g1_cp2_ParamLimits

0xad2d,	// (0x00054849) list_double2_graphic_pane_g1_cp2

0xad3b,	// (0x00054857) list_double2_graphic_pane_g2_cp2_ParamLimits

0xad3b,	// (0x00054857) list_double2_graphic_pane_g2_cp2

0xad4c,	// (0x00054868) list_double2_graphic_pane_g3_cp2

0xad56,	// (0x00054872) list_double2_graphic_pane_t1_cp2_ParamLimits

0xad56,	// (0x00054872) list_double2_graphic_pane_t1_cp2

0xad6c,	// (0x00054888) list_double2_graphic_pane_t2_cp2_ParamLimits

0xad6c,	// (0x00054888) list_double2_graphic_pane_t2_cp2

0xad7e,	// (0x0005489a) list_single_number_heading_pane_g1_cp2_ParamLimits

0xad7e,	// (0x0005489a) list_single_number_heading_pane_g1_cp2

0xad8a,	// (0x000548a6) list_single_number_heading_pane_g2_cp2

0xad92,	// (0x000548ae) list_single_number_heading_pane_t1_cp2_ParamLimits

0xad92,	// (0x000548ae) list_single_number_heading_pane_t1_cp2

0xada8,	// (0x000548c4) list_single_number_heading_pane_t2_cp2_ParamLimits

0xada8,	// (0x000548c4) list_single_number_heading_pane_t2_cp2

0xadbc,	// (0x000548d8) list_single_number_heading_pane_t3_cp2_ParamLimits

0xadbc,	// (0x000548d8) list_single_number_heading_pane_t3_cp2

0xad7e,	// (0x0005489a) list_single_heading_pane_g1_cp2_ParamLimits

0xad7e,	// (0x0005489a) list_single_heading_pane_g1_cp2

0xad8a,	// (0x000548a6) list_single_heading_pane_g2_cp2

0xad92,	// (0x000548ae) list_single_heading_pane_t1_cp2_ParamLimits

0xad92,	// (0x000548ae) list_single_heading_pane_t1_cp2

0xc7a0,	// (0x000562bc) list_single_heading_pane_t2_cp2_ParamLimits

0xc7a0,	// (0x000562bc) list_single_heading_pane_t2_cp2

0x337c,	// (0x0004ce98) list_double_graphic_pane_g1_cp2_ParamLimits

0x337c,	// (0x0004ce98) list_double_graphic_pane_g1_cp2

0x3388,	// (0x0004cea4) list_double_graphic_pane_g2_cp2_ParamLimits

0x3388,	// (0x0004cea4) list_double_graphic_pane_g2_cp2

0x3397,	// (0x0004ceb3) list_double_graphic_pane_g3_cp2

0x339f,	// (0x0004cebb) list_double_graphic_pane_t1_cp2_ParamLimits

0x339f,	// (0x0004cebb) list_double_graphic_pane_t1_cp2

0x33b5,	// (0x0004ced1) list_double_graphic_pane_t2_cp2_ParamLimits

0x33b5,	// (0x0004ced1) list_double_graphic_pane_t2_cp2

0xae31,	// (0x0005494d) list_double_number_pane_g1_cp2_ParamLimits

0xae31,	// (0x0005494d) list_double_number_pane_g1_cp2

0xae3d,	// (0x00054959) list_double_number_pane_g2_cp2

0xc73a,	// (0x00056256) list_double_number_pane_t1_cp2_ParamLimits

0xc73a,	// (0x00056256) list_double_number_pane_t1_cp2

0x3354,	// (0x0004ce70) list_double_number_pane_t2_cp2_ParamLimits

0x3354,	// (0x0004ce70) list_double_number_pane_t2_cp2

0x336a,	// (0x0004ce86) list_double_number_pane_t3_cp2_ParamLimits

0x336a,	// (0x0004ce86) list_double_number_pane_t3_cp2

0xc688,	// (0x000561a4) list_single_graphic_pane_g1_cp2_ParamLimits

0xc688,	// (0x000561a4) list_single_graphic_pane_g1_cp2

0xe746,	// (0x00058262) list_single_graphic_pane_g2_cp2_ParamLimits

0xe746,	// (0x00058262) list_single_graphic_pane_g2_cp2

0xe752,	// (0x0005826e) list_single_graphic_pane_g3_cp2

0x31ff,	// (0x0004cd1b) list_single_graphic_pane_t1_cp2_ParamLimits

0x31ff,	// (0x0004cd1b) list_single_graphic_pane_t1_cp2

0xe746,	// (0x00058262) list_single_number_pane_g1_cp2_ParamLimits

0xe746,	// (0x00058262) list_single_number_pane_g1_cp2

0xe752,	// (0x0005826e) list_single_number_pane_g2_cp2

0x31ff,	// (0x0004cd1b) list_single_number_pane_t1_cp2_ParamLimits

0x31ff,	// (0x0004cd1b) list_single_number_pane_t1_cp2

0xc674,	// (0x00056190) list_single_number_pane_t2_cp2_ParamLimits

0xc674,	// (0x00056190) list_single_number_pane_t2_cp2

0xac8d,	// (0x000547a9) list_double2_pane_g1_cp2_ParamLimits

0xac8d,	// (0x000547a9) list_double2_pane_g1_cp2

0xac9e,	// (0x000547ba) list_double2_pane_g2_cp2

0xae09,	// (0x00054925) list_double2_pane_t1_cp2_ParamLimits

0xae09,	// (0x00054925) list_double2_pane_t1_cp2

0xae1f,	// (0x0005493b) list_double2_pane_t2_cp2_ParamLimits

0xae1f,	// (0x0005493b) list_double2_pane_t2_cp2

0xae31,	// (0x0005494d) list_double_pane_g1_cp2_ParamLimits

0xae31,	// (0x0005494d) list_double_pane_g1_cp2

0xae3d,	// (0x00054959) list_double_pane_g2_cp2

0xae45,	// (0x00054961) list_double_pane_t1_cp2_ParamLimits

0xae45,	// (0x00054961) list_double_pane_t1_cp2

0xae5b,	// (0x00054977) list_double_pane_t2_cp2_ParamLimits

0xae5b,	// (0x00054977) list_double_pane_t2_cp2

0xe736,	// (0x00058252) list_single_pane_cp2_g3

0xe746,	// (0x00058262) list_single_pane_g1_cp2_ParamLimits

0xe746,	// (0x00058262) list_single_pane_g1_cp2

0xe752,	// (0x0005826e) list_single_pane_g2_cp2

0xe75a,	// (0x00058276) list_single_pane_t1_cp2_ParamLimits

0xe75a,	// (0x00058276) list_single_pane_t1_cp2

0xae87,	// (0x000549a3) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xae87,	// (0x000549a3) list_single_large_graphic_pane_g1_cp2

0xe5f4,	// (0x00058110) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xe5f4,	// (0x00058110) list_single_large_graphic_pane_g2_cp2

0xe772,	// (0x0005828e) list_single_large_graphic_pane_g3_cp2

0xe77a,	// (0x00058296) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xe77a,	// (0x00058296) list_single_large_graphic_pane_g4_cp1

0xe794,	// (0x000582b0) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xe794,	// (0x000582b0) list_single_large_graphic_pane_t1_cp2

0x31c9,	// (0x0004cce5) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x31c9,	// (0x0004cce5) list_single_graphic_heading_pane_g1_cp2

0xc64f,	// (0x0005616b) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xc64f,	// (0x0005616b) list_single_graphic_heading_pane_g4_cp2

0xe752,	// (0x0005826e) list_single_graphic_heading_pane_g5_cp2

0x31d5,	// (0x0004ccf1) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x31d5,	// (0x0004ccf1) list_single_graphic_heading_pane_t1_cp2

0xc660,	// (0x0005617c) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xc660,	// (0x0005617c) list_single_graphic_heading_pane_t2_cp2

0x318a,	// (0x0004cca6) list_single_2graphic_pane_g1_cp2_ParamLimits

0x318a,	// (0x0004cca6) list_single_2graphic_pane_g1_cp2

0xc64f,	// (0x0005616b) list_single_2graphic_pane_g2_cp2_ParamLimits

0xc64f,	// (0x0005616b) list_single_2graphic_pane_g2_cp2

0xe752,	// (0x0005826e) list_single_2graphic_pane_g3_cp2

0x31a7,	// (0x0004ccc3) list_single_2graphic_pane_g4_cp2_ParamLimits

0x31a7,	// (0x0004ccc3) list_single_2graphic_pane_g4_cp2

0x31b3,	// (0x0004cccf) list_single_2graphic_pane_t1_cp2_ParamLimits

0x31b3,	// (0x0004cccf) list_single_2graphic_pane_t1_cp2

0x6eb3,	// (0x000509cf) list_highlight_pane_g10_cp1

0x2d62,	// (0x0004c87e) list_highlight_pane_g1_cp1

0x2d6a,	// (0x0004c886) list_highlight_pane_g2_cp1

0x2d72,	// (0x0004c88e) list_highlight_pane_g3_cp1

0x2d7a,	// (0x0004c896) list_highlight_pane_g4_cp1

0x2d82,	// (0x0004c89e) list_highlight_pane_g5_cp1

0x2d8a,	// (0x0004c8a6) list_highlight_pane_g6_cp1

0x2d92,	// (0x0004c8ae) list_highlight_pane_g7_cp1

0x2d9a,	// (0x0004c8b6) list_highlight_pane_g8_cp1

0x2da2,	// (0x0004c8be) list_highlight_pane_g9_cp1

0xc615,	// (0x00056131) form_field_slider_pane_t3

0xc623,	// (0x0005613f) form_field_slider_pane_t4

0x2c9e,	// (0x0004c7ba) slider_form_pane_ParamLimits

0x2c9e,	// (0x0004c7ba) slider_form_pane

0x6ebd,	// (0x000509d9) control_abbreviations

0x6ebd,	// (0x000509d9) control_conventions

0x6ebd,	// (0x000509d9) control_definitions

0x6ebd,	// (0x000509d9) format_table_attribute

0x348a,	// (0x0004cfa6) bg_popup_preview_window_pane_g9

0x6ebd,	// (0x000509d9) format_table_data2

0x6ebd,	// (0x000509d9) format_table_data3

0x6ebd,	// (0x000509d9) format_table_data_example

0x0008,

0x6ebd,	// (0x000509d9) intro_purpose

0xf8ef,	// (0x0005940b) bg_popup_preview_window_pane_g

0x6ebd,	// (0x000509d9) texts_category

0x6ebd,	// (0x000509d9) texts_graphics

0xe7aa,	// (0x000582c6) text_digital

0xe7b9,	// (0x000582d5) text_primary

0xe7c8,	// (0x000582e4) text_primary_small

0xe7d7,	// (0x000582f3) text_secondary

0xe7e6,	// (0x00058302) text_title

0x3c1e,	// (0x0004d73a) bg_passive_tab_pane_g1_cp3_srt

0xabb7,	// (0x000546d3) bg_passive_tab_pane_g2_cp3_srt

0x3c27,	// (0x0004d743) bg_passive_tab_pane_g3_cp3_srt

0x704a,	// (0x00050b66) bg_active_tab_pane_cp3_srt_ParamLimits

0x704a,	// (0x00050b66) bg_active_tab_pane_cp3_srt

0x3c30,	// (0x0004d74c) tabs_4_active_pane_srt_g1

0xca98,	// (0x000565b4) tabs_4_active_pane_srt_t1_ParamLimits

0xca98,	// (0x000565b4) tabs_4_active_pane_srt_t1

0x3c1e,	// (0x0004d73a) bg_active_tab_pane_g1_cp3_copy1

0xabb7,	// (0x000546d3) bg_active_tab_pane_g2_cp3_copy1

0x3c27,	// (0x0004d743) bg_active_tab_pane_g3_cp3_copy1

0x6f17,	// (0x00050a33) tabs_2_long_active_pane_srt_ParamLimits

0x6f17,	// (0x00050a33) tabs_2_long_active_pane_srt

0x6f17,	// (0x00050a33) tabs_2_long_passive_pane_srt_ParamLimits

0x6f17,	// (0x00050a33) tabs_2_long_passive_pane_srt

0x04b3,	// (0x00049fcf) bg_passive_tab_pane_cp4_srt_ParamLimits

0x04b3,	// (0x00049fcf) bg_passive_tab_pane_cp4_srt

0x38c6,	// (0x0004d3e2) bg_passive_tab_pane_g1_cp4_srt

0xabb7,	// (0x000546d3) bg_passive_tab_pane_g2_cp4_srt

0x38cf,	// (0x0004d3eb) bg_passive_tab_pane_g3_cp4_srt

0x6f17,	// (0x00050a33) bg_active_tab_pane_cp4_srt_ParamLimits

0x6f17,	// (0x00050a33) bg_active_tab_pane_cp4_srt

0xc88a,	// (0x000563a6) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc88a,	// (0x000563a6) tabs_2_long_active_pane_srt_t1

0x38c6,	// (0x0004d3e2) bg_active_tab_pane_g1_cp4_srt

0xabb7,	// (0x000546d3) bg_active_tab_pane_g2_cp4_srt

0x38cf,	// (0x0004d3eb) bg_active_tab_pane_g3_cp4_srt

0x704a,	// (0x00050b66) tabs_3_long_active_pane_srt_ParamLimits

0x704a,	// (0x00050b66) tabs_3_long_active_pane_srt

0x704a,	// (0x00050b66) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x704a,	// (0x00050b66) tabs_3_long_passive_pane_cp_srt

0x704a,	// (0x00050b66) tabs_3_long_passive_pane_srt_ParamLimits

0x704a,	// (0x00050b66) tabs_3_long_passive_pane_srt

0x04b3,	// (0x00049fcf) bg_passive_tab_pane_cp5_srt_ParamLimits

0x04b3,	// (0x00049fcf) bg_passive_tab_pane_cp5_srt

0xac3d,	// (0x00054759) bg_passive_tab_pane_g1_cp5_srt

0xabb7,	// (0x000546d3) bg_passive_tab_pane_g2_cp5_srt

0xac46,	// (0x00054762) bg_passive_tab_pane_g3_cp5_srt

0x6f17,	// (0x00050a33) bg_active_tab_pane_cp5_srt_ParamLimits

0x6f17,	// (0x00050a33) bg_active_tab_pane_cp5_srt

0xc874,	// (0x00056390) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc874,	// (0x00056390) tabs_3_long_active_pane_srt_t1

0xac3d,	// (0x00054759) bg_active_tab_pane_g1_cp5_srt

0xabb7,	// (0x000546d3) bg_active_tab_pane_g2_cp5_srt

0xac46,	// (0x00054762) bg_active_tab_pane_g3_cp5_srt

0x38a6,	// (0x0004d3c2) navi_text_pane_srt_t1

0x389e,	// (0x0004d3ba) navi_icon_pane_srt_g1

0xe8f0,	// (0x0005840c) midp_editing_number_pane_srt

0xe7f5,	// (0x00058311) midp_ticker_pane_srt

0xe8f8,	// (0x00058414) midp_ticker_pane_srt_g1

0xe900,	// (0x0005841c) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x00059293) midp_ticker_pane_srt_g

0xe908,	// (0x00058424) midp_ticker_pane_srt_t1

0x388f,	// (0x0004d3ab) midp_editing_number_pane_t1_copy1

0x04b3,	// (0x00049fcf) listscroll_midp_pane

0x04b3,	// (0x00049fcf) midp_form_pane

0xe7fd,	// (0x00058319) midp_info_popup_window_ParamLimits

0xe7fd,	// (0x00058319) midp_info_popup_window

0xa310,	// (0x00053e2c) bg_popup_sub_pane_cp50_ParamLimits

0xa310,	// (0x00053e2c) bg_popup_sub_pane_cp50

0x2998,	// (0x0004c4b4) listscroll_midp_info_pane_ParamLimits

0x2998,	// (0x0004c4b4) listscroll_midp_info_pane

0x2980,	// (0x0004c49c) listscroll_form_midp_pane_ParamLimits

0x2980,	// (0x0004c49c) listscroll_form_midp_pane

0x298c,	// (0x0004c4a8) scroll_bar_cp050

0xc609,	// (0x00056125) list_midp_pane

0x46b3,	// (0x0004e1cf) signal_pane_g2_cp

0x289a,	// (0x0004c3b6) listscroll_midp_info_pane_t1_ParamLimits

0x289a,	// (0x0004c3b6) listscroll_midp_info_pane_t1

0x28b2,	// (0x0004c3ce) listscroll_midp_info_pane_t2_ParamLimits

0x28b2,	// (0x0004c3ce) listscroll_midp_info_pane_t2

0x28f0,	// (0x0004c40c) listscroll_midp_info_pane_t3_ParamLimits

0x28f0,	// (0x0004c40c) listscroll_midp_info_pane_t3

0x292a,	// (0x0004c446) listscroll_midp_info_pane_t4_ParamLimits

0x292a,	// (0x0004c446) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x00059346) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x00059346) listscroll_midp_info_pane_t

0xa3da,	// (0x00053ef6) scroll_pane_cp21

0x2834,	// (0x0004c350) form_midp_field_choice_group_pane

0x283d,	// (0x0004c359) form_midp_field_text_pane

0x2880,	// (0x0004c39c) form_midp_field_time_pane

0x2888,	// (0x0004c3a4) form_midp_gauge_slider_pane

0x2891,	// (0x0004c3ad) form_midp_gauge_wait_pane

0x6ebd,	// (0x000509d9) form_midp_image_pane

0x9a05,	// (0x00053521) list_single_midp_pane_ParamLimits

0x9a05,	// (0x00053521) list_single_midp_pane

0xc5e1,	// (0x000560fd) form_midp_field_text_pane_t1

0x25e4,	// (0x0004c100) input_focus_pane_cp050

0x2823,	// (0x0004c33f) list_midp_form_text_pane

0x27c7,	// (0x0004c2e3) form_midp_field_choice_group_pane_t1

0x27d5,	// (0x0004c2f1) input_focus_pane_cp051

0x27e9,	// (0x0004c305) list_midp_choice_pane

0x6ebd,	// (0x000509d9) status_idle_pane

0x27ab,	// (0x0004c2c7) form_midp_field_time_pane_t1

0x6eb3,	// (0x000509cf) wait_anim_pane_g2_copy1

0x27b9,	// (0x0004c2d5) form_midp_field_time_pane_t2

0x0001,

0xe858,	// (0x00058374) aid_navinavi_width_2_pane

0xf825,	// (0x00059341) form_midp_field_time_pane_t

0x6ebd,	// (0x000509d9) input_focus_pane_cp052

0x6ebd,	// (0x000509d9) bg_input_focus_pane_cp040

0x276b,	// (0x0004c287) form_midp_gauge_slider_pane_t1

0x2779,	// (0x0004c295) form_midp_gauge_slider_pane_t2

0xc5c5,	// (0x000560e1) form_midp_gauge_slider_pane_t3

0xc5d3,	// (0x000560ef) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x00059338) form_midp_gauge_slider_pane_t

0x27a3,	// (0x0004c2bf) form_midp_slider_pane

0x6f17,	// (0x00050a33) bg_input_focus_pane_cp041_ParamLimits

0x6f17,	// (0x00050a33) bg_input_focus_pane_cp041

0x2738,	// (0x0004c254) form_midp_gauge_wait_pane_t1_ParamLimits

0x2738,	// (0x0004c254) form_midp_gauge_wait_pane_t1

0x274a,	// (0x0004c266) form_midp_gauge_wait_pane_t2_ParamLimits

0x274a,	// (0x0004c266) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x00059333) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x00059333) form_midp_gauge_wait_pane_t

0x275c,	// (0x0004c278) form_midp_wait_pane_ParamLimits

0x275c,	// (0x0004c278) form_midp_wait_pane

0x2700,	// (0x0004c21c) form_midp_image_pane_g1

0x2709,	// (0x0004c225) form_midp_image_pane_t1

0x2718,	// (0x0004c234) form_midp_image_pane_t2

0x2727,	// (0x0004c243) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0005932c) form_midp_image_pane_t

0x26f7,	// (0x0004c213) list_single_midp_pane_g1

0xea98,	// (0x000585b4) list_single_midp_pane_t1

0xbd9b,	// (0x000558b7) list_midp_form_item_pane_ParamLimits

0xbd9b,	// (0x000558b7) list_midp_form_item_pane

0xe812,	// (0x0005832e) list_midp_form_item_pane_t1

0xe821,	// (0x0005833d) midp_ticker_pane_g1

0xe82d,	// (0x00058349) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x00059279) midp_ticker_pane_g

0xaf2c,	// (0x00054a48) midp_ticker_pane_t1

0xca19,	// (0x00056535) midp_editing_number_pane_t1

0x3ae0,	// (0x0004d5fc) midp_editing_number_pane

0x3aef,	// (0x0004d60b) midp_ticker_pane

0x387f,	// (0x0004d39b) ai_message_heading_pane

0x6ebd,	// (0x000509d9) bg_popup_window_pane_cp14

0x3887,	// (0x0004d3a3) listscroll_ai_message_pane

0x3805,	// (0x0004d321) ai_message_heading_pane_g1_ParamLimits

0x3805,	// (0x0004d321) ai_message_heading_pane_g1

0x3811,	// (0x0004d32d) ai_message_heading_pane_g2_ParamLimits

0x3811,	// (0x0004d32d) ai_message_heading_pane_g2

0x381f,	// (0x0004d33b) ai_message_heading_pane_g3_ParamLimits

0x381f,	// (0x0004d33b) ai_message_heading_pane_g3

0x382b,	// (0x0004d347) ai_message_heading_pane_g4_ParamLimits

0x382b,	// (0x0004d347) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0005946d) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0005946d) ai_message_heading_pane_g

0x3837,	// (0x0004d353) ai_message_heading_pane_t1_ParamLimits

0x3837,	// (0x0004d353) ai_message_heading_pane_t1

0x3851,	// (0x0004d36d) ai_message_heading_pane_t2_ParamLimits

0x3851,	// (0x0004d36d) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x00059476) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x00059476) ai_message_heading_pane_t

0x3865,	// (0x0004d381) bg_popup_heading_pane_cp1_ParamLimits

0x3865,	// (0x0004d381) bg_popup_heading_pane_cp1

0x37f3,	// (0x0004d30f) list_ai_message_pane_ParamLimits

0x37f3,	// (0x0004d30f) list_ai_message_pane

0xa3da,	// (0x00053ef6) scroll_pane_cp10

0x378f,	// (0x0004d2ab) list_ai_message_pane_g1

0x3797,	// (0x0004d2b3) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0005944a) list_ai_message_pane_g

0x379f,	// (0x0004d2bb) list_ai_message_pane_t1_ParamLimits

0x379f,	// (0x0004d2bb) list_ai_message_pane_t1

0x37b4,	// (0x0004d2d0) list_ai_message_pane_t2_ParamLimits

0x37b4,	// (0x0004d2d0) list_ai_message_pane_t2

0x37c9,	// (0x0004d2e5) list_ai_message_pane_t3_ParamLimits

0x37c9,	// (0x0004d2e5) list_ai_message_pane_t3

0x37de,	// (0x0004d2fa) list_ai_message_pane_t4_ParamLimits

0x37de,	// (0x0004d2fa) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0005944f) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0005944f) list_ai_message_pane_t

0xc85a,	// (0x00056376) cell_ai_soft_ind_pane_ParamLimits

0xc85a,	// (0x00056376) cell_ai_soft_ind_pane

0xe839,	// (0x00058355) cell_ai_soft_ind_pane_g1_ParamLimits

0xe839,	// (0x00058355) cell_ai_soft_ind_pane_g1

0x6ebd,	// (0x000509d9) grid_highlight_cp1

0xe846,	// (0x00058362) text_secondary_cp56_ParamLimits

0xe846,	// (0x00058362) text_secondary_cp56

0x374d,	// (0x0004d269) example_general_pane_ParamLimits

0x374d,	// (0x0004d269) example_general_pane

0x3759,	// (0x0004d275) example_parent_pane_g1_ParamLimits

0x3759,	// (0x0004d275) example_parent_pane_g1

0x3765,	// (0x0004d281) example_parent_pane_t1_ParamLimits

0x3765,	// (0x0004d281) example_parent_pane_t1

0xb5ae,	// (0x000550ca) popup_preview_text_window_ParamLimits

0xb5ae,	// (0x000550ca) popup_preview_text_window

0xe73e,	// (0x0005825a) list_single_pane_cp2_g4

0x7100,	// (0x00050c1c) bg_popup_preview_window_pane_ParamLimits

0x7100,	// (0x00050c1c) bg_popup_preview_window_pane

0x3494,	// (0x0004cfb0) popup_preview_text_window_t1_ParamLimits

0x3494,	// (0x0004cfb0) popup_preview_text_window_t1

0x34b2,	// (0x0004cfce) popup_preview_text_window_t2_ParamLimits

0x34b2,	// (0x0004cfce) popup_preview_text_window_t2

0x34fb,	// (0x0004d017) popup_preview_text_window_t3_ParamLimits

0x34fb,	// (0x0004d017) popup_preview_text_window_t3

0x3540,	// (0x0004d05c) popup_preview_text_window_t4_ParamLimits

0x3540,	// (0x0004d05c) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0005941e) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0005941e) popup_preview_text_window_t

0x35be,	// (0x0004d0da) scroll_pane_cp11

0x2570,	// (0x0004c08c) bg_popup_preview_window_pane_g1

0x3448,	// (0x0004cf64) bg_popup_preview_window_pane_g2

0x3452,	// (0x0004cf6e) bg_popup_preview_window_pane_g3

0x345c,	// (0x0004cf78) bg_popup_preview_window_pane_g4

0x3466,	// (0x0004cf82) bg_popup_preview_window_pane_g5

0x3470,	// (0x0004cf8c) bg_popup_preview_window_pane_g6

0x3478,	// (0x0004cf94) bg_popup_preview_window_pane_g7

0x3480,	// (0x0004cf9c) bg_popup_preview_window_pane_g8

0xeeec,	// (0x00058a08) aid_popup_width_pane

0xb51e,	// (0x0005503a) popup_midp_note_alarm_window_ParamLimits

0xb51e,	// (0x0005503a) popup_midp_note_alarm_window

0xa258,	// (0x00053d74) data_form_pane_ParamLimits

0x9894,	// (0x000533b0) form_field_data_pane_g1

0x989e,	// (0x000533ba) form_field_data_pane_t1_ParamLimits

0xa264,	// (0x00053d80) input_focus_pane_ParamLimits

0xe699,	// (0x000581b5) data_form_wide_pane_ParamLimits

0xe6aa,	// (0x000581c6) form_field_data_wide_pane_g1

0xe6b6,	// (0x000581d2) form_field_data_wide_pane_t1_ParamLimits

0x72b5,	// (0x00050dd1) input_focus_pane_cp6_ParamLimits

0xa385,	// (0x00053ea1) input_popup_find_pane_g1_ParamLimits

0xa385,	// (0x00053ea1) input_popup_find_pane_g1

0xf270,	// (0x00058d8c) aid_navi_side_left_pane

0xf285,	// (0x00058da1) aid_navi_side_right_pane

0x2e5d,	// (0x0004c979) bg_popup_window_pane_cp30_ParamLimits

0x2e5d,	// (0x0004c979) bg_popup_window_pane_cp30

0x2ed7,	// (0x0004c9f3) popup_midp_note_alarm_window_g1_ParamLimits

0x2ed7,	// (0x0004c9f3) popup_midp_note_alarm_window_g1

0x2f07,	// (0x0004ca23) popup_midp_note_alarm_window_t1_ParamLimits

0x2f07,	// (0x0004ca23) popup_midp_note_alarm_window_t1

0x2fa8,	// (0x0004cac4) popup_midp_note_alarm_window_t2_ParamLimits

0x2fa8,	// (0x0004cac4) popup_midp_note_alarm_window_t2

0x3056,	// (0x0004cb72) popup_midp_note_alarm_window_t3_ParamLimits

0x3056,	// (0x0004cb72) popup_midp_note_alarm_window_t3

0x3088,	// (0x0004cba4) popup_midp_note_alarm_window_t4_ParamLimits

0x3088,	// (0x0004cba4) popup_midp_note_alarm_window_t4

0x30ae,	// (0x0004cbca) popup_midp_note_alarm_window_t5_ParamLimits

0x30ae,	// (0x0004cbca) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x000593bb) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x000593bb) popup_midp_note_alarm_window_t

0x315a,	// (0x0004cc76) wait_bar_pane_cp1_ParamLimits

0x315a,	// (0x0004cc76) wait_bar_pane_cp1

0x6ebd,	// (0x000509d9) wait_anim_pane_copy1

0x6ebd,	// (0x000509d9) wait_border_pane_copy1

0x2b42,	// (0x0004c65e) wait_border_pane_g1_copy1

0xe6d0,	// (0x000581ec) form_field_popup_pane_g1

0x98b8,	// (0x000533d4) form_field_popup_pane_t1_ParamLimits

0xa264,	// (0x00053d80) input_focus_pane_cp7_ParamLimits

0xa292,	// (0x00053dae) list_form_pane_ParamLimits

0xe6d8,	// (0x000581f4) form_field_popup_wide_pane_g1

0xe6e0,	// (0x000581fc) form_field_popup_wide_pane_t1_ParamLimits

0xa264,	// (0x00053d80) input_focus_pane_cp8_ParamLimits

0xa29e,	// (0x00053dba) list_form_wide_pane_ParamLimits

0x3cab,	// (0x0004d7c7) aid_size_cell_graphic_pane

0x9937,	// (0x00053453) data_form_pane_t1_ParamLimits

0x9a33,	// (0x0005354f) data_form_wide_pane_t1_ParamLimits

0xb9b2,	// (0x000554ce) bg_status_flat_pane

0x9e20,	// (0x0005393c) title_pane_t1_ParamLimits

0x6edf,	// (0x000509fb) title_pane_t2_ParamLimits

0x6f05,	// (0x00050a21) title_pane_t3_ParamLimits

0xf557,	// (0x00059073) title_pane_t_ParamLimits

0xa882,	// (0x0005439e) level_1_signal_ParamLimits

0xa894,	// (0x000543b0) level_2_signal_ParamLimits

0xa8a7,	// (0x000543c3) level_3_signal_ParamLimits

0xa8ba,	// (0x000543d6) level_4_signal_ParamLimits

0xa8cd,	// (0x000543e9) level_5_signal_ParamLimits

0xa8e0,	// (0x000543fc) level_6_signal_ParamLimits

0xa8f3,	// (0x0005440f) level_7_signal_ParamLimits

0xa882,	// (0x0005439e) level_1_battery_ParamLimits

0xa894,	// (0x000543b0) level_2_battery_ParamLimits

0xa8a7,	// (0x000543c3) level_3_battery_ParamLimits

0xa8ba,	// (0x000543d6) level_4_battery_ParamLimits

0xa8cd,	// (0x000543e9) level_5_battery_ParamLimits

0xa8e0,	// (0x000543fc) level_6_battery_ParamLimits

0xa8f3,	// (0x0005440f) level_7_battery_ParamLimits

0x2d62,	// (0x0004c87e) bg_status_flat_pane_g1

0x2d6a,	// (0x0004c886) bg_status_flat_pane_g2

0x2d72,	// (0x0004c88e) bg_status_flat_pane_g3

0x2d7a,	// (0x0004c896) bg_status_flat_pane_g4

0x2d82,	// (0x0004c89e) bg_status_flat_pane_g5

0x2d8a,	// (0x0004c8a6) bg_status_flat_pane_g6

0x2d92,	// (0x0004c8ae) bg_status_flat_pane_g7

0x9eb4,	// (0x000539d0) tabs_3_active_pane_t1_ParamLimits

0x9eb4,	// (0x000539d0) tabs_3_passive_pane_t1_ParamLimits

0x9ece,	// (0x000539ea) tabs_4_active_pane_t1_ParamLimits

0x9ece,	// (0x000539ea) tabs_4_1_passive_pane_t1_ParamLimits

0xa41c,	// (0x00053f38) tabs_2_active_pane_t1_ParamLimits

0xa41c,	// (0x00053f38) tabs_2_passive_pane_t1_ParamLimits

0x6f17,	// (0x00050a33) bg_active_tab_pane_cp4_ParamLimits

0xa42e,	// (0x00053f4a) tabs_2_long_active_pane_t1_ParamLimits

0x04b3,	// (0x00049fcf) bg_passive_tab_pane_cp4_ParamLimits

0x0669,	// (0x0004a185) list_single_midp_graphic_pane_t1_ParamLimits

0x6f17,	// (0x00050a33) bg_active_tab_pane_cp5_ParamLimits

0xa441,	// (0x00053f5d) tabs_3_long_active_pane_t1_ParamLimits

0x04b3,	// (0x00049fcf) bg_passive_tab_pane_cp5_ParamLimits

0x0669,	// (0x0004a185) list_single_midp_graphic_pane_t1

0xb9b2,	// (0x000554ce) bg_status_flat_pane_ParamLimits

0x21e8,	// (0x0004bd04) indicator_pane_cp2_ParamLimits

0x21e8,	// (0x0004bd04) indicator_pane_cp2

0xbb48,	// (0x00055664) navi_pane_srt_ParamLimits

0xbb48,	// (0x00055664) navi_pane_srt

0x234f,	// (0x0004be6b) popup_clock_digital_analogue_window_cp1

0x6f5b,	// (0x00050a77) indicator_pane_t1

0xe7f5,	// (0x00058311) copy_highlight_pane

0xe7f5,	// (0x00058311) cursor_graphics_pane

0xe7f5,	// (0x00058311) graphic_within_text_pane

0xe7f5,	// (0x00058311) link_highlight_pane

0x3581,	// (0x0004d09d) popup_preview_text_window_t5_ParamLimits

0x3581,	// (0x0004d09d) popup_preview_text_window_t5

0xe862,	// (0x0005837e) cursor_digital_pane

0xe862,	// (0x0005837e) cursor_primary_pane

0xe873,	// (0x0005838f) cursor_primary_small_pane

0xe87b,	// (0x00058397) cursor_secondary_pane

0xe883,	// (0x0005839f) cursor_title_pane

0xe862,	// (0x0005837e) link_highlight_digital_pane

0xe86a,	// (0x00058386) link_highlight_primary_pane

0xe873,	// (0x0005838f) link_highlight_primary_small_pane

0xe87b,	// (0x00058397) link_highlight_secondary_pane

0xe883,	// (0x0005839f) link_highlight_title_pane

0xe862,	// (0x0005837e) copy_highlight_digital_pane

0xe862,	// (0x0005837e) copy_highlight_primary_pane

0xe873,	// (0x0005838f) copy_highlight_primary_small_pane

0xe87b,	// (0x00058397) copy_highlight_secondary_pane

0xe883,	// (0x0005839f) copy_highlight_title_pane

0xe87b,	// (0x00058397) graphic_text_digital_pane

0x2e00,	// (0x0004c91c) graphic_text_primary_pane

0x2e09,	// (0x0004c925) graphic_text_primary_small_pane

0xe873,	// (0x0005838f) graphic_text_secondary_pane

0xe862,	// (0x0005837e) graphic_text_title_pane

0xaf3e,	// (0x00054a5a) cursor_primary_pane_g1

0x2df2,	// (0x0004c90e) cursor_text_primary_t1

0xc645,	// (0x00056161) cursor_primary_small_pane_g1

0x2de4,	// (0x0004c900) cursor_text_primary_small_t1

0xc63b,	// (0x00056157) cursor_primary_small_pane_g1_copy1

0x2dcc,	// (0x0004c8e8) cursor_text_primary_small_t1_copy1

0x2daa,	// (0x0004c8c6) cursor_text_title_t1

0xc631,	// (0x0005614d) cursor_title_pane_g1

0xaf3e,	// (0x00054a5a) cursor_digital_pane_g1

0xe88b,	// (0x000583a7) cursor_text_digital_t1

0xe899,	// (0x000583b5) link_highlight_primary_pane_g1

0x2d53,	// (0x0004c86f) link_highlight_primary_pane_t1

0xe899,	// (0x000583b5) link_highlight_primary_small_pane_g1

0xe8a1,	// (0x000583bd) link_highlight_primary_small_pane_t1

0xe8b0,	// (0x000583cc) link_highlight_secondary_pane_g1

0xe8b8,	// (0x000583d4) link_highlight_secondary_pane_t1

0x2cc7,	// (0x0004c7e3) link_highlight_title_pane_g1

0x2ccf,	// (0x0004c7eb) link_highlight_title_pane_t1

0x2cb0,	// (0x0004c7cc) link_highlight_digital_pane_g1

0x2cb8,	// (0x0004c7d4) link_highlight_digital_pane_t1

0x2b78,	// (0x0004c694) copy_highlight_primary_pane_g1

0x2b8f,	// (0x0004c6ab) copy_highlight_primary_pane_t1

0x2b78,	// (0x0004c694) copy_highlight_primary_small_pane_g1

0x2b80,	// (0x0004c69c) copy_highlight_primary_small_pane_t1

0xe8c7,	// (0x000583e3) copy_highlight_secondary_pane_g1

0xe8cf,	// (0x000583eb) copy_highlight_secondary_pane_t1

0x2b61,	// (0x0004c67d) copy_highlight_title_pane_g1

0x2b69,	// (0x0004c685) copy_highlight_title_pane_t1

0x2b78,	// (0x0004c694) copy_highlight_digital_pane_g1

0x3e7b,	// (0x0004d997) copy_highlight_digital_pane_t1

0x3dcf,	// (0x0004d8eb) graphic_text_primary_pane_g1

0x3e5f,	// (0x0004d97b) graphic_text_primary_pane_t1

0x3e6d,	// (0x0004d989) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x000594ea) graphic_text_primary_pane_t

0x3e3b,	// (0x0004d957) graphic_text_primary_small_pane_g1

0x3e43,	// (0x0004d95f) graphic_text_primary_small_pane_t1

0x3e51,	// (0x0004d96d) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x000594e5) graphic_text_primary_small_pane_t

0x3e17,	// (0x0004d933) graphic_text_secondary_pane_g1

0x3e1f,	// (0x0004d93b) graphic_text_secondary_pane_t1

0x3e2d,	// (0x0004d949) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x000594e0) graphic_text_secondary_pane_t

0x3df3,	// (0x0004d90f) graphic_text_title_pane_g1

0x3dfb,	// (0x0004d917) graphic_text_title_pane_t1

0x3e09,	// (0x0004d925) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x000594db) graphic_text_title_pane_t

0x3dcf,	// (0x0004d8eb) graphic_text_digital_pane_g1

0x3dd7,	// (0x0004d8f3) graphic_text_digital_pane_t1

0x3de5,	// (0x0004d901) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x000594d6) graphic_text_digital_pane_t

0x6f17,	// (0x00050a33) navi_icon_pane_srt_ParamLimits

0x6f17,	// (0x00050a33) navi_icon_pane_srt

0x6ebd,	// (0x000509d9) navi_midp_pane_srt

0x6ebd,	// (0x000509d9) navi_navi_pane_srt

0x6f17,	// (0x00050a33) navi_text_pane_srt_ParamLimits

0x6f17,	// (0x00050a33) navi_text_pane_srt

0x3d9a,	// (0x0004d8b6) navi_navi_icon_text_pane_srt

0x3da2,	// (0x0004d8be) navi_navi_pane_srt_g1_ParamLimits

0x3da2,	// (0x0004d8be) navi_navi_pane_srt_g1

0x3db4,	// (0x0004d8d0) navi_navi_pane_srt_g2_ParamLimits

0x3db4,	// (0x0004d8d0) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x000594d1) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x000594d1) navi_navi_pane_srt_g

0x3dc6,	// (0x0004d8e2) navi_navi_tabs_pane_srt

0x3d9a,	// (0x0004d8b6) navi_navi_text_pane_srt

0x3d9a,	// (0x0004d8b6) navi_navi_volume_pane_srt

0x3d8b,	// (0x0004d8a7) navi_navi_text_pane_srt_t1

0x0a5d,	// (0x0004a579) navi_navi_volume_pane_srt_g1

0x0a65,	// (0x0004a581) volume_small_pane_srt_ParamLimits

0x0a65,	// (0x0004a581) volume_small_pane_srt

0x016e,	// (0x00049c8a) volume_small_pane_srt_g1_ParamLimits

0x016e,	// (0x00049c8a) volume_small_pane_srt_g1

0x017e,	// (0x00049c9a) volume_small_pane_srt_g2_ParamLimits

0x017e,	// (0x00049c9a) volume_small_pane_srt_g2

0x018f,	// (0x00049cab) volume_small_pane_srt_g3_ParamLimits

0x018f,	// (0x00049cab) volume_small_pane_srt_g3

0x01a0,	// (0x00049cbc) volume_small_pane_srt_g4_ParamLimits

0x01a0,	// (0x00049cbc) volume_small_pane_srt_g4

0x01b1,	// (0x00049ccd) volume_small_pane_srt_g5_ParamLimits

0x01b1,	// (0x00049ccd) volume_small_pane_srt_g5

0x01c2,	// (0x00049cde) volume_small_pane_srt_g6_ParamLimits

0x01c2,	// (0x00049cde) volume_small_pane_srt_g6

0x01d3,	// (0x00049cef) volume_small_pane_srt_g7_ParamLimits

0x01d3,	// (0x00049cef) volume_small_pane_srt_g7

0x01e4,	// (0x00049d00) volume_small_pane_srt_g8_ParamLimits

0x01e4,	// (0x00049d00) volume_small_pane_srt_g8

0x01f5,	// (0x00049d11) volume_small_pane_srt_g9_ParamLimits

0x01f5,	// (0x00049d11) volume_small_pane_srt_g9

0x0206,	// (0x00049d22) volume_small_pane_srt_g10_ParamLimits

0x0206,	// (0x00049d22) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0005927e) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0005927e) volume_small_pane_srt_g

0x71b5,	// (0x00050cd1) query_popup_data_pane_cp2

0x3d71,	// (0x0004d88d) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3d71,	// (0x0004d88d) navi_navi_icon_text_pane_srt_t1

0x2e00,	// (0x0004c91c) navi_tabs_2_long_pane_srt

0x2e00,	// (0x0004c91c) navi_tabs_2_pane_srt

0x2e00,	// (0x0004c91c) navi_tabs_3_long_pane_srt

0x2e00,	// (0x0004c91c) navi_tabs_3_pane_srt

0x2e00,	// (0x0004c91c) navi_tabs_4_pane_srt

0x0a3d,	// (0x0004a559) tabs_2_active_pane_srt_ParamLimits

0x0a3d,	// (0x0004a559) tabs_2_active_pane_srt

0x0a4d,	// (0x0004a569) tabs_2_passive_pane_srt_ParamLimits

0x0a4d,	// (0x0004a569) tabs_2_passive_pane_srt

0x25e4,	// (0x0004c100) bg_passive_tab_pane_cp1_srt_ParamLimits

0x25e4,	// (0x0004c100) bg_passive_tab_pane_cp1_srt

0x3d3d,	// (0x0004d859) bg_passive_tab_pane_g1_cp1_srt

0xabb7,	// (0x000546d3) bg_passive_tab_pane_g2_cp1_srt

0x3d46,	// (0x0004d862) bg_passive_tab_pane_g3_cp1_srt

0x704a,	// (0x00050b66) bg_active_tab_pane_cp1_srt_ParamLimits

0x704a,	// (0x00050b66) bg_active_tab_pane_cp1_srt

0x3d4f,	// (0x0004d86b) tabs_2_active_pane_srt_g1

0xcb19,	// (0x00056635) tabs_2_active_pane_srt_t1_ParamLimits

0xcb19,	// (0x00056635) tabs_2_active_pane_srt_t1

0x3d3d,	// (0x0004d859) bg_active_tab_pane_g1_cp1_srt

0xabb7,	// (0x000546d3) bg_active_tab_pane_g2_cp1_srt

0x3d46,	// (0x0004d862) bg_active_tab_pane_g3_cp1_srt

0x0a0a,	// (0x0004a526) tabs_3_active_pane_srt_ParamLimits

0x0a0a,	// (0x0004a526) tabs_3_active_pane_srt

0x0a1b,	// (0x0004a537) tabs_3_passive_pane_cp_srt_ParamLimits

0x0a1b,	// (0x0004a537) tabs_3_passive_pane_cp_srt

0x0a2c,	// (0x0004a548) tabs_3_passive_pane_srt_ParamLimits

0x0a2c,	// (0x0004a548) tabs_3_passive_pane_srt

0x25e4,	// (0x0004c100) bg_passive_tab_pane_cp2_srt_ParamLimits

0x25e4,	// (0x0004c100) bg_passive_tab_pane_cp2_srt

0xe8de,	// (0x000583fa) bg_passive_tab_pane_g1_cp2_srt

0xabb7,	// (0x000546d3) bg_passive_tab_pane_g2_cp2_srt

0xe8e7,	// (0x00058403) bg_passive_tab_pane_g3_cp2_srt

0x704a,	// (0x00050b66) bg_active_tab_pane_cp2_srt_ParamLimits

0x704a,	// (0x00050b66) bg_active_tab_pane_cp2_srt

0x3d23,	// (0x0004d83f) tabs_3_active_pane_srt_g1

0xcb03,	// (0x0005661f) tabs_3_active_pane_srt_t1_ParamLimits

0xcb03,	// (0x0005661f) tabs_3_active_pane_srt_t1

0xe8de,	// (0x000583fa) bg_active_tab_pane_g1_cp2_srt

0xabb7,	// (0x000546d3) bg_active_tab_pane_g2_cp2_srt

0xe8e7,	// (0x00058403) bg_active_tab_pane_g3_cp2_srt

0x09c2,	// (0x0004a4de) tabs_4_active_pane_srt_ParamLimits

0x09c2,	// (0x0004a4de) tabs_4_active_pane_srt

0x09d4,	// (0x0004a4f0) tabs_4_passive_pane_cp2_srt_ParamLimits

0x09d4,	// (0x0004a4f0) tabs_4_passive_pane_cp2_srt

0x0441,	// (0x00049f5d) aid_size_cell_toolbar

0x3939,	// (0x0004d455) main_idle_act_pane_ParamLimits

0x1bf8,	// (0x0004b714) popup_large_graphic_colour_window_ParamLimits

0xb874,	// (0x00055390) popup_toolbar_window_ParamLimits

0xb874,	// (0x00055390) popup_toolbar_window

0x3b11,	// (0x0004d62d) list_single_graphic_2heading_pane_ParamLimits

0x3b11,	// (0x0004d62d) list_single_graphic_2heading_pane

0xa5f1,	// (0x0005410d) aid_size_cell_apps_grid_lsc_pane

0xa603,	// (0x0005411f) aid_size_cell_apps_grid_prt_pane

0x04b3,	// (0x00049fcf) bg_wml_button_pane_cp1_ParamLimits

0x04b3,	// (0x00049fcf) bg_wml_button_pane_cp1

0xc5e1,	// (0x000560fd) form_midp_field_text_pane_t1_ParamLimits

0x25e4,	// (0x0004c100) input_focus_pane_cp050_ParamLimits

0x2823,	// (0x0004c33f) list_midp_form_text_pane_ParamLimits

0x27d5,	// (0x0004c2f1) input_focus_pane_cp051_ParamLimits

0x27e9,	// (0x0004c305) list_midp_choice_pane_ParamLimits

0xbd85,	// (0x000558a1) list_single_2graphic_pane_cp3_ParamLimits

0xbd85,	// (0x000558a1) list_single_2graphic_pane_cp3

0x49d6,	// (0x0004e4f2) list_single_midp_graphic_pane_ParamLimits

0x49d6,	// (0x0004e4f2) list_single_midp_graphic_pane

0xe970,	// (0x0005848c) list_single_graphic_2heading_pane_g1_ParamLimits

0xe970,	// (0x0005848c) list_single_graphic_2heading_pane_g1

0xe97c,	// (0x00058498) list_single_graphic_2heading_pane_g4_ParamLimits

0xe97c,	// (0x00058498) list_single_graphic_2heading_pane_g4

0xe988,	// (0x000584a4) list_single_graphic_2heading_pane_g5_ParamLimits

0xe988,	// (0x000584a4) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x000592d1) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x000592d1) list_single_graphic_2heading_pane_g

0xe994,	// (0x000584b0) list_single_graphic_2heading_pane_t1_ParamLimits

0xe994,	// (0x000584b0) list_single_graphic_2heading_pane_t1

0xe9a8,	// (0x000584c4) list_single_graphic_2heading_pane_t2_ParamLimits

0xe9a8,	// (0x000584c4) list_single_graphic_2heading_pane_t2

0xe9c4,	// (0x000584e0) list_single_graphic_2heading_pane_t3_ParamLimits

0xe9c4,	// (0x000584e0) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x000592d8) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x000592d8) list_single_graphic_2heading_pane_t

0x24ae,	// (0x0004bfca) bg_popup_sub_pane_cp2

0x24d8,	// (0x0004bff4) grid_toobar_pane

0x05e1,	// (0x0004a0fd) cell_toolbar_pane_ParamLimits

0x05e1,	// (0x0004a0fd) cell_toolbar_pane

0x2514,	// (0x0004c030) cell_toolbar_pane_g1_ParamLimits

0x2514,	// (0x0004c030) cell_toolbar_pane_g1

0x2528,	// (0x0004c044) cell_toolbar_pane_g2_ParamLimits

0x2528,	// (0x0004c044) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x000592e6) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x000592e6) cell_toolbar_pane_g

0x254a,	// (0x0004c066) grid_highlight_pane_cp2_ParamLimits

0x254a,	// (0x0004c066) grid_highlight_pane_cp2

0x2564,	// (0x0004c080) toolbar_button_pane

0x2570,	// (0x0004c08c) toolbar_button_pane_g1

0x2578,	// (0x0004c094) toolbar_button_pane_g2

0x2580,	// (0x0004c09c) toolbar_button_pane_g3

0x2588,	// (0x0004c0a4) toolbar_button_pane_g4

0x2590,	// (0x0004c0ac) toolbar_button_pane_g5

0x2598,	// (0x0004c0b4) toolbar_button_pane_g6

0x25a0,	// (0x0004c0bc) toolbar_button_pane_g7

0x25a8,	// (0x0004c0c4) toolbar_button_pane_g8

0x25b0,	// (0x0004c0cc) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x000592eb) toolbar_button_pane_g

0x0625,	// (0x0004a141) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0625,	// (0x0004a141) list_single_2graphic_pane_g1_cp3

0xbce7,	// (0x00055803) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbce7,	// (0x00055803) list_single_2graphic_pane_g2_cp3

0xad8a,	// (0x000548a6) list_single_2graphic_pane_g3_cp3

0x0642,	// (0x0004a15e) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0642,	// (0x0004a15e) list_single_2graphic_pane_g4_cp3

0x064e,	// (0x0004a16a) list_single_2graphic_pane_t1_cp3_ParamLimits

0x064e,	// (0x0004a16a) list_single_2graphic_pane_t1_cp3

0xad7e,	// (0x0005489a) list_single_midp_graphic_pane_g2_ParamLimits

0xad7e,	// (0x0005489a) list_single_midp_graphic_pane_g2

0xe958,	// (0x00058474) aid_zoom_text_primary

0xe960,	// (0x0005847c) aid_zoom_text_secondary

0xaf96,	// (0x00054ab2) status_small_pane_g7_ParamLimits

0xaf96,	// (0x00054ab2) status_small_pane_g7

0xafb9,	// (0x00054ad5) status_small_pane_t1_ParamLimits

0x9e08,	// (0x00053924) title_pane_g2

0x0003,

0xf54e,	// (0x0005906a) title_pane_g

0xa094,	// (0x00053bb0) aid_size_cell_colour_1_pane_ParamLimits

0xa094,	// (0x00053bb0) aid_size_cell_colour_1_pane

0xa0a8,	// (0x00053bc4) aid_size_cell_colour_2_pane_ParamLimits

0xa0a8,	// (0x00053bc4) aid_size_cell_colour_2_pane

0xa0bc,	// (0x00053bd8) aid_size_cell_colour_3_pane_ParamLimits

0xa0bc,	// (0x00053bd8) aid_size_cell_colour_3_pane

0xa0d0,	// (0x00053bec) aid_size_cell_colour_4_pane_ParamLimits

0xa0d0,	// (0x00053bec) aid_size_cell_colour_4_pane

0xf1ac,	// (0x00058cc8) title_pane_stacon_g1_ParamLimits

0xf1ac,	// (0x00058cc8) title_pane_stacon_g1

0x2be6,	// (0x0004c702) popup_note_wait_window_g3_ParamLimits

0x2be6,	// (0x0004c702) popup_note_wait_window_g3

0x2c5d,	// (0x0004c779) popup_note_wait_window_t5_ParamLimits

0x2c5d,	// (0x0004c779) popup_note_wait_window_t5

0x6ebd,	// (0x000509d9) main_feb_china_hwr_fs_writing_pane

0xb20b,	// (0x00054d27) popup_feb_china_hwr_fs_window_ParamLimits

0xb20b,	// (0x00054d27) popup_feb_china_hwr_fs_window

0xbcf8,	// (0x00055814) aid_size_cell_hwr_fs_ParamLimits

0xbcf8,	// (0x00055814) aid_size_cell_hwr_fs

0x25e4,	// (0x0004c100) bg_popup_sub_pane_cp3_ParamLimits

0x25e4,	// (0x0004c100) bg_popup_sub_pane_cp3

0xbd0d,	// (0x00055829) grid_hwr_fs_pane_ParamLimits

0xbd0d,	// (0x00055829) grid_hwr_fs_pane

0x06c4,	// (0x0004a1e0) linegrid_hwr_fs_pane_ParamLimits

0x06c4,	// (0x0004a1e0) linegrid_hwr_fs_pane

0xbd25,	// (0x00055841) cell_hwr_fs_pane_ParamLimits

0xbd25,	// (0x00055841) cell_hwr_fs_pane

0x25f0,	// (0x0004c10c) linegrid_hwr_fs_pane_g1_ParamLimits

0x25f0,	// (0x0004c10c) linegrid_hwr_fs_pane_g1

0xbd4b,	// (0x00055867) linegrid_hwr_fs_pane_g2_ParamLimits

0xbd4b,	// (0x00055867) linegrid_hwr_fs_pane_g2

0x260e,	// (0x0004c12a) linegrid_hwr_fs_pane_g3_ParamLimits

0x260e,	// (0x0004c12a) linegrid_hwr_fs_pane_g3

0x06f8,	// (0x0004a214) linegrid_hwr_fs_pane_g4_ParamLimits

0x06f8,	// (0x0004a214) linegrid_hwr_fs_pane_g4

0x0716,	// (0x0004a232) linegrid_hwr_fs_pane_g5_ParamLimits

0x0716,	// (0x0004a232) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x00059311) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x00059311) linegrid_hwr_fs_pane_g

0x261a,	// (0x0004c136) cell_hwr_fs_pane_g1_ParamLimits

0x261a,	// (0x0004c136) cell_hwr_fs_pane_g1

0x23e5,	// (0x0004bf01) cell_hwr_fs_pane_g2_ParamLimits

0x23e5,	// (0x0004bf01) cell_hwr_fs_pane_g2

0xbd5d,	// (0x00055879) cell_hwr_fs_pane_g3_ParamLimits

0xbd5d,	// (0x00055879) cell_hwr_fs_pane_g3

0xbd6a,	// (0x00055886) cell_hwr_fs_pane_g4_ParamLimits

0xbd6a,	// (0x00055886) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x0005931c) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0005931c) cell_hwr_fs_pane_g

0xbd77,	// (0x00055893) cell_hwr_fs_pane_t1

0x6ebd,	// (0x000509d9) grid_highlight_pane_cp6

0x6ebd,	// (0x000509d9) main_idle_act2_pane

0xa3c1,	// (0x00053edd) aid_inside_area_popup_secondary

0xc6ac,	// (0x000561c8) aid_inside_area_window_primary_ParamLimits

0xc6ac,	// (0x000561c8) aid_inside_area_window_primary

0x3e8a,	// (0x0004d9a6) ai2_news_ticker_pane

0x3e92,	// (0x0004d9ae) aid_size_cell_ai1_link_ParamLimits

0x3e92,	// (0x0004d9ae) aid_size_cell_ai1_link

0x3eac,	// (0x0004d9c8) popup_ai2_data_window_ParamLimits

0x3eac,	// (0x0004d9c8) popup_ai2_data_window

0x3eca,	// (0x0004d9e6) popup_ai2_link_window_ParamLimits

0x3eca,	// (0x0004d9e6) popup_ai2_link_window

0x25e4,	// (0x0004c100) bg_popup_sub_pane_cp4_ParamLimits

0x25e4,	// (0x0004c100) bg_popup_sub_pane_cp4

0x3ee0,	// (0x0004d9fc) grid_ai2_link_pane_ParamLimits

0x3ee0,	// (0x0004d9fc) grid_ai2_link_pane

0x3ef7,	// (0x0004da13) popup_ai2_link_window_g1_ParamLimits

0x3ef7,	// (0x0004da13) popup_ai2_link_window_g1

0x3f03,	// (0x0004da1f) popup_ai2_link_window_g2_ParamLimits

0x3f03,	// (0x0004da1f) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x000594ef) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x000594ef) popup_ai2_link_window_g

0x3f14,	// (0x0004da30) ai2_mp_button_pane

0x3f1c,	// (0x0004da38) ai2_mp_volume_pane

0x27d5,	// (0x0004c2f1) bg_popup_sub_pane_cp5_ParamLimits

0x27d5,	// (0x0004c2f1) bg_popup_sub_pane_cp5

0x3f24,	// (0x0004da40) heading_ai2_gene_pane_ParamLimits

0x3f24,	// (0x0004da40) heading_ai2_gene_pane

0x3f30,	// (0x0004da4c) list_ai2_gene_pane_ParamLimits

0x3f30,	// (0x0004da4c) list_ai2_gene_pane

0x3f78,	// (0x0004da94) cell_ai2_link_pane_ParamLimits

0x3f78,	// (0x0004da94) cell_ai2_link_pane

0x3f8e,	// (0x0004daaa) cell_ai2_link_pane_g1

0x6ebd,	// (0x000509d9) grid_highlight_pane_cp7

0x0a7a,	// (0x0004a596) ai2_mp_volume_pane_g1

0x4061,	// (0x0004db7d) ai2_mp_volume_pane_g2

0x3fd6,	// (0x0004daf2) list_ai2_gene_pane_t1

0x4069,	// (0x0004db85) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x00059508) ai2_mp_volume_pane_g

0x0a82,	// (0x0004a59e) volume_small_pane_cp3

0x4071,	// (0x0004db8d) aid_size_cell_ai2_button

0x4079,	// (0x0004db95) grid_ai2_button_pane

0x4082,	// (0x0004db9e) cell_ai2_button_pane_ParamLimits

0x4082,	// (0x0004db9e) cell_ai2_button_pane

0x6eb3,	// (0x000509cf) cell_ai2_button_pane_g1

0x6ebd,	// (0x000509d9) grid_highlight_pane_cp8

0x4021,	// (0x0004db3d) ai2_gene_pane_t1_ParamLimits

0x4021,	// (0x0004db3d) ai2_gene_pane_t1

0xb177,	// (0x00054c93) aid_height_parent_landscape

0xc8a1,	// (0x000563bd) aid_height_set_list

0x3939,	// (0x0004d455) aid_size_parent

0x3cab,	// (0x0004d7c7) aid_size_cell_graphic_pane_ParamLimits

0x3f40,	// (0x0004da5c) popup_ai2_data_window_g1_ParamLimits

0x3f40,	// (0x0004da5c) popup_ai2_data_window_g1

0x3f4c,	// (0x0004da68) ai2_news_ticker_pane_g1

0x3f54,	// (0x0004da70) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x000594f4) ai2_news_ticker_pane_g

0x3f5c,	// (0x0004da78) ai2_news_ticker_pane_t1

0x3f6a,	// (0x0004da86) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x000594f9) ai2_news_ticker_pane_t

0x3f97,	// (0x0004dab3) heading_ai2_gene_pane_g1

0x3f9f,	// (0x0004dabb) heading_ai2_gene_pane_t1_ParamLimits

0x3f9f,	// (0x0004dabb) heading_ai2_gene_pane_t1

0x3fb4,	// (0x0004dad0) list_highlight_pane_cp6

0x3fbc,	// (0x0004dad8) ai2_gene_pane_ParamLimits

0x3fbc,	// (0x0004dad8) ai2_gene_pane

0x3fe4,	// (0x0004db00) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x000594fe) list_ai2_gene_pane_t

0x3ff2,	// (0x0004db0e) list_highlight_pane_cp8_ParamLimits

0x3ff2,	// (0x0004db0e) list_highlight_pane_cp8

0x4003,	// (0x0004db1f) ai2_gene_pane_g1_ParamLimits

0x4003,	// (0x0004db1f) ai2_gene_pane_g1

0x4015,	// (0x0004db31) ai2_gene_pane_g2_ParamLimits

0x4015,	// (0x0004db31) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x00059503) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x00059503) ai2_gene_pane_g

0x74d0,	// (0x00050fec) scroll_pane_cp12

0xb136,	// (0x00054c52) control_pane_t3_ParamLimits

0xb136,	// (0x00054c52) control_pane_t3

0xafaa,	// (0x00054ac6) status_small_pane_g8_ParamLimits

0xafaa,	// (0x00054ac6) status_small_pane_g8

0xb2ad,	// (0x00054dc9) popup_find_window_ParamLimits

0xb55e,	// (0x0005507a) popup_note_image_window_ParamLimits

0xe9dc,	// (0x000584f8) list_double2_graphic_pane_vc_g1_ParamLimits

0xe9dc,	// (0x000584f8) list_double2_graphic_pane_vc_g1

0xe5f4,	// (0x00058110) list_double2_graphic_pane_vc_g2_ParamLimits

0xe5f4,	// (0x00058110) list_double2_graphic_pane_vc_g2

0x0611,	// (0x0004a12d) list_double2_graphic_pane_vc_g3_ParamLimits

0x0611,	// (0x0004a12d) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x000592df) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x000592df) list_double2_graphic_pane_vc_g

0xe9e8,	// (0x00058504) list_double2_graphic_pane_vc_t1_ParamLimits

0xe9e8,	// (0x00058504) list_double2_graphic_pane_vc_t1

0xe5f4,	// (0x00058110) list_single_heading_pane_vc_g1_ParamLimits

0xe5f4,	// (0x00058110) list_single_heading_pane_vc_g1

0x0611,	// (0x0004a12d) list_single_heading_pane_vc_g2_ParamLimits

0x0611,	// (0x0004a12d) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x000590ee) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x000590ee) list_single_heading_pane_vc_g

0xe9fe,	// (0x0005851a) list_single_heading_pane_vc_t1_ParamLimits

0xe9fe,	// (0x0005851a) list_single_heading_pane_vc_t1

0xea16,	// (0x00058532) list_single_heading_pane_vc_t2_ParamLimits

0xea16,	// (0x00058532) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x00059300) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x00059300) list_single_heading_pane_vc_t

0x067f,	// (0x0004a19b) list_setting_number_pane_vc_g1_ParamLimits

0x067f,	// (0x0004a19b) list_setting_number_pane_vc_g1

0x068b,	// (0x0004a1a7) list_setting_number_pane_vc_g2_ParamLimits

0x068b,	// (0x0004a1a7) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x00059305) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x00059305) list_setting_number_pane_vc_g

0xea28,	// (0x00058544) list_setting_number_pane_vc_t1_ParamLimits

0xea28,	// (0x00058544) list_setting_number_pane_vc_t1

0xea3c,	// (0x00058558) list_setting_number_pane_vc_t2_ParamLimits

0xea3c,	// (0x00058558) list_setting_number_pane_vc_t2

0xea58,	// (0x00058574) list_setting_number_pane_vc_t3_ParamLimits

0xea58,	// (0x00058574) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x0005930a) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x0005930a) list_setting_number_pane_vc_t

0xea86,	// (0x000585a2) set_value_pane_vc_ParamLimits

0xea86,	// (0x000585a2) set_value_pane_vc

0x3b11,	// (0x0004d62d) list_double2_graphic_pane_vc_ParamLimits

0x3b11,	// (0x0004d62d) list_double2_graphic_pane_vc

0x3b11,	// (0x0004d62d) list_double2_large_graphic_pane_vc_ParamLimits

0x3b11,	// (0x0004d62d) list_double2_large_graphic_pane_vc

0x3b11,	// (0x0004d62d) list_double2_pane_vc_ParamLimits

0x3b11,	// (0x0004d62d) list_double2_pane_vc

0x3b11,	// (0x0004d62d) list_double_graphic_heading_pane_vc_ParamLimits

0x3b11,	// (0x0004d62d) list_double_graphic_heading_pane_vc

0x3b11,	// (0x0004d62d) list_double_graphic_pane_vc_ParamLimits

0x3b11,	// (0x0004d62d) list_double_graphic_pane_vc

0x3b11,	// (0x0004d62d) list_double_heading_pane_vc_ParamLimits

0x3b11,	// (0x0004d62d) list_double_heading_pane_vc

0x3b25,	// (0x0004d641) list_double_large_graphic_pane_vc_ParamLimits

0x3b25,	// (0x0004d641) list_double_large_graphic_pane_vc

0x3b11,	// (0x0004d62d) list_double_number_pane_vc_ParamLimits

0x3b11,	// (0x0004d62d) list_double_number_pane_vc

0x3b11,	// (0x0004d62d) list_double_pane_vc_ParamLimits

0x3b11,	// (0x0004d62d) list_double_pane_vc

0x3b11,	// (0x0004d62d) list_double_time_pane_vc_ParamLimits

0x3b11,	// (0x0004d62d) list_double_time_pane_vc

0x3b11,	// (0x0004d62d) list_setting_number_pane_vc_ParamLimits

0x3b11,	// (0x0004d62d) list_setting_number_pane_vc

0x3b11,	// (0x0004d62d) list_setting_pane_vc_ParamLimits

0x3b11,	// (0x0004d62d) list_setting_pane_vc

0x3b11,	// (0x0004d62d) list_single_graphic_heading_pane_vc_ParamLimits

0x3b11,	// (0x0004d62d) list_single_graphic_heading_pane_vc

0x3b11,	// (0x0004d62d) list_single_heading_pane_vc_ParamLimits

0x3b11,	// (0x0004d62d) list_single_heading_pane_vc

0x3b11,	// (0x0004d62d) list_single_number_heading_pane_vc_ParamLimits

0x3b11,	// (0x0004d62d) list_single_number_heading_pane_vc

0xe9dc,	// (0x000584f8) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe9dc,	// (0x000584f8) list_double_graphic_heading_pane_vc_g1

0x0a8b,	// (0x0004a5a7) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0a8b,	// (0x0004a5a7) list_double_graphic_heading_pane_vc_g2

0x0a97,	// (0x0004a5b3) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0a97,	// (0x0004a5b3) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f3,	// (0x0005950f) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f3,	// (0x0005950f) list_double_graphic_heading_pane_vc_g

0xeabd,	// (0x000585d9) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xeabd,	// (0x000585d9) list_double_graphic_heading_pane_vc_t1

0xead3,	// (0x000585ef) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xead3,	// (0x000585ef) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fa,	// (0x00059516) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fa,	// (0x00059516) list_double_graphic_heading_pane_vc_t

0x067f,	// (0x0004a19b) list_setting_pane_vc_g1_ParamLimits

0x067f,	// (0x0004a19b) list_setting_pane_vc_g1

0x068b,	// (0x0004a1a7) list_setting_pane_vc_g2_ParamLimits

0x068b,	// (0x0004a1a7) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x00059305) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x00059305) list_setting_pane_vc_g

0xeaf1,	// (0x0005860d) list_setting_pane_vc_t1_ParamLimits

0xeaf1,	// (0x0005860d) list_setting_pane_vc_t1

0xeb0d,	// (0x00058629) list_setting_pane_vc_t2_ParamLimits

0xeb0d,	// (0x00058629) list_setting_pane_vc_t2

0x0001,

0xfa3d,	// (0x00059559) list_setting_pane_vc_t_ParamLimits

0xfa3d,	// (0x00059559) list_setting_pane_vc_t

0xea86,	// (0x000585a2) set_value_pane_cp_vc_ParamLimits

0xea86,	// (0x000585a2) set_value_pane_cp_vc

0xe5f4,	// (0x00058110) list_single_number_heading_pane_vc_g1_ParamLimits

0xe5f4,	// (0x00058110) list_single_number_heading_pane_vc_g1

0x0611,	// (0x0004a12d) list_single_number_heading_pane_vc_g2_ParamLimits

0x0611,	// (0x0004a12d) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x000590ee) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x000590ee) list_single_number_heading_pane_vc_g

0xe9fe,	// (0x0005851a) list_single_number_heading_pane_vc_t1_ParamLimits

0xe9fe,	// (0x0005851a) list_single_number_heading_pane_vc_t1

0xeb29,	// (0x00058645) list_single_number_heading_pane_vc_t2_ParamLimits

0xeb29,	// (0x00058645) list_single_number_heading_pane_vc_t2

0xe616,	// (0x00058132) list_single_number_heading_pane_vc_t3_ParamLimits

0xe616,	// (0x00058132) list_single_number_heading_pane_vc_t3

0x0002,

0xfa42,	// (0x0005955e) list_single_number_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0005955e) list_single_number_heading_pane_vc_t

0xe9dc,	// (0x000584f8) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xe9dc,	// (0x000584f8) list_single_graphic_heading_pane_vc_g1

0xe5f4,	// (0x00058110) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xe5f4,	// (0x00058110) list_single_graphic_heading_pane_vc_g4

0x0611,	// (0x0004a12d) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0611,	// (0x0004a12d) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x000592df) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x000592df) list_single_graphic_heading_pane_vc_g

0xe9fe,	// (0x0005851a) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe9fe,	// (0x0005851a) list_single_graphic_heading_pane_vc_t1

0xeb3b,	// (0x00058657) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xeb3b,	// (0x00058657) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa49,	// (0x00059565) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x00059565) list_single_graphic_heading_pane_vc_t

0xe5f4,	// (0x00058110) list_double2_pane_vc_g1_ParamLimits

0xe5f4,	// (0x00058110) list_double2_pane_vc_g1

0x0611,	// (0x0004a12d) list_double2_pane_vc_g2_ParamLimits

0x0611,	// (0x0004a12d) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x000590ee) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x000590ee) list_double2_pane_vc_g

0xeaa7,	// (0x000585c3) list_double2_pane_vc_t1_ParamLimits

0xeaa7,	// (0x000585c3) list_double2_pane_vc_t1

0x0aa3,	// (0x0004a5bf) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0aa3,	// (0x0004a5bf) list_double2_large_graphic_pane_vc_g1

0xe5f4,	// (0x00058110) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xe5f4,	// (0x00058110) list_double2_large_graphic_pane_vc_g2

0x0611,	// (0x0004a12d) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0611,	// (0x0004a12d) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x00059106) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x00059106) list_double2_large_graphic_pane_vc_g

0xe600,	// (0x0005811c) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe600,	// (0x0005811c) list_double2_large_graphic_pane_vc_t1

0x0aaf,	// (0x0004a5cb) list_double_time_pane_vc_g1_ParamLimits

0x0aaf,	// (0x0004a5cb) list_double_time_pane_vc_g1

0x0abb,	// (0x0004a5d7) list_double_time_pane_vc_g2_ParamLimits

0x0abb,	// (0x0004a5d7) list_double_time_pane_vc_g2

0x0001,

0xfa4e,	// (0x0005956a) list_double_time_pane_vc_g_ParamLimits

0xfa4e,	// (0x0005956a) list_double_time_pane_vc_g

0xeb4d,	// (0x00058669) list_double_time_pane_vc_t1_ParamLimits

0xeb4d,	// (0x00058669) list_double_time_pane_vc_t1

0xeb77,	// (0x00058693) list_double_time_pane_vc_t2_ParamLimits

0xeb77,	// (0x00058693) list_double_time_pane_vc_t2

0xebc0,	// (0x000586dc) list_double_time_pane_vc_t3_ParamLimits

0xebc0,	// (0x000586dc) list_double_time_pane_vc_t3

0xebd2,	// (0x000586ee) list_double_time_pane_vc_t4_ParamLimits

0xebd2,	// (0x000586ee) list_double_time_pane_vc_t4

0x0003,

0xfa53,	// (0x0005956f) list_double_time_pane_vc_t_ParamLimits

0xfa53,	// (0x0005956f) list_double_time_pane_vc_t

0xe5f4,	// (0x00058110) list_double_pane_vc_g1_ParamLimits

0xe5f4,	// (0x00058110) list_double_pane_vc_g1

0x0611,	// (0x0004a12d) list_double_pane_vc_g2_ParamLimits

0x0611,	// (0x0004a12d) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x000590ee) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x000590ee) list_double_pane_vc_g

0xebf7,	// (0x00058713) list_double_pane_vc_t1_ParamLimits

0xebf7,	// (0x00058713) list_double_pane_vc_t1

0xec0b,	// (0x00058727) list_double_pane_vc_t2_ParamLimits

0xec0b,	// (0x00058727) list_double_pane_vc_t2

0x0001,

0xfa5c,	// (0x00059578) list_double_pane_vc_t_ParamLimits

0xfa5c,	// (0x00059578) list_double_pane_vc_t

0xe5f4,	// (0x00058110) list_double_number_pane_vc_g1_ParamLimits

0xe5f4,	// (0x00058110) list_double_number_pane_vc_g1

0x0611,	// (0x0004a12d) list_double_number_pane_vc_g2_ParamLimits

0x0611,	// (0x0004a12d) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x000590ee) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x000590ee) list_double_number_pane_vc_g

0xec21,	// (0x0005873d) list_double_number_pane_vc_t1_ParamLimits

0xec21,	// (0x0005873d) list_double_number_pane_vc_t1

0xec35,	// (0x00058751) list_double_number_pane_vc_t2_ParamLimits

0xec35,	// (0x00058751) list_double_number_pane_vc_t2

0xec49,	// (0x00058765) list_double_number_pane_vc_t3_ParamLimits

0xec49,	// (0x00058765) list_double_number_pane_vc_t3

0x0002,

0xfa61,	// (0x0005957d) list_double_number_pane_vc_t_ParamLimits

0xfa61,	// (0x0005957d) list_double_number_pane_vc_t

0x0ac7,	// (0x0004a5e3) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0ac7,	// (0x0004a5e3) list_double_large_graphic_pane_vc_g1

0x0aef,	// (0x0004a60b) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0aef,	// (0x0004a60b) list_double_large_graphic_pane_vc_g2

0x0b03,	// (0x0004a61f) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0b03,	// (0x0004a61f) list_double_large_graphic_pane_vc_g3

0xec5f,	// (0x0005877b) list_double_large_graphic_pane_vc_g4_ParamLimits

0xec5f,	// (0x0005877b) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa68,	// (0x00059584) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x00059584) list_double_large_graphic_pane_vc_g

0xec6f,	// (0x0005878b) list_double_large_graphic_pane_vc_t1_ParamLimits

0xec6f,	// (0x0005878b) list_double_large_graphic_pane_vc_t1

0xec91,	// (0x000587ad) list_double_large_graphic_pane_vc_t2_ParamLimits

0xec91,	// (0x000587ad) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x0005958d) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x0005958d) list_double_large_graphic_pane_vc_t

0x0a8b,	// (0x0004a5a7) list_double_heading_pane_vc_g1_ParamLimits

0x0a8b,	// (0x0004a5a7) list_double_heading_pane_vc_g1

0x0a97,	// (0x0004a5b3) list_double_heading_pane_vc_g2_ParamLimits

0x0a97,	// (0x0004a5b3) list_double_heading_pane_vc_g2

0x0001,

0xfa76,	// (0x00059592) list_double_heading_pane_vc_g_ParamLimits

0xfa76,	// (0x00059592) list_double_heading_pane_vc_g

0xecb1,	// (0x000587cd) list_double_heading_pane_vc_t1_ParamLimits

0xecb1,	// (0x000587cd) list_double_heading_pane_vc_t1

0xe9fe,	// (0x0005851a) list_double_heading_pane_vc_t2_ParamLimits

0xe9fe,	// (0x0005851a) list_double_heading_pane_vc_t2

0x0001,

0xfa7b,	// (0x00059597) list_double_heading_pane_vc_t_ParamLimits

0xfa7b,	// (0x00059597) list_double_heading_pane_vc_t

0xecc3,	// (0x000587df) list_double_graphic_pane_vc_g1_ParamLimits

0xecc3,	// (0x000587df) list_double_graphic_pane_vc_g1

0x0b12,	// (0x0004a62e) list_double_graphic_pane_vc_g2_ParamLimits

0x0b12,	// (0x0004a62e) list_double_graphic_pane_vc_g2

0xe5f4,	// (0x00058110) list_double_graphic_pane_vc_g3_ParamLimits

0xe5f4,	// (0x00058110) list_double_graphic_pane_vc_g3

0x0003,

0xfa80,	// (0x0005959c) list_double_graphic_pane_vc_g_ParamLimits

0xfa80,	// (0x0005959c) list_double_graphic_pane_vc_g

0xeccf,	// (0x000587eb) list_double_graphic_pane_vc_t1_ParamLimits

0xeccf,	// (0x000587eb) list_double_graphic_pane_vc_t1

0xecf9,	// (0x00058815) list_double_graphic_pane_vc_t2_ParamLimits

0xecf9,	// (0x00058815) list_double_graphic_pane_vc_t2

0x0001,

0xfa89,	// (0x000595a5) list_double_graphic_pane_vc_t_ParamLimits

0xfa89,	// (0x000595a5) list_double_graphic_pane_vc_t

0xeef8,	// (0x00058a14) aid_size_cell_fastswap

0x9be1,	// (0x000536fd) aid_size_cell_touch_ParamLimits

0x9be1,	// (0x000536fd) aid_size_cell_touch

0xf075,	// (0x00058b91) popup_fast_swap_wide_window_ParamLimits

0xf075,	// (0x00058b91) popup_fast_swap_wide_window

0x9d9f,	// (0x000538bb) touch_pane_ParamLimits

0x9d9f,	// (0x000538bb) touch_pane

0xa250,	// (0x00053d6c) button_value_adjust_pane_cp2

0xe642,	// (0x0005815e) button_value_adjust_pane_cp4

0xe64a,	// (0x00058166) form_field_data_pane_cp2

0x9868,	// (0x00053384) form_field_data_wide_pane_cp2

0xa702,	// (0x0005421e) bg_scroll_pane_ParamLimits

0xf308,	// (0x00058e24) scroll_handle_pane_ParamLimits

0xf31c,	// (0x00058e38) scroll_sc2_down_pane_ParamLimits

0xf31c,	// (0x00058e38) scroll_sc2_down_pane

0xa733,	// (0x0005424f) scroll_sc2_up_pane_ParamLimits

0xa733,	// (0x0005424f) scroll_sc2_up_pane

0xcc70,	// (0x0005678c) grid_wheel_folder_pane_g1_ParamLimits

0xcc70,	// (0x0005678c) grid_wheel_folder_pane_g1

0xf4e6,	// (0x00059002) clock_nsta_pane_cp2_ParamLimits

0xf4e6,	// (0x00059002) clock_nsta_pane_cp2

0x04b3,	// (0x00049fcf) listscroll_midp_pane_ParamLimits

0xae95,	// (0x000549b1) midp_canvas_pane

0x042f,	// (0x00049f4b) nsta_clock_indic_pane

0x047d,	// (0x00049f99) listscroll_form_pane_vc

0x04a1,	// (0x00049fbd) listscroll_set_pane_vc_ParamLimits

0x04a1,	// (0x00049fbd) listscroll_set_pane_vc

0xb9da,	// (0x000554f6) clock_nsta_pane

0xba04,	// (0x00055520) indicator_nsta_pane

0x24ae,	// (0x0004bfca) bg_popup_sub_pane_cp2_ParamLimits

0x24c2,	// (0x0004bfde) find_pane_cp2_ParamLimits

0x24c2,	// (0x0004bfde) find_pane_cp2

0x24d8,	// (0x0004bff4) grid_toobar_pane_ParamLimits

0x25b8,	// (0x0004c0d4) list_form_gen_pane_vc_ParamLimits

0x25b8,	// (0x0004c0d4) list_form_gen_pane_vc

0x25ce,	// (0x0004c0ea) scroll_pane_cp8_vc_ParamLimits

0x25ce,	// (0x0004c0ea) scroll_pane_cp8_vc

0x264a,	// (0x0004c166) data_form_wide_pane_vc_ParamLimits

0x264a,	// (0x0004c166) data_form_wide_pane_vc

0x2656,	// (0x0004c172) form_field_data_wide_pane_vc_g1

0x265e,	// (0x0004c17a) form_field_data_wide_pane_vc_t1_ParamLimits

0x265e,	// (0x0004c17a) form_field_data_wide_pane_vc_t1

0xa264,	// (0x00053d80) input_focus_pane_cp6_vc_ParamLimits

0xa264,	// (0x00053d80) input_focus_pane_cp6_vc

0xc609,	// (0x00056125) list_midp_pane_ParamLimits

0x3d17,	// (0x0004d833) scroll_pane_cp16_ParamLimits

0x3d17,	// (0x0004d833) scroll_pane_cp16

0x29ba,	// (0x0004c4d6) button_value_adjust_pane_ParamLimits

0x29ba,	// (0x0004c4d6) button_value_adjust_pane

0xc8b2,	// (0x000563ce) button_value_adjust_pane_cp6_ParamLimits

0xc8b2,	// (0x000563ce) button_value_adjust_pane_cp6

0xc9f4,	// (0x00056510) settings_code_pane_cp_ParamLimits

0xc9f4,	// (0x00056510) settings_code_pane_cp

0x6eb3,	// (0x000509cf) cell_touch_pane_g1

0x6eb3,	// (0x000509cf) cell_touch_pane_g2

0x0001,

0xf708,	// (0x00059224) cell_touch_pane_g

0xcb2f,	// (0x0005664b) cell_touch_pane_cp_ParamLimits

0xcb2f,	// (0x0005664b) cell_touch_pane_cp

0xcb4b,	// (0x00056667) cell_touch_pane_ParamLimits

0xcb4b,	// (0x00056667) cell_touch_pane

0x6eb3,	// (0x000509cf) scroll_sc2_down_pane_g1

0x6eb3,	// (0x000509cf) scroll_sc2_up_pane_g1

0x6ebd,	// (0x000509d9) bg_set_opt_pane_cp4_vc

0x40b5,	// (0x0004dbd1) list_set_graphic_pane_vc_g1_ParamLimits

0x40b5,	// (0x0004dbd1) list_set_graphic_pane_vc_g1

0xcb69,	// (0x00056685) list_set_graphic_pane_vc_g2_ParamLimits

0xcb69,	// (0x00056685) list_set_graphic_pane_vc_g2

0x0001,

0xf9ff,	// (0x0005951b) list_set_graphic_pane_vc_g_ParamLimits

0xf9ff,	// (0x0005951b) list_set_graphic_pane_vc_g

0x40c1,	// (0x0004dbdd) text_primary_small_cp13_vc_ParamLimits

0x40c1,	// (0x0004dbdd) text_primary_small_cp13_vc

0x40d9,	// (0x0004dbf5) list_set_graphic_pane_vc_ParamLimits

0x40d9,	// (0x0004dbf5) list_set_graphic_pane_vc

0x6ebd,	// (0x000509d9) input_focus_pane_cp2_vc

0x6eb3,	// (0x000509cf) setting_code_pane_vc_g1

0x6f2e,	// (0x00050a4a) setting_code_pane_vc_t1

0x40ee,	// (0x0004dc0a) set_text_pane_vc_t1_ParamLimits

0x40ee,	// (0x0004dc0a) set_text_pane_vc_t1

0x6ebd,	// (0x000509d9) input_focus_pane_cp1_vc

0x410c,	// (0x0004dc28) list_set_text_pane_vc

0x6eb3,	// (0x000509cf) setting_text_pane_vc_g1

0x6ebd,	// (0x000509d9) bg_set_opt_pane_cp2_vc

0x6f25,	// (0x00050a41) setting_slider_graphic_pane_vc_g1

0x4116,	// (0x0004dc32) setting_slider_graphic_pane_vc_t1

0x4128,	// (0x0004dc44) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa04,	// (0x00059520) setting_slider_graphic_pane_vc_t

0x413a,	// (0x0004dc56) slider_set_pane_cp_vc

0x4144,	// (0x0004dc60) slider_set_pane_vc_g1

0x414d,	// (0x0004dc69) slider_set_pane_vc_g2

0x0006,

0xfa09,	// (0x00059525) slider_set_pane_vc_g

0xa2bf,	// (0x00053ddb) set_opt_bg_pane_g1_copy1

0xa2c7,	// (0x00053de3) set_opt_bg_pane_g2_copy1

0x4179,	// (0x0004dc95) set_opt_bg_pane_g3_copy1

0xa2d7,	// (0x00053df3) set_opt_bg_pane_g4_copy1

0xa2df,	// (0x00053dfb) set_opt_bg_pane_g5_copy1

0xa2e7,	// (0x00053e03) set_opt_bg_pane_g6_copy1

0x4183,	// (0x0004dc9f) set_opt_bg_pane_g7_copy1

0x418d,	// (0x0004dca9) set_opt_bg_pane_g8_copy1

0x4197,	// (0x0004dcb3) set_opt_bg_pane_g9_copy1

0x6ebd,	// (0x000509d9) bg_set_opt_pane_cp_vc

0x41a1,	// (0x0004dcbd) setting_slider_pane_vc_t1

0x41b0,	// (0x0004dccc) setting_slider_pane_vc_t2

0x41c2,	// (0x0004dcde) setting_slider_pane_vc_t3

0x0002,

0xfa18,	// (0x00059534) setting_slider_pane_vc_t

0x41d4,	// (0x0004dcf0) slider_set_pane_vc

0x073a,	// (0x0004a256) volume_set_pane_vc_g1

0x0743,	// (0x0004a25f) volume_set_pane_vc_g2

0x074c,	// (0x0004a268) volume_set_pane_vc_g3

0x0755,	// (0x0004a271) volume_set_pane_vc_g4

0x075e,	// (0x0004a27a) volume_set_pane_vc_g5

0x0767,	// (0x0004a283) volume_set_pane_vc_g6

0x0770,	// (0x0004a28c) volume_set_pane_vc_g7

0x0779,	// (0x0004a295) volume_set_pane_vc_g8

0x0782,	// (0x0004a29e) volume_set_pane_vc_g9

0x078b,	// (0x0004a2a7) volume_set_pane_vc_g10

0x0009,

0xfa1f,	// (0x0005953b) volume_set_pane_vc_g

0x41de,	// (0x0004dcfa) volume_set_pane_vc

0x41e8,	// (0x0004dd04) button_value_adjust_pane_cp1_vc

0x41f2,	// (0x0004dd0e) list_highlight_pane_cp2_vc

0x41fb,	// (0x0004dd17) list_set_pane_vc_ParamLimits

0x41fb,	// (0x0004dd17) list_set_pane_vc

0x426b,	// (0x0004dd87) main_pane_set_vc_t1_ParamLimits

0x426b,	// (0x0004dd87) main_pane_set_vc_t1

0x4280,	// (0x0004dd9c) main_pane_set_vc_t2_ParamLimits

0x4280,	// (0x0004dd9c) main_pane_set_vc_t2

0x4292,	// (0x0004ddae) main_pane_set_vc_t3_ParamLimits

0x4292,	// (0x0004ddae) main_pane_set_vc_t3

0x42a6,	// (0x0004ddc2) main_pane_set_vc_t4_ParamLimits

0x42a6,	// (0x0004ddc2) main_pane_set_vc_t4

0x0003,

0xfa34,	// (0x00059550) main_pane_set_vc_t_ParamLimits

0xfa34,	// (0x00059550) main_pane_set_vc_t

0x42ba,	// (0x0004ddd6) setting_code_pane_vc_ParamLimits

0x42ba,	// (0x0004ddd6) setting_code_pane_vc

0x42cb,	// (0x0004dde7) setting_slider_graphic_pane_vc

0x42cb,	// (0x0004dde7) setting_slider_pane_vc

0x42cb,	// (0x0004dde7) setting_text_pane_vc

0x42cb,	// (0x0004dde7) setting_volume_pane_vc

0x42d5,	// (0x0004ddf1) scroll_pane_cp121_vc

0xa23e,	// (0x00053d5a) set_content_pane_vc

0x42dd,	// (0x0004ddf9) button_value_adjust_pane_g1

0x42e6,	// (0x0004de02) button_value_adjust_pane_g2

0x0001,

0xfa8e,	// (0x000595aa) button_value_adjust_pane_g

0x42ef,	// (0x0004de0b) form_field_slider_wide_pane_vc_t1_ParamLimits

0x42ef,	// (0x0004de0b) form_field_slider_wide_pane_vc_t1

0x4301,	// (0x0004de1d) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4301,	// (0x0004de1d) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa93,	// (0x000595af) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa93,	// (0x000595af) form_field_slider_wide_pane_vc_t

0x704a,	// (0x00050b66) input_focus_pane_cp10_vc_ParamLimits

0x704a,	// (0x00050b66) input_focus_pane_cp10_vc

0x432d,	// (0x0004de49) slider_cont_pane_cp1_vc_ParamLimits

0x432d,	// (0x0004de49) slider_cont_pane_cp1_vc

0x433f,	// (0x0004de5b) slider_form_pane_g1_cp2

0x414d,	// (0x0004dc69) slider_form_pane_g2_cp2

0x436c,	// (0x0004de88) form_field_slider_pane_vc_t3

0x437a,	// (0x0004de96) form_field_slider_pane_vc_t4

0x4388,	// (0x0004dea4) slider_form_pane_vc_ParamLimits

0x4388,	// (0x0004dea4) slider_form_pane_vc

0x4395,	// (0x0004deb1) form_field_slider_pane_vc_t1_ParamLimits

0x4395,	// (0x0004deb1) form_field_slider_pane_vc_t1

0x4301,	// (0x0004de1d) form_field_slider_pane_vc_t2_ParamLimits

0x4301,	// (0x0004de1d) form_field_slider_pane_vc_t2

0x0001,

0xfaa5,	// (0x000595c1) form_field_slider_pane_vc_t_ParamLimits

0xfaa5,	// (0x000595c1) form_field_slider_pane_vc_t

0x704a,	// (0x00050b66) input_focus_pane_cp9_vc_ParamLimits

0x704a,	// (0x00050b66) input_focus_pane_cp9_vc

0x43ab,	// (0x0004dec7) slider_cont_pane_vc_ParamLimits

0x43ab,	// (0x0004dec7) slider_cont_pane_vc

0x43bf,	// (0x0004dedb) list_form_graphic_pane_cp_vc_ParamLimits

0x43bf,	// (0x0004dedb) list_form_graphic_pane_cp_vc

0x2656,	// (0x0004c172) form_field_popup_wide_pane_vc_g1

0x43d4,	// (0x0004def0) form_field_popup_wide_pane_vc_t1_ParamLimits

0x43d4,	// (0x0004def0) form_field_popup_wide_pane_vc_t1

0xa264,	// (0x00053d80) input_focus_pane_cp8_vc_ParamLimits

0xa264,	// (0x00053d80) input_focus_pane_cp8_vc

0x4419,	// (0x0004df35) list_form_wide_pane_vc_ParamLimits

0x4419,	// (0x0004df35) list_form_wide_pane_vc

0x4425,	// (0x0004df41) list_form_graphic_pane_vc_g1

0x442d,	// (0x0004df49) list_form_graphic_pane_vc_t1_ParamLimits

0x442d,	// (0x0004df49) list_form_graphic_pane_vc_t1

0x6f17,	// (0x00050a33) list_highlight_pane_cp5_vc_ParamLimits

0x6f17,	// (0x00050a33) list_highlight_pane_cp5_vc

0x4449,	// (0x0004df65) list_form_graphic_pane_vc_ParamLimits

0x4449,	// (0x0004df65) list_form_graphic_pane_vc

0x2656,	// (0x0004c172) form_field_popup_pane_vc_g1

0x445f,	// (0x0004df7b) form_field_popup_pane_vc_t1_ParamLimits

0x445f,	// (0x0004df7b) form_field_popup_pane_vc_t1

0xa264,	// (0x00053d80) input_focus_pane_cp7_vc_ParamLimits

0xa264,	// (0x00053d80) input_focus_pane_cp7_vc

0x4476,	// (0x0004df92) list_form_pane_vc_ParamLimits

0x4476,	// (0x0004df92) list_form_pane_vc

0x4482,	// (0x0004df9e) data_form_pane_vc_t1_ParamLimits

0x4482,	// (0x0004df9e) data_form_pane_vc_t1

0xa2bf,	// (0x00053ddb) input_focus_pane_vc_g1

0xa2c7,	// (0x00053de3) input_focus_pane_vc_g2

0xa2cf,	// (0x00053deb) input_focus_pane_vc_g3

0xa2d7,	// (0x00053df3) input_focus_pane_vc_g4

0xa2df,	// (0x00053dfb) input_focus_pane_vc_g5

0xa2e7,	// (0x00053e03) input_focus_pane_vc_g6

0xa2ef,	// (0x00053e0b) input_focus_pane_vc_g7

0xa2f7,	// (0x00053e13) input_focus_pane_vc_g8

0xa2ff,	// (0x00053e1b) input_focus_pane_vc_g9

0x6eb3,	// (0x000509cf) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x000591ad) input_focus_pane_vc_g

0x264a,	// (0x0004c166) data_form_pane_vc_ParamLimits

0x264a,	// (0x0004c166) data_form_pane_vc

0x2656,	// (0x0004c172) form_field_data_pane_vc_g1

0x449f,	// (0x0004dfbb) form_field_data_pane_vc_t1_ParamLimits

0x449f,	// (0x0004dfbb) form_field_data_pane_vc_t1

0xa264,	// (0x00053d80) input_focus_pane_vc_ParamLimits

0xa264,	// (0x00053d80) input_focus_pane_vc

0x44b9,	// (0x0004dfd5) button_value_adjust_pane_cp3_vc

0x44c1,	// (0x0004dfdd) button_value_adjust_pane_cp5_vc

0x44c9,	// (0x0004dfe5) form_field_data_pane_vc_ParamLimits

0x44c9,	// (0x0004dfe5) form_field_data_pane_vc

0x44e4,	// (0x0004e000) form_field_data_pane_vc_cp2

0x44ec,	// (0x0004e008) form_field_data_wide_pane_vc_ParamLimits

0x44ec,	// (0x0004e008) form_field_data_wide_pane_vc

0x4506,	// (0x0004e022) form_field_data_wide_pane_vc_cp2

0x450e,	// (0x0004e02a) form_field_popup_pane_vc_ParamLimits

0x450e,	// (0x0004e02a) form_field_popup_pane_vc

0x4529,	// (0x0004e045) form_field_popup_wide_pane_vc_ParamLimits

0x4529,	// (0x0004e045) form_field_popup_wide_pane_vc

0x4543,	// (0x0004e05f) form_field_slider_pane_vc_ParamLimits

0x4543,	// (0x0004e05f) form_field_slider_pane_vc

0x4556,	// (0x0004e072) form_field_slider_wide_pane_vc_ParamLimits

0x4556,	// (0x0004e072) form_field_slider_wide_pane_vc

0xcb75,	// (0x00056691) grid_touch_1_pane_ParamLimits

0xcb75,	// (0x00056691) grid_touch_1_pane

0xcb89,	// (0x000566a5) grid_touch_2_pane_ParamLimits

0xcb89,	// (0x000566a5) grid_touch_2_pane

0x4627,	// (0x0004e143) touch_pane_g1_ParamLimits

0x4627,	// (0x0004e143) touch_pane_g1

0x458f,	// (0x0004e0ab) cell_app_pane_cp_wide_ParamLimits

0x458f,	// (0x0004e0ab) cell_app_pane_cp_wide

0x45a0,	// (0x0004e0bc) grid_popup_fast_wide_pane_ParamLimits

0x45a0,	// (0x0004e0bc) grid_popup_fast_wide_pane

0x45b4,	// (0x0004e0d0) scroll_pane_cp19_ParamLimits

0x45b4,	// (0x0004e0d0) scroll_pane_cp19

0x6ebd,	// (0x000509d9) bg_popup_window_pane_cp20

0x45c8,	// (0x0004e0e4) listscroll_popup_fast_wide_pane

0xcbb5,	// (0x000566d1) grid_indicator_nsta_pane

0x45d0,	// (0x0004e0ec) clock_nsta_pane_g1

0x45d9,	// (0x0004e0f5) clock_nsta_pane_t1

0xcbc3,	// (0x000566df) cell_indicator_nsta_pane_ParamLimits

0xcbc3,	// (0x000566df) cell_indicator_nsta_pane

0x4627,	// (0x0004e143) cell_indicator_nsta_pane_g1

0xcbdc,	// (0x000566f8) cell_indicator_nsta_pane_g2

0x0001,

0xfab6,	// (0x000595d2) cell_indicator_nsta_pane_g

0x464b,	// (0x0004e167) clock_nsta_pane_cp

0x4653,	// (0x0004e16f) indicator_nsta_pane_cp

0x465c,	// (0x0004e178) nsta_clock_indic_pane_g1

0x6f53,	// (0x00050a6f) grid_indicator_pane

0xa825,	// (0x00054341) scroll_pane_cp29

0xf432,	// (0x00058f4e) indicator_nsta_pane_cp2_ParamLimits

0xf432,	// (0x00058f4e) indicator_nsta_pane_cp2

0x6f17,	// (0x00050a33) main_apps_wheel_pane

0x283d,	// (0x0004c359) form_midp_field_text_pane_ParamLimits

0x298c,	// (0x0004c4a8) scroll_bar_cp050_ParamLimits

0x46c5,	// (0x0004e1e1) cell_indicator_pane_ParamLimits

0x46c5,	// (0x0004e1e1) cell_indicator_pane

0x46dd,	// (0x0004e1f9) cell_indicator_pane_g1

0xcbf2,	// (0x0005670e) grid_wheel_folder_pane_ParamLimits

0xcbf2,	// (0x0005670e) grid_wheel_folder_pane

0xcc00,	// (0x0005671c) list_wheel_apps_pane_ParamLimits

0xcc00,	// (0x0005671c) list_wheel_apps_pane

0xcc0e,	// (0x0005672a) main_apps_wheel_pane_g1_ParamLimits

0xcc0e,	// (0x0005672a) main_apps_wheel_pane_g1

0xcc1e,	// (0x0005673a) main_apps_wheel_pane_g2_ParamLimits

0xcc1e,	// (0x0005673a) main_apps_wheel_pane_g2

0x0001,

0xfad2,	// (0x000595ee) main_apps_wheel_pane_g_ParamLimits

0xfad2,	// (0x000595ee) main_apps_wheel_pane_g

0xcc2e,	// (0x0005674a) main_apps_wheel_pane_t1_ParamLimits

0xcc2e,	// (0x0005674a) main_apps_wheel_pane_t1

0xcc46,	// (0x00056762) list_wheel_apps_pane_g1

0xcc4e,	// (0x0005676a) list_wheel_apps_pane_g2

0xcc56,	// (0x00056772) list_wheel_apps_pane_g3

0xcc5e,	// (0x0005677a) list_wheel_apps_pane_g4

0xcc66,	// (0x00056782) list_wheel_apps_pane_g5

0x0004,

0xfad7,	// (0x000595f3) list_wheel_apps_pane_g

0xaddc,	// (0x000548f8) navi_icon_text_pane

0xb8cc,	// (0x000553e8) aid_fill_nsta

0xcc83,	// (0x0005679f) navi_icon_text_pane_g1

0xcc8f,	// (0x000567ab) navi_icon_text_pane_t1

0xac67,	// (0x00054783) list_set_graphic_pane_t1_ParamLimits

0xac67,	// (0x00054783) list_set_graphic_pane_t1

0x30dd,	// (0x0004cbf9) popup_midp_note_alarm_window_t6_ParamLimits

0x30dd,	// (0x0004cbf9) popup_midp_note_alarm_window_t6

0x30ef,	// (0x0004cc0b) popup_midp_note_alarm_window_t7_ParamLimits

0x30ef,	// (0x0004cc0b) popup_midp_note_alarm_window_t7

0x3101,	// (0x0004cc1d) popup_midp_note_alarm_window_t8_ParamLimits

0x3101,	// (0x0004cc1d) popup_midp_note_alarm_window_t8

0x3113,	// (0x0004cc2f) popup_midp_note_alarm_window_t9_ParamLimits

0x3113,	// (0x0004cc2f) popup_midp_note_alarm_window_t9

0x3125,	// (0x0004cc41) popup_midp_note_alarm_window_t10_ParamLimits

0x3125,	// (0x0004cc41) popup_midp_note_alarm_window_t10

0x3137,	// (0x0004cc53) popup_midp_note_alarm_window_t11_ParamLimits

0x3137,	// (0x0004cc53) popup_midp_note_alarm_window_t11

0x3149,	// (0x0004cc65) scroll_pane_cp17_ParamLimits

0x3149,	// (0x0004cc65) scroll_pane_cp17

0x073a,	// (0x0004a256) volume_small_pane_cp_g1

0x0b2f,	// (0x0004a64b) volume_small_pane_cp_g2

0x0b38,	// (0x0004a654) volume_small_pane_cp_g3

0x0b41,	// (0x0004a65d) volume_small_pane_cp_g4

0x0b4a,	// (0x0004a666) volume_small_pane_cp_g5

0x0b53,	// (0x0004a66f) volume_small_pane_cp_g6

0x0b5c,	// (0x0004a678) volume_small_pane_cp_g7

0x0b65,	// (0x0004a681) volume_small_pane_cp_g8

0x0b6e,	// (0x0004a68a) volume_small_pane_cp_g9

0x0b77,	// (0x0004a693) volume_small_pane_cp_g10

0xe821,	// (0x0005833d) midp_ticker_pane_g1_ParamLimits

0xe82d,	// (0x00058349) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x00059279) midp_ticker_pane_g_ParamLimits

0xaf2c,	// (0x00054a48) midp_ticker_pane_t1_ParamLimits

0xb8f0,	// (0x0005540c) aid_fill_nsta_2

0x2978,	// (0x0004c494) list_form2_midp_pane

0x3ae0,	// (0x0004d5fc) midp_editing_number_pane_ParamLimits

0x3aef,	// (0x0004d60b) midp_ticker_pane_ParamLimits

0x47d0,	// (0x0004e2ec) form2_midp_field_pane

0x47f4,	// (0x0004e310) scroll_pane_cp51

0x4814,	// (0x0004e330) form2_midp_button_pane_ParamLimits

0x4814,	// (0x0004e330) form2_midp_button_pane

0x4826,	// (0x0004e342) form2_midp_content_pane_ParamLimits

0x4826,	// (0x0004e342) form2_midp_content_pane

0x4840,	// (0x0004e35c) form2_midp_field_choice_group_pane

0x4848,	// (0x0004e364) form2_midp_field_pane_g1

0x4850,	// (0x0004e36c) form2_midp_field_pane_g2

0x4858,	// (0x0004e374) form2_midp_field_pane_g3

0x4860,	// (0x0004e37c) form2_midp_field_pane_g4

0x0003,

0xfafc,	// (0x00059618) form2_midp_field_pane_g

0x4868,	// (0x0004e384) form2_midp_gauge_slider_pane

0x4870,	// (0x0004e38c) form2_midp_gauge_wait_pane

0x4878,	// (0x0004e394) form2_midp_image_pane_ParamLimits

0x4878,	// (0x0004e394) form2_midp_image_pane

0x4893,	// (0x0004e3af) form2_midp_label_pane_ParamLimits

0x4893,	// (0x0004e3af) form2_midp_label_pane

0xccbd,	// (0x000567d9) form2_midp_label_pane_cp_ParamLimits

0xccbd,	// (0x000567d9) form2_midp_label_pane_cp

0x48d3,	// (0x0004e3ef) form2_midp_string_pane_ParamLimits

0x48d3,	// (0x0004e3ef) form2_midp_string_pane

0xed17,	// (0x00058833) form2_midp_text_pane_ParamLimits

0xed17,	// (0x00058833) form2_midp_text_pane

0x48e5,	// (0x0004e401) form2_midp_time_pane

0x48f5,	// (0x0004e411) input_focus_pane_cp51_ParamLimits

0x48f5,	// (0x0004e411) input_focus_pane_cp51

0x490d,	// (0x0004e429) form2_midp_label_pane_t1_ParamLimits

0x490d,	// (0x0004e429) form2_midp_label_pane_t1

0xed3a,	// (0x00058856) form2_mdip_text_pane_t1_ParamLimits

0xed3a,	// (0x00058856) form2_mdip_text_pane_t1

0xed59,	// (0x00058875) form2_midp_time_pane_t1

0x495b,	// (0x0004e477) form2_midp_gauge_slider_pane_t1

0xccde,	// (0x000567fa) form2_midp_gauge_slider_pane_t2

0xccf0,	// (0x0005680c) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb05,	// (0x00059621) form2_midp_gauge_slider_pane_t

0x4991,	// (0x0004e4ad) form2_midp_slider_pane

0x499d,	// (0x0004e4b9) form2_midp_gauge_wait_pane_t1

0x49ab,	// (0x0004e4c7) form2_midp_wait_pane_ParamLimits

0x49ab,	// (0x0004e4c7) form2_midp_wait_pane

0x269d,	// (0x0004c1b9) list_single_2graphic_pane_cp4_ParamLimits

0x269d,	// (0x0004c1b9) list_single_2graphic_pane_cp4

0x49d6,	// (0x0004e4f2) list_single_midp_graphic_pane_cp_ParamLimits

0x49d6,	// (0x0004e4f2) list_single_midp_graphic_pane_cp

0x6ebd,	// (0x000509d9) list_highlight_pane_cp20

0x49fa,	// (0x0004e516) list_single_2graphic_pane_g1_cp4

0x3f97,	// (0x0004dab3) list_single_2graphic_pane_g2_cp4

0x4a02,	// (0x0004e51e) list_single_2graphic_pane_t1_cp4

0x6f17,	// (0x00050a33) list_highlight_pane_cp21

0x4a11,	// (0x0004e52d) list_single_midp_graphic_pane_g4_cp

0x4a20,	// (0x0004e53c) list_single_midp_graphic_pane_t1_cp

0xcd02,	// (0x0005681e) form2_mdip_string_pane_t1_ParamLimits

0xcd02,	// (0x0005681e) form2_mdip_string_pane_t1

0x6ebd,	// (0x000509d9) bg_wml_button_pane_cp2

0x6eb3,	// (0x000509cf) form2_midp_image_pane_g1

0xf136,	// (0x00058c52) list_double_large_graphic_pane_g5_ParamLimits

0xf136,	// (0x00058c52) list_double_large_graphic_pane_g5

0x04b3,	// (0x00049fcf) midp_form_pane_ParamLimits

0x6f17,	// (0x00050a33) main_apps_wheel_pane_ParamLimits

0xb5e4,	// (0x00055100) popup_preview_window_ParamLimits

0xb5e4,	// (0x00055100) popup_preview_window

0x1ff7,	// (0x0004bb13) popup_touch_info_window_ParamLimits

0x1ff7,	// (0x0004bb13) popup_touch_info_window

0x2019,	// (0x0004bb35) popup_touch_menu_window_ParamLimits

0x2019,	// (0x0004bb35) popup_touch_menu_window

0x6ea9,	// (0x000509c5) bg_popup_sub_pane_cp6

0x4ada,	// (0x0004e5f6) list_touch_menu_pane

0x4ae2,	// (0x0004e5fe) list_single_touch_menu_pane_ParamLimits

0x4ae2,	// (0x0004e5fe) list_single_touch_menu_pane

0x4afa,	// (0x0004e616) list_single_touch_menu_pane_t1

0x6f17,	// (0x00050a33) bg_popup_sub_pane_cp7_ParamLimits

0x6f17,	// (0x00050a33) bg_popup_sub_pane_cp7

0x4b08,	// (0x0004e624) heading_sub_pane

0x4b10,	// (0x0004e62c) list_touch_info_pane_ParamLimits

0x4b10,	// (0x0004e62c) list_touch_info_pane

0x4b1f,	// (0x0004e63b) list_single_touch_info_pane_ParamLimits

0x4b1f,	// (0x0004e63b) list_single_touch_info_pane

0x4b31,	// (0x0004e64d) list_single_touch_info_pane_t1

0x4b3f,	// (0x0004e65b) list_single_touch_info_pane_t2

0x0001,

0xfb13,	// (0x0005962f) list_single_touch_info_pane_t

0xe7f5,	// (0x00058311) bg_popup_heading_pane_cp

0x4b4d,	// (0x0004e669) heading_sub_pane_t1

0x25e4,	// (0x0004c100) bg_popup_preview_window_pane_cp_ParamLimits

0x25e4,	// (0x0004c100) bg_popup_preview_window_pane_cp

0x4b08,	// (0x0004e624) heading_preview_pane

0x4b10,	// (0x0004e62c) list_preview_pane_ParamLimits

0x4b10,	// (0x0004e62c) list_preview_pane

0x4b5b,	// (0x0004e677) popup_preview_window_g1

0x4b1f,	// (0x0004e63b) list_single_preview_pane_ParamLimits

0x4b1f,	// (0x0004e63b) list_single_preview_pane

0x4b63,	// (0x0004e67f) list_single_preview_pane_g1

0x4b6b,	// (0x0004e687) list_single_preview_pane_t1

0x4b31,	// (0x0004e64d) list_single_preview_pane_t2

0x0001,

0xfb18,	// (0x00059634) list_single_preview_pane_t

0x4b79,	// (0x0004e695) bg_popup_heading_pane_cp2_ParamLimits

0x4b79,	// (0x0004e695) bg_popup_heading_pane_cp2

0x4b8f,	// (0x0004e6ab) heading_preview_pane_g1

0x4b97,	// (0x0004e6b3) heading_preview_pane_t1_ParamLimits

0x4b97,	// (0x0004e6b3) heading_preview_pane_t1

0x6f6a,	// (0x00050a86) soft_indicator_pane_t1_ParamLimits

0x74ad,	// (0x00050fc9) scroll_pane_ParamLimits

0xa721,	// (0x0005423d) scroll_sc2_left_pane

0xa72a,	// (0x00054246) scroll_sc2_right_pane

0xa749,	// (0x00054265) scroll_bg_pane_g1_ParamLimits

0xa75e,	// (0x0005427a) scroll_bg_pane_g2_ParamLimits

0xa776,	// (0x00054292) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x00059204) scroll_bg_pane_g_ParamLimits

0xa749,	// (0x00054265) scroll_handle_pane_g1_ParamLimits

0xa798,	// (0x000542b4) scroll_handle_pane_g2_ParamLimits

0xa776,	// (0x00054292) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0005920b) scroll_handle_pane_g_ParamLimits

0x04db,	// (0x00049ff7) popup_choice_list_window_ParamLimits

0x04db,	// (0x00049ff7) popup_choice_list_window

0x24ba,	// (0x0004bfd6) choice_list_pane

0x253c,	// (0x0004c058) cell_toolbar_pane_t1

0x2564,	// (0x0004c080) toolbar_button_pane_ParamLimits

0x3613,	// (0x0004d12f) ai_gene_pane_1_t2_ParamLimits

0x3613,	// (0x0004d12f) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0005942e) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0005942e) ai_gene_pane_1_t

0x4bb4,	// (0x0004e6d0) scroll_sc2_left_pane_g1

0x4bb4,	// (0x0004e6d0) scroll_sc2_right_pane_g1

0x04b3,	// (0x00049fcf) bg_popup_sub_pane_cp10

0x4bbe,	// (0x0004e6da) list_choice_list_pane

0x4bd7,	// (0x0004e6f3) list_single_choice_list_pane_ParamLimits

0x4bd7,	// (0x0004e6f3) list_single_choice_list_pane

0x4bef,	// (0x0004e70b) list_single_choice_list_pane_g1

0xa3ff,	// (0x00053f1b) list_single_choice_list_pane_t1_ParamLimits

0xa3ff,	// (0x00053f1b) list_single_choice_list_pane_t1

0x4bf7,	// (0x0004e713) choice_list_pane_g1

0x4bff,	// (0x0004e71b) choice_list_pane_t1

0x6ea9,	// (0x000509c5) input_focus_pane_cp11

0xa5bc,	// (0x000540d8) title_pane_stacon_g2_ParamLimits

0xa5bc,	// (0x000540d8) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x000591ea) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x000591ea) title_pane_stacon_g

0xe7f5,	// (0x00058311) cursor_press_pane

0xb261,	// (0x00054d7d) popup_fep_hwr_window_ParamLimits

0xb261,	// (0x00054d7d) popup_fep_hwr_window

0x1b9b,	// (0x0004b6b7) popup_fep_vkb_window_ParamLimits

0x1b9b,	// (0x0004b6b7) popup_fep_vkb_window

0x4c0d,	// (0x0004e729) cursor_press_pane_g1

0x0002,

0xfb41,	// (0x0005965d) fep_vkb_side_pane_g_ParamLimits

0x0bab,	// (0x0004a6c7) fep_hwr_candidate_pane_ParamLimits

0x0bab,	// (0x0004a6c7) fep_hwr_candidate_pane

0x0bd5,	// (0x0004a6f1) fep_hwr_side_pane_ParamLimits

0x0bd5,	// (0x0004a6f1) fep_hwr_side_pane

0x0bf7,	// (0x0004a713) fep_hwr_top_pane_ParamLimits

0x0bf7,	// (0x0004a713) fep_hwr_top_pane

0x0c0f,	// (0x0004a72b) fep_hwr_write_pane_ParamLimits

0x0c0f,	// (0x0004a72b) fep_hwr_write_pane

0xfb41,	// (0x0005965d) fep_vkb_side_pane_g

0x4c15,	// (0x0004e731) fep_hwr_top_pane_g1

0x4c27,	// (0x0004e743) fep_hwr_top_pane_g2

0x0c3b,	// (0x0004a757) fep_hwr_top_pane_g3

0x0002,

0xfb1d,	// (0x00059639) fep_hwr_top_pane_g

0x0c50,	// (0x0004a76c) fep_hwr_top_text_pane

0xa916,	// (0x00054432) fep_hwr_top_text_pane_g1

0x4c5d,	// (0x0004e779) fep_hwr_top_text_pane_t1

0x0d5a,	// (0x0004a876) fep_hwr_candidate_pane_g1

0x4ea8,	// (0x0004e9c4) fep_vkb_keypad_pane_g3_ParamLimits

0x4ea8,	// (0x0004e9c4) fep_vkb_keypad_pane_g3

0x4ed4,	// (0x0004e9f0) fep_vkb_keypad_pane_g4_ParamLimits

0x4ed4,	// (0x0004e9f0) fep_vkb_keypad_pane_g4

0x4f4b,	// (0x0004ea67) fep_vkb_bottom_pane_g2_ParamLimits

0x4f4b,	// (0x0004ea67) fep_vkb_bottom_pane_g2

0x0001,

0xfb48,	// (0x00059664) fep_vkb_bottom_pane_g_ParamLimits

0xfb48,	// (0x00059664) fep_vkb_bottom_pane_g

0x4bb4,	// (0x0004e6d0) cell_vkb_side_pane_g2

0x0001,

0xfb52,	// (0x0005966e) cell_vkb_side_pane_g

0x4fd6,	// (0x0004eaf2) cell_vkb_side_pane_t1

0x4fe4,	// (0x0004eb00) cell_vkb_side_pane_t1_copy1

0x4bb4,	// (0x0004e6d0) bg_fep_vkb_candidate_pane_g2

0x5128,	// (0x0004ec44) cell_vkb_candidate_pane_ParamLimits

0x4c6b,	// (0x0004e787) aid_size_cell_vkb_ParamLimits

0x4c6b,	// (0x0004e787) aid_size_cell_vkb

0x5128,	// (0x0004ec44) cell_vkb_candidate_pane

0x0d74,	// (0x0004a890) bg_popup_fep_shadow_pane_g1

0xcdd2,	// (0x000568ee) fep_vkb_bottom_pane_ParamLimits

0xcdd2,	// (0x000568ee) fep_vkb_bottom_pane

0x4d3a,	// (0x0004e856) fep_vkb_candidate_pane_ParamLimits

0x4d3a,	// (0x0004e856) fep_vkb_candidate_pane

0xcdfe,	// (0x0005691a) fep_vkb_keypad_pane_ParamLimits

0xcdfe,	// (0x0005691a) fep_vkb_keypad_pane

0xce25,	// (0x00056941) fep_vkb_side_pane_ParamLimits

0xce25,	// (0x00056941) fep_vkb_side_pane

0xce61,	// (0x0005697d) fep_vkb_top_pane_ParamLimits

0xce61,	// (0x0005697d) fep_vkb_top_pane

0x4e01,	// (0x0004e91d) fep_vkb_top_pane_g1_ParamLimits

0x4e01,	// (0x0004e91d) fep_vkb_top_pane_g1

0x4e10,	// (0x0004e92c) fep_vkb_top_pane_g2_ParamLimits

0x4e10,	// (0x0004e92c) fep_vkb_top_pane_g2

0x4e1f,	// (0x0004e93b) fep_vkb_top_pane_g3_ParamLimits

0x4e1f,	// (0x0004e93b) fep_vkb_top_pane_g3

0x0003,

0xfb38,	// (0x00059654) fep_vkb_top_pane_g_ParamLimits

0xfb38,	// (0x00059654) fep_vkb_top_pane_g

0x4e3d,	// (0x0004e959) fep_vkb_top_text_pane_ParamLimits

0x4e3d,	// (0x0004e959) fep_vkb_top_text_pane

0xce9d,	// (0x000569b9) fep_vkb_side_pane_g1_ParamLimits

0xce9d,	// (0x000569b9) fep_vkb_side_pane_g1

0x4e97,	// (0x0004e9b3) grid_vkb_side_pane_ParamLimits

0x4e97,	// (0x0004e9b3) grid_vkb_side_pane

0x0d7c,	// (0x0004a898) bg_popup_fep_shadow_pane_g2

0x0d85,	// (0x0004a8a1) bg_popup_fep_shadow_pane_g3

0x0d8d,	// (0x0004a8a9) bg_popup_fep_shadow_pane_g4

0x0d96,	// (0x0004a8b2) bg_popup_fep_shadow_pane_g5

0x0da0,	// (0x0004a8bc) bg_popup_fep_shadow_pane_g6

0x0da8,	// (0x0004a8c4) bg_popup_fep_shadow_pane_g7

0xa2df,	// (0x00053dfb) bg_popup_fep_shadow_pane_g8

0x4ef6,	// (0x0004ea12) grid_vkb_keypad_number_pane_ParamLimits

0x4ef6,	// (0x0004ea12) grid_vkb_keypad_number_pane

0x4f0a,	// (0x0004ea26) grid_vkb_keypad_pane_ParamLimits

0x4f0a,	// (0x0004ea26) grid_vkb_keypad_pane

0x4f30,	// (0x0004ea4c) fep_vkb_bottom_pane_g1_ParamLimits

0x4f30,	// (0x0004ea4c) fep_vkb_bottom_pane_g1

0x4f59,	// (0x0004ea75) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4f59,	// (0x0004ea75) grid_vkb_keypad_bottom_left_pane

0x4f6e,	// (0x0004ea8a) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4f6e,	// (0x0004ea8a) grid_vkb_keypad_bottom_right_pane

0x4f83,	// (0x0004ea9f) fep_vkb_top_text_pane_g1

0xcee4,	// (0x00056a00) fep_vkb_top_text_pane_t1

0xcef6,	// (0x00056a12) cell_vkb_side_pane_ParamLimits

0xcef6,	// (0x00056a12) cell_vkb_side_pane

0x4bb4,	// (0x0004e6d0) cell_vkb_side_pane_g1

0x4ff2,	// (0x0004eb0e) cell_vkb_keypad_pane_ParamLimits

0x4ff2,	// (0x0004eb0e) cell_vkb_keypad_pane

0x507f,	// (0x0004eb9b) cell_vkb_keypad_pane_g1

0x0008,

0xfb65,	// (0x00059681) bg_popup_fep_shadow_pane_g

0x4bb4,	// (0x0004e6d0) cell_hwr_side_pane_g1

0x4bb4,	// (0x0004e6d0) cell_hwr_side_pane_g2

0x5089,	// (0x0004eba5) cell_vkb_keypad_pane_t1

0xcf0c,	// (0x00056a28) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcf0c,	// (0x00056a28) cell_vkb_keypad_bottom_left_pane

0xcf21,	// (0x00056a3d) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcf21,	// (0x00056a3d) cell_vkb_keypad_bottom_right_pane

0x4bb4,	// (0x0004e6d0) cell_vkb_keypad_bottom_left_pane_g1

0x4bb4,	// (0x0004e6d0) cell_vkb_keypad_bottom_right_pane_g1

0x50ed,	// (0x0004ec09) cell_vkb_keypad_number_pane_ParamLimits

0x50ed,	// (0x0004ec09) cell_vkb_keypad_number_pane

0x510c,	// (0x0004ec28) cell_vkb_keypad_number_pane_g1

0x5116,	// (0x0004ec32) cell_vkb_keypad_number_pane_g2

0x511f,	// (0x0004ec3b) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb57,	// (0x00059673) cell_vkb_keypad_number_pane_g

0x5089,	// (0x0004eba5) cell_vkb_keypad_number_pane_t1

0x5149,	// (0x0004ec65) fep_vkb_candidate_pane_g1

0x0001,

0xfb52,	// (0x0005966e) cell_hwr_side_pane_g

0x5162,	// (0x0004ec7e) cell_hwr_side_pane_t1

0x0dba,	// (0x0004a8d6) cell_hwr_side_pane_t1_copy1

0x4e2f,	// (0x0004e94b) cell_hwr_candidate_pane_g1

0x0dc8,	// (0x0004a8e4) cell_hwr_candidate_pane_t1

0x4bb4,	// (0x0004e6d0) cell_vkb_candidate_pane_g2

0x51e8,	// (0x0004ed04) cell_vkb_candidate_pane_t1

0x8a11,	// (0x0005252d) bg_popup_fep_shadow_pane_ParamLimits

0x8a11,	// (0x0005252d) bg_popup_fep_shadow_pane

0xcd98,	// (0x000568b4) bg_fep_hwr_top_pane_g4

0x4c39,	// (0x0004e755) bg_hwr_side_pane_g1_ParamLimits

0x4c39,	// (0x0004e755) bg_hwr_side_pane_g1

0xbf46,	// (0x00055a62) cell_hwr_side_pane_ParamLimits

0xbf46,	// (0x00055a62) cell_hwr_side_pane

0x0ccb,	// (0x0004a7e7) fep_hwr_write_pane_g1_ParamLimits

0x0ccb,	// (0x0004a7e7) fep_hwr_write_pane_g1

0x0cd8,	// (0x0004a7f4) fep_hwr_write_pane_g2_ParamLimits

0x0cd8,	// (0x0004a7f4) fep_hwr_write_pane_g2

0x0ce5,	// (0x0004a801) fep_hwr_write_pane_g3_ParamLimits

0x0ce5,	// (0x0004a801) fep_hwr_write_pane_g3

0xbf66,	// (0x00055a82) fep_hwr_write_pane_g4_ParamLimits

0xbf66,	// (0x00055a82) fep_hwr_write_pane_g4

0x0005,

0xfb24,	// (0x00059640) fep_hwr_write_pane_g_ParamLimits

0xfb24,	// (0x00059640) fep_hwr_write_pane_g

0xcd98,	// (0x000568b4) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xcd98,	// (0x000568b4) bg_fep_hwr_candidate_pane_g2

0x0d08,	// (0x0004a824) cell_hwr_candidate_pane_ParamLimits

0x0d08,	// (0x0004a824) cell_hwr_candidate_pane

0x0d5a,	// (0x0004a876) fep_hwr_candidate_pane_g1_ParamLimits

0x4c99,	// (0x0004e7b5) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4c99,	// (0x0004e7b5) bg_popup_fep_shadow_pane_cp2

0x4e2f,	// (0x0004e94b) fep_vkb_top_pane_g4_ParamLimits

0x4e2f,	// (0x0004e94b) fep_vkb_top_pane_g4

0x4e75,	// (0x0004e991) fep_vkb_side_pane_g2_ParamLimits

0x4e75,	// (0x0004e991) fep_vkb_side_pane_g2

0x976a,	// (0x00053286) list_setting_pane_t4_ParamLimits

0x976a,	// (0x00053286) list_setting_pane_t4

0x9806,	// (0x00053322) list_setting_number_pane_t5_ParamLimits

0x9806,	// (0x00053322) list_setting_number_pane_t5

0xa95d,	// (0x00054479) list_double_heading_pane_cp2_ParamLimits

0xa95d,	// (0x00054479) list_double_heading_pane_cp2

0x51f6,	// (0x0004ed12) list_double_heading_pane_g1_cp2_ParamLimits

0x51f6,	// (0x0004ed12) list_double_heading_pane_g1_cp2

0x5202,	// (0x0004ed1e) list_double_heading_pane_g2_cp2_ParamLimits

0x5202,	// (0x0004ed1e) list_double_heading_pane_g2_cp2

0x5216,	// (0x0004ed32) list_double_heading_pane_t1_cp2_ParamLimits

0x5216,	// (0x0004ed32) list_double_heading_pane_t1_cp2

0x522c,	// (0x0004ed48) list_double_heading_pane_t2_cp2_ParamLimits

0x522c,	// (0x0004ed48) list_double_heading_pane_t2_cp2

0x6ea1,	// (0x000509bd) aid_value_unit2

0xf099,	// (0x00058bb5) popup_preview_fixed_window

0x7058,	// (0x00050b74) bg_popup_preview_window_pane_cp02

0x523e,	// (0x0004ed5a) list_preview_fixed_pane

0x5284,	// (0x0004eda0) list_empty_pane_fp_ParamLimits

0x5284,	// (0x0004eda0) list_empty_pane_fp

0x5284,	// (0x0004eda0) list_single_cale_day_pane_fp_ParamLimits

0x5284,	// (0x0004eda0) list_single_cale_day_pane_fp

0x5284,	// (0x0004eda0) list_single_graphic_heading_pane_fp_ParamLimits

0x5284,	// (0x0004eda0) list_single_graphic_heading_pane_fp

0x5284,	// (0x0004eda0) list_single_graphic_pane_fp_ParamLimits

0x5284,	// (0x0004eda0) list_single_graphic_pane_fp

0x5284,	// (0x0004eda0) list_single_heading_pane_fp_ParamLimits

0x5284,	// (0x0004eda0) list_single_heading_pane_fp

0x5284,	// (0x0004eda0) list_single_pane_fp_ParamLimits

0x5284,	// (0x0004eda0) list_single_pane_fp

0x529d,	// (0x0004edb9) list_single_pane_fp_g1_ParamLimits

0x529d,	// (0x0004edb9) list_single_pane_fp_g1

0x51f6,	// (0x0004ed12) list_single_pane_fp_g2_ParamLimits

0x51f6,	// (0x0004ed12) list_single_pane_fp_g2

0x5202,	// (0x0004ed1e) list_single_pane_fp_g3_ParamLimits

0x5202,	// (0x0004ed1e) list_single_pane_fp_g3

0x52a9,	// (0x0004edc5) list_single_pane_fp_g4_ParamLimits

0x52a9,	// (0x0004edc5) list_single_pane_fp_g4

0x0003,

0xfb86,	// (0x000596a2) list_single_pane_fp_g_ParamLimits

0xfb86,	// (0x000596a2) list_single_pane_fp_g

0xed6c,	// (0x00058888) list_single_pane_fp_t1_ParamLimits

0xed6c,	// (0x00058888) list_single_pane_fp_t1

0xed83,	// (0x0005889f) list_single_graphic_pane_fp_g1_ParamLimits

0xed83,	// (0x0005889f) list_single_graphic_pane_fp_g1

0x529d,	// (0x0004edb9) list_single_graphic_pane_fp_g2_ParamLimits

0x529d,	// (0x0004edb9) list_single_graphic_pane_fp_g2

0x51f6,	// (0x0004ed12) list_single_graphic_pane_fp_g3_ParamLimits

0x51f6,	// (0x0004ed12) list_single_graphic_pane_fp_g3

0x5202,	// (0x0004ed1e) list_single_graphic_pane_fp_g4_ParamLimits

0x5202,	// (0x0004ed1e) list_single_graphic_pane_fp_g4

0x52a9,	// (0x0004edc5) list_single_graphic_pane_fp_g5_ParamLimits

0x52a9,	// (0x0004edc5) list_single_graphic_pane_fp_g5

0x0004,

0xfb8f,	// (0x000596ab) list_single_graphic_pane_fp_g_ParamLimits

0xfb8f,	// (0x000596ab) list_single_graphic_pane_fp_g

0xed8f,	// (0x000588ab) list_single_graphic_pane_fp_t1_ParamLimits

0xed8f,	// (0x000588ab) list_single_graphic_pane_fp_t1

0xed83,	// (0x0005889f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xed83,	// (0x0005889f) list_single_graphic_heading_pane_fp_g1

0x529d,	// (0x0004edb9) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x529d,	// (0x0004edb9) list_single_graphic_heading_pane_fp_g2

0x51f6,	// (0x0004ed12) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x51f6,	// (0x0004ed12) list_single_graphic_heading_pane_fp_g3

0x5202,	// (0x0004ed1e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5202,	// (0x0004ed1e) list_single_graphic_heading_pane_fp_g4

0x52a9,	// (0x0004edc5) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x52a9,	// (0x0004edc5) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8f,	// (0x000596ab) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8f,	// (0x000596ab) list_single_graphic_heading_pane_fp_g

0xeda5,	// (0x000588c1) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xeda5,	// (0x000588c1) list_single_graphic_heading_pane_fp_t1

0xedbb,	// (0x000588d7) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xedbb,	// (0x000588d7) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9a,	// (0x000596b6) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9a,	// (0x000596b6) list_single_graphic_heading_pane_fp_t

0xedcd,	// (0x000588e9) list_single_cale_day_pane_fp_g1_ParamLimits

0xedcd,	// (0x000588e9) list_single_cale_day_pane_fp_g1

0x52b5,	// (0x0004edd1) list_single_cale_day_pane_fp_g2_ParamLimits

0x52b5,	// (0x0004edd1) list_single_cale_day_pane_fp_g2

0x0de6,	// (0x0004a902) list_single_cale_day_pane_fp_g3_ParamLimits

0x0de6,	// (0x0004a902) list_single_cale_day_pane_fp_g3

0x0e0e,	// (0x0004a92a) list_single_cale_day_pane_fp_g4_ParamLimits

0x0e0e,	// (0x0004a92a) list_single_cale_day_pane_fp_g4

0x0e32,	// (0x0004a94e) list_single_cale_day_pane_fp_g5_ParamLimits

0x0e32,	// (0x0004a94e) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9f,	// (0x000596bb) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9f,	// (0x000596bb) list_single_cale_day_pane_fp_g

0xee05,	// (0x00058921) list_single_cale_day_pane_fp_t1_ParamLimits

0xee05,	// (0x00058921) list_single_cale_day_pane_fp_t1

0xee2b,	// (0x00058947) list_single_cale_day_pane_fp_t2_ParamLimits

0xee2b,	// (0x00058947) list_single_cale_day_pane_fp_t2

0xee44,	// (0x00058960) list_single_cale_day_pane_fp_t3_ParamLimits

0xee44,	// (0x00058960) list_single_cale_day_pane_fp_t3

0x0002,

0xfbaa,	// (0x000596c6) list_single_cale_day_pane_fp_t_ParamLimits

0xfbaa,	// (0x000596c6) list_single_cale_day_pane_fp_t

0x529d,	// (0x0004edb9) list_empty_pane_fp_g1_ParamLimits

0x529d,	// (0x0004edb9) list_empty_pane_fp_g1

0xee5d,	// (0x00058979) list_empty_pane_fp_t1

0xee6b,	// (0x00058987) list_empty_pane_fp_t2

0x0001,

0xfbb1,	// (0x000596cd) list_empty_pane_fp_t

0x529d,	// (0x0004edb9) list_single_heading_pane_fp_g1_ParamLimits

0x529d,	// (0x0004edb9) list_single_heading_pane_fp_g1

0x51f6,	// (0x0004ed12) list_single_heading_pane_fp_g2_ParamLimits

0x51f6,	// (0x0004ed12) list_single_heading_pane_fp_g2

0x5202,	// (0x0004ed1e) list_single_heading_pane_fp_g3_ParamLimits

0x5202,	// (0x0004ed1e) list_single_heading_pane_fp_g3

0x0002,

0xfbb6,	// (0x000596d2) list_single_heading_pane_fp_g_ParamLimits

0xfbb6,	// (0x000596d2) list_single_heading_pane_fp_g

0xee79,	// (0x00058995) list_single_heading_pane_fp_t1_ParamLimits

0xee79,	// (0x00058995) list_single_heading_pane_fp_t1

0xee8b,	// (0x000589a7) list_single_heading_pane_fp_t2_ParamLimits

0xee8b,	// (0x000589a7) list_single_heading_pane_fp_t2

0x0001,

0xfbbd,	// (0x000596d9) list_single_heading_pane_fp_t_ParamLimits

0xfbbd,	// (0x000596d9) list_single_heading_pane_fp_t

0xa453,	// (0x00053f6f) aid_size_cell_fast

0x702d,	// (0x00050b49) soft_indicator_pane_cp1_t1

0xa490,	// (0x00053fac) cell_app_pane_cp2_ParamLimits

0xa490,	// (0x00053fac) cell_app_pane_cp2

0x0b94,	// (0x0004a6b0) fep_hwr_candidate_drop_down_list_pane

0xcda6,	// (0x000568c2) fep_hwr_candidate_pane_g3_ParamLimits

0xcda6,	// (0x000568c2) fep_hwr_candidate_pane_g3

0xcdb3,	// (0x000568cf) fep_hwr_candidate_pane_g4_ParamLimits

0xcdb3,	// (0x000568cf) fep_hwr_candidate_pane_g4

0x0002,

0xfb31,	// (0x0005964d) fep_hwr_candidate_pane_g_ParamLimits

0xfb31,	// (0x0005964d) fep_hwr_candidate_pane_g

0x4d29,	// (0x0004e845) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4d29,	// (0x0004e845) fep_vkb_candidate_drop_down_list_pane

0x5151,	// (0x0004ec6d) fep_vkb_candidate_pane_g3

0x5159,	// (0x0004ec75) fep_vkb_candidate_pane_g4

0x0002,

0xfb5e,	// (0x0005967a) fep_vkb_candidate_pane_g

0x4e2f,	// (0x0004e94b) cell_hwr_candidate_pane_g1_ParamLimits

0x5170,	// (0x0004ec8c) cell_hwr_candidate_pane_g3_ParamLimits

0x5170,	// (0x0004ec8c) cell_hwr_candidate_pane_g3

0x5191,	// (0x0004ecad) cell_hwr_candidate_pane_g4_ParamLimits

0x5191,	// (0x0004ecad) cell_hwr_candidate_pane_g4

0x0002,

0xfb78,	// (0x00059694) cell_hwr_candidate_pane_g_ParamLimits

0xfb78,	// (0x00059694) cell_hwr_candidate_pane_g

0x51b2,	// (0x0004ecce) cell_vkb_candidate_pane_g3_ParamLimits

0x51b2,	// (0x0004ecce) cell_vkb_candidate_pane_g3

0x51cd,	// (0x0004ece9) cell_vkb_candidate_pane_g4_ParamLimits

0x51cd,	// (0x0004ece9) cell_vkb_candidate_pane_g4

0x52c1,	// (0x0004eddd) cell_app_pane_cp2_g1_ParamLimits

0x52c1,	// (0x0004eddd) cell_app_pane_cp2_g1

0x52df,	// (0x0004edfb) cell_app_pane_cp2_g2_ParamLimits

0x52df,	// (0x0004edfb) cell_app_pane_cp2_g2

0x0001,

0xfbc2,	// (0x000596de) cell_app_pane_cp2_g_ParamLimits

0xfbc2,	// (0x000596de) cell_app_pane_cp2_g

0x52eb,	// (0x0004ee07) cell_app_pane_cp2_t1_ParamLimits

0x52eb,	// (0x0004ee07) cell_app_pane_cp2_t1

0xa264,	// (0x00053d80) grid_highlight_pane_cp1_ParamLimits

0xa264,	// (0x00053d80) grid_highlight_pane_cp1

0x0e56,	// (0x0004a972) cell_hwr_candidate_pane_cp1_ParamLimits

0x0e56,	// (0x0004a972) cell_hwr_candidate_pane_cp1

0x4e2f,	// (0x0004e94b) fep_hwr_candidate_drop_down_list_pane_g1

0x52fd,	// (0x0004ee19) fep_hwr_candidate_drop_down_list_pane_g2

0x530a,	// (0x0004ee26) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc7,	// (0x000596e3) fep_hwr_candidate_drop_down_list_pane_g

0x0e7a,	// (0x0004a996) fep_hwr_candidate_drop_down_list_scroll_pane

0x0e83,	// (0x0004a99f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0e83,	// (0x0004a99f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x0e90,	// (0x0004a9ac) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x0e90,	// (0x0004a9ac) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x0e9d,	// (0x0004a9b9) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x0e9d,	// (0x0004a9b9) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x51b2,	// (0x0004ecce) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x51b2,	// (0x0004ecce) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x51cd,	// (0x0004ece9) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x51cd,	// (0x0004ece9) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x0eaa,	// (0x0004a9c6) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x0eaa,	// (0x0004a9c6) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x0ec5,	// (0x0004a9e1) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x0ec5,	// (0x0004a9e1) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x0ee0,	// (0x0004a9fc) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x0ee0,	// (0x0004a9fc) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbce,	// (0x000596ea) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbce,	// (0x000596ea) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5317,	// (0x0004ee33) cell_vkb_candidate_pane_cp1_ParamLimits

0x5317,	// (0x0004ee33) cell_vkb_candidate_pane_cp1

0x4e2f,	// (0x0004e94b) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4e2f,	// (0x0004e94b) fep_vkb_candidate_drop_down_list_pane_g1

0x52fd,	// (0x0004ee19) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x52fd,	// (0x0004ee19) fep_vkb_candidate_drop_down_list_pane_g2

0x530a,	// (0x0004ee26) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x530a,	// (0x0004ee26) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc7,	// (0x000596e3) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc7,	// (0x000596e3) fep_vkb_candidate_drop_down_list_pane_g

0x533d,	// (0x0004ee59) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x533d,	// (0x0004ee59) fep_vkb_candidate_drop_down_list_scroll_pane

0x534a,	// (0x0004ee66) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x534a,	// (0x0004ee66) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5357,	// (0x0004ee73) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5357,	// (0x0004ee73) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5363,	// (0x0004ee7f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5363,	// (0x0004ee7f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5170,	// (0x0004ec8c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5170,	// (0x0004ec8c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5191,	// (0x0004ecad) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5191,	// (0x0004ecad) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x536f,	// (0x0004ee8b) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x536f,	// (0x0004ee8b) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5390,	// (0x0004eeac) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5390,	// (0x0004eeac) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x53b1,	// (0x0004eecd) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x53b1,	// (0x0004eecd) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdf,	// (0x000596fb) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdf,	// (0x000596fb) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9df5,	// (0x00053911) title_pane_g1_ParamLimits

0x9e08,	// (0x00053924) title_pane_g2_ParamLimits

0xf54e,	// (0x0005906a) title_pane_g_ParamLimits

0xa906,	// (0x00054422) aid_call2_pane

0xa90e,	// (0x0005442a) aid_call_pane

0xa916,	// (0x00054432) popup_clock_analogue_window_g1

0xa916,	// (0x00054432) popup_clock_analogue_window_g2

0xf331,	// (0x00058e4d) popup_clock_analogue_window_g3

0xf33a,	// (0x00058e56) popup_clock_analogue_window_g4

0x6eb3,	// (0x000509cf) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x00059219) popup_clock_analogue_window_g

0xf342,	// (0x00058e5e) popup_clock_analogue_window_t1

0xf350,	// (0x00058e6c) clock_digital_number_pane_ParamLimits

0xf350,	// (0x00058e6c) clock_digital_number_pane

0xf35c,	// (0x00058e78) clock_digital_number_pane_cp02_ParamLimits

0xf35c,	// (0x00058e78) clock_digital_number_pane_cp02

0xf368,	// (0x00058e84) clock_digital_number_pane_cp03_ParamLimits

0xf368,	// (0x00058e84) clock_digital_number_pane_cp03

0xf374,	// (0x00058e90) clock_digital_number_pane_cp04_ParamLimits

0xf374,	// (0x00058e90) clock_digital_number_pane_cp04

0xf380,	// (0x00058e9c) clock_digital_separator_pane_ParamLimits

0xf380,	// (0x00058e9c) clock_digital_separator_pane

0xf38c,	// (0x00058ea8) popup_clock_digital_window_t1_ParamLimits

0xf38c,	// (0x00058ea8) popup_clock_digital_window_t1

0x6eb3,	// (0x000509cf) clock_digital_number_pane_g1

0x6eb3,	// (0x000509cf) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x00059224) clock_digital_number_pane_g

0x6eb3,	// (0x000509cf) clock_digital_separator_pane_g1

0x6eb3,	// (0x000509cf) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x00059224) clock_digital_separator_pane_g

0xb8cc,	// (0x000553e8) aid_fill_nsta_ParamLimits

0xba04,	// (0x00055520) indicator_nsta_pane_ParamLimits

0x2347,	// (0x0004be63) popup_clock_analogue_window

0x2347,	// (0x0004be63) popup_clock_digital_window

0xcbb5,	// (0x000566d1) grid_indicator_nsta_pane_ParamLimits

0x45e7,	// (0x0004e103) clock_nsta_pane_t2

0x0001,

0xfab1,	// (0x000595cd) clock_nsta_pane_t

0xf2fe,	// (0x00058e1a) aid_size_max_handle

0xa6f9,	// (0x00054215) aid_size_min_handle

0xe7f5,	// (0x00058311) editor_scroll_pane

0x53cc,	// (0x0004eee8) ex_editor_pane

0xa3da,	// (0x00053ef6) scroll_pane_cp13

0x74d9,	// (0x00050ff5) scroll_pane_cp14

0xa945,	// (0x00054461) scroll_pane_cp36

0xa970,	// (0x0005448c) list_single_graphic_hl_pane_cp2_ParamLimits

0xa970,	// (0x0005448c) list_single_graphic_hl_pane_cp2

0xca51,	// (0x0005656d) list_single_graphic_hl_pane_ParamLimits

0xca51,	// (0x0005656d) list_single_graphic_hl_pane

0xeea1,	// (0x000589bd) aid_size_min_hl_cp1

0x53d4,	// (0x0004eef0) list_highlight_pane_cp34_ParamLimits

0x53d4,	// (0x0004eef0) list_highlight_pane_cp34

0x53e5,	// (0x0004ef01) list_single_graphic_hl_pane_g1_ParamLimits

0x53e5,	// (0x0004ef01) list_single_graphic_hl_pane_g1

0x9a74,	// (0x00053590) list_single_graphic_hl_pane_g2_ParamLimits

0x9a74,	// (0x00053590) list_single_graphic_hl_pane_g2

0x9a74,	// (0x00053590) list_single_graphic_hl_pane_g3_ParamLimits

0x9a74,	// (0x00053590) list_single_graphic_hl_pane_g3

0xcf3c,	// (0x00056a58) list_single_graphic_hl_pane_g4_ParamLimits

0xcf3c,	// (0x00056a58) list_single_graphic_hl_pane_g4

0x5422,	// (0x0004ef3e) list_single_graphic_hl_pane_g5_ParamLimits

0x5422,	// (0x0004ef3e) list_single_graphic_hl_pane_g5

0x0004,

0xfbf0,	// (0x0005970c) list_single_graphic_hl_pane_g_ParamLimits

0xfbf0,	// (0x0005970c) list_single_graphic_hl_pane_g

0x9a80,	// (0x0005359c) list_single_graphic_hl_pane_t1_ParamLimits

0x9a80,	// (0x0005359c) list_single_graphic_hl_pane_t1

0x53f2,	// (0x0004ef0e) aid_size_min_hl_cp2

0x53fb,	// (0x0004ef17) list_highlight_pane_cp34_cp2_ParamLimits

0x53fb,	// (0x0004ef17) list_highlight_pane_cp34_cp2

0x53e5,	// (0x0004ef01) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x53e5,	// (0x0004ef01) list_single_graphic_hl_pane_g1_cp2

0x5408,	// (0x0004ef24) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5408,	// (0x0004ef24) list_single_graphic_hl_pane_g2_cp2

0xcf48,	// (0x00056a64) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcf48,	// (0x00056a64) list_single_graphic_hl_pane_g3_cp2

0xcf3c,	// (0x00056a58) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xcf3c,	// (0x00056a58) list_single_graphic_hl_pane_g4_cp2

0x5422,	// (0x0004ef3e) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5422,	// (0x0004ef3e) list_single_graphic_hl_pane_g5_cp2

0xb03d,	// (0x00054b59) control_pane_g4_ParamLimits

0xb03d,	// (0x00054b59) control_pane_g4

0x04b3,	// (0x00049fcf) bg_popup_sub_pane_cp10_ParamLimits

0x4bbe,	// (0x0004e6da) list_choice_list_pane_ParamLimits

0x4bcd,	// (0x0004e6e9) scroll_pane_cp23

0x7058,	// (0x00050b74) bg_popup_preview_window_pane_cp02_ParamLimits

0x523e,	// (0x0004ed5a) list_preview_fixed_pane_ParamLimits

0x5254,	// (0x0004ed70) list_preview_fixed_pane_cp_ParamLimits

0x5254,	// (0x0004ed70) list_preview_fixed_pane_cp

0x5260,	// (0x0004ed7c) popup_preview_fixed_window_g1_ParamLimits

0x5260,	// (0x0004ed7c) popup_preview_fixed_window_g1

0x526c,	// (0x0004ed88) popup_preview_fixed_window_g2_ParamLimits

0x526c,	// (0x0004ed88) popup_preview_fixed_window_g2

0x0002,

0xfb7f,	// (0x0005969b) popup_preview_fixed_window_g_ParamLimits

0xfb7f,	// (0x0005969b) popup_preview_fixed_window_g

0xf270,	// (0x00058d8c) aid_navi_side_left_pane_ParamLimits

0xf285,	// (0x00058da1) aid_navi_side_right_pane_ParamLimits

0xf29d,	// (0x00058db9) navi_icon_pane_stacon_ParamLimits

0xf2b1,	// (0x00058dcd) navi_navi_pane_stacon_ParamLimits

0xf29d,	// (0x00058db9) navi_text_pane_stacon_ParamLimits

0x6ea9,	// (0x000509c5) main_text_info_pane

0x544c,	// (0x0004ef68) listscroll_text_info_pane

0x5454,	// (0x0004ef70) list_text_info_pane_ParamLimits

0x5454,	// (0x0004ef70) list_text_info_pane

0x5463,	// (0x0004ef7f) scroll_pane_cp24_ParamLimits

0x5463,	// (0x0004ef7f) scroll_pane_cp24

0xcf56,	// (0x00056a72) list_text_info_pane_t1_ParamLimits

0xcf56,	// (0x00056a72) list_text_info_pane_t1

0xb1c5,	// (0x00054ce1) popup_fast_swap2_window_ParamLimits

0xb1c5,	// (0x00054ce1) popup_fast_swap2_window

0x54a6,	// (0x0004efc2) aid_size_cell_fast2

0x6ea9,	// (0x000509c5) bg_popup_window_pane_cp17

0x29a4,	// (0x0004c4c0) heading_pane_cp2

0x725e,	// (0x00050d7a) listscroll_fast2_pane

0x54b0,	// (0x0004efcc) grid_fast2_pane

0x54ba,	// (0x0004efd6) listscroll_fast2_pane_g1

0x54c4,	// (0x0004efe0) listscroll_fast2_pane_g2

0x0001,

0xfbfb,	// (0x00059717) listscroll_fast2_pane_g

0xa3da,	// (0x00053ef6) scroll_pane_cp26

0x54ce,	// (0x0004efea) cell_fast2_pane_ParamLimits

0x54ce,	// (0x0004efea) cell_fast2_pane

0x54e5,	// (0x0004f001) cell_fast2_pane_g1

0x54ee,	// (0x0004f00a) cell_fast2_pane_g2

0x54f7,	// (0x0004f013) cell_fast2_pane_g3

0x0002,

0xfc00,	// (0x0005971c) cell_fast2_pane_g

0x72a0,	// (0x00050dbc) grid_highlight_pane_cp9

0x72b5,	// (0x00050dd1) main_eswt_pane_ParamLimits

0x72b5,	// (0x00050dd1) main_eswt_pane

0x5478,	// (0x0004ef94) list_single_text_info_pane

0x54ff,	// (0x0004f01b) eswt_ctrl_button_pane

0x54ff,	// (0x0004f01b) eswt_ctrl_canvas_pane

0x5507,	// (0x0004f023) eswt_ctrl_combo_pane

0x54ff,	// (0x0004f01b) eswt_ctrl_default_pane

0x54ff,	// (0x0004f01b) eswt_ctrl_label_pane

0x550f,	// (0x0004f02b) eswt_ctrl_wait_pane

0x5517,	// (0x0004f033) eswt_shell_pane

0x6ea9,	// (0x000509c5) listscroll_eswt_app_pane

0x5537,	// (0x0004f053) popup_eswt_tasktip_window_ParamLimits

0x5537,	// (0x0004f053) popup_eswt_tasktip_window

0x25e4,	// (0x0004c100) bg_popup_window_pane_cp18

0x5548,	// (0x0004f064) eswt_control_pane_g1_ParamLimits

0x5548,	// (0x0004f064) eswt_control_pane_g1

0x5555,	// (0x0004f071) eswt_control_pane_g2_ParamLimits

0x5555,	// (0x0004f071) eswt_control_pane_g2

0x5562,	// (0x0004f07e) eswt_control_pane_g3_ParamLimits

0x5562,	// (0x0004f07e) eswt_control_pane_g3

0x556f,	// (0x0004f08b) eswt_control_pane_g4_ParamLimits

0x556f,	// (0x0004f08b) eswt_control_pane_g4

0x0003,

0xfc07,	// (0x00059723) eswt_control_pane_g_ParamLimits

0xfc07,	// (0x00059723) eswt_control_pane_g

0xa264,	// (0x00053d80) bg_button_pane_ParamLimits

0xa264,	// (0x00053d80) bg_button_pane

0x72b5,	// (0x00050dd1) common_borders_pane_copy2_ParamLimits

0x72b5,	// (0x00050dd1) common_borders_pane_copy2

0x557c,	// (0x0004f098) control_button_pane_g1_ParamLimits

0x557c,	// (0x0004f098) control_button_pane_g1

0x5588,	// (0x0004f0a4) control_button_pane_g2_ParamLimits

0x5588,	// (0x0004f0a4) control_button_pane_g2

0x5594,	// (0x0004f0b0) control_button_pane_g3_ParamLimits

0x5594,	// (0x0004f0b0) control_button_pane_g3

0x0002,

0xfc10,	// (0x0005972c) control_button_pane_g_ParamLimits

0xfc10,	// (0x0005972c) control_button_pane_g

0x55a8,	// (0x0004f0c4) control_button_pane_t1

0x55b6,	// (0x0004f0d2) control_button_pane_t2

0x0001,

0xfc17,	// (0x00059733) control_button_pane_t

0x2570,	// (0x0004c08c) bg_button_pane_g1

0x2578,	// (0x0004c094) bg_button_pane_g2

0x2580,	// (0x0004c09c) bg_button_pane_g3

0x2588,	// (0x0004c0a4) bg_button_pane_g4

0x2590,	// (0x0004c0ac) bg_button_pane_g5

0x2598,	// (0x0004c0b4) bg_button_pane_g6

0x25a0,	// (0x0004c0bc) bg_button_pane_g7

0x25a8,	// (0x0004c0c4) bg_button_pane_g8

0x25b0,	// (0x0004c0cc) bg_button_pane_g9

0x0008,

0xf866,	// (0x00059382) bg_button_pane_g

0x4b79,	// (0x0004e695) common_borders_pane_ParamLimits

0x4b79,	// (0x0004e695) common_borders_pane

0x5548,	// (0x0004f064) eswt_control_pane_g1_copy1_ParamLimits

0x5548,	// (0x0004f064) eswt_control_pane_g1_copy1

0x5555,	// (0x0004f071) eswt_control_pane_g2_copy1_ParamLimits

0x5555,	// (0x0004f071) eswt_control_pane_g2_copy1

0x5562,	// (0x0004f07e) eswt_control_pane_g3_copy1_ParamLimits

0x5562,	// (0x0004f07e) eswt_control_pane_g3_copy1

0x556f,	// (0x0004f08b) eswt_control_pane_g4_copy1_ParamLimits

0x556f,	// (0x0004f08b) eswt_control_pane_g4_copy1

0x4bb4,	// (0x0004e6d0) bg_eswt_ctrl_canvas_pane_g1

0x4b79,	// (0x0004e695) common_borders_pane_cp2_ParamLimits

0x4b79,	// (0x0004e695) common_borders_pane_cp2

0x4b79,	// (0x0004e695) common_borders_pane_cp3_ParamLimits

0x4b79,	// (0x0004e695) common_borders_pane_cp3

0x55c4,	// (0x0004f0e0) separator_horizontal_pane

0x55cc,	// (0x0004f0e8) separator_vertical_pane

0x5548,	// (0x0004f064) eswt_control_pane_g1_copy2_ParamLimits

0x5548,	// (0x0004f064) eswt_control_pane_g1_copy2

0x5555,	// (0x0004f071) eswt_control_pane_g2_copy2_ParamLimits

0x5555,	// (0x0004f071) eswt_control_pane_g2_copy2

0x5562,	// (0x0004f07e) eswt_control_pane_g3_copy2_ParamLimits

0x5562,	// (0x0004f07e) eswt_control_pane_g3_copy2

0x556f,	// (0x0004f08b) eswt_control_pane_g4_copy2_ParamLimits

0x556f,	// (0x0004f08b) eswt_control_pane_g4_copy2

0x6ea9,	// (0x000509c5) common_borders_pane_cp4

0x55d5,	// (0x0004f0f1) separator_horizontal_pane_g1

0x55de,	// (0x0004f0fa) separator_horizontal_pane_g2

0x55e7,	// (0x0004f103) separator_horizontal_pane_g3

0x0002,

0xfc1c,	// (0x00059738) separator_horizontal_pane_g

0x5548,	// (0x0004f064) eswt_control_pane_g1_copy3_ParamLimits

0x5548,	// (0x0004f064) eswt_control_pane_g1_copy3

0x5555,	// (0x0004f071) eswt_control_pane_g2_copy3_ParamLimits

0x5555,	// (0x0004f071) eswt_control_pane_g2_copy3

0x5562,	// (0x0004f07e) eswt_control_pane_g3_copy3_ParamLimits

0x5562,	// (0x0004f07e) eswt_control_pane_g3_copy3

0x556f,	// (0x0004f08b) eswt_control_pane_g4_copy3_ParamLimits

0x556f,	// (0x0004f08b) eswt_control_pane_g4_copy3

0x6ea9,	// (0x000509c5) common_borders_pane_cp5

0x55f0,	// (0x0004f10c) separator_vertical_pane_g1

0x55f9,	// (0x0004f115) separator_vertical_pane_g2

0x5602,	// (0x0004f11e) separator_vertical_pane_g3

0x0002,

0xfc23,	// (0x0005973f) separator_vertical_pane_g

0x5548,	// (0x0004f064) eswt_control_pane_g1_copy4_ParamLimits

0x5548,	// (0x0004f064) eswt_control_pane_g1_copy4

0x5555,	// (0x0004f071) eswt_control_pane_g2_copy4_ParamLimits

0x5555,	// (0x0004f071) eswt_control_pane_g2_copy4

0x5562,	// (0x0004f07e) eswt_control_pane_g3_copy4_ParamLimits

0x5562,	// (0x0004f07e) eswt_control_pane_g3_copy4

0x556f,	// (0x0004f08b) eswt_control_pane_g4_copy4_ParamLimits

0x556f,	// (0x0004f08b) eswt_control_pane_g4_copy4

0xcf78,	// (0x00056a94) eswt_ctrl_combo_button_pane

0xcf80,	// (0x00056a9c) eswt_ctrl_input_pane

0xcf88,	// (0x00056aa4) popup_choice_list_window_cp70

0xcf90,	// (0x00056aac) eswt_ctrl_input_pane_t1

0x6ea9,	// (0x000509c5) input_focus_pane_cp70

0x4b79,	// (0x0004e695) bg_button_pane_cp70_ParamLimits

0x4b79,	// (0x0004e695) bg_button_pane_cp70

0xcf9e,	// (0x00056aba) eswt_ctrl_combo_button_pane_g1

0x5639,	// (0x0004f155) wait_bar_pane_cp70

0x25e4,	// (0x0004c100) bg_popup_window_pane_cp70_ParamLimits

0x25e4,	// (0x0004c100) bg_popup_window_pane_cp70

0x5641,	// (0x0004f15d) popup_eswt_tasktip_window_t1

0x5657,	// (0x0004f173) wait_bar_pane_cp71_ParamLimits

0x5657,	// (0x0004f173) wait_bar_pane_cp71

0x5663,	// (0x0004f17f) grid_eswt_app_pane

0xa72a,	// (0x00054246) scroll_pane_cp70

0xcfa6,	// (0x00056ac2) cell_eswt_app_pane_ParamLimits

0xcfa6,	// (0x00056ac2) cell_eswt_app_pane

0xcfd8,	// (0x00056af4) cell_eswt_app_pane_g1_ParamLimits

0xcfd8,	// (0x00056af4) cell_eswt_app_pane_g1

0xd007,	// (0x00056b23) cell_eswt_app_pane_g2_ParamLimits

0xd007,	// (0x00056b23) cell_eswt_app_pane_g2

0x0001,

0xfc2a,	// (0x00059746) cell_eswt_app_pane_g_ParamLimits

0xfc2a,	// (0x00059746) cell_eswt_app_pane_g

0xd030,	// (0x00056b4c) cell_eswt_app_pane_t1_ParamLimits

0xd030,	// (0x00056b4c) cell_eswt_app_pane_t1

0x5728,	// (0x0004f244) grid_highlight_pane_cp70_ParamLimits

0x5728,	// (0x0004f244) grid_highlight_pane_cp70

0xae31,	// (0x0005494d) set_content_pane_g1

0xafd3,	// (0x00054aef) status_small_volume_pane

0x0f0f,	// (0x0004aa2b) status_small_volume_pane_g1

0x0f17,	// (0x0004aa33) volume_small2_pane

0x0f20,	// (0x0004aa3c) volume_small2_pane_g1

0x0f29,	// (0x0004aa45) volume_small2_pane_g2

0x0f32,	// (0x0004aa4e) volume_small2_pane_g3

0x0f3b,	// (0x0004aa57) volume_small2_pane_g4

0x0f44,	// (0x0004aa60) volume_small2_pane_g5

0x0f4d,	// (0x0004aa69) volume_small2_pane_g6

0x0f56,	// (0x0004aa72) volume_small2_pane_g7

0x0f5f,	// (0x0004aa7b) volume_small2_pane_g8

0x0f68,	// (0x0004aa84) volume_small2_pane_g9

0x0f71,	// (0x0004aa8d) volume_small2_pane_g10

0x0009,

0xfc2f,	// (0x0005974b) volume_small2_pane_g

0x4f83,	// (0x0004ea9f) fep_vkb_top_text_pane_g1_ParamLimits

0xcee4,	// (0x00056a00) fep_vkb_top_text_pane_t1_ParamLimits

0x5278,	// (0x0004ed94) popup_preview_fixed_window_g3_ParamLimits

0x5278,	// (0x0004ed94) popup_preview_fixed_window_g3

0xb85f,	// (0x0005537b) popup_toolbar_trans_pane

0xc8a1,	// (0x000563bd) aid_height_set_list_ParamLimits

0x3939,	// (0x0004d455) aid_size_parent_ParamLimits

0x04b3,	// (0x00049fcf) list_highlight_pane_cp2_ParamLimits

0xae31,	// (0x0005494d) set_content_pane_g1_ParamLimits

0x9a63,	// (0x0005357f) list_single_image_pane_ParamLimits

0x9a63,	// (0x0005357f) list_single_image_pane

0xd062,	// (0x00056b7e) aid_size_cell_image_ParamLimits

0xd062,	// (0x00056b7e) aid_size_cell_image

0xd06f,	// (0x00056b8b) grid_single_image_pane_ParamLimits

0xd06f,	// (0x00056b8b) grid_single_image_pane

0xa272,	// (0x00053d8e) list_single_image_pane_g1_ParamLimits

0xa272,	// (0x00053d8e) list_single_image_pane_g1

0xa27e,	// (0x00053d9a) list_single_image_pane_g2_ParamLimits

0xa27e,	// (0x00053d9a) list_single_image_pane_g2

0x0001,

0xfc44,	// (0x00059760) list_single_image_pane_g_ParamLimits

0xfc44,	// (0x00059760) list_single_image_pane_g

0x574f,	// (0x0004f26b) list_single_image_pane_t1_ParamLimits

0x574f,	// (0x0004f26b) list_single_image_pane_t1

0xd07d,	// (0x00056b99) cell_image_list_pane_ParamLimits

0xd07d,	// (0x00056b99) cell_image_list_pane

0xd091,	// (0x00056bad) cell_image_list_pane_g1

0xd09a,	// (0x00056bb6) cell_image_list_pane_g2

0x0001,

0xfc49,	// (0x00059765) cell_image_list_pane_g

0x578d,	// (0x0004f2a9) aid_size_cell_tb_trans_pane

0xa264,	// (0x00053d80) bg_tb_trans_pane

0x579f,	// (0x0004f2bb) grid_tb_trans_pane

0x2570,	// (0x0004c08c) bg_tb_trans_pane_g1

0x2578,	// (0x0004c094) bg_tb_trans_pane_g2

0x2580,	// (0x0004c09c) bg_tb_trans_pane_g3

0x2588,	// (0x0004c0a4) bg_tb_trans_pane_g4

0x2590,	// (0x0004c0ac) bg_tb_trans_pane_g5

0x25a8,	// (0x0004c0c4) bg_tb_trans_pane_g6

0x25b0,	// (0x0004c0cc) bg_tb_trans_pane_g7

0x2598,	// (0x0004c0b4) bg_tb_trans_pane_g8

0x25a0,	// (0x0004c0bc) bg_tb_trans_pane_g9

0x0008,

0xfc4e,	// (0x0005976a) bg_tb_trans_pane_g

0x57b3,	// (0x0004f2cf) cell_toolbar_trans_pane_ParamLimits

0x57b3,	// (0x0004f2cf) cell_toolbar_trans_pane

0x4bb4,	// (0x0004e6d0) cell_toolbar_trans_pane_g1

0xcca1,	// (0x000567bd) list_form2_midp_pane_t1

0xccaf,	// (0x000567cb) list_form2_midp_pane_t2

0x0001,

0xfaf7,	// (0x00059613) list_form2_midp_pane_t

0x47f4,	// (0x0004e310) scroll_pane_cp51_ParamLimits

0x49bb,	// (0x0004e4d7) form2_midp_wait_pane_g1

0x49c4,	// (0x0004e4e0) form2_midp_wait_pane_g2

0x49cd,	// (0x0004e4e9) form2_midp_wait_pane_g3

0x0002,

0xfb0c,	// (0x00059628) form2_midp_wait_pane_g

0x6f17,	// (0x00050a33) list_highlight_pane_cp21_ParamLimits

0x4a11,	// (0x0004e52d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4a20,	// (0x0004e53c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3b11,	// (0x0004d62d) list_single_2graphic_im_pane_ParamLimits

0x3b11,	// (0x0004d62d) list_single_2graphic_im_pane

0xd0a3,	// (0x00056bbf) list_single_2graphic_im_pane_g1_ParamLimits

0xd0a3,	// (0x00056bbf) list_single_2graphic_im_pane_g1

0xd0b4,	// (0x00056bd0) list_single_2graphic_im_pane_g2_ParamLimits

0xd0b4,	// (0x00056bd0) list_single_2graphic_im_pane_g2

0xd0c0,	// (0x00056bdc) list_single_2graphic_im_pane_g3_ParamLimits

0xd0c0,	// (0x00056bdc) list_single_2graphic_im_pane_g3

0x0003,

0xfc61,	// (0x0005977d) list_single_2graphic_im_pane_g_ParamLimits

0xfc61,	// (0x0005977d) list_single_2graphic_im_pane_g

0xd0d4,	// (0x00056bf0) list_single_2graphic_im_pane_t1_ParamLimits

0xd0d4,	// (0x00056bf0) list_single_2graphic_im_pane_t1

0x5284,	// (0x0004eda0) list_single_graphic_2heading_pane_fp_ParamLimits

0x5284,	// (0x0004eda0) list_single_graphic_2heading_pane_fp

0xed83,	// (0x0005889f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xed83,	// (0x0005889f) list_single_graphic_2heading_pane_fp_g1

0x529d,	// (0x0004edb9) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x529d,	// (0x0004edb9) list_single_graphic_2heading_pane_fp_g2

0x51f6,	// (0x0004ed12) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x51f6,	// (0x0004ed12) list_single_graphic_2heading_pane_fp_g3

0x5202,	// (0x0004ed1e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5202,	// (0x0004ed1e) list_single_graphic_2heading_pane_fp_g4

0x52a9,	// (0x0004edc5) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x52a9,	// (0x0004edc5) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8f,	// (0x000596ab) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8f,	// (0x000596ab) list_single_graphic_2heading_pane_fp_g

0xeeaa,	// (0x000589c6) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xeeaa,	// (0x000589c6) list_single_graphic_2heading_pane_fp_t1

0xedbb,	// (0x000588d7) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xedbb,	// (0x000588d7) list_single_graphic_2heading_pane_fp_t2

0xeec0,	// (0x000589dc) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xeec0,	// (0x000589dc) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6a,	// (0x00059786) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6a,	// (0x00059786) list_single_graphic_2heading_pane_fp_t

0x4c45,	// (0x0004e761) fep_hwr_write_pane_g5_ParamLimits

0x4c45,	// (0x0004e761) fep_hwr_write_pane_g5

0x4c51,	// (0x0004e76d) fep_hwr_write_pane_g6_ParamLimits

0x4c51,	// (0x0004e76d) fep_hwr_write_pane_g6

0x5517,	// (0x0004f033) eswt_shell_pane_ParamLimits

0x25e4,	// (0x0004c100) bg_popup_window_pane_cp18_ParamLimits

0x387f,	// (0x0004d39b) heading_pane_cp70

0x5641,	// (0x0004f15d) popup_eswt_tasktip_window_t1_ParamLimits

0xb929,	// (0x00055445) aid_touch_tab_arrow_left

0xb93f,	// (0x0005545b) aid_touch_tab_arrow_right

0x6ec7,	// (0x000509e3) title_pane_g3_ParamLimits

0x6ec7,	// (0x000509e3) title_pane_g3

0xa223,	// (0x00053d3f) set_value_pane_g1

0xb85f,	// (0x0005537b) popup_toolbar_trans_pane_ParamLimits

0x578d,	// (0x0004f2a9) aid_size_cell_tb_trans_pane_ParamLimits

0xa264,	// (0x00053d80) bg_tb_trans_pane_ParamLimits

0x579f,	// (0x0004f2bb) grid_tb_trans_pane_ParamLimits

0x7058,	// (0x00050b74) cont_note_pane_ParamLimits

0x7058,	// (0x00050b74) cont_note_pane

0x72b5,	// (0x00050dd1) cont_snote2_single_text_pane_ParamLimits

0x72b5,	// (0x00050dd1) cont_snote2_single_text_pane

0x72b5,	// (0x00050dd1) cont_snote2_single_graphic_pane_ParamLimits

0x72b5,	// (0x00050dd1) cont_snote2_single_graphic_pane

0x2bc0,	// (0x0004c6dc) cont_note_wait_pane_ParamLimits

0x2bc0,	// (0x0004c6dc) cont_note_wait_pane

0x2bc0,	// (0x0004c6dc) cont_note_image_pane_ParamLimits

0x2bc0,	// (0x0004c6dc) cont_note_image_pane

0x5847,	// (0x0004f363) popup_note2_window_g1_ParamLimits

0x5847,	// (0x0004f363) popup_note2_window_g1

0x5878,	// (0x0004f394) popup_note2_window_t1_ParamLimits

0x5878,	// (0x0004f394) popup_note2_window_t1

0x58bd,	// (0x0004f3d9) popup_note2_window_t2_ParamLimits

0x58bd,	// (0x0004f3d9) popup_note2_window_t2

0x5902,	// (0x0004f41e) popup_note2_window_t3_ParamLimits

0x5902,	// (0x0004f41e) popup_note2_window_t3

0x5947,	// (0x0004f463) popup_note2_window_t4_ParamLimits

0x5947,	// (0x0004f463) popup_note2_window_t4

0x70dc,	// (0x00050bf8) popup_note2_window_t5_ParamLimits

0x70dc,	// (0x00050bf8) popup_note2_window_t5

0x0004,

0xfc76,	// (0x00059792) popup_note2_window_t_ParamLimits

0xfc76,	// (0x00059792) popup_note2_window_t

0x5976,	// (0x0004f492) popup_note2_image_window_g1_ParamLimits

0x5976,	// (0x0004f492) popup_note2_image_window_g1

0x5982,	// (0x0004f49e) popup_note2_image_window_g2_ParamLimits

0x5982,	// (0x0004f49e) popup_note2_image_window_g2

0x0001,

0xfc81,	// (0x0005979d) popup_note2_image_window_g_ParamLimits

0xfc81,	// (0x0005979d) popup_note2_image_window_g

0x5994,	// (0x0004f4b0) popup_note2_image_window_t1_ParamLimits

0x5994,	// (0x0004f4b0) popup_note2_image_window_t1

0x59ac,	// (0x0004f4c8) popup_note2_image_window_t2_ParamLimits

0x59ac,	// (0x0004f4c8) popup_note2_image_window_t2

0x59c4,	// (0x0004f4e0) popup_note2_image_window_t3_ParamLimits

0x59c4,	// (0x0004f4e0) popup_note2_image_window_t3

0x0002,

0xfc86,	// (0x000597a2) popup_note2_image_window_t_ParamLimits

0xfc86,	// (0x000597a2) popup_note2_image_window_t

0x2bce,	// (0x0004c6ea) popup_note2_wait_window_g1_ParamLimits

0x2bce,	// (0x0004c6ea) popup_note2_wait_window_g1

0x59e0,	// (0x0004f4fc) popup_note2_wait_window_g2_ParamLimits

0x59e0,	// (0x0004f4fc) popup_note2_wait_window_g2

0x2be6,	// (0x0004c702) popup_note2_wait_window_g3_ParamLimits

0x2be6,	// (0x0004c702) popup_note2_wait_window_g3

0x0002,

0xfc8d,	// (0x000597a9) popup_note2_wait_window_g_ParamLimits

0xfc8d,	// (0x000597a9) popup_note2_wait_window_g

0x59ec,	// (0x0004f508) popup_note2_wait_window_t1_ParamLimits

0x59ec,	// (0x0004f508) popup_note2_wait_window_t1

0x5a0a,	// (0x0004f526) popup_note2_wait_window_t2_ParamLimits

0x5a0a,	// (0x0004f526) popup_note2_wait_window_t2

0x5a28,	// (0x0004f544) popup_note2_wait_window_t3_ParamLimits

0x5a28,	// (0x0004f544) popup_note2_wait_window_t3

0x5a3a,	// (0x0004f556) popup_note2_wait_window_t4_ParamLimits

0x5a3a,	// (0x0004f556) popup_note2_wait_window_t4

0x0003,

0xfc94,	// (0x000597b0) popup_note2_wait_window_t_ParamLimits

0xfc94,	// (0x000597b0) popup_note2_wait_window_t

0x5a4c,	// (0x0004f568) wait_bar2_pane_ParamLimits

0x5a4c,	// (0x0004f568) wait_bar2_pane

0x5a64,	// (0x0004f580) popup_snote2_single_text_window_g1_ParamLimits

0x5a64,	// (0x0004f580) popup_snote2_single_text_window_g1

0x5a8c,	// (0x0004f5a8) popup_snote2_single_text_window_t1_ParamLimits

0x5a8c,	// (0x0004f5a8) popup_snote2_single_text_window_t1

0x5ad8,	// (0x0004f5f4) popup_snote2_single_text_window_t2_ParamLimits

0x5ad8,	// (0x0004f5f4) popup_snote2_single_text_window_t2

0x5b24,	// (0x0004f640) popup_snote2_single_text_window_t3_ParamLimits

0x5b24,	// (0x0004f640) popup_snote2_single_text_window_t3

0x5b65,	// (0x0004f681) popup_snote2_single_text_window_t4_ParamLimits

0x5b65,	// (0x0004f681) popup_snote2_single_text_window_t4

0x5b9b,	// (0x0004f6b7) popup_snote2_single_text_window_t5_ParamLimits

0x5b9b,	// (0x0004f6b7) popup_snote2_single_text_window_t5

0x0004,

0xfc9d,	// (0x000597b9) popup_snote2_single_text_window_t_ParamLimits

0xfc9d,	// (0x000597b9) popup_snote2_single_text_window_t

0x5bc6,	// (0x0004f6e2) popup_snote2_single_graphic_window_g1_ParamLimits

0x5bc6,	// (0x0004f6e2) popup_snote2_single_graphic_window_g1

0x5bee,	// (0x0004f70a) popup_snote2_single_graphic_window_g2_ParamLimits

0x5bee,	// (0x0004f70a) popup_snote2_single_graphic_window_g2

0x0001,

0xfca8,	// (0x000597c4) popup_snote2_single_graphic_window_g_ParamLimits

0xfca8,	// (0x000597c4) popup_snote2_single_graphic_window_g

0x5c16,	// (0x0004f732) popup_snote2_single_graphic_window_t1_ParamLimits

0x5c16,	// (0x0004f732) popup_snote2_single_graphic_window_t1

0x5c62,	// (0x0004f77e) popup_snote2_single_graphic_window_t2_ParamLimits

0x5c62,	// (0x0004f77e) popup_snote2_single_graphic_window_t2

0x5b24,	// (0x0004f640) popup_snote2_single_graphic_window_t3_ParamLimits

0x5b24,	// (0x0004f640) popup_snote2_single_graphic_window_t3

0x5b65,	// (0x0004f681) popup_snote2_single_graphic_window_t4_ParamLimits

0x5b65,	// (0x0004f681) popup_snote2_single_graphic_window_t4

0x5b9b,	// (0x0004f6b7) popup_snote2_single_graphic_window_t5_ParamLimits

0x5b9b,	// (0x0004f6b7) popup_snote2_single_graphic_window_t5

0x0004,

0xfcad,	// (0x000597c9) popup_snote2_single_graphic_window_t_ParamLimits

0xfcad,	// (0x000597c9) popup_snote2_single_graphic_window_t

0x46a4,	// (0x0004e1c0) clock_nsta_pane_cp2_t1

0x46a4,	// (0x0004e1c0) clock_nsta_pane_cp2_t2

0x0001,

0xfacd,	// (0x000595e9) clock_nsta_pane_cp2_t

0xe6aa,	// (0x000581c6) form_field_data_wide_pane_g1_ParamLimits

0xa272,	// (0x00053d8e) form_field_data_wide_pane_g2_ParamLimits

0xa272,	// (0x00053d8e) form_field_data_wide_pane_g2

0xa27e,	// (0x00053d9a) form_field_data_wide_pane_g3_ParamLimits

0xa27e,	// (0x00053d9a) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x0005919c) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x0005919c) form_field_data_wide_pane_g

0xcb9f,	// (0x000566bb) grid_touch_3_pane_ParamLimits

0xcb9f,	// (0x000566bb) grid_touch_3_pane

0xd105,	// (0x00056c21) cell_touch_3_pane_ParamLimits

0xd105,	// (0x00056c21) cell_touch_3_pane

0x4bb4,	// (0x0004e6d0) cell_touch_3_pane_g1

0x4bb4,	// (0x0004e6d0) cell_touch_3_pane_g2

0x0001,

0xfb52,	// (0x0005966e) cell_touch_3_pane_g

0x710e,	// (0x00050c2a) cont_query_data_pane

0x7116,	// (0x00050c32) cont_query_data_pane_cp1

0x5ce1,	// (0x0004f7fd) button_value_adjust_pane_cp7

0x5ce9,	// (0x0004f805) query_popup_pane_cp3

0xaa1b,	// (0x00054537) bg_popup_sub_pane_cp22_ParamLimits

0xf3ab,	// (0x00058ec7) navi_navi_volume_pane_cp2

0xf3c6,	// (0x00058ee2) popup_side_volume_key_window_g2

0xf3d5,	// (0x00058ef1) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x00059232) popup_side_volume_key_window_g

0xf3f2,	// (0x00058f0e) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x00059239) popup_side_volume_key_window_t

0xacec,	// (0x00054808) popup_side_volume_key_window_ParamLimits

0x953f,	// (0x0005305b) list_double_graphic_pane_g4_ParamLimits

0x953f,	// (0x0005305b) list_double_graphic_pane_g4

0xbf19,	// (0x00055a35) list_single_2heading_msg_pane_ParamLimits

0xbf19,	// (0x00055a35) list_single_2heading_msg_pane

0xbf7b,	// (0x00055a97) list_single_2heading_msg_pane_g1_ParamLimits

0xbf7b,	// (0x00055a97) list_single_2heading_msg_pane_g1

0xbf87,	// (0x00055aa3) list_single_2heading_msg_pane_g2_ParamLimits

0xbf87,	// (0x00055aa3) list_single_2heading_msg_pane_g2

0xbf9a,	// (0x00055ab6) list_single_2heading_msg_pane_g3_ParamLimits

0xbf9a,	// (0x00055ab6) list_single_2heading_msg_pane_g3

0xbfa6,	// (0x00055ac2) list_single_2heading_msg_pane_g4_ParamLimits

0xbfa6,	// (0x00055ac2) list_single_2heading_msg_pane_g4

0x0003,

0xfcb8,	// (0x000597d4) list_single_2heading_msg_pane_g_ParamLimits

0xfcb8,	// (0x000597d4) list_single_2heading_msg_pane_g

0x9a96,	// (0x000535b2) list_single_2heading_msg_pane_t1_ParamLimits

0x9a96,	// (0x000535b2) list_single_2heading_msg_pane_t1

0x9abe,	// (0x000535da) list_single_2heading_msg_pane_t2_ParamLimits

0x9abe,	// (0x000535da) list_single_2heading_msg_pane_t2

0x9b29,	// (0x00053645) list_single_2heading_msg_pane_t3_ParamLimits

0x9b29,	// (0x00053645) list_single_2heading_msg_pane_t3

0xf14b,	// (0x00058c67) list_single_2heading_msg_pane_t4_ParamLimits

0xf14b,	// (0x00058c67) list_single_2heading_msg_pane_t4

0x0003,

0xfcc1,	// (0x000597dd) list_single_2heading_msg_pane_t_ParamLimits

0xfcc1,	// (0x000597dd) list_single_2heading_msg_pane_t

0x6ed3,	// (0x000509ef) title_pane_g4_ParamLimits

0x6ed3,	// (0x000509ef) title_pane_g4

0xf1c0,	// (0x00058cdc) title_pane_stacon_g3_ParamLimits

0xf1c0,	// (0x00058cdc) title_pane_stacon_g3

0x580a,	// (0x0004f326) list_single_2graphic_im_pane_g4_ParamLimits

0x580a,	// (0x0004f326) list_single_2graphic_im_pane_g4

0x3630,	// (0x0004d14c) popup_side_volume_key_window_cp

0x3e9e,	// (0x0004d9ba) main_idle_act2_pane_t1

0x061d,	// (0x0004a139) toolbar_button_pane_g10

0xa195,	// (0x00053cb1) popup_toolbar_window_cp1

0x4695,	// (0x0004e1b1) clock_nsta_pane_cp_t1

0x4695,	// (0x0004e1b1) clock_nsta_pane_cp_t2

0x0001,

0xfac8,	// (0x000595e4) clock_nsta_pane_cp_t

0xf3ab,	// (0x00058ec7) navi_navi_volume_pane_cp2_ParamLimits

0xf3ba,	// (0x00058ed6) popup_side_volume_key_window_g1_ParamLimits

0xf3c6,	// (0x00058ee2) popup_side_volume_key_window_g2_ParamLimits

0xf3d5,	// (0x00058ef1) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x00059232) popup_side_volume_key_window_g_ParamLimits

0x0b80,	// (0x0004a69c) fep_hwr_aid_pane

0xcd98,	// (0x000568b4) bg_fep_hwr_top_pane_g4_ParamLimits

0x4c15,	// (0x0004e731) fep_hwr_top_pane_g1_ParamLimits

0x4c27,	// (0x0004e743) fep_hwr_top_pane_g2_ParamLimits

0x0c3b,	// (0x0004a757) fep_hwr_top_pane_g3_ParamLimits

0xfb1d,	// (0x00059639) fep_hwr_top_pane_g_ParamLimits

0x0c50,	// (0x0004a76c) fep_hwr_top_text_pane_ParamLimits

0x33e5,	// (0x0004cf01) aid_touch_tab_arrow_arrow_2

0x33ee,	// (0x0004cf0a) aid_touch_tab_arrow_left_2

0x0b94,	// (0x0004a6b0) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0bcb,	// (0x0004a6e7) fep_hwr_prediction_pane

0x4d7d,	// (0x0004e899) fep_vkb_prediction_pane

0xcec4,	// (0x000569e0) fep_vkb_side_pane_g3_ParamLimits

0xcec4,	// (0x000569e0) fep_vkb_side_pane_g3

0x4e2f,	// (0x0004e94b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x52fd,	// (0x0004ee19) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x530a,	// (0x0004ee26) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc7,	// (0x000596e3) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5d10,	// (0x0004f82c) fep_hwr_prediction_pane_g1

0x0faa,	// (0x0004aac6) fep_hwr_prediction_pane_g2

0x0fb2,	// (0x0004aace) fep_hwr_prediction_pane_g3

0x0fba,	// (0x0004aad6) fep_hwr_prediction_pane_g4

0x0003,

0xfcca,	// (0x000597e6) fep_hwr_prediction_pane_g

0x5d10,	// (0x0004f82c) fep_vkb_prediction_pane_g1

0x5d1a,	// (0x0004f836) fep_vkb_prediction_pane_g2

0x5d22,	// (0x0004f83e) fep_vkb_prediction_pane_g3

0x5d2a,	// (0x0004f846) fep_vkb_prediction_pane_g4

0x0003,

0xfcd3,	// (0x000597ef) fep_vkb_prediction_pane_g

0x092a,	// (0x0004a446) slider_set_pane_g3

0x093e,	// (0x0004a45a) slider_set_pane_g4

0x0956,	// (0x0004a472) slider_set_pane_g5

0x092a,	// (0x0004a446) slider_set_pane_g6

0x096c,	// (0x0004a488) slider_set_pane_g7

0x3abe,	// (0x0004d5da) slider_form_pane_g3

0x3ac7,	// (0x0004d5e3) slider_form_pane_g4

0x3acf,	// (0x0004d5eb) slider_form_pane_g5

0x3abe,	// (0x0004d5da) slider_form_pane_g6

0xca10,	// (0x0005652c) slider_form_pane_g7

0x4155,	// (0x0004dc71) slider_set_pane_vc_g3

0x415e,	// (0x0004dc7a) slider_set_pane_vc_g4

0x4167,	// (0x0004dc83) slider_set_pane_vc_g5

0x4155,	// (0x0004dc71) slider_set_pane_vc_g6

0x4170,	// (0x0004dc8c) slider_set_pane_vc_g7

0x4348,	// (0x0004de64) slider_form_pane_vc_g1

0x4351,	// (0x0004de6d) slider_form_pane_vc_g2

0x435a,	// (0x0004de76) slider_form_pane_vc_g3

0x4348,	// (0x0004de64) slider_form_pane_vc_g4

0x4363,	// (0x0004de7f) slider_form_pane_vc_g5

0x0004,

0xfa9a,	// (0x000595b6) slider_form_pane_vc_g

0x6ea9,	// (0x000509c5) main_idle_act3_pane

0x5d32,	// (0x0004f84e) ai3_links_pane

0xd14f,	// (0x00056c6b) popup_ai3_data_window_ParamLimits

0xd14f,	// (0x00056c6b) popup_ai3_data_window

0x6ea9,	// (0x000509c5) grid_ai3_links_pane

0xd16d,	// (0x00056c89) cell_ai3_links_pane_ParamLimits

0xd16d,	// (0x00056c89) cell_ai3_links_pane

0x5d73,	// (0x0004f88f) bg_popup_sub_pane_cp11

0x5d80,	// (0x0004f89c) cell_ai3_links_pane_g1

0x6ea9,	// (0x000509c5) bg_popup_sub_pane_cp12

0x5da5,	// (0x0004f8c1) heading_ai3_data_pane

0x5dad,	// (0x0004f8c9) list_ai3_gene_pane

0x5db9,	// (0x0004f8d5) popup_ai3_data_window_g1

0x5dc1,	// (0x0004f8dd) heading_ai3_data_pane_g1

0x5dc9,	// (0x0004f8e5) heading_ai3_data_pane_t1

0x5dd7,	// (0x0004f8f3) list_double_ai3_gene_pane_ParamLimits

0x5dd7,	// (0x0004f8f3) list_double_ai3_gene_pane

0x5de4,	// (0x0004f900) list_single_ai3_gene_pane_ParamLimits

0x5de4,	// (0x0004f900) list_single_ai3_gene_pane

0x4b79,	// (0x0004e695) list_highlight_pane_cp7_ParamLimits

0x4b79,	// (0x0004e695) list_highlight_pane_cp7

0x5df1,	// (0x0004f90d) list_single_a13_gene_pane_t1_ParamLimits

0x5df1,	// (0x0004f90d) list_single_a13_gene_pane_t1

0x5e08,	// (0x0004f924) list_single_ai3_gene_pane_g1

0x5e11,	// (0x0004f92d) list_single_ai3_gene_pane_g2

0x0001,

0xfcdc,	// (0x000597f8) list_single_ai3_gene_pane_g

0x5e19,	// (0x0004f935) list_double_ai3_gene_pane_g1_ParamLimits

0x5e19,	// (0x0004f935) list_double_ai3_gene_pane_g1

0x5e25,	// (0x0004f941) list_double_ai3_gene_pane_t1_ParamLimits

0x5e25,	// (0x0004f941) list_double_ai3_gene_pane_t1

0x5e41,	// (0x0004f95d) list_double_ai3_gene_pane_t2_ParamLimits

0x5e41,	// (0x0004f95d) list_double_ai3_gene_pane_t2

0x5e56,	// (0x0004f972) list_double_ai3_gene_pane_t3_ParamLimits

0x5e56,	// (0x0004f972) list_double_ai3_gene_pane_t3

0x0002,

0xfce1,	// (0x000597fd) list_double_ai3_gene_pane_t_ParamLimits

0xfce1,	// (0x000597fd) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xeed6,	// (0x000589f2) aid_size_min_col_2

0xd139,	// (0x00056c55) aid_size_min_msg_ParamLimits

0xd139,	// (0x00056c55) aid_size_min_msg

0xced8,	// (0x000569f4) fep_vkb_top_text_pane_g2_ParamLimits

0xced8,	// (0x000569f4) fep_vkb_top_text_pane_g2

0x0001,

0xfb4d,	// (0x00059669) fep_vkb_top_text_pane_g_ParamLimits

0xfb4d,	// (0x00059669) fep_vkb_top_text_pane_g

0x6ea9,	// (0x000509c5) main_hc_apps_shell_pane

0x5e73,	// (0x0004f98f) grid_hc_apps_pane_ParamLimits

0x5e73,	// (0x0004f98f) grid_hc_apps_pane

0x5e82,	// (0x0004f99e) list_hc_apps_pane

0x5e8a,	// (0x0004f9a6) scroll_pane_cp37_ParamLimits

0x5e8a,	// (0x0004f9a6) scroll_pane_cp37

0xd187,	// (0x00056ca3) cell_hc_apps_pane_ParamLimits

0xd187,	// (0x00056ca3) cell_hc_apps_pane

0xd251,	// (0x00056d6d) cell_hc_apps_pane_g1_ParamLimits

0xd251,	// (0x00056d6d) cell_hc_apps_pane_g1

0x5f7f,	// (0x0004fa9b) cell_hc_apps_pane_g2_ParamLimits

0x5f7f,	// (0x0004fa9b) cell_hc_apps_pane_g2

0x5f9b,	// (0x0004fab7) cell_hc_apps_pane_g3_ParamLimits

0x5f9b,	// (0x0004fab7) cell_hc_apps_pane_g3

0x0002,

0xfce8,	// (0x00059804) cell_hc_apps_pane_g_ParamLimits

0xfce8,	// (0x00059804) cell_hc_apps_pane_g

0xd27e,	// (0x00056d9a) cell_hc_apps_pane_t1_ParamLimits

0xd27e,	// (0x00056d9a) cell_hc_apps_pane_t1

0x7058,	// (0x00050b74) grid_highlight_pane_cp10_ParamLimits

0x7058,	// (0x00050b74) grid_highlight_pane_cp10

0xd2be,	// (0x00056dda) list_single_hc_apps_pane_ParamLimits

0xd2be,	// (0x00056dda) list_single_hc_apps_pane

0xd2f8,	// (0x00056e14) list_single_hc_apps_pane_g1

0xbfbe,	// (0x00055ada) list_single_hc_apps_pane_g2

0x0001,

0xfcef,	// (0x0005980b) list_single_hc_apps_pane_g

0xbfd7,	// (0x00055af3) list_single_hc_apps_pane_g2_copy1

0x9b97,	// (0x000536b3) list_single_hc_apps_pane_t1

0x6f17,	// (0x00050a33) bg_set_opt_pane_cp_ParamLimits

0xf0ad,	// (0x00058bc9) setting_slider_pane_t1_ParamLimits

0xf0c6,	// (0x00058be2) setting_slider_pane_t2_ParamLimits

0xf0e0,	// (0x00058bfc) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0005907a) setting_slider_pane_t_ParamLimits

0xf0f8,	// (0x00058c14) slider_set_pane_ParamLimits

0x0320,	// (0x00049e3c) control_pane_g5_ParamLimits

0x0320,	// (0x00049e3c) control_pane_g5

0x38eb,	// (0x0004d407) slider_set_pane_g1_ParamLimits

0x091e,	// (0x0004a43a) slider_set_pane_g2_ParamLimits

0x092a,	// (0x0004a446) slider_set_pane_g3_ParamLimits

0x093e,	// (0x0004a45a) slider_set_pane_g4_ParamLimits

0x0956,	// (0x0004a472) slider_set_pane_g5_ParamLimits

0x092a,	// (0x0004a446) slider_set_pane_g6_ParamLimits

0x096c,	// (0x0004a488) slider_set_pane_g7_ParamLimits

0xf964,	// (0x00059480) slider_set_pane_g_ParamLimits

0xaddc,	// (0x000548f8) navi_icon_text_pane_ParamLimits

0xb8f0,	// (0x0005540c) aid_fill_nsta_2_ParamLimits

0xb929,	// (0x00055445) aid_touch_tab_arrow_left_ParamLimits

0xb93f,	// (0x0005545b) aid_touch_tab_arrow_right_ParamLimits

0xb9da,	// (0x000554f6) clock_nsta_pane_ParamLimits

0xc74e,	// (0x0005626a) navi_icon_pane_g1_ParamLimits

0xc75a,	// (0x00056276) navi_text_pane_t1_ParamLimits

0xcc83,	// (0x0005679f) navi_icon_text_pane_g1_ParamLimits

0xcc8f,	// (0x000567ab) navi_icon_text_pane_t1_ParamLimits

0xd2f8,	// (0x00056e14) list_single_hc_apps_pane_g1_ParamLimits

0xbfbe,	// (0x00055ada) list_single_hc_apps_pane_g2_ParamLimits

0xfcef,	// (0x0005980b) list_single_hc_apps_pane_g_ParamLimits

0xbfd7,	// (0x00055af3) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x9b97,	// (0x000536b3) list_single_hc_apps_pane_t1_ParamLimits

0x9d1b,	// (0x00053837) popup_toolbar2_fixed_window_ParamLimits

0x9d1b,	// (0x00053837) popup_toolbar2_fixed_window

0xb855,	// (0x00055371) popup_toolbar2_float_window

0x6ea9,	// (0x000509c5) bg_popup_sub_pane_cp27

0x6055,	// (0x0004fb71) grid_toolbar2_float_pane

0x6ea9,	// (0x000509c5) bg_popup_sub_pane_cp26

0x6055,	// (0x0004fb71) grid_toolbar2_fixed_pane

0xd311,	// (0x00056e2d) cell_toolbar2_fixed_pane_ParamLimits

0xd311,	// (0x00056e2d) cell_toolbar2_fixed_pane

0xd32e,	// (0x00056e4a) cell_toolbar2_fixed_pane_g1

0x6076,	// (0x0004fb92) toolbar2_fixed_button_pane

0x2570,	// (0x0004c08c) toolbar2_fixed_button_pane_g1

0x2578,	// (0x0004c094) toolbar2_fixed_button_pane_g2

0x2580,	// (0x0004c09c) toolbar2_fixed_button_pane_g3

0x2588,	// (0x0004c0a4) toolbar2_fixed_button_pane_g4

0x2590,	// (0x0004c0ac) toolbar2_fixed_button_pane_g5

0x2598,	// (0x0004c0b4) toolbar2_fixed_button_pane_g6

0x25a0,	// (0x0004c0bc) toolbar2_fixed_button_pane_g7

0x25a8,	// (0x0004c0c4) toolbar2_fixed_button_pane_g8

0x25b0,	// (0x0004c0cc) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x00059382) toolbar2_fixed_button_pane_g

0x607e,	// (0x0004fb9a) cell_toolbar2_float_pane_ParamLimits

0x607e,	// (0x0004fb9a) cell_toolbar2_float_pane

0x608f,	// (0x0004fbab) cell_toolbar2_float_pane_g1

0x6076,	// (0x0004fb92) toolbar2_fixed_button_pane_cp

0xcdc0,	// (0x000568dc) fep_vkb_accented_list_pane_ParamLimits

0xcdc0,	// (0x000568dc) fep_vkb_accented_list_pane

0x0db2,	// (0x0004a8ce) bg_popup_fep_shadow_pane_g9

0xe7f5,	// (0x00058311) bg_popup_fep_shadow_pane_cp3

0xa3c1,	// (0x00053edd) list_accented_list_pane

0x6098,	// (0x0004fbb4) list_single_accented_list_pane_ParamLimits

0x6098,	// (0x0004fbb4) list_single_accented_list_pane

0xe7f5,	// (0x00058311) list_highlight_pane_cp10

0x60a9,	// (0x0004fbc5) list_single_accented_list_pane_t1

0xb771,	// (0x0005528d) popup_slider_window_ParamLimits

0xb771,	// (0x0005528d) popup_slider_window

0x5cf1,	// (0x0004f80d) aid_indentation_list_msg

0xd439,	// (0x00056f55) bg_popup_window_pane_cp19

0x61e3,	// (0x0004fcff) popup_slider_window_g1

0x61ff,	// (0x0004fd1b) popup_slider_window_g2

0x621b,	// (0x0004fd37) popup_slider_window_g3

0x0005,

0xfcf4,	// (0x00059810) popup_slider_window_g

0x6277,	// (0x0004fd93) popup_slider_window_t1

0x62eb,	// (0x0004fe07) small_volume_slider_vertical_pane

0x4bb4,	// (0x0004e6d0) small_volume_slider_vertical_pane_g1

0x4bb4,	// (0x0004e6d0) small_volume_slider_vertical_pane_g2

0x6307,	// (0x0004fe23) small_volume_slider_vertical_pane_g3

0x0002,

0xfd06,	// (0x00059822) small_volume_slider_vertical_pane_g

0x9c85,	// (0x000537a1) area_side_right_pane_ParamLimits

0x9c85,	// (0x000537a1) area_side_right_pane

0xbff3,	// (0x00055b0f) aid_size_side_button_ParamLimits

0xbff3,	// (0x00055b0f) aid_size_side_button

0xc00c,	// (0x00055b28) grid_sctrl_middle_pane_ParamLimits

0xc00c,	// (0x00055b28) grid_sctrl_middle_pane

0x102b,	// (0x0004ab47) sctrl_sk_bottom_pane

0x103c,	// (0x0004ab58) sctrl_sk_top_pane

0x104e,	// (0x0004ab6a) aid_touch_sctrl_top

0x7058,	// (0x00050b74) bg_sctrl_sk_pane_ParamLimits

0x7058,	// (0x00050b74) bg_sctrl_sk_pane

0x105b,	// (0x0004ab77) sctrl_sk_top_pane_g1

0x1068,	// (0x0004ab84) sctrl_sk_top_pane_t1

0x104e,	// (0x0004ab6a) aid_touch_sctrl_bottom

0x7058,	// (0x00050b74) bg_sctrl_sk_pane_cp_ParamLimits

0x7058,	// (0x00050b74) bg_sctrl_sk_pane_cp

0x1083,	// (0x0004ab9f) sctrl_sk_bottom_pane_g1

0x1068,	// (0x0004ab84) sctrl_sk_bottom_pane_t1

0xc026,	// (0x00055b42) cell_sctrl_middle_pane_ParamLimits

0xc026,	// (0x00055b42) cell_sctrl_middle_pane

0xc039,	// (0x00055b55) aid_touch_sctrl_middle_ParamLimits

0xc039,	// (0x00055b55) aid_touch_sctrl_middle

0xc046,	// (0x00055b62) bg_sctrl_middle_pane_ParamLimits

0xc046,	// (0x00055b62) bg_sctrl_middle_pane

0x6392,	// (0x0004feae) cell_sctrl_middle_pane_g1_ParamLimits

0x6392,	// (0x0004feae) cell_sctrl_middle_pane_g1

0xc054,	// (0x00055b70) cell_sctrl_middle_pane_g2_ParamLimits

0xc054,	// (0x00055b70) cell_sctrl_middle_pane_g2

0x0001,

0xfd12,	// (0x0005982e) cell_sctrl_middle_pane_g_ParamLimits

0xfd12,	// (0x0005982e) cell_sctrl_middle_pane_g

0x2570,	// (0x0004c08c) bg_sctrl_middle_pane_g1

0x2578,	// (0x0004c094) bg_sctrl_middle_pane_g2

0x2580,	// (0x0004c09c) bg_sctrl_middle_pane_g3

0x2588,	// (0x0004c0a4) bg_sctrl_middle_pane_g4

0x2590,	// (0x0004c0ac) bg_sctrl_middle_pane_g5

0x2598,	// (0x0004c0b4) bg_sctrl_middle_pane_g6

0x25a0,	// (0x0004c0bc) bg_sctrl_middle_pane_g7

0x25a8,	// (0x0004c0c4) bg_sctrl_middle_pane_g8

0x0007,

0xfd17,	// (0x00059833) bg_sctrl_middle_pane_g

0x25b0,	// (0x0004c0cc) bg_sctrl_middle_pane_g8_copy1

0x2570,	// (0x0004c08c) bg_sctrl_sk_pane_g1

0x2578,	// (0x0004c094) bg_sctrl_sk_pane_g2

0x2580,	// (0x0004c09c) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x00059382) bg_sctrl_sk_pane_g

0x7473,	// (0x00050f8f) aid_size_touch_scroll_bar

0x2588,	// (0x0004c0a4) bg_sctrl_sk_pane_g4

0x2590,	// (0x0004c0ac) bg_sctrl_sk_pane_g5

0x2598,	// (0x0004c0b4) bg_sctrl_sk_pane_g6

0x25a0,	// (0x0004c0bc) bg_sctrl_sk_pane_g7

0x25a8,	// (0x0004c0c4) bg_sctrl_sk_pane_g8

0x25b0,	// (0x0004c0cc) bg_sctrl_sk_pane_g9

0x0561,	// (0x0004a07d) popup_fep_china_hwr2_fs_candidate_window

0xb229,	// (0x00054d45) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb229,	// (0x00054d45) popup_fep_china_hwr2_fs_control_window

0x4e2f,	// (0x0004e94b) sctrl_sk_top_pane_g2

0x0001,

0xfd0d,	// (0x00059829) sctrl_sk_top_pane_g

0xd4f1,	// (0x0005700d) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd4f1,	// (0x0005700d) aid_fep_china_hwr2_fs_cell

0xd507,	// (0x00057023) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd507,	// (0x00057023) bg_popup_fep_shadow_pane_cp4

0xd51e,	// (0x0005703a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd51e,	// (0x0005703a) bg_popup_fep_shadow_pane_cp5

0xd530,	// (0x0005704c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd530,	// (0x0005704c) popup_fep_china_hwr2_fs_control_bar_grid

0xd544,	// (0x00057060) popup_fep_china_hwr2_fs_control_funtion_grid

0x6366,	// (0x0004fe82) aid_fep_china_hwr2_fs_candi_cell

0x6ea9,	// (0x000509c5) bg_popup_fep_shadow_pane_cp6

0x6370,	// (0x0004fe8c) popup_fep_china_hwr2_fs_candidate_grid

0xd54c,	// (0x00057068) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd54c,	// (0x00057068) cell_fep_china_hwr2_fs_funtion_grid

0x4bb4,	// (0x0004e6d0) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6392,	// (0x0004feae) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6392,	// (0x0004feae) cell_fep_china_hwr2_fs_funtion_grid_g1

0x63a0,	// (0x0004febc) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x63a0,	// (0x0004febc) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd28,	// (0x00059844) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd28,	// (0x00059844) cell_fep_china_hwr2_fs_funtion_grid_g

0xd564,	// (0x00057080) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd564,	// (0x00057080) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd579,	// (0x00057095) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd579,	// (0x00057095) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2d,	// (0x00059849) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2d,	// (0x00059849) cell_fep_china_hwr2_fs_funtion_grid_t

0x63e7,	// (0x0004ff03) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x63ef,	// (0x0004ff0b) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x63f7,	// (0x0004ff13) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd32,	// (0x0005984e) popup_fep_china_hwr2_fs_control_bar_grid_g

0x63ff,	// (0x0004ff1b) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x63ff,	// (0x0004ff1b) cell_fep_china_hwr2_fs_candidate_grid

0x641e,	// (0x0004ff3a) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6426,	// (0x0004ff42) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4bb4,	// (0x0004e6d0) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4bb4,	// (0x0004e6d0) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb52,	// (0x0005966e) cell_fep_china_hwr2_fs_candidate_grid_g

0x642e,	// (0x0004ff4a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x214c,	// (0x0004bc68) clock_nsta_pane_cp_24_ParamLimits

0x214c,	// (0x0004bc68) clock_nsta_pane_cp_24

0x21cc,	// (0x0004bce8) indicator_nsta_pane_cp_24_ParamLimits

0x21cc,	// (0x0004bce8) indicator_nsta_pane_cp_24

0x3243,	// (0x0004cd5f) heading_pane_g1

0x0001,

0xf8cb,	// (0x000593e7) heading_pane_g

0x3ce5,	// (0x0004d801) grid_sct_catagory_button_pane

0x3d17,	// (0x0004d833) scroll_pane_cp5_ParamLimits

0x4800,	// (0x0004e31c) button_value_adjust_pane_cp5_ParamLimits

0x4800,	// (0x0004e31c) button_value_adjust_pane_cp5

0x48e5,	// (0x0004e401) form2_midp_time_pane_ParamLimits

0x643c,	// (0x0004ff58) cell_sct_catagory_button_pane_ParamLimits

0x643c,	// (0x0004ff58) cell_sct_catagory_button_pane

0x4b79,	// (0x0004e695) bg_button_pane_cp01_ParamLimits

0x4b79,	// (0x0004e695) bg_button_pane_cp01

0x4bb4,	// (0x0004e6d0) cell_sct_catagory_button_pane_g1

0xb7f2,	// (0x0005530e) popup_tb_extension_window

0xd595,	// (0x000570b1) aid_size_cell_ext_ParamLimits

0xd595,	// (0x000570b1) aid_size_cell_ext

0x72b5,	// (0x00050dd1) bg_tb_trans_pane_cp1_ParamLimits

0x72b5,	// (0x00050dd1) bg_tb_trans_pane_cp1

0xd5bb,	// (0x000570d7) grid_tb_ext_pane_ParamLimits

0xd5bb,	// (0x000570d7) grid_tb_ext_pane

0xd5fb,	// (0x00057117) cell_tb_ext_pane_ParamLimits

0xd5fb,	// (0x00057117) cell_tb_ext_pane

0xd623,	// (0x0005713f) cell_tb_ext_pane_g1_ParamLimits

0xd623,	// (0x0005713f) cell_tb_ext_pane_g1

0x64d2,	// (0x0004ffee) cell_tb_ext_pane_t1

0x7058,	// (0x00050b74) list_highlight_pane_cp11_ParamLimits

0x7058,	// (0x00050b74) list_highlight_pane_cp11

0x9d30,	// (0x0005384c) popup_uni_indicator_window_ParamLimits

0x9d30,	// (0x0005384c) popup_uni_indicator_window

0xa264,	// (0x00053d80) bg_popup_sub_pane_cp14

0x64ed,	// (0x00050009) list_uniindi_pane

0x64f9,	// (0x00050015) uniindi_top_pane

0x7058,	// (0x00050b74) bg_uniindi_top_pane

0x651a,	// (0x00050036) uniindi_top_pane_g1

0x6530,	// (0x0005004c) uniindi_top_pane_g2

0x0003,

0xfd39,	// (0x00059855) uniindi_top_pane_g

0x655a,	// (0x00050076) uniindi_top_pane_t1

0x6586,	// (0x000500a2) list_single_uniindi_pane_ParamLimits

0x6586,	// (0x000500a2) list_single_uniindi_pane

0x4bb4,	// (0x0004e6d0) bg_uniindi_top_pane_g1

0x6598,	// (0x000500b4) list_single_uniindi_pane_g1

0x65ab,	// (0x000500c7) list_single_uniindi_pane_t1

0x6ea9,	// (0x000509c5) control_bg_pane

0x65d0,	// (0x000500ec) bg_sctrl_sk_pane_cp1

0x65d9,	// (0x000500f5) bg_sctrl_sk_pane_cp2

0x65e2,	// (0x000500fe) control_bg_pane_g1

0x65eb,	// (0x00050107) control_bg_pane_g2

0x0001,

0xfd42,	// (0x0005985e) control_bg_pane_g

0x4627,	// (0x0004e143) cell_indicator_nsta_pane_g1_ParamLimits

0xcbdc,	// (0x000566f8) cell_indicator_nsta_pane_g2_ParamLimits

0xfab6,	// (0x000595d2) cell_indicator_nsta_pane_g_ParamLimits

0xed59,	// (0x00058875) form2_midp_time_pane_t1_ParamLimits

0x8a11,	// (0x0005252d) main_idle_act4_pane_ParamLimits

0x8a11,	// (0x0005252d) main_idle_act4_pane

0xb7f2,	// (0x0005530e) popup_tb_extension_window_ParamLimits

0xd5e3,	// (0x000570ff) tb_ext_find_pane_ParamLimits

0xd5e3,	// (0x000570ff) tb_ext_find_pane

0x65f4,	// (0x00050110) ai_gene_pane_1_cp1

0xe87b,	// (0x00058397) ai_gene_pane_2_cp1

0x65fc,	// (0x00050118) list_single_idle_plugin_calendar_pane

0x6605,	// (0x00050121) list_single_idle_plugin_notification_pane

0x660e,	// (0x0005012a) list_single_idle_plugin_player_pane

0xd640,	// (0x0005715c) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd640,	// (0x0005715c) list_single_idle_plugin_shortcut_pane

0xd668,	// (0x00057184) main_idle_act4_pane_t1

0xd680,	// (0x0005719c) main_idle_act4_pane_t2

0x0001,

0xfd47,	// (0x00059863) main_idle_act4_pane_t

0xd698,	// (0x000571b4) middle_sk_idle_act4_pane_ParamLimits

0xd698,	// (0x000571b4) middle_sk_idle_act4_pane

0xd6b4,	// (0x000571d0) popup_clock_digital_analogue_window_cp2

0xd6db,	// (0x000571f7) shortcut_wheel_idle_act4_pane_ParamLimits

0xd6db,	// (0x000571f7) shortcut_wheel_idle_act4_pane

0x4bb4,	// (0x0004e6d0) shortcut_wheel_idle_act4_pane_g1

0x4bb4,	// (0x0004e6d0) shortcut_wheel_idle_act4_pane_g2

0x4bb4,	// (0x0004e6d0) shortcut_wheel_idle_act4_pane_g3

0x4bb4,	// (0x0004e6d0) shortcut_wheel_idle_act4_pane_g4

0x4bb4,	// (0x0004e6d0) shortcut_wheel_idle_act4_pane_g5

0x66a1,	// (0x000501bd) shortcut_wheel_idle_act4_pane_g6

0x66a9,	// (0x000501c5) shortcut_wheel_idle_act4_pane_g7

0x66b1,	// (0x000501cd) shortcut_wheel_idle_act4_pane_g8

0x66b9,	// (0x000501d5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4c,	// (0x00059868) shortcut_wheel_idle_act4_pane_g

0xcd98,	// (0x000568b4) middle_sk_idle_act4_pane_g1_ParamLimits

0xcd98,	// (0x000568b4) middle_sk_idle_act4_pane_g1

0xd758,	// (0x00057274) middle_sk_idle_act4_pane_g2_ParamLimits

0xd758,	// (0x00057274) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6f,	// (0x0005988b) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6f,	// (0x0005988b) middle_sk_idle_act4_pane_g

0xd770,	// (0x0005728c) middle_sk_idle_act4_pane_t1_ParamLimits

0xd770,	// (0x0005728c) middle_sk_idle_act4_pane_t1

0xd79f,	// (0x000572bb) grid_ai_shortcut_pane_ParamLimits

0xd79f,	// (0x000572bb) grid_ai_shortcut_pane

0xd7bc,	// (0x000572d8) list_highlight_pane_cp16_ParamLimits

0xd7bc,	// (0x000572d8) list_highlight_pane_cp16

0xd7c9,	// (0x000572e5) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd7c9,	// (0x000572e5) list_single_idle_plugin_shortcut_pane_g1

0xd7d5,	// (0x000572f1) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd7d5,	// (0x000572f1) list_single_idle_plugin_shortcut_pane_g2

0xd7f3,	// (0x0005730f) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd7f3,	// (0x0005730f) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd74,	// (0x00059890) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd74,	// (0x00059890) list_single_idle_plugin_shortcut_pane_g

0xd808,	// (0x00057324) cell_ai_shortcut_pane_ParamLimits

0xd808,	// (0x00057324) cell_ai_shortcut_pane

0xd81e,	// (0x0005733a) cell_ai_shortcut_pane_g1_ParamLimits

0xd81e,	// (0x0005733a) cell_ai_shortcut_pane_g1

0x65f4,	// (0x00050110) ai_gene_pane_1_cp2

0x67ea,	// (0x00050306) ai_gene_pane_2_cp2

0x67f2,	// (0x0005030e) list_highlight_pane_cp15

0x67fb,	// (0x00050317) list_single_idle_plugin_calendar_pane_g1

0x67f2,	// (0x0005030e) list_highlight_pane_cp17

0x6803,	// (0x0005031f) list_single_idle_plugin_calendar_pane_g1_copy1

0x680b,	// (0x00050327) list_single_idle_plugin_player_pane_g1

0x3f4c,	// (0x0004da68) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7b,	// (0x00059897) list_single_idle_plugin_player_pane_g

0x6813,	// (0x0005032f) list_single_idle_plugin_player_pane_t1

0x6821,	// (0x0005033d) list_single_idle_plugin_player_pane_t2

0x682f,	// (0x0005034b) list_single_idle_plugin_player_pane_t3

0x683d,	// (0x00050359) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd80,	// (0x0005989c) list_single_idle_plugin_player_pane_t

0x684b,	// (0x00050367) wait_bar_pane_cp15

0x6853,	// (0x0005036f) grid_ai_notification_pane

0x3f4c,	// (0x0004da68) list_single_idle_plugin_notification_pane_g1

0xd840,	// (0x0005735c) cell_ai_notification_pane_ParamLimits

0xd840,	// (0x0005735c) cell_ai_notification_pane

0x6869,	// (0x00050385) cell_ai_notification_pane_g1

0x6871,	// (0x0005038d) cell_ai_notification_pane_t1

0xd84d,	// (0x00057369) tb_ext_find_button_pane

0xd855,	// (0x00057371) tb_ext_find_pane_g1

0xd85d,	// (0x00057379) tb_ext_find_pane_t1

0xa916,	// (0x00054432) tb_ext_find_button_pane_g1

0x689d,	// (0x000503b9) tb_ext_find_button_pane_g2

0x0001,

0xfd89,	// (0x000598a5) tb_ext_find_button_pane_g

0xd668,	// (0x00057184) main_idle_act4_pane_t1_ParamLimits

0xd680,	// (0x0005719c) main_idle_act4_pane_t2_ParamLimits

0xfd47,	// (0x00059863) main_idle_act4_pane_t_ParamLimits

0xd6b4,	// (0x000571d0) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd6cb,	// (0x000571e7) sat_plugin_idle_act4_pane_ParamLimits

0xd6cb,	// (0x000571e7) sat_plugin_idle_act4_pane

0xd86b,	// (0x00057387) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd86b,	// (0x00057387) sat_plugin_idle_act4_pane_t1

0xd883,	// (0x0005739f) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd883,	// (0x0005739f) sat_plugin_idle_act4_pane_t2

0xd89b,	// (0x000573b7) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd89b,	// (0x000573b7) sat_plugin_idle_act4_pane_t3

0xd8b3,	// (0x000573cf) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd8b3,	// (0x000573cf) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8e,	// (0x000598aa) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8e,	// (0x000598aa) sat_plugin_idle_act4_pane_t

0xf04f,	// (0x00058b6b) popup_battery_window_ParamLimits

0xf04f,	// (0x00058b6b) popup_battery_window

0x7058,	// (0x00050b74) bg_popup_sub_pane_cp25_ParamLimits

0x7058,	// (0x00050b74) bg_popup_sub_pane_cp25

0x68f2,	// (0x0005040e) popup_battery_window_g1_ParamLimits

0x68f2,	// (0x0005040e) popup_battery_window_g1

0x68fe,	// (0x0005041a) popup_battery_window_t1_ParamLimits

0x68fe,	// (0x0005041a) popup_battery_window_t1

0x6910,	// (0x0005042c) popup_battery_window_t2_ParamLimits

0x6910,	// (0x0005042c) popup_battery_window_t2

0x0001,

0xfd97,	// (0x000598b3) popup_battery_window_t_ParamLimits

0xfd97,	// (0x000598b3) popup_battery_window_t

0xae95,	// (0x000549b1) midp_canvas_pane_ParamLimits

0xaef0,	// (0x00054a0c) midp_keypad_pane_ParamLimits

0xaef0,	// (0x00054a0c) midp_keypad_pane

0x04b3,	// (0x00049fcf) main_midp_pane_ParamLimits

0x46b3,	// (0x0004e1cf) signal_pane_g2_cp_ParamLimits

0xd8cb,	// (0x000573e7) aid_size_cell_midp_keypad_ParamLimits

0xd8cb,	// (0x000573e7) aid_size_cell_midp_keypad

0xd8e9,	// (0x00057405) midp_keyp_game_grid_pane_ParamLimits

0xd8e9,	// (0x00057405) midp_keyp_game_grid_pane

0xd910,	// (0x0005742c) midp_keyp_rocker_pane_ParamLimits

0xd910,	// (0x0005742c) midp_keyp_rocker_pane

0xd94f,	// (0x0005746b) midp_keyp_sk_left_pane_ParamLimits

0xd94f,	// (0x0005746b) midp_keyp_sk_left_pane

0xd9a3,	// (0x000574bf) midp_keyp_sk_right_pane_ParamLimits

0xd9a3,	// (0x000574bf) midp_keyp_sk_right_pane

0x6ea9,	// (0x000509c5) bg_button_pane_cp03

0xd9f7,	// (0x00057513) midp_keyp_sk_left_pane_g1

0x6ea9,	// (0x000509c5) bg_button_pane_cp04

0xd9f7,	// (0x00057513) midp_keyp_sk_right_pane_g1

0x4bb4,	// (0x0004e6d0) midp_keyp_rocker_pane_g1

0xda00,	// (0x0005751c) keyp_game_cell_pane_ParamLimits

0xda00,	// (0x0005751c) keyp_game_cell_pane

0x6ea9,	// (0x000509c5) bg_button_pane_cp02

0xda26,	// (0x00057542) keyp_game_cell_pane_g1

0x9cc7,	// (0x000537e3) popup_fep_vkb2_window_ParamLimits

0x9cc7,	// (0x000537e3) popup_fep_vkb2_window

0xc060,	// (0x00055b7c) aid_size_cell_vkb2_ParamLimits

0xc060,	// (0x00055b7c) aid_size_cell_vkb2

0xc096,	// (0x00055bb2) popup_fep_vkb2_window_g1_ParamLimits

0xc096,	// (0x00055bb2) popup_fep_vkb2_window_g1

0xc0e6,	// (0x00055c02) vkb2_area_bottom_pane_ParamLimits

0xc0e6,	// (0x00055c02) vkb2_area_bottom_pane

0xc142,	// (0x00055c5e) vkb2_area_keypad_pane_ParamLimits

0xc142,	// (0x00055c5e) vkb2_area_keypad_pane

0xc190,	// (0x00055cac) vkb2_area_top_pane_ParamLimits

0xc190,	// (0x00055cac) vkb2_area_top_pane

0xc216,	// (0x00055d32) vkb2_top_entry_pane_ParamLimits

0xc216,	// (0x00055d32) vkb2_top_entry_pane

0xc243,	// (0x00055d5f) vkb2_top_grid_left_pane_ParamLimits

0xc243,	// (0x00055d5f) vkb2_top_grid_left_pane

0xc263,	// (0x00055d7f) vkb2_top_grid_right_pane_ParamLimits

0xc263,	// (0x00055d7f) vkb2_top_grid_right_pane

0x12ef,	// (0x0004ae0b) vkb2_cell_keypad_pane_ParamLimits

0x12ef,	// (0x0004ae0b) vkb2_cell_keypad_pane

0xc2a9,	// (0x00055dc5) vkb2_area_bottom_grid_pane_ParamLimits

0xc2a9,	// (0x00055dc5) vkb2_area_bottom_grid_pane

0xc2d3,	// (0x00055def) vkb2_area_bottom_pane_g1_ParamLimits

0xc2d3,	// (0x00055def) vkb2_area_bottom_pane_g1

0xc2f9,	// (0x00055e15) vkb2_area_bottom_pane_g2_ParamLimits

0xc2f9,	// (0x00055e15) vkb2_area_bottom_pane_g2

0xc32a,	// (0x00055e46) vkb2_area_bottom_pane_g3_ParamLimits

0xc32a,	// (0x00055e46) vkb2_area_bottom_pane_g3

0x0002,

0xfd9c,	// (0x000598b8) vkb2_area_bottom_pane_g_ParamLimits

0xfd9c,	// (0x000598b8) vkb2_area_bottom_pane_g

0x1499,	// (0x0004afb5) vkb2_top_cell_left_pane_ParamLimits

0x1499,	// (0x0004afb5) vkb2_top_cell_left_pane

0xda2f,	// (0x0005754b) vkb2_top_entry_pane_g1_ParamLimits

0xda2f,	// (0x0005754b) vkb2_top_entry_pane_g1

0xda3d,	// (0x00057559) vkb2_top_entry_pane_t1_ParamLimits

0xda3d,	// (0x00057559) vkb2_top_entry_pane_t1

0x6ab3,	// (0x000505cf) vkb2_top_entry_pane_t2_ParamLimits

0x6ab3,	// (0x000505cf) vkb2_top_entry_pane_t2

0x6ae5,	// (0x00050601) vkb2_top_entry_pane_t3_ParamLimits

0x6ae5,	// (0x00050601) vkb2_top_entry_pane_t3

0x0002,

0xfda3,	// (0x000598bf) vkb2_top_entry_pane_t_ParamLimits

0xfda3,	// (0x000598bf) vkb2_top_entry_pane_t

0xc394,	// (0x00055eb0) vkb2_top_grid_right_pane_g1_ParamLimits

0xc394,	// (0x00055eb0) vkb2_top_grid_right_pane_g1

0x14fc,	// (0x0004b018) vkb2_top_grid_right_pane_g2_ParamLimits

0x14fc,	// (0x0004b018) vkb2_top_grid_right_pane_g2

0x1514,	// (0x0004b030) vkb2_top_grid_right_pane_g3_ParamLimits

0x1514,	// (0x0004b030) vkb2_top_grid_right_pane_g3

0xc3aa,	// (0x00055ec6) vkb2_top_grid_right_pane_g4_ParamLimits

0xc3aa,	// (0x00055ec6) vkb2_top_grid_right_pane_g4

0x0003,

0xfdaa,	// (0x000598c6) vkb2_top_grid_right_pane_g_ParamLimits

0xfdaa,	// (0x000598c6) vkb2_top_grid_right_pane_g

0x1542,	// (0x0004b05e) vkb2_top_cell_left_pane_g1

0x1559,	// (0x0004b075) vkb2_cell_keypad_pane_g1_ParamLimits

0x1559,	// (0x0004b075) vkb2_cell_keypad_pane_g1

0x6b09,	// (0x00050625) vkb2_cell_keypad_pane_t1_ParamLimits

0x6b09,	// (0x00050625) vkb2_cell_keypad_pane_t1

0x1567,	// (0x0004b083) vkb2_cell_bottom_grid_pane_ParamLimits

0x1567,	// (0x0004b083) vkb2_cell_bottom_grid_pane

0x15a0,	// (0x0004b0bc) vkb2_cell_bottom_grid_pane_g1

0xd6fc,	// (0x00057218) aid_call2_pane_cp02

0xd704,	// (0x00057220) aid_call_pane_cp02

0xd70c,	// (0x00057228) clock_digital_number_pane_cp10

0xd714,	// (0x00057230) clock_digital_number_pane_cp11

0xd71c,	// (0x00057238) clock_digital_number_pane_cp12

0xd724,	// (0x00057240) clock_digital_number_pane_cp13

0xd72c,	// (0x00057248) clock_digital_separator_pane_cp10

0xa916,	// (0x00054432) popup_clock_digital_analogue_window_cp2_g1

0xa916,	// (0x00054432) popup_clock_digital_analogue_window_cp2_g2

0xd734,	// (0x00057250) popup_clock_digital_analogue_window_cp2_g3

0xa916,	// (0x00054432) popup_clock_digital_analogue_window_cp2_g4

0xd734,	// (0x00057250) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5f,	// (0x0005987b) popup_clock_digital_analogue_window_cp2_g

0xd73c,	// (0x00057258) popup_clock_digital_analogue_window_cp2_t1

0xd74a,	// (0x00057266) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6a,	// (0x00059886) popup_clock_digital_analogue_window_cp2_t

0x4bb4,	// (0x0004e6d0) clock_digital_number_pane_cp10_g1

0x4bb4,	// (0x0004e6d0) clock_digital_number_pane_cp10_g2

0x0001,

0xfb52,	// (0x0005966e) clock_digital_number_pane_cp10_g

0x4bb4,	// (0x0004e6d0) clock_digital_separator_pane_cp10_g1

0x4bb4,	// (0x0004e6d0) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb52,	// (0x0005966e) clock_digital_separator_pane_cp10_g

0x653c,	// (0x00050058) uniindi_top_pane_g3

0x654d,	// (0x00050069) uniindi_top_pane_g4

0x137a,	// (0x0004ae96) vkb2_row_keypad_pane_ParamLimits

0x137a,	// (0x0004ae96) vkb2_row_keypad_pane

0x15bc,	// (0x0004b0d8) vkb2_cell_t_keypad_pane_ParamLimits

0x15bc,	// (0x0004b0d8) vkb2_cell_t_keypad_pane

0x15cc,	// (0x0004b0e8) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x15cc,	// (0x0004b0e8) vkb2_cell_t_keypad_pane_cp08

0x15e1,	// (0x0004b0fd) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x15e1,	// (0x0004b0fd) vkb2_cell_t_keypad_pane_cp09

0x15f5,	// (0x0004b111) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x15f5,	// (0x0004b111) vkb2_cell_t_keypad_pane_cp01

0x1606,	// (0x0004b122) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1606,	// (0x0004b122) vkb2_cell_t_keypad_pane_cp02

0x1617,	// (0x0004b133) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1617,	// (0x0004b133) vkb2_cell_t_keypad_pane_cp03

0x1628,	// (0x0004b144) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1628,	// (0x0004b144) vkb2_cell_t_keypad_pane_cp04

0x1639,	// (0x0004b155) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1639,	// (0x0004b155) vkb2_cell_t_keypad_pane_cp05

0x164a,	// (0x0004b166) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x164a,	// (0x0004b166) vkb2_cell_t_keypad_pane_cp06

0x165d,	// (0x0004b179) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x165d,	// (0x0004b179) vkb2_cell_t_keypad_pane_cp07

0x1672,	// (0x0004b18e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1672,	// (0x0004b18e) vkb2_cell_t_keypad_pane_cp10

0x4e2f,	// (0x0004e94b) vkb2_cell_t_keypad_pane_g1

0x6b20,	// (0x0005063c) vkb2_cell_t_keypad_pane_t1

0x6ea9,	// (0x000509c5) popup_grid_graphic2_window

0xda76,	// (0x00057592) aid_size_cell_graphic2_ParamLimits

0xda76,	// (0x00057592) aid_size_cell_graphic2

0xdab4,	// (0x000575d0) bg_popup_window_pane_cp21_ParamLimits

0xdab4,	// (0x000575d0) bg_popup_window_pane_cp21

0xdac2,	// (0x000575de) graphic2_pages_pane_ParamLimits

0xdac2,	// (0x000575de) graphic2_pages_pane

0xdb1a,	// (0x00057636) grid_graphic2_control_pane_ParamLimits

0xdb1a,	// (0x00057636) grid_graphic2_control_pane

0xdb62,	// (0x0005767e) grid_graphic2_pane_ParamLimits

0xdb62,	// (0x0005767e) grid_graphic2_pane

0xdbed,	// (0x00057709) cell_graphic2_pane

0x6ea9,	// (0x000509c5) main_comp_mode_pane

0x5dad,	// (0x0004f8c9) list_ai3_gene_pane_ParamLimits

0xd439,	// (0x00056f55) bg_popup_window_pane_cp19_ParamLimits

0x6181,	// (0x0004fc9d) bg_touch_area_indi_pane_ParamLimits

0x6181,	// (0x0004fc9d) bg_touch_area_indi_pane

0x6197,	// (0x0004fcb3) bg_touch_area_indi_pane_cp01_ParamLimits

0x6197,	// (0x0004fcb3) bg_touch_area_indi_pane_cp01

0x61af,	// (0x0004fccb) bg_touch_area_indi_pane_cp02_ParamLimits

0x61af,	// (0x0004fccb) bg_touch_area_indi_pane_cp02

0x61c9,	// (0x0004fce5) bg_touch_area_indi_pane_cp03_ParamLimits

0x61c9,	// (0x0004fce5) bg_touch_area_indi_pane_cp03

0x61e3,	// (0x0004fcff) popup_slider_window_g1_ParamLimits

0x61ff,	// (0x0004fd1b) popup_slider_window_g2_ParamLimits

0x621b,	// (0x0004fd37) popup_slider_window_g3_ParamLimits

0xfcf4,	// (0x00059810) popup_slider_window_g_ParamLimits

0x6277,	// (0x0004fd93) popup_slider_window_t1_ParamLimits

0x62eb,	// (0x0004fe07) small_volume_slider_vertical_pane_ParamLimits

0xdbed,	// (0x00057709) cell_graphic2_pane_ParamLimits

0xdc50,	// (0x0005776c) bg_button_pane_cp10_ParamLimits

0xdc50,	// (0x0005776c) bg_button_pane_cp10

0xdc63,	// (0x0005777f) bg_button_pane_cp11_ParamLimits

0xdc63,	// (0x0005777f) bg_button_pane_cp11

0xdc76,	// (0x00057792) graphic2_pages_pane_g1_ParamLimits

0xdc76,	// (0x00057792) graphic2_pages_pane_g1

0xdc91,	// (0x000577ad) graphic2_pages_pane_g2_ParamLimits

0xdc91,	// (0x000577ad) graphic2_pages_pane_g2

0x0001,

0xfdb8,	// (0x000598d4) graphic2_pages_pane_g_ParamLimits

0xfdb8,	// (0x000598d4) graphic2_pages_pane_g

0xdca9,	// (0x000577c5) graphic2_pages_pane_t1_ParamLimits

0xdca9,	// (0x000577c5) graphic2_pages_pane_t1

0xdcc1,	// (0x000577dd) cell_graphic2_control_pane_ParamLimits

0xdcc1,	// (0x000577dd) cell_graphic2_control_pane

0xdcf5,	// (0x00057811) cell_graphic2_pane_g1_ParamLimits

0xdcf5,	// (0x00057811) cell_graphic2_pane_g1

0xcda6,	// (0x000568c2) cell_graphic2_pane_g2_ParamLimits

0xcda6,	// (0x000568c2) cell_graphic2_pane_g2

0xdd02,	// (0x0005781e) cell_graphic2_pane_g3_ParamLimits

0xdd02,	// (0x0005781e) cell_graphic2_pane_g3

0xcdb3,	// (0x000568cf) cell_graphic2_pane_g4_ParamLimits

0xcdb3,	// (0x000568cf) cell_graphic2_pane_g4

0xdd0f,	// (0x0005782b) cell_graphic2_pane_g5_ParamLimits

0xdd0f,	// (0x0005782b) cell_graphic2_pane_g5

0x0004,

0xfdbd,	// (0x000598d9) cell_graphic2_pane_g_ParamLimits

0xfdbd,	// (0x000598d9) cell_graphic2_pane_g

0xdd2f,	// (0x0005784b) cell_graphic2_pane_t1_ParamLimits

0xdd2f,	// (0x0005784b) cell_graphic2_pane_t1

0x3237,	// (0x0004cd53) grid_highlight_pane_cp11_ParamLimits

0x3237,	// (0x0004cd53) grid_highlight_pane_cp11

0x7058,	// (0x00050b74) bg_button_pane_cp05

0xdd64,	// (0x00057880) cell_graphic2_control_pane_g1

0x4bb4,	// (0x0004e6d0) bg_touch_area_indi_pane_g1

0x6dfa,	// (0x00050916) aid_cmod_rocker_key_size

0x6e04,	// (0x00050920) aid_cmode_itu_key_size

0x6e0e,	// (0x0005092a) main_cmode_video_pane

0x6e18,	// (0x00050934) main_comp_mode_itu_pane

0x6e24,	// (0x00050940) main_comp_mode_rocker_pane

0x6e30,	// (0x0005094c) cell_cmode_rocker_pane_ParamLimits

0x6e30,	// (0x0005094c) cell_cmode_rocker_pane

0x6e44,	// (0x00050960) cell_cmode_itu_pane_ParamLimits

0x6e44,	// (0x00050960) cell_cmode_itu_pane

0xa264,	// (0x00053d80) bg_button_pane_cp06_ParamLimits

0xa264,	// (0x00053d80) bg_button_pane_cp06

0x4e2f,	// (0x0004e94b) cell_cmode_rocker_pane_g1_ParamLimits

0x4e2f,	// (0x0004e94b) cell_cmode_rocker_pane_g1

0x6392,	// (0x0004feae) cell_cmode_rocker_pane_g2_ParamLimits

0x6392,	// (0x0004feae) cell_cmode_rocker_pane_g2

0x0001,

0xfdcd,	// (0x000598e9) cell_cmode_rocker_pane_g_ParamLimits

0xfdcd,	// (0x000598e9) cell_cmode_rocker_pane_g

0x6ea9,	// (0x000509c5) bg_button_pane_cp07

0x6e5b,	// (0x00050977) cell_cmode_itu_pane_g1

0x6e64,	// (0x00050980) cell_cmode_itu_pane_t1

0x6e72,	// (0x0005098e) cell_cmode_itu_pane_t2

0x0001,

0xfdd2,	// (0x000598ee) cell_cmode_itu_pane_t

0x65c0,	// (0x000500dc) aid_touch_ctrl_left

0x65c8,	// (0x000500e4) aid_touch_ctrl_right

0x6ea9,	// (0x000509c5) compa_mode_pane

0xdd8a,	// (0x000578a6) aid_cmod_rocker_key_size_cp

0xdd94,	// (0x000578b0) aid_cmode_itu_key_size_cp

0x74f5,	// (0x00051011) compa_mode_pane_g1

0x74fd,	// (0x00051019) compa_mode_pane_g2

0x7505,	// (0x00051021) compa_mode_pane_g3

0x0002,

0xfdd7,	// (0x000598f3) compa_mode_pane_g

0xdd9e,	// (0x000578ba) main_comp_mode_itu_pane_cp

0xdda6,	// (0x000578c2) main_comp_mode_rocker_pane_cp

0xddae,	// (0x000578ca) cell_cmode_itu_pane_cp_ParamLimits

0xddae,	// (0x000578ca) cell_cmode_itu_pane_cp

0xddc3,	// (0x000578df) cell_cmode_rocker_pane_cp_ParamLimits

0xddc3,	// (0x000578df) cell_cmode_rocker_pane_cp

0xa264,	// (0x00053d80) bg_button_pane_cp06_cp_ParamLimits

0xa264,	// (0x00053d80) bg_button_pane_cp06_cp

0x4e2f,	// (0x0004e94b) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4e2f,	// (0x0004e94b) cell_cmode_rocker_pane_g1_cp

0x4bb4,	// (0x0004e6d0) cell_cmode_rocker_pane_g2_cp

0x6ea9,	// (0x000509c5) bg_button_pane_cp07_cp

0xddd5,	// (0x000578f1) cell_cmode_itu_pane_g1_cp

0xddde,	// (0x000578fa) cell_cmode_itu_pane_t1_cp

0xddde,	// (0x000578fa) cell_cmode_itu_pane_t2_cp

0xca08,	// (0x00056524) settings_code_pane_cp2

0x6f17,	// (0x00050a33) bg_popup_window_pane_cp3_ParamLimits

0x7246,	// (0x00050d62) heading_pane_cp3_ParamLimits

0x7252,	// (0x00050d6e) listscroll_popup_graphic_pane_ParamLimits

0x0b80,	// (0x0004a69c) fep_hwr_aid_pane_ParamLimits

0x104e,	// (0x0004ab6a) aid_touch_sctrl_top_ParamLimits

0x105b,	// (0x0004ab77) sctrl_sk_top_pane_g1_ParamLimits

0x4e2f,	// (0x0004e94b) sctrl_sk_top_pane_g2_ParamLimits

0xfd0d,	// (0x00059829) sctrl_sk_top_pane_g_ParamLimits

0x1068,	// (0x0004ab84) sctrl_sk_top_pane_t1_ParamLimits

0x104e,	// (0x0004ab6a) aid_touch_sctrl_bottom_ParamLimits

0x1068,	// (0x0004ab84) sctrl_sk_bottom_pane_t1_ParamLimits

0x6506,	// (0x00050022) aid_area_touch_clock

0xc1d8,	// (0x00055cf4) aid_vkb2_area_top_pane_cell_ParamLimits

0xc1d8,	// (0x00055cf4) aid_vkb2_area_top_pane_cell

0xc283,	// (0x00055d9f) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc283,	// (0x00055d9f) aid_vkb2_area_bottom_pane_cell

0x6a6b,	// (0x00050587) popup_char_count_window

0x755b,	// (0x00051077) popup_char_count_window_g1

0x7564,	// (0x00051080) popup_char_count_window_g2

0x756d,	// (0x00051089) popup_char_count_window_g3

0x0002,

0xfdde,	// (0x000598fa) popup_char_count_window_g

0x7576,	// (0x00051092) popup_char_count_window_t1

0x110b,	// (0x0004ac27) popup_fep_char_preview_window_ParamLimits

0x110b,	// (0x0004ac27) popup_fep_char_preview_window

0xc1f8,	// (0x00055d14) vkb2_top_candi_pane_ParamLimits

0xc1f8,	// (0x00055d14) vkb2_top_candi_pane

0xddec,	// (0x00057908) cell_vkb2_top_candi_pane_ParamLimits

0xddec,	// (0x00057908) cell_vkb2_top_candi_pane

0x2bc0,	// (0x0004c6dc) bg_popup_fep_char_preview_window_ParamLimits

0x2bc0,	// (0x0004c6dc) bg_popup_fep_char_preview_window

0x1687,	// (0x0004b1a3) popup_fep_char_preview_window_t1_ParamLimits

0x1687,	// (0x0004b1a3) popup_fep_char_preview_window_t1

0x75d5,	// (0x000510f1) bg_popup_fep_char_preview_window_g1

0x75dd,	// (0x000510f9) bg_popup_fep_char_preview_window_g2

0x75e5,	// (0x00051101) bg_popup_fep_char_preview_window_g3

0x75ed,	// (0x00051109) bg_popup_fep_char_preview_window_g4

0x75f5,	// (0x00051111) bg_popup_fep_char_preview_window_g5

0x16c1,	// (0x0004b1dd) bg_popup_fep_char_preview_window_g6

0x75fd,	// (0x00051119) bg_popup_fep_char_preview_window_g7

0x7605,	// (0x00051121) bg_popup_fep_char_preview_window_g8

0x760d,	// (0x00051129) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde5,	// (0x00059901) bg_popup_fep_char_preview_window_g

0x4e2f,	// (0x0004e94b) cell_vkb2_top_candi_pane_g1_ParamLimits

0x4e2f,	// (0x0004e94b) cell_vkb2_top_candi_pane_g1

0x5170,	// (0x0004ec8c) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5170,	// (0x0004ec8c) cell_vkb2_top_candi_pane_g2

0x5191,	// (0x0004ecad) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5191,	// (0x0004ecad) cell_vkb2_top_candi_pane_g3

0x16c9,	// (0x0004b1e5) cell_vkb2_top_candi_pane_g4_ParamLimits

0x16c9,	// (0x0004b1e5) cell_vkb2_top_candi_pane_g4

0x6e80,	// (0x0005099c) cell_vkb2_top_candi_pane_g5_ParamLimits

0x6e80,	// (0x0005099c) cell_vkb2_top_candi_pane_g5

0x6392,	// (0x0004feae) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6392,	// (0x0004feae) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf8,	// (0x00059914) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf8,	// (0x00059914) cell_vkb2_top_candi_pane_g

0x16ea,	// (0x0004b206) cell_vkb2_top_candi_pane_t1

0x090a,	// (0x0004a426) aid_size_touch_slider_mark_ParamLimits

0x090a,	// (0x0004a426) aid_size_touch_slider_mark

0xdafe,	// (0x0005761a) grid_graphic2_catg_pane_ParamLimits

0xdafe,	// (0x0005761a) grid_graphic2_catg_pane

0xdbbc,	// (0x000576d8) popup_grid_graphic2_window_t1_ParamLimits

0xdbbc,	// (0x000576d8) popup_grid_graphic2_window_t1

0xdbd2,	// (0x000576ee) popup_grid_graphic2_window_t2_ParamLimits

0xdbd2,	// (0x000576ee) popup_grid_graphic2_window_t2

0x0001,

0xfdb3,	// (0x000598cf) popup_grid_graphic2_window_t_ParamLimits

0xfdb3,	// (0x000598cf) popup_grid_graphic2_window_t

0x7058,	// (0x00050b74) bg_button_pane_cp05_ParamLimits

0xdd64,	// (0x00057880) cell_graphic2_control_pane_g1_ParamLimits

0xde56,	// (0x00057972) cell_graphic2_catg_pane_ParamLimits

0xde56,	// (0x00057972) cell_graphic2_catg_pane

0x6ea9,	// (0x000509c5) bg_button_pane_cp12

0xde68,	// (0x00057984) cell_graphic2_catg_pane_g1

0x64d2,	// (0x0004ffee) cell_tb_ext_pane_t1_ParamLimits

0x14b9,	// (0x0004afd5) vkb2_top_cell_right_narrow_pane_ParamLimits

0x14b9,	// (0x0004afd5) vkb2_top_cell_right_narrow_pane

0x14d1,	// (0x0004afed) vkb2_top_cell_right_wide_pane_ParamLimits

0x14d1,	// (0x0004afed) vkb2_top_cell_right_wide_pane

0x8a11,	// (0x0005252d) bg_vkb2_func_pane_ParamLimits

0x8a11,	// (0x0005252d) bg_vkb2_func_pane

0x1542,	// (0x0004b05e) vkb2_top_cell_left_pane_g1_ParamLimits

0x8a11,	// (0x0005252d) bg_vkb2_fuc_pane_cp03_ParamLimits

0x8a11,	// (0x0005252d) bg_vkb2_fuc_pane_cp03

0x15a0,	// (0x0004b0bc) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2578,	// (0x0004c094) bg_vkb2_func_pane_g1

0x2580,	// (0x0004c09c) bg_vkb2_func_pane_g2

0x2590,	// (0x0004c0ac) bg_vkb2_func_pane_g3

0x2588,	// (0x0004c0a4) bg_vkb2_func_pane_g4

0x2598,	// (0x0004c0b4) bg_vkb2_func_pane_g5

0x25a0,	// (0x0004c0bc) bg_vkb2_func_pane_g6

0x25a8,	// (0x0004c0c4) bg_vkb2_func_pane_g7

0x25b0,	// (0x0004c0cc) bg_vkb2_func_pane_g8

0x2570,	// (0x0004c08c) bg_vkb2_func_pane_g9

0x0008,

0xfe05,	// (0x00059921) bg_vkb2_func_pane_g

0x8a11,	// (0x0005252d) bg_vkb2_fuc_pane_cp01_ParamLimits

0x8a11,	// (0x0005252d) bg_vkb2_fuc_pane_cp01

0x1542,	// (0x0004b05e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1542,	// (0x0004b05e) vkb2_top_cell_right_wide_pane_g1

0x8a11,	// (0x0005252d) bg_vkb2_fuc_pane_cp02_ParamLimits

0x8a11,	// (0x0005252d) bg_vkb2_fuc_pane_cp02

0x15a0,	// (0x0004b0bc) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x15a0,	// (0x0004b0bc) vkb2_top_cell_right_narrow_pane_g1

0xd373,	// (0x00056e8f) aid_touch_area_decrease_ParamLimits

0xd373,	// (0x00056e8f) aid_touch_area_decrease

0xd3ad,	// (0x00056ec9) aid_touch_area_increase_ParamLimits

0xd3ad,	// (0x00056ec9) aid_touch_area_increase

0xd3d5,	// (0x00056ef1) aid_touch_area_mute_ParamLimits

0xd3d5,	// (0x00056ef1) aid_touch_area_mute

0xd405,	// (0x00056f21) aid_touch_area_slider_ParamLimits

0xd405,	// (0x00056f21) aid_touch_area_slider

0xd445,	// (0x00056f61) popup_slider_window_g4_ParamLimits

0xd445,	// (0x00056f61) popup_slider_window_g4

0xd46d,	// (0x00056f89) popup_slider_window_g5_ParamLimits

0xd46d,	// (0x00056f89) popup_slider_window_g5

0xd4a1,	// (0x00056fbd) popup_slider_window_g6_ParamLimits

0xd4a1,	// (0x00056fbd) popup_slider_window_g6

0x62a5,	// (0x0004fdc1) popup_slider_window_t2_ParamLimits

0x62a5,	// (0x0004fdc1) popup_slider_window_t2

0x0001,

0xfd01,	// (0x0005981d) popup_slider_window_t_ParamLimits

0xfd01,	// (0x0005981d) popup_slider_window_t

0xd4bd,	// (0x00056fd9) slider_pane_ParamLimits

0xd4bd,	// (0x00056fd9) slider_pane

0x7630,	// (0x0005114c) slider_pane_g1_ParamLimits

0x7630,	// (0x0005114c) slider_pane_g1

0x7644,	// (0x00051160) slider_pane_g2_ParamLimits

0x7644,	// (0x00051160) slider_pane_g2

0x765a,	// (0x00051176) slider_pane_g3_ParamLimits

0x765a,	// (0x00051176) slider_pane_g3

0x0003,

0xfe18,	// (0x00059934) slider_pane_g_ParamLimits

0xfe18,	// (0x00059934) slider_pane_g

0xb83e,	// (0x0005535a) popup_tb_float_extension_window_ParamLimits

0xb83e,	// (0x0005535a) popup_tb_float_extension_window

0x7686,	// (0x000511a2) aid_size_cell_tb_float_ext

0x6ea9,	// (0x000509c5) bg_popup_sub_window_cp28

0x7692,	// (0x000511ae) grid_tb_float_ext_pane

0x769e,	// (0x000511ba) cell_tb_float_ext_pane_ParamLimits

0x769e,	// (0x000511ba) cell_tb_float_ext_pane

0x76ba,	// (0x000511d6) cell_tb_float_ext_pane_g1

0x76c3,	// (0x000511df) grid_highlight_pane_cp12

0xbf59,	// (0x00055a75) cell_last_hwr_side_pane_ParamLimits

0xbf59,	// (0x00055a75) cell_last_hwr_side_pane

0x4bb4,	// (0x0004e6d0) cell_last_hwr_side_pane_g1

0x76cc,	// (0x000511e8) cell_last_hwr_side_pane_g2

0x0001,

0xfe21,	// (0x0005993d) cell_last_hwr_side_pane_g

0xc35f,	// (0x00055e7b) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc35f,	// (0x00055e7b) vkb2_area_bottom_space_btn_pane

0x4e2f,	// (0x0004e94b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6b20,	// (0x0005063c) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x16ea,	// (0x0004b206) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1708,	// (0x0004b224) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1708,	// (0x0004b224) vkb2_area_bottom_space_btn_pane_g1

0x1742,	// (0x0004b25e) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1742,	// (0x0004b25e) vkb2_area_bottom_space_btn_pane_g2

0x1778,	// (0x0004b294) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1778,	// (0x0004b294) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe26,	// (0x00059942) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe26,	// (0x00059942) vkb2_area_bottom_space_btn_pane_g

0x0c29,	// (0x0004a745) cel_fep_hwr_func_pane_ParamLimits

0x0c29,	// (0x0004a745) cel_fep_hwr_func_pane

0xbf2e,	// (0x00055a4a) cell_hwr_side_button_pane_ParamLimits

0xbf2e,	// (0x00055a4a) cell_hwr_side_button_pane

0x6506,	// (0x00050022) aid_area_touch_clock_ParamLimits

0x7058,	// (0x00050b74) bg_uniindi_top_pane_ParamLimits

0x651a,	// (0x00050036) uniindi_top_pane_g1_ParamLimits

0x6530,	// (0x0005004c) uniindi_top_pane_g2_ParamLimits

0x653c,	// (0x00050058) uniindi_top_pane_g3_ParamLimits

0x654d,	// (0x00050069) uniindi_top_pane_g4_ParamLimits

0xfd39,	// (0x00059855) uniindi_top_pane_g_ParamLimits

0x655a,	// (0x00050076) uniindi_top_pane_t1_ParamLimits

0x7058,	// (0x00050b74) bg_vkb2_func_pane_cp01_ParamLimits

0x7058,	// (0x00050b74) bg_vkb2_func_pane_cp01

0x76d5,	// (0x000511f1) cel_fep_hwr_func_pane_g1_ParamLimits

0x76d5,	// (0x000511f1) cel_fep_hwr_func_pane_g1

0x7058,	// (0x00050b74) bg_vkb2_func_pane_cp02_ParamLimits

0x7058,	// (0x00050b74) bg_vkb2_func_pane_cp02

0x76d5,	// (0x000511f1) cell_hwr_side_button_pane_g1_ParamLimits

0x76d5,	// (0x000511f1) cell_hwr_side_button_pane_g1

0x23f1,	// (0x0004bf0d) status_pane_g4_ParamLimits

0x23f1,	// (0x0004bf0d) status_pane_g4

0x240b,	// (0x0004bf27) status_pane_t1

0x4953,	// (0x0004e46f) form2_midp_gauge_slider_cont_pane

0x495b,	// (0x0004e477) form2_midp_gauge_slider_pane_t1_ParamLimits

0xccde,	// (0x000567fa) form2_midp_gauge_slider_pane_t2_ParamLimits

0xccf0,	// (0x0005680c) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb05,	// (0x00059621) form2_midp_gauge_slider_pane_t_ParamLimits

0x4991,	// (0x0004e4ad) form2_midp_slider_pane_ParamLimits

0x10cb,	// (0x0004abe7) aid_size_cell_func_vkb2_ParamLimits

0x10cb,	// (0x0004abe7) aid_size_cell_func_vkb2

0x7672,	// (0x0005118e) slider_pane_g4_ParamLimits

0x7672,	// (0x0005118e) slider_pane_g4

0xc3c0,	// (0x00055edc) form2_midp_gauge_slider_pane_t2_cp01

0xc3ce,	// (0x00055eea) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc3ce,	// (0x00055eea) form2_midp_gauge_slider_pane_t3_cp01

0x17ed,	// (0x0004b309) form2_midp_slider_pane_cp01

0x6ea9,	// (0x000509c5) navi_smil_pane

0x770e,	// (0x0005122a) navi_smil_pane_g1

0x7716,	// (0x00051232) navi_smil_pane_t1

0x76e3,	// (0x000511ff) form2_midp_slider_pane_g1

0x76ec,	// (0x00051208) form2_midp_slider_pane_g2

0x76f4,	// (0x00051210) form2_midp_slider_pane_g3

0x76e3,	// (0x000511ff) form2_midp_slider_pane_g4

0xde71,	// (0x0005798d) form2_midp_slider_pane_g5

0x0004,

0xfe2f,	// (0x0005994b) form2_midp_slider_pane_g

0x17b2,	// (0x0004b2ce) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x17b2,	// (0x0004b2ce) vkb2_area_bottom_space_btn_pane_g4

0xba25,	// (0x00055541) lc0_navi_pane_ParamLimits

0xba25,	// (0x00055541) lc0_navi_pane

0xba95,	// (0x000555b1) lc0_stat_indi_pane_ParamLimits

0xba95,	// (0x000555b1) lc0_stat_indi_pane

0xbaaa,	// (0x000555c6) ls0_title_pane_ParamLimits

0xbaaa,	// (0x000555c6) ls0_title_pane

0xa264,	// (0x00053d80) bg_popup_sub_pane_cp14_ParamLimits

0x64ed,	// (0x00050009) list_uniindi_pane_ParamLimits

0x64f9,	// (0x00050015) uniindi_top_pane_ParamLimits

0x6598,	// (0x000500b4) list_single_uniindi_pane_g1_ParamLimits

0x65ab,	// (0x000500c7) list_single_uniindi_pane_t1_ParamLimits

0xc3eb,	// (0x00055f07) lc0_stat_clock_pane_ParamLimits

0xc3eb,	// (0x00055f07) lc0_stat_clock_pane

0xde7a,	// (0x00057996) lc0_stat_indi_pane_g1_ParamLimits

0xde7a,	// (0x00057996) lc0_stat_indi_pane_g1

0xde87,	// (0x000579a3) lc0_stat_indi_pane_g2_ParamLimits

0xde87,	// (0x000579a3) lc0_stat_indi_pane_g2

0x0001,

0xfe3a,	// (0x00059956) lc0_stat_indi_pane_g_ParamLimits

0xfe3a,	// (0x00059956) lc0_stat_indi_pane_g

0xc3f8,	// (0x00055f14) lc0_uni_indicator_pane_ParamLimits

0xc3f8,	// (0x00055f14) lc0_uni_indicator_pane

0xde94,	// (0x000579b0) ls0_title_pane_g1_ParamLimits

0xde94,	// (0x000579b0) ls0_title_pane_g1

0xdea8,	// (0x000579c4) ls0_title_pane_t1_ParamLimits

0xdea8,	// (0x000579c4) ls0_title_pane_t1

0xc405,	// (0x00055f21) lc0_uni_indicator_pane_g1_ParamLimits

0xc405,	// (0x00055f21) lc0_uni_indicator_pane_g1

0x7788,	// (0x000512a4) lc0_stat_clock_pane_t1

0x6ea9,	// (0x000509c5) main_ai5_pane

0x7796,	// (0x000512b2) ai5_sk_pane_ParamLimits

0x7796,	// (0x000512b2) ai5_sk_pane

0xded6,	// (0x000579f2) cell_ai5_widget_pane_ParamLimits

0xded6,	// (0x000579f2) cell_ai5_widget_pane

0x7d3f,	// (0x0005185b) aid_size_cell_widget_grid

0x7d4d,	// (0x00051869) bg_ai5_widget_pane_ParamLimits

0x7d4d,	// (0x00051869) bg_ai5_widget_pane

0x7dc1,	// (0x000518dd) cell_ai5_widget_pane_g2

0x7dd1,	// (0x000518ed) cell_ai5_widget_pane_g3

0x7de8,	// (0x00051904) cell_ai5_widget_pane_g4

0x7df4,	// (0x00051910) cell_ai5_widget_pane_g5

0xe22d,	// (0x00057d49) cell_ai5_widget_pane_g6

0xe239,	// (0x00057d55) cell_ai5_widget_pane_g7

0x7e54,	// (0x00051970) cell_ai5_widget_pane_t1_ParamLimits

0x7e54,	// (0x00051970) cell_ai5_widget_pane_t1

0x7e71,	// (0x0005198d) cell_ai5_widget_pane_t2_ParamLimits

0x7e71,	// (0x0005198d) cell_ai5_widget_pane_t2

0x7e89,	// (0x000519a5) cell_ai5_widget_pane_t3_ParamLimits

0x7e89,	// (0x000519a5) cell_ai5_widget_pane_t3

0x7ea1,	// (0x000519bd) cell_ai5_widget_pane_t4_ParamLimits

0x7ea1,	// (0x000519bd) cell_ai5_widget_pane_t4

0x7ebe,	// (0x000519da) cell_ai5_widget_pane_t5_ParamLimits

0x7ebe,	// (0x000519da) cell_ai5_widget_pane_t5

0x7edd,	// (0x000519f9) cell_ai5_widget_pane_t6_ParamLimits

0x7edd,	// (0x000519f9) cell_ai5_widget_pane_t6

0x7eef,	// (0x00051a0b) cell_ai5_widget_pane_t7_ParamLimits

0x7eef,	// (0x00051a0b) cell_ai5_widget_pane_t7

0x7f08,	// (0x00051a24) cell_ai5_widget_pane_t8_ParamLimits

0x7f08,	// (0x00051a24) cell_ai5_widget_pane_t8

0x0009,

0xfe54,	// (0x00059970) cell_ai5_widget_pane_t_ParamLimits

0xfe54,	// (0x00059970) cell_ai5_widget_pane_t

0x7f5c,	// (0x00051a78) grid_ai5_widget_pane

0xa264,	// (0x00053d80) highlight_cell_ai5_widget_pane_ParamLimits

0xa264,	// (0x00053d80) highlight_cell_ai5_widget_pane

0xe245,	// (0x00057d61) ai5_sk_left_pane

0xe24f,	// (0x00057d6b) ai5_sk_middle_pane

0xe259,	// (0x00057d75) ai5_sk_right_pane

0x7f88,	// (0x00051aa4) bg_ai5_widget_pane_g1_ParamLimits

0x7f88,	// (0x00051aa4) bg_ai5_widget_pane_g1

0x7f94,	// (0x00051ab0) bg_ai5_widget_pane_g2_ParamLimits

0x7f94,	// (0x00051ab0) bg_ai5_widget_pane_g2

0x7fa0,	// (0x00051abc) bg_ai5_widget_pane_g3_ParamLimits

0x7fa0,	// (0x00051abc) bg_ai5_widget_pane_g3

0x7fac,	// (0x00051ac8) bg_ai5_widget_pane_g4_ParamLimits

0x7fac,	// (0x00051ac8) bg_ai5_widget_pane_g4

0x7fb8,	// (0x00051ad4) bg_ai5_widget_pane_g5_ParamLimits

0x7fb8,	// (0x00051ad4) bg_ai5_widget_pane_g5

0x7fc4,	// (0x00051ae0) bg_ai5_widget_pane_g6_ParamLimits

0x7fc4,	// (0x00051ae0) bg_ai5_widget_pane_g6

0x7fd0,	// (0x00051aec) bg_ai5_widget_pane_g7_ParamLimits

0x7fd0,	// (0x00051aec) bg_ai5_widget_pane_g7

0x7fdc,	// (0x00051af8) bg_ai5_widget_pane_g8_ParamLimits

0x7fdc,	// (0x00051af8) bg_ai5_widget_pane_g8

0x7fe8,	// (0x00051b04) bg_ai5_widget_pane_g9_ParamLimits

0x7fe8,	// (0x00051b04) bg_ai5_widget_pane_g9

0x0008,

0xfe69,	// (0x00059985) bg_ai5_widget_pane_g_ParamLimits

0xfe69,	// (0x00059985) bg_ai5_widget_pane_g

0x8020,	// (0x00051b3c) cell_shortcut_ai5_widget_pane_ParamLimits

0x8020,	// (0x00051b3c) cell_shortcut_ai5_widget_pane

0xe7f5,	// (0x00058311) bg_cell_shortcut_ai5_widget_pane

0x8033,	// (0x00051b4f) cell_grid_ai5_widget_pane_g1

0xe7f5,	// (0x00058311) highlight_cell_shortcut_ai5_widget_pane

0x2580,	// (0x0004c09c) ai5_sk_left_pane_g1

0x803c,	// (0x00051b58) ai5_sk_left_pane_g2

0x8044,	// (0x00051b60) ai5_sk_left_pane_g3

0x804c,	// (0x00051b68) ai5_sk_left_pane_g4

0x0003,

0xfe7c,	// (0x00059998) ai5_sk_left_pane_g

0x8054,	// (0x00051b70) ai5_sk_left_pane_t1

0x2578,	// (0x0004c094) ai5_sk_right_pane_g1

0x8062,	// (0x00051b7e) ai5_sk_right_pane_g2

0x806a,	// (0x00051b86) ai5_sk_right_pane_g3

0x8072,	// (0x00051b8e) ai5_sk_right_pane_g4

0x0003,

0xfe85,	// (0x000599a1) ai5_sk_right_pane_g

0x807a,	// (0x00051b96) ai5_sk_right_pane_t1

0x2578,	// (0x0004c094) ai5_sk_middle_pane_g1

0x2580,	// (0x0004c09c) ai5_sk_middle_pane_g2

0x2598,	// (0x0004c0b4) ai5_sk_middle_pane_g3

0x806a,	// (0x00051b86) ai5_sk_middle_pane_g4

0x8044,	// (0x00051b60) ai5_sk_middle_pane_g5

0x8088,	// (0x00051ba4) ai5_sk_middle_pane_g6

0xe263,	// (0x00057d7f) ai5_sk_middle_pane_g7

0x0006,

0xfe8e,	// (0x000599aa) ai5_sk_middle_pane_g

0xb90f,	// (0x0005542b) aid_touch_area_size_lc0_ParamLimits

0xb90f,	// (0x0005542b) aid_touch_area_size_lc0

0x0dc8,	// (0x0004a8e4) cell_hwr_candidate_pane_t1_ParamLimits

0x20a8,	// (0x0004bbc4) aid_touch_navi_pane

0xbbb5,	// (0x000556d1) status_dt_navi_pane_ParamLimits

0xbbb5,	// (0x000556d1) status_dt_navi_pane

0xbbcd,	// (0x000556e9) status_dt_sta_pane_ParamLimits

0xbbcd,	// (0x000556e9) status_dt_sta_pane

0xe26b,	// (0x00057d87) dt_sta_controll_pane

0xe278,	// (0x00057d94) dt_sta_indi_pane

0xe285,	// (0x00057da1) dt_sta_title_pane

0x7058,	// (0x00050b74) bg_dt_sta_indi_pane_ParamLimits

0x7058,	// (0x00050b74) bg_dt_sta_indi_pane

0xe297,	// (0x00057db3) dt_sta_battery_pane

0xe29f,	// (0x00057dbb) dt_sta_indi_pane_g1

0xe2a8,	// (0x00057dc4) dt_sta_indi_pane_g2

0xe2b1,	// (0x00057dcd) dt_sta_indi_pane_g3

0x0002,

0xfe9d,	// (0x000599b9) dt_sta_indi_pane_g

0xe2ba,	// (0x00057dd6) dt_sta_signal_pane

0xa264,	// (0x00053d80) bg_dt_sta_title_pane_ParamLimits

0xa264,	// (0x00053d80) bg_dt_sta_title_pane

0xe2c3,	// (0x00057ddf) dt_sta_title_pane_g1

0xe2cb,	// (0x00057de7) dt_sta_title_pane_t1_ParamLimits

0xe2cb,	// (0x00057de7) dt_sta_title_pane_t1

0x6ea9,	// (0x000509c5) bg_dt_sta_control_pane

0xe2e0,	// (0x00057dfc) dt_sta_controll_pane_g1

0xe2e9,	// (0x00057e05) bg_dt_sta_title_pane_g1

0xe2f2,	// (0x00057e0e) bg_dt_sta_title_pane_g2

0xe2fb,	// (0x00057e17) bg_dt_sta_title_pane_g3

0x0002,

0xfea4,	// (0x000599c0) bg_dt_sta_title_pane_g

0x4bb4,	// (0x0004e6d0) bg_dt_sta_indi_pane_g1

0x8136,	// (0x00051c52) dt_sta_signal_pane_g1

0x813e,	// (0x00051c5a) dt_sta_signal_pane_g2

0x0001,

0xfeab,	// (0x000599c7) dt_sta_signal_pane_g

0x8146,	// (0x00051c62) dt_sta_battery_pane_g1

0x814f,	// (0x00051c6b) dt_sta_battery_pane_t1

0x4bb4,	// (0x0004e6d0) bg_dt_sta_control_pane_g1

0xaa3d,	// (0x00054559) fep_china_uni_eep_pane

0xaa45,	// (0x00054561) fep_china_uni_entry_pane_ParamLimits

0xaa55,	// (0x00054571) popup_fep_china_uni_window_g1_ParamLimits

0xaa65,	// (0x00054581) popup_fep_china_uni_window_g2_ParamLimits

0xaa65,	// (0x00054581) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0005923e) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0005923e) popup_fep_china_uni_window_g

0x815e,	// (0x00051c7a) fep_china_uni_eep_pane_g1

0x8166,	// (0x00051c82) fep_china_uni_eep_pane_t1

0x7705,	// (0x00051221) aid_touch_area_size_smil_player

0x2200,	// (0x0004bd1c) lc0_clock_pane

0x23ff,	// (0x0004bf1b) status_pane_g5_ParamLimits

0x23ff,	// (0x0004bf1b) status_pane_g5

0xb364,	// (0x00054e80) popup_keymap_window

0x23bd,	// (0x0004bed9) status_icon_pane

0x7dd1,	// (0x000518ed) cell_ai5_widget_pane_g3_ParamLimits

0x7de8,	// (0x00051904) cell_ai5_widget_pane_g4_ParamLimits

0x7df4,	// (0x00051910) cell_ai5_widget_pane_g5_ParamLimits

0x7e18,	// (0x00051934) cell_ai5_widget_pane_g8_ParamLimits

0x7e18,	// (0x00051934) cell_ai5_widget_pane_g8

0x7e2c,	// (0x00051948) cell_ai5_widget_pane_g9_ParamLimits

0x7e2c,	// (0x00051948) cell_ai5_widget_pane_g9

0x7e40,	// (0x0005195c) cell_ai5_widget_pane_g10_ParamLimits

0x7e40,	// (0x0005195c) cell_ai5_widget_pane_g10

0x8175,	// (0x00051c91) status_icon_pane_g1

0x6ea9,	// (0x000509c5) bg_popup_sub_pane_cp13

0x817d,	// (0x00051c99) popup_keymap_window_t1

0xb053,	// (0x00054b6f) control_pane_g6_ParamLimits

0xb053,	// (0x00054b6f) control_pane_g6

0xb060,	// (0x00054b7c) control_pane_g7_ParamLimits

0xb060,	// (0x00054b7c) control_pane_g7

0xb06d,	// (0x00054b89) control_pane_g8_ParamLimits

0xb06d,	// (0x00054b89) control_pane_g8

0xe26b,	// (0x00057d87) dt_sta_controll_pane_ParamLimits

0xe278,	// (0x00057d94) dt_sta_indi_pane_ParamLimits

0xe285,	// (0x00057da1) dt_sta_title_pane_ParamLimits

0x747c,	// (0x00050f98) aid_size_touch_scroll_bar_cale

0xf067,	// (0x00058b83) popup_discreet_window_ParamLimits

0xf067,	// (0x00058b83) popup_discreet_window

0x9d11,	// (0x0005382d) popup_sk_window

0x2bc0,	// (0x0004c6dc) bg_popup_sub_pane_cp28_ParamLimits

0x2bc0,	// (0x0004c6dc) bg_popup_sub_pane_cp28

0x818b,	// (0x00051ca7) popup_discreet_window_g1_ParamLimits

0x818b,	// (0x00051ca7) popup_discreet_window_g1

0x81ab,	// (0x00051cc7) popup_discreet_window_t1_ParamLimits

0x81ab,	// (0x00051cc7) popup_discreet_window_t1

0x81c9,	// (0x00051ce5) popup_discreet_window_t2_ParamLimits

0x81c9,	// (0x00051ce5) popup_discreet_window_t2

0x0002,

0xfeb0,	// (0x000599cc) popup_discreet_window_t_ParamLimits

0xfeb0,	// (0x000599cc) popup_discreet_window_t

0x1823,	// (0x0004b33f) popup_sk_window_g1

0x182d,	// (0x0004b349) popup_sk_window_g2

0x0001,

0xfeb7,	// (0x000599d3) popup_sk_window_g

0x1837,	// (0x0004b353) popup_sk_window_t1

0x1847,	// (0x0004b363) popup_sk_window_t1_copy1

0x7dc1,	// (0x000518dd) cell_ai5_widget_pane_g2_ParamLimits

0x7f1a,	// (0x00051a36) cell_ai5_widget_pane_t9_ParamLimits

0x7f1a,	// (0x00051a36) cell_ai5_widget_pane_t9

0x6ea9,	// (0x000509c5) main_fep_fshwr2_pane

0xc424,	// (0x00055f40) aid_fshwr2_btn_pane

0xc435,	// (0x00055f51) aid_fshwr2_syb_pane

0xc446,	// (0x00055f62) aid_fshwr2_txt_pane

0xc452,	// (0x00055f6e) fshwr2_func_candi_pane

0xc473,	// (0x00055f8f) fshwr2_hwr_syb_pane

0xc490,	// (0x00055fac) fshwr2_icf_pane

0x6ea9,	// (0x000509c5) fshwr2_icf_bg_pane

0x18c9,	// (0x0004b3e5) fshwr2_icf_pane_t1_ParamLimits

0x18c9,	// (0x0004b3e5) fshwr2_icf_pane_t1

0xa916,	// (0x00054432) fshwr2_func_candi_pane_g1

0xe304,	// (0x00057e20) fshwr2_func_candi_row_pane_ParamLimits

0xe304,	// (0x00057e20) fshwr2_func_candi_row_pane

0xc4bc,	// (0x00055fd8) cell_fshwr2_syb_pane_ParamLimits

0xc4bc,	// (0x00055fd8) cell_fshwr2_syb_pane

0x4e2f,	// (0x0004e94b) fshwr2_hwr_syb_pane_g1_ParamLimits

0x4e2f,	// (0x0004e94b) fshwr2_hwr_syb_pane_g1

0x6ea9,	// (0x000509c5) bg_popup_call_pane_cp01

0xc4d2,	// (0x00055fee) fshwr2_func_candi_cell_pane_ParamLimits

0xc4d2,	// (0x00055fee) fshwr2_func_candi_cell_pane

0xe314,	// (0x00057e30) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe314,	// (0x00057e30) fshwr2_func_candi_cell_bg_pane

0xc502,	// (0x0005601e) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc502,	// (0x0005601e) fshwr2_func_candi_cell_pane_g1

0xc531,	// (0x0005604d) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc531,	// (0x0005604d) fshwr2_func_candi_cell_pane_t1

0x6ea9,	// (0x000509c5) bg_button_pane_cp08

0x8237,	// (0x00051d53) cell_fshwr2_syb_bg_pane

0xc544,	// (0x00056060) cell_fshwr2_syb_bg_pane_g1

0xc54c,	// (0x00056068) cell_fshwr2_syb_bg_pane_t1

0xa264,	// (0x00053d80) main_tmo_pane

0xc805,	// (0x00056321) uni_indicator_pane_g1_ParamLimits

0xc81b,	// (0x00056337) uni_indicator_pane_g2_ParamLimits

0xc831,	// (0x0005634d) uni_indicator_pane_g3_ParamLimits

0xc846,	// (0x00056362) uni_indicator_pane_g4_ParamLimits

0xc846,	// (0x00056362) uni_indicator_pane_g4

0x3739,	// (0x0004d255) uni_indicator_pane_g5_ParamLimits

0x3739,	// (0x0004d255) uni_indicator_pane_g5

0x3739,	// (0x0004d255) uni_indicator_pane_g6_ParamLimits

0x3739,	// (0x0004d255) uni_indicator_pane_g6

0xf921,	// (0x0005943d) uni_indicator_pane_g_ParamLimits

0xd343,	// (0x00056e5f) popup_tmo_note_window_ParamLimits

0xd343,	// (0x00056e5f) popup_tmo_note_window

0xa264,	// (0x00053d80) fshwr2_bg_pane

0xc522,	// (0x0005603e) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc522,	// (0x0005603e) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebc,	// (0x000599d8) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebc,	// (0x000599d8) fshwr2_func_candi_cell_pane_g

0x4bb4,	// (0x0004e6d0) bg_popup_window_pane_cp01

0x1975,	// (0x0004b491) bg_popup_window_pane_g1_cp01

0x823f,	// (0x00051d5b) bg_popup_window_pane_cp22_ParamLimits

0x823f,	// (0x00051d5b) bg_popup_window_pane_cp22

0x824d,	// (0x00051d69) listscroll_tmo_link_pane_ParamLimits

0x824d,	// (0x00051d69) listscroll_tmo_link_pane

0x828d,	// (0x00051da9) popup_tmo_note_window_g1_ParamLimits

0x828d,	// (0x00051da9) popup_tmo_note_window_g1

0x829a,	// (0x00051db6) tmo_note_info_pane_ParamLimits

0x829a,	// (0x00051db6) tmo_note_info_pane

0xe320,	// (0x00057e3c) list_tmo_note_info_pane_g1_ParamLimits

0xe320,	// (0x00057e3c) list_tmo_note_info_pane_g1

0x82cb,	// (0x00051de7) list_tmo_note_info_pane_g2_ParamLimits

0x82cb,	// (0x00051de7) list_tmo_note_info_pane_g2

0x0001,

0xfec1,	// (0x000599dd) list_tmo_note_info_pane_g_ParamLimits

0xfec1,	// (0x000599dd) list_tmo_note_info_pane_g

0x82e7,	// (0x00051e03) list_tmo_note_info_text_pane_ParamLimits

0x82e7,	// (0x00051e03) list_tmo_note_info_text_pane

0x836c,	// (0x00051e88) list_tmo_link_pane

0x8379,	// (0x00051e95) scroll_pane_cp20

0x8386,	// (0x00051ea2) list_single_tmo_link_pane_ParamLimits

0x8386,	// (0x00051ea2) list_single_tmo_link_pane

0x8396,	// (0x00051eb2) list_single_tmo_link_pane_t1

0x83a4,	// (0x00051ec0) list_tmo_note_info_text_pane_t1_ParamLimits

0x83a4,	// (0x00051ec0) list_tmo_note_info_text_pane_t1

0xa31e,	// (0x00053e3a) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa31e,	// (0x00053e3a) aid_size_touch_scroll_bar_cp01

0x98d2,	// (0x000533ee) aid_size_touch_slider_marker

0x9d01,	// (0x0005381d) popup_settings_window_ParamLimits

0x9d01,	// (0x0005381d) popup_settings_window

0xe968,	// (0x00058484) popup_candi_list_indi_window

0x20a8,	// (0x0004bbc4) aid_touch_navi_pane_ParamLimits

0x1022,	// (0x0004ab3e) rs_clock_indi_pane

0x102b,	// (0x0004ab47) sctrl_sk_bottom_pane_ParamLimits

0x103c,	// (0x0004ab58) sctrl_sk_top_pane_ParamLimits

0x1125,	// (0x0004ac41) popup_fep_tooltip_window

0x7d3f,	// (0x0005185b) aid_size_cell_widget_grid_ParamLimits

0x7dac,	// (0x000518c8) cell_ai5_widget_pane_g1_ParamLimits

0x7dac,	// (0x000518c8) cell_ai5_widget_pane_g1

0xe22d,	// (0x00057d49) cell_ai5_widget_pane_g6_ParamLimits

0xe239,	// (0x00057d55) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3f,	// (0x0005995b) cell_ai5_widget_pane_g_ParamLimits

0xfe3f,	// (0x0005995b) cell_ai5_widget_pane_g

0x7f3e,	// (0x00051a5a) cell_ai5_widget_pane_t10_ParamLimits

0x7f3e,	// (0x00051a5a) cell_ai5_widget_pane_t10

0x7f5c,	// (0x00051a78) grid_ai5_widget_pane_ParamLimits

0x7ff4,	// (0x00051b10) cell_contacts_ai5_widget_pane_ParamLimits

0x7ff4,	// (0x00051b10) cell_contacts_ai5_widget_pane

0x81de,	// (0x00051cfa) popup_discreet_window_t3_ParamLimits

0x81de,	// (0x00051cfa) popup_discreet_window_t3

0xc4a8,	// (0x00055fc4) popup_fshwr2_char_preview_window_ParamLimits

0xc4a8,	// (0x00055fc4) popup_fshwr2_char_preview_window

0xe337,	// (0x00057e53) tmo_note_info_pane_t1

0xe34c,	// (0x00057e68) tmo_note_info_pane_t2

0xe365,	// (0x00057e81) tmo_note_info_pane_t3

0x8348,	// (0x00051e64) tmo_note_info_pane_t4

0x835a,	// (0x00051e76) tmo_note_info_pane_t5

0x0004,

0xfec6,	// (0x000599e2) tmo_note_info_pane_t

0x836c,	// (0x00051e88) list_tmo_link_pane_ParamLimits

0x8379,	// (0x00051e95) scroll_pane_cp20_ParamLimits

0x6ea9,	// (0x000509c5) bg_popup_fep_char_preview_window_cp01

0x83bd,	// (0x00051ed9) popup_fshwr2_char_preview_window_t1

0x83cb,	// (0x00051ee7) popup_candi_list_indi_window_g1

0x83d4,	// (0x00051ef0) bg_cell_contacts_ai5_widget_pane

0x83e0,	// (0x00051efc) cell_contacts_ai5_widget_pane_g1

0x83f5,	// (0x00051f11) cell_contacts_ai5_widget_pane_g2

0x8401,	// (0x00051f1d) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed1,	// (0x000599ed) cell_contacts_ai5_widget_pane_g

0x840d,	// (0x00051f29) cell_contacts_ai5_widget_pane_t1

0xa264,	// (0x00053d80) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe3df,	// (0x00057efb) settings_container_pane

0xe7f5,	// (0x00058311) listscroll_set_pane_copy1

0x42d5,	// (0x0004ddf1) scroll_pane_cp121_copy1

0x8490,	// (0x00051fac) set_content_pane_copy1

0xe3eb,	// (0x00057f07) aid_height_set_list_copy1_ParamLimits

0xe3eb,	// (0x00057f07) aid_height_set_list_copy1

0x3939,	// (0x0004d455) aid_size_parent_copy1_ParamLimits

0x3939,	// (0x0004d455) aid_size_parent_copy1

0xe3f7,	// (0x00057f13) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe3f7,	// (0x00057f13) button_value_adjust_pane_cp6_copy1

0x04b3,	// (0x00049fcf) list_highlight_pane_cp2_copy1_ParamLimits

0x04b3,	// (0x00049fcf) list_highlight_pane_cp2_copy1

0xe40b,	// (0x00057f27) list_set_pane_copy1_ParamLimits

0xe40b,	// (0x00057f27) list_set_pane_copy1

0xe37a,	// (0x00057e96) main_pane_set_t1_copy1_ParamLimits

0xe37a,	// (0x00057e96) main_pane_set_t1_copy1

0xe3b4,	// (0x00057ed0) main_pane_set_t2_copy1_ParamLimits

0xe3b4,	// (0x00057ed0) main_pane_set_t2_copy1

0xe4d2,	// (0x00057fee) main_pane_set_t3_copy1

0xe4e0,	// (0x00057ffc) main_pane_set_t4_copy1

0xe3d3,	// (0x00057eef) set_content_pane_g1_copy1_ParamLimits

0xe3d3,	// (0x00057eef) set_content_pane_g1_copy1

0xe4ee,	// (0x0005800a) setting_code_pane_copy1

0x85a3,	// (0x000520bf) setting_slider_graphic_pane_copy1

0x85a3,	// (0x000520bf) setting_slider_pane_copy1

0x85a3,	// (0x000520bf) setting_text_pane_copy1

0x85a3,	// (0x000520bf) setting_volume_pane_copy1

0xe4ee,	// (0x0005800a) settings_code_pane_cp2_copy1

0xe4f6,	// (0x00058012) settings_code_pane_cp_copy1_ParamLimits

0xe4f6,	// (0x00058012) settings_code_pane_cp_copy1

0xc55b,	// (0x00056077) volume_set_pane_copy1

0xe50a,	// (0x00058026) volume_set_pane_g10_copy1

0xe516,	// (0x00058032) volume_set_pane_g1_copy1

0xe520,	// (0x0005803c) volume_set_pane_g2_copy1

0xe52a,	// (0x00058046) volume_set_pane_g3_copy1

0xe534,	// (0x00058050) volume_set_pane_g4_copy1

0xe53e,	// (0x0005805a) volume_set_pane_g5_copy1

0xe548,	// (0x00058064) volume_set_pane_g6_copy1

0xe552,	// (0x0005806e) volume_set_pane_g7_copy1

0xe55c,	// (0x00058078) volume_set_pane_g8_copy1

0xe566,	// (0x00058082) volume_set_pane_g9_copy1

0x6f17,	// (0x00050a33) bg_set_opt_pane_cp_copy1_ParamLimits

0x6f17,	// (0x00050a33) bg_set_opt_pane_cp_copy1

0x198a,	// (0x0004b4a6) setting_slider_pane_t1_copy1_ParamLimits

0x198a,	// (0x0004b4a6) setting_slider_pane_t1_copy1

0xc567,	// (0x00056083) setting_slider_pane_t2_copy1_ParamLimits

0xc567,	// (0x00056083) setting_slider_pane_t2_copy1

0xc581,	// (0x0005609d) setting_slider_pane_t3_copy1_ParamLimits

0xc581,	// (0x0005609d) setting_slider_pane_t3_copy1

0xc599,	// (0x000560b5) slider_set_pane_copy1_ParamLimits

0xc599,	// (0x000560b5) slider_set_pane_copy1

0xa2bf,	// (0x00053ddb) set_opt_bg_pane_g1_copy2

0xa2c7,	// (0x00053de3) set_opt_bg_pane_g2_copy2

0x8625,	// (0x00052141) set_opt_bg_pane_g3_copy2

0xa2d7,	// (0x00053df3) set_opt_bg_pane_g4_copy2

0xa2df,	// (0x00053dfb) set_opt_bg_pane_g5_copy2

0xa2e7,	// (0x00053e03) set_opt_bg_pane_g6_copy2

0xe570,	// (0x0005808c) set_opt_bg_pane_g7_copy2

0x8639,	// (0x00052155) set_opt_bg_pane_g8_copy2

0x8643,	// (0x0005215f) set_opt_bg_pane_g9_copy2

0x19f0,	// (0x0004b50c) aid_size_touch_slider_mark_copy1_ParamLimits

0x19f0,	// (0x0004b50c) aid_size_touch_slider_mark_copy1

0x864d,	// (0x00052169) slider_set_pane_g1_copy1

0x1a04,	// (0x0004b520) slider_set_pane_g2_copy1

0x092a,	// (0x0004a446) slider_set_pane_g3_copy1_ParamLimits

0x092a,	// (0x0004a446) slider_set_pane_g3_copy1

0x093e,	// (0x0004a45a) slider_set_pane_g4_copy1_ParamLimits

0x093e,	// (0x0004a45a) slider_set_pane_g4_copy1

0x0956,	// (0x0004a472) slider_set_pane_g5_copy1_ParamLimits

0x0956,	// (0x0004a472) slider_set_pane_g5_copy1

0x092a,	// (0x0004a446) slider_set_pane_g6_copy1_ParamLimits

0x092a,	// (0x0004a446) slider_set_pane_g6_copy1

0xc5af,	// (0x000560cb) slider_set_pane_g7_copy1_ParamLimits

0xc5af,	// (0x000560cb) slider_set_pane_g7_copy1

0x6ebd,	// (0x000509d9) bg_set_opt_pane_cp2_copy1

0x8656,	// (0x00052172) setting_slider_graphic_pane_g1_copy1

0xe57a,	// (0x00058096) setting_slider_graphic_pane_t1_copy1

0xe58a,	// (0x000580a6) setting_slider_graphic_pane_t2_copy1

0xe59a,	// (0x000580b6) slider_set_pane_cp_copy1

0x868f,	// (0x000521ab) input_focus_pane_cp1_copy1

0x8698,	// (0x000521b4) list_set_text_pane_copy1

0x86a0,	// (0x000521bc) setting_text_pane_g1_copy1

0xe5db,	// (0x000580f7) set_text_pane_t1_copy1

0x868f,	// (0x000521ab) input_focus_pane_cp2_copy1

0x86a0,	// (0x000521bc) setting_code_pane_g1_copy1

0xe5a2,	// (0x000580be) setting_code_pane_t1_copy1

0xe5b0,	// (0x000580cc) list_set_graphic_pane_copy1

0x6ebd,	// (0x000509d9) bg_set_opt_pane_cp4_copy1

0xac4f,	// (0x0005476b) list_set_graphic_pane_g1_copy1_ParamLimits

0xac4f,	// (0x0005476b) list_set_graphic_pane_g1_copy1

0xe5c2,	// (0x000580de) list_set_graphic_pane_g2_copy1

0xac67,	// (0x00054783) list_set_graphic_pane_t1_copy1_ParamLimits

0xac67,	// (0x00054783) list_set_graphic_pane_t1_copy1

0x4bb4,	// (0x0004e6d0) rs_clock_indi_pane_g1

0x86d1,	// (0x000521ed) rs_clock_indi_pane_t1

0x86df,	// (0x000521fb) rs_indi_pane

0x86e7,	// (0x00052203) rs_indi_pane_g1

0x86f0,	// (0x0005220c) rs_indi_pane_g2

0x86f9,	// (0x00052215) rs_indi_pane_g3

0x0002,

0xfed8,	// (0x000599f4) rs_indi_pane_g

0xe7f5,	// (0x00058311) bg_popup_preview_window_pane_cp03

0x8702,	// (0x0005221e) popup_fep_tooltip_window_t1

0x586b,	// (0x0004f387) popup_note2_window_g2_ParamLimits

0x586b,	// (0x0004f387) popup_note2_window_g2

0x0001,

0xfc71,	// (0x0005978d) popup_note2_window_g_ParamLimits

0xfc71,	// (0x0005978d) popup_note2_window_g

0x5d73,	// (0x0004f88f) bg_popup_sub_pane_cp11_ParamLimits

0x5d80,	// (0x0004f89c) cell_ai3_links_pane_g1_ParamLimits

0x5d97,	// (0x0004f8b3) cell_ai3_links_pane_t1

0xe5db,	// (0x000580f7) set_text_pane_t1_copy1_ParamLimits

0xae6d,	// (0x00054989) cell_graphic_popup_pane_cp2_ParamLimits

0xae6d,	// (0x00054989) cell_graphic_popup_pane_cp2

0xe5ca,	// (0x000580e6) cell_graphic_popup_pane_g1_cp2

0x728f,	// (0x00050dab) cell_graphic_popup_pane_g2_cp2

0x8718,	// (0x00052234) cell_graphic_popup_pane_g3_cp2

0x8720,	// (0x0005223c) cell_graphic_popup_pane_t2_cp2

0x72a0,	// (0x00050dbc) grid_highlight_pane_cp3_cp2

0xa5f1,	// (0x0005410d) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xa264,	// (0x00053d80) main_tmo_pane_ParamLimits

0xd337,	// (0x00056e53) popup_tmo_big_image_note_window

0x7d9b,	// (0x000518b7) cell_ai5_widget_list_pane

0x7da3,	// (0x000518bf) cell_ai5_widget_lrg_icon_pane

0xe337,	// (0x00057e53) tmo_note_info_pane_t1_ParamLimits

0xe34c,	// (0x00057e68) tmo_note_info_pane_t2_ParamLimits

0xe365,	// (0x00057e81) tmo_note_info_pane_t3_ParamLimits

0x8348,	// (0x00051e64) tmo_note_info_pane_t4_ParamLimits

0x835a,	// (0x00051e76) tmo_note_info_pane_t5_ParamLimits

0xfec6,	// (0x000599e2) tmo_note_info_pane_t_ParamLimits

0xe3df,	// (0x00057efb) settings_container_pane_ParamLimits

0x8687,	// (0x000521a3) indicator_popup_pane_cp5

0x8687,	// (0x000521a3) indicator_popup_pane_cp6

0xe5b0,	// (0x000580cc) list_set_graphic_pane_copy1_ParamLimits

0x6ea9,	// (0x000509c5) bg_popup_window_pane_cp23

0x872e,	// (0x0005224a) popup_tmo_big_image_note_window_g1

0x873a,	// (0x00052256) popup_tmo_big_image_note_window_t1

0x874a,	// (0x00052266) popup_tmo_big_image_note_window_t2

0x875a,	// (0x00052276) popup_tmo_big_image_note_window_t3

0x0002,

0xfedf,	// (0x000599fb) popup_tmo_big_image_note_window_t

0x4bb4,	// (0x0004e6d0) cell_ai5_widget_lrg_icon_pane_g1

0x876a,	// (0x00052286) cell_ai5_widget_lrg_icon_pane_t1

0x8778,	// (0x00052294) cell_ai5_widget_list_row_pane_ParamLimits

0x8778,	// (0x00052294) cell_ai5_widget_list_row_pane

0x8790,	// (0x000522ac) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x8790,	// (0x000522ac) cell_ai5_widget_list_row_pane_g1

0x879d,	// (0x000522b9) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x879d,	// (0x000522b9) cell_ai5_widget_list_row_pane_t1

0x87c8,	// (0x000522e4) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x87c8,	// (0x000522e4) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee6,	// (0x00059a02) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee6,	// (0x00059a02) cell_ai5_widget_list_row_pane_t

0x6ea9,	// (0x000509c5) main_fep_vtchi_ss_pane

0x880c,	// (0x00052328) popup_fep_char_pre_window

0x8814,	// (0x00052330) popup_fep_ituss_window

0x8835,	// (0x00052351) popup_fep_vkbss_window

0x8856,	// (0x00052372) grid_vkbss_keypad_pane_ParamLimits

0x8856,	// (0x00052372) grid_vkbss_keypad_pane

0x8866,	// (0x00052382) ituss_keypad_pane

0x1a2e,	// (0x0004b54a) aid_vkbss_key_offset_ParamLimits

0x1a2e,	// (0x0004b54a) aid_vkbss_key_offset

0x1a3a,	// (0x0004b556) cell_vkbss_key_pane_ParamLimits

0x1a3a,	// (0x0004b556) cell_vkbss_key_pane

0x8875,	// (0x00052391) bg_cell_vkbss_key_g1_ParamLimits

0x8875,	// (0x00052391) bg_cell_vkbss_key_g1

0x8881,	// (0x0005239d) cell_vkbss_key_3p_pane_ParamLimits

0x8881,	// (0x0005239d) cell_vkbss_key_3p_pane

0x889b,	// (0x000523b7) cell_vkbss_key_g1_ParamLimits

0x889b,	// (0x000523b7) cell_vkbss_key_g1

0x88b5,	// (0x000523d1) cell_vkbss_key_t1_ParamLimits

0x88b5,	// (0x000523d1) cell_vkbss_key_t1

0x1a50,	// (0x0004b56c) cell_ituss_key_pane_ParamLimits

0x1a50,	// (0x0004b56c) cell_ituss_key_pane

0x88e0,	// (0x000523fc) bg_cell_ituss_key_g1_ParamLimits

0x88e0,	// (0x000523fc) bg_cell_ituss_key_g1

0x88ec,	// (0x00052408) cell_ituss_key_pane_g1_ParamLimits

0x88ec,	// (0x00052408) cell_ituss_key_pane_g1

0x1a61,	// (0x0004b57d) cell_ituss_key_pane_g2_ParamLimits

0x1a61,	// (0x0004b57d) cell_ituss_key_pane_g2

0x0002,

0xfeed,	// (0x00059a09) cell_ituss_key_pane_g_ParamLimits

0xfeed,	// (0x00059a09) cell_ituss_key_pane_g

0x1a8d,	// (0x0004b5a9) cell_ituss_key_t1_ParamLimits

0x1a8d,	// (0x0004b5a9) cell_ituss_key_t1

0x1ac7,	// (0x0004b5e3) cell_ituss_key_t2_ParamLimits

0x1ac7,	// (0x0004b5e3) cell_ituss_key_t2

0x1af8,	// (0x0004b614) cell_ituss_key_t3_ParamLimits

0x1af8,	// (0x0004b614) cell_ituss_key_t3

0x1ac7,	// (0x0004b5e3) cell_ituss_key_t4_ParamLimits

0x1ac7,	// (0x0004b5e3) cell_ituss_key_t4

0x0004,

0xfef4,	// (0x00059a10) cell_ituss_key_t_ParamLimits

0xfef4,	// (0x00059a10) cell_ituss_key_t

0x8912,	// (0x0005242e) cell_vkbss_key_3p_pane_g1

0x891a,	// (0x00052436) cell_vkbss_key_3p_pane_g2

0x8922,	// (0x0005243e) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeff,	// (0x00059a1b) cell_vkbss_key_3p_pane_g

0x6ea9,	// (0x000509c5) bg_popup_fep_char_preview_window_cp02

0x1b3b,	// (0x0004b657) popup_fep_char_pre_window_t1

0xe223,	// (0x00057d3f) main_ai5_sk_pane

0x83d4,	// (0x00051ef0) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x83e0,	// (0x00051efc) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x83f5,	// (0x00051f11) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8401,	// (0x00051f1d) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed1,	// (0x000599ed) cell_contacts_ai5_widget_pane_g_ParamLimits

0x840d,	// (0x00051f29) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xa264,	// (0x00053d80) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe5d2,	// (0x000580ee) main_ai5_sk_pane_g1

0x29f8,	// (0x0004c514) popup_query_code_window_g1

0x882a,	// (0x00052346) popup_fep_vkb_icf_pane

0x8840,	// (0x0005235c) popup_fep_vtchi_icf_pane

0x8933,	// (0x0005244f) bg_icf_pane

0x893f,	// (0x0005245b) list_vkb_icf_pane

0x894b,	// (0x00052467) bg_icf_pane_cp01

0x895e,	// (0x0005247a) vtchi_icf_list_pane

0x896f,	// (0x0005248b) list_vkb_icf_pane_t1_ParamLimits

0x896f,	// (0x0005248b) list_vkb_icf_pane_t1

0x8985,	// (0x000524a1) vtchi_icf_list_pane_t1_ParamLimits

0x8985,	// (0x000524a1) vtchi_icf_list_pane_t1

0x8814,	// (0x00052330) popup_fep_ituss_window_ParamLimits

0x8840,	// (0x0005235c) popup_fep_vtchi_icf_pane_ParamLimits

0x8866,	// (0x00052382) ituss_keypad_pane_ParamLimits

0x1a22,	// (0x0004b53e) ituss_sks_pane

0x8933,	// (0x0005244f) bg_icf_pane_ParamLimits

0x87f0,	// (0x0005230c) icf_edit_indi_pane_ParamLimits

0x87f0,	// (0x0005230c) icf_edit_indi_pane

0x893f,	// (0x0005245b) list_vkb_icf_pane_ParamLimits

0x894b,	// (0x00052467) bg_icf_pane_cp01_ParamLimits

0x87ff,	// (0x0005231b) icf_edit_indi_pane_cp01_ParamLimits

0x87ff,	// (0x0005231b) icf_edit_indi_pane_cp01

0x8966,	// (0x00052482) vtchi_query_pane

0x4e2f,	// (0x0004e94b) icf_edit_indi_pane_g1_ParamLimits

0x4e2f,	// (0x0004e94b) icf_edit_indi_pane_g1

0x89f4,	// (0x00052510) icf_edit_indi_pane_g2_ParamLimits

0x89f4,	// (0x00052510) icf_edit_indi_pane_g2

0x0001,

0xff17,	// (0x00059a33) icf_edit_indi_pane_g_ParamLimits

0xff17,	// (0x00059a33) icf_edit_indi_pane_g

0x8a03,	// (0x0005251f) icf_edit_indi_pane_t1

0x899d,	// (0x000524b9) bg_input_focus_pane_cp042

0x7473,	// (0x00050f8f) vtchi_button_pane

0x89a6,	// (0x000524c2) vtchi_query_pane_t1

0x89b4,	// (0x000524d0) vtchi_query_pane_t2

0x89c2,	// (0x000524de) vtchi_query_pane_t3

0x0002,

0xff06,	// (0x00059a22) vtchi_query_pane_t

0x6ea9,	// (0x000509c5) bg_button_pane_cp13

0x89d0,	// (0x000524ec) vtchi_button_pane_g1

0x1b4a,	// (0x0004b666) ituss_sks_pane_g1

0x1b55,	// (0x0004b671) ituss_sks_pane_g2

0x0001,

0xff0d,	// (0x00059a29) ituss_sks_pane_g

0x89d8,	// (0x000524f4) ituss_sks_pane_t1

0x89e6,	// (0x00052502) ituss_sks_pane_t2

0x0001,

0xff12,	// (0x00059a2e) ituss_sks_pane_t

0x4664,	// (0x0004e180) indicator_nsta_pane_cp_g1

0x466d,	// (0x0004e189) indicator_nsta_pane_cp_g2

0x4675,	// (0x0004e191) indicator_nsta_pane_cp_g3

0x467d,	// (0x0004e199) indicator_nsta_pane_cp_g4

0x4685,	// (0x0004e1a1) indicator_nsta_pane_cp_g5

0x468d,	// (0x0004e1a9) indicator_nsta_pane_cp_g6

0x0005,

0xfabb,	// (0x000595d7) indicator_nsta_pane_cp_g

0xdd46,	// (0x00057862) cell_graphic2_pane_t2_ParamLimits

0xdd46,	// (0x00057862) cell_graphic2_pane_t2

0x0001,

0xfdc8,	// (0x000598e4) cell_graphic2_pane_t_ParamLimits

0xfdc8,	// (0x000598e4) cell_graphic2_pane_t

0xdd7c,	// (0x00057898) cell_graphic2_control_pane_t1

0xa9e6,	// (0x00054502) signal_pane_g3_ParamLimits

0xa9e6,	// (0x00054502) signal_pane_g3

0xa9fa,	// (0x00054516) signal_pane_g4_ParamLimits

0xa9fa,	// (0x00054516) signal_pane_g4

0x87da,	// (0x000522f6) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x87da,	// (0x000522f6) cell_ai5_widget_list_row_pane_t3

0x8900,	// (0x0005241c) cell_ituss_key_pane_t1_ParamLimits

0x8900,	// (0x0005241c) cell_ituss_key_pane_t1

0x2675,	// (0x0004c191) form_field_data_wide_pane_vc_t2_ParamLimits

0x2675,	// (0x0004c191) form_field_data_wide_pane_vc_t2

0x2689,	// (0x0004c1a5) form_field_data_wide_pane_vc_t3_ParamLimits

0x2689,	// (0x0004c1a5) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x00059325) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x00059325) form_field_data_wide_pane_vc_t

0x4315,	// (0x0004de31) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4315,	// (0x0004de31) form_field_slider_wide_pane_vc_t3

0x43eb,	// (0x0004df07) form_field_popup_wide_pane_vc_t2_ParamLimits

0x43eb,	// (0x0004df07) form_field_popup_wide_pane_vc_t2

0x4402,	// (0x0004df1e) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4402,	// (0x0004df1e) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaaa,	// (0x000595c6) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaaa,	// (0x000595c6) form_field_popup_wide_pane_vc_t

0xc424,	// (0x00055f40) aid_fshwr2_btn_pane_ParamLimits

0xc435,	// (0x00055f51) aid_fshwr2_syb_pane_ParamLimits

0xc446,	// (0x00055f62) aid_fshwr2_txt_pane_ParamLimits

0xa264,	// (0x00053d80) fshwr2_bg_pane_ParamLimits

0xc452,	// (0x00055f6e) fshwr2_func_candi_pane_ParamLimits

0xc473,	// (0x00055f8f) fshwr2_hwr_syb_pane_ParamLimits

0xc490,	// (0x00055fac) fshwr2_icf_pane_ParamLimits

0x0b23,	// (0x0004a63f) list_double_graphic_pane_vc_g4_ParamLimits

0x0b23,	// (0x0004a63f) list_double_graphic_pane_vc_g4

0x1a81,	// (0x0004b59d) cell_ituss_key_pane_g3_ParamLimits

0x1a81,	// (0x0004b59d) cell_ituss_key_pane_g3

0x1b29,	// (0x0004b645) cell_ituss_key_t5_ParamLimits

0x1b29,	// (0x0004b645) cell_ituss_key_t5
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Large
