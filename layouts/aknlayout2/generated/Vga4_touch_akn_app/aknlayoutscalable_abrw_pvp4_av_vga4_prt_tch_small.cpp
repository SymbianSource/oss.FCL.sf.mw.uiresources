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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0002f2e6 };

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
0x5376,	// (0x0003465c) Screen

0x5382,	// (0x00034668) application_window_ParamLimits

0x5382,	// (0x00034668) application_window

0x222d,	// (0x00031513) screen_g1

0x53de,	// (0x000346c4) area_bottom_pane_ParamLimits

0x53de,	// (0x000346c4) area_bottom_pane

0x549e,	// (0x00034784) area_top_pane_ParamLimits

0x549e,	// (0x00034784) area_top_pane

0x553c,	// (0x00034822) main_pane_ParamLimits

0x553c,	// (0x00034822) main_pane

0x2237,	// (0x0003151d) misc_graphics

0x952b,	// (0x00038811) battery_pane_ParamLimits

0x952b,	// (0x00038811) battery_pane

0xa1f3,	// (0x000394d9) bg_status_flat_pane_g8

0xa1fb,	// (0x000394e1) bg_status_flat_pane_g9

0x95f3,	// (0x000388d9) context_pane_ParamLimits

0x95f3,	// (0x000388d9) context_pane

0x9717,	// (0x000389fd) navi_pane_ParamLimits

0x9717,	// (0x000389fd) navi_pane

0x97a7,	// (0x00038a8d) signal_pane_ParamLimits

0x97a7,	// (0x00038a8d) signal_pane

0x0008,

0xf854,	// (0x0003eb3a) bg_status_flat_pane_g

0x9814,	// (0x00038afa) status_pane_g1_ParamLimits

0x9814,	// (0x00038afa) status_pane_g1

0x9820,	// (0x00038b06) status_pane_g2_ParamLimits

0x9820,	// (0x00038b06) status_pane_g2

0x982c,	// (0x00038b12) status_pane_g3_ParamLimits

0x982c,	// (0x00038b12) status_pane_g3

0x0004,

0xf77b,	// (0x0003ea61) status_pane_g_ParamLimits

0xf77b,	// (0x0003ea61) status_pane_g

0x9860,	// (0x00038b46) title_pane_ParamLimits

0x9860,	// (0x00038b46) title_pane

0x989f,	// (0x00038b85) uni_indicator_pane_ParamLimits

0x989f,	// (0x00038b85) uni_indicator_pane

0x945d,	// (0x00038743) bg_list_pane_ParamLimits

0x945d,	// (0x00038743) bg_list_pane

0x6d2f,	// (0x00036015) find_pane

0x947d,	// (0x00038763) listscroll_app_pane_ParamLimits

0x947d,	// (0x00038763) listscroll_app_pane

0x9489,	// (0x0003876f) listscroll_form_pane

0x52f6,	// (0x000345dc) listscroll_gen_pane_ParamLimits

0x52f6,	// (0x000345dc) listscroll_gen_pane

0x6d37,	// (0x0003601d) listscroll_set_pane

0x6255,	// (0x0003553b) main_idle_act_pane

0x9156,	// (0x0003843c) main_idle_trad_pane

0x9156,	// (0x0003843c) main_list_empty_pane

0x947d,	// (0x00038763) main_midp_pane

0x94a3,	// (0x00038789) main_pane_g1_ParamLimits

0x94a3,	// (0x00038789) main_pane_g1

0x6d4d,	// (0x00036033) popup_ai_message_window_ParamLimits

0x6d4d,	// (0x00036033) popup_ai_message_window

0x6e01,	// (0x000360e7) popup_fep_china_uni_window_ParamLimits

0x6e01,	// (0x000360e7) popup_fep_china_uni_window

0x6e61,	// (0x00036147) popup_fep_japan_candidate_window_ParamLimits

0x6e61,	// (0x00036147) popup_fep_japan_candidate_window

0x6e8b,	// (0x00036171) popup_fep_japan_predictive_window_ParamLimits

0x6e8b,	// (0x00036171) popup_fep_japan_predictive_window

0x6ec1,	// (0x000361a7) popup_find_window

0x6ece,	// (0x000361b4) popup_grid_graphic_window_ParamLimits

0x6ece,	// (0x000361b4) popup_grid_graphic_window

0x6efe,	// (0x000361e4) popup_large_graphic_colour_window

0x6f24,	// (0x0003620a) popup_menu_window_ParamLimits

0x6f24,	// (0x0003620a) popup_menu_window

0x70ee,	// (0x000363d4) popup_note_image_window

0x70d8,	// (0x000363be) popup_note_wait_window_ParamLimits

0x70d8,	// (0x000363be) popup_note_wait_window

0x70d8,	// (0x000363be) popup_note_window_ParamLimits

0x70d8,	// (0x000363be) popup_note_window

0x7154,	// (0x0003643a) popup_query_code_window_ParamLimits

0x7154,	// (0x0003643a) popup_query_code_window

0x716a,	// (0x00036450) popup_query_data_code_window_ParamLimits

0x716a,	// (0x00036450) popup_query_data_code_window

0x718d,	// (0x00036473) popup_query_data_window_ParamLimits

0x718d,	// (0x00036473) popup_query_data_window

0x71af,	// (0x00036495) popup_query_sat_info_window_ParamLimits

0x71af,	// (0x00036495) popup_query_sat_info_window

0x71ee,	// (0x000364d4) popup_snote_single_graphic_window_ParamLimits

0x71ee,	// (0x000364d4) popup_snote_single_graphic_window

0x71ee,	// (0x000364d4) popup_snote_single_text_window_ParamLimits

0x71ee,	// (0x000364d4) popup_snote_single_text_window

0x7205,	// (0x000364eb) popup_sub_window_general

0x734b,	// (0x00036631) popup_window_general_ParamLimits

0x734b,	// (0x00036631) popup_window_general

0x94b1,	// (0x00038797) power_save_pane

0x6bb1,	// (0x00035e97) control_pane_g1_ParamLimits

0x6bb1,	// (0x00035e97) control_pane_g1

0x6bda,	// (0x00035ec0) control_pane_g2_ParamLimits

0x6bda,	// (0x00035ec0) control_pane_g2

0x9420,	// (0x00038706) control_pane_g3_ParamLimits

0x9420,	// (0x00038706) control_pane_g3

0x0007,

0xf763,	// (0x0003ea49) control_pane_g_ParamLimits

0xf763,	// (0x0003ea49) control_pane_g

0x6c26,	// (0x00035f0c) control_pane_t1_ParamLimits

0x6c26,	// (0x00035f0c) control_pane_t1

0x6c80,	// (0x00035f66) control_pane_t2_ParamLimits

0x6c80,	// (0x00035f66) control_pane_t2

0x0002,

0xf774,	// (0x0003ea5a) control_pane_t_ParamLimits

0xf774,	// (0x0003ea5a) control_pane_t

0x9345,	// (0x0003862b) navi_navi_volume_pane_cp1

0x934d,	// (0x00038633) status_small_icon_pane

0x9355,	// (0x0003863b) status_small_pane_g1_ParamLimits

0x9355,	// (0x0003863b) status_small_pane_g1

0x9389,	// (0x0003866f) status_small_pane_g2_ParamLimits

0x9389,	// (0x0003866f) status_small_pane_g2

0x9395,	// (0x0003867b) status_small_pane_g3_ParamLimits

0x9395,	// (0x0003867b) status_small_pane_g3

0x93a1,	// (0x00038687) status_small_pane_g4_ParamLimits

0x93a1,	// (0x00038687) status_small_pane_g4

0x93ad,	// (0x00038693) status_small_pane_g5_ParamLimits

0x93ad,	// (0x00038693) status_small_pane_g5

0x93bb,	// (0x000386a1) status_small_pane_g6_ParamLimits

0x93bb,	// (0x000386a1) status_small_pane_g6

0x0007,

0xf752,	// (0x0003ea38) status_small_pane_g_ParamLimits

0xf752,	// (0x0003ea38) status_small_pane_g

0x93ea,	// (0x000386d0) status_small_pane_t1

0x940c,	// (0x000386f2) status_small_wait_pane_ParamLimits

0x940c,	// (0x000386f2) status_small_wait_pane

0x8bc8,	// (0x00037eae) aid_levels_signal_ParamLimits

0x8bc8,	// (0x00037eae) aid_levels_signal

0x8bd7,	// (0x00037ebd) signal_pane_g1_ParamLimits

0x8bd7,	// (0x00037ebd) signal_pane_g1

0x8bec,	// (0x00037ed2) signal_pane_g2_ParamLimits

0x8bec,	// (0x00037ed2) signal_pane_g2

0x0003,

0xf6e3,	// (0x0003e9c9) signal_pane_g_ParamLimits

0xf6e3,	// (0x0003e9c9) signal_pane_g

0x8c1d,	// (0x00037f03) context_pane_g1

0x579b,	// (0x00034a81) title_pane_g1

0x57cd,	// (0x00034ab3) title_pane_t1

0x224d,	// (0x00031533) title_pane_t2

0x2273,	// (0x00031559) title_pane_t3

0x0002,

0xf532,	// (0x0003e818) title_pane_t

0x98b7,	// (0x00038b9d) aid_levels_battery_ParamLimits

0x98b7,	// (0x00038b9d) aid_levels_battery

0x98c8,	// (0x00038bae) battery_pane_g1_ParamLimits

0x98c8,	// (0x00038bae) battery_pane_g1

0x98de,	// (0x00038bc4) battery_pane_g2_ParamLimits

0x98de,	// (0x00038bc4) battery_pane_g2

0x0001,

0xf786,	// (0x0003ea6c) battery_pane_g_ParamLimits

0xf786,	// (0x0003ea6c) battery_pane_g

0xab3d,	// (0x00039e23) uni_indicator_pane_g1

0xab53,	// (0x00039e39) uni_indicator_pane_g2

0xab69,	// (0x00039e4f) uni_indicator_pane_g3

0x0005,

0xf8fc,	// (0x0003ebe2) uni_indicator_pane_g

0x8fc4,	// (0x000382aa) navi_icon_pane_ParamLimits

0x8fc4,	// (0x000382aa) navi_icon_pane

0x8f00,	// (0x000381e6) navi_midp_pane

0x8fe0,	// (0x000382c6) navi_navi_pane

0x8fea,	// (0x000382d0) navi_text_pane_ParamLimits

0x8fea,	// (0x000382d0) navi_text_pane

0x222d,	// (0x00031513) status_small_wait_pane_g1

0x2594,	// (0x0003187a) status_small_wait_pane_g2

0x0001,

0xf8f7,	// (0x0003ebdd) status_small_wait_pane_g

0xa850,	// (0x00039b36) navi_navi_icon_text_pane

0xa858,	// (0x00039b3e) navi_navi_pane_g1_ParamLimits

0xa858,	// (0x00039b3e) navi_navi_pane_g1

0xa86a,	// (0x00039b50) navi_navi_pane_g2_ParamLimits

0xa86a,	// (0x00039b50) navi_navi_pane_g2

0x0001,

0xf8c5,	// (0x0003ebab) navi_navi_pane_g_ParamLimits

0xf8c5,	// (0x0003ebab) navi_navi_pane_g

0xa87c,	// (0x00039b62) navi_navi_tabs_pane

0xa885,	// (0x00039b6b) navi_navi_text_pane

0xa850,	// (0x00039b36) navi_navi_volume_pane

0xa82c,	// (0x00039b12) navi_text_pane_t1

0xa820,	// (0x00039b06) navi_icon_pane_g1

0xa773,	// (0x00039a59) navi_navi_text_pane_t1

0x7628,	// (0x0003690e) navi_navi_volume_pane_g1

0x7630,	// (0x00036916) volume_small_pane

0xa6d9,	// (0x000399bf) navi_navi_icon_text_pane_g1

0xa6e1,	// (0x000399c7) navi_navi_icon_text_pane_t1

0x8fe0,	// (0x000382c6) navi_tabs_2_long_pane

0x8fe0,	// (0x000382c6) navi_tabs_2_pane

0x8fe0,	// (0x000382c6) navi_tabs_3_long_pane

0x8fe0,	// (0x000382c6) navi_tabs_3_pane

0x8fe0,	// (0x000382c6) navi_tabs_4_pane

0x7608,	// (0x000368ee) tabs_2_active_pane_ParamLimits

0x7608,	// (0x000368ee) tabs_2_active_pane

0x7618,	// (0x000368fe) tabs_2_passive_pane_ParamLimits

0x7618,	// (0x000368fe) tabs_2_passive_pane

0x75d6,	// (0x000368bc) tabs_3_active_pane_ParamLimits

0x75d6,	// (0x000368bc) tabs_3_active_pane

0x75e6,	// (0x000368cc) tabs_3_passive_pane_ParamLimits

0x75e6,	// (0x000368cc) tabs_3_passive_pane

0x75f7,	// (0x000368dd) tabs_3_passive_pane_cp_ParamLimits

0x75f7,	// (0x000368dd) tabs_3_passive_pane_cp

0x758a,	// (0x00036870) tabs_4_active_pane_ParamLimits

0x758a,	// (0x00036870) tabs_4_active_pane

0x759d,	// (0x00036883) tabs_4_passive_pane_ParamLimits

0x759d,	// (0x00036883) tabs_4_passive_pane

0x75ae,	// (0x00036894) tabs_4_passive_pane_cp_ParamLimits

0x75ae,	// (0x00036894) tabs_4_passive_pane_cp

0x75bf,	// (0x000368a5) tabs_4_passive_pane_cp2_ParamLimits

0x75bf,	// (0x000368a5) tabs_4_passive_pane_cp2

0x7566,	// (0x0003684c) tabs_2_long_active_pane_ParamLimits

0x7566,	// (0x0003684c) tabs_2_long_active_pane

0x7578,	// (0x0003685e) tabs_2_long_passive_pane_ParamLimits

0x7578,	// (0x0003685e) tabs_2_long_passive_pane

0x7527,	// (0x0003680d) tabs_3_long_active_pane_ParamLimits

0x7527,	// (0x0003680d) tabs_3_long_active_pane

0x753a,	// (0x00036820) tabs_3_long_passive_pane_ParamLimits

0x753a,	// (0x00036820) tabs_3_long_passive_pane

0x7553,	// (0x00036839) tabs_3_long_passive_pane_cp_ParamLimits

0x7553,	// (0x00036839) tabs_3_long_passive_pane_cp

0x74cd,	// (0x000367b3) volume_small_pane_g1

0x74d6,	// (0x000367bc) volume_small_pane_g2

0x74df,	// (0x000367c5) volume_small_pane_g3

0x74e8,	// (0x000367ce) volume_small_pane_g4

0x74f1,	// (0x000367d7) volume_small_pane_g5

0x74fa,	// (0x000367e0) volume_small_pane_g6

0x7503,	// (0x000367e9) volume_small_pane_g7

0x750c,	// (0x000367f2) volume_small_pane_g8

0x7515,	// (0x000367fb) volume_small_pane_g9

0x751e,	// (0x00036804) volume_small_pane_g10

0x0009,

0xf891,	// (0x0003eb77) volume_small_pane_g

0x2293,	// (0x00031579) bg_active_tab_pane_cp2_ParamLimits

0x2293,	// (0x00031579) bg_active_tab_pane_cp2

0x5835,	// (0x00034b1b) tabs_3_active_pane_g1

0x583d,	// (0x00034b23) tabs_3_active_pane_t1

0x2293,	// (0x00031579) bg_passive_tab_pane_cp2_ParamLimits

0x2293,	// (0x00031579) bg_passive_tab_pane_cp2

0x5835,	// (0x00034b1b) tabs_3_passive_pane_g1

0x583d,	// (0x00034b23) tabs_3_passive_pane_t1

0x2293,	// (0x00031579) bg_active_tab_pane_cp3_ParamLimits

0x2293,	// (0x00031579) bg_active_tab_pane_cp3

0x584f,	// (0x00034b35) tabs_4_active_pane_g1

0x5857,	// (0x00034b3d) tabs_4_active_pane_t1

0x2293,	// (0x00031579) bg_passive_tab_pane_cp3_ParamLimits

0x2293,	// (0x00031579) bg_passive_tab_pane_cp3

0x584f,	// (0x00034b35) tabs_4_1_passive_pane_g1

0x5857,	// (0x00034b3d) tabs_4_1_passive_pane_t1

0x947d,	// (0x00038763) list_highlight_pane_cp2

0xadb6,	// (0x0003a09c) list_set_pane_ParamLimits

0xadb6,	// (0x0003a09c) list_set_pane

0xae78,	// (0x0003a15e) main_pane_set_t1_ParamLimits

0xae78,	// (0x0003a15e) main_pane_set_t1

0xae98,	// (0x0003a17e) main_pane_set_t2_ParamLimits

0xae98,	// (0x0003a17e) main_pane_set_t2

0xaeac,	// (0x0003a192) main_pane_set_t3_ParamLimits

0xaeac,	// (0x0003a192) main_pane_set_t3

0xaec0,	// (0x0003a1a6) main_pane_set_t4_ParamLimits

0xaec0,	// (0x0003a1a6) main_pane_set_t4

0x0003,

0xf961,	// (0x0003ec47) main_pane_set_t_ParamLimits

0xf961,	// (0x0003ec47) main_pane_set_t

0xaed4,	// (0x0003a1ba) setting_code_pane

0xaede,	// (0x0003a1c4) setting_slider_graphic_pane

0xaede,	// (0x0003a1c4) setting_slider_pane

0xaede,	// (0x0003a1c4) setting_text_pane

0xaede,	// (0x0003a1c4) setting_volume_pane

0x5869,	// (0x00034b4f) volume_set_pane

0x2293,	// (0x00031579) bg_set_opt_pane_cp

0x5873,	// (0x00034b59) setting_slider_pane_t1

0x588c,	// (0x00034b72) setting_slider_pane_t2

0x58a6,	// (0x00034b8c) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0003e81f) setting_slider_pane_t

0x58be,	// (0x00034ba4) slider_set_pane

0x2237,	// (0x0003151d) bg_set_opt_pane_cp2

0x22a1,	// (0x00031587) setting_slider_graphic_pane_g1

0x58d4,	// (0x00034bba) setting_slider_graphic_pane_t1

0x58e4,	// (0x00034bca) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0003e826) setting_slider_graphic_pane_t

0x58f4,	// (0x00034bda) slider_set_pane_cp

0x2237,	// (0x0003151d) input_focus_pane_cp1

0xad77,	// (0x0003a05d) list_set_text_pane

0x222d,	// (0x00031513) setting_text_pane_g1

0x2237,	// (0x0003151d) input_focus_pane_cp2

0x222d,	// (0x00031513) setting_code_pane_g1

0x22aa,	// (0x00031590) setting_code_pane_t1

0x3e99,	// (0x0003317f) set_text_pane_t1_ParamLimits

0x3e99,	// (0x0003317f) set_text_pane_t1

0x292d,	// (0x00031c13) set_opt_bg_pane_g1

0x2935,	// (0x00031c1b) set_opt_bg_pane_g2

0xad4f,	// (0x0003a035) set_opt_bg_pane_g3

0x2945,	// (0x00031c2b) set_opt_bg_pane_g4

0x294d,	// (0x00031c33) set_opt_bg_pane_g5

0x2955,	// (0x00031c3b) set_opt_bg_pane_g6

0xad59,	// (0x0003a03f) set_opt_bg_pane_g7

0xad63,	// (0x0003a049) set_opt_bg_pane_g8

0xad6d,	// (0x0003a053) set_opt_bg_pane_g9

0x0008,

0xf94e,	// (0x0003ec34) set_opt_bg_pane_g

0xad42,	// (0x0003a028) slider_set_pane_g1

0x76d9,	// (0x000369bf) slider_set_pane_g2

0x0006,

0xf93f,	// (0x0003ec25) slider_set_pane_g

0x7639,	// (0x0003691f) volume_set_pane_g1

0x7643,	// (0x00036929) volume_set_pane_g2

0x764d,	// (0x00036933) volume_set_pane_g3

0x7657,	// (0x0003693d) volume_set_pane_g4

0x7661,	// (0x00036947) volume_set_pane_g5

0x766b,	// (0x00036951) volume_set_pane_g6

0x7675,	// (0x0003695b) volume_set_pane_g7

0x767f,	// (0x00036965) volume_set_pane_g8

0x7689,	// (0x0003696f) volume_set_pane_g9

0x7693,	// (0x00036979) volume_set_pane_g10

0x0009,

0xf917,	// (0x0003ebfd) volume_set_pane_g

0x58fc,	// (0x00034be2) indicator_pane_ParamLimits

0x58fc,	// (0x00034be2) indicator_pane

0x5908,	// (0x00034bee) main_idle_pane_g2_ParamLimits

0x5908,	// (0x00034bee) main_idle_pane_g2

0x5930,	// (0x00034c16) main_pane_idle_g1_ParamLimits

0x5930,	// (0x00034c16) main_pane_idle_g1

0x22b8,	// (0x0003159e) popup_clock_digital_analogue_window_ParamLimits

0x22b8,	// (0x0003159e) popup_clock_digital_analogue_window

0x593e,	// (0x00034c24) soft_indicator_pane_ParamLimits

0x593e,	// (0x00034c24) soft_indicator_pane

0x594c,	// (0x00034c32) wallpaper_pane_ParamLimits

0x594c,	// (0x00034c32) wallpaper_pane

0x222d,	// (0x00031513) wallpaper_pane_g1

0x5958,	// (0x00034c3e) indicator_pane_g1_ParamLimits

0x5958,	// (0x00034c3e) indicator_pane_g1

0xb182,	// (0x0003a468) navi_navi_icon_text_pane_srt_g1

0x22e6,	// (0x000315cc) soft_indicator_pane_t1

0x2300,	// (0x000315e6) aid_ps_area_pane

0x5964,	// (0x00034c4a) aid_ps_clock_pane

0x2311,	// (0x000315f7) aid_ps_indicator_pane

0x231d,	// (0x00031603) indicator_ps_pane_ParamLimits

0x231d,	// (0x00031603) indicator_ps_pane

0x232c,	// (0x00031612) power_save_pane_g1_ParamLimits

0x232c,	// (0x00031612) power_save_pane_g1

0x2338,	// (0x0003161e) power_save_pane_g2_ParamLimits

0x2338,	// (0x0003161e) power_save_pane_g2

0x5392,	// (0x00034678) aid_navinavi_width_pane

0x2300,	// (0x000315e6) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0003e82b) power_save_pane_g_ParamLimits

0xf545,	// (0x0003e82b) power_save_pane_g

0x2346,	// (0x0003162c) power_save_pane_t1_ParamLimits

0x2346,	// (0x0003162c) power_save_pane_t1

0x5964,	// (0x00034c4a) aid_ps_clock_pane_ParamLimits

0x2311,	// (0x000315f7) aid_ps_indicator_pane_ParamLimits

0x2358,	// (0x0003163e) power_save_pane_t4_ParamLimits

0x2358,	// (0x0003163e) power_save_pane_t4

0x0001,

0xf54a,	// (0x0003e830) power_save_pane_t_ParamLimits

0xf54a,	// (0x0003e830) power_save_pane_t

0x2382,	// (0x00031668) power_save_t3_ParamLimits

0x2382,	// (0x00031668) power_save_t3

0x236d,	// (0x00031653) power_save_t2_ParamLimits

0x236d,	// (0x00031653) power_save_t2

0x2397,	// (0x0003167d) indicator_ps_pane_g1

0x5972,	// (0x00034c58) ai_gene_pane_ParamLimits

0x5972,	// (0x00034c58) ai_gene_pane

0x597e,	// (0x00034c64) ai_links_pane_ParamLimits

0x597e,	// (0x00034c64) ai_links_pane

0x598a,	// (0x00034c70) indicator_pane_cp1_ParamLimits

0x598a,	// (0x00034c70) indicator_pane_cp1

0x5996,	// (0x00034c7c) main_pane_idle_g1_cp_ParamLimits

0x5996,	// (0x00034c7c) main_pane_idle_g1_cp

0x23a0,	// (0x00031686) popup_ai_links_title_window

0x59a2,	// (0x00034c88) soft_indicator_pane_cp1_ParamLimits

0x59a2,	// (0x00034c88) soft_indicator_pane_cp1

0xab2b,	// (0x00039e11) ai_links_pane_g1

0xab34,	// (0x00039e1a) grid_ai_links_pane

0xab10,	// (0x00039df6) ai_gene_pane_1

0xab19,	// (0x00039dff) ai_gene_pane_2

0xab22,	// (0x00039e08) list_highlight_pane_cp4

0xaaf0,	// (0x00039dd6) cell_ai_link_pane_ParamLimits

0xaaf0,	// (0x00039dd6) cell_ai_link_pane

0xaae8,	// (0x00039dce) cell_ai_link_pane_g1

0x2594,	// (0x0003187a) cell_ai_link_pane_g2

0x0001,

0xf8f2,	// (0x0003ebd8) cell_ai_link_pane_g

0x2237,	// (0x0003151d) grid_highlight_cp2

0x2237,	// (0x0003151d) bg_popup_sub_pane_cp1

0x23b7,	// (0x0003169d) popup_ai_links_title_window_t1

0xaa34,	// (0x00039d1a) ai_gene_pane_1_g1_ParamLimits

0xaa34,	// (0x00039d1a) ai_gene_pane_1_g1

0xaa40,	// (0x00039d26) ai_gene_pane_1_g2_ParamLimits

0xaa40,	// (0x00039d26) ai_gene_pane_1_g2

0x0001,

0xf8e8,	// (0x0003ebce) ai_gene_pane_1_g_ParamLimits

0xf8e8,	// (0x0003ebce) ai_gene_pane_1_g

0xaa4d,	// (0x00039d33) ai_gene_pane_1_t1_ParamLimits

0xaa4d,	// (0x00039d33) ai_gene_pane_1_t1

0xaa81,	// (0x00039d67) grid_ai_soft_ind_pane

0xaa1f,	// (0x00039d05) ai_gene_pane_2_t1_ParamLimits

0xaa1f,	// (0x00039d05) ai_gene_pane_2_t1

0x59ae,	// (0x00034c94) main_pane_empty_t1_ParamLimits

0x59ae,	// (0x00034c94) main_pane_empty_t1

0x59c6,	// (0x00034cac) main_pane_empty_t2_ParamLimits

0x59c6,	// (0x00034cac) main_pane_empty_t2

0x59db,	// (0x00034cc1) main_pane_empty_t3_ParamLimits

0x59db,	// (0x00034cc1) main_pane_empty_t3

0x59ed,	// (0x00034cd3) main_pane_empty_t4_ParamLimits

0x59ed,	// (0x00034cd3) main_pane_empty_t4

0x59ff,	// (0x00034ce5) main_pane_empty_t5_ParamLimits

0x59ff,	// (0x00034ce5) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0003e835) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0003e835) main_pane_empty_t

0x617d,	// (0x00035463) bg_popup_window_pane_ParamLimits

0x617d,	// (0x00035463) bg_popup_window_pane

0xa781,	// (0x00039a67) find_popup_pane_cp2_ParamLimits

0xa781,	// (0x00039a67) find_popup_pane_cp2

0xa78d,	// (0x00039a73) heading_pane_ParamLimits

0xa78d,	// (0x00039a73) heading_pane

0x2237,	// (0x0003151d) bg_popup_sub_pane

0xa6fb,	// (0x000399e1) bg_popup_window_pane_g1_ParamLimits

0xa6fb,	// (0x000399e1) bg_popup_window_pane_g1

0xa707,	// (0x000399ed) bg_popup_window_pane_g2_ParamLimits

0xa707,	// (0x000399ed) bg_popup_window_pane_g2

0xa713,	// (0x000399f9) bg_popup_window_pane_g3_ParamLimits

0xa713,	// (0x000399f9) bg_popup_window_pane_g3

0xa71f,	// (0x00039a05) bg_popup_window_pane_g4_ParamLimits

0xa71f,	// (0x00039a05) bg_popup_window_pane_g4

0xa72b,	// (0x00039a11) bg_popup_window_pane_g5_ParamLimits

0xa72b,	// (0x00039a11) bg_popup_window_pane_g5

0xa737,	// (0x00039a1d) bg_popup_window_pane_g6_ParamLimits

0xa737,	// (0x00039a1d) bg_popup_window_pane_g6

0xa743,	// (0x00039a29) bg_popup_window_pane_g7_ParamLimits

0xa743,	// (0x00039a29) bg_popup_window_pane_g7

0xa74f,	// (0x00039a35) bg_popup_window_pane_g8_ParamLimits

0xa74f,	// (0x00039a35) bg_popup_window_pane_g8

0xa75b,	// (0x00039a41) bg_popup_window_pane_g9_ParamLimits

0xa75b,	// (0x00039a41) bg_popup_window_pane_g9

0xa767,	// (0x00039a4d) bg_popup_window_pane_g10_ParamLimits

0xa767,	// (0x00039a4d) bg_popup_window_pane_g10

0x0009,

0xf8b0,	// (0x0003eb96) bg_popup_window_pane_g_ParamLimits

0xf8b0,	// (0x0003eb96) bg_popup_window_pane_g

0xa690,	// (0x00039976) bg_popup_heading_pane_ParamLimits

0xa690,	// (0x00039976) bg_popup_heading_pane

0x7804,	// (0x00036aea) tabs_4_passive_pane_cp_srt_ParamLimits

0x7804,	// (0x00036aea) tabs_4_passive_pane_cp_srt

0x7816,	// (0x00036afc) tabs_4_passive_pane_srt_ParamLimits

0xa6a4,	// (0x0003998a) heading_pane_g2

0x7816,	// (0x00036afc) tabs_4_passive_pane_srt

0x947d,	// (0x00038763) bg_passive_tab_pane_cp3_srt_ParamLimits

0x947d,	// (0x00038763) bg_passive_tab_pane_cp3_srt

0xa6ac,	// (0x00039992) heading_pane_t1_ParamLimits

0xa6ac,	// (0x00039992) heading_pane_t1

0xa6c3,	// (0x000399a9) heading_pane_t2_ParamLimits

0xa6c3,	// (0x000399a9) heading_pane_t2

0x0001,

0xf8ab,	// (0x0003eb91) heading_pane_t_ParamLimits

0xf8ab,	// (0x0003eb91) heading_pane_t

0xa1bb,	// (0x000394a1) bg_popup_heading_pane_g1

0xa26a,	// (0x00039550) bg_popup_heading_pane_g2

0xa274,	// (0x0003955a) bg_popup_heading_pane_g3

0xa27e,	// (0x00039564) bg_popup_heading_pane_g4

0xa288,	// (0x0003956e) bg_popup_heading_pane_g5

0xa292,	// (0x00039578) bg_popup_heading_pane_g6

0xa29a,	// (0x00039580) bg_popup_heading_pane_g7

0xa2a2,	// (0x00039588) bg_popup_heading_pane_g8

0xa2ac,	// (0x00039592) bg_popup_heading_pane_g9

0x0008,

0xf867,	// (0x0003eb4d) bg_popup_heading_pane_g

0x99b3,	// (0x00038c99) bg_popup_sub_pane_g1

0x99c3,	// (0x00038ca9) bg_popup_sub_pane_g2

0x99bb,	// (0x00038ca1) bg_popup_sub_pane_g3

0x99d3,	// (0x00038cb9) bg_popup_sub_pane_g4

0x99cb,	// (0x00038cb1) bg_popup_sub_pane_g5

0x99db,	// (0x00038cc1) bg_popup_sub_pane_g6

0x99e3,	// (0x00038cc9) bg_popup_sub_pane_g7

0x99f3,	// (0x00038cd9) bg_popup_sub_pane_g8

0x99eb,	// (0x00038cd1) bg_popup_sub_pane_g9

0x0008,

0xf841,	// (0x0003eb27) bg_popup_sub_pane_g

0x2285,	// (0x0003156b) bg_popup_window_pane_cp5_ParamLimits

0x2285,	// (0x0003156b) bg_popup_window_pane_cp5

0x23d4,	// (0x000316ba) popup_note_window_g1_ParamLimits

0x23d4,	// (0x000316ba) popup_note_window_g1

0x23e0,	// (0x000316c6) popup_note_window_t1_ParamLimits

0x23e0,	// (0x000316c6) popup_note_window_t1

0x23f6,	// (0x000316dc) popup_note_window_t2_ParamLimits

0x23f6,	// (0x000316dc) popup_note_window_t2

0x240c,	// (0x000316f2) popup_note_window_t3_ParamLimits

0x240c,	// (0x000316f2) popup_note_window_t3

0x2422,	// (0x00031708) popup_note_window_t4_ParamLimits

0x2422,	// (0x00031708) popup_note_window_t4

0x244a,	// (0x00031730) popup_note_window_t5_ParamLimits

0x244a,	// (0x00031730) popup_note_window_t5

0x0004,

0xf55a,	// (0x0003e840) popup_note_window_t_ParamLimits

0xf55a,	// (0x0003e840) popup_note_window_t

0x2494,	// (0x0003177a) bg_popup_window_pane_cp6_ParamLimits

0x2494,	// (0x0003177a) bg_popup_window_pane_cp6

0xa137,	// (0x0003941d) popup_note_image_window_g1_ParamLimits

0xa137,	// (0x0003941d) popup_note_image_window_g1

0xa143,	// (0x00039429) popup_note_image_window_g2_ParamLimits

0xa143,	// (0x00039429) popup_note_image_window_g2

0x0001,

0xf835,	// (0x0003eb1b) popup_note_image_window_g_ParamLimits

0xf835,	// (0x0003eb1b) popup_note_image_window_g

0xa15c,	// (0x00039442) popup_note_image_window_t1_ParamLimits

0xa15c,	// (0x00039442) popup_note_image_window_t1

0xa175,	// (0x0003945b) popup_note_image_window_t2_ParamLimits

0xa175,	// (0x0003945b) popup_note_image_window_t2

0xa18e,	// (0x00039474) popup_note_image_window_t3_ParamLimits

0xa18e,	// (0x00039474) popup_note_image_window_t3

0x0002,

0xf83a,	// (0x0003eb20) popup_note_image_window_t_ParamLimits

0xf83a,	// (0x0003eb20) popup_note_image_window_t

0x9ff7,	// (0x000392dd) bg_popup_window_pane_cp7_ParamLimits

0x9ff7,	// (0x000392dd) bg_popup_window_pane_cp7

0xa027,	// (0x0003930d) popup_note_wait_window_g1_ParamLimits

0xa027,	// (0x0003930d) popup_note_wait_window_g1

0xa033,	// (0x00039319) popup_note_wait_window_g2_ParamLimits

0xa033,	// (0x00039319) popup_note_wait_window_g2

0x0002,

0xf823,	// (0x0003eb09) popup_note_wait_window_g_ParamLimits

0xf823,	// (0x0003eb09) popup_note_wait_window_g

0xa04b,	// (0x00039331) popup_note_wait_window_t1_ParamLimits

0xa04b,	// (0x00039331) popup_note_wait_window_t1

0xa072,	// (0x00039358) popup_note_wait_window_t2_ParamLimits

0xa072,	// (0x00039358) popup_note_wait_window_t2

0xa090,	// (0x00039376) popup_note_wait_window_t3_ParamLimits

0xa090,	// (0x00039376) popup_note_wait_window_t3

0xa0a3,	// (0x00039389) popup_note_wait_window_t4_ParamLimits

0xa0a3,	// (0x00039389) popup_note_wait_window_t4

0x0004,

0xf82a,	// (0x0003eb10) popup_note_wait_window_t_ParamLimits

0xf82a,	// (0x0003eb10) popup_note_wait_window_t

0xa0c8,	// (0x000393ae) wait_bar_pane_ParamLimits

0xa0c8,	// (0x000393ae) wait_bar_pane

0x2237,	// (0x0003151d) wait_anim_pane

0x2237,	// (0x0003151d) wait_border_pane

0x222d,	// (0x00031513) wait_anim_pane_g1

0x222d,	// (0x00031513) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x0003e9c4) wait_anim_pane_g

0x9f9b,	// (0x00039281) wait_border_pane_g1

0x9fa6,	// (0x0003928c) wait_border_pane_g2

0x9faf,	// (0x00039295) wait_border_pane_g3

0x0002,

0xf81c,	// (0x0003eb02) wait_border_pane_g

0x9e05,	// (0x000390eb) bg_popup_window_pane_cp16_ParamLimits

0x9e05,	// (0x000390eb) bg_popup_window_pane_cp16

0x9f05,	// (0x000391eb) indicator_popup_pane_cp4_ParamLimits

0x9f05,	// (0x000391eb) indicator_popup_pane_cp4

0x9f19,	// (0x000391ff) popup_query_data_window_t1_ParamLimits

0x9f19,	// (0x000391ff) popup_query_data_window_t1

0x9f2b,	// (0x00039211) popup_query_data_window_t2_ParamLimits

0x9f2b,	// (0x00039211) popup_query_data_window_t2

0x9f44,	// (0x0003922a) popup_query_data_window_t3_ParamLimits

0x9f44,	// (0x0003922a) popup_query_data_window_t3

0x0002,

0xf815,	// (0x0003eafb) popup_query_data_window_t_ParamLimits

0xf815,	// (0x0003eafb) popup_query_data_window_t

0x9f5e,	// (0x00039244) query_popup_data_pane_ParamLimits

0x9f5e,	// (0x00039244) query_popup_data_pane

0x9f72,	// (0x00039258) query_popup_data_pane_cp1_ParamLimits

0x9f72,	// (0x00039258) query_popup_data_pane_cp1

0x9e05,	// (0x000390eb) bg_popup_window_pane_cp10_ParamLimits

0x9e05,	// (0x000390eb) bg_popup_window_pane_cp10

0x9e37,	// (0x0003911d) indicator_popup_pane_ParamLimits

0x9e37,	// (0x0003911d) indicator_popup_pane

0x9e59,	// (0x0003913f) popup_query_code_window_t1_ParamLimits

0x9e59,	// (0x0003913f) popup_query_code_window_t1

0x9e73,	// (0x00039159) popup_query_code_window_t2_ParamLimits

0x9e73,	// (0x00039159) popup_query_code_window_t2

0x9ebc,	// (0x000391a2) popup_query_code_window_t3_ParamLimits

0x9ebc,	// (0x000391a2) popup_query_code_window_t3

0x0002,

0xf80e,	// (0x0003eaf4) popup_query_code_window_t_ParamLimits

0xf80e,	// (0x0003eaf4) popup_query_code_window_t

0x9eeb,	// (0x000391d1) query_popup_pane_ParamLimits

0x9eeb,	// (0x000391d1) query_popup_pane

0x2494,	// (0x0003177a) bg_popup_window_pane_cp15_ParamLimits

0x2494,	// (0x0003177a) bg_popup_window_pane_cp15

0x24b4,	// (0x0003179a) indicator_popup_pane_cp1_ParamLimits

0x24b4,	// (0x0003179a) indicator_popup_pane_cp1

0x24c7,	// (0x000317ad) indicator_popup_pane_cp2_ParamLimits

0x24c7,	// (0x000317ad) indicator_popup_pane_cp2

0x24e2,	// (0x000317c8) popup_query_data_code_window_g1_ParamLimits

0x24e2,	// (0x000317c8) popup_query_data_code_window_g1

0x24f5,	// (0x000317db) popup_query_data_code_window_t1_ParamLimits

0x24f5,	// (0x000317db) popup_query_data_code_window_t1

0x2507,	// (0x000317ed) popup_query_data_code_window_t2_ParamLimits

0x2507,	// (0x000317ed) popup_query_data_code_window_t2

0x2519,	// (0x000317ff) popup_query_data_code_window_t3_ParamLimits

0x2519,	// (0x000317ff) popup_query_data_code_window_t3

0x252f,	// (0x00031815) popup_query_data_code_window_t4_ParamLimits

0x252f,	// (0x00031815) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0003e84b) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0003e84b) popup_query_data_code_window_t

0x73b9,	// (0x0003669f) list_single_midp_graphic_pane_g3

0x2549,	// (0x0003182f) query_popup_data_pane_cp2_ParamLimits

0x255c,	// (0x00031842) query_popup_pane_cp2_ParamLimits

0x255c,	// (0x00031842) query_popup_pane_cp2

0x2237,	// (0x0003151d) bg_popup_window_pane_cp11

0x9de9,	// (0x000390cf) heading_pane_cp5

0x9df1,	// (0x000390d7) listscroll_popup_info_pane

0x2237,	// (0x0003151d) input_focus_pane_cp3

0x2577,	// (0x0003185d) query_popup_pane_t1

0x2585,	// (0x0003186b) list_popup_info_pane_ParamLimits

0x2585,	// (0x0003186b) list_popup_info_pane

0x2594,	// (0x0003187a) listscroll_popup_info_pane_g1

0x259c,	// (0x00031882) scroll_pane_cp7

0x25a6,	// (0x0003188c) popup_info_list_pane_t1_ParamLimits

0x25a6,	// (0x0003188c) popup_info_list_pane_t1

0x25c0,	// (0x000318a6) popup_info_list_pane_t2_ParamLimits

0x25c0,	// (0x000318a6) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0003e854) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0003e854) popup_info_list_pane_t

0x2237,	// (0x0003151d) bg_popup_window_pane_cp12

0xb19c,	// (0x0003a482) find_popup_pane

0x2293,	// (0x00031579) bg_popup_window_pane_cp3

0x25da,	// (0x000318c0) heading_pane_cp3

0x25e9,	// (0x000318cf) listscroll_popup_graphic_pane

0x2237,	// (0x0003151d) bg_popup_window_pane_cp4

0x5a61,	// (0x00034d47) heading_pane_cp4

0x25f9,	// (0x000318df) listscroll_popup_colour_pane

0x5a6b,	// (0x00034d51) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x5a6b,	// (0x00034d51) cell_large_graphic_colour_none_popup_pane

0x5a7f,	// (0x00034d65) grid_large_graphic_colour_popup_pane_ParamLimits

0x5a7f,	// (0x00034d65) grid_large_graphic_colour_popup_pane

0x5aab,	// (0x00034d91) listscroll_popup_colour_pane_g1_ParamLimits

0x5aab,	// (0x00034d91) listscroll_popup_colour_pane_g1

0x5ac2,	// (0x00034da8) listscroll_popup_colour_pane_g2_ParamLimits

0x5ac2,	// (0x00034da8) listscroll_popup_colour_pane_g2

0x5ad9,	// (0x00034dbf) listscroll_popup_colour_pane_g3_ParamLimits

0x5ad9,	// (0x00034dbf) listscroll_popup_colour_pane_g3

0x5ae9,	// (0x00034dcf) listscroll_popup_colour_pane_g4_ParamLimits

0x5ae9,	// (0x00034dcf) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0003e859) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0003e859) listscroll_popup_colour_pane_g

0x2601,	// (0x000318e7) scroll_pane_cp6_ParamLimits

0x2601,	// (0x000318e7) scroll_pane_cp6

0x5afd,	// (0x00034de3) cell_large_graphic_colour_popup_pane_ParamLimits

0x5afd,	// (0x00034de3) cell_large_graphic_colour_popup_pane

0x2613,	// (0x000318f9) cell_large_graphic_colour_none_popup_pane_t1

0x2237,	// (0x0003151d) grid_highlight_pane_cp5

0x2622,	// (0x00031908) cell_large_graphic_colour_popup_pane_g1

0x262a,	// (0x00031910) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0003e862) cell_large_graphic_colour_popup_pane_g

0x2632,	// (0x00031918) cell_large_graphic_colour_popup_pane_g2_copy1

0x263b,	// (0x00031921) grid_highlight_pane_cp4

0x2643,	// (0x00031929) bg_popup_window_pane_cp8_ParamLimits

0x2643,	// (0x00031929) bg_popup_window_pane_cp8

0x265e,	// (0x00031944) popup_snote_single_text_window_g1_ParamLimits

0x265e,	// (0x00031944) popup_snote_single_text_window_g1

0x2670,	// (0x00031956) popup_snote_single_text_window_t1_ParamLimits

0x2670,	// (0x00031956) popup_snote_single_text_window_t1

0x2683,	// (0x00031969) popup_snote_single_text_window_t2_ParamLimits

0x2683,	// (0x00031969) popup_snote_single_text_window_t2

0x2696,	// (0x0003197c) popup_snote_single_text_window_t3_ParamLimits

0x2696,	// (0x0003197c) popup_snote_single_text_window_t3

0x26cf,	// (0x000319b5) popup_snote_single_text_window_t4_ParamLimits

0x26cf,	// (0x000319b5) popup_snote_single_text_window_t4

0x2703,	// (0x000319e9) popup_snote_single_text_window_t5_ParamLimits

0x2703,	// (0x000319e9) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0003e867) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0003e867) popup_snote_single_text_window_t

0x2732,	// (0x00031a18) bg_popup_window_pane_cp9_ParamLimits

0x2732,	// (0x00031a18) bg_popup_window_pane_cp9

0x265e,	// (0x00031944) popup_snote_single_graphic_window_g1_ParamLimits

0x265e,	// (0x00031944) popup_snote_single_graphic_window_g1

0x2740,	// (0x00031a26) popup_snote_single_graphic_window_g2_ParamLimits

0x2740,	// (0x00031a26) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0003e872) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0003e872) popup_snote_single_graphic_window_g

0x274c,	// (0x00031a32) popup_snote_single_graphic_window_t1_ParamLimits

0x274c,	// (0x00031a32) popup_snote_single_graphic_window_t1

0x275f,	// (0x00031a45) popup_snote_single_graphic_window_t2_ParamLimits

0x275f,	// (0x00031a45) popup_snote_single_graphic_window_t2

0x2772,	// (0x00031a58) popup_snote_single_graphic_window_t3_ParamLimits

0x2772,	// (0x00031a58) popup_snote_single_graphic_window_t3

0x27ab,	// (0x00031a91) popup_snote_single_graphic_window_t4_ParamLimits

0x27ab,	// (0x00031a91) popup_snote_single_graphic_window_t4

0x27df,	// (0x00031ac5) popup_snote_single_graphic_window_t5_ParamLimits

0x27df,	// (0x00031ac5) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0003e877) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0003e877) popup_snote_single_graphic_window_t

0xb0da,	// (0x0003a3c0) grid_graphic_popup_pane_ParamLimits

0xb0da,	// (0x0003a3c0) grid_graphic_popup_pane

0xb108,	// (0x0003a3ee) listscroll_popup_graphic_pane_g1_ParamLimits

0xb108,	// (0x0003a3ee) listscroll_popup_graphic_pane_g1

0xb11c,	// (0x0003a402) listscroll_popup_graphic_pane_g2_ParamLimits

0xb11c,	// (0x0003a402) listscroll_popup_graphic_pane_g2

0x0001,

0xf98b,	// (0x0003ec71) listscroll_popup_graphic_pane_g_ParamLimits

0xf98b,	// (0x0003ec71) listscroll_popup_graphic_pane_g

0xb130,	// (0x0003a416) scroll_pane_cp5

0xb072,	// (0x0003a358) cell_graphic_popup_pane_ParamLimits

0xb072,	// (0x0003a358) cell_graphic_popup_pane

0xb053,	// (0x0003a339) cell_graphic_popup_pane_g1

0xb05b,	// (0x0003a341) cell_graphic_popup_pane_g2

0x2632,	// (0x00031918) cell_graphic_popup_pane_g3

0x0002,

0xf984,	// (0x0003ec6a) cell_graphic_popup_pane_g

0xb064,	// (0x0003a34a) cell_graphic_popup_pane_t2

0x263b,	// (0x00031921) grid_highlight_pane_cp3

0x2820,	// (0x00031b06) list_gen_pane_ParamLimits

0x2820,	// (0x00031b06) list_gen_pane

0x2848,	// (0x00031b2e) scroll_pane

0xafab,	// (0x0003a291) bg_list_pane_g1_ParamLimits

0xafab,	// (0x0003a291) bg_list_pane_g1

0xafc8,	// (0x0003a2ae) bg_list_pane_g2_ParamLimits

0xafc8,	// (0x0003a2ae) bg_list_pane_g2

0xafdd,	// (0x0003a2c3) bg_list_pane_g3_ParamLimits

0xafdd,	// (0x0003a2c3) bg_list_pane_g3

0xaff1,	// (0x0003a2d7) bg_list_pane_g4_ParamLimits

0xaff1,	// (0x0003a2d7) bg_list_pane_g4

0xb005,	// (0x0003a2eb) bg_list_pane_g5_ParamLimits

0xb005,	// (0x0003a2eb) bg_list_pane_g5

0x0004,

0xf979,	// (0x0003ec5f) bg_list_pane_g_ParamLimits

0xf979,	// (0x0003ec5f) bg_list_pane_g

0xaf62,	// (0x0003a248) list_double2_graphic_large_graphic_pane_ParamLimits

0xaf62,	// (0x0003a248) list_double2_graphic_large_graphic_pane

0xaf62,	// (0x0003a248) list_double2_graphic_pane_ParamLimits

0xaf62,	// (0x0003a248) list_double2_graphic_pane

0xaf62,	// (0x0003a248) list_double2_large_graphic_pane_ParamLimits

0xaf62,	// (0x0003a248) list_double2_large_graphic_pane

0xaf62,	// (0x0003a248) list_double2_pane_ParamLimits

0xaf62,	// (0x0003a248) list_double2_pane

0xaf62,	// (0x0003a248) list_double_graphic_heading_pane_ParamLimits

0xaf62,	// (0x0003a248) list_double_graphic_heading_pane

0xaf62,	// (0x0003a248) list_double_graphic_pane_ParamLimits

0xaf62,	// (0x0003a248) list_double_graphic_pane

0xaf62,	// (0x0003a248) list_double_heading_pane_ParamLimits

0xaf62,	// (0x0003a248) list_double_heading_pane

0xaf62,	// (0x0003a248) list_double_large_graphic_pane_ParamLimits

0xaf62,	// (0x0003a248) list_double_large_graphic_pane

0xaf62,	// (0x0003a248) list_double_number_pane_ParamLimits

0xaf62,	// (0x0003a248) list_double_number_pane

0xaf62,	// (0x0003a248) list_double_pane_ParamLimits

0xaf62,	// (0x0003a248) list_double_pane

0xaf62,	// (0x0003a248) list_double_time_pane_ParamLimits

0xaf62,	// (0x0003a248) list_double_time_pane

0xaf62,	// (0x0003a248) list_setting_number_pane_ParamLimits

0xaf62,	// (0x0003a248) list_setting_number_pane

0xaf62,	// (0x0003a248) list_setting_pane_ParamLimits

0xaf62,	// (0x0003a248) list_setting_pane

0x7799,	// (0x00036a7f) list_single_2graphic_pane_ParamLimits

0x7799,	// (0x00036a7f) list_single_2graphic_pane

0x7799,	// (0x00036a7f) list_single_graphic_heading_pane_ParamLimits

0x7799,	// (0x00036a7f) list_single_graphic_heading_pane

0x7799,	// (0x00036a7f) list_single_graphic_pane_ParamLimits

0x7799,	// (0x00036a7f) list_single_graphic_pane

0x7799,	// (0x00036a7f) list_single_heading_pane_ParamLimits

0x7799,	// (0x00036a7f) list_single_heading_pane

0xaf90,	// (0x0003a276) list_single_large_graphic_pane_ParamLimits

0xaf90,	// (0x0003a276) list_single_large_graphic_pane

0x7799,	// (0x00036a7f) list_single_number_heading_pane_ParamLimits

0x7799,	// (0x00036a7f) list_single_number_heading_pane

0x7799,	// (0x00036a7f) list_single_number_pane_ParamLimits

0x7799,	// (0x00036a7f) list_single_number_pane

0x7799,	// (0x00036a7f) list_single_pane_ParamLimits

0x7799,	// (0x00036a7f) list_single_pane

0x2237,	// (0x0003151d) list_highlight_pane_cp1

0x5b34,	// (0x00034e1a) list_single_pane_g1_ParamLimits

0x5b34,	// (0x00034e1a) list_single_pane_g1

0x5b40,	// (0x00034e26) list_single_pane_g2_ParamLimits

0x5b40,	// (0x00034e26) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0003e889) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0003e889) list_single_pane_g

0x776b,	// (0x00036a51) list_single_pane_t1_ParamLimits

0x776b,	// (0x00036a51) list_single_pane_t1

0x5b34,	// (0x00034e1a) list_single_number_pane_g1_ParamLimits

0x5b34,	// (0x00034e1a) list_single_number_pane_g1

0x5b40,	// (0x00034e26) list_single_number_pane_g2_ParamLimits

0x5b40,	// (0x00034e26) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0003e889) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0003e889) list_single_number_pane_g

0x769d,	// (0x00036983) list_single_number_pane_t1_ParamLimits

0x769d,	// (0x00036983) list_single_number_pane_t1

0x76b3,	// (0x00036999) list_single_number_pane_t2_ParamLimits

0x76b3,	// (0x00036999) list_single_number_pane_t2

0x0001,

0xf93a,	// (0x0003ec20) list_single_number_pane_t_ParamLimits

0xf93a,	// (0x0003ec20) list_single_number_pane_t

0x5b28,	// (0x00034e0e) list_single_graphic_pane_g1_ParamLimits

0x5b28,	// (0x00034e0e) list_single_graphic_pane_g1

0x5b34,	// (0x00034e1a) list_single_graphic_pane_g2_ParamLimits

0x5b34,	// (0x00034e1a) list_single_graphic_pane_g2

0x5b40,	// (0x00034e26) list_single_graphic_pane_g3_ParamLimits

0x5b40,	// (0x00034e26) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0003e882) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0003e882) list_single_graphic_pane_g

0x5b4c,	// (0x00034e32) list_single_graphic_pane_t1_ParamLimits

0x5b4c,	// (0x00034e32) list_single_graphic_pane_t1

0x5b34,	// (0x00034e1a) list_single_heading_pane_g1_ParamLimits

0x5b34,	// (0x00034e1a) list_single_heading_pane_g1

0x5b40,	// (0x00034e26) list_single_heading_pane_g2_ParamLimits

0x5b40,	// (0x00034e26) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0003e889) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0003e889) list_single_heading_pane_g

0x5b62,	// (0x00034e48) list_single_heading_pane_t1_ParamLimits

0x5b62,	// (0x00034e48) list_single_heading_pane_t1

0x5b78,	// (0x00034e5e) list_single_heading_pane_t2_ParamLimits

0x5b78,	// (0x00034e5e) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0003e88e) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0003e88e) list_single_heading_pane_t

0x5b34,	// (0x00034e1a) list_single_number_heading_pane_g1_ParamLimits

0x5b34,	// (0x00034e1a) list_single_number_heading_pane_g1

0x5b40,	// (0x00034e26) list_single_number_heading_pane_g2_ParamLimits

0x5b40,	// (0x00034e26) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0003e889) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0003e889) list_single_number_heading_pane_g

0x5b62,	// (0x00034e48) list_single_number_heading_pane_t1_ParamLimits

0x5b62,	// (0x00034e48) list_single_number_heading_pane_t1

0x5b8a,	// (0x00034e70) list_single_number_heading_pane_t2_ParamLimits

0x5b8a,	// (0x00034e70) list_single_number_heading_pane_t2

0x5b9c,	// (0x00034e82) list_single_number_heading_pane_t3_ParamLimits

0x5b9c,	// (0x00034e82) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0003e893) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0003e893) list_single_number_heading_pane_t

0x5bae,	// (0x00034e94) list_single_graphic_heading_pane_g1_ParamLimits

0x5bae,	// (0x00034e94) list_single_graphic_heading_pane_g1

0x5bba,	// (0x00034ea0) list_single_graphic_heading_pane_g4_ParamLimits

0x5bba,	// (0x00034ea0) list_single_graphic_heading_pane_g4

0x5b40,	// (0x00034e26) list_single_graphic_heading_pane_g5_ParamLimits

0x5b40,	// (0x00034e26) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0003e89a) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0003e89a) list_single_graphic_heading_pane_g

0x5b62,	// (0x00034e48) list_single_graphic_heading_pane_t1_ParamLimits

0x5b62,	// (0x00034e48) list_single_graphic_heading_pane_t1

0x5bcb,	// (0x00034eb1) list_single_graphic_heading_pane_t2_ParamLimits

0x5bcb,	// (0x00034eb1) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0003e8a1) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0003e8a1) list_single_graphic_heading_pane_t

0x5bdd,	// (0x00034ec3) list_single_large_graphic_pane_g1_ParamLimits

0x5bdd,	// (0x00034ec3) list_single_large_graphic_pane_g1

0x42bc,	// (0x000335a2) list_single_large_graphic_pane_g2_ParamLimits

0x42bc,	// (0x000335a2) list_single_large_graphic_pane_g2

0x5be9,	// (0x00034ecf) list_single_large_graphic_pane_g3_ParamLimits

0x5be9,	// (0x00034ecf) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0003e8a6) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0003e8a6) list_single_large_graphic_pane_g

0x9fa6,	// (0x0003928c) wait_border_pane_g2_copy1

0x5bf5,	// (0x00034edb) list_single_large_graphic_pane_g4_cp2

0x5bfd,	// (0x00034ee3) list_single_large_graphic_pane_t1_ParamLimits

0x5bfd,	// (0x00034ee3) list_single_large_graphic_pane_t1

0x5c13,	// (0x00034ef9) list_double_pane_g1_ParamLimits

0x5c13,	// (0x00034ef9) list_double_pane_g1

0x5c1f,	// (0x00034f05) list_double_pane_g2_ParamLimits

0x5c1f,	// (0x00034f05) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0003e8ad) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0003e8ad) list_double_pane_g

0x5c2b,	// (0x00034f11) list_double_pane_t1_ParamLimits

0x5c2b,	// (0x00034f11) list_double_pane_t1

0x5c41,	// (0x00034f27) list_double_pane_t2_ParamLimits

0x5c41,	// (0x00034f27) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0003e8b2) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0003e8b2) list_double_pane_t

0x5c53,	// (0x00034f39) list_double2_pane_g1_ParamLimits

0x5c53,	// (0x00034f39) list_double2_pane_g1

0x5c64,	// (0x00034f4a) list_double2_pane_g2_ParamLimits

0x5c64,	// (0x00034f4a) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0003e8b7) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0003e8b7) list_double2_pane_g

0x5c70,	// (0x00034f56) list_double2_pane_t1_ParamLimits

0x5c70,	// (0x00034f56) list_double2_pane_t1

0x5c86,	// (0x00034f6c) list_double2_pane_t2_ParamLimits

0x5c86,	// (0x00034f6c) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0003e8bc) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0003e8bc) list_double2_pane_t

0x5c13,	// (0x00034ef9) list_double_number_pane_g1_ParamLimits

0x5c13,	// (0x00034ef9) list_double_number_pane_g1

0x5c1f,	// (0x00034f05) list_double_number_pane_g2_ParamLimits

0x5c1f,	// (0x00034f05) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0003e8ad) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0003e8ad) list_double_number_pane_g

0x5c98,	// (0x00034f7e) list_double_number_pane_t1_ParamLimits

0x5c98,	// (0x00034f7e) list_double_number_pane_t1

0x5caa,	// (0x00034f90) list_double_number_pane_t2_ParamLimits

0x5caa,	// (0x00034f90) list_double_number_pane_t2

0x5cc0,	// (0x00034fa6) list_double_number_pane_t3_ParamLimits

0x5cc0,	// (0x00034fa6) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0003e8c1) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0003e8c1) list_double_number_pane_t

0x5cd2,	// (0x00034fb8) list_double_graphic_pane_g1_ParamLimits

0x5cd2,	// (0x00034fb8) list_double_graphic_pane_g1

0x5cde,	// (0x00034fc4) list_double_graphic_pane_g2_ParamLimits

0x5cde,	// (0x00034fc4) list_double_graphic_pane_g2

0x5ced,	// (0x00034fd3) list_double_graphic_pane_g3_ParamLimits

0x5ced,	// (0x00034fd3) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0003e8c8) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0003e8c8) list_double_graphic_pane_g

0x5d05,	// (0x00034feb) list_double_graphic_pane_t1_ParamLimits

0x5d05,	// (0x00034feb) list_double_graphic_pane_t1

0x5d1b,	// (0x00035001) list_double_graphic_pane_t2_ParamLimits

0x5d1b,	// (0x00035001) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0003e8d1) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0003e8d1) list_double_graphic_pane_t

0x5d2d,	// (0x00035013) list_double2_graphic_pane_g1_ParamLimits

0x5d2d,	// (0x00035013) list_double2_graphic_pane_g1

0x42b0,	// (0x00033596) list_double2_graphic_pane_g2_ParamLimits

0x42b0,	// (0x00033596) list_double2_graphic_pane_g2

0x5d39,	// (0x0003501f) list_double2_graphic_pane_g3_ParamLimits

0x5d39,	// (0x0003501f) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0003e8d6) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0003e8d6) list_double2_graphic_pane_g

0x5d45,	// (0x0003502b) list_double2_graphic_pane_t1_ParamLimits

0x5d45,	// (0x0003502b) list_double2_graphic_pane_t1

0x5d5b,	// (0x00035041) list_double2_graphic_pane_t2_ParamLimits

0x5d5b,	// (0x00035041) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0003e8dd) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0003e8dd) list_double2_graphic_pane_t

0x5d6d,	// (0x00035053) list_double_large_graphic_pane_g1_ParamLimits

0x5d6d,	// (0x00035053) list_double_large_graphic_pane_g1

0x5d8c,	// (0x00035072) list_double_large_graphic_pane_g2_ParamLimits

0x5d8c,	// (0x00035072) list_double_large_graphic_pane_g2

0x5c1f,	// (0x00034f05) list_double_large_graphic_pane_g3_ParamLimits

0x5c1f,	// (0x00034f05) list_double_large_graphic_pane_g3

0x5d9d,	// (0x00035083) list_double_large_graphic_pane_g4_ParamLimits

0x5d9d,	// (0x00035083) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0003e8e2) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0003e8e2) list_double_large_graphic_pane_g

0x5db0,	// (0x00035096) list_double_large_graphic_pane_t1_ParamLimits

0x5db0,	// (0x00035096) list_double_large_graphic_pane_t1

0x5dc9,	// (0x000350af) list_double_large_graphic_pane_t2_ParamLimits

0x5dc9,	// (0x000350af) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0003e8ed) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0003e8ed) list_double_large_graphic_pane_t

0x5ddb,	// (0x000350c1) list_double2_large_graphic_pane_g1_ParamLimits

0x5ddb,	// (0x000350c1) list_double2_large_graphic_pane_g1

0x5c53,	// (0x00034f39) list_double2_large_graphic_pane_g2_ParamLimits

0x5c53,	// (0x00034f39) list_double2_large_graphic_pane_g2

0x5c64,	// (0x00034f4a) list_double2_large_graphic_pane_g3_ParamLimits

0x5c64,	// (0x00034f4a) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0003e8f2) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0003e8f2) list_double2_large_graphic_pane_g

0x5de7,	// (0x000350cd) list_double2_large_graphic_pane_t1_ParamLimits

0x5de7,	// (0x000350cd) list_double2_large_graphic_pane_t1

0x5dfd,	// (0x000350e3) list_double2_large_graphic_pane_t2_ParamLimits

0x5dfd,	// (0x000350e3) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0003e8f9) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0003e8f9) list_double2_large_graphic_pane_t

0x5e0f,	// (0x000350f5) list_double_heading_pane_g1_ParamLimits

0x5e0f,	// (0x000350f5) list_double_heading_pane_g1

0x3f2a,	// (0x00033210) list_double_heading_pane_g2_ParamLimits

0x3f2a,	// (0x00033210) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0003e8fe) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0003e8fe) list_double_heading_pane_g

0x5e20,	// (0x00035106) list_double_heading_pane_t1_ParamLimits

0x5e20,	// (0x00035106) list_double_heading_pane_t1

0x5c86,	// (0x00034f6c) list_double_heading_pane_t2_ParamLimits

0x5c86,	// (0x00034f6c) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0003e903) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0003e903) list_double_heading_pane_t

0x5d2d,	// (0x00035013) list_double_graphic_heading_pane_g1_ParamLimits

0x5d2d,	// (0x00035013) list_double_graphic_heading_pane_g1

0x5e0f,	// (0x000350f5) list_double_graphic_heading_pane_g2_ParamLimits

0x5e0f,	// (0x000350f5) list_double_graphic_heading_pane_g2

0x3f2a,	// (0x00033210) list_double_graphic_heading_pane_g3_ParamLimits

0x3f2a,	// (0x00033210) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0003e908) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0003e908) list_double_graphic_heading_pane_g

0x5e36,	// (0x0003511c) list_double_graphic_heading_pane_t1_ParamLimits

0x5e36,	// (0x0003511c) list_double_graphic_heading_pane_t1

0x5d5b,	// (0x00035041) list_double_graphic_heading_pane_t2_ParamLimits

0x5d5b,	// (0x00035041) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0003e90f) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0003e90f) list_double_graphic_heading_pane_t

0x5d8c,	// (0x00035072) list_double_time_pane_g1_ParamLimits

0x5d8c,	// (0x00035072) list_double_time_pane_g1

0x5c1f,	// (0x00034f05) list_double_time_pane_g2_ParamLimits

0x5c1f,	// (0x00034f05) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0003e914) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0003e914) list_double_time_pane_g

0x5e4c,	// (0x00035132) list_double_time_pane_t1_ParamLimits

0x5e4c,	// (0x00035132) list_double_time_pane_t1

0x5e62,	// (0x00035148) list_double_time_pane_t2_ParamLimits

0x5e62,	// (0x00035148) list_double_time_pane_t2

0x5e74,	// (0x0003515a) list_double_time_pane_t3_ParamLimits

0x5e74,	// (0x0003515a) list_double_time_pane_t3

0x5e86,	// (0x0003516c) list_double_time_pane_t4_ParamLimits

0x5e86,	// (0x0003516c) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0003e919) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0003e919) list_double_time_pane_t

0x3f1e,	// (0x00033204) list_setting_pane_g1_ParamLimits

0x3f1e,	// (0x00033204) list_setting_pane_g1

0x3f2a,	// (0x00033210) list_setting_pane_g2_ParamLimits

0x3f2a,	// (0x00033210) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0003e922) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0003e922) list_setting_pane_g

0x5e98,	// (0x0003517e) list_setting_pane_t1_ParamLimits

0x5e98,	// (0x0003517e) list_setting_pane_t1

0x5eaf,	// (0x00035195) list_setting_pane_t2_ParamLimits

0x5eaf,	// (0x00035195) list_setting_pane_t2

0x0002,

0xf641,	// (0x0003e927) list_setting_pane_t_ParamLimits

0xf641,	// (0x0003e927) list_setting_pane_t

0x5eee,	// (0x000351d4) set_value_pane_cp_ParamLimits

0x5eee,	// (0x000351d4) set_value_pane_cp

0x5efc,	// (0x000351e2) list_setting_number_pane_g1_ParamLimits

0x5efc,	// (0x000351e2) list_setting_number_pane_g1

0x5f08,	// (0x000351ee) list_setting_number_pane_g2_ParamLimits

0x5f08,	// (0x000351ee) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x0003e92e) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x0003e92e) list_setting_number_pane_g

0x5f14,	// (0x000351fa) list_setting_number_pane_t1_ParamLimits

0x5f14,	// (0x000351fa) list_setting_number_pane_t1

0x5f28,	// (0x0003520e) list_setting_number_pane_t2_ParamLimits

0x5f28,	// (0x0003520e) list_setting_number_pane_t2

0x5f3f,	// (0x00035225) list_setting_number_pane_t3_ParamLimits

0x5f3f,	// (0x00035225) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x0003e933) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x0003e933) list_setting_number_pane_t

0x5eee,	// (0x000351d4) set_value_pane_ParamLimits

0x5eee,	// (0x000351d4) set_value_pane

0x287c,	// (0x00031b62) bg_set_opt_pane_ParamLimits

0x287c,	// (0x00031b62) bg_set_opt_pane

0x3f4b,	// (0x00033231) set_value_pane_t1

0x289d,	// (0x00031b83) slider_set_pane_cp3

0x28a6,	// (0x00031b8c) volume_small_pane_cp

0x28af,	// (0x00031b95) list_form_gen_pane

0x28b8,	// (0x00031b9e) scroll_pane_cp8

0x5f82,	// (0x00035268) form_field_data_pane_ParamLimits

0x5f82,	// (0x00035268) form_field_data_pane

0x5fa0,	// (0x00035286) form_field_data_wide_pane_ParamLimits

0x5fa0,	// (0x00035286) form_field_data_wide_pane

0x3f69,	// (0x0003324f) form_field_popup_pane_ParamLimits

0x3f69,	// (0x0003324f) form_field_popup_pane

0x5fc5,	// (0x000352ab) form_field_popup_wide_pane_ParamLimits

0x5fc5,	// (0x000352ab) form_field_popup_wide_pane

0x3f8b,	// (0x00033271) form_field_slider_pane_ParamLimits

0x3f8b,	// (0x00033271) form_field_slider_pane

0x3f9e,	// (0x00033284) form_field_slider_wide_pane_ParamLimits

0x3f9e,	// (0x00033284) form_field_slider_wide_pane

0x28c9,	// (0x00031baf) data_form_pane

0x5ff0,	// (0x000352d6) form_field_data_pane_t1

0x28d5,	// (0x00031bbb) input_focus_pane

0x3fb1,	// (0x00033297) data_form_wide_pane

0x3fce,	// (0x000332b4) form_field_data_wide_pane_t1

0x2650,	// (0x00031936) input_focus_pane_cp6

0x600a,	// (0x000352f0) form_field_popup_pane_t1

0x28d5,	// (0x00031bbb) input_focus_pane_cp7

0x2903,	// (0x00031be9) list_form_pane

0x3ff8,	// (0x000332de) form_field_popup_wide_pane_t1

0x28d5,	// (0x00031bbb) input_focus_pane_cp8

0x290f,	// (0x00031bf5) list_form_wide_pane

0x602c,	// (0x00035312) form_field_slider_pane_t1_ParamLimits

0x602c,	// (0x00035312) form_field_slider_pane_t1

0x6044,	// (0x0003532a) form_field_slider_pane_t2_ParamLimits

0x6044,	// (0x0003532a) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x0003e943) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x0003e943) form_field_slider_pane_t

0x2285,	// (0x0003156b) input_focus_pane_cp9_ParamLimits

0x2285,	// (0x0003156b) input_focus_pane_cp9

0x6059,	// (0x0003533f) slider_cont_pane_ParamLimits

0x6059,	// (0x0003533f) slider_cont_pane

0x291b,	// (0x00031c01) form_field_slider_wide_pane_t1_ParamLimits

0x291b,	// (0x00031c01) form_field_slider_wide_pane_t1

0x400d,	// (0x000332f3) form_field_slider_wide_pane_t2_ParamLimits

0x400d,	// (0x000332f3) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x0003e948) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x0003e948) form_field_slider_wide_pane_t

0x2285,	// (0x0003156b) input_focus_pane_cp10_ParamLimits

0x2285,	// (0x0003156b) input_focus_pane_cp10

0x606d,	// (0x00035353) slider_cont_pane_cp1_ParamLimits

0x606d,	// (0x00035353) slider_cont_pane_cp1

0x6081,	// (0x00035367) slider_form_pane_cp

0x292d,	// (0x00031c13) input_focus_pane_g1

0x2935,	// (0x00031c1b) input_focus_pane_g2

0x293d,	// (0x00031c23) input_focus_pane_g3

0x2945,	// (0x00031c2b) input_focus_pane_g4

0x294d,	// (0x00031c33) input_focus_pane_g5

0x2955,	// (0x00031c3b) input_focus_pane_g6

0x295d,	// (0x00031c43) input_focus_pane_g7

0x2965,	// (0x00031c4b) input_focus_pane_g8

0x296d,	// (0x00031c53) input_focus_pane_g9

0x222d,	// (0x00031513) input_focus_pane_g10

0x0009,

0xf667,	// (0x0003e94d) input_focus_pane_g

0x9faf,	// (0x00039295) wait_border_pane_g3_copy1

0x6089,	// (0x0003536f) data_form_pane_t1

0x222d,	// (0x00031513) wait_anim_pane_g1_copy1

0x773d,	// (0x00036a23) data_form_wide_pane_t1

0x60a6,	// (0x0003538c) list_form_graphic_pane_cp_ParamLimits

0x60a6,	// (0x0003538c) list_form_graphic_pane_cp

0xaf06,	// (0x0003a1ec) slider_form_pane_g1

0xaf0f,	// (0x0003a1f5) slider_form_pane_g2

0x0006,

0xf96a,	// (0x0003ec50) slider_form_pane_g

0x401f,	// (0x00033305) list_form_graphic_pane_ParamLimits

0x401f,	// (0x00033305) list_form_graphic_pane

0x4031,	// (0x00033317) list_form_graphic_pane_g1

0x4039,	// (0x0003331f) list_form_graphic_pane_t1_ParamLimits

0x4039,	// (0x0003331f) list_form_graphic_pane_t1

0x2293,	// (0x00031579) list_highlight_pane_cp5_ParamLimits

0x2293,	// (0x00031579) list_highlight_pane_cp5

0x60bb,	// (0x000353a1) find_pane_g1

0x60c4,	// (0x000353aa) input_find_pane

0x60cd,	// (0x000353b3) input_find_pane_g1_ParamLimits

0x60cd,	// (0x000353b3) input_find_pane_g1

0x60d9,	// (0x000353bf) input_find_pane_t1_ParamLimits

0x60d9,	// (0x000353bf) input_find_pane_t1

0x60ee,	// (0x000353d4) input_find_pane_t2_ParamLimits

0x60ee,	// (0x000353d4) input_find_pane_t2

0x0001,

0xf67c,	// (0x0003e962) input_find_pane_t_ParamLimits

0xf67c,	// (0x0003e962) input_find_pane_t

0x6103,	// (0x000353e9) input_focus_pane_cp5_ParamLimits

0x6103,	// (0x000353e9) input_focus_pane_cp5

0x6122,	// (0x00035408) bg_popup_window_pane_cp2_ParamLimits

0x6122,	// (0x00035408) bg_popup_window_pane_cp2

0x612f,	// (0x00035415) listscroll_menu_pane_ParamLimits

0x612f,	// (0x00035415) listscroll_menu_pane

0x613b,	// (0x00035421) popup_submenu_window_ParamLimits

0x613b,	// (0x00035421) popup_submenu_window

0x616b,	// (0x00035451) find_popup_pane_g1

0x6173,	// (0x00035459) input_popup_find_pane_cp

0x617d,	// (0x00035463) input_focus_pane_cp4_ParamLimits

0x617d,	// (0x00035463) input_focus_pane_cp4

0x6199,	// (0x0003547f) input_popup_find_pane_t1_ParamLimits

0x6199,	// (0x0003547f) input_popup_find_pane_t1

0x2237,	// (0x0003151d) bg_popup_sub_pane_cp

0x61c7,	// (0x000354ad) listscroll_popup_sub_pane

0x61cf,	// (0x000354b5) list_submenu_pane_ParamLimits

0x61cf,	// (0x000354b5) list_submenu_pane

0x61e0,	// (0x000354c6) scroll_pane_cp4

0x61e8,	// (0x000354ce) list_single_popup_submenu_pane_ParamLimits

0x61e8,	// (0x000354ce) list_single_popup_submenu_pane

0x61fd,	// (0x000354e3) list_single_popup_submenu_pane_g1

0x6205,	// (0x000354eb) list_single_popup_submenu_pane_t1_ParamLimits

0x6205,	// (0x000354eb) list_single_popup_submenu_pane_t1

0x2293,	// (0x00031579) bg_active_tab_pane_cp1_ParamLimits

0x2293,	// (0x00031579) bg_active_tab_pane_cp1

0x621a,	// (0x00035500) tabs_2_active_pane_g1

0x6222,	// (0x00035508) tabs_2_active_pane_t1

0x2293,	// (0x00031579) bg_passive_tab_pane_cp1_ParamLimits

0x2293,	// (0x00031579) bg_passive_tab_pane_cp1

0x621a,	// (0x00035500) tabs_2_passive_pane_g1

0x6222,	// (0x00035508) tabs_2_passive_pane_t1

0x6234,	// (0x0003551a) bg_active_tab_pane_cp4

0x6242,	// (0x00035528) tabs_2_long_active_pane_t1

0x6255,	// (0x0003553b) bg_passive_tab_pane_cp4

0x73c1,	// (0x000366a7) list_single_midp_graphic_pane_g4_ParamLimits

0x6234,	// (0x0003551a) bg_active_tab_pane_cp5

0x6261,	// (0x00035547) tabs_3_long_active_pane_t1

0x6255,	// (0x0003553b) bg_passive_tab_pane_cp5

0x73c1,	// (0x000366a7) list_single_midp_graphic_pane_g4

0x2293,	// (0x00031579) bg_popup_window_pane_cp13_ParamLimits

0x2293,	// (0x00031579) bg_popup_window_pane_cp13

0x627c,	// (0x00035562) listscroll_popup_fast_pane_ParamLimits

0x627c,	// (0x00035562) listscroll_popup_fast_pane

0x628b,	// (0x00035571) grid_popup_fast_pane_ParamLimits

0x628b,	// (0x00035571) grid_popup_fast_pane

0x629d,	// (0x00035583) scroll_pane_cp9_ParamLimits

0x629d,	// (0x00035583) scroll_pane_cp9

0xc856,	// (0x0003bb3c) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc856,	// (0x0003bb3c) list_single_graphic_hl_pane_t1_cp2

0x62c1,	// (0x000355a7) input_focus_pane_cp20_ParamLimits

0x62c1,	// (0x000355a7) input_focus_pane_cp20

0x62cf,	// (0x000355b5) query_popup_data_pane_t1_ParamLimits

0x62cf,	// (0x000355b5) query_popup_data_pane_t1

0x62e2,	// (0x000355c8) query_popup_data_pane_t2_ParamLimits

0x62e2,	// (0x000355c8) query_popup_data_pane_t2

0x6328,	// (0x0003560e) query_popup_data_pane_t3_ParamLimits

0x6328,	// (0x0003560e) query_popup_data_pane_t3

0x6369,	// (0x0003564f) query_popup_data_pane_t4_ParamLimits

0x6369,	// (0x0003564f) query_popup_data_pane_t4

0x63a5,	// (0x0003568b) query_popup_data_pane_t5_ParamLimits

0x63a5,	// (0x0003568b) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x0003e967) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x0003e967) query_popup_data_pane_t

0x292d,	// (0x00031c13) bg_set_opt_pane_g1

0x2935,	// (0x00031c1b) bg_set_opt_pane_g2

0x293d,	// (0x00031c23) bg_set_opt_pane_g3

0x2945,	// (0x00031c2b) bg_set_opt_pane_g4

0x294d,	// (0x00031c33) bg_set_opt_pane_g5

0x2955,	// (0x00031c3b) bg_set_opt_pane_g6

0x295d,	// (0x00031c43) bg_set_opt_pane_g7

0x2965,	// (0x00031c4b) bg_set_opt_pane_g8

0x296d,	// (0x00031c53) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x0003e972) bg_set_opt_pane_g

0x69c7,	// (0x00035cad) control_top_pane_stacon_ParamLimits

0x69c7,	// (0x00035cad) control_top_pane_stacon

0x6a1a,	// (0x00035d00) signal_pane_stacon_ParamLimits

0x6a1a,	// (0x00035d00) signal_pane_stacon

0x8ddf,	// (0x000380c5) stacon_top_pane_g1_ParamLimits

0x8ddf,	// (0x000380c5) stacon_top_pane_g1

0x6a3f,	// (0x00035d25) title_pane_stacon_ParamLimits

0x6a3f,	// (0x00035d25) title_pane_stacon

0x6a69,	// (0x00035d4f) uni_indicator_pane_stacon_ParamLimits

0x6a69,	// (0x00035d4f) uni_indicator_pane_stacon

0x6a7e,	// (0x00035d64) battery_pane_stacon_ParamLimits

0x6a7e,	// (0x00035d64) battery_pane_stacon

0x6ac2,	// (0x00035da8) control_bottom_pane_stacon_ParamLimits

0x6ac2,	// (0x00035da8) control_bottom_pane_stacon

0x6ae5,	// (0x00035dcb) navi_pane_stacon_ParamLimits

0x6ae5,	// (0x00035dcb) navi_pane_stacon

0x8e01,	// (0x000380e7) stacon_bottom_pane_g1_ParamLimits

0x8e01,	// (0x000380e7) stacon_bottom_pane_g1

0x63dc,	// (0x000356c2) aid_levels_signal_lsc_ParamLimits

0x63dc,	// (0x000356c2) aid_levels_signal_lsc

0x63f3,	// (0x000356d9) signal_pane_stacon_g1_ParamLimits

0x63f3,	// (0x000356d9) signal_pane_stacon_g1

0x6407,	// (0x000356ed) signal_pane_stacon_g2_ParamLimits

0x6407,	// (0x000356ed) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x0003e985) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x0003e985) signal_pane_stacon_g

0x6449,	// (0x0003572f) title_pane_stacon_t1_ParamLimits

0x6449,	// (0x0003572f) title_pane_stacon_t1

0x646e,	// (0x00035754) uni_indicator_pane_stacon_g1

0x6478,	// (0x0003575e) uni_indicator_pane_stacon_g2

0x6482,	// (0x00035768) uni_indicator_pane_stacon_g3

0x648c,	// (0x00035772) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x0003e991) uni_indicator_pane_stacon_g

0x6496,	// (0x0003577c) control_top_pane_stacon_g1

0x649e,	// (0x00035784) control_top_pane_stacon_t1_ParamLimits

0x649e,	// (0x00035784) control_top_pane_stacon_t1

0x64d5,	// (0x000357bb) aid_levels_battery_lsc_ParamLimits

0x64d5,	// (0x000357bb) aid_levels_battery_lsc

0x64ed,	// (0x000357d3) battery_pane_stacon_g1_ParamLimits

0x64ed,	// (0x000357d3) battery_pane_stacon_g1

0x6500,	// (0x000357e6) battery_pane_stacon_g2_ParamLimits

0x6500,	// (0x000357e6) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x0003e99a) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x0003e99a) battery_pane_stacon_g

0x653e,	// (0x00035824) navi_icon_pane_stacon

0x6552,	// (0x00035838) navi_navi_pane_stacon

0x653e,	// (0x00035824) navi_text_pane_stacon

0x6496,	// (0x0003577c) control_bottom_pane_stacon_g1

0x6568,	// (0x0003584e) control_bottom_pane_stacon_t1_ParamLimits

0x6568,	// (0x0003584e) control_bottom_pane_stacon_t1

0x65b9,	// (0x0003589f) grid_app_pane_ParamLimits

0x65b9,	// (0x0003589f) grid_app_pane

0x65db,	// (0x000358c1) scroll_pane_cp15_ParamLimits

0x65db,	// (0x000358c1) scroll_pane_cp15

0x65ee,	// (0x000358d4) cell_app_pane_ParamLimits

0x65ee,	// (0x000358d4) cell_app_pane

0x661a,	// (0x00035900) cell_app_pane_g1_ParamLimits

0x661a,	// (0x00035900) cell_app_pane_g1

0x663e,	// (0x00035924) cell_app_pane_g2_ParamLimits

0x663e,	// (0x00035924) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x0003e99f) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x0003e99f) cell_app_pane_g

0x664a,	// (0x00035930) cell_app_pane_t1_ParamLimits

0x664a,	// (0x00035930) cell_app_pane_t1

0x6661,	// (0x00035947) grid_highlight_pane_ParamLimits

0x6661,	// (0x00035947) grid_highlight_pane

0x292d,	// (0x00031c13) cell_highlight_pane_g1

0x2935,	// (0x00031c1b) cell_highlight_pane_g2

0x293d,	// (0x00031c23) cell_highlight_pane_g3

0x2945,	// (0x00031c2b) cell_highlight_pane_g4

0x294d,	// (0x00031c33) cell_highlight_pane_g5

0x2955,	// (0x00031c3b) cell_highlight_pane_g6

0x295d,	// (0x00031c43) cell_highlight_pane_g7

0x2965,	// (0x00031c4b) cell_highlight_pane_g8

0x296d,	// (0x00031c53) cell_highlight_pane_g9

0x222d,	// (0x00031513) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x0003e94d) cell_highlight_pane_g

0x6685,	// (0x0003596b) bg_scroll_pane

0x66a4,	// (0x0003598a) scroll_handle_pane

0x66f5,	// (0x000359db) scroll_bg_pane_g1

0x670a,	// (0x000359f0) scroll_bg_pane_g2

0x6722,	// (0x00035a08) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x0003e9a4) scroll_bg_pane_g

0x6737,	// (0x00035a1d) scroll_handle_focus_pane_ParamLimits

0x6737,	// (0x00035a1d) scroll_handle_focus_pane

0x66f5,	// (0x000359db) scroll_handle_pane_g1

0x6744,	// (0x00035a2a) scroll_handle_pane_g2

0x6722,	// (0x00035a08) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x0003e9ab) scroll_handle_pane_g

0x617d,	// (0x00035463) bg_popup_sub_pane_cp21_ParamLimits

0x617d,	// (0x00035463) bg_popup_sub_pane_cp21

0x6758,	// (0x00035a3e) popup_fep_japan_predictive_window_t1_ParamLimits

0x6758,	// (0x00035a3e) popup_fep_japan_predictive_window_t1

0x676f,	// (0x00035a55) popup_fep_japan_predictive_window_t2_ParamLimits

0x676f,	// (0x00035a55) popup_fep_japan_predictive_window_t2

0x67a2,	// (0x00035a88) popup_fep_japan_predictive_window_t3_ParamLimits

0x67a2,	// (0x00035a88) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x0003e9b2) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x0003e9b2) popup_fep_japan_predictive_window_t

0x2237,	// (0x0003151d) bg_popup_sub_pane_cp23

0x67d9,	// (0x00035abf) listscroll_japin_cand_pane

0x67e1,	// (0x00035ac7) popup_fep_japan_candidate_window_t1

0x67ef,	// (0x00035ad5) candidate_pane_ParamLimits

0x67ef,	// (0x00035ad5) candidate_pane

0x6801,	// (0x00035ae7) scroll_pane_cp30

0x680b,	// (0x00035af1) list_single_popup_jap_candidate_pane_ParamLimits

0x680b,	// (0x00035af1) list_single_popup_jap_candidate_pane

0x2237,	// (0x0003151d) list_highlight_pane_cp30

0x681f,	// (0x00035b05) list_single_popup_jap_candidate_pane_t1

0x682e,	// (0x00035b14) level_1_signal

0x683b,	// (0x00035b21) level_2_signal

0x6848,	// (0x00035b2e) level_3_signal

0x6855,	// (0x00035b3b) level_4_signal

0x8b07,	// (0x00037ded) level_5_signal

0x8b14,	// (0x00037dfa) level_6_signal

0x8b21,	// (0x00037e07) level_7_signal

0x682e,	// (0x00035b14) level_1_battery

0x683b,	// (0x00035b21) level_2_battery

0x6848,	// (0x00035b2e) level_3_battery

0x6855,	// (0x00035b3b) level_4_battery

0x8b07,	// (0x00037ded) level_5_battery

0x8b14,	// (0x00037dfa) level_6_battery

0x8b21,	// (0x00037e07) level_7_battery

0x8b46,	// (0x00037e2c) list_menu_pane_ParamLimits

0x8b46,	// (0x00037e2c) list_menu_pane

0x8b5c,	// (0x00037e42) scroll_pane_cp25_ParamLimits

0x8b5c,	// (0x00037e42) scroll_pane_cp25

0x8b75,	// (0x00037e5b) list_double2_graphic_pane_cp2_ParamLimits

0x8b75,	// (0x00037e5b) list_double2_graphic_pane_cp2

0x8b75,	// (0x00037e5b) list_double2_large_graphic_pane_cp2_ParamLimits

0x8b75,	// (0x00037e5b) list_double2_large_graphic_pane_cp2

0x8b75,	// (0x00037e5b) list_double2_pane_cp2_ParamLimits

0x8b75,	// (0x00037e5b) list_double2_pane_cp2

0x8b75,	// (0x00037e5b) list_double_graphic_pane_cp2_ParamLimits

0x8b75,	// (0x00037e5b) list_double_graphic_pane_cp2

0x8b75,	// (0x00037e5b) list_double_large_graphic_pane_cp2_ParamLimits

0x8b75,	// (0x00037e5b) list_double_large_graphic_pane_cp2

0x8b75,	// (0x00037e5b) list_double_number_pane_cp2_ParamLimits

0x8b75,	// (0x00037e5b) list_double_number_pane_cp2

0x8b75,	// (0x00037e5b) list_double_pane_cp2_ParamLimits

0x8b75,	// (0x00037e5b) list_double_pane_cp2

0x8b9b,	// (0x00037e81) list_single_2graphic_pane_cp2_ParamLimits

0x8b9b,	// (0x00037e81) list_single_2graphic_pane_cp2

0x8b9b,	// (0x00037e81) list_single_graphic_heading_pane_cp2_ParamLimits

0x8b9b,	// (0x00037e81) list_single_graphic_heading_pane_cp2

0x8b9b,	// (0x00037e81) list_single_graphic_pane_cp2_ParamLimits

0x8b9b,	// (0x00037e81) list_single_graphic_pane_cp2

0x8b9b,	// (0x00037e81) list_single_heading_pane_cp2_ParamLimits

0x8b9b,	// (0x00037e81) list_single_heading_pane_cp2

0x8bb8,	// (0x00037e9e) list_single_large_graphic_pane_cp2_ParamLimits

0x8bb8,	// (0x00037e9e) list_single_large_graphic_pane_cp2

0x8b9b,	// (0x00037e81) list_single_number_heading_pane_cp2_ParamLimits

0x8b9b,	// (0x00037e81) list_single_number_heading_pane_cp2

0x8b9b,	// (0x00037e81) list_single_number_pane_cp2_ParamLimits

0x8b9b,	// (0x00037e81) list_single_number_pane_cp2

0x8b9b,	// (0x00037e81) list_single_pane_cp2_ParamLimits

0x8b9b,	// (0x00037e81) list_single_pane_cp2

0x8c26,	// (0x00037f0c) bg_popup_sub_pane_cp22

0x68eb,	// (0x00035bd1) popup_side_volume_key_window_g1

0x6915,	// (0x00035bfb) popup_side_volume_key_window_t1

0x6933,	// (0x00035c19) volume_small_pane_cp1

0x2285,	// (0x0003156b) bg_popup_sub_pane_cp24_ParamLimits

0x2285,	// (0x0003156b) bg_popup_sub_pane_cp24

0x8c3c,	// (0x00037f22) fep_china_uni_candidate_pane_ParamLimits

0x8c3c,	// (0x00037f22) fep_china_uni_candidate_pane

0x8c50,	// (0x00037f36) fep_china_uni_entry_pane

0x8c60,	// (0x00037f46) popup_fep_china_uni_window_g1

0x8c7c,	// (0x00037f62) fep_china_uni_entry_pane_g1

0x8c86,	// (0x00037f6c) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x0003e9e3) fep_china_uni_entry_pane_g

0x8c90,	// (0x00037f76) fep_entry_item_pane

0x8c9a,	// (0x00037f80) fep_candidate_item_pane

0x8ca2,	// (0x00037f88) fep_china_uni_candidate_pane_g1

0x8cac,	// (0x00037f92) fep_china_uni_candidate_pane_g2

0x8cb4,	// (0x00037f9a) fep_china_uni_candidate_pane_g3

0x8cbc,	// (0x00037fa2) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x0003e9e8) fep_china_uni_candidate_pane_g

0x222d,	// (0x00031513) fep_entry_item_pane_g1

0x8cc6,	// (0x00037fac) fep_entry_item_pane_t1_ParamLimits

0x8cc6,	// (0x00037fac) fep_entry_item_pane_t1

0x8cdc,	// (0x00037fc2) fep_candidate_item_pane_t1_ParamLimits

0x8cdc,	// (0x00037fc2) fep_candidate_item_pane_t1

0x8cf1,	// (0x00037fd7) fep_candidate_item_pane_t2_ParamLimits

0x8cf1,	// (0x00037fd7) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x0003e9f1) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x0003e9f1) fep_candidate_item_pane_t

0x2293,	// (0x00031579) list_highlight_pane_cp31_ParamLimits

0x2293,	// (0x00031579) list_highlight_pane_cp31

0x8d03,	// (0x00037fe9) level_1_signal_lsc

0x8d0c,	// (0x00037ff2) level_2_signal_lsc

0x8d15,	// (0x00037ffb) level_3_signal_lsc

0x8d1e,	// (0x00038004) level_4_signal_lsc

0x8d27,	// (0x0003800d) level_5_signal_lsc

0x8d30,	// (0x00038016) level_6_signal_lsc

0x8d39,	// (0x0003801f) level_7_signal_lsc

0x8d39,	// (0x0003801f) level_1_battery_lsc

0x8d42,	// (0x00038028) level_2_battery_lsc

0x8d4b,	// (0x00038031) level_3_battery_lsc

0x8d54,	// (0x0003803a) level_4_battery_lsc

0x8d5d,	// (0x00038043) level_5_battery_lsc

0x8d66,	// (0x0003804c) level_6_battery_lsc

0x8d03,	// (0x00037fe9) level_7_battery_lsc

0x8d6f,	// (0x00038055) scroll_handle_focus_pane_g1

0x8d78,	// (0x0003805e) scroll_handle_focus_pane_g2

0x8d81,	// (0x00038067) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x0003e9f6) scroll_handle_focus_pane_g

0x693b,	// (0x00035c21) list_single_2graphic_pane_g1_ParamLimits

0x693b,	// (0x00035c21) list_single_2graphic_pane_g1

0x5bba,	// (0x00034ea0) list_single_2graphic_pane_g2_ParamLimits

0x5bba,	// (0x00034ea0) list_single_2graphic_pane_g2

0x5b40,	// (0x00034e26) list_single_2graphic_pane_g3_ParamLimits

0x5b40,	// (0x00034e26) list_single_2graphic_pane_g3

0x6947,	// (0x00035c2d) list_single_2graphic_pane_g4_ParamLimits

0x6947,	// (0x00035c2d) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x0003e9fd) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x0003e9fd) list_single_2graphic_pane_g

0x6953,	// (0x00035c39) list_single_2graphic_pane_t1_ParamLimits

0x6953,	// (0x00035c39) list_single_2graphic_pane_t1

0x6981,	// (0x00035c67) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6981,	// (0x00035c67) list_double2_graphic_large_graphic_pane_g1

0x5c53,	// (0x00034f39) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5c53,	// (0x00034f39) list_double2_graphic_large_graphic_pane_g2

0x5c64,	// (0x00034f4a) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5c64,	// (0x00034f4a) list_double2_graphic_large_graphic_pane_g3

0x6993,	// (0x00035c79) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6993,	// (0x00035c79) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x0003ea06) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x0003ea06) list_double2_graphic_large_graphic_pane_g

0x699f,	// (0x00035c85) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x699f,	// (0x00035c85) list_double2_graphic_large_graphic_pane_t1

0x69b5,	// (0x00035c9b) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x69b5,	// (0x00035c9b) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x0003ea0f) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x0003ea0f) list_double2_graphic_large_graphic_pane_t

0x8ec4,	// (0x000381aa) popup_fast_swap_window_ParamLimits

0x8ec4,	// (0x000381aa) popup_fast_swap_window

0x8ee2,	// (0x000381c8) popup_side_volume_key_window

0x8f00,	// (0x000381e6) stacon_top_pane

0x8f0a,	// (0x000381f0) status_pane_ParamLimits

0x8f0a,	// (0x000381f0) status_pane

0x8f18,	// (0x000381fe) status_small_pane

0x2237,	// (0x0003151d) control_pane

0x2237,	// (0x0003151d) stacon_bottom_pane

0x28b8,	// (0x00031b9e) scroll_pane_cp121

0x28af,	// (0x00031b95) set_content_pane

0x8d8a,	// (0x00038070) bg_active_tab_pane_g1_cp1

0x8d93,	// (0x00038079) bg_active_tab_pane_g2_cp1

0x8d9c,	// (0x00038082) bg_active_tab_pane_g3_cp1

0x8d8a,	// (0x00038070) bg_passive_tab_pane_g1_cp1

0x8d93,	// (0x00038079) bg_passive_tab_pane_g2_cp1

0x8d9c,	// (0x00038082) bg_passive_tab_pane_g3_cp1

0x8da5,	// (0x0003808b) bg_active_tab_pane_g1_cp2

0x8d93,	// (0x00038079) bg_active_tab_pane_g2_cp2

0x8dae,	// (0x00038094) bg_active_tab_pane_g3_cp2

0x8da5,	// (0x0003808b) bg_passive_tab_pane_g1_cp2

0x8d93,	// (0x00038079) bg_passive_tab_pane_g2_cp2

0x8dae,	// (0x00038094) bg_passive_tab_pane_g3_cp2

0x8db7,	// (0x0003809d) bg_active_tab_pane_g1_cp3

0x8d93,	// (0x00038079) bg_active_tab_pane_g2_cp3

0x8dc0,	// (0x000380a6) bg_active_tab_pane_g3_cp3

0x8db7,	// (0x0003809d) bg_passive_tab_pane_g1_cp3

0x8d93,	// (0x00038079) bg_passive_tab_pane_g2_cp3

0x8dc0,	// (0x000380a6) bg_passive_tab_pane_g3_cp3

0x8dc9,	// (0x000380af) bg_active_tab_pane_g1_cp4

0x8d93,	// (0x00038079) bg_active_tab_pane_g2_cp4

0x8dd4,	// (0x000380ba) bg_active_tab_pane_g3_cp4

0x8dc9,	// (0x000380af) bg_passive_tab_pane_g1_cp4

0x8d93,	// (0x00038079) bg_passive_tab_pane_g2_cp4

0x8dd4,	// (0x000380ba) bg_passive_tab_pane_g3_cp4

0x8e1d,	// (0x00038103) bg_active_tab_pane_g1_cp5

0x8d93,	// (0x00038079) bg_active_tab_pane_g2_cp5

0x8e26,	// (0x0003810c) bg_active_tab_pane_g3_cp5

0x8e1d,	// (0x00038103) bg_passive_tab_pane_g1_cp5

0x8d93,	// (0x00038079) bg_passive_tab_pane_g2_cp5

0x8e26,	// (0x0003810c) bg_passive_tab_pane_g3_cp5

0x8e2f,	// (0x00038115) list_set_graphic_pane_ParamLimits

0x8e2f,	// (0x00038115) list_set_graphic_pane

0x2237,	// (0x0003151d) bg_set_opt_pane_cp4

0x8e45,	// (0x0003812b) list_set_graphic_pane_g1_ParamLimits

0x8e45,	// (0x0003812b) list_set_graphic_pane_g1

0x8e51,	// (0x00038137) list_set_graphic_pane_g2_ParamLimits

0x8e51,	// (0x00038137) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x0003ea14) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x0003ea14) list_set_graphic_pane_g

0x0009,

0xfaaa,	// (0x0003ed90) volume_small_pane_cp_g

0x8e75,	// (0x0003815b) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8e75,	// (0x0003815b) list_double2_large_graphic_pane_g1_cp2

0x8e83,	// (0x00038169) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8e83,	// (0x00038169) list_double2_large_graphic_pane_g2_cp2

0x8e94,	// (0x0003817a) list_double2_large_graphic_pane_g3_cp2

0x8e9c,	// (0x00038182) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8e9c,	// (0x00038182) list_double2_large_graphic_pane_t1_cp2

0x8eb2,	// (0x00038198) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8eb2,	// (0x00038198) list_double2_large_graphic_pane_t2_cp2

0xaa93,	// (0x00039d79) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaa93,	// (0x00039d79) list_double_large_graphic_pane_g1_cp2

0xaaa6,	// (0x00039d8c) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaaa6,	// (0x00039d8c) list_double_large_graphic_pane_g2_cp2

0x9033,	// (0x00038319) list_double_large_graphic_pane_g3_cp2

0xaab7,	// (0x00039d9d) list_double_large_graphic_pane_g4_cp

0xaabf,	// (0x00039da5) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xaabf,	// (0x00039da5) list_double_large_graphic_pane_t1_cp2

0xaad6,	// (0x00039dbc) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xaad6,	// (0x00039dbc) list_double_large_graphic_pane_t2_cp2

0x8f23,	// (0x00038209) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8f23,	// (0x00038209) list_double2_graphic_pane_g1_cp2

0x8f31,	// (0x00038217) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8f31,	// (0x00038217) list_double2_graphic_pane_g2_cp2

0x8f42,	// (0x00038228) list_double2_graphic_pane_g3_cp2

0x8f4c,	// (0x00038232) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8f4c,	// (0x00038232) list_double2_graphic_pane_t1_cp2

0x8f62,	// (0x00038248) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8f62,	// (0x00038248) list_double2_graphic_pane_t2_cp2

0x8f74,	// (0x0003825a) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8f74,	// (0x0003825a) list_single_number_heading_pane_g1_cp2

0x8f80,	// (0x00038266) list_single_number_heading_pane_g2_cp2

0x8f88,	// (0x0003826e) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8f88,	// (0x0003826e) list_single_number_heading_pane_t1_cp2

0x8f9e,	// (0x00038284) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8f9e,	// (0x00038284) list_single_number_heading_pane_t2_cp2

0x8fb2,	// (0x00038298) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8fb2,	// (0x00038298) list_single_number_heading_pane_t3_cp2

0x8f74,	// (0x0003825a) list_single_heading_pane_g1_cp2_ParamLimits

0x8f74,	// (0x0003825a) list_single_heading_pane_g1_cp2

0x8f80,	// (0x00038266) list_single_heading_pane_g2_cp2

0x8f88,	// (0x0003826e) list_single_heading_pane_t1_cp2_ParamLimits

0x8f88,	// (0x0003826e) list_single_heading_pane_t1_cp2

0xa88d,	// (0x00039b73) list_single_heading_pane_t2_cp2_ParamLimits

0xa88d,	// (0x00039b73) list_single_heading_pane_t2_cp2

0xa7d5,	// (0x00039abb) list_double_graphic_pane_g1_cp2_ParamLimits

0xa7d5,	// (0x00039abb) list_double_graphic_pane_g1_cp2

0xa7e1,	// (0x00039ac7) list_double_graphic_pane_g2_cp2_ParamLimits

0xa7e1,	// (0x00039ac7) list_double_graphic_pane_g2_cp2

0xa7f0,	// (0x00039ad6) list_double_graphic_pane_g3_cp2

0xa7f8,	// (0x00039ade) list_double_graphic_pane_t1_cp2_ParamLimits

0xa7f8,	// (0x00039ade) list_double_graphic_pane_t1_cp2

0xa80e,	// (0x00039af4) list_double_graphic_pane_t2_cp2_ParamLimits

0xa80e,	// (0x00039af4) list_double_graphic_pane_t2_cp2

0x9027,	// (0x0003830d) list_double_number_pane_g1_cp2_ParamLimits

0x9027,	// (0x0003830d) list_double_number_pane_g1_cp2

0x9033,	// (0x00038319) list_double_number_pane_g2_cp2

0xa799,	// (0x00039a7f) list_double_number_pane_t1_cp2_ParamLimits

0xa799,	// (0x00039a7f) list_double_number_pane_t1_cp2

0xa7ad,	// (0x00039a93) list_double_number_pane_t2_cp2_ParamLimits

0xa7ad,	// (0x00039a93) list_double_number_pane_t2_cp2

0xa7c3,	// (0x00039aa9) list_double_number_pane_t3_cp2_ParamLimits

0xa7c3,	// (0x00039aa9) list_double_number_pane_t3_cp2

0xa682,	// (0x00039968) list_single_graphic_pane_g1_cp2_ParamLimits

0xa682,	// (0x00039968) list_single_graphic_pane_g1_cp2

0x908d,	// (0x00038373) list_single_graphic_pane_g2_cp2_ParamLimits

0x908d,	// (0x00038373) list_single_graphic_pane_g2_cp2

0x9099,	// (0x0003837f) list_single_graphic_pane_g3_cp2

0xa658,	// (0x0003993e) list_single_graphic_pane_t1_cp2_ParamLimits

0xa658,	// (0x0003993e) list_single_graphic_pane_t1_cp2

0x908d,	// (0x00038373) list_single_number_pane_g1_cp2_ParamLimits

0x908d,	// (0x00038373) list_single_number_pane_g1_cp2

0x9099,	// (0x0003837f) list_single_number_pane_g2_cp2

0xa658,	// (0x0003993e) list_single_number_pane_t1_cp2_ParamLimits

0xa658,	// (0x0003993e) list_single_number_pane_t1_cp2

0xa66e,	// (0x00039954) list_single_number_pane_t2_cp2_ParamLimits

0xa66e,	// (0x00039954) list_single_number_pane_t2_cp2

0x8e83,	// (0x00038169) list_double2_pane_g1_cp2_ParamLimits

0x8e83,	// (0x00038169) list_double2_pane_g1_cp2

0x8e94,	// (0x0003817a) list_double2_pane_g2_cp2

0x8fff,	// (0x000382e5) list_double2_pane_t1_cp2_ParamLimits

0x8fff,	// (0x000382e5) list_double2_pane_t1_cp2

0x9015,	// (0x000382fb) list_double2_pane_t2_cp2_ParamLimits

0x9015,	// (0x000382fb) list_double2_pane_t2_cp2

0x9027,	// (0x0003830d) list_double_pane_g1_cp2_ParamLimits

0x9027,	// (0x0003830d) list_double_pane_g1_cp2

0x9033,	// (0x00038319) list_double_pane_g2_cp2

0x903b,	// (0x00038321) list_double_pane_t1_cp2_ParamLimits

0x903b,	// (0x00038321) list_double_pane_t1_cp2

0x9051,	// (0x00038337) list_double_pane_t2_cp2_ParamLimits

0x9051,	// (0x00038337) list_double_pane_t2_cp2

0x907d,	// (0x00038363) list_single_pane_cp2_g3

0x908d,	// (0x00038373) list_single_pane_g1_cp2_ParamLimits

0x908d,	// (0x00038373) list_single_pane_g1_cp2

0x9099,	// (0x0003837f) list_single_pane_g2_cp2

0x90a1,	// (0x00038387) list_single_pane_t1_cp2_ParamLimits

0x90a1,	// (0x00038387) list_single_pane_t1_cp2

0x90b9,	// (0x0003839f) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x90b9,	// (0x0003839f) list_single_large_graphic_pane_g1_cp2

0x90c7,	// (0x000383ad) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x90c7,	// (0x000383ad) list_single_large_graphic_pane_g2_cp2

0x90d3,	// (0x000383b9) list_single_large_graphic_pane_g3_cp2

0x90db,	// (0x000383c1) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x90db,	// (0x000383c1) list_single_large_graphic_pane_g4_cp1

0x90f5,	// (0x000383db) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x90f5,	// (0x000383db) list_single_large_graphic_pane_t1_cp2

0xa622,	// (0x00039908) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa622,	// (0x00039908) list_single_graphic_heading_pane_g1_cp2

0xa5ef,	// (0x000398d5) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa5ef,	// (0x000398d5) list_single_graphic_heading_pane_g4_cp2

0x9099,	// (0x0003837f) list_single_graphic_heading_pane_g5_cp2

0xa62e,	// (0x00039914) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa62e,	// (0x00039914) list_single_graphic_heading_pane_t1_cp2

0xa644,	// (0x0003992a) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa644,	// (0x0003992a) list_single_graphic_heading_pane_t2_cp2

0xa5e3,	// (0x000398c9) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa5e3,	// (0x000398c9) list_single_2graphic_pane_g1_cp2

0xa5ef,	// (0x000398d5) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa5ef,	// (0x000398d5) list_single_2graphic_pane_g2_cp2

0x9099,	// (0x0003837f) list_single_2graphic_pane_g3_cp2

0xa600,	// (0x000398e6) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa600,	// (0x000398e6) list_single_2graphic_pane_g4_cp2

0xa60c,	// (0x000398f2) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa60c,	// (0x000398f2) list_single_2graphic_pane_t1_cp2

0x222d,	// (0x00031513) list_highlight_pane_g10_cp1

0xa1bb,	// (0x000394a1) list_highlight_pane_g1_cp1

0xa1c3,	// (0x000394a9) list_highlight_pane_g2_cp1

0xa1cb,	// (0x000394b1) list_highlight_pane_g3_cp1

0xa1d3,	// (0x000394b9) list_highlight_pane_g4_cp1

0xa1db,	// (0x000394c1) list_highlight_pane_g5_cp1

0xa1e3,	// (0x000394c9) list_highlight_pane_g6_cp1

0xa1eb,	// (0x000394d1) list_highlight_pane_g7_cp1

0xa1f3,	// (0x000394d9) list_highlight_pane_g8_cp1

0xa1fb,	// (0x000394e1) list_highlight_pane_g9_cp1

0xa0db,	// (0x000393c1) form_field_slider_pane_t3

0xa0e9,	// (0x000393cf) form_field_slider_pane_t4

0xa0f7,	// (0x000393dd) slider_form_pane_ParamLimits

0xa0f7,	// (0x000393dd) slider_form_pane

0x2237,	// (0x0003151d) control_abbreviations

0x2237,	// (0x0003151d) control_conventions

0x2237,	// (0x0003151d) control_definitions

0x2237,	// (0x0003151d) format_table_attribute

0xa8e3,	// (0x00039bc9) bg_popup_preview_window_pane_g9

0x2237,	// (0x0003151d) format_table_data2

0x2237,	// (0x0003151d) format_table_data3

0x2237,	// (0x0003151d) format_table_data_example

0x0008,

0x2237,	// (0x0003151d) intro_purpose

0xf8ca,	// (0x0003ebb0) bg_popup_preview_window_pane_g

0x2237,	// (0x0003151d) texts_category

0x2237,	// (0x0003151d) texts_graphics

0x910b,	// (0x000383f1) text_digital

0x911a,	// (0x00038400) text_primary

0x9129,	// (0x0003840f) text_primary_small

0x9138,	// (0x0003841e) text_secondary

0x9147,	// (0x0003842d) text_title

0xb027,	// (0x0003a30d) bg_passive_tab_pane_g1_cp3_srt

0x8d93,	// (0x00038079) bg_passive_tab_pane_g2_cp3_srt

0xb030,	// (0x0003a316) bg_passive_tab_pane_g3_cp3_srt

0x2293,	// (0x00031579) bg_active_tab_pane_cp3_srt_ParamLimits

0x2293,	// (0x00031579) bg_active_tab_pane_cp3_srt

0xb039,	// (0x0003a31f) tabs_4_active_pane_srt_g1

0xb041,	// (0x0003a327) tabs_4_active_pane_srt_t1_ParamLimits

0xb041,	// (0x0003a327) tabs_4_active_pane_srt_t1

0xb027,	// (0x0003a30d) bg_active_tab_pane_g1_cp3_copy1

0x8d93,	// (0x00038079) bg_active_tab_pane_g2_cp3_copy1

0xb030,	// (0x0003a316) bg_active_tab_pane_g3_cp3_copy1

0x2293,	// (0x00031579) tabs_2_long_active_pane_srt_ParamLimits

0x2293,	// (0x00031579) tabs_2_long_active_pane_srt

0x2293,	// (0x00031579) tabs_2_long_passive_pane_srt_ParamLimits

0x2293,	// (0x00031579) tabs_2_long_passive_pane_srt

0x6255,	// (0x0003553b) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6255,	// (0x0003553b) bg_passive_tab_pane_cp4_srt

0xad1d,	// (0x0003a003) bg_passive_tab_pane_g1_cp4_srt

0x8d93,	// (0x00038079) bg_passive_tab_pane_g2_cp4_srt

0xad26,	// (0x0003a00c) bg_passive_tab_pane_g3_cp4_srt

0x6234,	// (0x0003551a) bg_active_tab_pane_cp4_srt_ParamLimits

0x6234,	// (0x0003551a) bg_active_tab_pane_cp4_srt

0xad2f,	// (0x0003a015) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad2f,	// (0x0003a015) tabs_2_long_active_pane_srt_t1

0xad1d,	// (0x0003a003) bg_active_tab_pane_g1_cp4_srt

0x8d93,	// (0x00038079) bg_active_tab_pane_g2_cp4_srt

0xad26,	// (0x0003a00c) bg_active_tab_pane_g3_cp4_srt

0x2285,	// (0x0003156b) tabs_3_long_active_pane_srt_ParamLimits

0x2285,	// (0x0003156b) tabs_3_long_active_pane_srt

0x2285,	// (0x0003156b) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2285,	// (0x0003156b) tabs_3_long_passive_pane_cp_srt

0x2285,	// (0x0003156b) tabs_3_long_passive_pane_srt_ParamLimits

0x2285,	// (0x0003156b) tabs_3_long_passive_pane_srt

0x6255,	// (0x0003553b) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6255,	// (0x0003553b) bg_passive_tab_pane_cp5_srt

0x8e1d,	// (0x00038103) bg_passive_tab_pane_g1_cp5_srt

0x8d93,	// (0x00038079) bg_passive_tab_pane_g2_cp5_srt

0x8e26,	// (0x0003810c) bg_passive_tab_pane_g3_cp5_srt

0x6234,	// (0x0003551a) bg_active_tab_pane_cp5_srt_ParamLimits

0x6234,	// (0x0003551a) bg_active_tab_pane_cp5_srt

0xad0b,	// (0x00039ff1) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad0b,	// (0x00039ff1) tabs_3_long_active_pane_srt_t1

0x8e1d,	// (0x00038103) bg_active_tab_pane_g1_cp5_srt

0x8d93,	// (0x00038079) bg_active_tab_pane_g2_cp5_srt

0x8e26,	// (0x0003810c) bg_active_tab_pane_g3_cp5_srt

0xacfd,	// (0x00039fe3) navi_text_pane_srt_t1

0xacf5,	// (0x00039fdb) navi_icon_pane_srt_g1

0x931f,	// (0x00038605) midp_editing_number_pane_srt

0x9156,	// (0x0003843c) midp_ticker_pane_srt

0x9327,	// (0x0003860d) midp_ticker_pane_srt_g1

0x932f,	// (0x00038615) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x0003ea33) midp_ticker_pane_srt_g

0x9337,	// (0x0003861d) midp_ticker_pane_srt_t1

0xace6,	// (0x00039fcc) midp_editing_number_pane_t1_copy1

0x915e,	// (0x00038444) listscroll_midp_pane

0x915e,	// (0x00038444) midp_form_pane

0x91cd,	// (0x000384b3) midp_info_popup_window_ParamLimits

0x91cd,	// (0x000384b3) midp_info_popup_window

0x617d,	// (0x00035463) bg_popup_sub_pane_cp50_ParamLimits

0x617d,	// (0x00035463) bg_popup_sub_pane_cp50

0x9ddd,	// (0x000390c3) listscroll_midp_info_pane_ParamLimits

0x9ddd,	// (0x000390c3) listscroll_midp_info_pane

0x9dbd,	// (0x000390a3) listscroll_form_midp_pane_ParamLimits

0x9dbd,	// (0x000390a3) listscroll_form_midp_pane

0x9dc9,	// (0x000390af) scroll_bar_cp050

0x9d9d,	// (0x00039083) list_midp_pane

0xbadb,	// (0x0003adc1) signal_pane_g2_cp

0x9cd7,	// (0x00038fbd) listscroll_midp_info_pane_t1_ParamLimits

0x9cd7,	// (0x00038fbd) listscroll_midp_info_pane_t1

0x9cef,	// (0x00038fd5) listscroll_midp_info_pane_t2_ParamLimits

0x9cef,	// (0x00038fd5) listscroll_midp_info_pane_t2

0x9d2d,	// (0x00039013) listscroll_midp_info_pane_t3_ParamLimits

0x9d2d,	// (0x00039013) listscroll_midp_info_pane_t3

0x9d67,	// (0x0003904d) listscroll_midp_info_pane_t4_ParamLimits

0x9d67,	// (0x0003904d) listscroll_midp_info_pane_t4

0x0003,

0xf805,	// (0x0003eaeb) listscroll_midp_info_pane_t_ParamLimits

0xf805,	// (0x0003eaeb) listscroll_midp_info_pane_t

0x61e0,	// (0x000354c6) scroll_pane_cp21

0x9c71,	// (0x00038f57) form_midp_field_choice_group_pane

0x9c7a,	// (0x00038f60) form_midp_field_text_pane

0x9cbd,	// (0x00038fa3) form_midp_field_time_pane

0x9cc5,	// (0x00038fab) form_midp_gauge_slider_pane

0x9cce,	// (0x00038fb4) form_midp_gauge_wait_pane

0x2237,	// (0x0003151d) form_midp_image_pane

0x74ad,	// (0x00036793) list_single_midp_pane_ParamLimits

0x74ad,	// (0x00036793) list_single_midp_pane

0x9c35,	// (0x00038f1b) form_midp_field_text_pane_t1

0x9a27,	// (0x00038d0d) input_focus_pane_cp050

0x9c60,	// (0x00038f46) list_midp_form_text_pane

0x9c04,	// (0x00038eea) form_midp_field_choice_group_pane_t1

0x9c12,	// (0x00038ef8) input_focus_pane_cp051

0x9c26,	// (0x00038f0c) list_midp_choice_pane

0x2237,	// (0x0003151d) status_idle_pane

0x9be8,	// (0x00038ece) form_midp_field_time_pane_t1

0x222d,	// (0x00031513) wait_anim_pane_g2_copy1

0x9bf6,	// (0x00038edc) form_midp_field_time_pane_t2

0x0001,

0x927d,	// (0x00038563) aid_navinavi_width_2_pane

0xf800,	// (0x0003eae6) form_midp_field_time_pane_t

0x2237,	// (0x0003151d) input_focus_pane_cp052

0x2237,	// (0x0003151d) bg_input_focus_pane_cp040

0x9ba8,	// (0x00038e8e) form_midp_gauge_slider_pane_t1

0x9bb6,	// (0x00038e9c) form_midp_gauge_slider_pane_t2

0x9bc4,	// (0x00038eaa) form_midp_gauge_slider_pane_t3

0x9bd2,	// (0x00038eb8) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f7,	// (0x0003eadd) form_midp_gauge_slider_pane_t

0x9be0,	// (0x00038ec6) form_midp_slider_pane

0x2293,	// (0x00031579) bg_input_focus_pane_cp041_ParamLimits

0x2293,	// (0x00031579) bg_input_focus_pane_cp041

0x9b75,	// (0x00038e5b) form_midp_gauge_wait_pane_t1_ParamLimits

0x9b75,	// (0x00038e5b) form_midp_gauge_wait_pane_t1

0x9b87,	// (0x00038e6d) form_midp_gauge_wait_pane_t2_ParamLimits

0x9b87,	// (0x00038e6d) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f2,	// (0x0003ead8) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f2,	// (0x0003ead8) form_midp_gauge_wait_pane_t

0x9b99,	// (0x00038e7f) form_midp_wait_pane_ParamLimits

0x9b99,	// (0x00038e7f) form_midp_wait_pane

0x9b3d,	// (0x00038e23) form_midp_image_pane_g1

0x9b46,	// (0x00038e2c) form_midp_image_pane_t1

0x9b55,	// (0x00038e3b) form_midp_image_pane_t2

0x9b64,	// (0x00038e4a) form_midp_image_pane_t3

0x0002,

0xf7eb,	// (0x0003ead1) form_midp_image_pane_t

0x9b34,	// (0x00038e1a) list_single_midp_pane_g1

0x4190,	// (0x00033476) list_single_midp_pane_t1

0x9b1a,	// (0x00038e00) list_midp_form_item_pane_ParamLimits

0x9b1a,	// (0x00038e00) list_midp_form_item_pane

0x9225,	// (0x0003850b) list_midp_form_item_pane_t1

0x9234,	// (0x0003851a) midp_ticker_pane_g1

0x9240,	// (0x00038526) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x0003ea19) midp_ticker_pane_g

0x924c,	// (0x00038532) midp_ticker_pane_t1

0xaf53,	// (0x0003a239) midp_editing_number_pane_t1

0xaf31,	// (0x0003a217) midp_editing_number_pane

0xaf40,	// (0x0003a226) midp_ticker_pane

0xacd6,	// (0x00039fbc) ai_message_heading_pane

0x2237,	// (0x0003151d) bg_popup_window_pane_cp14

0xacde,	// (0x00039fc4) listscroll_ai_message_pane

0xac5c,	// (0x00039f42) ai_message_heading_pane_g1_ParamLimits

0xac5c,	// (0x00039f42) ai_message_heading_pane_g1

0xac68,	// (0x00039f4e) ai_message_heading_pane_g2_ParamLimits

0xac68,	// (0x00039f4e) ai_message_heading_pane_g2

0xac76,	// (0x00039f5c) ai_message_heading_pane_g3_ParamLimits

0xac76,	// (0x00039f5c) ai_message_heading_pane_g3

0xac82,	// (0x00039f68) ai_message_heading_pane_g4_ParamLimits

0xac82,	// (0x00039f68) ai_message_heading_pane_g4

0x0003,

0xf92c,	// (0x0003ec12) ai_message_heading_pane_g_ParamLimits

0xf92c,	// (0x0003ec12) ai_message_heading_pane_g

0xac8e,	// (0x00039f74) ai_message_heading_pane_t1_ParamLimits

0xac8e,	// (0x00039f74) ai_message_heading_pane_t1

0xaca8,	// (0x00039f8e) ai_message_heading_pane_t2_ParamLimits

0xaca8,	// (0x00039f8e) ai_message_heading_pane_t2

0x0001,

0xf935,	// (0x0003ec1b) ai_message_heading_pane_t_ParamLimits

0xf935,	// (0x0003ec1b) ai_message_heading_pane_t

0xacbc,	// (0x00039fa2) bg_popup_heading_pane_cp1_ParamLimits

0xacbc,	// (0x00039fa2) bg_popup_heading_pane_cp1

0xac4a,	// (0x00039f30) list_ai_message_pane_ParamLimits

0xac4a,	// (0x00039f30) list_ai_message_pane

0x61e0,	// (0x000354c6) scroll_pane_cp10

0xabe6,	// (0x00039ecc) list_ai_message_pane_g1

0xabee,	// (0x00039ed4) list_ai_message_pane_g2

0x0001,

0xf909,	// (0x0003ebef) list_ai_message_pane_g

0xabf6,	// (0x00039edc) list_ai_message_pane_t1_ParamLimits

0xabf6,	// (0x00039edc) list_ai_message_pane_t1

0xac0b,	// (0x00039ef1) list_ai_message_pane_t2_ParamLimits

0xac0b,	// (0x00039ef1) list_ai_message_pane_t2

0xac20,	// (0x00039f06) list_ai_message_pane_t3_ParamLimits

0xac20,	// (0x00039f06) list_ai_message_pane_t3

0xac35,	// (0x00039f1b) list_ai_message_pane_t4_ParamLimits

0xac35,	// (0x00039f1b) list_ai_message_pane_t4

0x0003,

0xf90e,	// (0x0003ebf4) list_ai_message_pane_t_ParamLimits

0xf90e,	// (0x0003ebf4) list_ai_message_pane_t

0xabcf,	// (0x00039eb5) cell_ai_soft_ind_pane_ParamLimits

0xabcf,	// (0x00039eb5) cell_ai_soft_ind_pane

0x925e,	// (0x00038544) cell_ai_soft_ind_pane_g1_ParamLimits

0x925e,	// (0x00038544) cell_ai_soft_ind_pane_g1

0x2237,	// (0x0003151d) grid_highlight_cp1

0x926b,	// (0x00038551) text_secondary_cp56_ParamLimits

0x926b,	// (0x00038551) text_secondary_cp56

0xaba4,	// (0x00039e8a) example_general_pane_ParamLimits

0xaba4,	// (0x00039e8a) example_general_pane

0xabb0,	// (0x00039e96) example_parent_pane_g1_ParamLimits

0xabb0,	// (0x00039e96) example_parent_pane_g1

0xabbc,	// (0x00039ea2) example_parent_pane_t1_ParamLimits

0xabbc,	// (0x00039ea2) example_parent_pane_t1

0x70fc,	// (0x000363e2) popup_preview_text_window_ParamLimits

0x70fc,	// (0x000363e2) popup_preview_text_window

0x9085,	// (0x0003836b) list_single_pane_cp2_g4

0x2494,	// (0x0003177a) bg_popup_preview_window_pane_ParamLimits

0x2494,	// (0x0003177a) bg_popup_preview_window_pane

0xa8ed,	// (0x00039bd3) popup_preview_text_window_t1_ParamLimits

0xa8ed,	// (0x00039bd3) popup_preview_text_window_t1

0xa90b,	// (0x00039bf1) popup_preview_text_window_t2_ParamLimits

0xa90b,	// (0x00039bf1) popup_preview_text_window_t2

0xa954,	// (0x00039c3a) popup_preview_text_window_t3_ParamLimits

0xa954,	// (0x00039c3a) popup_preview_text_window_t3

0xa999,	// (0x00039c7f) popup_preview_text_window_t4_ParamLimits

0xa999,	// (0x00039c7f) popup_preview_text_window_t4

0x0004,

0xf8dd,	// (0x0003ebc3) popup_preview_text_window_t_ParamLimits

0xf8dd,	// (0x0003ebc3) popup_preview_text_window_t

0xaa17,	// (0x00039cfd) scroll_pane_cp11

0x99b3,	// (0x00038c99) bg_popup_preview_window_pane_g1

0xa8a1,	// (0x00039b87) bg_popup_preview_window_pane_g2

0xa8ab,	// (0x00039b91) bg_popup_preview_window_pane_g3

0xa8b5,	// (0x00039b9b) bg_popup_preview_window_pane_g4

0xa8bf,	// (0x00039ba5) bg_popup_preview_window_pane_g5

0xa8c9,	// (0x00039baf) bg_popup_preview_window_pane_g6

0xa8d1,	// (0x00039bb7) bg_popup_preview_window_pane_g7

0xa8d9,	// (0x00039bbf) bg_popup_preview_window_pane_g8

0x539e,	// (0x00034684) aid_popup_width_pane

0x70d8,	// (0x000363be) popup_midp_note_alarm_window_ParamLimits

0x70d8,	// (0x000363be) popup_midp_note_alarm_window

0x28c9,	// (0x00031baf) data_form_pane_ParamLimits

0x5fe6,	// (0x000352cc) form_field_data_pane_g1

0x5ff0,	// (0x000352d6) form_field_data_pane_t1_ParamLimits

0x28d5,	// (0x00031bbb) input_focus_pane_ParamLimits

0x3fb1,	// (0x00033297) data_form_wide_pane_ParamLimits

0x3fc2,	// (0x000332a8) form_field_data_wide_pane_g1

0x3fce,	// (0x000332b4) form_field_data_wide_pane_t1_ParamLimits

0x2650,	// (0x00031936) input_focus_pane_cp6_ParamLimits

0x618b,	// (0x00035471) input_popup_find_pane_g1_ParamLimits

0x618b,	// (0x00035471) input_popup_find_pane_g1

0x6511,	// (0x000357f7) aid_navi_side_left_pane

0x6526,	// (0x0003580c) aid_navi_side_right_pane

0xa2b6,	// (0x0003959c) bg_popup_window_pane_cp30_ParamLimits

0xa2b6,	// (0x0003959c) bg_popup_window_pane_cp30

0xa330,	// (0x00039616) popup_midp_note_alarm_window_g1_ParamLimits

0xa330,	// (0x00039616) popup_midp_note_alarm_window_g1

0xa360,	// (0x00039646) popup_midp_note_alarm_window_t1_ParamLimits

0xa360,	// (0x00039646) popup_midp_note_alarm_window_t1

0xa401,	// (0x000396e7) popup_midp_note_alarm_window_t2_ParamLimits

0xa401,	// (0x000396e7) popup_midp_note_alarm_window_t2

0xa4af,	// (0x00039795) popup_midp_note_alarm_window_t3_ParamLimits

0xa4af,	// (0x00039795) popup_midp_note_alarm_window_t3

0xa4e1,	// (0x000397c7) popup_midp_note_alarm_window_t4_ParamLimits

0xa4e1,	// (0x000397c7) popup_midp_note_alarm_window_t4

0xa507,	// (0x000397ed) popup_midp_note_alarm_window_t5_ParamLimits

0xa507,	// (0x000397ed) popup_midp_note_alarm_window_t5

0x000a,

0xf87a,	// (0x0003eb60) popup_midp_note_alarm_window_t_ParamLimits

0xf87a,	// (0x0003eb60) popup_midp_note_alarm_window_t

0xa5b3,	// (0x00039899) wait_bar_pane_cp1_ParamLimits

0xa5b3,	// (0x00039899) wait_bar_pane_cp1

0x2237,	// (0x0003151d) wait_anim_pane_copy1

0x2237,	// (0x0003151d) wait_border_pane_copy1

0x9f9b,	// (0x00039281) wait_border_pane_g1_copy1

0x3fe8,	// (0x000332ce) form_field_popup_pane_g1

0x600a,	// (0x000352f0) form_field_popup_pane_t1_ParamLimits

0x28d5,	// (0x00031bbb) input_focus_pane_cp7_ParamLimits

0x2903,	// (0x00031be9) list_form_pane_ParamLimits

0x3ff0,	// (0x000332d6) form_field_popup_wide_pane_g1

0x3ff8,	// (0x000332de) form_field_popup_wide_pane_t1_ParamLimits

0x28d5,	// (0x00031bbb) input_focus_pane_cp8_ParamLimits

0x290f,	// (0x00031bf5) list_form_wide_pane_ParamLimits

0xb0c2,	// (0x0003a3a8) aid_size_cell_graphic_pane

0x6089,	// (0x0003536f) data_form_pane_t1_ParamLimits

0x773d,	// (0x00036a23) data_form_wide_pane_t1_ParamLimits

0x956c,	// (0x00038852) bg_status_flat_pane

0x57cd,	// (0x00034ab3) title_pane_t1_ParamLimits

0x224d,	// (0x00031533) title_pane_t2_ParamLimits

0x2273,	// (0x00031559) title_pane_t3_ParamLimits

0xf532,	// (0x0003e818) title_pane_t_ParamLimits

0x682e,	// (0x00035b14) level_1_signal_ParamLimits

0x683b,	// (0x00035b21) level_2_signal_ParamLimits

0x6848,	// (0x00035b2e) level_3_signal_ParamLimits

0x6855,	// (0x00035b3b) level_4_signal_ParamLimits

0x8b07,	// (0x00037ded) level_5_signal_ParamLimits

0x8b14,	// (0x00037dfa) level_6_signal_ParamLimits

0x8b21,	// (0x00037e07) level_7_signal_ParamLimits

0x682e,	// (0x00035b14) level_1_battery_ParamLimits

0x683b,	// (0x00035b21) level_2_battery_ParamLimits

0x6848,	// (0x00035b2e) level_3_battery_ParamLimits

0x6855,	// (0x00035b3b) level_4_battery_ParamLimits

0x8b07,	// (0x00037ded) level_5_battery_ParamLimits

0x8b14,	// (0x00037dfa) level_6_battery_ParamLimits

0x8b21,	// (0x00037e07) level_7_battery_ParamLimits

0xa1bb,	// (0x000394a1) bg_status_flat_pane_g1

0xa1c3,	// (0x000394a9) bg_status_flat_pane_g2

0xa1cb,	// (0x000394b1) bg_status_flat_pane_g3

0xa1d3,	// (0x000394b9) bg_status_flat_pane_g4

0xa1db,	// (0x000394c1) bg_status_flat_pane_g5

0xa1e3,	// (0x000394c9) bg_status_flat_pane_g6

0xa1eb,	// (0x000394d1) bg_status_flat_pane_g7

0x583d,	// (0x00034b23) tabs_3_active_pane_t1_ParamLimits

0x583d,	// (0x00034b23) tabs_3_passive_pane_t1_ParamLimits

0x5857,	// (0x00034b3d) tabs_4_active_pane_t1_ParamLimits

0x5857,	// (0x00034b3d) tabs_4_1_passive_pane_t1_ParamLimits

0x6222,	// (0x00035508) tabs_2_active_pane_t1_ParamLimits

0x6222,	// (0x00035508) tabs_2_passive_pane_t1_ParamLimits

0x6234,	// (0x0003551a) bg_active_tab_pane_cp4_ParamLimits

0x6242,	// (0x00035528) tabs_2_long_active_pane_t1_ParamLimits

0x6255,	// (0x0003553b) bg_passive_tab_pane_cp4_ParamLimits

0x73f4,	// (0x000366da) list_single_midp_graphic_pane_t1_ParamLimits

0x6234,	// (0x0003551a) bg_active_tab_pane_cp5_ParamLimits

0x6261,	// (0x00035547) tabs_3_long_active_pane_t1_ParamLimits

0x6255,	// (0x0003553b) bg_passive_tab_pane_cp5_ParamLimits

0x73f4,	// (0x000366da) list_single_midp_graphic_pane_t1

0x956c,	// (0x00038852) bg_status_flat_pane_ParamLimits

0x9637,	// (0x0003891d) indicator_pane_cp2_ParamLimits

0x9637,	// (0x0003891d) indicator_pane_cp2

0x977a,	// (0x00038a60) navi_pane_srt_ParamLimits

0x977a,	// (0x00038a60) navi_pane_srt

0x979e,	// (0x00038a84) popup_clock_digital_analogue_window_cp1

0x22d7,	// (0x000315bd) indicator_pane_t1

0x9156,	// (0x0003843c) copy_highlight_pane

0x9156,	// (0x0003843c) cursor_graphics_pane

0x9156,	// (0x0003843c) graphic_within_text_pane

0x9156,	// (0x0003843c) link_highlight_pane

0xa9da,	// (0x00039cc0) popup_preview_text_window_t5_ParamLimits

0xa9da,	// (0x00039cc0) popup_preview_text_window_t5

0x9287,	// (0x0003856d) cursor_digital_pane

0x9287,	// (0x0003856d) cursor_primary_pane

0x9298,	// (0x0003857e) cursor_primary_small_pane

0x92a0,	// (0x00038586) cursor_secondary_pane

0x92a8,	// (0x0003858e) cursor_title_pane

0x9287,	// (0x0003856d) link_highlight_digital_pane

0x928f,	// (0x00038575) link_highlight_primary_pane

0x9298,	// (0x0003857e) link_highlight_primary_small_pane

0x92a0,	// (0x00038586) link_highlight_secondary_pane

0x92a8,	// (0x0003858e) link_highlight_title_pane

0x9287,	// (0x0003856d) copy_highlight_digital_pane

0x9287,	// (0x0003856d) copy_highlight_primary_pane

0x9298,	// (0x0003857e) copy_highlight_primary_small_pane

0x92a0,	// (0x00038586) copy_highlight_secondary_pane

0x92a8,	// (0x0003858e) copy_highlight_title_pane

0x92a0,	// (0x00038586) graphic_text_digital_pane

0xa259,	// (0x0003953f) graphic_text_primary_pane

0xa262,	// (0x00039548) graphic_text_primary_small_pane

0x9298,	// (0x0003857e) graphic_text_secondary_pane

0x9287,	// (0x0003856d) graphic_text_title_pane

0x92b0,	// (0x00038596) cursor_primary_pane_g1

0xa24b,	// (0x00039531) cursor_text_primary_t1

0xa233,	// (0x00039519) cursor_primary_small_pane_g1

0xa23d,	// (0x00039523) cursor_text_primary_small_t1

0xa21b,	// (0x00039501) cursor_primary_small_pane_g1_copy1

0xa225,	// (0x0003950b) cursor_text_primary_small_t1_copy1

0xa203,	// (0x000394e9) cursor_text_title_t1

0xa211,	// (0x000394f7) cursor_title_pane_g1

0x92b0,	// (0x00038596) cursor_digital_pane_g1

0x92ba,	// (0x000385a0) cursor_text_digital_t1

0x92c8,	// (0x000385ae) link_highlight_primary_pane_g1

0xa1ac,	// (0x00039492) link_highlight_primary_pane_t1

0x92c8,	// (0x000385ae) link_highlight_primary_small_pane_g1

0x92d0,	// (0x000385b6) link_highlight_primary_small_pane_t1

0x92df,	// (0x000385c5) link_highlight_secondary_pane_g1

0x92e7,	// (0x000385cd) link_highlight_secondary_pane_t1

0xa120,	// (0x00039406) link_highlight_title_pane_g1

0xa128,	// (0x0003940e) link_highlight_title_pane_t1

0xa109,	// (0x000393ef) link_highlight_digital_pane_g1

0xa111,	// (0x000393f7) link_highlight_digital_pane_t1

0x9fd1,	// (0x000392b7) copy_highlight_primary_pane_g1

0x9fe8,	// (0x000392ce) copy_highlight_primary_pane_t1

0x9fd1,	// (0x000392b7) copy_highlight_primary_small_pane_g1

0x9fd9,	// (0x000392bf) copy_highlight_primary_small_pane_t1

0x92f6,	// (0x000385dc) copy_highlight_secondary_pane_g1

0x92fe,	// (0x000385e4) copy_highlight_secondary_pane_t1

0x9fba,	// (0x000392a0) copy_highlight_title_pane_g1

0x9fc2,	// (0x000392a8) copy_highlight_title_pane_t1

0x9fd1,	// (0x000392b7) copy_highlight_digital_pane_g1

0xb294,	// (0x0003a57a) copy_highlight_digital_pane_t1

0xb1e8,	// (0x0003a4ce) graphic_text_primary_pane_g1

0xb278,	// (0x0003a55e) graphic_text_primary_pane_t1

0xb286,	// (0x0003a56c) graphic_text_primary_pane_t2

0x0001,

0xf9a9,	// (0x0003ec8f) graphic_text_primary_pane_t

0xb254,	// (0x0003a53a) graphic_text_primary_small_pane_g1

0xb25c,	// (0x0003a542) graphic_text_primary_small_pane_t1

0xb26a,	// (0x0003a550) graphic_text_primary_small_pane_t2

0x0001,

0xf9a4,	// (0x0003ec8a) graphic_text_primary_small_pane_t

0xb230,	// (0x0003a516) graphic_text_secondary_pane_g1

0xb238,	// (0x0003a51e) graphic_text_secondary_pane_t1

0xb246,	// (0x0003a52c) graphic_text_secondary_pane_t2

0x0001,

0xf99f,	// (0x0003ec85) graphic_text_secondary_pane_t

0xb20c,	// (0x0003a4f2) graphic_text_title_pane_g1

0xb214,	// (0x0003a4fa) graphic_text_title_pane_t1

0xb222,	// (0x0003a508) graphic_text_title_pane_t2

0x0001,

0xf99a,	// (0x0003ec80) graphic_text_title_pane_t

0xb1e8,	// (0x0003a4ce) graphic_text_digital_pane_g1

0xb1f0,	// (0x0003a4d6) graphic_text_digital_pane_t1

0xb1fe,	// (0x0003a4e4) graphic_text_digital_pane_t2

0x0001,

0xf995,	// (0x0003ec7b) graphic_text_digital_pane_t

0x2293,	// (0x00031579) navi_icon_pane_srt_ParamLimits

0x2293,	// (0x00031579) navi_icon_pane_srt

0x2237,	// (0x0003151d) navi_midp_pane_srt

0x2237,	// (0x0003151d) navi_navi_pane_srt

0x2293,	// (0x00031579) navi_text_pane_srt_ParamLimits

0x2293,	// (0x00031579) navi_text_pane_srt

0xb1b3,	// (0x0003a499) navi_navi_icon_text_pane_srt

0xb1bb,	// (0x0003a4a1) navi_navi_pane_srt_g1_ParamLimits

0xb1bb,	// (0x0003a4a1) navi_navi_pane_srt_g1

0xb1cd,	// (0x0003a4b3) navi_navi_pane_srt_g2_ParamLimits

0xb1cd,	// (0x0003a4b3) navi_navi_pane_srt_g2

0x0001,

0xf990,	// (0x0003ec76) navi_navi_pane_srt_g_ParamLimits

0xf990,	// (0x0003ec76) navi_navi_pane_srt_g

0xb1df,	// (0x0003a4c5) navi_navi_tabs_pane_srt

0xb1b3,	// (0x0003a499) navi_navi_text_pane_srt

0xb1b3,	// (0x0003a499) navi_navi_volume_pane_srt

0xb1a4,	// (0x0003a48a) navi_navi_text_pane_srt_t1

0x787b,	// (0x00036b61) navi_navi_volume_pane_srt_g1

0x7883,	// (0x00036b69) volume_small_pane_srt_ParamLimits

0x7883,	// (0x00036b69) volume_small_pane_srt

0x6b08,	// (0x00035dee) volume_small_pane_srt_g1_ParamLimits

0x6b08,	// (0x00035dee) volume_small_pane_srt_g1

0x6b18,	// (0x00035dfe) volume_small_pane_srt_g2_ParamLimits

0x6b18,	// (0x00035dfe) volume_small_pane_srt_g2

0x6b29,	// (0x00035e0f) volume_small_pane_srt_g3_ParamLimits

0x6b29,	// (0x00035e0f) volume_small_pane_srt_g3

0x6b3a,	// (0x00035e20) volume_small_pane_srt_g4_ParamLimits

0x6b3a,	// (0x00035e20) volume_small_pane_srt_g4

0x6b4b,	// (0x00035e31) volume_small_pane_srt_g5_ParamLimits

0x6b4b,	// (0x00035e31) volume_small_pane_srt_g5

0x6b5c,	// (0x00035e42) volume_small_pane_srt_g6_ParamLimits

0x6b5c,	// (0x00035e42) volume_small_pane_srt_g6

0x6b6d,	// (0x00035e53) volume_small_pane_srt_g7_ParamLimits

0x6b6d,	// (0x00035e53) volume_small_pane_srt_g7

0x6b7e,	// (0x00035e64) volume_small_pane_srt_g8_ParamLimits

0x6b7e,	// (0x00035e64) volume_small_pane_srt_g8

0x6b8f,	// (0x00035e75) volume_small_pane_srt_g9_ParamLimits

0x6b8f,	// (0x00035e75) volume_small_pane_srt_g9

0x6ba0,	// (0x00035e86) volume_small_pane_srt_g10_ParamLimits

0x6ba0,	// (0x00035e86) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x0003ea1e) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x0003ea1e) volume_small_pane_srt_g

0x2549,	// (0x0003182f) query_popup_data_pane_cp2

0xb18a,	// (0x0003a470) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb18a,	// (0x0003a470) navi_navi_icon_text_pane_srt_t1

0xa259,	// (0x0003953f) navi_tabs_2_long_pane_srt

0xa259,	// (0x0003953f) navi_tabs_2_pane_srt

0xa259,	// (0x0003953f) navi_tabs_3_long_pane_srt

0xa259,	// (0x0003953f) navi_tabs_3_pane_srt

0xa259,	// (0x0003953f) navi_tabs_4_pane_srt

0x785b,	// (0x00036b41) tabs_2_active_pane_srt_ParamLimits

0x785b,	// (0x00036b41) tabs_2_active_pane_srt

0x786b,	// (0x00036b51) tabs_2_passive_pane_srt_ParamLimits

0x786b,	// (0x00036b51) tabs_2_passive_pane_srt

0x947d,	// (0x00038763) bg_passive_tab_pane_cp1_srt_ParamLimits

0x947d,	// (0x00038763) bg_passive_tab_pane_cp1_srt

0xb156,	// (0x0003a43c) bg_passive_tab_pane_g1_cp1_srt

0x8d93,	// (0x00038079) bg_passive_tab_pane_g2_cp1_srt

0xb15f,	// (0x0003a445) bg_passive_tab_pane_g3_cp1_srt

0x2293,	// (0x00031579) bg_active_tab_pane_cp1_srt_ParamLimits

0x2293,	// (0x00031579) bg_active_tab_pane_cp1_srt

0xb168,	// (0x0003a44e) tabs_2_active_pane_srt_g1

0xb170,	// (0x0003a456) tabs_2_active_pane_srt_t1_ParamLimits

0xb170,	// (0x0003a456) tabs_2_active_pane_srt_t1

0xb156,	// (0x0003a43c) bg_active_tab_pane_g1_cp1_srt

0x8d93,	// (0x00038079) bg_active_tab_pane_g2_cp1_srt

0xb15f,	// (0x0003a445) bg_active_tab_pane_g3_cp1_srt

0x7828,	// (0x00036b0e) tabs_3_active_pane_srt_ParamLimits

0x7828,	// (0x00036b0e) tabs_3_active_pane_srt

0x7839,	// (0x00036b1f) tabs_3_passive_pane_cp_srt_ParamLimits

0x7839,	// (0x00036b1f) tabs_3_passive_pane_cp_srt

0x784a,	// (0x00036b30) tabs_3_passive_pane_srt_ParamLimits

0x784a,	// (0x00036b30) tabs_3_passive_pane_srt

0x947d,	// (0x00038763) bg_passive_tab_pane_cp2_srt_ParamLimits

0x947d,	// (0x00038763) bg_passive_tab_pane_cp2_srt

0x930d,	// (0x000385f3) bg_passive_tab_pane_g1_cp2_srt

0x8d93,	// (0x00038079) bg_passive_tab_pane_g2_cp2_srt

0x9316,	// (0x000385fc) bg_passive_tab_pane_g3_cp2_srt

0x2293,	// (0x00031579) bg_active_tab_pane_cp2_srt_ParamLimits

0x2293,	// (0x00031579) bg_active_tab_pane_cp2_srt

0xb13c,	// (0x0003a422) tabs_3_active_pane_srt_g1

0xb144,	// (0x0003a42a) tabs_3_active_pane_srt_t1_ParamLimits

0xb144,	// (0x0003a42a) tabs_3_active_pane_srt_t1

0x930d,	// (0x000385f3) bg_active_tab_pane_g1_cp2_srt

0x8d93,	// (0x00038079) bg_active_tab_pane_g2_cp2_srt

0x9316,	// (0x000385fc) bg_active_tab_pane_g3_cp2_srt

0x77e0,	// (0x00036ac6) tabs_4_active_pane_srt_ParamLimits

0x77e0,	// (0x00036ac6) tabs_4_active_pane_srt

0x77f2,	// (0x00036ad8) tabs_4_passive_pane_cp2_srt_ParamLimits

0x77f2,	// (0x00036ad8) tabs_4_passive_pane_cp2_srt

0x6d1f,	// (0x00036005) aid_size_cell_toolbar

0x6255,	// (0x0003553b) main_idle_act_pane_ParamLimits

0x6efe,	// (0x000361e4) popup_large_graphic_colour_window_ParamLimits

0x72a5,	// (0x0003658b) popup_toolbar_window_ParamLimits

0x72a5,	// (0x0003658b) popup_toolbar_window

0xaf79,	// (0x0003a25f) list_single_graphic_2heading_pane_ParamLimits

0xaf79,	// (0x0003a25f) list_single_graphic_2heading_pane

0x659f,	// (0x00035885) aid_size_cell_apps_grid_lsc_pane

0x65b1,	// (0x00035897) aid_size_cell_apps_grid_prt_pane

0x947d,	// (0x00038763) bg_wml_button_pane_cp1_ParamLimits

0x947d,	// (0x00038763) bg_wml_button_pane_cp1

0x9c35,	// (0x00038f1b) form_midp_field_text_pane_t1_ParamLimits

0x9a27,	// (0x00038d0d) input_focus_pane_cp050_ParamLimits

0x9c60,	// (0x00038f46) list_midp_form_text_pane_ParamLimits

0x9c12,	// (0x00038ef8) input_focus_pane_cp051_ParamLimits

0x9c26,	// (0x00038f0c) list_midp_choice_pane_ParamLimits

0x9ae0,	// (0x00038dc6) list_single_2graphic_pane_cp3_ParamLimits

0x9ae0,	// (0x00038dc6) list_single_2graphic_pane_cp3

0x9af6,	// (0x00038ddc) list_single_midp_graphic_pane_ParamLimits

0x9af6,	// (0x00038ddc) list_single_midp_graphic_pane

0x530a,	// (0x000345f0) list_single_graphic_2heading_pane_g1_ParamLimits

0x530a,	// (0x000345f0) list_single_graphic_2heading_pane_g1

0x5316,	// (0x000345fc) list_single_graphic_2heading_pane_g4_ParamLimits

0x5316,	// (0x000345fc) list_single_graphic_2heading_pane_g4

0x5322,	// (0x00034608) list_single_graphic_2heading_pane_g5_ParamLimits

0x5322,	// (0x00034608) list_single_graphic_2heading_pane_g5

0x0002,

0xf78b,	// (0x0003ea71) list_single_graphic_2heading_pane_g_ParamLimits

0xf78b,	// (0x0003ea71) list_single_graphic_2heading_pane_g

0x532e,	// (0x00034614) list_single_graphic_2heading_pane_t1_ParamLimits

0x532e,	// (0x00034614) list_single_graphic_2heading_pane_t1

0x5342,	// (0x00034628) list_single_graphic_2heading_pane_t2_ParamLimits

0x5342,	// (0x00034628) list_single_graphic_2heading_pane_t2

0x535e,	// (0x00034644) list_single_graphic_2heading_pane_t3_ParamLimits

0x535e,	// (0x00034644) list_single_graphic_2heading_pane_t3

0x0002,

0xf792,	// (0x0003ea78) list_single_graphic_2heading_pane_t_ParamLimits

0xf792,	// (0x0003ea78) list_single_graphic_2heading_pane_t

0x98f1,	// (0x00038bd7) bg_popup_sub_pane_cp2

0x991b,	// (0x00038c01) grid_toobar_pane

0x7364,	// (0x0003664a) cell_toolbar_pane_ParamLimits

0x7364,	// (0x0003664a) cell_toolbar_pane

0x9957,	// (0x00038c3d) cell_toolbar_pane_g1_ParamLimits

0x9957,	// (0x00038c3d) cell_toolbar_pane_g1

0x996b,	// (0x00038c51) cell_toolbar_pane_g2_ParamLimits

0x996b,	// (0x00038c51) cell_toolbar_pane_g2

0x0001,

0xf7a0,	// (0x0003ea86) cell_toolbar_pane_g_ParamLimits

0xf7a0,	// (0x0003ea86) cell_toolbar_pane_g

0x998d,	// (0x00038c73) grid_highlight_pane_cp2_ParamLimits

0x998d,	// (0x00038c73) grid_highlight_pane_cp2

0x99a7,	// (0x00038c8d) toolbar_button_pane

0x99b3,	// (0x00038c99) toolbar_button_pane_g1

0x99bb,	// (0x00038ca1) toolbar_button_pane_g2

0x99c3,	// (0x00038ca9) toolbar_button_pane_g3

0x99cb,	// (0x00038cb1) toolbar_button_pane_g4

0x99d3,	// (0x00038cb9) toolbar_button_pane_g5

0x99db,	// (0x00038cc1) toolbar_button_pane_g6

0x99e3,	// (0x00038cc9) toolbar_button_pane_g7

0x99eb,	// (0x00038cd1) toolbar_button_pane_g8

0x99f3,	// (0x00038cd9) toolbar_button_pane_g9

0x0009,

0xf7a5,	// (0x0003ea8b) toolbar_button_pane_g

0x739c,	// (0x00036682) list_single_2graphic_pane_g1_cp3_ParamLimits

0x739c,	// (0x00036682) list_single_2graphic_pane_g1_cp3

0x73a8,	// (0x0003668e) list_single_2graphic_pane_g2_cp3_ParamLimits

0x73a8,	// (0x0003668e) list_single_2graphic_pane_g2_cp3

0x73b9,	// (0x0003669f) list_single_2graphic_pane_g3_cp3

0x73c1,	// (0x000366a7) list_single_2graphic_pane_g4_cp3_ParamLimits

0x73c1,	// (0x000366a7) list_single_2graphic_pane_g4_cp3

0x73cd,	// (0x000366b3) list_single_2graphic_pane_t1_cp3_ParamLimits

0x73cd,	// (0x000366b3) list_single_2graphic_pane_t1_cp3

0x73e8,	// (0x000366ce) list_single_midp_graphic_pane_g2_ParamLimits

0x73e8,	// (0x000366ce) list_single_midp_graphic_pane_g2

0x6d27,	// (0x0003600d) aid_zoom_text_primary

0x52ee,	// (0x000345d4) aid_zoom_text_secondary

0x93c7,	// (0x000386ad) status_small_pane_g7_ParamLimits

0x93c7,	// (0x000386ad) status_small_pane_g7

0x93ea,	// (0x000386d0) status_small_pane_t1_ParamLimits

0x57a8,	// (0x00034a8e) title_pane_g2

0x0003,

0xf529,	// (0x0003e80f) title_pane_g

0x5a11,	// (0x00034cf7) aid_size_cell_colour_1_pane_ParamLimits

0x5a11,	// (0x00034cf7) aid_size_cell_colour_1_pane

0x5a25,	// (0x00034d0b) aid_size_cell_colour_2_pane_ParamLimits

0x5a25,	// (0x00034d0b) aid_size_cell_colour_2_pane

0x5a39,	// (0x00034d1f) aid_size_cell_colour_3_pane_ParamLimits

0x5a39,	// (0x00034d1f) aid_size_cell_colour_3_pane

0x5a4d,	// (0x00034d33) aid_size_cell_colour_4_pane_ParamLimits

0x5a4d,	// (0x00034d33) aid_size_cell_colour_4_pane

0x6418,	// (0x000356fe) title_pane_stacon_g1_ParamLimits

0x6418,	// (0x000356fe) title_pane_stacon_g1

0xa03f,	// (0x00039325) popup_note_wait_window_g3_ParamLimits

0xa03f,	// (0x00039325) popup_note_wait_window_g3

0xa0b6,	// (0x0003939c) popup_note_wait_window_t5_ParamLimits

0xa0b6,	// (0x0003939c) popup_note_wait_window_t5

0x2237,	// (0x0003151d) main_feb_china_hwr_fs_writing_pane

0x6dc3,	// (0x000360a9) popup_feb_china_hwr_fs_window_ParamLimits

0x6dc3,	// (0x000360a9) popup_feb_china_hwr_fs_window

0x740a,	// (0x000366f0) aid_size_cell_hwr_fs_ParamLimits

0x740a,	// (0x000366f0) aid_size_cell_hwr_fs

0x9a27,	// (0x00038d0d) bg_popup_sub_pane_cp3_ParamLimits

0x9a27,	// (0x00038d0d) bg_popup_sub_pane_cp3

0x741f,	// (0x00036705) grid_hwr_fs_pane_ParamLimits

0x741f,	// (0x00036705) grid_hwr_fs_pane

0x7437,	// (0x0003671d) linegrid_hwr_fs_pane_ParamLimits

0x7437,	// (0x0003671d) linegrid_hwr_fs_pane

0x7447,	// (0x0003672d) cell_hwr_fs_pane_ParamLimits

0x7447,	// (0x0003672d) cell_hwr_fs_pane

0x9a33,	// (0x00038d19) linegrid_hwr_fs_pane_g1_ParamLimits

0x9a33,	// (0x00038d19) linegrid_hwr_fs_pane_g1

0x9a3f,	// (0x00038d25) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a3f,	// (0x00038d25) linegrid_hwr_fs_pane_g2

0x9a51,	// (0x00038d37) linegrid_hwr_fs_pane_g3_ParamLimits

0x9a51,	// (0x00038d37) linegrid_hwr_fs_pane_g3

0x746b,	// (0x00036751) linegrid_hwr_fs_pane_g4_ParamLimits

0x746b,	// (0x00036751) linegrid_hwr_fs_pane_g4

0x7489,	// (0x0003676f) linegrid_hwr_fs_pane_g5_ParamLimits

0x7489,	// (0x0003676f) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d0,	// (0x0003eab6) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d0,	// (0x0003eab6) linegrid_hwr_fs_pane_g

0x9a5d,	// (0x00038d43) cell_hwr_fs_pane_g1_ParamLimits

0x9a5d,	// (0x00038d43) cell_hwr_fs_pane_g1

0x982c,	// (0x00038b12) cell_hwr_fs_pane_g2_ParamLimits

0x982c,	// (0x00038b12) cell_hwr_fs_pane_g2

0x9a73,	// (0x00038d59) cell_hwr_fs_pane_g3_ParamLimits

0x9a73,	// (0x00038d59) cell_hwr_fs_pane_g3

0x9a80,	// (0x00038d66) cell_hwr_fs_pane_g4_ParamLimits

0x9a80,	// (0x00038d66) cell_hwr_fs_pane_g4

0x0003,

0xf7db,	// (0x0003eac1) cell_hwr_fs_pane_g_ParamLimits

0xf7db,	// (0x0003eac1) cell_hwr_fs_pane_g

0x749f,	// (0x00036785) cell_hwr_fs_pane_t1

0x2237,	// (0x0003151d) grid_highlight_pane_cp6

0x2237,	// (0x0003151d) main_idle_act2_pane

0x61c7,	// (0x000354ad) aid_inside_area_popup_secondary

0xa6ef,	// (0x000399d5) aid_inside_area_window_primary_ParamLimits

0xa6ef,	// (0x000399d5) aid_inside_area_window_primary

0xb2a3,	// (0x0003a589) ai2_news_ticker_pane

0xb2ab,	// (0x0003a591) aid_size_cell_ai1_link_ParamLimits

0xb2ab,	// (0x0003a591) aid_size_cell_ai1_link

0xb2c5,	// (0x0003a5ab) popup_ai2_data_window_ParamLimits

0xb2c5,	// (0x0003a5ab) popup_ai2_data_window

0xb2e3,	// (0x0003a5c9) popup_ai2_link_window_ParamLimits

0xb2e3,	// (0x0003a5c9) popup_ai2_link_window

0x9a27,	// (0x00038d0d) bg_popup_sub_pane_cp4_ParamLimits

0x9a27,	// (0x00038d0d) bg_popup_sub_pane_cp4

0xb2f9,	// (0x0003a5df) grid_ai2_link_pane_ParamLimits

0xb2f9,	// (0x0003a5df) grid_ai2_link_pane

0xb310,	// (0x0003a5f6) popup_ai2_link_window_g1_ParamLimits

0xb310,	// (0x0003a5f6) popup_ai2_link_window_g1

0xb31c,	// (0x0003a602) popup_ai2_link_window_g2_ParamLimits

0xb31c,	// (0x0003a602) popup_ai2_link_window_g2

0x0001,

0xf9ae,	// (0x0003ec94) popup_ai2_link_window_g_ParamLimits

0xf9ae,	// (0x0003ec94) popup_ai2_link_window_g

0xb32d,	// (0x0003a613) ai2_mp_button_pane

0xb335,	// (0x0003a61b) ai2_mp_volume_pane

0x9c12,	// (0x00038ef8) bg_popup_sub_pane_cp5_ParamLimits

0x9c12,	// (0x00038ef8) bg_popup_sub_pane_cp5

0xb33d,	// (0x0003a623) heading_ai2_gene_pane_ParamLimits

0xb33d,	// (0x0003a623) heading_ai2_gene_pane

0xb349,	// (0x0003a62f) list_ai2_gene_pane_ParamLimits

0xb349,	// (0x0003a62f) list_ai2_gene_pane

0xb391,	// (0x0003a677) cell_ai2_link_pane_ParamLimits

0xb391,	// (0x0003a677) cell_ai2_link_pane

0xb3a7,	// (0x0003a68d) cell_ai2_link_pane_g1

0x2237,	// (0x0003151d) grid_highlight_pane_cp7

0x7898,	// (0x00036b7e) ai2_mp_volume_pane_g1

0xb47a,	// (0x0003a760) ai2_mp_volume_pane_g2

0xb3ef,	// (0x0003a6d5) list_ai2_gene_pane_t1

0xb482,	// (0x0003a768) ai2_mp_volume_pane_g3

0x0002,

0xf9c7,	// (0x0003ecad) ai2_mp_volume_pane_g

0x78a0,	// (0x00036b86) volume_small_pane_cp3

0xb48a,	// (0x0003a770) aid_size_cell_ai2_button

0xb492,	// (0x0003a778) grid_ai2_button_pane

0xb49b,	// (0x0003a781) cell_ai2_button_pane_ParamLimits

0xb49b,	// (0x0003a781) cell_ai2_button_pane

0x222d,	// (0x00031513) cell_ai2_button_pane_g1

0x2237,	// (0x0003151d) grid_highlight_pane_cp8

0xb43a,	// (0x0003a720) ai2_gene_pane_t1_ParamLimits

0xb43a,	// (0x0003a720) ai2_gene_pane_t1

0x6d15,	// (0x00035ffb) aid_height_parent_landscape

0xad7f,	// (0x0003a065) aid_height_set_list

0xad90,	// (0x0003a076) aid_size_parent

0xb0c2,	// (0x0003a3a8) aid_size_cell_graphic_pane_ParamLimits

0xb359,	// (0x0003a63f) popup_ai2_data_window_g1_ParamLimits

0xb359,	// (0x0003a63f) popup_ai2_data_window_g1

0xb365,	// (0x0003a64b) ai2_news_ticker_pane_g1

0xb36d,	// (0x0003a653) ai2_news_ticker_pane_g2

0x0001,

0xf9b3,	// (0x0003ec99) ai2_news_ticker_pane_g

0xb375,	// (0x0003a65b) ai2_news_ticker_pane_t1

0xb383,	// (0x0003a669) ai2_news_ticker_pane_t2

0x0001,

0xf9b8,	// (0x0003ec9e) ai2_news_ticker_pane_t

0xb3b0,	// (0x0003a696) heading_ai2_gene_pane_g1

0xb3b8,	// (0x0003a69e) heading_ai2_gene_pane_t1_ParamLimits

0xb3b8,	// (0x0003a69e) heading_ai2_gene_pane_t1

0xb3cd,	// (0x0003a6b3) list_highlight_pane_cp6

0xb3d5,	// (0x0003a6bb) ai2_gene_pane_ParamLimits

0xb3d5,	// (0x0003a6bb) ai2_gene_pane

0xb3fd,	// (0x0003a6e3) list_ai2_gene_pane_t2

0x0001,

0xf9bd,	// (0x0003eca3) list_ai2_gene_pane_t

0xb40b,	// (0x0003a6f1) list_highlight_pane_cp8_ParamLimits

0xb40b,	// (0x0003a6f1) list_highlight_pane_cp8

0xb41c,	// (0x0003a702) ai2_gene_pane_g1_ParamLimits

0xb41c,	// (0x0003a702) ai2_gene_pane_g1

0xb42e,	// (0x0003a714) ai2_gene_pane_g2_ParamLimits

0xb42e,	// (0x0003a714) ai2_gene_pane_g2

0x0001,

0xf9c2,	// (0x0003eca8) ai2_gene_pane_g_ParamLimits

0xf9c2,	// (0x0003eca8) ai2_gene_pane_g

0x286b,	// (0x00031b51) scroll_pane_cp12

0x6cd2,	// (0x00035fb8) control_pane_t3_ParamLimits

0x6cd2,	// (0x00035fb8) control_pane_t3

0x93db,	// (0x000386c1) status_small_pane_g8_ParamLimits

0x93db,	// (0x000386c1) status_small_pane_g8

0x6ec1,	// (0x000361a7) popup_find_window_ParamLimits

0x70ee,	// (0x000363d4) popup_note_image_window_ParamLimits

0x3ef0,	// (0x000331d6) list_double2_graphic_pane_vc_g1_ParamLimits

0x3ef0,	// (0x000331d6) list_double2_graphic_pane_vc_g1

0x40b2,	// (0x00033398) list_double2_graphic_pane_vc_g2_ParamLimits

0x40b2,	// (0x00033398) list_double2_graphic_pane_vc_g2

0x40be,	// (0x000333a4) list_double2_graphic_pane_vc_g3_ParamLimits

0x40be,	// (0x000333a4) list_double2_graphic_pane_vc_g3

0x0002,

0xf799,	// (0x0003ea7f) list_double2_graphic_pane_vc_g_ParamLimits

0xf799,	// (0x0003ea7f) list_double2_graphic_pane_vc_g

0x40ca,	// (0x000333b0) list_double2_graphic_pane_vc_t1_ParamLimits

0x40ca,	// (0x000333b0) list_double2_graphic_pane_vc_t1

0x3eb4,	// (0x0003319a) list_single_heading_pane_vc_g1_ParamLimits

0x3eb4,	// (0x0003319a) list_single_heading_pane_vc_g1

0x3ec0,	// (0x000331a6) list_single_heading_pane_vc_g2_ParamLimits

0x3ec0,	// (0x000331a6) list_single_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003eaa0) list_single_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003eaa0) list_single_heading_pane_vc_g

0x40e0,	// (0x000333c6) list_single_heading_pane_vc_t1_ParamLimits

0x40e0,	// (0x000333c6) list_single_heading_pane_vc_t1

0x40f6,	// (0x000333dc) list_single_heading_pane_vc_t2_ParamLimits

0x40f6,	// (0x000333dc) list_single_heading_pane_vc_t2

0x0001,

0xf7bf,	// (0x0003eaa5) list_single_heading_pane_vc_t_ParamLimits

0xf7bf,	// (0x0003eaa5) list_single_heading_pane_vc_t

0x4108,	// (0x000333ee) list_setting_number_pane_vc_g1_ParamLimits

0x4108,	// (0x000333ee) list_setting_number_pane_vc_g1

0x4114,	// (0x000333fa) list_setting_number_pane_vc_g2_ParamLimits

0x4114,	// (0x000333fa) list_setting_number_pane_vc_g2

0x0001,

0xf7c4,	// (0x0003eaaa) list_setting_number_pane_vc_g_ParamLimits

0xf7c4,	// (0x0003eaaa) list_setting_number_pane_vc_g

0x4120,	// (0x00033406) list_setting_number_pane_vc_t1_ParamLimits

0x4120,	// (0x00033406) list_setting_number_pane_vc_t1

0x4134,	// (0x0003341a) list_setting_number_pane_vc_t2_ParamLimits

0x4134,	// (0x0003341a) list_setting_number_pane_vc_t2

0x4150,	// (0x00033436) list_setting_number_pane_vc_t3_ParamLimits

0x4150,	// (0x00033436) list_setting_number_pane_vc_t3

0x0002,

0xf7c9,	// (0x0003eaaf) list_setting_number_pane_vc_t_ParamLimits

0xf7c9,	// (0x0003eaaf) list_setting_number_pane_vc_t

0x417e,	// (0x00033464) set_value_pane_vc_ParamLimits

0x417e,	// (0x00033464) set_value_pane_vc

0xaf79,	// (0x0003a25f) list_double2_graphic_pane_vc_ParamLimits

0xaf79,	// (0x0003a25f) list_double2_graphic_pane_vc

0xaf79,	// (0x0003a25f) list_double2_large_graphic_pane_vc_ParamLimits

0xaf79,	// (0x0003a25f) list_double2_large_graphic_pane_vc

0xaf79,	// (0x0003a25f) list_double2_pane_vc_ParamLimits

0xaf79,	// (0x0003a25f) list_double2_pane_vc

0xaf79,	// (0x0003a25f) list_double_graphic_heading_pane_vc_ParamLimits

0xaf79,	// (0x0003a25f) list_double_graphic_heading_pane_vc

0xaf79,	// (0x0003a25f) list_double_graphic_pane_vc_ParamLimits

0xaf79,	// (0x0003a25f) list_double_graphic_pane_vc

0xaf79,	// (0x0003a25f) list_double_heading_pane_vc_ParamLimits

0xaf79,	// (0x0003a25f) list_double_heading_pane_vc

0x41b5,	// (0x0003349b) list_double_large_graphic_pane_vc_ParamLimits

0x41b5,	// (0x0003349b) list_double_large_graphic_pane_vc

0xaf79,	// (0x0003a25f) list_double_number_pane_vc_ParamLimits

0xaf79,	// (0x0003a25f) list_double_number_pane_vc

0xaf79,	// (0x0003a25f) list_double_pane_vc_ParamLimits

0xaf79,	// (0x0003a25f) list_double_pane_vc

0xaf79,	// (0x0003a25f) list_double_time_pane_vc_ParamLimits

0xaf79,	// (0x0003a25f) list_double_time_pane_vc

0xaf79,	// (0x0003a25f) list_setting_number_pane_vc_ParamLimits

0xaf79,	// (0x0003a25f) list_setting_number_pane_vc

0xaf79,	// (0x0003a25f) list_setting_pane_vc_ParamLimits

0xaf79,	// (0x0003a25f) list_setting_pane_vc

0xaf79,	// (0x0003a25f) list_single_graphic_heading_pane_vc_ParamLimits

0xaf79,	// (0x0003a25f) list_single_graphic_heading_pane_vc

0xaf79,	// (0x0003a25f) list_single_heading_pane_vc_ParamLimits

0xaf79,	// (0x0003a25f) list_single_heading_pane_vc

0x7781,	// (0x00036a67) list_single_number_heading_pane_vc_ParamLimits

0x7781,	// (0x00036a67) list_single_number_heading_pane_vc

0x3ef0,	// (0x000331d6) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3ef0,	// (0x000331d6) list_double_graphic_heading_pane_vc_g1

0x3eb4,	// (0x0003319a) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3eb4,	// (0x0003319a) list_double_graphic_heading_pane_vc_g2

0x3ec0,	// (0x000331a6) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3ec0,	// (0x000331a6) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ce,	// (0x0003ecb4) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ce,	// (0x0003ecb4) list_double_graphic_heading_pane_vc_g

0x41da,	// (0x000334c0) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x41da,	// (0x000334c0) list_double_graphic_heading_pane_vc_t1

0x41f0,	// (0x000334d6) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x41f0,	// (0x000334d6) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d5,	// (0x0003ecbb) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d5,	// (0x0003ecbb) list_double_graphic_heading_pane_vc_t

0x4108,	// (0x000333ee) list_setting_pane_vc_g1_ParamLimits

0x4108,	// (0x000333ee) list_setting_pane_vc_g1

0x4114,	// (0x000333fa) list_setting_pane_vc_g2_ParamLimits

0x4114,	// (0x000333fa) list_setting_pane_vc_g2

0x0001,

0xf7c4,	// (0x0003eaaa) list_setting_pane_vc_g_ParamLimits

0xf7c4,	// (0x0003eaaa) list_setting_pane_vc_g

0x420e,	// (0x000334f4) list_setting_pane_vc_t1_ParamLimits

0x420e,	// (0x000334f4) list_setting_pane_vc_t1

0x422a,	// (0x00033510) list_setting_pane_vc_t2_ParamLimits

0x422a,	// (0x00033510) list_setting_pane_vc_t2

0x0001,

0xfa03,	// (0x0003ece9) list_setting_pane_vc_t_ParamLimits

0xfa03,	// (0x0003ece9) list_setting_pane_vc_t

0x417e,	// (0x00033464) set_value_pane_cp_vc_ParamLimits

0x417e,	// (0x00033464) set_value_pane_cp_vc

0x3eb4,	// (0x0003319a) list_single_number_heading_pane_vc_g1_ParamLimits

0x3eb4,	// (0x0003319a) list_single_number_heading_pane_vc_g1

0x3ec0,	// (0x000331a6) list_single_number_heading_pane_vc_g2_ParamLimits

0x3ec0,	// (0x000331a6) list_single_number_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003eaa0) list_single_number_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003eaa0) list_single_number_heading_pane_vc_g

0x4246,	// (0x0003352c) list_single_number_heading_pane_vc_t1_ParamLimits

0x4246,	// (0x0003352c) list_single_number_heading_pane_vc_t1

0x3ecc,	// (0x000331b2) list_single_number_heading_pane_vc_t2_ParamLimits

0x3ecc,	// (0x000331b2) list_single_number_heading_pane_vc_t2

0x3ede,	// (0x000331c4) list_single_number_heading_pane_vc_t3_ParamLimits

0x3ede,	// (0x000331c4) list_single_number_heading_pane_vc_t3

0x0002,

0xfa08,	// (0x0003ecee) list_single_number_heading_pane_vc_t_ParamLimits

0xfa08,	// (0x0003ecee) list_single_number_heading_pane_vc_t

0x3ef0,	// (0x000331d6) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3ef0,	// (0x000331d6) list_single_graphic_heading_pane_vc_g1

0x3eb4,	// (0x0003319a) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3eb4,	// (0x0003319a) list_single_graphic_heading_pane_vc_g4

0x3ec0,	// (0x000331a6) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3ec0,	// (0x000331a6) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9ce,	// (0x0003ecb4) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9ce,	// (0x0003ecb4) list_single_graphic_heading_pane_vc_g

0x4246,	// (0x0003352c) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4246,	// (0x0003352c) list_single_graphic_heading_pane_vc_t1

0x425c,	// (0x00033542) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x425c,	// (0x00033542) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa0f,	// (0x0003ecf5) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa0f,	// (0x0003ecf5) list_single_graphic_heading_pane_vc_t

0x3eb4,	// (0x0003319a) list_double2_pane_vc_g1_ParamLimits

0x3eb4,	// (0x0003319a) list_double2_pane_vc_g1

0x3ec0,	// (0x000331a6) list_double2_pane_vc_g2_ParamLimits

0x3ec0,	// (0x000331a6) list_double2_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003eaa0) list_double2_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003eaa0) list_double2_pane_vc_g

0x419f,	// (0x00033485) list_double2_pane_vc_t1_ParamLimits

0x419f,	// (0x00033485) list_double2_pane_vc_t1

0x3efc,	// (0x000331e2) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3efc,	// (0x000331e2) list_double2_large_graphic_pane_vc_g1

0x3eb4,	// (0x0003319a) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3eb4,	// (0x0003319a) list_double2_large_graphic_pane_vc_g2

0x3ec0,	// (0x000331a6) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x3ec0,	// (0x000331a6) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa14,	// (0x0003ecfa) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa14,	// (0x0003ecfa) list_double2_large_graphic_pane_vc_g

0x3f08,	// (0x000331ee) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3f08,	// (0x000331ee) list_double2_large_graphic_pane_vc_t1

0x426e,	// (0x00033554) list_double_time_pane_vc_g1_ParamLimits

0x426e,	// (0x00033554) list_double_time_pane_vc_g1

0x427a,	// (0x00033560) list_double_time_pane_vc_g2_ParamLimits

0x427a,	// (0x00033560) list_double_time_pane_vc_g2

0x0001,

0xfa1b,	// (0x0003ed01) list_double_time_pane_vc_g_ParamLimits

0xfa1b,	// (0x0003ed01) list_double_time_pane_vc_g

0x4286,	// (0x0003356c) list_double_time_pane_vc_t1_ParamLimits

0x4286,	// (0x0003356c) list_double_time_pane_vc_t1

0x42c8,	// (0x000335ae) list_double_time_pane_vc_t2_ParamLimits

0x42c8,	// (0x000335ae) list_double_time_pane_vc_t2

0x4311,	// (0x000335f7) list_double_time_pane_vc_t3_ParamLimits

0x4311,	// (0x000335f7) list_double_time_pane_vc_t3

0x4323,	// (0x00033609) list_double_time_pane_vc_t4_ParamLimits

0x4323,	// (0x00033609) list_double_time_pane_vc_t4

0x0003,

0xfa20,	// (0x0003ed06) list_double_time_pane_vc_t_ParamLimits

0xfa20,	// (0x0003ed06) list_double_time_pane_vc_t

0x3eb4,	// (0x0003319a) list_double_pane_vc_g1_ParamLimits

0x3eb4,	// (0x0003319a) list_double_pane_vc_g1

0x3ec0,	// (0x000331a6) list_double_pane_vc_g2_ParamLimits

0x3ec0,	// (0x000331a6) list_double_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003eaa0) list_double_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003eaa0) list_double_pane_vc_g

0x4337,	// (0x0003361d) list_double_pane_vc_t1_ParamLimits

0x4337,	// (0x0003361d) list_double_pane_vc_t1

0x434b,	// (0x00033631) list_double_pane_vc_t2_ParamLimits

0x434b,	// (0x00033631) list_double_pane_vc_t2

0x0001,

0xfa29,	// (0x0003ed0f) list_double_pane_vc_t_ParamLimits

0xfa29,	// (0x0003ed0f) list_double_pane_vc_t

0x3eb4,	// (0x0003319a) list_double_number_pane_vc_g1_ParamLimits

0x3eb4,	// (0x0003319a) list_double_number_pane_vc_g1

0x3ec0,	// (0x000331a6) list_double_number_pane_vc_g2_ParamLimits

0x3ec0,	// (0x000331a6) list_double_number_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003eaa0) list_double_number_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003eaa0) list_double_number_pane_vc_g

0x4361,	// (0x00033647) list_double_number_pane_vc_t1_ParamLimits

0x4361,	// (0x00033647) list_double_number_pane_vc_t1

0x4373,	// (0x00033659) list_double_number_pane_vc_t2_ParamLimits

0x4373,	// (0x00033659) list_double_number_pane_vc_t2

0x434b,	// (0x00033631) list_double_number_pane_vc_t3_ParamLimits

0x434b,	// (0x00033631) list_double_number_pane_vc_t3

0x0002,

0xfa2e,	// (0x0003ed14) list_double_number_pane_vc_t_ParamLimits

0xfa2e,	// (0x0003ed14) list_double_number_pane_vc_t

0x4387,	// (0x0003366d) list_double_large_graphic_pane_vc_g1_ParamLimits

0x4387,	// (0x0003366d) list_double_large_graphic_pane_vc_g1

0x43a3,	// (0x00033689) list_double_large_graphic_pane_vc_g2_ParamLimits

0x43a3,	// (0x00033689) list_double_large_graphic_pane_vc_g2

0x43b7,	// (0x0003369d) list_double_large_graphic_pane_vc_g3_ParamLimits

0x43b7,	// (0x0003369d) list_double_large_graphic_pane_vc_g3

0x43c6,	// (0x000336ac) list_double_large_graphic_pane_vc_g4_ParamLimits

0x43c6,	// (0x000336ac) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa35,	// (0x0003ed1b) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa35,	// (0x0003ed1b) list_double_large_graphic_pane_vc_g

0x43d5,	// (0x000336bb) list_double_large_graphic_pane_vc_t1_ParamLimits

0x43d5,	// (0x000336bb) list_double_large_graphic_pane_vc_t1

0x43f1,	// (0x000336d7) list_double_large_graphic_pane_vc_t2_ParamLimits

0x43f1,	// (0x000336d7) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3e,	// (0x0003ed24) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3e,	// (0x0003ed24) list_double_large_graphic_pane_vc_t

0x3eb4,	// (0x0003319a) list_double_heading_pane_vc_g1_ParamLimits

0x3eb4,	// (0x0003319a) list_double_heading_pane_vc_g1

0x3ec0,	// (0x000331a6) list_double_heading_pane_vc_g2_ParamLimits

0x3ec0,	// (0x000331a6) list_double_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003eaa0) list_double_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003eaa0) list_double_heading_pane_vc_g

0x4411,	// (0x000336f7) list_double_heading_pane_vc_t1_ParamLimits

0x4411,	// (0x000336f7) list_double_heading_pane_vc_t1

0x4423,	// (0x00033709) list_double_heading_pane_vc_t2_ParamLimits

0x4423,	// (0x00033709) list_double_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x0003ed29) list_double_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x0003ed29) list_double_heading_pane_vc_t

0x443b,	// (0x00033721) list_double_graphic_pane_vc_g1_ParamLimits

0x443b,	// (0x00033721) list_double_graphic_pane_vc_g1

0x444e,	// (0x00033734) list_double_graphic_pane_vc_g2_ParamLimits

0x444e,	// (0x00033734) list_double_graphic_pane_vc_g2

0x3eb4,	// (0x0003319a) list_double_graphic_pane_vc_g3_ParamLimits

0x3eb4,	// (0x0003319a) list_double_graphic_pane_vc_g3

0x0003,

0xfa48,	// (0x0003ed2e) list_double_graphic_pane_vc_g_ParamLimits

0xfa48,	// (0x0003ed2e) list_double_graphic_pane_vc_g

0x446b,	// (0x00033751) list_double_graphic_pane_vc_t1_ParamLimits

0x446b,	// (0x00033751) list_double_graphic_pane_vc_t1

0x4495,	// (0x0003377b) list_double_graphic_pane_vc_t2_ParamLimits

0x4495,	// (0x0003377b) list_double_graphic_pane_vc_t2

0x0001,

0xfa51,	// (0x0003ed37) list_double_graphic_pane_vc_t_ParamLimits

0xfa51,	// (0x0003ed37) list_double_graphic_pane_vc_t

0x53aa,	// (0x00034690) aid_size_cell_fastswap

0x53b2,	// (0x00034698) aid_size_cell_touch_ParamLimits

0x53b2,	// (0x00034698) aid_size_cell_touch

0x561d,	// (0x00034903) popup_fast_swap_wide_window_ParamLimits

0x561d,	// (0x00034903) popup_fast_swap_wide_window

0x573b,	// (0x00034a21) touch_pane_ParamLimits

0x573b,	// (0x00034a21) touch_pane

0x28c1,	// (0x00031ba7) button_value_adjust_pane_cp2

0x3f59,	// (0x0003323f) button_value_adjust_pane_cp4

0x3f61,	// (0x00033247) form_field_data_pane_cp2

0x5fbb,	// (0x000352a1) form_field_data_wide_pane_cp2

0x6685,	// (0x0003596b) bg_scroll_pane_ParamLimits

0x66a4,	// (0x0003598a) scroll_handle_pane_ParamLimits

0x66b8,	// (0x0003599e) scroll_sc2_down_pane_ParamLimits

0x66b8,	// (0x0003599e) scroll_sc2_down_pane

0x66df,	// (0x000359c5) scroll_sc2_up_pane_ParamLimits

0x66df,	// (0x000359c5) scroll_sc2_up_pane

0xbbc3,	// (0x0003aea9) grid_wheel_folder_pane_g1_ParamLimits

0xbbc3,	// (0x0003aea9) grid_wheel_folder_pane_g1

0x6aa0,	// (0x00035d86) clock_nsta_pane_cp2_ParamLimits

0x6aa0,	// (0x00035d86) clock_nsta_pane_cp2

0x915e,	// (0x00038444) listscroll_midp_pane_ParamLimits

0x916a,	// (0x00038450) midp_canvas_pane

0x9455,	// (0x0003873b) nsta_clock_indic_pane

0x9489,	// (0x0003876f) listscroll_form_pane_vc

0x9491,	// (0x00038777) listscroll_set_pane_vc_ParamLimits

0x9491,	// (0x00038777) listscroll_set_pane_vc

0x9588,	// (0x0003886e) clock_nsta_pane

0x9605,	// (0x000388eb) indicator_nsta_pane

0x98f1,	// (0x00038bd7) bg_popup_sub_pane_cp2_ParamLimits

0x9905,	// (0x00038beb) find_pane_cp2_ParamLimits

0x9905,	// (0x00038beb) find_pane_cp2

0x991b,	// (0x00038c01) grid_toobar_pane_ParamLimits

0x99fb,	// (0x00038ce1) list_form_gen_pane_vc_ParamLimits

0x99fb,	// (0x00038ce1) list_form_gen_pane_vc

0x9a11,	// (0x00038cf7) scroll_pane_cp8_vc_ParamLimits

0x9a11,	// (0x00038cf7) scroll_pane_cp8_vc

0x9a8d,	// (0x00038d73) data_form_wide_pane_vc_ParamLimits

0x9a8d,	// (0x00038d73) data_form_wide_pane_vc

0x9a99,	// (0x00038d7f) form_field_data_wide_pane_vc_g1

0x9aa1,	// (0x00038d87) form_field_data_wide_pane_vc_t1_ParamLimits

0x9aa1,	// (0x00038d87) form_field_data_wide_pane_vc_t1

0x28d5,	// (0x00031bbb) input_focus_pane_cp6_vc_ParamLimits

0x28d5,	// (0x00031bbb) input_focus_pane_cp6_vc

0x9d9d,	// (0x00039083) list_midp_pane_ParamLimits

0x9da9,	// (0x0003908f) scroll_pane_cp16_ParamLimits

0x9da9,	// (0x0003908f) scroll_pane_cp16

0x9e13,	// (0x000390f9) button_value_adjust_pane_ParamLimits

0x9e13,	// (0x000390f9) button_value_adjust_pane

0xada2,	// (0x0003a088) button_value_adjust_pane_cp6_ParamLimits

0xada2,	// (0x0003a088) button_value_adjust_pane_cp6

0xaeea,	// (0x0003a1d0) settings_code_pane_cp_ParamLimits

0xaeea,	// (0x0003a1d0) settings_code_pane_cp

0x222d,	// (0x00031513) cell_touch_pane_g1

0x222d,	// (0x00031513) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x0003e9c4) cell_touch_pane_g

0xb4ad,	// (0x0003a793) cell_touch_pane_cp_ParamLimits

0xb4ad,	// (0x0003a793) cell_touch_pane_cp

0xb4bd,	// (0x0003a7a3) cell_touch_pane_ParamLimits

0xb4bd,	// (0x0003a7a3) cell_touch_pane

0x222d,	// (0x00031513) scroll_sc2_down_pane_g1

0x222d,	// (0x00031513) scroll_sc2_up_pane_g1

0x2237,	// (0x0003151d) bg_set_opt_pane_cp4_vc

0xb4ce,	// (0x0003a7b4) list_set_graphic_pane_vc_g1_ParamLimits

0xb4ce,	// (0x0003a7b4) list_set_graphic_pane_vc_g1

0xb4da,	// (0x0003a7c0) list_set_graphic_pane_vc_g2_ParamLimits

0xb4da,	// (0x0003a7c0) list_set_graphic_pane_vc_g2

0x0001,

0xf9da,	// (0x0003ecc0) list_set_graphic_pane_vc_g_ParamLimits

0xf9da,	// (0x0003ecc0) list_set_graphic_pane_vc_g

0xb4e6,	// (0x0003a7cc) text_primary_small_cp13_vc_ParamLimits

0xb4e6,	// (0x0003a7cc) text_primary_small_cp13_vc

0xb4fe,	// (0x0003a7e4) list_set_graphic_pane_vc_ParamLimits

0xb4fe,	// (0x0003a7e4) list_set_graphic_pane_vc

0x2237,	// (0x0003151d) input_focus_pane_cp2_vc

0x222d,	// (0x00031513) setting_code_pane_vc_g1

0x22aa,	// (0x00031590) setting_code_pane_vc_t1

0xb511,	// (0x0003a7f7) set_text_pane_vc_t1_ParamLimits

0xb511,	// (0x0003a7f7) set_text_pane_vc_t1

0x2237,	// (0x0003151d) input_focus_pane_cp1_vc

0xb532,	// (0x0003a818) list_set_text_pane_vc

0x222d,	// (0x00031513) setting_text_pane_vc_g1

0x2237,	// (0x0003151d) bg_set_opt_pane_cp2_vc

0x22a1,	// (0x00031587) setting_slider_graphic_pane_vc_g1

0xb53c,	// (0x0003a822) setting_slider_graphic_pane_vc_t1

0xb54e,	// (0x0003a834) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9df,	// (0x0003ecc5) setting_slider_graphic_pane_vc_t

0xb560,	// (0x0003a846) slider_set_pane_cp_vc

0xb56a,	// (0x0003a850) slider_set_pane_vc_g1

0xb573,	// (0x0003a859) slider_set_pane_vc_g2

0x0006,

0xf9e4,	// (0x0003ecca) slider_set_pane_vc_g

0x292d,	// (0x00031c13) set_opt_bg_pane_g1_copy1

0x2935,	// (0x00031c1b) set_opt_bg_pane_g2_copy1

0xb59f,	// (0x0003a885) set_opt_bg_pane_g3_copy1

0x2945,	// (0x00031c2b) set_opt_bg_pane_g4_copy1

0x294d,	// (0x00031c33) set_opt_bg_pane_g5_copy1

0x2955,	// (0x00031c3b) set_opt_bg_pane_g6_copy1

0xb5a9,	// (0x0003a88f) set_opt_bg_pane_g7_copy1

0xb5b3,	// (0x0003a899) set_opt_bg_pane_g8_copy1

0xb5bd,	// (0x0003a8a3) set_opt_bg_pane_g9_copy1

0x2237,	// (0x0003151d) bg_set_opt_pane_cp_vc

0xb5c7,	// (0x0003a8ad) setting_slider_pane_vc_t1

0xb5d6,	// (0x0003a8bc) setting_slider_pane_vc_t2

0xb5e8,	// (0x0003a8ce) setting_slider_pane_vc_t3

0x0002,

0xf9f3,	// (0x0003ecd9) setting_slider_pane_vc_t

0xb5fa,	// (0x0003a8e0) slider_set_pane_vc

0x74cd,	// (0x000367b3) volume_set_pane_vc_g1

0x74d6,	// (0x000367bc) volume_set_pane_vc_g2

0x74df,	// (0x000367c5) volume_set_pane_vc_g3

0x74e8,	// (0x000367ce) volume_set_pane_vc_g4

0x74f1,	// (0x000367d7) volume_set_pane_vc_g5

0x74fa,	// (0x000367e0) volume_set_pane_vc_g6

0x7503,	// (0x000367e9) volume_set_pane_vc_g7

0x750c,	// (0x000367f2) volume_set_pane_vc_g8

0x7515,	// (0x000367fb) volume_set_pane_vc_g9

0x751e,	// (0x00036804) volume_set_pane_vc_g10

0x0009,

0xf891,	// (0x0003eb77) volume_set_pane_vc_g

0xb604,	// (0x0003a8ea) volume_set_pane_vc

0xb60e,	// (0x0003a8f4) button_value_adjust_pane_cp1_vc

0xb618,	// (0x0003a8fe) list_highlight_pane_cp2_vc

0xb621,	// (0x0003a907) list_set_pane_vc_ParamLimits

0xb621,	// (0x0003a907) list_set_pane_vc

0xb68f,	// (0x0003a975) main_pane_set_vc_t1_ParamLimits

0xb68f,	// (0x0003a975) main_pane_set_vc_t1

0xb6a4,	// (0x0003a98a) main_pane_set_vc_t2_ParamLimits

0xb6a4,	// (0x0003a98a) main_pane_set_vc_t2

0xb6b6,	// (0x0003a99c) main_pane_set_vc_t3_ParamLimits

0xb6b6,	// (0x0003a99c) main_pane_set_vc_t3

0xb6ca,	// (0x0003a9b0) main_pane_set_vc_t4_ParamLimits

0xb6ca,	// (0x0003a9b0) main_pane_set_vc_t4

0x0003,

0xf9fa,	// (0x0003ece0) main_pane_set_vc_t_ParamLimits

0xf9fa,	// (0x0003ece0) main_pane_set_vc_t

0xb6de,	// (0x0003a9c4) setting_code_pane_vc_ParamLimits

0xb6de,	// (0x0003a9c4) setting_code_pane_vc

0xb6ef,	// (0x0003a9d5) setting_slider_graphic_pane_vc

0xb6ef,	// (0x0003a9d5) setting_slider_pane_vc

0xb6ef,	// (0x0003a9d5) setting_text_pane_vc

0xb6ef,	// (0x0003a9d5) setting_volume_pane_vc

0xb6f9,	// (0x0003a9df) scroll_pane_cp121_vc

0x28af,	// (0x00031b95) set_content_pane_vc

0xb701,	// (0x0003a9e7) button_value_adjust_pane_g1

0xb70a,	// (0x0003a9f0) button_value_adjust_pane_g2

0x0001,

0xfa56,	// (0x0003ed3c) button_value_adjust_pane_g

0xb713,	// (0x0003a9f9) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb713,	// (0x0003a9f9) form_field_slider_wide_pane_vc_t1

0xb725,	// (0x0003aa0b) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb725,	// (0x0003aa0b) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5b,	// (0x0003ed41) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5b,	// (0x0003ed41) form_field_slider_wide_pane_vc_t

0x2285,	// (0x0003156b) input_focus_pane_cp10_vc_ParamLimits

0x2285,	// (0x0003156b) input_focus_pane_cp10_vc

0xb751,	// (0x0003aa37) slider_cont_pane_cp1_vc_ParamLimits

0xb751,	// (0x0003aa37) slider_cont_pane_cp1_vc

0xb763,	// (0x0003aa49) slider_form_pane_g1_cp2

0xb573,	// (0x0003a859) slider_form_pane_g2_cp2

0xb790,	// (0x0003aa76) form_field_slider_pane_vc_t3

0xb79e,	// (0x0003aa84) form_field_slider_pane_vc_t4

0xb7ac,	// (0x0003aa92) slider_form_pane_vc_ParamLimits

0xb7ac,	// (0x0003aa92) slider_form_pane_vc

0xb7b9,	// (0x0003aa9f) form_field_slider_pane_vc_t1_ParamLimits

0xb7b9,	// (0x0003aa9f) form_field_slider_pane_vc_t1

0xb725,	// (0x0003aa0b) form_field_slider_pane_vc_t2_ParamLimits

0xb725,	// (0x0003aa0b) form_field_slider_pane_vc_t2

0x0001,

0xfa6d,	// (0x0003ed53) form_field_slider_pane_vc_t_ParamLimits

0xfa6d,	// (0x0003ed53) form_field_slider_pane_vc_t

0x2285,	// (0x0003156b) input_focus_pane_cp9_vc_ParamLimits

0x2285,	// (0x0003156b) input_focus_pane_cp9_vc

0xb7cf,	// (0x0003aab5) slider_cont_pane_vc_ParamLimits

0xb7cf,	// (0x0003aab5) slider_cont_pane_vc

0xb7e3,	// (0x0003aac9) list_form_graphic_pane_cp_vc_ParamLimits

0xb7e3,	// (0x0003aac9) list_form_graphic_pane_cp_vc

0x9a99,	// (0x00038d7f) form_field_popup_wide_pane_vc_g1

0xb7f8,	// (0x0003aade) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb7f8,	// (0x0003aade) form_field_popup_wide_pane_vc_t1

0x28d5,	// (0x00031bbb) input_focus_pane_cp8_vc_ParamLimits

0x28d5,	// (0x00031bbb) input_focus_pane_cp8_vc

0xb83d,	// (0x0003ab23) list_form_wide_pane_vc_ParamLimits

0xb83d,	// (0x0003ab23) list_form_wide_pane_vc

0xb849,	// (0x0003ab2f) list_form_graphic_pane_vc_g1

0xb851,	// (0x0003ab37) list_form_graphic_pane_vc_t1_ParamLimits

0xb851,	// (0x0003ab37) list_form_graphic_pane_vc_t1

0x2293,	// (0x00031579) list_highlight_pane_cp5_vc_ParamLimits

0x2293,	// (0x00031579) list_highlight_pane_cp5_vc

0xb86d,	// (0x0003ab53) list_form_graphic_pane_vc_ParamLimits

0xb86d,	// (0x0003ab53) list_form_graphic_pane_vc

0x9a99,	// (0x00038d7f) form_field_popup_pane_vc_g1

0xb883,	// (0x0003ab69) form_field_popup_pane_vc_t1_ParamLimits

0xb883,	// (0x0003ab69) form_field_popup_pane_vc_t1

0x28d5,	// (0x00031bbb) input_focus_pane_cp7_vc_ParamLimits

0x28d5,	// (0x00031bbb) input_focus_pane_cp7_vc

0xb89a,	// (0x0003ab80) list_form_pane_vc_ParamLimits

0xb89a,	// (0x0003ab80) list_form_pane_vc

0xb8a6,	// (0x0003ab8c) data_form_pane_vc_t1_ParamLimits

0xb8a6,	// (0x0003ab8c) data_form_pane_vc_t1

0x292d,	// (0x00031c13) input_focus_pane_vc_g1

0x2935,	// (0x00031c1b) input_focus_pane_vc_g2

0x293d,	// (0x00031c23) input_focus_pane_vc_g3

0x2945,	// (0x00031c2b) input_focus_pane_vc_g4

0x294d,	// (0x00031c33) input_focus_pane_vc_g5

0x2955,	// (0x00031c3b) input_focus_pane_vc_g6

0x295d,	// (0x00031c43) input_focus_pane_vc_g7

0x2965,	// (0x00031c4b) input_focus_pane_vc_g8

0x296d,	// (0x00031c53) input_focus_pane_vc_g9

0x222d,	// (0x00031513) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x0003e94d) input_focus_pane_vc_g

0x9a8d,	// (0x00038d73) data_form_pane_vc_ParamLimits

0x9a8d,	// (0x00038d73) data_form_pane_vc

0x9a99,	// (0x00038d7f) form_field_data_pane_vc_g1

0xb8c3,	// (0x0003aba9) form_field_data_pane_vc_t1_ParamLimits

0xb8c3,	// (0x0003aba9) form_field_data_pane_vc_t1

0x28d5,	// (0x00031bbb) input_focus_pane_vc_ParamLimits

0x28d5,	// (0x00031bbb) input_focus_pane_vc

0xb8dd,	// (0x0003abc3) button_value_adjust_pane_cp3_vc

0xb8e5,	// (0x0003abcb) button_value_adjust_pane_cp5_vc

0xb8ed,	// (0x0003abd3) form_field_data_pane_vc_ParamLimits

0xb8ed,	// (0x0003abd3) form_field_data_pane_vc

0xb908,	// (0x0003abee) form_field_data_pane_vc_cp2

0xb910,	// (0x0003abf6) form_field_data_wide_pane_vc_ParamLimits

0xb910,	// (0x0003abf6) form_field_data_wide_pane_vc

0xb92a,	// (0x0003ac10) form_field_data_wide_pane_vc_cp2

0xb932,	// (0x0003ac18) form_field_popup_pane_vc_ParamLimits

0xb932,	// (0x0003ac18) form_field_popup_pane_vc

0xb94d,	// (0x0003ac33) form_field_popup_wide_pane_vc_ParamLimits

0xb94d,	// (0x0003ac33) form_field_popup_wide_pane_vc

0xb967,	// (0x0003ac4d) form_field_slider_pane_vc_ParamLimits

0xb967,	// (0x0003ac4d) form_field_slider_pane_vc

0xb97a,	// (0x0003ac60) form_field_slider_wide_pane_vc_ParamLimits

0xb97a,	// (0x0003ac60) form_field_slider_wide_pane_vc

0xb98d,	// (0x0003ac73) grid_touch_1_pane_ParamLimits

0xb98d,	// (0x0003ac73) grid_touch_1_pane

0xb999,	// (0x0003ac7f) grid_touch_2_pane_ParamLimits

0xb999,	// (0x0003ac7f) grid_touch_2_pane

0x9420,	// (0x00038706) touch_pane_g1_ParamLimits

0x9420,	// (0x00038706) touch_pane_g1

0xb9b3,	// (0x0003ac99) cell_app_pane_cp_wide_ParamLimits

0xb9b3,	// (0x0003ac99) cell_app_pane_cp_wide

0xb9c4,	// (0x0003acaa) grid_popup_fast_wide_pane_ParamLimits

0xb9c4,	// (0x0003acaa) grid_popup_fast_wide_pane

0xb9d8,	// (0x0003acbe) scroll_pane_cp19_ParamLimits

0xb9d8,	// (0x0003acbe) scroll_pane_cp19

0x2237,	// (0x0003151d) bg_popup_window_pane_cp20

0xb9ec,	// (0x0003acd2) listscroll_popup_fast_wide_pane

0xb9f4,	// (0x0003acda) grid_indicator_nsta_pane

0xba06,	// (0x0003acec) clock_nsta_pane_g1

0xba0f,	// (0x0003acf5) clock_nsta_pane_t1

0xba2b,	// (0x0003ad11) cell_indicator_nsta_pane_ParamLimits

0xba2b,	// (0x0003ad11) cell_indicator_nsta_pane

0xba60,	// (0x0003ad46) cell_indicator_nsta_pane_g1

0xba6e,	// (0x0003ad54) cell_indicator_nsta_pane_g2

0x0001,

0xfa7e,	// (0x0003ed64) cell_indicator_nsta_pane_g

0xba81,	// (0x0003ad67) clock_nsta_pane_cp

0xba8a,	// (0x0003ad70) indicator_nsta_pane_cp

0xba94,	// (0x0003ad7a) nsta_clock_indic_pane_g1

0x22cf,	// (0x000315b5) grid_indicator_pane

0x67d1,	// (0x00035ab7) scroll_pane_cp29

0x69ef,	// (0x00035cd5) indicator_nsta_pane_cp2_ParamLimits

0x69ef,	// (0x00035cd5) indicator_nsta_pane_cp2

0x2293,	// (0x00031579) main_apps_wheel_pane

0x9c7a,	// (0x00038f60) form_midp_field_text_pane_ParamLimits

0x9dc9,	// (0x000390af) scroll_bar_cp050_ParamLimits

0xbaed,	// (0x0003add3) cell_indicator_pane_ParamLimits

0xbaed,	// (0x0003add3) cell_indicator_pane

0xbb05,	// (0x0003adeb) cell_indicator_pane_g1

0xbb0f,	// (0x0003adf5) grid_wheel_folder_pane_ParamLimits

0xbb0f,	// (0x0003adf5) grid_wheel_folder_pane

0xbb23,	// (0x0003ae09) list_wheel_apps_pane_ParamLimits

0xbb23,	// (0x0003ae09) list_wheel_apps_pane

0xbb36,	// (0x0003ae1c) main_apps_wheel_pane_g1_ParamLimits

0xbb36,	// (0x0003ae1c) main_apps_wheel_pane_g1

0xbb52,	// (0x0003ae38) main_apps_wheel_pane_g2_ParamLimits

0xbb52,	// (0x0003ae38) main_apps_wheel_pane_g2

0x0001,

0xfa9a,	// (0x0003ed80) main_apps_wheel_pane_g_ParamLimits

0xfa9a,	// (0x0003ed80) main_apps_wheel_pane_g

0xbb6e,	// (0x0003ae54) main_apps_wheel_pane_t1_ParamLimits

0xbb6e,	// (0x0003ae54) main_apps_wheel_pane_t1

0xbb97,	// (0x0003ae7d) list_wheel_apps_pane_g1

0xbb9f,	// (0x0003ae85) list_wheel_apps_pane_g2

0xbba7,	// (0x0003ae8d) list_wheel_apps_pane_g3

0xbbaf,	// (0x0003ae95) list_wheel_apps_pane_g4

0xbbb9,	// (0x0003ae9f) list_wheel_apps_pane_g5

0x0004,

0xfa9f,	// (0x0003ed85) list_wheel_apps_pane_g

0x8fd2,	// (0x000382b8) navi_icon_text_pane

0x94b9,	// (0x0003879f) aid_fill_nsta

0xbbda,	// (0x0003aec0) navi_icon_text_pane_g1

0xbbe6,	// (0x0003aecc) navi_icon_text_pane_t1

0x8e5d,	// (0x00038143) list_set_graphic_pane_t1_ParamLimits

0x8e5d,	// (0x00038143) list_set_graphic_pane_t1

0xa536,	// (0x0003981c) popup_midp_note_alarm_window_t6_ParamLimits

0xa536,	// (0x0003981c) popup_midp_note_alarm_window_t6

0xa548,	// (0x0003982e) popup_midp_note_alarm_window_t7_ParamLimits

0xa548,	// (0x0003982e) popup_midp_note_alarm_window_t7

0xa55a,	// (0x00039840) popup_midp_note_alarm_window_t8_ParamLimits

0xa55a,	// (0x00039840) popup_midp_note_alarm_window_t8

0xa56c,	// (0x00039852) popup_midp_note_alarm_window_t9_ParamLimits

0xa56c,	// (0x00039852) popup_midp_note_alarm_window_t9

0xa57e,	// (0x00039864) popup_midp_note_alarm_window_t10_ParamLimits

0xa57e,	// (0x00039864) popup_midp_note_alarm_window_t10

0xa590,	// (0x00039876) popup_midp_note_alarm_window_t11_ParamLimits

0xa590,	// (0x00039876) popup_midp_note_alarm_window_t11

0xa5a2,	// (0x00039888) scroll_pane_cp17_ParamLimits

0xa5a2,	// (0x00039888) scroll_pane_cp17

0x74cd,	// (0x000367b3) volume_small_pane_cp_g1

0x78a9,	// (0x00036b8f) volume_small_pane_cp_g2

0x78b2,	// (0x00036b98) volume_small_pane_cp_g3

0x78bb,	// (0x00036ba1) volume_small_pane_cp_g4

0x78c4,	// (0x00036baa) volume_small_pane_cp_g5

0x78cd,	// (0x00036bb3) volume_small_pane_cp_g6

0x78d6,	// (0x00036bbc) volume_small_pane_cp_g7

0x78df,	// (0x00036bc5) volume_small_pane_cp_g8

0x78e8,	// (0x00036bce) volume_small_pane_cp_g9

0x78f1,	// (0x00036bd7) volume_small_pane_cp_g10

0x9234,	// (0x0003851a) midp_ticker_pane_g1_ParamLimits

0x9240,	// (0x00038526) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x0003ea19) midp_ticker_pane_g_ParamLimits

0x924c,	// (0x00038532) midp_ticker_pane_t1_ParamLimits

0x94cf,	// (0x000387b5) aid_fill_nsta_2

0x9db5,	// (0x0003909b) list_form2_midp_pane

0xaf31,	// (0x0003a217) midp_editing_number_pane_ParamLimits

0xaf40,	// (0x0003a226) midp_ticker_pane_ParamLimits

0xbbf8,	// (0x0003aede) form2_midp_field_pane

0xbc1c,	// (0x0003af02) scroll_pane_cp51

0xbc3c,	// (0x0003af22) form2_midp_button_pane_ParamLimits

0xbc3c,	// (0x0003af22) form2_midp_button_pane

0xbc4e,	// (0x0003af34) form2_midp_content_pane_ParamLimits

0xbc4e,	// (0x0003af34) form2_midp_content_pane

0xbc68,	// (0x0003af4e) form2_midp_field_choice_group_pane

0xbc70,	// (0x0003af56) form2_midp_field_pane_g1

0xbc78,	// (0x0003af5e) form2_midp_field_pane_g2

0xbc80,	// (0x0003af66) form2_midp_field_pane_g3

0xbc88,	// (0x0003af6e) form2_midp_field_pane_g4

0x0003,

0xfac4,	// (0x0003edaa) form2_midp_field_pane_g

0xbc90,	// (0x0003af76) form2_midp_gauge_slider_pane

0xbc98,	// (0x0003af7e) form2_midp_gauge_wait_pane

0xbca0,	// (0x0003af86) form2_midp_image_pane_ParamLimits

0xbca0,	// (0x0003af86) form2_midp_image_pane

0xbcbb,	// (0x0003afa1) form2_midp_label_pane_ParamLimits

0xbcbb,	// (0x0003afa1) form2_midp_label_pane

0xbce6,	// (0x0003afcc) form2_midp_label_pane_cp_ParamLimits

0xbce6,	// (0x0003afcc) form2_midp_label_pane_cp

0xbd07,	// (0x0003afed) form2_midp_string_pane_ParamLimits

0xbd07,	// (0x0003afed) form2_midp_string_pane

0x44b3,	// (0x00033799) form2_midp_text_pane_ParamLimits

0x44b3,	// (0x00033799) form2_midp_text_pane

0xbd19,	// (0x0003afff) form2_midp_time_pane

0xbd29,	// (0x0003b00f) input_focus_pane_cp51_ParamLimits

0xbd29,	// (0x0003b00f) input_focus_pane_cp51

0xbd41,	// (0x0003b027) form2_midp_label_pane_t1_ParamLimits

0xbd41,	// (0x0003b027) form2_midp_label_pane_t1

0x44d4,	// (0x000337ba) form2_mdip_text_pane_t1_ParamLimits

0x44d4,	// (0x000337ba) form2_mdip_text_pane_t1

0x44f8,	// (0x000337de) form2_midp_time_pane_t1

0xbd8f,	// (0x0003b075) form2_midp_gauge_slider_pane_t1

0xbda1,	// (0x0003b087) form2_midp_gauge_slider_pane_t2

0xbdb3,	// (0x0003b099) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacd,	// (0x0003edb3) form2_midp_gauge_slider_pane_t

0xbdc5,	// (0x0003b0ab) form2_midp_slider_pane

0xbdd1,	// (0x0003b0b7) form2_midp_gauge_wait_pane_t1

0xbddf,	// (0x0003b0c5) form2_midp_wait_pane_ParamLimits

0xbddf,	// (0x0003b0c5) form2_midp_wait_pane

0xbe0a,	// (0x0003b0f0) list_single_2graphic_pane_cp4_ParamLimits

0xbe0a,	// (0x0003b0f0) list_single_2graphic_pane_cp4

0x9af6,	// (0x00038ddc) list_single_midp_graphic_pane_cp_ParamLimits

0x9af6,	// (0x00038ddc) list_single_midp_graphic_pane_cp

0x2237,	// (0x0003151d) list_highlight_pane_cp20

0xbe23,	// (0x0003b109) list_single_2graphic_pane_g1_cp4

0xb3b0,	// (0x0003a696) list_single_2graphic_pane_g2_cp4

0xbe2b,	// (0x0003b111) list_single_2graphic_pane_t1_cp4

0x2293,	// (0x00031579) list_highlight_pane_cp21

0xbe3a,	// (0x0003b120) list_single_midp_graphic_pane_g4_cp

0xbe49,	// (0x0003b12f) list_single_midp_graphic_pane_t1_cp

0xbe5e,	// (0x0003b144) form2_mdip_string_pane_t1_ParamLimits

0xbe5e,	// (0x0003b144) form2_mdip_string_pane_t1

0x2237,	// (0x0003151d) bg_wml_button_pane_cp2

0x222d,	// (0x00031513) form2_midp_image_pane_g1

0x3f36,	// (0x0003321c) list_double_large_graphic_pane_g5_ParamLimits

0x3f36,	// (0x0003321c) list_double_large_graphic_pane_g5

0x915e,	// (0x00038444) midp_form_pane_ParamLimits

0x2293,	// (0x00031579) main_apps_wheel_pane_ParamLimits

0x7116,	// (0x000363fc) popup_preview_window_ParamLimits

0x7116,	// (0x000363fc) popup_preview_window

0x72fd,	// (0x000365e3) popup_touch_info_window_ParamLimits

0x72fd,	// (0x000365e3) popup_touch_info_window

0x731f,	// (0x00036605) popup_touch_menu_window_ParamLimits

0x731f,	// (0x00036605) popup_touch_menu_window

0x2223,	// (0x00031509) bg_popup_sub_pane_cp6

0xbefa,	// (0x0003b1e0) list_touch_menu_pane

0xbf02,	// (0x0003b1e8) list_single_touch_menu_pane_ParamLimits

0xbf02,	// (0x0003b1e8) list_single_touch_menu_pane

0xbf1a,	// (0x0003b200) list_single_touch_menu_pane_t1

0x2293,	// (0x00031579) bg_popup_sub_pane_cp7_ParamLimits

0x2293,	// (0x00031579) bg_popup_sub_pane_cp7

0xbf28,	// (0x0003b20e) heading_sub_pane

0xbf30,	// (0x0003b216) list_touch_info_pane_ParamLimits

0xbf30,	// (0x0003b216) list_touch_info_pane

0xbf3f,	// (0x0003b225) list_single_touch_info_pane_ParamLimits

0xbf3f,	// (0x0003b225) list_single_touch_info_pane

0xbf51,	// (0x0003b237) list_single_touch_info_pane_t1

0xbf5f,	// (0x0003b245) list_single_touch_info_pane_t2

0x0001,

0xfadb,	// (0x0003edc1) list_single_touch_info_pane_t

0x9156,	// (0x0003843c) bg_popup_heading_pane_cp

0xbf6d,	// (0x0003b253) heading_sub_pane_t1

0x9a27,	// (0x00038d0d) bg_popup_preview_window_pane_cp_ParamLimits

0x9a27,	// (0x00038d0d) bg_popup_preview_window_pane_cp

0xbf28,	// (0x0003b20e) heading_preview_pane

0xbf30,	// (0x0003b216) list_preview_pane_ParamLimits

0xbf30,	// (0x0003b216) list_preview_pane

0xbf7b,	// (0x0003b261) popup_preview_window_g1

0xbf3f,	// (0x0003b225) list_single_preview_pane_ParamLimits

0xbf3f,	// (0x0003b225) list_single_preview_pane

0xbf83,	// (0x0003b269) list_single_preview_pane_g1

0xbf8b,	// (0x0003b271) list_single_preview_pane_t1

0xbf51,	// (0x0003b237) list_single_preview_pane_t2

0x0001,

0xfae0,	// (0x0003edc6) list_single_preview_pane_t

0xbf99,	// (0x0003b27f) bg_popup_heading_pane_cp2_ParamLimits

0xbf99,	// (0x0003b27f) bg_popup_heading_pane_cp2

0xbfaf,	// (0x0003b295) heading_preview_pane_g1

0xbfb7,	// (0x0003b29d) heading_preview_pane_t1_ParamLimits

0xbfb7,	// (0x0003b29d) heading_preview_pane_t1

0x22e6,	// (0x000315cc) soft_indicator_pane_t1_ParamLimits

0x2848,	// (0x00031b2e) scroll_pane_ParamLimits

0x66cd,	// (0x000359b3) scroll_sc2_left_pane

0x66d6,	// (0x000359bc) scroll_sc2_right_pane

0x66f5,	// (0x000359db) scroll_bg_pane_g1_ParamLimits

0x670a,	// (0x000359f0) scroll_bg_pane_g2_ParamLimits

0x6722,	// (0x00035a08) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x0003e9a4) scroll_bg_pane_g_ParamLimits

0x66f5,	// (0x000359db) scroll_handle_pane_g1_ParamLimits

0x6744,	// (0x00035a2a) scroll_handle_pane_g2_ParamLimits

0x6722,	// (0x00035a08) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x0003e9ab) scroll_handle_pane_g_ParamLimits

0x6d5b,	// (0x00036041) popup_choice_list_window_ParamLimits

0x6d5b,	// (0x00036041) popup_choice_list_window

0x98fd,	// (0x00038be3) choice_list_pane

0x997f,	// (0x00038c65) cell_toolbar_pane_t1

0x99a7,	// (0x00038c8d) toolbar_button_pane_ParamLimits

0xaa6c,	// (0x00039d52) ai_gene_pane_1_t2_ParamLimits

0xaa6c,	// (0x00039d52) ai_gene_pane_1_t2

0x0001,

0xf8ed,	// (0x0003ebd3) ai_gene_pane_1_t_ParamLimits

0xf8ed,	// (0x0003ebd3) ai_gene_pane_1_t

0xbfd4,	// (0x0003b2ba) scroll_sc2_left_pane_g1

0xbfd4,	// (0x0003b2ba) scroll_sc2_right_pane_g1

0x947d,	// (0x00038763) bg_popup_sub_pane_cp10

0xbfde,	// (0x0003b2c4) list_choice_list_pane

0xbff7,	// (0x0003b2dd) list_single_choice_list_pane_ParamLimits

0xbff7,	// (0x0003b2dd) list_single_choice_list_pane

0xc00f,	// (0x0003b2f5) list_single_choice_list_pane_g1

0x6205,	// (0x000354eb) list_single_choice_list_pane_t1_ParamLimits

0x6205,	// (0x000354eb) list_single_choice_list_pane_t1

0xc017,	// (0x0003b2fd) choice_list_pane_g1

0xc01f,	// (0x0003b305) choice_list_pane_t1

0x2223,	// (0x00031509) input_focus_pane_cp11

0x642c,	// (0x00035712) title_pane_stacon_g2_ParamLimits

0x642c,	// (0x00035712) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x0003e98a) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0003e98a) title_pane_stacon_g

0x9156,	// (0x0003843c) cursor_press_pane

0x6e15,	// (0x000360fb) popup_fep_hwr_window_ParamLimits

0x6e15,	// (0x000360fb) popup_fep_hwr_window

0x6e9f,	// (0x00036185) popup_fep_vkb_window_ParamLimits

0x6e9f,	// (0x00036185) popup_fep_vkb_window

0xc02d,	// (0x0003b313) cursor_press_pane_g1

0x0002,

0xfb09,	// (0x0003edef) fep_vkb_side_pane_g_ParamLimits

0x7933,	// (0x00036c19) fep_hwr_candidate_pane_ParamLimits

0x7933,	// (0x00036c19) fep_hwr_candidate_pane

0x795d,	// (0x00036c43) fep_hwr_side_pane_ParamLimits

0x795d,	// (0x00036c43) fep_hwr_side_pane

0x797f,	// (0x00036c65) fep_hwr_top_pane_ParamLimits

0x797f,	// (0x00036c65) fep_hwr_top_pane

0x7997,	// (0x00036c7d) fep_hwr_write_pane_ParamLimits

0x7997,	// (0x00036c7d) fep_hwr_write_pane

0xfb09,	// (0x0003edef) fep_vkb_side_pane_g

0xc035,	// (0x0003b31b) fep_hwr_top_pane_g1

0xc047,	// (0x0003b32d) fep_hwr_top_pane_g2

0x79d1,	// (0x00036cb7) fep_hwr_top_pane_g3

0x0002,

0xfae5,	// (0x0003edcb) fep_hwr_top_pane_g

0x79e6,	// (0x00036ccc) fep_hwr_top_text_pane

0x8b3e,	// (0x00037e24) fep_hwr_top_text_pane_g1

0xc07d,	// (0x0003b363) fep_hwr_top_text_pane_t1

0x7af0,	// (0x00036dd6) fep_hwr_candidate_pane_g1

0xc2c8,	// (0x0003b5ae) fep_vkb_keypad_pane_g3_ParamLimits

0xc2c8,	// (0x0003b5ae) fep_vkb_keypad_pane_g3

0xc2f4,	// (0x0003b5da) fep_vkb_keypad_pane_g4_ParamLimits

0xc2f4,	// (0x0003b5da) fep_vkb_keypad_pane_g4

0xc36b,	// (0x0003b651) fep_vkb_bottom_pane_g2_ParamLimits

0xc36b,	// (0x0003b651) fep_vkb_bottom_pane_g2

0x0001,

0xfb10,	// (0x0003edf6) fep_vkb_bottom_pane_g_ParamLimits

0xfb10,	// (0x0003edf6) fep_vkb_bottom_pane_g

0xbfd4,	// (0x0003b2ba) cell_vkb_side_pane_g2

0x0001,

0xfb1a,	// (0x0003ee00) cell_vkb_side_pane_g

0xc3f6,	// (0x0003b6dc) cell_vkb_side_pane_t1

0xc404,	// (0x0003b6ea) cell_vkb_side_pane_t1_copy1

0xbfd4,	// (0x0003b2ba) bg_fep_vkb_candidate_pane_g2

0xc548,	// (0x0003b82e) cell_vkb_candidate_pane_ParamLimits

0xc08b,	// (0x0003b371) aid_size_cell_vkb_ParamLimits

0xc08b,	// (0x0003b371) aid_size_cell_vkb

0xc548,	// (0x0003b82e) cell_vkb_candidate_pane

0x7b17,	// (0x00036dfd) bg_popup_fep_shadow_pane_g1

0xc11d,	// (0x0003b403) fep_vkb_bottom_pane_ParamLimits

0xc11d,	// (0x0003b403) fep_vkb_bottom_pane

0xc15a,	// (0x0003b440) fep_vkb_candidate_pane_ParamLimits

0xc15a,	// (0x0003b440) fep_vkb_candidate_pane

0xc176,	// (0x0003b45c) fep_vkb_keypad_pane_ParamLimits

0xc176,	// (0x0003b45c) fep_vkb_keypad_pane

0xc1a9,	// (0x0003b48f) fep_vkb_side_pane_ParamLimits

0xc1a9,	// (0x0003b48f) fep_vkb_side_pane

0xc1e5,	// (0x0003b4cb) fep_vkb_top_pane_ParamLimits

0xc1e5,	// (0x0003b4cb) fep_vkb_top_pane

0xc221,	// (0x0003b507) fep_vkb_top_pane_g1_ParamLimits

0xc221,	// (0x0003b507) fep_vkb_top_pane_g1

0xc230,	// (0x0003b516) fep_vkb_top_pane_g2_ParamLimits

0xc230,	// (0x0003b516) fep_vkb_top_pane_g2

0xc23f,	// (0x0003b525) fep_vkb_top_pane_g3_ParamLimits

0xc23f,	// (0x0003b525) fep_vkb_top_pane_g3

0x0003,

0xfb00,	// (0x0003ede6) fep_vkb_top_pane_g_ParamLimits

0xfb00,	// (0x0003ede6) fep_vkb_top_pane_g

0xc25d,	// (0x0003b543) fep_vkb_top_text_pane_ParamLimits

0xc25d,	// (0x0003b543) fep_vkb_top_text_pane

0xc26e,	// (0x0003b554) fep_vkb_side_pane_g1_ParamLimits

0xc26e,	// (0x0003b554) fep_vkb_side_pane_g1

0xc2b7,	// (0x0003b59d) grid_vkb_side_pane_ParamLimits

0xc2b7,	// (0x0003b59d) grid_vkb_side_pane

0x7b1f,	// (0x00036e05) bg_popup_fep_shadow_pane_g2

0x7b28,	// (0x00036e0e) bg_popup_fep_shadow_pane_g3

0x7b30,	// (0x00036e16) bg_popup_fep_shadow_pane_g4

0x7b39,	// (0x00036e1f) bg_popup_fep_shadow_pane_g5

0x7b43,	// (0x00036e29) bg_popup_fep_shadow_pane_g6

0x7b4b,	// (0x00036e31) bg_popup_fep_shadow_pane_g7

0x2945,	// (0x00031c2b) bg_popup_fep_shadow_pane_g8

0xc316,	// (0x0003b5fc) grid_vkb_keypad_number_pane_ParamLimits

0xc316,	// (0x0003b5fc) grid_vkb_keypad_number_pane

0xc32a,	// (0x0003b610) grid_vkb_keypad_pane_ParamLimits

0xc32a,	// (0x0003b610) grid_vkb_keypad_pane

0xc350,	// (0x0003b636) fep_vkb_bottom_pane_g1_ParamLimits

0xc350,	// (0x0003b636) fep_vkb_bottom_pane_g1

0xc379,	// (0x0003b65f) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc379,	// (0x0003b65f) grid_vkb_keypad_bottom_left_pane

0xc38e,	// (0x0003b674) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc38e,	// (0x0003b674) grid_vkb_keypad_bottom_right_pane

0xc3a3,	// (0x0003b689) fep_vkb_top_text_pane_g1

0xc3be,	// (0x0003b6a4) fep_vkb_top_text_pane_t1

0xc3d3,	// (0x0003b6b9) cell_vkb_side_pane_ParamLimits

0xc3d3,	// (0x0003b6b9) cell_vkb_side_pane

0xbfd4,	// (0x0003b2ba) cell_vkb_side_pane_g1

0xc412,	// (0x0003b6f8) cell_vkb_keypad_pane_ParamLimits

0xc412,	// (0x0003b6f8) cell_vkb_keypad_pane

0xc49f,	// (0x0003b785) cell_vkb_keypad_pane_g1

0x0008,

0xfb2d,	// (0x0003ee13) bg_popup_fep_shadow_pane_g

0x7b5d,	// (0x00036e43) cell_hwr_side_pane_g1

0x7b5d,	// (0x00036e43) cell_hwr_side_pane_g2

0xc4a9,	// (0x0003b78f) cell_vkb_keypad_pane_t1

0xc4b7,	// (0x0003b79d) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4b7,	// (0x0003b79d) cell_vkb_keypad_bottom_left_pane

0xc4d4,	// (0x0003b7ba) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc4d4,	// (0x0003b7ba) cell_vkb_keypad_bottom_right_pane

0xbfd4,	// (0x0003b2ba) cell_vkb_keypad_bottom_left_pane_g1

0xbfd4,	// (0x0003b2ba) cell_vkb_keypad_bottom_right_pane_g1

0xc50d,	// (0x0003b7f3) cell_vkb_keypad_number_pane_ParamLimits

0xc50d,	// (0x0003b7f3) cell_vkb_keypad_number_pane

0xc52c,	// (0x0003b812) cell_vkb_keypad_number_pane_g1

0xc536,	// (0x0003b81c) cell_vkb_keypad_number_pane_g2

0xc53f,	// (0x0003b825) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1f,	// (0x0003ee05) cell_vkb_keypad_number_pane_g

0xc4a9,	// (0x0003b78f) cell_vkb_keypad_number_pane_t1

0xc569,	// (0x0003b84f) fep_vkb_candidate_pane_g1

0x0001,

0xfb40,	// (0x0003ee26) cell_hwr_side_pane_g

0xc582,	// (0x0003b868) cell_hwr_side_pane_t1

0x7b67,	// (0x00036e4d) cell_hwr_side_pane_t1_copy1

0x7b75,	// (0x00036e5b) cell_hwr_candidate_pane_g1

0x7ba4,	// (0x00036e8a) cell_hwr_candidate_pane_t1

0xbfd4,	// (0x0003b2ba) cell_vkb_candidate_pane_g2

0xc5c6,	// (0x0003b8ac) cell_vkb_candidate_pane_t1

0x78fa,	// (0x00036be0) bg_popup_fep_shadow_pane_ParamLimits

0x78fa,	// (0x00036be0) bg_popup_fep_shadow_pane

0x79b1,	// (0x00036c97) bg_fep_hwr_top_pane_g4

0xc059,	// (0x0003b33f) bg_hwr_side_pane_g1_ParamLimits

0xc059,	// (0x0003b33f) bg_hwr_side_pane_g1

0x7a24,	// (0x00036d0a) cell_hwr_side_pane_ParamLimits

0x7a24,	// (0x00036d0a) cell_hwr_side_pane

0x7a61,	// (0x00036d47) fep_hwr_write_pane_g1_ParamLimits

0x7a61,	// (0x00036d47) fep_hwr_write_pane_g1

0x7a6e,	// (0x00036d54) fep_hwr_write_pane_g2_ParamLimits

0x7a6e,	// (0x00036d54) fep_hwr_write_pane_g2

0x7a7b,	// (0x00036d61) fep_hwr_write_pane_g3_ParamLimits

0x7a7b,	// (0x00036d61) fep_hwr_write_pane_g3

0x7a89,	// (0x00036d6f) fep_hwr_write_pane_g4_ParamLimits

0x7a89,	// (0x00036d6f) fep_hwr_write_pane_g4

0x0005,

0xfaec,	// (0x0003edd2) fep_hwr_write_pane_g_ParamLimits

0xfaec,	// (0x0003edd2) fep_hwr_write_pane_g

0x79b1,	// (0x00036c97) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x79b1,	// (0x00036c97) bg_fep_hwr_candidate_pane_g2

0x7a9e,	// (0x00036d84) cell_hwr_candidate_pane_ParamLimits

0x7a9e,	// (0x00036d84) cell_hwr_candidate_pane

0x7af0,	// (0x00036dd6) fep_hwr_candidate_pane_g1_ParamLimits

0xc0b9,	// (0x0003b39f) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc0b9,	// (0x0003b39f) bg_popup_fep_shadow_pane_cp2

0xc24f,	// (0x0003b535) fep_vkb_top_pane_g4_ParamLimits

0xc24f,	// (0x0003b535) fep_vkb_top_pane_g4

0xc295,	// (0x0003b57b) fep_vkb_side_pane_g2_ParamLimits

0xc295,	// (0x0003b57b) fep_vkb_side_pane_g2

0x5ec3,	// (0x000351a9) list_setting_pane_t4_ParamLimits

0x5ec3,	// (0x000351a9) list_setting_pane_t4

0x5f57,	// (0x0003523d) list_setting_number_pane_t5_ParamLimits

0x5f57,	// (0x0003523d) list_setting_number_pane_t5

0x8b85,	// (0x00037e6b) list_double_heading_pane_cp2_ParamLimits

0x8b85,	// (0x00037e6b) list_double_heading_pane_cp2

0xc5d4,	// (0x0003b8ba) list_double_heading_pane_g1_cp2_ParamLimits

0xc5d4,	// (0x0003b8ba) list_double_heading_pane_g1_cp2

0xc5e0,	// (0x0003b8c6) list_double_heading_pane_g2_cp2_ParamLimits

0xc5e0,	// (0x0003b8c6) list_double_heading_pane_g2_cp2

0xc5f4,	// (0x0003b8da) list_double_heading_pane_t1_cp2_ParamLimits

0xc5f4,	// (0x0003b8da) list_double_heading_pane_t1_cp2

0xc60a,	// (0x0003b8f0) list_double_heading_pane_t2_cp2_ParamLimits

0xc60a,	// (0x0003b8f0) list_double_heading_pane_t2_cp2

0x221b,	// (0x00031501) aid_value_unit2

0x567b,	// (0x00034961) popup_preview_fixed_window

0x23c6,	// (0x000316ac) bg_popup_preview_window_pane_cp02

0xc61c,	// (0x0003b902) list_preview_fixed_pane

0xc662,	// (0x0003b948) list_empty_pane_fp_ParamLimits

0xc662,	// (0x0003b948) list_empty_pane_fp

0xc662,	// (0x0003b948) list_single_cale_day_pane_fp_ParamLimits

0xc662,	// (0x0003b948) list_single_cale_day_pane_fp

0xc662,	// (0x0003b948) list_single_graphic_heading_pane_fp_ParamLimits

0xc662,	// (0x0003b948) list_single_graphic_heading_pane_fp

0xc662,	// (0x0003b948) list_single_graphic_pane_fp_ParamLimits

0xc662,	// (0x0003b948) list_single_graphic_pane_fp

0xc662,	// (0x0003b948) list_single_heading_pane_fp_ParamLimits

0xc662,	// (0x0003b948) list_single_heading_pane_fp

0xc662,	// (0x0003b948) list_single_pane_fp_ParamLimits

0xc662,	// (0x0003b948) list_single_pane_fp

0xc67b,	// (0x0003b961) list_single_pane_fp_g1_ParamLimits

0xc67b,	// (0x0003b961) list_single_pane_fp_g1

0x42b0,	// (0x00033596) list_single_pane_fp_g2_ParamLimits

0x42b0,	// (0x00033596) list_single_pane_fp_g2

0x450b,	// (0x000337f1) list_single_pane_fp_g3_ParamLimits

0x450b,	// (0x000337f1) list_single_pane_fp_g3

0xc687,	// (0x0003b96d) list_single_pane_fp_g4_ParamLimits

0xc687,	// (0x0003b96d) list_single_pane_fp_g4

0x0003,

0xfb53,	// (0x0003ee39) list_single_pane_fp_g_ParamLimits

0xfb53,	// (0x0003ee39) list_single_pane_fp_g

0x451f,	// (0x00033805) list_single_pane_fp_t1_ParamLimits

0x451f,	// (0x00033805) list_single_pane_fp_t1

0x4536,	// (0x0003381c) list_single_graphic_pane_fp_g1_ParamLimits

0x4536,	// (0x0003381c) list_single_graphic_pane_fp_g1

0xc67b,	// (0x0003b961) list_single_graphic_pane_fp_g2_ParamLimits

0xc67b,	// (0x0003b961) list_single_graphic_pane_fp_g2

0x42b0,	// (0x00033596) list_single_graphic_pane_fp_g3_ParamLimits

0x42b0,	// (0x00033596) list_single_graphic_pane_fp_g3

0x450b,	// (0x000337f1) list_single_graphic_pane_fp_g4_ParamLimits

0x450b,	// (0x000337f1) list_single_graphic_pane_fp_g4

0xc687,	// (0x0003b96d) list_single_graphic_pane_fp_g5_ParamLimits

0xc687,	// (0x0003b96d) list_single_graphic_pane_fp_g5

0x0004,

0xfb5c,	// (0x0003ee42) list_single_graphic_pane_fp_g_ParamLimits

0xfb5c,	// (0x0003ee42) list_single_graphic_pane_fp_g

0x4542,	// (0x00033828) list_single_graphic_pane_fp_t1_ParamLimits

0x4542,	// (0x00033828) list_single_graphic_pane_fp_t1

0x4536,	// (0x0003381c) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4536,	// (0x0003381c) list_single_graphic_heading_pane_fp_g1

0xc67b,	// (0x0003b961) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc67b,	// (0x0003b961) list_single_graphic_heading_pane_fp_g2

0x42b0,	// (0x00033596) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x42b0,	// (0x00033596) list_single_graphic_heading_pane_fp_g3

0x450b,	// (0x000337f1) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x450b,	// (0x000337f1) list_single_graphic_heading_pane_fp_g4

0xc687,	// (0x0003b96d) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc687,	// (0x0003b96d) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb5c,	// (0x0003ee42) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb5c,	// (0x0003ee42) list_single_graphic_heading_pane_fp_g

0x4558,	// (0x0003383e) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4558,	// (0x0003383e) list_single_graphic_heading_pane_fp_t1

0x456e,	// (0x00033854) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x456e,	// (0x00033854) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb67,	// (0x0003ee4d) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb67,	// (0x0003ee4d) list_single_graphic_heading_pane_fp_t

0x4580,	// (0x00033866) list_single_cale_day_pane_fp_g1_ParamLimits

0x4580,	// (0x00033866) list_single_cale_day_pane_fp_g1

0xc693,	// (0x0003b979) list_single_cale_day_pane_fp_g2_ParamLimits

0xc693,	// (0x0003b979) list_single_cale_day_pane_fp_g2

0x45b8,	// (0x0003389e) list_single_cale_day_pane_fp_g3_ParamLimits

0x45b8,	// (0x0003389e) list_single_cale_day_pane_fp_g3

0x45e0,	// (0x000338c6) list_single_cale_day_pane_fp_g4_ParamLimits

0x45e0,	// (0x000338c6) list_single_cale_day_pane_fp_g4

0x4604,	// (0x000338ea) list_single_cale_day_pane_fp_g5_ParamLimits

0x4604,	// (0x000338ea) list_single_cale_day_pane_fp_g5

0x0004,

0xfb6c,	// (0x0003ee52) list_single_cale_day_pane_fp_g_ParamLimits

0xfb6c,	// (0x0003ee52) list_single_cale_day_pane_fp_g

0x4628,	// (0x0003390e) list_single_cale_day_pane_fp_t1_ParamLimits

0x4628,	// (0x0003390e) list_single_cale_day_pane_fp_t1

0x464e,	// (0x00033934) list_single_cale_day_pane_fp_t2_ParamLimits

0x464e,	// (0x00033934) list_single_cale_day_pane_fp_t2

0x4667,	// (0x0003394d) list_single_cale_day_pane_fp_t3_ParamLimits

0x4667,	// (0x0003394d) list_single_cale_day_pane_fp_t3

0x0002,

0xfb77,	// (0x0003ee5d) list_single_cale_day_pane_fp_t_ParamLimits

0xfb77,	// (0x0003ee5d) list_single_cale_day_pane_fp_t

0xc67b,	// (0x0003b961) list_empty_pane_fp_g1_ParamLimits

0xc67b,	// (0x0003b961) list_empty_pane_fp_g1

0x4680,	// (0x00033966) list_empty_pane_fp_t1

0x468e,	// (0x00033974) list_empty_pane_fp_t2

0x0001,

0xfb7e,	// (0x0003ee64) list_empty_pane_fp_t

0xc67b,	// (0x0003b961) list_single_heading_pane_fp_g1_ParamLimits

0xc67b,	// (0x0003b961) list_single_heading_pane_fp_g1

0x42b0,	// (0x00033596) list_single_heading_pane_fp_g2_ParamLimits

0x42b0,	// (0x00033596) list_single_heading_pane_fp_g2

0x450b,	// (0x000337f1) list_single_heading_pane_fp_g3_ParamLimits

0x450b,	// (0x000337f1) list_single_heading_pane_fp_g3

0x0002,

0xfb83,	// (0x0003ee69) list_single_heading_pane_fp_g_ParamLimits

0xfb83,	// (0x0003ee69) list_single_heading_pane_fp_g

0x469c,	// (0x00033982) list_single_heading_pane_fp_t1_ParamLimits

0x469c,	// (0x00033982) list_single_heading_pane_fp_t1

0x46ae,	// (0x00033994) list_single_heading_pane_fp_t2_ParamLimits

0x46ae,	// (0x00033994) list_single_heading_pane_fp_t2

0x0001,

0xfb8a,	// (0x0003ee70) list_single_heading_pane_fp_t_ParamLimits

0xfb8a,	// (0x0003ee70) list_single_heading_pane_fp_t

0x6273,	// (0x00035559) aid_size_cell_fast

0x23a9,	// (0x0003168f) soft_indicator_pane_cp1_t1

0x62b0,	// (0x00035596) cell_app_pane_cp2_ParamLimits

0x62b0,	// (0x00035596) cell_app_pane_cp2

0x791c,	// (0x00036c02) fep_hwr_candidate_drop_down_list_pane

0x7b0a,	// (0x00036df0) fep_hwr_candidate_pane_g3_ParamLimits

0x7b0a,	// (0x00036df0) fep_hwr_candidate_pane_g3

0x36f8,	// (0x000329de) fep_hwr_candidate_pane_g4_ParamLimits

0x36f8,	// (0x000329de) fep_hwr_candidate_pane_g4

0x0002,

0xfaf9,	// (0x0003eddf) fep_hwr_candidate_pane_g_ParamLimits

0xfaf9,	// (0x0003eddf) fep_hwr_candidate_pane_g

0xc149,	// (0x0003b42f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc149,	// (0x0003b42f) fep_vkb_candidate_drop_down_list_pane

0xc571,	// (0x0003b857) fep_vkb_candidate_pane_g3

0xc579,	// (0x0003b85f) fep_vkb_candidate_pane_g4

0x0002,

0xfb26,	// (0x0003ee0c) fep_vkb_candidate_pane_g

0x7b75,	// (0x00036e5b) cell_hwr_candidate_pane_g1_ParamLimits

0x7b83,	// (0x00036e69) cell_hwr_candidate_pane_g3_ParamLimits

0x7b83,	// (0x00036e69) cell_hwr_candidate_pane_g3

0xd5cf,	// (0x0003c8b5) cell_hwr_candidate_pane_g4_ParamLimits

0xd5cf,	// (0x0003c8b5) cell_hwr_candidate_pane_g4

0x0002,

0xfb45,	// (0x0003ee2b) cell_hwr_candidate_pane_g_ParamLimits

0xfb45,	// (0x0003ee2b) cell_hwr_candidate_pane_g

0xc590,	// (0x0003b876) cell_vkb_candidate_pane_g3_ParamLimits

0xc590,	// (0x0003b876) cell_vkb_candidate_pane_g3

0xc5ab,	// (0x0003b891) cell_vkb_candidate_pane_g4_ParamLimits

0xc5ab,	// (0x0003b891) cell_vkb_candidate_pane_g4

0xc69f,	// (0x0003b985) cell_app_pane_cp2_g1_ParamLimits

0xc69f,	// (0x0003b985) cell_app_pane_cp2_g1

0xc6bd,	// (0x0003b9a3) cell_app_pane_cp2_g2_ParamLimits

0xc6bd,	// (0x0003b9a3) cell_app_pane_cp2_g2

0x0001,

0xfb8f,	// (0x0003ee75) cell_app_pane_cp2_g_ParamLimits

0xfb8f,	// (0x0003ee75) cell_app_pane_cp2_g

0xc6c9,	// (0x0003b9af) cell_app_pane_cp2_t1_ParamLimits

0xc6c9,	// (0x0003b9af) cell_app_pane_cp2_t1

0x28d5,	// (0x00031bbb) grid_highlight_pane_cp1_ParamLimits

0x28d5,	// (0x00031bbb) grid_highlight_pane_cp1

0x7bc2,	// (0x00036ea8) cell_hwr_candidate_pane_cp1_ParamLimits

0x7bc2,	// (0x00036ea8) cell_hwr_candidate_pane_cp1

0x7b75,	// (0x00036e5b) fep_hwr_candidate_drop_down_list_pane_g1

0x7be6,	// (0x00036ecc) fep_hwr_candidate_drop_down_list_pane_g2

0x7bf3,	// (0x00036ed9) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb94,	// (0x0003ee7a) fep_hwr_candidate_drop_down_list_pane_g

0x7c00,	// (0x00036ee6) fep_hwr_candidate_drop_down_list_scroll_pane

0x7c09,	// (0x00036eef) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7c09,	// (0x00036eef) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7c16,	// (0x00036efc) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7c16,	// (0x00036efc) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7c23,	// (0x00036f09) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7c23,	// (0x00036f09) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7c30,	// (0x00036f16) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7c30,	// (0x00036f16) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7c4b,	// (0x00036f31) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7c4b,	// (0x00036f31) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7c66,	// (0x00036f4c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7c66,	// (0x00036f4c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7c81,	// (0x00036f67) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7c81,	// (0x00036f67) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7c9c,	// (0x00036f82) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7c9c,	// (0x00036f82) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9b,	// (0x0003ee81) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9b,	// (0x0003ee81) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc6db,	// (0x0003b9c1) cell_vkb_candidate_pane_cp1_ParamLimits

0xc6db,	// (0x0003b9c1) cell_vkb_candidate_pane_cp1

0xc24f,	// (0x0003b535) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc24f,	// (0x0003b535) fep_vkb_candidate_drop_down_list_pane_g1

0xc701,	// (0x0003b9e7) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc701,	// (0x0003b9e7) fep_vkb_candidate_drop_down_list_pane_g2

0xc70e,	// (0x0003b9f4) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc70e,	// (0x0003b9f4) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbac,	// (0x0003ee92) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbac,	// (0x0003ee92) fep_vkb_candidate_drop_down_list_pane_g

0xc71b,	// (0x0003ba01) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc71b,	// (0x0003ba01) fep_vkb_candidate_drop_down_list_scroll_pane

0xc728,	// (0x0003ba0e) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc728,	// (0x0003ba0e) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc735,	// (0x0003ba1b) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc735,	// (0x0003ba1b) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc741,	// (0x0003ba27) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc741,	// (0x0003ba27) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc74d,	// (0x0003ba33) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc74d,	// (0x0003ba33) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc76e,	// (0x0003ba54) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc76e,	// (0x0003ba54) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc78f,	// (0x0003ba75) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc78f,	// (0x0003ba75) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7b0,	// (0x0003ba96) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7b0,	// (0x0003ba96) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7d1,	// (0x0003bab7) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7d1,	// (0x0003bab7) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb3,	// (0x0003ee99) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb3,	// (0x0003ee99) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x579b,	// (0x00034a81) title_pane_g1_ParamLimits

0x57a8,	// (0x00034a8e) title_pane_g2_ParamLimits

0xf529,	// (0x0003e80f) title_pane_g_ParamLimits

0x8b2e,	// (0x00037e14) aid_call2_pane

0x8b36,	// (0x00037e1c) aid_call_pane

0x8b3e,	// (0x00037e24) popup_clock_analogue_window_g1

0x8b3e,	// (0x00037e24) popup_clock_analogue_window_g2

0x6862,	// (0x00035b48) popup_clock_analogue_window_g3

0x686b,	// (0x00035b51) popup_clock_analogue_window_g4

0x222d,	// (0x00031513) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x0003e9b9) popup_clock_analogue_window_g

0x6873,	// (0x00035b59) popup_clock_analogue_window_t1

0x6881,	// (0x00035b67) clock_digital_number_pane_ParamLimits

0x6881,	// (0x00035b67) clock_digital_number_pane

0x688d,	// (0x00035b73) clock_digital_number_pane_cp02_ParamLimits

0x688d,	// (0x00035b73) clock_digital_number_pane_cp02

0x6899,	// (0x00035b7f) clock_digital_number_pane_cp03_ParamLimits

0x6899,	// (0x00035b7f) clock_digital_number_pane_cp03

0x68a5,	// (0x00035b8b) clock_digital_number_pane_cp04_ParamLimits

0x68a5,	// (0x00035b8b) clock_digital_number_pane_cp04

0x68b1,	// (0x00035b97) clock_digital_separator_pane_ParamLimits

0x68b1,	// (0x00035b97) clock_digital_separator_pane

0x68bd,	// (0x00035ba3) popup_clock_digital_window_t1_ParamLimits

0x68bd,	// (0x00035ba3) popup_clock_digital_window_t1

0x222d,	// (0x00031513) clock_digital_number_pane_g1

0x222d,	// (0x00031513) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x0003e9c4) clock_digital_number_pane_g

0x222d,	// (0x00031513) clock_digital_separator_pane_g1

0x222d,	// (0x00031513) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x0003e9c4) clock_digital_separator_pane_g

0x94b9,	// (0x0003879f) aid_fill_nsta_ParamLimits

0x9605,	// (0x000388eb) indicator_nsta_pane_ParamLimits

0x9796,	// (0x00038a7c) popup_clock_analogue_window

0x9796,	// (0x00038a7c) popup_clock_digital_window

0xb9f4,	// (0x0003acda) grid_indicator_nsta_pane_ParamLimits

0xba1d,	// (0x0003ad03) clock_nsta_pane_t2

0x0001,

0xfa79,	// (0x0003ed5f) clock_nsta_pane_t

0x6672,	// (0x00035958) aid_size_max_handle

0x667c,	// (0x00035962) aid_size_min_handle

0x9156,	// (0x0003843c) editor_scroll_pane

0xc7ec,	// (0x0003bad2) ex_editor_pane

0x61e0,	// (0x000354c6) scroll_pane_cp13

0x2874,	// (0x00031b5a) scroll_pane_cp14

0x8b6d,	// (0x00037e53) scroll_pane_cp36

0x8b9b,	// (0x00037e81) list_single_graphic_hl_pane_cp2_ParamLimits

0x8b9b,	// (0x00037e81) list_single_graphic_hl_pane_cp2

0xaf79,	// (0x0003a25f) list_single_graphic_hl_pane_ParamLimits

0xaf79,	// (0x0003a25f) list_single_graphic_hl_pane

0x46c4,	// (0x000339aa) aid_size_min_hl_cp1

0xc7f4,	// (0x0003bada) list_highlight_pane_cp34_ParamLimits

0xc7f4,	// (0x0003bada) list_highlight_pane_cp34

0xc805,	// (0x0003baeb) list_single_graphic_hl_pane_g1_ParamLimits

0xc805,	// (0x0003baeb) list_single_graphic_hl_pane_g1

0x7cb7,	// (0x00036f9d) list_single_graphic_hl_pane_g2_ParamLimits

0x7cb7,	// (0x00036f9d) list_single_graphic_hl_pane_g2

0x7cb7,	// (0x00036f9d) list_single_graphic_hl_pane_g3_ParamLimits

0x7cb7,	// (0x00036f9d) list_single_graphic_hl_pane_g3

0x3eb4,	// (0x0003319a) list_single_graphic_hl_pane_g4_ParamLimits

0x3eb4,	// (0x0003319a) list_single_graphic_hl_pane_g4

0x7cc3,	// (0x00036fa9) list_single_graphic_hl_pane_g5_ParamLimits

0x7cc3,	// (0x00036fa9) list_single_graphic_hl_pane_g5

0x0004,

0xfbc4,	// (0x0003eeaa) list_single_graphic_hl_pane_g_ParamLimits

0xfbc4,	// (0x0003eeaa) list_single_graphic_hl_pane_g

0x7cd7,	// (0x00036fbd) list_single_graphic_hl_pane_t1_ParamLimits

0x7cd7,	// (0x00036fbd) list_single_graphic_hl_pane_t1

0xc812,	// (0x0003baf8) aid_size_min_hl_cp2

0xc81b,	// (0x0003bb01) list_highlight_pane_cp34_cp2_ParamLimits

0xc81b,	// (0x0003bb01) list_highlight_pane_cp34_cp2

0xc805,	// (0x0003baeb) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc805,	// (0x0003baeb) list_single_graphic_hl_pane_g1_cp2

0xc828,	// (0x0003bb0e) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc828,	// (0x0003bb0e) list_single_graphic_hl_pane_g2_cp2

0xc834,	// (0x0003bb1a) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc834,	// (0x0003bb1a) list_single_graphic_hl_pane_g3_cp2

0xbcda,	// (0x0003afc0) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xbcda,	// (0x0003afc0) list_single_graphic_hl_pane_g4_cp2

0xc842,	// (0x0003bb28) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc842,	// (0x0003bb28) list_single_graphic_hl_pane_g5_cp2

0x6c03,	// (0x00035ee9) control_pane_g4_ParamLimits

0x6c03,	// (0x00035ee9) control_pane_g4

0x947d,	// (0x00038763) bg_popup_sub_pane_cp10_ParamLimits

0xbfde,	// (0x0003b2c4) list_choice_list_pane_ParamLimits

0xbfed,	// (0x0003b2d3) scroll_pane_cp23

0x23c6,	// (0x000316ac) bg_popup_preview_window_pane_cp02_ParamLimits

0xc61c,	// (0x0003b902) list_preview_fixed_pane_ParamLimits

0xc632,	// (0x0003b918) list_preview_fixed_pane_cp_ParamLimits

0xc632,	// (0x0003b918) list_preview_fixed_pane_cp

0xc63e,	// (0x0003b924) popup_preview_fixed_window_g1_ParamLimits

0xc63e,	// (0x0003b924) popup_preview_fixed_window_g1

0xc64a,	// (0x0003b930) popup_preview_fixed_window_g2_ParamLimits

0xc64a,	// (0x0003b930) popup_preview_fixed_window_g2

0x0002,

0xfb4c,	// (0x0003ee32) popup_preview_fixed_window_g_ParamLimits

0xfb4c,	// (0x0003ee32) popup_preview_fixed_window_g

0x6511,	// (0x000357f7) aid_navi_side_left_pane_ParamLimits

0x6526,	// (0x0003580c) aid_navi_side_right_pane_ParamLimits

0x653e,	// (0x00035824) navi_icon_pane_stacon_ParamLimits

0x6552,	// (0x00035838) navi_navi_pane_stacon_ParamLimits

0x653e,	// (0x00035824) navi_text_pane_stacon_ParamLimits

0x5532,	// (0x00034818) main_text_info_pane

0xc86c,	// (0x0003bb52) listscroll_text_info_pane

0xc874,	// (0x0003bb5a) list_text_info_pane_ParamLimits

0xc874,	// (0x0003bb5a) list_text_info_pane

0xc883,	// (0x0003bb69) scroll_pane_cp24_ParamLimits

0xc883,	// (0x0003bb69) scroll_pane_cp24

0xc8a1,	// (0x0003bb87) list_text_info_pane_t1_ParamLimits

0xc8a1,	// (0x0003bb87) list_text_info_pane_t1

0x6d7d,	// (0x00036063) popup_fast_swap2_window_ParamLimits

0x6d7d,	// (0x00036063) popup_fast_swap2_window

0xc8c6,	// (0x0003bbac) aid_size_cell_fast2

0x2223,	// (0x00031509) bg_popup_window_pane_cp17

0x9de9,	// (0x000390cf) heading_pane_cp2

0x9df1,	// (0x000390d7) listscroll_fast2_pane

0xc8d0,	// (0x0003bbb6) grid_fast2_pane

0xc8da,	// (0x0003bbc0) listscroll_fast2_pane_g1

0xc8e4,	// (0x0003bbca) listscroll_fast2_pane_g2

0x0001,

0xfbcf,	// (0x0003eeb5) listscroll_fast2_pane_g

0x61e0,	// (0x000354c6) scroll_pane_cp26

0xc8ee,	// (0x0003bbd4) cell_fast2_pane_ParamLimits

0xc8ee,	// (0x0003bbd4) cell_fast2_pane

0xc905,	// (0x0003bbeb) cell_fast2_pane_g1

0xc90e,	// (0x0003bbf4) cell_fast2_pane_g2

0xc917,	// (0x0003bbfd) cell_fast2_pane_g3

0x0002,

0xfbd4,	// (0x0003eeba) cell_fast2_pane_g

0x263b,	// (0x00031921) grid_highlight_pane_cp9

0x6d3f,	// (0x00036025) main_eswt_pane_ParamLimits

0x6d3f,	// (0x00036025) main_eswt_pane

0xc898,	// (0x0003bb7e) list_single_text_info_pane

0xc91f,	// (0x0003bc05) eswt_ctrl_button_pane

0xc91f,	// (0x0003bc05) eswt_ctrl_canvas_pane

0xc927,	// (0x0003bc0d) eswt_ctrl_combo_pane

0xc91f,	// (0x0003bc05) eswt_ctrl_default_pane

0xc91f,	// (0x0003bc05) eswt_ctrl_label_pane

0xc92f,	// (0x0003bc15) eswt_ctrl_wait_pane

0xc937,	// (0x0003bc1d) eswt_shell_pane

0x2223,	// (0x00031509) listscroll_eswt_app_pane

0xc957,	// (0x0003bc3d) popup_eswt_tasktip_window_ParamLimits

0xc957,	// (0x0003bc3d) popup_eswt_tasktip_window

0x9a27,	// (0x00038d0d) bg_popup_window_pane_cp18

0xc968,	// (0x0003bc4e) eswt_control_pane_g1_ParamLimits

0xc968,	// (0x0003bc4e) eswt_control_pane_g1

0xc975,	// (0x0003bc5b) eswt_control_pane_g2_ParamLimits

0xc975,	// (0x0003bc5b) eswt_control_pane_g2

0xc982,	// (0x0003bc68) eswt_control_pane_g3_ParamLimits

0xc982,	// (0x0003bc68) eswt_control_pane_g3

0xc98f,	// (0x0003bc75) eswt_control_pane_g4_ParamLimits

0xc98f,	// (0x0003bc75) eswt_control_pane_g4

0x0003,

0xfbdb,	// (0x0003eec1) eswt_control_pane_g_ParamLimits

0xfbdb,	// (0x0003eec1) eswt_control_pane_g

0x28d5,	// (0x00031bbb) bg_button_pane_ParamLimits

0x28d5,	// (0x00031bbb) bg_button_pane

0x2650,	// (0x00031936) common_borders_pane_copy2_ParamLimits

0x2650,	// (0x00031936) common_borders_pane_copy2

0xc99c,	// (0x0003bc82) control_button_pane_g1_ParamLimits

0xc99c,	// (0x0003bc82) control_button_pane_g1

0xc9a8,	// (0x0003bc8e) control_button_pane_g2_ParamLimits

0xc9a8,	// (0x0003bc8e) control_button_pane_g2

0xc9b4,	// (0x0003bc9a) control_button_pane_g3_ParamLimits

0xc9b4,	// (0x0003bc9a) control_button_pane_g3

0x0002,

0xfbe4,	// (0x0003eeca) control_button_pane_g_ParamLimits

0xfbe4,	// (0x0003eeca) control_button_pane_g

0xc9c8,	// (0x0003bcae) control_button_pane_t1

0xc9d6,	// (0x0003bcbc) control_button_pane_t2

0x0001,

0xfbeb,	// (0x0003eed1) control_button_pane_t

0x99b3,	// (0x00038c99) bg_button_pane_g1

0x99c3,	// (0x00038ca9) bg_button_pane_g2

0x99bb,	// (0x00038ca1) bg_button_pane_g3

0x99d3,	// (0x00038cb9) bg_button_pane_g4

0x99cb,	// (0x00038cb1) bg_button_pane_g5

0x99db,	// (0x00038cc1) bg_button_pane_g6

0x99e3,	// (0x00038cc9) bg_button_pane_g7

0x99f3,	// (0x00038cd9) bg_button_pane_g8

0x99eb,	// (0x00038cd1) bg_button_pane_g9

0x0008,

0xf841,	// (0x0003eb27) bg_button_pane_g

0xbf99,	// (0x0003b27f) common_borders_pane_ParamLimits

0xbf99,	// (0x0003b27f) common_borders_pane

0xc968,	// (0x0003bc4e) eswt_control_pane_g1_copy1_ParamLimits

0xc968,	// (0x0003bc4e) eswt_control_pane_g1_copy1

0xc975,	// (0x0003bc5b) eswt_control_pane_g2_copy1_ParamLimits

0xc975,	// (0x0003bc5b) eswt_control_pane_g2_copy1

0xc982,	// (0x0003bc68) eswt_control_pane_g3_copy1_ParamLimits

0xc982,	// (0x0003bc68) eswt_control_pane_g3_copy1

0xc98f,	// (0x0003bc75) eswt_control_pane_g4_copy1_ParamLimits

0xc98f,	// (0x0003bc75) eswt_control_pane_g4_copy1

0xbfd4,	// (0x0003b2ba) bg_eswt_ctrl_canvas_pane_g1

0xbf99,	// (0x0003b27f) common_borders_pane_cp2_ParamLimits

0xbf99,	// (0x0003b27f) common_borders_pane_cp2

0xbf99,	// (0x0003b27f) common_borders_pane_cp3_ParamLimits

0xbf99,	// (0x0003b27f) common_borders_pane_cp3

0xc9e4,	// (0x0003bcca) separator_horizontal_pane

0xc9ec,	// (0x0003bcd2) separator_vertical_pane

0xc968,	// (0x0003bc4e) eswt_control_pane_g1_copy2_ParamLimits

0xc968,	// (0x0003bc4e) eswt_control_pane_g1_copy2

0xc975,	// (0x0003bc5b) eswt_control_pane_g2_copy2_ParamLimits

0xc975,	// (0x0003bc5b) eswt_control_pane_g2_copy2

0xc982,	// (0x0003bc68) eswt_control_pane_g3_copy2_ParamLimits

0xc982,	// (0x0003bc68) eswt_control_pane_g3_copy2

0xc98f,	// (0x0003bc75) eswt_control_pane_g4_copy2_ParamLimits

0xc98f,	// (0x0003bc75) eswt_control_pane_g4_copy2

0x2223,	// (0x00031509) common_borders_pane_cp4

0xc9f5,	// (0x0003bcdb) separator_horizontal_pane_g1

0xc9fe,	// (0x0003bce4) separator_horizontal_pane_g2

0xca07,	// (0x0003bced) separator_horizontal_pane_g3

0x0002,

0xfbf0,	// (0x0003eed6) separator_horizontal_pane_g

0xc968,	// (0x0003bc4e) eswt_control_pane_g1_copy3_ParamLimits

0xc968,	// (0x0003bc4e) eswt_control_pane_g1_copy3

0xc975,	// (0x0003bc5b) eswt_control_pane_g2_copy3_ParamLimits

0xc975,	// (0x0003bc5b) eswt_control_pane_g2_copy3

0xc982,	// (0x0003bc68) eswt_control_pane_g3_copy3_ParamLimits

0xc982,	// (0x0003bc68) eswt_control_pane_g3_copy3

0xc98f,	// (0x0003bc75) eswt_control_pane_g4_copy3_ParamLimits

0xc98f,	// (0x0003bc75) eswt_control_pane_g4_copy3

0x2223,	// (0x00031509) common_borders_pane_cp5

0xca10,	// (0x0003bcf6) separator_vertical_pane_g1

0xca19,	// (0x0003bcff) separator_vertical_pane_g2

0xca22,	// (0x0003bd08) separator_vertical_pane_g3

0x0002,

0xfbf7,	// (0x0003eedd) separator_vertical_pane_g

0xc968,	// (0x0003bc4e) eswt_control_pane_g1_copy4_ParamLimits

0xc968,	// (0x0003bc4e) eswt_control_pane_g1_copy4

0xc975,	// (0x0003bc5b) eswt_control_pane_g2_copy4_ParamLimits

0xc975,	// (0x0003bc5b) eswt_control_pane_g2_copy4

0xc982,	// (0x0003bc68) eswt_control_pane_g3_copy4_ParamLimits

0xc982,	// (0x0003bc68) eswt_control_pane_g3_copy4

0xc98f,	// (0x0003bc75) eswt_control_pane_g4_copy4_ParamLimits

0xc98f,	// (0x0003bc75) eswt_control_pane_g4_copy4

0xca2b,	// (0x0003bd11) eswt_ctrl_combo_button_pane

0xca33,	// (0x0003bd19) eswt_ctrl_input_pane

0xca3b,	// (0x0003bd21) popup_choice_list_window_cp70

0xca43,	// (0x0003bd29) eswt_ctrl_input_pane_t1

0x2223,	// (0x00031509) input_focus_pane_cp70

0xbf99,	// (0x0003b27f) bg_button_pane_cp70_ParamLimits

0xbf99,	// (0x0003b27f) bg_button_pane_cp70

0xca51,	// (0x0003bd37) eswt_ctrl_combo_button_pane_g1

0xca59,	// (0x0003bd3f) wait_bar_pane_cp70

0x9a27,	// (0x00038d0d) bg_popup_window_pane_cp70_ParamLimits

0x9a27,	// (0x00038d0d) bg_popup_window_pane_cp70

0xca61,	// (0x0003bd47) popup_eswt_tasktip_window_t1

0xca77,	// (0x0003bd5d) wait_bar_pane_cp71_ParamLimits

0xca77,	// (0x0003bd5d) wait_bar_pane_cp71

0xca83,	// (0x0003bd69) grid_eswt_app_pane

0x66cd,	// (0x000359b3) scroll_pane_cp70

0xca8c,	// (0x0003bd72) cell_eswt_app_pane_ParamLimits

0xca8c,	// (0x0003bd72) cell_eswt_app_pane

0xcabe,	// (0x0003bda4) cell_eswt_app_pane_g1_ParamLimits

0xcabe,	// (0x0003bda4) cell_eswt_app_pane_g1

0xcaed,	// (0x0003bdd3) cell_eswt_app_pane_g2_ParamLimits

0xcaed,	// (0x0003bdd3) cell_eswt_app_pane_g2

0x0001,

0xfbfe,	// (0x0003eee4) cell_eswt_app_pane_g_ParamLimits

0xfbfe,	// (0x0003eee4) cell_eswt_app_pane_g

0xcb16,	// (0x0003bdfc) cell_eswt_app_pane_t1_ParamLimits

0xcb16,	// (0x0003bdfc) cell_eswt_app_pane_t1

0xcb48,	// (0x0003be2e) grid_highlight_pane_cp70_ParamLimits

0xcb48,	// (0x0003be2e) grid_highlight_pane_cp70

0x9027,	// (0x0003830d) set_content_pane_g1

0x9404,	// (0x000386ea) status_small_volume_pane

0x7ced,	// (0x00036fd3) status_small_volume_pane_g1

0x7cf5,	// (0x00036fdb) volume_small2_pane

0x7cfe,	// (0x00036fe4) volume_small2_pane_g1

0x7d07,	// (0x00036fed) volume_small2_pane_g2

0x7d10,	// (0x00036ff6) volume_small2_pane_g3

0x7d19,	// (0x00036fff) volume_small2_pane_g4

0x7d22,	// (0x00037008) volume_small2_pane_g5

0x7d2b,	// (0x00037011) volume_small2_pane_g6

0x7d34,	// (0x0003701a) volume_small2_pane_g7

0x7d3d,	// (0x00037023) volume_small2_pane_g8

0x7d46,	// (0x0003702c) volume_small2_pane_g9

0x7d4f,	// (0x00037035) volume_small2_pane_g10

0x0009,

0xfc03,	// (0x0003eee9) volume_small2_pane_g

0xc3a3,	// (0x0003b689) fep_vkb_top_text_pane_g1_ParamLimits

0xc3be,	// (0x0003b6a4) fep_vkb_top_text_pane_t1_ParamLimits

0xc656,	// (0x0003b93c) popup_preview_fixed_window_g3_ParamLimits

0xc656,	// (0x0003b93c) popup_preview_fixed_window_g3

0x7290,	// (0x00036576) popup_toolbar_trans_pane

0xad7f,	// (0x0003a065) aid_height_set_list_ParamLimits

0xad90,	// (0x0003a076) aid_size_parent_ParamLimits

0x947d,	// (0x00038763) list_highlight_pane_cp2_ParamLimits

0x9027,	// (0x0003830d) set_content_pane_g1_ParamLimits

0x77cb,	// (0x00036ab1) list_single_image_pane_ParamLimits

0x77cb,	// (0x00036ab1) list_single_image_pane

0xcb54,	// (0x0003be3a) aid_size_cell_image_ParamLimits

0xcb54,	// (0x0003be3a) aid_size_cell_image

0xcb61,	// (0x0003be47) grid_single_image_pane_ParamLimits

0xcb61,	// (0x0003be47) grid_single_image_pane

0x28e3,	// (0x00031bc9) list_single_image_pane_g1_ParamLimits

0x28e3,	// (0x00031bc9) list_single_image_pane_g1

0x28ef,	// (0x00031bd5) list_single_image_pane_g2_ParamLimits

0x28ef,	// (0x00031bd5) list_single_image_pane_g2

0x0001,

0xfc18,	// (0x0003eefe) list_single_image_pane_g_ParamLimits

0xfc18,	// (0x0003eefe) list_single_image_pane_g

0xcb6f,	// (0x0003be55) list_single_image_pane_t1_ParamLimits

0xcb6f,	// (0x0003be55) list_single_image_pane_t1

0xcb85,	// (0x0003be6b) cell_image_list_pane_ParamLimits

0xcb85,	// (0x0003be6b) cell_image_list_pane

0xcb9d,	// (0x0003be83) cell_image_list_pane_g1

0xcba6,	// (0x0003be8c) cell_image_list_pane_g2

0x0001,

0xfc1d,	// (0x0003ef03) cell_image_list_pane_g

0xcbaf,	// (0x0003be95) aid_size_cell_tb_trans_pane

0x28d5,	// (0x00031bbb) bg_tb_trans_pane

0xcbc1,	// (0x0003bea7) grid_tb_trans_pane

0x99b3,	// (0x00038c99) bg_tb_trans_pane_g1

0x99c3,	// (0x00038ca9) bg_tb_trans_pane_g2

0x99bb,	// (0x00038ca1) bg_tb_trans_pane_g3

0x99d3,	// (0x00038cb9) bg_tb_trans_pane_g4

0x99cb,	// (0x00038cb1) bg_tb_trans_pane_g5

0x99f3,	// (0x00038cd9) bg_tb_trans_pane_g6

0x99eb,	// (0x00038cd1) bg_tb_trans_pane_g7

0x99db,	// (0x00038cc1) bg_tb_trans_pane_g8

0x99e3,	// (0x00038cc9) bg_tb_trans_pane_g9

0x0008,

0xfc22,	// (0x0003ef08) bg_tb_trans_pane_g

0xcbd5,	// (0x0003bebb) cell_toolbar_trans_pane_ParamLimits

0xcbd5,	// (0x0003bebb) cell_toolbar_trans_pane

0xbfd4,	// (0x0003b2ba) cell_toolbar_trans_pane_g1

0xbc00,	// (0x0003aee6) list_form2_midp_pane_t1

0xbc0e,	// (0x0003aef4) list_form2_midp_pane_t2

0x0001,

0xfabf,	// (0x0003eda5) list_form2_midp_pane_t

0xbc1c,	// (0x0003af02) scroll_pane_cp51_ParamLimits

0xbdef,	// (0x0003b0d5) form2_midp_wait_pane_g1

0xbdf8,	// (0x0003b0de) form2_midp_wait_pane_g2

0xbe01,	// (0x0003b0e7) form2_midp_wait_pane_g3

0x0002,

0xfad4,	// (0x0003edba) form2_midp_wait_pane_g

0x2293,	// (0x00031579) list_highlight_pane_cp21_ParamLimits

0xbe3a,	// (0x0003b120) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe49,	// (0x0003b12f) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x7781,	// (0x00036a67) list_single_2graphic_im_pane_ParamLimits

0x7781,	// (0x00036a67) list_single_2graphic_im_pane

0xcbfb,	// (0x0003bee1) list_single_2graphic_im_pane_g1_ParamLimits

0xcbfb,	// (0x0003bee1) list_single_2graphic_im_pane_g1

0xcc0c,	// (0x0003bef2) list_single_2graphic_im_pane_g2_ParamLimits

0xcc0c,	// (0x0003bef2) list_single_2graphic_im_pane_g2

0xcc18,	// (0x0003befe) list_single_2graphic_im_pane_g3_ParamLimits

0xcc18,	// (0x0003befe) list_single_2graphic_im_pane_g3

0x0003,

0xfc35,	// (0x0003ef1b) list_single_2graphic_im_pane_g_ParamLimits

0xfc35,	// (0x0003ef1b) list_single_2graphic_im_pane_g

0xcc38,	// (0x0003bf1e) list_single_2graphic_im_pane_t1_ParamLimits

0xcc38,	// (0x0003bf1e) list_single_2graphic_im_pane_t1

0xc662,	// (0x0003b948) list_single_graphic_2heading_pane_fp_ParamLimits

0xc662,	// (0x0003b948) list_single_graphic_2heading_pane_fp

0x4536,	// (0x0003381c) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4536,	// (0x0003381c) list_single_graphic_2heading_pane_fp_g1

0xc67b,	// (0x0003b961) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc67b,	// (0x0003b961) list_single_graphic_2heading_pane_fp_g2

0x42b0,	// (0x00033596) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x42b0,	// (0x00033596) list_single_graphic_2heading_pane_fp_g3

0x450b,	// (0x000337f1) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x450b,	// (0x000337f1) list_single_graphic_2heading_pane_fp_g4

0xc687,	// (0x0003b96d) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc687,	// (0x0003b96d) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb5c,	// (0x0003ee42) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb5c,	// (0x0003ee42) list_single_graphic_2heading_pane_fp_g

0x483c,	// (0x00033b22) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x483c,	// (0x00033b22) list_single_graphic_2heading_pane_fp_t1

0x456e,	// (0x00033854) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x456e,	// (0x00033854) list_single_graphic_2heading_pane_fp_t2

0x4852,	// (0x00033b38) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4852,	// (0x00033b38) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3e,	// (0x0003ef24) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3e,	// (0x0003ef24) list_single_graphic_2heading_pane_fp_t

0xc065,	// (0x0003b34b) fep_hwr_write_pane_g5_ParamLimits

0xc065,	// (0x0003b34b) fep_hwr_write_pane_g5

0xc071,	// (0x0003b357) fep_hwr_write_pane_g6_ParamLimits

0xc071,	// (0x0003b357) fep_hwr_write_pane_g6

0xc937,	// (0x0003bc1d) eswt_shell_pane_ParamLimits

0x9a27,	// (0x00038d0d) bg_popup_window_pane_cp18_ParamLimits

0xacd6,	// (0x00039fbc) heading_pane_cp70

0xca61,	// (0x0003bd47) popup_eswt_tasktip_window_t1_ParamLimits

0x9510,	// (0x000387f6) aid_touch_tab_arrow_left

0x951c,	// (0x00038802) aid_touch_tab_arrow_right

0x57c1,	// (0x00034aa7) title_pane_g3_ParamLimits

0x57c1,	// (0x00034aa7) title_pane_g3

0x2894,	// (0x00031b7a) set_value_pane_g1

0x7290,	// (0x00036576) popup_toolbar_trans_pane_ParamLimits

0xcbaf,	// (0x0003be95) aid_size_cell_tb_trans_pane_ParamLimits

0x28d5,	// (0x00031bbb) bg_tb_trans_pane_ParamLimits

0xcbc1,	// (0x0003bea7) grid_tb_trans_pane_ParamLimits

0x23c6,	// (0x000316ac) cont_note_pane_ParamLimits

0x23c6,	// (0x000316ac) cont_note_pane

0x2650,	// (0x00031936) cont_snote2_single_text_pane_ParamLimits

0x2650,	// (0x00031936) cont_snote2_single_text_pane

0x2650,	// (0x00031936) cont_snote2_single_graphic_pane_ParamLimits

0x2650,	// (0x00031936) cont_snote2_single_graphic_pane

0xa019,	// (0x000392ff) cont_note_wait_pane_ParamLimits

0xa019,	// (0x000392ff) cont_note_wait_pane

0xa019,	// (0x000392ff) cont_note_image_pane_ParamLimits

0xa019,	// (0x000392ff) cont_note_image_pane

0xcc69,	// (0x0003bf4f) popup_note2_window_g1_ParamLimits

0xcc69,	// (0x0003bf4f) popup_note2_window_g1

0xcc9a,	// (0x0003bf80) popup_note2_window_t1_ParamLimits

0xcc9a,	// (0x0003bf80) popup_note2_window_t1

0xccdf,	// (0x0003bfc5) popup_note2_window_t2_ParamLimits

0xccdf,	// (0x0003bfc5) popup_note2_window_t2

0xcd24,	// (0x0003c00a) popup_note2_window_t3_ParamLimits

0xcd24,	// (0x0003c00a) popup_note2_window_t3

0xcd69,	// (0x0003c04f) popup_note2_window_t4_ParamLimits

0xcd69,	// (0x0003c04f) popup_note2_window_t4

0x244a,	// (0x00031730) popup_note2_window_t5_ParamLimits

0x244a,	// (0x00031730) popup_note2_window_t5

0x0004,

0xfc4a,	// (0x0003ef30) popup_note2_window_t_ParamLimits

0xfc4a,	// (0x0003ef30) popup_note2_window_t

0xcd98,	// (0x0003c07e) popup_note2_image_window_g1_ParamLimits

0xcd98,	// (0x0003c07e) popup_note2_image_window_g1

0xcda4,	// (0x0003c08a) popup_note2_image_window_g2_ParamLimits

0xcda4,	// (0x0003c08a) popup_note2_image_window_g2

0x0001,

0xfc55,	// (0x0003ef3b) popup_note2_image_window_g_ParamLimits

0xfc55,	// (0x0003ef3b) popup_note2_image_window_g

0xcdb6,	// (0x0003c09c) popup_note2_image_window_t1_ParamLimits

0xcdb6,	// (0x0003c09c) popup_note2_image_window_t1

0xcdce,	// (0x0003c0b4) popup_note2_image_window_t2_ParamLimits

0xcdce,	// (0x0003c0b4) popup_note2_image_window_t2

0xcde6,	// (0x0003c0cc) popup_note2_image_window_t3_ParamLimits

0xcde6,	// (0x0003c0cc) popup_note2_image_window_t3

0x0002,

0xfc5a,	// (0x0003ef40) popup_note2_image_window_t_ParamLimits

0xfc5a,	// (0x0003ef40) popup_note2_image_window_t

0xa027,	// (0x0003930d) popup_note2_wait_window_g1_ParamLimits

0xa027,	// (0x0003930d) popup_note2_wait_window_g1

0xce02,	// (0x0003c0e8) popup_note2_wait_window_g2_ParamLimits

0xce02,	// (0x0003c0e8) popup_note2_wait_window_g2

0xa03f,	// (0x00039325) popup_note2_wait_window_g3_ParamLimits

0xa03f,	// (0x00039325) popup_note2_wait_window_g3

0x0002,

0xfc61,	// (0x0003ef47) popup_note2_wait_window_g_ParamLimits

0xfc61,	// (0x0003ef47) popup_note2_wait_window_g

0xce0e,	// (0x0003c0f4) popup_note2_wait_window_t1_ParamLimits

0xce0e,	// (0x0003c0f4) popup_note2_wait_window_t1

0xce2c,	// (0x0003c112) popup_note2_wait_window_t2_ParamLimits

0xce2c,	// (0x0003c112) popup_note2_wait_window_t2

0xce4a,	// (0x0003c130) popup_note2_wait_window_t3_ParamLimits

0xce4a,	// (0x0003c130) popup_note2_wait_window_t3

0xce5c,	// (0x0003c142) popup_note2_wait_window_t4_ParamLimits

0xce5c,	// (0x0003c142) popup_note2_wait_window_t4

0x0003,

0xfc68,	// (0x0003ef4e) popup_note2_wait_window_t_ParamLimits

0xfc68,	// (0x0003ef4e) popup_note2_wait_window_t

0xce6e,	// (0x0003c154) wait_bar2_pane_ParamLimits

0xce6e,	// (0x0003c154) wait_bar2_pane

0xce86,	// (0x0003c16c) popup_snote2_single_text_window_g1_ParamLimits

0xce86,	// (0x0003c16c) popup_snote2_single_text_window_g1

0xceae,	// (0x0003c194) popup_snote2_single_text_window_t1_ParamLimits

0xceae,	// (0x0003c194) popup_snote2_single_text_window_t1

0xcefa,	// (0x0003c1e0) popup_snote2_single_text_window_t2_ParamLimits

0xcefa,	// (0x0003c1e0) popup_snote2_single_text_window_t2

0xcf46,	// (0x0003c22c) popup_snote2_single_text_window_t3_ParamLimits

0xcf46,	// (0x0003c22c) popup_snote2_single_text_window_t3

0xcf87,	// (0x0003c26d) popup_snote2_single_text_window_t4_ParamLimits

0xcf87,	// (0x0003c26d) popup_snote2_single_text_window_t4

0xcfbd,	// (0x0003c2a3) popup_snote2_single_text_window_t5_ParamLimits

0xcfbd,	// (0x0003c2a3) popup_snote2_single_text_window_t5

0x0004,

0xfc71,	// (0x0003ef57) popup_snote2_single_text_window_t_ParamLimits

0xfc71,	// (0x0003ef57) popup_snote2_single_text_window_t

0xcfe8,	// (0x0003c2ce) popup_snote2_single_graphic_window_g1_ParamLimits

0xcfe8,	// (0x0003c2ce) popup_snote2_single_graphic_window_g1

0xd010,	// (0x0003c2f6) popup_snote2_single_graphic_window_g2_ParamLimits

0xd010,	// (0x0003c2f6) popup_snote2_single_graphic_window_g2

0x0001,

0xfc7c,	// (0x0003ef62) popup_snote2_single_graphic_window_g_ParamLimits

0xfc7c,	// (0x0003ef62) popup_snote2_single_graphic_window_g

0xd038,	// (0x0003c31e) popup_snote2_single_graphic_window_t1_ParamLimits

0xd038,	// (0x0003c31e) popup_snote2_single_graphic_window_t1

0xd084,	// (0x0003c36a) popup_snote2_single_graphic_window_t2_ParamLimits

0xd084,	// (0x0003c36a) popup_snote2_single_graphic_window_t2

0xcf46,	// (0x0003c22c) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf46,	// (0x0003c22c) popup_snote2_single_graphic_window_t3

0xcf87,	// (0x0003c26d) popup_snote2_single_graphic_window_t4_ParamLimits

0xcf87,	// (0x0003c26d) popup_snote2_single_graphic_window_t4

0xcfbd,	// (0x0003c2a3) popup_snote2_single_graphic_window_t5_ParamLimits

0xcfbd,	// (0x0003c2a3) popup_snote2_single_graphic_window_t5

0x0004,

0xfc81,	// (0x0003ef67) popup_snote2_single_graphic_window_t_ParamLimits

0xfc81,	// (0x0003ef67) popup_snote2_single_graphic_window_t

0xbacc,	// (0x0003adb2) clock_nsta_pane_cp2_t1

0xbacc,	// (0x0003adb2) clock_nsta_pane_cp2_t2

0x0001,

0xfa95,	// (0x0003ed7b) clock_nsta_pane_cp2_t

0x3fc2,	// (0x000332a8) form_field_data_wide_pane_g1_ParamLimits

0x28e3,	// (0x00031bc9) form_field_data_wide_pane_g2_ParamLimits

0x28e3,	// (0x00031bc9) form_field_data_wide_pane_g2

0x28ef,	// (0x00031bd5) form_field_data_wide_pane_g3_ParamLimits

0x28ef,	// (0x00031bd5) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x0003e93c) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x0003e93c) form_field_data_wide_pane_g

0xb9a7,	// (0x0003ac8d) grid_touch_3_pane_ParamLimits

0xb9a7,	// (0x0003ac8d) grid_touch_3_pane

0xd0d0,	// (0x0003c3b6) cell_touch_3_pane_ParamLimits

0xd0d0,	// (0x0003c3b6) cell_touch_3_pane

0xbfd4,	// (0x0003b2ba) cell_touch_3_pane_g1

0xbfd4,	// (0x0003b2ba) cell_touch_3_pane_g2

0x0001,

0xfb1a,	// (0x0003ee00) cell_touch_3_pane_g

0x24a2,	// (0x00031788) cont_query_data_pane

0x24aa,	// (0x00031790) cont_query_data_pane_cp1

0xd103,	// (0x0003c3e9) button_value_adjust_pane_cp7

0xd10b,	// (0x0003c3f1) query_popup_pane_cp3

0x8c26,	// (0x00037f0c) bg_popup_sub_pane_cp22_ParamLimits

0x68dc,	// (0x00035bc2) navi_navi_volume_pane_cp2

0x68f7,	// (0x00035bdd) popup_side_volume_key_window_g2

0x6906,	// (0x00035bec) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x0003e9d2) popup_side_volume_key_window_g

0x6923,	// (0x00035c09) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x0003e9d9) popup_side_volume_key_window_t

0x8ee2,	// (0x000381c8) popup_side_volume_key_window_ParamLimits

0x5cf9,	// (0x00034fdf) list_double_graphic_pane_g4_ParamLimits

0x5cf9,	// (0x00034fdf) list_double_graphic_pane_g4

0x77b2,	// (0x00036a98) list_single_2heading_msg_pane_ParamLimits

0x77b2,	// (0x00036a98) list_single_2heading_msg_pane

0x7d58,	// (0x0003703e) list_single_2heading_msg_pane_g1_ParamLimits

0x7d58,	// (0x0003703e) list_single_2heading_msg_pane_g1

0x5b34,	// (0x00034e1a) list_single_2heading_msg_pane_g2_ParamLimits

0x5b34,	// (0x00034e1a) list_single_2heading_msg_pane_g2

0x7d64,	// (0x0003704a) list_single_2heading_msg_pane_g3_ParamLimits

0x7d64,	// (0x0003704a) list_single_2heading_msg_pane_g3

0x7d70,	// (0x00037056) list_single_2heading_msg_pane_g4_ParamLimits

0x7d70,	// (0x00037056) list_single_2heading_msg_pane_g4

0x0003,

0xfc8c,	// (0x0003ef72) list_single_2heading_msg_pane_g_ParamLimits

0xfc8c,	// (0x0003ef72) list_single_2heading_msg_pane_g

0x7d88,	// (0x0003706e) list_single_2heading_msg_pane_t1_ParamLimits

0x7d88,	// (0x0003706e) list_single_2heading_msg_pane_t1

0x7db0,	// (0x00037096) list_single_2heading_msg_pane_t2_ParamLimits

0x7db0,	// (0x00037096) list_single_2heading_msg_pane_t2

0x7de4,	// (0x000370ca) list_single_2heading_msg_pane_t3_ParamLimits

0x7de4,	// (0x000370ca) list_single_2heading_msg_pane_t3

0x4872,	// (0x00033b58) list_single_2heading_msg_pane_t4_ParamLimits

0x4872,	// (0x00033b58) list_single_2heading_msg_pane_t4

0x0003,

0xfc95,	// (0x0003ef7b) list_single_2heading_msg_pane_t_ParamLimits

0xfc95,	// (0x0003ef7b) list_single_2heading_msg_pane_t

0x2241,	// (0x00031527) title_pane_g4_ParamLimits

0x2241,	// (0x00031527) title_pane_g4

0x6439,	// (0x0003571f) title_pane_stacon_g3_ParamLimits

0x6439,	// (0x0003571f) title_pane_stacon_g3

0xcc2c,	// (0x0003bf12) list_single_2graphic_im_pane_g4_ParamLimits

0xcc2c,	// (0x0003bf12) list_single_2graphic_im_pane_g4

0xaa89,	// (0x00039d6f) popup_side_volume_key_window_cp

0xb2b7,	// (0x0003a59d) main_idle_act2_pane_t1

0x7394,	// (0x0003667a) toolbar_button_pane_g10

0x5b1e,	// (0x00034e04) popup_toolbar_window_cp1

0xbabd,	// (0x0003ada3) clock_nsta_pane_cp_t1

0xbabd,	// (0x0003ada3) clock_nsta_pane_cp_t2

0x0001,

0xfa90,	// (0x0003ed76) clock_nsta_pane_cp_t

0x68dc,	// (0x00035bc2) navi_navi_volume_pane_cp2_ParamLimits

0x68eb,	// (0x00035bd1) popup_side_volume_key_window_g1_ParamLimits

0x68f7,	// (0x00035bdd) popup_side_volume_key_window_g2_ParamLimits

0x6906,	// (0x00035bec) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x0003e9d2) popup_side_volume_key_window_g_ParamLimits

0x7908,	// (0x00036bee) fep_hwr_aid_pane

0x79b1,	// (0x00036c97) bg_fep_hwr_top_pane_g4_ParamLimits

0xc035,	// (0x0003b31b) fep_hwr_top_pane_g1_ParamLimits

0xc047,	// (0x0003b32d) fep_hwr_top_pane_g2_ParamLimits

0x79d1,	// (0x00036cb7) fep_hwr_top_pane_g3_ParamLimits

0xfae5,	// (0x0003edcb) fep_hwr_top_pane_g_ParamLimits

0x79e6,	// (0x00036ccc) fep_hwr_top_text_pane_ParamLimits

0xa83e,	// (0x00039b24) aid_touch_tab_arrow_arrow_2

0xa847,	// (0x00039b2d) aid_touch_tab_arrow_left_2

0x791c,	// (0x00036c02) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x7953,	// (0x00036c39) fep_hwr_prediction_pane

0xc19d,	// (0x0003b483) fep_vkb_prediction_pane

0xc2a3,	// (0x0003b589) fep_vkb_side_pane_g3_ParamLimits

0xc2a3,	// (0x0003b589) fep_vkb_side_pane_g3

0x7b75,	// (0x00036e5b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7be6,	// (0x00036ecc) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7bf3,	// (0x00036ed9) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb94,	// (0x0003ee7a) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7e1d,	// (0x00037103) fep_hwr_prediction_pane_g1

0x7e27,	// (0x0003710d) fep_hwr_prediction_pane_g2

0x7e2f,	// (0x00037115) fep_hwr_prediction_pane_g3

0x7e37,	// (0x0003711d) fep_hwr_prediction_pane_g4

0x0003,

0xfc9e,	// (0x0003ef84) fep_hwr_prediction_pane_g

0xd132,	// (0x0003c418) fep_vkb_prediction_pane_g1

0xd13c,	// (0x0003c422) fep_vkb_prediction_pane_g2

0xd144,	// (0x0003c42a) fep_vkb_prediction_pane_g3

0xd14c,	// (0x0003c432) fep_vkb_prediction_pane_g4

0x0003,

0xfca7,	// (0x0003ef8d) fep_vkb_prediction_pane_g

0x76e5,	// (0x000369cb) slider_set_pane_g3

0x76f9,	// (0x000369df) slider_set_pane_g4

0x7711,	// (0x000369f7) slider_set_pane_g5

0x76e5,	// (0x000369cb) slider_set_pane_g6

0x7727,	// (0x00036a0d) slider_set_pane_g7

0xaf0f,	// (0x0003a1f5) slider_form_pane_g3

0xaf18,	// (0x0003a1fe) slider_form_pane_g4

0xaf20,	// (0x0003a206) slider_form_pane_g5

0xaf0f,	// (0x0003a1f5) slider_form_pane_g6

0xaf28,	// (0x0003a20e) slider_form_pane_g7

0xb57b,	// (0x0003a861) slider_set_pane_vc_g3

0xb584,	// (0x0003a86a) slider_set_pane_vc_g4

0xb58d,	// (0x0003a873) slider_set_pane_vc_g5

0xb57b,	// (0x0003a861) slider_set_pane_vc_g6

0xb596,	// (0x0003a87c) slider_set_pane_vc_g7

0xb76c,	// (0x0003aa52) slider_form_pane_vc_g1

0xb775,	// (0x0003aa5b) slider_form_pane_vc_g2

0xb77e,	// (0x0003aa64) slider_form_pane_vc_g3

0xb76c,	// (0x0003aa52) slider_form_pane_vc_g4

0xb787,	// (0x0003aa6d) slider_form_pane_vc_g5

0x0004,

0xfa62,	// (0x0003ed48) slider_form_pane_vc_g

0x5532,	// (0x00034818) main_idle_act3_pane

0xd154,	// (0x0003c43a) ai3_links_pane

0xd15d,	// (0x0003c443) popup_ai3_data_window_ParamLimits

0xd15d,	// (0x0003c443) popup_ai3_data_window

0x2223,	// (0x00031509) grid_ai3_links_pane

0xd17b,	// (0x0003c461) cell_ai3_links_pane_ParamLimits

0xd17b,	// (0x0003c461) cell_ai3_links_pane

0xd195,	// (0x0003c47b) bg_popup_sub_pane_cp11

0xd1a2,	// (0x0003c488) cell_ai3_links_pane_g1

0x2223,	// (0x00031509) bg_popup_sub_pane_cp12

0xd1c7,	// (0x0003c4ad) heading_ai3_data_pane

0xd1cf,	// (0x0003c4b5) list_ai3_gene_pane

0xd1db,	// (0x0003c4c1) popup_ai3_data_window_g1

0xd1e3,	// (0x0003c4c9) heading_ai3_data_pane_g1

0xd1eb,	// (0x0003c4d1) heading_ai3_data_pane_t1

0xd1f9,	// (0x0003c4df) list_double_ai3_gene_pane_ParamLimits

0xd1f9,	// (0x0003c4df) list_double_ai3_gene_pane

0xd206,	// (0x0003c4ec) list_single_ai3_gene_pane_ParamLimits

0xd206,	// (0x0003c4ec) list_single_ai3_gene_pane

0xbf99,	// (0x0003b27f) list_highlight_pane_cp7_ParamLimits

0xbf99,	// (0x0003b27f) list_highlight_pane_cp7

0xd213,	// (0x0003c4f9) list_single_a13_gene_pane_t1_ParamLimits

0xd213,	// (0x0003c4f9) list_single_a13_gene_pane_t1

0xd22a,	// (0x0003c510) list_single_ai3_gene_pane_g1

0xd233,	// (0x0003c519) list_single_ai3_gene_pane_g2

0x0001,

0xfcb0,	// (0x0003ef96) list_single_ai3_gene_pane_g

0xd23b,	// (0x0003c521) list_double_ai3_gene_pane_g1_ParamLimits

0xd23b,	// (0x0003c521) list_double_ai3_gene_pane_g1

0xd247,	// (0x0003c52d) list_double_ai3_gene_pane_t1_ParamLimits

0xd247,	// (0x0003c52d) list_double_ai3_gene_pane_t1

0xd263,	// (0x0003c549) list_double_ai3_gene_pane_t2_ParamLimits

0xd263,	// (0x0003c549) list_double_ai3_gene_pane_t2

0xd278,	// (0x0003c55e) list_double_ai3_gene_pane_t3_ParamLimits

0xd278,	// (0x0003c55e) list_double_ai3_gene_pane_t3

0x0002,

0xfcb5,	// (0x0003ef9b) list_double_ai3_gene_pane_t_ParamLimits

0xfcb5,	// (0x0003ef9b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4868,	// (0x00033b4e) aid_size_min_col_2

0xd11c,	// (0x0003c402) aid_size_min_msg_ParamLimits

0xd11c,	// (0x0003c402) aid_size_min_msg

0xc3af,	// (0x0003b695) fep_vkb_top_text_pane_g2_ParamLimits

0xc3af,	// (0x0003b695) fep_vkb_top_text_pane_g2

0x0001,

0xfb15,	// (0x0003edfb) fep_vkb_top_text_pane_g_ParamLimits

0xfb15,	// (0x0003edfb) fep_vkb_top_text_pane_g

0x5532,	// (0x00034818) main_hc_apps_shell_pane

0xd295,	// (0x0003c57b) grid_hc_apps_pane_ParamLimits

0xd295,	// (0x0003c57b) grid_hc_apps_pane

0xd2a7,	// (0x0003c58d) list_hc_apps_pane

0xd2af,	// (0x0003c595) scroll_pane_cp37_ParamLimits

0xd2af,	// (0x0003c595) scroll_pane_cp37

0xd2bb,	// (0x0003c5a1) cell_hc_apps_pane_ParamLimits

0xd2bb,	// (0x0003c5a1) cell_hc_apps_pane

0xd371,	// (0x0003c657) cell_hc_apps_pane_g1_ParamLimits

0xd371,	// (0x0003c657) cell_hc_apps_pane_g1

0xd39d,	// (0x0003c683) cell_hc_apps_pane_g2_ParamLimits

0xd39d,	// (0x0003c683) cell_hc_apps_pane_g2

0xd3b9,	// (0x0003c69f) cell_hc_apps_pane_g3_ParamLimits

0xd3b9,	// (0x0003c69f) cell_hc_apps_pane_g3

0x0002,

0xfcbc,	// (0x0003efa2) cell_hc_apps_pane_g_ParamLimits

0xfcbc,	// (0x0003efa2) cell_hc_apps_pane_g

0xd3db,	// (0x0003c6c1) cell_hc_apps_pane_t1_ParamLimits

0xd3db,	// (0x0003c6c1) cell_hc_apps_pane_t1

0x23c6,	// (0x000316ac) grid_highlight_pane_cp10_ParamLimits

0x23c6,	// (0x000316ac) grid_highlight_pane_cp10

0xd41b,	// (0x0003c701) list_single_hc_apps_pane_ParamLimits

0xd41b,	// (0x0003c701) list_single_hc_apps_pane

0xd45a,	// (0x0003c740) list_single_hc_apps_pane_g1

0x7e3f,	// (0x00037125) list_single_hc_apps_pane_g2

0x0001,

0xfcc3,	// (0x0003efa9) list_single_hc_apps_pane_g

0x7e58,	// (0x0003713e) list_single_hc_apps_pane_g2_copy1

0x7e74,	// (0x0003715a) list_single_hc_apps_pane_t1

0x2293,	// (0x00031579) bg_set_opt_pane_cp_ParamLimits

0x5873,	// (0x00034b59) setting_slider_pane_t1_ParamLimits

0x588c,	// (0x00034b72) setting_slider_pane_t2_ParamLimits

0x58a6,	// (0x00034b8c) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0003e81f) setting_slider_pane_t_ParamLimits

0x58be,	// (0x00034ba4) slider_set_pane_ParamLimits

0x6c17,	// (0x00035efd) control_pane_g5_ParamLimits

0x6c17,	// (0x00035efd) control_pane_g5

0xad42,	// (0x0003a028) slider_set_pane_g1_ParamLimits

0x76d9,	// (0x000369bf) slider_set_pane_g2_ParamLimits

0x76e5,	// (0x000369cb) slider_set_pane_g3_ParamLimits

0x76f9,	// (0x000369df) slider_set_pane_g4_ParamLimits

0x7711,	// (0x000369f7) slider_set_pane_g5_ParamLimits

0x76e5,	// (0x000369cb) slider_set_pane_g6_ParamLimits

0x7727,	// (0x00036a0d) slider_set_pane_g7_ParamLimits

0xf93f,	// (0x0003ec25) slider_set_pane_g_ParamLimits

0x8fd2,	// (0x000382b8) navi_icon_text_pane_ParamLimits

0x94cf,	// (0x000387b5) aid_fill_nsta_2_ParamLimits

0x9510,	// (0x000387f6) aid_touch_tab_arrow_left_ParamLimits

0x951c,	// (0x00038802) aid_touch_tab_arrow_right_ParamLimits

0x9588,	// (0x0003886e) clock_nsta_pane_ParamLimits

0xa820,	// (0x00039b06) navi_icon_pane_g1_ParamLimits

0xa82c,	// (0x00039b12) navi_text_pane_t1_ParamLimits

0xbbda,	// (0x0003aec0) navi_icon_text_pane_g1_ParamLimits

0xbbe6,	// (0x0003aecc) navi_icon_text_pane_t1_ParamLimits

0xd45a,	// (0x0003c740) list_single_hc_apps_pane_g1_ParamLimits

0x7e3f,	// (0x00037125) list_single_hc_apps_pane_g2_ParamLimits

0xfcc3,	// (0x0003efa9) list_single_hc_apps_pane_g_ParamLimits

0x7e58,	// (0x0003713e) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7e74,	// (0x0003715a) list_single_hc_apps_pane_t1_ParamLimits

0x56a7,	// (0x0003498d) popup_toolbar2_fixed_window_ParamLimits

0x56a7,	// (0x0003498d) popup_toolbar2_fixed_window

0x7286,	// (0x0003656c) popup_toolbar2_float_window

0x2223,	// (0x00031509) bg_popup_sub_pane_cp27

0xd473,	// (0x0003c759) grid_toolbar2_float_pane

0x2223,	// (0x00031509) bg_popup_sub_pane_cp26

0xd473,	// (0x0003c759) grid_toolbar2_fixed_pane

0xd47b,	// (0x0003c761) cell_toolbar2_fixed_pane_ParamLimits

0xd47b,	// (0x0003c761) cell_toolbar2_fixed_pane

0xd48b,	// (0x0003c771) cell_toolbar2_fixed_pane_g1

0xd494,	// (0x0003c77a) toolbar2_fixed_button_pane

0x99b3,	// (0x00038c99) toolbar2_fixed_button_pane_g1

0x99c3,	// (0x00038ca9) toolbar2_fixed_button_pane_g2

0x99bb,	// (0x00038ca1) toolbar2_fixed_button_pane_g3

0x99d3,	// (0x00038cb9) toolbar2_fixed_button_pane_g4

0x99cb,	// (0x00038cb1) toolbar2_fixed_button_pane_g5

0x99db,	// (0x00038cc1) toolbar2_fixed_button_pane_g6

0x99e3,	// (0x00038cc9) toolbar2_fixed_button_pane_g7

0x99f3,	// (0x00038cd9) toolbar2_fixed_button_pane_g8

0x99eb,	// (0x00038cd1) toolbar2_fixed_button_pane_g9

0x0008,

0xf841,	// (0x0003eb27) toolbar2_fixed_button_pane_g

0xd49c,	// (0x0003c782) cell_toolbar2_float_pane_ParamLimits

0xd49c,	// (0x0003c782) cell_toolbar2_float_pane

0xd4ad,	// (0x0003c793) cell_toolbar2_float_pane_g1

0xd494,	// (0x0003c77a) toolbar2_fixed_button_pane_cp

0xc10b,	// (0x0003b3f1) fep_vkb_accented_list_pane_ParamLimits

0xc10b,	// (0x0003b3f1) fep_vkb_accented_list_pane

0x7b55,	// (0x00036e3b) bg_popup_fep_shadow_pane_g9

0x9156,	// (0x0003843c) bg_popup_fep_shadow_pane_cp3

0x61c7,	// (0x000354ad) list_accented_list_pane

0xd4b6,	// (0x0003c79c) list_single_accented_list_pane_ParamLimits

0xd4b6,	// (0x0003c79c) list_single_accented_list_pane

0x9156,	// (0x0003843c) list_highlight_pane_cp10

0xd4c7,	// (0x0003c7ad) list_single_accented_list_pane_t1

0x71cc,	// (0x000364b2) popup_slider_window_ParamLimits

0x71cc,	// (0x000364b2) popup_slider_window

0xd113,	// (0x0003c3f9) aid_indentation_list_msg

0xd597,	// (0x0003c87d) bg_popup_window_pane_cp19

0xd624,	// (0x0003c90a) popup_slider_window_g1

0xd640,	// (0x0003c926) popup_slider_window_g2

0xd65c,	// (0x0003c942) popup_slider_window_g3

0x0005,

0xfcc8,	// (0x0003efae) popup_slider_window_g

0xd6c2,	// (0x0003c9a8) popup_slider_window_t1

0xd736,	// (0x0003ca1c) small_volume_slider_vertical_pane

0xbfd4,	// (0x0003b2ba) small_volume_slider_vertical_pane_g1

0xbfd4,	// (0x0003b2ba) small_volume_slider_vertical_pane_g2

0xd752,	// (0x0003ca38) small_volume_slider_vertical_pane_g3

0x0002,

0xfcda,	// (0x0003efc0) small_volume_slider_vertical_pane_g

0x5455,	// (0x0003473b) area_side_right_pane_ParamLimits

0x5455,	// (0x0003473b) area_side_right_pane

0x7ea2,	// (0x00037188) aid_size_side_button_ParamLimits

0x7ea2,	// (0x00037188) aid_size_side_button

0x7eb6,	// (0x0003719c) grid_sctrl_middle_pane_ParamLimits

0x7eb6,	// (0x0003719c) grid_sctrl_middle_pane

0x7ed5,	// (0x000371bb) sctrl_sk_bottom_pane

0x7ee6,	// (0x000371cc) sctrl_sk_top_pane

0x7ef8,	// (0x000371de) aid_touch_sctrl_top

0x7f05,	// (0x000371eb) bg_sctrl_sk_pane_ParamLimits

0x7f05,	// (0x000371eb) bg_sctrl_sk_pane

0x7f13,	// (0x000371f9) sctrl_sk_top_pane_g1

0x7f20,	// (0x00037206) sctrl_sk_top_pane_t1

0x7ef8,	// (0x000371de) aid_touch_sctrl_bottom

0x7f05,	// (0x000371eb) bg_sctrl_sk_pane_cp_ParamLimits

0x7f05,	// (0x000371eb) bg_sctrl_sk_pane_cp

0x7f3b,	// (0x00037221) sctrl_sk_bottom_pane_g1

0x7f20,	// (0x00037206) sctrl_sk_bottom_pane_t1

0x7f44,	// (0x0003722a) cell_sctrl_middle_pane_ParamLimits

0x7f44,	// (0x0003722a) cell_sctrl_middle_pane

0x7f61,	// (0x00037247) aid_touch_sctrl_middle_ParamLimits

0x7f61,	// (0x00037247) aid_touch_sctrl_middle

0x7f73,	// (0x00037259) bg_sctrl_middle_pane_ParamLimits

0x7f73,	// (0x00037259) bg_sctrl_middle_pane

0x7b75,	// (0x00036e5b) cell_sctrl_middle_pane_g1_ParamLimits

0x7b75,	// (0x00036e5b) cell_sctrl_middle_pane_g1

0x7f81,	// (0x00037267) cell_sctrl_middle_pane_g2_ParamLimits

0x7f81,	// (0x00037267) cell_sctrl_middle_pane_g2

0x0001,

0xfce6,	// (0x0003efcc) cell_sctrl_middle_pane_g_ParamLimits

0xfce6,	// (0x0003efcc) cell_sctrl_middle_pane_g

0x99b3,	// (0x00038c99) bg_sctrl_middle_pane_g1

0x99bb,	// (0x00038ca1) bg_sctrl_middle_pane_g2

0x99c3,	// (0x00038ca9) bg_sctrl_middle_pane_g3

0x99cb,	// (0x00038cb1) bg_sctrl_middle_pane_g4

0x99d3,	// (0x00038cb9) bg_sctrl_middle_pane_g5

0x99db,	// (0x00038cc1) bg_sctrl_middle_pane_g6

0x99e3,	// (0x00038cc9) bg_sctrl_middle_pane_g7

0x99eb,	// (0x00038cd1) bg_sctrl_middle_pane_g8

0x0007,

0xfceb,	// (0x0003efd1) bg_sctrl_middle_pane_g

0x99f3,	// (0x00038cd9) bg_sctrl_middle_pane_g8_copy1

0x99b3,	// (0x00038c99) bg_sctrl_sk_pane_g1

0x99c3,	// (0x00038ca9) bg_sctrl_sk_pane_g2

0x99bb,	// (0x00038ca1) bg_sctrl_sk_pane_g3

0x0008,

0xf841,	// (0x0003eb27) bg_sctrl_sk_pane_g

0x280e,	// (0x00031af4) aid_size_touch_scroll_bar

0x99d3,	// (0x00038cb9) bg_sctrl_sk_pane_g4

0x99cb,	// (0x00038cb1) bg_sctrl_sk_pane_g5

0x99db,	// (0x00038cc1) bg_sctrl_sk_pane_g6

0x99e3,	// (0x00038cc9) bg_sctrl_sk_pane_g7

0x99f3,	// (0x00038cd9) bg_sctrl_sk_pane_g8

0x99eb,	// (0x00038cd1) bg_sctrl_sk_pane_g9

0x6de1,	// (0x000360c7) popup_fep_china_hwr2_fs_candidate_window

0x6deb,	// (0x000360d1) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6deb,	// (0x000360d1) popup_fep_china_hwr2_fs_control_window

0x7b75,	// (0x00036e5b) sctrl_sk_top_pane_g2

0x0001,

0xfce1,	// (0x0003efc7) sctrl_sk_top_pane_g

0xd75b,	// (0x0003ca41) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd75b,	// (0x0003ca41) aid_fep_china_hwr2_fs_cell

0xd76e,	// (0x0003ca54) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd76e,	// (0x0003ca54) bg_popup_fep_shadow_pane_cp4

0xd787,	// (0x0003ca6d) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd787,	// (0x0003ca6d) bg_popup_fep_shadow_pane_cp5

0xd799,	// (0x0003ca7f) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd799,	// (0x0003ca7f) popup_fep_china_hwr2_fs_control_bar_grid

0xd7a9,	// (0x0003ca8f) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7b1,	// (0x0003ca97) aid_fep_china_hwr2_fs_candi_cell

0x2223,	// (0x00031509) bg_popup_fep_shadow_pane_cp6

0xd7bb,	// (0x0003caa1) popup_fep_china_hwr2_fs_candidate_grid

0xd7c5,	// (0x0003caab) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7c5,	// (0x0003caab) cell_fep_china_hwr2_fs_funtion_grid

0xbfd4,	// (0x0003b2ba) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7dd,	// (0x0003cac3) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7dd,	// (0x0003cac3) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7eb,	// (0x0003cad1) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7eb,	// (0x0003cad1) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcfc,	// (0x0003efe2) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcfc,	// (0x0003efe2) cell_fep_china_hwr2_fs_funtion_grid_g

0xd801,	// (0x0003cae7) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd801,	// (0x0003cae7) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd816,	// (0x0003cafc) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd816,	// (0x0003cafc) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd01,	// (0x0003efe7) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd01,	// (0x0003efe7) cell_fep_china_hwr2_fs_funtion_grid_t

0xd832,	// (0x0003cb18) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd83a,	// (0x0003cb20) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd842,	// (0x0003cb28) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd06,	// (0x0003efec) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd84a,	// (0x0003cb30) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd84a,	// (0x0003cb30) cell_fep_china_hwr2_fs_candidate_grid

0xd869,	// (0x0003cb4f) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd871,	// (0x0003cb57) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbfd4,	// (0x0003b2ba) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbfd4,	// (0x0003b2ba) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1a,	// (0x0003ee00) cell_fep_china_hwr2_fs_candidate_grid_g

0xd879,	// (0x0003cb5f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x959b,	// (0x00038881) clock_nsta_pane_cp_24_ParamLimits

0x959b,	// (0x00038881) clock_nsta_pane_cp_24

0x961b,	// (0x00038901) indicator_nsta_pane_cp_24_ParamLimits

0x961b,	// (0x00038901) indicator_nsta_pane_cp_24

0xa69c,	// (0x00039982) heading_pane_g1

0x0001,

0xf8a6,	// (0x0003eb8c) heading_pane_g

0xb0fe,	// (0x0003a3e4) grid_sct_catagory_button_pane

0xb130,	// (0x0003a416) scroll_pane_cp5_ParamLimits

0xbc28,	// (0x0003af0e) button_value_adjust_pane_cp5_ParamLimits

0xbc28,	// (0x0003af0e) button_value_adjust_pane_cp5

0xbd19,	// (0x0003afff) form2_midp_time_pane_ParamLimits

0xd887,	// (0x0003cb6d) cell_sct_catagory_button_pane_ParamLimits

0xd887,	// (0x0003cb6d) cell_sct_catagory_button_pane

0xbf99,	// (0x0003b27f) bg_button_pane_cp01_ParamLimits

0xbf99,	// (0x0003b27f) bg_button_pane_cp01

0xbfd4,	// (0x0003b2ba) cell_sct_catagory_button_pane_g1

0x720d,	// (0x000364f3) popup_tb_extension_window

0xd899,	// (0x0003cb7f) aid_size_cell_ext_ParamLimits

0xd899,	// (0x0003cb7f) aid_size_cell_ext

0x23c6,	// (0x000316ac) bg_tb_trans_pane_cp1_ParamLimits

0x23c6,	// (0x000316ac) bg_tb_trans_pane_cp1

0xd8b9,	// (0x0003cb9f) grid_tb_ext_pane_ParamLimits

0xd8b9,	// (0x0003cb9f) grid_tb_ext_pane

0xd8e7,	// (0x0003cbcd) cell_tb_ext_pane_ParamLimits

0xd8e7,	// (0x0003cbcd) cell_tb_ext_pane

0xd8fe,	// (0x0003cbe4) cell_tb_ext_pane_g1_ParamLimits

0xd8fe,	// (0x0003cbe4) cell_tb_ext_pane_g1

0xd91b,	// (0x0003cc01) cell_tb_ext_pane_t1

0x23c6,	// (0x000316ac) list_highlight_pane_cp11_ParamLimits

0x23c6,	// (0x000316ac) list_highlight_pane_cp11

0x56c6,	// (0x000349ac) popup_uni_indicator_window_ParamLimits

0x56c6,	// (0x000349ac) popup_uni_indicator_window

0x28d5,	// (0x00031bbb) bg_popup_sub_pane_cp14

0xd936,	// (0x0003cc1c) list_uniindi_pane

0xd942,	// (0x0003cc28) uniindi_top_pane

0x23c6,	// (0x000316ac) bg_uniindi_top_pane

0xd963,	// (0x0003cc49) uniindi_top_pane_g1

0xd979,	// (0x0003cc5f) uniindi_top_pane_g2

0x0003,

0xfd0d,	// (0x0003eff3) uniindi_top_pane_g

0xd9a3,	// (0x0003cc89) uniindi_top_pane_t1

0xd9cf,	// (0x0003ccb5) list_single_uniindi_pane_ParamLimits

0xd9cf,	// (0x0003ccb5) list_single_uniindi_pane

0xbfd4,	// (0x0003b2ba) bg_uniindi_top_pane_g1

0xd9e2,	// (0x0003ccc8) list_single_uniindi_pane_g1

0xd9f5,	// (0x0003ccdb) list_single_uniindi_pane_t1

0x5532,	// (0x00034818) control_bg_pane

0xda1a,	// (0x0003cd00) bg_sctrl_sk_pane_cp1

0xda23,	// (0x0003cd09) bg_sctrl_sk_pane_cp2

0xda2c,	// (0x0003cd12) control_bg_pane_g1

0xda35,	// (0x0003cd1b) control_bg_pane_g2

0x0001,

0xfd16,	// (0x0003effc) control_bg_pane_g

0xba60,	// (0x0003ad46) cell_indicator_nsta_pane_g1_ParamLimits

0xba6e,	// (0x0003ad54) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7e,	// (0x0003ed64) cell_indicator_nsta_pane_g_ParamLimits

0x44f8,	// (0x000337de) form2_midp_time_pane_t1_ParamLimits

0x6d3f,	// (0x00036025) main_idle_act4_pane_ParamLimits

0x6d3f,	// (0x00036025) main_idle_act4_pane

0x720d,	// (0x000364f3) popup_tb_extension_window_ParamLimits

0xd8d9,	// (0x0003cbbf) tb_ext_find_pane_ParamLimits

0xd8d9,	// (0x0003cbbf) tb_ext_find_pane

0xda3e,	// (0x0003cd24) ai_gene_pane_1_cp1

0x92a0,	// (0x00038586) ai_gene_pane_2_cp1

0xda46,	// (0x0003cd2c) list_single_idle_plugin_calendar_pane

0xda4f,	// (0x0003cd35) list_single_idle_plugin_notification_pane

0xda58,	// (0x0003cd3e) list_single_idle_plugin_player_pane

0xda61,	// (0x0003cd47) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda61,	// (0x0003cd47) list_single_idle_plugin_shortcut_pane

0xda83,	// (0x0003cd69) main_idle_act4_pane_t1

0xda95,	// (0x0003cd7b) main_idle_act4_pane_t2

0x0001,

0xfd1b,	// (0x0003f001) main_idle_act4_pane_t

0xdaa7,	// (0x0003cd8d) middle_sk_idle_act4_pane_ParamLimits

0xdaa7,	// (0x0003cd8d) middle_sk_idle_act4_pane

0xdabd,	// (0x0003cda3) popup_clock_digital_analogue_window_cp2

0xdad7,	// (0x0003cdbd) shortcut_wheel_idle_act4_pane_ParamLimits

0xdad7,	// (0x0003cdbd) shortcut_wheel_idle_act4_pane

0xbfd4,	// (0x0003b2ba) shortcut_wheel_idle_act4_pane_g1

0xbfd4,	// (0x0003b2ba) shortcut_wheel_idle_act4_pane_g2

0xbfd4,	// (0x0003b2ba) shortcut_wheel_idle_act4_pane_g3

0xbfd4,	// (0x0003b2ba) shortcut_wheel_idle_act4_pane_g4

0xbfd4,	// (0x0003b2ba) shortcut_wheel_idle_act4_pane_g5

0xdaeb,	// (0x0003cdd1) shortcut_wheel_idle_act4_pane_g6

0xdaf3,	// (0x0003cdd9) shortcut_wheel_idle_act4_pane_g7

0xdafb,	// (0x0003cde1) shortcut_wheel_idle_act4_pane_g8

0xdb03,	// (0x0003cde9) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd20,	// (0x0003f006) shortcut_wheel_idle_act4_pane_g

0xc24f,	// (0x0003b535) middle_sk_idle_act4_pane_g1_ParamLimits

0xc24f,	// (0x0003b535) middle_sk_idle_act4_pane_g1

0xdb67,	// (0x0003ce4d) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb67,	// (0x0003ce4d) middle_sk_idle_act4_pane_g2

0x0001,

0xfd43,	// (0x0003f029) middle_sk_idle_act4_pane_g_ParamLimits

0xfd43,	// (0x0003f029) middle_sk_idle_act4_pane_g

0xdb73,	// (0x0003ce59) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb73,	// (0x0003ce59) middle_sk_idle_act4_pane_t1

0xdb90,	// (0x0003ce76) grid_ai_shortcut_pane_ParamLimits

0xdb90,	// (0x0003ce76) grid_ai_shortcut_pane

0xdba9,	// (0x0003ce8f) list_highlight_pane_cp16_ParamLimits

0xdba9,	// (0x0003ce8f) list_highlight_pane_cp16

0xdbb6,	// (0x0003ce9c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbb6,	// (0x0003ce9c) list_single_idle_plugin_shortcut_pane_g1

0xdbc2,	// (0x0003cea8) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbc2,	// (0x0003cea8) list_single_idle_plugin_shortcut_pane_g2

0xdbdc,	// (0x0003cec2) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbdc,	// (0x0003cec2) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd48,	// (0x0003f02e) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd48,	// (0x0003f02e) list_single_idle_plugin_shortcut_pane_g

0xdbef,	// (0x0003ced5) cell_ai_shortcut_pane_ParamLimits

0xdbef,	// (0x0003ced5) cell_ai_shortcut_pane

0xdc12,	// (0x0003cef8) cell_ai_shortcut_pane_g1_ParamLimits

0xdc12,	// (0x0003cef8) cell_ai_shortcut_pane_g1

0xda3e,	// (0x0003cd24) ai_gene_pane_1_cp2

0xdc34,	// (0x0003cf1a) ai_gene_pane_2_cp2

0xdc3c,	// (0x0003cf22) list_highlight_pane_cp15

0xdc45,	// (0x0003cf2b) list_single_idle_plugin_calendar_pane_g1

0xdc3c,	// (0x0003cf22) list_highlight_pane_cp17

0xdc4d,	// (0x0003cf33) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc55,	// (0x0003cf3b) list_single_idle_plugin_player_pane_g1

0xb365,	// (0x0003a64b) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4f,	// (0x0003f035) list_single_idle_plugin_player_pane_g

0xdc5d,	// (0x0003cf43) list_single_idle_plugin_player_pane_t1

0xdc6b,	// (0x0003cf51) list_single_idle_plugin_player_pane_t2

0xdc79,	// (0x0003cf5f) list_single_idle_plugin_player_pane_t3

0xdc87,	// (0x0003cf6d) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd54,	// (0x0003f03a) list_single_idle_plugin_player_pane_t

0xdc95,	// (0x0003cf7b) wait_bar_pane_cp15

0xdc9d,	// (0x0003cf83) grid_ai_notification_pane

0xb365,	// (0x0003a64b) list_single_idle_plugin_notification_pane_g1

0xdca6,	// (0x0003cf8c) cell_ai_notification_pane_ParamLimits

0xdca6,	// (0x0003cf8c) cell_ai_notification_pane

0xdcb3,	// (0x0003cf99) cell_ai_notification_pane_g1

0xdcbb,	// (0x0003cfa1) cell_ai_notification_pane_t1

0xdcc9,	// (0x0003cfaf) tb_ext_find_button_pane

0xdcd1,	// (0x0003cfb7) tb_ext_find_pane_g1

0xdcd9,	// (0x0003cfbf) tb_ext_find_pane_t1

0x8b3e,	// (0x00037e24) tb_ext_find_button_pane_g1

0xdce7,	// (0x0003cfcd) tb_ext_find_button_pane_g2

0x0001,

0xfd5d,	// (0x0003f043) tb_ext_find_button_pane_g

0xda83,	// (0x0003cd69) main_idle_act4_pane_t1_ParamLimits

0xda95,	// (0x0003cd7b) main_idle_act4_pane_t2_ParamLimits

0xfd1b,	// (0x0003f001) main_idle_act4_pane_t_ParamLimits

0xdabd,	// (0x0003cda3) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdacb,	// (0x0003cdb1) sat_plugin_idle_act4_pane_ParamLimits

0xdacb,	// (0x0003cdb1) sat_plugin_idle_act4_pane

0xdcf0,	// (0x0003cfd6) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcf0,	// (0x0003cfd6) sat_plugin_idle_act4_pane_t1

0xdd03,	// (0x0003cfe9) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd03,	// (0x0003cfe9) sat_plugin_idle_act4_pane_t2

0xdd16,	// (0x0003cffc) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd16,	// (0x0003cffc) sat_plugin_idle_act4_pane_t3

0xdd29,	// (0x0003d00f) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd29,	// (0x0003d00f) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd62,	// (0x0003f048) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd62,	// (0x0003f048) sat_plugin_idle_act4_pane_t

0x55f7,	// (0x000348dd) popup_battery_window_ParamLimits

0x55f7,	// (0x000348dd) popup_battery_window

0x23c6,	// (0x000316ac) bg_popup_sub_pane_cp25_ParamLimits

0x23c6,	// (0x000316ac) bg_popup_sub_pane_cp25

0xdd3c,	// (0x0003d022) popup_battery_window_g1_ParamLimits

0xdd3c,	// (0x0003d022) popup_battery_window_g1

0xdd48,	// (0x0003d02e) popup_battery_window_t1_ParamLimits

0xdd48,	// (0x0003d02e) popup_battery_window_t1

0xdd5a,	// (0x0003d040) popup_battery_window_t2_ParamLimits

0xdd5a,	// (0x0003d040) popup_battery_window_t2

0x0001,

0xfd6b,	// (0x0003f051) popup_battery_window_t_ParamLimits

0xfd6b,	// (0x0003f051) popup_battery_window_t

0x916a,	// (0x00038450) midp_canvas_pane_ParamLimits

0x91e2,	// (0x000384c8) midp_keypad_pane_ParamLimits

0x91e2,	// (0x000384c8) midp_keypad_pane

0x947d,	// (0x00038763) main_midp_pane_ParamLimits

0xbadb,	// (0x0003adc1) signal_pane_g2_cp_ParamLimits

0xdd77,	// (0x0003d05d) aid_size_cell_midp_keypad_ParamLimits

0xdd77,	// (0x0003d05d) aid_size_cell_midp_keypad

0xdd91,	// (0x0003d077) midp_keyp_game_grid_pane_ParamLimits

0xdd91,	// (0x0003d077) midp_keyp_game_grid_pane

0xddb1,	// (0x0003d097) midp_keyp_rocker_pane_ParamLimits

0xddb1,	// (0x0003d097) midp_keyp_rocker_pane

0xdde0,	// (0x0003d0c6) midp_keyp_sk_left_pane_ParamLimits

0xdde0,	// (0x0003d0c6) midp_keyp_sk_left_pane

0xde3c,	// (0x0003d122) midp_keyp_sk_right_pane_ParamLimits

0xde3c,	// (0x0003d122) midp_keyp_sk_right_pane

0x2223,	// (0x00031509) bg_button_pane_cp03

0xde98,	// (0x0003d17e) midp_keyp_sk_left_pane_g1

0x2223,	// (0x00031509) bg_button_pane_cp04

0xde98,	// (0x0003d17e) midp_keyp_sk_right_pane_g1

0xbfd4,	// (0x0003b2ba) midp_keyp_rocker_pane_g1

0xdea0,	// (0x0003d186) keyp_game_cell_pane_ParamLimits

0xdea0,	// (0x0003d186) keyp_game_cell_pane

0x2223,	// (0x00031509) bg_button_pane_cp02

0xdeb3,	// (0x0003d199) keyp_game_cell_pane_g1

0x5641,	// (0x00034927) popup_fep_vkb2_window_ParamLimits

0x5641,	// (0x00034927) popup_fep_vkb2_window

0x7f9f,	// (0x00037285) aid_size_cell_vkb2_ParamLimits

0x7f9f,	// (0x00037285) aid_size_cell_vkb2

0x7ff3,	// (0x000372d9) popup_fep_vkb2_window_g1_ParamLimits

0x7ff3,	// (0x000372d9) popup_fep_vkb2_window_g1

0x803b,	// (0x00037321) vkb2_area_bottom_pane_ParamLimits

0x803b,	// (0x00037321) vkb2_area_bottom_pane

0x808f,	// (0x00037375) vkb2_area_keypad_pane_ParamLimits

0x808f,	// (0x00037375) vkb2_area_keypad_pane

0x80d5,	// (0x000373bb) vkb2_area_top_pane_ParamLimits

0x80d5,	// (0x000373bb) vkb2_area_top_pane

0x814f,	// (0x00037435) vkb2_top_entry_pane_ParamLimits

0x814f,	// (0x00037435) vkb2_top_entry_pane

0x8179,	// (0x0003745f) vkb2_top_grid_left_pane_ParamLimits

0x8179,	// (0x0003745f) vkb2_top_grid_left_pane

0x8197,	// (0x0003747d) vkb2_top_grid_right_pane_ParamLimits

0x8197,	// (0x0003747d) vkb2_top_grid_right_pane

0x81b5,	// (0x0003749b) vkb2_cell_keypad_pane_ParamLimits

0x81b5,	// (0x0003749b) vkb2_cell_keypad_pane

0x8286,	// (0x0003756c) vkb2_area_bottom_grid_pane_ParamLimits

0x8286,	// (0x0003756c) vkb2_area_bottom_grid_pane

0x82ac,	// (0x00037592) vkb2_area_bottom_pane_g1_ParamLimits

0x82ac,	// (0x00037592) vkb2_area_bottom_pane_g1

0x82d0,	// (0x000375b6) vkb2_area_bottom_pane_g2_ParamLimits

0x82d0,	// (0x000375b6) vkb2_area_bottom_pane_g2

0x82fe,	// (0x000375e4) vkb2_area_bottom_pane_g3_ParamLimits

0x82fe,	// (0x000375e4) vkb2_area_bottom_pane_g3

0x0002,

0xfd70,	// (0x0003f056) vkb2_area_bottom_pane_g_ParamLimits

0xfd70,	// (0x0003f056) vkb2_area_bottom_pane_g

0x835f,	// (0x00037645) vkb2_top_cell_left_pane_ParamLimits

0x835f,	// (0x00037645) vkb2_top_cell_left_pane

0xdec4,	// (0x0003d1aa) vkb2_top_entry_pane_g1_ParamLimits

0xdec4,	// (0x0003d1aa) vkb2_top_entry_pane_g1

0xded2,	// (0x0003d1b8) vkb2_top_entry_pane_t1_ParamLimits

0xded2,	// (0x0003d1b8) vkb2_top_entry_pane_t1

0xdf04,	// (0x0003d1ea) vkb2_top_entry_pane_t2_ParamLimits

0xdf04,	// (0x0003d1ea) vkb2_top_entry_pane_t2

0xdf36,	// (0x0003d21c) vkb2_top_entry_pane_t3_ParamLimits

0xdf36,	// (0x0003d21c) vkb2_top_entry_pane_t3

0x0002,

0xfd77,	// (0x0003f05d) vkb2_top_entry_pane_t_ParamLimits

0xfd77,	// (0x0003f05d) vkb2_top_entry_pane_t

0x83ac,	// (0x00037692) vkb2_top_grid_right_pane_g1_ParamLimits

0x83ac,	// (0x00037692) vkb2_top_grid_right_pane_g1

0x83c2,	// (0x000376a8) vkb2_top_grid_right_pane_g2_ParamLimits

0x83c2,	// (0x000376a8) vkb2_top_grid_right_pane_g2

0x83da,	// (0x000376c0) vkb2_top_grid_right_pane_g3_ParamLimits

0x83da,	// (0x000376c0) vkb2_top_grid_right_pane_g3

0x83f2,	// (0x000376d8) vkb2_top_grid_right_pane_g4_ParamLimits

0x83f2,	// (0x000376d8) vkb2_top_grid_right_pane_g4

0x0003,

0xfd7e,	// (0x0003f064) vkb2_top_grid_right_pane_g_ParamLimits

0xfd7e,	// (0x0003f064) vkb2_top_grid_right_pane_g

0x8408,	// (0x000376ee) vkb2_top_cell_left_pane_g1

0x841f,	// (0x00037705) vkb2_cell_keypad_pane_g1_ParamLimits

0x841f,	// (0x00037705) vkb2_cell_keypad_pane_g1

0xdf5a,	// (0x0003d240) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf5a,	// (0x0003d240) vkb2_cell_keypad_pane_t1

0x842d,	// (0x00037713) vkb2_cell_bottom_grid_pane_ParamLimits

0x842d,	// (0x00037713) vkb2_cell_bottom_grid_pane

0x8466,	// (0x0003774c) vkb2_cell_bottom_grid_pane_g1

0xdb0b,	// (0x0003cdf1) aid_call2_pane_cp02

0xdb13,	// (0x0003cdf9) aid_call_pane_cp02

0xdb1b,	// (0x0003ce01) clock_digital_number_pane_cp10

0xdb23,	// (0x0003ce09) clock_digital_number_pane_cp11

0xdb2b,	// (0x0003ce11) clock_digital_number_pane_cp12

0xdb33,	// (0x0003ce19) clock_digital_number_pane_cp13

0xdb3b,	// (0x0003ce21) clock_digital_separator_pane_cp10

0x8b3e,	// (0x00037e24) popup_clock_digital_analogue_window_cp2_g1

0x8b3e,	// (0x00037e24) popup_clock_digital_analogue_window_cp2_g2

0xdb43,	// (0x0003ce29) popup_clock_digital_analogue_window_cp2_g3

0x8b3e,	// (0x00037e24) popup_clock_digital_analogue_window_cp2_g4

0xdb43,	// (0x0003ce29) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd33,	// (0x0003f019) popup_clock_digital_analogue_window_cp2_g

0xdb4b,	// (0x0003ce31) popup_clock_digital_analogue_window_cp2_t1

0xdb59,	// (0x0003ce3f) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd3e,	// (0x0003f024) popup_clock_digital_analogue_window_cp2_t

0xbfd4,	// (0x0003b2ba) clock_digital_number_pane_cp10_g1

0xbfd4,	// (0x0003b2ba) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0003ee00) clock_digital_number_pane_cp10_g

0xbfd4,	// (0x0003b2ba) clock_digital_separator_pane_cp10_g1

0xbfd4,	// (0x0003b2ba) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0003ee00) clock_digital_separator_pane_cp10_g

0xd985,	// (0x0003cc6b) uniindi_top_pane_g3

0xd996,	// (0x0003cc7c) uniindi_top_pane_g4

0x8240,	// (0x00037526) vkb2_row_keypad_pane_ParamLimits

0x8240,	// (0x00037526) vkb2_row_keypad_pane

0x8482,	// (0x00037768) vkb2_cell_t_keypad_pane_ParamLimits

0x8482,	// (0x00037768) vkb2_cell_t_keypad_pane

0x8492,	// (0x00037778) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8492,	// (0x00037778) vkb2_cell_t_keypad_pane_cp08

0x84a7,	// (0x0003778d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x84a7,	// (0x0003778d) vkb2_cell_t_keypad_pane_cp09

0x84bb,	// (0x000377a1) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x84bb,	// (0x000377a1) vkb2_cell_t_keypad_pane_cp01

0x84cc,	// (0x000377b2) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x84cc,	// (0x000377b2) vkb2_cell_t_keypad_pane_cp02

0x84dd,	// (0x000377c3) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x84dd,	// (0x000377c3) vkb2_cell_t_keypad_pane_cp03

0x84ee,	// (0x000377d4) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x84ee,	// (0x000377d4) vkb2_cell_t_keypad_pane_cp04

0x84ff,	// (0x000377e5) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x84ff,	// (0x000377e5) vkb2_cell_t_keypad_pane_cp05

0x8510,	// (0x000377f6) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8510,	// (0x000377f6) vkb2_cell_t_keypad_pane_cp06

0x8523,	// (0x00037809) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x8523,	// (0x00037809) vkb2_cell_t_keypad_pane_cp07

0x8538,	// (0x0003781e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8538,	// (0x0003781e) vkb2_cell_t_keypad_pane_cp10

0x7b75,	// (0x00036e5b) vkb2_cell_t_keypad_pane_g1

0xdf71,	// (0x0003d257) vkb2_cell_t_keypad_pane_t1

0x5532,	// (0x00034818) popup_grid_graphic2_window

0xdf83,	// (0x0003d269) aid_size_cell_graphic2_ParamLimits

0xdf83,	// (0x0003d269) aid_size_cell_graphic2

0xdfbb,	// (0x0003d2a1) bg_popup_window_pane_cp21_ParamLimits

0xdfbb,	// (0x0003d2a1) bg_popup_window_pane_cp21

0xdfc9,	// (0x0003d2af) graphic2_pages_pane_ParamLimits

0xdfc9,	// (0x0003d2af) graphic2_pages_pane

0xe00f,	// (0x0003d2f5) grid_graphic2_control_pane_ParamLimits

0xe00f,	// (0x0003d2f5) grid_graphic2_control_pane

0xe04d,	// (0x0003d333) grid_graphic2_pane_ParamLimits

0xe04d,	// (0x0003d333) grid_graphic2_pane

0xe0c3,	// (0x0003d3a9) cell_graphic2_pane

0x5532,	// (0x00034818) main_comp_mode_pane

0xd1cf,	// (0x0003c4b5) list_ai3_gene_pane_ParamLimits

0xd597,	// (0x0003c87d) bg_popup_window_pane_cp19_ParamLimits

0xd5a3,	// (0x0003c889) bg_touch_area_indi_pane_ParamLimits

0xd5a3,	// (0x0003c889) bg_touch_area_indi_pane

0xd5b9,	// (0x0003c89f) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5b9,	// (0x0003c89f) bg_touch_area_indi_pane_cp01

0xd5f0,	// (0x0003c8d6) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5f0,	// (0x0003c8d6) bg_touch_area_indi_pane_cp02

0xd60a,	// (0x0003c8f0) bg_touch_area_indi_pane_cp03_ParamLimits

0xd60a,	// (0x0003c8f0) bg_touch_area_indi_pane_cp03

0xd624,	// (0x0003c90a) popup_slider_window_g1_ParamLimits

0xd640,	// (0x0003c926) popup_slider_window_g2_ParamLimits

0xd65c,	// (0x0003c942) popup_slider_window_g3_ParamLimits

0xfcc8,	// (0x0003efae) popup_slider_window_g_ParamLimits

0xd6c2,	// (0x0003c9a8) popup_slider_window_t1_ParamLimits

0xd736,	// (0x0003ca1c) small_volume_slider_vertical_pane_ParamLimits

0xe0c3,	// (0x0003d3a9) cell_graphic2_pane_ParamLimits

0xe117,	// (0x0003d3fd) bg_button_pane_cp10_ParamLimits

0xe117,	// (0x0003d3fd) bg_button_pane_cp10

0xe12c,	// (0x0003d412) bg_button_pane_cp11_ParamLimits

0xe12c,	// (0x0003d412) bg_button_pane_cp11

0xe141,	// (0x0003d427) graphic2_pages_pane_g1_ParamLimits

0xe141,	// (0x0003d427) graphic2_pages_pane_g1

0xe15c,	// (0x0003d442) graphic2_pages_pane_g2_ParamLimits

0xe15c,	// (0x0003d442) graphic2_pages_pane_g2

0x0001,

0xfd8c,	// (0x0003f072) graphic2_pages_pane_g_ParamLimits

0xfd8c,	// (0x0003f072) graphic2_pages_pane_g

0xe174,	// (0x0003d45a) graphic2_pages_pane_t1_ParamLimits

0xe174,	// (0x0003d45a) graphic2_pages_pane_t1

0xe18a,	// (0x0003d470) cell_graphic2_control_pane_ParamLimits

0xe18a,	// (0x0003d470) cell_graphic2_control_pane

0xe1aa,	// (0x0003d490) cell_graphic2_pane_g1_ParamLimits

0xe1aa,	// (0x0003d490) cell_graphic2_pane_g1

0xe1b7,	// (0x0003d49d) cell_graphic2_pane_g2_ParamLimits

0xe1b7,	// (0x0003d49d) cell_graphic2_pane_g2

0xe1c4,	// (0x0003d4aa) cell_graphic2_pane_g3_ParamLimits

0xe1c4,	// (0x0003d4aa) cell_graphic2_pane_g3

0xe1d1,	// (0x0003d4b7) cell_graphic2_pane_g4_ParamLimits

0xe1d1,	// (0x0003d4b7) cell_graphic2_pane_g4

0xe1de,	// (0x0003d4c4) cell_graphic2_pane_g5_ParamLimits

0xe1de,	// (0x0003d4c4) cell_graphic2_pane_g5

0x0004,

0xfd91,	// (0x0003f077) cell_graphic2_pane_g_ParamLimits

0xfd91,	// (0x0003f077) cell_graphic2_pane_g

0xe1f6,	// (0x0003d4dc) cell_graphic2_pane_t1_ParamLimits

0xe1f6,	// (0x0003d4dc) cell_graphic2_pane_t1

0x9a27,	// (0x00038d0d) grid_highlight_pane_cp11_ParamLimits

0x9a27,	// (0x00038d0d) grid_highlight_pane_cp11

0x23c6,	// (0x000316ac) bg_button_pane_cp05

0xe22c,	// (0x0003d512) cell_graphic2_control_pane_g1

0xbfd4,	// (0x0003b2ba) bg_touch_area_indi_pane_g1

0xe254,	// (0x0003d53a) aid_cmod_rocker_key_size

0xe25e,	// (0x0003d544) aid_cmode_itu_key_size

0xe268,	// (0x0003d54e) main_cmode_video_pane

0xe272,	// (0x0003d558) main_comp_mode_itu_pane

0xe27e,	// (0x0003d564) main_comp_mode_rocker_pane

0xe28a,	// (0x0003d570) cell_cmode_rocker_pane_ParamLimits

0xe28a,	// (0x0003d570) cell_cmode_rocker_pane

0xe29e,	// (0x0003d584) cell_cmode_itu_pane_ParamLimits

0xe29e,	// (0x0003d584) cell_cmode_itu_pane

0x28d5,	// (0x00031bbb) bg_button_pane_cp06_ParamLimits

0x28d5,	// (0x00031bbb) bg_button_pane_cp06

0xc24f,	// (0x0003b535) cell_cmode_rocker_pane_g1_ParamLimits

0xc24f,	// (0x0003b535) cell_cmode_rocker_pane_g1

0xd7dd,	// (0x0003cac3) cell_cmode_rocker_pane_g2_ParamLimits

0xd7dd,	// (0x0003cac3) cell_cmode_rocker_pane_g2

0x0001,

0xfda1,	// (0x0003f087) cell_cmode_rocker_pane_g_ParamLimits

0xfda1,	// (0x0003f087) cell_cmode_rocker_pane_g

0x2223,	// (0x00031509) bg_button_pane_cp07

0xe2b5,	// (0x0003d59b) cell_cmode_itu_pane_g1

0xe2be,	// (0x0003d5a4) cell_cmode_itu_pane_t1

0xe2cc,	// (0x0003d5b2) cell_cmode_itu_pane_t2

0x0001,

0xfda6,	// (0x0003f08c) cell_cmode_itu_pane_t

0xda0a,	// (0x0003ccf0) aid_touch_ctrl_left

0xda12,	// (0x0003ccf8) aid_touch_ctrl_right

0x2223,	// (0x00031509) compa_mode_pane

0xe2da,	// (0x0003d5c0) aid_cmod_rocker_key_size_cp

0xe2e4,	// (0x0003d5ca) aid_cmode_itu_key_size_cp

0xe2ee,	// (0x0003d5d4) compa_mode_pane_g1

0xe2f6,	// (0x0003d5dc) compa_mode_pane_g2

0xe2fe,	// (0x0003d5e4) compa_mode_pane_g3

0x0002,

0xfdab,	// (0x0003f091) compa_mode_pane_g

0xe306,	// (0x0003d5ec) main_comp_mode_itu_pane_cp

0xe30e,	// (0x0003d5f4) main_comp_mode_rocker_pane_cp

0xe316,	// (0x0003d5fc) cell_cmode_itu_pane_cp_ParamLimits

0xe316,	// (0x0003d5fc) cell_cmode_itu_pane_cp

0xe32b,	// (0x0003d611) cell_cmode_rocker_pane_cp_ParamLimits

0xe32b,	// (0x0003d611) cell_cmode_rocker_pane_cp

0x28d5,	// (0x00031bbb) bg_button_pane_cp06_cp_ParamLimits

0x28d5,	// (0x00031bbb) bg_button_pane_cp06_cp

0xc24f,	// (0x0003b535) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc24f,	// (0x0003b535) cell_cmode_rocker_pane_g1_cp

0xbfd4,	// (0x0003b2ba) cell_cmode_rocker_pane_g2_cp

0x2223,	// (0x00031509) bg_button_pane_cp07_cp

0xe33d,	// (0x0003d623) cell_cmode_itu_pane_g1_cp

0xe346,	// (0x0003d62c) cell_cmode_itu_pane_t1_cp

0xe346,	// (0x0003d62c) cell_cmode_itu_pane_t2_cp

0xaefe,	// (0x0003a1e4) settings_code_pane_cp2

0x2293,	// (0x00031579) bg_popup_window_pane_cp3_ParamLimits

0x25da,	// (0x000318c0) heading_pane_cp3_ParamLimits

0x25e9,	// (0x000318cf) listscroll_popup_graphic_pane_ParamLimits

0x7908,	// (0x00036bee) fep_hwr_aid_pane_ParamLimits

0x7ef8,	// (0x000371de) aid_touch_sctrl_top_ParamLimits

0x7f13,	// (0x000371f9) sctrl_sk_top_pane_g1_ParamLimits

0x7b75,	// (0x00036e5b) sctrl_sk_top_pane_g2_ParamLimits

0xfce1,	// (0x0003efc7) sctrl_sk_top_pane_g_ParamLimits

0x7f20,	// (0x00037206) sctrl_sk_top_pane_t1_ParamLimits

0x7ef8,	// (0x000371de) aid_touch_sctrl_bottom_ParamLimits

0x7f20,	// (0x00037206) sctrl_sk_bottom_pane_t1_ParamLimits

0xd94f,	// (0x0003cc35) aid_area_touch_clock

0x8117,	// (0x000373fd) aid_vkb2_area_top_pane_cell_ParamLimits

0x8117,	// (0x000373fd) aid_vkb2_area_top_pane_cell

0x8262,	// (0x00037548) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8262,	// (0x00037548) aid_vkb2_area_bottom_pane_cell

0xdebc,	// (0x0003d1a2) popup_char_count_window

0xe354,	// (0x0003d63a) popup_char_count_window_g1

0xe35d,	// (0x0003d643) popup_char_count_window_g2

0xe366,	// (0x0003d64c) popup_char_count_window_g3

0x0002,

0xfdb2,	// (0x0003f098) popup_char_count_window_g

0xe36f,	// (0x0003d655) popup_char_count_window_t1

0x7fd1,	// (0x000372b7) popup_fep_char_preview_window_ParamLimits

0x7fd1,	// (0x000372b7) popup_fep_char_preview_window

0x8135,	// (0x0003741b) vkb2_top_candi_pane_ParamLimits

0x8135,	// (0x0003741b) vkb2_top_candi_pane

0xe37d,	// (0x0003d663) cell_vkb2_top_candi_pane_ParamLimits

0xe37d,	// (0x0003d663) cell_vkb2_top_candi_pane

0x854d,	// (0x00037833) bg_popup_fep_char_preview_window_ParamLimits

0x854d,	// (0x00037833) bg_popup_fep_char_preview_window

0x855b,	// (0x00037841) popup_fep_char_preview_window_t1_ParamLimits

0x855b,	// (0x00037841) popup_fep_char_preview_window_t1

0xe3ce,	// (0x0003d6b4) bg_popup_fep_char_preview_window_g1

0xe3d6,	// (0x0003d6bc) bg_popup_fep_char_preview_window_g2

0xe3de,	// (0x0003d6c4) bg_popup_fep_char_preview_window_g3

0xe3e6,	// (0x0003d6cc) bg_popup_fep_char_preview_window_g4

0xe3ee,	// (0x0003d6d4) bg_popup_fep_char_preview_window_g5

0xe3f6,	// (0x0003d6dc) bg_popup_fep_char_preview_window_g6

0xe3fe,	// (0x0003d6e4) bg_popup_fep_char_preview_window_g7

0xe406,	// (0x0003d6ec) bg_popup_fep_char_preview_window_g8

0xe40e,	// (0x0003d6f4) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb9,	// (0x0003f09f) bg_popup_fep_char_preview_window_g

0x7b75,	// (0x00036e5b) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7b75,	// (0x00036e5b) cell_vkb2_top_candi_pane_g1

0x7b83,	// (0x00036e69) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7b83,	// (0x00036e69) cell_vkb2_top_candi_pane_g2

0xd5cf,	// (0x0003c8b5) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd5cf,	// (0x0003c8b5) cell_vkb2_top_candi_pane_g3

0x859d,	// (0x00037883) cell_vkb2_top_candi_pane_g4_ParamLimits

0x859d,	// (0x00037883) cell_vkb2_top_candi_pane_g4

0xc76e,	// (0x0003ba54) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc76e,	// (0x0003ba54) cell_vkb2_top_candi_pane_g5

0x85be,	// (0x000378a4) cell_vkb2_top_candi_pane_g6_ParamLimits

0x85be,	// (0x000378a4) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdce,	// (0x0003f0b4) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdce,	// (0x0003f0b4) cell_vkb2_top_candi_pane_g

0x85cc,	// (0x000378b2) cell_vkb2_top_candi_pane_t1

0x76c5,	// (0x000369ab) aid_size_touch_slider_mark_ParamLimits

0x76c5,	// (0x000369ab) aid_size_touch_slider_mark

0xdfff,	// (0x0003d2e5) grid_graphic2_catg_pane_ParamLimits

0xdfff,	// (0x0003d2e5) grid_graphic2_catg_pane

0xe09d,	// (0x0003d383) popup_grid_graphic2_window_t1_ParamLimits

0xe09d,	// (0x0003d383) popup_grid_graphic2_window_t1

0xe0af,	// (0x0003d395) popup_grid_graphic2_window_t2_ParamLimits

0xe0af,	// (0x0003d395) popup_grid_graphic2_window_t2

0x0001,

0xfd87,	// (0x0003f06d) popup_grid_graphic2_window_t_ParamLimits

0xfd87,	// (0x0003f06d) popup_grid_graphic2_window_t

0x23c6,	// (0x000316ac) bg_button_pane_cp05_ParamLimits

0xe22c,	// (0x0003d512) cell_graphic2_control_pane_g1_ParamLimits

0xe416,	// (0x0003d6fc) cell_graphic2_catg_pane_ParamLimits

0xe416,	// (0x0003d6fc) cell_graphic2_catg_pane

0x2223,	// (0x00031509) bg_button_pane_cp12

0xe428,	// (0x0003d70e) cell_graphic2_catg_pane_g1

0xd91b,	// (0x0003cc01) cell_tb_ext_pane_t1_ParamLimits

0x837f,	// (0x00037665) vkb2_top_cell_right_narrow_pane_ParamLimits

0x837f,	// (0x00037665) vkb2_top_cell_right_narrow_pane

0x8397,	// (0x0003767d) vkb2_top_cell_right_wide_pane_ParamLimits

0x8397,	// (0x0003767d) vkb2_top_cell_right_wide_pane

0x78fa,	// (0x00036be0) bg_vkb2_func_pane_ParamLimits

0x78fa,	// (0x00036be0) bg_vkb2_func_pane

0x8408,	// (0x000376ee) vkb2_top_cell_left_pane_g1_ParamLimits

0x78fa,	// (0x00036be0) bg_vkb2_fuc_pane_cp03_ParamLimits

0x78fa,	// (0x00036be0) bg_vkb2_fuc_pane_cp03

0x8466,	// (0x0003774c) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x99bb,	// (0x00038ca1) bg_vkb2_func_pane_g1

0x99c3,	// (0x00038ca9) bg_vkb2_func_pane_g2

0x99d3,	// (0x00038cb9) bg_vkb2_func_pane_g3

0x99cb,	// (0x00038cb1) bg_vkb2_func_pane_g4

0x99db,	// (0x00038cc1) bg_vkb2_func_pane_g5

0x99e3,	// (0x00038cc9) bg_vkb2_func_pane_g6

0x99eb,	// (0x00038cd1) bg_vkb2_func_pane_g7

0x99f3,	// (0x00038cd9) bg_vkb2_func_pane_g8

0x99b3,	// (0x00038c99) bg_vkb2_func_pane_g9

0x0008,

0xfddb,	// (0x0003f0c1) bg_vkb2_func_pane_g

0x78fa,	// (0x00036be0) bg_vkb2_fuc_pane_cp01_ParamLimits

0x78fa,	// (0x00036be0) bg_vkb2_fuc_pane_cp01

0x8408,	// (0x000376ee) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8408,	// (0x000376ee) vkb2_top_cell_right_wide_pane_g1

0x78fa,	// (0x00036be0) bg_vkb2_fuc_pane_cp02_ParamLimits

0x78fa,	// (0x00036be0) bg_vkb2_fuc_pane_cp02

0x8466,	// (0x0003774c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8466,	// (0x0003774c) vkb2_top_cell_right_narrow_pane_g1

0xd511,	// (0x0003c7f7) aid_touch_area_decrease_ParamLimits

0xd511,	// (0x0003c7f7) aid_touch_area_decrease

0xd535,	// (0x0003c81b) aid_touch_area_increase_ParamLimits

0xd535,	// (0x0003c81b) aid_touch_area_increase

0xd54d,	// (0x0003c833) aid_touch_area_mute_ParamLimits

0xd54d,	// (0x0003c833) aid_touch_area_mute

0xd569,	// (0x0003c84f) aid_touch_area_slider_ParamLimits

0xd569,	// (0x0003c84f) aid_touch_area_slider

0xd678,	// (0x0003c95e) popup_slider_window_g4_ParamLimits

0xd678,	// (0x0003c95e) popup_slider_window_g4

0xd690,	// (0x0003c976) popup_slider_window_g5_ParamLimits

0xd690,	// (0x0003c976) popup_slider_window_g5

0xd6b2,	// (0x0003c998) popup_slider_window_g6_ParamLimits

0xd6b2,	// (0x0003c998) popup_slider_window_g6

0xd6f0,	// (0x0003c9d6) popup_slider_window_t2_ParamLimits

0xd6f0,	// (0x0003c9d6) popup_slider_window_t2

0x0001,

0xfcd5,	// (0x0003efbb) popup_slider_window_t_ParamLimits

0xfcd5,	// (0x0003efbb) popup_slider_window_t

0xd708,	// (0x0003c9ee) slider_pane_ParamLimits

0xd708,	// (0x0003c9ee) slider_pane

0xe431,	// (0x0003d717) slider_pane_g1_ParamLimits

0xe431,	// (0x0003d717) slider_pane_g1

0xe445,	// (0x0003d72b) slider_pane_g2_ParamLimits

0xe445,	// (0x0003d72b) slider_pane_g2

0xe45b,	// (0x0003d741) slider_pane_g3_ParamLimits

0xe45b,	// (0x0003d741) slider_pane_g3

0x0003,

0xfdee,	// (0x0003f0d4) slider_pane_g_ParamLimits

0xfdee,	// (0x0003f0d4) slider_pane_g

0x726f,	// (0x00036555) popup_tb_float_extension_window_ParamLimits

0x726f,	// (0x00036555) popup_tb_float_extension_window

0xe487,	// (0x0003d76d) aid_size_cell_tb_float_ext

0x2223,	// (0x00031509) bg_popup_sub_window_cp28

0xe493,	// (0x0003d779) grid_tb_float_ext_pane

0xe49f,	// (0x0003d785) cell_tb_float_ext_pane_ParamLimits

0xe49f,	// (0x0003d785) cell_tb_float_ext_pane

0xe4bb,	// (0x0003d7a1) cell_tb_float_ext_pane_g1

0xe4c4,	// (0x0003d7aa) grid_highlight_pane_cp12

0x7a4f,	// (0x00036d35) cell_last_hwr_side_pane_ParamLimits

0x7a4f,	// (0x00036d35) cell_last_hwr_side_pane

0xbfd4,	// (0x0003b2ba) cell_last_hwr_side_pane_g1

0xe4cd,	// (0x0003d7b3) cell_last_hwr_side_pane_g2

0x0001,

0xfdf7,	// (0x0003f0dd) cell_last_hwr_side_pane_g

0x832e,	// (0x00037614) vkb2_area_bottom_space_btn_pane_ParamLimits

0x832e,	// (0x00037614) vkb2_area_bottom_space_btn_pane

0x7b75,	// (0x00036e5b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf71,	// (0x0003d257) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x85cc,	// (0x000378b2) cell_vkb2_top_candi_pane_t1_ParamLimits

0x85ea,	// (0x000378d0) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x85ea,	// (0x000378d0) vkb2_area_bottom_space_btn_pane_g1

0x8624,	// (0x0003790a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8624,	// (0x0003790a) vkb2_area_bottom_space_btn_pane_g2

0x865a,	// (0x00037940) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x865a,	// (0x00037940) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdfc,	// (0x0003f0e2) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdfc,	// (0x0003f0e2) vkb2_area_bottom_space_btn_pane_g

0x79bf,	// (0x00036ca5) cel_fep_hwr_func_pane_ParamLimits

0x79bf,	// (0x00036ca5) cel_fep_hwr_func_pane

0x79fb,	// (0x00036ce1) cell_hwr_side_button_pane_ParamLimits

0x79fb,	// (0x00036ce1) cell_hwr_side_button_pane

0xd94f,	// (0x0003cc35) aid_area_touch_clock_ParamLimits

0x23c6,	// (0x000316ac) bg_uniindi_top_pane_ParamLimits

0xd963,	// (0x0003cc49) uniindi_top_pane_g1_ParamLimits

0xd979,	// (0x0003cc5f) uniindi_top_pane_g2_ParamLimits

0xd985,	// (0x0003cc6b) uniindi_top_pane_g3_ParamLimits

0xd996,	// (0x0003cc7c) uniindi_top_pane_g4_ParamLimits

0xfd0d,	// (0x0003eff3) uniindi_top_pane_g_ParamLimits

0xd9a3,	// (0x0003cc89) uniindi_top_pane_t1_ParamLimits

0x23c6,	// (0x000316ac) bg_vkb2_func_pane_cp01_ParamLimits

0x23c6,	// (0x000316ac) bg_vkb2_func_pane_cp01

0xe4d6,	// (0x0003d7bc) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4d6,	// (0x0003d7bc) cel_fep_hwr_func_pane_g1

0x23c6,	// (0x000316ac) bg_vkb2_func_pane_cp02_ParamLimits

0x23c6,	// (0x000316ac) bg_vkb2_func_pane_cp02

0xe4d6,	// (0x0003d7bc) cell_hwr_side_button_pane_g1_ParamLimits

0xe4d6,	// (0x0003d7bc) cell_hwr_side_button_pane_g1

0x9838,	// (0x00038b1e) status_pane_g4_ParamLimits

0x9838,	// (0x00038b1e) status_pane_g4

0x9852,	// (0x00038b38) status_pane_t1

0xbd87,	// (0x0003b06d) form2_midp_gauge_slider_cont_pane

0xbd8f,	// (0x0003b075) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbda1,	// (0x0003b087) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbdb3,	// (0x0003b099) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacd,	// (0x0003edb3) form2_midp_gauge_slider_pane_t_ParamLimits

0xbdc5,	// (0x0003b0ab) form2_midp_slider_pane_ParamLimits

0x7f91,	// (0x00037277) aid_size_cell_func_vkb2_ParamLimits

0x7f91,	// (0x00037277) aid_size_cell_func_vkb2

0xe473,	// (0x0003d759) slider_pane_g4_ParamLimits

0xe473,	// (0x0003d759) slider_pane_g4

0x86a4,	// (0x0003798a) form2_midp_gauge_slider_pane_t2_cp01

0x86b2,	// (0x00037998) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x86b2,	// (0x00037998) form2_midp_gauge_slider_pane_t3_cp01

0x86cf,	// (0x000379b5) form2_midp_slider_pane_cp01

0x2223,	// (0x00031509) navi_smil_pane

0xe50f,	// (0x0003d7f5) navi_smil_pane_g1

0xe517,	// (0x0003d7fd) navi_smil_pane_t1

0xe4e4,	// (0x0003d7ca) form2_midp_slider_pane_g1

0xe4ed,	// (0x0003d7d3) form2_midp_slider_pane_g2

0xe4f5,	// (0x0003d7db) form2_midp_slider_pane_g3

0xe4e4,	// (0x0003d7ca) form2_midp_slider_pane_g4

0xe4fd,	// (0x0003d7e3) form2_midp_slider_pane_g5

0x0004,

0xfe05,	// (0x0003f0eb) form2_midp_slider_pane_g

0x8694,	// (0x0003797a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8694,	// (0x0003797a) vkb2_area_bottom_space_btn_pane_g4

0x9657,	// (0x0003893d) lc0_navi_pane_ParamLimits

0x9657,	// (0x0003893d) lc0_navi_pane

0x96d3,	// (0x000389b9) lc0_stat_indi_pane_ParamLimits

0x96d3,	// (0x000389b9) lc0_stat_indi_pane

0x96ea,	// (0x000389d0) ls0_title_pane_ParamLimits

0x96ea,	// (0x000389d0) ls0_title_pane

0x28d5,	// (0x00031bbb) bg_popup_sub_pane_cp14_ParamLimits

0xd936,	// (0x0003cc1c) list_uniindi_pane_ParamLimits

0xd942,	// (0x0003cc28) uniindi_top_pane_ParamLimits

0xd9e2,	// (0x0003ccc8) list_single_uniindi_pane_g1_ParamLimits

0xd9f5,	// (0x0003ccdb) list_single_uniindi_pane_t1_ParamLimits

0x86d8,	// (0x000379be) lc0_stat_clock_pane_ParamLimits

0x86d8,	// (0x000379be) lc0_stat_clock_pane

0xe525,	// (0x0003d80b) lc0_stat_indi_pane_g1_ParamLimits

0xe525,	// (0x0003d80b) lc0_stat_indi_pane_g1

0xe532,	// (0x0003d818) lc0_stat_indi_pane_g2_ParamLimits

0xe532,	// (0x0003d818) lc0_stat_indi_pane_g2

0x0001,

0xfe10,	// (0x0003f0f6) lc0_stat_indi_pane_g_ParamLimits

0xfe10,	// (0x0003f0f6) lc0_stat_indi_pane_g

0x86e5,	// (0x000379cb) lc0_uni_indicator_pane_ParamLimits

0x86e5,	// (0x000379cb) lc0_uni_indicator_pane

0xe53f,	// (0x0003d825) ls0_title_pane_g1_ParamLimits

0xe53f,	// (0x0003d825) ls0_title_pane_g1

0xe553,	// (0x0003d839) ls0_title_pane_t1_ParamLimits

0xe553,	// (0x0003d839) ls0_title_pane_t1

0x86f2,	// (0x000379d8) lc0_uni_indicator_pane_g1_ParamLimits

0x86f2,	// (0x000379d8) lc0_uni_indicator_pane_g1

0xe589,	// (0x0003d86f) lc0_stat_clock_pane_t1

0x5532,	// (0x00034818) main_ai5_pane

0xe597,	// (0x0003d87d) ai5_sk_pane_ParamLimits

0xe597,	// (0x0003d87d) ai5_sk_pane

0xe5a4,	// (0x0003d88a) cell_ai5_widget_pane_ParamLimits

0xe5a4,	// (0x0003d88a) cell_ai5_widget_pane

0xe647,	// (0x0003d92d) aid_size_cell_widget_grid

0xe655,	// (0x0003d93b) bg_ai5_widget_pane_ParamLimits

0xe655,	// (0x0003d93b) bg_ai5_widget_pane

0xe6d1,	// (0x0003d9b7) cell_ai5_widget_pane_g2

0xe6e5,	// (0x0003d9cb) cell_ai5_widget_pane_g3

0xe6ff,	// (0x0003d9e5) cell_ai5_widget_pane_g4

0xe70f,	// (0x0003d9f5) cell_ai5_widget_pane_g5

0xe71f,	// (0x0003da05) cell_ai5_widget_pane_g6

0xe72b,	// (0x0003da11) cell_ai5_widget_pane_g7

0xe797,	// (0x0003da7d) cell_ai5_widget_pane_t1_ParamLimits

0xe797,	// (0x0003da7d) cell_ai5_widget_pane_t1

0xe7b4,	// (0x0003da9a) cell_ai5_widget_pane_t2_ParamLimits

0xe7b4,	// (0x0003da9a) cell_ai5_widget_pane_t2

0xe7cc,	// (0x0003dab2) cell_ai5_widget_pane_t3_ParamLimits

0xe7cc,	// (0x0003dab2) cell_ai5_widget_pane_t3

0xe7e4,	// (0x0003daca) cell_ai5_widget_pane_t4_ParamLimits

0xe7e4,	// (0x0003daca) cell_ai5_widget_pane_t4

0xe80a,	// (0x0003daf0) cell_ai5_widget_pane_t5_ParamLimits

0xe80a,	// (0x0003daf0) cell_ai5_widget_pane_t5

0xe82a,	// (0x0003db10) cell_ai5_widget_pane_t6_ParamLimits

0xe82a,	// (0x0003db10) cell_ai5_widget_pane_t6

0xe83c,	// (0x0003db22) cell_ai5_widget_pane_t7_ParamLimits

0xe83c,	// (0x0003db22) cell_ai5_widget_pane_t7

0xe85b,	// (0x0003db41) cell_ai5_widget_pane_t8_ParamLimits

0xe85b,	// (0x0003db41) cell_ai5_widget_pane_t8

0x000b,

0xfe30,	// (0x0003f116) cell_ai5_widget_pane_t_ParamLimits

0xfe30,	// (0x0003f116) cell_ai5_widget_pane_t

0xe8df,	// (0x0003dbc5) grid_ai5_widget_pane

0x28d5,	// (0x00031bbb) highlight_cell_ai5_widget_pane_ParamLimits

0x28d5,	// (0x00031bbb) highlight_cell_ai5_widget_pane

0xe8ed,	// (0x0003dbd3) ai5_sk_left_pane

0xe8f7,	// (0x0003dbdd) ai5_sk_middle_pane

0xe901,	// (0x0003dbe7) ai5_sk_right_pane

0xe90b,	// (0x0003dbf1) bg_ai5_widget_pane_g1_ParamLimits

0xe90b,	// (0x0003dbf1) bg_ai5_widget_pane_g1

0xe917,	// (0x0003dbfd) bg_ai5_widget_pane_g2_ParamLimits

0xe917,	// (0x0003dbfd) bg_ai5_widget_pane_g2

0xe923,	// (0x0003dc09) bg_ai5_widget_pane_g3_ParamLimits

0xe923,	// (0x0003dc09) bg_ai5_widget_pane_g3

0xe92f,	// (0x0003dc15) bg_ai5_widget_pane_g4_ParamLimits

0xe92f,	// (0x0003dc15) bg_ai5_widget_pane_g4

0xe93b,	// (0x0003dc21) bg_ai5_widget_pane_g5_ParamLimits

0xe93b,	// (0x0003dc21) bg_ai5_widget_pane_g5

0xe947,	// (0x0003dc2d) bg_ai5_widget_pane_g6_ParamLimits

0xe947,	// (0x0003dc2d) bg_ai5_widget_pane_g6

0xe953,	// (0x0003dc39) bg_ai5_widget_pane_g7_ParamLimits

0xe953,	// (0x0003dc39) bg_ai5_widget_pane_g7

0xe95f,	// (0x0003dc45) bg_ai5_widget_pane_g8_ParamLimits

0xe95f,	// (0x0003dc45) bg_ai5_widget_pane_g8

0xe96b,	// (0x0003dc51) bg_ai5_widget_pane_g9_ParamLimits

0xe96b,	// (0x0003dc51) bg_ai5_widget_pane_g9

0x0008,

0xfe49,	// (0x0003f12f) bg_ai5_widget_pane_g_ParamLimits

0xfe49,	// (0x0003f12f) bg_ai5_widget_pane_g

0xe9a3,	// (0x0003dc89) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9a3,	// (0x0003dc89) cell_shortcut_ai5_widget_pane

0x9156,	// (0x0003843c) bg_cell_shortcut_ai5_widget_pane

0xe9b6,	// (0x0003dc9c) cell_grid_ai5_widget_pane_g1

0x9156,	// (0x0003843c) highlight_cell_shortcut_ai5_widget_pane

0x99bb,	// (0x00038ca1) ai5_sk_left_pane_g1

0xe9bf,	// (0x0003dca5) ai5_sk_left_pane_g2

0xe9c7,	// (0x0003dcad) ai5_sk_left_pane_g3

0xe9cf,	// (0x0003dcb5) ai5_sk_left_pane_g4

0x0003,

0xfe5c,	// (0x0003f142) ai5_sk_left_pane_g

0xe9d7,	// (0x0003dcbd) ai5_sk_left_pane_t1

0x99c3,	// (0x00038ca9) ai5_sk_right_pane_g1

0xe9e5,	// (0x0003dccb) ai5_sk_right_pane_g2

0xe9ed,	// (0x0003dcd3) ai5_sk_right_pane_g3

0xe9f5,	// (0x0003dcdb) ai5_sk_right_pane_g4

0x0003,

0xfe65,	// (0x0003f14b) ai5_sk_right_pane_g

0xe9fd,	// (0x0003dce3) ai5_sk_right_pane_t1

0x99c3,	// (0x00038ca9) ai5_sk_middle_pane_g1

0x99bb,	// (0x00038ca1) ai5_sk_middle_pane_g2

0x99db,	// (0x00038cc1) ai5_sk_middle_pane_g3

0xe9ed,	// (0x0003dcd3) ai5_sk_middle_pane_g4

0xe9c7,	// (0x0003dcad) ai5_sk_middle_pane_g5

0xea0b,	// (0x0003dcf1) ai5_sk_middle_pane_g6

0xea13,	// (0x0003dcf9) ai5_sk_middle_pane_g7

0x0006,

0xfe6e,	// (0x0003f154) ai5_sk_middle_pane_g

0x94dd,	// (0x000387c3) aid_touch_area_size_lc0_ParamLimits

0x94dd,	// (0x000387c3) aid_touch_area_size_lc0

0x7ba4,	// (0x00036e8a) cell_hwr_candidate_pane_t1_ParamLimits

0x94fb,	// (0x000387e1) aid_touch_navi_pane

0x97ea,	// (0x00038ad0) status_dt_navi_pane_ParamLimits

0x97ea,	// (0x00038ad0) status_dt_navi_pane

0x97f7,	// (0x00038add) status_dt_sta_pane_ParamLimits

0x97f7,	// (0x00038add) status_dt_sta_pane

0xea1b,	// (0x0003dd01) dt_sta_controll_pane

0xea28,	// (0x0003dd0e) dt_sta_indi_pane

0xea39,	// (0x0003dd1f) dt_sta_title_pane

0x23c6,	// (0x000316ac) bg_dt_sta_indi_pane_ParamLimits

0x23c6,	// (0x000316ac) bg_dt_sta_indi_pane

0xea4c,	// (0x0003dd32) dt_sta_battery_pane

0xea54,	// (0x0003dd3a) dt_sta_indi_pane_g1

0xea5d,	// (0x0003dd43) dt_sta_indi_pane_g2

0xea66,	// (0x0003dd4c) dt_sta_indi_pane_g3

0x0002,

0xfe7d,	// (0x0003f163) dt_sta_indi_pane_g

0xea6f,	// (0x0003dd55) dt_sta_signal_pane

0x28d5,	// (0x00031bbb) bg_dt_sta_title_pane_ParamLimits

0x28d5,	// (0x00031bbb) bg_dt_sta_title_pane

0xea78,	// (0x0003dd5e) dt_sta_title_pane_g1

0xea80,	// (0x0003dd66) dt_sta_title_pane_t1_ParamLimits

0xea80,	// (0x0003dd66) dt_sta_title_pane_t1

0x2223,	// (0x00031509) bg_dt_sta_control_pane

0xea95,	// (0x0003dd7b) dt_sta_controll_pane_g1

0xea9e,	// (0x0003dd84) bg_dt_sta_title_pane_g1

0xeaa7,	// (0x0003dd8d) bg_dt_sta_title_pane_g2

0xeab0,	// (0x0003dd96) bg_dt_sta_title_pane_g3

0x0002,

0xfe84,	// (0x0003f16a) bg_dt_sta_title_pane_g

0xbfd4,	// (0x0003b2ba) bg_dt_sta_indi_pane_g1

0xeab9,	// (0x0003dd9f) dt_sta_signal_pane_g1

0xeac1,	// (0x0003dda7) dt_sta_signal_pane_g2

0x0001,

0xfe8b,	// (0x0003f171) dt_sta_signal_pane_g

0xeac9,	// (0x0003ddaf) dt_sta_battery_pane_g1

0xead2,	// (0x0003ddb8) dt_sta_battery_pane_t1

0xbfd4,	// (0x0003b2ba) bg_dt_sta_control_pane_g1

0x8c48,	// (0x00037f2e) fep_china_uni_eep_pane

0x8c50,	// (0x00037f36) fep_china_uni_entry_pane_ParamLimits

0x8c60,	// (0x00037f46) popup_fep_china_uni_window_g1_ParamLimits

0x8c70,	// (0x00037f56) popup_fep_china_uni_window_g2_ParamLimits

0x8c70,	// (0x00037f56) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x0003e9de) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x0003e9de) popup_fep_china_uni_window_g

0xeae1,	// (0x0003ddc7) fep_china_uni_eep_pane_g1

0xeae9,	// (0x0003ddcf) fep_china_uni_eep_pane_t1

0xe506,	// (0x0003d7ec) aid_touch_area_size_smil_player

0x964f,	// (0x00038935) lc0_clock_pane

0x9846,	// (0x00038b2c) status_pane_g5_ParamLimits

0x9846,	// (0x00038b2c) status_pane_g5

0x6ef4,	// (0x000361da) popup_keymap_window

0x980c,	// (0x00038af2) status_icon_pane

0xe6e5,	// (0x0003d9cb) cell_ai5_widget_pane_g3_ParamLimits

0xe6ff,	// (0x0003d9e5) cell_ai5_widget_pane_g4_ParamLimits

0xe70f,	// (0x0003d9f5) cell_ai5_widget_pane_g5_ParamLimits

0xe737,	// (0x0003da1d) cell_ai5_widget_pane_g8_ParamLimits

0xe737,	// (0x0003da1d) cell_ai5_widget_pane_g8

0xe74b,	// (0x0003da31) cell_ai5_widget_pane_g9_ParamLimits

0xe74b,	// (0x0003da31) cell_ai5_widget_pane_g9

0xe75f,	// (0x0003da45) cell_ai5_widget_pane_g10_ParamLimits

0xe75f,	// (0x0003da45) cell_ai5_widget_pane_g10

0xeaf8,	// (0x0003ddde) status_icon_pane_g1

0x2223,	// (0x00031509) bg_popup_sub_pane_cp13

0xeb00,	// (0x0003dde6) popup_keymap_window_t1

0x942e,	// (0x00038714) control_pane_g6_ParamLimits

0x942e,	// (0x00038714) control_pane_g6

0x943b,	// (0x00038721) control_pane_g7_ParamLimits

0x943b,	// (0x00038721) control_pane_g7

0x9448,	// (0x0003872e) control_pane_g8_ParamLimits

0x9448,	// (0x0003872e) control_pane_g8

0xea1b,	// (0x0003dd01) dt_sta_controll_pane_ParamLimits

0xea28,	// (0x0003dd0e) dt_sta_indi_pane_ParamLimits

0xea39,	// (0x0003dd1f) dt_sta_title_pane_ParamLimits

0x2817,	// (0x00031afd) aid_size_touch_scroll_bar_cale

0x560f,	// (0x000348f5) popup_discreet_window_ParamLimits

0x560f,	// (0x000348f5) popup_discreet_window

0x569d,	// (0x00034983) popup_sk_window

0xa019,	// (0x000392ff) bg_popup_sub_pane_cp28_ParamLimits

0xa019,	// (0x000392ff) bg_popup_sub_pane_cp28

0xeb0e,	// (0x0003ddf4) popup_discreet_window_g1_ParamLimits

0xeb0e,	// (0x0003ddf4) popup_discreet_window_g1

0xeb2e,	// (0x0003de14) popup_discreet_window_t1_ParamLimits

0xeb2e,	// (0x0003de14) popup_discreet_window_t1

0xeb4c,	// (0x0003de32) popup_discreet_window_t2_ParamLimits

0xeb4c,	// (0x0003de32) popup_discreet_window_t2

0x0002,

0xfe90,	// (0x0003f176) popup_discreet_window_t_ParamLimits

0xfe90,	// (0x0003f176) popup_discreet_window_t

0x8705,	// (0x000379eb) popup_sk_window_g1

0x870f,	// (0x000379f5) popup_sk_window_g2

0x0001,

0xfe97,	// (0x0003f17d) popup_sk_window_g

0x8717,	// (0x000379fd) popup_sk_window_t1

0x8725,	// (0x00037a0b) popup_sk_window_t1_copy1

0xe6d1,	// (0x0003d9b7) cell_ai5_widget_pane_g2_ParamLimits

0xe86d,	// (0x0003db53) cell_ai5_widget_pane_t9_ParamLimits

0xe86d,	// (0x0003db53) cell_ai5_widget_pane_t9

0x2223,	// (0x00031509) main_fep_fshwr2_pane

0x8733,	// (0x00037a19) aid_fshwr2_btn_pane

0x873f,	// (0x00037a25) aid_fshwr2_syb_pane

0x8751,	// (0x00037a37) aid_fshwr2_txt_pane

0x875d,	// (0x00037a43) fshwr2_func_candi_pane

0x8775,	// (0x00037a5b) fshwr2_hwr_syb_pane

0x878b,	// (0x00037a71) fshwr2_icf_pane

0x5532,	// (0x00034818) fshwr2_icf_bg_pane

0x87bf,	// (0x00037aa5) fshwr2_icf_pane_t1_ParamLimits

0x87bf,	// (0x00037aa5) fshwr2_icf_pane_t1

0x8b3e,	// (0x00037e24) fshwr2_func_candi_pane_g1

0xeb9e,	// (0x0003de84) fshwr2_func_candi_row_pane_ParamLimits

0xeb9e,	// (0x0003de84) fshwr2_func_candi_row_pane

0x87d7,	// (0x00037abd) cell_fshwr2_syb_pane_ParamLimits

0x87d7,	// (0x00037abd) cell_fshwr2_syb_pane

0x87f8,	// (0x00037ade) fshwr2_hwr_syb_pane_g1_ParamLimits

0x87f8,	// (0x00037ade) fshwr2_hwr_syb_pane_g1

0x5532,	// (0x00034818) bg_popup_call_pane_cp01

0x8806,	// (0x00037aec) fshwr2_func_candi_cell_pane_ParamLimits

0x8806,	// (0x00037aec) fshwr2_func_candi_cell_pane

0xa690,	// (0x00039976) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa690,	// (0x00039976) fshwr2_func_candi_cell_bg_pane

0x8857,	// (0x00037b3d) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x8857,	// (0x00037b3d) fshwr2_func_candi_cell_pane_g1

0x8877,	// (0x00037b5d) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x8877,	// (0x00037b5d) fshwr2_func_candi_cell_pane_t1

0x5532,	// (0x00034818) bg_button_pane_cp08

0x947d,	// (0x00038763) cell_fshwr2_syb_bg_pane

0x888a,	// (0x00037b70) cell_fshwr2_syb_bg_pane_g1

0x889e,	// (0x00037b84) cell_fshwr2_syb_bg_pane_t1

0x28d5,	// (0x00031bbb) main_tmo_pane

0xab3d,	// (0x00039e23) uni_indicator_pane_g1_ParamLimits

0xab53,	// (0x00039e39) uni_indicator_pane_g2_ParamLimits

0xab69,	// (0x00039e4f) uni_indicator_pane_g3_ParamLimits

0xab7c,	// (0x00039e62) uni_indicator_pane_g4_ParamLimits

0xab7c,	// (0x00039e62) uni_indicator_pane_g4

0xab90,	// (0x00039e76) uni_indicator_pane_g5_ParamLimits

0xab90,	// (0x00039e76) uni_indicator_pane_g5

0xab90,	// (0x00039e76) uni_indicator_pane_g6_ParamLimits

0xab90,	// (0x00039e76) uni_indicator_pane_g6

0xf8fc,	// (0x0003ebe2) uni_indicator_pane_g_ParamLimits

0xd4e1,	// (0x0003c7c7) popup_tmo_note_window_ParamLimits

0xd4e1,	// (0x0003c7c7) popup_tmo_note_window

0x7f73,	// (0x00037259) fshwr2_bg_pane

0x8868,	// (0x00037b4e) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x8868,	// (0x00037b4e) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9c,	// (0x0003f182) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9c,	// (0x0003f182) fshwr2_func_candi_cell_pane_g

0x7b5d,	// (0x00036e43) bg_popup_window_pane_cp01

0x88b1,	// (0x00037b97) bg_popup_window_pane_g1_cp01

0xebc1,	// (0x0003dea7) bg_popup_window_pane_cp22_ParamLimits

0xebc1,	// (0x0003dea7) bg_popup_window_pane_cp22

0xebcf,	// (0x0003deb5) listscroll_tmo_link_pane_ParamLimits

0xebcf,	// (0x0003deb5) listscroll_tmo_link_pane

0xec0f,	// (0x0003def5) popup_tmo_note_window_g1_ParamLimits

0xec0f,	// (0x0003def5) popup_tmo_note_window_g1

0xec1c,	// (0x0003df02) tmo_note_info_pane_ParamLimits

0xec1c,	// (0x0003df02) tmo_note_info_pane

0xec36,	// (0x0003df1c) list_tmo_note_info_pane_g1_ParamLimits

0xec36,	// (0x0003df1c) list_tmo_note_info_pane_g1

0xec4d,	// (0x0003df33) list_tmo_note_info_pane_g2_ParamLimits

0xec4d,	// (0x0003df33) list_tmo_note_info_pane_g2

0x0001,

0xfea1,	// (0x0003f187) list_tmo_note_info_pane_g_ParamLimits

0xfea1,	// (0x0003f187) list_tmo_note_info_pane_g

0xec69,	// (0x0003df4f) list_tmo_note_info_text_pane_ParamLimits

0xec69,	// (0x0003df4f) list_tmo_note_info_text_pane

0xecee,	// (0x0003dfd4) list_tmo_link_pane

0xecfb,	// (0x0003dfe1) scroll_pane_cp20

0xed08,	// (0x0003dfee) list_single_tmo_link_pane_ParamLimits

0xed08,	// (0x0003dfee) list_single_tmo_link_pane

0xed18,	// (0x0003dffe) list_single_tmo_link_pane_t1

0xed26,	// (0x0003e00c) list_tmo_note_info_text_pane_t1_ParamLimits

0xed26,	// (0x0003e00c) list_tmo_note_info_text_pane_t1

0x6116,	// (0x000353fc) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6116,	// (0x000353fc) aid_size_touch_scroll_bar_cp01

0x6024,	// (0x0003530a) aid_size_touch_slider_marker

0x5685,	// (0x0003496b) popup_settings_window_ParamLimits

0x5685,	// (0x0003496b) popup_settings_window

0x4056,	// (0x0003333c) popup_candi_list_indi_window

0x94fb,	// (0x000387e1) aid_touch_navi_pane_ParamLimits

0x7ecc,	// (0x000371b2) rs_clock_indi_pane

0x7ed5,	// (0x000371bb) sctrl_sk_bottom_pane_ParamLimits

0x7ee6,	// (0x000371cc) sctrl_sk_top_pane_ParamLimits

0x7feb,	// (0x000372d1) popup_fep_tooltip_window

0xe647,	// (0x0003d92d) aid_size_cell_widget_grid_ParamLimits

0xe6bc,	// (0x0003d9a2) cell_ai5_widget_pane_g1_ParamLimits

0xe6bc,	// (0x0003d9a2) cell_ai5_widget_pane_g1

0xe71f,	// (0x0003da05) cell_ai5_widget_pane_g6_ParamLimits

0xe72b,	// (0x0003da11) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe15,	// (0x0003f0fb) cell_ai5_widget_pane_g_ParamLimits

0xfe15,	// (0x0003f0fb) cell_ai5_widget_pane_g

0xe89c,	// (0x0003db82) cell_ai5_widget_pane_t10_ParamLimits

0xe89c,	// (0x0003db82) cell_ai5_widget_pane_t10

0xe8df,	// (0x0003dbc5) grid_ai5_widget_pane_ParamLimits

0xe977,	// (0x0003dc5d) cell_contacts_ai5_widget_pane_ParamLimits

0xe977,	// (0x0003dc5d) cell_contacts_ai5_widget_pane

0xeb61,	// (0x0003de47) popup_discreet_window_t3_ParamLimits

0xeb61,	// (0x0003de47) popup_discreet_window_t3

0x87a7,	// (0x00037a8d) popup_fshwr2_char_preview_window_ParamLimits

0x87a7,	// (0x00037a8d) popup_fshwr2_char_preview_window

0xec87,	// (0x0003df6d) tmo_note_info_pane_t1

0xec9c,	// (0x0003df82) tmo_note_info_pane_t2

0xecb5,	// (0x0003df9b) tmo_note_info_pane_t3

0xecca,	// (0x0003dfb0) tmo_note_info_pane_t4

0xecdc,	// (0x0003dfc2) tmo_note_info_pane_t5

0x0004,

0xfea6,	// (0x0003f18c) tmo_note_info_pane_t

0xecee,	// (0x0003dfd4) list_tmo_link_pane_ParamLimits

0xecfb,	// (0x0003dfe1) scroll_pane_cp20_ParamLimits

0x5532,	// (0x00034818) bg_popup_fep_char_preview_window_cp01

0xed3f,	// (0x0003e025) popup_fshwr2_char_preview_window_t1

0xed4d,	// (0x0003e033) popup_candi_list_indi_window_g1

0xed56,	// (0x0003e03c) bg_cell_contacts_ai5_widget_pane

0xed62,	// (0x0003e048) cell_contacts_ai5_widget_pane_g1

0xed77,	// (0x0003e05d) cell_contacts_ai5_widget_pane_g2

0xed83,	// (0x0003e069) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb1,	// (0x0003f197) cell_contacts_ai5_widget_pane_g

0xed8f,	// (0x0003e075) cell_contacts_ai5_widget_pane_t1

0x28d5,	// (0x00031bbb) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee06,	// (0x0003e0ec) settings_container_pane

0x9156,	// (0x0003843c) listscroll_set_pane_copy1

0xb6f9,	// (0x0003a9df) scroll_pane_cp121_copy1

0xee12,	// (0x0003e0f8) set_content_pane_copy1

0xee1a,	// (0x0003e100) aid_height_set_list_copy1_ParamLimits

0xee1a,	// (0x0003e100) aid_height_set_list_copy1

0xad90,	// (0x0003a076) aid_size_parent_copy1_ParamLimits

0xad90,	// (0x0003a076) aid_size_parent_copy1

0xee26,	// (0x0003e10c) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee26,	// (0x0003e10c) button_value_adjust_pane_cp6_copy1

0x947d,	// (0x00038763) list_highlight_pane_cp2_copy1_ParamLimits

0x947d,	// (0x00038763) list_highlight_pane_cp2_copy1

0xee3a,	// (0x0003e120) list_set_pane_copy1_ParamLimits

0xee3a,	// (0x0003e120) list_set_pane_copy1

0xeda1,	// (0x0003e087) main_pane_set_t1_copy1_ParamLimits

0xeda1,	// (0x0003e087) main_pane_set_t1_copy1

0xeddb,	// (0x0003e0c1) main_pane_set_t2_copy1_ParamLimits

0xeddb,	// (0x0003e0c1) main_pane_set_t2_copy1

0xeefb,	// (0x0003e1e1) main_pane_set_t3_copy1

0xef09,	// (0x0003e1ef) main_pane_set_t4_copy1

0xedfa,	// (0x0003e0e0) set_content_pane_g1_copy1_ParamLimits

0xedfa,	// (0x0003e0e0) set_content_pane_g1_copy1

0xef17,	// (0x0003e1fd) setting_code_pane_copy1

0xef1f,	// (0x0003e205) setting_slider_graphic_pane_copy1

0xef1f,	// (0x0003e205) setting_slider_pane_copy1

0xef27,	// (0x0003e20d) setting_text_pane_copy1

0xef27,	// (0x0003e20d) setting_volume_pane_copy1

0xef17,	// (0x0003e1fd) settings_code_pane_cp2_copy1

0xef2f,	// (0x0003e215) settings_code_pane_cp_copy1_ParamLimits

0xef2f,	// (0x0003e215) settings_code_pane_cp_copy1

0x88ba,	// (0x00037ba0) volume_set_pane_copy1

0xef43,	// (0x0003e229) volume_set_pane_g10_copy1

0xef4f,	// (0x0003e235) volume_set_pane_g1_copy1

0xef59,	// (0x0003e23f) volume_set_pane_g2_copy1

0xef63,	// (0x0003e249) volume_set_pane_g3_copy1

0xef6d,	// (0x0003e253) volume_set_pane_g4_copy1

0xef77,	// (0x0003e25d) volume_set_pane_g5_copy1

0xef81,	// (0x0003e267) volume_set_pane_g6_copy1

0xef8b,	// (0x0003e271) volume_set_pane_g7_copy1

0xef95,	// (0x0003e27b) volume_set_pane_g8_copy1

0xef9f,	// (0x0003e285) volume_set_pane_g9_copy1

0x2293,	// (0x00031579) bg_set_opt_pane_cp_copy1_ParamLimits

0x2293,	// (0x00031579) bg_set_opt_pane_cp_copy1

0x88c6,	// (0x00037bac) setting_slider_pane_t1_copy1_ParamLimits

0x88c6,	// (0x00037bac) setting_slider_pane_t1_copy1

0x88e5,	// (0x00037bcb) setting_slider_pane_t2_copy1_ParamLimits

0x88e5,	// (0x00037bcb) setting_slider_pane_t2_copy1

0x88ff,	// (0x00037be5) setting_slider_pane_t3_copy1_ParamLimits

0x88ff,	// (0x00037be5) setting_slider_pane_t3_copy1

0x8917,	// (0x00037bfd) slider_set_pane_copy1_ParamLimits

0x8917,	// (0x00037bfd) slider_set_pane_copy1

0x292d,	// (0x00031c13) set_opt_bg_pane_g1_copy2

0x2935,	// (0x00031c1b) set_opt_bg_pane_g2_copy2

0xefab,	// (0x0003e291) set_opt_bg_pane_g3_copy2

0x2945,	// (0x00031c2b) set_opt_bg_pane_g4_copy2

0x294d,	// (0x00031c33) set_opt_bg_pane_g5_copy2

0x2955,	// (0x00031c3b) set_opt_bg_pane_g6_copy2

0xefb5,	// (0x0003e29b) set_opt_bg_pane_g7_copy2

0xefbf,	// (0x0003e2a5) set_opt_bg_pane_g8_copy2

0xefc9,	// (0x0003e2af) set_opt_bg_pane_g9_copy2

0x892d,	// (0x00037c13) aid_size_touch_slider_mark_copy1_ParamLimits

0x892d,	// (0x00037c13) aid_size_touch_slider_mark_copy1

0xefd3,	// (0x0003e2b9) slider_set_pane_g1_copy1

0x8941,	// (0x00037c27) slider_set_pane_g2_copy1

0x76e5,	// (0x000369cb) slider_set_pane_g3_copy1_ParamLimits

0x76e5,	// (0x000369cb) slider_set_pane_g3_copy1

0x76f9,	// (0x000369df) slider_set_pane_g4_copy1_ParamLimits

0x76f9,	// (0x000369df) slider_set_pane_g4_copy1

0x7711,	// (0x000369f7) slider_set_pane_g5_copy1_ParamLimits

0x7711,	// (0x000369f7) slider_set_pane_g5_copy1

0x76e5,	// (0x000369cb) slider_set_pane_g6_copy1_ParamLimits

0x76e5,	// (0x000369cb) slider_set_pane_g6_copy1

0x8949,	// (0x00037c2f) slider_set_pane_g7_copy1_ParamLimits

0x8949,	// (0x00037c2f) slider_set_pane_g7_copy1

0x2237,	// (0x0003151d) bg_set_opt_pane_cp2_copy1

0xefdc,	// (0x0003e2c2) setting_slider_graphic_pane_g1_copy1

0xefe5,	// (0x0003e2cb) setting_slider_graphic_pane_t1_copy1

0xeff5,	// (0x0003e2db) setting_slider_graphic_pane_t2_copy1

0xf005,	// (0x0003e2eb) slider_set_pane_cp_copy1

0xf015,	// (0x0003e2fb) input_focus_pane_cp1_copy1

0xf01e,	// (0x0003e304) list_set_text_pane_copy1

0xf026,	// (0x0003e30c) setting_text_pane_g1_copy1

0x4897,	// (0x00033b7d) set_text_pane_t1_copy1

0xf015,	// (0x0003e2fb) input_focus_pane_cp2_copy1

0xf026,	// (0x0003e30c) setting_code_pane_g1_copy1

0xf02f,	// (0x0003e315) setting_code_pane_t1_copy1

0xb4fe,	// (0x0003a7e4) list_set_graphic_pane_copy1

0x2237,	// (0x0003151d) bg_set_opt_pane_cp4_copy1

0x8e45,	// (0x0003812b) list_set_graphic_pane_g1_copy1_ParamLimits

0x8e45,	// (0x0003812b) list_set_graphic_pane_g1_copy1

0xf03d,	// (0x0003e323) list_set_graphic_pane_g2_copy1

0x8e5d,	// (0x00038143) list_set_graphic_pane_t1_copy1_ParamLimits

0x8e5d,	// (0x00038143) list_set_graphic_pane_t1_copy1

0xbfd4,	// (0x0003b2ba) rs_clock_indi_pane_g1

0xf045,	// (0x0003e32b) rs_clock_indi_pane_t1

0xf053,	// (0x0003e339) rs_indi_pane

0xf05b,	// (0x0003e341) rs_indi_pane_g1

0xf064,	// (0x0003e34a) rs_indi_pane_g2

0xf06d,	// (0x0003e353) rs_indi_pane_g3

0x0002,

0xfeb8,	// (0x0003f19e) rs_indi_pane_g

0x9156,	// (0x0003843c) bg_popup_preview_window_pane_cp03

0xf076,	// (0x0003e35c) popup_fep_tooltip_window_t1

0xcc8d,	// (0x0003bf73) popup_note2_window_g2_ParamLimits

0xcc8d,	// (0x0003bf73) popup_note2_window_g2

0x0001,

0xfc45,	// (0x0003ef2b) popup_note2_window_g_ParamLimits

0xfc45,	// (0x0003ef2b) popup_note2_window_g

0xd195,	// (0x0003c47b) bg_popup_sub_pane_cp11_ParamLimits

0xd1a2,	// (0x0003c488) cell_ai3_links_pane_g1_ParamLimits

0xd1b9,	// (0x0003c49f) cell_ai3_links_pane_t1

0x4897,	// (0x00033b7d) set_text_pane_t1_copy1_ParamLimits

0x9063,	// (0x00038349) cell_graphic_popup_pane_cp2_ParamLimits

0x9063,	// (0x00038349) cell_graphic_popup_pane_cp2

0xf084,	// (0x0003e36a) cell_graphic_popup_pane_g1_cp2

0x262a,	// (0x00031910) cell_graphic_popup_pane_g2_cp2

0xf08c,	// (0x0003e372) cell_graphic_popup_pane_g3_cp2

0xf094,	// (0x0003e37a) cell_graphic_popup_pane_t2_cp2

0x263b,	// (0x00031921) grid_highlight_pane_cp3_cp2

0x659f,	// (0x00035885) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x28d5,	// (0x00031bbb) main_tmo_pane_ParamLimits

0xd4d5,	// (0x0003c7bb) popup_tmo_big_image_note_window

0xe6ab,	// (0x0003d991) cell_ai5_widget_list_pane

0xe6b3,	// (0x0003d999) cell_ai5_widget_lrg_icon_pane

0xec87,	// (0x0003df6d) tmo_note_info_pane_t1_ParamLimits

0xec9c,	// (0x0003df82) tmo_note_info_pane_t2_ParamLimits

0xecb5,	// (0x0003df9b) tmo_note_info_pane_t3_ParamLimits

0xecca,	// (0x0003dfb0) tmo_note_info_pane_t4_ParamLimits

0xecdc,	// (0x0003dfc2) tmo_note_info_pane_t5_ParamLimits

0xfea6,	// (0x0003f18c) tmo_note_info_pane_t_ParamLimits

0xee06,	// (0x0003e0ec) settings_container_pane_ParamLimits

0xf00d,	// (0x0003e2f3) indicator_popup_pane_cp5

0xf00d,	// (0x0003e2f3) indicator_popup_pane_cp6

0xb4fe,	// (0x0003a7e4) list_set_graphic_pane_copy1_ParamLimits

0x2223,	// (0x00031509) bg_popup_window_pane_cp23

0xf0a2,	// (0x0003e388) popup_tmo_big_image_note_window_g1

0xf0ae,	// (0x0003e394) popup_tmo_big_image_note_window_t1

0xf0be,	// (0x0003e3a4) popup_tmo_big_image_note_window_t2

0xf0ce,	// (0x0003e3b4) popup_tmo_big_image_note_window_t3

0x0002,

0xfebf,	// (0x0003f1a5) popup_tmo_big_image_note_window_t

0xbfd4,	// (0x0003b2ba) cell_ai5_widget_lrg_icon_pane_g1

0xf0de,	// (0x0003e3c4) cell_ai5_widget_lrg_icon_pane_t1

0xf0ec,	// (0x0003e3d2) cell_ai5_widget_list_row_pane_ParamLimits

0xf0ec,	// (0x0003e3d2) cell_ai5_widget_list_row_pane

0xf104,	// (0x0003e3ea) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf104,	// (0x0003e3ea) cell_ai5_widget_list_row_pane_g1

0xf111,	// (0x0003e3f7) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf111,	// (0x0003e3f7) cell_ai5_widget_list_row_pane_t1

0xf13c,	// (0x0003e422) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf13c,	// (0x0003e422) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec6,	// (0x0003f1ac) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec6,	// (0x0003f1ac) cell_ai5_widget_list_row_pane_t

0x5532,	// (0x00034818) main_fep_vtchi_ss_pane

0xf18c,	// (0x0003e472) popup_fep_char_pre_window

0xf194,	// (0x0003e47a) popup_fep_ituss_window

0xf1c0,	// (0x0003e4a6) popup_fep_vkbss_window

0x947d,	// (0x00038763) grid_vkbss_keypad_pane_ParamLimits

0x947d,	// (0x00038763) grid_vkbss_keypad_pane

0xf202,	// (0x0003e4e8) ituss_keypad_pane

0x896b,	// (0x00037c51) aid_vkbss_key_offset_ParamLimits

0x896b,	// (0x00037c51) aid_vkbss_key_offset

0x8977,	// (0x00037c5d) cell_vkbss_key_pane_ParamLimits

0x8977,	// (0x00037c5d) cell_vkbss_key_pane

0xf20e,	// (0x0003e4f4) bg_cell_vkbss_key_g1_ParamLimits

0xf20e,	// (0x0003e4f4) bg_cell_vkbss_key_g1

0xf21a,	// (0x0003e500) cell_vkbss_key_3p_pane_ParamLimits

0xf21a,	// (0x0003e500) cell_vkbss_key_3p_pane

0xf250,	// (0x0003e536) cell_vkbss_key_g1_ParamLimits

0xf250,	// (0x0003e536) cell_vkbss_key_g1

0xf286,	// (0x0003e56c) cell_vkbss_key_t1_ParamLimits

0xf286,	// (0x0003e56c) cell_vkbss_key_t1

0x89b1,	// (0x00037c97) cell_ituss_key_pane_ParamLimits

0x89b1,	// (0x00037c97) cell_ituss_key_pane

0xf2e2,	// (0x0003e5c8) bg_cell_ituss_key_g1_ParamLimits

0xf2e2,	// (0x0003e5c8) bg_cell_ituss_key_g1

0xf2ee,	// (0x0003e5d4) cell_ituss_key_pane_g1_ParamLimits

0xf2ee,	// (0x0003e5d4) cell_ituss_key_pane_g1

0x89c2,	// (0x00037ca8) cell_ituss_key_pane_g2_ParamLimits

0x89c2,	// (0x00037ca8) cell_ituss_key_pane_g2

0x0005,

0xfecd,	// (0x0003f1b3) cell_ituss_key_pane_g_ParamLimits

0xfecd,	// (0x0003f1b3) cell_ituss_key_pane_g

0x8a46,	// (0x00037d2c) cell_ituss_key_t1_ParamLimits

0x8a46,	// (0x00037d2c) cell_ituss_key_t1

0x8a80,	// (0x00037d66) cell_ituss_key_t2_ParamLimits

0x8a80,	// (0x00037d66) cell_ituss_key_t2

0x8ab1,	// (0x00037d97) cell_ituss_key_t3_ParamLimits

0x8ab1,	// (0x00037d97) cell_ituss_key_t3

0x8a80,	// (0x00037d66) cell_ituss_key_t4_ParamLimits

0x8a80,	// (0x00037d66) cell_ituss_key_t4

0x0004,

0xfeda,	// (0x0003f1c0) cell_ituss_key_t_ParamLimits

0xfeda,	// (0x0003f1c0) cell_ituss_key_t

0xf314,	// (0x0003e5fa) cell_vkbss_key_3p_pane_g1

0xf31c,	// (0x0003e602) cell_vkbss_key_3p_pane_g2

0xf324,	// (0x0003e60a) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee5,	// (0x0003f1cb) cell_vkbss_key_3p_pane_g

0x9156,	// (0x0003843c) bg_popup_fep_char_preview_window_cp02

0xf32c,	// (0x0003e612) popup_fep_char_pre_window_t1

0xe634,	// (0x0003d91a) main_ai5_sk_pane

0xed56,	// (0x0003e03c) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed62,	// (0x0003e048) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xed77,	// (0x0003e05d) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed83,	// (0x0003e069) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb1,	// (0x0003f197) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed8f,	// (0x0003e075) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x28d5,	// (0x00031bbb) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf33a,	// (0x0003e620) main_ai5_sk_pane_g1

0x9e51,	// (0x00039137) popup_query_code_window_g1

0xf1aa,	// (0x0003e490) popup_fep_vkb_icf_pane

0xf1d9,	// (0x0003e4bf) popup_fep_vtchi_icf_pane

0x947d,	// (0x00038763) bg_icf_pane

0x947d,	// (0x00038763) list_vkb_icf_pane

0xf343,	// (0x0003e629) bg_icf_pane_cp01

0xf356,	// (0x0003e63c) vtchi_icf_list_pane

0xf3be,	// (0x0003e6a4) list_vkb_icf_pane_t1_ParamLimits

0xf3be,	// (0x0003e6a4) list_vkb_icf_pane_t1

0xf3da,	// (0x0003e6c0) vtchi_icf_list_pane_t1_ParamLimits

0xf3da,	// (0x0003e6c0) vtchi_icf_list_pane_t1

0xf194,	// (0x0003e47a) popup_fep_ituss_window_ParamLimits

0xf1d9,	// (0x0003e4bf) popup_fep_vtchi_icf_pane_ParamLimits

0xf202,	// (0x0003e4e8) ituss_keypad_pane_ParamLimits

0x895f,	// (0x00037c45) ituss_sks_pane

0x947d,	// (0x00038763) bg_icf_pane_ParamLimits

0xf164,	// (0x0003e44a) icf_edit_indi_pane_ParamLimits

0xf164,	// (0x0003e44a) icf_edit_indi_pane

0x947d,	// (0x00038763) list_vkb_icf_pane_ParamLimits

0xf343,	// (0x0003e629) bg_icf_pane_cp01_ParamLimits

0xf17f,	// (0x0003e465) icf_edit_indi_pane_cp01_ParamLimits

0xf17f,	// (0x0003e465) icf_edit_indi_pane_cp01

0xf35e,	// (0x0003e644) vtchi_query_pane

0xe4d6,	// (0x0003d7bc) icf_edit_indi_pane_g1_ParamLimits

0xe4d6,	// (0x0003d7bc) icf_edit_indi_pane_g1

0xf44a,	// (0x0003e730) icf_edit_indi_pane_g2_ParamLimits

0xf44a,	// (0x0003e730) icf_edit_indi_pane_g2

0x0001,

0xff10,	// (0x0003f1f6) icf_edit_indi_pane_g_ParamLimits

0xff10,	// (0x0003f1f6) icf_edit_indi_pane_g

0xf45e,	// (0x0003e744) icf_edit_indi_pane_t1

0xf3f3,	// (0x0003e6d9) bg_input_focus_pane_cp042

0x280e,	// (0x00031af4) vtchi_button_pane

0xf3fc,	// (0x0003e6e2) vtchi_query_pane_t1

0xf40a,	// (0x0003e6f0) vtchi_query_pane_t2

0xf418,	// (0x0003e6fe) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0003f1e5) vtchi_query_pane_t

0x5532,	// (0x00034818) bg_button_pane_cp13

0xf426,	// (0x0003e70c) vtchi_button_pane_g1

0x8af4,	// (0x00037dda) ituss_sks_pane_g1

0x8aff,	// (0x00037de5) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x0003f1ec) ituss_sks_pane_g

0xf42e,	// (0x0003e714) ituss_sks_pane_t1

0xf43c,	// (0x0003e722) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x0003f1f1) ituss_sks_pane_t

0xba9c,	// (0x0003ad82) indicator_nsta_pane_cp_g1

0xbaa5,	// (0x0003ad8b) indicator_nsta_pane_cp_g2

0xbaad,	// (0x0003ad93) indicator_nsta_pane_cp_g3

0xbab5,	// (0x0003ad9b) indicator_nsta_pane_cp_g4

0xbaa5,	// (0x0003ad8b) indicator_nsta_pane_cp_g5

0xbaad,	// (0x0003ad93) indicator_nsta_pane_cp_g6

0x0005,

0xfa83,	// (0x0003ed69) indicator_nsta_pane_cp_g

0xe21a,	// (0x0003d500) cell_graphic2_pane_t2_ParamLimits

0xe21a,	// (0x0003d500) cell_graphic2_pane_t2

0x0001,

0xfd9c,	// (0x0003f082) cell_graphic2_pane_t_ParamLimits

0xfd9c,	// (0x0003f082) cell_graphic2_pane_t

0xe246,	// (0x0003d52c) cell_graphic2_control_pane_t1

0x8bfe,	// (0x00037ee4) signal_pane_g3_ParamLimits

0x8bfe,	// (0x00037ee4) signal_pane_g3

0x8c0d,	// (0x00037ef3) signal_pane_g4_ParamLimits

0x8c0d,	// (0x00037ef3) signal_pane_g4

0xf14e,	// (0x0003e434) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf14e,	// (0x0003e434) cell_ai5_widget_list_row_pane_t3

0xf302,	// (0x0003e5e8) cell_ituss_key_pane_t1_ParamLimits

0xf302,	// (0x0003e5e8) cell_ituss_key_pane_t1

0x9ab8,	// (0x00038d9e) form_field_data_wide_pane_vc_t2_ParamLimits

0x9ab8,	// (0x00038d9e) form_field_data_wide_pane_vc_t2

0x9acc,	// (0x00038db2) form_field_data_wide_pane_vc_t3_ParamLimits

0x9acc,	// (0x00038db2) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e4,	// (0x0003eaca) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e4,	// (0x0003eaca) form_field_data_wide_pane_vc_t

0xb739,	// (0x0003aa1f) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb739,	// (0x0003aa1f) form_field_slider_wide_pane_vc_t3

0xb80f,	// (0x0003aaf5) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb80f,	// (0x0003aaf5) form_field_popup_wide_pane_vc_t2

0xb826,	// (0x0003ab0c) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb826,	// (0x0003ab0c) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa72,	// (0x0003ed58) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0003ed58) form_field_popup_wide_pane_vc_t

0x8733,	// (0x00037a19) aid_fshwr2_btn_pane_ParamLimits

0x873f,	// (0x00037a25) aid_fshwr2_syb_pane_ParamLimits

0x8751,	// (0x00037a37) aid_fshwr2_txt_pane_ParamLimits

0x7f73,	// (0x00037259) fshwr2_bg_pane_ParamLimits

0x875d,	// (0x00037a43) fshwr2_func_candi_pane_ParamLimits

0x8775,	// (0x00037a5b) fshwr2_hwr_syb_pane_ParamLimits

0x878b,	// (0x00037a71) fshwr2_icf_pane_ParamLimits

0x445f,	// (0x00033745) list_double_graphic_pane_vc_g4_ParamLimits

0x445f,	// (0x00033745) list_double_graphic_pane_vc_g4

0x89e2,	// (0x00037cc8) cell_ituss_key_pane_g3_ParamLimits

0x89e2,	// (0x00037cc8) cell_ituss_key_pane_g3

0x8ae2,	// (0x00037dc8) cell_ituss_key_t5_ParamLimits

0x8ae2,	// (0x00037dc8) cell_ituss_key_t5

0xf1c0,	// (0x0003e4a6) popup_fep_vkbss_window_ParamLimits

0xe63e,	// (0x0003d924) aid_cell_ai5_quarter

0xf45e,	// (0x0003e744) icf_edit_indi_pane_t1_ParamLimits

0x246e,	// (0x00031754) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x246e,	// (0x00031754) aid_tch_indicator_popup_pane_cp2

0x2481,	// (0x00031767) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x2481,	// (0x00031767) aid_tch_query_popup_data_pane_cp2

0x9df9,	// (0x000390df) aid_tch_query_popup_pane_ParamLimits

0x9df9,	// (0x000390df) aid_tch_query_popup_pane

0x9df9,	// (0x000390df) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9df9,	// (0x000390df) aid_tch_query_popup_data_pane_cp1

0x947d,	// (0x00038763) cell_fshwr2_syb_bg_pane_ParamLimits

0x888a,	// (0x00037b70) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x889e,	// (0x00037b84) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf1aa,	// (0x0003e490) popup_fep_vkb_icf_pane_ParamLimits

0x8595,	// (0x0003787b) bg_popup_fep_char_preview_window_g10

0xe773,	// (0x0003da59) cell_ai5_widget_pane_g11_ParamLimits

0xe773,	// (0x0003da59) cell_ai5_widget_pane_g11

0xe77f,	// (0x0003da65) cell_ai5_widget_pane_g12_ParamLimits

0xe77f,	// (0x0003da65) cell_ai5_widget_pane_g12

0xe78b,	// (0x0003da71) cell_ai5_widget_pane_g13_ParamLimits

0xe78b,	// (0x0003da71) cell_ai5_widget_pane_g13

0xe8bb,	// (0x0003dba1) cell_ai5_widget_pane_t11_ParamLimits

0xe8bb,	// (0x0003dba1) cell_ai5_widget_pane_t11

0xe8cd,	// (0x0003dbb3) cell_ai5_widget_pane_t12_ParamLimits

0xe8cd,	// (0x0003dbb3) cell_ai5_widget_pane_t12

0x89ee,	// (0x00037cd4) cell_ituss_key_pane_g4_ParamLimits

0x89ee,	// (0x00037cd4) cell_ituss_key_pane_g4

0x8a0a,	// (0x00037cf0) cell_ituss_key_pane_g5_ParamLimits

0x8a0a,	// (0x00037cf0) cell_ituss_key_pane_g5

0x8a26,	// (0x00037d0c) cell_ituss_key_pane_g6_ParamLimits

0x8a26,	// (0x00037d0c) cell_ituss_key_pane_g6

0x99b3,	// (0x00038c99) bg_icf_pane_g1

0xf366,	// (0x0003e64c) bg_icf_pane_g2

0xf372,	// (0x0003e658) bg_icf_pane_g3

0xf37c,	// (0x0003e662) bg_icf_pane_g4

0xf388,	// (0x0003e66e) bg_icf_pane_g5

0xf392,	// (0x0003e678) bg_icf_pane_g6

0xf39e,	// (0x0003e684) bg_icf_pane_g7

0xf3a8,	// (0x0003e68e) bg_icf_pane_g8

0xf3b4,	// (0x0003e69a) bg_icf_pane_g9

0x0008,

0xfeec,	// (0x0003f1d2) bg_icf_pane_g

0xf1ef,	// (0x0003e4d5) popup_hyb_candi_window_ParamLimits

0xf1ef,	// (0x0003e4d5) popup_hyb_candi_window

0x9a27,	// (0x00038d0d) bg_popup_sub_pane_cp01_ParamLimits

0x9a27,	// (0x00038d0d) bg_popup_sub_pane_cp01

0xf477,	// (0x0003e75d) entry_hyb_candi_pane_ParamLimits

0xf477,	// (0x0003e75d) entry_hyb_candi_pane

0xf486,	// (0x0003e76c) grid_hyb_candi_pane_ParamLimits

0xf486,	// (0x0003e76c) grid_hyb_candi_pane

0xf49b,	// (0x0003e781) grid_hyb_phrase_pane_ParamLimits

0xf49b,	// (0x0003e781) grid_hyb_phrase_pane

0xf4aa,	// (0x0003e790) cell_hyb_candi_pane_ParamLimits

0xf4aa,	// (0x0003e790) cell_hyb_candi_pane

0x2817,	// (0x00031afd) cell_hyb_candi_scroll_pane

0x8b3e,	// (0x00037e24) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0003e7ac) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0003e7ba) cell_hyb_phrase_pane

0x8b3e,	// (0x00037e24) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0003e7c3) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x0003e7d1) entry_hyb_candi_pane_t1

0x9156,	// (0x0003843c) input_focus_pane_cp06

0xf4f9,	// (0x0003e7df) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0003e7e7) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0003e7ef) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x0003e7f7) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0003e7ff) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x0003e807) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Small
