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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0000f84f };

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
0xbb36,	// (0x0001b385) Screen

0xbb42,	// (0x0001b391) application_window_ParamLimits

0xbb42,	// (0x0001b391) application_window

0x1bbb,	// (0x0001140a) screen_g1

0xb222,	// (0x0001aa71) area_bottom_pane_ParamLimits

0xb222,	// (0x0001aa71) area_bottom_pane

0x004f,	// (0x0000f89e) area_top_pane_ParamLimits

0x004f,	// (0x0000f89e) area_top_pane

0x00ed,	// (0x0000f93c) main_pane_ParamLimits

0x00ed,	// (0x0000f93c) main_pane

0x1bc5,	// (0x00011414) misc_graphics

0xd08e,	// (0x0001c8dd) battery_pane_ParamLimits

0xd08e,	// (0x0001c8dd) battery_pane

0x50d5,	// (0x00014924) bg_status_flat_pane_g8

0x50dd,	// (0x0001492c) bg_status_flat_pane_g9

0x4434,	// (0x00013c83) context_pane_ParamLimits

0x4434,	// (0x00013c83) context_pane

0xd205,	// (0x0001ca54) navi_pane_ParamLimits

0xd205,	// (0x0001ca54) navi_pane

0xd28e,	// (0x0001cadd) signal_pane_ParamLimits

0xd28e,	// (0x0001cadd) signal_pane

0x0008,

0xf8a8,	// (0x0001f0f7) bg_status_flat_pane_g

0xd31e,	// (0x0001cb6d) status_pane_g1_ParamLimits

0xd31e,	// (0x0001cb6d) status_pane_g1

0xd334,	// (0x0001cb83) status_pane_g2_ParamLimits

0xd334,	// (0x0001cb83) status_pane_g2

0x4674,	// (0x00013ec3) status_pane_g3_ParamLimits

0x4674,	// (0x00013ec3) status_pane_g3

0x0004,

0xf7db,	// (0x0001f02a) status_pane_g_ParamLimits

0xf7db,	// (0x0001f02a) status_pane_g

0xd340,	// (0x0001cb8f) title_pane_ParamLimits

0xd340,	// (0x0001cb8f) title_pane

0xd39d,	// (0x0001cbec) uni_indicator_pane_ParamLimits

0xd39d,	// (0x0001cbec) uni_indicator_pane

0x3c59,	// (0x000134a8) bg_list_pane_ParamLimits

0x3c59,	// (0x000134a8) bg_list_pane

0xc8cb,	// (0x0001c11a) find_pane

0xc8d3,	// (0x0001c122) listscroll_app_pane_ParamLimits

0xc8d3,	// (0x0001c122) listscroll_app_pane

0x3c8d,	// (0x000134dc) listscroll_form_pane

0xc8df,	// (0x0001c12e) listscroll_gen_pane_ParamLimits

0xc8df,	// (0x0001c12e) listscroll_gen_pane

0x3c8d,	// (0x000134dc) listscroll_set_pane

0x5cb6,	// (0x00015505) main_idle_act_pane

0x392d,	// (0x0001317c) main_idle_trad_pane

0x392d,	// (0x0001317c) main_list_empty_pane

0x3cbb,	// (0x0001350a) main_midp_pane

0x3cc7,	// (0x00013516) main_pane_g1_ParamLimits

0x3cc7,	// (0x00013516) main_pane_g1

0xc8f3,	// (0x0001c142) popup_ai_message_window_ParamLimits

0xc8f3,	// (0x0001c142) popup_ai_message_window

0xc993,	// (0x0001c1e2) popup_fep_china_uni_window_ParamLimits

0xc993,	// (0x0001c1e2) popup_fep_china_uni_window

0x3ded,	// (0x0001363c) popup_fep_japan_candidate_window_ParamLimits

0x3ded,	// (0x0001363c) popup_fep_japan_candidate_window

0x3e17,	// (0x00013666) popup_fep_japan_predictive_window_ParamLimits

0x3e17,	// (0x00013666) popup_fep_japan_predictive_window

0xc9f3,	// (0x0001c242) popup_find_window

0xca10,	// (0x0001c25f) popup_grid_graphic_window_ParamLimits

0xca10,	// (0x0001c25f) popup_grid_graphic_window

0x3e88,	// (0x000136d7) popup_large_graphic_colour_window

0xcab4,	// (0x0001c303) popup_menu_window_ParamLimits

0xcab4,	// (0x0001c303) popup_menu_window

0xcca0,	// (0x0001c4ef) popup_note_image_window

0xcc60,	// (0x0001c4af) popup_note_wait_window_ParamLimits

0xcc60,	// (0x0001c4af) popup_note_wait_window

0xccb8,	// (0x0001c507) popup_note_window_ParamLimits

0xccb8,	// (0x0001c507) popup_note_window

0xcd66,	// (0x0001c5b5) popup_query_code_window_ParamLimits

0xcd66,	// (0x0001c5b5) popup_query_code_window

0x40f4,	// (0x00013943) popup_query_data_code_window_ParamLimits

0x40f4,	// (0x00013943) popup_query_data_code_window

0xcda6,	// (0x0001c5f5) popup_query_data_window_ParamLimits

0xcda6,	// (0x0001c5f5) popup_query_data_window

0xce3a,	// (0x0001c689) popup_query_sat_info_window_ParamLimits

0xce3a,	// (0x0001c689) popup_query_sat_info_window

0xcee5,	// (0x0001c734) popup_snote_single_graphic_window_ParamLimits

0xcee5,	// (0x0001c734) popup_snote_single_graphic_window

0xcee5,	// (0x0001c734) popup_snote_single_text_window_ParamLimits

0xcee5,	// (0x0001c734) popup_snote_single_text_window

0x418f,	// (0x000139de) popup_sub_window_general

0x42d5,	// (0x00013b24) popup_window_general_ParamLimits

0x42d5,	// (0x00013b24) popup_window_general

0x42ee,	// (0x00013b3d) power_save_pane

0xb3a8,	// (0x0001abf7) control_pane_g1_ParamLimits

0xb3a8,	// (0x0001abf7) control_pane_g1

0x088d,	// (0x000100dc) control_pane_g2_ParamLimits

0x088d,	// (0x000100dc) control_pane_g2

0x3bfa,	// (0x00013449) control_pane_g3_ParamLimits

0x3bfa,	// (0x00013449) control_pane_g3

0x0007,

0xf7c3,	// (0x0001f012) control_pane_g_ParamLimits

0xf7c3,	// (0x0001f012) control_pane_g

0xb3ea,	// (0x0001ac39) control_pane_t1_ParamLimits

0xb3ea,	// (0x0001ac39) control_pane_t1

0xb448,	// (0x0001ac97) control_pane_t2_ParamLimits

0xb448,	// (0x0001ac97) control_pane_t2

0x0002,

0xf7d4,	// (0x0001f023) control_pane_t_ParamLimits

0xf7d4,	// (0x0001f023) control_pane_t

0x3b1b,	// (0x0001336a) navi_navi_volume_pane_cp1

0x3b24,	// (0x00013373) status_small_icon_pane

0x3b2c,	// (0x0001337b) status_small_pane_g1_ParamLimits

0x3b2c,	// (0x0001337b) status_small_pane_g1

0x3b60,	// (0x000133af) status_small_pane_g2_ParamLimits

0x3b60,	// (0x000133af) status_small_pane_g2

0x3b6c,	// (0x000133bb) status_small_pane_g3_ParamLimits

0x3b6c,	// (0x000133bb) status_small_pane_g3

0x3b78,	// (0x000133c7) status_small_pane_g4_ParamLimits

0x3b78,	// (0x000133c7) status_small_pane_g4

0x3b84,	// (0x000133d3) status_small_pane_g5_ParamLimits

0x3b84,	// (0x000133d3) status_small_pane_g5

0x3b93,	// (0x000133e2) status_small_pane_g6_ParamLimits

0x3b93,	// (0x000133e2) status_small_pane_g6

0x0007,

0xf7b2,	// (0x0001f001) status_small_pane_g_ParamLimits

0xf7b2,	// (0x0001f001) status_small_pane_g

0x3bc3,	// (0x00013412) status_small_pane_t1

0x3be6,	// (0x00013435) status_small_wait_pane_ParamLimits

0x3be6,	// (0x00013435) status_small_wait_pane

0xc68a,	// (0x0001bed9) aid_levels_signal_ParamLimits

0xc68a,	// (0x0001bed9) aid_levels_signal

0xc6a2,	// (0x0001bef1) signal_pane_g1_ParamLimits

0xc6a2,	// (0x0001bef1) signal_pane_g1

0xc6bd,	// (0x0001bf0c) signal_pane_g2_ParamLimits

0xc6bd,	// (0x0001bf0c) signal_pane_g2

0x0001,

0xf747,	// (0x0001ef96) signal_pane_g_ParamLimits

0xf747,	// (0x0001ef96) signal_pane_g

0x3374,	// (0x00012bc3) context_pane_g1

0xbb52,	// (0x0001b3a1) title_pane_g1

0xbb87,	// (0x0001b3d6) title_pane_t1

0x1c6d,	// (0x000114bc) title_pane_t2

0x1c93,	// (0x000114e2) title_pane_t3

0x0002,

0xf59b,	// (0x0001edea) title_pane_t

0xd3c5,	// (0x0001cc14) aid_levels_battery_ParamLimits

0xd3c5,	// (0x0001cc14) aid_levels_battery

0xd3e1,	// (0x0001cc30) battery_pane_g1_ParamLimits

0xd3e1,	// (0x0001cc30) battery_pane_g1

0xd3fe,	// (0x0001cc4d) battery_pane_g2_ParamLimits

0xd3fe,	// (0x0001cc4d) battery_pane_g2

0x0001,

0xf7e6,	// (0x0001f035) battery_pane_g_ParamLimits

0xf7e6,	// (0x0001f035) battery_pane_g

0xd63e,	// (0x0001ce8d) uni_indicator_pane_g1

0xd653,	// (0x0001cea2) uni_indicator_pane_g2

0xd668,	// (0x0001ceb7) uni_indicator_pane_g3

0x0005,

0xf950,	// (0x0001f19f) uni_indicator_pane_g

0x379b,	// (0x00012fea) navi_icon_pane_ParamLimits

0x379b,	// (0x00012fea) navi_icon_pane

0x36e2,	// (0x00012f31) navi_midp_pane

0x37b7,	// (0x00013006) navi_navi_pane

0x37c1,	// (0x00013010) navi_text_pane_ParamLimits

0x37c1,	// (0x00013010) navi_text_pane

0x1bbb,	// (0x0001140a) status_small_wait_pane_g1

0x20f1,	// (0x00011940) status_small_wait_pane_g2

0x0001,

0xf94b,	// (0x0001f19a) status_small_wait_pane_g

0xd5dd,	// (0x0001ce2c) navi_navi_icon_text_pane

0xd5e5,	// (0x0001ce34) navi_navi_pane_g1_ParamLimits

0xd5e5,	// (0x0001ce34) navi_navi_pane_g1

0xd5f7,	// (0x0001ce46) navi_navi_pane_g2_ParamLimits

0xd5f7,	// (0x0001ce46) navi_navi_pane_g2

0x0001,

0xf919,	// (0x0001f168) navi_navi_pane_g_ParamLimits

0xf919,	// (0x0001f168) navi_navi_pane_g

0x5764,	// (0x00014fb3) navi_navi_tabs_pane

0xd609,	// (0x0001ce58) navi_navi_text_pane

0xd5dd,	// (0x0001ce2c) navi_navi_volume_pane

0xd5cb,	// (0x0001ce1a) navi_text_pane_t1

0xd5bf,	// (0x0001ce0e) navi_icon_pane_g1

0x5655,	// (0x00014ea4) navi_navi_text_pane_t1

0xb6af,	// (0x0001aefe) navi_navi_volume_pane_g1

0xb6b7,	// (0x0001af06) volume_small_pane

0xd51b,	// (0x0001cd6a) navi_navi_icon_text_pane_g1

0xd523,	// (0x0001cd72) navi_navi_icon_text_pane_t1

0x37b7,	// (0x00013006) navi_tabs_2_long_pane

0x37b7,	// (0x00013006) navi_tabs_2_pane

0x37b7,	// (0x00013006) navi_tabs_3_long_pane

0x37b7,	// (0x00013006) navi_tabs_3_pane

0x37b7,	// (0x00013006) navi_tabs_4_pane

0xb68f,	// (0x0001aede) tabs_2_active_pane_ParamLimits

0xb68f,	// (0x0001aede) tabs_2_active_pane

0xb69f,	// (0x0001aeee) tabs_2_passive_pane_ParamLimits

0xb69f,	// (0x0001aeee) tabs_2_passive_pane

0xb65d,	// (0x0001aeac) tabs_3_active_pane_ParamLimits

0xb65d,	// (0x0001aeac) tabs_3_active_pane

0xb66d,	// (0x0001aebc) tabs_3_passive_pane_ParamLimits

0xb66d,	// (0x0001aebc) tabs_3_passive_pane

0xb67e,	// (0x0001aecd) tabs_3_passive_pane_cp_ParamLimits

0xb67e,	// (0x0001aecd) tabs_3_passive_pane_cp

0xb619,	// (0x0001ae68) tabs_4_active_pane_ParamLimits

0xb619,	// (0x0001ae68) tabs_4_active_pane

0xb62a,	// (0x0001ae79) tabs_4_passive_pane_ParamLimits

0xb62a,	// (0x0001ae79) tabs_4_passive_pane

0xb63b,	// (0x0001ae8a) tabs_4_passive_pane_cp_ParamLimits

0xb63b,	// (0x0001ae8a) tabs_4_passive_pane_cp

0xb64c,	// (0x0001ae9b) tabs_4_passive_pane_cp2_ParamLimits

0xb64c,	// (0x0001ae9b) tabs_4_passive_pane_cp2

0xb5f5,	// (0x0001ae44) tabs_2_long_active_pane_ParamLimits

0xb5f5,	// (0x0001ae44) tabs_2_long_active_pane

0xb607,	// (0x0001ae56) tabs_2_long_passive_pane_ParamLimits

0xb607,	// (0x0001ae56) tabs_2_long_passive_pane

0xb5aa,	// (0x0001adf9) tabs_3_long_active_pane_ParamLimits

0xb5aa,	// (0x0001adf9) tabs_3_long_active_pane

0xb5c3,	// (0x0001ae12) tabs_3_long_passive_pane_ParamLimits

0xb5c3,	// (0x0001ae12) tabs_3_long_passive_pane

0xb5dc,	// (0x0001ae2b) tabs_3_long_passive_pane_cp_ParamLimits

0xb5dc,	// (0x0001ae2b) tabs_3_long_passive_pane_cp

0x0b72,	// (0x000103c1) volume_small_pane_g1

0xb559,	// (0x0001ada8) volume_small_pane_g2

0xb562,	// (0x0001adb1) volume_small_pane_g3

0xb56b,	// (0x0001adba) volume_small_pane_g4

0xb574,	// (0x0001adc3) volume_small_pane_g5

0xb57d,	// (0x0001adcc) volume_small_pane_g6

0xb586,	// (0x0001add5) volume_small_pane_g7

0xb58f,	// (0x0001adde) volume_small_pane_g8

0xb598,	// (0x0001ade7) volume_small_pane_g9

0xb5a1,	// (0x0001adf0) volume_small_pane_g10

0x0009,

0xf8e5,	// (0x0001f134) volume_small_pane_g

0x1f3b,	// (0x0001178a) bg_active_tab_pane_cp2_ParamLimits

0x1f3b,	// (0x0001178a) bg_active_tab_pane_cp2

0xbc13,	// (0x0001b462) tabs_3_active_pane_g1

0xbc1b,	// (0x0001b46a) tabs_3_active_pane_t1

0x1f3b,	// (0x0001178a) bg_passive_tab_pane_cp2_ParamLimits

0x1f3b,	// (0x0001178a) bg_passive_tab_pane_cp2

0xbc13,	// (0x0001b462) tabs_3_passive_pane_g1

0xbc1b,	// (0x0001b46a) tabs_3_passive_pane_t1

0x1f3b,	// (0x0001178a) bg_active_tab_pane_cp3_ParamLimits

0x1f3b,	// (0x0001178a) bg_active_tab_pane_cp3

0xbc2d,	// (0x0001b47c) tabs_4_active_pane_g1

0xbc35,	// (0x0001b484) tabs_4_active_pane_t1

0x1f3b,	// (0x0001178a) bg_passive_tab_pane_cp3_ParamLimits

0x1f3b,	// (0x0001178a) bg_passive_tab_pane_cp3

0xbc2d,	// (0x0001b47c) tabs_4_1_passive_pane_g1

0xbc35,	// (0x0001b484) tabs_4_1_passive_pane_t1

0x3cbb,	// (0x0001350a) list_highlight_pane_cp2

0xd738,	// (0x0001cf87) list_set_pane_ParamLimits

0xd738,	// (0x0001cf87) list_set_pane

0xd800,	// (0x0001d04f) main_pane_set_t1_ParamLimits

0xd800,	// (0x0001d04f) main_pane_set_t1

0xd820,	// (0x0001d06f) main_pane_set_t2_ParamLimits

0xd820,	// (0x0001d06f) main_pane_set_t2

0xd834,	// (0x0001d083) main_pane_set_t3_ParamLimits

0xd834,	// (0x0001d083) main_pane_set_t3

0xd848,	// (0x0001d097) main_pane_set_t4_ParamLimits

0xd848,	// (0x0001d097) main_pane_set_t4

0x0003,

0xf9b5,	// (0x0001f204) main_pane_set_t_ParamLimits

0xf9b5,	// (0x0001f204) main_pane_set_t

0xd85c,	// (0x0001d0ab) setting_code_pane

0x5e16,	// (0x00015665) setting_slider_graphic_pane

0x5e16,	// (0x00015665) setting_slider_pane

0x5e16,	// (0x00015665) setting_text_pane

0x5e16,	// (0x00015665) setting_volume_pane

0x0344,	// (0x0000fb93) volume_set_pane

0x1ca5,	// (0x000114f4) bg_set_opt_pane_cp

0x034e,	// (0x0000fb9d) setting_slider_pane_t1

0x0364,	// (0x0000fbb3) setting_slider_pane_t2

0x037e,	// (0x0000fbcd) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0001edf1) setting_slider_pane_t

0x0396,	// (0x0000fbe5) slider_set_pane

0x1bc5,	// (0x00011414) bg_set_opt_pane_cp2

0x1ce7,	// (0x00011536) setting_slider_graphic_pane_g1

0x03ac,	// (0x0000fbfb) setting_slider_graphic_pane_t1

0x03bc,	// (0x0000fc0b) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0001edf8) setting_slider_graphic_pane_t

0x03cc,	// (0x0000fc1b) slider_set_pane_cp

0x1bc5,	// (0x00011414) input_focus_pane_cp1

0x5c9d,	// (0x000154ec) list_set_text_pane

0x1bbb,	// (0x0001140a) setting_text_pane_g1

0x1bc5,	// (0x00011414) input_focus_pane_cp2

0x1bbb,	// (0x0001140a) setting_code_pane_g1

0x1cf0,	// (0x0001153f) setting_code_pane_t1

0x1cfe,	// (0x0001154d) set_text_pane_t1_ParamLimits

0x1cfe,	// (0x0001154d) set_text_pane_t1

0x2c1d,	// (0x0001246c) set_opt_bg_pane_g1

0x2c25,	// (0x00012474) set_opt_bg_pane_g2

0x5c75,	// (0x000154c4) set_opt_bg_pane_g3

0x2c35,	// (0x00012484) set_opt_bg_pane_g4

0x2c3d,	// (0x0001248c) set_opt_bg_pane_g5

0x2c45,	// (0x00012494) set_opt_bg_pane_g6

0x5c7f,	// (0x000154ce) set_opt_bg_pane_g7

0x5c89,	// (0x000154d8) set_opt_bg_pane_g8

0x5c93,	// (0x000154e2) set_opt_bg_pane_g9

0x0008,

0xf9a2,	// (0x0001f1f1) set_opt_bg_pane_g

0x5c68,	// (0x000154b7) slider_set_pane_g1

0x0d56,	// (0x000105a5) slider_set_pane_g2

0x0006,

0xf993,	// (0x0001f1e2) slider_set_pane_g

0x0cde,	// (0x0001052d) volume_set_pane_g1

0x0ce8,	// (0x00010537) volume_set_pane_g2

0x0cf2,	// (0x00010541) volume_set_pane_g3

0x0cfc,	// (0x0001054b) volume_set_pane_g4

0x0d06,	// (0x00010555) volume_set_pane_g5

0x0d10,	// (0x0001055f) volume_set_pane_g6

0x0d1a,	// (0x00010569) volume_set_pane_g7

0x0d24,	// (0x00010573) volume_set_pane_g8

0x0d2e,	// (0x0001057d) volume_set_pane_g9

0x0d38,	// (0x00010587) volume_set_pane_g10

0x0009,

0xf96b,	// (0x0001f1ba) volume_set_pane_g

0xbc47,	// (0x0001b496) indicator_pane_ParamLimits

0xbc47,	// (0x0001b496) indicator_pane

0xbc73,	// (0x0001b4c2) main_idle_pane_g2_ParamLimits

0xbc73,	// (0x0001b4c2) main_idle_pane_g2

0xbcab,	// (0x0001b4fa) main_pane_idle_g1_ParamLimits

0xbcab,	// (0x0001b4fa) main_pane_idle_g1

0x1d5a,	// (0x000115a9) popup_clock_digital_analogue_window_ParamLimits

0x1d5a,	// (0x000115a9) popup_clock_digital_analogue_window

0xbcd9,	// (0x0001b528) soft_indicator_pane_ParamLimits

0xbcd9,	// (0x0001b528) soft_indicator_pane

0xbcf5,	// (0x0001b544) wallpaper_pane_ParamLimits

0xbcf5,	// (0x0001b544) wallpaper_pane

0x1bbb,	// (0x0001140a) wallpaper_pane_g1

0xbd07,	// (0x0001b556) indicator_pane_g1_ParamLimits

0xbd07,	// (0x0001b556) indicator_pane_g1

0x613b,	// (0x0001598a) navi_navi_icon_text_pane_srt_g1

0x1dae,	// (0x000115fd) soft_indicator_pane_t1

0x1dc8,	// (0x00011617) aid_ps_area_pane

0xbd20,	// (0x0001b56f) aid_ps_clock_pane

0x1de7,	// (0x00011636) aid_ps_indicator_pane

0x1df3,	// (0x00011642) indicator_ps_pane_ParamLimits

0x1df3,	// (0x00011642) indicator_ps_pane

0x1e02,	// (0x00011651) power_save_pane_g1_ParamLimits

0x1e02,	// (0x00011651) power_save_pane_g1

0x1e0e,	// (0x0001165d) power_save_pane_g2_ParamLimits

0x1e0e,	// (0x0001165d) power_save_pane_g2

0xf572,	// (0x0001edc1) aid_navinavi_width_pane

0x1dc8,	// (0x00011617) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0001edfd) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0001edfd) power_save_pane_g

0x1e1c,	// (0x0001166b) power_save_pane_t1_ParamLimits

0x1e1c,	// (0x0001166b) power_save_pane_t1

0xbd20,	// (0x0001b56f) aid_ps_clock_pane_ParamLimits

0x1de7,	// (0x00011636) aid_ps_indicator_pane_ParamLimits

0x1e2e,	// (0x0001167d) power_save_pane_t4_ParamLimits

0x1e2e,	// (0x0001167d) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0001ee02) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0001ee02) power_save_pane_t

0x1e58,	// (0x000116a7) power_save_t3_ParamLimits

0x1e58,	// (0x000116a7) power_save_t3

0x1e43,	// (0x00011692) power_save_t2_ParamLimits

0x1e43,	// (0x00011692) power_save_t2

0x1e6d,	// (0x000116bc) indicator_ps_pane_g1

0xbd2e,	// (0x0001b57d) ai_gene_pane_ParamLimits

0xbd2e,	// (0x0001b57d) ai_gene_pane

0xbd45,	// (0x0001b594) ai_links_pane_ParamLimits

0xbd45,	// (0x0001b594) ai_links_pane

0xbd5d,	// (0x0001b5ac) indicator_pane_cp1_ParamLimits

0xbd5d,	// (0x0001b5ac) indicator_pane_cp1

0xbd6c,	// (0x0001b5bb) main_pane_idle_g1_cp_ParamLimits

0xbd6c,	// (0x0001b5bb) main_pane_idle_g1_cp

0x1ea6,	// (0x000116f5) popup_ai_links_title_window

0xbd84,	// (0x0001b5d3) soft_indicator_pane_cp1_ParamLimits

0xbd84,	// (0x0001b5d3) soft_indicator_pane_cp1

0x5a13,	// (0x00015262) ai_links_pane_g1

0x5a1c,	// (0x0001526b) grid_ai_links_pane

0xd635,	// (0x0001ce84) ai_gene_pane_1

0x5a01,	// (0x00015250) ai_gene_pane_2

0x5a0a,	// (0x00015259) list_highlight_pane_cp4

0xd611,	// (0x0001ce60) cell_ai_link_pane_ParamLimits

0xd611,	// (0x0001ce60) cell_ai_link_pane

0x59d0,	// (0x0001521f) cell_ai_link_pane_g1

0x20f1,	// (0x00011940) cell_ai_link_pane_g2

0x0001,

0xf946,	// (0x0001f195) cell_ai_link_pane_g

0x1bc5,	// (0x00011414) grid_highlight_cp2

0x1bc5,	// (0x00011414) bg_popup_sub_pane_cp1

0x1ec9,	// (0x00011718) popup_ai_links_title_window_t1

0x591c,	// (0x0001516b) ai_gene_pane_1_g1_ParamLimits

0x591c,	// (0x0001516b) ai_gene_pane_1_g1

0x5928,	// (0x00015177) ai_gene_pane_1_g2_ParamLimits

0x5928,	// (0x00015177) ai_gene_pane_1_g2

0x0001,

0xf93c,	// (0x0001f18b) ai_gene_pane_1_g_ParamLimits

0xf93c,	// (0x0001f18b) ai_gene_pane_1_g

0x5935,	// (0x00015184) ai_gene_pane_1_t1_ParamLimits

0x5935,	// (0x00015184) ai_gene_pane_1_t1

0x5969,	// (0x000151b8) grid_ai_soft_ind_pane

0x5907,	// (0x00015156) ai_gene_pane_2_t1_ParamLimits

0x5907,	// (0x00015156) ai_gene_pane_2_t1

0xbd98,	// (0x0001b5e7) main_pane_empty_t1_ParamLimits

0xbd98,	// (0x0001b5e7) main_pane_empty_t1

0xbdb0,	// (0x0001b5ff) main_pane_empty_t2_ParamLimits

0xbdb0,	// (0x0001b5ff) main_pane_empty_t2

0xbdc5,	// (0x0001b614) main_pane_empty_t3_ParamLimits

0xbdc5,	// (0x0001b614) main_pane_empty_t3

0xbdd7,	// (0x0001b626) main_pane_empty_t4_ParamLimits

0xbdd7,	// (0x0001b626) main_pane_empty_t4

0xbde9,	// (0x0001b638) main_pane_empty_t5_ParamLimits

0xbde9,	// (0x0001b638) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0001ee07) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0001ee07) main_pane_empty_t

0x2cfb,	// (0x0001254a) bg_popup_window_pane_ParamLimits

0x2cfb,	// (0x0001254a) bg_popup_window_pane

0x5663,	// (0x00014eb2) find_popup_pane_cp2_ParamLimits

0x5663,	// (0x00014eb2) find_popup_pane_cp2

0x566f,	// (0x00014ebe) heading_pane_ParamLimits

0x566f,	// (0x00014ebe) heading_pane

0x1bc5,	// (0x00011414) bg_popup_sub_pane

0xd540,	// (0x0001cd8f) bg_popup_window_pane_g1_ParamLimits

0xd540,	// (0x0001cd8f) bg_popup_window_pane_g1

0xd54f,	// (0x0001cd9e) bg_popup_window_pane_g2_ParamLimits

0xd54f,	// (0x0001cd9e) bg_popup_window_pane_g2

0xd55b,	// (0x0001cdaa) bg_popup_window_pane_g3_ParamLimits

0xd55b,	// (0x0001cdaa) bg_popup_window_pane_g3

0xd567,	// (0x0001cdb6) bg_popup_window_pane_g4_ParamLimits

0xd567,	// (0x0001cdb6) bg_popup_window_pane_g4

0xd576,	// (0x0001cdc5) bg_popup_window_pane_g5_ParamLimits

0xd576,	// (0x0001cdc5) bg_popup_window_pane_g5

0xd586,	// (0x0001cdd5) bg_popup_window_pane_g6_ParamLimits

0xd586,	// (0x0001cdd5) bg_popup_window_pane_g6

0xd592,	// (0x0001cde1) bg_popup_window_pane_g7_ParamLimits

0xd592,	// (0x0001cde1) bg_popup_window_pane_g7

0xd5a1,	// (0x0001cdf0) bg_popup_window_pane_g8_ParamLimits

0xd5a1,	// (0x0001cdf0) bg_popup_window_pane_g8

0xd5b0,	// (0x0001cdff) bg_popup_window_pane_g9_ParamLimits

0xd5b0,	// (0x0001cdff) bg_popup_window_pane_g9

0x5649,	// (0x00014e98) bg_popup_window_pane_g10_ParamLimits

0x5649,	// (0x00014e98) bg_popup_window_pane_g10

0x0009,

0xf904,	// (0x0001f153) bg_popup_window_pane_g_ParamLimits

0xf904,	// (0x0001f153) bg_popup_window_pane_g

0x5572,	// (0x00014dc1) bg_popup_heading_pane_ParamLimits

0x5572,	// (0x00014dc1) bg_popup_heading_pane

0x0dde,	// (0x0001062d) tabs_4_passive_pane_cp_srt_ParamLimits

0x0dde,	// (0x0001062d) tabs_4_passive_pane_cp_srt

0x0df0,	// (0x0001063f) tabs_4_passive_pane_srt_ParamLimits

0x5586,	// (0x00014dd5) heading_pane_g2

0x0df0,	// (0x0001063f) tabs_4_passive_pane_srt

0x4949,	// (0x00014198) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4949,	// (0x00014198) bg_passive_tab_pane_cp3_srt

0x558e,	// (0x00014ddd) heading_pane_t1_ParamLimits

0x558e,	// (0x00014ddd) heading_pane_t1

0x55a5,	// (0x00014df4) heading_pane_t2_ParamLimits

0x55a5,	// (0x00014df4) heading_pane_t2

0x0001,

0xf8ff,	// (0x0001f14e) heading_pane_t_ParamLimits

0xf8ff,	// (0x0001f14e) heading_pane_t

0x509d,	// (0x000148ec) bg_popup_heading_pane_g1

0x514c,	// (0x0001499b) bg_popup_heading_pane_g2

0x5156,	// (0x000149a5) bg_popup_heading_pane_g3

0x5160,	// (0x000149af) bg_popup_heading_pane_g4

0x516a,	// (0x000149b9) bg_popup_heading_pane_g5

0x5174,	// (0x000149c3) bg_popup_heading_pane_g6

0x517c,	// (0x000149cb) bg_popup_heading_pane_g7

0x5184,	// (0x000149d3) bg_popup_heading_pane_g8

0x518e,	// (0x000149dd) bg_popup_heading_pane_g9

0x0008,

0xf8bb,	// (0x0001f10a) bg_popup_heading_pane_g

0x482d,	// (0x0001407c) bg_popup_sub_pane_g1

0x483d,	// (0x0001408c) bg_popup_sub_pane_g2

0x4835,	// (0x00014084) bg_popup_sub_pane_g3

0x484d,	// (0x0001409c) bg_popup_sub_pane_g4

0x4845,	// (0x00014094) bg_popup_sub_pane_g5

0x4855,	// (0x000140a4) bg_popup_sub_pane_g6

0x485d,	// (0x000140ac) bg_popup_sub_pane_g7

0x486d,	// (0x000140bc) bg_popup_sub_pane_g8

0x4865,	// (0x000140b4) bg_popup_sub_pane_g9

0x0008,

0xf895,	// (0x0001f0e4) bg_popup_sub_pane_g

0x1f3b,	// (0x0001178a) bg_popup_window_pane_cp5_ParamLimits

0x1f3b,	// (0x0001178a) bg_popup_window_pane_cp5

0x1f57,	// (0x000117a6) popup_note_window_g1_ParamLimits

0x1f57,	// (0x000117a6) popup_note_window_g1

0x1f63,	// (0x000117b2) popup_note_window_t1_ParamLimits

0x1f63,	// (0x000117b2) popup_note_window_t1

0x1f79,	// (0x000117c8) popup_note_window_t2_ParamLimits

0x1f79,	// (0x000117c8) popup_note_window_t2

0x1f8f,	// (0x000117de) popup_note_window_t3_ParamLimits

0x1f8f,	// (0x000117de) popup_note_window_t3

0x1fa5,	// (0x000117f4) popup_note_window_t4_ParamLimits

0x1fa5,	// (0x000117f4) popup_note_window_t4

0x1fcd,	// (0x0001181c) popup_note_window_t5_ParamLimits

0x1fcd,	// (0x0001181c) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0001ee12) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0001ee12) popup_note_window_t

0x1ff1,	// (0x00011840) bg_popup_window_pane_cp6_ParamLimits

0x1ff1,	// (0x00011840) bg_popup_window_pane_cp6

0x5019,	// (0x00014868) popup_note_image_window_g1_ParamLimits

0x5019,	// (0x00014868) popup_note_image_window_g1

0x5025,	// (0x00014874) popup_note_image_window_g2_ParamLimits

0x5025,	// (0x00014874) popup_note_image_window_g2

0x0001,

0xf889,	// (0x0001f0d8) popup_note_image_window_g_ParamLimits

0xf889,	// (0x0001f0d8) popup_note_image_window_g

0x503e,	// (0x0001488d) popup_note_image_window_t1_ParamLimits

0x503e,	// (0x0001488d) popup_note_image_window_t1

0x5057,	// (0x000148a6) popup_note_image_window_t2_ParamLimits

0x5057,	// (0x000148a6) popup_note_image_window_t2

0x5070,	// (0x000148bf) popup_note_image_window_t3_ParamLimits

0x5070,	// (0x000148bf) popup_note_image_window_t3

0x0002,

0xf88e,	// (0x0001f0dd) popup_note_image_window_t_ParamLimits

0xf88e,	// (0x0001f0dd) popup_note_image_window_t

0x4ed9,	// (0x00014728) bg_popup_window_pane_cp7_ParamLimits

0x4ed9,	// (0x00014728) bg_popup_window_pane_cp7

0x4f09,	// (0x00014758) popup_note_wait_window_g1_ParamLimits

0x4f09,	// (0x00014758) popup_note_wait_window_g1

0x4f15,	// (0x00014764) popup_note_wait_window_g2_ParamLimits

0x4f15,	// (0x00014764) popup_note_wait_window_g2

0x0002,

0xf877,	// (0x0001f0c6) popup_note_wait_window_g_ParamLimits

0xf877,	// (0x0001f0c6) popup_note_wait_window_g

0x4f2d,	// (0x0001477c) popup_note_wait_window_t1_ParamLimits

0x4f2d,	// (0x0001477c) popup_note_wait_window_t1

0x4f54,	// (0x000147a3) popup_note_wait_window_t2_ParamLimits

0x4f54,	// (0x000147a3) popup_note_wait_window_t2

0x4f72,	// (0x000147c1) popup_note_wait_window_t3_ParamLimits

0x4f72,	// (0x000147c1) popup_note_wait_window_t3

0x4f85,	// (0x000147d4) popup_note_wait_window_t4_ParamLimits

0x4f85,	// (0x000147d4) popup_note_wait_window_t4

0x0004,

0xf87e,	// (0x0001f0cd) popup_note_wait_window_t_ParamLimits

0xf87e,	// (0x0001f0cd) popup_note_wait_window_t

0x4faa,	// (0x000147f9) wait_bar_pane_ParamLimits

0x4faa,	// (0x000147f9) wait_bar_pane

0x1bc5,	// (0x00011414) wait_anim_pane

0x1bc5,	// (0x00011414) wait_border_pane

0x1bbb,	// (0x0001140a) wait_anim_pane_g1

0x1bbb,	// (0x0001140a) wait_anim_pane_g2

0x0001,

0xf742,	// (0x0001ef91) wait_anim_pane_g

0x4e7d,	// (0x000146cc) wait_border_pane_g1

0x4e88,	// (0x000146d7) wait_border_pane_g2

0x4e91,	// (0x000146e0) wait_border_pane_g3

0x0002,

0xf870,	// (0x0001f0bf) wait_border_pane_g

0x4dd9,	// (0x00014628) bg_popup_window_pane_cp16_ParamLimits

0x4dd9,	// (0x00014628) bg_popup_window_pane_cp16

0x4de7,	// (0x00014636) indicator_popup_pane_cp4_ParamLimits

0x4de7,	// (0x00014636) indicator_popup_pane_cp4

0x4dfb,	// (0x0001464a) popup_query_data_window_t1_ParamLimits

0x4dfb,	// (0x0001464a) popup_query_data_window_t1

0x4e0d,	// (0x0001465c) popup_query_data_window_t2_ParamLimits

0x4e0d,	// (0x0001465c) popup_query_data_window_t2

0x4e26,	// (0x00014675) popup_query_data_window_t3_ParamLimits

0x4e26,	// (0x00014675) popup_query_data_window_t3

0x0002,

0xf869,	// (0x0001f0b8) popup_query_data_window_t_ParamLimits

0xf869,	// (0x0001f0b8) popup_query_data_window_t

0x4e40,	// (0x0001468f) query_popup_data_pane_ParamLimits

0x4e40,	// (0x0001468f) query_popup_data_pane

0x4e54,	// (0x000146a3) query_popup_data_pane_cp1_ParamLimits

0x4e54,	// (0x000146a3) query_popup_data_pane_cp1

0x1ff1,	// (0x00011840) bg_popup_window_pane_cp10_ParamLimits

0x1ff1,	// (0x00011840) bg_popup_window_pane_cp10

0x4d3c,	// (0x0001458b) indicator_popup_pane_ParamLimits

0x4d3c,	// (0x0001458b) indicator_popup_pane

0x2052,	// (0x000118a1) popup_query_code_window_t1_ParamLimits

0x2052,	// (0x000118a1) popup_query_code_window_t1

0x4d54,	// (0x000145a3) popup_query_code_window_t2_ParamLimits

0x4d54,	// (0x000145a3) popup_query_code_window_t2

0x4d92,	// (0x000145e1) popup_query_code_window_t3_ParamLimits

0x4d92,	// (0x000145e1) popup_query_code_window_t3

0x0002,

0xf862,	// (0x0001f0b1) popup_query_code_window_t_ParamLimits

0xf862,	// (0x0001f0b1) popup_query_code_window_t

0x4dc1,	// (0x00014610) query_popup_pane_ParamLimits

0x4dc1,	// (0x00014610) query_popup_pane

0x1ff1,	// (0x00011840) bg_popup_window_pane_cp15_ParamLimits

0x1ff1,	// (0x00011840) bg_popup_window_pane_cp15

0x2011,	// (0x00011860) indicator_popup_pane_cp1_ParamLimits

0x2011,	// (0x00011860) indicator_popup_pane_cp1

0x2024,	// (0x00011873) indicator_popup_pane_cp2_ParamLimits

0x2024,	// (0x00011873) indicator_popup_pane_cp2

0x203f,	// (0x0001188e) popup_query_data_code_window_g1_ParamLimits

0x203f,	// (0x0001188e) popup_query_data_code_window_g1

0x2052,	// (0x000118a1) popup_query_data_code_window_t1_ParamLimits

0x2052,	// (0x000118a1) popup_query_data_code_window_t1

0x2064,	// (0x000118b3) popup_query_data_code_window_t2_ParamLimits

0x2064,	// (0x000118b3) popup_query_data_code_window_t2

0x2076,	// (0x000118c5) popup_query_data_code_window_t3_ParamLimits

0x2076,	// (0x000118c5) popup_query_data_code_window_t3

0x208c,	// (0x000118db) popup_query_data_code_window_t4_ParamLimits

0x208c,	// (0x000118db) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0001ee1d) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0001ee1d) popup_query_data_code_window_t

0x0a7e,	// (0x000102cd) list_single_midp_graphic_pane_g3

0x20a6,	// (0x000118f5) query_popup_data_pane_cp2_ParamLimits

0x20b9,	// (0x00011908) query_popup_pane_cp2_ParamLimits

0x20b9,	// (0x00011908) query_popup_pane_cp2

0x1bc5,	// (0x00011414) bg_popup_window_pane_cp11

0x4d10,	// (0x0001455f) heading_pane_cp5

0x21a9,	// (0x000119f8) listscroll_popup_info_pane

0x1bc5,	// (0x00011414) input_focus_pane_cp3

0x20d4,	// (0x00011923) query_popup_pane_t1

0x20e2,	// (0x00011931) list_popup_info_pane_ParamLimits

0x20e2,	// (0x00011931) list_popup_info_pane

0x20f1,	// (0x00011940) listscroll_popup_info_pane_g1

0x20f9,	// (0x00011948) scroll_pane_cp7

0x2103,	// (0x00011952) popup_info_list_pane_t1_ParamLimits

0x2103,	// (0x00011952) popup_info_list_pane_t1

0x211d,	// (0x0001196c) popup_info_list_pane_t2_ParamLimits

0x211d,	// (0x0001196c) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0001ee26) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0001ee26) popup_info_list_pane_t

0x1bc5,	// (0x00011414) bg_popup_window_pane_cp12

0x6155,	// (0x000159a4) find_popup_pane

0x1ca5,	// (0x000114f4) bg_popup_window_pane_cp3

0x2137,	// (0x00011986) heading_pane_cp3

0x2143,	// (0x00011992) listscroll_popup_graphic_pane

0x1bc5,	// (0x00011414) bg_popup_window_pane_cp4

0xbe4b,	// (0x0001b69a) heading_pane_cp4

0x21a9,	// (0x000119f8) listscroll_popup_colour_pane

0xbe55,	// (0x0001b6a4) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xbe55,	// (0x0001b6a4) cell_large_graphic_colour_none_popup_pane

0xbe69,	// (0x0001b6b8) grid_large_graphic_colour_popup_pane_ParamLimits

0xbe69,	// (0x0001b6b8) grid_large_graphic_colour_popup_pane

0xbe95,	// (0x0001b6e4) listscroll_popup_colour_pane_g1_ParamLimits

0xbe95,	// (0x0001b6e4) listscroll_popup_colour_pane_g1

0xbeac,	// (0x0001b6fb) listscroll_popup_colour_pane_g2_ParamLimits

0xbeac,	// (0x0001b6fb) listscroll_popup_colour_pane_g2

0xbec3,	// (0x0001b712) listscroll_popup_colour_pane_g3_ParamLimits

0xbec3,	// (0x0001b712) listscroll_popup_colour_pane_g3

0xbed3,	// (0x0001b722) listscroll_popup_colour_pane_g4_ParamLimits

0xbed3,	// (0x0001b722) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0001ee2b) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0001ee2b) listscroll_popup_colour_pane_g

0x2243,	// (0x00011a92) scroll_pane_cp6_ParamLimits

0x2243,	// (0x00011a92) scroll_pane_cp6

0xbee7,	// (0x0001b736) cell_large_graphic_colour_popup_pane_ParamLimits

0xbee7,	// (0x0001b736) cell_large_graphic_colour_popup_pane

0x227a,	// (0x00011ac9) cell_large_graphic_colour_none_popup_pane_t1

0x1bc5,	// (0x00011414) grid_highlight_pane_cp5

0x2289,	// (0x00011ad8) cell_large_graphic_colour_popup_pane_g1

0x2291,	// (0x00011ae0) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0001ee34) cell_large_graphic_colour_popup_pane_g

0x2299,	// (0x00011ae8) cell_large_graphic_colour_popup_pane_g2_copy1

0x22a2,	// (0x00011af1) grid_highlight_pane_cp4

0x22aa,	// (0x00011af9) bg_popup_window_pane_cp8_ParamLimits

0x22aa,	// (0x00011af9) bg_popup_window_pane_cp8

0x22c5,	// (0x00011b14) popup_snote_single_text_window_g1_ParamLimits

0x22c5,	// (0x00011b14) popup_snote_single_text_window_g1

0x22d7,	// (0x00011b26) popup_snote_single_text_window_t1_ParamLimits

0x22d7,	// (0x00011b26) popup_snote_single_text_window_t1

0x22ea,	// (0x00011b39) popup_snote_single_text_window_t2_ParamLimits

0x22ea,	// (0x00011b39) popup_snote_single_text_window_t2

0x22fd,	// (0x00011b4c) popup_snote_single_text_window_t3_ParamLimits

0x22fd,	// (0x00011b4c) popup_snote_single_text_window_t3

0x2336,	// (0x00011b85) popup_snote_single_text_window_t4_ParamLimits

0x2336,	// (0x00011b85) popup_snote_single_text_window_t4

0x236a,	// (0x00011bb9) popup_snote_single_text_window_t5_ParamLimits

0x236a,	// (0x00011bb9) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0001ee39) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0001ee39) popup_snote_single_text_window_t

0x2399,	// (0x00011be8) bg_popup_window_pane_cp9_ParamLimits

0x2399,	// (0x00011be8) bg_popup_window_pane_cp9

0x22c5,	// (0x00011b14) popup_snote_single_graphic_window_g1_ParamLimits

0x22c5,	// (0x00011b14) popup_snote_single_graphic_window_g1

0x23a7,	// (0x00011bf6) popup_snote_single_graphic_window_g2_ParamLimits

0x23a7,	// (0x00011bf6) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0001ee44) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0001ee44) popup_snote_single_graphic_window_g

0x23b3,	// (0x00011c02) popup_snote_single_graphic_window_t1_ParamLimits

0x23b3,	// (0x00011c02) popup_snote_single_graphic_window_t1

0x23c6,	// (0x00011c15) popup_snote_single_graphic_window_t2_ParamLimits

0x23c6,	// (0x00011c15) popup_snote_single_graphic_window_t2

0x23d9,	// (0x00011c28) popup_snote_single_graphic_window_t3_ParamLimits

0x23d9,	// (0x00011c28) popup_snote_single_graphic_window_t3

0x2412,	// (0x00011c61) popup_snote_single_graphic_window_t4_ParamLimits

0x2412,	// (0x00011c61) popup_snote_single_graphic_window_t4

0x2446,	// (0x00011c95) popup_snote_single_graphic_window_t5_ParamLimits

0x2446,	// (0x00011c95) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0001ee49) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0001ee49) popup_snote_single_graphic_window_t

0x6093,	// (0x000158e2) grid_graphic_popup_pane_ParamLimits

0x6093,	// (0x000158e2) grid_graphic_popup_pane

0x60c1,	// (0x00015910) listscroll_popup_graphic_pane_g1_ParamLimits

0x60c1,	// (0x00015910) listscroll_popup_graphic_pane_g1

0xd99e,	// (0x0001d1ed) listscroll_popup_graphic_pane_g2_ParamLimits

0xd99e,	// (0x0001d1ed) listscroll_popup_graphic_pane_g2

0x0001,

0xf9df,	// (0x0001f22e) listscroll_popup_graphic_pane_g_ParamLimits

0xf9df,	// (0x0001f22e) listscroll_popup_graphic_pane_g

0x60e9,	// (0x00015938) scroll_pane_cp5

0xd95e,	// (0x0001d1ad) cell_graphic_popup_pane_ParamLimits

0xd95e,	// (0x0001d1ad) cell_graphic_popup_pane

0x601c,	// (0x0001586b) cell_graphic_popup_pane_g1

0x6024,	// (0x00015873) cell_graphic_popup_pane_g2

0x2299,	// (0x00011ae8) cell_graphic_popup_pane_g3

0x0002,

0xf9d8,	// (0x0001f227) cell_graphic_popup_pane_g

0x602d,	// (0x0001587c) cell_graphic_popup_pane_t2

0x22a2,	// (0x00011af1) grid_highlight_pane_cp3

0x2487,	// (0x00011cd6) list_gen_pane_ParamLimits

0x2487,	// (0x00011cd6) list_gen_pane

0x24b9,	// (0x00011d08) scroll_pane

0xd919,	// (0x0001d168) bg_list_pane_g1_ParamLimits

0xd919,	// (0x0001d168) bg_list_pane_g1

0x5f99,	// (0x000157e8) bg_list_pane_g2_ParamLimits

0x5f99,	// (0x000157e8) bg_list_pane_g2

0x5fac,	// (0x000157fb) bg_list_pane_g3_ParamLimits

0x5fac,	// (0x000157fb) bg_list_pane_g3

0x5fbe,	// (0x0001580d) bg_list_pane_g4_ParamLimits

0x5fbe,	// (0x0001580d) bg_list_pane_g4

0xd934,	// (0x0001d183) bg_list_pane_g5_ParamLimits

0xd934,	// (0x0001d183) bg_list_pane_g5

0x0004,

0xf9cd,	// (0x0001f21c) bg_list_pane_g_ParamLimits

0xf9cd,	// (0x0001f21c) bg_list_pane_g

0xd8b6,	// (0x0001d105) list_double2_graphic_large_graphic_pane_ParamLimits

0xd8b6,	// (0x0001d105) list_double2_graphic_large_graphic_pane

0xd8b6,	// (0x0001d105) list_double2_graphic_pane_ParamLimits

0xd8b6,	// (0x0001d105) list_double2_graphic_pane

0xd8b6,	// (0x0001d105) list_double2_large_graphic_pane_ParamLimits

0xd8b6,	// (0x0001d105) list_double2_large_graphic_pane

0xd8b6,	// (0x0001d105) list_double2_pane_ParamLimits

0xd8b6,	// (0x0001d105) list_double2_pane

0xd8b6,	// (0x0001d105) list_double_graphic_heading_pane_ParamLimits

0xd8b6,	// (0x0001d105) list_double_graphic_heading_pane

0xd8b6,	// (0x0001d105) list_double_graphic_pane_ParamLimits

0xd8b6,	// (0x0001d105) list_double_graphic_pane

0xd8b6,	// (0x0001d105) list_double_heading_pane_ParamLimits

0xd8b6,	// (0x0001d105) list_double_heading_pane

0xd8b6,	// (0x0001d105) list_double_large_graphic_pane_ParamLimits

0xd8b6,	// (0x0001d105) list_double_large_graphic_pane

0xd8b6,	// (0x0001d105) list_double_number_pane_ParamLimits

0xd8b6,	// (0x0001d105) list_double_number_pane

0xd8b6,	// (0x0001d105) list_double_pane_ParamLimits

0xd8b6,	// (0x0001d105) list_double_pane

0xd8b6,	// (0x0001d105) list_double_time_pane_ParamLimits

0xd8b6,	// (0x0001d105) list_double_time_pane

0xd8b6,	// (0x0001d105) list_setting_number_pane_ParamLimits

0xd8b6,	// (0x0001d105) list_setting_number_pane

0xd8b6,	// (0x0001d105) list_setting_pane_ParamLimits

0xd8b6,	// (0x0001d105) list_setting_pane

0xd8ca,	// (0x0001d119) list_single_2graphic_pane_ParamLimits

0xd8ca,	// (0x0001d119) list_single_2graphic_pane

0xd8ca,	// (0x0001d119) list_single_graphic_heading_pane_ParamLimits

0xd8ca,	// (0x0001d119) list_single_graphic_heading_pane

0xd8ca,	// (0x0001d119) list_single_graphic_pane_ParamLimits

0xd8ca,	// (0x0001d119) list_single_graphic_pane

0xd8ca,	// (0x0001d119) list_single_heading_pane_ParamLimits

0xd8ca,	// (0x0001d119) list_single_heading_pane

0xd8ca,	// (0x0001d119) list_single_large_graphic_pane_ParamLimits

0xd8ca,	// (0x0001d119) list_single_large_graphic_pane

0xd8ca,	// (0x0001d119) list_single_number_heading_pane_ParamLimits

0xd8ca,	// (0x0001d119) list_single_number_heading_pane

0xd8ca,	// (0x0001d119) list_single_number_pane_ParamLimits

0xd8ca,	// (0x0001d119) list_single_number_pane

0xd8ca,	// (0x0001d119) list_single_pane_ParamLimits

0xd8ca,	// (0x0001d119) list_single_pane

0x1bc5,	// (0x00011414) list_highlight_pane_cp1

0x389e,	// (0x000130ed) list_single_pane_g1_ParamLimits

0x389e,	// (0x000130ed) list_single_pane_g1

0x47af,	// (0x00013ffe) list_single_pane_g2_ParamLimits

0x47af,	// (0x00013ffe) list_single_pane_g2

0x0001,

0xf60c,	// (0x0001ee5b) list_single_pane_g_ParamLimits

0xf60c,	// (0x0001ee5b) list_single_pane_g

0x672c,	// (0x00015f7b) list_single_pane_t1_ParamLimits

0x672c,	// (0x00015f7b) list_single_pane_t1

0x389e,	// (0x000130ed) list_single_number_pane_g1_ParamLimits

0x389e,	// (0x000130ed) list_single_number_pane_g1

0x47af,	// (0x00013ffe) list_single_number_pane_g2_ParamLimits

0x47af,	// (0x00013ffe) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x0001ee5b) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x0001ee5b) list_single_number_pane_g

0x47bb,	// (0x0001400a) list_single_number_pane_t1_ParamLimits

0x47bb,	// (0x0001400a) list_single_number_pane_t1

0xd6d4,	// (0x0001cf23) list_single_number_pane_t2_ParamLimits

0xd6d4,	// (0x0001cf23) list_single_number_pane_t2

0x0001,

0xf98e,	// (0x0001f1dd) list_single_number_pane_t_ParamLimits

0xf98e,	// (0x0001f1dd) list_single_number_pane_t

0x7bb0,	// (0x000173ff) list_single_graphic_pane_g1_ParamLimits

0x7bb0,	// (0x000173ff) list_single_graphic_pane_g1

0x389e,	// (0x000130ed) list_single_graphic_pane_g2_ParamLimits

0x389e,	// (0x000130ed) list_single_graphic_pane_g2

0x47af,	// (0x00013ffe) list_single_graphic_pane_g3_ParamLimits

0x47af,	// (0x00013ffe) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0001ee54) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0001ee54) list_single_graphic_pane_g

0xbf12,	// (0x0001b761) list_single_graphic_pane_t1_ParamLimits

0xbf12,	// (0x0001b761) list_single_graphic_pane_t1

0x389e,	// (0x000130ed) list_single_heading_pane_g1_ParamLimits

0x389e,	// (0x000130ed) list_single_heading_pane_g1

0x47af,	// (0x00013ffe) list_single_heading_pane_g2_ParamLimits

0x47af,	// (0x00013ffe) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0001ee5b) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0001ee5b) list_single_heading_pane_g

0x674e,	// (0x00015f9d) list_single_heading_pane_t1_ParamLimits

0x674e,	// (0x00015f9d) list_single_heading_pane_t1

0xbf28,	// (0x0001b777) list_single_heading_pane_t2_ParamLimits

0xbf28,	// (0x0001b777) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0001ee60) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0001ee60) list_single_heading_pane_t

0x389e,	// (0x000130ed) list_single_number_heading_pane_g1_ParamLimits

0x389e,	// (0x000130ed) list_single_number_heading_pane_g1

0x47af,	// (0x00013ffe) list_single_number_heading_pane_g2_ParamLimits

0x47af,	// (0x00013ffe) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x0001ee5b) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x0001ee5b) list_single_number_heading_pane_g

0x674e,	// (0x00015f9d) list_single_number_heading_pane_t1_ParamLimits

0x674e,	// (0x00015f9d) list_single_number_heading_pane_t1

0xbf3a,	// (0x0001b789) list_single_number_heading_pane_t2_ParamLimits

0xbf3a,	// (0x0001b789) list_single_number_heading_pane_t2

0x6706,	// (0x00015f55) list_single_number_heading_pane_t3_ParamLimits

0x6706,	// (0x00015f55) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x0001ee65) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x0001ee65) list_single_number_heading_pane_t

0x47a3,	// (0x00013ff2) list_single_graphic_heading_pane_g1_ParamLimits

0x47a3,	// (0x00013ff2) list_single_graphic_heading_pane_g1

0xbf4c,	// (0x0001b79b) list_single_graphic_heading_pane_g4_ParamLimits

0xbf4c,	// (0x0001b79b) list_single_graphic_heading_pane_g4

0x47af,	// (0x00013ffe) list_single_graphic_heading_pane_g5_ParamLimits

0x47af,	// (0x00013ffe) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x0001ee6c) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0001ee6c) list_single_graphic_heading_pane_g

0x674e,	// (0x00015f9d) list_single_graphic_heading_pane_t1_ParamLimits

0x674e,	// (0x00015f9d) list_single_graphic_heading_pane_t1

0xbf5d,	// (0x0001b7ac) list_single_graphic_heading_pane_t2_ParamLimits

0xbf5d,	// (0x0001b7ac) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x0001ee73) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x0001ee73) list_single_graphic_heading_pane_t

0x6742,	// (0x00015f91) list_single_large_graphic_pane_g1_ParamLimits

0x6742,	// (0x00015f91) list_single_large_graphic_pane_g1

0x389e,	// (0x000130ed) list_single_large_graphic_pane_g2_ParamLimits

0x389e,	// (0x000130ed) list_single_large_graphic_pane_g2

0x47af,	// (0x00013ffe) list_single_large_graphic_pane_g3_ParamLimits

0x47af,	// (0x00013ffe) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x0001ee78) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x0001ee78) list_single_large_graphic_pane_g

0x4e88,	// (0x000146d7) wait_border_pane_g2_copy1

0xbf6f,	// (0x0001b7be) list_single_large_graphic_pane_g4_cp2

0x674e,	// (0x00015f9d) list_single_large_graphic_pane_t1_ParamLimits

0x674e,	// (0x00015f9d) list_single_large_graphic_pane_t1

0xbf77,	// (0x0001b7c6) list_double_pane_g1_ParamLimits

0xbf77,	// (0x0001b7c6) list_double_pane_g1

0xbf83,	// (0x0001b7d2) list_double_pane_g2_ParamLimits

0xbf83,	// (0x0001b7d2) list_double_pane_g2

0x0001,

0xf630,	// (0x0001ee7f) list_double_pane_g_ParamLimits

0xf630,	// (0x0001ee7f) list_double_pane_g

0xbf8f,	// (0x0001b7de) list_double_pane_t1_ParamLimits

0xbf8f,	// (0x0001b7de) list_double_pane_t1

0xbfa5,	// (0x0001b7f4) list_double_pane_t2_ParamLimits

0xbfa5,	// (0x0001b7f4) list_double_pane_t2

0x0001,

0xf635,	// (0x0001ee84) list_double_pane_t_ParamLimits

0xf635,	// (0x0001ee84) list_double_pane_t

0xbfb7,	// (0x0001b806) list_double2_pane_g1_ParamLimits

0xbfb7,	// (0x0001b806) list_double2_pane_g1

0xbfc8,	// (0x0001b817) list_double2_pane_g2_ParamLimits

0xbfc8,	// (0x0001b817) list_double2_pane_g2

0x0001,

0xf63a,	// (0x0001ee89) list_double2_pane_g_ParamLimits

0xf63a,	// (0x0001ee89) list_double2_pane_g

0xbfd4,	// (0x0001b823) list_double2_pane_t1_ParamLimits

0xbfd4,	// (0x0001b823) list_double2_pane_t1

0xbfea,	// (0x0001b839) list_double2_pane_t2_ParamLimits

0xbfea,	// (0x0001b839) list_double2_pane_t2

0x0001,

0xf63f,	// (0x0001ee8e) list_double2_pane_t_ParamLimits

0xf63f,	// (0x0001ee8e) list_double2_pane_t

0xbf77,	// (0x0001b7c6) list_double_number_pane_g1_ParamLimits

0xbf77,	// (0x0001b7c6) list_double_number_pane_g1

0xbf83,	// (0x0001b7d2) list_double_number_pane_g2_ParamLimits

0xbf83,	// (0x0001b7d2) list_double_number_pane_g2

0x0001,

0xf630,	// (0x0001ee7f) list_double_number_pane_g_ParamLimits

0xf630,	// (0x0001ee7f) list_double_number_pane_g

0xbffc,	// (0x0001b84b) list_double_number_pane_t1_ParamLimits

0xbffc,	// (0x0001b84b) list_double_number_pane_t1

0xc00e,	// (0x0001b85d) list_double_number_pane_t2_ParamLimits

0xc00e,	// (0x0001b85d) list_double_number_pane_t2

0xc024,	// (0x0001b873) list_double_number_pane_t3_ParamLimits

0xc024,	// (0x0001b873) list_double_number_pane_t3

0x0002,

0xf644,	// (0x0001ee93) list_double_number_pane_t_ParamLimits

0xf644,	// (0x0001ee93) list_double_number_pane_t

0xc036,	// (0x0001b885) list_double_graphic_pane_g1_ParamLimits

0xc036,	// (0x0001b885) list_double_graphic_pane_g1

0xc042,	// (0x0001b891) list_double_graphic_pane_g2_ParamLimits

0xc042,	// (0x0001b891) list_double_graphic_pane_g2

0xc051,	// (0x0001b8a0) list_double_graphic_pane_g3_ParamLimits

0xc051,	// (0x0001b8a0) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x0001ee9a) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x0001ee9a) list_double_graphic_pane_g

0xc069,	// (0x0001b8b8) list_double_graphic_pane_t1_ParamLimits

0xc069,	// (0x0001b8b8) list_double_graphic_pane_t1

0xc07f,	// (0x0001b8ce) list_double_graphic_pane_t2_ParamLimits

0xc07f,	// (0x0001b8ce) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x0001eea3) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x0001eea3) list_double_graphic_pane_t

0x5504,	// (0x00014d53) list_double2_graphic_pane_g1_ParamLimits

0x5504,	// (0x00014d53) list_double2_graphic_pane_g1

0x374b,	// (0x00012f9a) list_double2_graphic_pane_g2_ParamLimits

0x374b,	// (0x00012f9a) list_double2_graphic_pane_g2

0xbfc8,	// (0x0001b817) list_double2_graphic_pane_g3_ParamLimits

0xbfc8,	// (0x0001b817) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x0001eea8) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x0001eea8) list_double2_graphic_pane_g

0xc091,	// (0x0001b8e0) list_double2_graphic_pane_t1_ParamLimits

0xc091,	// (0x0001b8e0) list_double2_graphic_pane_t1

0xc0a7,	// (0x0001b8f6) list_double2_graphic_pane_t2_ParamLimits

0xc0a7,	// (0x0001b8f6) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x0001eeaf) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x0001eeaf) list_double2_graphic_pane_t

0xc0b9,	// (0x0001b908) list_double_large_graphic_pane_g1_ParamLimits

0xc0b9,	// (0x0001b908) list_double_large_graphic_pane_g1

0xc0e4,	// (0x0001b933) list_double_large_graphic_pane_g2_ParamLimits

0xc0e4,	// (0x0001b933) list_double_large_graphic_pane_g2

0xbf83,	// (0x0001b7d2) list_double_large_graphic_pane_g3_ParamLimits

0xbf83,	// (0x0001b7d2) list_double_large_graphic_pane_g3

0xc0f5,	// (0x0001b944) list_double_large_graphic_pane_g4_ParamLimits

0xc0f5,	// (0x0001b944) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x0001eeb4) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x0001eeb4) list_double_large_graphic_pane_g

0xc108,	// (0x0001b957) list_double_large_graphic_pane_t1_ParamLimits

0xc108,	// (0x0001b957) list_double_large_graphic_pane_t1

0xc121,	// (0x0001b970) list_double_large_graphic_pane_t2_ParamLimits

0xc121,	// (0x0001b970) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x0001eebf) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x0001eebf) list_double_large_graphic_pane_t

0xc133,	// (0x0001b982) list_double2_large_graphic_pane_g1_ParamLimits

0xc133,	// (0x0001b982) list_double2_large_graphic_pane_g1

0xbfb7,	// (0x0001b806) list_double2_large_graphic_pane_g2_ParamLimits

0xbfb7,	// (0x0001b806) list_double2_large_graphic_pane_g2

0xbfc8,	// (0x0001b817) list_double2_large_graphic_pane_g3_ParamLimits

0xbfc8,	// (0x0001b817) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x0001eec4) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x0001eec4) list_double2_large_graphic_pane_g

0xc13f,	// (0x0001b98e) list_double2_large_graphic_pane_t1_ParamLimits

0xc13f,	// (0x0001b98e) list_double2_large_graphic_pane_t1

0xc155,	// (0x0001b9a4) list_double2_large_graphic_pane_t2_ParamLimits

0xc155,	// (0x0001b9a4) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x0001eecb) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x0001eecb) list_double2_large_graphic_pane_t

0xc167,	// (0x0001b9b6) list_double_heading_pane_g1_ParamLimits

0xc167,	// (0x0001b9b6) list_double_heading_pane_g1

0xc178,	// (0x0001b9c7) list_double_heading_pane_g2_ParamLimits

0xc178,	// (0x0001b9c7) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x0001eed0) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x0001eed0) list_double_heading_pane_g

0xc184,	// (0x0001b9d3) list_double_heading_pane_t1_ParamLimits

0xc184,	// (0x0001b9d3) list_double_heading_pane_t1

0xc19a,	// (0x0001b9e9) list_double_heading_pane_t2_ParamLimits

0xc19a,	// (0x0001b9e9) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x0001eed5) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x0001eed5) list_double_heading_pane_t

0x26fe,	// (0x00011f4d) list_double_graphic_heading_pane_g1_ParamLimits

0x26fe,	// (0x00011f4d) list_double_graphic_heading_pane_g1

0xc167,	// (0x0001b9b6) list_double_graphic_heading_pane_g2_ParamLimits

0xc167,	// (0x0001b9b6) list_double_graphic_heading_pane_g2

0xc178,	// (0x0001b9c7) list_double_graphic_heading_pane_g3_ParamLimits

0xc178,	// (0x0001b9c7) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x0001eeda) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x0001eeda) list_double_graphic_heading_pane_g

0xc1ac,	// (0x0001b9fb) list_double_graphic_heading_pane_t1_ParamLimits

0xc1ac,	// (0x0001b9fb) list_double_graphic_heading_pane_t1

0xc1c2,	// (0x0001ba11) list_double_graphic_heading_pane_t2_ParamLimits

0xc1c2,	// (0x0001ba11) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x0001eee1) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x0001eee1) list_double_graphic_heading_pane_t

0xc0e4,	// (0x0001b933) list_double_time_pane_g1_ParamLimits

0xc0e4,	// (0x0001b933) list_double_time_pane_g1

0xbf83,	// (0x0001b7d2) list_double_time_pane_g2_ParamLimits

0xbf83,	// (0x0001b7d2) list_double_time_pane_g2

0x0001,

0xf697,	// (0x0001eee6) list_double_time_pane_g_ParamLimits

0xf697,	// (0x0001eee6) list_double_time_pane_g

0xc1d4,	// (0x0001ba23) list_double_time_pane_t1_ParamLimits

0xc1d4,	// (0x0001ba23) list_double_time_pane_t1

0xc1ea,	// (0x0001ba39) list_double_time_pane_t2_ParamLimits

0xc1ea,	// (0x0001ba39) list_double_time_pane_t2

0xc1fc,	// (0x0001ba4b) list_double_time_pane_t3_ParamLimits

0xc1fc,	// (0x0001ba4b) list_double_time_pane_t3

0xc20e,	// (0x0001ba5d) list_double_time_pane_t4_ParamLimits

0xc20e,	// (0x0001ba5d) list_double_time_pane_t4

0x0003,

0xf69c,	// (0x0001eeeb) list_double_time_pane_t_ParamLimits

0xf69c,	// (0x0001eeeb) list_double_time_pane_t

0x374b,	// (0x00012f9a) list_setting_pane_g1_ParamLimits

0x374b,	// (0x00012f9a) list_setting_pane_g1

0xbfc8,	// (0x0001b817) list_setting_pane_g2_ParamLimits

0xbfc8,	// (0x0001b817) list_setting_pane_g2

0x0001,

0xf6a5,	// (0x0001eef4) list_setting_pane_g_ParamLimits

0xf6a5,	// (0x0001eef4) list_setting_pane_g

0xc220,	// (0x0001ba6f) list_setting_pane_t1_ParamLimits

0xc220,	// (0x0001ba6f) list_setting_pane_t1

0xc237,	// (0x0001ba86) list_setting_pane_t2_ParamLimits

0xc237,	// (0x0001ba86) list_setting_pane_t2

0x0002,

0xf6aa,	// (0x0001eef9) list_setting_pane_t_ParamLimits

0xf6aa,	// (0x0001eef9) list_setting_pane_t

0xc276,	// (0x0001bac5) set_value_pane_cp_ParamLimits

0xc276,	// (0x0001bac5) set_value_pane_cp

0x374b,	// (0x00012f9a) list_setting_number_pane_g1_ParamLimits

0x374b,	// (0x00012f9a) list_setting_number_pane_g1

0xbfc8,	// (0x0001b817) list_setting_number_pane_g2_ParamLimits

0xbfc8,	// (0x0001b817) list_setting_number_pane_g2

0x0001,

0xf6a5,	// (0x0001eef4) list_setting_number_pane_g_ParamLimits

0xf6a5,	// (0x0001eef4) list_setting_number_pane_g

0xc284,	// (0x0001bad3) list_setting_number_pane_t1_ParamLimits

0xc284,	// (0x0001bad3) list_setting_number_pane_t1

0xc298,	// (0x0001bae7) list_setting_number_pane_t2_ParamLimits

0xc298,	// (0x0001bae7) list_setting_number_pane_t2

0xc2af,	// (0x0001bafe) list_setting_number_pane_t3_ParamLimits

0xc2af,	// (0x0001bafe) list_setting_number_pane_t3

0x0003,

0xf6b1,	// (0x0001ef00) list_setting_number_pane_t_ParamLimits

0xf6b1,	// (0x0001ef00) list_setting_number_pane_t

0xc276,	// (0x0001bac5) set_value_pane_ParamLimits

0xc276,	// (0x0001bac5) set_value_pane

0x2998,	// (0x000121e7) bg_set_opt_pane_ParamLimits

0x2998,	// (0x000121e7) bg_set_opt_pane

0x29b9,	// (0x00012208) set_value_pane_t1

0x29c7,	// (0x00012216) slider_set_pane_cp3

0x29d0,	// (0x0001221f) volume_small_pane_cp

0x29d9,	// (0x00012228) list_form_gen_pane

0x29e2,	// (0x00012231) scroll_pane_cp8

0xc2f2,	// (0x0001bb41) form_field_data_pane_ParamLimits

0xc2f2,	// (0x0001bb41) form_field_data_pane

0xc30d,	// (0x0001bb5c) form_field_data_wide_pane_ParamLimits

0xc30d,	// (0x0001bb5c) form_field_data_wide_pane

0xc331,	// (0x0001bb80) form_field_popup_pane_ParamLimits

0xc331,	// (0x0001bb80) form_field_popup_pane

0x2a6a,	// (0x000122b9) form_field_popup_wide_pane_ParamLimits

0x2a6a,	// (0x000122b9) form_field_popup_wide_pane

0x2a8b,	// (0x000122da) form_field_slider_pane_ParamLimits

0x2a8b,	// (0x000122da) form_field_slider_pane

0x2a9e,	// (0x000122ed) form_field_slider_wide_pane_ParamLimits

0x2a9e,	// (0x000122ed) form_field_slider_wide_pane

0x2ab1,	// (0x00012300) data_form_pane

0xc35d,	// (0x0001bbac) form_field_data_pane_t1

0x2ae1,	// (0x00012330) input_focus_pane

0x2aef,	// (0x0001233e) data_form_wide_pane

0x2b27,	// (0x00012376) form_field_data_wide_pane_t1

0x22b7,	// (0x00011b06) input_focus_pane_cp6

0xc377,	// (0x0001bbc6) form_field_popup_pane_t1

0x2ae1,	// (0x00012330) input_focus_pane_cp7

0x2b63,	// (0x000123b2) list_form_pane

0x2b77,	// (0x000123c6) form_field_popup_wide_pane_t1

0x2ae1,	// (0x00012330) input_focus_pane_cp8

0x2b8c,	// (0x000123db) list_form_wide_pane

0xc399,	// (0x0001bbe8) form_field_slider_pane_t1_ParamLimits

0xc399,	// (0x0001bbe8) form_field_slider_pane_t1

0xc3b1,	// (0x0001bc00) form_field_slider_pane_t2_ParamLimits

0xc3b1,	// (0x0001bc00) form_field_slider_pane_t2

0x0001,

0xf6c1,	// (0x0001ef10) form_field_slider_pane_t_ParamLimits

0xf6c1,	// (0x0001ef10) form_field_slider_pane_t

0x1f3b,	// (0x0001178a) input_focus_pane_cp9_ParamLimits

0x1f3b,	// (0x0001178a) input_focus_pane_cp9

0xc3c6,	// (0x0001bc15) slider_cont_pane_ParamLimits

0xc3c6,	// (0x0001bc15) slider_cont_pane

0x2bdd,	// (0x0001242c) form_field_slider_wide_pane_t1_ParamLimits

0x2bdd,	// (0x0001242c) form_field_slider_wide_pane_t1

0x2bef,	// (0x0001243e) form_field_slider_wide_pane_t2_ParamLimits

0x2bef,	// (0x0001243e) form_field_slider_wide_pane_t2

0x0001,

0xf6c6,	// (0x0001ef15) form_field_slider_wide_pane_t_ParamLimits

0xf6c6,	// (0x0001ef15) form_field_slider_wide_pane_t

0x1f3b,	// (0x0001178a) input_focus_pane_cp10_ParamLimits

0x1f3b,	// (0x0001178a) input_focus_pane_cp10

0xc3da,	// (0x0001bc29) slider_cont_pane_cp1_ParamLimits

0xc3da,	// (0x0001bc29) slider_cont_pane_cp1

0xc3ee,	// (0x0001bc3d) slider_form_pane_cp

0x2c1d,	// (0x0001246c) input_focus_pane_g1

0x2c25,	// (0x00012474) input_focus_pane_g2

0x2c2d,	// (0x0001247c) input_focus_pane_g3

0x2c35,	// (0x00012484) input_focus_pane_g4

0x2c3d,	// (0x0001248c) input_focus_pane_g5

0x2c45,	// (0x00012494) input_focus_pane_g6

0x2c4d,	// (0x0001249c) input_focus_pane_g7

0x2c55,	// (0x000124a4) input_focus_pane_g8

0x2c5d,	// (0x000124ac) input_focus_pane_g9

0x1bbb,	// (0x0001140a) input_focus_pane_g10

0x0009,

0xf6cb,	// (0x0001ef1a) input_focus_pane_g

0x4e91,	// (0x000146e0) wait_border_pane_g3_copy1

0xc3f6,	// (0x0001bc45) data_form_pane_t1

0x1bbb,	// (0x0001140a) wait_anim_pane_g1_copy1

0xd88b,	// (0x0001d0da) data_form_wide_pane_t1

0x2c84,	// (0x000124d3) list_form_graphic_pane_cp_ParamLimits

0x2c84,	// (0x000124d3) list_form_graphic_pane_cp

0x5e3e,	// (0x0001568d) slider_form_pane_g1

0x5e47,	// (0x00015696) slider_form_pane_g2

0x0006,

0xf9be,	// (0x0001f20d) slider_form_pane_g

0xc412,	// (0x0001bc61) list_form_graphic_pane_ParamLimits

0xc412,	// (0x0001bc61) list_form_graphic_pane

0x2c96,	// (0x000124e5) list_form_graphic_pane_g1

0x2c9e,	// (0x000124ed) list_form_graphic_pane_t1_ParamLimits

0x2c9e,	// (0x000124ed) list_form_graphic_pane_t1

0x1ca5,	// (0x000114f4) list_highlight_pane_cp5_ParamLimits

0x1ca5,	// (0x000114f4) list_highlight_pane_cp5

0xc423,	// (0x0001bc72) find_pane_g1

0x2cbc,	// (0x0001250b) input_find_pane

0xc42c,	// (0x0001bc7b) input_find_pane_g1_ParamLimits

0xc42c,	// (0x0001bc7b) input_find_pane_g1

0xc438,	// (0x0001bc87) input_find_pane_t1_ParamLimits

0xc438,	// (0x0001bc87) input_find_pane_t1

0xc44d,	// (0x0001bc9c) input_find_pane_t2_ParamLimits

0xc44d,	// (0x0001bc9c) input_find_pane_t2

0x0001,

0xf6e0,	// (0x0001ef2f) input_find_pane_t_ParamLimits

0xf6e0,	// (0x0001ef2f) input_find_pane_t

0x2cfb,	// (0x0001254a) input_focus_pane_cp5_ParamLimits

0x2cfb,	// (0x0001254a) input_focus_pane_cp5

0xc46e,	// (0x0001bcbd) bg_popup_window_pane_cp2_ParamLimits

0xc46e,	// (0x0001bcbd) bg_popup_window_pane_cp2

0xc47b,	// (0x0001bcca) listscroll_menu_pane_ParamLimits

0xc47b,	// (0x0001bcca) listscroll_menu_pane

0xc487,	// (0x0001bcd6) popup_submenu_window_ParamLimits

0xc487,	// (0x0001bcd6) popup_submenu_window

0x2d5e,	// (0x000125ad) find_popup_pane_g1

0x2d66,	// (0x000125b5) input_popup_find_pane_cp

0x2cfb,	// (0x0001254a) input_focus_pane_cp4_ParamLimits

0x2cfb,	// (0x0001254a) input_focus_pane_cp4

0x2d7e,	// (0x000125cd) input_popup_find_pane_t1_ParamLimits

0x2d7e,	// (0x000125cd) input_popup_find_pane_t1

0x1bc5,	// (0x00011414) bg_popup_sub_pane_cp

0x2dac,	// (0x000125fb) listscroll_popup_sub_pane

0x2db4,	// (0x00012603) list_submenu_pane_ParamLimits

0x2db4,	// (0x00012603) list_submenu_pane

0x2dc5,	// (0x00012614) scroll_pane_cp4

0x2dcd,	// (0x0001261c) list_single_popup_submenu_pane_ParamLimits

0x2dcd,	// (0x0001261c) list_single_popup_submenu_pane

0x2de2,	// (0x00012631) list_single_popup_submenu_pane_g1

0x2dea,	// (0x00012639) list_single_popup_submenu_pane_t1_ParamLimits

0x2dea,	// (0x00012639) list_single_popup_submenu_pane_t1

0x1f3b,	// (0x0001178a) bg_active_tab_pane_cp1_ParamLimits

0x1f3b,	// (0x0001178a) bg_active_tab_pane_cp1

0xc4c5,	// (0x0001bd14) tabs_2_active_pane_g1

0xc4cd,	// (0x0001bd1c) tabs_2_active_pane_t1

0x1f3b,	// (0x0001178a) bg_passive_tab_pane_cp1_ParamLimits

0x1f3b,	// (0x0001178a) bg_passive_tab_pane_cp1

0xc4c5,	// (0x0001bd14) tabs_2_passive_pane_g1

0xc4cd,	// (0x0001bd1c) tabs_2_passive_pane_t1

0x1ca5,	// (0x000114f4) bg_active_tab_pane_cp4

0xc4df,	// (0x0001bd2e) tabs_2_long_active_pane_t1

0x3cbb,	// (0x0001350a) bg_passive_tab_pane_cp4

0x0a86,	// (0x000102d5) list_single_midp_graphic_pane_g4_ParamLimits

0x1ca5,	// (0x000114f4) bg_active_tab_pane_cp5

0xc4f2,	// (0x0001bd41) tabs_3_long_active_pane_t1

0x3cbb,	// (0x0001350a) bg_passive_tab_pane_cp5

0x0a86,	// (0x000102d5) list_single_midp_graphic_pane_g4

0x1ca5,	// (0x000114f4) bg_popup_window_pane_cp13_ParamLimits

0x1ca5,	// (0x000114f4) bg_popup_window_pane_cp13

0x2e61,	// (0x000126b0) listscroll_popup_fast_pane_ParamLimits

0x2e61,	// (0x000126b0) listscroll_popup_fast_pane

0x2e70,	// (0x000126bf) grid_popup_fast_pane_ParamLimits

0x2e70,	// (0x000126bf) grid_popup_fast_pane

0x2e82,	// (0x000126d1) scroll_pane_cp9_ParamLimits

0x2e82,	// (0x000126d1) scroll_pane_cp9

0x7c2a,	// (0x00017479) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7c2a,	// (0x00017479) list_single_graphic_hl_pane_t1_cp2

0x2ea6,	// (0x000126f5) input_focus_pane_cp20_ParamLimits

0x2ea6,	// (0x000126f5) input_focus_pane_cp20

0x2eb4,	// (0x00012703) query_popup_data_pane_t1_ParamLimits

0x2eb4,	// (0x00012703) query_popup_data_pane_t1

0x2ec7,	// (0x00012716) query_popup_data_pane_t2_ParamLimits

0x2ec7,	// (0x00012716) query_popup_data_pane_t2

0x2f0d,	// (0x0001275c) query_popup_data_pane_t3_ParamLimits

0x2f0d,	// (0x0001275c) query_popup_data_pane_t3

0x2f4e,	// (0x0001279d) query_popup_data_pane_t4_ParamLimits

0x2f4e,	// (0x0001279d) query_popup_data_pane_t4

0x2f8a,	// (0x000127d9) query_popup_data_pane_t5_ParamLimits

0x2f8a,	// (0x000127d9) query_popup_data_pane_t5

0x0004,

0xf6e5,	// (0x0001ef34) query_popup_data_pane_t_ParamLimits

0xf6e5,	// (0x0001ef34) query_popup_data_pane_t

0x2c1d,	// (0x0001246c) bg_set_opt_pane_g1

0x2c25,	// (0x00012474) bg_set_opt_pane_g2

0x2c2d,	// (0x0001247c) bg_set_opt_pane_g3

0x2c35,	// (0x00012484) bg_set_opt_pane_g4

0x2c3d,	// (0x0001248c) bg_set_opt_pane_g5

0x2c45,	// (0x00012494) bg_set_opt_pane_g6

0x2c4d,	// (0x0001249c) bg_set_opt_pane_g7

0x2c55,	// (0x000124a4) bg_set_opt_pane_g8

0x2c5d,	// (0x000124ac) bg_set_opt_pane_g9

0x0008,

0xf6f0,	// (0x0001ef3f) bg_set_opt_pane_g

0x0677,	// (0x0000fec6) control_top_pane_stacon_ParamLimits

0x0677,	// (0x0000fec6) control_top_pane_stacon

0x06ca,	// (0x0000ff19) signal_pane_stacon_ParamLimits

0x06ca,	// (0x0000ff19) signal_pane_stacon

0x35c2,	// (0x00012e11) stacon_top_pane_g1_ParamLimits

0x35c2,	// (0x00012e11) stacon_top_pane_g1

0x06ef,	// (0x0000ff3e) title_pane_stacon_ParamLimits

0x06ef,	// (0x0000ff3e) title_pane_stacon

0x0719,	// (0x0000ff68) uni_indicator_pane_stacon_ParamLimits

0x0719,	// (0x0000ff68) uni_indicator_pane_stacon

0x0731,	// (0x0000ff80) battery_pane_stacon_ParamLimits

0x0731,	// (0x0000ff80) battery_pane_stacon

0x0775,	// (0x0000ffc4) control_bottom_pane_stacon_ParamLimits

0x0775,	// (0x0000ffc4) control_bottom_pane_stacon

0x0798,	// (0x0000ffe7) navi_pane_stacon_ParamLimits

0x0798,	// (0x0000ffe7) navi_pane_stacon

0x35e4,	// (0x00012e33) stacon_bottom_pane_g1_ParamLimits

0x35e4,	// (0x00012e33) stacon_bottom_pane_g1

0x03d4,	// (0x0000fc23) aid_levels_signal_lsc_ParamLimits

0x03d4,	// (0x0000fc23) aid_levels_signal_lsc

0x03eb,	// (0x0000fc3a) signal_pane_stacon_g1_ParamLimits

0x03eb,	// (0x0000fc3a) signal_pane_stacon_g1

0x03ff,	// (0x0000fc4e) signal_pane_stacon_g2_ParamLimits

0x03ff,	// (0x0000fc4e) signal_pane_stacon_g2

0x0001,

0xf703,	// (0x0001ef52) signal_pane_stacon_g_ParamLimits

0xf703,	// (0x0001ef52) signal_pane_stacon_g

0x0434,	// (0x0000fc83) title_pane_stacon_t1_ParamLimits

0x0434,	// (0x0000fc83) title_pane_stacon_t1

0x2fce,	// (0x0001281d) uni_indicator_pane_stacon_g1

0x2fd8,	// (0x00012827) uni_indicator_pane_stacon_g2

0x2fe2,	// (0x00012831) uni_indicator_pane_stacon_g3

0x2fec,	// (0x0001283b) uni_indicator_pane_stacon_g4

0x0003,

0xf70f,	// (0x0001ef5e) uni_indicator_pane_stacon_g

0x0459,	// (0x0000fca8) control_top_pane_stacon_g1

0x0461,	// (0x0000fcb0) control_top_pane_stacon_t1_ParamLimits

0x0461,	// (0x0000fcb0) control_top_pane_stacon_t1

0x0498,	// (0x0000fce7) aid_levels_battery_lsc_ParamLimits

0x0498,	// (0x0000fce7) aid_levels_battery_lsc

0x04b0,	// (0x0000fcff) battery_pane_stacon_g1_ParamLimits

0x04b0,	// (0x0000fcff) battery_pane_stacon_g1

0x04c3,	// (0x0000fd12) battery_pane_stacon_g2_ParamLimits

0x04c3,	// (0x0000fd12) battery_pane_stacon_g2

0x0001,

0xf718,	// (0x0001ef67) battery_pane_stacon_g_ParamLimits

0xf718,	// (0x0001ef67) battery_pane_stacon_g

0x0501,	// (0x0000fd50) navi_icon_pane_stacon

0x0515,	// (0x0000fd64) navi_navi_pane_stacon

0x0501,	// (0x0000fd50) navi_text_pane_stacon

0x0459,	// (0x0000fca8) control_bottom_pane_stacon_g1

0x052b,	// (0x0000fd7a) control_bottom_pane_stacon_t1_ParamLimits

0x052b,	// (0x0000fd7a) control_bottom_pane_stacon_t1

0xc504,	// (0x0001bd53) grid_app_pane_ParamLimits

0xc504,	// (0x0001bd53) grid_app_pane

0xc53c,	// (0x0001bd8b) scroll_pane_cp15_ParamLimits

0xc53c,	// (0x0001bd8b) scroll_pane_cp15

0xc559,	// (0x0001bda8) cell_app_pane_ParamLimits

0xc559,	// (0x0001bda8) cell_app_pane

0xc59a,	// (0x0001bde9) cell_app_pane_g1_ParamLimits

0xc59a,	// (0x0001bde9) cell_app_pane_g1

0x3099,	// (0x000128e8) cell_app_pane_g2_ParamLimits

0x3099,	// (0x000128e8) cell_app_pane_g2

0x0001,

0xf71d,	// (0x0001ef6c) cell_app_pane_g_ParamLimits

0xf71d,	// (0x0001ef6c) cell_app_pane_g

0x30a5,	// (0x000128f4) cell_app_pane_t1_ParamLimits

0x30a5,	// (0x000128f4) cell_app_pane_t1

0x30b7,	// (0x00012906) grid_highlight_pane_ParamLimits

0x30b7,	// (0x00012906) grid_highlight_pane

0x2c1d,	// (0x0001246c) cell_highlight_pane_g1

0x2c25,	// (0x00012474) cell_highlight_pane_g2

0x2c2d,	// (0x0001247c) cell_highlight_pane_g3

0x2c35,	// (0x00012484) cell_highlight_pane_g4

0x2c3d,	// (0x0001248c) cell_highlight_pane_g5

0x2c45,	// (0x00012494) cell_highlight_pane_g6

0x2c4d,	// (0x0001249c) cell_highlight_pane_g7

0x2c55,	// (0x000124a4) cell_highlight_pane_g8

0x2c5d,	// (0x000124ac) cell_highlight_pane_g9

0x1bbb,	// (0x0001140a) cell_highlight_pane_g10

0x0009,

0xf6cb,	// (0x0001ef1a) cell_highlight_pane_g

0x30c8,	// (0x00012917) bg_scroll_pane

0x0575,	// (0x0000fdc4) scroll_handle_pane

0x310f,	// (0x0001295e) scroll_bg_pane_g1

0x3124,	// (0x00012973) scroll_bg_pane_g2

0x313c,	// (0x0001298b) scroll_bg_pane_g3

0x0002,

0xf722,	// (0x0001ef71) scroll_bg_pane_g

0x3151,	// (0x000129a0) scroll_handle_focus_pane_ParamLimits

0x3151,	// (0x000129a0) scroll_handle_focus_pane

0x310f,	// (0x0001295e) scroll_handle_pane_g1

0x315e,	// (0x000129ad) scroll_handle_pane_g2

0x313c,	// (0x0001298b) scroll_handle_pane_g3

0x0002,

0xf729,	// (0x0001ef78) scroll_handle_pane_g

0x2cfb,	// (0x0001254a) bg_popup_sub_pane_cp21_ParamLimits

0x2cfb,	// (0x0001254a) bg_popup_sub_pane_cp21

0x3172,	// (0x000129c1) popup_fep_japan_predictive_window_t1_ParamLimits

0x3172,	// (0x000129c1) popup_fep_japan_predictive_window_t1

0x3189,	// (0x000129d8) popup_fep_japan_predictive_window_t2_ParamLimits

0x3189,	// (0x000129d8) popup_fep_japan_predictive_window_t2

0x31bc,	// (0x00012a0b) popup_fep_japan_predictive_window_t3_ParamLimits

0x31bc,	// (0x00012a0b) popup_fep_japan_predictive_window_t3

0x0002,

0xf730,	// (0x0001ef7f) popup_fep_japan_predictive_window_t_ParamLimits

0xf730,	// (0x0001ef7f) popup_fep_japan_predictive_window_t

0x1bc5,	// (0x00011414) bg_popup_sub_pane_cp23

0x31f3,	// (0x00012a42) listscroll_japin_cand_pane

0x31fb,	// (0x00012a4a) popup_fep_japan_candidate_window_t1

0x3209,	// (0x00012a58) candidate_pane_ParamLimits

0x3209,	// (0x00012a58) candidate_pane

0x321b,	// (0x00012a6a) scroll_pane_cp30

0x3225,	// (0x00012a74) list_single_popup_jap_candidate_pane_ParamLimits

0x3225,	// (0x00012a74) list_single_popup_jap_candidate_pane

0x1bc5,	// (0x00011414) list_highlight_pane_cp30

0x3239,	// (0x00012a88) list_single_popup_jap_candidate_pane_t1

0xc5be,	// (0x0001be0d) level_1_signal

0xc5d0,	// (0x0001be1f) level_2_signal

0xc5e3,	// (0x0001be32) level_3_signal

0xc5f6,	// (0x0001be45) level_4_signal

0xc609,	// (0x0001be58) level_5_signal

0xc61c,	// (0x0001be6b) level_6_signal

0xc663,	// (0x0001beb2) level_7_signal

0xc5be,	// (0x0001be0d) level_1_battery

0xc5d0,	// (0x0001be1f) level_2_battery

0xc5e3,	// (0x0001be32) level_3_battery

0xc5f6,	// (0x0001be45) level_4_battery

0xc609,	// (0x0001be58) level_5_battery

0xc61c,	// (0x0001be6b) level_6_battery

0xc663,	// (0x0001beb2) level_7_battery

0x32bb,	// (0x00012b0a) list_menu_pane_ParamLimits

0x32bb,	// (0x00012b0a) list_menu_pane

0x32cc,	// (0x00012b1b) scroll_pane_cp25_ParamLimits

0x32cc,	// (0x00012b1b) scroll_pane_cp25

0x32e5,	// (0x00012b34) list_double2_graphic_pane_cp2_ParamLimits

0x32e5,	// (0x00012b34) list_double2_graphic_pane_cp2

0x32e5,	// (0x00012b34) list_double2_large_graphic_pane_cp2_ParamLimits

0x32e5,	// (0x00012b34) list_double2_large_graphic_pane_cp2

0x32e5,	// (0x00012b34) list_double2_pane_cp2_ParamLimits

0x32e5,	// (0x00012b34) list_double2_pane_cp2

0x32e5,	// (0x00012b34) list_double_graphic_pane_cp2_ParamLimits

0x32e5,	// (0x00012b34) list_double_graphic_pane_cp2

0x32e5,	// (0x00012b34) list_double_large_graphic_pane_cp2_ParamLimits

0x32e5,	// (0x00012b34) list_double_large_graphic_pane_cp2

0x32e5,	// (0x00012b34) list_double_number_pane_cp2_ParamLimits

0x32e5,	// (0x00012b34) list_double_number_pane_cp2

0x32e5,	// (0x00012b34) list_double_pane_cp2_ParamLimits

0x32e5,	// (0x00012b34) list_double_pane_cp2

0xc676,	// (0x0001bec5) list_single_2graphic_pane_cp2_ParamLimits

0xc676,	// (0x0001bec5) list_single_2graphic_pane_cp2

0xc676,	// (0x0001bec5) list_single_graphic_heading_pane_cp2_ParamLimits

0xc676,	// (0x0001bec5) list_single_graphic_heading_pane_cp2

0xc676,	// (0x0001bec5) list_single_graphic_pane_cp2_ParamLimits

0xc676,	// (0x0001bec5) list_single_graphic_pane_cp2

0xc676,	// (0x0001bec5) list_single_heading_pane_cp2_ParamLimits

0xc676,	// (0x0001bec5) list_single_heading_pane_cp2

0x3328,	// (0x00012b77) list_single_large_graphic_pane_cp2_ParamLimits

0x3328,	// (0x00012b77) list_single_large_graphic_pane_cp2

0xc676,	// (0x0001bec5) list_single_number_heading_pane_cp2_ParamLimits

0xc676,	// (0x0001bec5) list_single_number_heading_pane_cp2

0xc676,	// (0x0001bec5) list_single_number_pane_cp2_ParamLimits

0xc676,	// (0x0001bec5) list_single_number_pane_cp2

0xc676,	// (0x0001bec5) list_single_pane_cp2_ParamLimits

0xc676,	// (0x0001bec5) list_single_pane_cp2

0x337d,	// (0x00012bcc) bg_popup_sub_pane_cp22

0x0627,	// (0x0000fe76) popup_side_volume_key_window_g1

0x0651,	// (0x0000fea0) popup_side_volume_key_window_t1

0x066f,	// (0x0000febe) volume_small_pane_cp1

0x1f3b,	// (0x0001178a) bg_popup_sub_pane_cp24_ParamLimits

0x1f3b,	// (0x0001178a) bg_popup_sub_pane_cp24

0x3393,	// (0x00012be2) fep_china_uni_candidate_pane_ParamLimits

0x3393,	// (0x00012be2) fep_china_uni_candidate_pane

0x33a7,	// (0x00012bf6) fep_china_uni_entry_pane

0x33b7,	// (0x00012c06) popup_fep_china_uni_window_g1

0x33d3,	// (0x00012c22) fep_china_uni_entry_pane_g1

0x33dd,	// (0x00012c2c) fep_china_uni_entry_pane_g2

0x0001,

0xf75d,	// (0x0001efac) fep_china_uni_entry_pane_g

0x33e7,	// (0x00012c36) fep_entry_item_pane

0x33f1,	// (0x00012c40) fep_candidate_item_pane

0x33f9,	// (0x00012c48) fep_china_uni_candidate_pane_g1

0x3403,	// (0x00012c52) fep_china_uni_candidate_pane_g2

0x340b,	// (0x00012c5a) fep_china_uni_candidate_pane_g3

0x3413,	// (0x00012c62) fep_china_uni_candidate_pane_g4

0x0003,

0xf762,	// (0x0001efb1) fep_china_uni_candidate_pane_g

0x1bbb,	// (0x0001140a) fep_entry_item_pane_g1

0x341d,	// (0x00012c6c) fep_entry_item_pane_t1_ParamLimits

0x341d,	// (0x00012c6c) fep_entry_item_pane_t1

0x3433,	// (0x00012c82) fep_candidate_item_pane_t1_ParamLimits

0x3433,	// (0x00012c82) fep_candidate_item_pane_t1

0x3448,	// (0x00012c97) fep_candidate_item_pane_t2_ParamLimits

0x3448,	// (0x00012c97) fep_candidate_item_pane_t2

0x0001,

0xf76b,	// (0x0001efba) fep_candidate_item_pane_t_ParamLimits

0xf76b,	// (0x0001efba) fep_candidate_item_pane_t

0x1ca5,	// (0x000114f4) list_highlight_pane_cp31_ParamLimits

0x1ca5,	// (0x000114f4) list_highlight_pane_cp31

0x345a,	// (0x00012ca9) level_1_signal_lsc

0x3463,	// (0x00012cb2) level_2_signal_lsc

0x346c,	// (0x00012cbb) level_3_signal_lsc

0x3475,	// (0x00012cc4) level_4_signal_lsc

0x347e,	// (0x00012ccd) level_5_signal_lsc

0x3487,	// (0x00012cd6) level_6_signal_lsc

0x3490,	// (0x00012cdf) level_7_signal_lsc

0x3490,	// (0x00012cdf) level_1_battery_lsc

0x3499,	// (0x00012ce8) level_2_battery_lsc

0x34a2,	// (0x00012cf1) level_3_battery_lsc

0x34ab,	// (0x00012cfa) level_4_battery_lsc

0x34b4,	// (0x00012d03) level_5_battery_lsc

0x34bd,	// (0x00012d0c) level_6_battery_lsc

0x345a,	// (0x00012ca9) level_7_battery_lsc

0x34c6,	// (0x00012d15) scroll_handle_focus_pane_g1

0x34cf,	// (0x00012d1e) scroll_handle_focus_pane_g2

0x34d8,	// (0x00012d27) scroll_handle_focus_pane_g3

0x0002,

0xf770,	// (0x0001efbf) scroll_handle_focus_pane_g

0xc6d9,	// (0x0001bf28) list_single_2graphic_pane_g1_ParamLimits

0xc6d9,	// (0x0001bf28) list_single_2graphic_pane_g1

0xbf4c,	// (0x0001b79b) list_single_2graphic_pane_g2_ParamLimits

0xbf4c,	// (0x0001b79b) list_single_2graphic_pane_g2

0x47af,	// (0x00013ffe) list_single_2graphic_pane_g3_ParamLimits

0x47af,	// (0x00013ffe) list_single_2graphic_pane_g3

0xc6e5,	// (0x0001bf34) list_single_2graphic_pane_g4_ParamLimits

0xc6e5,	// (0x0001bf34) list_single_2graphic_pane_g4

0x0003,

0xf777,	// (0x0001efc6) list_single_2graphic_pane_g_ParamLimits

0xf777,	// (0x0001efc6) list_single_2graphic_pane_g

0xc6f6,	// (0x0001bf45) list_single_2graphic_pane_t1_ParamLimits

0xc6f6,	// (0x0001bf45) list_single_2graphic_pane_t1

0xc724,	// (0x0001bf73) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc724,	// (0x0001bf73) list_double2_graphic_large_graphic_pane_g1

0xbfb7,	// (0x0001b806) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xbfb7,	// (0x0001b806) list_double2_graphic_large_graphic_pane_g2

0xbfc8,	// (0x0001b817) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xbfc8,	// (0x0001b817) list_double2_graphic_large_graphic_pane_g3

0xc62f,	// (0x0001be7e) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xc62f,	// (0x0001be7e) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf780,	// (0x0001efcf) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf780,	// (0x0001efcf) list_double2_graphic_large_graphic_pane_g

0xc736,	// (0x0001bf85) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xc736,	// (0x0001bf85) list_double2_graphic_large_graphic_pane_t1

0xc74c,	// (0x0001bf9b) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xc74c,	// (0x0001bf9b) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf789,	// (0x0001efd8) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf789,	// (0x0001efd8) list_double2_graphic_large_graphic_pane_t

0x36a6,	// (0x00012ef5) popup_fast_swap_window_ParamLimits

0x36a6,	// (0x00012ef5) popup_fast_swap_window

0x36c4,	// (0x00012f13) popup_side_volume_key_window

0x36e2,	// (0x00012f31) stacon_top_pane

0x36ec,	// (0x00012f3b) status_pane_ParamLimits

0x36ec,	// (0x00012f3b) status_pane

0x36e2,	// (0x00012f31) status_small_pane

0x1bc5,	// (0x00011414) control_pane

0x1bc5,	// (0x00011414) stacon_bottom_pane

0x29e2,	// (0x00012231) scroll_pane_cp121

0x29d9,	// (0x00012228) set_content_pane

0xc75e,	// (0x0001bfad) bg_active_tab_pane_g1_cp1

0x3576,	// (0x00012dc5) bg_active_tab_pane_g2_cp1

0xc767,	// (0x0001bfb6) bg_active_tab_pane_g3_cp1

0xc75e,	// (0x0001bfad) bg_passive_tab_pane_g1_cp1

0x3576,	// (0x00012dc5) bg_passive_tab_pane_g2_cp1

0xc767,	// (0x0001bfb6) bg_passive_tab_pane_g3_cp1

0xc770,	// (0x0001bfbf) bg_active_tab_pane_g1_cp2

0x3576,	// (0x00012dc5) bg_active_tab_pane_g2_cp2

0xc779,	// (0x0001bfc8) bg_active_tab_pane_g3_cp2

0xc770,	// (0x0001bfbf) bg_passive_tab_pane_g1_cp2

0x3576,	// (0x00012dc5) bg_passive_tab_pane_g2_cp2

0xc779,	// (0x0001bfc8) bg_passive_tab_pane_g3_cp2

0xc782,	// (0x0001bfd1) bg_active_tab_pane_g1_cp3

0x3576,	// (0x00012dc5) bg_active_tab_pane_g2_cp3

0xc78b,	// (0x0001bfda) bg_active_tab_pane_g3_cp3

0xc782,	// (0x0001bfd1) bg_passive_tab_pane_g1_cp3

0x3576,	// (0x00012dc5) bg_passive_tab_pane_g2_cp3

0xc78b,	// (0x0001bfda) bg_passive_tab_pane_g3_cp3

0xc794,	// (0x0001bfe3) bg_active_tab_pane_g1_cp4

0x3576,	// (0x00012dc5) bg_active_tab_pane_g2_cp4

0xc79d,	// (0x0001bfec) bg_active_tab_pane_g3_cp4

0xc794,	// (0x0001bfe3) bg_passive_tab_pane_g1_cp4

0x3576,	// (0x00012dc5) bg_passive_tab_pane_g2_cp4

0xc79d,	// (0x0001bfec) bg_passive_tab_pane_g3_cp4

0x3600,	// (0x00012e4f) bg_active_tab_pane_g1_cp5

0x3576,	// (0x00012dc5) bg_active_tab_pane_g2_cp5

0x3609,	// (0x00012e58) bg_active_tab_pane_g3_cp5

0x3600,	// (0x00012e4f) bg_passive_tab_pane_g1_cp5

0x3576,	// (0x00012dc5) bg_passive_tab_pane_g2_cp5

0x3609,	// (0x00012e58) bg_passive_tab_pane_g3_cp5

0x2dcd,	// (0x0001261c) list_set_graphic_pane_ParamLimits

0x2dcd,	// (0x0001261c) list_set_graphic_pane

0x1bc5,	// (0x00011414) bg_set_opt_pane_cp4

0xc7a6,	// (0x0001bff5) list_set_graphic_pane_g1_ParamLimits

0xc7a6,	// (0x0001bff5) list_set_graphic_pane_g1

0xc7b2,	// (0x0001c001) list_set_graphic_pane_g2_ParamLimits

0xc7b2,	// (0x0001c001) list_set_graphic_pane_g2

0x0001,

0xf78e,	// (0x0001efdd) list_set_graphic_pane_g_ParamLimits

0xf78e,	// (0x0001efdd) list_set_graphic_pane_g

0x0009,

0xfaf9,	// (0x0001f348) volume_small_pane_cp_g

0x3657,	// (0x00012ea6) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x3657,	// (0x00012ea6) list_double2_large_graphic_pane_g1_cp2

0x3665,	// (0x00012eb4) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3665,	// (0x00012eb4) list_double2_large_graphic_pane_g2_cp2

0x3676,	// (0x00012ec5) list_double2_large_graphic_pane_g3_cp2

0x367e,	// (0x00012ecd) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x367e,	// (0x00012ecd) list_double2_large_graphic_pane_t1_cp2

0x3694,	// (0x00012ee3) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3694,	// (0x00012ee3) list_double2_large_graphic_pane_t2_cp2

0x597b,	// (0x000151ca) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x597b,	// (0x000151ca) list_double_large_graphic_pane_g1_cp2

0x598e,	// (0x000151dd) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x598e,	// (0x000151dd) list_double_large_graphic_pane_g2_cp2

0x380a,	// (0x00013059) list_double_large_graphic_pane_g3_cp2

0x599f,	// (0x000151ee) list_double_large_graphic_pane_g4_cp

0x59a7,	// (0x000151f6) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x59a7,	// (0x000151f6) list_double_large_graphic_pane_t1_cp2

0x59be,	// (0x0001520d) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x59be,	// (0x0001520d) list_double_large_graphic_pane_t2_cp2

0x36fa,	// (0x00012f49) list_double2_graphic_pane_g1_cp2_ParamLimits

0x36fa,	// (0x00012f49) list_double2_graphic_pane_g1_cp2

0x3708,	// (0x00012f57) list_double2_graphic_pane_g2_cp2_ParamLimits

0x3708,	// (0x00012f57) list_double2_graphic_pane_g2_cp2

0x3719,	// (0x00012f68) list_double2_graphic_pane_g3_cp2

0x3723,	// (0x00012f72) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3723,	// (0x00012f72) list_double2_graphic_pane_t1_cp2

0x3739,	// (0x00012f88) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3739,	// (0x00012f88) list_double2_graphic_pane_t2_cp2

0x374b,	// (0x00012f9a) list_single_number_heading_pane_g1_cp2_ParamLimits

0x374b,	// (0x00012f9a) list_single_number_heading_pane_g1_cp2

0x3757,	// (0x00012fa6) list_single_number_heading_pane_g2_cp2

0x375f,	// (0x00012fae) list_single_number_heading_pane_t1_cp2_ParamLimits

0x375f,	// (0x00012fae) list_single_number_heading_pane_t1_cp2

0x3775,	// (0x00012fc4) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3775,	// (0x00012fc4) list_single_number_heading_pane_t2_cp2

0x3789,	// (0x00012fd8) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3789,	// (0x00012fd8) list_single_number_heading_pane_t3_cp2

0x374b,	// (0x00012f9a) list_single_heading_pane_g1_cp2_ParamLimits

0x374b,	// (0x00012f9a) list_single_heading_pane_g1_cp2

0x3757,	// (0x00012fa6) list_single_heading_pane_g2_cp2

0x375f,	// (0x00012fae) list_single_heading_pane_t1_cp2_ParamLimits

0x375f,	// (0x00012fae) list_single_heading_pane_t1_cp2

0x5775,	// (0x00014fc4) list_single_heading_pane_t2_cp2_ParamLimits

0x5775,	// (0x00014fc4) list_single_heading_pane_t2_cp2

0x56b7,	// (0x00014f06) list_double_graphic_pane_g1_cp2_ParamLimits

0x56b7,	// (0x00014f06) list_double_graphic_pane_g1_cp2

0x56c3,	// (0x00014f12) list_double_graphic_pane_g2_cp2_ParamLimits

0x56c3,	// (0x00014f12) list_double_graphic_pane_g2_cp2

0x56d2,	// (0x00014f21) list_double_graphic_pane_g3_cp2

0x56da,	// (0x00014f29) list_double_graphic_pane_t1_cp2_ParamLimits

0x56da,	// (0x00014f29) list_double_graphic_pane_t1_cp2

0x56f0,	// (0x00014f3f) list_double_graphic_pane_t2_cp2_ParamLimits

0x56f0,	// (0x00014f3f) list_double_graphic_pane_t2_cp2

0x37fe,	// (0x0001304d) list_double_number_pane_g1_cp2_ParamLimits

0x37fe,	// (0x0001304d) list_double_number_pane_g1_cp2

0x380a,	// (0x00013059) list_double_number_pane_g2_cp2

0x567b,	// (0x00014eca) list_double_number_pane_t1_cp2_ParamLimits

0x567b,	// (0x00014eca) list_double_number_pane_t1_cp2

0x568f,	// (0x00014ede) list_double_number_pane_t2_cp2_ParamLimits

0x568f,	// (0x00014ede) list_double_number_pane_t2_cp2

0x56a5,	// (0x00014ef4) list_double_number_pane_t3_cp2_ParamLimits

0x56a5,	// (0x00014ef4) list_double_number_pane_t3_cp2

0x5564,	// (0x00014db3) list_single_graphic_pane_g1_cp2_ParamLimits

0x5564,	// (0x00014db3) list_single_graphic_pane_g1_cp2

0x3864,	// (0x000130b3) list_single_graphic_pane_g2_cp2_ParamLimits

0x3864,	// (0x000130b3) list_single_graphic_pane_g2_cp2

0x3870,	// (0x000130bf) list_single_graphic_pane_g3_cp2

0x553a,	// (0x00014d89) list_single_graphic_pane_t1_cp2_ParamLimits

0x553a,	// (0x00014d89) list_single_graphic_pane_t1_cp2

0x3864,	// (0x000130b3) list_single_number_pane_g1_cp2_ParamLimits

0x3864,	// (0x000130b3) list_single_number_pane_g1_cp2

0x3870,	// (0x000130bf) list_single_number_pane_g2_cp2

0x553a,	// (0x00014d89) list_single_number_pane_t1_cp2_ParamLimits

0x553a,	// (0x00014d89) list_single_number_pane_t1_cp2

0x5550,	// (0x00014d9f) list_single_number_pane_t2_cp2_ParamLimits

0x5550,	// (0x00014d9f) list_single_number_pane_t2_cp2

0x3665,	// (0x00012eb4) list_double2_pane_g1_cp2_ParamLimits

0x3665,	// (0x00012eb4) list_double2_pane_g1_cp2

0x3676,	// (0x00012ec5) list_double2_pane_g2_cp2

0x37d6,	// (0x00013025) list_double2_pane_t1_cp2_ParamLimits

0x37d6,	// (0x00013025) list_double2_pane_t1_cp2

0x37ec,	// (0x0001303b) list_double2_pane_t2_cp2_ParamLimits

0x37ec,	// (0x0001303b) list_double2_pane_t2_cp2

0x37fe,	// (0x0001304d) list_double_pane_g1_cp2_ParamLimits

0x37fe,	// (0x0001304d) list_double_pane_g1_cp2

0x380a,	// (0x00013059) list_double_pane_g2_cp2

0x3812,	// (0x00013061) list_double_pane_t1_cp2_ParamLimits

0x3812,	// (0x00013061) list_double_pane_t1_cp2

0x3828,	// (0x00013077) list_double_pane_t2_cp2_ParamLimits

0x3828,	// (0x00013077) list_double_pane_t2_cp2

0x3854,	// (0x000130a3) list_single_pane_cp2_g3

0x3864,	// (0x000130b3) list_single_pane_g1_cp2_ParamLimits

0x3864,	// (0x000130b3) list_single_pane_g1_cp2

0x3870,	// (0x000130bf) list_single_pane_g2_cp2

0x3878,	// (0x000130c7) list_single_pane_t1_cp2_ParamLimits

0x3878,	// (0x000130c7) list_single_pane_t1_cp2

0x3890,	// (0x000130df) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3890,	// (0x000130df) list_single_large_graphic_pane_g1_cp2

0x389e,	// (0x000130ed) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x389e,	// (0x000130ed) list_single_large_graphic_pane_g2_cp2

0x38aa,	// (0x000130f9) list_single_large_graphic_pane_g3_cp2

0x38b2,	// (0x00013101) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x38b2,	// (0x00013101) list_single_large_graphic_pane_g4_cp1

0x38cc,	// (0x0001311b) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x38cc,	// (0x0001311b) list_single_large_graphic_pane_t1_cp2

0x5504,	// (0x00014d53) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5504,	// (0x00014d53) list_single_graphic_heading_pane_g1_cp2

0x54d1,	// (0x00014d20) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x54d1,	// (0x00014d20) list_single_graphic_heading_pane_g4_cp2

0x3870,	// (0x000130bf) list_single_graphic_heading_pane_g5_cp2

0x5510,	// (0x00014d5f) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5510,	// (0x00014d5f) list_single_graphic_heading_pane_t1_cp2

0x5526,	// (0x00014d75) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5526,	// (0x00014d75) list_single_graphic_heading_pane_t2_cp2

0x54c5,	// (0x00014d14) list_single_2graphic_pane_g1_cp2_ParamLimits

0x54c5,	// (0x00014d14) list_single_2graphic_pane_g1_cp2

0x54d1,	// (0x00014d20) list_single_2graphic_pane_g2_cp2_ParamLimits

0x54d1,	// (0x00014d20) list_single_2graphic_pane_g2_cp2

0x3870,	// (0x000130bf) list_single_2graphic_pane_g3_cp2

0x54e2,	// (0x00014d31) list_single_2graphic_pane_g4_cp2_ParamLimits

0x54e2,	// (0x00014d31) list_single_2graphic_pane_g4_cp2

0x54ee,	// (0x00014d3d) list_single_2graphic_pane_t1_cp2_ParamLimits

0x54ee,	// (0x00014d3d) list_single_2graphic_pane_t1_cp2

0x1bbb,	// (0x0001140a) list_highlight_pane_g10_cp1

0x509d,	// (0x000148ec) list_highlight_pane_g1_cp1

0x50a5,	// (0x000148f4) list_highlight_pane_g2_cp1

0x50ad,	// (0x000148fc) list_highlight_pane_g3_cp1

0x50b5,	// (0x00014904) list_highlight_pane_g4_cp1

0x50bd,	// (0x0001490c) list_highlight_pane_g5_cp1

0x50c5,	// (0x00014914) list_highlight_pane_g6_cp1

0x50cd,	// (0x0001491c) list_highlight_pane_g7_cp1

0x50d5,	// (0x00014924) list_highlight_pane_g8_cp1

0x50dd,	// (0x0001492c) list_highlight_pane_g9_cp1

0xd4e1,	// (0x0001cd30) form_field_slider_pane_t3

0xd4ef,	// (0x0001cd3e) form_field_slider_pane_t4

0x4fd9,	// (0x00014828) slider_form_pane_ParamLimits

0x4fd9,	// (0x00014828) slider_form_pane

0x1bc5,	// (0x00011414) control_abbreviations

0x1bc5,	// (0x00011414) control_conventions

0x1bc5,	// (0x00011414) control_definitions

0x1bc5,	// (0x00011414) format_table_attribute

0x57cb,	// (0x0001501a) bg_popup_preview_window_pane_g9

0x1bc5,	// (0x00011414) format_table_data2

0x1bc5,	// (0x00011414) format_table_data3

0x1bc5,	// (0x00011414) format_table_data_example

0x0008,

0x1bc5,	// (0x00011414) intro_purpose

0xf91e,	// (0x0001f16d) bg_popup_preview_window_pane_g

0x1bc5,	// (0x00011414) texts_category

0x1bc5,	// (0x00011414) texts_graphics

0x38e2,	// (0x00013131) text_digital

0x38f1,	// (0x00013140) text_primary

0x3900,	// (0x0001314f) text_primary_small

0x390f,	// (0x0001315e) text_secondary

0x391e,	// (0x0001316d) text_title

0x5ff0,	// (0x0001583f) bg_passive_tab_pane_g1_cp3_srt

0x3576,	// (0x00012dc5) bg_passive_tab_pane_g2_cp3_srt

0x5ff9,	// (0x00015848) bg_passive_tab_pane_g3_cp3_srt

0x1f3b,	// (0x0001178a) bg_active_tab_pane_cp3_srt_ParamLimits

0x1f3b,	// (0x0001178a) bg_active_tab_pane_cp3_srt

0x6002,	// (0x00015851) tabs_4_active_pane_srt_g1

0xd948,	// (0x0001d197) tabs_4_active_pane_srt_t1_ParamLimits

0xd948,	// (0x0001d197) tabs_4_active_pane_srt_t1

0x5ff0,	// (0x0001583f) bg_active_tab_pane_g1_cp3_copy1

0x3576,	// (0x00012dc5) bg_active_tab_pane_g2_cp3_copy1

0x5ff9,	// (0x00015848) bg_active_tab_pane_g3_cp3_copy1

0x1ca5,	// (0x000114f4) tabs_2_long_active_pane_srt_ParamLimits

0x1ca5,	// (0x000114f4) tabs_2_long_active_pane_srt

0x1ca5,	// (0x000114f4) tabs_2_long_passive_pane_srt_ParamLimits

0x1ca5,	// (0x000114f4) tabs_2_long_passive_pane_srt

0x3cbb,	// (0x0001350a) bg_passive_tab_pane_cp4_srt_ParamLimits

0x3cbb,	// (0x0001350a) bg_passive_tab_pane_cp4_srt

0x5c43,	// (0x00015492) bg_passive_tab_pane_g1_cp4_srt

0x3576,	// (0x00012dc5) bg_passive_tab_pane_g2_cp4_srt

0x5c4c,	// (0x0001549b) bg_passive_tab_pane_g3_cp4_srt

0x1ca5,	// (0x000114f4) bg_active_tab_pane_cp4_srt_ParamLimits

0x1ca5,	// (0x000114f4) bg_active_tab_pane_cp4_srt

0xd6fc,	// (0x0001cf4b) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd6fc,	// (0x0001cf4b) tabs_2_long_active_pane_srt_t1

0x5c43,	// (0x00015492) bg_active_tab_pane_g1_cp4_srt

0x3576,	// (0x00012dc5) bg_active_tab_pane_g2_cp4_srt

0x5c4c,	// (0x0001549b) bg_active_tab_pane_g3_cp4_srt

0x1f3b,	// (0x0001178a) tabs_3_long_active_pane_srt_ParamLimits

0x1f3b,	// (0x0001178a) tabs_3_long_active_pane_srt

0x1f3b,	// (0x0001178a) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x1f3b,	// (0x0001178a) tabs_3_long_passive_pane_cp_srt

0x1f3b,	// (0x0001178a) tabs_3_long_passive_pane_srt_ParamLimits

0x1f3b,	// (0x0001178a) tabs_3_long_passive_pane_srt

0x3cbb,	// (0x0001350a) bg_passive_tab_pane_cp5_srt_ParamLimits

0x3cbb,	// (0x0001350a) bg_passive_tab_pane_cp5_srt

0x3600,	// (0x00012e4f) bg_passive_tab_pane_g1_cp5_srt

0x3576,	// (0x00012dc5) bg_passive_tab_pane_g2_cp5_srt

0x3609,	// (0x00012e58) bg_passive_tab_pane_g3_cp5_srt

0x1ca5,	// (0x000114f4) bg_active_tab_pane_cp5_srt_ParamLimits

0x1ca5,	// (0x000114f4) bg_active_tab_pane_cp5_srt

0xd6e6,	// (0x0001cf35) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd6e6,	// (0x0001cf35) tabs_3_long_active_pane_srt_t1

0x3600,	// (0x00012e4f) bg_active_tab_pane_g1_cp5_srt

0x3576,	// (0x00012dc5) bg_active_tab_pane_g2_cp5_srt

0x3609,	// (0x00012e58) bg_active_tab_pane_g3_cp5_srt

0x5c23,	// (0x00015472) navi_text_pane_srt_t1

0x5c1b,	// (0x0001546a) navi_icon_pane_srt_g1

0x3af5,	// (0x00013344) midp_editing_number_pane_srt

0x392d,	// (0x0001317c) midp_ticker_pane_srt

0x3afd,	// (0x0001334c) midp_ticker_pane_srt_g1

0x3b05,	// (0x00013354) midp_ticker_pane_srt_g2

0x0001,

0xf7ad,	// (0x0001effc) midp_ticker_pane_srt_g

0x3b0d,	// (0x0001335c) midp_ticker_pane_srt_t1

0x5c0c,	// (0x0001545b) midp_editing_number_pane_t1_copy1

0xc7d6,	// (0x0001c025) listscroll_midp_pane

0xc7d6,	// (0x0001c025) midp_form_pane

0x39a3,	// (0x000131f2) midp_info_popup_window_ParamLimits

0x39a3,	// (0x000131f2) midp_info_popup_window

0x2cfb,	// (0x0001254a) bg_popup_sub_pane_cp50_ParamLimits

0x2cfb,	// (0x0001254a) bg_popup_sub_pane_cp50

0x4d04,	// (0x00014553) listscroll_midp_info_pane_ParamLimits

0x4d04,	// (0x00014553) listscroll_midp_info_pane

0x4cec,	// (0x0001453b) listscroll_form_midp_pane_ParamLimits

0x4cec,	// (0x0001453b) listscroll_form_midp_pane

0x4cf8,	// (0x00014547) scroll_bar_cp050

0xd4d5,	// (0x0001cd24) list_midp_pane

0x6c47,	// (0x00016496) signal_pane_g2_cp

0x4c06,	// (0x00014455) listscroll_midp_info_pane_t1_ParamLimits

0x4c06,	// (0x00014455) listscroll_midp_info_pane_t1

0x4c1e,	// (0x0001446d) listscroll_midp_info_pane_t2_ParamLimits

0x4c1e,	// (0x0001446d) listscroll_midp_info_pane_t2

0x4c5c,	// (0x000144ab) listscroll_midp_info_pane_t3_ParamLimits

0x4c5c,	// (0x000144ab) listscroll_midp_info_pane_t3

0x4c96,	// (0x000144e5) listscroll_midp_info_pane_t4_ParamLimits

0x4c96,	// (0x000144e5) listscroll_midp_info_pane_t4

0x0003,

0xf859,	// (0x0001f0a8) listscroll_midp_info_pane_t_ParamLimits

0xf859,	// (0x0001f0a8) listscroll_midp_info_pane_t

0x2dc5,	// (0x00012614) scroll_pane_cp21

0x4ba0,	// (0x000143ef) form_midp_field_choice_group_pane

0x4ba9,	// (0x000143f8) form_midp_field_text_pane

0x4bec,	// (0x0001443b) form_midp_field_time_pane

0x4bf4,	// (0x00014443) form_midp_gauge_slider_pane

0x4bfd,	// (0x0001444c) form_midp_gauge_wait_pane

0x1bc5,	// (0x00011414) form_midp_image_pane

0xd4b8,	// (0x0001cd07) list_single_midp_pane_ParamLimits

0xd4b8,	// (0x0001cd07) list_single_midp_pane

0xd490,	// (0x0001ccdf) form_midp_field_text_pane_t1

0x4949,	// (0x00014198) input_focus_pane_cp050

0x4b6f,	// (0x000143be) list_midp_form_text_pane

0x4b13,	// (0x00014362) form_midp_field_choice_group_pane_t1

0x4b21,	// (0x00014370) input_focus_pane_cp051

0x4b35,	// (0x00014384) list_midp_choice_pane

0x1bc5,	// (0x00011414) status_idle_pane

0x4af7,	// (0x00014346) form_midp_field_time_pane_t1

0x1bbb,	// (0x0001140a) wait_anim_pane_g2_copy1

0x4b05,	// (0x00014354) form_midp_field_time_pane_t2

0x0001,

0x3a53,	// (0x000132a2) aid_navinavi_width_2_pane

0xf854,	// (0x0001f0a3) form_midp_field_time_pane_t

0x1bc5,	// (0x00011414) input_focus_pane_cp052

0x1bc5,	// (0x00011414) bg_input_focus_pane_cp040

0x4ab7,	// (0x00014306) form_midp_gauge_slider_pane_t1

0x4ac5,	// (0x00014314) form_midp_gauge_slider_pane_t2

0xd474,	// (0x0001ccc3) form_midp_gauge_slider_pane_t3

0xd482,	// (0x0001ccd1) form_midp_gauge_slider_pane_t4

0x0003,

0xf84b,	// (0x0001f09a) form_midp_gauge_slider_pane_t

0x4aef,	// (0x0001433e) form_midp_slider_pane

0x1ca5,	// (0x000114f4) bg_input_focus_pane_cp041_ParamLimits

0x1ca5,	// (0x000114f4) bg_input_focus_pane_cp041

0x4a84,	// (0x000142d3) form_midp_gauge_wait_pane_t1_ParamLimits

0x4a84,	// (0x000142d3) form_midp_gauge_wait_pane_t1

0x4a96,	// (0x000142e5) form_midp_gauge_wait_pane_t2_ParamLimits

0x4a96,	// (0x000142e5) form_midp_gauge_wait_pane_t2

0x0001,

0xf846,	// (0x0001f095) form_midp_gauge_wait_pane_t_ParamLimits

0xf846,	// (0x0001f095) form_midp_gauge_wait_pane_t

0x4aa8,	// (0x000142f7) form_midp_wait_pane_ParamLimits

0x4aa8,	// (0x000142f7) form_midp_wait_pane

0x4a4c,	// (0x0001429b) form_midp_image_pane_g1

0x4a55,	// (0x000142a4) form_midp_image_pane_t1

0x4a64,	// (0x000142b3) form_midp_image_pane_t2

0x4a73,	// (0x000142c2) form_midp_image_pane_t3

0x0002,

0xf83f,	// (0x0001f08e) form_midp_image_pane_t

0x4a34,	// (0x00014283) list_single_midp_pane_g1

0x4a3d,	// (0x0001428c) list_single_midp_pane_t1

0xd45d,	// (0x0001ccac) list_midp_form_item_pane_ParamLimits

0xd45d,	// (0x0001ccac) list_midp_form_item_pane

0x39fb,	// (0x0001324a) list_midp_form_item_pane_t1

0x3a0a,	// (0x00013259) midp_ticker_pane_g1

0x3a16,	// (0x00013265) midp_ticker_pane_g2

0x0001,

0xf793,	// (0x0001efe2) midp_ticker_pane_g

0xc87e,	// (0x0001c0cd) midp_ticker_pane_t1

0xd8a7,	// (0x0001d0f6) midp_editing_number_pane_t1

0x5e9e,	// (0x000156ed) midp_editing_number_pane

0x5ead,	// (0x000156fc) midp_ticker_pane

0x5bd4,	// (0x00015423) ai_message_heading_pane

0x1bc5,	// (0x00011414) bg_popup_window_pane_cp14

0x5bdc,	// (0x0001542b) listscroll_ai_message_pane

0x5b5a,	// (0x000153a9) ai_message_heading_pane_g1_ParamLimits

0x5b5a,	// (0x000153a9) ai_message_heading_pane_g1

0x5b66,	// (0x000153b5) ai_message_heading_pane_g2_ParamLimits

0x5b66,	// (0x000153b5) ai_message_heading_pane_g2

0x5b74,	// (0x000153c3) ai_message_heading_pane_g3_ParamLimits

0x5b74,	// (0x000153c3) ai_message_heading_pane_g3

0x5b80,	// (0x000153cf) ai_message_heading_pane_g4_ParamLimits

0x5b80,	// (0x000153cf) ai_message_heading_pane_g4

0x0003,

0xf980,	// (0x0001f1cf) ai_message_heading_pane_g_ParamLimits

0xf980,	// (0x0001f1cf) ai_message_heading_pane_g

0x5b8c,	// (0x000153db) ai_message_heading_pane_t1_ParamLimits

0x5b8c,	// (0x000153db) ai_message_heading_pane_t1

0x5ba6,	// (0x000153f5) ai_message_heading_pane_t2_ParamLimits

0x5ba6,	// (0x000153f5) ai_message_heading_pane_t2

0x0001,

0xf989,	// (0x0001f1d8) ai_message_heading_pane_t_ParamLimits

0xf989,	// (0x0001f1d8) ai_message_heading_pane_t

0x5bba,	// (0x00015409) bg_popup_heading_pane_cp1_ParamLimits

0x5bba,	// (0x00015409) bg_popup_heading_pane_cp1

0x5b48,	// (0x00015397) list_ai_message_pane_ParamLimits

0x5b48,	// (0x00015397) list_ai_message_pane

0x2dc5,	// (0x00012614) scroll_pane_cp10

0x5ae4,	// (0x00015333) list_ai_message_pane_g1

0x5aec,	// (0x0001533b) list_ai_message_pane_g2

0x0001,

0xf95d,	// (0x0001f1ac) list_ai_message_pane_g

0x5af4,	// (0x00015343) list_ai_message_pane_t1_ParamLimits

0x5af4,	// (0x00015343) list_ai_message_pane_t1

0x5b09,	// (0x00015358) list_ai_message_pane_t2_ParamLimits

0x5b09,	// (0x00015358) list_ai_message_pane_t2

0x5b1e,	// (0x0001536d) list_ai_message_pane_t3_ParamLimits

0x5b1e,	// (0x0001536d) list_ai_message_pane_t3

0x5b33,	// (0x00015382) list_ai_message_pane_t4_ParamLimits

0x5b33,	// (0x00015382) list_ai_message_pane_t4

0x0003,

0xf962,	// (0x0001f1b1) list_ai_message_pane_t_ParamLimits

0xf962,	// (0x0001f1b1) list_ai_message_pane_t

0xd6ba,	// (0x0001cf09) cell_ai_soft_ind_pane_ParamLimits

0xd6ba,	// (0x0001cf09) cell_ai_soft_ind_pane

0x3a34,	// (0x00013283) cell_ai_soft_ind_pane_g1_ParamLimits

0x3a34,	// (0x00013283) cell_ai_soft_ind_pane_g1

0x1bc5,	// (0x00011414) grid_highlight_cp1

0x3a41,	// (0x00013290) text_secondary_cp56_ParamLimits

0x3a41,	// (0x00013290) text_secondary_cp56

0x5aa2,	// (0x000152f1) example_general_pane_ParamLimits

0x5aa2,	// (0x000152f1) example_general_pane

0x5aae,	// (0x000152fd) example_parent_pane_g1_ParamLimits

0x5aae,	// (0x000152fd) example_parent_pane_g1

0x5aba,	// (0x00015309) example_parent_pane_t1_ParamLimits

0x5aba,	// (0x00015309) example_parent_pane_t1

0xccf0,	// (0x0001c53f) popup_preview_text_window_ParamLimits

0xccf0,	// (0x0001c53f) popup_preview_text_window

0x385c,	// (0x000130ab) list_single_pane_cp2_g4

0x1ff1,	// (0x00011840) bg_popup_preview_window_pane_ParamLimits

0x1ff1,	// (0x00011840) bg_popup_preview_window_pane

0x57d5,	// (0x00015024) popup_preview_text_window_t1_ParamLimits

0x57d5,	// (0x00015024) popup_preview_text_window_t1

0x57f3,	// (0x00015042) popup_preview_text_window_t2_ParamLimits

0x57f3,	// (0x00015042) popup_preview_text_window_t2

0x583c,	// (0x0001508b) popup_preview_text_window_t3_ParamLimits

0x583c,	// (0x0001508b) popup_preview_text_window_t3

0x5881,	// (0x000150d0) popup_preview_text_window_t4_ParamLimits

0x5881,	// (0x000150d0) popup_preview_text_window_t4

0x0004,

0xf931,	// (0x0001f180) popup_preview_text_window_t_ParamLimits

0xf931,	// (0x0001f180) popup_preview_text_window_t

0x58ff,	// (0x0001514e) scroll_pane_cp11

0x482d,	// (0x0001407c) bg_popup_preview_window_pane_g1

0x5789,	// (0x00014fd8) bg_popup_preview_window_pane_g2

0x5793,	// (0x00014fe2) bg_popup_preview_window_pane_g3

0x579d,	// (0x00014fec) bg_popup_preview_window_pane_g4

0x57a7,	// (0x00014ff6) bg_popup_preview_window_pane_g5

0x57b1,	// (0x00015000) bg_popup_preview_window_pane_g6

0x57b9,	// (0x00015008) bg_popup_preview_window_pane_g7

0x57c1,	// (0x00015010) bg_popup_preview_window_pane_g8

0xf57e,	// (0x0001edcd) aid_popup_width_pane

0xcc60,	// (0x0001c4af) popup_midp_note_alarm_window_ParamLimits

0xcc60,	// (0x0001c4af) popup_midp_note_alarm_window

0x2ab1,	// (0x00012300) data_form_pane_ParamLimits

0xc353,	// (0x0001bba2) form_field_data_pane_g1

0xc35d,	// (0x0001bbac) form_field_data_pane_t1_ParamLimits

0x2ae1,	// (0x00012330) input_focus_pane_ParamLimits

0x2aef,	// (0x0001233e) data_form_wide_pane_ParamLimits

0x2afb,	// (0x0001234a) form_field_data_wide_pane_g1

0x2b27,	// (0x00012376) form_field_data_wide_pane_t1_ParamLimits

0x22b7,	// (0x00011b06) input_focus_pane_cp6_ParamLimits

0xc4b7,	// (0x0001bd06) input_popup_find_pane_g1_ParamLimits

0xc4b7,	// (0x0001bd06) input_popup_find_pane_g1

0x04d4,	// (0x0000fd23) aid_navi_side_left_pane

0x04e9,	// (0x0000fd38) aid_navi_side_right_pane

0x5198,	// (0x000149e7) bg_popup_window_pane_cp30_ParamLimits

0x5198,	// (0x000149e7) bg_popup_window_pane_cp30

0x5212,	// (0x00014a61) popup_midp_note_alarm_window_g1_ParamLimits

0x5212,	// (0x00014a61) popup_midp_note_alarm_window_g1

0x5242,	// (0x00014a91) popup_midp_note_alarm_window_t1_ParamLimits

0x5242,	// (0x00014a91) popup_midp_note_alarm_window_t1

0x52e3,	// (0x00014b32) popup_midp_note_alarm_window_t2_ParamLimits

0x52e3,	// (0x00014b32) popup_midp_note_alarm_window_t2

0x5391,	// (0x00014be0) popup_midp_note_alarm_window_t3_ParamLimits

0x5391,	// (0x00014be0) popup_midp_note_alarm_window_t3

0x53c3,	// (0x00014c12) popup_midp_note_alarm_window_t4_ParamLimits

0x53c3,	// (0x00014c12) popup_midp_note_alarm_window_t4

0x53e9,	// (0x00014c38) popup_midp_note_alarm_window_t5_ParamLimits

0x53e9,	// (0x00014c38) popup_midp_note_alarm_window_t5

0x000a,

0xf8ce,	// (0x0001f11d) popup_midp_note_alarm_window_t_ParamLimits

0xf8ce,	// (0x0001f11d) popup_midp_note_alarm_window_t

0x5495,	// (0x00014ce4) wait_bar_pane_cp1_ParamLimits

0x5495,	// (0x00014ce4) wait_bar_pane_cp1

0x1bc5,	// (0x00011414) wait_anim_pane_copy1

0x1bc5,	// (0x00011414) wait_border_pane_copy1

0x4e7d,	// (0x000146cc) wait_border_pane_g1_copy1

0x2b41,	// (0x00012390) form_field_popup_pane_g1

0xc377,	// (0x0001bbc6) form_field_popup_pane_t1_ParamLimits

0x2ae1,	// (0x00012330) input_focus_pane_cp7_ParamLimits

0x2b63,	// (0x000123b2) list_form_pane_ParamLimits

0x2b6f,	// (0x000123be) form_field_popup_wide_pane_g1

0x2b77,	// (0x000123c6) form_field_popup_wide_pane_t1_ParamLimits

0x2ae1,	// (0x00012330) input_focus_pane_cp8_ParamLimits

0x2b8c,	// (0x000123db) list_form_wide_pane_ParamLimits

0x607d,	// (0x000158cc) aid_size_cell_graphic_pane

0xc3f6,	// (0x0001bc45) data_form_pane_t1_ParamLimits

0xd88b,	// (0x0001d0da) data_form_wide_pane_t1_ParamLimits

0xd0ed,	// (0x0001c93c) bg_status_flat_pane

0xbb87,	// (0x0001b3d6) title_pane_t1_ParamLimits

0x1c6d,	// (0x000114bc) title_pane_t2_ParamLimits

0x1c93,	// (0x000114e2) title_pane_t3_ParamLimits

0xf59b,	// (0x0001edea) title_pane_t_ParamLimits

0xc5be,	// (0x0001be0d) level_1_signal_ParamLimits

0xc5d0,	// (0x0001be1f) level_2_signal_ParamLimits

0xc5e3,	// (0x0001be32) level_3_signal_ParamLimits

0xc5f6,	// (0x0001be45) level_4_signal_ParamLimits

0xc609,	// (0x0001be58) level_5_signal_ParamLimits

0xc61c,	// (0x0001be6b) level_6_signal_ParamLimits

0xc663,	// (0x0001beb2) level_7_signal_ParamLimits

0xc5be,	// (0x0001be0d) level_1_battery_ParamLimits

0xc5d0,	// (0x0001be1f) level_2_battery_ParamLimits

0xc5e3,	// (0x0001be32) level_3_battery_ParamLimits

0xc5f6,	// (0x0001be45) level_4_battery_ParamLimits

0xc609,	// (0x0001be58) level_5_battery_ParamLimits

0xc61c,	// (0x0001be6b) level_6_battery_ParamLimits

0xc663,	// (0x0001beb2) level_7_battery_ParamLimits

0x509d,	// (0x000148ec) bg_status_flat_pane_g1

0x50a5,	// (0x000148f4) bg_status_flat_pane_g2

0x50ad,	// (0x000148fc) bg_status_flat_pane_g3

0x50b5,	// (0x00014904) bg_status_flat_pane_g4

0x50bd,	// (0x0001490c) bg_status_flat_pane_g5

0x50c5,	// (0x00014914) bg_status_flat_pane_g6

0x50cd,	// (0x0001491c) bg_status_flat_pane_g7

0xbc1b,	// (0x0001b46a) tabs_3_active_pane_t1_ParamLimits

0xbc1b,	// (0x0001b46a) tabs_3_passive_pane_t1_ParamLimits

0xbc35,	// (0x0001b484) tabs_4_active_pane_t1_ParamLimits

0xbc35,	// (0x0001b484) tabs_4_1_passive_pane_t1_ParamLimits

0xc4cd,	// (0x0001bd1c) tabs_2_active_pane_t1_ParamLimits

0xc4cd,	// (0x0001bd1c) tabs_2_passive_pane_t1_ParamLimits

0x1ca5,	// (0x000114f4) bg_active_tab_pane_cp4_ParamLimits

0xc4df,	// (0x0001bd2e) tabs_2_long_active_pane_t1_ParamLimits

0x3cbb,	// (0x0001350a) bg_passive_tab_pane_cp4_ParamLimits

0x0ab9,	// (0x00010308) list_single_midp_graphic_pane_t1_ParamLimits

0x1ca5,	// (0x000114f4) bg_active_tab_pane_cp5_ParamLimits

0xc4f2,	// (0x0001bd41) tabs_3_long_active_pane_t1_ParamLimits

0x3cbb,	// (0x0001350a) bg_passive_tab_pane_cp5_ParamLimits

0x0ab9,	// (0x00010308) list_single_midp_graphic_pane_t1

0xd0ed,	// (0x0001c93c) bg_status_flat_pane_ParamLimits

0x4478,	// (0x00013cc7) indicator_pane_cp2_ParamLimits

0x4478,	// (0x00013cc7) indicator_pane_cp2

0xd282,	// (0x0001cad1) navi_pane_srt_ParamLimits

0xd282,	// (0x0001cad1) navi_pane_srt

0x45de,	// (0x00013e2d) popup_clock_digital_analogue_window_cp1

0x1d9f,	// (0x000115ee) indicator_pane_t1

0x392d,	// (0x0001317c) copy_highlight_pane

0x392d,	// (0x0001317c) cursor_graphics_pane

0x392d,	// (0x0001317c) graphic_within_text_pane

0x392d,	// (0x0001317c) link_highlight_pane

0x58c2,	// (0x00015111) popup_preview_text_window_t5_ParamLimits

0x58c2,	// (0x00015111) popup_preview_text_window_t5

0x3a5d,	// (0x000132ac) cursor_digital_pane

0x3a5d,	// (0x000132ac) cursor_primary_pane

0x3a6e,	// (0x000132bd) cursor_primary_small_pane

0x3a76,	// (0x000132c5) cursor_secondary_pane

0x3a7e,	// (0x000132cd) cursor_title_pane

0x3a5d,	// (0x000132ac) link_highlight_digital_pane

0x3a65,	// (0x000132b4) link_highlight_primary_pane

0x3a6e,	// (0x000132bd) link_highlight_primary_small_pane

0x3a76,	// (0x000132c5) link_highlight_secondary_pane

0x3a7e,	// (0x000132cd) link_highlight_title_pane

0x3a5d,	// (0x000132ac) copy_highlight_digital_pane

0x3a5d,	// (0x000132ac) copy_highlight_primary_pane

0x3a6e,	// (0x000132bd) copy_highlight_primary_small_pane

0x3a76,	// (0x000132c5) copy_highlight_secondary_pane

0x3a7e,	// (0x000132cd) copy_highlight_title_pane

0x3a76,	// (0x000132c5) graphic_text_digital_pane

0x513b,	// (0x0001498a) graphic_text_primary_pane

0x5144,	// (0x00014993) graphic_text_primary_small_pane

0x3a6e,	// (0x000132bd) graphic_text_secondary_pane

0x3a5d,	// (0x000132ac) graphic_text_title_pane

0xc890,	// (0x0001c0df) cursor_primary_pane_g1

0x512d,	// (0x0001497c) cursor_text_primary_t1

0xd511,	// (0x0001cd60) cursor_primary_small_pane_g1

0x511f,	// (0x0001496e) cursor_text_primary_small_t1

0xd507,	// (0x0001cd56) cursor_primary_small_pane_g1_copy1

0x5107,	// (0x00014956) cursor_text_primary_small_t1_copy1

0x50e5,	// (0x00014934) cursor_text_title_t1

0xd4fd,	// (0x0001cd4c) cursor_title_pane_g1

0xc890,	// (0x0001c0df) cursor_digital_pane_g1

0x3a90,	// (0x000132df) cursor_text_digital_t1

0x3a9e,	// (0x000132ed) link_highlight_primary_pane_g1

0x508e,	// (0x000148dd) link_highlight_primary_pane_t1

0x3a9e,	// (0x000132ed) link_highlight_primary_small_pane_g1

0x3aa6,	// (0x000132f5) link_highlight_primary_small_pane_t1

0x3ab5,	// (0x00013304) link_highlight_secondary_pane_g1

0x3abd,	// (0x0001330c) link_highlight_secondary_pane_t1

0x5002,	// (0x00014851) link_highlight_title_pane_g1

0x500a,	// (0x00014859) link_highlight_title_pane_t1

0x4feb,	// (0x0001483a) link_highlight_digital_pane_g1

0x4ff3,	// (0x00014842) link_highlight_digital_pane_t1

0x4eb3,	// (0x00014702) copy_highlight_primary_pane_g1

0x4eca,	// (0x00014719) copy_highlight_primary_pane_t1

0x4eb3,	// (0x00014702) copy_highlight_primary_small_pane_g1

0x4ebb,	// (0x0001470a) copy_highlight_primary_small_pane_t1

0x3acc,	// (0x0001331b) copy_highlight_secondary_pane_g1

0x3ad4,	// (0x00013323) copy_highlight_secondary_pane_t1

0x4e9c,	// (0x000146eb) copy_highlight_title_pane_g1

0x4ea4,	// (0x000146f3) copy_highlight_title_pane_t1

0x4eb3,	// (0x00014702) copy_highlight_digital_pane_g1

0x624d,	// (0x00015a9c) copy_highlight_digital_pane_t1

0x61a1,	// (0x000159f0) graphic_text_primary_pane_g1

0x6231,	// (0x00015a80) graphic_text_primary_pane_t1

0x623f,	// (0x00015a8e) graphic_text_primary_pane_t2

0x0001,

0xf9fd,	// (0x0001f24c) graphic_text_primary_pane_t

0x620d,	// (0x00015a5c) graphic_text_primary_small_pane_g1

0x6215,	// (0x00015a64) graphic_text_primary_small_pane_t1

0x6223,	// (0x00015a72) graphic_text_primary_small_pane_t2

0x0001,

0xf9f8,	// (0x0001f247) graphic_text_primary_small_pane_t

0x61e9,	// (0x00015a38) graphic_text_secondary_pane_g1

0x61f1,	// (0x00015a40) graphic_text_secondary_pane_t1

0x61ff,	// (0x00015a4e) graphic_text_secondary_pane_t2

0x0001,

0xf9f3,	// (0x0001f242) graphic_text_secondary_pane_t

0x61c5,	// (0x00015a14) graphic_text_title_pane_g1

0x61cd,	// (0x00015a1c) graphic_text_title_pane_t1

0x61db,	// (0x00015a2a) graphic_text_title_pane_t2

0x0001,

0xf9ee,	// (0x0001f23d) graphic_text_title_pane_t

0x61a1,	// (0x000159f0) graphic_text_digital_pane_g1

0x61a9,	// (0x000159f8) graphic_text_digital_pane_t1

0x61b7,	// (0x00015a06) graphic_text_digital_pane_t2

0x0001,

0xf9e9,	// (0x0001f238) graphic_text_digital_pane_t

0x1ca5,	// (0x000114f4) navi_icon_pane_srt_ParamLimits

0x1ca5,	// (0x000114f4) navi_icon_pane_srt

0x1bc5,	// (0x00011414) navi_midp_pane_srt

0x1bc5,	// (0x00011414) navi_navi_pane_srt

0x1ca5,	// (0x000114f4) navi_text_pane_srt_ParamLimits

0x1ca5,	// (0x000114f4) navi_text_pane_srt

0x616c,	// (0x000159bb) navi_navi_icon_text_pane_srt

0x6174,	// (0x000159c3) navi_navi_pane_srt_g1_ParamLimits

0x6174,	// (0x000159c3) navi_navi_pane_srt_g1

0x6186,	// (0x000159d5) navi_navi_pane_srt_g2_ParamLimits

0x6186,	// (0x000159d5) navi_navi_pane_srt_g2

0x0001,

0xf9e4,	// (0x0001f233) navi_navi_pane_srt_g_ParamLimits

0xf9e4,	// (0x0001f233) navi_navi_pane_srt_g

0x6198,	// (0x000159e7) navi_navi_tabs_pane_srt

0x616c,	// (0x000159bb) navi_navi_text_pane_srt

0x616c,	// (0x000159bb) navi_navi_volume_pane_srt

0x615d,	// (0x000159ac) navi_navi_text_pane_srt_t1

0x0e55,	// (0x000106a4) navi_navi_volume_pane_srt_g1

0x0e5d,	// (0x000106ac) volume_small_pane_srt_ParamLimits

0x0e5d,	// (0x000106ac) volume_small_pane_srt

0x07bb,	// (0x0001000a) volume_small_pane_srt_g1_ParamLimits

0x07bb,	// (0x0001000a) volume_small_pane_srt_g1

0x07cb,	// (0x0001001a) volume_small_pane_srt_g2_ParamLimits

0x07cb,	// (0x0001001a) volume_small_pane_srt_g2

0x07dc,	// (0x0001002b) volume_small_pane_srt_g3_ParamLimits

0x07dc,	// (0x0001002b) volume_small_pane_srt_g3

0x07ed,	// (0x0001003c) volume_small_pane_srt_g4_ParamLimits

0x07ed,	// (0x0001003c) volume_small_pane_srt_g4

0x07fe,	// (0x0001004d) volume_small_pane_srt_g5_ParamLimits

0x07fe,	// (0x0001004d) volume_small_pane_srt_g5

0x080f,	// (0x0001005e) volume_small_pane_srt_g6_ParamLimits

0x080f,	// (0x0001005e) volume_small_pane_srt_g6

0x0820,	// (0x0001006f) volume_small_pane_srt_g7_ParamLimits

0x0820,	// (0x0001006f) volume_small_pane_srt_g7

0x0831,	// (0x00010080) volume_small_pane_srt_g8_ParamLimits

0x0831,	// (0x00010080) volume_small_pane_srt_g8

0x0842,	// (0x00010091) volume_small_pane_srt_g9_ParamLimits

0x0842,	// (0x00010091) volume_small_pane_srt_g9

0x0853,	// (0x000100a2) volume_small_pane_srt_g10_ParamLimits

0x0853,	// (0x000100a2) volume_small_pane_srt_g10

0x0009,

0xf798,	// (0x0001efe7) volume_small_pane_srt_g_ParamLimits

0xf798,	// (0x0001efe7) volume_small_pane_srt_g

0x20a6,	// (0x000118f5) query_popup_data_pane_cp2

0x6143,	// (0x00015992) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6143,	// (0x00015992) navi_navi_icon_text_pane_srt_t1

0x513b,	// (0x0001498a) navi_tabs_2_long_pane_srt

0x513b,	// (0x0001498a) navi_tabs_2_pane_srt

0x513b,	// (0x0001498a) navi_tabs_3_long_pane_srt

0x513b,	// (0x0001498a) navi_tabs_3_pane_srt

0x513b,	// (0x0001498a) navi_tabs_4_pane_srt

0x0e35,	// (0x00010684) tabs_2_active_pane_srt_ParamLimits

0x0e35,	// (0x00010684) tabs_2_active_pane_srt

0x0e45,	// (0x00010694) tabs_2_passive_pane_srt_ParamLimits

0x0e45,	// (0x00010694) tabs_2_passive_pane_srt

0x4949,	// (0x00014198) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4949,	// (0x00014198) bg_passive_tab_pane_cp1_srt

0x610f,	// (0x0001595e) bg_passive_tab_pane_g1_cp1_srt

0x3576,	// (0x00012dc5) bg_passive_tab_pane_g2_cp1_srt

0x6118,	// (0x00015967) bg_passive_tab_pane_g3_cp1_srt

0x1f3b,	// (0x0001178a) bg_active_tab_pane_cp1_srt_ParamLimits

0x1f3b,	// (0x0001178a) bg_active_tab_pane_cp1_srt

0x6121,	// (0x00015970) tabs_2_active_pane_srt_g1

0xd9c8,	// (0x0001d217) tabs_2_active_pane_srt_t1_ParamLimits

0xd9c8,	// (0x0001d217) tabs_2_active_pane_srt_t1

0x610f,	// (0x0001595e) bg_active_tab_pane_g1_cp1_srt

0x3576,	// (0x00012dc5) bg_active_tab_pane_g2_cp1_srt

0x6118,	// (0x00015967) bg_active_tab_pane_g3_cp1_srt

0x0e02,	// (0x00010651) tabs_3_active_pane_srt_ParamLimits

0x0e02,	// (0x00010651) tabs_3_active_pane_srt

0x0e13,	// (0x00010662) tabs_3_passive_pane_cp_srt_ParamLimits

0x0e13,	// (0x00010662) tabs_3_passive_pane_cp_srt

0x0e24,	// (0x00010673) tabs_3_passive_pane_srt_ParamLimits

0x0e24,	// (0x00010673) tabs_3_passive_pane_srt

0x4949,	// (0x00014198) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4949,	// (0x00014198) bg_passive_tab_pane_cp2_srt

0x3ae3,	// (0x00013332) bg_passive_tab_pane_g1_cp2_srt

0x3576,	// (0x00012dc5) bg_passive_tab_pane_g2_cp2_srt

0x3aec,	// (0x0001333b) bg_passive_tab_pane_g3_cp2_srt

0x1f3b,	// (0x0001178a) bg_active_tab_pane_cp2_srt_ParamLimits

0x1f3b,	// (0x0001178a) bg_active_tab_pane_cp2_srt

0x60f5,	// (0x00015944) tabs_3_active_pane_srt_g1

0xd9b2,	// (0x0001d201) tabs_3_active_pane_srt_t1_ParamLimits

0xd9b2,	// (0x0001d201) tabs_3_active_pane_srt_t1

0x3ae3,	// (0x00013332) bg_active_tab_pane_g1_cp2_srt

0x3576,	// (0x00012dc5) bg_active_tab_pane_g2_cp2_srt

0x3aec,	// (0x0001333b) bg_active_tab_pane_g3_cp2_srt

0x0dba,	// (0x00010609) tabs_4_active_pane_srt_ParamLimits

0x0dba,	// (0x00010609) tabs_4_active_pane_srt

0x0dcc,	// (0x0001061b) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0dcc,	// (0x0001061b) tabs_4_passive_pane_cp2_srt

0x3c41,	// (0x00013490) aid_size_cell_toolbar

0x5cb6,	// (0x00015505) main_idle_act_pane_ParamLimits

0x3e88,	// (0x000136d7) popup_large_graphic_colour_window_ParamLimits

0xcfb6,	// (0x0001c805) popup_toolbar_window_ParamLimits

0xcfb6,	// (0x0001c805) popup_toolbar_window

0x5ee3,	// (0x00015732) list_single_graphic_2heading_pane_ParamLimits

0x5ee3,	// (0x00015732) list_single_graphic_2heading_pane

0x2ff6,	// (0x00012845) aid_size_cell_apps_grid_lsc_pane

0x3008,	// (0x00012857) aid_size_cell_apps_grid_prt_pane

0x3cbb,	// (0x0001350a) bg_wml_button_pane_cp1_ParamLimits

0x3cbb,	// (0x0001350a) bg_wml_button_pane_cp1

0xd490,	// (0x0001ccdf) form_midp_field_text_pane_t1_ParamLimits

0x4949,	// (0x00014198) input_focus_pane_cp050_ParamLimits

0x4b6f,	// (0x000143be) list_midp_form_text_pane_ParamLimits

0x4b21,	// (0x00014370) input_focus_pane_cp051_ParamLimits

0x4b35,	// (0x00014384) list_midp_choice_pane_ParamLimits

0xd447,	// (0x0001cc96) list_single_2graphic_pane_cp3_ParamLimits

0xd447,	// (0x0001cc96) list_single_2graphic_pane_cp3

0x6fc6,	// (0x00016815) list_single_midp_graphic_pane_ParamLimits

0x6fc6,	// (0x00016815) list_single_midp_graphic_pane

0x09bd,	// (0x0001020c) list_single_graphic_2heading_pane_g1_ParamLimits

0x09bd,	// (0x0001020c) list_single_graphic_2heading_pane_g1

0x09c9,	// (0x00010218) list_single_graphic_2heading_pane_g4_ParamLimits

0x09c9,	// (0x00010218) list_single_graphic_2heading_pane_g4

0x09d5,	// (0x00010224) list_single_graphic_2heading_pane_g5_ParamLimits

0x09d5,	// (0x00010224) list_single_graphic_2heading_pane_g5

0x0002,

0xf7eb,	// (0x0001f03a) list_single_graphic_2heading_pane_g_ParamLimits

0xf7eb,	// (0x0001f03a) list_single_graphic_2heading_pane_g

0x09e1,	// (0x00010230) list_single_graphic_2heading_pane_t1_ParamLimits

0x09e1,	// (0x00010230) list_single_graphic_2heading_pane_t1

0x09f5,	// (0x00010244) list_single_graphic_2heading_pane_t2_ParamLimits

0x09f5,	// (0x00010244) list_single_graphic_2heading_pane_t2

0x0a11,	// (0x00010260) list_single_graphic_2heading_pane_t3_ParamLimits

0x0a11,	// (0x00010260) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f2,	// (0x0001f041) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f2,	// (0x0001f041) list_single_graphic_2heading_pane_t

0x473d,	// (0x00013f8c) bg_popup_sub_pane_cp2

0x4767,	// (0x00013fb6) grid_toobar_pane

0x0a29,	// (0x00010278) cell_toolbar_pane_ParamLimits

0x0a29,	// (0x00010278) cell_toolbar_pane

0x47d1,	// (0x00014020) cell_toolbar_pane_g1_ParamLimits

0x47d1,	// (0x00014020) cell_toolbar_pane_g1

0x47e5,	// (0x00014034) cell_toolbar_pane_g2_ParamLimits

0x47e5,	// (0x00014034) cell_toolbar_pane_g2

0x0001,

0xf800,	// (0x0001f04f) cell_toolbar_pane_g_ParamLimits

0xf800,	// (0x0001f04f) cell_toolbar_pane_g

0x4807,	// (0x00014056) grid_highlight_pane_cp2_ParamLimits

0x4807,	// (0x00014056) grid_highlight_pane_cp2

0x4821,	// (0x00014070) toolbar_button_pane

0x482d,	// (0x0001407c) toolbar_button_pane_g1

0x4835,	// (0x00014084) toolbar_button_pane_g2

0x483d,	// (0x0001408c) toolbar_button_pane_g3

0x4845,	// (0x00014094) toolbar_button_pane_g4

0x484d,	// (0x0001409c) toolbar_button_pane_g5

0x4855,	// (0x000140a4) toolbar_button_pane_g6

0x485d,	// (0x000140ac) toolbar_button_pane_g7

0x4865,	// (0x000140b4) toolbar_button_pane_g8

0x486d,	// (0x000140bc) toolbar_button_pane_g9

0x0009,

0xf805,	// (0x0001f054) toolbar_button_pane_g

0x0a61,	// (0x000102b0) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0a61,	// (0x000102b0) list_single_2graphic_pane_g1_cp3

0xb4e7,	// (0x0001ad36) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb4e7,	// (0x0001ad36) list_single_2graphic_pane_g2_cp3

0x0a7e,	// (0x000102cd) list_single_2graphic_pane_g3_cp3

0x0a86,	// (0x000102d5) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0a86,	// (0x000102d5) list_single_2graphic_pane_g4_cp3

0x0a92,	// (0x000102e1) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0a92,	// (0x000102e1) list_single_2graphic_pane_t1_cp3

0x0aad,	// (0x000102fc) list_single_midp_graphic_pane_g2_ParamLimits

0x0aad,	// (0x000102fc) list_single_midp_graphic_pane_g2

0x3c49,	// (0x00013498) aid_zoom_text_primary

0x3c51,	// (0x000134a0) aid_zoom_text_secondary

0x3ba0,	// (0x000133ef) status_small_pane_g7_ParamLimits

0x3ba0,	// (0x000133ef) status_small_pane_g7

0x3bc3,	// (0x00013412) status_small_pane_t1_ParamLimits

0xbb63,	// (0x0001b3b2) title_pane_g2

0x0003,

0xf592,	// (0x0001ede1) title_pane_g

0xbdfb,	// (0x0001b64a) aid_size_cell_colour_1_pane_ParamLimits

0xbdfb,	// (0x0001b64a) aid_size_cell_colour_1_pane

0xbe0f,	// (0x0001b65e) aid_size_cell_colour_2_pane_ParamLimits

0xbe0f,	// (0x0001b65e) aid_size_cell_colour_2_pane

0xbe23,	// (0x0001b672) aid_size_cell_colour_3_pane_ParamLimits

0xbe23,	// (0x0001b672) aid_size_cell_colour_3_pane

0xbe37,	// (0x0001b686) aid_size_cell_colour_4_pane_ParamLimits

0xbe37,	// (0x0001b686) aid_size_cell_colour_4_pane

0x0410,	// (0x0000fc5f) title_pane_stacon_g1_ParamLimits

0x0410,	// (0x0000fc5f) title_pane_stacon_g1

0x4f21,	// (0x00014770) popup_note_wait_window_g3_ParamLimits

0x4f21,	// (0x00014770) popup_note_wait_window_g3

0x4f98,	// (0x000147e7) popup_note_wait_window_t5_ParamLimits

0x4f98,	// (0x000147e7) popup_note_wait_window_t5

0x1bc5,	// (0x00011414) main_feb_china_hwr_fs_writing_pane

0xc951,	// (0x0001c1a0) popup_feb_china_hwr_fs_window_ParamLimits

0xc951,	// (0x0001c1a0) popup_feb_china_hwr_fs_window

0xb4f8,	// (0x0001ad47) aid_size_cell_hwr_fs_ParamLimits

0xb4f8,	// (0x0001ad47) aid_size_cell_hwr_fs

0x4949,	// (0x00014198) bg_popup_sub_pane_cp3_ParamLimits

0x4949,	// (0x00014198) bg_popup_sub_pane_cp3

0xb50d,	// (0x0001ad5c) grid_hwr_fs_pane_ParamLimits

0xb50d,	// (0x0001ad5c) grid_hwr_fs_pane

0x0afc,	// (0x0001034b) linegrid_hwr_fs_pane_ParamLimits

0x0afc,	// (0x0001034b) linegrid_hwr_fs_pane

0xb525,	// (0x0001ad74) cell_hwr_fs_pane_ParamLimits

0xb525,	// (0x0001ad74) cell_hwr_fs_pane

0x4955,	// (0x000141a4) linegrid_hwr_fs_pane_g1_ParamLimits

0x4955,	// (0x000141a4) linegrid_hwr_fs_pane_g1

0xd41b,	// (0x0001cc6a) linegrid_hwr_fs_pane_g2_ParamLimits

0xd41b,	// (0x0001cc6a) linegrid_hwr_fs_pane_g2

0x4973,	// (0x000141c2) linegrid_hwr_fs_pane_g3_ParamLimits

0x4973,	// (0x000141c2) linegrid_hwr_fs_pane_g3

0x0b30,	// (0x0001037f) linegrid_hwr_fs_pane_g4_ParamLimits

0x0b30,	// (0x0001037f) linegrid_hwr_fs_pane_g4

0x0b4e,	// (0x0001039d) linegrid_hwr_fs_pane_g5_ParamLimits

0x0b4e,	// (0x0001039d) linegrid_hwr_fs_pane_g5

0x0004,

0xf82b,	// (0x0001f07a) linegrid_hwr_fs_pane_g_ParamLimits

0xf82b,	// (0x0001f07a) linegrid_hwr_fs_pane_g

0x497f,	// (0x000141ce) cell_hwr_fs_pane_g1_ParamLimits

0x497f,	// (0x000141ce) cell_hwr_fs_pane_g1

0x4674,	// (0x00013ec3) cell_hwr_fs_pane_g2_ParamLimits

0x4674,	// (0x00013ec3) cell_hwr_fs_pane_g2

0xd42d,	// (0x0001cc7c) cell_hwr_fs_pane_g3_ParamLimits

0xd42d,	// (0x0001cc7c) cell_hwr_fs_pane_g3

0xd43a,	// (0x0001cc89) cell_hwr_fs_pane_g4_ParamLimits

0xd43a,	// (0x0001cc89) cell_hwr_fs_pane_g4

0x0003,

0xf836,	// (0x0001f085) cell_hwr_fs_pane_g_ParamLimits

0xf836,	// (0x0001f085) cell_hwr_fs_pane_g

0xb54b,	// (0x0001ad9a) cell_hwr_fs_pane_t1

0x1bc5,	// (0x00011414) grid_highlight_pane_cp6

0x1bc5,	// (0x00011414) main_idle_act2_pane

0x2dac,	// (0x000125fb) aid_inside_area_popup_secondary

0xd531,	// (0x0001cd80) aid_inside_area_window_primary_ParamLimits

0xd531,	// (0x0001cd80) aid_inside_area_window_primary

0x625c,	// (0x00015aab) ai2_news_ticker_pane

0x6264,	// (0x00015ab3) aid_size_cell_ai1_link_ParamLimits

0x6264,	// (0x00015ab3) aid_size_cell_ai1_link

0x627e,	// (0x00015acd) popup_ai2_data_window_ParamLimits

0x627e,	// (0x00015acd) popup_ai2_data_window

0x629c,	// (0x00015aeb) popup_ai2_link_window_ParamLimits

0x629c,	// (0x00015aeb) popup_ai2_link_window

0x4949,	// (0x00014198) bg_popup_sub_pane_cp4_ParamLimits

0x4949,	// (0x00014198) bg_popup_sub_pane_cp4

0x62b2,	// (0x00015b01) grid_ai2_link_pane_ParamLimits

0x62b2,	// (0x00015b01) grid_ai2_link_pane

0x62c9,	// (0x00015b18) popup_ai2_link_window_g1_ParamLimits

0x62c9,	// (0x00015b18) popup_ai2_link_window_g1

0x62d5,	// (0x00015b24) popup_ai2_link_window_g2_ParamLimits

0x62d5,	// (0x00015b24) popup_ai2_link_window_g2

0x0001,

0xfa02,	// (0x0001f251) popup_ai2_link_window_g_ParamLimits

0xfa02,	// (0x0001f251) popup_ai2_link_window_g

0x62e6,	// (0x00015b35) ai2_mp_button_pane

0x62ee,	// (0x00015b3d) ai2_mp_volume_pane

0x4b21,	// (0x00014370) bg_popup_sub_pane_cp5_ParamLimits

0x4b21,	// (0x00014370) bg_popup_sub_pane_cp5

0x62f6,	// (0x00015b45) heading_ai2_gene_pane_ParamLimits

0x62f6,	// (0x00015b45) heading_ai2_gene_pane

0x6302,	// (0x00015b51) list_ai2_gene_pane_ParamLimits

0x6302,	// (0x00015b51) list_ai2_gene_pane

0x634a,	// (0x00015b99) cell_ai2_link_pane_ParamLimits

0x634a,	// (0x00015b99) cell_ai2_link_pane

0x6360,	// (0x00015baf) cell_ai2_link_pane_g1

0x1bc5,	// (0x00011414) grid_highlight_pane_cp7

0x0e72,	// (0x000106c1) ai2_mp_volume_pane_g1

0x6433,	// (0x00015c82) ai2_mp_volume_pane_g2

0x63a8,	// (0x00015bf7) list_ai2_gene_pane_t1

0x643b,	// (0x00015c8a) ai2_mp_volume_pane_g3

0x0002,

0xfa1b,	// (0x0001f26a) ai2_mp_volume_pane_g

0x0e7a,	// (0x000106c9) volume_small_pane_cp3

0x6443,	// (0x00015c92) aid_size_cell_ai2_button

0x644b,	// (0x00015c9a) grid_ai2_button_pane

0x6454,	// (0x00015ca3) cell_ai2_button_pane_ParamLimits

0x6454,	// (0x00015ca3) cell_ai2_button_pane

0x1bbb,	// (0x0001140a) cell_ai2_button_pane_g1

0x1bc5,	// (0x00011414) grid_highlight_pane_cp8

0x63f3,	// (0x00015c42) ai2_gene_pane_t1_ParamLimits

0x63f3,	// (0x00015c42) ai2_gene_pane_t1

0xc8c1,	// (0x0001c110) aid_height_parent_landscape

0xd713,	// (0x0001cf62) aid_height_set_list

0x5cb6,	// (0x00015505) aid_size_parent

0x607d,	// (0x000158cc) aid_size_cell_graphic_pane_ParamLimits

0x6312,	// (0x00015b61) popup_ai2_data_window_g1_ParamLimits

0x6312,	// (0x00015b61) popup_ai2_data_window_g1

0x631e,	// (0x00015b6d) ai2_news_ticker_pane_g1

0x6326,	// (0x00015b75) ai2_news_ticker_pane_g2

0x0001,

0xfa07,	// (0x0001f256) ai2_news_ticker_pane_g

0x632e,	// (0x00015b7d) ai2_news_ticker_pane_t1

0x633c,	// (0x00015b8b) ai2_news_ticker_pane_t2

0x0001,

0xfa0c,	// (0x0001f25b) ai2_news_ticker_pane_t

0x6369,	// (0x00015bb8) heading_ai2_gene_pane_g1

0x6371,	// (0x00015bc0) heading_ai2_gene_pane_t1_ParamLimits

0x6371,	// (0x00015bc0) heading_ai2_gene_pane_t1

0x6386,	// (0x00015bd5) list_highlight_pane_cp6

0x638e,	// (0x00015bdd) ai2_gene_pane_ParamLimits

0x638e,	// (0x00015bdd) ai2_gene_pane

0x63b6,	// (0x00015c05) list_ai2_gene_pane_t2

0x0001,

0xfa11,	// (0x0001f260) list_ai2_gene_pane_t

0x63c4,	// (0x00015c13) list_highlight_pane_cp8_ParamLimits

0x63c4,	// (0x00015c13) list_highlight_pane_cp8

0x63d5,	// (0x00015c24) ai2_gene_pane_g1_ParamLimits

0x63d5,	// (0x00015c24) ai2_gene_pane_g1

0x63e7,	// (0x00015c36) ai2_gene_pane_g2_ParamLimits

0x63e7,	// (0x00015c36) ai2_gene_pane_g2

0x0001,

0xfa16,	// (0x0001f265) ai2_gene_pane_g_ParamLimits

0xfa16,	// (0x0001f265) ai2_gene_pane_g

0x24dc,	// (0x00011d2b) scroll_pane_cp12

0xb4a6,	// (0x0001acf5) control_pane_t3_ParamLimits

0xb4a6,	// (0x0001acf5) control_pane_t3

0x3bb4,	// (0x00013403) status_small_pane_g8_ParamLimits

0x3bb4,	// (0x00013403) status_small_pane_g8

0xc9f3,	// (0x0001c242) popup_find_window_ParamLimits

0xcca0,	// (0x0001c4ef) popup_note_image_window_ParamLimits

0x47a3,	// (0x00013ff2) list_double2_graphic_pane_vc_g1_ParamLimits

0x47a3,	// (0x00013ff2) list_double2_graphic_pane_vc_g1

0x389e,	// (0x000130ed) list_double2_graphic_pane_vc_g2_ParamLimits

0x389e,	// (0x000130ed) list_double2_graphic_pane_vc_g2

0x47af,	// (0x00013ffe) list_double2_graphic_pane_vc_g3_ParamLimits

0x47af,	// (0x00013ffe) list_double2_graphic_pane_vc_g3

0x0002,

0xf7f9,	// (0x0001f048) list_double2_graphic_pane_vc_g_ParamLimits

0xf7f9,	// (0x0001f048) list_double2_graphic_pane_vc_g

0x47bb,	// (0x0001400a) list_double2_graphic_pane_vc_t1_ParamLimits

0x47bb,	// (0x0001400a) list_double2_graphic_pane_vc_t1

0x389e,	// (0x000130ed) list_single_heading_pane_vc_g1_ParamLimits

0x389e,	// (0x000130ed) list_single_heading_pane_vc_g1

0x47af,	// (0x00013ffe) list_single_heading_pane_vc_g2_ParamLimits

0x47af,	// (0x00013ffe) list_single_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0001ee5b) list_single_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0001ee5b) list_single_heading_pane_vc_g

0x4875,	// (0x000140c4) list_single_heading_pane_vc_t1_ParamLimits

0x4875,	// (0x000140c4) list_single_heading_pane_vc_t1

0x488b,	// (0x000140da) list_single_heading_pane_vc_t2_ParamLimits

0x488b,	// (0x000140da) list_single_heading_pane_vc_t2

0x0001,

0xf81a,	// (0x0001f069) list_single_heading_pane_vc_t_ParamLimits

0xf81a,	// (0x0001f069) list_single_heading_pane_vc_t

0x489f,	// (0x000140ee) list_setting_number_pane_vc_g1_ParamLimits

0x489f,	// (0x000140ee) list_setting_number_pane_vc_g1

0x48ab,	// (0x000140fa) list_setting_number_pane_vc_g2_ParamLimits

0x48ab,	// (0x000140fa) list_setting_number_pane_vc_g2

0x0001,

0xf81f,	// (0x0001f06e) list_setting_number_pane_vc_g_ParamLimits

0xf81f,	// (0x0001f06e) list_setting_number_pane_vc_g

0x48b7,	// (0x00014106) list_setting_number_pane_vc_t1_ParamLimits

0x48b7,	// (0x00014106) list_setting_number_pane_vc_t1

0x48cb,	// (0x0001411a) list_setting_number_pane_vc_t2_ParamLimits

0x48cb,	// (0x0001411a) list_setting_number_pane_vc_t2

0x48e7,	// (0x00014136) list_setting_number_pane_vc_t3_ParamLimits

0x48e7,	// (0x00014136) list_setting_number_pane_vc_t3

0x0002,

0xf824,	// (0x0001f073) list_setting_number_pane_vc_t_ParamLimits

0xf824,	// (0x0001f073) list_setting_number_pane_vc_t

0x490f,	// (0x0001415e) set_value_pane_vc_ParamLimits

0x490f,	// (0x0001415e) set_value_pane_vc

0x5ee3,	// (0x00015732) list_double2_graphic_pane_vc_ParamLimits

0x5ee3,	// (0x00015732) list_double2_graphic_pane_vc

0x5ee3,	// (0x00015732) list_double2_large_graphic_pane_vc_ParamLimits

0x5ee3,	// (0x00015732) list_double2_large_graphic_pane_vc

0x5ee3,	// (0x00015732) list_double2_pane_vc_ParamLimits

0x5ee3,	// (0x00015732) list_double2_pane_vc

0x5ee3,	// (0x00015732) list_double_graphic_heading_pane_vc_ParamLimits

0x5ee3,	// (0x00015732) list_double_graphic_heading_pane_vc

0x5ee3,	// (0x00015732) list_double_graphic_pane_vc_ParamLimits

0x5ee3,	// (0x00015732) list_double_graphic_pane_vc

0x5ee3,	// (0x00015732) list_double_heading_pane_vc_ParamLimits

0x5ee3,	// (0x00015732) list_double_heading_pane_vc

0x5ee3,	// (0x00015732) list_double_large_graphic_pane_vc_ParamLimits

0x5ee3,	// (0x00015732) list_double_large_graphic_pane_vc

0x5ee3,	// (0x00015732) list_double_number_pane_vc_ParamLimits

0x5ee3,	// (0x00015732) list_double_number_pane_vc

0x5ee3,	// (0x00015732) list_double_pane_vc_ParamLimits

0x5ee3,	// (0x00015732) list_double_pane_vc

0x5ee3,	// (0x00015732) list_double_time_pane_vc_ParamLimits

0x5ee3,	// (0x00015732) list_double_time_pane_vc

0x5ee3,	// (0x00015732) list_setting_number_pane_vc_ParamLimits

0x5ee3,	// (0x00015732) list_setting_number_pane_vc

0x5ee3,	// (0x00015732) list_setting_pane_vc_ParamLimits

0x5ee3,	// (0x00015732) list_setting_pane_vc

0x5ee3,	// (0x00015732) list_single_graphic_heading_pane_vc_ParamLimits

0x5ee3,	// (0x00015732) list_single_graphic_heading_pane_vc

0x5ee3,	// (0x00015732) list_single_heading_pane_vc_ParamLimits

0x5ee3,	// (0x00015732) list_single_heading_pane_vc

0x5ee3,	// (0x00015732) list_single_number_heading_pane_vc_ParamLimits

0x5ee3,	// (0x00015732) list_single_number_heading_pane_vc

0x47a3,	// (0x00013ff2) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x47a3,	// (0x00013ff2) list_double_graphic_heading_pane_vc_g1

0x6487,	// (0x00015cd6) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x6487,	// (0x00015cd6) list_double_graphic_heading_pane_vc_g2

0x6493,	// (0x00015ce2) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x6493,	// (0x00015ce2) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa22,	// (0x0001f271) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa22,	// (0x0001f271) list_double_graphic_heading_pane_vc_g

0x649f,	// (0x00015cee) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x649f,	// (0x00015cee) list_double_graphic_heading_pane_vc_t1

0x4875,	// (0x000140c4) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x4875,	// (0x000140c4) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa29,	// (0x0001f278) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa29,	// (0x0001f278) list_double_graphic_heading_pane_vc_t

0x489f,	// (0x000140ee) list_setting_pane_vc_g1_ParamLimits

0x489f,	// (0x000140ee) list_setting_pane_vc_g1

0x48ab,	// (0x000140fa) list_setting_pane_vc_g2_ParamLimits

0x48ab,	// (0x000140fa) list_setting_pane_vc_g2

0x0001,

0xf81f,	// (0x0001f06e) list_setting_pane_vc_g_ParamLimits

0xf81f,	// (0x0001f06e) list_setting_pane_vc_g

0x66bc,	// (0x00015f0b) list_setting_pane_vc_t1_ParamLimits

0x66bc,	// (0x00015f0b) list_setting_pane_vc_t1

0x66d0,	// (0x00015f1f) list_setting_pane_vc_t2_ParamLimits

0x66d0,	// (0x00015f1f) list_setting_pane_vc_t2

0x0001,

0xfa6c,	// (0x0001f2bb) list_setting_pane_vc_t_ParamLimits

0xfa6c,	// (0x0001f2bb) list_setting_pane_vc_t

0x490f,	// (0x0001415e) set_value_pane_cp_vc_ParamLimits

0x490f,	// (0x0001415e) set_value_pane_cp_vc

0x389e,	// (0x000130ed) list_single_number_heading_pane_vc_g1_ParamLimits

0x389e,	// (0x000130ed) list_single_number_heading_pane_vc_g1

0x47af,	// (0x00013ffe) list_single_number_heading_pane_vc_g2_ParamLimits

0x47af,	// (0x00013ffe) list_single_number_heading_pane_vc_g2

0x0001,

0xf60c,	// (0x0001ee5b) list_single_number_heading_pane_vc_g_ParamLimits

0xf60c,	// (0x0001ee5b) list_single_number_heading_pane_vc_g

0x4875,	// (0x000140c4) list_single_number_heading_pane_vc_t1_ParamLimits

0x4875,	// (0x000140c4) list_single_number_heading_pane_vc_t1

0x66f2,	// (0x00015f41) list_single_number_heading_pane_vc_t2_ParamLimits

0x66f2,	// (0x00015f41) list_single_number_heading_pane_vc_t2

0x6706,	// (0x00015f55) list_single_number_heading_pane_vc_t3_ParamLimits

0x6706,	// (0x00015f55) list_single_number_heading_pane_vc_t3

0x0002,

0xfa71,	// (0x0001f2c0) list_single_number_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x0001f2c0) list_single_number_heading_pane_vc_t

0x47a3,	// (0x00013ff2) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x47a3,	// (0x00013ff2) list_single_graphic_heading_pane_vc_g1

0x389e,	// (0x000130ed) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x389e,	// (0x000130ed) list_single_graphic_heading_pane_vc_g4

0x47af,	// (0x00013ffe) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x47af,	// (0x00013ffe) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7f9,	// (0x0001f048) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7f9,	// (0x0001f048) list_single_graphic_heading_pane_vc_g

0x4875,	// (0x000140c4) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4875,	// (0x000140c4) list_single_graphic_heading_pane_vc_t1

0x6718,	// (0x00015f67) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x6718,	// (0x00015f67) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa78,	// (0x0001f2c7) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa78,	// (0x0001f2c7) list_single_graphic_heading_pane_vc_t

0x389e,	// (0x000130ed) list_double2_pane_vc_g1_ParamLimits

0x389e,	// (0x000130ed) list_double2_pane_vc_g1

0x47af,	// (0x00013ffe) list_double2_pane_vc_g2_ParamLimits

0x47af,	// (0x00013ffe) list_double2_pane_vc_g2

0x0001,

0xf60c,	// (0x0001ee5b) list_double2_pane_vc_g_ParamLimits

0xf60c,	// (0x0001ee5b) list_double2_pane_vc_g

0x672c,	// (0x00015f7b) list_double2_pane_vc_t1_ParamLimits

0x672c,	// (0x00015f7b) list_double2_pane_vc_t1

0x6742,	// (0x00015f91) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6742,	// (0x00015f91) list_double2_large_graphic_pane_vc_g1

0x389e,	// (0x000130ed) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x389e,	// (0x000130ed) list_double2_large_graphic_pane_vc_g2

0x47af,	// (0x00013ffe) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x47af,	// (0x00013ffe) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf629,	// (0x0001ee78) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf629,	// (0x0001ee78) list_double2_large_graphic_pane_vc_g

0x674e,	// (0x00015f9d) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x674e,	// (0x00015f9d) list_double2_large_graphic_pane_vc_t1

0x6764,	// (0x00015fb3) list_double_time_pane_vc_g1_ParamLimits

0x6764,	// (0x00015fb3) list_double_time_pane_vc_g1

0x6770,	// (0x00015fbf) list_double_time_pane_vc_g2_ParamLimits

0x6770,	// (0x00015fbf) list_double_time_pane_vc_g2

0x0001,

0xfa7d,	// (0x0001f2cc) list_double_time_pane_vc_g_ParamLimits

0xfa7d,	// (0x0001f2cc) list_double_time_pane_vc_g

0x677c,	// (0x00015fcb) list_double_time_pane_vc_t1_ParamLimits

0x677c,	// (0x00015fcb) list_double_time_pane_vc_t1

0x67d7,	// (0x00016026) list_double_time_pane_vc_t2_ParamLimits

0x67d7,	// (0x00016026) list_double_time_pane_vc_t2

0x67f7,	// (0x00016046) list_double_time_pane_vc_t3_ParamLimits

0x67f7,	// (0x00016046) list_double_time_pane_vc_t3

0x680f,	// (0x0001605e) list_double_time_pane_vc_t4_ParamLimits

0x680f,	// (0x0001605e) list_double_time_pane_vc_t4

0x0003,

0xfa82,	// (0x0001f2d1) list_double_time_pane_vc_t_ParamLimits

0xfa82,	// (0x0001f2d1) list_double_time_pane_vc_t

0x389e,	// (0x000130ed) list_double_pane_vc_g1_ParamLimits

0x389e,	// (0x000130ed) list_double_pane_vc_g1

0x47af,	// (0x00013ffe) list_double_pane_vc_g2_ParamLimits

0x47af,	// (0x00013ffe) list_double_pane_vc_g2

0x0001,

0xf60c,	// (0x0001ee5b) list_double_pane_vc_g_ParamLimits

0xf60c,	// (0x0001ee5b) list_double_pane_vc_g

0x6823,	// (0x00016072) list_double_pane_vc_t1_ParamLimits

0x6823,	// (0x00016072) list_double_pane_vc_t1

0x6835,	// (0x00016084) list_double_pane_vc_t2_ParamLimits

0x6835,	// (0x00016084) list_double_pane_vc_t2

0x0001,

0xfa8b,	// (0x0001f2da) list_double_pane_vc_t_ParamLimits

0xfa8b,	// (0x0001f2da) list_double_pane_vc_t

0x389e,	// (0x000130ed) list_double_number_pane_vc_g1_ParamLimits

0x389e,	// (0x000130ed) list_double_number_pane_vc_g1

0x47af,	// (0x00013ffe) list_double_number_pane_vc_g2_ParamLimits

0x47af,	// (0x00013ffe) list_double_number_pane_vc_g2

0x0001,

0xf60c,	// (0x0001ee5b) list_double_number_pane_vc_g_ParamLimits

0xf60c,	// (0x0001ee5b) list_double_number_pane_vc_g

0x684d,	// (0x0001609c) list_double_number_pane_vc_t1_ParamLimits

0x684d,	// (0x0001609c) list_double_number_pane_vc_t1

0x6861,	// (0x000160b0) list_double_number_pane_vc_t2_ParamLimits

0x6861,	// (0x000160b0) list_double_number_pane_vc_t2

0x6835,	// (0x00016084) list_double_number_pane_vc_t3_ParamLimits

0x6835,	// (0x00016084) list_double_number_pane_vc_t3

0x0002,

0xfa90,	// (0x0001f2df) list_double_number_pane_vc_t_ParamLimits

0xfa90,	// (0x0001f2df) list_double_number_pane_vc_t

0x6873,	// (0x000160c2) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6873,	// (0x000160c2) list_double_large_graphic_pane_vc_g1

0x687f,	// (0x000160ce) list_double_large_graphic_pane_vc_g2_ParamLimits

0x687f,	// (0x000160ce) list_double_large_graphic_pane_vc_g2

0x47af,	// (0x00013ffe) list_double_large_graphic_pane_vc_g3_ParamLimits

0x47af,	// (0x00013ffe) list_double_large_graphic_pane_vc_g3

0x688e,	// (0x000160dd) list_double_large_graphic_pane_vc_g4_ParamLimits

0x688e,	// (0x000160dd) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa97,	// (0x0001f2e6) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa97,	// (0x0001f2e6) list_double_large_graphic_pane_vc_g

0x689a,	// (0x000160e9) list_double_large_graphic_pane_vc_t1_ParamLimits

0x689a,	// (0x000160e9) list_double_large_graphic_pane_vc_t1

0x68ac,	// (0x000160fb) list_double_large_graphic_pane_vc_t2_ParamLimits

0x68ac,	// (0x000160fb) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaa0,	// (0x0001f2ef) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaa0,	// (0x0001f2ef) list_double_large_graphic_pane_vc_t

0x6487,	// (0x00015cd6) list_double_heading_pane_vc_g1_ParamLimits

0x6487,	// (0x00015cd6) list_double_heading_pane_vc_g1

0x6493,	// (0x00015ce2) list_double_heading_pane_vc_g2_ParamLimits

0x6493,	// (0x00015ce2) list_double_heading_pane_vc_g2

0x0001,

0xfaa5,	// (0x0001f2f4) list_double_heading_pane_vc_g_ParamLimits

0xfaa5,	// (0x0001f2f4) list_double_heading_pane_vc_g

0x68c5,	// (0x00016114) list_double_heading_pane_vc_t1_ParamLimits

0x68c5,	// (0x00016114) list_double_heading_pane_vc_t1

0x4875,	// (0x000140c4) list_double_heading_pane_vc_t2_ParamLimits

0x4875,	// (0x000140c4) list_double_heading_pane_vc_t2

0x0001,

0xfaaa,	// (0x0001f2f9) list_double_heading_pane_vc_t_ParamLimits

0xfaaa,	// (0x0001f2f9) list_double_heading_pane_vc_t

0x47a3,	// (0x00013ff2) list_double_graphic_pane_vc_g1_ParamLimits

0x47a3,	// (0x00013ff2) list_double_graphic_pane_vc_g1

0x68d9,	// (0x00016128) list_double_graphic_pane_vc_g2_ParamLimits

0x68d9,	// (0x00016128) list_double_graphic_pane_vc_g2

0x68e8,	// (0x00016137) list_double_graphic_pane_vc_g3_ParamLimits

0x68e8,	// (0x00016137) list_double_graphic_pane_vc_g3

0x0002,

0xfaaf,	// (0x0001f2fe) list_double_graphic_pane_vc_g_ParamLimits

0xfaaf,	// (0x0001f2fe) list_double_graphic_pane_vc_g

0x68f4,	// (0x00016143) list_double_graphic_pane_vc_t1_ParamLimits

0x68f4,	// (0x00016143) list_double_graphic_pane_vc_t1

0x6835,	// (0x00016084) list_double_graphic_pane_vc_t2_ParamLimits

0x6835,	// (0x00016084) list_double_graphic_pane_vc_t2

0x0001,

0xfab6,	// (0x0001f305) list_double_graphic_pane_vc_t_ParamLimits

0xfab6,	// (0x0001f305) list_double_graphic_pane_vc_t

0xf58a,	// (0x0001edd9) aid_size_cell_fastswap

0xb1fa,	// (0x0001aa49) aid_size_cell_touch_ParamLimits

0xb1fa,	// (0x0001aa49) aid_size_cell_touch

0x01ce,	// (0x0000fa1d) popup_fast_swap_wide_window_ParamLimits

0x01ce,	// (0x0000fa1d) popup_fast_swap_wide_window

0xb349,	// (0x0001ab98) touch_pane_ParamLimits

0xb349,	// (0x0001ab98) touch_pane

0x29eb,	// (0x0001223a) button_value_adjust_pane_cp2

0x29f3,	// (0x00012242) button_value_adjust_pane_cp4

0x2a19,	// (0x00012268) form_field_data_pane_cp2

0xc327,	// (0x0001bb76) form_field_data_wide_pane_cp2

0x30c8,	// (0x00012917) bg_scroll_pane_ParamLimits

0x0575,	// (0x0000fdc4) scroll_handle_pane_ParamLimits

0x0589,	// (0x0000fdd8) scroll_sc2_down_pane_ParamLimits

0x0589,	// (0x0000fdd8) scroll_sc2_down_pane

0x30f9,	// (0x00012948) scroll_sc2_up_pane_ParamLimits

0x30f9,	// (0x00012948) scroll_sc2_up_pane

0xdb09,	// (0x0001d358) grid_wheel_folder_pane_g1_ParamLimits

0xdb09,	// (0x0001d358) grid_wheel_folder_pane_g1

0x0753,	// (0x0000ffa2) clock_nsta_pane_cp2_ParamLimits

0x0753,	// (0x0000ffa2) clock_nsta_pane_cp2

0xc7d6,	// (0x0001c025) listscroll_midp_pane_ParamLimits

0xc7e7,	// (0x0001c036) midp_canvas_pane

0x3c2f,	// (0x0001347e) nsta_clock_indic_pane

0x3c8d,	// (0x000134dc) listscroll_form_pane_vc

0x3ca9,	// (0x000134f8) listscroll_set_pane_vc_ParamLimits

0x3ca9,	// (0x000134f8) listscroll_set_pane_vc

0xd115,	// (0x0001c964) clock_nsta_pane

0xd13f,	// (0x0001c98e) indicator_nsta_pane

0x473d,	// (0x00013f8c) bg_popup_sub_pane_cp2_ParamLimits

0x4751,	// (0x00013fa0) find_pane_cp2_ParamLimits

0x4751,	// (0x00013fa0) find_pane_cp2

0x4767,	// (0x00013fb6) grid_toobar_pane_ParamLimits

0x491d,	// (0x0001416c) list_form_gen_pane_vc_ParamLimits

0x491d,	// (0x0001416c) list_form_gen_pane_vc

0x4933,	// (0x00014182) scroll_pane_cp8_vc_ParamLimits

0x4933,	// (0x00014182) scroll_pane_cp8_vc

0x49af,	// (0x000141fe) data_form_wide_pane_vc_ParamLimits

0x49af,	// (0x000141fe) data_form_wide_pane_vc

0x49bb,	// (0x0001420a) form_field_data_wide_pane_vc_g1

0x49c3,	// (0x00014212) form_field_data_wide_pane_vc_t1_ParamLimits

0x49c3,	// (0x00014212) form_field_data_wide_pane_vc_t1

0x2ae1,	// (0x00012330) input_focus_pane_cp6_vc_ParamLimits

0x2ae1,	// (0x00012330) input_focus_pane_cp6_vc

0xd4d5,	// (0x0001cd24) list_midp_pane_ParamLimits

0x60e9,	// (0x00015938) scroll_pane_cp16_ParamLimits

0x60e9,	// (0x00015938) scroll_pane_cp16

0x4d18,	// (0x00014567) button_value_adjust_pane_ParamLimits

0x4d18,	// (0x00014567) button_value_adjust_pane

0xd724,	// (0x0001cf73) button_value_adjust_pane_cp6_ParamLimits

0xd724,	// (0x0001cf73) button_value_adjust_pane_cp6

0xd866,	// (0x0001d0b5) settings_code_pane_cp_ParamLimits

0xd866,	// (0x0001d0b5) settings_code_pane_cp

0x1bbb,	// (0x0001140a) cell_touch_pane_g1

0x1bbb,	// (0x0001140a) cell_touch_pane_g2

0x0001,

0xf742,	// (0x0001ef91) cell_touch_pane_g

0xd9de,	// (0x0001d22d) cell_touch_pane_cp_ParamLimits

0xd9de,	// (0x0001d22d) cell_touch_pane_cp

0xd9fa,	// (0x0001d249) cell_touch_pane_ParamLimits

0xd9fa,	// (0x0001d249) cell_touch_pane

0x1bbb,	// (0x0001140a) scroll_sc2_down_pane_g1

0x1bbb,	// (0x0001140a) scroll_sc2_up_pane_g1

0x1bc5,	// (0x00011414) bg_set_opt_pane_cp4_vc

0x64b3,	// (0x00015d02) list_set_graphic_pane_vc_g1_ParamLimits

0x64b3,	// (0x00015d02) list_set_graphic_pane_vc_g1

0x64bf,	// (0x00015d0e) list_set_graphic_pane_vc_g2_ParamLimits

0x64bf,	// (0x00015d0e) list_set_graphic_pane_vc_g2

0x0001,

0xfa2e,	// (0x0001f27d) list_set_graphic_pane_vc_g_ParamLimits

0xfa2e,	// (0x0001f27d) list_set_graphic_pane_vc_g

0x64cb,	// (0x00015d1a) text_primary_small_cp13_vc_ParamLimits

0x64cb,	// (0x00015d1a) text_primary_small_cp13_vc

0x64e3,	// (0x00015d32) list_set_graphic_pane_vc_ParamLimits

0x64e3,	// (0x00015d32) list_set_graphic_pane_vc

0x1bc5,	// (0x00011414) input_focus_pane_cp2_vc

0x1bbb,	// (0x0001140a) setting_code_pane_vc_g1

0x64f7,	// (0x00015d46) setting_code_pane_vc_t1

0x6505,	// (0x00015d54) set_text_pane_vc_t1_ParamLimits

0x6505,	// (0x00015d54) set_text_pane_vc_t1

0x1bc5,	// (0x00011414) input_focus_pane_cp1_vc

0x6523,	// (0x00015d72) list_set_text_pane_vc

0x1bbb,	// (0x0001140a) setting_text_pane_vc_g1

0x1bc5,	// (0x00011414) bg_set_opt_pane_cp2_vc

0x652d,	// (0x00015d7c) setting_slider_graphic_pane_vc_g1

0x6535,	// (0x00015d84) setting_slider_graphic_pane_vc_t1

0x6543,	// (0x00015d92) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa33,	// (0x0001f282) setting_slider_graphic_pane_vc_t

0x6551,	// (0x00015da0) slider_set_pane_cp_vc

0x6559,	// (0x00015da8) slider_set_pane_vc_g1

0x6562,	// (0x00015db1) slider_set_pane_vc_g2

0x0006,

0xfa38,	// (0x0001f287) slider_set_pane_vc_g

0x2c1d,	// (0x0001246c) set_opt_bg_pane_g1_copy1

0x2c25,	// (0x00012474) set_opt_bg_pane_g2_copy1

0x658e,	// (0x00015ddd) set_opt_bg_pane_g3_copy1

0x2c35,	// (0x00012484) set_opt_bg_pane_g4_copy1

0x2c3d,	// (0x0001248c) set_opt_bg_pane_g5_copy1

0x2c45,	// (0x00012494) set_opt_bg_pane_g6_copy1

0x6598,	// (0x00015de7) set_opt_bg_pane_g7_copy1

0x65a2,	// (0x00015df1) set_opt_bg_pane_g8_copy1

0x65ac,	// (0x00015dfb) set_opt_bg_pane_g9_copy1

0x1bc5,	// (0x00011414) bg_set_opt_pane_cp_vc

0x65b6,	// (0x00015e05) setting_slider_pane_vc_t1

0x6535,	// (0x00015d84) setting_slider_pane_vc_t2

0x6543,	// (0x00015d92) setting_slider_pane_vc_t3

0x0002,

0xfa47,	// (0x0001f296) setting_slider_pane_vc_t

0x6551,	// (0x00015da0) slider_set_pane_vc

0x0b72,	// (0x000103c1) volume_set_pane_vc_g1

0x0b7b,	// (0x000103ca) volume_set_pane_vc_g2

0x0b84,	// (0x000103d3) volume_set_pane_vc_g3

0x0b8d,	// (0x000103dc) volume_set_pane_vc_g4

0x0b96,	// (0x000103e5) volume_set_pane_vc_g5

0x0b9f,	// (0x000103ee) volume_set_pane_vc_g6

0x0ba8,	// (0x000103f7) volume_set_pane_vc_g7

0x0bb1,	// (0x00010400) volume_set_pane_vc_g8

0x0bba,	// (0x00010409) volume_set_pane_vc_g9

0x0bc3,	// (0x00010412) volume_set_pane_vc_g10

0x0009,

0xfa4e,	// (0x0001f29d) volume_set_pane_vc_g

0x65c5,	// (0x00015e14) volume_set_pane_vc

0x65cd,	// (0x00015e1c) button_value_adjust_pane_cp1_vc

0x65d7,	// (0x00015e26) list_highlight_pane_cp2_vc

0x65e0,	// (0x00015e2f) list_set_pane_vc_ParamLimits

0x65e0,	// (0x00015e2f) list_set_pane_vc

0x664a,	// (0x00015e99) main_pane_set_vc_t1_ParamLimits

0x664a,	// (0x00015e99) main_pane_set_vc_t1

0x665f,	// (0x00015eae) main_pane_set_vc_t2_ParamLimits

0x665f,	// (0x00015eae) main_pane_set_vc_t2

0x6671,	// (0x00015ec0) main_pane_set_vc_t3_ParamLimits

0x6671,	// (0x00015ec0) main_pane_set_vc_t3

0x6685,	// (0x00015ed4) main_pane_set_vc_t4_ParamLimits

0x6685,	// (0x00015ed4) main_pane_set_vc_t4

0x0003,

0xfa63,	// (0x0001f2b2) main_pane_set_vc_t_ParamLimits

0xfa63,	// (0x0001f2b2) main_pane_set_vc_t

0x6699,	// (0x00015ee8) setting_code_pane_vc_ParamLimits

0x6699,	// (0x00015ee8) setting_code_pane_vc

0x66aa,	// (0x00015ef9) setting_slider_graphic_pane_vc

0x66aa,	// (0x00015ef9) setting_slider_pane_vc

0x66aa,	// (0x00015ef9) setting_text_pane_vc

0x66aa,	// (0x00015ef9) setting_volume_pane_vc

0x66b4,	// (0x00015f03) scroll_pane_cp121_vc

0x29d9,	// (0x00012228) set_content_pane_vc

0x6906,	// (0x00016155) button_value_adjust_pane_g1

0x690f,	// (0x0001615e) button_value_adjust_pane_g2

0x0001,

0xfabb,	// (0x0001f30a) button_value_adjust_pane_g

0x6918,	// (0x00016167) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6918,	// (0x00016167) form_field_slider_wide_pane_vc_t1

0x692c,	// (0x0001617b) form_field_slider_wide_pane_vc_t2_ParamLimits

0x692c,	// (0x0001617b) form_field_slider_wide_pane_vc_t2

0x0001,

0xfac0,	// (0x0001f30f) form_field_slider_wide_pane_vc_t_ParamLimits

0xfac0,	// (0x0001f30f) form_field_slider_wide_pane_vc_t

0x1f3b,	// (0x0001178a) input_focus_pane_cp10_vc_ParamLimits

0x1f3b,	// (0x0001178a) input_focus_pane_cp10_vc

0x693e,	// (0x0001618d) slider_cont_pane_cp1_vc_ParamLimits

0x693e,	// (0x0001618d) slider_cont_pane_cp1_vc

0x6559,	// (0x00015da8) slider_form_pane_g1_cp2

0x6562,	// (0x00015db1) slider_form_pane_g2_cp2

0x6957,	// (0x000161a6) form_field_slider_pane_vc_t3

0x6965,	// (0x000161b4) form_field_slider_pane_vc_t4

0x6973,	// (0x000161c2) slider_form_pane_vc_ParamLimits

0x6973,	// (0x000161c2) slider_form_pane_vc

0x6980,	// (0x000161cf) form_field_slider_pane_vc_t1_ParamLimits

0x6980,	// (0x000161cf) form_field_slider_pane_vc_t1

0x692c,	// (0x0001617b) form_field_slider_pane_vc_t2_ParamLimits

0x692c,	// (0x0001617b) form_field_slider_pane_vc_t2

0x0001,

0xfad0,	// (0x0001f31f) form_field_slider_pane_vc_t_ParamLimits

0xfad0,	// (0x0001f31f) form_field_slider_pane_vc_t

0x1f3b,	// (0x0001178a) input_focus_pane_cp9_vc_ParamLimits

0x1f3b,	// (0x0001178a) input_focus_pane_cp9_vc

0x699c,	// (0x000161eb) slider_cont_pane_vc_ParamLimits

0x699c,	// (0x000161eb) slider_cont_pane_vc

0x69ae,	// (0x000161fd) list_form_graphic_pane_cp_vc_ParamLimits

0x69ae,	// (0x000161fd) list_form_graphic_pane_cp_vc

0x49bb,	// (0x0001420a) form_field_popup_wide_pane_vc_g1

0x69c3,	// (0x00016212) form_field_popup_wide_pane_vc_t1_ParamLimits

0x69c3,	// (0x00016212) form_field_popup_wide_pane_vc_t1

0x2ae1,	// (0x00012330) input_focus_pane_cp8_vc_ParamLimits

0x2ae1,	// (0x00012330) input_focus_pane_cp8_vc

0x69da,	// (0x00016229) list_form_wide_pane_vc_ParamLimits

0x69da,	// (0x00016229) list_form_wide_pane_vc

0x69e6,	// (0x00016235) list_form_graphic_pane_vc_g1

0x69ee,	// (0x0001623d) list_form_graphic_pane_vc_t1_ParamLimits

0x69ee,	// (0x0001623d) list_form_graphic_pane_vc_t1

0x1ca5,	// (0x000114f4) list_highlight_pane_cp5_vc_ParamLimits

0x1ca5,	// (0x000114f4) list_highlight_pane_cp5_vc

0x6a0a,	// (0x00016259) list_form_graphic_pane_vc_ParamLimits

0x6a0a,	// (0x00016259) list_form_graphic_pane_vc

0x49bb,	// (0x0001420a) form_field_popup_pane_vc_g1

0x6a20,	// (0x0001626f) form_field_popup_pane_vc_t1_ParamLimits

0x6a20,	// (0x0001626f) form_field_popup_pane_vc_t1

0x2ae1,	// (0x00012330) input_focus_pane_cp7_vc_ParamLimits

0x2ae1,	// (0x00012330) input_focus_pane_cp7_vc

0x6a37,	// (0x00016286) list_form_pane_vc_ParamLimits

0x6a37,	// (0x00016286) list_form_pane_vc

0x6a43,	// (0x00016292) data_form_pane_vc_t1_ParamLimits

0x6a43,	// (0x00016292) data_form_pane_vc_t1

0x2c1d,	// (0x0001246c) input_focus_pane_vc_g1

0x2c25,	// (0x00012474) input_focus_pane_vc_g2

0x2c2d,	// (0x0001247c) input_focus_pane_vc_g3

0x2c35,	// (0x00012484) input_focus_pane_vc_g4

0x2c3d,	// (0x0001248c) input_focus_pane_vc_g5

0x2c45,	// (0x00012494) input_focus_pane_vc_g6

0x2c4d,	// (0x0001249c) input_focus_pane_vc_g7

0x2c55,	// (0x000124a4) input_focus_pane_vc_g8

0x2c5d,	// (0x000124ac) input_focus_pane_vc_g9

0x1bbb,	// (0x0001140a) input_focus_pane_vc_g10

0x0009,

0xf6cb,	// (0x0001ef1a) input_focus_pane_vc_g

0x49af,	// (0x000141fe) data_form_pane_vc_ParamLimits

0x49af,	// (0x000141fe) data_form_pane_vc

0x49bb,	// (0x0001420a) form_field_data_pane_vc_g1

0x6a60,	// (0x000162af) form_field_data_pane_vc_t1_ParamLimits

0x6a60,	// (0x000162af) form_field_data_pane_vc_t1

0x2ae1,	// (0x00012330) input_focus_pane_vc_ParamLimits

0x2ae1,	// (0x00012330) input_focus_pane_vc

0x6a7a,	// (0x000162c9) button_value_adjust_pane_cp3_vc

0x6a82,	// (0x000162d1) button_value_adjust_pane_cp5_vc

0x6a8a,	// (0x000162d9) form_field_data_pane_vc_ParamLimits

0x6a8a,	// (0x000162d9) form_field_data_pane_vc

0x6aa5,	// (0x000162f4) form_field_data_pane_vc_cp2

0x6aad,	// (0x000162fc) form_field_data_wide_pane_vc_ParamLimits

0x6aad,	// (0x000162fc) form_field_data_wide_pane_vc

0x6ac7,	// (0x00016316) form_field_data_wide_pane_vc_cp2

0x6acf,	// (0x0001631e) form_field_popup_pane_vc_ParamLimits

0x6acf,	// (0x0001631e) form_field_popup_pane_vc

0x6aea,	// (0x00016339) form_field_popup_wide_pane_vc_ParamLimits

0x6aea,	// (0x00016339) form_field_popup_wide_pane_vc

0x6b04,	// (0x00016353) form_field_slider_pane_vc_ParamLimits

0x6b04,	// (0x00016353) form_field_slider_pane_vc

0x6b17,	// (0x00016366) form_field_slider_wide_pane_vc_ParamLimits

0x6b17,	// (0x00016366) form_field_slider_wide_pane_vc

0xda18,	// (0x0001d267) grid_touch_1_pane_ParamLimits

0xda18,	// (0x0001d267) grid_touch_1_pane

0xda2c,	// (0x0001d27b) grid_touch_2_pane_ParamLimits

0xda2c,	// (0x0001d27b) grid_touch_2_pane

0x6bee,	// (0x0001643d) touch_pane_g1_ParamLimits

0x6bee,	// (0x0001643d) touch_pane_g1

0x6b50,	// (0x0001639f) cell_app_pane_cp_wide_ParamLimits

0x6b50,	// (0x0001639f) cell_app_pane_cp_wide

0x6b61,	// (0x000163b0) grid_popup_fast_wide_pane_ParamLimits

0x6b61,	// (0x000163b0) grid_popup_fast_wide_pane

0x6b75,	// (0x000163c4) scroll_pane_cp19_ParamLimits

0x6b75,	// (0x000163c4) scroll_pane_cp19

0x1bc5,	// (0x00011414) bg_popup_window_pane_cp20

0x6b89,	// (0x000163d8) listscroll_popup_fast_wide_pane

0x2e19,	// (0x00012668) grid_indicator_nsta_pane

0x6b91,	// (0x000163e0) clock_nsta_pane_g1

0x6b9a,	// (0x000163e9) clock_nsta_pane_t1

0xda58,	// (0x0001d2a7) cell_indicator_nsta_pane_ParamLimits

0xda58,	// (0x0001d2a7) cell_indicator_nsta_pane

0x6bee,	// (0x0001643d) cell_indicator_nsta_pane_g1

0xda75,	// (0x0001d2c4) cell_indicator_nsta_pane_g2

0x0001,

0xfada,	// (0x0001f329) cell_indicator_nsta_pane_g

0x6c11,	// (0x00016460) clock_nsta_pane_cp

0x6c19,	// (0x00016468) indicator_nsta_pane_cp

0x6c21,	// (0x00016470) nsta_clock_indic_pane_g1

0x1d8b,	// (0x000115da) grid_indicator_pane

0x31eb,	// (0x00012a3a) scroll_pane_cp29

0x069f,	// (0x0000feee) indicator_nsta_pane_cp2_ParamLimits

0x069f,	// (0x0000feee) indicator_nsta_pane_cp2

0x1ca5,	// (0x000114f4) main_apps_wheel_pane

0x4ba9,	// (0x000143f8) form_midp_field_text_pane_ParamLimits

0x4cf8,	// (0x00014547) scroll_bar_cp050_ParamLimits

0x6c59,	// (0x000164a8) cell_indicator_pane_ParamLimits

0x6c59,	// (0x000164a8) cell_indicator_pane

0x6c71,	// (0x000164c0) cell_indicator_pane_g1

0xda8b,	// (0x0001d2da) grid_wheel_folder_pane_ParamLimits

0xda8b,	// (0x0001d2da) grid_wheel_folder_pane

0xda99,	// (0x0001d2e8) list_wheel_apps_pane_ParamLimits

0xda99,	// (0x0001d2e8) list_wheel_apps_pane

0xdaa7,	// (0x0001d2f6) main_apps_wheel_pane_g1_ParamLimits

0xdaa7,	// (0x0001d2f6) main_apps_wheel_pane_g1

0xdab7,	// (0x0001d306) main_apps_wheel_pane_g2_ParamLimits

0xdab7,	// (0x0001d306) main_apps_wheel_pane_g2

0x0001,

0xfae9,	// (0x0001f338) main_apps_wheel_pane_g_ParamLimits

0xfae9,	// (0x0001f338) main_apps_wheel_pane_g

0xdac7,	// (0x0001d316) main_apps_wheel_pane_t1_ParamLimits

0xdac7,	// (0x0001d316) main_apps_wheel_pane_t1

0xdadf,	// (0x0001d32e) list_wheel_apps_pane_g1

0xdae7,	// (0x0001d336) list_wheel_apps_pane_g2

0xdaef,	// (0x0001d33e) list_wheel_apps_pane_g3

0xdaf7,	// (0x0001d346) list_wheel_apps_pane_g4

0xdaff,	// (0x0001d34e) list_wheel_apps_pane_g5

0x0004,

0xfaee,	// (0x0001f33d) list_wheel_apps_pane_g

0x37a9,	// (0x00012ff8) navi_icon_text_pane

0xd00e,	// (0x0001c85d) aid_fill_nsta

0xdb1c,	// (0x0001d36b) navi_icon_text_pane_g1

0xdb28,	// (0x0001d377) navi_icon_text_pane_t1

0xc7be,	// (0x0001c00d) list_set_graphic_pane_t1_ParamLimits

0xc7be,	// (0x0001c00d) list_set_graphic_pane_t1

0x5418,	// (0x00014c67) popup_midp_note_alarm_window_t6_ParamLimits

0x5418,	// (0x00014c67) popup_midp_note_alarm_window_t6

0x542a,	// (0x00014c79) popup_midp_note_alarm_window_t7_ParamLimits

0x542a,	// (0x00014c79) popup_midp_note_alarm_window_t7

0x543c,	// (0x00014c8b) popup_midp_note_alarm_window_t8_ParamLimits

0x543c,	// (0x00014c8b) popup_midp_note_alarm_window_t8

0x544e,	// (0x00014c9d) popup_midp_note_alarm_window_t9_ParamLimits

0x544e,	// (0x00014c9d) popup_midp_note_alarm_window_t9

0x5460,	// (0x00014caf) popup_midp_note_alarm_window_t10_ParamLimits

0x5460,	// (0x00014caf) popup_midp_note_alarm_window_t10

0x5472,	// (0x00014cc1) popup_midp_note_alarm_window_t11_ParamLimits

0x5472,	// (0x00014cc1) popup_midp_note_alarm_window_t11

0x5484,	// (0x00014cd3) scroll_pane_cp17_ParamLimits

0x5484,	// (0x00014cd3) scroll_pane_cp17

0x0b72,	// (0x000103c1) volume_small_pane_cp_g1

0x0e83,	// (0x000106d2) volume_small_pane_cp_g2

0x0e8c,	// (0x000106db) volume_small_pane_cp_g3

0x0e95,	// (0x000106e4) volume_small_pane_cp_g4

0x0e9e,	// (0x000106ed) volume_small_pane_cp_g5

0x0ea7,	// (0x000106f6) volume_small_pane_cp_g6

0x0eb0,	// (0x000106ff) volume_small_pane_cp_g7

0x0eb9,	// (0x00010708) volume_small_pane_cp_g8

0x0ec2,	// (0x00010711) volume_small_pane_cp_g9

0x0ecb,	// (0x0001071a) volume_small_pane_cp_g10

0x3a0a,	// (0x00013259) midp_ticker_pane_g1_ParamLimits

0x3a16,	// (0x00013265) midp_ticker_pane_g2_ParamLimits

0xf793,	// (0x0001efe2) midp_ticker_pane_g_ParamLimits

0xc87e,	// (0x0001c0cd) midp_ticker_pane_t1_ParamLimits

0xd02e,	// (0x0001c87d) aid_fill_nsta_2

0x4ce4,	// (0x00014533) list_form2_midp_pane

0x5e9e,	// (0x000156ed) midp_editing_number_pane_ParamLimits

0x5ead,	// (0x000156fc) midp_ticker_pane_ParamLimits

0x6d6a,	// (0x000165b9) form2_midp_field_pane

0x6d8e,	// (0x000165dd) scroll_pane_cp51

0x6dae,	// (0x000165fd) form2_midp_button_pane_ParamLimits

0x6dae,	// (0x000165fd) form2_midp_button_pane

0x6dc0,	// (0x0001660f) form2_midp_content_pane_ParamLimits

0x6dc0,	// (0x0001660f) form2_midp_content_pane

0x6dda,	// (0x00016629) form2_midp_field_choice_group_pane

0x6de2,	// (0x00016631) form2_midp_field_pane_g1

0x6dea,	// (0x00016639) form2_midp_field_pane_g2

0x6df2,	// (0x00016641) form2_midp_field_pane_g3

0x6dfa,	// (0x00016649) form2_midp_field_pane_g4

0x0003,

0xfb13,	// (0x0001f362) form2_midp_field_pane_g

0x6e02,	// (0x00016651) form2_midp_gauge_slider_pane

0x6e0a,	// (0x00016659) form2_midp_gauge_wait_pane

0x6e12,	// (0x00016661) form2_midp_image_pane_ParamLimits

0x6e12,	// (0x00016661) form2_midp_image_pane

0x6e2d,	// (0x0001667c) form2_midp_label_pane_ParamLimits

0x6e2d,	// (0x0001667c) form2_midp_label_pane

0xdb56,	// (0x0001d3a5) form2_midp_label_pane_cp_ParamLimits

0xdb56,	// (0x0001d3a5) form2_midp_label_pane_cp

0x6e6d,	// (0x000166bc) form2_midp_string_pane_ParamLimits

0x6e6d,	// (0x000166bc) form2_midp_string_pane

0xdb77,	// (0x0001d3c6) form2_midp_text_pane_ParamLimits

0xdb77,	// (0x0001d3c6) form2_midp_text_pane

0x6ea0,	// (0x000166ef) form2_midp_time_pane

0x6eb0,	// (0x000166ff) input_focus_pane_cp51_ParamLimits

0x6eb0,	// (0x000166ff) input_focus_pane_cp51

0x6ec8,	// (0x00016717) form2_midp_label_pane_t1_ParamLimits

0x6ec8,	// (0x00016717) form2_midp_label_pane_t1

0xdb98,	// (0x0001d3e7) form2_mdip_text_pane_t1_ParamLimits

0xdb98,	// (0x0001d3e7) form2_mdip_text_pane_t1

0x6f30,	// (0x0001677f) form2_midp_time_pane_t1

0x6f4b,	// (0x0001679a) form2_midp_gauge_slider_pane_t1

0xdbb7,	// (0x0001d406) form2_midp_gauge_slider_pane_t2

0xdbc9,	// (0x0001d418) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb1c,	// (0x0001f36b) form2_midp_gauge_slider_pane_t

0x6f81,	// (0x000167d0) form2_midp_slider_pane

0x6f8d,	// (0x000167dc) form2_midp_gauge_wait_pane_t1

0x6f9b,	// (0x000167ea) form2_midp_wait_pane_ParamLimits

0x6f9b,	// (0x000167ea) form2_midp_wait_pane

0xd447,	// (0x0001cc96) list_single_2graphic_pane_cp4_ParamLimits

0xd447,	// (0x0001cc96) list_single_2graphic_pane_cp4

0xdbdb,	// (0x0001d42a) list_single_midp_graphic_pane_cp_ParamLimits

0xdbdb,	// (0x0001d42a) list_single_midp_graphic_pane_cp

0x1bc5,	// (0x00011414) list_highlight_pane_cp20

0x6fea,	// (0x00016839) list_single_2graphic_pane_g1_cp4

0x6369,	// (0x00015bb8) list_single_2graphic_pane_g2_cp4

0x6ff2,	// (0x00016841) list_single_2graphic_pane_t1_cp4

0x1ca5,	// (0x000114f4) list_highlight_pane_cp21

0x7001,	// (0x00016850) list_single_midp_graphic_pane_g4_cp

0x7010,	// (0x0001685f) list_single_midp_graphic_pane_t1_cp

0xdbfc,	// (0x0001d44b) form2_mdip_string_pane_t1_ParamLimits

0xdbfc,	// (0x0001d44b) form2_mdip_string_pane_t1

0x1bc5,	// (0x00011414) bg_wml_button_pane_cp2

0x1bbb,	// (0x0001140a) form2_midp_image_pane_g1

0x278d,	// (0x00011fdc) list_double_large_graphic_pane_g5_ParamLimits

0x278d,	// (0x00011fdc) list_double_large_graphic_pane_g5

0xc7d6,	// (0x0001c025) midp_form_pane_ParamLimits

0x1ca5,	// (0x000114f4) main_apps_wheel_pane_ParamLimits

0xcd26,	// (0x0001c575) popup_preview_window_ParamLimits

0xcd26,	// (0x0001c575) popup_preview_window

0x4287,	// (0x00013ad6) popup_touch_info_window_ParamLimits

0x4287,	// (0x00013ad6) popup_touch_info_window

0x42a9,	// (0x00013af8) popup_touch_menu_window_ParamLimits

0x42a9,	// (0x00013af8) popup_touch_menu_window

0x1bb1,	// (0x00011400) bg_popup_sub_pane_cp6

0x70ca,	// (0x00016919) list_touch_menu_pane

0x70d2,	// (0x00016921) list_single_touch_menu_pane_ParamLimits

0x70d2,	// (0x00016921) list_single_touch_menu_pane

0x70ed,	// (0x0001693c) list_single_touch_menu_pane_t1

0x1ca5,	// (0x000114f4) bg_popup_sub_pane_cp7_ParamLimits

0x1ca5,	// (0x000114f4) bg_popup_sub_pane_cp7

0x70fb,	// (0x0001694a) heading_sub_pane

0x7103,	// (0x00016952) list_touch_info_pane_ParamLimits

0x7103,	// (0x00016952) list_touch_info_pane

0x7112,	// (0x00016961) list_single_touch_info_pane_ParamLimits

0x7112,	// (0x00016961) list_single_touch_info_pane

0x7124,	// (0x00016973) list_single_touch_info_pane_t1

0x7132,	// (0x00016981) list_single_touch_info_pane_t2

0x0001,

0xfb2a,	// (0x0001f379) list_single_touch_info_pane_t

0x392d,	// (0x0001317c) bg_popup_heading_pane_cp

0x7140,	// (0x0001698f) heading_sub_pane_t1

0x4949,	// (0x00014198) bg_popup_preview_window_pane_cp_ParamLimits

0x4949,	// (0x00014198) bg_popup_preview_window_pane_cp

0x70fb,	// (0x0001694a) heading_preview_pane

0x7103,	// (0x00016952) list_preview_pane_ParamLimits

0x7103,	// (0x00016952) list_preview_pane

0x714e,	// (0x0001699d) popup_preview_window_g1

0x7112,	// (0x00016961) list_single_preview_pane_ParamLimits

0x7112,	// (0x00016961) list_single_preview_pane

0x7156,	// (0x000169a5) list_single_preview_pane_g1

0x715e,	// (0x000169ad) list_single_preview_pane_t1

0x7124,	// (0x00016973) list_single_preview_pane_t2

0x0001,

0xfb2f,	// (0x0001f37e) list_single_preview_pane_t

0x716c,	// (0x000169bb) bg_popup_heading_pane_cp2_ParamLimits

0x716c,	// (0x000169bb) bg_popup_heading_pane_cp2

0x7182,	// (0x000169d1) heading_preview_pane_g1

0x718a,	// (0x000169d9) heading_preview_pane_t1_ParamLimits

0x718a,	// (0x000169d9) heading_preview_pane_t1

0x1dae,	// (0x000115fd) soft_indicator_pane_t1_ParamLimits

0x24b9,	// (0x00011d08) scroll_pane_ParamLimits

0x30e7,	// (0x00012936) scroll_sc2_left_pane

0x30f0,	// (0x0001293f) scroll_sc2_right_pane

0x310f,	// (0x0001295e) scroll_bg_pane_g1_ParamLimits

0x3124,	// (0x00012973) scroll_bg_pane_g2_ParamLimits

0x313c,	// (0x0001298b) scroll_bg_pane_g3_ParamLimits

0xf722,	// (0x0001ef71) scroll_bg_pane_g_ParamLimits

0x310f,	// (0x0001295e) scroll_handle_pane_g1_ParamLimits

0x315e,	// (0x000129ad) scroll_handle_pane_g2_ParamLimits

0x313c,	// (0x0001298b) scroll_handle_pane_g3_ParamLimits

0xf729,	// (0x0001ef78) scroll_handle_pane_g_ParamLimits

0x3ceb,	// (0x0001353a) popup_choice_list_window_ParamLimits

0x3ceb,	// (0x0001353a) popup_choice_list_window

0x4749,	// (0x00013f98) choice_list_pane

0x47f9,	// (0x00014048) cell_toolbar_pane_t1

0x4821,	// (0x00014070) toolbar_button_pane_ParamLimits

0x5954,	// (0x000151a3) ai_gene_pane_1_t2_ParamLimits

0x5954,	// (0x000151a3) ai_gene_pane_1_t2

0x0001,

0xf941,	// (0x0001f190) ai_gene_pane_1_t_ParamLimits

0xf941,	// (0x0001f190) ai_gene_pane_1_t

0x71a7,	// (0x000169f6) scroll_sc2_left_pane_g1

0x71a7,	// (0x000169f6) scroll_sc2_right_pane_g1

0x3cbb,	// (0x0001350a) bg_popup_sub_pane_cp10

0x71b1,	// (0x00016a00) list_choice_list_pane

0x71c8,	// (0x00016a17) list_single_choice_list_pane_ParamLimits

0x71c8,	// (0x00016a17) list_single_choice_list_pane

0x71dc,	// (0x00016a2b) list_single_choice_list_pane_g1

0x71e4,	// (0x00016a33) list_single_choice_list_pane_t1_ParamLimits

0x71e4,	// (0x00016a33) list_single_choice_list_pane_t1

0x71f9,	// (0x00016a48) choice_list_pane_g1

0x7201,	// (0x00016a50) choice_list_pane_t1

0x1bb1,	// (0x00011400) input_focus_pane_cp11

0x2fc1,	// (0x00012810) title_pane_stacon_g2_ParamLimits

0x2fc1,	// (0x00012810) title_pane_stacon_g2

0x0002,

0xf708,	// (0x0001ef57) title_pane_stacon_g_ParamLimits

0xf708,	// (0x0001ef57) title_pane_stacon_g

0x392d,	// (0x0001317c) cursor_press_pane

0xc9a7,	// (0x0001c1f6) popup_fep_hwr_window_ParamLimits

0xc9a7,	// (0x0001c1f6) popup_fep_hwr_window

0x3e2b,	// (0x0001367a) popup_fep_vkb_window_ParamLimits

0x3e2b,	// (0x0001367a) popup_fep_vkb_window

0x720f,	// (0x00016a5e) cursor_press_pane_g1

0x0002,

0xfb58,	// (0x0001f3a7) fep_vkb_side_pane_g_ParamLimits

0x0f0d,	// (0x0001075c) fep_hwr_candidate_pane_ParamLimits

0x0f0d,	// (0x0001075c) fep_hwr_candidate_pane

0x0f37,	// (0x00010786) fep_hwr_side_pane_ParamLimits

0x0f37,	// (0x00010786) fep_hwr_side_pane

0x0f59,	// (0x000107a8) fep_hwr_top_pane_ParamLimits

0x0f59,	// (0x000107a8) fep_hwr_top_pane

0x0f71,	// (0x000107c0) fep_hwr_write_pane_ParamLimits

0x0f71,	// (0x000107c0) fep_hwr_write_pane

0xfb58,	// (0x0001f3a7) fep_vkb_side_pane_g

0x7217,	// (0x00016a66) fep_hwr_top_pane_g1

0x7229,	// (0x00016a78) fep_hwr_top_pane_g2

0x0fab,	// (0x000107fa) fep_hwr_top_pane_g3

0x0002,

0xfb34,	// (0x0001f383) fep_hwr_top_pane_g

0x0fc0,	// (0x0001080f) fep_hwr_top_text_pane

0x32b3,	// (0x00012b02) fep_hwr_top_text_pane_g1

0x725f,	// (0x00016aae) fep_hwr_top_text_pane_t1

0x10ca,	// (0x00010919) fep_hwr_candidate_pane_g1

0x74aa,	// (0x00016cf9) fep_vkb_keypad_pane_g3_ParamLimits

0x74aa,	// (0x00016cf9) fep_vkb_keypad_pane_g3

0x74d6,	// (0x00016d25) fep_vkb_keypad_pane_g4_ParamLimits

0x74d6,	// (0x00016d25) fep_vkb_keypad_pane_g4

0x755b,	// (0x00016daa) fep_vkb_bottom_pane_g2_ParamLimits

0x755b,	// (0x00016daa) fep_vkb_bottom_pane_g2

0x0001,

0xfb5f,	// (0x0001f3ae) fep_vkb_bottom_pane_g_ParamLimits

0xfb5f,	// (0x0001f3ae) fep_vkb_bottom_pane_g

0x71a7,	// (0x000169f6) cell_vkb_side_pane_g2

0x0001,

0xfb69,	// (0x0001f3b8) cell_vkb_side_pane_g

0x75e6,	// (0x00016e35) cell_vkb_side_pane_t1

0x75f4,	// (0x00016e43) cell_vkb_side_pane_t1_copy1

0x71a7,	// (0x000169f6) bg_fep_vkb_candidate_pane_g2

0x7738,	// (0x00016f87) cell_vkb_candidate_pane_ParamLimits

0x726d,	// (0x00016abc) aid_size_cell_vkb_ParamLimits

0x726d,	// (0x00016abc) aid_size_cell_vkb

0x7738,	// (0x00016f87) cell_vkb_candidate_pane

0x10f1,	// (0x00010940) bg_popup_fep_shadow_pane_g1

0xdc98,	// (0x0001d4e7) fep_vkb_bottom_pane_ParamLimits

0xdc98,	// (0x0001d4e7) fep_vkb_bottom_pane

0x733c,	// (0x00016b8b) fep_vkb_candidate_pane_ParamLimits

0x733c,	// (0x00016b8b) fep_vkb_candidate_pane

0xdcc4,	// (0x0001d513) fep_vkb_keypad_pane_ParamLimits

0xdcc4,	// (0x0001d513) fep_vkb_keypad_pane

0xdceb,	// (0x0001d53a) fep_vkb_side_pane_ParamLimits

0xdceb,	// (0x0001d53a) fep_vkb_side_pane

0xdd27,	// (0x0001d576) fep_vkb_top_pane_ParamLimits

0xdd27,	// (0x0001d576) fep_vkb_top_pane

0x7403,	// (0x00016c52) fep_vkb_top_pane_g1_ParamLimits

0x7403,	// (0x00016c52) fep_vkb_top_pane_g1

0x7412,	// (0x00016c61) fep_vkb_top_pane_g2_ParamLimits

0x7412,	// (0x00016c61) fep_vkb_top_pane_g2

0x7421,	// (0x00016c70) fep_vkb_top_pane_g3_ParamLimits

0x7421,	// (0x00016c70) fep_vkb_top_pane_g3

0x0003,

0xfb4f,	// (0x0001f39e) fep_vkb_top_pane_g_ParamLimits

0xfb4f,	// (0x0001f39e) fep_vkb_top_pane_g

0x743f,	// (0x00016c8e) fep_vkb_top_text_pane_ParamLimits

0x743f,	// (0x00016c8e) fep_vkb_top_text_pane

0xdd63,	// (0x0001d5b2) fep_vkb_side_pane_g1_ParamLimits

0xdd63,	// (0x0001d5b2) fep_vkb_side_pane_g1

0x7499,	// (0x00016ce8) grid_vkb_side_pane_ParamLimits

0x7499,	// (0x00016ce8) grid_vkb_side_pane

0x10f9,	// (0x00010948) bg_popup_fep_shadow_pane_g2

0x1102,	// (0x00010951) bg_popup_fep_shadow_pane_g3

0x110a,	// (0x00010959) bg_popup_fep_shadow_pane_g4

0x1113,	// (0x00010962) bg_popup_fep_shadow_pane_g5

0x111d,	// (0x0001096c) bg_popup_fep_shadow_pane_g6

0x1125,	// (0x00010974) bg_popup_fep_shadow_pane_g7

0x2c35,	// (0x00012484) bg_popup_fep_shadow_pane_g8

0x7506,	// (0x00016d55) grid_vkb_keypad_number_pane_ParamLimits

0x7506,	// (0x00016d55) grid_vkb_keypad_number_pane

0x751a,	// (0x00016d69) grid_vkb_keypad_pane_ParamLimits

0x751a,	// (0x00016d69) grid_vkb_keypad_pane

0x7540,	// (0x00016d8f) fep_vkb_bottom_pane_g1_ParamLimits

0x7540,	// (0x00016d8f) fep_vkb_bottom_pane_g1

0x7569,	// (0x00016db8) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7569,	// (0x00016db8) grid_vkb_keypad_bottom_left_pane

0x757e,	// (0x00016dcd) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x757e,	// (0x00016dcd) grid_vkb_keypad_bottom_right_pane

0x7593,	// (0x00016de2) fep_vkb_top_text_pane_g1

0xddaa,	// (0x0001d5f9) fep_vkb_top_text_pane_t1

0xddbc,	// (0x0001d60b) cell_vkb_side_pane_ParamLimits

0xddbc,	// (0x0001d60b) cell_vkb_side_pane

0x71a7,	// (0x000169f6) cell_vkb_side_pane_g1

0x7602,	// (0x00016e51) cell_vkb_keypad_pane_ParamLimits

0x7602,	// (0x00016e51) cell_vkb_keypad_pane

0x768f,	// (0x00016ede) cell_vkb_keypad_pane_g1

0x0008,

0xfb7c,	// (0x0001f3cb) bg_popup_fep_shadow_pane_g

0x1137,	// (0x00010986) cell_hwr_side_pane_g1

0x1137,	// (0x00010986) cell_hwr_side_pane_g2

0x7699,	// (0x00016ee8) cell_vkb_keypad_pane_t1

0xddd2,	// (0x0001d621) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xddd2,	// (0x0001d621) cell_vkb_keypad_bottom_left_pane

0xdde7,	// (0x0001d636) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdde7,	// (0x0001d636) cell_vkb_keypad_bottom_right_pane

0x71a7,	// (0x000169f6) cell_vkb_keypad_bottom_left_pane_g1

0x71a7,	// (0x000169f6) cell_vkb_keypad_bottom_right_pane_g1

0x76fd,	// (0x00016f4c) cell_vkb_keypad_number_pane_ParamLimits

0x76fd,	// (0x00016f4c) cell_vkb_keypad_number_pane

0x771c,	// (0x00016f6b) cell_vkb_keypad_number_pane_g1

0x7726,	// (0x00016f75) cell_vkb_keypad_number_pane_g2

0x772f,	// (0x00016f7e) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb6e,	// (0x0001f3bd) cell_vkb_keypad_number_pane_g

0x7699,	// (0x00016ee8) cell_vkb_keypad_number_pane_t1

0x7759,	// (0x00016fa8) fep_vkb_candidate_pane_g1

0x0001,

0xfb8f,	// (0x0001f3de) cell_hwr_side_pane_g

0x7772,	// (0x00016fc1) cell_hwr_side_pane_t1

0x1141,	// (0x00010990) cell_hwr_side_pane_t1_copy1

0x114f,	// (0x0001099e) cell_hwr_candidate_pane_g1

0x117e,	// (0x000109cd) cell_hwr_candidate_pane_t1

0x71a7,	// (0x000169f6) cell_vkb_candidate_pane_g2

0x77b6,	// (0x00017005) cell_vkb_candidate_pane_t1

0x0ed4,	// (0x00010723) bg_popup_fep_shadow_pane_ParamLimits

0x0ed4,	// (0x00010723) bg_popup_fep_shadow_pane

0x0f8b,	// (0x000107da) bg_fep_hwr_top_pane_g4

0x723b,	// (0x00016a8a) bg_hwr_side_pane_g1_ParamLimits

0x723b,	// (0x00016a8a) bg_hwr_side_pane_g1

0xb6d8,	// (0x0001af27) cell_hwr_side_pane_ParamLimits

0xb6d8,	// (0x0001af27) cell_hwr_side_pane

0x103b,	// (0x0001088a) fep_hwr_write_pane_g1_ParamLimits

0x103b,	// (0x0001088a) fep_hwr_write_pane_g1

0x1048,	// (0x00010897) fep_hwr_write_pane_g2_ParamLimits

0x1048,	// (0x00010897) fep_hwr_write_pane_g2

0x1055,	// (0x000108a4) fep_hwr_write_pane_g3_ParamLimits

0x1055,	// (0x000108a4) fep_hwr_write_pane_g3

0xb6f8,	// (0x0001af47) fep_hwr_write_pane_g4_ParamLimits

0xb6f8,	// (0x0001af47) fep_hwr_write_pane_g4

0x0005,

0xfb3b,	// (0x0001f38a) fep_hwr_write_pane_g_ParamLimits

0xfb3b,	// (0x0001f38a) fep_hwr_write_pane_g

0x0f8b,	// (0x000107da) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0f8b,	// (0x000107da) bg_fep_hwr_candidate_pane_g2

0x1078,	// (0x000108c7) cell_hwr_candidate_pane_ParamLimits

0x1078,	// (0x000108c7) cell_hwr_candidate_pane

0x10ca,	// (0x00010919) fep_hwr_candidate_pane_g1_ParamLimits

0x729b,	// (0x00016aea) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x729b,	// (0x00016aea) bg_popup_fep_shadow_pane_cp2

0x7431,	// (0x00016c80) fep_vkb_top_pane_g4_ParamLimits

0x7431,	// (0x00016c80) fep_vkb_top_pane_g4

0x7477,	// (0x00016cc6) fep_vkb_side_pane_g2_ParamLimits

0x7477,	// (0x00016cc6) fep_vkb_side_pane_g2

0xc24b,	// (0x0001ba9a) list_setting_pane_t4_ParamLimits

0xc24b,	// (0x0001ba9a) list_setting_pane_t4

0xc2c7,	// (0x0001bb16) list_setting_number_pane_t5_ParamLimits

0xc2c7,	// (0x0001bb16) list_setting_number_pane_t5

0x32e5,	// (0x00012b34) list_double_heading_pane_cp2_ParamLimits

0x32e5,	// (0x00012b34) list_double_heading_pane_cp2

0x2b07,	// (0x00012356) list_double_heading_pane_g1_cp2_ParamLimits

0x2b07,	// (0x00012356) list_double_heading_pane_g1_cp2

0x2b13,	// (0x00012362) list_double_heading_pane_g2_cp2_ParamLimits

0x2b13,	// (0x00012362) list_double_heading_pane_g2_cp2

0x77c4,	// (0x00017013) list_double_heading_pane_t1_cp2_ParamLimits

0x77c4,	// (0x00017013) list_double_heading_pane_t1_cp2

0x77da,	// (0x00017029) list_double_heading_pane_t2_cp2_ParamLimits

0x77da,	// (0x00017029) list_double_heading_pane_t2_cp2

0x1b99,	// (0x000113e8) aid_value_unit2

0x022c,	// (0x0000fa7b) popup_preview_fixed_window

0x1f49,	// (0x00011798) bg_popup_preview_window_pane_cp02

0x77ec,	// (0x0001703b) list_preview_fixed_pane

0x7832,	// (0x00017081) list_empty_pane_fp_ParamLimits

0x7832,	// (0x00017081) list_empty_pane_fp

0x7832,	// (0x00017081) list_single_cale_day_pane_fp_ParamLimits

0x7832,	// (0x00017081) list_single_cale_day_pane_fp

0x7832,	// (0x00017081) list_single_graphic_heading_pane_fp_ParamLimits

0x7832,	// (0x00017081) list_single_graphic_heading_pane_fp

0x7832,	// (0x00017081) list_single_graphic_pane_fp_ParamLimits

0x7832,	// (0x00017081) list_single_graphic_pane_fp

0x7832,	// (0x00017081) list_single_heading_pane_fp_ParamLimits

0x7832,	// (0x00017081) list_single_heading_pane_fp

0x7832,	// (0x00017081) list_single_pane_fp_ParamLimits

0x7832,	// (0x00017081) list_single_pane_fp

0x784b,	// (0x0001709a) list_single_pane_fp_g1_ParamLimits

0x784b,	// (0x0001709a) list_single_pane_fp_g1

0x7857,	// (0x000170a6) list_single_pane_fp_g2_ParamLimits

0x7857,	// (0x000170a6) list_single_pane_fp_g2

0x7863,	// (0x000170b2) list_single_pane_fp_g3_ParamLimits

0x7863,	// (0x000170b2) list_single_pane_fp_g3

0x7877,	// (0x000170c6) list_single_pane_fp_g4_ParamLimits

0x7877,	// (0x000170c6) list_single_pane_fp_g4

0x0003,

0xfba2,	// (0x0001f3f1) list_single_pane_fp_g_ParamLimits

0xfba2,	// (0x0001f3f1) list_single_pane_fp_g

0x7883,	// (0x000170d2) list_single_pane_fp_t1_ParamLimits

0x7883,	// (0x000170d2) list_single_pane_fp_t1

0x789a,	// (0x000170e9) list_single_graphic_pane_fp_g1_ParamLimits

0x789a,	// (0x000170e9) list_single_graphic_pane_fp_g1

0x784b,	// (0x0001709a) list_single_graphic_pane_fp_g2_ParamLimits

0x784b,	// (0x0001709a) list_single_graphic_pane_fp_g2

0x7857,	// (0x000170a6) list_single_graphic_pane_fp_g3_ParamLimits

0x7857,	// (0x000170a6) list_single_graphic_pane_fp_g3

0x7863,	// (0x000170b2) list_single_graphic_pane_fp_g4_ParamLimits

0x7863,	// (0x000170b2) list_single_graphic_pane_fp_g4

0x7877,	// (0x000170c6) list_single_graphic_pane_fp_g5_ParamLimits

0x7877,	// (0x000170c6) list_single_graphic_pane_fp_g5

0x0004,

0xfbab,	// (0x0001f3fa) list_single_graphic_pane_fp_g_ParamLimits

0xfbab,	// (0x0001f3fa) list_single_graphic_pane_fp_g

0x78a6,	// (0x000170f5) list_single_graphic_pane_fp_t1_ParamLimits

0x78a6,	// (0x000170f5) list_single_graphic_pane_fp_t1

0x789a,	// (0x000170e9) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x789a,	// (0x000170e9) list_single_graphic_heading_pane_fp_g1

0x784b,	// (0x0001709a) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x784b,	// (0x0001709a) list_single_graphic_heading_pane_fp_g2

0x7857,	// (0x000170a6) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7857,	// (0x000170a6) list_single_graphic_heading_pane_fp_g3

0x7863,	// (0x000170b2) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7863,	// (0x000170b2) list_single_graphic_heading_pane_fp_g4

0x7877,	// (0x000170c6) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7877,	// (0x000170c6) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfbab,	// (0x0001f3fa) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfbab,	// (0x0001f3fa) list_single_graphic_heading_pane_fp_g

0x78bc,	// (0x0001710b) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x78bc,	// (0x0001710b) list_single_graphic_heading_pane_fp_t1

0x78d2,	// (0x00017121) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x78d2,	// (0x00017121) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbb6,	// (0x0001f405) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbb6,	// (0x0001f405) list_single_graphic_heading_pane_fp_t

0x78e4,	// (0x00017133) list_single_cale_day_pane_fp_g1_ParamLimits

0x78e4,	// (0x00017133) list_single_cale_day_pane_fp_g1

0x791c,	// (0x0001716b) list_single_cale_day_pane_fp_g2_ParamLimits

0x791c,	// (0x0001716b) list_single_cale_day_pane_fp_g2

0x7928,	// (0x00017177) list_single_cale_day_pane_fp_g3_ParamLimits

0x7928,	// (0x00017177) list_single_cale_day_pane_fp_g3

0x7950,	// (0x0001719f) list_single_cale_day_pane_fp_g4_ParamLimits

0x7950,	// (0x0001719f) list_single_cale_day_pane_fp_g4

0x7974,	// (0x000171c3) list_single_cale_day_pane_fp_g5_ParamLimits

0x7974,	// (0x000171c3) list_single_cale_day_pane_fp_g5

0x0004,

0xfbbb,	// (0x0001f40a) list_single_cale_day_pane_fp_g_ParamLimits

0xfbbb,	// (0x0001f40a) list_single_cale_day_pane_fp_g

0x7998,	// (0x000171e7) list_single_cale_day_pane_fp_t1_ParamLimits

0x7998,	// (0x000171e7) list_single_cale_day_pane_fp_t1

0x79be,	// (0x0001720d) list_single_cale_day_pane_fp_t2_ParamLimits

0x79be,	// (0x0001720d) list_single_cale_day_pane_fp_t2

0x79d7,	// (0x00017226) list_single_cale_day_pane_fp_t3_ParamLimits

0x79d7,	// (0x00017226) list_single_cale_day_pane_fp_t3

0x0002,

0xfbc6,	// (0x0001f415) list_single_cale_day_pane_fp_t_ParamLimits

0xfbc6,	// (0x0001f415) list_single_cale_day_pane_fp_t

0x784b,	// (0x0001709a) list_empty_pane_fp_g1_ParamLimits

0x784b,	// (0x0001709a) list_empty_pane_fp_g1

0x79f0,	// (0x0001723f) list_empty_pane_fp_t1

0x79fe,	// (0x0001724d) list_empty_pane_fp_t2

0x0001,

0xfbcd,	// (0x0001f41c) list_empty_pane_fp_t

0x784b,	// (0x0001709a) list_single_heading_pane_fp_g1_ParamLimits

0x784b,	// (0x0001709a) list_single_heading_pane_fp_g1

0x7857,	// (0x000170a6) list_single_heading_pane_fp_g2_ParamLimits

0x7857,	// (0x000170a6) list_single_heading_pane_fp_g2

0x7863,	// (0x000170b2) list_single_heading_pane_fp_g3_ParamLimits

0x7863,	// (0x000170b2) list_single_heading_pane_fp_g3

0x0002,

0xfbd2,	// (0x0001f421) list_single_heading_pane_fp_g_ParamLimits

0xfbd2,	// (0x0001f421) list_single_heading_pane_fp_g

0x7a0c,	// (0x0001725b) list_single_heading_pane_fp_t1_ParamLimits

0x7a0c,	// (0x0001725b) list_single_heading_pane_fp_t1

0x7a1e,	// (0x0001726d) list_single_heading_pane_fp_t2_ParamLimits

0x7a1e,	// (0x0001726d) list_single_heading_pane_fp_t2

0x0001,

0xfbd9,	// (0x0001f428) list_single_heading_pane_fp_t_ParamLimits

0xfbd9,	// (0x0001f428) list_single_heading_pane_fp_t

0x2e58,	// (0x000126a7) aid_size_cell_fast

0x1ebb,	// (0x0001170a) soft_indicator_pane_cp1_t1

0x2e95,	// (0x000126e4) cell_app_pane_cp2_ParamLimits

0x2e95,	// (0x000126e4) cell_app_pane_cp2

0x0ef6,	// (0x00010745) fep_hwr_candidate_drop_down_list_pane

0x10e4,	// (0x00010933) fep_hwr_candidate_pane_g3_ParamLimits

0x10e4,	// (0x00010933) fep_hwr_candidate_pane_g3

0xebab,	// (0x0001e3fa) fep_hwr_candidate_pane_g4_ParamLimits

0xebab,	// (0x0001e3fa) fep_hwr_candidate_pane_g4

0x0002,

0xfb48,	// (0x0001f397) fep_hwr_candidate_pane_g_ParamLimits

0xfb48,	// (0x0001f397) fep_hwr_candidate_pane_g

0x732b,	// (0x00016b7a) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x732b,	// (0x00016b7a) fep_vkb_candidate_drop_down_list_pane

0x7761,	// (0x00016fb0) fep_vkb_candidate_pane_g3

0x7769,	// (0x00016fb8) fep_vkb_candidate_pane_g4

0x0002,

0xfb75,	// (0x0001f3c4) fep_vkb_candidate_pane_g

0x114f,	// (0x0001099e) cell_hwr_candidate_pane_g1_ParamLimits

0x115d,	// (0x000109ac) cell_hwr_candidate_pane_g3_ParamLimits

0x115d,	// (0x000109ac) cell_hwr_candidate_pane_g3

0x93e1,	// (0x00018c30) cell_hwr_candidate_pane_g4_ParamLimits

0x93e1,	// (0x00018c30) cell_hwr_candidate_pane_g4

0x0002,

0xfb94,	// (0x0001f3e3) cell_hwr_candidate_pane_g_ParamLimits

0xfb94,	// (0x0001f3e3) cell_hwr_candidate_pane_g

0x7780,	// (0x00016fcf) cell_vkb_candidate_pane_g3_ParamLimits

0x7780,	// (0x00016fcf) cell_vkb_candidate_pane_g3

0x779b,	// (0x00016fea) cell_vkb_candidate_pane_g4_ParamLimits

0x779b,	// (0x00016fea) cell_vkb_candidate_pane_g4

0x7a34,	// (0x00017283) cell_app_pane_cp2_g1_ParamLimits

0x7a34,	// (0x00017283) cell_app_pane_cp2_g1

0x7a52,	// (0x000172a1) cell_app_pane_cp2_g2_ParamLimits

0x7a52,	// (0x000172a1) cell_app_pane_cp2_g2

0x0001,

0xfbde,	// (0x0001f42d) cell_app_pane_cp2_g_ParamLimits

0xfbde,	// (0x0001f42d) cell_app_pane_cp2_g

0x7a5e,	// (0x000172ad) cell_app_pane_cp2_t1_ParamLimits

0x7a5e,	// (0x000172ad) cell_app_pane_cp2_t1

0x2ae1,	// (0x00012330) grid_highlight_pane_cp1_ParamLimits

0x2ae1,	// (0x00012330) grid_highlight_pane_cp1

0x119c,	// (0x000109eb) cell_hwr_candidate_pane_cp1_ParamLimits

0x119c,	// (0x000109eb) cell_hwr_candidate_pane_cp1

0x114f,	// (0x0001099e) fep_hwr_candidate_drop_down_list_pane_g1

0x11c0,	// (0x00010a0f) fep_hwr_candidate_drop_down_list_pane_g2

0x11cd,	// (0x00010a1c) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbe3,	// (0x0001f432) fep_hwr_candidate_drop_down_list_pane_g

0x11da,	// (0x00010a29) fep_hwr_candidate_drop_down_list_scroll_pane

0x11e3,	// (0x00010a32) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x11e3,	// (0x00010a32) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x11f0,	// (0x00010a3f) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x11f0,	// (0x00010a3f) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x11fd,	// (0x00010a4c) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x11fd,	// (0x00010a4c) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x120a,	// (0x00010a59) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x120a,	// (0x00010a59) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1225,	// (0x00010a74) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1225,	// (0x00010a74) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1240,	// (0x00010a8f) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1240,	// (0x00010a8f) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x125b,	// (0x00010aaa) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x125b,	// (0x00010aaa) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1276,	// (0x00010ac5) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1276,	// (0x00010ac5) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbea,	// (0x0001f439) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbea,	// (0x0001f439) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7a70,	// (0x000172bf) cell_vkb_candidate_pane_cp1_ParamLimits

0x7a70,	// (0x000172bf) cell_vkb_candidate_pane_cp1

0x7431,	// (0x00016c80) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7431,	// (0x00016c80) fep_vkb_candidate_drop_down_list_pane_g1

0x7a96,	// (0x000172e5) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7a96,	// (0x000172e5) fep_vkb_candidate_drop_down_list_pane_g2

0x7aa3,	// (0x000172f2) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7aa3,	// (0x000172f2) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbfb,	// (0x0001f44a) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbfb,	// (0x0001f44a) fep_vkb_candidate_drop_down_list_pane_g

0x7ab0,	// (0x000172ff) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7ab0,	// (0x000172ff) fep_vkb_candidate_drop_down_list_scroll_pane

0x7abd,	// (0x0001730c) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7abd,	// (0x0001730c) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7aca,	// (0x00017319) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7aca,	// (0x00017319) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7ad6,	// (0x00017325) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7ad6,	// (0x00017325) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7ae2,	// (0x00017331) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7ae2,	// (0x00017331) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7b03,	// (0x00017352) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7b03,	// (0x00017352) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7b24,	// (0x00017373) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7b24,	// (0x00017373) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7b45,	// (0x00017394) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7b45,	// (0x00017394) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7b66,	// (0x000173b5) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7b66,	// (0x000173b5) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfc02,	// (0x0001f451) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfc02,	// (0x0001f451) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xbb52,	// (0x0001b3a1) title_pane_g1_ParamLimits

0xbb63,	// (0x0001b3b2) title_pane_g2_ParamLimits

0xf592,	// (0x0001ede1) title_pane_g_ParamLimits

0x32a3,	// (0x00012af2) aid_call2_pane

0x32ab,	// (0x00012afa) aid_call_pane

0x32b3,	// (0x00012b02) popup_clock_analogue_window_g1

0x32b3,	// (0x00012b02) popup_clock_analogue_window_g2

0x059e,	// (0x0000fded) popup_clock_analogue_window_g3

0x05a7,	// (0x0000fdf6) popup_clock_analogue_window_g4

0x1bbb,	// (0x0001140a) popup_clock_analogue_window_g5

0x0004,

0xf737,	// (0x0001ef86) popup_clock_analogue_window_g

0x05af,	// (0x0000fdfe) popup_clock_analogue_window_t1

0x05bd,	// (0x0000fe0c) clock_digital_number_pane_ParamLimits

0x05bd,	// (0x0000fe0c) clock_digital_number_pane

0x05c9,	// (0x0000fe18) clock_digital_number_pane_cp02_ParamLimits

0x05c9,	// (0x0000fe18) clock_digital_number_pane_cp02

0x05d5,	// (0x0000fe24) clock_digital_number_pane_cp03_ParamLimits

0x05d5,	// (0x0000fe24) clock_digital_number_pane_cp03

0x05e1,	// (0x0000fe30) clock_digital_number_pane_cp04_ParamLimits

0x05e1,	// (0x0000fe30) clock_digital_number_pane_cp04

0x05ed,	// (0x0000fe3c) clock_digital_separator_pane_ParamLimits

0x05ed,	// (0x0000fe3c) clock_digital_separator_pane

0x05f9,	// (0x0000fe48) popup_clock_digital_window_t1_ParamLimits

0x05f9,	// (0x0000fe48) popup_clock_digital_window_t1

0x1bbb,	// (0x0001140a) clock_digital_number_pane_g1

0x1bbb,	// (0x0001140a) clock_digital_number_pane_g2

0x0001,

0xf742,	// (0x0001ef91) clock_digital_number_pane_g

0x1bbb,	// (0x0001140a) clock_digital_separator_pane_g1

0x1bbb,	// (0x0001140a) clock_digital_separator_pane_g2

0x0001,

0xf742,	// (0x0001ef91) clock_digital_separator_pane_g

0xd00e,	// (0x0001c85d) aid_fill_nsta_ParamLimits

0xd13f,	// (0x0001c98e) indicator_nsta_pane_ParamLimits

0x45d6,	// (0x00013e25) popup_clock_analogue_window

0x45d6,	// (0x00013e25) popup_clock_digital_window

0x2e19,	// (0x00012668) grid_indicator_nsta_pane_ParamLimits

0x6ba8,	// (0x000163f7) clock_nsta_pane_t2

0x0001,

0xfad5,	// (0x0001f324) clock_nsta_pane_t

0x0562,	// (0x0000fdb1) aid_size_max_handle

0xb39f,	// (0x0001abee) aid_size_min_handle

0x392d,	// (0x0001317c) editor_scroll_pane

0x7b81,	// (0x000173d0) ex_editor_pane

0x2dc5,	// (0x00012614) scroll_pane_cp13

0x24e5,	// (0x00011d34) scroll_pane_cp14

0x32dd,	// (0x00012b2c) scroll_pane_cp36

0xc676,	// (0x0001bec5) list_single_graphic_hl_pane_cp2_ParamLimits

0xc676,	// (0x0001bec5) list_single_graphic_hl_pane_cp2

0xd8f4,	// (0x0001d143) list_single_graphic_hl_pane_ParamLimits

0xd8f4,	// (0x0001d143) list_single_graphic_hl_pane

0x7b89,	// (0x000173d8) aid_size_min_hl_cp1

0x7b92,	// (0x000173e1) list_highlight_pane_cp34_ParamLimits

0x7b92,	// (0x000173e1) list_highlight_pane_cp34

0x7ba3,	// (0x000173f2) list_single_graphic_hl_pane_g1_ParamLimits

0x7ba3,	// (0x000173f2) list_single_graphic_hl_pane_g1

0x24ed,	// (0x00011d3c) list_single_graphic_hl_pane_g2_ParamLimits

0x24ed,	// (0x00011d3c) list_single_graphic_hl_pane_g2

0x24ed,	// (0x00011d3c) list_single_graphic_hl_pane_g3_ParamLimits

0x24ed,	// (0x00011d3c) list_single_graphic_hl_pane_g3

0x24f9,	// (0x00011d48) list_single_graphic_hl_pane_g4_ParamLimits

0x24f9,	// (0x00011d48) list_single_graphic_hl_pane_g4

0x7c16,	// (0x00017465) list_single_graphic_hl_pane_g5_ParamLimits

0x7c16,	// (0x00017465) list_single_graphic_hl_pane_g5

0x0004,

0xfc13,	// (0x0001f462) list_single_graphic_hl_pane_g_ParamLimits

0xfc13,	// (0x0001f462) list_single_graphic_hl_pane_g

0xde02,	// (0x0001d651) list_single_graphic_hl_pane_t1_ParamLimits

0xde02,	// (0x0001d651) list_single_graphic_hl_pane_t1

0x7be6,	// (0x00017435) aid_size_min_hl_cp2

0x7bef,	// (0x0001743e) list_highlight_pane_cp34_cp2_ParamLimits

0x7bef,	// (0x0001743e) list_highlight_pane_cp34_cp2

0x7ba3,	// (0x000173f2) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7ba3,	// (0x000173f2) list_single_graphic_hl_pane_g1_cp2

0x7bfc,	// (0x0001744b) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7bfc,	// (0x0001744b) list_single_graphic_hl_pane_g2_cp2

0x7c08,	// (0x00017457) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7c08,	// (0x00017457) list_single_graphic_hl_pane_g3_cp2

0x24f9,	// (0x00011d48) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x24f9,	// (0x00011d48) list_single_graphic_hl_pane_g4_cp2

0x7c16,	// (0x00017465) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7c16,	// (0x00017465) list_single_graphic_hl_pane_g5_cp2

0xb3d1,	// (0x0001ac20) control_pane_g4_ParamLimits

0xb3d1,	// (0x0001ac20) control_pane_g4

0x3cbb,	// (0x0001350a) bg_popup_sub_pane_cp10_ParamLimits

0x71b1,	// (0x00016a00) list_choice_list_pane_ParamLimits

0x71c0,	// (0x00016a0f) scroll_pane_cp23

0x1f49,	// (0x00011798) bg_popup_preview_window_pane_cp02_ParamLimits

0x77ec,	// (0x0001703b) list_preview_fixed_pane_ParamLimits

0x7802,	// (0x00017051) list_preview_fixed_pane_cp_ParamLimits

0x7802,	// (0x00017051) list_preview_fixed_pane_cp

0x780e,	// (0x0001705d) popup_preview_fixed_window_g1_ParamLimits

0x780e,	// (0x0001705d) popup_preview_fixed_window_g1

0x781a,	// (0x00017069) popup_preview_fixed_window_g2_ParamLimits

0x781a,	// (0x00017069) popup_preview_fixed_window_g2

0x0002,

0xfb9b,	// (0x0001f3ea) popup_preview_fixed_window_g_ParamLimits

0xfb9b,	// (0x0001f3ea) popup_preview_fixed_window_g

0x04d4,	// (0x0000fd23) aid_navi_side_left_pane_ParamLimits

0x04e9,	// (0x0000fd38) aid_navi_side_right_pane_ParamLimits

0x0501,	// (0x0000fd50) navi_icon_pane_stacon_ParamLimits

0x0515,	// (0x0000fd64) navi_navi_pane_stacon_ParamLimits

0x0501,	// (0x0000fd50) navi_text_pane_stacon_ParamLimits

0x1bb1,	// (0x00011400) main_text_info_pane

0x7c40,	// (0x0001748f) listscroll_text_info_pane

0x7c48,	// (0x00017497) list_text_info_pane_ParamLimits

0x7c48,	// (0x00017497) list_text_info_pane

0x7c57,	// (0x000174a6) scroll_pane_cp24_ParamLimits

0x7c57,	// (0x000174a6) scroll_pane_cp24

0xde18,	// (0x0001d667) list_text_info_pane_t1_ParamLimits

0xde18,	// (0x0001d667) list_text_info_pane_t1

0xc90b,	// (0x0001c15a) popup_fast_swap2_window_ParamLimits

0xc90b,	// (0x0001c15a) popup_fast_swap2_window

0x7c9a,	// (0x000174e9) aid_size_cell_fast2

0x1bb1,	// (0x00011400) bg_popup_window_pane_cp17

0x4d10,	// (0x0001455f) heading_pane_cp2

0x21a9,	// (0x000119f8) listscroll_fast2_pane

0x7ca4,	// (0x000174f3) grid_fast2_pane

0x7cae,	// (0x000174fd) listscroll_fast2_pane_g1

0x7cb8,	// (0x00017507) listscroll_fast2_pane_g2

0x0001,

0xfc1e,	// (0x0001f46d) listscroll_fast2_pane_g

0x2dc5,	// (0x00012614) scroll_pane_cp26

0x7cc2,	// (0x00017511) cell_fast2_pane_ParamLimits

0x7cc2,	// (0x00017511) cell_fast2_pane

0x7cd9,	// (0x00017528) cell_fast2_pane_g1

0x7ce2,	// (0x00017531) cell_fast2_pane_g2

0x7ceb,	// (0x0001753a) cell_fast2_pane_g3

0x0002,

0xfc23,	// (0x0001f472) cell_fast2_pane_g

0x22a2,	// (0x00011af1) grid_highlight_pane_cp9

0x22b7,	// (0x00011b06) main_eswt_pane_ParamLimits

0x22b7,	// (0x00011b06) main_eswt_pane

0x7c6c,	// (0x000174bb) list_single_text_info_pane

0x7cf3,	// (0x00017542) eswt_ctrl_button_pane

0x7cf3,	// (0x00017542) eswt_ctrl_canvas_pane

0x7cfb,	// (0x0001754a) eswt_ctrl_combo_pane

0x7cf3,	// (0x00017542) eswt_ctrl_default_pane

0x7cf3,	// (0x00017542) eswt_ctrl_label_pane

0x7d03,	// (0x00017552) eswt_ctrl_wait_pane

0x7d0b,	// (0x0001755a) eswt_shell_pane

0x1bb1,	// (0x00011400) listscroll_eswt_app_pane

0x7d2b,	// (0x0001757a) popup_eswt_tasktip_window_ParamLimits

0x7d2b,	// (0x0001757a) popup_eswt_tasktip_window

0x4949,	// (0x00014198) bg_popup_window_pane_cp18

0x7d3c,	// (0x0001758b) eswt_control_pane_g1_ParamLimits

0x7d3c,	// (0x0001758b) eswt_control_pane_g1

0x7d49,	// (0x00017598) eswt_control_pane_g2_ParamLimits

0x7d49,	// (0x00017598) eswt_control_pane_g2

0x7d56,	// (0x000175a5) eswt_control_pane_g3_ParamLimits

0x7d56,	// (0x000175a5) eswt_control_pane_g3

0x7d63,	// (0x000175b2) eswt_control_pane_g4_ParamLimits

0x7d63,	// (0x000175b2) eswt_control_pane_g4

0x0003,

0xfc2a,	// (0x0001f479) eswt_control_pane_g_ParamLimits

0xfc2a,	// (0x0001f479) eswt_control_pane_g

0x2ae1,	// (0x00012330) bg_button_pane_ParamLimits

0x2ae1,	// (0x00012330) bg_button_pane

0x22b7,	// (0x00011b06) common_borders_pane_copy2_ParamLimits

0x22b7,	// (0x00011b06) common_borders_pane_copy2

0x7d70,	// (0x000175bf) control_button_pane_g1_ParamLimits

0x7d70,	// (0x000175bf) control_button_pane_g1

0x7d7c,	// (0x000175cb) control_button_pane_g2_ParamLimits

0x7d7c,	// (0x000175cb) control_button_pane_g2

0x7d88,	// (0x000175d7) control_button_pane_g3_ParamLimits

0x7d88,	// (0x000175d7) control_button_pane_g3

0x0002,

0xfc33,	// (0x0001f482) control_button_pane_g_ParamLimits

0xfc33,	// (0x0001f482) control_button_pane_g

0x7d9c,	// (0x000175eb) control_button_pane_t1

0x7daa,	// (0x000175f9) control_button_pane_t2

0x0001,

0xfc3a,	// (0x0001f489) control_button_pane_t

0x482d,	// (0x0001407c) bg_button_pane_g1

0x483d,	// (0x0001408c) bg_button_pane_g2

0x4835,	// (0x00014084) bg_button_pane_g3

0x484d,	// (0x0001409c) bg_button_pane_g4

0x4845,	// (0x00014094) bg_button_pane_g5

0x4855,	// (0x000140a4) bg_button_pane_g6

0x485d,	// (0x000140ac) bg_button_pane_g7

0x486d,	// (0x000140bc) bg_button_pane_g8

0x4865,	// (0x000140b4) bg_button_pane_g9

0x0008,

0xf895,	// (0x0001f0e4) bg_button_pane_g

0x716c,	// (0x000169bb) common_borders_pane_ParamLimits

0x716c,	// (0x000169bb) common_borders_pane

0x7d3c,	// (0x0001758b) eswt_control_pane_g1_copy1_ParamLimits

0x7d3c,	// (0x0001758b) eswt_control_pane_g1_copy1

0x7d49,	// (0x00017598) eswt_control_pane_g2_copy1_ParamLimits

0x7d49,	// (0x00017598) eswt_control_pane_g2_copy1

0x7d56,	// (0x000175a5) eswt_control_pane_g3_copy1_ParamLimits

0x7d56,	// (0x000175a5) eswt_control_pane_g3_copy1

0x7d63,	// (0x000175b2) eswt_control_pane_g4_copy1_ParamLimits

0x7d63,	// (0x000175b2) eswt_control_pane_g4_copy1

0x71a7,	// (0x000169f6) bg_eswt_ctrl_canvas_pane_g1

0x716c,	// (0x000169bb) common_borders_pane_cp2_ParamLimits

0x716c,	// (0x000169bb) common_borders_pane_cp2

0x716c,	// (0x000169bb) common_borders_pane_cp3_ParamLimits

0x716c,	// (0x000169bb) common_borders_pane_cp3

0x7db8,	// (0x00017607) separator_horizontal_pane

0x7dc0,	// (0x0001760f) separator_vertical_pane

0x7d3c,	// (0x0001758b) eswt_control_pane_g1_copy2_ParamLimits

0x7d3c,	// (0x0001758b) eswt_control_pane_g1_copy2

0x7d49,	// (0x00017598) eswt_control_pane_g2_copy2_ParamLimits

0x7d49,	// (0x00017598) eswt_control_pane_g2_copy2

0x7d56,	// (0x000175a5) eswt_control_pane_g3_copy2_ParamLimits

0x7d56,	// (0x000175a5) eswt_control_pane_g3_copy2

0x7d63,	// (0x000175b2) eswt_control_pane_g4_copy2_ParamLimits

0x7d63,	// (0x000175b2) eswt_control_pane_g4_copy2

0x1bb1,	// (0x00011400) common_borders_pane_cp4

0x7dc9,	// (0x00017618) separator_horizontal_pane_g1

0x7dd2,	// (0x00017621) separator_horizontal_pane_g2

0x7ddb,	// (0x0001762a) separator_horizontal_pane_g3

0x0002,

0xfc3f,	// (0x0001f48e) separator_horizontal_pane_g

0x7d3c,	// (0x0001758b) eswt_control_pane_g1_copy3_ParamLimits

0x7d3c,	// (0x0001758b) eswt_control_pane_g1_copy3

0x7d49,	// (0x00017598) eswt_control_pane_g2_copy3_ParamLimits

0x7d49,	// (0x00017598) eswt_control_pane_g2_copy3

0x7d56,	// (0x000175a5) eswt_control_pane_g3_copy3_ParamLimits

0x7d56,	// (0x000175a5) eswt_control_pane_g3_copy3

0x7d63,	// (0x000175b2) eswt_control_pane_g4_copy3_ParamLimits

0x7d63,	// (0x000175b2) eswt_control_pane_g4_copy3

0x1bb1,	// (0x00011400) common_borders_pane_cp5

0x7de4,	// (0x00017633) separator_vertical_pane_g1

0x7ded,	// (0x0001763c) separator_vertical_pane_g2

0x7df6,	// (0x00017645) separator_vertical_pane_g3

0x0002,

0xfc46,	// (0x0001f495) separator_vertical_pane_g

0x7d3c,	// (0x0001758b) eswt_control_pane_g1_copy4_ParamLimits

0x7d3c,	// (0x0001758b) eswt_control_pane_g1_copy4

0x7d49,	// (0x00017598) eswt_control_pane_g2_copy4_ParamLimits

0x7d49,	// (0x00017598) eswt_control_pane_g2_copy4

0x7d56,	// (0x000175a5) eswt_control_pane_g3_copy4_ParamLimits

0x7d56,	// (0x000175a5) eswt_control_pane_g3_copy4

0x7d63,	// (0x000175b2) eswt_control_pane_g4_copy4_ParamLimits

0x7d63,	// (0x000175b2) eswt_control_pane_g4_copy4

0xde3a,	// (0x0001d689) eswt_ctrl_combo_button_pane

0xde42,	// (0x0001d691) eswt_ctrl_input_pane

0xde4a,	// (0x0001d699) popup_choice_list_window_cp70

0xde52,	// (0x0001d6a1) eswt_ctrl_input_pane_t1

0x1bb1,	// (0x00011400) input_focus_pane_cp70

0x716c,	// (0x000169bb) bg_button_pane_cp70_ParamLimits

0x716c,	// (0x000169bb) bg_button_pane_cp70

0xde60,	// (0x0001d6af) eswt_ctrl_combo_button_pane_g1

0x7e2d,	// (0x0001767c) wait_bar_pane_cp70

0x4949,	// (0x00014198) bg_popup_window_pane_cp70_ParamLimits

0x4949,	// (0x00014198) bg_popup_window_pane_cp70

0x7e35,	// (0x00017684) popup_eswt_tasktip_window_t1

0x7e4b,	// (0x0001769a) wait_bar_pane_cp71_ParamLimits

0x7e4b,	// (0x0001769a) wait_bar_pane_cp71

0x7e57,	// (0x000176a6) grid_eswt_app_pane

0x30e7,	// (0x00012936) scroll_pane_cp70

0xde68,	// (0x0001d6b7) cell_eswt_app_pane_ParamLimits

0xde68,	// (0x0001d6b7) cell_eswt_app_pane

0xde9a,	// (0x0001d6e9) cell_eswt_app_pane_g1_ParamLimits

0xde9a,	// (0x0001d6e9) cell_eswt_app_pane_g1

0xdec9,	// (0x0001d718) cell_eswt_app_pane_g2_ParamLimits

0xdec9,	// (0x0001d718) cell_eswt_app_pane_g2

0x0001,

0xfc4d,	// (0x0001f49c) cell_eswt_app_pane_g_ParamLimits

0xfc4d,	// (0x0001f49c) cell_eswt_app_pane_g

0xdef2,	// (0x0001d741) cell_eswt_app_pane_t1_ParamLimits

0xdef2,	// (0x0001d741) cell_eswt_app_pane_t1

0x7f1c,	// (0x0001776b) grid_highlight_pane_cp70_ParamLimits

0x7f1c,	// (0x0001776b) grid_highlight_pane_cp70

0x5e00,	// (0x0001564f) set_content_pane_g1

0x3bdd,	// (0x0001342c) status_small_volume_pane

0x1291,	// (0x00010ae0) status_small_volume_pane_g1

0x1299,	// (0x00010ae8) volume_small2_pane

0x12a2,	// (0x00010af1) volume_small2_pane_g1

0x12ab,	// (0x00010afa) volume_small2_pane_g2

0x12b4,	// (0x00010b03) volume_small2_pane_g3

0x12bd,	// (0x00010b0c) volume_small2_pane_g4

0x12c6,	// (0x00010b15) volume_small2_pane_g5

0x12cf,	// (0x00010b1e) volume_small2_pane_g6

0x12d8,	// (0x00010b27) volume_small2_pane_g7

0x12e1,	// (0x00010b30) volume_small2_pane_g8

0x12ea,	// (0x00010b39) volume_small2_pane_g9

0x12f3,	// (0x00010b42) volume_small2_pane_g10

0x0009,

0xfc52,	// (0x0001f4a1) volume_small2_pane_g

0x7593,	// (0x00016de2) fep_vkb_top_text_pane_g1_ParamLimits

0xddaa,	// (0x0001d5f9) fep_vkb_top_text_pane_t1_ParamLimits

0x7826,	// (0x00017075) popup_preview_fixed_window_g3_ParamLimits

0x7826,	// (0x00017075) popup_preview_fixed_window_g3

0xcfa1,	// (0x0001c7f0) popup_toolbar_trans_pane

0xd713,	// (0x0001cf62) aid_height_set_list_ParamLimits

0x5cb6,	// (0x00015505) aid_size_parent_ParamLimits

0x3cbb,	// (0x0001350a) list_highlight_pane_cp2_ParamLimits

0x5e00,	// (0x0001564f) set_content_pane_g1_ParamLimits

0xd908,	// (0x0001d157) list_single_image_pane_ParamLimits

0xd908,	// (0x0001d157) list_single_image_pane

0xdf24,	// (0x0001d773) aid_size_cell_image_ParamLimits

0xdf24,	// (0x0001d773) aid_size_cell_image

0xdf31,	// (0x0001d780) grid_single_image_pane_ParamLimits

0xdf31,	// (0x0001d780) grid_single_image_pane

0x2b07,	// (0x00012356) list_single_image_pane_g1_ParamLimits

0x2b07,	// (0x00012356) list_single_image_pane_g1

0x2b13,	// (0x00012362) list_single_image_pane_g2_ParamLimits

0x2b13,	// (0x00012362) list_single_image_pane_g2

0x0001,

0xfc67,	// (0x0001f4b6) list_single_image_pane_g_ParamLimits

0xfc67,	// (0x0001f4b6) list_single_image_pane_g

0x7f43,	// (0x00017792) list_single_image_pane_t1_ParamLimits

0x7f43,	// (0x00017792) list_single_image_pane_t1

0xdf3f,	// (0x0001d78e) cell_image_list_pane_ParamLimits

0xdf3f,	// (0x0001d78e) cell_image_list_pane

0xdf59,	// (0x0001d7a8) cell_image_list_pane_g1

0xdf62,	// (0x0001d7b1) cell_image_list_pane_g2

0x0001,

0xfc6c,	// (0x0001f4bb) cell_image_list_pane_g

0x7f81,	// (0x000177d0) aid_size_cell_tb_trans_pane

0x2ae1,	// (0x00012330) bg_tb_trans_pane

0x7f93,	// (0x000177e2) grid_tb_trans_pane

0x482d,	// (0x0001407c) bg_tb_trans_pane_g1

0x483d,	// (0x0001408c) bg_tb_trans_pane_g2

0x4835,	// (0x00014084) bg_tb_trans_pane_g3

0x484d,	// (0x0001409c) bg_tb_trans_pane_g4

0x4845,	// (0x00014094) bg_tb_trans_pane_g5

0x486d,	// (0x000140bc) bg_tb_trans_pane_g6

0x4865,	// (0x000140b4) bg_tb_trans_pane_g7

0x4855,	// (0x000140a4) bg_tb_trans_pane_g8

0x485d,	// (0x000140ac) bg_tb_trans_pane_g9

0x0008,

0xfc71,	// (0x0001f4c0) bg_tb_trans_pane_g

0x7fa7,	// (0x000177f6) cell_toolbar_trans_pane_ParamLimits

0x7fa7,	// (0x000177f6) cell_toolbar_trans_pane

0x71a7,	// (0x000169f6) cell_toolbar_trans_pane_g1

0xdb3a,	// (0x0001d389) list_form2_midp_pane_t1

0xdb48,	// (0x0001d397) list_form2_midp_pane_t2

0x0001,

0xfb0e,	// (0x0001f35d) list_form2_midp_pane_t

0x6d8e,	// (0x000165dd) scroll_pane_cp51_ParamLimits

0x6fab,	// (0x000167fa) form2_midp_wait_pane_g1

0x6fb4,	// (0x00016803) form2_midp_wait_pane_g2

0x6fbd,	// (0x0001680c) form2_midp_wait_pane_g3

0x0002,

0xfb23,	// (0x0001f372) form2_midp_wait_pane_g

0x1ca5,	// (0x000114f4) list_highlight_pane_cp21_ParamLimits

0x7001,	// (0x00016850) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7010,	// (0x0001685f) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5ee3,	// (0x00015732) list_single_2graphic_im_pane_ParamLimits

0x5ee3,	// (0x00015732) list_single_2graphic_im_pane

0xdf6b,	// (0x0001d7ba) list_single_2graphic_im_pane_g1_ParamLimits

0xdf6b,	// (0x0001d7ba) list_single_2graphic_im_pane_g1

0xdf7c,	// (0x0001d7cb) list_single_2graphic_im_pane_g2_ParamLimits

0xdf7c,	// (0x0001d7cb) list_single_2graphic_im_pane_g2

0xdf88,	// (0x0001d7d7) list_single_2graphic_im_pane_g3_ParamLimits

0xdf88,	// (0x0001d7d7) list_single_2graphic_im_pane_g3

0x0003,

0xfc84,	// (0x0001f4d3) list_single_2graphic_im_pane_g_ParamLimits

0xfc84,	// (0x0001f4d3) list_single_2graphic_im_pane_g

0xdf9c,	// (0x0001d7eb) list_single_2graphic_im_pane_t1_ParamLimits

0xdf9c,	// (0x0001d7eb) list_single_2graphic_im_pane_t1

0x7832,	// (0x00017081) list_single_graphic_2heading_pane_fp_ParamLimits

0x7832,	// (0x00017081) list_single_graphic_2heading_pane_fp

0x789a,	// (0x000170e9) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x789a,	// (0x000170e9) list_single_graphic_2heading_pane_fp_g1

0x784b,	// (0x0001709a) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x784b,	// (0x0001709a) list_single_graphic_2heading_pane_fp_g2

0x7857,	// (0x000170a6) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7857,	// (0x000170a6) list_single_graphic_2heading_pane_fp_g3

0x7863,	// (0x000170b2) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7863,	// (0x000170b2) list_single_graphic_2heading_pane_fp_g4

0x7877,	// (0x000170c6) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7877,	// (0x000170c6) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfbab,	// (0x0001f3fa) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfbab,	// (0x0001f3fa) list_single_graphic_2heading_pane_fp_g

0x803b,	// (0x0001788a) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x803b,	// (0x0001788a) list_single_graphic_2heading_pane_fp_t1

0x78d2,	// (0x00017121) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x78d2,	// (0x00017121) list_single_graphic_2heading_pane_fp_t2

0x8051,	// (0x000178a0) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x8051,	// (0x000178a0) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc8d,	// (0x0001f4dc) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc8d,	// (0x0001f4dc) list_single_graphic_2heading_pane_fp_t

0x7247,	// (0x00016a96) fep_hwr_write_pane_g5_ParamLimits

0x7247,	// (0x00016a96) fep_hwr_write_pane_g5

0x7253,	// (0x00016aa2) fep_hwr_write_pane_g6_ParamLimits

0x7253,	// (0x00016aa2) fep_hwr_write_pane_g6

0x7d0b,	// (0x0001755a) eswt_shell_pane_ParamLimits

0x4949,	// (0x00014198) bg_popup_window_pane_cp18_ParamLimits

0x5bd4,	// (0x00015423) heading_pane_cp70

0x7e35,	// (0x00017684) popup_eswt_tasktip_window_t1_ParamLimits

0xd064,	// (0x0001c8b3) aid_touch_tab_arrow_left

0xd07a,	// (0x0001c8c9) aid_touch_tab_arrow_right

0xbb7b,	// (0x0001b3ca) title_pane_g3_ParamLimits

0xbb7b,	// (0x0001b3ca) title_pane_g3

0x29b0,	// (0x000121ff) set_value_pane_g1

0xcfa1,	// (0x0001c7f0) popup_toolbar_trans_pane_ParamLimits

0x7f81,	// (0x000177d0) aid_size_cell_tb_trans_pane_ParamLimits

0x2ae1,	// (0x00012330) bg_tb_trans_pane_ParamLimits

0x7f93,	// (0x000177e2) grid_tb_trans_pane_ParamLimits

0x1f49,	// (0x00011798) cont_note_pane_ParamLimits

0x1f49,	// (0x00011798) cont_note_pane

0x22b7,	// (0x00011b06) cont_snote2_single_text_pane_ParamLimits

0x22b7,	// (0x00011b06) cont_snote2_single_text_pane

0x22b7,	// (0x00011b06) cont_snote2_single_graphic_pane_ParamLimits

0x22b7,	// (0x00011b06) cont_snote2_single_graphic_pane

0x4efb,	// (0x0001474a) cont_note_wait_pane_ParamLimits

0x4efb,	// (0x0001474a) cont_note_wait_pane

0x4efb,	// (0x0001474a) cont_note_image_pane_ParamLimits

0x4efb,	// (0x0001474a) cont_note_image_pane

0x8067,	// (0x000178b6) popup_note2_window_g1_ParamLimits

0x8067,	// (0x000178b6) popup_note2_window_g1

0x8098,	// (0x000178e7) popup_note2_window_t1_ParamLimits

0x8098,	// (0x000178e7) popup_note2_window_t1

0x80dd,	// (0x0001792c) popup_note2_window_t2_ParamLimits

0x80dd,	// (0x0001792c) popup_note2_window_t2

0x8122,	// (0x00017971) popup_note2_window_t3_ParamLimits

0x8122,	// (0x00017971) popup_note2_window_t3

0x8167,	// (0x000179b6) popup_note2_window_t4_ParamLimits

0x8167,	// (0x000179b6) popup_note2_window_t4

0x1fcd,	// (0x0001181c) popup_note2_window_t5_ParamLimits

0x1fcd,	// (0x0001181c) popup_note2_window_t5

0x0004,

0xfc99,	// (0x0001f4e8) popup_note2_window_t_ParamLimits

0xfc99,	// (0x0001f4e8) popup_note2_window_t

0x8196,	// (0x000179e5) popup_note2_image_window_g1_ParamLimits

0x8196,	// (0x000179e5) popup_note2_image_window_g1

0x81a2,	// (0x000179f1) popup_note2_image_window_g2_ParamLimits

0x81a2,	// (0x000179f1) popup_note2_image_window_g2

0x0001,

0xfca4,	// (0x0001f4f3) popup_note2_image_window_g_ParamLimits

0xfca4,	// (0x0001f4f3) popup_note2_image_window_g

0x81b4,	// (0x00017a03) popup_note2_image_window_t1_ParamLimits

0x81b4,	// (0x00017a03) popup_note2_image_window_t1

0x81cc,	// (0x00017a1b) popup_note2_image_window_t2_ParamLimits

0x81cc,	// (0x00017a1b) popup_note2_image_window_t2

0x81e4,	// (0x00017a33) popup_note2_image_window_t3_ParamLimits

0x81e4,	// (0x00017a33) popup_note2_image_window_t3

0x0002,

0xfca9,	// (0x0001f4f8) popup_note2_image_window_t_ParamLimits

0xfca9,	// (0x0001f4f8) popup_note2_image_window_t

0x4f09,	// (0x00014758) popup_note2_wait_window_g1_ParamLimits

0x4f09,	// (0x00014758) popup_note2_wait_window_g1

0x8200,	// (0x00017a4f) popup_note2_wait_window_g2_ParamLimits

0x8200,	// (0x00017a4f) popup_note2_wait_window_g2

0x4f21,	// (0x00014770) popup_note2_wait_window_g3_ParamLimits

0x4f21,	// (0x00014770) popup_note2_wait_window_g3

0x0002,

0xfcb0,	// (0x0001f4ff) popup_note2_wait_window_g_ParamLimits

0xfcb0,	// (0x0001f4ff) popup_note2_wait_window_g

0x820c,	// (0x00017a5b) popup_note2_wait_window_t1_ParamLimits

0x820c,	// (0x00017a5b) popup_note2_wait_window_t1

0x822a,	// (0x00017a79) popup_note2_wait_window_t2_ParamLimits

0x822a,	// (0x00017a79) popup_note2_wait_window_t2

0x8248,	// (0x00017a97) popup_note2_wait_window_t3_ParamLimits

0x8248,	// (0x00017a97) popup_note2_wait_window_t3

0x825a,	// (0x00017aa9) popup_note2_wait_window_t4_ParamLimits

0x825a,	// (0x00017aa9) popup_note2_wait_window_t4

0x0003,

0xfcb7,	// (0x0001f506) popup_note2_wait_window_t_ParamLimits

0xfcb7,	// (0x0001f506) popup_note2_wait_window_t

0x826c,	// (0x00017abb) wait_bar2_pane_ParamLimits

0x826c,	// (0x00017abb) wait_bar2_pane

0x8284,	// (0x00017ad3) popup_snote2_single_text_window_g1_ParamLimits

0x8284,	// (0x00017ad3) popup_snote2_single_text_window_g1

0x82ac,	// (0x00017afb) popup_snote2_single_text_window_t1_ParamLimits

0x82ac,	// (0x00017afb) popup_snote2_single_text_window_t1

0x82f8,	// (0x00017b47) popup_snote2_single_text_window_t2_ParamLimits

0x82f8,	// (0x00017b47) popup_snote2_single_text_window_t2

0x8344,	// (0x00017b93) popup_snote2_single_text_window_t3_ParamLimits

0x8344,	// (0x00017b93) popup_snote2_single_text_window_t3

0x8385,	// (0x00017bd4) popup_snote2_single_text_window_t4_ParamLimits

0x8385,	// (0x00017bd4) popup_snote2_single_text_window_t4

0x83bb,	// (0x00017c0a) popup_snote2_single_text_window_t5_ParamLimits

0x83bb,	// (0x00017c0a) popup_snote2_single_text_window_t5

0x0004,

0xfcc0,	// (0x0001f50f) popup_snote2_single_text_window_t_ParamLimits

0xfcc0,	// (0x0001f50f) popup_snote2_single_text_window_t

0x83e6,	// (0x00017c35) popup_snote2_single_graphic_window_g1_ParamLimits

0x83e6,	// (0x00017c35) popup_snote2_single_graphic_window_g1

0x840e,	// (0x00017c5d) popup_snote2_single_graphic_window_g2_ParamLimits

0x840e,	// (0x00017c5d) popup_snote2_single_graphic_window_g2

0x0001,

0xfccb,	// (0x0001f51a) popup_snote2_single_graphic_window_g_ParamLimits

0xfccb,	// (0x0001f51a) popup_snote2_single_graphic_window_g

0x8436,	// (0x00017c85) popup_snote2_single_graphic_window_t1_ParamLimits

0x8436,	// (0x00017c85) popup_snote2_single_graphic_window_t1

0x8482,	// (0x00017cd1) popup_snote2_single_graphic_window_t2_ParamLimits

0x8482,	// (0x00017cd1) popup_snote2_single_graphic_window_t2

0x8344,	// (0x00017b93) popup_snote2_single_graphic_window_t3_ParamLimits

0x8344,	// (0x00017b93) popup_snote2_single_graphic_window_t3

0x8385,	// (0x00017bd4) popup_snote2_single_graphic_window_t4_ParamLimits

0x8385,	// (0x00017bd4) popup_snote2_single_graphic_window_t4

0x83bb,	// (0x00017c0a) popup_snote2_single_graphic_window_t5_ParamLimits

0x83bb,	// (0x00017c0a) popup_snote2_single_graphic_window_t5

0x0004,

0xfcd0,	// (0x0001f51f) popup_snote2_single_graphic_window_t_ParamLimits

0xfcd0,	// (0x0001f51f) popup_snote2_single_graphic_window_t

0x6c38,	// (0x00016487) clock_nsta_pane_cp2_t1

0x6c38,	// (0x00016487) clock_nsta_pane_cp2_t2

0x0001,

0xfae4,	// (0x0001f333) clock_nsta_pane_cp2_t

0x2afb,	// (0x0001234a) form_field_data_wide_pane_g1_ParamLimits

0x2b07,	// (0x00012356) form_field_data_wide_pane_g2_ParamLimits

0x2b07,	// (0x00012356) form_field_data_wide_pane_g2

0x2b13,	// (0x00012362) form_field_data_wide_pane_g3_ParamLimits

0x2b13,	// (0x00012362) form_field_data_wide_pane_g3

0x0002,

0xf6ba,	// (0x0001ef09) form_field_data_wide_pane_g_ParamLimits

0xf6ba,	// (0x0001ef09) form_field_data_wide_pane_g

0xda42,	// (0x0001d291) grid_touch_3_pane_ParamLimits

0xda42,	// (0x0001d291) grid_touch_3_pane

0xdfcd,	// (0x0001d81c) cell_touch_3_pane_ParamLimits

0xdfcd,	// (0x0001d81c) cell_touch_3_pane

0x71a7,	// (0x000169f6) cell_touch_3_pane_g1

0x71a7,	// (0x000169f6) cell_touch_3_pane_g2

0x0001,

0xfb69,	// (0x0001f3b8) cell_touch_3_pane_g

0x1fff,	// (0x0001184e) cont_query_data_pane

0x2007,	// (0x00011856) cont_query_data_pane_cp1

0x8501,	// (0x00017d50) button_value_adjust_pane_cp7

0x8509,	// (0x00017d58) query_popup_pane_cp3

0x337d,	// (0x00012bcc) bg_popup_sub_pane_cp22_ParamLimits

0x0618,	// (0x0000fe67) navi_navi_volume_pane_cp2

0x0633,	// (0x0000fe82) popup_side_volume_key_window_g2

0x0642,	// (0x0000fe91) popup_side_volume_key_window_g3

0x0002,

0xf74c,	// (0x0001ef9b) popup_side_volume_key_window_g

0x065f,	// (0x0000feae) popup_side_volume_key_window_t2

0x0001,

0xf753,	// (0x0001efa2) popup_side_volume_key_window_t

0x36c4,	// (0x00012f13) popup_side_volume_key_window_ParamLimits

0xc05d,	// (0x0001b8ac) list_double_graphic_pane_g4_ParamLimits

0xc05d,	// (0x0001b8ac) list_double_graphic_pane_g4

0xd8df,	// (0x0001d12e) list_single_2heading_msg_pane_ParamLimits

0xd8df,	// (0x0001d12e) list_single_2heading_msg_pane

0xe017,	// (0x0001d866) list_single_2heading_msg_pane_g1_ParamLimits

0xe017,	// (0x0001d866) list_single_2heading_msg_pane_g1

0xe023,	// (0x0001d872) list_single_2heading_msg_pane_g2_ParamLimits

0xe023,	// (0x0001d872) list_single_2heading_msg_pane_g2

0xe036,	// (0x0001d885) list_single_2heading_msg_pane_g3_ParamLimits

0xe036,	// (0x0001d885) list_single_2heading_msg_pane_g3

0xe042,	// (0x0001d891) list_single_2heading_msg_pane_g4_ParamLimits

0xe042,	// (0x0001d891) list_single_2heading_msg_pane_g4

0x0003,

0xfcdb,	// (0x0001f52a) list_single_2heading_msg_pane_g_ParamLimits

0xfcdb,	// (0x0001f52a) list_single_2heading_msg_pane_g

0xe05a,	// (0x0001d8a9) list_single_2heading_msg_pane_t1_ParamLimits

0xe05a,	// (0x0001d8a9) list_single_2heading_msg_pane_t1

0xe082,	// (0x0001d8d1) list_single_2heading_msg_pane_t2_ParamLimits

0xe082,	// (0x0001d8d1) list_single_2heading_msg_pane_t2

0xe0ed,	// (0x0001d93c) list_single_2heading_msg_pane_t3_ParamLimits

0xe0ed,	// (0x0001d93c) list_single_2heading_msg_pane_t3

0x85fa,	// (0x00017e49) list_single_2heading_msg_pane_t4_ParamLimits

0x85fa,	// (0x00017e49) list_single_2heading_msg_pane_t4

0x0003,

0xfce4,	// (0x0001f533) list_single_2heading_msg_pane_t_ParamLimits

0xfce4,	// (0x0001f533) list_single_2heading_msg_pane_t

0x1bf9,	// (0x00011448) title_pane_g4_ParamLimits

0x1bf9,	// (0x00011448) title_pane_g4

0x0424,	// (0x0000fc73) title_pane_stacon_g3_ParamLimits

0x0424,	// (0x0000fc73) title_pane_stacon_g3

0x7ffe,	// (0x0001784d) list_single_2graphic_im_pane_g4_ParamLimits

0x7ffe,	// (0x0001784d) list_single_2graphic_im_pane_g4

0x5971,	// (0x000151c0) popup_side_volume_key_window_cp

0x6270,	// (0x00015abf) main_idle_act2_pane_t1

0x0a59,	// (0x000102a8) toolbar_button_pane_g10

0xbf08,	// (0x0001b757) popup_toolbar_window_cp1

0x6c29,	// (0x00016478) clock_nsta_pane_cp_t1

0x6c29,	// (0x00016478) clock_nsta_pane_cp_t2

0x0001,

0xfadf,	// (0x0001f32e) clock_nsta_pane_cp_t

0x0618,	// (0x0000fe67) navi_navi_volume_pane_cp2_ParamLimits

0x0627,	// (0x0000fe76) popup_side_volume_key_window_g1_ParamLimits

0x0633,	// (0x0000fe82) popup_side_volume_key_window_g2_ParamLimits

0x0642,	// (0x0000fe91) popup_side_volume_key_window_g3_ParamLimits

0xf74c,	// (0x0001ef9b) popup_side_volume_key_window_g_ParamLimits

0x0ee2,	// (0x00010731) fep_hwr_aid_pane

0x0f8b,	// (0x000107da) bg_fep_hwr_top_pane_g4_ParamLimits

0x7217,	// (0x00016a66) fep_hwr_top_pane_g1_ParamLimits

0x7229,	// (0x00016a78) fep_hwr_top_pane_g2_ParamLimits

0x0fab,	// (0x000107fa) fep_hwr_top_pane_g3_ParamLimits

0xfb34,	// (0x0001f383) fep_hwr_top_pane_g_ParamLimits

0x0fc0,	// (0x0001080f) fep_hwr_top_text_pane_ParamLimits

0x5726,	// (0x00014f75) aid_touch_tab_arrow_arrow_2

0x572f,	// (0x00014f7e) aid_touch_tab_arrow_left_2

0x0ef6,	// (0x00010745) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0f2d,	// (0x0001077c) fep_hwr_prediction_pane

0x737f,	// (0x00016bce) fep_vkb_prediction_pane

0xdd8a,	// (0x0001d5d9) fep_vkb_side_pane_g3_ParamLimits

0xdd8a,	// (0x0001d5d9) fep_vkb_side_pane_g3

0x114f,	// (0x0001099e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x11c0,	// (0x00010a0f) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x11cd,	// (0x00010a1c) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbe3,	// (0x0001f432) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x12fc,	// (0x00010b4b) fep_hwr_prediction_pane_g1

0x1306,	// (0x00010b55) fep_hwr_prediction_pane_g2

0x130e,	// (0x00010b5d) fep_hwr_prediction_pane_g3

0x1316,	// (0x00010b65) fep_hwr_prediction_pane_g4

0x0003,

0xfced,	// (0x0001f53c) fep_hwr_prediction_pane_g

0x861f,	// (0x00017e6e) fep_vkb_prediction_pane_g1

0x8629,	// (0x00017e78) fep_vkb_prediction_pane_g2

0x8631,	// (0x00017e80) fep_vkb_prediction_pane_g3

0x8639,	// (0x00017e88) fep_vkb_prediction_pane_g4

0x0003,

0xfcf6,	// (0x0001f545) fep_vkb_prediction_pane_g

0x0d62,	// (0x000105b1) slider_set_pane_g3

0x0d76,	// (0x000105c5) slider_set_pane_g4

0x0d8e,	// (0x000105dd) slider_set_pane_g5

0x0d62,	// (0x000105b1) slider_set_pane_g6

0x0da4,	// (0x000105f3) slider_set_pane_g7

0x5e47,	// (0x00015696) slider_form_pane_g3

0x5e50,	// (0x0001569f) slider_form_pane_g4

0x5e58,	// (0x000156a7) slider_form_pane_g5

0x5e47,	// (0x00015696) slider_form_pane_g6

0xd882,	// (0x0001d0d1) slider_form_pane_g7

0x656a,	// (0x00015db9) slider_set_pane_vc_g3

0x6573,	// (0x00015dc2) slider_set_pane_vc_g4

0x657c,	// (0x00015dcb) slider_set_pane_vc_g5

0x656a,	// (0x00015db9) slider_set_pane_vc_g6

0x6585,	// (0x00015dd4) slider_set_pane_vc_g7

0x656a,	// (0x00015db9) slider_form_pane_vc_g1

0x6573,	// (0x00015dc2) slider_form_pane_vc_g2

0x657c,	// (0x00015dcb) slider_form_pane_vc_g3

0x656a,	// (0x00015db9) slider_form_pane_vc_g4

0x694e,	// (0x0001619d) slider_form_pane_vc_g5

0x0004,

0xfac5,	// (0x0001f314) slider_form_pane_vc_g

0x1bb1,	// (0x00011400) main_idle_act3_pane

0x8641,	// (0x00017e90) ai3_links_pane

0xe15b,	// (0x0001d9aa) popup_ai3_data_window_ParamLimits

0xe15b,	// (0x0001d9aa) popup_ai3_data_window

0x1bb1,	// (0x00011400) grid_ai3_links_pane

0xe179,	// (0x0001d9c8) cell_ai3_links_pane_ParamLimits

0xe179,	// (0x0001d9c8) cell_ai3_links_pane

0x8682,	// (0x00017ed1) bg_popup_sub_pane_cp11

0x868f,	// (0x00017ede) cell_ai3_links_pane_g1

0x1bb1,	// (0x00011400) bg_popup_sub_pane_cp12

0x86b4,	// (0x00017f03) heading_ai3_data_pane

0x86bc,	// (0x00017f0b) list_ai3_gene_pane

0x86c8,	// (0x00017f17) popup_ai3_data_window_g1

0x86d0,	// (0x00017f1f) heading_ai3_data_pane_g1

0x86d8,	// (0x00017f27) heading_ai3_data_pane_t1

0x86e6,	// (0x00017f35) list_double_ai3_gene_pane_ParamLimits

0x86e6,	// (0x00017f35) list_double_ai3_gene_pane

0x86f3,	// (0x00017f42) list_single_ai3_gene_pane_ParamLimits

0x86f3,	// (0x00017f42) list_single_ai3_gene_pane

0x716c,	// (0x000169bb) list_highlight_pane_cp7_ParamLimits

0x716c,	// (0x000169bb) list_highlight_pane_cp7

0x8700,	// (0x00017f4f) list_single_a13_gene_pane_t1_ParamLimits

0x8700,	// (0x00017f4f) list_single_a13_gene_pane_t1

0x8717,	// (0x00017f66) list_single_ai3_gene_pane_g1

0x8720,	// (0x00017f6f) list_single_ai3_gene_pane_g2

0x0001,

0xfcff,	// (0x0001f54e) list_single_ai3_gene_pane_g

0x8728,	// (0x00017f77) list_double_ai3_gene_pane_g1_ParamLimits

0x8728,	// (0x00017f77) list_double_ai3_gene_pane_g1

0x8734,	// (0x00017f83) list_double_ai3_gene_pane_t1_ParamLimits

0x8734,	// (0x00017f83) list_double_ai3_gene_pane_t1

0x8750,	// (0x00017f9f) list_double_ai3_gene_pane_t2_ParamLimits

0x8750,	// (0x00017f9f) list_double_ai3_gene_pane_t2

0x8765,	// (0x00017fb4) list_double_ai3_gene_pane_t3_ParamLimits

0x8765,	// (0x00017fb4) list_double_ai3_gene_pane_t3

0x0002,

0xfd04,	// (0x0001f553) list_double_ai3_gene_pane_t_ParamLimits

0xfd04,	// (0x0001f553) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x851a,	// (0x00017d69) aid_size_min_col_2

0xe001,	// (0x0001d850) aid_size_min_msg_ParamLimits

0xe001,	// (0x0001d850) aid_size_min_msg

0xdd9e,	// (0x0001d5ed) fep_vkb_top_text_pane_g2_ParamLimits

0xdd9e,	// (0x0001d5ed) fep_vkb_top_text_pane_g2

0x0001,

0xfb64,	// (0x0001f3b3) fep_vkb_top_text_pane_g_ParamLimits

0xfb64,	// (0x0001f3b3) fep_vkb_top_text_pane_g

0x1bb1,	// (0x00011400) main_hc_apps_shell_pane

0x8782,	// (0x00017fd1) grid_hc_apps_pane_ParamLimits

0x8782,	// (0x00017fd1) grid_hc_apps_pane

0x8791,	// (0x00017fe0) list_hc_apps_pane

0x8799,	// (0x00017fe8) scroll_pane_cp37_ParamLimits

0x8799,	// (0x00017fe8) scroll_pane_cp37

0xe193,	// (0x0001d9e2) cell_hc_apps_pane_ParamLimits

0xe193,	// (0x0001d9e2) cell_hc_apps_pane

0xe25d,	// (0x0001daac) cell_hc_apps_pane_g1_ParamLimits

0xe25d,	// (0x0001daac) cell_hc_apps_pane_g1

0x888e,	// (0x000180dd) cell_hc_apps_pane_g2_ParamLimits

0x888e,	// (0x000180dd) cell_hc_apps_pane_g2

0x88aa,	// (0x000180f9) cell_hc_apps_pane_g3_ParamLimits

0x88aa,	// (0x000180f9) cell_hc_apps_pane_g3

0x0002,

0xfd0b,	// (0x0001f55a) cell_hc_apps_pane_g_ParamLimits

0xfd0b,	// (0x0001f55a) cell_hc_apps_pane_g

0xe28a,	// (0x0001dad9) cell_hc_apps_pane_t1_ParamLimits

0xe28a,	// (0x0001dad9) cell_hc_apps_pane_t1

0x1f49,	// (0x00011798) grid_highlight_pane_cp10_ParamLimits

0x1f49,	// (0x00011798) grid_highlight_pane_cp10

0xe2ca,	// (0x0001db19) list_single_hc_apps_pane_ParamLimits

0xe2ca,	// (0x0001db19) list_single_hc_apps_pane

0xe304,	// (0x0001db53) list_single_hc_apps_pane_g1

0xe31d,	// (0x0001db6c) list_single_hc_apps_pane_g2

0x0001,

0xfd12,	// (0x0001f561) list_single_hc_apps_pane_g

0xe336,	// (0x0001db85) list_single_hc_apps_pane_g2_copy1

0xe352,	// (0x0001dba1) list_single_hc_apps_pane_t1

0x1ca5,	// (0x000114f4) bg_set_opt_pane_cp_ParamLimits

0x034e,	// (0x0000fb9d) setting_slider_pane_t1_ParamLimits

0x0364,	// (0x0000fbb3) setting_slider_pane_t2_ParamLimits

0x037e,	// (0x0000fbcd) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0001edf1) setting_slider_pane_t_ParamLimits

0x0396,	// (0x0000fbe5) slider_set_pane_ParamLimits

0x08c9,	// (0x00010118) control_pane_g5_ParamLimits

0x08c9,	// (0x00010118) control_pane_g5

0x5c68,	// (0x000154b7) slider_set_pane_g1_ParamLimits

0x0d56,	// (0x000105a5) slider_set_pane_g2_ParamLimits

0x0d62,	// (0x000105b1) slider_set_pane_g3_ParamLimits

0x0d76,	// (0x000105c5) slider_set_pane_g4_ParamLimits

0x0d8e,	// (0x000105dd) slider_set_pane_g5_ParamLimits

0x0d62,	// (0x000105b1) slider_set_pane_g6_ParamLimits

0x0da4,	// (0x000105f3) slider_set_pane_g7_ParamLimits

0xf993,	// (0x0001f1e2) slider_set_pane_g_ParamLimits

0x37a9,	// (0x00012ff8) navi_icon_text_pane_ParamLimits

0xd02e,	// (0x0001c87d) aid_fill_nsta_2_ParamLimits

0xd064,	// (0x0001c8b3) aid_touch_tab_arrow_left_ParamLimits

0xd07a,	// (0x0001c8c9) aid_touch_tab_arrow_right_ParamLimits

0xd115,	// (0x0001c964) clock_nsta_pane_ParamLimits

0xd5bf,	// (0x0001ce0e) navi_icon_pane_g1_ParamLimits

0xd5cb,	// (0x0001ce1a) navi_text_pane_t1_ParamLimits

0xdb1c,	// (0x0001d36b) navi_icon_text_pane_g1_ParamLimits

0xdb28,	// (0x0001d377) navi_icon_text_pane_t1_ParamLimits

0xe304,	// (0x0001db53) list_single_hc_apps_pane_g1_ParamLimits

0xe31d,	// (0x0001db6c) list_single_hc_apps_pane_g2_ParamLimits

0xfd12,	// (0x0001f561) list_single_hc_apps_pane_g_ParamLimits

0xe336,	// (0x0001db85) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xe352,	// (0x0001dba1) list_single_hc_apps_pane_t1_ParamLimits

0xb334,	// (0x0001ab83) popup_toolbar2_fixed_window_ParamLimits

0xb334,	// (0x0001ab83) popup_toolbar2_fixed_window

0xcf97,	// (0x0001c7e6) popup_toolbar2_float_window

0x1bb1,	// (0x00011400) bg_popup_sub_pane_cp27

0x89c7,	// (0x00018216) grid_toolbar2_float_pane

0x1bb1,	// (0x00011400) bg_popup_sub_pane_cp26

0x89c7,	// (0x00018216) grid_toolbar2_fixed_pane

0xe380,	// (0x0001dbcf) cell_toolbar2_fixed_pane_ParamLimits

0xe380,	// (0x0001dbcf) cell_toolbar2_fixed_pane

0xe39d,	// (0x0001dbec) cell_toolbar2_fixed_pane_g1

0x89e8,	// (0x00018237) toolbar2_fixed_button_pane

0x482d,	// (0x0001407c) toolbar2_fixed_button_pane_g1

0x483d,	// (0x0001408c) toolbar2_fixed_button_pane_g2

0x4835,	// (0x00014084) toolbar2_fixed_button_pane_g3

0x484d,	// (0x0001409c) toolbar2_fixed_button_pane_g4

0x4845,	// (0x00014094) toolbar2_fixed_button_pane_g5

0x4855,	// (0x000140a4) toolbar2_fixed_button_pane_g6

0x485d,	// (0x000140ac) toolbar2_fixed_button_pane_g7

0x486d,	// (0x000140bc) toolbar2_fixed_button_pane_g8

0x4865,	// (0x000140b4) toolbar2_fixed_button_pane_g9

0x0008,

0xf895,	// (0x0001f0e4) toolbar2_fixed_button_pane_g

0x89f0,	// (0x0001823f) cell_toolbar2_float_pane_ParamLimits

0x89f0,	// (0x0001823f) cell_toolbar2_float_pane

0x8a01,	// (0x00018250) cell_toolbar2_float_pane_g1

0x89e8,	// (0x00018237) toolbar2_fixed_button_pane_cp

0xdc86,	// (0x0001d4d5) fep_vkb_accented_list_pane_ParamLimits

0xdc86,	// (0x0001d4d5) fep_vkb_accented_list_pane

0x112f,	// (0x0001097e) bg_popup_fep_shadow_pane_g9

0x392d,	// (0x0001317c) bg_popup_fep_shadow_pane_cp3

0x2dac,	// (0x000125fb) list_accented_list_pane

0x8a0a,	// (0x00018259) list_single_accented_list_pane_ParamLimits

0x8a0a,	// (0x00018259) list_single_accented_list_pane

0x392d,	// (0x0001317c) list_highlight_pane_cp10

0x8a1b,	// (0x0001826a) list_single_accented_list_pane_t1

0xceb3,	// (0x0001c702) popup_slider_window_ParamLimits

0xceb3,	// (0x0001c702) popup_slider_window

0x8511,	// (0x00017d60) aid_indentation_list_msg

0xe4a8,	// (0x0001dcf7) bg_popup_window_pane_cp19

0x8b55,	// (0x000183a4) popup_slider_window_g1

0x8b71,	// (0x000183c0) popup_slider_window_g2

0x8b8d,	// (0x000183dc) popup_slider_window_g3

0x0005,

0xfd17,	// (0x0001f566) popup_slider_window_g

0x8be9,	// (0x00018438) popup_slider_window_t1

0x8c5d,	// (0x000184ac) small_volume_slider_vertical_pane

0x71a7,	// (0x000169f6) small_volume_slider_vertical_pane_g1

0x71a7,	// (0x000169f6) small_volume_slider_vertical_pane_g2

0x8c79,	// (0x000184c8) small_volume_slider_vertical_pane_g3

0x0002,

0xfd29,	// (0x0001f578) small_volume_slider_vertical_pane_g

0xb29e,	// (0x0001aaed) area_side_right_pane_ParamLimits

0xb29e,	// (0x0001aaed) area_side_right_pane

0xb70d,	// (0x0001af5c) aid_size_side_button_ParamLimits

0xb70d,	// (0x0001af5c) aid_size_side_button

0xb726,	// (0x0001af75) grid_sctrl_middle_pane_ParamLimits

0xb726,	// (0x0001af75) grid_sctrl_middle_pane

0x1352,	// (0x00010ba1) sctrl_sk_bottom_pane

0x1363,	// (0x00010bb2) sctrl_sk_top_pane

0x1375,	// (0x00010bc4) aid_touch_sctrl_top

0x1382,	// (0x00010bd1) bg_sctrl_sk_pane_ParamLimits

0x1382,	// (0x00010bd1) bg_sctrl_sk_pane

0x1390,	// (0x00010bdf) sctrl_sk_top_pane_g1

0x139d,	// (0x00010bec) sctrl_sk_top_pane_t1

0x1375,	// (0x00010bc4) aid_touch_sctrl_bottom

0x1382,	// (0x00010bd1) bg_sctrl_sk_pane_cp_ParamLimits

0x1382,	// (0x00010bd1) bg_sctrl_sk_pane_cp

0x13b8,	// (0x00010c07) sctrl_sk_bottom_pane_g1

0x139d,	// (0x00010bec) sctrl_sk_bottom_pane_t1

0xb740,	// (0x0001af8f) cell_sctrl_middle_pane_ParamLimits

0xb740,	// (0x0001af8f) cell_sctrl_middle_pane

0xb753,	// (0x0001afa2) aid_touch_sctrl_middle_ParamLimits

0xb753,	// (0x0001afa2) aid_touch_sctrl_middle

0xb760,	// (0x0001afaf) bg_sctrl_middle_pane_ParamLimits

0xb760,	// (0x0001afaf) bg_sctrl_middle_pane

0x1a32,	// (0x00011281) cell_sctrl_middle_pane_g1_ParamLimits

0x1a32,	// (0x00011281) cell_sctrl_middle_pane_g1

0xb76e,	// (0x0001afbd) cell_sctrl_middle_pane_g2_ParamLimits

0xb76e,	// (0x0001afbd) cell_sctrl_middle_pane_g2

0x0001,

0xfd35,	// (0x0001f584) cell_sctrl_middle_pane_g_ParamLimits

0xfd35,	// (0x0001f584) cell_sctrl_middle_pane_g

0x482d,	// (0x0001407c) bg_sctrl_middle_pane_g1

0x4835,	// (0x00014084) bg_sctrl_middle_pane_g2

0x483d,	// (0x0001408c) bg_sctrl_middle_pane_g3

0x4845,	// (0x00014094) bg_sctrl_middle_pane_g4

0x484d,	// (0x0001409c) bg_sctrl_middle_pane_g5

0x4855,	// (0x000140a4) bg_sctrl_middle_pane_g6

0x485d,	// (0x000140ac) bg_sctrl_middle_pane_g7

0x4865,	// (0x000140b4) bg_sctrl_middle_pane_g8

0x0007,

0xfd3a,	// (0x0001f589) bg_sctrl_middle_pane_g

0x486d,	// (0x000140bc) bg_sctrl_middle_pane_g8_copy1

0x482d,	// (0x0001407c) bg_sctrl_sk_pane_g1

0x483d,	// (0x0001408c) bg_sctrl_sk_pane_g2

0x4835,	// (0x00014084) bg_sctrl_sk_pane_g3

0x0008,

0xf895,	// (0x0001f0e4) bg_sctrl_sk_pane_g

0x2475,	// (0x00011cc4) aid_size_touch_scroll_bar

0x484d,	// (0x0001409c) bg_sctrl_sk_pane_g4

0x4845,	// (0x00014094) bg_sctrl_sk_pane_g5

0x4855,	// (0x000140a4) bg_sctrl_sk_pane_g6

0x485d,	// (0x000140ac) bg_sctrl_sk_pane_g7

0x486d,	// (0x000140bc) bg_sctrl_sk_pane_g8

0x4865,	// (0x000140b4) bg_sctrl_sk_pane_g9

0x3d6d,	// (0x000135bc) popup_fep_china_hwr2_fs_candidate_window

0xc96f,	// (0x0001c1be) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc96f,	// (0x0001c1be) popup_fep_china_hwr2_fs_control_window

0x114f,	// (0x0001099e) sctrl_sk_top_pane_g2

0x0001,

0xfd30,	// (0x0001f57f) sctrl_sk_top_pane_g

0xe560,	// (0x0001ddaf) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe560,	// (0x0001ddaf) aid_fep_china_hwr2_fs_cell

0xe576,	// (0x0001ddc5) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe576,	// (0x0001ddc5) bg_popup_fep_shadow_pane_cp4

0xe58d,	// (0x0001dddc) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe58d,	// (0x0001dddc) bg_popup_fep_shadow_pane_cp5

0xe59f,	// (0x0001ddee) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe59f,	// (0x0001ddee) popup_fep_china_hwr2_fs_control_bar_grid

0xe5b3,	// (0x0001de02) popup_fep_china_hwr2_fs_control_funtion_grid

0x8cd8,	// (0x00018527) aid_fep_china_hwr2_fs_candi_cell

0x1bb1,	// (0x00011400) bg_popup_fep_shadow_pane_cp6

0x8ce2,	// (0x00018531) popup_fep_china_hwr2_fs_candidate_grid

0xe5bb,	// (0x0001de0a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe5bb,	// (0x0001de0a) cell_fep_china_hwr2_fs_funtion_grid

0x71a7,	// (0x000169f6) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8d04,	// (0x00018553) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8d04,	// (0x00018553) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8d12,	// (0x00018561) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8d12,	// (0x00018561) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd4b,	// (0x0001f59a) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd4b,	// (0x0001f59a) cell_fep_china_hwr2_fs_funtion_grid_g

0xe5d3,	// (0x0001de22) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe5d3,	// (0x0001de22) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe5e8,	// (0x0001de37) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe5e8,	// (0x0001de37) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd50,	// (0x0001f59f) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd50,	// (0x0001f59f) cell_fep_china_hwr2_fs_funtion_grid_t

0x8d59,	// (0x000185a8) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8d61,	// (0x000185b0) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8d69,	// (0x000185b8) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd55,	// (0x0001f5a4) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8d71,	// (0x000185c0) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8d71,	// (0x000185c0) cell_fep_china_hwr2_fs_candidate_grid

0x8d90,	// (0x000185df) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8d98,	// (0x000185e7) popup_fep_china_hwr2_fs_candidate_grid_g21

0x71a7,	// (0x000169f6) cell_fep_china_hwr2_fs_candidate_grid_g1

0x71a7,	// (0x000169f6) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb69,	// (0x0001f3b8) cell_fep_china_hwr2_fs_candidate_grid_g

0x8da0,	// (0x000185ef) cell_fep_china_hwr2_fs_candidate_grid_t1

0x43dc,	// (0x00013c2b) clock_nsta_pane_cp_24_ParamLimits

0x43dc,	// (0x00013c2b) clock_nsta_pane_cp_24

0x445c,	// (0x00013cab) indicator_nsta_pane_cp_24_ParamLimits

0x445c,	// (0x00013cab) indicator_nsta_pane_cp_24

0x557e,	// (0x00014dcd) heading_pane_g1

0x0001,

0xf8fa,	// (0x0001f149) heading_pane_g

0x60b7,	// (0x00015906) grid_sct_catagory_button_pane

0x60e9,	// (0x00015938) scroll_pane_cp5_ParamLimits

0x6d9a,	// (0x000165e9) button_value_adjust_pane_cp5_ParamLimits

0x6d9a,	// (0x000165e9) button_value_adjust_pane_cp5

0x6ea0,	// (0x000166ef) form2_midp_time_pane_ParamLimits

0x8dae,	// (0x000185fd) cell_sct_catagory_button_pane_ParamLimits

0x8dae,	// (0x000185fd) cell_sct_catagory_button_pane

0x716c,	// (0x000169bb) bg_button_pane_cp01_ParamLimits

0x716c,	// (0x000169bb) bg_button_pane_cp01

0x71a7,	// (0x000169f6) cell_sct_catagory_button_pane_g1

0xcf34,	// (0x0001c783) popup_tb_extension_window

0xe604,	// (0x0001de53) aid_size_cell_ext_ParamLimits

0xe604,	// (0x0001de53) aid_size_cell_ext

0x22b7,	// (0x00011b06) bg_tb_trans_pane_cp1_ParamLimits

0x22b7,	// (0x00011b06) bg_tb_trans_pane_cp1

0xe62a,	// (0x0001de79) grid_tb_ext_pane_ParamLimits

0xe62a,	// (0x0001de79) grid_tb_ext_pane

0xe66a,	// (0x0001deb9) cell_tb_ext_pane_ParamLimits

0xe66a,	// (0x0001deb9) cell_tb_ext_pane

0xe694,	// (0x0001dee3) cell_tb_ext_pane_g1_ParamLimits

0xe694,	// (0x0001dee3) cell_tb_ext_pane_g1

0x8e44,	// (0x00018693) cell_tb_ext_pane_t1

0x1f49,	// (0x00011798) list_highlight_pane_cp11_ParamLimits

0x1f49,	// (0x00011798) list_highlight_pane_cp11

0x0277,	// (0x0000fac6) popup_uni_indicator_window_ParamLimits

0x0277,	// (0x0000fac6) popup_uni_indicator_window

0x2ae1,	// (0x00012330) bg_popup_sub_pane_cp14

0x8e5f,	// (0x000186ae) list_uniindi_pane

0x8e6b,	// (0x000186ba) uniindi_top_pane

0x1f49,	// (0x00011798) bg_uniindi_top_pane

0x8e8c,	// (0x000186db) uniindi_top_pane_g1

0x8ea2,	// (0x000186f1) uniindi_top_pane_g2

0x0003,

0xfd5c,	// (0x0001f5ab) uniindi_top_pane_g

0x8ecc,	// (0x0001871b) uniindi_top_pane_t1

0x8ef8,	// (0x00018747) list_single_uniindi_pane_ParamLimits

0x8ef8,	// (0x00018747) list_single_uniindi_pane

0x71a7,	// (0x000169f6) bg_uniindi_top_pane_g1

0x8f0a,	// (0x00018759) list_single_uniindi_pane_g1

0x8f1d,	// (0x0001876c) list_single_uniindi_pane_t1

0x00e3,	// (0x0000f932) control_bg_pane

0x8f42,	// (0x00018791) bg_sctrl_sk_pane_cp1

0x8f4b,	// (0x0001879a) bg_sctrl_sk_pane_cp2

0x8f54,	// (0x000187a3) control_bg_pane_g1

0x8f5d,	// (0x000187ac) control_bg_pane_g2

0x0001,

0xfd65,	// (0x0001f5b4) control_bg_pane_g

0x6bee,	// (0x0001643d) cell_indicator_nsta_pane_g1_ParamLimits

0xda75,	// (0x0001d2c4) cell_indicator_nsta_pane_g2_ParamLimits

0xfada,	// (0x0001f329) cell_indicator_nsta_pane_g_ParamLimits

0x6f30,	// (0x0001677f) form2_midp_time_pane_t1_ParamLimits

0x74f8,	// (0x00016d47) main_idle_act4_pane_ParamLimits

0x74f8,	// (0x00016d47) main_idle_act4_pane

0xcf34,	// (0x0001c783) popup_tb_extension_window_ParamLimits

0xe652,	// (0x0001dea1) tb_ext_find_pane_ParamLimits

0xe652,	// (0x0001dea1) tb_ext_find_pane

0x8f66,	// (0x000187b5) ai_gene_pane_1_cp1

0x3a76,	// (0x000132c5) ai_gene_pane_2_cp1

0x8f6e,	// (0x000187bd) list_single_idle_plugin_calendar_pane

0x8f77,	// (0x000187c6) list_single_idle_plugin_notification_pane

0x8f80,	// (0x000187cf) list_single_idle_plugin_player_pane

0xe6b1,	// (0x0001df00) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe6b1,	// (0x0001df00) list_single_idle_plugin_shortcut_pane

0xe6d9,	// (0x0001df28) main_idle_act4_pane_t1

0xe6f1,	// (0x0001df40) main_idle_act4_pane_t2

0x0001,

0xfd6a,	// (0x0001f5b9) main_idle_act4_pane_t

0xe709,	// (0x0001df58) middle_sk_idle_act4_pane_ParamLimits

0xe709,	// (0x0001df58) middle_sk_idle_act4_pane

0xe725,	// (0x0001df74) popup_clock_digital_analogue_window_cp2

0xe74c,	// (0x0001df9b) shortcut_wheel_idle_act4_pane_ParamLimits

0xe74c,	// (0x0001df9b) shortcut_wheel_idle_act4_pane

0x71a7,	// (0x000169f6) shortcut_wheel_idle_act4_pane_g1

0x71a7,	// (0x000169f6) shortcut_wheel_idle_act4_pane_g2

0x71a7,	// (0x000169f6) shortcut_wheel_idle_act4_pane_g3

0x71a7,	// (0x000169f6) shortcut_wheel_idle_act4_pane_g4

0x71a7,	// (0x000169f6) shortcut_wheel_idle_act4_pane_g5

0x9013,	// (0x00018862) shortcut_wheel_idle_act4_pane_g6

0x901b,	// (0x0001886a) shortcut_wheel_idle_act4_pane_g7

0x9023,	// (0x00018872) shortcut_wheel_idle_act4_pane_g8

0x902b,	// (0x0001887a) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd6f,	// (0x0001f5be) shortcut_wheel_idle_act4_pane_g

0xc63b,	// (0x0001be8a) middle_sk_idle_act4_pane_g1_ParamLimits

0xc63b,	// (0x0001be8a) middle_sk_idle_act4_pane_g1

0xe7c9,	// (0x0001e018) middle_sk_idle_act4_pane_g2_ParamLimits

0xe7c9,	// (0x0001e018) middle_sk_idle_act4_pane_g2

0x0001,

0xfd92,	// (0x0001f5e1) middle_sk_idle_act4_pane_g_ParamLimits

0xfd92,	// (0x0001f5e1) middle_sk_idle_act4_pane_g

0xe7e1,	// (0x0001e030) middle_sk_idle_act4_pane_t1_ParamLimits

0xe7e1,	// (0x0001e030) middle_sk_idle_act4_pane_t1

0xe810,	// (0x0001e05f) grid_ai_shortcut_pane_ParamLimits

0xe810,	// (0x0001e05f) grid_ai_shortcut_pane

0xe82d,	// (0x0001e07c) list_highlight_pane_cp16_ParamLimits

0xe82d,	// (0x0001e07c) list_highlight_pane_cp16

0xe83a,	// (0x0001e089) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe83a,	// (0x0001e089) list_single_idle_plugin_shortcut_pane_g1

0xe846,	// (0x0001e095) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe846,	// (0x0001e095) list_single_idle_plugin_shortcut_pane_g2

0xe864,	// (0x0001e0b3) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe864,	// (0x0001e0b3) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd97,	// (0x0001f5e6) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd97,	// (0x0001f5e6) list_single_idle_plugin_shortcut_pane_g

0xe879,	// (0x0001e0c8) cell_ai_shortcut_pane_ParamLimits

0xe879,	// (0x0001e0c8) cell_ai_shortcut_pane

0xe88f,	// (0x0001e0de) cell_ai_shortcut_pane_g1_ParamLimits

0xe88f,	// (0x0001e0de) cell_ai_shortcut_pane_g1

0x8f66,	// (0x000187b5) ai_gene_pane_1_cp2

0x915c,	// (0x000189ab) ai_gene_pane_2_cp2

0x9164,	// (0x000189b3) list_highlight_pane_cp15

0x916d,	// (0x000189bc) list_single_idle_plugin_calendar_pane_g1

0x9164,	// (0x000189b3) list_highlight_pane_cp17

0x9175,	// (0x000189c4) list_single_idle_plugin_calendar_pane_g1_copy1

0x917d,	// (0x000189cc) list_single_idle_plugin_player_pane_g1

0x631e,	// (0x00015b6d) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd9e,	// (0x0001f5ed) list_single_idle_plugin_player_pane_g

0x9185,	// (0x000189d4) list_single_idle_plugin_player_pane_t1

0x9193,	// (0x000189e2) list_single_idle_plugin_player_pane_t2

0x91a1,	// (0x000189f0) list_single_idle_plugin_player_pane_t3

0x91af,	// (0x000189fe) list_single_idle_plugin_player_pane_t4

0x0003,

0xfda3,	// (0x0001f5f2) list_single_idle_plugin_player_pane_t

0x91bd,	// (0x00018a0c) wait_bar_pane_cp15

0x91c5,	// (0x00018a14) grid_ai_notification_pane

0x631e,	// (0x00015b6d) list_single_idle_plugin_notification_pane_g1

0xe8b1,	// (0x0001e100) cell_ai_notification_pane_ParamLimits

0xe8b1,	// (0x0001e100) cell_ai_notification_pane

0x91db,	// (0x00018a2a) cell_ai_notification_pane_g1

0x91e3,	// (0x00018a32) cell_ai_notification_pane_t1

0xe8be,	// (0x0001e10d) tb_ext_find_button_pane

0xe8c6,	// (0x0001e115) tb_ext_find_pane_g1

0xe8ce,	// (0x0001e11d) tb_ext_find_pane_t1

0x32b3,	// (0x00012b02) tb_ext_find_button_pane_g1

0x920f,	// (0x00018a5e) tb_ext_find_button_pane_g2

0x0001,

0xfdac,	// (0x0001f5fb) tb_ext_find_button_pane_g

0xe6d9,	// (0x0001df28) main_idle_act4_pane_t1_ParamLimits

0xe6f1,	// (0x0001df40) main_idle_act4_pane_t2_ParamLimits

0xfd6a,	// (0x0001f5b9) main_idle_act4_pane_t_ParamLimits

0xe725,	// (0x0001df74) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe73c,	// (0x0001df8b) sat_plugin_idle_act4_pane_ParamLimits

0xe73c,	// (0x0001df8b) sat_plugin_idle_act4_pane

0xe8dc,	// (0x0001e12b) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe8dc,	// (0x0001e12b) sat_plugin_idle_act4_pane_t1

0xe8f4,	// (0x0001e143) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe8f4,	// (0x0001e143) sat_plugin_idle_act4_pane_t2

0xe90c,	// (0x0001e15b) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe90c,	// (0x0001e15b) sat_plugin_idle_act4_pane_t3

0xe924,	// (0x0001e173) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe924,	// (0x0001e173) sat_plugin_idle_act4_pane_t4

0x0003,

0xfdb1,	// (0x0001f600) sat_plugin_idle_act4_pane_t_ParamLimits

0xfdb1,	// (0x0001f600) sat_plugin_idle_act4_pane_t

0x01a8,	// (0x0000f9f7) popup_battery_window_ParamLimits

0x01a8,	// (0x0000f9f7) popup_battery_window

0x1f49,	// (0x00011798) bg_popup_sub_pane_cp25_ParamLimits

0x1f49,	// (0x00011798) bg_popup_sub_pane_cp25

0x9264,	// (0x00018ab3) popup_battery_window_g1_ParamLimits

0x9264,	// (0x00018ab3) popup_battery_window_g1

0x9270,	// (0x00018abf) popup_battery_window_t1_ParamLimits

0x9270,	// (0x00018abf) popup_battery_window_t1

0x9282,	// (0x00018ad1) popup_battery_window_t2_ParamLimits

0x9282,	// (0x00018ad1) popup_battery_window_t2

0x0001,

0xfdba,	// (0x0001f609) popup_battery_window_t_ParamLimits

0xfdba,	// (0x0001f609) popup_battery_window_t

0xc7e7,	// (0x0001c036) midp_canvas_pane_ParamLimits

0xc842,	// (0x0001c091) midp_keypad_pane_ParamLimits

0xc842,	// (0x0001c091) midp_keypad_pane

0x3cbb,	// (0x0001350a) main_midp_pane_ParamLimits

0x6c47,	// (0x00016496) signal_pane_g2_cp_ParamLimits

0xe93c,	// (0x0001e18b) aid_size_cell_midp_keypad_ParamLimits

0xe93c,	// (0x0001e18b) aid_size_cell_midp_keypad

0xe95a,	// (0x0001e1a9) midp_keyp_game_grid_pane_ParamLimits

0xe95a,	// (0x0001e1a9) midp_keyp_game_grid_pane

0xe981,	// (0x0001e1d0) midp_keyp_rocker_pane_ParamLimits

0xe981,	// (0x0001e1d0) midp_keyp_rocker_pane

0xe9c6,	// (0x0001e215) midp_keyp_sk_left_pane_ParamLimits

0xe9c6,	// (0x0001e215) midp_keyp_sk_left_pane

0xea1a,	// (0x0001e269) midp_keyp_sk_right_pane_ParamLimits

0xea1a,	// (0x0001e269) midp_keyp_sk_right_pane

0x1bb1,	// (0x00011400) bg_button_pane_cp03

0xea6e,	// (0x0001e2bd) midp_keyp_sk_left_pane_g1

0x1bb1,	// (0x00011400) bg_button_pane_cp04

0xea6e,	// (0x0001e2bd) midp_keyp_sk_right_pane_g1

0x71a7,	// (0x000169f6) midp_keyp_rocker_pane_g1

0xea77,	// (0x0001e2c6) keyp_game_cell_pane_ParamLimits

0xea77,	// (0x0001e2c6) keyp_game_cell_pane

0x1bb1,	// (0x00011400) bg_button_pane_cp02

0xea9d,	// (0x0001e2ec) keyp_game_cell_pane_g1

0xb2e0,	// (0x0001ab2f) popup_fep_vkb2_window_ParamLimits

0xb2e0,	// (0x0001ab2f) popup_fep_vkb2_window

0xb77a,	// (0x0001afc9) aid_size_cell_vkb2_ParamLimits

0xb77a,	// (0x0001afc9) aid_size_cell_vkb2

0xb7a8,	// (0x0001aff7) popup_fep_vkb2_window_g1_ParamLimits

0xb7a8,	// (0x0001aff7) popup_fep_vkb2_window_g1

0xb7f8,	// (0x0001b047) vkb2_area_bottom_pane_ParamLimits

0xb7f8,	// (0x0001b047) vkb2_area_bottom_pane

0xb854,	// (0x0001b0a3) vkb2_area_keypad_pane_ParamLimits

0xb854,	// (0x0001b0a3) vkb2_area_keypad_pane

0xb8a2,	// (0x0001b0f1) vkb2_area_top_pane_ParamLimits

0xb8a2,	// (0x0001b0f1) vkb2_area_top_pane

0xb928,	// (0x0001b177) vkb2_top_entry_pane_ParamLimits

0xb928,	// (0x0001b177) vkb2_top_entry_pane

0xb955,	// (0x0001b1a4) vkb2_top_grid_left_pane_ParamLimits

0xb955,	// (0x0001b1a4) vkb2_top_grid_left_pane

0xb975,	// (0x0001b1c4) vkb2_top_grid_right_pane_ParamLimits

0xb975,	// (0x0001b1c4) vkb2_top_grid_right_pane

0x162e,	// (0x00010e7d) vkb2_cell_keypad_pane_ParamLimits

0x162e,	// (0x00010e7d) vkb2_cell_keypad_pane

0xb9bb,	// (0x0001b20a) vkb2_area_bottom_grid_pane_ParamLimits

0xb9bb,	// (0x0001b20a) vkb2_area_bottom_grid_pane

0xb9e5,	// (0x0001b234) vkb2_area_bottom_pane_g1_ParamLimits

0xb9e5,	// (0x0001b234) vkb2_area_bottom_pane_g1

0xba0b,	// (0x0001b25a) vkb2_area_bottom_pane_g2_ParamLimits

0xba0b,	// (0x0001b25a) vkb2_area_bottom_pane_g2

0xba3c,	// (0x0001b28b) vkb2_area_bottom_pane_g3_ParamLimits

0xba3c,	// (0x0001b28b) vkb2_area_bottom_pane_g3

0x0002,

0xfdbf,	// (0x0001f60e) vkb2_area_bottom_pane_g_ParamLimits

0xfdbf,	// (0x0001f60e) vkb2_area_bottom_pane_g

0x17bd,	// (0x0001100c) vkb2_top_cell_left_pane_ParamLimits

0x17bd,	// (0x0001100c) vkb2_top_cell_left_pane

0xeaa6,	// (0x0001e2f5) vkb2_top_entry_pane_g1_ParamLimits

0xeaa6,	// (0x0001e2f5) vkb2_top_entry_pane_g1

0xeab4,	// (0x0001e303) vkb2_top_entry_pane_t1_ParamLimits

0xeab4,	// (0x0001e303) vkb2_top_entry_pane_t1

0x9430,	// (0x00018c7f) vkb2_top_entry_pane_t2_ParamLimits

0x9430,	// (0x00018c7f) vkb2_top_entry_pane_t2

0x9448,	// (0x00018c97) vkb2_top_entry_pane_t3_ParamLimits

0x9448,	// (0x00018c97) vkb2_top_entry_pane_t3

0x0002,

0xfdc6,	// (0x0001f615) vkb2_top_entry_pane_t_ParamLimits

0xfdc6,	// (0x0001f615) vkb2_top_entry_pane_t

0xbaa6,	// (0x0001b2f5) vkb2_top_grid_right_pane_g1_ParamLimits

0xbaa6,	// (0x0001b2f5) vkb2_top_grid_right_pane_g1

0x1820,	// (0x0001106f) vkb2_top_grid_right_pane_g2_ParamLimits

0x1820,	// (0x0001106f) vkb2_top_grid_right_pane_g2

0x1838,	// (0x00011087) vkb2_top_grid_right_pane_g3_ParamLimits

0x1838,	// (0x00011087) vkb2_top_grid_right_pane_g3

0xbabc,	// (0x0001b30b) vkb2_top_grid_right_pane_g4_ParamLimits

0xbabc,	// (0x0001b30b) vkb2_top_grid_right_pane_g4

0x0003,

0xfdcd,	// (0x0001f61c) vkb2_top_grid_right_pane_g_ParamLimits

0xfdcd,	// (0x0001f61c) vkb2_top_grid_right_pane_g

0x1866,	// (0x000110b5) vkb2_top_cell_left_pane_g1

0x187d,	// (0x000110cc) vkb2_cell_keypad_pane_g1_ParamLimits

0x187d,	// (0x000110cc) vkb2_cell_keypad_pane_g1

0x945e,	// (0x00018cad) vkb2_cell_keypad_pane_t1_ParamLimits

0x945e,	// (0x00018cad) vkb2_cell_keypad_pane_t1

0x18a1,	// (0x000110f0) vkb2_cell_bottom_grid_pane_ParamLimits

0x18a1,	// (0x000110f0) vkb2_cell_bottom_grid_pane

0x18da,	// (0x00011129) vkb2_cell_bottom_grid_pane_g1

0xe76d,	// (0x0001dfbc) aid_call2_pane_cp02

0xe775,	// (0x0001dfc4) aid_call_pane_cp02

0xe77d,	// (0x0001dfcc) clock_digital_number_pane_cp10

0xe785,	// (0x0001dfd4) clock_digital_number_pane_cp11

0xe78d,	// (0x0001dfdc) clock_digital_number_pane_cp12

0xe795,	// (0x0001dfe4) clock_digital_number_pane_cp13

0xe79d,	// (0x0001dfec) clock_digital_separator_pane_cp10

0x32b3,	// (0x00012b02) popup_clock_digital_analogue_window_cp2_g1

0x32b3,	// (0x00012b02) popup_clock_digital_analogue_window_cp2_g2

0xe7a5,	// (0x0001dff4) popup_clock_digital_analogue_window_cp2_g3

0x32b3,	// (0x00012b02) popup_clock_digital_analogue_window_cp2_g4

0xe7a5,	// (0x0001dff4) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd82,	// (0x0001f5d1) popup_clock_digital_analogue_window_cp2_g

0xe7ad,	// (0x0001dffc) popup_clock_digital_analogue_window_cp2_t1

0xe7bb,	// (0x0001e00a) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd8d,	// (0x0001f5dc) popup_clock_digital_analogue_window_cp2_t

0x71a7,	// (0x000169f6) clock_digital_number_pane_cp10_g1

0x71a7,	// (0x000169f6) clock_digital_number_pane_cp10_g2

0x0001,

0xfb69,	// (0x0001f3b8) clock_digital_number_pane_cp10_g

0x71a7,	// (0x000169f6) clock_digital_separator_pane_cp10_g1

0x71a7,	// (0x000169f6) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb69,	// (0x0001f3b8) clock_digital_separator_pane_cp10_g

0x8eae,	// (0x000186fd) uniindi_top_pane_g3

0x8ebf,	// (0x0001870e) uniindi_top_pane_g4

0x169e,	// (0x00010eed) vkb2_row_keypad_pane_ParamLimits

0x169e,	// (0x00010eed) vkb2_row_keypad_pane

0x18f6,	// (0x00011145) vkb2_cell_t_keypad_pane_ParamLimits

0x18f6,	// (0x00011145) vkb2_cell_t_keypad_pane

0x1906,	// (0x00011155) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1906,	// (0x00011155) vkb2_cell_t_keypad_pane_cp08

0x191b,	// (0x0001116a) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x191b,	// (0x0001116a) vkb2_cell_t_keypad_pane_cp09

0x192f,	// (0x0001117e) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x192f,	// (0x0001117e) vkb2_cell_t_keypad_pane_cp01

0x1940,	// (0x0001118f) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1940,	// (0x0001118f) vkb2_cell_t_keypad_pane_cp02

0x1951,	// (0x000111a0) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1951,	// (0x000111a0) vkb2_cell_t_keypad_pane_cp03

0x1962,	// (0x000111b1) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1962,	// (0x000111b1) vkb2_cell_t_keypad_pane_cp04

0x1973,	// (0x000111c2) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1973,	// (0x000111c2) vkb2_cell_t_keypad_pane_cp05

0x1984,	// (0x000111d3) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1984,	// (0x000111d3) vkb2_cell_t_keypad_pane_cp06

0x1997,	// (0x000111e6) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1997,	// (0x000111e6) vkb2_cell_t_keypad_pane_cp07

0x19ac,	// (0x000111fb) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x19ac,	// (0x000111fb) vkb2_cell_t_keypad_pane_cp10

0x114f,	// (0x0001099e) vkb2_cell_t_keypad_pane_g1

0x9475,	// (0x00018cc4) vkb2_cell_t_keypad_pane_t1

0x00e3,	// (0x0000f932) popup_grid_graphic2_window

0xeaed,	// (0x0001e33c) aid_size_cell_graphic2_ParamLimits

0xeaed,	// (0x0001e33c) aid_size_cell_graphic2

0x4efb,	// (0x0001474a) bg_popup_window_pane_cp21_ParamLimits

0x4efb,	// (0x0001474a) bg_popup_window_pane_cp21

0xeb1f,	// (0x0001e36e) graphic2_pages_pane_ParamLimits

0xeb1f,	// (0x0001e36e) graphic2_pages_pane

0xeb77,	// (0x0001e3c6) grid_graphic2_control_pane_ParamLimits

0xeb77,	// (0x0001e3c6) grid_graphic2_control_pane

0xebb8,	// (0x0001e407) grid_graphic2_pane_ParamLimits

0xebb8,	// (0x0001e407) grid_graphic2_pane

0xec2f,	// (0x0001e47e) cell_graphic2_pane

0x1bb1,	// (0x00011400) main_comp_mode_pane

0x86bc,	// (0x00017f0b) list_ai3_gene_pane_ParamLimits

0xe4a8,	// (0x0001dcf7) bg_popup_window_pane_cp19_ParamLimits

0x8af3,	// (0x00018342) bg_touch_area_indi_pane_ParamLimits

0x8af3,	// (0x00018342) bg_touch_area_indi_pane

0x8b09,	// (0x00018358) bg_touch_area_indi_pane_cp01_ParamLimits

0x8b09,	// (0x00018358) bg_touch_area_indi_pane_cp01

0x8b21,	// (0x00018370) bg_touch_area_indi_pane_cp02_ParamLimits

0x8b21,	// (0x00018370) bg_touch_area_indi_pane_cp02

0x8b3b,	// (0x0001838a) bg_touch_area_indi_pane_cp03_ParamLimits

0x8b3b,	// (0x0001838a) bg_touch_area_indi_pane_cp03

0x8b55,	// (0x000183a4) popup_slider_window_g1_ParamLimits

0x8b71,	// (0x000183c0) popup_slider_window_g2_ParamLimits

0x8b8d,	// (0x000183dc) popup_slider_window_g3_ParamLimits

0xfd17,	// (0x0001f566) popup_slider_window_g_ParamLimits

0x8be9,	// (0x00018438) popup_slider_window_t1_ParamLimits

0x8c5d,	// (0x000184ac) small_volume_slider_vertical_pane_ParamLimits

0xec2f,	// (0x0001e47e) cell_graphic2_pane_ParamLimits

0xec92,	// (0x0001e4e1) bg_button_pane_cp10_ParamLimits

0xec92,	// (0x0001e4e1) bg_button_pane_cp10

0xeca5,	// (0x0001e4f4) bg_button_pane_cp11_ParamLimits

0xeca5,	// (0x0001e4f4) bg_button_pane_cp11

0xecb8,	// (0x0001e507) graphic2_pages_pane_g1_ParamLimits

0xecb8,	// (0x0001e507) graphic2_pages_pane_g1

0xecd3,	// (0x0001e522) graphic2_pages_pane_g2_ParamLimits

0xecd3,	// (0x0001e522) graphic2_pages_pane_g2

0x0001,

0xfddb,	// (0x0001f62a) graphic2_pages_pane_g_ParamLimits

0xfddb,	// (0x0001f62a) graphic2_pages_pane_g

0xeceb,	// (0x0001e53a) graphic2_pages_pane_t1_ParamLimits

0xeceb,	// (0x0001e53a) graphic2_pages_pane_t1

0xed03,	// (0x0001e552) cell_graphic2_control_pane_ParamLimits

0xed03,	// (0x0001e552) cell_graphic2_control_pane

0xed1d,	// (0x0001e56c) cell_graphic2_pane_g1_ParamLimits

0xed1d,	// (0x0001e56c) cell_graphic2_pane_g1

0xc649,	// (0x0001be98) cell_graphic2_pane_g2_ParamLimits

0xc649,	// (0x0001be98) cell_graphic2_pane_g2

0xebab,	// (0x0001e3fa) cell_graphic2_pane_g3_ParamLimits

0xebab,	// (0x0001e3fa) cell_graphic2_pane_g3

0xc656,	// (0x0001bea5) cell_graphic2_pane_g4_ParamLimits

0xc656,	// (0x0001bea5) cell_graphic2_pane_g4

0xed2a,	// (0x0001e579) cell_graphic2_pane_g5_ParamLimits

0xed2a,	// (0x0001e579) cell_graphic2_pane_g5

0x0004,

0xfde0,	// (0x0001f62f) cell_graphic2_pane_g_ParamLimits

0xfde0,	// (0x0001f62f) cell_graphic2_pane_g

0xed4a,	// (0x0001e599) cell_graphic2_pane_t1_ParamLimits

0xed4a,	// (0x0001e599) cell_graphic2_pane_t1

0x5572,	// (0x00014dc1) grid_highlight_pane_cp11_ParamLimits

0x5572,	// (0x00014dc1) grid_highlight_pane_cp11

0x2ae1,	// (0x00012330) bg_button_pane_cp05

0xed61,	// (0x0001e5b0) cell_graphic2_control_pane_g1

0x71a7,	// (0x000169f6) bg_touch_area_indi_pane_g1

0x96dd,	// (0x00018f2c) aid_cmod_rocker_key_size

0x96e7,	// (0x00018f36) aid_cmode_itu_key_size

0x96f1,	// (0x00018f40) main_cmode_video_pane

0x96fb,	// (0x00018f4a) main_comp_mode_itu_pane

0x9707,	// (0x00018f56) main_comp_mode_rocker_pane

0x9713,	// (0x00018f62) cell_cmode_rocker_pane_ParamLimits

0x9713,	// (0x00018f62) cell_cmode_rocker_pane

0x9727,	// (0x00018f76) cell_cmode_itu_pane_ParamLimits

0x9727,	// (0x00018f76) cell_cmode_itu_pane

0x2ae1,	// (0x00012330) bg_button_pane_cp06_ParamLimits

0x2ae1,	// (0x00012330) bg_button_pane_cp06

0x7431,	// (0x00016c80) cell_cmode_rocker_pane_g1_ParamLimits

0x7431,	// (0x00016c80) cell_cmode_rocker_pane_g1

0x8d04,	// (0x00018553) cell_cmode_rocker_pane_g2_ParamLimits

0x8d04,	// (0x00018553) cell_cmode_rocker_pane_g2

0x0001,

0xfdeb,	// (0x0001f63a) cell_cmode_rocker_pane_g_ParamLimits

0xfdeb,	// (0x0001f63a) cell_cmode_rocker_pane_g

0x1bb1,	// (0x00011400) bg_button_pane_cp07

0x973e,	// (0x00018f8d) cell_cmode_itu_pane_g1

0x9747,	// (0x00018f96) cell_cmode_itu_pane_t1

0x9755,	// (0x00018fa4) cell_cmode_itu_pane_t2

0x0001,

0xfdf0,	// (0x0001f63f) cell_cmode_itu_pane_t

0x8f32,	// (0x00018781) aid_touch_ctrl_left

0x8f3a,	// (0x00018789) aid_touch_ctrl_right

0x1bb1,	// (0x00011400) compa_mode_pane

0xed6e,	// (0x0001e5bd) aid_cmod_rocker_key_size_cp

0xed78,	// (0x0001e5c7) aid_cmode_itu_key_size_cp

0x9777,	// (0x00018fc6) compa_mode_pane_g1

0x977f,	// (0x00018fce) compa_mode_pane_g2

0x9787,	// (0x00018fd6) compa_mode_pane_g3

0x0002,

0xfdf5,	// (0x0001f644) compa_mode_pane_g

0xed82,	// (0x0001e5d1) main_comp_mode_itu_pane_cp

0xed8a,	// (0x0001e5d9) main_comp_mode_rocker_pane_cp

0xed92,	// (0x0001e5e1) cell_cmode_itu_pane_cp_ParamLimits

0xed92,	// (0x0001e5e1) cell_cmode_itu_pane_cp

0xeda7,	// (0x0001e5f6) cell_cmode_rocker_pane_cp_ParamLimits

0xeda7,	// (0x0001e5f6) cell_cmode_rocker_pane_cp

0x2ae1,	// (0x00012330) bg_button_pane_cp06_cp_ParamLimits

0x2ae1,	// (0x00012330) bg_button_pane_cp06_cp

0x7431,	// (0x00016c80) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7431,	// (0x00016c80) cell_cmode_rocker_pane_g1_cp

0x71a7,	// (0x000169f6) cell_cmode_rocker_pane_g2_cp

0x1bb1,	// (0x00011400) bg_button_pane_cp07_cp

0xedb9,	// (0x0001e608) cell_cmode_itu_pane_g1_cp

0xedc2,	// (0x0001e611) cell_cmode_itu_pane_t1_cp

0xedc2,	// (0x0001e611) cell_cmode_itu_pane_t2_cp

0xd87a,	// (0x0001d0c9) settings_code_pane_cp2

0x1ca5,	// (0x000114f4) bg_popup_window_pane_cp3_ParamLimits

0x2137,	// (0x00011986) heading_pane_cp3_ParamLimits

0x2143,	// (0x00011992) listscroll_popup_graphic_pane_ParamLimits

0x0ee2,	// (0x00010731) fep_hwr_aid_pane_ParamLimits

0x1375,	// (0x00010bc4) aid_touch_sctrl_top_ParamLimits

0x1390,	// (0x00010bdf) sctrl_sk_top_pane_g1_ParamLimits

0x114f,	// (0x0001099e) sctrl_sk_top_pane_g2_ParamLimits

0xfd30,	// (0x0001f57f) sctrl_sk_top_pane_g_ParamLimits

0x139d,	// (0x00010bec) sctrl_sk_top_pane_t1_ParamLimits

0x1375,	// (0x00010bc4) aid_touch_sctrl_bottom_ParamLimits

0x139d,	// (0x00010bec) sctrl_sk_bottom_pane_t1_ParamLimits

0x8e78,	// (0x000186c7) aid_area_touch_clock

0xb8ea,	// (0x0001b139) aid_vkb2_area_top_pane_cell_ParamLimits

0xb8ea,	// (0x0001b139) aid_vkb2_area_top_pane_cell

0xb995,	// (0x0001b1e4) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb995,	// (0x0001b1e4) aid_vkb2_area_bottom_pane_cell

0x9402,	// (0x00018c51) popup_char_count_window

0x97dd,	// (0x0001902c) popup_char_count_window_g1

0x97e6,	// (0x00019035) popup_char_count_window_g2

0x97ef,	// (0x0001903e) popup_char_count_window_g3

0x0002,

0xfdfc,	// (0x0001f64b) popup_char_count_window_g

0x97f8,	// (0x00019047) popup_char_count_window_t1

0x144a,	// (0x00010c99) popup_fep_char_preview_window_ParamLimits

0x144a,	// (0x00010c99) popup_fep_char_preview_window

0xb90a,	// (0x0001b159) vkb2_top_candi_pane_ParamLimits

0xb90a,	// (0x0001b159) vkb2_top_candi_pane

0xedd0,	// (0x0001e61f) cell_vkb2_top_candi_pane_ParamLimits

0xedd0,	// (0x0001e61f) cell_vkb2_top_candi_pane

0x19c1,	// (0x00011210) bg_popup_fep_char_preview_window_ParamLimits

0x19c1,	// (0x00011210) bg_popup_fep_char_preview_window

0x19cf,	// (0x0001121e) popup_fep_char_preview_window_t1_ParamLimits

0x19cf,	// (0x0001121e) popup_fep_char_preview_window_t1

0x9857,	// (0x000190a6) bg_popup_fep_char_preview_window_g1

0x985f,	// (0x000190ae) bg_popup_fep_char_preview_window_g2

0x9867,	// (0x000190b6) bg_popup_fep_char_preview_window_g3

0x986f,	// (0x000190be) bg_popup_fep_char_preview_window_g4

0x9877,	// (0x000190c6) bg_popup_fep_char_preview_window_g5

0x1a09,	// (0x00011258) bg_popup_fep_char_preview_window_g6

0x987f,	// (0x000190ce) bg_popup_fep_char_preview_window_g7

0x9887,	// (0x000190d6) bg_popup_fep_char_preview_window_g8

0x988f,	// (0x000190de) bg_popup_fep_char_preview_window_g9

0x0008,

0xfe03,	// (0x0001f652) bg_popup_fep_char_preview_window_g

0x114f,	// (0x0001099e) cell_vkb2_top_candi_pane_g1_ParamLimits

0x114f,	// (0x0001099e) cell_vkb2_top_candi_pane_g1

0x115d,	// (0x000109ac) cell_vkb2_top_candi_pane_g2_ParamLimits

0x115d,	// (0x000109ac) cell_vkb2_top_candi_pane_g2

0x93e1,	// (0x00018c30) cell_vkb2_top_candi_pane_g3_ParamLimits

0x93e1,	// (0x00018c30) cell_vkb2_top_candi_pane_g3

0x1a11,	// (0x00011260) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1a11,	// (0x00011260) cell_vkb2_top_candi_pane_g4

0x7b03,	// (0x00017352) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7b03,	// (0x00017352) cell_vkb2_top_candi_pane_g5

0x1a32,	// (0x00011281) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1a32,	// (0x00011281) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe16,	// (0x0001f665) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe16,	// (0x0001f665) cell_vkb2_top_candi_pane_g

0x1a40,	// (0x0001128f) cell_vkb2_top_candi_pane_t1

0x0d42,	// (0x00010591) aid_size_touch_slider_mark_ParamLimits

0x0d42,	// (0x00010591) aid_size_touch_slider_mark

0xeb5b,	// (0x0001e3aa) grid_graphic2_catg_pane_ParamLimits

0xeb5b,	// (0x0001e3aa) grid_graphic2_catg_pane

0xebfe,	// (0x0001e44d) popup_grid_graphic2_window_t1_ParamLimits

0xebfe,	// (0x0001e44d) popup_grid_graphic2_window_t1

0xec14,	// (0x0001e463) popup_grid_graphic2_window_t2_ParamLimits

0xec14,	// (0x0001e463) popup_grid_graphic2_window_t2

0x0001,

0xfdd6,	// (0x0001f625) popup_grid_graphic2_window_t_ParamLimits

0xfdd6,	// (0x0001f625) popup_grid_graphic2_window_t

0x2ae1,	// (0x00012330) bg_button_pane_cp05_ParamLimits

0xed61,	// (0x0001e5b0) cell_graphic2_control_pane_g1_ParamLimits

0xee24,	// (0x0001e673) cell_graphic2_catg_pane_ParamLimits

0xee24,	// (0x0001e673) cell_graphic2_catg_pane

0x1bb1,	// (0x00011400) bg_button_pane_cp12

0xee36,	// (0x0001e685) cell_graphic2_catg_pane_g1

0x8e44,	// (0x00018693) cell_tb_ext_pane_t1_ParamLimits

0x17dd,	// (0x0001102c) vkb2_top_cell_right_narrow_pane_ParamLimits

0x17dd,	// (0x0001102c) vkb2_top_cell_right_narrow_pane

0x17f5,	// (0x00011044) vkb2_top_cell_right_wide_pane_ParamLimits

0x17f5,	// (0x00011044) vkb2_top_cell_right_wide_pane

0x0ed4,	// (0x00010723) bg_vkb2_func_pane_ParamLimits

0x0ed4,	// (0x00010723) bg_vkb2_func_pane

0x1866,	// (0x000110b5) vkb2_top_cell_left_pane_g1_ParamLimits

0x0ed4,	// (0x00010723) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0ed4,	// (0x00010723) bg_vkb2_fuc_pane_cp03

0x18da,	// (0x00011129) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4835,	// (0x00014084) bg_vkb2_func_pane_g1

0x483d,	// (0x0001408c) bg_vkb2_func_pane_g2

0x484d,	// (0x0001409c) bg_vkb2_func_pane_g3

0x4845,	// (0x00014094) bg_vkb2_func_pane_g4

0x4855,	// (0x000140a4) bg_vkb2_func_pane_g5

0x485d,	// (0x000140ac) bg_vkb2_func_pane_g6

0x4865,	// (0x000140b4) bg_vkb2_func_pane_g7

0x486d,	// (0x000140bc) bg_vkb2_func_pane_g8

0x482d,	// (0x0001407c) bg_vkb2_func_pane_g9

0x0008,

0xfe23,	// (0x0001f672) bg_vkb2_func_pane_g

0x0ed4,	// (0x00010723) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0ed4,	// (0x00010723) bg_vkb2_fuc_pane_cp01

0x1866,	// (0x000110b5) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1866,	// (0x000110b5) vkb2_top_cell_right_wide_pane_g1

0x0ed4,	// (0x00010723) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0ed4,	// (0x00010723) bg_vkb2_fuc_pane_cp02

0x18da,	// (0x00011129) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x18da,	// (0x00011129) vkb2_top_cell_right_narrow_pane_g1

0xe3e2,	// (0x0001dc31) aid_touch_area_decrease_ParamLimits

0xe3e2,	// (0x0001dc31) aid_touch_area_decrease

0xe41c,	// (0x0001dc6b) aid_touch_area_increase_ParamLimits

0xe41c,	// (0x0001dc6b) aid_touch_area_increase

0xe444,	// (0x0001dc93) aid_touch_area_mute_ParamLimits

0xe444,	// (0x0001dc93) aid_touch_area_mute

0xe474,	// (0x0001dcc3) aid_touch_area_slider_ParamLimits

0xe474,	// (0x0001dcc3) aid_touch_area_slider

0xe4b4,	// (0x0001dd03) popup_slider_window_g4_ParamLimits

0xe4b4,	// (0x0001dd03) popup_slider_window_g4

0xe4dc,	// (0x0001dd2b) popup_slider_window_g5_ParamLimits

0xe4dc,	// (0x0001dd2b) popup_slider_window_g5

0xe510,	// (0x0001dd5f) popup_slider_window_g6_ParamLimits

0xe510,	// (0x0001dd5f) popup_slider_window_g6

0x8c17,	// (0x00018466) popup_slider_window_t2_ParamLimits

0x8c17,	// (0x00018466) popup_slider_window_t2

0x0001,

0xfd24,	// (0x0001f573) popup_slider_window_t_ParamLimits

0xfd24,	// (0x0001f573) popup_slider_window_t

0xe52c,	// (0x0001dd7b) slider_pane_ParamLimits

0xe52c,	// (0x0001dd7b) slider_pane

0x98b2,	// (0x00019101) slider_pane_g1_ParamLimits

0x98b2,	// (0x00019101) slider_pane_g1

0x98c6,	// (0x00019115) slider_pane_g2_ParamLimits

0x98c6,	// (0x00019115) slider_pane_g2

0x98dc,	// (0x0001912b) slider_pane_g3_ParamLimits

0x98dc,	// (0x0001912b) slider_pane_g3

0x0003,

0xfe36,	// (0x0001f685) slider_pane_g_ParamLimits

0xfe36,	// (0x0001f685) slider_pane_g

0xcf80,	// (0x0001c7cf) popup_tb_float_extension_window_ParamLimits

0xcf80,	// (0x0001c7cf) popup_tb_float_extension_window

0x9908,	// (0x00019157) aid_size_cell_tb_float_ext

0x1bb1,	// (0x00011400) bg_popup_sub_window_cp28

0x9914,	// (0x00019163) grid_tb_float_ext_pane

0x9920,	// (0x0001916f) cell_tb_float_ext_pane_ParamLimits

0x9920,	// (0x0001916f) cell_tb_float_ext_pane

0x993c,	// (0x0001918b) cell_tb_float_ext_pane_g1

0x9945,	// (0x00019194) grid_highlight_pane_cp12

0xb6eb,	// (0x0001af3a) cell_last_hwr_side_pane_ParamLimits

0xb6eb,	// (0x0001af3a) cell_last_hwr_side_pane

0x71a7,	// (0x000169f6) cell_last_hwr_side_pane_g1

0x994e,	// (0x0001919d) cell_last_hwr_side_pane_g2

0x0001,

0xfe3f,	// (0x0001f68e) cell_last_hwr_side_pane_g

0xba71,	// (0x0001b2c0) vkb2_area_bottom_space_btn_pane_ParamLimits

0xba71,	// (0x0001b2c0) vkb2_area_bottom_space_btn_pane

0x114f,	// (0x0001099e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9475,	// (0x00018cc4) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1a40,	// (0x0001128f) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1a5e,	// (0x000112ad) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1a5e,	// (0x000112ad) vkb2_area_bottom_space_btn_pane_g1

0x1a98,	// (0x000112e7) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1a98,	// (0x000112e7) vkb2_area_bottom_space_btn_pane_g2

0x1ace,	// (0x0001131d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1ace,	// (0x0001131d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe44,	// (0x0001f693) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe44,	// (0x0001f693) vkb2_area_bottom_space_btn_pane_g

0x0f99,	// (0x000107e8) cel_fep_hwr_func_pane_ParamLimits

0x0f99,	// (0x000107e8) cel_fep_hwr_func_pane

0xb6c0,	// (0x0001af0f) cell_hwr_side_button_pane_ParamLimits

0xb6c0,	// (0x0001af0f) cell_hwr_side_button_pane

0x8e78,	// (0x000186c7) aid_area_touch_clock_ParamLimits

0x1f49,	// (0x00011798) bg_uniindi_top_pane_ParamLimits

0x8e8c,	// (0x000186db) uniindi_top_pane_g1_ParamLimits

0x8ea2,	// (0x000186f1) uniindi_top_pane_g2_ParamLimits

0x8eae,	// (0x000186fd) uniindi_top_pane_g3_ParamLimits

0x8ebf,	// (0x0001870e) uniindi_top_pane_g4_ParamLimits

0xfd5c,	// (0x0001f5ab) uniindi_top_pane_g_ParamLimits

0x8ecc,	// (0x0001871b) uniindi_top_pane_t1_ParamLimits

0x1f49,	// (0x00011798) bg_vkb2_func_pane_cp01_ParamLimits

0x1f49,	// (0x00011798) bg_vkb2_func_pane_cp01

0x9957,	// (0x000191a6) cel_fep_hwr_func_pane_g1_ParamLimits

0x9957,	// (0x000191a6) cel_fep_hwr_func_pane_g1

0x1f49,	// (0x00011798) bg_vkb2_func_pane_cp02_ParamLimits

0x1f49,	// (0x00011798) bg_vkb2_func_pane_cp02

0x9957,	// (0x000191a6) cell_hwr_side_button_pane_g1_ParamLimits

0x9957,	// (0x000191a6) cell_hwr_side_button_pane_g1

0x4680,	// (0x00013ecf) status_pane_g4_ParamLimits

0x4680,	// (0x00013ecf) status_pane_g4

0x469a,	// (0x00013ee9) status_pane_t1

0x6f43,	// (0x00016792) form2_midp_gauge_slider_cont_pane

0x6f4b,	// (0x0001679a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdbb7,	// (0x0001d406) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdbc9,	// (0x0001d418) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb1c,	// (0x0001f36b) form2_midp_gauge_slider_pane_t_ParamLimits

0x6f81,	// (0x000167d0) form2_midp_slider_pane_ParamLimits

0x1412,	// (0x00010c61) aid_size_cell_func_vkb2_ParamLimits

0x1412,	// (0x00010c61) aid_size_cell_func_vkb2

0x98f4,	// (0x00019143) slider_pane_g4_ParamLimits

0x98f4,	// (0x00019143) slider_pane_g4

0xbad2,	// (0x0001b321) form2_midp_gauge_slider_pane_t2_cp01

0xbae0,	// (0x0001b32f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbae0,	// (0x0001b32f) form2_midp_gauge_slider_pane_t3_cp01

0x1b43,	// (0x00011392) form2_midp_slider_pane_cp01

0x1bb1,	// (0x00011400) navi_smil_pane

0x9990,	// (0x000191df) navi_smil_pane_g1

0x9998,	// (0x000191e7) navi_smil_pane_t1

0x9965,	// (0x000191b4) form2_midp_slider_pane_g1

0x996e,	// (0x000191bd) form2_midp_slider_pane_g2

0x9976,	// (0x000191c5) form2_midp_slider_pane_g3

0x9965,	// (0x000191b4) form2_midp_slider_pane_g4

0xee3f,	// (0x0001e68e) form2_midp_slider_pane_g5

0x0004,

0xfe4d,	// (0x0001f69c) form2_midp_slider_pane_g

0x1b08,	// (0x00011357) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1b08,	// (0x00011357) vkb2_area_bottom_space_btn_pane_g4

0xd160,	// (0x0001c9af) lc0_navi_pane_ParamLimits

0xd160,	// (0x0001c9af) lc0_navi_pane

0xd1d0,	// (0x0001ca1f) lc0_stat_indi_pane_ParamLimits

0xd1d0,	// (0x0001ca1f) lc0_stat_indi_pane

0xd1e5,	// (0x0001ca34) ls0_title_pane_ParamLimits

0xd1e5,	// (0x0001ca34) ls0_title_pane

0x2ae1,	// (0x00012330) bg_popup_sub_pane_cp14_ParamLimits

0x8e5f,	// (0x000186ae) list_uniindi_pane_ParamLimits

0x8e6b,	// (0x000186ba) uniindi_top_pane_ParamLimits

0x8f0a,	// (0x00018759) list_single_uniindi_pane_g1_ParamLimits

0x8f1d,	// (0x0001876c) list_single_uniindi_pane_t1_ParamLimits

0xbafd,	// (0x0001b34c) lc0_stat_clock_pane_ParamLimits

0xbafd,	// (0x0001b34c) lc0_stat_clock_pane

0xee48,	// (0x0001e697) lc0_stat_indi_pane_g1_ParamLimits

0xee48,	// (0x0001e697) lc0_stat_indi_pane_g1

0xee55,	// (0x0001e6a4) lc0_stat_indi_pane_g2_ParamLimits

0xee55,	// (0x0001e6a4) lc0_stat_indi_pane_g2

0x0001,

0xfe58,	// (0x0001f6a7) lc0_stat_indi_pane_g_ParamLimits

0xfe58,	// (0x0001f6a7) lc0_stat_indi_pane_g

0xbb0a,	// (0x0001b359) lc0_uni_indicator_pane_ParamLimits

0xbb0a,	// (0x0001b359) lc0_uni_indicator_pane

0xee62,	// (0x0001e6b1) ls0_title_pane_g1_ParamLimits

0xee62,	// (0x0001e6b1) ls0_title_pane_g1

0xee76,	// (0x0001e6c5) ls0_title_pane_t1_ParamLimits

0xee76,	// (0x0001e6c5) ls0_title_pane_t1

0xbb17,	// (0x0001b366) lc0_uni_indicator_pane_g1_ParamLimits

0xbb17,	// (0x0001b366) lc0_uni_indicator_pane_g1

0x9a0a,	// (0x00019259) lc0_stat_clock_pane_t1

0x1bb1,	// (0x00011400) main_ai5_pane

0x9a18,	// (0x00019267) ai5_sk_pane_ParamLimits

0x9a18,	// (0x00019267) ai5_sk_pane

0xeea4,	// (0x0001e6f3) cell_ai5_widget_pane_ParamLimits

0xeea4,	// (0x0001e6f3) cell_ai5_widget_pane

0x9a9b,	// (0x000192ea) aid_size_cell_widget_grid

0x9aaf,	// (0x000192fe) bg_ai5_widget_pane_ParamLimits

0x9aaf,	// (0x000192fe) bg_ai5_widget_pane

0xef31,	// (0x0001e780) cell_ai5_widget_pane_g2

0xef41,	// (0x0001e790) cell_ai5_widget_pane_g3

0xef55,	// (0x0001e7a4) cell_ai5_widget_pane_g4

0xef61,	// (0x0001e7b0) cell_ai5_widget_pane_g5

0xef6d,	// (0x0001e7bc) cell_ai5_widget_pane_g6

0xef79,	// (0x0001e7c8) cell_ai5_widget_pane_g7

0xefc1,	// (0x0001e810) cell_ai5_widget_pane_t1_ParamLimits

0xefc1,	// (0x0001e810) cell_ai5_widget_pane_t1

0xefde,	// (0x0001e82d) cell_ai5_widget_pane_t2_ParamLimits

0xefde,	// (0x0001e82d) cell_ai5_widget_pane_t2

0xeff6,	// (0x0001e845) cell_ai5_widget_pane_t3_ParamLimits

0xeff6,	// (0x0001e845) cell_ai5_widget_pane_t3

0xf00e,	// (0x0001e85d) cell_ai5_widget_pane_t4_ParamLimits

0xf00e,	// (0x0001e85d) cell_ai5_widget_pane_t4

0xf028,	// (0x0001e877) cell_ai5_widget_pane_t5_ParamLimits

0xf028,	// (0x0001e877) cell_ai5_widget_pane_t5

0x9bef,	// (0x0001943e) cell_ai5_widget_pane_t6_ParamLimits

0x9bef,	// (0x0001943e) cell_ai5_widget_pane_t6

0x9c01,	// (0x00019450) cell_ai5_widget_pane_t7_ParamLimits

0x9c01,	// (0x00019450) cell_ai5_widget_pane_t7

0xf047,	// (0x0001e896) cell_ai5_widget_pane_t8_ParamLimits

0xf047,	// (0x0001e896) cell_ai5_widget_pane_t8

0x0009,

0xfe72,	// (0x0001f6c1) cell_ai5_widget_pane_t_ParamLimits

0xfe72,	// (0x0001f6c1) cell_ai5_widget_pane_t

0xf08f,	// (0x0001e8de) grid_ai5_widget_pane

0x2ae1,	// (0x00012330) highlight_cell_ai5_widget_pane_ParamLimits

0x2ae1,	// (0x00012330) highlight_cell_ai5_widget_pane

0xf0a6,	// (0x0001e8f5) ai5_sk_left_pane

0xf0b0,	// (0x0001e8ff) ai5_sk_middle_pane

0xf0ba,	// (0x0001e909) ai5_sk_right_pane

0x9c97,	// (0x000194e6) bg_ai5_widget_pane_g1_ParamLimits

0x9c97,	// (0x000194e6) bg_ai5_widget_pane_g1

0x9ca3,	// (0x000194f2) bg_ai5_widget_pane_g2_ParamLimits

0x9ca3,	// (0x000194f2) bg_ai5_widget_pane_g2

0x9caf,	// (0x000194fe) bg_ai5_widget_pane_g3_ParamLimits

0x9caf,	// (0x000194fe) bg_ai5_widget_pane_g3

0x9cbb,	// (0x0001950a) bg_ai5_widget_pane_g4_ParamLimits

0x9cbb,	// (0x0001950a) bg_ai5_widget_pane_g4

0x9cc7,	// (0x00019516) bg_ai5_widget_pane_g5_ParamLimits

0x9cc7,	// (0x00019516) bg_ai5_widget_pane_g5

0x9cd3,	// (0x00019522) bg_ai5_widget_pane_g6_ParamLimits

0x9cd3,	// (0x00019522) bg_ai5_widget_pane_g6

0x9cdf,	// (0x0001952e) bg_ai5_widget_pane_g7_ParamLimits

0x9cdf,	// (0x0001952e) bg_ai5_widget_pane_g7

0x9ceb,	// (0x0001953a) bg_ai5_widget_pane_g8_ParamLimits

0x9ceb,	// (0x0001953a) bg_ai5_widget_pane_g8

0x9cf7,	// (0x00019546) bg_ai5_widget_pane_g9_ParamLimits

0x9cf7,	// (0x00019546) bg_ai5_widget_pane_g9

0x0008,

0xfe87,	// (0x0001f6d6) bg_ai5_widget_pane_g_ParamLimits

0xfe87,	// (0x0001f6d6) bg_ai5_widget_pane_g

0x9d1e,	// (0x0001956d) cell_shortcut_ai5_widget_pane_ParamLimits

0x9d1e,	// (0x0001956d) cell_shortcut_ai5_widget_pane

0x1d8b,	// (0x000115da) bg_cell_shortcut_ai5_widget_pane

0x9d30,	// (0x0001957f) cell_grid_ai5_widget_pane_g1

0x9d39,	// (0x00019588) highlight_cell_shortcut_ai5_widget_pane

0x4835,	// (0x00014084) ai5_sk_left_pane_g1

0x9d41,	// (0x00019590) ai5_sk_left_pane_g2

0x9d49,	// (0x00019598) ai5_sk_left_pane_g3

0x9d51,	// (0x000195a0) ai5_sk_left_pane_g4

0x0003,

0xfe9a,	// (0x0001f6e9) ai5_sk_left_pane_g

0x9d59,	// (0x000195a8) ai5_sk_left_pane_t1

0x483d,	// (0x0001408c) ai5_sk_right_pane_g1

0x9d67,	// (0x000195b6) ai5_sk_right_pane_g2

0x9d6f,	// (0x000195be) ai5_sk_right_pane_g3

0x9d77,	// (0x000195c6) ai5_sk_right_pane_g4

0x0003,

0xfea3,	// (0x0001f6f2) ai5_sk_right_pane_g

0x9d7f,	// (0x000195ce) ai5_sk_right_pane_t1

0x483d,	// (0x0001408c) ai5_sk_middle_pane_g1

0x4835,	// (0x00014084) ai5_sk_middle_pane_g2

0x4855,	// (0x000140a4) ai5_sk_middle_pane_g3

0x9d6f,	// (0x000195be) ai5_sk_middle_pane_g4

0x9d49,	// (0x00019598) ai5_sk_middle_pane_g5

0x9d8d,	// (0x000195dc) ai5_sk_middle_pane_g6

0xf0c4,	// (0x0001e913) ai5_sk_middle_pane_g7

0x0006,

0xfeac,	// (0x0001f6fb) ai5_sk_middle_pane_g

0xd04a,	// (0x0001c899) aid_touch_area_size_lc0_ParamLimits

0xd04a,	// (0x0001c899) aid_touch_area_size_lc0

0x117e,	// (0x000109cd) cell_hwr_candidate_pane_t1_ParamLimits

0x4338,	// (0x00013b87) aid_touch_navi_pane

0xd2ef,	// (0x0001cb3e) status_dt_navi_pane_ParamLimits

0xd2ef,	// (0x0001cb3e) status_dt_navi_pane

0xd307,	// (0x0001cb56) status_dt_sta_pane_ParamLimits

0xd307,	// (0x0001cb56) status_dt_sta_pane

0xf0cc,	// (0x0001e91b) dt_sta_controll_pane

0xf0d9,	// (0x0001e928) dt_sta_indi_pane

0xf0e6,	// (0x0001e935) dt_sta_title_pane

0x1f49,	// (0x00011798) bg_dt_sta_indi_pane_ParamLimits

0x1f49,	// (0x00011798) bg_dt_sta_indi_pane

0xf0f8,	// (0x0001e947) dt_sta_battery_pane

0xf100,	// (0x0001e94f) dt_sta_indi_pane_g1

0xf109,	// (0x0001e958) dt_sta_indi_pane_g2

0xf112,	// (0x0001e961) dt_sta_indi_pane_g3

0x0002,

0xfebb,	// (0x0001f70a) dt_sta_indi_pane_g

0xf11b,	// (0x0001e96a) dt_sta_signal_pane

0x2ae1,	// (0x00012330) bg_dt_sta_title_pane_ParamLimits

0x2ae1,	// (0x00012330) bg_dt_sta_title_pane

0xf124,	// (0x0001e973) dt_sta_title_pane_g1

0xf12c,	// (0x0001e97b) dt_sta_title_pane_t1_ParamLimits

0xf12c,	// (0x0001e97b) dt_sta_title_pane_t1

0x1bb1,	// (0x00011400) bg_dt_sta_control_pane

0xf141,	// (0x0001e990) dt_sta_controll_pane_g1

0xf14a,	// (0x0001e999) bg_dt_sta_title_pane_g1

0xf153,	// (0x0001e9a2) bg_dt_sta_title_pane_g2

0xf15c,	// (0x0001e9ab) bg_dt_sta_title_pane_g3

0x0002,

0xfec2,	// (0x0001f711) bg_dt_sta_title_pane_g

0x71a7,	// (0x000169f6) bg_dt_sta_indi_pane_g1

0x9e3b,	// (0x0001968a) dt_sta_signal_pane_g1

0x9e43,	// (0x00019692) dt_sta_signal_pane_g2

0x0001,

0xfec9,	// (0x0001f718) dt_sta_signal_pane_g

0x9e4b,	// (0x0001969a) dt_sta_battery_pane_g1

0x9e54,	// (0x000196a3) dt_sta_battery_pane_t1

0x71a7,	// (0x000169f6) bg_dt_sta_control_pane_g1

0x339f,	// (0x00012bee) fep_china_uni_eep_pane

0x33a7,	// (0x00012bf6) fep_china_uni_entry_pane_ParamLimits

0x33b7,	// (0x00012c06) popup_fep_china_uni_window_g1_ParamLimits

0x33c7,	// (0x00012c16) popup_fep_china_uni_window_g2_ParamLimits

0x33c7,	// (0x00012c16) popup_fep_china_uni_window_g2

0x0001,

0xf758,	// (0x0001efa7) popup_fep_china_uni_window_g_ParamLimits

0xf758,	// (0x0001efa7) popup_fep_china_uni_window_g

0x9e63,	// (0x000196b2) fep_china_uni_eep_pane_g1

0x9e6b,	// (0x000196ba) fep_china_uni_eep_pane_t1

0x9987,	// (0x000191d6) aid_touch_area_size_smil_player

0x4490,	// (0x00013cdf) lc0_clock_pane

0x468e,	// (0x00013edd) status_pane_g5_ParamLimits

0x468e,	// (0x00013edd) status_pane_g5

0xcaaa,	// (0x0001c2f9) popup_keymap_window

0x464c,	// (0x00013e9b) status_icon_pane

0xef41,	// (0x0001e790) cell_ai5_widget_pane_g3_ParamLimits

0xef55,	// (0x0001e7a4) cell_ai5_widget_pane_g4_ParamLimits

0xef61,	// (0x0001e7b0) cell_ai5_widget_pane_g5_ParamLimits

0xef85,	// (0x0001e7d4) cell_ai5_widget_pane_g8_ParamLimits

0xef85,	// (0x0001e7d4) cell_ai5_widget_pane_g8

0xef99,	// (0x0001e7e8) cell_ai5_widget_pane_g9_ParamLimits

0xef99,	// (0x0001e7e8) cell_ai5_widget_pane_g9

0xefad,	// (0x0001e7fc) cell_ai5_widget_pane_g10_ParamLimits

0xefad,	// (0x0001e7fc) cell_ai5_widget_pane_g10

0x9e7a,	// (0x000196c9) status_icon_pane_g1

0x1bb1,	// (0x00011400) bg_popup_sub_pane_cp13

0x9e82,	// (0x000196d1) popup_keymap_window_t1

0xc89a,	// (0x0001c0e9) control_pane_g6_ParamLimits

0xc89a,	// (0x0001c0e9) control_pane_g6

0xc8a7,	// (0x0001c0f6) control_pane_g7_ParamLimits

0xc8a7,	// (0x0001c0f6) control_pane_g7

0xc8b4,	// (0x0001c103) control_pane_g8_ParamLimits

0xc8b4,	// (0x0001c103) control_pane_g8

0xf0cc,	// (0x0001e91b) dt_sta_controll_pane_ParamLimits

0xf0d9,	// (0x0001e928) dt_sta_indi_pane_ParamLimits

0xf0e6,	// (0x0001e935) dt_sta_title_pane_ParamLimits

0x247e,	// (0x00011ccd) aid_size_touch_scroll_bar_cale

0x01c0,	// (0x0000fa0f) popup_discreet_window_ParamLimits

0x01c0,	// (0x0000fa0f) popup_discreet_window

0xb32a,	// (0x0001ab79) popup_sk_window

0x4efb,	// (0x0001474a) bg_popup_sub_pane_cp28_ParamLimits

0x4efb,	// (0x0001474a) bg_popup_sub_pane_cp28

0x9e90,	// (0x000196df) popup_discreet_window_g1_ParamLimits

0x9e90,	// (0x000196df) popup_discreet_window_g1

0x9eb0,	// (0x000196ff) popup_discreet_window_t1_ParamLimits

0x9eb0,	// (0x000196ff) popup_discreet_window_t1

0x9ece,	// (0x0001971d) popup_discreet_window_t2_ParamLimits

0x9ece,	// (0x0001971d) popup_discreet_window_t2

0x0002,

0xfece,	// (0x0001f71d) popup_discreet_window_t_ParamLimits

0xfece,	// (0x0001f71d) popup_discreet_window_t

0x1b79,	// (0x000113c8) popup_sk_window_g1

0x1b83,	// (0x000113d2) popup_sk_window_g2

0x0001,

0xfed5,	// (0x0001f724) popup_sk_window_g

0x9f20,	// (0x0001976f) popup_sk_window_t1

0x9f2e,	// (0x0001977d) popup_sk_window_t1_copy1

0xef31,	// (0x0001e780) cell_ai5_widget_pane_g2_ParamLimits

0xf059,	// (0x0001e8a8) cell_ai5_widget_pane_t9_ParamLimits

0xf059,	// (0x0001e8a8) cell_ai5_widget_pane_t9

0x1bb1,	// (0x00011400) main_fep_fshwr2_pane

0xf165,	// (0x0001e9b4) aid_fshwr2_btn_pane

0xf16d,	// (0x0001e9bc) aid_fshwr2_syb_pane

0xf175,	// (0x0001e9c4) aid_fshwr2_txt_pane

0xf17d,	// (0x0001e9cc) fshwr2_func_candi_pane

0xf187,	// (0x0001e9d6) fshwr2_hwr_syb_pane

0xf193,	// (0x0001e9e2) fshwr2_icf_pane

0x1bb1,	// (0x00011400) fshwr2_icf_bg_pane

0xf19d,	// (0x0001e9ec) fshwr2_icf_pane_t1_ParamLimits

0xf19d,	// (0x0001e9ec) fshwr2_icf_pane_t1

0x71a7,	// (0x000169f6) fshwr2_func_candi_pane_g1

0x9fa1,	// (0x000197f0) fshwr2_func_candi_row_pane_ParamLimits

0x9fa1,	// (0x000197f0) fshwr2_func_candi_row_pane

0xf1b5,	// (0x0001ea04) cell_fshwr2_syb_pane_ParamLimits

0xf1b5,	// (0x0001ea04) cell_fshwr2_syb_pane

0x7431,	// (0x00016c80) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7431,	// (0x00016c80) fshwr2_hwr_syb_pane_g1

0x1bb1,	// (0x00011400) bg_popup_call_pane_cp01

0x9fcc,	// (0x0001981b) fshwr2_func_candi_cell_pane_ParamLimits

0x9fcc,	// (0x0001981b) fshwr2_func_candi_cell_pane

0x9ffe,	// (0x0001984d) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9ffe,	// (0x0001984d) fshwr2_func_candi_cell_bg_pane

0xa018,	// (0x00019867) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xa018,	// (0x00019867) fshwr2_func_candi_cell_pane_g1

0xa038,	// (0x00019887) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa038,	// (0x00019887) fshwr2_func_candi_cell_pane_t1

0x1bb1,	// (0x00011400) bg_button_pane_cp08

0x392d,	// (0x0001317c) cell_fshwr2_syb_bg_pane

0xf1ce,	// (0x0001ea1d) cell_fshwr2_syb_bg_pane_g1

0xf1d6,	// (0x0001ea25) cell_fshwr2_syb_bg_pane_t1

0x2ae1,	// (0x00012330) main_tmo_pane

0xd63e,	// (0x0001ce8d) uni_indicator_pane_g1_ParamLimits

0xd653,	// (0x0001cea2) uni_indicator_pane_g2_ParamLimits

0xd668,	// (0x0001ceb7) uni_indicator_pane_g3_ParamLimits

0xd67e,	// (0x0001cecd) uni_indicator_pane_g4_ParamLimits

0xd67e,	// (0x0001cecd) uni_indicator_pane_g4

0xd692,	// (0x0001cee1) uni_indicator_pane_g5_ParamLimits

0xd692,	// (0x0001cee1) uni_indicator_pane_g5

0xd6a6,	// (0x0001cef5) uni_indicator_pane_g6_ParamLimits

0xd6a6,	// (0x0001cef5) uni_indicator_pane_g6

0xf950,	// (0x0001f19f) uni_indicator_pane_g_ParamLimits

0xe3b2,	// (0x0001dc01) popup_tmo_note_window_ParamLimits

0xe3b2,	// (0x0001dc01) popup_tmo_note_window

0x1bb1,	// (0x00011400) fshwr2_bg_pane

0xa029,	// (0x00019878) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa029,	// (0x00019878) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeda,	// (0x0001f729) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeda,	// (0x0001f729) fshwr2_func_candi_cell_pane_g

0x71a7,	// (0x000169f6) bg_popup_window_pane_cp01

0xa062,	// (0x000198b1) bg_popup_window_pane_g1_cp01

0xa06b,	// (0x000198ba) bg_popup_window_pane_cp22_ParamLimits

0xa06b,	// (0x000198ba) bg_popup_window_pane_cp22

0xa079,	// (0x000198c8) listscroll_tmo_link_pane_ParamLimits

0xa079,	// (0x000198c8) listscroll_tmo_link_pane

0xa0b9,	// (0x00019908) popup_tmo_note_window_g1_ParamLimits

0xa0b9,	// (0x00019908) popup_tmo_note_window_g1

0xa0c6,	// (0x00019915) tmo_note_info_pane_ParamLimits

0xa0c6,	// (0x00019915) tmo_note_info_pane

0xf1e5,	// (0x0001ea34) list_tmo_note_info_pane_g1_ParamLimits

0xf1e5,	// (0x0001ea34) list_tmo_note_info_pane_g1

0xa0f7,	// (0x00019946) list_tmo_note_info_pane_g2_ParamLimits

0xa0f7,	// (0x00019946) list_tmo_note_info_pane_g2

0x0001,

0xfedf,	// (0x0001f72e) list_tmo_note_info_pane_g_ParamLimits

0xfedf,	// (0x0001f72e) list_tmo_note_info_pane_g

0xa113,	// (0x00019962) list_tmo_note_info_text_pane_ParamLimits

0xa113,	// (0x00019962) list_tmo_note_info_text_pane

0xa198,	// (0x000199e7) list_tmo_link_pane

0xa1a5,	// (0x000199f4) scroll_pane_cp20

0xa1b2,	// (0x00019a01) list_single_tmo_link_pane_ParamLimits

0xa1b2,	// (0x00019a01) list_single_tmo_link_pane

0xa1c2,	// (0x00019a11) list_single_tmo_link_pane_t1

0xa1d0,	// (0x00019a1f) list_tmo_note_info_text_pane_t1_ParamLimits

0xa1d0,	// (0x00019a1f) list_tmo_note_info_text_pane_t1

0xc462,	// (0x0001bcb1) aid_size_touch_scroll_bar_cp01_ParamLimits

0xc462,	// (0x0001bcb1) aid_size_touch_scroll_bar_cp01

0xc391,	// (0x0001bbe0) aid_size_touch_slider_marker

0xb31a,	// (0x0001ab69) popup_settings_window_ParamLimits

0xb31a,	// (0x0001ab69) popup_settings_window

0x3ce3,	// (0x00013532) popup_candi_list_indi_window

0x4338,	// (0x00013b87) aid_touch_navi_pane_ParamLimits

0x1349,	// (0x00010b98) rs_clock_indi_pane

0x1352,	// (0x00010ba1) sctrl_sk_bottom_pane_ParamLimits

0x1363,	// (0x00010bb2) sctrl_sk_top_pane_ParamLimits

0x1464,	// (0x00010cb3) popup_fep_tooltip_window

0x9a9b,	// (0x000192ea) aid_size_cell_widget_grid_ParamLimits

0xef25,	// (0x0001e774) cell_ai5_widget_pane_g1_ParamLimits

0xef25,	// (0x0001e774) cell_ai5_widget_pane_g1

0xef6d,	// (0x0001e7bc) cell_ai5_widget_pane_g6_ParamLimits

0xef79,	// (0x0001e7c8) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe5d,	// (0x0001f6ac) cell_ai5_widget_pane_g_ParamLimits

0xfe5d,	// (0x0001f6ac) cell_ai5_widget_pane_g

0xf07d,	// (0x0001e8cc) cell_ai5_widget_pane_t10_ParamLimits

0xf07d,	// (0x0001e8cc) cell_ai5_widget_pane_t10

0xf08f,	// (0x0001e8de) grid_ai5_widget_pane_ParamLimits

0x9d03,	// (0x00019552) cell_contacts_ai5_widget_pane_ParamLimits

0x9d03,	// (0x00019552) cell_contacts_ai5_widget_pane

0x9ee3,	// (0x00019732) popup_discreet_window_t3_ParamLimits

0x9ee3,	// (0x00019732) popup_discreet_window_t3

0x9f72,	// (0x000197c1) popup_fshwr2_char_preview_window_ParamLimits

0x9f72,	// (0x000197c1) popup_fshwr2_char_preview_window

0xf1fc,	// (0x0001ea4b) tmo_note_info_pane_t1

0xf211,	// (0x0001ea60) tmo_note_info_pane_t2

0xf22a,	// (0x0001ea79) tmo_note_info_pane_t3

0xa174,	// (0x000199c3) tmo_note_info_pane_t4

0xa186,	// (0x000199d5) tmo_note_info_pane_t5

0x0004,

0xfee4,	// (0x0001f733) tmo_note_info_pane_t

0xa198,	// (0x000199e7) list_tmo_link_pane_ParamLimits

0xa1a5,	// (0x000199f4) scroll_pane_cp20_ParamLimits

0x1bb1,	// (0x00011400) bg_popup_fep_char_preview_window_cp01

0xa1e9,	// (0x00019a38) popup_fshwr2_char_preview_window_t1

0xa1f7,	// (0x00019a46) popup_candi_list_indi_window_g1

0xa200,	// (0x00019a4f) bg_cell_contacts_ai5_widget_pane

0xa20c,	// (0x00019a5b) cell_contacts_ai5_widget_pane_g1

0xa220,	// (0x00019a6f) cell_contacts_ai5_widget_pane_g2

0xa22f,	// (0x00019a7e) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeef,	// (0x0001f73e) cell_contacts_ai5_widget_pane_g

0xa242,	// (0x00019a91) cell_contacts_ai5_widget_pane_t1

0x2ae1,	// (0x00012330) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf2a4,	// (0x0001eaf3) settings_container_pane

0x392d,	// (0x0001317c) listscroll_set_pane_copy1

0x66b4,	// (0x00015f03) scroll_pane_cp121_copy1

0xa2c8,	// (0x00019b17) set_content_pane_copy1

0xf2b0,	// (0x0001eaff) aid_height_set_list_copy1_ParamLimits

0xf2b0,	// (0x0001eaff) aid_height_set_list_copy1

0x5cb6,	// (0x00015505) aid_size_parent_copy1_ParamLimits

0x5cb6,	// (0x00015505) aid_size_parent_copy1

0xf2bc,	// (0x0001eb0b) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf2bc,	// (0x0001eb0b) button_value_adjust_pane_cp6_copy1

0x3cbb,	// (0x0001350a) list_highlight_pane_cp2_copy1_ParamLimits

0x3cbb,	// (0x0001350a) list_highlight_pane_cp2_copy1

0xf2d0,	// (0x0001eb1f) list_set_pane_copy1_ParamLimits

0xf2d0,	// (0x0001eb1f) list_set_pane_copy1

0xf23f,	// (0x0001ea8e) main_pane_set_t1_copy1_ParamLimits

0xf23f,	// (0x0001ea8e) main_pane_set_t1_copy1

0xf279,	// (0x0001eac8) main_pane_set_t2_copy1_ParamLimits

0xf279,	// (0x0001eac8) main_pane_set_t2_copy1

0xf397,	// (0x0001ebe6) main_pane_set_t3_copy1

0xf3a5,	// (0x0001ebf4) main_pane_set_t4_copy1

0xf298,	// (0x0001eae7) set_content_pane_g1_copy1_ParamLimits

0xf298,	// (0x0001eae7) set_content_pane_g1_copy1

0xf3b3,	// (0x0001ec02) setting_code_pane_copy1

0xa3dd,	// (0x00019c2c) setting_slider_graphic_pane_copy1

0xa3dd,	// (0x00019c2c) setting_slider_pane_copy1

0xa3e7,	// (0x00019c36) setting_text_pane_copy1

0xa3f1,	// (0x00019c40) setting_volume_pane_copy1

0xf3bd,	// (0x0001ec0c) settings_code_pane_cp2_copy1

0xf3c5,	// (0x0001ec14) settings_code_pane_cp_copy1_ParamLimits

0xf3c5,	// (0x0001ec14) settings_code_pane_cp_copy1

0xf3d9,	// (0x0001ec28) volume_set_pane_copy1

0xf3e5,	// (0x0001ec34) volume_set_pane_g10_copy1

0xf3f1,	// (0x0001ec40) volume_set_pane_g1_copy1

0xf3fb,	// (0x0001ec4a) volume_set_pane_g2_copy1

0xf405,	// (0x0001ec54) volume_set_pane_g3_copy1

0xf40f,	// (0x0001ec5e) volume_set_pane_g4_copy1

0xf419,	// (0x0001ec68) volume_set_pane_g5_copy1

0xf423,	// (0x0001ec72) volume_set_pane_g6_copy1

0xf42d,	// (0x0001ec7c) volume_set_pane_g7_copy1

0xf437,	// (0x0001ec86) volume_set_pane_g8_copy1

0xf441,	// (0x0001ec90) volume_set_pane_g9_copy1

0x1ca5,	// (0x000114f4) bg_set_opt_pane_cp_copy1_ParamLimits

0x1ca5,	// (0x000114f4) bg_set_opt_pane_cp_copy1

0xa488,	// (0x00019cd7) setting_slider_pane_t1_copy1_ParamLimits

0xa488,	// (0x00019cd7) setting_slider_pane_t1_copy1

0xf44b,	// (0x0001ec9a) setting_slider_pane_t2_copy1_ParamLimits

0xf44b,	// (0x0001ec9a) setting_slider_pane_t2_copy1

0xf465,	// (0x0001ecb4) setting_slider_pane_t3_copy1_ParamLimits

0xf465,	// (0x0001ecb4) setting_slider_pane_t3_copy1

0xf47d,	// (0x0001eccc) slider_set_pane_copy1_ParamLimits

0xf47d,	// (0x0001eccc) slider_set_pane_copy1

0x2c1d,	// (0x0001246c) set_opt_bg_pane_g1_copy2

0x2c25,	// (0x00012474) set_opt_bg_pane_g2_copy2

0xa4ee,	// (0x00019d3d) set_opt_bg_pane_g3_copy2

0x2c35,	// (0x00012484) set_opt_bg_pane_g4_copy2

0x2c3d,	// (0x0001248c) set_opt_bg_pane_g5_copy2

0x2c45,	// (0x00012494) set_opt_bg_pane_g6_copy2

0xf493,	// (0x0001ece2) set_opt_bg_pane_g7_copy2

0xa502,	// (0x00019d51) set_opt_bg_pane_g8_copy2

0xa50c,	// (0x00019d5b) set_opt_bg_pane_g9_copy2

0xa516,	// (0x00019d65) aid_size_touch_slider_mark_copy1_ParamLimits

0xa516,	// (0x00019d65) aid_size_touch_slider_mark_copy1

0xa52a,	// (0x00019d79) slider_set_pane_g1_copy1

0xa533,	// (0x00019d82) slider_set_pane_g2_copy1

0x6795,	// (0x00015fe4) slider_set_pane_g3_copy1_ParamLimits

0x6795,	// (0x00015fe4) slider_set_pane_g3_copy1

0x67a9,	// (0x00015ff8) slider_set_pane_g4_copy1_ParamLimits

0x67a9,	// (0x00015ff8) slider_set_pane_g4_copy1

0x67c1,	// (0x00016010) slider_set_pane_g5_copy1_ParamLimits

0x67c1,	// (0x00016010) slider_set_pane_g5_copy1

0x6795,	// (0x00015fe4) slider_set_pane_g6_copy1_ParamLimits

0x6795,	// (0x00015fe4) slider_set_pane_g6_copy1

0xf49d,	// (0x0001ecec) slider_set_pane_g7_copy1_ParamLimits

0xf49d,	// (0x0001ecec) slider_set_pane_g7_copy1

0x1bc5,	// (0x00011414) bg_set_opt_pane_cp2_copy1

0xa551,	// (0x00019da0) setting_slider_graphic_pane_g1_copy1

0xf4b3,	// (0x0001ed02) setting_slider_graphic_pane_t1_copy1

0xf4c3,	// (0x0001ed12) setting_slider_graphic_pane_t2_copy1

0xf4d3,	// (0x0001ed22) slider_set_pane_cp_copy1

0xa58a,	// (0x00019dd9) input_focus_pane_cp1_copy1

0xa593,	// (0x00019de2) list_set_text_pane_copy1

0xa59b,	// (0x00019dea) setting_text_pane_g1_copy1

0x1cfe,	// (0x0001154d) set_text_pane_t1_copy1

0xa58a,	// (0x00019dd9) input_focus_pane_cp2_copy1

0xa59b,	// (0x00019dea) setting_code_pane_g1_copy1

0xf4db,	// (0x0001ed2a) setting_code_pane_t1_copy1

0xf4e9,	// (0x0001ed38) list_set_graphic_pane_copy1

0x1bc5,	// (0x00011414) bg_set_opt_pane_cp4_copy1

0xc7a6,	// (0x0001bff5) list_set_graphic_pane_g1_copy1_ParamLimits

0xc7a6,	// (0x0001bff5) list_set_graphic_pane_g1_copy1

0xf4fb,	// (0x0001ed4a) list_set_graphic_pane_g2_copy1

0xc7be,	// (0x0001c00d) list_set_graphic_pane_t1_copy1_ParamLimits

0xc7be,	// (0x0001c00d) list_set_graphic_pane_t1_copy1

0x71a7,	// (0x000169f6) rs_clock_indi_pane_g1

0xa5cc,	// (0x00019e1b) rs_clock_indi_pane_t1

0xa5da,	// (0x00019e29) rs_indi_pane

0xa5e2,	// (0x00019e31) rs_indi_pane_g1

0xa5eb,	// (0x00019e3a) rs_indi_pane_g2

0xa5f4,	// (0x00019e43) rs_indi_pane_g3

0x0002,

0xfef6,	// (0x0001f745) rs_indi_pane_g

0x392d,	// (0x0001317c) bg_popup_preview_window_pane_cp03

0xa5fd,	// (0x00019e4c) popup_fep_tooltip_window_t1

0x808b,	// (0x000178da) popup_note2_window_g2_ParamLimits

0x808b,	// (0x000178da) popup_note2_window_g2

0x0001,

0xfc94,	// (0x0001f4e3) popup_note2_window_g_ParamLimits

0xfc94,	// (0x0001f4e3) popup_note2_window_g

0x8682,	// (0x00017ed1) bg_popup_sub_pane_cp11_ParamLimits

0x868f,	// (0x00017ede) cell_ai3_links_pane_g1_ParamLimits

0x86a6,	// (0x00017ef5) cell_ai3_links_pane_t1

0x1cfe,	// (0x0001154d) set_text_pane_t1_copy1_ParamLimits

0x383a,	// (0x00013089) cell_graphic_popup_pane_cp2_ParamLimits

0x383a,	// (0x00013089) cell_graphic_popup_pane_cp2

0xa60b,	// (0x00019e5a) cell_graphic_popup_pane_g1_cp2

0x2291,	// (0x00011ae0) cell_graphic_popup_pane_g2_cp2

0xa613,	// (0x00019e62) cell_graphic_popup_pane_g3_cp2

0xa61b,	// (0x00019e6a) cell_graphic_popup_pane_t2_cp2

0x22a2,	// (0x00011af1) grid_highlight_pane_cp3_cp2

0x2ff6,	// (0x00012845) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2ae1,	// (0x00012330) main_tmo_pane_ParamLimits

0xe3a6,	// (0x0001dbf5) popup_tmo_big_image_note_window

0xef15,	// (0x0001e764) cell_ai5_widget_list_pane

0xef1d,	// (0x0001e76c) cell_ai5_widget_lrg_icon_pane

0xf1fc,	// (0x0001ea4b) tmo_note_info_pane_t1_ParamLimits

0xf211,	// (0x0001ea60) tmo_note_info_pane_t2_ParamLimits

0xf22a,	// (0x0001ea79) tmo_note_info_pane_t3_ParamLimits

0xa174,	// (0x000199c3) tmo_note_info_pane_t4_ParamLimits

0xa186,	// (0x000199d5) tmo_note_info_pane_t5_ParamLimits

0xfee4,	// (0x0001f733) tmo_note_info_pane_t_ParamLimits

0xf2a4,	// (0x0001eaf3) settings_container_pane_ParamLimits

0xa582,	// (0x00019dd1) indicator_popup_pane_cp5

0xa582,	// (0x00019dd1) indicator_popup_pane_cp6

0xf4e9,	// (0x0001ed38) list_set_graphic_pane_copy1_ParamLimits

0x1bb1,	// (0x00011400) bg_popup_window_pane_cp23

0xa629,	// (0x00019e78) popup_tmo_big_image_note_window_g1

0xa635,	// (0x00019e84) popup_tmo_big_image_note_window_t1

0xa645,	// (0x00019e94) popup_tmo_big_image_note_window_t2

0xa655,	// (0x00019ea4) popup_tmo_big_image_note_window_t3

0x0002,

0xfefd,	// (0x0001f74c) popup_tmo_big_image_note_window_t

0xf503,	// (0x0001ed52) cell_ai5_widget_lrg_icon_pane_g1

0xf50b,	// (0x0001ed5a) cell_ai5_widget_lrg_icon_pane_t1

0xf519,	// (0x0001ed68) cell_ai5_widget_list_row_pane_ParamLimits

0xf519,	// (0x0001ed68) cell_ai5_widget_list_row_pane

0xf532,	// (0x0001ed81) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf532,	// (0x0001ed81) cell_ai5_widget_list_row_pane_g1

0xf53f,	// (0x0001ed8e) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf53f,	// (0x0001ed8e) cell_ai5_widget_list_row_pane_t1

0xf557,	// (0x0001eda6) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf557,	// (0x0001eda6) cell_ai5_widget_list_row_pane_t2

0x0001,

0xff04,	// (0x0001f753) cell_ai5_widget_list_row_pane_t_ParamLimits

0xff04,	// (0x0001f753) cell_ai5_widget_list_row_pane_t

0x00e3,	// (0x0000f932) main_fep_vtchi_ss_pane

0xa6cb,	// (0x00019f1a) popup_fep_char_pre_window

0xa6d3,	// (0x00019f22) popup_fep_ituss_window

0xa6de,	// (0x00019f2d) popup_fep_vkbss_window

0xa6e9,	// (0x00019f38) grid_vkbss_keypad_pane_ParamLimits

0xa6e9,	// (0x00019f38) grid_vkbss_keypad_pane

0xa6f9,	// (0x00019f48) ituss_keypad_pane

0xa701,	// (0x00019f50) aid_vkbss_key_offset_ParamLimits

0xa701,	// (0x00019f50) aid_vkbss_key_offset

0xa710,	// (0x00019f5f) cell_vkbss_key_pane_ParamLimits

0xa710,	// (0x00019f5f) cell_vkbss_key_pane

0xa726,	// (0x00019f75) bg_cell_vkbss_key_g1_ParamLimits

0xa726,	// (0x00019f75) bg_cell_vkbss_key_g1

0xa732,	// (0x00019f81) cell_vkbss_key_3p_pane_ParamLimits

0xa732,	// (0x00019f81) cell_vkbss_key_3p_pane

0xa74c,	// (0x00019f9b) cell_vkbss_key_g1_ParamLimits

0xa74c,	// (0x00019f9b) cell_vkbss_key_g1

0xa766,	// (0x00019fb5) cell_vkbss_key_t1_ParamLimits

0xa766,	// (0x00019fb5) cell_vkbss_key_t1

0xa791,	// (0x00019fe0) cell_ituss_key_pane_ParamLimits

0xa791,	// (0x00019fe0) cell_ituss_key_pane

0xa7a0,	// (0x00019fef) bg_cell_ituss_key_g1_ParamLimits

0xa7a0,	// (0x00019fef) bg_cell_ituss_key_g1

0xa7ac,	// (0x00019ffb) cell_ituss_key_pane_g1_ParamLimits

0xa7ac,	// (0x00019ffb) cell_ituss_key_pane_g1

0xa7b8,	// (0x0001a007) cell_ituss_key_pane_g2_ParamLimits

0xa7b8,	// (0x0001a007) cell_ituss_key_pane_g2

0x0001,

0xff09,	// (0x0001f758) cell_ituss_key_pane_g_ParamLimits

0xff09,	// (0x0001f758) cell_ituss_key_pane_g

0xa7cc,	// (0x0001a01b) cell_ituss_key_t1_ParamLimits

0xa7cc,	// (0x0001a01b) cell_ituss_key_t1

0xa7ea,	// (0x0001a039) cell_ituss_key_t2_ParamLimits

0xa7ea,	// (0x0001a039) cell_ituss_key_t2

0xa809,	// (0x0001a058) cell_ituss_key_t3_ParamLimits

0xa809,	// (0x0001a058) cell_ituss_key_t3

0xa828,	// (0x0001a077) cell_ituss_key_t4_ParamLimits

0xa828,	// (0x0001a077) cell_ituss_key_t4

0x0003,

0xff0e,	// (0x0001f75d) cell_ituss_key_t_ParamLimits

0xff0e,	// (0x0001f75d) cell_ituss_key_t

0xa847,	// (0x0001a096) cell_vkbss_key_3p_pane_g1

0xa84f,	// (0x0001a09e) cell_vkbss_key_3p_pane_g2

0xa857,	// (0x0001a0a6) cell_vkbss_key_3p_pane_g3

0x0002,

0xff17,	// (0x0001f766) cell_vkbss_key_3p_pane_g

0x1bb1,	// (0x00011400) bg_popup_fep_char_preview_window_cp02

0xa85f,	// (0x0001a0ae) popup_fep_char_pre_window_t1

0xef0b,	// (0x0001e75a) main_ai5_sk_pane

0xa200,	// (0x00019a4f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa20c,	// (0x00019a5b) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa220,	// (0x00019a6f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa22f,	// (0x00019a7e) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeef,	// (0x0001f73e) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa242,	// (0x00019a91) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2ae1,	// (0x00012330) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf569,	// (0x0001edb8) main_ai5_sk_pane_g1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Normal
