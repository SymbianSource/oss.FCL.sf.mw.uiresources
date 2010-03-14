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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00041e35 };

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
0xb777,	// (0x0004d5ac) Screen

0xb783,	// (0x0004d5b8) application_window_ParamLimits

0xb783,	// (0x0004d5b8) application_window

0xda7d,	// (0x0004f8b2) screen_g1

0xb7bb,	// (0x0004d5f0) area_bottom_pane_ParamLimits

0xb7bb,	// (0x0004d5f0) area_bottom_pane

0x0a00,	// (0x00042835) area_top_pane_ParamLimits

0x0a00,	// (0x00042835) area_top_pane

0x0a94,	// (0x000428c9) main_pane_ParamLimits

0x0a94,	// (0x000428c9) main_pane

0xda87,	// (0x0004f8bc) misc_graphics

0xd190,	// (0x0004efc5) battery_pane_ParamLimits

0xd190,	// (0x0004efc5) battery_pane

0x5362,	// (0x00047197) bg_status_flat_pane_g8

0x536a,	// (0x0004719f) bg_status_flat_pane_g9

0x4742,	// (0x00046577) context_pane_ParamLimits

0x4742,	// (0x00046577) context_pane

0xd307,	// (0x0004f13c) navi_pane_ParamLimits

0xd307,	// (0x0004f13c) navi_pane

0xd391,	// (0x0004f1c6) signal_pane_ParamLimits

0xd391,	// (0x0004f1c6) signal_pane

0x0008,

0xf88a,	// (0x000516bf) bg_status_flat_pane_g

0xd421,	// (0x0004f256) status_pane_g1_ParamLimits

0xd421,	// (0x0004f256) status_pane_g1

0xd437,	// (0x0004f26c) status_pane_g2_ParamLimits

0xd437,	// (0x0004f26c) status_pane_g2

0x4983,	// (0x000467b8) status_pane_g3_ParamLimits

0x4983,	// (0x000467b8) status_pane_g3

0x0004,

0xf7bd,	// (0x000515f2) status_pane_g_ParamLimits

0xf7bd,	// (0x000515f2) status_pane_g

0xd443,	// (0x0004f278) title_pane_ParamLimits

0xd443,	// (0x0004f278) title_pane

0xd4a6,	// (0x0004f2db) uni_indicator_pane_ParamLimits

0xd4a6,	// (0x0004f2db) uni_indicator_pane

0x3f6f,	// (0x00045da4) bg_list_pane_ParamLimits

0x3f6f,	// (0x00045da4) bg_list_pane

0xc1d3,	// (0x0004e008) find_pane

0xc9d6,	// (0x0004e80b) listscroll_app_pane_ParamLimits

0xc9d6,	// (0x0004e80b) listscroll_app_pane

0x3fa3,	// (0x00045dd8) listscroll_form_pane

0xc1db,	// (0x0004e010) listscroll_gen_pane_ParamLimits

0xc1db,	// (0x0004e010) listscroll_gen_pane

0x3fa3,	// (0x00045dd8) listscroll_set_pane

0x5f1b,	// (0x00047d50) main_idle_act_pane

0x3c53,	// (0x00045a88) main_idle_trad_pane

0x3c53,	// (0x00045a88) main_list_empty_pane

0x3fd1,	// (0x00045e06) main_midp_pane

0x3fdd,	// (0x00045e12) main_pane_g1_ParamLimits

0x3fdd,	// (0x00045e12) main_pane_g1

0xc9f0,	// (0x0004e825) popup_ai_message_window_ParamLimits

0xc9f0,	// (0x0004e825) popup_ai_message_window

0xca90,	// (0x0004e8c5) popup_fep_china_uni_window_ParamLimits

0xca90,	// (0x0004e8c5) popup_fep_china_uni_window

0x40fb,	// (0x00045f30) popup_fep_japan_candidate_window_ParamLimits

0x40fb,	// (0x00045f30) popup_fep_japan_candidate_window

0x4125,	// (0x00045f5a) popup_fep_japan_predictive_window_ParamLimits

0x4125,	// (0x00045f5a) popup_fep_japan_predictive_window

0xcaf0,	// (0x0004e925) popup_find_window

0xcb0d,	// (0x0004e942) popup_grid_graphic_window_ParamLimits

0xcb0d,	// (0x0004e942) popup_grid_graphic_window

0x4196,	// (0x00045fcb) popup_large_graphic_colour_window

0xcbb1,	// (0x0004e9e6) popup_menu_window_ParamLimits

0xcbb1,	// (0x0004e9e6) popup_menu_window

0xcd9d,	// (0x0004ebd2) popup_note_image_window

0xcd5d,	// (0x0004eb92) popup_note_wait_window_ParamLimits

0xcd5d,	// (0x0004eb92) popup_note_wait_window

0xcdb5,	// (0x0004ebea) popup_note_window_ParamLimits

0xcdb5,	// (0x0004ebea) popup_note_window

0xce63,	// (0x0004ec98) popup_query_code_window_ParamLimits

0xce63,	// (0x0004ec98) popup_query_code_window

0x4402,	// (0x00046237) popup_query_data_code_window_ParamLimits

0x4402,	// (0x00046237) popup_query_data_code_window

0xcea3,	// (0x0004ecd8) popup_query_data_window_ParamLimits

0xcea3,	// (0x0004ecd8) popup_query_data_window

0xcf37,	// (0x0004ed6c) popup_query_sat_info_window_ParamLimits

0xcf37,	// (0x0004ed6c) popup_query_sat_info_window

0xcfe2,	// (0x0004ee17) popup_snote_single_graphic_window_ParamLimits

0xcfe2,	// (0x0004ee17) popup_snote_single_graphic_window

0xcfe2,	// (0x0004ee17) popup_snote_single_text_window_ParamLimits

0xcfe2,	// (0x0004ee17) popup_snote_single_text_window

0x449d,	// (0x000462d2) popup_sub_window_general

0x45e3,	// (0x00046418) popup_window_general_ParamLimits

0x45e3,	// (0x00046418) popup_window_general

0x45fc,	// (0x00046431) power_save_pane

0xc072,	// (0x0004dea7) control_pane_g1_ParamLimits

0xc072,	// (0x0004dea7) control_pane_g1

0xc09b,	// (0x0004ded0) control_pane_g2_ParamLimits

0xc09b,	// (0x0004ded0) control_pane_g2

0x3f20,	// (0x00045d55) control_pane_g3_ParamLimits

0x3f20,	// (0x00045d55) control_pane_g3

0x0007,

0xf7a5,	// (0x000515da) control_pane_g_ParamLimits

0xf7a5,	// (0x000515da) control_pane_g

0xc0d6,	// (0x0004df0b) control_pane_t1_ParamLimits

0xc0d6,	// (0x0004df0b) control_pane_t1

0xc134,	// (0x0004df69) control_pane_t2_ParamLimits

0xc134,	// (0x0004df69) control_pane_t2

0x0002,

0xf7b6,	// (0x000515eb) control_pane_t_ParamLimits

0xf7b6,	// (0x000515eb) control_pane_t

0x3e41,	// (0x00045c76) navi_navi_volume_pane_cp1

0x3e4a,	// (0x00045c7f) status_small_icon_pane

0x3e52,	// (0x00045c87) status_small_pane_g1_ParamLimits

0x3e52,	// (0x00045c87) status_small_pane_g1

0x3e86,	// (0x00045cbb) status_small_pane_g2_ParamLimits

0x3e86,	// (0x00045cbb) status_small_pane_g2

0x3e92,	// (0x00045cc7) status_small_pane_g3_ParamLimits

0x3e92,	// (0x00045cc7) status_small_pane_g3

0x3e9e,	// (0x00045cd3) status_small_pane_g4_ParamLimits

0x3e9e,	// (0x00045cd3) status_small_pane_g4

0x3eaa,	// (0x00045cdf) status_small_pane_g5_ParamLimits

0x3eaa,	// (0x00045cdf) status_small_pane_g5

0x3eb9,	// (0x00045cee) status_small_pane_g6_ParamLimits

0x3eb9,	// (0x00045cee) status_small_pane_g6

0x0007,

0xf794,	// (0x000515c9) status_small_pane_g_ParamLimits

0xf794,	// (0x000515c9) status_small_pane_g

0x3ee9,	// (0x00045d1e) status_small_pane_t1

0x3f0c,	// (0x00045d41) status_small_wait_pane_ParamLimits

0x3f0c,	// (0x00045d41) status_small_wait_pane

0xbf36,	// (0x0004dd6b) aid_levels_signal_ParamLimits

0xbf36,	// (0x0004dd6b) aid_levels_signal

0xbf4e,	// (0x0004dd83) signal_pane_g1_ParamLimits

0xbf4e,	// (0x0004dd83) signal_pane_g1

0xbf69,	// (0x0004dd9e) signal_pane_g2_ParamLimits

0xbf69,	// (0x0004dd9e) signal_pane_g2

0x0003,

0xf725,	// (0x0005155a) signal_pane_g_ParamLimits

0xf725,	// (0x0005155a) signal_pane_g

0x3726,	// (0x0004555b) context_pane_g1

0xb938,	// (0x0004d76d) title_pane_g1

0xb96f,	// (0x0004d7a4) title_pane_t1

0x26ff,	// (0x00044534) title_pane_t2

0x2725,	// (0x0004455a) title_pane_t3

0x0002,

0xf56f,	// (0x000513a4) title_pane_t

0xd4ce,	// (0x0004f303) aid_levels_battery_ParamLimits

0xd4ce,	// (0x0004f303) aid_levels_battery

0xd4ea,	// (0x0004f31f) battery_pane_g1_ParamLimits

0xd4ea,	// (0x0004f31f) battery_pane_g1

0xd507,	// (0x0004f33c) battery_pane_g2_ParamLimits

0xd507,	// (0x0004f33c) battery_pane_g2

0x0001,

0xf7c8,	// (0x000515fd) battery_pane_g_ParamLimits

0xf7c8,	// (0x000515fd) battery_pane_g

0xd74b,	// (0x0004f580) uni_indicator_pane_g1

0xd760,	// (0x0004f595) uni_indicator_pane_g2

0xd775,	// (0x0004f5aa) uni_indicator_pane_g3

0x0005,

0xf932,	// (0x00051767) uni_indicator_pane_g

0x3ac1,	// (0x000458f6) navi_icon_pane_ParamLimits

0x3ac1,	// (0x000458f6) navi_icon_pane

0x3a08,	// (0x0004583d) navi_midp_pane

0x3add,	// (0x00045912) navi_navi_pane

0x3ae7,	// (0x0004591c) navi_text_pane_ParamLimits

0x3ae7,	// (0x0004591c) navi_text_pane

0xda7d,	// (0x0004f8b2) status_small_wait_pane_g1

0x2b69,	// (0x0004499e) status_small_wait_pane_g2

0x0001,

0xf92d,	// (0x00051762) status_small_wait_pane_g

0xd6ea,	// (0x0004f51f) navi_navi_icon_text_pane

0xd6f2,	// (0x0004f527) navi_navi_pane_g1_ParamLimits

0xd6f2,	// (0x0004f527) navi_navi_pane_g1

0xd704,	// (0x0004f539) navi_navi_pane_g2_ParamLimits

0xd704,	// (0x0004f539) navi_navi_pane_g2

0x0001,

0xf8fb,	// (0x00051730) navi_navi_pane_g_ParamLimits

0xf8fb,	// (0x00051730) navi_navi_pane_g

0x59f1,	// (0x00047826) navi_navi_tabs_pane

0xd716,	// (0x0004f54b) navi_navi_text_pane

0xd6ea,	// (0x0004f51f) navi_navi_volume_pane

0xd6d8,	// (0x0004f50d) navi_text_pane_t1

0xd6cc,	// (0x0004f501) navi_icon_pane_g1

0x58e2,	// (0x00047717) navi_navi_text_pane_t1

0xc3b7,	// (0x0004e1ec) navi_navi_volume_pane_g1

0xc3bf,	// (0x0004e1f4) volume_small_pane

0xd628,	// (0x0004f45d) navi_navi_icon_text_pane_g1

0xd630,	// (0x0004f465) navi_navi_icon_text_pane_t1

0x3add,	// (0x00045912) navi_tabs_2_long_pane

0x3add,	// (0x00045912) navi_tabs_2_pane

0x3add,	// (0x00045912) navi_tabs_3_long_pane

0x3add,	// (0x00045912) navi_tabs_3_pane

0x3add,	// (0x00045912) navi_tabs_4_pane

0xc397,	// (0x0004e1cc) tabs_2_active_pane_ParamLimits

0xc397,	// (0x0004e1cc) tabs_2_active_pane

0xc3a7,	// (0x0004e1dc) tabs_2_passive_pane_ParamLimits

0xc3a7,	// (0x0004e1dc) tabs_2_passive_pane

0xc365,	// (0x0004e19a) tabs_3_active_pane_ParamLimits

0xc365,	// (0x0004e19a) tabs_3_active_pane

0xc375,	// (0x0004e1aa) tabs_3_passive_pane_ParamLimits

0xc375,	// (0x0004e1aa) tabs_3_passive_pane

0xc386,	// (0x0004e1bb) tabs_3_passive_pane_cp_ParamLimits

0xc386,	// (0x0004e1bb) tabs_3_passive_pane_cp

0xc321,	// (0x0004e156) tabs_4_active_pane_ParamLimits

0xc321,	// (0x0004e156) tabs_4_active_pane

0xc332,	// (0x0004e167) tabs_4_passive_pane_ParamLimits

0xc332,	// (0x0004e167) tabs_4_passive_pane

0xc343,	// (0x0004e178) tabs_4_passive_pane_cp_ParamLimits

0xc343,	// (0x0004e178) tabs_4_passive_pane_cp

0xc354,	// (0x0004e189) tabs_4_passive_pane_cp2_ParamLimits

0xc354,	// (0x0004e189) tabs_4_passive_pane_cp2

0xc2fd,	// (0x0004e132) tabs_2_long_active_pane_ParamLimits

0xc2fd,	// (0x0004e132) tabs_2_long_active_pane

0xc30f,	// (0x0004e144) tabs_2_long_passive_pane_ParamLimits

0xc30f,	// (0x0004e144) tabs_2_long_passive_pane

0xc2b2,	// (0x0004e0e7) tabs_3_long_active_pane_ParamLimits

0xc2b2,	// (0x0004e0e7) tabs_3_long_active_pane

0xc2cb,	// (0x0004e100) tabs_3_long_passive_pane_ParamLimits

0xc2cb,	// (0x0004e100) tabs_3_long_passive_pane

0xc2e4,	// (0x0004e119) tabs_3_long_passive_pane_cp_ParamLimits

0xc2e4,	// (0x0004e119) tabs_3_long_passive_pane_cp

0x155d,	// (0x00043392) volume_small_pane_g1

0xc261,	// (0x0004e096) volume_small_pane_g2

0xc26a,	// (0x0004e09f) volume_small_pane_g3

0xc273,	// (0x0004e0a8) volume_small_pane_g4

0xc27c,	// (0x0004e0b1) volume_small_pane_g5

0xc285,	// (0x0004e0ba) volume_small_pane_g6

0xc28e,	// (0x0004e0c3) volume_small_pane_g7

0xc297,	// (0x0004e0cc) volume_small_pane_g8

0xc2a0,	// (0x0004e0d5) volume_small_pane_g9

0xc2a9,	// (0x0004e0de) volume_small_pane_g10

0x0009,

0xf8c7,	// (0x000516fc) volume_small_pane_g

0x29b3,	// (0x000447e8) bg_active_tab_pane_cp2_ParamLimits

0x29b3,	// (0x000447e8) bg_active_tab_pane_cp2

0xb9fb,	// (0x0004d830) tabs_3_active_pane_g1

0xba03,	// (0x0004d838) tabs_3_active_pane_t1

0x29b3,	// (0x000447e8) bg_passive_tab_pane_cp2_ParamLimits

0x29b3,	// (0x000447e8) bg_passive_tab_pane_cp2

0xb9fb,	// (0x0004d830) tabs_3_passive_pane_g1

0xba03,	// (0x0004d838) tabs_3_passive_pane_t1

0x29b3,	// (0x000447e8) bg_active_tab_pane_cp3_ParamLimits

0x29b3,	// (0x000447e8) bg_active_tab_pane_cp3

0xba15,	// (0x0004d84a) tabs_4_active_pane_g1

0xba1d,	// (0x0004d852) tabs_4_active_pane_t1

0x29b3,	// (0x000447e8) bg_passive_tab_pane_cp3_ParamLimits

0x29b3,	// (0x000447e8) bg_passive_tab_pane_cp3

0xba15,	// (0x0004d84a) tabs_4_1_passive_pane_g1

0xba1d,	// (0x0004d852) tabs_4_1_passive_pane_t1

0x3fd1,	// (0x00045e06) list_highlight_pane_cp2

0xd833,	// (0x0004f668) list_set_pane_ParamLimits

0xd833,	// (0x0004f668) list_set_pane

0xd8fb,	// (0x0004f730) main_pane_set_t1_ParamLimits

0xd8fb,	// (0x0004f730) main_pane_set_t1

0xd91b,	// (0x0004f750) main_pane_set_t2_ParamLimits

0xd91b,	// (0x0004f750) main_pane_set_t2

0xd92f,	// (0x0004f764) main_pane_set_t3_ParamLimits

0xd92f,	// (0x0004f764) main_pane_set_t3

0xd943,	// (0x0004f778) main_pane_set_t4_ParamLimits

0xd943,	// (0x0004f778) main_pane_set_t4

0x0003,

0xf997,	// (0x000517cc) main_pane_set_t_ParamLimits

0xf997,	// (0x000517cc) main_pane_set_t

0xd957,	// (0x0004f78c) setting_code_pane

0x607b,	// (0x00047eb0) setting_slider_graphic_pane

0x607b,	// (0x00047eb0) setting_slider_pane

0x607b,	// (0x00047eb0) setting_text_pane

0x607b,	// (0x00047eb0) setting_volume_pane

0x0ceb,	// (0x00042b20) volume_set_pane

0x2737,	// (0x0004456c) bg_set_opt_pane_cp

0x0cf5,	// (0x00042b2a) setting_slider_pane_t1

0x0d0b,	// (0x00042b40) setting_slider_pane_t2

0x0d25,	// (0x00042b5a) setting_slider_pane_t3

0x0002,

0xf576,	// (0x000513ab) setting_slider_pane_t

0x0d3d,	// (0x00042b72) slider_set_pane

0xda87,	// (0x0004f8bc) bg_set_opt_pane_cp2

0x2779,	// (0x000445ae) setting_slider_graphic_pane_g1

0x0d53,	// (0x00042b88) setting_slider_graphic_pane_t1

0x0d63,	// (0x00042b98) setting_slider_graphic_pane_t2

0x0001,

0xf57d,	// (0x000513b2) setting_slider_graphic_pane_t

0x0d73,	// (0x00042ba8) slider_set_pane_cp

0xda87,	// (0x0004f8bc) input_focus_pane_cp1

0x5f02,	// (0x00047d37) list_set_text_pane

0xda7d,	// (0x0004f8b2) setting_text_pane_g1

0xda87,	// (0x0004f8bc) input_focus_pane_cp2

0xda7d,	// (0x0004f8b2) setting_code_pane_g1

0x2782,	// (0x000445b7) setting_code_pane_t1

0xf54d,	// (0x00051382) set_text_pane_t1_ParamLimits

0xf54d,	// (0x00051382) set_text_pane_t1

0x3031,	// (0x00044e66) set_opt_bg_pane_g1

0x3039,	// (0x00044e6e) set_opt_bg_pane_g2

0x5eda,	// (0x00047d0f) set_opt_bg_pane_g3

0x3049,	// (0x00044e7e) set_opt_bg_pane_g4

0x3051,	// (0x00044e86) set_opt_bg_pane_g5

0x3059,	// (0x00044e8e) set_opt_bg_pane_g6

0x5ee4,	// (0x00047d19) set_opt_bg_pane_g7

0x5eee,	// (0x00047d23) set_opt_bg_pane_g8

0x5ef8,	// (0x00047d2d) set_opt_bg_pane_g9

0x0008,

0xf984,	// (0x000517b9) set_opt_bg_pane_g

0x5ecd,	// (0x00047d02) slider_set_pane_g1

0x1741,	// (0x00043576) slider_set_pane_g2

0x0006,

0xf975,	// (0x000517aa) slider_set_pane_g

0x16c9,	// (0x000434fe) volume_set_pane_g1

0x16d3,	// (0x00043508) volume_set_pane_g2

0x16dd,	// (0x00043512) volume_set_pane_g3

0x16e7,	// (0x0004351c) volume_set_pane_g4

0x16f1,	// (0x00043526) volume_set_pane_g5

0x16fb,	// (0x00043530) volume_set_pane_g6

0x1705,	// (0x0004353a) volume_set_pane_g7

0x170f,	// (0x00043544) volume_set_pane_g8

0x1719,	// (0x0004354e) volume_set_pane_g9

0x1723,	// (0x00043558) volume_set_pane_g10

0x0009,

0xf94d,	// (0x00051782) volume_set_pane_g

0xba2f,	// (0x0004d864) indicator_pane_ParamLimits

0xba2f,	// (0x0004d864) indicator_pane

0xba5b,	// (0x0004d890) main_idle_pane_g2_ParamLimits

0xba5b,	// (0x0004d890) main_idle_pane_g2

0xba93,	// (0x0004d8c8) main_pane_idle_g1_ParamLimits

0xba93,	// (0x0004d8c8) main_pane_idle_g1

0x27d2,	// (0x00044607) popup_clock_digital_analogue_window_ParamLimits

0x27d2,	// (0x00044607) popup_clock_digital_analogue_window

0xbac1,	// (0x0004d8f6) soft_indicator_pane_ParamLimits

0xbac1,	// (0x0004d8f6) soft_indicator_pane

0xbadd,	// (0x0004d912) wallpaper_pane_ParamLimits

0xbadd,	// (0x0004d912) wallpaper_pane

0xda7d,	// (0x0004f8b2) wallpaper_pane_g1

0xbaef,	// (0x0004d924) indicator_pane_g1_ParamLimits

0xbaef,	// (0x0004d924) indicator_pane_g1

0x633f,	// (0x00048174) navi_navi_icon_text_pane_srt_g1

0x2826,	// (0x0004465b) soft_indicator_pane_t1

0x2840,	// (0x00044675) aid_ps_area_pane

0xbb08,	// (0x0004d93d) aid_ps_clock_pane

0x285f,	// (0x00044694) aid_ps_indicator_pane

0x286b,	// (0x000446a0) indicator_ps_pane_ParamLimits

0x286b,	// (0x000446a0) indicator_ps_pane

0x287a,	// (0x000446af) power_save_pane_g1_ParamLimits

0x287a,	// (0x000446af) power_save_pane_g1

0x2886,	// (0x000446bb) power_save_pane_g2_ParamLimits

0x2886,	// (0x000446bb) power_save_pane_g2

0x08f4,	// (0x00042729) aid_navinavi_width_pane

0x2840,	// (0x00044675) aid_ps_area_pane_ParamLimits

0x0001,

0xf582,	// (0x000513b7) power_save_pane_g_ParamLimits

0xf582,	// (0x000513b7) power_save_pane_g

0x2894,	// (0x000446c9) power_save_pane_t1_ParamLimits

0x2894,	// (0x000446c9) power_save_pane_t1

0xbb08,	// (0x0004d93d) aid_ps_clock_pane_ParamLimits

0x285f,	// (0x00044694) aid_ps_indicator_pane_ParamLimits

0x28a6,	// (0x000446db) power_save_pane_t4_ParamLimits

0x28a6,	// (0x000446db) power_save_pane_t4

0x0001,

0xf587,	// (0x000513bc) power_save_pane_t_ParamLimits

0xf587,	// (0x000513bc) power_save_pane_t

0x28d0,	// (0x00044705) power_save_t3_ParamLimits

0x28d0,	// (0x00044705) power_save_t3

0x28bb,	// (0x000446f0) power_save_t2_ParamLimits

0x28bb,	// (0x000446f0) power_save_t2

0x28e5,	// (0x0004471a) indicator_ps_pane_g1

0xbb16,	// (0x0004d94b) ai_gene_pane_ParamLimits

0xbb16,	// (0x0004d94b) ai_gene_pane

0xbb2d,	// (0x0004d962) ai_links_pane_ParamLimits

0xbb2d,	// (0x0004d962) ai_links_pane

0xbb45,	// (0x0004d97a) indicator_pane_cp1_ParamLimits

0xbb45,	// (0x0004d97a) indicator_pane_cp1

0xbb54,	// (0x0004d989) main_pane_idle_g1_cp_ParamLimits

0xbb54,	// (0x0004d989) main_pane_idle_g1_cp

0x291e,	// (0x00044753) popup_ai_links_title_window

0xbb6c,	// (0x0004d9a1) soft_indicator_pane_cp1_ParamLimits

0xbb6c,	// (0x0004d9a1) soft_indicator_pane_cp1

0x5ca0,	// (0x00047ad5) ai_links_pane_g1

0x5ca9,	// (0x00047ade) grid_ai_links_pane

0xd742,	// (0x0004f577) ai_gene_pane_1

0x5c8e,	// (0x00047ac3) ai_gene_pane_2

0x5c97,	// (0x00047acc) list_highlight_pane_cp4

0xd71e,	// (0x0004f553) cell_ai_link_pane_ParamLimits

0xd71e,	// (0x0004f553) cell_ai_link_pane

0x5c5d,	// (0x00047a92) cell_ai_link_pane_g1

0x2b69,	// (0x0004499e) cell_ai_link_pane_g2

0x0001,

0xf928,	// (0x0005175d) cell_ai_link_pane_g

0xda87,	// (0x0004f8bc) grid_highlight_cp2

0xda87,	// (0x0004f8bc) bg_popup_sub_pane_cp1

0x2941,	// (0x00044776) popup_ai_links_title_window_t1

0x5ba9,	// (0x000479de) ai_gene_pane_1_g1_ParamLimits

0x5ba9,	// (0x000479de) ai_gene_pane_1_g1

0x5bb5,	// (0x000479ea) ai_gene_pane_1_g2_ParamLimits

0x5bb5,	// (0x000479ea) ai_gene_pane_1_g2

0x0001,

0xf91e,	// (0x00051753) ai_gene_pane_1_g_ParamLimits

0xf91e,	// (0x00051753) ai_gene_pane_1_g

0x5bc2,	// (0x000479f7) ai_gene_pane_1_t1_ParamLimits

0x5bc2,	// (0x000479f7) ai_gene_pane_1_t1

0x5bf6,	// (0x00047a2b) grid_ai_soft_ind_pane

0x5b94,	// (0x000479c9) ai_gene_pane_2_t1_ParamLimits

0x5b94,	// (0x000479c9) ai_gene_pane_2_t1

0xbb80,	// (0x0004d9b5) main_pane_empty_t1_ParamLimits

0xbb80,	// (0x0004d9b5) main_pane_empty_t1

0xbb98,	// (0x0004d9cd) main_pane_empty_t2_ParamLimits

0xbb98,	// (0x0004d9cd) main_pane_empty_t2

0xbbad,	// (0x0004d9e2) main_pane_empty_t3_ParamLimits

0xbbad,	// (0x0004d9e2) main_pane_empty_t3

0xbbbf,	// (0x0004d9f4) main_pane_empty_t4_ParamLimits

0xbbbf,	// (0x0004d9f4) main_pane_empty_t4

0xbbd1,	// (0x0004da06) main_pane_empty_t5_ParamLimits

0xbbd1,	// (0x0004da06) main_pane_empty_t5

0x0004,

0xf58c,	// (0x000513c1) main_pane_empty_t_ParamLimits

0xf58c,	// (0x000513c1) main_pane_empty_t

0x3082,	// (0x00044eb7) bg_popup_window_pane_ParamLimits

0x3082,	// (0x00044eb7) bg_popup_window_pane

0x58f0,	// (0x00047725) find_popup_pane_cp2_ParamLimits

0x58f0,	// (0x00047725) find_popup_pane_cp2

0x58fc,	// (0x00047731) heading_pane_ParamLimits

0x58fc,	// (0x00047731) heading_pane

0xda87,	// (0x0004f8bc) bg_popup_sub_pane

0xd64d,	// (0x0004f482) bg_popup_window_pane_g1_ParamLimits

0xd64d,	// (0x0004f482) bg_popup_window_pane_g1

0xd65c,	// (0x0004f491) bg_popup_window_pane_g2_ParamLimits

0xd65c,	// (0x0004f491) bg_popup_window_pane_g2

0xd668,	// (0x0004f49d) bg_popup_window_pane_g3_ParamLimits

0xd668,	// (0x0004f49d) bg_popup_window_pane_g3

0xd674,	// (0x0004f4a9) bg_popup_window_pane_g4_ParamLimits

0xd674,	// (0x0004f4a9) bg_popup_window_pane_g4

0xd683,	// (0x0004f4b8) bg_popup_window_pane_g5_ParamLimits

0xd683,	// (0x0004f4b8) bg_popup_window_pane_g5

0xd693,	// (0x0004f4c8) bg_popup_window_pane_g6_ParamLimits

0xd693,	// (0x0004f4c8) bg_popup_window_pane_g6

0xd69f,	// (0x0004f4d4) bg_popup_window_pane_g7_ParamLimits

0xd69f,	// (0x0004f4d4) bg_popup_window_pane_g7

0xd6ae,	// (0x0004f4e3) bg_popup_window_pane_g8_ParamLimits

0xd6ae,	// (0x0004f4e3) bg_popup_window_pane_g8

0xd6bd,	// (0x0004f4f2) bg_popup_window_pane_g9_ParamLimits

0xd6bd,	// (0x0004f4f2) bg_popup_window_pane_g9

0x58d6,	// (0x0004770b) bg_popup_window_pane_g10_ParamLimits

0x58d6,	// (0x0004770b) bg_popup_window_pane_g10

0x0009,

0xf8e6,	// (0x0005171b) bg_popup_window_pane_g_ParamLimits

0xf8e6,	// (0x0005171b) bg_popup_window_pane_g

0x57ff,	// (0x00047634) bg_popup_heading_pane_ParamLimits

0x57ff,	// (0x00047634) bg_popup_heading_pane

0x17f5,	// (0x0004362a) tabs_4_passive_pane_cp_srt_ParamLimits

0x17f5,	// (0x0004362a) tabs_4_passive_pane_cp_srt

0x1807,	// (0x0004363c) tabs_4_passive_pane_srt_ParamLimits

0x5813,	// (0x00047648) heading_pane_g2

0x1807,	// (0x0004363c) tabs_4_passive_pane_srt

0x4c00,	// (0x00046a35) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4c00,	// (0x00046a35) bg_passive_tab_pane_cp3_srt

0x581b,	// (0x00047650) heading_pane_t1_ParamLimits

0x581b,	// (0x00047650) heading_pane_t1

0x5832,	// (0x00047667) heading_pane_t2_ParamLimits

0x5832,	// (0x00047667) heading_pane_t2

0x0001,

0xf8e1,	// (0x00051716) heading_pane_t_ParamLimits

0xf8e1,	// (0x00051716) heading_pane_t

0x532a,	// (0x0004715f) bg_popup_heading_pane_g1

0x53d9,	// (0x0004720e) bg_popup_heading_pane_g2

0x53e3,	// (0x00047218) bg_popup_heading_pane_g3

0x53ed,	// (0x00047222) bg_popup_heading_pane_g4

0x53f7,	// (0x0004722c) bg_popup_heading_pane_g5

0x5401,	// (0x00047236) bg_popup_heading_pane_g6

0x5409,	// (0x0004723e) bg_popup_heading_pane_g7

0x5411,	// (0x00047246) bg_popup_heading_pane_g8

0x541b,	// (0x00047250) bg_popup_heading_pane_g9

0x0008,

0xf89d,	// (0x000516d2) bg_popup_heading_pane_g

0x4b0e,	// (0x00046943) bg_popup_sub_pane_g1

0x4b16,	// (0x0004694b) bg_popup_sub_pane_g2

0x4b1e,	// (0x00046953) bg_popup_sub_pane_g3

0x4b26,	// (0x0004695b) bg_popup_sub_pane_g4

0x4b2e,	// (0x00046963) bg_popup_sub_pane_g5

0x4b36,	// (0x0004696b) bg_popup_sub_pane_g6

0x4b3e,	// (0x00046973) bg_popup_sub_pane_g7

0x4b46,	// (0x0004697b) bg_popup_sub_pane_g8

0x4b4e,	// (0x00046983) bg_popup_sub_pane_g9

0x0008,

0xf877,	// (0x000516ac) bg_popup_sub_pane_g

0x29b3,	// (0x000447e8) bg_popup_window_pane_cp5_ParamLimits

0x29b3,	// (0x000447e8) bg_popup_window_pane_cp5

0x29cf,	// (0x00044804) popup_note_window_g1_ParamLimits

0x29cf,	// (0x00044804) popup_note_window_g1

0x29db,	// (0x00044810) popup_note_window_t1_ParamLimits

0x29db,	// (0x00044810) popup_note_window_t1

0x29f1,	// (0x00044826) popup_note_window_t2_ParamLimits

0x29f1,	// (0x00044826) popup_note_window_t2

0x2a07,	// (0x0004483c) popup_note_window_t3_ParamLimits

0x2a07,	// (0x0004483c) popup_note_window_t3

0x2a1d,	// (0x00044852) popup_note_window_t4_ParamLimits

0x2a1d,	// (0x00044852) popup_note_window_t4

0x2a45,	// (0x0004487a) popup_note_window_t5_ParamLimits

0x2a45,	// (0x0004487a) popup_note_window_t5

0x0004,

0xf597,	// (0x000513cc) popup_note_window_t_ParamLimits

0xf597,	// (0x000513cc) popup_note_window_t

0x2a69,	// (0x0004489e) bg_popup_window_pane_cp6_ParamLimits

0x2a69,	// (0x0004489e) bg_popup_window_pane_cp6

0x52a6,	// (0x000470db) popup_note_image_window_g1_ParamLimits

0x52a6,	// (0x000470db) popup_note_image_window_g1

0x52b2,	// (0x000470e7) popup_note_image_window_g2_ParamLimits

0x52b2,	// (0x000470e7) popup_note_image_window_g2

0x0001,

0xf86b,	// (0x000516a0) popup_note_image_window_g_ParamLimits

0xf86b,	// (0x000516a0) popup_note_image_window_g

0x52cb,	// (0x00047100) popup_note_image_window_t1_ParamLimits

0x52cb,	// (0x00047100) popup_note_image_window_t1

0x52e4,	// (0x00047119) popup_note_image_window_t2_ParamLimits

0x52e4,	// (0x00047119) popup_note_image_window_t2

0x52fd,	// (0x00047132) popup_note_image_window_t3_ParamLimits

0x52fd,	// (0x00047132) popup_note_image_window_t3

0x0002,

0xf870,	// (0x000516a5) popup_note_image_window_t_ParamLimits

0xf870,	// (0x000516a5) popup_note_image_window_t

0x5166,	// (0x00046f9b) bg_popup_window_pane_cp7_ParamLimits

0x5166,	// (0x00046f9b) bg_popup_window_pane_cp7

0x5196,	// (0x00046fcb) popup_note_wait_window_g1_ParamLimits

0x5196,	// (0x00046fcb) popup_note_wait_window_g1

0x51a2,	// (0x00046fd7) popup_note_wait_window_g2_ParamLimits

0x51a2,	// (0x00046fd7) popup_note_wait_window_g2

0x0002,

0xf859,	// (0x0005168e) popup_note_wait_window_g_ParamLimits

0xf859,	// (0x0005168e) popup_note_wait_window_g

0x51ba,	// (0x00046fef) popup_note_wait_window_t1_ParamLimits

0x51ba,	// (0x00046fef) popup_note_wait_window_t1

0x51e1,	// (0x00047016) popup_note_wait_window_t2_ParamLimits

0x51e1,	// (0x00047016) popup_note_wait_window_t2

0x51ff,	// (0x00047034) popup_note_wait_window_t3_ParamLimits

0x51ff,	// (0x00047034) popup_note_wait_window_t3

0x5212,	// (0x00047047) popup_note_wait_window_t4_ParamLimits

0x5212,	// (0x00047047) popup_note_wait_window_t4

0x0004,

0xf860,	// (0x00051695) popup_note_wait_window_t_ParamLimits

0xf860,	// (0x00051695) popup_note_wait_window_t

0x5237,	// (0x0004706c) wait_bar_pane_ParamLimits

0x5237,	// (0x0004706c) wait_bar_pane

0xda87,	// (0x0004f8bc) wait_anim_pane

0xda87,	// (0x0004f8bc) wait_border_pane

0xda7d,	// (0x0004f8b2) wait_anim_pane_g1

0xda7d,	// (0x0004f8b2) wait_anim_pane_g2

0x0001,

0xf720,	// (0x00051555) wait_anim_pane_g

0x510a,	// (0x00046f3f) wait_border_pane_g1

0x5115,	// (0x00046f4a) wait_border_pane_g2

0x511e,	// (0x00046f53) wait_border_pane_g3

0x0002,

0xf852,	// (0x00051687) wait_border_pane_g

0x4f74,	// (0x00046da9) bg_popup_window_pane_cp16_ParamLimits

0x4f74,	// (0x00046da9) bg_popup_window_pane_cp16

0x5074,	// (0x00046ea9) indicator_popup_pane_cp4_ParamLimits

0x5074,	// (0x00046ea9) indicator_popup_pane_cp4

0x5088,	// (0x00046ebd) popup_query_data_window_t1_ParamLimits

0x5088,	// (0x00046ebd) popup_query_data_window_t1

0x509a,	// (0x00046ecf) popup_query_data_window_t2_ParamLimits

0x509a,	// (0x00046ecf) popup_query_data_window_t2

0x50b3,	// (0x00046ee8) popup_query_data_window_t3_ParamLimits

0x50b3,	// (0x00046ee8) popup_query_data_window_t3

0x0002,

0xf84b,	// (0x00051680) popup_query_data_window_t_ParamLimits

0xf84b,	// (0x00051680) popup_query_data_window_t

0x50cd,	// (0x00046f02) query_popup_data_pane_ParamLimits

0x50cd,	// (0x00046f02) query_popup_data_pane

0x50e1,	// (0x00046f16) query_popup_data_pane_cp1_ParamLimits

0x50e1,	// (0x00046f16) query_popup_data_pane_cp1

0x4f74,	// (0x00046da9) bg_popup_window_pane_cp10_ParamLimits

0x4f74,	// (0x00046da9) bg_popup_window_pane_cp10

0x4fa6,	// (0x00046ddb) indicator_popup_pane_ParamLimits

0x4fa6,	// (0x00046ddb) indicator_popup_pane

0x4fc8,	// (0x00046dfd) popup_query_code_window_t1_ParamLimits

0x4fc8,	// (0x00046dfd) popup_query_code_window_t1

0x4fe2,	// (0x00046e17) popup_query_code_window_t2_ParamLimits

0x4fe2,	// (0x00046e17) popup_query_code_window_t2

0x502b,	// (0x00046e60) popup_query_code_window_t3_ParamLimits

0x502b,	// (0x00046e60) popup_query_code_window_t3

0x0002,

0xf844,	// (0x00051679) popup_query_code_window_t_ParamLimits

0xf844,	// (0x00051679) popup_query_code_window_t

0x505a,	// (0x00046e8f) query_popup_pane_ParamLimits

0x505a,	// (0x00046e8f) query_popup_pane

0x2a69,	// (0x0004489e) bg_popup_window_pane_cp15_ParamLimits

0x2a69,	// (0x0004489e) bg_popup_window_pane_cp15

0x2a89,	// (0x000448be) indicator_popup_pane_cp1_ParamLimits

0x2a89,	// (0x000448be) indicator_popup_pane_cp1

0x2a9c,	// (0x000448d1) indicator_popup_pane_cp2_ParamLimits

0x2a9c,	// (0x000448d1) indicator_popup_pane_cp2

0x2ab7,	// (0x000448ec) popup_query_data_code_window_g1_ParamLimits

0x2ab7,	// (0x000448ec) popup_query_data_code_window_g1

0x2aca,	// (0x000448ff) popup_query_data_code_window_t1_ParamLimits

0x2aca,	// (0x000448ff) popup_query_data_code_window_t1

0x2adc,	// (0x00044911) popup_query_data_code_window_t2_ParamLimits

0x2adc,	// (0x00044911) popup_query_data_code_window_t2

0x2aee,	// (0x00044923) popup_query_data_code_window_t3_ParamLimits

0x2aee,	// (0x00044923) popup_query_data_code_window_t3

0x2b04,	// (0x00044939) popup_query_data_code_window_t4_ParamLimits

0x2b04,	// (0x00044939) popup_query_data_code_window_t4

0x0003,

0xf5a2,	// (0x000513d7) popup_query_data_code_window_t_ParamLimits

0xf5a2,	// (0x000513d7) popup_query_data_code_window_t

0x3a7d,	// (0x000458b2) list_single_midp_graphic_pane_g3

0x2b1e,	// (0x00044953) query_popup_data_pane_cp2_ParamLimits

0x2b31,	// (0x00044966) query_popup_pane_cp2_ParamLimits

0x2b31,	// (0x00044966) query_popup_pane_cp2

0xda87,	// (0x0004f8bc) bg_popup_window_pane_cp11

0x4f6c,	// (0x00046da1) heading_pane_cp5

0x2c21,	// (0x00044a56) listscroll_popup_info_pane

0xda87,	// (0x0004f8bc) input_focus_pane_cp3

0x2b4c,	// (0x00044981) query_popup_pane_t1

0x2b5a,	// (0x0004498f) list_popup_info_pane_ParamLimits

0x2b5a,	// (0x0004498f) list_popup_info_pane

0x2b69,	// (0x0004499e) listscroll_popup_info_pane_g1

0x2b71,	// (0x000449a6) scroll_pane_cp7

0x2b7b,	// (0x000449b0) popup_info_list_pane_t1_ParamLimits

0x2b7b,	// (0x000449b0) popup_info_list_pane_t1

0x2b95,	// (0x000449ca) popup_info_list_pane_t2_ParamLimits

0x2b95,	// (0x000449ca) popup_info_list_pane_t2

0x0001,

0xf5ab,	// (0x000513e0) popup_info_list_pane_t_ParamLimits

0xf5ab,	// (0x000513e0) popup_info_list_pane_t

0xda87,	// (0x0004f8bc) bg_popup_window_pane_cp12

0x6359,	// (0x0004818e) find_popup_pane

0x2737,	// (0x0004456c) bg_popup_window_pane_cp3

0x2baf,	// (0x000449e4) heading_pane_cp3

0x2bbb,	// (0x000449f0) listscroll_popup_graphic_pane

0xda87,	// (0x0004f8bc) bg_popup_window_pane_cp4

0xbc33,	// (0x0004da68) heading_pane_cp4

0x2c21,	// (0x00044a56) listscroll_popup_colour_pane

0xbc3d,	// (0x0004da72) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xbc3d,	// (0x0004da72) cell_large_graphic_colour_none_popup_pane

0xbc51,	// (0x0004da86) grid_large_graphic_colour_popup_pane_ParamLimits

0xbc51,	// (0x0004da86) grid_large_graphic_colour_popup_pane

0xbc7d,	// (0x0004dab2) listscroll_popup_colour_pane_g1_ParamLimits

0xbc7d,	// (0x0004dab2) listscroll_popup_colour_pane_g1

0xbc94,	// (0x0004dac9) listscroll_popup_colour_pane_g2_ParamLimits

0xbc94,	// (0x0004dac9) listscroll_popup_colour_pane_g2

0xbcab,	// (0x0004dae0) listscroll_popup_colour_pane_g3_ParamLimits

0xbcab,	// (0x0004dae0) listscroll_popup_colour_pane_g3

0xbcbb,	// (0x0004daf0) listscroll_popup_colour_pane_g4_ParamLimits

0xbcbb,	// (0x0004daf0) listscroll_popup_colour_pane_g4

0x0003,

0xf5b0,	// (0x000513e5) listscroll_popup_colour_pane_g_ParamLimits

0xf5b0,	// (0x000513e5) listscroll_popup_colour_pane_g

0x2cbb,	// (0x00044af0) scroll_pane_cp6_ParamLimits

0x2cbb,	// (0x00044af0) scroll_pane_cp6

0xbccf,	// (0x0004db04) cell_large_graphic_colour_popup_pane_ParamLimits

0xbccf,	// (0x0004db04) cell_large_graphic_colour_popup_pane

0x2cf2,	// (0x00044b27) cell_large_graphic_colour_none_popup_pane_t1

0xda87,	// (0x0004f8bc) grid_highlight_pane_cp5

0x2d01,	// (0x00044b36) cell_large_graphic_colour_popup_pane_g1

0x2d09,	// (0x00044b3e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5b9,	// (0x000513ee) cell_large_graphic_colour_popup_pane_g

0x2d11,	// (0x00044b46) cell_large_graphic_colour_popup_pane_g2_copy1

0x2d1a,	// (0x00044b4f) grid_highlight_pane_cp4

0x2d22,	// (0x00044b57) bg_popup_window_pane_cp8_ParamLimits

0x2d22,	// (0x00044b57) bg_popup_window_pane_cp8

0x2d3d,	// (0x00044b72) popup_snote_single_text_window_g1_ParamLimits

0x2d3d,	// (0x00044b72) popup_snote_single_text_window_g1

0x2d4f,	// (0x00044b84) popup_snote_single_text_window_t1_ParamLimits

0x2d4f,	// (0x00044b84) popup_snote_single_text_window_t1

0x2d62,	// (0x00044b97) popup_snote_single_text_window_t2_ParamLimits

0x2d62,	// (0x00044b97) popup_snote_single_text_window_t2

0x2d75,	// (0x00044baa) popup_snote_single_text_window_t3_ParamLimits

0x2d75,	// (0x00044baa) popup_snote_single_text_window_t3

0x2dae,	// (0x00044be3) popup_snote_single_text_window_t4_ParamLimits

0x2dae,	// (0x00044be3) popup_snote_single_text_window_t4

0x2de2,	// (0x00044c17) popup_snote_single_text_window_t5_ParamLimits

0x2de2,	// (0x00044c17) popup_snote_single_text_window_t5

0x0004,

0xf5be,	// (0x000513f3) popup_snote_single_text_window_t_ParamLimits

0xf5be,	// (0x000513f3) popup_snote_single_text_window_t

0x2e11,	// (0x00044c46) bg_popup_window_pane_cp9_ParamLimits

0x2e11,	// (0x00044c46) bg_popup_window_pane_cp9

0x2d3d,	// (0x00044b72) popup_snote_single_graphic_window_g1_ParamLimits

0x2d3d,	// (0x00044b72) popup_snote_single_graphic_window_g1

0x2e1f,	// (0x00044c54) popup_snote_single_graphic_window_g2_ParamLimits

0x2e1f,	// (0x00044c54) popup_snote_single_graphic_window_g2

0x0001,

0xf5c9,	// (0x000513fe) popup_snote_single_graphic_window_g_ParamLimits

0xf5c9,	// (0x000513fe) popup_snote_single_graphic_window_g

0x2e2b,	// (0x00044c60) popup_snote_single_graphic_window_t1_ParamLimits

0x2e2b,	// (0x00044c60) popup_snote_single_graphic_window_t1

0x2e3e,	// (0x00044c73) popup_snote_single_graphic_window_t2_ParamLimits

0x2e3e,	// (0x00044c73) popup_snote_single_graphic_window_t2

0x2e51,	// (0x00044c86) popup_snote_single_graphic_window_t3_ParamLimits

0x2e51,	// (0x00044c86) popup_snote_single_graphic_window_t3

0x2e8a,	// (0x00044cbf) popup_snote_single_graphic_window_t4_ParamLimits

0x2e8a,	// (0x00044cbf) popup_snote_single_graphic_window_t4

0x2ebe,	// (0x00044cf3) popup_snote_single_graphic_window_t5_ParamLimits

0x2ebe,	// (0x00044cf3) popup_snote_single_graphic_window_t5

0x0004,

0xf5ce,	// (0x00051403) popup_snote_single_graphic_window_t_ParamLimits

0xf5ce,	// (0x00051403) popup_snote_single_graphic_window_t

0x6297,	// (0x000480cc) grid_graphic_popup_pane_ParamLimits

0x6297,	// (0x000480cc) grid_graphic_popup_pane

0x62c5,	// (0x000480fa) listscroll_popup_graphic_pane_g1_ParamLimits

0x62c5,	// (0x000480fa) listscroll_popup_graphic_pane_g1

0xda57,	// (0x0004f88c) listscroll_popup_graphic_pane_g2_ParamLimits

0xda57,	// (0x0004f88c) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c1,	// (0x000517f6) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c1,	// (0x000517f6) listscroll_popup_graphic_pane_g

0x62ed,	// (0x00048122) scroll_pane_cp5

0xda17,	// (0x0004f84c) cell_graphic_popup_pane_ParamLimits

0xda17,	// (0x0004f84c) cell_graphic_popup_pane

0x6220,	// (0x00048055) cell_graphic_popup_pane_g1

0x6228,	// (0x0004805d) cell_graphic_popup_pane_g2

0x2d11,	// (0x00044b46) cell_graphic_popup_pane_g3

0x0002,

0xf9ba,	// (0x000517ef) cell_graphic_popup_pane_g

0x6231,	// (0x00048066) cell_graphic_popup_pane_t2

0x2d1a,	// (0x00044b4f) grid_highlight_pane_cp3

0x2eff,	// (0x00044d34) list_gen_pane_ParamLimits

0x2eff,	// (0x00044d34) list_gen_pane

0x2f31,	// (0x00044d66) scroll_pane

0xd9d2,	// (0x0004f807) bg_list_pane_g1_ParamLimits

0xd9d2,	// (0x0004f807) bg_list_pane_g1

0x619d,	// (0x00047fd2) bg_list_pane_g2_ParamLimits

0x619d,	// (0x00047fd2) bg_list_pane_g2

0x61b0,	// (0x00047fe5) bg_list_pane_g3_ParamLimits

0x61b0,	// (0x00047fe5) bg_list_pane_g3

0x61c2,	// (0x00047ff7) bg_list_pane_g4_ParamLimits

0x61c2,	// (0x00047ff7) bg_list_pane_g4

0xd9ed,	// (0x0004f822) bg_list_pane_g5_ParamLimits

0xd9ed,	// (0x0004f822) bg_list_pane_g5

0x0004,

0xf9af,	// (0x000517e4) bg_list_pane_g_ParamLimits

0xf9af,	// (0x000517e4) bg_list_pane_g

0xd995,	// (0x0004f7ca) list_double2_graphic_large_graphic_pane_ParamLimits

0xd995,	// (0x0004f7ca) list_double2_graphic_large_graphic_pane

0xd995,	// (0x0004f7ca) list_double2_graphic_pane_ParamLimits

0xd995,	// (0x0004f7ca) list_double2_graphic_pane

0xd995,	// (0x0004f7ca) list_double2_large_graphic_pane_ParamLimits

0xd995,	// (0x0004f7ca) list_double2_large_graphic_pane

0xd995,	// (0x0004f7ca) list_double2_pane_ParamLimits

0xd995,	// (0x0004f7ca) list_double2_pane

0xd995,	// (0x0004f7ca) list_double_graphic_heading_pane_ParamLimits

0xd995,	// (0x0004f7ca) list_double_graphic_heading_pane

0xd995,	// (0x0004f7ca) list_double_graphic_pane_ParamLimits

0xd995,	// (0x0004f7ca) list_double_graphic_pane

0xd995,	// (0x0004f7ca) list_double_heading_pane_ParamLimits

0xd995,	// (0x0004f7ca) list_double_heading_pane

0xd995,	// (0x0004f7ca) list_double_large_graphic_pane_ParamLimits

0xd995,	// (0x0004f7ca) list_double_large_graphic_pane

0xd995,	// (0x0004f7ca) list_double_number_pane_ParamLimits

0xd995,	// (0x0004f7ca) list_double_number_pane

0xd995,	// (0x0004f7ca) list_double_pane_ParamLimits

0xd995,	// (0x0004f7ca) list_double_pane

0xd995,	// (0x0004f7ca) list_double_time_pane_ParamLimits

0xd995,	// (0x0004f7ca) list_double_time_pane

0xd995,	// (0x0004f7ca) list_setting_number_pane_ParamLimits

0xd995,	// (0x0004f7ca) list_setting_number_pane

0xd995,	// (0x0004f7ca) list_setting_pane_ParamLimits

0xd995,	// (0x0004f7ca) list_setting_pane

0xd9a9,	// (0x0004f7de) list_single_2graphic_pane_ParamLimits

0xd9a9,	// (0x0004f7de) list_single_2graphic_pane

0xd9a9,	// (0x0004f7de) list_single_graphic_heading_pane_ParamLimits

0xd9a9,	// (0x0004f7de) list_single_graphic_heading_pane

0xd9a9,	// (0x0004f7de) list_single_graphic_pane_ParamLimits

0xd9a9,	// (0x0004f7de) list_single_graphic_pane

0xd9a9,	// (0x0004f7de) list_single_heading_pane_ParamLimits

0xd9a9,	// (0x0004f7de) list_single_heading_pane

0xd9a9,	// (0x0004f7de) list_single_large_graphic_pane_ParamLimits

0xd9a9,	// (0x0004f7de) list_single_large_graphic_pane

0xd9a9,	// (0x0004f7de) list_single_number_heading_pane_ParamLimits

0xd9a9,	// (0x0004f7de) list_single_number_heading_pane

0xd9a9,	// (0x0004f7de) list_single_number_pane_ParamLimits

0xd9a9,	// (0x0004f7de) list_single_number_pane

0xd9a9,	// (0x0004f7de) list_single_pane_ParamLimits

0xd9a9,	// (0x0004f7de) list_single_pane

0xda87,	// (0x0004f8bc) list_highlight_pane_cp1

0x3bc4,	// (0x000459f9) list_single_pane_g1_ParamLimits

0x3bc4,	// (0x000459f9) list_single_pane_g1

0x144c,	// (0x00043281) list_single_pane_g2_ParamLimits

0x144c,	// (0x00043281) list_single_pane_g2

0x0001,

0xf5ea,	// (0x0005141f) list_single_pane_g_ParamLimits

0xf5ea,	// (0x0005141f) list_single_pane_g

0x04d8,	// (0x0004230d) list_single_pane_t1_ParamLimits

0x04d8,	// (0x0004230d) list_single_pane_t1

0x3bc4,	// (0x000459f9) list_single_number_pane_g1_ParamLimits

0x3bc4,	// (0x000459f9) list_single_number_pane_g1

0x144c,	// (0x00043281) list_single_number_pane_g2_ParamLimits

0x144c,	// (0x00043281) list_single_number_pane_g2

0x0001,

0xf5ea,	// (0x0005141f) list_single_number_pane_g_ParamLimits

0xf5ea,	// (0x0005141f) list_single_number_pane_g

0x03bb,	// (0x000421f0) list_single_number_pane_t1_ParamLimits

0x03bb,	// (0x000421f0) list_single_number_pane_t1

0xb5a8,	// (0x0004d3dd) list_single_number_pane_t2_ParamLimits

0xb5a8,	// (0x0004d3dd) list_single_number_pane_t2

0x0001,

0xf970,	// (0x000517a5) list_single_number_pane_t_ParamLimits

0xf970,	// (0x000517a5) list_single_number_pane_t

0xaf60,	// (0x0004cd95) list_single_graphic_pane_g1_ParamLimits

0xaf60,	// (0x0004cd95) list_single_graphic_pane_g1

0x3bc4,	// (0x000459f9) list_single_graphic_pane_g2_ParamLimits

0x3bc4,	// (0x000459f9) list_single_graphic_pane_g2

0x144c,	// (0x00043281) list_single_graphic_pane_g3_ParamLimits

0x144c,	// (0x00043281) list_single_graphic_pane_g3

0x0002,

0xf5d9,	// (0x0005140e) list_single_graphic_pane_g_ParamLimits

0xf5d9,	// (0x0005140e) list_single_graphic_pane_g

0xaf6c,	// (0x0004cda1) list_single_graphic_pane_t1_ParamLimits

0xaf6c,	// (0x0004cda1) list_single_graphic_pane_t1

0xaf82,	// (0x0004cdb7) list_single_heading_pane_g1_ParamLimits

0xaf82,	// (0x0004cdb7) list_single_heading_pane_g1

0x144c,	// (0x00043281) list_single_heading_pane_g2_ParamLimits

0x144c,	// (0x00043281) list_single_heading_pane_g2

0x0001,

0xf5e0,	// (0x00051415) list_single_heading_pane_g_ParamLimits

0xf5e0,	// (0x00051415) list_single_heading_pane_g

0xaf95,	// (0x0004cdca) list_single_heading_pane_t1_ParamLimits

0xaf95,	// (0x0004cdca) list_single_heading_pane_t1

0xbcfa,	// (0x0004db2f) list_single_heading_pane_t2_ParamLimits

0xbcfa,	// (0x0004db2f) list_single_heading_pane_t2

0x0001,

0xf5e5,	// (0x0005141a) list_single_heading_pane_t_ParamLimits

0xf5e5,	// (0x0005141a) list_single_heading_pane_t

0x3bc4,	// (0x000459f9) list_single_number_heading_pane_g1_ParamLimits

0x3bc4,	// (0x000459f9) list_single_number_heading_pane_g1

0x144c,	// (0x00043281) list_single_number_heading_pane_g2_ParamLimits

0x144c,	// (0x00043281) list_single_number_heading_pane_g2

0x0001,

0xf5ea,	// (0x0005141f) list_single_number_heading_pane_g_ParamLimits

0xf5ea,	// (0x0005141f) list_single_number_heading_pane_g

0x04ee,	// (0x00042323) list_single_number_heading_pane_t1_ParamLimits

0x04ee,	// (0x00042323) list_single_number_heading_pane_t1

0xafab,	// (0x0004cde0) list_single_number_heading_pane_t2_ParamLimits

0xafab,	// (0x0004cde0) list_single_number_heading_pane_t2

0x04b4,	// (0x000422e9) list_single_number_heading_pane_t3_ParamLimits

0x04b4,	// (0x000422e9) list_single_number_heading_pane_t3

0x0002,

0xf5ef,	// (0x00051424) list_single_number_heading_pane_t_ParamLimits

0xf5ef,	// (0x00051424) list_single_number_heading_pane_t

0xafbd,	// (0x0004cdf2) list_single_graphic_heading_pane_g1_ParamLimits

0xafbd,	// (0x0004cdf2) list_single_graphic_heading_pane_g1

0xbd0c,	// (0x0004db41) list_single_graphic_heading_pane_g4_ParamLimits

0xbd0c,	// (0x0004db41) list_single_graphic_heading_pane_g4

0x144c,	// (0x00043281) list_single_graphic_heading_pane_g5_ParamLimits

0x144c,	// (0x00043281) list_single_graphic_heading_pane_g5

0x0002,

0xf5f6,	// (0x0005142b) list_single_graphic_heading_pane_g_ParamLimits

0xf5f6,	// (0x0005142b) list_single_graphic_heading_pane_g

0x04ee,	// (0x00042323) list_single_graphic_heading_pane_t1_ParamLimits

0x04ee,	// (0x00042323) list_single_graphic_heading_pane_t1

0xafd5,	// (0x0004ce0a) list_single_graphic_heading_pane_t2_ParamLimits

0xafd5,	// (0x0004ce0a) list_single_graphic_heading_pane_t2

0x0001,

0xf5fd,	// (0x00051432) list_single_graphic_heading_pane_t_ParamLimits

0xf5fd,	// (0x00051432) list_single_graphic_heading_pane_t

0x18b2,	// (0x000436e7) list_single_large_graphic_pane_g1_ParamLimits

0x18b2,	// (0x000436e7) list_single_large_graphic_pane_g1

0x3bc4,	// (0x000459f9) list_single_large_graphic_pane_g2_ParamLimits

0x3bc4,	// (0x000459f9) list_single_large_graphic_pane_g2

0x144c,	// (0x00043281) list_single_large_graphic_pane_g3_ParamLimits

0x144c,	// (0x00043281) list_single_large_graphic_pane_g3

0x0002,

0xf602,	// (0x00051437) list_single_large_graphic_pane_g_ParamLimits

0xf602,	// (0x00051437) list_single_large_graphic_pane_g

0x5115,	// (0x00046f4a) wait_border_pane_g2_copy1

0xbd1d,	// (0x0004db52) list_single_large_graphic_pane_g4_cp2

0x04ee,	// (0x00042323) list_single_large_graphic_pane_t1_ParamLimits

0x04ee,	// (0x00042323) list_single_large_graphic_pane_t1

0x2fe4,	// (0x00044e19) list_double_pane_g1_ParamLimits

0x2fe4,	// (0x00044e19) list_double_pane_g1

0xbd25,	// (0x0004db5a) list_double_pane_g2_ParamLimits

0xbd25,	// (0x0004db5a) list_double_pane_g2

0x0001,

0xf609,	// (0x0005143e) list_double_pane_g_ParamLimits

0xf609,	// (0x0005143e) list_double_pane_g

0xafed,	// (0x0004ce22) list_double_pane_t1_ParamLimits

0xafed,	// (0x0004ce22) list_double_pane_t1

0xb003,	// (0x0004ce38) list_double_pane_t2_ParamLimits

0xb003,	// (0x0004ce38) list_double_pane_t2

0x0001,

0xf60e,	// (0x00051443) list_double_pane_t_ParamLimits

0xf60e,	// (0x00051443) list_double_pane_t

0xb015,	// (0x0004ce4a) list_double2_pane_g1_ParamLimits

0xb015,	// (0x0004ce4a) list_double2_pane_g1

0xb026,	// (0x0004ce5b) list_double2_pane_g2_ParamLimits

0xb026,	// (0x0004ce5b) list_double2_pane_g2

0x0001,

0xf613,	// (0x00051448) list_double2_pane_g_ParamLimits

0xf613,	// (0x00051448) list_double2_pane_g

0xb032,	// (0x0004ce67) list_double2_pane_t1_ParamLimits

0xb032,	// (0x0004ce67) list_double2_pane_t1

0xb048,	// (0x0004ce7d) list_double2_pane_t2_ParamLimits

0xb048,	// (0x0004ce7d) list_double2_pane_t2

0x0001,

0xf618,	// (0x0005144d) list_double2_pane_t_ParamLimits

0xf618,	// (0x0005144d) list_double2_pane_t

0x2fe4,	// (0x00044e19) list_double_number_pane_g1_ParamLimits

0x2fe4,	// (0x00044e19) list_double_number_pane_g1

0xbd25,	// (0x0004db5a) list_double_number_pane_g2_ParamLimits

0xbd25,	// (0x0004db5a) list_double_number_pane_g2

0x0001,

0xf609,	// (0x0005143e) list_double_number_pane_g_ParamLimits

0xf609,	// (0x0005143e) list_double_number_pane_g

0xb05a,	// (0x0004ce8f) list_double_number_pane_t1_ParamLimits

0xb05a,	// (0x0004ce8f) list_double_number_pane_t1

0xb06c,	// (0x0004cea1) list_double_number_pane_t2_ParamLimits

0xb06c,	// (0x0004cea1) list_double_number_pane_t2

0xb082,	// (0x0004ceb7) list_double_number_pane_t3_ParamLimits

0xb082,	// (0x0004ceb7) list_double_number_pane_t3

0x0002,

0xf61d,	// (0x00051452) list_double_number_pane_t_ParamLimits

0xf61d,	// (0x00051452) list_double_number_pane_t

0xb094,	// (0x0004cec9) list_double_graphic_pane_g1_ParamLimits

0xb094,	// (0x0004cec9) list_double_graphic_pane_g1

0xb0a0,	// (0x0004ced5) list_double_graphic_pane_g2_ParamLimits

0xb0a0,	// (0x0004ced5) list_double_graphic_pane_g2

0xb0af,	// (0x0004cee4) list_double_graphic_pane_g3_ParamLimits

0xb0af,	// (0x0004cee4) list_double_graphic_pane_g3

0x0003,

0xf624,	// (0x00051459) list_double_graphic_pane_g_ParamLimits

0xf624,	// (0x00051459) list_double_graphic_pane_g

0xb0c7,	// (0x0004cefc) list_double_graphic_pane_t1_ParamLimits

0xb0c7,	// (0x0004cefc) list_double_graphic_pane_t1

0xb0dd,	// (0x0004cf12) list_double_graphic_pane_t2_ParamLimits

0xb0dd,	// (0x0004cf12) list_double_graphic_pane_t2

0x0001,

0xf62d,	// (0x00051462) list_double_graphic_pane_t_ParamLimits

0xf62d,	// (0x00051462) list_double_graphic_pane_t

0xb0ef,	// (0x0004cf24) list_double2_graphic_pane_g1_ParamLimits

0xb0ef,	// (0x0004cf24) list_double2_graphic_pane_g1

0xb0fb,	// (0x0004cf30) list_double2_graphic_pane_g2_ParamLimits

0xb0fb,	// (0x0004cf30) list_double2_graphic_pane_g2

0xb107,	// (0x0004cf3c) list_double2_graphic_pane_g3_ParamLimits

0xb107,	// (0x0004cf3c) list_double2_graphic_pane_g3

0x0002,

0xf632,	// (0x00051467) list_double2_graphic_pane_g_ParamLimits

0xf632,	// (0x00051467) list_double2_graphic_pane_g

0xb113,	// (0x0004cf48) list_double2_graphic_pane_t1_ParamLimits

0xb113,	// (0x0004cf48) list_double2_graphic_pane_t1

0xb129,	// (0x0004cf5e) list_double2_graphic_pane_t2_ParamLimits

0xb129,	// (0x0004cf5e) list_double2_graphic_pane_t2

0x0001,

0xf639,	// (0x0005146e) list_double2_graphic_pane_t_ParamLimits

0xf639,	// (0x0005146e) list_double2_graphic_pane_t

0xb13b,	// (0x0004cf70) list_double_large_graphic_pane_g1_ParamLimits

0xb13b,	// (0x0004cf70) list_double_large_graphic_pane_g1

0xb166,	// (0x0004cf9b) list_double_large_graphic_pane_g2_ParamLimits

0xb166,	// (0x0004cf9b) list_double_large_graphic_pane_g2

0xbd25,	// (0x0004db5a) list_double_large_graphic_pane_g3_ParamLimits

0xbd25,	// (0x0004db5a) list_double_large_graphic_pane_g3

0xb17c,	// (0x0004cfb1) list_double_large_graphic_pane_g4_ParamLimits

0xb17c,	// (0x0004cfb1) list_double_large_graphic_pane_g4

0x0004,

0xf63e,	// (0x00051473) list_double_large_graphic_pane_g_ParamLimits

0xf63e,	// (0x00051473) list_double_large_graphic_pane_g

0xb18f,	// (0x0004cfc4) list_double_large_graphic_pane_t1_ParamLimits

0xb18f,	// (0x0004cfc4) list_double_large_graphic_pane_t1

0xb1a8,	// (0x0004cfdd) list_double_large_graphic_pane_t2_ParamLimits

0xb1a8,	// (0x0004cfdd) list_double_large_graphic_pane_t2

0x0001,

0xf649,	// (0x0005147e) list_double_large_graphic_pane_t_ParamLimits

0xf649,	// (0x0005147e) list_double_large_graphic_pane_t

0xbd31,	// (0x0004db66) list_double2_large_graphic_pane_g1_ParamLimits

0xbd31,	// (0x0004db66) list_double2_large_graphic_pane_g1

0xb1ba,	// (0x0004cfef) list_double2_large_graphic_pane_g2_ParamLimits

0xb1ba,	// (0x0004cfef) list_double2_large_graphic_pane_g2

0xb107,	// (0x0004cf3c) list_double2_large_graphic_pane_g3_ParamLimits

0xb107,	// (0x0004cf3c) list_double2_large_graphic_pane_g3

0x0002,

0xf64e,	// (0x00051483) list_double2_large_graphic_pane_g_ParamLimits

0xf64e,	// (0x00051483) list_double2_large_graphic_pane_g

0xb1cb,	// (0x0004d000) list_double2_large_graphic_pane_t1_ParamLimits

0xb1cb,	// (0x0004d000) list_double2_large_graphic_pane_t1

0xb1e1,	// (0x0004d016) list_double2_large_graphic_pane_t2_ParamLimits

0xb1e1,	// (0x0004d016) list_double2_large_graphic_pane_t2

0x0001,

0xf655,	// (0x0005148a) list_double2_large_graphic_pane_t_ParamLimits

0xf655,	// (0x0005148a) list_double2_large_graphic_pane_t

0xb1f3,	// (0x0004d028) list_double_heading_pane_g1_ParamLimits

0xb1f3,	// (0x0004d028) list_double_heading_pane_g1

0xb204,	// (0x0004d039) list_double_heading_pane_g2_ParamLimits

0xb204,	// (0x0004d039) list_double_heading_pane_g2

0x0001,

0xf65a,	// (0x0005148f) list_double_heading_pane_g_ParamLimits

0xf65a,	// (0x0005148f) list_double_heading_pane_g

0xb210,	// (0x0004d045) list_double_heading_pane_t1_ParamLimits

0xb210,	// (0x0004d045) list_double_heading_pane_t1

0xb048,	// (0x0004ce7d) list_double_heading_pane_t2_ParamLimits

0xb048,	// (0x0004ce7d) list_double_heading_pane_t2

0x0001,

0xf65f,	// (0x00051494) list_double_heading_pane_t_ParamLimits

0xf65f,	// (0x00051494) list_double_heading_pane_t

0xb226,	// (0x0004d05b) list_double_graphic_heading_pane_g1_ParamLimits

0xb226,	// (0x0004d05b) list_double_graphic_heading_pane_g1

0xb1f3,	// (0x0004d028) list_double_graphic_heading_pane_g2_ParamLimits

0xb1f3,	// (0x0004d028) list_double_graphic_heading_pane_g2

0xb204,	// (0x0004d039) list_double_graphic_heading_pane_g3_ParamLimits

0xb204,	// (0x0004d039) list_double_graphic_heading_pane_g3

0x0002,

0xf664,	// (0x00051499) list_double_graphic_heading_pane_g_ParamLimits

0xf664,	// (0x00051499) list_double_graphic_heading_pane_g

0xb232,	// (0x0004d067) list_double_graphic_heading_pane_t1_ParamLimits

0xb232,	// (0x0004d067) list_double_graphic_heading_pane_t1

0xb129,	// (0x0004cf5e) list_double_graphic_heading_pane_t2_ParamLimits

0xb129,	// (0x0004cf5e) list_double_graphic_heading_pane_t2

0x0001,

0xf66b,	// (0x000514a0) list_double_graphic_heading_pane_t_ParamLimits

0xf66b,	// (0x000514a0) list_double_graphic_heading_pane_t

0xb248,	// (0x0004d07d) list_double_time_pane_g1_ParamLimits

0xb248,	// (0x0004d07d) list_double_time_pane_g1

0xb259,	// (0x0004d08e) list_double_time_pane_g2_ParamLimits

0xb259,	// (0x0004d08e) list_double_time_pane_g2

0x0001,

0xf670,	// (0x000514a5) list_double_time_pane_g_ParamLimits

0xf670,	// (0x000514a5) list_double_time_pane_g

0xb265,	// (0x0004d09a) list_double_time_pane_t1_ParamLimits

0xb265,	// (0x0004d09a) list_double_time_pane_t1

0xb27b,	// (0x0004d0b0) list_double_time_pane_t2_ParamLimits

0xb27b,	// (0x0004d0b0) list_double_time_pane_t2

0xb28d,	// (0x0004d0c2) list_double_time_pane_t3_ParamLimits

0xb28d,	// (0x0004d0c2) list_double_time_pane_t3

0xb29f,	// (0x0004d0d4) list_double_time_pane_t4_ParamLimits

0xb29f,	// (0x0004d0d4) list_double_time_pane_t4

0x0003,

0xf675,	// (0x000514aa) list_double_time_pane_t_ParamLimits

0xf675,	// (0x000514aa) list_double_time_pane_t

0xb2b1,	// (0x0004d0e6) list_setting_pane_g1_ParamLimits

0xb2b1,	// (0x0004d0e6) list_setting_pane_g1

0xb026,	// (0x0004ce5b) list_setting_pane_g2_ParamLimits

0xb026,	// (0x0004ce5b) list_setting_pane_g2

0x0001,

0xf67e,	// (0x000514b3) list_setting_pane_g_ParamLimits

0xf67e,	// (0x000514b3) list_setting_pane_g

0xb2bd,	// (0x0004d0f2) list_setting_pane_t1_ParamLimits

0xb2bd,	// (0x0004d0f2) list_setting_pane_t1

0xb2d7,	// (0x0004d10c) list_setting_pane_t2_ParamLimits

0xb2d7,	// (0x0004d10c) list_setting_pane_t2

0x0002,

0xf683,	// (0x000514b8) list_setting_pane_t_ParamLimits

0xf683,	// (0x000514b8) list_setting_pane_t

0xb316,	// (0x0004d14b) set_value_pane_cp_ParamLimits

0xb316,	// (0x0004d14b) set_value_pane_cp

0xb324,	// (0x0004d159) list_setting_number_pane_g1_ParamLimits

0xb324,	// (0x0004d159) list_setting_number_pane_g1

0xb330,	// (0x0004d165) list_setting_number_pane_g2_ParamLimits

0xb330,	// (0x0004d165) list_setting_number_pane_g2

0x0001,

0xf68a,	// (0x000514bf) list_setting_number_pane_g_ParamLimits

0xf68a,	// (0x000514bf) list_setting_number_pane_g

0xb33c,	// (0x0004d171) list_setting_number_pane_t1_ParamLimits

0xb33c,	// (0x0004d171) list_setting_number_pane_t1

0xb355,	// (0x0004d18a) list_setting_number_pane_t2_ParamLimits

0xb355,	// (0x0004d18a) list_setting_number_pane_t2

0xb36f,	// (0x0004d1a4) list_setting_number_pane_t3_ParamLimits

0xb36f,	// (0x0004d1a4) list_setting_number_pane_t3

0x0003,

0xf68f,	// (0x000514c4) list_setting_number_pane_t_ParamLimits

0xf68f,	// (0x000514c4) list_setting_number_pane_t

0xb316,	// (0x0004d14b) set_value_pane_ParamLimits

0xb316,	// (0x0004d14b) set_value_pane

0x2f71,	// (0x00044da6) bg_set_opt_pane_ParamLimits

0x2f71,	// (0x00044da6) bg_set_opt_pane

0x006b,	// (0x00041ea0) set_value_pane_t1

0x2f92,	// (0x00044dc7) slider_set_pane_cp3

0x2f9b,	// (0x00044dd0) volume_small_pane_cp

0x2fa4,	// (0x00044dd9) list_form_gen_pane

0x2fad,	// (0x00044de2) scroll_pane_cp8

0xb3b2,	// (0x0004d1e7) form_field_data_pane_ParamLimits

0xb3b2,	// (0x0004d1e7) form_field_data_pane

0xb3cf,	// (0x0004d204) form_field_data_wide_pane_ParamLimits

0xb3cf,	// (0x0004d204) form_field_data_wide_pane

0xb3f3,	// (0x0004d228) form_field_popup_pane_ParamLimits

0xb3f3,	// (0x0004d228) form_field_popup_pane

0x00f2,	// (0x00041f27) form_field_popup_wide_pane_ParamLimits

0x00f2,	// (0x00041f27) form_field_popup_wide_pane

0x0113,	// (0x00041f48) form_field_slider_pane_ParamLimits

0x0113,	// (0x00041f48) form_field_slider_pane

0x0126,	// (0x00041f5b) form_field_slider_wide_pane_ParamLimits

0x0126,	// (0x00041f5b) form_field_slider_wide_pane

0x2fbe,	// (0x00044df3) data_form_pane

0xb41f,	// (0x0004d254) form_field_data_pane_t1

0x2fca,	// (0x00044dff) input_focus_pane

0x2fd8,	// (0x00044e0d) data_form_wide_pane

0x0169,	// (0x00041f9e) form_field_data_wide_pane_t1

0x2d2f,	// (0x00044b64) input_focus_pane_cp6

0xb439,	// (0x0004d26e) form_field_popup_pane_t1

0x2fca,	// (0x00044dff) input_focus_pane_cp7

0x3004,	// (0x00044e39) list_form_pane

0x01ad,	// (0x00041fe2) form_field_popup_wide_pane_t1

0x2fca,	// (0x00044dff) input_focus_pane_cp8

0x3010,	// (0x00044e45) list_form_wide_pane

0xb45b,	// (0x0004d290) form_field_slider_pane_t1_ParamLimits

0xb45b,	// (0x0004d290) form_field_slider_pane_t1

0xb473,	// (0x0004d2a8) form_field_slider_pane_t2_ParamLimits

0xb473,	// (0x0004d2a8) form_field_slider_pane_t2

0x0001,

0xf69f,	// (0x000514d4) form_field_slider_pane_t_ParamLimits

0xf69f,	// (0x000514d4) form_field_slider_pane_t

0x29b3,	// (0x000447e8) input_focus_pane_cp9_ParamLimits

0x29b3,	// (0x000447e8) input_focus_pane_cp9

0xb488,	// (0x0004d2bd) slider_cont_pane_ParamLimits

0xb488,	// (0x0004d2bd) slider_cont_pane

0x301f,	// (0x00044e54) form_field_slider_wide_pane_t1_ParamLimits

0x301f,	// (0x00044e54) form_field_slider_wide_pane_t1

0x020b,	// (0x00042040) form_field_slider_wide_pane_t2_ParamLimits

0x020b,	// (0x00042040) form_field_slider_wide_pane_t2

0x0001,

0xf6a4,	// (0x000514d9) form_field_slider_wide_pane_t_ParamLimits

0xf6a4,	// (0x000514d9) form_field_slider_wide_pane_t

0x29b3,	// (0x000447e8) input_focus_pane_cp10_ParamLimits

0x29b3,	// (0x000447e8) input_focus_pane_cp10

0xb49c,	// (0x0004d2d1) slider_cont_pane_cp1_ParamLimits

0xb49c,	// (0x0004d2d1) slider_cont_pane_cp1

0xb4b0,	// (0x0004d2e5) slider_form_pane_cp

0x3031,	// (0x00044e66) input_focus_pane_g1

0x3039,	// (0x00044e6e) input_focus_pane_g2

0x3041,	// (0x00044e76) input_focus_pane_g3

0x3049,	// (0x00044e7e) input_focus_pane_g4

0x3051,	// (0x00044e86) input_focus_pane_g5

0x3059,	// (0x00044e8e) input_focus_pane_g6

0x3061,	// (0x00044e96) input_focus_pane_g7

0x3069,	// (0x00044e9e) input_focus_pane_g8

0x3071,	// (0x00044ea6) input_focus_pane_g9

0xda7d,	// (0x0004f8b2) input_focus_pane_g10

0x0009,

0xf6a9,	// (0x000514de) input_focus_pane_g

0x511e,	// (0x00046f53) wait_border_pane_g3_copy1

0xb4b8,	// (0x0004d2ed) data_form_pane_t1

0xda7d,	// (0x0004f8b2) wait_anim_pane_g1_copy1

0xb5ba,	// (0x0004d3ef) data_form_wide_pane_t1

0x0258,	// (0x0004208d) list_form_graphic_pane_cp_ParamLimits

0x0258,	// (0x0004208d) list_form_graphic_pane_cp

0x60a3,	// (0x00047ed8) slider_form_pane_g1

0x60ac,	// (0x00047ee1) slider_form_pane_g2

0x0006,

0xf9a0,	// (0x000517d5) slider_form_pane_g

0xb4d4,	// (0x0004d309) list_form_graphic_pane_ParamLimits

0xb4d4,	// (0x0004d309) list_form_graphic_pane

0x026a,	// (0x0004209f) list_form_graphic_pane_g1

0x0272,	// (0x000420a7) list_form_graphic_pane_t1_ParamLimits

0x0272,	// (0x000420a7) list_form_graphic_pane_t1

0x2737,	// (0x0004456c) list_highlight_pane_cp5_ParamLimits

0x2737,	// (0x0004456c) list_highlight_pane_cp5

0xb4e5,	// (0x0004d31a) find_pane_g1

0x3079,	// (0x00044eae) input_find_pane

0xb4ee,	// (0x0004d323) input_find_pane_g1_ParamLimits

0xb4ee,	// (0x0004d323) input_find_pane_g1

0xb4fa,	// (0x0004d32f) input_find_pane_t1_ParamLimits

0xb4fa,	// (0x0004d32f) input_find_pane_t1

0xb50f,	// (0x0004d344) input_find_pane_t2_ParamLimits

0xb50f,	// (0x0004d344) input_find_pane_t2

0x0001,

0xf6be,	// (0x000514f3) input_find_pane_t_ParamLimits

0xf6be,	// (0x000514f3) input_find_pane_t

0x3082,	// (0x00044eb7) input_focus_pane_cp5_ParamLimits

0x3082,	// (0x00044eb7) input_focus_pane_cp5

0xbd49,	// (0x0004db7e) bg_popup_window_pane_cp2_ParamLimits

0xbd49,	// (0x0004db7e) bg_popup_window_pane_cp2

0xbd56,	// (0x0004db8b) listscroll_menu_pane_ParamLimits

0xbd56,	// (0x0004db8b) listscroll_menu_pane

0xbd62,	// (0x0004db97) popup_submenu_window_ParamLimits

0xbd62,	// (0x0004db97) popup_submenu_window

0x30e5,	// (0x00044f1a) find_popup_pane_g1

0x30ed,	// (0x00044f22) input_popup_find_pane_cp

0x3082,	// (0x00044eb7) input_focus_pane_cp4_ParamLimits

0x3082,	// (0x00044eb7) input_focus_pane_cp4

0x3105,	// (0x00044f3a) input_popup_find_pane_t1_ParamLimits

0x3105,	// (0x00044f3a) input_popup_find_pane_t1

0xda87,	// (0x0004f8bc) bg_popup_sub_pane_cp

0x3133,	// (0x00044f68) listscroll_popup_sub_pane

0x313b,	// (0x00044f70) list_submenu_pane_ParamLimits

0x313b,	// (0x00044f70) list_submenu_pane

0x314c,	// (0x00044f81) scroll_pane_cp4

0x3154,	// (0x00044f89) list_single_popup_submenu_pane_ParamLimits

0x3154,	// (0x00044f89) list_single_popup_submenu_pane

0x3169,	// (0x00044f9e) list_single_popup_submenu_pane_g1

0x3171,	// (0x00044fa6) list_single_popup_submenu_pane_t1_ParamLimits

0x3171,	// (0x00044fa6) list_single_popup_submenu_pane_t1

0x29b3,	// (0x000447e8) bg_active_tab_pane_cp1_ParamLimits

0x29b3,	// (0x000447e8) bg_active_tab_pane_cp1

0xbda0,	// (0x0004dbd5) tabs_2_active_pane_g1

0xbda8,	// (0x0004dbdd) tabs_2_active_pane_t1

0x29b3,	// (0x000447e8) bg_passive_tab_pane_cp1_ParamLimits

0x29b3,	// (0x000447e8) bg_passive_tab_pane_cp1

0xbda0,	// (0x0004dbd5) tabs_2_passive_pane_g1

0xbda8,	// (0x0004dbdd) tabs_2_passive_pane_t1

0x2737,	// (0x0004456c) bg_active_tab_pane_cp4

0xbdba,	// (0x0004dbef) tabs_2_long_active_pane_t1

0x3fd1,	// (0x00045e06) bg_passive_tab_pane_cp4

0x147d,	// (0x000432b2) list_single_midp_graphic_pane_g4_ParamLimits

0x2737,	// (0x0004456c) bg_active_tab_pane_cp5

0xbdcd,	// (0x0004dc02) tabs_3_long_active_pane_t1

0x3fd1,	// (0x00045e06) bg_passive_tab_pane_cp5

0x147d,	// (0x000432b2) list_single_midp_graphic_pane_g4

0x2737,	// (0x0004456c) bg_popup_window_pane_cp13_ParamLimits

0x2737,	// (0x0004456c) bg_popup_window_pane_cp13

0x31e8,	// (0x0004501d) listscroll_popup_fast_pane_ParamLimits

0x31e8,	// (0x0004501d) listscroll_popup_fast_pane

0x31f7,	// (0x0004502c) grid_popup_fast_pane_ParamLimits

0x31f7,	// (0x0004502c) grid_popup_fast_pane

0x3209,	// (0x0004503e) scroll_pane_cp9_ParamLimits

0x3209,	// (0x0004503e) scroll_pane_cp9

0x7942,	// (0x00049777) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7942,	// (0x00049777) list_single_graphic_hl_pane_t1_cp2

0x322d,	// (0x00045062) input_focus_pane_cp20_ParamLimits

0x322d,	// (0x00045062) input_focus_pane_cp20

0x323b,	// (0x00045070) query_popup_data_pane_t1_ParamLimits

0x323b,	// (0x00045070) query_popup_data_pane_t1

0x324e,	// (0x00045083) query_popup_data_pane_t2_ParamLimits

0x324e,	// (0x00045083) query_popup_data_pane_t2

0x3294,	// (0x000450c9) query_popup_data_pane_t3_ParamLimits

0x3294,	// (0x000450c9) query_popup_data_pane_t3

0x32d5,	// (0x0004510a) query_popup_data_pane_t4_ParamLimits

0x32d5,	// (0x0004510a) query_popup_data_pane_t4

0x3311,	// (0x00045146) query_popup_data_pane_t5_ParamLimits

0x3311,	// (0x00045146) query_popup_data_pane_t5

0x0004,

0xf6c3,	// (0x000514f8) query_popup_data_pane_t_ParamLimits

0xf6c3,	// (0x000514f8) query_popup_data_pane_t

0x3031,	// (0x00044e66) bg_set_opt_pane_g1

0x3039,	// (0x00044e6e) bg_set_opt_pane_g2

0x3041,	// (0x00044e76) bg_set_opt_pane_g3

0x3049,	// (0x00044e7e) bg_set_opt_pane_g4

0x3051,	// (0x00044e86) bg_set_opt_pane_g5

0x3059,	// (0x00044e8e) bg_set_opt_pane_g6

0x3061,	// (0x00044e96) bg_set_opt_pane_g7

0x3069,	// (0x00044e9e) bg_set_opt_pane_g8

0x3071,	// (0x00044ea6) bg_set_opt_pane_g9

0x0008,

0xf6ce,	// (0x00051503) bg_set_opt_pane_g

0x10e5,	// (0x00042f1a) control_top_pane_stacon_ParamLimits

0x10e5,	// (0x00042f1a) control_top_pane_stacon

0x1138,	// (0x00042f6d) signal_pane_stacon_ParamLimits

0x1138,	// (0x00042f6d) signal_pane_stacon

0x38e8,	// (0x0004571d) stacon_top_pane_g1_ParamLimits

0x38e8,	// (0x0004571d) stacon_top_pane_g1

0x115d,	// (0x00042f92) title_pane_stacon_ParamLimits

0x115d,	// (0x00042f92) title_pane_stacon

0x1187,	// (0x00042fbc) uni_indicator_pane_stacon_ParamLimits

0x1187,	// (0x00042fbc) uni_indicator_pane_stacon

0x119f,	// (0x00042fd4) battery_pane_stacon_ParamLimits

0x119f,	// (0x00042fd4) battery_pane_stacon

0x11e3,	// (0x00043018) control_bottom_pane_stacon_ParamLimits

0x11e3,	// (0x00043018) control_bottom_pane_stacon

0x1206,	// (0x0004303b) navi_pane_stacon_ParamLimits

0x1206,	// (0x0004303b) navi_pane_stacon

0x390a,	// (0x0004573f) stacon_bottom_pane_g1_ParamLimits

0x390a,	// (0x0004573f) stacon_bottom_pane_g1

0x0e24,	// (0x00042c59) aid_levels_signal_lsc_ParamLimits

0x0e24,	// (0x00042c59) aid_levels_signal_lsc

0x0e3b,	// (0x00042c70) signal_pane_stacon_g1_ParamLimits

0x0e3b,	// (0x00042c70) signal_pane_stacon_g1

0x0e4f,	// (0x00042c84) signal_pane_stacon_g2_ParamLimits

0x0e4f,	// (0x00042c84) signal_pane_stacon_g2

0x0001,

0xf6e1,	// (0x00051516) signal_pane_stacon_g_ParamLimits

0xf6e1,	// (0x00051516) signal_pane_stacon_g

0x0e84,	// (0x00042cb9) title_pane_stacon_t1_ParamLimits

0x0e84,	// (0x00042cb9) title_pane_stacon_t1

0x3355,	// (0x0004518a) uni_indicator_pane_stacon_g1

0x335f,	// (0x00045194) uni_indicator_pane_stacon_g2

0x3369,	// (0x0004519e) uni_indicator_pane_stacon_g3

0x3373,	// (0x000451a8) uni_indicator_pane_stacon_g4

0x0003,

0xf6ed,	// (0x00051522) uni_indicator_pane_stacon_g

0x0ea9,	// (0x00042cde) control_top_pane_stacon_g1

0x0eb1,	// (0x00042ce6) control_top_pane_stacon_t1_ParamLimits

0x0eb1,	// (0x00042ce6) control_top_pane_stacon_t1

0x0ee8,	// (0x00042d1d) aid_levels_battery_lsc_ParamLimits

0x0ee8,	// (0x00042d1d) aid_levels_battery_lsc

0x0f00,	// (0x00042d35) battery_pane_stacon_g1_ParamLimits

0x0f00,	// (0x00042d35) battery_pane_stacon_g1

0x0f13,	// (0x00042d48) battery_pane_stacon_g2_ParamLimits

0x0f13,	// (0x00042d48) battery_pane_stacon_g2

0x0001,

0xf6f6,	// (0x0005152b) battery_pane_stacon_g_ParamLimits

0xf6f6,	// (0x0005152b) battery_pane_stacon_g

0x0f51,	// (0x00042d86) navi_icon_pane_stacon

0x0f65,	// (0x00042d9a) navi_navi_pane_stacon

0x0f51,	// (0x00042d86) navi_text_pane_stacon

0x0ea9,	// (0x00042cde) control_bottom_pane_stacon_g1

0x0f7b,	// (0x00042db0) control_bottom_pane_stacon_t1_ParamLimits

0x0f7b,	// (0x00042db0) control_bottom_pane_stacon_t1

0xbddf,	// (0x0004dc14) grid_app_pane_ParamLimits

0xbddf,	// (0x0004dc14) grid_app_pane

0xbe17,	// (0x0004dc4c) scroll_pane_cp15_ParamLimits

0xbe17,	// (0x0004dc4c) scroll_pane_cp15

0xbe30,	// (0x0004dc65) cell_app_pane_ParamLimits

0xbe30,	// (0x0004dc65) cell_app_pane

0xbe71,	// (0x0004dca6) cell_app_pane_g1_ParamLimits

0xbe71,	// (0x0004dca6) cell_app_pane_g1

0x3420,	// (0x00045255) cell_app_pane_g2_ParamLimits

0x3420,	// (0x00045255) cell_app_pane_g2

0x0001,

0xf6fb,	// (0x00051530) cell_app_pane_g_ParamLimits

0xf6fb,	// (0x00051530) cell_app_pane_g

0x342c,	// (0x00045261) cell_app_pane_t1_ParamLimits

0x342c,	// (0x00045261) cell_app_pane_t1

0x343e,	// (0x00045273) grid_highlight_pane_ParamLimits

0x343e,	// (0x00045273) grid_highlight_pane

0x3031,	// (0x00044e66) cell_highlight_pane_g1

0x3039,	// (0x00044e6e) cell_highlight_pane_g2

0x3041,	// (0x00044e76) cell_highlight_pane_g3

0x3049,	// (0x00044e7e) cell_highlight_pane_g4

0x3051,	// (0x00044e86) cell_highlight_pane_g5

0x3059,	// (0x00044e8e) cell_highlight_pane_g6

0x3061,	// (0x00044e96) cell_highlight_pane_g7

0x3069,	// (0x00044e9e) cell_highlight_pane_g8

0x3071,	// (0x00044ea6) cell_highlight_pane_g9

0xda7d,	// (0x0004f8b2) cell_highlight_pane_g10

0x0009,

0xf6a9,	// (0x000514de) cell_highlight_pane_g

0x344f,	// (0x00045284) bg_scroll_pane

0x0fc5,	// (0x00042dfa) scroll_handle_pane

0x3496,	// (0x000452cb) scroll_bg_pane_g1

0x34ab,	// (0x000452e0) scroll_bg_pane_g2

0x34c3,	// (0x000452f8) scroll_bg_pane_g3

0x0002,

0xf700,	// (0x00051535) scroll_bg_pane_g

0x34d8,	// (0x0004530d) scroll_handle_focus_pane_ParamLimits

0x34d8,	// (0x0004530d) scroll_handle_focus_pane

0x3496,	// (0x000452cb) scroll_handle_pane_g1

0x34e5,	// (0x0004531a) scroll_handle_pane_g2

0x34c3,	// (0x000452f8) scroll_handle_pane_g3

0x0002,

0xf707,	// (0x0005153c) scroll_handle_pane_g

0x3082,	// (0x00044eb7) bg_popup_sub_pane_cp21_ParamLimits

0x3082,	// (0x00044eb7) bg_popup_sub_pane_cp21

0x34f9,	// (0x0004532e) popup_fep_japan_predictive_window_t1_ParamLimits

0x34f9,	// (0x0004532e) popup_fep_japan_predictive_window_t1

0x3510,	// (0x00045345) popup_fep_japan_predictive_window_t2_ParamLimits

0x3510,	// (0x00045345) popup_fep_japan_predictive_window_t2

0x3543,	// (0x00045378) popup_fep_japan_predictive_window_t3_ParamLimits

0x3543,	// (0x00045378) popup_fep_japan_predictive_window_t3

0x0002,

0xf70e,	// (0x00051543) popup_fep_japan_predictive_window_t_ParamLimits

0xf70e,	// (0x00051543) popup_fep_japan_predictive_window_t

0xda87,	// (0x0004f8bc) bg_popup_sub_pane_cp23

0x357a,	// (0x000453af) listscroll_japin_cand_pane

0x3582,	// (0x000453b7) popup_fep_japan_candidate_window_t1

0x3590,	// (0x000453c5) candidate_pane_ParamLimits

0x3590,	// (0x000453c5) candidate_pane

0x35a2,	// (0x000453d7) scroll_pane_cp30

0x35ac,	// (0x000453e1) list_single_popup_jap_candidate_pane_ParamLimits

0x35ac,	// (0x000453e1) list_single_popup_jap_candidate_pane

0xda87,	// (0x0004f8bc) list_highlight_pane_cp30

0x35c0,	// (0x000453f5) list_single_popup_jap_candidate_pane_t1

0xbe9e,	// (0x0004dcd3) level_1_signal

0xbeb0,	// (0x0004dce5) level_2_signal

0xbec3,	// (0x0004dcf8) level_3_signal

0xbed6,	// (0x0004dd0b) level_4_signal

0xbee9,	// (0x0004dd1e) level_5_signal

0xbefc,	// (0x0004dd31) level_6_signal

0xbf0f,	// (0x0004dd44) level_7_signal

0xbe9e,	// (0x0004dcd3) level_1_battery

0xbeb0,	// (0x0004dce5) level_2_battery

0xbec3,	// (0x0004dcf8) level_3_battery

0xbed6,	// (0x0004dd0b) level_4_battery

0xbee9,	// (0x0004dd1e) level_5_battery

0xbefc,	// (0x0004dd31) level_6_battery

0xbf0f,	// (0x0004dd44) level_7_battery

0x3642,	// (0x00045477) list_menu_pane_ParamLimits

0x3642,	// (0x00045477) list_menu_pane

0x3658,	// (0x0004548d) scroll_pane_cp25_ParamLimits

0x3658,	// (0x0004548d) scroll_pane_cp25

0x3671,	// (0x000454a6) list_double2_graphic_pane_cp2_ParamLimits

0x3671,	// (0x000454a6) list_double2_graphic_pane_cp2

0x3671,	// (0x000454a6) list_double2_large_graphic_pane_cp2_ParamLimits

0x3671,	// (0x000454a6) list_double2_large_graphic_pane_cp2

0x3671,	// (0x000454a6) list_double2_pane_cp2_ParamLimits

0x3671,	// (0x000454a6) list_double2_pane_cp2

0x3671,	// (0x000454a6) list_double_graphic_pane_cp2_ParamLimits

0x3671,	// (0x000454a6) list_double_graphic_pane_cp2

0x3671,	// (0x000454a6) list_double_large_graphic_pane_cp2_ParamLimits

0x3671,	// (0x000454a6) list_double_large_graphic_pane_cp2

0x3671,	// (0x000454a6) list_double_number_pane_cp2_ParamLimits

0x3671,	// (0x000454a6) list_double_number_pane_cp2

0x3671,	// (0x000454a6) list_double_pane_cp2_ParamLimits

0x3671,	// (0x000454a6) list_double_pane_cp2

0xbf22,	// (0x0004dd57) list_single_2graphic_pane_cp2_ParamLimits

0xbf22,	// (0x0004dd57) list_single_2graphic_pane_cp2

0xbf22,	// (0x0004dd57) list_single_graphic_heading_pane_cp2_ParamLimits

0xbf22,	// (0x0004dd57) list_single_graphic_heading_pane_cp2

0xbf22,	// (0x0004dd57) list_single_graphic_pane_cp2_ParamLimits

0xbf22,	// (0x0004dd57) list_single_graphic_pane_cp2

0xbf22,	// (0x0004dd57) list_single_heading_pane_cp2_ParamLimits

0xbf22,	// (0x0004dd57) list_single_heading_pane_cp2

0x36b4,	// (0x000454e9) list_single_large_graphic_pane_cp2_ParamLimits

0x36b4,	// (0x000454e9) list_single_large_graphic_pane_cp2

0xbf22,	// (0x0004dd57) list_single_number_heading_pane_cp2_ParamLimits

0xbf22,	// (0x0004dd57) list_single_number_heading_pane_cp2

0xbf22,	// (0x0004dd57) list_single_number_pane_cp2_ParamLimits

0xbf22,	// (0x0004dd57) list_single_number_pane_cp2

0xbf22,	// (0x0004dd57) list_single_pane_cp2_ParamLimits

0xbf22,	// (0x0004dd57) list_single_pane_cp2

0x372f,	// (0x00045564) bg_popup_sub_pane_cp22

0x1077,	// (0x00042eac) popup_side_volume_key_window_g1

0x10a1,	// (0x00042ed6) popup_side_volume_key_window_t1

0x10bf,	// (0x00042ef4) volume_small_pane_cp1

0x29b3,	// (0x000447e8) bg_popup_sub_pane_cp24_ParamLimits

0x29b3,	// (0x000447e8) bg_popup_sub_pane_cp24

0x3745,	// (0x0004557a) fep_china_uni_candidate_pane_ParamLimits

0x3745,	// (0x0004557a) fep_china_uni_candidate_pane

0x3759,	// (0x0004558e) fep_china_uni_entry_pane

0x3769,	// (0x0004559e) popup_fep_china_uni_window_g1

0x3785,	// (0x000455ba) fep_china_uni_entry_pane_g1

0x378f,	// (0x000455c4) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x00051574) fep_china_uni_entry_pane_g

0x3799,	// (0x000455ce) fep_entry_item_pane

0x37a3,	// (0x000455d8) fep_candidate_item_pane

0x37ab,	// (0x000455e0) fep_china_uni_candidate_pane_g1

0x37b5,	// (0x000455ea) fep_china_uni_candidate_pane_g2

0x37bd,	// (0x000455f2) fep_china_uni_candidate_pane_g3

0x37c5,	// (0x000455fa) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x00051579) fep_china_uni_candidate_pane_g

0xda7d,	// (0x0004f8b2) fep_entry_item_pane_g1

0x37cf,	// (0x00045604) fep_entry_item_pane_t1_ParamLimits

0x37cf,	// (0x00045604) fep_entry_item_pane_t1

0x37e5,	// (0x0004561a) fep_candidate_item_pane_t1_ParamLimits

0x37e5,	// (0x0004561a) fep_candidate_item_pane_t1

0x37fa,	// (0x0004562f) fep_candidate_item_pane_t2_ParamLimits

0x37fa,	// (0x0004562f) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x00051582) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x00051582) fep_candidate_item_pane_t

0x2737,	// (0x0004456c) list_highlight_pane_cp31_ParamLimits

0x2737,	// (0x0004456c) list_highlight_pane_cp31

0x380c,	// (0x00045641) level_1_signal_lsc

0x3815,	// (0x0004564a) level_2_signal_lsc

0x381e,	// (0x00045653) level_3_signal_lsc

0x3827,	// (0x0004565c) level_4_signal_lsc

0x3830,	// (0x00045665) level_5_signal_lsc

0x3839,	// (0x0004566e) level_6_signal_lsc

0x3842,	// (0x00045677) level_7_signal_lsc

0x3842,	// (0x00045677) level_1_battery_lsc

0x384b,	// (0x00045680) level_2_battery_lsc

0x3854,	// (0x00045689) level_3_battery_lsc

0x385d,	// (0x00045692) level_4_battery_lsc

0x3866,	// (0x0004569b) level_5_battery_lsc

0x386f,	// (0x000456a4) level_6_battery_lsc

0x380c,	// (0x00045641) level_7_battery_lsc

0x3878,	// (0x000456ad) scroll_handle_focus_pane_g1

0x3881,	// (0x000456b6) scroll_handle_focus_pane_g2

0x388a,	// (0x000456bf) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x00051587) scroll_handle_focus_pane_g

0xb524,	// (0x0004d359) list_single_2graphic_pane_g1_ParamLimits

0xb524,	// (0x0004d359) list_single_2graphic_pane_g1

0xbd0c,	// (0x0004db41) list_single_2graphic_pane_g2_ParamLimits

0xbd0c,	// (0x0004db41) list_single_2graphic_pane_g2

0x144c,	// (0x00043281) list_single_2graphic_pane_g3_ParamLimits

0x144c,	// (0x00043281) list_single_2graphic_pane_g3

0xbfb1,	// (0x0004dde6) list_single_2graphic_pane_g4_ParamLimits

0xbfb1,	// (0x0004dde6) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x0005158e) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x0005158e) list_single_2graphic_pane_g

0xb530,	// (0x0004d365) list_single_2graphic_pane_t1_ParamLimits

0xb530,	// (0x0004d365) list_single_2graphic_pane_t1

0xbfc2,	// (0x0004ddf7) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbfc2,	// (0x0004ddf7) list_double2_graphic_large_graphic_pane_g1

0xb1ba,	// (0x0004cfef) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb1ba,	// (0x0004cfef) list_double2_graphic_large_graphic_pane_g2

0xb107,	// (0x0004cf3c) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb107,	// (0x0004cf3c) list_double2_graphic_large_graphic_pane_g3

0xb55e,	// (0x0004d393) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb55e,	// (0x0004d393) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x00051597) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x00051597) list_double2_graphic_large_graphic_pane_g

0xb56a,	// (0x0004d39f) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb56a,	// (0x0004d39f) list_double2_graphic_large_graphic_pane_t1

0xb580,	// (0x0004d3b5) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb580,	// (0x0004d3b5) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x000515a0) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x000515a0) list_double2_graphic_large_graphic_pane_t

0x39cc,	// (0x00045801) popup_fast_swap_window_ParamLimits

0x39cc,	// (0x00045801) popup_fast_swap_window

0x39ea,	// (0x0004581f) popup_side_volume_key_window

0x3a08,	// (0x0004583d) stacon_top_pane

0x3a12,	// (0x00045847) status_pane_ParamLimits

0x3a12,	// (0x00045847) status_pane

0x3a08,	// (0x0004583d) status_small_pane

0xda87,	// (0x0004f8bc) control_pane

0xda87,	// (0x0004f8bc) stacon_bottom_pane

0x2fad,	// (0x00044de2) scroll_pane_cp121

0x2fa4,	// (0x00044dd9) set_content_pane

0xbfd4,	// (0x0004de09) bg_active_tab_pane_g1_cp1

0x389c,	// (0x000456d1) bg_active_tab_pane_g2_cp1

0xbfdd,	// (0x0004de12) bg_active_tab_pane_g3_cp1

0xbfd4,	// (0x0004de09) bg_passive_tab_pane_g1_cp1

0x389c,	// (0x000456d1) bg_passive_tab_pane_g2_cp1

0xbfdd,	// (0x0004de12) bg_passive_tab_pane_g3_cp1

0xbfe6,	// (0x0004de1b) bg_active_tab_pane_g1_cp2

0x389c,	// (0x000456d1) bg_active_tab_pane_g2_cp2

0xbfef,	// (0x0004de24) bg_active_tab_pane_g3_cp2

0xbfe6,	// (0x0004de1b) bg_passive_tab_pane_g1_cp2

0x389c,	// (0x000456d1) bg_passive_tab_pane_g2_cp2

0xbfef,	// (0x0004de24) bg_passive_tab_pane_g3_cp2

0xbff8,	// (0x0004de2d) bg_active_tab_pane_g1_cp3

0x389c,	// (0x000456d1) bg_active_tab_pane_g2_cp3

0xc001,	// (0x0004de36) bg_active_tab_pane_g3_cp3

0xbff8,	// (0x0004de2d) bg_passive_tab_pane_g1_cp3

0x389c,	// (0x000456d1) bg_passive_tab_pane_g2_cp3

0xc001,	// (0x0004de36) bg_passive_tab_pane_g3_cp3

0xc00a,	// (0x0004de3f) bg_active_tab_pane_g1_cp4

0x389c,	// (0x000456d1) bg_active_tab_pane_g2_cp4

0xc013,	// (0x0004de48) bg_active_tab_pane_g3_cp4

0xc00a,	// (0x0004de3f) bg_passive_tab_pane_g1_cp4

0x389c,	// (0x000456d1) bg_passive_tab_pane_g2_cp4

0xc013,	// (0x0004de48) bg_passive_tab_pane_g3_cp4

0x3926,	// (0x0004575b) bg_active_tab_pane_g1_cp5

0x389c,	// (0x000456d1) bg_active_tab_pane_g2_cp5

0x392f,	// (0x00045764) bg_active_tab_pane_g3_cp5

0x3926,	// (0x0004575b) bg_passive_tab_pane_g1_cp5

0x389c,	// (0x000456d1) bg_passive_tab_pane_g2_cp5

0x392f,	// (0x00045764) bg_passive_tab_pane_g3_cp5

0xc01c,	// (0x0004de51) list_set_graphic_pane_ParamLimits

0xc01c,	// (0x0004de51) list_set_graphic_pane

0xda87,	// (0x0004f8bc) bg_set_opt_pane_cp4

0xc031,	// (0x0004de66) list_set_graphic_pane_g1_ParamLimits

0xc031,	// (0x0004de66) list_set_graphic_pane_g1

0xc03d,	// (0x0004de72) list_set_graphic_pane_g2_ParamLimits

0xc03d,	// (0x0004de72) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x000515a5) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x000515a5) list_set_graphic_pane_g

0x0009,

0xfae8,	// (0x0005191d) volume_small_pane_cp_g

0x397d,	// (0x000457b2) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x397d,	// (0x000457b2) list_double2_large_graphic_pane_g1_cp2

0x398b,	// (0x000457c0) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x398b,	// (0x000457c0) list_double2_large_graphic_pane_g2_cp2

0x399c,	// (0x000457d1) list_double2_large_graphic_pane_g3_cp2

0x39a4,	// (0x000457d9) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x39a4,	// (0x000457d9) list_double2_large_graphic_pane_t1_cp2

0x39ba,	// (0x000457ef) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x39ba,	// (0x000457ef) list_double2_large_graphic_pane_t2_cp2

0x5c08,	// (0x00047a3d) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5c08,	// (0x00047a3d) list_double_large_graphic_pane_g1_cp2

0x5c1b,	// (0x00047a50) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5c1b,	// (0x00047a50) list_double_large_graphic_pane_g2_cp2

0x3b30,	// (0x00045965) list_double_large_graphic_pane_g3_cp2

0x5c2c,	// (0x00047a61) list_double_large_graphic_pane_g4_cp

0x5c34,	// (0x00047a69) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5c34,	// (0x00047a69) list_double_large_graphic_pane_t1_cp2

0x5c4b,	// (0x00047a80) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5c4b,	// (0x00047a80) list_double_large_graphic_pane_t2_cp2

0x3a20,	// (0x00045855) list_double2_graphic_pane_g1_cp2_ParamLimits

0x3a20,	// (0x00045855) list_double2_graphic_pane_g1_cp2

0x3a2e,	// (0x00045863) list_double2_graphic_pane_g2_cp2_ParamLimits

0x3a2e,	// (0x00045863) list_double2_graphic_pane_g2_cp2

0x3a3f,	// (0x00045874) list_double2_graphic_pane_g3_cp2

0x3a49,	// (0x0004587e) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3a49,	// (0x0004587e) list_double2_graphic_pane_t1_cp2

0x3a5f,	// (0x00045894) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3a5f,	// (0x00045894) list_double2_graphic_pane_t2_cp2

0x3a71,	// (0x000458a6) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3a71,	// (0x000458a6) list_single_number_heading_pane_g1_cp2

0x3a7d,	// (0x000458b2) list_single_number_heading_pane_g2_cp2

0x3a85,	// (0x000458ba) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3a85,	// (0x000458ba) list_single_number_heading_pane_t1_cp2

0x3a9b,	// (0x000458d0) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3a9b,	// (0x000458d0) list_single_number_heading_pane_t2_cp2

0x3aaf,	// (0x000458e4) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3aaf,	// (0x000458e4) list_single_number_heading_pane_t3_cp2

0x3a71,	// (0x000458a6) list_single_heading_pane_g1_cp2_ParamLimits

0x3a71,	// (0x000458a6) list_single_heading_pane_g1_cp2

0x3a7d,	// (0x000458b2) list_single_heading_pane_g2_cp2

0x3a85,	// (0x000458ba) list_single_heading_pane_t1_cp2_ParamLimits

0x3a85,	// (0x000458ba) list_single_heading_pane_t1_cp2

0x5a02,	// (0x00047837) list_single_heading_pane_t2_cp2_ParamLimits

0x5a02,	// (0x00047837) list_single_heading_pane_t2_cp2

0x5944,	// (0x00047779) list_double_graphic_pane_g1_cp2_ParamLimits

0x5944,	// (0x00047779) list_double_graphic_pane_g1_cp2

0x5950,	// (0x00047785) list_double_graphic_pane_g2_cp2_ParamLimits

0x5950,	// (0x00047785) list_double_graphic_pane_g2_cp2

0x595f,	// (0x00047794) list_double_graphic_pane_g3_cp2

0x5967,	// (0x0004779c) list_double_graphic_pane_t1_cp2_ParamLimits

0x5967,	// (0x0004779c) list_double_graphic_pane_t1_cp2

0x597d,	// (0x000477b2) list_double_graphic_pane_t2_cp2_ParamLimits

0x597d,	// (0x000477b2) list_double_graphic_pane_t2_cp2

0x3b24,	// (0x00045959) list_double_number_pane_g1_cp2_ParamLimits

0x3b24,	// (0x00045959) list_double_number_pane_g1_cp2

0x3b30,	// (0x00045965) list_double_number_pane_g2_cp2

0x5908,	// (0x0004773d) list_double_number_pane_t1_cp2_ParamLimits

0x5908,	// (0x0004773d) list_double_number_pane_t1_cp2

0x591c,	// (0x00047751) list_double_number_pane_t2_cp2_ParamLimits

0x591c,	// (0x00047751) list_double_number_pane_t2_cp2

0x5932,	// (0x00047767) list_double_number_pane_t3_cp2_ParamLimits

0x5932,	// (0x00047767) list_double_number_pane_t3_cp2

0x57f1,	// (0x00047626) list_single_graphic_pane_g1_cp2_ParamLimits

0x57f1,	// (0x00047626) list_single_graphic_pane_g1_cp2

0x3b8a,	// (0x000459bf) list_single_graphic_pane_g2_cp2_ParamLimits

0x3b8a,	// (0x000459bf) list_single_graphic_pane_g2_cp2

0x3b96,	// (0x000459cb) list_single_graphic_pane_g3_cp2

0x57c7,	// (0x000475fc) list_single_graphic_pane_t1_cp2_ParamLimits

0x57c7,	// (0x000475fc) list_single_graphic_pane_t1_cp2

0x3b8a,	// (0x000459bf) list_single_number_pane_g1_cp2_ParamLimits

0x3b8a,	// (0x000459bf) list_single_number_pane_g1_cp2

0x3b96,	// (0x000459cb) list_single_number_pane_g2_cp2

0x57c7,	// (0x000475fc) list_single_number_pane_t1_cp2_ParamLimits

0x57c7,	// (0x000475fc) list_single_number_pane_t1_cp2

0x57dd,	// (0x00047612) list_single_number_pane_t2_cp2_ParamLimits

0x57dd,	// (0x00047612) list_single_number_pane_t2_cp2

0x398b,	// (0x000457c0) list_double2_pane_g1_cp2_ParamLimits

0x398b,	// (0x000457c0) list_double2_pane_g1_cp2

0x399c,	// (0x000457d1) list_double2_pane_g2_cp2

0x3afc,	// (0x00045931) list_double2_pane_t1_cp2_ParamLimits

0x3afc,	// (0x00045931) list_double2_pane_t1_cp2

0x3b12,	// (0x00045947) list_double2_pane_t2_cp2_ParamLimits

0x3b12,	// (0x00045947) list_double2_pane_t2_cp2

0x3b24,	// (0x00045959) list_double_pane_g1_cp2_ParamLimits

0x3b24,	// (0x00045959) list_double_pane_g1_cp2

0x3b30,	// (0x00045965) list_double_pane_g2_cp2

0x3b38,	// (0x0004596d) list_double_pane_t1_cp2_ParamLimits

0x3b38,	// (0x0004596d) list_double_pane_t1_cp2

0x3b4e,	// (0x00045983) list_double_pane_t2_cp2_ParamLimits

0x3b4e,	// (0x00045983) list_double_pane_t2_cp2

0x3b7a,	// (0x000459af) list_single_pane_cp2_g3

0x3b8a,	// (0x000459bf) list_single_pane_g1_cp2_ParamLimits

0x3b8a,	// (0x000459bf) list_single_pane_g1_cp2

0x3b96,	// (0x000459cb) list_single_pane_g2_cp2

0x3b9e,	// (0x000459d3) list_single_pane_t1_cp2_ParamLimits

0x3b9e,	// (0x000459d3) list_single_pane_t1_cp2

0x3bb6,	// (0x000459eb) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3bb6,	// (0x000459eb) list_single_large_graphic_pane_g1_cp2

0x3bc4,	// (0x000459f9) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3bc4,	// (0x000459f9) list_single_large_graphic_pane_g2_cp2

0x3bd0,	// (0x00045a05) list_single_large_graphic_pane_g3_cp2

0x3bd8,	// (0x00045a0d) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3bd8,	// (0x00045a0d) list_single_large_graphic_pane_g4_cp1

0x3bf2,	// (0x00045a27) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x3bf2,	// (0x00045a27) list_single_large_graphic_pane_t1_cp2

0x5791,	// (0x000475c6) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5791,	// (0x000475c6) list_single_graphic_heading_pane_g1_cp2

0x575e,	// (0x00047593) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x575e,	// (0x00047593) list_single_graphic_heading_pane_g4_cp2

0x3b96,	// (0x000459cb) list_single_graphic_heading_pane_g5_cp2

0x579d,	// (0x000475d2) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x579d,	// (0x000475d2) list_single_graphic_heading_pane_t1_cp2

0x57b3,	// (0x000475e8) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x57b3,	// (0x000475e8) list_single_graphic_heading_pane_t2_cp2

0x5752,	// (0x00047587) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5752,	// (0x00047587) list_single_2graphic_pane_g1_cp2

0x575e,	// (0x00047593) list_single_2graphic_pane_g2_cp2_ParamLimits

0x575e,	// (0x00047593) list_single_2graphic_pane_g2_cp2

0x3b96,	// (0x000459cb) list_single_2graphic_pane_g3_cp2

0x576f,	// (0x000475a4) list_single_2graphic_pane_g4_cp2_ParamLimits

0x576f,	// (0x000475a4) list_single_2graphic_pane_g4_cp2

0x577b,	// (0x000475b0) list_single_2graphic_pane_t1_cp2_ParamLimits

0x577b,	// (0x000475b0) list_single_2graphic_pane_t1_cp2

0xda7d,	// (0x0004f8b2) list_highlight_pane_g10_cp1

0x532a,	// (0x0004715f) list_highlight_pane_g1_cp1

0x5332,	// (0x00047167) list_highlight_pane_g2_cp1

0x533a,	// (0x0004716f) list_highlight_pane_g3_cp1

0x5342,	// (0x00047177) list_highlight_pane_g4_cp1

0x534a,	// (0x0004717f) list_highlight_pane_g5_cp1

0x5352,	// (0x00047187) list_highlight_pane_g6_cp1

0x535a,	// (0x0004718f) list_highlight_pane_g7_cp1

0x5362,	// (0x00047197) list_highlight_pane_g8_cp1

0x536a,	// (0x0004719f) list_highlight_pane_g9_cp1

0xd5ee,	// (0x0004f423) form_field_slider_pane_t3

0xd5fc,	// (0x0004f431) form_field_slider_pane_t4

0x5266,	// (0x0004709b) slider_form_pane_ParamLimits

0x5266,	// (0x0004709b) slider_form_pane

0xda87,	// (0x0004f8bc) control_abbreviations

0xda87,	// (0x0004f8bc) control_conventions

0xda87,	// (0x0004f8bc) control_definitions

0xda87,	// (0x0004f8bc) format_table_attribute

0x5a58,	// (0x0004788d) bg_popup_preview_window_pane_g9

0xda87,	// (0x0004f8bc) format_table_data2

0xda87,	// (0x0004f8bc) format_table_data3

0xda87,	// (0x0004f8bc) format_table_data_example

0x0008,

0xda87,	// (0x0004f8bc) intro_purpose

0xf900,	// (0x00051735) bg_popup_preview_window_pane_g

0xda87,	// (0x0004f8bc) texts_category

0xda87,	// (0x0004f8bc) texts_graphics

0x3c08,	// (0x00045a3d) text_digital

0x3c17,	// (0x00045a4c) text_primary

0x3c26,	// (0x00045a5b) text_primary_small

0x3c35,	// (0x00045a6a) text_secondary

0x3c44,	// (0x00045a79) text_title

0x61f4,	// (0x00048029) bg_passive_tab_pane_g1_cp3_srt

0x389c,	// (0x000456d1) bg_passive_tab_pane_g2_cp3_srt

0x61fd,	// (0x00048032) bg_passive_tab_pane_g3_cp3_srt

0x29b3,	// (0x000447e8) bg_active_tab_pane_cp3_srt_ParamLimits

0x29b3,	// (0x000447e8) bg_active_tab_pane_cp3_srt

0x6206,	// (0x0004803b) tabs_4_active_pane_srt_g1

0xda01,	// (0x0004f836) tabs_4_active_pane_srt_t1_ParamLimits

0xda01,	// (0x0004f836) tabs_4_active_pane_srt_t1

0x61f4,	// (0x00048029) bg_active_tab_pane_g1_cp3_copy1

0x389c,	// (0x000456d1) bg_active_tab_pane_g2_cp3_copy1

0x61fd,	// (0x00048032) bg_active_tab_pane_g3_cp3_copy1

0x2737,	// (0x0004456c) tabs_2_long_active_pane_srt_ParamLimits

0x2737,	// (0x0004456c) tabs_2_long_active_pane_srt

0x2737,	// (0x0004456c) tabs_2_long_passive_pane_srt_ParamLimits

0x2737,	// (0x0004456c) tabs_2_long_passive_pane_srt

0x3fd1,	// (0x00045e06) bg_passive_tab_pane_cp4_srt_ParamLimits

0x3fd1,	// (0x00045e06) bg_passive_tab_pane_cp4_srt

0x5ea8,	// (0x00047cdd) bg_passive_tab_pane_g1_cp4_srt

0x389c,	// (0x000456d1) bg_passive_tab_pane_g2_cp4_srt

0x5eb1,	// (0x00047ce6) bg_passive_tab_pane_g3_cp4_srt

0x2737,	// (0x0004456c) bg_active_tab_pane_cp4_srt_ParamLimits

0x2737,	// (0x0004456c) bg_active_tab_pane_cp4_srt

0xd7f7,	// (0x0004f62c) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd7f7,	// (0x0004f62c) tabs_2_long_active_pane_srt_t1

0x5ea8,	// (0x00047cdd) bg_active_tab_pane_g1_cp4_srt

0x389c,	// (0x000456d1) bg_active_tab_pane_g2_cp4_srt

0x5eb1,	// (0x00047ce6) bg_active_tab_pane_g3_cp4_srt

0x29b3,	// (0x000447e8) tabs_3_long_active_pane_srt_ParamLimits

0x29b3,	// (0x000447e8) tabs_3_long_active_pane_srt

0x29b3,	// (0x000447e8) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x29b3,	// (0x000447e8) tabs_3_long_passive_pane_cp_srt

0x29b3,	// (0x000447e8) tabs_3_long_passive_pane_srt_ParamLimits

0x29b3,	// (0x000447e8) tabs_3_long_passive_pane_srt

0x3fd1,	// (0x00045e06) bg_passive_tab_pane_cp5_srt_ParamLimits

0x3fd1,	// (0x00045e06) bg_passive_tab_pane_cp5_srt

0x3926,	// (0x0004575b) bg_passive_tab_pane_g1_cp5_srt

0x389c,	// (0x000456d1) bg_passive_tab_pane_g2_cp5_srt

0x392f,	// (0x00045764) bg_passive_tab_pane_g3_cp5_srt

0x2737,	// (0x0004456c) bg_active_tab_pane_cp5_srt_ParamLimits

0x2737,	// (0x0004456c) bg_active_tab_pane_cp5_srt

0xd7e1,	// (0x0004f616) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd7e1,	// (0x0004f616) tabs_3_long_active_pane_srt_t1

0x3926,	// (0x0004575b) bg_active_tab_pane_g1_cp5_srt

0x389c,	// (0x000456d1) bg_active_tab_pane_g2_cp5_srt

0x392f,	// (0x00045764) bg_active_tab_pane_g3_cp5_srt

0x5e88,	// (0x00047cbd) navi_text_pane_srt_t1

0x5e80,	// (0x00047cb5) navi_icon_pane_srt_g1

0x3e1b,	// (0x00045c50) midp_editing_number_pane_srt

0x3c53,	// (0x00045a88) midp_ticker_pane_srt

0x3e23,	// (0x00045c58) midp_ticker_pane_srt_g1

0x3e2b,	// (0x00045c60) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x000515c4) midp_ticker_pane_srt_g

0x3e33,	// (0x00045c68) midp_ticker_pane_srt_t1

0x5e71,	// (0x00047ca6) midp_editing_number_pane_t1_copy1

0xc061,	// (0x0004de96) listscroll_midp_pane

0xc061,	// (0x0004de96) midp_form_pane

0x3cc9,	// (0x00045afe) midp_info_popup_window_ParamLimits

0x3cc9,	// (0x00045afe) midp_info_popup_window

0x3082,	// (0x00044eb7) bg_popup_sub_pane_cp50_ParamLimits

0x3082,	// (0x00044eb7) bg_popup_sub_pane_cp50

0x4f60,	// (0x00046d95) listscroll_midp_info_pane_ParamLimits

0x4f60,	// (0x00046d95) listscroll_midp_info_pane

0x4f48,	// (0x00046d7d) listscroll_form_midp_pane_ParamLimits

0x4f48,	// (0x00046d7d) listscroll_form_midp_pane

0x4f54,	// (0x00046d89) scroll_bar_cp050

0xd5e2,	// (0x0004f417) list_midp_pane

0x6c3d,	// (0x00048a72) signal_pane_g2_cp

0x4e62,	// (0x00046c97) listscroll_midp_info_pane_t1_ParamLimits

0x4e62,	// (0x00046c97) listscroll_midp_info_pane_t1

0x4e7a,	// (0x00046caf) listscroll_midp_info_pane_t2_ParamLimits

0x4e7a,	// (0x00046caf) listscroll_midp_info_pane_t2

0x4eb8,	// (0x00046ced) listscroll_midp_info_pane_t3_ParamLimits

0x4eb8,	// (0x00046ced) listscroll_midp_info_pane_t3

0x4ef2,	// (0x00046d27) listscroll_midp_info_pane_t4_ParamLimits

0x4ef2,	// (0x00046d27) listscroll_midp_info_pane_t4

0x0003,

0xf83b,	// (0x00051670) listscroll_midp_info_pane_t_ParamLimits

0xf83b,	// (0x00051670) listscroll_midp_info_pane_t

0x314c,	// (0x00044f81) scroll_pane_cp21

0x4dfc,	// (0x00046c31) form_midp_field_choice_group_pane

0x4e05,	// (0x00046c3a) form_midp_field_text_pane

0x4e48,	// (0x00046c7d) form_midp_field_time_pane

0x4e50,	// (0x00046c85) form_midp_gauge_slider_pane

0x4e59,	// (0x00046c8e) form_midp_gauge_wait_pane

0xda87,	// (0x0004f8bc) form_midp_image_pane

0xb592,	// (0x0004d3c7) list_single_midp_pane_ParamLimits

0xb592,	// (0x0004d3c7) list_single_midp_pane

0xd5c0,	// (0x0004f3f5) form_midp_field_text_pane_t1

0x4c00,	// (0x00046a35) input_focus_pane_cp050

0x4deb,	// (0x00046c20) list_midp_form_text_pane

0x4d9c,	// (0x00046bd1) form_midp_field_choice_group_pane_t1

0x4daa,	// (0x00046bdf) input_focus_pane_cp051

0x4dbe,	// (0x00046bf3) list_midp_choice_pane

0xda87,	// (0x0004f8bc) status_idle_pane

0x4d80,	// (0x00046bb5) form_midp_field_time_pane_t1

0xda7d,	// (0x0004f8b2) wait_anim_pane_g2_copy1

0x4d8e,	// (0x00046bc3) form_midp_field_time_pane_t2

0x0001,

0x3d79,	// (0x00045bae) aid_navinavi_width_2_pane

0xf836,	// (0x0005166b) form_midp_field_time_pane_t

0xda87,	// (0x0004f8bc) input_focus_pane_cp052

0xda87,	// (0x0004f8bc) bg_input_focus_pane_cp040

0x4d40,	// (0x00046b75) form_midp_gauge_slider_pane_t1

0x4d4e,	// (0x00046b83) form_midp_gauge_slider_pane_t2

0xd5a4,	// (0x0004f3d9) form_midp_gauge_slider_pane_t3

0xd5b2,	// (0x0004f3e7) form_midp_gauge_slider_pane_t4

0x0003,

0xf82d,	// (0x00051662) form_midp_gauge_slider_pane_t

0x4d78,	// (0x00046bad) form_midp_slider_pane

0x2737,	// (0x0004456c) bg_input_focus_pane_cp041_ParamLimits

0x2737,	// (0x0004456c) bg_input_focus_pane_cp041

0x4d0d,	// (0x00046b42) form_midp_gauge_wait_pane_t1_ParamLimits

0x4d0d,	// (0x00046b42) form_midp_gauge_wait_pane_t1

0x4d1f,	// (0x00046b54) form_midp_gauge_wait_pane_t2_ParamLimits

0x4d1f,	// (0x00046b54) form_midp_gauge_wait_pane_t2

0x0001,

0xf828,	// (0x0005165d) form_midp_gauge_wait_pane_t_ParamLimits

0xf828,	// (0x0005165d) form_midp_gauge_wait_pane_t

0x4d31,	// (0x00046b66) form_midp_wait_pane_ParamLimits

0x4d31,	// (0x00046b66) form_midp_wait_pane

0x4cd7,	// (0x00046b0c) form_midp_image_pane_g1

0x4ce0,	// (0x00046b15) form_midp_image_pane_t1

0x4cef,	// (0x00046b24) form_midp_image_pane_t2

0xd593,	// (0x0004f3c8) form_midp_image_pane_t3

0x0002,

0xf821,	// (0x00051656) form_midp_image_pane_t

0x4cce,	// (0x00046b03) list_single_midp_pane_g1

0x03fb,	// (0x00042230) list_single_midp_pane_t1

0xd580,	// (0x0004f3b5) list_midp_form_item_pane_ParamLimits

0xd580,	// (0x0004f3b5) list_midp_form_item_pane

0x3d21,	// (0x00045b56) list_midp_form_item_pane_t1

0x3d30,	// (0x00045b65) midp_ticker_pane_g1

0x3d3c,	// (0x00045b71) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x000515aa) midp_ticker_pane_g

0xc989,	// (0x0004e7be) midp_ticker_pane_t1

0xd986,	// (0x0004f7bb) midp_editing_number_pane_t1

0x60ce,	// (0x00047f03) midp_editing_number_pane

0x60dd,	// (0x00047f12) midp_ticker_pane

0x5e61,	// (0x00047c96) ai_message_heading_pane

0xda87,	// (0x0004f8bc) bg_popup_window_pane_cp14

0x5e69,	// (0x00047c9e) listscroll_ai_message_pane

0x5de7,	// (0x00047c1c) ai_message_heading_pane_g1_ParamLimits

0x5de7,	// (0x00047c1c) ai_message_heading_pane_g1

0x5df3,	// (0x00047c28) ai_message_heading_pane_g2_ParamLimits

0x5df3,	// (0x00047c28) ai_message_heading_pane_g2

0x5e01,	// (0x00047c36) ai_message_heading_pane_g3_ParamLimits

0x5e01,	// (0x00047c36) ai_message_heading_pane_g3

0x5e0d,	// (0x00047c42) ai_message_heading_pane_g4_ParamLimits

0x5e0d,	// (0x00047c42) ai_message_heading_pane_g4

0x0003,

0xf962,	// (0x00051797) ai_message_heading_pane_g_ParamLimits

0xf962,	// (0x00051797) ai_message_heading_pane_g

0x5e19,	// (0x00047c4e) ai_message_heading_pane_t1_ParamLimits

0x5e19,	// (0x00047c4e) ai_message_heading_pane_t1

0x5e33,	// (0x00047c68) ai_message_heading_pane_t2_ParamLimits

0x5e33,	// (0x00047c68) ai_message_heading_pane_t2

0x0001,

0xf96b,	// (0x000517a0) ai_message_heading_pane_t_ParamLimits

0xf96b,	// (0x000517a0) ai_message_heading_pane_t

0x5e47,	// (0x00047c7c) bg_popup_heading_pane_cp1_ParamLimits

0x5e47,	// (0x00047c7c) bg_popup_heading_pane_cp1

0x5dd5,	// (0x00047c0a) list_ai_message_pane_ParamLimits

0x5dd5,	// (0x00047c0a) list_ai_message_pane

0x314c,	// (0x00044f81) scroll_pane_cp10

0x5d71,	// (0x00047ba6) list_ai_message_pane_g1

0x5d79,	// (0x00047bae) list_ai_message_pane_g2

0x0001,

0xf93f,	// (0x00051774) list_ai_message_pane_g

0x5d81,	// (0x00047bb6) list_ai_message_pane_t1_ParamLimits

0x5d81,	// (0x00047bb6) list_ai_message_pane_t1

0x5d96,	// (0x00047bcb) list_ai_message_pane_t2_ParamLimits

0x5d96,	// (0x00047bcb) list_ai_message_pane_t2

0x5dab,	// (0x00047be0) list_ai_message_pane_t3_ParamLimits

0x5dab,	// (0x00047be0) list_ai_message_pane_t3

0x5dc0,	// (0x00047bf5) list_ai_message_pane_t4_ParamLimits

0x5dc0,	// (0x00047bf5) list_ai_message_pane_t4

0x0003,

0xf944,	// (0x00051779) list_ai_message_pane_t_ParamLimits

0xf944,	// (0x00051779) list_ai_message_pane_t

0xd7c7,	// (0x0004f5fc) cell_ai_soft_ind_pane_ParamLimits

0xd7c7,	// (0x0004f5fc) cell_ai_soft_ind_pane

0x3d5a,	// (0x00045b8f) cell_ai_soft_ind_pane_g1_ParamLimits

0x3d5a,	// (0x00045b8f) cell_ai_soft_ind_pane_g1

0xda87,	// (0x0004f8bc) grid_highlight_cp1

0x3d67,	// (0x00045b9c) text_secondary_cp56_ParamLimits

0x3d67,	// (0x00045b9c) text_secondary_cp56

0x5d2f,	// (0x00047b64) example_general_pane_ParamLimits

0x5d2f,	// (0x00047b64) example_general_pane

0x5d3b,	// (0x00047b70) example_parent_pane_g1_ParamLimits

0x5d3b,	// (0x00047b70) example_parent_pane_g1

0x5d47,	// (0x00047b7c) example_parent_pane_t1_ParamLimits

0x5d47,	// (0x00047b7c) example_parent_pane_t1

0xcded,	// (0x0004ec22) popup_preview_text_window_ParamLimits

0xcded,	// (0x0004ec22) popup_preview_text_window

0x3b82,	// (0x000459b7) list_single_pane_cp2_g4

0x2a69,	// (0x0004489e) bg_popup_preview_window_pane_ParamLimits

0x2a69,	// (0x0004489e) bg_popup_preview_window_pane

0x5a62,	// (0x00047897) popup_preview_text_window_t1_ParamLimits

0x5a62,	// (0x00047897) popup_preview_text_window_t1

0x5a80,	// (0x000478b5) popup_preview_text_window_t2_ParamLimits

0x5a80,	// (0x000478b5) popup_preview_text_window_t2

0x5ac9,	// (0x000478fe) popup_preview_text_window_t3_ParamLimits

0x5ac9,	// (0x000478fe) popup_preview_text_window_t3

0x5b0e,	// (0x00047943) popup_preview_text_window_t4_ParamLimits

0x5b0e,	// (0x00047943) popup_preview_text_window_t4

0x0004,

0xf913,	// (0x00051748) popup_preview_text_window_t_ParamLimits

0xf913,	// (0x00051748) popup_preview_text_window_t

0x5b8c,	// (0x000479c1) scroll_pane_cp11

0x4b0e,	// (0x00046943) bg_popup_preview_window_pane_g1

0x5a16,	// (0x0004784b) bg_popup_preview_window_pane_g2

0x5a20,	// (0x00047855) bg_popup_preview_window_pane_g3

0x5a2a,	// (0x0004785f) bg_popup_preview_window_pane_g4

0x5a34,	// (0x00047869) bg_popup_preview_window_pane_g5

0x5a3e,	// (0x00047873) bg_popup_preview_window_pane_g6

0x5a46,	// (0x0004787b) bg_popup_preview_window_pane_g7

0x5a4e,	// (0x00047883) bg_popup_preview_window_pane_g8

0x0900,	// (0x00042735) aid_popup_width_pane

0xcd5d,	// (0x0004eb92) popup_midp_note_alarm_window_ParamLimits

0xcd5d,	// (0x0004eb92) popup_midp_note_alarm_window

0x2fbe,	// (0x00044df3) data_form_pane_ParamLimits

0xb415,	// (0x0004d24a) form_field_data_pane_g1

0xb41f,	// (0x0004d254) form_field_data_pane_t1_ParamLimits

0x2fca,	// (0x00044dff) input_focus_pane_ParamLimits

0x2fd8,	// (0x00044e0d) data_form_wide_pane_ParamLimits

0x015d,	// (0x00041f92) form_field_data_wide_pane_g1

0x0169,	// (0x00041f9e) form_field_data_wide_pane_t1_ParamLimits

0x2d2f,	// (0x00044b64) input_focus_pane_cp6_ParamLimits

0xbd92,	// (0x0004dbc7) input_popup_find_pane_g1_ParamLimits

0xbd92,	// (0x0004dbc7) input_popup_find_pane_g1

0x0f24,	// (0x00042d59) aid_navi_side_left_pane

0x0f39,	// (0x00042d6e) aid_navi_side_right_pane

0x5425,	// (0x0004725a) bg_popup_window_pane_cp30_ParamLimits

0x5425,	// (0x0004725a) bg_popup_window_pane_cp30

0x549f,	// (0x000472d4) popup_midp_note_alarm_window_g1_ParamLimits

0x549f,	// (0x000472d4) popup_midp_note_alarm_window_g1

0x54cf,	// (0x00047304) popup_midp_note_alarm_window_t1_ParamLimits

0x54cf,	// (0x00047304) popup_midp_note_alarm_window_t1

0x5570,	// (0x000473a5) popup_midp_note_alarm_window_t2_ParamLimits

0x5570,	// (0x000473a5) popup_midp_note_alarm_window_t2

0x561e,	// (0x00047453) popup_midp_note_alarm_window_t3_ParamLimits

0x561e,	// (0x00047453) popup_midp_note_alarm_window_t3

0x5650,	// (0x00047485) popup_midp_note_alarm_window_t4_ParamLimits

0x5650,	// (0x00047485) popup_midp_note_alarm_window_t4

0x5676,	// (0x000474ab) popup_midp_note_alarm_window_t5_ParamLimits

0x5676,	// (0x000474ab) popup_midp_note_alarm_window_t5

0x000a,

0xf8b0,	// (0x000516e5) popup_midp_note_alarm_window_t_ParamLimits

0xf8b0,	// (0x000516e5) popup_midp_note_alarm_window_t

0x5722,	// (0x00047557) wait_bar_pane_cp1_ParamLimits

0x5722,	// (0x00047557) wait_bar_pane_cp1

0xda87,	// (0x0004f8bc) wait_anim_pane_copy1

0xda87,	// (0x0004f8bc) wait_border_pane_copy1

0x510a,	// (0x00046f3f) wait_border_pane_g1_copy1

0x0183,	// (0x00041fb8) form_field_popup_pane_g1

0xb439,	// (0x0004d26e) form_field_popup_pane_t1_ParamLimits

0x2fca,	// (0x00044dff) input_focus_pane_cp7_ParamLimits

0x3004,	// (0x00044e39) list_form_pane_ParamLimits

0x01a5,	// (0x00041fda) form_field_popup_wide_pane_g1

0x01ad,	// (0x00041fe2) form_field_popup_wide_pane_t1_ParamLimits

0x2fca,	// (0x00044dff) input_focus_pane_cp8_ParamLimits

0x3010,	// (0x00044e45) list_form_wide_pane_ParamLimits

0x6281,	// (0x000480b6) aid_size_cell_graphic_pane

0xb4b8,	// (0x0004d2ed) data_form_pane_t1_ParamLimits

0xb5ba,	// (0x0004d3ef) data_form_wide_pane_t1_ParamLimits

0xd1ef,	// (0x0004f024) bg_status_flat_pane

0xb96f,	// (0x0004d7a4) title_pane_t1_ParamLimits

0x26ff,	// (0x00044534) title_pane_t2_ParamLimits

0x2725,	// (0x0004455a) title_pane_t3_ParamLimits

0xf56f,	// (0x000513a4) title_pane_t_ParamLimits

0xbe9e,	// (0x0004dcd3) level_1_signal_ParamLimits

0xbeb0,	// (0x0004dce5) level_2_signal_ParamLimits

0xbec3,	// (0x0004dcf8) level_3_signal_ParamLimits

0xbed6,	// (0x0004dd0b) level_4_signal_ParamLimits

0xbee9,	// (0x0004dd1e) level_5_signal_ParamLimits

0xbefc,	// (0x0004dd31) level_6_signal_ParamLimits

0xbf0f,	// (0x0004dd44) level_7_signal_ParamLimits

0xbe9e,	// (0x0004dcd3) level_1_battery_ParamLimits

0xbeb0,	// (0x0004dce5) level_2_battery_ParamLimits

0xbec3,	// (0x0004dcf8) level_3_battery_ParamLimits

0xbed6,	// (0x0004dd0b) level_4_battery_ParamLimits

0xbee9,	// (0x0004dd1e) level_5_battery_ParamLimits

0xbefc,	// (0x0004dd31) level_6_battery_ParamLimits

0xbf0f,	// (0x0004dd44) level_7_battery_ParamLimits

0x532a,	// (0x0004715f) bg_status_flat_pane_g1

0x5332,	// (0x00047167) bg_status_flat_pane_g2

0x533a,	// (0x0004716f) bg_status_flat_pane_g3

0x5342,	// (0x00047177) bg_status_flat_pane_g4

0x534a,	// (0x0004717f) bg_status_flat_pane_g5

0x5352,	// (0x00047187) bg_status_flat_pane_g6

0x535a,	// (0x0004718f) bg_status_flat_pane_g7

0xba03,	// (0x0004d838) tabs_3_active_pane_t1_ParamLimits

0xba03,	// (0x0004d838) tabs_3_passive_pane_t1_ParamLimits

0xba1d,	// (0x0004d852) tabs_4_active_pane_t1_ParamLimits

0xba1d,	// (0x0004d852) tabs_4_1_passive_pane_t1_ParamLimits

0xbda8,	// (0x0004dbdd) tabs_2_active_pane_t1_ParamLimits

0xbda8,	// (0x0004dbdd) tabs_2_passive_pane_t1_ParamLimits

0x2737,	// (0x0004456c) bg_active_tab_pane_cp4_ParamLimits

0xbdba,	// (0x0004dbef) tabs_2_long_active_pane_t1_ParamLimits

0x3fd1,	// (0x00045e06) bg_passive_tab_pane_cp4_ParamLimits

0x14a4,	// (0x000432d9) list_single_midp_graphic_pane_t1_ParamLimits

0x2737,	// (0x0004456c) bg_active_tab_pane_cp5_ParamLimits

0xbdcd,	// (0x0004dc02) tabs_3_long_active_pane_t1_ParamLimits

0x3fd1,	// (0x00045e06) bg_passive_tab_pane_cp5_ParamLimits

0x14a4,	// (0x000432d9) list_single_midp_graphic_pane_t1

0xd1ef,	// (0x0004f024) bg_status_flat_pane_ParamLimits

0x4786,	// (0x000465bb) indicator_pane_cp2_ParamLimits

0x4786,	// (0x000465bb) indicator_pane_cp2

0xd385,	// (0x0004f1ba) navi_pane_srt_ParamLimits

0xd385,	// (0x0004f1ba) navi_pane_srt

0x48ed,	// (0x00046722) popup_clock_digital_analogue_window_cp1

0x2817,	// (0x0004464c) indicator_pane_t1

0x3c53,	// (0x00045a88) copy_highlight_pane

0x3c53,	// (0x00045a88) cursor_graphics_pane

0x3c53,	// (0x00045a88) graphic_within_text_pane

0x3c53,	// (0x00045a88) link_highlight_pane

0x5b4f,	// (0x00047984) popup_preview_text_window_t5_ParamLimits

0x5b4f,	// (0x00047984) popup_preview_text_window_t5

0x3d83,	// (0x00045bb8) cursor_digital_pane

0x3d83,	// (0x00045bb8) cursor_primary_pane

0x3d94,	// (0x00045bc9) cursor_primary_small_pane

0x3d9c,	// (0x00045bd1) cursor_secondary_pane

0x3da4,	// (0x00045bd9) cursor_title_pane

0x3d83,	// (0x00045bb8) link_highlight_digital_pane

0x3d8b,	// (0x00045bc0) link_highlight_primary_pane

0x3d94,	// (0x00045bc9) link_highlight_primary_small_pane

0x3d9c,	// (0x00045bd1) link_highlight_secondary_pane

0x3da4,	// (0x00045bd9) link_highlight_title_pane

0x3d83,	// (0x00045bb8) copy_highlight_digital_pane

0x3d83,	// (0x00045bb8) copy_highlight_primary_pane

0x3d94,	// (0x00045bc9) copy_highlight_primary_small_pane

0x3d9c,	// (0x00045bd1) copy_highlight_secondary_pane

0x3da4,	// (0x00045bd9) copy_highlight_title_pane

0x3d9c,	// (0x00045bd1) graphic_text_digital_pane

0x53c8,	// (0x000471fd) graphic_text_primary_pane

0x53d1,	// (0x00047206) graphic_text_primary_small_pane

0x3d94,	// (0x00045bc9) graphic_text_secondary_pane

0x3d83,	// (0x00045bb8) graphic_text_title_pane

0xc99b,	// (0x0004e7d0) cursor_primary_pane_g1

0x53ba,	// (0x000471ef) cursor_text_primary_t1

0xd61e,	// (0x0004f453) cursor_primary_small_pane_g1

0x53ac,	// (0x000471e1) cursor_text_primary_small_t1

0xd614,	// (0x0004f449) cursor_primary_small_pane_g1_copy1

0x5394,	// (0x000471c9) cursor_text_primary_small_t1_copy1

0x5372,	// (0x000471a7) cursor_text_title_t1

0xd60a,	// (0x0004f43f) cursor_title_pane_g1

0xc99b,	// (0x0004e7d0) cursor_digital_pane_g1

0x3db6,	// (0x00045beb) cursor_text_digital_t1

0x3dc4,	// (0x00045bf9) link_highlight_primary_pane_g1

0x531b,	// (0x00047150) link_highlight_primary_pane_t1

0x3dc4,	// (0x00045bf9) link_highlight_primary_small_pane_g1

0x3dcc,	// (0x00045c01) link_highlight_primary_small_pane_t1

0x3ddb,	// (0x00045c10) link_highlight_secondary_pane_g1

0x3de3,	// (0x00045c18) link_highlight_secondary_pane_t1

0x528f,	// (0x000470c4) link_highlight_title_pane_g1

0x5297,	// (0x000470cc) link_highlight_title_pane_t1

0x5278,	// (0x000470ad) link_highlight_digital_pane_g1

0x5280,	// (0x000470b5) link_highlight_digital_pane_t1

0x5140,	// (0x00046f75) copy_highlight_primary_pane_g1

0x5157,	// (0x00046f8c) copy_highlight_primary_pane_t1

0x5140,	// (0x00046f75) copy_highlight_primary_small_pane_g1

0x5148,	// (0x00046f7d) copy_highlight_primary_small_pane_t1

0x3df2,	// (0x00045c27) copy_highlight_secondary_pane_g1

0x3dfa,	// (0x00045c2f) copy_highlight_secondary_pane_t1

0x5129,	// (0x00046f5e) copy_highlight_title_pane_g1

0x5131,	// (0x00046f66) copy_highlight_title_pane_t1

0x5140,	// (0x00046f75) copy_highlight_digital_pane_g1

0x6451,	// (0x00048286) copy_highlight_digital_pane_t1

0x63a5,	// (0x000481da) graphic_text_primary_pane_g1

0x6435,	// (0x0004826a) graphic_text_primary_pane_t1

0x6443,	// (0x00048278) graphic_text_primary_pane_t2

0x0001,

0xf9df,	// (0x00051814) graphic_text_primary_pane_t

0x6411,	// (0x00048246) graphic_text_primary_small_pane_g1

0x6419,	// (0x0004824e) graphic_text_primary_small_pane_t1

0x6427,	// (0x0004825c) graphic_text_primary_small_pane_t2

0x0001,

0xf9da,	// (0x0005180f) graphic_text_primary_small_pane_t

0x63ed,	// (0x00048222) graphic_text_secondary_pane_g1

0x63f5,	// (0x0004822a) graphic_text_secondary_pane_t1

0x6403,	// (0x00048238) graphic_text_secondary_pane_t2

0x0001,

0xf9d5,	// (0x0005180a) graphic_text_secondary_pane_t

0x63c9,	// (0x000481fe) graphic_text_title_pane_g1

0x63d1,	// (0x00048206) graphic_text_title_pane_t1

0x63df,	// (0x00048214) graphic_text_title_pane_t2

0x0001,

0xf9d0,	// (0x00051805) graphic_text_title_pane_t

0x63a5,	// (0x000481da) graphic_text_digital_pane_g1

0x63ad,	// (0x000481e2) graphic_text_digital_pane_t1

0x63bb,	// (0x000481f0) graphic_text_digital_pane_t2

0x0001,

0xf9cb,	// (0x00051800) graphic_text_digital_pane_t

0x2737,	// (0x0004456c) navi_icon_pane_srt_ParamLimits

0x2737,	// (0x0004456c) navi_icon_pane_srt

0xda87,	// (0x0004f8bc) navi_midp_pane_srt

0xda87,	// (0x0004f8bc) navi_navi_pane_srt

0x2737,	// (0x0004456c) navi_text_pane_srt_ParamLimits

0x2737,	// (0x0004456c) navi_text_pane_srt

0x6370,	// (0x000481a5) navi_navi_icon_text_pane_srt

0x6378,	// (0x000481ad) navi_navi_pane_srt_g1_ParamLimits

0x6378,	// (0x000481ad) navi_navi_pane_srt_g1

0x638a,	// (0x000481bf) navi_navi_pane_srt_g2_ParamLimits

0x638a,	// (0x000481bf) navi_navi_pane_srt_g2

0x0001,

0xf9c6,	// (0x000517fb) navi_navi_pane_srt_g_ParamLimits

0xf9c6,	// (0x000517fb) navi_navi_pane_srt_g

0x639c,	// (0x000481d1) navi_navi_tabs_pane_srt

0x6370,	// (0x000481a5) navi_navi_text_pane_srt

0x6370,	// (0x000481a5) navi_navi_volume_pane_srt

0x6361,	// (0x00048196) navi_navi_text_pane_srt_t1

0x186c,	// (0x000436a1) navi_navi_volume_pane_srt_g1

0x1874,	// (0x000436a9) volume_small_pane_srt_ParamLimits

0x1874,	// (0x000436a9) volume_small_pane_srt

0x1229,	// (0x0004305e) volume_small_pane_srt_g1_ParamLimits

0x1229,	// (0x0004305e) volume_small_pane_srt_g1

0x1239,	// (0x0004306e) volume_small_pane_srt_g2_ParamLimits

0x1239,	// (0x0004306e) volume_small_pane_srt_g2

0x124a,	// (0x0004307f) volume_small_pane_srt_g3_ParamLimits

0x124a,	// (0x0004307f) volume_small_pane_srt_g3

0x125b,	// (0x00043090) volume_small_pane_srt_g4_ParamLimits

0x125b,	// (0x00043090) volume_small_pane_srt_g4

0x126c,	// (0x000430a1) volume_small_pane_srt_g5_ParamLimits

0x126c,	// (0x000430a1) volume_small_pane_srt_g5

0x127d,	// (0x000430b2) volume_small_pane_srt_g6_ParamLimits

0x127d,	// (0x000430b2) volume_small_pane_srt_g6

0x128e,	// (0x000430c3) volume_small_pane_srt_g7_ParamLimits

0x128e,	// (0x000430c3) volume_small_pane_srt_g7

0x129f,	// (0x000430d4) volume_small_pane_srt_g8_ParamLimits

0x129f,	// (0x000430d4) volume_small_pane_srt_g8

0x12b0,	// (0x000430e5) volume_small_pane_srt_g9_ParamLimits

0x12b0,	// (0x000430e5) volume_small_pane_srt_g9

0x12c1,	// (0x000430f6) volume_small_pane_srt_g10_ParamLimits

0x12c1,	// (0x000430f6) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x000515af) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x000515af) volume_small_pane_srt_g

0x2b1e,	// (0x00044953) query_popup_data_pane_cp2

0x6347,	// (0x0004817c) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6347,	// (0x0004817c) navi_navi_icon_text_pane_srt_t1

0x53c8,	// (0x000471fd) navi_tabs_2_long_pane_srt

0x53c8,	// (0x000471fd) navi_tabs_2_pane_srt

0x53c8,	// (0x000471fd) navi_tabs_3_long_pane_srt

0x53c8,	// (0x000471fd) navi_tabs_3_pane_srt

0x53c8,	// (0x000471fd) navi_tabs_4_pane_srt

0x184c,	// (0x00043681) tabs_2_active_pane_srt_ParamLimits

0x184c,	// (0x00043681) tabs_2_active_pane_srt

0x185c,	// (0x00043691) tabs_2_passive_pane_srt_ParamLimits

0x185c,	// (0x00043691) tabs_2_passive_pane_srt

0x4c00,	// (0x00046a35) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4c00,	// (0x00046a35) bg_passive_tab_pane_cp1_srt

0x6313,	// (0x00048148) bg_passive_tab_pane_g1_cp1_srt

0x389c,	// (0x000456d1) bg_passive_tab_pane_g2_cp1_srt

0x631c,	// (0x00048151) bg_passive_tab_pane_g3_cp1_srt

0x29b3,	// (0x000447e8) bg_active_tab_pane_cp1_srt_ParamLimits

0x29b3,	// (0x000447e8) bg_active_tab_pane_cp1_srt

0x6325,	// (0x0004815a) tabs_2_active_pane_srt_g1

0xdab3,	// (0x0004f8e8) tabs_2_active_pane_srt_t1_ParamLimits

0xdab3,	// (0x0004f8e8) tabs_2_active_pane_srt_t1

0x6313,	// (0x00048148) bg_active_tab_pane_g1_cp1_srt

0x389c,	// (0x000456d1) bg_active_tab_pane_g2_cp1_srt

0x631c,	// (0x00048151) bg_active_tab_pane_g3_cp1_srt

0x1819,	// (0x0004364e) tabs_3_active_pane_srt_ParamLimits

0x1819,	// (0x0004364e) tabs_3_active_pane_srt

0x182a,	// (0x0004365f) tabs_3_passive_pane_cp_srt_ParamLimits

0x182a,	// (0x0004365f) tabs_3_passive_pane_cp_srt

0x183b,	// (0x00043670) tabs_3_passive_pane_srt_ParamLimits

0x183b,	// (0x00043670) tabs_3_passive_pane_srt

0x4c00,	// (0x00046a35) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4c00,	// (0x00046a35) bg_passive_tab_pane_cp2_srt

0x3e09,	// (0x00045c3e) bg_passive_tab_pane_g1_cp2_srt

0x389c,	// (0x000456d1) bg_passive_tab_pane_g2_cp2_srt

0x3e12,	// (0x00045c47) bg_passive_tab_pane_g3_cp2_srt

0x29b3,	// (0x000447e8) bg_active_tab_pane_cp2_srt_ParamLimits

0x29b3,	// (0x000447e8) bg_active_tab_pane_cp2_srt

0x62f9,	// (0x0004812e) tabs_3_active_pane_srt_g1

0xda9d,	// (0x0004f8d2) tabs_3_active_pane_srt_t1_ParamLimits

0xda9d,	// (0x0004f8d2) tabs_3_active_pane_srt_t1

0x3e09,	// (0x00045c3e) bg_active_tab_pane_g1_cp2_srt

0x389c,	// (0x000456d1) bg_active_tab_pane_g2_cp2_srt

0x3e12,	// (0x00045c47) bg_active_tab_pane_g3_cp2_srt

0x17d1,	// (0x00043606) tabs_4_active_pane_srt_ParamLimits

0x17d1,	// (0x00043606) tabs_4_active_pane_srt

0x17e3,	// (0x00043618) tabs_4_passive_pane_cp2_srt_ParamLimits

0x17e3,	// (0x00043618) tabs_4_passive_pane_cp2_srt

0x3f67,	// (0x00045d9c) aid_size_cell_toolbar

0x5f1b,	// (0x00047d50) main_idle_act_pane_ParamLimits

0x4196,	// (0x00045fcb) popup_large_graphic_colour_window_ParamLimits

0xd0b3,	// (0x0004eee8) popup_toolbar_window_ParamLimits

0xd0b3,	// (0x0004eee8) popup_toolbar_window

0x6113,	// (0x00047f48) list_single_graphic_2heading_pane_ParamLimits

0x6113,	// (0x00047f48) list_single_graphic_2heading_pane

0x337d,	// (0x000451b2) aid_size_cell_apps_grid_lsc_pane

0x338f,	// (0x000451c4) aid_size_cell_apps_grid_prt_pane

0x3fd1,	// (0x00045e06) bg_wml_button_pane_cp1_ParamLimits

0x3fd1,	// (0x00045e06) bg_wml_button_pane_cp1

0xd5c0,	// (0x0004f3f5) form_midp_field_text_pane_t1_ParamLimits

0x4c00,	// (0x00046a35) input_focus_pane_cp050_ParamLimits

0x4deb,	// (0x00046c20) list_midp_form_text_pane_ParamLimits

0x4daa,	// (0x00046bdf) input_focus_pane_cp051_ParamLimits

0x4dbe,	// (0x00046bf3) list_midp_choice_pane_ParamLimits

0xd550,	// (0x0004f385) list_single_2graphic_pane_cp3_ParamLimits

0xd550,	// (0x0004f385) list_single_2graphic_pane_cp3

0xd562,	// (0x0004f397) list_single_midp_graphic_pane_ParamLimits

0xd562,	// (0x0004f397) list_single_midp_graphic_pane

0x0343,	// (0x00042178) list_single_graphic_2heading_pane_g1_ParamLimits

0x0343,	// (0x00042178) list_single_graphic_2heading_pane_g1

0x034f,	// (0x00042184) list_single_graphic_2heading_pane_g4_ParamLimits

0x034f,	// (0x00042184) list_single_graphic_2heading_pane_g4

0x035b,	// (0x00042190) list_single_graphic_2heading_pane_g5_ParamLimits

0x035b,	// (0x00042190) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x00051602) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x00051602) list_single_graphic_2heading_pane_g

0x0367,	// (0x0004219c) list_single_graphic_2heading_pane_t1_ParamLimits

0x0367,	// (0x0004219c) list_single_graphic_2heading_pane_t1

0x037b,	// (0x000421b0) list_single_graphic_2heading_pane_t2_ParamLimits

0x037b,	// (0x000421b0) list_single_graphic_2heading_pane_t2

0x0397,	// (0x000421cc) list_single_graphic_2heading_pane_t3_ParamLimits

0x0397,	// (0x000421cc) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x00051609) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x00051609) list_single_graphic_2heading_pane_t

0x4a4c,	// (0x00046881) bg_popup_sub_pane_cp2

0x4a76,	// (0x000468ab) grid_toobar_pane

0x141c,	// (0x00043251) cell_toolbar_pane_ParamLimits

0x141c,	// (0x00043251) cell_toolbar_pane

0x4ab2,	// (0x000468e7) cell_toolbar_pane_g1_ParamLimits

0x4ab2,	// (0x000468e7) cell_toolbar_pane_g1

0x4ac6,	// (0x000468fb) cell_toolbar_pane_g2_ParamLimits

0x4ac6,	// (0x000468fb) cell_toolbar_pane_g2

0x0001,

0xf7e2,	// (0x00051617) cell_toolbar_pane_g_ParamLimits

0xf7e2,	// (0x00051617) cell_toolbar_pane_g

0x4ae8,	// (0x0004691d) grid_highlight_pane_cp2_ParamLimits

0x4ae8,	// (0x0004691d) grid_highlight_pane_cp2

0x4b02,	// (0x00046937) toolbar_button_pane

0x4b0e,	// (0x00046943) toolbar_button_pane_g1

0x4b16,	// (0x0004694b) toolbar_button_pane_g2

0x4b1e,	// (0x00046953) toolbar_button_pane_g3

0x4b26,	// (0x0004695b) toolbar_button_pane_g4

0x4b2e,	// (0x00046963) toolbar_button_pane_g5

0x4b36,	// (0x0004696b) toolbar_button_pane_g6

0x4b3e,	// (0x00046973) toolbar_button_pane_g7

0x4b46,	// (0x0004697b) toolbar_button_pane_g8

0x4b4e,	// (0x00046983) toolbar_button_pane_g9

0x0009,

0xf7e7,	// (0x0005161c) toolbar_button_pane_g

0x1460,	// (0x00043295) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1460,	// (0x00043295) list_single_2graphic_pane_g1_cp3

0xc1ef,	// (0x0004e024) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc1ef,	// (0x0004e024) list_single_2graphic_pane_g2_cp3

0x3a7d,	// (0x000458b2) list_single_2graphic_pane_g3_cp3

0x147d,	// (0x000432b2) list_single_2graphic_pane_g4_cp3_ParamLimits

0x147d,	// (0x000432b2) list_single_2graphic_pane_g4_cp3

0x1489,	// (0x000432be) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1489,	// (0x000432be) list_single_2graphic_pane_t1_cp3

0x3a71,	// (0x000458a6) list_single_midp_graphic_pane_g2_ParamLimits

0x3a71,	// (0x000458a6) list_single_midp_graphic_pane_g2

0x032b,	// (0x00042160) aid_zoom_text_primary

0x0333,	// (0x00042168) aid_zoom_text_secondary

0x3ec6,	// (0x00045cfb) status_small_pane_g7_ParamLimits

0x3ec6,	// (0x00045cfb) status_small_pane_g7

0x3ee9,	// (0x00045d1e) status_small_pane_t1_ParamLimits

0xb94b,	// (0x0004d780) title_pane_g2

0x0003,

0xf566,	// (0x0005139b) title_pane_g

0xbbe3,	// (0x0004da18) aid_size_cell_colour_1_pane_ParamLimits

0xbbe3,	// (0x0004da18) aid_size_cell_colour_1_pane

0xbbf7,	// (0x0004da2c) aid_size_cell_colour_2_pane_ParamLimits

0xbbf7,	// (0x0004da2c) aid_size_cell_colour_2_pane

0xbc0b,	// (0x0004da40) aid_size_cell_colour_3_pane_ParamLimits

0xbc0b,	// (0x0004da40) aid_size_cell_colour_3_pane

0xbc1f,	// (0x0004da54) aid_size_cell_colour_4_pane_ParamLimits

0xbc1f,	// (0x0004da54) aid_size_cell_colour_4_pane

0x0e60,	// (0x00042c95) title_pane_stacon_g1_ParamLimits

0x0e60,	// (0x00042c95) title_pane_stacon_g1

0x51ae,	// (0x00046fe3) popup_note_wait_window_g3_ParamLimits

0x51ae,	// (0x00046fe3) popup_note_wait_window_g3

0x5225,	// (0x0004705a) popup_note_wait_window_t5_ParamLimits

0x5225,	// (0x0004705a) popup_note_wait_window_t5

0xda87,	// (0x0004f8bc) main_feb_china_hwr_fs_writing_pane

0xca4e,	// (0x0004e883) popup_feb_china_hwr_fs_window_ParamLimits

0xca4e,	// (0x0004e883) popup_feb_china_hwr_fs_window

0xc200,	// (0x0004e035) aid_size_cell_hwr_fs_ParamLimits

0xc200,	// (0x0004e035) aid_size_cell_hwr_fs

0x4c00,	// (0x00046a35) bg_popup_sub_pane_cp3_ParamLimits

0x4c00,	// (0x00046a35) bg_popup_sub_pane_cp3

0xc215,	// (0x0004e04a) grid_hwr_fs_pane_ParamLimits

0xc215,	// (0x0004e04a) grid_hwr_fs_pane

0x14e7,	// (0x0004331c) linegrid_hwr_fs_pane_ParamLimits

0x14e7,	// (0x0004331c) linegrid_hwr_fs_pane

0xc22d,	// (0x0004e062) cell_hwr_fs_pane_ParamLimits

0xc22d,	// (0x0004e062) cell_hwr_fs_pane

0x4c0c,	// (0x00046a41) linegrid_hwr_fs_pane_g1_ParamLimits

0x4c0c,	// (0x00046a41) linegrid_hwr_fs_pane_g1

0xd524,	// (0x0004f359) linegrid_hwr_fs_pane_g2_ParamLimits

0xd524,	// (0x0004f359) linegrid_hwr_fs_pane_g2

0x4c2a,	// (0x00046a5f) linegrid_hwr_fs_pane_g3_ParamLimits

0x4c2a,	// (0x00046a5f) linegrid_hwr_fs_pane_g3

0x151b,	// (0x00043350) linegrid_hwr_fs_pane_g4_ParamLimits

0x151b,	// (0x00043350) linegrid_hwr_fs_pane_g4

0x1539,	// (0x0004336e) linegrid_hwr_fs_pane_g5_ParamLimits

0x1539,	// (0x0004336e) linegrid_hwr_fs_pane_g5

0x0004,

0xf80d,	// (0x00051642) linegrid_hwr_fs_pane_g_ParamLimits

0xf80d,	// (0x00051642) linegrid_hwr_fs_pane_g

0x4c36,	// (0x00046a6b) cell_hwr_fs_pane_g1_ParamLimits

0x4c36,	// (0x00046a6b) cell_hwr_fs_pane_g1

0x4983,	// (0x000467b8) cell_hwr_fs_pane_g2_ParamLimits

0x4983,	// (0x000467b8) cell_hwr_fs_pane_g2

0xd536,	// (0x0004f36b) cell_hwr_fs_pane_g3_ParamLimits

0xd536,	// (0x0004f36b) cell_hwr_fs_pane_g3

0xd543,	// (0x0004f378) cell_hwr_fs_pane_g4_ParamLimits

0xd543,	// (0x0004f378) cell_hwr_fs_pane_g4

0x0003,

0xf818,	// (0x0005164d) cell_hwr_fs_pane_g_ParamLimits

0xf818,	// (0x0005164d) cell_hwr_fs_pane_g

0xc253,	// (0x0004e088) cell_hwr_fs_pane_t1

0xda87,	// (0x0004f8bc) grid_highlight_pane_cp6

0xda87,	// (0x0004f8bc) main_idle_act2_pane

0x3133,	// (0x00044f68) aid_inside_area_popup_secondary

0xd63e,	// (0x0004f473) aid_inside_area_window_primary_ParamLimits

0xd63e,	// (0x0004f473) aid_inside_area_window_primary

0x6460,	// (0x00048295) ai2_news_ticker_pane

0x6468,	// (0x0004829d) aid_size_cell_ai1_link_ParamLimits

0x6468,	// (0x0004829d) aid_size_cell_ai1_link

0x6482,	// (0x000482b7) popup_ai2_data_window_ParamLimits

0x6482,	// (0x000482b7) popup_ai2_data_window

0x64a0,	// (0x000482d5) popup_ai2_link_window_ParamLimits

0x64a0,	// (0x000482d5) popup_ai2_link_window

0x4c00,	// (0x00046a35) bg_popup_sub_pane_cp4_ParamLimits

0x4c00,	// (0x00046a35) bg_popup_sub_pane_cp4

0x64b6,	// (0x000482eb) grid_ai2_link_pane_ParamLimits

0x64b6,	// (0x000482eb) grid_ai2_link_pane

0x64cd,	// (0x00048302) popup_ai2_link_window_g1_ParamLimits

0x64cd,	// (0x00048302) popup_ai2_link_window_g1

0x64d9,	// (0x0004830e) popup_ai2_link_window_g2_ParamLimits

0x64d9,	// (0x0004830e) popup_ai2_link_window_g2

0x0001,

0xf9e4,	// (0x00051819) popup_ai2_link_window_g_ParamLimits

0xf9e4,	// (0x00051819) popup_ai2_link_window_g

0x64ea,	// (0x0004831f) ai2_mp_button_pane

0x64f2,	// (0x00048327) ai2_mp_volume_pane

0x4daa,	// (0x00046bdf) bg_popup_sub_pane_cp5_ParamLimits

0x4daa,	// (0x00046bdf) bg_popup_sub_pane_cp5

0x64fa,	// (0x0004832f) heading_ai2_gene_pane_ParamLimits

0x64fa,	// (0x0004832f) heading_ai2_gene_pane

0x6506,	// (0x0004833b) list_ai2_gene_pane_ParamLimits

0x6506,	// (0x0004833b) list_ai2_gene_pane

0x654e,	// (0x00048383) cell_ai2_link_pane_ParamLimits

0x654e,	// (0x00048383) cell_ai2_link_pane

0x6564,	// (0x00048399) cell_ai2_link_pane_g1

0xda87,	// (0x0004f8bc) grid_highlight_pane_cp7

0x1889,	// (0x000436be) ai2_mp_volume_pane_g1

0x6637,	// (0x0004846c) ai2_mp_volume_pane_g2

0x65ac,	// (0x000483e1) list_ai2_gene_pane_t1

0x663f,	// (0x00048474) ai2_mp_volume_pane_g3

0x0002,

0xf9fd,	// (0x00051832) ai2_mp_volume_pane_g

0x1891,	// (0x000436c6) volume_small_pane_cp3

0x6647,	// (0x0004847c) aid_size_cell_ai2_button

0x664f,	// (0x00048484) grid_ai2_button_pane

0x6658,	// (0x0004848d) cell_ai2_button_pane_ParamLimits

0x6658,	// (0x0004848d) cell_ai2_button_pane

0xda7d,	// (0x0004f8b2) cell_ai2_button_pane_g1

0xda87,	// (0x0004f8bc) grid_highlight_pane_cp8

0x65f7,	// (0x0004842c) ai2_gene_pane_t1_ParamLimits

0x65f7,	// (0x0004842c) ai2_gene_pane_t1

0xc9cc,	// (0x0004e801) aid_height_parent_landscape

0xd80e,	// (0x0004f643) aid_height_set_list

0x5f1b,	// (0x00047d50) aid_size_parent

0x6281,	// (0x000480b6) aid_size_cell_graphic_pane_ParamLimits

0x6516,	// (0x0004834b) popup_ai2_data_window_g1_ParamLimits

0x6516,	// (0x0004834b) popup_ai2_data_window_g1

0x6522,	// (0x00048357) ai2_news_ticker_pane_g1

0x652a,	// (0x0004835f) ai2_news_ticker_pane_g2

0x0001,

0xf9e9,	// (0x0005181e) ai2_news_ticker_pane_g

0x6532,	// (0x00048367) ai2_news_ticker_pane_t1

0x6540,	// (0x00048375) ai2_news_ticker_pane_t2

0x0001,

0xf9ee,	// (0x00051823) ai2_news_ticker_pane_t

0x656d,	// (0x000483a2) heading_ai2_gene_pane_g1

0x6575,	// (0x000483aa) heading_ai2_gene_pane_t1_ParamLimits

0x6575,	// (0x000483aa) heading_ai2_gene_pane_t1

0x658a,	// (0x000483bf) list_highlight_pane_cp6

0x6592,	// (0x000483c7) ai2_gene_pane_ParamLimits

0x6592,	// (0x000483c7) ai2_gene_pane

0x65ba,	// (0x000483ef) list_ai2_gene_pane_t2

0x0001,

0xf9f3,	// (0x00051828) list_ai2_gene_pane_t

0x65c8,	// (0x000483fd) list_highlight_pane_cp8_ParamLimits

0x65c8,	// (0x000483fd) list_highlight_pane_cp8

0x65d9,	// (0x0004840e) ai2_gene_pane_g1_ParamLimits

0x65d9,	// (0x0004840e) ai2_gene_pane_g1

0x65eb,	// (0x00048420) ai2_gene_pane_g2_ParamLimits

0x65eb,	// (0x00048420) ai2_gene_pane_g2

0x0001,

0xf9f8,	// (0x0005182d) ai2_gene_pane_g_ParamLimits

0xf9f8,	// (0x0005182d) ai2_gene_pane_g

0x2f54,	// (0x00044d89) scroll_pane_cp12

0xc192,	// (0x0004dfc7) control_pane_t3_ParamLimits

0xc192,	// (0x0004dfc7) control_pane_t3

0x3eda,	// (0x00045d0f) status_small_pane_g8_ParamLimits

0x3eda,	// (0x00045d0f) status_small_pane_g8

0xcaf0,	// (0x0004e925) popup_find_window_ParamLimits

0xcd9d,	// (0x0004ebd2) popup_note_image_window_ParamLimits

0x03af,	// (0x000421e4) list_double2_graphic_pane_vc_g1_ParamLimits

0x03af,	// (0x000421e4) list_double2_graphic_pane_vc_g1

0x3bc4,	// (0x000459f9) list_double2_graphic_pane_vc_g2_ParamLimits

0x3bc4,	// (0x000459f9) list_double2_graphic_pane_vc_g2

0x144c,	// (0x00043281) list_double2_graphic_pane_vc_g3_ParamLimits

0x144c,	// (0x00043281) list_double2_graphic_pane_vc_g3

0x0002,

0xf7db,	// (0x00051610) list_double2_graphic_pane_vc_g_ParamLimits

0xf7db,	// (0x00051610) list_double2_graphic_pane_vc_g

0x03bb,	// (0x000421f0) list_double2_graphic_pane_vc_t1_ParamLimits

0x03bb,	// (0x000421f0) list_double2_graphic_pane_vc_t1

0x3bc4,	// (0x000459f9) list_single_heading_pane_vc_g1_ParamLimits

0x3bc4,	// (0x000459f9) list_single_heading_pane_vc_g1

0x144c,	// (0x00043281) list_single_heading_pane_vc_g2_ParamLimits

0x144c,	// (0x00043281) list_single_heading_pane_vc_g2

0x0001,

0xf5ea,	// (0x0005141f) list_single_heading_pane_vc_g_ParamLimits

0xf5ea,	// (0x0005141f) list_single_heading_pane_vc_g

0x03d1,	// (0x00042206) list_single_heading_pane_vc_t1_ParamLimits

0x03d1,	// (0x00042206) list_single_heading_pane_vc_t1

0x03e9,	// (0x0004221e) list_single_heading_pane_vc_t2_ParamLimits

0x03e9,	// (0x0004221e) list_single_heading_pane_vc_t2

0x0001,

0xf7fc,	// (0x00051631) list_single_heading_pane_vc_t_ParamLimits

0xf7fc,	// (0x00051631) list_single_heading_pane_vc_t

0x4b56,	// (0x0004698b) list_setting_number_pane_vc_g1_ParamLimits

0x4b56,	// (0x0004698b) list_setting_number_pane_vc_g1

0x4b62,	// (0x00046997) list_setting_number_pane_vc_g2_ParamLimits

0x4b62,	// (0x00046997) list_setting_number_pane_vc_g2

0x0001,

0xf801,	// (0x00051636) list_setting_number_pane_vc_g_ParamLimits

0xf801,	// (0x00051636) list_setting_number_pane_vc_g

0x4b6e,	// (0x000469a3) list_setting_number_pane_vc_t1_ParamLimits

0x4b6e,	// (0x000469a3) list_setting_number_pane_vc_t1

0x4b82,	// (0x000469b7) list_setting_number_pane_vc_t2_ParamLimits

0x4b82,	// (0x000469b7) list_setting_number_pane_vc_t2

0x4b9e,	// (0x000469d3) list_setting_number_pane_vc_t3_ParamLimits

0x4b9e,	// (0x000469d3) list_setting_number_pane_vc_t3

0x0002,

0xf806,	// (0x0005163b) list_setting_number_pane_vc_t_ParamLimits

0xf806,	// (0x0005163b) list_setting_number_pane_vc_t

0x4bc6,	// (0x000469fb) set_value_pane_vc_ParamLimits

0x4bc6,	// (0x000469fb) set_value_pane_vc

0x6113,	// (0x00047f48) list_double2_graphic_pane_vc_ParamLimits

0x6113,	// (0x00047f48) list_double2_graphic_pane_vc

0x6113,	// (0x00047f48) list_double2_large_graphic_pane_vc_ParamLimits

0x6113,	// (0x00047f48) list_double2_large_graphic_pane_vc

0x6113,	// (0x00047f48) list_double2_pane_vc_ParamLimits

0x6113,	// (0x00047f48) list_double2_pane_vc

0x6113,	// (0x00047f48) list_double_graphic_heading_pane_vc_ParamLimits

0x6113,	// (0x00047f48) list_double_graphic_heading_pane_vc

0x6113,	// (0x00047f48) list_double_graphic_pane_vc_ParamLimits

0x6113,	// (0x00047f48) list_double_graphic_pane_vc

0x6113,	// (0x00047f48) list_double_heading_pane_vc_ParamLimits

0x6113,	// (0x00047f48) list_double_heading_pane_vc

0x6113,	// (0x00047f48) list_double_large_graphic_pane_vc_ParamLimits

0x6113,	// (0x00047f48) list_double_large_graphic_pane_vc

0x6113,	// (0x00047f48) list_double_number_pane_vc_ParamLimits

0x6113,	// (0x00047f48) list_double_number_pane_vc

0x6113,	// (0x00047f48) list_double_pane_vc_ParamLimits

0x6113,	// (0x00047f48) list_double_pane_vc

0x6113,	// (0x00047f48) list_double_time_pane_vc_ParamLimits

0x6113,	// (0x00047f48) list_double_time_pane_vc

0x6113,	// (0x00047f48) list_setting_number_pane_vc_ParamLimits

0x6113,	// (0x00047f48) list_setting_number_pane_vc

0x6113,	// (0x00047f48) list_setting_pane_vc_ParamLimits

0x6113,	// (0x00047f48) list_setting_pane_vc

0x6113,	// (0x00047f48) list_single_graphic_heading_pane_vc_ParamLimits

0x6113,	// (0x00047f48) list_single_graphic_heading_pane_vc

0x6113,	// (0x00047f48) list_single_heading_pane_vc_ParamLimits

0x6113,	// (0x00047f48) list_single_heading_pane_vc

0x6113,	// (0x00047f48) list_single_number_heading_pane_vc_ParamLimits

0x6113,	// (0x00047f48) list_single_number_heading_pane_vc

0x03af,	// (0x000421e4) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x03af,	// (0x000421e4) list_double_graphic_heading_pane_vc_g1

0x189a,	// (0x000436cf) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x189a,	// (0x000436cf) list_double_graphic_heading_pane_vc_g2

0x18a6,	// (0x000436db) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x18a6,	// (0x000436db) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa04,	// (0x00051839) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa04,	// (0x00051839) list_double_graphic_heading_pane_vc_g

0x0490,	// (0x000422c5) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0490,	// (0x000422c5) list_double_graphic_heading_pane_vc_t1

0x03d1,	// (0x00042206) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x03d1,	// (0x00042206) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa0b,	// (0x00051840) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa0b,	// (0x00051840) list_double_graphic_heading_pane_vc_t

0x4b56,	// (0x0004698b) list_setting_pane_vc_g1_ParamLimits

0x4b56,	// (0x0004698b) list_setting_pane_vc_g1

0x4b62,	// (0x00046997) list_setting_pane_vc_g2_ParamLimits

0x4b62,	// (0x00046997) list_setting_pane_vc_g2

0x0001,

0xf801,	// (0x00051636) list_setting_pane_vc_g_ParamLimits

0xf801,	// (0x00051636) list_setting_pane_vc_g

0x6894,	// (0x000486c9) list_setting_pane_vc_t1_ParamLimits

0x6894,	// (0x000486c9) list_setting_pane_vc_t1

0x68a8,	// (0x000486dd) list_setting_pane_vc_t2_ParamLimits

0x68a8,	// (0x000486dd) list_setting_pane_vc_t2

0x0001,

0xfa4e,	// (0x00051883) list_setting_pane_vc_t_ParamLimits

0xfa4e,	// (0x00051883) list_setting_pane_vc_t

0x4bc6,	// (0x000469fb) set_value_pane_cp_vc_ParamLimits

0x4bc6,	// (0x000469fb) set_value_pane_cp_vc

0x3bc4,	// (0x000459f9) list_single_number_heading_pane_vc_g1_ParamLimits

0x3bc4,	// (0x000459f9) list_single_number_heading_pane_vc_g1

0x144c,	// (0x00043281) list_single_number_heading_pane_vc_g2_ParamLimits

0x144c,	// (0x00043281) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ea,	// (0x0005141f) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ea,	// (0x0005141f) list_single_number_heading_pane_vc_g

0x03d1,	// (0x00042206) list_single_number_heading_pane_vc_t1_ParamLimits

0x03d1,	// (0x00042206) list_single_number_heading_pane_vc_t1

0x04a2,	// (0x000422d7) list_single_number_heading_pane_vc_t2_ParamLimits

0x04a2,	// (0x000422d7) list_single_number_heading_pane_vc_t2

0x04b4,	// (0x000422e9) list_single_number_heading_pane_vc_t3_ParamLimits

0x04b4,	// (0x000422e9) list_single_number_heading_pane_vc_t3

0x0002,

0xfa53,	// (0x00051888) list_single_number_heading_pane_vc_t_ParamLimits

0xfa53,	// (0x00051888) list_single_number_heading_pane_vc_t

0x03af,	// (0x000421e4) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x03af,	// (0x000421e4) list_single_graphic_heading_pane_vc_g1

0x3bc4,	// (0x000459f9) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3bc4,	// (0x000459f9) list_single_graphic_heading_pane_vc_g4

0x144c,	// (0x00043281) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x144c,	// (0x00043281) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7db,	// (0x00051610) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x00051610) list_single_graphic_heading_pane_vc_g

0x03d1,	// (0x00042206) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x03d1,	// (0x00042206) list_single_graphic_heading_pane_vc_t1

0x04c6,	// (0x000422fb) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x04c6,	// (0x000422fb) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa5a,	// (0x0005188f) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa5a,	// (0x0005188f) list_single_graphic_heading_pane_vc_t

0x3bc4,	// (0x000459f9) list_double2_pane_vc_g1_ParamLimits

0x3bc4,	// (0x000459f9) list_double2_pane_vc_g1

0x144c,	// (0x00043281) list_double2_pane_vc_g2_ParamLimits

0x144c,	// (0x00043281) list_double2_pane_vc_g2

0x0001,

0xf5ea,	// (0x0005141f) list_double2_pane_vc_g_ParamLimits

0xf5ea,	// (0x0005141f) list_double2_pane_vc_g

0x04d8,	// (0x0004230d) list_double2_pane_vc_t1_ParamLimits

0x04d8,	// (0x0004230d) list_double2_pane_vc_t1

0x18b2,	// (0x000436e7) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x18b2,	// (0x000436e7) list_double2_large_graphic_pane_vc_g1

0x3bc4,	// (0x000459f9) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3bc4,	// (0x000459f9) list_double2_large_graphic_pane_vc_g2

0x144c,	// (0x00043281) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x144c,	// (0x00043281) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf602,	// (0x00051437) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf602,	// (0x00051437) list_double2_large_graphic_pane_vc_g

0x04ee,	// (0x00042323) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x04ee,	// (0x00042323) list_double2_large_graphic_pane_vc_t1

0x18be,	// (0x000436f3) list_double_time_pane_vc_g1_ParamLimits

0x18be,	// (0x000436f3) list_double_time_pane_vc_g1

0x18ca,	// (0x000436ff) list_double_time_pane_vc_g2_ParamLimits

0x18ca,	// (0x000436ff) list_double_time_pane_vc_g2

0x0001,

0xfa5f,	// (0x00051894) list_double_time_pane_vc_g_ParamLimits

0xfa5f,	// (0x00051894) list_double_time_pane_vc_g

0x0504,	// (0x00042339) list_double_time_pane_vc_t1_ParamLimits

0x0504,	// (0x00042339) list_double_time_pane_vc_t1

0x051f,	// (0x00042354) list_double_time_pane_vc_t2_ParamLimits

0x051f,	// (0x00042354) list_double_time_pane_vc_t2

0x055d,	// (0x00042392) list_double_time_pane_vc_t3_ParamLimits

0x055d,	// (0x00042392) list_double_time_pane_vc_t3

0x0575,	// (0x000423aa) list_double_time_pane_vc_t4_ParamLimits

0x0575,	// (0x000423aa) list_double_time_pane_vc_t4

0x0003,

0xfa64,	// (0x00051899) list_double_time_pane_vc_t_ParamLimits

0xfa64,	// (0x00051899) list_double_time_pane_vc_t

0x3bc4,	// (0x000459f9) list_double_pane_vc_g1_ParamLimits

0x3bc4,	// (0x000459f9) list_double_pane_vc_g1

0x144c,	// (0x00043281) list_double_pane_vc_g2_ParamLimits

0x144c,	// (0x00043281) list_double_pane_vc_g2

0x0001,

0xf5ea,	// (0x0005141f) list_double_pane_vc_g_ParamLimits

0xf5ea,	// (0x0005141f) list_double_pane_vc_g

0x0589,	// (0x000423be) list_double_pane_vc_t1_ParamLimits

0x0589,	// (0x000423be) list_double_pane_vc_t1

0x059d,	// (0x000423d2) list_double_pane_vc_t2_ParamLimits

0x059d,	// (0x000423d2) list_double_pane_vc_t2

0x0001,

0xfa6d,	// (0x000518a2) list_double_pane_vc_t_ParamLimits

0xfa6d,	// (0x000518a2) list_double_pane_vc_t

0x3bc4,	// (0x000459f9) list_double_number_pane_vc_g1_ParamLimits

0x3bc4,	// (0x000459f9) list_double_number_pane_vc_g1

0x144c,	// (0x00043281) list_double_number_pane_vc_g2_ParamLimits

0x144c,	// (0x00043281) list_double_number_pane_vc_g2

0x0001,

0xf5ea,	// (0x0005141f) list_double_number_pane_vc_g_ParamLimits

0xf5ea,	// (0x0005141f) list_double_number_pane_vc_g

0x05b3,	// (0x000423e8) list_double_number_pane_vc_t1_ParamLimits

0x05b3,	// (0x000423e8) list_double_number_pane_vc_t1

0x05c7,	// (0x000423fc) list_double_number_pane_vc_t2_ParamLimits

0x05c7,	// (0x000423fc) list_double_number_pane_vc_t2

0x059d,	// (0x000423d2) list_double_number_pane_vc_t3_ParamLimits

0x059d,	// (0x000423d2) list_double_number_pane_vc_t3

0x0002,

0xfa72,	// (0x000518a7) list_double_number_pane_vc_t_ParamLimits

0xfa72,	// (0x000518a7) list_double_number_pane_vc_t

0x18d6,	// (0x0004370b) list_double_large_graphic_pane_vc_g1_ParamLimits

0x18d6,	// (0x0004370b) list_double_large_graphic_pane_vc_g1

0x18e2,	// (0x00043717) list_double_large_graphic_pane_vc_g2_ParamLimits

0x18e2,	// (0x00043717) list_double_large_graphic_pane_vc_g2

0x144c,	// (0x00043281) list_double_large_graphic_pane_vc_g3_ParamLimits

0x144c,	// (0x00043281) list_double_large_graphic_pane_vc_g3

0x05db,	// (0x00042410) list_double_large_graphic_pane_vc_g4_ParamLimits

0x05db,	// (0x00042410) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa79,	// (0x000518ae) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa79,	// (0x000518ae) list_double_large_graphic_pane_vc_g

0x05e7,	// (0x0004241c) list_double_large_graphic_pane_vc_t1_ParamLimits

0x05e7,	// (0x0004241c) list_double_large_graphic_pane_vc_t1

0x05fb,	// (0x00042430) list_double_large_graphic_pane_vc_t2_ParamLimits

0x05fb,	// (0x00042430) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa82,	// (0x000518b7) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa82,	// (0x000518b7) list_double_large_graphic_pane_vc_t

0x189a,	// (0x000436cf) list_double_heading_pane_vc_g1_ParamLimits

0x189a,	// (0x000436cf) list_double_heading_pane_vc_g1

0x18a6,	// (0x000436db) list_double_heading_pane_vc_g2_ParamLimits

0x18a6,	// (0x000436db) list_double_heading_pane_vc_g2

0x0001,

0xfa87,	// (0x000518bc) list_double_heading_pane_vc_g_ParamLimits

0xfa87,	// (0x000518bc) list_double_heading_pane_vc_g

0x0612,	// (0x00042447) list_double_heading_pane_vc_t1_ParamLimits

0x0612,	// (0x00042447) list_double_heading_pane_vc_t1

0x03d1,	// (0x00042206) list_double_heading_pane_vc_t2_ParamLimits

0x03d1,	// (0x00042206) list_double_heading_pane_vc_t2

0x0001,

0xfa8c,	// (0x000518c1) list_double_heading_pane_vc_t_ParamLimits

0xfa8c,	// (0x000518c1) list_double_heading_pane_vc_t

0x03af,	// (0x000421e4) list_double_graphic_pane_vc_g1_ParamLimits

0x03af,	// (0x000421e4) list_double_graphic_pane_vc_g1

0x18f1,	// (0x00043726) list_double_graphic_pane_vc_g2_ParamLimits

0x18f1,	// (0x00043726) list_double_graphic_pane_vc_g2

0x1900,	// (0x00043735) list_double_graphic_pane_vc_g3_ParamLimits

0x1900,	// (0x00043735) list_double_graphic_pane_vc_g3

0x0002,

0xfa91,	// (0x000518c6) list_double_graphic_pane_vc_g_ParamLimits

0xfa91,	// (0x000518c6) list_double_graphic_pane_vc_g

0x0624,	// (0x00042459) list_double_graphic_pane_vc_t1_ParamLimits

0x0624,	// (0x00042459) list_double_graphic_pane_vc_t1

0x059d,	// (0x000423d2) list_double_graphic_pane_vc_t2_ParamLimits

0x059d,	// (0x000423d2) list_double_graphic_pane_vc_t2

0x0001,

0xfa98,	// (0x000518cd) list_double_graphic_pane_vc_t_ParamLimits

0xfa98,	// (0x000518cd) list_double_graphic_pane_vc_t

0x090c,	// (0x00042741) aid_size_cell_fastswap

0xb793,	// (0x0004d5c8) aid_size_cell_touch_ParamLimits

0xb793,	// (0x0004d5c8) aid_size_cell_touch

0x0b75,	// (0x000429aa) popup_fast_swap_wide_window_ParamLimits

0x0b75,	// (0x000429aa) popup_fast_swap_wide_window

0xb8e2,	// (0x0004d717) touch_pane_ParamLimits

0xb8e2,	// (0x0004d717) touch_pane

0x2fb6,	// (0x00044deb) button_value_adjust_pane_cp2

0x0079,	// (0x00041eae) button_value_adjust_pane_cp4

0x00a1,	// (0x00041ed6) form_field_data_pane_cp2

0xb3e9,	// (0x0004d21e) form_field_data_wide_pane_cp2

0x344f,	// (0x00045284) bg_scroll_pane_ParamLimits

0x0fc5,	// (0x00042dfa) scroll_handle_pane_ParamLimits

0x0fd9,	// (0x00042e0e) scroll_sc2_down_pane_ParamLimits

0x0fd9,	// (0x00042e0e) scroll_sc2_down_pane

0x3480,	// (0x000452b5) scroll_sc2_up_pane_ParamLimits

0x3480,	// (0x000452b5) scroll_sc2_up_pane

0xdbf4,	// (0x0004fa29) grid_wheel_folder_pane_g1_ParamLimits

0xdbf4,	// (0x0004fa29) grid_wheel_folder_pane_g1

0x11c1,	// (0x00042ff6) clock_nsta_pane_cp2_ParamLimits

0x11c1,	// (0x00042ff6) clock_nsta_pane_cp2

0xc061,	// (0x0004de96) listscroll_midp_pane_ParamLimits

0xc8f2,	// (0x0004e727) midp_canvas_pane

0x3f55,	// (0x00045d8a) nsta_clock_indic_pane

0x3fa3,	// (0x00045dd8) listscroll_form_pane_vc

0x3fbf,	// (0x00045df4) listscroll_set_pane_vc_ParamLimits

0x3fbf,	// (0x00045df4) listscroll_set_pane_vc

0xd217,	// (0x0004f04c) clock_nsta_pane

0xd241,	// (0x0004f076) indicator_nsta_pane

0x4a4c,	// (0x00046881) bg_popup_sub_pane_cp2_ParamLimits

0x4a60,	// (0x00046895) find_pane_cp2_ParamLimits

0x4a60,	// (0x00046895) find_pane_cp2

0x4a76,	// (0x000468ab) grid_toobar_pane_ParamLimits

0x4bd4,	// (0x00046a09) list_form_gen_pane_vc_ParamLimits

0x4bd4,	// (0x00046a09) list_form_gen_pane_vc

0x4bea,	// (0x00046a1f) scroll_pane_cp8_vc_ParamLimits

0x4bea,	// (0x00046a1f) scroll_pane_cp8_vc

0x4c66,	// (0x00046a9b) data_form_wide_pane_vc_ParamLimits

0x4c66,	// (0x00046a9b) data_form_wide_pane_vc

0x4c72,	// (0x00046aa7) form_field_data_wide_pane_vc_g1

0x4c7a,	// (0x00046aaf) form_field_data_wide_pane_vc_t1_ParamLimits

0x4c7a,	// (0x00046aaf) form_field_data_wide_pane_vc_t1

0x2fca,	// (0x00044dff) input_focus_pane_cp6_vc_ParamLimits

0x2fca,	// (0x00044dff) input_focus_pane_cp6_vc

0xd5e2,	// (0x0004f417) list_midp_pane_ParamLimits

0x62ed,	// (0x00048122) scroll_pane_cp16_ParamLimits

0x62ed,	// (0x00048122) scroll_pane_cp16

0x4f82,	// (0x00046db7) button_value_adjust_pane_ParamLimits

0x4f82,	// (0x00046db7) button_value_adjust_pane

0xd81f,	// (0x0004f654) button_value_adjust_pane_cp6_ParamLimits

0xd81f,	// (0x0004f654) button_value_adjust_pane_cp6

0xd961,	// (0x0004f796) settings_code_pane_cp_ParamLimits

0xd961,	// (0x0004f796) settings_code_pane_cp

0xda7d,	// (0x0004f8b2) cell_touch_pane_g1

0xda7d,	// (0x0004f8b2) cell_touch_pane_g2

0x0001,

0xf720,	// (0x00051555) cell_touch_pane_g

0xdac9,	// (0x0004f8fe) cell_touch_pane_cp_ParamLimits

0xdac9,	// (0x0004f8fe) cell_touch_pane_cp

0xdae5,	// (0x0004f91a) cell_touch_pane_ParamLimits

0xdae5,	// (0x0004f91a) cell_touch_pane

0xda7d,	// (0x0004f8b2) scroll_sc2_down_pane_g1

0xda7d,	// (0x0004f8b2) scroll_sc2_up_pane_g1

0xda87,	// (0x0004f8bc) bg_set_opt_pane_cp4_vc

0x668b,	// (0x000484c0) list_set_graphic_pane_vc_g1_ParamLimits

0x668b,	// (0x000484c0) list_set_graphic_pane_vc_g1

0x6697,	// (0x000484cc) list_set_graphic_pane_vc_g2_ParamLimits

0x6697,	// (0x000484cc) list_set_graphic_pane_vc_g2

0x0001,

0xfa10,	// (0x00051845) list_set_graphic_pane_vc_g_ParamLimits

0xfa10,	// (0x00051845) list_set_graphic_pane_vc_g

0x66a3,	// (0x000484d8) text_primary_small_cp13_vc_ParamLimits

0x66a3,	// (0x000484d8) text_primary_small_cp13_vc

0x66bb,	// (0x000484f0) list_set_graphic_pane_vc_ParamLimits

0x66bb,	// (0x000484f0) list_set_graphic_pane_vc

0xda87,	// (0x0004f8bc) input_focus_pane_cp2_vc

0xda7d,	// (0x0004f8b2) setting_code_pane_vc_g1

0x66cf,	// (0x00048504) setting_code_pane_vc_t1

0x66dd,	// (0x00048512) set_text_pane_vc_t1_ParamLimits

0x66dd,	// (0x00048512) set_text_pane_vc_t1

0xda87,	// (0x0004f8bc) input_focus_pane_cp1_vc

0x66fb,	// (0x00048530) list_set_text_pane_vc

0xda7d,	// (0x0004f8b2) setting_text_pane_vc_g1

0xda87,	// (0x0004f8bc) bg_set_opt_pane_cp2_vc

0x6705,	// (0x0004853a) setting_slider_graphic_pane_vc_g1

0x670d,	// (0x00048542) setting_slider_graphic_pane_vc_t1

0x671b,	// (0x00048550) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa15,	// (0x0005184a) setting_slider_graphic_pane_vc_t

0x6729,	// (0x0004855e) slider_set_pane_cp_vc

0x6731,	// (0x00048566) slider_set_pane_vc_g1

0x673a,	// (0x0004856f) slider_set_pane_vc_g2

0x0006,

0xfa1a,	// (0x0005184f) slider_set_pane_vc_g

0x3031,	// (0x00044e66) set_opt_bg_pane_g1_copy1

0x3039,	// (0x00044e6e) set_opt_bg_pane_g2_copy1

0x6766,	// (0x0004859b) set_opt_bg_pane_g3_copy1

0x3049,	// (0x00044e7e) set_opt_bg_pane_g4_copy1

0x3051,	// (0x00044e86) set_opt_bg_pane_g5_copy1

0x3059,	// (0x00044e8e) set_opt_bg_pane_g6_copy1

0x6770,	// (0x000485a5) set_opt_bg_pane_g7_copy1

0x677a,	// (0x000485af) set_opt_bg_pane_g8_copy1

0x6784,	// (0x000485b9) set_opt_bg_pane_g9_copy1

0xda87,	// (0x0004f8bc) bg_set_opt_pane_cp_vc

0x678e,	// (0x000485c3) setting_slider_pane_vc_t1

0x670d,	// (0x00048542) setting_slider_pane_vc_t2

0x671b,	// (0x00048550) setting_slider_pane_vc_t3

0x0002,

0xfa29,	// (0x0005185e) setting_slider_pane_vc_t

0x6729,	// (0x0004855e) slider_set_pane_vc

0x155d,	// (0x00043392) volume_set_pane_vc_g1

0x1566,	// (0x0004339b) volume_set_pane_vc_g2

0x156f,	// (0x000433a4) volume_set_pane_vc_g3

0x1578,	// (0x000433ad) volume_set_pane_vc_g4

0x1581,	// (0x000433b6) volume_set_pane_vc_g5

0x158a,	// (0x000433bf) volume_set_pane_vc_g6

0x1593,	// (0x000433c8) volume_set_pane_vc_g7

0x159c,	// (0x000433d1) volume_set_pane_vc_g8

0x15a5,	// (0x000433da) volume_set_pane_vc_g9

0x15ae,	// (0x000433e3) volume_set_pane_vc_g10

0x0009,

0xfa30,	// (0x00051865) volume_set_pane_vc_g

0x679d,	// (0x000485d2) volume_set_pane_vc

0x67a5,	// (0x000485da) button_value_adjust_pane_cp1_vc

0x67af,	// (0x000485e4) list_highlight_pane_cp2_vc

0x67b8,	// (0x000485ed) list_set_pane_vc_ParamLimits

0x67b8,	// (0x000485ed) list_set_pane_vc

0x6822,	// (0x00048657) main_pane_set_vc_t1_ParamLimits

0x6822,	// (0x00048657) main_pane_set_vc_t1

0x6837,	// (0x0004866c) main_pane_set_vc_t2_ParamLimits

0x6837,	// (0x0004866c) main_pane_set_vc_t2

0x6849,	// (0x0004867e) main_pane_set_vc_t3_ParamLimits

0x6849,	// (0x0004867e) main_pane_set_vc_t3

0x685d,	// (0x00048692) main_pane_set_vc_t4_ParamLimits

0x685d,	// (0x00048692) main_pane_set_vc_t4

0x0003,

0xfa45,	// (0x0005187a) main_pane_set_vc_t_ParamLimits

0xfa45,	// (0x0005187a) main_pane_set_vc_t

0x6871,	// (0x000486a6) setting_code_pane_vc_ParamLimits

0x6871,	// (0x000486a6) setting_code_pane_vc

0x6882,	// (0x000486b7) setting_slider_graphic_pane_vc

0x6882,	// (0x000486b7) setting_slider_pane_vc

0x6882,	// (0x000486b7) setting_text_pane_vc

0x6882,	// (0x000486b7) setting_volume_pane_vc

0x688c,	// (0x000486c1) scroll_pane_cp121_vc

0x2fa4,	// (0x00044dd9) set_content_pane_vc

0x68ca,	// (0x000486ff) button_value_adjust_pane_g1

0x68d3,	// (0x00048708) button_value_adjust_pane_g2

0x0001,

0xfa9d,	// (0x000518d2) button_value_adjust_pane_g

0x68dc,	// (0x00048711) form_field_slider_wide_pane_vc_t1_ParamLimits

0x68dc,	// (0x00048711) form_field_slider_wide_pane_vc_t1

0x68f0,	// (0x00048725) form_field_slider_wide_pane_vc_t2_ParamLimits

0x68f0,	// (0x00048725) form_field_slider_wide_pane_vc_t2

0x0001,

0xfaa2,	// (0x000518d7) form_field_slider_wide_pane_vc_t_ParamLimits

0xfaa2,	// (0x000518d7) form_field_slider_wide_pane_vc_t

0x29b3,	// (0x000447e8) input_focus_pane_cp10_vc_ParamLimits

0x29b3,	// (0x000447e8) input_focus_pane_cp10_vc

0x6902,	// (0x00048737) slider_cont_pane_cp1_vc_ParamLimits

0x6902,	// (0x00048737) slider_cont_pane_cp1_vc

0x6731,	// (0x00048566) slider_form_pane_g1_cp2

0x673a,	// (0x0004856f) slider_form_pane_g2_cp2

0x691b,	// (0x00048750) form_field_slider_pane_vc_t3

0x6929,	// (0x0004875e) form_field_slider_pane_vc_t4

0x6937,	// (0x0004876c) slider_form_pane_vc_ParamLimits

0x6937,	// (0x0004876c) slider_form_pane_vc

0x6944,	// (0x00048779) form_field_slider_pane_vc_t1_ParamLimits

0x6944,	// (0x00048779) form_field_slider_pane_vc_t1

0x68f0,	// (0x00048725) form_field_slider_pane_vc_t2_ParamLimits

0x68f0,	// (0x00048725) form_field_slider_pane_vc_t2

0x0001,

0xfab2,	// (0x000518e7) form_field_slider_pane_vc_t_ParamLimits

0xfab2,	// (0x000518e7) form_field_slider_pane_vc_t

0x29b3,	// (0x000447e8) input_focus_pane_cp9_vc_ParamLimits

0x29b3,	// (0x000447e8) input_focus_pane_cp9_vc

0x6960,	// (0x00048795) slider_cont_pane_vc_ParamLimits

0x6960,	// (0x00048795) slider_cont_pane_vc

0x6972,	// (0x000487a7) list_form_graphic_pane_cp_vc_ParamLimits

0x6972,	// (0x000487a7) list_form_graphic_pane_cp_vc

0x4c72,	// (0x00046aa7) form_field_popup_wide_pane_vc_g1

0x6987,	// (0x000487bc) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6987,	// (0x000487bc) form_field_popup_wide_pane_vc_t1

0x2fca,	// (0x00044dff) input_focus_pane_cp8_vc_ParamLimits

0x2fca,	// (0x00044dff) input_focus_pane_cp8_vc

0x699e,	// (0x000487d3) list_form_wide_pane_vc_ParamLimits

0x699e,	// (0x000487d3) list_form_wide_pane_vc

0x69aa,	// (0x000487df) list_form_graphic_pane_vc_g1

0x69b2,	// (0x000487e7) list_form_graphic_pane_vc_t1_ParamLimits

0x69b2,	// (0x000487e7) list_form_graphic_pane_vc_t1

0x2737,	// (0x0004456c) list_highlight_pane_cp5_vc_ParamLimits

0x2737,	// (0x0004456c) list_highlight_pane_cp5_vc

0x69ce,	// (0x00048803) list_form_graphic_pane_vc_ParamLimits

0x69ce,	// (0x00048803) list_form_graphic_pane_vc

0x4c72,	// (0x00046aa7) form_field_popup_pane_vc_g1

0x69e4,	// (0x00048819) form_field_popup_pane_vc_t1_ParamLimits

0x69e4,	// (0x00048819) form_field_popup_pane_vc_t1

0x2fca,	// (0x00044dff) input_focus_pane_cp7_vc_ParamLimits

0x2fca,	// (0x00044dff) input_focus_pane_cp7_vc

0x69fb,	// (0x00048830) list_form_pane_vc_ParamLimits

0x69fb,	// (0x00048830) list_form_pane_vc

0x6a07,	// (0x0004883c) data_form_pane_vc_t1_ParamLimits

0x6a07,	// (0x0004883c) data_form_pane_vc_t1

0x3031,	// (0x00044e66) input_focus_pane_vc_g1

0x3039,	// (0x00044e6e) input_focus_pane_vc_g2

0x3041,	// (0x00044e76) input_focus_pane_vc_g3

0x3049,	// (0x00044e7e) input_focus_pane_vc_g4

0x3051,	// (0x00044e86) input_focus_pane_vc_g5

0x3059,	// (0x00044e8e) input_focus_pane_vc_g6

0x3061,	// (0x00044e96) input_focus_pane_vc_g7

0x3069,	// (0x00044e9e) input_focus_pane_vc_g8

0x3071,	// (0x00044ea6) input_focus_pane_vc_g9

0xda7d,	// (0x0004f8b2) input_focus_pane_vc_g10

0x0009,

0xf6a9,	// (0x000514de) input_focus_pane_vc_g

0x4c66,	// (0x00046a9b) data_form_pane_vc_ParamLimits

0x4c66,	// (0x00046a9b) data_form_pane_vc

0x4c72,	// (0x00046aa7) form_field_data_pane_vc_g1

0x6a24,	// (0x00048859) form_field_data_pane_vc_t1_ParamLimits

0x6a24,	// (0x00048859) form_field_data_pane_vc_t1

0x2fca,	// (0x00044dff) input_focus_pane_vc_ParamLimits

0x2fca,	// (0x00044dff) input_focus_pane_vc

0x6a3e,	// (0x00048873) button_value_adjust_pane_cp3_vc

0x6a46,	// (0x0004887b) button_value_adjust_pane_cp5_vc

0x6a4e,	// (0x00048883) form_field_data_pane_vc_ParamLimits

0x6a4e,	// (0x00048883) form_field_data_pane_vc

0x6a69,	// (0x0004889e) form_field_data_pane_vc_cp2

0x6a71,	// (0x000488a6) form_field_data_wide_pane_vc_ParamLimits

0x6a71,	// (0x000488a6) form_field_data_wide_pane_vc

0x6a8b,	// (0x000488c0) form_field_data_wide_pane_vc_cp2

0x6a93,	// (0x000488c8) form_field_popup_pane_vc_ParamLimits

0x6a93,	// (0x000488c8) form_field_popup_pane_vc

0x6aae,	// (0x000488e3) form_field_popup_wide_pane_vc_ParamLimits

0x6aae,	// (0x000488e3) form_field_popup_wide_pane_vc

0x6ac8,	// (0x000488fd) form_field_slider_pane_vc_ParamLimits

0x6ac8,	// (0x000488fd) form_field_slider_pane_vc

0x6adb,	// (0x00048910) form_field_slider_wide_pane_vc_ParamLimits

0x6adb,	// (0x00048910) form_field_slider_wide_pane_vc

0xdb03,	// (0x0004f938) grid_touch_1_pane_ParamLimits

0xdb03,	// (0x0004f938) grid_touch_1_pane

0xdb17,	// (0x0004f94c) grid_touch_2_pane_ParamLimits

0xdb17,	// (0x0004f94c) grid_touch_2_pane

0x6bb2,	// (0x000489e7) touch_pane_g1_ParamLimits

0x6bb2,	// (0x000489e7) touch_pane_g1

0x6b14,	// (0x00048949) cell_app_pane_cp_wide_ParamLimits

0x6b14,	// (0x00048949) cell_app_pane_cp_wide

0x6b25,	// (0x0004895a) grid_popup_fast_wide_pane_ParamLimits

0x6b25,	// (0x0004895a) grid_popup_fast_wide_pane

0x6b39,	// (0x0004896e) scroll_pane_cp19_ParamLimits

0x6b39,	// (0x0004896e) scroll_pane_cp19

0xda87,	// (0x0004f8bc) bg_popup_window_pane_cp20

0x6b4d,	// (0x00048982) listscroll_popup_fast_wide_pane

0x31a0,	// (0x00044fd5) grid_indicator_nsta_pane

0x6b55,	// (0x0004898a) clock_nsta_pane_g1

0x6b5e,	// (0x00048993) clock_nsta_pane_t1

0xdb43,	// (0x0004f978) cell_indicator_nsta_pane_ParamLimits

0xdb43,	// (0x0004f978) cell_indicator_nsta_pane

0x6bb2,	// (0x000489e7) cell_indicator_nsta_pane_g1

0xdb60,	// (0x0004f995) cell_indicator_nsta_pane_g2

0x0001,

0xfabc,	// (0x000518f1) cell_indicator_nsta_pane_g

0x6bd6,	// (0x00048a0b) clock_nsta_pane_cp

0x6bde,	// (0x00048a13) indicator_nsta_pane_cp

0x6be6,	// (0x00048a1b) nsta_clock_indic_pane_g1

0x2803,	// (0x00044638) grid_indicator_pane

0x3572,	// (0x000453a7) scroll_pane_cp29

0x110d,	// (0x00042f42) indicator_nsta_pane_cp2_ParamLimits

0x110d,	// (0x00042f42) indicator_nsta_pane_cp2

0x2737,	// (0x0004456c) main_apps_wheel_pane

0x4e05,	// (0x00046c3a) form_midp_field_text_pane_ParamLimits

0x4f54,	// (0x00046d89) scroll_bar_cp050_ParamLimits

0x6c4f,	// (0x00048a84) cell_indicator_pane_ParamLimits

0x6c4f,	// (0x00048a84) cell_indicator_pane

0x6c67,	// (0x00048a9c) cell_indicator_pane_g1

0xdb76,	// (0x0004f9ab) grid_wheel_folder_pane_ParamLimits

0xdb76,	// (0x0004f9ab) grid_wheel_folder_pane

0xdb84,	// (0x0004f9b9) list_wheel_apps_pane_ParamLimits

0xdb84,	// (0x0004f9b9) list_wheel_apps_pane

0xdb92,	// (0x0004f9c7) main_apps_wheel_pane_g1_ParamLimits

0xdb92,	// (0x0004f9c7) main_apps_wheel_pane_g1

0xdba2,	// (0x0004f9d7) main_apps_wheel_pane_g2_ParamLimits

0xdba2,	// (0x0004f9d7) main_apps_wheel_pane_g2

0x0001,

0xfad8,	// (0x0005190d) main_apps_wheel_pane_g_ParamLimits

0xfad8,	// (0x0005190d) main_apps_wheel_pane_g

0xdbb2,	// (0x0004f9e7) main_apps_wheel_pane_t1_ParamLimits

0xdbb2,	// (0x0004f9e7) main_apps_wheel_pane_t1

0xdbca,	// (0x0004f9ff) list_wheel_apps_pane_g1

0xdbd2,	// (0x0004fa07) list_wheel_apps_pane_g2

0xdbda,	// (0x0004fa0f) list_wheel_apps_pane_g3

0xdbe2,	// (0x0004fa17) list_wheel_apps_pane_g4

0xdbea,	// (0x0004fa1f) list_wheel_apps_pane_g5

0x0004,

0xfadd,	// (0x00051912) list_wheel_apps_pane_g

0x3acf,	// (0x00045904) navi_icon_text_pane

0xd10b,	// (0x0004ef40) aid_fill_nsta

0xdc07,	// (0x0004fa3c) navi_icon_text_pane_g1

0xdc13,	// (0x0004fa48) navi_icon_text_pane_t1

0xc049,	// (0x0004de7e) list_set_graphic_pane_t1_ParamLimits

0xc049,	// (0x0004de7e) list_set_graphic_pane_t1

0x56a5,	// (0x000474da) popup_midp_note_alarm_window_t6_ParamLimits

0x56a5,	// (0x000474da) popup_midp_note_alarm_window_t6

0x56b7,	// (0x000474ec) popup_midp_note_alarm_window_t7_ParamLimits

0x56b7,	// (0x000474ec) popup_midp_note_alarm_window_t7

0x56c9,	// (0x000474fe) popup_midp_note_alarm_window_t8_ParamLimits

0x56c9,	// (0x000474fe) popup_midp_note_alarm_window_t8

0x56db,	// (0x00047510) popup_midp_note_alarm_window_t9_ParamLimits

0x56db,	// (0x00047510) popup_midp_note_alarm_window_t9

0x56ed,	// (0x00047522) popup_midp_note_alarm_window_t10_ParamLimits

0x56ed,	// (0x00047522) popup_midp_note_alarm_window_t10

0x56ff,	// (0x00047534) popup_midp_note_alarm_window_t11_ParamLimits

0x56ff,	// (0x00047534) popup_midp_note_alarm_window_t11

0x5711,	// (0x00047546) scroll_pane_cp17_ParamLimits

0x5711,	// (0x00047546) scroll_pane_cp17

0x155d,	// (0x00043392) volume_small_pane_cp_g1

0x190c,	// (0x00043741) volume_small_pane_cp_g2

0x1915,	// (0x0004374a) volume_small_pane_cp_g3

0x191e,	// (0x00043753) volume_small_pane_cp_g4

0x1927,	// (0x0004375c) volume_small_pane_cp_g5

0x1930,	// (0x00043765) volume_small_pane_cp_g6

0x1939,	// (0x0004376e) volume_small_pane_cp_g7

0x1942,	// (0x00043777) volume_small_pane_cp_g8

0x194b,	// (0x00043780) volume_small_pane_cp_g9

0x1954,	// (0x00043789) volume_small_pane_cp_g10

0x3d30,	// (0x00045b65) midp_ticker_pane_g1_ParamLimits

0x3d3c,	// (0x00045b71) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x000515aa) midp_ticker_pane_g_ParamLimits

0xc989,	// (0x0004e7be) midp_ticker_pane_t1_ParamLimits

0xd12f,	// (0x0004ef64) aid_fill_nsta_2

0x4f40,	// (0x00046d75) list_form2_midp_pane

0x60ce,	// (0x00047f03) midp_editing_number_pane_ParamLimits

0x60dd,	// (0x00047f12) midp_ticker_pane_ParamLimits

0x6d60,	// (0x00048b95) form2_midp_field_pane

0x6d84,	// (0x00048bb9) scroll_pane_cp51

0x6da4,	// (0x00048bd9) form2_midp_button_pane_ParamLimits

0x6da4,	// (0x00048bd9) form2_midp_button_pane

0x6db6,	// (0x00048beb) form2_midp_content_pane_ParamLimits

0x6db6,	// (0x00048beb) form2_midp_content_pane

0x6dd0,	// (0x00048c05) form2_midp_field_choice_group_pane

0x6dd8,	// (0x00048c0d) form2_midp_field_pane_g1

0x6de0,	// (0x00048c15) form2_midp_field_pane_g2

0x6de8,	// (0x00048c1d) form2_midp_field_pane_g3

0x6df0,	// (0x00048c25) form2_midp_field_pane_g4

0x0003,

0xfb02,	// (0x00051937) form2_midp_field_pane_g

0x6df8,	// (0x00048c2d) form2_midp_gauge_slider_pane

0x6e00,	// (0x00048c35) form2_midp_gauge_wait_pane

0x6e08,	// (0x00048c3d) form2_midp_image_pane_ParamLimits

0x6e08,	// (0x00048c3d) form2_midp_image_pane

0xdc41,	// (0x0004fa76) form2_midp_label_pane_ParamLimits

0xdc41,	// (0x0004fa76) form2_midp_label_pane

0xdc60,	// (0x0004fa95) form2_midp_label_pane_cp_ParamLimits

0xdc60,	// (0x0004fa95) form2_midp_label_pane_cp

0x6e5b,	// (0x00048c90) form2_midp_string_pane_ParamLimits

0x6e5b,	// (0x00048c90) form2_midp_string_pane

0xb5ea,	// (0x0004d41f) form2_midp_text_pane_ParamLimits

0xb5ea,	// (0x0004d41f) form2_midp_text_pane

0x6e6d,	// (0x00048ca2) form2_midp_time_pane

0x6e7d,	// (0x00048cb2) input_focus_pane_cp51_ParamLimits

0x6e7d,	// (0x00048cb2) input_focus_pane_cp51

0xdc81,	// (0x0004fab6) form2_midp_label_pane_t1_ParamLimits

0xdc81,	// (0x0004fab6) form2_midp_label_pane_t1

0xb60d,	// (0x0004d442) form2_mdip_text_pane_t1_ParamLimits

0xb60d,	// (0x0004d442) form2_mdip_text_pane_t1

0x0668,	// (0x0004249d) form2_midp_time_pane_t1

0x6ed3,	// (0x00048d08) form2_midp_gauge_slider_pane_t1

0xdcbe,	// (0x0004faf3) form2_midp_gauge_slider_pane_t2

0xdcd0,	// (0x0004fb05) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb0b,	// (0x00051940) form2_midp_gauge_slider_pane_t

0x6f09,	// (0x00048d3e) form2_midp_slider_pane

0x6f15,	// (0x00048d4a) form2_midp_gauge_wait_pane_t1

0x6f23,	// (0x00048d58) form2_midp_wait_pane_ParamLimits

0x6f23,	// (0x00048d58) form2_midp_wait_pane

0xdce2,	// (0x0004fb17) list_single_2graphic_pane_cp4_ParamLimits

0xdce2,	// (0x0004fb17) list_single_2graphic_pane_cp4

0xd562,	// (0x0004f397) list_single_midp_graphic_pane_cp_ParamLimits

0xd562,	// (0x0004f397) list_single_midp_graphic_pane_cp

0xda87,	// (0x0004f8bc) list_highlight_pane_cp20

0x6f5f,	// (0x00048d94) list_single_2graphic_pane_g1_cp4

0x656d,	// (0x000483a2) list_single_2graphic_pane_g2_cp4

0x6f67,	// (0x00048d9c) list_single_2graphic_pane_t1_cp4

0x2737,	// (0x0004456c) list_highlight_pane_cp21

0x6f76,	// (0x00048dab) list_single_midp_graphic_pane_g4_cp

0x6f85,	// (0x00048dba) list_single_midp_graphic_pane_t1_cp

0xdcf5,	// (0x0004fb2a) form2_mdip_string_pane_t1_ParamLimits

0xdcf5,	// (0x0004fb2a) form2_mdip_string_pane_t1

0xda87,	// (0x0004f8bc) bg_wml_button_pane_cp2

0xda7d,	// (0x0004f8b2) form2_midp_image_pane_g1

0x0dfa,	// (0x00042c2f) list_double_large_graphic_pane_g5_ParamLimits

0x0dfa,	// (0x00042c2f) list_double_large_graphic_pane_g5

0xc061,	// (0x0004de96) midp_form_pane_ParamLimits

0x2737,	// (0x0004456c) main_apps_wheel_pane_ParamLimits

0xce23,	// (0x0004ec58) popup_preview_window_ParamLimits

0xce23,	// (0x0004ec58) popup_preview_window

0x4595,	// (0x000463ca) popup_touch_info_window_ParamLimits

0x4595,	// (0x000463ca) popup_touch_info_window

0x45b7,	// (0x000463ec) popup_touch_menu_window_ParamLimits

0x45b7,	// (0x000463ec) popup_touch_menu_window

0xda73,	// (0x0004f8a8) bg_popup_sub_pane_cp6

0x6ff4,	// (0x00048e29) list_touch_menu_pane

0x6ffc,	// (0x00048e31) list_single_touch_menu_pane_ParamLimits

0x6ffc,	// (0x00048e31) list_single_touch_menu_pane

0x7017,	// (0x00048e4c) list_single_touch_menu_pane_t1

0x2737,	// (0x0004456c) bg_popup_sub_pane_cp7_ParamLimits

0x2737,	// (0x0004456c) bg_popup_sub_pane_cp7

0x7025,	// (0x00048e5a) heading_sub_pane

0x702d,	// (0x00048e62) list_touch_info_pane_ParamLimits

0x702d,	// (0x00048e62) list_touch_info_pane

0x703c,	// (0x00048e71) list_single_touch_info_pane_ParamLimits

0x703c,	// (0x00048e71) list_single_touch_info_pane

0x704e,	// (0x00048e83) list_single_touch_info_pane_t1

0x705c,	// (0x00048e91) list_single_touch_info_pane_t2

0x0001,

0xfb19,	// (0x0005194e) list_single_touch_info_pane_t

0x3c53,	// (0x00045a88) bg_popup_heading_pane_cp

0x706a,	// (0x00048e9f) heading_sub_pane_t1

0x4c00,	// (0x00046a35) bg_popup_preview_window_pane_cp_ParamLimits

0x4c00,	// (0x00046a35) bg_popup_preview_window_pane_cp

0x7025,	// (0x00048e5a) heading_preview_pane

0x702d,	// (0x00048e62) list_preview_pane_ParamLimits

0x702d,	// (0x00048e62) list_preview_pane

0x7078,	// (0x00048ead) popup_preview_window_g1

0x703c,	// (0x00048e71) list_single_preview_pane_ParamLimits

0x703c,	// (0x00048e71) list_single_preview_pane

0x7080,	// (0x00048eb5) list_single_preview_pane_g1

0x7088,	// (0x00048ebd) list_single_preview_pane_t1

0x704e,	// (0x00048e83) list_single_preview_pane_t2

0x0001,

0xfb1e,	// (0x00051953) list_single_preview_pane_t

0x7096,	// (0x00048ecb) bg_popup_heading_pane_cp2_ParamLimits

0x7096,	// (0x00048ecb) bg_popup_heading_pane_cp2

0x70ac,	// (0x00048ee1) heading_preview_pane_g1

0x70b4,	// (0x00048ee9) heading_preview_pane_t1_ParamLimits

0x70b4,	// (0x00048ee9) heading_preview_pane_t1

0x2826,	// (0x0004465b) soft_indicator_pane_t1_ParamLimits

0x2f31,	// (0x00044d66) scroll_pane_ParamLimits

0x346e,	// (0x000452a3) scroll_sc2_left_pane

0x3477,	// (0x000452ac) scroll_sc2_right_pane

0x3496,	// (0x000452cb) scroll_bg_pane_g1_ParamLimits

0x34ab,	// (0x000452e0) scroll_bg_pane_g2_ParamLimits

0x34c3,	// (0x000452f8) scroll_bg_pane_g3_ParamLimits

0xf700,	// (0x00051535) scroll_bg_pane_g_ParamLimits

0x3496,	// (0x000452cb) scroll_handle_pane_g1_ParamLimits

0x34e5,	// (0x0004531a) scroll_handle_pane_g2_ParamLimits

0x34c3,	// (0x000452f8) scroll_handle_pane_g3_ParamLimits

0xf707,	// (0x0005153c) scroll_handle_pane_g_ParamLimits

0x3ff9,	// (0x00045e2e) popup_choice_list_window_ParamLimits

0x3ff9,	// (0x00045e2e) popup_choice_list_window

0x4a58,	// (0x0004688d) choice_list_pane

0x4ada,	// (0x0004690f) cell_toolbar_pane_t1

0x4b02,	// (0x00046937) toolbar_button_pane_ParamLimits

0x5be1,	// (0x00047a16) ai_gene_pane_1_t2_ParamLimits

0x5be1,	// (0x00047a16) ai_gene_pane_1_t2

0x0001,

0xf923,	// (0x00051758) ai_gene_pane_1_t_ParamLimits

0xf923,	// (0x00051758) ai_gene_pane_1_t

0x70d1,	// (0x00048f06) scroll_sc2_left_pane_g1

0x70d1,	// (0x00048f06) scroll_sc2_right_pane_g1

0x3fd1,	// (0x00045e06) bg_popup_sub_pane_cp10

0x70db,	// (0x00048f10) list_choice_list_pane

0x70f2,	// (0x00048f27) list_single_choice_list_pane_ParamLimits

0x70f2,	// (0x00048f27) list_single_choice_list_pane

0x7106,	// (0x00048f3b) list_single_choice_list_pane_g1

0x710e,	// (0x00048f43) list_single_choice_list_pane_t1_ParamLimits

0x710e,	// (0x00048f43) list_single_choice_list_pane_t1

0x7123,	// (0x00048f58) choice_list_pane_g1

0x712b,	// (0x00048f60) choice_list_pane_t1

0xda73,	// (0x0004f8a8) input_focus_pane_cp11

0x3348,	// (0x0004517d) title_pane_stacon_g2_ParamLimits

0x3348,	// (0x0004517d) title_pane_stacon_g2

0x0002,

0xf6e6,	// (0x0005151b) title_pane_stacon_g_ParamLimits

0xf6e6,	// (0x0005151b) title_pane_stacon_g

0x3c53,	// (0x00045a88) cursor_press_pane

0xcaa4,	// (0x0004e8d9) popup_fep_hwr_window_ParamLimits

0xcaa4,	// (0x0004e8d9) popup_fep_hwr_window

0x4139,	// (0x00045f6e) popup_fep_vkb_window_ParamLimits

0x4139,	// (0x00045f6e) popup_fep_vkb_window

0x7139,	// (0x00048f6e) cursor_press_pane_g1

0x0002,

0xfb47,	// (0x0005197c) fep_vkb_side_pane_g_ParamLimits

0x1988,	// (0x000437bd) fep_hwr_candidate_pane_ParamLimits

0x1988,	// (0x000437bd) fep_hwr_candidate_pane

0x19b2,	// (0x000437e7) fep_hwr_side_pane_ParamLimits

0x19b2,	// (0x000437e7) fep_hwr_side_pane

0x19d4,	// (0x00043809) fep_hwr_top_pane_ParamLimits

0x19d4,	// (0x00043809) fep_hwr_top_pane

0x19ec,	// (0x00043821) fep_hwr_write_pane_ParamLimits

0x19ec,	// (0x00043821) fep_hwr_write_pane

0xfb47,	// (0x0005197c) fep_vkb_side_pane_g

0x7141,	// (0x00048f76) fep_hwr_top_pane_g1

0x7153,	// (0x00048f88) fep_hwr_top_pane_g2

0x1a18,	// (0x0004384d) fep_hwr_top_pane_g3

0x0002,

0xfb23,	// (0x00051958) fep_hwr_top_pane_g

0x1a2d,	// (0x00043862) fep_hwr_top_text_pane

0x363a,	// (0x0004546f) fep_hwr_top_text_pane_g1

0x7189,	// (0x00048fbe) fep_hwr_top_text_pane_t1

0x1b37,	// (0x0004396c) fep_hwr_candidate_pane_g1

0x73d4,	// (0x00049209) fep_vkb_keypad_pane_g3_ParamLimits

0x73d4,	// (0x00049209) fep_vkb_keypad_pane_g3

0x7400,	// (0x00049235) fep_vkb_keypad_pane_g4_ParamLimits

0x7400,	// (0x00049235) fep_vkb_keypad_pane_g4

0x7477,	// (0x000492ac) fep_vkb_bottom_pane_g2_ParamLimits

0x7477,	// (0x000492ac) fep_vkb_bottom_pane_g2

0x0001,

0xfb4e,	// (0x00051983) fep_vkb_bottom_pane_g_ParamLimits

0xfb4e,	// (0x00051983) fep_vkb_bottom_pane_g

0x70d1,	// (0x00048f06) cell_vkb_side_pane_g2

0x0001,

0xfb58,	// (0x0005198d) cell_vkb_side_pane_g

0x7502,	// (0x00049337) cell_vkb_side_pane_t1

0x7510,	// (0x00049345) cell_vkb_side_pane_t1_copy1

0x70d1,	// (0x00048f06) bg_fep_vkb_candidate_pane_g2

0x7654,	// (0x00049489) cell_vkb_candidate_pane_ParamLimits

0x7197,	// (0x00048fcc) aid_size_cell_vkb_ParamLimits

0x7197,	// (0x00048fcc) aid_size_cell_vkb

0x7654,	// (0x00049489) cell_vkb_candidate_pane

0x1b51,	// (0x00043986) bg_popup_fep_shadow_pane_g1

0xdda1,	// (0x0004fbd6) fep_vkb_bottom_pane_ParamLimits

0xdda1,	// (0x0004fbd6) fep_vkb_bottom_pane

0x7266,	// (0x0004909b) fep_vkb_candidate_pane_ParamLimits

0x7266,	// (0x0004909b) fep_vkb_candidate_pane

0xddcd,	// (0x0004fc02) fep_vkb_keypad_pane_ParamLimits

0xddcd,	// (0x0004fc02) fep_vkb_keypad_pane

0xddf4,	// (0x0004fc29) fep_vkb_side_pane_ParamLimits

0xddf4,	// (0x0004fc29) fep_vkb_side_pane

0xde30,	// (0x0004fc65) fep_vkb_top_pane_ParamLimits

0xde30,	// (0x0004fc65) fep_vkb_top_pane

0x732d,	// (0x00049162) fep_vkb_top_pane_g1_ParamLimits

0x732d,	// (0x00049162) fep_vkb_top_pane_g1

0x733c,	// (0x00049171) fep_vkb_top_pane_g2_ParamLimits

0x733c,	// (0x00049171) fep_vkb_top_pane_g2

0x734b,	// (0x00049180) fep_vkb_top_pane_g3_ParamLimits

0x734b,	// (0x00049180) fep_vkb_top_pane_g3

0x0003,

0xfb3e,	// (0x00051973) fep_vkb_top_pane_g_ParamLimits

0xfb3e,	// (0x00051973) fep_vkb_top_pane_g

0x7369,	// (0x0004919e) fep_vkb_top_text_pane_ParamLimits

0x7369,	// (0x0004919e) fep_vkb_top_text_pane

0xde6c,	// (0x0004fca1) fep_vkb_side_pane_g1_ParamLimits

0xde6c,	// (0x0004fca1) fep_vkb_side_pane_g1

0x73c3,	// (0x000491f8) grid_vkb_side_pane_ParamLimits

0x73c3,	// (0x000491f8) grid_vkb_side_pane

0x1b59,	// (0x0004398e) bg_popup_fep_shadow_pane_g2

0x1b62,	// (0x00043997) bg_popup_fep_shadow_pane_g3

0x1b6a,	// (0x0004399f) bg_popup_fep_shadow_pane_g4

0x1b73,	// (0x000439a8) bg_popup_fep_shadow_pane_g5

0x1b7d,	// (0x000439b2) bg_popup_fep_shadow_pane_g6

0x1b85,	// (0x000439ba) bg_popup_fep_shadow_pane_g7

0x3051,	// (0x00044e86) bg_popup_fep_shadow_pane_g8

0x7422,	// (0x00049257) grid_vkb_keypad_number_pane_ParamLimits

0x7422,	// (0x00049257) grid_vkb_keypad_number_pane

0x7436,	// (0x0004926b) grid_vkb_keypad_pane_ParamLimits

0x7436,	// (0x0004926b) grid_vkb_keypad_pane

0x745c,	// (0x00049291) fep_vkb_bottom_pane_g1_ParamLimits

0x745c,	// (0x00049291) fep_vkb_bottom_pane_g1

0x7485,	// (0x000492ba) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7485,	// (0x000492ba) grid_vkb_keypad_bottom_left_pane

0x749a,	// (0x000492cf) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x749a,	// (0x000492cf) grid_vkb_keypad_bottom_right_pane

0x74af,	// (0x000492e4) fep_vkb_top_text_pane_g1

0xdeb3,	// (0x0004fce8) fep_vkb_top_text_pane_t1

0xdec5,	// (0x0004fcfa) cell_vkb_side_pane_ParamLimits

0xdec5,	// (0x0004fcfa) cell_vkb_side_pane

0x70d1,	// (0x00048f06) cell_vkb_side_pane_g1

0x751e,	// (0x00049353) cell_vkb_keypad_pane_ParamLimits

0x751e,	// (0x00049353) cell_vkb_keypad_pane

0x75ab,	// (0x000493e0) cell_vkb_keypad_pane_g1

0x0008,

0xfb6b,	// (0x000519a0) bg_popup_fep_shadow_pane_g

0x70d1,	// (0x00048f06) cell_hwr_side_pane_g1

0x70d1,	// (0x00048f06) cell_hwr_side_pane_g2

0x75b5,	// (0x000493ea) cell_vkb_keypad_pane_t1

0xdedb,	// (0x0004fd10) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdedb,	// (0x0004fd10) cell_vkb_keypad_bottom_left_pane

0xdef0,	// (0x0004fd25) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdef0,	// (0x0004fd25) cell_vkb_keypad_bottom_right_pane

0x70d1,	// (0x00048f06) cell_vkb_keypad_bottom_left_pane_g1

0x70d1,	// (0x00048f06) cell_vkb_keypad_bottom_right_pane_g1

0x7619,	// (0x0004944e) cell_vkb_keypad_number_pane_ParamLimits

0x7619,	// (0x0004944e) cell_vkb_keypad_number_pane

0x7638,	// (0x0004946d) cell_vkb_keypad_number_pane_g1

0x7642,	// (0x00049477) cell_vkb_keypad_number_pane_g2

0x764b,	// (0x00049480) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb5d,	// (0x00051992) cell_vkb_keypad_number_pane_g

0x75b5,	// (0x000493ea) cell_vkb_keypad_number_pane_t1

0x7675,	// (0x000494aa) fep_vkb_candidate_pane_g1

0x0001,

0xfb58,	// (0x0005198d) cell_hwr_side_pane_g

0x768e,	// (0x000494c3) cell_hwr_side_pane_t1

0x1b97,	// (0x000439cc) cell_hwr_side_pane_t1_copy1

0x735b,	// (0x00049190) cell_hwr_candidate_pane_g1

0x1ba5,	// (0x000439da) cell_hwr_candidate_pane_t1

0x70d1,	// (0x00048f06) cell_vkb_candidate_pane_g2

0x7714,	// (0x00049549) cell_vkb_candidate_pane_t1

0xc9e2,	// (0x0004e817) bg_popup_fep_shadow_pane_ParamLimits

0xc9e2,	// (0x0004e817) bg_popup_fep_shadow_pane

0xdd67,	// (0x0004fb9c) bg_fep_hwr_top_pane_g4

0x7165,	// (0x00048f9a) bg_hwr_side_pane_g1_ParamLimits

0x7165,	// (0x00048f9a) bg_hwr_side_pane_g1

0xc406,	// (0x0004e23b) cell_hwr_side_pane_ParamLimits

0xc406,	// (0x0004e23b) cell_hwr_side_pane

0x1aa8,	// (0x000438dd) fep_hwr_write_pane_g1_ParamLimits

0x1aa8,	// (0x000438dd) fep_hwr_write_pane_g1

0x1ab5,	// (0x000438ea) fep_hwr_write_pane_g2_ParamLimits

0x1ab5,	// (0x000438ea) fep_hwr_write_pane_g2

0x1ac2,	// (0x000438f7) fep_hwr_write_pane_g3_ParamLimits

0x1ac2,	// (0x000438f7) fep_hwr_write_pane_g3

0xc426,	// (0x0004e25b) fep_hwr_write_pane_g4_ParamLimits

0xc426,	// (0x0004e25b) fep_hwr_write_pane_g4

0x0005,

0xfb2a,	// (0x0005195f) fep_hwr_write_pane_g_ParamLimits

0xfb2a,	// (0x0005195f) fep_hwr_write_pane_g

0xdd67,	// (0x0004fb9c) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xdd67,	// (0x0004fb9c) bg_fep_hwr_candidate_pane_g2

0x1ae5,	// (0x0004391a) cell_hwr_candidate_pane_ParamLimits

0x1ae5,	// (0x0004391a) cell_hwr_candidate_pane

0x1b37,	// (0x0004396c) fep_hwr_candidate_pane_g1_ParamLimits

0x71c5,	// (0x00048ffa) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x71c5,	// (0x00048ffa) bg_popup_fep_shadow_pane_cp2

0x735b,	// (0x00049190) fep_vkb_top_pane_g4_ParamLimits

0x735b,	// (0x00049190) fep_vkb_top_pane_g4

0x73a1,	// (0x000491d6) fep_vkb_side_pane_g2_ParamLimits

0x73a1,	// (0x000491d6) fep_vkb_side_pane_g2

0xb2eb,	// (0x0004d120) list_setting_pane_t4_ParamLimits

0xb2eb,	// (0x0004d120) list_setting_pane_t4

0xb387,	// (0x0004d1bc) list_setting_number_pane_t5_ParamLimits

0xb387,	// (0x0004d1bc) list_setting_number_pane_t5

0x3671,	// (0x000454a6) list_double_heading_pane_cp2_ParamLimits

0x3671,	// (0x000454a6) list_double_heading_pane_cp2

0x2fe4,	// (0x00044e19) list_double_heading_pane_g1_cp2_ParamLimits

0x2fe4,	// (0x00044e19) list_double_heading_pane_g1_cp2

0x2ff0,	// (0x00044e25) list_double_heading_pane_g2_cp2_ParamLimits

0x2ff0,	// (0x00044e25) list_double_heading_pane_g2_cp2

0x7722,	// (0x00049557) list_double_heading_pane_t1_cp2_ParamLimits

0x7722,	// (0x00049557) list_double_heading_pane_t1_cp2

0x7738,	// (0x0004956d) list_double_heading_pane_t2_cp2_ParamLimits

0x7738,	// (0x0004956d) list_double_heading_pane_t2_cp2

0xda6b,	// (0x0004f8a0) aid_value_unit2

0x0bd3,	// (0x00042a08) popup_preview_fixed_window

0x29c1,	// (0x000447f6) bg_popup_preview_window_pane_cp02

0x774a,	// (0x0004957f) list_preview_fixed_pane

0x7790,	// (0x000495c5) list_empty_pane_fp_ParamLimits

0x7790,	// (0x000495c5) list_empty_pane_fp

0x7790,	// (0x000495c5) list_single_cale_day_pane_fp_ParamLimits

0x7790,	// (0x000495c5) list_single_cale_day_pane_fp

0x7790,	// (0x000495c5) list_single_graphic_heading_pane_fp_ParamLimits

0x7790,	// (0x000495c5) list_single_graphic_heading_pane_fp

0x7790,	// (0x000495c5) list_single_graphic_pane_fp_ParamLimits

0x7790,	// (0x000495c5) list_single_graphic_pane_fp

0x7790,	// (0x000495c5) list_single_heading_pane_fp_ParamLimits

0x7790,	// (0x000495c5) list_single_heading_pane_fp

0x7790,	// (0x000495c5) list_single_pane_fp_ParamLimits

0x7790,	// (0x000495c5) list_single_pane_fp

0x77a9,	// (0x000495de) list_single_pane_fp_g1_ParamLimits

0x77a9,	// (0x000495de) list_single_pane_fp_g1

0x0dee,	// (0x00042c23) list_single_pane_fp_g2_ParamLimits

0x0dee,	// (0x00042c23) list_single_pane_fp_g2

0x1bc3,	// (0x000439f8) list_single_pane_fp_g3_ParamLimits

0x1bc3,	// (0x000439f8) list_single_pane_fp_g3

0x77b5,	// (0x000495ea) list_single_pane_fp_g4_ParamLimits

0x77b5,	// (0x000495ea) list_single_pane_fp_g4

0x0003,

0xfb8c,	// (0x000519c1) list_single_pane_fp_g_ParamLimits

0xfb8c,	// (0x000519c1) list_single_pane_fp_g

0x067b,	// (0x000424b0) list_single_pane_fp_t1_ParamLimits

0x067b,	// (0x000424b0) list_single_pane_fp_t1

0x0692,	// (0x000424c7) list_single_graphic_pane_fp_g1_ParamLimits

0x0692,	// (0x000424c7) list_single_graphic_pane_fp_g1

0x77a9,	// (0x000495de) list_single_graphic_pane_fp_g2_ParamLimits

0x77a9,	// (0x000495de) list_single_graphic_pane_fp_g2

0x0dee,	// (0x00042c23) list_single_graphic_pane_fp_g3_ParamLimits

0x0dee,	// (0x00042c23) list_single_graphic_pane_fp_g3

0x1bc3,	// (0x000439f8) list_single_graphic_pane_fp_g4_ParamLimits

0x1bc3,	// (0x000439f8) list_single_graphic_pane_fp_g4

0x77b5,	// (0x000495ea) list_single_graphic_pane_fp_g5_ParamLimits

0x77b5,	// (0x000495ea) list_single_graphic_pane_fp_g5

0x0004,

0xfb95,	// (0x000519ca) list_single_graphic_pane_fp_g_ParamLimits

0xfb95,	// (0x000519ca) list_single_graphic_pane_fp_g

0x069e,	// (0x000424d3) list_single_graphic_pane_fp_t1_ParamLimits

0x069e,	// (0x000424d3) list_single_graphic_pane_fp_t1

0x0692,	// (0x000424c7) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0692,	// (0x000424c7) list_single_graphic_heading_pane_fp_g1

0x77a9,	// (0x000495de) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x77a9,	// (0x000495de) list_single_graphic_heading_pane_fp_g2

0x0dee,	// (0x00042c23) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0dee,	// (0x00042c23) list_single_graphic_heading_pane_fp_g3

0x1bc3,	// (0x000439f8) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x1bc3,	// (0x000439f8) list_single_graphic_heading_pane_fp_g4

0x77b5,	// (0x000495ea) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x77b5,	// (0x000495ea) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb95,	// (0x000519ca) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb95,	// (0x000519ca) list_single_graphic_heading_pane_fp_g

0x06b4,	// (0x000424e9) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x06b4,	// (0x000424e9) list_single_graphic_heading_pane_fp_t1

0x06ca,	// (0x000424ff) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x06ca,	// (0x000424ff) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba0,	// (0x000519d5) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba0,	// (0x000519d5) list_single_graphic_heading_pane_fp_t

0x06dc,	// (0x00042511) list_single_cale_day_pane_fp_g1_ParamLimits

0x06dc,	// (0x00042511) list_single_cale_day_pane_fp_g1

0x77c1,	// (0x000495f6) list_single_cale_day_pane_fp_g2_ParamLimits

0x77c1,	// (0x000495f6) list_single_cale_day_pane_fp_g2

0x1bd7,	// (0x00043a0c) list_single_cale_day_pane_fp_g3_ParamLimits

0x1bd7,	// (0x00043a0c) list_single_cale_day_pane_fp_g3

0x1bff,	// (0x00043a34) list_single_cale_day_pane_fp_g4_ParamLimits

0x1bff,	// (0x00043a34) list_single_cale_day_pane_fp_g4

0x1c23,	// (0x00043a58) list_single_cale_day_pane_fp_g5_ParamLimits

0x1c23,	// (0x00043a58) list_single_cale_day_pane_fp_g5

0x0004,

0xfba5,	// (0x000519da) list_single_cale_day_pane_fp_g_ParamLimits

0xfba5,	// (0x000519da) list_single_cale_day_pane_fp_g

0x0714,	// (0x00042549) list_single_cale_day_pane_fp_t1_ParamLimits

0x0714,	// (0x00042549) list_single_cale_day_pane_fp_t1

0x073a,	// (0x0004256f) list_single_cale_day_pane_fp_t2_ParamLimits

0x073a,	// (0x0004256f) list_single_cale_day_pane_fp_t2

0x0753,	// (0x00042588) list_single_cale_day_pane_fp_t3_ParamLimits

0x0753,	// (0x00042588) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb0,	// (0x000519e5) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb0,	// (0x000519e5) list_single_cale_day_pane_fp_t

0x77a9,	// (0x000495de) list_empty_pane_fp_g1_ParamLimits

0x77a9,	// (0x000495de) list_empty_pane_fp_g1

0x076c,	// (0x000425a1) list_empty_pane_fp_t1

0x077a,	// (0x000425af) list_empty_pane_fp_t2

0x0001,

0xfbb7,	// (0x000519ec) list_empty_pane_fp_t

0x77a9,	// (0x000495de) list_single_heading_pane_fp_g1_ParamLimits

0x77a9,	// (0x000495de) list_single_heading_pane_fp_g1

0x0dee,	// (0x00042c23) list_single_heading_pane_fp_g2_ParamLimits

0x0dee,	// (0x00042c23) list_single_heading_pane_fp_g2

0x1bc3,	// (0x000439f8) list_single_heading_pane_fp_g3_ParamLimits

0x1bc3,	// (0x000439f8) list_single_heading_pane_fp_g3

0x0002,

0xfbbc,	// (0x000519f1) list_single_heading_pane_fp_g_ParamLimits

0xfbbc,	// (0x000519f1) list_single_heading_pane_fp_g

0x0788,	// (0x000425bd) list_single_heading_pane_fp_t1_ParamLimits

0x0788,	// (0x000425bd) list_single_heading_pane_fp_t1

0x079a,	// (0x000425cf) list_single_heading_pane_fp_t2_ParamLimits

0x079a,	// (0x000425cf) list_single_heading_pane_fp_t2

0x0001,

0xfbc3,	// (0x000519f8) list_single_heading_pane_fp_t_ParamLimits

0xfbc3,	// (0x000519f8) list_single_heading_pane_fp_t

0x31df,	// (0x00045014) aid_size_cell_fast

0x2933,	// (0x00044768) soft_indicator_pane_cp1_t1

0x321c,	// (0x00045051) cell_app_pane_cp2_ParamLimits

0x321c,	// (0x00045051) cell_app_pane_cp2

0x1971,	// (0x000437a6) fep_hwr_candidate_drop_down_list_pane

0xdd75,	// (0x0004fbaa) fep_hwr_candidate_pane_g3_ParamLimits

0xdd75,	// (0x0004fbaa) fep_hwr_candidate_pane_g3

0xdd82,	// (0x0004fbb7) fep_hwr_candidate_pane_g4_ParamLimits

0xdd82,	// (0x0004fbb7) fep_hwr_candidate_pane_g4

0x0002,

0xfb37,	// (0x0005196c) fep_hwr_candidate_pane_g_ParamLimits

0xfb37,	// (0x0005196c) fep_hwr_candidate_pane_g

0x7255,	// (0x0004908a) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7255,	// (0x0004908a) fep_vkb_candidate_drop_down_list_pane

0x767d,	// (0x000494b2) fep_vkb_candidate_pane_g3

0x7685,	// (0x000494ba) fep_vkb_candidate_pane_g4

0x0002,

0xfb64,	// (0x00051999) fep_vkb_candidate_pane_g

0x735b,	// (0x00049190) cell_hwr_candidate_pane_g1_ParamLimits

0x769c,	// (0x000494d1) cell_hwr_candidate_pane_g3_ParamLimits

0x769c,	// (0x000494d1) cell_hwr_candidate_pane_g3

0x76bd,	// (0x000494f2) cell_hwr_candidate_pane_g4_ParamLimits

0x76bd,	// (0x000494f2) cell_hwr_candidate_pane_g4

0x0002,

0xfb7e,	// (0x000519b3) cell_hwr_candidate_pane_g_ParamLimits

0xfb7e,	// (0x000519b3) cell_hwr_candidate_pane_g

0x76de,	// (0x00049513) cell_vkb_candidate_pane_g3_ParamLimits

0x76de,	// (0x00049513) cell_vkb_candidate_pane_g3

0x76f9,	// (0x0004952e) cell_vkb_candidate_pane_g4_ParamLimits

0x76f9,	// (0x0004952e) cell_vkb_candidate_pane_g4

0x77cd,	// (0x00049602) cell_app_pane_cp2_g1_ParamLimits

0x77cd,	// (0x00049602) cell_app_pane_cp2_g1

0x77eb,	// (0x00049620) cell_app_pane_cp2_g2_ParamLimits

0x77eb,	// (0x00049620) cell_app_pane_cp2_g2

0x0001,

0xfbc8,	// (0x000519fd) cell_app_pane_cp2_g_ParamLimits

0xfbc8,	// (0x000519fd) cell_app_pane_cp2_g

0x77f7,	// (0x0004962c) cell_app_pane_cp2_t1_ParamLimits

0x77f7,	// (0x0004962c) cell_app_pane_cp2_t1

0x2fca,	// (0x00044dff) grid_highlight_pane_cp1_ParamLimits

0x2fca,	// (0x00044dff) grid_highlight_pane_cp1

0x1c47,	// (0x00043a7c) cell_hwr_candidate_pane_cp1_ParamLimits

0x1c47,	// (0x00043a7c) cell_hwr_candidate_pane_cp1

0x735b,	// (0x00049190) fep_hwr_candidate_drop_down_list_pane_g1

0x7809,	// (0x0004963e) fep_hwr_candidate_drop_down_list_pane_g2

0x7816,	// (0x0004964b) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbcd,	// (0x00051a02) fep_hwr_candidate_drop_down_list_pane_g

0x1c6b,	// (0x00043aa0) fep_hwr_candidate_drop_down_list_scroll_pane

0x1c74,	// (0x00043aa9) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1c74,	// (0x00043aa9) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1c81,	// (0x00043ab6) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1c81,	// (0x00043ab6) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1c8e,	// (0x00043ac3) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1c8e,	// (0x00043ac3) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x76de,	// (0x00049513) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x76de,	// (0x00049513) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x76f9,	// (0x0004952e) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x76f9,	// (0x0004952e) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1c9b,	// (0x00043ad0) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1c9b,	// (0x00043ad0) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1cb6,	// (0x00043aeb) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1cb6,	// (0x00043aeb) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1cd1,	// (0x00043b06) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1cd1,	// (0x00043b06) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd4,	// (0x00051a09) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd4,	// (0x00051a09) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7823,	// (0x00049658) cell_vkb_candidate_pane_cp1_ParamLimits

0x7823,	// (0x00049658) cell_vkb_candidate_pane_cp1

0x735b,	// (0x00049190) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x735b,	// (0x00049190) fep_vkb_candidate_drop_down_list_pane_g1

0x7809,	// (0x0004963e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7809,	// (0x0004963e) fep_vkb_candidate_drop_down_list_pane_g2

0x7816,	// (0x0004964b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7816,	// (0x0004964b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbcd,	// (0x00051a02) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbcd,	// (0x00051a02) fep_vkb_candidate_drop_down_list_pane_g

0x7849,	// (0x0004967e) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7849,	// (0x0004967e) fep_vkb_candidate_drop_down_list_scroll_pane

0x7856,	// (0x0004968b) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7856,	// (0x0004968b) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7863,	// (0x00049698) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7863,	// (0x00049698) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x786f,	// (0x000496a4) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x786f,	// (0x000496a4) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x769c,	// (0x000494d1) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x769c,	// (0x000494d1) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x76bd,	// (0x000494f2) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x76bd,	// (0x000494f2) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x787b,	// (0x000496b0) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x787b,	// (0x000496b0) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x789c,	// (0x000496d1) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x789c,	// (0x000496d1) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x78bd,	// (0x000496f2) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x78bd,	// (0x000496f2) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x00051a1a) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x00051a1a) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb938,	// (0x0004d76d) title_pane_g1_ParamLimits

0xb94b,	// (0x0004d780) title_pane_g2_ParamLimits

0xf566,	// (0x0005139b) title_pane_g_ParamLimits

0x362a,	// (0x0004545f) aid_call2_pane

0x3632,	// (0x00045467) aid_call_pane

0x363a,	// (0x0004546f) popup_clock_analogue_window_g1

0x363a,	// (0x0004546f) popup_clock_analogue_window_g2

0x0fee,	// (0x00042e23) popup_clock_analogue_window_g3

0x0ff7,	// (0x00042e2c) popup_clock_analogue_window_g4

0xda7d,	// (0x0004f8b2) popup_clock_analogue_window_g5

0x0004,

0xf715,	// (0x0005154a) popup_clock_analogue_window_g

0x0fff,	// (0x00042e34) popup_clock_analogue_window_t1

0x100d,	// (0x00042e42) clock_digital_number_pane_ParamLimits

0x100d,	// (0x00042e42) clock_digital_number_pane

0x1019,	// (0x00042e4e) clock_digital_number_pane_cp02_ParamLimits

0x1019,	// (0x00042e4e) clock_digital_number_pane_cp02

0x1025,	// (0x00042e5a) clock_digital_number_pane_cp03_ParamLimits

0x1025,	// (0x00042e5a) clock_digital_number_pane_cp03

0x1031,	// (0x00042e66) clock_digital_number_pane_cp04_ParamLimits

0x1031,	// (0x00042e66) clock_digital_number_pane_cp04

0x103d,	// (0x00042e72) clock_digital_separator_pane_ParamLimits

0x103d,	// (0x00042e72) clock_digital_separator_pane

0x1049,	// (0x00042e7e) popup_clock_digital_window_t1_ParamLimits

0x1049,	// (0x00042e7e) popup_clock_digital_window_t1

0xda7d,	// (0x0004f8b2) clock_digital_number_pane_g1

0xda7d,	// (0x0004f8b2) clock_digital_number_pane_g2

0x0001,

0xf720,	// (0x00051555) clock_digital_number_pane_g

0xda7d,	// (0x0004f8b2) clock_digital_separator_pane_g1

0xda7d,	// (0x0004f8b2) clock_digital_separator_pane_g2

0x0001,

0xf720,	// (0x00051555) clock_digital_separator_pane_g

0xd10b,	// (0x0004ef40) aid_fill_nsta_ParamLimits

0xd241,	// (0x0004f076) indicator_nsta_pane_ParamLimits

0x48e5,	// (0x0004671a) popup_clock_analogue_window

0x48e5,	// (0x0004671a) popup_clock_digital_window

0x31a0,	// (0x00044fd5) grid_indicator_nsta_pane_ParamLimits

0x6b6c,	// (0x000489a1) clock_nsta_pane_t2

0x0001,

0xfab7,	// (0x000518ec) clock_nsta_pane_t

0x0fb2,	// (0x00042de7) aid_size_max_handle

0xbe95,	// (0x0004dcca) aid_size_min_handle

0x3c53,	// (0x00045a88) editor_scroll_pane

0x78d8,	// (0x0004970d) ex_editor_pane

0x314c,	// (0x00044f81) scroll_pane_cp13

0x2f5d,	// (0x00044d92) scroll_pane_cp14

0x3669,	// (0x0004549e) scroll_pane_cp36

0xbf22,	// (0x0004dd57) list_single_graphic_hl_pane_cp2_ParamLimits

0xbf22,	// (0x0004dd57) list_single_graphic_hl_pane_cp2

0xd9be,	// (0x0004f7f3) list_single_graphic_hl_pane_ParamLimits

0xd9be,	// (0x0004f7f3) list_single_graphic_hl_pane

0x07b0,	// (0x000425e5) aid_size_min_hl_cp1

0x78e0,	// (0x00049715) list_highlight_pane_cp34_ParamLimits

0x78e0,	// (0x00049715) list_highlight_pane_cp34

0x78f1,	// (0x00049726) list_single_graphic_hl_pane_g1_ParamLimits

0x78f1,	// (0x00049726) list_single_graphic_hl_pane_g1

0xb626,	// (0x0004d45b) list_single_graphic_hl_pane_g2_ParamLimits

0xb626,	// (0x0004d45b) list_single_graphic_hl_pane_g2

0xb626,	// (0x0004d45b) list_single_graphic_hl_pane_g3_ParamLimits

0xb626,	// (0x0004d45b) list_single_graphic_hl_pane_g3

0x2f65,	// (0x00044d9a) list_single_graphic_hl_pane_g4_ParamLimits

0x2f65,	// (0x00044d9a) list_single_graphic_hl_pane_g4

0x792e,	// (0x00049763) list_single_graphic_hl_pane_g5_ParamLimits

0x792e,	// (0x00049763) list_single_graphic_hl_pane_g5

0x0004,

0xfbf6,	// (0x00051a2b) list_single_graphic_hl_pane_g_ParamLimits

0xfbf6,	// (0x00051a2b) list_single_graphic_hl_pane_g

0xb632,	// (0x0004d467) list_single_graphic_hl_pane_t1_ParamLimits

0xb632,	// (0x0004d467) list_single_graphic_hl_pane_t1

0x78fe,	// (0x00049733) aid_size_min_hl_cp2

0x7907,	// (0x0004973c) list_highlight_pane_cp34_cp2_ParamLimits

0x7907,	// (0x0004973c) list_highlight_pane_cp34_cp2

0x78f1,	// (0x00049726) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x78f1,	// (0x00049726) list_single_graphic_hl_pane_g1_cp2

0x7914,	// (0x00049749) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7914,	// (0x00049749) list_single_graphic_hl_pane_g2_cp2

0x7920,	// (0x00049755) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7920,	// (0x00049755) list_single_graphic_hl_pane_g3_cp2

0x2f65,	// (0x00044d9a) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x2f65,	// (0x00044d9a) list_single_graphic_hl_pane_g4_cp2

0x792e,	// (0x00049763) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x792e,	// (0x00049763) list_single_graphic_hl_pane_g5_cp2

0xc0c0,	// (0x0004def5) control_pane_g4_ParamLimits

0xc0c0,	// (0x0004def5) control_pane_g4

0x3fd1,	// (0x00045e06) bg_popup_sub_pane_cp10_ParamLimits

0x70db,	// (0x00048f10) list_choice_list_pane_ParamLimits

0x70ea,	// (0x00048f1f) scroll_pane_cp23

0x29c1,	// (0x000447f6) bg_popup_preview_window_pane_cp02_ParamLimits

0x774a,	// (0x0004957f) list_preview_fixed_pane_ParamLimits

0x7760,	// (0x00049595) list_preview_fixed_pane_cp_ParamLimits

0x7760,	// (0x00049595) list_preview_fixed_pane_cp

0x776c,	// (0x000495a1) popup_preview_fixed_window_g1_ParamLimits

0x776c,	// (0x000495a1) popup_preview_fixed_window_g1

0x7778,	// (0x000495ad) popup_preview_fixed_window_g2_ParamLimits

0x7778,	// (0x000495ad) popup_preview_fixed_window_g2

0x0002,

0xfb85,	// (0x000519ba) popup_preview_fixed_window_g_ParamLimits

0xfb85,	// (0x000519ba) popup_preview_fixed_window_g

0x0f24,	// (0x00042d59) aid_navi_side_left_pane_ParamLimits

0x0f39,	// (0x00042d6e) aid_navi_side_right_pane_ParamLimits

0x0f51,	// (0x00042d86) navi_icon_pane_stacon_ParamLimits

0x0f65,	// (0x00042d9a) navi_navi_pane_stacon_ParamLimits

0x0f51,	// (0x00042d86) navi_text_pane_stacon_ParamLimits

0xda73,	// (0x0004f8a8) main_text_info_pane

0x7958,	// (0x0004978d) listscroll_text_info_pane

0x7960,	// (0x00049795) list_text_info_pane_ParamLimits

0x7960,	// (0x00049795) list_text_info_pane

0x796f,	// (0x000497a4) scroll_pane_cp24_ParamLimits

0x796f,	// (0x000497a4) scroll_pane_cp24

0xdf0b,	// (0x0004fd40) list_text_info_pane_t1_ParamLimits

0xdf0b,	// (0x0004fd40) list_text_info_pane_t1

0xca08,	// (0x0004e83d) popup_fast_swap2_window_ParamLimits

0xca08,	// (0x0004e83d) popup_fast_swap2_window

0x79b2,	// (0x000497e7) aid_size_cell_fast2

0xda73,	// (0x0004f8a8) bg_popup_window_pane_cp17

0x4f6c,	// (0x00046da1) heading_pane_cp2

0x2c21,	// (0x00044a56) listscroll_fast2_pane

0x79bc,	// (0x000497f1) grid_fast2_pane

0x79c6,	// (0x000497fb) listscroll_fast2_pane_g1

0x79d0,	// (0x00049805) listscroll_fast2_pane_g2

0x0001,

0xfc01,	// (0x00051a36) listscroll_fast2_pane_g

0x314c,	// (0x00044f81) scroll_pane_cp26

0x79da,	// (0x0004980f) cell_fast2_pane_ParamLimits

0x79da,	// (0x0004980f) cell_fast2_pane

0x79f1,	// (0x00049826) cell_fast2_pane_g1

0x79fa,	// (0x0004982f) cell_fast2_pane_g2

0x7a03,	// (0x00049838) cell_fast2_pane_g3

0x0002,

0xfc06,	// (0x00051a3b) cell_fast2_pane_g

0x2d1a,	// (0x00044b4f) grid_highlight_pane_cp9

0x2d2f,	// (0x00044b64) main_eswt_pane_ParamLimits

0x2d2f,	// (0x00044b64) main_eswt_pane

0x7984,	// (0x000497b9) list_single_text_info_pane

0x7a0b,	// (0x00049840) eswt_ctrl_button_pane

0x7a0b,	// (0x00049840) eswt_ctrl_canvas_pane

0x7a13,	// (0x00049848) eswt_ctrl_combo_pane

0x7a0b,	// (0x00049840) eswt_ctrl_default_pane

0x7a0b,	// (0x00049840) eswt_ctrl_label_pane

0x7a1b,	// (0x00049850) eswt_ctrl_wait_pane

0x7a23,	// (0x00049858) eswt_shell_pane

0xda73,	// (0x0004f8a8) listscroll_eswt_app_pane

0x7a43,	// (0x00049878) popup_eswt_tasktip_window_ParamLimits

0x7a43,	// (0x00049878) popup_eswt_tasktip_window

0x4c00,	// (0x00046a35) bg_popup_window_pane_cp18

0x7a54,	// (0x00049889) eswt_control_pane_g1_ParamLimits

0x7a54,	// (0x00049889) eswt_control_pane_g1

0x7a61,	// (0x00049896) eswt_control_pane_g2_ParamLimits

0x7a61,	// (0x00049896) eswt_control_pane_g2

0x7a6e,	// (0x000498a3) eswt_control_pane_g3_ParamLimits

0x7a6e,	// (0x000498a3) eswt_control_pane_g3

0x7a7b,	// (0x000498b0) eswt_control_pane_g4_ParamLimits

0x7a7b,	// (0x000498b0) eswt_control_pane_g4

0x0003,

0xfc0d,	// (0x00051a42) eswt_control_pane_g_ParamLimits

0xfc0d,	// (0x00051a42) eswt_control_pane_g

0x2fca,	// (0x00044dff) bg_button_pane_ParamLimits

0x2fca,	// (0x00044dff) bg_button_pane

0x2d2f,	// (0x00044b64) common_borders_pane_copy2_ParamLimits

0x2d2f,	// (0x00044b64) common_borders_pane_copy2

0x7a88,	// (0x000498bd) control_button_pane_g1_ParamLimits

0x7a88,	// (0x000498bd) control_button_pane_g1

0x7a94,	// (0x000498c9) control_button_pane_g2_ParamLimits

0x7a94,	// (0x000498c9) control_button_pane_g2

0x7aa0,	// (0x000498d5) control_button_pane_g3_ParamLimits

0x7aa0,	// (0x000498d5) control_button_pane_g3

0x0002,

0xfc16,	// (0x00051a4b) control_button_pane_g_ParamLimits

0xfc16,	// (0x00051a4b) control_button_pane_g

0x7ab4,	// (0x000498e9) control_button_pane_t1

0x7ac2,	// (0x000498f7) control_button_pane_t2

0x0001,

0xfc1d,	// (0x00051a52) control_button_pane_t

0x4b0e,	// (0x00046943) bg_button_pane_g1

0x4b16,	// (0x0004694b) bg_button_pane_g2

0x4b1e,	// (0x00046953) bg_button_pane_g3

0x4b26,	// (0x0004695b) bg_button_pane_g4

0x4b2e,	// (0x00046963) bg_button_pane_g5

0x4b36,	// (0x0004696b) bg_button_pane_g6

0x4b3e,	// (0x00046973) bg_button_pane_g7

0x4b46,	// (0x0004697b) bg_button_pane_g8

0x4b4e,	// (0x00046983) bg_button_pane_g9

0x0008,

0xf877,	// (0x000516ac) bg_button_pane_g

0x7096,	// (0x00048ecb) common_borders_pane_ParamLimits

0x7096,	// (0x00048ecb) common_borders_pane

0x7a54,	// (0x00049889) eswt_control_pane_g1_copy1_ParamLimits

0x7a54,	// (0x00049889) eswt_control_pane_g1_copy1

0x7a61,	// (0x00049896) eswt_control_pane_g2_copy1_ParamLimits

0x7a61,	// (0x00049896) eswt_control_pane_g2_copy1

0x7a6e,	// (0x000498a3) eswt_control_pane_g3_copy1_ParamLimits

0x7a6e,	// (0x000498a3) eswt_control_pane_g3_copy1

0x7a7b,	// (0x000498b0) eswt_control_pane_g4_copy1_ParamLimits

0x7a7b,	// (0x000498b0) eswt_control_pane_g4_copy1

0x70d1,	// (0x00048f06) bg_eswt_ctrl_canvas_pane_g1

0x7096,	// (0x00048ecb) common_borders_pane_cp2_ParamLimits

0x7096,	// (0x00048ecb) common_borders_pane_cp2

0x7096,	// (0x00048ecb) common_borders_pane_cp3_ParamLimits

0x7096,	// (0x00048ecb) common_borders_pane_cp3

0x7ad0,	// (0x00049905) separator_horizontal_pane

0x7ad8,	// (0x0004990d) separator_vertical_pane

0x7a54,	// (0x00049889) eswt_control_pane_g1_copy2_ParamLimits

0x7a54,	// (0x00049889) eswt_control_pane_g1_copy2

0x7a61,	// (0x00049896) eswt_control_pane_g2_copy2_ParamLimits

0x7a61,	// (0x00049896) eswt_control_pane_g2_copy2

0x7a6e,	// (0x000498a3) eswt_control_pane_g3_copy2_ParamLimits

0x7a6e,	// (0x000498a3) eswt_control_pane_g3_copy2

0x7a7b,	// (0x000498b0) eswt_control_pane_g4_copy2_ParamLimits

0x7a7b,	// (0x000498b0) eswt_control_pane_g4_copy2

0xda73,	// (0x0004f8a8) common_borders_pane_cp4

0x7ae1,	// (0x00049916) separator_horizontal_pane_g1

0x7aea,	// (0x0004991f) separator_horizontal_pane_g2

0x7af3,	// (0x00049928) separator_horizontal_pane_g3

0x0002,

0xfc22,	// (0x00051a57) separator_horizontal_pane_g

0x7a54,	// (0x00049889) eswt_control_pane_g1_copy3_ParamLimits

0x7a54,	// (0x00049889) eswt_control_pane_g1_copy3

0x7a61,	// (0x00049896) eswt_control_pane_g2_copy3_ParamLimits

0x7a61,	// (0x00049896) eswt_control_pane_g2_copy3

0x7a6e,	// (0x000498a3) eswt_control_pane_g3_copy3_ParamLimits

0x7a6e,	// (0x000498a3) eswt_control_pane_g3_copy3

0x7a7b,	// (0x000498b0) eswt_control_pane_g4_copy3_ParamLimits

0x7a7b,	// (0x000498b0) eswt_control_pane_g4_copy3

0xda73,	// (0x0004f8a8) common_borders_pane_cp5

0x7afc,	// (0x00049931) separator_vertical_pane_g1

0x7b05,	// (0x0004993a) separator_vertical_pane_g2

0x7b0e,	// (0x00049943) separator_vertical_pane_g3

0x0002,

0xfc29,	// (0x00051a5e) separator_vertical_pane_g

0x7a54,	// (0x00049889) eswt_control_pane_g1_copy4_ParamLimits

0x7a54,	// (0x00049889) eswt_control_pane_g1_copy4

0x7a61,	// (0x00049896) eswt_control_pane_g2_copy4_ParamLimits

0x7a61,	// (0x00049896) eswt_control_pane_g2_copy4

0x7a6e,	// (0x000498a3) eswt_control_pane_g3_copy4_ParamLimits

0x7a6e,	// (0x000498a3) eswt_control_pane_g3_copy4

0x7a7b,	// (0x000498b0) eswt_control_pane_g4_copy4_ParamLimits

0x7a7b,	// (0x000498b0) eswt_control_pane_g4_copy4

0xdf2d,	// (0x0004fd62) eswt_ctrl_combo_button_pane

0xdf35,	// (0x0004fd6a) eswt_ctrl_input_pane

0xdf3d,	// (0x0004fd72) popup_choice_list_window_cp70

0xdf45,	// (0x0004fd7a) eswt_ctrl_input_pane_t1

0xda73,	// (0x0004f8a8) input_focus_pane_cp70

0x7096,	// (0x00048ecb) bg_button_pane_cp70_ParamLimits

0x7096,	// (0x00048ecb) bg_button_pane_cp70

0xdf53,	// (0x0004fd88) eswt_ctrl_combo_button_pane_g1

0x7b45,	// (0x0004997a) wait_bar_pane_cp70

0x4c00,	// (0x00046a35) bg_popup_window_pane_cp70_ParamLimits

0x4c00,	// (0x00046a35) bg_popup_window_pane_cp70

0x7b4d,	// (0x00049982) popup_eswt_tasktip_window_t1

0x7b63,	// (0x00049998) wait_bar_pane_cp71_ParamLimits

0x7b63,	// (0x00049998) wait_bar_pane_cp71

0x7b6f,	// (0x000499a4) grid_eswt_app_pane

0x3477,	// (0x000452ac) scroll_pane_cp70

0xdf5b,	// (0x0004fd90) cell_eswt_app_pane_ParamLimits

0xdf5b,	// (0x0004fd90) cell_eswt_app_pane

0xdf8d,	// (0x0004fdc2) cell_eswt_app_pane_g1_ParamLimits

0xdf8d,	// (0x0004fdc2) cell_eswt_app_pane_g1

0xdfbc,	// (0x0004fdf1) cell_eswt_app_pane_g2_ParamLimits

0xdfbc,	// (0x0004fdf1) cell_eswt_app_pane_g2

0x0001,

0xfc30,	// (0x00051a65) cell_eswt_app_pane_g_ParamLimits

0xfc30,	// (0x00051a65) cell_eswt_app_pane_g

0xdfe5,	// (0x0004fe1a) cell_eswt_app_pane_t1_ParamLimits

0xdfe5,	// (0x0004fe1a) cell_eswt_app_pane_t1

0x7c34,	// (0x00049a69) grid_highlight_pane_cp70_ParamLimits

0x7c34,	// (0x00049a69) grid_highlight_pane_cp70

0x6065,	// (0x00047e9a) set_content_pane_g1

0x3f03,	// (0x00045d38) status_small_volume_pane

0x1d00,	// (0x00043b35) status_small_volume_pane_g1

0x1d08,	// (0x00043b3d) volume_small2_pane

0x1d11,	// (0x00043b46) volume_small2_pane_g1

0x1d1a,	// (0x00043b4f) volume_small2_pane_g2

0x1d23,	// (0x00043b58) volume_small2_pane_g3

0x1d2c,	// (0x00043b61) volume_small2_pane_g4

0x1d35,	// (0x00043b6a) volume_small2_pane_g5

0x1d3e,	// (0x00043b73) volume_small2_pane_g6

0x1d47,	// (0x00043b7c) volume_small2_pane_g7

0x1d50,	// (0x00043b85) volume_small2_pane_g8

0x1d59,	// (0x00043b8e) volume_small2_pane_g9

0x1d62,	// (0x00043b97) volume_small2_pane_g10

0x0009,

0xfc35,	// (0x00051a6a) volume_small2_pane_g

0x74af,	// (0x000492e4) fep_vkb_top_text_pane_g1_ParamLimits

0xdeb3,	// (0x0004fce8) fep_vkb_top_text_pane_t1_ParamLimits

0x7784,	// (0x000495b9) popup_preview_fixed_window_g3_ParamLimits

0x7784,	// (0x000495b9) popup_preview_fixed_window_g3

0xd09e,	// (0x0004eed3) popup_toolbar_trans_pane

0xd80e,	// (0x0004f643) aid_height_set_list_ParamLimits

0x5f1b,	// (0x00047d50) aid_size_parent_ParamLimits

0x3fd1,	// (0x00045e06) list_highlight_pane_cp2_ParamLimits

0x6065,	// (0x00047e9a) set_content_pane_g1_ParamLimits

0xc3dd,	// (0x0004e212) list_single_image_pane_ParamLimits

0xc3dd,	// (0x0004e212) list_single_image_pane

0xe017,	// (0x0004fe4c) aid_size_cell_image_ParamLimits

0xe017,	// (0x0004fe4c) aid_size_cell_image

0xe024,	// (0x0004fe59) grid_single_image_pane_ParamLimits

0xe024,	// (0x0004fe59) grid_single_image_pane

0x2fe4,	// (0x00044e19) list_single_image_pane_g1_ParamLimits

0x2fe4,	// (0x00044e19) list_single_image_pane_g1

0x2ff0,	// (0x00044e25) list_single_image_pane_g2_ParamLimits

0x2ff0,	// (0x00044e25) list_single_image_pane_g2

0x0001,

0xfc4a,	// (0x00051a7f) list_single_image_pane_g_ParamLimits

0xfc4a,	// (0x00051a7f) list_single_image_pane_g

0x7c5b,	// (0x00049a90) list_single_image_pane_t1_ParamLimits

0x7c5b,	// (0x00049a90) list_single_image_pane_t1

0xe032,	// (0x0004fe67) cell_image_list_pane_ParamLimits

0xe032,	// (0x0004fe67) cell_image_list_pane

0xe04c,	// (0x0004fe81) cell_image_list_pane_g1

0xe055,	// (0x0004fe8a) cell_image_list_pane_g2

0x0001,

0xfc4f,	// (0x00051a84) cell_image_list_pane_g

0x7c99,	// (0x00049ace) aid_size_cell_tb_trans_pane

0x2fca,	// (0x00044dff) bg_tb_trans_pane

0x7cab,	// (0x00049ae0) grid_tb_trans_pane

0x4b0e,	// (0x00046943) bg_tb_trans_pane_g1

0x4b16,	// (0x0004694b) bg_tb_trans_pane_g2

0x4b1e,	// (0x00046953) bg_tb_trans_pane_g3

0x4b26,	// (0x0004695b) bg_tb_trans_pane_g4

0x4b2e,	// (0x00046963) bg_tb_trans_pane_g5

0x4b46,	// (0x0004697b) bg_tb_trans_pane_g6

0x4b4e,	// (0x00046983) bg_tb_trans_pane_g7

0x4b36,	// (0x0004696b) bg_tb_trans_pane_g8

0x4b3e,	// (0x00046973) bg_tb_trans_pane_g9

0x0008,

0xfc54,	// (0x00051a89) bg_tb_trans_pane_g

0x7cbf,	// (0x00049af4) cell_toolbar_trans_pane_ParamLimits

0x7cbf,	// (0x00049af4) cell_toolbar_trans_pane

0x70d1,	// (0x00048f06) cell_toolbar_trans_pane_g1

0xdc25,	// (0x0004fa5a) list_form2_midp_pane_t1

0xdc33,	// (0x0004fa68) list_form2_midp_pane_t2

0x0001,

0xfafd,	// (0x00051932) list_form2_midp_pane_t

0x6d84,	// (0x00048bb9) scroll_pane_cp51_ParamLimits

0x6f33,	// (0x00048d68) form2_midp_wait_pane_g1

0x6f3c,	// (0x00048d71) form2_midp_wait_pane_g2

0x6f45,	// (0x00048d7a) form2_midp_wait_pane_g3

0x0002,

0xfb12,	// (0x00051947) form2_midp_wait_pane_g

0x2737,	// (0x0004456c) list_highlight_pane_cp21_ParamLimits

0x6f76,	// (0x00048dab) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x6f85,	// (0x00048dba) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6113,	// (0x00047f48) list_single_2graphic_im_pane_ParamLimits

0x6113,	// (0x00047f48) list_single_2graphic_im_pane

0xe05e,	// (0x0004fe93) list_single_2graphic_im_pane_g1_ParamLimits

0xe05e,	// (0x0004fe93) list_single_2graphic_im_pane_g1

0xe06f,	// (0x0004fea4) list_single_2graphic_im_pane_g2_ParamLimits

0xe06f,	// (0x0004fea4) list_single_2graphic_im_pane_g2

0xe07b,	// (0x0004feb0) list_single_2graphic_im_pane_g3_ParamLimits

0xe07b,	// (0x0004feb0) list_single_2graphic_im_pane_g3

0x0003,

0xfc67,	// (0x00051a9c) list_single_2graphic_im_pane_g_ParamLimits

0xfc67,	// (0x00051a9c) list_single_2graphic_im_pane_g

0xe08f,	// (0x0004fec4) list_single_2graphic_im_pane_t1_ParamLimits

0xe08f,	// (0x0004fec4) list_single_2graphic_im_pane_t1

0x7790,	// (0x000495c5) list_single_graphic_2heading_pane_fp_ParamLimits

0x7790,	// (0x000495c5) list_single_graphic_2heading_pane_fp

0x0692,	// (0x000424c7) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0692,	// (0x000424c7) list_single_graphic_2heading_pane_fp_g1

0x77a9,	// (0x000495de) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x77a9,	// (0x000495de) list_single_graphic_2heading_pane_fp_g2

0x0dee,	// (0x00042c23) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0dee,	// (0x00042c23) list_single_graphic_2heading_pane_fp_g3

0x1bc3,	// (0x000439f8) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x1bc3,	// (0x000439f8) list_single_graphic_2heading_pane_fp_g4

0x77b5,	// (0x000495ea) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x77b5,	// (0x000495ea) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb95,	// (0x000519ca) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb95,	// (0x000519ca) list_single_graphic_2heading_pane_fp_g

0x07db,	// (0x00042610) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x07db,	// (0x00042610) list_single_graphic_2heading_pane_fp_t1

0x06ca,	// (0x000424ff) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x06ca,	// (0x000424ff) list_single_graphic_2heading_pane_fp_t2

0x07f1,	// (0x00042626) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x07f1,	// (0x00042626) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc70,	// (0x00051aa5) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc70,	// (0x00051aa5) list_single_graphic_2heading_pane_fp_t

0x7171,	// (0x00048fa6) fep_hwr_write_pane_g5_ParamLimits

0x7171,	// (0x00048fa6) fep_hwr_write_pane_g5

0x717d,	// (0x00048fb2) fep_hwr_write_pane_g6_ParamLimits

0x717d,	// (0x00048fb2) fep_hwr_write_pane_g6

0x7a23,	// (0x00049858) eswt_shell_pane_ParamLimits

0x4c00,	// (0x00046a35) bg_popup_window_pane_cp18_ParamLimits

0x5e61,	// (0x00047c96) heading_pane_cp70

0x7b4d,	// (0x00049982) popup_eswt_tasktip_window_t1_ParamLimits

0xd168,	// (0x0004ef9d) aid_touch_tab_arrow_left

0xd17c,	// (0x0004efb1) aid_touch_tab_arrow_right

0xb963,	// (0x0004d798) title_pane_g3_ParamLimits

0xb963,	// (0x0004d798) title_pane_g3

0x2f89,	// (0x00044dbe) set_value_pane_g1

0xd09e,	// (0x0004eed3) popup_toolbar_trans_pane_ParamLimits

0x7c99,	// (0x00049ace) aid_size_cell_tb_trans_pane_ParamLimits

0x2fca,	// (0x00044dff) bg_tb_trans_pane_ParamLimits

0x7cab,	// (0x00049ae0) grid_tb_trans_pane_ParamLimits

0x29c1,	// (0x000447f6) cont_note_pane_ParamLimits

0x29c1,	// (0x000447f6) cont_note_pane

0x2d2f,	// (0x00044b64) cont_snote2_single_text_pane_ParamLimits

0x2d2f,	// (0x00044b64) cont_snote2_single_text_pane

0x2d2f,	// (0x00044b64) cont_snote2_single_graphic_pane_ParamLimits

0x2d2f,	// (0x00044b64) cont_snote2_single_graphic_pane

0x5188,	// (0x00046fbd) cont_note_wait_pane_ParamLimits

0x5188,	// (0x00046fbd) cont_note_wait_pane

0x5188,	// (0x00046fbd) cont_note_image_pane_ParamLimits

0x5188,	// (0x00046fbd) cont_note_image_pane

0x7d53,	// (0x00049b88) popup_note2_window_g1_ParamLimits

0x7d53,	// (0x00049b88) popup_note2_window_g1

0x7d84,	// (0x00049bb9) popup_note2_window_t1_ParamLimits

0x7d84,	// (0x00049bb9) popup_note2_window_t1

0x7dc9,	// (0x00049bfe) popup_note2_window_t2_ParamLimits

0x7dc9,	// (0x00049bfe) popup_note2_window_t2

0x7e0e,	// (0x00049c43) popup_note2_window_t3_ParamLimits

0x7e0e,	// (0x00049c43) popup_note2_window_t3

0x7e53,	// (0x00049c88) popup_note2_window_t4_ParamLimits

0x7e53,	// (0x00049c88) popup_note2_window_t4

0x2a45,	// (0x0004487a) popup_note2_window_t5_ParamLimits

0x2a45,	// (0x0004487a) popup_note2_window_t5

0x0004,

0xfc7c,	// (0x00051ab1) popup_note2_window_t_ParamLimits

0xfc7c,	// (0x00051ab1) popup_note2_window_t

0x7e82,	// (0x00049cb7) popup_note2_image_window_g1_ParamLimits

0x7e82,	// (0x00049cb7) popup_note2_image_window_g1

0x7e8e,	// (0x00049cc3) popup_note2_image_window_g2_ParamLimits

0x7e8e,	// (0x00049cc3) popup_note2_image_window_g2

0x0001,

0xfc87,	// (0x00051abc) popup_note2_image_window_g_ParamLimits

0xfc87,	// (0x00051abc) popup_note2_image_window_g

0x7ea0,	// (0x00049cd5) popup_note2_image_window_t1_ParamLimits

0x7ea0,	// (0x00049cd5) popup_note2_image_window_t1

0x7eb8,	// (0x00049ced) popup_note2_image_window_t2_ParamLimits

0x7eb8,	// (0x00049ced) popup_note2_image_window_t2

0x7ed0,	// (0x00049d05) popup_note2_image_window_t3_ParamLimits

0x7ed0,	// (0x00049d05) popup_note2_image_window_t3

0x0002,

0xfc8c,	// (0x00051ac1) popup_note2_image_window_t_ParamLimits

0xfc8c,	// (0x00051ac1) popup_note2_image_window_t

0x5196,	// (0x00046fcb) popup_note2_wait_window_g1_ParamLimits

0x5196,	// (0x00046fcb) popup_note2_wait_window_g1

0x7eec,	// (0x00049d21) popup_note2_wait_window_g2_ParamLimits

0x7eec,	// (0x00049d21) popup_note2_wait_window_g2

0x51ae,	// (0x00046fe3) popup_note2_wait_window_g3_ParamLimits

0x51ae,	// (0x00046fe3) popup_note2_wait_window_g3

0x0002,

0xfc93,	// (0x00051ac8) popup_note2_wait_window_g_ParamLimits

0xfc93,	// (0x00051ac8) popup_note2_wait_window_g

0x7ef8,	// (0x00049d2d) popup_note2_wait_window_t1_ParamLimits

0x7ef8,	// (0x00049d2d) popup_note2_wait_window_t1

0x7f16,	// (0x00049d4b) popup_note2_wait_window_t2_ParamLimits

0x7f16,	// (0x00049d4b) popup_note2_wait_window_t2

0x7f34,	// (0x00049d69) popup_note2_wait_window_t3_ParamLimits

0x7f34,	// (0x00049d69) popup_note2_wait_window_t3

0x7f46,	// (0x00049d7b) popup_note2_wait_window_t4_ParamLimits

0x7f46,	// (0x00049d7b) popup_note2_wait_window_t4

0x0003,

0xfc9a,	// (0x00051acf) popup_note2_wait_window_t_ParamLimits

0xfc9a,	// (0x00051acf) popup_note2_wait_window_t

0x7f58,	// (0x00049d8d) wait_bar2_pane_ParamLimits

0x7f58,	// (0x00049d8d) wait_bar2_pane

0x7f70,	// (0x00049da5) popup_snote2_single_text_window_g1_ParamLimits

0x7f70,	// (0x00049da5) popup_snote2_single_text_window_g1

0x7f98,	// (0x00049dcd) popup_snote2_single_text_window_t1_ParamLimits

0x7f98,	// (0x00049dcd) popup_snote2_single_text_window_t1

0x7fe4,	// (0x00049e19) popup_snote2_single_text_window_t2_ParamLimits

0x7fe4,	// (0x00049e19) popup_snote2_single_text_window_t2

0x8030,	// (0x00049e65) popup_snote2_single_text_window_t3_ParamLimits

0x8030,	// (0x00049e65) popup_snote2_single_text_window_t3

0x8071,	// (0x00049ea6) popup_snote2_single_text_window_t4_ParamLimits

0x8071,	// (0x00049ea6) popup_snote2_single_text_window_t4

0x80a7,	// (0x00049edc) popup_snote2_single_text_window_t5_ParamLimits

0x80a7,	// (0x00049edc) popup_snote2_single_text_window_t5

0x0004,

0xfca3,	// (0x00051ad8) popup_snote2_single_text_window_t_ParamLimits

0xfca3,	// (0x00051ad8) popup_snote2_single_text_window_t

0x80d2,	// (0x00049f07) popup_snote2_single_graphic_window_g1_ParamLimits

0x80d2,	// (0x00049f07) popup_snote2_single_graphic_window_g1

0x80fa,	// (0x00049f2f) popup_snote2_single_graphic_window_g2_ParamLimits

0x80fa,	// (0x00049f2f) popup_snote2_single_graphic_window_g2

0x0001,

0xfcae,	// (0x00051ae3) popup_snote2_single_graphic_window_g_ParamLimits

0xfcae,	// (0x00051ae3) popup_snote2_single_graphic_window_g

0x8122,	// (0x00049f57) popup_snote2_single_graphic_window_t1_ParamLimits

0x8122,	// (0x00049f57) popup_snote2_single_graphic_window_t1

0x816e,	// (0x00049fa3) popup_snote2_single_graphic_window_t2_ParamLimits

0x816e,	// (0x00049fa3) popup_snote2_single_graphic_window_t2

0x8030,	// (0x00049e65) popup_snote2_single_graphic_window_t3_ParamLimits

0x8030,	// (0x00049e65) popup_snote2_single_graphic_window_t3

0x8071,	// (0x00049ea6) popup_snote2_single_graphic_window_t4_ParamLimits

0x8071,	// (0x00049ea6) popup_snote2_single_graphic_window_t4

0x80a7,	// (0x00049edc) popup_snote2_single_graphic_window_t5_ParamLimits

0x80a7,	// (0x00049edc) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb3,	// (0x00051ae8) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb3,	// (0x00051ae8) popup_snote2_single_graphic_window_t

0x6c2e,	// (0x00048a63) clock_nsta_pane_cp2_t1

0x6c2e,	// (0x00048a63) clock_nsta_pane_cp2_t2

0x0001,

0xfad3,	// (0x00051908) clock_nsta_pane_cp2_t

0x015d,	// (0x00041f92) form_field_data_wide_pane_g1_ParamLimits

0x2fe4,	// (0x00044e19) form_field_data_wide_pane_g2_ParamLimits

0x2fe4,	// (0x00044e19) form_field_data_wide_pane_g2

0x2ff0,	// (0x00044e25) form_field_data_wide_pane_g3_ParamLimits

0x2ff0,	// (0x00044e25) form_field_data_wide_pane_g3

0x0002,

0xf698,	// (0x000514cd) form_field_data_wide_pane_g_ParamLimits

0xf698,	// (0x000514cd) form_field_data_wide_pane_g

0xdb2d,	// (0x0004f962) grid_touch_3_pane_ParamLimits

0xdb2d,	// (0x0004f962) grid_touch_3_pane

0xe0c0,	// (0x0004fef5) cell_touch_3_pane_ParamLimits

0xe0c0,	// (0x0004fef5) cell_touch_3_pane

0x70d1,	// (0x00048f06) cell_touch_3_pane_g1

0x70d1,	// (0x00048f06) cell_touch_3_pane_g2

0x0001,

0xfb58,	// (0x0005198d) cell_touch_3_pane_g

0x2a77,	// (0x000448ac) cont_query_data_pane

0x2a7f,	// (0x000448b4) cont_query_data_pane_cp1

0x81ed,	// (0x0004a022) button_value_adjust_pane_cp7

0x81f5,	// (0x0004a02a) query_popup_pane_cp3

0x372f,	// (0x00045564) bg_popup_sub_pane_cp22_ParamLimits

0x1068,	// (0x00042e9d) navi_navi_volume_pane_cp2

0x1083,	// (0x00042eb8) popup_side_volume_key_window_g2

0x1092,	// (0x00042ec7) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x00051563) popup_side_volume_key_window_g

0x10af,	// (0x00042ee4) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x0005156a) popup_side_volume_key_window_t

0x39ea,	// (0x0004581f) popup_side_volume_key_window_ParamLimits

0xb0bb,	// (0x0004cef0) list_double_graphic_pane_g4_ParamLimits

0xb0bb,	// (0x0004cef0) list_double_graphic_pane_g4

0xc3c8,	// (0x0004e1fd) list_single_2heading_msg_pane_ParamLimits

0xc3c8,	// (0x0004e1fd) list_single_2heading_msg_pane

0xc43b,	// (0x0004e270) list_single_2heading_msg_pane_g1_ParamLimits

0xc43b,	// (0x0004e270) list_single_2heading_msg_pane_g1

0xc447,	// (0x0004e27c) list_single_2heading_msg_pane_g2_ParamLimits

0xc447,	// (0x0004e27c) list_single_2heading_msg_pane_g2

0xc45a,	// (0x0004e28f) list_single_2heading_msg_pane_g3_ParamLimits

0xc45a,	// (0x0004e28f) list_single_2heading_msg_pane_g3

0xc466,	// (0x0004e29b) list_single_2heading_msg_pane_g4_ParamLimits

0xc466,	// (0x0004e29b) list_single_2heading_msg_pane_g4

0x0003,

0xfcbe,	// (0x00051af3) list_single_2heading_msg_pane_g_ParamLimits

0xfcbe,	// (0x00051af3) list_single_2heading_msg_pane_g

0xb648,	// (0x0004d47d) list_single_2heading_msg_pane_t1_ParamLimits

0xb648,	// (0x0004d47d) list_single_2heading_msg_pane_t1

0xb670,	// (0x0004d4a5) list_single_2heading_msg_pane_t2_ParamLimits

0xb670,	// (0x0004d4a5) list_single_2heading_msg_pane_t2

0xb6db,	// (0x0004d510) list_single_2heading_msg_pane_t3_ParamLimits

0xb6db,	// (0x0004d510) list_single_2heading_msg_pane_t3

0x08a1,	// (0x000426d6) list_single_2heading_msg_pane_t4_ParamLimits

0x08a1,	// (0x000426d6) list_single_2heading_msg_pane_t4

0x0003,

0xfcc7,	// (0x00051afc) list_single_2heading_msg_pane_t_ParamLimits

0xfcc7,	// (0x00051afc) list_single_2heading_msg_pane_t

0xda91,	// (0x0004f8c6) title_pane_g4_ParamLimits

0xda91,	// (0x0004f8c6) title_pane_g4

0x0e74,	// (0x00042ca9) title_pane_stacon_g3_ParamLimits

0x0e74,	// (0x00042ca9) title_pane_stacon_g3

0x7d16,	// (0x00049b4b) list_single_2graphic_im_pane_g4_ParamLimits

0x7d16,	// (0x00049b4b) list_single_2graphic_im_pane_g4

0x5bfe,	// (0x00047a33) popup_side_volume_key_window_cp

0x6474,	// (0x000482a9) main_idle_act2_pane_t1

0x1458,	// (0x0004328d) toolbar_button_pane_g10

0xbcf0,	// (0x0004db25) popup_toolbar_window_cp1

0x6c1f,	// (0x00048a54) clock_nsta_pane_cp_t1

0x6c1f,	// (0x00048a54) clock_nsta_pane_cp_t2

0x0001,

0xface,	// (0x00051903) clock_nsta_pane_cp_t

0x1068,	// (0x00042e9d) navi_navi_volume_pane_cp2_ParamLimits

0x1077,	// (0x00042eac) popup_side_volume_key_window_g1_ParamLimits

0x1083,	// (0x00042eb8) popup_side_volume_key_window_g2_ParamLimits

0x1092,	// (0x00042ec7) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x00051563) popup_side_volume_key_window_g_ParamLimits

0x195d,	// (0x00043792) fep_hwr_aid_pane

0xdd67,	// (0x0004fb9c) bg_fep_hwr_top_pane_g4_ParamLimits

0x7141,	// (0x00048f76) fep_hwr_top_pane_g1_ParamLimits

0x7153,	// (0x00048f88) fep_hwr_top_pane_g2_ParamLimits

0x1a18,	// (0x0004384d) fep_hwr_top_pane_g3_ParamLimits

0xfb23,	// (0x00051958) fep_hwr_top_pane_g_ParamLimits

0x1a2d,	// (0x00043862) fep_hwr_top_text_pane_ParamLimits

0x59b3,	// (0x000477e8) aid_touch_tab_arrow_arrow_2

0x59bc,	// (0x000477f1) aid_touch_tab_arrow_left_2

0x1971,	// (0x000437a6) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x19a8,	// (0x000437dd) fep_hwr_prediction_pane

0x72a9,	// (0x000490de) fep_vkb_prediction_pane

0xde93,	// (0x0004fcc8) fep_vkb_side_pane_g3_ParamLimits

0xde93,	// (0x0004fcc8) fep_vkb_side_pane_g3

0x735b,	// (0x00049190) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7809,	// (0x0004963e) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7816,	// (0x0004964b) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbcd,	// (0x00051a02) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x821c,	// (0x0004a051) fep_hwr_prediction_pane_g1

0x1d9b,	// (0x00043bd0) fep_hwr_prediction_pane_g2

0x1da3,	// (0x00043bd8) fep_hwr_prediction_pane_g3

0x1dab,	// (0x00043be0) fep_hwr_prediction_pane_g4

0x0003,

0xfcd0,	// (0x00051b05) fep_hwr_prediction_pane_g

0x821c,	// (0x0004a051) fep_vkb_prediction_pane_g1

0x8226,	// (0x0004a05b) fep_vkb_prediction_pane_g2

0x822e,	// (0x0004a063) fep_vkb_prediction_pane_g3

0x8236,	// (0x0004a06b) fep_vkb_prediction_pane_g4

0x0003,

0xfcd9,	// (0x00051b0e) fep_vkb_prediction_pane_g

0x174d,	// (0x00043582) slider_set_pane_g3

0x1761,	// (0x00043596) slider_set_pane_g4

0x1779,	// (0x000435ae) slider_set_pane_g5

0x174d,	// (0x00043582) slider_set_pane_g6

0x178f,	// (0x000435c4) slider_set_pane_g7

0x60ac,	// (0x00047ee1) slider_form_pane_g3

0x60b5,	// (0x00047eea) slider_form_pane_g4

0x60bd,	// (0x00047ef2) slider_form_pane_g5

0x60ac,	// (0x00047ee1) slider_form_pane_g6

0xd97d,	// (0x0004f7b2) slider_form_pane_g7

0x6742,	// (0x00048577) slider_set_pane_vc_g3

0x674b,	// (0x00048580) slider_set_pane_vc_g4

0x6754,	// (0x00048589) slider_set_pane_vc_g5

0x6742,	// (0x00048577) slider_set_pane_vc_g6

0x675d,	// (0x00048592) slider_set_pane_vc_g7

0x6742,	// (0x00048577) slider_form_pane_vc_g1

0x674b,	// (0x00048580) slider_form_pane_vc_g2

0x6754,	// (0x00048589) slider_form_pane_vc_g3

0x6742,	// (0x00048577) slider_form_pane_vc_g4

0x6912,	// (0x00048747) slider_form_pane_vc_g5

0x0004,

0xfaa7,	// (0x000518dc) slider_form_pane_vc_g

0xda73,	// (0x0004f8a8) main_idle_act3_pane

0x823e,	// (0x0004a073) ai3_links_pane

0xe10a,	// (0x0004ff3f) popup_ai3_data_window_ParamLimits

0xe10a,	// (0x0004ff3f) popup_ai3_data_window

0xda73,	// (0x0004f8a8) grid_ai3_links_pane

0xe128,	// (0x0004ff5d) cell_ai3_links_pane_ParamLimits

0xe128,	// (0x0004ff5d) cell_ai3_links_pane

0x827f,	// (0x0004a0b4) bg_popup_sub_pane_cp11

0x828c,	// (0x0004a0c1) cell_ai3_links_pane_g1

0xda73,	// (0x0004f8a8) bg_popup_sub_pane_cp12

0x82b1,	// (0x0004a0e6) heading_ai3_data_pane

0x82b9,	// (0x0004a0ee) list_ai3_gene_pane

0x82c5,	// (0x0004a0fa) popup_ai3_data_window_g1

0x82cd,	// (0x0004a102) heading_ai3_data_pane_g1

0x82d5,	// (0x0004a10a) heading_ai3_data_pane_t1

0x82e3,	// (0x0004a118) list_double_ai3_gene_pane_ParamLimits

0x82e3,	// (0x0004a118) list_double_ai3_gene_pane

0x82f0,	// (0x0004a125) list_single_ai3_gene_pane_ParamLimits

0x82f0,	// (0x0004a125) list_single_ai3_gene_pane

0x7096,	// (0x00048ecb) list_highlight_pane_cp7_ParamLimits

0x7096,	// (0x00048ecb) list_highlight_pane_cp7

0x82fd,	// (0x0004a132) list_single_a13_gene_pane_t1_ParamLimits

0x82fd,	// (0x0004a132) list_single_a13_gene_pane_t1

0x8314,	// (0x0004a149) list_single_ai3_gene_pane_g1

0x831d,	// (0x0004a152) list_single_ai3_gene_pane_g2

0x0001,

0xfce2,	// (0x00051b17) list_single_ai3_gene_pane_g

0x8325,	// (0x0004a15a) list_double_ai3_gene_pane_g1_ParamLimits

0x8325,	// (0x0004a15a) list_double_ai3_gene_pane_g1

0x8331,	// (0x0004a166) list_double_ai3_gene_pane_t1_ParamLimits

0x8331,	// (0x0004a166) list_double_ai3_gene_pane_t1

0x834d,	// (0x0004a182) list_double_ai3_gene_pane_t2_ParamLimits

0x834d,	// (0x0004a182) list_double_ai3_gene_pane_t2

0x8362,	// (0x0004a197) list_double_ai3_gene_pane_t3_ParamLimits

0x8362,	// (0x0004a197) list_double_ai3_gene_pane_t3

0x0002,

0xfce7,	// (0x00051b1c) list_double_ai3_gene_pane_t_ParamLimits

0xfce7,	// (0x00051b1c) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0807,	// (0x0004263c) aid_size_min_col_2

0xe0f4,	// (0x0004ff29) aid_size_min_msg_ParamLimits

0xe0f4,	// (0x0004ff29) aid_size_min_msg

0xdea7,	// (0x0004fcdc) fep_vkb_top_text_pane_g2_ParamLimits

0xdea7,	// (0x0004fcdc) fep_vkb_top_text_pane_g2

0x0001,

0xfb53,	// (0x00051988) fep_vkb_top_text_pane_g_ParamLimits

0xfb53,	// (0x00051988) fep_vkb_top_text_pane_g

0xda73,	// (0x0004f8a8) main_hc_apps_shell_pane

0x837f,	// (0x0004a1b4) grid_hc_apps_pane_ParamLimits

0x837f,	// (0x0004a1b4) grid_hc_apps_pane

0x838e,	// (0x0004a1c3) list_hc_apps_pane

0x8396,	// (0x0004a1cb) scroll_pane_cp37_ParamLimits

0x8396,	// (0x0004a1cb) scroll_pane_cp37

0xe142,	// (0x0004ff77) cell_hc_apps_pane_ParamLimits

0xe142,	// (0x0004ff77) cell_hc_apps_pane

0xe20c,	// (0x00050041) cell_hc_apps_pane_g1_ParamLimits

0xe20c,	// (0x00050041) cell_hc_apps_pane_g1

0x848b,	// (0x0004a2c0) cell_hc_apps_pane_g2_ParamLimits

0x848b,	// (0x0004a2c0) cell_hc_apps_pane_g2

0x84a7,	// (0x0004a2dc) cell_hc_apps_pane_g3_ParamLimits

0x84a7,	// (0x0004a2dc) cell_hc_apps_pane_g3

0x0002,

0xfcee,	// (0x00051b23) cell_hc_apps_pane_g_ParamLimits

0xfcee,	// (0x00051b23) cell_hc_apps_pane_g

0xe239,	// (0x0005006e) cell_hc_apps_pane_t1_ParamLimits

0xe239,	// (0x0005006e) cell_hc_apps_pane_t1

0x29c1,	// (0x000447f6) grid_highlight_pane_cp10_ParamLimits

0x29c1,	// (0x000447f6) grid_highlight_pane_cp10

0xe279,	// (0x000500ae) list_single_hc_apps_pane_ParamLimits

0xe279,	// (0x000500ae) list_single_hc_apps_pane

0xe2b3,	// (0x000500e8) list_single_hc_apps_pane_g1

0xc47e,	// (0x0004e2b3) list_single_hc_apps_pane_g2

0x0001,

0xfcf5,	// (0x00051b2a) list_single_hc_apps_pane_g

0xc497,	// (0x0004e2cc) list_single_hc_apps_pane_g2_copy1

0xb749,	// (0x0004d57e) list_single_hc_apps_pane_t1

0x2737,	// (0x0004456c) bg_set_opt_pane_cp_ParamLimits

0x0cf5,	// (0x00042b2a) setting_slider_pane_t1_ParamLimits

0x0d0b,	// (0x00042b40) setting_slider_pane_t2_ParamLimits

0x0d25,	// (0x00042b5a) setting_slider_pane_t3_ParamLimits

0xf576,	// (0x000513ab) setting_slider_pane_t_ParamLimits

0x0d3d,	// (0x00042b72) slider_set_pane_ParamLimits

0x1334,	// (0x00043169) control_pane_g5_ParamLimits

0x1334,	// (0x00043169) control_pane_g5

0x5ecd,	// (0x00047d02) slider_set_pane_g1_ParamLimits

0x1741,	// (0x00043576) slider_set_pane_g2_ParamLimits

0x174d,	// (0x00043582) slider_set_pane_g3_ParamLimits

0x1761,	// (0x00043596) slider_set_pane_g4_ParamLimits

0x1779,	// (0x000435ae) slider_set_pane_g5_ParamLimits

0x174d,	// (0x00043582) slider_set_pane_g6_ParamLimits

0x178f,	// (0x000435c4) slider_set_pane_g7_ParamLimits

0xf975,	// (0x000517aa) slider_set_pane_g_ParamLimits

0x3acf,	// (0x00045904) navi_icon_text_pane_ParamLimits

0xd12f,	// (0x0004ef64) aid_fill_nsta_2_ParamLimits

0xd168,	// (0x0004ef9d) aid_touch_tab_arrow_left_ParamLimits

0xd17c,	// (0x0004efb1) aid_touch_tab_arrow_right_ParamLimits

0xd217,	// (0x0004f04c) clock_nsta_pane_ParamLimits

0xd6cc,	// (0x0004f501) navi_icon_pane_g1_ParamLimits

0xd6d8,	// (0x0004f50d) navi_text_pane_t1_ParamLimits

0xdc07,	// (0x0004fa3c) navi_icon_text_pane_g1_ParamLimits

0xdc13,	// (0x0004fa48) navi_icon_text_pane_t1_ParamLimits

0xe2b3,	// (0x000500e8) list_single_hc_apps_pane_g1_ParamLimits

0xc47e,	// (0x0004e2b3) list_single_hc_apps_pane_g2_ParamLimits

0xfcf5,	// (0x00051b2a) list_single_hc_apps_pane_g_ParamLimits

0xc497,	// (0x0004e2cc) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb749,	// (0x0004d57e) list_single_hc_apps_pane_t1_ParamLimits

0xb8cd,	// (0x0004d702) popup_toolbar2_fixed_window_ParamLimits

0xb8cd,	// (0x0004d702) popup_toolbar2_fixed_window

0xd094,	// (0x0004eec9) popup_toolbar2_float_window

0xda73,	// (0x0004f8a8) bg_popup_sub_pane_cp27

0x8561,	// (0x0004a396) grid_toolbar2_float_pane

0xda73,	// (0x0004f8a8) bg_popup_sub_pane_cp26

0x8561,	// (0x0004a396) grid_toolbar2_fixed_pane

0xe2cc,	// (0x00050101) cell_toolbar2_fixed_pane_ParamLimits

0xe2cc,	// (0x00050101) cell_toolbar2_fixed_pane

0xe2e9,	// (0x0005011e) cell_toolbar2_fixed_pane_g1

0x8582,	// (0x0004a3b7) toolbar2_fixed_button_pane

0x4b0e,	// (0x00046943) toolbar2_fixed_button_pane_g1

0x4b16,	// (0x0004694b) toolbar2_fixed_button_pane_g2

0x4b1e,	// (0x00046953) toolbar2_fixed_button_pane_g3

0x4b26,	// (0x0004695b) toolbar2_fixed_button_pane_g4

0x4b2e,	// (0x00046963) toolbar2_fixed_button_pane_g5

0x4b36,	// (0x0004696b) toolbar2_fixed_button_pane_g6

0x4b3e,	// (0x00046973) toolbar2_fixed_button_pane_g7

0x4b46,	// (0x0004697b) toolbar2_fixed_button_pane_g8

0x4b4e,	// (0x00046983) toolbar2_fixed_button_pane_g9

0x0008,

0xf877,	// (0x000516ac) toolbar2_fixed_button_pane_g

0x858a,	// (0x0004a3bf) cell_toolbar2_float_pane_ParamLimits

0x858a,	// (0x0004a3bf) cell_toolbar2_float_pane

0x859b,	// (0x0004a3d0) cell_toolbar2_float_pane_g1

0x8582,	// (0x0004a3b7) toolbar2_fixed_button_pane_cp

0xdd8f,	// (0x0004fbc4) fep_vkb_accented_list_pane_ParamLimits

0xdd8f,	// (0x0004fbc4) fep_vkb_accented_list_pane

0x1b8f,	// (0x000439c4) bg_popup_fep_shadow_pane_g9

0x3c53,	// (0x00045a88) bg_popup_fep_shadow_pane_cp3

0x3133,	// (0x00044f68) list_accented_list_pane

0x85a4,	// (0x0004a3d9) list_single_accented_list_pane_ParamLimits

0x85a4,	// (0x0004a3d9) list_single_accented_list_pane

0x3c53,	// (0x00045a88) list_highlight_pane_cp10

0x85b5,	// (0x0004a3ea) list_single_accented_list_pane_t1

0xcfb0,	// (0x0004ede5) popup_slider_window_ParamLimits

0xcfb0,	// (0x0004ede5) popup_slider_window

0x81fd,	// (0x0004a032) aid_indentation_list_msg

0xe3f4,	// (0x00050229) bg_popup_window_pane_cp19

0x86ef,	// (0x0004a524) popup_slider_window_g1

0x870b,	// (0x0004a540) popup_slider_window_g2

0x8727,	// (0x0004a55c) popup_slider_window_g3

0x0005,

0xfcfa,	// (0x00051b2f) popup_slider_window_g

0x8783,	// (0x0004a5b8) popup_slider_window_t1

0x87f7,	// (0x0004a62c) small_volume_slider_vertical_pane

0x70d1,	// (0x00048f06) small_volume_slider_vertical_pane_g1

0x70d1,	// (0x00048f06) small_volume_slider_vertical_pane_g2

0x8813,	// (0x0004a648) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0c,	// (0x00051b41) small_volume_slider_vertical_pane_g

0xb837,	// (0x0004d66c) area_side_right_pane_ParamLimits

0xb837,	// (0x0004d66c) area_side_right_pane

0xc4b3,	// (0x0004e2e8) aid_size_side_button_ParamLimits

0xc4b3,	// (0x0004e2e8) aid_size_side_button

0xc4cc,	// (0x0004e301) grid_sctrl_middle_pane_ParamLimits

0xc4cc,	// (0x0004e301) grid_sctrl_middle_pane

0x1e1c,	// (0x00043c51) sctrl_sk_bottom_pane

0x1e2d,	// (0x00043c62) sctrl_sk_top_pane

0x1e3f,	// (0x00043c74) aid_touch_sctrl_top

0x29c1,	// (0x000447f6) bg_sctrl_sk_pane_ParamLimits

0x29c1,	// (0x000447f6) bg_sctrl_sk_pane

0x1e4c,	// (0x00043c81) sctrl_sk_top_pane_g1

0x1e59,	// (0x00043c8e) sctrl_sk_top_pane_t1

0x1e3f,	// (0x00043c74) aid_touch_sctrl_bottom

0x29c1,	// (0x000447f6) bg_sctrl_sk_pane_cp_ParamLimits

0x29c1,	// (0x000447f6) bg_sctrl_sk_pane_cp

0x1e74,	// (0x00043ca9) sctrl_sk_bottom_pane_g1

0x1e59,	// (0x00043c8e) sctrl_sk_bottom_pane_t1

0xc4e6,	// (0x0004e31b) cell_sctrl_middle_pane_ParamLimits

0xc4e6,	// (0x0004e31b) cell_sctrl_middle_pane

0xc4f9,	// (0x0004e32e) aid_touch_sctrl_middle_ParamLimits

0xc4f9,	// (0x0004e32e) aid_touch_sctrl_middle

0xc506,	// (0x0004e33b) bg_sctrl_middle_pane_ParamLimits

0xc506,	// (0x0004e33b) bg_sctrl_middle_pane

0x889e,	// (0x0004a6d3) cell_sctrl_middle_pane_g1_ParamLimits

0x889e,	// (0x0004a6d3) cell_sctrl_middle_pane_g1

0xc514,	// (0x0004e349) cell_sctrl_middle_pane_g2_ParamLimits

0xc514,	// (0x0004e349) cell_sctrl_middle_pane_g2

0x0001,

0xfd18,	// (0x00051b4d) cell_sctrl_middle_pane_g_ParamLimits

0xfd18,	// (0x00051b4d) cell_sctrl_middle_pane_g

0x4b0e,	// (0x00046943) bg_sctrl_middle_pane_g1

0x4b16,	// (0x0004694b) bg_sctrl_middle_pane_g2

0x4b1e,	// (0x00046953) bg_sctrl_middle_pane_g3

0x4b26,	// (0x0004695b) bg_sctrl_middle_pane_g4

0x4b2e,	// (0x00046963) bg_sctrl_middle_pane_g5

0x4b36,	// (0x0004696b) bg_sctrl_middle_pane_g6

0x4b3e,	// (0x00046973) bg_sctrl_middle_pane_g7

0x4b46,	// (0x0004697b) bg_sctrl_middle_pane_g8

0x0007,

0xfd1d,	// (0x00051b52) bg_sctrl_middle_pane_g

0x4b4e,	// (0x00046983) bg_sctrl_middle_pane_g8_copy1

0x4b0e,	// (0x00046943) bg_sctrl_sk_pane_g1

0x4b16,	// (0x0004694b) bg_sctrl_sk_pane_g2

0x4b1e,	// (0x00046953) bg_sctrl_sk_pane_g3

0x0008,

0xf877,	// (0x000516ac) bg_sctrl_sk_pane_g

0x2eed,	// (0x00044d22) aid_size_touch_scroll_bar

0x4b26,	// (0x0004695b) bg_sctrl_sk_pane_g4

0x4b2e,	// (0x00046963) bg_sctrl_sk_pane_g5

0x4b36,	// (0x0004696b) bg_sctrl_sk_pane_g6

0x4b3e,	// (0x00046973) bg_sctrl_sk_pane_g7

0x4b46,	// (0x0004697b) bg_sctrl_sk_pane_g8

0x4b4e,	// (0x00046983) bg_sctrl_sk_pane_g9

0x407b,	// (0x00045eb0) popup_fep_china_hwr2_fs_candidate_window

0xca6c,	// (0x0004e8a1) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xca6c,	// (0x0004e8a1) popup_fep_china_hwr2_fs_control_window

0x735b,	// (0x00049190) sctrl_sk_top_pane_g2

0x0001,

0xfd13,	// (0x00051b48) sctrl_sk_top_pane_g

0xe4ac,	// (0x000502e1) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe4ac,	// (0x000502e1) aid_fep_china_hwr2_fs_cell

0xe4c2,	// (0x000502f7) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe4c2,	// (0x000502f7) bg_popup_fep_shadow_pane_cp4

0xe4d9,	// (0x0005030e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe4d9,	// (0x0005030e) bg_popup_fep_shadow_pane_cp5

0xe4eb,	// (0x00050320) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe4eb,	// (0x00050320) popup_fep_china_hwr2_fs_control_bar_grid

0xe4ff,	// (0x00050334) popup_fep_china_hwr2_fs_control_funtion_grid

0x8872,	// (0x0004a6a7) aid_fep_china_hwr2_fs_candi_cell

0xda73,	// (0x0004f8a8) bg_popup_fep_shadow_pane_cp6

0x887c,	// (0x0004a6b1) popup_fep_china_hwr2_fs_candidate_grid

0xe507,	// (0x0005033c) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe507,	// (0x0005033c) cell_fep_china_hwr2_fs_funtion_grid

0x70d1,	// (0x00048f06) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x889e,	// (0x0004a6d3) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x889e,	// (0x0004a6d3) cell_fep_china_hwr2_fs_funtion_grid_g1

0x88ac,	// (0x0004a6e1) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x88ac,	// (0x0004a6e1) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2e,	// (0x00051b63) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2e,	// (0x00051b63) cell_fep_china_hwr2_fs_funtion_grid_g

0xe51f,	// (0x00050354) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe51f,	// (0x00050354) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe534,	// (0x00050369) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe534,	// (0x00050369) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd33,	// (0x00051b68) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd33,	// (0x00051b68) cell_fep_china_hwr2_fs_funtion_grid_t

0x88f3,	// (0x0004a728) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x88fb,	// (0x0004a730) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8903,	// (0x0004a738) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd38,	// (0x00051b6d) popup_fep_china_hwr2_fs_control_bar_grid_g

0x890b,	// (0x0004a740) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x890b,	// (0x0004a740) cell_fep_china_hwr2_fs_candidate_grid

0x892a,	// (0x0004a75f) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8932,	// (0x0004a767) popup_fep_china_hwr2_fs_candidate_grid_g21

0x70d1,	// (0x00048f06) cell_fep_china_hwr2_fs_candidate_grid_g1

0x70d1,	// (0x00048f06) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb58,	// (0x0005198d) cell_fep_china_hwr2_fs_candidate_grid_g

0x893a,	// (0x0004a76f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x46ea,	// (0x0004651f) clock_nsta_pane_cp_24_ParamLimits

0x46ea,	// (0x0004651f) clock_nsta_pane_cp_24

0x476a,	// (0x0004659f) indicator_nsta_pane_cp_24_ParamLimits

0x476a,	// (0x0004659f) indicator_nsta_pane_cp_24

0x580b,	// (0x00047640) heading_pane_g1

0x0001,

0xf8dc,	// (0x00051711) heading_pane_g

0x62bb,	// (0x000480f0) grid_sct_catagory_button_pane

0x62ed,	// (0x00048122) scroll_pane_cp5_ParamLimits

0x6d90,	// (0x00048bc5) button_value_adjust_pane_cp5_ParamLimits

0x6d90,	// (0x00048bc5) button_value_adjust_pane_cp5

0x6e6d,	// (0x00048ca2) form2_midp_time_pane_ParamLimits

0x8948,	// (0x0004a77d) cell_sct_catagory_button_pane_ParamLimits

0x8948,	// (0x0004a77d) cell_sct_catagory_button_pane

0x7096,	// (0x00048ecb) bg_button_pane_cp01_ParamLimits

0x7096,	// (0x00048ecb) bg_button_pane_cp01

0x70d1,	// (0x00048f06) cell_sct_catagory_button_pane_g1

0xd031,	// (0x0004ee66) popup_tb_extension_window

0xe550,	// (0x00050385) aid_size_cell_ext_ParamLimits

0xe550,	// (0x00050385) aid_size_cell_ext

0x2d2f,	// (0x00044b64) bg_tb_trans_pane_cp1_ParamLimits

0x2d2f,	// (0x00044b64) bg_tb_trans_pane_cp1

0xe576,	// (0x000503ab) grid_tb_ext_pane_ParamLimits

0xe576,	// (0x000503ab) grid_tb_ext_pane

0xe5b6,	// (0x000503eb) cell_tb_ext_pane_ParamLimits

0xe5b6,	// (0x000503eb) cell_tb_ext_pane

0xe5de,	// (0x00050413) cell_tb_ext_pane_g1_ParamLimits

0xe5de,	// (0x00050413) cell_tb_ext_pane_g1

0x89de,	// (0x0004a813) cell_tb_ext_pane_t1

0x29c1,	// (0x000447f6) list_highlight_pane_cp11_ParamLimits

0x29c1,	// (0x000447f6) list_highlight_pane_cp11

0x0c1e,	// (0x00042a53) popup_uni_indicator_window_ParamLimits

0x0c1e,	// (0x00042a53) popup_uni_indicator_window

0x2fca,	// (0x00044dff) bg_popup_sub_pane_cp14

0x89f9,	// (0x0004a82e) list_uniindi_pane

0x8a05,	// (0x0004a83a) uniindi_top_pane

0x29c1,	// (0x000447f6) bg_uniindi_top_pane

0x8a26,	// (0x0004a85b) uniindi_top_pane_g1

0x8a3c,	// (0x0004a871) uniindi_top_pane_g2

0x0003,

0xfd3f,	// (0x00051b74) uniindi_top_pane_g

0x8a66,	// (0x0004a89b) uniindi_top_pane_t1

0x8a92,	// (0x0004a8c7) list_single_uniindi_pane_ParamLimits

0x8a92,	// (0x0004a8c7) list_single_uniindi_pane

0x70d1,	// (0x00048f06) bg_uniindi_top_pane_g1

0x8aa4,	// (0x0004a8d9) list_single_uniindi_pane_g1

0x8ab7,	// (0x0004a8ec) list_single_uniindi_pane_t1

0xda73,	// (0x0004f8a8) control_bg_pane

0x8adc,	// (0x0004a911) bg_sctrl_sk_pane_cp1

0x8ae5,	// (0x0004a91a) bg_sctrl_sk_pane_cp2

0x8aee,	// (0x0004a923) control_bg_pane_g1

0x8af7,	// (0x0004a92c) control_bg_pane_g2

0x0001,

0xfd48,	// (0x00051b7d) control_bg_pane_g

0x6bb2,	// (0x000489e7) cell_indicator_nsta_pane_g1_ParamLimits

0xdb60,	// (0x0004f995) cell_indicator_nsta_pane_g2_ParamLimits

0xfabc,	// (0x000518f1) cell_indicator_nsta_pane_g_ParamLimits

0x0668,	// (0x0004249d) form2_midp_time_pane_t1_ParamLimits

0xc9e2,	// (0x0004e817) main_idle_act4_pane_ParamLimits

0xc9e2,	// (0x0004e817) main_idle_act4_pane

0xd031,	// (0x0004ee66) popup_tb_extension_window_ParamLimits

0xe59e,	// (0x000503d3) tb_ext_find_pane_ParamLimits

0xe59e,	// (0x000503d3) tb_ext_find_pane

0x8b00,	// (0x0004a935) ai_gene_pane_1_cp1

0x3d9c,	// (0x00045bd1) ai_gene_pane_2_cp1

0x8b08,	// (0x0004a93d) list_single_idle_plugin_calendar_pane

0x8b11,	// (0x0004a946) list_single_idle_plugin_notification_pane

0x8b1a,	// (0x0004a94f) list_single_idle_plugin_player_pane

0xe5fb,	// (0x00050430) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe5fb,	// (0x00050430) list_single_idle_plugin_shortcut_pane

0xe623,	// (0x00050458) main_idle_act4_pane_t1

0xe63b,	// (0x00050470) main_idle_act4_pane_t2

0x0001,

0xfd4d,	// (0x00051b82) main_idle_act4_pane_t

0xe653,	// (0x00050488) middle_sk_idle_act4_pane_ParamLimits

0xe653,	// (0x00050488) middle_sk_idle_act4_pane

0xe66f,	// (0x000504a4) popup_clock_digital_analogue_window_cp2

0xe696,	// (0x000504cb) shortcut_wheel_idle_act4_pane_ParamLimits

0xe696,	// (0x000504cb) shortcut_wheel_idle_act4_pane

0x70d1,	// (0x00048f06) shortcut_wheel_idle_act4_pane_g1

0x70d1,	// (0x00048f06) shortcut_wheel_idle_act4_pane_g2

0x70d1,	// (0x00048f06) shortcut_wheel_idle_act4_pane_g3

0x70d1,	// (0x00048f06) shortcut_wheel_idle_act4_pane_g4

0x70d1,	// (0x00048f06) shortcut_wheel_idle_act4_pane_g5

0x8bad,	// (0x0004a9e2) shortcut_wheel_idle_act4_pane_g6

0x8bb5,	// (0x0004a9ea) shortcut_wheel_idle_act4_pane_g7

0x8bbd,	// (0x0004a9f2) shortcut_wheel_idle_act4_pane_g8

0x8bc5,	// (0x0004a9fa) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd52,	// (0x00051b87) shortcut_wheel_idle_act4_pane_g

0xdd67,	// (0x0004fb9c) middle_sk_idle_act4_pane_g1_ParamLimits

0xdd67,	// (0x0004fb9c) middle_sk_idle_act4_pane_g1

0xe713,	// (0x00050548) middle_sk_idle_act4_pane_g2_ParamLimits

0xe713,	// (0x00050548) middle_sk_idle_act4_pane_g2

0x0001,

0xfd75,	// (0x00051baa) middle_sk_idle_act4_pane_g_ParamLimits

0xfd75,	// (0x00051baa) middle_sk_idle_act4_pane_g

0xe72b,	// (0x00050560) middle_sk_idle_act4_pane_t1_ParamLimits

0xe72b,	// (0x00050560) middle_sk_idle_act4_pane_t1

0xe75a,	// (0x0005058f) grid_ai_shortcut_pane_ParamLimits

0xe75a,	// (0x0005058f) grid_ai_shortcut_pane

0xe777,	// (0x000505ac) list_highlight_pane_cp16_ParamLimits

0xe777,	// (0x000505ac) list_highlight_pane_cp16

0xe784,	// (0x000505b9) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe784,	// (0x000505b9) list_single_idle_plugin_shortcut_pane_g1

0xe790,	// (0x000505c5) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe790,	// (0x000505c5) list_single_idle_plugin_shortcut_pane_g2

0xe7ae,	// (0x000505e3) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe7ae,	// (0x000505e3) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7a,	// (0x00051baf) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7a,	// (0x00051baf) list_single_idle_plugin_shortcut_pane_g

0xe7c3,	// (0x000505f8) cell_ai_shortcut_pane_ParamLimits

0xe7c3,	// (0x000505f8) cell_ai_shortcut_pane

0xe7d9,	// (0x0005060e) cell_ai_shortcut_pane_g1_ParamLimits

0xe7d9,	// (0x0005060e) cell_ai_shortcut_pane_g1

0x8b00,	// (0x0004a935) ai_gene_pane_1_cp2

0x8cf6,	// (0x0004ab2b) ai_gene_pane_2_cp2

0x8cfe,	// (0x0004ab33) list_highlight_pane_cp15

0x8d07,	// (0x0004ab3c) list_single_idle_plugin_calendar_pane_g1

0x8cfe,	// (0x0004ab33) list_highlight_pane_cp17

0x8d0f,	// (0x0004ab44) list_single_idle_plugin_calendar_pane_g1_copy1

0x8d17,	// (0x0004ab4c) list_single_idle_plugin_player_pane_g1

0x6522,	// (0x00048357) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd81,	// (0x00051bb6) list_single_idle_plugin_player_pane_g

0x8d1f,	// (0x0004ab54) list_single_idle_plugin_player_pane_t1

0x8d2d,	// (0x0004ab62) list_single_idle_plugin_player_pane_t2

0x8d3b,	// (0x0004ab70) list_single_idle_plugin_player_pane_t3

0x8d49,	// (0x0004ab7e) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd86,	// (0x00051bbb) list_single_idle_plugin_player_pane_t

0x8d57,	// (0x0004ab8c) wait_bar_pane_cp15

0x8d5f,	// (0x0004ab94) grid_ai_notification_pane

0x6522,	// (0x00048357) list_single_idle_plugin_notification_pane_g1

0xe7fb,	// (0x00050630) cell_ai_notification_pane_ParamLimits

0xe7fb,	// (0x00050630) cell_ai_notification_pane

0x8d75,	// (0x0004abaa) cell_ai_notification_pane_g1

0x8d7d,	// (0x0004abb2) cell_ai_notification_pane_t1

0xe808,	// (0x0005063d) tb_ext_find_button_pane

0xe810,	// (0x00050645) tb_ext_find_pane_g1

0xe818,	// (0x0005064d) tb_ext_find_pane_t1

0x363a,	// (0x0004546f) tb_ext_find_button_pane_g1

0x8da9,	// (0x0004abde) tb_ext_find_button_pane_g2

0x0001,

0xfd8f,	// (0x00051bc4) tb_ext_find_button_pane_g

0xe623,	// (0x00050458) main_idle_act4_pane_t1_ParamLimits

0xe63b,	// (0x00050470) main_idle_act4_pane_t2_ParamLimits

0xfd4d,	// (0x00051b82) main_idle_act4_pane_t_ParamLimits

0xe66f,	// (0x000504a4) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe686,	// (0x000504bb) sat_plugin_idle_act4_pane_ParamLimits

0xe686,	// (0x000504bb) sat_plugin_idle_act4_pane

0xe826,	// (0x0005065b) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe826,	// (0x0005065b) sat_plugin_idle_act4_pane_t1

0xe83e,	// (0x00050673) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe83e,	// (0x00050673) sat_plugin_idle_act4_pane_t2

0xe856,	// (0x0005068b) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe856,	// (0x0005068b) sat_plugin_idle_act4_pane_t3

0xe86e,	// (0x000506a3) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe86e,	// (0x000506a3) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd94,	// (0x00051bc9) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd94,	// (0x00051bc9) sat_plugin_idle_act4_pane_t

0x0b4f,	// (0x00042984) popup_battery_window_ParamLimits

0x0b4f,	// (0x00042984) popup_battery_window

0x29c1,	// (0x000447f6) bg_popup_sub_pane_cp25_ParamLimits

0x29c1,	// (0x000447f6) bg_popup_sub_pane_cp25

0x8dfe,	// (0x0004ac33) popup_battery_window_g1_ParamLimits

0x8dfe,	// (0x0004ac33) popup_battery_window_g1

0x8e0a,	// (0x0004ac3f) popup_battery_window_t1_ParamLimits

0x8e0a,	// (0x0004ac3f) popup_battery_window_t1

0x8e1c,	// (0x0004ac51) popup_battery_window_t2_ParamLimits

0x8e1c,	// (0x0004ac51) popup_battery_window_t2

0x0001,

0xfd9d,	// (0x00051bd2) popup_battery_window_t_ParamLimits

0xfd9d,	// (0x00051bd2) popup_battery_window_t

0xc8f2,	// (0x0004e727) midp_canvas_pane_ParamLimits

0xc94d,	// (0x0004e782) midp_keypad_pane_ParamLimits

0xc94d,	// (0x0004e782) midp_keypad_pane

0x3fd1,	// (0x00045e06) main_midp_pane_ParamLimits

0x6c3d,	// (0x00048a72) signal_pane_g2_cp_ParamLimits

0xe886,	// (0x000506bb) aid_size_cell_midp_keypad_ParamLimits

0xe886,	// (0x000506bb) aid_size_cell_midp_keypad

0xe8a4,	// (0x000506d9) midp_keyp_game_grid_pane_ParamLimits

0xe8a4,	// (0x000506d9) midp_keyp_game_grid_pane

0xe8cb,	// (0x00050700) midp_keyp_rocker_pane_ParamLimits

0xe8cb,	// (0x00050700) midp_keyp_rocker_pane

0xe910,	// (0x00050745) midp_keyp_sk_left_pane_ParamLimits

0xe910,	// (0x00050745) midp_keyp_sk_left_pane

0xe964,	// (0x00050799) midp_keyp_sk_right_pane_ParamLimits

0xe964,	// (0x00050799) midp_keyp_sk_right_pane

0xda73,	// (0x0004f8a8) bg_button_pane_cp03

0xe9b8,	// (0x000507ed) midp_keyp_sk_left_pane_g1

0xda73,	// (0x0004f8a8) bg_button_pane_cp04

0xe9b8,	// (0x000507ed) midp_keyp_sk_right_pane_g1

0x70d1,	// (0x00048f06) midp_keyp_rocker_pane_g1

0xe9c1,	// (0x000507f6) keyp_game_cell_pane_ParamLimits

0xe9c1,	// (0x000507f6) keyp_game_cell_pane

0xda73,	// (0x0004f8a8) bg_button_pane_cp02

0xe9e7,	// (0x0005081c) keyp_game_cell_pane_g1

0xb879,	// (0x0004d6ae) popup_fep_vkb2_window_ParamLimits

0xb879,	// (0x0004d6ae) popup_fep_vkb2_window

0xc520,	// (0x0004e355) aid_size_cell_vkb2_ParamLimits

0xc520,	// (0x0004e355) aid_size_cell_vkb2

0xc54e,	// (0x0004e383) popup_fep_vkb2_window_g1_ParamLimits

0xc54e,	// (0x0004e383) popup_fep_vkb2_window_g1

0xc59e,	// (0x0004e3d3) vkb2_area_bottom_pane_ParamLimits

0xc59e,	// (0x0004e3d3) vkb2_area_bottom_pane

0xc5fa,	// (0x0004e42f) vkb2_area_keypad_pane_ParamLimits

0xc5fa,	// (0x0004e42f) vkb2_area_keypad_pane

0xc648,	// (0x0004e47d) vkb2_area_top_pane_ParamLimits

0xc648,	// (0x0004e47d) vkb2_area_top_pane

0xc6ce,	// (0x0004e503) vkb2_top_entry_pane_ParamLimits

0xc6ce,	// (0x0004e503) vkb2_top_entry_pane

0xc6fb,	// (0x0004e530) vkb2_top_grid_left_pane_ParamLimits

0xc6fb,	// (0x0004e530) vkb2_top_grid_left_pane

0xc71b,	// (0x0004e550) vkb2_top_grid_right_pane_ParamLimits

0xc71b,	// (0x0004e550) vkb2_top_grid_right_pane

0x20dc,	// (0x00043f11) vkb2_cell_keypad_pane_ParamLimits

0x20dc,	// (0x00043f11) vkb2_cell_keypad_pane

0xc761,	// (0x0004e596) vkb2_area_bottom_grid_pane_ParamLimits

0xc761,	// (0x0004e596) vkb2_area_bottom_grid_pane

0xc78b,	// (0x0004e5c0) vkb2_area_bottom_pane_g1_ParamLimits

0xc78b,	// (0x0004e5c0) vkb2_area_bottom_pane_g1

0xc7b1,	// (0x0004e5e6) vkb2_area_bottom_pane_g2_ParamLimits

0xc7b1,	// (0x0004e5e6) vkb2_area_bottom_pane_g2

0xc7e2,	// (0x0004e617) vkb2_area_bottom_pane_g3_ParamLimits

0xc7e2,	// (0x0004e617) vkb2_area_bottom_pane_g3

0x0002,

0xfda2,	// (0x00051bd7) vkb2_area_bottom_pane_g_ParamLimits

0xfda2,	// (0x00051bd7) vkb2_area_bottom_pane_g

0x226b,	// (0x000440a0) vkb2_top_cell_left_pane_ParamLimits

0x226b,	// (0x000440a0) vkb2_top_cell_left_pane

0xe9f0,	// (0x00050825) vkb2_top_entry_pane_g1_ParamLimits

0xe9f0,	// (0x00050825) vkb2_top_entry_pane_g1

0xe9fe,	// (0x00050833) vkb2_top_entry_pane_t1_ParamLimits

0xe9fe,	// (0x00050833) vkb2_top_entry_pane_t1

0x8fa9,	// (0x0004adde) vkb2_top_entry_pane_t2_ParamLimits

0x8fa9,	// (0x0004adde) vkb2_top_entry_pane_t2

0x8fc1,	// (0x0004adf6) vkb2_top_entry_pane_t3_ParamLimits

0x8fc1,	// (0x0004adf6) vkb2_top_entry_pane_t3

0x0002,

0xfda9,	// (0x00051bde) vkb2_top_entry_pane_t_ParamLimits

0xfda9,	// (0x00051bde) vkb2_top_entry_pane_t

0xc84c,	// (0x0004e681) vkb2_top_grid_right_pane_g1_ParamLimits

0xc84c,	// (0x0004e681) vkb2_top_grid_right_pane_g1

0x22ce,	// (0x00044103) vkb2_top_grid_right_pane_g2_ParamLimits

0x22ce,	// (0x00044103) vkb2_top_grid_right_pane_g2

0x22e6,	// (0x0004411b) vkb2_top_grid_right_pane_g3_ParamLimits

0x22e6,	// (0x0004411b) vkb2_top_grid_right_pane_g3

0xc862,	// (0x0004e697) vkb2_top_grid_right_pane_g4_ParamLimits

0xc862,	// (0x0004e697) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb0,	// (0x00051be5) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb0,	// (0x00051be5) vkb2_top_grid_right_pane_g

0x2314,	// (0x00044149) vkb2_top_cell_left_pane_g1

0x232b,	// (0x00044160) vkb2_cell_keypad_pane_g1_ParamLimits

0x232b,	// (0x00044160) vkb2_cell_keypad_pane_g1

0x8fd7,	// (0x0004ae0c) vkb2_cell_keypad_pane_t1_ParamLimits

0x8fd7,	// (0x0004ae0c) vkb2_cell_keypad_pane_t1

0x234f,	// (0x00044184) vkb2_cell_bottom_grid_pane_ParamLimits

0x234f,	// (0x00044184) vkb2_cell_bottom_grid_pane

0x2388,	// (0x000441bd) vkb2_cell_bottom_grid_pane_g1

0xe6b7,	// (0x000504ec) aid_call2_pane_cp02

0xe6bf,	// (0x000504f4) aid_call_pane_cp02

0xe6c7,	// (0x000504fc) clock_digital_number_pane_cp10

0xe6cf,	// (0x00050504) clock_digital_number_pane_cp11

0xe6d7,	// (0x0005050c) clock_digital_number_pane_cp12

0xe6df,	// (0x00050514) clock_digital_number_pane_cp13

0xe6e7,	// (0x0005051c) clock_digital_separator_pane_cp10

0x363a,	// (0x0004546f) popup_clock_digital_analogue_window_cp2_g1

0x363a,	// (0x0004546f) popup_clock_digital_analogue_window_cp2_g2

0xe6ef,	// (0x00050524) popup_clock_digital_analogue_window_cp2_g3

0x363a,	// (0x0004546f) popup_clock_digital_analogue_window_cp2_g4

0xe6ef,	// (0x00050524) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd65,	// (0x00051b9a) popup_clock_digital_analogue_window_cp2_g

0xe6f7,	// (0x0005052c) popup_clock_digital_analogue_window_cp2_t1

0xe705,	// (0x0005053a) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd70,	// (0x00051ba5) popup_clock_digital_analogue_window_cp2_t

0x70d1,	// (0x00048f06) clock_digital_number_pane_cp10_g1

0x70d1,	// (0x00048f06) clock_digital_number_pane_cp10_g2

0x0001,

0xfb58,	// (0x0005198d) clock_digital_number_pane_cp10_g

0x70d1,	// (0x00048f06) clock_digital_separator_pane_cp10_g1

0x70d1,	// (0x00048f06) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb58,	// (0x0005198d) clock_digital_separator_pane_cp10_g

0x8a48,	// (0x0004a87d) uniindi_top_pane_g3

0x8a59,	// (0x0004a88e) uniindi_top_pane_g4

0x214c,	// (0x00043f81) vkb2_row_keypad_pane_ParamLimits

0x214c,	// (0x00043f81) vkb2_row_keypad_pane

0x23a4,	// (0x000441d9) vkb2_cell_t_keypad_pane_ParamLimits

0x23a4,	// (0x000441d9) vkb2_cell_t_keypad_pane

0x23b4,	// (0x000441e9) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x23b4,	// (0x000441e9) vkb2_cell_t_keypad_pane_cp08

0x23c9,	// (0x000441fe) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x23c9,	// (0x000441fe) vkb2_cell_t_keypad_pane_cp09

0x23dd,	// (0x00044212) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x23dd,	// (0x00044212) vkb2_cell_t_keypad_pane_cp01

0x23ee,	// (0x00044223) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x23ee,	// (0x00044223) vkb2_cell_t_keypad_pane_cp02

0x23ff,	// (0x00044234) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x23ff,	// (0x00044234) vkb2_cell_t_keypad_pane_cp03

0x2410,	// (0x00044245) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2410,	// (0x00044245) vkb2_cell_t_keypad_pane_cp04

0x2421,	// (0x00044256) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2421,	// (0x00044256) vkb2_cell_t_keypad_pane_cp05

0x2432,	// (0x00044267) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2432,	// (0x00044267) vkb2_cell_t_keypad_pane_cp06

0x2445,	// (0x0004427a) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2445,	// (0x0004427a) vkb2_cell_t_keypad_pane_cp07

0x245a,	// (0x0004428f) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x245a,	// (0x0004428f) vkb2_cell_t_keypad_pane_cp10

0x735b,	// (0x00049190) vkb2_cell_t_keypad_pane_g1

0x8fee,	// (0x0004ae23) vkb2_cell_t_keypad_pane_t1

0xda73,	// (0x0004f8a8) popup_grid_graphic2_window

0xea37,	// (0x0005086c) aid_size_cell_graphic2_ParamLimits

0xea37,	// (0x0005086c) aid_size_cell_graphic2

0xea75,	// (0x000508aa) bg_popup_window_pane_cp21_ParamLimits

0xea75,	// (0x000508aa) bg_popup_window_pane_cp21

0xea83,	// (0x000508b8) graphic2_pages_pane_ParamLimits

0xea83,	// (0x000508b8) graphic2_pages_pane

0xeadb,	// (0x00050910) grid_graphic2_control_pane_ParamLimits

0xeadb,	// (0x00050910) grid_graphic2_control_pane

0xeb23,	// (0x00050958) grid_graphic2_pane_ParamLimits

0xeb23,	// (0x00050958) grid_graphic2_pane

0xebae,	// (0x000509e3) cell_graphic2_pane

0xda73,	// (0x0004f8a8) main_comp_mode_pane

0x82b9,	// (0x0004a0ee) list_ai3_gene_pane_ParamLimits

0xe3f4,	// (0x00050229) bg_popup_window_pane_cp19_ParamLimits

0x868d,	// (0x0004a4c2) bg_touch_area_indi_pane_ParamLimits

0x868d,	// (0x0004a4c2) bg_touch_area_indi_pane

0x86a3,	// (0x0004a4d8) bg_touch_area_indi_pane_cp01_ParamLimits

0x86a3,	// (0x0004a4d8) bg_touch_area_indi_pane_cp01

0x86bb,	// (0x0004a4f0) bg_touch_area_indi_pane_cp02_ParamLimits

0x86bb,	// (0x0004a4f0) bg_touch_area_indi_pane_cp02

0x86d5,	// (0x0004a50a) bg_touch_area_indi_pane_cp03_ParamLimits

0x86d5,	// (0x0004a50a) bg_touch_area_indi_pane_cp03

0x86ef,	// (0x0004a524) popup_slider_window_g1_ParamLimits

0x870b,	// (0x0004a540) popup_slider_window_g2_ParamLimits

0x8727,	// (0x0004a55c) popup_slider_window_g3_ParamLimits

0xfcfa,	// (0x00051b2f) popup_slider_window_g_ParamLimits

0x8783,	// (0x0004a5b8) popup_slider_window_t1_ParamLimits

0x87f7,	// (0x0004a62c) small_volume_slider_vertical_pane_ParamLimits

0xebae,	// (0x000509e3) cell_graphic2_pane_ParamLimits

0xec1e,	// (0x00050a53) bg_button_pane_cp10_ParamLimits

0xec1e,	// (0x00050a53) bg_button_pane_cp10

0xec31,	// (0x00050a66) bg_button_pane_cp11_ParamLimits

0xec31,	// (0x00050a66) bg_button_pane_cp11

0xec44,	// (0x00050a79) graphic2_pages_pane_g1_ParamLimits

0xec44,	// (0x00050a79) graphic2_pages_pane_g1

0xec5f,	// (0x00050a94) graphic2_pages_pane_g2_ParamLimits

0xec5f,	// (0x00050a94) graphic2_pages_pane_g2

0x0001,

0xfdbe,	// (0x00051bf3) graphic2_pages_pane_g_ParamLimits

0xfdbe,	// (0x00051bf3) graphic2_pages_pane_g

0xec77,	// (0x00050aac) graphic2_pages_pane_t1_ParamLimits

0xec77,	// (0x00050aac) graphic2_pages_pane_t1

0xec8f,	// (0x00050ac4) cell_graphic2_control_pane_ParamLimits

0xec8f,	// (0x00050ac4) cell_graphic2_control_pane

0xecab,	// (0x00050ae0) cell_graphic2_pane_g1_ParamLimits

0xecab,	// (0x00050ae0) cell_graphic2_pane_g1

0xdd75,	// (0x0004fbaa) cell_graphic2_pane_g2_ParamLimits

0xdd75,	// (0x0004fbaa) cell_graphic2_pane_g2

0xec11,	// (0x00050a46) cell_graphic2_pane_g3_ParamLimits

0xec11,	// (0x00050a46) cell_graphic2_pane_g3

0xdd82,	// (0x0004fbb7) cell_graphic2_pane_g4_ParamLimits

0xdd82,	// (0x0004fbb7) cell_graphic2_pane_g4

0xecb8,	// (0x00050aed) cell_graphic2_pane_g5_ParamLimits

0xecb8,	// (0x00050aed) cell_graphic2_pane_g5

0x0004,

0xfdc3,	// (0x00051bf8) cell_graphic2_pane_g_ParamLimits

0xfdc3,	// (0x00051bf8) cell_graphic2_pane_g

0xecd8,	// (0x00050b0d) cell_graphic2_pane_t1_ParamLimits

0xecd8,	// (0x00050b0d) cell_graphic2_pane_t1

0x57ff,	// (0x00047634) grid_highlight_pane_cp11_ParamLimits

0x57ff,	// (0x00047634) grid_highlight_pane_cp11

0x29c1,	// (0x000447f6) bg_button_pane_cp05

0xed0d,	// (0x00050b42) cell_graphic2_control_pane_g1

0x70d1,	// (0x00048f06) bg_touch_area_indi_pane_g1

0x92bf,	// (0x0004b0f4) aid_cmod_rocker_key_size

0x92c9,	// (0x0004b0fe) aid_cmode_itu_key_size

0x92d3,	// (0x0004b108) main_cmode_video_pane

0x92dd,	// (0x0004b112) main_comp_mode_itu_pane

0x92e9,	// (0x0004b11e) main_comp_mode_rocker_pane

0x92f5,	// (0x0004b12a) cell_cmode_rocker_pane_ParamLimits

0x92f5,	// (0x0004b12a) cell_cmode_rocker_pane

0x9309,	// (0x0004b13e) cell_cmode_itu_pane_ParamLimits

0x9309,	// (0x0004b13e) cell_cmode_itu_pane

0x2fca,	// (0x00044dff) bg_button_pane_cp06_ParamLimits

0x2fca,	// (0x00044dff) bg_button_pane_cp06

0x735b,	// (0x00049190) cell_cmode_rocker_pane_g1_ParamLimits

0x735b,	// (0x00049190) cell_cmode_rocker_pane_g1

0x889e,	// (0x0004a6d3) cell_cmode_rocker_pane_g2_ParamLimits

0x889e,	// (0x0004a6d3) cell_cmode_rocker_pane_g2

0x0001,

0xfdd3,	// (0x00051c08) cell_cmode_rocker_pane_g_ParamLimits

0xfdd3,	// (0x00051c08) cell_cmode_rocker_pane_g

0xda73,	// (0x0004f8a8) bg_button_pane_cp07

0x9320,	// (0x0004b155) cell_cmode_itu_pane_g1

0x9329,	// (0x0004b15e) cell_cmode_itu_pane_t1

0x9337,	// (0x0004b16c) cell_cmode_itu_pane_t2

0x0001,

0xfdd8,	// (0x00051c0d) cell_cmode_itu_pane_t

0x8acc,	// (0x0004a901) aid_touch_ctrl_left

0x8ad4,	// (0x0004a909) aid_touch_ctrl_right

0xda73,	// (0x0004f8a8) compa_mode_pane

0xed35,	// (0x00050b6a) aid_cmod_rocker_key_size_cp

0xed3f,	// (0x00050b74) aid_cmode_itu_key_size_cp

0x9359,	// (0x0004b18e) compa_mode_pane_g1

0x9361,	// (0x0004b196) compa_mode_pane_g2

0x9369,	// (0x0004b19e) compa_mode_pane_g3

0x0002,

0xfddd,	// (0x00051c12) compa_mode_pane_g

0xed49,	// (0x00050b7e) main_comp_mode_itu_pane_cp

0xed51,	// (0x00050b86) main_comp_mode_rocker_pane_cp

0xed59,	// (0x00050b8e) cell_cmode_itu_pane_cp_ParamLimits

0xed59,	// (0x00050b8e) cell_cmode_itu_pane_cp

0xed6e,	// (0x00050ba3) cell_cmode_rocker_pane_cp_ParamLimits

0xed6e,	// (0x00050ba3) cell_cmode_rocker_pane_cp

0x2fca,	// (0x00044dff) bg_button_pane_cp06_cp_ParamLimits

0x2fca,	// (0x00044dff) bg_button_pane_cp06_cp

0x735b,	// (0x00049190) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x735b,	// (0x00049190) cell_cmode_rocker_pane_g1_cp

0x70d1,	// (0x00048f06) cell_cmode_rocker_pane_g2_cp

0xda73,	// (0x0004f8a8) bg_button_pane_cp07_cp

0xed80,	// (0x00050bb5) cell_cmode_itu_pane_g1_cp

0xed89,	// (0x00050bbe) cell_cmode_itu_pane_t1_cp

0xed89,	// (0x00050bbe) cell_cmode_itu_pane_t2_cp

0xd975,	// (0x0004f7aa) settings_code_pane_cp2

0x2737,	// (0x0004456c) bg_popup_window_pane_cp3_ParamLimits

0x2baf,	// (0x000449e4) heading_pane_cp3_ParamLimits

0x2bbb,	// (0x000449f0) listscroll_popup_graphic_pane_ParamLimits

0x195d,	// (0x00043792) fep_hwr_aid_pane_ParamLimits

0x1e3f,	// (0x00043c74) aid_touch_sctrl_top_ParamLimits

0x1e4c,	// (0x00043c81) sctrl_sk_top_pane_g1_ParamLimits

0x735b,	// (0x00049190) sctrl_sk_top_pane_g2_ParamLimits

0xfd13,	// (0x00051b48) sctrl_sk_top_pane_g_ParamLimits

0x1e59,	// (0x00043c8e) sctrl_sk_top_pane_t1_ParamLimits

0x1e3f,	// (0x00043c74) aid_touch_sctrl_bottom_ParamLimits

0x1e59,	// (0x00043c8e) sctrl_sk_bottom_pane_t1_ParamLimits

0x8a12,	// (0x0004a847) aid_area_touch_clock

0xc690,	// (0x0004e4c5) aid_vkb2_area_top_pane_cell_ParamLimits

0xc690,	// (0x0004e4c5) aid_vkb2_area_top_pane_cell

0xc73b,	// (0x0004e570) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc73b,	// (0x0004e570) aid_vkb2_area_bottom_pane_cell

0x8f7b,	// (0x0004adb0) popup_char_count_window

0x93bf,	// (0x0004b1f4) popup_char_count_window_g1

0x93c8,	// (0x0004b1fd) popup_char_count_window_g2

0x93d1,	// (0x0004b206) popup_char_count_window_g3

0x0002,

0xfde4,	// (0x00051c19) popup_char_count_window_g

0x93da,	// (0x0004b20f) popup_char_count_window_t1

0x1ef8,	// (0x00043d2d) popup_fep_char_preview_window_ParamLimits

0x1ef8,	// (0x00043d2d) popup_fep_char_preview_window

0xc6b0,	// (0x0004e4e5) vkb2_top_candi_pane_ParamLimits

0xc6b0,	// (0x0004e4e5) vkb2_top_candi_pane

0xed97,	// (0x00050bcc) cell_vkb2_top_candi_pane_ParamLimits

0xed97,	// (0x00050bcc) cell_vkb2_top_candi_pane

0x5188,	// (0x00046fbd) bg_popup_fep_char_preview_window_ParamLimits

0x5188,	// (0x00046fbd) bg_popup_fep_char_preview_window

0x246f,	// (0x000442a4) popup_fep_char_preview_window_t1_ParamLimits

0x246f,	// (0x000442a4) popup_fep_char_preview_window_t1

0x9439,	// (0x0004b26e) bg_popup_fep_char_preview_window_g1

0x9441,	// (0x0004b276) bg_popup_fep_char_preview_window_g2

0x9449,	// (0x0004b27e) bg_popup_fep_char_preview_window_g3

0x9451,	// (0x0004b286) bg_popup_fep_char_preview_window_g4

0x9459,	// (0x0004b28e) bg_popup_fep_char_preview_window_g5

0x24a9,	// (0x000442de) bg_popup_fep_char_preview_window_g6

0x9461,	// (0x0004b296) bg_popup_fep_char_preview_window_g7

0x9469,	// (0x0004b29e) bg_popup_fep_char_preview_window_g8

0x9471,	// (0x0004b2a6) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdeb,	// (0x00051c20) bg_popup_fep_char_preview_window_g

0x735b,	// (0x00049190) cell_vkb2_top_candi_pane_g1_ParamLimits

0x735b,	// (0x00049190) cell_vkb2_top_candi_pane_g1

0x769c,	// (0x000494d1) cell_vkb2_top_candi_pane_g2_ParamLimits

0x769c,	// (0x000494d1) cell_vkb2_top_candi_pane_g2

0x76bd,	// (0x000494f2) cell_vkb2_top_candi_pane_g3_ParamLimits

0x76bd,	// (0x000494f2) cell_vkb2_top_candi_pane_g3

0x24b1,	// (0x000442e6) cell_vkb2_top_candi_pane_g4_ParamLimits

0x24b1,	// (0x000442e6) cell_vkb2_top_candi_pane_g4

0x9479,	// (0x0004b2ae) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9479,	// (0x0004b2ae) cell_vkb2_top_candi_pane_g5

0x889e,	// (0x0004a6d3) cell_vkb2_top_candi_pane_g6_ParamLimits

0x889e,	// (0x0004a6d3) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfe,	// (0x00051c33) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfe,	// (0x00051c33) cell_vkb2_top_candi_pane_g

0x24d2,	// (0x00044307) cell_vkb2_top_candi_pane_t1

0x172d,	// (0x00043562) aid_size_touch_slider_mark_ParamLimits

0x172d,	// (0x00043562) aid_size_touch_slider_mark

0xeabf,	// (0x000508f4) grid_graphic2_catg_pane_ParamLimits

0xeabf,	// (0x000508f4) grid_graphic2_catg_pane

0xeb7d,	// (0x000509b2) popup_grid_graphic2_window_t1_ParamLimits

0xeb7d,	// (0x000509b2) popup_grid_graphic2_window_t1

0xeb93,	// (0x000509c8) popup_grid_graphic2_window_t2_ParamLimits

0xeb93,	// (0x000509c8) popup_grid_graphic2_window_t2

0x0001,

0xfdb9,	// (0x00051bee) popup_grid_graphic2_window_t_ParamLimits

0xfdb9,	// (0x00051bee) popup_grid_graphic2_window_t

0x29c1,	// (0x000447f6) bg_button_pane_cp05_ParamLimits

0xed0d,	// (0x00050b42) cell_graphic2_control_pane_g1_ParamLimits

0xedeb,	// (0x00050c20) cell_graphic2_catg_pane_ParamLimits

0xedeb,	// (0x00050c20) cell_graphic2_catg_pane

0xda73,	// (0x0004f8a8) bg_button_pane_cp12

0xedfd,	// (0x00050c32) cell_graphic2_catg_pane_g1

0x89de,	// (0x0004a813) cell_tb_ext_pane_t1_ParamLimits

0x228b,	// (0x000440c0) vkb2_top_cell_right_narrow_pane_ParamLimits

0x228b,	// (0x000440c0) vkb2_top_cell_right_narrow_pane

0x22a3,	// (0x000440d8) vkb2_top_cell_right_wide_pane_ParamLimits

0x22a3,	// (0x000440d8) vkb2_top_cell_right_wide_pane

0xc9e2,	// (0x0004e817) bg_vkb2_func_pane_ParamLimits

0xc9e2,	// (0x0004e817) bg_vkb2_func_pane

0x2314,	// (0x00044149) vkb2_top_cell_left_pane_g1_ParamLimits

0xc9e2,	// (0x0004e817) bg_vkb2_fuc_pane_cp03_ParamLimits

0xc9e2,	// (0x0004e817) bg_vkb2_fuc_pane_cp03

0x2388,	// (0x000441bd) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4b16,	// (0x0004694b) bg_vkb2_func_pane_g1

0x4b1e,	// (0x00046953) bg_vkb2_func_pane_g2

0x4b2e,	// (0x00046963) bg_vkb2_func_pane_g3

0x4b26,	// (0x0004695b) bg_vkb2_func_pane_g4

0x4b36,	// (0x0004696b) bg_vkb2_func_pane_g5

0x4b3e,	// (0x00046973) bg_vkb2_func_pane_g6

0x4b46,	// (0x0004697b) bg_vkb2_func_pane_g7

0x4b4e,	// (0x00046983) bg_vkb2_func_pane_g8

0x4b0e,	// (0x00046943) bg_vkb2_func_pane_g9

0x0008,

0xfe0b,	// (0x00051c40) bg_vkb2_func_pane_g

0xc9e2,	// (0x0004e817) bg_vkb2_fuc_pane_cp01_ParamLimits

0xc9e2,	// (0x0004e817) bg_vkb2_fuc_pane_cp01

0x2314,	// (0x00044149) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2314,	// (0x00044149) vkb2_top_cell_right_wide_pane_g1

0xc9e2,	// (0x0004e817) bg_vkb2_fuc_pane_cp02_ParamLimits

0xc9e2,	// (0x0004e817) bg_vkb2_fuc_pane_cp02

0x2388,	// (0x000441bd) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2388,	// (0x000441bd) vkb2_top_cell_right_narrow_pane_g1

0xe32e,	// (0x00050163) aid_touch_area_decrease_ParamLimits

0xe32e,	// (0x00050163) aid_touch_area_decrease

0xe368,	// (0x0005019d) aid_touch_area_increase_ParamLimits

0xe368,	// (0x0005019d) aid_touch_area_increase

0xe390,	// (0x000501c5) aid_touch_area_mute_ParamLimits

0xe390,	// (0x000501c5) aid_touch_area_mute

0xe3c0,	// (0x000501f5) aid_touch_area_slider_ParamLimits

0xe3c0,	// (0x000501f5) aid_touch_area_slider

0xe400,	// (0x00050235) popup_slider_window_g4_ParamLimits

0xe400,	// (0x00050235) popup_slider_window_g4

0xe428,	// (0x0005025d) popup_slider_window_g5_ParamLimits

0xe428,	// (0x0005025d) popup_slider_window_g5

0xe45c,	// (0x00050291) popup_slider_window_g6_ParamLimits

0xe45c,	// (0x00050291) popup_slider_window_g6

0x87b1,	// (0x0004a5e6) popup_slider_window_t2_ParamLimits

0x87b1,	// (0x0004a5e6) popup_slider_window_t2

0x0001,

0xfd07,	// (0x00051b3c) popup_slider_window_t_ParamLimits

0xfd07,	// (0x00051b3c) popup_slider_window_t

0xe478,	// (0x000502ad) slider_pane_ParamLimits

0xe478,	// (0x000502ad) slider_pane

0x94b5,	// (0x0004b2ea) slider_pane_g1_ParamLimits

0x94b5,	// (0x0004b2ea) slider_pane_g1

0x94c9,	// (0x0004b2fe) slider_pane_g2_ParamLimits

0x94c9,	// (0x0004b2fe) slider_pane_g2

0x94df,	// (0x0004b314) slider_pane_g3_ParamLimits

0x94df,	// (0x0004b314) slider_pane_g3

0x0003,

0xfe1e,	// (0x00051c53) slider_pane_g_ParamLimits

0xfe1e,	// (0x00051c53) slider_pane_g

0xd07d,	// (0x0004eeb2) popup_tb_float_extension_window_ParamLimits

0xd07d,	// (0x0004eeb2) popup_tb_float_extension_window

0x950b,	// (0x0004b340) aid_size_cell_tb_float_ext

0xda73,	// (0x0004f8a8) bg_popup_sub_window_cp28

0x9517,	// (0x0004b34c) grid_tb_float_ext_pane

0x9523,	// (0x0004b358) cell_tb_float_ext_pane_ParamLimits

0x9523,	// (0x0004b358) cell_tb_float_ext_pane

0x953f,	// (0x0004b374) cell_tb_float_ext_pane_g1

0x9548,	// (0x0004b37d) grid_highlight_pane_cp12

0xc419,	// (0x0004e24e) cell_last_hwr_side_pane_ParamLimits

0xc419,	// (0x0004e24e) cell_last_hwr_side_pane

0x70d1,	// (0x00048f06) cell_last_hwr_side_pane_g1

0x9551,	// (0x0004b386) cell_last_hwr_side_pane_g2

0x0001,

0xfe27,	// (0x00051c5c) cell_last_hwr_side_pane_g

0xc817,	// (0x0004e64c) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc817,	// (0x0004e64c) vkb2_area_bottom_space_btn_pane

0x735b,	// (0x00049190) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x8fee,	// (0x0004ae23) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x24d2,	// (0x00044307) cell_vkb2_top_candi_pane_t1_ParamLimits

0x24f0,	// (0x00044325) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x24f0,	// (0x00044325) vkb2_area_bottom_space_btn_pane_g1

0x252a,	// (0x0004435f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x252a,	// (0x0004435f) vkb2_area_bottom_space_btn_pane_g2

0x2560,	// (0x00044395) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2560,	// (0x00044395) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2c,	// (0x00051c61) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2c,	// (0x00051c61) vkb2_area_bottom_space_btn_pane_g

0x1a06,	// (0x0004383b) cel_fep_hwr_func_pane_ParamLimits

0x1a06,	// (0x0004383b) cel_fep_hwr_func_pane

0xc3ee,	// (0x0004e223) cell_hwr_side_button_pane_ParamLimits

0xc3ee,	// (0x0004e223) cell_hwr_side_button_pane

0x8a12,	// (0x0004a847) aid_area_touch_clock_ParamLimits

0x29c1,	// (0x000447f6) bg_uniindi_top_pane_ParamLimits

0x8a26,	// (0x0004a85b) uniindi_top_pane_g1_ParamLimits

0x8a3c,	// (0x0004a871) uniindi_top_pane_g2_ParamLimits

0x8a48,	// (0x0004a87d) uniindi_top_pane_g3_ParamLimits

0x8a59,	// (0x0004a88e) uniindi_top_pane_g4_ParamLimits

0xfd3f,	// (0x00051b74) uniindi_top_pane_g_ParamLimits

0x8a66,	// (0x0004a89b) uniindi_top_pane_t1_ParamLimits

0x29c1,	// (0x000447f6) bg_vkb2_func_pane_cp01_ParamLimits

0x29c1,	// (0x000447f6) bg_vkb2_func_pane_cp01

0x955a,	// (0x0004b38f) cel_fep_hwr_func_pane_g1_ParamLimits

0x955a,	// (0x0004b38f) cel_fep_hwr_func_pane_g1

0x29c1,	// (0x000447f6) bg_vkb2_func_pane_cp02_ParamLimits

0x29c1,	// (0x000447f6) bg_vkb2_func_pane_cp02

0x955a,	// (0x0004b38f) cell_hwr_side_button_pane_g1_ParamLimits

0x955a,	// (0x0004b38f) cell_hwr_side_button_pane_g1

0x498f,	// (0x000467c4) status_pane_g4_ParamLimits

0x498f,	// (0x000467c4) status_pane_g4

0x49a9,	// (0x000467de) status_pane_t1

0x6ecb,	// (0x00048d00) form2_midp_gauge_slider_cont_pane

0x6ed3,	// (0x00048d08) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdcbe,	// (0x0004faf3) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdcd0,	// (0x0004fb05) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb0b,	// (0x00051940) form2_midp_gauge_slider_pane_t_ParamLimits

0x6f09,	// (0x00048d3e) form2_midp_slider_pane_ParamLimits

0x1ec0,	// (0x00043cf5) aid_size_cell_func_vkb2_ParamLimits

0x1ec0,	// (0x00043cf5) aid_size_cell_func_vkb2

0x94f7,	// (0x0004b32c) slider_pane_g4_ParamLimits

0x94f7,	// (0x0004b32c) slider_pane_g4

0xc878,	// (0x0004e6ad) form2_midp_gauge_slider_pane_t2_cp01

0xc886,	// (0x0004e6bb) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc886,	// (0x0004e6bb) form2_midp_gauge_slider_pane_t3_cp01

0x25d5,	// (0x0004440a) form2_midp_slider_pane_cp01

0xda73,	// (0x0004f8a8) navi_smil_pane

0x9593,	// (0x0004b3c8) navi_smil_pane_g1

0x959b,	// (0x0004b3d0) navi_smil_pane_t1

0x9568,	// (0x0004b39d) form2_midp_slider_pane_g1

0x9571,	// (0x0004b3a6) form2_midp_slider_pane_g2

0x9579,	// (0x0004b3ae) form2_midp_slider_pane_g3

0x9568,	// (0x0004b39d) form2_midp_slider_pane_g4

0xee06,	// (0x00050c3b) form2_midp_slider_pane_g5

0x0004,

0xfe35,	// (0x00051c6a) form2_midp_slider_pane_g

0x259a,	// (0x000443cf) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x259a,	// (0x000443cf) vkb2_area_bottom_space_btn_pane_g4

0xd262,	// (0x0004f097) lc0_navi_pane_ParamLimits

0xd262,	// (0x0004f097) lc0_navi_pane

0xd2d2,	// (0x0004f107) lc0_stat_indi_pane_ParamLimits

0xd2d2,	// (0x0004f107) lc0_stat_indi_pane

0xd2e7,	// (0x0004f11c) ls0_title_pane_ParamLimits

0xd2e7,	// (0x0004f11c) ls0_title_pane

0x2fca,	// (0x00044dff) bg_popup_sub_pane_cp14_ParamLimits

0x89f9,	// (0x0004a82e) list_uniindi_pane_ParamLimits

0x8a05,	// (0x0004a83a) uniindi_top_pane_ParamLimits

0x8aa4,	// (0x0004a8d9) list_single_uniindi_pane_g1_ParamLimits

0x8ab7,	// (0x0004a8ec) list_single_uniindi_pane_t1_ParamLimits

0xc8a3,	// (0x0004e6d8) lc0_stat_clock_pane_ParamLimits

0xc8a3,	// (0x0004e6d8) lc0_stat_clock_pane

0xee0f,	// (0x00050c44) lc0_stat_indi_pane_g1_ParamLimits

0xee0f,	// (0x00050c44) lc0_stat_indi_pane_g1

0xee1c,	// (0x00050c51) lc0_stat_indi_pane_g2_ParamLimits

0xee1c,	// (0x00050c51) lc0_stat_indi_pane_g2

0x0001,

0xfe40,	// (0x00051c75) lc0_stat_indi_pane_g_ParamLimits

0xfe40,	// (0x00051c75) lc0_stat_indi_pane_g

0xc8b0,	// (0x0004e6e5) lc0_uni_indicator_pane_ParamLimits

0xc8b0,	// (0x0004e6e5) lc0_uni_indicator_pane

0xee29,	// (0x00050c5e) ls0_title_pane_g1_ParamLimits

0xee29,	// (0x00050c5e) ls0_title_pane_g1

0xee3d,	// (0x00050c72) ls0_title_pane_t1_ParamLimits

0xee3d,	// (0x00050c72) ls0_title_pane_t1

0xc8bd,	// (0x0004e6f2) lc0_uni_indicator_pane_g1_ParamLimits

0xc8bd,	// (0x0004e6f2) lc0_uni_indicator_pane_g1

0x960d,	// (0x0004b442) lc0_stat_clock_pane_t1

0xda73,	// (0x0004f8a8) main_ai5_pane

0x961b,	// (0x0004b450) ai5_sk_pane_ParamLimits

0x961b,	// (0x0004b450) ai5_sk_pane

0xee6b,	// (0x00050ca0) cell_ai5_widget_pane_ParamLimits

0xee6b,	// (0x00050ca0) cell_ai5_widget_pane

0x969e,	// (0x0004b4d3) aid_size_cell_widget_grid

0x96b2,	// (0x0004b4e7) bg_ai5_widget_pane_ParamLimits

0x96b2,	// (0x0004b4e7) bg_ai5_widget_pane

0xeef8,	// (0x00050d2d) cell_ai5_widget_pane_g2

0xef08,	// (0x00050d3d) cell_ai5_widget_pane_g3

0xef27,	// (0x00050d5c) cell_ai5_widget_pane_g4

0xef33,	// (0x00050d68) cell_ai5_widget_pane_g5

0xef3f,	// (0x00050d74) cell_ai5_widget_pane_g6

0xef4b,	// (0x00050d80) cell_ai5_widget_pane_g7

0xef93,	// (0x00050dc8) cell_ai5_widget_pane_t1_ParamLimits

0xef93,	// (0x00050dc8) cell_ai5_widget_pane_t1

0xefb0,	// (0x00050de5) cell_ai5_widget_pane_t2_ParamLimits

0xefb0,	// (0x00050de5) cell_ai5_widget_pane_t2

0xefc8,	// (0x00050dfd) cell_ai5_widget_pane_t3_ParamLimits

0xefc8,	// (0x00050dfd) cell_ai5_widget_pane_t3

0xefe0,	// (0x00050e15) cell_ai5_widget_pane_t4_ParamLimits

0xefe0,	// (0x00050e15) cell_ai5_widget_pane_t4

0xeffa,	// (0x00050e2f) cell_ai5_widget_pane_t5_ParamLimits

0xeffa,	// (0x00050e2f) cell_ai5_widget_pane_t5

0x97fd,	// (0x0004b632) cell_ai5_widget_pane_t6_ParamLimits

0x97fd,	// (0x0004b632) cell_ai5_widget_pane_t6

0x980f,	// (0x0004b644) cell_ai5_widget_pane_t7_ParamLimits

0x980f,	// (0x0004b644) cell_ai5_widget_pane_t7

0xf019,	// (0x00050e4e) cell_ai5_widget_pane_t8_ParamLimits

0xf019,	// (0x00050e4e) cell_ai5_widget_pane_t8

0x0009,

0xfe5a,	// (0x00051c8f) cell_ai5_widget_pane_t_ParamLimits

0xfe5a,	// (0x00051c8f) cell_ai5_widget_pane_t

0xf065,	// (0x00050e9a) grid_ai5_widget_pane

0x2fca,	// (0x00044dff) highlight_cell_ai5_widget_pane_ParamLimits

0x2fca,	// (0x00044dff) highlight_cell_ai5_widget_pane

0xf07c,	// (0x00050eb1) ai5_sk_left_pane

0xf086,	// (0x00050ebb) ai5_sk_middle_pane

0xf090,	// (0x00050ec5) ai5_sk_right_pane

0x98a9,	// (0x0004b6de) bg_ai5_widget_pane_g1_ParamLimits

0x98a9,	// (0x0004b6de) bg_ai5_widget_pane_g1

0x98b5,	// (0x0004b6ea) bg_ai5_widget_pane_g2_ParamLimits

0x98b5,	// (0x0004b6ea) bg_ai5_widget_pane_g2

0x98c1,	// (0x0004b6f6) bg_ai5_widget_pane_g3_ParamLimits

0x98c1,	// (0x0004b6f6) bg_ai5_widget_pane_g3

0x98cd,	// (0x0004b702) bg_ai5_widget_pane_g4_ParamLimits

0x98cd,	// (0x0004b702) bg_ai5_widget_pane_g4

0x98d9,	// (0x0004b70e) bg_ai5_widget_pane_g5_ParamLimits

0x98d9,	// (0x0004b70e) bg_ai5_widget_pane_g5

0x98e5,	// (0x0004b71a) bg_ai5_widget_pane_g6_ParamLimits

0x98e5,	// (0x0004b71a) bg_ai5_widget_pane_g6

0x98f1,	// (0x0004b726) bg_ai5_widget_pane_g7_ParamLimits

0x98f1,	// (0x0004b726) bg_ai5_widget_pane_g7

0x98fd,	// (0x0004b732) bg_ai5_widget_pane_g8_ParamLimits

0x98fd,	// (0x0004b732) bg_ai5_widget_pane_g8

0x9909,	// (0x0004b73e) bg_ai5_widget_pane_g9_ParamLimits

0x9909,	// (0x0004b73e) bg_ai5_widget_pane_g9

0x0008,

0xfe6f,	// (0x00051ca4) bg_ai5_widget_pane_g_ParamLimits

0xfe6f,	// (0x00051ca4) bg_ai5_widget_pane_g

0x9930,	// (0x0004b765) cell_shortcut_ai5_widget_pane_ParamLimits

0x9930,	// (0x0004b765) cell_shortcut_ai5_widget_pane

0x2803,	// (0x00044638) bg_cell_shortcut_ai5_widget_pane

0x9942,	// (0x0004b777) cell_grid_ai5_widget_pane_g1

0x994b,	// (0x0004b780) highlight_cell_shortcut_ai5_widget_pane

0x4b1e,	// (0x00046953) ai5_sk_left_pane_g1

0x9953,	// (0x0004b788) ai5_sk_left_pane_g2

0x995b,	// (0x0004b790) ai5_sk_left_pane_g3

0x9963,	// (0x0004b798) ai5_sk_left_pane_g4

0x0003,

0xfe82,	// (0x00051cb7) ai5_sk_left_pane_g

0x996b,	// (0x0004b7a0) ai5_sk_left_pane_t1

0x4b16,	// (0x0004694b) ai5_sk_right_pane_g1

0x9979,	// (0x0004b7ae) ai5_sk_right_pane_g2

0x9981,	// (0x0004b7b6) ai5_sk_right_pane_g3

0x9989,	// (0x0004b7be) ai5_sk_right_pane_g4

0x0003,

0xfe8b,	// (0x00051cc0) ai5_sk_right_pane_g

0x9991,	// (0x0004b7c6) ai5_sk_right_pane_t1

0x4b16,	// (0x0004694b) ai5_sk_middle_pane_g1

0x4b1e,	// (0x00046953) ai5_sk_middle_pane_g2

0x4b36,	// (0x0004696b) ai5_sk_middle_pane_g3

0x9981,	// (0x0004b7b6) ai5_sk_middle_pane_g4

0x995b,	// (0x0004b790) ai5_sk_middle_pane_g5

0x999f,	// (0x0004b7d4) ai5_sk_middle_pane_g6

0xf0b5,	// (0x00050eea) ai5_sk_middle_pane_g7

0x0006,

0xfe94,	// (0x00051cc9) ai5_sk_middle_pane_g

0xd14e,	// (0x0004ef83) aid_touch_area_size_lc0_ParamLimits

0xd14e,	// (0x0004ef83) aid_touch_area_size_lc0

0x1ba5,	// (0x000439da) cell_hwr_candidate_pane_t1_ParamLimits

0x4646,	// (0x0004647b) aid_touch_navi_pane

0xd3f2,	// (0x0004f227) status_dt_navi_pane_ParamLimits

0xd3f2,	// (0x0004f227) status_dt_navi_pane

0xd40a,	// (0x0004f23f) status_dt_sta_pane_ParamLimits

0xd40a,	// (0x0004f23f) status_dt_sta_pane

0xf0bd,	// (0x00050ef2) dt_sta_controll_pane

0xf0ca,	// (0x00050eff) dt_sta_indi_pane

0xf0d7,	// (0x00050f0c) dt_sta_title_pane

0x29c1,	// (0x000447f6) bg_dt_sta_indi_pane_ParamLimits

0x29c1,	// (0x000447f6) bg_dt_sta_indi_pane

0xf0e9,	// (0x00050f1e) dt_sta_battery_pane

0xf0f1,	// (0x00050f26) dt_sta_indi_pane_g1

0xf0fa,	// (0x00050f2f) dt_sta_indi_pane_g2

0xf103,	// (0x00050f38) dt_sta_indi_pane_g3

0x0002,

0xfea3,	// (0x00051cd8) dt_sta_indi_pane_g

0xf10c,	// (0x00050f41) dt_sta_signal_pane

0x2fca,	// (0x00044dff) bg_dt_sta_title_pane_ParamLimits

0x2fca,	// (0x00044dff) bg_dt_sta_title_pane

0xf115,	// (0x00050f4a) dt_sta_title_pane_g1

0xf11d,	// (0x00050f52) dt_sta_title_pane_t1_ParamLimits

0xf11d,	// (0x00050f52) dt_sta_title_pane_t1

0xda73,	// (0x0004f8a8) bg_dt_sta_control_pane

0xf132,	// (0x00050f67) dt_sta_controll_pane_g1

0xf13b,	// (0x00050f70) bg_dt_sta_title_pane_g1

0xf144,	// (0x00050f79) bg_dt_sta_title_pane_g2

0xf14d,	// (0x00050f82) bg_dt_sta_title_pane_g3

0x0002,

0xfeaa,	// (0x00051cdf) bg_dt_sta_title_pane_g

0x70d1,	// (0x00048f06) bg_dt_sta_indi_pane_g1

0x9a4d,	// (0x0004b882) dt_sta_signal_pane_g1

0x9a55,	// (0x0004b88a) dt_sta_signal_pane_g2

0x0001,

0xfeb1,	// (0x00051ce6) dt_sta_signal_pane_g

0x9a5d,	// (0x0004b892) dt_sta_battery_pane_g1

0x9a66,	// (0x0004b89b) dt_sta_battery_pane_t1

0x70d1,	// (0x00048f06) bg_dt_sta_control_pane_g1

0x3751,	// (0x00045586) fep_china_uni_eep_pane

0x3759,	// (0x0004558e) fep_china_uni_entry_pane_ParamLimits

0x3769,	// (0x0004559e) popup_fep_china_uni_window_g1_ParamLimits

0x3779,	// (0x000455ae) popup_fep_china_uni_window_g2_ParamLimits

0x3779,	// (0x000455ae) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x0005156f) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x0005156f) popup_fep_china_uni_window_g

0x9a75,	// (0x0004b8aa) fep_china_uni_eep_pane_g1

0x9a7d,	// (0x0004b8b2) fep_china_uni_eep_pane_t1

0x958a,	// (0x0004b3bf) aid_touch_area_size_smil_player

0x479e,	// (0x000465d3) lc0_clock_pane

0x499d,	// (0x000467d2) status_pane_g5_ParamLimits

0x499d,	// (0x000467d2) status_pane_g5

0xcba7,	// (0x0004e9dc) popup_keymap_window

0x495b,	// (0x00046790) status_icon_pane

0xef08,	// (0x00050d3d) cell_ai5_widget_pane_g3_ParamLimits

0xef27,	// (0x00050d5c) cell_ai5_widget_pane_g4_ParamLimits

0xef33,	// (0x00050d68) cell_ai5_widget_pane_g5_ParamLimits

0xef57,	// (0x00050d8c) cell_ai5_widget_pane_g8_ParamLimits

0xef57,	// (0x00050d8c) cell_ai5_widget_pane_g8

0xef6b,	// (0x00050da0) cell_ai5_widget_pane_g9_ParamLimits

0xef6b,	// (0x00050da0) cell_ai5_widget_pane_g9

0xef7f,	// (0x00050db4) cell_ai5_widget_pane_g10_ParamLimits

0xef7f,	// (0x00050db4) cell_ai5_widget_pane_g10

0x9a8c,	// (0x0004b8c1) status_icon_pane_g1

0xda73,	// (0x0004f8a8) bg_popup_sub_pane_cp13

0x9a94,	// (0x0004b8c9) popup_keymap_window_t1

0xc9a5,	// (0x0004e7da) control_pane_g6_ParamLimits

0xc9a5,	// (0x0004e7da) control_pane_g6

0xc9b2,	// (0x0004e7e7) control_pane_g7_ParamLimits

0xc9b2,	// (0x0004e7e7) control_pane_g7

0xc9bf,	// (0x0004e7f4) control_pane_g8_ParamLimits

0xc9bf,	// (0x0004e7f4) control_pane_g8

0xf0bd,	// (0x00050ef2) dt_sta_controll_pane_ParamLimits

0xf0ca,	// (0x00050eff) dt_sta_indi_pane_ParamLimits

0xf0d7,	// (0x00050f0c) dt_sta_title_pane_ParamLimits

0x2ef6,	// (0x00044d2b) aid_size_touch_scroll_bar_cale

0x0b67,	// (0x0004299c) popup_discreet_window_ParamLimits

0x0b67,	// (0x0004299c) popup_discreet_window

0xb8c3,	// (0x0004d6f8) popup_sk_window

0x5188,	// (0x00046fbd) bg_popup_sub_pane_cp28_ParamLimits

0x5188,	// (0x00046fbd) bg_popup_sub_pane_cp28

0x9aa2,	// (0x0004b8d7) popup_discreet_window_g1_ParamLimits

0x9aa2,	// (0x0004b8d7) popup_discreet_window_g1

0x9ac2,	// (0x0004b8f7) popup_discreet_window_t1_ParamLimits

0x9ac2,	// (0x0004b8f7) popup_discreet_window_t1

0x9ae0,	// (0x0004b915) popup_discreet_window_t2_ParamLimits

0x9ae0,	// (0x0004b915) popup_discreet_window_t2

0x0002,

0xfeb6,	// (0x00051ceb) popup_discreet_window_t_ParamLimits

0xfeb6,	// (0x00051ceb) popup_discreet_window_t

0x260b,	// (0x00044440) popup_sk_window_g1

0x2615,	// (0x0004444a) popup_sk_window_g2

0x0001,

0xfebd,	// (0x00051cf2) popup_sk_window_g

0x9b32,	// (0x0004b967) popup_sk_window_t1

0x9b40,	// (0x0004b975) popup_sk_window_t1_copy1

0xeef8,	// (0x00050d2d) cell_ai5_widget_pane_g2_ParamLimits

0xf02b,	// (0x00050e60) cell_ai5_widget_pane_t9_ParamLimits

0xf02b,	// (0x00050e60) cell_ai5_widget_pane_t9

0xda73,	// (0x0004f8a8) main_fep_fshwr2_pane

0xf156,	// (0x00050f8b) aid_fshwr2_btn_pane

0xf15e,	// (0x00050f93) aid_fshwr2_syb_pane

0xf166,	// (0x00050f9b) aid_fshwr2_txt_pane

0xf16e,	// (0x00050fa3) fshwr2_func_candi_pane

0xf178,	// (0x00050fad) fshwr2_hwr_syb_pane

0xf184,	// (0x00050fb9) fshwr2_icf_pane

0xda73,	// (0x0004f8a8) fshwr2_icf_bg_pane

0xf18e,	// (0x00050fc3) fshwr2_icf_pane_t1_ParamLimits

0xf18e,	// (0x00050fc3) fshwr2_icf_pane_t1

0x70d1,	// (0x00048f06) fshwr2_func_candi_pane_g1

0x9bb3,	// (0x0004b9e8) fshwr2_func_candi_row_pane_ParamLimits

0x9bb3,	// (0x0004b9e8) fshwr2_func_candi_row_pane

0xf1a6,	// (0x00050fdb) cell_fshwr2_syb_pane_ParamLimits

0xf1a6,	// (0x00050fdb) cell_fshwr2_syb_pane

0x735b,	// (0x00049190) fshwr2_hwr_syb_pane_g1_ParamLimits

0x735b,	// (0x00049190) fshwr2_hwr_syb_pane_g1

0xda73,	// (0x0004f8a8) bg_popup_call_pane_cp01

0x9bde,	// (0x0004ba13) fshwr2_func_candi_cell_pane_ParamLimits

0x9bde,	// (0x0004ba13) fshwr2_func_candi_cell_pane

0x9c10,	// (0x0004ba45) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9c10,	// (0x0004ba45) fshwr2_func_candi_cell_bg_pane

0x9c2a,	// (0x0004ba5f) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9c2a,	// (0x0004ba5f) fshwr2_func_candi_cell_pane_g1

0x9c4a,	// (0x0004ba7f) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9c4a,	// (0x0004ba7f) fshwr2_func_candi_cell_pane_t1

0xda73,	// (0x0004f8a8) bg_button_pane_cp08

0x3c53,	// (0x00045a88) cell_fshwr2_syb_bg_pane

0xf1bf,	// (0x00050ff4) cell_fshwr2_syb_bg_pane_g1

0xf1c7,	// (0x00050ffc) cell_fshwr2_syb_bg_pane_t1

0x2fca,	// (0x00044dff) main_tmo_pane

0xd74b,	// (0x0004f580) uni_indicator_pane_g1_ParamLimits

0xd760,	// (0x0004f595) uni_indicator_pane_g2_ParamLimits

0xd775,	// (0x0004f5aa) uni_indicator_pane_g3_ParamLimits

0xd78b,	// (0x0004f5c0) uni_indicator_pane_g4_ParamLimits

0xd78b,	// (0x0004f5c0) uni_indicator_pane_g4

0xd79f,	// (0x0004f5d4) uni_indicator_pane_g5_ParamLimits

0xd79f,	// (0x0004f5d4) uni_indicator_pane_g5

0xd7b3,	// (0x0004f5e8) uni_indicator_pane_g6_ParamLimits

0xd7b3,	// (0x0004f5e8) uni_indicator_pane_g6

0xf932,	// (0x00051767) uni_indicator_pane_g_ParamLimits

0xe2fe,	// (0x00050133) popup_tmo_note_window_ParamLimits

0xe2fe,	// (0x00050133) popup_tmo_note_window

0xda73,	// (0x0004f8a8) fshwr2_bg_pane

0x9c3b,	// (0x0004ba70) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9c3b,	// (0x0004ba70) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec2,	// (0x00051cf7) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec2,	// (0x00051cf7) fshwr2_func_candi_cell_pane_g

0x70d1,	// (0x00048f06) bg_popup_window_pane_cp01

0x9c74,	// (0x0004baa9) bg_popup_window_pane_g1_cp01

0x9c7d,	// (0x0004bab2) bg_popup_window_pane_cp22_ParamLimits

0x9c7d,	// (0x0004bab2) bg_popup_window_pane_cp22

0x9c8b,	// (0x0004bac0) listscroll_tmo_link_pane_ParamLimits

0x9c8b,	// (0x0004bac0) listscroll_tmo_link_pane

0x9ccb,	// (0x0004bb00) popup_tmo_note_window_g1_ParamLimits

0x9ccb,	// (0x0004bb00) popup_tmo_note_window_g1

0x9cd8,	// (0x0004bb0d) tmo_note_info_pane_ParamLimits

0x9cd8,	// (0x0004bb0d) tmo_note_info_pane

0xf1d6,	// (0x0005100b) list_tmo_note_info_pane_g1_ParamLimits

0xf1d6,	// (0x0005100b) list_tmo_note_info_pane_g1

0x9d09,	// (0x0004bb3e) list_tmo_note_info_pane_g2_ParamLimits

0x9d09,	// (0x0004bb3e) list_tmo_note_info_pane_g2

0x0001,

0xfec7,	// (0x00051cfc) list_tmo_note_info_pane_g_ParamLimits

0xfec7,	// (0x00051cfc) list_tmo_note_info_pane_g

0x9d25,	// (0x0004bb5a) list_tmo_note_info_text_pane_ParamLimits

0x9d25,	// (0x0004bb5a) list_tmo_note_info_text_pane

0x9daa,	// (0x0004bbdf) list_tmo_link_pane

0x9db7,	// (0x0004bbec) scroll_pane_cp20

0x9dc4,	// (0x0004bbf9) list_single_tmo_link_pane_ParamLimits

0x9dc4,	// (0x0004bbf9) list_single_tmo_link_pane

0x9dd4,	// (0x0004bc09) list_single_tmo_link_pane_t1

0x9de2,	// (0x0004bc17) list_tmo_note_info_text_pane_t1_ParamLimits

0x9de2,	// (0x0004bc17) list_tmo_note_info_text_pane_t1

0xbd3d,	// (0x0004db72) aid_size_touch_scroll_bar_cp01_ParamLimits

0xbd3d,	// (0x0004db72) aid_size_touch_scroll_bar_cp01

0xb453,	// (0x0004d288) aid_size_touch_slider_marker

0xb8b3,	// (0x0004d6e8) popup_settings_window_ParamLimits

0xb8b3,	// (0x0004d6e8) popup_settings_window

0x033b,	// (0x00042170) popup_candi_list_indi_window

0x4646,	// (0x0004647b) aid_touch_navi_pane_ParamLimits

0x1e13,	// (0x00043c48) rs_clock_indi_pane

0x1e1c,	// (0x00043c51) sctrl_sk_bottom_pane_ParamLimits

0x1e2d,	// (0x00043c62) sctrl_sk_top_pane_ParamLimits

0x1f12,	// (0x00043d47) popup_fep_tooltip_window

0x969e,	// (0x0004b4d3) aid_size_cell_widget_grid_ParamLimits

0xeeec,	// (0x00050d21) cell_ai5_widget_pane_g1_ParamLimits

0xeeec,	// (0x00050d21) cell_ai5_widget_pane_g1

0xef3f,	// (0x00050d74) cell_ai5_widget_pane_g6_ParamLimits

0xef4b,	// (0x00050d80) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe45,	// (0x00051c7a) cell_ai5_widget_pane_g_ParamLimits

0xfe45,	// (0x00051c7a) cell_ai5_widget_pane_g

0xf04f,	// (0x00050e84) cell_ai5_widget_pane_t10_ParamLimits

0xf04f,	// (0x00050e84) cell_ai5_widget_pane_t10

0xf065,	// (0x00050e9a) grid_ai5_widget_pane_ParamLimits

0xf09a,	// (0x00050ecf) cell_contacts_ai5_widget_pane_ParamLimits

0xf09a,	// (0x00050ecf) cell_contacts_ai5_widget_pane

0x9af5,	// (0x0004b92a) popup_discreet_window_t3_ParamLimits

0x9af5,	// (0x0004b92a) popup_discreet_window_t3

0x9b84,	// (0x0004b9b9) popup_fshwr2_char_preview_window_ParamLimits

0x9b84,	// (0x0004b9b9) popup_fshwr2_char_preview_window

0xf1ed,	// (0x00051022) tmo_note_info_pane_t1

0xf202,	// (0x00051037) tmo_note_info_pane_t2

0xf21b,	// (0x00051050) tmo_note_info_pane_t3

0x9d86,	// (0x0004bbbb) tmo_note_info_pane_t4

0x9d98,	// (0x0004bbcd) tmo_note_info_pane_t5

0x0004,

0xfecc,	// (0x00051d01) tmo_note_info_pane_t

0x9daa,	// (0x0004bbdf) list_tmo_link_pane_ParamLimits

0x9db7,	// (0x0004bbec) scroll_pane_cp20_ParamLimits

0xda73,	// (0x0004f8a8) bg_popup_fep_char_preview_window_cp01

0x9dfb,	// (0x0004bc30) popup_fshwr2_char_preview_window_t1

0x9e09,	// (0x0004bc3e) popup_candi_list_indi_window_g1

0x9e12,	// (0x0004bc47) bg_cell_contacts_ai5_widget_pane

0x9e1e,	// (0x0004bc53) cell_contacts_ai5_widget_pane_g1

0x9e32,	// (0x0004bc67) cell_contacts_ai5_widget_pane_g2

0x9e41,	// (0x0004bc76) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed7,	// (0x00051d0c) cell_contacts_ai5_widget_pane_g

0x9e54,	// (0x0004bc89) cell_contacts_ai5_widget_pane_t1

0x2fca,	// (0x00044dff) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf295,	// (0x000510ca) settings_container_pane

0x3c53,	// (0x00045a88) listscroll_set_pane_copy1

0x688c,	// (0x000486c1) scroll_pane_cp121_copy1

0x9eda,	// (0x0004bd0f) set_content_pane_copy1

0xf2a1,	// (0x000510d6) aid_height_set_list_copy1_ParamLimits

0xf2a1,	// (0x000510d6) aid_height_set_list_copy1

0x5f1b,	// (0x00047d50) aid_size_parent_copy1_ParamLimits

0x5f1b,	// (0x00047d50) aid_size_parent_copy1

0xf2ad,	// (0x000510e2) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf2ad,	// (0x000510e2) button_value_adjust_pane_cp6_copy1

0x3fd1,	// (0x00045e06) list_highlight_pane_cp2_copy1_ParamLimits

0x3fd1,	// (0x00045e06) list_highlight_pane_cp2_copy1

0xf2c1,	// (0x000510f6) list_set_pane_copy1_ParamLimits

0xf2c1,	// (0x000510f6) list_set_pane_copy1

0xf230,	// (0x00051065) main_pane_set_t1_copy1_ParamLimits

0xf230,	// (0x00051065) main_pane_set_t1_copy1

0xf26a,	// (0x0005109f) main_pane_set_t2_copy1_ParamLimits

0xf26a,	// (0x0005109f) main_pane_set_t2_copy1

0xf388,	// (0x000511bd) main_pane_set_t3_copy1

0xf396,	// (0x000511cb) main_pane_set_t4_copy1

0xf289,	// (0x000510be) set_content_pane_g1_copy1_ParamLimits

0xf289,	// (0x000510be) set_content_pane_g1_copy1

0xf3a4,	// (0x000511d9) setting_code_pane_copy1

0x9fef,	// (0x0004be24) setting_slider_graphic_pane_copy1

0x9fef,	// (0x0004be24) setting_slider_pane_copy1

0x9fef,	// (0x0004be24) setting_text_pane_copy1

0x9ff9,	// (0x0004be2e) setting_volume_pane_copy1

0xf3ae,	// (0x000511e3) settings_code_pane_cp2_copy1

0xf3b6,	// (0x000511eb) settings_code_pane_cp_copy1_ParamLimits

0xf3b6,	// (0x000511eb) settings_code_pane_cp_copy1

0xf3ca,	// (0x000511ff) volume_set_pane_copy1

0xf3d6,	// (0x0005120b) volume_set_pane_g10_copy1

0xf3e2,	// (0x00051217) volume_set_pane_g1_copy1

0xf3ec,	// (0x00051221) volume_set_pane_g2_copy1

0xf3f6,	// (0x0005122b) volume_set_pane_g3_copy1

0xf400,	// (0x00051235) volume_set_pane_g4_copy1

0xf40a,	// (0x0005123f) volume_set_pane_g5_copy1

0xf414,	// (0x00051249) volume_set_pane_g6_copy1

0xf41e,	// (0x00051253) volume_set_pane_g7_copy1

0xf428,	// (0x0005125d) volume_set_pane_g8_copy1

0xf432,	// (0x00051267) volume_set_pane_g9_copy1

0x2737,	// (0x0004456c) bg_set_opt_pane_cp_copy1_ParamLimits

0x2737,	// (0x0004456c) bg_set_opt_pane_cp_copy1

0xa090,	// (0x0004bec5) setting_slider_pane_t1_copy1_ParamLimits

0xa090,	// (0x0004bec5) setting_slider_pane_t1_copy1

0xf43c,	// (0x00051271) setting_slider_pane_t2_copy1_ParamLimits

0xf43c,	// (0x00051271) setting_slider_pane_t2_copy1

0xf456,	// (0x0005128b) setting_slider_pane_t3_copy1_ParamLimits

0xf456,	// (0x0005128b) setting_slider_pane_t3_copy1

0xf46e,	// (0x000512a3) slider_set_pane_copy1_ParamLimits

0xf46e,	// (0x000512a3) slider_set_pane_copy1

0x3031,	// (0x00044e66) set_opt_bg_pane_g1_copy2

0x3039,	// (0x00044e6e) set_opt_bg_pane_g2_copy2

0xa0f6,	// (0x0004bf2b) set_opt_bg_pane_g3_copy2

0x3049,	// (0x00044e7e) set_opt_bg_pane_g4_copy2

0x3051,	// (0x00044e86) set_opt_bg_pane_g5_copy2

0x3059,	// (0x00044e8e) set_opt_bg_pane_g6_copy2

0xf484,	// (0x000512b9) set_opt_bg_pane_g7_copy2

0xa10a,	// (0x0004bf3f) set_opt_bg_pane_g8_copy2

0xa114,	// (0x0004bf49) set_opt_bg_pane_g9_copy2

0x261f,	// (0x00044454) aid_size_touch_slider_mark_copy1_ParamLimits

0x261f,	// (0x00044454) aid_size_touch_slider_mark_copy1

0xa11e,	// (0x0004bf53) slider_set_pane_g1_copy1

0x2633,	// (0x00044468) slider_set_pane_g2_copy1

0x174d,	// (0x00043582) slider_set_pane_g3_copy1_ParamLimits

0x174d,	// (0x00043582) slider_set_pane_g3_copy1

0x1761,	// (0x00043596) slider_set_pane_g4_copy1_ParamLimits

0x1761,	// (0x00043596) slider_set_pane_g4_copy1

0x1779,	// (0x000435ae) slider_set_pane_g5_copy1_ParamLimits

0x1779,	// (0x000435ae) slider_set_pane_g5_copy1

0x174d,	// (0x00043582) slider_set_pane_g6_copy1_ParamLimits

0x174d,	// (0x00043582) slider_set_pane_g6_copy1

0xc8dc,	// (0x0004e711) slider_set_pane_g7_copy1_ParamLimits

0xc8dc,	// (0x0004e711) slider_set_pane_g7_copy1

0xda87,	// (0x0004f8bc) bg_set_opt_pane_cp2_copy1

0xa127,	// (0x0004bf5c) setting_slider_graphic_pane_g1_copy1

0xf48e,	// (0x000512c3) setting_slider_graphic_pane_t1_copy1

0xf49e,	// (0x000512d3) setting_slider_graphic_pane_t2_copy1

0xf4ae,	// (0x000512e3) slider_set_pane_cp_copy1

0xa160,	// (0x0004bf95) input_focus_pane_cp1_copy1

0xa169,	// (0x0004bf9e) list_set_text_pane_copy1

0xa171,	// (0x0004bfa6) setting_text_pane_g1_copy1

0xf54d,	// (0x00051382) set_text_pane_t1_copy1

0xa160,	// (0x0004bf95) input_focus_pane_cp2_copy1

0xa171,	// (0x0004bfa6) setting_code_pane_g1_copy1

0xf4b6,	// (0x000512eb) setting_code_pane_t1_copy1

0xf4c4,	// (0x000512f9) list_set_graphic_pane_copy1

0xda87,	// (0x0004f8bc) bg_set_opt_pane_cp4_copy1

0xc031,	// (0x0004de66) list_set_graphic_pane_g1_copy1_ParamLimits

0xc031,	// (0x0004de66) list_set_graphic_pane_g1_copy1

0xf4d6,	// (0x0005130b) list_set_graphic_pane_g2_copy1

0xc049,	// (0x0004de7e) list_set_graphic_pane_t1_copy1_ParamLimits

0xc049,	// (0x0004de7e) list_set_graphic_pane_t1_copy1

0x70d1,	// (0x00048f06) rs_clock_indi_pane_g1

0xa1a2,	// (0x0004bfd7) rs_clock_indi_pane_t1

0xa1b0,	// (0x0004bfe5) rs_indi_pane

0xa1b8,	// (0x0004bfed) rs_indi_pane_g1

0xa1c1,	// (0x0004bff6) rs_indi_pane_g2

0xa1ca,	// (0x0004bfff) rs_indi_pane_g3

0x0002,

0xfede,	// (0x00051d13) rs_indi_pane_g

0x3c53,	// (0x00045a88) bg_popup_preview_window_pane_cp03

0xa1d3,	// (0x0004c008) popup_fep_tooltip_window_t1

0x7d77,	// (0x00049bac) popup_note2_window_g2_ParamLimits

0x7d77,	// (0x00049bac) popup_note2_window_g2

0x0001,

0xfc77,	// (0x00051aac) popup_note2_window_g_ParamLimits

0xfc77,	// (0x00051aac) popup_note2_window_g

0x827f,	// (0x0004a0b4) bg_popup_sub_pane_cp11_ParamLimits

0x828c,	// (0x0004a0c1) cell_ai3_links_pane_g1_ParamLimits

0x82a3,	// (0x0004a0d8) cell_ai3_links_pane_t1

0xf54d,	// (0x00051382) set_text_pane_t1_copy1_ParamLimits

0x3b60,	// (0x00045995) cell_graphic_popup_pane_cp2_ParamLimits

0x3b60,	// (0x00045995) cell_graphic_popup_pane_cp2

0xa1e1,	// (0x0004c016) cell_graphic_popup_pane_g1_cp2

0x2d09,	// (0x00044b3e) cell_graphic_popup_pane_g2_cp2

0xa1e9,	// (0x0004c01e) cell_graphic_popup_pane_g3_cp2

0xa1f1,	// (0x0004c026) cell_graphic_popup_pane_t2_cp2

0x2d1a,	// (0x00044b4f) grid_highlight_pane_cp3_cp2

0x337d,	// (0x000451b2) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2fca,	// (0x00044dff) main_tmo_pane_ParamLimits

0xe2f2,	// (0x00050127) popup_tmo_big_image_note_window

0xeedc,	// (0x00050d11) cell_ai5_widget_list_pane

0xeee4,	// (0x00050d19) cell_ai5_widget_lrg_icon_pane

0xf1ed,	// (0x00051022) tmo_note_info_pane_t1_ParamLimits

0xf202,	// (0x00051037) tmo_note_info_pane_t2_ParamLimits

0xf21b,	// (0x00051050) tmo_note_info_pane_t3_ParamLimits

0x9d86,	// (0x0004bbbb) tmo_note_info_pane_t4_ParamLimits

0x9d98,	// (0x0004bbcd) tmo_note_info_pane_t5_ParamLimits

0xfecc,	// (0x00051d01) tmo_note_info_pane_t_ParamLimits

0xf295,	// (0x000510ca) settings_container_pane_ParamLimits

0xa158,	// (0x0004bf8d) indicator_popup_pane_cp5

0xa158,	// (0x0004bf8d) indicator_popup_pane_cp6

0xf4c4,	// (0x000512f9) list_set_graphic_pane_copy1_ParamLimits

0xda73,	// (0x0004f8a8) bg_popup_window_pane_cp23

0xa1ff,	// (0x0004c034) popup_tmo_big_image_note_window_g1

0xa20b,	// (0x0004c040) popup_tmo_big_image_note_window_t1

0xa21b,	// (0x0004c050) popup_tmo_big_image_note_window_t2

0xa22b,	// (0x0004c060) popup_tmo_big_image_note_window_t3

0x0002,

0xfee5,	// (0x00051d1a) popup_tmo_big_image_note_window_t

0xf4de,	// (0x00051313) cell_ai5_widget_lrg_icon_pane_g1

0xf4e6,	// (0x0005131b) cell_ai5_widget_lrg_icon_pane_t1

0xf4f4,	// (0x00051329) cell_ai5_widget_list_row_pane_ParamLimits

0xf4f4,	// (0x00051329) cell_ai5_widget_list_row_pane

0xf50d,	// (0x00051342) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf50d,	// (0x00051342) cell_ai5_widget_list_row_pane_g1

0xf51a,	// (0x0005134f) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf51a,	// (0x0005134f) cell_ai5_widget_list_row_pane_t1

0xf532,	// (0x00051367) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf532,	// (0x00051367) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfeec,	// (0x00051d21) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeec,	// (0x00051d21) cell_ai5_widget_list_row_pane_t

0xda73,	// (0x0004f8a8) main_fep_vtchi_ss_pane

0xa2a1,	// (0x0004c0d6) popup_fep_char_pre_window

0xa2a9,	// (0x0004c0de) popup_fep_ituss_window

0xa2c3,	// (0x0004c0f8) popup_fep_vkbss_window

0xa2e3,	// (0x0004c118) grid_vkbss_keypad_pane_ParamLimits

0xa2e3,	// (0x0004c118) grid_vkbss_keypad_pane

0xa2f3,	// (0x0004c128) ituss_keypad_pane

0xa309,	// (0x0004c13e) aid_vkbss_key_offset_ParamLimits

0xa309,	// (0x0004c13e) aid_vkbss_key_offset

0xa315,	// (0x0004c14a) cell_vkbss_key_pane_ParamLimits

0xa315,	// (0x0004c14a) cell_vkbss_key_pane

0xa32b,	// (0x0004c160) bg_cell_vkbss_key_g1_ParamLimits

0xa32b,	// (0x0004c160) bg_cell_vkbss_key_g1

0xa337,	// (0x0004c16c) cell_vkbss_key_3p_pane_ParamLimits

0xa337,	// (0x0004c16c) cell_vkbss_key_3p_pane

0xa351,	// (0x0004c186) cell_vkbss_key_g1_ParamLimits

0xa351,	// (0x0004c186) cell_vkbss_key_g1

0xa36b,	// (0x0004c1a0) cell_vkbss_key_t1_ParamLimits

0xa36b,	// (0x0004c1a0) cell_vkbss_key_t1

0xa396,	// (0x0004c1cb) cell_ituss_key_pane_ParamLimits

0xa396,	// (0x0004c1cb) cell_ituss_key_pane

0xa3a6,	// (0x0004c1db) bg_cell_ituss_key_g1_ParamLimits

0xa3a6,	// (0x0004c1db) bg_cell_ituss_key_g1

0xa3b2,	// (0x0004c1e7) cell_ituss_key_pane_g1_ParamLimits

0xa3b2,	// (0x0004c1e7) cell_ituss_key_pane_g1

0xa3be,	// (0x0004c1f3) cell_ituss_key_pane_g2_ParamLimits

0xa3be,	// (0x0004c1f3) cell_ituss_key_pane_g2

0x0001,

0xfef1,	// (0x00051d26) cell_ituss_key_pane_g_ParamLimits

0xfef1,	// (0x00051d26) cell_ituss_key_pane_g

0xa3d7,	// (0x0004c20c) cell_ituss_key_t1_ParamLimits

0xa3d7,	// (0x0004c20c) cell_ituss_key_t1

0xa405,	// (0x0004c23a) cell_ituss_key_t2_ParamLimits

0xa405,	// (0x0004c23a) cell_ituss_key_t2

0xa436,	// (0x0004c26b) cell_ituss_key_t3_ParamLimits

0xa436,	// (0x0004c26b) cell_ituss_key_t3

0xa467,	// (0x0004c29c) cell_ituss_key_t4_ParamLimits

0xa467,	// (0x0004c29c) cell_ituss_key_t4

0x0003,

0xfef6,	// (0x00051d2b) cell_ituss_key_t_ParamLimits

0xfef6,	// (0x00051d2b) cell_ituss_key_t

0xa498,	// (0x0004c2cd) cell_vkbss_key_3p_pane_g1

0xa4a0,	// (0x0004c2d5) cell_vkbss_key_3p_pane_g2

0xa4a8,	// (0x0004c2dd) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeff,	// (0x00051d34) cell_vkbss_key_3p_pane_g

0xda73,	// (0x0004f8a8) bg_popup_fep_char_preview_window_cp02

0xa4b0,	// (0x0004c2e5) popup_fep_char_pre_window_t1

0xeed2,	// (0x00050d07) main_ai5_sk_pane

0x9e12,	// (0x0004bc47) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x9e1e,	// (0x0004bc53) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x9e32,	// (0x0004bc67) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x9e41,	// (0x0004bc76) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed7,	// (0x00051d0c) cell_contacts_ai5_widget_pane_g_ParamLimits

0x9e54,	// (0x0004bc89) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2fca,	// (0x00044dff) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf544,	// (0x00051379) main_ai5_sk_pane_g1

0x4fc0,	// (0x00046df5) popup_query_code_window_g1

0xa2b8,	// (0x0004c0ed) popup_fep_vkb_icf_pane

0xa2ce,	// (0x0004c103) popup_fep_vtchi_icf_pane

0x2fca,	// (0x00044dff) bg_icf_pane

0xa4d7,	// (0x0004c30c) list_vkb_icf_pane

0x2fca,	// (0x00044dff) bg_icf_pane_cp01

0xa4ef,	// (0x0004c324) vtchi_icf_list_pane

0xa4ff,	// (0x0004c334) list_vkb_icf_pane_t1_ParamLimits

0xa4ff,	// (0x0004c334) list_vkb_icf_pane_t1

0xa516,	// (0x0004c34b) vtchi_icf_list_pane_t1_ParamLimits

0xa516,	// (0x0004c34b) vtchi_icf_list_pane_t1

0xa2a9,	// (0x0004c0de) popup_fep_ituss_window_ParamLimits

0xa2ce,	// (0x0004c103) popup_fep_vtchi_icf_pane_ParamLimits

0xa2f3,	// (0x0004c128) ituss_keypad_pane_ParamLimits

0xa2ff,	// (0x0004c134) ituss_sks_pane

0x2fca,	// (0x00044dff) bg_icf_pane_ParamLimits

0xa4c8,	// (0x0004c2fd) icf_edit_indi_pane_ParamLimits

0xa4c8,	// (0x0004c2fd) icf_edit_indi_pane

0xa4d7,	// (0x0004c30c) list_vkb_icf_pane_ParamLimits

0x2fca,	// (0x00044dff) bg_icf_pane_cp01_ParamLimits

0xa4e3,	// (0x0004c318) icf_edit_indi_pane_cp01_ParamLimits

0xa4e3,	// (0x0004c318) icf_edit_indi_pane_cp01

0xa4f7,	// (0x0004c32c) vtchi_query_pane

0x735b,	// (0x00049190) icf_edit_indi_pane_g1_ParamLimits

0x735b,	// (0x00049190) icf_edit_indi_pane_g1

0xa52f,	// (0x0004c364) icf_edit_indi_pane_g2_ParamLimits

0xa52f,	// (0x0004c364) icf_edit_indi_pane_g2

0x0001,

0xff06,	// (0x00051d3b) icf_edit_indi_pane_g_ParamLimits

0xff06,	// (0x00051d3b) icf_edit_indi_pane_g

0xa53b,	// (0x0004c370) icf_edit_indi_pane_t1

0xa549,	// (0x0004c37e) bg_input_focus_pane_cp042

0x2eed,	// (0x00044d22) vtchi_button_pane

0xa552,	// (0x0004c387) vtchi_query_pane_t1

0xa560,	// (0x0004c395) vtchi_query_pane_t2

0xa56e,	// (0x0004c3a3) vtchi_query_pane_t3

0x0002,

0xff0b,	// (0x00051d40) vtchi_query_pane_t

0xda73,	// (0x0004f8a8) bg_button_pane_cp13

0xa57c,	// (0x0004c3b1) vtchi_button_pane_g1

0xa584,	// (0x0004c3b9) ituss_sks_pane_g1

0xa58f,	// (0x0004c3c4) ituss_sks_pane_g2

0x0001,

0xff12,	// (0x00051d47) ituss_sks_pane_g

0xa597,	// (0x0004c3cc) ituss_sks_pane_t1

0xa5a5,	// (0x0004c3da) ituss_sks_pane_t2

0x0001,

0xff17,	// (0x00051d4c) ituss_sks_pane_t

0x6bee,	// (0x00048a23) indicator_nsta_pane_cp_g1

0x6bf7,	// (0x00048a2c) indicator_nsta_pane_cp_g2

0x6bff,	// (0x00048a34) indicator_nsta_pane_cp_g3

0x6c07,	// (0x00048a3c) indicator_nsta_pane_cp_g4

0x6c0f,	// (0x00048a44) indicator_nsta_pane_cp_g5

0x6c17,	// (0x00048a4c) indicator_nsta_pane_cp_g6

0x0005,

0xfac1,	// (0x000518f6) indicator_nsta_pane_cp_g

0xecef,	// (0x00050b24) cell_graphic2_pane_t2_ParamLimits

0xecef,	// (0x00050b24) cell_graphic2_pane_t2

0x0001,

0xfdce,	// (0x00051c03) cell_graphic2_pane_t_ParamLimits

0xfdce,	// (0x00051c03) cell_graphic2_pane_t

0xed27,	// (0x00050b5c) cell_graphic2_control_pane_t1

0xbf85,	// (0x0004ddba) signal_pane_g3_ParamLimits

0xbf85,	// (0x0004ddba) signal_pane_g3

0xbf99,	// (0x0004ddce) signal_pane_g4_ParamLimits

0xbf99,	// (0x0004ddce) signal_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Large
