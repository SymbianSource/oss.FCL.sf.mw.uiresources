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

#include "aknlayoutscalable_elaf_pqp_av_qvga_prt_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pqp_av_qvga_prt_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0001f7f8 };

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
0x2854,	// (0x0002204c) Screen

0x285e,	// (0x00022056) application_window_ParamLimits

0x285e,	// (0x00022056) application_window

0x0572,	// (0x0001fd6a) screen_g1

0x28a7,	// (0x0002209f) area_bottom_pane_ParamLimits

0x28a7,	// (0x0002209f) area_bottom_pane

0x057c,	// (0x0001fd74) area_top_pane_ParamLimits

0x057c,	// (0x0001fd74) area_top_pane

0xc3b6,	// (0x0002bbae) main_pane_ParamLimits

0xc3b6,	// (0x0002bbae) main_pane

0x05f4,	// (0x0001fdec) misc_graphics

0x7555,	// (0x00026d4d) battery_pane_ParamLimits

0x7555,	// (0x00026d4d) battery_pane

0x5198,	// (0x00024990) bg_status_flat_pane_g8

0x51a0,	// (0x00024998) bg_status_flat_pane_g9

0x4935,	// (0x0002412d) context_pane_ParamLimits

0x4935,	// (0x0002412d) context_pane

0x7687,	// (0x00026e7f) navi_pane_ParamLimits

0x7687,	// (0x00026e7f) navi_pane

0x76f3,	// (0x00026eeb) signal_pane_ParamLimits

0x76f3,	// (0x00026eeb) signal_pane

0x0008,

0xf8b2,	// (0x0002f0aa) bg_status_flat_pane_g

0x7904,	// (0x000270fc) status_pane_g1_ParamLimits

0x7904,	// (0x000270fc) status_pane_g1

0x7910,	// (0x00027108) status_pane_g2_ParamLimits

0x7910,	// (0x00027108) status_pane_g2

0x499b,	// (0x00024193) status_pane_g3_ParamLimits

0x499b,	// (0x00024193) status_pane_g3

0x0004,

0xf7e5,	// (0x0002efdd) status_pane_g_ParamLimits

0xf7e5,	// (0x0002efdd) status_pane_g

0x791c,	// (0x00027114) title_pane_ParamLimits

0x791c,	// (0x00027114) title_pane

0x7959,	// (0x00027151) uni_indicator_pane_ParamLimits

0x7959,	// (0x00027151) uni_indicator_pane

0x478b,	// (0x00023f83) bg_list_pane_ParamLimits

0x478b,	// (0x00023f83) bg_list_pane

0xbd5c,	// (0x0002b554) find_pane

0x7161,	// (0x00026959) listscroll_app_pane_ParamLimits

0x7161,	// (0x00026959) listscroll_app_pane

0x47ab,	// (0x00023fa3) listscroll_form_pane

0xbd64,	// (0x0002b55c) listscroll_gen_pane_ParamLimits

0xbd64,	// (0x0002b55c) listscroll_gen_pane

0x47ab,	// (0x00023fa3) listscroll_set_pane

0x2ee3,	// (0x000226db) main_idle_act_pane

0x1c65,	// (0x0002145d) main_idle_trad_pane

0x1c65,	// (0x0002145d) main_list_empty_pane

0x47c5,	// (0x00023fbd) main_midp_pane

0x47d1,	// (0x00023fc9) main_pane_g1_ParamLimits

0x47d1,	// (0x00023fc9) main_pane_g1

0x716d,	// (0x00026965) popup_ai_message_window_ParamLimits

0x716d,	// (0x00026965) popup_ai_message_window

0x71e1,	// (0x000269d9) popup_fep_china_uni_window_ParamLimits

0x71e1,	// (0x000269d9) popup_fep_china_uni_window

0x4801,	// (0x00023ff9) popup_fep_japan_candidate_window_ParamLimits

0x4801,	// (0x00023ff9) popup_fep_japan_candidate_window

0x481f,	// (0x00024017) popup_fep_japan_predictive_window_ParamLimits

0x481f,	// (0x00024017) popup_fep_japan_predictive_window

0x721f,	// (0x00026a17) popup_find_window

0x722c,	// (0x00026a24) popup_grid_graphic_window_ParamLimits

0x722c,	// (0x00026a24) popup_grid_graphic_window

0x484b,	// (0x00024043) popup_large_graphic_colour_window

0x724a,	// (0x00026a42) popup_menu_window_ParamLimits

0x724a,	// (0x00026a42) popup_menu_window

0x7382,	// (0x00026b7a) popup_note_image_window

0x7370,	// (0x00026b68) popup_note_wait_window_ParamLimits

0x7370,	// (0x00026b68) popup_note_wait_window

0x7370,	// (0x00026b68) popup_note_window_ParamLimits

0x7370,	// (0x00026b68) popup_note_window

0x73d6,	// (0x00026bce) popup_query_code_window_ParamLimits

0x73d6,	// (0x00026bce) popup_query_code_window

0x486a,	// (0x00024062) popup_query_data_code_window_ParamLimits

0x486a,	// (0x00024062) popup_query_data_code_window

0x73e8,	// (0x00026be0) popup_query_data_window_ParamLimits

0x73e8,	// (0x00026be0) popup_query_data_window

0x73fe,	// (0x00026bf6) popup_query_sat_info_window_ParamLimits

0x73fe,	// (0x00026bf6) popup_query_sat_info_window

0x742f,	// (0x00026c27) popup_snote_single_graphic_window_ParamLimits

0x742f,	// (0x00026c27) popup_snote_single_graphic_window

0x742f,	// (0x00026c27) popup_snote_single_text_window_ParamLimits

0x742f,	// (0x00026c27) popup_snote_single_text_window

0x487f,	// (0x00024077) popup_sub_window_general

0x48c1,	// (0x000240b9) popup_window_general_ParamLimits

0x48c1,	// (0x000240b9) popup_window_general

0x48d4,	// (0x000240cc) power_save_pane

0xcafb,	// (0x0002c2f3) control_pane_g1_ParamLimits

0xcafb,	// (0x0002c2f3) control_pane_g1

0xcb1c,	// (0x0002c314) control_pane_g2_ParamLimits

0xcb1c,	// (0x0002c314) control_pane_g2

0x1e71,	// (0x00021669) control_pane_g3_ParamLimits

0x1e71,	// (0x00021669) control_pane_g3

0x0007,

0xf7cd,	// (0x0002efc5) control_pane_g_ParamLimits

0xf7cd,	// (0x0002efc5) control_pane_g

0xcb5f,	// (0x0002c357) control_pane_t1_ParamLimits

0xcb5f,	// (0x0002c357) control_pane_t1

0xcbb1,	// (0x0002c3a9) control_pane_t2_ParamLimits

0xcbb1,	// (0x0002c3a9) control_pane_t2

0x0002,

0xf7de,	// (0x0002efd6) control_pane_t_ParamLimits

0xf7de,	// (0x0002efd6) control_pane_t

0x1d94,	// (0x0002158c) navi_navi_volume_pane_cp1

0x1d9d,	// (0x00021595) status_small_icon_pane

0x1da5,	// (0x0002159d) status_small_pane_g1_ParamLimits

0x1da5,	// (0x0002159d) status_small_pane_g1

0x1dd9,	// (0x000215d1) status_small_pane_g2_ParamLimits

0x1dd9,	// (0x000215d1) status_small_pane_g2

0x1de5,	// (0x000215dd) status_small_pane_g3_ParamLimits

0x1de5,	// (0x000215dd) status_small_pane_g3

0x1df1,	// (0x000215e9) status_small_pane_g4_ParamLimits

0x1df1,	// (0x000215e9) status_small_pane_g4

0x1dfd,	// (0x000215f5) status_small_pane_g5_ParamLimits

0x1dfd,	// (0x000215f5) status_small_pane_g5

0x1e0a,	// (0x00021602) status_small_pane_g6_ParamLimits

0x1e0a,	// (0x00021602) status_small_pane_g6

0x0007,

0xf7bc,	// (0x0002efb4) status_small_pane_g_ParamLimits

0xf7bc,	// (0x0002efb4) status_small_pane_g

0x1e3a,	// (0x00021632) status_small_pane_t1

0x1e5d,	// (0x00021655) status_small_wait_pane_ParamLimits

0x1e5d,	// (0x00021655) status_small_wait_pane

0x31e7,	// (0x000229df) aid_levels_signal_ParamLimits

0x31e7,	// (0x000229df) aid_levels_signal

0x31f8,	// (0x000229f0) signal_pane_g1_ParamLimits

0x31f8,	// (0x000229f0) signal_pane_g1

0x320e,	// (0x00022a06) signal_pane_g2_ParamLimits

0x320e,	// (0x00022a06) signal_pane_g2

0x0001,

0xf751,	// (0x0002ef49) signal_pane_g_ParamLimits

0xf751,	// (0x0002ef49) signal_pane_g

0x17ec,	// (0x00020fe4) context_pane_g1

0x2b5e,	// (0x00022356) title_pane_g1

0x2b88,	// (0x00022380) title_pane_t1

0x060a,	// (0x0001fe02) title_pane_t2

0x0630,	// (0x0001fe28) title_pane_t3

0x0002,

0xf59b,	// (0x0002ed93) title_pane_t

0x796f,	// (0x00027167) aid_levels_battery_ParamLimits

0x796f,	// (0x00027167) aid_levels_battery

0x7982,	// (0x0002717a) battery_pane_g1_ParamLimits

0x7982,	// (0x0002717a) battery_pane_g1

0x7997,	// (0x0002718f) battery_pane_g2_ParamLimits

0x7997,	// (0x0002718f) battery_pane_g2

0x0001,

0xf7f0,	// (0x0002efe8) battery_pane_g_ParamLimits

0xf7f0,	// (0x0002efe8) battery_pane_g

0x7b60,	// (0x00027358) uni_indicator_pane_g1

0x7b75,	// (0x0002736d) uni_indicator_pane_g2

0x7b8b,	// (0x00027383) uni_indicator_pane_g3

0x0005,

0xf95a,	// (0x0002f152) uni_indicator_pane_g

0x1360,	// (0x00020b58) navi_icon_pane_ParamLimits

0x1360,	// (0x00020b58) navi_icon_pane

0x05f4,	// (0x0001fdec) navi_midp_pane

0x05f4,	// (0x0001fdec) navi_navi_pane

0x1360,	// (0x00020b58) navi_text_pane_ParamLimits

0x1360,	// (0x00020b58) navi_text_pane

0x0572,	// (0x0001fd6a) status_small_wait_pane_g1

0x094b,	// (0x00020143) status_small_wait_pane_g2

0x0001,

0xf955,	// (0x0002f14d) status_small_wait_pane_g

0x570e,	// (0x00024f06) navi_navi_icon_text_pane

0x5728,	// (0x00024f20) navi_navi_pane_g1_ParamLimits

0x5728,	// (0x00024f20) navi_navi_pane_g1

0x5716,	// (0x00024f0e) navi_navi_pane_g2_ParamLimits

0x5716,	// (0x00024f0e) navi_navi_pane_g2

0x0001,

0xf923,	// (0x0002f11b) navi_navi_pane_g_ParamLimits

0xf923,	// (0x0002f11b) navi_navi_pane_g

0x573a,	// (0x00024f32) navi_navi_tabs_pane

0x570e,	// (0x00024f06) navi_navi_text_pane

0x570e,	// (0x00024f06) navi_navi_volume_pane

0x56ea,	// (0x00024ee2) navi_text_pane_t1

0x56de,	// (0x00024ed6) navi_icon_pane_g1

0x5632,	// (0x00024e2a) navi_navi_text_pane_t1

0xcea2,	// (0x0002c69a) navi_navi_volume_pane_g1

0xceaa,	// (0x0002c6a2) volume_small_pane

0x7aad,	// (0x000272a5) navi_navi_icon_text_pane_g1

0x7ab5,	// (0x000272ad) navi_navi_icon_text_pane_t1

0x51e0,	// (0x000249d8) navi_tabs_2_long_pane

0x51e0,	// (0x000249d8) navi_tabs_2_pane

0x51e0,	// (0x000249d8) navi_tabs_3_long_pane

0x51e0,	// (0x000249d8) navi_tabs_3_pane

0x51e0,	// (0x000249d8) navi_tabs_4_pane

0xce82,	// (0x0002c67a) tabs_2_active_pane_ParamLimits

0xce82,	// (0x0002c67a) tabs_2_active_pane

0xce92,	// (0x0002c68a) tabs_2_passive_pane_ParamLimits

0xce92,	// (0x0002c68a) tabs_2_passive_pane

0xce50,	// (0x0002c648) tabs_3_active_pane_ParamLimits

0xce50,	// (0x0002c648) tabs_3_active_pane

0xce60,	// (0x0002c658) tabs_3_passive_pane_ParamLimits

0xce60,	// (0x0002c658) tabs_3_passive_pane

0xce71,	// (0x0002c669) tabs_3_passive_pane_cp_ParamLimits

0xce71,	// (0x0002c669) tabs_3_passive_pane_cp

0xce0c,	// (0x0002c604) tabs_4_active_pane_ParamLimits

0xce0c,	// (0x0002c604) tabs_4_active_pane

0xce1d,	// (0x0002c615) tabs_4_passive_pane_ParamLimits

0xce1d,	// (0x0002c615) tabs_4_passive_pane

0xce2e,	// (0x0002c626) tabs_4_passive_pane_cp_ParamLimits

0xce2e,	// (0x0002c626) tabs_4_passive_pane_cp

0xce3f,	// (0x0002c637) tabs_4_passive_pane_cp2_ParamLimits

0xce3f,	// (0x0002c637) tabs_4_passive_pane_cp2

0xcdec,	// (0x0002c5e4) tabs_2_long_active_pane_ParamLimits

0xcdec,	// (0x0002c5e4) tabs_2_long_active_pane

0xcdfc,	// (0x0002c5f4) tabs_2_long_passive_pane_ParamLimits

0xcdfc,	// (0x0002c5f4) tabs_2_long_passive_pane

0xcdb7,	// (0x0002c5af) tabs_3_long_active_pane_ParamLimits

0xcdb7,	// (0x0002c5af) tabs_3_long_active_pane

0xcdc8,	// (0x0002c5c0) tabs_3_long_passive_pane_ParamLimits

0xcdc8,	// (0x0002c5c0) tabs_3_long_passive_pane

0xcddb,	// (0x0002c5d3) tabs_3_long_passive_pane_cp_ParamLimits

0xcddb,	// (0x0002c5d3) tabs_3_long_passive_pane_cp

0xcd5d,	// (0x0002c555) volume_small_pane_g1

0xcd66,	// (0x0002c55e) volume_small_pane_g2

0xcd6f,	// (0x0002c567) volume_small_pane_g3

0xcd78,	// (0x0002c570) volume_small_pane_g4

0xcd81,	// (0x0002c579) volume_small_pane_g5

0xcd8a,	// (0x0002c582) volume_small_pane_g6

0xcd93,	// (0x0002c58b) volume_small_pane_g7

0xcd9c,	// (0x0002c594) volume_small_pane_g8

0xcda5,	// (0x0002c59d) volume_small_pane_g9

0xcdae,	// (0x0002c5a6) volume_small_pane_g10

0x0009,

0xf8ef,	// (0x0002f0e7) volume_small_pane_g

0x0658,	// (0x0001fe50) bg_active_tab_pane_cp2_ParamLimits

0x0658,	// (0x0001fe50) bg_active_tab_pane_cp2

0x0650,	// (0x0001fe48) tabs_3_active_pane_g1

0x2bf0,	// (0x000223e8) tabs_3_active_pane_t1

0x0658,	// (0x0001fe50) bg_passive_tab_pane_cp2_ParamLimits

0x0658,	// (0x0001fe50) bg_passive_tab_pane_cp2

0x0650,	// (0x0001fe48) tabs_3_passive_pane_g1

0x2bf0,	// (0x000223e8) tabs_3_passive_pane_t1

0x0658,	// (0x0001fe50) bg_active_tab_pane_cp3_ParamLimits

0x0658,	// (0x0001fe50) bg_active_tab_pane_cp3

0x2c02,	// (0x000223fa) tabs_4_active_pane_g1

0x2c0a,	// (0x00022402) tabs_4_active_pane_t1

0x0658,	// (0x0001fe50) bg_passive_tab_pane_cp3_ParamLimits

0x0658,	// (0x0001fe50) bg_passive_tab_pane_cp3

0x2c02,	// (0x000223fa) tabs_4_1_passive_pane_g1

0x2c0a,	// (0x00022402) tabs_4_1_passive_pane_t1

0x47c5,	// (0x00023fbd) list_highlight_pane_cp2

0x7be1,	// (0x000273d9) list_set_pane_ParamLimits

0x7be1,	// (0x000273d9) list_set_pane

0x7c6f,	// (0x00027467) main_pane_set_t1_ParamLimits

0x7c6f,	// (0x00027467) main_pane_set_t1

0x7c8f,	// (0x00027487) main_pane_set_t2_ParamLimits

0x7c8f,	// (0x00027487) main_pane_set_t2

0x7ca1,	// (0x00027499) main_pane_set_t3_ParamLimits

0x7ca1,	// (0x00027499) main_pane_set_t3

0x7cb3,	// (0x000274ab) main_pane_set_t4_ParamLimits

0x7cb3,	// (0x000274ab) main_pane_set_t4

0x0003,

0xf9bf,	// (0x0002f1b7) main_pane_set_t_ParamLimits

0xf9bf,	// (0x0002f1b7) main_pane_set_t

0x7cc5,	// (0x000274bd) setting_code_pane

0x7ccd,	// (0x000274c5) setting_slider_graphic_pane

0x7ccd,	// (0x000274c5) setting_slider_pane

0x7ccd,	// (0x000274c5) setting_text_pane

0x7ccd,	// (0x000274c5) setting_volume_pane

0xc5b5,	// (0x0002bdad) volume_set_pane

0x0658,	// (0x0001fe50) bg_set_opt_pane_cp

0x0666,	// (0x0001fe5e) setting_slider_pane_t1

0xc5bd,	// (0x0002bdb5) setting_slider_pane_t2

0xc5d6,	// (0x0002bdce) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0002ed9a) setting_slider_pane_t

0x067c,	// (0x0001fe74) slider_set_pane

0x05f4,	// (0x0001fdec) bg_set_opt_pane_cp2

0x0692,	// (0x0001fe8a) setting_slider_graphic_pane_g1

0xc5ed,	// (0x0002bde5) setting_slider_graphic_pane_t1

0xc5fc,	// (0x0002bdf4) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0002eda1) setting_slider_graphic_pane_t

0xc60b,	// (0x0002be03) slider_set_pane_cp

0x05f4,	// (0x0001fdec) input_focus_pane_cp1

0x5b6f,	// (0x00025367) list_set_text_pane

0x0572,	// (0x0001fd6a) setting_text_pane_g1

0x05f4,	// (0x0001fdec) input_focus_pane_cp2

0x0572,	// (0x0001fd6a) setting_code_pane_g1

0x069b,	// (0x0001fe93) setting_code_pane_t1

0xb645,	// (0x0002ae3d) set_text_pane_t1_ParamLimits

0xb645,	// (0x0002ae3d) set_text_pane_t1

0x12fb,	// (0x00020af3) set_opt_bg_pane_g1

0x1303,	// (0x00020afb) set_opt_bg_pane_g2

0x7ba1,	// (0x00027399) set_opt_bg_pane_g3

0x1313,	// (0x00020b0b) set_opt_bg_pane_g4

0x131b,	// (0x00020b13) set_opt_bg_pane_g5

0x1323,	// (0x00020b1b) set_opt_bg_pane_g6

0x7ba9,	// (0x000273a1) set_opt_bg_pane_g7

0x7bb1,	// (0x000273a9) set_opt_bg_pane_g8

0x7bb9,	// (0x000273b1) set_opt_bg_pane_g9

0x0008,

0xf9ac,	// (0x0002f1a4) set_opt_bg_pane_g

0x5b62,	// (0x0002535a) slider_set_pane_g1

0xcf03,	// (0x0002c6fb) slider_set_pane_g2

0x0006,

0xf99d,	// (0x0002f195) slider_set_pane_g

0xceb3,	// (0x0002c6ab) volume_set_pane_g1

0xcebb,	// (0x0002c6b3) volume_set_pane_g2

0xcec3,	// (0x0002c6bb) volume_set_pane_g3

0xcecb,	// (0x0002c6c3) volume_set_pane_g4

0xced3,	// (0x0002c6cb) volume_set_pane_g5

0xcedb,	// (0x0002c6d3) volume_set_pane_g6

0xcee3,	// (0x0002c6db) volume_set_pane_g7

0xceeb,	// (0x0002c6e3) volume_set_pane_g8

0xcef3,	// (0x0002c6eb) volume_set_pane_g9

0xcefb,	// (0x0002c6f3) volume_set_pane_g10

0x0009,

0xf975,	// (0x0002f16d) volume_set_pane_g

0x2ca6,	// (0x0002249e) indicator_pane_ParamLimits

0x2ca6,	// (0x0002249e) indicator_pane

0x2cb2,	// (0x000224aa) main_idle_pane_g2_ParamLimits

0x2cb2,	// (0x000224aa) main_idle_pane_g2

0x2cd6,	// (0x000224ce) main_pane_idle_g1_ParamLimits

0x2cd6,	// (0x000224ce) main_pane_idle_g1

0x06a9,	// (0x0001fea1) popup_clock_digital_analogue_window_ParamLimits

0x06a9,	// (0x0001fea1) popup_clock_digital_analogue_window

0x2ce3,	// (0x000224db) soft_indicator_pane_ParamLimits

0x2ce3,	// (0x000224db) soft_indicator_pane

0x2cef,	// (0x000224e7) wallpaper_pane_ParamLimits

0x2cef,	// (0x000224e7) wallpaper_pane

0x0572,	// (0x0001fd6a) wallpaper_pane_g1

0x2cfb,	// (0x000224f3) indicator_pane_g1_ParamLimits

0x2cfb,	// (0x000224f3) indicator_pane_g1

0x5c97,	// (0x0002548f) navi_navi_icon_text_pane_srt_g1

0x06d7,	// (0x0001fecf) soft_indicator_pane_t1

0x06f1,	// (0x0001fee9) aid_ps_area_pane

0x2d07,	// (0x000224ff) aid_ps_clock_pane

0x0702,	// (0x0001fefa) aid_ps_indicator_pane

0x070e,	// (0x0001ff06) indicator_ps_pane_ParamLimits

0x070e,	// (0x0001ff06) indicator_ps_pane

0x071d,	// (0x0001ff15) power_save_pane_g1_ParamLimits

0x071d,	// (0x0001ff15) power_save_pane_g1

0x0729,	// (0x0001ff21) power_save_pane_g2_ParamLimits

0x0729,	// (0x0001ff21) power_save_pane_g2

0xc332,	// (0x0002bb2a) aid_navinavi_width_pane

0x06f1,	// (0x0001fee9) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0002eda6) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0002eda6) power_save_pane_g

0x0737,	// (0x0001ff2f) power_save_pane_t1_ParamLimits

0x0737,	// (0x0001ff2f) power_save_pane_t1

0x2d07,	// (0x000224ff) aid_ps_clock_pane_ParamLimits

0x0702,	// (0x0001fefa) aid_ps_indicator_pane_ParamLimits

0x0749,	// (0x0001ff41) power_save_pane_t4_ParamLimits

0x0749,	// (0x0001ff41) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0002edab) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0002edab) power_save_pane_t

0x0773,	// (0x0001ff6b) power_save_t3_ParamLimits

0x0773,	// (0x0001ff6b) power_save_t3

0x075e,	// (0x0001ff56) power_save_t2_ParamLimits

0x075e,	// (0x0001ff56) power_save_t2

0x0788,	// (0x0001ff80) indicator_ps_pane_g1

0x2d13,	// (0x0002250b) ai_gene_pane_ParamLimits

0x2d13,	// (0x0002250b) ai_gene_pane

0x2d1f,	// (0x00022517) ai_links_pane_ParamLimits

0x2d1f,	// (0x00022517) ai_links_pane

0x2d2b,	// (0x00022523) indicator_pane_cp1_ParamLimits

0x2d2b,	// (0x00022523) indicator_pane_cp1

0x2d37,	// (0x0002252f) main_pane_idle_g1_cp_ParamLimits

0x2d37,	// (0x0002252f) main_pane_idle_g1_cp

0x0791,	// (0x0001ff89) popup_ai_links_title_window

0x2d43,	// (0x0002253b) soft_indicator_pane_cp1_ParamLimits

0x2d43,	// (0x0002253b) soft_indicator_pane_cp1

0x59a4,	// (0x0002519c) ai_links_pane_g1

0x59ad,	// (0x000251a5) grid_ai_links_pane

0x7b57,	// (0x0002734f) ai_gene_pane_1

0x5992,	// (0x0002518a) ai_gene_pane_2

0x599b,	// (0x00025193) list_highlight_pane_cp4

0x7b3b,	// (0x00027333) cell_ai_link_pane_ParamLimits

0x7b3b,	// (0x00027333) cell_ai_link_pane

0x598a,	// (0x00025182) cell_ai_link_pane_g1

0x094b,	// (0x00020143) cell_ai_link_pane_g2

0x0001,

0xf950,	// (0x0002f148) cell_ai_link_pane_g

0x05f4,	// (0x0001fdec) grid_highlight_cp2

0x05f4,	// (0x0001fdec) bg_popup_sub_pane_cp1

0x07a8,	// (0x0001ffa0) popup_ai_links_title_window_t1

0x58dc,	// (0x000250d4) ai_gene_pane_1_g1_ParamLimits

0x58dc,	// (0x000250d4) ai_gene_pane_1_g1

0x58e8,	// (0x000250e0) ai_gene_pane_1_g2_ParamLimits

0x58e8,	// (0x000250e0) ai_gene_pane_1_g2

0x0001,

0xf946,	// (0x0002f13e) ai_gene_pane_1_g_ParamLimits

0xf946,	// (0x0002f13e) ai_gene_pane_1_g

0x58f5,	// (0x000250ed) ai_gene_pane_1_t1_ParamLimits

0x58f5,	// (0x000250ed) ai_gene_pane_1_t1

0x5929,	// (0x00025121) grid_ai_soft_ind_pane

0x58c7,	// (0x000250bf) ai_gene_pane_2_t1_ParamLimits

0x58c7,	// (0x000250bf) ai_gene_pane_2_t1

0x2d4f,	// (0x00022547) main_pane_empty_t1_ParamLimits

0x2d4f,	// (0x00022547) main_pane_empty_t1

0x2d6c,	// (0x00022564) main_pane_empty_t2_ParamLimits

0x2d6c,	// (0x00022564) main_pane_empty_t2

0x2d84,	// (0x0002257c) main_pane_empty_t3_ParamLimits

0x2d84,	// (0x0002257c) main_pane_empty_t3

0x2d97,	// (0x0002258f) main_pane_empty_t4_ParamLimits

0x2d97,	// (0x0002258f) main_pane_empty_t4

0x2daa,	// (0x000225a2) main_pane_empty_t5_ParamLimits

0x2daa,	// (0x000225a2) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0002edb0) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0002edb0) main_pane_empty_t

0x1360,	// (0x00020b58) bg_popup_window_pane_ParamLimits

0x1360,	// (0x00020b58) bg_popup_window_pane

0x5641,	// (0x00024e39) find_popup_pane_cp2_ParamLimits

0x5641,	// (0x00024e39) find_popup_pane_cp2

0x564d,	// (0x00024e45) heading_pane_ParamLimits

0x564d,	// (0x00024e45) heading_pane

0x05f4,	// (0x0001fdec) bg_popup_sub_pane

0x7acf,	// (0x000272c7) bg_popup_window_pane_g1_ParamLimits

0x7acf,	// (0x000272c7) bg_popup_window_pane_g1

0x7adb,	// (0x000272d3) bg_popup_window_pane_g2_ParamLimits

0x7adb,	// (0x000272d3) bg_popup_window_pane_g2

0x7ae7,	// (0x000272df) bg_popup_window_pane_g3_ParamLimits

0x7ae7,	// (0x000272df) bg_popup_window_pane_g3

0x7af3,	// (0x000272eb) bg_popup_window_pane_g4_ParamLimits

0x7af3,	// (0x000272eb) bg_popup_window_pane_g4

0x7aff,	// (0x000272f7) bg_popup_window_pane_g5_ParamLimits

0x7aff,	// (0x000272f7) bg_popup_window_pane_g5

0x7b0b,	// (0x00027303) bg_popup_window_pane_g6_ParamLimits

0x7b0b,	// (0x00027303) bg_popup_window_pane_g6

0x7b17,	// (0x0002730f) bg_popup_window_pane_g7_ParamLimits

0x7b17,	// (0x0002730f) bg_popup_window_pane_g7

0x7b23,	// (0x0002731b) bg_popup_window_pane_g8_ParamLimits

0x7b23,	// (0x0002731b) bg_popup_window_pane_g8

0x7b2f,	// (0x00027327) bg_popup_window_pane_g9_ParamLimits

0x7b2f,	// (0x00027327) bg_popup_window_pane_g9

0x5626,	// (0x00024e1e) bg_popup_window_pane_g10_ParamLimits

0x5626,	// (0x00024e1e) bg_popup_window_pane_g10

0x0009,

0xf90e,	// (0x0002f106) bg_popup_window_pane_g_ParamLimits

0xf90e,	// (0x0002f106) bg_popup_window_pane_g

0x55dd,	// (0x00024dd5) bg_popup_heading_pane_ParamLimits

0x55dd,	// (0x00024dd5) bg_popup_heading_pane

0xcf72,	// (0x0002c76a) tabs_4_passive_pane_cp_srt_ParamLimits

0xcf72,	// (0x0002c76a) tabs_4_passive_pane_cp_srt

0xcf84,	// (0x0002c77c) tabs_4_passive_pane_srt_ParamLimits

0x55f1,	// (0x00024de9) heading_pane_g2

0xcf84,	// (0x0002c77c) tabs_4_passive_pane_srt

0x47c5,	// (0x00023fbd) bg_passive_tab_pane_cp3_srt_ParamLimits

0x47c5,	// (0x00023fbd) bg_passive_tab_pane_cp3_srt

0x55f9,	// (0x00024df1) heading_pane_t1_ParamLimits

0x55f9,	// (0x00024df1) heading_pane_t1

0x5610,	// (0x00024e08) heading_pane_t2_ParamLimits

0x5610,	// (0x00024e08) heading_pane_t2

0x0001,

0xf909,	// (0x0002f101) heading_pane_t_ParamLimits

0xf909,	// (0x0002f101) heading_pane_t

0x5160,	// (0x00024958) bg_popup_heading_pane_g1

0x51f1,	// (0x000249e9) bg_popup_heading_pane_g2

0x51f9,	// (0x000249f1) bg_popup_heading_pane_g3

0x5201,	// (0x000249f9) bg_popup_heading_pane_g4

0x5209,	// (0x00024a01) bg_popup_heading_pane_g5

0x5211,	// (0x00024a09) bg_popup_heading_pane_g6

0x5219,	// (0x00024a11) bg_popup_heading_pane_g7

0x5221,	// (0x00024a19) bg_popup_heading_pane_g8

0x5229,	// (0x00024a21) bg_popup_heading_pane_g9

0x0008,

0xf8c5,	// (0x0002f0bd) bg_popup_heading_pane_g

0x4a83,	// (0x0002427b) bg_popup_sub_pane_g1

0x4a93,	// (0x0002428b) bg_popup_sub_pane_g2

0x4a8b,	// (0x00024283) bg_popup_sub_pane_g3

0x4aa3,	// (0x0002429b) bg_popup_sub_pane_g4

0x4a9b,	// (0x00024293) bg_popup_sub_pane_g5

0x4aab,	// (0x000242a3) bg_popup_sub_pane_g6

0x4ab3,	// (0x000242ab) bg_popup_sub_pane_g7

0x4ac3,	// (0x000242bb) bg_popup_sub_pane_g8

0x4abb,	// (0x000242b3) bg_popup_sub_pane_g9

0x0008,

0xf89f,	// (0x0002f097) bg_popup_sub_pane_g

0x0642,	// (0x0001fe3a) bg_popup_window_pane_cp5_ParamLimits

0x0642,	// (0x0001fe3a) bg_popup_window_pane_cp5

0x07c5,	// (0x0001ffbd) popup_note_window_g1_ParamLimits

0x07c5,	// (0x0001ffbd) popup_note_window_g1

0x07d1,	// (0x0001ffc9) popup_note_window_t1_ParamLimits

0x07d1,	// (0x0001ffc9) popup_note_window_t1

0x07e7,	// (0x0001ffdf) popup_note_window_t2_ParamLimits

0x07e7,	// (0x0001ffdf) popup_note_window_t2

0x07fd,	// (0x0001fff5) popup_note_window_t3_ParamLimits

0x07fd,	// (0x0001fff5) popup_note_window_t3

0x0813,	// (0x0002000b) popup_note_window_t4_ParamLimits

0x0813,	// (0x0002000b) popup_note_window_t4

0x083b,	// (0x00020033) popup_note_window_t5_ParamLimits

0x083b,	// (0x00020033) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0002edbb) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0002edbb) popup_note_window_t

0x085f,	// (0x00020057) bg_popup_window_pane_cp6_ParamLimits

0x085f,	// (0x00020057) bg_popup_window_pane_cp6

0x50dc,	// (0x000248d4) popup_note_image_window_g1_ParamLimits

0x50dc,	// (0x000248d4) popup_note_image_window_g1

0x50e8,	// (0x000248e0) popup_note_image_window_g2_ParamLimits

0x50e8,	// (0x000248e0) popup_note_image_window_g2

0x0001,

0xf893,	// (0x0002f08b) popup_note_image_window_g_ParamLimits

0xf893,	// (0x0002f08b) popup_note_image_window_g

0x5101,	// (0x000248f9) popup_note_image_window_t1_ParamLimits

0x5101,	// (0x000248f9) popup_note_image_window_t1

0x511a,	// (0x00024912) popup_note_image_window_t2_ParamLimits

0x511a,	// (0x00024912) popup_note_image_window_t2

0x5133,	// (0x0002492b) popup_note_image_window_t3_ParamLimits

0x5133,	// (0x0002492b) popup_note_image_window_t3

0x0002,

0xf898,	// (0x0002f090) popup_note_image_window_t_ParamLimits

0xf898,	// (0x0002f090) popup_note_image_window_t

0x4fc7,	// (0x000247bf) bg_popup_window_pane_cp7_ParamLimits

0x4fc7,	// (0x000247bf) bg_popup_window_pane_cp7

0x4ff7,	// (0x000247ef) popup_note_wait_window_g1_ParamLimits

0x4ff7,	// (0x000247ef) popup_note_wait_window_g1

0x5003,	// (0x000247fb) popup_note_wait_window_g2_ParamLimits

0x5003,	// (0x000247fb) popup_note_wait_window_g2

0x0002,

0xf881,	// (0x0002f079) popup_note_wait_window_g_ParamLimits

0xf881,	// (0x0002f079) popup_note_wait_window_g

0x501b,	// (0x00024813) popup_note_wait_window_t1_ParamLimits

0x501b,	// (0x00024813) popup_note_wait_window_t1

0x5042,	// (0x0002483a) popup_note_wait_window_t2_ParamLimits

0x5042,	// (0x0002483a) popup_note_wait_window_t2

0x505f,	// (0x00024857) popup_note_wait_window_t3_ParamLimits

0x505f,	// (0x00024857) popup_note_wait_window_t3

0x5072,	// (0x0002486a) popup_note_wait_window_t4_ParamLimits

0x5072,	// (0x0002486a) popup_note_wait_window_t4

0x0004,

0xf888,	// (0x0002f080) popup_note_wait_window_t_ParamLimits

0xf888,	// (0x0002f080) popup_note_wait_window_t

0x5097,	// (0x0002488f) wait_bar_pane_ParamLimits

0x5097,	// (0x0002488f) wait_bar_pane

0x05f4,	// (0x0001fdec) wait_anim_pane

0x05f4,	// (0x0001fdec) wait_border_pane

0x0572,	// (0x0001fd6a) wait_anim_pane_g1

0x0572,	// (0x0001fd6a) wait_anim_pane_g2

0x0001,

0xf74c,	// (0x0002ef44) wait_anim_pane_g

0x4f77,	// (0x0002476f) wait_border_pane_g1

0x4f80,	// (0x00024778) wait_border_pane_g2

0x4f89,	// (0x00024781) wait_border_pane_g3

0x0002,

0xf87a,	// (0x0002f072) wait_border_pane_g

0x4ed9,	// (0x000246d1) bg_popup_window_pane_cp16_ParamLimits

0x4ed9,	// (0x000246d1) bg_popup_window_pane_cp16

0x4ee7,	// (0x000246df) indicator_popup_pane_cp4_ParamLimits

0x4ee7,	// (0x000246df) indicator_popup_pane_cp4

0x4efb,	// (0x000246f3) popup_query_data_window_t1_ParamLimits

0x4efb,	// (0x000246f3) popup_query_data_window_t1

0x4f0d,	// (0x00024705) popup_query_data_window_t2_ParamLimits

0x4f0d,	// (0x00024705) popup_query_data_window_t2

0x4f26,	// (0x0002471e) popup_query_data_window_t3_ParamLimits

0x4f26,	// (0x0002471e) popup_query_data_window_t3

0x0002,

0xf873,	// (0x0002f06b) popup_query_data_window_t_ParamLimits

0xf873,	// (0x0002f06b) popup_query_data_window_t

0x4f40,	// (0x00024738) query_popup_data_pane_ParamLimits

0x4f40,	// (0x00024738) query_popup_data_pane

0x4f54,	// (0x0002474c) query_popup_data_pane_cp1_ParamLimits

0x4f54,	// (0x0002474c) query_popup_data_pane_cp1

0x085f,	// (0x00020057) bg_popup_window_pane_cp10_ParamLimits

0x085f,	// (0x00020057) bg_popup_window_pane_cp10

0x4e3c,	// (0x00024634) indicator_popup_pane_ParamLimits

0x4e3c,	// (0x00024634) indicator_popup_pane

0x08b6,	// (0x000200ae) popup_query_code_window_t1_ParamLimits

0x08b6,	// (0x000200ae) popup_query_code_window_t1

0x4e54,	// (0x0002464c) popup_query_code_window_t2_ParamLimits

0x4e54,	// (0x0002464c) popup_query_code_window_t2

0x4e92,	// (0x0002468a) popup_query_code_window_t3_ParamLimits

0x4e92,	// (0x0002468a) popup_query_code_window_t3

0x0002,

0xf86c,	// (0x0002f064) popup_query_code_window_t_ParamLimits

0xf86c,	// (0x0002f064) popup_query_code_window_t

0x4ec1,	// (0x000246b9) query_popup_pane_ParamLimits

0x4ec1,	// (0x000246b9) query_popup_pane

0x085f,	// (0x00020057) bg_popup_window_pane_cp15_ParamLimits

0x085f,	// (0x00020057) bg_popup_window_pane_cp15

0x087d,	// (0x00020075) indicator_popup_pane_cp1_ParamLimits

0x087d,	// (0x00020075) indicator_popup_pane_cp1

0x0890,	// (0x00020088) indicator_popup_pane_cp2_ParamLimits

0x0890,	// (0x00020088) indicator_popup_pane_cp2

0x08a3,	// (0x0002009b) popup_query_data_code_window_g1_ParamLimits

0x08a3,	// (0x0002009b) popup_query_data_code_window_g1

0x08b6,	// (0x000200ae) popup_query_data_code_window_t1_ParamLimits

0x08b6,	// (0x000200ae) popup_query_data_code_window_t1

0x08c8,	// (0x000200c0) popup_query_data_code_window_t2_ParamLimits

0x08c8,	// (0x000200c0) popup_query_data_code_window_t2

0x08da,	// (0x000200d2) popup_query_data_code_window_t3_ParamLimits

0x08da,	// (0x000200d2) popup_query_data_code_window_t3

0x08f0,	// (0x000200e8) popup_query_data_code_window_t4_ParamLimits

0x08f0,	// (0x000200e8) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0002edc6) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0002edc6) popup_query_data_code_window_t

0x1ae6,	// (0x000212de) list_single_midp_graphic_pane_g3

0x0908,	// (0x00020100) query_popup_data_pane_cp2_ParamLimits

0x091b,	// (0x00020113) query_popup_pane_cp2_ParamLimits

0x091b,	// (0x00020113) query_popup_pane_cp2

0x05f4,	// (0x0001fdec) bg_popup_window_pane_cp11

0x4e10,	// (0x00024608) heading_pane_cp5

0x09a7,	// (0x0002019f) listscroll_popup_info_pane

0x05f4,	// (0x0001fdec) input_focus_pane_cp3

0x092e,	// (0x00020126) query_popup_pane_t1

0x093c,	// (0x00020134) list_popup_info_pane_ParamLimits

0x093c,	// (0x00020134) list_popup_info_pane

0x094b,	// (0x00020143) listscroll_popup_info_pane_g1

0x0953,	// (0x0002014b) scroll_pane_cp7

0x095b,	// (0x00020153) popup_info_list_pane_t1_ParamLimits

0x095b,	// (0x00020153) popup_info_list_pane_t1

0x0975,	// (0x0002016d) popup_info_list_pane_t2_ParamLimits

0x0975,	// (0x0002016d) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0002edcf) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0002edcf) popup_info_list_pane_t

0x05f4,	// (0x0001fdec) bg_popup_window_pane_cp12

0x5cb1,	// (0x000254a9) find_popup_pane

0x0658,	// (0x0001fe50) bg_popup_window_pane_cp3

0x098f,	// (0x00020187) heading_pane_cp3

0x099b,	// (0x00020193) listscroll_popup_graphic_pane

0x05f4,	// (0x0001fdec) bg_popup_window_pane_cp4

0x2e0d,	// (0x00022605) heading_pane_cp4

0x09a7,	// (0x0002019f) listscroll_popup_colour_pane

0x09af,	// (0x000201a7) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x09af,	// (0x000201a7) cell_large_graphic_colour_none_popup_pane

0x2e15,	// (0x0002260d) grid_large_graphic_colour_popup_pane_ParamLimits

0x2e15,	// (0x0002260d) grid_large_graphic_colour_popup_pane

0x2e31,	// (0x00022629) listscroll_popup_colour_pane_g1_ParamLimits

0x2e31,	// (0x00022629) listscroll_popup_colour_pane_g1

0x2e48,	// (0x00022640) listscroll_popup_colour_pane_g2_ParamLimits

0x2e48,	// (0x00022640) listscroll_popup_colour_pane_g2

0x09bf,	// (0x000201b7) listscroll_popup_colour_pane_g3_ParamLimits

0x09bf,	// (0x000201b7) listscroll_popup_colour_pane_g3

0x2e5c,	// (0x00022654) listscroll_popup_colour_pane_g4_ParamLimits

0x2e5c,	// (0x00022654) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0002edd4) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0002edd4) listscroll_popup_colour_pane_g

0x09cf,	// (0x000201c7) scroll_pane_cp6_ParamLimits

0x09cf,	// (0x000201c7) scroll_pane_cp6

0x2e6b,	// (0x00022663) cell_large_graphic_colour_popup_pane_ParamLimits

0x2e6b,	// (0x00022663) cell_large_graphic_colour_popup_pane

0x09e1,	// (0x000201d9) cell_large_graphic_colour_none_popup_pane_t1

0x05f4,	// (0x0001fdec) grid_highlight_pane_cp5

0x09f0,	// (0x000201e8) cell_large_graphic_colour_popup_pane_g1

0x09f8,	// (0x000201f0) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0002eddd) cell_large_graphic_colour_popup_pane_g

0x0a00,	// (0x000201f8) cell_large_graphic_colour_popup_pane_g2_copy1

0x0a09,	// (0x00020201) grid_highlight_pane_cp4

0x0a11,	// (0x00020209) bg_popup_window_pane_cp8_ParamLimits

0x0a11,	// (0x00020209) bg_popup_window_pane_cp8

0x0a2c,	// (0x00020224) popup_snote_single_text_window_g1_ParamLimits

0x0a2c,	// (0x00020224) popup_snote_single_text_window_g1

0x0a3e,	// (0x00020236) popup_snote_single_text_window_t1_ParamLimits

0x0a3e,	// (0x00020236) popup_snote_single_text_window_t1

0x0a51,	// (0x00020249) popup_snote_single_text_window_t2_ParamLimits

0x0a51,	// (0x00020249) popup_snote_single_text_window_t2

0x0a64,	// (0x0002025c) popup_snote_single_text_window_t3_ParamLimits

0x0a64,	// (0x0002025c) popup_snote_single_text_window_t3

0x0a9d,	// (0x00020295) popup_snote_single_text_window_t4_ParamLimits

0x0a9d,	// (0x00020295) popup_snote_single_text_window_t4

0x0ad1,	// (0x000202c9) popup_snote_single_text_window_t5_ParamLimits

0x0ad1,	// (0x000202c9) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0002ede2) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0002ede2) popup_snote_single_text_window_t

0x0b00,	// (0x000202f8) bg_popup_window_pane_cp9_ParamLimits

0x0b00,	// (0x000202f8) bg_popup_window_pane_cp9

0x0a2c,	// (0x00020224) popup_snote_single_graphic_window_g1_ParamLimits

0x0a2c,	// (0x00020224) popup_snote_single_graphic_window_g1

0x0b0e,	// (0x00020306) popup_snote_single_graphic_window_g2_ParamLimits

0x0b0e,	// (0x00020306) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0002eded) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0002eded) popup_snote_single_graphic_window_g

0x0b1a,	// (0x00020312) popup_snote_single_graphic_window_t1_ParamLimits

0x0b1a,	// (0x00020312) popup_snote_single_graphic_window_t1

0x0b2d,	// (0x00020325) popup_snote_single_graphic_window_t2_ParamLimits

0x0b2d,	// (0x00020325) popup_snote_single_graphic_window_t2

0x0a64,	// (0x0002025c) popup_snote_single_graphic_window_t3_ParamLimits

0x0a64,	// (0x0002025c) popup_snote_single_graphic_window_t3

0x0a9d,	// (0x00020295) popup_snote_single_graphic_window_t4_ParamLimits

0x0a9d,	// (0x00020295) popup_snote_single_graphic_window_t4

0x0ad1,	// (0x000202c9) popup_snote_single_graphic_window_t5_ParamLimits

0x0ad1,	// (0x000202c9) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0002edf2) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0002edf2) popup_snote_single_graphic_window_t

0x7dc0,	// (0x000275b8) grid_graphic_popup_pane_ParamLimits

0x7dc0,	// (0x000275b8) grid_graphic_popup_pane

0x7de3,	// (0x000275db) listscroll_popup_graphic_pane_g1_ParamLimits

0x7de3,	// (0x000275db) listscroll_popup_graphic_pane_g1

0x7df7,	// (0x000275ef) listscroll_popup_graphic_pane_g2_ParamLimits

0x7df7,	// (0x000275ef) listscroll_popup_graphic_pane_g2

0x0001,

0xf9e9,	// (0x0002f1e1) listscroll_popup_graphic_pane_g_ParamLimits

0xf9e9,	// (0x0002f1e1) listscroll_popup_graphic_pane_g

0x5c69,	// (0x00025461) scroll_pane_cp5

0x7d79,	// (0x00027571) cell_graphic_popup_pane_ParamLimits

0x7d79,	// (0x00027571) cell_graphic_popup_pane

0x5c34,	// (0x0002542c) cell_graphic_popup_pane_g1

0x5c3c,	// (0x00025434) cell_graphic_popup_pane_g2

0x0a00,	// (0x000201f8) cell_graphic_popup_pane_g3

0x0002,

0xf9e2,	// (0x0002f1da) cell_graphic_popup_pane_g

0x5c45,	// (0x0002543d) cell_graphic_popup_pane_t2

0x0a09,	// (0x00020201) grid_highlight_pane_cp3

0x0b52,	// (0x0002034a) list_gen_pane_ParamLimits

0x0b52,	// (0x0002034a) list_gen_pane

0x0b7b,	// (0x00020373) scroll_pane

0x7d4a,	// (0x00027542) bg_list_pane_g1_ParamLimits

0x7d4a,	// (0x00027542) bg_list_pane_g1

0x5be3,	// (0x000253db) bg_list_pane_g2_ParamLimits

0x5be3,	// (0x000253db) bg_list_pane_g2

0x5bf6,	// (0x000253ee) bg_list_pane_g3_ParamLimits

0x5bf6,	// (0x000253ee) bg_list_pane_g3

0x5c08,	// (0x00025400) bg_list_pane_g4_ParamLimits

0x5c08,	// (0x00025400) bg_list_pane_g4

0x7d61,	// (0x00027559) bg_list_pane_g5_ParamLimits

0x7d61,	// (0x00027559) bg_list_pane_g5

0x0004,

0xf9d7,	// (0x0002f1cf) bg_list_pane_g_ParamLimits

0xf9d7,	// (0x0002f1cf) bg_list_pane_g

0x7cfa,	// (0x000274f2) list_double2_graphic_large_graphic_pane_ParamLimits

0x7cfa,	// (0x000274f2) list_double2_graphic_large_graphic_pane

0x7cfa,	// (0x000274f2) list_double2_graphic_pane_ParamLimits

0x7cfa,	// (0x000274f2) list_double2_graphic_pane

0x7cfa,	// (0x000274f2) list_double2_large_graphic_pane_ParamLimits

0x7cfa,	// (0x000274f2) list_double2_large_graphic_pane

0x7cfa,	// (0x000274f2) list_double2_pane_ParamLimits

0x7cfa,	// (0x000274f2) list_double2_pane

0x7cfa,	// (0x000274f2) list_double_graphic_heading_pane_ParamLimits

0x7cfa,	// (0x000274f2) list_double_graphic_heading_pane

0x7cfa,	// (0x000274f2) list_double_graphic_pane_ParamLimits

0x7cfa,	// (0x000274f2) list_double_graphic_pane

0x7cfa,	// (0x000274f2) list_double_heading_pane_ParamLimits

0x7cfa,	// (0x000274f2) list_double_heading_pane

0x7cfa,	// (0x000274f2) list_double_large_graphic_pane_ParamLimits

0x7cfa,	// (0x000274f2) list_double_large_graphic_pane

0x7cfa,	// (0x000274f2) list_double_number_pane_ParamLimits

0x7cfa,	// (0x000274f2) list_double_number_pane

0x7cfa,	// (0x000274f2) list_double_pane_ParamLimits

0x7cfa,	// (0x000274f2) list_double_pane

0x7cfa,	// (0x000274f2) list_double_time_pane_ParamLimits

0x7cfa,	// (0x000274f2) list_double_time_pane

0x7cfa,	// (0x000274f2) list_setting_number_pane_ParamLimits

0x7cfa,	// (0x000274f2) list_setting_number_pane

0x7cfa,	// (0x000274f2) list_setting_pane_ParamLimits

0x7cfa,	// (0x000274f2) list_setting_pane

0xbe98,	// (0x0002b690) list_single_2graphic_pane_ParamLimits

0xbe98,	// (0x0002b690) list_single_2graphic_pane

0xbe98,	// (0x0002b690) list_single_graphic_heading_pane_ParamLimits

0xbe98,	// (0x0002b690) list_single_graphic_heading_pane

0xbe98,	// (0x0002b690) list_single_graphic_pane_ParamLimits

0xbe98,	// (0x0002b690) list_single_graphic_pane

0xbe98,	// (0x0002b690) list_single_heading_pane_ParamLimits

0xbe98,	// (0x0002b690) list_single_heading_pane

0xcf38,	// (0x0002c730) list_single_large_graphic_pane_ParamLimits

0xcf38,	// (0x0002c730) list_single_large_graphic_pane

0xbe98,	// (0x0002b690) list_single_number_heading_pane_ParamLimits

0xbe98,	// (0x0002b690) list_single_number_heading_pane

0xbe98,	// (0x0002b690) list_single_number_pane_ParamLimits

0xbe98,	// (0x0002b690) list_single_number_pane

0xbe98,	// (0x0002b690) list_single_pane_ParamLimits

0xbe98,	// (0x0002b690) list_single_pane

0x05f4,	// (0x0001fdec) list_highlight_pane_cp1

0xc613,	// (0x0002be0b) list_single_pane_g1_ParamLimits

0xc613,	// (0x0002be0b) list_single_pane_g1

0xc61f,	// (0x0002be17) list_single_pane_g2_ParamLimits

0xc61f,	// (0x0002be17) list_single_pane_g2

0x0001,

0xf616,	// (0x0002ee0e) list_single_pane_g_ParamLimits

0xf616,	// (0x0002ee0e) list_single_pane_g

0xbe6e,	// (0x0002b666) list_single_pane_t1_ParamLimits

0xbe6e,	// (0x0002b666) list_single_pane_t1

0xc613,	// (0x0002be0b) list_single_number_pane_g1_ParamLimits

0xc613,	// (0x0002be0b) list_single_number_pane_g1

0xc61f,	// (0x0002be17) list_single_number_pane_g2_ParamLimits

0xc61f,	// (0x0002be17) list_single_number_pane_g2

0x0001,

0xf616,	// (0x0002ee0e) list_single_number_pane_g_ParamLimits

0xf616,	// (0x0002ee0e) list_single_number_pane_g

0xb66c,	// (0x0002ae64) list_single_number_pane_t1_ParamLimits

0xb66c,	// (0x0002ae64) list_single_number_pane_t1

0xbe2d,	// (0x0002b625) list_single_number_pane_t2_ParamLimits

0xbe2d,	// (0x0002b625) list_single_number_pane_t2

0x0001,

0xf998,	// (0x0002f190) list_single_number_pane_t_ParamLimits

0xf998,	// (0x0002f190) list_single_number_pane_t

0xb660,	// (0x0002ae58) list_single_graphic_pane_g1_ParamLimits

0xb660,	// (0x0002ae58) list_single_graphic_pane_g1

0xc613,	// (0x0002be0b) list_single_graphic_pane_g2_ParamLimits

0xc613,	// (0x0002be0b) list_single_graphic_pane_g2

0xc61f,	// (0x0002be17) list_single_graphic_pane_g3_ParamLimits

0xc61f,	// (0x0002be17) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0002edfd) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0002edfd) list_single_graphic_pane_g

0xb66c,	// (0x0002ae64) list_single_graphic_pane_t1_ParamLimits

0xb66c,	// (0x0002ae64) list_single_graphic_pane_t1

0xb682,	// (0x0002ae7a) list_single_heading_pane_g1_ParamLimits

0xb682,	// (0x0002ae7a) list_single_heading_pane_g1

0xc61f,	// (0x0002be17) list_single_heading_pane_g2_ParamLimits

0xc61f,	// (0x0002be17) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0002ee04) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0002ee04) list_single_heading_pane_g

0xb695,	// (0x0002ae8d) list_single_heading_pane_t1_ParamLimits

0xb695,	// (0x0002ae8d) list_single_heading_pane_t1

0xb6ab,	// (0x0002aea3) list_single_heading_pane_t2_ParamLimits

0xb6ab,	// (0x0002aea3) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0002ee09) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0002ee09) list_single_heading_pane_t

0xc613,	// (0x0002be0b) list_single_number_heading_pane_g1_ParamLimits

0xc613,	// (0x0002be0b) list_single_number_heading_pane_g1

0xc61f,	// (0x0002be17) list_single_number_heading_pane_g2_ParamLimits

0xc61f,	// (0x0002be17) list_single_number_heading_pane_g2

0x0001,

0xf616,	// (0x0002ee0e) list_single_number_heading_pane_g_ParamLimits

0xf616,	// (0x0002ee0e) list_single_number_heading_pane_g

0xb6bd,	// (0x0002aeb5) list_single_number_heading_pane_t1_ParamLimits

0xb6bd,	// (0x0002aeb5) list_single_number_heading_pane_t1

0xb6d3,	// (0x0002aecb) list_single_number_heading_pane_t2_ParamLimits

0xb6d3,	// (0x0002aecb) list_single_number_heading_pane_t2

0xb6e5,	// (0x0002aedd) list_single_number_heading_pane_t3_ParamLimits

0xb6e5,	// (0x0002aedd) list_single_number_heading_pane_t3

0x0002,

0xf61b,	// (0x0002ee13) list_single_number_heading_pane_t_ParamLimits

0xf61b,	// (0x0002ee13) list_single_number_heading_pane_t

0xb6f7,	// (0x0002aeef) list_single_graphic_heading_pane_g1_ParamLimits

0xb6f7,	// (0x0002aeef) list_single_graphic_heading_pane_g1

0xc62b,	// (0x0002be23) list_single_graphic_heading_pane_g4_ParamLimits

0xc62b,	// (0x0002be23) list_single_graphic_heading_pane_g4

0xc61f,	// (0x0002be17) list_single_graphic_heading_pane_g5_ParamLimits

0xc61f,	// (0x0002be17) list_single_graphic_heading_pane_g5

0x0002,

0xf622,	// (0x0002ee1a) list_single_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0002ee1a) list_single_graphic_heading_pane_g

0xb6bd,	// (0x0002aeb5) list_single_graphic_heading_pane_t1_ParamLimits

0xb6bd,	// (0x0002aeb5) list_single_graphic_heading_pane_t1

0xb70b,	// (0x0002af03) list_single_graphic_heading_pane_t2_ParamLimits

0xb70b,	// (0x0002af03) list_single_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0002ee21) list_single_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0002ee21) list_single_graphic_heading_pane_t

0xc63a,	// (0x0002be32) list_single_large_graphic_pane_g1_ParamLimits

0xc63a,	// (0x0002be32) list_single_large_graphic_pane_g1

0xc646,	// (0x0002be3e) list_single_large_graphic_pane_g2_ParamLimits

0xc646,	// (0x0002be3e) list_single_large_graphic_pane_g2

0xc652,	// (0x0002be4a) list_single_large_graphic_pane_g3_ParamLimits

0xc652,	// (0x0002be4a) list_single_large_graphic_pane_g3

0x0002,

0xf62e,	// (0x0002ee26) list_single_large_graphic_pane_g_ParamLimits

0xf62e,	// (0x0002ee26) list_single_large_graphic_pane_g

0x4f80,	// (0x00024778) wait_border_pane_g2_copy1

0xc65e,	// (0x0002be56) list_single_large_graphic_pane_g4_cp2

0xb723,	// (0x0002af1b) list_single_large_graphic_pane_t1_ParamLimits

0xb723,	// (0x0002af1b) list_single_large_graphic_pane_t1

0xc666,	// (0x0002be5e) list_double_pane_g1_ParamLimits

0xc666,	// (0x0002be5e) list_double_pane_g1

0xc672,	// (0x0002be6a) list_double_pane_g2_ParamLimits

0xc672,	// (0x0002be6a) list_double_pane_g2

0x0001,

0xf635,	// (0x0002ee2d) list_double_pane_g_ParamLimits

0xf635,	// (0x0002ee2d) list_double_pane_g

0xb739,	// (0x0002af31) list_double_pane_t1_ParamLimits

0xb739,	// (0x0002af31) list_double_pane_t1

0xb74f,	// (0x0002af47) list_double_pane_t2_ParamLimits

0xb74f,	// (0x0002af47) list_double_pane_t2

0x0001,

0xf63a,	// (0x0002ee32) list_double_pane_t_ParamLimits

0xf63a,	// (0x0002ee32) list_double_pane_t

0xb761,	// (0x0002af59) list_double2_pane_g1_ParamLimits

0xb761,	// (0x0002af59) list_double2_pane_g1

0xb770,	// (0x0002af68) list_double2_pane_g2_ParamLimits

0xb770,	// (0x0002af68) list_double2_pane_g2

0x0001,

0xf63f,	// (0x0002ee37) list_double2_pane_g_ParamLimits

0xf63f,	// (0x0002ee37) list_double2_pane_g

0xb77c,	// (0x0002af74) list_double2_pane_t1_ParamLimits

0xb77c,	// (0x0002af74) list_double2_pane_t1

0xb792,	// (0x0002af8a) list_double2_pane_t2_ParamLimits

0xb792,	// (0x0002af8a) list_double2_pane_t2

0x0001,

0xf644,	// (0x0002ee3c) list_double2_pane_t_ParamLimits

0xf644,	// (0x0002ee3c) list_double2_pane_t

0xc666,	// (0x0002be5e) list_double_number_pane_g1_ParamLimits

0xc666,	// (0x0002be5e) list_double_number_pane_g1

0xc672,	// (0x0002be6a) list_double_number_pane_g2_ParamLimits

0xc672,	// (0x0002be6a) list_double_number_pane_g2

0x0001,

0xf635,	// (0x0002ee2d) list_double_number_pane_g_ParamLimits

0xf635,	// (0x0002ee2d) list_double_number_pane_g

0xb7a4,	// (0x0002af9c) list_double_number_pane_t1_ParamLimits

0xb7a4,	// (0x0002af9c) list_double_number_pane_t1

0xb7b6,	// (0x0002afae) list_double_number_pane_t2_ParamLimits

0xb7b6,	// (0x0002afae) list_double_number_pane_t2

0xb7cc,	// (0x0002afc4) list_double_number_pane_t3_ParamLimits

0xb7cc,	// (0x0002afc4) list_double_number_pane_t3

0x0002,

0xf649,	// (0x0002ee41) list_double_number_pane_t_ParamLimits

0xf649,	// (0x0002ee41) list_double_number_pane_t

0xb7de,	// (0x0002afd6) list_double_graphic_pane_g1_ParamLimits

0xb7de,	// (0x0002afd6) list_double_graphic_pane_g1

0xc67e,	// (0x0002be76) list_double_graphic_pane_g2_ParamLimits

0xc67e,	// (0x0002be76) list_double_graphic_pane_g2

0xc68d,	// (0x0002be85) list_double_graphic_pane_g3_ParamLimits

0xc68d,	// (0x0002be85) list_double_graphic_pane_g3

0x0003,

0xf650,	// (0x0002ee48) list_double_graphic_pane_g_ParamLimits

0xf650,	// (0x0002ee48) list_double_graphic_pane_g

0xb7ea,	// (0x0002afe2) list_double_graphic_pane_t1_ParamLimits

0xb7ea,	// (0x0002afe2) list_double_graphic_pane_t1

0xb800,	// (0x0002aff8) list_double_graphic_pane_t2_ParamLimits

0xb800,	// (0x0002aff8) list_double_graphic_pane_t2

0x0001,

0xf659,	// (0x0002ee51) list_double_graphic_pane_t_ParamLimits

0xf659,	// (0x0002ee51) list_double_graphic_pane_t

0xb812,	// (0x0002b00a) list_double2_graphic_pane_g1_ParamLimits

0xb812,	// (0x0002b00a) list_double2_graphic_pane_g1

0x0bb0,	// (0x000203a8) list_double2_graphic_pane_g2_ParamLimits

0x0bb0,	// (0x000203a8) list_double2_graphic_pane_g2

0xc6a5,	// (0x0002be9d) list_double2_graphic_pane_g3_ParamLimits

0xc6a5,	// (0x0002be9d) list_double2_graphic_pane_g3

0x0002,

0xf65e,	// (0x0002ee56) list_double2_graphic_pane_g_ParamLimits

0xf65e,	// (0x0002ee56) list_double2_graphic_pane_g

0xb81e,	// (0x0002b016) list_double2_graphic_pane_t1_ParamLimits

0xb81e,	// (0x0002b016) list_double2_graphic_pane_t1

0xb834,	// (0x0002b02c) list_double2_graphic_pane_t2_ParamLimits

0xb834,	// (0x0002b02c) list_double2_graphic_pane_t2

0x0001,

0xf665,	// (0x0002ee5d) list_double2_graphic_pane_t_ParamLimits

0xf665,	// (0x0002ee5d) list_double2_graphic_pane_t

0xb846,	// (0x0002b03e) list_double_large_graphic_pane_g1_ParamLimits

0xb846,	// (0x0002b03e) list_double_large_graphic_pane_g1

0xb863,	// (0x0002b05b) list_double_large_graphic_pane_g2_ParamLimits

0xb863,	// (0x0002b05b) list_double_large_graphic_pane_g2

0xc672,	// (0x0002be6a) list_double_large_graphic_pane_g3_ParamLimits

0xc672,	// (0x0002be6a) list_double_large_graphic_pane_g3

0xb877,	// (0x0002b06f) list_double_large_graphic_pane_g4_ParamLimits

0xb877,	// (0x0002b06f) list_double_large_graphic_pane_g4

0x0004,

0xf66a,	// (0x0002ee62) list_double_large_graphic_pane_g_ParamLimits

0xf66a,	// (0x0002ee62) list_double_large_graphic_pane_g

0xb888,	// (0x0002b080) list_double_large_graphic_pane_t1_ParamLimits

0xb888,	// (0x0002b080) list_double_large_graphic_pane_t1

0xb8a1,	// (0x0002b099) list_double_large_graphic_pane_t2_ParamLimits

0xb8a1,	// (0x0002b099) list_double_large_graphic_pane_t2

0x0001,

0xf675,	// (0x0002ee6d) list_double_large_graphic_pane_t_ParamLimits

0xf675,	// (0x0002ee6d) list_double_large_graphic_pane_t

0xc6c6,	// (0x0002bebe) list_double2_large_graphic_pane_g1_ParamLimits

0xc6c6,	// (0x0002bebe) list_double2_large_graphic_pane_g1

0xc6d2,	// (0x0002beca) list_double2_large_graphic_pane_g2_ParamLimits

0xc6d2,	// (0x0002beca) list_double2_large_graphic_pane_g2

0xc6a5,	// (0x0002be9d) list_double2_large_graphic_pane_g3_ParamLimits

0xc6a5,	// (0x0002be9d) list_double2_large_graphic_pane_g3

0x0002,

0xf67a,	// (0x0002ee72) list_double2_large_graphic_pane_g_ParamLimits

0xf67a,	// (0x0002ee72) list_double2_large_graphic_pane_g

0xb8b3,	// (0x0002b0ab) list_double2_large_graphic_pane_t1_ParamLimits

0xb8b3,	// (0x0002b0ab) list_double2_large_graphic_pane_t1

0xb8c9,	// (0x0002b0c1) list_double2_large_graphic_pane_t2_ParamLimits

0xb8c9,	// (0x0002b0c1) list_double2_large_graphic_pane_t2

0x0001,

0xf681,	// (0x0002ee79) list_double2_large_graphic_pane_t_ParamLimits

0xf681,	// (0x0002ee79) list_double2_large_graphic_pane_t

0xb8db,	// (0x0002b0d3) list_double_heading_pane_g1_ParamLimits

0xb8db,	// (0x0002b0d3) list_double_heading_pane_g1

0xb8ea,	// (0x0002b0e2) list_double_heading_pane_g2_ParamLimits

0xb8ea,	// (0x0002b0e2) list_double_heading_pane_g2

0x0001,

0xf686,	// (0x0002ee7e) list_double_heading_pane_g_ParamLimits

0xf686,	// (0x0002ee7e) list_double_heading_pane_g

0xb8f6,	// (0x0002b0ee) list_double_heading_pane_t1_ParamLimits

0xb8f6,	// (0x0002b0ee) list_double_heading_pane_t1

0xb792,	// (0x0002af8a) list_double_heading_pane_t2_ParamLimits

0xb792,	// (0x0002af8a) list_double_heading_pane_t2

0x0001,

0xf68b,	// (0x0002ee83) list_double_heading_pane_t_ParamLimits

0xf68b,	// (0x0002ee83) list_double_heading_pane_t

0xb90c,	// (0x0002b104) list_double_graphic_heading_pane_g1_ParamLimits

0xb90c,	// (0x0002b104) list_double_graphic_heading_pane_g1

0xb8db,	// (0x0002b0d3) list_double_graphic_heading_pane_g2_ParamLimits

0xb8db,	// (0x0002b0d3) list_double_graphic_heading_pane_g2

0xb8ea,	// (0x0002b0e2) list_double_graphic_heading_pane_g3_ParamLimits

0xb8ea,	// (0x0002b0e2) list_double_graphic_heading_pane_g3

0x0002,

0xf690,	// (0x0002ee88) list_double_graphic_heading_pane_g_ParamLimits

0xf690,	// (0x0002ee88) list_double_graphic_heading_pane_g

0xb918,	// (0x0002b110) list_double_graphic_heading_pane_t1_ParamLimits

0xb918,	// (0x0002b110) list_double_graphic_heading_pane_t1

0xb834,	// (0x0002b02c) list_double_graphic_heading_pane_t2_ParamLimits

0xb834,	// (0x0002b02c) list_double_graphic_heading_pane_t2

0x0001,

0xf697,	// (0x0002ee8f) list_double_graphic_heading_pane_t_ParamLimits

0xf697,	// (0x0002ee8f) list_double_graphic_heading_pane_t

0xb92e,	// (0x0002b126) list_double_time_pane_g1_ParamLimits

0xb92e,	// (0x0002b126) list_double_time_pane_g1

0xb93d,	// (0x0002b135) list_double_time_pane_g2_ParamLimits

0xb93d,	// (0x0002b135) list_double_time_pane_g2

0x0001,

0xf69c,	// (0x0002ee94) list_double_time_pane_g_ParamLimits

0xf69c,	// (0x0002ee94) list_double_time_pane_g

0xb949,	// (0x0002b141) list_double_time_pane_t1_ParamLimits

0xb949,	// (0x0002b141) list_double_time_pane_t1

0xb95f,	// (0x0002b157) list_double_time_pane_t2_ParamLimits

0xb95f,	// (0x0002b157) list_double_time_pane_t2

0xb971,	// (0x0002b169) list_double_time_pane_t3_ParamLimits

0xb971,	// (0x0002b169) list_double_time_pane_t3

0xb983,	// (0x0002b17b) list_double_time_pane_t4_ParamLimits

0xb983,	// (0x0002b17b) list_double_time_pane_t4

0x0003,

0xf6a1,	// (0x0002ee99) list_double_time_pane_t_ParamLimits

0xf6a1,	// (0x0002ee99) list_double_time_pane_t

0xb995,	// (0x0002b18d) list_setting_pane_g1_ParamLimits

0xb995,	// (0x0002b18d) list_setting_pane_g1

0xb770,	// (0x0002af68) list_setting_pane_g2_ParamLimits

0xb770,	// (0x0002af68) list_setting_pane_g2

0x0001,

0xf6aa,	// (0x0002eea2) list_setting_pane_g_ParamLimits

0xf6aa,	// (0x0002eea2) list_setting_pane_g

0xb9a1,	// (0x0002b199) list_setting_pane_t1_ParamLimits

0xb9a1,	// (0x0002b199) list_setting_pane_t1

0xb9bb,	// (0x0002b1b3) list_setting_pane_t2_ParamLimits

0xb9bb,	// (0x0002b1b3) list_setting_pane_t2

0x0002,

0xf6af,	// (0x0002eea7) list_setting_pane_t_ParamLimits

0xf6af,	// (0x0002eea7) list_setting_pane_t

0xb9f8,	// (0x0002b1f0) set_value_pane_cp_ParamLimits

0xb9f8,	// (0x0002b1f0) set_value_pane_cp

0xba04,	// (0x0002b1fc) list_setting_number_pane_g1_ParamLimits

0xba04,	// (0x0002b1fc) list_setting_number_pane_g1

0xba10,	// (0x0002b208) list_setting_number_pane_g2_ParamLimits

0xba10,	// (0x0002b208) list_setting_number_pane_g2

0x0001,

0xf6b6,	// (0x0002eeae) list_setting_number_pane_g_ParamLimits

0xf6b6,	// (0x0002eeae) list_setting_number_pane_g

0xba1c,	// (0x0002b214) list_setting_number_pane_t1_ParamLimits

0xba1c,	// (0x0002b214) list_setting_number_pane_t1

0xba33,	// (0x0002b22b) list_setting_number_pane_t2_ParamLimits

0xba33,	// (0x0002b22b) list_setting_number_pane_t2

0xba4d,	// (0x0002b245) list_setting_number_pane_t3_ParamLimits

0xba4d,	// (0x0002b245) list_setting_number_pane_t3

0x0003,

0xf6bb,	// (0x0002eeb3) list_setting_number_pane_t_ParamLimits

0xf6bb,	// (0x0002eeb3) list_setting_number_pane_t

0xb9f8,	// (0x0002b1f0) set_value_pane_ParamLimits

0xb9f8,	// (0x0002b1f0) set_value_pane

0x1264,	// (0x00020a5c) bg_set_opt_pane_ParamLimits

0x1264,	// (0x00020a5c) bg_set_opt_pane

0xba8e,	// (0x0002b286) set_value_pane_t1

0x1285,	// (0x00020a7d) slider_set_pane_cp3

0x128e,	// (0x00020a86) volume_small_pane_cp

0x1297,	// (0x00020a8f) list_form_gen_pane

0x0b9f,	// (0x00020397) scroll_pane_cp8

0xbaac,	// (0x0002b2a4) form_field_data_pane_ParamLimits

0xbaac,	// (0x0002b2a4) form_field_data_pane

0xbacc,	// (0x0002b2c4) form_field_data_wide_pane_ParamLimits

0xbacc,	// (0x0002b2c4) form_field_data_wide_pane

0xbaeb,	// (0x0002b2e3) form_field_popup_pane_ParamLimits

0xbaeb,	// (0x0002b2e3) form_field_popup_pane

0xbb03,	// (0x0002b2fb) form_field_popup_wide_pane_ParamLimits

0xbb03,	// (0x0002b2fb) form_field_popup_wide_pane

0xbb1a,	// (0x0002b312) form_field_slider_pane_ParamLimits

0xbb1a,	// (0x0002b312) form_field_slider_pane

0xbb2d,	// (0x0002b325) form_field_slider_wide_pane_ParamLimits

0xbb2d,	// (0x0002b325) form_field_slider_wide_pane

0x12a0,	// (0x00020a98) data_form_pane

0xbb48,	// (0x0002b340) form_field_data_pane_t1

0x12ac,	// (0x00020aa4) input_focus_pane

0x12ba,	// (0x00020ab2) data_form_wide_pane

0xbb6c,	// (0x0002b364) form_field_data_wide_pane_t1

0x0a1e,	// (0x00020216) input_focus_pane_cp6

0xbb8e,	// (0x0002b386) form_field_popup_pane_t1

0x12ac,	// (0x00020aa4) input_focus_pane_cp7

0x12a0,	// (0x00020a98) list_form_pane

0xbbae,	// (0x0002b3a6) form_field_popup_wide_pane_t1

0x12ac,	// (0x00020aa4) input_focus_pane_cp8

0x12da,	// (0x00020ad2) list_form_wide_pane

0xbbcb,	// (0x0002b3c3) form_field_slider_pane_t1_ParamLimits

0xbbcb,	// (0x0002b3c3) form_field_slider_pane_t1

0xbbe1,	// (0x0002b3d9) form_field_slider_pane_t2_ParamLimits

0xbbe1,	// (0x0002b3d9) form_field_slider_pane_t2

0x0001,

0xf6cb,	// (0x0002eec3) form_field_slider_pane_t_ParamLimits

0xf6cb,	// (0x0002eec3) form_field_slider_pane_t

0x0642,	// (0x0001fe3a) input_focus_pane_cp9_ParamLimits

0x0642,	// (0x0001fe3a) input_focus_pane_cp9

0xbbf6,	// (0x0002b3ee) slider_cont_pane_ParamLimits

0xbbf6,	// (0x0002b3ee) slider_cont_pane

0x12e9,	// (0x00020ae1) form_field_slider_wide_pane_t1_ParamLimits

0x12e9,	// (0x00020ae1) form_field_slider_wide_pane_t1

0xbc0a,	// (0x0002b402) form_field_slider_wide_pane_t2_ParamLimits

0xbc0a,	// (0x0002b402) form_field_slider_wide_pane_t2

0x0001,

0xf6d0,	// (0x0002eec8) form_field_slider_wide_pane_t_ParamLimits

0xf6d0,	// (0x0002eec8) form_field_slider_wide_pane_t

0x0642,	// (0x0001fe3a) input_focus_pane_cp10_ParamLimits

0x0642,	// (0x0001fe3a) input_focus_pane_cp10

0xbc1c,	// (0x0002b414) slider_cont_pane_cp1_ParamLimits

0xbc1c,	// (0x0002b414) slider_cont_pane_cp1

0xbc32,	// (0x0002b42a) slider_form_pane_cp

0x12fb,	// (0x00020af3) input_focus_pane_g1

0x1303,	// (0x00020afb) input_focus_pane_g2

0x130b,	// (0x00020b03) input_focus_pane_g3

0x1313,	// (0x00020b0b) input_focus_pane_g4

0x131b,	// (0x00020b13) input_focus_pane_g5

0x1323,	// (0x00020b1b) input_focus_pane_g6

0x132b,	// (0x00020b23) input_focus_pane_g7

0x1333,	// (0x00020b2b) input_focus_pane_g8

0x133b,	// (0x00020b33) input_focus_pane_g9

0x0572,	// (0x0001fd6a) input_focus_pane_g10

0x0009,

0xf6d5,	// (0x0002eecd) input_focus_pane_g

0x4f89,	// (0x00024781) wait_border_pane_g3_copy1

0xbc3a,	// (0x0002b432) data_form_pane_t1

0x0572,	// (0x0001fd6a) wait_anim_pane_g1_copy1

0xbe3f,	// (0x0002b637) data_form_wide_pane_t1

0xbc54,	// (0x0002b44c) list_form_graphic_pane_cp_ParamLimits

0xbc54,	// (0x0002b44c) list_form_graphic_pane_cp

0x5b89,	// (0x00025381) slider_form_pane_g1

0x5b92,	// (0x0002538a) slider_form_pane_g2

0x0006,

0xf9c8,	// (0x0002f1c0) slider_form_pane_g

0xbc68,	// (0x0002b460) list_form_graphic_pane_ParamLimits

0xbc68,	// (0x0002b460) list_form_graphic_pane

0xbc7e,	// (0x0002b476) list_form_graphic_pane_g1

0xbc86,	// (0x0002b47e) list_form_graphic_pane_t1_ParamLimits

0xbc86,	// (0x0002b47e) list_form_graphic_pane_t1

0x0658,	// (0x0001fe50) list_highlight_pane_cp5_ParamLimits

0x0658,	// (0x0001fe50) list_highlight_pane_cp5

0xbc9b,	// (0x0002b493) find_pane_g1

0x1357,	// (0x00020b4f) input_find_pane

0xbca4,	// (0x0002b49c) input_find_pane_g1_ParamLimits

0xbca4,	// (0x0002b49c) input_find_pane_g1

0xbcb0,	// (0x0002b4a8) input_find_pane_t1_ParamLimits

0xbcb0,	// (0x0002b4a8) input_find_pane_t1

0xbcc5,	// (0x0002b4bd) input_find_pane_t2_ParamLimits

0xbcc5,	// (0x0002b4bd) input_find_pane_t2

0x0001,

0xf6ea,	// (0x0002eee2) input_find_pane_t_ParamLimits

0xf6ea,	// (0x0002eee2) input_find_pane_t

0x1360,	// (0x00020b58) input_focus_pane_cp5_ParamLimits

0x1360,	// (0x00020b58) input_focus_pane_cp5

0x0642,	// (0x0001fe3a) bg_popup_window_pane_cp2_ParamLimits

0x0642,	// (0x0001fe3a) bg_popup_window_pane_cp2

0x137a,	// (0x00020b72) listscroll_menu_pane_ParamLimits

0x137a,	// (0x00020b72) listscroll_menu_pane

0x1386,	// (0x00020b7e) popup_submenu_window_ParamLimits

0x1386,	// (0x00020b7e) popup_submenu_window

0x13aa,	// (0x00020ba2) find_popup_pane_g1

0x13b2,	// (0x00020baa) input_popup_find_pane_cp

0x1360,	// (0x00020b58) input_focus_pane_cp4_ParamLimits

0x1360,	// (0x00020b58) input_focus_pane_cp4

0x13bc,	// (0x00020bb4) input_popup_find_pane_t1_ParamLimits

0x13bc,	// (0x00020bb4) input_popup_find_pane_t1

0x05f4,	// (0x0001fdec) bg_popup_sub_pane_cp

0x13ea,	// (0x00020be2) listscroll_popup_sub_pane

0x13f2,	// (0x00020bea) list_submenu_pane_ParamLimits

0x13f2,	// (0x00020bea) list_submenu_pane

0x1403,	// (0x00020bfb) scroll_pane_cp4

0x1343,	// (0x00020b3b) list_single_popup_submenu_pane_ParamLimits

0x1343,	// (0x00020b3b) list_single_popup_submenu_pane

0x140b,	// (0x00020c03) list_single_popup_submenu_pane_g1

0x1413,	// (0x00020c0b) list_single_popup_submenu_pane_t1_ParamLimits

0x1413,	// (0x00020c0b) list_single_popup_submenu_pane_t1

0x0658,	// (0x0001fe50) bg_active_tab_pane_cp1_ParamLimits

0x0658,	// (0x0001fe50) bg_active_tab_pane_cp1

0x2eb6,	// (0x000226ae) tabs_2_active_pane_g1

0x2ebe,	// (0x000226b6) tabs_2_active_pane_t1

0x0658,	// (0x0001fe50) bg_passive_tab_pane_cp1_ParamLimits

0x0658,	// (0x0001fe50) bg_passive_tab_pane_cp1

0x2eb6,	// (0x000226ae) tabs_2_passive_pane_g1

0x2ebe,	// (0x000226b6) tabs_2_passive_pane_t1

0x1827,	// (0x0002101f) bg_active_tab_pane_cp4

0x2ed0,	// (0x000226c8) tabs_2_long_active_pane_t1

0x2ee3,	// (0x000226db) bg_passive_tab_pane_cp4

0x5569,	// (0x00024d61) list_single_midp_graphic_pane_g4_ParamLimits

0x1827,	// (0x0002101f) bg_active_tab_pane_cp5

0x2eef,	// (0x000226e7) tabs_3_long_active_pane_t1

0x2ee3,	// (0x000226db) bg_passive_tab_pane_cp5

0x5569,	// (0x00024d61) list_single_midp_graphic_pane_g4

0x0658,	// (0x0001fe50) bg_popup_window_pane_cp13_ParamLimits

0x0658,	// (0x0001fe50) bg_popup_window_pane_cp13

0x1431,	// (0x00020c29) listscroll_popup_fast_pane_ParamLimits

0x1431,	// (0x00020c29) listscroll_popup_fast_pane

0x1440,	// (0x00020c38) grid_popup_fast_pane_ParamLimits

0x1440,	// (0x00020c38) grid_popup_fast_pane

0x1452,	// (0x00020c4a) scroll_pane_cp9_ParamLimits

0x1452,	// (0x00020c4a) scroll_pane_cp9

0x8b18,	// (0x00028310) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x8b18,	// (0x00028310) list_single_graphic_hl_pane_t1_cp2

0x1476,	// (0x00020c6e) input_focus_pane_cp20_ParamLimits

0x1476,	// (0x00020c6e) input_focus_pane_cp20

0x1484,	// (0x00020c7c) query_popup_data_pane_t1_ParamLimits

0x1484,	// (0x00020c7c) query_popup_data_pane_t1

0x1497,	// (0x00020c8f) query_popup_data_pane_t2_ParamLimits

0x1497,	// (0x00020c8f) query_popup_data_pane_t2

0x14dd,	// (0x00020cd5) query_popup_data_pane_t3_ParamLimits

0x14dd,	// (0x00020cd5) query_popup_data_pane_t3

0x151e,	// (0x00020d16) query_popup_data_pane_t4_ParamLimits

0x151e,	// (0x00020d16) query_popup_data_pane_t4

0x155a,	// (0x00020d52) query_popup_data_pane_t5_ParamLimits

0x155a,	// (0x00020d52) query_popup_data_pane_t5

0x0004,

0xf6ef,	// (0x0002eee7) query_popup_data_pane_t_ParamLimits

0xf6ef,	// (0x0002eee7) query_popup_data_pane_t

0x12fb,	// (0x00020af3) bg_set_opt_pane_g1

0x1303,	// (0x00020afb) bg_set_opt_pane_g2

0x130b,	// (0x00020b03) bg_set_opt_pane_g3

0x1313,	// (0x00020b0b) bg_set_opt_pane_g4

0x131b,	// (0x00020b13) bg_set_opt_pane_g5

0x1323,	// (0x00020b1b) bg_set_opt_pane_g6

0x132b,	// (0x00020b23) bg_set_opt_pane_g7

0x1333,	// (0x00020b2b) bg_set_opt_pane_g8

0x133b,	// (0x00020b33) bg_set_opt_pane_g9

0x0008,

0xf6fa,	// (0x0002eef2) bg_set_opt_pane_g

0xc925,	// (0x0002c11d) control_top_pane_stacon_ParamLimits

0xc925,	// (0x0002c11d) control_top_pane_stacon

0xc978,	// (0x0002c170) signal_pane_stacon_ParamLimits

0xc978,	// (0x0002c170) signal_pane_stacon

0x1978,	// (0x00021170) stacon_top_pane_g1_ParamLimits

0x1978,	// (0x00021170) stacon_top_pane_g1

0xc99d,	// (0x0002c195) title_pane_stacon_ParamLimits

0xc99d,	// (0x0002c195) title_pane_stacon

0xc9bf,	// (0x0002c1b7) uni_indicator_pane_stacon_ParamLimits

0xc9bf,	// (0x0002c1b7) uni_indicator_pane_stacon

0xc9d4,	// (0x0002c1cc) battery_pane_stacon_ParamLimits

0xc9d4,	// (0x0002c1cc) battery_pane_stacon

0xca14,	// (0x0002c20c) control_bottom_pane_stacon_ParamLimits

0xca14,	// (0x0002c20c) control_bottom_pane_stacon

0xca33,	// (0x0002c22b) navi_pane_stacon_ParamLimits

0xca33,	// (0x0002c22b) navi_pane_stacon

0x199a,	// (0x00021192) stacon_bottom_pane_g1_ParamLimits

0x199a,	// (0x00021192) stacon_bottom_pane_g1

0x1591,	// (0x00020d89) aid_levels_signal_lsc_ParamLimits

0x1591,	// (0x00020d89) aid_levels_signal_lsc

0xc6e1,	// (0x0002bed9) signal_pane_stacon_g1_ParamLimits

0xc6e1,	// (0x0002bed9) signal_pane_stacon_g1

0xc6ed,	// (0x0002bee5) signal_pane_stacon_g2_ParamLimits

0xc6ed,	// (0x0002bee5) signal_pane_stacon_g2

0x0001,

0xf70d,	// (0x0002ef05) signal_pane_stacon_g_ParamLimits

0xf70d,	// (0x0002ef05) signal_pane_stacon_g

0xc721,	// (0x0002bf19) title_pane_stacon_t1_ParamLimits

0xc721,	// (0x0002bf19) title_pane_stacon_t1

0x15ab,	// (0x00020da3) uni_indicator_pane_stacon_g1

0x15b5,	// (0x00020dad) uni_indicator_pane_stacon_g2

0x15bf,	// (0x00020db7) uni_indicator_pane_stacon_g3

0x15c9,	// (0x00020dc1) uni_indicator_pane_stacon_g4

0x0003,

0xf719,	// (0x0002ef11) uni_indicator_pane_stacon_g

0xc746,	// (0x0002bf3e) control_top_pane_stacon_g1

0xc74e,	// (0x0002bf46) control_top_pane_stacon_t1_ParamLimits

0xc74e,	// (0x0002bf46) control_top_pane_stacon_t1

0x15d3,	// (0x00020dcb) aid_levels_battery_lsc_ParamLimits

0x15d3,	// (0x00020dcb) aid_levels_battery_lsc

0xc77f,	// (0x0002bf77) battery_pane_stacon_g1_ParamLimits

0xc77f,	// (0x0002bf77) battery_pane_stacon_g1

0xc78b,	// (0x0002bf83) battery_pane_stacon_g2_ParamLimits

0xc78b,	// (0x0002bf83) battery_pane_stacon_g2

0x0001,

0xf722,	// (0x0002ef1a) battery_pane_stacon_g_ParamLimits

0xf722,	// (0x0002ef1a) battery_pane_stacon_g

0xc7ba,	// (0x0002bfb2) navi_icon_pane_stacon

0xc7ca,	// (0x0002bfc2) navi_navi_pane_stacon

0xc7ba,	// (0x0002bfb2) navi_text_pane_stacon

0xc746,	// (0x0002bf3e) control_bottom_pane_stacon_g1

0xc7da,	// (0x0002bfd2) control_bottom_pane_stacon_t1_ParamLimits

0xc7da,	// (0x0002bfd2) control_bottom_pane_stacon_t1

0x302b,	// (0x00022823) grid_app_pane_ParamLimits

0x302b,	// (0x00022823) grid_app_pane

0x3047,	// (0x0002283f) scroll_pane_cp15_ParamLimits

0x3047,	// (0x0002283f) scroll_pane_cp15

0x305a,	// (0x00022852) cell_app_pane_ParamLimits

0x305a,	// (0x00022852) cell_app_pane

0x307c,	// (0x00022874) cell_app_pane_g1_ParamLimits

0x307c,	// (0x00022874) cell_app_pane_g1

0x15fb,	// (0x00020df3) cell_app_pane_g2_ParamLimits

0x15fb,	// (0x00020df3) cell_app_pane_g2

0x0001,

0xf727,	// (0x0002ef1f) cell_app_pane_g_ParamLimits

0xf727,	// (0x0002ef1f) cell_app_pane_g

0x1607,	// (0x00020dff) cell_app_pane_t1_ParamLimits

0x1607,	// (0x00020dff) cell_app_pane_t1

0x1619,	// (0x00020e11) grid_highlight_pane_ParamLimits

0x1619,	// (0x00020e11) grid_highlight_pane

0x12fb,	// (0x00020af3) cell_highlight_pane_g1

0x1303,	// (0x00020afb) cell_highlight_pane_g2

0x130b,	// (0x00020b03) cell_highlight_pane_g3

0x1313,	// (0x00020b0b) cell_highlight_pane_g4

0x131b,	// (0x00020b13) cell_highlight_pane_g5

0x1323,	// (0x00020b1b) cell_highlight_pane_g6

0x132b,	// (0x00020b23) cell_highlight_pane_g7

0x1333,	// (0x00020b2b) cell_highlight_pane_g8

0x133b,	// (0x00020b33) cell_highlight_pane_g9

0x0572,	// (0x0001fd6a) cell_highlight_pane_g10

0x0009,

0xf6d5,	// (0x0002eecd) cell_highlight_pane_g

0x162a,	// (0x00020e22) bg_scroll_pane

0xc81e,	// (0x0002c016) scroll_handle_pane

0x1671,	// (0x00020e69) scroll_bg_pane_g1

0x1686,	// (0x00020e7e) scroll_bg_pane_g2

0x169e,	// (0x00020e96) scroll_bg_pane_g3

0x0002,

0xf72c,	// (0x0002ef24) scroll_bg_pane_g

0x16b3,	// (0x00020eab) scroll_handle_focus_pane_ParamLimits

0x16b3,	// (0x00020eab) scroll_handle_focus_pane

0x1671,	// (0x00020e69) scroll_handle_pane_g1

0x16c0,	// (0x00020eb8) scroll_handle_pane_g2

0x169e,	// (0x00020e96) scroll_handle_pane_g3

0x0002,

0xf733,	// (0x0002ef2b) scroll_handle_pane_g

0x1360,	// (0x00020b58) bg_popup_sub_pane_cp21_ParamLimits

0x1360,	// (0x00020b58) bg_popup_sub_pane_cp21

0x16d4,	// (0x00020ecc) popup_fep_japan_predictive_window_t1_ParamLimits

0x16d4,	// (0x00020ecc) popup_fep_japan_predictive_window_t1

0x16eb,	// (0x00020ee3) popup_fep_japan_predictive_window_t2_ParamLimits

0x16eb,	// (0x00020ee3) popup_fep_japan_predictive_window_t2

0x171e,	// (0x00020f16) popup_fep_japan_predictive_window_t3_ParamLimits

0x171e,	// (0x00020f16) popup_fep_japan_predictive_window_t3

0x0002,

0xf73a,	// (0x0002ef32) popup_fep_japan_predictive_window_t_ParamLimits

0xf73a,	// (0x0002ef32) popup_fep_japan_predictive_window_t

0x05f4,	// (0x0001fdec) bg_popup_sub_pane_cp23

0x1755,	// (0x00020f4d) listscroll_japin_cand_pane

0x175d,	// (0x00020f55) popup_fep_japan_candidate_window_t1

0x176b,	// (0x00020f63) candidate_pane_ParamLimits

0x176b,	// (0x00020f63) candidate_pane

0x177e,	// (0x00020f76) scroll_pane_cp30

0x1786,	// (0x00020f7e) list_single_popup_jap_candidate_pane_ParamLimits

0x1786,	// (0x00020f7e) list_single_popup_jap_candidate_pane

0x05f4,	// (0x0001fdec) list_highlight_pane_cp30

0x179b,	// (0x00020f93) list_single_popup_jap_candidate_pane_t1

0x30dc,	// (0x000228d4) level_1_signal

0x30e9,	// (0x000228e1) level_2_signal

0x30f6,	// (0x000228ee) level_3_signal

0x3103,	// (0x000228fb) level_4_signal

0x3110,	// (0x00022908) level_5_signal

0x311d,	// (0x00022915) level_6_signal

0x312a,	// (0x00022922) level_7_signal

0x30dc,	// (0x000228d4) level_1_battery

0x30e9,	// (0x000228e1) level_2_battery

0x30f6,	// (0x000228ee) level_3_battery

0x3103,	// (0x000228fb) level_4_battery

0x3110,	// (0x00022908) level_5_battery

0x311d,	// (0x00022915) level_6_battery

0x312a,	// (0x00022922) level_7_battery

0x17c2,	// (0x00020fba) list_menu_pane_ParamLimits

0x17c2,	// (0x00020fba) list_menu_pane

0x17d3,	// (0x00020fcb) scroll_pane_cp25_ParamLimits

0x17d3,	// (0x00020fcb) scroll_pane_cp25

0x3156,	// (0x0002294e) list_double2_graphic_pane_cp2_ParamLimits

0x3156,	// (0x0002294e) list_double2_graphic_pane_cp2

0x3156,	// (0x0002294e) list_double2_large_graphic_pane_cp2_ParamLimits

0x3156,	// (0x0002294e) list_double2_large_graphic_pane_cp2

0x3156,	// (0x0002294e) list_double2_pane_cp2_ParamLimits

0x3156,	// (0x0002294e) list_double2_pane_cp2

0x3156,	// (0x0002294e) list_double_graphic_pane_cp2_ParamLimits

0x3156,	// (0x0002294e) list_double_graphic_pane_cp2

0x3156,	// (0x0002294e) list_double_large_graphic_pane_cp2_ParamLimits

0x3156,	// (0x0002294e) list_double_large_graphic_pane_cp2

0x3156,	// (0x0002294e) list_double_number_pane_cp2_ParamLimits

0x3156,	// (0x0002294e) list_double_number_pane_cp2

0x3156,	// (0x0002294e) list_double_pane_cp2_ParamLimits

0x3156,	// (0x0002294e) list_double_pane_cp2

0x3166,	// (0x0002295e) list_single_2graphic_pane_cp2_ParamLimits

0x3166,	// (0x0002295e) list_single_2graphic_pane_cp2

0x3166,	// (0x0002295e) list_single_graphic_heading_pane_cp2_ParamLimits

0x3166,	// (0x0002295e) list_single_graphic_heading_pane_cp2

0x3166,	// (0x0002295e) list_single_graphic_pane_cp2_ParamLimits

0x3166,	// (0x0002295e) list_single_graphic_pane_cp2

0x3166,	// (0x0002295e) list_single_heading_pane_cp2_ParamLimits

0x3166,	// (0x0002295e) list_single_heading_pane_cp2

0x317b,	// (0x00022973) list_single_large_graphic_pane_cp2_ParamLimits

0x317b,	// (0x00022973) list_single_large_graphic_pane_cp2

0x3166,	// (0x0002295e) list_single_number_heading_pane_cp2_ParamLimits

0x3166,	// (0x0002295e) list_single_number_heading_pane_cp2

0x3166,	// (0x0002295e) list_single_number_pane_cp2_ParamLimits

0x3166,	// (0x0002295e) list_single_number_pane_cp2

0x3166,	// (0x0002295e) list_single_pane_cp2_ParamLimits

0x3166,	// (0x0002295e) list_single_pane_cp2

0x17f5,	// (0x00020fed) bg_popup_sub_pane_cp22

0xc8cd,	// (0x0002c0c5) popup_side_volume_key_window_g1

0xc8f1,	// (0x0002c0e9) popup_side_volume_key_window_t1

0xc90d,	// (0x0002c105) volume_small_pane_cp1

0x0642,	// (0x0001fe3a) bg_popup_sub_pane_cp24_ParamLimits

0x0642,	// (0x0001fe3a) bg_popup_sub_pane_cp24

0x180b,	// (0x00021003) fep_china_uni_candidate_pane_ParamLimits

0x180b,	// (0x00021003) fep_china_uni_candidate_pane

0x183d,	// (0x00021035) fep_china_uni_entry_pane

0x184d,	// (0x00021045) popup_fep_china_uni_window_g1

0x1869,	// (0x00021061) fep_china_uni_entry_pane_g1

0x1871,	// (0x00021069) fep_china_uni_entry_pane_g2

0x0001,

0xf767,	// (0x0002ef5f) fep_china_uni_entry_pane_g

0x1879,	// (0x00021071) fep_entry_item_pane

0x1883,	// (0x0002107b) fep_candidate_item_pane

0x188b,	// (0x00021083) fep_china_uni_candidate_pane_g1

0x1893,	// (0x0002108b) fep_china_uni_candidate_pane_g2

0x189b,	// (0x00021093) fep_china_uni_candidate_pane_g3

0x18a3,	// (0x0002109b) fep_china_uni_candidate_pane_g4

0x0003,

0xf76c,	// (0x0002ef64) fep_china_uni_candidate_pane_g

0x0572,	// (0x0001fd6a) fep_entry_item_pane_g1

0x18ab,	// (0x000210a3) fep_entry_item_pane_t1_ParamLimits

0x18ab,	// (0x000210a3) fep_entry_item_pane_t1

0x18c1,	// (0x000210b9) fep_candidate_item_pane_t1_ParamLimits

0x18c1,	// (0x000210b9) fep_candidate_item_pane_t1

0x18d6,	// (0x000210ce) fep_candidate_item_pane_t2_ParamLimits

0x18d6,	// (0x000210ce) fep_candidate_item_pane_t2

0x0001,

0xf775,	// (0x0002ef6d) fep_candidate_item_pane_t_ParamLimits

0xf775,	// (0x0002ef6d) fep_candidate_item_pane_t

0x0658,	// (0x0001fe50) list_highlight_pane_cp31_ParamLimits

0x0658,	// (0x0001fe50) list_highlight_pane_cp31

0x18e8,	// (0x000210e0) level_1_signal_lsc

0x18f1,	// (0x000210e9) level_2_signal_lsc

0x18fa,	// (0x000210f2) level_3_signal_lsc

0x1903,	// (0x000210fb) level_4_signal_lsc

0x190c,	// (0x00021104) level_5_signal_lsc

0x1915,	// (0x0002110d) level_6_signal_lsc

0x191e,	// (0x00021116) level_7_signal_lsc

0x191e,	// (0x00021116) level_1_battery_lsc

0x1927,	// (0x0002111f) level_2_battery_lsc

0x1930,	// (0x00021128) level_3_battery_lsc

0x1939,	// (0x00021131) level_4_battery_lsc

0x1942,	// (0x0002113a) level_5_battery_lsc

0x194b,	// (0x00021143) level_6_battery_lsc

0x18e8,	// (0x000210e0) level_7_battery_lsc

0x1954,	// (0x0002114c) scroll_handle_focus_pane_g1

0x195d,	// (0x00021155) scroll_handle_focus_pane_g2

0x1966,	// (0x0002115e) scroll_handle_focus_pane_g3

0x0002,

0xf77a,	// (0x0002ef72) scroll_handle_focus_pane_g

0xbcda,	// (0x0002b4d2) list_single_2graphic_pane_g1_ParamLimits

0xbcda,	// (0x0002b4d2) list_single_2graphic_pane_g1

0xc62b,	// (0x0002be23) list_single_2graphic_pane_g2_ParamLimits

0xc62b,	// (0x0002be23) list_single_2graphic_pane_g2

0xc61f,	// (0x0002be17) list_single_2graphic_pane_g3_ParamLimits

0xc61f,	// (0x0002be17) list_single_2graphic_pane_g3

0xbce6,	// (0x0002b4de) list_single_2graphic_pane_g4_ParamLimits

0xbce6,	// (0x0002b4de) list_single_2graphic_pane_g4

0x0003,

0xf781,	// (0x0002ef79) list_single_2graphic_pane_g_ParamLimits

0xf781,	// (0x0002ef79) list_single_2graphic_pane_g

0xbcf2,	// (0x0002b4ea) list_single_2graphic_pane_t1_ParamLimits

0xbcf2,	// (0x0002b4ea) list_single_2graphic_pane_t1

0xc915,	// (0x0002c10d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc915,	// (0x0002c10d) list_double2_graphic_large_graphic_pane_g1

0xc6d2,	// (0x0002beca) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xc6d2,	// (0x0002beca) list_double2_graphic_large_graphic_pane_g2

0xc6a5,	// (0x0002be9d) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xc6a5,	// (0x0002be9d) list_double2_graphic_large_graphic_pane_g3

0xbd20,	// (0x0002b518) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbd20,	// (0x0002b518) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf78a,	// (0x0002ef82) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf78a,	// (0x0002ef82) list_double2_graphic_large_graphic_pane_g

0xbd2c,	// (0x0002b524) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbd2c,	// (0x0002b524) list_double2_graphic_large_graphic_pane_t1

0xbd42,	// (0x0002b53a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbd42,	// (0x0002b53a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf793,	// (0x0002ef8b) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf793,	// (0x0002ef8b) list_double2_graphic_large_graphic_pane_t

0x1a41,	// (0x00021239) popup_fast_swap_window_ParamLimits

0x1a41,	// (0x00021239) popup_fast_swap_window

0x1a5d,	// (0x00021255) popup_side_volume_key_window

0x1a77,	// (0x0002126f) stacon_top_pane

0x1a81,	// (0x00021279) status_pane_ParamLimits

0x1a81,	// (0x00021279) status_pane

0x1a77,	// (0x0002126f) status_small_pane

0x05f4,	// (0x0001fdec) control_pane

0x05f4,	// (0x0001fdec) stacon_bottom_pane

0x0b9f,	// (0x00020397) scroll_pane_cp121

0x1297,	// (0x00020a8f) set_content_pane

0x3281,	// (0x00022a79) bg_active_tab_pane_g1_cp1

0x196f,	// (0x00021167) bg_active_tab_pane_g2_cp1

0x3278,	// (0x00022a70) bg_active_tab_pane_g3_cp1

0x3281,	// (0x00022a79) bg_passive_tab_pane_g1_cp1

0x196f,	// (0x00021167) bg_passive_tab_pane_g2_cp1

0x3278,	// (0x00022a70) bg_passive_tab_pane_g3_cp1

0x3293,	// (0x00022a8b) bg_active_tab_pane_g1_cp2

0x196f,	// (0x00021167) bg_active_tab_pane_g2_cp2

0x328a,	// (0x00022a82) bg_active_tab_pane_g3_cp2

0x3293,	// (0x00022a8b) bg_passive_tab_pane_g1_cp2

0x196f,	// (0x00021167) bg_passive_tab_pane_g2_cp2

0x328a,	// (0x00022a82) bg_passive_tab_pane_g3_cp2

0x32a5,	// (0x00022a9d) bg_active_tab_pane_g1_cp3

0x196f,	// (0x00021167) bg_active_tab_pane_g2_cp3

0x329c,	// (0x00022a94) bg_active_tab_pane_g3_cp3

0x32a5,	// (0x00022a9d) bg_passive_tab_pane_g1_cp3

0x196f,	// (0x00021167) bg_passive_tab_pane_g2_cp3

0x329c,	// (0x00022a94) bg_passive_tab_pane_g3_cp3

0x32b7,	// (0x00022aaf) bg_active_tab_pane_g1_cp4

0x196f,	// (0x00021167) bg_active_tab_pane_g2_cp4

0x32ae,	// (0x00022aa6) bg_active_tab_pane_g3_cp4

0x32b7,	// (0x00022aaf) bg_passive_tab_pane_g1_cp4

0x196f,	// (0x00021167) bg_passive_tab_pane_g2_cp4

0x32ae,	// (0x00022aa6) bg_passive_tab_pane_g3_cp4

0x19b6,	// (0x000211ae) bg_active_tab_pane_g1_cp5

0x196f,	// (0x00021167) bg_active_tab_pane_g2_cp5

0x19bf,	// (0x000211b7) bg_active_tab_pane_g3_cp5

0x19b6,	// (0x000211ae) bg_passive_tab_pane_g1_cp5

0x196f,	// (0x00021167) bg_passive_tab_pane_g2_cp5

0x19bf,	// (0x000211b7) bg_passive_tab_pane_g3_cp5

0x33ed,	// (0x00022be5) list_set_graphic_pane_ParamLimits

0x33ed,	// (0x00022be5) list_set_graphic_pane

0x05f4,	// (0x0001fdec) bg_set_opt_pane_cp4

0x19c8,	// (0x000211c0) list_set_graphic_pane_g1_ParamLimits

0x19c8,	// (0x000211c0) list_set_graphic_pane_g1

0x19d4,	// (0x000211cc) list_set_graphic_pane_g2_ParamLimits

0x19d4,	// (0x000211cc) list_set_graphic_pane_g2

0x0001,

0xf798,	// (0x0002ef90) list_set_graphic_pane_g_ParamLimits

0xf798,	// (0x0002ef90) list_set_graphic_pane_g

0x0009,

0xfaf2,	// (0x0002f2ea) volume_small_pane_cp_g

0x19f6,	// (0x000211ee) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x19f6,	// (0x000211ee) list_double2_large_graphic_pane_g1_cp2

0x1a02,	// (0x000211fa) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x1a02,	// (0x000211fa) list_double2_large_graphic_pane_g2_cp2

0x1a11,	// (0x00021209) list_double2_large_graphic_pane_g3_cp2

0x1a19,	// (0x00021211) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x1a19,	// (0x00021211) list_double2_large_graphic_pane_t1_cp2

0x1a2f,	// (0x00021227) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x1a2f,	// (0x00021227) list_double2_large_graphic_pane_t2_cp2

0x5939,	// (0x00025131) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5939,	// (0x00025131) list_double_large_graphic_pane_g1_cp2

0x594a,	// (0x00025142) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x594a,	// (0x00025142) list_double_large_graphic_pane_g2_cp2

0x1b5c,	// (0x00021354) list_double_large_graphic_pane_g3_cp2

0x5959,	// (0x00025151) list_double_large_graphic_pane_g4_cp

0x5961,	// (0x00025159) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5961,	// (0x00025159) list_double_large_graphic_pane_t1_cp2

0x5978,	// (0x00025170) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5978,	// (0x00025170) list_double_large_graphic_pane_t2_cp2

0x1a8f,	// (0x00021287) list_double2_graphic_pane_g1_cp2_ParamLimits

0x1a8f,	// (0x00021287) list_double2_graphic_pane_g1_cp2

0x1a9b,	// (0x00021293) list_double2_graphic_pane_g2_cp2_ParamLimits

0x1a9b,	// (0x00021293) list_double2_graphic_pane_g2_cp2

0x1aaa,	// (0x000212a2) list_double2_graphic_pane_g3_cp2

0x1ab2,	// (0x000212aa) list_double2_graphic_pane_t1_cp2_ParamLimits

0x1ab2,	// (0x000212aa) list_double2_graphic_pane_t1_cp2

0x1ac8,	// (0x000212c0) list_double2_graphic_pane_t2_cp2_ParamLimits

0x1ac8,	// (0x000212c0) list_double2_graphic_pane_t2_cp2

0x1ada,	// (0x000212d2) list_single_number_heading_pane_g1_cp2_ParamLimits

0x1ada,	// (0x000212d2) list_single_number_heading_pane_g1_cp2

0x1ae6,	// (0x000212de) list_single_number_heading_pane_g2_cp2

0x1aee,	// (0x000212e6) list_single_number_heading_pane_t1_cp2_ParamLimits

0x1aee,	// (0x000212e6) list_single_number_heading_pane_t1_cp2

0x1b04,	// (0x000212fc) list_single_number_heading_pane_t2_cp2_ParamLimits

0x1b04,	// (0x000212fc) list_single_number_heading_pane_t2_cp2

0x1b16,	// (0x0002130e) list_single_number_heading_pane_t3_cp2_ParamLimits

0x1b16,	// (0x0002130e) list_single_number_heading_pane_t3_cp2

0x1ada,	// (0x000212d2) list_single_heading_pane_g1_cp2_ParamLimits

0x1ada,	// (0x000212d2) list_single_heading_pane_g1_cp2

0x1ae6,	// (0x000212de) list_single_heading_pane_g2_cp2

0x1aee,	// (0x000212e6) list_single_heading_pane_t1_cp2_ParamLimits

0x1aee,	// (0x000212e6) list_single_heading_pane_t1_cp2

0x5743,	// (0x00024f3b) list_single_heading_pane_t2_cp2_ParamLimits

0x5743,	// (0x00024f3b) list_single_heading_pane_t2_cp2

0x5693,	// (0x00024e8b) list_double_graphic_pane_g1_cp2_ParamLimits

0x5693,	// (0x00024e8b) list_double_graphic_pane_g1_cp2

0x569f,	// (0x00024e97) list_double_graphic_pane_g2_cp2_ParamLimits

0x569f,	// (0x00024e97) list_double_graphic_pane_g2_cp2

0x56ae,	// (0x00024ea6) list_double_graphic_pane_g3_cp2

0x56b6,	// (0x00024eae) list_double_graphic_pane_t1_cp2_ParamLimits

0x56b6,	// (0x00024eae) list_double_graphic_pane_t1_cp2

0x56cc,	// (0x00024ec4) list_double_graphic_pane_t2_cp2_ParamLimits

0x56cc,	// (0x00024ec4) list_double_graphic_pane_t2_cp2

0x1b50,	// (0x00021348) list_double_number_pane_g1_cp2_ParamLimits

0x1b50,	// (0x00021348) list_double_number_pane_g1_cp2

0x1b5c,	// (0x00021354) list_double_number_pane_g2_cp2

0x5659,	// (0x00024e51) list_double_number_pane_t1_cp2_ParamLimits

0x5659,	// (0x00024e51) list_double_number_pane_t1_cp2

0x566b,	// (0x00024e63) list_double_number_pane_t2_cp2_ParamLimits

0x566b,	// (0x00024e63) list_double_number_pane_t2_cp2

0x5681,	// (0x00024e79) list_double_number_pane_t3_cp2_ParamLimits

0x5681,	// (0x00024e79) list_double_number_pane_t3_cp2

0x55d1,	// (0x00024dc9) list_single_graphic_pane_g1_cp2_ParamLimits

0x55d1,	// (0x00024dc9) list_single_graphic_pane_g1_cp2

0x1ada,	// (0x000212d2) list_single_graphic_pane_g2_cp2_ParamLimits

0x1ada,	// (0x000212d2) list_single_graphic_pane_g2_cp2

0x1ae6,	// (0x000212de) list_single_graphic_pane_g3_cp2

0x55a9,	// (0x00024da1) list_single_graphic_pane_t1_cp2_ParamLimits

0x55a9,	// (0x00024da1) list_single_graphic_pane_t1_cp2

0x1ada,	// (0x000212d2) list_single_number_pane_g1_cp2_ParamLimits

0x1ada,	// (0x000212d2) list_single_number_pane_g1_cp2

0x1ae6,	// (0x000212de) list_single_number_pane_g2_cp2

0x55a9,	// (0x00024da1) list_single_number_pane_t1_cp2_ParamLimits

0x55a9,	// (0x00024da1) list_single_number_pane_t1_cp2

0x55bf,	// (0x00024db7) list_single_number_pane_t2_cp2_ParamLimits

0x55bf,	// (0x00024db7) list_single_number_pane_t2_cp2

0x1a02,	// (0x000211fa) list_double2_pane_g1_cp2_ParamLimits

0x1a02,	// (0x000211fa) list_double2_pane_g1_cp2

0x1a11,	// (0x00021209) list_double2_pane_g2_cp2

0x1b28,	// (0x00021320) list_double2_pane_t1_cp2_ParamLimits

0x1b28,	// (0x00021320) list_double2_pane_t1_cp2

0x1b3e,	// (0x00021336) list_double2_pane_t2_cp2_ParamLimits

0x1b3e,	// (0x00021336) list_double2_pane_t2_cp2

0x1b50,	// (0x00021348) list_double_pane_g1_cp2_ParamLimits

0x1b50,	// (0x00021348) list_double_pane_g1_cp2

0x1b5c,	// (0x00021354) list_double_pane_g2_cp2

0x1b64,	// (0x0002135c) list_double_pane_t1_cp2_ParamLimits

0x1b64,	// (0x0002135c) list_double_pane_t1_cp2

0x1b7a,	// (0x00021372) list_double_pane_t2_cp2_ParamLimits

0x1b7a,	// (0x00021372) list_double_pane_t2_cp2

0x1ba2,	// (0x0002139a) list_single_pane_cp2_g3

0x1ada,	// (0x000212d2) list_single_pane_g1_cp2_ParamLimits

0x1ada,	// (0x000212d2) list_single_pane_g1_cp2

0x1ae6,	// (0x000212de) list_single_pane_g2_cp2

0x1bb2,	// (0x000213aa) list_single_pane_t1_cp2_ParamLimits

0x1bb2,	// (0x000213aa) list_single_pane_t1_cp2

0x1bca,	// (0x000213c2) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x1bca,	// (0x000213c2) list_single_large_graphic_pane_g1_cp2

0x1bd6,	// (0x000213ce) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x1bd6,	// (0x000213ce) list_single_large_graphic_pane_g2_cp2

0x1be2,	// (0x000213da) list_single_large_graphic_pane_g3_cp2

0x1bea,	// (0x000213e2) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x1bea,	// (0x000213e2) list_single_large_graphic_pane_g4_cp1

0x1c04,	// (0x000213fc) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x1c04,	// (0x000213fc) list_single_large_graphic_pane_t1_cp2

0x558b,	// (0x00024d83) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x558b,	// (0x00024d83) list_single_graphic_heading_pane_g1_cp2

0x555a,	// (0x00024d52) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x555a,	// (0x00024d52) list_single_graphic_heading_pane_g4_cp2

0x1ae6,	// (0x000212de) list_single_graphic_heading_pane_g5_cp2

0x1aee,	// (0x000212e6) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x1aee,	// (0x000212e6) list_single_graphic_heading_pane_t1_cp2

0x5597,	// (0x00024d8f) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5597,	// (0x00024d8f) list_single_graphic_heading_pane_t2_cp2

0x554e,	// (0x00024d46) list_single_2graphic_pane_g1_cp2_ParamLimits

0x554e,	// (0x00024d46) list_single_2graphic_pane_g1_cp2

0x555a,	// (0x00024d52) list_single_2graphic_pane_g2_cp2_ParamLimits

0x555a,	// (0x00024d52) list_single_2graphic_pane_g2_cp2

0x1ae6,	// (0x000212de) list_single_2graphic_pane_g3_cp2

0x5569,	// (0x00024d61) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5569,	// (0x00024d61) list_single_2graphic_pane_g4_cp2

0x5575,	// (0x00024d6d) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5575,	// (0x00024d6d) list_single_2graphic_pane_t1_cp2

0x0572,	// (0x0001fd6a) list_highlight_pane_g10_cp1

0x5160,	// (0x00024958) list_highlight_pane_g1_cp1

0x5168,	// (0x00024960) list_highlight_pane_g2_cp1

0x5170,	// (0x00024968) list_highlight_pane_g3_cp1

0x5178,	// (0x00024970) list_highlight_pane_g4_cp1

0x5180,	// (0x00024978) list_highlight_pane_g5_cp1

0x5188,	// (0x00024980) list_highlight_pane_g6_cp1

0x5190,	// (0x00024988) list_highlight_pane_g7_cp1

0x5198,	// (0x00024990) list_highlight_pane_g8_cp1

0x51a0,	// (0x00024998) list_highlight_pane_g9_cp1

0x7a79,	// (0x00027271) form_field_slider_pane_t3

0x7a87,	// (0x0002727f) form_field_slider_pane_t4

0x50aa,	// (0x000248a2) slider_form_pane_ParamLimits

0x50aa,	// (0x000248a2) slider_form_pane

0x05f4,	// (0x0001fdec) control_abbreviations

0x05f4,	// (0x0001fdec) control_conventions

0x05f4,	// (0x0001fdec) control_definitions

0x05f4,	// (0x0001fdec) format_table_attribute

0x578d,	// (0x00024f85) bg_popup_preview_window_pane_g9

0x05f4,	// (0x0001fdec) format_table_data2

0x05f4,	// (0x0001fdec) format_table_data3

0x05f4,	// (0x0001fdec) format_table_data_example

0x0008,

0x05f4,	// (0x0001fdec) intro_purpose

0xf928,	// (0x0002f120) bg_popup_preview_window_pane_g

0x05f4,	// (0x0001fdec) texts_category

0x05f4,	// (0x0001fdec) texts_graphics

0x1c1a,	// (0x00021412) text_digital

0x1c29,	// (0x00021421) text_primary

0x1c38,	// (0x00021430) text_primary_small

0x1c47,	// (0x0002143f) text_secondary

0x1c56,	// (0x0002144e) text_title

0x5c23,	// (0x0002541b) bg_passive_tab_pane_g1_cp3_srt

0x196f,	// (0x00021167) bg_passive_tab_pane_g2_cp3_srt

0x5c1a,	// (0x00025412) bg_passive_tab_pane_g3_cp3_srt

0x0658,	// (0x0001fe50) bg_active_tab_pane_cp3_srt_ParamLimits

0x0658,	// (0x0001fe50) bg_active_tab_pane_cp3_srt

0x5c2c,	// (0x00025424) tabs_4_active_pane_srt_g1

0x2c0a,	// (0x00022402) tabs_4_active_pane_srt_t1_ParamLimits

0x2c0a,	// (0x00022402) tabs_4_active_pane_srt_t1

0x5c23,	// (0x0002541b) bg_active_tab_pane_g1_cp3_copy1

0x196f,	// (0x00021167) bg_active_tab_pane_g2_cp3_copy1

0x5c1a,	// (0x00025412) bg_active_tab_pane_g3_cp3_copy1

0x0658,	// (0x0001fe50) tabs_2_long_active_pane_srt_ParamLimits

0x0658,	// (0x0001fe50) tabs_2_long_active_pane_srt

0x0658,	// (0x0001fe50) tabs_2_long_passive_pane_srt_ParamLimits

0x0658,	// (0x0001fe50) tabs_2_long_passive_pane_srt

0x2ee3,	// (0x000226db) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2ee3,	// (0x000226db) bg_passive_tab_pane_cp4_srt

0x5b59,	// (0x00025351) bg_passive_tab_pane_g1_cp4_srt

0x196f,	// (0x00021167) bg_passive_tab_pane_g2_cp4_srt

0x5b50,	// (0x00025348) bg_passive_tab_pane_g3_cp4_srt

0x1827,	// (0x0002101f) bg_active_tab_pane_cp4_srt_ParamLimits

0x1827,	// (0x0002101f) bg_active_tab_pane_cp4_srt

0x2ed0,	// (0x000226c8) tabs_2_long_active_pane_srt_t1_ParamLimits

0x2ed0,	// (0x000226c8) tabs_2_long_active_pane_srt_t1

0x5b59,	// (0x00025351) bg_active_tab_pane_g1_cp4_srt

0x196f,	// (0x00021167) bg_active_tab_pane_g2_cp4_srt

0x5b50,	// (0x00025348) bg_active_tab_pane_g3_cp4_srt

0x0642,	// (0x0001fe3a) tabs_3_long_active_pane_srt_ParamLimits

0x0642,	// (0x0001fe3a) tabs_3_long_active_pane_srt

0x0642,	// (0x0001fe3a) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0642,	// (0x0001fe3a) tabs_3_long_passive_pane_cp_srt

0x0642,	// (0x0001fe3a) tabs_3_long_passive_pane_srt_ParamLimits

0x0642,	// (0x0001fe3a) tabs_3_long_passive_pane_srt

0x2ee3,	// (0x000226db) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2ee3,	// (0x000226db) bg_passive_tab_pane_cp5_srt

0x19b6,	// (0x000211ae) bg_passive_tab_pane_g1_cp5_srt

0x196f,	// (0x00021167) bg_passive_tab_pane_g2_cp5_srt

0x19bf,	// (0x000211b7) bg_passive_tab_pane_g3_cp5_srt

0x1827,	// (0x0002101f) bg_active_tab_pane_cp5_srt_ParamLimits

0x1827,	// (0x0002101f) bg_active_tab_pane_cp5_srt

0x2eef,	// (0x000226e7) tabs_3_long_active_pane_srt_t1_ParamLimits

0x2eef,	// (0x000226e7) tabs_3_long_active_pane_srt_t1

0x19b6,	// (0x000211ae) bg_active_tab_pane_g1_cp5_srt

0x196f,	// (0x00021167) bg_active_tab_pane_g2_cp5_srt

0x19bf,	// (0x000211b7) bg_active_tab_pane_g3_cp5_srt

0x5b42,	// (0x0002533a) navi_text_pane_srt_t1

0x5b3a,	// (0x00025332) navi_icon_pane_srt_g1

0x1d6e,	// (0x00021566) midp_editing_number_pane_srt

0x1c65,	// (0x0002145d) midp_ticker_pane_srt

0x1d76,	// (0x0002156e) midp_ticker_pane_srt_g1

0x1d7e,	// (0x00021576) midp_ticker_pane_srt_g2

0x0001,

0xf7b7,	// (0x0002efaf) midp_ticker_pane_srt_g

0x1d86,	// (0x0002157e) midp_ticker_pane_srt_t1

0x5b2b,	// (0x00025323) midp_editing_number_pane_t1_copy1

0x3403,	// (0x00022bfb) listscroll_midp_pane

0x3403,	// (0x00022bfb) midp_form_pane

0x1c6d,	// (0x00021465) midp_info_popup_window_ParamLimits

0x1c6d,	// (0x00021465) midp_info_popup_window

0x1360,	// (0x00020b58) bg_popup_sub_pane_cp50_ParamLimits

0x1360,	// (0x00020b58) bg_popup_sub_pane_cp50

0x4e04,	// (0x000245fc) listscroll_midp_info_pane_ParamLimits

0x4e04,	// (0x000245fc) listscroll_midp_info_pane

0x4dec,	// (0x000245e4) listscroll_form_midp_pane_ParamLimits

0x4dec,	// (0x000245e4) listscroll_form_midp_pane

0x4df8,	// (0x000245f0) scroll_bar_cp050

0x7a61,	// (0x00027259) list_midp_pane

0x6efa,	// (0x000266f2) signal_pane_g2_cp

0x4d1e,	// (0x00024516) listscroll_midp_info_pane_t1_ParamLimits

0x4d1e,	// (0x00024516) listscroll_midp_info_pane_t1

0x4d36,	// (0x0002452e) listscroll_midp_info_pane_t2_ParamLimits

0x4d36,	// (0x0002452e) listscroll_midp_info_pane_t2

0x4d74,	// (0x0002456c) listscroll_midp_info_pane_t3_ParamLimits

0x4d74,	// (0x0002456c) listscroll_midp_info_pane_t3

0x4dae,	// (0x000245a6) listscroll_midp_info_pane_t4_ParamLimits

0x4dae,	// (0x000245a6) listscroll_midp_info_pane_t4

0x0003,

0xf863,	// (0x0002f05b) listscroll_midp_info_pane_t_ParamLimits

0xf863,	// (0x0002f05b) listscroll_midp_info_pane_t

0x1403,	// (0x00020bfb) scroll_pane_cp21

0x4cc2,	// (0x000244ba) form_midp_field_choice_group_pane

0x4ccb,	// (0x000244c3) form_midp_field_text_pane

0x4d04,	// (0x000244fc) form_midp_field_time_pane

0x4d0c,	// (0x00024504) form_midp_gauge_slider_pane

0x4d15,	// (0x0002450d) form_midp_gauge_wait_pane

0x05f4,	// (0x0001fdec) form_midp_image_pane

0xbe16,	// (0x0002b60e) list_single_midp_pane_ParamLimits

0xbe16,	// (0x0002b60e) list_single_midp_pane

0x7a3e,	// (0x00027236) form_midp_field_text_pane_t1

0x4b71,	// (0x00024369) input_focus_pane_cp050

0x4cb1,	// (0x000244a9) list_midp_form_text_pane

0x4c80,	// (0x00024478) form_midp_field_choice_group_pane_t1

0x4c8e,	// (0x00024486) input_focus_pane_cp051

0x4ca2,	// (0x0002449a) list_midp_choice_pane

0x05f4,	// (0x0001fdec) status_idle_pane

0x4c64,	// (0x0002445c) form_midp_field_time_pane_t1

0x0572,	// (0x0001fd6a) wait_anim_pane_g2_copy1

0x4c72,	// (0x0002446a) form_midp_field_time_pane_t2

0x0001,

0x1cd8,	// (0x000214d0) aid_navinavi_width_2_pane

0xf85e,	// (0x0002f056) form_midp_field_time_pane_t

0x05f4,	// (0x0001fdec) input_focus_pane_cp052

0x05f4,	// (0x0001fdec) bg_input_focus_pane_cp040

0x4c40,	// (0x00024438) form_midp_gauge_slider_pane_t1

0x4c4e,	// (0x00024446) form_midp_gauge_slider_pane_t2

0x7a22,	// (0x0002721a) form_midp_gauge_slider_pane_t3

0x7a30,	// (0x00027228) form_midp_gauge_slider_pane_t4

0x0003,

0xf855,	// (0x0002f04d) form_midp_gauge_slider_pane_t

0x4c5c,	// (0x00024454) form_midp_slider_pane

0x0658,	// (0x0001fe50) bg_input_focus_pane_cp041_ParamLimits

0x0658,	// (0x0001fe50) bg_input_focus_pane_cp041

0x4c10,	// (0x00024408) form_midp_gauge_wait_pane_t1_ParamLimits

0x4c10,	// (0x00024408) form_midp_gauge_wait_pane_t1

0x4c22,	// (0x0002441a) form_midp_gauge_wait_pane_t2_ParamLimits

0x4c22,	// (0x0002441a) form_midp_gauge_wait_pane_t2

0x0001,

0xf850,	// (0x0002f048) form_midp_gauge_wait_pane_t_ParamLimits

0xf850,	// (0x0002f048) form_midp_gauge_wait_pane_t

0x4c34,	// (0x0002442c) form_midp_wait_pane_ParamLimits

0x4c34,	// (0x0002442c) form_midp_wait_pane

0x4bda,	// (0x000243d2) form_midp_image_pane_g1

0x4be3,	// (0x000243db) form_midp_image_pane_t1

0x4bf2,	// (0x000243ea) form_midp_image_pane_t2

0x4c01,	// (0x000243f9) form_midp_image_pane_t3

0x0002,

0xf849,	// (0x0002f041) form_midp_image_pane_t

0x4bd1,	// (0x000243c9) list_single_midp_pane_g1

0xbe07,	// (0x0002b5ff) list_single_midp_pane_t1

0x7a0c,	// (0x00027204) list_midp_form_item_pane_ParamLimits

0x7a0c,	// (0x00027204) list_midp_form_item_pane

0x1c80,	// (0x00021478) list_midp_form_item_pane_t1

0x1c8f,	// (0x00021487) midp_ticker_pane_g1

0x1c9b,	// (0x00021493) midp_ticker_pane_g2

0x0001,

0xf79d,	// (0x0002ef95) midp_ticker_pane_g

0x1ca7,	// (0x0002149f) midp_ticker_pane_t1

0x5b2b,	// (0x00025323) midp_editing_number_pane_t1

0x5bb3,	// (0x000253ab) midp_editing_number_pane

0x5bbf,	// (0x000253b7) midp_ticker_pane

0x5b1b,	// (0x00025313) ai_message_heading_pane

0x05f4,	// (0x0001fdec) bg_popup_window_pane_cp14

0x5b23,	// (0x0002531b) listscroll_ai_message_pane

0x5aa5,	// (0x0002529d) ai_message_heading_pane_g1_ParamLimits

0x5aa5,	// (0x0002529d) ai_message_heading_pane_g1

0x5ab1,	// (0x000252a9) ai_message_heading_pane_g2_ParamLimits

0x5ab1,	// (0x000252a9) ai_message_heading_pane_g2

0x5abd,	// (0x000252b5) ai_message_heading_pane_g3_ParamLimits

0x5abd,	// (0x000252b5) ai_message_heading_pane_g3

0x5ac9,	// (0x000252c1) ai_message_heading_pane_g4_ParamLimits

0x5ac9,	// (0x000252c1) ai_message_heading_pane_g4

0x0003,

0xf98a,	// (0x0002f182) ai_message_heading_pane_g_ParamLimits

0xf98a,	// (0x0002f182) ai_message_heading_pane_g

0x5ad5,	// (0x000252cd) ai_message_heading_pane_t1_ParamLimits

0x5ad5,	// (0x000252cd) ai_message_heading_pane_t1

0x5aef,	// (0x000252e7) ai_message_heading_pane_t2_ParamLimits

0x5aef,	// (0x000252e7) ai_message_heading_pane_t2

0x0001,

0xf993,	// (0x0002f18b) ai_message_heading_pane_t_ParamLimits

0xf993,	// (0x0002f18b) ai_message_heading_pane_t

0x5b01,	// (0x000252f9) bg_popup_heading_pane_cp1_ParamLimits

0x5b01,	// (0x000252f9) bg_popup_heading_pane_cp1

0x5a93,	// (0x0002528b) list_ai_message_pane_ParamLimits

0x5a93,	// (0x0002528b) list_ai_message_pane

0x1403,	// (0x00020bfb) scroll_pane_cp10

0x5a2f,	// (0x00025227) list_ai_message_pane_g1

0x5a37,	// (0x0002522f) list_ai_message_pane_g2

0x0001,

0xf967,	// (0x0002f15f) list_ai_message_pane_g

0x5a3f,	// (0x00025237) list_ai_message_pane_t1_ParamLimits

0x5a3f,	// (0x00025237) list_ai_message_pane_t1

0x5a54,	// (0x0002524c) list_ai_message_pane_t2_ParamLimits

0x5a54,	// (0x0002524c) list_ai_message_pane_t2

0x5a69,	// (0x00025261) list_ai_message_pane_t3_ParamLimits

0x5a69,	// (0x00025261) list_ai_message_pane_t3

0x5a7e,	// (0x00025276) list_ai_message_pane_t4_ParamLimits

0x5a7e,	// (0x00025276) list_ai_message_pane_t4

0x0003,

0xf96c,	// (0x0002f164) list_ai_message_pane_t_ParamLimits

0xf96c,	// (0x0002f164) list_ai_message_pane_t

0x5a1d,	// (0x00025215) cell_ai_soft_ind_pane_ParamLimits

0x5a1d,	// (0x00025215) cell_ai_soft_ind_pane

0x1cb9,	// (0x000214b1) cell_ai_soft_ind_pane_g1_ParamLimits

0x1cb9,	// (0x000214b1) cell_ai_soft_ind_pane_g1

0x05f4,	// (0x0001fdec) grid_highlight_cp1

0x1cc6,	// (0x000214be) text_secondary_cp56_ParamLimits

0x1cc6,	// (0x000214be) text_secondary_cp56

0x59f2,	// (0x000251ea) example_general_pane_ParamLimits

0x59f2,	// (0x000251ea) example_general_pane

0x59fe,	// (0x000251f6) example_parent_pane_g1_ParamLimits

0x59fe,	// (0x000251f6) example_parent_pane_g1

0x5a0a,	// (0x00025202) example_parent_pane_t1_ParamLimits

0x5a0a,	// (0x00025202) example_parent_pane_t1

0x738e,	// (0x00026b86) popup_preview_text_window_ParamLimits

0x738e,	// (0x00026b86) popup_preview_text_window

0x1baa,	// (0x000213a2) list_single_pane_cp2_g4

0x085f,	// (0x00020057) bg_popup_preview_window_pane_ParamLimits

0x085f,	// (0x00020057) bg_popup_preview_window_pane

0x5795,	// (0x00024f8d) popup_preview_text_window_t1_ParamLimits

0x5795,	// (0x00024f8d) popup_preview_text_window_t1

0x57b3,	// (0x00024fab) popup_preview_text_window_t2_ParamLimits

0x57b3,	// (0x00024fab) popup_preview_text_window_t2

0x57fc,	// (0x00024ff4) popup_preview_text_window_t3_ParamLimits

0x57fc,	// (0x00024ff4) popup_preview_text_window_t3

0x5841,	// (0x00025039) popup_preview_text_window_t4_ParamLimits

0x5841,	// (0x00025039) popup_preview_text_window_t4

0x0004,

0xf93b,	// (0x0002f133) popup_preview_text_window_t_ParamLimits

0xf93b,	// (0x0002f133) popup_preview_text_window_t

0x58bf,	// (0x000250b7) scroll_pane_cp11

0x4a83,	// (0x0002427b) bg_popup_preview_window_pane_g1

0x5755,	// (0x00024f4d) bg_popup_preview_window_pane_g2

0x575d,	// (0x00024f55) bg_popup_preview_window_pane_g3

0x5765,	// (0x00024f5d) bg_popup_preview_window_pane_g4

0x576d,	// (0x00024f65) bg_popup_preview_window_pane_g5

0x5775,	// (0x00024f6d) bg_popup_preview_window_pane_g6

0x577d,	// (0x00024f75) bg_popup_preview_window_pane_g7

0x5785,	// (0x00024f7d) bg_popup_preview_window_pane_g8

0xc33a,	// (0x0002bb32) aid_popup_width_pane

0x7370,	// (0x00026b68) popup_midp_note_alarm_window_ParamLimits

0x7370,	// (0x00026b68) popup_midp_note_alarm_window

0x12a0,	// (0x00020a98) data_form_pane_ParamLimits

0xbb40,	// (0x0002b338) form_field_data_pane_g1

0xbb48,	// (0x0002b340) form_field_data_pane_t1_ParamLimits

0x12ac,	// (0x00020aa4) input_focus_pane_ParamLimits

0x12ba,	// (0x00020ab2) data_form_wide_pane_ParamLimits

0xbb60,	// (0x0002b358) form_field_data_wide_pane_g1

0xbb6c,	// (0x0002b364) form_field_data_wide_pane_t1_ParamLimits

0x0a1e,	// (0x00020216) input_focus_pane_cp6_ParamLimits

0x2eaa,	// (0x000226a2) input_popup_find_pane_g1_ParamLimits

0x2eaa,	// (0x000226a2) input_popup_find_pane_g1

0xc79b,	// (0x0002bf93) aid_navi_side_left_pane

0xc7ab,	// (0x0002bfa3) aid_navi_side_right_pane

0x5231,	// (0x00024a29) bg_popup_window_pane_cp30_ParamLimits

0x5231,	// (0x00024a29) bg_popup_window_pane_cp30

0x52ab,	// (0x00024aa3) popup_midp_note_alarm_window_g1_ParamLimits

0x52ab,	// (0x00024aa3) popup_midp_note_alarm_window_g1

0x52db,	// (0x00024ad3) popup_midp_note_alarm_window_t1_ParamLimits

0x52db,	// (0x00024ad3) popup_midp_note_alarm_window_t1

0x537c,	// (0x00024b74) popup_midp_note_alarm_window_t2_ParamLimits

0x537c,	// (0x00024b74) popup_midp_note_alarm_window_t2

0x542a,	// (0x00024c22) popup_midp_note_alarm_window_t3_ParamLimits

0x542a,	// (0x00024c22) popup_midp_note_alarm_window_t3

0x5452,	// (0x00024c4a) popup_midp_note_alarm_window_t4_ParamLimits

0x5452,	// (0x00024c4a) popup_midp_note_alarm_window_t4

0x5472,	// (0x00024c6a) popup_midp_note_alarm_window_t5_ParamLimits

0x5472,	// (0x00024c6a) popup_midp_note_alarm_window_t5

0x000a,

0xf8d8,	// (0x0002f0d0) popup_midp_note_alarm_window_t_ParamLimits

0xf8d8,	// (0x0002f0d0) popup_midp_note_alarm_window_t

0x551e,	// (0x00024d16) wait_bar_pane_cp1_ParamLimits

0x551e,	// (0x00024d16) wait_bar_pane_cp1

0x05f4,	// (0x0001fdec) wait_anim_pane_copy1

0x05f4,	// (0x0001fdec) wait_border_pane_copy1

0x4f77,	// (0x0002476f) wait_border_pane_g1_copy1

0xbb86,	// (0x0002b37e) form_field_popup_pane_g1

0xbb8e,	// (0x0002b386) form_field_popup_pane_t1_ParamLimits

0x12ac,	// (0x00020aa4) input_focus_pane_cp7_ParamLimits

0x12a0,	// (0x00020a98) list_form_pane_ParamLimits

0xbba6,	// (0x0002b39e) form_field_popup_wide_pane_g1

0xbbae,	// (0x0002b3a6) form_field_popup_wide_pane_t1_ParamLimits

0x12ac,	// (0x00020aa4) input_focus_pane_cp8_ParamLimits

0x12da,	// (0x00020ad2) list_form_wide_pane_ParamLimits

0x5c53,	// (0x0002544b) aid_size_cell_graphic_pane

0xbc3a,	// (0x0002b432) data_form_pane_t1_ParamLimits

0xbe3f,	// (0x0002b637) data_form_wide_pane_t1_ParamLimits

0x7594,	// (0x00026d8c) bg_status_flat_pane

0x2b88,	// (0x00022380) title_pane_t1_ParamLimits

0x060a,	// (0x0001fe02) title_pane_t2_ParamLimits

0x0630,	// (0x0001fe28) title_pane_t3_ParamLimits

0xf59b,	// (0x0002ed93) title_pane_t_ParamLimits

0x30dc,	// (0x000228d4) level_1_signal_ParamLimits

0x30e9,	// (0x000228e1) level_2_signal_ParamLimits

0x30f6,	// (0x000228ee) level_3_signal_ParamLimits

0x3103,	// (0x000228fb) level_4_signal_ParamLimits

0x3110,	// (0x00022908) level_5_signal_ParamLimits

0x311d,	// (0x00022915) level_6_signal_ParamLimits

0x312a,	// (0x00022922) level_7_signal_ParamLimits

0x30dc,	// (0x000228d4) level_1_battery_ParamLimits

0x30e9,	// (0x000228e1) level_2_battery_ParamLimits

0x30f6,	// (0x000228ee) level_3_battery_ParamLimits

0x3103,	// (0x000228fb) level_4_battery_ParamLimits

0x3110,	// (0x00022908) level_5_battery_ParamLimits

0x311d,	// (0x00022915) level_6_battery_ParamLimits

0x312a,	// (0x00022922) level_7_battery_ParamLimits

0x5160,	// (0x00024958) bg_status_flat_pane_g1

0x5168,	// (0x00024960) bg_status_flat_pane_g2

0x5170,	// (0x00024968) bg_status_flat_pane_g3

0x5178,	// (0x00024970) bg_status_flat_pane_g4

0x5180,	// (0x00024978) bg_status_flat_pane_g5

0x5188,	// (0x00024980) bg_status_flat_pane_g6

0x5190,	// (0x00024988) bg_status_flat_pane_g7

0x2bf0,	// (0x000223e8) tabs_3_active_pane_t1_ParamLimits

0x2bf0,	// (0x000223e8) tabs_3_passive_pane_t1_ParamLimits

0x2c0a,	// (0x00022402) tabs_4_active_pane_t1_ParamLimits

0x2c0a,	// (0x00022402) tabs_4_1_passive_pane_t1_ParamLimits

0x2ebe,	// (0x000226b6) tabs_2_active_pane_t1_ParamLimits

0x2ebe,	// (0x000226b6) tabs_2_passive_pane_t1_ParamLimits

0x1827,	// (0x0002101f) bg_active_tab_pane_cp4_ParamLimits

0x2ed0,	// (0x000226c8) tabs_2_long_active_pane_t1_ParamLimits

0x2ee3,	// (0x000226db) bg_passive_tab_pane_cp4_ParamLimits

0xccb2,	// (0x0002c4aa) list_single_midp_graphic_pane_t1_ParamLimits

0x1827,	// (0x0002101f) bg_active_tab_pane_cp5_ParamLimits

0x2eef,	// (0x000226e7) tabs_3_long_active_pane_t1_ParamLimits

0x2ee3,	// (0x000226db) bg_passive_tab_pane_cp5_ParamLimits

0xccb2,	// (0x0002c4aa) list_single_midp_graphic_pane_t1

0x7594,	// (0x00026d8c) bg_status_flat_pane_ParamLimits

0x4962,	// (0x0002415a) indicator_pane_cp2_ParamLimits

0x4962,	// (0x0002415a) indicator_pane_cp2

0x76d7,	// (0x00026ecf) navi_pane_srt_ParamLimits

0x76d7,	// (0x00026ecf) navi_pane_srt

0x498a,	// (0x00024182) popup_clock_digital_analogue_window_cp1

0x06c8,	// (0x0001fec0) indicator_pane_t1

0x1c65,	// (0x0002145d) copy_highlight_pane

0x1c65,	// (0x0002145d) cursor_graphics_pane

0x1c65,	// (0x0002145d) graphic_within_text_pane

0x1c65,	// (0x0002145d) link_highlight_pane

0x5882,	// (0x0002507a) popup_preview_text_window_t5_ParamLimits

0x5882,	// (0x0002507a) popup_preview_text_window_t5

0x1ce0,	// (0x000214d8) cursor_digital_pane

0x1ce0,	// (0x000214d8) cursor_primary_pane

0x1cf1,	// (0x000214e9) cursor_primary_small_pane

0x1cf9,	// (0x000214f1) cursor_secondary_pane

0x1d01,	// (0x000214f9) cursor_title_pane

0x1ce0,	// (0x000214d8) link_highlight_digital_pane

0x1ce8,	// (0x000214e0) link_highlight_primary_pane

0x1cf1,	// (0x000214e9) link_highlight_primary_small_pane

0x1cf9,	// (0x000214f1) link_highlight_secondary_pane

0x1d01,	// (0x000214f9) link_highlight_title_pane

0x1ce0,	// (0x000214d8) copy_highlight_digital_pane

0x1ce0,	// (0x000214d8) copy_highlight_primary_pane

0x1cf1,	// (0x000214e9) copy_highlight_primary_small_pane

0x1cf9,	// (0x000214f1) copy_highlight_secondary_pane

0x1d01,	// (0x000214f9) copy_highlight_title_pane

0x1cf9,	// (0x000214f1) graphic_text_digital_pane

0x51e0,	// (0x000249d8) graphic_text_primary_pane

0x51e9,	// (0x000249e1) graphic_text_primary_small_pane

0x1cf1,	// (0x000214e9) graphic_text_secondary_pane

0x1ce0,	// (0x000214d8) graphic_text_title_pane

0x34a8,	// (0x00022ca0) cursor_primary_pane_g1

0x51d2,	// (0x000249ca) cursor_text_primary_t1

0x7aa5,	// (0x0002729d) cursor_primary_small_pane_g1

0x51c4,	// (0x000249bc) cursor_text_primary_small_t1

0x7a9d,	// (0x00027295) cursor_primary_small_pane_g1_copy1

0x51b6,	// (0x000249ae) cursor_text_primary_small_t1_copy1

0x51a8,	// (0x000249a0) cursor_text_title_t1

0x7a95,	// (0x0002728d) cursor_title_pane_g1

0x34a8,	// (0x00022ca0) cursor_digital_pane_g1

0x1d09,	// (0x00021501) cursor_text_digital_t1

0x1d17,	// (0x0002150f) link_highlight_primary_pane_g1

0x5151,	// (0x00024949) link_highlight_primary_pane_t1

0x1d17,	// (0x0002150f) link_highlight_primary_small_pane_g1

0x1d1f,	// (0x00021517) link_highlight_primary_small_pane_t1

0x1d2e,	// (0x00021526) link_highlight_secondary_pane_g1

0x1d36,	// (0x0002152e) link_highlight_secondary_pane_t1

0x50b6,	// (0x000248ae) link_highlight_title_pane_g1

0x50cd,	// (0x000248c5) link_highlight_title_pane_t1

0x50b6,	// (0x000248ae) link_highlight_digital_pane_g1

0x50be,	// (0x000248b6) link_highlight_digital_pane_t1

0x4f92,	// (0x0002478a) copy_highlight_primary_pane_g1

0x4fb8,	// (0x000247b0) copy_highlight_primary_pane_t1

0x4f92,	// (0x0002478a) copy_highlight_primary_small_pane_g1

0x4fa9,	// (0x000247a1) copy_highlight_primary_small_pane_t1

0x1d45,	// (0x0002153d) copy_highlight_secondary_pane_g1

0x1d4d,	// (0x00021545) copy_highlight_secondary_pane_t1

0x4f92,	// (0x0002478a) copy_highlight_title_pane_g1

0x4f9a,	// (0x00024792) copy_highlight_title_pane_t1

0x4f92,	// (0x0002478a) copy_highlight_digital_pane_g1

0x5d74,	// (0x0002556c) copy_highlight_digital_pane_t1

0x5cc8,	// (0x000254c0) graphic_text_primary_pane_g1

0x5d58,	// (0x00025550) graphic_text_primary_pane_t1

0x5d66,	// (0x0002555e) graphic_text_primary_pane_t2

0x0001,

0xfa02,	// (0x0002f1fa) graphic_text_primary_pane_t

0x5d34,	// (0x0002552c) graphic_text_primary_small_pane_g1

0x5d3c,	// (0x00025534) graphic_text_primary_small_pane_t1

0x5d4a,	// (0x00025542) graphic_text_primary_small_pane_t2

0x0001,

0xf9fd,	// (0x0002f1f5) graphic_text_primary_small_pane_t

0x5d10,	// (0x00025508) graphic_text_secondary_pane_g1

0x5d18,	// (0x00025510) graphic_text_secondary_pane_t1

0x5d26,	// (0x0002551e) graphic_text_secondary_pane_t2

0x0001,

0xf9f8,	// (0x0002f1f0) graphic_text_secondary_pane_t

0x5cec,	// (0x000254e4) graphic_text_title_pane_g1

0x5cf4,	// (0x000254ec) graphic_text_title_pane_t1

0x5d02,	// (0x000254fa) graphic_text_title_pane_t2

0x0001,

0xf9f3,	// (0x0002f1eb) graphic_text_title_pane_t

0x5cc8,	// (0x000254c0) graphic_text_digital_pane_g1

0x5cd0,	// (0x000254c8) graphic_text_digital_pane_t1

0x5cde,	// (0x000254d6) graphic_text_digital_pane_t2

0x0001,

0xf9ee,	// (0x0002f1e6) graphic_text_digital_pane_t

0x0658,	// (0x0001fe50) navi_icon_pane_srt_ParamLimits

0x0658,	// (0x0001fe50) navi_icon_pane_srt

0x05f4,	// (0x0001fdec) navi_midp_pane_srt

0x05f4,	// (0x0001fdec) navi_navi_pane_srt

0x0658,	// (0x0001fe50) navi_text_pane_srt_ParamLimits

0x0658,	// (0x0001fe50) navi_text_pane_srt

0x570e,	// (0x00024f06) navi_navi_icon_text_pane_srt

0x5728,	// (0x00024f20) navi_navi_pane_srt_g1_ParamLimits

0x5728,	// (0x00024f20) navi_navi_pane_srt_g1

0x5716,	// (0x00024f0e) navi_navi_pane_srt_g2_ParamLimits

0x5716,	// (0x00024f0e) navi_navi_pane_srt_g2

0x0001,

0xf923,	// (0x0002f11b) navi_navi_pane_srt_g_ParamLimits

0xf923,	// (0x0002f11b) navi_navi_pane_srt_g

0x573a,	// (0x00024f32) navi_navi_tabs_pane_srt

0x570e,	// (0x00024f06) navi_navi_text_pane_srt

0x570e,	// (0x00024f06) navi_navi_volume_pane_srt

0x5cb9,	// (0x000254b1) navi_navi_text_pane_srt_t1

0xcfe9,	// (0x0002c7e1) navi_navi_volume_pane_srt_g1

0xcff1,	// (0x0002c7e9) volume_small_pane_srt_ParamLimits

0xcff1,	// (0x0002c7e9) volume_small_pane_srt

0xca52,	// (0x0002c24a) volume_small_pane_srt_g1_ParamLimits

0xca52,	// (0x0002c24a) volume_small_pane_srt_g1

0xca62,	// (0x0002c25a) volume_small_pane_srt_g2_ParamLimits

0xca62,	// (0x0002c25a) volume_small_pane_srt_g2

0xca73,	// (0x0002c26b) volume_small_pane_srt_g3_ParamLimits

0xca73,	// (0x0002c26b) volume_small_pane_srt_g3

0xca84,	// (0x0002c27c) volume_small_pane_srt_g4_ParamLimits

0xca84,	// (0x0002c27c) volume_small_pane_srt_g4

0xca95,	// (0x0002c28d) volume_small_pane_srt_g5_ParamLimits

0xca95,	// (0x0002c28d) volume_small_pane_srt_g5

0xcaa6,	// (0x0002c29e) volume_small_pane_srt_g6_ParamLimits

0xcaa6,	// (0x0002c29e) volume_small_pane_srt_g6

0xcab7,	// (0x0002c2af) volume_small_pane_srt_g7_ParamLimits

0xcab7,	// (0x0002c2af) volume_small_pane_srt_g7

0xcac8,	// (0x0002c2c0) volume_small_pane_srt_g8_ParamLimits

0xcac8,	// (0x0002c2c0) volume_small_pane_srt_g8

0xcad9,	// (0x0002c2d1) volume_small_pane_srt_g9_ParamLimits

0xcad9,	// (0x0002c2d1) volume_small_pane_srt_g9

0xcaea,	// (0x0002c2e2) volume_small_pane_srt_g10_ParamLimits

0xcaea,	// (0x0002c2e2) volume_small_pane_srt_g10

0x0009,

0xf7a2,	// (0x0002ef9a) volume_small_pane_srt_g_ParamLimits

0xf7a2,	// (0x0002ef9a) volume_small_pane_srt_g

0x0908,	// (0x00020100) query_popup_data_pane_cp2

0x5c9f,	// (0x00025497) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x5c9f,	// (0x00025497) navi_navi_icon_text_pane_srt_t1

0x51e0,	// (0x000249d8) navi_tabs_2_long_pane_srt

0x51e0,	// (0x000249d8) navi_tabs_2_pane_srt

0x51e0,	// (0x000249d8) navi_tabs_3_long_pane_srt

0x51e0,	// (0x000249d8) navi_tabs_3_pane_srt

0x51e0,	// (0x000249d8) navi_tabs_4_pane_srt

0xcfc9,	// (0x0002c7c1) tabs_2_active_pane_srt_ParamLimits

0xcfc9,	// (0x0002c7c1) tabs_2_active_pane_srt

0xcfd9,	// (0x0002c7d1) tabs_2_passive_pane_srt_ParamLimits

0xcfd9,	// (0x0002c7d1) tabs_2_passive_pane_srt

0x47c5,	// (0x00023fbd) bg_passive_tab_pane_cp1_srt_ParamLimits

0x47c5,	// (0x00023fbd) bg_passive_tab_pane_cp1_srt

0x5c86,	// (0x0002547e) bg_passive_tab_pane_g1_cp1_srt

0x196f,	// (0x00021167) bg_passive_tab_pane_g2_cp1_srt

0x5c7d,	// (0x00025475) bg_passive_tab_pane_g3_cp1_srt

0x0658,	// (0x0001fe50) bg_active_tab_pane_cp1_srt_ParamLimits

0x0658,	// (0x0001fe50) bg_active_tab_pane_cp1_srt

0x5c8f,	// (0x00025487) tabs_2_active_pane_srt_g1

0x2ebe,	// (0x000226b6) tabs_2_active_pane_srt_t1_ParamLimits

0x2ebe,	// (0x000226b6) tabs_2_active_pane_srt_t1

0x5c86,	// (0x0002547e) bg_active_tab_pane_g1_cp1_srt

0x196f,	// (0x00021167) bg_active_tab_pane_g2_cp1_srt

0x5c7d,	// (0x00025475) bg_active_tab_pane_g3_cp1_srt

0xcf96,	// (0x0002c78e) tabs_3_active_pane_srt_ParamLimits

0xcf96,	// (0x0002c78e) tabs_3_active_pane_srt

0xcfa7,	// (0x0002c79f) tabs_3_passive_pane_cp_srt_ParamLimits

0xcfa7,	// (0x0002c79f) tabs_3_passive_pane_cp_srt

0xcfb8,	// (0x0002c7b0) tabs_3_passive_pane_srt_ParamLimits

0xcfb8,	// (0x0002c7b0) tabs_3_passive_pane_srt

0x47c5,	// (0x00023fbd) bg_passive_tab_pane_cp2_srt_ParamLimits

0x47c5,	// (0x00023fbd) bg_passive_tab_pane_cp2_srt

0x1d5c,	// (0x00021554) bg_passive_tab_pane_g1_cp2_srt

0x196f,	// (0x00021167) bg_passive_tab_pane_g2_cp2_srt

0x1d65,	// (0x0002155d) bg_passive_tab_pane_g3_cp2_srt

0x0658,	// (0x0001fe50) bg_active_tab_pane_cp2_srt_ParamLimits

0x0658,	// (0x0001fe50) bg_active_tab_pane_cp2_srt

0x5c75,	// (0x0002546d) tabs_3_active_pane_srt_g1

0x2bf0,	// (0x000223e8) tabs_3_active_pane_srt_t1_ParamLimits

0x2bf0,	// (0x000223e8) tabs_3_active_pane_srt_t1

0x1d5c,	// (0x00021554) bg_active_tab_pane_g1_cp2_srt

0x196f,	// (0x00021167) bg_active_tab_pane_g2_cp2_srt

0x1d65,	// (0x0002155d) bg_active_tab_pane_g3_cp2_srt

0xcf4e,	// (0x0002c746) tabs_4_active_pane_srt_ParamLimits

0xcf4e,	// (0x0002c746) tabs_4_active_pane_srt

0xcf60,	// (0x0002c758) tabs_4_passive_pane_cp2_srt_ParamLimits

0xcf60,	// (0x0002c758) tabs_4_passive_pane_cp2_srt

0x477b,	// (0x00023f73) aid_size_cell_toolbar

0x2ee3,	// (0x000226db) main_idle_act_pane_ParamLimits

0x484b,	// (0x00024043) popup_large_graphic_colour_window_ParamLimits

0x74c2,	// (0x00026cba) popup_toolbar_window_ParamLimits

0x74c2,	// (0x00026cba) popup_toolbar_window

0xcf25,	// (0x0002c71d) list_single_graphic_2heading_pane_ParamLimits

0xcf25,	// (0x0002c71d) list_single_graphic_2heading_pane

0x15e1,	// (0x00020dd9) aid_size_cell_apps_grid_lsc_pane

0x15f3,	// (0x00020deb) aid_size_cell_apps_grid_prt_pane

0x47c5,	// (0x00023fbd) bg_wml_button_pane_cp1_ParamLimits

0x47c5,	// (0x00023fbd) bg_wml_button_pane_cp1

0x7a3e,	// (0x00027236) form_midp_field_text_pane_t1_ParamLimits

0x4b71,	// (0x00024369) input_focus_pane_cp050_ParamLimits

0x4cb1,	// (0x000244a9) list_midp_form_text_pane_ParamLimits

0x4c8e,	// (0x00024486) input_focus_pane_cp051_ParamLimits

0x4ca2,	// (0x0002449a) list_midp_choice_pane_ParamLimits

0x79d8,	// (0x000271d0) list_single_2graphic_pane_cp3_ParamLimits

0x79d8,	// (0x000271d0) list_single_2graphic_pane_cp3

0x79ec,	// (0x000271e4) list_single_midp_graphic_pane_ParamLimits

0x79ec,	// (0x000271e4) list_single_midp_graphic_pane

0xbd81,	// (0x0002b579) list_single_graphic_2heading_pane_g1_ParamLimits

0xbd81,	// (0x0002b579) list_single_graphic_2heading_pane_g1

0xbd8d,	// (0x0002b585) list_single_graphic_2heading_pane_g4_ParamLimits

0xbd8d,	// (0x0002b585) list_single_graphic_2heading_pane_g4

0xb93d,	// (0x0002b135) list_single_graphic_2heading_pane_g5_ParamLimits

0xb93d,	// (0x0002b135) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f5,	// (0x0002efed) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f5,	// (0x0002efed) list_single_graphic_2heading_pane_g

0xbd99,	// (0x0002b591) list_single_graphic_2heading_pane_t1_ParamLimits

0xbd99,	// (0x0002b591) list_single_graphic_2heading_pane_t1

0xbdad,	// (0x0002b5a5) list_single_graphic_2heading_pane_t2_ParamLimits

0xbdad,	// (0x0002b5a5) list_single_graphic_2heading_pane_t2

0xbdc7,	// (0x0002b5bf) list_single_graphic_2heading_pane_t3_ParamLimits

0xbdc7,	// (0x0002b5bf) list_single_graphic_2heading_pane_t3

0x0002,

0xf7fc,	// (0x0002eff4) list_single_graphic_2heading_pane_t_ParamLimits

0xf7fc,	// (0x0002eff4) list_single_graphic_2heading_pane_t

0x49cd,	// (0x000241c5) bg_popup_sub_pane_cp2

0x49f3,	// (0x000241eb) grid_toobar_pane

0xcc4e,	// (0x0002c446) cell_toolbar_pane_ParamLimits

0xcc4e,	// (0x0002c446) cell_toolbar_pane

0x4a29,	// (0x00024221) cell_toolbar_pane_g1_ParamLimits

0x4a29,	// (0x00024221) cell_toolbar_pane_g1

0x4a3b,	// (0x00024233) cell_toolbar_pane_g2_ParamLimits

0x4a3b,	// (0x00024233) cell_toolbar_pane_g2

0x0001,

0xf80a,	// (0x0002f002) cell_toolbar_pane_g_ParamLimits

0xf80a,	// (0x0002f002) cell_toolbar_pane_g

0x4a5d,	// (0x00024255) grid_highlight_pane_cp2_ParamLimits

0x4a5d,	// (0x00024255) grid_highlight_pane_cp2

0x4a77,	// (0x0002426f) toolbar_button_pane

0x4a83,	// (0x0002427b) toolbar_button_pane_g1

0x4a93,	// (0x0002428b) toolbar_button_pane_g2

0x4a8b,	// (0x00024283) toolbar_button_pane_g3

0x4aa3,	// (0x0002429b) toolbar_button_pane_g4

0x4a9b,	// (0x00024293) toolbar_button_pane_g5

0x4aab,	// (0x000242a3) toolbar_button_pane_g6

0x4ab3,	// (0x000242ab) toolbar_button_pane_g7

0x4ac3,	// (0x000242bb) toolbar_button_pane_g8

0x4abb,	// (0x000242b3) toolbar_button_pane_g9

0x0009,

0xf80f,	// (0x0002f007) toolbar_button_pane_g

0xcc7d,	// (0x0002c475) list_single_2graphic_pane_g1_cp3_ParamLimits

0xcc7d,	// (0x0002c475) list_single_2graphic_pane_g1_cp3

0xcc89,	// (0x0002c481) list_single_2graphic_pane_g2_cp3_ParamLimits

0xcc89,	// (0x0002c481) list_single_2graphic_pane_g2_cp3

0x1ae6,	// (0x000212de) list_single_2graphic_pane_g3_cp3

0x5569,	// (0x00024d61) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5569,	// (0x00024d61) list_single_2graphic_pane_g4_cp3

0xcc98,	// (0x0002c490) list_single_2graphic_pane_t1_cp3_ParamLimits

0xcc98,	// (0x0002c490) list_single_2graphic_pane_t1_cp3

0x1ada,	// (0x000212d2) list_single_midp_graphic_pane_g2_ParamLimits

0x1ada,	// (0x000212d2) list_single_midp_graphic_pane_g2

0xbd54,	// (0x0002b54c) aid_zoom_text_primary

0xcc46,	// (0x0002c43e) aid_zoom_text_secondary

0x1e17,	// (0x0002160f) status_small_pane_g7_ParamLimits

0x1e17,	// (0x0002160f) status_small_pane_g7

0x1e3a,	// (0x00021632) status_small_pane_t1_ParamLimits

0x2b6b,	// (0x00022363) title_pane_g2

0x0003,

0xf592,	// (0x0002ed8a) title_pane_g

0x2dbd,	// (0x000225b5) aid_size_cell_colour_1_pane_ParamLimits

0x2dbd,	// (0x000225b5) aid_size_cell_colour_1_pane

0x2dd1,	// (0x000225c9) aid_size_cell_colour_2_pane_ParamLimits

0x2dd1,	// (0x000225c9) aid_size_cell_colour_2_pane

0x2de5,	// (0x000225dd) aid_size_cell_colour_3_pane_ParamLimits

0x2de5,	// (0x000225dd) aid_size_cell_colour_3_pane

0x2df9,	// (0x000225f1) aid_size_cell_colour_4_pane_ParamLimits

0x2df9,	// (0x000225f1) aid_size_cell_colour_4_pane

0xc6fd,	// (0x0002bef5) title_pane_stacon_g1_ParamLimits

0xc6fd,	// (0x0002bef5) title_pane_stacon_g1

0x500f,	// (0x00024807) popup_note_wait_window_g3_ParamLimits

0x500f,	// (0x00024807) popup_note_wait_window_g3

0x5085,	// (0x0002487d) popup_note_wait_window_t5_ParamLimits

0x5085,	// (0x0002487d) popup_note_wait_window_t5

0x05f4,	// (0x0001fdec) main_feb_china_hwr_fs_writing_pane

0x71b1,	// (0x000269a9) popup_feb_china_hwr_fs_window_ParamLimits

0x71b1,	// (0x000269a9) popup_feb_china_hwr_fs_window

0xccc8,	// (0x0002c4c0) aid_size_cell_hwr_fs_ParamLimits

0xccc8,	// (0x0002c4c0) aid_size_cell_hwr_fs

0x4b71,	// (0x00024369) bg_popup_sub_pane_cp3_ParamLimits

0x4b71,	// (0x00024369) bg_popup_sub_pane_cp3

0xccdd,	// (0x0002c4d5) grid_hwr_fs_pane_ParamLimits

0xccdd,	// (0x0002c4d5) grid_hwr_fs_pane

0xccf1,	// (0x0002c4e9) linegrid_hwr_fs_pane_ParamLimits

0xccf1,	// (0x0002c4e9) linegrid_hwr_fs_pane

0xcd01,	// (0x0002c4f9) cell_hwr_fs_pane_ParamLimits

0xcd01,	// (0x0002c4f9) cell_hwr_fs_pane

0x4b7d,	// (0x00024375) linegrid_hwr_fs_pane_g1_ParamLimits

0x4b7d,	// (0x00024375) linegrid_hwr_fs_pane_g1

0x79ac,	// (0x000271a4) linegrid_hwr_fs_pane_g2_ParamLimits

0x79ac,	// (0x000271a4) linegrid_hwr_fs_pane_g2

0x4b89,	// (0x00024381) linegrid_hwr_fs_pane_g3_ParamLimits

0x4b89,	// (0x00024381) linegrid_hwr_fs_pane_g3

0xcd1f,	// (0x0002c517) linegrid_hwr_fs_pane_g4_ParamLimits

0xcd1f,	// (0x0002c517) linegrid_hwr_fs_pane_g4

0xcd39,	// (0x0002c531) linegrid_hwr_fs_pane_g5_ParamLimits

0xcd39,	// (0x0002c531) linegrid_hwr_fs_pane_g5

0x0004,

0xf835,	// (0x0002f02d) linegrid_hwr_fs_pane_g_ParamLimits

0xf835,	// (0x0002f02d) linegrid_hwr_fs_pane_g

0x4b95,	// (0x0002438d) cell_hwr_fs_pane_g1_ParamLimits

0x4b95,	// (0x0002438d) cell_hwr_fs_pane_g1

0x499b,	// (0x00024193) cell_hwr_fs_pane_g2_ParamLimits

0x499b,	// (0x00024193) cell_hwr_fs_pane_g2

0x79be,	// (0x000271b6) cell_hwr_fs_pane_g3_ParamLimits

0x79be,	// (0x000271b6) cell_hwr_fs_pane_g3

0x79cb,	// (0x000271c3) cell_hwr_fs_pane_g4_ParamLimits

0x79cb,	// (0x000271c3) cell_hwr_fs_pane_g4

0x0003,

0xf840,	// (0x0002f038) cell_hwr_fs_pane_g_ParamLimits

0xf840,	// (0x0002f038) cell_hwr_fs_pane_g

0xcd4f,	// (0x0002c547) cell_hwr_fs_pane_t1

0x05f4,	// (0x0001fdec) grid_highlight_pane_cp6

0x05f4,	// (0x0001fdec) main_idle_act2_pane

0x13ea,	// (0x00020be2) aid_inside_area_popup_secondary

0x7ac3,	// (0x000272bb) aid_inside_area_window_primary_ParamLimits

0x7ac3,	// (0x000272bb) aid_inside_area_window_primary

0x5d83,	// (0x0002557b) ai2_news_ticker_pane

0x5d8b,	// (0x00025583) aid_size_cell_ai1_link_ParamLimits

0x5d8b,	// (0x00025583) aid_size_cell_ai1_link

0x7e0b,	// (0x00027603) popup_ai2_data_window_ParamLimits

0x7e0b,	// (0x00027603) popup_ai2_data_window

0x5da5,	// (0x0002559d) popup_ai2_link_window_ParamLimits

0x5da5,	// (0x0002559d) popup_ai2_link_window

0x4b71,	// (0x00024369) bg_popup_sub_pane_cp4_ParamLimits

0x4b71,	// (0x00024369) bg_popup_sub_pane_cp4

0x5db9,	// (0x000255b1) grid_ai2_link_pane_ParamLimits

0x5db9,	// (0x000255b1) grid_ai2_link_pane

0x5dd0,	// (0x000255c8) popup_ai2_link_window_g1_ParamLimits

0x5dd0,	// (0x000255c8) popup_ai2_link_window_g1

0x5ddc,	// (0x000255d4) popup_ai2_link_window_g2_ParamLimits

0x5ddc,	// (0x000255d4) popup_ai2_link_window_g2

0x0001,

0xfa07,	// (0x0002f1ff) popup_ai2_link_window_g_ParamLimits

0xfa07,	// (0x0002f1ff) popup_ai2_link_window_g

0x5deb,	// (0x000255e3) ai2_mp_button_pane

0x5df3,	// (0x000255eb) ai2_mp_volume_pane

0x4c8e,	// (0x00024486) bg_popup_sub_pane_cp5_ParamLimits

0x4c8e,	// (0x00024486) bg_popup_sub_pane_cp5

0x5dfb,	// (0x000255f3) heading_ai2_gene_pane_ParamLimits

0x5dfb,	// (0x000255f3) heading_ai2_gene_pane

0x5e07,	// (0x000255ff) list_ai2_gene_pane_ParamLimits

0x5e07,	// (0x000255ff) list_ai2_gene_pane

0x5e4f,	// (0x00025647) cell_ai2_link_pane_ParamLimits

0x5e4f,	// (0x00025647) cell_ai2_link_pane

0x5e65,	// (0x0002565d) cell_ai2_link_pane_g1

0x05f4,	// (0x0001fdec) grid_highlight_pane_cp7

0xd006,	// (0x0002c7fe) ai2_mp_volume_pane_g1

0x5f02,	// (0x000256fa) ai2_mp_volume_pane_g2

0x7e36,	// (0x0002762e) list_ai2_gene_pane_t1

0x5efa,	// (0x000256f2) ai2_mp_volume_pane_g3

0x0002,

0xfa20,	// (0x0002f218) ai2_mp_volume_pane_g

0xd00e,	// (0x0002c806) volume_small_pane_cp3

0x5f0a,	// (0x00025702) aid_size_cell_ai2_button

0x5f12,	// (0x0002570a) grid_ai2_button_pane

0x5f1b,	// (0x00025713) cell_ai2_button_pane_ParamLimits

0x5f1b,	// (0x00025713) cell_ai2_button_pane

0x0572,	// (0x0001fd6a) cell_ai2_button_pane_g1

0x05f4,	// (0x0001fdec) grid_highlight_pane_cp8

0x5eba,	// (0x000256b2) ai2_gene_pane_t1_ParamLimits

0x5eba,	// (0x000256b2) ai2_gene_pane_t1

0x7157,	// (0x0002694f) aid_height_parent_landscape

0x7bc1,	// (0x000273b9) aid_height_set_list

0x5b77,	// (0x0002536f) aid_size_parent

0x5c53,	// (0x0002544b) aid_size_cell_graphic_pane_ParamLimits

0x5e17,	// (0x0002560f) popup_ai2_data_window_g1_ParamLimits

0x5e17,	// (0x0002560f) popup_ai2_data_window_g1

0x5e23,	// (0x0002561b) ai2_news_ticker_pane_g1

0x5e2b,	// (0x00025623) ai2_news_ticker_pane_g2

0x0001,

0xfa0c,	// (0x0002f204) ai2_news_ticker_pane_g

0x5e33,	// (0x0002562b) ai2_news_ticker_pane_t1

0x5e41,	// (0x00025639) ai2_news_ticker_pane_t2

0x0001,

0xfa11,	// (0x0002f209) ai2_news_ticker_pane_t

0x5c34,	// (0x0002542c) heading_ai2_gene_pane_g1

0x5e6e,	// (0x00025666) heading_ai2_gene_pane_t1_ParamLimits

0x5e6e,	// (0x00025666) heading_ai2_gene_pane_t1

0x5e83,	// (0x0002567b) list_highlight_pane_cp6

0x7e1f,	// (0x00027617) ai2_gene_pane_ParamLimits

0x7e1f,	// (0x00027617) ai2_gene_pane

0x7e44,	// (0x0002763c) list_ai2_gene_pane_t2

0x0001,

0xfa16,	// (0x0002f20e) list_ai2_gene_pane_t

0x5e8b,	// (0x00025683) list_highlight_pane_cp8_ParamLimits

0x5e8b,	// (0x00025683) list_highlight_pane_cp8

0x5e9c,	// (0x00025694) ai2_gene_pane_g1_ParamLimits

0x5e9c,	// (0x00025694) ai2_gene_pane_g1

0x5eae,	// (0x000256a6) ai2_gene_pane_g2_ParamLimits

0x5eae,	// (0x000256a6) ai2_gene_pane_g2

0x0001,

0xfa1b,	// (0x0002f213) ai2_gene_pane_g_ParamLimits

0xfa1b,	// (0x0002f213) ai2_gene_pane_g

0x0b9f,	// (0x00020397) scroll_pane_cp12

0xcbfd,	// (0x0002c3f5) control_pane_t3_ParamLimits

0xcbfd,	// (0x0002c3f5) control_pane_t3

0x1e2b,	// (0x00021623) status_small_pane_g8_ParamLimits

0x1e2b,	// (0x00021623) status_small_pane_g8

0x721f,	// (0x00026a17) popup_find_window_ParamLimits

0x7382,	// (0x00026b7a) popup_note_image_window_ParamLimits

0xb7de,	// (0x0002afd6) list_double2_graphic_pane_vc_g1_ParamLimits

0xb7de,	// (0x0002afd6) list_double2_graphic_pane_vc_g1

0xc666,	// (0x0002be5e) list_double2_graphic_pane_vc_g2_ParamLimits

0xc666,	// (0x0002be5e) list_double2_graphic_pane_vc_g2

0xc672,	// (0x0002be6a) list_double2_graphic_pane_vc_g3_ParamLimits

0xc672,	// (0x0002be6a) list_double2_graphic_pane_vc_g3

0x0002,

0xf803,	// (0x0002effb) list_double2_graphic_pane_vc_g_ParamLimits

0xf803,	// (0x0002effb) list_double2_graphic_pane_vc_g

0xb7b6,	// (0x0002afae) list_double2_graphic_pane_vc_t1_ParamLimits

0xb7b6,	// (0x0002afae) list_double2_graphic_pane_vc_t1

0xc666,	// (0x0002be5e) list_single_heading_pane_vc_g1_ParamLimits

0xc666,	// (0x0002be5e) list_single_heading_pane_vc_g1

0xc672,	// (0x0002be6a) list_single_heading_pane_vc_g2_ParamLimits

0xc672,	// (0x0002be6a) list_single_heading_pane_vc_g2

0x0001,

0xf635,	// (0x0002ee2d) list_single_heading_pane_vc_g_ParamLimits

0xf635,	// (0x0002ee2d) list_single_heading_pane_vc_g

0xbddf,	// (0x0002b5d7) list_single_heading_pane_vc_t1_ParamLimits

0xbddf,	// (0x0002b5d7) list_single_heading_pane_vc_t1

0xbdf5,	// (0x0002b5ed) list_single_heading_pane_vc_t2_ParamLimits

0xbdf5,	// (0x0002b5ed) list_single_heading_pane_vc_t2

0x0001,

0xf824,	// (0x0002f01c) list_single_heading_pane_vc_t_ParamLimits

0xf824,	// (0x0002f01c) list_single_heading_pane_vc_t

0x4acb,	// (0x000242c3) list_setting_number_pane_vc_g1_ParamLimits

0x4acb,	// (0x000242c3) list_setting_number_pane_vc_g1

0x4ad7,	// (0x000242cf) list_setting_number_pane_vc_g2_ParamLimits

0x4ad7,	// (0x000242cf) list_setting_number_pane_vc_g2

0x0001,

0xf829,	// (0x0002f021) list_setting_number_pane_vc_g_ParamLimits

0xf829,	// (0x0002f021) list_setting_number_pane_vc_g

0x4ae3,	// (0x000242db) list_setting_number_pane_vc_t1_ParamLimits

0x4ae3,	// (0x000242db) list_setting_number_pane_vc_t1

0x4af7,	// (0x000242ef) list_setting_number_pane_vc_t2_ParamLimits

0x4af7,	// (0x000242ef) list_setting_number_pane_vc_t2

0x4b13,	// (0x0002430b) list_setting_number_pane_vc_t3_ParamLimits

0x4b13,	// (0x0002430b) list_setting_number_pane_vc_t3

0x0002,

0xf82e,	// (0x0002f026) list_setting_number_pane_vc_t_ParamLimits

0xf82e,	// (0x0002f026) list_setting_number_pane_vc_t

0x4b39,	// (0x00024331) set_value_pane_vc_ParamLimits

0x4b39,	// (0x00024331) set_value_pane_vc

0xcf25,	// (0x0002c71d) list_double2_graphic_pane_vc_ParamLimits

0xcf25,	// (0x0002c71d) list_double2_graphic_pane_vc

0x5bd2,	// (0x000253ca) list_double2_large_graphic_pane_vc_ParamLimits

0x5bd2,	// (0x000253ca) list_double2_large_graphic_pane_vc

0xcf25,	// (0x0002c71d) list_double2_pane_vc_ParamLimits

0xcf25,	// (0x0002c71d) list_double2_pane_vc

0xcf25,	// (0x0002c71d) list_double_graphic_heading_pane_vc_ParamLimits

0xcf25,	// (0x0002c71d) list_double_graphic_heading_pane_vc

0xcf25,	// (0x0002c71d) list_double_graphic_pane_vc_ParamLimits

0xcf25,	// (0x0002c71d) list_double_graphic_pane_vc

0xcf25,	// (0x0002c71d) list_double_heading_pane_vc_ParamLimits

0xcf25,	// (0x0002c71d) list_double_heading_pane_vc

0x5bd2,	// (0x000253ca) list_double_large_graphic_pane_vc_ParamLimits

0x5bd2,	// (0x000253ca) list_double_large_graphic_pane_vc

0xcf25,	// (0x0002c71d) list_double_number_pane_vc_ParamLimits

0xcf25,	// (0x0002c71d) list_double_number_pane_vc

0xcf25,	// (0x0002c71d) list_double_pane_vc_ParamLimits

0xcf25,	// (0x0002c71d) list_double_pane_vc

0xcf25,	// (0x0002c71d) list_double_time_pane_vc_ParamLimits

0xcf25,	// (0x0002c71d) list_double_time_pane_vc

0xcf25,	// (0x0002c71d) list_setting_number_pane_vc_ParamLimits

0xcf25,	// (0x0002c71d) list_setting_number_pane_vc

0xcf25,	// (0x0002c71d) list_setting_pane_vc_ParamLimits

0xcf25,	// (0x0002c71d) list_setting_pane_vc

0xcf25,	// (0x0002c71d) list_single_graphic_heading_pane_vc_ParamLimits

0xcf25,	// (0x0002c71d) list_single_graphic_heading_pane_vc

0xcf25,	// (0x0002c71d) list_single_heading_pane_vc_ParamLimits

0xcf25,	// (0x0002c71d) list_single_heading_pane_vc

0xbe84,	// (0x0002b67c) list_single_number_heading_pane_vc_ParamLimits

0xbe84,	// (0x0002b67c) list_single_number_heading_pane_vc

0xb7de,	// (0x0002afd6) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xb7de,	// (0x0002afd6) list_double_graphic_heading_pane_vc_g1

0xc666,	// (0x0002be5e) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xc666,	// (0x0002be5e) list_double_graphic_heading_pane_vc_g2

0xc672,	// (0x0002be6a) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xc672,	// (0x0002be6a) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf803,	// (0x0002effb) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0002effb) list_double_graphic_heading_pane_vc_g

0xbed7,	// (0x0002b6cf) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xbed7,	// (0x0002b6cf) list_double_graphic_heading_pane_vc_t1

0xbddf,	// (0x0002b5d7) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xbddf,	// (0x0002b5d7) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa27,	// (0x0002f21f) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa27,	// (0x0002f21f) list_double_graphic_heading_pane_vc_t

0x4acb,	// (0x000242c3) list_setting_pane_vc_g1_ParamLimits

0x4acb,	// (0x000242c3) list_setting_pane_vc_g1

0x4ad7,	// (0x000242cf) list_setting_pane_vc_g2_ParamLimits

0x4ad7,	// (0x000242cf) list_setting_pane_vc_g2

0x0001,

0xf829,	// (0x0002f021) list_setting_pane_vc_g_ParamLimits

0xf829,	// (0x0002f021) list_setting_pane_vc_g

0x610a,	// (0x00025902) list_setting_pane_vc_t1_ParamLimits

0x610a,	// (0x00025902) list_setting_pane_vc_t1

0x611e,	// (0x00025916) list_setting_pane_vc_t2_ParamLimits

0x611e,	// (0x00025916) list_setting_pane_vc_t2

0x0001,

0xfa6a,	// (0x0002f262) list_setting_pane_vc_t_ParamLimits

0xfa6a,	// (0x0002f262) list_setting_pane_vc_t

0x4b39,	// (0x00024331) set_value_pane_cp_vc_ParamLimits

0x4b39,	// (0x00024331) set_value_pane_cp_vc

0xc666,	// (0x0002be5e) list_single_number_heading_pane_vc_g1_ParamLimits

0xc666,	// (0x0002be5e) list_single_number_heading_pane_vc_g1

0xc672,	// (0x0002be6a) list_single_number_heading_pane_vc_g2_ParamLimits

0xc672,	// (0x0002be6a) list_single_number_heading_pane_vc_g2

0x0001,

0xf635,	// (0x0002ee2d) list_single_number_heading_pane_vc_g_ParamLimits

0xf635,	// (0x0002ee2d) list_single_number_heading_pane_vc_g

0xbddf,	// (0x0002b5d7) list_single_number_heading_pane_vc_t1_ParamLimits

0xbddf,	// (0x0002b5d7) list_single_number_heading_pane_vc_t1

0xbee9,	// (0x0002b6e1) list_single_number_heading_pane_vc_t2_ParamLimits

0xbee9,	// (0x0002b6e1) list_single_number_heading_pane_vc_t2

0xbefb,	// (0x0002b6f3) list_single_number_heading_pane_vc_t3_ParamLimits

0xbefb,	// (0x0002b6f3) list_single_number_heading_pane_vc_t3

0x0002,

0xfa6f,	// (0x0002f267) list_single_number_heading_pane_vc_t_ParamLimits

0xfa6f,	// (0x0002f267) list_single_number_heading_pane_vc_t

0xb7de,	// (0x0002afd6) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xb7de,	// (0x0002afd6) list_single_graphic_heading_pane_vc_g1

0xc666,	// (0x0002be5e) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xc666,	// (0x0002be5e) list_single_graphic_heading_pane_vc_g4

0xc672,	// (0x0002be6a) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xc672,	// (0x0002be6a) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf803,	// (0x0002effb) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0002effb) list_single_graphic_heading_pane_vc_g

0xbddf,	// (0x0002b5d7) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xbddf,	// (0x0002b5d7) list_single_graphic_heading_pane_vc_t1

0xbf0d,	// (0x0002b705) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xbf0d,	// (0x0002b705) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa76,	// (0x0002f26e) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa76,	// (0x0002f26e) list_single_graphic_heading_pane_vc_t

0xc666,	// (0x0002be5e) list_double2_pane_vc_g1_ParamLimits

0xc666,	// (0x0002be5e) list_double2_pane_vc_g1

0xc672,	// (0x0002be6a) list_double2_pane_vc_g2_ParamLimits

0xc672,	// (0x0002be6a) list_double2_pane_vc_g2

0x0001,

0xf635,	// (0x0002ee2d) list_double2_pane_vc_g_ParamLimits

0xf635,	// (0x0002ee2d) list_double2_pane_vc_g

0xb739,	// (0x0002af31) list_double2_pane_vc_t1_ParamLimits

0xb739,	// (0x0002af31) list_double2_pane_vc_t1

0xc63a,	// (0x0002be32) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xc63a,	// (0x0002be32) list_double2_large_graphic_pane_vc_g1

0xc646,	// (0x0002be3e) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xc646,	// (0x0002be3e) list_double2_large_graphic_pane_vc_g2

0xc652,	// (0x0002be4a) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xc652,	// (0x0002be4a) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf62e,	// (0x0002ee26) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf62e,	// (0x0002ee26) list_double2_large_graphic_pane_vc_g

0xb723,	// (0x0002af1b) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb723,	// (0x0002af1b) list_double2_large_graphic_pane_vc_t1

0xd068,	// (0x0002c860) list_double_time_pane_vc_g1_ParamLimits

0xd068,	// (0x0002c860) list_double_time_pane_vc_g1

0xd074,	// (0x0002c86c) list_double_time_pane_vc_g2_ParamLimits

0xd074,	// (0x0002c86c) list_double_time_pane_vc_g2

0x0001,

0xfa7b,	// (0x0002f273) list_double_time_pane_vc_g_ParamLimits

0xfa7b,	// (0x0002f273) list_double_time_pane_vc_g

0xbf1f,	// (0x0002b717) list_double_time_pane_vc_t1_ParamLimits

0xbf1f,	// (0x0002b717) list_double_time_pane_vc_t1

0xbf38,	// (0x0002b730) list_double_time_pane_vc_t2_ParamLimits

0xbf38,	// (0x0002b730) list_double_time_pane_vc_t2

0xbf71,	// (0x0002b769) list_double_time_pane_vc_t3_ParamLimits

0xbf71,	// (0x0002b769) list_double_time_pane_vc_t3

0xbf89,	// (0x0002b781) list_double_time_pane_vc_t4_ParamLimits

0xbf89,	// (0x0002b781) list_double_time_pane_vc_t4

0x0003,

0xfa80,	// (0x0002f278) list_double_time_pane_vc_t_ParamLimits

0xfa80,	// (0x0002f278) list_double_time_pane_vc_t

0xc666,	// (0x0002be5e) list_double_pane_vc_g1_ParamLimits

0xc666,	// (0x0002be5e) list_double_pane_vc_g1

0xc672,	// (0x0002be6a) list_double_pane_vc_g2_ParamLimits

0xc672,	// (0x0002be6a) list_double_pane_vc_g2

0x0001,

0xf635,	// (0x0002ee2d) list_double_pane_vc_g_ParamLimits

0xf635,	// (0x0002ee2d) list_double_pane_vc_g

0xbf9b,	// (0x0002b793) list_double_pane_vc_t1_ParamLimits

0xbf9b,	// (0x0002b793) list_double_pane_vc_t1

0xbfad,	// (0x0002b7a5) list_double_pane_vc_t2_ParamLimits

0xbfad,	// (0x0002b7a5) list_double_pane_vc_t2

0x0001,

0xfa89,	// (0x0002f281) list_double_pane_vc_t_ParamLimits

0xfa89,	// (0x0002f281) list_double_pane_vc_t

0xc666,	// (0x0002be5e) list_double_number_pane_vc_g1_ParamLimits

0xc666,	// (0x0002be5e) list_double_number_pane_vc_g1

0xc672,	// (0x0002be6a) list_double_number_pane_vc_g2_ParamLimits

0xc672,	// (0x0002be6a) list_double_number_pane_vc_g2

0x0001,

0xf635,	// (0x0002ee2d) list_double_number_pane_vc_g_ParamLimits

0xf635,	// (0x0002ee2d) list_double_number_pane_vc_g

0xbfc3,	// (0x0002b7bb) list_double_number_pane_vc_t1_ParamLimits

0xbfc3,	// (0x0002b7bb) list_double_number_pane_vc_t1

0xbfd7,	// (0x0002b7cf) list_double_number_pane_vc_t2_ParamLimits

0xbfd7,	// (0x0002b7cf) list_double_number_pane_vc_t2

0xbfad,	// (0x0002b7a5) list_double_number_pane_vc_t3_ParamLimits

0xbfad,	// (0x0002b7a5) list_double_number_pane_vc_t3

0x0002,

0xfa8e,	// (0x0002f286) list_double_number_pane_vc_t_ParamLimits

0xfa8e,	// (0x0002f286) list_double_number_pane_vc_t

0xd080,	// (0x0002c878) list_double_large_graphic_pane_vc_g1_ParamLimits

0xd080,	// (0x0002c878) list_double_large_graphic_pane_vc_g1

0xd08c,	// (0x0002c884) list_double_large_graphic_pane_vc_g2_ParamLimits

0xd08c,	// (0x0002c884) list_double_large_graphic_pane_vc_g2

0xc652,	// (0x0002be4a) list_double_large_graphic_pane_vc_g3_ParamLimits

0xc652,	// (0x0002be4a) list_double_large_graphic_pane_vc_g3

0xbfe9,	// (0x0002b7e1) list_double_large_graphic_pane_vc_g4_ParamLimits

0xbfe9,	// (0x0002b7e1) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa95,	// (0x0002f28d) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa95,	// (0x0002f28d) list_double_large_graphic_pane_vc_g

0xbff5,	// (0x0002b7ed) list_double_large_graphic_pane_vc_t1_ParamLimits

0xbff5,	// (0x0002b7ed) list_double_large_graphic_pane_vc_t1

0xc007,	// (0x0002b7ff) list_double_large_graphic_pane_vc_t2_ParamLimits

0xc007,	// (0x0002b7ff) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa9e,	// (0x0002f296) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa9e,	// (0x0002f296) list_double_large_graphic_pane_vc_t

0xc666,	// (0x0002be5e) list_double_heading_pane_vc_g1_ParamLimits

0xc666,	// (0x0002be5e) list_double_heading_pane_vc_g1

0xc672,	// (0x0002be6a) list_double_heading_pane_vc_g2_ParamLimits

0xc672,	// (0x0002be6a) list_double_heading_pane_vc_g2

0x0001,

0xf635,	// (0x0002ee2d) list_double_heading_pane_vc_g_ParamLimits

0xf635,	// (0x0002ee2d) list_double_heading_pane_vc_g

0xc01e,	// (0x0002b816) list_double_heading_pane_vc_t1_ParamLimits

0xc01e,	// (0x0002b816) list_double_heading_pane_vc_t1

0xbddf,	// (0x0002b5d7) list_double_heading_pane_vc_t2_ParamLimits

0xbddf,	// (0x0002b5d7) list_double_heading_pane_vc_t2

0x0001,

0xfaa3,	// (0x0002f29b) list_double_heading_pane_vc_t_ParamLimits

0xfaa3,	// (0x0002f29b) list_double_heading_pane_vc_t

0xb7de,	// (0x0002afd6) list_double_graphic_pane_vc_g1_ParamLimits

0xb7de,	// (0x0002afd6) list_double_graphic_pane_vc_g1

0xc67e,	// (0x0002be76) list_double_graphic_pane_vc_g2_ParamLimits

0xc67e,	// (0x0002be76) list_double_graphic_pane_vc_g2

0xc68d,	// (0x0002be85) list_double_graphic_pane_vc_g3_ParamLimits

0xc68d,	// (0x0002be85) list_double_graphic_pane_vc_g3

0x0002,

0xfaa8,	// (0x0002f2a0) list_double_graphic_pane_vc_g_ParamLimits

0xfaa8,	// (0x0002f2a0) list_double_graphic_pane_vc_g

0xc030,	// (0x0002b828) list_double_graphic_pane_vc_t1_ParamLimits

0xc030,	// (0x0002b828) list_double_graphic_pane_vc_t1

0xbfad,	// (0x0002b7a5) list_double_graphic_pane_vc_t2_ParamLimits

0xbfad,	// (0x0002b7a5) list_double_graphic_pane_vc_t2

0x0001,

0xfaaf,	// (0x0002f2a7) list_double_graphic_pane_vc_t_ParamLimits

0xfaaf,	// (0x0002f2a7) list_double_graphic_pane_vc_t

0xc342,	// (0x0002bb3a) aid_size_cell_fastswap

0xc34a,	// (0x0002bb42) aid_size_cell_touch_ParamLimits

0xc34a,	// (0x0002bb42) aid_size_cell_touch

0xc48f,	// (0x0002bc87) popup_fast_swap_wide_window_ParamLimits

0xc48f,	// (0x0002bc87) popup_fast_swap_wide_window

0xc555,	// (0x0002bd4d) touch_pane_ParamLimits

0xc555,	// (0x0002bd4d) touch_pane

0xba9c,	// (0x0002b294) button_value_adjust_pane_cp2

0xbaa4,	// (0x0002b29c) button_value_adjust_pane_cp4

0xbac4,	// (0x0002b2bc) form_field_data_pane_cp2

0xbae3,	// (0x0002b2db) form_field_data_wide_pane_cp2

0x162a,	// (0x00020e22) bg_scroll_pane_ParamLimits

0xc81e,	// (0x0002c016) scroll_handle_pane_ParamLimits

0xc832,	// (0x0002c02a) scroll_sc2_down_pane_ParamLimits

0xc832,	// (0x0002c02a) scroll_sc2_down_pane

0x165b,	// (0x00020e53) scroll_sc2_up_pane_ParamLimits

0x165b,	// (0x00020e53) scroll_sc2_up_pane

0x7f75,	// (0x0002776d) grid_wheel_folder_pane_g1_ParamLimits

0x7f75,	// (0x0002776d) grid_wheel_folder_pane_g1

0xc9f6,	// (0x0002c1ee) clock_nsta_pane_cp2_ParamLimits

0xc9f6,	// (0x0002c1ee) clock_nsta_pane_cp2

0x3403,	// (0x00022bfb) listscroll_midp_pane_ParamLimits

0x340f,	// (0x00022c07) midp_canvas_pane

0xcc3e,	// (0x0002c436) nsta_clock_indic_pane

0x47ab,	// (0x00023fa3) listscroll_form_pane_vc

0x47b3,	// (0x00023fab) listscroll_set_pane_vc_ParamLimits

0x47b3,	// (0x00023fab) listscroll_set_pane_vc

0x75b0,	// (0x00026da8) clock_nsta_pane

0x75bd,	// (0x00026db5) indicator_nsta_pane

0x49cd,	// (0x000241c5) bg_popup_sub_pane_cp2_ParamLimits

0x49e1,	// (0x000241d9) find_pane_cp2_ParamLimits

0x49e1,	// (0x000241d9) find_pane_cp2

0x49f3,	// (0x000241eb) grid_toobar_pane_ParamLimits

0x4b45,	// (0x0002433d) list_form_gen_pane_vc_ParamLimits

0x4b45,	// (0x0002433d) list_form_gen_pane_vc

0x4b5b,	// (0x00024353) scroll_pane_cp8_vc_ParamLimits

0x4b5b,	// (0x00024353) scroll_pane_cp8_vc

0x4bab,	// (0x000243a3) data_form_wide_pane_vc_ParamLimits

0x4bab,	// (0x000243a3) data_form_wide_pane_vc

0x4bb7,	// (0x000243af) form_field_data_wide_pane_vc_g1

0x4bbf,	// (0x000243b7) form_field_data_wide_pane_vc_t1_ParamLimits

0x4bbf,	// (0x000243b7) form_field_data_wide_pane_vc_t1

0x12ac,	// (0x00020aa4) input_focus_pane_cp6_vc_ParamLimits

0x12ac,	// (0x00020aa4) input_focus_pane_cp6_vc

0x7a61,	// (0x00027259) list_midp_pane_ParamLimits

0x7a6d,	// (0x00027265) scroll_pane_cp16_ParamLimits

0x7a6d,	// (0x00027265) scroll_pane_cp16

0x4e18,	// (0x00024610) button_value_adjust_pane_ParamLimits

0x4e18,	// (0x00024610) button_value_adjust_pane

0x7bcd,	// (0x000273c5) button_value_adjust_pane_cp6_ParamLimits

0x7bcd,	// (0x000273c5) button_value_adjust_pane_cp6

0x7cd5,	// (0x000274cd) settings_code_pane_cp_ParamLimits

0x7cd5,	// (0x000274cd) settings_code_pane_cp

0x0572,	// (0x0001fd6a) cell_touch_pane_g1

0x0572,	// (0x0001fd6a) cell_touch_pane_g2

0x0001,

0xf74c,	// (0x0002ef44) cell_touch_pane_g

0x7e52,	// (0x0002764a) cell_touch_pane_cp_ParamLimits

0x7e52,	// (0x0002764a) cell_touch_pane_cp

0x7e62,	// (0x0002765a) cell_touch_pane_ParamLimits

0x7e62,	// (0x0002765a) cell_touch_pane

0x0572,	// (0x0001fd6a) scroll_sc2_down_pane_g1

0x0572,	// (0x0001fd6a) scroll_sc2_up_pane_g1

0x05f4,	// (0x0001fdec) bg_set_opt_pane_cp4_vc

0x5f2d,	// (0x00025725) list_set_graphic_pane_vc_g1_ParamLimits

0x5f2d,	// (0x00025725) list_set_graphic_pane_vc_g1

0x5f39,	// (0x00025731) list_set_graphic_pane_vc_g2_ParamLimits

0x5f39,	// (0x00025731) list_set_graphic_pane_vc_g2

0x0001,

0xfa2c,	// (0x0002f224) list_set_graphic_pane_vc_g_ParamLimits

0xfa2c,	// (0x0002f224) list_set_graphic_pane_vc_g

0x5f45,	// (0x0002573d) text_primary_small_cp13_vc_ParamLimits

0x5f45,	// (0x0002573d) text_primary_small_cp13_vc

0x5f5d,	// (0x00025755) list_set_graphic_pane_vc_ParamLimits

0x5f5d,	// (0x00025755) list_set_graphic_pane_vc

0x05f4,	// (0x0001fdec) input_focus_pane_cp2_vc

0x0572,	// (0x0001fd6a) setting_code_pane_vc_g1

0x5f70,	// (0x00025768) setting_code_pane_vc_t1

0x5f7e,	// (0x00025776) set_text_pane_vc_t1_ParamLimits

0x5f7e,	// (0x00025776) set_text_pane_vc_t1

0x05f4,	// (0x0001fdec) input_focus_pane_cp1_vc

0x5f99,	// (0x00025791) list_set_text_pane_vc

0x0572,	// (0x0001fd6a) setting_text_pane_vc_g1

0x05f4,	// (0x0001fdec) bg_set_opt_pane_cp2_vc

0x5fa3,	// (0x0002579b) setting_slider_graphic_pane_vc_g1

0x5fab,	// (0x000257a3) setting_slider_graphic_pane_vc_t1

0x5fb9,	// (0x000257b1) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa31,	// (0x0002f229) setting_slider_graphic_pane_vc_t

0x5fc7,	// (0x000257bf) slider_set_pane_cp_vc

0x5fcf,	// (0x000257c7) slider_set_pane_vc_g1

0x5fd8,	// (0x000257d0) slider_set_pane_vc_g2

0x0006,

0xfa36,	// (0x0002f22e) slider_set_pane_vc_g

0x12fb,	// (0x00020af3) set_opt_bg_pane_g1_copy1

0x1303,	// (0x00020afb) set_opt_bg_pane_g2_copy1

0x6004,	// (0x000257fc) set_opt_bg_pane_g3_copy1

0x1313,	// (0x00020b0b) set_opt_bg_pane_g4_copy1

0x131b,	// (0x00020b13) set_opt_bg_pane_g5_copy1

0x1323,	// (0x00020b1b) set_opt_bg_pane_g6_copy1

0x600c,	// (0x00025804) set_opt_bg_pane_g7_copy1

0x6014,	// (0x0002580c) set_opt_bg_pane_g8_copy1

0x601c,	// (0x00025814) set_opt_bg_pane_g9_copy1

0x05f4,	// (0x0001fdec) bg_set_opt_pane_cp_vc

0x6024,	// (0x0002581c) setting_slider_pane_vc_t1

0x5fab,	// (0x000257a3) setting_slider_pane_vc_t2

0x5fb9,	// (0x000257b1) setting_slider_pane_vc_t3

0x0002,

0xfa45,	// (0x0002f23d) setting_slider_pane_vc_t

0x5fc7,	// (0x000257bf) slider_set_pane_vc

0xcd5d,	// (0x0002c555) volume_set_pane_vc_g1

0xd017,	// (0x0002c80f) volume_set_pane_vc_g2

0xd020,	// (0x0002c818) volume_set_pane_vc_g3

0xd029,	// (0x0002c821) volume_set_pane_vc_g4

0xd032,	// (0x0002c82a) volume_set_pane_vc_g5

0xd03b,	// (0x0002c833) volume_set_pane_vc_g6

0xd044,	// (0x0002c83c) volume_set_pane_vc_g7

0xd04d,	// (0x0002c845) volume_set_pane_vc_g8

0xd056,	// (0x0002c84e) volume_set_pane_vc_g9

0xd05f,	// (0x0002c857) volume_set_pane_vc_g10

0x0009,

0xfa4c,	// (0x0002f244) volume_set_pane_vc_g

0x6033,	// (0x0002582b) volume_set_pane_vc

0x603b,	// (0x00025833) button_value_adjust_pane_cp1_vc

0x6045,	// (0x0002583d) list_highlight_pane_cp2_vc

0x604e,	// (0x00025846) list_set_pane_vc_ParamLimits

0x604e,	// (0x00025846) list_set_pane_vc

0x60a0,	// (0x00025898) main_pane_set_vc_t1_ParamLimits

0x60a0,	// (0x00025898) main_pane_set_vc_t1

0x60b5,	// (0x000258ad) main_pane_set_vc_t2_ParamLimits

0x60b5,	// (0x000258ad) main_pane_set_vc_t2

0x60c7,	// (0x000258bf) main_pane_set_vc_t3_ParamLimits

0x60c7,	// (0x000258bf) main_pane_set_vc_t3

0x60d9,	// (0x000258d1) main_pane_set_vc_t4_ParamLimits

0x60d9,	// (0x000258d1) main_pane_set_vc_t4

0x0003,

0xfa61,	// (0x0002f259) main_pane_set_vc_t_ParamLimits

0xfa61,	// (0x0002f259) main_pane_set_vc_t

0x60eb,	// (0x000258e3) setting_code_pane_vc_ParamLimits

0x60eb,	// (0x000258e3) setting_code_pane_vc

0x60fa,	// (0x000258f2) setting_slider_graphic_pane_vc

0x60fa,	// (0x000258f2) setting_slider_pane_vc

0x60fa,	// (0x000258f2) setting_text_pane_vc

0x60fa,	// (0x000258f2) setting_volume_pane_vc

0x6102,	// (0x000258fa) scroll_pane_cp121_vc

0x1297,	// (0x00020a8f) set_content_pane_vc

0x6c4b,	// (0x00026443) button_value_adjust_pane_g1

0x6c54,	// (0x0002644c) button_value_adjust_pane_g2

0x0001,

0xfab4,	// (0x0002f2ac) button_value_adjust_pane_g

0x6c5d,	// (0x00026455) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6c5d,	// (0x00026455) form_field_slider_wide_pane_vc_t1

0x6c73,	// (0x0002646b) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6c73,	// (0x0002646b) form_field_slider_wide_pane_vc_t2

0x0001,

0xfab9,	// (0x0002f2b1) form_field_slider_wide_pane_vc_t_ParamLimits

0xfab9,	// (0x0002f2b1) form_field_slider_wide_pane_vc_t

0x0642,	// (0x0001fe3a) input_focus_pane_cp10_vc_ParamLimits

0x0642,	// (0x0001fe3a) input_focus_pane_cp10_vc

0x6c88,	// (0x00026480) slider_cont_pane_cp1_vc_ParamLimits

0x6c88,	// (0x00026480) slider_cont_pane_cp1_vc

0x5fcf,	// (0x000257c7) slider_form_pane_g1_cp2

0x5fd8,	// (0x000257d0) slider_form_pane_g2_cp2

0x6ca3,	// (0x0002649b) form_field_slider_pane_vc_t3

0x6cb1,	// (0x000264a9) form_field_slider_pane_vc_t4

0x6cbf,	// (0x000264b7) slider_form_pane_vc_ParamLimits

0x6cbf,	// (0x000264b7) slider_form_pane_vc

0x6ccc,	// (0x000264c4) form_field_slider_pane_vc_t1_ParamLimits

0x6ccc,	// (0x000264c4) form_field_slider_pane_vc_t1

0x6ce2,	// (0x000264da) form_field_slider_pane_vc_t2_ParamLimits

0x6ce2,	// (0x000264da) form_field_slider_pane_vc_t2

0x0001,

0xfac9,	// (0x0002f2c1) form_field_slider_pane_vc_t_ParamLimits

0xfac9,	// (0x0002f2c1) form_field_slider_pane_vc_t

0x0642,	// (0x0001fe3a) input_focus_pane_cp9_vc_ParamLimits

0x0642,	// (0x0001fe3a) input_focus_pane_cp9_vc

0x6cf4,	// (0x000264ec) slider_cont_pane_vc_ParamLimits

0x6cf4,	// (0x000264ec) slider_cont_pane_vc

0x6d06,	// (0x000264fe) list_form_graphic_pane_cp_vc_ParamLimits

0x6d06,	// (0x000264fe) list_form_graphic_pane_cp_vc

0x4bb7,	// (0x000243af) form_field_popup_wide_pane_vc_g1

0x6d1b,	// (0x00026513) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6d1b,	// (0x00026513) form_field_popup_wide_pane_vc_t1

0x12ac,	// (0x00020aa4) input_focus_pane_cp8_vc_ParamLimits

0x12ac,	// (0x00020aa4) input_focus_pane_cp8_vc

0x6d30,	// (0x00026528) list_form_wide_pane_vc_ParamLimits

0x6d30,	// (0x00026528) list_form_wide_pane_vc

0x6d3c,	// (0x00026534) list_form_graphic_pane_vc_g1

0x6d44,	// (0x0002653c) list_form_graphic_pane_vc_t1_ParamLimits

0x6d44,	// (0x0002653c) list_form_graphic_pane_vc_t1

0x0658,	// (0x0001fe50) list_highlight_pane_cp5_vc_ParamLimits

0x0658,	// (0x0001fe50) list_highlight_pane_cp5_vc

0x6d60,	// (0x00026558) list_form_graphic_pane_vc_ParamLimits

0x6d60,	// (0x00026558) list_form_graphic_pane_vc

0x4bb7,	// (0x000243af) form_field_popup_pane_vc_g1

0x6d76,	// (0x0002656e) form_field_popup_pane_vc_t1_ParamLimits

0x6d76,	// (0x0002656e) form_field_popup_pane_vc_t1

0x12ac,	// (0x00020aa4) input_focus_pane_cp7_vc_ParamLimits

0x12ac,	// (0x00020aa4) input_focus_pane_cp7_vc

0x6d8b,	// (0x00026583) list_form_pane_vc_ParamLimits

0x6d8b,	// (0x00026583) list_form_pane_vc

0x6d97,	// (0x0002658f) data_form_pane_vc_t1_ParamLimits

0x6d97,	// (0x0002658f) data_form_pane_vc_t1

0x12fb,	// (0x00020af3) input_focus_pane_vc_g1

0x1303,	// (0x00020afb) input_focus_pane_vc_g2

0x130b,	// (0x00020b03) input_focus_pane_vc_g3

0x1313,	// (0x00020b0b) input_focus_pane_vc_g4

0x131b,	// (0x00020b13) input_focus_pane_vc_g5

0x1323,	// (0x00020b1b) input_focus_pane_vc_g6

0x132b,	// (0x00020b23) input_focus_pane_vc_g7

0x1333,	// (0x00020b2b) input_focus_pane_vc_g8

0x133b,	// (0x00020b33) input_focus_pane_vc_g9

0x0572,	// (0x0001fd6a) input_focus_pane_vc_g10

0x0009,

0xf6d5,	// (0x0002eecd) input_focus_pane_vc_g

0x4bab,	// (0x000243a3) data_form_pane_vc_ParamLimits

0x4bab,	// (0x000243a3) data_form_pane_vc

0x4bb7,	// (0x000243af) form_field_data_pane_vc_g1

0x6db2,	// (0x000265aa) form_field_data_pane_vc_t1_ParamLimits

0x6db2,	// (0x000265aa) form_field_data_pane_vc_t1

0x12ac,	// (0x00020aa4) input_focus_pane_vc_ParamLimits

0x12ac,	// (0x00020aa4) input_focus_pane_vc

0x1817,	// (0x0002100f) button_value_adjust_pane_cp3_vc

0x663c,	// (0x00025e34) button_value_adjust_pane_cp5_vc

0x6dc8,	// (0x000265c0) form_field_data_pane_vc_ParamLimits

0x6dc8,	// (0x000265c0) form_field_data_pane_vc

0x181f,	// (0x00021017) form_field_data_pane_vc_cp2

0x6ddf,	// (0x000265d7) form_field_data_wide_pane_vc_ParamLimits

0x6ddf,	// (0x000265d7) form_field_data_wide_pane_vc

0x6df5,	// (0x000265ed) form_field_data_wide_pane_vc_cp2

0x6dfd,	// (0x000265f5) form_field_popup_pane_vc_ParamLimits

0x6dfd,	// (0x000265f5) form_field_popup_pane_vc

0x6e14,	// (0x0002660c) form_field_popup_wide_pane_vc_ParamLimits

0x6e14,	// (0x0002660c) form_field_popup_wide_pane_vc

0x6e2a,	// (0x00026622) form_field_slider_pane_vc_ParamLimits

0x6e2a,	// (0x00026622) form_field_slider_pane_vc

0x6e3d,	// (0x00026635) form_field_slider_wide_pane_vc_ParamLimits

0x6e3d,	// (0x00026635) form_field_slider_wide_pane_vc

0x7e74,	// (0x0002766c) grid_touch_1_pane_ParamLimits

0x7e74,	// (0x0002766c) grid_touch_1_pane

0x7e80,	// (0x00027678) grid_touch_2_pane_ParamLimits

0x7e80,	// (0x00027678) grid_touch_2_pane

0x1e71,	// (0x00021669) touch_pane_g1_ParamLimits

0x1e71,	// (0x00021669) touch_pane_g1

0x6e50,	// (0x00026648) cell_app_pane_cp_wide_ParamLimits

0x6e50,	// (0x00026648) cell_app_pane_cp_wide

0x6e60,	// (0x00026658) grid_popup_fast_wide_pane_ParamLimits

0x6e60,	// (0x00026658) grid_popup_fast_wide_pane

0x6e74,	// (0x0002666c) scroll_pane_cp19_ParamLimits

0x6e74,	// (0x0002666c) scroll_pane_cp19

0x05f4,	// (0x0001fdec) bg_popup_window_pane_cp20

0x6e88,	// (0x00026680) listscroll_popup_fast_wide_pane

0x0658,	// (0x0001fe50) grid_indicator_nsta_pane

0x6e90,	// (0x00026688) clock_nsta_pane_g1

0x6e99,	// (0x00026691) clock_nsta_pane_t1

0x7e98,	// (0x00027690) cell_indicator_nsta_pane_ParamLimits

0x7e98,	// (0x00027690) cell_indicator_nsta_pane

0x6eb5,	// (0x000266ad) cell_indicator_nsta_pane_g1

0x7ed0,	// (0x000276c8) cell_indicator_nsta_pane_g2

0x0001,

0xfad3,	// (0x0002f2cb) cell_indicator_nsta_pane_g

0x6ec3,	// (0x000266bb) clock_nsta_pane_cp

0x6ecb,	// (0x000266c3) indicator_nsta_pane_cp

0x6ed4,	// (0x000266cc) nsta_clock_indic_pane_g1

0x06c0,	// (0x0001feb8) grid_indicator_pane

0x174d,	// (0x00020f45) scroll_pane_cp29

0xc94d,	// (0x0002c145) indicator_nsta_pane_cp2_ParamLimits

0xc94d,	// (0x0002c145) indicator_nsta_pane_cp2

0x0658,	// (0x0001fe50) main_apps_wheel_pane

0x4ccb,	// (0x000244c3) form_midp_field_text_pane_ParamLimits

0x4df8,	// (0x000245f0) scroll_bar_cp050_ParamLimits

0x6f0c,	// (0x00026704) cell_indicator_pane_ParamLimits

0x6f0c,	// (0x00026704) cell_indicator_pane

0x6f22,	// (0x0002671a) cell_indicator_pane_g1

0x7ee5,	// (0x000276dd) grid_wheel_folder_pane_ParamLimits

0x7ee5,	// (0x000276dd) grid_wheel_folder_pane

0x7ef7,	// (0x000276ef) list_wheel_apps_pane_ParamLimits

0x7ef7,	// (0x000276ef) list_wheel_apps_pane

0x7f06,	// (0x000276fe) main_apps_wheel_pane_g1_ParamLimits

0x7f06,	// (0x000276fe) main_apps_wheel_pane_g1

0x7f1a,	// (0x00027712) main_apps_wheel_pane_g2_ParamLimits

0x7f1a,	// (0x00027712) main_apps_wheel_pane_g2

0x0001,

0xfae2,	// (0x0002f2da) main_apps_wheel_pane_g_ParamLimits

0xfae2,	// (0x0002f2da) main_apps_wheel_pane_g

0x7f2e,	// (0x00027726) main_apps_wheel_pane_t1_ParamLimits

0x7f2e,	// (0x00027726) main_apps_wheel_pane_t1

0x7f4d,	// (0x00027745) list_wheel_apps_pane_g1

0x7f55,	// (0x0002774d) list_wheel_apps_pane_g2

0x7f5d,	// (0x00027755) list_wheel_apps_pane_g3

0x7f65,	// (0x0002775d) list_wheel_apps_pane_g4

0x7f6d,	// (0x00027765) list_wheel_apps_pane_g5

0x0004,

0xfae7,	// (0x0002f2df) list_wheel_apps_pane_g

0x0658,	// (0x0001fe50) navi_icon_text_pane

0x7504,	// (0x00026cfc) aid_fill_nsta

0x7f8c,	// (0x00027784) navi_icon_text_pane_g1

0x7f98,	// (0x00027790) navi_icon_text_pane_t1

0x19e0,	// (0x000211d8) list_set_graphic_pane_t1_ParamLimits

0x19e0,	// (0x000211d8) list_set_graphic_pane_t1

0x54a1,	// (0x00024c99) popup_midp_note_alarm_window_t6_ParamLimits

0x54a1,	// (0x00024c99) popup_midp_note_alarm_window_t6

0x54b3,	// (0x00024cab) popup_midp_note_alarm_window_t7_ParamLimits

0x54b3,	// (0x00024cab) popup_midp_note_alarm_window_t7

0x54c5,	// (0x00024cbd) popup_midp_note_alarm_window_t8_ParamLimits

0x54c5,	// (0x00024cbd) popup_midp_note_alarm_window_t8

0x54d7,	// (0x00024ccf) popup_midp_note_alarm_window_t9_ParamLimits

0x54d7,	// (0x00024ccf) popup_midp_note_alarm_window_t9

0x54e9,	// (0x00024ce1) popup_midp_note_alarm_window_t10_ParamLimits

0x54e9,	// (0x00024ce1) popup_midp_note_alarm_window_t10

0x54fb,	// (0x00024cf3) popup_midp_note_alarm_window_t11_ParamLimits

0x54fb,	// (0x00024cf3) popup_midp_note_alarm_window_t11

0x550d,	// (0x00024d05) scroll_pane_cp17_ParamLimits

0x550d,	// (0x00024d05) scroll_pane_cp17

0xcd5d,	// (0x0002c555) volume_small_pane_cp_g1

0xd09b,	// (0x0002c893) volume_small_pane_cp_g2

0xd0a4,	// (0x0002c89c) volume_small_pane_cp_g3

0xd0ad,	// (0x0002c8a5) volume_small_pane_cp_g4

0xcd8a,	// (0x0002c582) volume_small_pane_cp_g5

0xd0b6,	// (0x0002c8ae) volume_small_pane_cp_g6

0xd0bf,	// (0x0002c8b7) volume_small_pane_cp_g7

0xd0c8,	// (0x0002c8c0) volume_small_pane_cp_g8

0xd0d1,	// (0x0002c8c9) volume_small_pane_cp_g9

0xd0da,	// (0x0002c8d2) volume_small_pane_cp_g10

0x1c8f,	// (0x00021487) midp_ticker_pane_g1_ParamLimits

0x1c9b,	// (0x00021493) midp_ticker_pane_g2_ParamLimits

0xf79d,	// (0x0002ef95) midp_ticker_pane_g_ParamLimits

0x1ca7,	// (0x0002149f) midp_ticker_pane_t1_ParamLimits

0x7514,	// (0x00026d0c) aid_fill_nsta_2

0x4de4,	// (0x000245dc) list_form2_midp_pane

0x5bb3,	// (0x000253ab) midp_editing_number_pane_ParamLimits

0x5bbf,	// (0x000253b7) midp_ticker_pane_ParamLimits

0x7faa,	// (0x000277a2) form2_midp_field_pane

0x7fce,	// (0x000277c6) scroll_pane_cp51

0x7fee,	// (0x000277e6) form2_midp_button_pane_ParamLimits

0x7fee,	// (0x000277e6) form2_midp_button_pane

0x8000,	// (0x000277f8) form2_midp_content_pane_ParamLimits

0x8000,	// (0x000277f8) form2_midp_content_pane

0x801a,	// (0x00027812) form2_midp_field_choice_group_pane

0x8022,	// (0x0002781a) form2_midp_field_pane_g1

0x802a,	// (0x00027822) form2_midp_field_pane_g2

0x8032,	// (0x0002782a) form2_midp_field_pane_g3

0x803a,	// (0x00027832) form2_midp_field_pane_g4

0x0003,

0xfb0c,	// (0x0002f304) form2_midp_field_pane_g

0x8042,	// (0x0002783a) form2_midp_gauge_slider_pane

0x804a,	// (0x00027842) form2_midp_gauge_wait_pane

0x8052,	// (0x0002784a) form2_midp_image_pane_ParamLimits

0x8052,	// (0x0002784a) form2_midp_image_pane

0x806d,	// (0x00027865) form2_midp_label_pane_ParamLimits

0x806d,	// (0x00027865) form2_midp_label_pane

0x8086,	// (0x0002787e) form2_midp_label_pane_cp_ParamLimits

0x8086,	// (0x0002787e) form2_midp_label_pane_cp

0x80a5,	// (0x0002789d) form2_midp_string_pane_ParamLimits

0x80a5,	// (0x0002789d) form2_midp_string_pane

0xc042,	// (0x0002b83a) form2_midp_text_pane_ParamLimits

0xc042,	// (0x0002b83a) form2_midp_text_pane

0x80b7,	// (0x000278af) form2_midp_time_pane

0x80c7,	// (0x000278bf) input_focus_pane_cp51_ParamLimits

0x80c7,	// (0x000278bf) input_focus_pane_cp51

0x80df,	// (0x000278d7) form2_midp_label_pane_t1_ParamLimits

0x80df,	// (0x000278d7) form2_midp_label_pane_t1

0xc05b,	// (0x0002b853) form2_mdip_text_pane_t1_ParamLimits

0xc05b,	// (0x0002b853) form2_mdip_text_pane_t1

0xc076,	// (0x0002b86e) form2_midp_time_pane_t1

0x8127,	// (0x0002791f) form2_midp_gauge_slider_pane_t1

0x8139,	// (0x00027931) form2_midp_gauge_slider_pane_t2

0x814b,	// (0x00027943) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb15,	// (0x0002f30d) form2_midp_gauge_slider_pane_t

0x815d,	// (0x00027955) form2_midp_slider_pane

0x8169,	// (0x00027961) form2_midp_gauge_wait_pane_t1

0x8177,	// (0x0002796f) form2_midp_wait_pane_ParamLimits

0x8177,	// (0x0002796f) form2_midp_wait_pane

0x3166,	// (0x0002295e) list_single_2graphic_pane_cp4_ParamLimits

0x3166,	// (0x0002295e) list_single_2graphic_pane_cp4

0x79ec,	// (0x000271e4) list_single_midp_graphic_pane_cp_ParamLimits

0x79ec,	// (0x000271e4) list_single_midp_graphic_pane_cp

0x05f4,	// (0x0001fdec) list_highlight_pane_cp20

0x81a2,	// (0x0002799a) list_single_2graphic_pane_g1_cp4

0x5c34,	// (0x0002542c) list_single_2graphic_pane_g2_cp4

0x81aa,	// (0x000279a2) list_single_2graphic_pane_t1_cp4

0x0658,	// (0x0001fe50) list_highlight_pane_cp21

0x81b9,	// (0x000279b1) list_single_midp_graphic_pane_g4_cp

0x81c8,	// (0x000279c0) list_single_midp_graphic_pane_t1_cp

0x81dd,	// (0x000279d5) form2_mdip_string_pane_t1_ParamLimits

0x81dd,	// (0x000279d5) form2_mdip_string_pane_t1

0x05f4,	// (0x0001fdec) bg_wml_button_pane_cp2

0x0572,	// (0x0001fd6a) form2_midp_image_pane_g1

0xc6b1,	// (0x0002bea9) list_double_large_graphic_pane_g5_ParamLimits

0xc6b1,	// (0x0002bea9) list_double_large_graphic_pane_g5

0x3403,	// (0x00022bfb) midp_form_pane_ParamLimits

0x0658,	// (0x0001fe50) main_apps_wheel_pane_ParamLimits

0x73a6,	// (0x00026b9e) popup_preview_window_ParamLimits

0x73a6,	// (0x00026b9e) popup_preview_window

0x4887,	// (0x0002407f) popup_touch_info_window_ParamLimits

0x4887,	// (0x0002407f) popup_touch_info_window

0x48a5,	// (0x0002409d) popup_touch_menu_window_ParamLimits

0x48a5,	// (0x0002409d) popup_touch_menu_window

0x0568,	// (0x0001fd60) bg_popup_sub_pane_cp6

0x8255,	// (0x00027a4d) list_touch_menu_pane

0x825d,	// (0x00027a55) list_single_touch_menu_pane_ParamLimits

0x825d,	// (0x00027a55) list_single_touch_menu_pane

0x8274,	// (0x00027a6c) list_single_touch_menu_pane_t1

0x0658,	// (0x0001fe50) bg_popup_sub_pane_cp7_ParamLimits

0x0658,	// (0x0001fe50) bg_popup_sub_pane_cp7

0x8282,	// (0x00027a7a) heading_sub_pane

0x828a,	// (0x00027a82) list_touch_info_pane_ParamLimits

0x828a,	// (0x00027a82) list_touch_info_pane

0x8299,	// (0x00027a91) list_single_touch_info_pane_ParamLimits

0x8299,	// (0x00027a91) list_single_touch_info_pane

0x82aa,	// (0x00027aa2) list_single_touch_info_pane_t1

0x82b8,	// (0x00027ab0) list_single_touch_info_pane_t2

0x0001,

0xfb23,	// (0x0002f31b) list_single_touch_info_pane_t

0x1c65,	// (0x0002145d) bg_popup_heading_pane_cp

0x82c6,	// (0x00027abe) heading_sub_pane_t1

0x4b71,	// (0x00024369) bg_popup_preview_window_pane_cp_ParamLimits

0x4b71,	// (0x00024369) bg_popup_preview_window_pane_cp

0x8282,	// (0x00027a7a) heading_preview_pane

0x828a,	// (0x00027a82) list_preview_pane_ParamLimits

0x828a,	// (0x00027a82) list_preview_pane

0x82d4,	// (0x00027acc) popup_preview_window_g1

0x8299,	// (0x00027a91) list_single_preview_pane_ParamLimits

0x8299,	// (0x00027a91) list_single_preview_pane

0x82dc,	// (0x00027ad4) list_single_preview_pane_g1

0x82e4,	// (0x00027adc) list_single_preview_pane_t1

0x82aa,	// (0x00027aa2) list_single_preview_pane_t2

0x0001,

0xfb28,	// (0x0002f320) list_single_preview_pane_t

0x82f2,	// (0x00027aea) bg_popup_heading_pane_cp2_ParamLimits

0x82f2,	// (0x00027aea) bg_popup_heading_pane_cp2

0x8308,	// (0x00027b00) heading_preview_pane_g1

0x8310,	// (0x00027b08) heading_preview_pane_t1_ParamLimits

0x8310,	// (0x00027b08) heading_preview_pane_t1

0x06d7,	// (0x0001fecf) soft_indicator_pane_t1_ParamLimits

0x0b7b,	// (0x00020373) scroll_pane_ParamLimits

0x1649,	// (0x00020e41) scroll_sc2_left_pane

0x1652,	// (0x00020e4a) scroll_sc2_right_pane

0x1671,	// (0x00020e69) scroll_bg_pane_g1_ParamLimits

0x1686,	// (0x00020e7e) scroll_bg_pane_g2_ParamLimits

0x169e,	// (0x00020e96) scroll_bg_pane_g3_ParamLimits

0xf72c,	// (0x0002ef24) scroll_bg_pane_g_ParamLimits

0x1671,	// (0x00020e69) scroll_handle_pane_g1_ParamLimits

0x16c0,	// (0x00020eb8) scroll_handle_pane_g2_ParamLimits

0x169e,	// (0x00020e96) scroll_handle_pane_g3_ParamLimits

0xf733,	// (0x0002ef2b) scroll_handle_pane_g_ParamLimits

0x47df,	// (0x00023fd7) popup_choice_list_window_ParamLimits

0x47df,	// (0x00023fd7) popup_choice_list_window

0x49d9,	// (0x000241d1) choice_list_pane

0x4a4f,	// (0x00024247) cell_toolbar_pane_t1

0x4a77,	// (0x0002426f) toolbar_button_pane_ParamLimits

0x5914,	// (0x0002510c) ai_gene_pane_1_t2_ParamLimits

0x5914,	// (0x0002510c) ai_gene_pane_1_t2

0x0001,

0xf94b,	// (0x0002f143) ai_gene_pane_1_t_ParamLimits

0xf94b,	// (0x0002f143) ai_gene_pane_1_t

0x832d,	// (0x00027b25) scroll_sc2_left_pane_g1

0x832d,	// (0x00027b25) scroll_sc2_right_pane_g1

0x47c5,	// (0x00023fbd) bg_popup_sub_pane_cp10

0x8337,	// (0x00027b2f) list_choice_list_pane

0x834e,	// (0x00027b46) list_single_choice_list_pane_ParamLimits

0x834e,	// (0x00027b46) list_single_choice_list_pane

0x8362,	// (0x00027b5a) list_single_choice_list_pane_g1

0x1413,	// (0x00020c0b) list_single_choice_list_pane_t1_ParamLimits

0x1413,	// (0x00020c0b) list_single_choice_list_pane_t1

0x836a,	// (0x00027b62) choice_list_pane_g1

0x8372,	// (0x00027b6a) choice_list_pane_t1

0x0568,	// (0x0001fd60) input_focus_pane_cp11

0x159e,	// (0x00020d96) title_pane_stacon_g2_ParamLimits

0x159e,	// (0x00020d96) title_pane_stacon_g2

0x0002,

0xf712,	// (0x0002ef0a) title_pane_stacon_g_ParamLimits

0xf712,	// (0x0002ef0a) title_pane_stacon_g

0x1c65,	// (0x0002145d) cursor_press_pane

0x71f3,	// (0x000269eb) popup_fep_hwr_window_ParamLimits

0x71f3,	// (0x000269eb) popup_fep_hwr_window

0x4831,	// (0x00024029) popup_fep_vkb_window_ParamLimits

0x4831,	// (0x00024029) popup_fep_vkb_window

0x8380,	// (0x00027b78) cursor_press_pane_g1

0x0002,

0xfb51,	// (0x0002f349) fep_vkb_side_pane_g_ParamLimits

0xd10a,	// (0x0002c902) fep_hwr_candidate_pane_ParamLimits

0xd10a,	// (0x0002c902) fep_hwr_candidate_pane

0xd132,	// (0x0002c92a) fep_hwr_side_pane_ParamLimits

0xd132,	// (0x0002c92a) fep_hwr_side_pane

0xd152,	// (0x0002c94a) fep_hwr_top_pane_ParamLimits

0xd152,	// (0x0002c94a) fep_hwr_top_pane

0xd16a,	// (0x0002c962) fep_hwr_write_pane_ParamLimits

0xd16a,	// (0x0002c962) fep_hwr_write_pane

0xfb51,	// (0x0002f349) fep_vkb_side_pane_g

0x83a8,	// (0x00027ba0) fep_hwr_top_pane_g1

0x8396,	// (0x00027b8e) fep_hwr_top_pane_g2

0xd196,	// (0x0002c98e) fep_hwr_top_pane_g3

0x0002,

0xfb2d,	// (0x0002f325) fep_hwr_top_pane_g

0xd1ab,	// (0x0002c9a3) fep_hwr_top_text_pane

0x17ba,	// (0x00020fb2) fep_hwr_top_text_pane_g1

0x83de,	// (0x00027bd6) fep_hwr_top_text_pane_t1

0xd299,	// (0x0002ca91) fep_hwr_candidate_pane_g1

0x85ee,	// (0x00027de6) fep_vkb_keypad_pane_g3_ParamLimits

0x85ee,	// (0x00027de6) fep_vkb_keypad_pane_g3

0x8610,	// (0x00027e08) fep_vkb_keypad_pane_g4_ParamLimits

0x8610,	// (0x00027e08) fep_vkb_keypad_pane_g4

0x867f,	// (0x00027e77) fep_vkb_bottom_pane_g2_ParamLimits

0x867f,	// (0x00027e77) fep_vkb_bottom_pane_g2

0x0001,

0xfb58,	// (0x0002f350) fep_vkb_bottom_pane_g_ParamLimits

0xfb58,	// (0x0002f350) fep_vkb_bottom_pane_g

0x832d,	// (0x00027b25) cell_vkb_side_pane_g2

0x0001,

0xfb62,	// (0x0002f35a) cell_vkb_side_pane_g

0x870a,	// (0x00027f02) cell_vkb_side_pane_t1

0x8718,	// (0x00027f10) cell_vkb_side_pane_t1_copy1

0x832d,	// (0x00027b25) bg_fep_vkb_candidate_pane_g2

0x883c,	// (0x00028034) cell_vkb_candidate_pane_ParamLimits

0x83ec,	// (0x00027be4) aid_size_cell_vkb_ParamLimits

0x83ec,	// (0x00027be4) aid_size_cell_vkb

0x883c,	// (0x00028034) cell_vkb_candidate_pane

0xd2b3,	// (0x0002caab) bg_popup_fep_shadow_pane_g1

0x8462,	// (0x00027c5a) fep_vkb_bottom_pane_ParamLimits

0x8462,	// (0x00027c5a) fep_vkb_bottom_pane

0x849f,	// (0x00027c97) fep_vkb_candidate_pane_ParamLimits

0x849f,	// (0x00027c97) fep_vkb_candidate_pane

0x84bb,	// (0x00027cb3) fep_vkb_keypad_pane_ParamLimits

0x84bb,	// (0x00027cb3) fep_vkb_keypad_pane

0x84ef,	// (0x00027ce7) fep_vkb_side_pane_ParamLimits

0x84ef,	// (0x00027ce7) fep_vkb_side_pane

0x851b,	// (0x00027d13) fep_vkb_top_pane_ParamLimits

0x851b,	// (0x00027d13) fep_vkb_top_pane

0x8547,	// (0x00027d3f) fep_vkb_top_pane_g1_ParamLimits

0x8547,	// (0x00027d3f) fep_vkb_top_pane_g1

0x8556,	// (0x00027d4e) fep_vkb_top_pane_g2_ParamLimits

0x8556,	// (0x00027d4e) fep_vkb_top_pane_g2

0x8565,	// (0x00027d5d) fep_vkb_top_pane_g3_ParamLimits

0x8565,	// (0x00027d5d) fep_vkb_top_pane_g3

0x0003,

0xfb48,	// (0x0002f340) fep_vkb_top_pane_g_ParamLimits

0xfb48,	// (0x0002f340) fep_vkb_top_pane_g

0x8583,	// (0x00027d7b) fep_vkb_top_text_pane_ParamLimits

0x8583,	// (0x00027d7b) fep_vkb_top_text_pane

0x8594,	// (0x00027d8c) fep_vkb_side_pane_g1_ParamLimits

0x8594,	// (0x00027d8c) fep_vkb_side_pane_g1

0x85dd,	// (0x00027dd5) grid_vkb_side_pane_ParamLimits

0x85dd,	// (0x00027dd5) grid_vkb_side_pane

0xd2bb,	// (0x0002cab3) bg_popup_fep_shadow_pane_g2

0xd2c4,	// (0x0002cabc) bg_popup_fep_shadow_pane_g3

0xd2cc,	// (0x0002cac4) bg_popup_fep_shadow_pane_g4

0xd2d5,	// (0x0002cacd) bg_popup_fep_shadow_pane_g5

0xd2dd,	// (0x0002cad5) bg_popup_fep_shadow_pane_g6

0xd2e5,	// (0x0002cadd) bg_popup_fep_shadow_pane_g7

0x131b,	// (0x00020b13) bg_popup_fep_shadow_pane_g8

0x862e,	// (0x00027e26) grid_vkb_keypad_number_pane_ParamLimits

0x862e,	// (0x00027e26) grid_vkb_keypad_number_pane

0x863e,	// (0x00027e36) grid_vkb_keypad_pane_ParamLimits

0x863e,	// (0x00027e36) grid_vkb_keypad_pane

0x8664,	// (0x00027e5c) fep_vkb_bottom_pane_g1_ParamLimits

0x8664,	// (0x00027e5c) fep_vkb_bottom_pane_g1

0x868d,	// (0x00027e85) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x868d,	// (0x00027e85) grid_vkb_keypad_bottom_left_pane

0x86a2,	// (0x00027e9a) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x86a2,	// (0x00027e9a) grid_vkb_keypad_bottom_right_pane

0x86b7,	// (0x00027eaf) fep_vkb_top_text_pane_g1

0x86d2,	// (0x00027eca) fep_vkb_top_text_pane_t1

0x86e7,	// (0x00027edf) cell_vkb_side_pane_ParamLimits

0x86e7,	// (0x00027edf) cell_vkb_side_pane

0x832d,	// (0x00027b25) cell_vkb_side_pane_g1

0x8726,	// (0x00027f1e) cell_vkb_keypad_pane_ParamLimits

0x8726,	// (0x00027f1e) cell_vkb_keypad_pane

0x8793,	// (0x00027f8b) cell_vkb_keypad_pane_g1

0x0008,

0xfb75,	// (0x0002f36d) bg_popup_fep_shadow_pane_g

0x832d,	// (0x00027b25) cell_hwr_side_pane_g1

0x832d,	// (0x00027b25) cell_hwr_side_pane_g2

0x879d,	// (0x00027f95) cell_vkb_keypad_pane_t1

0x87ab,	// (0x00027fa3) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x87ab,	// (0x00027fa3) cell_vkb_keypad_bottom_left_pane

0x87c8,	// (0x00027fc0) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x87c8,	// (0x00027fc0) cell_vkb_keypad_bottom_right_pane

0x832d,	// (0x00027b25) cell_vkb_keypad_bottom_left_pane_g1

0x832d,	// (0x00027b25) cell_vkb_keypad_bottom_right_pane_g1

0x8801,	// (0x00027ff9) cell_vkb_keypad_number_pane_ParamLimits

0x8801,	// (0x00027ff9) cell_vkb_keypad_number_pane

0x8820,	// (0x00028018) cell_vkb_keypad_number_pane_g1

0x882a,	// (0x00028022) cell_vkb_keypad_number_pane_g2

0x8833,	// (0x0002802b) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb67,	// (0x0002f35f) cell_vkb_keypad_number_pane_g

0x879d,	// (0x00027f95) cell_vkb_keypad_number_pane_t1

0x8855,	// (0x0002804d) fep_vkb_candidate_pane_g1

0x0001,

0xfb62,	// (0x0002f35a) cell_hwr_side_pane_g

0x886e,	// (0x00028066) cell_hwr_side_pane_t1

0xd2f5,	// (0x0002caed) cell_hwr_side_pane_t1_copy1

0x8575,	// (0x00027d6d) cell_hwr_candidate_pane_g1

0xd303,	// (0x0002cafb) cell_hwr_candidate_pane_t1

0x832d,	// (0x00027b25) cell_vkb_candidate_pane_g2

0x88b2,	// (0x000280aa) cell_vkb_candidate_pane_t1

0x8388,	// (0x00027b80) bg_popup_fep_shadow_pane_ParamLimits

0x8388,	// (0x00027b80) bg_popup_fep_shadow_pane

0xa32b,	// (0x00029b23) bg_fep_hwr_top_pane_g4

0x83ba,	// (0x00027bb2) bg_hwr_side_pane_g1_ParamLimits

0x83ba,	// (0x00027bb2) bg_hwr_side_pane_g1

0xd1e7,	// (0x0002c9df) cell_hwr_side_pane_ParamLimits

0xd1e7,	// (0x0002c9df) cell_hwr_side_pane

0xd222,	// (0x0002ca1a) fep_hwr_write_pane_g1_ParamLimits

0xd222,	// (0x0002ca1a) fep_hwr_write_pane_g1

0xd22f,	// (0x0002ca27) fep_hwr_write_pane_g2_ParamLimits

0xd22f,	// (0x0002ca27) fep_hwr_write_pane_g2

0xd23c,	// (0x0002ca34) fep_hwr_write_pane_g3_ParamLimits

0xd23c,	// (0x0002ca34) fep_hwr_write_pane_g3

0xd24a,	// (0x0002ca42) fep_hwr_write_pane_g4_ParamLimits

0xd24a,	// (0x0002ca42) fep_hwr_write_pane_g4

0x0005,

0xfb34,	// (0x0002f32c) fep_hwr_write_pane_g_ParamLimits

0xfb34,	// (0x0002f32c) fep_hwr_write_pane_g

0xa32b,	// (0x00029b23) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xa32b,	// (0x00029b23) bg_fep_hwr_candidate_pane_g2

0xd25f,	// (0x0002ca57) cell_hwr_candidate_pane_ParamLimits

0xd25f,	// (0x0002ca57) cell_hwr_candidate_pane

0xd299,	// (0x0002ca91) fep_hwr_candidate_pane_g1_ParamLimits

0x841a,	// (0x00027c12) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x841a,	// (0x00027c12) bg_popup_fep_shadow_pane_cp2

0x8575,	// (0x00027d6d) fep_vkb_top_pane_g4_ParamLimits

0x8575,	// (0x00027d6d) fep_vkb_top_pane_g4

0x85bb,	// (0x00027db3) fep_vkb_side_pane_g2_ParamLimits

0x85bb,	// (0x00027db3) fep_vkb_side_pane_g2

0xb9cd,	// (0x0002b1c5) list_setting_pane_t4_ParamLimits

0xb9cd,	// (0x0002b1c5) list_setting_pane_t4

0xba63,	// (0x0002b25b) list_setting_number_pane_t5_ParamLimits

0xba63,	// (0x0002b25b) list_setting_number_pane_t5

0x3156,	// (0x0002294e) list_double_heading_pane_cp2_ParamLimits

0x3156,	// (0x0002294e) list_double_heading_pane_cp2

0x1ada,	// (0x000212d2) list_double_heading_pane_g1_cp2_ParamLimits

0x1ada,	// (0x000212d2) list_double_heading_pane_g1_cp2

0x88c0,	// (0x000280b8) list_double_heading_pane_g2_cp2_ParamLimits

0x88c0,	// (0x000280b8) list_double_heading_pane_g2_cp2

0x88d4,	// (0x000280cc) list_double_heading_pane_t1_cp2_ParamLimits

0x88d4,	// (0x000280cc) list_double_heading_pane_t1_cp2

0x88ea,	// (0x000280e2) list_double_heading_pane_t2_cp2_ParamLimits

0x88ea,	// (0x000280e2) list_double_heading_pane_t2_cp2

0x0560,	// (0x0001fd58) aid_value_unit2

0xc4cb,	// (0x0002bcc3) popup_preview_fixed_window

0x07b7,	// (0x0001ffaf) bg_popup_preview_window_pane_cp02

0x88fc,	// (0x000280f4) list_preview_fixed_pane

0x8984,	// (0x0002817c) list_empty_pane_fp_ParamLimits

0x8984,	// (0x0002817c) list_empty_pane_fp

0x8984,	// (0x0002817c) list_single_cale_day_pane_fp_ParamLimits

0x8984,	// (0x0002817c) list_single_cale_day_pane_fp

0x8984,	// (0x0002817c) list_single_graphic_heading_pane_fp_ParamLimits

0x8984,	// (0x0002817c) list_single_graphic_heading_pane_fp

0x8984,	// (0x0002817c) list_single_graphic_pane_fp_ParamLimits

0x8984,	// (0x0002817c) list_single_graphic_pane_fp

0x8984,	// (0x0002817c) list_single_heading_pane_fp_ParamLimits

0x8984,	// (0x0002817c) list_single_heading_pane_fp

0x8984,	// (0x0002817c) list_single_pane_fp_ParamLimits

0x8984,	// (0x0002817c) list_single_pane_fp

0x8998,	// (0x00028190) list_single_pane_fp_g1_ParamLimits

0x8998,	// (0x00028190) list_single_pane_fp_g1

0xc666,	// (0x0002be5e) list_single_pane_fp_g2_ParamLimits

0xc666,	// (0x0002be5e) list_single_pane_fp_g2

0xd320,	// (0x0002cb18) list_single_pane_fp_g3_ParamLimits

0xd320,	// (0x0002cb18) list_single_pane_fp_g3

0x89a4,	// (0x0002819c) list_single_pane_fp_g4_ParamLimits

0x89a4,	// (0x0002819c) list_single_pane_fp_g4

0x0003,

0xfb96,	// (0x0002f38e) list_single_pane_fp_g_ParamLimits

0xfb96,	// (0x0002f38e) list_single_pane_fp_g

0xc089,	// (0x0002b881) list_single_pane_fp_t1_ParamLimits

0xc089,	// (0x0002b881) list_single_pane_fp_t1

0xc0a0,	// (0x0002b898) list_single_graphic_pane_fp_g1_ParamLimits

0xc0a0,	// (0x0002b898) list_single_graphic_pane_fp_g1

0x8998,	// (0x00028190) list_single_graphic_pane_fp_g2_ParamLimits

0x8998,	// (0x00028190) list_single_graphic_pane_fp_g2

0xc666,	// (0x0002be5e) list_single_graphic_pane_fp_g3_ParamLimits

0xc666,	// (0x0002be5e) list_single_graphic_pane_fp_g3

0xd320,	// (0x0002cb18) list_single_graphic_pane_fp_g4_ParamLimits

0xd320,	// (0x0002cb18) list_single_graphic_pane_fp_g4

0x89a4,	// (0x0002819c) list_single_graphic_pane_fp_g5_ParamLimits

0x89a4,	// (0x0002819c) list_single_graphic_pane_fp_g5

0x0004,

0xfb9f,	// (0x0002f397) list_single_graphic_pane_fp_g_ParamLimits

0xfb9f,	// (0x0002f397) list_single_graphic_pane_fp_g

0xc0ac,	// (0x0002b8a4) list_single_graphic_pane_fp_t1_ParamLimits

0xc0ac,	// (0x0002b8a4) list_single_graphic_pane_fp_t1

0xc0a0,	// (0x0002b898) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc0a0,	// (0x0002b898) list_single_graphic_heading_pane_fp_g1

0x8998,	// (0x00028190) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x8998,	// (0x00028190) list_single_graphic_heading_pane_fp_g2

0xc666,	// (0x0002be5e) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc666,	// (0x0002be5e) list_single_graphic_heading_pane_fp_g3

0xd320,	// (0x0002cb18) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xd320,	// (0x0002cb18) list_single_graphic_heading_pane_fp_g4

0x89a4,	// (0x0002819c) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x89a4,	// (0x0002819c) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb9f,	// (0x0002f397) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb9f,	// (0x0002f397) list_single_graphic_heading_pane_fp_g

0xc0c2,	// (0x0002b8ba) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc0c2,	// (0x0002b8ba) list_single_graphic_heading_pane_fp_t1

0xc0d8,	// (0x0002b8d0) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc0d8,	// (0x0002b8d0) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbaa,	// (0x0002f3a2) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbaa,	// (0x0002f3a2) list_single_graphic_heading_pane_fp_t

0xc0ea,	// (0x0002b8e2) list_single_cale_day_pane_fp_g1_ParamLimits

0xc0ea,	// (0x0002b8e2) list_single_cale_day_pane_fp_g1

0x89b0,	// (0x000281a8) list_single_cale_day_pane_fp_g2_ParamLimits

0x89b0,	// (0x000281a8) list_single_cale_day_pane_fp_g2

0xd334,	// (0x0002cb2c) list_single_cale_day_pane_fp_g3_ParamLimits

0xd334,	// (0x0002cb2c) list_single_cale_day_pane_fp_g3

0xd35c,	// (0x0002cb54) list_single_cale_day_pane_fp_g4_ParamLimits

0xd35c,	// (0x0002cb54) list_single_cale_day_pane_fp_g4

0xd380,	// (0x0002cb78) list_single_cale_day_pane_fp_g5_ParamLimits

0xd380,	// (0x0002cb78) list_single_cale_day_pane_fp_g5

0x0004,

0xfbaf,	// (0x0002f3a7) list_single_cale_day_pane_fp_g_ParamLimits

0xfbaf,	// (0x0002f3a7) list_single_cale_day_pane_fp_g

0xc122,	// (0x0002b91a) list_single_cale_day_pane_fp_t1_ParamLimits

0xc122,	// (0x0002b91a) list_single_cale_day_pane_fp_t1

0xc148,	// (0x0002b940) list_single_cale_day_pane_fp_t2_ParamLimits

0xc148,	// (0x0002b940) list_single_cale_day_pane_fp_t2

0xc161,	// (0x0002b959) list_single_cale_day_pane_fp_t3_ParamLimits

0xc161,	// (0x0002b959) list_single_cale_day_pane_fp_t3

0x0002,

0xfbba,	// (0x0002f3b2) list_single_cale_day_pane_fp_t_ParamLimits

0xfbba,	// (0x0002f3b2) list_single_cale_day_pane_fp_t

0x8998,	// (0x00028190) list_empty_pane_fp_g1_ParamLimits

0x8998,	// (0x00028190) list_empty_pane_fp_g1

0xc17a,	// (0x0002b972) list_empty_pane_fp_t1

0xc188,	// (0x0002b980) list_empty_pane_fp_t2

0x0001,

0xfbc1,	// (0x0002f3b9) list_empty_pane_fp_t

0x8998,	// (0x00028190) list_single_heading_pane_fp_g1_ParamLimits

0x8998,	// (0x00028190) list_single_heading_pane_fp_g1

0xc666,	// (0x0002be5e) list_single_heading_pane_fp_g2_ParamLimits

0xc666,	// (0x0002be5e) list_single_heading_pane_fp_g2

0xd320,	// (0x0002cb18) list_single_heading_pane_fp_g3_ParamLimits

0xd320,	// (0x0002cb18) list_single_heading_pane_fp_g3

0x0002,

0xfbc6,	// (0x0002f3be) list_single_heading_pane_fp_g_ParamLimits

0xfbc6,	// (0x0002f3be) list_single_heading_pane_fp_g

0xc196,	// (0x0002b98e) list_single_heading_pane_fp_t1_ParamLimits

0xc196,	// (0x0002b98e) list_single_heading_pane_fp_t1

0xc1a8,	// (0x0002b9a0) list_single_heading_pane_fp_t2_ParamLimits

0xc1a8,	// (0x0002b9a0) list_single_heading_pane_fp_t2

0x0001,

0xfbcd,	// (0x0002f3c5) list_single_heading_pane_fp_t_ParamLimits

0xfbcd,	// (0x0002f3c5) list_single_heading_pane_fp_t

0x1428,	// (0x00020c20) aid_size_cell_fast

0x079a,	// (0x0001ff92) soft_indicator_pane_cp1_t1

0x1465,	// (0x00020c5d) cell_app_pane_cp2_ParamLimits

0x1465,	// (0x00020c5d) cell_app_pane_cp2

0xd0f7,	// (0x0002c8ef) fep_hwr_candidate_drop_down_list_pane

0xa649,	// (0x00029e41) fep_hwr_candidate_pane_g3_ParamLimits

0xa649,	// (0x00029e41) fep_hwr_candidate_pane_g3

0xa656,	// (0x00029e4e) fep_hwr_candidate_pane_g4_ParamLimits

0xa656,	// (0x00029e4e) fep_hwr_candidate_pane_g4

0x0002,

0xfb41,	// (0x0002f339) fep_hwr_candidate_pane_g_ParamLimits

0xfb41,	// (0x0002f339) fep_hwr_candidate_pane_g

0x848e,	// (0x00027c86) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x848e,	// (0x00027c86) fep_vkb_candidate_drop_down_list_pane

0x885d,	// (0x00028055) fep_vkb_candidate_pane_g3

0x8865,	// (0x0002805d) fep_vkb_candidate_pane_g4

0x0002,

0xfb6e,	// (0x0002f366) fep_vkb_candidate_pane_g

0x8575,	// (0x00027d6d) cell_hwr_candidate_pane_g1_ParamLimits

0x8912,	// (0x0002810a) cell_hwr_candidate_pane_g3_ParamLimits

0x8912,	// (0x0002810a) cell_hwr_candidate_pane_g3

0x8933,	// (0x0002812b) cell_hwr_candidate_pane_g4_ParamLimits

0x8933,	// (0x0002812b) cell_hwr_candidate_pane_g4

0x0002,

0xfb88,	// (0x0002f380) cell_hwr_candidate_pane_g_ParamLimits

0xfb88,	// (0x0002f380) cell_hwr_candidate_pane_g

0x887c,	// (0x00028074) cell_vkb_candidate_pane_g3_ParamLimits

0x887c,	// (0x00028074) cell_vkb_candidate_pane_g3

0x8897,	// (0x0002808f) cell_vkb_candidate_pane_g4_ParamLimits

0x8897,	// (0x0002808f) cell_vkb_candidate_pane_g4

0x89bc,	// (0x000281b4) cell_app_pane_cp2_g1_ParamLimits

0x89bc,	// (0x000281b4) cell_app_pane_cp2_g1

0x89da,	// (0x000281d2) cell_app_pane_cp2_g2_ParamLimits

0x89da,	// (0x000281d2) cell_app_pane_cp2_g2

0x0001,

0xfbd2,	// (0x0002f3ca) cell_app_pane_cp2_g_ParamLimits

0xfbd2,	// (0x0002f3ca) cell_app_pane_cp2_g

0x89e6,	// (0x000281de) cell_app_pane_cp2_t1_ParamLimits

0x89e6,	// (0x000281de) cell_app_pane_cp2_t1

0x12ac,	// (0x00020aa4) grid_highlight_pane_cp1_ParamLimits

0x12ac,	// (0x00020aa4) grid_highlight_pane_cp1

0xd3a4,	// (0x0002cb9c) cell_hwr_candidate_pane_cp1_ParamLimits

0xd3a4,	// (0x0002cb9c) cell_hwr_candidate_pane_cp1

0x8575,	// (0x00027d6d) fep_hwr_candidate_drop_down_list_pane_g1

0x89f8,	// (0x000281f0) fep_hwr_candidate_drop_down_list_pane_g2

0x8a28,	// (0x00028220) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd7,	// (0x0002f3cf) fep_hwr_candidate_drop_down_list_pane_g

0xd3c2,	// (0x0002cbba) fep_hwr_candidate_drop_down_list_scroll_pane

0xd3cb,	// (0x0002cbc3) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xd3cb,	// (0x0002cbc3) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xd3d8,	// (0x0002cbd0) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xd3d8,	// (0x0002cbd0) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xd3e5,	// (0x0002cbdd) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xd3e5,	// (0x0002cbdd) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x887c,	// (0x00028074) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x887c,	// (0x00028074) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x8897,	// (0x0002808f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8897,	// (0x0002808f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xd3f2,	// (0x0002cbea) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xd3f2,	// (0x0002cbea) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xd40d,	// (0x0002cc05) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xd40d,	// (0x0002cc05) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xd428,	// (0x0002cc20) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xd428,	// (0x0002cc20) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbde,	// (0x0002f3d6) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbde,	// (0x0002f3d6) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x8a05,	// (0x000281fd) cell_vkb_candidate_pane_cp1_ParamLimits

0x8a05,	// (0x000281fd) cell_vkb_candidate_pane_cp1

0x8575,	// (0x00027d6d) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x8575,	// (0x00027d6d) fep_vkb_candidate_drop_down_list_pane_g1

0x89f8,	// (0x000281f0) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x89f8,	// (0x000281f0) fep_vkb_candidate_drop_down_list_pane_g2

0x8a28,	// (0x00028220) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x8a28,	// (0x00028220) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd7,	// (0x0002f3cf) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd7,	// (0x0002f3cf) fep_vkb_candidate_drop_down_list_pane_g

0x8a35,	// (0x0002822d) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x8a35,	// (0x0002822d) fep_vkb_candidate_drop_down_list_scroll_pane

0x8a42,	// (0x0002823a) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8a42,	// (0x0002823a) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x8a4f,	// (0x00028247) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8a4f,	// (0x00028247) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x8a5b,	// (0x00028253) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8a5b,	// (0x00028253) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x8912,	// (0x0002810a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8912,	// (0x0002810a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x8933,	// (0x0002812b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8933,	// (0x0002812b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x8a67,	// (0x0002825f) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8a67,	// (0x0002825f) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x8a88,	// (0x00028280) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8a88,	// (0x00028280) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x8aa9,	// (0x000282a1) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8aa9,	// (0x000282a1) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbef,	// (0x0002f3e7) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbef,	// (0x0002f3e7) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x2b5e,	// (0x00022356) title_pane_g1_ParamLimits

0x2b6b,	// (0x00022363) title_pane_g2_ParamLimits

0xf592,	// (0x0002ed8a) title_pane_g_ParamLimits

0x17aa,	// (0x00020fa2) aid_call2_pane

0x17b2,	// (0x00020faa) aid_call_pane

0x17ba,	// (0x00020fb2) popup_clock_analogue_window_g1

0x17ba,	// (0x00020fb2) popup_clock_analogue_window_g2

0xc847,	// (0x0002c03f) popup_clock_analogue_window_g3

0xc850,	// (0x0002c048) popup_clock_analogue_window_g4

0x0572,	// (0x0001fd6a) popup_clock_analogue_window_g5

0x0004,

0xf741,	// (0x0002ef39) popup_clock_analogue_window_g

0xc858,	// (0x0002c050) popup_clock_analogue_window_t1

0xc866,	// (0x0002c05e) clock_digital_number_pane_ParamLimits

0xc866,	// (0x0002c05e) clock_digital_number_pane

0xc872,	// (0x0002c06a) clock_digital_number_pane_cp02_ParamLimits

0xc872,	// (0x0002c06a) clock_digital_number_pane_cp02

0xc87e,	// (0x0002c076) clock_digital_number_pane_cp03_ParamLimits

0xc87e,	// (0x0002c076) clock_digital_number_pane_cp03

0xc88a,	// (0x0002c082) clock_digital_number_pane_cp04_ParamLimits

0xc88a,	// (0x0002c082) clock_digital_number_pane_cp04

0xc896,	// (0x0002c08e) clock_digital_separator_pane_ParamLimits

0xc896,	// (0x0002c08e) clock_digital_separator_pane

0xc8a2,	// (0x0002c09a) popup_clock_digital_window_t1_ParamLimits

0xc8a2,	// (0x0002c09a) popup_clock_digital_window_t1

0x0572,	// (0x0001fd6a) clock_digital_number_pane_g1

0x0572,	// (0x0001fd6a) clock_digital_number_pane_g2

0x0001,

0xf74c,	// (0x0002ef44) clock_digital_number_pane_g

0x0572,	// (0x0001fd6a) clock_digital_separator_pane_g1

0x0572,	// (0x0001fd6a) clock_digital_separator_pane_g2

0x0001,

0xf74c,	// (0x0002ef44) clock_digital_separator_pane_g

0x7504,	// (0x00026cfc) aid_fill_nsta_ParamLimits

0x75bd,	// (0x00026db5) indicator_nsta_pane_ParamLimits

0x4982,	// (0x0002417a) popup_clock_analogue_window

0x4982,	// (0x0002417a) popup_clock_digital_window

0x0658,	// (0x0001fe50) grid_indicator_nsta_pane_ParamLimits

0x6ea7,	// (0x0002669f) clock_nsta_pane_t2

0x0001,

0xface,	// (0x0002f2c6) clock_nsta_pane_t

0xc80b,	// (0x0002c003) aid_size_max_handle

0xc815,	// (0x0002c00d) aid_size_min_handle

0x1c65,	// (0x0002145d) editor_scroll_pane

0x8ac4,	// (0x000282bc) ex_editor_pane

0x1403,	// (0x00020bfb) scroll_pane_cp13

0x0ba8,	// (0x000203a0) scroll_pane_cp14

0x17e4,	// (0x00020fdc) scroll_pane_cp36

0x3166,	// (0x0002295e) list_single_graphic_hl_pane_cp2_ParamLimits

0x3166,	// (0x0002295e) list_single_graphic_hl_pane_cp2

0xbec3,	// (0x0002b6bb) list_single_graphic_hl_pane_ParamLimits

0xbec3,	// (0x0002b6bb) list_single_graphic_hl_pane

0xc1be,	// (0x0002b9b6) aid_size_min_hl_cp1

0x8acc,	// (0x000282c4) list_highlight_pane_cp34_ParamLimits

0x8acc,	// (0x000282c4) list_highlight_pane_cp34

0x8add,	// (0x000282d5) list_single_graphic_hl_pane_g1_ParamLimits

0x8add,	// (0x000282d5) list_single_graphic_hl_pane_g1

0xc1c7,	// (0x0002b9bf) list_single_graphic_hl_pane_g2_ParamLimits

0xc1c7,	// (0x0002b9bf) list_single_graphic_hl_pane_g2

0xc1c7,	// (0x0002b9bf) list_single_graphic_hl_pane_g3_ParamLimits

0xc1c7,	// (0x0002b9bf) list_single_graphic_hl_pane_g3

0xc666,	// (0x0002be5e) list_single_graphic_hl_pane_g4_ParamLimits

0xc666,	// (0x0002be5e) list_single_graphic_hl_pane_g4

0xd320,	// (0x0002cb18) list_single_graphic_hl_pane_g5_ParamLimits

0xd320,	// (0x0002cb18) list_single_graphic_hl_pane_g5

0x0004,

0xfc00,	// (0x0002f3f8) list_single_graphic_hl_pane_g_ParamLimits

0xfc00,	// (0x0002f3f8) list_single_graphic_hl_pane_g

0xb7ea,	// (0x0002afe2) list_single_graphic_hl_pane_t1_ParamLimits

0xb7ea,	// (0x0002afe2) list_single_graphic_hl_pane_t1

0x8aea,	// (0x000282e2) aid_size_min_hl_cp2

0x8af3,	// (0x000282eb) list_highlight_pane_cp34_cp2_ParamLimits

0x8af3,	// (0x000282eb) list_highlight_pane_cp34_cp2

0x8add,	// (0x000282d5) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x8add,	// (0x000282d5) list_single_graphic_hl_pane_g1_cp2

0x8b00,	// (0x000282f8) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x8b00,	// (0x000282f8) list_single_graphic_hl_pane_g2_cp2

0x8b0c,	// (0x00028304) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x8b0c,	// (0x00028304) list_single_graphic_hl_pane_g3_cp2

0x1ada,	// (0x000212d2) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x1ada,	// (0x000212d2) list_single_graphic_hl_pane_g4_cp2

0x88c0,	// (0x000280b8) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x88c0,	// (0x000280b8) list_single_graphic_hl_pane_g5_cp2

0xcb3d,	// (0x0002c335) control_pane_g4_ParamLimits

0xcb3d,	// (0x0002c335) control_pane_g4

0x47c5,	// (0x00023fbd) bg_popup_sub_pane_cp10_ParamLimits

0x8337,	// (0x00027b2f) list_choice_list_pane_ParamLimits

0x8346,	// (0x00027b3e) scroll_pane_cp23

0x07b7,	// (0x0001ffaf) bg_popup_preview_window_pane_cp02_ParamLimits

0x88fc,	// (0x000280f4) list_preview_fixed_pane_ParamLimits

0x8954,	// (0x0002814c) list_preview_fixed_pane_cp_ParamLimits

0x8954,	// (0x0002814c) list_preview_fixed_pane_cp

0x8960,	// (0x00028158) popup_preview_fixed_window_g1_ParamLimits

0x8960,	// (0x00028158) popup_preview_fixed_window_g1

0x896c,	// (0x00028164) popup_preview_fixed_window_g2_ParamLimits

0x896c,	// (0x00028164) popup_preview_fixed_window_g2

0x0002,

0xfb8f,	// (0x0002f387) popup_preview_fixed_window_g_ParamLimits

0xfb8f,	// (0x0002f387) popup_preview_fixed_window_g

0xc79b,	// (0x0002bf93) aid_navi_side_left_pane_ParamLimits

0xc7ab,	// (0x0002bfa3) aid_navi_side_right_pane_ParamLimits

0xc7ba,	// (0x0002bfb2) navi_icon_pane_stacon_ParamLimits

0xc7ca,	// (0x0002bfc2) navi_navi_pane_stacon_ParamLimits

0xc7ba,	// (0x0002bfb2) navi_text_pane_stacon_ParamLimits

0x0568,	// (0x0001fd60) main_text_info_pane

0x8b2e,	// (0x00028326) listscroll_text_info_pane

0x8b36,	// (0x0002832e) list_text_info_pane_ParamLimits

0x8b36,	// (0x0002832e) list_text_info_pane

0x8b45,	// (0x0002833d) scroll_pane_cp24_ParamLimits

0x8b45,	// (0x0002833d) scroll_pane_cp24

0x8b63,	// (0x0002835b) list_text_info_pane_t1_ParamLimits

0x8b63,	// (0x0002835b) list_text_info_pane_t1

0x7179,	// (0x00026971) popup_fast_swap2_window_ParamLimits

0x7179,	// (0x00026971) popup_fast_swap2_window

0x8b80,	// (0x00028378) aid_size_cell_fast2

0x0568,	// (0x0001fd60) bg_popup_window_pane_cp17

0x4e10,	// (0x00024608) heading_pane_cp2

0x09a7,	// (0x0002019f) listscroll_fast2_pane

0x8b8a,	// (0x00028382) grid_fast2_pane

0x8b92,	// (0x0002838a) listscroll_fast2_pane_g1

0x8b9a,	// (0x00028392) listscroll_fast2_pane_g2

0x0001,

0xfc0b,	// (0x0002f403) listscroll_fast2_pane_g

0x1403,	// (0x00020bfb) scroll_pane_cp26

0x8ba2,	// (0x0002839a) cell_fast2_pane_ParamLimits

0x8ba2,	// (0x0002839a) cell_fast2_pane

0x8bb8,	// (0x000283b0) cell_fast2_pane_g1

0x8bc1,	// (0x000283b9) cell_fast2_pane_g2

0x8bca,	// (0x000283c2) cell_fast2_pane_g3

0x0002,

0xfc10,	// (0x0002f408) cell_fast2_pane_g

0x0a09,	// (0x00020201) grid_highlight_pane_cp9

0x0a1e,	// (0x00020216) main_eswt_pane_ParamLimits

0x0a1e,	// (0x00020216) main_eswt_pane

0x8b5a,	// (0x00028352) list_single_text_info_pane

0x8bd2,	// (0x000283ca) eswt_ctrl_button_pane

0x8bd2,	// (0x000283ca) eswt_ctrl_canvas_pane

0x8bda,	// (0x000283d2) eswt_ctrl_combo_pane

0x8bd2,	// (0x000283ca) eswt_ctrl_default_pane

0x8bd2,	// (0x000283ca) eswt_ctrl_label_pane

0x8be2,	// (0x000283da) eswt_ctrl_wait_pane

0x8bea,	// (0x000283e2) eswt_shell_pane

0x0568,	// (0x0001fd60) listscroll_eswt_app_pane

0x8c06,	// (0x000283fe) popup_eswt_tasktip_window_ParamLimits

0x8c06,	// (0x000283fe) popup_eswt_tasktip_window

0x4b71,	// (0x00024369) bg_popup_window_pane_cp18

0x8c17,	// (0x0002840f) eswt_control_pane_g1_ParamLimits

0x8c17,	// (0x0002840f) eswt_control_pane_g1

0x8c24,	// (0x0002841c) eswt_control_pane_g2_ParamLimits

0x8c24,	// (0x0002841c) eswt_control_pane_g2

0x8c31,	// (0x00028429) eswt_control_pane_g3_ParamLimits

0x8c31,	// (0x00028429) eswt_control_pane_g3

0x8c3e,	// (0x00028436) eswt_control_pane_g4_ParamLimits

0x8c3e,	// (0x00028436) eswt_control_pane_g4

0x0003,

0xfc17,	// (0x0002f40f) eswt_control_pane_g_ParamLimits

0xfc17,	// (0x0002f40f) eswt_control_pane_g

0x12ac,	// (0x00020aa4) bg_button_pane_ParamLimits

0x12ac,	// (0x00020aa4) bg_button_pane

0x0a1e,	// (0x00020216) common_borders_pane_copy2_ParamLimits

0x0a1e,	// (0x00020216) common_borders_pane_copy2

0x8c4b,	// (0x00028443) control_button_pane_g1_ParamLimits

0x8c4b,	// (0x00028443) control_button_pane_g1

0x8c57,	// (0x0002844f) control_button_pane_g2_ParamLimits

0x8c57,	// (0x0002844f) control_button_pane_g2

0x8c63,	// (0x0002845b) control_button_pane_g3_ParamLimits

0x8c63,	// (0x0002845b) control_button_pane_g3

0x0002,

0xfc20,	// (0x0002f418) control_button_pane_g_ParamLimits

0xfc20,	// (0x0002f418) control_button_pane_g

0x8c77,	// (0x0002846f) control_button_pane_t1

0x8c85,	// (0x0002847d) control_button_pane_t2

0x0001,

0xfc27,	// (0x0002f41f) control_button_pane_t

0x4a83,	// (0x0002427b) bg_button_pane_g1

0x4a93,	// (0x0002428b) bg_button_pane_g2

0x4a8b,	// (0x00024283) bg_button_pane_g3

0x4aa3,	// (0x0002429b) bg_button_pane_g4

0x4a9b,	// (0x00024293) bg_button_pane_g5

0x4aab,	// (0x000242a3) bg_button_pane_g6

0x4ab3,	// (0x000242ab) bg_button_pane_g7

0x4ac3,	// (0x000242bb) bg_button_pane_g8

0x4abb,	// (0x000242b3) bg_button_pane_g9

0x0008,

0xf89f,	// (0x0002f097) bg_button_pane_g

0x82f2,	// (0x00027aea) common_borders_pane_ParamLimits

0x82f2,	// (0x00027aea) common_borders_pane

0x8c17,	// (0x0002840f) eswt_control_pane_g1_copy1_ParamLimits

0x8c17,	// (0x0002840f) eswt_control_pane_g1_copy1

0x8c24,	// (0x0002841c) eswt_control_pane_g2_copy1_ParamLimits

0x8c24,	// (0x0002841c) eswt_control_pane_g2_copy1

0x8c31,	// (0x00028429) eswt_control_pane_g3_copy1_ParamLimits

0x8c31,	// (0x00028429) eswt_control_pane_g3_copy1

0x8c3e,	// (0x00028436) eswt_control_pane_g4_copy1_ParamLimits

0x8c3e,	// (0x00028436) eswt_control_pane_g4_copy1

0x832d,	// (0x00027b25) bg_eswt_ctrl_canvas_pane_g1

0x82f2,	// (0x00027aea) common_borders_pane_cp2_ParamLimits

0x82f2,	// (0x00027aea) common_borders_pane_cp2

0x82f2,	// (0x00027aea) common_borders_pane_cp3_ParamLimits

0x82f2,	// (0x00027aea) common_borders_pane_cp3

0x8c93,	// (0x0002848b) separator_horizontal_pane

0x1649,	// (0x00020e41) separator_vertical_pane

0x8c17,	// (0x0002840f) eswt_control_pane_g1_copy2_ParamLimits

0x8c17,	// (0x0002840f) eswt_control_pane_g1_copy2

0x8c24,	// (0x0002841c) eswt_control_pane_g2_copy2_ParamLimits

0x8c24,	// (0x0002841c) eswt_control_pane_g2_copy2

0x8c31,	// (0x00028429) eswt_control_pane_g3_copy2_ParamLimits

0x8c31,	// (0x00028429) eswt_control_pane_g3_copy2

0x8c3e,	// (0x00028436) eswt_control_pane_g4_copy2_ParamLimits

0x8c3e,	// (0x00028436) eswt_control_pane_g4_copy2

0x0568,	// (0x0001fd60) common_borders_pane_cp4

0x8c9b,	// (0x00028493) separator_horizontal_pane_g1

0x8ca4,	// (0x0002849c) separator_horizontal_pane_g2

0x8cad,	// (0x000284a5) separator_horizontal_pane_g3

0x0002,

0xfc2c,	// (0x0002f424) separator_horizontal_pane_g

0x8c17,	// (0x0002840f) eswt_control_pane_g1_copy3_ParamLimits

0x8c17,	// (0x0002840f) eswt_control_pane_g1_copy3

0x8c24,	// (0x0002841c) eswt_control_pane_g2_copy3_ParamLimits

0x8c24,	// (0x0002841c) eswt_control_pane_g2_copy3

0x8c31,	// (0x00028429) eswt_control_pane_g3_copy3_ParamLimits

0x8c31,	// (0x00028429) eswt_control_pane_g3_copy3

0x8c3e,	// (0x00028436) eswt_control_pane_g4_copy3_ParamLimits

0x8c3e,	// (0x00028436) eswt_control_pane_g4_copy3

0x0568,	// (0x0001fd60) common_borders_pane_cp5

0x8cb6,	// (0x000284ae) separator_vertical_pane_g1

0x8cbf,	// (0x000284b7) separator_vertical_pane_g2

0x8cc8,	// (0x000284c0) separator_vertical_pane_g3

0x0002,

0xfc33,	// (0x0002f42b) separator_vertical_pane_g

0x8c17,	// (0x0002840f) eswt_control_pane_g1_copy4_ParamLimits

0x8c17,	// (0x0002840f) eswt_control_pane_g1_copy4

0x8c24,	// (0x0002841c) eswt_control_pane_g2_copy4_ParamLimits

0x8c24,	// (0x0002841c) eswt_control_pane_g2_copy4

0x8c31,	// (0x00028429) eswt_control_pane_g3_copy4_ParamLimits

0x8c31,	// (0x00028429) eswt_control_pane_g3_copy4

0x8c3e,	// (0x00028436) eswt_control_pane_g4_copy4_ParamLimits

0x8c3e,	// (0x00028436) eswt_control_pane_g4_copy4

0x8cd1,	// (0x000284c9) eswt_ctrl_combo_button_pane

0x8cd9,	// (0x000284d1) eswt_ctrl_input_pane

0x8ce1,	// (0x000284d9) popup_choice_list_window_cp70

0x8ce9,	// (0x000284e1) eswt_ctrl_input_pane_t1

0x0568,	// (0x0001fd60) input_focus_pane_cp70

0x82f2,	// (0x00027aea) bg_button_pane_cp70_ParamLimits

0x82f2,	// (0x00027aea) bg_button_pane_cp70

0x8cf7,	// (0x000284ef) eswt_ctrl_combo_button_pane_g1

0x8cff,	// (0x000284f7) wait_bar_pane_cp70

0x4b71,	// (0x00024369) bg_popup_window_pane_cp70_ParamLimits

0x4b71,	// (0x00024369) bg_popup_window_pane_cp70

0x8d07,	// (0x000284ff) popup_eswt_tasktip_window_t1

0x8d1d,	// (0x00028515) wait_bar_pane_cp71_ParamLimits

0x8d1d,	// (0x00028515) wait_bar_pane_cp71

0x8d29,	// (0x00028521) grid_eswt_app_pane

0x1652,	// (0x00020e4a) scroll_pane_cp70

0x8d32,	// (0x0002852a) cell_eswt_app_pane_ParamLimits

0x8d32,	// (0x0002852a) cell_eswt_app_pane

0x8d5a,	// (0x00028552) cell_eswt_app_pane_g1_ParamLimits

0x8d5a,	// (0x00028552) cell_eswt_app_pane_g1

0x8d89,	// (0x00028581) cell_eswt_app_pane_g2_ParamLimits

0x8d89,	// (0x00028581) cell_eswt_app_pane_g2

0x0001,

0xfc3a,	// (0x0002f432) cell_eswt_app_pane_g_ParamLimits

0xfc3a,	// (0x0002f432) cell_eswt_app_pane_g

0x8db2,	// (0x000285aa) cell_eswt_app_pane_t1_ParamLimits

0x8db2,	// (0x000285aa) cell_eswt_app_pane_t1

0x8de4,	// (0x000285dc) grid_highlight_pane_cp70_ParamLimits

0x8de4,	// (0x000285dc) grid_highlight_pane_cp70

0x0bb0,	// (0x000203a8) set_content_pane_g1

0x1e54,	// (0x0002164c) status_small_volume_pane

0xd443,	// (0x0002cc3b) status_small_volume_pane_g1

0xd44b,	// (0x0002cc43) volume_small2_pane

0xd454,	// (0x0002cc4c) volume_small2_pane_g1

0xd45d,	// (0x0002cc55) volume_small2_pane_g2

0xd466,	// (0x0002cc5e) volume_small2_pane_g3

0xd46f,	// (0x0002cc67) volume_small2_pane_g4

0xd478,	// (0x0002cc70) volume_small2_pane_g5

0xd481,	// (0x0002cc79) volume_small2_pane_g6

0xd48a,	// (0x0002cc82) volume_small2_pane_g7

0xd493,	// (0x0002cc8b) volume_small2_pane_g8

0xd49c,	// (0x0002cc94) volume_small2_pane_g9

0xd4a5,	// (0x0002cc9d) volume_small2_pane_g10

0x0009,

0xfc3f,	// (0x0002f437) volume_small2_pane_g

0x86b7,	// (0x00027eaf) fep_vkb_top_text_pane_g1_ParamLimits

0x86d2,	// (0x00027eca) fep_vkb_top_text_pane_t1_ParamLimits

0x8978,	// (0x00028170) popup_preview_fixed_window_g3_ParamLimits

0x8978,	// (0x00028170) popup_preview_fixed_window_g3

0x74ad,	// (0x00026ca5) popup_toolbar_trans_pane

0x7bc1,	// (0x000273b9) aid_height_set_list_ParamLimits

0x5b77,	// (0x0002536f) aid_size_parent_ParamLimits

0x47c5,	// (0x00023fbd) list_highlight_pane_cp2_ParamLimits

0x0bb0,	// (0x000203a8) set_content_pane_g1_ParamLimits

0x7d38,	// (0x00027530) list_single_image_pane_ParamLimits

0x7d38,	// (0x00027530) list_single_image_pane

0xd4ae,	// (0x0002cca6) aid_size_cell_image_ParamLimits

0xd4ae,	// (0x0002cca6) aid_size_cell_image

0xd4bb,	// (0x0002ccb3) grid_single_image_pane_ParamLimits

0xd4bb,	// (0x0002ccb3) grid_single_image_pane

0x0bb0,	// (0x000203a8) list_single_image_pane_g1_ParamLimits

0x0bb0,	// (0x000203a8) list_single_image_pane_g1

0x12c6,	// (0x00020abe) list_single_image_pane_g2_ParamLimits

0x12c6,	// (0x00020abe) list_single_image_pane_g2

0x0001,

0xfc54,	// (0x0002f44c) list_single_image_pane_g_ParamLimits

0xfc54,	// (0x0002f44c) list_single_image_pane_g

0x6140,	// (0x00025938) list_single_image_pane_t1_ParamLimits

0x6140,	// (0x00025938) list_single_image_pane_t1

0xd4c7,	// (0x0002ccbf) cell_image_list_pane_ParamLimits

0xd4c7,	// (0x0002ccbf) cell_image_list_pane

0xd4da,	// (0x0002ccd2) cell_image_list_pane_g1

0xd4e3,	// (0x0002ccdb) cell_image_list_pane_g2

0x0001,

0xfc59,	// (0x0002f451) cell_image_list_pane_g

0x9c22,	// (0x0002941a) aid_size_cell_tb_trans_pane

0x12ac,	// (0x00020aa4) bg_tb_trans_pane

0x9c34,	// (0x0002942c) grid_tb_trans_pane

0x4a83,	// (0x0002427b) bg_tb_trans_pane_g1

0x4a93,	// (0x0002428b) bg_tb_trans_pane_g2

0x4a8b,	// (0x00024283) bg_tb_trans_pane_g3

0x4aa3,	// (0x0002429b) bg_tb_trans_pane_g4

0x4a9b,	// (0x00024293) bg_tb_trans_pane_g5

0x4ac3,	// (0x000242bb) bg_tb_trans_pane_g6

0x4abb,	// (0x000242b3) bg_tb_trans_pane_g7

0x4aab,	// (0x000242a3) bg_tb_trans_pane_g8

0x4ab3,	// (0x000242ab) bg_tb_trans_pane_g9

0x0008,

0xfc5e,	// (0x0002f456) bg_tb_trans_pane_g

0x9c48,	// (0x00029440) cell_toolbar_trans_pane_ParamLimits

0x9c48,	// (0x00029440) cell_toolbar_trans_pane

0x832d,	// (0x00027b25) cell_toolbar_trans_pane_g1

0x7fb2,	// (0x000277aa) list_form2_midp_pane_t1

0x7fc0,	// (0x000277b8) list_form2_midp_pane_t2

0x0001,

0xfb07,	// (0x0002f2ff) list_form2_midp_pane_t

0x7fce,	// (0x000277c6) scroll_pane_cp51_ParamLimits

0x8187,	// (0x0002797f) form2_midp_wait_pane_g1

0x8190,	// (0x00027988) form2_midp_wait_pane_g2

0x8199,	// (0x00027991) form2_midp_wait_pane_g3

0x0002,

0xfb1c,	// (0x0002f314) form2_midp_wait_pane_g

0x0658,	// (0x0001fe50) list_highlight_pane_cp21_ParamLimits

0x81b9,	// (0x000279b1) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x81c8,	// (0x000279c0) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xbe84,	// (0x0002b67c) list_single_2graphic_im_pane_ParamLimits

0xbe84,	// (0x0002b67c) list_single_2graphic_im_pane

0xd4ec,	// (0x0002cce4) list_single_2graphic_im_pane_g1_ParamLimits

0xd4ec,	// (0x0002cce4) list_single_2graphic_im_pane_g1

0xd4fd,	// (0x0002ccf5) list_single_2graphic_im_pane_g2_ParamLimits

0xd4fd,	// (0x0002ccf5) list_single_2graphic_im_pane_g2

0xd509,	// (0x0002cd01) list_single_2graphic_im_pane_g3_ParamLimits

0xd509,	// (0x0002cd01) list_single_2graphic_im_pane_g3

0x0003,

0xfc71,	// (0x0002f469) list_single_2graphic_im_pane_g_ParamLimits

0xfc71,	// (0x0002f469) list_single_2graphic_im_pane_g

0xd51d,	// (0x0002cd15) list_single_2graphic_im_pane_t1_ParamLimits

0xd51d,	// (0x0002cd15) list_single_2graphic_im_pane_t1

0x8984,	// (0x0002817c) list_single_graphic_2heading_pane_fp_ParamLimits

0x8984,	// (0x0002817c) list_single_graphic_2heading_pane_fp

0xc0a0,	// (0x0002b898) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc0a0,	// (0x0002b898) list_single_graphic_2heading_pane_fp_g1

0x8998,	// (0x00028190) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x8998,	// (0x00028190) list_single_graphic_2heading_pane_fp_g2

0xc666,	// (0x0002be5e) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc666,	// (0x0002be5e) list_single_graphic_2heading_pane_fp_g3

0xd320,	// (0x0002cb18) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xd320,	// (0x0002cb18) list_single_graphic_2heading_pane_fp_g4

0x89a4,	// (0x0002819c) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x89a4,	// (0x0002819c) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb9f,	// (0x0002f397) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb9f,	// (0x0002f397) list_single_graphic_2heading_pane_fp_g

0xc1d3,	// (0x0002b9cb) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xc1d3,	// (0x0002b9cb) list_single_graphic_2heading_pane_fp_t1

0xc0d8,	// (0x0002b8d0) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc0d8,	// (0x0002b8d0) list_single_graphic_2heading_pane_fp_t2

0xc1e9,	// (0x0002b9e1) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xc1e9,	// (0x0002b9e1) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc7a,	// (0x0002f472) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc7a,	// (0x0002f472) list_single_graphic_2heading_pane_fp_t

0x83c6,	// (0x00027bbe) fep_hwr_write_pane_g5_ParamLimits

0x83c6,	// (0x00027bbe) fep_hwr_write_pane_g5

0x83d2,	// (0x00027bca) fep_hwr_write_pane_g6_ParamLimits

0x83d2,	// (0x00027bca) fep_hwr_write_pane_g6

0x8bea,	// (0x000283e2) eswt_shell_pane_ParamLimits

0x4b71,	// (0x00024369) bg_popup_window_pane_cp18_ParamLimits

0x5b1b,	// (0x00025313) heading_pane_cp70

0x8d07,	// (0x000284ff) popup_eswt_tasktip_window_t1_ParamLimits

0x753a,	// (0x00026d32) aid_touch_tab_arrow_left

0x7546,	// (0x00026d3e) aid_touch_tab_arrow_right

0x2b7c,	// (0x00022374) title_pane_g3_ParamLimits

0x2b7c,	// (0x00022374) title_pane_g3

0x127c,	// (0x00020a74) set_value_pane_g1

0x74ad,	// (0x00026ca5) popup_toolbar_trans_pane_ParamLimits

0x9c22,	// (0x0002941a) aid_size_cell_tb_trans_pane_ParamLimits

0x12ac,	// (0x00020aa4) bg_tb_trans_pane_ParamLimits

0x9c34,	// (0x0002942c) grid_tb_trans_pane_ParamLimits

0x07b7,	// (0x0001ffaf) cont_note_pane_ParamLimits

0x07b7,	// (0x0001ffaf) cont_note_pane

0x0a1e,	// (0x00020216) cont_snote2_single_text_pane_ParamLimits

0x0a1e,	// (0x00020216) cont_snote2_single_text_pane

0x0a1e,	// (0x00020216) cont_snote2_single_graphic_pane_ParamLimits

0x0a1e,	// (0x00020216) cont_snote2_single_graphic_pane

0x4fe9,	// (0x000247e1) cont_note_wait_pane_ParamLimits

0x4fe9,	// (0x000247e1) cont_note_wait_pane

0x4fe9,	// (0x000247e1) cont_note_image_pane_ParamLimits

0x4fe9,	// (0x000247e1) cont_note_image_pane

0x9c7a,	// (0x00029472) popup_note2_window_g1_ParamLimits

0x9c7a,	// (0x00029472) popup_note2_window_g1

0x9cab,	// (0x000294a3) popup_note2_window_t1_ParamLimits

0x9cab,	// (0x000294a3) popup_note2_window_t1

0x9cf0,	// (0x000294e8) popup_note2_window_t2_ParamLimits

0x9cf0,	// (0x000294e8) popup_note2_window_t2

0x9d35,	// (0x0002952d) popup_note2_window_t3_ParamLimits

0x9d35,	// (0x0002952d) popup_note2_window_t3

0x9d7a,	// (0x00029572) popup_note2_window_t4_ParamLimits

0x9d7a,	// (0x00029572) popup_note2_window_t4

0x083b,	// (0x00020033) popup_note2_window_t5_ParamLimits

0x083b,	// (0x00020033) popup_note2_window_t5

0x0004,

0xfc86,	// (0x0002f47e) popup_note2_window_t_ParamLimits

0xfc86,	// (0x0002f47e) popup_note2_window_t

0x9da9,	// (0x000295a1) popup_note2_image_window_g1_ParamLimits

0x9da9,	// (0x000295a1) popup_note2_image_window_g1

0x9db5,	// (0x000295ad) popup_note2_image_window_g2_ParamLimits

0x9db5,	// (0x000295ad) popup_note2_image_window_g2

0x0001,

0xfc91,	// (0x0002f489) popup_note2_image_window_g_ParamLimits

0xfc91,	// (0x0002f489) popup_note2_image_window_g

0x9dc7,	// (0x000295bf) popup_note2_image_window_t1_ParamLimits

0x9dc7,	// (0x000295bf) popup_note2_image_window_t1

0x9ddf,	// (0x000295d7) popup_note2_image_window_t2_ParamLimits

0x9ddf,	// (0x000295d7) popup_note2_image_window_t2

0x9df7,	// (0x000295ef) popup_note2_image_window_t3_ParamLimits

0x9df7,	// (0x000295ef) popup_note2_image_window_t3

0x0002,

0xfc96,	// (0x0002f48e) popup_note2_image_window_t_ParamLimits

0xfc96,	// (0x0002f48e) popup_note2_image_window_t

0x4ff7,	// (0x000247ef) popup_note2_wait_window_g1_ParamLimits

0x4ff7,	// (0x000247ef) popup_note2_wait_window_g1

0x5003,	// (0x000247fb) popup_note2_wait_window_g2_ParamLimits

0x5003,	// (0x000247fb) popup_note2_wait_window_g2

0x500f,	// (0x00024807) popup_note2_wait_window_g3_ParamLimits

0x500f,	// (0x00024807) popup_note2_wait_window_g3

0x0002,

0xf881,	// (0x0002f079) popup_note2_wait_window_g_ParamLimits

0xf881,	// (0x0002f079) popup_note2_wait_window_g

0x9e13,	// (0x0002960b) popup_note2_wait_window_t1_ParamLimits

0x9e13,	// (0x0002960b) popup_note2_wait_window_t1

0x9e31,	// (0x00029629) popup_note2_wait_window_t2_ParamLimits

0x9e31,	// (0x00029629) popup_note2_wait_window_t2

0x9e4f,	// (0x00029647) popup_note2_wait_window_t3_ParamLimits

0x9e4f,	// (0x00029647) popup_note2_wait_window_t3

0x9e61,	// (0x00029659) popup_note2_wait_window_t4_ParamLimits

0x9e61,	// (0x00029659) popup_note2_wait_window_t4

0x0003,

0xfc9d,	// (0x0002f495) popup_note2_wait_window_t_ParamLimits

0xfc9d,	// (0x0002f495) popup_note2_wait_window_t

0x9e73,	// (0x0002966b) wait_bar2_pane_ParamLimits

0x9e73,	// (0x0002966b) wait_bar2_pane

0x9e8b,	// (0x00029683) popup_snote2_single_text_window_g1_ParamLimits

0x9e8b,	// (0x00029683) popup_snote2_single_text_window_g1

0x9eb3,	// (0x000296ab) popup_snote2_single_text_window_t1_ParamLimits

0x9eb3,	// (0x000296ab) popup_snote2_single_text_window_t1

0x9eff,	// (0x000296f7) popup_snote2_single_text_window_t2_ParamLimits

0x9eff,	// (0x000296f7) popup_snote2_single_text_window_t2

0x9f4b,	// (0x00029743) popup_snote2_single_text_window_t3_ParamLimits

0x9f4b,	// (0x00029743) popup_snote2_single_text_window_t3

0x9f8c,	// (0x00029784) popup_snote2_single_text_window_t4_ParamLimits

0x9f8c,	// (0x00029784) popup_snote2_single_text_window_t4

0x9fc2,	// (0x000297ba) popup_snote2_single_text_window_t5_ParamLimits

0x9fc2,	// (0x000297ba) popup_snote2_single_text_window_t5

0x0004,

0xfca6,	// (0x0002f49e) popup_snote2_single_text_window_t_ParamLimits

0xfca6,	// (0x0002f49e) popup_snote2_single_text_window_t

0x9fed,	// (0x000297e5) popup_snote2_single_graphic_window_g1_ParamLimits

0x9fed,	// (0x000297e5) popup_snote2_single_graphic_window_g1

0xa015,	// (0x0002980d) popup_snote2_single_graphic_window_g2_ParamLimits

0xa015,	// (0x0002980d) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb1,	// (0x0002f4a9) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb1,	// (0x0002f4a9) popup_snote2_single_graphic_window_g

0xa03d,	// (0x00029835) popup_snote2_single_graphic_window_t1_ParamLimits

0xa03d,	// (0x00029835) popup_snote2_single_graphic_window_t1

0xa089,	// (0x00029881) popup_snote2_single_graphic_window_t2_ParamLimits

0xa089,	// (0x00029881) popup_snote2_single_graphic_window_t2

0x9f4b,	// (0x00029743) popup_snote2_single_graphic_window_t3_ParamLimits

0x9f4b,	// (0x00029743) popup_snote2_single_graphic_window_t3

0x9f8c,	// (0x00029784) popup_snote2_single_graphic_window_t4_ParamLimits

0x9f8c,	// (0x00029784) popup_snote2_single_graphic_window_t4

0x9fc2,	// (0x000297ba) popup_snote2_single_graphic_window_t5_ParamLimits

0x9fc2,	// (0x000297ba) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb6,	// (0x0002f4ae) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb6,	// (0x0002f4ae) popup_snote2_single_graphic_window_t

0x6eeb,	// (0x000266e3) clock_nsta_pane_cp2_t1

0x6eeb,	// (0x000266e3) clock_nsta_pane_cp2_t2

0x0001,

0xfadd,	// (0x0002f2d5) clock_nsta_pane_cp2_t

0xbb60,	// (0x0002b358) form_field_data_wide_pane_g1_ParamLimits

0x0bb0,	// (0x000203a8) form_field_data_wide_pane_g2_ParamLimits

0x0bb0,	// (0x000203a8) form_field_data_wide_pane_g2

0x12c6,	// (0x00020abe) form_field_data_wide_pane_g3_ParamLimits

0x12c6,	// (0x00020abe) form_field_data_wide_pane_g3

0x0002,

0xf6c4,	// (0x0002eebc) form_field_data_wide_pane_g_ParamLimits

0xf6c4,	// (0x0002eebc) form_field_data_wide_pane_g

0x7e8c,	// (0x00027684) grid_touch_3_pane_ParamLimits

0x7e8c,	// (0x00027684) grid_touch_3_pane

0xd54e,	// (0x0002cd46) cell_touch_3_pane_ParamLimits

0xd54e,	// (0x0002cd46) cell_touch_3_pane

0x832d,	// (0x00027b25) cell_touch_3_pane_g1

0x832d,	// (0x00027b25) cell_touch_3_pane_g2

0x0001,

0xfb62,	// (0x0002f35a) cell_touch_3_pane_g

0x086d,	// (0x00020065) cont_query_data_pane

0x0875,	// (0x0002006d) cont_query_data_pane_cp1

0xa0d5,	// (0x000298cd) button_value_adjust_pane_cp7

0xa0dd,	// (0x000298d5) query_popup_pane_cp3

0x17f5,	// (0x00020fed) bg_popup_sub_pane_cp22_ParamLimits

0xc8c1,	// (0x0002c0b9) navi_navi_volume_pane_cp2

0xc8d9,	// (0x0002c0d1) popup_side_volume_key_window_g2

0xc8e5,	// (0x0002c0dd) popup_side_volume_key_window_g3

0x0002,

0xf756,	// (0x0002ef4e) popup_side_volume_key_window_g

0xc8ff,	// (0x0002c0f7) popup_side_volume_key_window_t2

0x0001,

0xf75d,	// (0x0002ef55) popup_side_volume_key_window_t

0x1a5d,	// (0x00021255) popup_side_volume_key_window_ParamLimits

0xc699,	// (0x0002be91) list_double_graphic_pane_g4_ParamLimits

0xc699,	// (0x0002be91) list_double_graphic_pane_g4

0xbead,	// (0x0002b6a5) list_single_2heading_msg_pane_ParamLimits

0xbead,	// (0x0002b6a5) list_single_2heading_msg_pane

0xc207,	// (0x0002b9ff) list_single_2heading_msg_pane_g1_ParamLimits

0xc207,	// (0x0002b9ff) list_single_2heading_msg_pane_g1

0x1ada,	// (0x000212d2) list_single_2heading_msg_pane_g2_ParamLimits

0x1ada,	// (0x000212d2) list_single_2heading_msg_pane_g2

0xc213,	// (0x0002ba0b) list_single_2heading_msg_pane_g3_ParamLimits

0xc213,	// (0x0002ba0b) list_single_2heading_msg_pane_g3

0xc21f,	// (0x0002ba17) list_single_2heading_msg_pane_g4_ParamLimits

0xc21f,	// (0x0002ba17) list_single_2heading_msg_pane_g4

0x0003,

0xfcc1,	// (0x0002f4b9) list_single_2heading_msg_pane_g_ParamLimits

0xfcc1,	// (0x0002f4b9) list_single_2heading_msg_pane_g

0xc237,	// (0x0002ba2f) list_single_2heading_msg_pane_t1_ParamLimits

0xc237,	// (0x0002ba2f) list_single_2heading_msg_pane_t1

0xc25f,	// (0x0002ba57) list_single_2heading_msg_pane_t2_ParamLimits

0xc25f,	// (0x0002ba57) list_single_2heading_msg_pane_t2

0xc28e,	// (0x0002ba86) list_single_2heading_msg_pane_t3_ParamLimits

0xc28e,	// (0x0002ba86) list_single_2heading_msg_pane_t3

0xc2c7,	// (0x0002babf) list_single_2heading_msg_pane_t4_ParamLimits

0xc2c7,	// (0x0002babf) list_single_2heading_msg_pane_t4

0x0003,

0xfcca,	// (0x0002f4c2) list_single_2heading_msg_pane_t_ParamLimits

0xfcca,	// (0x0002f4c2) list_single_2heading_msg_pane_t

0x05fe,	// (0x0001fdf6) title_pane_g4_ParamLimits

0x05fe,	// (0x0001fdf6) title_pane_g4

0xc711,	// (0x0002bf09) title_pane_stacon_g3_ParamLimits

0xc711,	// (0x0002bf09) title_pane_stacon_g3

0x9c6e,	// (0x00029466) list_single_2graphic_im_pane_g4_ParamLimits

0x9c6e,	// (0x00029466) list_single_2graphic_im_pane_g4

0x5931,	// (0x00025129) popup_side_volume_key_window_cp

0x5d97,	// (0x0002558f) main_idle_act2_pane_t1

0xcc75,	// (0x0002c46d) toolbar_button_pane_g10

0x2e8a,	// (0x00022682) popup_toolbar_window_cp1

0x6edc,	// (0x000266d4) clock_nsta_pane_cp_t1

0x6edc,	// (0x000266d4) clock_nsta_pane_cp_t2

0x0001,

0xfad8,	// (0x0002f2d0) clock_nsta_pane_cp_t

0xc8c1,	// (0x0002c0b9) navi_navi_volume_pane_cp2_ParamLimits

0xc8cd,	// (0x0002c0c5) popup_side_volume_key_window_g1_ParamLimits

0xc8d9,	// (0x0002c0d1) popup_side_volume_key_window_g2_ParamLimits

0xc8e5,	// (0x0002c0dd) popup_side_volume_key_window_g3_ParamLimits

0xf756,	// (0x0002ef4e) popup_side_volume_key_window_g_ParamLimits

0xd0e3,	// (0x0002c8db) fep_hwr_aid_pane

0xa32b,	// (0x00029b23) bg_fep_hwr_top_pane_g4_ParamLimits

0x83a8,	// (0x00027ba0) fep_hwr_top_pane_g1_ParamLimits

0x8396,	// (0x00027b8e) fep_hwr_top_pane_g2_ParamLimits

0xd196,	// (0x0002c98e) fep_hwr_top_pane_g3_ParamLimits

0xfb2d,	// (0x0002f325) fep_hwr_top_pane_g_ParamLimits

0xd1ab,	// (0x0002c9a3) fep_hwr_top_text_pane_ParamLimits

0x5705,	// (0x00024efd) aid_touch_tab_arrow_arrow_2

0x56fc,	// (0x00024ef4) aid_touch_tab_arrow_left_2

0xd0f7,	// (0x0002c8ef) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xd12a,	// (0x0002c922) fep_hwr_prediction_pane

0x84e7,	// (0x00027cdf) fep_vkb_prediction_pane

0x85c9,	// (0x00027dc1) fep_vkb_side_pane_g3_ParamLimits

0x85c9,	// (0x00027dc1) fep_vkb_side_pane_g3

0x8575,	// (0x00027d6d) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x89f8,	// (0x000281f0) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x8a28,	// (0x00028220) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd7,	// (0x0002f3cf) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xa0ee,	// (0x000298e6) fep_hwr_prediction_pane_g1

0xd58f,	// (0x0002cd87) fep_hwr_prediction_pane_g2

0xd597,	// (0x0002cd8f) fep_hwr_prediction_pane_g3

0xd59f,	// (0x0002cd97) fep_hwr_prediction_pane_g4

0x0003,

0xfcd3,	// (0x0002f4cb) fep_hwr_prediction_pane_g

0xa0ee,	// (0x000298e6) fep_vkb_prediction_pane_g1

0xa0f8,	// (0x000298f0) fep_vkb_prediction_pane_g2

0xa100,	// (0x000298f8) fep_vkb_prediction_pane_g3

0xa108,	// (0x00029900) fep_vkb_prediction_pane_g4

0x0003,

0xfcdc,	// (0x0002f4d4) fep_vkb_prediction_pane_g

0x616a,	// (0x00025962) slider_set_pane_g3

0x617e,	// (0x00025976) slider_set_pane_g4

0x6196,	// (0x0002598e) slider_set_pane_g5

0x616a,	// (0x00025962) slider_set_pane_g6

0xcf0f,	// (0x0002c707) slider_set_pane_g7

0x5b9a,	// (0x00025392) slider_form_pane_g3

0x5ba3,	// (0x0002539b) slider_form_pane_g4

0x5bab,	// (0x000253a3) slider_form_pane_g5

0x5b9a,	// (0x00025392) slider_form_pane_g6

0x7cf1,	// (0x000274e9) slider_form_pane_g7

0x5fe0,	// (0x000257d8) slider_set_pane_vc_g3

0x5fe9,	// (0x000257e1) slider_set_pane_vc_g4

0x5ff2,	// (0x000257ea) slider_set_pane_vc_g5

0x5fe0,	// (0x000257d8) slider_set_pane_vc_g6

0x5ffb,	// (0x000257f3) slider_set_pane_vc_g7

0x5fe0,	// (0x000257d8) slider_form_pane_vc_g1

0x5fe9,	// (0x000257e1) slider_form_pane_vc_g2

0x5ff2,	// (0x000257ea) slider_form_pane_vc_g3

0x5fe0,	// (0x000257d8) slider_form_pane_vc_g4

0x6c9a,	// (0x00026492) slider_form_pane_vc_g5

0x0004,

0xfabe,	// (0x0002f2b6) slider_form_pane_vc_g

0x0568,	// (0x0001fd60) main_idle_act3_pane

0xa110,	// (0x00029908) ai3_links_pane

0xd5a7,	// (0x0002cd9f) popup_ai3_data_window_ParamLimits

0xd5a7,	// (0x0002cd9f) popup_ai3_data_window

0x0568,	// (0x0001fd60) grid_ai3_links_pane

0xd5bf,	// (0x0002cdb7) cell_ai3_links_pane_ParamLimits

0xd5bf,	// (0x0002cdb7) cell_ai3_links_pane

0xa119,	// (0x00029911) bg_popup_sub_pane_cp11

0xa126,	// (0x0002991e) cell_ai3_links_pane_g1

0x0568,	// (0x0001fd60) bg_popup_sub_pane_cp12

0xa14b,	// (0x00029943) heading_ai3_data_pane

0xa153,	// (0x0002994b) list_ai3_gene_pane

0xa15f,	// (0x00029957) popup_ai3_data_window_g1

0xa167,	// (0x0002995f) heading_ai3_data_pane_g1

0xa16f,	// (0x00029967) heading_ai3_data_pane_t1

0xa17d,	// (0x00029975) list_double_ai3_gene_pane_ParamLimits

0xa17d,	// (0x00029975) list_double_ai3_gene_pane

0xa18a,	// (0x00029982) list_single_ai3_gene_pane_ParamLimits

0xa18a,	// (0x00029982) list_single_ai3_gene_pane

0x82f2,	// (0x00027aea) list_highlight_pane_cp7_ParamLimits

0x82f2,	// (0x00027aea) list_highlight_pane_cp7

0xa197,	// (0x0002998f) list_single_a13_gene_pane_t1_ParamLimits

0xa197,	// (0x0002998f) list_single_a13_gene_pane_t1

0xa1ae,	// (0x000299a6) list_single_ai3_gene_pane_g1

0xa1b7,	// (0x000299af) list_single_ai3_gene_pane_g2

0x0001,

0xfce5,	// (0x0002f4dd) list_single_ai3_gene_pane_g

0xa1bf,	// (0x000299b7) list_double_ai3_gene_pane_g1_ParamLimits

0xa1bf,	// (0x000299b7) list_double_ai3_gene_pane_g1

0xa1cb,	// (0x000299c3) list_double_ai3_gene_pane_t1_ParamLimits

0xa1cb,	// (0x000299c3) list_double_ai3_gene_pane_t1

0xa1e7,	// (0x000299df) list_double_ai3_gene_pane_t2_ParamLimits

0xa1e7,	// (0x000299df) list_double_ai3_gene_pane_t2

0xa1fc,	// (0x000299f4) list_double_ai3_gene_pane_t3_ParamLimits

0xa1fc,	// (0x000299f4) list_double_ai3_gene_pane_t3

0x0002,

0xfcea,	// (0x0002f4e2) list_double_ai3_gene_pane_t_ParamLimits

0xfcea,	// (0x0002f4e2) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xc1ff,	// (0x0002b9f7) aid_size_min_col_2

0xd57b,	// (0x0002cd73) aid_size_min_msg_ParamLimits

0xd57b,	// (0x0002cd73) aid_size_min_msg

0x86c3,	// (0x00027ebb) fep_vkb_top_text_pane_g2_ParamLimits

0x86c3,	// (0x00027ebb) fep_vkb_top_text_pane_g2

0x0001,

0xfb5d,	// (0x0002f355) fep_vkb_top_text_pane_g_ParamLimits

0xfb5d,	// (0x0002f355) fep_vkb_top_text_pane_g

0x0568,	// (0x0001fd60) main_hc_apps_shell_pane

0xa219,	// (0x00029a11) grid_hc_apps_pane_ParamLimits

0xa219,	// (0x00029a11) grid_hc_apps_pane

0xa228,	// (0x00029a20) list_hc_apps_pane

0xa230,	// (0x00029a28) scroll_pane_cp37_ParamLimits

0xa230,	// (0x00029a28) scroll_pane_cp37

0xd5d3,	// (0x0002cdcb) cell_hc_apps_pane_ParamLimits

0xd5d3,	// (0x0002cdcb) cell_hc_apps_pane

0xd661,	// (0x0002ce59) cell_hc_apps_pane_g1_ParamLimits

0xd661,	// (0x0002ce59) cell_hc_apps_pane_g1

0xa23c,	// (0x00029a34) cell_hc_apps_pane_g2_ParamLimits

0xa23c,	// (0x00029a34) cell_hc_apps_pane_g2

0xa258,	// (0x00029a50) cell_hc_apps_pane_g3_ParamLimits

0xa258,	// (0x00029a50) cell_hc_apps_pane_g3

0x0002,

0xfcf1,	// (0x0002f4e9) cell_hc_apps_pane_g_ParamLimits

0xfcf1,	// (0x0002f4e9) cell_hc_apps_pane_g

0xd68e,	// (0x0002ce86) cell_hc_apps_pane_t1_ParamLimits

0xd68e,	// (0x0002ce86) cell_hc_apps_pane_t1

0x07b7,	// (0x0001ffaf) grid_highlight_pane_cp10_ParamLimits

0x07b7,	// (0x0001ffaf) grid_highlight_pane_cp10

0xd6cc,	// (0x0002cec4) list_single_hc_apps_pane_ParamLimits

0xd6cc,	// (0x0002cec4) list_single_hc_apps_pane

0xd6fc,	// (0x0002cef4) list_single_hc_apps_pane_g1

0xd715,	// (0x0002cf0d) list_single_hc_apps_pane_g2

0x0001,

0xfcf8,	// (0x0002f4f0) list_single_hc_apps_pane_g

0xd72e,	// (0x0002cf26) list_single_hc_apps_pane_g2_copy1

0xc2ec,	// (0x0002bae4) list_single_hc_apps_pane_t1

0x0658,	// (0x0001fe50) bg_set_opt_pane_cp_ParamLimits

0x0666,	// (0x0001fe5e) setting_slider_pane_t1_ParamLimits

0xc5bd,	// (0x0002bdb5) setting_slider_pane_t2_ParamLimits

0xc5d6,	// (0x0002bdce) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0002ed9a) setting_slider_pane_t_ParamLimits

0x067c,	// (0x0001fe74) slider_set_pane_ParamLimits

0xcb52,	// (0x0002c34a) control_pane_g5_ParamLimits

0xcb52,	// (0x0002c34a) control_pane_g5

0x5b62,	// (0x0002535a) slider_set_pane_g1_ParamLimits

0xcf03,	// (0x0002c6fb) slider_set_pane_g2_ParamLimits

0x616a,	// (0x00025962) slider_set_pane_g3_ParamLimits

0x617e,	// (0x00025976) slider_set_pane_g4_ParamLimits

0x6196,	// (0x0002598e) slider_set_pane_g5_ParamLimits

0x616a,	// (0x00025962) slider_set_pane_g6_ParamLimits

0xcf0f,	// (0x0002c707) slider_set_pane_g7_ParamLimits

0xf99d,	// (0x0002f195) slider_set_pane_g_ParamLimits

0x0658,	// (0x0001fe50) navi_icon_text_pane_ParamLimits

0x7514,	// (0x00026d0c) aid_fill_nsta_2_ParamLimits

0x753a,	// (0x00026d32) aid_touch_tab_arrow_left_ParamLimits

0x7546,	// (0x00026d3e) aid_touch_tab_arrow_right_ParamLimits

0x75b0,	// (0x00026da8) clock_nsta_pane_ParamLimits

0x56de,	// (0x00024ed6) navi_icon_pane_g1_ParamLimits

0x56ea,	// (0x00024ee2) navi_text_pane_t1_ParamLimits

0x7f8c,	// (0x00027784) navi_icon_text_pane_g1_ParamLimits

0x7f98,	// (0x00027790) navi_icon_text_pane_t1_ParamLimits

0xd6fc,	// (0x0002cef4) list_single_hc_apps_pane_g1_ParamLimits

0xd715,	// (0x0002cf0d) list_single_hc_apps_pane_g2_ParamLimits

0xfcf8,	// (0x0002f4f0) list_single_hc_apps_pane_g_ParamLimits

0xd72e,	// (0x0002cf26) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc2ec,	// (0x0002bae4) list_single_hc_apps_pane_t1_ParamLimits

0xc4ef,	// (0x0002bce7) popup_toolbar2_fixed_window_ParamLimits

0xc4ef,	// (0x0002bce7) popup_toolbar2_fixed_window

0x74a5,	// (0x00026c9d) popup_toolbar2_float_window

0x0568,	// (0x0001fd60) bg_popup_sub_pane_cp27

0xa27a,	// (0x00029a72) grid_toolbar2_float_pane

0x0568,	// (0x0001fd60) bg_popup_sub_pane_cp26

0xa27a,	// (0x00029a72) grid_toolbar2_fixed_pane

0xd74a,	// (0x0002cf42) cell_toolbar2_fixed_pane_ParamLimits

0xd74a,	// (0x0002cf42) cell_toolbar2_fixed_pane

0xd75b,	// (0x0002cf53) cell_toolbar2_fixed_pane_g1

0xa282,	// (0x00029a7a) toolbar2_fixed_button_pane

0x4a83,	// (0x0002427b) toolbar2_fixed_button_pane_g1

0x4a93,	// (0x0002428b) toolbar2_fixed_button_pane_g2

0x4a8b,	// (0x00024283) toolbar2_fixed_button_pane_g3

0x4aa3,	// (0x0002429b) toolbar2_fixed_button_pane_g4

0x4a9b,	// (0x00024293) toolbar2_fixed_button_pane_g5

0x4aab,	// (0x000242a3) toolbar2_fixed_button_pane_g6

0x4ab3,	// (0x000242ab) toolbar2_fixed_button_pane_g7

0x4ac3,	// (0x000242bb) toolbar2_fixed_button_pane_g8

0x4abb,	// (0x000242b3) toolbar2_fixed_button_pane_g9

0x0008,

0xf89f,	// (0x0002f097) toolbar2_fixed_button_pane_g

0xa28a,	// (0x00029a82) cell_toolbar2_float_pane_ParamLimits

0xa28a,	// (0x00029a82) cell_toolbar2_float_pane

0xa29b,	// (0x00029a93) cell_toolbar2_float_pane_g1

0xa282,	// (0x00029a7a) toolbar2_fixed_button_pane_cp

0x8456,	// (0x00027c4e) fep_vkb_accented_list_pane_ParamLimits

0x8456,	// (0x00027c4e) fep_vkb_accented_list_pane

0xd2ed,	// (0x0002cae5) bg_popup_fep_shadow_pane_g9

0x1c65,	// (0x0002145d) bg_popup_fep_shadow_pane_cp3

0x13ea,	// (0x00020be2) list_accented_list_pane

0xa2a4,	// (0x00029a9c) list_single_accented_list_pane_ParamLimits

0xa2a4,	// (0x00029a9c) list_single_accented_list_pane

0x1c65,	// (0x0002145d) list_highlight_pane_cp10

0xa2b5,	// (0x00029aad) list_single_accented_list_pane_t1

0x7413,	// (0x00026c0b) popup_slider_window_ParamLimits

0x7413,	// (0x00026c0b) popup_slider_window

0xa0e5,	// (0x000298dd) aid_indentation_list_msg

0xd7f6,	// (0x0002cfee) bg_popup_window_pane_cp19

0xa715,	// (0x00029f0d) popup_slider_window_g1

0xa731,	// (0x00029f29) popup_slider_window_g2

0xa74d,	// (0x00029f45) popup_slider_window_g3

0x0005,

0xfcfd,	// (0x0002f4f5) popup_slider_window_g

0xa769,	// (0x00029f61) popup_slider_window_t1

0xa7ad,	// (0x00029fa5) small_volume_slider_vertical_pane

0x832d,	// (0x00027b25) small_volume_slider_vertical_pane_g1

0x832d,	// (0x00027b25) small_volume_slider_vertical_pane_g2

0xa7c9,	// (0x00029fc1) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0f,	// (0x0002f507) small_volume_slider_vertical_pane_g

0xc36d,	// (0x0002bb65) area_side_right_pane_ParamLimits

0xc36d,	// (0x0002bb65) area_side_right_pane

0xd870,	// (0x0002d068) aid_size_side_button_ParamLimits

0xd870,	// (0x0002d068) aid_size_side_button

0xd884,	// (0x0002d07c) grid_sctrl_middle_pane_ParamLimits

0xd884,	// (0x0002d07c) grid_sctrl_middle_pane

0xd8a0,	// (0x0002d098) sctrl_sk_bottom_pane

0xd8b1,	// (0x0002d0a9) sctrl_sk_top_pane

0xd8c3,	// (0x0002d0bb) aid_touch_sctrl_top

0x07b7,	// (0x0001ffaf) bg_sctrl_sk_pane_ParamLimits

0x07b7,	// (0x0001ffaf) bg_sctrl_sk_pane

0xd8d0,	// (0x0002d0c8) sctrl_sk_top_pane_g1

0xd8dd,	// (0x0002d0d5) sctrl_sk_top_pane_t1

0xd8c3,	// (0x0002d0bb) aid_touch_sctrl_bottom

0x07b7,	// (0x0001ffaf) bg_sctrl_sk_pane_cp_ParamLimits

0x07b7,	// (0x0001ffaf) bg_sctrl_sk_pane_cp

0xd8f8,	// (0x0002d0f0) sctrl_sk_bottom_pane_g1

0xd8dd,	// (0x0002d0d5) sctrl_sk_bottom_pane_t1

0xd901,	// (0x0002d0f9) cell_sctrl_middle_pane_ParamLimits

0xd901,	// (0x0002d0f9) cell_sctrl_middle_pane

0xd91c,	// (0x0002d114) aid_touch_sctrl_middle_ParamLimits

0xd91c,	// (0x0002d114) aid_touch_sctrl_middle

0x12ac,	// (0x00020aa4) bg_sctrl_middle_pane_ParamLimits

0x12ac,	// (0x00020aa4) bg_sctrl_middle_pane

0x8575,	// (0x00027d6d) cell_sctrl_middle_pane_g1_ParamLimits

0x8575,	// (0x00027d6d) cell_sctrl_middle_pane_g1

0xd92d,	// (0x0002d125) cell_sctrl_middle_pane_g2_ParamLimits

0xd92d,	// (0x0002d125) cell_sctrl_middle_pane_g2

0x0001,

0xfd1b,	// (0x0002f513) cell_sctrl_middle_pane_g_ParamLimits

0xfd1b,	// (0x0002f513) cell_sctrl_middle_pane_g

0x4a83,	// (0x0002427b) bg_sctrl_middle_pane_g1

0x4a93,	// (0x0002428b) bg_sctrl_middle_pane_g2

0x4a8b,	// (0x00024283) bg_sctrl_middle_pane_g3

0x4aa3,	// (0x0002429b) bg_sctrl_middle_pane_g4

0x4a9b,	// (0x00024293) bg_sctrl_middle_pane_g5

0x4aab,	// (0x000242a3) bg_sctrl_middle_pane_g6

0x4ab3,	// (0x000242ab) bg_sctrl_middle_pane_g7

0x4ac3,	// (0x000242bb) bg_sctrl_middle_pane_g8

0x0007,

0xfd20,	// (0x0002f518) bg_sctrl_middle_pane_g

0x4abb,	// (0x000242b3) bg_sctrl_middle_pane_g8_copy1

0x4a83,	// (0x0002427b) bg_sctrl_sk_pane_g1

0x4a93,	// (0x0002428b) bg_sctrl_sk_pane_g2

0x4a8b,	// (0x00024283) bg_sctrl_sk_pane_g3

0x0008,

0xf89f,	// (0x0002f097) bg_sctrl_sk_pane_g

0x0b40,	// (0x00020338) aid_size_touch_scroll_bar

0x4aa3,	// (0x0002429b) bg_sctrl_sk_pane_g4

0x4a9b,	// (0x00024293) bg_sctrl_sk_pane_g5

0x4aab,	// (0x000242a3) bg_sctrl_sk_pane_g6

0x4ab3,	// (0x000242ab) bg_sctrl_sk_pane_g7

0x4ac3,	// (0x000242bb) bg_sctrl_sk_pane_g8

0x4abb,	// (0x000242b3) bg_sctrl_sk_pane_g9

0x47f9,	// (0x00023ff1) popup_fep_china_hwr2_fs_candidate_window

0x71cf,	// (0x000269c7) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x71cf,	// (0x000269c7) popup_fep_china_hwr2_fs_control_window

0x8575,	// (0x00027d6d) sctrl_sk_top_pane_g2

0x0001,

0xfd16,	// (0x0002f50e) sctrl_sk_top_pane_g

0xd943,	// (0x0002d13b) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd943,	// (0x0002d13b) aid_fep_china_hwr2_fs_cell

0xd954,	// (0x0002d14c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd954,	// (0x0002d14c) bg_popup_fep_shadow_pane_cp4

0xd96b,	// (0x0002d163) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd96b,	// (0x0002d163) bg_popup_fep_shadow_pane_cp5

0xd97d,	// (0x0002d175) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd97d,	// (0x0002d175) popup_fep_china_hwr2_fs_control_bar_grid

0xd98d,	// (0x0002d185) popup_fep_china_hwr2_fs_control_funtion_grid

0xa7d2,	// (0x00029fca) aid_fep_china_hwr2_fs_candi_cell

0x0568,	// (0x0001fd60) bg_popup_fep_shadow_pane_cp6

0xa7dc,	// (0x00029fd4) popup_fep_china_hwr2_fs_candidate_grid

0xd995,	// (0x0002d18d) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd995,	// (0x0002d18d) cell_fep_china_hwr2_fs_funtion_grid

0x832d,	// (0x00027b25) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xa7e4,	// (0x00029fdc) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xa7e4,	// (0x00029fdc) cell_fep_china_hwr2_fs_funtion_grid_g1

0xa7f2,	// (0x00029fea) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xa7f2,	// (0x00029fea) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd31,	// (0x0002f529) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd31,	// (0x0002f529) cell_fep_china_hwr2_fs_funtion_grid_g

0xd9ad,	// (0x0002d1a5) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd9ad,	// (0x0002d1a5) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd9c2,	// (0x0002d1ba) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd9c2,	// (0x0002d1ba) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd36,	// (0x0002f52e) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd36,	// (0x0002f52e) cell_fep_china_hwr2_fs_funtion_grid_t

0xa808,	// (0x0002a000) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xa810,	// (0x0002a008) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xa818,	// (0x0002a010) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd3b,	// (0x0002f533) popup_fep_china_hwr2_fs_control_bar_grid_g

0xa820,	// (0x0002a018) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xa820,	// (0x0002a018) cell_fep_china_hwr2_fs_candidate_grid

0xa839,	// (0x0002a031) popup_fep_china_hwr2_fs_candidate_grid_g20

0xa841,	// (0x0002a039) popup_fep_china_hwr2_fs_candidate_grid_g21

0x832d,	// (0x00027b25) cell_fep_china_hwr2_fs_candidate_grid_g1

0x832d,	// (0x00027b25) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb62,	// (0x0002f35a) cell_fep_china_hwr2_fs_candidate_grid_g

0xa849,	// (0x0002a041) cell_fep_china_hwr2_fs_candidate_grid_t1

0x48e8,	// (0x000240e0) clock_nsta_pane_cp_24_ParamLimits

0x48e8,	// (0x000240e0) clock_nsta_pane_cp_24

0x4945,	// (0x0002413d) indicator_nsta_pane_cp_24_ParamLimits

0x4945,	// (0x0002413d) indicator_nsta_pane_cp_24

0x55e9,	// (0x00024de1) heading_pane_g1

0x0001,

0xf904,	// (0x0002f0fc) heading_pane_g

0x7ddb,	// (0x000275d3) grid_sct_catagory_button_pane

0x5c69,	// (0x00025461) scroll_pane_cp5_ParamLimits

0x7fda,	// (0x000277d2) button_value_adjust_pane_cp5_ParamLimits

0x7fda,	// (0x000277d2) button_value_adjust_pane_cp5

0x80b7,	// (0x000278af) form2_midp_time_pane_ParamLimits

0xa857,	// (0x0002a04f) cell_sct_catagory_button_pane_ParamLimits

0xa857,	// (0x0002a04f) cell_sct_catagory_button_pane

0x82f2,	// (0x00027aea) bg_button_pane_cp01_ParamLimits

0x82f2,	// (0x00027aea) bg_button_pane_cp01

0x832d,	// (0x00027b25) cell_sct_catagory_button_pane_g1

0x7442,	// (0x00026c3a) popup_tb_extension_window

0xd9de,	// (0x0002d1d6) aid_size_cell_ext_ParamLimits

0xd9de,	// (0x0002d1d6) aid_size_cell_ext

0x07b7,	// (0x0001ffaf) bg_tb_trans_pane_cp1_ParamLimits

0x07b7,	// (0x0001ffaf) bg_tb_trans_pane_cp1

0xd9fe,	// (0x0002d1f6) grid_tb_ext_pane_ParamLimits

0xd9fe,	// (0x0002d1f6) grid_tb_ext_pane

0xda24,	// (0x0002d21c) cell_tb_ext_pane_ParamLimits

0xda24,	// (0x0002d21c) cell_tb_ext_pane

0xda39,	// (0x0002d231) cell_tb_ext_pane_g1_ParamLimits

0xda39,	// (0x0002d231) cell_tb_ext_pane_g1

0xa869,	// (0x0002a061) cell_tb_ext_pane_t1

0x07b7,	// (0x0001ffaf) list_highlight_pane_cp11_ParamLimits

0x07b7,	// (0x0001ffaf) list_highlight_pane_cp11

0xc50e,	// (0x0002bd06) popup_uni_indicator_window_ParamLimits

0xc50e,	// (0x0002bd06) popup_uni_indicator_window

0x12ac,	// (0x00020aa4) bg_popup_sub_pane_cp14

0xa884,	// (0x0002a07c) list_uniindi_pane

0xa890,	// (0x0002a088) uniindi_top_pane

0x07b7,	// (0x0001ffaf) bg_uniindi_top_pane

0xa8af,	// (0x0002a0a7) uniindi_top_pane_g1

0xa8c5,	// (0x0002a0bd) uniindi_top_pane_g2

0x0003,

0xfd42,	// (0x0002f53a) uniindi_top_pane_g

0xa8ef,	// (0x0002a0e7) uniindi_top_pane_t1

0xa919,	// (0x0002a111) list_single_uniindi_pane_ParamLimits

0xa919,	// (0x0002a111) list_single_uniindi_pane

0x832d,	// (0x00027b25) bg_uniindi_top_pane_g1

0xa92b,	// (0x0002a123) list_single_uniindi_pane_g1

0xa93e,	// (0x0002a136) list_single_uniindi_pane_t1

0x0568,	// (0x0001fd60) control_bg_pane

0xa963,	// (0x0002a15b) bg_sctrl_sk_pane_cp1

0xa96c,	// (0x0002a164) bg_sctrl_sk_pane_cp2

0xa975,	// (0x0002a16d) control_bg_pane_g1

0xa97e,	// (0x0002a176) control_bg_pane_g2

0x0001,

0xfd4b,	// (0x0002f543) control_bg_pane_g

0x6eb5,	// (0x000266ad) cell_indicator_nsta_pane_g1_ParamLimits

0x7ed0,	// (0x000276c8) cell_indicator_nsta_pane_g2_ParamLimits

0xfad3,	// (0x0002f2cb) cell_indicator_nsta_pane_g_ParamLimits

0xc076,	// (0x0002b86e) form2_midp_time_pane_t1_ParamLimits

0x0a1e,	// (0x00020216) main_idle_act4_pane_ParamLimits

0x0a1e,	// (0x00020216) main_idle_act4_pane

0x7442,	// (0x00026c3a) popup_tb_extension_window_ParamLimits

0xda18,	// (0x0002d210) tb_ext_find_pane_ParamLimits

0xda18,	// (0x0002d210) tb_ext_find_pane

0xa987,	// (0x0002a17f) ai_gene_pane_1_cp1

0x1cf9,	// (0x000214f1) ai_gene_pane_2_cp1

0xa98f,	// (0x0002a187) list_single_idle_plugin_calendar_pane

0xa998,	// (0x0002a190) list_single_idle_plugin_notification_pane

0xa9a1,	// (0x0002a199) list_single_idle_plugin_player_pane

0xda56,	// (0x0002d24e) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda56,	// (0x0002d24e) list_single_idle_plugin_shortcut_pane

0xda78,	// (0x0002d270) main_idle_act4_pane_t1

0xda8a,	// (0x0002d282) main_idle_act4_pane_t2

0x0001,

0xfd50,	// (0x0002f548) main_idle_act4_pane_t

0xda9c,	// (0x0002d294) middle_sk_idle_act4_pane_ParamLimits

0xda9c,	// (0x0002d294) middle_sk_idle_act4_pane

0xdab2,	// (0x0002d2aa) popup_clock_digital_analogue_window_cp2

0xdacc,	// (0x0002d2c4) shortcut_wheel_idle_act4_pane_ParamLimits

0xdacc,	// (0x0002d2c4) shortcut_wheel_idle_act4_pane

0x832d,	// (0x00027b25) shortcut_wheel_idle_act4_pane_g1

0x832d,	// (0x00027b25) shortcut_wheel_idle_act4_pane_g2

0x832d,	// (0x00027b25) shortcut_wheel_idle_act4_pane_g3

0x832d,	// (0x00027b25) shortcut_wheel_idle_act4_pane_g4

0x832d,	// (0x00027b25) shortcut_wheel_idle_act4_pane_g5

0xa9aa,	// (0x0002a1a2) shortcut_wheel_idle_act4_pane_g6

0xa9b2,	// (0x0002a1aa) shortcut_wheel_idle_act4_pane_g7

0xa9ba,	// (0x0002a1b2) shortcut_wheel_idle_act4_pane_g8

0xa9c2,	// (0x0002a1ba) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd55,	// (0x0002f54d) shortcut_wheel_idle_act4_pane_g

0x8575,	// (0x00027d6d) middle_sk_idle_act4_pane_g1_ParamLimits

0x8575,	// (0x00027d6d) middle_sk_idle_act4_pane_g1

0xdb3c,	// (0x0002d334) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb3c,	// (0x0002d334) middle_sk_idle_act4_pane_g2

0x0001,

0xfd78,	// (0x0002f570) middle_sk_idle_act4_pane_g_ParamLimits

0xfd78,	// (0x0002f570) middle_sk_idle_act4_pane_g

0xdb48,	// (0x0002d340) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb48,	// (0x0002d340) middle_sk_idle_act4_pane_t1

0xdb65,	// (0x0002d35d) grid_ai_shortcut_pane_ParamLimits

0xdb65,	// (0x0002d35d) grid_ai_shortcut_pane

0xdb7e,	// (0x0002d376) list_highlight_pane_cp16_ParamLimits

0xdb7e,	// (0x0002d376) list_highlight_pane_cp16

0xdb8b,	// (0x0002d383) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdb8b,	// (0x0002d383) list_single_idle_plugin_shortcut_pane_g1

0xdb97,	// (0x0002d38f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdb97,	// (0x0002d38f) list_single_idle_plugin_shortcut_pane_g2

0xdbaf,	// (0x0002d3a7) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbaf,	// (0x0002d3a7) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7d,	// (0x0002f575) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7d,	// (0x0002f575) list_single_idle_plugin_shortcut_pane_g

0xdbc2,	// (0x0002d3ba) cell_ai_shortcut_pane_ParamLimits

0xdbc2,	// (0x0002d3ba) cell_ai_shortcut_pane

0xdbe3,	// (0x0002d3db) cell_ai_shortcut_pane_g1_ParamLimits

0xdbe3,	// (0x0002d3db) cell_ai_shortcut_pane_g1

0xa987,	// (0x0002a17f) ai_gene_pane_1_cp2

0xa9ca,	// (0x0002a1c2) ai_gene_pane_2_cp2

0xa9d2,	// (0x0002a1ca) list_highlight_pane_cp15

0xa9db,	// (0x0002a1d3) list_single_idle_plugin_calendar_pane_g1

0xa9d2,	// (0x0002a1ca) list_highlight_pane_cp17

0xa9e3,	// (0x0002a1db) list_single_idle_plugin_calendar_pane_g1_copy1

0xa9eb,	// (0x0002a1e3) list_single_idle_plugin_player_pane_g1

0x5e23,	// (0x0002561b) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd84,	// (0x0002f57c) list_single_idle_plugin_player_pane_g

0xa9f3,	// (0x0002a1eb) list_single_idle_plugin_player_pane_t1

0xaa01,	// (0x0002a1f9) list_single_idle_plugin_player_pane_t2

0xaa0f,	// (0x0002a207) list_single_idle_plugin_player_pane_t3

0xaa1d,	// (0x0002a215) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd89,	// (0x0002f581) list_single_idle_plugin_player_pane_t

0xaa2b,	// (0x0002a223) wait_bar_pane_cp15

0xaa33,	// (0x0002a22b) grid_ai_notification_pane

0x5e23,	// (0x0002561b) list_single_idle_plugin_notification_pane_g1

0xdc05,	// (0x0002d3fd) cell_ai_notification_pane_ParamLimits

0xdc05,	// (0x0002d3fd) cell_ai_notification_pane

0xaa3c,	// (0x0002a234) cell_ai_notification_pane_g1

0xaa44,	// (0x0002a23c) cell_ai_notification_pane_t1

0xdc12,	// (0x0002d40a) tb_ext_find_button_pane

0xdc1a,	// (0x0002d412) tb_ext_find_pane_g1

0xdc22,	// (0x0002d41a) tb_ext_find_pane_t1

0x17ba,	// (0x00020fb2) tb_ext_find_button_pane_g1

0xaa52,	// (0x0002a24a) tb_ext_find_button_pane_g2

0x0001,

0xfd92,	// (0x0002f58a) tb_ext_find_button_pane_g

0xda78,	// (0x0002d270) main_idle_act4_pane_t1_ParamLimits

0xda8a,	// (0x0002d282) main_idle_act4_pane_t2_ParamLimits

0xfd50,	// (0x0002f548) main_idle_act4_pane_t_ParamLimits

0xdab2,	// (0x0002d2aa) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdac0,	// (0x0002d2b8) sat_plugin_idle_act4_pane_ParamLimits

0xdac0,	// (0x0002d2b8) sat_plugin_idle_act4_pane

0xdc30,	// (0x0002d428) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdc30,	// (0x0002d428) sat_plugin_idle_act4_pane_t1

0xdc43,	// (0x0002d43b) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdc43,	// (0x0002d43b) sat_plugin_idle_act4_pane_t2

0xdc56,	// (0x0002d44e) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdc56,	// (0x0002d44e) sat_plugin_idle_act4_pane_t3

0xdc69,	// (0x0002d461) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdc69,	// (0x0002d461) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd97,	// (0x0002f58f) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd97,	// (0x0002f58f) sat_plugin_idle_act4_pane_t

0xc46f,	// (0x0002bc67) popup_battery_window_ParamLimits

0xc46f,	// (0x0002bc67) popup_battery_window

0x07b7,	// (0x0001ffaf) bg_popup_sub_pane_cp25_ParamLimits

0x07b7,	// (0x0001ffaf) bg_popup_sub_pane_cp25

0xaa5b,	// (0x0002a253) popup_battery_window_g1_ParamLimits

0xaa5b,	// (0x0002a253) popup_battery_window_g1

0xaa67,	// (0x0002a25f) popup_battery_window_t1_ParamLimits

0xaa67,	// (0x0002a25f) popup_battery_window_t1

0xaa79,	// (0x0002a271) popup_battery_window_t2_ParamLimits

0xaa79,	// (0x0002a271) popup_battery_window_t2

0x0001,

0xfda0,	// (0x0002f598) popup_battery_window_t_ParamLimits

0xfda0,	// (0x0002f598) popup_battery_window_t

0x340f,	// (0x00022c07) midp_canvas_pane_ParamLimits

0x346b,	// (0x00022c63) midp_keypad_pane_ParamLimits

0x346b,	// (0x00022c63) midp_keypad_pane

0x47c5,	// (0x00023fbd) main_midp_pane_ParamLimits

0x6efa,	// (0x000266f2) signal_pane_g2_cp_ParamLimits

0xdc7c,	// (0x0002d474) aid_size_cell_midp_keypad_ParamLimits

0xdc7c,	// (0x0002d474) aid_size_cell_midp_keypad

0xdc96,	// (0x0002d48e) midp_keyp_game_grid_pane_ParamLimits

0xdc96,	// (0x0002d48e) midp_keyp_game_grid_pane

0xdcb0,	// (0x0002d4a8) midp_keyp_rocker_pane_ParamLimits

0xdcb0,	// (0x0002d4a8) midp_keyp_rocker_pane

0xdcdd,	// (0x0002d4d5) midp_keyp_sk_left_pane_ParamLimits

0xdcdd,	// (0x0002d4d5) midp_keyp_sk_left_pane

0xdd35,	// (0x0002d52d) midp_keyp_sk_right_pane_ParamLimits

0xdd35,	// (0x0002d52d) midp_keyp_sk_right_pane

0x0568,	// (0x0001fd60) bg_button_pane_cp03

0xdd87,	// (0x0002d57f) midp_keyp_sk_left_pane_g1

0x0568,	// (0x0001fd60) bg_button_pane_cp04

0xdd87,	// (0x0002d57f) midp_keyp_sk_right_pane_g1

0x832d,	// (0x00027b25) midp_keyp_rocker_pane_g1

0xdd90,	// (0x0002d588) keyp_game_cell_pane_ParamLimits

0xdd90,	// (0x0002d588) keyp_game_cell_pane

0x0568,	// (0x0001fd60) bg_button_pane_cp02

0xdda1,	// (0x0002d599) keyp_game_cell_pane_g1

0xc4a5,	// (0x0002bc9d) popup_fep_vkb2_window_ParamLimits

0xc4a5,	// (0x0002bc9d) popup_fep_vkb2_window

0xddb8,	// (0x0002d5b0) aid_size_cell_vkb2_ParamLimits

0xddb8,	// (0x0002d5b0) aid_size_cell_vkb2

0xde0c,	// (0x0002d604) popup_fep_vkb2_window_g1_ParamLimits

0xde0c,	// (0x0002d604) popup_fep_vkb2_window_g1

0xde54,	// (0x0002d64c) vkb2_area_bottom_pane_ParamLimits

0xde54,	// (0x0002d64c) vkb2_area_bottom_pane

0xde8c,	// (0x0002d684) vkb2_area_keypad_pane_ParamLimits

0xde8c,	// (0x0002d684) vkb2_area_keypad_pane

0xdec4,	// (0x0002d6bc) vkb2_area_top_pane_ParamLimits

0xdec4,	// (0x0002d6bc) vkb2_area_top_pane

0xdf34,	// (0x0002d72c) vkb2_top_entry_pane_ParamLimits

0xdf34,	// (0x0002d72c) vkb2_top_entry_pane

0xdf5e,	// (0x0002d756) vkb2_top_grid_left_pane_ParamLimits

0xdf5e,	// (0x0002d756) vkb2_top_grid_left_pane

0xdf7c,	// (0x0002d774) vkb2_top_grid_right_pane_ParamLimits

0xdf7c,	// (0x0002d774) vkb2_top_grid_right_pane

0xdf9a,	// (0x0002d792) vkb2_cell_keypad_pane_ParamLimits

0xdf9a,	// (0x0002d792) vkb2_cell_keypad_pane

0xe04b,	// (0x0002d843) vkb2_area_bottom_grid_pane_ParamLimits

0xe04b,	// (0x0002d843) vkb2_area_bottom_grid_pane

0xe06f,	// (0x0002d867) vkb2_area_bottom_pane_g1_ParamLimits

0xe06f,	// (0x0002d867) vkb2_area_bottom_pane_g1

0xe093,	// (0x0002d88b) vkb2_area_bottom_pane_g2_ParamLimits

0xe093,	// (0x0002d88b) vkb2_area_bottom_pane_g2

0xe0c1,	// (0x0002d8b9) vkb2_area_bottom_pane_g3_ParamLimits

0xe0c1,	// (0x0002d8b9) vkb2_area_bottom_pane_g3

0x0002,

0xfda5,	// (0x0002f59d) vkb2_area_bottom_pane_g_ParamLimits

0xfda5,	// (0x0002f59d) vkb2_area_bottom_pane_g

0xe112,	// (0x0002d90a) vkb2_top_cell_left_pane_ParamLimits

0xe112,	// (0x0002d90a) vkb2_top_cell_left_pane

0xe132,	// (0x0002d92a) vkb2_top_entry_pane_g1_ParamLimits

0xe132,	// (0x0002d92a) vkb2_top_entry_pane_g1

0xe140,	// (0x0002d938) vkb2_top_entry_pane_t1_ParamLimits

0xe140,	// (0x0002d938) vkb2_top_entry_pane_t1

0xaa9e,	// (0x0002a296) vkb2_top_entry_pane_t2_ParamLimits

0xaa9e,	// (0x0002a296) vkb2_top_entry_pane_t2

0xaad0,	// (0x0002a2c8) vkb2_top_entry_pane_t3_ParamLimits

0xaad0,	// (0x0002a2c8) vkb2_top_entry_pane_t3

0x0002,

0xfdac,	// (0x0002f5a4) vkb2_top_entry_pane_t_ParamLimits

0xfdac,	// (0x0002f5a4) vkb2_top_entry_pane_t

0xe19f,	// (0x0002d997) vkb2_top_grid_right_pane_g1_ParamLimits

0xe19f,	// (0x0002d997) vkb2_top_grid_right_pane_g1

0xe1b5,	// (0x0002d9ad) vkb2_top_grid_right_pane_g2_ParamLimits

0xe1b5,	// (0x0002d9ad) vkb2_top_grid_right_pane_g2

0xe1cd,	// (0x0002d9c5) vkb2_top_grid_right_pane_g3_ParamLimits

0xe1cd,	// (0x0002d9c5) vkb2_top_grid_right_pane_g3

0xe1e5,	// (0x0002d9dd) vkb2_top_grid_right_pane_g4_ParamLimits

0xe1e5,	// (0x0002d9dd) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb3,	// (0x0002f5ab) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb3,	// (0x0002f5ab) vkb2_top_grid_right_pane_g

0xe1fb,	// (0x0002d9f3) vkb2_top_cell_left_pane_g1

0xe212,	// (0x0002da0a) vkb2_cell_keypad_pane_g1_ParamLimits

0xe212,	// (0x0002da0a) vkb2_cell_keypad_pane_g1

0xaae6,	// (0x0002a2de) vkb2_cell_keypad_pane_t1_ParamLimits

0xaae6,	// (0x0002a2de) vkb2_cell_keypad_pane_t1

0xe220,	// (0x0002da18) vkb2_cell_bottom_grid_pane_ParamLimits

0xe220,	// (0x0002da18) vkb2_cell_bottom_grid_pane

0xe259,	// (0x0002da51) vkb2_cell_bottom_grid_pane_g1

0xdae0,	// (0x0002d2d8) aid_call2_pane_cp02

0xdae8,	// (0x0002d2e0) aid_call_pane_cp02

0xdaf0,	// (0x0002d2e8) clock_digital_number_pane_cp10

0xdaf8,	// (0x0002d2f0) clock_digital_number_pane_cp11

0xdb00,	// (0x0002d2f8) clock_digital_number_pane_cp12

0xdb08,	// (0x0002d300) clock_digital_number_pane_cp13

0xdb10,	// (0x0002d308) clock_digital_separator_pane_cp10

0x17ba,	// (0x00020fb2) popup_clock_digital_analogue_window_cp2_g1

0x17ba,	// (0x00020fb2) popup_clock_digital_analogue_window_cp2_g2

0xdb18,	// (0x0002d310) popup_clock_digital_analogue_window_cp2_g3

0x17ba,	// (0x00020fb2) popup_clock_digital_analogue_window_cp2_g4

0xdb18,	// (0x0002d310) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd68,	// (0x0002f560) popup_clock_digital_analogue_window_cp2_g

0xdb20,	// (0x0002d318) popup_clock_digital_analogue_window_cp2_t1

0xdb2e,	// (0x0002d326) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd73,	// (0x0002f56b) popup_clock_digital_analogue_window_cp2_t

0x832d,	// (0x00027b25) clock_digital_number_pane_cp10_g1

0x832d,	// (0x00027b25) clock_digital_number_pane_cp10_g2

0x0001,

0xfb62,	// (0x0002f35a) clock_digital_number_pane_cp10_g

0x832d,	// (0x00027b25) clock_digital_separator_pane_cp10_g1

0x832d,	// (0x00027b25) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb62,	// (0x0002f35a) clock_digital_separator_pane_cp10_g

0xa8d1,	// (0x0002a0c9) uniindi_top_pane_g3

0xa8e2,	// (0x0002a0da) uniindi_top_pane_g4

0xe005,	// (0x0002d7fd) vkb2_row_keypad_pane_ParamLimits

0xe005,	// (0x0002d7fd) vkb2_row_keypad_pane

0xe275,	// (0x0002da6d) vkb2_cell_t_keypad_pane_ParamLimits

0xe275,	// (0x0002da6d) vkb2_cell_t_keypad_pane

0xe282,	// (0x0002da7a) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xe282,	// (0x0002da7a) vkb2_cell_t_keypad_pane_cp08

0xe292,	// (0x0002da8a) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xe292,	// (0x0002da8a) vkb2_cell_t_keypad_pane_cp09

0xe2a3,	// (0x0002da9b) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xe2a3,	// (0x0002da9b) vkb2_cell_t_keypad_pane_cp01

0xe2b3,	// (0x0002daab) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xe2b3,	// (0x0002daab) vkb2_cell_t_keypad_pane_cp02

0xe2c3,	// (0x0002dabb) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xe2c3,	// (0x0002dabb) vkb2_cell_t_keypad_pane_cp03

0xe2d3,	// (0x0002dacb) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xe2d3,	// (0x0002dacb) vkb2_cell_t_keypad_pane_cp04

0xe2e3,	// (0x0002dadb) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xe2e3,	// (0x0002dadb) vkb2_cell_t_keypad_pane_cp05

0xe2f3,	// (0x0002daeb) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xe2f3,	// (0x0002daeb) vkb2_cell_t_keypad_pane_cp06

0xe303,	// (0x0002dafb) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xe303,	// (0x0002dafb) vkb2_cell_t_keypad_pane_cp07

0xe313,	// (0x0002db0b) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xe313,	// (0x0002db0b) vkb2_cell_t_keypad_pane_cp10

0x8575,	// (0x00027d6d) vkb2_cell_t_keypad_pane_g1

0xaafd,	// (0x0002a2f5) vkb2_cell_t_keypad_pane_t1

0x0568,	// (0x0001fd60) popup_grid_graphic2_window

0xe328,	// (0x0002db20) aid_size_cell_graphic2_ParamLimits

0xe328,	// (0x0002db20) aid_size_cell_graphic2

0x8388,	// (0x00027b80) bg_popup_window_pane_cp21_ParamLimits

0x8388,	// (0x00027b80) bg_popup_window_pane_cp21

0xe354,	// (0x0002db4c) graphic2_pages_pane_ParamLimits

0xe354,	// (0x0002db4c) graphic2_pages_pane

0xe38e,	// (0x0002db86) grid_graphic2_control_pane_ParamLimits

0xe38e,	// (0x0002db86) grid_graphic2_control_pane

0xe3b6,	// (0x0002dbae) grid_graphic2_pane_ParamLimits

0xe3b6,	// (0x0002dbae) grid_graphic2_pane

0xe406,	// (0x0002dbfe) cell_graphic2_pane

0x0568,	// (0x0001fd60) main_comp_mode_pane

0xa153,	// (0x0002994b) list_ai3_gene_pane_ParamLimits

0xd7f6,	// (0x0002cfee) bg_popup_window_pane_cp19_ParamLimits

0xa6bd,	// (0x00029eb5) bg_touch_area_indi_pane_ParamLimits

0xa6bd,	// (0x00029eb5) bg_touch_area_indi_pane

0xa6d3,	// (0x00029ecb) bg_touch_area_indi_pane_cp01_ParamLimits

0xa6d3,	// (0x00029ecb) bg_touch_area_indi_pane_cp01

0xa6e9,	// (0x00029ee1) bg_touch_area_indi_pane_cp02_ParamLimits

0xa6e9,	// (0x00029ee1) bg_touch_area_indi_pane_cp02

0xa6ff,	// (0x00029ef7) bg_touch_area_indi_pane_cp03_ParamLimits

0xa6ff,	// (0x00029ef7) bg_touch_area_indi_pane_cp03

0xa715,	// (0x00029f0d) popup_slider_window_g1_ParamLimits

0xa731,	// (0x00029f29) popup_slider_window_g2_ParamLimits

0xa74d,	// (0x00029f45) popup_slider_window_g3_ParamLimits

0xfcfd,	// (0x0002f4f5) popup_slider_window_g_ParamLimits

0xa769,	// (0x00029f61) popup_slider_window_t1_ParamLimits

0xa7ad,	// (0x00029fa5) small_volume_slider_vertical_pane_ParamLimits

0xe406,	// (0x0002dbfe) cell_graphic2_pane_ParamLimits

0xe443,	// (0x0002dc3b) bg_button_pane_cp10_ParamLimits

0xe443,	// (0x0002dc3b) bg_button_pane_cp10

0xe454,	// (0x0002dc4c) bg_button_pane_cp11_ParamLimits

0xe454,	// (0x0002dc4c) bg_button_pane_cp11

0xe465,	// (0x0002dc5d) graphic2_pages_pane_g1_ParamLimits

0xe465,	// (0x0002dc5d) graphic2_pages_pane_g1

0xe478,	// (0x0002dc70) graphic2_pages_pane_g2_ParamLimits

0xe478,	// (0x0002dc70) graphic2_pages_pane_g2

0x0001,

0xfdc1,	// (0x0002f5b9) graphic2_pages_pane_g_ParamLimits

0xfdc1,	// (0x0002f5b9) graphic2_pages_pane_g

0xe48e,	// (0x0002dc86) graphic2_pages_pane_t1_ParamLimits

0xe48e,	// (0x0002dc86) graphic2_pages_pane_t1

0xe4a4,	// (0x0002dc9c) cell_graphic2_control_pane_ParamLimits

0xe4a4,	// (0x0002dc9c) cell_graphic2_control_pane

0xe4be,	// (0x0002dcb6) cell_graphic2_pane_g1_ParamLimits

0xe4be,	// (0x0002dcb6) cell_graphic2_pane_g1

0xe4cb,	// (0x0002dcc3) cell_graphic2_pane_g2_ParamLimits

0xe4cb,	// (0x0002dcc3) cell_graphic2_pane_g2

0xe4d8,	// (0x0002dcd0) cell_graphic2_pane_g3_ParamLimits

0xe4d8,	// (0x0002dcd0) cell_graphic2_pane_g3

0xe4e5,	// (0x0002dcdd) cell_graphic2_pane_g4_ParamLimits

0xe4e5,	// (0x0002dcdd) cell_graphic2_pane_g4

0xe4f2,	// (0x0002dcea) cell_graphic2_pane_g5_ParamLimits

0xe4f2,	// (0x0002dcea) cell_graphic2_pane_g5

0x0004,

0xfdc6,	// (0x0002f5be) cell_graphic2_pane_g_ParamLimits

0xfdc6,	// (0x0002f5be) cell_graphic2_pane_g

0xe50d,	// (0x0002dd05) cell_graphic2_pane_t1_ParamLimits

0xe50d,	// (0x0002dd05) cell_graphic2_pane_t1

0x4b71,	// (0x00024369) grid_highlight_pane_cp11_ParamLimits

0x4b71,	// (0x00024369) grid_highlight_pane_cp11

0x12ac,	// (0x00020aa4) bg_button_pane_cp05

0xe523,	// (0x0002dd1b) cell_graphic2_control_pane_g1

0x832d,	// (0x00027b25) bg_touch_area_indi_pane_g1

0xab0f,	// (0x0002a307) aid_cmod_rocker_key_size

0xab19,	// (0x0002a311) aid_cmode_itu_key_size

0xab23,	// (0x0002a31b) main_cmode_video_pane

0xab2b,	// (0x0002a323) main_comp_mode_itu_pane

0xab35,	// (0x0002a32d) main_comp_mode_rocker_pane

0xab3d,	// (0x0002a335) cell_cmode_rocker_pane_ParamLimits

0xab3d,	// (0x0002a335) cell_cmode_rocker_pane

0xab4f,	// (0x0002a347) cell_cmode_itu_pane_ParamLimits

0xab4f,	// (0x0002a347) cell_cmode_itu_pane

0x12ac,	// (0x00020aa4) bg_button_pane_cp06_ParamLimits

0x12ac,	// (0x00020aa4) bg_button_pane_cp06

0x8575,	// (0x00027d6d) cell_cmode_rocker_pane_g1_ParamLimits

0x8575,	// (0x00027d6d) cell_cmode_rocker_pane_g1

0xa7e4,	// (0x00029fdc) cell_cmode_rocker_pane_g2_ParamLimits

0xa7e4,	// (0x00029fdc) cell_cmode_rocker_pane_g2

0x0001,

0xfdd1,	// (0x0002f5c9) cell_cmode_rocker_pane_g_ParamLimits

0xfdd1,	// (0x0002f5c9) cell_cmode_rocker_pane_g

0x0568,	// (0x0001fd60) bg_button_pane_cp07

0xab64,	// (0x0002a35c) cell_cmode_itu_pane_g1

0xab6d,	// (0x0002a365) cell_cmode_itu_pane_t1

0xab7b,	// (0x0002a373) cell_cmode_itu_pane_t2

0x0001,

0xfdd6,	// (0x0002f5ce) cell_cmode_itu_pane_t

0xa953,	// (0x0002a14b) aid_touch_ctrl_left

0xa95b,	// (0x0002a153) aid_touch_ctrl_right

0x0568,	// (0x0001fd60) compa_mode_pane

0xe530,	// (0x0002dd28) aid_cmod_rocker_key_size_cp

0xe53a,	// (0x0002dd32) aid_cmode_itu_key_size_cp

0xab89,	// (0x0002a381) compa_mode_pane_g1

0xab91,	// (0x0002a389) compa_mode_pane_g2

0xab99,	// (0x0002a391) compa_mode_pane_g3

0x0002,

0xfddb,	// (0x0002f5d3) compa_mode_pane_g

0xe544,	// (0x0002dd3c) main_comp_mode_itu_pane_cp

0xe54c,	// (0x0002dd44) main_comp_mode_rocker_pane_cp

0xe554,	// (0x0002dd4c) cell_cmode_itu_pane_cp_ParamLimits

0xe554,	// (0x0002dd4c) cell_cmode_itu_pane_cp

0xe569,	// (0x0002dd61) cell_cmode_rocker_pane_cp_ParamLimits

0xe569,	// (0x0002dd61) cell_cmode_rocker_pane_cp

0x12ac,	// (0x00020aa4) bg_button_pane_cp06_cp_ParamLimits

0x12ac,	// (0x00020aa4) bg_button_pane_cp06_cp

0x8575,	// (0x00027d6d) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x8575,	// (0x00027d6d) cell_cmode_rocker_pane_g1_cp

0x832d,	// (0x00027b25) cell_cmode_rocker_pane_g2_cp

0x0568,	// (0x0001fd60) bg_button_pane_cp07_cp

0xe57b,	// (0x0002dd73) cell_cmode_itu_pane_g1_cp

0xe584,	// (0x0002dd7c) cell_cmode_itu_pane_t1_cp

0xe592,	// (0x0002dd8a) cell_cmode_itu_pane_t2_cp

0x7ce9,	// (0x000274e1) settings_code_pane_cp2

0x0658,	// (0x0001fe50) bg_popup_window_pane_cp3_ParamLimits

0x098f,	// (0x00020187) heading_pane_cp3_ParamLimits

0x099b,	// (0x00020193) listscroll_popup_graphic_pane_ParamLimits

0xd0e3,	// (0x0002c8db) fep_hwr_aid_pane_ParamLimits

0xd8c3,	// (0x0002d0bb) aid_touch_sctrl_top_ParamLimits

0xd8d0,	// (0x0002d0c8) sctrl_sk_top_pane_g1_ParamLimits

0x8575,	// (0x00027d6d) sctrl_sk_top_pane_g2_ParamLimits

0xfd16,	// (0x0002f50e) sctrl_sk_top_pane_g_ParamLimits

0xd8dd,	// (0x0002d0d5) sctrl_sk_top_pane_t1_ParamLimits

0xd8c3,	// (0x0002d0bb) aid_touch_sctrl_bottom_ParamLimits

0xd8dd,	// (0x0002d0d5) sctrl_sk_bottom_pane_t1_ParamLimits

0xa89d,	// (0x0002a095) aid_area_touch_clock

0xdefc,	// (0x0002d6f4) aid_vkb2_area_top_pane_cell_ParamLimits

0xdefc,	// (0x0002d6f4) aid_vkb2_area_top_pane_cell

0xe027,	// (0x0002d81f) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe027,	// (0x0002d81f) aid_vkb2_area_bottom_pane_cell

0xaa96,	// (0x0002a28e) popup_char_count_window

0xaba1,	// (0x0002a399) popup_char_count_window_g1

0xabaa,	// (0x0002a3a2) popup_char_count_window_g2

0xabb3,	// (0x0002a3ab) popup_char_count_window_g3

0x0002,

0xfde2,	// (0x0002f5da) popup_char_count_window_g

0xabbc,	// (0x0002a3b4) popup_char_count_window_t1

0xddea,	// (0x0002d5e2) popup_fep_char_preview_window_ParamLimits

0xddea,	// (0x0002d5e2) popup_fep_char_preview_window

0xdf1a,	// (0x0002d712) vkb2_top_candi_pane_ParamLimits

0xdf1a,	// (0x0002d712) vkb2_top_candi_pane

0xe5a0,	// (0x0002dd98) cell_vkb2_top_candi_pane_ParamLimits

0xe5a0,	// (0x0002dd98) cell_vkb2_top_candi_pane

0x4fe9,	// (0x000247e1) bg_popup_fep_char_preview_window_ParamLimits

0x4fe9,	// (0x000247e1) bg_popup_fep_char_preview_window

0xe5d9,	// (0x0002ddd1) popup_fep_char_preview_window_t1_ParamLimits

0xe5d9,	// (0x0002ddd1) popup_fep_char_preview_window_t1

0xabfb,	// (0x0002a3f3) bg_popup_fep_char_preview_window_g1

0xabf3,	// (0x0002a3eb) bg_popup_fep_char_preview_window_g2

0xabeb,	// (0x0002a3e3) bg_popup_fep_char_preview_window_g3

0xac1b,	// (0x0002a413) bg_popup_fep_char_preview_window_g4

0xac13,	// (0x0002a40b) bg_popup_fep_char_preview_window_g5

0xe613,	// (0x0002de0b) bg_popup_fep_char_preview_window_g6

0xac0b,	// (0x0002a403) bg_popup_fep_char_preview_window_g7

0xac03,	// (0x0002a3fb) bg_popup_fep_char_preview_window_g8

0xac23,	// (0x0002a41b) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde9,	// (0x0002f5e1) bg_popup_fep_char_preview_window_g

0x8575,	// (0x00027d6d) cell_vkb2_top_candi_pane_g1_ParamLimits

0x8575,	// (0x00027d6d) cell_vkb2_top_candi_pane_g1

0x8912,	// (0x0002810a) cell_vkb2_top_candi_pane_g2_ParamLimits

0x8912,	// (0x0002810a) cell_vkb2_top_candi_pane_g2

0x8933,	// (0x0002812b) cell_vkb2_top_candi_pane_g3_ParamLimits

0x8933,	// (0x0002812b) cell_vkb2_top_candi_pane_g3

0xe61b,	// (0x0002de13) cell_vkb2_top_candi_pane_g4_ParamLimits

0xe61b,	// (0x0002de13) cell_vkb2_top_candi_pane_g4

0xabca,	// (0x0002a3c2) cell_vkb2_top_candi_pane_g5_ParamLimits

0xabca,	// (0x0002a3c2) cell_vkb2_top_candi_pane_g5

0xa7e4,	// (0x00029fdc) cell_vkb2_top_candi_pane_g6_ParamLimits

0xa7e4,	// (0x00029fdc) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfc,	// (0x0002f5f4) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfc,	// (0x0002f5f4) cell_vkb2_top_candi_pane_g

0xe63c,	// (0x0002de34) cell_vkb2_top_candi_pane_t1

0x6156,	// (0x0002594e) aid_size_touch_slider_mark_ParamLimits

0x6156,	// (0x0002594e) aid_size_touch_slider_mark

0xe382,	// (0x0002db7a) grid_graphic2_catg_pane_ParamLimits

0xe382,	// (0x0002db7a) grid_graphic2_catg_pane

0xe3e2,	// (0x0002dbda) popup_grid_graphic2_window_t1_ParamLimits

0xe3e2,	// (0x0002dbda) popup_grid_graphic2_window_t1

0xe3f4,	// (0x0002dbec) popup_grid_graphic2_window_t2_ParamLimits

0xe3f4,	// (0x0002dbec) popup_grid_graphic2_window_t2

0x0001,

0xfdbc,	// (0x0002f5b4) popup_grid_graphic2_window_t_ParamLimits

0xfdbc,	// (0x0002f5b4) popup_grid_graphic2_window_t

0x12ac,	// (0x00020aa4) bg_button_pane_cp05_ParamLimits

0xe523,	// (0x0002dd1b) cell_graphic2_control_pane_g1_ParamLimits

0xe652,	// (0x0002de4a) cell_graphic2_catg_pane_ParamLimits

0xe652,	// (0x0002de4a) cell_graphic2_catg_pane

0x0568,	// (0x0001fd60) bg_button_pane_cp12

0xe664,	// (0x0002de5c) cell_graphic2_catg_pane_g1

0xa869,	// (0x0002a061) cell_tb_ext_pane_t1_ParamLimits

0xe172,	// (0x0002d96a) vkb2_top_cell_right_narrow_pane_ParamLimits

0xe172,	// (0x0002d96a) vkb2_top_cell_right_narrow_pane

0xe18a,	// (0x0002d982) vkb2_top_cell_right_wide_pane_ParamLimits

0xe18a,	// (0x0002d982) vkb2_top_cell_right_wide_pane

0x8388,	// (0x00027b80) bg_vkb2_func_pane_ParamLimits

0x8388,	// (0x00027b80) bg_vkb2_func_pane

0xe1fb,	// (0x0002d9f3) vkb2_top_cell_left_pane_g1_ParamLimits

0x8388,	// (0x00027b80) bg_vkb2_fuc_pane_cp03_ParamLimits

0x8388,	// (0x00027b80) bg_vkb2_fuc_pane_cp03

0xe259,	// (0x0002da51) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4a93,	// (0x0002428b) bg_vkb2_func_pane_g1

0x4a8b,	// (0x00024283) bg_vkb2_func_pane_g2

0x4a9b,	// (0x00024293) bg_vkb2_func_pane_g3

0x4aa3,	// (0x0002429b) bg_vkb2_func_pane_g4

0x4aab,	// (0x000242a3) bg_vkb2_func_pane_g5

0x4ab3,	// (0x000242ab) bg_vkb2_func_pane_g6

0x4ac3,	// (0x000242bb) bg_vkb2_func_pane_g7

0x4abb,	// (0x000242b3) bg_vkb2_func_pane_g8

0x4a83,	// (0x0002427b) bg_vkb2_func_pane_g9

0x0008,

0xfe09,	// (0x0002f601) bg_vkb2_func_pane_g

0x8388,	// (0x00027b80) bg_vkb2_fuc_pane_cp01_ParamLimits

0x8388,	// (0x00027b80) bg_vkb2_fuc_pane_cp01

0xe1fb,	// (0x0002d9f3) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xe1fb,	// (0x0002d9f3) vkb2_top_cell_right_wide_pane_g1

0x8388,	// (0x00027b80) bg_vkb2_fuc_pane_cp02_ParamLimits

0x8388,	// (0x00027b80) bg_vkb2_fuc_pane_cp02

0xe259,	// (0x0002da51) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xe259,	// (0x0002da51) vkb2_top_cell_right_narrow_pane_g1

0xd788,	// (0x0002cf80) aid_touch_area_decrease_ParamLimits

0xd788,	// (0x0002cf80) aid_touch_area_decrease

0xd7a0,	// (0x0002cf98) aid_touch_area_increase_ParamLimits

0xd7a0,	// (0x0002cf98) aid_touch_area_increase

0xd7ac,	// (0x0002cfa4) aid_touch_area_mute_ParamLimits

0xd7ac,	// (0x0002cfa4) aid_touch_area_mute

0xd7c8,	// (0x0002cfc0) aid_touch_area_slider_ParamLimits

0xd7c8,	// (0x0002cfc0) aid_touch_area_slider

0xd802,	// (0x0002cffa) popup_slider_window_g4_ParamLimits

0xd802,	// (0x0002cffa) popup_slider_window_g4

0xd80e,	// (0x0002d006) popup_slider_window_g5_ParamLimits

0xd80e,	// (0x0002d006) popup_slider_window_g5

0xd830,	// (0x0002d028) popup_slider_window_g6_ParamLimits

0xd830,	// (0x0002d028) popup_slider_window_g6

0xa795,	// (0x00029f8d) popup_slider_window_t2_ParamLimits

0xa795,	// (0x00029f8d) popup_slider_window_t2

0x0001,

0xfd0a,	// (0x0002f502) popup_slider_window_t_ParamLimits

0xfd0a,	// (0x0002f502) popup_slider_window_t

0xd842,	// (0x0002d03a) slider_pane_ParamLimits

0xd842,	// (0x0002d03a) slider_pane

0xac2b,	// (0x0002a423) slider_pane_g1_ParamLimits

0xac2b,	// (0x0002a423) slider_pane_g1

0xac3f,	// (0x0002a437) slider_pane_g2_ParamLimits

0xac3f,	// (0x0002a437) slider_pane_g2

0xac55,	// (0x0002a44d) slider_pane_g3_ParamLimits

0xac55,	// (0x0002a44d) slider_pane_g3

0x0003,

0xfe1c,	// (0x0002f614) slider_pane_g_ParamLimits

0xfe1c,	// (0x0002f614) slider_pane_g

0x7492,	// (0x00026c8a) popup_tb_float_extension_window_ParamLimits

0x7492,	// (0x00026c8a) popup_tb_float_extension_window

0xac81,	// (0x0002a479) aid_size_cell_tb_float_ext

0x0568,	// (0x0001fd60) bg_popup_sub_window_cp28

0xac8c,	// (0x0002a484) grid_tb_float_ext_pane

0xac94,	// (0x0002a48c) cell_tb_float_ext_pane_ParamLimits

0xac94,	// (0x0002a48c) cell_tb_float_ext_pane

0xacac,	// (0x0002a4a4) cell_tb_float_ext_pane_g1

0xacb5,	// (0x0002a4ad) grid_highlight_pane_cp12

0xd210,	// (0x0002ca08) cell_last_hwr_side_pane_ParamLimits

0xd210,	// (0x0002ca08) cell_last_hwr_side_pane

0x832d,	// (0x00027b25) cell_last_hwr_side_pane_g1

0xacbe,	// (0x0002a4b6) cell_last_hwr_side_pane_g2

0x0001,

0xfe25,	// (0x0002f61d) cell_last_hwr_side_pane_g

0xe0ef,	// (0x0002d8e7) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe0ef,	// (0x0002d8e7) vkb2_area_bottom_space_btn_pane

0x8575,	// (0x00027d6d) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xaafd,	// (0x0002a2f5) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xe63c,	// (0x0002de34) cell_vkb2_top_candi_pane_t1_ParamLimits

0xe66d,	// (0x0002de65) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xe66d,	// (0x0002de65) vkb2_area_bottom_space_btn_pane_g1

0xe6a3,	// (0x0002de9b) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xe6a3,	// (0x0002de9b) vkb2_area_bottom_space_btn_pane_g2

0xe6d9,	// (0x0002ded1) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xe6d9,	// (0x0002ded1) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2a,	// (0x0002f622) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2a,	// (0x0002f622) vkb2_area_bottom_space_btn_pane_g

0xd184,	// (0x0002c97c) cel_fep_hwr_func_pane_ParamLimits

0xd184,	// (0x0002c97c) cel_fep_hwr_func_pane

0xd1c0,	// (0x0002c9b8) cell_hwr_side_button_pane_ParamLimits

0xd1c0,	// (0x0002c9b8) cell_hwr_side_button_pane

0xa89d,	// (0x0002a095) aid_area_touch_clock_ParamLimits

0x07b7,	// (0x0001ffaf) bg_uniindi_top_pane_ParamLimits

0xa8af,	// (0x0002a0a7) uniindi_top_pane_g1_ParamLimits

0xa8c5,	// (0x0002a0bd) uniindi_top_pane_g2_ParamLimits

0xa8d1,	// (0x0002a0c9) uniindi_top_pane_g3_ParamLimits

0xa8e2,	// (0x0002a0da) uniindi_top_pane_g4_ParamLimits

0xfd42,	// (0x0002f53a) uniindi_top_pane_g_ParamLimits

0xa8ef,	// (0x0002a0e7) uniindi_top_pane_t1_ParamLimits

0x07b7,	// (0x0001ffaf) bg_vkb2_func_pane_cp01_ParamLimits

0x07b7,	// (0x0001ffaf) bg_vkb2_func_pane_cp01

0xe71f,	// (0x0002df17) cel_fep_hwr_func_pane_g1_ParamLimits

0xe71f,	// (0x0002df17) cel_fep_hwr_func_pane_g1

0x07b7,	// (0x0001ffaf) bg_vkb2_func_pane_cp02_ParamLimits

0x07b7,	// (0x0001ffaf) bg_vkb2_func_pane_cp02

0xe71f,	// (0x0002df17) cell_hwr_side_button_pane_g1_ParamLimits

0xe71f,	// (0x0002df17) cell_hwr_side_button_pane_g1

0x49a7,	// (0x0002419f) status_pane_g4_ParamLimits

0x49a7,	// (0x0002419f) status_pane_g4

0x49bf,	// (0x000241b7) status_pane_t1

0x811f,	// (0x00027917) form2_midp_gauge_slider_cont_pane

0x8127,	// (0x0002791f) form2_midp_gauge_slider_pane_t1_ParamLimits

0x8139,	// (0x00027931) form2_midp_gauge_slider_pane_t2_ParamLimits

0x814b,	// (0x00027943) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb15,	// (0x0002f30d) form2_midp_gauge_slider_pane_t_ParamLimits

0x815d,	// (0x00027955) form2_midp_slider_pane_ParamLimits

0xddaa,	// (0x0002d5a2) aid_size_cell_func_vkb2_ParamLimits

0xddaa,	// (0x0002d5a2) aid_size_cell_func_vkb2

0xac6d,	// (0x0002a465) slider_pane_g4_ParamLimits

0xac6d,	// (0x0002a465) slider_pane_g4

0xe72d,	// (0x0002df25) form2_midp_gauge_slider_pane_t2_cp01

0xe73b,	// (0x0002df33) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xe73b,	// (0x0002df33) form2_midp_gauge_slider_pane_t3_cp01

0xe758,	// (0x0002df50) form2_midp_slider_pane_cp01

0x0568,	// (0x0001fd60) navi_smil_pane

0xe78c,	// (0x0002df84) navi_smil_pane_g1

0xe794,	// (0x0002df8c) navi_smil_pane_t1

0xe761,	// (0x0002df59) form2_midp_slider_pane_g1

0xe76a,	// (0x0002df62) form2_midp_slider_pane_g2

0xe772,	// (0x0002df6a) form2_midp_slider_pane_g3

0xe761,	// (0x0002df59) form2_midp_slider_pane_g4

0xe77a,	// (0x0002df72) form2_midp_slider_pane_g5

0x0004,

0xfe33,	// (0x0002f62b) form2_midp_slider_pane_g

0xe70f,	// (0x0002df07) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xe70f,	// (0x0002df07) vkb2_area_bottom_space_btn_pane_g4

0x75d3,	// (0x00026dcb) lc0_navi_pane_ParamLimits

0x75d3,	// (0x00026dcb) lc0_navi_pane

0x7649,	// (0x00026e41) lc0_stat_indi_pane_ParamLimits

0x7649,	// (0x00026e41) lc0_stat_indi_pane

0x7660,	// (0x00026e58) ls0_title_pane_ParamLimits

0x7660,	// (0x00026e58) ls0_title_pane

0x12ac,	// (0x00020aa4) bg_popup_sub_pane_cp14_ParamLimits

0xa884,	// (0x0002a07c) list_uniindi_pane_ParamLimits

0xa890,	// (0x0002a088) uniindi_top_pane_ParamLimits

0xa92b,	// (0x0002a123) list_single_uniindi_pane_g1_ParamLimits

0xa93e,	// (0x0002a136) list_single_uniindi_pane_t1_ParamLimits

0xe7a2,	// (0x0002df9a) lc0_stat_clock_pane_ParamLimits

0xe7a2,	// (0x0002df9a) lc0_stat_clock_pane

0xe7af,	// (0x0002dfa7) lc0_stat_indi_pane_g1_ParamLimits

0xe7af,	// (0x0002dfa7) lc0_stat_indi_pane_g1

0xe7bc,	// (0x0002dfb4) lc0_stat_indi_pane_g2_ParamLimits

0xe7bc,	// (0x0002dfb4) lc0_stat_indi_pane_g2

0x0001,

0xfe3e,	// (0x0002f636) lc0_stat_indi_pane_g_ParamLimits

0xfe3e,	// (0x0002f636) lc0_stat_indi_pane_g

0xe7c9,	// (0x0002dfc1) lc0_uni_indicator_pane_ParamLimits

0xe7c9,	// (0x0002dfc1) lc0_uni_indicator_pane

0xe7d6,	// (0x0002dfce) ls0_title_pane_g1_ParamLimits

0xe7d6,	// (0x0002dfce) ls0_title_pane_g1

0xe7ea,	// (0x0002dfe2) ls0_title_pane_t1_ParamLimits

0xe7ea,	// (0x0002dfe2) ls0_title_pane_t1

0xe820,	// (0x0002e018) lc0_uni_indicator_pane_g1_ParamLimits

0xe820,	// (0x0002e018) lc0_uni_indicator_pane_g1

0xe832,	// (0x0002e02a) lc0_stat_clock_pane_t1

0x0568,	// (0x0001fd60) main_ai5_pane

0xe840,	// (0x0002e038) ai5_sk_pane_ParamLimits

0xe840,	// (0x0002e038) ai5_sk_pane

0xe84d,	// (0x0002e045) cell_ai5_widget_pane_ParamLimits

0xe84d,	// (0x0002e045) cell_ai5_widget_pane

0xe8a8,	// (0x0002e0a0) aid_size_cell_widget_grid

0xe8bc,	// (0x0002e0b4) bg_ai5_widget_pane_ParamLimits

0xe8bc,	// (0x0002e0b4) bg_ai5_widget_pane

0xe8e4,	// (0x0002e0dc) cell_ai5_widget_pane_g2

0xe8f4,	// (0x0002e0ec) cell_ai5_widget_pane_g3

0xe908,	// (0x0002e100) cell_ai5_widget_pane_g4

0xe914,	// (0x0002e10c) cell_ai5_widget_pane_g5

0xe920,	// (0x0002e118) cell_ai5_widget_pane_g6

0xe92c,	// (0x0002e124) cell_ai5_widget_pane_g7

0xe974,	// (0x0002e16c) cell_ai5_widget_pane_t1_ParamLimits

0xe974,	// (0x0002e16c) cell_ai5_widget_pane_t1

0xe991,	// (0x0002e189) cell_ai5_widget_pane_t2_ParamLimits

0xe991,	// (0x0002e189) cell_ai5_widget_pane_t2

0xe9a9,	// (0x0002e1a1) cell_ai5_widget_pane_t3_ParamLimits

0xe9a9,	// (0x0002e1a1) cell_ai5_widget_pane_t3

0xe9c1,	// (0x0002e1b9) cell_ai5_widget_pane_t4_ParamLimits

0xe9c1,	// (0x0002e1b9) cell_ai5_widget_pane_t4

0xe9db,	// (0x0002e1d3) cell_ai5_widget_pane_t5_ParamLimits

0xe9db,	// (0x0002e1d3) cell_ai5_widget_pane_t5

0xe9fa,	// (0x0002e1f2) cell_ai5_widget_pane_t6_ParamLimits

0xe9fa,	// (0x0002e1f2) cell_ai5_widget_pane_t6

0xea0c,	// (0x0002e204) cell_ai5_widget_pane_t7_ParamLimits

0xea0c,	// (0x0002e204) cell_ai5_widget_pane_t7

0xea25,	// (0x0002e21d) cell_ai5_widget_pane_t8_ParamLimits

0xea25,	// (0x0002e21d) cell_ai5_widget_pane_t8

0x0009,

0xfe58,	// (0x0002f650) cell_ai5_widget_pane_t_ParamLimits

0xfe58,	// (0x0002f650) cell_ai5_widget_pane_t

0xea6d,	// (0x0002e265) grid_ai5_widget_pane

0x12ac,	// (0x00020aa4) highlight_cell_ai5_widget_pane_ParamLimits

0x12ac,	// (0x00020aa4) highlight_cell_ai5_widget_pane

0xea83,	// (0x0002e27b) ai5_sk_left_pane

0xea8d,	// (0x0002e285) ai5_sk_middle_pane

0xea97,	// (0x0002e28f) ai5_sk_right_pane

0xeaa1,	// (0x0002e299) bg_ai5_widget_pane_g1_ParamLimits

0xeaa1,	// (0x0002e299) bg_ai5_widget_pane_g1

0xeaad,	// (0x0002e2a5) bg_ai5_widget_pane_g2_ParamLimits

0xeaad,	// (0x0002e2a5) bg_ai5_widget_pane_g2

0xeab9,	// (0x0002e2b1) bg_ai5_widget_pane_g3_ParamLimits

0xeab9,	// (0x0002e2b1) bg_ai5_widget_pane_g3

0xeac5,	// (0x0002e2bd) bg_ai5_widget_pane_g4_ParamLimits

0xeac5,	// (0x0002e2bd) bg_ai5_widget_pane_g4

0xead1,	// (0x0002e2c9) bg_ai5_widget_pane_g5_ParamLimits

0xead1,	// (0x0002e2c9) bg_ai5_widget_pane_g5

0xeadd,	// (0x0002e2d5) bg_ai5_widget_pane_g6_ParamLimits

0xeadd,	// (0x0002e2d5) bg_ai5_widget_pane_g6

0xeae9,	// (0x0002e2e1) bg_ai5_widget_pane_g7_ParamLimits

0xeae9,	// (0x0002e2e1) bg_ai5_widget_pane_g7

0xeaf5,	// (0x0002e2ed) bg_ai5_widget_pane_g8_ParamLimits

0xeaf5,	// (0x0002e2ed) bg_ai5_widget_pane_g8

0xeb01,	// (0x0002e2f9) bg_ai5_widget_pane_g9_ParamLimits

0xeb01,	// (0x0002e2f9) bg_ai5_widget_pane_g9

0x0008,

0xfe6d,	// (0x0002f665) bg_ai5_widget_pane_g_ParamLimits

0xfe6d,	// (0x0002f665) bg_ai5_widget_pane_g

0xeb29,	// (0x0002e321) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb29,	// (0x0002e321) cell_shortcut_ai5_widget_pane

0x06c0,	// (0x0001feb8) bg_cell_shortcut_ai5_widget_pane

0xeb3a,	// (0x0002e332) cell_grid_ai5_widget_pane_g1

0xeb43,	// (0x0002e33b) highlight_cell_shortcut_ai5_widget_pane

0x4a8b,	// (0x00024283) ai5_sk_left_pane_g1

0xeb4b,	// (0x0002e343) ai5_sk_left_pane_g2

0xeb53,	// (0x0002e34b) ai5_sk_left_pane_g3

0xeb5b,	// (0x0002e353) ai5_sk_left_pane_g4

0x0003,

0xfe80,	// (0x0002f678) ai5_sk_left_pane_g

0xeb63,	// (0x0002e35b) ai5_sk_left_pane_t1

0x4a93,	// (0x0002428b) ai5_sk_right_pane_g1

0xeb71,	// (0x0002e369) ai5_sk_right_pane_g2

0xeb79,	// (0x0002e371) ai5_sk_right_pane_g3

0xeb81,	// (0x0002e379) ai5_sk_right_pane_g4

0x0003,

0xfe89,	// (0x0002f681) ai5_sk_right_pane_g

0xeb89,	// (0x0002e381) ai5_sk_right_pane_t1

0x4a93,	// (0x0002428b) ai5_sk_middle_pane_g1

0x4a8b,	// (0x00024283) ai5_sk_middle_pane_g2

0x4aab,	// (0x000242a3) ai5_sk_middle_pane_g3

0xeb79,	// (0x0002e371) ai5_sk_middle_pane_g4

0xeb53,	// (0x0002e34b) ai5_sk_middle_pane_g5

0xeb97,	// (0x0002e38f) ai5_sk_middle_pane_g6

0xeb9f,	// (0x0002e397) ai5_sk_middle_pane_g7

0x0006,

0xfe92,	// (0x0002f68a) ai5_sk_middle_pane_g

0x7520,	// (0x00026d18) aid_touch_area_size_lc0_ParamLimits

0x7520,	// (0x00026d18) aid_touch_area_size_lc0

0xd303,	// (0x0002cafb) cell_hwr_candidate_pane_t1_ParamLimits

0x48dc,	// (0x000240d4) aid_touch_navi_pane

0x78e2,	// (0x000270da) status_dt_navi_pane_ParamLimits

0x78e2,	// (0x000270da) status_dt_navi_pane

0x78ef,	// (0x000270e7) status_dt_sta_pane_ParamLimits

0x78ef,	// (0x000270e7) status_dt_sta_pane

0xeba7,	// (0x0002e39f) dt_sta_controll_pane

0xebb4,	// (0x0002e3ac) dt_sta_indi_pane

0xebc5,	// (0x0002e3bd) dt_sta_title_pane

0x07b7,	// (0x0001ffaf) bg_dt_sta_indi_pane_ParamLimits

0x07b7,	// (0x0001ffaf) bg_dt_sta_indi_pane

0xebd8,	// (0x0002e3d0) dt_sta_battery_pane

0xebe0,	// (0x0002e3d8) dt_sta_indi_pane_g1

0xebe9,	// (0x0002e3e1) dt_sta_indi_pane_g2

0xebf2,	// (0x0002e3ea) dt_sta_indi_pane_g3

0x0002,

0xfea1,	// (0x0002f699) dt_sta_indi_pane_g

0xebfb,	// (0x0002e3f3) dt_sta_signal_pane

0x12ac,	// (0x00020aa4) bg_dt_sta_title_pane_ParamLimits

0x12ac,	// (0x00020aa4) bg_dt_sta_title_pane

0xec04,	// (0x0002e3fc) dt_sta_title_pane_g1

0xec0c,	// (0x0002e404) dt_sta_title_pane_t1_ParamLimits

0xec0c,	// (0x0002e404) dt_sta_title_pane_t1

0x0568,	// (0x0001fd60) bg_dt_sta_control_pane

0xec21,	// (0x0002e419) dt_sta_controll_pane_g1

0xec2a,	// (0x0002e422) bg_dt_sta_title_pane_g1

0xec33,	// (0x0002e42b) bg_dt_sta_title_pane_g2

0xec3c,	// (0x0002e434) bg_dt_sta_title_pane_g3

0x0002,

0xfea8,	// (0x0002f6a0) bg_dt_sta_title_pane_g

0x832d,	// (0x00027b25) bg_dt_sta_indi_pane_g1

0xec45,	// (0x0002e43d) dt_sta_signal_pane_g1

0xec4d,	// (0x0002e445) dt_sta_signal_pane_g2

0x0001,

0xfeaf,	// (0x0002f6a7) dt_sta_signal_pane_g

0xec55,	// (0x0002e44d) dt_sta_battery_pane_g1

0xec5e,	// (0x0002e456) dt_sta_battery_pane_t1

0x832d,	// (0x00027b25) bg_dt_sta_control_pane_g1

0x1835,	// (0x0002102d) fep_china_uni_eep_pane

0x183d,	// (0x00021035) fep_china_uni_entry_pane_ParamLimits

0x184d,	// (0x00021045) popup_fep_china_uni_window_g1_ParamLimits

0x185d,	// (0x00021055) popup_fep_china_uni_window_g2_ParamLimits

0x185d,	// (0x00021055) popup_fep_china_uni_window_g2

0x0001,

0xf762,	// (0x0002ef5a) popup_fep_china_uni_window_g_ParamLimits

0xf762,	// (0x0002ef5a) popup_fep_china_uni_window_g

0xec6d,	// (0x0002e465) fep_china_uni_eep_pane_g1

0xec75,	// (0x0002e46d) fep_china_uni_eep_pane_t1

0xe783,	// (0x0002df7b) aid_touch_area_size_smil_player

0x497a,	// (0x00024172) lc0_clock_pane

0x49b3,	// (0x000241ab) status_pane_g5_ParamLimits

0x49b3,	// (0x000241ab) status_pane_g5

0x7242,	// (0x00026a3a) popup_keymap_window

0x4993,	// (0x0002418b) status_icon_pane

0xe8f4,	// (0x0002e0ec) cell_ai5_widget_pane_g3_ParamLimits

0xe908,	// (0x0002e100) cell_ai5_widget_pane_g4_ParamLimits

0xe914,	// (0x0002e10c) cell_ai5_widget_pane_g5_ParamLimits

0xe938,	// (0x0002e130) cell_ai5_widget_pane_g8_ParamLimits

0xe938,	// (0x0002e130) cell_ai5_widget_pane_g8

0xe94c,	// (0x0002e144) cell_ai5_widget_pane_g9_ParamLimits

0xe94c,	// (0x0002e144) cell_ai5_widget_pane_g9

0xe960,	// (0x0002e158) cell_ai5_widget_pane_g10_ParamLimits

0xe960,	// (0x0002e158) cell_ai5_widget_pane_g10

0xec84,	// (0x0002e47c) status_icon_pane_g1

0x0568,	// (0x0001fd60) bg_popup_sub_pane_cp13

0xec8c,	// (0x0002e484) popup_keymap_window_t1

0x35d7,	// (0x00022dcf) control_pane_g6_ParamLimits

0x35d7,	// (0x00022dcf) control_pane_g6

0x35ca,	// (0x00022dc2) control_pane_g7_ParamLimits

0x35ca,	// (0x00022dc2) control_pane_g7

0x35bd,	// (0x00022db5) control_pane_g8_ParamLimits

0x35bd,	// (0x00022db5) control_pane_g8

0xeba7,	// (0x0002e39f) dt_sta_controll_pane_ParamLimits

0xebb4,	// (0x0002e3ac) dt_sta_indi_pane_ParamLimits

0xebc5,	// (0x0002e3bd) dt_sta_title_pane_ParamLimits

0x0b49,	// (0x00020341) aid_size_touch_scroll_bar_cale

0xc483,	// (0x0002bc7b) popup_discreet_window_ParamLimits

0xc483,	// (0x0002bc7b) popup_discreet_window

0xc4e7,	// (0x0002bcdf) popup_sk_window

0x4fe9,	// (0x000247e1) bg_popup_sub_pane_cp28_ParamLimits

0x4fe9,	// (0x000247e1) bg_popup_sub_pane_cp28

0xec9a,	// (0x0002e492) popup_discreet_window_g1_ParamLimits

0xec9a,	// (0x0002e492) popup_discreet_window_g1

0xecba,	// (0x0002e4b2) popup_discreet_window_t1_ParamLimits

0xecba,	// (0x0002e4b2) popup_discreet_window_t1

0xecd8,	// (0x0002e4d0) popup_discreet_window_t2_ParamLimits

0xecd8,	// (0x0002e4d0) popup_discreet_window_t2

0x0002,

0xfeb4,	// (0x0002f6ac) popup_discreet_window_t_ParamLimits

0xfeb4,	// (0x0002f6ac) popup_discreet_window_t

0xed2a,	// (0x0002e522) popup_sk_window_g1

0xed33,	// (0x0002e52b) popup_sk_window_g2

0x0001,

0xfebb,	// (0x0002f6b3) popup_sk_window_g

0xed3c,	// (0x0002e534) popup_sk_window_t1

0xed4a,	// (0x0002e542) popup_sk_window_t1_copy1

0xe8e4,	// (0x0002e0dc) cell_ai5_widget_pane_g2_ParamLimits

0xea37,	// (0x0002e22f) cell_ai5_widget_pane_t9_ParamLimits

0xea37,	// (0x0002e22f) cell_ai5_widget_pane_t9

0x0568,	// (0x0001fd60) main_fep_fshwr2_pane

0xed58,	// (0x0002e550) aid_fshwr2_btn_pane

0xed60,	// (0x0002e558) aid_fshwr2_syb_pane

0xed68,	// (0x0002e560) aid_fshwr2_txt_pane

0xed70,	// (0x0002e568) fshwr2_func_candi_pane

0xed78,	// (0x0002e570) fshwr2_hwr_syb_pane

0xed80,	// (0x0002e578) fshwr2_icf_pane

0x0568,	// (0x0001fd60) fshwr2_icf_bg_pane

0xed9a,	// (0x0002e592) fshwr2_icf_pane_t1_ParamLimits

0xed9a,	// (0x0002e592) fshwr2_icf_pane_t1

0x832d,	// (0x00027b25) fshwr2_func_candi_pane_g1

0xedb1,	// (0x0002e5a9) fshwr2_func_candi_row_pane_ParamLimits

0xedb1,	// (0x0002e5a9) fshwr2_func_candi_row_pane

0xedc2,	// (0x0002e5ba) cell_fshwr2_syb_pane_ParamLimits

0xedc2,	// (0x0002e5ba) cell_fshwr2_syb_pane

0x8575,	// (0x00027d6d) fshwr2_hwr_syb_pane_g1_ParamLimits

0x8575,	// (0x00027d6d) fshwr2_hwr_syb_pane_g1

0x0568,	// (0x0001fd60) bg_popup_call_pane_cp01

0xedd9,	// (0x0002e5d1) fshwr2_func_candi_cell_pane_ParamLimits

0xedd9,	// (0x0002e5d1) fshwr2_func_candi_cell_pane

0xee04,	// (0x0002e5fc) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xee04,	// (0x0002e5fc) fshwr2_func_candi_cell_bg_pane

0xee1e,	// (0x0002e616) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xee1e,	// (0x0002e616) fshwr2_func_candi_cell_pane_g1

0xee3e,	// (0x0002e636) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xee3e,	// (0x0002e636) fshwr2_func_candi_cell_pane_t1

0x0568,	// (0x0001fd60) bg_button_pane_cp08

0x1c65,	// (0x0002145d) cell_fshwr2_syb_bg_pane

0xee51,	// (0x0002e649) cell_fshwr2_syb_bg_pane_g1

0xee59,	// (0x0002e651) cell_fshwr2_syb_bg_pane_t1

0x12ac,	// (0x00020aa4) main_tmo_pane

0x7b60,	// (0x00027358) uni_indicator_pane_g1_ParamLimits

0x7b75,	// (0x0002736d) uni_indicator_pane_g2_ParamLimits

0x7b8b,	// (0x00027383) uni_indicator_pane_g3_ParamLimits

0x59b6,	// (0x000251ae) uni_indicator_pane_g4_ParamLimits

0x59b6,	// (0x000251ae) uni_indicator_pane_g4

0x59ca,	// (0x000251c2) uni_indicator_pane_g5_ParamLimits

0x59ca,	// (0x000251c2) uni_indicator_pane_g5

0x59de,	// (0x000251d6) uni_indicator_pane_g6_ParamLimits

0x59de,	// (0x000251d6) uni_indicator_pane_g6

0xf95a,	// (0x0002f152) uni_indicator_pane_g_ParamLimits

0xd76c,	// (0x0002cf64) popup_tmo_note_window_ParamLimits

0xd76c,	// (0x0002cf64) popup_tmo_note_window

0x0568,	// (0x0001fd60) fshwr2_bg_pane

0xee2f,	// (0x0002e627) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xee2f,	// (0x0002e627) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec0,	// (0x0002f6b8) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec0,	// (0x0002f6b8) fshwr2_func_candi_cell_pane_g

0x832d,	// (0x00027b25) bg_popup_window_pane_cp01

0xee68,	// (0x0002e660) bg_popup_window_pane_g1_cp01

0xee71,	// (0x0002e669) bg_popup_window_pane_cp22_ParamLimits

0xee71,	// (0x0002e669) bg_popup_window_pane_cp22

0xee7f,	// (0x0002e677) listscroll_tmo_link_pane_ParamLimits

0xee7f,	// (0x0002e677) listscroll_tmo_link_pane

0xeebf,	// (0x0002e6b7) popup_tmo_note_window_g1_ParamLimits

0xeebf,	// (0x0002e6b7) popup_tmo_note_window_g1

0xeecc,	// (0x0002e6c4) tmo_note_info_pane_ParamLimits

0xeecc,	// (0x0002e6c4) tmo_note_info_pane

0xeee6,	// (0x0002e6de) list_tmo_note_info_pane_g1_ParamLimits

0xeee6,	// (0x0002e6de) list_tmo_note_info_pane_g1

0xeefd,	// (0x0002e6f5) list_tmo_note_info_pane_g2_ParamLimits

0xeefd,	// (0x0002e6f5) list_tmo_note_info_pane_g2

0x0001,

0xfec5,	// (0x0002f6bd) list_tmo_note_info_pane_g_ParamLimits

0xfec5,	// (0x0002f6bd) list_tmo_note_info_pane_g

0xef19,	// (0x0002e711) list_tmo_note_info_text_pane_ParamLimits

0xef19,	// (0x0002e711) list_tmo_note_info_text_pane

0xef9a,	// (0x0002e792) list_tmo_link_pane

0xefa7,	// (0x0002e79f) scroll_pane_cp20

0xefb4,	// (0x0002e7ac) list_single_tmo_link_pane_ParamLimits

0xefb4,	// (0x0002e7ac) list_single_tmo_link_pane

0xefc4,	// (0x0002e7bc) list_single_tmo_link_pane_t1

0xefd2,	// (0x0002e7ca) list_tmo_note_info_text_pane_t1_ParamLimits

0xefd2,	// (0x0002e7ca) list_tmo_note_info_text_pane_t1

0x136e,	// (0x00020b66) aid_size_touch_scroll_bar_cp01_ParamLimits

0x136e,	// (0x00020b66) aid_size_touch_scroll_bar_cp01

0xbbc3,	// (0x0002b3bb) aid_size_touch_slider_marker

0xc4d3,	// (0x0002bccb) popup_settings_window_ParamLimits

0xc4d3,	// (0x0002bccb) popup_settings_window

0xbd79,	// (0x0002b571) popup_candi_list_indi_window

0x48dc,	// (0x000240d4) aid_touch_navi_pane_ParamLimits

0xd897,	// (0x0002d08f) rs_clock_indi_pane

0xd8a0,	// (0x0002d098) sctrl_sk_bottom_pane_ParamLimits

0xd8b1,	// (0x0002d0a9) sctrl_sk_top_pane_ParamLimits

0xde04,	// (0x0002d5fc) popup_fep_tooltip_window

0xe8a8,	// (0x0002e0a0) aid_size_cell_widget_grid_ParamLimits

0xe8d8,	// (0x0002e0d0) cell_ai5_widget_pane_g1_ParamLimits

0xe8d8,	// (0x0002e0d0) cell_ai5_widget_pane_g1

0xe920,	// (0x0002e118) cell_ai5_widget_pane_g6_ParamLimits

0xe92c,	// (0x0002e124) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe43,	// (0x0002f63b) cell_ai5_widget_pane_g_ParamLimits

0xfe43,	// (0x0002f63b) cell_ai5_widget_pane_g

0xea5b,	// (0x0002e253) cell_ai5_widget_pane_t10_ParamLimits

0xea5b,	// (0x0002e253) cell_ai5_widget_pane_t10

0xea6d,	// (0x0002e265) grid_ai5_widget_pane_ParamLimits

0xeb0d,	// (0x0002e305) cell_contacts_ai5_widget_pane_ParamLimits

0xeb0d,	// (0x0002e305) cell_contacts_ai5_widget_pane

0xeced,	// (0x0002e4e5) popup_discreet_window_t3_ParamLimits

0xeced,	// (0x0002e4e5) popup_discreet_window_t3

0xed88,	// (0x0002e580) popup_fshwr2_char_preview_window_ParamLimits

0xed88,	// (0x0002e580) popup_fshwr2_char_preview_window

0xef37,	// (0x0002e72f) tmo_note_info_pane_t1

0xef4c,	// (0x0002e744) tmo_note_info_pane_t2

0xef61,	// (0x0002e759) tmo_note_info_pane_t3

0xef76,	// (0x0002e76e) tmo_note_info_pane_t4

0xef88,	// (0x0002e780) tmo_note_info_pane_t5

0x0004,

0xfeca,	// (0x0002f6c2) tmo_note_info_pane_t

0xef9a,	// (0x0002e792) list_tmo_link_pane_ParamLimits

0xefa7,	// (0x0002e79f) scroll_pane_cp20_ParamLimits

0x0568,	// (0x0001fd60) bg_popup_fep_char_preview_window_cp01

0xefeb,	// (0x0002e7e3) popup_fshwr2_char_preview_window_t1

0xeff9,	// (0x0002e7f1) popup_candi_list_indi_window_g1

0xf002,	// (0x0002e7fa) bg_cell_contacts_ai5_widget_pane

0xf00e,	// (0x0002e806) cell_contacts_ai5_widget_pane_g1

0xf022,	// (0x0002e81a) cell_contacts_ai5_widget_pane_g2

0xf031,	// (0x0002e829) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed5,	// (0x0002f6cd) cell_contacts_ai5_widget_pane_g

0xf044,	// (0x0002e83c) cell_contacts_ai5_widget_pane_t1

0x12ac,	// (0x00020aa4) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf0bc,	// (0x0002e8b4) settings_container_pane

0x1c65,	// (0x0002145d) listscroll_set_pane_copy1

0x6102,	// (0x000258fa) scroll_pane_cp121_copy1

0xf0c8,	// (0x0002e8c0) set_content_pane_copy1

0xf0d0,	// (0x0002e8c8) aid_height_set_list_copy1_ParamLimits

0xf0d0,	// (0x0002e8c8) aid_height_set_list_copy1

0x5b77,	// (0x0002536f) aid_size_parent_copy1_ParamLimits

0x5b77,	// (0x0002536f) aid_size_parent_copy1

0xf0dc,	// (0x0002e8d4) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf0dc,	// (0x0002e8d4) button_value_adjust_pane_cp6_copy1

0x47c5,	// (0x00023fbd) list_highlight_pane_cp2_copy1_ParamLimits

0x47c5,	// (0x00023fbd) list_highlight_pane_cp2_copy1

0xf0f0,	// (0x0002e8e8) list_set_pane_copy1_ParamLimits

0xf0f0,	// (0x0002e8e8) list_set_pane_copy1

0xf059,	// (0x0002e851) main_pane_set_t1_copy1_ParamLimits

0xf059,	// (0x0002e851) main_pane_set_t1_copy1

0xf093,	// (0x0002e88b) main_pane_set_t2_copy1_ParamLimits

0xf093,	// (0x0002e88b) main_pane_set_t2_copy1

0xf17e,	// (0x0002e976) main_pane_set_t3_copy1

0xf18c,	// (0x0002e984) main_pane_set_t4_copy1

0xf0b0,	// (0x0002e8a8) set_content_pane_g1_copy1_ParamLimits

0xf0b0,	// (0x0002e8a8) set_content_pane_g1_copy1

0xf19a,	// (0x0002e992) setting_code_pane_copy1

0xf1a2,	// (0x0002e99a) setting_slider_graphic_pane_copy1

0xf1a2,	// (0x0002e99a) setting_slider_pane_copy1

0xf1aa,	// (0x0002e9a2) setting_text_pane_copy1

0xf1a2,	// (0x0002e99a) setting_volume_pane_copy1

0xf1b2,	// (0x0002e9aa) settings_code_pane_cp2_copy1

0xf1ba,	// (0x0002e9b2) settings_code_pane_cp_copy1_ParamLimits

0xf1ba,	// (0x0002e9b2) settings_code_pane_cp_copy1

0xf1ce,	// (0x0002e9c6) volume_set_pane_copy1

0xf1d6,	// (0x0002e9ce) volume_set_pane_g10_copy1

0xf1de,	// (0x0002e9d6) volume_set_pane_g1_copy1

0xf1e6,	// (0x0002e9de) volume_set_pane_g2_copy1

0xf1ee,	// (0x0002e9e6) volume_set_pane_g3_copy1

0xf1f6,	// (0x0002e9ee) volume_set_pane_g4_copy1

0xf1fe,	// (0x0002e9f6) volume_set_pane_g5_copy1

0xf206,	// (0x0002e9fe) volume_set_pane_g6_copy1

0xf20e,	// (0x0002ea06) volume_set_pane_g7_copy1

0xf216,	// (0x0002ea0e) volume_set_pane_g8_copy1

0xf21e,	// (0x0002ea16) volume_set_pane_g9_copy1

0x0658,	// (0x0001fe50) bg_set_opt_pane_cp_copy1_ParamLimits

0x0658,	// (0x0001fe50) bg_set_opt_pane_cp_copy1

0x0666,	// (0x0001fe5e) setting_slider_pane_t1_copy1_ParamLimits

0x0666,	// (0x0001fe5e) setting_slider_pane_t1_copy1

0xf226,	// (0x0002ea1e) setting_slider_pane_t2_copy1_ParamLimits

0xf226,	// (0x0002ea1e) setting_slider_pane_t2_copy1

0xf23f,	// (0x0002ea37) setting_slider_pane_t3_copy1_ParamLimits

0xf23f,	// (0x0002ea37) setting_slider_pane_t3_copy1

0x067c,	// (0x0001fe74) slider_set_pane_copy1_ParamLimits

0x067c,	// (0x0001fe74) slider_set_pane_copy1

0x12fb,	// (0x00020af3) set_opt_bg_pane_g1_copy2

0x1303,	// (0x00020afb) set_opt_bg_pane_g2_copy2

0xf256,	// (0x0002ea4e) set_opt_bg_pane_g3_copy2

0x1313,	// (0x00020b0b) set_opt_bg_pane_g4_copy2

0x131b,	// (0x00020b13) set_opt_bg_pane_g5_copy2

0x1323,	// (0x00020b1b) set_opt_bg_pane_g6_copy2

0xf25e,	// (0x0002ea56) set_opt_bg_pane_g7_copy2

0xf266,	// (0x0002ea5e) set_opt_bg_pane_g8_copy2

0xf26e,	// (0x0002ea66) set_opt_bg_pane_g9_copy2

0x6156,	// (0x0002594e) aid_size_touch_slider_mark_copy1_ParamLimits

0x6156,	// (0x0002594e) aid_size_touch_slider_mark_copy1

0x5b89,	// (0x00025381) slider_set_pane_g1_copy1

0x5b92,	// (0x0002538a) slider_set_pane_g2_copy1

0x616a,	// (0x00025962) slider_set_pane_g3_copy1_ParamLimits

0x616a,	// (0x00025962) slider_set_pane_g3_copy1

0x617e,	// (0x00025976) slider_set_pane_g4_copy1_ParamLimits

0x617e,	// (0x00025976) slider_set_pane_g4_copy1

0x6196,	// (0x0002598e) slider_set_pane_g5_copy1_ParamLimits

0x6196,	// (0x0002598e) slider_set_pane_g5_copy1

0x616a,	// (0x00025962) slider_set_pane_g6_copy1_ParamLimits

0x616a,	// (0x00025962) slider_set_pane_g6_copy1

0xf276,	// (0x0002ea6e) slider_set_pane_g7_copy1_ParamLimits

0xf276,	// (0x0002ea6e) slider_set_pane_g7_copy1

0x05f4,	// (0x0001fdec) bg_set_opt_pane_cp2_copy1

0x0692,	// (0x0001fe8a) setting_slider_graphic_pane_g1_copy1

0xf28c,	// (0x0002ea84) setting_slider_graphic_pane_t1_copy1

0xf29b,	// (0x0002ea93) setting_slider_graphic_pane_t2_copy1

0xf2aa,	// (0x0002eaa2) slider_set_pane_cp_copy1

0xf2ba,	// (0x0002eab2) input_focus_pane_cp1_copy1

0xf2c3,	// (0x0002eabb) list_set_text_pane_copy1

0xf2cb,	// (0x0002eac3) setting_text_pane_g1_copy1

0xc31a,	// (0x0002bb12) set_text_pane_t1_copy1

0xf2ba,	// (0x0002eab2) input_focus_pane_cp2_copy1

0xf2cb,	// (0x0002eac3) setting_code_pane_g1_copy1

0xf2d4,	// (0x0002eacc) setting_code_pane_t1_copy1

0xf2e2,	// (0x0002eada) list_set_graphic_pane_copy1

0x05f4,	// (0x0001fdec) bg_set_opt_pane_cp4_copy1

0xf2f6,	// (0x0002eaee) list_set_graphic_pane_g1_copy1_ParamLimits

0xf2f6,	// (0x0002eaee) list_set_graphic_pane_g1_copy1

0xf302,	// (0x0002eafa) list_set_graphic_pane_g2_copy1

0x19e0,	// (0x000211d8) list_set_graphic_pane_t1_copy1_ParamLimits

0x19e0,	// (0x000211d8) list_set_graphic_pane_t1_copy1

0x832d,	// (0x00027b25) rs_clock_indi_pane_g1

0xf30a,	// (0x0002eb02) rs_clock_indi_pane_t1

0xf318,	// (0x0002eb10) rs_indi_pane

0xf320,	// (0x0002eb18) rs_indi_pane_g1

0xf329,	// (0x0002eb21) rs_indi_pane_g2

0xeff9,	// (0x0002e7f1) rs_indi_pane_g3

0x0002,

0xfedc,	// (0x0002f6d4) rs_indi_pane_g

0x1c65,	// (0x0002145d) bg_popup_preview_window_pane_cp03

0xf332,	// (0x0002eb2a) popup_fep_tooltip_window_t1

0x9c9e,	// (0x00029496) popup_note2_window_g2_ParamLimits

0x9c9e,	// (0x00029496) popup_note2_window_g2

0x0001,

0xfc81,	// (0x0002f479) popup_note2_window_g_ParamLimits

0xfc81,	// (0x0002f479) popup_note2_window_g

0xa119,	// (0x00029911) bg_popup_sub_pane_cp11_ParamLimits

0xa126,	// (0x0002991e) cell_ai3_links_pane_g1_ParamLimits

0xa13d,	// (0x00029935) cell_ai3_links_pane_t1

0xc31a,	// (0x0002bb12) set_text_pane_t1_copy1_ParamLimits

0x1b8c,	// (0x00021384) cell_graphic_popup_pane_cp2_ParamLimits

0x1b8c,	// (0x00021384) cell_graphic_popup_pane_cp2

0xf340,	// (0x0002eb38) cell_graphic_popup_pane_g1_cp2

0x09f8,	// (0x000201f0) cell_graphic_popup_pane_g2_cp2

0xf348,	// (0x0002eb40) cell_graphic_popup_pane_g3_cp2

0xf350,	// (0x0002eb48) cell_graphic_popup_pane_t2_cp2

0x0a09,	// (0x00020201) grid_highlight_pane_cp3_cp2

0x15e1,	// (0x00020dd9) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x12ac,	// (0x00020aa4) main_tmo_pane_ParamLimits

0xd764,	// (0x0002cf5c) popup_tmo_big_image_note_window

0xe8c8,	// (0x0002e0c0) cell_ai5_widget_list_pane

0xe8d0,	// (0x0002e0c8) cell_ai5_widget_lrg_icon_pane

0xef37,	// (0x0002e72f) tmo_note_info_pane_t1_ParamLimits

0xef4c,	// (0x0002e744) tmo_note_info_pane_t2_ParamLimits

0xef61,	// (0x0002e759) tmo_note_info_pane_t3_ParamLimits

0xef76,	// (0x0002e76e) tmo_note_info_pane_t4_ParamLimits

0xef88,	// (0x0002e780) tmo_note_info_pane_t5_ParamLimits

0xfeca,	// (0x0002f6c2) tmo_note_info_pane_t_ParamLimits

0xf0bc,	// (0x0002e8b4) settings_container_pane_ParamLimits

0xf2b2,	// (0x0002eaaa) indicator_popup_pane_cp5

0xf2b2,	// (0x0002eaaa) indicator_popup_pane_cp6

0xf2e2,	// (0x0002eada) list_set_graphic_pane_copy1_ParamLimits

0x0568,	// (0x0001fd60) bg_popup_window_pane_cp23

0xf35e,	// (0x0002eb56) popup_tmo_big_image_note_window_g1

0xf367,	// (0x0002eb5f) popup_tmo_big_image_note_window_t1

0xf375,	// (0x0002eb6d) popup_tmo_big_image_note_window_t2

0xf383,	// (0x0002eb7b) popup_tmo_big_image_note_window_t3

0x0002,

0xfee3,	// (0x0002f6db) popup_tmo_big_image_note_window_t

0xf391,	// (0x0002eb89) cell_ai5_widget_lrg_icon_pane_g1

0xf399,	// (0x0002eb91) cell_ai5_widget_lrg_icon_pane_t1

0xf3a7,	// (0x0002eb9f) cell_ai5_widget_list_row_pane_ParamLimits

0xf3a7,	// (0x0002eb9f) cell_ai5_widget_list_row_pane

0xf3c0,	// (0x0002ebb8) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf3c0,	// (0x0002ebb8) cell_ai5_widget_list_row_pane_g1

0xf3cd,	// (0x0002ebc5) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf3cd,	// (0x0002ebc5) cell_ai5_widget_list_row_pane_t1

0xf3e5,	// (0x0002ebdd) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf3e5,	// (0x0002ebdd) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfeea,	// (0x0002f6e2) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeea,	// (0x0002f6e2) cell_ai5_widget_list_row_pane_t

0x0568,	// (0x0001fd60) main_fep_vtchi_ss_pane

0xf3f7,	// (0x0002ebef) popup_fep_char_pre_window

0xf3ff,	// (0x0002ebf7) popup_fep_ituss_window

0xf408,	// (0x0002ec00) popup_fep_vkbss_window

0xf411,	// (0x0002ec09) grid_vkbss_keypad_pane_ParamLimits

0xf411,	// (0x0002ec09) grid_vkbss_keypad_pane

0xf421,	// (0x0002ec19) ituss_keypad_pane

0xf429,	// (0x0002ec21) aid_vkbss_key_offset_ParamLimits

0xf429,	// (0x0002ec21) aid_vkbss_key_offset

0xf438,	// (0x0002ec30) cell_vkbss_key_pane_ParamLimits

0xf438,	// (0x0002ec30) cell_vkbss_key_pane

0xf44e,	// (0x0002ec46) bg_cell_vkbss_key_g1_ParamLimits

0xf44e,	// (0x0002ec46) bg_cell_vkbss_key_g1

0xf45a,	// (0x0002ec52) cell_vkbss_key_3p_pane_ParamLimits

0xf45a,	// (0x0002ec52) cell_vkbss_key_3p_pane

0xf46e,	// (0x0002ec66) cell_vkbss_key_g1_ParamLimits

0xf46e,	// (0x0002ec66) cell_vkbss_key_g1

0xf482,	// (0x0002ec7a) cell_vkbss_key_t1_ParamLimits

0xf482,	// (0x0002ec7a) cell_vkbss_key_t1

0xf4ad,	// (0x0002eca5) cell_ituss_key_pane_ParamLimits

0xf4ad,	// (0x0002eca5) cell_ituss_key_pane

0xf4bc,	// (0x0002ecb4) bg_cell_ituss_key_g1_ParamLimits

0xf4bc,	// (0x0002ecb4) bg_cell_ituss_key_g1

0xf4c8,	// (0x0002ecc0) cell_ituss_key_pane_g1_ParamLimits

0xf4c8,	// (0x0002ecc0) cell_ituss_key_pane_g1

0xf4d4,	// (0x0002eccc) cell_ituss_key_pane_g2_ParamLimits

0xf4d4,	// (0x0002eccc) cell_ituss_key_pane_g2

0x0001,

0xfeef,	// (0x0002f6e7) cell_ituss_key_pane_g_ParamLimits

0xfeef,	// (0x0002f6e7) cell_ituss_key_pane_g

0xf4e7,	// (0x0002ecdf) cell_ituss_key_t1_ParamLimits

0xf4e7,	// (0x0002ecdf) cell_ituss_key_t1

0xf505,	// (0x0002ecfd) cell_ituss_key_t2_ParamLimits

0xf505,	// (0x0002ecfd) cell_ituss_key_t2

0xf524,	// (0x0002ed1c) cell_ituss_key_t3_ParamLimits

0xf524,	// (0x0002ed1c) cell_ituss_key_t3

0xf543,	// (0x0002ed3b) cell_ituss_key_t4_ParamLimits

0xf543,	// (0x0002ed3b) cell_ituss_key_t4

0x0003,

0xfef4,	// (0x0002f6ec) cell_ituss_key_t_ParamLimits

0xfef4,	// (0x0002f6ec) cell_ituss_key_t

0xf562,	// (0x0002ed5a) cell_vkbss_key_3p_pane_g1

0xf56a,	// (0x0002ed62) cell_vkbss_key_3p_pane_g2

0xf572,	// (0x0002ed6a) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefd,	// (0x0002f6f5) cell_vkbss_key_3p_pane_g

0x0568,	// (0x0001fd60) bg_popup_fep_char_preview_window_cp02

0xf57a,	// (0x0002ed72) popup_fep_char_pre_window_t1

0xe89e,	// (0x0002e096) main_ai5_sk_pane

0xf002,	// (0x0002e7fa) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xf00e,	// (0x0002e806) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xf022,	// (0x0002e81a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xf031,	// (0x0002e829) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed5,	// (0x0002f6cd) cell_contacts_ai5_widget_pane_g_ParamLimits

0xf044,	// (0x0002e83c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x12ac,	// (0x00020aa4) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf589,	// (0x0002ed81) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Elaf_pqp_av_qvga_prt_Large
