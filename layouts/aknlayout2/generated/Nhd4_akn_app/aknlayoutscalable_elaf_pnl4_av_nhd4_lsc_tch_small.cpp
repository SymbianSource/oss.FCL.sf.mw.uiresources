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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00026120 };

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
0x9618,	// (0x0002f738) Screen

0x9624,	// (0x0002f744) application_window_ParamLimits

0x9624,	// (0x0002f744) application_window

0xc771,	// (0x00032891) screen_g1

0x965c,	// (0x0002f77c) area_bottom_pane_ParamLimits

0x965c,	// (0x0002f77c) area_bottom_pane

0xf255,	// (0x00035375) area_top_pane_ParamLimits

0xf255,	// (0x00035375) area_top_pane

0xf2e9,	// (0x00035409) main_pane_ParamLimits

0xf2e9,	// (0x00035409) main_pane

0xc77b,	// (0x0003289b) misc_graphics

0xae16,	// (0x00030f36) battery_pane_ParamLimits

0xae16,	// (0x00030f36) battery_pane

0x33db,	// (0x000294fb) bg_status_flat_pane_g8

0x33e3,	// (0x00029503) bg_status_flat_pane_g9

0x1429,	// (0x00027549) context_pane_ParamLimits

0x1429,	// (0x00027549) context_pane

0xaf81,	// (0x000310a1) navi_pane_ParamLimits

0xaf81,	// (0x000310a1) navi_pane

0xafff,	// (0x0003111f) signal_pane_ParamLimits

0xafff,	// (0x0003111f) signal_pane

0x0008,

0xf85e,	// (0x0003597e) bg_status_flat_pane_g

0xb08f,	// (0x000311af) status_pane_g1_ParamLimits

0xb08f,	// (0x000311af) status_pane_g1

0xb0a5,	// (0x000311c5) status_pane_g2_ParamLimits

0xb0a5,	// (0x000311c5) status_pane_g2

0x1650,	// (0x00027770) status_pane_g3_ParamLimits

0x1650,	// (0x00027770) status_pane_g3

0x0004,

0xf791,	// (0x000358b1) status_pane_g_ParamLimits

0xf791,	// (0x000358b1) status_pane_g

0xb0b1,	// (0x000311d1) title_pane_ParamLimits

0xb0b1,	// (0x000311d1) title_pane

0xb114,	// (0x00031234) uni_indicator_pane_ParamLimits

0xb114,	// (0x00031234) uni_indicator_pane

0x0cee,	// (0x00026e0e) bg_list_pane_ParamLimits

0x0cee,	// (0x00026e0e) bg_list_pane

0xeb17,	// (0x00034c37) find_pane

0x2bf8,	// (0x00028d18) listscroll_app_pane_ParamLimits

0x2bf8,	// (0x00028d18) listscroll_app_pane

0x0d1a,	// (0x00026e3a) listscroll_form_pane

0xeb1f,	// (0x00034c3f) listscroll_gen_pane_ParamLimits

0xeb1f,	// (0x00034c3f) listscroll_gen_pane

0x0d22,	// (0x00026e42) listscroll_set_pane

0x3f3f,	// (0x0002a05f) main_idle_act_pane

0x07d7,	// (0x000268f7) main_idle_trad_pane

0x07d7,	// (0x000268f7) main_list_empty_pane

0x0d0e,	// (0x00026e2e) main_midp_pane

0x0d3c,	// (0x00026e5c) main_pane_g1_ParamLimits

0x0d3c,	// (0x00026e5c) main_pane_g1

0xa5fa,	// (0x0003071a) popup_ai_message_window_ParamLimits

0xa5fa,	// (0x0003071a) popup_ai_message_window

0xa6ab,	// (0x000307cb) popup_fep_china_uni_window_ParamLimits

0xa6ab,	// (0x000307cb) popup_fep_china_uni_window

0xa705,	// (0x00030825) popup_fep_japan_candidate_window_ParamLimits

0xa705,	// (0x00030825) popup_fep_japan_candidate_window

0xa723,	// (0x00030843) popup_fep_japan_predictive_window_ParamLimits

0xa723,	// (0x00030843) popup_fep_japan_predictive_window

0xa735,	// (0x00030855) popup_find_window

0xa752,	// (0x00030872) popup_grid_graphic_window_ParamLimits

0xa752,	// (0x00030872) popup_grid_graphic_window

0xa7f0,	// (0x00030910) popup_large_graphic_colour_window

0xa816,	// (0x00030936) popup_menu_window_ParamLimits

0xa816,	// (0x00030936) popup_menu_window

0xa9e8,	// (0x00030b08) popup_note_image_window

0xa9ae,	// (0x00030ace) popup_note_wait_window_ParamLimits

0xa9ae,	// (0x00030ace) popup_note_wait_window

0xaa00,	// (0x00030b20) popup_note_window_ParamLimits

0xaa00,	// (0x00030b20) popup_note_window

0xaaaf,	// (0x00030bcf) popup_query_code_window_ParamLimits

0xaaaf,	// (0x00030bcf) popup_query_code_window

0xaae9,	// (0x00030c09) popup_query_data_code_window_ParamLimits

0xaae9,	// (0x00030c09) popup_query_data_code_window

0xab06,	// (0x00030c26) popup_query_data_window_ParamLimits

0xab06,	// (0x00030c26) popup_query_data_window

0xab88,	// (0x00030ca8) popup_query_sat_info_window_ParamLimits

0xab88,	// (0x00030ca8) popup_query_sat_info_window

0xac1f,	// (0x00030d3f) popup_snote_single_graphic_window_ParamLimits

0xac1f,	// (0x00030d3f) popup_snote_single_graphic_window

0xac1f,	// (0x00030d3f) popup_snote_single_text_window_ParamLimits

0xac1f,	// (0x00030d3f) popup_snote_single_text_window

0x11a0,	// (0x000272c0) popup_sub_window_general

0xad7c,	// (0x00030e9c) popup_window_general_ParamLimits

0xad7c,	// (0x00030e9c) popup_window_general

0x12e5,	// (0x00027405) power_save_pane

0xa458,	// (0x00030578) control_pane_g1_ParamLimits

0xa458,	// (0x00030578) control_pane_g1

0xa481,	// (0x000305a1) control_pane_g2_ParamLimits

0xa481,	// (0x000305a1) control_pane_g2

0x0b91,	// (0x00026cb1) control_pane_g3_ParamLimits

0x0b91,	// (0x00026cb1) control_pane_g3

0x0007,

0xf779,	// (0x00035899) control_pane_g_ParamLimits

0xf779,	// (0x00035899) control_pane_g

0xa4e9,	// (0x00030609) control_pane_t1_ParamLimits

0xa4e9,	// (0x00030609) control_pane_t1

0xa54f,	// (0x0003066f) control_pane_t2_ParamLimits

0xa54f,	// (0x0003066f) control_pane_t2

0x0002,

0xf78a,	// (0x000358aa) control_pane_t_ParamLimits

0xf78a,	// (0x000358aa) control_pane_t

0xa3b1,	// (0x000304d1) navi_navi_volume_pane_cp1

0xa3b9,	// (0x000304d9) status_small_icon_pane

0x0a78,	// (0x00026b98) status_small_pane_g1_ParamLimits

0x0a78,	// (0x00026b98) status_small_pane_g1

0xa3c1,	// (0x000304e1) status_small_pane_g2_ParamLimits

0xa3c1,	// (0x000304e1) status_small_pane_g2

0xa3cd,	// (0x000304ed) status_small_pane_g3_ParamLimits

0xa3cd,	// (0x000304ed) status_small_pane_g3

0xa3d9,	// (0x000304f9) status_small_pane_g4_ParamLimits

0xa3d9,	// (0x000304f9) status_small_pane_g4

0xa3e5,	// (0x00030505) status_small_pane_g5_ParamLimits

0xa3e5,	// (0x00030505) status_small_pane_g5

0xa3f3,	// (0x00030513) status_small_pane_g6_ParamLimits

0xa3f3,	// (0x00030513) status_small_pane_g6

0x0007,

0xf768,	// (0x00035888) status_small_pane_g_ParamLimits

0xf768,	// (0x00035888) status_small_pane_g

0xa422,	// (0x00030542) status_small_pane_t1

0xa444,	// (0x00030564) status_small_wait_pane_ParamLimits

0xa444,	// (0x00030564) status_small_wait_pane

0xa119,	// (0x00030239) aid_levels_signal_ParamLimits

0xa119,	// (0x00030239) aid_levels_signal

0xa131,	// (0x00030251) signal_pane_g1_ParamLimits

0xa131,	// (0x00030251) signal_pane_g1

0xa14c,	// (0x0003026c) signal_pane_g2_ParamLimits

0xa14c,	// (0x0003026c) signal_pane_g2

0x0003,

0xf6f9,	// (0x00035819) signal_pane_g_ParamLimits

0xf6f9,	// (0x00035819) signal_pane_g

0xd014,	// (0x00033134) context_pane_g1

0x985a,	// (0x0002f97a) title_pane_g1

0x9891,	// (0x0002f9b1) title_pane_t1

0xc791,	// (0x000328b1) title_pane_t2

0xc7b7,	// (0x000328d7) title_pane_t3

0x0002,

0xf557,	// (0x00035677) title_pane_t

0xb13c,	// (0x0003125c) aid_levels_battery_ParamLimits

0xb13c,	// (0x0003125c) aid_levels_battery

0xb158,	// (0x00031278) battery_pane_g1_ParamLimits

0xb158,	// (0x00031278) battery_pane_g1

0xb175,	// (0x00031295) battery_pane_g2_ParamLimits

0xb175,	// (0x00031295) battery_pane_g2

0x0001,

0xf79c,	// (0x000358bc) battery_pane_g_ParamLimits

0xf79c,	// (0x000358bc) battery_pane_g

0xb7eb,	// (0x0003190b) uni_indicator_pane_g1

0xb801,	// (0x00031921) uni_indicator_pane_g2

0xb817,	// (0x00031937) uni_indicator_pane_g3

0x0005,

0xf906,	// (0x00035a26) uni_indicator_pane_g

0x0649,	// (0x00026769) navi_icon_pane_ParamLimits

0x0649,	// (0x00026769) navi_icon_pane

0x0593,	// (0x000266b3) navi_midp_pane

0x0665,	// (0x00026785) navi_navi_pane

0x066f,	// (0x0002678f) navi_text_pane_ParamLimits

0x066f,	// (0x0002678f) navi_text_pane

0xc771,	// (0x00032891) status_small_wait_pane_g1

0xca08,	// (0x00032b28) status_small_wait_pane_g2

0x0001,

0xf901,	// (0x00035a21) status_small_wait_pane_g

0xb744,	// (0x00031864) navi_navi_icon_text_pane

0x3a2e,	// (0x00029b4e) navi_navi_pane_g1_ParamLimits

0x3a2e,	// (0x00029b4e) navi_navi_pane_g1

0x3a40,	// (0x00029b60) navi_navi_pane_g2_ParamLimits

0x3a40,	// (0x00029b60) navi_navi_pane_g2

0x0001,

0xf8cf,	// (0x000359ef) navi_navi_pane_g_ParamLimits

0xf8cf,	// (0x000359ef) navi_navi_pane_g

0x3a52,	// (0x00029b72) navi_navi_tabs_pane

0x3a5b,	// (0x00029b7b) navi_navi_text_pane

0xb744,	// (0x00031864) navi_navi_volume_pane

0x3a02,	// (0x00029b22) navi_text_pane_t1

0x39f6,	// (0x00029b16) navi_icon_pane_g1

0x3949,	// (0x00029a69) navi_navi_text_pane_t1

0xb730,	// (0x00031850) navi_navi_volume_pane_g1

0x1ab1,	// (0x00027bd1) volume_small_pane

0x38af,	// (0x000299cf) navi_navi_icon_text_pane_g1

0xb694,	// (0x000317b4) navi_navi_icon_text_pane_t1

0x0665,	// (0x00026785) navi_tabs_2_long_pane

0x0665,	// (0x00026785) navi_tabs_2_pane

0x0665,	// (0x00026785) navi_tabs_3_long_pane

0x0665,	// (0x00026785) navi_tabs_3_pane

0x0665,	// (0x00026785) navi_tabs_4_pane

0x1a89,	// (0x00027ba9) tabs_2_active_pane_ParamLimits

0x1a89,	// (0x00027ba9) tabs_2_active_pane

0x1a99,	// (0x00027bb9) tabs_2_passive_pane_ParamLimits

0x1a99,	// (0x00027bb9) tabs_2_passive_pane

0x1a57,	// (0x00027b77) tabs_3_active_pane_ParamLimits

0x1a57,	// (0x00027b77) tabs_3_active_pane

0x1a67,	// (0x00027b87) tabs_3_passive_pane_ParamLimits

0x1a67,	// (0x00027b87) tabs_3_passive_pane

0x1a78,	// (0x00027b98) tabs_3_passive_pane_cp_ParamLimits

0x1a78,	// (0x00027b98) tabs_3_passive_pane_cp

0x1a13,	// (0x00027b33) tabs_4_active_pane_ParamLimits

0x1a13,	// (0x00027b33) tabs_4_active_pane

0x1a24,	// (0x00027b44) tabs_4_passive_pane_ParamLimits

0x1a24,	// (0x00027b44) tabs_4_passive_pane

0x1a35,	// (0x00027b55) tabs_4_passive_pane_cp_ParamLimits

0x1a35,	// (0x00027b55) tabs_4_passive_pane_cp

0x1a46,	// (0x00027b66) tabs_4_passive_pane_cp2_ParamLimits

0x1a46,	// (0x00027b66) tabs_4_passive_pane_cp2

0x19ef,	// (0x00027b0f) tabs_2_long_active_pane_ParamLimits

0x19ef,	// (0x00027b0f) tabs_2_long_active_pane

0x1a01,	// (0x00027b21) tabs_2_long_passive_pane_ParamLimits

0x1a01,	// (0x00027b21) tabs_2_long_passive_pane

0x19aa,	// (0x00027aca) tabs_3_long_active_pane_ParamLimits

0x19aa,	// (0x00027aca) tabs_3_long_active_pane

0x19c3,	// (0x00027ae3) tabs_3_long_passive_pane_ParamLimits

0x19c3,	// (0x00027ae3) tabs_3_long_passive_pane

0x19d6,	// (0x00027af6) tabs_3_long_passive_pane_cp_ParamLimits

0x19d6,	// (0x00027af6) tabs_3_long_passive_pane_cp

0x1950,	// (0x00027a70) volume_small_pane_g1

0x1959,	// (0x00027a79) volume_small_pane_g2

0x1962,	// (0x00027a82) volume_small_pane_g3

0x196b,	// (0x00027a8b) volume_small_pane_g4

0x1974,	// (0x00027a94) volume_small_pane_g5

0x197d,	// (0x00027a9d) volume_small_pane_g6

0x1986,	// (0x00027aa6) volume_small_pane_g7

0x198f,	// (0x00027aaf) volume_small_pane_g8

0x1998,	// (0x00027ab8) volume_small_pane_g9

0x19a1,	// (0x00027ac1) volume_small_pane_g10

0x0009,

0xf89b,	// (0x000359bb) volume_small_pane_g

0xc7c9,	// (0x000328e9) bg_active_tab_pane_cp2_ParamLimits

0xc7c9,	// (0x000328e9) bg_active_tab_pane_cp2

0x991d,	// (0x0002fa3d) tabs_3_active_pane_g1

0x9925,	// (0x0002fa45) tabs_3_active_pane_t1

0xc7c9,	// (0x000328e9) bg_passive_tab_pane_cp2_ParamLimits

0xc7c9,	// (0x000328e9) bg_passive_tab_pane_cp2

0x991d,	// (0x0002fa3d) tabs_3_passive_pane_g1

0x9925,	// (0x0002fa45) tabs_3_passive_pane_t1

0xc7c9,	// (0x000328e9) bg_active_tab_pane_cp3_ParamLimits

0xc7c9,	// (0x000328e9) bg_active_tab_pane_cp3

0x9937,	// (0x0002fa57) tabs_4_active_pane_g1

0x993f,	// (0x0002fa5f) tabs_4_active_pane_t1

0xc7c9,	// (0x000328e9) bg_passive_tab_pane_cp3_ParamLimits

0xc7c9,	// (0x000328e9) bg_passive_tab_pane_cp3

0x9937,	// (0x0002fa57) tabs_4_1_passive_pane_g1

0x993f,	// (0x0002fa5f) tabs_4_1_passive_pane_t1

0x0d0e,	// (0x00026e2e) list_highlight_pane_cp2

0xb9d9,	// (0x00031af9) list_set_pane_ParamLimits

0xb9d9,	// (0x00031af9) list_set_pane

0xba73,	// (0x00031b93) main_pane_set_t1_ParamLimits

0xba73,	// (0x00031b93) main_pane_set_t1

0xba93,	// (0x00031bb3) main_pane_set_t2_ParamLimits

0xba93,	// (0x00031bb3) main_pane_set_t2

0xbaa7,	// (0x00031bc7) main_pane_set_t3_ParamLimits

0xbaa7,	// (0x00031bc7) main_pane_set_t3

0xbab9,	// (0x00031bd9) main_pane_set_t4_ParamLimits

0xbab9,	// (0x00031bd9) main_pane_set_t4

0x0003,

0xf96b,	// (0x00035a8b) main_pane_set_t_ParamLimits

0xf96b,	// (0x00035a8b) main_pane_set_t

0xbacb,	// (0x00031beb) setting_code_pane

0xbad5,	// (0x00031bf5) setting_slider_graphic_pane

0xbad5,	// (0x00031bf5) setting_slider_pane

0xbad5,	// (0x00031bf5) setting_text_pane

0xbad5,	// (0x00031bf5) setting_volume_pane

0x9951,	// (0x0002fa71) volume_set_pane

0xc7d7,	// (0x000328f7) bg_set_opt_pane_cp

0x9959,	// (0x0002fa79) setting_slider_pane_t1

0x9972,	// (0x0002fa92) setting_slider_pane_t2

0x998c,	// (0x0002faac) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0003567e) setting_slider_pane_t

0x99a4,	// (0x0002fac4) slider_set_pane

0xc77b,	// (0x0003289b) bg_set_opt_pane_cp2

0xc7e5,	// (0x00032905) setting_slider_graphic_pane_g1

0x99ba,	// (0x0002fada) setting_slider_graphic_pane_t1

0x99ca,	// (0x0002faea) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00035685) setting_slider_graphic_pane_t

0x99da,	// (0x0002fafa) slider_set_pane_cp

0xc77b,	// (0x0003289b) input_focus_pane_cp1

0x3f26,	// (0x0002a046) list_set_text_pane

0xc771,	// (0x00032891) setting_text_pane_g1

0xc77b,	// (0x0003289b) input_focus_pane_cp2

0xc771,	// (0x00032891) setting_code_pane_g1

0xc7ee,	// (0x0003290e) setting_code_pane_t1

0xe9db,	// (0x00034afb) set_text_pane_t1_ParamLimits

0xe9db,	// (0x00034afb) set_text_pane_t1

0xcbe1,	// (0x00032d01) set_opt_bg_pane_g1

0xcbe9,	// (0x00032d09) set_opt_bg_pane_g2

0xb98e,	// (0x00031aae) set_opt_bg_pane_g3

0xcbf9,	// (0x00032d19) set_opt_bg_pane_g4

0xcc01,	// (0x00032d21) set_opt_bg_pane_g5

0xcc09,	// (0x00032d29) set_opt_bg_pane_g6

0xb998,	// (0x00031ab8) set_opt_bg_pane_g7

0xb9a0,	// (0x00031ac0) set_opt_bg_pane_g8

0xb9aa,	// (0x00031aca) set_opt_bg_pane_g9

0x0008,

0xf958,	// (0x00035a78) set_opt_bg_pane_g

0xb929,	// (0x00031a49) slider_set_pane_g1

0x1b1e,	// (0x00027c3e) slider_set_pane_g2

0x0006,

0xf949,	// (0x00035a69) slider_set_pane_g

0xb84e,	// (0x0003196e) volume_set_pane_g1

0xb856,	// (0x00031976) volume_set_pane_g2

0xb85e,	// (0x0003197e) volume_set_pane_g3

0xb866,	// (0x00031986) volume_set_pane_g4

0xb86e,	// (0x0003198e) volume_set_pane_g5

0xb876,	// (0x00031996) volume_set_pane_g6

0xb87e,	// (0x0003199e) volume_set_pane_g7

0xb886,	// (0x000319a6) volume_set_pane_g8

0xb88e,	// (0x000319ae) volume_set_pane_g9

0xb896,	// (0x000319b6) volume_set_pane_g10

0x0009,

0xf921,	// (0x00035a41) volume_set_pane_g

0x99e2,	// (0x0002fb02) indicator_pane_ParamLimits

0x99e2,	// (0x0002fb02) indicator_pane

0x9a0a,	// (0x0002fb2a) main_idle_pane_g2_ParamLimits

0x9a0a,	// (0x0002fb2a) main_idle_pane_g2

0x9a42,	// (0x0002fb62) main_pane_idle_g1_ParamLimits

0x9a42,	// (0x0002fb62) main_pane_idle_g1

0xc7fc,	// (0x0003291c) popup_clock_digital_analogue_window_ParamLimits

0xc7fc,	// (0x0003291c) popup_clock_digital_analogue_window

0x9a69,	// (0x0002fb89) soft_indicator_pane_ParamLimits

0x9a69,	// (0x0002fb89) soft_indicator_pane

0x9a8d,	// (0x0002fbad) wallpaper_pane_ParamLimits

0x9a8d,	// (0x0002fbad) wallpaper_pane

0xc771,	// (0x00032891) wallpaper_pane_g1

0x9a9f,	// (0x0002fbbf) indicator_pane_g1_ParamLimits

0x9a9f,	// (0x0002fbbf) indicator_pane_g1

0x432a,	// (0x0002a44a) navi_navi_icon_text_pane_srt_g1

0xc82a,	// (0x0003294a) soft_indicator_pane_t1

0xc844,	// (0x00032964) aid_ps_area_pane

0x9ab5,	// (0x0002fbd5) aid_ps_clock_pane

0xc855,	// (0x00032975) aid_ps_indicator_pane

0xc861,	// (0x00032981) indicator_ps_pane_ParamLimits

0xc861,	// (0x00032981) indicator_ps_pane

0xc870,	// (0x00032990) power_save_pane_g1_ParamLimits

0xc870,	// (0x00032990) power_save_pane_g1

0xc87c,	// (0x0003299c) power_save_pane_g2_ParamLimits

0xc87c,	// (0x0003299c) power_save_pane_g2

0xe9bb,	// (0x00034adb) aid_navinavi_width_pane

0xc844,	// (0x00032964) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0003568a) power_save_pane_g_ParamLimits

0xf56a,	// (0x0003568a) power_save_pane_g

0xc88a,	// (0x000329aa) power_save_pane_t1_ParamLimits

0xc88a,	// (0x000329aa) power_save_pane_t1

0x9ab5,	// (0x0002fbd5) aid_ps_clock_pane_ParamLimits

0xc855,	// (0x00032975) aid_ps_indicator_pane_ParamLimits

0xc89c,	// (0x000329bc) power_save_pane_t4_ParamLimits

0xc89c,	// (0x000329bc) power_save_pane_t4

0x0001,

0xf56f,	// (0x0003568f) power_save_pane_t_ParamLimits

0xf56f,	// (0x0003568f) power_save_pane_t

0xc8c6,	// (0x000329e6) power_save_t3_ParamLimits

0xc8c6,	// (0x000329e6) power_save_t3

0xc8b1,	// (0x000329d1) power_save_t2_ParamLimits

0xc8b1,	// (0x000329d1) power_save_t2

0xc8db,	// (0x000329fb) indicator_ps_pane_g1

0x9ac3,	// (0x0002fbe3) ai_gene_pane_ParamLimits

0x9ac3,	// (0x0002fbe3) ai_gene_pane

0x9ada,	// (0x0002fbfa) ai_links_pane_ParamLimits

0x9ada,	// (0x0002fbfa) ai_links_pane

0x9af2,	// (0x0002fc12) indicator_pane_cp1_ParamLimits

0x9af2,	// (0x0002fc12) indicator_pane_cp1

0x9b01,	// (0x0002fc21) main_pane_idle_g1_cp_ParamLimits

0x9b01,	// (0x0002fc21) main_pane_idle_g1_cp

0x9b19,	// (0x0002fc39) popup_ai_links_title_window

0x9b22,	// (0x0002fc42) soft_indicator_pane_cp1_ParamLimits

0x9b22,	// (0x0002fc42) soft_indicator_pane_cp1

0x3ced,	// (0x00029e0d) ai_links_pane_g1

0x3cf6,	// (0x00029e16) grid_ai_links_pane

0xb7e2,	// (0x00031902) ai_gene_pane_1

0x3cdb,	// (0x00029dfb) ai_gene_pane_2

0x3ce4,	// (0x00029e04) list_highlight_pane_cp4

0xb7be,	// (0x000318de) cell_ai_link_pane_ParamLimits

0xb7be,	// (0x000318de) cell_ai_link_pane

0x3cac,	// (0x00029dcc) cell_ai_link_pane_g1

0xca08,	// (0x00032b28) cell_ai_link_pane_g2

0x0001,

0xf8fc,	// (0x00035a1c) cell_ai_link_pane_g

0xc77b,	// (0x0003289b) grid_highlight_cp2

0xc77b,	// (0x0003289b) bg_popup_sub_pane_cp1

0xc8f2,	// (0x00032a12) popup_ai_links_title_window_t1

0x3bfc,	// (0x00029d1c) ai_gene_pane_1_g1_ParamLimits

0x3bfc,	// (0x00029d1c) ai_gene_pane_1_g1

0x3c08,	// (0x00029d28) ai_gene_pane_1_g2_ParamLimits

0x3c08,	// (0x00029d28) ai_gene_pane_1_g2

0x0001,

0xf8f2,	// (0x00035a12) ai_gene_pane_1_g_ParamLimits

0xf8f2,	// (0x00035a12) ai_gene_pane_1_g

0x3c15,	// (0x00029d35) ai_gene_pane_1_t1_ParamLimits

0x3c15,	// (0x00029d35) ai_gene_pane_1_t1

0x3c49,	// (0x00029d69) grid_ai_soft_ind_pane

0x3be7,	// (0x00029d07) ai_gene_pane_2_t1_ParamLimits

0x3be7,	// (0x00029d07) ai_gene_pane_2_t1

0x9b36,	// (0x0002fc56) main_pane_empty_t1_ParamLimits

0x9b36,	// (0x0002fc56) main_pane_empty_t1

0x9b4e,	// (0x0002fc6e) main_pane_empty_t2_ParamLimits

0x9b4e,	// (0x0002fc6e) main_pane_empty_t2

0x9b63,	// (0x0002fc83) main_pane_empty_t3_ParamLimits

0x9b63,	// (0x0002fc83) main_pane_empty_t3

0x9b75,	// (0x0002fc95) main_pane_empty_t4_ParamLimits

0x9b75,	// (0x0002fc95) main_pane_empty_t4

0x9b87,	// (0x0002fca7) main_pane_empty_t5_ParamLimits

0x9b87,	// (0x0002fca7) main_pane_empty_t5

0x0004,

0xf574,	// (0x00035694) main_pane_empty_t_ParamLimits

0xf574,	// (0x00035694) main_pane_empty_t

0xcc32,	// (0x00032d52) bg_popup_window_pane_ParamLimits

0xcc32,	// (0x00032d52) bg_popup_window_pane

0xb738,	// (0x00031858) find_popup_pane_cp2_ParamLimits

0xb738,	// (0x00031858) find_popup_pane_cp2

0x3963,	// (0x00029a83) heading_pane_ParamLimits

0x3963,	// (0x00029a83) heading_pane

0xc77b,	// (0x0003289b) bg_popup_sub_pane

0xb6b1,	// (0x000317d1) bg_popup_window_pane_g1_ParamLimits

0xb6b1,	// (0x000317d1) bg_popup_window_pane_g1

0xb6c0,	// (0x000317e0) bg_popup_window_pane_g2_ParamLimits

0xb6c0,	// (0x000317e0) bg_popup_window_pane_g2

0xb6cc,	// (0x000317ec) bg_popup_window_pane_g3_ParamLimits

0xb6cc,	// (0x000317ec) bg_popup_window_pane_g3

0xb6d8,	// (0x000317f8) bg_popup_window_pane_g4_ParamLimits

0xb6d8,	// (0x000317f8) bg_popup_window_pane_g4

0xb6e7,	// (0x00031807) bg_popup_window_pane_g5_ParamLimits

0xb6e7,	// (0x00031807) bg_popup_window_pane_g5

0xb6f7,	// (0x00031817) bg_popup_window_pane_g6_ParamLimits

0xb6f7,	// (0x00031817) bg_popup_window_pane_g6

0xb703,	// (0x00031823) bg_popup_window_pane_g7_ParamLimits

0xb703,	// (0x00031823) bg_popup_window_pane_g7

0xb712,	// (0x00031832) bg_popup_window_pane_g8_ParamLimits

0xb712,	// (0x00031832) bg_popup_window_pane_g8

0xb721,	// (0x00031841) bg_popup_window_pane_g9_ParamLimits

0xb721,	// (0x00031841) bg_popup_window_pane_g9

0x393d,	// (0x00029a5d) bg_popup_window_pane_g10_ParamLimits

0x393d,	// (0x00029a5d) bg_popup_window_pane_g10

0x0009,

0xf8ba,	// (0x000359da) bg_popup_window_pane_g_ParamLimits

0xf8ba,	// (0x000359da) bg_popup_window_pane_g

0x3866,	// (0x00029986) bg_popup_heading_pane_ParamLimits

0x3866,	// (0x00029986) bg_popup_heading_pane

0x1ba6,	// (0x00027cc6) tabs_4_passive_pane_cp_srt_ParamLimits

0x1ba6,	// (0x00027cc6) tabs_4_passive_pane_cp_srt

0x1bb8,	// (0x00027cd8) tabs_4_passive_pane_srt_ParamLimits

0x387a,	// (0x0002999a) heading_pane_g2

0x1bb8,	// (0x00027cd8) tabs_4_passive_pane_srt

0x2bf8,	// (0x00028d18) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2bf8,	// (0x00028d18) bg_passive_tab_pane_cp3_srt

0x3882,	// (0x000299a2) heading_pane_t1_ParamLimits

0x3882,	// (0x000299a2) heading_pane_t1

0x3899,	// (0x000299b9) heading_pane_t2_ParamLimits

0x3899,	// (0x000299b9) heading_pane_t2

0x0001,

0xf8b5,	// (0x000359d5) heading_pane_t_ParamLimits

0xf8b5,	// (0x000359d5) heading_pane_t

0x33a3,	// (0x000294c3) bg_popup_heading_pane_g1

0x3452,	// (0x00029572) bg_popup_heading_pane_g2

0x345c,	// (0x0002957c) bg_popup_heading_pane_g3

0x3466,	// (0x00029586) bg_popup_heading_pane_g4

0x3470,	// (0x00029590) bg_popup_heading_pane_g5

0x347a,	// (0x0002959a) bg_popup_heading_pane_g6

0x3482,	// (0x000295a2) bg_popup_heading_pane_g7

0x348a,	// (0x000295aa) bg_popup_heading_pane_g8

0x3494,	// (0x000295b4) bg_popup_heading_pane_g9

0x0008,

0xf871,	// (0x00035991) bg_popup_heading_pane_g

0x1808,	// (0x00027928) bg_popup_sub_pane_g1

0x1810,	// (0x00027930) bg_popup_sub_pane_g2

0x1818,	// (0x00027938) bg_popup_sub_pane_g3

0x1820,	// (0x00027940) bg_popup_sub_pane_g4

0x1828,	// (0x00027948) bg_popup_sub_pane_g5

0x1830,	// (0x00027950) bg_popup_sub_pane_g6

0x1838,	// (0x00027958) bg_popup_sub_pane_g7

0x1840,	// (0x00027960) bg_popup_sub_pane_g8

0x1848,	// (0x00027968) bg_popup_sub_pane_g9

0x0008,

0xf84b,	// (0x0003596b) bg_popup_sub_pane_g

0xc7c9,	// (0x000328e9) bg_popup_window_pane_cp5_ParamLimits

0xc7c9,	// (0x000328e9) bg_popup_window_pane_cp5

0xc90f,	// (0x00032a2f) popup_note_window_g1_ParamLimits

0xc90f,	// (0x00032a2f) popup_note_window_g1

0xc91b,	// (0x00032a3b) popup_note_window_t1_ParamLimits

0xc91b,	// (0x00032a3b) popup_note_window_t1

0xc931,	// (0x00032a51) popup_note_window_t2_ParamLimits

0xc931,	// (0x00032a51) popup_note_window_t2

0xc947,	// (0x00032a67) popup_note_window_t3_ParamLimits

0xc947,	// (0x00032a67) popup_note_window_t3

0xc95d,	// (0x00032a7d) popup_note_window_t4_ParamLimits

0xc95d,	// (0x00032a7d) popup_note_window_t4

0xc985,	// (0x00032aa5) popup_note_window_t5_ParamLimits

0xc985,	// (0x00032aa5) popup_note_window_t5

0x0004,

0xf57f,	// (0x0003569f) popup_note_window_t_ParamLimits

0xf57f,	// (0x0003569f) popup_note_window_t

0xc9a9,	// (0x00032ac9) bg_popup_window_pane_cp6_ParamLimits

0xc9a9,	// (0x00032ac9) bg_popup_window_pane_cp6

0x331f,	// (0x0002943f) popup_note_image_window_g1_ParamLimits

0x331f,	// (0x0002943f) popup_note_image_window_g1

0xb556,	// (0x00031676) popup_note_image_window_g2_ParamLimits

0xb556,	// (0x00031676) popup_note_image_window_g2

0x0001,

0xf83f,	// (0x0003595f) popup_note_image_window_g_ParamLimits

0xf83f,	// (0x0003595f) popup_note_image_window_g

0x3344,	// (0x00029464) popup_note_image_window_t1_ParamLimits

0x3344,	// (0x00029464) popup_note_image_window_t1

0x335d,	// (0x0002947d) popup_note_image_window_t2_ParamLimits

0x335d,	// (0x0002947d) popup_note_image_window_t2

0x3376,	// (0x00029496) popup_note_image_window_t3_ParamLimits

0x3376,	// (0x00029496) popup_note_image_window_t3

0x0002,

0xf844,	// (0x00035964) popup_note_image_window_t_ParamLimits

0xf844,	// (0x00035964) popup_note_image_window_t

0x31e8,	// (0x00029308) bg_popup_window_pane_cp7_ParamLimits

0x31e8,	// (0x00029308) bg_popup_window_pane_cp7

0x3218,	// (0x00029338) popup_note_wait_window_g1_ParamLimits

0x3218,	// (0x00029338) popup_note_wait_window_g1

0x3224,	// (0x00029344) popup_note_wait_window_g2_ParamLimits

0x3224,	// (0x00029344) popup_note_wait_window_g2

0x0002,

0xf82d,	// (0x0003594d) popup_note_wait_window_g_ParamLimits

0xf82d,	// (0x0003594d) popup_note_wait_window_g

0x323c,	// (0x0002935c) popup_note_wait_window_t1_ParamLimits

0x323c,	// (0x0002935c) popup_note_wait_window_t1

0xb4f7,	// (0x00031617) popup_note_wait_window_t2_ParamLimits

0xb4f7,	// (0x00031617) popup_note_wait_window_t2

0xb514,	// (0x00031634) popup_note_wait_window_t3_ParamLimits

0xb514,	// (0x00031634) popup_note_wait_window_t3

0xb527,	// (0x00031647) popup_note_wait_window_t4_ParamLimits

0xb527,	// (0x00031647) popup_note_wait_window_t4

0x0004,

0xf834,	// (0x00035954) popup_note_wait_window_t_ParamLimits

0xf834,	// (0x00035954) popup_note_wait_window_t

0x32b8,	// (0x000293d8) wait_bar_pane_ParamLimits

0x32b8,	// (0x000293d8) wait_bar_pane

0xc77b,	// (0x0003289b) wait_anim_pane

0xc77b,	// (0x0003289b) wait_border_pane

0xc771,	// (0x00032891) wait_anim_pane_g1

0xc771,	// (0x00032891) wait_anim_pane_g2

0x0001,

0xf6f4,	// (0x00035814) wait_anim_pane_g

0x3194,	// (0x000292b4) wait_border_pane_g1

0x319f,	// (0x000292bf) wait_border_pane_g2

0x31a8,	// (0x000292c8) wait_border_pane_g3

0x0002,

0xf826,	// (0x00035946) wait_border_pane_g

0x2fff,	// (0x0002911f) bg_popup_window_pane_cp16_ParamLimits

0x2fff,	// (0x0002911f) bg_popup_window_pane_cp16

0xb4a7,	// (0x000315c7) indicator_popup_pane_cp4_ParamLimits

0xb4a7,	// (0x000315c7) indicator_popup_pane_cp4

0x3113,	// (0x00029233) popup_query_data_window_t1_ParamLimits

0x3113,	// (0x00029233) popup_query_data_window_t1

0x3125,	// (0x00029245) popup_query_data_window_t2_ParamLimits

0x3125,	// (0x00029245) popup_query_data_window_t2

0x313e,	// (0x0002925e) popup_query_data_window_t3_ParamLimits

0x313e,	// (0x0002925e) popup_query_data_window_t3

0x0002,

0xf81f,	// (0x0003593f) popup_query_data_window_t_ParamLimits

0xf81f,	// (0x0003593f) popup_query_data_window_t

0xb4bb,	// (0x000315db) query_popup_data_pane_ParamLimits

0xb4bb,	// (0x000315db) query_popup_data_pane

0xb4cf,	// (0x000315ef) query_popup_data_pane_cp1_ParamLimits

0xb4cf,	// (0x000315ef) query_popup_data_pane_cp1

0x2fff,	// (0x0002911f) bg_popup_window_pane_cp10_ParamLimits

0x2fff,	// (0x0002911f) bg_popup_window_pane_cp10

0xb422,	// (0x00031542) indicator_popup_pane_ParamLimits

0xb422,	// (0x00031542) indicator_popup_pane

0xb444,	// (0x00031564) popup_query_code_window_t1_ParamLimits

0xb444,	// (0x00031564) popup_query_code_window_t1

0xb45e,	// (0x0003157e) popup_query_code_window_t2_ParamLimits

0xb45e,	// (0x0003157e) popup_query_code_window_t2

0x30b6,	// (0x000291d6) popup_query_code_window_t3_ParamLimits

0x30b6,	// (0x000291d6) popup_query_code_window_t3

0x0002,

0xf818,	// (0x00035938) popup_query_code_window_t_ParamLimits

0xf818,	// (0x00035938) popup_query_code_window_t

0x30e5,	// (0x00029205) query_popup_pane_ParamLimits

0x30e5,	// (0x00029205) query_popup_pane

0xc9a9,	// (0x00032ac9) bg_popup_window_pane_cp15_ParamLimits

0xc9a9,	// (0x00032ac9) bg_popup_window_pane_cp15

0x9bbf,	// (0x0002fcdf) indicator_popup_pane_cp1_ParamLimits

0x9bbf,	// (0x0002fcdf) indicator_popup_pane_cp1

0x9bd2,	// (0x0002fcf2) indicator_popup_pane_cp2_ParamLimits

0x9bd2,	// (0x0002fcf2) indicator_popup_pane_cp2

0x9be5,	// (0x0002fd05) popup_query_data_code_window_g1_ParamLimits

0x9be5,	// (0x0002fd05) popup_query_data_code_window_g1

0xc9c7,	// (0x00032ae7) popup_query_data_code_window_t1_ParamLimits

0xc9c7,	// (0x00032ae7) popup_query_data_code_window_t1

0xc9d9,	// (0x00032af9) popup_query_data_code_window_t2_ParamLimits

0xc9d9,	// (0x00032af9) popup_query_data_code_window_t2

0x9bf8,	// (0x0002fd18) popup_query_data_code_window_t3_ParamLimits

0x9bf8,	// (0x0002fd18) popup_query_data_code_window_t3

0x9c0e,	// (0x0002fd2e) popup_query_data_code_window_t4_ParamLimits

0x9c0e,	// (0x0002fd2e) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x000356aa) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x000356aa) popup_query_data_code_window_t

0x0607,	// (0x00026727) list_single_midp_graphic_pane_g3

0x9c26,	// (0x0002fd46) query_popup_data_pane_cp2_ParamLimits

0x9c39,	// (0x0002fd59) query_popup_pane_cp2_ParamLimits

0x9c39,	// (0x0002fd59) query_popup_pane_cp2

0xc77b,	// (0x0003289b) bg_popup_window_pane_cp11

0x2feb,	// (0x0002910b) heading_pane_cp5

0xca35,	// (0x00032b55) listscroll_popup_info_pane

0xc77b,	// (0x0003289b) input_focus_pane_cp3

0xc9eb,	// (0x00032b0b) query_popup_pane_t1

0xc9f9,	// (0x00032b19) list_popup_info_pane_ParamLimits

0xc9f9,	// (0x00032b19) list_popup_info_pane

0xca08,	// (0x00032b28) listscroll_popup_info_pane_g1

0xca10,	// (0x00032b30) scroll_pane_cp7

0x9c4c,	// (0x0002fd6c) popup_info_list_pane_t1_ParamLimits

0x9c4c,	// (0x0002fd6c) popup_info_list_pane_t1

0x9c66,	// (0x0002fd86) popup_info_list_pane_t2_ParamLimits

0x9c66,	// (0x0002fd86) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x000356b3) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x000356b3) popup_info_list_pane_t

0xc77b,	// (0x0003289b) bg_popup_window_pane_cp12

0xbce5,	// (0x00031e05) find_popup_pane

0xc7d7,	// (0x000328f7) bg_popup_window_pane_cp3

0xca1a,	// (0x00032b3a) heading_pane_cp3

0xca26,	// (0x00032b46) listscroll_popup_graphic_pane

0xc77b,	// (0x0003289b) bg_popup_window_pane_cp4

0x9cd0,	// (0x0002fdf0) heading_pane_cp4

0xca35,	// (0x00032b55) listscroll_popup_colour_pane

0x9cd8,	// (0x0002fdf8) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9cd8,	// (0x0002fdf8) cell_large_graphic_colour_none_popup_pane

0x9cec,	// (0x0002fe0c) grid_large_graphic_colour_popup_pane_ParamLimits

0x9cec,	// (0x0002fe0c) grid_large_graphic_colour_popup_pane

0x9d10,	// (0x0002fe30) listscroll_popup_colour_pane_g1_ParamLimits

0x9d10,	// (0x0002fe30) listscroll_popup_colour_pane_g1

0x9d27,	// (0x0002fe47) listscroll_popup_colour_pane_g2_ParamLimits

0x9d27,	// (0x0002fe47) listscroll_popup_colour_pane_g2

0x9d3e,	// (0x0002fe5e) listscroll_popup_colour_pane_g3_ParamLimits

0x9d3e,	// (0x0002fe5e) listscroll_popup_colour_pane_g3

0x9d4e,	// (0x0002fe6e) listscroll_popup_colour_pane_g4_ParamLimits

0x9d4e,	// (0x0002fe6e) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x000356b8) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x000356b8) listscroll_popup_colour_pane_g

0xca3d,	// (0x00032b5d) scroll_pane_cp6_ParamLimits

0xca3d,	// (0x00032b5d) scroll_pane_cp6

0x9d5e,	// (0x0002fe7e) cell_large_graphic_colour_popup_pane_ParamLimits

0x9d5e,	// (0x0002fe7e) cell_large_graphic_colour_popup_pane

0x9d7d,	// (0x0002fe9d) cell_large_graphic_colour_none_popup_pane_t1

0xc77b,	// (0x0003289b) grid_highlight_pane_cp5

0xca4f,	// (0x00032b6f) cell_large_graphic_colour_popup_pane_g1

0xca57,	// (0x00032b77) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x000356c1) cell_large_graphic_colour_popup_pane_g

0xca5f,	// (0x00032b7f) cell_large_graphic_colour_popup_pane_g2_copy1

0xca68,	// (0x00032b88) grid_highlight_pane_cp4

0xca70,	// (0x00032b90) bg_popup_window_pane_cp8_ParamLimits

0xca70,	// (0x00032b90) bg_popup_window_pane_cp8

0x9d8c,	// (0x0002feac) popup_snote_single_text_window_g1_ParamLimits

0x9d8c,	// (0x0002feac) popup_snote_single_text_window_g1

0x9d9e,	// (0x0002febe) popup_snote_single_text_window_t1_ParamLimits

0x9d9e,	// (0x0002febe) popup_snote_single_text_window_t1

0x9db1,	// (0x0002fed1) popup_snote_single_text_window_t2_ParamLimits

0x9db1,	// (0x0002fed1) popup_snote_single_text_window_t2

0x9dc4,	// (0x0002fee4) popup_snote_single_text_window_t3_ParamLimits

0x9dc4,	// (0x0002fee4) popup_snote_single_text_window_t3

0x9dfd,	// (0x0002ff1d) popup_snote_single_text_window_t4_ParamLimits

0x9dfd,	// (0x0002ff1d) popup_snote_single_text_window_t4

0x9e31,	// (0x0002ff51) popup_snote_single_text_window_t5_ParamLimits

0x9e31,	// (0x0002ff51) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x000356c6) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x000356c6) popup_snote_single_text_window_t

0xca8b,	// (0x00032bab) bg_popup_window_pane_cp9_ParamLimits

0xca8b,	// (0x00032bab) bg_popup_window_pane_cp9

0x9d8c,	// (0x0002feac) popup_snote_single_graphic_window_g1_ParamLimits

0x9d8c,	// (0x0002feac) popup_snote_single_graphic_window_g1

0xca99,	// (0x00032bb9) popup_snote_single_graphic_window_g2_ParamLimits

0xca99,	// (0x00032bb9) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x000356d1) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x000356d1) popup_snote_single_graphic_window_g

0xcaa5,	// (0x00032bc5) popup_snote_single_graphic_window_t1_ParamLimits

0xcaa5,	// (0x00032bc5) popup_snote_single_graphic_window_t1

0xcab8,	// (0x00032bd8) popup_snote_single_graphic_window_t2_ParamLimits

0xcab8,	// (0x00032bd8) popup_snote_single_graphic_window_t2

0x9dc4,	// (0x0002fee4) popup_snote_single_graphic_window_t3_ParamLimits

0x9dc4,	// (0x0002fee4) popup_snote_single_graphic_window_t3

0x9dfd,	// (0x0002ff1d) popup_snote_single_graphic_window_t4_ParamLimits

0x9dfd,	// (0x0002ff1d) popup_snote_single_graphic_window_t4

0x9e60,	// (0x0002ff80) popup_snote_single_graphic_window_t5_ParamLimits

0x9e60,	// (0x0002ff80) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x000356d6) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x000356d6) popup_snote_single_graphic_window_t

0x4286,	// (0x0002a3a6) grid_graphic_popup_pane_ParamLimits

0x4286,	// (0x0002a3a6) grid_graphic_popup_pane

0x42b0,	// (0x0002a3d0) listscroll_popup_graphic_pane_g1_ParamLimits

0x42b0,	// (0x0002a3d0) listscroll_popup_graphic_pane_g1

0xbc30,	// (0x00031d50) listscroll_popup_graphic_pane_g2_ParamLimits

0xbc30,	// (0x00031d50) listscroll_popup_graphic_pane_g2

0x0001,

0xf995,	// (0x00035ab5) listscroll_popup_graphic_pane_g_ParamLimits

0xf995,	// (0x00035ab5) listscroll_popup_graphic_pane_g

0x42d8,	// (0x0002a3f8) scroll_pane_cp5

0xbbd5,	// (0x00031cf5) cell_graphic_popup_pane_ParamLimits

0xbbd5,	// (0x00031cf5) cell_graphic_popup_pane

0x4206,	// (0x0002a326) cell_graphic_popup_pane_g1

0x420e,	// (0x0002a32e) cell_graphic_popup_pane_g2

0xca5f,	// (0x00032b7f) cell_graphic_popup_pane_g3

0x0002,

0xf98e,	// (0x00035aae) cell_graphic_popup_pane_g

0x4217,	// (0x0002a337) cell_graphic_popup_pane_t2

0xca68,	// (0x00032b88) grid_highlight_pane_cp3

0xcadd,	// (0x00032bfd) list_gen_pane_ParamLimits

0xcadd,	// (0x00032bfd) list_gen_pane

0xcb05,	// (0x00032c25) scroll_pane

0xbb3f,	// (0x00031c5f) bg_list_pane_g1_ParamLimits

0xbb3f,	// (0x00031c5f) bg_list_pane_g1

0xbb5a,	// (0x00031c7a) bg_list_pane_g2_ParamLimits

0xbb5a,	// (0x00031c7a) bg_list_pane_g2

0xbb6d,	// (0x00031c8d) bg_list_pane_g3_ParamLimits

0xbb6d,	// (0x00031c8d) bg_list_pane_g3

0xbb7f,	// (0x00031c9f) bg_list_pane_g4_ParamLimits

0xbb7f,	// (0x00031c9f) bg_list_pane_g4

0xbb91,	// (0x00031cb1) bg_list_pane_g5_ParamLimits

0xbb91,	// (0x00031cb1) bg_list_pane_g5

0x0004,

0xf983,	// (0x00035aa3) bg_list_pane_g_ParamLimits

0xf983,	// (0x00035aa3) bg_list_pane_g

0xbb08,	// (0x00031c28) list_double2_graphic_large_graphic_pane_ParamLimits

0xbb08,	// (0x00031c28) list_double2_graphic_large_graphic_pane

0xbb08,	// (0x00031c28) list_double2_graphic_pane_ParamLimits

0xbb08,	// (0x00031c28) list_double2_graphic_pane

0xbb08,	// (0x00031c28) list_double2_large_graphic_pane_ParamLimits

0xbb08,	// (0x00031c28) list_double2_large_graphic_pane

0xbb08,	// (0x00031c28) list_double2_pane_ParamLimits

0xbb08,	// (0x00031c28) list_double2_pane

0xbb08,	// (0x00031c28) list_double_graphic_heading_pane_ParamLimits

0xbb08,	// (0x00031c28) list_double_graphic_heading_pane

0xbb08,	// (0x00031c28) list_double_graphic_pane_ParamLimits

0xbb08,	// (0x00031c28) list_double_graphic_pane

0xbb08,	// (0x00031c28) list_double_heading_pane_ParamLimits

0xbb08,	// (0x00031c28) list_double_heading_pane

0xbb08,	// (0x00031c28) list_double_large_graphic_pane_ParamLimits

0xbb08,	// (0x00031c28) list_double_large_graphic_pane

0xbb08,	// (0x00031c28) list_double_number_pane_ParamLimits

0xbb08,	// (0x00031c28) list_double_number_pane

0xbb08,	// (0x00031c28) list_double_pane_ParamLimits

0xbb08,	// (0x00031c28) list_double_pane

0xbb08,	// (0x00031c28) list_double_time_pane_ParamLimits

0xbb08,	// (0x00031c28) list_double_time_pane

0xbb08,	// (0x00031c28) list_setting_number_pane_ParamLimits

0xbb08,	// (0x00031c28) list_setting_number_pane

0xbb08,	// (0x00031c28) list_setting_pane_ParamLimits

0xbb08,	// (0x00031c28) list_setting_pane

0x944a,	// (0x0002f56a) list_single_2graphic_pane_ParamLimits

0x944a,	// (0x0002f56a) list_single_2graphic_pane

0x944a,	// (0x0002f56a) list_single_graphic_heading_pane_ParamLimits

0x944a,	// (0x0002f56a) list_single_graphic_heading_pane

0x944a,	// (0x0002f56a) list_single_graphic_pane_ParamLimits

0x944a,	// (0x0002f56a) list_single_graphic_pane

0x944a,	// (0x0002f56a) list_single_heading_pane_ParamLimits

0x944a,	// (0x0002f56a) list_single_heading_pane

0xbb08,	// (0x00031c28) list_single_large_graphic_pane_ParamLimits

0xbb08,	// (0x00031c28) list_single_large_graphic_pane

0x944a,	// (0x0002f56a) list_single_number_heading_pane_ParamLimits

0x944a,	// (0x0002f56a) list_single_number_heading_pane

0x944a,	// (0x0002f56a) list_single_number_pane_ParamLimits

0x944a,	// (0x0002f56a) list_single_number_pane

0x944a,	// (0x0002f56a) list_single_pane_ParamLimits

0x944a,	// (0x0002f56a) list_single_pane

0xc77b,	// (0x0003289b) list_highlight_pane_cp1

0xea02,	// (0x00034b22) list_single_pane_g1_ParamLimits

0xea02,	// (0x00034b22) list_single_pane_g1

0xea0e,	// (0x00034b2e) list_single_pane_g2_ParamLimits

0xea0e,	// (0x00034b2e) list_single_pane_g2

0x0001,

0xf5c8,	// (0x000356e8) list_single_pane_g_ParamLimits

0xf5c8,	// (0x000356e8) list_single_pane_g

0x9434,	// (0x0002f554) list_single_pane_t1_ParamLimits

0x9434,	// (0x0002f554) list_single_pane_t1

0xea02,	// (0x00034b22) list_single_number_pane_g1_ParamLimits

0xea02,	// (0x00034b22) list_single_number_pane_g1

0xea0e,	// (0x00034b2e) list_single_number_pane_g2_ParamLimits

0xea0e,	// (0x00034b2e) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x000356e8) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x000356e8) list_single_number_pane_g

0xea1a,	// (0x00034b3a) list_single_number_pane_t1_ParamLimits

0xea1a,	// (0x00034b3a) list_single_number_pane_t1

0x93f6,	// (0x0002f516) list_single_number_pane_t2_ParamLimits

0x93f6,	// (0x0002f516) list_single_number_pane_t2

0x0001,

0xf944,	// (0x00035a64) list_single_number_pane_t_ParamLimits

0xf944,	// (0x00035a64) list_single_number_pane_t

0xe9f6,	// (0x00034b16) list_single_graphic_pane_g1_ParamLimits

0xe9f6,	// (0x00034b16) list_single_graphic_pane_g1

0xea02,	// (0x00034b22) list_single_graphic_pane_g2_ParamLimits

0xea02,	// (0x00034b22) list_single_graphic_pane_g2

0xea0e,	// (0x00034b2e) list_single_graphic_pane_g3_ParamLimits

0xea0e,	// (0x00034b2e) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x000356e1) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x000356e1) list_single_graphic_pane_g

0xea1a,	// (0x00034b3a) list_single_graphic_pane_t1_ParamLimits

0xea1a,	// (0x00034b3a) list_single_graphic_pane_t1

0xea02,	// (0x00034b22) list_single_heading_pane_g1_ParamLimits

0xea02,	// (0x00034b22) list_single_heading_pane_g1

0xea0e,	// (0x00034b2e) list_single_heading_pane_g2_ParamLimits

0xea0e,	// (0x00034b2e) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x000356e8) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x000356e8) list_single_heading_pane_g

0xea30,	// (0x00034b50) list_single_heading_pane_t1_ParamLimits

0xea30,	// (0x00034b50) list_single_heading_pane_t1

0xea46,	// (0x00034b66) list_single_heading_pane_t2_ParamLimits

0xea46,	// (0x00034b66) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x000356ed) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x000356ed) list_single_heading_pane_t

0xea02,	// (0x00034b22) list_single_number_heading_pane_g1_ParamLimits

0xea02,	// (0x00034b22) list_single_number_heading_pane_g1

0xea0e,	// (0x00034b2e) list_single_number_heading_pane_g2_ParamLimits

0xea0e,	// (0x00034b2e) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x000356e8) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x000356e8) list_single_number_heading_pane_g

0xea30,	// (0x00034b50) list_single_number_heading_pane_t1_ParamLimits

0xea30,	// (0x00034b50) list_single_number_heading_pane_t1

0xea58,	// (0x00034b78) list_single_number_heading_pane_t2_ParamLimits

0xea58,	// (0x00034b78) list_single_number_heading_pane_t2

0xea6a,	// (0x00034b8a) list_single_number_heading_pane_t3_ParamLimits

0xea6a,	// (0x00034b8a) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x000356f2) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x000356f2) list_single_number_heading_pane_t

0xea7c,	// (0x00034b9c) list_single_graphic_heading_pane_g1_ParamLimits

0xea7c,	// (0x00034b9c) list_single_graphic_heading_pane_g1

0x8df2,	// (0x0002ef12) list_single_graphic_heading_pane_g4_ParamLimits

0x8df2,	// (0x0002ef12) list_single_graphic_heading_pane_g4

0xea0e,	// (0x00034b2e) list_single_graphic_heading_pane_g5_ParamLimits

0xea0e,	// (0x00034b2e) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x000356f9) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x000356f9) list_single_graphic_heading_pane_g

0xea30,	// (0x00034b50) list_single_graphic_heading_pane_t1_ParamLimits

0xea30,	// (0x00034b50) list_single_graphic_heading_pane_t1

0x8e03,	// (0x0002ef23) list_single_graphic_heading_pane_t2_ParamLimits

0x8e03,	// (0x0002ef23) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00035700) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00035700) list_single_graphic_heading_pane_t

0xea88,	// (0x00034ba8) list_single_large_graphic_pane_g1_ParamLimits

0xea88,	// (0x00034ba8) list_single_large_graphic_pane_g1

0xea94,	// (0x00034bb4) list_single_large_graphic_pane_g2_ParamLimits

0xea94,	// (0x00034bb4) list_single_large_graphic_pane_g2

0xeaa0,	// (0x00034bc0) list_single_large_graphic_pane_g3_ParamLimits

0xeaa0,	// (0x00034bc0) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00035705) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00035705) list_single_large_graphic_pane_g

0x319f,	// (0x000292bf) wait_border_pane_g2_copy1

0x8e15,	// (0x0002ef35) list_single_large_graphic_pane_g4_cp2

0xeaac,	// (0x00034bcc) list_single_large_graphic_pane_t1_ParamLimits

0xeaac,	// (0x00034bcc) list_single_large_graphic_pane_t1

0x8e1d,	// (0x0002ef3d) list_double_pane_g1_ParamLimits

0x8e1d,	// (0x0002ef3d) list_double_pane_g1

0xeac2,	// (0x00034be2) list_double_pane_g2_ParamLimits

0xeac2,	// (0x00034be2) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0003570c) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0003570c) list_double_pane_g

0x8e29,	// (0x0002ef49) list_double_pane_t1_ParamLimits

0x8e29,	// (0x0002ef49) list_double_pane_t1

0x8e3f,	// (0x0002ef5f) list_double_pane_t2_ParamLimits

0x8e3f,	// (0x0002ef5f) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00035711) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00035711) list_double_pane_t

0x8e51,	// (0x0002ef71) list_double2_pane_g1_ParamLimits

0x8e51,	// (0x0002ef71) list_double2_pane_g1

0xeac2,	// (0x00034be2) list_double2_pane_g2_ParamLimits

0xeac2,	// (0x00034be2) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00035716) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00035716) list_double2_pane_g

0x8e29,	// (0x0002ef49) list_double2_pane_t1_ParamLimits

0x8e29,	// (0x0002ef49) list_double2_pane_t1

0x8e62,	// (0x0002ef82) list_double2_pane_t2_ParamLimits

0x8e62,	// (0x0002ef82) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0003571b) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0003571b) list_double2_pane_t

0x8e1d,	// (0x0002ef3d) list_double_number_pane_g1_ParamLimits

0x8e1d,	// (0x0002ef3d) list_double_number_pane_g1

0xeac2,	// (0x00034be2) list_double_number_pane_g2_ParamLimits

0xeac2,	// (0x00034be2) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0003570c) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0003570c) list_double_number_pane_g

0x8e74,	// (0x0002ef94) list_double_number_pane_t1_ParamLimits

0x8e74,	// (0x0002ef94) list_double_number_pane_t1

0x8e86,	// (0x0002efa6) list_double_number_pane_t2_ParamLimits

0x8e86,	// (0x0002efa6) list_double_number_pane_t2

0x8e9c,	// (0x0002efbc) list_double_number_pane_t3_ParamLimits

0x8e9c,	// (0x0002efbc) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00035720) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00035720) list_double_number_pane_t

0x8eae,	// (0x0002efce) list_double_graphic_pane_g1_ParamLimits

0x8eae,	// (0x0002efce) list_double_graphic_pane_g1

0x8eba,	// (0x0002efda) list_double_graphic_pane_g2_ParamLimits

0x8eba,	// (0x0002efda) list_double_graphic_pane_g2

0x8ec9,	// (0x0002efe9) list_double_graphic_pane_g3_ParamLimits

0x8ec9,	// (0x0002efe9) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00035727) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00035727) list_double_graphic_pane_g

0x8ee1,	// (0x0002f001) list_double_graphic_pane_t1_ParamLimits

0x8ee1,	// (0x0002f001) list_double_graphic_pane_t1

0x8ef7,	// (0x0002f017) list_double_graphic_pane_t2_ParamLimits

0x8ef7,	// (0x0002f017) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00035730) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00035730) list_double_graphic_pane_t

0x8f09,	// (0x0002f029) list_double2_graphic_pane_g1_ParamLimits

0x8f09,	// (0x0002f029) list_double2_graphic_pane_g1

0x8f15,	// (0x0002f035) list_double2_graphic_pane_g2_ParamLimits

0x8f15,	// (0x0002f035) list_double2_graphic_pane_g2

0x8f21,	// (0x0002f041) list_double2_graphic_pane_g3_ParamLimits

0x8f21,	// (0x0002f041) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00035735) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00035735) list_double2_graphic_pane_g

0x8e86,	// (0x0002efa6) list_double2_graphic_pane_t1_ParamLimits

0x8e86,	// (0x0002efa6) list_double2_graphic_pane_t1

0x8f2d,	// (0x0002f04d) list_double2_graphic_pane_t2_ParamLimits

0x8f2d,	// (0x0002f04d) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0003573c) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0003573c) list_double2_graphic_pane_t

0x8f3f,	// (0x0002f05f) list_double_large_graphic_pane_g1_ParamLimits

0x8f3f,	// (0x0002f05f) list_double_large_graphic_pane_g1

0x8e51,	// (0x0002ef71) list_double_large_graphic_pane_g2_ParamLimits

0x8e51,	// (0x0002ef71) list_double_large_graphic_pane_g2

0xeac2,	// (0x00034be2) list_double_large_graphic_pane_g3_ParamLimits

0xeac2,	// (0x00034be2) list_double_large_graphic_pane_g3

0x8f5e,	// (0x0002f07e) list_double_large_graphic_pane_g4_ParamLimits

0x8f5e,	// (0x0002f07e) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00035741) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00035741) list_double_large_graphic_pane_g

0x8f71,	// (0x0002f091) list_double_large_graphic_pane_t1_ParamLimits

0x8f71,	// (0x0002f091) list_double_large_graphic_pane_t1

0x8f8a,	// (0x0002f0aa) list_double_large_graphic_pane_t2_ParamLimits

0x8f8a,	// (0x0002f0aa) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0003574c) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0003574c) list_double_large_graphic_pane_t

0x8f9c,	// (0x0002f0bc) list_double2_large_graphic_pane_g1_ParamLimits

0x8f9c,	// (0x0002f0bc) list_double2_large_graphic_pane_g1

0x8e51,	// (0x0002ef71) list_double2_large_graphic_pane_g2_ParamLimits

0x8e51,	// (0x0002ef71) list_double2_large_graphic_pane_g2

0xeac2,	// (0x00034be2) list_double2_large_graphic_pane_g3_ParamLimits

0xeac2,	// (0x00034be2) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00035751) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00035751) list_double2_large_graphic_pane_g

0x8e86,	// (0x0002efa6) list_double2_large_graphic_pane_t1_ParamLimits

0x8e86,	// (0x0002efa6) list_double2_large_graphic_pane_t1

0x8f2d,	// (0x0002f04d) list_double2_large_graphic_pane_t2_ParamLimits

0x8f2d,	// (0x0002f04d) list_double2_large_graphic_pane_t2

0x0001,

0xf61c,	// (0x0003573c) list_double2_large_graphic_pane_t_ParamLimits

0xf61c,	// (0x0003573c) list_double2_large_graphic_pane_t

0x8fa8,	// (0x0002f0c8) list_double_heading_pane_g1_ParamLimits

0x8fa8,	// (0x0002f0c8) list_double_heading_pane_g1

0x8fb9,	// (0x0002f0d9) list_double_heading_pane_g2_ParamLimits

0x8fb9,	// (0x0002f0d9) list_double_heading_pane_g2

0x0001,

0xf638,	// (0x00035758) list_double_heading_pane_g_ParamLimits

0xf638,	// (0x00035758) list_double_heading_pane_g

0x8fc5,	// (0x0002f0e5) list_double_heading_pane_t1_ParamLimits

0x8fc5,	// (0x0002f0e5) list_double_heading_pane_t1

0x8f2d,	// (0x0002f04d) list_double_heading_pane_t2_ParamLimits

0x8f2d,	// (0x0002f04d) list_double_heading_pane_t2

0x0001,

0xf63d,	// (0x0003575d) list_double_heading_pane_t_ParamLimits

0xf63d,	// (0x0003575d) list_double_heading_pane_t

0x8fdb,	// (0x0002f0fb) list_double_graphic_heading_pane_g1_ParamLimits

0x8fdb,	// (0x0002f0fb) list_double_graphic_heading_pane_g1

0x8fa8,	// (0x0002f0c8) list_double_graphic_heading_pane_g2_ParamLimits

0x8fa8,	// (0x0002f0c8) list_double_graphic_heading_pane_g2

0x8fb9,	// (0x0002f0d9) list_double_graphic_heading_pane_g3_ParamLimits

0x8fb9,	// (0x0002f0d9) list_double_graphic_heading_pane_g3

0x0002,

0xf642,	// (0x00035762) list_double_graphic_heading_pane_g_ParamLimits

0xf642,	// (0x00035762) list_double_graphic_heading_pane_g

0x8fc5,	// (0x0002f0e5) list_double_graphic_heading_pane_t1_ParamLimits

0x8fc5,	// (0x0002f0e5) list_double_graphic_heading_pane_t1

0x8f2d,	// (0x0002f04d) list_double_graphic_heading_pane_t2_ParamLimits

0x8f2d,	// (0x0002f04d) list_double_graphic_heading_pane_t2

0x0001,

0xf63d,	// (0x0003575d) list_double_graphic_heading_pane_t_ParamLimits

0xf63d,	// (0x0003575d) list_double_graphic_heading_pane_t

0x8e51,	// (0x0002ef71) list_double_time_pane_g1_ParamLimits

0x8e51,	// (0x0002ef71) list_double_time_pane_g1

0xeac2,	// (0x00034be2) list_double_time_pane_g2_ParamLimits

0xeac2,	// (0x00034be2) list_double_time_pane_g2

0x0001,

0xf5f6,	// (0x00035716) list_double_time_pane_g_ParamLimits

0xf5f6,	// (0x00035716) list_double_time_pane_g

0x8fe7,	// (0x0002f107) list_double_time_pane_t1_ParamLimits

0x8fe7,	// (0x0002f107) list_double_time_pane_t1

0x8ffd,	// (0x0002f11d) list_double_time_pane_t2_ParamLimits

0x8ffd,	// (0x0002f11d) list_double_time_pane_t2

0x900f,	// (0x0002f12f) list_double_time_pane_t3_ParamLimits

0x900f,	// (0x0002f12f) list_double_time_pane_t3

0x9021,	// (0x0002f141) list_double_time_pane_t4_ParamLimits

0x9021,	// (0x0002f141) list_double_time_pane_t4

0x0003,

0xf649,	// (0x00035769) list_double_time_pane_t_ParamLimits

0xf649,	// (0x00035769) list_double_time_pane_t

0x9033,	// (0x0002f153) list_setting_pane_g1_ParamLimits

0x9033,	// (0x0002f153) list_setting_pane_g1

0x903f,	// (0x0002f15f) list_setting_pane_g2_ParamLimits

0x903f,	// (0x0002f15f) list_setting_pane_g2

0x0001,

0xf652,	// (0x00035772) list_setting_pane_g_ParamLimits

0xf652,	// (0x00035772) list_setting_pane_g

0x904b,	// (0x0002f16b) list_setting_pane_t1_ParamLimits

0x904b,	// (0x0002f16b) list_setting_pane_t1

0x9065,	// (0x0002f185) list_setting_pane_t2_ParamLimits

0x9065,	// (0x0002f185) list_setting_pane_t2

0x0002,

0xf657,	// (0x00035777) list_setting_pane_t_ParamLimits

0xf657,	// (0x00035777) list_setting_pane_t

0x90a4,	// (0x0002f1c4) set_value_pane_cp_ParamLimits

0x90a4,	// (0x0002f1c4) set_value_pane_cp

0x90b0,	// (0x0002f1d0) list_setting_number_pane_g1_ParamLimits

0x90b0,	// (0x0002f1d0) list_setting_number_pane_g1

0x90bc,	// (0x0002f1dc) list_setting_number_pane_g2_ParamLimits

0x90bc,	// (0x0002f1dc) list_setting_number_pane_g2

0x0001,

0xf65e,	// (0x0003577e) list_setting_number_pane_g_ParamLimits

0xf65e,	// (0x0003577e) list_setting_number_pane_g

0x90c8,	// (0x0002f1e8) list_setting_number_pane_t1_ParamLimits

0x90c8,	// (0x0002f1e8) list_setting_number_pane_t1

0x90e1,	// (0x0002f201) list_setting_number_pane_t2_ParamLimits

0x90e1,	// (0x0002f201) list_setting_number_pane_t2

0x90fb,	// (0x0002f21b) list_setting_number_pane_t3_ParamLimits

0x90fb,	// (0x0002f21b) list_setting_number_pane_t3

0x0003,

0xf663,	// (0x00035783) list_setting_number_pane_t_ParamLimits

0xf663,	// (0x00035783) list_setting_number_pane_t

0x90a4,	// (0x0002f1c4) set_value_pane_ParamLimits

0x90a4,	// (0x0002f1c4) set_value_pane

0xcb39,	// (0x00032c59) bg_set_opt_pane_ParamLimits

0xcb39,	// (0x00032c59) bg_set_opt_pane

0x913e,	// (0x0002f25e) set_value_pane_t1

0xcb5a,	// (0x00032c7a) slider_set_pane_cp3

0x9e99,	// (0x0002ffb9) volume_small_pane_cp

0xcb63,	// (0x00032c83) list_form_gen_pane

0xcb6c,	// (0x00032c8c) scroll_pane_cp8

0x914c,	// (0x0002f26c) form_field_data_pane_ParamLimits

0x914c,	// (0x0002f26c) form_field_data_pane

0x9163,	// (0x0002f283) form_field_data_wide_pane_ParamLimits

0x9163,	// (0x0002f283) form_field_data_wide_pane

0x9183,	// (0x0002f2a3) form_field_popup_pane_ParamLimits

0x9183,	// (0x0002f2a3) form_field_popup_pane

0x919b,	// (0x0002f2bb) form_field_popup_wide_pane_ParamLimits

0x919b,	// (0x0002f2bb) form_field_popup_wide_pane

0xeaf3,	// (0x00034c13) form_field_slider_pane_ParamLimits

0xeaf3,	// (0x00034c13) form_field_slider_pane

0x91b2,	// (0x0002f2d2) form_field_slider_wide_pane_ParamLimits

0x91b2,	// (0x0002f2d2) form_field_slider_wide_pane

0xcb7d,	// (0x00032c9d) data_form_pane

0x91cf,	// (0x0002f2ef) form_field_data_pane_t1

0xcb89,	// (0x00032ca9) input_focus_pane

0x91e9,	// (0x0002f309) data_form_wide_pane

0x9206,	// (0x0002f326) form_field_data_wide_pane_t1

0xca7d,	// (0x00032b9d) input_focus_pane_cp6

0x9228,	// (0x0002f348) form_field_popup_pane_t1

0xcb89,	// (0x00032ca9) input_focus_pane_cp7

0xcbb7,	// (0x00032cd7) list_form_pane

0x924a,	// (0x0002f36a) form_field_popup_wide_pane_t1

0xcb89,	// (0x00032ca9) input_focus_pane_cp8

0xcbc3,	// (0x00032ce3) list_form_wide_pane

0x9267,	// (0x0002f387) form_field_slider_pane_t1_ParamLimits

0x9267,	// (0x0002f387) form_field_slider_pane_t1

0x927f,	// (0x0002f39f) form_field_slider_pane_t2_ParamLimits

0x927f,	// (0x0002f39f) form_field_slider_pane_t2

0x0001,

0xf673,	// (0x00035793) form_field_slider_pane_t_ParamLimits

0xf673,	// (0x00035793) form_field_slider_pane_t

0xc7c9,	// (0x000328e9) input_focus_pane_cp9_ParamLimits

0xc7c9,	// (0x000328e9) input_focus_pane_cp9

0x9294,	// (0x0002f3b4) slider_cont_pane_ParamLimits

0x9294,	// (0x0002f3b4) slider_cont_pane

0xcbcf,	// (0x00032cef) form_field_slider_wide_pane_t1_ParamLimits

0xcbcf,	// (0x00032cef) form_field_slider_wide_pane_t1

0x92a8,	// (0x0002f3c8) form_field_slider_wide_pane_t2_ParamLimits

0x92a8,	// (0x0002f3c8) form_field_slider_wide_pane_t2

0x0001,

0xf678,	// (0x00035798) form_field_slider_wide_pane_t_ParamLimits

0xf678,	// (0x00035798) form_field_slider_wide_pane_t

0xc7c9,	// (0x000328e9) input_focus_pane_cp10_ParamLimits

0xc7c9,	// (0x000328e9) input_focus_pane_cp10

0x92ba,	// (0x0002f3da) slider_cont_pane_cp1_ParamLimits

0x92ba,	// (0x0002f3da) slider_cont_pane_cp1

0x92ce,	// (0x0002f3ee) slider_form_pane_cp

0xcbe1,	// (0x00032d01) input_focus_pane_g1

0xcbe9,	// (0x00032d09) input_focus_pane_g2

0xcbf1,	// (0x00032d11) input_focus_pane_g3

0xcbf9,	// (0x00032d19) input_focus_pane_g4

0xcc01,	// (0x00032d21) input_focus_pane_g5

0xcc09,	// (0x00032d29) input_focus_pane_g6

0xcc11,	// (0x00032d31) input_focus_pane_g7

0xcc19,	// (0x00032d39) input_focus_pane_g8

0xcc21,	// (0x00032d41) input_focus_pane_g9

0xc771,	// (0x00032891) input_focus_pane_g10

0x0009,

0xf67d,	// (0x0003579d) input_focus_pane_g

0x31a8,	// (0x000292c8) wait_border_pane_g3_copy1

0x92d6,	// (0x0002f3f6) data_form_pane_t1

0xc771,	// (0x00032891) wait_anim_pane_g1_copy1

0x9408,	// (0x0002f528) data_form_wide_pane_t1

0x92f0,	// (0x0002f410) list_form_graphic_pane_cp_ParamLimits

0x92f0,	// (0x0002f410) list_form_graphic_pane_cp

0x4097,	// (0x0002a1b7) slider_form_pane_g1

0x40a0,	// (0x0002a1c0) slider_form_pane_g2

0x0006,

0xf974,	// (0x00035a94) slider_form_pane_g

0x9302,	// (0x0002f422) list_form_graphic_pane_ParamLimits

0x9302,	// (0x0002f422) list_form_graphic_pane

0x9315,	// (0x0002f435) list_form_graphic_pane_g1

0x931d,	// (0x0002f43d) list_form_graphic_pane_t1_ParamLimits

0x931d,	// (0x0002f43d) list_form_graphic_pane_t1

0xc7d7,	// (0x000328f7) list_highlight_pane_cp5_ParamLimits

0xc7d7,	// (0x000328f7) list_highlight_pane_cp5

0xeb06,	// (0x00034c26) find_pane_g1

0xcc29,	// (0x00032d49) input_find_pane

0x9332,	// (0x0002f452) input_find_pane_g1_ParamLimits

0x9332,	// (0x0002f452) input_find_pane_g1

0x933e,	// (0x0002f45e) input_find_pane_t1_ParamLimits

0x933e,	// (0x0002f45e) input_find_pane_t1

0x9353,	// (0x0002f473) input_find_pane_t2_ParamLimits

0x9353,	// (0x0002f473) input_find_pane_t2

0x0001,

0xf692,	// (0x000357b2) input_find_pane_t_ParamLimits

0xf692,	// (0x000357b2) input_find_pane_t

0xcc32,	// (0x00032d52) input_focus_pane_cp5_ParamLimits

0xcc32,	// (0x00032d52) input_focus_pane_cp5

0xcc40,	// (0x00032d60) bg_popup_window_pane_cp2_ParamLimits

0xcc40,	// (0x00032d60) bg_popup_window_pane_cp2

0xcc4d,	// (0x00032d6d) listscroll_menu_pane_ParamLimits

0xcc4d,	// (0x00032d6d) listscroll_menu_pane

0x9eae,	// (0x0002ffce) popup_submenu_window_ParamLimits

0x9eae,	// (0x0002ffce) popup_submenu_window

0xcc59,	// (0x00032d79) find_popup_pane_g1

0x9ed6,	// (0x0002fff6) input_popup_find_pane_cp

0xcc32,	// (0x00032d52) input_focus_pane_cp4_ParamLimits

0xcc32,	// (0x00032d52) input_focus_pane_cp4

0xcc61,	// (0x00032d81) input_popup_find_pane_t1_ParamLimits

0xcc61,	// (0x00032d81) input_popup_find_pane_t1

0xc77b,	// (0x0003289b) bg_popup_sub_pane_cp

0xcc8f,	// (0x00032daf) listscroll_popup_sub_pane

0xcc97,	// (0x00032db7) list_submenu_pane_ParamLimits

0xcc97,	// (0x00032db7) list_submenu_pane

0xcca8,	// (0x00032dc8) scroll_pane_cp4

0x9eee,	// (0x0003000e) list_single_popup_submenu_pane_ParamLimits

0x9eee,	// (0x0003000e) list_single_popup_submenu_pane

0x9f02,	// (0x00030022) list_single_popup_submenu_pane_g1

0x9f0a,	// (0x0003002a) list_single_popup_submenu_pane_t1_ParamLimits

0x9f0a,	// (0x0003002a) list_single_popup_submenu_pane_t1

0xc7c9,	// (0x000328e9) bg_active_tab_pane_cp1_ParamLimits

0xc7c9,	// (0x000328e9) bg_active_tab_pane_cp1

0xccb0,	// (0x00032dd0) tabs_2_active_pane_g1

0x9f1f,	// (0x0003003f) tabs_2_active_pane_t1

0xc7c9,	// (0x000328e9) bg_passive_tab_pane_cp1_ParamLimits

0xc7c9,	// (0x000328e9) bg_passive_tab_pane_cp1

0xccb0,	// (0x00032dd0) tabs_2_passive_pane_g1

0x9f1f,	// (0x0003003f) tabs_2_passive_pane_t1

0xc7d7,	// (0x000328f7) bg_active_tab_pane_cp4

0x9f31,	// (0x00030051) tabs_2_long_active_pane_t1

0x0d0e,	// (0x00026e2e) bg_passive_tab_pane_cp4

0x1875,	// (0x00027995) list_single_midp_graphic_pane_g4_ParamLimits

0xc7d7,	// (0x000328f7) bg_active_tab_pane_cp5

0x9f44,	// (0x00030064) tabs_3_long_active_pane_t1

0x0d0e,	// (0x00026e2e) bg_passive_tab_pane_cp5

0x1875,	// (0x00027995) list_single_midp_graphic_pane_g4

0xc7d7,	// (0x000328f7) bg_popup_window_pane_cp13_ParamLimits

0xc7d7,	// (0x000328f7) bg_popup_window_pane_cp13

0xccb8,	// (0x00032dd8) listscroll_popup_fast_pane_ParamLimits

0xccb8,	// (0x00032dd8) listscroll_popup_fast_pane

0xccc4,	// (0x00032de4) grid_popup_fast_pane_ParamLimits

0xccc4,	// (0x00032de4) grid_popup_fast_pane

0xccd6,	// (0x00032df6) scroll_pane_cp9_ParamLimits

0xccd6,	// (0x00032df6) scroll_pane_cp9

0x59a2,	// (0x0002bac2) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x59a2,	// (0x0002bac2) list_single_graphic_hl_pane_t1_cp2

0xcce9,	// (0x00032e09) input_focus_pane_cp20_ParamLimits

0xcce9,	// (0x00032e09) input_focus_pane_cp20

0xccf7,	// (0x00032e17) query_popup_data_pane_t1_ParamLimits

0xccf7,	// (0x00032e17) query_popup_data_pane_t1

0xcd0a,	// (0x00032e2a) query_popup_data_pane_t2_ParamLimits

0xcd0a,	// (0x00032e2a) query_popup_data_pane_t2

0xcd50,	// (0x00032e70) query_popup_data_pane_t3_ParamLimits

0xcd50,	// (0x00032e70) query_popup_data_pane_t3

0xcd91,	// (0x00032eb1) query_popup_data_pane_t4_ParamLimits

0xcd91,	// (0x00032eb1) query_popup_data_pane_t4

0xcdcd,	// (0x00032eed) query_popup_data_pane_t5_ParamLimits

0xcdcd,	// (0x00032eed) query_popup_data_pane_t5

0x0004,

0xf697,	// (0x000357b7) query_popup_data_pane_t_ParamLimits

0xf697,	// (0x000357b7) query_popup_data_pane_t

0xcbe1,	// (0x00032d01) bg_set_opt_pane_g1

0xcbe9,	// (0x00032d09) bg_set_opt_pane_g2

0xcbf1,	// (0x00032d11) bg_set_opt_pane_g3

0xcbf9,	// (0x00032d19) bg_set_opt_pane_g4

0xcc01,	// (0x00032d21) bg_set_opt_pane_g5

0xcc09,	// (0x00032d29) bg_set_opt_pane_g6

0xcc11,	// (0x00032d31) bg_set_opt_pane_g7

0xcc19,	// (0x00032d39) bg_set_opt_pane_g8

0xcc21,	// (0x00032d41) bg_set_opt_pane_g9

0x0008,

0xf6a2,	// (0x000357c2) bg_set_opt_pane_g

0x0333,	// (0x00026453) control_top_pane_stacon_ParamLimits

0x0333,	// (0x00026453) control_top_pane_stacon

0x0386,	// (0x000264a6) signal_pane_stacon_ParamLimits

0x0386,	// (0x000264a6) signal_pane_stacon

0x03ab,	// (0x000264cb) stacon_top_pane_g1_ParamLimits

0x03ab,	// (0x000264cb) stacon_top_pane_g1

0x03cd,	// (0x000264ed) title_pane_stacon_ParamLimits

0x03cd,	// (0x000264ed) title_pane_stacon

0x03f7,	// (0x00026517) uni_indicator_pane_stacon_ParamLimits

0x03f7,	// (0x00026517) uni_indicator_pane_stacon

0x040c,	// (0x0002652c) battery_pane_stacon_ParamLimits

0x040c,	// (0x0002652c) battery_pane_stacon

0x0450,	// (0x00026570) control_bottom_pane_stacon_ParamLimits

0x0450,	// (0x00026570) control_bottom_pane_stacon

0x0473,	// (0x00026593) navi_pane_stacon_ParamLimits

0x0473,	// (0x00026593) navi_pane_stacon

0x0496,	// (0x000265b6) stacon_bottom_pane_g1_ParamLimits

0x0496,	// (0x000265b6) stacon_bottom_pane_g1

0xf3c4,	// (0x000354e4) aid_levels_signal_lsc_ParamLimits

0xf3c4,	// (0x000354e4) aid_levels_signal_lsc

0xf3da,	// (0x000354fa) signal_pane_stacon_g1_ParamLimits

0xf3da,	// (0x000354fa) signal_pane_stacon_g1

0xf3ee,	// (0x0003550e) signal_pane_stacon_g2_ParamLimits

0xf3ee,	// (0x0003550e) signal_pane_stacon_g2

0x0001,

0xf6b5,	// (0x000357d5) signal_pane_stacon_g_ParamLimits

0xf6b5,	// (0x000357d5) signal_pane_stacon_g

0xf423,	// (0x00035543) title_pane_stacon_t1_ParamLimits

0xf423,	// (0x00035543) title_pane_stacon_t1

0xce11,	// (0x00032f31) uni_indicator_pane_stacon_g1

0xce1b,	// (0x00032f3b) uni_indicator_pane_stacon_g2

0xce25,	// (0x00032f45) uni_indicator_pane_stacon_g3

0xce2f,	// (0x00032f4f) uni_indicator_pane_stacon_g4

0x0003,

0xf6c1,	// (0x000357e1) uni_indicator_pane_stacon_g

0xf448,	// (0x00035568) control_top_pane_stacon_g1

0xf450,	// (0x00035570) control_top_pane_stacon_t1_ParamLimits

0xf450,	// (0x00035570) control_top_pane_stacon_t1

0xf487,	// (0x000355a7) aid_levels_battery_lsc_ParamLimits

0xf487,	// (0x000355a7) aid_levels_battery_lsc

0xf49e,	// (0x000355be) battery_pane_stacon_g1_ParamLimits

0xf49e,	// (0x000355be) battery_pane_stacon_g1

0xf4b1,	// (0x000355d1) battery_pane_stacon_g2_ParamLimits

0xf4b1,	// (0x000355d1) battery_pane_stacon_g2

0x0001,

0xf6ca,	// (0x000357ea) battery_pane_stacon_g_ParamLimits

0xf6ca,	// (0x000357ea) battery_pane_stacon_g

0xf4ef,	// (0x0003560f) navi_icon_pane_stacon

0xf503,	// (0x00035623) navi_navi_pane_stacon

0xf4ef,	// (0x0003560f) navi_text_pane_stacon

0xf448,	// (0x00035568) control_bottom_pane_stacon_g1

0xf517,	// (0x00035637) control_bottom_pane_stacon_t1_ParamLimits

0xf517,	// (0x00035637) control_bottom_pane_stacon_t1

0x9f70,	// (0x00030090) grid_app_pane_ParamLimits

0x9f70,	// (0x00030090) grid_app_pane

0x9fa8,	// (0x000300c8) scroll_pane_cp15_ParamLimits

0x9fa8,	// (0x000300c8) scroll_pane_cp15

0x9fbd,	// (0x000300dd) cell_app_pane_ParamLimits

0x9fbd,	// (0x000300dd) cell_app_pane

0xa002,	// (0x00030122) cell_app_pane_g1_ParamLimits

0xa002,	// (0x00030122) cell_app_pane_g1

0xce53,	// (0x00032f73) cell_app_pane_g2_ParamLimits

0xce53,	// (0x00032f73) cell_app_pane_g2

0x0001,

0xf6cf,	// (0x000357ef) cell_app_pane_g_ParamLimits

0xf6cf,	// (0x000357ef) cell_app_pane_g

0xa026,	// (0x00030146) cell_app_pane_t1_ParamLimits

0xa026,	// (0x00030146) cell_app_pane_t1

0xce5f,	// (0x00032f7f) grid_highlight_pane_ParamLimits

0xce5f,	// (0x00032f7f) grid_highlight_pane

0xcbe1,	// (0x00032d01) cell_highlight_pane_g1

0xcbe9,	// (0x00032d09) cell_highlight_pane_g2

0xcbf1,	// (0x00032d11) cell_highlight_pane_g3

0xcbf9,	// (0x00032d19) cell_highlight_pane_g4

0xcc01,	// (0x00032d21) cell_highlight_pane_g5

0xcc09,	// (0x00032d29) cell_highlight_pane_g6

0xcc11,	// (0x00032d31) cell_highlight_pane_g7

0xcc19,	// (0x00032d39) cell_highlight_pane_g8

0xcc21,	// (0x00032d41) cell_highlight_pane_g9

0xc771,	// (0x00032891) cell_highlight_pane_g10

0x0009,

0xf67d,	// (0x0003579d) cell_highlight_pane_g

0xce70,	// (0x00032f90) bg_scroll_pane

0xa046,	// (0x00030166) scroll_handle_pane

0xceb7,	// (0x00032fd7) scroll_bg_pane_g1

0xcecc,	// (0x00032fec) scroll_bg_pane_g2

0xcee4,	// (0x00033004) scroll_bg_pane_g3

0x0002,

0xf6d4,	// (0x000357f4) scroll_bg_pane_g

0xa05a,	// (0x0003017a) scroll_handle_focus_pane_ParamLimits

0xa05a,	// (0x0003017a) scroll_handle_focus_pane

0xceb7,	// (0x00032fd7) scroll_handle_pane_g1

0xcef9,	// (0x00033019) scroll_handle_pane_g2

0xcee4,	// (0x00033004) scroll_handle_pane_g3

0x0002,

0xf6db,	// (0x000357fb) scroll_handle_pane_g

0xcc32,	// (0x00032d52) bg_popup_sub_pane_cp21_ParamLimits

0xcc32,	// (0x00032d52) bg_popup_sub_pane_cp21

0xa067,	// (0x00030187) popup_fep_japan_predictive_window_t1_ParamLimits

0xa067,	// (0x00030187) popup_fep_japan_predictive_window_t1

0xa07e,	// (0x0003019e) popup_fep_japan_predictive_window_t2_ParamLimits

0xa07e,	// (0x0003019e) popup_fep_japan_predictive_window_t2

0xa0b1,	// (0x000301d1) popup_fep_japan_predictive_window_t3_ParamLimits

0xa0b1,	// (0x000301d1) popup_fep_japan_predictive_window_t3

0x0002,

0xf6e2,	// (0x00035802) popup_fep_japan_predictive_window_t_ParamLimits

0xf6e2,	// (0x00035802) popup_fep_japan_predictive_window_t

0xc77b,	// (0x0003289b) bg_popup_sub_pane_cp23

0xa0e8,	// (0x00030208) listscroll_japin_cand_pane

0xcf0d,	// (0x0003302d) popup_fep_japan_candidate_window_t1

0xcf1b,	// (0x0003303b) candidate_pane_ParamLimits

0xcf1b,	// (0x0003303b) candidate_pane

0xa0f0,	// (0x00030210) scroll_pane_cp30

0xcf2d,	// (0x0003304d) list_single_popup_jap_candidate_pane_ParamLimits

0xcf2d,	// (0x0003304d) list_single_popup_jap_candidate_pane

0xc77b,	// (0x0003289b) list_highlight_pane_cp30

0xcf42,	// (0x00033062) list_single_popup_jap_candidate_pane_t1

0xcf51,	// (0x00033071) level_1_signal

0xcf5e,	// (0x0003307e) level_2_signal

0xcf6b,	// (0x0003308b) level_3_signal

0xcf78,	// (0x00033098) level_4_signal

0xcf85,	// (0x000330a5) level_5_signal

0xcf92,	// (0x000330b2) level_6_signal

0xcf9f,	// (0x000330bf) level_7_signal

0xcf51,	// (0x00033071) level_1_battery

0xcf5e,	// (0x0003307e) level_2_battery

0xcf6b,	// (0x0003308b) level_3_battery

0xcf78,	// (0x00033098) level_4_battery

0xcf85,	// (0x000330a5) level_5_battery

0xcf92,	// (0x000330b2) level_6_battery

0xcf9f,	// (0x000330bf) level_7_battery

0xcfc4,	// (0x000330e4) list_menu_pane_ParamLimits

0xcfc4,	// (0x000330e4) list_menu_pane

0xcfda,	// (0x000330fa) scroll_pane_cp25_ParamLimits

0xcfda,	// (0x000330fa) scroll_pane_cp25

0xa0f8,	// (0x00030218) list_double2_graphic_pane_cp2_ParamLimits

0xa0f8,	// (0x00030218) list_double2_graphic_pane_cp2

0xa0f8,	// (0x00030218) list_double2_large_graphic_pane_cp2_ParamLimits

0xa0f8,	// (0x00030218) list_double2_large_graphic_pane_cp2

0xa0f8,	// (0x00030218) list_double2_pane_cp2_ParamLimits

0xa0f8,	// (0x00030218) list_double2_pane_cp2

0xa0f8,	// (0x00030218) list_double_graphic_pane_cp2_ParamLimits

0xa0f8,	// (0x00030218) list_double_graphic_pane_cp2

0xa0f8,	// (0x00030218) list_double_large_graphic_pane_cp2_ParamLimits

0xa0f8,	// (0x00030218) list_double_large_graphic_pane_cp2

0xa0f8,	// (0x00030218) list_double_number_pane_cp2_ParamLimits

0xa0f8,	// (0x00030218) list_double_number_pane_cp2

0xa0f8,	// (0x00030218) list_double_pane_cp2_ParamLimits

0xa0f8,	// (0x00030218) list_double_pane_cp2

0xa107,	// (0x00030227) list_single_2graphic_pane_cp2_ParamLimits

0xa107,	// (0x00030227) list_single_2graphic_pane_cp2

0xa107,	// (0x00030227) list_single_graphic_heading_pane_cp2_ParamLimits

0xa107,	// (0x00030227) list_single_graphic_heading_pane_cp2

0xa107,	// (0x00030227) list_single_graphic_pane_cp2_ParamLimits

0xa107,	// (0x00030227) list_single_graphic_pane_cp2

0xa107,	// (0x00030227) list_single_heading_pane_cp2_ParamLimits

0xa107,	// (0x00030227) list_single_heading_pane_cp2

0xd003,	// (0x00033123) list_single_large_graphic_pane_cp2_ParamLimits

0xd003,	// (0x00033123) list_single_large_graphic_pane_cp2

0xa107,	// (0x00030227) list_single_number_heading_pane_cp2_ParamLimits

0xa107,	// (0x00030227) list_single_number_heading_pane_cp2

0xa107,	// (0x00030227) list_single_number_pane_cp2_ParamLimits

0xa107,	// (0x00030227) list_single_number_pane_cp2

0xa107,	// (0x00030227) list_single_pane_cp2_ParamLimits

0xa107,	// (0x00030227) list_single_pane_cp2

0xd01d,	// (0x0003313d) bg_popup_sub_pane_cp22

0x0276,	// (0x00026396) popup_side_volume_key_window_g1

0x029a,	// (0x000263ba) popup_side_volume_key_window_t1

0xa1cf,	// (0x000302ef) volume_small_pane_cp1

0xc7c9,	// (0x000328e9) bg_popup_sub_pane_cp24_ParamLimits

0xc7c9,	// (0x000328e9) bg_popup_sub_pane_cp24

0xd033,	// (0x00033153) fep_china_uni_candidate_pane_ParamLimits

0xd033,	// (0x00033153) fep_china_uni_candidate_pane

0xd047,	// (0x00033167) fep_china_uni_entry_pane

0xd057,	// (0x00033177) popup_fep_china_uni_window_g1

0xa1d7,	// (0x000302f7) fep_china_uni_entry_pane_g1

0xa1df,	// (0x000302ff) fep_china_uni_entry_pane_g2

0x0001,

0xf713,	// (0x00035833) fep_china_uni_entry_pane_g

0xd073,	// (0x00033193) fep_entry_item_pane

0xd07d,	// (0x0003319d) fep_candidate_item_pane

0xa1e7,	// (0x00030307) fep_china_uni_candidate_pane_g1

0xd085,	// (0x000331a5) fep_china_uni_candidate_pane_g2

0xd08d,	// (0x000331ad) fep_china_uni_candidate_pane_g3

0xa1ef,	// (0x0003030f) fep_china_uni_candidate_pane_g4

0x0003,

0xf718,	// (0x00035838) fep_china_uni_candidate_pane_g

0xc771,	// (0x00032891) fep_entry_item_pane_g1

0xd095,	// (0x000331b5) fep_entry_item_pane_t1_ParamLimits

0xd095,	// (0x000331b5) fep_entry_item_pane_t1

0xd0ab,	// (0x000331cb) fep_candidate_item_pane_t1_ParamLimits

0xd0ab,	// (0x000331cb) fep_candidate_item_pane_t1

0xd0c0,	// (0x000331e0) fep_candidate_item_pane_t2_ParamLimits

0xd0c0,	// (0x000331e0) fep_candidate_item_pane_t2

0x0001,

0xf721,	// (0x00035841) fep_candidate_item_pane_t_ParamLimits

0xf721,	// (0x00035841) fep_candidate_item_pane_t

0xc7d7,	// (0x000328f7) list_highlight_pane_cp31_ParamLimits

0xc7d7,	// (0x000328f7) list_highlight_pane_cp31

0xd0d2,	// (0x000331f2) level_1_signal_lsc

0xd0db,	// (0x000331fb) level_2_signal_lsc

0xd0e4,	// (0x00033204) level_3_signal_lsc

0xd0ed,	// (0x0003320d) level_4_signal_lsc

0xd0f6,	// (0x00033216) level_5_signal_lsc

0xd0ff,	// (0x0003321f) level_6_signal_lsc

0xd108,	// (0x00033228) level_7_signal_lsc

0xd108,	// (0x00033228) level_1_battery_lsc

0xd111,	// (0x00033231) level_2_battery_lsc

0xd11a,	// (0x0003323a) level_3_battery_lsc

0xd123,	// (0x00033243) level_4_battery_lsc

0xd12c,	// (0x0003324c) level_5_battery_lsc

0xd135,	// (0x00033255) level_6_battery_lsc

0xd0d2,	// (0x000331f2) level_7_battery_lsc

0xd13e,	// (0x0003325e) scroll_handle_focus_pane_g1

0xd147,	// (0x00033267) scroll_handle_focus_pane_g2

0xd150,	// (0x00033270) scroll_handle_focus_pane_g3

0x0002,

0xf726,	// (0x00035846) scroll_handle_focus_pane_g

0x9368,	// (0x0002f488) list_single_2graphic_pane_g1_ParamLimits

0x9368,	// (0x0002f488) list_single_2graphic_pane_g1

0x8df2,	// (0x0002ef12) list_single_2graphic_pane_g2_ParamLimits

0x8df2,	// (0x0002ef12) list_single_2graphic_pane_g2

0xea0e,	// (0x00034b2e) list_single_2graphic_pane_g3_ParamLimits

0xea0e,	// (0x00034b2e) list_single_2graphic_pane_g3

0x9374,	// (0x0002f494) list_single_2graphic_pane_g4_ParamLimits

0x9374,	// (0x0002f494) list_single_2graphic_pane_g4

0x0003,

0xf72d,	// (0x0003584d) list_single_2graphic_pane_g_ParamLimits

0xf72d,	// (0x0003584d) list_single_2graphic_pane_g

0x9380,	// (0x0002f4a0) list_single_2graphic_pane_t1_ParamLimits

0x9380,	// (0x0002f4a0) list_single_2graphic_pane_t1

0x93ae,	// (0x0002f4ce) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x93ae,	// (0x0002f4ce) list_double2_graphic_large_graphic_pane_g1

0x8e51,	// (0x0002ef71) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8e51,	// (0x0002ef71) list_double2_graphic_large_graphic_pane_g2

0xeac2,	// (0x00034be2) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xeac2,	// (0x00034be2) list_double2_graphic_large_graphic_pane_g3

0x93c0,	// (0x0002f4e0) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x93c0,	// (0x0002f4e0) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf736,	// (0x00035856) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf736,	// (0x00035856) list_double2_graphic_large_graphic_pane_g

0x8fe7,	// (0x0002f107) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8fe7,	// (0x0002f107) list_double2_graphic_large_graphic_pane_t1

0x93cc,	// (0x0002f4ec) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x93cc,	// (0x0002f4ec) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf73f,	// (0x0003585f) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf73f,	// (0x0003585f) list_double2_graphic_large_graphic_pane_t

0xa26a,	// (0x0003038a) popup_fast_swap_window_ParamLimits

0xa26a,	// (0x0003038a) popup_fast_swap_window

0xa286,	// (0x000303a6) popup_side_volume_key_window

0x0593,	// (0x000266b3) stacon_top_pane

0x059d,	// (0x000266bd) status_pane_ParamLimits

0x059d,	// (0x000266bd) status_pane

0xa2a0,	// (0x000303c0) status_small_pane

0xc77b,	// (0x0003289b) control_pane

0xc77b,	// (0x0003289b) stacon_bottom_pane

0xcb6c,	// (0x00032c8c) scroll_pane_cp121

0xcb63,	// (0x00032c83) set_content_pane

0xa1f7,	// (0x00030317) bg_active_tab_pane_g1_cp1

0xa200,	// (0x00030320) bg_active_tab_pane_g2_cp1

0xa209,	// (0x00030329) bg_active_tab_pane_g3_cp1

0xa1f7,	// (0x00030317) bg_passive_tab_pane_g1_cp1

0xa200,	// (0x00030320) bg_passive_tab_pane_g2_cp1

0xa209,	// (0x00030329) bg_passive_tab_pane_g3_cp1

0xa212,	// (0x00030332) bg_active_tab_pane_g1_cp2

0xa200,	// (0x00030320) bg_active_tab_pane_g2_cp2

0xa21b,	// (0x0003033b) bg_active_tab_pane_g3_cp2

0xa212,	// (0x00030332) bg_passive_tab_pane_g1_cp2

0xa200,	// (0x00030320) bg_passive_tab_pane_g2_cp2

0xa21b,	// (0x0003033b) bg_passive_tab_pane_g3_cp2

0xa224,	// (0x00030344) bg_active_tab_pane_g1_cp3

0xa200,	// (0x00030320) bg_active_tab_pane_g2_cp3

0xa22d,	// (0x0003034d) bg_active_tab_pane_g3_cp3

0xa224,	// (0x00030344) bg_passive_tab_pane_g1_cp3

0xa200,	// (0x00030320) bg_passive_tab_pane_g2_cp3

0xa22d,	// (0x0003034d) bg_passive_tab_pane_g3_cp3

0xa236,	// (0x00030356) bg_active_tab_pane_g1_cp4

0xa200,	// (0x00030320) bg_active_tab_pane_g2_cp4

0xa241,	// (0x00030361) bg_active_tab_pane_g3_cp4

0xa236,	// (0x00030356) bg_passive_tab_pane_g1_cp4

0xa200,	// (0x00030320) bg_passive_tab_pane_g2_cp4

0xa241,	// (0x00030361) bg_passive_tab_pane_g3_cp4

0xa24c,	// (0x0003036c) bg_active_tab_pane_g1_cp5

0xa200,	// (0x00030320) bg_active_tab_pane_g2_cp5

0xa255,	// (0x00030375) bg_active_tab_pane_g3_cp5

0xa24c,	// (0x0003036c) bg_passive_tab_pane_g1_cp5

0xa200,	// (0x00030320) bg_passive_tab_pane_g2_cp5

0xa255,	// (0x00030375) bg_passive_tab_pane_g3_cp5

0x4698,	// (0x0002a7b8) list_set_graphic_pane_ParamLimits

0x4698,	// (0x0002a7b8) list_set_graphic_pane

0xc77b,	// (0x0003289b) bg_set_opt_pane_cp4

0x04e2,	// (0x00026602) list_set_graphic_pane_g1_ParamLimits

0x04e2,	// (0x00026602) list_set_graphic_pane_g1

0x04ee,	// (0x0002660e) list_set_graphic_pane_g2_ParamLimits

0x04ee,	// (0x0002660e) list_set_graphic_pane_g2

0x0001,

0xf744,	// (0x00035864) list_set_graphic_pane_g_ParamLimits

0xf744,	// (0x00035864) list_set_graphic_pane_g

0x0009,

0xfac9,	// (0x00035be9) volume_small_pane_cp_g

0xa25e,	// (0x0003037e) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa25e,	// (0x0003037e) list_double2_large_graphic_pane_g1_cp2

0x051c,	// (0x0002663c) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x051c,	// (0x0002663c) list_double2_large_graphic_pane_g2_cp2

0x052d,	// (0x0002664d) list_double2_large_graphic_pane_g3_cp2

0x0535,	// (0x00026655) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x0535,	// (0x00026655) list_double2_large_graphic_pane_t1_cp2

0x054b,	// (0x0002666b) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x054b,	// (0x0002666b) list_double2_large_graphic_pane_t2_cp2

0xb7ad,	// (0x000318cd) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb7ad,	// (0x000318cd) list_double_large_graphic_pane_g1_cp2

0x3c6a,	// (0x00029d8a) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3c6a,	// (0x00029d8a) list_double_large_graphic_pane_g2_cp2

0x06b8,	// (0x000267d8) list_double_large_graphic_pane_g3_cp2

0x3c7b,	// (0x00029d9b) list_double_large_graphic_pane_g4_cp

0x3c83,	// (0x00029da3) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3c83,	// (0x00029da3) list_double_large_graphic_pane_t1_cp2

0x3c9a,	// (0x00029dba) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3c9a,	// (0x00029dba) list_double_large_graphic_pane_t2_cp2

0x05b6,	// (0x000266d6) list_double2_graphic_pane_g1_cp2_ParamLimits

0x05b6,	// (0x000266d6) list_double2_graphic_pane_g1_cp2

0x05c4,	// (0x000266e4) list_double2_graphic_pane_g2_cp2_ParamLimits

0x05c4,	// (0x000266e4) list_double2_graphic_pane_g2_cp2

0x05d5,	// (0x000266f5) list_double2_graphic_pane_g3_cp2

0x05df,	// (0x000266ff) list_double2_graphic_pane_t1_cp2_ParamLimits

0x05df,	// (0x000266ff) list_double2_graphic_pane_t1_cp2

0x05f5,	// (0x00026715) list_double2_graphic_pane_t2_cp2_ParamLimits

0x05f5,	// (0x00026715) list_double2_graphic_pane_t2_cp2

0xd159,	// (0x00033279) list_single_number_heading_pane_g1_cp2_ParamLimits

0xd159,	// (0x00033279) list_single_number_heading_pane_g1_cp2

0x0607,	// (0x00026727) list_single_number_heading_pane_g2_cp2

0x060f,	// (0x0002672f) list_single_number_heading_pane_t1_cp2_ParamLimits

0x060f,	// (0x0002672f) list_single_number_heading_pane_t1_cp2

0x0625,	// (0x00026745) list_single_number_heading_pane_t2_cp2_ParamLimits

0x0625,	// (0x00026745) list_single_number_heading_pane_t2_cp2

0x0637,	// (0x00026757) list_single_number_heading_pane_t3_cp2_ParamLimits

0x0637,	// (0x00026757) list_single_number_heading_pane_t3_cp2

0xd159,	// (0x00033279) list_single_heading_pane_g1_cp2_ParamLimits

0xd159,	// (0x00033279) list_single_heading_pane_g1_cp2

0x0607,	// (0x00026727) list_single_heading_pane_g2_cp2

0x060f,	// (0x0002672f) list_single_heading_pane_t1_cp2_ParamLimits

0x060f,	// (0x0002672f) list_single_heading_pane_t1_cp2

0x3a63,	// (0x00029b83) list_single_heading_pane_t2_cp2_ParamLimits

0x3a63,	// (0x00029b83) list_single_heading_pane_t2_cp2

0x39ab,	// (0x00029acb) list_double_graphic_pane_g1_cp2_ParamLimits

0x39ab,	// (0x00029acb) list_double_graphic_pane_g1_cp2

0x39b7,	// (0x00029ad7) list_double_graphic_pane_g2_cp2_ParamLimits

0x39b7,	// (0x00029ad7) list_double_graphic_pane_g2_cp2

0x39c6,	// (0x00029ae6) list_double_graphic_pane_g3_cp2

0x39ce,	// (0x00029aee) list_double_graphic_pane_t1_cp2_ParamLimits

0x39ce,	// (0x00029aee) list_double_graphic_pane_t1_cp2

0x39e4,	// (0x00029b04) list_double_graphic_pane_t2_cp2_ParamLimits

0x39e4,	// (0x00029b04) list_double_graphic_pane_t2_cp2

0x06ac,	// (0x000267cc) list_double_number_pane_g1_cp2_ParamLimits

0x06ac,	// (0x000267cc) list_double_number_pane_g1_cp2

0x06b8,	// (0x000267d8) list_double_number_pane_g2_cp2

0x396f,	// (0x00029a8f) list_double_number_pane_t1_cp2_ParamLimits

0x396f,	// (0x00029a8f) list_double_number_pane_t1_cp2

0x3983,	// (0x00029aa3) list_double_number_pane_t2_cp2_ParamLimits

0x3983,	// (0x00029aa3) list_double_number_pane_t2_cp2

0x3999,	// (0x00029ab9) list_double_number_pane_t3_cp2_ParamLimits

0x3999,	// (0x00029ab9) list_double_number_pane_t3_cp2

0x3858,	// (0x00029978) list_single_graphic_pane_g1_cp2_ParamLimits

0x3858,	// (0x00029978) list_single_graphic_pane_g1_cp2

0x0710,	// (0x00026830) list_single_graphic_pane_g2_cp2_ParamLimits

0x0710,	// (0x00026830) list_single_graphic_pane_g2_cp2

0x071c,	// (0x0002683c) list_single_graphic_pane_g3_cp2

0x382e,	// (0x0002994e) list_single_graphic_pane_t1_cp2_ParamLimits

0x382e,	// (0x0002994e) list_single_graphic_pane_t1_cp2

0x0710,	// (0x00026830) list_single_number_pane_g1_cp2_ParamLimits

0x0710,	// (0x00026830) list_single_number_pane_g1_cp2

0x071c,	// (0x0002683c) list_single_number_pane_g2_cp2

0x382e,	// (0x0002994e) list_single_number_pane_t1_cp2_ParamLimits

0x382e,	// (0x0002994e) list_single_number_pane_t1_cp2

0x3844,	// (0x00029964) list_single_number_pane_t2_cp2_ParamLimits

0x3844,	// (0x00029964) list_single_number_pane_t2_cp2

0x051c,	// (0x0002663c) list_double2_pane_g1_cp2_ParamLimits

0x051c,	// (0x0002663c) list_double2_pane_g1_cp2

0x052d,	// (0x0002664d) list_double2_pane_g2_cp2

0x0684,	// (0x000267a4) list_double2_pane_t1_cp2_ParamLimits

0x0684,	// (0x000267a4) list_double2_pane_t1_cp2

0x069a,	// (0x000267ba) list_double2_pane_t2_cp2_ParamLimits

0x069a,	// (0x000267ba) list_double2_pane_t2_cp2

0x06ac,	// (0x000267cc) list_double_pane_g1_cp2_ParamLimits

0x06ac,	// (0x000267cc) list_double_pane_g1_cp2

0x06b8,	// (0x000267d8) list_double_pane_g2_cp2

0x06c0,	// (0x000267e0) list_double_pane_t1_cp2_ParamLimits

0x06c0,	// (0x000267e0) list_double_pane_t1_cp2

0x06d6,	// (0x000267f6) list_double_pane_t2_cp2_ParamLimits

0x06d6,	// (0x000267f6) list_double_pane_t2_cp2

0xa2ab,	// (0x000303cb) list_single_pane_cp2_g3

0x0710,	// (0x00026830) list_single_pane_g1_cp2_ParamLimits

0x0710,	// (0x00026830) list_single_pane_g1_cp2

0x071c,	// (0x0002683c) list_single_pane_g2_cp2

0x0724,	// (0x00026844) list_single_pane_t1_cp2_ParamLimits

0x0724,	// (0x00026844) list_single_pane_t1_cp2

0xa2b3,	// (0x000303d3) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa2b3,	// (0x000303d3) list_single_large_graphic_pane_g1_cp2

0x0748,	// (0x00026868) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x0748,	// (0x00026868) list_single_large_graphic_pane_g2_cp2

0x0754,	// (0x00026874) list_single_large_graphic_pane_g3_cp2

0xa2bf,	// (0x000303df) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa2bf,	// (0x000303df) list_single_large_graphic_pane_g4_cp1

0x0776,	// (0x00026896) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x0776,	// (0x00026896) list_single_large_graphic_pane_t1_cp2

0x37fa,	// (0x0002991a) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x37fa,	// (0x0002991a) list_single_graphic_heading_pane_g1_cp2

0x37c7,	// (0x000298e7) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x37c7,	// (0x000298e7) list_single_graphic_heading_pane_g4_cp2

0x071c,	// (0x0002683c) list_single_graphic_heading_pane_g5_cp2

0x3806,	// (0x00029926) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3806,	// (0x00029926) list_single_graphic_heading_pane_t1_cp2

0x381c,	// (0x0002993c) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x381c,	// (0x0002993c) list_single_graphic_heading_pane_t2_cp2

0x37bb,	// (0x000298db) list_single_2graphic_pane_g1_cp2_ParamLimits

0x37bb,	// (0x000298db) list_single_2graphic_pane_g1_cp2

0x37c7,	// (0x000298e7) list_single_2graphic_pane_g2_cp2_ParamLimits

0x37c7,	// (0x000298e7) list_single_2graphic_pane_g2_cp2

0x071c,	// (0x0002683c) list_single_2graphic_pane_g3_cp2

0x37d8,	// (0x000298f8) list_single_2graphic_pane_g4_cp2_ParamLimits

0x37d8,	// (0x000298f8) list_single_2graphic_pane_g4_cp2

0x37e4,	// (0x00029904) list_single_2graphic_pane_t1_cp2_ParamLimits

0x37e4,	// (0x00029904) list_single_2graphic_pane_t1_cp2

0xc771,	// (0x00032891) list_highlight_pane_g10_cp1

0x33a3,	// (0x000294c3) list_highlight_pane_g1_cp1

0x33ab,	// (0x000294cb) list_highlight_pane_g2_cp1

0x33b3,	// (0x000294d3) list_highlight_pane_g3_cp1

0x33bb,	// (0x000294db) list_highlight_pane_g4_cp1

0x33c3,	// (0x000294e3) list_highlight_pane_g5_cp1

0x33cb,	// (0x000294eb) list_highlight_pane_g6_cp1

0x33d3,	// (0x000294f3) list_highlight_pane_g7_cp1

0x33db,	// (0x000294fb) list_highlight_pane_g8_cp1

0x33e3,	// (0x00029503) list_highlight_pane_g9_cp1

0xb53a,	// (0x0003165a) form_field_slider_pane_t3

0xb548,	// (0x00031668) form_field_slider_pane_t4

0x32e7,	// (0x00029407) slider_form_pane_ParamLimits

0x32e7,	// (0x00029407) slider_form_pane

0xc77b,	// (0x0003289b) control_abbreviations

0xc77b,	// (0x0003289b) control_conventions

0xc77b,	// (0x0003289b) control_definitions

0xc77b,	// (0x0003289b) format_table_attribute

0xb784,	// (0x000318a4) bg_popup_preview_window_pane_g9

0xc77b,	// (0x0003289b) format_table_data2

0xc77b,	// (0x0003289b) format_table_data3

0xc77b,	// (0x0003289b) format_table_data_example

0x0008,

0xc77b,	// (0x0003289b) intro_purpose

0xf8d4,	// (0x000359f4) bg_popup_preview_window_pane_g

0xc77b,	// (0x0003289b) texts_category

0xc77b,	// (0x0003289b) texts_graphics

0x078c,	// (0x000268ac) text_digital

0x079b,	// (0x000268bb) text_primary

0x07aa,	// (0x000268ca) text_primary_small

0x07b9,	// (0x000268d9) text_secondary

0x07c8,	// (0x000268e8) text_title

0xbba5,	// (0x00031cc5) bg_passive_tab_pane_g1_cp3_srt

0xa200,	// (0x00030320) bg_passive_tab_pane_g2_cp3_srt

0xbbae,	// (0x00031cce) bg_passive_tab_pane_g3_cp3_srt

0xc7c9,	// (0x000328e9) bg_active_tab_pane_cp3_srt_ParamLimits

0xc7c9,	// (0x000328e9) bg_active_tab_pane_cp3_srt

0xbbb7,	// (0x00031cd7) tabs_4_active_pane_srt_g1

0xbbbf,	// (0x00031cdf) tabs_4_active_pane_srt_t1_ParamLimits

0xbbbf,	// (0x00031cdf) tabs_4_active_pane_srt_t1

0xbba5,	// (0x00031cc5) bg_active_tab_pane_g1_cp3_copy1

0xa200,	// (0x00030320) bg_active_tab_pane_g2_cp3_copy1

0xbbae,	// (0x00031cce) bg_active_tab_pane_g3_cp3_copy1

0xc7d7,	// (0x000328f7) tabs_2_long_active_pane_srt_ParamLimits

0xc7d7,	// (0x000328f7) tabs_2_long_active_pane_srt

0xc7d7,	// (0x000328f7) tabs_2_long_passive_pane_srt_ParamLimits

0xc7d7,	// (0x000328f7) tabs_2_long_passive_pane_srt

0x0d0e,	// (0x00026e2e) bg_passive_tab_pane_cp4_srt_ParamLimits

0x0d0e,	// (0x00026e2e) bg_passive_tab_pane_cp4_srt

0xb8ec,	// (0x00031a0c) bg_passive_tab_pane_g1_cp4_srt

0xa200,	// (0x00030320) bg_passive_tab_pane_g2_cp4_srt

0xb8f5,	// (0x00031a15) bg_passive_tab_pane_g3_cp4_srt

0xc7d7,	// (0x000328f7) bg_active_tab_pane_cp4_srt_ParamLimits

0xc7d7,	// (0x000328f7) bg_active_tab_pane_cp4_srt

0xb8fe,	// (0x00031a1e) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb8fe,	// (0x00031a1e) tabs_2_long_active_pane_srt_t1

0xb8ec,	// (0x00031a0c) bg_active_tab_pane_g1_cp4_srt

0xa200,	// (0x00030320) bg_active_tab_pane_g2_cp4_srt

0xb8f5,	// (0x00031a15) bg_active_tab_pane_g3_cp4_srt

0xc7c9,	// (0x000328e9) tabs_3_long_active_pane_srt_ParamLimits

0xc7c9,	// (0x000328e9) tabs_3_long_active_pane_srt

0xc7c9,	// (0x000328e9) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc7c9,	// (0x000328e9) tabs_3_long_passive_pane_cp_srt

0xc7c9,	// (0x000328e9) tabs_3_long_passive_pane_srt_ParamLimits

0xc7c9,	// (0x000328e9) tabs_3_long_passive_pane_srt

0x0d0e,	// (0x00026e2e) bg_passive_tab_pane_cp5_srt_ParamLimits

0x0d0e,	// (0x00026e2e) bg_passive_tab_pane_cp5_srt

0xa24c,	// (0x0003036c) bg_passive_tab_pane_g1_cp5_srt

0xa200,	// (0x00030320) bg_passive_tab_pane_g2_cp5_srt

0xa255,	// (0x00030375) bg_passive_tab_pane_g3_cp5_srt

0xc7d7,	// (0x000328f7) bg_active_tab_pane_cp5_srt_ParamLimits

0xc7d7,	// (0x000328f7) bg_active_tab_pane_cp5_srt

0xb8d6,	// (0x000319f6) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb8d6,	// (0x000319f6) tabs_3_long_active_pane_srt_t1

0xa24c,	// (0x0003036c) bg_active_tab_pane_g1_cp5_srt

0xa200,	// (0x00030320) bg_active_tab_pane_g2_cp5_srt

0xa255,	// (0x00030375) bg_active_tab_pane_g3_cp5_srt

0x3eae,	// (0x00029fce) navi_text_pane_srt_t1

0x3ea6,	// (0x00029fc6) navi_icon_pane_srt_g1

0x0a42,	// (0x00026b62) midp_editing_number_pane_srt

0x07d7,	// (0x000268f7) midp_ticker_pane_srt

0x0a4a,	// (0x00026b6a) midp_ticker_pane_srt_g1

0x0a52,	// (0x00026b72) midp_ticker_pane_srt_g2

0x0001,

0xf763,	// (0x00035883) midp_ticker_pane_srt_g

0x0a5a,	// (0x00026b7a) midp_ticker_pane_srt_t1

0x3e97,	// (0x00029fb7) midp_editing_number_pane_t1_copy1

0xa2d9,	// (0x000303f9) listscroll_midp_pane

0xa2d9,	// (0x000303f9) midp_form_pane

0xa344,	// (0x00030464) midp_info_popup_window_ParamLimits

0xa344,	// (0x00030464) midp_info_popup_window

0xcc32,	// (0x00032d52) bg_popup_sub_pane_cp50_ParamLimits

0xcc32,	// (0x00032d52) bg_popup_sub_pane_cp50

0x2fdf,	// (0x000290ff) listscroll_midp_info_pane_ParamLimits

0x2fdf,	// (0x000290ff) listscroll_midp_info_pane

0x2fbf,	// (0x000290df) listscroll_form_midp_pane_ParamLimits

0x2fbf,	// (0x000290df) listscroll_form_midp_pane

0x2fcb,	// (0x000290eb) scroll_bar_cp050

0x2fbf,	// (0x000290df) list_midp_pane

0xbdaf,	// (0x00031ecf) signal_pane_g2_cp

0x2ed9,	// (0x00028ff9) listscroll_midp_info_pane_t1_ParamLimits

0x2ed9,	// (0x00028ff9) listscroll_midp_info_pane_t1

0xb374,	// (0x00031494) listscroll_midp_info_pane_t2_ParamLimits

0xb374,	// (0x00031494) listscroll_midp_info_pane_t2

0xb3b2,	// (0x000314d2) listscroll_midp_info_pane_t3_ParamLimits

0xb3b2,	// (0x000314d2) listscroll_midp_info_pane_t3

0xb3ec,	// (0x0003150c) listscroll_midp_info_pane_t4_ParamLimits

0xb3ec,	// (0x0003150c) listscroll_midp_info_pane_t4

0x0003,

0xf80f,	// (0x0003592f) listscroll_midp_info_pane_t_ParamLimits

0xf80f,	// (0x0003592f) listscroll_midp_info_pane_t

0xcca8,	// (0x00032dc8) scroll_pane_cp21

0x2e79,	// (0x00028f99) form_midp_field_choice_group_pane

0xb337,	// (0x00031457) form_midp_field_text_pane

0x2ebf,	// (0x00028fdf) form_midp_field_time_pane

0x2ec7,	// (0x00028fe7) form_midp_gauge_slider_pane

0x2ed0,	// (0x00028ff0) form_midp_gauge_wait_pane

0xc77b,	// (0x0003289b) form_midp_image_pane

0x93de,	// (0x0002f4fe) list_single_midp_pane_ParamLimits

0x93de,	// (0x0002f4fe) list_single_midp_pane

0xb315,	// (0x00031435) form_midp_field_text_pane_t1

0x2bf8,	// (0x00028d18) input_focus_pane_cp050

0x2e68,	// (0x00028f88) list_midp_form_text_pane

0x2dfd,	// (0x00028f1d) form_midp_field_choice_group_pane_t1

0x2e0b,	// (0x00028f2b) input_focus_pane_cp051

0x2e1f,	// (0x00028f3f) list_midp_choice_pane

0xc77b,	// (0x0003289b) status_idle_pane

0x2de1,	// (0x00028f01) form_midp_field_time_pane_t1

0xc771,	// (0x00032891) wait_anim_pane_g2_copy1

0x2def,	// (0x00028f0f) form_midp_field_time_pane_t2

0x0001,

0x0901,	// (0x00026a21) aid_navinavi_width_2_pane

0xf80a,	// (0x0003592a) form_midp_field_time_pane_t

0xc77b,	// (0x0003289b) input_focus_pane_cp052

0xc77b,	// (0x0003289b) bg_input_focus_pane_cp040

0x2da1,	// (0x00028ec1) form_midp_gauge_slider_pane_t1

0x2daf,	// (0x00028ecf) form_midp_gauge_slider_pane_t2

0xb2f9,	// (0x00031419) form_midp_gauge_slider_pane_t3

0xb307,	// (0x00031427) form_midp_gauge_slider_pane_t4

0x0003,

0xf801,	// (0x00035921) form_midp_gauge_slider_pane_t

0x2dd9,	// (0x00028ef9) form_midp_slider_pane

0xc7d7,	// (0x000328f7) bg_input_focus_pane_cp041_ParamLimits

0xc7d7,	// (0x000328f7) bg_input_focus_pane_cp041

0x2d6e,	// (0x00028e8e) form_midp_gauge_wait_pane_t1_ParamLimits

0x2d6e,	// (0x00028e8e) form_midp_gauge_wait_pane_t1

0x2d80,	// (0x00028ea0) form_midp_gauge_wait_pane_t2_ParamLimits

0x2d80,	// (0x00028ea0) form_midp_gauge_wait_pane_t2

0x0001,

0xf7fc,	// (0x0003591c) form_midp_gauge_wait_pane_t_ParamLimits

0xf7fc,	// (0x0003591c) form_midp_gauge_wait_pane_t

0x2d92,	// (0x00028eb2) form_midp_wait_pane_ParamLimits

0x2d92,	// (0x00028eb2) form_midp_wait_pane

0xb2c3,	// (0x000313e3) form_midp_image_pane_g1

0xb2cc,	// (0x000313ec) form_midp_image_pane_t1

0xb2db,	// (0x000313fb) form_midp_image_pane_t2

0xb2ea,	// (0x0003140a) form_midp_image_pane_t3

0x0002,

0xf7f5,	// (0x00035915) form_midp_image_pane_t

0x2d2f,	// (0x00028e4f) list_single_midp_pane_g1

0xec39,	// (0x00034d59) list_single_midp_pane_t1

0xb2ae,	// (0x000313ce) list_midp_form_item_pane_ParamLimits

0xb2ae,	// (0x000313ce) list_midp_form_item_pane

0x08a9,	// (0x000269c9) list_midp_form_item_pane_t1

0x08b8,	// (0x000269d8) midp_ticker_pane_g1

0x08c4,	// (0x000269e4) midp_ticker_pane_g2

0x0001,

0xf749,	// (0x00035869) midp_ticker_pane_g

0x08d0,	// (0x000269f0) midp_ticker_pane_t1

0x40e4,	// (0x0002a204) midp_editing_number_pane_t1

0x40c2,	// (0x0002a1e2) midp_editing_number_pane

0x40d1,	// (0x0002a1f1) midp_ticker_pane

0x3e87,	// (0x00029fa7) ai_message_heading_pane

0xc77b,	// (0x0003289b) bg_popup_window_pane_cp14

0x3e8f,	// (0x00029faf) listscroll_ai_message_pane

0x3e11,	// (0x00029f31) ai_message_heading_pane_g1_ParamLimits

0x3e11,	// (0x00029f31) ai_message_heading_pane_g1

0xb89e,	// (0x000319be) ai_message_heading_pane_g2_ParamLimits

0xb89e,	// (0x000319be) ai_message_heading_pane_g2

0x3e29,	// (0x00029f49) ai_message_heading_pane_g3_ParamLimits

0x3e29,	// (0x00029f49) ai_message_heading_pane_g3

0x3e35,	// (0x00029f55) ai_message_heading_pane_g4_ParamLimits

0x3e35,	// (0x00029f55) ai_message_heading_pane_g4

0x0003,

0xf936,	// (0x00035a56) ai_message_heading_pane_g_ParamLimits

0xf936,	// (0x00035a56) ai_message_heading_pane_g

0xb8aa,	// (0x000319ca) ai_message_heading_pane_t1_ParamLimits

0xb8aa,	// (0x000319ca) ai_message_heading_pane_t1

0xb8c4,	// (0x000319e4) ai_message_heading_pane_t2_ParamLimits

0xb8c4,	// (0x000319e4) ai_message_heading_pane_t2

0x0001,

0xf93f,	// (0x00035a5f) ai_message_heading_pane_t_ParamLimits

0xf93f,	// (0x00035a5f) ai_message_heading_pane_t

0x3e6d,	// (0x00029f8d) bg_popup_heading_pane_cp1_ParamLimits

0x3e6d,	// (0x00029f8d) bg_popup_heading_pane_cp1

0x3dff,	// (0x00029f1f) list_ai_message_pane_ParamLimits

0x3dff,	// (0x00029f1f) list_ai_message_pane

0xcca8,	// (0x00032dc8) scroll_pane_cp10

0x3d9b,	// (0x00029ebb) list_ai_message_pane_g1

0x3da3,	// (0x00029ec3) list_ai_message_pane_g2

0x0001,

0xf913,	// (0x00035a33) list_ai_message_pane_g

0x3dab,	// (0x00029ecb) list_ai_message_pane_t1_ParamLimits

0x3dab,	// (0x00029ecb) list_ai_message_pane_t1

0x3dc0,	// (0x00029ee0) list_ai_message_pane_t2_ParamLimits

0x3dc0,	// (0x00029ee0) list_ai_message_pane_t2

0x3dd5,	// (0x00029ef5) list_ai_message_pane_t3_ParamLimits

0x3dd5,	// (0x00029ef5) list_ai_message_pane_t3

0x3dea,	// (0x00029f0a) list_ai_message_pane_t4_ParamLimits

0x3dea,	// (0x00029f0a) list_ai_message_pane_t4

0x0003,

0xf918,	// (0x00035a38) list_ai_message_pane_t_ParamLimits

0xf918,	// (0x00035a38) list_ai_message_pane_t

0xb82a,	// (0x0003194a) cell_ai_soft_ind_pane_ParamLimits

0xb82a,	// (0x0003194a) cell_ai_soft_ind_pane

0x08e2,	// (0x00026a02) cell_ai_soft_ind_pane_g1_ParamLimits

0x08e2,	// (0x00026a02) cell_ai_soft_ind_pane_g1

0xc77b,	// (0x0003289b) grid_highlight_cp1

0x08ef,	// (0x00026a0f) text_secondary_cp56_ParamLimits

0x08ef,	// (0x00026a0f) text_secondary_cp56

0x3d5b,	// (0x00029e7b) example_general_pane_ParamLimits

0x3d5b,	// (0x00029e7b) example_general_pane

0x3d67,	// (0x00029e87) example_parent_pane_g1_ParamLimits

0x3d67,	// (0x00029e87) example_parent_pane_g1

0x3d73,	// (0x00029e93) example_parent_pane_t1_ParamLimits

0x3d73,	// (0x00029e93) example_parent_pane_t1

0xaa32,	// (0x00030b52) popup_preview_text_window_ParamLimits

0xaa32,	// (0x00030b52) popup_preview_text_window

0x0708,	// (0x00026828) list_single_pane_cp2_g4

0xc9a9,	// (0x00032ac9) bg_popup_preview_window_pane_ParamLimits

0xc9a9,	// (0x00032ac9) bg_popup_preview_window_pane

0xb78c,	// (0x000318ac) popup_preview_text_window_t1_ParamLimits

0xb78c,	// (0x000318ac) popup_preview_text_window_t1

0x3ad3,	// (0x00029bf3) popup_preview_text_window_t2_ParamLimits

0x3ad3,	// (0x00029bf3) popup_preview_text_window_t2

0x3b1c,	// (0x00029c3c) popup_preview_text_window_t3_ParamLimits

0x3b1c,	// (0x00029c3c) popup_preview_text_window_t3

0x3b61,	// (0x00029c81) popup_preview_text_window_t4_ParamLimits

0x3b61,	// (0x00029c81) popup_preview_text_window_t4

0x0004,

0xf8e7,	// (0x00035a07) popup_preview_text_window_t_ParamLimits

0xf8e7,	// (0x00035a07) popup_preview_text_window_t

0x3bdf,	// (0x00029cff) scroll_pane_cp11

0x1808,	// (0x00027928) bg_popup_preview_window_pane_g1

0xb74c,	// (0x0003186c) bg_popup_preview_window_pane_g2

0xb754,	// (0x00031874) bg_popup_preview_window_pane_g3

0xb75c,	// (0x0003187c) bg_popup_preview_window_pane_g4

0xb764,	// (0x00031884) bg_popup_preview_window_pane_g5

0xb76c,	// (0x0003188c) bg_popup_preview_window_pane_g6

0xb774,	// (0x00031894) bg_popup_preview_window_pane_g7

0xb77c,	// (0x0003189c) bg_popup_preview_window_pane_g8

0xe9c7,	// (0x00034ae7) aid_popup_width_pane

0xa9ae,	// (0x00030ace) popup_midp_note_alarm_window_ParamLimits

0xa9ae,	// (0x00030ace) popup_midp_note_alarm_window

0xcb7d,	// (0x00032c9d) data_form_pane_ParamLimits

0x91c5,	// (0x0002f2e5) form_field_data_pane_g1

0x91cf,	// (0x0002f2ef) form_field_data_pane_t1_ParamLimits

0xcb89,	// (0x00032ca9) input_focus_pane_ParamLimits

0x91e9,	// (0x0002f309) data_form_wide_pane_ParamLimits

0x91fa,	// (0x0002f31a) form_field_data_wide_pane_g1

0x9206,	// (0x0002f326) form_field_data_wide_pane_t1_ParamLimits

0xca7d,	// (0x00032b9d) input_focus_pane_cp6_ParamLimits

0x9ee0,	// (0x00030000) input_popup_find_pane_g1_ParamLimits

0x9ee0,	// (0x00030000) input_popup_find_pane_g1

0xf4c2,	// (0x000355e2) aid_navi_side_left_pane

0xf4d7,	// (0x000355f7) aid_navi_side_right_pane

0x349e,	// (0x000295be) bg_popup_window_pane_cp30_ParamLimits

0x349e,	// (0x000295be) bg_popup_window_pane_cp30

0x3518,	// (0x00029638) popup_midp_note_alarm_window_g1_ParamLimits

0x3518,	// (0x00029638) popup_midp_note_alarm_window_g1

0x3548,	// (0x00029668) popup_midp_note_alarm_window_t1_ParamLimits

0x3548,	// (0x00029668) popup_midp_note_alarm_window_t1

0xb58d,	// (0x000316ad) popup_midp_note_alarm_window_t2_ParamLimits

0xb58d,	// (0x000316ad) popup_midp_note_alarm_window_t2

0xb63b,	// (0x0003175b) popup_midp_note_alarm_window_t3_ParamLimits

0xb63b,	// (0x0003175b) popup_midp_note_alarm_window_t3

0xb663,	// (0x00031783) popup_midp_note_alarm_window_t4_ParamLimits

0xb663,	// (0x00031783) popup_midp_note_alarm_window_t4

0x36df,	// (0x000297ff) popup_midp_note_alarm_window_t5_ParamLimits

0x36df,	// (0x000297ff) popup_midp_note_alarm_window_t5

0x000a,

0xf884,	// (0x000359a4) popup_midp_note_alarm_window_t_ParamLimits

0xf884,	// (0x000359a4) popup_midp_note_alarm_window_t

0x378b,	// (0x000298ab) wait_bar_pane_cp1_ParamLimits

0x378b,	// (0x000298ab) wait_bar_pane_cp1

0xc77b,	// (0x0003289b) wait_anim_pane_copy1

0xc77b,	// (0x0003289b) wait_border_pane_copy1

0x3194,	// (0x000292b4) wait_border_pane_g1_copy1

0x9220,	// (0x0002f340) form_field_popup_pane_g1

0x9228,	// (0x0002f348) form_field_popup_pane_t1_ParamLimits

0xcb89,	// (0x00032ca9) input_focus_pane_cp7_ParamLimits

0xcbb7,	// (0x00032cd7) list_form_pane_ParamLimits

0x9242,	// (0x0002f362) form_field_popup_wide_pane_g1

0x924a,	// (0x0002f36a) form_field_popup_wide_pane_t1_ParamLimits

0xcb89,	// (0x00032ca9) input_focus_pane_cp8_ParamLimits

0xcbc3,	// (0x00032ce3) list_form_wide_pane_ParamLimits

0xbc18,	// (0x00031d38) aid_size_cell_graphic_pane

0x92d6,	// (0x0002f3f6) data_form_pane_t1_ParamLimits

0x9408,	// (0x0002f528) data_form_wide_pane_t1_ParamLimits

0xae75,	// (0x00030f95) bg_status_flat_pane

0x9891,	// (0x0002f9b1) title_pane_t1_ParamLimits

0xc791,	// (0x000328b1) title_pane_t2_ParamLimits

0xc7b7,	// (0x000328d7) title_pane_t3_ParamLimits

0xf557,	// (0x00035677) title_pane_t_ParamLimits

0xcf51,	// (0x00033071) level_1_signal_ParamLimits

0xcf5e,	// (0x0003307e) level_2_signal_ParamLimits

0xcf6b,	// (0x0003308b) level_3_signal_ParamLimits

0xcf78,	// (0x00033098) level_4_signal_ParamLimits

0xcf85,	// (0x000330a5) level_5_signal_ParamLimits

0xcf92,	// (0x000330b2) level_6_signal_ParamLimits

0xcf9f,	// (0x000330bf) level_7_signal_ParamLimits

0xcf51,	// (0x00033071) level_1_battery_ParamLimits

0xcf5e,	// (0x0003307e) level_2_battery_ParamLimits

0xcf6b,	// (0x0003308b) level_3_battery_ParamLimits

0xcf78,	// (0x00033098) level_4_battery_ParamLimits

0xcf85,	// (0x000330a5) level_5_battery_ParamLimits

0xcf92,	// (0x000330b2) level_6_battery_ParamLimits

0xcf9f,	// (0x000330bf) level_7_battery_ParamLimits

0x33a3,	// (0x000294c3) bg_status_flat_pane_g1

0x33ab,	// (0x000294cb) bg_status_flat_pane_g2

0x33b3,	// (0x000294d3) bg_status_flat_pane_g3

0x33bb,	// (0x000294db) bg_status_flat_pane_g4

0x33c3,	// (0x000294e3) bg_status_flat_pane_g5

0x33cb,	// (0x000294eb) bg_status_flat_pane_g6

0x33d3,	// (0x000294f3) bg_status_flat_pane_g7

0x9925,	// (0x0002fa45) tabs_3_active_pane_t1_ParamLimits

0x9925,	// (0x0002fa45) tabs_3_passive_pane_t1_ParamLimits

0x993f,	// (0x0002fa5f) tabs_4_active_pane_t1_ParamLimits

0x993f,	// (0x0002fa5f) tabs_4_1_passive_pane_t1_ParamLimits

0x9f1f,	// (0x0003003f) tabs_2_active_pane_t1_ParamLimits

0x9f1f,	// (0x0003003f) tabs_2_passive_pane_t1_ParamLimits

0xc7d7,	// (0x000328f7) bg_active_tab_pane_cp4_ParamLimits

0x9f31,	// (0x00030051) tabs_2_long_active_pane_t1_ParamLimits

0x0d0e,	// (0x00026e2e) bg_passive_tab_pane_cp4_ParamLimits

0x189d,	// (0x000279bd) list_single_midp_graphic_pane_t1_ParamLimits

0xc7d7,	// (0x000328f7) bg_active_tab_pane_cp5_ParamLimits

0x9f44,	// (0x00030064) tabs_3_long_active_pane_t1_ParamLimits

0x0d0e,	// (0x00026e2e) bg_passive_tab_pane_cp5_ParamLimits

0x189d,	// (0x000279bd) list_single_midp_graphic_pane_t1

0xae75,	// (0x00030f95) bg_status_flat_pane_ParamLimits

0x146b,	// (0x0002758b) indicator_pane_cp2_ParamLimits

0x146b,	// (0x0002758b) indicator_pane_cp2

0xaff3,	// (0x00031113) navi_pane_srt_ParamLimits

0xaff3,	// (0x00031113) navi_pane_srt

0x15ba,	// (0x000276da) popup_clock_digital_analogue_window_cp1

0xc81b,	// (0x0003293b) indicator_pane_t1

0x07d7,	// (0x000268f7) copy_highlight_pane

0x07d7,	// (0x000268f7) cursor_graphics_pane

0x07d7,	// (0x000268f7) graphic_within_text_pane

0x07d7,	// (0x000268f7) link_highlight_pane

0x3ba2,	// (0x00029cc2) popup_preview_text_window_t5_ParamLimits

0x3ba2,	// (0x00029cc2) popup_preview_text_window_t5

0x0909,	// (0x00026a29) cursor_digital_pane

0x0909,	// (0x00026a29) cursor_primary_pane

0x091a,	// (0x00026a3a) cursor_primary_small_pane

0x0922,	// (0x00026a42) cursor_secondary_pane

0x092a,	// (0x00026a4a) cursor_title_pane

0x0909,	// (0x00026a29) link_highlight_digital_pane

0x0911,	// (0x00026a31) link_highlight_primary_pane

0x091a,	// (0x00026a3a) link_highlight_primary_small_pane

0x0922,	// (0x00026a42) link_highlight_secondary_pane

0x092a,	// (0x00026a4a) link_highlight_title_pane

0x0909,	// (0x00026a29) copy_highlight_digital_pane

0x0909,	// (0x00026a29) copy_highlight_primary_pane

0x091a,	// (0x00026a3a) copy_highlight_primary_small_pane

0x0922,	// (0x00026a42) copy_highlight_secondary_pane

0x092a,	// (0x00026a4a) copy_highlight_title_pane

0x0922,	// (0x00026a42) graphic_text_digital_pane

0x3441,	// (0x00029561) graphic_text_primary_pane

0x344a,	// (0x0002956a) graphic_text_primary_small_pane

0x091a,	// (0x00026a3a) graphic_text_secondary_pane

0x0909,	// (0x00026a29) graphic_text_title_pane

0xa395,	// (0x000304b5) cursor_primary_pane_g1

0x3433,	// (0x00029553) cursor_text_primary_t1

0xb583,	// (0x000316a3) cursor_primary_small_pane_g1

0x3425,	// (0x00029545) cursor_text_primary_small_t1

0xb579,	// (0x00031699) cursor_primary_small_pane_g1_copy1

0x340d,	// (0x0002952d) cursor_text_primary_small_t1_copy1

0x33eb,	// (0x0002950b) cursor_text_title_t1

0xb56f,	// (0x0003168f) cursor_title_pane_g1

0xa395,	// (0x000304b5) cursor_digital_pane_g1

0x093c,	// (0x00026a5c) cursor_text_digital_t1

0x094a,	// (0x00026a6a) link_highlight_primary_pane_g1

0x3394,	// (0x000294b4) link_highlight_primary_pane_t1

0x094a,	// (0x00026a6a) link_highlight_primary_small_pane_g1

0x0952,	// (0x00026a72) link_highlight_primary_small_pane_t1

0x094a,	// (0x00026a6a) link_highlight_secondary_pane_g1

0x0961,	// (0x00026a81) link_highlight_secondary_pane_t1

0x32f9,	// (0x00029419) link_highlight_title_pane_g1

0x3310,	// (0x00029430) link_highlight_title_pane_t1

0x32f9,	// (0x00029419) link_highlight_digital_pane_g1

0x3301,	// (0x00029421) link_highlight_digital_pane_t1

0x31b3,	// (0x000292d3) copy_highlight_primary_pane_g1

0x31d9,	// (0x000292f9) copy_highlight_primary_pane_t1

0x31b3,	// (0x000292d3) copy_highlight_primary_small_pane_g1

0x31ca,	// (0x000292ea) copy_highlight_primary_small_pane_t1

0x0970,	// (0x00026a90) copy_highlight_secondary_pane_g1

0x0978,	// (0x00026a98) copy_highlight_secondary_pane_t1

0x31b3,	// (0x000292d3) copy_highlight_title_pane_g1

0x31bb,	// (0x000292db) copy_highlight_title_pane_t1

0x31b3,	// (0x000292d3) copy_highlight_digital_pane_g1

0x443c,	// (0x0002a55c) copy_highlight_digital_pane_t1

0x4390,	// (0x0002a4b0) graphic_text_primary_pane_g1

0x4420,	// (0x0002a540) graphic_text_primary_pane_t1

0x442e,	// (0x0002a54e) graphic_text_primary_pane_t2

0x0001,

0xf9b3,	// (0x00035ad3) graphic_text_primary_pane_t

0x43fc,	// (0x0002a51c) graphic_text_primary_small_pane_g1

0x4404,	// (0x0002a524) graphic_text_primary_small_pane_t1

0x4412,	// (0x0002a532) graphic_text_primary_small_pane_t2

0x0001,

0xf9ae,	// (0x00035ace) graphic_text_primary_small_pane_t

0x43d8,	// (0x0002a4f8) graphic_text_secondary_pane_g1

0x43e0,	// (0x0002a500) graphic_text_secondary_pane_t1

0x43ee,	// (0x0002a50e) graphic_text_secondary_pane_t2

0x0001,

0xf9a9,	// (0x00035ac9) graphic_text_secondary_pane_t

0x43b4,	// (0x0002a4d4) graphic_text_title_pane_g1

0x43bc,	// (0x0002a4dc) graphic_text_title_pane_t1

0x43ca,	// (0x0002a4ea) graphic_text_title_pane_t2

0x0001,

0xf9a4,	// (0x00035ac4) graphic_text_title_pane_t

0x4390,	// (0x0002a4b0) graphic_text_digital_pane_g1

0x4398,	// (0x0002a4b8) graphic_text_digital_pane_t1

0x43a6,	// (0x0002a4c6) graphic_text_digital_pane_t2

0x0001,

0xf99f,	// (0x00035abf) graphic_text_digital_pane_t

0xc7d7,	// (0x000328f7) navi_icon_pane_srt_ParamLimits

0xc7d7,	// (0x000328f7) navi_icon_pane_srt

0xc77b,	// (0x0003289b) navi_midp_pane_srt

0xc77b,	// (0x0003289b) navi_navi_pane_srt

0xc7d7,	// (0x000328f7) navi_text_pane_srt_ParamLimits

0xc7d7,	// (0x000328f7) navi_text_pane_srt

0x435b,	// (0x0002a47b) navi_navi_icon_text_pane_srt

0x4363,	// (0x0002a483) navi_navi_pane_srt_g1_ParamLimits

0x4363,	// (0x0002a483) navi_navi_pane_srt_g1

0x4375,	// (0x0002a495) navi_navi_pane_srt_g2_ParamLimits

0x4375,	// (0x0002a495) navi_navi_pane_srt_g2

0x0001,

0xf99a,	// (0x00035aba) navi_navi_pane_srt_g_ParamLimits

0xf99a,	// (0x00035aba) navi_navi_pane_srt_g

0x4387,	// (0x0002a4a7) navi_navi_tabs_pane_srt

0x435b,	// (0x0002a47b) navi_navi_text_pane_srt

0x435b,	// (0x0002a47b) navi_navi_volume_pane_srt

0x434c,	// (0x0002a46c) navi_navi_text_pane_srt_t1

0x1c1d,	// (0x00027d3d) navi_navi_volume_pane_srt_g1

0x1c25,	// (0x00027d45) volume_small_pane_srt_ParamLimits

0x1c25,	// (0x00027d45) volume_small_pane_srt

0x0987,	// (0x00026aa7) volume_small_pane_srt_g1_ParamLimits

0x0987,	// (0x00026aa7) volume_small_pane_srt_g1

0x0997,	// (0x00026ab7) volume_small_pane_srt_g2_ParamLimits

0x0997,	// (0x00026ab7) volume_small_pane_srt_g2

0x09a8,	// (0x00026ac8) volume_small_pane_srt_g3_ParamLimits

0x09a8,	// (0x00026ac8) volume_small_pane_srt_g3

0x09b9,	// (0x00026ad9) volume_small_pane_srt_g4_ParamLimits

0x09b9,	// (0x00026ad9) volume_small_pane_srt_g4

0x09ca,	// (0x00026aea) volume_small_pane_srt_g5_ParamLimits

0x09ca,	// (0x00026aea) volume_small_pane_srt_g5

0x09db,	// (0x00026afb) volume_small_pane_srt_g6_ParamLimits

0x09db,	// (0x00026afb) volume_small_pane_srt_g6

0x09ec,	// (0x00026b0c) volume_small_pane_srt_g7_ParamLimits

0x09ec,	// (0x00026b0c) volume_small_pane_srt_g7

0x09fd,	// (0x00026b1d) volume_small_pane_srt_g8_ParamLimits

0x09fd,	// (0x00026b1d) volume_small_pane_srt_g8

0x0a0e,	// (0x00026b2e) volume_small_pane_srt_g9_ParamLimits

0x0a0e,	// (0x00026b2e) volume_small_pane_srt_g9

0x0a1f,	// (0x00026b3f) volume_small_pane_srt_g10_ParamLimits

0x0a1f,	// (0x00026b3f) volume_small_pane_srt_g10

0x0009,

0xf74e,	// (0x0003586e) volume_small_pane_srt_g_ParamLimits

0xf74e,	// (0x0003586e) volume_small_pane_srt_g

0x9c26,	// (0x0002fd46) query_popup_data_pane_cp2

0x4332,	// (0x0002a452) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4332,	// (0x0002a452) navi_navi_icon_text_pane_srt_t1

0x3441,	// (0x00029561) navi_tabs_2_long_pane_srt

0x3441,	// (0x00029561) navi_tabs_2_pane_srt

0x3441,	// (0x00029561) navi_tabs_3_long_pane_srt

0x3441,	// (0x00029561) navi_tabs_3_pane_srt

0x3441,	// (0x00029561) navi_tabs_4_pane_srt

0xbcc5,	// (0x00031de5) tabs_2_active_pane_srt_ParamLimits

0xbcc5,	// (0x00031de5) tabs_2_active_pane_srt

0xbcd5,	// (0x00031df5) tabs_2_passive_pane_srt_ParamLimits

0xbcd5,	// (0x00031df5) tabs_2_passive_pane_srt

0x2bf8,	// (0x00028d18) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2bf8,	// (0x00028d18) bg_passive_tab_pane_cp1_srt

0xbc95,	// (0x00031db5) bg_passive_tab_pane_g1_cp1_srt

0xa200,	// (0x00030320) bg_passive_tab_pane_g2_cp1_srt

0xbc9e,	// (0x00031dbe) bg_passive_tab_pane_g3_cp1_srt

0xc7c9,	// (0x000328e9) bg_active_tab_pane_cp1_srt_ParamLimits

0xc7c9,	// (0x000328e9) bg_active_tab_pane_cp1_srt

0xbca7,	// (0x00031dc7) tabs_2_active_pane_srt_g1

0xbcaf,	// (0x00031dcf) tabs_2_active_pane_srt_t1_ParamLimits

0xbcaf,	// (0x00031dcf) tabs_2_active_pane_srt_t1

0xbc95,	// (0x00031db5) bg_active_tab_pane_g1_cp1_srt

0xa200,	// (0x00030320) bg_active_tab_pane_g2_cp1_srt

0xbc9e,	// (0x00031dbe) bg_active_tab_pane_g3_cp1_srt

0xbc62,	// (0x00031d82) tabs_3_active_pane_srt_ParamLimits

0xbc62,	// (0x00031d82) tabs_3_active_pane_srt

0xbc73,	// (0x00031d93) tabs_3_passive_pane_cp_srt_ParamLimits

0xbc73,	// (0x00031d93) tabs_3_passive_pane_cp_srt

0xbc84,	// (0x00031da4) tabs_3_passive_pane_srt_ParamLimits

0xbc84,	// (0x00031da4) tabs_3_passive_pane_srt

0x2bf8,	// (0x00028d18) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2bf8,	// (0x00028d18) bg_passive_tab_pane_cp2_srt

0xa39f,	// (0x000304bf) bg_passive_tab_pane_g1_cp2_srt

0xa200,	// (0x00030320) bg_passive_tab_pane_g2_cp2_srt

0xa3a8,	// (0x000304c8) bg_passive_tab_pane_g3_cp2_srt

0xc7c9,	// (0x000328e9) bg_active_tab_pane_cp2_srt_ParamLimits

0xc7c9,	// (0x000328e9) bg_active_tab_pane_cp2_srt

0xbc44,	// (0x00031d64) tabs_3_active_pane_srt_g1

0xbc4c,	// (0x00031d6c) tabs_3_active_pane_srt_t1_ParamLimits

0xbc4c,	// (0x00031d6c) tabs_3_active_pane_srt_t1

0xa39f,	// (0x000304bf) bg_active_tab_pane_g1_cp2_srt

0xa200,	// (0x00030320) bg_active_tab_pane_g2_cp2_srt

0xa3a8,	// (0x000304c8) bg_active_tab_pane_g3_cp2_srt

0x1b82,	// (0x00027ca2) tabs_4_active_pane_srt_ParamLimits

0x1b82,	// (0x00027ca2) tabs_4_active_pane_srt

0x1b94,	// (0x00027cb4) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1b94,	// (0x00027cb4) tabs_4_passive_pane_cp2_srt

0x0cde,	// (0x00026dfe) aid_size_cell_toolbar

0x3f3f,	// (0x0002a05f) main_idle_act_pane_ParamLimits

0xa7f0,	// (0x00030910) popup_large_graphic_colour_window_ParamLimits

0xace4,	// (0x00030e04) popup_toolbar_window_ParamLimits

0xace4,	// (0x00030e04) popup_toolbar_window

0xec48,	// (0x00034d68) list_single_graphic_2heading_pane_ParamLimits

0xec48,	// (0x00034d68) list_single_graphic_2heading_pane

0xce39,	// (0x00032f59) aid_size_cell_apps_grid_lsc_pane

0xce4b,	// (0x00032f6b) aid_size_cell_apps_grid_prt_pane

0x0d0e,	// (0x00026e2e) bg_wml_button_pane_cp1_ParamLimits

0x0d0e,	// (0x00026e2e) bg_wml_button_pane_cp1

0xb315,	// (0x00031435) form_midp_field_text_pane_t1_ParamLimits

0x2bf8,	// (0x00028d18) input_focus_pane_cp050_ParamLimits

0x2e68,	// (0x00028f88) list_midp_form_text_pane_ParamLimits

0x2e0b,	// (0x00028f2b) input_focus_pane_cp051_ParamLimits

0x2e1f,	// (0x00028f3f) list_midp_choice_pane_ParamLimits

0xb27a,	// (0x0003139a) list_single_2graphic_pane_cp3_ParamLimits

0xb27a,	// (0x0003139a) list_single_2graphic_pane_cp3

0xb28e,	// (0x000313ae) list_single_midp_graphic_pane_ParamLimits

0xb28e,	// (0x000313ae) list_single_midp_graphic_pane

0xeb3b,	// (0x00034c5b) list_single_graphic_2heading_pane_g1_ParamLimits

0xeb3b,	// (0x00034c5b) list_single_graphic_2heading_pane_g1

0xea02,	// (0x00034b22) list_single_graphic_2heading_pane_g4_ParamLimits

0xea02,	// (0x00034b22) list_single_graphic_2heading_pane_g4

0xea0e,	// (0x00034b2e) list_single_graphic_2heading_pane_g5_ParamLimits

0xea0e,	// (0x00034b2e) list_single_graphic_2heading_pane_g5

0x0002,

0xf7a1,	// (0x000358c1) list_single_graphic_2heading_pane_g_ParamLimits

0xf7a1,	// (0x000358c1) list_single_graphic_2heading_pane_g

0xeb47,	// (0x00034c67) list_single_graphic_2heading_pane_t1_ParamLimits

0xeb47,	// (0x00034c67) list_single_graphic_2heading_pane_t1

0xeb5b,	// (0x00034c7b) list_single_graphic_2heading_pane_t2_ParamLimits

0xeb5b,	// (0x00034c7b) list_single_graphic_2heading_pane_t2

0xeb75,	// (0x00034c95) list_single_graphic_2heading_pane_t3_ParamLimits

0xeb75,	// (0x00034c95) list_single_graphic_2heading_pane_t3

0x0002,

0xf7a8,	// (0x000358c8) list_single_graphic_2heading_pane_t_ParamLimits

0xf7a8,	// (0x000358c8) list_single_graphic_2heading_pane_t

0x1716,	// (0x00027836) bg_popup_sub_pane_cp2

0x1740,	// (0x00027860) grid_toobar_pane

0x177c,	// (0x0002789c) cell_toolbar_pane_ParamLimits

0x177c,	// (0x0002789c) cell_toolbar_pane

0x17ac,	// (0x000278cc) cell_toolbar_pane_g1_ParamLimits

0x17ac,	// (0x000278cc) cell_toolbar_pane_g1

0xb192,	// (0x000312b2) cell_toolbar_pane_g2_ParamLimits

0xb192,	// (0x000312b2) cell_toolbar_pane_g2

0x0001,

0xf7af,	// (0x000358cf) cell_toolbar_pane_g_ParamLimits

0xf7af,	// (0x000358cf) cell_toolbar_pane_g

0x17e2,	// (0x00027902) grid_highlight_pane_cp2_ParamLimits

0x17e2,	// (0x00027902) grid_highlight_pane_cp2

0x17fc,	// (0x0002791c) toolbar_button_pane

0x1808,	// (0x00027928) toolbar_button_pane_g1

0x1810,	// (0x00027930) toolbar_button_pane_g2

0x1818,	// (0x00027938) toolbar_button_pane_g3

0x1820,	// (0x00027940) toolbar_button_pane_g4

0x1828,	// (0x00027948) toolbar_button_pane_g5

0x1830,	// (0x00027950) toolbar_button_pane_g6

0x1838,	// (0x00027958) toolbar_button_pane_g7

0x1840,	// (0x00027960) toolbar_button_pane_g8

0x1848,	// (0x00027968) toolbar_button_pane_g9

0x0009,

0xf7b4,	// (0x000358d4) toolbar_button_pane_g

0x1858,	// (0x00027978) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1858,	// (0x00027978) list_single_2graphic_pane_g1_cp3

0xb1a6,	// (0x000312c6) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb1a6,	// (0x000312c6) list_single_2graphic_pane_g2_cp3

0x0607,	// (0x00026727) list_single_2graphic_pane_g3_cp3

0x1875,	// (0x00027995) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1875,	// (0x00027995) list_single_2graphic_pane_g4_cp3

0xb1b7,	// (0x000312d7) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb1b7,	// (0x000312d7) list_single_2graphic_pane_t1_cp3

0xd159,	// (0x00033279) list_single_midp_graphic_pane_g2_ParamLimits

0xd159,	// (0x00033279) list_single_midp_graphic_pane_g2

0x0ce6,	// (0x00026e06) aid_zoom_text_primary

0xeb0f,	// (0x00034c2f) aid_zoom_text_secondary

0xa3ff,	// (0x0003051f) status_small_pane_g7_ParamLimits

0xa3ff,	// (0x0003051f) status_small_pane_g7

0xa422,	// (0x00030542) status_small_pane_t1_ParamLimits

0x986d,	// (0x0002f98d) title_pane_g2

0x0003,

0xf54e,	// (0x0003566e) title_pane_g

0x9c80,	// (0x0002fda0) aid_size_cell_colour_1_pane_ParamLimits

0x9c80,	// (0x0002fda0) aid_size_cell_colour_1_pane

0x9c94,	// (0x0002fdb4) aid_size_cell_colour_2_pane_ParamLimits

0x9c94,	// (0x0002fdb4) aid_size_cell_colour_2_pane

0x9ca8,	// (0x0002fdc8) aid_size_cell_colour_3_pane_ParamLimits

0x9ca8,	// (0x0002fdc8) aid_size_cell_colour_3_pane

0x9cbc,	// (0x0002fddc) aid_size_cell_colour_4_pane_ParamLimits

0x9cbc,	// (0x0002fddc) aid_size_cell_colour_4_pane

0xf3ff,	// (0x0003551f) title_pane_stacon_g1_ParamLimits

0xf3ff,	// (0x0003551f) title_pane_stacon_g1

0x3230,	// (0x00029350) popup_note_wait_window_g3_ParamLimits

0x3230,	// (0x00029350) popup_note_wait_window_g3

0x32a6,	// (0x000293c6) popup_note_wait_window_t5_ParamLimits

0x32a6,	// (0x000293c6) popup_note_wait_window_t5

0xc77b,	// (0x0003289b) main_feb_china_hwr_fs_writing_pane

0xa672,	// (0x00030792) popup_feb_china_hwr_fs_window_ParamLimits

0xa672,	// (0x00030792) popup_feb_china_hwr_fs_window

0xb1d3,	// (0x000312f3) aid_size_cell_hwr_fs_ParamLimits

0xb1d3,	// (0x000312f3) aid_size_cell_hwr_fs

0x2bf8,	// (0x00028d18) bg_popup_sub_pane_cp3_ParamLimits

0x2bf8,	// (0x00028d18) bg_popup_sub_pane_cp3

0xb1e8,	// (0x00031308) grid_hwr_fs_pane_ParamLimits

0xb1e8,	// (0x00031308) grid_hwr_fs_pane

0x18e0,	// (0x00027a00) linegrid_hwr_fs_pane_ParamLimits

0x18e0,	// (0x00027a00) linegrid_hwr_fs_pane

0xb200,	// (0x00031320) cell_hwr_fs_pane_ParamLimits

0xb200,	// (0x00031320) cell_hwr_fs_pane

0x2c04,	// (0x00028d24) linegrid_hwr_fs_pane_g1_ParamLimits

0x2c04,	// (0x00028d24) linegrid_hwr_fs_pane_g1

0xb226,	// (0x00031346) linegrid_hwr_fs_pane_g2_ParamLimits

0xb226,	// (0x00031346) linegrid_hwr_fs_pane_g2

0x2c22,	// (0x00028d42) linegrid_hwr_fs_pane_g3_ParamLimits

0x2c22,	// (0x00028d42) linegrid_hwr_fs_pane_g3

0xb238,	// (0x00031358) linegrid_hwr_fs_pane_g4_ParamLimits

0xb238,	// (0x00031358) linegrid_hwr_fs_pane_g4

0x192c,	// (0x00027a4c) linegrid_hwr_fs_pane_g5_ParamLimits

0x192c,	// (0x00027a4c) linegrid_hwr_fs_pane_g5

0x0004,

0xf7da,	// (0x000358fa) linegrid_hwr_fs_pane_g_ParamLimits

0xf7da,	// (0x000358fa) linegrid_hwr_fs_pane_g

0x2c2e,	// (0x00028d4e) cell_hwr_fs_pane_g1_ParamLimits

0x2c2e,	// (0x00028d4e) cell_hwr_fs_pane_g1

0x1650,	// (0x00027770) cell_hwr_fs_pane_g2_ParamLimits

0x1650,	// (0x00027770) cell_hwr_fs_pane_g2

0xb252,	// (0x00031372) cell_hwr_fs_pane_g3_ParamLimits

0xb252,	// (0x00031372) cell_hwr_fs_pane_g3

0xb25f,	// (0x0003137f) cell_hwr_fs_pane_g4_ParamLimits

0xb25f,	// (0x0003137f) cell_hwr_fs_pane_g4

0x0003,

0xf7e5,	// (0x00035905) cell_hwr_fs_pane_g_ParamLimits

0xf7e5,	// (0x00035905) cell_hwr_fs_pane_g

0xb26c,	// (0x0003138c) cell_hwr_fs_pane_t1

0xc77b,	// (0x0003289b) grid_highlight_pane_cp6

0xc77b,	// (0x0003289b) main_idle_act2_pane

0xcc8f,	// (0x00032daf) aid_inside_area_popup_secondary

0xb6a2,	// (0x000317c2) aid_inside_area_window_primary_ParamLimits

0xb6a2,	// (0x000317c2) aid_inside_area_window_primary

0xbced,	// (0x00031e0d) ai2_news_ticker_pane

0x4453,	// (0x0002a573) aid_size_cell_ai1_link_ParamLimits

0x4453,	// (0x0002a573) aid_size_cell_ai1_link

0xbcf5,	// (0x00031e15) popup_ai2_data_window_ParamLimits

0xbcf5,	// (0x00031e15) popup_ai2_data_window

0x4483,	// (0x0002a5a3) popup_ai2_link_window_ParamLimits

0x4483,	// (0x0002a5a3) popup_ai2_link_window

0x2bf8,	// (0x00028d18) bg_popup_sub_pane_cp4_ParamLimits

0x2bf8,	// (0x00028d18) bg_popup_sub_pane_cp4

0x4497,	// (0x0002a5b7) grid_ai2_link_pane_ParamLimits

0x4497,	// (0x0002a5b7) grid_ai2_link_pane

0x44ae,	// (0x0002a5ce) popup_ai2_link_window_g1_ParamLimits

0x44ae,	// (0x0002a5ce) popup_ai2_link_window_g1

0x44ba,	// (0x0002a5da) popup_ai2_link_window_g2_ParamLimits

0x44ba,	// (0x0002a5da) popup_ai2_link_window_g2

0x0001,

0xf9b8,	// (0x00035ad8) popup_ai2_link_window_g_ParamLimits

0xf9b8,	// (0x00035ad8) popup_ai2_link_window_g

0x44c9,	// (0x0002a5e9) ai2_mp_button_pane

0x44d1,	// (0x0002a5f1) ai2_mp_volume_pane

0x2e0b,	// (0x00028f2b) bg_popup_sub_pane_cp5_ParamLimits

0x2e0b,	// (0x00028f2b) bg_popup_sub_pane_cp5

0x44d9,	// (0x0002a5f9) heading_ai2_gene_pane_ParamLimits

0x44d9,	// (0x0002a5f9) heading_ai2_gene_pane

0x44e5,	// (0x0002a605) list_ai2_gene_pane_ParamLimits

0x44e5,	// (0x0002a605) list_ai2_gene_pane

0x452d,	// (0x0002a64d) cell_ai2_link_pane_ParamLimits

0x452d,	// (0x0002a64d) cell_ai2_link_pane

0x4543,	// (0x0002a663) cell_ai2_link_pane_g1

0xc77b,	// (0x0003289b) grid_highlight_pane_cp7

0x1c3a,	// (0x00027d5a) ai2_mp_volume_pane_g1

0x4613,	// (0x0002a733) ai2_mp_volume_pane_g2

0x4588,	// (0x0002a6a8) list_ai2_gene_pane_t1

0x461b,	// (0x0002a73b) ai2_mp_volume_pane_g3

0x0002,

0xf9d1,	// (0x00035af1) ai2_mp_volume_pane_g

0xbd0b,	// (0x00031e2b) volume_small_pane_cp3

0x4623,	// (0x0002a743) aid_size_cell_ai2_button

0x462b,	// (0x0002a74b) grid_ai2_button_pane

0x4634,	// (0x0002a754) cell_ai2_button_pane_ParamLimits

0x4634,	// (0x0002a754) cell_ai2_button_pane

0xc771,	// (0x00032891) cell_ai2_button_pane_g1

0xc77b,	// (0x0003289b) grid_highlight_pane_cp8

0x45d3,	// (0x0002a6f3) ai2_gene_pane_t1_ParamLimits

0x45d3,	// (0x0002a6f3) ai2_gene_pane_t1

0xa5f0,	// (0x00030710) aid_height_parent_landscape

0xb9b4,	// (0x00031ad4) aid_height_set_list

0x3f3f,	// (0x0002a05f) aid_size_parent

0xbc18,	// (0x00031d38) aid_size_cell_graphic_pane_ParamLimits

0x44f5,	// (0x0002a615) popup_ai2_data_window_g1_ParamLimits

0x44f5,	// (0x0002a615) popup_ai2_data_window_g1

0x4501,	// (0x0002a621) ai2_news_ticker_pane_g1

0x4509,	// (0x0002a629) ai2_news_ticker_pane_g2

0x0001,

0xf9bd,	// (0x00035add) ai2_news_ticker_pane_g

0x4511,	// (0x0002a631) ai2_news_ticker_pane_t1

0x451f,	// (0x0002a63f) ai2_news_ticker_pane_t2

0x0001,

0xf9c2,	// (0x00035ae2) ai2_news_ticker_pane_t

0x454c,	// (0x0002a66c) heading_ai2_gene_pane_g1

0x4554,	// (0x0002a674) heading_ai2_gene_pane_t1_ParamLimits

0x4554,	// (0x0002a674) heading_ai2_gene_pane_t1

0x4569,	// (0x0002a689) list_highlight_pane_cp6

0x4571,	// (0x0002a691) ai2_gene_pane_ParamLimits

0x4571,	// (0x0002a691) ai2_gene_pane

0x4596,	// (0x0002a6b6) list_ai2_gene_pane_t2

0x0001,

0xf9c7,	// (0x00035ae7) list_ai2_gene_pane_t

0x45a4,	// (0x0002a6c4) list_highlight_pane_cp8_ParamLimits

0x45a4,	// (0x0002a6c4) list_highlight_pane_cp8

0x45b5,	// (0x0002a6d5) ai2_gene_pane_g1_ParamLimits

0x45b5,	// (0x0002a6d5) ai2_gene_pane_g1

0x45c7,	// (0x0002a6e7) ai2_gene_pane_g2_ParamLimits

0x45c7,	// (0x0002a6e7) ai2_gene_pane_g2

0x0001,

0xf9cc,	// (0x00035aec) ai2_gene_pane_g_ParamLimits

0xf9cc,	// (0x00035aec) ai2_gene_pane_g

0xcb28,	// (0x00032c48) scroll_pane_cp12

0xa5ad,	// (0x000306cd) control_pane_t3_ParamLimits

0xa5ad,	// (0x000306cd) control_pane_t3

0xa413,	// (0x00030533) status_small_pane_g8_ParamLimits

0xa413,	// (0x00030533) status_small_pane_g8

0xa735,	// (0x00030855) popup_find_window_ParamLimits

0xa9e8,	// (0x00030b08) popup_note_image_window_ParamLimits

0xe9f6,	// (0x00034b16) list_double2_graphic_pane_vc_g1_ParamLimits

0xe9f6,	// (0x00034b16) list_double2_graphic_pane_vc_g1

0xea02,	// (0x00034b22) list_double2_graphic_pane_vc_g2_ParamLimits

0xea02,	// (0x00034b22) list_double2_graphic_pane_vc_g2

0xea0e,	// (0x00034b2e) list_double2_graphic_pane_vc_g3_ParamLimits

0xea0e,	// (0x00034b2e) list_double2_graphic_pane_vc_g3

0x0002,

0xf5c1,	// (0x000356e1) list_double2_graphic_pane_vc_g_ParamLimits

0xf5c1,	// (0x000356e1) list_double2_graphic_pane_vc_g

0xea1a,	// (0x00034b3a) list_double2_graphic_pane_vc_t1_ParamLimits

0xea1a,	// (0x00034b3a) list_double2_graphic_pane_vc_t1

0xea02,	// (0x00034b22) list_single_heading_pane_vc_g1_ParamLimits

0xea02,	// (0x00034b22) list_single_heading_pane_vc_g1

0xea0e,	// (0x00034b2e) list_single_heading_pane_vc_g2_ParamLimits

0xea0e,	// (0x00034b2e) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000356e8) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000356e8) list_single_heading_pane_vc_g

0xeb8d,	// (0x00034cad) list_single_heading_pane_vc_t1_ParamLimits

0xeb8d,	// (0x00034cad) list_single_heading_pane_vc_t1

0xeba3,	// (0x00034cc3) list_single_heading_pane_vc_t2_ParamLimits

0xeba3,	// (0x00034cc3) list_single_heading_pane_vc_t2

0x0001,

0xf7c9,	// (0x000358e9) list_single_heading_pane_vc_t_ParamLimits

0xf7c9,	// (0x000358e9) list_single_heading_pane_vc_t

0xebb5,	// (0x00034cd5) list_setting_number_pane_vc_g1_ParamLimits

0xebb5,	// (0x00034cd5) list_setting_number_pane_vc_g1

0xebc1,	// (0x00034ce1) list_setting_number_pane_vc_g2_ParamLimits

0xebc1,	// (0x00034ce1) list_setting_number_pane_vc_g2

0x0001,

0xf7ce,	// (0x000358ee) list_setting_number_pane_vc_g_ParamLimits

0xf7ce,	// (0x000358ee) list_setting_number_pane_vc_g

0xebcd,	// (0x00034ced) list_setting_number_pane_vc_t1_ParamLimits

0xebcd,	// (0x00034ced) list_setting_number_pane_vc_t1

0xebe1,	// (0x00034d01) list_setting_number_pane_vc_t2_ParamLimits

0xebe1,	// (0x00034d01) list_setting_number_pane_vc_t2

0xebfd,	// (0x00034d1d) list_setting_number_pane_vc_t3_ParamLimits

0xebfd,	// (0x00034d1d) list_setting_number_pane_vc_t3

0x0002,

0xf7d3,	// (0x000358f3) list_setting_number_pane_vc_t_ParamLimits

0xf7d3,	// (0x000358f3) list_setting_number_pane_vc_t

0xec29,	// (0x00034d49) set_value_pane_vc_ParamLimits

0xec29,	// (0x00034d49) set_value_pane_vc

0xec48,	// (0x00034d68) list_double2_graphic_pane_vc_ParamLimits

0xec48,	// (0x00034d68) list_double2_graphic_pane_vc

0x410f,	// (0x0002a22f) list_double2_large_graphic_pane_vc_ParamLimits

0x410f,	// (0x0002a22f) list_double2_large_graphic_pane_vc

0xec48,	// (0x00034d68) list_double2_pane_vc_ParamLimits

0xec48,	// (0x00034d68) list_double2_pane_vc

0xec48,	// (0x00034d68) list_double_graphic_heading_pane_vc_ParamLimits

0xec48,	// (0x00034d68) list_double_graphic_heading_pane_vc

0xec48,	// (0x00034d68) list_double_graphic_pane_vc_ParamLimits

0xec48,	// (0x00034d68) list_double_graphic_pane_vc

0xec48,	// (0x00034d68) list_double_heading_pane_vc_ParamLimits

0xec48,	// (0x00034d68) list_double_heading_pane_vc

0x4121,	// (0x0002a241) list_double_large_graphic_pane_vc_ParamLimits

0x4121,	// (0x0002a241) list_double_large_graphic_pane_vc

0xec48,	// (0x00034d68) list_double_number_pane_vc_ParamLimits

0xec48,	// (0x00034d68) list_double_number_pane_vc

0xec48,	// (0x00034d68) list_double_pane_vc_ParamLimits

0xec48,	// (0x00034d68) list_double_pane_vc

0xec48,	// (0x00034d68) list_double_time_pane_vc_ParamLimits

0xec48,	// (0x00034d68) list_double_time_pane_vc

0xec48,	// (0x00034d68) list_setting_number_pane_vc_ParamLimits

0xec48,	// (0x00034d68) list_setting_number_pane_vc

0xec48,	// (0x00034d68) list_setting_pane_vc_ParamLimits

0xec48,	// (0x00034d68) list_setting_pane_vc

0xec48,	// (0x00034d68) list_single_graphic_heading_pane_vc_ParamLimits

0xec48,	// (0x00034d68) list_single_graphic_heading_pane_vc

0xec48,	// (0x00034d68) list_single_heading_pane_vc_ParamLimits

0xec48,	// (0x00034d68) list_single_heading_pane_vc

0xec48,	// (0x00034d68) list_single_number_heading_pane_vc_ParamLimits

0xec48,	// (0x00034d68) list_single_number_heading_pane_vc

0xea7c,	// (0x00034b9c) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xea7c,	// (0x00034b9c) list_double_graphic_heading_pane_vc_g1

0xea02,	// (0x00034b22) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xea02,	// (0x00034b22) list_double_graphic_heading_pane_vc_g2

0xea0e,	// (0x00034b2e) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xea0e,	// (0x00034b2e) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9d8,	// (0x00035af8) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9d8,	// (0x00035af8) list_double_graphic_heading_pane_vc_g

0xec5b,	// (0x00034d7b) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xec5b,	// (0x00034d7b) list_double_graphic_heading_pane_vc_t1

0xec6f,	// (0x00034d8f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xec6f,	// (0x00034d8f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9df,	// (0x00035aff) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9df,	// (0x00035aff) list_double_graphic_heading_pane_vc_t

0xebb5,	// (0x00034cd5) list_setting_pane_vc_g1_ParamLimits

0xebb5,	// (0x00034cd5) list_setting_pane_vc_g1

0xebc1,	// (0x00034ce1) list_setting_pane_vc_g2_ParamLimits

0xebc1,	// (0x00034ce1) list_setting_pane_vc_g2

0x0001,

0xf7ce,	// (0x000358ee) list_setting_pane_vc_g_ParamLimits

0xf7ce,	// (0x000358ee) list_setting_pane_vc_g

0xec87,	// (0x00034da7) list_setting_pane_vc_t1_ParamLimits

0xec87,	// (0x00034da7) list_setting_pane_vc_t1

0xeca3,	// (0x00034dc3) list_setting_pane_vc_t2_ParamLimits

0xeca3,	// (0x00034dc3) list_setting_pane_vc_t2

0x0001,

0xfa22,	// (0x00035b42) list_setting_pane_vc_t_ParamLimits

0xfa22,	// (0x00035b42) list_setting_pane_vc_t

0xec29,	// (0x00034d49) set_value_pane_cp_vc_ParamLimits

0xec29,	// (0x00034d49) set_value_pane_cp_vc

0xea02,	// (0x00034b22) list_single_number_heading_pane_vc_g1_ParamLimits

0xea02,	// (0x00034b22) list_single_number_heading_pane_vc_g1

0xea0e,	// (0x00034b2e) list_single_number_heading_pane_vc_g2_ParamLimits

0xea0e,	// (0x00034b2e) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000356e8) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000356e8) list_single_number_heading_pane_vc_g

0xecbd,	// (0x00034ddd) list_single_number_heading_pane_vc_t1_ParamLimits

0xecbd,	// (0x00034ddd) list_single_number_heading_pane_vc_t1

0xecd3,	// (0x00034df3) list_single_number_heading_pane_vc_t2_ParamLimits

0xecd3,	// (0x00034df3) list_single_number_heading_pane_vc_t2

0xece5,	// (0x00034e05) list_single_number_heading_pane_vc_t3_ParamLimits

0xece5,	// (0x00034e05) list_single_number_heading_pane_vc_t3

0x0002,

0xfa27,	// (0x00035b47) list_single_number_heading_pane_vc_t_ParamLimits

0xfa27,	// (0x00035b47) list_single_number_heading_pane_vc_t

0xecf7,	// (0x00034e17) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xecf7,	// (0x00034e17) list_single_graphic_heading_pane_vc_g1

0xea02,	// (0x00034b22) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xea02,	// (0x00034b22) list_single_graphic_heading_pane_vc_g4

0xea0e,	// (0x00034b2e) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xea0e,	// (0x00034b2e) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa2e,	// (0x00035b4e) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa2e,	// (0x00035b4e) list_single_graphic_heading_pane_vc_g

0xed03,	// (0x00034e23) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xed03,	// (0x00034e23) list_single_graphic_heading_pane_vc_t1

0xed19,	// (0x00034e39) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xed19,	// (0x00034e39) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa35,	// (0x00035b55) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa35,	// (0x00035b55) list_single_graphic_heading_pane_vc_t

0xea02,	// (0x00034b22) list_double2_pane_vc_g1_ParamLimits

0xea02,	// (0x00034b22) list_double2_pane_vc_g1

0xea0e,	// (0x00034b2e) list_double2_pane_vc_g2_ParamLimits

0xea0e,	// (0x00034b2e) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x000356e8) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x000356e8) list_double2_pane_vc_g

0xed2b,	// (0x00034e4b) list_double2_pane_vc_t1_ParamLimits

0xed2b,	// (0x00034e4b) list_double2_pane_vc_t1

0xea88,	// (0x00034ba8) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xea88,	// (0x00034ba8) list_double2_large_graphic_pane_vc_g1

0xea94,	// (0x00034bb4) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xea94,	// (0x00034bb4) list_double2_large_graphic_pane_vc_g2

0xeaa0,	// (0x00034bc0) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xeaa0,	// (0x00034bc0) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x00035705) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x00035705) list_double2_large_graphic_pane_vc_g

0xeaac,	// (0x00034bcc) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xeaac,	// (0x00034bcc) list_double2_large_graphic_pane_vc_t1

0xed43,	// (0x00034e63) list_double_time_pane_vc_g1_ParamLimits

0xed43,	// (0x00034e63) list_double_time_pane_vc_g1

0xed4f,	// (0x00034e6f) list_double_time_pane_vc_g2_ParamLimits

0xed4f,	// (0x00034e6f) list_double_time_pane_vc_g2

0x0001,

0xfa3a,	// (0x00035b5a) list_double_time_pane_vc_g_ParamLimits

0xfa3a,	// (0x00035b5a) list_double_time_pane_vc_g

0xed5b,	// (0x00034e7b) list_double_time_pane_vc_t1_ParamLimits

0xed5b,	// (0x00034e7b) list_double_time_pane_vc_t1

0xed7f,	// (0x00034e9f) list_double_time_pane_vc_t2_ParamLimits

0xed7f,	// (0x00034e9f) list_double_time_pane_vc_t2

0xedce,	// (0x00034eee) list_double_time_pane_vc_t3_ParamLimits

0xedce,	// (0x00034eee) list_double_time_pane_vc_t3

0xede0,	// (0x00034f00) list_double_time_pane_vc_t4_ParamLimits

0xede0,	// (0x00034f00) list_double_time_pane_vc_t4

0x0003,

0xfa3f,	// (0x00035b5f) list_double_time_pane_vc_t_ParamLimits

0xfa3f,	// (0x00035b5f) list_double_time_pane_vc_t

0xea02,	// (0x00034b22) list_double_pane_vc_g1_ParamLimits

0xea02,	// (0x00034b22) list_double_pane_vc_g1

0xea0e,	// (0x00034b2e) list_double_pane_vc_g2_ParamLimits

0xea0e,	// (0x00034b2e) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x000356e8) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x000356e8) list_double_pane_vc_g

0xedf4,	// (0x00034f14) list_double_pane_vc_t1_ParamLimits

0xedf4,	// (0x00034f14) list_double_pane_vc_t1

0xee08,	// (0x00034f28) list_double_pane_vc_t2_ParamLimits

0xee08,	// (0x00034f28) list_double_pane_vc_t2

0x0001,

0xfa48,	// (0x00035b68) list_double_pane_vc_t_ParamLimits

0xfa48,	// (0x00035b68) list_double_pane_vc_t

0xea02,	// (0x00034b22) list_double_number_pane_vc_g1_ParamLimits

0xea02,	// (0x00034b22) list_double_number_pane_vc_g1

0xea0e,	// (0x00034b2e) list_double_number_pane_vc_g2_ParamLimits

0xea0e,	// (0x00034b2e) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x000356e8) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x000356e8) list_double_number_pane_vc_g

0xee20,	// (0x00034f40) list_double_number_pane_vc_t1_ParamLimits

0xee20,	// (0x00034f40) list_double_number_pane_vc_t1

0xedf4,	// (0x00034f14) list_double_number_pane_vc_t2_ParamLimits

0xedf4,	// (0x00034f14) list_double_number_pane_vc_t2

0xee32,	// (0x00034f52) list_double_number_pane_vc_t3_ParamLimits

0xee32,	// (0x00034f52) list_double_number_pane_vc_t3

0x0002,

0xfa4d,	// (0x00035b6d) list_double_number_pane_vc_t_ParamLimits

0xfa4d,	// (0x00035b6d) list_double_number_pane_vc_t

0xee4a,	// (0x00034f6a) list_double_large_graphic_pane_vc_g1_ParamLimits

0xee4a,	// (0x00034f6a) list_double_large_graphic_pane_vc_g1

0xee6c,	// (0x00034f8c) list_double_large_graphic_pane_vc_g2_ParamLimits

0xee6c,	// (0x00034f8c) list_double_large_graphic_pane_vc_g2

0xee80,	// (0x00034fa0) list_double_large_graphic_pane_vc_g3_ParamLimits

0xee80,	// (0x00034fa0) list_double_large_graphic_pane_vc_g3

0xee8f,	// (0x00034faf) list_double_large_graphic_pane_vc_g4_ParamLimits

0xee8f,	// (0x00034faf) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa54,	// (0x00035b74) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa54,	// (0x00035b74) list_double_large_graphic_pane_vc_g

0xee9b,	// (0x00034fbb) list_double_large_graphic_pane_vc_t1_ParamLimits

0xee9b,	// (0x00034fbb) list_double_large_graphic_pane_vc_t1

0xeeb7,	// (0x00034fd7) list_double_large_graphic_pane_vc_t2_ParamLimits

0xeeb7,	// (0x00034fd7) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5d,	// (0x00035b7d) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5d,	// (0x00035b7d) list_double_large_graphic_pane_vc_t

0xea02,	// (0x00034b22) list_double_heading_pane_vc_g1_ParamLimits

0xea02,	// (0x00034b22) list_double_heading_pane_vc_g1

0xea0e,	// (0x00034b2e) list_double_heading_pane_vc_g2_ParamLimits

0xea0e,	// (0x00034b2e) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000356e8) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000356e8) list_double_heading_pane_vc_g

0xeed9,	// (0x00034ff9) list_double_heading_pane_vc_t1_ParamLimits

0xeed9,	// (0x00034ff9) list_double_heading_pane_vc_t1

0xeeed,	// (0x0003500d) list_double_heading_pane_vc_t2_ParamLimits

0xeeed,	// (0x0003500d) list_double_heading_pane_vc_t2

0x0001,

0xfa62,	// (0x00035b82) list_double_heading_pane_vc_t_ParamLimits

0xfa62,	// (0x00035b82) list_double_heading_pane_vc_t

0xef05,	// (0x00035025) list_double_graphic_pane_vc_g1_ParamLimits

0xef05,	// (0x00035025) list_double_graphic_pane_vc_g1

0xef1d,	// (0x0003503d) list_double_graphic_pane_vc_g2_ParamLimits

0xef1d,	// (0x0003503d) list_double_graphic_pane_vc_g2

0xea02,	// (0x00034b22) list_double_graphic_pane_vc_g3_ParamLimits

0xea02,	// (0x00034b22) list_double_graphic_pane_vc_g3

0x0003,

0xfa67,	// (0x00035b87) list_double_graphic_pane_vc_g_ParamLimits

0xfa67,	// (0x00035b87) list_double_graphic_pane_vc_g

0xef3a,	// (0x0003505a) list_double_graphic_pane_vc_t1_ParamLimits

0xef3a,	// (0x0003505a) list_double_graphic_pane_vc_t1

0xef59,	// (0x00035079) list_double_graphic_pane_vc_t2_ParamLimits

0xef59,	// (0x00035079) list_double_graphic_pane_vc_t2

0x0001,

0xfa70,	// (0x00035b90) list_double_graphic_pane_vc_t_ParamLimits

0xfa70,	// (0x00035b90) list_double_graphic_pane_vc_t

0xe9d3,	// (0x00034af3) aid_size_cell_fastswap

0x9634,	// (0x0002f754) aid_size_cell_touch_ParamLimits

0x9634,	// (0x0002f754) aid_size_cell_touch

0xf3a4,	// (0x000354c4) popup_fast_swap_wide_window_ParamLimits

0xf3a4,	// (0x000354c4) popup_fast_swap_wide_window

0x9804,	// (0x0002f924) touch_pane_ParamLimits

0x9804,	// (0x0002f924) touch_pane

0xcb75,	// (0x00032c95) button_value_adjust_pane_cp2

0xeae3,	// (0x00034c03) button_value_adjust_pane_cp4

0xeaeb,	// (0x00034c0b) form_field_data_pane_cp2

0x9179,	// (0x0002f299) form_field_data_wide_pane_cp2

0xce70,	// (0x00032f90) bg_scroll_pane_ParamLimits

0xa046,	// (0x00030166) scroll_handle_pane_ParamLimits

0x00bd,	// (0x000261dd) scroll_sc2_down_pane_ParamLimits

0x00bd,	// (0x000261dd) scroll_sc2_down_pane

0xcea1,	// (0x00032fc1) scroll_sc2_up_pane_ParamLimits

0xcea1,	// (0x00032fc1) scroll_sc2_up_pane

0xbe37,	// (0x00031f57) grid_wheel_folder_pane_g1_ParamLimits

0xbe37,	// (0x00031f57) grid_wheel_folder_pane_g1

0x042e,	// (0x0002654e) clock_nsta_pane_cp2_ParamLimits

0x042e,	// (0x0002654e) clock_nsta_pane_cp2

0xa2d9,	// (0x000303f9) listscroll_midp_pane_ParamLimits

0xa2e5,	// (0x00030405) midp_canvas_pane

0x0ccc,	// (0x00026dec) nsta_clock_indic_pane

0x0d1a,	// (0x00026e3a) listscroll_form_pane_vc

0x0d2a,	// (0x00026e4a) listscroll_set_pane_vc_ParamLimits

0x0d2a,	// (0x00026e4a) listscroll_set_pane_vc

0xae9d,	// (0x00030fbd) clock_nsta_pane

0xaec7,	// (0x00030fe7) indicator_nsta_pane

0x1716,	// (0x00027836) bg_popup_sub_pane_cp2_ParamLimits

0x172a,	// (0x0002784a) find_pane_cp2_ParamLimits

0x172a,	// (0x0002784a) find_pane_cp2

0x1740,	// (0x00027860) grid_toobar_pane_ParamLimits

0x2bcc,	// (0x00028cec) list_form_gen_pane_vc_ParamLimits

0x2bcc,	// (0x00028cec) list_form_gen_pane_vc

0x2be2,	// (0x00028d02) scroll_pane_cp8_vc_ParamLimits

0x2be2,	// (0x00028d02) scroll_pane_cp8_vc

0x2c5e,	// (0x00028d7e) data_form_wide_pane_vc_ParamLimits

0x2c5e,	// (0x00028d7e) data_form_wide_pane_vc

0x2c6a,	// (0x00028d8a) form_field_data_wide_pane_vc_g1

0x2c72,	// (0x00028d92) form_field_data_wide_pane_vc_t1_ParamLimits

0x2c72,	// (0x00028d92) form_field_data_wide_pane_vc_t1

0xcb89,	// (0x00032ca9) input_focus_pane_cp6_vc_ParamLimits

0xcb89,	// (0x00032ca9) input_focus_pane_cp6_vc

0x2fbf,	// (0x000290df) list_midp_pane_ParamLimits

0x42d8,	// (0x0002a3f8) scroll_pane_cp16_ParamLimits

0x42d8,	// (0x0002a3f8) scroll_pane_cp16

0x300d,	// (0x0002912d) button_value_adjust_pane_ParamLimits

0x300d,	// (0x0002912d) button_value_adjust_pane

0xb9c5,	// (0x00031ae5) button_value_adjust_pane_cp6_ParamLimits

0xb9c5,	// (0x00031ae5) button_value_adjust_pane_cp6

0xbadf,	// (0x00031bff) settings_code_pane_cp_ParamLimits

0xbadf,	// (0x00031bff) settings_code_pane_cp

0xc771,	// (0x00032891) cell_touch_pane_g1

0xc771,	// (0x00032891) cell_touch_pane_g2

0x0001,

0xf6f4,	// (0x00035814) cell_touch_pane_g

0xbd14,	// (0x00031e34) cell_touch_pane_cp_ParamLimits

0xbd14,	// (0x00031e34) cell_touch_pane_cp

0xbd30,	// (0x00031e50) cell_touch_pane_ParamLimits

0xbd30,	// (0x00031e50) cell_touch_pane

0xc771,	// (0x00032891) scroll_sc2_down_pane_g1

0xc771,	// (0x00032891) scroll_sc2_up_pane_g1

0xc77b,	// (0x0003289b) bg_set_opt_pane_cp4_vc

0x4668,	// (0x0002a788) list_set_graphic_pane_vc_g1_ParamLimits

0x4668,	// (0x0002a788) list_set_graphic_pane_vc_g1

0x4674,	// (0x0002a794) list_set_graphic_pane_vc_g2_ParamLimits

0x4674,	// (0x0002a794) list_set_graphic_pane_vc_g2

0x0001,

0xf9e4,	// (0x00035b04) list_set_graphic_pane_vc_g_ParamLimits

0xf9e4,	// (0x00035b04) list_set_graphic_pane_vc_g

0x4680,	// (0x0002a7a0) text_primary_small_cp13_vc_ParamLimits

0x4680,	// (0x0002a7a0) text_primary_small_cp13_vc

0x4698,	// (0x0002a7b8) list_set_graphic_pane_vc_ParamLimits

0x4698,	// (0x0002a7b8) list_set_graphic_pane_vc

0xc77b,	// (0x0003289b) input_focus_pane_cp2_vc

0xc771,	// (0x00032891) setting_code_pane_vc_g1

0xc7ee,	// (0x0003290e) setting_code_pane_vc_t1

0x46ab,	// (0x0002a7cb) set_text_pane_vc_t1_ParamLimits

0x46ab,	// (0x0002a7cb) set_text_pane_vc_t1

0xc77b,	// (0x0003289b) input_focus_pane_cp1_vc

0x46c7,	// (0x0002a7e7) list_set_text_pane_vc

0xc771,	// (0x00032891) setting_text_pane_vc_g1

0xc77b,	// (0x0003289b) bg_set_opt_pane_cp2_vc

0xc7e5,	// (0x00032905) setting_slider_graphic_pane_vc_g1

0x46d1,	// (0x0002a7f1) setting_slider_graphic_pane_vc_t1

0x46e1,	// (0x0002a801) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9e9,	// (0x00035b09) setting_slider_graphic_pane_vc_t

0x46f1,	// (0x0002a811) slider_set_pane_cp_vc

0x46f9,	// (0x0002a819) slider_set_pane_vc_g1

0x4702,	// (0x0002a822) slider_set_pane_vc_g2

0x0006,

0xf9ee,	// (0x00035b0e) slider_set_pane_vc_g

0xcbe1,	// (0x00032d01) set_opt_bg_pane_g1_copy1

0xcbe9,	// (0x00032d09) set_opt_bg_pane_g2_copy1

0x472e,	// (0x0002a84e) set_opt_bg_pane_g3_copy1

0xcbf9,	// (0x00032d19) set_opt_bg_pane_g4_copy1

0xcc01,	// (0x00032d21) set_opt_bg_pane_g5_copy1

0xcc09,	// (0x00032d29) set_opt_bg_pane_g6_copy1

0x4736,	// (0x0002a856) set_opt_bg_pane_g7_copy1

0x473e,	// (0x0002a85e) set_opt_bg_pane_g8_copy1

0x4746,	// (0x0002a866) set_opt_bg_pane_g9_copy1

0xc77b,	// (0x0003289b) bg_set_opt_pane_cp_vc

0x474e,	// (0x0002a86e) setting_slider_pane_vc_t1

0x475d,	// (0x0002a87d) setting_slider_pane_vc_t2

0x476d,	// (0x0002a88d) setting_slider_pane_vc_t3

0x0002,

0xf9fd,	// (0x00035b1d) setting_slider_pane_vc_t

0x477d,	// (0x0002a89d) slider_set_pane_vc

0x1950,	// (0x00027a70) volume_set_pane_vc_g1

0x1c4b,	// (0x00027d6b) volume_set_pane_vc_g2

0x1c54,	// (0x00027d74) volume_set_pane_vc_g3

0x1c5d,	// (0x00027d7d) volume_set_pane_vc_g4

0x1c66,	// (0x00027d86) volume_set_pane_vc_g5

0x1c6f,	// (0x00027d8f) volume_set_pane_vc_g6

0x1c78,	// (0x00027d98) volume_set_pane_vc_g7

0x1c81,	// (0x00027da1) volume_set_pane_vc_g8

0x1c8a,	// (0x00027daa) volume_set_pane_vc_g9

0x1c93,	// (0x00027db3) volume_set_pane_vc_g10

0x0009,

0xfa04,	// (0x00035b24) volume_set_pane_vc_g

0x4785,	// (0x0002a8a5) volume_set_pane_vc

0x478d,	// (0x0002a8ad) button_value_adjust_pane_cp1_vc

0x4797,	// (0x0002a8b7) list_highlight_pane_cp2_vc

0x47a0,	// (0x0002a8c0) list_set_pane_vc_ParamLimits

0x47a0,	// (0x0002a8c0) list_set_pane_vc

0x47fe,	// (0x0002a91e) main_pane_set_vc_t1_ParamLimits

0x47fe,	// (0x0002a91e) main_pane_set_vc_t1

0x4813,	// (0x0002a933) main_pane_set_vc_t2_ParamLimits

0x4813,	// (0x0002a933) main_pane_set_vc_t2

0x4825,	// (0x0002a945) main_pane_set_vc_t3_ParamLimits

0x4825,	// (0x0002a945) main_pane_set_vc_t3

0x4837,	// (0x0002a957) main_pane_set_vc_t4_ParamLimits

0x4837,	// (0x0002a957) main_pane_set_vc_t4

0x0003,

0xfa19,	// (0x00035b39) main_pane_set_vc_t_ParamLimits

0xfa19,	// (0x00035b39) main_pane_set_vc_t

0x4849,	// (0x0002a969) setting_code_pane_vc_ParamLimits

0x4849,	// (0x0002a969) setting_code_pane_vc

0x4858,	// (0x0002a978) setting_slider_graphic_pane_vc

0x4858,	// (0x0002a978) setting_slider_pane_vc

0x4858,	// (0x0002a978) setting_text_pane_vc

0x4858,	// (0x0002a978) setting_volume_pane_vc

0x4860,	// (0x0002a980) scroll_pane_cp121_vc

0xcb63,	// (0x00032c83) set_content_pane_vc

0x4868,	// (0x0002a988) button_value_adjust_pane_g1

0x4871,	// (0x0002a991) button_value_adjust_pane_g2

0x0001,

0xfa75,	// (0x00035b95) button_value_adjust_pane_g

0x487a,	// (0x0002a99a) form_field_slider_wide_pane_vc_t1_ParamLimits

0x487a,	// (0x0002a99a) form_field_slider_wide_pane_vc_t1

0x488e,	// (0x0002a9ae) form_field_slider_wide_pane_vc_t2_ParamLimits

0x488e,	// (0x0002a9ae) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7a,	// (0x00035b9a) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7a,	// (0x00035b9a) form_field_slider_wide_pane_vc_t

0xc7c9,	// (0x000328e9) input_focus_pane_cp10_vc_ParamLimits

0xc7c9,	// (0x000328e9) input_focus_pane_cp10_vc

0x48bc,	// (0x0002a9dc) slider_cont_pane_cp1_vc_ParamLimits

0x48bc,	// (0x0002a9dc) slider_cont_pane_cp1_vc

0x48ce,	// (0x0002a9ee) slider_form_pane_g1_cp2

0x4702,	// (0x0002a822) slider_form_pane_g2_cp2

0x48fb,	// (0x0002aa1b) form_field_slider_pane_vc_t3

0x4909,	// (0x0002aa29) form_field_slider_pane_vc_t4

0x4917,	// (0x0002aa37) slider_form_pane_vc_ParamLimits

0x4917,	// (0x0002aa37) slider_form_pane_vc

0x4924,	// (0x0002aa44) form_field_slider_pane_vc_t1_ParamLimits

0x4924,	// (0x0002aa44) form_field_slider_pane_vc_t1

0x488e,	// (0x0002a9ae) form_field_slider_pane_vc_t2_ParamLimits

0x488e,	// (0x0002a9ae) form_field_slider_pane_vc_t2

0x0001,

0xfa8c,	// (0x00035bac) form_field_slider_pane_vc_t_ParamLimits

0xfa8c,	// (0x00035bac) form_field_slider_pane_vc_t

0xc7c9,	// (0x000328e9) input_focus_pane_cp9_vc_ParamLimits

0xc7c9,	// (0x000328e9) input_focus_pane_cp9_vc

0x4940,	// (0x0002aa60) slider_cont_pane_vc_ParamLimits

0x4940,	// (0x0002aa60) slider_cont_pane_vc

0x4954,	// (0x0002aa74) list_form_graphic_pane_cp_vc_ParamLimits

0x4954,	// (0x0002aa74) list_form_graphic_pane_cp_vc

0x2c6a,	// (0x00028d8a) form_field_popup_wide_pane_vc_g1

0x4969,	// (0x0002aa89) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4969,	// (0x0002aa89) form_field_popup_wide_pane_vc_t1

0xcb89,	// (0x00032ca9) input_focus_pane_cp8_vc_ParamLimits

0xcb89,	// (0x00032ca9) input_focus_pane_cp8_vc

0x49ae,	// (0x0002aace) list_form_wide_pane_vc_ParamLimits

0x49ae,	// (0x0002aace) list_form_wide_pane_vc

0x49ba,	// (0x0002aada) list_form_graphic_pane_vc_g1

0x49c2,	// (0x0002aae2) list_form_graphic_pane_vc_t1_ParamLimits

0x49c2,	// (0x0002aae2) list_form_graphic_pane_vc_t1

0xc7d7,	// (0x000328f7) list_highlight_pane_cp5_vc_ParamLimits

0xc7d7,	// (0x000328f7) list_highlight_pane_cp5_vc

0x49de,	// (0x0002aafe) list_form_graphic_pane_vc_ParamLimits

0x49de,	// (0x0002aafe) list_form_graphic_pane_vc

0x2c6a,	// (0x00028d8a) form_field_popup_pane_vc_g1

0x49f4,	// (0x0002ab14) form_field_popup_pane_vc_t1_ParamLimits

0x49f4,	// (0x0002ab14) form_field_popup_pane_vc_t1

0xcb89,	// (0x00032ca9) input_focus_pane_cp7_vc_ParamLimits

0xcb89,	// (0x00032ca9) input_focus_pane_cp7_vc

0x4a0b,	// (0x0002ab2b) list_form_pane_vc_ParamLimits

0x4a0b,	// (0x0002ab2b) list_form_pane_vc

0x4a17,	// (0x0002ab37) data_form_pane_vc_t1_ParamLimits

0x4a17,	// (0x0002ab37) data_form_pane_vc_t1

0xcbe1,	// (0x00032d01) input_focus_pane_vc_g1

0xcbe9,	// (0x00032d09) input_focus_pane_vc_g2

0xcbf1,	// (0x00032d11) input_focus_pane_vc_g3

0xcbf9,	// (0x00032d19) input_focus_pane_vc_g4

0xcc01,	// (0x00032d21) input_focus_pane_vc_g5

0xcc09,	// (0x00032d29) input_focus_pane_vc_g6

0xcc11,	// (0x00032d31) input_focus_pane_vc_g7

0xcc19,	// (0x00032d39) input_focus_pane_vc_g8

0xcc21,	// (0x00032d41) input_focus_pane_vc_g9

0xc771,	// (0x00032891) input_focus_pane_vc_g10

0x0009,

0xf67d,	// (0x0003579d) input_focus_pane_vc_g

0x2c5e,	// (0x00028d7e) data_form_pane_vc_ParamLimits

0x2c5e,	// (0x00028d7e) data_form_pane_vc

0x2c6a,	// (0x00028d8a) form_field_data_pane_vc_g1

0x4a32,	// (0x0002ab52) form_field_data_pane_vc_t1_ParamLimits

0x4a32,	// (0x0002ab52) form_field_data_pane_vc_t1

0xcb89,	// (0x00032ca9) input_focus_pane_vc_ParamLimits

0xcb89,	// (0x00032ca9) input_focus_pane_vc

0x4a4c,	// (0x0002ab6c) button_value_adjust_pane_cp3_vc

0x4a54,	// (0x0002ab74) button_value_adjust_pane_cp5_vc

0x4a5c,	// (0x0002ab7c) form_field_data_pane_vc_ParamLimits

0x4a5c,	// (0x0002ab7c) form_field_data_pane_vc

0x4a73,	// (0x0002ab93) form_field_data_pane_vc_cp2

0x4a7b,	// (0x0002ab9b) form_field_data_wide_pane_vc_ParamLimits

0x4a7b,	// (0x0002ab9b) form_field_data_wide_pane_vc

0x4a91,	// (0x0002abb1) form_field_data_wide_pane_vc_cp2

0x4a99,	// (0x0002abb9) form_field_popup_pane_vc_ParamLimits

0x4a99,	// (0x0002abb9) form_field_popup_pane_vc

0x4ab0,	// (0x0002abd0) form_field_popup_wide_pane_vc_ParamLimits

0x4ab0,	// (0x0002abd0) form_field_popup_wide_pane_vc

0x4ac6,	// (0x0002abe6) form_field_slider_pane_vc_ParamLimits

0x4ac6,	// (0x0002abe6) form_field_slider_pane_vc

0x4ad9,	// (0x0002abf9) form_field_slider_wide_pane_vc_ParamLimits

0x4ad9,	// (0x0002abf9) form_field_slider_wide_pane_vc

0xbd4d,	// (0x00031e6d) grid_touch_1_pane_ParamLimits

0xbd4d,	// (0x00031e6d) grid_touch_1_pane

0xbd61,	// (0x00031e81) grid_touch_2_pane_ParamLimits

0xbd61,	// (0x00031e81) grid_touch_2_pane

0x4ba7,	// (0x0002acc7) touch_pane_g1_ParamLimits

0x4ba7,	// (0x0002acc7) touch_pane_g1

0x4b10,	// (0x0002ac30) cell_app_pane_cp_wide_ParamLimits

0x4b10,	// (0x0002ac30) cell_app_pane_cp_wide

0x4b21,	// (0x0002ac41) grid_popup_fast_wide_pane_ParamLimits

0x4b21,	// (0x0002ac41) grid_popup_fast_wide_pane

0x4b35,	// (0x0002ac55) scroll_pane_cp19_ParamLimits

0x4b35,	// (0x0002ac55) scroll_pane_cp19

0xc77b,	// (0x0003289b) bg_popup_window_pane_cp20

0x4b49,	// (0x0002ac69) listscroll_popup_fast_wide_pane

0xd165,	// (0x00033285) grid_indicator_nsta_pane

0x4b51,	// (0x0002ac71) clock_nsta_pane_g1

0x4b5a,	// (0x0002ac7a) clock_nsta_pane_t1

0xbd8b,	// (0x00031eab) cell_indicator_nsta_pane_ParamLimits

0xbd8b,	// (0x00031eab) cell_indicator_nsta_pane

0x4ba7,	// (0x0002acc7) cell_indicator_nsta_pane_g1

0xbda2,	// (0x00031ec2) cell_indicator_nsta_pane_g2

0x0001,

0xfa9d,	// (0x00035bbd) cell_indicator_nsta_pane_g

0x4bc2,	// (0x0002ace2) clock_nsta_pane_cp

0x4bcb,	// (0x0002aceb) indicator_nsta_pane_cp

0x4bd3,	// (0x0002acf3) nsta_clock_indic_pane_g1

0xc813,	// (0x00032933) grid_indicator_pane

0xa0e0,	// (0x00030200) scroll_pane_cp29

0x035b,	// (0x0002647b) indicator_nsta_pane_cp2_ParamLimits

0x035b,	// (0x0002647b) indicator_nsta_pane_cp2

0xc7d7,	// (0x000328f7) main_apps_wheel_pane

0xb337,	// (0x00031457) form_midp_field_text_pane_ParamLimits

0x2fcb,	// (0x000290eb) scroll_bar_cp050_ParamLimits

0x4c23,	// (0x0002ad43) cell_indicator_pane_ParamLimits

0x4c23,	// (0x0002ad43) cell_indicator_pane

0x4c3c,	// (0x0002ad5c) cell_indicator_pane_g1

0xbdc1,	// (0x00031ee1) grid_wheel_folder_pane_ParamLimits

0xbdc1,	// (0x00031ee1) grid_wheel_folder_pane

0xbdcf,	// (0x00031eef) list_wheel_apps_pane_ParamLimits

0xbdcf,	// (0x00031eef) list_wheel_apps_pane

0xbddd,	// (0x00031efd) main_apps_wheel_pane_g1_ParamLimits

0xbddd,	// (0x00031efd) main_apps_wheel_pane_g1

0xbde9,	// (0x00031f09) main_apps_wheel_pane_g2_ParamLimits

0xbde9,	// (0x00031f09) main_apps_wheel_pane_g2

0x0001,

0xfab9,	// (0x00035bd9) main_apps_wheel_pane_g_ParamLimits

0xfab9,	// (0x00035bd9) main_apps_wheel_pane_g

0xbdf7,	// (0x00031f17) main_apps_wheel_pane_t1_ParamLimits

0xbdf7,	// (0x00031f17) main_apps_wheel_pane_t1

0xbe0b,	// (0x00031f2b) list_wheel_apps_pane_g1

0xbe13,	// (0x00031f33) list_wheel_apps_pane_g2

0xbe1b,	// (0x00031f3b) list_wheel_apps_pane_g3

0xbe23,	// (0x00031f43) list_wheel_apps_pane_g4

0xbe2d,	// (0x00031f4d) list_wheel_apps_pane_g5

0x0004,

0xfabe,	// (0x00035bde) list_wheel_apps_pane_g

0x0657,	// (0x00026777) navi_icon_text_pane

0xad91,	// (0x00030eb1) aid_fill_nsta

0x4d03,	// (0x0002ae23) navi_icon_text_pane_g1

0x4d0f,	// (0x0002ae2f) navi_icon_text_pane_t1

0x04fa,	// (0x0002661a) list_set_graphic_pane_t1_ParamLimits

0x04fa,	// (0x0002661a) list_set_graphic_pane_t1

0x370e,	// (0x0002982e) popup_midp_note_alarm_window_t6_ParamLimits

0x370e,	// (0x0002982e) popup_midp_note_alarm_window_t6

0x3720,	// (0x00029840) popup_midp_note_alarm_window_t7_ParamLimits

0x3720,	// (0x00029840) popup_midp_note_alarm_window_t7

0x3732,	// (0x00029852) popup_midp_note_alarm_window_t8_ParamLimits

0x3732,	// (0x00029852) popup_midp_note_alarm_window_t8

0x3744,	// (0x00029864) popup_midp_note_alarm_window_t9_ParamLimits

0x3744,	// (0x00029864) popup_midp_note_alarm_window_t9

0x3756,	// (0x00029876) popup_midp_note_alarm_window_t10_ParamLimits

0x3756,	// (0x00029876) popup_midp_note_alarm_window_t10

0x3768,	// (0x00029888) popup_midp_note_alarm_window_t11_ParamLimits

0x3768,	// (0x00029888) popup_midp_note_alarm_window_t11

0xb683,	// (0x000317a3) scroll_pane_cp17_ParamLimits

0xb683,	// (0x000317a3) scroll_pane_cp17

0x1950,	// (0x00027a70) volume_small_pane_cp_g1

0x1c9c,	// (0x00027dbc) volume_small_pane_cp_g2

0x1ca5,	// (0x00027dc5) volume_small_pane_cp_g3

0x1cae,	// (0x00027dce) volume_small_pane_cp_g4

0x1cb7,	// (0x00027dd7) volume_small_pane_cp_g5

0x1c66,	// (0x00027d86) volume_small_pane_cp_g6

0x1cc0,	// (0x00027de0) volume_small_pane_cp_g7

0x1cc9,	// (0x00027de9) volume_small_pane_cp_g8

0x1cd2,	// (0x00027df2) volume_small_pane_cp_g9

0x1cdb,	// (0x00027dfb) volume_small_pane_cp_g10

0x08b8,	// (0x000269d8) midp_ticker_pane_g1_ParamLimits

0x08c4,	// (0x000269e4) midp_ticker_pane_g2_ParamLimits

0xf749,	// (0x00035869) midp_ticker_pane_g_ParamLimits

0x08d0,	// (0x000269f0) midp_ticker_pane_t1_ParamLimits

0xadb5,	// (0x00030ed5) aid_fill_nsta_2

0x2fb7,	// (0x000290d7) list_form2_midp_pane

0x40c2,	// (0x0002a1e2) midp_editing_number_pane_ParamLimits

0x40d1,	// (0x0002a1f1) midp_ticker_pane_ParamLimits

0x4d21,	// (0x0002ae41) form2_midp_field_pane

0x4d45,	// (0x0002ae65) scroll_pane_cp51

0x4d65,	// (0x0002ae85) form2_midp_button_pane_ParamLimits

0x4d65,	// (0x0002ae85) form2_midp_button_pane

0x4d77,	// (0x0002ae97) form2_midp_content_pane_ParamLimits

0x4d77,	// (0x0002ae97) form2_midp_content_pane

0x4d91,	// (0x0002aeb1) form2_midp_field_choice_group_pane

0x4d99,	// (0x0002aeb9) form2_midp_field_pane_g1

0x4da1,	// (0x0002aec1) form2_midp_field_pane_g2

0x4da9,	// (0x0002aec9) form2_midp_field_pane_g3

0x4db1,	// (0x0002aed1) form2_midp_field_pane_g4

0x0003,

0xfae3,	// (0x00035c03) form2_midp_field_pane_g

0x4db9,	// (0x0002aed9) form2_midp_gauge_slider_pane

0x4dc1,	// (0x0002aee1) form2_midp_gauge_wait_pane

0x4dc9,	// (0x0002aee9) form2_midp_image_pane_ParamLimits

0x4dc9,	// (0x0002aee9) form2_midp_image_pane

0xbe60,	// (0x00031f80) form2_midp_label_pane_ParamLimits

0xbe60,	// (0x00031f80) form2_midp_label_pane

0xbe79,	// (0x00031f99) form2_midp_label_pane_cp_ParamLimits

0xbe79,	// (0x00031f99) form2_midp_label_pane_cp

0x4e1e,	// (0x0002af3e) form2_midp_string_pane_ParamLimits

0x4e1e,	// (0x0002af3e) form2_midp_string_pane

0xef83,	// (0x000350a3) form2_midp_text_pane_ParamLimits

0xef83,	// (0x000350a3) form2_midp_text_pane

0x4e30,	// (0x0002af50) form2_midp_time_pane

0x4e40,	// (0x0002af60) input_focus_pane_cp51_ParamLimits

0x4e40,	// (0x0002af60) input_focus_pane_cp51

0xbe98,	// (0x00031fb8) form2_midp_label_pane_t1_ParamLimits

0xbe98,	// (0x00031fb8) form2_midp_label_pane_t1

0xef9c,	// (0x000350bc) form2_mdip_text_pane_t1_ParamLimits

0xef9c,	// (0x000350bc) form2_mdip_text_pane_t1

0xefba,	// (0x000350da) form2_midp_time_pane_t1

0x4ea1,	// (0x0002afc1) form2_midp_gauge_slider_pane_t1

0xbed8,	// (0x00031ff8) form2_midp_gauge_slider_pane_t2

0xbeea,	// (0x0003200a) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaec,	// (0x00035c0c) form2_midp_gauge_slider_pane_t

0x4ed7,	// (0x0002aff7) form2_midp_slider_pane

0x4ee3,	// (0x0002b003) form2_midp_gauge_wait_pane_t1

0x4ef1,	// (0x0002b011) form2_midp_wait_pane_ParamLimits

0x4ef1,	// (0x0002b011) form2_midp_wait_pane

0xbefc,	// (0x0003201c) list_single_2graphic_pane_cp4_ParamLimits

0xbefc,	// (0x0003201c) list_single_2graphic_pane_cp4

0xb28e,	// (0x000313ae) list_single_midp_graphic_pane_cp_ParamLimits

0xb28e,	// (0x000313ae) list_single_midp_graphic_pane_cp

0xc77b,	// (0x0003289b) list_highlight_pane_cp20

0x4f44,	// (0x0002b064) list_single_2graphic_pane_g1_cp4

0x454c,	// (0x0002a66c) list_single_2graphic_pane_g2_cp4

0x4f4c,	// (0x0002b06c) list_single_2graphic_pane_t1_cp4

0xc7d7,	// (0x000328f7) list_highlight_pane_cp21

0x4f5b,	// (0x0002b07b) list_single_midp_graphic_pane_g4_cp

0x4f6a,	// (0x0002b08a) list_single_midp_graphic_pane_t1_cp

0xbf11,	// (0x00032031) form2_mdip_string_pane_t1_ParamLimits

0xbf11,	// (0x00032031) form2_mdip_string_pane_t1

0xc77b,	// (0x0003289b) bg_wml_button_pane_cp2

0xc771,	// (0x00032891) form2_midp_image_pane_g1

0xeace,	// (0x00034bee) list_double_large_graphic_pane_g5_ParamLimits

0xeace,	// (0x00034bee) list_double_large_graphic_pane_g5

0xa2d9,	// (0x000303f9) midp_form_pane_ParamLimits

0xc7d7,	// (0x000328f7) main_apps_wheel_pane_ParamLimits

0xaa6f,	// (0x00030b8f) popup_preview_window_ParamLimits

0xaa6f,	// (0x00030b8f) popup_preview_window

0xad3c,	// (0x00030e5c) popup_touch_info_window_ParamLimits

0xad3c,	// (0x00030e5c) popup_touch_info_window

0xad5a,	// (0x00030e7a) popup_touch_menu_window_ParamLimits

0xad5a,	// (0x00030e7a) popup_touch_menu_window

0xc767,	// (0x00032887) bg_popup_sub_pane_cp6

0x5086,	// (0x0002b1a6) list_touch_menu_pane

0xbf87,	// (0x000320a7) list_single_touch_menu_pane_ParamLimits

0xbf87,	// (0x000320a7) list_single_touch_menu_pane

0xbf9b,	// (0x000320bb) list_single_touch_menu_pane_t1

0xc7d7,	// (0x000328f7) bg_popup_sub_pane_cp7_ParamLimits

0xc7d7,	// (0x000328f7) bg_popup_sub_pane_cp7

0x50b2,	// (0x0002b1d2) heading_sub_pane

0x50ba,	// (0x0002b1da) list_touch_info_pane_ParamLimits

0x50ba,	// (0x0002b1da) list_touch_info_pane

0x50c9,	// (0x0002b1e9) list_single_touch_info_pane_ParamLimits

0x50c9,	// (0x0002b1e9) list_single_touch_info_pane

0x50db,	// (0x0002b1fb) list_single_touch_info_pane_t1

0x50e9,	// (0x0002b209) list_single_touch_info_pane_t2

0x0001,

0xfafa,	// (0x00035c1a) list_single_touch_info_pane_t

0x07d7,	// (0x000268f7) bg_popup_heading_pane_cp

0x50f7,	// (0x0002b217) heading_sub_pane_t1

0x2bf8,	// (0x00028d18) bg_popup_preview_window_pane_cp_ParamLimits

0x2bf8,	// (0x00028d18) bg_popup_preview_window_pane_cp

0x50b2,	// (0x0002b1d2) heading_preview_pane

0x50ba,	// (0x0002b1da) list_preview_pane_ParamLimits

0x50ba,	// (0x0002b1da) list_preview_pane

0x5105,	// (0x0002b225) popup_preview_window_g1

0x50c9,	// (0x0002b1e9) list_single_preview_pane_ParamLimits

0x50c9,	// (0x0002b1e9) list_single_preview_pane

0x510d,	// (0x0002b22d) list_single_preview_pane_g1

0x5115,	// (0x0002b235) list_single_preview_pane_t1

0x50db,	// (0x0002b1fb) list_single_preview_pane_t2

0x0001,

0xfaff,	// (0x00035c1f) list_single_preview_pane_t

0x5123,	// (0x0002b243) bg_popup_heading_pane_cp2_ParamLimits

0x5123,	// (0x0002b243) bg_popup_heading_pane_cp2

0x5139,	// (0x0002b259) heading_preview_pane_g1

0x5141,	// (0x0002b261) heading_preview_pane_t1_ParamLimits

0x5141,	// (0x0002b261) heading_preview_pane_t1

0xc82a,	// (0x0003294a) soft_indicator_pane_t1_ParamLimits

0xcb05,	// (0x00032c25) scroll_pane_ParamLimits

0xce8f,	// (0x00032faf) scroll_sc2_left_pane

0xce98,	// (0x00032fb8) scroll_sc2_right_pane

0xceb7,	// (0x00032fd7) scroll_bg_pane_g1_ParamLimits

0xcecc,	// (0x00032fec) scroll_bg_pane_g2_ParamLimits

0xcee4,	// (0x00033004) scroll_bg_pane_g3_ParamLimits

0xf6d4,	// (0x000357f4) scroll_bg_pane_g_ParamLimits

0xceb7,	// (0x00032fd7) scroll_handle_pane_g1_ParamLimits

0xcef9,	// (0x00033019) scroll_handle_pane_g2_ParamLimits

0xcee4,	// (0x00033004) scroll_handle_pane_g3_ParamLimits

0xf6db,	// (0x000357fb) scroll_handle_pane_g_ParamLimits

0xa616,	// (0x00030736) popup_choice_list_window_ParamLimits

0xa616,	// (0x00030736) popup_choice_list_window

0x1722,	// (0x00027842) choice_list_pane

0x17d4,	// (0x000278f4) cell_toolbar_pane_t1

0x17fc,	// (0x0002791c) toolbar_button_pane_ParamLimits

0x3c34,	// (0x00029d54) ai_gene_pane_1_t2_ParamLimits

0x3c34,	// (0x00029d54) ai_gene_pane_1_t2

0x0001,

0xf8f7,	// (0x00035a17) ai_gene_pane_1_t_ParamLimits

0xf8f7,	// (0x00035a17) ai_gene_pane_1_t

0x515e,	// (0x0002b27e) scroll_sc2_left_pane_g1

0x515e,	// (0x0002b27e) scroll_sc2_right_pane_g1

0x0d0e,	// (0x00026e2e) bg_popup_sub_pane_cp10

0x5168,	// (0x0002b288) list_choice_list_pane

0xbfa9,	// (0x000320c9) list_single_choice_list_pane_ParamLimits

0xbfa9,	// (0x000320c9) list_single_choice_list_pane

0xd173,	// (0x00033293) list_single_choice_list_pane_g1

0x9f0a,	// (0x0003002a) list_single_choice_list_pane_t1_ParamLimits

0x9f0a,	// (0x0003002a) list_single_choice_list_pane_t1

0x519c,	// (0x0002b2bc) choice_list_pane_g1

0xbfbd,	// (0x000320dd) choice_list_pane_t1

0xc767,	// (0x00032887) input_focus_pane_cp11

0xce04,	// (0x00032f24) title_pane_stacon_g2_ParamLimits

0xce04,	// (0x00032f24) title_pane_stacon_g2

0x0002,

0xf6ba,	// (0x000357da) title_pane_stacon_g_ParamLimits

0xf6ba,	// (0x000357da) title_pane_stacon_g

0x07d7,	// (0x000268f7) cursor_press_pane

0xa6bd,	// (0x000307dd) popup_fep_hwr_window_ParamLimits

0xa6bd,	// (0x000307dd) popup_fep_hwr_window

0x0e78,	// (0x00026f98) popup_fep_vkb_window_ParamLimits

0x0e78,	// (0x00026f98) popup_fep_vkb_window

0xbfcb,	// (0x000320eb) cursor_press_pane_g1

0x0002,

0xfb28,	// (0x00035c48) fep_vkb_side_pane_g_ParamLimits

0x1d1d,	// (0x00027e3d) fep_hwr_candidate_pane_ParamLimits

0x1d1d,	// (0x00027e3d) fep_hwr_candidate_pane

0x1d47,	// (0x00027e67) fep_hwr_side_pane_ParamLimits

0x1d47,	// (0x00027e67) fep_hwr_side_pane

0x1d67,	// (0x00027e87) fep_hwr_top_pane_ParamLimits

0x1d67,	// (0x00027e87) fep_hwr_top_pane

0x1d7f,	// (0x00027e9f) fep_hwr_write_pane_ParamLimits

0x1d7f,	// (0x00027e9f) fep_hwr_write_pane

0xfb28,	// (0x00035c48) fep_vkb_side_pane_g

0x51ba,	// (0x0002b2da) fep_hwr_top_pane_g1

0x51cc,	// (0x0002b2ec) fep_hwr_top_pane_g2

0x1dab,	// (0x00027ecb) fep_hwr_top_pane_g3

0x0002,

0xfb04,	// (0x00035c24) fep_hwr_top_pane_g

0x1dc0,	// (0x00027ee0) fep_hwr_top_text_pane

0xcfbc,	// (0x000330dc) fep_hwr_top_text_pane_g1

0x5202,	// (0x0002b322) fep_hwr_top_text_pane_t1

0x1eb6,	// (0x00027fd6) fep_hwr_candidate_pane_g1

0x5447,	// (0x0002b567) fep_vkb_keypad_pane_g3_ParamLimits

0x5447,	// (0x0002b567) fep_vkb_keypad_pane_g3

0x546f,	// (0x0002b58f) fep_vkb_keypad_pane_g4_ParamLimits

0x546f,	// (0x0002b58f) fep_vkb_keypad_pane_g4

0x54de,	// (0x0002b5fe) fep_vkb_bottom_pane_g2_ParamLimits

0x54de,	// (0x0002b5fe) fep_vkb_bottom_pane_g2

0x0001,

0xfb2f,	// (0x00035c4f) fep_vkb_bottom_pane_g_ParamLimits

0xfb2f,	// (0x00035c4f) fep_vkb_bottom_pane_g

0x515e,	// (0x0002b27e) cell_vkb_side_pane_g2

0x0001,

0xfb39,	// (0x00035c59) cell_vkb_side_pane_g

0x5569,	// (0x0002b689) cell_vkb_side_pane_t1

0x5577,	// (0x0002b697) cell_vkb_side_pane_t1_copy1

0x515e,	// (0x0002b27e) bg_fep_vkb_candidate_pane_g2

0x56a3,	// (0x0002b7c3) cell_vkb_candidate_pane_ParamLimits

0x5210,	// (0x0002b330) aid_size_cell_vkb_ParamLimits

0x5210,	// (0x0002b330) aid_size_cell_vkb

0x56a3,	// (0x0002b7c3) cell_vkb_candidate_pane

0x1ed0,	// (0x00027ff0) bg_popup_fep_shadow_pane_g1

0xc032,	// (0x00032152) fep_vkb_bottom_pane_ParamLimits

0xc032,	// (0x00032152) fep_vkb_bottom_pane

0x52d4,	// (0x0002b3f4) fep_vkb_candidate_pane_ParamLimits

0x52d4,	// (0x0002b3f4) fep_vkb_candidate_pane

0xc057,	// (0x00032177) fep_vkb_keypad_pane_ParamLimits

0xc057,	// (0x00032177) fep_vkb_keypad_pane

0xd1a3,	// (0x000332c3) fep_vkb_side_pane_ParamLimits

0xd1a3,	// (0x000332c3) fep_vkb_side_pane

0xd1df,	// (0x000332ff) fep_vkb_top_pane_ParamLimits

0xd1df,	// (0x000332ff) fep_vkb_top_pane

0x53a0,	// (0x0002b4c0) fep_vkb_top_pane_g1_ParamLimits

0x53a0,	// (0x0002b4c0) fep_vkb_top_pane_g1

0x53af,	// (0x0002b4cf) fep_vkb_top_pane_g2_ParamLimits

0x53af,	// (0x0002b4cf) fep_vkb_top_pane_g2

0x53be,	// (0x0002b4de) fep_vkb_top_pane_g3_ParamLimits

0x53be,	// (0x0002b4de) fep_vkb_top_pane_g3

0x0003,

0xfb1f,	// (0x00035c3f) fep_vkb_top_pane_g_ParamLimits

0xfb1f,	// (0x00035c3f) fep_vkb_top_pane_g

0x53dc,	// (0x0002b4fc) fep_vkb_top_text_pane_ParamLimits

0x53dc,	// (0x0002b4fc) fep_vkb_top_text_pane

0xd214,	// (0x00033334) fep_vkb_side_pane_g1_ParamLimits

0xd214,	// (0x00033334) fep_vkb_side_pane_g1

0x5436,	// (0x0002b556) grid_vkb_side_pane_ParamLimits

0x5436,	// (0x0002b556) grid_vkb_side_pane

0x1ed8,	// (0x00027ff8) bg_popup_fep_shadow_pane_g2

0x1ee1,	// (0x00028001) bg_popup_fep_shadow_pane_g3

0x1ee9,	// (0x00028009) bg_popup_fep_shadow_pane_g4

0x1ef2,	// (0x00028012) bg_popup_fep_shadow_pane_g5

0x1efc,	// (0x0002801c) bg_popup_fep_shadow_pane_g6

0x1f04,	// (0x00028024) bg_popup_fep_shadow_pane_g7

0xcc01,	// (0x00032d21) bg_popup_fep_shadow_pane_g8

0x548d,	// (0x0002b5ad) grid_vkb_keypad_number_pane_ParamLimits

0x548d,	// (0x0002b5ad) grid_vkb_keypad_number_pane

0x549d,	// (0x0002b5bd) grid_vkb_keypad_pane_ParamLimits

0x549d,	// (0x0002b5bd) grid_vkb_keypad_pane

0x54c3,	// (0x0002b5e3) fep_vkb_bottom_pane_g1_ParamLimits

0x54c3,	// (0x0002b5e3) fep_vkb_bottom_pane_g1

0x54ec,	// (0x0002b60c) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x54ec,	// (0x0002b60c) grid_vkb_keypad_bottom_left_pane

0x5501,	// (0x0002b621) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x5501,	// (0x0002b621) grid_vkb_keypad_bottom_right_pane

0x5516,	// (0x0002b636) fep_vkb_top_text_pane_g1

0xd25b,	// (0x0003337b) fep_vkb_top_text_pane_t1

0xd26d,	// (0x0003338d) cell_vkb_side_pane_ParamLimits

0xd26d,	// (0x0003338d) cell_vkb_side_pane

0x515e,	// (0x0002b27e) cell_vkb_side_pane_g1

0x5585,	// (0x0002b6a5) cell_vkb_keypad_pane_ParamLimits

0x5585,	// (0x0002b6a5) cell_vkb_keypad_pane

0x55fa,	// (0x0002b71a) cell_vkb_keypad_pane_g1

0x0008,

0xfb4c,	// (0x00035c6c) bg_popup_fep_shadow_pane_g

0x515e,	// (0x0002b27e) cell_hwr_side_pane_g1

0x515e,	// (0x0002b27e) cell_hwr_side_pane_g2

0x5604,	// (0x0002b724) cell_vkb_keypad_pane_t1

0xd283,	// (0x000333a3) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd283,	// (0x000333a3) cell_vkb_keypad_bottom_left_pane

0xd298,	// (0x000333b8) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd298,	// (0x000333b8) cell_vkb_keypad_bottom_right_pane

0x515e,	// (0x0002b27e) cell_vkb_keypad_bottom_left_pane_g1

0x515e,	// (0x0002b27e) cell_vkb_keypad_bottom_right_pane_g1

0x5668,	// (0x0002b788) cell_vkb_keypad_number_pane_ParamLimits

0x5668,	// (0x0002b788) cell_vkb_keypad_number_pane

0x5687,	// (0x0002b7a7) cell_vkb_keypad_number_pane_g1

0x5691,	// (0x0002b7b1) cell_vkb_keypad_number_pane_g2

0x569a,	// (0x0002b7ba) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3e,	// (0x00035c5e) cell_vkb_keypad_number_pane_g

0x5604,	// (0x0002b724) cell_vkb_keypad_number_pane_t1

0x56be,	// (0x0002b7de) fep_vkb_candidate_pane_g1

0x0001,

0xfb39,	// (0x00035c59) cell_hwr_side_pane_g

0x56d7,	// (0x0002b7f7) cell_hwr_side_pane_t1

0x1f16,	// (0x00028036) cell_hwr_side_pane_t1_copy1

0x53ce,	// (0x0002b4ee) cell_hwr_candidate_pane_g1

0x1f24,	// (0x00028044) cell_hwr_candidate_pane_t1

0x515e,	// (0x0002b27e) cell_vkb_candidate_pane_g2

0x575d,	// (0x0002b87d) cell_vkb_candidate_pane_t1

0x1ce4,	// (0x00027e04) bg_popup_fep_shadow_pane_ParamLimits

0x1ce4,	// (0x00027e04) bg_popup_fep_shadow_pane

0xd17b,	// (0x0003329b) bg_fep_hwr_top_pane_g4

0x51de,	// (0x0002b2fe) bg_hwr_side_pane_g1_ParamLimits

0x51de,	// (0x0002b2fe) bg_hwr_side_pane_g1

0xbfeb,	// (0x0003210b) cell_hwr_side_pane_ParamLimits

0xbfeb,	// (0x0003210b) cell_hwr_side_pane

0x1e37,	// (0x00027f57) fep_hwr_write_pane_g1_ParamLimits

0x1e37,	// (0x00027f57) fep_hwr_write_pane_g1

0x1e44,	// (0x00027f64) fep_hwr_write_pane_g2_ParamLimits

0x1e44,	// (0x00027f64) fep_hwr_write_pane_g2

0x1e51,	// (0x00027f71) fep_hwr_write_pane_g3_ParamLimits

0x1e51,	// (0x00027f71) fep_hwr_write_pane_g3

0xc00b,	// (0x0003212b) fep_hwr_write_pane_g4_ParamLimits

0xc00b,	// (0x0003212b) fep_hwr_write_pane_g4

0x0005,

0xfb0b,	// (0x00035c2b) fep_hwr_write_pane_g_ParamLimits

0xfb0b,	// (0x00035c2b) fep_hwr_write_pane_g

0xd17b,	// (0x0003329b) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xd17b,	// (0x0003329b) bg_fep_hwr_candidate_pane_g2

0x1e74,	// (0x00027f94) cell_hwr_candidate_pane_ParamLimits

0x1e74,	// (0x00027f94) cell_hwr_candidate_pane

0x1eb6,	// (0x00027fd6) fep_hwr_candidate_pane_g1_ParamLimits

0x523e,	// (0x0002b35e) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x523e,	// (0x0002b35e) bg_popup_fep_shadow_pane_cp2

0x53ce,	// (0x0002b4ee) fep_vkb_top_pane_g4_ParamLimits

0x53ce,	// (0x0002b4ee) fep_vkb_top_pane_g4

0x5414,	// (0x0002b534) fep_vkb_side_pane_g2_ParamLimits

0x5414,	// (0x0002b534) fep_vkb_side_pane_g2

0x9079,	// (0x0002f199) list_setting_pane_t4_ParamLimits

0x9079,	// (0x0002f199) list_setting_pane_t4

0x9113,	// (0x0002f233) list_setting_number_pane_t5_ParamLimits

0x9113,	// (0x0002f233) list_setting_number_pane_t5

0xcff3,	// (0x00033113) list_double_heading_pane_cp2_ParamLimits

0xcff3,	// (0x00033113) list_double_heading_pane_cp2

0x576b,	// (0x0002b88b) list_double_heading_pane_g1_cp2_ParamLimits

0x576b,	// (0x0002b88b) list_double_heading_pane_g1_cp2

0x5777,	// (0x0002b897) list_double_heading_pane_g2_cp2_ParamLimits

0x5777,	// (0x0002b897) list_double_heading_pane_g2_cp2

0x578b,	// (0x0002b8ab) list_double_heading_pane_t1_cp2_ParamLimits

0x578b,	// (0x0002b8ab) list_double_heading_pane_t1_cp2

0x57a1,	// (0x0002b8c1) list_double_heading_pane_t2_cp2_ParamLimits

0x57a1,	// (0x0002b8c1) list_double_heading_pane_t2_cp2

0xc75f,	// (0x0003287f) aid_value_unit2

0xf3ba,	// (0x000354da) popup_preview_fixed_window

0xc901,	// (0x00032a21) bg_popup_preview_window_pane_cp02

0x57b3,	// (0x0002b8d3) list_preview_fixed_pane

0x57f9,	// (0x0002b919) list_empty_pane_fp_ParamLimits

0x57f9,	// (0x0002b919) list_empty_pane_fp

0x57f9,	// (0x0002b919) list_single_cale_day_pane_fp_ParamLimits

0x57f9,	// (0x0002b919) list_single_cale_day_pane_fp

0x57f9,	// (0x0002b919) list_single_graphic_heading_pane_fp_ParamLimits

0x57f9,	// (0x0002b919) list_single_graphic_heading_pane_fp

0x57f9,	// (0x0002b919) list_single_graphic_pane_fp_ParamLimits

0x57f9,	// (0x0002b919) list_single_graphic_pane_fp

0x57f9,	// (0x0002b919) list_single_heading_pane_fp_ParamLimits

0x57f9,	// (0x0002b919) list_single_heading_pane_fp

0x57f9,	// (0x0002b919) list_single_pane_fp_ParamLimits

0x57f9,	// (0x0002b919) list_single_pane_fp

0x580f,	// (0x0002b92f) list_single_pane_fp_g1_ParamLimits

0x580f,	// (0x0002b92f) list_single_pane_fp_g1

0xefcd,	// (0x000350ed) list_single_pane_fp_g2_ParamLimits

0xefcd,	// (0x000350ed) list_single_pane_fp_g2

0xefd9,	// (0x000350f9) list_single_pane_fp_g3_ParamLimits

0xefd9,	// (0x000350f9) list_single_pane_fp_g3

0x581b,	// (0x0002b93b) list_single_pane_fp_g4_ParamLimits

0x581b,	// (0x0002b93b) list_single_pane_fp_g4

0x0003,

0xfb6d,	// (0x00035c8d) list_single_pane_fp_g_ParamLimits

0xfb6d,	// (0x00035c8d) list_single_pane_fp_g

0xefed,	// (0x0003510d) list_single_pane_fp_t1_ParamLimits

0xefed,	// (0x0003510d) list_single_pane_fp_t1

0xf004,	// (0x00035124) list_single_graphic_pane_fp_g1_ParamLimits

0xf004,	// (0x00035124) list_single_graphic_pane_fp_g1

0x580f,	// (0x0002b92f) list_single_graphic_pane_fp_g2_ParamLimits

0x580f,	// (0x0002b92f) list_single_graphic_pane_fp_g2

0xefcd,	// (0x000350ed) list_single_graphic_pane_fp_g3_ParamLimits

0xefcd,	// (0x000350ed) list_single_graphic_pane_fp_g3

0xefd9,	// (0x000350f9) list_single_graphic_pane_fp_g4_ParamLimits

0xefd9,	// (0x000350f9) list_single_graphic_pane_fp_g4

0x581b,	// (0x0002b93b) list_single_graphic_pane_fp_g5_ParamLimits

0x581b,	// (0x0002b93b) list_single_graphic_pane_fp_g5

0x0004,

0xfb76,	// (0x00035c96) list_single_graphic_pane_fp_g_ParamLimits

0xfb76,	// (0x00035c96) list_single_graphic_pane_fp_g

0xf010,	// (0x00035130) list_single_graphic_pane_fp_t1_ParamLimits

0xf010,	// (0x00035130) list_single_graphic_pane_fp_t1

0xf004,	// (0x00035124) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf004,	// (0x00035124) list_single_graphic_heading_pane_fp_g1

0x580f,	// (0x0002b92f) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x580f,	// (0x0002b92f) list_single_graphic_heading_pane_fp_g2

0xefcd,	// (0x000350ed) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xefcd,	// (0x000350ed) list_single_graphic_heading_pane_fp_g3

0xefd9,	// (0x000350f9) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xefd9,	// (0x000350f9) list_single_graphic_heading_pane_fp_g4

0x581b,	// (0x0002b93b) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x581b,	// (0x0002b93b) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb76,	// (0x00035c96) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb76,	// (0x00035c96) list_single_graphic_heading_pane_fp_g

0xf026,	// (0x00035146) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf026,	// (0x00035146) list_single_graphic_heading_pane_fp_t1

0xf03c,	// (0x0003515c) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf03c,	// (0x0003515c) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb81,	// (0x00035ca1) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb81,	// (0x00035ca1) list_single_graphic_heading_pane_fp_t

0xf04e,	// (0x0003516e) list_single_cale_day_pane_fp_g1_ParamLimits

0xf04e,	// (0x0003516e) list_single_cale_day_pane_fp_g1

0x5827,	// (0x0002b947) list_single_cale_day_pane_fp_g2_ParamLimits

0x5827,	// (0x0002b947) list_single_cale_day_pane_fp_g2

0xf086,	// (0x000351a6) list_single_cale_day_pane_fp_g3_ParamLimits

0xf086,	// (0x000351a6) list_single_cale_day_pane_fp_g3

0xf0ae,	// (0x000351ce) list_single_cale_day_pane_fp_g4_ParamLimits

0xf0ae,	// (0x000351ce) list_single_cale_day_pane_fp_g4

0xf0d2,	// (0x000351f2) list_single_cale_day_pane_fp_g5_ParamLimits

0xf0d2,	// (0x000351f2) list_single_cale_day_pane_fp_g5

0x0004,

0xfb86,	// (0x00035ca6) list_single_cale_day_pane_fp_g_ParamLimits

0xfb86,	// (0x00035ca6) list_single_cale_day_pane_fp_g

0xf0f6,	// (0x00035216) list_single_cale_day_pane_fp_t1_ParamLimits

0xf0f6,	// (0x00035216) list_single_cale_day_pane_fp_t1

0xf11c,	// (0x0003523c) list_single_cale_day_pane_fp_t2_ParamLimits

0xf11c,	// (0x0003523c) list_single_cale_day_pane_fp_t2

0xf135,	// (0x00035255) list_single_cale_day_pane_fp_t3_ParamLimits

0xf135,	// (0x00035255) list_single_cale_day_pane_fp_t3

0x0002,

0xfb91,	// (0x00035cb1) list_single_cale_day_pane_fp_t_ParamLimits

0xfb91,	// (0x00035cb1) list_single_cale_day_pane_fp_t

0x580f,	// (0x0002b92f) list_empty_pane_fp_g1_ParamLimits

0x580f,	// (0x0002b92f) list_empty_pane_fp_g1

0xf14e,	// (0x0003526e) list_empty_pane_fp_t1

0xf15c,	// (0x0003527c) list_empty_pane_fp_t2

0x0001,

0xfb98,	// (0x00035cb8) list_empty_pane_fp_t

0x580f,	// (0x0002b92f) list_single_heading_pane_fp_g1_ParamLimits

0x580f,	// (0x0002b92f) list_single_heading_pane_fp_g1

0xefcd,	// (0x000350ed) list_single_heading_pane_fp_g2_ParamLimits

0xefcd,	// (0x000350ed) list_single_heading_pane_fp_g2

0xefd9,	// (0x000350f9) list_single_heading_pane_fp_g3_ParamLimits

0xefd9,	// (0x000350f9) list_single_heading_pane_fp_g3

0x0002,

0xfb9d,	// (0x00035cbd) list_single_heading_pane_fp_g_ParamLimits

0xfb9d,	// (0x00035cbd) list_single_heading_pane_fp_g

0xf16a,	// (0x0003528a) list_single_heading_pane_fp_t1_ParamLimits

0xf16a,	// (0x0003528a) list_single_heading_pane_fp_t1

0xf17c,	// (0x0003529c) list_single_heading_pane_fp_t2_ParamLimits

0xf17c,	// (0x0003529c) list_single_heading_pane_fp_t2

0x0001,

0xfba4,	// (0x00035cc4) list_single_heading_pane_fp_t_ParamLimits

0xfba4,	// (0x00035cc4) list_single_heading_pane_fp_t

0x9f56,	// (0x00030076) aid_size_cell_fast

0xc8e4,	// (0x00032a04) soft_indicator_pane_cp1_t1

0x9f5f,	// (0x0003007f) cell_app_pane_cp2_ParamLimits

0x9f5f,	// (0x0003007f) cell_app_pane_cp2

0x1d06,	// (0x00027e26) fep_hwr_candidate_drop_down_list_pane

0xd189,	// (0x000332a9) fep_hwr_candidate_pane_g3_ParamLimits

0xd189,	// (0x000332a9) fep_hwr_candidate_pane_g3

0xd196,	// (0x000332b6) fep_hwr_candidate_pane_g4_ParamLimits

0xd196,	// (0x000332b6) fep_hwr_candidate_pane_g4

0x0002,

0xfb18,	// (0x00035c38) fep_hwr_candidate_pane_g_ParamLimits

0xfb18,	// (0x00035c38) fep_hwr_candidate_pane_g

0x52c3,	// (0x0002b3e3) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x52c3,	// (0x0002b3e3) fep_vkb_candidate_drop_down_list_pane

0x56c6,	// (0x0002b7e6) fep_vkb_candidate_pane_g3

0x56ce,	// (0x0002b7ee) fep_vkb_candidate_pane_g4

0x0002,

0xfb45,	// (0x00035c65) fep_vkb_candidate_pane_g

0x53ce,	// (0x0002b4ee) cell_hwr_candidate_pane_g1_ParamLimits

0x56e5,	// (0x0002b805) cell_hwr_candidate_pane_g3_ParamLimits

0x56e5,	// (0x0002b805) cell_hwr_candidate_pane_g3

0x5706,	// (0x0002b826) cell_hwr_candidate_pane_g4_ParamLimits

0x5706,	// (0x0002b826) cell_hwr_candidate_pane_g4

0x0002,

0xfb5f,	// (0x00035c7f) cell_hwr_candidate_pane_g_ParamLimits

0xfb5f,	// (0x00035c7f) cell_hwr_candidate_pane_g

0x5727,	// (0x0002b847) cell_vkb_candidate_pane_g3_ParamLimits

0x5727,	// (0x0002b847) cell_vkb_candidate_pane_g3

0x5742,	// (0x0002b862) cell_vkb_candidate_pane_g4_ParamLimits

0x5742,	// (0x0002b862) cell_vkb_candidate_pane_g4

0xd2b3,	// (0x000333d3) cell_app_pane_cp2_g1_ParamLimits

0xd2b3,	// (0x000333d3) cell_app_pane_cp2_g1

0x5851,	// (0x0002b971) cell_app_pane_cp2_g2_ParamLimits

0x5851,	// (0x0002b971) cell_app_pane_cp2_g2

0x0001,

0xfba9,	// (0x00035cc9) cell_app_pane_cp2_g_ParamLimits

0xfba9,	// (0x00035cc9) cell_app_pane_cp2_g

0x585d,	// (0x0002b97d) cell_app_pane_cp2_t1_ParamLimits

0x585d,	// (0x0002b97d) cell_app_pane_cp2_t1

0xcb89,	// (0x00032ca9) grid_highlight_pane_cp1_ParamLimits

0xcb89,	// (0x00032ca9) grid_highlight_pane_cp1

0x1f42,	// (0x00028062) cell_hwr_candidate_pane_cp1_ParamLimits

0x1f42,	// (0x00028062) cell_hwr_candidate_pane_cp1

0x53ce,	// (0x0002b4ee) fep_hwr_candidate_drop_down_list_pane_g1

0x586f,	// (0x0002b98f) fep_hwr_candidate_drop_down_list_pane_g2

0x587c,	// (0x0002b99c) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbae,	// (0x00035cce) fep_hwr_candidate_drop_down_list_pane_g

0x1f61,	// (0x00028081) fep_hwr_candidate_drop_down_list_scroll_pane

0x1f6a,	// (0x0002808a) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1f6a,	// (0x0002808a) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1f77,	// (0x00028097) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1f77,	// (0x00028097) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1f84,	// (0x000280a4) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1f84,	// (0x000280a4) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5727,	// (0x0002b847) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5727,	// (0x0002b847) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5742,	// (0x0002b862) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5742,	// (0x0002b862) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1f91,	// (0x000280b1) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1f91,	// (0x000280b1) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1fac,	// (0x000280cc) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1fac,	// (0x000280cc) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1fc7,	// (0x000280e7) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1fc7,	// (0x000280e7) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb5,	// (0x00035cd5) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb5,	// (0x00035cd5) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5889,	// (0x0002b9a9) cell_vkb_candidate_pane_cp1_ParamLimits

0x5889,	// (0x0002b9a9) cell_vkb_candidate_pane_cp1

0x53ce,	// (0x0002b4ee) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x53ce,	// (0x0002b4ee) fep_vkb_candidate_drop_down_list_pane_g1

0x586f,	// (0x0002b98f) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x586f,	// (0x0002b98f) fep_vkb_candidate_drop_down_list_pane_g2

0x587c,	// (0x0002b99c) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x587c,	// (0x0002b99c) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbae,	// (0x00035cce) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbae,	// (0x00035cce) fep_vkb_candidate_drop_down_list_pane_g

0x58a9,	// (0x0002b9c9) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x58a9,	// (0x0002b9c9) fep_vkb_candidate_drop_down_list_scroll_pane

0x58b6,	// (0x0002b9d6) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x58b6,	// (0x0002b9d6) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x58c3,	// (0x0002b9e3) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x58c3,	// (0x0002b9e3) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x58cf,	// (0x0002b9ef) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x58cf,	// (0x0002b9ef) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x56e5,	// (0x0002b805) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x56e5,	// (0x0002b805) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5706,	// (0x0002b826) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5706,	// (0x0002b826) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x58db,	// (0x0002b9fb) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x58db,	// (0x0002b9fb) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x58fc,	// (0x0002ba1c) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x58fc,	// (0x0002ba1c) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x591d,	// (0x0002ba3d) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x591d,	// (0x0002ba3d) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc6,	// (0x00035ce6) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc6,	// (0x00035ce6) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x985a,	// (0x0002f97a) title_pane_g1_ParamLimits

0x986d,	// (0x0002f98d) title_pane_g2_ParamLimits

0xf54e,	// (0x0003566e) title_pane_g_ParamLimits

0xcfac,	// (0x000330cc) aid_call2_pane

0xcfb4,	// (0x000330d4) aid_call_pane

0xcfbc,	// (0x000330dc) popup_clock_analogue_window_g1

0xcfbc,	// (0x000330dc) popup_clock_analogue_window_g2

0x016b,	// (0x0002628b) popup_clock_analogue_window_g3

0x0174,	// (0x00026294) popup_clock_analogue_window_g4

0xc771,	// (0x00032891) popup_clock_analogue_window_g5

0x0004,

0xf6e9,	// (0x00035809) popup_clock_analogue_window_g

0x017c,	// (0x0002629c) popup_clock_analogue_window_t1

0x01b4,	// (0x000262d4) clock_digital_number_pane_ParamLimits

0x01b4,	// (0x000262d4) clock_digital_number_pane

0x01c0,	// (0x000262e0) clock_digital_number_pane_cp02_ParamLimits

0x01c0,	// (0x000262e0) clock_digital_number_pane_cp02

0x01cc,	// (0x000262ec) clock_digital_number_pane_cp03_ParamLimits

0x01cc,	// (0x000262ec) clock_digital_number_pane_cp03

0x01d8,	// (0x000262f8) clock_digital_number_pane_cp04_ParamLimits

0x01d8,	// (0x000262f8) clock_digital_number_pane_cp04

0x01e4,	// (0x00026304) clock_digital_separator_pane_ParamLimits

0x01e4,	// (0x00026304) clock_digital_separator_pane

0x01f0,	// (0x00026310) popup_clock_digital_window_t1_ParamLimits

0x01f0,	// (0x00026310) popup_clock_digital_window_t1

0xc771,	// (0x00032891) clock_digital_number_pane_g1

0xc771,	// (0x00032891) clock_digital_number_pane_g2

0x0001,

0xf6f4,	// (0x00035814) clock_digital_number_pane_g

0xc771,	// (0x00032891) clock_digital_separator_pane_g1

0xc771,	// (0x00032891) clock_digital_separator_pane_g2

0x0001,

0xf6f4,	// (0x00035814) clock_digital_separator_pane_g

0xad91,	// (0x00030eb1) aid_fill_nsta_ParamLimits

0xaec7,	// (0x00030fe7) indicator_nsta_pane_ParamLimits

0x15b2,	// (0x000276d2) popup_clock_analogue_window

0x15b2,	// (0x000276d2) popup_clock_digital_window

0xd165,	// (0x00033285) grid_indicator_nsta_pane_ParamLimits

0x4b68,	// (0x0002ac88) clock_nsta_pane_t2

0x0001,

0xfa98,	// (0x00035bb8) clock_nsta_pane_t

0x0096,	// (0x000261b6) aid_size_max_handle

0xa03d,	// (0x0003015d) aid_size_min_handle

0x07d7,	// (0x000268f7) editor_scroll_pane

0x5938,	// (0x0002ba58) ex_editor_pane

0xcca8,	// (0x00032dc8) scroll_pane_cp13

0xcb31,	// (0x00032c51) scroll_pane_cp14

0xcfeb,	// (0x0003310b) scroll_pane_cp36

0xa107,	// (0x00030227) list_single_graphic_hl_pane_cp2_ParamLimits

0xa107,	// (0x00030227) list_single_graphic_hl_pane_cp2

0xbb1b,	// (0x00031c3b) list_single_graphic_hl_pane_ParamLimits

0xbb1b,	// (0x00031c3b) list_single_graphic_hl_pane

0x9472,	// (0x0002f592) aid_size_min_hl_cp1

0x5940,	// (0x0002ba60) list_highlight_pane_cp34_ParamLimits

0x5940,	// (0x0002ba60) list_highlight_pane_cp34

0x5951,	// (0x0002ba71) list_single_graphic_hl_pane_g1_ParamLimits

0x5951,	// (0x0002ba71) list_single_graphic_hl_pane_g1

0x947b,	// (0x0002f59b) list_single_graphic_hl_pane_g2_ParamLimits

0x947b,	// (0x0002f59b) list_single_graphic_hl_pane_g2

0x947b,	// (0x0002f59b) list_single_graphic_hl_pane_g3_ParamLimits

0x947b,	// (0x0002f59b) list_single_graphic_hl_pane_g3

0xf192,	// (0x000352b2) list_single_graphic_hl_pane_g4_ParamLimits

0xf192,	// (0x000352b2) list_single_graphic_hl_pane_g4

0x9487,	// (0x0002f5a7) list_single_graphic_hl_pane_g5_ParamLimits

0x9487,	// (0x0002f5a7) list_single_graphic_hl_pane_g5

0x0004,

0xfbd7,	// (0x00035cf7) list_single_graphic_hl_pane_g_ParamLimits

0xfbd7,	// (0x00035cf7) list_single_graphic_hl_pane_g

0x949b,	// (0x0002f5bb) list_single_graphic_hl_pane_t1_ParamLimits

0x949b,	// (0x0002f5bb) list_single_graphic_hl_pane_t1

0x595e,	// (0x0002ba7e) aid_size_min_hl_cp2

0x5967,	// (0x0002ba87) list_highlight_pane_cp34_cp2_ParamLimits

0x5967,	// (0x0002ba87) list_highlight_pane_cp34_cp2

0x5951,	// (0x0002ba71) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5951,	// (0x0002ba71) list_single_graphic_hl_pane_g1_cp2

0x5974,	// (0x0002ba94) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5974,	// (0x0002ba94) list_single_graphic_hl_pane_g2_cp2

0xd2d1,	// (0x000333f1) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd2d1,	// (0x000333f1) list_single_graphic_hl_pane_g3_cp2

0x0710,	// (0x00026830) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x0710,	// (0x00026830) list_single_graphic_hl_pane_g4_cp2

0x598e,	// (0x0002baae) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x598e,	// (0x0002baae) list_single_graphic_hl_pane_g5_cp2

0xa4aa,	// (0x000305ca) control_pane_g4_ParamLimits

0xa4aa,	// (0x000305ca) control_pane_g4

0x0d0e,	// (0x00026e2e) bg_popup_sub_pane_cp10_ParamLimits

0x5168,	// (0x0002b288) list_choice_list_pane_ParamLimits

0x5177,	// (0x0002b297) scroll_pane_cp23

0xc901,	// (0x00032a21) bg_popup_preview_window_pane_cp02_ParamLimits

0x57b3,	// (0x0002b8d3) list_preview_fixed_pane_ParamLimits

0x57c9,	// (0x0002b8e9) list_preview_fixed_pane_cp_ParamLimits

0x57c9,	// (0x0002b8e9) list_preview_fixed_pane_cp

0x57d5,	// (0x0002b8f5) popup_preview_fixed_window_g1_ParamLimits

0x57d5,	// (0x0002b8f5) popup_preview_fixed_window_g1

0x57e1,	// (0x0002b901) popup_preview_fixed_window_g2_ParamLimits

0x57e1,	// (0x0002b901) popup_preview_fixed_window_g2

0x0002,

0xfb66,	// (0x00035c86) popup_preview_fixed_window_g_ParamLimits

0xfb66,	// (0x00035c86) popup_preview_fixed_window_g

0xf4c2,	// (0x000355e2) aid_navi_side_left_pane_ParamLimits

0xf4d7,	// (0x000355f7) aid_navi_side_right_pane_ParamLimits

0xf4ef,	// (0x0003560f) navi_icon_pane_stacon_ParamLimits

0xf503,	// (0x00035623) navi_navi_pane_stacon_ParamLimits

0xf4ef,	// (0x0003560f) navi_text_pane_stacon_ParamLimits

0xc767,	// (0x00032887) main_text_info_pane

0x59b8,	// (0x0002bad8) listscroll_text_info_pane

0x59c0,	// (0x0002bae0) list_text_info_pane_ParamLimits

0x59c0,	// (0x0002bae0) list_text_info_pane

0x59cf,	// (0x0002baef) scroll_pane_cp24_ParamLimits

0x59cf,	// (0x0002baef) scroll_pane_cp24

0xd2df,	// (0x000333ff) list_text_info_pane_t1_ParamLimits

0xd2df,	// (0x000333ff) list_text_info_pane_t1

0xa632,	// (0x00030752) popup_fast_swap2_window_ParamLimits

0xa632,	// (0x00030752) popup_fast_swap2_window

0x5a21,	// (0x0002bb41) aid_size_cell_fast2

0xc767,	// (0x00032887) bg_popup_window_pane_cp17

0x2feb,	// (0x0002910b) heading_pane_cp2

0xca35,	// (0x00032b55) listscroll_fast2_pane

0x5a2b,	// (0x0002bb4b) grid_fast2_pane

0x5a35,	// (0x0002bb55) listscroll_fast2_pane_g1

0x5a3d,	// (0x0002bb5d) listscroll_fast2_pane_g2

0x0001,

0xfbe2,	// (0x00035d02) listscroll_fast2_pane_g

0xcca8,	// (0x00032dc8) scroll_pane_cp26

0x5a47,	// (0x0002bb67) cell_fast2_pane_ParamLimits

0x5a47,	// (0x0002bb67) cell_fast2_pane

0x5a5c,	// (0x0002bb7c) cell_fast2_pane_g1

0x5a65,	// (0x0002bb85) cell_fast2_pane_g2

0x5a6e,	// (0x0002bb8e) cell_fast2_pane_g3

0x0002,

0xfbe7,	// (0x00035d07) cell_fast2_pane_g

0xca68,	// (0x00032b88) grid_highlight_pane_cp9

0xca7d,	// (0x00032b9d) main_eswt_pane_ParamLimits

0xca7d,	// (0x00032b9d) main_eswt_pane

0x59e4,	// (0x0002bb04) list_single_text_info_pane

0x5a76,	// (0x0002bb96) eswt_ctrl_button_pane

0x5a76,	// (0x0002bb96) eswt_ctrl_canvas_pane

0xd2fb,	// (0x0003341b) eswt_ctrl_combo_pane

0x5a76,	// (0x0002bb96) eswt_ctrl_default_pane

0x5a76,	// (0x0002bb96) eswt_ctrl_label_pane

0x5a86,	// (0x0002bba6) eswt_ctrl_wait_pane

0xd303,	// (0x00033423) eswt_shell_pane

0xc767,	// (0x00032887) listscroll_eswt_app_pane

0x5aae,	// (0x0002bbce) popup_eswt_tasktip_window_ParamLimits

0x5aae,	// (0x0002bbce) popup_eswt_tasktip_window

0x2bf8,	// (0x00028d18) bg_popup_window_pane_cp18

0x5abf,	// (0x0002bbdf) eswt_control_pane_g1_ParamLimits

0x5abf,	// (0x0002bbdf) eswt_control_pane_g1

0x5acc,	// (0x0002bbec) eswt_control_pane_g2_ParamLimits

0x5acc,	// (0x0002bbec) eswt_control_pane_g2

0x5ad9,	// (0x0002bbf9) eswt_control_pane_g3_ParamLimits

0x5ad9,	// (0x0002bbf9) eswt_control_pane_g3

0x5ae6,	// (0x0002bc06) eswt_control_pane_g4_ParamLimits

0x5ae6,	// (0x0002bc06) eswt_control_pane_g4

0x0003,

0xfbee,	// (0x00035d0e) eswt_control_pane_g_ParamLimits

0xfbee,	// (0x00035d0e) eswt_control_pane_g

0xcb89,	// (0x00032ca9) bg_button_pane_ParamLimits

0xcb89,	// (0x00032ca9) bg_button_pane

0xca7d,	// (0x00032b9d) common_borders_pane_copy2_ParamLimits

0xca7d,	// (0x00032b9d) common_borders_pane_copy2

0x5af3,	// (0x0002bc13) control_button_pane_g1_ParamLimits

0x5af3,	// (0x0002bc13) control_button_pane_g1

0x5aff,	// (0x0002bc1f) control_button_pane_g2_ParamLimits

0x5aff,	// (0x0002bc1f) control_button_pane_g2

0x5b0b,	// (0x0002bc2b) control_button_pane_g3_ParamLimits

0x5b0b,	// (0x0002bc2b) control_button_pane_g3

0x0002,

0xfbf7,	// (0x00035d17) control_button_pane_g_ParamLimits

0xfbf7,	// (0x00035d17) control_button_pane_g

0x5b1f,	// (0x0002bc3f) control_button_pane_t1

0x5b2d,	// (0x0002bc4d) control_button_pane_t2

0x0001,

0xfbfe,	// (0x00035d1e) control_button_pane_t

0x1808,	// (0x00027928) bg_button_pane_g1

0x1810,	// (0x00027930) bg_button_pane_g2

0x1818,	// (0x00027938) bg_button_pane_g3

0x1820,	// (0x00027940) bg_button_pane_g4

0x1828,	// (0x00027948) bg_button_pane_g5

0x1830,	// (0x00027950) bg_button_pane_g6

0x1838,	// (0x00027958) bg_button_pane_g7

0x1840,	// (0x00027960) bg_button_pane_g8

0x1848,	// (0x00027968) bg_button_pane_g9

0x0008,

0xf84b,	// (0x0003596b) bg_button_pane_g

0x5123,	// (0x0002b243) common_borders_pane_ParamLimits

0x5123,	// (0x0002b243) common_borders_pane

0x5abf,	// (0x0002bbdf) eswt_control_pane_g1_copy1_ParamLimits

0x5abf,	// (0x0002bbdf) eswt_control_pane_g1_copy1

0x5acc,	// (0x0002bbec) eswt_control_pane_g2_copy1_ParamLimits

0x5acc,	// (0x0002bbec) eswt_control_pane_g2_copy1

0x5ad9,	// (0x0002bbf9) eswt_control_pane_g3_copy1_ParamLimits

0x5ad9,	// (0x0002bbf9) eswt_control_pane_g3_copy1

0x5ae6,	// (0x0002bc06) eswt_control_pane_g4_copy1_ParamLimits

0x5ae6,	// (0x0002bc06) eswt_control_pane_g4_copy1

0x515e,	// (0x0002b27e) bg_eswt_ctrl_canvas_pane_g1

0x5123,	// (0x0002b243) common_borders_pane_cp2_ParamLimits

0x5123,	// (0x0002b243) common_borders_pane_cp2

0x5123,	// (0x0002b243) common_borders_pane_cp3_ParamLimits

0x5123,	// (0x0002b243) common_borders_pane_cp3

0x5b3b,	// (0x0002bc5b) separator_horizontal_pane

0x5b43,	// (0x0002bc63) separator_vertical_pane

0x5abf,	// (0x0002bbdf) eswt_control_pane_g1_copy2_ParamLimits

0x5abf,	// (0x0002bbdf) eswt_control_pane_g1_copy2

0x5acc,	// (0x0002bbec) eswt_control_pane_g2_copy2_ParamLimits

0x5acc,	// (0x0002bbec) eswt_control_pane_g2_copy2

0x5ad9,	// (0x0002bbf9) eswt_control_pane_g3_copy2_ParamLimits

0x5ad9,	// (0x0002bbf9) eswt_control_pane_g3_copy2

0x5ae6,	// (0x0002bc06) eswt_control_pane_g4_copy2_ParamLimits

0x5ae6,	// (0x0002bc06) eswt_control_pane_g4_copy2

0xc767,	// (0x00032887) common_borders_pane_cp4

0x5b4c,	// (0x0002bc6c) separator_horizontal_pane_g1

0x5b55,	// (0x0002bc75) separator_horizontal_pane_g2

0x5b5e,	// (0x0002bc7e) separator_horizontal_pane_g3

0x0002,

0xfc03,	// (0x00035d23) separator_horizontal_pane_g

0x5abf,	// (0x0002bbdf) eswt_control_pane_g1_copy3_ParamLimits

0x5abf,	// (0x0002bbdf) eswt_control_pane_g1_copy3

0x5acc,	// (0x0002bbec) eswt_control_pane_g2_copy3_ParamLimits

0x5acc,	// (0x0002bbec) eswt_control_pane_g2_copy3

0x5ad9,	// (0x0002bbf9) eswt_control_pane_g3_copy3_ParamLimits

0x5ad9,	// (0x0002bbf9) eswt_control_pane_g3_copy3

0x5ae6,	// (0x0002bc06) eswt_control_pane_g4_copy3_ParamLimits

0x5ae6,	// (0x0002bc06) eswt_control_pane_g4_copy3

0xc767,	// (0x00032887) common_borders_pane_cp5

0x5b67,	// (0x0002bc87) separator_vertical_pane_g1

0x5b70,	// (0x0002bc90) separator_vertical_pane_g2

0x5b79,	// (0x0002bc99) separator_vertical_pane_g3

0x0002,

0xfc0a,	// (0x00035d2a) separator_vertical_pane_g

0x5abf,	// (0x0002bbdf) eswt_control_pane_g1_copy4_ParamLimits

0x5abf,	// (0x0002bbdf) eswt_control_pane_g1_copy4

0x5acc,	// (0x0002bbec) eswt_control_pane_g2_copy4_ParamLimits

0x5acc,	// (0x0002bbec) eswt_control_pane_g2_copy4

0x5ad9,	// (0x0002bbf9) eswt_control_pane_g3_copy4_ParamLimits

0x5ad9,	// (0x0002bbf9) eswt_control_pane_g3_copy4

0x5ae6,	// (0x0002bc06) eswt_control_pane_g4_copy4_ParamLimits

0x5ae6,	// (0x0002bc06) eswt_control_pane_g4_copy4

0xd323,	// (0x00033443) eswt_ctrl_combo_button_pane

0xd32b,	// (0x0003344b) eswt_ctrl_input_pane

0xd333,	// (0x00033453) popup_choice_list_window_cp70

0xd33b,	// (0x0003345b) eswt_ctrl_input_pane_t1

0xc767,	// (0x00032887) input_focus_pane_cp70

0x5123,	// (0x0002b243) bg_button_pane_cp70_ParamLimits

0x5123,	// (0x0002b243) bg_button_pane_cp70

0xd349,	// (0x00033469) eswt_ctrl_combo_button_pane_g1

0x5bb0,	// (0x0002bcd0) wait_bar_pane_cp70

0x2bf8,	// (0x00028d18) bg_popup_window_pane_cp70_ParamLimits

0x2bf8,	// (0x00028d18) bg_popup_window_pane_cp70

0x5bb8,	// (0x0002bcd8) popup_eswt_tasktip_window_t1

0x5bce,	// (0x0002bcee) wait_bar_pane_cp71_ParamLimits

0x5bce,	// (0x0002bcee) wait_bar_pane_cp71

0x5bda,	// (0x0002bcfa) grid_eswt_app_pane

0xce98,	// (0x00032fb8) scroll_pane_cp70

0xd351,	// (0x00033471) cell_eswt_app_pane_ParamLimits

0xd351,	// (0x00033471) cell_eswt_app_pane

0xd37b,	// (0x0003349b) cell_eswt_app_pane_g1_ParamLimits

0xd37b,	// (0x0003349b) cell_eswt_app_pane_g1

0xd3aa,	// (0x000334ca) cell_eswt_app_pane_g2_ParamLimits

0xd3aa,	// (0x000334ca) cell_eswt_app_pane_g2

0x0001,

0xfc11,	// (0x00035d31) cell_eswt_app_pane_g_ParamLimits

0xfc11,	// (0x00035d31) cell_eswt_app_pane_g

0xd3ce,	// (0x000334ee) cell_eswt_app_pane_t1_ParamLimits

0xd3ce,	// (0x000334ee) cell_eswt_app_pane_t1

0x5c98,	// (0x0002bdb8) grid_highlight_pane_cp70_ParamLimits

0x5c98,	// (0x0002bdb8) grid_highlight_pane_cp70

0x06ac,	// (0x000267cc) set_content_pane_g1

0xa43c,	// (0x0003055c) status_small_volume_pane

0xc08c,	// (0x000321ac) status_small_volume_pane_g1

0xc094,	// (0x000321b4) volume_small2_pane

0xc09d,	// (0x000321bd) volume_small2_pane_g1

0xc0a6,	// (0x000321c6) volume_small2_pane_g2

0xc0af,	// (0x000321cf) volume_small2_pane_g3

0xc0b8,	// (0x000321d8) volume_small2_pane_g4

0xc0c1,	// (0x000321e1) volume_small2_pane_g5

0xc0ca,	// (0x000321ea) volume_small2_pane_g6

0xc0d3,	// (0x000321f3) volume_small2_pane_g7

0xc0dc,	// (0x000321fc) volume_small2_pane_g8

0xc0e5,	// (0x00032205) volume_small2_pane_g9

0xc0ee,	// (0x0003220e) volume_small2_pane_g10

0x0009,

0xfc16,	// (0x00035d36) volume_small2_pane_g

0x5516,	// (0x0002b636) fep_vkb_top_text_pane_g1_ParamLimits

0xd25b,	// (0x0003337b) fep_vkb_top_text_pane_t1_ParamLimits

0x57ed,	// (0x0002b90d) popup_preview_fixed_window_g3_ParamLimits

0x57ed,	// (0x0002b90d) popup_preview_fixed_window_g3

0xaccf,	// (0x00030def) popup_toolbar_trans_pane

0xb9b4,	// (0x00031ad4) aid_height_set_list_ParamLimits

0x3f3f,	// (0x0002a05f) aid_size_parent_ParamLimits

0x0d0e,	// (0x00026e2e) list_highlight_pane_cp2_ParamLimits

0x06ac,	// (0x000267cc) set_content_pane_g1_ParamLimits

0xbb2d,	// (0x00031c4d) list_single_image_pane_ParamLimits

0xbb2d,	// (0x00031c4d) list_single_image_pane

0xd400,	// (0x00033520) aid_size_cell_image_ParamLimits

0xd400,	// (0x00033520) aid_size_cell_image

0xd40d,	// (0x0003352d) grid_single_image_pane_ParamLimits

0xd40d,	// (0x0003352d) grid_single_image_pane

0x5cbf,	// (0x0002bddf) list_single_image_pane_g1_ParamLimits

0x5cbf,	// (0x0002bddf) list_single_image_pane_g1

0x5ccb,	// (0x0002bdeb) list_single_image_pane_g2_ParamLimits

0x5ccb,	// (0x0002bdeb) list_single_image_pane_g2

0x0001,

0xfc2b,	// (0x00035d4b) list_single_image_pane_g_ParamLimits

0xfc2b,	// (0x00035d4b) list_single_image_pane_g

0x5cdf,	// (0x0002bdff) list_single_image_pane_t1_ParamLimits

0x5cdf,	// (0x0002bdff) list_single_image_pane_t1

0xd419,	// (0x00033539) cell_image_list_pane_ParamLimits

0xd419,	// (0x00033539) cell_image_list_pane

0xd42d,	// (0x0003354d) cell_image_list_pane_g1

0xd436,	// (0x00033556) cell_image_list_pane_g2

0x0001,

0xfc30,	// (0x00035d50) cell_image_list_pane_g

0xd43f,	// (0x0003355f) aid_size_cell_tb_trans_pane

0xcb89,	// (0x00032ca9) bg_tb_trans_pane

0xd451,	// (0x00033571) grid_tb_trans_pane

0x1808,	// (0x00027928) bg_tb_trans_pane_g1

0x1810,	// (0x00027930) bg_tb_trans_pane_g2

0x1818,	// (0x00027938) bg_tb_trans_pane_g3

0x1820,	// (0x00027940) bg_tb_trans_pane_g4

0x1828,	// (0x00027948) bg_tb_trans_pane_g5

0x1840,	// (0x00027960) bg_tb_trans_pane_g6

0x1848,	// (0x00027968) bg_tb_trans_pane_g7

0x1830,	// (0x00027950) bg_tb_trans_pane_g8

0x1838,	// (0x00027958) bg_tb_trans_pane_g9

0x0008,

0xfc35,	// (0x00035d55) bg_tb_trans_pane_g

0xd465,	// (0x00033585) cell_toolbar_trans_pane_ParamLimits

0xd465,	// (0x00033585) cell_toolbar_trans_pane

0x515e,	// (0x0002b27e) cell_toolbar_trans_pane_g1

0xbe44,	// (0x00031f64) list_form2_midp_pane_t1

0xbe52,	// (0x00031f72) list_form2_midp_pane_t2

0x0001,

0xfade,	// (0x00035bfe) list_form2_midp_pane_t

0x4d45,	// (0x0002ae65) scroll_pane_cp51_ParamLimits

0x4f01,	// (0x0002b021) form2_midp_wait_pane_g1

0x4f0a,	// (0x0002b02a) form2_midp_wait_pane_g2

0x4f13,	// (0x0002b033) form2_midp_wait_pane_g3

0x0002,

0xfaf3,	// (0x00035c13) form2_midp_wait_pane_g

0xc7d7,	// (0x000328f7) list_highlight_pane_cp21_ParamLimits

0x4f5b,	// (0x0002b07b) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4f6a,	// (0x0002b08a) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xec48,	// (0x00034d68) list_single_2graphic_im_pane_ParamLimits

0xec48,	// (0x00034d68) list_single_2graphic_im_pane

0xd48b,	// (0x000335ab) list_single_2graphic_im_pane_g1_ParamLimits

0xd48b,	// (0x000335ab) list_single_2graphic_im_pane_g1

0xd49c,	// (0x000335bc) list_single_2graphic_im_pane_g2_ParamLimits

0xd49c,	// (0x000335bc) list_single_2graphic_im_pane_g2

0xd4a8,	// (0x000335c8) list_single_2graphic_im_pane_g3_ParamLimits

0xd4a8,	// (0x000335c8) list_single_2graphic_im_pane_g3

0x0003,

0xfc48,	// (0x00035d68) list_single_2graphic_im_pane_g_ParamLimits

0xfc48,	// (0x00035d68) list_single_2graphic_im_pane_g

0xd4bc,	// (0x000335dc) list_single_2graphic_im_pane_t1_ParamLimits

0xd4bc,	// (0x000335dc) list_single_2graphic_im_pane_t1

0x57f9,	// (0x0002b919) list_single_graphic_2heading_pane_fp_ParamLimits

0x57f9,	// (0x0002b919) list_single_graphic_2heading_pane_fp

0xf004,	// (0x00035124) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf004,	// (0x00035124) list_single_graphic_2heading_pane_fp_g1

0x580f,	// (0x0002b92f) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x580f,	// (0x0002b92f) list_single_graphic_2heading_pane_fp_g2

0xefcd,	// (0x000350ed) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xefcd,	// (0x000350ed) list_single_graphic_2heading_pane_fp_g3

0xefd9,	// (0x000350f9) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xefd9,	// (0x000350f9) list_single_graphic_2heading_pane_fp_g4

0x581b,	// (0x0002b93b) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x581b,	// (0x0002b93b) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb76,	// (0x00035c96) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb76,	// (0x00035c96) list_single_graphic_2heading_pane_fp_g

0xf19e,	// (0x000352be) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf19e,	// (0x000352be) list_single_graphic_2heading_pane_fp_t1

0xf03c,	// (0x0003515c) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf03c,	// (0x0003515c) list_single_graphic_2heading_pane_fp_t2

0xf1b4,	// (0x000352d4) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf1b4,	// (0x000352d4) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc51,	// (0x00035d71) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc51,	// (0x00035d71) list_single_graphic_2heading_pane_fp_t

0x51ea,	// (0x0002b30a) fep_hwr_write_pane_g5_ParamLimits

0x51ea,	// (0x0002b30a) fep_hwr_write_pane_g5

0x51f6,	// (0x0002b316) fep_hwr_write_pane_g6_ParamLimits

0x51f6,	// (0x0002b316) fep_hwr_write_pane_g6

0xd303,	// (0x00033423) eswt_shell_pane_ParamLimits

0x2bf8,	// (0x00028d18) bg_popup_window_pane_cp18_ParamLimits

0x3e87,	// (0x00029fa7) heading_pane_cp70

0x5bb8,	// (0x0002bcd8) popup_eswt_tasktip_window_t1_ParamLimits

0xadec,	// (0x00030f0c) aid_touch_tab_arrow_left

0xae02,	// (0x00030f22) aid_touch_tab_arrow_right

0x9885,	// (0x0002f9a5) title_pane_g3_ParamLimits

0x9885,	// (0x0002f9a5) title_pane_g3

0xcb51,	// (0x00032c71) set_value_pane_g1

0xaccf,	// (0x00030def) popup_toolbar_trans_pane_ParamLimits

0xd43f,	// (0x0003355f) aid_size_cell_tb_trans_pane_ParamLimits

0xcb89,	// (0x00032ca9) bg_tb_trans_pane_ParamLimits

0xd451,	// (0x00033571) grid_tb_trans_pane_ParamLimits

0xc901,	// (0x00032a21) cont_note_pane_ParamLimits

0xc901,	// (0x00032a21) cont_note_pane

0xca7d,	// (0x00032b9d) cont_snote2_single_text_pane_ParamLimits

0xca7d,	// (0x00032b9d) cont_snote2_single_text_pane

0xca7d,	// (0x00032b9d) cont_snote2_single_graphic_pane_ParamLimits

0xca7d,	// (0x00032b9d) cont_snote2_single_graphic_pane

0x320a,	// (0x0002932a) cont_note_wait_pane_ParamLimits

0x320a,	// (0x0002932a) cont_note_wait_pane

0x320a,	// (0x0002932a) cont_note_image_pane_ParamLimits

0x320a,	// (0x0002932a) cont_note_image_pane

0x5dde,	// (0x0002befe) popup_note2_window_g1_ParamLimits

0x5dde,	// (0x0002befe) popup_note2_window_g1

0xd4fa,	// (0x0003361a) popup_note2_window_t1_ParamLimits

0xd4fa,	// (0x0003361a) popup_note2_window_t1

0xd53f,	// (0x0003365f) popup_note2_window_t2_ParamLimits

0xd53f,	// (0x0003365f) popup_note2_window_t2

0xd584,	// (0x000336a4) popup_note2_window_t3_ParamLimits

0xd584,	// (0x000336a4) popup_note2_window_t3

0x5ede,	// (0x0002bffe) popup_note2_window_t4_ParamLimits

0x5ede,	// (0x0002bffe) popup_note2_window_t4

0xc985,	// (0x00032aa5) popup_note2_window_t5_ParamLimits

0xc985,	// (0x00032aa5) popup_note2_window_t5

0x0004,

0xfc5d,	// (0x00035d7d) popup_note2_window_t_ParamLimits

0xfc5d,	// (0x00035d7d) popup_note2_window_t

0x5f0d,	// (0x0002c02d) popup_note2_image_window_g1_ParamLimits

0x5f0d,	// (0x0002c02d) popup_note2_image_window_g1

0xd5c9,	// (0x000336e9) popup_note2_image_window_g2_ParamLimits

0xd5c9,	// (0x000336e9) popup_note2_image_window_g2

0x0001,

0xfc68,	// (0x00035d88) popup_note2_image_window_g_ParamLimits

0xfc68,	// (0x00035d88) popup_note2_image_window_g

0x5f2b,	// (0x0002c04b) popup_note2_image_window_t1_ParamLimits

0x5f2b,	// (0x0002c04b) popup_note2_image_window_t1

0x5f43,	// (0x0002c063) popup_note2_image_window_t2_ParamLimits

0x5f43,	// (0x0002c063) popup_note2_image_window_t2

0x5f5b,	// (0x0002c07b) popup_note2_image_window_t3_ParamLimits

0x5f5b,	// (0x0002c07b) popup_note2_image_window_t3

0x0002,

0xfc6d,	// (0x00035d8d) popup_note2_image_window_t_ParamLimits

0xfc6d,	// (0x00035d8d) popup_note2_image_window_t

0x3218,	// (0x00029338) popup_note2_wait_window_g1_ParamLimits

0x3218,	// (0x00029338) popup_note2_wait_window_g1

0x3224,	// (0x00029344) popup_note2_wait_window_g2_ParamLimits

0x3224,	// (0x00029344) popup_note2_wait_window_g2

0x3230,	// (0x00029350) popup_note2_wait_window_g3_ParamLimits

0x3230,	// (0x00029350) popup_note2_wait_window_g3

0x0002,

0xf82d,	// (0x0003594d) popup_note2_wait_window_g_ParamLimits

0xf82d,	// (0x0003594d) popup_note2_wait_window_g

0x5f77,	// (0x0002c097) popup_note2_wait_window_t1_ParamLimits

0x5f77,	// (0x0002c097) popup_note2_wait_window_t1

0x5f95,	// (0x0002c0b5) popup_note2_wait_window_t2_ParamLimits

0x5f95,	// (0x0002c0b5) popup_note2_wait_window_t2

0x5fb3,	// (0x0002c0d3) popup_note2_wait_window_t3_ParamLimits

0x5fb3,	// (0x0002c0d3) popup_note2_wait_window_t3

0x5fc5,	// (0x0002c0e5) popup_note2_wait_window_t4_ParamLimits

0x5fc5,	// (0x0002c0e5) popup_note2_wait_window_t4

0x0003,

0xfc74,	// (0x00035d94) popup_note2_wait_window_t_ParamLimits

0xfc74,	// (0x00035d94) popup_note2_wait_window_t

0x5fd7,	// (0x0002c0f7) wait_bar2_pane_ParamLimits

0x5fd7,	// (0x0002c0f7) wait_bar2_pane

0x5fef,	// (0x0002c10f) popup_snote2_single_text_window_g1_ParamLimits

0x5fef,	// (0x0002c10f) popup_snote2_single_text_window_g1

0x6017,	// (0x0002c137) popup_snote2_single_text_window_t1_ParamLimits

0x6017,	// (0x0002c137) popup_snote2_single_text_window_t1

0x6063,	// (0x0002c183) popup_snote2_single_text_window_t2_ParamLimits

0x6063,	// (0x0002c183) popup_snote2_single_text_window_t2

0x60af,	// (0x0002c1cf) popup_snote2_single_text_window_t3_ParamLimits

0x60af,	// (0x0002c1cf) popup_snote2_single_text_window_t3

0x60f0,	// (0x0002c210) popup_snote2_single_text_window_t4_ParamLimits

0x60f0,	// (0x0002c210) popup_snote2_single_text_window_t4

0x6126,	// (0x0002c246) popup_snote2_single_text_window_t5_ParamLimits

0x6126,	// (0x0002c246) popup_snote2_single_text_window_t5

0x0004,

0xfc7d,	// (0x00035d9d) popup_snote2_single_text_window_t_ParamLimits

0xfc7d,	// (0x00035d9d) popup_snote2_single_text_window_t

0xd5db,	// (0x000336fb) popup_snote2_single_graphic_window_g1_ParamLimits

0xd5db,	// (0x000336fb) popup_snote2_single_graphic_window_g1

0x6179,	// (0x0002c299) popup_snote2_single_graphic_window_g2_ParamLimits

0x6179,	// (0x0002c299) popup_snote2_single_graphic_window_g2

0x0001,

0xfc88,	// (0x00035da8) popup_snote2_single_graphic_window_g_ParamLimits

0xfc88,	// (0x00035da8) popup_snote2_single_graphic_window_g

0x61a1,	// (0x0002c2c1) popup_snote2_single_graphic_window_t1_ParamLimits

0x61a1,	// (0x0002c2c1) popup_snote2_single_graphic_window_t1

0x61ed,	// (0x0002c30d) popup_snote2_single_graphic_window_t2_ParamLimits

0x61ed,	// (0x0002c30d) popup_snote2_single_graphic_window_t2

0x60af,	// (0x0002c1cf) popup_snote2_single_graphic_window_t3_ParamLimits

0x60af,	// (0x0002c1cf) popup_snote2_single_graphic_window_t3

0x60f0,	// (0x0002c210) popup_snote2_single_graphic_window_t4_ParamLimits

0x60f0,	// (0x0002c210) popup_snote2_single_graphic_window_t4

0x6126,	// (0x0002c246) popup_snote2_single_graphic_window_t5_ParamLimits

0x6126,	// (0x0002c246) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8d,	// (0x00035dad) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8d,	// (0x00035dad) popup_snote2_single_graphic_window_t

0x4c02,	// (0x0002ad22) clock_nsta_pane_cp2_t1

0x4c02,	// (0x0002ad22) clock_nsta_pane_cp2_t2

0x0001,

0xfab4,	// (0x00035bd4) clock_nsta_pane_cp2_t

0x91fa,	// (0x0002f31a) form_field_data_wide_pane_g1_ParamLimits

0xcb97,	// (0x00032cb7) form_field_data_wide_pane_g2_ParamLimits

0xcb97,	// (0x00032cb7) form_field_data_wide_pane_g2

0xcba3,	// (0x00032cc3) form_field_data_wide_pane_g3_ParamLimits

0xcba3,	// (0x00032cc3) form_field_data_wide_pane_g3

0x0002,

0xf66c,	// (0x0003578c) form_field_data_wide_pane_g_ParamLimits

0xf66c,	// (0x0003578c) form_field_data_wide_pane_g

0xbd75,	// (0x00031e95) grid_touch_3_pane_ParamLimits

0xbd75,	// (0x00031e95) grid_touch_3_pane

0xd603,	// (0x00033723) cell_touch_3_pane_ParamLimits

0xd603,	// (0x00033723) cell_touch_3_pane

0x515e,	// (0x0002b27e) cell_touch_3_pane_g1

0x515e,	// (0x0002b27e) cell_touch_3_pane_g2

0x0001,

0xfb39,	// (0x00035c59) cell_touch_3_pane_g

0xc9b7,	// (0x00032ad7) cont_query_data_pane

0xc9bf,	// (0x00032adf) cont_query_data_pane_cp1

0x6267,	// (0x0002c387) button_value_adjust_pane_cp7

0x626f,	// (0x0002c38f) query_popup_pane_cp3

0xd01d,	// (0x0003313d) bg_popup_sub_pane_cp22_ParamLimits

0xa194,	// (0x000302b4) navi_navi_volume_pane_cp2

0xa1a3,	// (0x000302c3) popup_side_volume_key_window_g2

0xa1b2,	// (0x000302d2) popup_side_volume_key_window_g3

0x0002,

0xf702,	// (0x00035822) popup_side_volume_key_window_g

0xa1c1,	// (0x000302e1) popup_side_volume_key_window_t2

0x0001,

0xf709,	// (0x00035829) popup_side_volume_key_window_t

0xa286,	// (0x000303a6) popup_side_volume_key_window_ParamLimits

0x8ed5,	// (0x0002eff5) list_double_graphic_pane_g4_ParamLimits

0x8ed5,	// (0x0002eff5) list_double_graphic_pane_g4

0x945e,	// (0x0002f57e) list_single_2heading_msg_pane_ParamLimits

0x945e,	// (0x0002f57e) list_single_2heading_msg_pane

0x94b1,	// (0x0002f5d1) list_single_2heading_msg_pane_g1_ParamLimits

0x94b1,	// (0x0002f5d1) list_single_2heading_msg_pane_g1

0x94bd,	// (0x0002f5dd) list_single_2heading_msg_pane_g2_ParamLimits

0x94bd,	// (0x0002f5dd) list_single_2heading_msg_pane_g2

0x94d0,	// (0x0002f5f0) list_single_2heading_msg_pane_g3_ParamLimits

0x94d0,	// (0x0002f5f0) list_single_2heading_msg_pane_g3

0xf1d4,	// (0x000352f4) list_single_2heading_msg_pane_g4_ParamLimits

0xf1d4,	// (0x000352f4) list_single_2heading_msg_pane_g4

0x0003,

0xfc98,	// (0x00035db8) list_single_2heading_msg_pane_g_ParamLimits

0xfc98,	// (0x00035db8) list_single_2heading_msg_pane_g

0xf1ec,	// (0x0003530c) list_single_2heading_msg_pane_t1_ParamLimits

0xf1ec,	// (0x0003530c) list_single_2heading_msg_pane_t1

0x94dc,	// (0x0002f5fc) list_single_2heading_msg_pane_t2_ParamLimits

0x94dc,	// (0x0002f5fc) list_single_2heading_msg_pane_t2

0x9547,	// (0x0002f667) list_single_2heading_msg_pane_t3_ParamLimits

0x9547,	// (0x0002f667) list_single_2heading_msg_pane_t3

0xf214,	// (0x00035334) list_single_2heading_msg_pane_t4_ParamLimits

0xf214,	// (0x00035334) list_single_2heading_msg_pane_t4

0x0003,

0xfca1,	// (0x00035dc1) list_single_2heading_msg_pane_t_ParamLimits

0xfca1,	// (0x00035dc1) list_single_2heading_msg_pane_t

0xc785,	// (0x000328a5) title_pane_g4_ParamLimits

0xc785,	// (0x000328a5) title_pane_g4

0xf413,	// (0x00035533) title_pane_stacon_g3_ParamLimits

0xf413,	// (0x00035533) title_pane_stacon_g3

0x5da1,	// (0x0002bec1) list_single_2graphic_im_pane_g4_ParamLimits

0x5da1,	// (0x0002bec1) list_single_2graphic_im_pane_g4

0xb7a5,	// (0x000318c5) popup_side_volume_key_window_cp

0x445f,	// (0x0002a57f) main_idle_act2_pane_t1

0x1850,	// (0x00027970) toolbar_button_pane_g10

0x9e8f,	// (0x0002ffaf) popup_toolbar_window_cp1

0x4bf3,	// (0x0002ad13) clock_nsta_pane_cp_t1

0x4bf3,	// (0x0002ad13) clock_nsta_pane_cp_t2

0x0001,

0xfaaf,	// (0x00035bcf) clock_nsta_pane_cp_t

0xa194,	// (0x000302b4) navi_navi_volume_pane_cp2_ParamLimits

0x0276,	// (0x00026396) popup_side_volume_key_window_g1_ParamLimits

0xa1a3,	// (0x000302c3) popup_side_volume_key_window_g2_ParamLimits

0xa1b2,	// (0x000302d2) popup_side_volume_key_window_g3_ParamLimits

0xf702,	// (0x00035822) popup_side_volume_key_window_g_ParamLimits

0x1cf2,	// (0x00027e12) fep_hwr_aid_pane

0xd17b,	// (0x0003329b) bg_fep_hwr_top_pane_g4_ParamLimits

0x51ba,	// (0x0002b2da) fep_hwr_top_pane_g1_ParamLimits

0x51cc,	// (0x0002b2ec) fep_hwr_top_pane_g2_ParamLimits

0x1dab,	// (0x00027ecb) fep_hwr_top_pane_g3_ParamLimits

0xfb04,	// (0x00035c24) fep_hwr_top_pane_g_ParamLimits

0x1dc0,	// (0x00027ee0) fep_hwr_top_text_pane_ParamLimits

0x3a14,	// (0x00029b34) aid_touch_tab_arrow_arrow_2

0x3a1d,	// (0x00029b3d) aid_touch_tab_arrow_left_2

0x1d06,	// (0x00027e26) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1d3d,	// (0x00027e5d) fep_hwr_prediction_pane

0x5325,	// (0x0002b445) fep_vkb_prediction_pane

0xd23b,	// (0x0003335b) fep_vkb_side_pane_g3_ParamLimits

0xd23b,	// (0x0003335b) fep_vkb_side_pane_g3

0x53ce,	// (0x0002b4ee) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x586f,	// (0x0002b98f) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x587c,	// (0x0002b99c) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbae,	// (0x00035cce) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6294,	// (0x0002c3b4) fep_hwr_prediction_pane_g1

0x204d,	// (0x0002816d) fep_hwr_prediction_pane_g2

0x2055,	// (0x00028175) fep_hwr_prediction_pane_g3

0x205d,	// (0x0002817d) fep_hwr_prediction_pane_g4

0x0003,

0xfcaa,	// (0x00035dca) fep_hwr_prediction_pane_g

0x6294,	// (0x0002c3b4) fep_vkb_prediction_pane_g1

0x629e,	// (0x0002c3be) fep_vkb_prediction_pane_g2

0x62a6,	// (0x0002c3c6) fep_vkb_prediction_pane_g3

0x62ae,	// (0x0002c3ce) fep_vkb_prediction_pane_g4

0x0003,

0xfcb3,	// (0x00035dd3) fep_vkb_prediction_pane_g

0xb936,	// (0x00031a56) slider_set_pane_g3

0xb94a,	// (0x00031a6a) slider_set_pane_g4

0xb962,	// (0x00031a82) slider_set_pane_g5

0xb936,	// (0x00031a56) slider_set_pane_g6

0xb978,	// (0x00031a98) slider_set_pane_g7

0x40a0,	// (0x0002a1c0) slider_form_pane_g3

0x40a9,	// (0x0002a1c9) slider_form_pane_g4

0x40b1,	// (0x0002a1d1) slider_form_pane_g5

0x40a0,	// (0x0002a1c0) slider_form_pane_g6

0xbaff,	// (0x00031c1f) slider_form_pane_g7

0x470a,	// (0x0002a82a) slider_set_pane_vc_g3

0x4713,	// (0x0002a833) slider_set_pane_vc_g4

0x471c,	// (0x0002a83c) slider_set_pane_vc_g5

0x470a,	// (0x0002a82a) slider_set_pane_vc_g6

0x4725,	// (0x0002a845) slider_set_pane_vc_g7

0x48d7,	// (0x0002a9f7) slider_form_pane_vc_g1

0x48e0,	// (0x0002aa00) slider_form_pane_vc_g2

0x48e9,	// (0x0002aa09) slider_form_pane_vc_g3

0x48d7,	// (0x0002a9f7) slider_form_pane_vc_g4

0x48f2,	// (0x0002aa12) slider_form_pane_vc_g5

0x0004,

0xfa81,	// (0x00035ba1) slider_form_pane_vc_g

0xc767,	// (0x00032887) main_idle_act3_pane

0x62b6,	// (0x0002c3d6) ai3_links_pane

0xd64c,	// (0x0003376c) popup_ai3_data_window_ParamLimits

0xd64c,	// (0x0003376c) popup_ai3_data_window

0xc767,	// (0x00032887) grid_ai3_links_pane

0xd664,	// (0x00033784) cell_ai3_links_pane_ParamLimits

0xd664,	// (0x00033784) cell_ai3_links_pane

0x62ef,	// (0x0002c40f) bg_popup_sub_pane_cp11

0x62fc,	// (0x0002c41c) cell_ai3_links_pane_g1

0xc767,	// (0x00032887) bg_popup_sub_pane_cp12

0x6321,	// (0x0002c441) heading_ai3_data_pane

0x6329,	// (0x0002c449) list_ai3_gene_pane

0x6335,	// (0x0002c455) popup_ai3_data_window_g1

0x633d,	// (0x0002c45d) heading_ai3_data_pane_g1

0x6345,	// (0x0002c465) heading_ai3_data_pane_t1

0xd67e,	// (0x0003379e) list_double_ai3_gene_pane_ParamLimits

0xd67e,	// (0x0003379e) list_double_ai3_gene_pane

0x6360,	// (0x0002c480) list_single_ai3_gene_pane_ParamLimits

0x6360,	// (0x0002c480) list_single_ai3_gene_pane

0x5123,	// (0x0002b243) list_highlight_pane_cp7_ParamLimits

0x5123,	// (0x0002b243) list_highlight_pane_cp7

0x636d,	// (0x0002c48d) list_single_a13_gene_pane_t1_ParamLimits

0x636d,	// (0x0002c48d) list_single_a13_gene_pane_t1

0x6384,	// (0x0002c4a4) list_single_ai3_gene_pane_g1

0x638d,	// (0x0002c4ad) list_single_ai3_gene_pane_g2

0x0001,

0xfcbc,	// (0x00035ddc) list_single_ai3_gene_pane_g

0x6395,	// (0x0002c4b5) list_double_ai3_gene_pane_g1_ParamLimits

0x6395,	// (0x0002c4b5) list_double_ai3_gene_pane_g1

0xd68b,	// (0x000337ab) list_double_ai3_gene_pane_t1_ParamLimits

0xd68b,	// (0x000337ab) list_double_ai3_gene_pane_t1

0x63bd,	// (0x0002c4dd) list_double_ai3_gene_pane_t2_ParamLimits

0x63bd,	// (0x0002c4dd) list_double_ai3_gene_pane_t2

0x63d2,	// (0x0002c4f2) list_double_ai3_gene_pane_t3_ParamLimits

0x63d2,	// (0x0002c4f2) list_double_ai3_gene_pane_t3

0x0002,

0xfcc1,	// (0x00035de1) list_double_ai3_gene_pane_t_ParamLimits

0xfcc1,	// (0x00035de1) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf1ca,	// (0x000352ea) aid_size_min_col_2

0xd636,	// (0x00033756) aid_size_min_msg_ParamLimits

0xd636,	// (0x00033756) aid_size_min_msg

0xd24f,	// (0x0003336f) fep_vkb_top_text_pane_g2_ParamLimits

0xd24f,	// (0x0003336f) fep_vkb_top_text_pane_g2

0x0001,

0xfb34,	// (0x00035c54) fep_vkb_top_text_pane_g_ParamLimits

0xfb34,	// (0x00035c54) fep_vkb_top_text_pane_g

0xc767,	// (0x00032887) main_hc_apps_shell_pane

0x63ef,	// (0x0002c50f) grid_hc_apps_pane_ParamLimits

0x63ef,	// (0x0002c50f) grid_hc_apps_pane

0x63fe,	// (0x0002c51e) list_hc_apps_pane

0x6406,	// (0x0002c526) scroll_pane_cp37_ParamLimits

0x6406,	// (0x0002c526) scroll_pane_cp37

0xd6a7,	// (0x000337c7) cell_hc_apps_pane_ParamLimits

0xd6a7,	// (0x000337c7) cell_hc_apps_pane

0xd765,	// (0x00033885) cell_hc_apps_pane_g1_ParamLimits

0xd765,	// (0x00033885) cell_hc_apps_pane_g1

0x64f1,	// (0x0002c611) cell_hc_apps_pane_g2_ParamLimits

0x64f1,	// (0x0002c611) cell_hc_apps_pane_g2

0x650d,	// (0x0002c62d) cell_hc_apps_pane_g3_ParamLimits

0x650d,	// (0x0002c62d) cell_hc_apps_pane_g3

0x0002,

0xfcc8,	// (0x00035de8) cell_hc_apps_pane_g_ParamLimits

0xfcc8,	// (0x00035de8) cell_hc_apps_pane_g

0xd792,	// (0x000338b2) cell_hc_apps_pane_t1_ParamLimits

0xd792,	// (0x000338b2) cell_hc_apps_pane_t1

0xc901,	// (0x00032a21) grid_highlight_pane_cp10_ParamLimits

0xc901,	// (0x00032a21) grid_highlight_pane_cp10

0xd7d0,	// (0x000338f0) list_single_hc_apps_pane_ParamLimits

0xd7d0,	// (0x000338f0) list_single_hc_apps_pane

0xd800,	// (0x00033920) list_single_hc_apps_pane_g1

0x95b5,	// (0x0002f6d5) list_single_hc_apps_pane_g2

0x0001,

0xfccf,	// (0x00035def) list_single_hc_apps_pane_g

0x95ce,	// (0x0002f6ee) list_single_hc_apps_pane_g2_copy1

0x95ea,	// (0x0002f70a) list_single_hc_apps_pane_t1

0xc7d7,	// (0x000328f7) bg_set_opt_pane_cp_ParamLimits

0x9959,	// (0x0002fa79) setting_slider_pane_t1_ParamLimits

0x9972,	// (0x0002fa92) setting_slider_pane_t2_ParamLimits

0x998c,	// (0x0002faac) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0003567e) setting_slider_pane_t_ParamLimits

0x99a4,	// (0x0002fac4) slider_set_pane_ParamLimits

0x0bb3,	// (0x00026cd3) control_pane_g5_ParamLimits

0x0bb3,	// (0x00026cd3) control_pane_g5

0xb929,	// (0x00031a49) slider_set_pane_g1_ParamLimits

0x1b1e,	// (0x00027c3e) slider_set_pane_g2_ParamLimits

0xb936,	// (0x00031a56) slider_set_pane_g3_ParamLimits

0xb94a,	// (0x00031a6a) slider_set_pane_g4_ParamLimits

0xb962,	// (0x00031a82) slider_set_pane_g5_ParamLimits

0xb936,	// (0x00031a56) slider_set_pane_g6_ParamLimits

0xb978,	// (0x00031a98) slider_set_pane_g7_ParamLimits

0xf949,	// (0x00035a69) slider_set_pane_g_ParamLimits

0x0657,	// (0x00026777) navi_icon_text_pane_ParamLimits

0xadb5,	// (0x00030ed5) aid_fill_nsta_2_ParamLimits

0xadec,	// (0x00030f0c) aid_touch_tab_arrow_left_ParamLimits

0xae02,	// (0x00030f22) aid_touch_tab_arrow_right_ParamLimits

0xae9d,	// (0x00030fbd) clock_nsta_pane_ParamLimits

0x39f6,	// (0x00029b16) navi_icon_pane_g1_ParamLimits

0x3a02,	// (0x00029b22) navi_text_pane_t1_ParamLimits

0x4d03,	// (0x0002ae23) navi_icon_text_pane_g1_ParamLimits

0x4d0f,	// (0x0002ae2f) navi_icon_text_pane_t1_ParamLimits

0xd800,	// (0x00033920) list_single_hc_apps_pane_g1_ParamLimits

0x95b5,	// (0x0002f6d5) list_single_hc_apps_pane_g2_ParamLimits

0xfccf,	// (0x00035def) list_single_hc_apps_pane_g_ParamLimits

0x95ce,	// (0x0002f6ee) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x95ea,	// (0x0002f70a) list_single_hc_apps_pane_t1_ParamLimits

0x978a,	// (0x0002f8aa) popup_toolbar2_fixed_window_ParamLimits

0x978a,	// (0x0002f8aa) popup_toolbar2_fixed_window

0xacc5,	// (0x00030de5) popup_toolbar2_float_window

0xc767,	// (0x00032887) bg_popup_sub_pane_cp27

0x65eb,	// (0x0002c70b) grid_toolbar2_float_pane

0xc767,	// (0x00032887) bg_popup_sub_pane_cp26

0x65eb,	// (0x0002c70b) grid_toolbar2_fixed_pane

0xd819,	// (0x00033939) cell_toolbar2_fixed_pane_ParamLimits

0xd819,	// (0x00033939) cell_toolbar2_fixed_pane

0xd833,	// (0x00033953) cell_toolbar2_fixed_pane_g1

0x1758,	// (0x00027878) toolbar2_fixed_button_pane

0x1808,	// (0x00027928) toolbar2_fixed_button_pane_g1

0x1810,	// (0x00027930) toolbar2_fixed_button_pane_g2

0x1818,	// (0x00027938) toolbar2_fixed_button_pane_g3

0x1820,	// (0x00027940) toolbar2_fixed_button_pane_g4

0x1828,	// (0x00027948) toolbar2_fixed_button_pane_g5

0x1830,	// (0x00027950) toolbar2_fixed_button_pane_g6

0x1838,	// (0x00027958) toolbar2_fixed_button_pane_g7

0x1840,	// (0x00027960) toolbar2_fixed_button_pane_g8

0x1848,	// (0x00027968) toolbar2_fixed_button_pane_g9

0x0008,

0xf84b,	// (0x0003596b) toolbar2_fixed_button_pane_g

0x660c,	// (0x0002c72c) cell_toolbar2_float_pane_ParamLimits

0x660c,	// (0x0002c72c) cell_toolbar2_float_pane

0x661d,	// (0x0002c73d) cell_toolbar2_float_pane_g1

0x1758,	// (0x00027878) toolbar2_fixed_button_pane_cp

0xc020,	// (0x00032140) fep_vkb_accented_list_pane_ParamLimits

0xc020,	// (0x00032140) fep_vkb_accented_list_pane

0x1f0e,	// (0x0002802e) bg_popup_fep_shadow_pane_g9

0x07d7,	// (0x000268f7) bg_popup_fep_shadow_pane_cp3

0xcc8f,	// (0x00032daf) list_accented_list_pane

0x6626,	// (0x0002c746) list_single_accented_list_pane_ParamLimits

0x6626,	// (0x0002c746) list_single_accented_list_pane

0x07d7,	// (0x000268f7) list_highlight_pane_cp10

0x6637,	// (0x0002c757) list_single_accented_list_pane_t1

0xabef,	// (0x00030d0f) popup_slider_window_ParamLimits

0xabef,	// (0x00030d0f) popup_slider_window

0x6277,	// (0x0002c397) aid_indentation_list_msg

0xd924,	// (0x00033a44) bg_popup_window_pane_cp19

0x675d,	// (0x0002c87d) popup_slider_window_g1

0x6779,	// (0x0002c899) popup_slider_window_g2

0x6795,	// (0x0002c8b5) popup_slider_window_g3

0x0005,

0xfcd4,	// (0x00035df4) popup_slider_window_g

0x67fb,	// (0x0002c91b) popup_slider_window_t1

0x686f,	// (0x0002c98f) small_volume_slider_vertical_pane

0x515e,	// (0x0002b27e) small_volume_slider_vertical_pane_g1

0x515e,	// (0x0002b27e) small_volume_slider_vertical_pane_g2

0x688b,	// (0x0002c9ab) small_volume_slider_vertical_pane_g3

0x0002,

0xfce6,	// (0x00035e06) small_volume_slider_vertical_pane_g

0x96d8,	// (0x0002f7f8) area_side_right_pane_ParamLimits

0x96d8,	// (0x0002f7f8) area_side_right_pane

0xc0f7,	// (0x00032217) aid_size_side_button_ParamLimits

0xc0f7,	// (0x00032217) aid_size_side_button

0xc110,	// (0x00032230) grid_sctrl_middle_pane_ParamLimits

0xc110,	// (0x00032230) grid_sctrl_middle_pane

0x2098,	// (0x000281b8) sctrl_sk_bottom_pane

0x20a9,	// (0x000281c9) sctrl_sk_top_pane

0x20bb,	// (0x000281db) aid_touch_sctrl_top

0xc901,	// (0x00032a21) bg_sctrl_sk_pane_ParamLimits

0xc901,	// (0x00032a21) bg_sctrl_sk_pane

0x20c8,	// (0x000281e8) sctrl_sk_top_pane_g1

0x20d5,	// (0x000281f5) sctrl_sk_top_pane_t1

0x20bb,	// (0x000281db) aid_touch_sctrl_bottom

0xc901,	// (0x00032a21) bg_sctrl_sk_pane_cp_ParamLimits

0xc901,	// (0x00032a21) bg_sctrl_sk_pane_cp

0x20f0,	// (0x00028210) sctrl_sk_bottom_pane_g1

0x20d5,	// (0x000281f5) sctrl_sk_bottom_pane_t1

0xc12a,	// (0x0003224a) cell_sctrl_middle_pane_ParamLimits

0xc12a,	// (0x0003224a) cell_sctrl_middle_pane

0xc13b,	// (0x0003225b) aid_touch_sctrl_middle_ParamLimits

0xc13b,	// (0x0003225b) aid_touch_sctrl_middle

0xc148,	// (0x00032268) bg_sctrl_middle_pane_ParamLimits

0xc148,	// (0x00032268) bg_sctrl_middle_pane

0x6913,	// (0x0002ca33) cell_sctrl_middle_pane_g1_ParamLimits

0x6913,	// (0x0002ca33) cell_sctrl_middle_pane_g1

0xc156,	// (0x00032276) cell_sctrl_middle_pane_g2_ParamLimits

0xc156,	// (0x00032276) cell_sctrl_middle_pane_g2

0x0001,

0xfcf2,	// (0x00035e12) cell_sctrl_middle_pane_g_ParamLimits

0xfcf2,	// (0x00035e12) cell_sctrl_middle_pane_g

0x1808,	// (0x00027928) bg_sctrl_middle_pane_g1

0x1810,	// (0x00027930) bg_sctrl_middle_pane_g2

0x1818,	// (0x00027938) bg_sctrl_middle_pane_g3

0x1820,	// (0x00027940) bg_sctrl_middle_pane_g4

0x1828,	// (0x00027948) bg_sctrl_middle_pane_g5

0x1830,	// (0x00027950) bg_sctrl_middle_pane_g6

0x1838,	// (0x00027958) bg_sctrl_middle_pane_g7

0x1840,	// (0x00027960) bg_sctrl_middle_pane_g8

0x0007,

0xfcf7,	// (0x00035e17) bg_sctrl_middle_pane_g

0x1848,	// (0x00027968) bg_sctrl_middle_pane_g8_copy1

0x1808,	// (0x00027928) bg_sctrl_sk_pane_g1

0x1810,	// (0x00027930) bg_sctrl_sk_pane_g2

0x1818,	// (0x00027938) bg_sctrl_sk_pane_g3

0x0008,

0xf84b,	// (0x0003596b) bg_sctrl_sk_pane_g

0xcacb,	// (0x00032beb) aid_size_touch_scroll_bar

0x1820,	// (0x00027940) bg_sctrl_sk_pane_g4

0x1828,	// (0x00027948) bg_sctrl_sk_pane_g5

0x1830,	// (0x00027950) bg_sctrl_sk_pane_g6

0x1838,	// (0x00027958) bg_sctrl_sk_pane_g7

0x1840,	// (0x00027960) bg_sctrl_sk_pane_g8

0x1848,	// (0x00027968) bg_sctrl_sk_pane_g9

0x0dd2,	// (0x00026ef2) popup_fep_china_hwr2_fs_candidate_window

0xa68f,	// (0x000307af) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa68f,	// (0x000307af) popup_fep_china_hwr2_fs_control_window

0x53ce,	// (0x0002b4ee) sctrl_sk_top_pane_g2

0x0001,

0xfced,	// (0x00035e0d) sctrl_sk_top_pane_g

0xd9dc,	// (0x00033afc) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9dc,	// (0x00033afc) aid_fep_china_hwr2_fs_cell

0xd9f0,	// (0x00033b10) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9f0,	// (0x00033b10) bg_popup_fep_shadow_pane_cp4

0xda07,	// (0x00033b27) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xda07,	// (0x00033b27) bg_popup_fep_shadow_pane_cp5

0xda19,	// (0x00033b39) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda19,	// (0x00033b39) popup_fep_china_hwr2_fs_control_bar_grid

0xda2d,	// (0x00033b4d) popup_fep_china_hwr2_fs_control_funtion_grid

0x68e7,	// (0x0002ca07) aid_fep_china_hwr2_fs_candi_cell

0xc767,	// (0x00032887) bg_popup_fep_shadow_pane_cp6

0x68f1,	// (0x0002ca11) popup_fep_china_hwr2_fs_candidate_grid

0xda35,	// (0x00033b55) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda35,	// (0x00033b55) cell_fep_china_hwr2_fs_funtion_grid

0x515e,	// (0x0002b27e) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6913,	// (0x0002ca33) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6913,	// (0x0002ca33) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6921,	// (0x0002ca41) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6921,	// (0x0002ca41) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd08,	// (0x00035e28) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd08,	// (0x00035e28) cell_fep_china_hwr2_fs_funtion_grid_g

0xda4d,	// (0x00033b6d) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda4d,	// (0x00033b6d) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda62,	// (0x00033b82) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda62,	// (0x00033b82) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0d,	// (0x00035e2d) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0d,	// (0x00035e2d) cell_fep_china_hwr2_fs_funtion_grid_t

0x6968,	// (0x0002ca88) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6970,	// (0x0002ca90) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6978,	// (0x0002ca98) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd12,	// (0x00035e32) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6980,	// (0x0002caa0) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6980,	// (0x0002caa0) cell_fep_china_hwr2_fs_candidate_grid

0x6999,	// (0x0002cab9) popup_fep_china_hwr2_fs_candidate_grid_g20

0x69a1,	// (0x0002cac1) popup_fep_china_hwr2_fs_candidate_grid_g21

0x515e,	// (0x0002b27e) cell_fep_china_hwr2_fs_candidate_grid_g1

0x515e,	// (0x0002b27e) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb39,	// (0x00035c59) cell_fep_china_hwr2_fs_candidate_grid_g

0x69a9,	// (0x0002cac9) cell_fep_china_hwr2_fs_candidate_grid_t1

0x13d1,	// (0x000274f1) clock_nsta_pane_cp_24_ParamLimits

0x13d1,	// (0x000274f1) clock_nsta_pane_cp_24

0x144f,	// (0x0002756f) indicator_nsta_pane_cp_24_ParamLimits

0x144f,	// (0x0002756f) indicator_nsta_pane_cp_24

0x3872,	// (0x00029992) heading_pane_g1

0x0001,

0xf8b0,	// (0x000359d0) heading_pane_g

0x42a8,	// (0x0002a3c8) grid_sct_catagory_button_pane

0x42d8,	// (0x0002a3f8) scroll_pane_cp5_ParamLimits

0x4d51,	// (0x0002ae71) button_value_adjust_pane_cp5_ParamLimits

0x4d51,	// (0x0002ae71) button_value_adjust_pane_cp5

0x4e30,	// (0x0002af50) form2_midp_time_pane_ParamLimits

0x69b7,	// (0x0002cad7) cell_sct_catagory_button_pane_ParamLimits

0x69b7,	// (0x0002cad7) cell_sct_catagory_button_pane

0x5123,	// (0x0002b243) bg_button_pane_cp01_ParamLimits

0x5123,	// (0x0002b243) bg_button_pane_cp01

0x515e,	// (0x0002b27e) cell_sct_catagory_button_pane_g1

0xac68,	// (0x00030d88) popup_tb_extension_window

0xda7e,	// (0x00033b9e) aid_size_cell_ext_ParamLimits

0xda7e,	// (0x00033b9e) aid_size_cell_ext

0xca7d,	// (0x00032b9d) bg_tb_trans_pane_cp1_ParamLimits

0xca7d,	// (0x00032b9d) bg_tb_trans_pane_cp1

0xdaa4,	// (0x00033bc4) grid_tb_ext_pane_ParamLimits

0xdaa4,	// (0x00033bc4) grid_tb_ext_pane

0xdae3,	// (0x00033c03) cell_tb_ext_pane_ParamLimits

0xdae3,	// (0x00033c03) cell_tb_ext_pane

0xdb0b,	// (0x00033c2b) cell_tb_ext_pane_g1_ParamLimits

0xdb0b,	// (0x00033c2b) cell_tb_ext_pane_g1

0x6a4d,	// (0x0002cb6d) cell_tb_ext_pane_t1

0xc901,	// (0x00032a21) list_highlight_pane_cp11_ParamLimits

0xc901,	// (0x00032a21) list_highlight_pane_cp11

0x979f,	// (0x0002f8bf) popup_uni_indicator_window_ParamLimits

0x979f,	// (0x0002f8bf) popup_uni_indicator_window

0xcb89,	// (0x00032ca9) bg_popup_sub_pane_cp14

0xdb28,	// (0x00033c48) list_uniindi_pane

0xdb34,	// (0x00033c54) uniindi_top_pane

0xc901,	// (0x00032a21) bg_uniindi_top_pane

0xdb53,	// (0x00033c73) uniindi_top_pane_g1

0xdb69,	// (0x00033c89) uniindi_top_pane_g2

0x0003,

0xfd19,	// (0x00035e39) uniindi_top_pane_g

0xdb86,	// (0x00033ca6) uniindi_top_pane_t1

0x6afe,	// (0x0002cc1e) list_single_uniindi_pane_ParamLimits

0x6afe,	// (0x0002cc1e) list_single_uniindi_pane

0x515e,	// (0x0002b27e) bg_uniindi_top_pane_g1

0x6b10,	// (0x0002cc30) list_single_uniindi_pane_g1

0x6b23,	// (0x0002cc43) list_single_uniindi_pane_t1

0xc767,	// (0x00032887) control_bg_pane

0x6b48,	// (0x0002cc68) bg_sctrl_sk_pane_cp1

0x6b51,	// (0x0002cc71) bg_sctrl_sk_pane_cp2

0x6b5a,	// (0x0002cc7a) control_bg_pane_g1

0x6b63,	// (0x0002cc83) control_bg_pane_g2

0x0001,

0xfd22,	// (0x00035e42) control_bg_pane_g

0x4ba7,	// (0x0002acc7) cell_indicator_nsta_pane_g1_ParamLimits

0xbda2,	// (0x00031ec2) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9d,	// (0x00035bbd) cell_indicator_nsta_pane_g_ParamLimits

0xefba,	// (0x000350da) form2_midp_time_pane_t1_ParamLimits

0x1ce4,	// (0x00027e04) main_idle_act4_pane_ParamLimits

0x1ce4,	// (0x00027e04) main_idle_act4_pane

0xac68,	// (0x00030d88) popup_tb_extension_window_ParamLimits

0xdac9,	// (0x00033be9) tb_ext_find_pane_ParamLimits

0xdac9,	// (0x00033be9) tb_ext_find_pane

0x6b6c,	// (0x0002cc8c) ai_gene_pane_1_cp1

0x0922,	// (0x00026a42) ai_gene_pane_2_cp1

0xdbb0,	// (0x00033cd0) list_single_idle_plugin_calendar_pane

0x6b7d,	// (0x0002cc9d) list_single_idle_plugin_notification_pane

0x6b86,	// (0x0002cca6) list_single_idle_plugin_player_pane

0xdbb9,	// (0x00033cd9) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdbb9,	// (0x00033cd9) list_single_idle_plugin_shortcut_pane

0xdbe1,	// (0x00033d01) main_idle_act4_pane_t1

0xdbf8,	// (0x00033d18) main_idle_act4_pane_t2

0x0001,

0xfd27,	// (0x00035e47) main_idle_act4_pane_t

0xdc0f,	// (0x00033d2f) middle_sk_idle_act4_pane_ParamLimits

0xdc0f,	// (0x00033d2f) middle_sk_idle_act4_pane

0xdc2b,	// (0x00033d4b) popup_clock_digital_analogue_window_cp2

0xdc57,	// (0x00033d77) shortcut_wheel_idle_act4_pane_ParamLimits

0xdc57,	// (0x00033d77) shortcut_wheel_idle_act4_pane

0x515e,	// (0x0002b27e) shortcut_wheel_idle_act4_pane_g1

0x515e,	// (0x0002b27e) shortcut_wheel_idle_act4_pane_g2

0x515e,	// (0x0002b27e) shortcut_wheel_idle_act4_pane_g3

0x515e,	// (0x0002b27e) shortcut_wheel_idle_act4_pane_g4

0x515e,	// (0x0002b27e) shortcut_wheel_idle_act4_pane_g5

0x6c19,	// (0x0002cd39) shortcut_wheel_idle_act4_pane_g6

0x6c21,	// (0x0002cd41) shortcut_wheel_idle_act4_pane_g7

0x6c29,	// (0x0002cd49) shortcut_wheel_idle_act4_pane_g8

0x6c31,	// (0x0002cd51) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2c,	// (0x00035e4c) shortcut_wheel_idle_act4_pane_g

0xd17b,	// (0x0003329b) middle_sk_idle_act4_pane_g1_ParamLimits

0xd17b,	// (0x0003329b) middle_sk_idle_act4_pane_g1

0xdcd4,	// (0x00033df4) middle_sk_idle_act4_pane_g2_ParamLimits

0xdcd4,	// (0x00033df4) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4f,	// (0x00035e6f) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4f,	// (0x00035e6f) middle_sk_idle_act4_pane_g

0xdcec,	// (0x00033e0c) middle_sk_idle_act4_pane_t1_ParamLimits

0xdcec,	// (0x00033e0c) middle_sk_idle_act4_pane_t1

0xdd1b,	// (0x00033e3b) grid_ai_shortcut_pane_ParamLimits

0xdd1b,	// (0x00033e3b) grid_ai_shortcut_pane

0xdd38,	// (0x00033e58) list_highlight_pane_cp16_ParamLimits

0xdd38,	// (0x00033e58) list_highlight_pane_cp16

0xdd45,	// (0x00033e65) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdd45,	// (0x00033e65) list_single_idle_plugin_shortcut_pane_g1

0xdd51,	// (0x00033e71) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdd51,	// (0x00033e71) list_single_idle_plugin_shortcut_pane_g2

0xdd6d,	// (0x00033e8d) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdd6d,	// (0x00033e8d) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd54,	// (0x00035e74) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd54,	// (0x00035e74) list_single_idle_plugin_shortcut_pane_g

0xdd82,	// (0x00033ea2) cell_ai_shortcut_pane_ParamLimits

0xdd82,	// (0x00033ea2) cell_ai_shortcut_pane

0xdd98,	// (0x00033eb8) cell_ai_shortcut_pane_g1_ParamLimits

0xdd98,	// (0x00033eb8) cell_ai_shortcut_pane_g1

0x6b6c,	// (0x0002cc8c) ai_gene_pane_1_cp2

0x6d61,	// (0x0002ce81) ai_gene_pane_2_cp2

0x6d69,	// (0x0002ce89) list_highlight_pane_cp15

0xddba,	// (0x00033eda) list_single_idle_plugin_calendar_pane_g1

0x6d69,	// (0x0002ce89) list_highlight_pane_cp17

0x6d7a,	// (0x0002ce9a) list_single_idle_plugin_calendar_pane_g1_copy1

0x6d82,	// (0x0002cea2) list_single_idle_plugin_player_pane_g1

0x4501,	// (0x0002a621) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5b,	// (0x00035e7b) list_single_idle_plugin_player_pane_g

0x6d8a,	// (0x0002ceaa) list_single_idle_plugin_player_pane_t1

0x6d98,	// (0x0002ceb8) list_single_idle_plugin_player_pane_t2

0x6da6,	// (0x0002cec6) list_single_idle_plugin_player_pane_t3

0x6db4,	// (0x0002ced4) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd60,	// (0x00035e80) list_single_idle_plugin_player_pane_t

0x6dc2,	// (0x0002cee2) wait_bar_pane_cp15

0x6dca,	// (0x0002ceea) grid_ai_notification_pane

0x4501,	// (0x0002a621) list_single_idle_plugin_notification_pane_g1

0xddc2,	// (0x00033ee2) cell_ai_notification_pane_ParamLimits

0xddc2,	// (0x00033ee2) cell_ai_notification_pane

0x6de0,	// (0x0002cf00) cell_ai_notification_pane_g1

0x6de8,	// (0x0002cf08) cell_ai_notification_pane_t1

0xddcf,	// (0x00033eef) tb_ext_find_button_pane

0xddd7,	// (0x00033ef7) tb_ext_find_pane_g1

0xdddf,	// (0x00033eff) tb_ext_find_pane_t1

0xcfbc,	// (0x000330dc) tb_ext_find_button_pane_g1

0xdded,	// (0x00033f0d) tb_ext_find_button_pane_g2

0x0001,

0xfd69,	// (0x00035e89) tb_ext_find_button_pane_g

0xdbe1,	// (0x00033d01) main_idle_act4_pane_t1_ParamLimits

0xdbf8,	// (0x00033d18) main_idle_act4_pane_t2_ParamLimits

0xfd27,	// (0x00035e47) main_idle_act4_pane_t_ParamLimits

0xdc2b,	// (0x00033d4b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdc43,	// (0x00033d63) sat_plugin_idle_act4_pane_ParamLimits

0xdc43,	// (0x00033d63) sat_plugin_idle_act4_pane

0xddf6,	// (0x00033f16) sat_plugin_idle_act4_pane_t1_ParamLimits

0xddf6,	// (0x00033f16) sat_plugin_idle_act4_pane_t1

0xde0e,	// (0x00033f2e) sat_plugin_idle_act4_pane_t2_ParamLimits

0xde0e,	// (0x00033f2e) sat_plugin_idle_act4_pane_t2

0xde26,	// (0x00033f46) sat_plugin_idle_act4_pane_t3_ParamLimits

0xde26,	// (0x00033f46) sat_plugin_idle_act4_pane_t3

0xde3e,	// (0x00033f5e) sat_plugin_idle_act4_pane_t4_ParamLimits

0xde3e,	// (0x00033f5e) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd6e,	// (0x00035e8e) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd6e,	// (0x00035e8e) sat_plugin_idle_act4_pane_t

0x971a,	// (0x0002f83a) popup_battery_window_ParamLimits

0x971a,	// (0x0002f83a) popup_battery_window

0xc901,	// (0x00032a21) bg_popup_sub_pane_cp25_ParamLimits

0xc901,	// (0x00032a21) bg_popup_sub_pane_cp25

0x6e69,	// (0x0002cf89) popup_battery_window_g1_ParamLimits

0x6e69,	// (0x0002cf89) popup_battery_window_g1

0x6e75,	// (0x0002cf95) popup_battery_window_t1_ParamLimits

0x6e75,	// (0x0002cf95) popup_battery_window_t1

0x6e87,	// (0x0002cfa7) popup_battery_window_t2_ParamLimits

0x6e87,	// (0x0002cfa7) popup_battery_window_t2

0x0001,

0xfd77,	// (0x00035e97) popup_battery_window_t_ParamLimits

0xfd77,	// (0x00035e97) popup_battery_window_t

0xa2e5,	// (0x00030405) midp_canvas_pane_ParamLimits

0xa357,	// (0x00030477) midp_keypad_pane_ParamLimits

0xa357,	// (0x00030477) midp_keypad_pane

0x0d0e,	// (0x00026e2e) main_midp_pane_ParamLimits

0xbdaf,	// (0x00031ecf) signal_pane_g2_cp_ParamLimits

0xde56,	// (0x00033f76) aid_size_cell_midp_keypad_ParamLimits

0xde56,	// (0x00033f76) aid_size_cell_midp_keypad

0xde74,	// (0x00033f94) midp_keyp_game_grid_pane_ParamLimits

0xde74,	// (0x00033f94) midp_keyp_game_grid_pane

0xde9b,	// (0x00033fbb) midp_keyp_rocker_pane_ParamLimits

0xde9b,	// (0x00033fbb) midp_keyp_rocker_pane

0xdeec,	// (0x0003400c) midp_keyp_sk_left_pane_ParamLimits

0xdeec,	// (0x0003400c) midp_keyp_sk_left_pane

0xdf40,	// (0x00034060) midp_keyp_sk_right_pane_ParamLimits

0xdf40,	// (0x00034060) midp_keyp_sk_right_pane

0xc767,	// (0x00032887) bg_button_pane_cp03

0xdf94,	// (0x000340b4) midp_keyp_sk_left_pane_g1

0xc767,	// (0x00032887) bg_button_pane_cp04

0xdf94,	// (0x000340b4) midp_keyp_sk_right_pane_g1

0x515e,	// (0x0002b27e) midp_keyp_rocker_pane_g1

0xdf9d,	// (0x000340bd) keyp_game_cell_pane_ParamLimits

0xdf9d,	// (0x000340bd) keyp_game_cell_pane

0xc767,	// (0x00032887) bg_button_pane_cp02

0xdfc1,	// (0x000340e1) keyp_game_cell_pane_g1

0x973a,	// (0x0002f85a) popup_fep_vkb2_window_ParamLimits

0x973a,	// (0x0002f85a) popup_fep_vkb2_window

0xc162,	// (0x00032282) aid_size_cell_vkb2_ParamLimits

0xc162,	// (0x00032282) aid_size_cell_vkb2

0xc1a0,	// (0x000322c0) popup_fep_vkb2_window_g1_ParamLimits

0xc1a0,	// (0x000322c0) popup_fep_vkb2_window_g1

0xc1f0,	// (0x00032310) vkb2_area_bottom_pane_ParamLimits

0xc1f0,	// (0x00032310) vkb2_area_bottom_pane

0xc244,	// (0x00032364) vkb2_area_keypad_pane_ParamLimits

0xc244,	// (0x00032364) vkb2_area_keypad_pane

0xc28c,	// (0x000323ac) vkb2_area_top_pane_ParamLimits

0xc28c,	// (0x000323ac) vkb2_area_top_pane

0xc312,	// (0x00032432) vkb2_top_entry_pane_ParamLimits

0xc312,	// (0x00032432) vkb2_top_entry_pane

0xc33f,	// (0x0003245f) vkb2_top_grid_left_pane_ParamLimits

0xc33f,	// (0x0003245f) vkb2_top_grid_left_pane

0xc35f,	// (0x0003247f) vkb2_top_grid_right_pane_ParamLimits

0xc35f,	// (0x0003247f) vkb2_top_grid_right_pane

0x234e,	// (0x0002846e) vkb2_cell_keypad_pane_ParamLimits

0x234e,	// (0x0002846e) vkb2_cell_keypad_pane

0xc3a5,	// (0x000324c5) vkb2_area_bottom_grid_pane_ParamLimits

0xc3a5,	// (0x000324c5) vkb2_area_bottom_grid_pane

0xc3cf,	// (0x000324ef) vkb2_area_bottom_pane_g1_ParamLimits

0xc3cf,	// (0x000324ef) vkb2_area_bottom_pane_g1

0xc3f5,	// (0x00032515) vkb2_area_bottom_pane_g2_ParamLimits

0xc3f5,	// (0x00032515) vkb2_area_bottom_pane_g2

0xc426,	// (0x00032546) vkb2_area_bottom_pane_g3_ParamLimits

0xc426,	// (0x00032546) vkb2_area_bottom_pane_g3

0x0002,

0xfd7c,	// (0x00035e9c) vkb2_area_bottom_pane_g_ParamLimits

0xfd7c,	// (0x00035e9c) vkb2_area_bottom_pane_g

0x24f8,	// (0x00028618) vkb2_top_cell_left_pane_ParamLimits

0x24f8,	// (0x00028618) vkb2_top_cell_left_pane

0xdfca,	// (0x000340ea) vkb2_top_entry_pane_g1_ParamLimits

0xdfca,	// (0x000340ea) vkb2_top_entry_pane_g1

0xdfd8,	// (0x000340f8) vkb2_top_entry_pane_t1_ParamLimits

0xdfd8,	// (0x000340f8) vkb2_top_entry_pane_t1

0x7038,	// (0x0002d158) vkb2_top_entry_pane_t2_ParamLimits

0x7038,	// (0x0002d158) vkb2_top_entry_pane_t2

0x706a,	// (0x0002d18a) vkb2_top_entry_pane_t3_ParamLimits

0x706a,	// (0x0002d18a) vkb2_top_entry_pane_t3

0x0002,

0xfd83,	// (0x00035ea3) vkb2_top_entry_pane_t_ParamLimits

0xfd83,	// (0x00035ea3) vkb2_top_entry_pane_t

0xc490,	// (0x000325b0) vkb2_top_grid_right_pane_g1_ParamLimits

0xc490,	// (0x000325b0) vkb2_top_grid_right_pane_g1

0x255b,	// (0x0002867b) vkb2_top_grid_right_pane_g2_ParamLimits

0x255b,	// (0x0002867b) vkb2_top_grid_right_pane_g2

0x2573,	// (0x00028693) vkb2_top_grid_right_pane_g3_ParamLimits

0x2573,	// (0x00028693) vkb2_top_grid_right_pane_g3

0xc4a6,	// (0x000325c6) vkb2_top_grid_right_pane_g4_ParamLimits

0xc4a6,	// (0x000325c6) vkb2_top_grid_right_pane_g4

0x0003,

0xfd8a,	// (0x00035eaa) vkb2_top_grid_right_pane_g_ParamLimits

0xfd8a,	// (0x00035eaa) vkb2_top_grid_right_pane_g

0x25a1,	// (0x000286c1) vkb2_top_cell_left_pane_g1

0x25b8,	// (0x000286d8) vkb2_cell_keypad_pane_g1_ParamLimits

0x25b8,	// (0x000286d8) vkb2_cell_keypad_pane_g1

0x708e,	// (0x0002d1ae) vkb2_cell_keypad_pane_t1_ParamLimits

0x708e,	// (0x0002d1ae) vkb2_cell_keypad_pane_t1

0x25c6,	// (0x000286e6) vkb2_cell_bottom_grid_pane_ParamLimits

0x25c6,	// (0x000286e6) vkb2_cell_bottom_grid_pane

0x25ff,	// (0x0002871f) vkb2_cell_bottom_grid_pane_g1

0xdc78,	// (0x00033d98) aid_call2_pane_cp02

0xdc80,	// (0x00033da0) aid_call_pane_cp02

0xdc88,	// (0x00033da8) clock_digital_number_pane_cp10

0xdc90,	// (0x00033db0) clock_digital_number_pane_cp11

0xdc98,	// (0x00033db8) clock_digital_number_pane_cp12

0xdca0,	// (0x00033dc0) clock_digital_number_pane_cp13

0xdca8,	// (0x00033dc8) clock_digital_separator_pane_cp10

0xcfbc,	// (0x000330dc) popup_clock_digital_analogue_window_cp2_g1

0xcfbc,	// (0x000330dc) popup_clock_digital_analogue_window_cp2_g2

0xdcb0,	// (0x00033dd0) popup_clock_digital_analogue_window_cp2_g3

0xcfbc,	// (0x000330dc) popup_clock_digital_analogue_window_cp2_g4

0xdcb0,	// (0x00033dd0) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3f,	// (0x00035e5f) popup_clock_digital_analogue_window_cp2_g

0xdcb8,	// (0x00033dd8) popup_clock_digital_analogue_window_cp2_t1

0xdcc6,	// (0x00033de6) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd4a,	// (0x00035e6a) popup_clock_digital_analogue_window_cp2_t

0x515e,	// (0x0002b27e) clock_digital_number_pane_cp10_g1

0x515e,	// (0x0002b27e) clock_digital_number_pane_cp10_g2

0x0001,

0xfb39,	// (0x00035c59) clock_digital_number_pane_cp10_g

0x515e,	// (0x0002b27e) clock_digital_separator_pane_cp10_g1

0x515e,	// (0x0002b27e) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb39,	// (0x00035c59) clock_digital_separator_pane_cp10_g

0xdb75,	// (0x00033c95) uniindi_top_pane_g3

0x6ac7,	// (0x0002cbe7) uniindi_top_pane_g4

0x23d9,	// (0x000284f9) vkb2_row_keypad_pane_ParamLimits

0x23d9,	// (0x000284f9) vkb2_row_keypad_pane

0x261b,	// (0x0002873b) vkb2_cell_t_keypad_pane_ParamLimits

0x261b,	// (0x0002873b) vkb2_cell_t_keypad_pane

0x262b,	// (0x0002874b) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x262b,	// (0x0002874b) vkb2_cell_t_keypad_pane_cp08

0x263e,	// (0x0002875e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x263e,	// (0x0002875e) vkb2_cell_t_keypad_pane_cp09

0x2652,	// (0x00028772) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2652,	// (0x00028772) vkb2_cell_t_keypad_pane_cp01

0x2663,	// (0x00028783) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2663,	// (0x00028783) vkb2_cell_t_keypad_pane_cp02

0x2674,	// (0x00028794) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2674,	// (0x00028794) vkb2_cell_t_keypad_pane_cp03

0x2685,	// (0x000287a5) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2685,	// (0x000287a5) vkb2_cell_t_keypad_pane_cp04

0x2696,	// (0x000287b6) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2696,	// (0x000287b6) vkb2_cell_t_keypad_pane_cp05

0x26a7,	// (0x000287c7) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x26a7,	// (0x000287c7) vkb2_cell_t_keypad_pane_cp06

0x26b8,	// (0x000287d8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x26b8,	// (0x000287d8) vkb2_cell_t_keypad_pane_cp07

0x26c9,	// (0x000287e9) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x26c9,	// (0x000287e9) vkb2_cell_t_keypad_pane_cp10

0x53ce,	// (0x0002b4ee) vkb2_cell_t_keypad_pane_g1

0x70a5,	// (0x0002d1c5) vkb2_cell_t_keypad_pane_t1

0xc767,	// (0x00032887) popup_grid_graphic2_window

0xe011,	// (0x00034131) aid_size_cell_graphic2_ParamLimits

0xe011,	// (0x00034131) aid_size_cell_graphic2

0xe04f,	// (0x0003416f) bg_popup_window_pane_cp21_ParamLimits

0xe04f,	// (0x0003416f) bg_popup_window_pane_cp21

0xe05d,	// (0x0003417d) graphic2_pages_pane_ParamLimits

0xe05d,	// (0x0003417d) graphic2_pages_pane

0xe0b3,	// (0x000341d3) grid_graphic2_control_pane_ParamLimits

0xe0b3,	// (0x000341d3) grid_graphic2_control_pane

0xe0fb,	// (0x0003421b) grid_graphic2_pane_ParamLimits

0xe0fb,	// (0x0003421b) grid_graphic2_pane

0xe182,	// (0x000342a2) cell_graphic2_pane

0xc767,	// (0x00032887) main_comp_mode_pane

0x6329,	// (0x0002c449) list_ai3_gene_pane_ParamLimits

0xd924,	// (0x00033a44) bg_popup_window_pane_cp19_ParamLimits

0x6701,	// (0x0002c821) bg_touch_area_indi_pane_ParamLimits

0x6701,	// (0x0002c821) bg_touch_area_indi_pane

0x6717,	// (0x0002c837) bg_touch_area_indi_pane_cp01_ParamLimits

0x6717,	// (0x0002c837) bg_touch_area_indi_pane_cp01

0x672d,	// (0x0002c84d) bg_touch_area_indi_pane_cp02_ParamLimits

0x672d,	// (0x0002c84d) bg_touch_area_indi_pane_cp02

0x6743,	// (0x0002c863) bg_touch_area_indi_pane_cp03_ParamLimits

0x6743,	// (0x0002c863) bg_touch_area_indi_pane_cp03

0x675d,	// (0x0002c87d) popup_slider_window_g1_ParamLimits

0x6779,	// (0x0002c899) popup_slider_window_g2_ParamLimits

0x6795,	// (0x0002c8b5) popup_slider_window_g3_ParamLimits

0xfcd4,	// (0x00035df4) popup_slider_window_g_ParamLimits

0x67fb,	// (0x0002c91b) popup_slider_window_t1_ParamLimits

0x686f,	// (0x0002c98f) small_volume_slider_vertical_pane_ParamLimits

0xe182,	// (0x000342a2) cell_graphic2_pane_ParamLimits

0xe1dd,	// (0x000342fd) bg_button_pane_cp10_ParamLimits

0xe1dd,	// (0x000342fd) bg_button_pane_cp10

0xe1f0,	// (0x00034310) bg_button_pane_cp11_ParamLimits

0xe1f0,	// (0x00034310) bg_button_pane_cp11

0xe203,	// (0x00034323) graphic2_pages_pane_g1_ParamLimits

0xe203,	// (0x00034323) graphic2_pages_pane_g1

0xe21e,	// (0x0003433e) graphic2_pages_pane_g2_ParamLimits

0xe21e,	// (0x0003433e) graphic2_pages_pane_g2

0x0001,

0xfd98,	// (0x00035eb8) graphic2_pages_pane_g_ParamLimits

0xfd98,	// (0x00035eb8) graphic2_pages_pane_g

0xe236,	// (0x00034356) graphic2_pages_pane_t1_ParamLimits

0xe236,	// (0x00034356) graphic2_pages_pane_t1

0xe24e,	// (0x0003436e) cell_graphic2_control_pane_ParamLimits

0xe24e,	// (0x0003436e) cell_graphic2_control_pane

0xe280,	// (0x000343a0) cell_graphic2_pane_g1_ParamLimits

0xe280,	// (0x000343a0) cell_graphic2_pane_g1

0xd189,	// (0x000332a9) cell_graphic2_pane_g2_ParamLimits

0xd189,	// (0x000332a9) cell_graphic2_pane_g2

0xe28d,	// (0x000343ad) cell_graphic2_pane_g3_ParamLimits

0xe28d,	// (0x000343ad) cell_graphic2_pane_g3

0xd196,	// (0x000332b6) cell_graphic2_pane_g4_ParamLimits

0xd196,	// (0x000332b6) cell_graphic2_pane_g4

0xe29a,	// (0x000343ba) cell_graphic2_pane_g5_ParamLimits

0xe29a,	// (0x000343ba) cell_graphic2_pane_g5

0x0004,

0xfd9d,	// (0x00035ebd) cell_graphic2_pane_g_ParamLimits

0xfd9d,	// (0x00035ebd) cell_graphic2_pane_g

0xe2ba,	// (0x000343da) cell_graphic2_pane_t1_ParamLimits

0xe2ba,	// (0x000343da) cell_graphic2_pane_t1

0x3866,	// (0x00029986) grid_highlight_pane_cp11_ParamLimits

0x3866,	// (0x00029986) grid_highlight_pane_cp11

0xc901,	// (0x00032a21) bg_button_pane_cp05

0xe306,	// (0x00034426) cell_graphic2_control_pane_g1

0x515e,	// (0x0002b27e) bg_touch_area_indi_pane_g1

0x7381,	// (0x0002d4a1) aid_cmod_rocker_key_size

0x738b,	// (0x0002d4ab) aid_cmode_itu_key_size

0x7395,	// (0x0002d4b5) main_cmode_video_pane

0x739f,	// (0x0002d4bf) main_comp_mode_itu_pane

0x73ab,	// (0x0002d4cb) main_comp_mode_rocker_pane

0x73b7,	// (0x0002d4d7) cell_cmode_rocker_pane_ParamLimits

0x73b7,	// (0x0002d4d7) cell_cmode_rocker_pane

0x73c9,	// (0x0002d4e9) cell_cmode_itu_pane_ParamLimits

0x73c9,	// (0x0002d4e9) cell_cmode_itu_pane

0xcb89,	// (0x00032ca9) bg_button_pane_cp06_ParamLimits

0xcb89,	// (0x00032ca9) bg_button_pane_cp06

0x53ce,	// (0x0002b4ee) cell_cmode_rocker_pane_g1_ParamLimits

0x53ce,	// (0x0002b4ee) cell_cmode_rocker_pane_g1

0x6913,	// (0x0002ca33) cell_cmode_rocker_pane_g2_ParamLimits

0x6913,	// (0x0002ca33) cell_cmode_rocker_pane_g2

0x0001,

0xfdad,	// (0x00035ecd) cell_cmode_rocker_pane_g_ParamLimits

0xfdad,	// (0x00035ecd) cell_cmode_rocker_pane_g

0xc767,	// (0x00032887) bg_button_pane_cp07

0x73de,	// (0x0002d4fe) cell_cmode_itu_pane_g1

0x73e7,	// (0x0002d507) cell_cmode_itu_pane_t1

0x73f5,	// (0x0002d515) cell_cmode_itu_pane_t2

0x0001,

0xfdb2,	// (0x00035ed2) cell_cmode_itu_pane_t

0x6b38,	// (0x0002cc58) aid_touch_ctrl_left

0x6b40,	// (0x0002cc60) aid_touch_ctrl_right

0xc767,	// (0x00032887) compa_mode_pane

0xe32c,	// (0x0003444c) aid_cmod_rocker_key_size_cp

0xe336,	// (0x00034456) aid_cmode_itu_key_size_cp

0x7417,	// (0x0002d537) compa_mode_pane_g1

0x741f,	// (0x0002d53f) compa_mode_pane_g2

0x7427,	// (0x0002d547) compa_mode_pane_g3

0x0002,

0xfdb7,	// (0x00035ed7) compa_mode_pane_g

0xe340,	// (0x00034460) main_comp_mode_itu_pane_cp

0xe348,	// (0x00034468) main_comp_mode_rocker_pane_cp

0xe350,	// (0x00034470) cell_cmode_itu_pane_cp_ParamLimits

0xe350,	// (0x00034470) cell_cmode_itu_pane_cp

0xe365,	// (0x00034485) cell_cmode_rocker_pane_cp_ParamLimits

0xe365,	// (0x00034485) cell_cmode_rocker_pane_cp

0xcb89,	// (0x00032ca9) bg_button_pane_cp06_cp_ParamLimits

0xcb89,	// (0x00032ca9) bg_button_pane_cp06_cp

0x53ce,	// (0x0002b4ee) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x53ce,	// (0x0002b4ee) cell_cmode_rocker_pane_g1_cp

0x515e,	// (0x0002b27e) cell_cmode_rocker_pane_g2_cp

0xc767,	// (0x00032887) bg_button_pane_cp07_cp

0xe377,	// (0x00034497) cell_cmode_itu_pane_g1_cp

0xe380,	// (0x000344a0) cell_cmode_itu_pane_t1_cp

0xe380,	// (0x000344a0) cell_cmode_itu_pane_t2_cp

0xbaf5,	// (0x00031c15) settings_code_pane_cp2

0xc7d7,	// (0x000328f7) bg_popup_window_pane_cp3_ParamLimits

0xca1a,	// (0x00032b3a) heading_pane_cp3_ParamLimits

0xca26,	// (0x00032b46) listscroll_popup_graphic_pane_ParamLimits

0x1cf2,	// (0x00027e12) fep_hwr_aid_pane_ParamLimits

0x20bb,	// (0x000281db) aid_touch_sctrl_top_ParamLimits

0x20c8,	// (0x000281e8) sctrl_sk_top_pane_g1_ParamLimits

0x53ce,	// (0x0002b4ee) sctrl_sk_top_pane_g2_ParamLimits

0xfced,	// (0x00035e0d) sctrl_sk_top_pane_g_ParamLimits

0x20d5,	// (0x000281f5) sctrl_sk_top_pane_t1_ParamLimits

0x20bb,	// (0x000281db) aid_touch_sctrl_bottom_ParamLimits

0x20d5,	// (0x000281f5) sctrl_sk_bottom_pane_t1_ParamLimits

0xdb41,	// (0x00033c61) aid_area_touch_clock

0xc2d4,	// (0x000323f4) aid_vkb2_area_top_pane_cell_ParamLimits

0xc2d4,	// (0x000323f4) aid_vkb2_area_top_pane_cell

0xc37f,	// (0x0003249f) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc37f,	// (0x0003249f) aid_vkb2_area_bottom_pane_cell

0x6ff0,	// (0x0002d110) popup_char_count_window

0x747d,	// (0x0002d59d) popup_char_count_window_g1

0x7486,	// (0x0002d5a6) popup_char_count_window_g2

0x748f,	// (0x0002d5af) popup_char_count_window_g3

0x0002,

0xfdbe,	// (0x00035ede) popup_char_count_window_g

0x7498,	// (0x0002d5b8) popup_char_count_window_t1

0x2176,	// (0x00028296) popup_fep_char_preview_window_ParamLimits

0x2176,	// (0x00028296) popup_fep_char_preview_window

0xc2f4,	// (0x00032414) vkb2_top_candi_pane_ParamLimits

0xc2f4,	// (0x00032414) vkb2_top_candi_pane

0xe38e,	// (0x000344ae) cell_vkb2_top_candi_pane_ParamLimits

0xe38e,	// (0x000344ae) cell_vkb2_top_candi_pane

0x320a,	// (0x0002932a) bg_popup_fep_char_preview_window_ParamLimits

0x320a,	// (0x0002932a) bg_popup_fep_char_preview_window

0x26de,	// (0x000287fe) popup_fep_char_preview_window_t1_ParamLimits

0x26de,	// (0x000287fe) popup_fep_char_preview_window_t1

0x74f3,	// (0x0002d613) bg_popup_fep_char_preview_window_g1

0x74fb,	// (0x0002d61b) bg_popup_fep_char_preview_window_g2

0x7503,	// (0x0002d623) bg_popup_fep_char_preview_window_g3

0x750b,	// (0x0002d62b) bg_popup_fep_char_preview_window_g4

0x7513,	// (0x0002d633) bg_popup_fep_char_preview_window_g5

0x2718,	// (0x00028838) bg_popup_fep_char_preview_window_g6

0x751b,	// (0x0002d63b) bg_popup_fep_char_preview_window_g7

0x7523,	// (0x0002d643) bg_popup_fep_char_preview_window_g8

0x752b,	// (0x0002d64b) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdc5,	// (0x00035ee5) bg_popup_fep_char_preview_window_g

0x53ce,	// (0x0002b4ee) cell_vkb2_top_candi_pane_g1_ParamLimits

0x53ce,	// (0x0002b4ee) cell_vkb2_top_candi_pane_g1

0x56e5,	// (0x0002b805) cell_vkb2_top_candi_pane_g2_ParamLimits

0x56e5,	// (0x0002b805) cell_vkb2_top_candi_pane_g2

0x5706,	// (0x0002b826) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5706,	// (0x0002b826) cell_vkb2_top_candi_pane_g3

0x2720,	// (0x00028840) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2720,	// (0x00028840) cell_vkb2_top_candi_pane_g4

0x7533,	// (0x0002d653) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7533,	// (0x0002d653) cell_vkb2_top_candi_pane_g5

0x6913,	// (0x0002ca33) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6913,	// (0x0002ca33) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd8,	// (0x00035ef8) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd8,	// (0x00035ef8) cell_vkb2_top_candi_pane_g

0x2741,	// (0x00028861) cell_vkb2_top_candi_pane_t1

0xb915,	// (0x00031a35) aid_size_touch_slider_mark_ParamLimits

0xb915,	// (0x00031a35) aid_size_touch_slider_mark

0xe099,	// (0x000341b9) grid_graphic2_catg_pane_ParamLimits

0xe099,	// (0x000341b9) grid_graphic2_catg_pane

0xe155,	// (0x00034275) popup_grid_graphic2_window_t1_ParamLimits

0xe155,	// (0x00034275) popup_grid_graphic2_window_t1

0xe16b,	// (0x0003428b) popup_grid_graphic2_window_t2_ParamLimits

0xe16b,	// (0x0003428b) popup_grid_graphic2_window_t2

0x0001,

0xfd93,	// (0x00035eb3) popup_grid_graphic2_window_t_ParamLimits

0xfd93,	// (0x00035eb3) popup_grid_graphic2_window_t

0xc901,	// (0x00032a21) bg_button_pane_cp05_ParamLimits

0xe306,	// (0x00034426) cell_graphic2_control_pane_g1_ParamLimits

0xe3f4,	// (0x00034514) cell_graphic2_catg_pane_ParamLimits

0xe3f4,	// (0x00034514) cell_graphic2_catg_pane

0xc767,	// (0x00032887) bg_button_pane_cp12

0xe406,	// (0x00034526) cell_graphic2_catg_pane_g1

0x6a4d,	// (0x0002cb6d) cell_tb_ext_pane_t1_ParamLimits

0x2518,	// (0x00028638) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2518,	// (0x00028638) vkb2_top_cell_right_narrow_pane

0x2530,	// (0x00028650) vkb2_top_cell_right_wide_pane_ParamLimits

0x2530,	// (0x00028650) vkb2_top_cell_right_wide_pane

0x1ce4,	// (0x00027e04) bg_vkb2_func_pane_ParamLimits

0x1ce4,	// (0x00027e04) bg_vkb2_func_pane

0x25a1,	// (0x000286c1) vkb2_top_cell_left_pane_g1_ParamLimits

0x1ce4,	// (0x00027e04) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1ce4,	// (0x00027e04) bg_vkb2_fuc_pane_cp03

0x25ff,	// (0x0002871f) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1810,	// (0x00027930) bg_vkb2_func_pane_g1

0x1818,	// (0x00027938) bg_vkb2_func_pane_g2

0x1828,	// (0x00027948) bg_vkb2_func_pane_g3

0x1820,	// (0x00027940) bg_vkb2_func_pane_g4

0x1830,	// (0x00027950) bg_vkb2_func_pane_g5

0x1838,	// (0x00027958) bg_vkb2_func_pane_g6

0x1840,	// (0x00027960) bg_vkb2_func_pane_g7

0x1848,	// (0x00027968) bg_vkb2_func_pane_g8

0x1808,	// (0x00027928) bg_vkb2_func_pane_g9

0x0008,

0xfde5,	// (0x00035f05) bg_vkb2_func_pane_g

0x1ce4,	// (0x00027e04) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1ce4,	// (0x00027e04) bg_vkb2_fuc_pane_cp01

0x25a1,	// (0x000286c1) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x25a1,	// (0x000286c1) vkb2_top_cell_right_wide_pane_g1

0x1ce4,	// (0x00027e04) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1ce4,	// (0x00027e04) bg_vkb2_fuc_pane_cp02

0x25ff,	// (0x0002871f) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x25ff,	// (0x0002871f) vkb2_top_cell_right_narrow_pane_g1

0xd866,	// (0x00033986) aid_touch_area_decrease_ParamLimits

0xd866,	// (0x00033986) aid_touch_area_decrease

0xd8a0,	// (0x000339c0) aid_touch_area_increase_ParamLimits

0xd8a0,	// (0x000339c0) aid_touch_area_increase

0xd8c8,	// (0x000339e8) aid_touch_area_mute_ParamLimits

0xd8c8,	// (0x000339e8) aid_touch_area_mute

0xd8f0,	// (0x00033a10) aid_touch_area_slider_ParamLimits

0xd8f0,	// (0x00033a10) aid_touch_area_slider

0xd930,	// (0x00033a50) popup_slider_window_g4_ParamLimits

0xd930,	// (0x00033a50) popup_slider_window_g4

0xd958,	// (0x00033a78) popup_slider_window_g5_ParamLimits

0xd958,	// (0x00033a78) popup_slider_window_g5

0xd98c,	// (0x00033aac) popup_slider_window_g6_ParamLimits

0xd98c,	// (0x00033aac) popup_slider_window_g6

0x6829,	// (0x0002c949) popup_slider_window_t2_ParamLimits

0x6829,	// (0x0002c949) popup_slider_window_t2

0x0001,

0xfce1,	// (0x00035e01) popup_slider_window_t_ParamLimits

0xfce1,	// (0x00035e01) popup_slider_window_t

0xd9a8,	// (0x00033ac8) slider_pane_ParamLimits

0xd9a8,	// (0x00033ac8) slider_pane

0x756f,	// (0x0002d68f) slider_pane_g1_ParamLimits

0x756f,	// (0x0002d68f) slider_pane_g1

0x7583,	// (0x0002d6a3) slider_pane_g2_ParamLimits

0x7583,	// (0x0002d6a3) slider_pane_g2

0x7599,	// (0x0002d6b9) slider_pane_g3_ParamLimits

0x7599,	// (0x0002d6b9) slider_pane_g3

0x0003,

0xfdf8,	// (0x00035f18) slider_pane_g_ParamLimits

0xfdf8,	// (0x00035f18) slider_pane_g

0xacb0,	// (0x00030dd0) popup_tb_float_extension_window_ParamLimits

0xacb0,	// (0x00030dd0) popup_tb_float_extension_window

0x75c5,	// (0x0002d6e5) aid_size_cell_tb_float_ext

0xc767,	// (0x00032887) bg_popup_sub_window_cp28

0xe40f,	// (0x0003452f) grid_tb_float_ext_pane

0xe419,	// (0x00034539) cell_tb_float_ext_pane_ParamLimits

0xe419,	// (0x00034539) cell_tb_float_ext_pane

0xe433,	// (0x00034553) cell_tb_float_ext_pane_g1

0xe43c,	// (0x0003455c) grid_highlight_pane_cp12

0xbffe,	// (0x0003211e) cell_last_hwr_side_pane_ParamLimits

0xbffe,	// (0x0003211e) cell_last_hwr_side_pane

0x515e,	// (0x0002b27e) cell_last_hwr_side_pane_g1

0x7607,	// (0x0002d727) cell_last_hwr_side_pane_g2

0x0001,

0xfe01,	// (0x00035f21) cell_last_hwr_side_pane_g

0xc45b,	// (0x0003257b) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc45b,	// (0x0003257b) vkb2_area_bottom_space_btn_pane

0x53ce,	// (0x0002b4ee) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x70a5,	// (0x0002d1c5) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2741,	// (0x00028861) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2760,	// (0x00028880) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2760,	// (0x00028880) vkb2_area_bottom_space_btn_pane_g1

0x279a,	// (0x000288ba) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x279a,	// (0x000288ba) vkb2_area_bottom_space_btn_pane_g2

0x27d0,	// (0x000288f0) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x27d0,	// (0x000288f0) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe06,	// (0x00035f26) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe06,	// (0x00035f26) vkb2_area_bottom_space_btn_pane_g

0x1d99,	// (0x00027eb9) cel_fep_hwr_func_pane_ParamLimits

0x1d99,	// (0x00027eb9) cel_fep_hwr_func_pane

0xbfd3,	// (0x000320f3) cell_hwr_side_button_pane_ParamLimits

0xbfd3,	// (0x000320f3) cell_hwr_side_button_pane

0xdb41,	// (0x00033c61) aid_area_touch_clock_ParamLimits

0xc901,	// (0x00032a21) bg_uniindi_top_pane_ParamLimits

0xdb53,	// (0x00033c73) uniindi_top_pane_g1_ParamLimits

0xdb69,	// (0x00033c89) uniindi_top_pane_g2_ParamLimits

0xdb75,	// (0x00033c95) uniindi_top_pane_g3_ParamLimits

0x6ac7,	// (0x0002cbe7) uniindi_top_pane_g4_ParamLimits

0xfd19,	// (0x00035e39) uniindi_top_pane_g_ParamLimits

0xdb86,	// (0x00033ca6) uniindi_top_pane_t1_ParamLimits

0xc901,	// (0x00032a21) bg_vkb2_func_pane_cp01_ParamLimits

0xc901,	// (0x00032a21) bg_vkb2_func_pane_cp01

0x7610,	// (0x0002d730) cel_fep_hwr_func_pane_g1_ParamLimits

0x7610,	// (0x0002d730) cel_fep_hwr_func_pane_g1

0xc901,	// (0x00032a21) bg_vkb2_func_pane_cp02_ParamLimits

0xc901,	// (0x00032a21) bg_vkb2_func_pane_cp02

0x7610,	// (0x0002d730) cell_hwr_side_button_pane_g1_ParamLimits

0x7610,	// (0x0002d730) cell_hwr_side_button_pane_g1

0x165c,	// (0x0002777c) status_pane_g4_ParamLimits

0x165c,	// (0x0002777c) status_pane_g4

0x1676,	// (0x00027796) status_pane_t1

0x4e99,	// (0x0002afb9) form2_midp_gauge_slider_cont_pane

0x4ea1,	// (0x0002afc1) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbed8,	// (0x00031ff8) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbeea,	// (0x0003200a) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaec,	// (0x00035c0c) form2_midp_gauge_slider_pane_t_ParamLimits

0x4ed7,	// (0x0002aff7) form2_midp_slider_pane_ParamLimits

0x2136,	// (0x00028256) aid_size_cell_func_vkb2_ParamLimits

0x2136,	// (0x00028256) aid_size_cell_func_vkb2

0x75b1,	// (0x0002d6d1) slider_pane_g4_ParamLimits

0x75b1,	// (0x0002d6d1) slider_pane_g4

0xc4bc,	// (0x000325dc) form2_midp_gauge_slider_pane_t2_cp01

0xc4ca,	// (0x000325ea) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc4ca,	// (0x000325ea) form2_midp_gauge_slider_pane_t3_cp01

0x2845,	// (0x00028965) form2_midp_slider_pane_cp01

0xc767,	// (0x00032887) navi_smil_pane

0x7649,	// (0x0002d769) navi_smil_pane_g1

0x7651,	// (0x0002d771) navi_smil_pane_t1

0x761e,	// (0x0002d73e) form2_midp_slider_pane_g1

0x7627,	// (0x0002d747) form2_midp_slider_pane_g2

0x762f,	// (0x0002d74f) form2_midp_slider_pane_g3

0x761e,	// (0x0002d73e) form2_midp_slider_pane_g4

0xe445,	// (0x00034565) form2_midp_slider_pane_g5

0x0004,

0xfe0f,	// (0x00035f2f) form2_midp_slider_pane_g

0x280a,	// (0x0002892a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x280a,	// (0x0002892a) vkb2_area_bottom_space_btn_pane_g4

0xaee8,	// (0x00031008) lc0_navi_pane_ParamLimits

0xaee8,	// (0x00031008) lc0_navi_pane

0xaf52,	// (0x00031072) lc0_stat_indi_pane_ParamLimits

0xaf52,	// (0x00031072) lc0_stat_indi_pane

0xaf67,	// (0x00031087) ls0_title_pane_ParamLimits

0xaf67,	// (0x00031087) ls0_title_pane

0xcb89,	// (0x00032ca9) bg_popup_sub_pane_cp14_ParamLimits

0xdb28,	// (0x00033c48) list_uniindi_pane_ParamLimits

0xdb34,	// (0x00033c54) uniindi_top_pane_ParamLimits

0x6b10,	// (0x0002cc30) list_single_uniindi_pane_g1_ParamLimits

0x6b23,	// (0x0002cc43) list_single_uniindi_pane_t1_ParamLimits

0xc4e7,	// (0x00032607) lc0_stat_clock_pane_ParamLimits

0xc4e7,	// (0x00032607) lc0_stat_clock_pane

0xe450,	// (0x00034570) lc0_stat_indi_pane_g1_ParamLimits

0xe450,	// (0x00034570) lc0_stat_indi_pane_g1

0xe45d,	// (0x0003457d) lc0_stat_indi_pane_g2_ParamLimits

0xe45d,	// (0x0003457d) lc0_stat_indi_pane_g2

0x0001,

0xfe1a,	// (0x00035f3a) lc0_stat_indi_pane_g_ParamLimits

0xfe1a,	// (0x00035f3a) lc0_stat_indi_pane_g

0xc4f7,	// (0x00032617) lc0_uni_indicator_pane_ParamLimits

0xc4f7,	// (0x00032617) lc0_uni_indicator_pane

0xe46a,	// (0x0003458a) ls0_title_pane_g1_ParamLimits

0xe46a,	// (0x0003458a) ls0_title_pane_g1

0xe47e,	// (0x0003459e) ls0_title_pane_t1_ParamLimits

0xe47e,	// (0x0003459e) ls0_title_pane_t1

0xc507,	// (0x00032627) lc0_uni_indicator_pane_g1_ParamLimits

0xc507,	// (0x00032627) lc0_uni_indicator_pane_g1

0x76c3,	// (0x0002d7e3) lc0_stat_clock_pane_t1

0xc767,	// (0x00032887) main_ai5_pane

0x76d1,	// (0x0002d7f1) ai5_sk_pane_ParamLimits

0x76d1,	// (0x0002d7f1) ai5_sk_pane

0xe4ac,	// (0x000345cc) cell_ai5_widget_pane_ParamLimits

0xe4ac,	// (0x000345cc) cell_ai5_widget_pane

0x7790,	// (0x0002d8b0) aid_size_cell_widget_grid

0x779e,	// (0x0002d8be) bg_ai5_widget_pane_ParamLimits

0x779e,	// (0x0002d8be) bg_ai5_widget_pane

0x7816,	// (0x0002d936) cell_ai5_widget_pane_g2

0x782a,	// (0x0002d94a) cell_ai5_widget_pane_g3

0x7844,	// (0x0002d964) cell_ai5_widget_pane_g4

0x7854,	// (0x0002d974) cell_ai5_widget_pane_g5

0x7864,	// (0x0002d984) cell_ai5_widget_pane_g6

0x7870,	// (0x0002d990) cell_ai5_widget_pane_g7

0x78b8,	// (0x0002d9d8) cell_ai5_widget_pane_t1_ParamLimits

0x78b8,	// (0x0002d9d8) cell_ai5_widget_pane_t1

0x78d5,	// (0x0002d9f5) cell_ai5_widget_pane_t2_ParamLimits

0x78d5,	// (0x0002d9f5) cell_ai5_widget_pane_t2

0x78ed,	// (0x0002da0d) cell_ai5_widget_pane_t3_ParamLimits

0x78ed,	// (0x0002da0d) cell_ai5_widget_pane_t3

0x7905,	// (0x0002da25) cell_ai5_widget_pane_t4_ParamLimits

0x7905,	// (0x0002da25) cell_ai5_widget_pane_t4

0x792b,	// (0x0002da4b) cell_ai5_widget_pane_t5_ParamLimits

0x792b,	// (0x0002da4b) cell_ai5_widget_pane_t5

0x794b,	// (0x0002da6b) cell_ai5_widget_pane_t6_ParamLimits

0x794b,	// (0x0002da6b) cell_ai5_widget_pane_t6

0x795d,	// (0x0002da7d) cell_ai5_widget_pane_t7_ParamLimits

0x795d,	// (0x0002da7d) cell_ai5_widget_pane_t7

0x7976,	// (0x0002da96) cell_ai5_widget_pane_t8_ParamLimits

0x7976,	// (0x0002da96) cell_ai5_widget_pane_t8

0x0009,

0xfe34,	// (0x00035f54) cell_ai5_widget_pane_t_ParamLimits

0xfe34,	// (0x00035f54) cell_ai5_widget_pane_t

0x79d5,	// (0x0002daf5) grid_ai5_widget_pane

0xcb89,	// (0x00032ca9) highlight_cell_ai5_widget_pane_ParamLimits

0xcb89,	// (0x00032ca9) highlight_cell_ai5_widget_pane

0xe512,	// (0x00034632) ai5_sk_left_pane

0xe51c,	// (0x0003463c) ai5_sk_middle_pane

0xe526,	// (0x00034646) ai5_sk_right_pane

0x7a01,	// (0x0002db21) bg_ai5_widget_pane_g1_ParamLimits

0x7a01,	// (0x0002db21) bg_ai5_widget_pane_g1

0x7a0d,	// (0x0002db2d) bg_ai5_widget_pane_g2_ParamLimits

0x7a0d,	// (0x0002db2d) bg_ai5_widget_pane_g2

0x7a19,	// (0x0002db39) bg_ai5_widget_pane_g3_ParamLimits

0x7a19,	// (0x0002db39) bg_ai5_widget_pane_g3

0x7a25,	// (0x0002db45) bg_ai5_widget_pane_g4_ParamLimits

0x7a25,	// (0x0002db45) bg_ai5_widget_pane_g4

0x7a31,	// (0x0002db51) bg_ai5_widget_pane_g5_ParamLimits

0x7a31,	// (0x0002db51) bg_ai5_widget_pane_g5

0x7a3d,	// (0x0002db5d) bg_ai5_widget_pane_g6_ParamLimits

0x7a3d,	// (0x0002db5d) bg_ai5_widget_pane_g6

0x7a49,	// (0x0002db69) bg_ai5_widget_pane_g7_ParamLimits

0x7a49,	// (0x0002db69) bg_ai5_widget_pane_g7

0x7a55,	// (0x0002db75) bg_ai5_widget_pane_g8_ParamLimits

0x7a55,	// (0x0002db75) bg_ai5_widget_pane_g8

0x7a61,	// (0x0002db81) bg_ai5_widget_pane_g9_ParamLimits

0x7a61,	// (0x0002db81) bg_ai5_widget_pane_g9

0x0008,

0xfe49,	// (0x00035f69) bg_ai5_widget_pane_g_ParamLimits

0xfe49,	// (0x00035f69) bg_ai5_widget_pane_g

0x7a93,	// (0x0002dbb3) cell_shortcut_ai5_widget_pane_ParamLimits

0x7a93,	// (0x0002dbb3) cell_shortcut_ai5_widget_pane

0x07d7,	// (0x000268f7) bg_cell_shortcut_ai5_widget_pane

0x7aa4,	// (0x0002dbc4) cell_grid_ai5_widget_pane_g1

0x07d7,	// (0x000268f7) highlight_cell_shortcut_ai5_widget_pane

0x1818,	// (0x00027938) ai5_sk_left_pane_g1

0x7aad,	// (0x0002dbcd) ai5_sk_left_pane_g2

0x7ab5,	// (0x0002dbd5) ai5_sk_left_pane_g3

0x7abd,	// (0x0002dbdd) ai5_sk_left_pane_g4

0x0003,

0xfe5c,	// (0x00035f7c) ai5_sk_left_pane_g

0x7ac5,	// (0x0002dbe5) ai5_sk_left_pane_t1

0x1810,	// (0x00027930) ai5_sk_right_pane_g1

0x7ad3,	// (0x0002dbf3) ai5_sk_right_pane_g2

0x7adb,	// (0x0002dbfb) ai5_sk_right_pane_g3

0x7ae3,	// (0x0002dc03) ai5_sk_right_pane_g4

0x0003,

0xfe65,	// (0x00035f85) ai5_sk_right_pane_g

0x7aeb,	// (0x0002dc0b) ai5_sk_right_pane_t1

0x1810,	// (0x00027930) ai5_sk_middle_pane_g1

0x1818,	// (0x00027938) ai5_sk_middle_pane_g2

0x1830,	// (0x00027950) ai5_sk_middle_pane_g3

0x7adb,	// (0x0002dbfb) ai5_sk_middle_pane_g4

0x7ab5,	// (0x0002dbd5) ai5_sk_middle_pane_g5

0x7af9,	// (0x0002dc19) ai5_sk_middle_pane_g6

0xe530,	// (0x00034650) ai5_sk_middle_pane_g7

0x0006,

0xfe6e,	// (0x00035f8e) ai5_sk_middle_pane_g

0xadd4,	// (0x00030ef4) aid_touch_area_size_lc0_ParamLimits

0xadd4,	// (0x00030ef4) aid_touch_area_size_lc0

0x1f24,	// (0x00028044) cell_hwr_candidate_pane_t1_ParamLimits

0x132d,	// (0x0002744d) aid_touch_navi_pane

0xb060,	// (0x00031180) status_dt_navi_pane_ParamLimits

0xb060,	// (0x00031180) status_dt_navi_pane

0xb078,	// (0x00031198) status_dt_sta_pane_ParamLimits

0xb078,	// (0x00031198) status_dt_sta_pane

0xe538,	// (0x00034658) dt_sta_controll_pane

0xe545,	// (0x00034665) dt_sta_indi_pane

0xe552,	// (0x00034672) dt_sta_title_pane

0xc901,	// (0x00032a21) bg_dt_sta_indi_pane_ParamLimits

0xc901,	// (0x00032a21) bg_dt_sta_indi_pane

0xe564,	// (0x00034684) dt_sta_battery_pane

0xe56c,	// (0x0003468c) dt_sta_indi_pane_g1

0x7b4b,	// (0x0002dc6b) dt_sta_indi_pane_g2

0x7b54,	// (0x0002dc74) dt_sta_indi_pane_g3

0x0002,

0xfe7d,	// (0x00035f9d) dt_sta_indi_pane_g

0x7b5d,	// (0x0002dc7d) dt_sta_signal_pane

0xcb89,	// (0x00032ca9) bg_dt_sta_title_pane_ParamLimits

0xcb89,	// (0x00032ca9) bg_dt_sta_title_pane

0x39c6,	// (0x00029ae6) dt_sta_title_pane_g1

0xe575,	// (0x00034695) dt_sta_title_pane_t1_ParamLimits

0xe575,	// (0x00034695) dt_sta_title_pane_t1

0xc767,	// (0x00032887) bg_dt_sta_control_pane

0xe58a,	// (0x000346aa) dt_sta_controll_pane_g1

0xe593,	// (0x000346b3) bg_dt_sta_title_pane_g1

0xe59c,	// (0x000346bc) bg_dt_sta_title_pane_g2

0xe5a5,	// (0x000346c5) bg_dt_sta_title_pane_g3

0x0002,

0xfe84,	// (0x00035fa4) bg_dt_sta_title_pane_g

0x515e,	// (0x0002b27e) bg_dt_sta_indi_pane_g1

0x7b9f,	// (0x0002dcbf) dt_sta_signal_pane_g1

0x7ba7,	// (0x0002dcc7) dt_sta_signal_pane_g2

0x0001,

0xfe8b,	// (0x00035fab) dt_sta_signal_pane_g

0x7baf,	// (0x0002dccf) dt_sta_battery_pane_g1

0x7bb8,	// (0x0002dcd8) dt_sta_battery_pane_t1

0x515e,	// (0x0002b27e) bg_dt_sta_control_pane_g1

0xd03f,	// (0x0003315f) fep_china_uni_eep_pane

0xd047,	// (0x00033167) fep_china_uni_entry_pane_ParamLimits

0xd057,	// (0x00033177) popup_fep_china_uni_window_g1_ParamLimits

0xd067,	// (0x00033187) popup_fep_china_uni_window_g2_ParamLimits

0xd067,	// (0x00033187) popup_fep_china_uni_window_g2

0x0001,

0xf70e,	// (0x0003582e) popup_fep_china_uni_window_g_ParamLimits

0xf70e,	// (0x0003582e) popup_fep_china_uni_window_g

0x7bc7,	// (0x0002dce7) fep_china_uni_eep_pane_g1

0x7bcf,	// (0x0002dcef) fep_china_uni_eep_pane_t1

0x7640,	// (0x0002d760) aid_touch_area_size_smil_player

0x1483,	// (0x000275a3) lc0_clock_pane

0x166a,	// (0x0002778a) status_pane_g5_ParamLimits

0x166a,	// (0x0002778a) status_pane_g5

0xa7e6,	// (0x00030906) popup_keymap_window

0x1628,	// (0x00027748) status_icon_pane

0x782a,	// (0x0002d94a) cell_ai5_widget_pane_g3_ParamLimits

0x7844,	// (0x0002d964) cell_ai5_widget_pane_g4_ParamLimits

0x7854,	// (0x0002d974) cell_ai5_widget_pane_g5_ParamLimits

0x787c,	// (0x0002d99c) cell_ai5_widget_pane_g8_ParamLimits

0x787c,	// (0x0002d99c) cell_ai5_widget_pane_g8

0x7890,	// (0x0002d9b0) cell_ai5_widget_pane_g9_ParamLimits

0x7890,	// (0x0002d9b0) cell_ai5_widget_pane_g9

0x78a4,	// (0x0002d9c4) cell_ai5_widget_pane_g10_ParamLimits

0x78a4,	// (0x0002d9c4) cell_ai5_widget_pane_g10

0x7bde,	// (0x0002dcfe) status_icon_pane_g1

0xc767,	// (0x00032887) bg_popup_sub_pane_cp13

0x7be6,	// (0x0002dd06) popup_keymap_window_t1

0xa4c2,	// (0x000305e2) control_pane_g6_ParamLimits

0xa4c2,	// (0x000305e2) control_pane_g6

0xa4cf,	// (0x000305ef) control_pane_g7_ParamLimits

0xa4cf,	// (0x000305ef) control_pane_g7

0xa4dc,	// (0x000305fc) control_pane_g8_ParamLimits

0xa4dc,	// (0x000305fc) control_pane_g8

0xe538,	// (0x00034658) dt_sta_controll_pane_ParamLimits

0xe545,	// (0x00034665) dt_sta_indi_pane_ParamLimits

0xe552,	// (0x00034672) dt_sta_title_pane_ParamLimits

0xcad4,	// (0x00032bf4) aid_size_touch_scroll_bar_cale

0x972e,	// (0x0002f84e) popup_discreet_window_ParamLimits

0x972e,	// (0x0002f84e) popup_discreet_window

0x9780,	// (0x0002f8a0) popup_sk_window

0x320a,	// (0x0002932a) bg_popup_sub_pane_cp28_ParamLimits

0x320a,	// (0x0002932a) bg_popup_sub_pane_cp28

0x7bf4,	// (0x0002dd14) popup_discreet_window_g1_ParamLimits

0x7bf4,	// (0x0002dd14) popup_discreet_window_g1

0xe5ae,	// (0x000346ce) popup_discreet_window_t1_ParamLimits

0xe5ae,	// (0x000346ce) popup_discreet_window_t1

0x7c32,	// (0x0002dd52) popup_discreet_window_t2_ParamLimits

0x7c32,	// (0x0002dd52) popup_discreet_window_t2

0x0002,

0xfe90,	// (0x00035fb0) popup_discreet_window_t_ParamLimits

0xfe90,	// (0x00035fb0) popup_discreet_window_t

0x287c,	// (0x0002899c) popup_sk_window_g1

0x2886,	// (0x000289a6) popup_sk_window_g2

0x0001,

0xfe97,	// (0x00035fb7) popup_sk_window_g

0xc532,	// (0x00032652) popup_sk_window_t1

0xc540,	// (0x00032660) popup_sk_window_t1_copy1

0x7816,	// (0x0002d936) cell_ai5_widget_pane_g2_ParamLimits

0x7988,	// (0x0002daa8) cell_ai5_widget_pane_t9_ParamLimits

0x7988,	// (0x0002daa8) cell_ai5_widget_pane_t9

0xc767,	// (0x00032887) main_fep_fshwr2_pane

0xc54e,	// (0x0003266e) aid_fshwr2_btn_pane

0xc560,	// (0x00032680) aid_fshwr2_syb_pane

0xc572,	// (0x00032692) aid_fshwr2_txt_pane

0xc581,	// (0x000326a1) fshwr2_func_candi_pane

0xc5a0,	// (0x000326c0) fshwr2_hwr_syb_pane

0xc5bb,	// (0x000326db) fshwr2_icf_pane

0xc767,	// (0x00032887) fshwr2_icf_bg_pane

0x292b,	// (0x00028a4b) fshwr2_icf_pane_t1_ParamLimits

0x292b,	// (0x00028a4b) fshwr2_icf_pane_t1

0xcfbc,	// (0x000330dc) fshwr2_func_candi_pane_g1

0xe5cc,	// (0x000346ec) fshwr2_func_candi_row_pane_ParamLimits

0xe5cc,	// (0x000346ec) fshwr2_func_candi_row_pane

0xc5e7,	// (0x00032707) cell_fshwr2_syb_pane_ParamLimits

0xc5e7,	// (0x00032707) cell_fshwr2_syb_pane

0x53ce,	// (0x0002b4ee) fshwr2_hwr_syb_pane_g1_ParamLimits

0x53ce,	// (0x0002b4ee) fshwr2_hwr_syb_pane_g1

0xc767,	// (0x00032887) bg_popup_call_pane_cp01

0xc5fd,	// (0x0003271d) fshwr2_func_candi_cell_pane_ParamLimits

0xc5fd,	// (0x0003271d) fshwr2_func_candi_cell_pane

0x2ff3,	// (0x00029113) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x2ff3,	// (0x00029113) fshwr2_func_candi_cell_bg_pane

0xc648,	// (0x00032768) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc648,	// (0x00032768) fshwr2_func_candi_cell_pane_g1

0xc67f,	// (0x0003279f) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc67f,	// (0x0003279f) fshwr2_func_candi_cell_pane_t1

0xc767,	// (0x00032887) bg_button_pane_cp08

0x7c94,	// (0x0002ddb4) cell_fshwr2_syb_bg_pane

0xc69a,	// (0x000327ba) cell_fshwr2_syb_bg_pane_g1

0xc6a2,	// (0x000327c2) cell_fshwr2_syb_bg_pane_t1

0xcb89,	// (0x00032ca9) main_tmo_pane

0xb7eb,	// (0x0003190b) uni_indicator_pane_g1_ParamLimits

0xb801,	// (0x00031921) uni_indicator_pane_g2_ParamLimits

0xb817,	// (0x00031937) uni_indicator_pane_g3_ParamLimits

0x3d33,	// (0x00029e53) uni_indicator_pane_g4_ParamLimits

0x3d33,	// (0x00029e53) uni_indicator_pane_g4

0x3d47,	// (0x00029e67) uni_indicator_pane_g5_ParamLimits

0x3d47,	// (0x00029e67) uni_indicator_pane_g5

0x3d47,	// (0x00029e67) uni_indicator_pane_g6_ParamLimits

0x3d47,	// (0x00029e67) uni_indicator_pane_g6

0xf906,	// (0x00035a26) uni_indicator_pane_g_ParamLimits

0xd848,	// (0x00033968) popup_tmo_note_window_ParamLimits

0xd848,	// (0x00033968) popup_tmo_note_window

0xcb89,	// (0x00032ca9) fshwr2_bg_pane

0xc670,	// (0x00032790) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc670,	// (0x00032790) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9c,	// (0x00035fbc) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9c,	// (0x00035fbc) fshwr2_func_candi_cell_pane_g

0x515e,	// (0x0002b27e) bg_popup_window_pane_cp01

0x29f7,	// (0x00028b17) bg_popup_window_pane_g1_cp01

0x7c9c,	// (0x0002ddbc) bg_popup_window_pane_cp22_ParamLimits

0x7c9c,	// (0x0002ddbc) bg_popup_window_pane_cp22

0xe5ef,	// (0x0003470f) listscroll_tmo_link_pane_ParamLimits

0xe5ef,	// (0x0003470f) listscroll_tmo_link_pane

0x7cea,	// (0x0002de0a) popup_tmo_note_window_g1_ParamLimits

0x7cea,	// (0x0002de0a) popup_tmo_note_window_g1

0xe62f,	// (0x0003474f) tmo_note_info_pane_ParamLimits

0xe62f,	// (0x0003474f) tmo_note_info_pane

0xe649,	// (0x00034769) list_tmo_note_info_pane_g1_ParamLimits

0xe649,	// (0x00034769) list_tmo_note_info_pane_g1

0x7d28,	// (0x0002de48) list_tmo_note_info_pane_g2_ParamLimits

0x7d28,	// (0x0002de48) list_tmo_note_info_pane_g2

0x0001,

0xfea1,	// (0x00035fc1) list_tmo_note_info_pane_g_ParamLimits

0xfea1,	// (0x00035fc1) list_tmo_note_info_pane_g

0x7d44,	// (0x0002de64) list_tmo_note_info_text_pane_ParamLimits

0x7d44,	// (0x0002de64) list_tmo_note_info_text_pane

0x7dc5,	// (0x0002dee5) list_tmo_link_pane

0x7dd2,	// (0x0002def2) scroll_pane_cp20

0x7ddf,	// (0x0002deff) list_single_tmo_link_pane_ParamLimits

0x7ddf,	// (0x0002deff) list_single_tmo_link_pane

0x7def,	// (0x0002df0f) list_single_tmo_link_pane_t1

0x7dfd,	// (0x0002df1d) list_tmo_note_info_text_pane_t1_ParamLimits

0x7dfd,	// (0x0002df1d) list_tmo_note_info_text_pane_t1

0x9ea2,	// (0x0002ffc2) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9ea2,	// (0x0002ffc2) aid_size_touch_scroll_bar_cp01

0x925f,	// (0x0002f37f) aid_size_touch_slider_marker

0x9770,	// (0x0002f890) popup_settings_window_ParamLimits

0x9770,	// (0x0002f890) popup_settings_window

0xeb33,	// (0x00034c53) popup_candi_list_indi_window

0x132d,	// (0x0002744d) aid_touch_navi_pane_ParamLimits

0x208f,	// (0x000281af) rs_clock_indi_pane

0x2098,	// (0x000281b8) sctrl_sk_bottom_pane_ParamLimits

0x20a9,	// (0x000281c9) sctrl_sk_top_pane_ParamLimits

0xc198,	// (0x000322b8) popup_fep_tooltip_window

0x7790,	// (0x0002d8b0) aid_size_cell_widget_grid_ParamLimits

0x7801,	// (0x0002d921) cell_ai5_widget_pane_g1_ParamLimits

0x7801,	// (0x0002d921) cell_ai5_widget_pane_g1

0x7864,	// (0x0002d984) cell_ai5_widget_pane_g6_ParamLimits

0x7870,	// (0x0002d990) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe1f,	// (0x00035f3f) cell_ai5_widget_pane_g_ParamLimits

0xfe1f,	// (0x00035f3f) cell_ai5_widget_pane_g

0x79b7,	// (0x0002dad7) cell_ai5_widget_pane_t10_ParamLimits

0x79b7,	// (0x0002dad7) cell_ai5_widget_pane_t10

0x79d5,	// (0x0002daf5) grid_ai5_widget_pane_ParamLimits

0x7a6d,	// (0x0002db8d) cell_contacts_ai5_widget_pane_ParamLimits

0x7a6d,	// (0x0002db8d) cell_contacts_ai5_widget_pane

0x7c47,	// (0x0002dd67) popup_discreet_window_t3_ParamLimits

0x7c47,	// (0x0002dd67) popup_discreet_window_t3

0xc5d3,	// (0x000326f3) popup_fshwr2_char_preview_window_ParamLimits

0xc5d3,	// (0x000326f3) popup_fshwr2_char_preview_window

0xe660,	// (0x00034780) tmo_note_info_pane_t1

0xe675,	// (0x00034795) tmo_note_info_pane_t2

0xe68c,	// (0x000347ac) tmo_note_info_pane_t3

0x7da1,	// (0x0002dec1) tmo_note_info_pane_t4

0x7db3,	// (0x0002ded3) tmo_note_info_pane_t5

0x0004,

0xfea6,	// (0x00035fc6) tmo_note_info_pane_t

0x7dc5,	// (0x0002dee5) list_tmo_link_pane_ParamLimits

0x7dd2,	// (0x0002def2) scroll_pane_cp20_ParamLimits

0xc767,	// (0x00032887) bg_popup_fep_char_preview_window_cp01

0xe6a1,	// (0x000347c1) popup_fshwr2_char_preview_window_t1

0x7e24,	// (0x0002df44) popup_candi_list_indi_window_g1

0x7e2d,	// (0x0002df4d) bg_cell_contacts_ai5_widget_pane

0x7e39,	// (0x0002df59) cell_contacts_ai5_widget_pane_g1

0x5851,	// (0x0002b971) cell_contacts_ai5_widget_pane_g2

0x7e4e,	// (0x0002df6e) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb1,	// (0x00035fd1) cell_contacts_ai5_widget_pane_g

0x7e5a,	// (0x0002df7a) cell_contacts_ai5_widget_pane_t1

0xcb89,	// (0x00032ca9) highlight_cell_shortcut_ai5_widget_pane_cp01

0x7ed1,	// (0x0002dff1) settings_container_pane

0x07d7,	// (0x000268f7) listscroll_set_pane_copy1

0x4860,	// (0x0002a980) scroll_pane_cp121_copy1

0x2fb7,	// (0x000290d7) set_content_pane_copy1

0xe714,	// (0x00034834) aid_height_set_list_copy1_ParamLimits

0xe714,	// (0x00034834) aid_height_set_list_copy1

0x3f3f,	// (0x0002a05f) aid_size_parent_copy1_ParamLimits

0x3f3f,	// (0x0002a05f) aid_size_parent_copy1

0xe720,	// (0x00034840) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe720,	// (0x00034840) button_value_adjust_pane_cp6_copy1

0x0d0e,	// (0x00026e2e) list_highlight_pane_cp2_copy1_ParamLimits

0x0d0e,	// (0x00026e2e) list_highlight_pane_cp2_copy1

0xe734,	// (0x00034854) list_set_pane_copy1_ParamLimits

0xe734,	// (0x00034854) list_set_pane_copy1

0xe6af,	// (0x000347cf) main_pane_set_t1_copy1_ParamLimits

0xe6af,	// (0x000347cf) main_pane_set_t1_copy1

0xe6e9,	// (0x00034809) main_pane_set_t2_copy1_ParamLimits

0xe6e9,	// (0x00034809) main_pane_set_t2_copy1

0xe7e1,	// (0x00034901) main_pane_set_t3_copy1

0xe7ef,	// (0x0003490f) main_pane_set_t4_copy1

0xe708,	// (0x00034828) set_content_pane_g1_copy1_ParamLimits

0xe708,	// (0x00034828) set_content_pane_g1_copy1

0xe7fd,	// (0x0003491d) setting_code_pane_copy1

0x7fce,	// (0x0002e0ee) setting_slider_graphic_pane_copy1

0x7fce,	// (0x0002e0ee) setting_slider_pane_copy1

0x7fce,	// (0x0002e0ee) setting_text_pane_copy1

0x7fce,	// (0x0002e0ee) setting_volume_pane_copy1

0xe7fd,	// (0x0003491d) settings_code_pane_cp2_copy1

0xe805,	// (0x00034925) settings_code_pane_cp_copy1_ParamLimits

0xe805,	// (0x00034925) settings_code_pane_cp_copy1

0xc6b1,	// (0x000327d1) volume_set_pane_copy1

0xe819,	// (0x00034939) volume_set_pane_g10_copy1

0xe821,	// (0x00034941) volume_set_pane_g1_copy1

0xe829,	// (0x00034949) volume_set_pane_g2_copy1

0xe831,	// (0x00034951) volume_set_pane_g3_copy1

0xe839,	// (0x00034959) volume_set_pane_g4_copy1

0xe841,	// (0x00034961) volume_set_pane_g5_copy1

0xe849,	// (0x00034969) volume_set_pane_g6_copy1

0xe851,	// (0x00034971) volume_set_pane_g7_copy1

0xe859,	// (0x00034979) volume_set_pane_g8_copy1

0xe861,	// (0x00034981) volume_set_pane_g9_copy1

0xc7d7,	// (0x000328f7) bg_set_opt_pane_cp_copy1_ParamLimits

0xc7d7,	// (0x000328f7) bg_set_opt_pane_cp_copy1

0xc6b9,	// (0x000327d9) setting_slider_pane_t1_copy1_ParamLimits

0xc6b9,	// (0x000327d9) setting_slider_pane_t1_copy1

0xc6d7,	// (0x000327f7) setting_slider_pane_t2_copy1_ParamLimits

0xc6d7,	// (0x000327f7) setting_slider_pane_t2_copy1

0xc6f1,	// (0x00032811) setting_slider_pane_t3_copy1_ParamLimits

0xc6f1,	// (0x00032811) setting_slider_pane_t3_copy1

0xc709,	// (0x00032829) slider_set_pane_copy1_ParamLimits

0xc709,	// (0x00032829) slider_set_pane_copy1

0xcbe1,	// (0x00032d01) set_opt_bg_pane_g1_copy2

0xcbe9,	// (0x00032d09) set_opt_bg_pane_g2_copy2

0x803a,	// (0x0002e15a) set_opt_bg_pane_g3_copy2

0xcbf9,	// (0x00032d19) set_opt_bg_pane_g4_copy2

0xcc01,	// (0x00032d21) set_opt_bg_pane_g5_copy2

0xcc09,	// (0x00032d29) set_opt_bg_pane_g6_copy2

0xe869,	// (0x00034989) set_opt_bg_pane_g7_copy2

0x804c,	// (0x0002e16c) set_opt_bg_pane_g8_copy2

0x8056,	// (0x0002e176) set_opt_bg_pane_g9_copy2

0xc71f,	// (0x0003283f) aid_size_touch_slider_mark_copy1_ParamLimits

0xc71f,	// (0x0003283f) aid_size_touch_slider_mark_copy1

0xe871,	// (0x00034991) slider_set_pane_g1_copy1

0x2a82,	// (0x00028ba2) slider_set_pane_g2_copy1

0xb936,	// (0x00031a56) slider_set_pane_g3_copy1_ParamLimits

0xb936,	// (0x00031a56) slider_set_pane_g3_copy1

0xb94a,	// (0x00031a6a) slider_set_pane_g4_copy1_ParamLimits

0xb94a,	// (0x00031a6a) slider_set_pane_g4_copy1

0xb962,	// (0x00031a82) slider_set_pane_g5_copy1_ParamLimits

0xb962,	// (0x00031a82) slider_set_pane_g5_copy1

0xb936,	// (0x00031a56) slider_set_pane_g6_copy1_ParamLimits

0xb936,	// (0x00031a56) slider_set_pane_g6_copy1

0xc733,	// (0x00032853) slider_set_pane_g7_copy1_ParamLimits

0xc733,	// (0x00032853) slider_set_pane_g7_copy1

0xc77b,	// (0x0003289b) bg_set_opt_pane_cp2_copy1

0xe87a,	// (0x0003499a) setting_slider_graphic_pane_g1_copy1

0xe883,	// (0x000349a3) setting_slider_graphic_pane_t1_copy1

0xe893,	// (0x000349b3) setting_slider_graphic_pane_t2_copy1

0xe8a3,	// (0x000349c3) slider_set_pane_cp_copy1

0x80a2,	// (0x0002e1c2) input_focus_pane_cp1_copy1

0x80ab,	// (0x0002e1cb) list_set_text_pane_copy1

0x80b3,	// (0x0002e1d3) setting_text_pane_g1_copy1

0xf239,	// (0x00035359) set_text_pane_t1_copy1

0x80a2,	// (0x0002e1c2) input_focus_pane_cp2_copy1

0x80b3,	// (0x0002e1d3) setting_code_pane_g1_copy1

0x80bc,	// (0x0002e1dc) setting_code_pane_t1_copy1

0x80ca,	// (0x0002e1ea) list_set_graphic_pane_copy1

0xc77b,	// (0x0003289b) bg_set_opt_pane_cp4_copy1

0x04e2,	// (0x00026602) list_set_graphic_pane_g1_copy1_ParamLimits

0x04e2,	// (0x00026602) list_set_graphic_pane_g1_copy1

0x80de,	// (0x0002e1fe) list_set_graphic_pane_g2_copy1

0x04fa,	// (0x0002661a) list_set_graphic_pane_t1_copy1_ParamLimits

0x04fa,	// (0x0002661a) list_set_graphic_pane_t1_copy1

0x515e,	// (0x0002b27e) rs_clock_indi_pane_g1

0x80e6,	// (0x0002e206) rs_clock_indi_pane_t1

0x80f4,	// (0x0002e214) rs_indi_pane

0x80fc,	// (0x0002e21c) rs_indi_pane_g1

0x8105,	// (0x0002e225) rs_indi_pane_g2

0x7e24,	// (0x0002df44) rs_indi_pane_g3

0x0002,

0xfeb8,	// (0x00035fd8) rs_indi_pane_g

0x07d7,	// (0x000268f7) bg_popup_preview_window_pane_cp03

0x810e,	// (0x0002e22e) popup_fep_tooltip_window_t1

0xd4ed,	// (0x0003360d) popup_note2_window_g2_ParamLimits

0xd4ed,	// (0x0003360d) popup_note2_window_g2

0x0001,

0xfc58,	// (0x00035d78) popup_note2_window_g_ParamLimits

0xfc58,	// (0x00035d78) popup_note2_window_g

0x62ef,	// (0x0002c40f) bg_popup_sub_pane_cp11_ParamLimits

0x62fc,	// (0x0002c41c) cell_ai3_links_pane_g1_ParamLimits

0x6313,	// (0x0002c433) cell_ai3_links_pane_t1

0xf239,	// (0x00035359) set_text_pane_t1_copy1_ParamLimits

0x06e8,	// (0x00026808) cell_graphic_popup_pane_cp2_ParamLimits

0x06e8,	// (0x00026808) cell_graphic_popup_pane_cp2

0xe8b3,	// (0x000349d3) cell_graphic_popup_pane_g1_cp2

0xca57,	// (0x00032b77) cell_graphic_popup_pane_g2_cp2

0x8124,	// (0x0002e244) cell_graphic_popup_pane_g3_cp2

0xe8bb,	// (0x000349db) cell_graphic_popup_pane_t2_cp2

0xca68,	// (0x00032b88) grid_highlight_pane_cp3_cp2

0xce39,	// (0x00032f59) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xcb89,	// (0x00032ca9) main_tmo_pane_ParamLimits

0xd83c,	// (0x0003395c) popup_tmo_big_image_note_window

0x77f0,	// (0x0002d910) cell_ai5_widget_list_pane

0x77f8,	// (0x0002d918) cell_ai5_widget_lrg_icon_pane

0xe660,	// (0x00034780) tmo_note_info_pane_t1_ParamLimits

0xe675,	// (0x00034795) tmo_note_info_pane_t2_ParamLimits

0xe68c,	// (0x000347ac) tmo_note_info_pane_t3_ParamLimits

0x7da1,	// (0x0002dec1) tmo_note_info_pane_t4_ParamLimits

0x7db3,	// (0x0002ded3) tmo_note_info_pane_t5_ParamLimits

0xfea6,	// (0x00035fc6) tmo_note_info_pane_t_ParamLimits

0x7ed1,	// (0x0002dff1) settings_container_pane_ParamLimits

0xe8ab,	// (0x000349cb) indicator_popup_pane_cp5

0xe8ab,	// (0x000349cb) indicator_popup_pane_cp6

0x80ca,	// (0x0002e1ea) list_set_graphic_pane_copy1_ParamLimits

0xc767,	// (0x00032887) bg_popup_window_pane_cp23

0x813a,	// (0x0002e25a) popup_tmo_big_image_note_window_g1

0x8143,	// (0x0002e263) popup_tmo_big_image_note_window_t1

0x8153,	// (0x0002e273) popup_tmo_big_image_note_window_t2

0x8163,	// (0x0002e283) popup_tmo_big_image_note_window_t3

0x0002,

0xfebf,	// (0x00035fdf) popup_tmo_big_image_note_window_t

0x515e,	// (0x0002b27e) cell_ai5_widget_lrg_icon_pane_g1

0x8173,	// (0x0002e293) cell_ai5_widget_lrg_icon_pane_t1

0x8181,	// (0x0002e2a1) cell_ai5_widget_list_row_pane_ParamLimits

0x8181,	// (0x0002e2a1) cell_ai5_widget_list_row_pane

0x8198,	// (0x0002e2b8) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x8198,	// (0x0002e2b8) cell_ai5_widget_list_row_pane_g1

0xe8c9,	// (0x000349e9) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe8c9,	// (0x000349e9) cell_ai5_widget_list_row_pane_t1

0x81d0,	// (0x0002e2f0) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x81d0,	// (0x0002e2f0) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec6,	// (0x00035fe6) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec6,	// (0x00035fe6) cell_ai5_widget_list_row_pane_t

0xc767,	// (0x00032887) main_fep_vtchi_ss_pane

0x8218,	// (0x0002e338) popup_fep_char_pre_window

0x8220,	// (0x0002e340) popup_fep_ituss_window

0xe90d,	// (0x00034a2d) popup_fep_vkbss_window

0xe91a,	// (0x00034a3a) grid_vkbss_keypad_pane_ParamLimits

0xe91a,	// (0x00034a3a) grid_vkbss_keypad_pane

0x827b,	// (0x0002e39b) ituss_keypad_pane

0x2aac,	// (0x00028bcc) aid_vkbss_key_offset_ParamLimits

0x2aac,	// (0x00028bcc) aid_vkbss_key_offset

0xc749,	// (0x00032869) cell_vkbss_key_pane_ParamLimits

0xc749,	// (0x00032869) cell_vkbss_key_pane

0x1644,	// (0x00027764) bg_cell_vkbss_key_g1_ParamLimits

0x1644,	// (0x00027764) bg_cell_vkbss_key_g1

0xe92a,	// (0x00034a4a) cell_vkbss_key_3p_pane_ParamLimits

0xe92a,	// (0x00034a4a) cell_vkbss_key_3p_pane

0xe944,	// (0x00034a64) cell_vkbss_key_g1_ParamLimits

0xe944,	// (0x00034a64) cell_vkbss_key_g1

0xe95e,	// (0x00034a7e) cell_vkbss_key_t1_ParamLimits

0xe95e,	// (0x00034a7e) cell_vkbss_key_t1

0x2ace,	// (0x00028bee) cell_ituss_key_pane_ParamLimits

0x2ace,	// (0x00028bee) cell_ituss_key_pane

0x82dd,	// (0x0002e3fd) bg_cell_ituss_key_g1_ParamLimits

0x82dd,	// (0x0002e3fd) bg_cell_ituss_key_g1

0x82e9,	// (0x0002e409) cell_ituss_key_pane_g1_ParamLimits

0x82e9,	// (0x0002e409) cell_ituss_key_pane_g1

0x2adf,	// (0x00028bff) cell_ituss_key_pane_g2_ParamLimits

0x2adf,	// (0x00028bff) cell_ituss_key_pane_g2

0x0002,

0xfecd,	// (0x00035fed) cell_ituss_key_pane_g_ParamLimits

0xfecd,	// (0x00035fed) cell_ituss_key_pane_g

0x2b0b,	// (0x00028c2b) cell_ituss_key_t1_ParamLimits

0x2b0b,	// (0x00028c2b) cell_ituss_key_t1

0x2b45,	// (0x00028c65) cell_ituss_key_t2_ParamLimits

0x2b45,	// (0x00028c65) cell_ituss_key_t2

0x2b76,	// (0x00028c96) cell_ituss_key_t3_ParamLimits

0x2b76,	// (0x00028c96) cell_ituss_key_t3

0x2b45,	// (0x00028c65) cell_ituss_key_t4_ParamLimits

0x2b45,	// (0x00028c65) cell_ituss_key_t4

0x0004,

0xfed4,	// (0x00035ff4) cell_ituss_key_t_ParamLimits

0xfed4,	// (0x00035ff4) cell_ituss_key_t

0x830f,	// (0x0002e42f) cell_vkbss_key_3p_pane_g1

0x8317,	// (0x0002e437) cell_vkbss_key_3p_pane_g2

0x831f,	// (0x0002e43f) cell_vkbss_key_3p_pane_g3

0x0002,

0xfedf,	// (0x00035fff) cell_vkbss_key_3p_pane_g

0x07d7,	// (0x000268f7) bg_popup_fep_char_preview_window_cp02

0x8327,	// (0x0002e447) popup_fep_char_pre_window_t1

0xe508,	// (0x00034628) main_ai5_sk_pane

0x7e2d,	// (0x0002df4d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7e39,	// (0x0002df59) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x5851,	// (0x0002b971) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7e4e,	// (0x0002df6e) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb1,	// (0x00035fd1) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7e5a,	// (0x0002df7a) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xcb89,	// (0x00032ca9) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe989,	// (0x00034aa9) main_ai5_sk_pane_g1

0xb43c,	// (0x0003155c) popup_query_code_window_g1

0x8236,	// (0x0002e356) popup_fep_vkb_icf_pane

0x8255,	// (0x0002e375) popup_fep_vtchi_icf_pane

0x833e,	// (0x0002e45e) bg_icf_pane

0x834a,	// (0x0002e46a) list_vkb_icf_pane

0x8359,	// (0x0002e479) bg_icf_pane_cp01

0x836c,	// (0x0002e48c) vtchi_icf_list_pane

0x837c,	// (0x0002e49c) list_vkb_icf_pane_t1_ParamLimits

0x837c,	// (0x0002e49c) list_vkb_icf_pane_t1

0x8393,	// (0x0002e4b3) vtchi_icf_list_pane_t1_ParamLimits

0x8393,	// (0x0002e4b3) vtchi_icf_list_pane_t1

0x8220,	// (0x0002e340) popup_fep_ituss_window_ParamLimits

0x8255,	// (0x0002e375) popup_fep_vtchi_icf_pane_ParamLimits

0x827b,	// (0x0002e39b) ituss_keypad_pane_ParamLimits

0x2aa0,	// (0x00028bc0) ituss_sks_pane

0x833e,	// (0x0002e45e) bg_icf_pane_ParamLimits

0xe8fa,	// (0x00034a1a) icf_edit_indi_pane_ParamLimits

0xe8fa,	// (0x00034a1a) icf_edit_indi_pane

0x834a,	// (0x0002e46a) list_vkb_icf_pane_ParamLimits

0x8359,	// (0x0002e479) bg_icf_pane_cp01_ParamLimits

0x820b,	// (0x0002e32b) icf_edit_indi_pane_cp01_ParamLimits

0x820b,	// (0x0002e32b) icf_edit_indi_pane_cp01

0x8374,	// (0x0002e494) vtchi_query_pane

0x7610,	// (0x0002d730) icf_edit_indi_pane_g1_ParamLimits

0x7610,	// (0x0002d730) icf_edit_indi_pane_g1

0xe992,	// (0x00034ab2) icf_edit_indi_pane_g2_ParamLimits

0xe992,	// (0x00034ab2) icf_edit_indi_pane_g2

0x0001,

0xfef7,	// (0x00036017) icf_edit_indi_pane_g_ParamLimits

0xfef7,	// (0x00036017) icf_edit_indi_pane_g

0xe9a4,	// (0x00034ac4) icf_edit_indi_pane_t1

0x83b1,	// (0x0002e4d1) bg_input_focus_pane_cp042

0xcacb,	// (0x00032beb) vtchi_button_pane

0x83ba,	// (0x0002e4da) vtchi_query_pane_t1

0x83c8,	// (0x0002e4e8) vtchi_query_pane_t2

0x83d6,	// (0x0002e4f6) vtchi_query_pane_t3

0x0002,

0xfee6,	// (0x00036006) vtchi_query_pane_t

0xc767,	// (0x00032887) bg_button_pane_cp13

0x83e4,	// (0x0002e504) vtchi_button_pane_g1

0x2bb9,	// (0x00028cd9) ituss_sks_pane_g1

0x2bc4,	// (0x00028ce4) ituss_sks_pane_g2

0x0001,

0xfeed,	// (0x0003600d) ituss_sks_pane_g

0x83ec,	// (0x0002e50c) ituss_sks_pane_t1

0x83fa,	// (0x0002e51a) ituss_sks_pane_t2

0x0001,

0xfef2,	// (0x00036012) ituss_sks_pane_t

0x4bdb,	// (0x0002acfb) indicator_nsta_pane_cp_g1

0x4be3,	// (0x0002ad03) indicator_nsta_pane_cp_g2

0x4beb,	// (0x0002ad0b) indicator_nsta_pane_cp_g3

0x4bdb,	// (0x0002acfb) indicator_nsta_pane_cp_g4

0x4be3,	// (0x0002ad03) indicator_nsta_pane_cp_g5

0x4beb,	// (0x0002ad0b) indicator_nsta_pane_cp_g6

0x0005,

0xfaa2,	// (0x00035bc2) indicator_nsta_pane_cp_g

0xe2e5,	// (0x00034405) cell_graphic2_pane_t2_ParamLimits

0xe2e5,	// (0x00034405) cell_graphic2_pane_t2

0x0001,

0xfda8,	// (0x00035ec8) cell_graphic2_pane_t_ParamLimits

0xfda8,	// (0x00035ec8) cell_graphic2_pane_t

0xe31e,	// (0x0003443e) cell_graphic2_control_pane_t1

0xa168,	// (0x00030288) signal_pane_g3_ParamLimits

0xa168,	// (0x00030288) signal_pane_g3

0xa17c,	// (0x0003029c) signal_pane_g4_ParamLimits

0xa17c,	// (0x0003029c) signal_pane_g4

0x81e2,	// (0x0002e302) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x81e2,	// (0x0002e302) cell_ai5_widget_list_row_pane_t3

0x82fd,	// (0x0002e41d) cell_ituss_key_pane_t1_ParamLimits

0x82fd,	// (0x0002e41d) cell_ituss_key_pane_t1

0x2c86,	// (0x00028da6) form_field_data_wide_pane_vc_t2_ParamLimits

0x2c86,	// (0x00028da6) form_field_data_wide_pane_vc_t2

0x2c9a,	// (0x00028dba) form_field_data_wide_pane_vc_t3_ParamLimits

0x2c9a,	// (0x00028dba) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ee,	// (0x0003590e) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ee,	// (0x0003590e) form_field_data_wide_pane_vc_t

0x48a2,	// (0x0002a9c2) form_field_slider_wide_pane_vc_t3_ParamLimits

0x48a2,	// (0x0002a9c2) form_field_slider_wide_pane_vc_t3

0x4980,	// (0x0002aaa0) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4980,	// (0x0002aaa0) form_field_popup_wide_pane_vc_t2

0x4997,	// (0x0002aab7) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4997,	// (0x0002aab7) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa91,	// (0x00035bb1) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa91,	// (0x00035bb1) form_field_popup_wide_pane_vc_t

0xc54e,	// (0x0003266e) aid_fshwr2_btn_pane_ParamLimits

0xc560,	// (0x00032680) aid_fshwr2_syb_pane_ParamLimits

0xc572,	// (0x00032692) aid_fshwr2_txt_pane_ParamLimits

0xcb89,	// (0x00032ca9) fshwr2_bg_pane_ParamLimits

0xc581,	// (0x000326a1) fshwr2_func_candi_pane_ParamLimits

0xc5a0,	// (0x000326c0) fshwr2_hwr_syb_pane_ParamLimits

0xc5bb,	// (0x000326db) fshwr2_icf_pane_ParamLimits

0xef2e,	// (0x0003504e) list_double_graphic_pane_vc_g4_ParamLimits

0xef2e,	// (0x0003504e) list_double_graphic_pane_vc_g4

0x2aff,	// (0x00028c1f) cell_ituss_key_pane_g3_ParamLimits

0x2aff,	// (0x00028c1f) cell_ituss_key_pane_g3

0x2ba7,	// (0x00028cc7) cell_ituss_key_t5_ParamLimits

0x2ba7,	// (0x00028cc7) cell_ituss_key_t5

0xe90d,	// (0x00034a2d) popup_fep_vkbss_window_ParamLimits

0x5d2d,	// (0x0002be4d) aid_cell_ai5_quarter

0xe9a4,	// (0x00034ac4) icf_edit_indi_pane_t1_ParamLimits

0x9b99,	// (0x0002fcb9) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x9b99,	// (0x0002fcb9) aid_tch_indicator_popup_pane_cp2

0x9bac,	// (0x0002fccc) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x9bac,	// (0x0002fccc) aid_tch_query_popup_data_pane_cp2

0x2ff3,	// (0x00029113) aid_tch_query_popup_pane_ParamLimits

0x2ff3,	// (0x00029113) aid_tch_query_popup_pane

0x2ff3,	// (0x00029113) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x2ff3,	// (0x00029113) aid_tch_query_popup_data_pane_cp1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Small
