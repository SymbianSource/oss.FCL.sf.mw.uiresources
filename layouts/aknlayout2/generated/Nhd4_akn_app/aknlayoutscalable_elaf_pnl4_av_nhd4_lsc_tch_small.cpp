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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0001f0e7 };

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
0xcfed,	// (0x0002c0d4) Screen

0xcff9,	// (0x0002c0e0) application_window_ParamLimits

0xcff9,	// (0x0002c0e0) application_window

0x36cb,	// (0x000227b2) screen_g1

0xbe5c,	// (0x0002af43) area_bottom_pane_ParamLimits

0xbe5c,	// (0x0002af43) area_bottom_pane

0x13d9,	// (0x000204c0) area_top_pane_ParamLimits

0x13d9,	// (0x000204c0) area_top_pane

0x146d,	// (0x00020554) main_pane_ParamLimits

0x146d,	// (0x00020554) main_pane

0x36d5,	// (0x000227bc) misc_graphics

0xd79d,	// (0x0002c884) battery_pane_ParamLimits

0xd79d,	// (0x0002c884) battery_pane

0x5d16,	// (0x00024dfd) bg_status_flat_pane_g8

0x5d1e,	// (0x00024e05) bg_status_flat_pane_g9

0x5105,	// (0x000241ec) context_pane_ParamLimits

0x5105,	// (0x000241ec) context_pane

0xd908,	// (0x0002c9ef) navi_pane_ParamLimits

0xd908,	// (0x0002c9ef) navi_pane

0xd986,	// (0x0002ca6d) signal_pane_ParamLimits

0xd986,	// (0x0002ca6d) signal_pane

0x0008,

0xf86d,	// (0x0002e954) bg_status_flat_pane_g

0xda16,	// (0x0002cafd) status_pane_g1_ParamLimits

0xda16,	// (0x0002cafd) status_pane_g1

0xda2c,	// (0x0002cb13) status_pane_g2_ParamLimits

0xda2c,	// (0x0002cb13) status_pane_g2

0x5324,	// (0x0002440b) status_pane_g3_ParamLimits

0x5324,	// (0x0002440b) status_pane_g3

0x0004,

0xf7a0,	// (0x0002e887) status_pane_g_ParamLimits

0xf7a0,	// (0x0002e887) status_pane_g

0xda38,	// (0x0002cb1f) title_pane_ParamLimits

0xda38,	// (0x0002cb1f) title_pane

0xdac3,	// (0x0002cbaa) uni_indicator_pane_ParamLimits

0xdac3,	// (0x0002cbaa) uni_indicator_pane

0x4f6b,	// (0x00024052) bg_list_pane_ParamLimits

0x4f6b,	// (0x00024052) bg_list_pane

0xc1ab,	// (0x0002b292) find_pane

0xc1b3,	// (0x0002b29a) listscroll_app_pane_ParamLimits

0xc1b3,	// (0x0002b29a) listscroll_app_pane

0x4f97,	// (0x0002407e) listscroll_form_pane

0xc1c3,	// (0x0002b2aa) listscroll_gen_pane_ParamLimits

0xc1c3,	// (0x0002b2aa) listscroll_gen_pane

0x1d21,	// (0x00020e08) listscroll_set_pane

0x6892,	// (0x00025979) main_idle_act_pane

0x4c77,	// (0x00023d5e) main_idle_trad_pane

0x4c77,	// (0x00023d5e) main_list_empty_pane

0x4fb1,	// (0x00024098) main_midp_pane

0x4fbd,	// (0x000240a4) main_pane_g1_ParamLimits

0x4fbd,	// (0x000240a4) main_pane_g1

0xc1d7,	// (0x0002b2be) popup_ai_message_window_ParamLimits

0xc1d7,	// (0x0002b2be) popup_ai_message_window

0xc268,	// (0x0002b34f) popup_fep_china_uni_window_ParamLimits

0xc268,	// (0x0002b34f) popup_fep_china_uni_window

0x1e27,	// (0x00020f0e) popup_fep_japan_candidate_window_ParamLimits

0x1e27,	// (0x00020f0e) popup_fep_japan_candidate_window

0x1e45,	// (0x00020f2c) popup_fep_japan_predictive_window_ParamLimits

0x1e45,	// (0x00020f2c) popup_fep_japan_predictive_window

0xc2c2,	// (0x0002b3a9) popup_find_window

0xc2df,	// (0x0002b3c6) popup_grid_graphic_window_ParamLimits

0xc2df,	// (0x0002b3c6) popup_grid_graphic_window

0x1eaa,	// (0x00020f91) popup_large_graphic_colour_window

0xc377,	// (0x0002b45e) popup_menu_window_ParamLimits

0xc377,	// (0x0002b45e) popup_menu_window

0xc543,	// (0x0002b62a) popup_note_image_window

0xc509,	// (0x0002b5f0) popup_note_wait_window_ParamLimits

0xc509,	// (0x0002b5f0) popup_note_wait_window

0xc55b,	// (0x0002b642) popup_note_window_ParamLimits

0xc55b,	// (0x0002b642) popup_note_window

0xc601,	// (0x0002b6e8) popup_query_code_window_ParamLimits

0xc601,	// (0x0002b6e8) popup_query_code_window

0x20f4,	// (0x000211db) popup_query_data_code_window_ParamLimits

0x20f4,	// (0x000211db) popup_query_data_code_window

0xc63b,	// (0x0002b722) popup_query_data_window_ParamLimits

0xc63b,	// (0x0002b722) popup_query_data_window

0xc6b7,	// (0x0002b79e) popup_query_sat_info_window_ParamLimits

0xc6b7,	// (0x0002b79e) popup_query_sat_info_window

0xc74e,	// (0x0002b835) popup_snote_single_graphic_window_ParamLimits

0xc74e,	// (0x0002b835) popup_snote_single_graphic_window

0xc74e,	// (0x0002b835) popup_snote_single_text_window_ParamLimits

0xc74e,	// (0x0002b835) popup_snote_single_text_window

0x2177,	// (0x0002125e) popup_sub_window_general

0x22a5,	// (0x0002138c) popup_window_general_ParamLimits

0x22a5,	// (0x0002138c) popup_window_general

0x4fcb,	// (0x000240b2) power_save_pane

0xc03a,	// (0x0002b121) control_pane_g1_ParamLimits

0xc03a,	// (0x0002b121) control_pane_g1

0xc063,	// (0x0002b14a) control_pane_g2_ParamLimits

0xc063,	// (0x0002b14a) control_pane_g2

0x4f2e,	// (0x00024015) control_pane_g3_ParamLimits

0x4f2e,	// (0x00024015) control_pane_g3

0x0007,

0xf788,	// (0x0002e86f) control_pane_g_ParamLimits

0xf788,	// (0x0002e86f) control_pane_g

0xc0a4,	// (0x0002b18b) control_pane_t1_ParamLimits

0xc0a4,	// (0x0002b18b) control_pane_t1

0xc102,	// (0x0002b1e9) control_pane_t2_ParamLimits

0xc102,	// (0x0002b1e9) control_pane_t2

0x0002,

0xf799,	// (0x0002e880) control_pane_t_ParamLimits

0xf799,	// (0x0002e880) control_pane_t

0xd64a,	// (0x0002c731) navi_navi_volume_pane_cp1

0xd652,	// (0x0002c739) status_small_icon_pane

0x4e63,	// (0x00023f4a) status_small_pane_g1_ParamLimits

0x4e63,	// (0x00023f4a) status_small_pane_g1

0xd65a,	// (0x0002c741) status_small_pane_g2_ParamLimits

0xd65a,	// (0x0002c741) status_small_pane_g2

0xd666,	// (0x0002c74d) status_small_pane_g3_ParamLimits

0xd666,	// (0x0002c74d) status_small_pane_g3

0xd672,	// (0x0002c759) status_small_pane_g4_ParamLimits

0xd672,	// (0x0002c759) status_small_pane_g4

0xd67e,	// (0x0002c765) status_small_pane_g5_ParamLimits

0xd67e,	// (0x0002c765) status_small_pane_g5

0xd68c,	// (0x0002c773) status_small_pane_g6_ParamLimits

0xd68c,	// (0x0002c773) status_small_pane_g6

0x0007,

0xf777,	// (0x0002e85e) status_small_pane_g_ParamLimits

0xf777,	// (0x0002e85e) status_small_pane_g

0xd6bb,	// (0x0002c7a2) status_small_pane_t1

0xd6dd,	// (0x0002c7c4) status_small_wait_pane_ParamLimits

0xd6dd,	// (0x0002c7c4) status_small_wait_pane

0xd4b5,	// (0x0002c59c) aid_levels_signal_ParamLimits

0xd4b5,	// (0x0002c59c) aid_levels_signal

0xd4cd,	// (0x0002c5b4) signal_pane_g1_ParamLimits

0xd4cd,	// (0x0002c5b4) signal_pane_g1

0xd4e8,	// (0x0002c5cf) signal_pane_g2_ParamLimits

0xd4e8,	// (0x0002c5cf) signal_pane_g2

0x0003,

0xf708,	// (0x0002e7ef) signal_pane_g_ParamLimits

0xf708,	// (0x0002e7ef) signal_pane_g

0x4742,	// (0x00023829) context_pane_g1

0xd009,	// (0x0002c0f0) title_pane_g1

0xd040,	// (0x0002c127) title_pane_t1

0x377d,	// (0x00022864) title_pane_t2

0x37a3,	// (0x0002288a) title_pane_t3

0x0002,

0xf557,	// (0x0002e63e) title_pane_t

0xdaeb,	// (0x0002cbd2) aid_levels_battery_ParamLimits

0xdaeb,	// (0x0002cbd2) aid_levels_battery

0xdb07,	// (0x0002cbee) battery_pane_g1_ParamLimits

0xdb07,	// (0x0002cbee) battery_pane_g1

0xdb24,	// (0x0002cc0b) battery_pane_g2_ParamLimits

0xdb24,	// (0x0002cc0b) battery_pane_g2

0x0001,

0xf7ab,	// (0x0002e892) battery_pane_g_ParamLimits

0xf7ab,	// (0x0002e892) battery_pane_g

0xdd09,	// (0x0002cdf0) uni_indicator_pane_g1

0xdd1f,	// (0x0002ce06) uni_indicator_pane_g2

0xdd35,	// (0x0002ce1c) uni_indicator_pane_g3

0x0005,

0xf915,	// (0x0002e9fc) uni_indicator_pane_g

0x4af5,	// (0x00023bdc) navi_icon_pane_ParamLimits

0x4af5,	// (0x00023bdc) navi_icon_pane

0x4a33,	// (0x00023b1a) navi_midp_pane

0x4b11,	// (0x00023bf8) navi_navi_pane

0x4b1b,	// (0x00023c02) navi_text_pane_ParamLimits

0x4b1b,	// (0x00023c02) navi_text_pane

0x36cb,	// (0x000227b2) status_small_wait_pane_g1

0x3bc6,	// (0x00022cad) status_small_wait_pane_g2

0x0001,

0xf910,	// (0x0002e9f7) status_small_wait_pane_g

0x6371,	// (0x00025458) navi_navi_icon_text_pane

0x6379,	// (0x00025460) navi_navi_pane_g1_ParamLimits

0x6379,	// (0x00025460) navi_navi_pane_g1

0x638b,	// (0x00025472) navi_navi_pane_g2_ParamLimits

0x638b,	// (0x00025472) navi_navi_pane_g2

0x0001,

0xf8de,	// (0x0002e9c5) navi_navi_pane_g_ParamLimits

0xf8de,	// (0x0002e9c5) navi_navi_pane_g

0x639d,	// (0x00025484) navi_navi_tabs_pane

0x63a6,	// (0x0002548d) navi_navi_text_pane

0x6371,	// (0x00025458) navi_navi_volume_pane

0x634d,	// (0x00025434) navi_text_pane_t1

0x6341,	// (0x00025428) navi_icon_pane_g1

0x6294,	// (0x0002537b) navi_navi_text_pane_t1

0x2535,	// (0x0002161c) navi_navi_volume_pane_g1

0xc9c5,	// (0x0002baac) volume_small_pane

0xdc46,	// (0x0002cd2d) navi_navi_icon_text_pane_g1

0x6202,	// (0x000252e9) navi_navi_icon_text_pane_t1

0x4b11,	// (0x00023bf8) navi_tabs_2_long_pane

0x4b11,	// (0x00023bf8) navi_tabs_2_pane

0x4b11,	// (0x00023bf8) navi_tabs_3_long_pane

0x4b11,	// (0x00023bf8) navi_tabs_3_pane

0x4b11,	// (0x00023bf8) navi_tabs_4_pane

0xc9a5,	// (0x0002ba8c) tabs_2_active_pane_ParamLimits

0xc9a5,	// (0x0002ba8c) tabs_2_active_pane

0xc9b5,	// (0x0002ba9c) tabs_2_passive_pane_ParamLimits

0xc9b5,	// (0x0002ba9c) tabs_2_passive_pane

0xc973,	// (0x0002ba5a) tabs_3_active_pane_ParamLimits

0xc973,	// (0x0002ba5a) tabs_3_active_pane

0xc983,	// (0x0002ba6a) tabs_3_passive_pane_ParamLimits

0xc983,	// (0x0002ba6a) tabs_3_passive_pane

0xc994,	// (0x0002ba7b) tabs_3_passive_pane_cp_ParamLimits

0xc994,	// (0x0002ba7b) tabs_3_passive_pane_cp

0xc940,	// (0x0002ba27) tabs_4_active_pane_ParamLimits

0xc940,	// (0x0002ba27) tabs_4_active_pane

0xc951,	// (0x0002ba38) tabs_4_passive_pane_ParamLimits

0xc951,	// (0x0002ba38) tabs_4_passive_pane

0x24c1,	// (0x000215a8) tabs_4_passive_pane_cp_ParamLimits

0x24c1,	// (0x000215a8) tabs_4_passive_pane_cp

0xc962,	// (0x0002ba49) tabs_4_passive_pane_cp2_ParamLimits

0xc962,	// (0x0002ba49) tabs_4_passive_pane_cp2

0xc91c,	// (0x0002ba03) tabs_2_long_active_pane_ParamLimits

0xc91c,	// (0x0002ba03) tabs_2_long_active_pane

0xc92e,	// (0x0002ba15) tabs_2_long_passive_pane_ParamLimits

0xc92e,	// (0x0002ba15) tabs_2_long_passive_pane

0xc8dd,	// (0x0002b9c4) tabs_3_long_active_pane_ParamLimits

0xc8dd,	// (0x0002b9c4) tabs_3_long_active_pane

0xc8f0,	// (0x0002b9d7) tabs_3_long_passive_pane_ParamLimits

0xc8f0,	// (0x0002b9d7) tabs_3_long_passive_pane

0xc909,	// (0x0002b9f0) tabs_3_long_passive_pane_cp_ParamLimits

0xc909,	// (0x0002b9f0) tabs_3_long_passive_pane_cp

0x23e8,	// (0x000214cf) volume_small_pane_g1

0x23f1,	// (0x000214d8) volume_small_pane_g2

0x23fa,	// (0x000214e1) volume_small_pane_g3

0x2403,	// (0x000214ea) volume_small_pane_g4

0x240c,	// (0x000214f3) volume_small_pane_g5

0x2415,	// (0x000214fc) volume_small_pane_g6

0x241e,	// (0x00021505) volume_small_pane_g7

0x2427,	// (0x0002150e) volume_small_pane_g8

0x2430,	// (0x00021517) volume_small_pane_g9

0x2439,	// (0x00021520) volume_small_pane_g10

0x0009,

0xf8aa,	// (0x0002e991) volume_small_pane_g

0x3a30,	// (0x00022b17) bg_active_tab_pane_cp2_ParamLimits

0x3a30,	// (0x00022b17) bg_active_tab_pane_cp2

0x37c3,	// (0x000228aa) tabs_3_active_pane_g1

0xd0cc,	// (0x0002c1b3) tabs_3_active_pane_t1

0x3a30,	// (0x00022b17) bg_passive_tab_pane_cp2_ParamLimits

0x3a30,	// (0x00022b17) bg_passive_tab_pane_cp2

0x37c3,	// (0x000228aa) tabs_3_passive_pane_g1

0xd0cc,	// (0x0002c1b3) tabs_3_passive_pane_t1

0x3a30,	// (0x00022b17) bg_active_tab_pane_cp3_ParamLimits

0x3a30,	// (0x00022b17) bg_active_tab_pane_cp3

0x37dd,	// (0x000228c4) tabs_4_active_pane_g1

0xd0de,	// (0x0002c1c5) tabs_4_active_pane_t1

0x3a30,	// (0x00022b17) bg_passive_tab_pane_cp3_ParamLimits

0x3a30,	// (0x00022b17) bg_passive_tab_pane_cp3

0x37dd,	// (0x000228c4) tabs_4_1_passive_pane_g1

0xd0de,	// (0x0002c1c5) tabs_4_1_passive_pane_t1

0x4fb1,	// (0x00024098) list_highlight_pane_cp2

0xddbe,	// (0x0002cea5) list_set_pane_ParamLimits

0xddbe,	// (0x0002cea5) list_set_pane

0xde58,	// (0x0002cf3f) main_pane_set_t1_ParamLimits

0xde58,	// (0x0002cf3f) main_pane_set_t1

0xde78,	// (0x0002cf5f) main_pane_set_t2_ParamLimits

0xde78,	// (0x0002cf5f) main_pane_set_t2

0xde8c,	// (0x0002cf73) main_pane_set_t3_ParamLimits

0xde8c,	// (0x0002cf73) main_pane_set_t3

0xde9e,	// (0x0002cf85) main_pane_set_t4_ParamLimits

0xde9e,	// (0x0002cf85) main_pane_set_t4

0x0003,

0xf97a,	// (0x0002ea61) main_pane_set_t_ParamLimits

0xf97a,	// (0x0002ea61) main_pane_set_t

0xdeb0,	// (0x0002cf97) setting_code_pane

0xdeb8,	// (0x0002cf9f) setting_slider_graphic_pane

0xdeb8,	// (0x0002cf9f) setting_slider_pane

0xdeb8,	// (0x0002cf9f) setting_text_pane

0xdeb8,	// (0x0002cf9f) setting_volume_pane

0x16ae,	// (0x00020795) volume_set_pane

0x37b5,	// (0x0002289c) bg_set_opt_pane_cp

0x16b6,	// (0x0002079d) setting_slider_pane_t1

0x16cf,	// (0x000207b6) setting_slider_pane_t2

0x16e9,	// (0x000207d0) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0002e645) setting_slider_pane_t

0x1701,	// (0x000207e8) slider_set_pane

0x36d5,	// (0x000227bc) bg_set_opt_pane_cp2

0x37f7,	// (0x000228de) setting_slider_graphic_pane_g1

0x1717,	// (0x000207fe) setting_slider_graphic_pane_t1

0x1727,	// (0x0002080e) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0002e64c) setting_slider_graphic_pane_t

0x1737,	// (0x0002081e) slider_set_pane_cp

0x36d5,	// (0x000227bc) input_focus_pane_cp1

0x6879,	// (0x00025960) list_set_text_pane

0x36cb,	// (0x000227b2) setting_text_pane_g1

0x36d5,	// (0x000227bc) input_focus_pane_cp2

0x36cb,	// (0x000227b2) setting_code_pane_g1

0x3800,	// (0x000228e7) setting_code_pane_t1

0x0164,	// (0x0001f24b) set_text_pane_t1_ParamLimits

0x0164,	// (0x0001f24b) set_text_pane_t1

0x406a,	// (0x00023151) set_opt_bg_pane_g1

0x4072,	// (0x00023159) set_opt_bg_pane_g2

0x6859,	// (0x00025940) set_opt_bg_pane_g3

0x4082,	// (0x00023169) set_opt_bg_pane_g4

0x408a,	// (0x00023171) set_opt_bg_pane_g5

0x4092,	// (0x00023179) set_opt_bg_pane_g6

0x6861,	// (0x00025948) set_opt_bg_pane_g7

0x6869,	// (0x00025950) set_opt_bg_pane_g8

0x6871,	// (0x00025958) set_opt_bg_pane_g9

0x0008,

0xf967,	// (0x0002ea4e) set_opt_bg_pane_g

0x684c,	// (0x00025933) slider_set_pane_g1

0x25aa,	// (0x00021691) slider_set_pane_g2

0x0006,

0xf958,	// (0x0002ea3f) slider_set_pane_g

0x2546,	// (0x0002162d) volume_set_pane_g1

0x254e,	// (0x00021635) volume_set_pane_g2

0x2556,	// (0x0002163d) volume_set_pane_g3

0x255e,	// (0x00021645) volume_set_pane_g4

0x2566,	// (0x0002164d) volume_set_pane_g5

0x256e,	// (0x00021655) volume_set_pane_g6

0x2576,	// (0x0002165d) volume_set_pane_g7

0x257e,	// (0x00021665) volume_set_pane_g8

0x2586,	// (0x0002166d) volume_set_pane_g9

0x258e,	// (0x00021675) volume_set_pane_g10

0x0009,

0xf930,	// (0x0002ea17) volume_set_pane_g

0xd0f0,	// (0x0002c1d7) indicator_pane_ParamLimits

0xd0f0,	// (0x0002c1d7) indicator_pane

0xd118,	// (0x0002c1ff) main_idle_pane_g2_ParamLimits

0xd118,	// (0x0002c1ff) main_idle_pane_g2

0xd150,	// (0x0002c237) main_pane_idle_g1_ParamLimits

0xd150,	// (0x0002c237) main_pane_idle_g1

0x384f,	// (0x00022936) popup_clock_digital_analogue_window_ParamLimits

0x384f,	// (0x00022936) popup_clock_digital_analogue_window

0xd177,	// (0x0002c25e) soft_indicator_pane_ParamLimits

0xd177,	// (0x0002c25e) soft_indicator_pane

0xd191,	// (0x0002c278) wallpaper_pane_ParamLimits

0xd191,	// (0x0002c278) wallpaper_pane

0x36cb,	// (0x000227b2) wallpaper_pane_g1

0xd1a3,	// (0x0002c28a) indicator_pane_g1_ParamLimits

0xd1a3,	// (0x0002c28a) indicator_pane_g1

0x6c15,	// (0x00025cfc) navi_navi_icon_text_pane_srt_g1

0x38a1,	// (0x00022988) soft_indicator_pane_t1

0x38bb,	// (0x000229a2) aid_ps_area_pane

0xd1b9,	// (0x0002c2a0) aid_ps_clock_pane

0x38da,	// (0x000229c1) aid_ps_indicator_pane

0x38e6,	// (0x000229cd) indicator_ps_pane_ParamLimits

0x38e6,	// (0x000229cd) indicator_ps_pane

0x38f5,	// (0x000229dc) power_save_pane_g1_ParamLimits

0x38f5,	// (0x000229dc) power_save_pane_g1

0x3901,	// (0x000229e8) power_save_pane_g2_ParamLimits

0x3901,	// (0x000229e8) power_save_pane_g2

0x12cd,	// (0x000203b4) aid_navinavi_width_pane

0x38bb,	// (0x000229a2) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0002e651) power_save_pane_g_ParamLimits

0xf56a,	// (0x0002e651) power_save_pane_g

0x390f,	// (0x000229f6) power_save_pane_t1_ParamLimits

0x390f,	// (0x000229f6) power_save_pane_t1

0xd1b9,	// (0x0002c2a0) aid_ps_clock_pane_ParamLimits

0x38da,	// (0x000229c1) aid_ps_indicator_pane_ParamLimits

0x3921,	// (0x00022a08) power_save_pane_t4_ParamLimits

0x3921,	// (0x00022a08) power_save_pane_t4

0x0001,

0xf56f,	// (0x0002e656) power_save_pane_t_ParamLimits

0xf56f,	// (0x0002e656) power_save_pane_t

0x394b,	// (0x00022a32) power_save_t3_ParamLimits

0x394b,	// (0x00022a32) power_save_t3

0x3936,	// (0x00022a1d) power_save_t2_ParamLimits

0x3936,	// (0x00022a1d) power_save_t2

0x3960,	// (0x00022a47) indicator_ps_pane_g1

0xd1c7,	// (0x0002c2ae) ai_gene_pane_ParamLimits

0xd1c7,	// (0x0002c2ae) ai_gene_pane

0xd1de,	// (0x0002c2c5) ai_links_pane_ParamLimits

0xd1de,	// (0x0002c2c5) ai_links_pane

0xd1f6,	// (0x0002c2dd) indicator_pane_cp1_ParamLimits

0xd1f6,	// (0x0002c2dd) indicator_pane_cp1

0xd205,	// (0x0002c2ec) main_pane_idle_g1_cp_ParamLimits

0xd205,	// (0x0002c2ec) main_pane_idle_g1_cp

0x3999,	// (0x00022a80) popup_ai_links_title_window

0xd21d,	// (0x0002c304) soft_indicator_pane_cp1_ParamLimits

0xd21d,	// (0x0002c304) soft_indicator_pane_cp1

0x6638,	// (0x0002571f) ai_links_pane_g1

0x6641,	// (0x00025728) grid_ai_links_pane

0xdd00,	// (0x0002cde7) ai_gene_pane_1

0x6626,	// (0x0002570d) ai_gene_pane_2

0x662f,	// (0x00025716) list_highlight_pane_cp4

0xdcdc,	// (0x0002cdc3) cell_ai_link_pane_ParamLimits

0xdcdc,	// (0x0002cdc3) cell_ai_link_pane

0x65f7,	// (0x000256de) cell_ai_link_pane_g1

0x3bc6,	// (0x00022cad) cell_ai_link_pane_g2

0x0001,

0xf90b,	// (0x0002e9f2) cell_ai_link_pane_g

0x36d5,	// (0x000227bc) grid_highlight_cp2

0x36d5,	// (0x000227bc) bg_popup_sub_pane_cp1

0x39bc,	// (0x00022aa3) popup_ai_links_title_window_t1

0x6547,	// (0x0002562e) ai_gene_pane_1_g1_ParamLimits

0x6547,	// (0x0002562e) ai_gene_pane_1_g1

0x6553,	// (0x0002563a) ai_gene_pane_1_g2_ParamLimits

0x6553,	// (0x0002563a) ai_gene_pane_1_g2

0x0001,

0xf901,	// (0x0002e9e8) ai_gene_pane_1_g_ParamLimits

0xf901,	// (0x0002e9e8) ai_gene_pane_1_g

0x6560,	// (0x00025647) ai_gene_pane_1_t1_ParamLimits

0x6560,	// (0x00025647) ai_gene_pane_1_t1

0x6594,	// (0x0002567b) grid_ai_soft_ind_pane

0x6532,	// (0x00025619) ai_gene_pane_2_t1_ParamLimits

0x6532,	// (0x00025619) ai_gene_pane_2_t1

0xd231,	// (0x0002c318) main_pane_empty_t1_ParamLimits

0xd231,	// (0x0002c318) main_pane_empty_t1

0xd249,	// (0x0002c330) main_pane_empty_t2_ParamLimits

0xd249,	// (0x0002c330) main_pane_empty_t2

0xd25e,	// (0x0002c345) main_pane_empty_t3_ParamLimits

0xd25e,	// (0x0002c345) main_pane_empty_t3

0xd270,	// (0x0002c357) main_pane_empty_t4_ParamLimits

0xd270,	// (0x0002c357) main_pane_empty_t4

0xd282,	// (0x0002c369) main_pane_empty_t5_ParamLimits

0xd282,	// (0x0002c369) main_pane_empty_t5

0x0004,

0xf574,	// (0x0002e65b) main_pane_empty_t_ParamLimits

0xf574,	// (0x0002e65b) main_pane_empty_t

0x40bb,	// (0x000231a2) bg_popup_window_pane_ParamLimits

0x40bb,	// (0x000231a2) bg_popup_window_pane

0x62a2,	// (0x00025389) find_popup_pane_cp2_ParamLimits

0x62a2,	// (0x00025389) find_popup_pane_cp2

0x62ae,	// (0x00025395) heading_pane_ParamLimits

0x62ae,	// (0x00025395) heading_pane

0x36d5,	// (0x000227bc) bg_popup_sub_pane

0xdc5d,	// (0x0002cd44) bg_popup_window_pane_g1_ParamLimits

0xdc5d,	// (0x0002cd44) bg_popup_window_pane_g1

0xdc6c,	// (0x0002cd53) bg_popup_window_pane_g2_ParamLimits

0xdc6c,	// (0x0002cd53) bg_popup_window_pane_g2

0xdc78,	// (0x0002cd5f) bg_popup_window_pane_g3_ParamLimits

0xdc78,	// (0x0002cd5f) bg_popup_window_pane_g3

0xdc84,	// (0x0002cd6b) bg_popup_window_pane_g4_ParamLimits

0xdc84,	// (0x0002cd6b) bg_popup_window_pane_g4

0xdc93,	// (0x0002cd7a) bg_popup_window_pane_g5_ParamLimits

0xdc93,	// (0x0002cd7a) bg_popup_window_pane_g5

0xdca3,	// (0x0002cd8a) bg_popup_window_pane_g6_ParamLimits

0xdca3,	// (0x0002cd8a) bg_popup_window_pane_g6

0xdcaf,	// (0x0002cd96) bg_popup_window_pane_g7_ParamLimits

0xdcaf,	// (0x0002cd96) bg_popup_window_pane_g7

0xdcbe,	// (0x0002cda5) bg_popup_window_pane_g8_ParamLimits

0xdcbe,	// (0x0002cda5) bg_popup_window_pane_g8

0xdccd,	// (0x0002cdb4) bg_popup_window_pane_g9_ParamLimits

0xdccd,	// (0x0002cdb4) bg_popup_window_pane_g9

0x6288,	// (0x0002536f) bg_popup_window_pane_g10_ParamLimits

0x6288,	// (0x0002536f) bg_popup_window_pane_g10

0x0009,

0xf8c9,	// (0x0002e9b0) bg_popup_window_pane_g_ParamLimits

0xf8c9,	// (0x0002e9b0) bg_popup_window_pane_g

0x61b1,	// (0x00025298) bg_popup_heading_pane_ParamLimits

0x61b1,	// (0x00025298) bg_popup_heading_pane

0x2632,	// (0x00021719) tabs_4_passive_pane_cp_srt_ParamLimits

0x2632,	// (0x00021719) tabs_4_passive_pane_cp_srt

0x2644,	// (0x0002172b) tabs_4_passive_pane_srt_ParamLimits

0x61c5,	// (0x000252ac) heading_pane_g2

0x2644,	// (0x0002172b) tabs_4_passive_pane_srt

0x5523,	// (0x0002460a) bg_passive_tab_pane_cp3_srt_ParamLimits

0x5523,	// (0x0002460a) bg_passive_tab_pane_cp3_srt

0x61cd,	// (0x000252b4) heading_pane_t1_ParamLimits

0x61cd,	// (0x000252b4) heading_pane_t1

0x61e4,	// (0x000252cb) heading_pane_t2_ParamLimits

0x61e4,	// (0x000252cb) heading_pane_t2

0x0001,

0xf8c4,	// (0x0002e9ab) heading_pane_t_ParamLimits

0xf8c4,	// (0x0002e9ab) heading_pane_t

0x5cde,	// (0x00024dc5) bg_popup_heading_pane_g1

0x5d8d,	// (0x00024e74) bg_popup_heading_pane_g2

0x5d97,	// (0x00024e7e) bg_popup_heading_pane_g3

0x5da1,	// (0x00024e88) bg_popup_heading_pane_g4

0x5dab,	// (0x00024e92) bg_popup_heading_pane_g5

0x5db5,	// (0x00024e9c) bg_popup_heading_pane_g6

0x5dbd,	// (0x00024ea4) bg_popup_heading_pane_g7

0x5dc5,	// (0x00024eac) bg_popup_heading_pane_g8

0x5dcf,	// (0x00024eb6) bg_popup_heading_pane_g9

0x0008,

0xf880,	// (0x0002e967) bg_popup_heading_pane_g

0x54af,	// (0x00024596) bg_popup_sub_pane_g1

0x54b7,	// (0x0002459e) bg_popup_sub_pane_g2

0x54bf,	// (0x000245a6) bg_popup_sub_pane_g3

0x54c7,	// (0x000245ae) bg_popup_sub_pane_g4

0x54cf,	// (0x000245b6) bg_popup_sub_pane_g5

0x54d7,	// (0x000245be) bg_popup_sub_pane_g6

0x54df,	// (0x000245c6) bg_popup_sub_pane_g7

0x54e7,	// (0x000245ce) bg_popup_sub_pane_g8

0x54ef,	// (0x000245d6) bg_popup_sub_pane_g9

0x0008,

0xf85a,	// (0x0002e941) bg_popup_sub_pane_g

0x3a30,	// (0x00022b17) bg_popup_window_pane_cp5_ParamLimits

0x3a30,	// (0x00022b17) bg_popup_window_pane_cp5

0x3a4c,	// (0x00022b33) popup_note_window_g1_ParamLimits

0x3a4c,	// (0x00022b33) popup_note_window_g1

0x3a58,	// (0x00022b3f) popup_note_window_t1_ParamLimits

0x3a58,	// (0x00022b3f) popup_note_window_t1

0x3a6a,	// (0x00022b51) popup_note_window_t2_ParamLimits

0x3a6a,	// (0x00022b51) popup_note_window_t2

0x3a7c,	// (0x00022b63) popup_note_window_t3_ParamLimits

0x3a7c,	// (0x00022b63) popup_note_window_t3

0x3a8e,	// (0x00022b75) popup_note_window_t4_ParamLimits

0x3a8e,	// (0x00022b75) popup_note_window_t4

0x3ab6,	// (0x00022b9d) popup_note_window_t5_ParamLimits

0x3ab6,	// (0x00022b9d) popup_note_window_t5

0x0004,

0xf57f,	// (0x0002e666) popup_note_window_t_ParamLimits

0xf57f,	// (0x0002e666) popup_note_window_t

0x3ada,	// (0x00022bc1) bg_popup_window_pane_cp6_ParamLimits

0x3ada,	// (0x00022bc1) bg_popup_window_pane_cp6

0x5c52,	// (0x00024d39) popup_note_image_window_g1_ParamLimits

0x5c52,	// (0x00024d39) popup_note_image_window_g1

0x5c5e,	// (0x00024d45) popup_note_image_window_g2_ParamLimits

0x5c5e,	// (0x00024d45) popup_note_image_window_g2

0x0001,

0xf84e,	// (0x0002e935) popup_note_image_window_g_ParamLimits

0xf84e,	// (0x0002e935) popup_note_image_window_g

0x5c77,	// (0x00024d5e) popup_note_image_window_t1_ParamLimits

0x5c77,	// (0x00024d5e) popup_note_image_window_t1

0x5c90,	// (0x00024d77) popup_note_image_window_t2_ParamLimits

0x5c90,	// (0x00024d77) popup_note_image_window_t2

0x5ca9,	// (0x00024d90) popup_note_image_window_t3_ParamLimits

0x5ca9,	// (0x00024d90) popup_note_image_window_t3

0x0002,

0xf853,	// (0x0002e93a) popup_note_image_window_t_ParamLimits

0xf853,	// (0x0002e93a) popup_note_image_window_t

0x5b13,	// (0x00024bfa) bg_popup_window_pane_cp7_ParamLimits

0x5b13,	// (0x00024bfa) bg_popup_window_pane_cp7

0x5b43,	// (0x00024c2a) popup_note_wait_window_g1_ParamLimits

0x5b43,	// (0x00024c2a) popup_note_wait_window_g1

0x5b4f,	// (0x00024c36) popup_note_wait_window_g2_ParamLimits

0x5b4f,	// (0x00024c36) popup_note_wait_window_g2

0x0002,

0xf83c,	// (0x0002e923) popup_note_wait_window_g_ParamLimits

0xf83c,	// (0x0002e923) popup_note_wait_window_g

0x5b67,	// (0x00024c4e) popup_note_wait_window_t1_ParamLimits

0x5b67,	// (0x00024c4e) popup_note_wait_window_t1

0x5b8e,	// (0x00024c75) popup_note_wait_window_t2_ParamLimits

0x5b8e,	// (0x00024c75) popup_note_wait_window_t2

0x5bab,	// (0x00024c92) popup_note_wait_window_t3_ParamLimits

0x5bab,	// (0x00024c92) popup_note_wait_window_t3

0x5bbe,	// (0x00024ca5) popup_note_wait_window_t4_ParamLimits

0x5bbe,	// (0x00024ca5) popup_note_wait_window_t4

0x0004,

0xf843,	// (0x0002e92a) popup_note_wait_window_t_ParamLimits

0xf843,	// (0x0002e92a) popup_note_wait_window_t

0x5be3,	// (0x00024cca) wait_bar_pane_ParamLimits

0x5be3,	// (0x00024cca) wait_bar_pane

0x36d5,	// (0x000227bc) wait_anim_pane

0x36d5,	// (0x000227bc) wait_border_pane

0x36cb,	// (0x000227b2) wait_anim_pane_g1

0x36cb,	// (0x000227b2) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0002e7ea) wait_anim_pane_g

0x5ab7,	// (0x00024b9e) wait_border_pane_g1

0x5ac2,	// (0x00024ba9) wait_border_pane_g2

0x5acb,	// (0x00024bb2) wait_border_pane_g3

0x0002,

0xf835,	// (0x0002e91c) wait_border_pane_g

0x5927,	// (0x00024a0e) bg_popup_window_pane_cp16_ParamLimits

0x5927,	// (0x00024a0e) bg_popup_window_pane_cp16

0x5a27,	// (0x00024b0e) indicator_popup_pane_cp4_ParamLimits

0x5a27,	// (0x00024b0e) indicator_popup_pane_cp4

0x5a3b,	// (0x00024b22) popup_query_data_window_t1_ParamLimits

0x5a3b,	// (0x00024b22) popup_query_data_window_t1

0x5a4d,	// (0x00024b34) popup_query_data_window_t2_ParamLimits

0x5a4d,	// (0x00024b34) popup_query_data_window_t2

0x5a66,	// (0x00024b4d) popup_query_data_window_t3_ParamLimits

0x5a66,	// (0x00024b4d) popup_query_data_window_t3

0x0002,

0xf82e,	// (0x0002e915) popup_query_data_window_t_ParamLimits

0xf82e,	// (0x0002e915) popup_query_data_window_t

0x5a80,	// (0x00024b67) query_popup_data_pane_ParamLimits

0x5a80,	// (0x00024b67) query_popup_data_pane

0x5a94,	// (0x00024b7b) query_popup_data_pane_cp1_ParamLimits

0x5a94,	// (0x00024b7b) query_popup_data_pane_cp1

0x5927,	// (0x00024a0e) bg_popup_window_pane_cp10_ParamLimits

0x5927,	// (0x00024a0e) bg_popup_window_pane_cp10

0x5959,	// (0x00024a40) indicator_popup_pane_ParamLimits

0x5959,	// (0x00024a40) indicator_popup_pane

0x597b,	// (0x00024a62) popup_query_code_window_t1_ParamLimits

0x597b,	// (0x00024a62) popup_query_code_window_t1

0x5995,	// (0x00024a7c) popup_query_code_window_t2_ParamLimits

0x5995,	// (0x00024a7c) popup_query_code_window_t2

0x59de,	// (0x00024ac5) popup_query_code_window_t3_ParamLimits

0x59de,	// (0x00024ac5) popup_query_code_window_t3

0x0002,

0xf827,	// (0x0002e90e) popup_query_code_window_t_ParamLimits

0xf827,	// (0x0002e90e) popup_query_code_window_t

0x5a0d,	// (0x00024af4) query_popup_pane_ParamLimits

0x5a0d,	// (0x00024af4) query_popup_pane

0x3ada,	// (0x00022bc1) bg_popup_window_pane_cp15_ParamLimits

0x3ada,	// (0x00022bc1) bg_popup_window_pane_cp15

0x3af8,	// (0x00022bdf) indicator_popup_pane_cp1_ParamLimits

0x3af8,	// (0x00022bdf) indicator_popup_pane_cp1

0x3b0b,	// (0x00022bf2) indicator_popup_pane_cp2_ParamLimits

0x3b0b,	// (0x00022bf2) indicator_popup_pane_cp2

0x3b1e,	// (0x00022c05) popup_query_data_code_window_g1_ParamLimits

0x3b1e,	// (0x00022c05) popup_query_data_code_window_g1

0x3b31,	// (0x00022c18) popup_query_data_code_window_t1_ParamLimits

0x3b31,	// (0x00022c18) popup_query_data_code_window_t1

0x3b43,	// (0x00022c2a) popup_query_data_code_window_t2_ParamLimits

0x3b43,	// (0x00022c2a) popup_query_data_code_window_t2

0x3b55,	// (0x00022c3c) popup_query_data_code_window_t3_ParamLimits

0x3b55,	// (0x00022c3c) popup_query_data_code_window_t3

0x3b6b,	// (0x00022c52) popup_query_data_code_window_t4_ParamLimits

0x3b6b,	// (0x00022c52) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0002e671) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0002e671) popup_query_data_code_window_t

0x4ab3,	// (0x00023b9a) list_single_midp_graphic_pane_g3

0x3b83,	// (0x00022c6a) query_popup_data_pane_cp2_ParamLimits

0x3b96,	// (0x00022c7d) query_popup_pane_cp2_ParamLimits

0x3b96,	// (0x00022c7d) query_popup_pane_cp2

0x36d5,	// (0x000227bc) bg_popup_window_pane_cp11

0x591f,	// (0x00024a06) heading_pane_cp5

0x3c81,	// (0x00022d68) listscroll_popup_info_pane

0x36d5,	// (0x000227bc) input_focus_pane_cp3

0x3ba9,	// (0x00022c90) query_popup_pane_t1

0x3bb7,	// (0x00022c9e) list_popup_info_pane_ParamLimits

0x3bb7,	// (0x00022c9e) list_popup_info_pane

0x3bc6,	// (0x00022cad) listscroll_popup_info_pane_g1

0x3bce,	// (0x00022cb5) scroll_pane_cp7

0x3bd8,	// (0x00022cbf) popup_info_list_pane_t1_ParamLimits

0x3bd8,	// (0x00022cbf) popup_info_list_pane_t1

0x3bf2,	// (0x00022cd9) popup_info_list_pane_t2_ParamLimits

0x3bf2,	// (0x00022cd9) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0002e67a) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0002e67a) popup_info_list_pane_t

0x36d5,	// (0x000227bc) bg_popup_window_pane_cp12

0x6c2f,	// (0x00025d16) find_popup_pane

0x37b5,	// (0x0002289c) bg_popup_window_pane_cp3

0x3c0c,	// (0x00022cf3) heading_pane_cp3

0x3c18,	// (0x00022cff) listscroll_popup_graphic_pane

0x36d5,	// (0x000227bc) bg_popup_window_pane_cp4

0xd2e4,	// (0x0002c3cb) heading_pane_cp4

0x3c81,	// (0x00022d68) listscroll_popup_colour_pane

0x3c89,	// (0x00022d70) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3c89,	// (0x00022d70) cell_large_graphic_colour_none_popup_pane

0xd2ec,	// (0x0002c3d3) grid_large_graphic_colour_popup_pane_ParamLimits

0xd2ec,	// (0x0002c3d3) grid_large_graphic_colour_popup_pane

0x3cc5,	// (0x00022dac) listscroll_popup_colour_pane_g1_ParamLimits

0x3cc5,	// (0x00022dac) listscroll_popup_colour_pane_g1

0x3cdc,	// (0x00022dc3) listscroll_popup_colour_pane_g2_ParamLimits

0x3cdc,	// (0x00022dc3) listscroll_popup_colour_pane_g2

0x3cf3,	// (0x00022dda) listscroll_popup_colour_pane_g3_ParamLimits

0x3cf3,	// (0x00022dda) listscroll_popup_colour_pane_g3

0xd310,	// (0x0002c3f7) listscroll_popup_colour_pane_g4_ParamLimits

0xd310,	// (0x0002c3f7) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0002e67f) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0002e67f) listscroll_popup_colour_pane_g

0x3d12,	// (0x00022df9) scroll_pane_cp6_ParamLimits

0x3d12,	// (0x00022df9) scroll_pane_cp6

0xd31f,	// (0x0002c406) cell_large_graphic_colour_popup_pane_ParamLimits

0xd31f,	// (0x0002c406) cell_large_graphic_colour_popup_pane

0x3d43,	// (0x00022e2a) cell_large_graphic_colour_none_popup_pane_t1

0x36d5,	// (0x000227bc) grid_highlight_pane_cp5

0x3d52,	// (0x00022e39) cell_large_graphic_colour_popup_pane_g1

0x3d5a,	// (0x00022e41) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0002e688) cell_large_graphic_colour_popup_pane_g

0x3d62,	// (0x00022e49) cell_large_graphic_colour_popup_pane_g2_copy1

0x3d6b,	// (0x00022e52) grid_highlight_pane_cp4

0x3d73,	// (0x00022e5a) bg_popup_window_pane_cp8_ParamLimits

0x3d73,	// (0x00022e5a) bg_popup_window_pane_cp8

0x3d8e,	// (0x00022e75) popup_snote_single_text_window_g1_ParamLimits

0x3d8e,	// (0x00022e75) popup_snote_single_text_window_g1

0x3da0,	// (0x00022e87) popup_snote_single_text_window_t1_ParamLimits

0x3da0,	// (0x00022e87) popup_snote_single_text_window_t1

0x3db3,	// (0x00022e9a) popup_snote_single_text_window_t2_ParamLimits

0x3db3,	// (0x00022e9a) popup_snote_single_text_window_t2

0x3dc6,	// (0x00022ead) popup_snote_single_text_window_t3_ParamLimits

0x3dc6,	// (0x00022ead) popup_snote_single_text_window_t3

0x3dff,	// (0x00022ee6) popup_snote_single_text_window_t4_ParamLimits

0x3dff,	// (0x00022ee6) popup_snote_single_text_window_t4

0x3e33,	// (0x00022f1a) popup_snote_single_text_window_t5_ParamLimits

0x3e33,	// (0x00022f1a) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0002e68d) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0002e68d) popup_snote_single_text_window_t

0x3e62,	// (0x00022f49) bg_popup_window_pane_cp9_ParamLimits

0x3e62,	// (0x00022f49) bg_popup_window_pane_cp9

0x3d8e,	// (0x00022e75) popup_snote_single_graphic_window_g1_ParamLimits

0x3d8e,	// (0x00022e75) popup_snote_single_graphic_window_g1

0x3e70,	// (0x00022f57) popup_snote_single_graphic_window_g2_ParamLimits

0x3e70,	// (0x00022f57) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0002e698) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0002e698) popup_snote_single_graphic_window_g

0x3e7c,	// (0x00022f63) popup_snote_single_graphic_window_t1_ParamLimits

0x3e7c,	// (0x00022f63) popup_snote_single_graphic_window_t1

0x3e8f,	// (0x00022f76) popup_snote_single_graphic_window_t2_ParamLimits

0x3e8f,	// (0x00022f76) popup_snote_single_graphic_window_t2

0x3ea2,	// (0x00022f89) popup_snote_single_graphic_window_t3_ParamLimits

0x3ea2,	// (0x00022f89) popup_snote_single_graphic_window_t3

0x3edb,	// (0x00022fc2) popup_snote_single_graphic_window_t4_ParamLimits

0x3edb,	// (0x00022fc2) popup_snote_single_graphic_window_t4

0x3f0f,	// (0x00022ff6) popup_snote_single_graphic_window_t5_ParamLimits

0x3f0f,	// (0x00022ff6) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0002e69d) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0002e69d) popup_snote_single_graphic_window_t

0xdfb0,	// (0x0002d097) grid_graphic_popup_pane_ParamLimits

0xdfb0,	// (0x0002d097) grid_graphic_popup_pane

0x6b9b,	// (0x00025c82) listscroll_popup_graphic_pane_g1_ParamLimits

0x6b9b,	// (0x00025c82) listscroll_popup_graphic_pane_g1

0xdfcf,	// (0x0002d0b6) listscroll_popup_graphic_pane_g2_ParamLimits

0xdfcf,	// (0x0002d0b6) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a4,	// (0x0002ea8b) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a4,	// (0x0002ea8b) listscroll_popup_graphic_pane_g

0x6bc3,	// (0x00025caa) scroll_pane_cp5

0xdf6b,	// (0x0002d052) cell_graphic_popup_pane_ParamLimits

0xdf6b,	// (0x0002d052) cell_graphic_popup_pane

0x6af3,	// (0x00025bda) cell_graphic_popup_pane_g1

0x6afb,	// (0x00025be2) cell_graphic_popup_pane_g2

0x3d62,	// (0x00022e49) cell_graphic_popup_pane_g3

0x0002,

0xf99d,	// (0x0002ea84) cell_graphic_popup_pane_g

0x6b04,	// (0x00025beb) cell_graphic_popup_pane_t2

0x3d6b,	// (0x00022e52) grid_highlight_pane_cp3

0x3f50,	// (0x00023037) list_gen_pane_ParamLimits

0x3f50,	// (0x00023037) list_gen_pane

0x3f82,	// (0x00023069) scroll_pane

0xdf26,	// (0x0002d00d) bg_list_pane_g1_ParamLimits

0xdf26,	// (0x0002d00d) bg_list_pane_g1

0x6a70,	// (0x00025b57) bg_list_pane_g2_ParamLimits

0x6a70,	// (0x00025b57) bg_list_pane_g2

0x6a83,	// (0x00025b6a) bg_list_pane_g3_ParamLimits

0x6a83,	// (0x00025b6a) bg_list_pane_g3

0x6a95,	// (0x00025b7c) bg_list_pane_g4_ParamLimits

0x6a95,	// (0x00025b7c) bg_list_pane_g4

0xdf41,	// (0x0002d028) bg_list_pane_g5_ParamLimits

0xdf41,	// (0x0002d028) bg_list_pane_g5

0x0004,

0xf992,	// (0x0002ea79) bg_list_pane_g_ParamLimits

0xf992,	// (0x0002ea79) bg_list_pane_g

0xdeeb,	// (0x0002cfd2) list_double2_graphic_large_graphic_pane_ParamLimits

0xdeeb,	// (0x0002cfd2) list_double2_graphic_large_graphic_pane

0xdeeb,	// (0x0002cfd2) list_double2_graphic_pane_ParamLimits

0xdeeb,	// (0x0002cfd2) list_double2_graphic_pane

0xdeeb,	// (0x0002cfd2) list_double2_large_graphic_pane_ParamLimits

0xdeeb,	// (0x0002cfd2) list_double2_large_graphic_pane

0xdeeb,	// (0x0002cfd2) list_double2_pane_ParamLimits

0xdeeb,	// (0x0002cfd2) list_double2_pane

0xdeeb,	// (0x0002cfd2) list_double_graphic_heading_pane_ParamLimits

0xdeeb,	// (0x0002cfd2) list_double_graphic_heading_pane

0xdeeb,	// (0x0002cfd2) list_double_graphic_pane_ParamLimits

0xdeeb,	// (0x0002cfd2) list_double_graphic_pane

0xdeeb,	// (0x0002cfd2) list_double_heading_pane_ParamLimits

0xdeeb,	// (0x0002cfd2) list_double_heading_pane

0xdeeb,	// (0x0002cfd2) list_double_large_graphic_pane_ParamLimits

0xdeeb,	// (0x0002cfd2) list_double_large_graphic_pane

0xdeeb,	// (0x0002cfd2) list_double_number_pane_ParamLimits

0xdeeb,	// (0x0002cfd2) list_double_number_pane

0xdeeb,	// (0x0002cfd2) list_double_pane_ParamLimits

0xdeeb,	// (0x0002cfd2) list_double_pane

0xdeeb,	// (0x0002cfd2) list_double_time_pane_ParamLimits

0xdeeb,	// (0x0002cfd2) list_double_time_pane

0xdeeb,	// (0x0002cfd2) list_setting_number_pane_ParamLimits

0xdeeb,	// (0x0002cfd2) list_setting_number_pane

0xdeeb,	// (0x0002cfd2) list_setting_pane_ParamLimits

0xdeeb,	// (0x0002cfd2) list_setting_pane

0xdefe,	// (0x0002cfe5) list_single_2graphic_pane_ParamLimits

0xdefe,	// (0x0002cfe5) list_single_2graphic_pane

0xdefe,	// (0x0002cfe5) list_single_graphic_heading_pane_ParamLimits

0xdefe,	// (0x0002cfe5) list_single_graphic_heading_pane

0xdefe,	// (0x0002cfe5) list_single_graphic_pane_ParamLimits

0xdefe,	// (0x0002cfe5) list_single_graphic_pane

0xdefe,	// (0x0002cfe5) list_single_heading_pane_ParamLimits

0xdefe,	// (0x0002cfe5) list_single_heading_pane

0xdefe,	// (0x0002cfe5) list_single_large_graphic_pane_ParamLimits

0xdefe,	// (0x0002cfe5) list_single_large_graphic_pane

0xdefe,	// (0x0002cfe5) list_single_number_heading_pane_ParamLimits

0xdefe,	// (0x0002cfe5) list_single_number_heading_pane

0xdefe,	// (0x0002cfe5) list_single_number_pane_ParamLimits

0xdefe,	// (0x0002cfe5) list_single_number_pane

0xdefe,	// (0x0002cfe5) list_single_pane_ParamLimits

0xdefe,	// (0x0002cfe5) list_single_pane

0x36d5,	// (0x000227bc) list_highlight_pane_cp1

0x023f,	// (0x0001f326) list_single_pane_g1_ParamLimits

0x023f,	// (0x0001f326) list_single_pane_g1

0x024b,	// (0x0001f332) list_single_pane_g2_ParamLimits

0x024b,	// (0x0001f332) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0002e6af) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0002e6af) list_single_pane_g

0x0c85,	// (0x0001fd6c) list_single_pane_t1_ParamLimits

0x0c85,	// (0x0001fd6c) list_single_pane_t1

0x023f,	// (0x0001f326) list_single_number_pane_g1_ParamLimits

0x023f,	// (0x0001f326) list_single_number_pane_g1

0x024b,	// (0x0001f332) list_single_number_pane_g2_ParamLimits

0x024b,	// (0x0001f332) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0002e6af) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0002e6af) list_single_number_pane_g

0x095b,	// (0x0001fa42) list_single_number_pane_t1_ParamLimits

0x095b,	// (0x0001fa42) list_single_number_pane_t1

0xbbf3,	// (0x0002acda) list_single_number_pane_t2_ParamLimits

0xbbf3,	// (0x0002acda) list_single_number_pane_t2

0x0001,

0xf953,	// (0x0002ea3a) list_single_number_pane_t_ParamLimits

0xf953,	// (0x0002ea3a) list_single_number_pane_t

0xb62a,	// (0x0002a711) list_single_graphic_pane_g1_ParamLimits

0xb62a,	// (0x0002a711) list_single_graphic_pane_g1

0x023f,	// (0x0001f326) list_single_graphic_pane_g2_ParamLimits

0x023f,	// (0x0001f326) list_single_graphic_pane_g2

0x024b,	// (0x0001f332) list_single_graphic_pane_g3_ParamLimits

0x024b,	// (0x0001f332) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0002e6a8) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0002e6a8) list_single_graphic_pane_g

0xb636,	// (0x0002a71d) list_single_graphic_pane_t1_ParamLimits

0xb636,	// (0x0002a71d) list_single_graphic_pane_t1

0x023f,	// (0x0001f326) list_single_heading_pane_g1_ParamLimits

0x023f,	// (0x0001f326) list_single_heading_pane_g1

0x024b,	// (0x0001f332) list_single_heading_pane_g2_ParamLimits

0x024b,	// (0x0001f332) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002e6af) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002e6af) list_single_heading_pane_g

0xb64c,	// (0x0002a733) list_single_heading_pane_t1_ParamLimits

0xb64c,	// (0x0002a733) list_single_heading_pane_t1

0xb662,	// (0x0002a749) list_single_heading_pane_t2_ParamLimits

0xb662,	// (0x0002a749) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0002e6b4) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0002e6b4) list_single_heading_pane_t

0x023f,	// (0x0001f326) list_single_number_heading_pane_g1_ParamLimits

0x023f,	// (0x0001f326) list_single_number_heading_pane_g1

0x024b,	// (0x0001f332) list_single_number_heading_pane_g2_ParamLimits

0x024b,	// (0x0001f332) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002e6af) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002e6af) list_single_number_heading_pane_g

0xb64c,	// (0x0002a733) list_single_number_heading_pane_t1_ParamLimits

0xb64c,	// (0x0002a733) list_single_number_heading_pane_t1

0xb674,	// (0x0002a75b) list_single_number_heading_pane_t2_ParamLimits

0xb674,	// (0x0002a75b) list_single_number_heading_pane_t2

0x0c5f,	// (0x0001fd46) list_single_number_heading_pane_t3_ParamLimits

0x0c5f,	// (0x0001fd46) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0002e6b9) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0002e6b9) list_single_number_heading_pane_t

0x0909,	// (0x0001f9f0) list_single_graphic_heading_pane_g1_ParamLimits

0x0909,	// (0x0001f9f0) list_single_graphic_heading_pane_g1

0xb686,	// (0x0002a76d) list_single_graphic_heading_pane_g4_ParamLimits

0xb686,	// (0x0002a76d) list_single_graphic_heading_pane_g4

0x024b,	// (0x0001f332) list_single_graphic_heading_pane_g5_ParamLimits

0x024b,	// (0x0001f332) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0002e6c0) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0002e6c0) list_single_graphic_heading_pane_g

0xb64c,	// (0x0002a733) list_single_graphic_heading_pane_t1_ParamLimits

0xb64c,	// (0x0002a733) list_single_graphic_heading_pane_t1

0xb697,	// (0x0002a77e) list_single_graphic_heading_pane_t2_ParamLimits

0xb697,	// (0x0002a77e) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0002e6c7) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0002e6c7) list_single_graphic_heading_pane_t

0x0c9b,	// (0x0001fd82) list_single_large_graphic_pane_g1_ParamLimits

0x0c9b,	// (0x0001fd82) list_single_large_graphic_pane_g1

0x023f,	// (0x0001f326) list_single_large_graphic_pane_g2_ParamLimits

0x023f,	// (0x0001f326) list_single_large_graphic_pane_g2

0x024b,	// (0x0001f332) list_single_large_graphic_pane_g3_ParamLimits

0x024b,	// (0x0001f332) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0002e6cc) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0002e6cc) list_single_large_graphic_pane_g

0x5ac2,	// (0x00024ba9) wait_border_pane_g2_copy1

0xb6a9,	// (0x0002a790) list_single_large_graphic_pane_g4_cp2

0x0ca7,	// (0x0001fd8e) list_single_large_graphic_pane_t1_ParamLimits

0x0ca7,	// (0x0001fd8e) list_single_large_graphic_pane_t1

0xb6b1,	// (0x0002a798) list_double_pane_g1_ParamLimits

0xb6b1,	// (0x0002a798) list_double_pane_g1

0x02c6,	// (0x0001f3ad) list_double_pane_g2_ParamLimits

0x02c6,	// (0x0001f3ad) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0002e6d3) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0002e6d3) list_double_pane_g

0x02d2,	// (0x0001f3b9) list_double_pane_t1_ParamLimits

0x02d2,	// (0x0001f3b9) list_double_pane_t1

0xb6bd,	// (0x0002a7a4) list_double_pane_t2_ParamLimits

0xb6bd,	// (0x0002a7a4) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0002e6d8) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0002e6d8) list_double_pane_t

0xb6cf,	// (0x0002a7b6) list_double2_pane_g1_ParamLimits

0xb6cf,	// (0x0002a7b6) list_double2_pane_g1

0x048b,	// (0x0001f572) list_double2_pane_g2_ParamLimits

0x048b,	// (0x0001f572) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0002e6dd) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0002e6dd) list_double2_pane_g

0xb6e0,	// (0x0002a7c7) list_double2_pane_t1_ParamLimits

0xb6e0,	// (0x0002a7c7) list_double2_pane_t1

0xb6f6,	// (0x0002a7dd) list_double2_pane_t2_ParamLimits

0xb6f6,	// (0x0002a7dd) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0002e6e2) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0002e6e2) list_double2_pane_t

0xb6b1,	// (0x0002a798) list_double_number_pane_g1_ParamLimits

0xb6b1,	// (0x0002a798) list_double_number_pane_g1

0x02c6,	// (0x0001f3ad) list_double_number_pane_g2_ParamLimits

0x02c6,	// (0x0001f3ad) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0002e6d3) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0002e6d3) list_double_number_pane_g

0xb708,	// (0x0002a7ef) list_double_number_pane_t1_ParamLimits

0xb708,	// (0x0002a7ef) list_double_number_pane_t1

0x039b,	// (0x0001f482) list_double_number_pane_t2_ParamLimits

0x039b,	// (0x0001f482) list_double_number_pane_t2

0xb71a,	// (0x0002a801) list_double_number_pane_t3_ParamLimits

0xb71a,	// (0x0002a801) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0002e6e7) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0002e6e7) list_double_number_pane_t

0x038f,	// (0x0001f476) list_double_graphic_pane_g1_ParamLimits

0x038f,	// (0x0001f476) list_double_graphic_pane_g1

0xb72c,	// (0x0002a813) list_double_graphic_pane_g2_ParamLimits

0xb72c,	// (0x0002a813) list_double_graphic_pane_g2

0xb73b,	// (0x0002a822) list_double_graphic_pane_g3_ParamLimits

0xb73b,	// (0x0002a822) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0002e6ee) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0002e6ee) list_double_graphic_pane_g

0xb753,	// (0x0002a83a) list_double_graphic_pane_t1_ParamLimits

0xb753,	// (0x0002a83a) list_double_graphic_pane_t1

0xb769,	// (0x0002a850) list_double_graphic_pane_t2_ParamLimits

0xb769,	// (0x0002a850) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0002e6f7) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0002e6f7) list_double_graphic_pane_t

0xb77b,	// (0x0002a862) list_double2_graphic_pane_g1_ParamLimits

0xb77b,	// (0x0002a862) list_double2_graphic_pane_g1

0xb6b1,	// (0x0002a798) list_double2_graphic_pane_g2_ParamLimits

0xb6b1,	// (0x0002a798) list_double2_graphic_pane_g2

0x02c6,	// (0x0001f3ad) list_double2_graphic_pane_g3_ParamLimits

0x02c6,	// (0x0001f3ad) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0002e6fc) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0002e6fc) list_double2_graphic_pane_g

0xb787,	// (0x0002a86e) list_double2_graphic_pane_t1_ParamLimits

0xb787,	// (0x0002a86e) list_double2_graphic_pane_t1

0xb79d,	// (0x0002a884) list_double2_graphic_pane_t2_ParamLimits

0xb79d,	// (0x0002a884) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0002e703) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0002e703) list_double2_graphic_pane_t

0xb7af,	// (0x0002a896) list_double_large_graphic_pane_g1_ParamLimits

0xb7af,	// (0x0002a896) list_double_large_graphic_pane_g1

0xb7ce,	// (0x0002a8b5) list_double_large_graphic_pane_g2_ParamLimits

0xb7ce,	// (0x0002a8b5) list_double_large_graphic_pane_g2

0x02c6,	// (0x0001f3ad) list_double_large_graphic_pane_g3_ParamLimits

0x02c6,	// (0x0001f3ad) list_double_large_graphic_pane_g3

0xb7df,	// (0x0002a8c6) list_double_large_graphic_pane_g4_ParamLimits

0xb7df,	// (0x0002a8c6) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0002e708) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0002e708) list_double_large_graphic_pane_g

0xb7f2,	// (0x0002a8d9) list_double_large_graphic_pane_t1_ParamLimits

0xb7f2,	// (0x0002a8d9) list_double_large_graphic_pane_t1

0xb80b,	// (0x0002a8f2) list_double_large_graphic_pane_t2_ParamLimits

0xb80b,	// (0x0002a8f2) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002e713) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002e713) list_double_large_graphic_pane_t

0xb81d,	// (0x0002a904) list_double2_large_graphic_pane_g1_ParamLimits

0xb81d,	// (0x0002a904) list_double2_large_graphic_pane_g1

0xb6cf,	// (0x0002a7b6) list_double2_large_graphic_pane_g2_ParamLimits

0xb6cf,	// (0x0002a7b6) list_double2_large_graphic_pane_g2

0x048b,	// (0x0001f572) list_double2_large_graphic_pane_g3_ParamLimits

0x048b,	// (0x0001f572) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0002e718) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0002e718) list_double2_large_graphic_pane_g

0xb829,	// (0x0002a910) list_double2_large_graphic_pane_t1_ParamLimits

0xb829,	// (0x0002a910) list_double2_large_graphic_pane_t1

0xb83f,	// (0x0002a926) list_double2_large_graphic_pane_t2_ParamLimits

0xb83f,	// (0x0002a926) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0002e71f) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0002e71f) list_double2_large_graphic_pane_t

0xb851,	// (0x0002a938) list_double_heading_pane_g1_ParamLimits

0xb851,	// (0x0002a938) list_double_heading_pane_g1

0xb862,	// (0x0002a949) list_double_heading_pane_g2_ParamLimits

0xb862,	// (0x0002a949) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0002e724) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0002e724) list_double_heading_pane_g

0xb86e,	// (0x0002a955) list_double_heading_pane_t1_ParamLimits

0xb86e,	// (0x0002a955) list_double_heading_pane_t1

0xb6f6,	// (0x0002a7dd) list_double_heading_pane_t2_ParamLimits

0xb6f6,	// (0x0002a7dd) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0002e729) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0002e729) list_double_heading_pane_t

0x038f,	// (0x0001f476) list_double_graphic_heading_pane_g1_ParamLimits

0x038f,	// (0x0001f476) list_double_graphic_heading_pane_g1

0xb851,	// (0x0002a938) list_double_graphic_heading_pane_g2_ParamLimits

0xb851,	// (0x0002a938) list_double_graphic_heading_pane_g2

0xb862,	// (0x0002a949) list_double_graphic_heading_pane_g3_ParamLimits

0xb862,	// (0x0002a949) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0002e72e) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0002e72e) list_double_graphic_heading_pane_g

0xb884,	// (0x0002a96b) list_double_graphic_heading_pane_t1_ParamLimits

0xb884,	// (0x0002a96b) list_double_graphic_heading_pane_t1

0xb79d,	// (0x0002a884) list_double_graphic_heading_pane_t2_ParamLimits

0xb79d,	// (0x0002a884) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0002e735) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0002e735) list_double_graphic_heading_pane_t

0xb7ce,	// (0x0002a8b5) list_double_time_pane_g1_ParamLimits

0xb7ce,	// (0x0002a8b5) list_double_time_pane_g1

0x02c6,	// (0x0001f3ad) list_double_time_pane_g2_ParamLimits

0x02c6,	// (0x0001f3ad) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0002e73a) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0002e73a) list_double_time_pane_g

0xb89a,	// (0x0002a981) list_double_time_pane_t1_ParamLimits

0xb89a,	// (0x0002a981) list_double_time_pane_t1

0xb8b0,	// (0x0002a997) list_double_time_pane_t2_ParamLimits

0xb8b0,	// (0x0002a997) list_double_time_pane_t2

0xb8c2,	// (0x0002a9a9) list_double_time_pane_t3_ParamLimits

0xb8c2,	// (0x0002a9a9) list_double_time_pane_t3

0xb8d4,	// (0x0002a9bb) list_double_time_pane_t4_ParamLimits

0xb8d4,	// (0x0002a9bb) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0002e73f) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0002e73f) list_double_time_pane_t

0x050f,	// (0x0001f5f6) list_setting_pane_g1_ParamLimits

0x050f,	// (0x0001f5f6) list_setting_pane_g1

0x048b,	// (0x0001f572) list_setting_pane_g2_ParamLimits

0x048b,	// (0x0001f572) list_setting_pane_g2

0x0001,

0xf661,	// (0x0002e748) list_setting_pane_g_ParamLimits

0xf661,	// (0x0002e748) list_setting_pane_g

0xb8e6,	// (0x0002a9cd) list_setting_pane_t1_ParamLimits

0xb8e6,	// (0x0002a9cd) list_setting_pane_t1

0xb900,	// (0x0002a9e7) list_setting_pane_t2_ParamLimits

0xb900,	// (0x0002a9e7) list_setting_pane_t2

0x0002,

0xf666,	// (0x0002e74d) list_setting_pane_t_ParamLimits

0xf666,	// (0x0002e74d) list_setting_pane_t

0xb93d,	// (0x0002aa24) set_value_pane_cp_ParamLimits

0xb93d,	// (0x0002aa24) set_value_pane_cp

0x057b,	// (0x0001f662) list_setting_number_pane_g1_ParamLimits

0x057b,	// (0x0001f662) list_setting_number_pane_g1

0x0587,	// (0x0001f66e) list_setting_number_pane_g2_ParamLimits

0x0587,	// (0x0001f66e) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0002e754) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0002e754) list_setting_number_pane_g

0xb949,	// (0x0002aa30) list_setting_number_pane_t1_ParamLimits

0xb949,	// (0x0002aa30) list_setting_number_pane_t1

0xb962,	// (0x0002aa49) list_setting_number_pane_t2_ParamLimits

0xb962,	// (0x0002aa49) list_setting_number_pane_t2

0xb97c,	// (0x0002aa63) list_setting_number_pane_t3_ParamLimits

0xb97c,	// (0x0002aa63) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0002e759) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0002e759) list_setting_number_pane_t

0xb93d,	// (0x0002aa24) set_value_pane_ParamLimits

0xb93d,	// (0x0002aa24) set_value_pane

0x3fb6,	// (0x0002309d) bg_set_opt_pane_ParamLimits

0x3fb6,	// (0x0002309d) bg_set_opt_pane

0x0601,	// (0x0001f6e8) set_value_pane_t1

0x3fd7,	// (0x000230be) slider_set_pane_cp3

0x3fe0,	// (0x000230c7) volume_small_pane_cp

0x3fe9,	// (0x000230d0) list_form_gen_pane

0x3ff2,	// (0x000230d9) scroll_pane_cp8

0xb9bf,	// (0x0002aaa6) form_field_data_pane_ParamLimits

0xb9bf,	// (0x0002aaa6) form_field_data_pane

0xb9d6,	// (0x0002aabd) form_field_data_wide_pane_ParamLimits

0xb9d6,	// (0x0002aabd) form_field_data_wide_pane

0xb9f6,	// (0x0002aadd) form_field_popup_pane_ParamLimits

0xb9f6,	// (0x0002aadd) form_field_popup_pane

0xba0e,	// (0x0002aaf5) form_field_popup_wide_pane_ParamLimits

0xba0e,	// (0x0002aaf5) form_field_popup_wide_pane

0x0693,	// (0x0001f77a) form_field_slider_pane_ParamLimits

0x0693,	// (0x0001f77a) form_field_slider_pane

0x06a6,	// (0x0001f78d) form_field_slider_wide_pane_ParamLimits

0x06a6,	// (0x0001f78d) form_field_slider_wide_pane

0x4003,	// (0x000230ea) data_form_pane

0xba35,	// (0x0002ab1c) form_field_data_pane_t1

0x400f,	// (0x000230f6) input_focus_pane

0x06dd,	// (0x0001f7c4) data_form_wide_pane

0x06fa,	// (0x0001f7e1) form_field_data_wide_pane_t1

0x3d80,	// (0x00022e67) input_focus_pane_cp6

0xba4f,	// (0x0002ab36) form_field_popup_pane_t1

0x400f,	// (0x000230f6) input_focus_pane_cp7

0x403d,	// (0x00023124) list_form_pane

0x073e,	// (0x0001f825) form_field_popup_wide_pane_t1

0x400f,	// (0x000230f6) input_focus_pane_cp8

0x4049,	// (0x00023130) list_form_wide_pane

0xba71,	// (0x0002ab58) form_field_slider_pane_t1_ParamLimits

0xba71,	// (0x0002ab58) form_field_slider_pane_t1

0xba89,	// (0x0002ab70) form_field_slider_pane_t2_ParamLimits

0xba89,	// (0x0002ab70) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0002e769) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0002e769) form_field_slider_pane_t

0x3a30,	// (0x00022b17) input_focus_pane_cp9_ParamLimits

0x3a30,	// (0x00022b17) input_focus_pane_cp9

0xba9e,	// (0x0002ab85) slider_cont_pane_ParamLimits

0xba9e,	// (0x0002ab85) slider_cont_pane

0x4058,	// (0x0002313f) form_field_slider_wide_pane_t1_ParamLimits

0x4058,	// (0x0002313f) form_field_slider_wide_pane_t1

0x0795,	// (0x0001f87c) form_field_slider_wide_pane_t2_ParamLimits

0x0795,	// (0x0001f87c) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0002e76e) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0002e76e) form_field_slider_wide_pane_t

0x3a30,	// (0x00022b17) input_focus_pane_cp10_ParamLimits

0x3a30,	// (0x00022b17) input_focus_pane_cp10

0xbab2,	// (0x0002ab99) slider_cont_pane_cp1_ParamLimits

0xbab2,	// (0x0002ab99) slider_cont_pane_cp1

0xbac6,	// (0x0002abad) slider_form_pane_cp

0x406a,	// (0x00023151) input_focus_pane_g1

0x4072,	// (0x00023159) input_focus_pane_g2

0x407a,	// (0x00023161) input_focus_pane_g3

0x4082,	// (0x00023169) input_focus_pane_g4

0x408a,	// (0x00023171) input_focus_pane_g5

0x4092,	// (0x00023179) input_focus_pane_g6

0x409a,	// (0x00023181) input_focus_pane_g7

0x40a2,	// (0x00023189) input_focus_pane_g8

0x40aa,	// (0x00023191) input_focus_pane_g9

0x36cb,	// (0x000227b2) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0002e773) input_focus_pane_g

0x5acb,	// (0x00024bb2) wait_border_pane_g3_copy1

0xbace,	// (0x0002abb5) data_form_pane_t1

0x36cb,	// (0x000227b2) wait_anim_pane_g1_copy1

0xbc05,	// (0x0002acec) data_form_wide_pane_t1

0xbae8,	// (0x0002abcf) list_form_graphic_pane_cp_ParamLimits

0xbae8,	// (0x0002abcf) list_form_graphic_pane_cp

0x69e6,	// (0x00025acd) slider_form_pane_g1

0x69ef,	// (0x00025ad6) slider_form_pane_g2

0x0006,

0xf983,	// (0x0002ea6a) slider_form_pane_g

0xbafb,	// (0x0002abe2) list_form_graphic_pane_ParamLimits

0xbafb,	// (0x0002abe2) list_form_graphic_pane

0x07f5,	// (0x0001f8dc) list_form_graphic_pane_g1

0x07fd,	// (0x0001f8e4) list_form_graphic_pane_t1_ParamLimits

0x07fd,	// (0x0001f8e4) list_form_graphic_pane_t1

0x37b5,	// (0x0002289c) list_highlight_pane_cp5_ParamLimits

0x37b5,	// (0x0002289c) list_highlight_pane_cp5

0xbb0d,	// (0x0002abf4) find_pane_g1

0x40b2,	// (0x00023199) input_find_pane

0xbb16,	// (0x0002abfd) input_find_pane_g1_ParamLimits

0xbb16,	// (0x0002abfd) input_find_pane_g1

0xbb22,	// (0x0002ac09) input_find_pane_t1_ParamLimits

0xbb22,	// (0x0002ac09) input_find_pane_t1

0xbb37,	// (0x0002ac1e) input_find_pane_t2_ParamLimits

0xbb37,	// (0x0002ac1e) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0002e788) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0002e788) input_find_pane_t

0x40bb,	// (0x000231a2) input_focus_pane_cp5_ParamLimits

0x40bb,	// (0x000231a2) input_focus_pane_cp5

0x40d5,	// (0x000231bc) bg_popup_window_pane_cp2_ParamLimits

0x40d5,	// (0x000231bc) bg_popup_window_pane_cp2

0x40e2,	// (0x000231c9) listscroll_menu_pane_ParamLimits

0x40e2,	// (0x000231c9) listscroll_menu_pane

0xd354,	// (0x0002c43b) popup_submenu_window_ParamLimits

0xd354,	// (0x0002c43b) popup_submenu_window

0x4116,	// (0x000231fd) find_popup_pane_g1

0x411e,	// (0x00023205) input_popup_find_pane_cp

0x40bb,	// (0x000231a2) input_focus_pane_cp4_ParamLimits

0x40bb,	// (0x000231a2) input_focus_pane_cp4

0x4136,	// (0x0002321d) input_popup_find_pane_t1_ParamLimits

0x4136,	// (0x0002321d) input_popup_find_pane_t1

0x36d5,	// (0x000227bc) bg_popup_sub_pane_cp

0x4164,	// (0x0002324b) listscroll_popup_sub_pane

0x416c,	// (0x00023253) list_submenu_pane_ParamLimits

0x416c,	// (0x00023253) list_submenu_pane

0x417d,	// (0x00023264) scroll_pane_cp4

0x4185,	// (0x0002326c) list_single_popup_submenu_pane_ParamLimits

0x4185,	// (0x0002326c) list_single_popup_submenu_pane

0x4199,	// (0x00023280) list_single_popup_submenu_pane_g1

0x41a1,	// (0x00023288) list_single_popup_submenu_pane_t1_ParamLimits

0x41a1,	// (0x00023288) list_single_popup_submenu_pane_t1

0x3a30,	// (0x00022b17) bg_active_tab_pane_cp1_ParamLimits

0x3a30,	// (0x00022b17) bg_active_tab_pane_cp1

0xd38a,	// (0x0002c471) tabs_2_active_pane_g1

0xd392,	// (0x0002c479) tabs_2_active_pane_t1

0x3a30,	// (0x00022b17) bg_passive_tab_pane_cp1_ParamLimits

0x3a30,	// (0x00022b17) bg_passive_tab_pane_cp1

0xd38a,	// (0x0002c471) tabs_2_passive_pane_g1

0xd392,	// (0x0002c479) tabs_2_passive_pane_t1

0x37b5,	// (0x0002289c) bg_active_tab_pane_cp4

0xd3a4,	// (0x0002c48b) tabs_2_long_active_pane_t1

0x4fb1,	// (0x00024098) bg_passive_tab_pane_cp4

0x230f,	// (0x000213f6) list_single_midp_graphic_pane_g4_ParamLimits

0x37b5,	// (0x0002289c) bg_active_tab_pane_cp5

0xd3b7,	// (0x0002c49e) tabs_3_long_active_pane_t1

0x4fb1,	// (0x00024098) bg_passive_tab_pane_cp5

0x230f,	// (0x000213f6) list_single_midp_graphic_pane_g4

0x37b5,	// (0x0002289c) bg_popup_window_pane_cp13_ParamLimits

0x37b5,	// (0x0002289c) bg_popup_window_pane_cp13

0x4218,	// (0x000232ff) listscroll_popup_fast_pane_ParamLimits

0x4218,	// (0x000232ff) listscroll_popup_fast_pane

0x4224,	// (0x0002330b) grid_popup_fast_pane_ParamLimits

0x4224,	// (0x0002330b) grid_popup_fast_pane

0x4236,	// (0x0002331d) scroll_pane_cp9_ParamLimits

0x4236,	// (0x0002331d) scroll_pane_cp9

0x828d,	// (0x00027374) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x828d,	// (0x00027374) list_single_graphic_hl_pane_t1_cp2

0x425a,	// (0x00023341) input_focus_pane_cp20_ParamLimits

0x425a,	// (0x00023341) input_focus_pane_cp20

0x4268,	// (0x0002334f) query_popup_data_pane_t1_ParamLimits

0x4268,	// (0x0002334f) query_popup_data_pane_t1

0x427b,	// (0x00023362) query_popup_data_pane_t2_ParamLimits

0x427b,	// (0x00023362) query_popup_data_pane_t2

0x42c1,	// (0x000233a8) query_popup_data_pane_t3_ParamLimits

0x42c1,	// (0x000233a8) query_popup_data_pane_t3

0x4302,	// (0x000233e9) query_popup_data_pane_t4_ParamLimits

0x4302,	// (0x000233e9) query_popup_data_pane_t4

0x433e,	// (0x00023425) query_popup_data_pane_t5_ParamLimits

0x433e,	// (0x00023425) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0002e78d) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0002e78d) query_popup_data_pane_t

0x406a,	// (0x00023151) bg_set_opt_pane_g1

0x4072,	// (0x00023159) bg_set_opt_pane_g2

0x407a,	// (0x00023161) bg_set_opt_pane_g3

0x4082,	// (0x00023169) bg_set_opt_pane_g4

0x408a,	// (0x00023171) bg_set_opt_pane_g5

0x4092,	// (0x00023179) bg_set_opt_pane_g6

0x409a,	// (0x00023181) bg_set_opt_pane_g7

0x40a2,	// (0x00023189) bg_set_opt_pane_g8

0x40aa,	// (0x00023191) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0002e798) bg_set_opt_pane_g

0x19d5,	// (0x00020abc) control_top_pane_stacon_ParamLimits

0x19d5,	// (0x00020abc) control_top_pane_stacon

0x1a28,	// (0x00020b0f) signal_pane_stacon_ParamLimits

0x1a28,	// (0x00020b0f) signal_pane_stacon

0x4914,	// (0x000239fb) stacon_top_pane_g1_ParamLimits

0x4914,	// (0x000239fb) stacon_top_pane_g1

0x1a4d,	// (0x00020b34) title_pane_stacon_ParamLimits

0x1a4d,	// (0x00020b34) title_pane_stacon

0x1a77,	// (0x00020b5e) uni_indicator_pane_stacon_ParamLimits

0x1a77,	// (0x00020b5e) uni_indicator_pane_stacon

0x1a8c,	// (0x00020b73) battery_pane_stacon_ParamLimits

0x1a8c,	// (0x00020b73) battery_pane_stacon

0x1ad0,	// (0x00020bb7) control_bottom_pane_stacon_ParamLimits

0x1ad0,	// (0x00020bb7) control_bottom_pane_stacon

0x1af3,	// (0x00020bda) navi_pane_stacon_ParamLimits

0x1af3,	// (0x00020bda) navi_pane_stacon

0x4936,	// (0x00023a1d) stacon_bottom_pane_g1_ParamLimits

0x4936,	// (0x00023a1d) stacon_bottom_pane_g1

0x173f,	// (0x00020826) aid_levels_signal_lsc_ParamLimits

0x173f,	// (0x00020826) aid_levels_signal_lsc

0x1756,	// (0x0002083d) signal_pane_stacon_g1_ParamLimits

0x1756,	// (0x0002083d) signal_pane_stacon_g1

0x176a,	// (0x00020851) signal_pane_stacon_g2_ParamLimits

0x176a,	// (0x00020851) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0002e7ab) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0002e7ab) signal_pane_stacon_g

0x179f,	// (0x00020886) title_pane_stacon_t1_ParamLimits

0x179f,	// (0x00020886) title_pane_stacon_t1

0x4382,	// (0x00023469) uni_indicator_pane_stacon_g1

0x438c,	// (0x00023473) uni_indicator_pane_stacon_g2

0x4396,	// (0x0002347d) uni_indicator_pane_stacon_g3

0x43a0,	// (0x00023487) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0002e7b7) uni_indicator_pane_stacon_g

0x17c4,	// (0x000208ab) control_top_pane_stacon_g1

0x17cc,	// (0x000208b3) control_top_pane_stacon_t1_ParamLimits

0x17cc,	// (0x000208b3) control_top_pane_stacon_t1

0x1803,	// (0x000208ea) aid_levels_battery_lsc_ParamLimits

0x1803,	// (0x000208ea) aid_levels_battery_lsc

0x181b,	// (0x00020902) battery_pane_stacon_g1_ParamLimits

0x181b,	// (0x00020902) battery_pane_stacon_g1

0x182e,	// (0x00020915) battery_pane_stacon_g2_ParamLimits

0x182e,	// (0x00020915) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0002e7c0) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0002e7c0) battery_pane_stacon_g

0x186c,	// (0x00020953) navi_icon_pane_stacon

0x1880,	// (0x00020967) navi_navi_pane_stacon

0x186c,	// (0x00020953) navi_text_pane_stacon

0x17c4,	// (0x000208ab) control_bottom_pane_stacon_g1

0x1894,	// (0x0002097b) control_bottom_pane_stacon_t1_ParamLimits

0x1894,	// (0x0002097b) control_bottom_pane_stacon_t1

0xd3c9,	// (0x0002c4b0) grid_app_pane_ParamLimits

0xd3c9,	// (0x0002c4b0) grid_app_pane

0xd3ff,	// (0x0002c4e6) scroll_pane_cp15_ParamLimits

0xd3ff,	// (0x0002c4e6) scroll_pane_cp15

0xd414,	// (0x0002c4fb) cell_app_pane_ParamLimits

0xd414,	// (0x0002c4fb) cell_app_pane

0xd45b,	// (0x0002c542) cell_app_pane_g1_ParamLimits

0xd45b,	// (0x0002c542) cell_app_pane_g1

0x443f,	// (0x00023526) cell_app_pane_g2_ParamLimits

0x443f,	// (0x00023526) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0002e7c5) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0002e7c5) cell_app_pane_g

0xd47b,	// (0x0002c562) cell_app_pane_t1_ParamLimits

0xd47b,	// (0x0002c562) cell_app_pane_t1

0x4462,	// (0x00023549) grid_highlight_pane_ParamLimits

0x4462,	// (0x00023549) grid_highlight_pane

0x406a,	// (0x00023151) cell_highlight_pane_g1

0x4072,	// (0x00023159) cell_highlight_pane_g2

0x407a,	// (0x00023161) cell_highlight_pane_g3

0x4082,	// (0x00023169) cell_highlight_pane_g4

0x408a,	// (0x00023171) cell_highlight_pane_g5

0x4092,	// (0x00023179) cell_highlight_pane_g6

0x409a,	// (0x00023181) cell_highlight_pane_g7

0x40a2,	// (0x00023189) cell_highlight_pane_g8

0x40aa,	// (0x00023191) cell_highlight_pane_g9

0x36cb,	// (0x000227b2) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0002e773) cell_highlight_pane_g

0x4473,	// (0x0002355a) bg_scroll_pane

0x18de,	// (0x000209c5) scroll_handle_pane

0x44ba,	// (0x000235a1) scroll_bg_pane_g1

0x44cf,	// (0x000235b6) scroll_bg_pane_g2

0x44e7,	// (0x000235ce) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0002e7ca) scroll_bg_pane_g

0x44fc,	// (0x000235e3) scroll_handle_focus_pane_ParamLimits

0x44fc,	// (0x000235e3) scroll_handle_focus_pane

0x44ba,	// (0x000235a1) scroll_handle_pane_g1

0x4509,	// (0x000235f0) scroll_handle_pane_g2

0x44e7,	// (0x000235ce) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0002e7d1) scroll_handle_pane_g

0x40bb,	// (0x000231a2) bg_popup_sub_pane_cp21_ParamLimits

0x40bb,	// (0x000231a2) bg_popup_sub_pane_cp21

0x451d,	// (0x00023604) popup_fep_japan_predictive_window_t1_ParamLimits

0x451d,	// (0x00023604) popup_fep_japan_predictive_window_t1

0x4537,	// (0x0002361e) popup_fep_japan_predictive_window_t2_ParamLimits

0x4537,	// (0x0002361e) popup_fep_japan_predictive_window_t2

0x456a,	// (0x00023651) popup_fep_japan_predictive_window_t3_ParamLimits

0x456a,	// (0x00023651) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0002e7d8) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0002e7d8) popup_fep_japan_predictive_window_t

0x36d5,	// (0x000227bc) bg_popup_sub_pane_cp23

0x45a1,	// (0x00023688) listscroll_japin_cand_pane

0x45a9,	// (0x00023690) popup_fep_japan_candidate_window_t1

0x45b7,	// (0x0002369e) candidate_pane_ParamLimits

0x45b7,	// (0x0002369e) candidate_pane

0x45c9,	// (0x000236b0) scroll_pane_cp30

0x45d1,	// (0x000236b8) list_single_popup_jap_candidate_pane_ParamLimits

0x45d1,	// (0x000236b8) list_single_popup_jap_candidate_pane

0x36d5,	// (0x000227bc) list_highlight_pane_cp30

0x45e5,	// (0x000236cc) list_single_popup_jap_candidate_pane_t1

0x45f4,	// (0x000236db) level_1_signal

0x4601,	// (0x000236e8) level_2_signal

0x460e,	// (0x000236f5) level_3_signal

0x461b,	// (0x00023702) level_4_signal

0x4628,	// (0x0002370f) level_5_signal

0x4635,	// (0x0002371c) level_6_signal

0x4642,	// (0x00023729) level_7_signal

0x45f4,	// (0x000236db) level_1_battery

0x4601,	// (0x000236e8) level_2_battery

0x460e,	// (0x000236f5) level_3_battery

0x461b,	// (0x00023702) level_4_battery

0x4628,	// (0x0002370f) level_5_battery

0x4635,	// (0x0002371c) level_6_battery

0x4642,	// (0x00023729) level_7_battery

0x4667,	// (0x0002374e) list_menu_pane_ParamLimits

0x4667,	// (0x0002374e) list_menu_pane

0x467d,	// (0x00023764) scroll_pane_cp25_ParamLimits

0x467d,	// (0x00023764) scroll_pane_cp25

0x4696,	// (0x0002377d) list_double2_graphic_pane_cp2_ParamLimits

0x4696,	// (0x0002377d) list_double2_graphic_pane_cp2

0x4696,	// (0x0002377d) list_double2_large_graphic_pane_cp2_ParamLimits

0x4696,	// (0x0002377d) list_double2_large_graphic_pane_cp2

0x4696,	// (0x0002377d) list_double2_pane_cp2_ParamLimits

0x4696,	// (0x0002377d) list_double2_pane_cp2

0x4696,	// (0x0002377d) list_double_graphic_pane_cp2_ParamLimits

0x4696,	// (0x0002377d) list_double_graphic_pane_cp2

0x4696,	// (0x0002377d) list_double_large_graphic_pane_cp2_ParamLimits

0x4696,	// (0x0002377d) list_double_large_graphic_pane_cp2

0x4696,	// (0x0002377d) list_double_number_pane_cp2_ParamLimits

0x4696,	// (0x0002377d) list_double_number_pane_cp2

0x4696,	// (0x0002377d) list_double_pane_cp2_ParamLimits

0x4696,	// (0x0002377d) list_double_pane_cp2

0xd4a3,	// (0x0002c58a) list_single_2graphic_pane_cp2_ParamLimits

0xd4a3,	// (0x0002c58a) list_single_2graphic_pane_cp2

0xd4a3,	// (0x0002c58a) list_single_graphic_heading_pane_cp2_ParamLimits

0xd4a3,	// (0x0002c58a) list_single_graphic_heading_pane_cp2

0xd4a3,	// (0x0002c58a) list_single_graphic_pane_cp2_ParamLimits

0xd4a3,	// (0x0002c58a) list_single_graphic_pane_cp2

0xd4a3,	// (0x0002c58a) list_single_heading_pane_cp2_ParamLimits

0xd4a3,	// (0x0002c58a) list_single_heading_pane_cp2

0x46d0,	// (0x000237b7) list_single_large_graphic_pane_cp2_ParamLimits

0x46d0,	// (0x000237b7) list_single_large_graphic_pane_cp2

0xd4a3,	// (0x0002c58a) list_single_number_heading_pane_cp2_ParamLimits

0xd4a3,	// (0x0002c58a) list_single_number_heading_pane_cp2

0xd4a3,	// (0x0002c58a) list_single_number_pane_cp2_ParamLimits

0xd4a3,	// (0x0002c58a) list_single_number_pane_cp2

0xd4a3,	// (0x0002c58a) list_single_pane_cp2_ParamLimits

0xd4a3,	// (0x0002c58a) list_single_pane_cp2

0x474b,	// (0x00023832) bg_popup_sub_pane_cp22

0x198d,	// (0x00020a74) popup_side_volume_key_window_g1

0x19b1,	// (0x00020a98) popup_side_volume_key_window_t1

0x19cd,	// (0x00020ab4) volume_small_pane_cp1

0x3a30,	// (0x00022b17) bg_popup_sub_pane_cp24_ParamLimits

0x3a30,	// (0x00022b17) bg_popup_sub_pane_cp24

0x4761,	// (0x00023848) fep_china_uni_candidate_pane_ParamLimits

0x4761,	// (0x00023848) fep_china_uni_candidate_pane

0x4775,	// (0x0002385c) fep_china_uni_entry_pane

0x4785,	// (0x0002386c) popup_fep_china_uni_window_g1

0x47a1,	// (0x00023888) fep_china_uni_entry_pane_g1

0x47a9,	// (0x00023890) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0002e809) fep_china_uni_entry_pane_g

0x47b1,	// (0x00023898) fep_entry_item_pane

0x47bb,	// (0x000238a2) fep_candidate_item_pane

0x47db,	// (0x000238c2) fep_china_uni_candidate_pane_g1

0x47e3,	// (0x000238ca) fep_china_uni_candidate_pane_g2

0x47eb,	// (0x000238d2) fep_china_uni_candidate_pane_g3

0x47f3,	// (0x000238da) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0002e80e) fep_china_uni_candidate_pane_g

0x36cb,	// (0x000227b2) fep_entry_item_pane_g1

0x47fb,	// (0x000238e2) fep_entry_item_pane_t1_ParamLimits

0x47fb,	// (0x000238e2) fep_entry_item_pane_t1

0x4811,	// (0x000238f8) fep_candidate_item_pane_t1_ParamLimits

0x4811,	// (0x000238f8) fep_candidate_item_pane_t1

0x4826,	// (0x0002390d) fep_candidate_item_pane_t2_ParamLimits

0x4826,	// (0x0002390d) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0002e817) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0002e817) fep_candidate_item_pane_t

0x37b5,	// (0x0002289c) list_highlight_pane_cp31_ParamLimits

0x37b5,	// (0x0002289c) list_highlight_pane_cp31

0x4838,	// (0x0002391f) level_1_signal_lsc

0x4841,	// (0x00023928) level_2_signal_lsc

0x484a,	// (0x00023931) level_3_signal_lsc

0x4853,	// (0x0002393a) level_4_signal_lsc

0x485c,	// (0x00023943) level_5_signal_lsc

0x4865,	// (0x0002394c) level_6_signal_lsc

0x486e,	// (0x00023955) level_7_signal_lsc

0x486e,	// (0x00023955) level_1_battery_lsc

0x4877,	// (0x0002395e) level_2_battery_lsc

0x4880,	// (0x00023967) level_3_battery_lsc

0x4889,	// (0x00023970) level_4_battery_lsc

0x4892,	// (0x00023979) level_5_battery_lsc

0x489b,	// (0x00023982) level_6_battery_lsc

0x4838,	// (0x0002391f) level_7_battery_lsc

0x48a4,	// (0x0002398b) scroll_handle_focus_pane_g1

0x48ad,	// (0x00023994) scroll_handle_focus_pane_g2

0x48b6,	// (0x0002399d) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0002e81c) scroll_handle_focus_pane_g

0xbb4c,	// (0x0002ac33) list_single_2graphic_pane_g1_ParamLimits

0xbb4c,	// (0x0002ac33) list_single_2graphic_pane_g1

0xb686,	// (0x0002a76d) list_single_2graphic_pane_g2_ParamLimits

0xb686,	// (0x0002a76d) list_single_2graphic_pane_g2

0x024b,	// (0x0001f332) list_single_2graphic_pane_g3_ParamLimits

0x024b,	// (0x0001f332) list_single_2graphic_pane_g3

0xbb58,	// (0x0002ac3f) list_single_2graphic_pane_g4_ParamLimits

0xbb58,	// (0x0002ac3f) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0002e823) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0002e823) list_single_2graphic_pane_g

0xbb64,	// (0x0002ac4b) list_single_2graphic_pane_t1_ParamLimits

0xbb64,	// (0x0002ac4b) list_single_2graphic_pane_t1

0xbb92,	// (0x0002ac79) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbb92,	// (0x0002ac79) list_double2_graphic_large_graphic_pane_g1

0xb6cf,	// (0x0002a7b6) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb6cf,	// (0x0002a7b6) list_double2_graphic_large_graphic_pane_g2

0x048b,	// (0x0001f572) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x048b,	// (0x0001f572) list_double2_graphic_large_graphic_pane_g3

0xbba4,	// (0x0002ac8b) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbba4,	// (0x0002ac8b) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0002e82c) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0002e82c) list_double2_graphic_large_graphic_pane_g

0xbbb0,	// (0x0002ac97) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbbb0,	// (0x0002ac97) list_double2_graphic_large_graphic_pane_t1

0xbbc6,	// (0x0002acad) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbbc6,	// (0x0002acad) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0002e835) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0002e835) list_double2_graphic_large_graphic_pane_t

0x49fd,	// (0x00023ae4) popup_fast_swap_window_ParamLimits

0x49fd,	// (0x00023ae4) popup_fast_swap_window

0x4a19,	// (0x00023b00) popup_side_volume_key_window

0x4a33,	// (0x00023b1a) stacon_top_pane

0x4a3d,	// (0x00023b24) status_pane_ParamLimits

0x4a3d,	// (0x00023b24) status_pane

0xd598,	// (0x0002c67f) status_small_pane

0x36d5,	// (0x000227bc) control_pane

0x36d5,	// (0x000227bc) stacon_bottom_pane

0x3ff2,	// (0x000230d9) scroll_pane_cp121

0x3fe9,	// (0x000230d0) set_content_pane

0xd530,	// (0x0002c617) bg_active_tab_pane_g1_cp1

0x48c8,	// (0x000239af) bg_active_tab_pane_g2_cp1

0xd539,	// (0x0002c620) bg_active_tab_pane_g3_cp1

0xd530,	// (0x0002c617) bg_passive_tab_pane_g1_cp1

0x48c8,	// (0x000239af) bg_passive_tab_pane_g2_cp1

0xd539,	// (0x0002c620) bg_passive_tab_pane_g3_cp1

0xd542,	// (0x0002c629) bg_active_tab_pane_g1_cp2

0x48c8,	// (0x000239af) bg_active_tab_pane_g2_cp2

0xd54b,	// (0x0002c632) bg_active_tab_pane_g3_cp2

0xd542,	// (0x0002c629) bg_passive_tab_pane_g1_cp2

0x48c8,	// (0x000239af) bg_passive_tab_pane_g2_cp2

0xd54b,	// (0x0002c632) bg_passive_tab_pane_g3_cp2

0x48ec,	// (0x000239d3) bg_active_tab_pane_g1_cp3

0x48c8,	// (0x000239af) bg_active_tab_pane_g2_cp3

0x48f5,	// (0x000239dc) bg_active_tab_pane_g3_cp3

0x48ec,	// (0x000239d3) bg_passive_tab_pane_g1_cp3

0x48c8,	// (0x000239af) bg_passive_tab_pane_g2_cp3

0x48f5,	// (0x000239dc) bg_passive_tab_pane_g3_cp3

0xd554,	// (0x0002c63b) bg_active_tab_pane_g1_cp4

0x48c8,	// (0x000239af) bg_active_tab_pane_g2_cp4

0xd55f,	// (0x0002c646) bg_active_tab_pane_g3_cp4

0xd554,	// (0x0002c63b) bg_passive_tab_pane_g1_cp4

0x48c8,	// (0x000239af) bg_passive_tab_pane_g2_cp4

0xd55f,	// (0x0002c646) bg_passive_tab_pane_g3_cp4

0x4952,	// (0x00023a39) bg_active_tab_pane_g1_cp5

0x48c8,	// (0x000239af) bg_active_tab_pane_g2_cp5

0x495b,	// (0x00023a42) bg_active_tab_pane_g3_cp5

0x4952,	// (0x00023a39) bg_passive_tab_pane_g1_cp5

0x48c8,	// (0x000239af) bg_passive_tab_pane_g2_cp5

0x495b,	// (0x00023a42) bg_passive_tab_pane_g3_cp5

0x6f75,	// (0x0002605c) list_set_graphic_pane_ParamLimits

0x6f75,	// (0x0002605c) list_set_graphic_pane

0x36d5,	// (0x000227bc) bg_set_opt_pane_cp4

0xd56a,	// (0x0002c651) list_set_graphic_pane_g1_ParamLimits

0xd56a,	// (0x0002c651) list_set_graphic_pane_g1

0xd576,	// (0x0002c65d) list_set_graphic_pane_g2_ParamLimits

0xd576,	// (0x0002c65d) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0002e83a) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0002e83a) list_set_graphic_pane_g

0x0009,

0xfad1,	// (0x0002ebb8) volume_small_pane_cp_g

0x49b0,	// (0x00023a97) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x49b0,	// (0x00023a97) list_double2_large_graphic_pane_g1_cp2

0x49bc,	// (0x00023aa3) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x49bc,	// (0x00023aa3) list_double2_large_graphic_pane_g2_cp2

0x49cd,	// (0x00023ab4) list_double2_large_graphic_pane_g3_cp2

0x49d5,	// (0x00023abc) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x49d5,	// (0x00023abc) list_double2_large_graphic_pane_t1_cp2

0x49eb,	// (0x00023ad2) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x49eb,	// (0x00023ad2) list_double2_large_graphic_pane_t2_cp2

0x65a4,	// (0x0002568b) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x65a4,	// (0x0002568b) list_double_large_graphic_pane_g1_cp2

0x65b5,	// (0x0002569c) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x65b5,	// (0x0002569c) list_double_large_graphic_pane_g2_cp2

0x4b64,	// (0x00023c4b) list_double_large_graphic_pane_g3_cp2

0x65c6,	// (0x000256ad) list_double_large_graphic_pane_g4_cp

0x65ce,	// (0x000256b5) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x65ce,	// (0x000256b5) list_double_large_graphic_pane_t1_cp2

0x65e5,	// (0x000256cc) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x65e5,	// (0x000256cc) list_double_large_graphic_pane_t2_cp2

0x4a56,	// (0x00023b3d) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4a56,	// (0x00023b3d) list_double2_graphic_pane_g1_cp2

0x4a64,	// (0x00023b4b) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4a64,	// (0x00023b4b) list_double2_graphic_pane_g2_cp2

0x4a75,	// (0x00023b5c) list_double2_graphic_pane_g3_cp2

0x4a7f,	// (0x00023b66) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4a7f,	// (0x00023b66) list_double2_graphic_pane_t1_cp2

0x4a95,	// (0x00023b7c) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4a95,	// (0x00023b7c) list_double2_graphic_pane_t2_cp2

0x4aa7,	// (0x00023b8e) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4aa7,	// (0x00023b8e) list_single_number_heading_pane_g1_cp2

0x4ab3,	// (0x00023b9a) list_single_number_heading_pane_g2_cp2

0x4abb,	// (0x00023ba2) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4abb,	// (0x00023ba2) list_single_number_heading_pane_t1_cp2

0x4ad1,	// (0x00023bb8) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4ad1,	// (0x00023bb8) list_single_number_heading_pane_t2_cp2

0x4ae3,	// (0x00023bca) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4ae3,	// (0x00023bca) list_single_number_heading_pane_t3_cp2

0x4aa7,	// (0x00023b8e) list_single_heading_pane_g1_cp2_ParamLimits

0x4aa7,	// (0x00023b8e) list_single_heading_pane_g1_cp2

0x4ab3,	// (0x00023b9a) list_single_heading_pane_g2_cp2

0x4abb,	// (0x00023ba2) list_single_heading_pane_t1_cp2_ParamLimits

0x4abb,	// (0x00023ba2) list_single_heading_pane_t1_cp2

0x63ae,	// (0x00025495) list_single_heading_pane_t2_cp2_ParamLimits

0x63ae,	// (0x00025495) list_single_heading_pane_t2_cp2

0x62f6,	// (0x000253dd) list_double_graphic_pane_g1_cp2_ParamLimits

0x62f6,	// (0x000253dd) list_double_graphic_pane_g1_cp2

0x6302,	// (0x000253e9) list_double_graphic_pane_g2_cp2_ParamLimits

0x6302,	// (0x000253e9) list_double_graphic_pane_g2_cp2

0x6311,	// (0x000253f8) list_double_graphic_pane_g3_cp2

0x6319,	// (0x00025400) list_double_graphic_pane_t1_cp2_ParamLimits

0x6319,	// (0x00025400) list_double_graphic_pane_t1_cp2

0x632f,	// (0x00025416) list_double_graphic_pane_t2_cp2_ParamLimits

0x632f,	// (0x00025416) list_double_graphic_pane_t2_cp2

0x4b58,	// (0x00023c3f) list_double_number_pane_g1_cp2_ParamLimits

0x4b58,	// (0x00023c3f) list_double_number_pane_g1_cp2

0x4b64,	// (0x00023c4b) list_double_number_pane_g2_cp2

0x62ba,	// (0x000253a1) list_double_number_pane_t1_cp2_ParamLimits

0x62ba,	// (0x000253a1) list_double_number_pane_t1_cp2

0x62ce,	// (0x000253b5) list_double_number_pane_t2_cp2_ParamLimits

0x62ce,	// (0x000253b5) list_double_number_pane_t2_cp2

0x62e4,	// (0x000253cb) list_double_number_pane_t3_cp2_ParamLimits

0x62e4,	// (0x000253cb) list_double_number_pane_t3_cp2

0x61a3,	// (0x0002528a) list_single_graphic_pane_g1_cp2_ParamLimits

0x61a3,	// (0x0002528a) list_single_graphic_pane_g1_cp2

0x47c3,	// (0x000238aa) list_single_graphic_pane_g2_cp2_ParamLimits

0x47c3,	// (0x000238aa) list_single_graphic_pane_g2_cp2

0x4bbc,	// (0x00023ca3) list_single_graphic_pane_g3_cp2

0x6179,	// (0x00025260) list_single_graphic_pane_t1_cp2_ParamLimits

0x6179,	// (0x00025260) list_single_graphic_pane_t1_cp2

0x47c3,	// (0x000238aa) list_single_number_pane_g1_cp2_ParamLimits

0x47c3,	// (0x000238aa) list_single_number_pane_g1_cp2

0x4bbc,	// (0x00023ca3) list_single_number_pane_g2_cp2

0x6179,	// (0x00025260) list_single_number_pane_t1_cp2_ParamLimits

0x6179,	// (0x00025260) list_single_number_pane_t1_cp2

0x618f,	// (0x00025276) list_single_number_pane_t2_cp2_ParamLimits

0x618f,	// (0x00025276) list_single_number_pane_t2_cp2

0x49bc,	// (0x00023aa3) list_double2_pane_g1_cp2_ParamLimits

0x49bc,	// (0x00023aa3) list_double2_pane_g1_cp2

0x49cd,	// (0x00023ab4) list_double2_pane_g2_cp2

0x4b30,	// (0x00023c17) list_double2_pane_t1_cp2_ParamLimits

0x4b30,	// (0x00023c17) list_double2_pane_t1_cp2

0x4b46,	// (0x00023c2d) list_double2_pane_t2_cp2_ParamLimits

0x4b46,	// (0x00023c2d) list_double2_pane_t2_cp2

0x4b58,	// (0x00023c3f) list_double_pane_g1_cp2_ParamLimits

0x4b58,	// (0x00023c3f) list_double_pane_g1_cp2

0x4b64,	// (0x00023c4b) list_double_pane_g2_cp2

0x4b6c,	// (0x00023c53) list_double_pane_t1_cp2_ParamLimits

0x4b6c,	// (0x00023c53) list_double_pane_t1_cp2

0x4b82,	// (0x00023c69) list_double_pane_t2_cp2_ParamLimits

0x4b82,	// (0x00023c69) list_double_pane_t2_cp2

0x4bac,	// (0x00023c93) list_single_pane_cp2_g3

0x47c3,	// (0x000238aa) list_single_pane_g1_cp2_ParamLimits

0x47c3,	// (0x000238aa) list_single_pane_g1_cp2

0x4bbc,	// (0x00023ca3) list_single_pane_g2_cp2

0x4bc4,	// (0x00023cab) list_single_pane_t1_cp2_ParamLimits

0x4bc4,	// (0x00023cab) list_single_pane_t1_cp2

0x4bdc,	// (0x00023cc3) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4bdc,	// (0x00023cc3) list_single_large_graphic_pane_g1_cp2

0x4be8,	// (0x00023ccf) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4be8,	// (0x00023ccf) list_single_large_graphic_pane_g2_cp2

0x4bf4,	// (0x00023cdb) list_single_large_graphic_pane_g3_cp2

0x4bfc,	// (0x00023ce3) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4bfc,	// (0x00023ce3) list_single_large_graphic_pane_g4_cp1

0x4c16,	// (0x00023cfd) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4c16,	// (0x00023cfd) list_single_large_graphic_pane_t1_cp2

0x6145,	// (0x0002522c) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x6145,	// (0x0002522c) list_single_graphic_heading_pane_g1_cp2

0x6112,	// (0x000251f9) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x6112,	// (0x000251f9) list_single_graphic_heading_pane_g4_cp2

0x4bbc,	// (0x00023ca3) list_single_graphic_heading_pane_g5_cp2

0x6151,	// (0x00025238) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x6151,	// (0x00025238) list_single_graphic_heading_pane_t1_cp2

0x6167,	// (0x0002524e) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x6167,	// (0x0002524e) list_single_graphic_heading_pane_t2_cp2

0x6106,	// (0x000251ed) list_single_2graphic_pane_g1_cp2_ParamLimits

0x6106,	// (0x000251ed) list_single_2graphic_pane_g1_cp2

0x6112,	// (0x000251f9) list_single_2graphic_pane_g2_cp2_ParamLimits

0x6112,	// (0x000251f9) list_single_2graphic_pane_g2_cp2

0x4bbc,	// (0x00023ca3) list_single_2graphic_pane_g3_cp2

0x6123,	// (0x0002520a) list_single_2graphic_pane_g4_cp2_ParamLimits

0x6123,	// (0x0002520a) list_single_2graphic_pane_g4_cp2

0x612f,	// (0x00025216) list_single_2graphic_pane_t1_cp2_ParamLimits

0x612f,	// (0x00025216) list_single_2graphic_pane_t1_cp2

0x36cb,	// (0x000227b2) list_highlight_pane_g10_cp1

0x5cde,	// (0x00024dc5) list_highlight_pane_g1_cp1

0x5ce6,	// (0x00024dcd) list_highlight_pane_g2_cp1

0x5cee,	// (0x00024dd5) list_highlight_pane_g3_cp1

0x5cf6,	// (0x00024ddd) list_highlight_pane_g4_cp1

0x5cfe,	// (0x00024de5) list_highlight_pane_g5_cp1

0x5d06,	// (0x00024ded) list_highlight_pane_g6_cp1

0x5d0e,	// (0x00024df5) list_highlight_pane_g7_cp1

0x5d16,	// (0x00024dfd) list_highlight_pane_g8_cp1

0x5d1e,	// (0x00024e05) list_highlight_pane_g9_cp1

0xdc08,	// (0x0002ccef) form_field_slider_pane_t3

0xdc18,	// (0x0002ccff) form_field_slider_pane_t4

0x5c12,	// (0x00024cf9) slider_form_pane_ParamLimits

0x5c12,	// (0x00024cf9) slider_form_pane

0x36d5,	// (0x000227bc) control_abbreviations

0x36d5,	// (0x000227bc) control_conventions

0x36d5,	// (0x000227bc) control_definitions

0x36d5,	// (0x000227bc) format_table_attribute

0x63f8,	// (0x000254df) bg_popup_preview_window_pane_g9

0x36d5,	// (0x000227bc) format_table_data2

0x36d5,	// (0x000227bc) format_table_data3

0x36d5,	// (0x000227bc) format_table_data_example

0x0008,

0x36d5,	// (0x000227bc) intro_purpose

0xf8e3,	// (0x0002e9ca) bg_popup_preview_window_pane_g

0x36d5,	// (0x000227bc) texts_category

0x36d5,	// (0x000227bc) texts_graphics

0x4c2c,	// (0x00023d13) text_digital

0x4c3b,	// (0x00023d22) text_primary

0x4c4a,	// (0x00023d31) text_primary_small

0x4c59,	// (0x00023d40) text_secondary

0x4c68,	// (0x00023d4f) text_title

0x6ac7,	// (0x00025bae) bg_passive_tab_pane_g1_cp3_srt

0x48c8,	// (0x000239af) bg_passive_tab_pane_g2_cp3_srt

0x6ad0,	// (0x00025bb7) bg_passive_tab_pane_g3_cp3_srt

0x3a30,	// (0x00022b17) bg_active_tab_pane_cp3_srt_ParamLimits

0x3a30,	// (0x00022b17) bg_active_tab_pane_cp3_srt

0x6ad9,	// (0x00025bc0) tabs_4_active_pane_srt_g1

0xdf55,	// (0x0002d03c) tabs_4_active_pane_srt_t1_ParamLimits

0xdf55,	// (0x0002d03c) tabs_4_active_pane_srt_t1

0x6ac7,	// (0x00025bae) bg_active_tab_pane_g1_cp3_copy1

0x48c8,	// (0x000239af) bg_active_tab_pane_g2_cp3_copy1

0x6ad0,	// (0x00025bb7) bg_active_tab_pane_g3_cp3_copy1

0x37b5,	// (0x0002289c) tabs_2_long_active_pane_srt_ParamLimits

0x37b5,	// (0x0002289c) tabs_2_long_active_pane_srt

0x37b5,	// (0x0002289c) tabs_2_long_passive_pane_srt_ParamLimits

0x37b5,	// (0x0002289c) tabs_2_long_passive_pane_srt

0x4fb1,	// (0x00024098) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4fb1,	// (0x00024098) bg_passive_tab_pane_cp4_srt

0x6827,	// (0x0002590e) bg_passive_tab_pane_g1_cp4_srt

0x48c8,	// (0x000239af) bg_passive_tab_pane_g2_cp4_srt

0x6830,	// (0x00025917) bg_passive_tab_pane_g3_cp4_srt

0x37b5,	// (0x0002289c) bg_active_tab_pane_cp4_srt_ParamLimits

0x37b5,	// (0x0002289c) bg_active_tab_pane_cp4_srt

0xdd82,	// (0x0002ce69) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdd82,	// (0x0002ce69) tabs_2_long_active_pane_srt_t1

0x6827,	// (0x0002590e) bg_active_tab_pane_g1_cp4_srt

0x48c8,	// (0x000239af) bg_active_tab_pane_g2_cp4_srt

0x6830,	// (0x00025917) bg_active_tab_pane_g3_cp4_srt

0x3a30,	// (0x00022b17) tabs_3_long_active_pane_srt_ParamLimits

0x3a30,	// (0x00022b17) tabs_3_long_active_pane_srt

0x3a30,	// (0x00022b17) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3a30,	// (0x00022b17) tabs_3_long_passive_pane_cp_srt

0x3a30,	// (0x00022b17) tabs_3_long_passive_pane_srt_ParamLimits

0x3a30,	// (0x00022b17) tabs_3_long_passive_pane_srt

0x4fb1,	// (0x00024098) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4fb1,	// (0x00024098) bg_passive_tab_pane_cp5_srt

0x4952,	// (0x00023a39) bg_passive_tab_pane_g1_cp5_srt

0x48c8,	// (0x000239af) bg_passive_tab_pane_g2_cp5_srt

0x495b,	// (0x00023a42) bg_passive_tab_pane_g3_cp5_srt

0x37b5,	// (0x0002289c) bg_active_tab_pane_cp5_srt_ParamLimits

0x37b5,	// (0x0002289c) bg_active_tab_pane_cp5_srt

0xdd6c,	// (0x0002ce53) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdd6c,	// (0x0002ce53) tabs_3_long_active_pane_srt_t1

0x4952,	// (0x00023a39) bg_active_tab_pane_g1_cp5_srt

0x48c8,	// (0x000239af) bg_active_tab_pane_g2_cp5_srt

0x495b,	// (0x00023a42) bg_active_tab_pane_g3_cp5_srt

0x6807,	// (0x000258ee) navi_text_pane_srt_t1

0x67ff,	// (0x000258e6) navi_icon_pane_srt_g1

0x4e2d,	// (0x00023f14) midp_editing_number_pane_srt

0x4c77,	// (0x00023d5e) midp_ticker_pane_srt

0x4e35,	// (0x00023f1c) midp_ticker_pane_srt_g1

0x4e3d,	// (0x00023f24) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0002e859) midp_ticker_pane_srt_g

0x4e45,	// (0x00023f2c) midp_ticker_pane_srt_t1

0x67f0,	// (0x000258d7) midp_editing_number_pane_t1_copy1

0x4fb1,	// (0x00024098) listscroll_midp_pane

0x4fb1,	// (0x00024098) midp_form_pane

0x4ce5,	// (0x00023dcc) midp_info_popup_window_ParamLimits

0x4ce5,	// (0x00023dcc) midp_info_popup_window

0x40bb,	// (0x000231a2) bg_popup_sub_pane_cp50_ParamLimits

0x40bb,	// (0x000231a2) bg_popup_sub_pane_cp50

0x5913,	// (0x000249fa) listscroll_midp_info_pane_ParamLimits

0x5913,	// (0x000249fa) listscroll_midp_info_pane

0x58fb,	// (0x000249e2) listscroll_form_midp_pane_ParamLimits

0x58fb,	// (0x000249e2) listscroll_form_midp_pane

0x5907,	// (0x000249ee) scroll_bar_cp050

0xdbfc,	// (0x0002cce3) list_midp_pane

0x74fc,	// (0x000265e3) signal_pane_g2_cp

0x5815,	// (0x000248fc) listscroll_midp_info_pane_t1_ParamLimits

0x5815,	// (0x000248fc) listscroll_midp_info_pane_t1

0x582d,	// (0x00024914) listscroll_midp_info_pane_t2_ParamLimits

0x582d,	// (0x00024914) listscroll_midp_info_pane_t2

0x586b,	// (0x00024952) listscroll_midp_info_pane_t3_ParamLimits

0x586b,	// (0x00024952) listscroll_midp_info_pane_t3

0x58a5,	// (0x0002498c) listscroll_midp_info_pane_t4_ParamLimits

0x58a5,	// (0x0002498c) listscroll_midp_info_pane_t4

0x0003,

0xf81e,	// (0x0002e905) listscroll_midp_info_pane_t_ParamLimits

0xf81e,	// (0x0002e905) listscroll_midp_info_pane_t

0x417d,	// (0x00023264) scroll_pane_cp21

0x57b7,	// (0x0002489e) form_midp_field_choice_group_pane

0x57c0,	// (0x000248a7) form_midp_field_text_pane

0x57fb,	// (0x000248e2) form_midp_field_time_pane

0x5803,	// (0x000248ea) form_midp_gauge_slider_pane

0x580c,	// (0x000248f3) form_midp_gauge_wait_pane

0x36d5,	// (0x000227bc) form_midp_image_pane

0xbbd8,	// (0x0002acbf) list_single_midp_pane_ParamLimits

0xbbd8,	// (0x0002acbf) list_single_midp_pane

0xdbd9,	// (0x0002ccc0) form_midp_field_text_pane_t1

0x5523,	// (0x0002460a) input_focus_pane_cp050

0x57a6,	// (0x0002488d) list_midp_form_text_pane

0x573a,	// (0x00024821) form_midp_field_choice_group_pane_t1

0x5748,	// (0x0002482f) input_focus_pane_cp051

0x575c,	// (0x00024843) list_midp_choice_pane

0x36d5,	// (0x000227bc) status_idle_pane

0x571e,	// (0x00024805) form_midp_field_time_pane_t1

0x36cb,	// (0x000227b2) wait_anim_pane_g2_copy1

0x572c,	// (0x00024813) form_midp_field_time_pane_t2

0x0001,

0x4d95,	// (0x00023e7c) aid_navinavi_width_2_pane

0xf819,	// (0x0002e900) form_midp_field_time_pane_t

0x36d5,	// (0x000227bc) input_focus_pane_cp052

0x36d5,	// (0x000227bc) bg_input_focus_pane_cp040

0x56de,	// (0x000247c5) form_midp_gauge_slider_pane_t1

0x56ec,	// (0x000247d3) form_midp_gauge_slider_pane_t2

0xdbb9,	// (0x0002cca0) form_midp_gauge_slider_pane_t3

0xdbc9,	// (0x0002ccb0) form_midp_gauge_slider_pane_t4

0x0003,

0xf810,	// (0x0002e8f7) form_midp_gauge_slider_pane_t

0x5716,	// (0x000247fd) form_midp_slider_pane

0x37b5,	// (0x0002289c) bg_input_focus_pane_cp041_ParamLimits

0x37b5,	// (0x0002289c) bg_input_focus_pane_cp041

0x56ab,	// (0x00024792) form_midp_gauge_wait_pane_t1_ParamLimits

0x56ab,	// (0x00024792) form_midp_gauge_wait_pane_t1

0x56bd,	// (0x000247a4) form_midp_gauge_wait_pane_t2_ParamLimits

0x56bd,	// (0x000247a4) form_midp_gauge_wait_pane_t2

0x0001,

0xf80b,	// (0x0002e8f2) form_midp_gauge_wait_pane_t_ParamLimits

0xf80b,	// (0x0002e8f2) form_midp_gauge_wait_pane_t

0x56cf,	// (0x000247b6) form_midp_wait_pane_ParamLimits

0x56cf,	// (0x000247b6) form_midp_wait_pane

0x5675,	// (0x0002475c) form_midp_image_pane_g1

0x567e,	// (0x00024765) form_midp_image_pane_t1

0x568d,	// (0x00024774) form_midp_image_pane_t2

0x569c,	// (0x00024783) form_midp_image_pane_t3

0x0002,

0xf804,	// (0x0002e8eb) form_midp_image_pane_t

0x566c,	// (0x00024753) list_single_midp_pane_g1

0x0a13,	// (0x0001fafa) list_single_midp_pane_t1

0xdba3,	// (0x0002cc8a) list_midp_form_item_pane_ParamLimits

0xdba3,	// (0x0002cc8a) list_midp_form_item_pane

0x4d3d,	// (0x00023e24) list_midp_form_item_pane_t1

0x4d4c,	// (0x00023e33) midp_ticker_pane_g1

0x4d58,	// (0x00023e3f) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0002e83f) midp_ticker_pane_g

0x4d64,	// (0x00023e4b) midp_ticker_pane_t1

0x6a33,	// (0x00025b1a) midp_editing_number_pane_t1

0x6a11,	// (0x00025af8) midp_editing_number_pane

0x6a20,	// (0x00025b07) midp_ticker_pane

0x67e0,	// (0x000258c7) ai_message_heading_pane

0x36d5,	// (0x000227bc) bg_popup_window_pane_cp14

0x67e8,	// (0x000258cf) listscroll_ai_message_pane

0x676a,	// (0x00025851) ai_message_heading_pane_g1_ParamLimits

0x676a,	// (0x00025851) ai_message_heading_pane_g1

0x6776,	// (0x0002585d) ai_message_heading_pane_g2_ParamLimits

0x6776,	// (0x0002585d) ai_message_heading_pane_g2

0x6782,	// (0x00025869) ai_message_heading_pane_g3_ParamLimits

0x6782,	// (0x00025869) ai_message_heading_pane_g3

0x678e,	// (0x00025875) ai_message_heading_pane_g4_ParamLimits

0x678e,	// (0x00025875) ai_message_heading_pane_g4

0x0003,

0xf945,	// (0x0002ea2c) ai_message_heading_pane_g_ParamLimits

0xf945,	// (0x0002ea2c) ai_message_heading_pane_g

0x679a,	// (0x00025881) ai_message_heading_pane_t1_ParamLimits

0x679a,	// (0x00025881) ai_message_heading_pane_t1

0x67b4,	// (0x0002589b) ai_message_heading_pane_t2_ParamLimits

0x67b4,	// (0x0002589b) ai_message_heading_pane_t2

0x0001,

0xf94e,	// (0x0002ea35) ai_message_heading_pane_t_ParamLimits

0xf94e,	// (0x0002ea35) ai_message_heading_pane_t

0x67c6,	// (0x000258ad) bg_popup_heading_pane_cp1_ParamLimits

0x67c6,	// (0x000258ad) bg_popup_heading_pane_cp1

0x6758,	// (0x0002583f) list_ai_message_pane_ParamLimits

0x6758,	// (0x0002583f) list_ai_message_pane

0x417d,	// (0x00023264) scroll_pane_cp10

0x66f4,	// (0x000257db) list_ai_message_pane_g1

0x66fc,	// (0x000257e3) list_ai_message_pane_g2

0x0001,

0xf922,	// (0x0002ea09) list_ai_message_pane_g

0x6704,	// (0x000257eb) list_ai_message_pane_t1_ParamLimits

0x6704,	// (0x000257eb) list_ai_message_pane_t1

0x6719,	// (0x00025800) list_ai_message_pane_t2_ParamLimits

0x6719,	// (0x00025800) list_ai_message_pane_t2

0x672e,	// (0x00025815) list_ai_message_pane_t3_ParamLimits

0x672e,	// (0x00025815) list_ai_message_pane_t3

0x6743,	// (0x0002582a) list_ai_message_pane_t4_ParamLimits

0x6743,	// (0x0002582a) list_ai_message_pane_t4

0x0003,

0xf927,	// (0x0002ea0e) list_ai_message_pane_t_ParamLimits

0xf927,	// (0x0002ea0e) list_ai_message_pane_t

0xdd4a,	// (0x0002ce31) cell_ai_soft_ind_pane_ParamLimits

0xdd4a,	// (0x0002ce31) cell_ai_soft_ind_pane

0x4d76,	// (0x00023e5d) cell_ai_soft_ind_pane_g1_ParamLimits

0x4d76,	// (0x00023e5d) cell_ai_soft_ind_pane_g1

0x36d5,	// (0x000227bc) grid_highlight_cp1

0x4d83,	// (0x00023e6a) text_secondary_cp56_ParamLimits

0x4d83,	// (0x00023e6a) text_secondary_cp56

0x66b3,	// (0x0002579a) example_general_pane_ParamLimits

0x66b3,	// (0x0002579a) example_general_pane

0x66bf,	// (0x000257a6) example_parent_pane_g1_ParamLimits

0x66bf,	// (0x000257a6) example_parent_pane_g1

0x66cb,	// (0x000257b2) example_parent_pane_t1_ParamLimits

0x66cb,	// (0x000257b2) example_parent_pane_t1

0xc58d,	// (0x0002b674) popup_preview_text_window_ParamLimits

0xc58d,	// (0x0002b674) popup_preview_text_window

0x4bb4,	// (0x00023c9b) list_single_pane_cp2_g4

0x3ada,	// (0x00022bc1) bg_popup_preview_window_pane_ParamLimits

0x3ada,	// (0x00022bc1) bg_popup_preview_window_pane

0x6400,	// (0x000254e7) popup_preview_text_window_t1_ParamLimits

0x6400,	// (0x000254e7) popup_preview_text_window_t1

0x641e,	// (0x00025505) popup_preview_text_window_t2_ParamLimits

0x641e,	// (0x00025505) popup_preview_text_window_t2

0x6467,	// (0x0002554e) popup_preview_text_window_t3_ParamLimits

0x6467,	// (0x0002554e) popup_preview_text_window_t3

0x64ac,	// (0x00025593) popup_preview_text_window_t4_ParamLimits

0x64ac,	// (0x00025593) popup_preview_text_window_t4

0x0004,

0xf8f6,	// (0x0002e9dd) popup_preview_text_window_t_ParamLimits

0xf8f6,	// (0x0002e9dd) popup_preview_text_window_t

0x652a,	// (0x00025611) scroll_pane_cp11

0x54af,	// (0x00024596) bg_popup_preview_window_pane_g1

0x63c0,	// (0x000254a7) bg_popup_preview_window_pane_g2

0x63c8,	// (0x000254af) bg_popup_preview_window_pane_g3

0x63d0,	// (0x000254b7) bg_popup_preview_window_pane_g4

0x63d8,	// (0x000254bf) bg_popup_preview_window_pane_g5

0x63e0,	// (0x000254c7) bg_popup_preview_window_pane_g6

0x63e8,	// (0x000254cf) bg_popup_preview_window_pane_g7

0x63f0,	// (0x000254d7) bg_popup_preview_window_pane_g8

0x12d9,	// (0x000203c0) aid_popup_width_pane

0xc509,	// (0x0002b5f0) popup_midp_note_alarm_window_ParamLimits

0xc509,	// (0x0002b5f0) popup_midp_note_alarm_window

0x4003,	// (0x000230ea) data_form_pane_ParamLimits

0xba2b,	// (0x0002ab12) form_field_data_pane_g1

0xba35,	// (0x0002ab1c) form_field_data_pane_t1_ParamLimits

0x400f,	// (0x000230f6) input_focus_pane_ParamLimits

0x06dd,	// (0x0001f7c4) data_form_wide_pane_ParamLimits

0x06ee,	// (0x0001f7d5) form_field_data_wide_pane_g1

0x06fa,	// (0x0001f7e1) form_field_data_wide_pane_t1_ParamLimits

0x3d80,	// (0x00022e67) input_focus_pane_cp6_ParamLimits

0xd37c,	// (0x0002c463) input_popup_find_pane_g1_ParamLimits

0xd37c,	// (0x0002c463) input_popup_find_pane_g1

0x183f,	// (0x00020926) aid_navi_side_left_pane

0x1854,	// (0x0002093b) aid_navi_side_right_pane

0x5dd9,	// (0x00024ec0) bg_popup_window_pane_cp30_ParamLimits

0x5dd9,	// (0x00024ec0) bg_popup_window_pane_cp30

0x5e53,	// (0x00024f3a) popup_midp_note_alarm_window_g1_ParamLimits

0x5e53,	// (0x00024f3a) popup_midp_note_alarm_window_g1

0x5e83,	// (0x00024f6a) popup_midp_note_alarm_window_t1_ParamLimits

0x5e83,	// (0x00024f6a) popup_midp_note_alarm_window_t1

0x5f24,	// (0x0002500b) popup_midp_note_alarm_window_t2_ParamLimits

0x5f24,	// (0x0002500b) popup_midp_note_alarm_window_t2

0x5fd2,	// (0x000250b9) popup_midp_note_alarm_window_t3_ParamLimits

0x5fd2,	// (0x000250b9) popup_midp_note_alarm_window_t3

0x6004,	// (0x000250eb) popup_midp_note_alarm_window_t4_ParamLimits

0x6004,	// (0x000250eb) popup_midp_note_alarm_window_t4

0x602a,	// (0x00025111) popup_midp_note_alarm_window_t5_ParamLimits

0x602a,	// (0x00025111) popup_midp_note_alarm_window_t5

0x000a,

0xf893,	// (0x0002e97a) popup_midp_note_alarm_window_t_ParamLimits

0xf893,	// (0x0002e97a) popup_midp_note_alarm_window_t

0x60d6,	// (0x000251bd) wait_bar_pane_cp1_ParamLimits

0x60d6,	// (0x000251bd) wait_bar_pane_cp1

0x36d5,	// (0x000227bc) wait_anim_pane_copy1

0x36d5,	// (0x000227bc) wait_border_pane_copy1

0x5ab7,	// (0x00024b9e) wait_border_pane_g1_copy1

0x0714,	// (0x0001f7fb) form_field_popup_pane_g1

0xba4f,	// (0x0002ab36) form_field_popup_pane_t1_ParamLimits

0x400f,	// (0x000230f6) input_focus_pane_cp7_ParamLimits

0x403d,	// (0x00023124) list_form_pane_ParamLimits

0x0736,	// (0x0001f81d) form_field_popup_wide_pane_g1

0x073e,	// (0x0001f825) form_field_popup_wide_pane_t1_ParamLimits

0x400f,	// (0x000230f6) input_focus_pane_cp8_ParamLimits

0x4049,	// (0x00023130) list_form_wide_pane_ParamLimits

0x6b5c,	// (0x00025c43) aid_size_cell_graphic_pane

0xbace,	// (0x0002abb5) data_form_pane_t1_ParamLimits

0xbc05,	// (0x0002acec) data_form_wide_pane_t1_ParamLimits

0xd7fc,	// (0x0002c8e3) bg_status_flat_pane

0xd040,	// (0x0002c127) title_pane_t1_ParamLimits

0x377d,	// (0x00022864) title_pane_t2_ParamLimits

0x37a3,	// (0x0002288a) title_pane_t3_ParamLimits

0xf557,	// (0x0002e63e) title_pane_t_ParamLimits

0x45f4,	// (0x000236db) level_1_signal_ParamLimits

0x4601,	// (0x000236e8) level_2_signal_ParamLimits

0x460e,	// (0x000236f5) level_3_signal_ParamLimits

0x461b,	// (0x00023702) level_4_signal_ParamLimits

0x4628,	// (0x0002370f) level_5_signal_ParamLimits

0x4635,	// (0x0002371c) level_6_signal_ParamLimits

0x4642,	// (0x00023729) level_7_signal_ParamLimits

0x45f4,	// (0x000236db) level_1_battery_ParamLimits

0x4601,	// (0x000236e8) level_2_battery_ParamLimits

0x460e,	// (0x000236f5) level_3_battery_ParamLimits

0x461b,	// (0x00023702) level_4_battery_ParamLimits

0x4628,	// (0x0002370f) level_5_battery_ParamLimits

0x4635,	// (0x0002371c) level_6_battery_ParamLimits

0x4642,	// (0x00023729) level_7_battery_ParamLimits

0x5cde,	// (0x00024dc5) bg_status_flat_pane_g1

0x5ce6,	// (0x00024dcd) bg_status_flat_pane_g2

0x5cee,	// (0x00024dd5) bg_status_flat_pane_g3

0x5cf6,	// (0x00024ddd) bg_status_flat_pane_g4

0x5cfe,	// (0x00024de5) bg_status_flat_pane_g5

0x5d06,	// (0x00024ded) bg_status_flat_pane_g6

0x5d0e,	// (0x00024df5) bg_status_flat_pane_g7

0xd0cc,	// (0x0002c1b3) tabs_3_active_pane_t1_ParamLimits

0xd0cc,	// (0x0002c1b3) tabs_3_passive_pane_t1_ParamLimits

0xd0de,	// (0x0002c1c5) tabs_4_active_pane_t1_ParamLimits

0xd0de,	// (0x0002c1c5) tabs_4_1_passive_pane_t1_ParamLimits

0xd392,	// (0x0002c479) tabs_2_active_pane_t1_ParamLimits

0xd392,	// (0x0002c479) tabs_2_passive_pane_t1_ParamLimits

0x37b5,	// (0x0002289c) bg_active_tab_pane_cp4_ParamLimits

0xd3a4,	// (0x0002c48b) tabs_2_long_active_pane_t1_ParamLimits

0x4fb1,	// (0x00024098) bg_passive_tab_pane_cp4_ParamLimits

0x2335,	// (0x0002141c) list_single_midp_graphic_pane_t1_ParamLimits

0x37b5,	// (0x0002289c) bg_active_tab_pane_cp5_ParamLimits

0xd3b7,	// (0x0002c49e) tabs_3_long_active_pane_t1_ParamLimits

0x4fb1,	// (0x00024098) bg_passive_tab_pane_cp5_ParamLimits

0x2335,	// (0x0002141c) list_single_midp_graphic_pane_t1

0xd7fc,	// (0x0002c8e3) bg_status_flat_pane_ParamLimits

0x5147,	// (0x0002422e) indicator_pane_cp2_ParamLimits

0x5147,	// (0x0002422e) indicator_pane_cp2

0xd97a,	// (0x0002ca61) navi_pane_srt_ParamLimits

0xd97a,	// (0x0002ca61) navi_pane_srt

0x5296,	// (0x0002437d) popup_clock_digital_analogue_window_cp1

0x3892,	// (0x00022979) indicator_pane_t1

0x4c77,	// (0x00023d5e) copy_highlight_pane

0x4c77,	// (0x00023d5e) cursor_graphics_pane

0x4c77,	// (0x00023d5e) graphic_within_text_pane

0x4c77,	// (0x00023d5e) link_highlight_pane

0x64ed,	// (0x000255d4) popup_preview_text_window_t5_ParamLimits

0x64ed,	// (0x000255d4) popup_preview_text_window_t5

0x4d9d,	// (0x00023e84) cursor_digital_pane

0x4d9d,	// (0x00023e84) cursor_primary_pane

0x4dae,	// (0x00023e95) cursor_primary_small_pane

0x4db6,	// (0x00023e9d) cursor_secondary_pane

0x4dbe,	// (0x00023ea5) cursor_title_pane

0x4d9d,	// (0x00023e84) link_highlight_digital_pane

0x4da5,	// (0x00023e8c) link_highlight_primary_pane

0x4dae,	// (0x00023e95) link_highlight_primary_small_pane

0x4db6,	// (0x00023e9d) link_highlight_secondary_pane

0x4dbe,	// (0x00023ea5) link_highlight_title_pane

0x4d9d,	// (0x00023e84) copy_highlight_digital_pane

0x4d9d,	// (0x00023e84) copy_highlight_primary_pane

0x4dae,	// (0x00023e95) copy_highlight_primary_small_pane

0x4db6,	// (0x00023e9d) copy_highlight_secondary_pane

0x4dbe,	// (0x00023ea5) copy_highlight_title_pane

0x4db6,	// (0x00023e9d) graphic_text_digital_pane

0x5d7c,	// (0x00024e63) graphic_text_primary_pane

0x5d85,	// (0x00024e6c) graphic_text_primary_small_pane

0x4dae,	// (0x00023e95) graphic_text_secondary_pane

0x4d9d,	// (0x00023e84) graphic_text_title_pane

0xd640,	// (0x0002c727) cursor_primary_pane_g1

0x5d6e,	// (0x00024e55) cursor_text_primary_t1

0xdc3c,	// (0x0002cd23) cursor_primary_small_pane_g1

0x5d60,	// (0x00024e47) cursor_text_primary_small_t1

0xdc32,	// (0x0002cd19) cursor_primary_small_pane_g1_copy1

0x5d48,	// (0x00024e2f) cursor_text_primary_small_t1_copy1

0x5d26,	// (0x00024e0d) cursor_text_title_t1

0xdc28,	// (0x0002cd0f) cursor_title_pane_g1

0xd640,	// (0x0002c727) cursor_digital_pane_g1

0x4dd0,	// (0x00023eb7) cursor_text_digital_t1

0x5cc7,	// (0x00024dae) link_highlight_primary_pane_g1

0x5ccf,	// (0x00024db6) link_highlight_primary_pane_t1

0x4dde,	// (0x00023ec5) link_highlight_primary_small_pane_g1

0x4de6,	// (0x00023ecd) link_highlight_primary_small_pane_t1

0x4dde,	// (0x00023ec5) link_highlight_secondary_pane_g1

0x4df5,	// (0x00023edc) link_highlight_secondary_pane_t1

0x5c3b,	// (0x00024d22) link_highlight_title_pane_g1

0x5c43,	// (0x00024d2a) link_highlight_title_pane_t1

0x5c24,	// (0x00024d0b) link_highlight_digital_pane_g1

0x5c2c,	// (0x00024d13) link_highlight_digital_pane_t1

0x5afc,	// (0x00024be3) copy_highlight_primary_pane_g1

0x5b04,	// (0x00024beb) copy_highlight_primary_pane_t1

0x5ad6,	// (0x00024bbd) copy_highlight_primary_small_pane_g1

0x5aed,	// (0x00024bd4) copy_highlight_primary_small_pane_t1

0x4e04,	// (0x00023eeb) copy_highlight_secondary_pane_g1

0x4e0c,	// (0x00023ef3) copy_highlight_secondary_pane_t1

0x5ad6,	// (0x00024bbd) copy_highlight_title_pane_g1

0x5ade,	// (0x00024bc5) copy_highlight_title_pane_t1

0x5afc,	// (0x00024be3) copy_highlight_digital_pane_g1

0x6d27,	// (0x00025e0e) copy_highlight_digital_pane_t1

0x6c7b,	// (0x00025d62) graphic_text_primary_pane_g1

0x6d0b,	// (0x00025df2) graphic_text_primary_pane_t1

0x6d19,	// (0x00025e00) graphic_text_primary_pane_t2

0x0001,

0xf9c2,	// (0x0002eaa9) graphic_text_primary_pane_t

0x6ce7,	// (0x00025dce) graphic_text_primary_small_pane_g1

0x6cef,	// (0x00025dd6) graphic_text_primary_small_pane_t1

0x6cfd,	// (0x00025de4) graphic_text_primary_small_pane_t2

0x0001,

0xf9bd,	// (0x0002eaa4) graphic_text_primary_small_pane_t

0x6cc3,	// (0x00025daa) graphic_text_secondary_pane_g1

0x6ccb,	// (0x00025db2) graphic_text_secondary_pane_t1

0x6cd9,	// (0x00025dc0) graphic_text_secondary_pane_t2

0x0001,

0xf9b8,	// (0x0002ea9f) graphic_text_secondary_pane_t

0x6c9f,	// (0x00025d86) graphic_text_title_pane_g1

0x6ca7,	// (0x00025d8e) graphic_text_title_pane_t1

0x6cb5,	// (0x00025d9c) graphic_text_title_pane_t2

0x0001,

0xf9b3,	// (0x0002ea9a) graphic_text_title_pane_t

0x6c7b,	// (0x00025d62) graphic_text_digital_pane_g1

0x6c83,	// (0x00025d6a) graphic_text_digital_pane_t1

0x6c91,	// (0x00025d78) graphic_text_digital_pane_t2

0x0001,

0xf9ae,	// (0x0002ea95) graphic_text_digital_pane_t

0x37b5,	// (0x0002289c) navi_icon_pane_srt_ParamLimits

0x37b5,	// (0x0002289c) navi_icon_pane_srt

0x36d5,	// (0x000227bc) navi_midp_pane_srt

0x36d5,	// (0x000227bc) navi_navi_pane_srt

0x37b5,	// (0x0002289c) navi_text_pane_srt_ParamLimits

0x37b5,	// (0x0002289c) navi_text_pane_srt

0x6c46,	// (0x00025d2d) navi_navi_icon_text_pane_srt

0x6c4e,	// (0x00025d35) navi_navi_pane_srt_g1_ParamLimits

0x6c4e,	// (0x00025d35) navi_navi_pane_srt_g1

0x6c60,	// (0x00025d47) navi_navi_pane_srt_g2_ParamLimits

0x6c60,	// (0x00025d47) navi_navi_pane_srt_g2

0x0001,

0xf9a9,	// (0x0002ea90) navi_navi_pane_srt_g_ParamLimits

0xf9a9,	// (0x0002ea90) navi_navi_pane_srt_g

0x6c72,	// (0x00025d59) navi_navi_tabs_pane_srt

0x6c46,	// (0x00025d2d) navi_navi_text_pane_srt

0x6c46,	// (0x00025d2d) navi_navi_volume_pane_srt

0x6c37,	// (0x00025d1e) navi_navi_text_pane_srt_t1

0x26a9,	// (0x00021790) navi_navi_volume_pane_srt_g1

0x26b1,	// (0x00021798) volume_small_pane_srt_ParamLimits

0x26b1,	// (0x00021798) volume_small_pane_srt

0x1b16,	// (0x00020bfd) volume_small_pane_srt_g1_ParamLimits

0x1b16,	// (0x00020bfd) volume_small_pane_srt_g1

0x1b26,	// (0x00020c0d) volume_small_pane_srt_g2_ParamLimits

0x1b26,	// (0x00020c0d) volume_small_pane_srt_g2

0x1b37,	// (0x00020c1e) volume_small_pane_srt_g3_ParamLimits

0x1b37,	// (0x00020c1e) volume_small_pane_srt_g3

0x1b48,	// (0x00020c2f) volume_small_pane_srt_g4_ParamLimits

0x1b48,	// (0x00020c2f) volume_small_pane_srt_g4

0x1b59,	// (0x00020c40) volume_small_pane_srt_g5_ParamLimits

0x1b59,	// (0x00020c40) volume_small_pane_srt_g5

0x1b6a,	// (0x00020c51) volume_small_pane_srt_g6_ParamLimits

0x1b6a,	// (0x00020c51) volume_small_pane_srt_g6

0x1b7b,	// (0x00020c62) volume_small_pane_srt_g7_ParamLimits

0x1b7b,	// (0x00020c62) volume_small_pane_srt_g7

0x1b8c,	// (0x00020c73) volume_small_pane_srt_g8_ParamLimits

0x1b8c,	// (0x00020c73) volume_small_pane_srt_g8

0x1b9d,	// (0x00020c84) volume_small_pane_srt_g9_ParamLimits

0x1b9d,	// (0x00020c84) volume_small_pane_srt_g9

0x1bae,	// (0x00020c95) volume_small_pane_srt_g10_ParamLimits

0x1bae,	// (0x00020c95) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0002e844) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0002e844) volume_small_pane_srt_g

0x3b83,	// (0x00022c6a) query_popup_data_pane_cp2

0x6c1d,	// (0x00025d04) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6c1d,	// (0x00025d04) navi_navi_icon_text_pane_srt_t1

0x5d7c,	// (0x00024e63) navi_tabs_2_long_pane_srt

0x5d7c,	// (0x00024e63) navi_tabs_2_pane_srt

0x5d7c,	// (0x00024e63) navi_tabs_3_long_pane_srt

0x5d7c,	// (0x00024e63) navi_tabs_3_pane_srt

0x5d7c,	// (0x00024e63) navi_tabs_4_pane_srt

0x2689,	// (0x00021770) tabs_2_active_pane_srt_ParamLimits

0x2689,	// (0x00021770) tabs_2_active_pane_srt

0x2699,	// (0x00021780) tabs_2_passive_pane_srt_ParamLimits

0x2699,	// (0x00021780) tabs_2_passive_pane_srt

0x5523,	// (0x0002460a) bg_passive_tab_pane_cp1_srt_ParamLimits

0x5523,	// (0x0002460a) bg_passive_tab_pane_cp1_srt

0x6be9,	// (0x00025cd0) bg_passive_tab_pane_g1_cp1_srt

0x48c8,	// (0x000239af) bg_passive_tab_pane_g2_cp1_srt

0x6bf2,	// (0x00025cd9) bg_passive_tab_pane_g3_cp1_srt

0x3a30,	// (0x00022b17) bg_active_tab_pane_cp1_srt_ParamLimits

0x3a30,	// (0x00022b17) bg_active_tab_pane_cp1_srt

0x6bfb,	// (0x00025ce2) tabs_2_active_pane_srt_g1

0xdff9,	// (0x0002d0e0) tabs_2_active_pane_srt_t1_ParamLimits

0xdff9,	// (0x0002d0e0) tabs_2_active_pane_srt_t1

0x6be9,	// (0x00025cd0) bg_active_tab_pane_g1_cp1_srt

0x48c8,	// (0x000239af) bg_active_tab_pane_g2_cp1_srt

0x6bf2,	// (0x00025cd9) bg_active_tab_pane_g3_cp1_srt

0x2656,	// (0x0002173d) tabs_3_active_pane_srt_ParamLimits

0x2656,	// (0x0002173d) tabs_3_active_pane_srt

0x2667,	// (0x0002174e) tabs_3_passive_pane_cp_srt_ParamLimits

0x2667,	// (0x0002174e) tabs_3_passive_pane_cp_srt

0x2678,	// (0x0002175f) tabs_3_passive_pane_srt_ParamLimits

0x2678,	// (0x0002175f) tabs_3_passive_pane_srt

0x5523,	// (0x0002460a) bg_passive_tab_pane_cp2_srt_ParamLimits

0x5523,	// (0x0002460a) bg_passive_tab_pane_cp2_srt

0x4e1b,	// (0x00023f02) bg_passive_tab_pane_g1_cp2_srt

0x48c8,	// (0x000239af) bg_passive_tab_pane_g2_cp2_srt

0x4e24,	// (0x00023f0b) bg_passive_tab_pane_g3_cp2_srt

0x3a30,	// (0x00022b17) bg_active_tab_pane_cp2_srt_ParamLimits

0x3a30,	// (0x00022b17) bg_active_tab_pane_cp2_srt

0x6bcf,	// (0x00025cb6) tabs_3_active_pane_srt_g1

0xdfe3,	// (0x0002d0ca) tabs_3_active_pane_srt_t1_ParamLimits

0xdfe3,	// (0x0002d0ca) tabs_3_active_pane_srt_t1

0x4e1b,	// (0x00023f02) bg_active_tab_pane_g1_cp2_srt

0x48c8,	// (0x000239af) bg_active_tab_pane_g2_cp2_srt

0x4e24,	// (0x00023f0b) bg_active_tab_pane_g3_cp2_srt

0x260e,	// (0x000216f5) tabs_4_active_pane_srt_ParamLimits

0x260e,	// (0x000216f5) tabs_4_active_pane_srt

0x2620,	// (0x00021707) tabs_4_passive_pane_cp2_srt_ParamLimits

0x2620,	// (0x00021707) tabs_4_passive_pane_cp2_srt

0x1d11,	// (0x00020df8) aid_size_cell_toolbar

0x6892,	// (0x00025979) main_idle_act_pane_ParamLimits

0x1eaa,	// (0x00020f91) popup_large_graphic_colour_window_ParamLimits

0xc813,	// (0x0002b8fa) popup_toolbar_window_ParamLimits

0xc813,	// (0x0002b8fa) popup_toolbar_window

0x6a42,	// (0x00025b29) list_single_graphic_2heading_pane_ParamLimits

0x6a42,	// (0x00025b29) list_single_graphic_2heading_pane

0x43aa,	// (0x00023491) aid_size_cell_apps_grid_lsc_pane

0x43bc,	// (0x000234a3) aid_size_cell_apps_grid_prt_pane

0x4fb1,	// (0x00024098) bg_wml_button_pane_cp1_ParamLimits

0x4fb1,	// (0x00024098) bg_wml_button_pane_cp1

0xdbd9,	// (0x0002ccc0) form_midp_field_text_pane_t1_ParamLimits

0x5523,	// (0x0002460a) input_focus_pane_cp050_ParamLimits

0x57a6,	// (0x0002488d) list_midp_form_text_pane_ParamLimits

0x5748,	// (0x0002482f) input_focus_pane_cp051_ParamLimits

0x575c,	// (0x00024843) list_midp_choice_pane_ParamLimits

0xdb6d,	// (0x0002cc54) list_single_2graphic_pane_cp3_ParamLimits

0xdb6d,	// (0x0002cc54) list_single_2graphic_pane_cp3

0xdb82,	// (0x0002cc69) list_single_midp_graphic_pane_ParamLimits

0xdb82,	// (0x0002cc69) list_single_midp_graphic_pane

0x0909,	// (0x0001f9f0) list_single_graphic_2heading_pane_g1_ParamLimits

0x0909,	// (0x0001f9f0) list_single_graphic_2heading_pane_g1

0x023f,	// (0x0001f326) list_single_graphic_2heading_pane_g4_ParamLimits

0x023f,	// (0x0001f326) list_single_graphic_2heading_pane_g4

0x024b,	// (0x0001f332) list_single_graphic_2heading_pane_g5_ParamLimits

0x024b,	// (0x0001f332) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0002e897) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0002e897) list_single_graphic_2heading_pane_g

0x0915,	// (0x0001f9fc) list_single_graphic_2heading_pane_t1_ParamLimits

0x0915,	// (0x0001f9fc) list_single_graphic_2heading_pane_t1

0x0929,	// (0x0001fa10) list_single_graphic_2heading_pane_t2_ParamLimits

0x0929,	// (0x0001fa10) list_single_graphic_2heading_pane_t2

0x0943,	// (0x0001fa2a) list_single_graphic_2heading_pane_t3_ParamLimits

0x0943,	// (0x0001fa2a) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0002e89e) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0002e89e) list_single_graphic_2heading_pane_t

0x53ed,	// (0x000244d4) bg_popup_sub_pane_cp2

0x5417,	// (0x000244fe) grid_toobar_pane

0x22ba,	// (0x000213a1) cell_toolbar_pane_ParamLimits

0x22ba,	// (0x000213a1) cell_toolbar_pane

0x5453,	// (0x0002453a) cell_toolbar_pane_g1_ParamLimits

0x5453,	// (0x0002453a) cell_toolbar_pane_g1

0x5467,	// (0x0002454e) cell_toolbar_pane_g2_ParamLimits

0x5467,	// (0x0002454e) cell_toolbar_pane_g2

0x0001,

0xf7be,	// (0x0002e8a5) cell_toolbar_pane_g_ParamLimits

0xf7be,	// (0x0002e8a5) cell_toolbar_pane_g

0x5489,	// (0x00024570) grid_highlight_pane_cp2_ParamLimits

0x5489,	// (0x00024570) grid_highlight_pane_cp2

0x54a3,	// (0x0002458a) toolbar_button_pane

0x54af,	// (0x00024596) toolbar_button_pane_g1

0x54b7,	// (0x0002459e) toolbar_button_pane_g2

0x54bf,	// (0x000245a6) toolbar_button_pane_g3

0x54c7,	// (0x000245ae) toolbar_button_pane_g4

0x54cf,	// (0x000245b6) toolbar_button_pane_g5

0x54d7,	// (0x000245be) toolbar_button_pane_g6

0x54df,	// (0x000245c6) toolbar_button_pane_g7

0x54e7,	// (0x000245ce) toolbar_button_pane_g8

0x54ef,	// (0x000245d6) toolbar_button_pane_g9

0x0009,

0xf7c3,	// (0x0002e8aa) toolbar_button_pane_g

0x22f2,	// (0x000213d9) list_single_2graphic_pane_g1_cp3_ParamLimits

0x22f2,	// (0x000213d9) list_single_2graphic_pane_g1_cp3

0xc86b,	// (0x0002b952) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc86b,	// (0x0002b952) list_single_2graphic_pane_g2_cp3

0x4ab3,	// (0x00023b9a) list_single_2graphic_pane_g3_cp3

0x230f,	// (0x000213f6) list_single_2graphic_pane_g4_cp3_ParamLimits

0x230f,	// (0x000213f6) list_single_2graphic_pane_g4_cp3

0x231b,	// (0x00021402) list_single_2graphic_pane_t1_cp3_ParamLimits

0x231b,	// (0x00021402) list_single_2graphic_pane_t1_cp3

0x4aa7,	// (0x00023b8e) list_single_midp_graphic_pane_g2_ParamLimits

0x4aa7,	// (0x00023b8e) list_single_midp_graphic_pane_g2

0x1d19,	// (0x00020e00) aid_zoom_text_primary

0x08dd,	// (0x0001f9c4) aid_zoom_text_secondary

0xd698,	// (0x0002c77f) status_small_pane_g7_ParamLimits

0xd698,	// (0x0002c77f) status_small_pane_g7

0xd6bb,	// (0x0002c7a2) status_small_pane_t1_ParamLimits

0xd01c,	// (0x0002c103) title_pane_g2

0x0003,

0xf54e,	// (0x0002e635) title_pane_g

0xd294,	// (0x0002c37b) aid_size_cell_colour_1_pane_ParamLimits

0xd294,	// (0x0002c37b) aid_size_cell_colour_1_pane

0xd2a8,	// (0x0002c38f) aid_size_cell_colour_2_pane_ParamLimits

0xd2a8,	// (0x0002c38f) aid_size_cell_colour_2_pane

0xd2bc,	// (0x0002c3a3) aid_size_cell_colour_3_pane_ParamLimits

0xd2bc,	// (0x0002c3a3) aid_size_cell_colour_3_pane

0xd2d0,	// (0x0002c3b7) aid_size_cell_colour_4_pane_ParamLimits

0xd2d0,	// (0x0002c3b7) aid_size_cell_colour_4_pane

0x177b,	// (0x00020862) title_pane_stacon_g1_ParamLimits

0x177b,	// (0x00020862) title_pane_stacon_g1

0x5b5b,	// (0x00024c42) popup_note_wait_window_g3_ParamLimits

0x5b5b,	// (0x00024c42) popup_note_wait_window_g3

0x5bd1,	// (0x00024cb8) popup_note_wait_window_t5_ParamLimits

0x5bd1,	// (0x00024cb8) popup_note_wait_window_t5

0x36d5,	// (0x000227bc) main_feb_china_hwr_fs_writing_pane

0xc22f,	// (0x0002b316) popup_feb_china_hwr_fs_window_ParamLimits

0xc22f,	// (0x0002b316) popup_feb_china_hwr_fs_window

0xc87c,	// (0x0002b963) aid_size_cell_hwr_fs_ParamLimits

0xc87c,	// (0x0002b963) aid_size_cell_hwr_fs

0x5523,	// (0x0002460a) bg_popup_sub_pane_cp3_ParamLimits

0x5523,	// (0x0002460a) bg_popup_sub_pane_cp3

0xc891,	// (0x0002b978) grid_hwr_fs_pane_ParamLimits

0xc891,	// (0x0002b978) grid_hwr_fs_pane

0x2378,	// (0x0002145f) linegrid_hwr_fs_pane_ParamLimits

0x2378,	// (0x0002145f) linegrid_hwr_fs_pane

0xc8a9,	// (0x0002b990) cell_hwr_fs_pane_ParamLimits

0xc8a9,	// (0x0002b990) cell_hwr_fs_pane

0x552f,	// (0x00024616) linegrid_hwr_fs_pane_g1_ParamLimits

0x552f,	// (0x00024616) linegrid_hwr_fs_pane_g1

0xdb41,	// (0x0002cc28) linegrid_hwr_fs_pane_g2_ParamLimits

0xdb41,	// (0x0002cc28) linegrid_hwr_fs_pane_g2

0x554d,	// (0x00024634) linegrid_hwr_fs_pane_g3_ParamLimits

0x554d,	// (0x00024634) linegrid_hwr_fs_pane_g3

0x23aa,	// (0x00021491) linegrid_hwr_fs_pane_g4_ParamLimits

0x23aa,	// (0x00021491) linegrid_hwr_fs_pane_g4

0x23c4,	// (0x000214ab) linegrid_hwr_fs_pane_g5_ParamLimits

0x23c4,	// (0x000214ab) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e9,	// (0x0002e8d0) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e9,	// (0x0002e8d0) linegrid_hwr_fs_pane_g

0x5559,	// (0x00024640) cell_hwr_fs_pane_g1_ParamLimits

0x5559,	// (0x00024640) cell_hwr_fs_pane_g1

0x5324,	// (0x0002440b) cell_hwr_fs_pane_g2_ParamLimits

0x5324,	// (0x0002440b) cell_hwr_fs_pane_g2

0xdb53,	// (0x0002cc3a) cell_hwr_fs_pane_g3_ParamLimits

0xdb53,	// (0x0002cc3a) cell_hwr_fs_pane_g3

0xdb60,	// (0x0002cc47) cell_hwr_fs_pane_g4_ParamLimits

0xdb60,	// (0x0002cc47) cell_hwr_fs_pane_g4

0x0003,

0xf7f4,	// (0x0002e8db) cell_hwr_fs_pane_g_ParamLimits

0xf7f4,	// (0x0002e8db) cell_hwr_fs_pane_g

0xc8cf,	// (0x0002b9b6) cell_hwr_fs_pane_t1

0x36d5,	// (0x000227bc) grid_highlight_pane_cp6

0x36d5,	// (0x000227bc) main_idle_act2_pane

0x4164,	// (0x0002324b) aid_inside_area_popup_secondary

0xdc4e,	// (0x0002cd35) aid_inside_area_window_primary_ParamLimits

0xdc4e,	// (0x0002cd35) aid_inside_area_window_primary

0x6d36,	// (0x00025e1d) ai2_news_ticker_pane

0x6d3e,	// (0x00025e25) aid_size_cell_ai1_link_ParamLimits

0x6d3e,	// (0x00025e25) aid_size_cell_ai1_link

0x6d58,	// (0x00025e3f) popup_ai2_data_window_ParamLimits

0x6d58,	// (0x00025e3f) popup_ai2_data_window

0x6d6c,	// (0x00025e53) popup_ai2_link_window_ParamLimits

0x6d6c,	// (0x00025e53) popup_ai2_link_window

0x5523,	// (0x0002460a) bg_popup_sub_pane_cp4_ParamLimits

0x5523,	// (0x0002460a) bg_popup_sub_pane_cp4

0x6d80,	// (0x00025e67) grid_ai2_link_pane_ParamLimits

0x6d80,	// (0x00025e67) grid_ai2_link_pane

0x6d97,	// (0x00025e7e) popup_ai2_link_window_g1_ParamLimits

0x6d97,	// (0x00025e7e) popup_ai2_link_window_g1

0x6da3,	// (0x00025e8a) popup_ai2_link_window_g2_ParamLimits

0x6da3,	// (0x00025e8a) popup_ai2_link_window_g2

0x0001,

0xf9c7,	// (0x0002eaae) popup_ai2_link_window_g_ParamLimits

0xf9c7,	// (0x0002eaae) popup_ai2_link_window_g

0x6db2,	// (0x00025e99) ai2_mp_button_pane

0x6dba,	// (0x00025ea1) ai2_mp_volume_pane

0x5748,	// (0x0002482f) bg_popup_sub_pane_cp5_ParamLimits

0x5748,	// (0x0002482f) bg_popup_sub_pane_cp5

0x6dc2,	// (0x00025ea9) heading_ai2_gene_pane_ParamLimits

0x6dc2,	// (0x00025ea9) heading_ai2_gene_pane

0x6dce,	// (0x00025eb5) list_ai2_gene_pane_ParamLimits

0x6dce,	// (0x00025eb5) list_ai2_gene_pane

0x6e16,	// (0x00025efd) cell_ai2_link_pane_ParamLimits

0x6e16,	// (0x00025efd) cell_ai2_link_pane

0x6e2c,	// (0x00025f13) cell_ai2_link_pane_g1

0x36d5,	// (0x000227bc) grid_highlight_pane_cp7

0x26c6,	// (0x000217ad) ai2_mp_volume_pane_g1

0x6efd,	// (0x00025fe4) ai2_mp_volume_pane_g2

0x6e72,	// (0x00025f59) list_ai2_gene_pane_t1

0x6f05,	// (0x00025fec) ai2_mp_volume_pane_g3

0x0002,

0xf9e0,	// (0x0002eac7) ai2_mp_volume_pane_g

0x26ce,	// (0x000217b5) volume_small_pane_cp3

0x6f0d,	// (0x00025ff4) aid_size_cell_ai2_button

0x6f15,	// (0x00025ffc) grid_ai2_button_pane

0x6f1e,	// (0x00026005) cell_ai2_button_pane_ParamLimits

0x6f1e,	// (0x00026005) cell_ai2_button_pane

0x36cb,	// (0x000227b2) cell_ai2_button_pane_g1

0x36d5,	// (0x000227bc) grid_highlight_pane_cp8

0x6ebd,	// (0x00025fa4) ai2_gene_pane_t1_ParamLimits

0x6ebd,	// (0x00025fa4) ai2_gene_pane_t1

0xc1a1,	// (0x0002b288) aid_height_parent_landscape

0xdd99,	// (0x0002ce80) aid_height_set_list

0x6892,	// (0x00025979) aid_size_parent

0x6b5c,	// (0x00025c43) aid_size_cell_graphic_pane_ParamLimits

0x6dde,	// (0x00025ec5) popup_ai2_data_window_g1_ParamLimits

0x6dde,	// (0x00025ec5) popup_ai2_data_window_g1

0x6dea,	// (0x00025ed1) ai2_news_ticker_pane_g1

0x6df2,	// (0x00025ed9) ai2_news_ticker_pane_g2

0x0001,

0xf9cc,	// (0x0002eab3) ai2_news_ticker_pane_g

0x6dfa,	// (0x00025ee1) ai2_news_ticker_pane_t1

0x6e08,	// (0x00025eef) ai2_news_ticker_pane_t2

0x0001,

0xf9d1,	// (0x0002eab8) ai2_news_ticker_pane_t

0x6e35,	// (0x00025f1c) heading_ai2_gene_pane_g1

0x6e3d,	// (0x00025f24) heading_ai2_gene_pane_t1_ParamLimits

0x6e3d,	// (0x00025f24) heading_ai2_gene_pane_t1

0x6e52,	// (0x00025f39) list_highlight_pane_cp6

0x6e5a,	// (0x00025f41) ai2_gene_pane_ParamLimits

0x6e5a,	// (0x00025f41) ai2_gene_pane

0x6e80,	// (0x00025f67) list_ai2_gene_pane_t2

0x0001,

0xf9d6,	// (0x0002eabd) list_ai2_gene_pane_t

0x6e8e,	// (0x00025f75) list_highlight_pane_cp8_ParamLimits

0x6e8e,	// (0x00025f75) list_highlight_pane_cp8

0x6e9f,	// (0x00025f86) ai2_gene_pane_g1_ParamLimits

0x6e9f,	// (0x00025f86) ai2_gene_pane_g1

0x6eb1,	// (0x00025f98) ai2_gene_pane_g2_ParamLimits

0x6eb1,	// (0x00025f98) ai2_gene_pane_g2

0x0001,

0xf9db,	// (0x0002eac2) ai2_gene_pane_g_ParamLimits

0xf9db,	// (0x0002eac2) ai2_gene_pane_g

0x3fa5,	// (0x0002308c) scroll_pane_cp12

0xc160,	// (0x0002b247) control_pane_t3_ParamLimits

0xc160,	// (0x0002b247) control_pane_t3

0xd6ac,	// (0x0002c793) status_small_pane_g8_ParamLimits

0xd6ac,	// (0x0002c793) status_small_pane_g8

0xc2c2,	// (0x0002b3a9) popup_find_window_ParamLimits

0xc543,	// (0x0002b62a) popup_note_image_window_ParamLimits

0x0909,	// (0x0001f9f0) list_double2_graphic_pane_vc_g1_ParamLimits

0x0909,	// (0x0001f9f0) list_double2_graphic_pane_vc_g1

0x023f,	// (0x0001f326) list_double2_graphic_pane_vc_g2_ParamLimits

0x023f,	// (0x0001f326) list_double2_graphic_pane_vc_g2

0x024b,	// (0x0001f332) list_double2_graphic_pane_vc_g3_ParamLimits

0x024b,	// (0x0001f332) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b0,	// (0x0002e897) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002e897) list_double2_graphic_pane_vc_g

0x095b,	// (0x0001fa42) list_double2_graphic_pane_vc_t1_ParamLimits

0x095b,	// (0x0001fa42) list_double2_graphic_pane_vc_t1

0x023f,	// (0x0001f326) list_single_heading_pane_vc_g1_ParamLimits

0x023f,	// (0x0001f326) list_single_heading_pane_vc_g1

0x024b,	// (0x0001f332) list_single_heading_pane_vc_g2_ParamLimits

0x024b,	// (0x0001f332) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e6af) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e6af) list_single_heading_pane_vc_g

0x0971,	// (0x0001fa58) list_single_heading_pane_vc_t1_ParamLimits

0x0971,	// (0x0001fa58) list_single_heading_pane_vc_t1

0x0987,	// (0x0001fa6e) list_single_heading_pane_vc_t2_ParamLimits

0x0987,	// (0x0001fa6e) list_single_heading_pane_vc_t2

0x0001,

0xf7d8,	// (0x0002e8bf) list_single_heading_pane_vc_t_ParamLimits

0xf7d8,	// (0x0002e8bf) list_single_heading_pane_vc_t

0x09a3,	// (0x0001fa8a) list_setting_number_pane_vc_g1_ParamLimits

0x09a3,	// (0x0001fa8a) list_setting_number_pane_vc_g1

0x09af,	// (0x0001fa96) list_setting_number_pane_vc_g2_ParamLimits

0x09af,	// (0x0001fa96) list_setting_number_pane_vc_g2

0x0001,

0xf7dd,	// (0x0002e8c4) list_setting_number_pane_vc_g_ParamLimits

0xf7dd,	// (0x0002e8c4) list_setting_number_pane_vc_g

0x09bb,	// (0x0001faa2) list_setting_number_pane_vc_t1_ParamLimits

0x09bb,	// (0x0001faa2) list_setting_number_pane_vc_t1

0x09cf,	// (0x0001fab6) list_setting_number_pane_vc_t2_ParamLimits

0x09cf,	// (0x0001fab6) list_setting_number_pane_vc_t2

0x09e9,	// (0x0001fad0) list_setting_number_pane_vc_t3_ParamLimits

0x09e9,	// (0x0001fad0) list_setting_number_pane_vc_t3

0x0002,

0xf7e2,	// (0x0002e8c9) list_setting_number_pane_vc_t_ParamLimits

0xf7e2,	// (0x0002e8c9) list_setting_number_pane_vc_t

0x0a03,	// (0x0001faea) set_value_pane_vc_ParamLimits

0x0a03,	// (0x0001faea) set_value_pane_vc

0x6a42,	// (0x00025b29) list_double2_graphic_pane_vc_ParamLimits

0x6a42,	// (0x00025b29) list_double2_graphic_pane_vc

0x6a42,	// (0x00025b29) list_double2_large_graphic_pane_vc_ParamLimits

0x6a42,	// (0x00025b29) list_double2_large_graphic_pane_vc

0x6a42,	// (0x00025b29) list_double2_pane_vc_ParamLimits

0x6a42,	// (0x00025b29) list_double2_pane_vc

0x6a42,	// (0x00025b29) list_double_graphic_heading_pane_vc_ParamLimits

0x6a42,	// (0x00025b29) list_double_graphic_heading_pane_vc

0x6a42,	// (0x00025b29) list_double_graphic_pane_vc_ParamLimits

0x6a42,	// (0x00025b29) list_double_graphic_pane_vc

0x6a42,	// (0x00025b29) list_double_heading_pane_vc_ParamLimits

0x6a42,	// (0x00025b29) list_double_heading_pane_vc

0x0ae7,	// (0x0001fbce) list_double_large_graphic_pane_vc_ParamLimits

0x0ae7,	// (0x0001fbce) list_double_large_graphic_pane_vc

0x6a42,	// (0x00025b29) list_double_number_pane_vc_ParamLimits

0x6a42,	// (0x00025b29) list_double_number_pane_vc

0x6a42,	// (0x00025b29) list_double_pane_vc_ParamLimits

0x6a42,	// (0x00025b29) list_double_pane_vc

0x6a42,	// (0x00025b29) list_double_time_pane_vc_ParamLimits

0x6a42,	// (0x00025b29) list_double_time_pane_vc

0x6a42,	// (0x00025b29) list_setting_number_pane_vc_ParamLimits

0x6a42,	// (0x00025b29) list_setting_number_pane_vc

0x6a42,	// (0x00025b29) list_setting_pane_vc_ParamLimits

0x6a42,	// (0x00025b29) list_setting_pane_vc

0x6a42,	// (0x00025b29) list_single_graphic_heading_pane_vc_ParamLimits

0x6a42,	// (0x00025b29) list_single_graphic_heading_pane_vc

0x6a42,	// (0x00025b29) list_single_heading_pane_vc_ParamLimits

0x6a42,	// (0x00025b29) list_single_heading_pane_vc

0x6a42,	// (0x00025b29) list_single_number_heading_pane_vc_ParamLimits

0x6a42,	// (0x00025b29) list_single_number_heading_pane_vc

0x0bd9,	// (0x0001fcc0) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0bd9,	// (0x0001fcc0) list_double_graphic_heading_pane_vc_g1

0x023f,	// (0x0001f326) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x023f,	// (0x0001f326) list_double_graphic_heading_pane_vc_g2

0x024b,	// (0x0001f332) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x024b,	// (0x0001f332) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e7,	// (0x0002eace) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e7,	// (0x0002eace) list_double_graphic_heading_pane_vc_g

0x0be5,	// (0x0001fccc) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0be5,	// (0x0001fccc) list_double_graphic_heading_pane_vc_t1

0x0c01,	// (0x0001fce8) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0c01,	// (0x0001fce8) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ee,	// (0x0002ead5) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ee,	// (0x0002ead5) list_double_graphic_heading_pane_vc_t

0x09a3,	// (0x0001fa8a) list_setting_pane_vc_g1_ParamLimits

0x09a3,	// (0x0001fa8a) list_setting_pane_vc_g1

0x09af,	// (0x0001fa96) list_setting_pane_vc_g2_ParamLimits

0x09af,	// (0x0001fa96) list_setting_pane_vc_g2

0x0001,

0xf7dd,	// (0x0002e8c4) list_setting_pane_vc_g_ParamLimits

0xf7dd,	// (0x0002e8c4) list_setting_pane_vc_g

0x0c19,	// (0x0001fd00) list_setting_pane_vc_t1_ParamLimits

0x0c19,	// (0x0001fd00) list_setting_pane_vc_t1

0x0c33,	// (0x0001fd1a) list_setting_pane_vc_t2_ParamLimits

0x0c33,	// (0x0001fd1a) list_setting_pane_vc_t2

0x0001,

0xfa31,	// (0x0002eb18) list_setting_pane_vc_t_ParamLimits

0xfa31,	// (0x0002eb18) list_setting_pane_vc_t

0x0a03,	// (0x0001faea) set_value_pane_cp_vc_ParamLimits

0x0a03,	// (0x0001faea) set_value_pane_cp_vc

0x023f,	// (0x0001f326) list_single_number_heading_pane_vc_g1_ParamLimits

0x023f,	// (0x0001f326) list_single_number_heading_pane_vc_g1

0x024b,	// (0x0001f332) list_single_number_heading_pane_vc_g2_ParamLimits

0x024b,	// (0x0001f332) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e6af) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e6af) list_single_number_heading_pane_vc_g

0x0971,	// (0x0001fa58) list_single_number_heading_pane_vc_t1_ParamLimits

0x0971,	// (0x0001fa58) list_single_number_heading_pane_vc_t1

0x0c4b,	// (0x0001fd32) list_single_number_heading_pane_vc_t2_ParamLimits

0x0c4b,	// (0x0001fd32) list_single_number_heading_pane_vc_t2

0x0c5f,	// (0x0001fd46) list_single_number_heading_pane_vc_t3_ParamLimits

0x0c5f,	// (0x0001fd46) list_single_number_heading_pane_vc_t3

0x0002,

0xfa36,	// (0x0002eb1d) list_single_number_heading_pane_vc_t_ParamLimits

0xfa36,	// (0x0002eb1d) list_single_number_heading_pane_vc_t

0x0909,	// (0x0001f9f0) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0909,	// (0x0001f9f0) list_single_graphic_heading_pane_vc_g1

0x023f,	// (0x0001f326) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x023f,	// (0x0001f326) list_single_graphic_heading_pane_vc_g4

0x024b,	// (0x0001f332) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x024b,	// (0x0001f332) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b0,	// (0x0002e897) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002e897) list_single_graphic_heading_pane_vc_g

0x0971,	// (0x0001fa58) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0971,	// (0x0001fa58) list_single_graphic_heading_pane_vc_t1

0x0c71,	// (0x0001fd58) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0c71,	// (0x0001fd58) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3d,	// (0x0002eb24) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x0002eb24) list_single_graphic_heading_pane_vc_t

0x023f,	// (0x0001f326) list_double2_pane_vc_g1_ParamLimits

0x023f,	// (0x0001f326) list_double2_pane_vc_g1

0x024b,	// (0x0001f332) list_double2_pane_vc_g2_ParamLimits

0x024b,	// (0x0001f332) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e6af) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e6af) list_double2_pane_vc_g

0x0c85,	// (0x0001fd6c) list_double2_pane_vc_t1_ParamLimits

0x0c85,	// (0x0001fd6c) list_double2_pane_vc_t1

0x0c9b,	// (0x0001fd82) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0c9b,	// (0x0001fd82) list_double2_large_graphic_pane_vc_g1

0x023f,	// (0x0001f326) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x023f,	// (0x0001f326) list_double2_large_graphic_pane_vc_g2

0x024b,	// (0x0001f332) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x024b,	// (0x0001f332) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0002e6cc) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0002e6cc) list_double2_large_graphic_pane_vc_g

0x0ca7,	// (0x0001fd8e) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0ca7,	// (0x0001fd8e) list_double2_large_graphic_pane_vc_t1

0x0cbd,	// (0x0001fda4) list_double_time_pane_vc_g1_ParamLimits

0x0cbd,	// (0x0001fda4) list_double_time_pane_vc_g1

0x0cc9,	// (0x0001fdb0) list_double_time_pane_vc_g2_ParamLimits

0x0cc9,	// (0x0001fdb0) list_double_time_pane_vc_g2

0x0001,

0xfa42,	// (0x0002eb29) list_double_time_pane_vc_g_ParamLimits

0xfa42,	// (0x0002eb29) list_double_time_pane_vc_g

0x0cd5,	// (0x0001fdbc) list_double_time_pane_vc_t1_ParamLimits

0x0cd5,	// (0x0001fdbc) list_double_time_pane_vc_t1

0x0cf3,	// (0x0001fdda) list_double_time_pane_vc_t2_ParamLimits

0x0cf3,	// (0x0001fdda) list_double_time_pane_vc_t2

0x0d3d,	// (0x0001fe24) list_double_time_pane_vc_t3_ParamLimits

0x0d3d,	// (0x0001fe24) list_double_time_pane_vc_t3

0x0d4f,	// (0x0001fe36) list_double_time_pane_vc_t4_ParamLimits

0x0d4f,	// (0x0001fe36) list_double_time_pane_vc_t4

0x0003,

0xfa47,	// (0x0002eb2e) list_double_time_pane_vc_t_ParamLimits

0xfa47,	// (0x0002eb2e) list_double_time_pane_vc_t

0x023f,	// (0x0001f326) list_double_pane_vc_g1_ParamLimits

0x023f,	// (0x0001f326) list_double_pane_vc_g1

0x024b,	// (0x0001f332) list_double_pane_vc_g2_ParamLimits

0x024b,	// (0x0001f332) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e6af) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e6af) list_double_pane_vc_g

0x0d63,	// (0x0001fe4a) list_double_pane_vc_t1_ParamLimits

0x0d63,	// (0x0001fe4a) list_double_pane_vc_t1

0x0d75,	// (0x0001fe5c) list_double_pane_vc_t2_ParamLimits

0x0d75,	// (0x0001fe5c) list_double_pane_vc_t2

0x0001,

0xfa50,	// (0x0002eb37) list_double_pane_vc_t_ParamLimits

0xfa50,	// (0x0002eb37) list_double_pane_vc_t

0x023f,	// (0x0001f326) list_double_number_pane_vc_g1_ParamLimits

0x023f,	// (0x0001f326) list_double_number_pane_vc_g1

0x024b,	// (0x0001f332) list_double_number_pane_vc_g2_ParamLimits

0x024b,	// (0x0001f332) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e6af) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e6af) list_double_number_pane_vc_g

0x0d8d,	// (0x0001fe74) list_double_number_pane_vc_t1_ParamLimits

0x0d8d,	// (0x0001fe74) list_double_number_pane_vc_t1

0x0d9f,	// (0x0001fe86) list_double_number_pane_vc_t2_ParamLimits

0x0d9f,	// (0x0001fe86) list_double_number_pane_vc_t2

0x0db1,	// (0x0001fe98) list_double_number_pane_vc_t3_ParamLimits

0x0db1,	// (0x0001fe98) list_double_number_pane_vc_t3

0x0002,

0xfa55,	// (0x0002eb3c) list_double_number_pane_vc_t_ParamLimits

0xfa55,	// (0x0002eb3c) list_double_number_pane_vc_t

0x0dc9,	// (0x0001feb0) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0dc9,	// (0x0001feb0) list_double_large_graphic_pane_vc_g1

0x0de5,	// (0x0001fecc) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0de5,	// (0x0001fecc) list_double_large_graphic_pane_vc_g2

0x0df9,	// (0x0001fee0) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0df9,	// (0x0001fee0) list_double_large_graphic_pane_vc_g3

0x0e08,	// (0x0001feef) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0e08,	// (0x0001feef) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5c,	// (0x0002eb43) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5c,	// (0x0002eb43) list_double_large_graphic_pane_vc_g

0x0e17,	// (0x0001fefe) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0e17,	// (0x0001fefe) list_double_large_graphic_pane_vc_t1

0x0e31,	// (0x0001ff18) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0e31,	// (0x0001ff18) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa65,	// (0x0002eb4c) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa65,	// (0x0002eb4c) list_double_large_graphic_pane_vc_t

0x023f,	// (0x0001f326) list_double_heading_pane_vc_g1_ParamLimits

0x023f,	// (0x0001f326) list_double_heading_pane_vc_g1

0x024b,	// (0x0001f332) list_double_heading_pane_vc_g2_ParamLimits

0x024b,	// (0x0001f332) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e6af) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e6af) list_double_heading_pane_vc_g

0x0e53,	// (0x0001ff3a) list_double_heading_pane_vc_t1_ParamLimits

0x0e53,	// (0x0001ff3a) list_double_heading_pane_vc_t1

0x0971,	// (0x0001fa58) list_double_heading_pane_vc_t2_ParamLimits

0x0971,	// (0x0001fa58) list_double_heading_pane_vc_t2

0x0001,

0xfa6a,	// (0x0002eb51) list_double_heading_pane_vc_t_ParamLimits

0xfa6a,	// (0x0002eb51) list_double_heading_pane_vc_t

0x0e67,	// (0x0001ff4e) list_double_graphic_pane_vc_g1_ParamLimits

0x0e67,	// (0x0001ff4e) list_double_graphic_pane_vc_g1

0x0e7a,	// (0x0001ff61) list_double_graphic_pane_vc_g2_ParamLimits

0x0e7a,	// (0x0001ff61) list_double_graphic_pane_vc_g2

0x023f,	// (0x0001f326) list_double_graphic_pane_vc_g3_ParamLimits

0x023f,	// (0x0001f326) list_double_graphic_pane_vc_g3

0x0003,

0xfa6f,	// (0x0002eb56) list_double_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x0002eb56) list_double_graphic_pane_vc_g

0x0e97,	// (0x0001ff7e) list_double_graphic_pane_vc_t1_ParamLimits

0x0e97,	// (0x0001ff7e) list_double_graphic_pane_vc_t1

0x0eb5,	// (0x0001ff9c) list_double_graphic_pane_vc_t2_ParamLimits

0x0eb5,	// (0x0001ff9c) list_double_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x0002eb5f) list_double_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x0002eb5f) list_double_graphic_pane_vc_t

0x12e5,	// (0x000203cc) aid_size_cell_fastswap

0xbe34,	// (0x0002af1b) aid_size_cell_touch_ParamLimits

0xbe34,	// (0x0002af1b) aid_size_cell_touch

0x1548,	// (0x0002062f) popup_fast_swap_wide_window_ParamLimits

0x1548,	// (0x0002062f) popup_fast_swap_wide_window

0xbfe4,	// (0x0002b0cb) touch_pane_ParamLimits

0xbfe4,	// (0x0002b0cb) touch_pane

0x3ffb,	// (0x000230e2) button_value_adjust_pane_cp2

0x060f,	// (0x0001f6f6) button_value_adjust_pane_cp4

0x062f,	// (0x0001f716) form_field_data_pane_cp2

0xb9ec,	// (0x0002aad3) form_field_data_wide_pane_cp2

0x4473,	// (0x0002355a) bg_scroll_pane_ParamLimits

0x18de,	// (0x000209c5) scroll_handle_pane_ParamLimits

0x18f2,	// (0x000209d9) scroll_sc2_down_pane_ParamLimits

0x18f2,	// (0x000209d9) scroll_sc2_down_pane

0x44a4,	// (0x0002358b) scroll_sc2_up_pane_ParamLimits

0x44a4,	// (0x0002358b) scroll_sc2_up_pane

0xe121,	// (0x0002d208) grid_wheel_folder_pane_g1_ParamLimits

0xe121,	// (0x0002d208) grid_wheel_folder_pane_g1

0x1aae,	// (0x00020b95) clock_nsta_pane_cp2_ParamLimits

0x1aae,	// (0x00020b95) clock_nsta_pane_cp2

0x4fb1,	// (0x00024098) listscroll_midp_pane_ParamLimits

0xd5a3,	// (0x0002c68a) midp_canvas_pane

0x4f63,	// (0x0002404a) nsta_clock_indic_pane

0x4f97,	// (0x0002407e) listscroll_form_pane_vc

0x4f9f,	// (0x00024086) listscroll_set_pane_vc_ParamLimits

0x4f9f,	// (0x00024086) listscroll_set_pane_vc

0xd824,	// (0x0002c90b) clock_nsta_pane

0xd84e,	// (0x0002c935) indicator_nsta_pane

0x53ed,	// (0x000244d4) bg_popup_sub_pane_cp2_ParamLimits

0x5401,	// (0x000244e8) find_pane_cp2_ParamLimits

0x5401,	// (0x000244e8) find_pane_cp2

0x5417,	// (0x000244fe) grid_toobar_pane_ParamLimits

0x54f7,	// (0x000245de) list_form_gen_pane_vc_ParamLimits

0x54f7,	// (0x000245de) list_form_gen_pane_vc

0x550d,	// (0x000245f4) scroll_pane_cp8_vc_ParamLimits

0x550d,	// (0x000245f4) scroll_pane_cp8_vc

0x5589,	// (0x00024670) data_form_wide_pane_vc_ParamLimits

0x5589,	// (0x00024670) data_form_wide_pane_vc

0x5595,	// (0x0002467c) form_field_data_wide_pane_vc_g1

0x559d,	// (0x00024684) form_field_data_wide_pane_vc_t1_ParamLimits

0x559d,	// (0x00024684) form_field_data_wide_pane_vc_t1

0x400f,	// (0x000230f6) input_focus_pane_cp6_vc_ParamLimits

0x400f,	// (0x000230f6) input_focus_pane_cp6_vc

0xdbfc,	// (0x0002cce3) list_midp_pane_ParamLimits

0x6bc3,	// (0x00025caa) scroll_pane_cp16_ParamLimits

0x6bc3,	// (0x00025caa) scroll_pane_cp16

0x5935,	// (0x00024a1c) button_value_adjust_pane_ParamLimits

0x5935,	// (0x00024a1c) button_value_adjust_pane

0xddaa,	// (0x0002ce91) button_value_adjust_pane_cp6_ParamLimits

0xddaa,	// (0x0002ce91) button_value_adjust_pane_cp6

0xdec0,	// (0x0002cfa7) settings_code_pane_cp_ParamLimits

0xdec0,	// (0x0002cfa7) settings_code_pane_cp

0x36cb,	// (0x000227b2) cell_touch_pane_g1

0x36cb,	// (0x000227b2) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0002e7ea) cell_touch_pane_g

0xe00f,	// (0x0002d0f6) cell_touch_pane_cp_ParamLimits

0xe00f,	// (0x0002d0f6) cell_touch_pane_cp

0xe02b,	// (0x0002d112) cell_touch_pane_ParamLimits

0xe02b,	// (0x0002d112) cell_touch_pane

0x36cb,	// (0x000227b2) scroll_sc2_down_pane_g1

0x36cb,	// (0x000227b2) scroll_sc2_up_pane_g1

0x36d5,	// (0x000227bc) bg_set_opt_pane_cp4_vc

0x6f51,	// (0x00026038) list_set_graphic_pane_vc_g1_ParamLimits

0x6f51,	// (0x00026038) list_set_graphic_pane_vc_g1

0x47cf,	// (0x000238b6) list_set_graphic_pane_vc_g2_ParamLimits

0x47cf,	// (0x000238b6) list_set_graphic_pane_vc_g2

0x0001,

0xf9f3,	// (0x0002eada) list_set_graphic_pane_vc_g_ParamLimits

0xf9f3,	// (0x0002eada) list_set_graphic_pane_vc_g

0x6f5d,	// (0x00026044) text_primary_small_cp13_vc_ParamLimits

0x6f5d,	// (0x00026044) text_primary_small_cp13_vc

0x6f75,	// (0x0002605c) list_set_graphic_pane_vc_ParamLimits

0x6f75,	// (0x0002605c) list_set_graphic_pane_vc

0x36d5,	// (0x000227bc) input_focus_pane_cp2_vc

0x36cb,	// (0x000227b2) setting_code_pane_vc_g1

0x3800,	// (0x000228e7) setting_code_pane_vc_t1

0x6f89,	// (0x00026070) set_text_pane_vc_t1_ParamLimits

0x6f89,	// (0x00026070) set_text_pane_vc_t1

0x36d5,	// (0x000227bc) input_focus_pane_cp1_vc

0x6fa6,	// (0x0002608d) list_set_text_pane_vc

0x36cb,	// (0x000227b2) setting_text_pane_vc_g1

0x36d5,	// (0x000227bc) bg_set_opt_pane_cp2_vc

0x37f7,	// (0x000228de) setting_slider_graphic_pane_vc_g1

0x6fb0,	// (0x00026097) setting_slider_graphic_pane_vc_t1

0x6fc0,	// (0x000260a7) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f8,	// (0x0002eadf) setting_slider_graphic_pane_vc_t

0x6fd0,	// (0x000260b7) slider_set_pane_cp_vc

0x6fd8,	// (0x000260bf) slider_set_pane_vc_g1

0x6fe1,	// (0x000260c8) slider_set_pane_vc_g2

0x0006,

0xf9fd,	// (0x0002eae4) slider_set_pane_vc_g

0x406a,	// (0x00023151) set_opt_bg_pane_g1_copy1

0x4072,	// (0x00023159) set_opt_bg_pane_g2_copy1

0x700d,	// (0x000260f4) set_opt_bg_pane_g3_copy1

0x4082,	// (0x00023169) set_opt_bg_pane_g4_copy1

0x408a,	// (0x00023171) set_opt_bg_pane_g5_copy1

0x4092,	// (0x00023179) set_opt_bg_pane_g6_copy1

0x7015,	// (0x000260fc) set_opt_bg_pane_g7_copy1

0x701f,	// (0x00026106) set_opt_bg_pane_g8_copy1

0x7027,	// (0x0002610e) set_opt_bg_pane_g9_copy1

0x36d5,	// (0x000227bc) bg_set_opt_pane_cp_vc

0x702f,	// (0x00026116) setting_slider_pane_vc_t1

0x703e,	// (0x00026125) setting_slider_pane_vc_t2

0x704e,	// (0x00026135) setting_slider_pane_vc_t3

0x0002,

0xfa0c,	// (0x0002eaf3) setting_slider_pane_vc_t

0x705e,	// (0x00026145) slider_set_pane_vc

0x23e8,	// (0x000214cf) volume_set_pane_vc_g1

0x26d7,	// (0x000217be) volume_set_pane_vc_g2

0x26e0,	// (0x000217c7) volume_set_pane_vc_g3

0x26e9,	// (0x000217d0) volume_set_pane_vc_g4

0x26f2,	// (0x000217d9) volume_set_pane_vc_g5

0x26fb,	// (0x000217e2) volume_set_pane_vc_g6

0x2415,	// (0x000214fc) volume_set_pane_vc_g7

0x2704,	// (0x000217eb) volume_set_pane_vc_g8

0x270d,	// (0x000217f4) volume_set_pane_vc_g9

0x2716,	// (0x000217fd) volume_set_pane_vc_g10

0x0009,

0xfa13,	// (0x0002eafa) volume_set_pane_vc_g

0x7066,	// (0x0002614d) volume_set_pane_vc

0x706e,	// (0x00026155) button_value_adjust_pane_cp1_vc

0x7078,	// (0x0002615f) list_highlight_pane_cp2_vc

0x7081,	// (0x00026168) list_set_pane_vc_ParamLimits

0x7081,	// (0x00026168) list_set_pane_vc

0x70df,	// (0x000261c6) main_pane_set_vc_t1_ParamLimits

0x70df,	// (0x000261c6) main_pane_set_vc_t1

0x70f4,	// (0x000261db) main_pane_set_vc_t2_ParamLimits

0x70f4,	// (0x000261db) main_pane_set_vc_t2

0x7106,	// (0x000261ed) main_pane_set_vc_t3_ParamLimits

0x7106,	// (0x000261ed) main_pane_set_vc_t3

0x7118,	// (0x000261ff) main_pane_set_vc_t4_ParamLimits

0x7118,	// (0x000261ff) main_pane_set_vc_t4

0x0003,

0xfa28,	// (0x0002eb0f) main_pane_set_vc_t_ParamLimits

0xfa28,	// (0x0002eb0f) main_pane_set_vc_t

0x712a,	// (0x00026211) setting_code_pane_vc_ParamLimits

0x712a,	// (0x00026211) setting_code_pane_vc

0x7139,	// (0x00026220) setting_slider_graphic_pane_vc

0x7139,	// (0x00026220) setting_slider_pane_vc

0x7139,	// (0x00026220) setting_text_pane_vc

0x7139,	// (0x00026220) setting_volume_pane_vc

0x7141,	// (0x00026228) scroll_pane_cp121_vc

0x3fe9,	// (0x000230d0) set_content_pane_vc

0x7149,	// (0x00026230) button_value_adjust_pane_g1

0x7152,	// (0x00026239) button_value_adjust_pane_g2

0x0001,

0xfa7d,	// (0x0002eb64) button_value_adjust_pane_g

0x715b,	// (0x00026242) form_field_slider_wide_pane_vc_t1_ParamLimits

0x715b,	// (0x00026242) form_field_slider_wide_pane_vc_t1

0x716f,	// (0x00026256) form_field_slider_wide_pane_vc_t2_ParamLimits

0x716f,	// (0x00026256) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa82,	// (0x0002eb69) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa82,	// (0x0002eb69) form_field_slider_wide_pane_vc_t

0x3a30,	// (0x00022b17) input_focus_pane_cp10_vc_ParamLimits

0x3a30,	// (0x00022b17) input_focus_pane_cp10_vc

0x719b,	// (0x00026282) slider_cont_pane_cp1_vc_ParamLimits

0x719b,	// (0x00026282) slider_cont_pane_cp1_vc

0x71ab,	// (0x00026292) slider_form_pane_g1_cp2

0x6fe1,	// (0x000260c8) slider_form_pane_g2_cp2

0x71d8,	// (0x000262bf) form_field_slider_pane_vc_t3

0x71e6,	// (0x000262cd) form_field_slider_pane_vc_t4

0x71f4,	// (0x000262db) slider_form_pane_vc_ParamLimits

0x71f4,	// (0x000262db) slider_form_pane_vc

0x7201,	// (0x000262e8) form_field_slider_pane_vc_t1_ParamLimits

0x7201,	// (0x000262e8) form_field_slider_pane_vc_t1

0x716f,	// (0x00026256) form_field_slider_pane_vc_t2_ParamLimits

0x716f,	// (0x00026256) form_field_slider_pane_vc_t2

0x0001,

0xfa94,	// (0x0002eb7b) form_field_slider_pane_vc_t_ParamLimits

0xfa94,	// (0x0002eb7b) form_field_slider_pane_vc_t

0x3a30,	// (0x00022b17) input_focus_pane_cp9_vc_ParamLimits

0x3a30,	// (0x00022b17) input_focus_pane_cp9_vc

0x721d,	// (0x00026304) slider_cont_pane_vc_ParamLimits

0x721d,	// (0x00026304) slider_cont_pane_vc

0x722f,	// (0x00026316) list_form_graphic_pane_cp_vc_ParamLimits

0x722f,	// (0x00026316) list_form_graphic_pane_cp_vc

0x5595,	// (0x0002467c) form_field_popup_wide_pane_vc_g1

0x7244,	// (0x0002632b) form_field_popup_wide_pane_vc_t1_ParamLimits

0x7244,	// (0x0002632b) form_field_popup_wide_pane_vc_t1

0x400f,	// (0x000230f6) input_focus_pane_cp8_vc_ParamLimits

0x400f,	// (0x000230f6) input_focus_pane_cp8_vc

0x7289,	// (0x00026370) list_form_wide_pane_vc_ParamLimits

0x7289,	// (0x00026370) list_form_wide_pane_vc

0x7295,	// (0x0002637c) list_form_graphic_pane_vc_g1

0x729d,	// (0x00026384) list_form_graphic_pane_vc_t1_ParamLimits

0x729d,	// (0x00026384) list_form_graphic_pane_vc_t1

0x37b5,	// (0x0002289c) list_highlight_pane_cp5_vc_ParamLimits

0x37b5,	// (0x0002289c) list_highlight_pane_cp5_vc

0x72b9,	// (0x000263a0) list_form_graphic_pane_vc_ParamLimits

0x72b9,	// (0x000263a0) list_form_graphic_pane_vc

0x5595,	// (0x0002467c) form_field_popup_pane_vc_g1

0x72cf,	// (0x000263b6) form_field_popup_pane_vc_t1_ParamLimits

0x72cf,	// (0x000263b6) form_field_popup_pane_vc_t1

0x400f,	// (0x000230f6) input_focus_pane_cp7_vc_ParamLimits

0x400f,	// (0x000230f6) input_focus_pane_cp7_vc

0x72e6,	// (0x000263cd) list_form_pane_vc_ParamLimits

0x72e6,	// (0x000263cd) list_form_pane_vc

0x72f2,	// (0x000263d9) data_form_pane_vc_t1_ParamLimits

0x72f2,	// (0x000263d9) data_form_pane_vc_t1

0x406a,	// (0x00023151) input_focus_pane_vc_g1

0x4072,	// (0x00023159) input_focus_pane_vc_g2

0x407a,	// (0x00023161) input_focus_pane_vc_g3

0x4082,	// (0x00023169) input_focus_pane_vc_g4

0x408a,	// (0x00023171) input_focus_pane_vc_g5

0x4092,	// (0x00023179) input_focus_pane_vc_g6

0x409a,	// (0x00023181) input_focus_pane_vc_g7

0x40a2,	// (0x00023189) input_focus_pane_vc_g8

0x40aa,	// (0x00023191) input_focus_pane_vc_g9

0x36cb,	// (0x000227b2) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0002e773) input_focus_pane_vc_g

0x5589,	// (0x00024670) data_form_pane_vc_ParamLimits

0x5589,	// (0x00024670) data_form_pane_vc

0x5595,	// (0x0002467c) form_field_data_pane_vc_g1

0x730d,	// (0x000263f4) form_field_data_pane_vc_t1_ParamLimits

0x730d,	// (0x000263f4) form_field_data_pane_vc_t1

0x400f,	// (0x000230f6) input_focus_pane_vc_ParamLimits

0x400f,	// (0x000230f6) input_focus_pane_vc

0x7327,	// (0x0002640e) button_value_adjust_pane_cp3_vc

0x732f,	// (0x00026416) button_value_adjust_pane_cp5_vc

0x7337,	// (0x0002641e) form_field_data_pane_vc_ParamLimits

0x7337,	// (0x0002641e) form_field_data_pane_vc

0x734e,	// (0x00026435) form_field_data_pane_vc_cp2

0x7356,	// (0x0002643d) form_field_data_wide_pane_vc_ParamLimits

0x7356,	// (0x0002643d) form_field_data_wide_pane_vc

0x736c,	// (0x00026453) form_field_data_wide_pane_vc_cp2

0x7374,	// (0x0002645b) form_field_popup_pane_vc_ParamLimits

0x7374,	// (0x0002645b) form_field_popup_pane_vc

0x738b,	// (0x00026472) form_field_popup_wide_pane_vc_ParamLimits

0x738b,	// (0x00026472) form_field_popup_wide_pane_vc

0x73a1,	// (0x00026488) form_field_slider_pane_vc_ParamLimits

0x73a1,	// (0x00026488) form_field_slider_pane_vc

0x73b4,	// (0x0002649b) form_field_slider_wide_pane_vc_ParamLimits

0x73b4,	// (0x0002649b) form_field_slider_wide_pane_vc

0xe049,	// (0x0002d130) grid_touch_1_pane_ParamLimits

0xe049,	// (0x0002d130) grid_touch_1_pane

0xe05d,	// (0x0002d144) grid_touch_2_pane_ParamLimits

0xe05d,	// (0x0002d144) grid_touch_2_pane

0x7482,	// (0x00026569) touch_pane_g1_ParamLimits

0x7482,	// (0x00026569) touch_pane_g1

0x73eb,	// (0x000264d2) cell_app_pane_cp_wide_ParamLimits

0x73eb,	// (0x000264d2) cell_app_pane_cp_wide

0x73fc,	// (0x000264e3) grid_popup_fast_wide_pane_ParamLimits

0x73fc,	// (0x000264e3) grid_popup_fast_wide_pane

0x7410,	// (0x000264f7) scroll_pane_cp19_ParamLimits

0x7410,	// (0x000264f7) scroll_pane_cp19

0x36d5,	// (0x000227bc) bg_popup_window_pane_cp20

0x7424,	// (0x0002650b) listscroll_popup_fast_wide_pane

0x41d0,	// (0x000232b7) grid_indicator_nsta_pane

0x742c,	// (0x00026513) clock_nsta_pane_g1

0x7435,	// (0x0002651c) clock_nsta_pane_t1

0xe087,	// (0x0002d16e) cell_indicator_nsta_pane_ParamLimits

0xe087,	// (0x0002d16e) cell_indicator_nsta_pane

0x7482,	// (0x00026569) cell_indicator_nsta_pane_g1

0xe09e,	// (0x0002d185) cell_indicator_nsta_pane_g2

0x0001,

0xfaa5,	// (0x0002eb8c) cell_indicator_nsta_pane_g

0x749d,	// (0x00026584) clock_nsta_pane_cp

0x74a5,	// (0x0002658c) indicator_nsta_pane_cp

0x74ad,	// (0x00026594) nsta_clock_indic_pane_g1

0x387e,	// (0x00022965) grid_indicator_pane

0x4599,	// (0x00023680) scroll_pane_cp29

0x19fd,	// (0x00020ae4) indicator_nsta_pane_cp2_ParamLimits

0x19fd,	// (0x00020ae4) indicator_nsta_pane_cp2

0x37b5,	// (0x0002289c) main_apps_wheel_pane

0x57c0,	// (0x000248a7) form_midp_field_text_pane_ParamLimits

0x5907,	// (0x000249ee) scroll_bar_cp050_ParamLimits

0x750e,	// (0x000265f5) cell_indicator_pane_ParamLimits

0x750e,	// (0x000265f5) cell_indicator_pane

0x7529,	// (0x00026610) cell_indicator_pane_g1

0xe0ab,	// (0x0002d192) grid_wheel_folder_pane_ParamLimits

0xe0ab,	// (0x0002d192) grid_wheel_folder_pane

0xe0b9,	// (0x0002d1a0) list_wheel_apps_pane_ParamLimits

0xe0b9,	// (0x0002d1a0) list_wheel_apps_pane

0xe0c7,	// (0x0002d1ae) main_apps_wheel_pane_g1_ParamLimits

0xe0c7,	// (0x0002d1ae) main_apps_wheel_pane_g1

0xe0d3,	// (0x0002d1ba) main_apps_wheel_pane_g2_ParamLimits

0xe0d3,	// (0x0002d1ba) main_apps_wheel_pane_g2

0x0001,

0xfac1,	// (0x0002eba8) main_apps_wheel_pane_g_ParamLimits

0xfac1,	// (0x0002eba8) main_apps_wheel_pane_g

0xe0e1,	// (0x0002d1c8) main_apps_wheel_pane_t1_ParamLimits

0xe0e1,	// (0x0002d1c8) main_apps_wheel_pane_t1

0xe0f5,	// (0x0002d1dc) list_wheel_apps_pane_g1

0xe0fd,	// (0x0002d1e4) list_wheel_apps_pane_g2

0xe105,	// (0x0002d1ec) list_wheel_apps_pane_g3

0xe10d,	// (0x0002d1f4) list_wheel_apps_pane_g4

0xe117,	// (0x0002d1fe) list_wheel_apps_pane_g5

0x0004,

0xfac6,	// (0x0002ebad) list_wheel_apps_pane_g

0x4b03,	// (0x00023bea) navi_icon_text_pane

0xd718,	// (0x0002c7ff) aid_fill_nsta

0x75f0,	// (0x000266d7) navi_icon_text_pane_g1

0x75fc,	// (0x000266e3) navi_icon_text_pane_t1

0xd582,	// (0x0002c669) list_set_graphic_pane_t1_ParamLimits

0xd582,	// (0x0002c669) list_set_graphic_pane_t1

0x6059,	// (0x00025140) popup_midp_note_alarm_window_t6_ParamLimits

0x6059,	// (0x00025140) popup_midp_note_alarm_window_t6

0x606b,	// (0x00025152) popup_midp_note_alarm_window_t7_ParamLimits

0x606b,	// (0x00025152) popup_midp_note_alarm_window_t7

0x607d,	// (0x00025164) popup_midp_note_alarm_window_t8_ParamLimits

0x607d,	// (0x00025164) popup_midp_note_alarm_window_t8

0x608f,	// (0x00025176) popup_midp_note_alarm_window_t9_ParamLimits

0x608f,	// (0x00025176) popup_midp_note_alarm_window_t9

0x60a1,	// (0x00025188) popup_midp_note_alarm_window_t10_ParamLimits

0x60a1,	// (0x00025188) popup_midp_note_alarm_window_t10

0x60b3,	// (0x0002519a) popup_midp_note_alarm_window_t11_ParamLimits

0x60b3,	// (0x0002519a) popup_midp_note_alarm_window_t11

0x60c5,	// (0x000251ac) scroll_pane_cp17_ParamLimits

0x60c5,	// (0x000251ac) scroll_pane_cp17

0x23e8,	// (0x000214cf) volume_small_pane_cp_g1

0x271f,	// (0x00021806) volume_small_pane_cp_g2

0x2728,	// (0x0002180f) volume_small_pane_cp_g3

0x23fa,	// (0x000214e1) volume_small_pane_cp_g4

0x2731,	// (0x00021818) volume_small_pane_cp_g5

0x26f2,	// (0x000217d9) volume_small_pane_cp_g6

0x240c,	// (0x000214f3) volume_small_pane_cp_g7

0x273a,	// (0x00021821) volume_small_pane_cp_g8

0x2743,	// (0x0002182a) volume_small_pane_cp_g9

0x241e,	// (0x00021505) volume_small_pane_cp_g10

0x4d4c,	// (0x00023e33) midp_ticker_pane_g1_ParamLimits

0x4d58,	// (0x00023e3f) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0002e83f) midp_ticker_pane_g_ParamLimits

0x4d64,	// (0x00023e4b) midp_ticker_pane_t1_ParamLimits

0xd73c,	// (0x0002c823) aid_fill_nsta_2

0x58f3,	// (0x000249da) list_form2_midp_pane

0x6a11,	// (0x00025af8) midp_editing_number_pane_ParamLimits

0x6a20,	// (0x00025b07) midp_ticker_pane_ParamLimits

0x760e,	// (0x000266f5) form2_midp_field_pane

0x7632,	// (0x00026719) scroll_pane_cp51

0x7652,	// (0x00026739) form2_midp_button_pane_ParamLimits

0x7652,	// (0x00026739) form2_midp_button_pane

0x7664,	// (0x0002674b) form2_midp_content_pane_ParamLimits

0x7664,	// (0x0002674b) form2_midp_content_pane

0x767e,	// (0x00026765) form2_midp_field_choice_group_pane

0x7686,	// (0x0002676d) form2_midp_field_pane_g1

0x768e,	// (0x00026775) form2_midp_field_pane_g2

0x7696,	// (0x0002677d) form2_midp_field_pane_g3

0x769e,	// (0x00026785) form2_midp_field_pane_g4

0x0003,

0xfaeb,	// (0x0002ebd2) form2_midp_field_pane_g

0x76a6,	// (0x0002678d) form2_midp_gauge_slider_pane

0x76ae,	// (0x00026795) form2_midp_gauge_wait_pane

0x76b6,	// (0x0002679d) form2_midp_image_pane_ParamLimits

0x76b6,	// (0x0002679d) form2_midp_image_pane

0x76d1,	// (0x000267b8) form2_midp_label_pane_ParamLimits

0x76d1,	// (0x000267b8) form2_midp_label_pane

0xe14a,	// (0x0002d231) form2_midp_label_pane_cp_ParamLimits

0xe14a,	// (0x0002d231) form2_midp_label_pane_cp

0x770b,	// (0x000267f2) form2_midp_string_pane_ParamLimits

0x770b,	// (0x000267f2) form2_midp_string_pane

0x0edf,	// (0x0001ffc6) form2_midp_text_pane_ParamLimits

0x0edf,	// (0x0001ffc6) form2_midp_text_pane

0x771d,	// (0x00026804) form2_midp_time_pane

0x772d,	// (0x00026814) input_focus_pane_cp51_ParamLimits

0x772d,	// (0x00026814) input_focus_pane_cp51

0x7745,	// (0x0002682c) form2_midp_label_pane_t1_ParamLimits

0x7745,	// (0x0002682c) form2_midp_label_pane_t1

0x0ef8,	// (0x0001ffdf) form2_mdip_text_pane_t1_ParamLimits

0x0ef8,	// (0x0001ffdf) form2_mdip_text_pane_t1

0x0f16,	// (0x0001fffd) form2_midp_time_pane_t1

0x778d,	// (0x00026874) form2_midp_gauge_slider_pane_t1

0xe16b,	// (0x0002d252) form2_midp_gauge_slider_pane_t2

0xe17f,	// (0x0002d266) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf4,	// (0x0002ebdb) form2_midp_gauge_slider_pane_t

0x77c3,	// (0x000268aa) form2_midp_slider_pane

0x77cf,	// (0x000268b6) form2_midp_gauge_wait_pane_t1

0x77dd,	// (0x000268c4) form2_midp_wait_pane_ParamLimits

0x77dd,	// (0x000268c4) form2_midp_wait_pane

0xe193,	// (0x0002d27a) list_single_2graphic_pane_cp4_ParamLimits

0xe193,	// (0x0002d27a) list_single_2graphic_pane_cp4

0xdb82,	// (0x0002cc69) list_single_midp_graphic_pane_cp_ParamLimits

0xdb82,	// (0x0002cc69) list_single_midp_graphic_pane_cp

0x36d5,	// (0x000227bc) list_highlight_pane_cp20

0x7837,	// (0x0002691e) list_single_2graphic_pane_g1_cp4

0x6e35,	// (0x00025f1c) list_single_2graphic_pane_g2_cp4

0x783f,	// (0x00026926) list_single_2graphic_pane_t1_cp4

0x37b5,	// (0x0002289c) list_highlight_pane_cp21

0x784e,	// (0x00026935) list_single_midp_graphic_pane_g4_cp

0x785d,	// (0x00026944) list_single_midp_graphic_pane_t1_cp

0xe1a9,	// (0x0002d290) form2_mdip_string_pane_t1_ParamLimits

0xe1a9,	// (0x0002d290) form2_mdip_string_pane_t1

0x36d5,	// (0x000227bc) bg_wml_button_pane_cp2

0x36cb,	// (0x000227b2) form2_midp_image_pane_g1

0x0406,	// (0x0001f4ed) list_double_large_graphic_pane_g5_ParamLimits

0x0406,	// (0x0001f4ed) list_double_large_graphic_pane_g5

0x4fb1,	// (0x00024098) midp_form_pane_ParamLimits

0x37b5,	// (0x0002289c) main_apps_wheel_pane_ParamLimits

0xc5c1,	// (0x0002b6a8) popup_preview_window_ParamLimits

0xc5c1,	// (0x0002b6a8) popup_preview_window

0x2267,	// (0x0002134e) popup_touch_info_window_ParamLimits

0x2267,	// (0x0002134e) popup_touch_info_window

0x2285,	// (0x0002136c) popup_touch_menu_window_ParamLimits

0x2285,	// (0x0002136c) popup_touch_menu_window

0x36c1,	// (0x000227a8) bg_popup_sub_pane_cp6

0x7995,	// (0x00026a7c) list_touch_menu_pane

0x799d,	// (0x00026a84) list_single_touch_menu_pane_ParamLimits

0x799d,	// (0x00026a84) list_single_touch_menu_pane

0x79b1,	// (0x00026a98) list_single_touch_menu_pane_t1

0x37b5,	// (0x0002289c) bg_popup_sub_pane_cp7_ParamLimits

0x37b5,	// (0x0002289c) bg_popup_sub_pane_cp7

0x79bf,	// (0x00026aa6) heading_sub_pane

0x79c7,	// (0x00026aae) list_touch_info_pane_ParamLimits

0x79c7,	// (0x00026aae) list_touch_info_pane

0x79d6,	// (0x00026abd) list_single_touch_info_pane_ParamLimits

0x79d6,	// (0x00026abd) list_single_touch_info_pane

0x79e8,	// (0x00026acf) list_single_touch_info_pane_t1

0x79f6,	// (0x00026add) list_single_touch_info_pane_t2

0x0001,

0xfb02,	// (0x0002ebe9) list_single_touch_info_pane_t

0x4c77,	// (0x00023d5e) bg_popup_heading_pane_cp

0x7a04,	// (0x00026aeb) heading_sub_pane_t1

0x5523,	// (0x0002460a) bg_popup_preview_window_pane_cp_ParamLimits

0x5523,	// (0x0002460a) bg_popup_preview_window_pane_cp

0x79bf,	// (0x00026aa6) heading_preview_pane

0x79c7,	// (0x00026aae) list_preview_pane_ParamLimits

0x79c7,	// (0x00026aae) list_preview_pane

0x7a12,	// (0x00026af9) popup_preview_window_g1

0x79d6,	// (0x00026abd) list_single_preview_pane_ParamLimits

0x79d6,	// (0x00026abd) list_single_preview_pane

0x7a1a,	// (0x00026b01) list_single_preview_pane_g1

0x7a22,	// (0x00026b09) list_single_preview_pane_t1

0x79e8,	// (0x00026acf) list_single_preview_pane_t2

0x0001,

0xfb07,	// (0x0002ebee) list_single_preview_pane_t

0x7a30,	// (0x00026b17) bg_popup_heading_pane_cp2_ParamLimits

0x7a30,	// (0x00026b17) bg_popup_heading_pane_cp2

0x7a46,	// (0x00026b2d) heading_preview_pane_g1

0x7a4e,	// (0x00026b35) heading_preview_pane_t1_ParamLimits

0x7a4e,	// (0x00026b35) heading_preview_pane_t1

0x38a1,	// (0x00022988) soft_indicator_pane_t1_ParamLimits

0x3f82,	// (0x00023069) scroll_pane_ParamLimits

0x4492,	// (0x00023579) scroll_sc2_left_pane

0x449b,	// (0x00023582) scroll_sc2_right_pane

0x44ba,	// (0x000235a1) scroll_bg_pane_g1_ParamLimits

0x44cf,	// (0x000235b6) scroll_bg_pane_g2_ParamLimits

0x44e7,	// (0x000235ce) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0002e7ca) scroll_bg_pane_g_ParamLimits

0x44ba,	// (0x000235a1) scroll_handle_pane_g1_ParamLimits

0x4509,	// (0x000235f0) scroll_handle_pane_g2_ParamLimits

0x44e7,	// (0x000235ce) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0002e7d1) scroll_handle_pane_g_ParamLimits

0x1d37,	// (0x00020e1e) popup_choice_list_window_ParamLimits

0x1d37,	// (0x00020e1e) popup_choice_list_window

0x53f9,	// (0x000244e0) choice_list_pane

0x547b,	// (0x00024562) cell_toolbar_pane_t1

0x54a3,	// (0x0002458a) toolbar_button_pane_ParamLimits

0x657f,	// (0x00025666) ai_gene_pane_1_t2_ParamLimits

0x657f,	// (0x00025666) ai_gene_pane_1_t2

0x0001,

0xf906,	// (0x0002e9ed) ai_gene_pane_1_t_ParamLimits

0xf906,	// (0x0002e9ed) ai_gene_pane_1_t

0x7a6b,	// (0x00026b52) scroll_sc2_left_pane_g1

0x7a6b,	// (0x00026b52) scroll_sc2_right_pane_g1

0x4fb1,	// (0x00024098) bg_popup_sub_pane_cp10

0x7a75,	// (0x00026b5c) list_choice_list_pane

0x7a8e,	// (0x00026b75) list_single_choice_list_pane_ParamLimits

0x7a8e,	// (0x00026b75) list_single_choice_list_pane

0x7aa1,	// (0x00026b88) list_single_choice_list_pane_g1

0x41a1,	// (0x00023288) list_single_choice_list_pane_t1_ParamLimits

0x41a1,	// (0x00023288) list_single_choice_list_pane_t1

0x7aa9,	// (0x00026b90) choice_list_pane_g1

0x7ab1,	// (0x00026b98) choice_list_pane_t1

0x36c1,	// (0x000227a8) input_focus_pane_cp11

0x4375,	// (0x0002345c) title_pane_stacon_g2_ParamLimits

0x4375,	// (0x0002345c) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0002e7b0) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0002e7b0) title_pane_stacon_g

0x4c77,	// (0x00023d5e) cursor_press_pane

0xc27a,	// (0x0002b361) popup_fep_hwr_window_ParamLimits

0xc27a,	// (0x0002b361) popup_fep_hwr_window

0x1e57,	// (0x00020f3e) popup_fep_vkb_window_ParamLimits

0x1e57,	// (0x00020f3e) popup_fep_vkb_window

0x7abf,	// (0x00026ba6) cursor_press_pane_g1

0x0002,

0xfb30,	// (0x0002ec17) fep_vkb_side_pane_g_ParamLimits

0x2785,	// (0x0002186c) fep_hwr_candidate_pane_ParamLimits

0x2785,	// (0x0002186c) fep_hwr_candidate_pane

0x27af,	// (0x00021896) fep_hwr_side_pane_ParamLimits

0x27af,	// (0x00021896) fep_hwr_side_pane

0x27cf,	// (0x000218b6) fep_hwr_top_pane_ParamLimits

0x27cf,	// (0x000218b6) fep_hwr_top_pane

0x27e7,	// (0x000218ce) fep_hwr_write_pane_ParamLimits

0x27e7,	// (0x000218ce) fep_hwr_write_pane

0xfb30,	// (0x0002ec17) fep_vkb_side_pane_g

0x7ac7,	// (0x00026bae) fep_hwr_top_pane_g1

0x7ad9,	// (0x00026bc0) fep_hwr_top_pane_g2

0x2813,	// (0x000218fa) fep_hwr_top_pane_g3

0x0002,

0xfb0c,	// (0x0002ebf3) fep_hwr_top_pane_g

0x2828,	// (0x0002190f) fep_hwr_top_text_pane

0x465f,	// (0x00023746) fep_hwr_top_text_pane_g1

0x7b0f,	// (0x00026bf6) fep_hwr_top_text_pane_t1

0x291e,	// (0x00021a05) fep_hwr_candidate_pane_g1

0x7d52,	// (0x00026e39) fep_vkb_keypad_pane_g3_ParamLimits

0x7d52,	// (0x00026e39) fep_vkb_keypad_pane_g3

0x7d7a,	// (0x00026e61) fep_vkb_keypad_pane_g4_ParamLimits

0x7d7a,	// (0x00026e61) fep_vkb_keypad_pane_g4

0x7de9,	// (0x00026ed0) fep_vkb_bottom_pane_g2_ParamLimits

0x7de9,	// (0x00026ed0) fep_vkb_bottom_pane_g2

0x0001,

0xfb37,	// (0x0002ec1e) fep_vkb_bottom_pane_g_ParamLimits

0xfb37,	// (0x0002ec1e) fep_vkb_bottom_pane_g

0x7a6b,	// (0x00026b52) cell_vkb_side_pane_g2

0x0001,

0xfb41,	// (0x0002ec28) cell_vkb_side_pane_g

0x7e74,	// (0x00026f5b) cell_vkb_side_pane_t1

0x7e82,	// (0x00026f69) cell_vkb_side_pane_t1_copy1

0x7a6b,	// (0x00026b52) bg_fep_vkb_candidate_pane_g2

0x7fae,	// (0x00027095) cell_vkb_candidate_pane_ParamLimits

0x7b1d,	// (0x00026c04) aid_size_cell_vkb_ParamLimits

0x7b1d,	// (0x00026c04) aid_size_cell_vkb

0x7fae,	// (0x00027095) cell_vkb_candidate_pane

0x2938,	// (0x00021a1f) bg_popup_fep_shadow_pane_g1

0xe239,	// (0x0002d320) fep_vkb_bottom_pane_ParamLimits

0xe239,	// (0x0002d320) fep_vkb_bottom_pane

0x7bdf,	// (0x00026cc6) fep_vkb_candidate_pane_ParamLimits

0x7bdf,	// (0x00026cc6) fep_vkb_candidate_pane

0xe25e,	// (0x0002d345) fep_vkb_keypad_pane_ParamLimits

0xe25e,	// (0x0002d345) fep_vkb_keypad_pane

0xe293,	// (0x0002d37a) fep_vkb_side_pane_ParamLimits

0xe293,	// (0x0002d37a) fep_vkb_side_pane

0xe2cf,	// (0x0002d3b6) fep_vkb_top_pane_ParamLimits

0xe2cf,	// (0x0002d3b6) fep_vkb_top_pane

0x7cab,	// (0x00026d92) fep_vkb_top_pane_g1_ParamLimits

0x7cab,	// (0x00026d92) fep_vkb_top_pane_g1

0x7cba,	// (0x00026da1) fep_vkb_top_pane_g2_ParamLimits

0x7cba,	// (0x00026da1) fep_vkb_top_pane_g2

0x7cc9,	// (0x00026db0) fep_vkb_top_pane_g3_ParamLimits

0x7cc9,	// (0x00026db0) fep_vkb_top_pane_g3

0x0003,

0xfb27,	// (0x0002ec0e) fep_vkb_top_pane_g_ParamLimits

0xfb27,	// (0x0002ec0e) fep_vkb_top_pane_g

0x7ce7,	// (0x00026dce) fep_vkb_top_text_pane_ParamLimits

0x7ce7,	// (0x00026dce) fep_vkb_top_text_pane

0xe304,	// (0x0002d3eb) fep_vkb_side_pane_g1_ParamLimits

0xe304,	// (0x0002d3eb) fep_vkb_side_pane_g1

0x7d41,	// (0x00026e28) grid_vkb_side_pane_ParamLimits

0x7d41,	// (0x00026e28) grid_vkb_side_pane

0x2940,	// (0x00021a27) bg_popup_fep_shadow_pane_g2

0x2949,	// (0x00021a30) bg_popup_fep_shadow_pane_g3

0x2951,	// (0x00021a38) bg_popup_fep_shadow_pane_g4

0x295a,	// (0x00021a41) bg_popup_fep_shadow_pane_g5

0x2964,	// (0x00021a4b) bg_popup_fep_shadow_pane_g6

0x296c,	// (0x00021a53) bg_popup_fep_shadow_pane_g7

0x408a,	// (0x00023171) bg_popup_fep_shadow_pane_g8

0x7d98,	// (0x00026e7f) grid_vkb_keypad_number_pane_ParamLimits

0x7d98,	// (0x00026e7f) grid_vkb_keypad_number_pane

0x7da8,	// (0x00026e8f) grid_vkb_keypad_pane_ParamLimits

0x7da8,	// (0x00026e8f) grid_vkb_keypad_pane

0x7dce,	// (0x00026eb5) fep_vkb_bottom_pane_g1_ParamLimits

0x7dce,	// (0x00026eb5) fep_vkb_bottom_pane_g1

0x7df7,	// (0x00026ede) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7df7,	// (0x00026ede) grid_vkb_keypad_bottom_left_pane

0x7e0c,	// (0x00026ef3) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7e0c,	// (0x00026ef3) grid_vkb_keypad_bottom_right_pane

0x7e21,	// (0x00026f08) fep_vkb_top_text_pane_g1

0xe34b,	// (0x0002d432) fep_vkb_top_text_pane_t1

0xe35d,	// (0x0002d444) cell_vkb_side_pane_ParamLimits

0xe35d,	// (0x0002d444) cell_vkb_side_pane

0x7a6b,	// (0x00026b52) cell_vkb_side_pane_g1

0x7e90,	// (0x00026f77) cell_vkb_keypad_pane_ParamLimits

0x7e90,	// (0x00026f77) cell_vkb_keypad_pane

0x7f05,	// (0x00026fec) cell_vkb_keypad_pane_g1

0x0008,

0xfb54,	// (0x0002ec3b) bg_popup_fep_shadow_pane_g

0x7a6b,	// (0x00026b52) cell_hwr_side_pane_g1

0x7a6b,	// (0x00026b52) cell_hwr_side_pane_g2

0x7f0f,	// (0x00026ff6) cell_vkb_keypad_pane_t1

0xe373,	// (0x0002d45a) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe373,	// (0x0002d45a) cell_vkb_keypad_bottom_left_pane

0xe388,	// (0x0002d46f) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe388,	// (0x0002d46f) cell_vkb_keypad_bottom_right_pane

0x7a6b,	// (0x00026b52) cell_vkb_keypad_bottom_left_pane_g1

0x7a6b,	// (0x00026b52) cell_vkb_keypad_bottom_right_pane_g1

0x7f73,	// (0x0002705a) cell_vkb_keypad_number_pane_ParamLimits

0x7f73,	// (0x0002705a) cell_vkb_keypad_number_pane

0x7f92,	// (0x00027079) cell_vkb_keypad_number_pane_g1

0x7f9c,	// (0x00027083) cell_vkb_keypad_number_pane_g2

0x7fa5,	// (0x0002708c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb46,	// (0x0002ec2d) cell_vkb_keypad_number_pane_g

0x7f0f,	// (0x00026ff6) cell_vkb_keypad_number_pane_t1

0x7fc9,	// (0x000270b0) fep_vkb_candidate_pane_g1

0x0001,

0xfb41,	// (0x0002ec28) cell_hwr_side_pane_g

0x7fe2,	// (0x000270c9) cell_hwr_side_pane_t1

0x297e,	// (0x00021a65) cell_hwr_side_pane_t1_copy1

0x7cd9,	// (0x00026dc0) cell_hwr_candidate_pane_g1

0x298c,	// (0x00021a73) cell_hwr_candidate_pane_t1

0x7a6b,	// (0x00026b52) cell_vkb_candidate_pane_g2

0x8068,	// (0x0002714f) cell_vkb_candidate_pane_t1

0x274c,	// (0x00021833) bg_popup_fep_shadow_pane_ParamLimits

0x274c,	// (0x00021833) bg_popup_fep_shadow_pane

0xda9b,	// (0x0002cb82) bg_fep_hwr_top_pane_g4

0x7aeb,	// (0x00026bd2) bg_hwr_side_pane_g1_ParamLimits

0x7aeb,	// (0x00026bd2) bg_hwr_side_pane_g1

0xc9e6,	// (0x0002bacd) cell_hwr_side_pane_ParamLimits

0xc9e6,	// (0x0002bacd) cell_hwr_side_pane

0x289f,	// (0x00021986) fep_hwr_write_pane_g1_ParamLimits

0x289f,	// (0x00021986) fep_hwr_write_pane_g1

0x28ac,	// (0x00021993) fep_hwr_write_pane_g2_ParamLimits

0x28ac,	// (0x00021993) fep_hwr_write_pane_g2

0x28b9,	// (0x000219a0) fep_hwr_write_pane_g3_ParamLimits

0x28b9,	// (0x000219a0) fep_hwr_write_pane_g3

0xca06,	// (0x0002baed) fep_hwr_write_pane_g4_ParamLimits

0xca06,	// (0x0002baed) fep_hwr_write_pane_g4

0x0005,

0xfb13,	// (0x0002ebfa) fep_hwr_write_pane_g_ParamLimits

0xfb13,	// (0x0002ebfa) fep_hwr_write_pane_g

0xda9b,	// (0x0002cb82) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xda9b,	// (0x0002cb82) bg_fep_hwr_candidate_pane_g2

0x28dc,	// (0x000219c3) cell_hwr_candidate_pane_ParamLimits

0x28dc,	// (0x000219c3) cell_hwr_candidate_pane

0x291e,	// (0x00021a05) fep_hwr_candidate_pane_g1_ParamLimits

0x7b4b,	// (0x00026c32) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7b4b,	// (0x00026c32) bg_popup_fep_shadow_pane_cp2

0x7cd9,	// (0x00026dc0) fep_vkb_top_pane_g4_ParamLimits

0x7cd9,	// (0x00026dc0) fep_vkb_top_pane_g4

0x7d1f,	// (0x00026e06) fep_vkb_side_pane_g2_ParamLimits

0x7d1f,	// (0x00026e06) fep_vkb_side_pane_g2

0xb912,	// (0x0002a9f9) list_setting_pane_t4_ParamLimits

0xb912,	// (0x0002a9f9) list_setting_pane_t4

0xb994,	// (0x0002aa7b) list_setting_number_pane_t5_ParamLimits

0xb994,	// (0x0002aa7b) list_setting_number_pane_t5

0xd492,	// (0x0002c579) list_double_heading_pane_cp2_ParamLimits

0xd492,	// (0x0002c579) list_double_heading_pane_cp2

0x401d,	// (0x00023104) list_double_heading_pane_g1_cp2_ParamLimits

0x401d,	// (0x00023104) list_double_heading_pane_g1_cp2

0x4029,	// (0x00023110) list_double_heading_pane_g2_cp2_ParamLimits

0x4029,	// (0x00023110) list_double_heading_pane_g2_cp2

0x8076,	// (0x0002715d) list_double_heading_pane_t1_cp2_ParamLimits

0x8076,	// (0x0002715d) list_double_heading_pane_t1_cp2

0x808c,	// (0x00027173) list_double_heading_pane_t2_cp2_ParamLimits

0x808c,	// (0x00027173) list_double_heading_pane_t2_cp2

0x36a9,	// (0x00022790) aid_value_unit2

0x1594,	// (0x0002067b) popup_preview_fixed_window

0x3a3e,	// (0x00022b25) bg_popup_preview_window_pane_cp02

0x809e,	// (0x00027185) list_preview_fixed_pane

0x80e4,	// (0x000271cb) list_empty_pane_fp_ParamLimits

0x80e4,	// (0x000271cb) list_empty_pane_fp

0x80e4,	// (0x000271cb) list_single_cale_day_pane_fp_ParamLimits

0x80e4,	// (0x000271cb) list_single_cale_day_pane_fp

0x80e4,	// (0x000271cb) list_single_graphic_heading_pane_fp_ParamLimits

0x80e4,	// (0x000271cb) list_single_graphic_heading_pane_fp

0x80e4,	// (0x000271cb) list_single_graphic_pane_fp_ParamLimits

0x80e4,	// (0x000271cb) list_single_graphic_pane_fp

0x80e4,	// (0x000271cb) list_single_heading_pane_fp_ParamLimits

0x80e4,	// (0x000271cb) list_single_heading_pane_fp

0x80e4,	// (0x000271cb) list_single_pane_fp_ParamLimits

0x80e4,	// (0x000271cb) list_single_pane_fp

0x80fa,	// (0x000271e1) list_single_pane_fp_g1_ParamLimits

0x80fa,	// (0x000271e1) list_single_pane_fp_g1

0x0275,	// (0x0001f35c) list_single_pane_fp_g2_ParamLimits

0x0275,	// (0x0001f35c) list_single_pane_fp_g2

0x0f29,	// (0x00020010) list_single_pane_fp_g3_ParamLimits

0x0f29,	// (0x00020010) list_single_pane_fp_g3

0x8106,	// (0x000271ed) list_single_pane_fp_g4_ParamLimits

0x8106,	// (0x000271ed) list_single_pane_fp_g4

0x0003,

0xfb75,	// (0x0002ec5c) list_single_pane_fp_g_ParamLimits

0xfb75,	// (0x0002ec5c) list_single_pane_fp_g

0x0f3d,	// (0x00020024) list_single_pane_fp_t1_ParamLimits

0x0f3d,	// (0x00020024) list_single_pane_fp_t1

0x0f54,	// (0x0002003b) list_single_graphic_pane_fp_g1_ParamLimits

0x0f54,	// (0x0002003b) list_single_graphic_pane_fp_g1

0x80fa,	// (0x000271e1) list_single_graphic_pane_fp_g2_ParamLimits

0x80fa,	// (0x000271e1) list_single_graphic_pane_fp_g2

0x0275,	// (0x0001f35c) list_single_graphic_pane_fp_g3_ParamLimits

0x0275,	// (0x0001f35c) list_single_graphic_pane_fp_g3

0x0f29,	// (0x00020010) list_single_graphic_pane_fp_g4_ParamLimits

0x0f29,	// (0x00020010) list_single_graphic_pane_fp_g4

0x8106,	// (0x000271ed) list_single_graphic_pane_fp_g5_ParamLimits

0x8106,	// (0x000271ed) list_single_graphic_pane_fp_g5

0x0004,

0xfb7e,	// (0x0002ec65) list_single_graphic_pane_fp_g_ParamLimits

0xfb7e,	// (0x0002ec65) list_single_graphic_pane_fp_g

0x0f60,	// (0x00020047) list_single_graphic_pane_fp_t1_ParamLimits

0x0f60,	// (0x00020047) list_single_graphic_pane_fp_t1

0x0f54,	// (0x0002003b) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0f54,	// (0x0002003b) list_single_graphic_heading_pane_fp_g1

0x80fa,	// (0x000271e1) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x80fa,	// (0x000271e1) list_single_graphic_heading_pane_fp_g2

0x0275,	// (0x0001f35c) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0275,	// (0x0001f35c) list_single_graphic_heading_pane_fp_g3

0x0f29,	// (0x00020010) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x0f29,	// (0x00020010) list_single_graphic_heading_pane_fp_g4

0x8106,	// (0x000271ed) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x8106,	// (0x000271ed) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x0002ec65) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0002ec65) list_single_graphic_heading_pane_fp_g

0x0f76,	// (0x0002005d) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0f76,	// (0x0002005d) list_single_graphic_heading_pane_fp_t1

0x0f8c,	// (0x00020073) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0f8c,	// (0x00020073) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb89,	// (0x0002ec70) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb89,	// (0x0002ec70) list_single_graphic_heading_pane_fp_t

0x0f9e,	// (0x00020085) list_single_cale_day_pane_fp_g1_ParamLimits

0x0f9e,	// (0x00020085) list_single_cale_day_pane_fp_g1

0x8112,	// (0x000271f9) list_single_cale_day_pane_fp_g2_ParamLimits

0x8112,	// (0x000271f9) list_single_cale_day_pane_fp_g2

0x0fd6,	// (0x000200bd) list_single_cale_day_pane_fp_g3_ParamLimits

0x0fd6,	// (0x000200bd) list_single_cale_day_pane_fp_g3

0x0ffe,	// (0x000200e5) list_single_cale_day_pane_fp_g4_ParamLimits

0x0ffe,	// (0x000200e5) list_single_cale_day_pane_fp_g4

0x1022,	// (0x00020109) list_single_cale_day_pane_fp_g5_ParamLimits

0x1022,	// (0x00020109) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8e,	// (0x0002ec75) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8e,	// (0x0002ec75) list_single_cale_day_pane_fp_g

0x1046,	// (0x0002012d) list_single_cale_day_pane_fp_t1_ParamLimits

0x1046,	// (0x0002012d) list_single_cale_day_pane_fp_t1

0x106c,	// (0x00020153) list_single_cale_day_pane_fp_t2_ParamLimits

0x106c,	// (0x00020153) list_single_cale_day_pane_fp_t2

0x1085,	// (0x0002016c) list_single_cale_day_pane_fp_t3_ParamLimits

0x1085,	// (0x0002016c) list_single_cale_day_pane_fp_t3

0x0002,

0xfb99,	// (0x0002ec80) list_single_cale_day_pane_fp_t_ParamLimits

0xfb99,	// (0x0002ec80) list_single_cale_day_pane_fp_t

0x80fa,	// (0x000271e1) list_empty_pane_fp_g1_ParamLimits

0x80fa,	// (0x000271e1) list_empty_pane_fp_g1

0x109e,	// (0x00020185) list_empty_pane_fp_t1

0x10ac,	// (0x00020193) list_empty_pane_fp_t2

0x0001,

0xfba0,	// (0x0002ec87) list_empty_pane_fp_t

0x80fa,	// (0x000271e1) list_single_heading_pane_fp_g1_ParamLimits

0x80fa,	// (0x000271e1) list_single_heading_pane_fp_g1

0x0275,	// (0x0001f35c) list_single_heading_pane_fp_g2_ParamLimits

0x0275,	// (0x0001f35c) list_single_heading_pane_fp_g2

0x0f29,	// (0x00020010) list_single_heading_pane_fp_g3_ParamLimits

0x0f29,	// (0x00020010) list_single_heading_pane_fp_g3

0x0002,

0xfba5,	// (0x0002ec8c) list_single_heading_pane_fp_g_ParamLimits

0xfba5,	// (0x0002ec8c) list_single_heading_pane_fp_g

0x10ba,	// (0x000201a1) list_single_heading_pane_fp_t1_ParamLimits

0x10ba,	// (0x000201a1) list_single_heading_pane_fp_t1

0x10cc,	// (0x000201b3) list_single_heading_pane_fp_t2_ParamLimits

0x10cc,	// (0x000201b3) list_single_heading_pane_fp_t2

0x0001,

0xfbac,	// (0x0002ec93) list_single_heading_pane_fp_t_ParamLimits

0xfbac,	// (0x0002ec93) list_single_heading_pane_fp_t

0x420f,	// (0x000232f6) aid_size_cell_fast

0x39ae,	// (0x00022a95) soft_indicator_pane_cp1_t1

0x4249,	// (0x00023330) cell_app_pane_cp2_ParamLimits

0x4249,	// (0x00023330) cell_app_pane_cp2

0x276e,	// (0x00021855) fep_hwr_candidate_drop_down_list_pane

0xdaa9,	// (0x0002cb90) fep_hwr_candidate_pane_g3_ParamLimits

0xdaa9,	// (0x0002cb90) fep_hwr_candidate_pane_g3

0xdab6,	// (0x0002cb9d) fep_hwr_candidate_pane_g4_ParamLimits

0xdab6,	// (0x0002cb9d) fep_hwr_candidate_pane_g4

0x0002,

0xfb20,	// (0x0002ec07) fep_hwr_candidate_pane_g_ParamLimits

0xfb20,	// (0x0002ec07) fep_hwr_candidate_pane_g

0x7bce,	// (0x00026cb5) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7bce,	// (0x00026cb5) fep_vkb_candidate_drop_down_list_pane

0x7fd1,	// (0x000270b8) fep_vkb_candidate_pane_g3

0x7fd9,	// (0x000270c0) fep_vkb_candidate_pane_g4

0x0002,

0xfb4d,	// (0x0002ec34) fep_vkb_candidate_pane_g

0x7cd9,	// (0x00026dc0) cell_hwr_candidate_pane_g1_ParamLimits

0x7ff0,	// (0x000270d7) cell_hwr_candidate_pane_g3_ParamLimits

0x7ff0,	// (0x000270d7) cell_hwr_candidate_pane_g3

0x8011,	// (0x000270f8) cell_hwr_candidate_pane_g4_ParamLimits

0x8011,	// (0x000270f8) cell_hwr_candidate_pane_g4

0x0002,

0xfb67,	// (0x0002ec4e) cell_hwr_candidate_pane_g_ParamLimits

0xfb67,	// (0x0002ec4e) cell_hwr_candidate_pane_g

0x8032,	// (0x00027119) cell_vkb_candidate_pane_g3_ParamLimits

0x8032,	// (0x00027119) cell_vkb_candidate_pane_g3

0x804d,	// (0x00027134) cell_vkb_candidate_pane_g4_ParamLimits

0x804d,	// (0x00027134) cell_vkb_candidate_pane_g4

0x811e,	// (0x00027205) cell_app_pane_cp2_g1_ParamLimits

0x811e,	// (0x00027205) cell_app_pane_cp2_g1

0x813c,	// (0x00027223) cell_app_pane_cp2_g2_ParamLimits

0x813c,	// (0x00027223) cell_app_pane_cp2_g2

0x0001,

0xfbb1,	// (0x0002ec98) cell_app_pane_cp2_g_ParamLimits

0xfbb1,	// (0x0002ec98) cell_app_pane_cp2_g

0x8148,	// (0x0002722f) cell_app_pane_cp2_t1_ParamLimits

0x8148,	// (0x0002722f) cell_app_pane_cp2_t1

0x400f,	// (0x000230f6) grid_highlight_pane_cp1_ParamLimits

0x400f,	// (0x000230f6) grid_highlight_pane_cp1

0x29aa,	// (0x00021a91) cell_hwr_candidate_pane_cp1_ParamLimits

0x29aa,	// (0x00021a91) cell_hwr_candidate_pane_cp1

0x7cd9,	// (0x00026dc0) fep_hwr_candidate_drop_down_list_pane_g1

0x815a,	// (0x00027241) fep_hwr_candidate_drop_down_list_pane_g2

0x8167,	// (0x0002724e) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x0002ec9d) fep_hwr_candidate_drop_down_list_pane_g

0x29c9,	// (0x00021ab0) fep_hwr_candidate_drop_down_list_scroll_pane

0x29d2,	// (0x00021ab9) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x29d2,	// (0x00021ab9) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x29df,	// (0x00021ac6) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x29df,	// (0x00021ac6) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x29ec,	// (0x00021ad3) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x29ec,	// (0x00021ad3) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x8032,	// (0x00027119) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8032,	// (0x00027119) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x804d,	// (0x00027134) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x804d,	// (0x00027134) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x29f9,	// (0x00021ae0) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x29f9,	// (0x00021ae0) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2a14,	// (0x00021afb) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2a14,	// (0x00021afb) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2a2f,	// (0x00021b16) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2a2f,	// (0x00021b16) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbd,	// (0x0002eca4) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbd,	// (0x0002eca4) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x8174,	// (0x0002725b) cell_vkb_candidate_pane_cp1_ParamLimits

0x8174,	// (0x0002725b) cell_vkb_candidate_pane_cp1

0x7cd9,	// (0x00026dc0) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7cd9,	// (0x00026dc0) fep_vkb_candidate_drop_down_list_pane_g1

0x815a,	// (0x00027241) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x815a,	// (0x00027241) fep_vkb_candidate_drop_down_list_pane_g2

0x8167,	// (0x0002724e) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x8167,	// (0x0002724e) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x0002ec9d) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb6,	// (0x0002ec9d) fep_vkb_candidate_drop_down_list_pane_g

0x8194,	// (0x0002727b) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x8194,	// (0x0002727b) fep_vkb_candidate_drop_down_list_scroll_pane

0x81a1,	// (0x00027288) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x81a1,	// (0x00027288) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x81ae,	// (0x00027295) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x81ae,	// (0x00027295) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x81ba,	// (0x000272a1) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x81ba,	// (0x000272a1) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7ff0,	// (0x000270d7) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7ff0,	// (0x000270d7) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x8011,	// (0x000270f8) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8011,	// (0x000270f8) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x81c6,	// (0x000272ad) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x81c6,	// (0x000272ad) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x81e7,	// (0x000272ce) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x81e7,	// (0x000272ce) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x8208,	// (0x000272ef) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8208,	// (0x000272ef) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbce,	// (0x0002ecb5) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbce,	// (0x0002ecb5) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xd009,	// (0x0002c0f0) title_pane_g1_ParamLimits

0xd01c,	// (0x0002c103) title_pane_g2_ParamLimits

0xf54e,	// (0x0002e635) title_pane_g_ParamLimits

0x464f,	// (0x00023736) aid_call2_pane

0x4657,	// (0x0002373e) aid_call_pane

0x465f,	// (0x00023746) popup_clock_analogue_window_g1

0x465f,	// (0x00023746) popup_clock_analogue_window_g2

0x1907,	// (0x000209ee) popup_clock_analogue_window_g3

0x1910,	// (0x000209f7) popup_clock_analogue_window_g4

0x36cb,	// (0x000227b2) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0002e7df) popup_clock_analogue_window_g

0x1918,	// (0x000209ff) popup_clock_analogue_window_t1

0x1926,	// (0x00020a0d) clock_digital_number_pane_ParamLimits

0x1926,	// (0x00020a0d) clock_digital_number_pane

0x1932,	// (0x00020a19) clock_digital_number_pane_cp02_ParamLimits

0x1932,	// (0x00020a19) clock_digital_number_pane_cp02

0x193e,	// (0x00020a25) clock_digital_number_pane_cp03_ParamLimits

0x193e,	// (0x00020a25) clock_digital_number_pane_cp03

0x194a,	// (0x00020a31) clock_digital_number_pane_cp04_ParamLimits

0x194a,	// (0x00020a31) clock_digital_number_pane_cp04

0x1956,	// (0x00020a3d) clock_digital_separator_pane_ParamLimits

0x1956,	// (0x00020a3d) clock_digital_separator_pane

0x1962,	// (0x00020a49) popup_clock_digital_window_t1_ParamLimits

0x1962,	// (0x00020a49) popup_clock_digital_window_t1

0x36cb,	// (0x000227b2) clock_digital_number_pane_g1

0x36cb,	// (0x000227b2) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0002e7ea) clock_digital_number_pane_g

0x36cb,	// (0x000227b2) clock_digital_separator_pane_g1

0x36cb,	// (0x000227b2) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0002e7ea) clock_digital_separator_pane_g

0xd718,	// (0x0002c7ff) aid_fill_nsta_ParamLimits

0xd84e,	// (0x0002c935) indicator_nsta_pane_ParamLimits

0x528e,	// (0x00024375) popup_clock_analogue_window

0x528e,	// (0x00024375) popup_clock_digital_window

0x41d0,	// (0x000232b7) grid_indicator_nsta_pane_ParamLimits

0x7443,	// (0x0002652a) clock_nsta_pane_t2

0x0001,

0xfaa0,	// (0x0002eb87) clock_nsta_pane_t

0x18cb,	// (0x000209b2) aid_size_max_handle

0x18d5,	// (0x000209bc) aid_size_min_handle

0x4c77,	// (0x00023d5e) editor_scroll_pane

0x8223,	// (0x0002730a) ex_editor_pane

0x417d,	// (0x00023264) scroll_pane_cp13

0x3fae,	// (0x00023095) scroll_pane_cp14

0x468e,	// (0x00023775) scroll_pane_cp36

0xd4a3,	// (0x0002c58a) list_single_graphic_hl_pane_cp2_ParamLimits

0xd4a3,	// (0x0002c58a) list_single_graphic_hl_pane_cp2

0xbc31,	// (0x0002ad18) list_single_graphic_hl_pane_ParamLimits

0xbc31,	// (0x0002ad18) list_single_graphic_hl_pane

0x10e2,	// (0x000201c9) aid_size_min_hl_cp1

0x822b,	// (0x00027312) list_highlight_pane_cp34_ParamLimits

0x822b,	// (0x00027312) list_highlight_pane_cp34

0x823c,	// (0x00027323) list_single_graphic_hl_pane_g1_ParamLimits

0x823c,	// (0x00027323) list_single_graphic_hl_pane_g1

0xbc57,	// (0x0002ad3e) list_single_graphic_hl_pane_g2_ParamLimits

0xbc57,	// (0x0002ad3e) list_single_graphic_hl_pane_g2

0xbc57,	// (0x0002ad3e) list_single_graphic_hl_pane_g3_ParamLimits

0xbc57,	// (0x0002ad3e) list_single_graphic_hl_pane_g3

0x018a,	// (0x0001f271) list_single_graphic_hl_pane_g4_ParamLimits

0x018a,	// (0x0001f271) list_single_graphic_hl_pane_g4

0xbc63,	// (0x0002ad4a) list_single_graphic_hl_pane_g5_ParamLimits

0xbc63,	// (0x0002ad4a) list_single_graphic_hl_pane_g5

0x0004,

0xfbdf,	// (0x0002ecc6) list_single_graphic_hl_pane_g_ParamLimits

0xfbdf,	// (0x0002ecc6) list_single_graphic_hl_pane_g

0xbc77,	// (0x0002ad5e) list_single_graphic_hl_pane_t1_ParamLimits

0xbc77,	// (0x0002ad5e) list_single_graphic_hl_pane_t1

0x8249,	// (0x00027330) aid_size_min_hl_cp2

0x8252,	// (0x00027339) list_highlight_pane_cp34_cp2_ParamLimits

0x8252,	// (0x00027339) list_highlight_pane_cp34_cp2

0x823c,	// (0x00027323) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x823c,	// (0x00027323) list_single_graphic_hl_pane_g1_cp2

0x825f,	// (0x00027346) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x825f,	// (0x00027346) list_single_graphic_hl_pane_g2_cp2

0x826b,	// (0x00027352) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x826b,	// (0x00027352) list_single_graphic_hl_pane_g3_cp2

0x47c3,	// (0x000238aa) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x47c3,	// (0x000238aa) list_single_graphic_hl_pane_g4_cp2

0x8279,	// (0x00027360) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x8279,	// (0x00027360) list_single_graphic_hl_pane_g5_cp2

0xc08c,	// (0x0002b173) control_pane_g4_ParamLimits

0xc08c,	// (0x0002b173) control_pane_g4

0x4fb1,	// (0x00024098) bg_popup_sub_pane_cp10_ParamLimits

0x7a75,	// (0x00026b5c) list_choice_list_pane_ParamLimits

0x7a84,	// (0x00026b6b) scroll_pane_cp23

0x3a3e,	// (0x00022b25) bg_popup_preview_window_pane_cp02_ParamLimits

0x809e,	// (0x00027185) list_preview_fixed_pane_ParamLimits

0x80b4,	// (0x0002719b) list_preview_fixed_pane_cp_ParamLimits

0x80b4,	// (0x0002719b) list_preview_fixed_pane_cp

0x80c0,	// (0x000271a7) popup_preview_fixed_window_g1_ParamLimits

0x80c0,	// (0x000271a7) popup_preview_fixed_window_g1

0x80cc,	// (0x000271b3) popup_preview_fixed_window_g2_ParamLimits

0x80cc,	// (0x000271b3) popup_preview_fixed_window_g2

0x0002,

0xfb6e,	// (0x0002ec55) popup_preview_fixed_window_g_ParamLimits

0xfb6e,	// (0x0002ec55) popup_preview_fixed_window_g

0x183f,	// (0x00020926) aid_navi_side_left_pane_ParamLimits

0x1854,	// (0x0002093b) aid_navi_side_right_pane_ParamLimits

0x186c,	// (0x00020953) navi_icon_pane_stacon_ParamLimits

0x1880,	// (0x00020967) navi_navi_pane_stacon_ParamLimits

0x186c,	// (0x00020953) navi_text_pane_stacon_ParamLimits

0x36c1,	// (0x000227a8) main_text_info_pane

0x82a3,	// (0x0002738a) listscroll_text_info_pane

0x82ab,	// (0x00027392) list_text_info_pane_ParamLimits

0x82ab,	// (0x00027392) list_text_info_pane

0x82ba,	// (0x000273a1) scroll_pane_cp24_ParamLimits

0x82ba,	// (0x000273a1) scroll_pane_cp24

0xe3a3,	// (0x0002d48a) list_text_info_pane_t1_ParamLimits

0xe3a3,	// (0x0002d48a) list_text_info_pane_t1

0xc1ef,	// (0x0002b2d6) popup_fast_swap2_window_ParamLimits

0xc1ef,	// (0x0002b2d6) popup_fast_swap2_window

0x830d,	// (0x000273f4) aid_size_cell_fast2

0x36c1,	// (0x000227a8) bg_popup_window_pane_cp17

0x591f,	// (0x00024a06) heading_pane_cp2

0x3c81,	// (0x00022d68) listscroll_fast2_pane

0x8317,	// (0x000273fe) grid_fast2_pane

0x8321,	// (0x00027408) listscroll_fast2_pane_g1

0x8329,	// (0x00027410) listscroll_fast2_pane_g2

0x0001,

0xfbea,	// (0x0002ecd1) listscroll_fast2_pane_g

0x417d,	// (0x00023264) scroll_pane_cp26

0x8333,	// (0x0002741a) cell_fast2_pane_ParamLimits

0x8333,	// (0x0002741a) cell_fast2_pane

0x8348,	// (0x0002742f) cell_fast2_pane_g1

0x8351,	// (0x00027438) cell_fast2_pane_g2

0x835a,	// (0x00027441) cell_fast2_pane_g3

0x0002,

0xfbef,	// (0x0002ecd6) cell_fast2_pane_g

0x3d6b,	// (0x00022e52) grid_highlight_pane_cp9

0x3d80,	// (0x00022e67) main_eswt_pane_ParamLimits

0x3d80,	// (0x00022e67) main_eswt_pane

0x82cf,	// (0x000273b6) list_single_text_info_pane

0x8362,	// (0x00027449) eswt_ctrl_button_pane

0x8362,	// (0x00027449) eswt_ctrl_canvas_pane

0x836a,	// (0x00027451) eswt_ctrl_combo_pane

0x8362,	// (0x00027449) eswt_ctrl_default_pane

0x8362,	// (0x00027449) eswt_ctrl_label_pane

0x8372,	// (0x00027459) eswt_ctrl_wait_pane

0x837a,	// (0x00027461) eswt_shell_pane

0x36c1,	// (0x000227a8) listscroll_eswt_app_pane

0x839a,	// (0x00027481) popup_eswt_tasktip_window_ParamLimits

0x839a,	// (0x00027481) popup_eswt_tasktip_window

0x5523,	// (0x0002460a) bg_popup_window_pane_cp18

0x83ab,	// (0x00027492) eswt_control_pane_g1_ParamLimits

0x83ab,	// (0x00027492) eswt_control_pane_g1

0x83b8,	// (0x0002749f) eswt_control_pane_g2_ParamLimits

0x83b8,	// (0x0002749f) eswt_control_pane_g2

0x83c5,	// (0x000274ac) eswt_control_pane_g3_ParamLimits

0x83c5,	// (0x000274ac) eswt_control_pane_g3

0x83d2,	// (0x000274b9) eswt_control_pane_g4_ParamLimits

0x83d2,	// (0x000274b9) eswt_control_pane_g4

0x0003,

0xfbf6,	// (0x0002ecdd) eswt_control_pane_g_ParamLimits

0xfbf6,	// (0x0002ecdd) eswt_control_pane_g

0x400f,	// (0x000230f6) bg_button_pane_ParamLimits

0x400f,	// (0x000230f6) bg_button_pane

0x3d80,	// (0x00022e67) common_borders_pane_copy2_ParamLimits

0x3d80,	// (0x00022e67) common_borders_pane_copy2

0x83df,	// (0x000274c6) control_button_pane_g1_ParamLimits

0x83df,	// (0x000274c6) control_button_pane_g1

0x83eb,	// (0x000274d2) control_button_pane_g2_ParamLimits

0x83eb,	// (0x000274d2) control_button_pane_g2

0x83f7,	// (0x000274de) control_button_pane_g3_ParamLimits

0x83f7,	// (0x000274de) control_button_pane_g3

0x0002,

0xfbff,	// (0x0002ece6) control_button_pane_g_ParamLimits

0xfbff,	// (0x0002ece6) control_button_pane_g

0x840b,	// (0x000274f2) control_button_pane_t1

0x8419,	// (0x00027500) control_button_pane_t2

0x0001,

0xfc06,	// (0x0002eced) control_button_pane_t

0x54af,	// (0x00024596) bg_button_pane_g1

0x54b7,	// (0x0002459e) bg_button_pane_g2

0x54bf,	// (0x000245a6) bg_button_pane_g3

0x54c7,	// (0x000245ae) bg_button_pane_g4

0x54cf,	// (0x000245b6) bg_button_pane_g5

0x54d7,	// (0x000245be) bg_button_pane_g6

0x54df,	// (0x000245c6) bg_button_pane_g7

0x54e7,	// (0x000245ce) bg_button_pane_g8

0x54ef,	// (0x000245d6) bg_button_pane_g9

0x0008,

0xf85a,	// (0x0002e941) bg_button_pane_g

0x7a30,	// (0x00026b17) common_borders_pane_ParamLimits

0x7a30,	// (0x00026b17) common_borders_pane

0x83ab,	// (0x00027492) eswt_control_pane_g1_copy1_ParamLimits

0x83ab,	// (0x00027492) eswt_control_pane_g1_copy1

0x83b8,	// (0x0002749f) eswt_control_pane_g2_copy1_ParamLimits

0x83b8,	// (0x0002749f) eswt_control_pane_g2_copy1

0x83c5,	// (0x000274ac) eswt_control_pane_g3_copy1_ParamLimits

0x83c5,	// (0x000274ac) eswt_control_pane_g3_copy1

0x83d2,	// (0x000274b9) eswt_control_pane_g4_copy1_ParamLimits

0x83d2,	// (0x000274b9) eswt_control_pane_g4_copy1

0x7a6b,	// (0x00026b52) bg_eswt_ctrl_canvas_pane_g1

0x7a30,	// (0x00026b17) common_borders_pane_cp2_ParamLimits

0x7a30,	// (0x00026b17) common_borders_pane_cp2

0x7a30,	// (0x00026b17) common_borders_pane_cp3_ParamLimits

0x7a30,	// (0x00026b17) common_borders_pane_cp3

0x8427,	// (0x0002750e) separator_horizontal_pane

0x842f,	// (0x00027516) separator_vertical_pane

0x83ab,	// (0x00027492) eswt_control_pane_g1_copy2_ParamLimits

0x83ab,	// (0x00027492) eswt_control_pane_g1_copy2

0x83b8,	// (0x0002749f) eswt_control_pane_g2_copy2_ParamLimits

0x83b8,	// (0x0002749f) eswt_control_pane_g2_copy2

0x83c5,	// (0x000274ac) eswt_control_pane_g3_copy2_ParamLimits

0x83c5,	// (0x000274ac) eswt_control_pane_g3_copy2

0x83d2,	// (0x000274b9) eswt_control_pane_g4_copy2_ParamLimits

0x83d2,	// (0x000274b9) eswt_control_pane_g4_copy2

0x36c1,	// (0x000227a8) common_borders_pane_cp4

0x8438,	// (0x0002751f) separator_horizontal_pane_g1

0x8441,	// (0x00027528) separator_horizontal_pane_g2

0x844a,	// (0x00027531) separator_horizontal_pane_g3

0x0002,

0xfc0b,	// (0x0002ecf2) separator_horizontal_pane_g

0x83ab,	// (0x00027492) eswt_control_pane_g1_copy3_ParamLimits

0x83ab,	// (0x00027492) eswt_control_pane_g1_copy3

0x83b8,	// (0x0002749f) eswt_control_pane_g2_copy3_ParamLimits

0x83b8,	// (0x0002749f) eswt_control_pane_g2_copy3

0x83c5,	// (0x000274ac) eswt_control_pane_g3_copy3_ParamLimits

0x83c5,	// (0x000274ac) eswt_control_pane_g3_copy3

0x83d2,	// (0x000274b9) eswt_control_pane_g4_copy3_ParamLimits

0x83d2,	// (0x000274b9) eswt_control_pane_g4_copy3

0x36c1,	// (0x000227a8) common_borders_pane_cp5

0x8453,	// (0x0002753a) separator_vertical_pane_g1

0x845c,	// (0x00027543) separator_vertical_pane_g2

0x8465,	// (0x0002754c) separator_vertical_pane_g3

0x0002,

0xfc12,	// (0x0002ecf9) separator_vertical_pane_g

0x83ab,	// (0x00027492) eswt_control_pane_g1_copy4_ParamLimits

0x83ab,	// (0x00027492) eswt_control_pane_g1_copy4

0x83b8,	// (0x0002749f) eswt_control_pane_g2_copy4_ParamLimits

0x83b8,	// (0x0002749f) eswt_control_pane_g2_copy4

0x83c5,	// (0x000274ac) eswt_control_pane_g3_copy4_ParamLimits

0x83c5,	// (0x000274ac) eswt_control_pane_g3_copy4

0x83d2,	// (0x000274b9) eswt_control_pane_g4_copy4_ParamLimits

0x83d2,	// (0x000274b9) eswt_control_pane_g4_copy4

0x846e,	// (0x00027555) eswt_ctrl_combo_button_pane

0x8476,	// (0x0002755d) eswt_ctrl_input_pane

0x847e,	// (0x00027565) popup_choice_list_window_cp70

0x8486,	// (0x0002756d) eswt_ctrl_input_pane_t1

0x36c1,	// (0x000227a8) input_focus_pane_cp70

0x7a30,	// (0x00026b17) bg_button_pane_cp70_ParamLimits

0x7a30,	// (0x00026b17) bg_button_pane_cp70

0x8494,	// (0x0002757b) eswt_ctrl_combo_button_pane_g1

0x849c,	// (0x00027583) wait_bar_pane_cp70

0x5523,	// (0x0002460a) bg_popup_window_pane_cp70_ParamLimits

0x5523,	// (0x0002460a) bg_popup_window_pane_cp70

0x84a4,	// (0x0002758b) popup_eswt_tasktip_window_t1

0x84ba,	// (0x000275a1) wait_bar_pane_cp71_ParamLimits

0x84ba,	// (0x000275a1) wait_bar_pane_cp71

0x84c6,	// (0x000275ad) grid_eswt_app_pane

0x449b,	// (0x00023582) scroll_pane_cp70

0xe3c0,	// (0x0002d4a7) cell_eswt_app_pane_ParamLimits

0xe3c0,	// (0x0002d4a7) cell_eswt_app_pane

0xe3ea,	// (0x0002d4d1) cell_eswt_app_pane_g1_ParamLimits

0xe3ea,	// (0x0002d4d1) cell_eswt_app_pane_g1

0xe419,	// (0x0002d500) cell_eswt_app_pane_g2_ParamLimits

0xe419,	// (0x0002d500) cell_eswt_app_pane_g2

0x0001,

0xfc19,	// (0x0002ed00) cell_eswt_app_pane_g_ParamLimits

0xfc19,	// (0x0002ed00) cell_eswt_app_pane_g

0xe43d,	// (0x0002d524) cell_eswt_app_pane_t1_ParamLimits

0xe43d,	// (0x0002d524) cell_eswt_app_pane_t1

0x8588,	// (0x0002766f) grid_highlight_pane_cp70_ParamLimits

0x8588,	// (0x0002766f) grid_highlight_pane_cp70

0x4b58,	// (0x00023c3f) set_content_pane_g1

0xd6d5,	// (0x0002c7bc) status_small_volume_pane

0x2a4a,	// (0x00021b31) status_small_volume_pane_g1

0x2a52,	// (0x00021b39) volume_small2_pane

0x2a5b,	// (0x00021b42) volume_small2_pane_g1

0x2a64,	// (0x00021b4b) volume_small2_pane_g2

0x2a6d,	// (0x00021b54) volume_small2_pane_g3

0x2a76,	// (0x00021b5d) volume_small2_pane_g4

0x2a7f,	// (0x00021b66) volume_small2_pane_g5

0x2a88,	// (0x00021b6f) volume_small2_pane_g6

0x2a91,	// (0x00021b78) volume_small2_pane_g7

0x2a9a,	// (0x00021b81) volume_small2_pane_g8

0x2aa3,	// (0x00021b8a) volume_small2_pane_g9

0x2aac,	// (0x00021b93) volume_small2_pane_g10

0x0009,

0xfc1e,	// (0x0002ed05) volume_small2_pane_g

0x7e21,	// (0x00026f08) fep_vkb_top_text_pane_g1_ParamLimits

0xe34b,	// (0x0002d432) fep_vkb_top_text_pane_t1_ParamLimits

0x80d8,	// (0x000271bf) popup_preview_fixed_window_g3_ParamLimits

0x80d8,	// (0x000271bf) popup_preview_fixed_window_g3

0xc7fe,	// (0x0002b8e5) popup_toolbar_trans_pane

0xdd99,	// (0x0002ce80) aid_height_set_list_ParamLimits

0x6892,	// (0x00025979) aid_size_parent_ParamLimits

0x4fb1,	// (0x00024098) list_highlight_pane_cp2_ParamLimits

0x4b58,	// (0x00023c3f) set_content_pane_g1_ParamLimits

0xbc44,	// (0x0002ad2b) list_single_image_pane_ParamLimits

0xbc44,	// (0x0002ad2b) list_single_image_pane

0xe46f,	// (0x0002d556) aid_size_cell_image_ParamLimits

0xe46f,	// (0x0002d556) aid_size_cell_image

0xe47c,	// (0x0002d563) grid_single_image_pane_ParamLimits

0xe47c,	// (0x0002d563) grid_single_image_pane

0x85ad,	// (0x00027694) list_single_image_pane_g1_ParamLimits

0x85ad,	// (0x00027694) list_single_image_pane_g1

0x85b9,	// (0x000276a0) list_single_image_pane_g2_ParamLimits

0x85b9,	// (0x000276a0) list_single_image_pane_g2

0x0001,

0xfc33,	// (0x0002ed1a) list_single_image_pane_g_ParamLimits

0xfc33,	// (0x0002ed1a) list_single_image_pane_g

0x85cd,	// (0x000276b4) list_single_image_pane_t1_ParamLimits

0x85cd,	// (0x000276b4) list_single_image_pane_t1

0xe488,	// (0x0002d56f) cell_image_list_pane_ParamLimits

0xe488,	// (0x0002d56f) cell_image_list_pane

0xe49c,	// (0x0002d583) cell_image_list_pane_g1

0xe4a5,	// (0x0002d58c) cell_image_list_pane_g2

0x0001,

0xfc38,	// (0x0002ed1f) cell_image_list_pane_g

0x8609,	// (0x000276f0) aid_size_cell_tb_trans_pane

0x400f,	// (0x000230f6) bg_tb_trans_pane

0x861b,	// (0x00027702) grid_tb_trans_pane

0x54af,	// (0x00024596) bg_tb_trans_pane_g1

0x54b7,	// (0x0002459e) bg_tb_trans_pane_g2

0x54bf,	// (0x000245a6) bg_tb_trans_pane_g3

0x54c7,	// (0x000245ae) bg_tb_trans_pane_g4

0x54cf,	// (0x000245b6) bg_tb_trans_pane_g5

0x54e7,	// (0x000245ce) bg_tb_trans_pane_g6

0x54ef,	// (0x000245d6) bg_tb_trans_pane_g7

0x54d7,	// (0x000245be) bg_tb_trans_pane_g8

0x54df,	// (0x000245c6) bg_tb_trans_pane_g9

0x0008,

0xfc3d,	// (0x0002ed24) bg_tb_trans_pane_g

0x862f,	// (0x00027716) cell_toolbar_trans_pane_ParamLimits

0x862f,	// (0x00027716) cell_toolbar_trans_pane

0x7a6b,	// (0x00026b52) cell_toolbar_trans_pane_g1

0xe12e,	// (0x0002d215) list_form2_midp_pane_t1

0xe13c,	// (0x0002d223) list_form2_midp_pane_t2

0x0001,

0xfae6,	// (0x0002ebcd) list_form2_midp_pane_t

0x7632,	// (0x00026719) scroll_pane_cp51_ParamLimits

0x77ee,	// (0x000268d5) form2_midp_wait_pane_g1

0x77f7,	// (0x000268de) form2_midp_wait_pane_g2

0x7800,	// (0x000268e7) form2_midp_wait_pane_g3

0x0002,

0xfafb,	// (0x0002ebe2) form2_midp_wait_pane_g

0x37b5,	// (0x0002289c) list_highlight_pane_cp21_ParamLimits

0x784e,	// (0x00026935) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x785d,	// (0x00026944) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6a42,	// (0x00025b29) list_single_2graphic_im_pane_ParamLimits

0x6a42,	// (0x00025b29) list_single_2graphic_im_pane

0x8655,	// (0x0002773c) list_single_2graphic_im_pane_g1_ParamLimits

0x8655,	// (0x0002773c) list_single_2graphic_im_pane_g1

0x8666,	// (0x0002774d) list_single_2graphic_im_pane_g2_ParamLimits

0x8666,	// (0x0002774d) list_single_2graphic_im_pane_g2

0x8672,	// (0x00027759) list_single_2graphic_im_pane_g3_ParamLimits

0x8672,	// (0x00027759) list_single_2graphic_im_pane_g3

0x0003,

0xfc50,	// (0x0002ed37) list_single_2graphic_im_pane_g_ParamLimits

0xfc50,	// (0x0002ed37) list_single_2graphic_im_pane_g

0x8692,	// (0x00027779) list_single_2graphic_im_pane_t1_ParamLimits

0x8692,	// (0x00027779) list_single_2graphic_im_pane_t1

0x80e4,	// (0x000271cb) list_single_graphic_2heading_pane_fp_ParamLimits

0x80e4,	// (0x000271cb) list_single_graphic_2heading_pane_fp

0x0f54,	// (0x0002003b) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0f54,	// (0x0002003b) list_single_graphic_2heading_pane_fp_g1

0x80fa,	// (0x000271e1) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x80fa,	// (0x000271e1) list_single_graphic_2heading_pane_fp_g2

0x0275,	// (0x0001f35c) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0275,	// (0x0001f35c) list_single_graphic_2heading_pane_fp_g3

0x0f29,	// (0x00020010) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x0f29,	// (0x00020010) list_single_graphic_2heading_pane_fp_g4

0x8106,	// (0x000271ed) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x8106,	// (0x000271ed) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x0002ec65) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0002ec65) list_single_graphic_2heading_pane_fp_g

0x112d,	// (0x00020214) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x112d,	// (0x00020214) list_single_graphic_2heading_pane_fp_t1

0x0f8c,	// (0x00020073) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0f8c,	// (0x00020073) list_single_graphic_2heading_pane_fp_t2

0x1143,	// (0x0002022a) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x1143,	// (0x0002022a) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc59,	// (0x0002ed40) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc59,	// (0x0002ed40) list_single_graphic_2heading_pane_fp_t

0x7af7,	// (0x00026bde) fep_hwr_write_pane_g5_ParamLimits

0x7af7,	// (0x00026bde) fep_hwr_write_pane_g5

0x7b03,	// (0x00026bea) fep_hwr_write_pane_g6_ParamLimits

0x7b03,	// (0x00026bea) fep_hwr_write_pane_g6

0x837a,	// (0x00027461) eswt_shell_pane_ParamLimits

0x5523,	// (0x0002460a) bg_popup_window_pane_cp18_ParamLimits

0x67e0,	// (0x000258c7) heading_pane_cp70

0x84a4,	// (0x0002758b) popup_eswt_tasktip_window_t1_ParamLimits

0xd773,	// (0x0002c85a) aid_touch_tab_arrow_left

0xd789,	// (0x0002c870) aid_touch_tab_arrow_right

0xd034,	// (0x0002c11b) title_pane_g3_ParamLimits

0xd034,	// (0x0002c11b) title_pane_g3

0x3fce,	// (0x000230b5) set_value_pane_g1

0xc7fe,	// (0x0002b8e5) popup_toolbar_trans_pane_ParamLimits

0x8609,	// (0x000276f0) aid_size_cell_tb_trans_pane_ParamLimits

0x400f,	// (0x000230f6) bg_tb_trans_pane_ParamLimits

0x861b,	// (0x00027702) grid_tb_trans_pane_ParamLimits

0x3a3e,	// (0x00022b25) cont_note_pane_ParamLimits

0x3a3e,	// (0x00022b25) cont_note_pane

0x3d80,	// (0x00022e67) cont_snote2_single_text_pane_ParamLimits

0x3d80,	// (0x00022e67) cont_snote2_single_text_pane

0x3d80,	// (0x00022e67) cont_snote2_single_graphic_pane_ParamLimits

0x3d80,	// (0x00022e67) cont_snote2_single_graphic_pane

0x5b35,	// (0x00024c1c) cont_note_wait_pane_ParamLimits

0x5b35,	// (0x00024c1c) cont_note_wait_pane

0x5b35,	// (0x00024c1c) cont_note_image_pane_ParamLimits

0x5b35,	// (0x00024c1c) cont_note_image_pane

0x86c3,	// (0x000277aa) popup_note2_window_g1_ParamLimits

0x86c3,	// (0x000277aa) popup_note2_window_g1

0x86f4,	// (0x000277db) popup_note2_window_t1_ParamLimits

0x86f4,	// (0x000277db) popup_note2_window_t1

0x8739,	// (0x00027820) popup_note2_window_t2_ParamLimits

0x8739,	// (0x00027820) popup_note2_window_t2

0x877e,	// (0x00027865) popup_note2_window_t3_ParamLimits

0x877e,	// (0x00027865) popup_note2_window_t3

0x87c3,	// (0x000278aa) popup_note2_window_t4_ParamLimits

0x87c3,	// (0x000278aa) popup_note2_window_t4

0x3ab6,	// (0x00022b9d) popup_note2_window_t5_ParamLimits

0x3ab6,	// (0x00022b9d) popup_note2_window_t5

0x0004,

0xfc65,	// (0x0002ed4c) popup_note2_window_t_ParamLimits

0xfc65,	// (0x0002ed4c) popup_note2_window_t

0x87f2,	// (0x000278d9) popup_note2_image_window_g1_ParamLimits

0x87f2,	// (0x000278d9) popup_note2_image_window_g1

0x87fe,	// (0x000278e5) popup_note2_image_window_g2_ParamLimits

0x87fe,	// (0x000278e5) popup_note2_image_window_g2

0x0001,

0xfc70,	// (0x0002ed57) popup_note2_image_window_g_ParamLimits

0xfc70,	// (0x0002ed57) popup_note2_image_window_g

0x8810,	// (0x000278f7) popup_note2_image_window_t1_ParamLimits

0x8810,	// (0x000278f7) popup_note2_image_window_t1

0x8828,	// (0x0002790f) popup_note2_image_window_t2_ParamLimits

0x8828,	// (0x0002790f) popup_note2_image_window_t2

0x8840,	// (0x00027927) popup_note2_image_window_t3_ParamLimits

0x8840,	// (0x00027927) popup_note2_image_window_t3

0x0002,

0xfc75,	// (0x0002ed5c) popup_note2_image_window_t_ParamLimits

0xfc75,	// (0x0002ed5c) popup_note2_image_window_t

0x5b43,	// (0x00024c2a) popup_note2_wait_window_g1_ParamLimits

0x5b43,	// (0x00024c2a) popup_note2_wait_window_g1

0x885c,	// (0x00027943) popup_note2_wait_window_g2_ParamLimits

0x885c,	// (0x00027943) popup_note2_wait_window_g2

0x5b5b,	// (0x00024c42) popup_note2_wait_window_g3_ParamLimits

0x5b5b,	// (0x00024c42) popup_note2_wait_window_g3

0x0002,

0xfc7c,	// (0x0002ed63) popup_note2_wait_window_g_ParamLimits

0xfc7c,	// (0x0002ed63) popup_note2_wait_window_g

0x8868,	// (0x0002794f) popup_note2_wait_window_t1_ParamLimits

0x8868,	// (0x0002794f) popup_note2_wait_window_t1

0x8886,	// (0x0002796d) popup_note2_wait_window_t2_ParamLimits

0x8886,	// (0x0002796d) popup_note2_wait_window_t2

0x88a4,	// (0x0002798b) popup_note2_wait_window_t3_ParamLimits

0x88a4,	// (0x0002798b) popup_note2_wait_window_t3

0x88b6,	// (0x0002799d) popup_note2_wait_window_t4_ParamLimits

0x88b6,	// (0x0002799d) popup_note2_wait_window_t4

0x0003,

0xfc83,	// (0x0002ed6a) popup_note2_wait_window_t_ParamLimits

0xfc83,	// (0x0002ed6a) popup_note2_wait_window_t

0x88c8,	// (0x000279af) wait_bar2_pane_ParamLimits

0x88c8,	// (0x000279af) wait_bar2_pane

0x88e0,	// (0x000279c7) popup_snote2_single_text_window_g1_ParamLimits

0x88e0,	// (0x000279c7) popup_snote2_single_text_window_g1

0x8908,	// (0x000279ef) popup_snote2_single_text_window_t1_ParamLimits

0x8908,	// (0x000279ef) popup_snote2_single_text_window_t1

0x8954,	// (0x00027a3b) popup_snote2_single_text_window_t2_ParamLimits

0x8954,	// (0x00027a3b) popup_snote2_single_text_window_t2

0x89a0,	// (0x00027a87) popup_snote2_single_text_window_t3_ParamLimits

0x89a0,	// (0x00027a87) popup_snote2_single_text_window_t3

0x89e1,	// (0x00027ac8) popup_snote2_single_text_window_t4_ParamLimits

0x89e1,	// (0x00027ac8) popup_snote2_single_text_window_t4

0x8a17,	// (0x00027afe) popup_snote2_single_text_window_t5_ParamLimits

0x8a17,	// (0x00027afe) popup_snote2_single_text_window_t5

0x0004,

0xfc8c,	// (0x0002ed73) popup_snote2_single_text_window_t_ParamLimits

0xfc8c,	// (0x0002ed73) popup_snote2_single_text_window_t

0x8a42,	// (0x00027b29) popup_snote2_single_graphic_window_g1_ParamLimits

0x8a42,	// (0x00027b29) popup_snote2_single_graphic_window_g1

0x8a6a,	// (0x00027b51) popup_snote2_single_graphic_window_g2_ParamLimits

0x8a6a,	// (0x00027b51) popup_snote2_single_graphic_window_g2

0x0001,

0xfc97,	// (0x0002ed7e) popup_snote2_single_graphic_window_g_ParamLimits

0xfc97,	// (0x0002ed7e) popup_snote2_single_graphic_window_g

0x8a92,	// (0x00027b79) popup_snote2_single_graphic_window_t1_ParamLimits

0x8a92,	// (0x00027b79) popup_snote2_single_graphic_window_t1

0x8ade,	// (0x00027bc5) popup_snote2_single_graphic_window_t2_ParamLimits

0x8ade,	// (0x00027bc5) popup_snote2_single_graphic_window_t2

0x89a0,	// (0x00027a87) popup_snote2_single_graphic_window_t3_ParamLimits

0x89a0,	// (0x00027a87) popup_snote2_single_graphic_window_t3

0x89e1,	// (0x00027ac8) popup_snote2_single_graphic_window_t4_ParamLimits

0x89e1,	// (0x00027ac8) popup_snote2_single_graphic_window_t4

0x8a17,	// (0x00027afe) popup_snote2_single_graphic_window_t5_ParamLimits

0x8a17,	// (0x00027afe) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9c,	// (0x0002ed83) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9c,	// (0x0002ed83) popup_snote2_single_graphic_window_t

0x74ed,	// (0x000265d4) clock_nsta_pane_cp2_t1

0x74ed,	// (0x000265d4) clock_nsta_pane_cp2_t2

0x0001,

0xfabc,	// (0x0002eba3) clock_nsta_pane_cp2_t

0x06ee,	// (0x0001f7d5) form_field_data_wide_pane_g1_ParamLimits

0x401d,	// (0x00023104) form_field_data_wide_pane_g2_ParamLimits

0x401d,	// (0x00023104) form_field_data_wide_pane_g2

0x4029,	// (0x00023110) form_field_data_wide_pane_g3_ParamLimits

0x4029,	// (0x00023110) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0002e762) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0002e762) form_field_data_wide_pane_g

0xe071,	// (0x0002d158) grid_touch_3_pane_ParamLimits

0xe071,	// (0x0002d158) grid_touch_3_pane

0xe4ae,	// (0x0002d595) cell_touch_3_pane_ParamLimits

0xe4ae,	// (0x0002d595) cell_touch_3_pane

0x7a6b,	// (0x00026b52) cell_touch_3_pane_g1

0x7a6b,	// (0x00026b52) cell_touch_3_pane_g2

0x0001,

0xfb41,	// (0x0002ec28) cell_touch_3_pane_g

0x3ae8,	// (0x00022bcf) cont_query_data_pane

0x3af0,	// (0x00022bd7) cont_query_data_pane_cp1

0x8b5b,	// (0x00027c42) button_value_adjust_pane_cp7

0x8b63,	// (0x00027c4a) query_popup_pane_cp3

0x474b,	// (0x00023832) bg_popup_sub_pane_cp22_ParamLimits

0x1981,	// (0x00020a68) navi_navi_volume_pane_cp2

0x1999,	// (0x00020a80) popup_side_volume_key_window_g2

0x19a5,	// (0x00020a8c) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0002e7f8) popup_side_volume_key_window_g

0x19bf,	// (0x00020aa6) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0002e7ff) popup_side_volume_key_window_t

0x4a19,	// (0x00023b00) popup_side_volume_key_window_ParamLimits

0xb747,	// (0x0002a82e) list_double_graphic_pane_g4_ParamLimits

0xb747,	// (0x0002a82e) list_double_graphic_pane_g4

0xdf12,	// (0x0002cff9) list_single_2heading_msg_pane_ParamLimits

0xdf12,	// (0x0002cff9) list_single_2heading_msg_pane

0xbc8d,	// (0x0002ad74) list_single_2heading_msg_pane_g1_ParamLimits

0xbc8d,	// (0x0002ad74) list_single_2heading_msg_pane_g1

0xbc99,	// (0x0002ad80) list_single_2heading_msg_pane_g2_ParamLimits

0xbc99,	// (0x0002ad80) list_single_2heading_msg_pane_g2

0xbcac,	// (0x0002ad93) list_single_2heading_msg_pane_g3_ParamLimits

0xbcac,	// (0x0002ad93) list_single_2heading_msg_pane_g3

0xbcb8,	// (0x0002ad9f) list_single_2heading_msg_pane_g4_ParamLimits

0xbcb8,	// (0x0002ad9f) list_single_2heading_msg_pane_g4

0x0003,

0xfca7,	// (0x0002ed8e) list_single_2heading_msg_pane_g_ParamLimits

0xfca7,	// (0x0002ed8e) list_single_2heading_msg_pane_g

0xbcd0,	// (0x0002adb7) list_single_2heading_msg_pane_t1_ParamLimits

0xbcd0,	// (0x0002adb7) list_single_2heading_msg_pane_t1

0xbcf8,	// (0x0002addf) list_single_2heading_msg_pane_t2_ParamLimits

0xbcf8,	// (0x0002addf) list_single_2heading_msg_pane_t2

0xbd63,	// (0x0002ae4a) list_single_2heading_msg_pane_t3_ParamLimits

0xbd63,	// (0x0002ae4a) list_single_2heading_msg_pane_t3

0x1228,	// (0x0002030f) list_single_2heading_msg_pane_t4_ParamLimits

0x1228,	// (0x0002030f) list_single_2heading_msg_pane_t4

0x0003,

0xfcb0,	// (0x0002ed97) list_single_2heading_msg_pane_t_ParamLimits

0xfcb0,	// (0x0002ed97) list_single_2heading_msg_pane_t

0x3709,	// (0x000227f0) title_pane_g4_ParamLimits

0x3709,	// (0x000227f0) title_pane_g4

0x178f,	// (0x00020876) title_pane_stacon_g3_ParamLimits

0x178f,	// (0x00020876) title_pane_stacon_g3

0x8686,	// (0x0002776d) list_single_2graphic_im_pane_g4_ParamLimits

0x8686,	// (0x0002776d) list_single_2graphic_im_pane_g4

0x659c,	// (0x00025683) popup_side_volume_key_window_cp

0x6d4a,	// (0x00025e31) main_idle_act2_pane_t1

0x22ea,	// (0x000213d1) toolbar_button_pane_g10

0xd33e,	// (0x0002c425) popup_toolbar_window_cp1

0x74de,	// (0x000265c5) clock_nsta_pane_cp_t1

0x74de,	// (0x000265c5) clock_nsta_pane_cp_t2

0x0001,

0xfab7,	// (0x0002eb9e) clock_nsta_pane_cp_t

0x1981,	// (0x00020a68) navi_navi_volume_pane_cp2_ParamLimits

0x198d,	// (0x00020a74) popup_side_volume_key_window_g1_ParamLimits

0x1999,	// (0x00020a80) popup_side_volume_key_window_g2_ParamLimits

0x19a5,	// (0x00020a8c) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0002e7f8) popup_side_volume_key_window_g_ParamLimits

0x275a,	// (0x00021841) fep_hwr_aid_pane

0xda9b,	// (0x0002cb82) bg_fep_hwr_top_pane_g4_ParamLimits

0x7ac7,	// (0x00026bae) fep_hwr_top_pane_g1_ParamLimits

0x7ad9,	// (0x00026bc0) fep_hwr_top_pane_g2_ParamLimits

0x2813,	// (0x000218fa) fep_hwr_top_pane_g3_ParamLimits

0xfb0c,	// (0x0002ebf3) fep_hwr_top_pane_g_ParamLimits

0x2828,	// (0x0002190f) fep_hwr_top_text_pane_ParamLimits

0x635f,	// (0x00025446) aid_touch_tab_arrow_arrow_2

0x6368,	// (0x0002544f) aid_touch_tab_arrow_left_2

0x276e,	// (0x00021855) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x27a5,	// (0x0002188c) fep_hwr_prediction_pane

0x7c30,	// (0x00026d17) fep_vkb_prediction_pane

0xe32b,	// (0x0002d412) fep_vkb_side_pane_g3_ParamLimits

0xe32b,	// (0x0002d412) fep_vkb_side_pane_g3

0x7cd9,	// (0x00026dc0) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x815a,	// (0x00027241) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x8167,	// (0x0002724e) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb6,	// (0x0002ec9d) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8b88,	// (0x00027c6f) fep_hwr_prediction_pane_g1

0x2ab5,	// (0x00021b9c) fep_hwr_prediction_pane_g2

0x2abd,	// (0x00021ba4) fep_hwr_prediction_pane_g3

0x2ac5,	// (0x00021bac) fep_hwr_prediction_pane_g4

0x0003,

0xfcb9,	// (0x0002eda0) fep_hwr_prediction_pane_g

0x8b88,	// (0x00027c6f) fep_vkb_prediction_pane_g1

0x8b92,	// (0x00027c79) fep_vkb_prediction_pane_g2

0x8b9a,	// (0x00027c81) fep_vkb_prediction_pane_g3

0x8ba2,	// (0x00027c89) fep_vkb_prediction_pane_g4

0x0003,

0xfcc2,	// (0x0002eda9) fep_vkb_prediction_pane_g

0x25b6,	// (0x0002169d) slider_set_pane_g3

0x25ca,	// (0x000216b1) slider_set_pane_g4

0x25e2,	// (0x000216c9) slider_set_pane_g5

0x25b6,	// (0x0002169d) slider_set_pane_g6

0x25f8,	// (0x000216df) slider_set_pane_g7

0x69ef,	// (0x00025ad6) slider_form_pane_g3

0x69f8,	// (0x00025adf) slider_form_pane_g4

0x6a00,	// (0x00025ae7) slider_form_pane_g5

0x69ef,	// (0x00025ad6) slider_form_pane_g6

0xdee0,	// (0x0002cfc7) slider_form_pane_g7

0x6fe9,	// (0x000260d0) slider_set_pane_vc_g3

0x6ff2,	// (0x000260d9) slider_set_pane_vc_g4

0x6ffb,	// (0x000260e2) slider_set_pane_vc_g5

0x6fe9,	// (0x000260d0) slider_set_pane_vc_g6

0x7004,	// (0x000260eb) slider_set_pane_vc_g7

0x71b4,	// (0x0002629b) slider_form_pane_vc_g1

0x71bd,	// (0x000262a4) slider_form_pane_vc_g2

0x71c6,	// (0x000262ad) slider_form_pane_vc_g3

0x71b4,	// (0x0002629b) slider_form_pane_vc_g4

0x71cf,	// (0x000262b6) slider_form_pane_vc_g5

0x0004,

0xfa89,	// (0x0002eb70) slider_form_pane_vc_g

0x36c1,	// (0x000227a8) main_idle_act3_pane

0x8baa,	// (0x00027c91) ai3_links_pane

0xe4f7,	// (0x0002d5de) popup_ai3_data_window_ParamLimits

0xe4f7,	// (0x0002d5de) popup_ai3_data_window

0x36c1,	// (0x000227a8) grid_ai3_links_pane

0xe50f,	// (0x0002d5f6) cell_ai3_links_pane_ParamLimits

0xe50f,	// (0x0002d5f6) cell_ai3_links_pane

0x8be3,	// (0x00027cca) bg_popup_sub_pane_cp11

0x8bf0,	// (0x00027cd7) cell_ai3_links_pane_g1

0x36c1,	// (0x000227a8) bg_popup_sub_pane_cp12

0x8c15,	// (0x00027cfc) heading_ai3_data_pane

0x8c1d,	// (0x00027d04) list_ai3_gene_pane

0x8c29,	// (0x00027d10) popup_ai3_data_window_g1

0x8c31,	// (0x00027d18) heading_ai3_data_pane_g1

0x8c39,	// (0x00027d20) heading_ai3_data_pane_t1

0x8c47,	// (0x00027d2e) list_double_ai3_gene_pane_ParamLimits

0x8c47,	// (0x00027d2e) list_double_ai3_gene_pane

0x8c54,	// (0x00027d3b) list_single_ai3_gene_pane_ParamLimits

0x8c54,	// (0x00027d3b) list_single_ai3_gene_pane

0x7a30,	// (0x00026b17) list_highlight_pane_cp7_ParamLimits

0x7a30,	// (0x00026b17) list_highlight_pane_cp7

0x8c61,	// (0x00027d48) list_single_a13_gene_pane_t1_ParamLimits

0x8c61,	// (0x00027d48) list_single_a13_gene_pane_t1

0x8c78,	// (0x00027d5f) list_single_ai3_gene_pane_g1

0x8c81,	// (0x00027d68) list_single_ai3_gene_pane_g2

0x0001,

0xfccb,	// (0x0002edb2) list_single_ai3_gene_pane_g

0x8c89,	// (0x00027d70) list_double_ai3_gene_pane_g1_ParamLimits

0x8c89,	// (0x00027d70) list_double_ai3_gene_pane_g1

0x8c95,	// (0x00027d7c) list_double_ai3_gene_pane_t1_ParamLimits

0x8c95,	// (0x00027d7c) list_double_ai3_gene_pane_t1

0x8cb1,	// (0x00027d98) list_double_ai3_gene_pane_t2_ParamLimits

0x8cb1,	// (0x00027d98) list_double_ai3_gene_pane_t2

0x8cc6,	// (0x00027dad) list_double_ai3_gene_pane_t3_ParamLimits

0x8cc6,	// (0x00027dad) list_double_ai3_gene_pane_t3

0x0002,

0xfcd0,	// (0x0002edb7) list_double_ai3_gene_pane_t_ParamLimits

0xfcd0,	// (0x0002edb7) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1159,	// (0x00020240) aid_size_min_col_2

0xe4e1,	// (0x0002d5c8) aid_size_min_msg_ParamLimits

0xe4e1,	// (0x0002d5c8) aid_size_min_msg

0xe33f,	// (0x0002d426) fep_vkb_top_text_pane_g2_ParamLimits

0xe33f,	// (0x0002d426) fep_vkb_top_text_pane_g2

0x0001,

0xfb3c,	// (0x0002ec23) fep_vkb_top_text_pane_g_ParamLimits

0xfb3c,	// (0x0002ec23) fep_vkb_top_text_pane_g

0x36c1,	// (0x000227a8) main_hc_apps_shell_pane

0x8ce3,	// (0x00027dca) grid_hc_apps_pane_ParamLimits

0x8ce3,	// (0x00027dca) grid_hc_apps_pane

0x8cf2,	// (0x00027dd9) list_hc_apps_pane

0x8cfa,	// (0x00027de1) scroll_pane_cp37_ParamLimits

0x8cfa,	// (0x00027de1) scroll_pane_cp37

0xe529,	// (0x0002d610) cell_hc_apps_pane_ParamLimits

0xe529,	// (0x0002d610) cell_hc_apps_pane

0xe5e7,	// (0x0002d6ce) cell_hc_apps_pane_g1_ParamLimits

0xe5e7,	// (0x0002d6ce) cell_hc_apps_pane_g1

0x8de5,	// (0x00027ecc) cell_hc_apps_pane_g2_ParamLimits

0x8de5,	// (0x00027ecc) cell_hc_apps_pane_g2

0x8e01,	// (0x00027ee8) cell_hc_apps_pane_g3_ParamLimits

0x8e01,	// (0x00027ee8) cell_hc_apps_pane_g3

0x0002,

0xfcd7,	// (0x0002edbe) cell_hc_apps_pane_g_ParamLimits

0xfcd7,	// (0x0002edbe) cell_hc_apps_pane_g

0xe614,	// (0x0002d6fb) cell_hc_apps_pane_t1_ParamLimits

0xe614,	// (0x0002d6fb) cell_hc_apps_pane_t1

0x3a3e,	// (0x00022b25) grid_highlight_pane_cp10_ParamLimits

0x3a3e,	// (0x00022b25) grid_highlight_pane_cp10

0xe652,	// (0x0002d739) list_single_hc_apps_pane_ParamLimits

0xe652,	// (0x0002d739) list_single_hc_apps_pane

0xe683,	// (0x0002d76a) list_single_hc_apps_pane_g1

0xbdd1,	// (0x0002aeb8) list_single_hc_apps_pane_g2

0x0001,

0xfcde,	// (0x0002edc5) list_single_hc_apps_pane_g

0xbdea,	// (0x0002aed1) list_single_hc_apps_pane_g2_copy1

0xbe06,	// (0x0002aeed) list_single_hc_apps_pane_t1

0x37b5,	// (0x0002289c) bg_set_opt_pane_cp_ParamLimits

0x16b6,	// (0x0002079d) setting_slider_pane_t1_ParamLimits

0x16cf,	// (0x000207b6) setting_slider_pane_t2_ParamLimits

0x16e9,	// (0x000207d0) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0002e645) setting_slider_pane_t_ParamLimits

0x1701,	// (0x000207e8) slider_set_pane_ParamLimits

0x1c21,	// (0x00020d08) control_pane_g5_ParamLimits

0x1c21,	// (0x00020d08) control_pane_g5

0x684c,	// (0x00025933) slider_set_pane_g1_ParamLimits

0x25aa,	// (0x00021691) slider_set_pane_g2_ParamLimits

0x25b6,	// (0x0002169d) slider_set_pane_g3_ParamLimits

0x25ca,	// (0x000216b1) slider_set_pane_g4_ParamLimits

0x25e2,	// (0x000216c9) slider_set_pane_g5_ParamLimits

0x25b6,	// (0x0002169d) slider_set_pane_g6_ParamLimits

0x25f8,	// (0x000216df) slider_set_pane_g7_ParamLimits

0xf958,	// (0x0002ea3f) slider_set_pane_g_ParamLimits

0x4b03,	// (0x00023bea) navi_icon_text_pane_ParamLimits

0xd73c,	// (0x0002c823) aid_fill_nsta_2_ParamLimits

0xd773,	// (0x0002c85a) aid_touch_tab_arrow_left_ParamLimits

0xd789,	// (0x0002c870) aid_touch_tab_arrow_right_ParamLimits

0xd824,	// (0x0002c90b) clock_nsta_pane_ParamLimits

0x6341,	// (0x00025428) navi_icon_pane_g1_ParamLimits

0x634d,	// (0x00025434) navi_text_pane_t1_ParamLimits

0x75f0,	// (0x000266d7) navi_icon_text_pane_g1_ParamLimits

0x75fc,	// (0x000266e3) navi_icon_text_pane_t1_ParamLimits

0xe683,	// (0x0002d76a) list_single_hc_apps_pane_g1_ParamLimits

0xbdd1,	// (0x0002aeb8) list_single_hc_apps_pane_g2_ParamLimits

0xfcde,	// (0x0002edc5) list_single_hc_apps_pane_g_ParamLimits

0xbdea,	// (0x0002aed1) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbe06,	// (0x0002aeed) list_single_hc_apps_pane_t1_ParamLimits

0xbf6a,	// (0x0002b051) popup_toolbar2_fixed_window_ParamLimits

0xbf6a,	// (0x0002b051) popup_toolbar2_fixed_window

0xc7f4,	// (0x0002b8db) popup_toolbar2_float_window

0x36c1,	// (0x000227a8) bg_popup_sub_pane_cp27

0x8ee4,	// (0x00027fcb) grid_toolbar2_float_pane

0x36c1,	// (0x000227a8) bg_popup_sub_pane_cp26

0x8ee4,	// (0x00027fcb) grid_toolbar2_fixed_pane

0xe69c,	// (0x0002d783) cell_toolbar2_fixed_pane_ParamLimits

0xe69c,	// (0x0002d783) cell_toolbar2_fixed_pane

0xe6b7,	// (0x0002d79e) cell_toolbar2_fixed_pane_g1

0x542f,	// (0x00024516) toolbar2_fixed_button_pane

0x54af,	// (0x00024596) toolbar2_fixed_button_pane_g1

0x54b7,	// (0x0002459e) toolbar2_fixed_button_pane_g2

0x54bf,	// (0x000245a6) toolbar2_fixed_button_pane_g3

0x54c7,	// (0x000245ae) toolbar2_fixed_button_pane_g4

0x54cf,	// (0x000245b6) toolbar2_fixed_button_pane_g5

0x54d7,	// (0x000245be) toolbar2_fixed_button_pane_g6

0x54df,	// (0x000245c6) toolbar2_fixed_button_pane_g7

0x54e7,	// (0x000245ce) toolbar2_fixed_button_pane_g8

0x54ef,	// (0x000245d6) toolbar2_fixed_button_pane_g9

0x0008,

0xf85a,	// (0x0002e941) toolbar2_fixed_button_pane_g

0x8f06,	// (0x00027fed) cell_toolbar2_float_pane_ParamLimits

0x8f06,	// (0x00027fed) cell_toolbar2_float_pane

0x8f1a,	// (0x00028001) cell_toolbar2_float_pane_g1

0x542f,	// (0x00024516) toolbar2_fixed_button_pane_cp

0xe227,	// (0x0002d30e) fep_vkb_accented_list_pane_ParamLimits

0xe227,	// (0x0002d30e) fep_vkb_accented_list_pane

0x2976,	// (0x00021a5d) bg_popup_fep_shadow_pane_g9

0x4c77,	// (0x00023d5e) bg_popup_fep_shadow_pane_cp3

0x4164,	// (0x0002324b) list_accented_list_pane

0x8f23,	// (0x0002800a) list_single_accented_list_pane_ParamLimits

0x8f23,	// (0x0002800a) list_single_accented_list_pane

0x4c77,	// (0x00023d5e) list_highlight_pane_cp10

0x8f34,	// (0x0002801b) list_single_accented_list_pane_t1

0xc71e,	// (0x0002b805) popup_slider_window_ParamLimits

0xc71e,	// (0x0002b805) popup_slider_window

0x8b6b,	// (0x00027c52) aid_indentation_list_msg

0xe7b0,	// (0x0002d897) bg_popup_window_pane_cp19

0x9058,	// (0x0002813f) popup_slider_window_g1

0x9074,	// (0x0002815b) popup_slider_window_g2

0x9090,	// (0x00028177) popup_slider_window_g3

0x0005,

0xfce3,	// (0x0002edca) popup_slider_window_g

0x90ec,	// (0x000281d3) popup_slider_window_t1

0x9160,	// (0x00028247) small_volume_slider_vertical_pane

0x7a6b,	// (0x00026b52) small_volume_slider_vertical_pane_g1

0x7a6b,	// (0x00026b52) small_volume_slider_vertical_pane_g2

0x917c,	// (0x00028263) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf5,	// (0x0002eddc) small_volume_slider_vertical_pane_g

0xbed8,	// (0x0002afbf) area_side_right_pane_ParamLimits

0xbed8,	// (0x0002afbf) area_side_right_pane

0xca1b,	// (0x0002bb02) aid_size_side_button_ParamLimits

0xca1b,	// (0x0002bb02) aid_size_side_button

0xca34,	// (0x0002bb1b) grid_sctrl_middle_pane_ParamLimits

0xca34,	// (0x0002bb1b) grid_sctrl_middle_pane

0x2b00,	// (0x00021be7) sctrl_sk_bottom_pane

0x2b11,	// (0x00021bf8) sctrl_sk_top_pane

0x2b23,	// (0x00021c0a) aid_touch_sctrl_top

0x3a3e,	// (0x00022b25) bg_sctrl_sk_pane_ParamLimits

0x3a3e,	// (0x00022b25) bg_sctrl_sk_pane

0x2b30,	// (0x00021c17) sctrl_sk_top_pane_g1

0x2b3d,	// (0x00021c24) sctrl_sk_top_pane_t1

0x2b23,	// (0x00021c0a) aid_touch_sctrl_bottom

0x3a3e,	// (0x00022b25) bg_sctrl_sk_pane_cp_ParamLimits

0x3a3e,	// (0x00022b25) bg_sctrl_sk_pane_cp

0x2b58,	// (0x00021c3f) sctrl_sk_bottom_pane_g1

0x2b3d,	// (0x00021c24) sctrl_sk_bottom_pane_t1

0xca4e,	// (0x0002bb35) cell_sctrl_middle_pane_ParamLimits

0xca4e,	// (0x0002bb35) cell_sctrl_middle_pane

0xca5f,	// (0x0002bb46) aid_touch_sctrl_middle_ParamLimits

0xca5f,	// (0x0002bb46) aid_touch_sctrl_middle

0xca6c,	// (0x0002bb53) bg_sctrl_middle_pane_ParamLimits

0xca6c,	// (0x0002bb53) bg_sctrl_middle_pane

0x9204,	// (0x000282eb) cell_sctrl_middle_pane_g1_ParamLimits

0x9204,	// (0x000282eb) cell_sctrl_middle_pane_g1

0xca7a,	// (0x0002bb61) cell_sctrl_middle_pane_g2_ParamLimits

0xca7a,	// (0x0002bb61) cell_sctrl_middle_pane_g2

0x0001,

0xfd01,	// (0x0002ede8) cell_sctrl_middle_pane_g_ParamLimits

0xfd01,	// (0x0002ede8) cell_sctrl_middle_pane_g

0x54af,	// (0x00024596) bg_sctrl_middle_pane_g1

0x54b7,	// (0x0002459e) bg_sctrl_middle_pane_g2

0x54bf,	// (0x000245a6) bg_sctrl_middle_pane_g3

0x54c7,	// (0x000245ae) bg_sctrl_middle_pane_g4

0x54cf,	// (0x000245b6) bg_sctrl_middle_pane_g5

0x54d7,	// (0x000245be) bg_sctrl_middle_pane_g6

0x54df,	// (0x000245c6) bg_sctrl_middle_pane_g7

0x54e7,	// (0x000245ce) bg_sctrl_middle_pane_g8

0x0007,

0xfd06,	// (0x0002eded) bg_sctrl_middle_pane_g

0x54ef,	// (0x000245d6) bg_sctrl_middle_pane_g8_copy1

0x54af,	// (0x00024596) bg_sctrl_sk_pane_g1

0x54b7,	// (0x0002459e) bg_sctrl_sk_pane_g2

0x54bf,	// (0x000245a6) bg_sctrl_sk_pane_g3

0x0008,

0xf85a,	// (0x0002e941) bg_sctrl_sk_pane_g

0x3f3e,	// (0x00023025) aid_size_touch_scroll_bar

0x54c7,	// (0x000245ae) bg_sctrl_sk_pane_g4

0x54cf,	// (0x000245b6) bg_sctrl_sk_pane_g5

0x54d7,	// (0x000245be) bg_sctrl_sk_pane_g6

0x54df,	// (0x000245c6) bg_sctrl_sk_pane_g7

0x54e7,	// (0x000245ce) bg_sctrl_sk_pane_g8

0x54ef,	// (0x000245d6) bg_sctrl_sk_pane_g9

0x1db1,	// (0x00020e98) popup_fep_china_hwr2_fs_candidate_window

0xc24c,	// (0x0002b333) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc24c,	// (0x0002b333) popup_fep_china_hwr2_fs_control_window

0x7cd9,	// (0x00026dc0) sctrl_sk_top_pane_g2

0x0001,

0xfcfc,	// (0x0002ede3) sctrl_sk_top_pane_g

0xe868,	// (0x0002d94f) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe868,	// (0x0002d94f) aid_fep_china_hwr2_fs_cell

0xe87c,	// (0x0002d963) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe87c,	// (0x0002d963) bg_popup_fep_shadow_pane_cp4

0xe893,	// (0x0002d97a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe893,	// (0x0002d97a) bg_popup_fep_shadow_pane_cp5

0xe8a5,	// (0x0002d98c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe8a5,	// (0x0002d98c) popup_fep_china_hwr2_fs_control_bar_grid

0xe8b9,	// (0x0002d9a0) popup_fep_china_hwr2_fs_control_funtion_grid

0x91d8,	// (0x000282bf) aid_fep_china_hwr2_fs_candi_cell

0x36c1,	// (0x000227a8) bg_popup_fep_shadow_pane_cp6

0x91e2,	// (0x000282c9) popup_fep_china_hwr2_fs_candidate_grid

0xe8c1,	// (0x0002d9a8) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe8c1,	// (0x0002d9a8) cell_fep_china_hwr2_fs_funtion_grid

0x7a6b,	// (0x00026b52) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x9204,	// (0x000282eb) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x9204,	// (0x000282eb) cell_fep_china_hwr2_fs_funtion_grid_g1

0x9212,	// (0x000282f9) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x9212,	// (0x000282f9) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd17,	// (0x0002edfe) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd17,	// (0x0002edfe) cell_fep_china_hwr2_fs_funtion_grid_g

0xe8d9,	// (0x0002d9c0) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe8d9,	// (0x0002d9c0) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe8ee,	// (0x0002d9d5) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe8ee,	// (0x0002d9d5) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1c,	// (0x0002ee03) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1c,	// (0x0002ee03) cell_fep_china_hwr2_fs_funtion_grid_t

0x9259,	// (0x00028340) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x9261,	// (0x00028348) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x9269,	// (0x00028350) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd21,	// (0x0002ee08) popup_fep_china_hwr2_fs_control_bar_grid_g

0x9271,	// (0x00028358) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x9271,	// (0x00028358) cell_fep_china_hwr2_fs_candidate_grid

0x928a,	// (0x00028371) popup_fep_china_hwr2_fs_candidate_grid_g20

0x9292,	// (0x00028379) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7a6b,	// (0x00026b52) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7a6b,	// (0x00026b52) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb41,	// (0x0002ec28) cell_fep_china_hwr2_fs_candidate_grid_g

0x929a,	// (0x00028381) cell_fep_china_hwr2_fs_candidate_grid_t1

0x50ad,	// (0x00024194) clock_nsta_pane_cp_24_ParamLimits

0x50ad,	// (0x00024194) clock_nsta_pane_cp_24

0x512b,	// (0x00024212) indicator_nsta_pane_cp_24_ParamLimits

0x512b,	// (0x00024212) indicator_nsta_pane_cp_24

0x61bd,	// (0x000252a4) heading_pane_g1

0x0001,

0xf8bf,	// (0x0002e9a6) heading_pane_g

0x6b93,	// (0x00025c7a) grid_sct_catagory_button_pane

0x6bc3,	// (0x00025caa) scroll_pane_cp5_ParamLimits

0x763e,	// (0x00026725) button_value_adjust_pane_cp5_ParamLimits

0x763e,	// (0x00026725) button_value_adjust_pane_cp5

0x771d,	// (0x00026804) form2_midp_time_pane_ParamLimits

0x92a8,	// (0x0002838f) cell_sct_catagory_button_pane_ParamLimits

0x92a8,	// (0x0002838f) cell_sct_catagory_button_pane

0x7a30,	// (0x00026b17) bg_button_pane_cp01_ParamLimits

0x7a30,	// (0x00026b17) bg_button_pane_cp01

0x7a6b,	// (0x00026b52) cell_sct_catagory_button_pane_g1

0xc797,	// (0x0002b87e) popup_tb_extension_window

0xe90a,	// (0x0002d9f1) aid_size_cell_ext_ParamLimits

0xe90a,	// (0x0002d9f1) aid_size_cell_ext

0x3d80,	// (0x00022e67) bg_tb_trans_pane_cp1_ParamLimits

0x3d80,	// (0x00022e67) bg_tb_trans_pane_cp1

0xe930,	// (0x0002da17) grid_tb_ext_pane_ParamLimits

0xe930,	// (0x0002da17) grid_tb_ext_pane

0xe972,	// (0x0002da59) cell_tb_ext_pane_ParamLimits

0xe972,	// (0x0002da59) cell_tb_ext_pane

0xe99a,	// (0x0002da81) cell_tb_ext_pane_g1_ParamLimits

0xe99a,	// (0x0002da81) cell_tb_ext_pane_g1

0x9340,	// (0x00028427) cell_tb_ext_pane_t1

0x3a3e,	// (0x00022b25) list_highlight_pane_cp11_ParamLimits

0x3a3e,	// (0x00022b25) list_highlight_pane_cp11

0xbf7f,	// (0x0002b066) popup_uni_indicator_window_ParamLimits

0xbf7f,	// (0x0002b066) popup_uni_indicator_window

0x400f,	// (0x000230f6) bg_popup_sub_pane_cp14

0x935b,	// (0x00028442) list_uniindi_pane

0x9367,	// (0x0002844e) uniindi_top_pane

0x3a3e,	// (0x00022b25) bg_uniindi_top_pane

0x9386,	// (0x0002846d) uniindi_top_pane_g1

0x939c,	// (0x00028483) uniindi_top_pane_g2

0x0003,

0xfd28,	// (0x0002ee0f) uniindi_top_pane_g

0x93c6,	// (0x000284ad) uniindi_top_pane_t1

0x93f0,	// (0x000284d7) list_single_uniindi_pane_ParamLimits

0x93f0,	// (0x000284d7) list_single_uniindi_pane

0x7a6b,	// (0x00026b52) bg_uniindi_top_pane_g1

0x9403,	// (0x000284ea) list_single_uniindi_pane_g1

0x9416,	// (0x000284fd) list_single_uniindi_pane_t1

0x36c1,	// (0x000227a8) control_bg_pane

0x943b,	// (0x00028522) bg_sctrl_sk_pane_cp1

0x9444,	// (0x0002852b) bg_sctrl_sk_pane_cp2

0x944d,	// (0x00028534) control_bg_pane_g1

0x9456,	// (0x0002853d) control_bg_pane_g2

0x0001,

0xfd31,	// (0x0002ee18) control_bg_pane_g

0x7482,	// (0x00026569) cell_indicator_nsta_pane_g1_ParamLimits

0xe09e,	// (0x0002d185) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa5,	// (0x0002eb8c) cell_indicator_nsta_pane_g_ParamLimits

0x0f16,	// (0x0001fffd) form2_midp_time_pane_t1_ParamLimits

0x274c,	// (0x00021833) main_idle_act4_pane_ParamLimits

0x274c,	// (0x00021833) main_idle_act4_pane

0xc797,	// (0x0002b87e) popup_tb_extension_window_ParamLimits

0xe958,	// (0x0002da3f) tb_ext_find_pane_ParamLimits

0xe958,	// (0x0002da3f) tb_ext_find_pane

0x945f,	// (0x00028546) ai_gene_pane_1_cp1

0x4db6,	// (0x00023e9d) ai_gene_pane_2_cp1

0x9467,	// (0x0002854e) list_single_idle_plugin_calendar_pane

0x9470,	// (0x00028557) list_single_idle_plugin_notification_pane

0x9479,	// (0x00028560) list_single_idle_plugin_player_pane

0xe9b7,	// (0x0002da9e) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe9b7,	// (0x0002da9e) list_single_idle_plugin_shortcut_pane

0xe9df,	// (0x0002dac6) main_idle_act4_pane_t1

0xe9f5,	// (0x0002dadc) main_idle_act4_pane_t2

0x0001,

0xfd36,	// (0x0002ee1d) main_idle_act4_pane_t

0xea0d,	// (0x0002daf4) middle_sk_idle_act4_pane_ParamLimits

0xea0d,	// (0x0002daf4) middle_sk_idle_act4_pane

0xea29,	// (0x0002db10) popup_clock_digital_analogue_window_cp2

0xea50,	// (0x0002db37) shortcut_wheel_idle_act4_pane_ParamLimits

0xea50,	// (0x0002db37) shortcut_wheel_idle_act4_pane

0x7a6b,	// (0x00026b52) shortcut_wheel_idle_act4_pane_g1

0x7a6b,	// (0x00026b52) shortcut_wheel_idle_act4_pane_g2

0x7a6b,	// (0x00026b52) shortcut_wheel_idle_act4_pane_g3

0x7a6b,	// (0x00026b52) shortcut_wheel_idle_act4_pane_g4

0x7a6b,	// (0x00026b52) shortcut_wheel_idle_act4_pane_g5

0x950c,	// (0x000285f3) shortcut_wheel_idle_act4_pane_g6

0x9514,	// (0x000285fb) shortcut_wheel_idle_act4_pane_g7

0x951c,	// (0x00028603) shortcut_wheel_idle_act4_pane_g8

0x9524,	// (0x0002860b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3b,	// (0x0002ee22) shortcut_wheel_idle_act4_pane_g

0xda9b,	// (0x0002cb82) middle_sk_idle_act4_pane_g1_ParamLimits

0xda9b,	// (0x0002cb82) middle_sk_idle_act4_pane_g1

0xeacd,	// (0x0002dbb4) middle_sk_idle_act4_pane_g2_ParamLimits

0xeacd,	// (0x0002dbb4) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5e,	// (0x0002ee45) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5e,	// (0x0002ee45) middle_sk_idle_act4_pane_g

0xeae5,	// (0x0002dbcc) middle_sk_idle_act4_pane_t1_ParamLimits

0xeae5,	// (0x0002dbcc) middle_sk_idle_act4_pane_t1

0xeb14,	// (0x0002dbfb) grid_ai_shortcut_pane_ParamLimits

0xeb14,	// (0x0002dbfb) grid_ai_shortcut_pane

0xeb31,	// (0x0002dc18) list_highlight_pane_cp16_ParamLimits

0xeb31,	// (0x0002dc18) list_highlight_pane_cp16

0xeb3e,	// (0x0002dc25) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xeb3e,	// (0x0002dc25) list_single_idle_plugin_shortcut_pane_g1

0xeb4a,	// (0x0002dc31) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xeb4a,	// (0x0002dc31) list_single_idle_plugin_shortcut_pane_g2

0xeb66,	// (0x0002dc4d) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xeb66,	// (0x0002dc4d) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd63,	// (0x0002ee4a) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd63,	// (0x0002ee4a) list_single_idle_plugin_shortcut_pane_g

0xeb7b,	// (0x0002dc62) cell_ai_shortcut_pane_ParamLimits

0xeb7b,	// (0x0002dc62) cell_ai_shortcut_pane

0xeb91,	// (0x0002dc78) cell_ai_shortcut_pane_g1_ParamLimits

0xeb91,	// (0x0002dc78) cell_ai_shortcut_pane_g1

0x945f,	// (0x00028546) ai_gene_pane_1_cp2

0x9651,	// (0x00028738) ai_gene_pane_2_cp2

0x9659,	// (0x00028740) list_highlight_pane_cp15

0x9662,	// (0x00028749) list_single_idle_plugin_calendar_pane_g1

0x9659,	// (0x00028740) list_highlight_pane_cp17

0x966a,	// (0x00028751) list_single_idle_plugin_calendar_pane_g1_copy1

0x9672,	// (0x00028759) list_single_idle_plugin_player_pane_g1

0x6dea,	// (0x00025ed1) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6a,	// (0x0002ee51) list_single_idle_plugin_player_pane_g

0x967a,	// (0x00028761) list_single_idle_plugin_player_pane_t1

0x9688,	// (0x0002876f) list_single_idle_plugin_player_pane_t2

0x9696,	// (0x0002877d) list_single_idle_plugin_player_pane_t3

0x96a4,	// (0x0002878b) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6f,	// (0x0002ee56) list_single_idle_plugin_player_pane_t

0x96b2,	// (0x00028799) wait_bar_pane_cp15

0x96ba,	// (0x000287a1) grid_ai_notification_pane

0x6dea,	// (0x00025ed1) list_single_idle_plugin_notification_pane_g1

0xebb3,	// (0x0002dc9a) cell_ai_notification_pane_ParamLimits

0xebb3,	// (0x0002dc9a) cell_ai_notification_pane

0x96d0,	// (0x000287b7) cell_ai_notification_pane_g1

0x96d8,	// (0x000287bf) cell_ai_notification_pane_t1

0xebc0,	// (0x0002dca7) tb_ext_find_button_pane

0xebc8,	// (0x0002dcaf) tb_ext_find_pane_g1

0xebd0,	// (0x0002dcb7) tb_ext_find_pane_t1

0x465f,	// (0x00023746) tb_ext_find_button_pane_g1

0x9704,	// (0x000287eb) tb_ext_find_button_pane_g2

0x0001,

0xfd78,	// (0x0002ee5f) tb_ext_find_button_pane_g

0xe9df,	// (0x0002dac6) main_idle_act4_pane_t1_ParamLimits

0xe9f5,	// (0x0002dadc) main_idle_act4_pane_t2_ParamLimits

0xfd36,	// (0x0002ee1d) main_idle_act4_pane_t_ParamLimits

0xea29,	// (0x0002db10) popup_clock_digital_analogue_window_cp2_ParamLimits

0xea40,	// (0x0002db27) sat_plugin_idle_act4_pane_ParamLimits

0xea40,	// (0x0002db27) sat_plugin_idle_act4_pane

0xebde,	// (0x0002dcc5) sat_plugin_idle_act4_pane_t1_ParamLimits

0xebde,	// (0x0002dcc5) sat_plugin_idle_act4_pane_t1

0xebf6,	// (0x0002dcdd) sat_plugin_idle_act4_pane_t2_ParamLimits

0xebf6,	// (0x0002dcdd) sat_plugin_idle_act4_pane_t2

0xec0e,	// (0x0002dcf5) sat_plugin_idle_act4_pane_t3_ParamLimits

0xec0e,	// (0x0002dcf5) sat_plugin_idle_act4_pane_t3

0xec26,	// (0x0002dd0d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xec26,	// (0x0002dd0d) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7d,	// (0x0002ee64) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7d,	// (0x0002ee64) sat_plugin_idle_act4_pane_t

0x1528,	// (0x0002060f) popup_battery_window_ParamLimits

0x1528,	// (0x0002060f) popup_battery_window

0x3a3e,	// (0x00022b25) bg_popup_sub_pane_cp25_ParamLimits

0x3a3e,	// (0x00022b25) bg_popup_sub_pane_cp25

0x9759,	// (0x00028840) popup_battery_window_g1_ParamLimits

0x9759,	// (0x00028840) popup_battery_window_g1

0x9765,	// (0x0002884c) popup_battery_window_t1_ParamLimits

0x9765,	// (0x0002884c) popup_battery_window_t1

0x9777,	// (0x0002885e) popup_battery_window_t2_ParamLimits

0x9777,	// (0x0002885e) popup_battery_window_t2

0x0001,

0xfd86,	// (0x0002ee6d) popup_battery_window_t_ParamLimits

0xfd86,	// (0x0002ee6d) popup_battery_window_t

0xd5a3,	// (0x0002c68a) midp_canvas_pane_ParamLimits

0xd602,	// (0x0002c6e9) midp_keypad_pane_ParamLimits

0xd602,	// (0x0002c6e9) midp_keypad_pane

0x4fb1,	// (0x00024098) main_midp_pane_ParamLimits

0x74fc,	// (0x000265e3) signal_pane_g2_cp_ParamLimits

0xec3e,	// (0x0002dd25) aid_size_cell_midp_keypad_ParamLimits

0xec3e,	// (0x0002dd25) aid_size_cell_midp_keypad

0xec5c,	// (0x0002dd43) midp_keyp_game_grid_pane_ParamLimits

0xec5c,	// (0x0002dd43) midp_keyp_game_grid_pane

0xec83,	// (0x0002dd6a) midp_keyp_rocker_pane_ParamLimits

0xec83,	// (0x0002dd6a) midp_keyp_rocker_pane

0xecd4,	// (0x0002ddbb) midp_keyp_sk_left_pane_ParamLimits

0xecd4,	// (0x0002ddbb) midp_keyp_sk_left_pane

0xed28,	// (0x0002de0f) midp_keyp_sk_right_pane_ParamLimits

0xed28,	// (0x0002de0f) midp_keyp_sk_right_pane

0x36c1,	// (0x000227a8) bg_button_pane_cp03

0xed7c,	// (0x0002de63) midp_keyp_sk_left_pane_g1

0x36c1,	// (0x000227a8) bg_button_pane_cp04

0xed7c,	// (0x0002de63) midp_keyp_sk_right_pane_g1

0x7a6b,	// (0x00026b52) midp_keyp_rocker_pane_g1

0xed85,	// (0x0002de6c) keyp_game_cell_pane_ParamLimits

0xed85,	// (0x0002de6c) keyp_game_cell_pane

0x36c1,	// (0x000227a8) bg_button_pane_cp02

0xeda9,	// (0x0002de90) keyp_game_cell_pane_g1

0xbf1a,	// (0x0002b001) popup_fep_vkb2_window_ParamLimits

0xbf1a,	// (0x0002b001) popup_fep_vkb2_window

0xca86,	// (0x0002bb6d) aid_size_cell_vkb2_ParamLimits

0xca86,	// (0x0002bb6d) aid_size_cell_vkb2

0xcabc,	// (0x0002bba3) popup_fep_vkb2_window_g1_ParamLimits

0xcabc,	// (0x0002bba3) popup_fep_vkb2_window_g1

0xcb0c,	// (0x0002bbf3) vkb2_area_bottom_pane_ParamLimits

0xcb0c,	// (0x0002bbf3) vkb2_area_bottom_pane

0xcb60,	// (0x0002bc47) vkb2_area_keypad_pane_ParamLimits

0xcb60,	// (0x0002bc47) vkb2_area_keypad_pane

0xcba8,	// (0x0002bc8f) vkb2_area_top_pane_ParamLimits

0xcba8,	// (0x0002bc8f) vkb2_area_top_pane

0xcc2e,	// (0x0002bd15) vkb2_top_entry_pane_ParamLimits

0xcc2e,	// (0x0002bd15) vkb2_top_entry_pane

0xcc5b,	// (0x0002bd42) vkb2_top_grid_left_pane_ParamLimits

0xcc5b,	// (0x0002bd42) vkb2_top_grid_left_pane

0xcc7b,	// (0x0002bd62) vkb2_top_grid_right_pane_ParamLimits

0xcc7b,	// (0x0002bd62) vkb2_top_grid_right_pane

0x2db6,	// (0x00021e9d) vkb2_cell_keypad_pane_ParamLimits

0x2db6,	// (0x00021e9d) vkb2_cell_keypad_pane

0xccc1,	// (0x0002bda8) vkb2_area_bottom_grid_pane_ParamLimits

0xccc1,	// (0x0002bda8) vkb2_area_bottom_grid_pane

0xcceb,	// (0x0002bdd2) vkb2_area_bottom_pane_g1_ParamLimits

0xcceb,	// (0x0002bdd2) vkb2_area_bottom_pane_g1

0xcd11,	// (0x0002bdf8) vkb2_area_bottom_pane_g2_ParamLimits

0xcd11,	// (0x0002bdf8) vkb2_area_bottom_pane_g2

0xcd42,	// (0x0002be29) vkb2_area_bottom_pane_g3_ParamLimits

0xcd42,	// (0x0002be29) vkb2_area_bottom_pane_g3

0x0002,

0xfd8b,	// (0x0002ee72) vkb2_area_bottom_pane_g_ParamLimits

0xfd8b,	// (0x0002ee72) vkb2_area_bottom_pane_g

0x2f60,	// (0x00022047) vkb2_top_cell_left_pane_ParamLimits

0x2f60,	// (0x00022047) vkb2_top_cell_left_pane

0xedb2,	// (0x0002de99) vkb2_top_entry_pane_g1_ParamLimits

0xedb2,	// (0x0002de99) vkb2_top_entry_pane_g1

0xedc0,	// (0x0002dea7) vkb2_top_entry_pane_t1_ParamLimits

0xedc0,	// (0x0002dea7) vkb2_top_entry_pane_t1

0x9928,	// (0x00028a0f) vkb2_top_entry_pane_t2_ParamLimits

0x9928,	// (0x00028a0f) vkb2_top_entry_pane_t2

0x995a,	// (0x00028a41) vkb2_top_entry_pane_t3_ParamLimits

0x995a,	// (0x00028a41) vkb2_top_entry_pane_t3

0x0002,

0xfd92,	// (0x0002ee79) vkb2_top_entry_pane_t_ParamLimits

0xfd92,	// (0x0002ee79) vkb2_top_entry_pane_t

0xcdac,	// (0x0002be93) vkb2_top_grid_right_pane_g1_ParamLimits

0xcdac,	// (0x0002be93) vkb2_top_grid_right_pane_g1

0x2fc3,	// (0x000220aa) vkb2_top_grid_right_pane_g2_ParamLimits

0x2fc3,	// (0x000220aa) vkb2_top_grid_right_pane_g2

0x2fdb,	// (0x000220c2) vkb2_top_grid_right_pane_g3_ParamLimits

0x2fdb,	// (0x000220c2) vkb2_top_grid_right_pane_g3

0xcdc2,	// (0x0002bea9) vkb2_top_grid_right_pane_g4_ParamLimits

0xcdc2,	// (0x0002bea9) vkb2_top_grid_right_pane_g4

0x0003,

0xfd99,	// (0x0002ee80) vkb2_top_grid_right_pane_g_ParamLimits

0xfd99,	// (0x0002ee80) vkb2_top_grid_right_pane_g

0x3009,	// (0x000220f0) vkb2_top_cell_left_pane_g1

0x3020,	// (0x00022107) vkb2_cell_keypad_pane_g1_ParamLimits

0x3020,	// (0x00022107) vkb2_cell_keypad_pane_g1

0x997e,	// (0x00028a65) vkb2_cell_keypad_pane_t1_ParamLimits

0x997e,	// (0x00028a65) vkb2_cell_keypad_pane_t1

0x302e,	// (0x00022115) vkb2_cell_bottom_grid_pane_ParamLimits

0x302e,	// (0x00022115) vkb2_cell_bottom_grid_pane

0x3067,	// (0x0002214e) vkb2_cell_bottom_grid_pane_g1

0xea71,	// (0x0002db58) aid_call2_pane_cp02

0xea79,	// (0x0002db60) aid_call_pane_cp02

0xea81,	// (0x0002db68) clock_digital_number_pane_cp10

0xea89,	// (0x0002db70) clock_digital_number_pane_cp11

0xea91,	// (0x0002db78) clock_digital_number_pane_cp12

0xea99,	// (0x0002db80) clock_digital_number_pane_cp13

0xeaa1,	// (0x0002db88) clock_digital_separator_pane_cp10

0x465f,	// (0x00023746) popup_clock_digital_analogue_window_cp2_g1

0x465f,	// (0x00023746) popup_clock_digital_analogue_window_cp2_g2

0xeaa9,	// (0x0002db90) popup_clock_digital_analogue_window_cp2_g3

0x465f,	// (0x00023746) popup_clock_digital_analogue_window_cp2_g4

0xeaa9,	// (0x0002db90) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4e,	// (0x0002ee35) popup_clock_digital_analogue_window_cp2_g

0xeab1,	// (0x0002db98) popup_clock_digital_analogue_window_cp2_t1

0xeabf,	// (0x0002dba6) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd59,	// (0x0002ee40) popup_clock_digital_analogue_window_cp2_t

0x7a6b,	// (0x00026b52) clock_digital_number_pane_cp10_g1

0x7a6b,	// (0x00026b52) clock_digital_number_pane_cp10_g2

0x0001,

0xfb41,	// (0x0002ec28) clock_digital_number_pane_cp10_g

0x7a6b,	// (0x00026b52) clock_digital_separator_pane_cp10_g1

0x7a6b,	// (0x00026b52) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb41,	// (0x0002ec28) clock_digital_separator_pane_cp10_g

0x93a8,	// (0x0002848f) uniindi_top_pane_g3

0x93b9,	// (0x000284a0) uniindi_top_pane_g4

0x2e41,	// (0x00021f28) vkb2_row_keypad_pane_ParamLimits

0x2e41,	// (0x00021f28) vkb2_row_keypad_pane

0x3087,	// (0x0002216e) vkb2_cell_t_keypad_pane_ParamLimits

0x3087,	// (0x0002216e) vkb2_cell_t_keypad_pane

0x3097,	// (0x0002217e) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x3097,	// (0x0002217e) vkb2_cell_t_keypad_pane_cp08

0x30aa,	// (0x00022191) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x30aa,	// (0x00022191) vkb2_cell_t_keypad_pane_cp09

0x30be,	// (0x000221a5) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x30be,	// (0x000221a5) vkb2_cell_t_keypad_pane_cp01

0x30cf,	// (0x000221b6) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x30cf,	// (0x000221b6) vkb2_cell_t_keypad_pane_cp02

0x30e0,	// (0x000221c7) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x30e0,	// (0x000221c7) vkb2_cell_t_keypad_pane_cp03

0x30f1,	// (0x000221d8) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x30f1,	// (0x000221d8) vkb2_cell_t_keypad_pane_cp04

0x3102,	// (0x000221e9) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x3102,	// (0x000221e9) vkb2_cell_t_keypad_pane_cp05

0x3113,	// (0x000221fa) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x3113,	// (0x000221fa) vkb2_cell_t_keypad_pane_cp06

0x3124,	// (0x0002220b) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x3124,	// (0x0002220b) vkb2_cell_t_keypad_pane_cp07

0x3135,	// (0x0002221c) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x3135,	// (0x0002221c) vkb2_cell_t_keypad_pane_cp10

0x7cd9,	// (0x00026dc0) vkb2_cell_t_keypad_pane_g1

0x9995,	// (0x00028a7c) vkb2_cell_t_keypad_pane_t1

0x36c1,	// (0x000227a8) popup_grid_graphic2_window

0xedf9,	// (0x0002dee0) aid_size_cell_graphic2_ParamLimits

0xedf9,	// (0x0002dee0) aid_size_cell_graphic2

0xee37,	// (0x0002df1e) bg_popup_window_pane_cp21_ParamLimits

0xee37,	// (0x0002df1e) bg_popup_window_pane_cp21

0xee45,	// (0x0002df2c) graphic2_pages_pane_ParamLimits

0xee45,	// (0x0002df2c) graphic2_pages_pane

0xee9b,	// (0x0002df82) grid_graphic2_control_pane_ParamLimits

0xee9b,	// (0x0002df82) grid_graphic2_control_pane

0xeee3,	// (0x0002dfca) grid_graphic2_pane_ParamLimits

0xeee3,	// (0x0002dfca) grid_graphic2_pane

0xef6a,	// (0x0002e051) cell_graphic2_pane

0x36c1,	// (0x000227a8) main_comp_mode_pane

0x8c1d,	// (0x00027d04) list_ai3_gene_pane_ParamLimits

0xe7b0,	// (0x0002d897) bg_popup_window_pane_cp19_ParamLimits

0x8ffa,	// (0x000280e1) bg_touch_area_indi_pane_ParamLimits

0x8ffa,	// (0x000280e1) bg_touch_area_indi_pane

0x9010,	// (0x000280f7) bg_touch_area_indi_pane_cp01_ParamLimits

0x9010,	// (0x000280f7) bg_touch_area_indi_pane_cp01

0x9026,	// (0x0002810d) bg_touch_area_indi_pane_cp02_ParamLimits

0x9026,	// (0x0002810d) bg_touch_area_indi_pane_cp02

0x903e,	// (0x00028125) bg_touch_area_indi_pane_cp03_ParamLimits

0x903e,	// (0x00028125) bg_touch_area_indi_pane_cp03

0x9058,	// (0x0002813f) popup_slider_window_g1_ParamLimits

0x9074,	// (0x0002815b) popup_slider_window_g2_ParamLimits

0x9090,	// (0x00028177) popup_slider_window_g3_ParamLimits

0xfce3,	// (0x0002edca) popup_slider_window_g_ParamLimits

0x90ec,	// (0x000281d3) popup_slider_window_t1_ParamLimits

0x9160,	// (0x00028247) small_volume_slider_vertical_pane_ParamLimits

0xef6a,	// (0x0002e051) cell_graphic2_pane_ParamLimits

0xefc7,	// (0x0002e0ae) bg_button_pane_cp10_ParamLimits

0xefc7,	// (0x0002e0ae) bg_button_pane_cp10

0xefda,	// (0x0002e0c1) bg_button_pane_cp11_ParamLimits

0xefda,	// (0x0002e0c1) bg_button_pane_cp11

0xefed,	// (0x0002e0d4) graphic2_pages_pane_g1_ParamLimits

0xefed,	// (0x0002e0d4) graphic2_pages_pane_g1

0xf008,	// (0x0002e0ef) graphic2_pages_pane_g2_ParamLimits

0xf008,	// (0x0002e0ef) graphic2_pages_pane_g2

0x0001,

0xfda7,	// (0x0002ee8e) graphic2_pages_pane_g_ParamLimits

0xfda7,	// (0x0002ee8e) graphic2_pages_pane_g

0xf020,	// (0x0002e107) graphic2_pages_pane_t1_ParamLimits

0xf020,	// (0x0002e107) graphic2_pages_pane_t1

0xf038,	// (0x0002e11f) cell_graphic2_control_pane_ParamLimits

0xf038,	// (0x0002e11f) cell_graphic2_control_pane

0xf06a,	// (0x0002e151) cell_graphic2_pane_g1_ParamLimits

0xf06a,	// (0x0002e151) cell_graphic2_pane_g1

0xdaa9,	// (0x0002cb90) cell_graphic2_pane_g2_ParamLimits

0xdaa9,	// (0x0002cb90) cell_graphic2_pane_g2

0xf077,	// (0x0002e15e) cell_graphic2_pane_g3_ParamLimits

0xf077,	// (0x0002e15e) cell_graphic2_pane_g3

0xdab6,	// (0x0002cb9d) cell_graphic2_pane_g4_ParamLimits

0xdab6,	// (0x0002cb9d) cell_graphic2_pane_g4

0xf084,	// (0x0002e16b) cell_graphic2_pane_g5_ParamLimits

0xf084,	// (0x0002e16b) cell_graphic2_pane_g5

0x0004,

0xfdac,	// (0x0002ee93) cell_graphic2_pane_g_ParamLimits

0xfdac,	// (0x0002ee93) cell_graphic2_pane_g

0xf0a4,	// (0x0002e18b) cell_graphic2_pane_t1_ParamLimits

0xf0a4,	// (0x0002e18b) cell_graphic2_pane_t1

0x61b1,	// (0x00025298) grid_highlight_pane_cp11_ParamLimits

0x61b1,	// (0x00025298) grid_highlight_pane_cp11

0x3a3e,	// (0x00022b25) bg_button_pane_cp05

0xf0d8,	// (0x0002e1bf) cell_graphic2_control_pane_g1

0x7a6b,	// (0x00026b52) bg_touch_area_indi_pane_g1

0x9c63,	// (0x00028d4a) aid_cmod_rocker_key_size

0x9c6d,	// (0x00028d54) aid_cmode_itu_key_size

0x9c77,	// (0x00028d5e) main_cmode_video_pane

0x9c81,	// (0x00028d68) main_comp_mode_itu_pane

0x9c8d,	// (0x00028d74) main_comp_mode_rocker_pane

0x9c99,	// (0x00028d80) cell_cmode_rocker_pane_ParamLimits

0x9c99,	// (0x00028d80) cell_cmode_rocker_pane

0x9cab,	// (0x00028d92) cell_cmode_itu_pane_ParamLimits

0x9cab,	// (0x00028d92) cell_cmode_itu_pane

0x400f,	// (0x000230f6) bg_button_pane_cp06_ParamLimits

0x400f,	// (0x000230f6) bg_button_pane_cp06

0x7cd9,	// (0x00026dc0) cell_cmode_rocker_pane_g1_ParamLimits

0x7cd9,	// (0x00026dc0) cell_cmode_rocker_pane_g1

0x9204,	// (0x000282eb) cell_cmode_rocker_pane_g2_ParamLimits

0x9204,	// (0x000282eb) cell_cmode_rocker_pane_g2

0x0001,

0xfdb7,	// (0x0002ee9e) cell_cmode_rocker_pane_g_ParamLimits

0xfdb7,	// (0x0002ee9e) cell_cmode_rocker_pane_g

0x36c1,	// (0x000227a8) bg_button_pane_cp07

0x9cc0,	// (0x00028da7) cell_cmode_itu_pane_g1

0x9cc9,	// (0x00028db0) cell_cmode_itu_pane_t1

0x9cd7,	// (0x00028dbe) cell_cmode_itu_pane_t2

0x0001,

0xfdbc,	// (0x0002eea3) cell_cmode_itu_pane_t

0x942b,	// (0x00028512) aid_touch_ctrl_left

0x9433,	// (0x0002851a) aid_touch_ctrl_right

0x36c1,	// (0x000227a8) compa_mode_pane

0xf0fc,	// (0x0002e1e3) aid_cmod_rocker_key_size_cp

0xf106,	// (0x0002e1ed) aid_cmode_itu_key_size_cp

0x9cf9,	// (0x00028de0) compa_mode_pane_g1

0x9d01,	// (0x00028de8) compa_mode_pane_g2

0x9d09,	// (0x00028df0) compa_mode_pane_g3

0x0002,

0xfdc1,	// (0x0002eea8) compa_mode_pane_g

0xf110,	// (0x0002e1f7) main_comp_mode_itu_pane_cp

0xf118,	// (0x0002e1ff) main_comp_mode_rocker_pane_cp

0xf120,	// (0x0002e207) cell_cmode_itu_pane_cp_ParamLimits

0xf120,	// (0x0002e207) cell_cmode_itu_pane_cp

0xf135,	// (0x0002e21c) cell_cmode_rocker_pane_cp_ParamLimits

0xf135,	// (0x0002e21c) cell_cmode_rocker_pane_cp

0x400f,	// (0x000230f6) bg_button_pane_cp06_cp_ParamLimits

0x400f,	// (0x000230f6) bg_button_pane_cp06_cp

0x7cd9,	// (0x00026dc0) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7cd9,	// (0x00026dc0) cell_cmode_rocker_pane_g1_cp

0x7a6b,	// (0x00026b52) cell_cmode_rocker_pane_g2_cp

0x36c1,	// (0x000227a8) bg_button_pane_cp07_cp

0xf147,	// (0x0002e22e) cell_cmode_itu_pane_g1_cp

0xf150,	// (0x0002e237) cell_cmode_itu_pane_t1_cp

0xf150,	// (0x0002e237) cell_cmode_itu_pane_t2_cp

0xded6,	// (0x0002cfbd) settings_code_pane_cp2

0x37b5,	// (0x0002289c) bg_popup_window_pane_cp3_ParamLimits

0x3c0c,	// (0x00022cf3) heading_pane_cp3_ParamLimits

0x3c18,	// (0x00022cff) listscroll_popup_graphic_pane_ParamLimits

0x275a,	// (0x00021841) fep_hwr_aid_pane_ParamLimits

0x2b23,	// (0x00021c0a) aid_touch_sctrl_top_ParamLimits

0x2b30,	// (0x00021c17) sctrl_sk_top_pane_g1_ParamLimits

0x7cd9,	// (0x00026dc0) sctrl_sk_top_pane_g2_ParamLimits

0xfcfc,	// (0x0002ede3) sctrl_sk_top_pane_g_ParamLimits

0x2b3d,	// (0x00021c24) sctrl_sk_top_pane_t1_ParamLimits

0x2b23,	// (0x00021c0a) aid_touch_sctrl_bottom_ParamLimits

0x2b3d,	// (0x00021c24) sctrl_sk_bottom_pane_t1_ParamLimits

0x9374,	// (0x0002845b) aid_area_touch_clock

0xcbf0,	// (0x0002bcd7) aid_vkb2_area_top_pane_cell_ParamLimits

0xcbf0,	// (0x0002bcd7) aid_vkb2_area_top_pane_cell

0xcc9b,	// (0x0002bd82) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcc9b,	// (0x0002bd82) aid_vkb2_area_bottom_pane_cell

0x98e0,	// (0x000289c7) popup_char_count_window

0x9d5f,	// (0x00028e46) popup_char_count_window_g1

0x9d68,	// (0x00028e4f) popup_char_count_window_g2

0x9d71,	// (0x00028e58) popup_char_count_window_g3

0x0002,

0xfdc8,	// (0x0002eeaf) popup_char_count_window_g

0x9d7a,	// (0x00028e61) popup_char_count_window_t1

0x2bde,	// (0x00021cc5) popup_fep_char_preview_window_ParamLimits

0x2bde,	// (0x00021cc5) popup_fep_char_preview_window

0xcc10,	// (0x0002bcf7) vkb2_top_candi_pane_ParamLimits

0xcc10,	// (0x0002bcf7) vkb2_top_candi_pane

0xf15e,	// (0x0002e245) cell_vkb2_top_candi_pane_ParamLimits

0xf15e,	// (0x0002e245) cell_vkb2_top_candi_pane

0x5b35,	// (0x00024c1c) bg_popup_fep_char_preview_window_ParamLimits

0x5b35,	// (0x00024c1c) bg_popup_fep_char_preview_window

0x314a,	// (0x00022231) popup_fep_char_preview_window_t1_ParamLimits

0x314a,	// (0x00022231) popup_fep_char_preview_window_t1

0x9dd5,	// (0x00028ebc) bg_popup_fep_char_preview_window_g1

0x9ddd,	// (0x00028ec4) bg_popup_fep_char_preview_window_g2

0x9de5,	// (0x00028ecc) bg_popup_fep_char_preview_window_g3

0x9ded,	// (0x00028ed4) bg_popup_fep_char_preview_window_g4

0x9df5,	// (0x00028edc) bg_popup_fep_char_preview_window_g5

0x3184,	// (0x0002226b) bg_popup_fep_char_preview_window_g6

0x9dfd,	// (0x00028ee4) bg_popup_fep_char_preview_window_g7

0x9e05,	// (0x00028eec) bg_popup_fep_char_preview_window_g8

0x9e0d,	// (0x00028ef4) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdcf,	// (0x0002eeb6) bg_popup_fep_char_preview_window_g

0x7cd9,	// (0x00026dc0) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7cd9,	// (0x00026dc0) cell_vkb2_top_candi_pane_g1

0x7ff0,	// (0x000270d7) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7ff0,	// (0x000270d7) cell_vkb2_top_candi_pane_g2

0x8011,	// (0x000270f8) cell_vkb2_top_candi_pane_g3_ParamLimits

0x8011,	// (0x000270f8) cell_vkb2_top_candi_pane_g3

0x318c,	// (0x00022273) cell_vkb2_top_candi_pane_g4_ParamLimits

0x318c,	// (0x00022273) cell_vkb2_top_candi_pane_g4

0x9e15,	// (0x00028efc) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9e15,	// (0x00028efc) cell_vkb2_top_candi_pane_g5

0x9204,	// (0x000282eb) cell_vkb2_top_candi_pane_g6_ParamLimits

0x9204,	// (0x000282eb) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde2,	// (0x0002eec9) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde2,	// (0x0002eec9) cell_vkb2_top_candi_pane_g

0x31ad,	// (0x00022294) cell_vkb2_top_candi_pane_t1

0x2596,	// (0x0002167d) aid_size_touch_slider_mark_ParamLimits

0x2596,	// (0x0002167d) aid_size_touch_slider_mark

0xee81,	// (0x0002df68) grid_graphic2_catg_pane_ParamLimits

0xee81,	// (0x0002df68) grid_graphic2_catg_pane

0xef3d,	// (0x0002e024) popup_grid_graphic2_window_t1_ParamLimits

0xef3d,	// (0x0002e024) popup_grid_graphic2_window_t1

0xef53,	// (0x0002e03a) popup_grid_graphic2_window_t2_ParamLimits

0xef53,	// (0x0002e03a) popup_grid_graphic2_window_t2

0x0001,

0xfda2,	// (0x0002ee89) popup_grid_graphic2_window_t_ParamLimits

0xfda2,	// (0x0002ee89) popup_grid_graphic2_window_t

0x3a3e,	// (0x00022b25) bg_button_pane_cp05_ParamLimits

0xf0d8,	// (0x0002e1bf) cell_graphic2_control_pane_g1_ParamLimits

0xf1c4,	// (0x0002e2ab) cell_graphic2_catg_pane_ParamLimits

0xf1c4,	// (0x0002e2ab) cell_graphic2_catg_pane

0x36c1,	// (0x000227a8) bg_button_pane_cp12

0xf1d6,	// (0x0002e2bd) cell_graphic2_catg_pane_g1

0x9340,	// (0x00028427) cell_tb_ext_pane_t1_ParamLimits

0x2f80,	// (0x00022067) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2f80,	// (0x00022067) vkb2_top_cell_right_narrow_pane

0x2f98,	// (0x0002207f) vkb2_top_cell_right_wide_pane_ParamLimits

0x2f98,	// (0x0002207f) vkb2_top_cell_right_wide_pane

0x274c,	// (0x00021833) bg_vkb2_func_pane_ParamLimits

0x274c,	// (0x00021833) bg_vkb2_func_pane

0x3009,	// (0x000220f0) vkb2_top_cell_left_pane_g1_ParamLimits

0x274c,	// (0x00021833) bg_vkb2_fuc_pane_cp03_ParamLimits

0x274c,	// (0x00021833) bg_vkb2_fuc_pane_cp03

0x3067,	// (0x0002214e) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x54b7,	// (0x0002459e) bg_vkb2_func_pane_g1

0x54bf,	// (0x000245a6) bg_vkb2_func_pane_g2

0x54cf,	// (0x000245b6) bg_vkb2_func_pane_g3

0x54c7,	// (0x000245ae) bg_vkb2_func_pane_g4

0x54d7,	// (0x000245be) bg_vkb2_func_pane_g5

0x54df,	// (0x000245c6) bg_vkb2_func_pane_g6

0x54e7,	// (0x000245ce) bg_vkb2_func_pane_g7

0x54ef,	// (0x000245d6) bg_vkb2_func_pane_g8

0x54af,	// (0x00024596) bg_vkb2_func_pane_g9

0x0008,

0xfdef,	// (0x0002eed6) bg_vkb2_func_pane_g

0x274c,	// (0x00021833) bg_vkb2_fuc_pane_cp01_ParamLimits

0x274c,	// (0x00021833) bg_vkb2_fuc_pane_cp01

0x3009,	// (0x000220f0) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x3009,	// (0x000220f0) vkb2_top_cell_right_wide_pane_g1

0x274c,	// (0x00021833) bg_vkb2_fuc_pane_cp02_ParamLimits

0x274c,	// (0x00021833) bg_vkb2_fuc_pane_cp02

0x3067,	// (0x0002214e) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x3067,	// (0x0002214e) vkb2_top_cell_right_narrow_pane_g1

0xe6ea,	// (0x0002d7d1) aid_touch_area_decrease_ParamLimits

0xe6ea,	// (0x0002d7d1) aid_touch_area_decrease

0xe724,	// (0x0002d80b) aid_touch_area_increase_ParamLimits

0xe724,	// (0x0002d80b) aid_touch_area_increase

0xe74c,	// (0x0002d833) aid_touch_area_mute_ParamLimits

0xe74c,	// (0x0002d833) aid_touch_area_mute

0xe77c,	// (0x0002d863) aid_touch_area_slider_ParamLimits

0xe77c,	// (0x0002d863) aid_touch_area_slider

0xe7bc,	// (0x0002d8a3) popup_slider_window_g4_ParamLimits

0xe7bc,	// (0x0002d8a3) popup_slider_window_g4

0xe7e4,	// (0x0002d8cb) popup_slider_window_g5_ParamLimits

0xe7e4,	// (0x0002d8cb) popup_slider_window_g5

0xe818,	// (0x0002d8ff) popup_slider_window_g6_ParamLimits

0xe818,	// (0x0002d8ff) popup_slider_window_g6

0x911a,	// (0x00028201) popup_slider_window_t2_ParamLimits

0x911a,	// (0x00028201) popup_slider_window_t2

0x0001,

0xfcf0,	// (0x0002edd7) popup_slider_window_t_ParamLimits

0xfcf0,	// (0x0002edd7) popup_slider_window_t

0xe834,	// (0x0002d91b) slider_pane_ParamLimits

0xe834,	// (0x0002d91b) slider_pane

0x9e51,	// (0x00028f38) slider_pane_g1_ParamLimits

0x9e51,	// (0x00028f38) slider_pane_g1

0x9e65,	// (0x00028f4c) slider_pane_g2_ParamLimits

0x9e65,	// (0x00028f4c) slider_pane_g2

0x9e7b,	// (0x00028f62) slider_pane_g3_ParamLimits

0x9e7b,	// (0x00028f62) slider_pane_g3

0x0003,

0xfe02,	// (0x0002eee9) slider_pane_g_ParamLimits

0xfe02,	// (0x0002eee9) slider_pane_g

0xc7df,	// (0x0002b8c6) popup_tb_float_extension_window_ParamLimits

0xc7df,	// (0x0002b8c6) popup_tb_float_extension_window

0x9ea7,	// (0x00028f8e) aid_size_cell_tb_float_ext

0x36c1,	// (0x000227a8) bg_popup_sub_window_cp28

0x9eb3,	// (0x00028f9a) grid_tb_float_ext_pane

0x9ebd,	// (0x00028fa4) cell_tb_float_ext_pane_ParamLimits

0x9ebd,	// (0x00028fa4) cell_tb_float_ext_pane

0x9ed7,	// (0x00028fbe) cell_tb_float_ext_pane_g1

0x9ee0,	// (0x00028fc7) grid_highlight_pane_cp12

0xc9f9,	// (0x0002bae0) cell_last_hwr_side_pane_ParamLimits

0xc9f9,	// (0x0002bae0) cell_last_hwr_side_pane

0x7a6b,	// (0x00026b52) cell_last_hwr_side_pane_g1

0x9ee9,	// (0x00028fd0) cell_last_hwr_side_pane_g2

0x0001,

0xfe0b,	// (0x0002eef2) cell_last_hwr_side_pane_g

0xcd77,	// (0x0002be5e) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcd77,	// (0x0002be5e) vkb2_area_bottom_space_btn_pane

0x7cd9,	// (0x00026dc0) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9995,	// (0x00028a7c) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x31ad,	// (0x00022294) cell_vkb2_top_candi_pane_t1_ParamLimits

0x31cc,	// (0x000222b3) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x31cc,	// (0x000222b3) vkb2_area_bottom_space_btn_pane_g1

0x3206,	// (0x000222ed) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x3206,	// (0x000222ed) vkb2_area_bottom_space_btn_pane_g2

0x323c,	// (0x00022323) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x323c,	// (0x00022323) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe10,	// (0x0002eef7) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe10,	// (0x0002eef7) vkb2_area_bottom_space_btn_pane_g

0x2801,	// (0x000218e8) cel_fep_hwr_func_pane_ParamLimits

0x2801,	// (0x000218e8) cel_fep_hwr_func_pane

0xc9ce,	// (0x0002bab5) cell_hwr_side_button_pane_ParamLimits

0xc9ce,	// (0x0002bab5) cell_hwr_side_button_pane

0x9374,	// (0x0002845b) aid_area_touch_clock_ParamLimits

0x3a3e,	// (0x00022b25) bg_uniindi_top_pane_ParamLimits

0x9386,	// (0x0002846d) uniindi_top_pane_g1_ParamLimits

0x939c,	// (0x00028483) uniindi_top_pane_g2_ParamLimits

0x93a8,	// (0x0002848f) uniindi_top_pane_g3_ParamLimits

0x93b9,	// (0x000284a0) uniindi_top_pane_g4_ParamLimits

0xfd28,	// (0x0002ee0f) uniindi_top_pane_g_ParamLimits

0x93c6,	// (0x000284ad) uniindi_top_pane_t1_ParamLimits

0x3a3e,	// (0x00022b25) bg_vkb2_func_pane_cp01_ParamLimits

0x3a3e,	// (0x00022b25) bg_vkb2_func_pane_cp01

0x9ef2,	// (0x00028fd9) cel_fep_hwr_func_pane_g1_ParamLimits

0x9ef2,	// (0x00028fd9) cel_fep_hwr_func_pane_g1

0x3a3e,	// (0x00022b25) bg_vkb2_func_pane_cp02_ParamLimits

0x3a3e,	// (0x00022b25) bg_vkb2_func_pane_cp02

0x9ef2,	// (0x00028fd9) cell_hwr_side_button_pane_g1_ParamLimits

0x9ef2,	// (0x00028fd9) cell_hwr_side_button_pane_g1

0x5330,	// (0x00024417) status_pane_g4_ParamLimits

0x5330,	// (0x00024417) status_pane_g4

0x534a,	// (0x00024431) status_pane_t1

0x7785,	// (0x0002686c) form2_midp_gauge_slider_cont_pane

0x778d,	// (0x00026874) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe16b,	// (0x0002d252) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe17f,	// (0x0002d266) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf4,	// (0x0002ebdb) form2_midp_gauge_slider_pane_t_ParamLimits

0x77c3,	// (0x000268aa) form2_midp_slider_pane_ParamLimits

0x2b9e,	// (0x00021c85) aid_size_cell_func_vkb2_ParamLimits

0x2b9e,	// (0x00021c85) aid_size_cell_func_vkb2

0x9e93,	// (0x00028f7a) slider_pane_g4_ParamLimits

0x9e93,	// (0x00028f7a) slider_pane_g4

0xcdd8,	// (0x0002bebf) form2_midp_gauge_slider_pane_t2_cp01

0xcde8,	// (0x0002becf) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcde8,	// (0x0002becf) form2_midp_gauge_slider_pane_t3_cp01

0x32b1,	// (0x00022398) form2_midp_slider_pane_cp01

0x36c1,	// (0x000227a8) navi_smil_pane

0x9f2b,	// (0x00029012) navi_smil_pane_g1

0x9f33,	// (0x0002901a) navi_smil_pane_t1

0x9f00,	// (0x00028fe7) form2_midp_slider_pane_g1

0x9f09,	// (0x00028ff0) form2_midp_slider_pane_g2

0x9f11,	// (0x00028ff8) form2_midp_slider_pane_g3

0x9f00,	// (0x00028fe7) form2_midp_slider_pane_g4

0xf1df,	// (0x0002e2c6) form2_midp_slider_pane_g5

0x0004,

0xfe19,	// (0x0002ef00) form2_midp_slider_pane_g

0x3276,	// (0x0002235d) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x3276,	// (0x0002235d) vkb2_area_bottom_space_btn_pane_g4

0xd86f,	// (0x0002c956) lc0_navi_pane_ParamLimits

0xd86f,	// (0x0002c956) lc0_navi_pane

0xd8d9,	// (0x0002c9c0) lc0_stat_indi_pane_ParamLimits

0xd8d9,	// (0x0002c9c0) lc0_stat_indi_pane

0xd8ee,	// (0x0002c9d5) ls0_title_pane_ParamLimits

0xd8ee,	// (0x0002c9d5) ls0_title_pane

0x400f,	// (0x000230f6) bg_popup_sub_pane_cp14_ParamLimits

0x935b,	// (0x00028442) list_uniindi_pane_ParamLimits

0x9367,	// (0x0002844e) uniindi_top_pane_ParamLimits

0x9403,	// (0x000284ea) list_single_uniindi_pane_g1_ParamLimits

0x9416,	// (0x000284fd) list_single_uniindi_pane_t1_ParamLimits

0xce07,	// (0x0002beee) lc0_stat_clock_pane_ParamLimits

0xce07,	// (0x0002beee) lc0_stat_clock_pane

0xf1ea,	// (0x0002e2d1) lc0_stat_indi_pane_g1_ParamLimits

0xf1ea,	// (0x0002e2d1) lc0_stat_indi_pane_g1

0xf1f7,	// (0x0002e2de) lc0_stat_indi_pane_g2_ParamLimits

0xf1f7,	// (0x0002e2de) lc0_stat_indi_pane_g2

0x0001,

0x0082,	// (0x0001f169) lc0_stat_indi_pane_g_ParamLimits

0x0082,	// (0x0001f169) lc0_stat_indi_pane_g

0xce14,	// (0x0002befb) lc0_uni_indicator_pane_ParamLimits

0xce14,	// (0x0002befb) lc0_uni_indicator_pane

0xf204,	// (0x0002e2eb) ls0_title_pane_g1_ParamLimits

0xf204,	// (0x0002e2eb) ls0_title_pane_g1

0xf218,	// (0x0002e2ff) ls0_title_pane_t1_ParamLimits

0xf218,	// (0x0002e2ff) ls0_title_pane_t1

0xce21,	// (0x0002bf08) lc0_uni_indicator_pane_g1_ParamLimits

0xce21,	// (0x0002bf08) lc0_uni_indicator_pane_g1

0x9fa5,	// (0x0002908c) lc0_stat_clock_pane_t1

0x36c1,	// (0x000227a8) main_ai5_pane

0x9fb3,	// (0x0002909a) ai5_sk_pane_ParamLimits

0x9fb3,	// (0x0002909a) ai5_sk_pane

0xf246,	// (0x0002e32d) cell_ai5_widget_pane_ParamLimits

0xf246,	// (0x0002e32d) cell_ai5_widget_pane

0xa08a,	// (0x00029171) aid_size_cell_widget_grid

0xa0a0,	// (0x00029187) bg_ai5_widget_pane_ParamLimits

0xa0a0,	// (0x00029187) bg_ai5_widget_pane

0xa114,	// (0x000291fb) cell_ai5_widget_pane_g2

0xa124,	// (0x0002920b) cell_ai5_widget_pane_g3

0xa13b,	// (0x00029222) cell_ai5_widget_pane_g4

0xa147,	// (0x0002922e) cell_ai5_widget_pane_g5

0xa153,	// (0x0002923a) cell_ai5_widget_pane_g6

0xa15f,	// (0x00029246) cell_ai5_widget_pane_g7

0xa1a7,	// (0x0002928e) cell_ai5_widget_pane_t1_ParamLimits

0xa1a7,	// (0x0002928e) cell_ai5_widget_pane_t1

0xa1c4,	// (0x000292ab) cell_ai5_widget_pane_t2_ParamLimits

0xa1c4,	// (0x000292ab) cell_ai5_widget_pane_t2

0xa1dc,	// (0x000292c3) cell_ai5_widget_pane_t3_ParamLimits

0xa1dc,	// (0x000292c3) cell_ai5_widget_pane_t3

0xa1f4,	// (0x000292db) cell_ai5_widget_pane_t4_ParamLimits

0xa1f4,	// (0x000292db) cell_ai5_widget_pane_t4

0xa211,	// (0x000292f8) cell_ai5_widget_pane_t5_ParamLimits

0xa211,	// (0x000292f8) cell_ai5_widget_pane_t5

0xa230,	// (0x00029317) cell_ai5_widget_pane_t6_ParamLimits

0xa230,	// (0x00029317) cell_ai5_widget_pane_t6

0xa242,	// (0x00029329) cell_ai5_widget_pane_t7_ParamLimits

0xa242,	// (0x00029329) cell_ai5_widget_pane_t7

0xa25b,	// (0x00029342) cell_ai5_widget_pane_t8_ParamLimits

0xa25b,	// (0x00029342) cell_ai5_widget_pane_t8

0x0009,

0xfe39,	// (0x0002ef20) cell_ai5_widget_pane_t_ParamLimits

0xfe39,	// (0x0002ef20) cell_ai5_widget_pane_t

0xa2af,	// (0x00029396) grid_ai5_widget_pane

0x400f,	// (0x000230f6) highlight_cell_ai5_widget_pane_ParamLimits

0x400f,	// (0x000230f6) highlight_cell_ai5_widget_pane

0xf2b0,	// (0x0002e397) ai5_sk_left_pane

0xf2ba,	// (0x0002e3a1) ai5_sk_middle_pane

0xf2c4,	// (0x0002e3ab) ai5_sk_right_pane

0xa2e5,	// (0x000293cc) bg_ai5_widget_pane_g1_ParamLimits

0xa2e5,	// (0x000293cc) bg_ai5_widget_pane_g1

0xa2f1,	// (0x000293d8) bg_ai5_widget_pane_g2_ParamLimits

0xa2f1,	// (0x000293d8) bg_ai5_widget_pane_g2

0xa2fd,	// (0x000293e4) bg_ai5_widget_pane_g3_ParamLimits

0xa2fd,	// (0x000293e4) bg_ai5_widget_pane_g3

0xa309,	// (0x000293f0) bg_ai5_widget_pane_g4_ParamLimits

0xa309,	// (0x000293f0) bg_ai5_widget_pane_g4

0xa315,	// (0x000293fc) bg_ai5_widget_pane_g5_ParamLimits

0xa315,	// (0x000293fc) bg_ai5_widget_pane_g5

0xa321,	// (0x00029408) bg_ai5_widget_pane_g6_ParamLimits

0xa321,	// (0x00029408) bg_ai5_widget_pane_g6

0xa32d,	// (0x00029414) bg_ai5_widget_pane_g7_ParamLimits

0xa32d,	// (0x00029414) bg_ai5_widget_pane_g7

0xa339,	// (0x00029420) bg_ai5_widget_pane_g8_ParamLimits

0xa339,	// (0x00029420) bg_ai5_widget_pane_g8

0xa345,	// (0x0002942c) bg_ai5_widget_pane_g9_ParamLimits

0xa345,	// (0x0002942c) bg_ai5_widget_pane_g9

0x0008,

0xfe4e,	// (0x0002ef35) bg_ai5_widget_pane_g_ParamLimits

0xfe4e,	// (0x0002ef35) bg_ai5_widget_pane_g

0xa377,	// (0x0002945e) cell_shortcut_ai5_widget_pane_ParamLimits

0xa377,	// (0x0002945e) cell_shortcut_ai5_widget_pane

0x4c77,	// (0x00023d5e) bg_cell_shortcut_ai5_widget_pane

0xa388,	// (0x0002946f) cell_grid_ai5_widget_pane_g1

0x4c77,	// (0x00023d5e) highlight_cell_shortcut_ai5_widget_pane

0x54bf,	// (0x000245a6) ai5_sk_left_pane_g1

0xa391,	// (0x00029478) ai5_sk_left_pane_g2

0xa399,	// (0x00029480) ai5_sk_left_pane_g3

0xa3a1,	// (0x00029488) ai5_sk_left_pane_g4

0x0003,

0xfe61,	// (0x0002ef48) ai5_sk_left_pane_g

0xa3a9,	// (0x00029490) ai5_sk_left_pane_t1

0x54b7,	// (0x0002459e) ai5_sk_right_pane_g1

0xa3b7,	// (0x0002949e) ai5_sk_right_pane_g2

0xa3bf,	// (0x000294a6) ai5_sk_right_pane_g3

0xa3c7,	// (0x000294ae) ai5_sk_right_pane_g4

0x0003,

0xfe6a,	// (0x0002ef51) ai5_sk_right_pane_g

0xa3cf,	// (0x000294b6) ai5_sk_right_pane_t1

0x54b7,	// (0x0002459e) ai5_sk_middle_pane_g1

0x54bf,	// (0x000245a6) ai5_sk_middle_pane_g2

0x54d7,	// (0x000245be) ai5_sk_middle_pane_g3

0xa3bf,	// (0x000294a6) ai5_sk_middle_pane_g4

0xa399,	// (0x00029480) ai5_sk_middle_pane_g5

0xa3dd,	// (0x000294c4) ai5_sk_middle_pane_g6

0xf2ce,	// (0x0002e3b5) ai5_sk_middle_pane_g7

0x0006,

0xfe73,	// (0x0002ef5a) ai5_sk_middle_pane_g

0xd75b,	// (0x0002c842) aid_touch_area_size_lc0_ParamLimits

0xd75b,	// (0x0002c842) aid_touch_area_size_lc0

0x298c,	// (0x00021a73) cell_hwr_candidate_pane_t1_ParamLimits

0x5013,	// (0x000240fa) aid_touch_navi_pane

0xd9e7,	// (0x0002cace) status_dt_navi_pane_ParamLimits

0xd9e7,	// (0x0002cace) status_dt_navi_pane

0xd9ff,	// (0x0002cae6) status_dt_sta_pane_ParamLimits

0xd9ff,	// (0x0002cae6) status_dt_sta_pane

0xf2d6,	// (0x0002e3bd) dt_sta_controll_pane

0xf2e3,	// (0x0002e3ca) dt_sta_indi_pane

0xf2f0,	// (0x0002e3d7) dt_sta_title_pane

0x3a3e,	// (0x00022b25) bg_dt_sta_indi_pane_ParamLimits

0x3a3e,	// (0x00022b25) bg_dt_sta_indi_pane

0xa41e,	// (0x00029505) dt_sta_battery_pane

0xf302,	// (0x0002e3e9) dt_sta_indi_pane_g1

0xf30b,	// (0x0002e3f2) dt_sta_indi_pane_g2

0xf314,	// (0x0002e3fb) dt_sta_indi_pane_g3

0x0002,

0x00e5,	// (0x0001f1cc) dt_sta_indi_pane_g

0xf31d,	// (0x0002e404) dt_sta_signal_pane

0x400f,	// (0x000230f6) bg_dt_sta_title_pane_ParamLimits

0x400f,	// (0x000230f6) bg_dt_sta_title_pane

0xa44a,	// (0x00029531) dt_sta_title_pane_g1

0xf326,	// (0x0002e40d) dt_sta_title_pane_t1_ParamLimits

0xf326,	// (0x0002e40d) dt_sta_title_pane_t1

0x36c1,	// (0x000227a8) bg_dt_sta_control_pane

0xf33b,	// (0x0002e422) dt_sta_controll_pane_g1

0xa470,	// (0x00029557) bg_dt_sta_title_pane_g1

0xa479,	// (0x00029560) bg_dt_sta_title_pane_g2

0xa482,	// (0x00029569) bg_dt_sta_title_pane_g3

0x0002,

0xfe82,	// (0x0002ef69) bg_dt_sta_title_pane_g

0x7a6b,	// (0x00026b52) bg_dt_sta_indi_pane_g1

0xa48b,	// (0x00029572) dt_sta_signal_pane_g1

0xa493,	// (0x0002957a) dt_sta_signal_pane_g2

0x0001,

0xfe89,	// (0x0002ef70) dt_sta_signal_pane_g

0xa49b,	// (0x00029582) dt_sta_battery_pane_g1

0xa4a4,	// (0x0002958b) dt_sta_battery_pane_t1

0x7a6b,	// (0x00026b52) bg_dt_sta_control_pane_g1

0x476d,	// (0x00023854) fep_china_uni_eep_pane

0x4775,	// (0x0002385c) fep_china_uni_entry_pane_ParamLimits

0x4785,	// (0x0002386c) popup_fep_china_uni_window_g1_ParamLimits

0x4795,	// (0x0002387c) popup_fep_china_uni_window_g2_ParamLimits

0x4795,	// (0x0002387c) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0002e804) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0002e804) popup_fep_china_uni_window_g

0xa4b3,	// (0x0002959a) fep_china_uni_eep_pane_g1

0xa4bb,	// (0x000295a2) fep_china_uni_eep_pane_t1

0x9f22,	// (0x00029009) aid_touch_area_size_smil_player

0x515f,	// (0x00024246) lc0_clock_pane

0x533e,	// (0x00024425) status_pane_g5_ParamLimits

0x533e,	// (0x00024425) status_pane_g5

0xc36d,	// (0x0002b454) popup_keymap_window

0x5304,	// (0x000243eb) status_icon_pane

0xa124,	// (0x0002920b) cell_ai5_widget_pane_g3_ParamLimits

0xa13b,	// (0x00029222) cell_ai5_widget_pane_g4_ParamLimits

0xa147,	// (0x0002922e) cell_ai5_widget_pane_g5_ParamLimits

0xa16b,	// (0x00029252) cell_ai5_widget_pane_g8_ParamLimits

0xa16b,	// (0x00029252) cell_ai5_widget_pane_g8

0xa17f,	// (0x00029266) cell_ai5_widget_pane_g9_ParamLimits

0xa17f,	// (0x00029266) cell_ai5_widget_pane_g9

0xa193,	// (0x0002927a) cell_ai5_widget_pane_g10_ParamLimits

0xa193,	// (0x0002927a) cell_ai5_widget_pane_g10

0xa4ca,	// (0x000295b1) status_icon_pane_g1

0x36c1,	// (0x000227a8) bg_popup_sub_pane_cp13

0xa4d2,	// (0x000295b9) popup_keymap_window_t1

0xd6f1,	// (0x0002c7d8) control_pane_g6_ParamLimits

0xd6f1,	// (0x0002c7d8) control_pane_g6

0xd6fe,	// (0x0002c7e5) control_pane_g7_ParamLimits

0xd6fe,	// (0x0002c7e5) control_pane_g7

0xd70b,	// (0x0002c7f2) control_pane_g8_ParamLimits

0xd70b,	// (0x0002c7f2) control_pane_g8

0xf2d6,	// (0x0002e3bd) dt_sta_controll_pane_ParamLimits

0xf2e3,	// (0x0002e3ca) dt_sta_indi_pane_ParamLimits

0xf2f0,	// (0x0002e3d7) dt_sta_title_pane_ParamLimits

0x3f47,	// (0x0002302e) aid_size_touch_scroll_bar_cale

0x153c,	// (0x00020623) popup_discreet_window_ParamLimits

0x153c,	// (0x00020623) popup_discreet_window

0xbf60,	// (0x0002b047) popup_sk_window

0x5b35,	// (0x00024c1c) bg_popup_sub_pane_cp28_ParamLimits

0x5b35,	// (0x00024c1c) bg_popup_sub_pane_cp28

0xa4e0,	// (0x000295c7) popup_discreet_window_g1_ParamLimits

0xa4e0,	// (0x000295c7) popup_discreet_window_g1

0xa500,	// (0x000295e7) popup_discreet_window_t1_ParamLimits

0xa500,	// (0x000295e7) popup_discreet_window_t1

0xa51e,	// (0x00029605) popup_discreet_window_t2_ParamLimits

0xa51e,	// (0x00029605) popup_discreet_window_t2

0x0002,

0xfe8e,	// (0x0002ef75) popup_discreet_window_t_ParamLimits

0xfe8e,	// (0x0002ef75) popup_discreet_window_t

0x32e9,	// (0x000223d0) popup_sk_window_g1

0x32f3,	// (0x000223da) popup_sk_window_g2

0x0001,

0xfe95,	// (0x0002ef7c) popup_sk_window_g

0x32fd,	// (0x000223e4) popup_sk_window_t1

0x330b,	// (0x000223f2) popup_sk_window_t1_copy1

0xa114,	// (0x000291fb) cell_ai5_widget_pane_g2_ParamLimits

0xa26d,	// (0x00029354) cell_ai5_widget_pane_t9_ParamLimits

0xa26d,	// (0x00029354) cell_ai5_widget_pane_t9

0x36c1,	// (0x000227a8) main_fep_fshwr2_pane

0xce4f,	// (0x0002bf36) aid_fshwr2_btn_pane

0xce60,	// (0x0002bf47) aid_fshwr2_syb_pane

0xce71,	// (0x0002bf58) aid_fshwr2_txt_pane

0xce7d,	// (0x0002bf64) fshwr2_func_candi_pane

0xce9c,	// (0x0002bf83) fshwr2_hwr_syb_pane

0xceb7,	// (0x0002bf9e) fshwr2_icf_pane

0x36c1,	// (0x000227a8) fshwr2_icf_bg_pane

0xcee0,	// (0x0002bfc7) fshwr2_icf_pane_t1_ParamLimits

0xcee0,	// (0x0002bfc7) fshwr2_icf_pane_t1

0x465f,	// (0x00023746) fshwr2_func_candi_pane_g1

0xf344,	// (0x0002e42b) fshwr2_func_candi_row_pane_ParamLimits

0xf344,	// (0x0002e42b) fshwr2_func_candi_row_pane

0xcef9,	// (0x0002bfe0) cell_fshwr2_syb_pane_ParamLimits

0xcef9,	// (0x0002bfe0) cell_fshwr2_syb_pane

0x7cd9,	// (0x00026dc0) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7cd9,	// (0x00026dc0) fshwr2_hwr_syb_pane_g1

0x36c1,	// (0x000227a8) bg_popup_call_pane_cp01

0xcf0f,	// (0x0002bff6) fshwr2_func_candi_cell_pane_ParamLimits

0xcf0f,	// (0x0002bff6) fshwr2_func_candi_cell_pane

0xf354,	// (0x0002e43b) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf354,	// (0x0002e43b) fshwr2_func_candi_cell_bg_pane

0xcf44,	// (0x0002c02b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcf44,	// (0x0002c02b) fshwr2_func_candi_cell_pane_g1

0xcf73,	// (0x0002c05a) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xcf73,	// (0x0002c05a) fshwr2_func_candi_cell_pane_t1

0x36c1,	// (0x000227a8) bg_button_pane_cp08

0x6e52,	// (0x00025f39) cell_fshwr2_syb_bg_pane

0xcf86,	// (0x0002c06d) cell_fshwr2_syb_bg_pane_g1

0xcf8e,	// (0x0002c075) cell_fshwr2_syb_bg_pane_t1

0x400f,	// (0x000230f6) main_tmo_pane

0xdd09,	// (0x0002cdf0) uni_indicator_pane_g1_ParamLimits

0xdd1f,	// (0x0002ce06) uni_indicator_pane_g2_ParamLimits

0xdd35,	// (0x0002ce1c) uni_indicator_pane_g3_ParamLimits

0x668b,	// (0x00025772) uni_indicator_pane_g4_ParamLimits

0x668b,	// (0x00025772) uni_indicator_pane_g4

0x669f,	// (0x00025786) uni_indicator_pane_g5_ParamLimits

0x669f,	// (0x00025786) uni_indicator_pane_g5

0x669f,	// (0x00025786) uni_indicator_pane_g6_ParamLimits

0x669f,	// (0x00025786) uni_indicator_pane_g6

0xf915,	// (0x0002e9fc) uni_indicator_pane_g_ParamLimits

0xe6cc,	// (0x0002d7b3) popup_tmo_note_window_ParamLimits

0xe6cc,	// (0x0002d7b3) popup_tmo_note_window

0x400f,	// (0x000230f6) fshwr2_bg_pane

0xcf64,	// (0x0002c04b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xcf64,	// (0x0002c04b) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9a,	// (0x0002ef81) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9a,	// (0x0002ef81) fshwr2_func_candi_cell_pane_g

0x7a6b,	// (0x00026b52) bg_popup_window_pane_cp01

0x3438,	// (0x0002251f) bg_popup_window_pane_g1_cp01

0xa580,	// (0x00029667) bg_popup_window_pane_cp22_ParamLimits

0xa580,	// (0x00029667) bg_popup_window_pane_cp22

0xa58e,	// (0x00029675) listscroll_tmo_link_pane_ParamLimits

0xa58e,	// (0x00029675) listscroll_tmo_link_pane

0xa5ce,	// (0x000296b5) popup_tmo_note_window_g1_ParamLimits

0xa5ce,	// (0x000296b5) popup_tmo_note_window_g1

0xa5db,	// (0x000296c2) tmo_note_info_pane_ParamLimits

0xa5db,	// (0x000296c2) tmo_note_info_pane

0xf360,	// (0x0002e447) list_tmo_note_info_pane_g1_ParamLimits

0xf360,	// (0x0002e447) list_tmo_note_info_pane_g1

0xa60c,	// (0x000296f3) list_tmo_note_info_pane_g2_ParamLimits

0xa60c,	// (0x000296f3) list_tmo_note_info_pane_g2

0x0001,

0xfe9f,	// (0x0002ef86) list_tmo_note_info_pane_g_ParamLimits

0xfe9f,	// (0x0002ef86) list_tmo_note_info_pane_g

0xa628,	// (0x0002970f) list_tmo_note_info_text_pane_ParamLimits

0xa628,	// (0x0002970f) list_tmo_note_info_text_pane

0xa6ab,	// (0x00029792) list_tmo_link_pane

0xa6b8,	// (0x0002979f) scroll_pane_cp20

0xa6c5,	// (0x000297ac) list_single_tmo_link_pane_ParamLimits

0xa6c5,	// (0x000297ac) list_single_tmo_link_pane

0xa6d5,	// (0x000297bc) list_single_tmo_link_pane_t1

0xa6e3,	// (0x000297ca) list_tmo_note_info_text_pane_t1_ParamLimits

0xa6e3,	// (0x000297ca) list_tmo_note_info_text_pane_t1

0xd348,	// (0x0002c42f) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd348,	// (0x0002c42f) aid_size_touch_scroll_bar_cp01

0xba69,	// (0x0002ab50) aid_size_touch_slider_marker

0xbf50,	// (0x0002b037) popup_settings_window_ParamLimits

0xbf50,	// (0x0002b037) popup_settings_window

0x0901,	// (0x0001f9e8) popup_candi_list_indi_window

0x5013,	// (0x000240fa) aid_touch_navi_pane_ParamLimits

0x2af7,	// (0x00021bde) rs_clock_indi_pane

0x2b00,	// (0x00021be7) sctrl_sk_bottom_pane_ParamLimits

0x2b11,	// (0x00021bf8) sctrl_sk_top_pane_ParamLimits

0x2bf8,	// (0x00021cdf) popup_fep_tooltip_window

0xa08a,	// (0x00029171) aid_size_cell_widget_grid_ParamLimits

0xa0ff,	// (0x000291e6) cell_ai5_widget_pane_g1_ParamLimits

0xa0ff,	// (0x000291e6) cell_ai5_widget_pane_g1

0xa153,	// (0x0002923a) cell_ai5_widget_pane_g6_ParamLimits

0xa15f,	// (0x00029246) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe24,	// (0x0002ef0b) cell_ai5_widget_pane_g_ParamLimits

0xfe24,	// (0x0002ef0b) cell_ai5_widget_pane_g

0xa291,	// (0x00029378) cell_ai5_widget_pane_t10_ParamLimits

0xa291,	// (0x00029378) cell_ai5_widget_pane_t10

0xa2af,	// (0x00029396) grid_ai5_widget_pane_ParamLimits

0xa351,	// (0x00029438) cell_contacts_ai5_widget_pane_ParamLimits

0xa351,	// (0x00029438) cell_contacts_ai5_widget_pane

0xa533,	// (0x0002961a) popup_discreet_window_t3_ParamLimits

0xa533,	// (0x0002961a) popup_discreet_window_t3

0xcecc,	// (0x0002bfb3) popup_fshwr2_char_preview_window_ParamLimits

0xcecc,	// (0x0002bfb3) popup_fshwr2_char_preview_window

0xf377,	// (0x0002e45e) tmo_note_info_pane_t1

0xf38c,	// (0x0002e473) tmo_note_info_pane_t2

0xf3a5,	// (0x0002e48c) tmo_note_info_pane_t3

0xa687,	// (0x0002976e) tmo_note_info_pane_t4

0xa699,	// (0x00029780) tmo_note_info_pane_t5

0x0004,

0xfea4,	// (0x0002ef8b) tmo_note_info_pane_t

0xa6ab,	// (0x00029792) list_tmo_link_pane_ParamLimits

0xa6b8,	// (0x0002979f) scroll_pane_cp20_ParamLimits

0x36c1,	// (0x000227a8) bg_popup_fep_char_preview_window_cp01

0xa6fc,	// (0x000297e3) popup_fshwr2_char_preview_window_t1

0xa70a,	// (0x000297f1) popup_candi_list_indi_window_g1

0xa713,	// (0x000297fa) bg_cell_contacts_ai5_widget_pane

0xa71f,	// (0x00029806) cell_contacts_ai5_widget_pane_g1

0xa734,	// (0x0002981b) cell_contacts_ai5_widget_pane_g2

0xa740,	// (0x00029827) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeaf,	// (0x0002ef96) cell_contacts_ai5_widget_pane_g

0xa74c,	// (0x00029833) cell_contacts_ai5_widget_pane_t1

0x400f,	// (0x000230f6) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf3ba,	// (0x0002e4a1) settings_container_pane

0x4c77,	// (0x00023d5e) listscroll_set_pane_copy1

0x7141,	// (0x00026228) scroll_pane_cp121_copy1

0xa7cf,	// (0x000298b6) set_content_pane_copy1

0xf3c6,	// (0x0002e4ad) aid_height_set_list_copy1_ParamLimits

0xf3c6,	// (0x0002e4ad) aid_height_set_list_copy1

0x6892,	// (0x00025979) aid_size_parent_copy1_ParamLimits

0x6892,	// (0x00025979) aid_size_parent_copy1

0xf3d2,	// (0x0002e4b9) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf3d2,	// (0x0002e4b9) button_value_adjust_pane_cp6_copy1

0x4fb1,	// (0x00024098) list_highlight_pane_cp2_copy1_ParamLimits

0x4fb1,	// (0x00024098) list_highlight_pane_cp2_copy1

0xf3e6,	// (0x0002e4cd) list_set_pane_copy1_ParamLimits

0xf3e6,	// (0x0002e4cd) list_set_pane_copy1

0xa75e,	// (0x00029845) main_pane_set_t1_copy1_ParamLimits

0xa75e,	// (0x00029845) main_pane_set_t1_copy1

0xa798,	// (0x0002987f) main_pane_set_t2_copy1_ParamLimits

0xa798,	// (0x0002987f) main_pane_set_t2_copy1

0xa8a4,	// (0x0002998b) main_pane_set_t3_copy1

0xa8b2,	// (0x00029999) main_pane_set_t4_copy1

0xa7b7,	// (0x0002989e) set_content_pane_g1_copy1_ParamLimits

0xa7b7,	// (0x0002989e) set_content_pane_g1_copy1

0xf493,	// (0x0002e57a) setting_code_pane_copy1

0xa8c8,	// (0x000299af) setting_slider_graphic_pane_copy1

0xa8c8,	// (0x000299af) setting_slider_pane_copy1

0xa8c8,	// (0x000299af) setting_text_pane_copy1

0xa8c8,	// (0x000299af) setting_volume_pane_copy1

0xf493,	// (0x0002e57a) settings_code_pane_cp2_copy1

0xf49b,	// (0x0002e582) settings_code_pane_cp_copy1_ParamLimits

0xf49b,	// (0x0002e582) settings_code_pane_cp_copy1

0xcf9d,	// (0x0002c084) volume_set_pane_copy1

0xf4af,	// (0x0002e596) volume_set_pane_g10_copy1

0xf4b7,	// (0x0002e59e) volume_set_pane_g1_copy1

0xf4bf,	// (0x0002e5a6) volume_set_pane_g2_copy1

0xf4c7,	// (0x0002e5ae) volume_set_pane_g3_copy1

0xf4cf,	// (0x0002e5b6) volume_set_pane_g4_copy1

0xf4d7,	// (0x0002e5be) volume_set_pane_g5_copy1

0xf4df,	// (0x0002e5c6) volume_set_pane_g6_copy1

0xf4e7,	// (0x0002e5ce) volume_set_pane_g7_copy1

0xf4ef,	// (0x0002e5d6) volume_set_pane_g8_copy1

0xf4f7,	// (0x0002e5de) volume_set_pane_g9_copy1

0x37b5,	// (0x0002289c) bg_set_opt_pane_cp_copy1_ParamLimits

0x37b5,	// (0x0002289c) bg_set_opt_pane_cp_copy1

0x3449,	// (0x00022530) setting_slider_pane_t1_copy1_ParamLimits

0x3449,	// (0x00022530) setting_slider_pane_t1_copy1

0xcfa5,	// (0x0002c08c) setting_slider_pane_t2_copy1_ParamLimits

0xcfa5,	// (0x0002c08c) setting_slider_pane_t2_copy1

0xcfbf,	// (0x0002c0a6) setting_slider_pane_t3_copy1_ParamLimits

0xcfbf,	// (0x0002c0a6) setting_slider_pane_t3_copy1

0xcfd7,	// (0x0002c0be) slider_set_pane_copy1_ParamLimits

0xcfd7,	// (0x0002c0be) slider_set_pane_copy1

0x406a,	// (0x00023151) set_opt_bg_pane_g1_copy2

0x4072,	// (0x00023159) set_opt_bg_pane_g2_copy2

0xa934,	// (0x00029a1b) set_opt_bg_pane_g3_copy2

0x4082,	// (0x00023169) set_opt_bg_pane_g4_copy2

0x408a,	// (0x00023171) set_opt_bg_pane_g5_copy2

0x4092,	// (0x00023179) set_opt_bg_pane_g6_copy2

0xf4ff,	// (0x0002e5e6) set_opt_bg_pane_g7_copy2

0xa946,	// (0x00029a2d) set_opt_bg_pane_g8_copy2

0xa950,	// (0x00029a37) set_opt_bg_pane_g9_copy2

0x34af,	// (0x00022596) aid_size_touch_slider_mark_copy1_ParamLimits

0x34af,	// (0x00022596) aid_size_touch_slider_mark_copy1

0xa95a,	// (0x00029a41) slider_set_pane_g1_copy1

0x34c3,	// (0x000225aa) slider_set_pane_g2_copy1

0x25b6,	// (0x0002169d) slider_set_pane_g3_copy1_ParamLimits

0x25b6,	// (0x0002169d) slider_set_pane_g3_copy1

0x25ca,	// (0x000216b1) slider_set_pane_g4_copy1_ParamLimits

0x25ca,	// (0x000216b1) slider_set_pane_g4_copy1

0x25e2,	// (0x000216c9) slider_set_pane_g5_copy1_ParamLimits

0x25e2,	// (0x000216c9) slider_set_pane_g5_copy1

0x25b6,	// (0x0002169d) slider_set_pane_g6_copy1_ParamLimits

0x25b6,	// (0x0002169d) slider_set_pane_g6_copy1

0x34cb,	// (0x000225b2) slider_set_pane_g7_copy1_ParamLimits

0x34cb,	// (0x000225b2) slider_set_pane_g7_copy1

0x36d5,	// (0x000227bc) bg_set_opt_pane_cp2_copy1

0xa963,	// (0x00029a4a) setting_slider_graphic_pane_g1_copy1

0xf507,	// (0x0002e5ee) setting_slider_graphic_pane_t1_copy1

0xf517,	// (0x0002e5fe) setting_slider_graphic_pane_t2_copy1

0xf527,	// (0x0002e60e) slider_set_pane_cp_copy1

0xa99c,	// (0x00029a83) input_focus_pane_cp1_copy1

0xa9a5,	// (0x00029a8c) list_set_text_pane_copy1

0xa9ad,	// (0x00029a94) setting_text_pane_g1_copy1

0x12b0,	// (0x00020397) set_text_pane_t1_copy1

0xa99c,	// (0x00029a83) input_focus_pane_cp2_copy1

0xa9ad,	// (0x00029a94) setting_code_pane_g1_copy1

0xf52f,	// (0x0002e616) setting_code_pane_t1_copy1

0x6f75,	// (0x0002605c) list_set_graphic_pane_copy1

0x36d5,	// (0x000227bc) bg_set_opt_pane_cp4_copy1

0xd56a,	// (0x0002c651) list_set_graphic_pane_g1_copy1_ParamLimits

0xd56a,	// (0x0002c651) list_set_graphic_pane_g1_copy1

0xf53d,	// (0x0002e624) list_set_graphic_pane_g2_copy1

0xd582,	// (0x0002c669) list_set_graphic_pane_t1_copy1_ParamLimits

0xd582,	// (0x0002c669) list_set_graphic_pane_t1_copy1

0x7a6b,	// (0x00026b52) rs_clock_indi_pane_g1

0xa9e0,	// (0x00029ac7) rs_clock_indi_pane_t1

0xa9ee,	// (0x00029ad5) rs_indi_pane

0xa9f6,	// (0x00029add) rs_indi_pane_g1

0xa9ff,	// (0x00029ae6) rs_indi_pane_g2

0xaa08,	// (0x00029aef) rs_indi_pane_g3

0x0002,

0xfeb6,	// (0x0002ef9d) rs_indi_pane_g

0x4c77,	// (0x00023d5e) bg_popup_preview_window_pane_cp03

0xaa11,	// (0x00029af8) popup_fep_tooltip_window_t1

0x86e7,	// (0x000277ce) popup_note2_window_g2_ParamLimits

0x86e7,	// (0x000277ce) popup_note2_window_g2

0x0001,

0xfc60,	// (0x0002ed47) popup_note2_window_g_ParamLimits

0xfc60,	// (0x0002ed47) popup_note2_window_g

0x8be3,	// (0x00027cca) bg_popup_sub_pane_cp11_ParamLimits

0x8bf0,	// (0x00027cd7) cell_ai3_links_pane_g1_ParamLimits

0x8c07,	// (0x00027cee) cell_ai3_links_pane_t1

0x12b0,	// (0x00020397) set_text_pane_t1_copy1_ParamLimits

0x4b94,	// (0x00023c7b) cell_graphic_popup_pane_cp2_ParamLimits

0x4b94,	// (0x00023c7b) cell_graphic_popup_pane_cp2

0xaa1f,	// (0x00029b06) cell_graphic_popup_pane_g1_cp2

0x3d5a,	// (0x00022e41) cell_graphic_popup_pane_g2_cp2

0xaa27,	// (0x00029b0e) cell_graphic_popup_pane_g3_cp2

0xaa2f,	// (0x00029b16) cell_graphic_popup_pane_t2_cp2

0x3d6b,	// (0x00022e52) grid_highlight_pane_cp3_cp2

0x43aa,	// (0x00023491) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x400f,	// (0x000230f6) main_tmo_pane_ParamLimits

0xe6c0,	// (0x0002d7a7) popup_tmo_big_image_note_window

0xa0ee,	// (0x000291d5) cell_ai5_widget_list_pane

0xa0f6,	// (0x000291dd) cell_ai5_widget_lrg_icon_pane

0xf377,	// (0x0002e45e) tmo_note_info_pane_t1_ParamLimits

0xf38c,	// (0x0002e473) tmo_note_info_pane_t2_ParamLimits

0xf3a5,	// (0x0002e48c) tmo_note_info_pane_t3_ParamLimits

0xa687,	// (0x0002976e) tmo_note_info_pane_t4_ParamLimits

0xa699,	// (0x00029780) tmo_note_info_pane_t5_ParamLimits

0xfea4,	// (0x0002ef8b) tmo_note_info_pane_t_ParamLimits

0xf3ba,	// (0x0002e4a1) settings_container_pane_ParamLimits

0xa994,	// (0x00029a7b) indicator_popup_pane_cp5

0xa994,	// (0x00029a7b) indicator_popup_pane_cp6

0x6f75,	// (0x0002605c) list_set_graphic_pane_copy1_ParamLimits

0x36c1,	// (0x000227a8) bg_popup_window_pane_cp23

0xaa3d,	// (0x00029b24) popup_tmo_big_image_note_window_g1

0xaa46,	// (0x00029b2d) popup_tmo_big_image_note_window_t1

0xaa56,	// (0x00029b3d) popup_tmo_big_image_note_window_t2

0xaa66,	// (0x00029b4d) popup_tmo_big_image_note_window_t3

0x0002,

0xfebd,	// (0x0002efa4) popup_tmo_big_image_note_window_t

0x7a6b,	// (0x00026b52) cell_ai5_widget_lrg_icon_pane_g1

0xaa76,	// (0x00029b5d) cell_ai5_widget_lrg_icon_pane_t1

0xaa84,	// (0x00029b6b) cell_ai5_widget_list_row_pane_ParamLimits

0xaa84,	// (0x00029b6b) cell_ai5_widget_list_row_pane

0xaa9b,	// (0x00029b82) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xaa9b,	// (0x00029b82) cell_ai5_widget_list_row_pane_g1

0xaaa8,	// (0x00029b8f) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xaaa8,	// (0x00029b8f) cell_ai5_widget_list_row_pane_t1

0xaad6,	// (0x00029bbd) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xaad6,	// (0x00029bbd) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec4,	// (0x0002efab) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec4,	// (0x0002efab) cell_ai5_widget_list_row_pane_t

0x36c1,	// (0x000227a8) main_fep_vtchi_ss_pane

0x34fd,	// (0x000225e4) popup_fep_char_pre_window

0x3505,	// (0x000225ec) popup_fep_ituss_window

0x3526,	// (0x0002260d) popup_fep_vkbss_window

0xaafe,	// (0x00029be5) grid_vkbss_keypad_pane_ParamLimits

0xaafe,	// (0x00029be5) grid_vkbss_keypad_pane

0xab0e,	// (0x00029bf5) ituss_keypad_pane

0x3551,	// (0x00022638) aid_vkbss_key_offset_ParamLimits

0x3551,	// (0x00022638) aid_vkbss_key_offset

0x355d,	// (0x00022644) cell_vkbss_key_pane_ParamLimits

0x355d,	// (0x00022644) cell_vkbss_key_pane

0x5318,	// (0x000243ff) bg_cell_vkbss_key_g1_ParamLimits

0x5318,	// (0x000243ff) bg_cell_vkbss_key_g1

0xab1d,	// (0x00029c04) cell_vkbss_key_3p_pane_ParamLimits

0xab1d,	// (0x00029c04) cell_vkbss_key_3p_pane

0xab37,	// (0x00029c1e) cell_vkbss_key_g1_ParamLimits

0xab37,	// (0x00029c1e) cell_vkbss_key_g1

0xab51,	// (0x00029c38) cell_vkbss_key_t1_ParamLimits

0xab51,	// (0x00029c38) cell_vkbss_key_t1

0x3573,	// (0x0002265a) cell_ituss_key_pane_ParamLimits

0x3573,	// (0x0002265a) cell_ituss_key_pane

0xab7c,	// (0x00029c63) bg_cell_ituss_key_g1_ParamLimits

0xab7c,	// (0x00029c63) bg_cell_ituss_key_g1

0xab88,	// (0x00029c6f) cell_ituss_key_pane_g1_ParamLimits

0xab88,	// (0x00029c6f) cell_ituss_key_pane_g1

0x3584,	// (0x0002266b) cell_ituss_key_pane_g2_ParamLimits

0x3584,	// (0x0002266b) cell_ituss_key_pane_g2

0x0002,

0xfecb,	// (0x0002efb2) cell_ituss_key_pane_g_ParamLimits

0xfecb,	// (0x0002efb2) cell_ituss_key_pane_g

0x35b0,	// (0x00022697) cell_ituss_key_t1_ParamLimits

0x35b0,	// (0x00022697) cell_ituss_key_t1

0x35ea,	// (0x000226d1) cell_ituss_key_t2_ParamLimits

0x35ea,	// (0x000226d1) cell_ituss_key_t2

0x361b,	// (0x00022702) cell_ituss_key_t3_ParamLimits

0x361b,	// (0x00022702) cell_ituss_key_t3

0x35ea,	// (0x000226d1) cell_ituss_key_t4_ParamLimits

0x35ea,	// (0x000226d1) cell_ituss_key_t4

0x0004,

0xfed2,	// (0x0002efb9) cell_ituss_key_t_ParamLimits

0xfed2,	// (0x0002efb9) cell_ituss_key_t

0xabae,	// (0x00029c95) cell_vkbss_key_3p_pane_g1

0xabb6,	// (0x00029c9d) cell_vkbss_key_3p_pane_g2

0xabbe,	// (0x00029ca5) cell_vkbss_key_3p_pane_g3

0x0002,

0xfedd,	// (0x0002efc4) cell_vkbss_key_3p_pane_g

0x36c1,	// (0x000227a8) bg_popup_fep_char_preview_window_cp02

0x365e,	// (0x00022745) popup_fep_char_pre_window_t1

0xf2a6,	// (0x0002e38d) main_ai5_sk_pane

0xa713,	// (0x000297fa) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa71f,	// (0x00029806) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa734,	// (0x0002981b) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa740,	// (0x00029827) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeaf,	// (0x0002ef96) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa74c,	// (0x00029833) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x400f,	// (0x000230f6) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf545,	// (0x0002e62c) main_ai5_sk_pane_g1

0x5973,	// (0x00024a5a) popup_query_code_window_g1

0x351b,	// (0x00022602) popup_fep_vkb_icf_pane

0x352f,	// (0x00022616) popup_fep_vtchi_icf_pane

0xabcf,	// (0x00029cb6) bg_icf_pane

0xabdb,	// (0x00029cc2) list_vkb_icf_pane

0x4fb1,	// (0x00024098) bg_icf_pane_cp01

0xabe7,	// (0x00029cce) vtchi_icf_list_pane

0xabf8,	// (0x00029cdf) list_vkb_icf_pane_t1_ParamLimits

0xabf8,	// (0x00029cdf) list_vkb_icf_pane_t1

0xac10,	// (0x00029cf7) vtchi_icf_list_pane_t1_ParamLimits

0xac10,	// (0x00029cf7) vtchi_icf_list_pane_t1

0x3505,	// (0x000225ec) popup_fep_ituss_window_ParamLimits

0x352f,	// (0x00022616) popup_fep_vtchi_icf_pane_ParamLimits

0xab0e,	// (0x00029bf5) ituss_keypad_pane_ParamLimits

0x3545,	// (0x0002262c) ituss_sks_pane

0xabcf,	// (0x00029cb6) bg_icf_pane_ParamLimits

0x34e1,	// (0x000225c8) icf_edit_indi_pane_ParamLimits

0x34e1,	// (0x000225c8) icf_edit_indi_pane

0xabdb,	// (0x00029cc2) list_vkb_icf_pane_ParamLimits

0x4fb1,	// (0x00024098) bg_icf_pane_cp01_ParamLimits

0x34f0,	// (0x000225d7) icf_edit_indi_pane_cp01_ParamLimits

0x34f0,	// (0x000225d7) icf_edit_indi_pane_cp01

0xabef,	// (0x00029cd6) vtchi_query_pane

0x7cd9,	// (0x00026dc0) icf_edit_indi_pane_g1_ParamLimits

0x7cd9,	// (0x00026dc0) icf_edit_indi_pane_g1

0x3680,	// (0x00022767) icf_edit_indi_pane_g2_ParamLimits

0x3680,	// (0x00022767) icf_edit_indi_pane_g2

0x0001,

0xfef5,	// (0x0002efdc) icf_edit_indi_pane_g_ParamLimits

0xfef5,	// (0x0002efdc) icf_edit_indi_pane_g

0x368f,	// (0x00022776) icf_edit_indi_pane_t1

0xac32,	// (0x00029d19) bg_input_focus_pane_cp042

0x3f3e,	// (0x00023025) vtchi_button_pane

0xac3b,	// (0x00029d22) vtchi_query_pane_t1

0xac49,	// (0x00029d30) vtchi_query_pane_t2

0xac57,	// (0x00029d3e) vtchi_query_pane_t3

0x0002,

0xfee4,	// (0x0002efcb) vtchi_query_pane_t

0x36c1,	// (0x000227a8) bg_button_pane_cp13

0xac65,	// (0x00029d4c) vtchi_button_pane_g1

0x366d,	// (0x00022754) ituss_sks_pane_g1

0x3678,	// (0x0002275f) ituss_sks_pane_g2

0x0001,

0xfeeb,	// (0x0002efd2) ituss_sks_pane_g

0xac6d,	// (0x00029d54) ituss_sks_pane_t1

0xac7b,	// (0x00029d62) ituss_sks_pane_t2

0x0001,

0xfef0,	// (0x0002efd7) ituss_sks_pane_t

0x74b5,	// (0x0002659c) indicator_nsta_pane_cp_g1

0x74be,	// (0x000265a5) indicator_nsta_pane_cp_g2

0x74c6,	// (0x000265ad) indicator_nsta_pane_cp_g3

0x74ce,	// (0x000265b5) indicator_nsta_pane_cp_g4

0x74d6,	// (0x000265bd) indicator_nsta_pane_cp_g5

0x74d6,	// (0x000265bd) indicator_nsta_pane_cp_g6

0x0005,

0xfaaa,	// (0x0002eb91) indicator_nsta_pane_cp_g

0xf0bb,	// (0x0002e1a2) cell_graphic2_pane_t2_ParamLimits

0xf0bb,	// (0x0002e1a2) cell_graphic2_pane_t2

0x0001,

0x0010,	// (0x0001f0f7) cell_graphic2_pane_t_ParamLimits

0x0010,	// (0x0001f0f7) cell_graphic2_pane_t

0xf0ee,	// (0x0002e1d5) cell_graphic2_control_pane_t1

0xd504,	// (0x0002c5eb) signal_pane_g3_ParamLimits

0xd504,	// (0x0002c5eb) signal_pane_g3

0xd518,	// (0x0002c5ff) signal_pane_g4_ParamLimits

0xd518,	// (0x0002c5ff) signal_pane_g4

0xaae8,	// (0x00029bcf) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xaae8,	// (0x00029bcf) cell_ai5_widget_list_row_pane_t3

0xab9c,	// (0x00029c83) cell_ituss_key_pane_t1_ParamLimits

0xab9c,	// (0x00029c83) cell_ituss_key_pane_t1

0x55b1,	// (0x00024698) form_field_data_wide_pane_vc_t2_ParamLimits

0x55b1,	// (0x00024698) form_field_data_wide_pane_vc_t2

0x55c5,	// (0x000246ac) form_field_data_wide_pane_vc_t3_ParamLimits

0x55c5,	// (0x000246ac) form_field_data_wide_pane_vc_t3

0x0002,

0xf7fd,	// (0x0002e8e4) form_field_data_wide_pane_vc_t_ParamLimits

0xf7fd,	// (0x0002e8e4) form_field_data_wide_pane_vc_t

0x7181,	// (0x00026268) form_field_slider_wide_pane_vc_t3_ParamLimits

0x7181,	// (0x00026268) form_field_slider_wide_pane_vc_t3

0x725b,	// (0x00026342) form_field_popup_wide_pane_vc_t2_ParamLimits

0x725b,	// (0x00026342) form_field_popup_wide_pane_vc_t2

0x7272,	// (0x00026359) form_field_popup_wide_pane_vc_t3_ParamLimits

0x7272,	// (0x00026359) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa99,	// (0x0002eb80) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa99,	// (0x0002eb80) form_field_popup_wide_pane_vc_t

0xce4f,	// (0x0002bf36) aid_fshwr2_btn_pane_ParamLimits

0xce60,	// (0x0002bf47) aid_fshwr2_syb_pane_ParamLimits

0xce71,	// (0x0002bf58) aid_fshwr2_txt_pane_ParamLimits

0x400f,	// (0x000230f6) fshwr2_bg_pane_ParamLimits

0xce7d,	// (0x0002bf64) fshwr2_func_candi_pane_ParamLimits

0xce9c,	// (0x0002bf83) fshwr2_hwr_syb_pane_ParamLimits

0xceb7,	// (0x0002bf9e) fshwr2_icf_pane_ParamLimits

0x0e8b,	// (0x0001ff72) list_double_graphic_pane_vc_g4_ParamLimits

0x0e8b,	// (0x0001ff72) list_double_graphic_pane_vc_g4

0x35a4,	// (0x0002268b) cell_ituss_key_pane_g3_ParamLimits

0x35a4,	// (0x0002268b) cell_ituss_key_pane_g3

0x364c,	// (0x00022733) cell_ituss_key_t5_ParamLimits

0x364c,	// (0x00022733) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Small
