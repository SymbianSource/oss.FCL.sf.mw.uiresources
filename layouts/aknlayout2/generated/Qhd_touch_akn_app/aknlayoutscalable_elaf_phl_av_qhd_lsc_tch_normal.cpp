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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x00000000 };

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
0xb1c8,	// (0x0000b1c8) Screen

0xb1d4,	// (0x0000b1d4) application_window_ParamLimits

0xb1d4,	// (0x0000b1d4) application_window

0x002e,	// (0x0000002e) screen_g1

0xb20c,	// (0x0000b20c) area_bottom_pane_ParamLimits

0xb20c,	// (0x0000b20c) area_bottom_pane

0x0144,	// (0x00000144) area_top_pane_ParamLimits

0x0144,	// (0x00000144) area_top_pane

0x01d8,	// (0x000001d8) main_pane_ParamLimits

0x01d8,	// (0x000001d8) main_pane

0x0293,	// (0x00000293) misc_graphics

0xc8c6,	// (0x0000c8c6) battery_pane_ParamLimits

0xc8c6,	// (0x0000c8c6) battery_pane

0x4086,	// (0x00004086) bg_status_flat_pane_g8

0x408e,	// (0x0000408e) bg_status_flat_pane_g9

0x321f,	// (0x0000321f) context_pane_ParamLimits

0x321f,	// (0x0000321f) context_pane

0xca31,	// (0x0000ca31) navi_pane_ParamLimits

0xca31,	// (0x0000ca31) navi_pane

0xcaa8,	// (0x0000caa8) signal_pane_ParamLimits

0xcaa8,	// (0x0000caa8) signal_pane

0x0008,

0xab49,	// (0x0000ab49) bg_status_flat_pane_g

0xcb38,	// (0x0000cb38) status_pane_g1_ParamLimits

0xcb38,	// (0x0000cb38) status_pane_g1

0xcb4e,	// (0x0000cb4e) status_pane_g2_ParamLimits

0xcb4e,	// (0x0000cb4e) status_pane_g2

0x343f,	// (0x0000343f) status_pane_g3_ParamLimits

0x343f,	// (0x0000343f) status_pane_g3

0x0004,

0xf3c2,	// (0x0000f3c2) status_pane_g_ParamLimits

0xf3c2,	// (0x0000f3c2) status_pane_g

0xcb5a,	// (0x0000cb5a) title_pane_ParamLimits

0xcb5a,	// (0x0000cb5a) title_pane

0xcbbb,	// (0x0000cbbb) uni_indicator_pane_ParamLimits

0xcbbb,	// (0x0000cbbb) uni_indicator_pane

0x2aca,	// (0x00002aca) bg_list_pane_ParamLimits

0x2aca,	// (0x00002aca) bg_list_pane

0xc1a2,	// (0x0000c1a2) find_pane

0xc1aa,	// (0x0000c1aa) listscroll_app_pane_ParamLimits

0xc1aa,	// (0x0000c1aa) listscroll_app_pane

0x2afe,	// (0x00002afe) listscroll_form_pane

0xc1b6,	// (0x0000c1b6) listscroll_gen_pane_ParamLimits

0xc1b6,	// (0x0000c1b6) listscroll_gen_pane

0x2afe,	// (0x00002afe) listscroll_set_pane

0x4e77,	// (0x00004e77) main_idle_act_pane

0x25a4,	// (0x000025a4) main_idle_trad_pane

0x25a4,	// (0x000025a4) main_list_empty_pane

0x2b2c,	// (0x00002b2c) main_midp_pane

0x2b38,	// (0x00002b38) main_pane_g1_ParamLimits

0x2b38,	// (0x00002b38) main_pane_g1

0xc1ca,	// (0x0000c1ca) popup_ai_message_window_ParamLimits

0xc1ca,	// (0x0000c1ca) popup_ai_message_window

0xc25b,	// (0x0000c25b) popup_fep_china_uni_window_ParamLimits

0xc25b,	// (0x0000c25b) popup_fep_china_uni_window

0x2c4c,	// (0x00002c4c) popup_fep_japan_candidate_window_ParamLimits

0x2c4c,	// (0x00002c4c) popup_fep_japan_candidate_window

0x2c6c,	// (0x00002c6c) popup_fep_japan_predictive_window_ParamLimits

0x2c6c,	// (0x00002c6c) popup_fep_japan_predictive_window

0xc2b7,	// (0x0000c2b7) popup_find_window

0xc2d4,	// (0x0000c2d4) popup_grid_graphic_window_ParamLimits

0xc2d4,	// (0x0000c2d4) popup_grid_graphic_window

0x2cd1,	// (0x00002cd1) popup_large_graphic_colour_window

0xc36c,	// (0x0000c36c) popup_menu_window_ParamLimits

0xc36c,	// (0x0000c36c) popup_menu_window

0xc526,	// (0x0000c526) popup_note_image_window

0xc4ec,	// (0x0000c4ec) popup_note_wait_window_ParamLimits

0xc4ec,	// (0x0000c4ec) popup_note_wait_window

0xc53e,	// (0x0000c53e) popup_note_window_ParamLimits

0xc53e,	// (0x0000c53e) popup_note_window

0xc5e4,	// (0x0000c5e4) popup_query_code_window_ParamLimits

0xc5e4,	// (0x0000c5e4) popup_query_code_window

0x2f19,	// (0x00002f19) popup_query_data_code_window_ParamLimits

0x2f19,	// (0x00002f19) popup_query_data_code_window

0xc61e,	// (0x0000c61e) popup_query_data_window_ParamLimits

0xc61e,	// (0x0000c61e) popup_query_data_window

0xc694,	// (0x0000c694) popup_query_sat_info_window_ParamLimits

0xc694,	// (0x0000c694) popup_query_sat_info_window

0xc72b,	// (0x0000c72b) popup_snote_single_graphic_window_ParamLimits

0xc72b,	// (0x0000c72b) popup_snote_single_graphic_window

0xc72b,	// (0x0000c72b) popup_snote_single_text_window_ParamLimits

0xc72b,	// (0x0000c72b) popup_snote_single_text_window

0x2fa0,	// (0x00002fa0) popup_sub_window_general

0x30d0,	// (0x000030d0) popup_window_general_ParamLimits

0x30d0,	// (0x000030d0) popup_window_general

0x30e5,	// (0x000030e5) power_save_pane

0xc033,	// (0x0000c033) control_pane_g1_ParamLimits

0xc033,	// (0x0000c033) control_pane_g1

0x293f,	// (0x0000293f) control_pane_g2_ParamLimits

0x293f,	// (0x0000293f) control_pane_g2

0x2962,	// (0x00002962) control_pane_g3_ParamLimits

0x2962,	// (0x00002962) control_pane_g3

0x0007,

0xf3aa,	// (0x0000f3aa) control_pane_g_ParamLimits

0xf3aa,	// (0x0000f3aa) control_pane_g

0xc099,	// (0x0000c099) control_pane_t1_ParamLimits

0xc099,	// (0x0000c099) control_pane_t1

0xc0f7,	// (0x0000c0f7) control_pane_t2_ParamLimits

0xc0f7,	// (0x0000c0f7) control_pane_t2

0x0002,

0xf3bb,	// (0x0000f3bb) control_pane_t_ParamLimits

0xf3bb,	// (0x0000f3bb) control_pane_t

0x2837,	// (0x00002837) navi_navi_volume_pane_cp1

0x2840,	// (0x00002840) status_small_icon_pane

0x2848,	// (0x00002848) status_small_pane_g1_ParamLimits

0x2848,	// (0x00002848) status_small_pane_g1

0x287c,	// (0x0000287c) status_small_pane_g2_ParamLimits

0x287c,	// (0x0000287c) status_small_pane_g2

0x2888,	// (0x00002888) status_small_pane_g3_ParamLimits

0x2888,	// (0x00002888) status_small_pane_g3

0x2894,	// (0x00002894) status_small_pane_g4_ParamLimits

0x2894,	// (0x00002894) status_small_pane_g4

0x28a0,	// (0x000028a0) status_small_pane_g5_ParamLimits

0x28a0,	// (0x000028a0) status_small_pane_g5

0x28af,	// (0x000028af) status_small_pane_g6_ParamLimits

0x28af,	// (0x000028af) status_small_pane_g6

0x0007,

0xaa55,	// (0x0000aa55) status_small_pane_g_ParamLimits

0xaa55,	// (0x0000aa55) status_small_pane_g

0x28df,	// (0x000028df) status_small_pane_t1

0x2902,	// (0x00002902) status_small_wait_pane_ParamLimits

0x2902,	// (0x00002902) status_small_wait_pane

0xbe1c,	// (0x0000be1c) aid_levels_signal_ParamLimits

0xbe1c,	// (0x0000be1c) aid_levels_signal

0xbe34,	// (0x0000be34) signal_pane_g1_ParamLimits

0xbe34,	// (0x0000be34) signal_pane_g1

0xbe4f,	// (0x0000be4f) signal_pane_g2_ParamLimits

0xbe4f,	// (0x0000be4f) signal_pane_g2

0x0001,

0xf389,	// (0x0000f389) signal_pane_g_ParamLimits

0xf389,	// (0x0000f389) signal_pane_g

0x1e56,	// (0x00001e56) context_pane_g1

0xb385,	// (0x0000b385) title_pane_g1

0xb3ba,	// (0x0000b3ba) title_pane_t1

0x04c5,	// (0x000004c5) title_pane_t2

0x04eb,	// (0x000004eb) title_pane_t3

0x0002,

0xf2b6,	// (0x0000f2b6) title_pane_t

0xcbe3,	// (0x0000cbe3) aid_levels_battery_ParamLimits

0xcbe3,	// (0x0000cbe3) aid_levels_battery

0xcbff,	// (0x0000cbff) battery_pane_g1_ParamLimits

0xcbff,	// (0x0000cbff) battery_pane_g1

0xcc1c,	// (0x0000cc1c) battery_pane_g2_ParamLimits

0xcc1c,	// (0x0000cc1c) battery_pane_g2

0x0001,

0xf3cd,	// (0x0000f3cd) battery_pane_g_ParamLimits

0xf3cd,	// (0x0000f3cd) battery_pane_g

0xcff7,	// (0x0000cff7) uni_indicator_pane_g1

0xd00c,	// (0x0000d00c) uni_indicator_pane_g2

0xd021,	// (0x0000d021) uni_indicator_pane_g3

0x0005,

0xf419,	// (0x0000f419) uni_indicator_pane_g

0x2416,	// (0x00002416) navi_icon_pane_ParamLimits

0x2416,	// (0x00002416) navi_icon_pane

0x235f,	// (0x0000235f) navi_midp_pane

0x2432,	// (0x00002432) navi_navi_pane

0x243c,	// (0x0000243c) navi_text_pane_ParamLimits

0x243c,	// (0x0000243c) navi_text_pane

0x002e,	// (0x0000002e) status_small_wait_pane_g1

0x09c5,	// (0x000009c5) status_small_wait_pane_g2

0x0001,

0xabec,	// (0x0000abec) status_small_wait_pane_g

0x484b,	// (0x0000484b) navi_navi_icon_text_pane

0x4853,	// (0x00004853) navi_navi_pane_g1_ParamLimits

0x4853,	// (0x00004853) navi_navi_pane_g1

0x4865,	// (0x00004865) navi_navi_pane_g2_ParamLimits

0x4865,	// (0x00004865) navi_navi_pane_g2

0x0001,

0xabba,	// (0x0000abba) navi_navi_pane_g_ParamLimits

0xabba,	// (0x0000abba) navi_navi_pane_g

0x4877,	// (0x00004877) navi_navi_tabs_pane

0x4880,	// (0x00004880) navi_navi_text_pane

0x484b,	// (0x0000484b) navi_navi_volume_pane

0xcfb8,	// (0x0000cfb8) navi_text_pane_t1

0xcfac,	// (0x0000cfac) navi_icon_pane_g1

0x4768,	// (0x00004768) navi_navi_text_pane_t1

0xcf9b,	// (0x0000cf9b) navi_navi_volume_pane_g1

0xcfa3,	// (0x0000cfa3) volume_small_pane

0xcef7,	// (0x0000cef7) navi_navi_icon_text_pane_g1

0xceff,	// (0x0000ceff) navi_navi_icon_text_pane_t1

0x2432,	// (0x00002432) navi_tabs_2_long_pane

0x2432,	// (0x00002432) navi_tabs_2_pane

0x2432,	// (0x00002432) navi_tabs_3_long_pane

0x2432,	// (0x00002432) navi_tabs_3_pane

0x2432,	// (0x00002432) navi_tabs_4_pane

0xced7,	// (0x0000ced7) tabs_2_active_pane_ParamLimits

0xced7,	// (0x0000ced7) tabs_2_active_pane

0xcee7,	// (0x0000cee7) tabs_2_passive_pane_ParamLimits

0xcee7,	// (0x0000cee7) tabs_2_passive_pane

0xcea5,	// (0x0000cea5) tabs_3_active_pane_ParamLimits

0xcea5,	// (0x0000cea5) tabs_3_active_pane

0xceb5,	// (0x0000ceb5) tabs_3_passive_pane_ParamLimits

0xceb5,	// (0x0000ceb5) tabs_3_passive_pane

0xcec6,	// (0x0000cec6) tabs_3_passive_pane_cp_ParamLimits

0xcec6,	// (0x0000cec6) tabs_3_passive_pane_cp

0xce61,	// (0x0000ce61) tabs_4_active_pane_ParamLimits

0xce61,	// (0x0000ce61) tabs_4_active_pane

0xce72,	// (0x0000ce72) tabs_4_passive_pane_ParamLimits

0xce72,	// (0x0000ce72) tabs_4_passive_pane

0xce83,	// (0x0000ce83) tabs_4_passive_pane_cp_ParamLimits

0xce83,	// (0x0000ce83) tabs_4_passive_pane_cp

0xce94,	// (0x0000ce94) tabs_4_passive_pane_cp2_ParamLimits

0xce94,	// (0x0000ce94) tabs_4_passive_pane_cp2

0xce41,	// (0x0000ce41) tabs_2_long_active_pane_ParamLimits

0xce41,	// (0x0000ce41) tabs_2_long_active_pane

0xce51,	// (0x0000ce51) tabs_2_long_passive_pane_ParamLimits

0xce51,	// (0x0000ce51) tabs_2_long_passive_pane

0xce0e,	// (0x0000ce0e) tabs_3_long_active_pane_ParamLimits

0xce0e,	// (0x0000ce0e) tabs_3_long_active_pane

0xce1f,	// (0x0000ce1f) tabs_3_long_passive_pane_ParamLimits

0xce1f,	// (0x0000ce1f) tabs_3_long_passive_pane

0xce30,	// (0x0000ce30) tabs_3_long_passive_pane_cp_ParamLimits

0xce30,	// (0x0000ce30) tabs_3_long_passive_pane_cp

0x44e9,	// (0x000044e9) volume_small_pane_g1

0xcdbd,	// (0x0000cdbd) volume_small_pane_g2

0xcdc6,	// (0x0000cdc6) volume_small_pane_g3

0xcdcf,	// (0x0000cdcf) volume_small_pane_g4

0xcdd8,	// (0x0000cdd8) volume_small_pane_g5

0xcde1,	// (0x0000cde1) volume_small_pane_g6

0xcdea,	// (0x0000cdea) volume_small_pane_g7

0xcdf3,	// (0x0000cdf3) volume_small_pane_g8

0xcdfc,	// (0x0000cdfc) volume_small_pane_g9

0xce05,	// (0x0000ce05) volume_small_pane_g10

0x0009,

0xf3ef,	// (0x0000f3ef) volume_small_pane_g

0x0823,	// (0x00000823) bg_active_tab_pane_cp2_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp2

0xb446,	// (0x0000b446) tabs_3_active_pane_g1

0xb44e,	// (0x0000b44e) tabs_3_active_pane_t1

0x0823,	// (0x00000823) bg_passive_tab_pane_cp2_ParamLimits

0x0823,	// (0x00000823) bg_passive_tab_pane_cp2

0xb446,	// (0x0000b446) tabs_3_passive_pane_g1

0xb44e,	// (0x0000b44e) tabs_3_passive_pane_t1

0x0823,	// (0x00000823) bg_active_tab_pane_cp3_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp3

0xb460,	// (0x0000b460) tabs_4_active_pane_g1

0xb468,	// (0x0000b468) tabs_4_active_pane_t1

0x0823,	// (0x00000823) bg_passive_tab_pane_cp3_ParamLimits

0x0823,	// (0x00000823) bg_passive_tab_pane_cp3

0xb460,	// (0x0000b460) tabs_4_1_passive_pane_g1

0xb468,	// (0x0000b468) tabs_4_1_passive_pane_t1

0x2b2c,	// (0x00002b2c) list_highlight_pane_cp2

0xd0bc,	// (0x0000d0bc) list_set_pane_ParamLimits

0xd0bc,	// (0x0000d0bc) list_set_pane

0xd156,	// (0x0000d156) main_pane_set_t1_ParamLimits

0xd156,	// (0x0000d156) main_pane_set_t1

0xd176,	// (0x0000d176) main_pane_set_t2_ParamLimits

0xd176,	// (0x0000d176) main_pane_set_t2

0xd18a,	// (0x0000d18a) main_pane_set_t3_ParamLimits

0xd18a,	// (0x0000d18a) main_pane_set_t3

0xd19c,	// (0x0000d19c) main_pane_set_t4_ParamLimits

0xd19c,	// (0x0000d19c) main_pane_set_t4

0x0003,

0xf42b,	// (0x0000f42b) main_pane_set_t_ParamLimits

0xf42b,	// (0x0000f42b) main_pane_set_t

0xd1ae,	// (0x0000d1ae) setting_code_pane

0xd1b8,	// (0x0000d1b8) setting_slider_graphic_pane

0xd1b8,	// (0x0000d1b8) setting_slider_pane

0xd1b8,	// (0x0000d1b8) setting_text_pane

0xd1b8,	// (0x0000d1b8) setting_volume_pane

0x053f,	// (0x0000053f) volume_set_pane

0x04fd,	// (0x000004fd) bg_set_opt_pane_cp

0x0547,	// (0x00000547) setting_slider_pane_t1

0x0560,	// (0x00000560) setting_slider_pane_t2

0x057a,	// (0x0000057a) setting_slider_pane_t3

0x0002,

0xa845,	// (0x0000a845) setting_slider_pane_t

0x0592,	// (0x00000592) slider_set_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp2

0x05a8,	// (0x000005a8) setting_slider_graphic_pane_g1

0x05b1,	// (0x000005b1) setting_slider_graphic_pane_t1

0x05c1,	// (0x000005c1) setting_slider_graphic_pane_t2

0x0001,

0xa84c,	// (0x0000a84c) setting_slider_graphic_pane_t

0x05d1,	// (0x000005d1) slider_set_pane_cp

0x0293,	// (0x00000293) input_focus_pane_cp1

0x4e5e,	// (0x00004e5e) list_set_text_pane

0x002e,	// (0x0000002e) setting_text_pane_g1

0x0293,	// (0x00000293) input_focus_pane_cp2

0x002e,	// (0x0000002e) setting_code_pane_g1

0x05d9,	// (0x000005d9) setting_code_pane_t1

0x05e7,	// (0x000005e7) set_text_pane_t1_ParamLimits

0x05e7,	// (0x000005e7) set_text_pane_t1

0x14ad,	// (0x000014ad) set_opt_bg_pane_g1

0x14b5,	// (0x000014b5) set_opt_bg_pane_g2

0x4e38,	// (0x00004e38) set_opt_bg_pane_g3

0x14c5,	// (0x000014c5) set_opt_bg_pane_g4

0x14cd,	// (0x000014cd) set_opt_bg_pane_g5

0x14d5,	// (0x000014d5) set_opt_bg_pane_g6

0x4e42,	// (0x00004e42) set_opt_bg_pane_g7

0x4e4a,	// (0x00004e4a) set_opt_bg_pane_g8

0x4e54,	// (0x00004e54) set_opt_bg_pane_g9

0x0008,

0xac43,	// (0x0000ac43) set_opt_bg_pane_g

0x4dc7,	// (0x00004dc7) slider_set_pane_g1

0x4dd4,	// (0x00004dd4) slider_set_pane_g2

0x0006,

0xac34,	// (0x0000ac34) slider_set_pane_g

0x4c47,	// (0x00004c47) volume_set_pane_g1

0x4c4f,	// (0x00004c4f) volume_set_pane_g2

0x4c57,	// (0x00004c57) volume_set_pane_g3

0x4c5f,	// (0x00004c5f) volume_set_pane_g4

0x4c67,	// (0x00004c67) volume_set_pane_g5

0x4c6f,	// (0x00004c6f) volume_set_pane_g6

0x4c77,	// (0x00004c77) volume_set_pane_g7

0x4c7f,	// (0x00004c7f) volume_set_pane_g8

0x4c87,	// (0x00004c87) volume_set_pane_g9

0x4c8f,	// (0x00004c8f) volume_set_pane_g10

0x0009,

0xac0c,	// (0x0000ac0c) volume_set_pane_g

0xb47a,	// (0x0000b47a) indicator_pane_ParamLimits

0xb47a,	// (0x0000b47a) indicator_pane

0xb4a2,	// (0x0000b4a2) main_idle_pane_g2_ParamLimits

0xb4a2,	// (0x0000b4a2) main_idle_pane_g2

0xb4da,	// (0x0000b4da) main_pane_idle_g1_ParamLimits

0xb4da,	// (0x0000b4da) main_pane_idle_g1

0x0642,	// (0x00000642) popup_clock_digital_analogue_window_ParamLimits

0x0642,	// (0x00000642) popup_clock_digital_analogue_window

0xb501,	// (0x0000b501) soft_indicator_pane_ParamLimits

0xb501,	// (0x0000b501) soft_indicator_pane

0xb51b,	// (0x0000b51b) wallpaper_pane_ParamLimits

0xb51b,	// (0x0000b51b) wallpaper_pane

0x002e,	// (0x0000002e) wallpaper_pane_g1

0xb52d,	// (0x0000b52d) indicator_pane_g1_ParamLimits

0xb52d,	// (0x0000b52d) indicator_pane_g1

0x53a0,	// (0x000053a0) navi_navi_icon_text_pane_srt_g1

0x0694,	// (0x00000694) soft_indicator_pane_t1

0x06ae,	// (0x000006ae) aid_ps_area_pane

0xb543,	// (0x0000b543) aid_ps_clock_pane

0x06cd,	// (0x000006cd) aid_ps_indicator_pane

0x06d9,	// (0x000006d9) indicator_ps_pane_ParamLimits

0x06d9,	// (0x000006d9) indicator_ps_pane

0x06e8,	// (0x000006e8) power_save_pane_g1_ParamLimits

0x06e8,	// (0x000006e8) power_save_pane_g1

0x06f4,	// (0x000006f4) power_save_pane_g2_ParamLimits

0x06f4,	// (0x000006f4) power_save_pane_g2

0x0038,	// (0x00000038) aid_navinavi_width_pane

0x06ae,	// (0x000006ae) aid_ps_area_pane_ParamLimits

0x0001,

0xa851,	// (0x0000a851) power_save_pane_g_ParamLimits

0xa851,	// (0x0000a851) power_save_pane_g

0x0702,	// (0x00000702) power_save_pane_t1_ParamLimits

0x0702,	// (0x00000702) power_save_pane_t1

0xb543,	// (0x0000b543) aid_ps_clock_pane_ParamLimits

0x06cd,	// (0x000006cd) aid_ps_indicator_pane_ParamLimits

0x0714,	// (0x00000714) power_save_pane_t4_ParamLimits

0x0714,	// (0x00000714) power_save_pane_t4

0x0001,

0xa856,	// (0x0000a856) power_save_pane_t_ParamLimits

0xa856,	// (0x0000a856) power_save_pane_t

0x073e,	// (0x0000073e) power_save_t3_ParamLimits

0x073e,	// (0x0000073e) power_save_t3

0x0729,	// (0x00000729) power_save_t2_ParamLimits

0x0729,	// (0x00000729) power_save_t2

0x0753,	// (0x00000753) indicator_ps_pane_g1

0xb551,	// (0x0000b551) ai_gene_pane_ParamLimits

0xb551,	// (0x0000b551) ai_gene_pane

0xb568,	// (0x0000b568) ai_links_pane_ParamLimits

0xb568,	// (0x0000b568) ai_links_pane

0xb580,	// (0x0000b580) indicator_pane_cp1_ParamLimits

0xb580,	// (0x0000b580) indicator_pane_cp1

0xb58f,	// (0x0000b58f) main_pane_idle_g1_cp_ParamLimits

0xb58f,	// (0x0000b58f) main_pane_idle_g1_cp

0x078c,	// (0x0000078c) popup_ai_links_title_window

0xb5a7,	// (0x0000b5a7) soft_indicator_pane_cp1_ParamLimits

0xb5a7,	// (0x0000b5a7) soft_indicator_pane_cp1

0x4b14,	// (0x00004b14) ai_links_pane_g1

0x4b1d,	// (0x00004b1d) grid_ai_links_pane

0xcfee,	// (0x0000cfee) ai_gene_pane_1

0x4b02,	// (0x00004b02) ai_gene_pane_2

0x4b0b,	// (0x00004b0b) list_highlight_pane_cp4

0xcfca,	// (0x0000cfca) cell_ai_link_pane_ParamLimits

0xcfca,	// (0x0000cfca) cell_ai_link_pane

0x4ad3,	// (0x00004ad3) cell_ai_link_pane_g1

0x09c5,	// (0x000009c5) cell_ai_link_pane_g2

0x0001,

0xabe7,	// (0x0000abe7) cell_ai_link_pane_g

0x0293,	// (0x00000293) grid_highlight_cp2

0x0293,	// (0x00000293) bg_popup_sub_pane_cp1

0x07af,	// (0x000007af) popup_ai_links_title_window_t1

0x4a21,	// (0x00004a21) ai_gene_pane_1_g1_ParamLimits

0x4a21,	// (0x00004a21) ai_gene_pane_1_g1

0x4a2d,	// (0x00004a2d) ai_gene_pane_1_g2_ParamLimits

0x4a2d,	// (0x00004a2d) ai_gene_pane_1_g2

0x0001,

0xabdd,	// (0x0000abdd) ai_gene_pane_1_g_ParamLimits

0xabdd,	// (0x0000abdd) ai_gene_pane_1_g

0x4a3a,	// (0x00004a3a) ai_gene_pane_1_t1_ParamLimits

0x4a3a,	// (0x00004a3a) ai_gene_pane_1_t1

0x4a6e,	// (0x00004a6e) grid_ai_soft_ind_pane

0x4a0c,	// (0x00004a0c) ai_gene_pane_2_t1_ParamLimits

0x4a0c,	// (0x00004a0c) ai_gene_pane_2_t1

0xb5bb,	// (0x0000b5bb) main_pane_empty_t1_ParamLimits

0xb5bb,	// (0x0000b5bb) main_pane_empty_t1

0xb5d3,	// (0x0000b5d3) main_pane_empty_t2_ParamLimits

0xb5d3,	// (0x0000b5d3) main_pane_empty_t2

0xb5e8,	// (0x0000b5e8) main_pane_empty_t3_ParamLimits

0xb5e8,	// (0x0000b5e8) main_pane_empty_t3

0xb5fa,	// (0x0000b5fa) main_pane_empty_t4_ParamLimits

0xb5fa,	// (0x0000b5fa) main_pane_empty_t4

0xb60c,	// (0x0000b60c) main_pane_empty_t5_ParamLimits

0xb60c,	// (0x0000b60c) main_pane_empty_t5

0x0004,

0xf2bd,	// (0x0000f2bd) main_pane_empty_t_ParamLimits

0xf2bd,	// (0x0000f2bd) main_pane_empty_t

0x15aa,	// (0x000015aa) bg_popup_window_pane_ParamLimits

0x15aa,	// (0x000015aa) bg_popup_window_pane

0x4776,	// (0x00004776) find_popup_pane_cp2_ParamLimits

0x4776,	// (0x00004776) find_popup_pane_cp2

0x4782,	// (0x00004782) heading_pane_ParamLimits

0x4782,	// (0x00004782) heading_pane

0x0293,	// (0x00000293) bg_popup_sub_pane

0xcf1c,	// (0x0000cf1c) bg_popup_window_pane_g1_ParamLimits

0xcf1c,	// (0x0000cf1c) bg_popup_window_pane_g1

0xcf2b,	// (0x0000cf2b) bg_popup_window_pane_g2_ParamLimits

0xcf2b,	// (0x0000cf2b) bg_popup_window_pane_g2

0xcf37,	// (0x0000cf37) bg_popup_window_pane_g3_ParamLimits

0xcf37,	// (0x0000cf37) bg_popup_window_pane_g3

0xcf43,	// (0x0000cf43) bg_popup_window_pane_g4_ParamLimits

0xcf43,	// (0x0000cf43) bg_popup_window_pane_g4

0xcf52,	// (0x0000cf52) bg_popup_window_pane_g5_ParamLimits

0xcf52,	// (0x0000cf52) bg_popup_window_pane_g5

0xcf62,	// (0x0000cf62) bg_popup_window_pane_g6_ParamLimits

0xcf62,	// (0x0000cf62) bg_popup_window_pane_g6

0xcf6e,	// (0x0000cf6e) bg_popup_window_pane_g7_ParamLimits

0xcf6e,	// (0x0000cf6e) bg_popup_window_pane_g7

0xcf7d,	// (0x0000cf7d) bg_popup_window_pane_g8_ParamLimits

0xcf7d,	// (0x0000cf7d) bg_popup_window_pane_g8

0xcf8c,	// (0x0000cf8c) bg_popup_window_pane_g9_ParamLimits

0xcf8c,	// (0x0000cf8c) bg_popup_window_pane_g9

0x474b,	// (0x0000474b) bg_popup_window_pane_g10_ParamLimits

0x474b,	// (0x0000474b) bg_popup_window_pane_g10

0x0009,

0xf404,	// (0x0000f404) bg_popup_window_pane_g_ParamLimits

0xf404,	// (0x0000f404) bg_popup_window_pane_g

0x4674,	// (0x00004674) bg_popup_heading_pane_ParamLimits

0x4674,	// (0x00004674) bg_popup_heading_pane

0x52e3,	// (0x000052e3) tabs_4_passive_pane_cp_srt_ParamLimits

0x52e3,	// (0x000052e3) tabs_4_passive_pane_cp_srt

0x52f5,	// (0x000052f5) tabs_4_passive_pane_srt_ParamLimits

0x4688,	// (0x00004688) heading_pane_g2

0x52f5,	// (0x000052f5) tabs_4_passive_pane_srt

0x380a,	// (0x0000380a) bg_passive_tab_pane_cp3_srt_ParamLimits

0x380a,	// (0x0000380a) bg_passive_tab_pane_cp3_srt

0x4690,	// (0x00004690) heading_pane_t1_ParamLimits

0x4690,	// (0x00004690) heading_pane_t1

0x46a7,	// (0x000046a7) heading_pane_t2_ParamLimits

0x46a7,	// (0x000046a7) heading_pane_t2

0x0001,

0xaba0,	// (0x0000aba0) heading_pane_t_ParamLimits

0xaba0,	// (0x0000aba0) heading_pane_t

0x404e,	// (0x0000404e) bg_popup_heading_pane_g1

0x40fd,	// (0x000040fd) bg_popup_heading_pane_g2

0x4107,	// (0x00004107) bg_popup_heading_pane_g3

0x4111,	// (0x00004111) bg_popup_heading_pane_g4

0x411b,	// (0x0000411b) bg_popup_heading_pane_g5

0x4125,	// (0x00004125) bg_popup_heading_pane_g6

0x412d,	// (0x0000412d) bg_popup_heading_pane_g7

0x4135,	// (0x00004135) bg_popup_heading_pane_g8

0x413f,	// (0x0000413f) bg_popup_heading_pane_g9

0x0008,

0xab5c,	// (0x0000ab5c) bg_popup_heading_pane_g

0x367c,	// (0x0000367c) bg_popup_sub_pane_g1

0x3684,	// (0x00003684) bg_popup_sub_pane_g2

0x368c,	// (0x0000368c) bg_popup_sub_pane_g3

0x3694,	// (0x00003694) bg_popup_sub_pane_g4

0x369c,	// (0x0000369c) bg_popup_sub_pane_g5

0x36a4,	// (0x000036a4) bg_popup_sub_pane_g6

0x36ac,	// (0x000036ac) bg_popup_sub_pane_g7

0x36b4,	// (0x000036b4) bg_popup_sub_pane_g8

0x36bc,	// (0x000036bc) bg_popup_sub_pane_g9

0x0008,

0xab36,	// (0x0000ab36) bg_popup_sub_pane_g

0x0823,	// (0x00000823) bg_popup_window_pane_cp5_ParamLimits

0x0823,	// (0x00000823) bg_popup_window_pane_cp5

0x083f,	// (0x0000083f) popup_note_window_g1_ParamLimits

0x083f,	// (0x0000083f) popup_note_window_g1

0x084b,	// (0x0000084b) popup_note_window_t1_ParamLimits

0x084b,	// (0x0000084b) popup_note_window_t1

0x0861,	// (0x00000861) popup_note_window_t2_ParamLimits

0x0861,	// (0x00000861) popup_note_window_t2

0x0877,	// (0x00000877) popup_note_window_t3_ParamLimits

0x0877,	// (0x00000877) popup_note_window_t3

0x088d,	// (0x0000088d) popup_note_window_t4_ParamLimits

0x088d,	// (0x0000088d) popup_note_window_t4

0x08b5,	// (0x000008b5) popup_note_window_t5_ParamLimits

0x08b5,	// (0x000008b5) popup_note_window_t5

0x0004,

0xa866,	// (0x0000a866) popup_note_window_t_ParamLimits

0xa866,	// (0x0000a866) popup_note_window_t

0x08d9,	// (0x000008d9) bg_popup_window_pane_cp6_ParamLimits

0x08d9,	// (0x000008d9) bg_popup_window_pane_cp6

0x3fca,	// (0x00003fca) popup_note_image_window_g1_ParamLimits

0x3fca,	// (0x00003fca) popup_note_image_window_g1

0x3fd6,	// (0x00003fd6) popup_note_image_window_g2_ParamLimits

0x3fd6,	// (0x00003fd6) popup_note_image_window_g2

0x0001,

0xab2a,	// (0x0000ab2a) popup_note_image_window_g_ParamLimits

0xab2a,	// (0x0000ab2a) popup_note_image_window_g

0x3fef,	// (0x00003fef) popup_note_image_window_t1_ParamLimits

0x3fef,	// (0x00003fef) popup_note_image_window_t1

0x4008,	// (0x00004008) popup_note_image_window_t2_ParamLimits

0x4008,	// (0x00004008) popup_note_image_window_t2

0x4021,	// (0x00004021) popup_note_image_window_t3_ParamLimits

0x4021,	// (0x00004021) popup_note_image_window_t3

0x0002,

0xab2f,	// (0x0000ab2f) popup_note_image_window_t_ParamLimits

0xab2f,	// (0x0000ab2f) popup_note_image_window_t

0x3e8b,	// (0x00003e8b) bg_popup_window_pane_cp7_ParamLimits

0x3e8b,	// (0x00003e8b) bg_popup_window_pane_cp7

0x3ebb,	// (0x00003ebb) popup_note_wait_window_g1_ParamLimits

0x3ebb,	// (0x00003ebb) popup_note_wait_window_g1

0x3ec7,	// (0x00003ec7) popup_note_wait_window_g2_ParamLimits

0x3ec7,	// (0x00003ec7) popup_note_wait_window_g2

0x0002,

0xab18,	// (0x0000ab18) popup_note_wait_window_g_ParamLimits

0xab18,	// (0x0000ab18) popup_note_wait_window_g

0x3edf,	// (0x00003edf) popup_note_wait_window_t1_ParamLimits

0x3edf,	// (0x00003edf) popup_note_wait_window_t1

0x3f06,	// (0x00003f06) popup_note_wait_window_t2_ParamLimits

0x3f06,	// (0x00003f06) popup_note_wait_window_t2

0x3f23,	// (0x00003f23) popup_note_wait_window_t3_ParamLimits

0x3f23,	// (0x00003f23) popup_note_wait_window_t3

0x3f36,	// (0x00003f36) popup_note_wait_window_t4_ParamLimits

0x3f36,	// (0x00003f36) popup_note_wait_window_t4

0x0004,

0xab1f,	// (0x0000ab1f) popup_note_wait_window_t_ParamLimits

0xab1f,	// (0x0000ab1f) popup_note_wait_window_t

0x3f5b,	// (0x00003f5b) wait_bar_pane_ParamLimits

0x3f5b,	// (0x00003f5b) wait_bar_pane

0x0293,	// (0x00000293) wait_anim_pane

0x0293,	// (0x00000293) wait_border_pane

0x002e,	// (0x0000002e) wait_anim_pane_g1

0x002e,	// (0x0000002e) wait_anim_pane_g2

0x0001,

0xa9e5,	// (0x0000a9e5) wait_anim_pane_g

0x3e2f,	// (0x00003e2f) wait_border_pane_g1

0x3e3a,	// (0x00003e3a) wait_border_pane_g2

0x3e43,	// (0x00003e43) wait_border_pane_g3

0x0002,

0xab11,	// (0x0000ab11) wait_border_pane_g

0x3c9a,	// (0x00003c9a) bg_popup_window_pane_cp16_ParamLimits

0x3c9a,	// (0x00003c9a) bg_popup_window_pane_cp16

0x3d9a,	// (0x00003d9a) indicator_popup_pane_cp4_ParamLimits

0x3d9a,	// (0x00003d9a) indicator_popup_pane_cp4

0x3dae,	// (0x00003dae) popup_query_data_window_t1_ParamLimits

0x3dae,	// (0x00003dae) popup_query_data_window_t1

0x3dc0,	// (0x00003dc0) popup_query_data_window_t2_ParamLimits

0x3dc0,	// (0x00003dc0) popup_query_data_window_t2

0x3dd9,	// (0x00003dd9) popup_query_data_window_t3_ParamLimits

0x3dd9,	// (0x00003dd9) popup_query_data_window_t3

0x0002,

0xab0a,	// (0x0000ab0a) popup_query_data_window_t_ParamLimits

0xab0a,	// (0x0000ab0a) popup_query_data_window_t

0x3df3,	// (0x00003df3) query_popup_data_pane_ParamLimits

0x3df3,	// (0x00003df3) query_popup_data_pane

0x3e07,	// (0x00003e07) query_popup_data_pane_cp1_ParamLimits

0x3e07,	// (0x00003e07) query_popup_data_pane_cp1

0x3c9a,	// (0x00003c9a) bg_popup_window_pane_cp10_ParamLimits

0x3c9a,	// (0x00003c9a) bg_popup_window_pane_cp10

0x3ccc,	// (0x00003ccc) indicator_popup_pane_ParamLimits

0x3ccc,	// (0x00003ccc) indicator_popup_pane

0x3cee,	// (0x00003cee) popup_query_code_window_t1_ParamLimits

0x3cee,	// (0x00003cee) popup_query_code_window_t1

0x3d08,	// (0x00003d08) popup_query_code_window_t2_ParamLimits

0x3d08,	// (0x00003d08) popup_query_code_window_t2

0x3d51,	// (0x00003d51) popup_query_code_window_t3_ParamLimits

0x3d51,	// (0x00003d51) popup_query_code_window_t3

0x0002,

0xab03,	// (0x0000ab03) popup_query_code_window_t_ParamLimits

0xab03,	// (0x0000ab03) popup_query_code_window_t

0x3d80,	// (0x00003d80) query_popup_pane_ParamLimits

0x3d80,	// (0x00003d80) query_popup_pane

0x08d9,	// (0x000008d9) bg_popup_window_pane_cp15_ParamLimits

0x08d9,	// (0x000008d9) bg_popup_window_pane_cp15

0x08f7,	// (0x000008f7) indicator_popup_pane_cp1_ParamLimits

0x08f7,	// (0x000008f7) indicator_popup_pane_cp1

0x090a,	// (0x0000090a) indicator_popup_pane_cp2_ParamLimits

0x090a,	// (0x0000090a) indicator_popup_pane_cp2

0x091d,	// (0x0000091d) popup_query_data_code_window_g1_ParamLimits

0x091d,	// (0x0000091d) popup_query_data_code_window_g1

0x0930,	// (0x00000930) popup_query_data_code_window_t1_ParamLimits

0x0930,	// (0x00000930) popup_query_data_code_window_t1

0x0942,	// (0x00000942) popup_query_data_code_window_t2_ParamLimits

0x0942,	// (0x00000942) popup_query_data_code_window_t2

0x0954,	// (0x00000954) popup_query_data_code_window_t3_ParamLimits

0x0954,	// (0x00000954) popup_query_data_code_window_t3

0x096a,	// (0x0000096a) popup_query_data_code_window_t4_ParamLimits

0x096a,	// (0x0000096a) popup_query_data_code_window_t4

0x0003,

0xa871,	// (0x0000a871) popup_query_data_code_window_t_ParamLimits

0xa871,	// (0x0000a871) popup_query_data_code_window_t

0x36e9,	// (0x000036e9) list_single_midp_graphic_pane_g3

0x0982,	// (0x00000982) query_popup_data_pane_cp2_ParamLimits

0x0995,	// (0x00000995) query_popup_pane_cp2_ParamLimits

0x0995,	// (0x00000995) query_popup_pane_cp2

0x0293,	// (0x00000293) bg_popup_window_pane_cp11

0x3c92,	// (0x00003c92) heading_pane_cp5

0x0a7d,	// (0x00000a7d) listscroll_popup_info_pane

0x0293,	// (0x00000293) input_focus_pane_cp3

0x09a8,	// (0x000009a8) query_popup_pane_t1

0x09b6,	// (0x000009b6) list_popup_info_pane_ParamLimits

0x09b6,	// (0x000009b6) list_popup_info_pane

0x09c5,	// (0x000009c5) listscroll_popup_info_pane_g1

0x09cd,	// (0x000009cd) scroll_pane_cp7

0x09d7,	// (0x000009d7) popup_info_list_pane_t1_ParamLimits

0x09d7,	// (0x000009d7) popup_info_list_pane_t1

0x09f1,	// (0x000009f1) popup_info_list_pane_t2_ParamLimits

0x09f1,	// (0x000009f1) popup_info_list_pane_t2

0x0001,

0xa87a,	// (0x0000a87a) popup_info_list_pane_t_ParamLimits

0xa87a,	// (0x0000a87a) popup_info_list_pane_t

0x0293,	// (0x00000293) bg_popup_window_pane_cp12

0x53d7,	// (0x000053d7) find_popup_pane

0x04fd,	// (0x000004fd) bg_popup_window_pane_cp3

0x0a0b,	// (0x00000a0b) heading_pane_cp3

0x0a17,	// (0x00000a17) listscroll_popup_graphic_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp4

0xb66e,	// (0x0000b66e) heading_pane_cp4

0x0a7d,	// (0x00000a7d) listscroll_popup_colour_pane

0xb676,	// (0x0000b676) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb676,	// (0x0000b676) cell_large_graphic_colour_none_popup_pane

0xb68a,	// (0x0000b68a) grid_large_graphic_colour_popup_pane_ParamLimits

0xb68a,	// (0x0000b68a) grid_large_graphic_colour_popup_pane

0xb6ae,	// (0x0000b6ae) listscroll_popup_colour_pane_g1_ParamLimits

0xb6ae,	// (0x0000b6ae) listscroll_popup_colour_pane_g1

0xb6c5,	// (0x0000b6c5) listscroll_popup_colour_pane_g2_ParamLimits

0xb6c5,	// (0x0000b6c5) listscroll_popup_colour_pane_g2

0xb6dc,	// (0x0000b6dc) listscroll_popup_colour_pane_g3_ParamLimits

0xb6dc,	// (0x0000b6dc) listscroll_popup_colour_pane_g3

0xb6ec,	// (0x0000b6ec) listscroll_popup_colour_pane_g4_ParamLimits

0xb6ec,	// (0x0000b6ec) listscroll_popup_colour_pane_g4

0x0003,

0xf2c8,	// (0x0000f2c8) listscroll_popup_colour_pane_g_ParamLimits

0xf2c8,	// (0x0000f2c8) listscroll_popup_colour_pane_g

0x0b17,	// (0x00000b17) scroll_pane_cp6_ParamLimits

0x0b17,	// (0x00000b17) scroll_pane_cp6

0xb6fc,	// (0x0000b6fc) cell_large_graphic_colour_popup_pane_ParamLimits

0xb6fc,	// (0x0000b6fc) cell_large_graphic_colour_popup_pane

0x0b48,	// (0x00000b48) cell_large_graphic_colour_none_popup_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp5

0x0b57,	// (0x00000b57) cell_large_graphic_colour_popup_pane_g1

0x0b5f,	// (0x00000b5f) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xa888,	// (0x0000a888) cell_large_graphic_colour_popup_pane_g

0x0b67,	// (0x00000b67) cell_large_graphic_colour_popup_pane_g2_copy1

0x0b70,	// (0x00000b70) grid_highlight_pane_cp4

0x0b78,	// (0x00000b78) bg_popup_window_pane_cp8_ParamLimits

0x0b78,	// (0x00000b78) bg_popup_window_pane_cp8

0x0b93,	// (0x00000b93) popup_snote_single_text_window_g1_ParamLimits

0x0b93,	// (0x00000b93) popup_snote_single_text_window_g1

0x0ba5,	// (0x00000ba5) popup_snote_single_text_window_t1_ParamLimits

0x0ba5,	// (0x00000ba5) popup_snote_single_text_window_t1

0x0bb8,	// (0x00000bb8) popup_snote_single_text_window_t2_ParamLimits

0x0bb8,	// (0x00000bb8) popup_snote_single_text_window_t2

0x0bcb,	// (0x00000bcb) popup_snote_single_text_window_t3_ParamLimits

0x0bcb,	// (0x00000bcb) popup_snote_single_text_window_t3

0x0c04,	// (0x00000c04) popup_snote_single_text_window_t4_ParamLimits

0x0c04,	// (0x00000c04) popup_snote_single_text_window_t4

0x0c38,	// (0x00000c38) popup_snote_single_text_window_t5_ParamLimits

0x0c38,	// (0x00000c38) popup_snote_single_text_window_t5

0x0004,

0xa88d,	// (0x0000a88d) popup_snote_single_text_window_t_ParamLimits

0xa88d,	// (0x0000a88d) popup_snote_single_text_window_t

0x0c67,	// (0x00000c67) bg_popup_window_pane_cp9_ParamLimits

0x0c67,	// (0x00000c67) bg_popup_window_pane_cp9

0x0b93,	// (0x00000b93) popup_snote_single_graphic_window_g1_ParamLimits

0x0b93,	// (0x00000b93) popup_snote_single_graphic_window_g1

0x0c75,	// (0x00000c75) popup_snote_single_graphic_window_g2_ParamLimits

0x0c75,	// (0x00000c75) popup_snote_single_graphic_window_g2

0x0001,

0xa898,	// (0x0000a898) popup_snote_single_graphic_window_g_ParamLimits

0xa898,	// (0x0000a898) popup_snote_single_graphic_window_g

0x0c81,	// (0x00000c81) popup_snote_single_graphic_window_t1_ParamLimits

0x0c81,	// (0x00000c81) popup_snote_single_graphic_window_t1

0x0c94,	// (0x00000c94) popup_snote_single_graphic_window_t2_ParamLimits

0x0c94,	// (0x00000c94) popup_snote_single_graphic_window_t2

0x0ca7,	// (0x00000ca7) popup_snote_single_graphic_window_t3_ParamLimits

0x0ca7,	// (0x00000ca7) popup_snote_single_graphic_window_t3

0x0ce0,	// (0x00000ce0) popup_snote_single_graphic_window_t4_ParamLimits

0x0ce0,	// (0x00000ce0) popup_snote_single_graphic_window_t4

0x0d14,	// (0x00000d14) popup_snote_single_graphic_window_t5_ParamLimits

0x0d14,	// (0x00000d14) popup_snote_single_graphic_window_t5

0x0004,

0xa89d,	// (0x0000a89d) popup_snote_single_graphic_window_t_ParamLimits

0xa89d,	// (0x0000a89d) popup_snote_single_graphic_window_t

0x5263,	// (0x00005263) grid_graphic_popup_pane_ParamLimits

0x5263,	// (0x00005263) grid_graphic_popup_pane

0x528b,	// (0x0000528b) listscroll_popup_graphic_pane_g1_ParamLimits

0x528b,	// (0x0000528b) listscroll_popup_graphic_pane_g1

0xd2f1,	// (0x0000d2f1) listscroll_popup_graphic_pane_g2_ParamLimits

0xd2f1,	// (0x0000d2f1) listscroll_popup_graphic_pane_g2

0x0001,

0xf44e,	// (0x0000f44e) listscroll_popup_graphic_pane_g_ParamLimits

0xf44e,	// (0x0000f44e) listscroll_popup_graphic_pane_g

0x52b3,	// (0x000052b3) scroll_pane_cp5

0xd2b5,	// (0x0000d2b5) cell_graphic_popup_pane_ParamLimits

0xd2b5,	// (0x0000d2b5) cell_graphic_popup_pane

0x51ed,	// (0x000051ed) cell_graphic_popup_pane_g1

0x51f5,	// (0x000051f5) cell_graphic_popup_pane_g2

0x0b67,	// (0x00000b67) cell_graphic_popup_pane_g3

0x0002,

0xac79,	// (0x0000ac79) cell_graphic_popup_pane_g

0x51fe,	// (0x000051fe) cell_graphic_popup_pane_t2

0x0b70,	// (0x00000b70) grid_highlight_pane_cp3

0x0d55,	// (0x00000d55) list_gen_pane_ParamLimits

0x0d55,	// (0x00000d55) list_gen_pane

0x0d87,	// (0x00000d87) scroll_pane

0xd270,	// (0x0000d270) bg_list_pane_g1_ParamLimits

0xd270,	// (0x0000d270) bg_list_pane_g1

0x516a,	// (0x0000516a) bg_list_pane_g2_ParamLimits

0x516a,	// (0x0000516a) bg_list_pane_g2

0x517d,	// (0x0000517d) bg_list_pane_g3_ParamLimits

0x517d,	// (0x0000517d) bg_list_pane_g3

0x518f,	// (0x0000518f) bg_list_pane_g4_ParamLimits

0x518f,	// (0x0000518f) bg_list_pane_g4

0xd28b,	// (0x0000d28b) bg_list_pane_g5_ParamLimits

0xd28b,	// (0x0000d28b) bg_list_pane_g5

0x0004,

0xf443,	// (0x0000f443) bg_list_pane_g_ParamLimits

0xf443,	// (0x0000f443) bg_list_pane_g

0xd216,	// (0x0000d216) list_double2_graphic_large_graphic_pane_ParamLimits

0xd216,	// (0x0000d216) list_double2_graphic_large_graphic_pane

0xd216,	// (0x0000d216) list_double2_graphic_pane_ParamLimits

0xd216,	// (0x0000d216) list_double2_graphic_pane

0xd216,	// (0x0000d216) list_double2_large_graphic_pane_ParamLimits

0xd216,	// (0x0000d216) list_double2_large_graphic_pane

0xd216,	// (0x0000d216) list_double2_pane_ParamLimits

0xd216,	// (0x0000d216) list_double2_pane

0xd216,	// (0x0000d216) list_double_graphic_heading_pane_ParamLimits

0xd216,	// (0x0000d216) list_double_graphic_heading_pane

0xd216,	// (0x0000d216) list_double_graphic_pane_ParamLimits

0xd216,	// (0x0000d216) list_double_graphic_pane

0xd216,	// (0x0000d216) list_double_heading_pane_ParamLimits

0xd216,	// (0x0000d216) list_double_heading_pane

0xd216,	// (0x0000d216) list_double_large_graphic_pane_ParamLimits

0xd216,	// (0x0000d216) list_double_large_graphic_pane

0xd216,	// (0x0000d216) list_double_number_pane_ParamLimits

0xd216,	// (0x0000d216) list_double_number_pane

0xd216,	// (0x0000d216) list_double_pane_ParamLimits

0xd216,	// (0x0000d216) list_double_pane

0xd216,	// (0x0000d216) list_double_time_pane_ParamLimits

0xd216,	// (0x0000d216) list_double_time_pane

0xd216,	// (0x0000d216) list_setting_number_pane_ParamLimits

0xd216,	// (0x0000d216) list_setting_number_pane

0xd216,	// (0x0000d216) list_setting_pane_ParamLimits

0xd216,	// (0x0000d216) list_setting_pane

0xd228,	// (0x0000d228) list_single_2graphic_pane_ParamLimits

0xd228,	// (0x0000d228) list_single_2graphic_pane

0xd228,	// (0x0000d228) list_single_graphic_heading_pane_ParamLimits

0xd228,	// (0x0000d228) list_single_graphic_heading_pane

0xd228,	// (0x0000d228) list_single_graphic_pane_ParamLimits

0xd228,	// (0x0000d228) list_single_graphic_pane

0xd228,	// (0x0000d228) list_single_heading_pane_ParamLimits

0xd228,	// (0x0000d228) list_single_heading_pane

0xd216,	// (0x0000d216) list_single_large_graphic_pane_ParamLimits

0xd216,	// (0x0000d216) list_single_large_graphic_pane

0xd228,	// (0x0000d228) list_single_number_heading_pane_ParamLimits

0xd228,	// (0x0000d228) list_single_number_heading_pane

0xd228,	// (0x0000d228) list_single_number_pane_ParamLimits

0xd228,	// (0x0000d228) list_single_number_pane

0xd228,	// (0x0000d228) list_single_pane_ParamLimits

0xd228,	// (0x0000d228) list_single_pane

0x0293,	// (0x00000293) list_highlight_pane_cp1

0x3514,	// (0x00003514) list_single_pane_g1_ParamLimits

0x3514,	// (0x00003514) list_single_pane_g1

0x3520,	// (0x00003520) list_single_pane_g2_ParamLimits

0x3520,	// (0x00003520) list_single_pane_g2

0x0001,

0xaab6,	// (0x0000aab6) list_single_pane_g_ParamLimits

0xaab6,	// (0x0000aab6) list_single_pane_g

0x59a0,	// (0x000059a0) list_single_pane_t1_ParamLimits

0x59a0,	// (0x000059a0) list_single_pane_t1

0x3514,	// (0x00003514) list_single_number_pane_g1_ParamLimits

0x3514,	// (0x00003514) list_single_number_pane_g1

0x3520,	// (0x00003520) list_single_number_pane_g2_ParamLimits

0x3520,	// (0x00003520) list_single_number_pane_g2

0x0001,

0xaab6,	// (0x0000aab6) list_single_number_pane_g_ParamLimits

0xaab6,	// (0x0000aab6) list_single_number_pane_g

0x360a,	// (0x0000360a) list_single_number_pane_t1_ParamLimits

0x360a,	// (0x0000360a) list_single_number_pane_t1

0xd058,	// (0x0000d058) list_single_number_pane_t2_ParamLimits

0xd058,	// (0x0000d058) list_single_number_pane_t2

0x0001,

0xf426,	// (0x0000f426) list_single_number_pane_t_ParamLimits

0xf426,	// (0x0000f426) list_single_number_pane_t

0x7183,	// (0x00007183) list_single_graphic_pane_g1_ParamLimits

0x7183,	// (0x00007183) list_single_graphic_pane_g1

0x3514,	// (0x00003514) list_single_graphic_pane_g2_ParamLimits

0x3514,	// (0x00003514) list_single_graphic_pane_g2

0x3520,	// (0x00003520) list_single_graphic_pane_g3_ParamLimits

0x3520,	// (0x00003520) list_single_graphic_pane_g3

0x0002,

0xf2d1,	// (0x0000f2d1) list_single_graphic_pane_g_ParamLimits

0xf2d1,	// (0x0000f2d1) list_single_graphic_pane_g

0xb725,	// (0x0000b725) list_single_graphic_pane_t1_ParamLimits

0xb725,	// (0x0000b725) list_single_graphic_pane_t1

0x3514,	// (0x00003514) list_single_heading_pane_g1_ParamLimits

0x3514,	// (0x00003514) list_single_heading_pane_g1

0x3520,	// (0x00003520) list_single_heading_pane_g2_ParamLimits

0x3520,	// (0x00003520) list_single_heading_pane_g2

0x0001,

0xaab6,	// (0x0000aab6) list_single_heading_pane_g_ParamLimits

0xaab6,	// (0x0000aab6) list_single_heading_pane_g

0xb73b,	// (0x0000b73b) list_single_heading_pane_t1_ParamLimits

0xb73b,	// (0x0000b73b) list_single_heading_pane_t1

0xb751,	// (0x0000b751) list_single_heading_pane_t2_ParamLimits

0xb751,	// (0x0000b751) list_single_heading_pane_t2

0x0001,

0xf2d8,	// (0x0000f2d8) list_single_heading_pane_t_ParamLimits

0xf2d8,	// (0x0000f2d8) list_single_heading_pane_t

0x3514,	// (0x00003514) list_single_number_heading_pane_g1_ParamLimits

0x3514,	// (0x00003514) list_single_number_heading_pane_g1

0x3520,	// (0x00003520) list_single_number_heading_pane_g2_ParamLimits

0x3520,	// (0x00003520) list_single_number_heading_pane_g2

0x0001,

0xaab6,	// (0x0000aab6) list_single_number_heading_pane_g_ParamLimits

0xaab6,	// (0x0000aab6) list_single_number_heading_pane_g

0xb73b,	// (0x0000b73b) list_single_number_heading_pane_t1_ParamLimits

0xb73b,	// (0x0000b73b) list_single_number_heading_pane_t1

0xb763,	// (0x0000b763) list_single_number_heading_pane_t2_ParamLimits

0xb763,	// (0x0000b763) list_single_number_heading_pane_t2

0x597a,	// (0x0000597a) list_single_number_heading_pane_t3_ParamLimits

0x597a,	// (0x0000597a) list_single_number_heading_pane_t3

0x0002,

0xf2dd,	// (0x0000f2dd) list_single_number_heading_pane_t_ParamLimits

0xf2dd,	// (0x0000f2dd) list_single_number_heading_pane_t

0x3508,	// (0x00003508) list_single_graphic_heading_pane_g1_ParamLimits

0x3508,	// (0x00003508) list_single_graphic_heading_pane_g1

0xb775,	// (0x0000b775) list_single_graphic_heading_pane_g4_ParamLimits

0xb775,	// (0x0000b775) list_single_graphic_heading_pane_g4

0x3520,	// (0x00003520) list_single_graphic_heading_pane_g5_ParamLimits

0x3520,	// (0x00003520) list_single_graphic_heading_pane_g5

0x0002,

0xf2e4,	// (0x0000f2e4) list_single_graphic_heading_pane_g_ParamLimits

0xf2e4,	// (0x0000f2e4) list_single_graphic_heading_pane_g

0xb73b,	// (0x0000b73b) list_single_graphic_heading_pane_t1_ParamLimits

0xb73b,	// (0x0000b73b) list_single_graphic_heading_pane_t1

0xb786,	// (0x0000b786) list_single_graphic_heading_pane_t2_ParamLimits

0xb786,	// (0x0000b786) list_single_graphic_heading_pane_t2

0x0001,

0xf2eb,	// (0x0000f2eb) list_single_graphic_heading_pane_t_ParamLimits

0xf2eb,	// (0x0000f2eb) list_single_graphic_heading_pane_t

0x59b6,	// (0x000059b6) list_single_large_graphic_pane_g1_ParamLimits

0x59b6,	// (0x000059b6) list_single_large_graphic_pane_g1

0x59c2,	// (0x000059c2) list_single_large_graphic_pane_g2_ParamLimits

0x59c2,	// (0x000059c2) list_single_large_graphic_pane_g2

0x59ce,	// (0x000059ce) list_single_large_graphic_pane_g3_ParamLimits

0x59ce,	// (0x000059ce) list_single_large_graphic_pane_g3

0x0002,

0xad09,	// (0x0000ad09) list_single_large_graphic_pane_g_ParamLimits

0xad09,	// (0x0000ad09) list_single_large_graphic_pane_g

0x3e3a,	// (0x00003e3a) wait_border_pane_g2_copy1

0xb798,	// (0x0000b798) list_single_large_graphic_pane_g4_cp2

0x59da,	// (0x000059da) list_single_large_graphic_pane_t1_ParamLimits

0x59da,	// (0x000059da) list_single_large_graphic_pane_t1

0x23c8,	// (0x000023c8) list_double_pane_g1_ParamLimits

0x23c8,	// (0x000023c8) list_double_pane_g1

0xb7a0,	// (0x0000b7a0) list_double_pane_g2_ParamLimits

0xb7a0,	// (0x0000b7a0) list_double_pane_g2

0x0001,

0xf2f0,	// (0x0000f2f0) list_double_pane_g_ParamLimits

0xf2f0,	// (0x0000f2f0) list_double_pane_g

0xb7ac,	// (0x0000b7ac) list_double_pane_t1_ParamLimits

0xb7ac,	// (0x0000b7ac) list_double_pane_t1

0xb7c2,	// (0x0000b7c2) list_double_pane_t2_ParamLimits

0xb7c2,	// (0x0000b7c2) list_double_pane_t2

0x0001,

0xf2f5,	// (0x0000f2f5) list_double_pane_t_ParamLimits

0xf2f5,	// (0x0000f2f5) list_double_pane_t

0xb7d4,	// (0x0000b7d4) list_double2_pane_g1_ParamLimits

0xb7d4,	// (0x0000b7d4) list_double2_pane_g1

0x10dc,	// (0x000010dc) list_double2_pane_g2_ParamLimits

0x10dc,	// (0x000010dc) list_double2_pane_g2

0x0001,

0xf2fa,	// (0x0000f2fa) list_double2_pane_g_ParamLimits

0xf2fa,	// (0x0000f2fa) list_double2_pane_g

0xb7e5,	// (0x0000b7e5) list_double2_pane_t1_ParamLimits

0xb7e5,	// (0x0000b7e5) list_double2_pane_t1

0xb7fb,	// (0x0000b7fb) list_double2_pane_t2_ParamLimits

0xb7fb,	// (0x0000b7fb) list_double2_pane_t2

0x0001,

0xf2ff,	// (0x0000f2ff) list_double2_pane_t_ParamLimits

0xf2ff,	// (0x0000f2ff) list_double2_pane_t

0x23c8,	// (0x000023c8) list_double_number_pane_g1_ParamLimits

0x23c8,	// (0x000023c8) list_double_number_pane_g1

0xb7a0,	// (0x0000b7a0) list_double_number_pane_g2_ParamLimits

0xb7a0,	// (0x0000b7a0) list_double_number_pane_g2

0x0001,

0xf2f0,	// (0x0000f2f0) list_double_number_pane_g_ParamLimits

0xf2f0,	// (0x0000f2f0) list_double_number_pane_g

0xb80d,	// (0x0000b80d) list_double_number_pane_t1_ParamLimits

0xb80d,	// (0x0000b80d) list_double_number_pane_t1

0xb81f,	// (0x0000b81f) list_double_number_pane_t2_ParamLimits

0xb81f,	// (0x0000b81f) list_double_number_pane_t2

0xb835,	// (0x0000b835) list_double_number_pane_t3_ParamLimits

0xb835,	// (0x0000b835) list_double_number_pane_t3

0x0002,

0xf304,	// (0x0000f304) list_double_number_pane_t_ParamLimits

0xf304,	// (0x0000f304) list_double_number_pane_t

0xb847,	// (0x0000b847) list_double_graphic_pane_g1_ParamLimits

0xb847,	// (0x0000b847) list_double_graphic_pane_g1

0xb853,	// (0x0000b853) list_double_graphic_pane_g2_ParamLimits

0xb853,	// (0x0000b853) list_double_graphic_pane_g2

0xb862,	// (0x0000b862) list_double_graphic_pane_g3_ParamLimits

0xb862,	// (0x0000b862) list_double_graphic_pane_g3

0x0003,

0xf30b,	// (0x0000f30b) list_double_graphic_pane_g_ParamLimits

0xf30b,	// (0x0000f30b) list_double_graphic_pane_g

0xb87a,	// (0x0000b87a) list_double_graphic_pane_t1_ParamLimits

0xb87a,	// (0x0000b87a) list_double_graphic_pane_t1

0xb890,	// (0x0000b890) list_double_graphic_pane_t2_ParamLimits

0xb890,	// (0x0000b890) list_double_graphic_pane_t2

0x0001,

0xf314,	// (0x0000f314) list_double_graphic_pane_t_ParamLimits

0xf314,	// (0x0000f314) list_double_graphic_pane_t

0xb8a2,	// (0x0000b8a2) list_double2_graphic_pane_g1_ParamLimits

0xb8a2,	// (0x0000b8a2) list_double2_graphic_pane_g1

0xb8ae,	// (0x0000b8ae) list_double2_graphic_pane_g2_ParamLimits

0xb8ae,	// (0x0000b8ae) list_double2_graphic_pane_g2

0x10dc,	// (0x000010dc) list_double2_graphic_pane_g3_ParamLimits

0x10dc,	// (0x000010dc) list_double2_graphic_pane_g3

0x0002,

0xf319,	// (0x0000f319) list_double2_graphic_pane_g_ParamLimits

0xf319,	// (0x0000f319) list_double2_graphic_pane_g

0xb8ba,	// (0x0000b8ba) list_double2_graphic_pane_t1_ParamLimits

0xb8ba,	// (0x0000b8ba) list_double2_graphic_pane_t1

0xb8d0,	// (0x0000b8d0) list_double2_graphic_pane_t2_ParamLimits

0xb8d0,	// (0x0000b8d0) list_double2_graphic_pane_t2

0x0001,

0xf320,	// (0x0000f320) list_double2_graphic_pane_t_ParamLimits

0xf320,	// (0x0000f320) list_double2_graphic_pane_t

0xb8e2,	// (0x0000b8e2) list_double_large_graphic_pane_g1_ParamLimits

0xb8e2,	// (0x0000b8e2) list_double_large_graphic_pane_g1

0xb90d,	// (0x0000b90d) list_double_large_graphic_pane_g2_ParamLimits

0xb90d,	// (0x0000b90d) list_double_large_graphic_pane_g2

0xb7a0,	// (0x0000b7a0) list_double_large_graphic_pane_g3_ParamLimits

0xb7a0,	// (0x0000b7a0) list_double_large_graphic_pane_g3

0xb91e,	// (0x0000b91e) list_double_large_graphic_pane_g4_ParamLimits

0xb91e,	// (0x0000b91e) list_double_large_graphic_pane_g4

0x0004,

0xf325,	// (0x0000f325) list_double_large_graphic_pane_g_ParamLimits

0xf325,	// (0x0000f325) list_double_large_graphic_pane_g

0xb930,	// (0x0000b930) list_double_large_graphic_pane_t1_ParamLimits

0xb930,	// (0x0000b930) list_double_large_graphic_pane_t1

0xb949,	// (0x0000b949) list_double_large_graphic_pane_t2_ParamLimits

0xb949,	// (0x0000b949) list_double_large_graphic_pane_t2

0x0001,

0xf330,	// (0x0000f330) list_double_large_graphic_pane_t_ParamLimits

0xf330,	// (0x0000f330) list_double_large_graphic_pane_t

0xb95b,	// (0x0000b95b) list_double2_large_graphic_pane_g1_ParamLimits

0xb95b,	// (0x0000b95b) list_double2_large_graphic_pane_g1

0xb7d4,	// (0x0000b7d4) list_double2_large_graphic_pane_g2_ParamLimits

0xb7d4,	// (0x0000b7d4) list_double2_large_graphic_pane_g2

0x10dc,	// (0x000010dc) list_double2_large_graphic_pane_g3_ParamLimits

0x10dc,	// (0x000010dc) list_double2_large_graphic_pane_g3

0x0002,

0xf335,	// (0x0000f335) list_double2_large_graphic_pane_g_ParamLimits

0xf335,	// (0x0000f335) list_double2_large_graphic_pane_g

0xb967,	// (0x0000b967) list_double2_large_graphic_pane_t1_ParamLimits

0xb967,	// (0x0000b967) list_double2_large_graphic_pane_t1

0xb97d,	// (0x0000b97d) list_double2_large_graphic_pane_t2_ParamLimits

0xb97d,	// (0x0000b97d) list_double2_large_graphic_pane_t2

0x0001,

0xf33c,	// (0x0000f33c) list_double2_large_graphic_pane_t_ParamLimits

0xf33c,	// (0x0000f33c) list_double2_large_graphic_pane_t

0xb98f,	// (0x0000b98f) list_double_heading_pane_g1_ParamLimits

0xb98f,	// (0x0000b98f) list_double_heading_pane_g1

0xb9a0,	// (0x0000b9a0) list_double_heading_pane_g2_ParamLimits

0xb9a0,	// (0x0000b9a0) list_double_heading_pane_g2

0x0001,

0xf341,	// (0x0000f341) list_double_heading_pane_g_ParamLimits

0xf341,	// (0x0000f341) list_double_heading_pane_g

0xb9ac,	// (0x0000b9ac) list_double_heading_pane_t1_ParamLimits

0xb9ac,	// (0x0000b9ac) list_double_heading_pane_t1

0xb9c2,	// (0x0000b9c2) list_double_heading_pane_t2_ParamLimits

0xb9c2,	// (0x0000b9c2) list_double_heading_pane_t2

0x0001,

0xf346,	// (0x0000f346) list_double_heading_pane_t_ParamLimits

0xf346,	// (0x0000f346) list_double_heading_pane_t

0x0f71,	// (0x00000f71) list_double_graphic_heading_pane_g1_ParamLimits

0x0f71,	// (0x00000f71) list_double_graphic_heading_pane_g1

0xb98f,	// (0x0000b98f) list_double_graphic_heading_pane_g2_ParamLimits

0xb98f,	// (0x0000b98f) list_double_graphic_heading_pane_g2

0xb9a0,	// (0x0000b9a0) list_double_graphic_heading_pane_g3_ParamLimits

0xb9a0,	// (0x0000b9a0) list_double_graphic_heading_pane_g3

0x0002,

0xf34b,	// (0x0000f34b) list_double_graphic_heading_pane_g_ParamLimits

0xf34b,	// (0x0000f34b) list_double_graphic_heading_pane_g

0xb9d4,	// (0x0000b9d4) list_double_graphic_heading_pane_t1_ParamLimits

0xb9d4,	// (0x0000b9d4) list_double_graphic_heading_pane_t1

0xb9ea,	// (0x0000b9ea) list_double_graphic_heading_pane_t2_ParamLimits

0xb9ea,	// (0x0000b9ea) list_double_graphic_heading_pane_t2

0x0001,

0xf352,	// (0x0000f352) list_double_graphic_heading_pane_t_ParamLimits

0xf352,	// (0x0000f352) list_double_graphic_heading_pane_t

0xb90d,	// (0x0000b90d) list_double_time_pane_g1_ParamLimits

0xb90d,	// (0x0000b90d) list_double_time_pane_g1

0xb7a0,	// (0x0000b7a0) list_double_time_pane_g2_ParamLimits

0xb7a0,	// (0x0000b7a0) list_double_time_pane_g2

0x0001,

0xf357,	// (0x0000f357) list_double_time_pane_g_ParamLimits

0xf357,	// (0x0000f357) list_double_time_pane_g

0xb9fc,	// (0x0000b9fc) list_double_time_pane_t1_ParamLimits

0xb9fc,	// (0x0000b9fc) list_double_time_pane_t1

0xba12,	// (0x0000ba12) list_double_time_pane_t2_ParamLimits

0xba12,	// (0x0000ba12) list_double_time_pane_t2

0xba24,	// (0x0000ba24) list_double_time_pane_t3_ParamLimits

0xba24,	// (0x0000ba24) list_double_time_pane_t3

0xba36,	// (0x0000ba36) list_double_time_pane_t4_ParamLimits

0xba36,	// (0x0000ba36) list_double_time_pane_t4

0x0003,

0xf35c,	// (0x0000f35c) list_double_time_pane_t_ParamLimits

0xf35c,	// (0x0000f35c) list_double_time_pane_t

0xb8ae,	// (0x0000b8ae) list_setting_pane_g1_ParamLimits

0xb8ae,	// (0x0000b8ae) list_setting_pane_g1

0x10dc,	// (0x000010dc) list_setting_pane_g2_ParamLimits

0x10dc,	// (0x000010dc) list_setting_pane_g2

0x0001,

0xf365,	// (0x0000f365) list_setting_pane_g_ParamLimits

0xf365,	// (0x0000f365) list_setting_pane_g

0xba48,	// (0x0000ba48) list_setting_pane_t1_ParamLimits

0xba48,	// (0x0000ba48) list_setting_pane_t1

0xba5f,	// (0x0000ba5f) list_setting_pane_t2_ParamLimits

0xba5f,	// (0x0000ba5f) list_setting_pane_t2

0x0002,

0xf36a,	// (0x0000f36a) list_setting_pane_t_ParamLimits

0xf36a,	// (0x0000f36a) list_setting_pane_t

0xba9e,	// (0x0000ba9e) set_value_pane_cp_ParamLimits

0xba9e,	// (0x0000ba9e) set_value_pane_cp

0xb8ae,	// (0x0000b8ae) list_setting_number_pane_g1_ParamLimits

0xb8ae,	// (0x0000b8ae) list_setting_number_pane_g1

0x10dc,	// (0x000010dc) list_setting_number_pane_g2_ParamLimits

0x10dc,	// (0x000010dc) list_setting_number_pane_g2

0x0001,

0xf365,	// (0x0000f365) list_setting_number_pane_g_ParamLimits

0xf365,	// (0x0000f365) list_setting_number_pane_g

0xbaaa,	// (0x0000baaa) list_setting_number_pane_t1_ParamLimits

0xbaaa,	// (0x0000baaa) list_setting_number_pane_t1

0xbabe,	// (0x0000babe) list_setting_number_pane_t2_ParamLimits

0xbabe,	// (0x0000babe) list_setting_number_pane_t2

0xbad5,	// (0x0000bad5) list_setting_number_pane_t3_ParamLimits

0xbad5,	// (0x0000bad5) list_setting_number_pane_t3

0x0003,

0xf371,	// (0x0000f371) list_setting_number_pane_t_ParamLimits

0xf371,	// (0x0000f371) list_setting_number_pane_t

0xba9e,	// (0x0000ba9e) set_value_pane_ParamLimits

0xba9e,	// (0x0000ba9e) set_value_pane

0x123c,	// (0x0000123c) bg_set_opt_pane_ParamLimits

0x123c,	// (0x0000123c) bg_set_opt_pane

0x125d,	// (0x0000125d) set_value_pane_t1

0x126b,	// (0x0000126b) slider_set_pane_cp3

0x1274,	// (0x00001274) volume_small_pane_cp

0x127d,	// (0x0000127d) list_form_gen_pane

0x1286,	// (0x00001286) scroll_pane_cp8

0xbb18,	// (0x0000bb18) form_field_data_pane_ParamLimits

0xbb18,	// (0x0000bb18) form_field_data_pane

0xbb2f,	// (0x0000bb2f) form_field_data_wide_pane_ParamLimits

0xbb2f,	// (0x0000bb2f) form_field_data_wide_pane

0xbb4f,	// (0x0000bb4f) form_field_popup_pane_ParamLimits

0xbb4f,	// (0x0000bb4f) form_field_popup_pane

0xbb67,	// (0x0000bb67) form_field_popup_wide_pane_ParamLimits

0xbb67,	// (0x0000bb67) form_field_popup_wide_pane

0x1321,	// (0x00001321) form_field_slider_pane_ParamLimits

0x1321,	// (0x00001321) form_field_slider_pane

0x1334,	// (0x00001334) form_field_slider_wide_pane_ParamLimits

0x1334,	// (0x00001334) form_field_slider_wide_pane

0x1347,	// (0x00001347) data_form_pane

0xbb88,	// (0x0000bb88) form_field_data_pane_t1

0x1375,	// (0x00001375) input_focus_pane

0x1383,	// (0x00001383) data_form_wide_pane

0x13bb,	// (0x000013bb) form_field_data_wide_pane_t1

0x0b85,	// (0x00000b85) input_focus_pane_cp6

0xbba2,	// (0x0000bba2) form_field_popup_pane_t1

0x1375,	// (0x00001375) input_focus_pane_cp7

0x13f5,	// (0x000013f5) list_form_pane

0x1409,	// (0x00001409) form_field_popup_wide_pane_t1

0x1375,	// (0x00001375) input_focus_pane_cp8

0x141e,	// (0x0000141e) list_form_wide_pane

0xbbc4,	// (0x0000bbc4) form_field_slider_pane_t1_ParamLimits

0xbbc4,	// (0x0000bbc4) form_field_slider_pane_t1

0xbbdc,	// (0x0000bbdc) form_field_slider_pane_t2_ParamLimits

0xbbdc,	// (0x0000bbdc) form_field_slider_pane_t2

0x0001,

0xf37a,	// (0x0000f37a) form_field_slider_pane_t_ParamLimits

0xf37a,	// (0x0000f37a) form_field_slider_pane_t

0x0823,	// (0x00000823) input_focus_pane_cp9_ParamLimits

0x0823,	// (0x00000823) input_focus_pane_cp9

0xbbf1,	// (0x0000bbf1) slider_cont_pane_ParamLimits

0xbbf1,	// (0x0000bbf1) slider_cont_pane

0x146d,	// (0x0000146d) form_field_slider_wide_pane_t1_ParamLimits

0x146d,	// (0x0000146d) form_field_slider_wide_pane_t1

0x147f,	// (0x0000147f) form_field_slider_wide_pane_t2_ParamLimits

0x147f,	// (0x0000147f) form_field_slider_wide_pane_t2

0x0001,

0xa969,	// (0x0000a969) form_field_slider_wide_pane_t_ParamLimits

0xa969,	// (0x0000a969) form_field_slider_wide_pane_t

0x0823,	// (0x00000823) input_focus_pane_cp10_ParamLimits

0x0823,	// (0x00000823) input_focus_pane_cp10

0xbc05,	// (0x0000bc05) slider_cont_pane_cp1_ParamLimits

0xbc05,	// (0x0000bc05) slider_cont_pane_cp1

0xbc19,	// (0x0000bc19) slider_form_pane_cp

0x14ad,	// (0x000014ad) input_focus_pane_g1

0x14b5,	// (0x000014b5) input_focus_pane_g2

0x14bd,	// (0x000014bd) input_focus_pane_g3

0x14c5,	// (0x000014c5) input_focus_pane_g4

0x14cd,	// (0x000014cd) input_focus_pane_g5

0x14d5,	// (0x000014d5) input_focus_pane_g6

0x14dd,	// (0x000014dd) input_focus_pane_g7

0x14e5,	// (0x000014e5) input_focus_pane_g8

0x14ed,	// (0x000014ed) input_focus_pane_g9

0x002e,	// (0x0000002e) input_focus_pane_g10

0x0009,

0xa96e,	// (0x0000a96e) input_focus_pane_g

0x3e43,	// (0x00003e43) wait_border_pane_g3_copy1

0xbc21,	// (0x0000bc21) data_form_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g1_copy1

0xd1eb,	// (0x0000d1eb) data_form_wide_pane_t1

0xbc3b,	// (0x0000bc3b) list_form_graphic_pane_cp_ParamLimits

0xbc3b,	// (0x0000bc3b) list_form_graphic_pane_cp

0x4fd3,	// (0x00004fd3) slider_form_pane_g1

0x4fdc,	// (0x00004fdc) slider_form_pane_g2

0x0006,

0xf434,	// (0x0000f434) slider_form_pane_g

0xbc4c,	// (0x0000bc4c) list_form_graphic_pane_ParamLimits

0xbc4c,	// (0x0000bc4c) list_form_graphic_pane

0x1545,	// (0x00001545) list_form_graphic_pane_g1

0x154d,	// (0x0000154d) list_form_graphic_pane_t1_ParamLimits

0x154d,	// (0x0000154d) list_form_graphic_pane_t1

0x04fd,	// (0x000004fd) list_highlight_pane_cp5_ParamLimits

0x04fd,	// (0x000004fd) list_highlight_pane_cp5

0xbc5e,	// (0x0000bc5e) find_pane_g1

0x156b,	// (0x0000156b) input_find_pane

0xbc67,	// (0x0000bc67) input_find_pane_g1_ParamLimits

0xbc67,	// (0x0000bc67) input_find_pane_g1

0xbc73,	// (0x0000bc73) input_find_pane_t1_ParamLimits

0xbc73,	// (0x0000bc73) input_find_pane_t1

0xbc88,	// (0x0000bc88) input_find_pane_t2_ParamLimits

0xbc88,	// (0x0000bc88) input_find_pane_t2

0x0001,

0xf37f,	// (0x0000f37f) input_find_pane_t_ParamLimits

0xf37f,	// (0x0000f37f) input_find_pane_t

0x15aa,	// (0x000015aa) input_focus_pane_cp5_ParamLimits

0x15aa,	// (0x000015aa) input_focus_pane_cp5

0xbca9,	// (0x0000bca9) bg_popup_window_pane_cp2_ParamLimits

0xbca9,	// (0x0000bca9) bg_popup_window_pane_cp2

0xbcb6,	// (0x0000bcb6) listscroll_menu_pane_ParamLimits

0xbcb6,	// (0x0000bcb6) listscroll_menu_pane

0xbcc2,	// (0x0000bcc2) popup_submenu_window_ParamLimits

0xbcc2,	// (0x0000bcc2) popup_submenu_window

0x1607,	// (0x00001607) find_popup_pane_g1

0x160f,	// (0x0000160f) input_popup_find_pane_cp

0x15aa,	// (0x000015aa) input_focus_pane_cp4_ParamLimits

0x15aa,	// (0x000015aa) input_focus_pane_cp4

0x1625,	// (0x00001625) input_popup_find_pane_t1_ParamLimits

0x1625,	// (0x00001625) input_popup_find_pane_t1

0x0293,	// (0x00000293) bg_popup_sub_pane_cp

0x1653,	// (0x00001653) listscroll_popup_sub_pane

0x165b,	// (0x0000165b) list_submenu_pane_ParamLimits

0x165b,	// (0x0000165b) list_submenu_pane

0x166c,	// (0x0000166c) scroll_pane_cp4

0x1674,	// (0x00001674) list_single_popup_submenu_pane_ParamLimits

0x1674,	// (0x00001674) list_single_popup_submenu_pane

0x1688,	// (0x00001688) list_single_popup_submenu_pane_g1

0x1690,	// (0x00001690) list_single_popup_submenu_pane_t1_ParamLimits

0x1690,	// (0x00001690) list_single_popup_submenu_pane_t1

0x0823,	// (0x00000823) bg_active_tab_pane_cp1_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp1

0xbcfa,	// (0x0000bcfa) tabs_2_active_pane_g1

0xbd02,	// (0x0000bd02) tabs_2_active_pane_t1

0x0823,	// (0x00000823) bg_passive_tab_pane_cp1_ParamLimits

0x0823,	// (0x00000823) bg_passive_tab_pane_cp1

0xbcfa,	// (0x0000bcfa) tabs_2_passive_pane_g1

0xbd02,	// (0x0000bd02) tabs_2_passive_pane_t1

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp4

0xbd14,	// (0x0000bd14) tabs_2_long_active_pane_t1

0x2b2c,	// (0x00002b2c) bg_passive_tab_pane_cp4

0x2073,	// (0x00002073) list_single_midp_graphic_pane_g4_ParamLimits

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp5

0xbd27,	// (0x0000bd27) tabs_3_long_active_pane_t1

0x2b2c,	// (0x00002b2c) bg_passive_tab_pane_cp5

0x2073,	// (0x00002073) list_single_midp_graphic_pane_g4

0x04fd,	// (0x000004fd) bg_popup_window_pane_cp13_ParamLimits

0x04fd,	// (0x000004fd) bg_popup_window_pane_cp13

0x1707,	// (0x00001707) listscroll_popup_fast_pane_ParamLimits

0x1707,	// (0x00001707) listscroll_popup_fast_pane

0x1716,	// (0x00001716) grid_popup_fast_pane_ParamLimits

0x1716,	// (0x00001716) grid_popup_fast_pane

0x1728,	// (0x00001728) scroll_pane_cp9_ParamLimits

0x1728,	// (0x00001728) scroll_pane_cp9

0x71e9,	// (0x000071e9) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x71e9,	// (0x000071e9) list_single_graphic_hl_pane_t1_cp2

0x174c,	// (0x0000174c) input_focus_pane_cp20_ParamLimits

0x174c,	// (0x0000174c) input_focus_pane_cp20

0x175a,	// (0x0000175a) query_popup_data_pane_t1_ParamLimits

0x175a,	// (0x0000175a) query_popup_data_pane_t1

0x176d,	// (0x0000176d) query_popup_data_pane_t2_ParamLimits

0x176d,	// (0x0000176d) query_popup_data_pane_t2

0x17b3,	// (0x000017b3) query_popup_data_pane_t3_ParamLimits

0x17b3,	// (0x000017b3) query_popup_data_pane_t3

0x17f4,	// (0x000017f4) query_popup_data_pane_t4_ParamLimits

0x17f4,	// (0x000017f4) query_popup_data_pane_t4

0x1830,	// (0x00001830) query_popup_data_pane_t5_ParamLimits

0x1830,	// (0x00001830) query_popup_data_pane_t5

0x0004,

0xa988,	// (0x0000a988) query_popup_data_pane_t_ParamLimits

0xa988,	// (0x0000a988) query_popup_data_pane_t

0x14ad,	// (0x000014ad) bg_set_opt_pane_g1

0x14b5,	// (0x000014b5) bg_set_opt_pane_g2

0x14bd,	// (0x000014bd) bg_set_opt_pane_g3

0x14c5,	// (0x000014c5) bg_set_opt_pane_g4

0x14cd,	// (0x000014cd) bg_set_opt_pane_g5

0x14d5,	// (0x000014d5) bg_set_opt_pane_g6

0x14dd,	// (0x000014dd) bg_set_opt_pane_g7

0x14e5,	// (0x000014e5) bg_set_opt_pane_g8

0x14ed,	// (0x000014ed) bg_set_opt_pane_g9

0x0008,

0xa993,	// (0x0000a993) bg_set_opt_pane_g

0x20fc,	// (0x000020fc) control_top_pane_stacon_ParamLimits

0x20fc,	// (0x000020fc) control_top_pane_stacon

0x214f,	// (0x0000214f) signal_pane_stacon_ParamLimits

0x214f,	// (0x0000214f) signal_pane_stacon

0x2174,	// (0x00002174) stacon_top_pane_g1_ParamLimits

0x2174,	// (0x00002174) stacon_top_pane_g1

0x2196,	// (0x00002196) title_pane_stacon_ParamLimits

0x2196,	// (0x00002196) title_pane_stacon

0x21c0,	// (0x000021c0) uni_indicator_pane_stacon_ParamLimits

0x21c0,	// (0x000021c0) uni_indicator_pane_stacon

0x21d5,	// (0x000021d5) battery_pane_stacon_ParamLimits

0x21d5,	// (0x000021d5) battery_pane_stacon

0x2219,	// (0x00002219) control_bottom_pane_stacon_ParamLimits

0x2219,	// (0x00002219) control_bottom_pane_stacon

0x223c,	// (0x0000223c) navi_pane_stacon_ParamLimits

0x223c,	// (0x0000223c) navi_pane_stacon

0x225f,	// (0x0000225f) stacon_bottom_pane_g1_ParamLimits

0x225f,	// (0x0000225f) stacon_bottom_pane_g1

0x1867,	// (0x00001867) aid_levels_signal_lsc_ParamLimits

0x1867,	// (0x00001867) aid_levels_signal_lsc

0x187e,	// (0x0000187e) signal_pane_stacon_g1_ParamLimits

0x187e,	// (0x0000187e) signal_pane_stacon_g1

0x1892,	// (0x00001892) signal_pane_stacon_g2_ParamLimits

0x1892,	// (0x00001892) signal_pane_stacon_g2

0x0001,

0xa9a6,	// (0x0000a9a6) signal_pane_stacon_g_ParamLimits

0xa9a6,	// (0x0000a9a6) signal_pane_stacon_g

0x18d4,	// (0x000018d4) title_pane_stacon_t1_ParamLimits

0x18d4,	// (0x000018d4) title_pane_stacon_t1

0x18f9,	// (0x000018f9) uni_indicator_pane_stacon_g1

0x1903,	// (0x00001903) uni_indicator_pane_stacon_g2

0x190d,	// (0x0000190d) uni_indicator_pane_stacon_g3

0x1917,	// (0x00001917) uni_indicator_pane_stacon_g4

0x0003,

0xa9b2,	// (0x0000a9b2) uni_indicator_pane_stacon_g

0x1921,	// (0x00001921) control_top_pane_stacon_g1

0x1929,	// (0x00001929) control_top_pane_stacon_t1_ParamLimits

0x1929,	// (0x00001929) control_top_pane_stacon_t1

0x1960,	// (0x00001960) aid_levels_battery_lsc_ParamLimits

0x1960,	// (0x00001960) aid_levels_battery_lsc

0x1978,	// (0x00001978) battery_pane_stacon_g1_ParamLimits

0x1978,	// (0x00001978) battery_pane_stacon_g1

0x198b,	// (0x0000198b) battery_pane_stacon_g2_ParamLimits

0x198b,	// (0x0000198b) battery_pane_stacon_g2

0x0001,

0xa9bb,	// (0x0000a9bb) battery_pane_stacon_g_ParamLimits

0xa9bb,	// (0x0000a9bb) battery_pane_stacon_g

0x19c9,	// (0x000019c9) navi_icon_pane_stacon

0x19dd,	// (0x000019dd) navi_navi_pane_stacon

0x19c9,	// (0x000019c9) navi_text_pane_stacon

0x1921,	// (0x00001921) control_bottom_pane_stacon_g1

0x19f1,	// (0x000019f1) control_bottom_pane_stacon_t1_ParamLimits

0x19f1,	// (0x000019f1) control_bottom_pane_stacon_t1

0xbd39,	// (0x0000bd39) grid_app_pane_ParamLimits

0xbd39,	// (0x0000bd39) grid_app_pane

0xbd71,	// (0x0000bd71) scroll_pane_cp15_ParamLimits

0xbd71,	// (0x0000bd71) scroll_pane_cp15

0xbd8a,	// (0x0000bd8a) cell_app_pane_ParamLimits

0xbd8a,	// (0x0000bd8a) cell_app_pane

0xbdcf,	// (0x0000bdcf) cell_app_pane_g1_ParamLimits

0xbdcf,	// (0x0000bdcf) cell_app_pane_g1

0x1ac3,	// (0x00001ac3) cell_app_pane_g2_ParamLimits

0x1ac3,	// (0x00001ac3) cell_app_pane_g2

0x0001,

0xf384,	// (0x0000f384) cell_app_pane_g_ParamLimits

0xf384,	// (0x0000f384) cell_app_pane_g

0x1acf,	// (0x00001acf) cell_app_pane_t1_ParamLimits

0x1acf,	// (0x00001acf) cell_app_pane_t1

0x1ae6,	// (0x00001ae6) grid_highlight_pane_ParamLimits

0x1ae6,	// (0x00001ae6) grid_highlight_pane

0x14ad,	// (0x000014ad) cell_highlight_pane_g1

0x14b5,	// (0x000014b5) cell_highlight_pane_g2

0x14bd,	// (0x000014bd) cell_highlight_pane_g3

0x14c5,	// (0x000014c5) cell_highlight_pane_g4

0x14cd,	// (0x000014cd) cell_highlight_pane_g5

0x14d5,	// (0x000014d5) cell_highlight_pane_g6

0x14dd,	// (0x000014dd) cell_highlight_pane_g7

0x14e5,	// (0x000014e5) cell_highlight_pane_g8

0x14ed,	// (0x000014ed) cell_highlight_pane_g9

0x002e,	// (0x0000002e) cell_highlight_pane_g10

0x0009,

0xa96e,	// (0x0000a96e) cell_highlight_pane_g

0x1b0a,	// (0x00001b0a) bg_scroll_pane

0x1b29,	// (0x00001b29) scroll_handle_pane

0x1b7a,	// (0x00001b7a) scroll_bg_pane_g1

0x1b8f,	// (0x00001b8f) scroll_bg_pane_g2

0x1ba7,	// (0x00001ba7) scroll_bg_pane_g3

0x0002,

0xa9c5,	// (0x0000a9c5) scroll_bg_pane_g

0x1bbc,	// (0x00001bbc) scroll_handle_focus_pane_ParamLimits

0x1bbc,	// (0x00001bbc) scroll_handle_focus_pane

0x1b7a,	// (0x00001b7a) scroll_handle_pane_g1

0x1bc9,	// (0x00001bc9) scroll_handle_pane_g2

0x1ba7,	// (0x00001ba7) scroll_handle_pane_g3

0x0002,

0xa9cc,	// (0x0000a9cc) scroll_handle_pane_g

0x15aa,	// (0x000015aa) bg_popup_sub_pane_cp21_ParamLimits

0x15aa,	// (0x000015aa) bg_popup_sub_pane_cp21

0x1bdd,	// (0x00001bdd) popup_fep_japan_predictive_window_t1_ParamLimits

0x1bdd,	// (0x00001bdd) popup_fep_japan_predictive_window_t1

0x1bf7,	// (0x00001bf7) popup_fep_japan_predictive_window_t2_ParamLimits

0x1bf7,	// (0x00001bf7) popup_fep_japan_predictive_window_t2

0x1c2a,	// (0x00001c2a) popup_fep_japan_predictive_window_t3_ParamLimits

0x1c2a,	// (0x00001c2a) popup_fep_japan_predictive_window_t3

0x0002,

0xa9d3,	// (0x0000a9d3) popup_fep_japan_predictive_window_t_ParamLimits

0xa9d3,	// (0x0000a9d3) popup_fep_japan_predictive_window_t

0x0293,	// (0x00000293) bg_popup_sub_pane_cp23

0x1c61,	// (0x00001c61) listscroll_japin_cand_pane

0x1c69,	// (0x00001c69) popup_fep_japan_candidate_window_t1

0x1c77,	// (0x00001c77) candidate_pane_ParamLimits

0x1c77,	// (0x00001c77) candidate_pane

0x1c89,	// (0x00001c89) scroll_pane_cp30

0x1c91,	// (0x00001c91) list_single_popup_jap_candidate_pane_ParamLimits

0x1c91,	// (0x00001c91) list_single_popup_jap_candidate_pane

0x0293,	// (0x00000293) list_highlight_pane_cp30

0x1ca6,	// (0x00001ca6) list_single_popup_jap_candidate_pane_t1

0x1cb5,	// (0x00001cb5) level_1_signal

0x1cc2,	// (0x00001cc2) level_2_signal

0x1ccf,	// (0x00001ccf) level_3_signal

0x1cdc,	// (0x00001cdc) level_4_signal

0x1ce9,	// (0x00001ce9) level_5_signal

0x1cf6,	// (0x00001cf6) level_6_signal

0x1d03,	// (0x00001d03) level_7_signal

0x1cb5,	// (0x00001cb5) level_1_battery

0x1cc2,	// (0x00001cc2) level_2_battery

0x1ccf,	// (0x00001ccf) level_3_battery

0x1cdc,	// (0x00001cdc) level_4_battery

0x1ce9,	// (0x00001ce9) level_5_battery

0x1cf6,	// (0x00001cf6) level_6_battery

0x1d03,	// (0x00001d03) level_7_battery

0x1d47,	// (0x00001d47) list_menu_pane_ParamLimits

0x1d47,	// (0x00001d47) list_menu_pane

0x1d58,	// (0x00001d58) scroll_pane_cp25_ParamLimits

0x1d58,	// (0x00001d58) scroll_pane_cp25

0x1d71,	// (0x00001d71) list_double2_graphic_pane_cp2_ParamLimits

0x1d71,	// (0x00001d71) list_double2_graphic_pane_cp2

0x1d71,	// (0x00001d71) list_double2_large_graphic_pane_cp2_ParamLimits

0x1d71,	// (0x00001d71) list_double2_large_graphic_pane_cp2

0x1d71,	// (0x00001d71) list_double2_pane_cp2_ParamLimits

0x1d71,	// (0x00001d71) list_double2_pane_cp2

0x1d71,	// (0x00001d71) list_double_graphic_pane_cp2_ParamLimits

0x1d71,	// (0x00001d71) list_double_graphic_pane_cp2

0x1d71,	// (0x00001d71) list_double_large_graphic_pane_cp2_ParamLimits

0x1d71,	// (0x00001d71) list_double_large_graphic_pane_cp2

0x1d71,	// (0x00001d71) list_double_number_pane_cp2_ParamLimits

0x1d71,	// (0x00001d71) list_double_number_pane_cp2

0x1d71,	// (0x00001d71) list_double_pane_cp2_ParamLimits

0x1d71,	// (0x00001d71) list_double_pane_cp2

0xbe0b,	// (0x0000be0b) list_single_2graphic_pane_cp2_ParamLimits

0xbe0b,	// (0x0000be0b) list_single_2graphic_pane_cp2

0xbe0b,	// (0x0000be0b) list_single_graphic_heading_pane_cp2_ParamLimits

0xbe0b,	// (0x0000be0b) list_single_graphic_heading_pane_cp2

0xbe0b,	// (0x0000be0b) list_single_graphic_pane_cp2_ParamLimits

0xbe0b,	// (0x0000be0b) list_single_graphic_pane_cp2

0xbe0b,	// (0x0000be0b) list_single_heading_pane_cp2_ParamLimits

0xbe0b,	// (0x0000be0b) list_single_heading_pane_cp2

0x1dae,	// (0x00001dae) list_single_large_graphic_pane_cp2_ParamLimits

0x1dae,	// (0x00001dae) list_single_large_graphic_pane_cp2

0xbe0b,	// (0x0000be0b) list_single_number_heading_pane_cp2_ParamLimits

0xbe0b,	// (0x0000be0b) list_single_number_heading_pane_cp2

0xbe0b,	// (0x0000be0b) list_single_number_pane_cp2_ParamLimits

0xbe0b,	// (0x0000be0b) list_single_number_pane_cp2

0xbe0b,	// (0x0000be0b) list_single_pane_cp2_ParamLimits

0xbe0b,	// (0x0000be0b) list_single_pane_cp2

0x1e5f,	// (0x00001e5f) bg_popup_sub_pane_cp22

0x1e84,	// (0x00001e84) popup_side_volume_key_window_g1

0x1eae,	// (0x00001eae) popup_side_volume_key_window_t1

0x1eca,	// (0x00001eca) volume_small_pane_cp1

0x0823,	// (0x00000823) bg_popup_sub_pane_cp24_ParamLimits

0x0823,	// (0x00000823) bg_popup_sub_pane_cp24

0x1ed2,	// (0x00001ed2) fep_china_uni_candidate_pane_ParamLimits

0x1ed2,	// (0x00001ed2) fep_china_uni_candidate_pane

0x1ee6,	// (0x00001ee6) fep_china_uni_entry_pane

0x1ef6,	// (0x00001ef6) popup_fep_china_uni_window_g1

0x1f12,	// (0x00001f12) fep_china_uni_entry_pane_g1

0x1f1a,	// (0x00001f1a) fep_china_uni_entry_pane_g2

0x0001,

0xaa00,	// (0x0000aa00) fep_china_uni_entry_pane_g

0x1f22,	// (0x00001f22) fep_entry_item_pane

0x1f2c,	// (0x00001f2c) fep_candidate_item_pane

0x1f34,	// (0x00001f34) fep_china_uni_candidate_pane_g1

0x1f3c,	// (0x00001f3c) fep_china_uni_candidate_pane_g2

0x1f44,	// (0x00001f44) fep_china_uni_candidate_pane_g3

0x1f4c,	// (0x00001f4c) fep_china_uni_candidate_pane_g4

0x0003,

0xaa05,	// (0x0000aa05) fep_china_uni_candidate_pane_g

0x002e,	// (0x0000002e) fep_entry_item_pane_g1

0x1f54,	// (0x00001f54) fep_entry_item_pane_t1_ParamLimits

0x1f54,	// (0x00001f54) fep_entry_item_pane_t1

0x1f6a,	// (0x00001f6a) fep_candidate_item_pane_t1_ParamLimits

0x1f6a,	// (0x00001f6a) fep_candidate_item_pane_t1

0x1f7f,	// (0x00001f7f) fep_candidate_item_pane_t2_ParamLimits

0x1f7f,	// (0x00001f7f) fep_candidate_item_pane_t2

0x0001,

0xaa0e,	// (0x0000aa0e) fep_candidate_item_pane_t_ParamLimits

0xaa0e,	// (0x0000aa0e) fep_candidate_item_pane_t

0x04fd,	// (0x000004fd) list_highlight_pane_cp31_ParamLimits

0x04fd,	// (0x000004fd) list_highlight_pane_cp31

0x1f91,	// (0x00001f91) level_1_signal_lsc

0x1f9a,	// (0x00001f9a) level_2_signal_lsc

0x1fa3,	// (0x00001fa3) level_3_signal_lsc

0x1fac,	// (0x00001fac) level_4_signal_lsc

0x1fb5,	// (0x00001fb5) level_5_signal_lsc

0x1fbe,	// (0x00001fbe) level_6_signal_lsc

0x1fc7,	// (0x00001fc7) level_7_signal_lsc

0x1fc7,	// (0x00001fc7) level_1_battery_lsc

0x1fd0,	// (0x00001fd0) level_2_battery_lsc

0x1fd9,	// (0x00001fd9) level_3_battery_lsc

0x1fe2,	// (0x00001fe2) level_4_battery_lsc

0x1feb,	// (0x00001feb) level_5_battery_lsc

0x1ff4,	// (0x00001ff4) level_6_battery_lsc

0x1f91,	// (0x00001f91) level_7_battery_lsc

0x1ffd,	// (0x00001ffd) scroll_handle_focus_pane_g1

0x2006,	// (0x00002006) scroll_handle_focus_pane_g2

0x200f,	// (0x0000200f) scroll_handle_focus_pane_g3

0x0002,

0xaa13,	// (0x0000aa13) scroll_handle_focus_pane_g

0xbe6b,	// (0x0000be6b) list_single_2graphic_pane_g1_ParamLimits

0xbe6b,	// (0x0000be6b) list_single_2graphic_pane_g1

0xb775,	// (0x0000b775) list_single_2graphic_pane_g2_ParamLimits

0xb775,	// (0x0000b775) list_single_2graphic_pane_g2

0x3520,	// (0x00003520) list_single_2graphic_pane_g3_ParamLimits

0x3520,	// (0x00003520) list_single_2graphic_pane_g3

0xbe77,	// (0x0000be77) list_single_2graphic_pane_g4_ParamLimits

0xbe77,	// (0x0000be77) list_single_2graphic_pane_g4

0x0003,

0xf38e,	// (0x0000f38e) list_single_2graphic_pane_g_ParamLimits

0xf38e,	// (0x0000f38e) list_single_2graphic_pane_g

0xbe83,	// (0x0000be83) list_single_2graphic_pane_t1_ParamLimits

0xbe83,	// (0x0000be83) list_single_2graphic_pane_t1

0xbeb1,	// (0x0000beb1) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbeb1,	// (0x0000beb1) list_double2_graphic_large_graphic_pane_g1

0xb7d4,	// (0x0000b7d4) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb7d4,	// (0x0000b7d4) list_double2_graphic_large_graphic_pane_g2

0x10dc,	// (0x000010dc) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x10dc,	// (0x000010dc) list_double2_graphic_large_graphic_pane_g3

0xbec3,	// (0x0000bec3) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbec3,	// (0x0000bec3) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf397,	// (0x0000f397) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf397,	// (0x0000f397) list_double2_graphic_large_graphic_pane_g

0xbecf,	// (0x0000becf) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbecf,	// (0x0000becf) list_double2_graphic_large_graphic_pane_t1

0xbee5,	// (0x0000bee5) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbee5,	// (0x0000bee5) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf3a0,	// (0x0000f3a0) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf3a0,	// (0x0000f3a0) list_double2_graphic_large_graphic_pane_t

0x2327,	// (0x00002327) popup_fast_swap_window_ParamLimits

0x2327,	// (0x00002327) popup_fast_swap_window

0x2343,	// (0x00002343) popup_side_volume_key_window

0x235f,	// (0x0000235f) stacon_top_pane

0x2369,	// (0x00002369) status_pane_ParamLimits

0x2369,	// (0x00002369) status_pane

0x235f,	// (0x0000235f) status_small_pane

0x0293,	// (0x00000293) control_pane

0x0293,	// (0x00000293) stacon_bottom_pane

0x1286,	// (0x00001286) scroll_pane_cp121

0x127d,	// (0x0000127d) set_content_pane

0x20c2,	// (0x000020c2) bg_active_tab_pane_g1_cp1

0x20b0,	// (0x000020b0) bg_active_tab_pane_g2_cp1

0x20cb,	// (0x000020cb) bg_active_tab_pane_g3_cp1

0x20c2,	// (0x000020c2) bg_passive_tab_pane_g1_cp1

0x20b0,	// (0x000020b0) bg_passive_tab_pane_g2_cp1

0x20cb,	// (0x000020cb) bg_passive_tab_pane_g3_cp1

0xbef7,	// (0x0000bef7) bg_active_tab_pane_g1_cp2

0x20b0,	// (0x000020b0) bg_active_tab_pane_g2_cp2

0xbf00,	// (0x0000bf00) bg_active_tab_pane_g3_cp2

0xbef7,	// (0x0000bef7) bg_passive_tab_pane_g1_cp2

0x20b0,	// (0x000020b0) bg_passive_tab_pane_g2_cp2

0xbf00,	// (0x0000bf00) bg_passive_tab_pane_g3_cp2

0xbf09,	// (0x0000bf09) bg_active_tab_pane_g1_cp3

0x20b0,	// (0x000020b0) bg_active_tab_pane_g2_cp3

0xbf12,	// (0x0000bf12) bg_active_tab_pane_g3_cp3

0xbf09,	// (0x0000bf09) bg_passive_tab_pane_g1_cp3

0x20b0,	// (0x000020b0) bg_passive_tab_pane_g2_cp3

0xbf12,	// (0x0000bf12) bg_passive_tab_pane_g3_cp3

0xbf1b,	// (0x0000bf1b) bg_active_tab_pane_g1_cp4

0x20b0,	// (0x000020b0) bg_active_tab_pane_g2_cp4

0xbf24,	// (0x0000bf24) bg_active_tab_pane_g3_cp4

0xbf1b,	// (0x0000bf1b) bg_passive_tab_pane_g1_cp4

0x20b0,	// (0x000020b0) bg_passive_tab_pane_g2_cp4

0xbf24,	// (0x0000bf24) bg_passive_tab_pane_g3_cp4

0x227b,	// (0x0000227b) bg_active_tab_pane_g1_cp5

0x20b0,	// (0x000020b0) bg_active_tab_pane_g2_cp5

0x2284,	// (0x00002284) bg_active_tab_pane_g3_cp5

0x227b,	// (0x0000227b) bg_passive_tab_pane_g1_cp5

0x20b0,	// (0x000020b0) bg_passive_tab_pane_g2_cp5

0x2284,	// (0x00002284) bg_passive_tab_pane_g3_cp5

0xbf2d,	// (0x0000bf2d) list_set_graphic_pane_ParamLimits

0xbf2d,	// (0x0000bf2d) list_set_graphic_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp4

0xbf3f,	// (0x0000bf3f) list_set_graphic_pane_g1_ParamLimits

0xbf3f,	// (0x0000bf3f) list_set_graphic_pane_g1

0xbf4b,	// (0x0000bf4b) list_set_graphic_pane_g2_ParamLimits

0xbf4b,	// (0x0000bf4b) list_set_graphic_pane_g2

0x0001,

0xf3a5,	// (0x0000f3a5) list_set_graphic_pane_g_ParamLimits

0xf3a5,	// (0x0000f3a5) list_set_graphic_pane_g

0x0009,

0xad94,	// (0x0000ad94) volume_small_pane_cp_g

0x22da,	// (0x000022da) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x22da,	// (0x000022da) list_double2_large_graphic_pane_g1_cp2

0x22e6,	// (0x000022e6) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x22e6,	// (0x000022e6) list_double2_large_graphic_pane_g2_cp2

0x22f7,	// (0x000022f7) list_double2_large_graphic_pane_g3_cp2

0x22ff,	// (0x000022ff) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x22ff,	// (0x000022ff) list_double2_large_graphic_pane_t1_cp2

0x2315,	// (0x00002315) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2315,	// (0x00002315) list_double2_large_graphic_pane_t2_cp2

0x4a80,	// (0x00004a80) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4a80,	// (0x00004a80) list_double_large_graphic_pane_g1_cp2

0x4a91,	// (0x00004a91) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4a91,	// (0x00004a91) list_double_large_graphic_pane_g2_cp2

0x2485,	// (0x00002485) list_double_large_graphic_pane_g3_cp2

0x4aa2,	// (0x00004aa2) list_double_large_graphic_pane_g4_cp

0x4aaa,	// (0x00004aaa) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4aaa,	// (0x00004aaa) list_double_large_graphic_pane_t1_cp2

0x4ac1,	// (0x00004ac1) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4ac1,	// (0x00004ac1) list_double_large_graphic_pane_t2_cp2

0x2377,	// (0x00002377) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2377,	// (0x00002377) list_double2_graphic_pane_g1_cp2

0x2385,	// (0x00002385) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2385,	// (0x00002385) list_double2_graphic_pane_g2_cp2

0x2396,	// (0x00002396) list_double2_graphic_pane_g3_cp2

0x23a0,	// (0x000023a0) list_double2_graphic_pane_t1_cp2_ParamLimits

0x23a0,	// (0x000023a0) list_double2_graphic_pane_t1_cp2

0x23b6,	// (0x000023b6) list_double2_graphic_pane_t2_cp2_ParamLimits

0x23b6,	// (0x000023b6) list_double2_graphic_pane_t2_cp2

0x23c8,	// (0x000023c8) list_single_number_heading_pane_g1_cp2_ParamLimits

0x23c8,	// (0x000023c8) list_single_number_heading_pane_g1_cp2

0x23d4,	// (0x000023d4) list_single_number_heading_pane_g2_cp2

0x23dc,	// (0x000023dc) list_single_number_heading_pane_t1_cp2_ParamLimits

0x23dc,	// (0x000023dc) list_single_number_heading_pane_t1_cp2

0x23f2,	// (0x000023f2) list_single_number_heading_pane_t2_cp2_ParamLimits

0x23f2,	// (0x000023f2) list_single_number_heading_pane_t2_cp2

0x2404,	// (0x00002404) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2404,	// (0x00002404) list_single_number_heading_pane_t3_cp2

0x23c8,	// (0x000023c8) list_single_heading_pane_g1_cp2_ParamLimits

0x23c8,	// (0x000023c8) list_single_heading_pane_g1_cp2

0x23d4,	// (0x000023d4) list_single_heading_pane_g2_cp2

0x23dc,	// (0x000023dc) list_single_heading_pane_t1_cp2_ParamLimits

0x23dc,	// (0x000023dc) list_single_heading_pane_t1_cp2

0x4888,	// (0x00004888) list_single_heading_pane_t2_cp2_ParamLimits

0x4888,	// (0x00004888) list_single_heading_pane_t2_cp2

0x47ca,	// (0x000047ca) list_double_graphic_pane_g1_cp2_ParamLimits

0x47ca,	// (0x000047ca) list_double_graphic_pane_g1_cp2

0x47d6,	// (0x000047d6) list_double_graphic_pane_g2_cp2_ParamLimits

0x47d6,	// (0x000047d6) list_double_graphic_pane_g2_cp2

0x47e5,	// (0x000047e5) list_double_graphic_pane_g3_cp2

0x47ed,	// (0x000047ed) list_double_graphic_pane_t1_cp2_ParamLimits

0x47ed,	// (0x000047ed) list_double_graphic_pane_t1_cp2

0x4803,	// (0x00004803) list_double_graphic_pane_t2_cp2_ParamLimits

0x4803,	// (0x00004803) list_double_graphic_pane_t2_cp2

0x2479,	// (0x00002479) list_double_number_pane_g1_cp2_ParamLimits

0x2479,	// (0x00002479) list_double_number_pane_g1_cp2

0x2485,	// (0x00002485) list_double_number_pane_g2_cp2

0x478e,	// (0x0000478e) list_double_number_pane_t1_cp2_ParamLimits

0x478e,	// (0x0000478e) list_double_number_pane_t1_cp2

0x47a2,	// (0x000047a2) list_double_number_pane_t2_cp2_ParamLimits

0x47a2,	// (0x000047a2) list_double_number_pane_t2_cp2

0x47b8,	// (0x000047b8) list_double_number_pane_t3_cp2_ParamLimits

0x47b8,	// (0x000047b8) list_double_number_pane_t3_cp2

0x4666,	// (0x00004666) list_single_graphic_pane_g1_cp2_ParamLimits

0x4666,	// (0x00004666) list_single_graphic_pane_g1_cp2

0x24dd,	// (0x000024dd) list_single_graphic_pane_g2_cp2_ParamLimits

0x24dd,	// (0x000024dd) list_single_graphic_pane_g2_cp2

0x24e9,	// (0x000024e9) list_single_graphic_pane_g3_cp2

0x463c,	// (0x0000463c) list_single_graphic_pane_t1_cp2_ParamLimits

0x463c,	// (0x0000463c) list_single_graphic_pane_t1_cp2

0x24dd,	// (0x000024dd) list_single_number_pane_g1_cp2_ParamLimits

0x24dd,	// (0x000024dd) list_single_number_pane_g1_cp2

0x24e9,	// (0x000024e9) list_single_number_pane_g2_cp2

0x463c,	// (0x0000463c) list_single_number_pane_t1_cp2_ParamLimits

0x463c,	// (0x0000463c) list_single_number_pane_t1_cp2

0x4652,	// (0x00004652) list_single_number_pane_t2_cp2_ParamLimits

0x4652,	// (0x00004652) list_single_number_pane_t2_cp2

0x22e6,	// (0x000022e6) list_double2_pane_g1_cp2_ParamLimits

0x22e6,	// (0x000022e6) list_double2_pane_g1_cp2

0x22f7,	// (0x000022f7) list_double2_pane_g2_cp2

0x2451,	// (0x00002451) list_double2_pane_t1_cp2_ParamLimits

0x2451,	// (0x00002451) list_double2_pane_t1_cp2

0x2467,	// (0x00002467) list_double2_pane_t2_cp2_ParamLimits

0x2467,	// (0x00002467) list_double2_pane_t2_cp2

0x2479,	// (0x00002479) list_double_pane_g1_cp2_ParamLimits

0x2479,	// (0x00002479) list_double_pane_g1_cp2

0x2485,	// (0x00002485) list_double_pane_g2_cp2

0x248d,	// (0x0000248d) list_double_pane_t1_cp2_ParamLimits

0x248d,	// (0x0000248d) list_double_pane_t1_cp2

0x24a3,	// (0x000024a3) list_double_pane_t2_cp2_ParamLimits

0x24a3,	// (0x000024a3) list_double_pane_t2_cp2

0x24cd,	// (0x000024cd) list_single_pane_cp2_g3

0x24dd,	// (0x000024dd) list_single_pane_g1_cp2_ParamLimits

0x24dd,	// (0x000024dd) list_single_pane_g1_cp2

0x24e9,	// (0x000024e9) list_single_pane_g2_cp2

0x24f1,	// (0x000024f1) list_single_pane_t1_cp2_ParamLimits

0x24f1,	// (0x000024f1) list_single_pane_t1_cp2

0x2509,	// (0x00002509) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x2509,	// (0x00002509) list_single_large_graphic_pane_g1_cp2

0x2515,	// (0x00002515) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2515,	// (0x00002515) list_single_large_graphic_pane_g2_cp2

0x2521,	// (0x00002521) list_single_large_graphic_pane_g3_cp2

0x2529,	// (0x00002529) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x2529,	// (0x00002529) list_single_large_graphic_pane_g4_cp1

0x2543,	// (0x00002543) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2543,	// (0x00002543) list_single_large_graphic_pane_t1_cp2

0x44b5,	// (0x000044b5) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x44b5,	// (0x000044b5) list_single_graphic_heading_pane_g1_cp2

0x4482,	// (0x00004482) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x4482,	// (0x00004482) list_single_graphic_heading_pane_g4_cp2

0x24e9,	// (0x000024e9) list_single_graphic_heading_pane_g5_cp2

0x44c1,	// (0x000044c1) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x44c1,	// (0x000044c1) list_single_graphic_heading_pane_t1_cp2

0x44d7,	// (0x000044d7) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x44d7,	// (0x000044d7) list_single_graphic_heading_pane_t2_cp2

0x4476,	// (0x00004476) list_single_2graphic_pane_g1_cp2_ParamLimits

0x4476,	// (0x00004476) list_single_2graphic_pane_g1_cp2

0x4482,	// (0x00004482) list_single_2graphic_pane_g2_cp2_ParamLimits

0x4482,	// (0x00004482) list_single_2graphic_pane_g2_cp2

0x24e9,	// (0x000024e9) list_single_2graphic_pane_g3_cp2

0x4493,	// (0x00004493) list_single_2graphic_pane_g4_cp2_ParamLimits

0x4493,	// (0x00004493) list_single_2graphic_pane_g4_cp2

0x449f,	// (0x0000449f) list_single_2graphic_pane_t1_cp2_ParamLimits

0x449f,	// (0x0000449f) list_single_2graphic_pane_t1_cp2

0x002e,	// (0x0000002e) list_highlight_pane_g10_cp1

0x404e,	// (0x0000404e) list_highlight_pane_g1_cp1

0x4056,	// (0x00004056) list_highlight_pane_g2_cp1

0x405e,	// (0x0000405e) list_highlight_pane_g3_cp1

0x4066,	// (0x00004066) list_highlight_pane_g4_cp1

0x406e,	// (0x0000406e) list_highlight_pane_g5_cp1

0x4076,	// (0x00004076) list_highlight_pane_g6_cp1

0x407e,	// (0x0000407e) list_highlight_pane_g7_cp1

0x4086,	// (0x00004086) list_highlight_pane_g8_cp1

0x408e,	// (0x0000408e) list_highlight_pane_g9_cp1

0xcd83,	// (0x0000cd83) form_field_slider_pane_t3

0xcd91,	// (0x0000cd91) form_field_slider_pane_t4

0x3f8a,	// (0x00003f8a) slider_form_pane_ParamLimits

0x3f8a,	// (0x00003f8a) slider_form_pane

0x0293,	// (0x00000293) control_abbreviations

0x0293,	// (0x00000293) control_conventions

0x0293,	// (0x00000293) control_definitions

0x0293,	// (0x00000293) format_table_attribute

0x48d2,	// (0x000048d2) bg_popup_preview_window_pane_g9

0x0293,	// (0x00000293) format_table_data2

0x0293,	// (0x00000293) format_table_data3

0x0293,	// (0x00000293) format_table_data_example

0x0008,

0x0293,	// (0x00000293) intro_purpose

0xabbf,	// (0x0000abbf) bg_popup_preview_window_pane_g

0x0293,	// (0x00000293) texts_category

0x0293,	// (0x00000293) texts_graphics

0x2559,	// (0x00002559) text_digital

0x2568,	// (0x00002568) text_primary

0x2577,	// (0x00002577) text_primary_small

0x2586,	// (0x00002586) text_secondary

0x2595,	// (0x00002595) text_title

0x51c1,	// (0x000051c1) bg_passive_tab_pane_g1_cp3_srt

0x20b0,	// (0x000020b0) bg_passive_tab_pane_g2_cp3_srt

0x51ca,	// (0x000051ca) bg_passive_tab_pane_g3_cp3_srt

0x0823,	// (0x00000823) bg_active_tab_pane_cp3_srt_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp3_srt

0x51d3,	// (0x000051d3) tabs_4_active_pane_srt_g1

0xd29f,	// (0x0000d29f) tabs_4_active_pane_srt_t1_ParamLimits

0xd29f,	// (0x0000d29f) tabs_4_active_pane_srt_t1

0x51c1,	// (0x000051c1) bg_active_tab_pane_g1_cp3_copy1

0x20b0,	// (0x000020b0) bg_active_tab_pane_g2_cp3_copy1

0x51ca,	// (0x000051ca) bg_active_tab_pane_g3_cp3_copy1

0x04fd,	// (0x000004fd) tabs_2_long_active_pane_srt_ParamLimits

0x04fd,	// (0x000004fd) tabs_2_long_active_pane_srt

0x04fd,	// (0x000004fd) tabs_2_long_passive_pane_srt_ParamLimits

0x04fd,	// (0x000004fd) tabs_2_long_passive_pane_srt

0x2b2c,	// (0x00002b2c) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2b2c,	// (0x00002b2c) bg_passive_tab_pane_cp4_srt

0x4d8e,	// (0x00004d8e) bg_passive_tab_pane_g1_cp4_srt

0x20b0,	// (0x000020b0) bg_passive_tab_pane_g2_cp4_srt

0x4d97,	// (0x00004d97) bg_passive_tab_pane_g3_cp4_srt

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp4_srt_ParamLimits

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp4_srt

0xd080,	// (0x0000d080) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd080,	// (0x0000d080) tabs_2_long_active_pane_srt_t1

0x4d8e,	// (0x00004d8e) bg_active_tab_pane_g1_cp4_srt

0x20b0,	// (0x000020b0) bg_active_tab_pane_g2_cp4_srt

0x4d97,	// (0x00004d97) bg_active_tab_pane_g3_cp4_srt

0x0823,	// (0x00000823) tabs_3_long_active_pane_srt_ParamLimits

0x0823,	// (0x00000823) tabs_3_long_active_pane_srt

0x0823,	// (0x00000823) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0823,	// (0x00000823) tabs_3_long_passive_pane_cp_srt

0x0823,	// (0x00000823) tabs_3_long_passive_pane_srt_ParamLimits

0x0823,	// (0x00000823) tabs_3_long_passive_pane_srt

0x2b2c,	// (0x00002b2c) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2b2c,	// (0x00002b2c) bg_passive_tab_pane_cp5_srt

0x227b,	// (0x0000227b) bg_passive_tab_pane_g1_cp5_srt

0x20b0,	// (0x000020b0) bg_passive_tab_pane_g2_cp5_srt

0x2284,	// (0x00002284) bg_passive_tab_pane_g3_cp5_srt

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp5_srt_ParamLimits

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp5_srt

0xd06a,	// (0x0000d06a) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd06a,	// (0x0000d06a) tabs_3_long_active_pane_srt_t1

0x227b,	// (0x0000227b) bg_active_tab_pane_g1_cp5_srt

0x20b0,	// (0x000020b0) bg_active_tab_pane_g2_cp5_srt

0x2284,	// (0x00002284) bg_active_tab_pane_g3_cp5_srt

0x4d6e,	// (0x00004d6e) navi_text_pane_srt_t1

0x4d66,	// (0x00004d66) navi_icon_pane_srt_g1

0x2811,	// (0x00002811) midp_editing_number_pane_srt

0x25a4,	// (0x000025a4) midp_ticker_pane_srt

0x2819,	// (0x00002819) midp_ticker_pane_srt_g1

0x2821,	// (0x00002821) midp_ticker_pane_srt_g2

0x0001,

0xaa50,	// (0x0000aa50) midp_ticker_pane_srt_g

0x2829,	// (0x00002829) midp_ticker_pane_srt_t1

0x4d57,	// (0x00004d57) midp_editing_number_pane_t1_copy1

0xbf6f,	// (0x0000bf6f) listscroll_midp_pane

0xbf6f,	// (0x0000bf6f) midp_form_pane

0x261a,	// (0x0000261a) midp_info_popup_window_ParamLimits

0x261a,	// (0x0000261a) midp_info_popup_window

0x15aa,	// (0x000015aa) bg_popup_sub_pane_cp50_ParamLimits

0x15aa,	// (0x000015aa) bg_popup_sub_pane_cp50

0x3c86,	// (0x00003c86) listscroll_midp_info_pane_ParamLimits

0x3c86,	// (0x00003c86) listscroll_midp_info_pane

0x3c6e,	// (0x00003c6e) listscroll_form_midp_pane_ParamLimits

0x3c6e,	// (0x00003c6e) listscroll_form_midp_pane

0x3c7a,	// (0x00003c7a) scroll_bar_cp050

0xcd77,	// (0x0000cd77) list_midp_pane

0x5eab,	// (0x00005eab) signal_pane_g2_cp

0x3b88,	// (0x00003b88) listscroll_midp_info_pane_t1_ParamLimits

0x3b88,	// (0x00003b88) listscroll_midp_info_pane_t1

0x3ba0,	// (0x00003ba0) listscroll_midp_info_pane_t2_ParamLimits

0x3ba0,	// (0x00003ba0) listscroll_midp_info_pane_t2

0x3bde,	// (0x00003bde) listscroll_midp_info_pane_t3_ParamLimits

0x3bde,	// (0x00003bde) listscroll_midp_info_pane_t3

0x3c18,	// (0x00003c18) listscroll_midp_info_pane_t4_ParamLimits

0x3c18,	// (0x00003c18) listscroll_midp_info_pane_t4

0x0003,

0xaafa,	// (0x0000aafa) listscroll_midp_info_pane_t_ParamLimits

0xaafa,	// (0x0000aafa) listscroll_midp_info_pane_t

0x166c,	// (0x0000166c) scroll_pane_cp21

0x3b26,	// (0x00003b26) form_midp_field_choice_group_pane

0x3b2f,	// (0x00003b2f) form_midp_field_text_pane

0x3b6e,	// (0x00003b6e) form_midp_field_time_pane

0x3b76,	// (0x00003b76) form_midp_gauge_slider_pane

0x3b7f,	// (0x00003b7f) form_midp_gauge_wait_pane

0x0293,	// (0x00000293) form_midp_image_pane

0xcd5e,	// (0x0000cd5e) list_single_midp_pane_ParamLimits

0xcd5e,	// (0x0000cd5e) list_single_midp_pane

0xcd3c,	// (0x0000cd3c) form_midp_field_text_pane_t1

0x380a,	// (0x0000380a) input_focus_pane_cp050

0x3ae6,	// (0x00003ae6) list_midp_form_text_pane

0x3a7e,	// (0x00003a7e) form_midp_field_choice_group_pane_t1

0x3a8c,	// (0x00003a8c) input_focus_pane_cp051

0x3aa0,	// (0x00003aa0) list_midp_choice_pane

0x0293,	// (0x00000293) status_idle_pane

0x3a62,	// (0x00003a62) form_midp_field_time_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g2_copy1

0x3a70,	// (0x00003a70) form_midp_field_time_pane_t2

0x0001,

0x26c8,	// (0x000026c8) aid_navinavi_width_2_pane

0xaaf5,	// (0x0000aaf5) form_midp_field_time_pane_t

0x0293,	// (0x00000293) input_focus_pane_cp052

0x0293,	// (0x00000293) bg_input_focus_pane_cp040

0x3a22,	// (0x00003a22) form_midp_gauge_slider_pane_t1

0x3a30,	// (0x00003a30) form_midp_gauge_slider_pane_t2

0xcd20,	// (0x0000cd20) form_midp_gauge_slider_pane_t3

0xcd2e,	// (0x0000cd2e) form_midp_gauge_slider_pane_t4

0x0003,

0xf3e6,	// (0x0000f3e6) form_midp_gauge_slider_pane_t

0x3a5a,	// (0x00003a5a) form_midp_slider_pane

0x04fd,	// (0x000004fd) bg_input_focus_pane_cp041_ParamLimits

0x04fd,	// (0x000004fd) bg_input_focus_pane_cp041

0x39ef,	// (0x000039ef) form_midp_gauge_wait_pane_t1_ParamLimits

0x39ef,	// (0x000039ef) form_midp_gauge_wait_pane_t1

0x3a01,	// (0x00003a01) form_midp_gauge_wait_pane_t2_ParamLimits

0x3a01,	// (0x00003a01) form_midp_gauge_wait_pane_t2

0x0001,

0xaae7,	// (0x0000aae7) form_midp_gauge_wait_pane_t_ParamLimits

0xaae7,	// (0x0000aae7) form_midp_gauge_wait_pane_t

0x3a13,	// (0x00003a13) form_midp_wait_pane_ParamLimits

0x3a13,	// (0x00003a13) form_midp_wait_pane

0x39b9,	// (0x000039b9) form_midp_image_pane_g1

0x39c2,	// (0x000039c2) form_midp_image_pane_t1

0x39d1,	// (0x000039d1) form_midp_image_pane_t2

0x39e0,	// (0x000039e0) form_midp_image_pane_t3

0x0002,

0xaae0,	// (0x0000aae0) form_midp_image_pane_t

0x39a1,	// (0x000039a1) list_single_midp_pane_g1

0x39aa,	// (0x000039aa) list_single_midp_pane_t1

0xcd0b,	// (0x0000cd0b) list_midp_form_item_pane_ParamLimits

0xcd0b,	// (0x0000cd0b) list_midp_form_item_pane

0x2670,	// (0x00002670) list_midp_form_item_pane_t1

0x267f,	// (0x0000267f) midp_ticker_pane_g1

0x268b,	// (0x0000268b) midp_ticker_pane_g2

0x0001,

0xaa36,	// (0x0000aa36) midp_ticker_pane_g

0xc017,	// (0x0000c017) midp_ticker_pane_t1

0xd207,	// (0x0000d207) midp_editing_number_pane_t1

0x5031,	// (0x00005031) midp_editing_number_pane

0x5040,	// (0x00005040) midp_ticker_pane

0x4d1f,	// (0x00004d1f) ai_message_heading_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp14

0x4d27,	// (0x00004d27) listscroll_ai_message_pane

0x4ca9,	// (0x00004ca9) ai_message_heading_pane_g1_ParamLimits

0x4ca9,	// (0x00004ca9) ai_message_heading_pane_g1

0x4cb5,	// (0x00004cb5) ai_message_heading_pane_g2_ParamLimits

0x4cb5,	// (0x00004cb5) ai_message_heading_pane_g2

0x4cc1,	// (0x00004cc1) ai_message_heading_pane_g3_ParamLimits

0x4cc1,	// (0x00004cc1) ai_message_heading_pane_g3

0x4ccd,	// (0x00004ccd) ai_message_heading_pane_g4_ParamLimits

0x4ccd,	// (0x00004ccd) ai_message_heading_pane_g4

0x0003,

0xac21,	// (0x0000ac21) ai_message_heading_pane_g_ParamLimits

0xac21,	// (0x0000ac21) ai_message_heading_pane_g

0x4cd9,	// (0x00004cd9) ai_message_heading_pane_t1_ParamLimits

0x4cd9,	// (0x00004cd9) ai_message_heading_pane_t1

0x4cf3,	// (0x00004cf3) ai_message_heading_pane_t2_ParamLimits

0x4cf3,	// (0x00004cf3) ai_message_heading_pane_t2

0x0001,

0xac2a,	// (0x0000ac2a) ai_message_heading_pane_t_ParamLimits

0xac2a,	// (0x0000ac2a) ai_message_heading_pane_t

0x4d05,	// (0x00004d05) bg_popup_heading_pane_cp1_ParamLimits

0x4d05,	// (0x00004d05) bg_popup_heading_pane_cp1

0x4c97,	// (0x00004c97) list_ai_message_pane_ParamLimits

0x4c97,	// (0x00004c97) list_ai_message_pane

0x166c,	// (0x0000166c) scroll_pane_cp10

0x4be3,	// (0x00004be3) list_ai_message_pane_g1

0x4beb,	// (0x00004beb) list_ai_message_pane_g2

0x0001,

0xabfe,	// (0x0000abfe) list_ai_message_pane_g

0x4bf3,	// (0x00004bf3) list_ai_message_pane_t1_ParamLimits

0x4bf3,	// (0x00004bf3) list_ai_message_pane_t1

0x4c08,	// (0x00004c08) list_ai_message_pane_t2_ParamLimits

0x4c08,	// (0x00004c08) list_ai_message_pane_t2

0x4c1d,	// (0x00004c1d) list_ai_message_pane_t3_ParamLimits

0x4c1d,	// (0x00004c1d) list_ai_message_pane_t3

0x4c32,	// (0x00004c32) list_ai_message_pane_t4_ParamLimits

0x4c32,	// (0x00004c32) list_ai_message_pane_t4

0x0003,

0xac03,	// (0x0000ac03) list_ai_message_pane_t_ParamLimits

0xac03,	// (0x0000ac03) list_ai_message_pane_t

0xd037,	// (0x0000d037) cell_ai_soft_ind_pane_ParamLimits

0xd037,	// (0x0000d037) cell_ai_soft_ind_pane

0x26a9,	// (0x000026a9) cell_ai_soft_ind_pane_g1_ParamLimits

0x26a9,	// (0x000026a9) cell_ai_soft_ind_pane_g1

0x0293,	// (0x00000293) grid_highlight_cp1

0x26b6,	// (0x000026b6) text_secondary_cp56_ParamLimits

0x26b6,	// (0x000026b6) text_secondary_cp56

0x4ba3,	// (0x00004ba3) example_general_pane_ParamLimits

0x4ba3,	// (0x00004ba3) example_general_pane

0x4baf,	// (0x00004baf) example_parent_pane_g1_ParamLimits

0x4baf,	// (0x00004baf) example_parent_pane_g1

0x4bbb,	// (0x00004bbb) example_parent_pane_t1_ParamLimits

0x4bbb,	// (0x00004bbb) example_parent_pane_t1

0xc570,	// (0x0000c570) popup_preview_text_window_ParamLimits

0xc570,	// (0x0000c570) popup_preview_text_window

0x24d5,	// (0x000024d5) list_single_pane_cp2_g4

0x08d9,	// (0x000008d9) bg_popup_preview_window_pane_ParamLimits

0x08d9,	// (0x000008d9) bg_popup_preview_window_pane

0x48da,	// (0x000048da) popup_preview_text_window_t1_ParamLimits

0x48da,	// (0x000048da) popup_preview_text_window_t1

0x48f8,	// (0x000048f8) popup_preview_text_window_t2_ParamLimits

0x48f8,	// (0x000048f8) popup_preview_text_window_t2

0x4941,	// (0x00004941) popup_preview_text_window_t3_ParamLimits

0x4941,	// (0x00004941) popup_preview_text_window_t3

0x4986,	// (0x00004986) popup_preview_text_window_t4_ParamLimits

0x4986,	// (0x00004986) popup_preview_text_window_t4

0x0004,

0xabd2,	// (0x0000abd2) popup_preview_text_window_t_ParamLimits

0xabd2,	// (0x0000abd2) popup_preview_text_window_t

0x4a04,	// (0x00004a04) scroll_pane_cp11

0x367c,	// (0x0000367c) bg_popup_preview_window_pane_g1

0x489a,	// (0x0000489a) bg_popup_preview_window_pane_g2

0x48a2,	// (0x000048a2) bg_popup_preview_window_pane_g3

0x48aa,	// (0x000048aa) bg_popup_preview_window_pane_g4

0x48b2,	// (0x000048b2) bg_popup_preview_window_pane_g5

0x48ba,	// (0x000048ba) bg_popup_preview_window_pane_g6

0x48c2,	// (0x000048c2) bg_popup_preview_window_pane_g7

0x48ca,	// (0x000048ca) bg_popup_preview_window_pane_g8

0x0044,	// (0x00000044) aid_popup_width_pane

0xc4ec,	// (0x0000c4ec) popup_midp_note_alarm_window_ParamLimits

0xc4ec,	// (0x0000c4ec) popup_midp_note_alarm_window

0x1347,	// (0x00001347) data_form_pane_ParamLimits

0xbb7e,	// (0x0000bb7e) form_field_data_pane_g1

0xbb88,	// (0x0000bb88) form_field_data_pane_t1_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_ParamLimits

0x1383,	// (0x00001383) data_form_wide_pane_ParamLimits

0x138f,	// (0x0000138f) form_field_data_wide_pane_g1

0x13bb,	// (0x000013bb) form_field_data_wide_pane_t1_ParamLimits

0x0b85,	// (0x00000b85) input_focus_pane_cp6_ParamLimits

0xbcec,	// (0x0000bcec) input_popup_find_pane_g1_ParamLimits

0xbcec,	// (0x0000bcec) input_popup_find_pane_g1

0x199c,	// (0x0000199c) aid_navi_side_left_pane

0x19b1,	// (0x000019b1) aid_navi_side_right_pane

0x4149,	// (0x00004149) bg_popup_window_pane_cp30_ParamLimits

0x4149,	// (0x00004149) bg_popup_window_pane_cp30

0x41c3,	// (0x000041c3) popup_midp_note_alarm_window_g1_ParamLimits

0x41c3,	// (0x000041c3) popup_midp_note_alarm_window_g1

0x41f3,	// (0x000041f3) popup_midp_note_alarm_window_t1_ParamLimits

0x41f3,	// (0x000041f3) popup_midp_note_alarm_window_t1

0x4294,	// (0x00004294) popup_midp_note_alarm_window_t2_ParamLimits

0x4294,	// (0x00004294) popup_midp_note_alarm_window_t2

0x4342,	// (0x00004342) popup_midp_note_alarm_window_t3_ParamLimits

0x4342,	// (0x00004342) popup_midp_note_alarm_window_t3

0x4374,	// (0x00004374) popup_midp_note_alarm_window_t4_ParamLimits

0x4374,	// (0x00004374) popup_midp_note_alarm_window_t4

0x439a,	// (0x0000439a) popup_midp_note_alarm_window_t5_ParamLimits

0x439a,	// (0x0000439a) popup_midp_note_alarm_window_t5

0x000a,

0xab6f,	// (0x0000ab6f) popup_midp_note_alarm_window_t_ParamLimits

0xab6f,	// (0x0000ab6f) popup_midp_note_alarm_window_t

0x4446,	// (0x00004446) wait_bar_pane_cp1_ParamLimits

0x4446,	// (0x00004446) wait_bar_pane_cp1

0x0293,	// (0x00000293) wait_anim_pane_copy1

0x0293,	// (0x00000293) wait_border_pane_copy1

0x3e2f,	// (0x00003e2f) wait_border_pane_g1_copy1

0x13d5,	// (0x000013d5) form_field_popup_pane_g1

0xbba2,	// (0x0000bba2) form_field_popup_pane_t1_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_cp7_ParamLimits

0x13f5,	// (0x000013f5) list_form_pane_ParamLimits

0x1401,	// (0x00001401) form_field_popup_wide_pane_g1

0x1409,	// (0x00001409) form_field_popup_wide_pane_t1_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_cp8_ParamLimits

0x141e,	// (0x0000141e) list_form_wide_pane_ParamLimits

0x524d,	// (0x0000524d) aid_size_cell_graphic_pane

0xbc21,	// (0x0000bc21) data_form_pane_t1_ParamLimits

0xd1eb,	// (0x0000d1eb) data_form_wide_pane_t1_ParamLimits

0xc925,	// (0x0000c925) bg_status_flat_pane

0xb3ba,	// (0x0000b3ba) title_pane_t1_ParamLimits

0x04c5,	// (0x000004c5) title_pane_t2_ParamLimits

0x04eb,	// (0x000004eb) title_pane_t3_ParamLimits

0xf2b6,	// (0x0000f2b6) title_pane_t_ParamLimits

0x1cb5,	// (0x00001cb5) level_1_signal_ParamLimits

0x1cc2,	// (0x00001cc2) level_2_signal_ParamLimits

0x1ccf,	// (0x00001ccf) level_3_signal_ParamLimits

0x1cdc,	// (0x00001cdc) level_4_signal_ParamLimits

0x1ce9,	// (0x00001ce9) level_5_signal_ParamLimits

0x1cf6,	// (0x00001cf6) level_6_signal_ParamLimits

0x1d03,	// (0x00001d03) level_7_signal_ParamLimits

0x1cb5,	// (0x00001cb5) level_1_battery_ParamLimits

0x1cc2,	// (0x00001cc2) level_2_battery_ParamLimits

0x1ccf,	// (0x00001ccf) level_3_battery_ParamLimits

0x1cdc,	// (0x00001cdc) level_4_battery_ParamLimits

0x1ce9,	// (0x00001ce9) level_5_battery_ParamLimits

0x1cf6,	// (0x00001cf6) level_6_battery_ParamLimits

0x1d03,	// (0x00001d03) level_7_battery_ParamLimits

0x404e,	// (0x0000404e) bg_status_flat_pane_g1

0x4056,	// (0x00004056) bg_status_flat_pane_g2

0x405e,	// (0x0000405e) bg_status_flat_pane_g3

0x4066,	// (0x00004066) bg_status_flat_pane_g4

0x406e,	// (0x0000406e) bg_status_flat_pane_g5

0x4076,	// (0x00004076) bg_status_flat_pane_g6

0x407e,	// (0x0000407e) bg_status_flat_pane_g7

0xb44e,	// (0x0000b44e) tabs_3_active_pane_t1_ParamLimits

0xb44e,	// (0x0000b44e) tabs_3_passive_pane_t1_ParamLimits

0xb468,	// (0x0000b468) tabs_4_active_pane_t1_ParamLimits

0xb468,	// (0x0000b468) tabs_4_1_passive_pane_t1_ParamLimits

0xbd02,	// (0x0000bd02) tabs_2_active_pane_t1_ParamLimits

0xbd02,	// (0x0000bd02) tabs_2_passive_pane_t1_ParamLimits

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp4_ParamLimits

0xbd14,	// (0x0000bd14) tabs_2_long_active_pane_t1_ParamLimits

0x2b2c,	// (0x00002b2c) bg_passive_tab_pane_cp4_ParamLimits

0x3737,	// (0x00003737) list_single_midp_graphic_pane_t1_ParamLimits

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp5_ParamLimits

0xbd27,	// (0x0000bd27) tabs_3_long_active_pane_t1_ParamLimits

0x2b2c,	// (0x00002b2c) bg_passive_tab_pane_cp5_ParamLimits

0x3737,	// (0x00003737) list_single_midp_graphic_pane_t1

0xc925,	// (0x0000c925) bg_status_flat_pane_ParamLimits

0x3261,	// (0x00003261) indicator_pane_cp2_ParamLimits

0x3261,	// (0x00003261) indicator_pane_cp2

0xca9c,	// (0x0000ca9c) navi_pane_srt_ParamLimits

0xca9c,	// (0x0000ca9c) navi_pane_srt

0x33a9,	// (0x000033a9) popup_clock_digital_analogue_window_cp1

0x0685,	// (0x00000685) indicator_pane_t1

0x25a4,	// (0x000025a4) copy_highlight_pane

0x25a4,	// (0x000025a4) cursor_graphics_pane

0x25a4,	// (0x000025a4) graphic_within_text_pane

0x25a4,	// (0x000025a4) link_highlight_pane

0x49c7,	// (0x000049c7) popup_preview_text_window_t5_ParamLimits

0x49c7,	// (0x000049c7) popup_preview_text_window_t5

0x26d0,	// (0x000026d0) cursor_digital_pane

0x26d0,	// (0x000026d0) cursor_primary_pane

0x26e1,	// (0x000026e1) cursor_primary_small_pane

0x26e9,	// (0x000026e9) cursor_secondary_pane

0x26f1,	// (0x000026f1) cursor_title_pane

0x26d0,	// (0x000026d0) link_highlight_digital_pane

0x26d8,	// (0x000026d8) link_highlight_primary_pane

0x26e1,	// (0x000026e1) link_highlight_primary_small_pane

0x26e9,	// (0x000026e9) link_highlight_secondary_pane

0x26f1,	// (0x000026f1) link_highlight_title_pane

0x26d0,	// (0x000026d0) copy_highlight_digital_pane

0x26d0,	// (0x000026d0) copy_highlight_primary_pane

0x26e1,	// (0x000026e1) copy_highlight_primary_small_pane

0x26e9,	// (0x000026e9) copy_highlight_secondary_pane

0x26f1,	// (0x000026f1) copy_highlight_title_pane

0x26e9,	// (0x000026e9) graphic_text_digital_pane

0x40ec,	// (0x000040ec) graphic_text_primary_pane

0x40f5,	// (0x000040f5) graphic_text_primary_small_pane

0x26e1,	// (0x000026e1) graphic_text_secondary_pane

0x26d0,	// (0x000026d0) graphic_text_title_pane

0xc029,	// (0x0000c029) cursor_primary_pane_g1

0x40de,	// (0x000040de) cursor_text_primary_t1

0xcdb3,	// (0x0000cdb3) cursor_primary_small_pane_g1

0x40d0,	// (0x000040d0) cursor_text_primary_small_t1

0xcda9,	// (0x0000cda9) cursor_primary_small_pane_g1_copy1

0x40b8,	// (0x000040b8) cursor_text_primary_small_t1_copy1

0x4096,	// (0x00004096) cursor_text_title_t1

0xcd9f,	// (0x0000cd9f) cursor_title_pane_g1

0xc029,	// (0x0000c029) cursor_digital_pane_g1

0x2703,	// (0x00002703) cursor_text_digital_t1

0x2728,	// (0x00002728) link_highlight_primary_pane_g1

0x403f,	// (0x0000403f) link_highlight_primary_pane_t1

0x2711,	// (0x00002711) link_highlight_primary_small_pane_g1

0x2719,	// (0x00002719) link_highlight_primary_small_pane_t1

0x2728,	// (0x00002728) link_highlight_secondary_pane_g1

0x2730,	// (0x00002730) link_highlight_secondary_pane_t1

0x3fb3,	// (0x00003fb3) link_highlight_title_pane_g1

0x3fbb,	// (0x00003fbb) link_highlight_title_pane_t1

0x3f9c,	// (0x00003f9c) link_highlight_digital_pane_g1

0x3fa4,	// (0x00003fa4) link_highlight_digital_pane_t1

0x3e74,	// (0x00003e74) copy_highlight_primary_pane_g1

0x3e7c,	// (0x00003e7c) copy_highlight_primary_pane_t1

0x3e4e,	// (0x00003e4e) copy_highlight_primary_small_pane_g1

0x3e65,	// (0x00003e65) copy_highlight_primary_small_pane_t1

0x273f,	// (0x0000273f) copy_highlight_secondary_pane_g1

0x2747,	// (0x00002747) copy_highlight_secondary_pane_t1

0x3e4e,	// (0x00003e4e) copy_highlight_title_pane_g1

0x3e56,	// (0x00003e56) copy_highlight_title_pane_t1

0x3e74,	// (0x00003e74) copy_highlight_digital_pane_g1

0x54cf,	// (0x000054cf) copy_highlight_digital_pane_t1

0x5423,	// (0x00005423) graphic_text_primary_pane_g1

0x54b3,	// (0x000054b3) graphic_text_primary_pane_t1

0x54c1,	// (0x000054c1) graphic_text_primary_pane_t2

0x0001,

0xac9e,	// (0x0000ac9e) graphic_text_primary_pane_t

0x548f,	// (0x0000548f) graphic_text_primary_small_pane_g1

0x5497,	// (0x00005497) graphic_text_primary_small_pane_t1

0x54a5,	// (0x000054a5) graphic_text_primary_small_pane_t2

0x0001,

0xac99,	// (0x0000ac99) graphic_text_primary_small_pane_t

0x546b,	// (0x0000546b) graphic_text_secondary_pane_g1

0x5473,	// (0x00005473) graphic_text_secondary_pane_t1

0x5481,	// (0x00005481) graphic_text_secondary_pane_t2

0x0001,

0xac94,	// (0x0000ac94) graphic_text_secondary_pane_t

0x5447,	// (0x00005447) graphic_text_title_pane_g1

0x544f,	// (0x0000544f) graphic_text_title_pane_t1

0x545d,	// (0x0000545d) graphic_text_title_pane_t2

0x0001,

0xac8f,	// (0x0000ac8f) graphic_text_title_pane_t

0x5423,	// (0x00005423) graphic_text_digital_pane_g1

0x542b,	// (0x0000542b) graphic_text_digital_pane_t1

0x5439,	// (0x00005439) graphic_text_digital_pane_t2

0x0001,

0xac8a,	// (0x0000ac8a) graphic_text_digital_pane_t

0x04fd,	// (0x000004fd) navi_icon_pane_srt_ParamLimits

0x04fd,	// (0x000004fd) navi_icon_pane_srt

0x0293,	// (0x00000293) navi_midp_pane_srt

0x0293,	// (0x00000293) navi_navi_pane_srt

0x04fd,	// (0x000004fd) navi_text_pane_srt_ParamLimits

0x04fd,	// (0x000004fd) navi_text_pane_srt

0x53ee,	// (0x000053ee) navi_navi_icon_text_pane_srt

0x53f6,	// (0x000053f6) navi_navi_pane_srt_g1_ParamLimits

0x53f6,	// (0x000053f6) navi_navi_pane_srt_g1

0x5408,	// (0x00005408) navi_navi_pane_srt_g2_ParamLimits

0x5408,	// (0x00005408) navi_navi_pane_srt_g2

0x0001,

0xac85,	// (0x0000ac85) navi_navi_pane_srt_g_ParamLimits

0xac85,	// (0x0000ac85) navi_navi_pane_srt_g

0x541a,	// (0x0000541a) navi_navi_tabs_pane_srt

0x53ee,	// (0x000053ee) navi_navi_text_pane_srt

0x53ee,	// (0x000053ee) navi_navi_volume_pane_srt

0x53df,	// (0x000053df) navi_navi_text_pane_srt_t1

0x53ba,	// (0x000053ba) navi_navi_volume_pane_srt_g1

0x53c2,	// (0x000053c2) volume_small_pane_srt_ParamLimits

0x53c2,	// (0x000053c2) volume_small_pane_srt

0x2756,	// (0x00002756) volume_small_pane_srt_g1_ParamLimits

0x2756,	// (0x00002756) volume_small_pane_srt_g1

0x2766,	// (0x00002766) volume_small_pane_srt_g2_ParamLimits

0x2766,	// (0x00002766) volume_small_pane_srt_g2

0x2777,	// (0x00002777) volume_small_pane_srt_g3_ParamLimits

0x2777,	// (0x00002777) volume_small_pane_srt_g3

0x2788,	// (0x00002788) volume_small_pane_srt_g4_ParamLimits

0x2788,	// (0x00002788) volume_small_pane_srt_g4

0x2799,	// (0x00002799) volume_small_pane_srt_g5_ParamLimits

0x2799,	// (0x00002799) volume_small_pane_srt_g5

0x27aa,	// (0x000027aa) volume_small_pane_srt_g6_ParamLimits

0x27aa,	// (0x000027aa) volume_small_pane_srt_g6

0x27bb,	// (0x000027bb) volume_small_pane_srt_g7_ParamLimits

0x27bb,	// (0x000027bb) volume_small_pane_srt_g7

0x27cc,	// (0x000027cc) volume_small_pane_srt_g8_ParamLimits

0x27cc,	// (0x000027cc) volume_small_pane_srt_g8

0x27dd,	// (0x000027dd) volume_small_pane_srt_g9_ParamLimits

0x27dd,	// (0x000027dd) volume_small_pane_srt_g9

0x27ee,	// (0x000027ee) volume_small_pane_srt_g10_ParamLimits

0x27ee,	// (0x000027ee) volume_small_pane_srt_g10

0x0009,

0xaa3b,	// (0x0000aa3b) volume_small_pane_srt_g_ParamLimits

0xaa3b,	// (0x0000aa3b) volume_small_pane_srt_g

0x0982,	// (0x00000982) query_popup_data_pane_cp2

0x53a8,	// (0x000053a8) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x53a8,	// (0x000053a8) navi_navi_icon_text_pane_srt_t1

0x40ec,	// (0x000040ec) navi_tabs_2_long_pane_srt

0x40ec,	// (0x000040ec) navi_tabs_2_pane_srt

0x40ec,	// (0x000040ec) navi_tabs_3_long_pane_srt

0x40ec,	// (0x000040ec) navi_tabs_3_pane_srt

0x40ec,	// (0x000040ec) navi_tabs_4_pane_srt

0x5380,	// (0x00005380) tabs_2_active_pane_srt_ParamLimits

0x5380,	// (0x00005380) tabs_2_active_pane_srt

0x5390,	// (0x00005390) tabs_2_passive_pane_srt_ParamLimits

0x5390,	// (0x00005390) tabs_2_passive_pane_srt

0x380a,	// (0x0000380a) bg_passive_tab_pane_cp1_srt_ParamLimits

0x380a,	// (0x0000380a) bg_passive_tab_pane_cp1_srt

0x5354,	// (0x00005354) bg_passive_tab_pane_g1_cp1_srt

0x20b0,	// (0x000020b0) bg_passive_tab_pane_g2_cp1_srt

0x535d,	// (0x0000535d) bg_passive_tab_pane_g3_cp1_srt

0x0823,	// (0x00000823) bg_active_tab_pane_cp1_srt_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp1_srt

0x5366,	// (0x00005366) tabs_2_active_pane_srt_g1

0xd31b,	// (0x0000d31b) tabs_2_active_pane_srt_t1_ParamLimits

0xd31b,	// (0x0000d31b) tabs_2_active_pane_srt_t1

0x5354,	// (0x00005354) bg_active_tab_pane_g1_cp1_srt

0x20b0,	// (0x000020b0) bg_active_tab_pane_g2_cp1_srt

0x535d,	// (0x0000535d) bg_active_tab_pane_g3_cp1_srt

0x5321,	// (0x00005321) tabs_3_active_pane_srt_ParamLimits

0x5321,	// (0x00005321) tabs_3_active_pane_srt

0x5332,	// (0x00005332) tabs_3_passive_pane_cp_srt_ParamLimits

0x5332,	// (0x00005332) tabs_3_passive_pane_cp_srt

0x5343,	// (0x00005343) tabs_3_passive_pane_srt_ParamLimits

0x5343,	// (0x00005343) tabs_3_passive_pane_srt

0x380a,	// (0x0000380a) bg_passive_tab_pane_cp2_srt_ParamLimits

0x380a,	// (0x0000380a) bg_passive_tab_pane_cp2_srt

0x27ff,	// (0x000027ff) bg_passive_tab_pane_g1_cp2_srt

0x20b0,	// (0x000020b0) bg_passive_tab_pane_g2_cp2_srt

0x2808,	// (0x00002808) bg_passive_tab_pane_g3_cp2_srt

0x0823,	// (0x00000823) bg_active_tab_pane_cp2_srt_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp2_srt

0x5307,	// (0x00005307) tabs_3_active_pane_srt_g1

0xd305,	// (0x0000d305) tabs_3_active_pane_srt_t1_ParamLimits

0xd305,	// (0x0000d305) tabs_3_active_pane_srt_t1

0x27ff,	// (0x000027ff) bg_active_tab_pane_g1_cp2_srt

0x20b0,	// (0x000020b0) bg_active_tab_pane_g2_cp2_srt

0x2808,	// (0x00002808) bg_active_tab_pane_g3_cp2_srt

0x52bf,	// (0x000052bf) tabs_4_active_pane_srt_ParamLimits

0x52bf,	// (0x000052bf) tabs_4_active_pane_srt

0x52d1,	// (0x000052d1) tabs_4_passive_pane_cp2_srt_ParamLimits

0x52d1,	// (0x000052d1) tabs_4_passive_pane_cp2_srt

0x2ab2,	// (0x00002ab2) aid_size_cell_toolbar

0x4e77,	// (0x00004e77) main_idle_act_pane_ParamLimits

0x2cd1,	// (0x00002cd1) popup_large_graphic_colour_window_ParamLimits

0xc7f0,	// (0x0000c7f0) popup_toolbar_window_ParamLimits

0xc7f0,	// (0x0000c7f0) popup_toolbar_window

0x507d,	// (0x0000507d) list_single_graphic_2heading_pane_ParamLimits

0x507d,	// (0x0000507d) list_single_graphic_2heading_pane

0x1a28,	// (0x00001a28) aid_size_cell_apps_grid_lsc_pane

0x1a3a,	// (0x00001a3a) aid_size_cell_apps_grid_prt_pane

0x2b2c,	// (0x00002b2c) bg_wml_button_pane_cp1_ParamLimits

0x2b2c,	// (0x00002b2c) bg_wml_button_pane_cp1

0xcd3c,	// (0x0000cd3c) form_midp_field_text_pane_t1_ParamLimits

0x380a,	// (0x0000380a) input_focus_pane_cp050_ParamLimits

0x3ae6,	// (0x00003ae6) list_midp_form_text_pane_ParamLimits

0x3a8c,	// (0x00003a8c) input_focus_pane_cp051_ParamLimits

0x3aa0,	// (0x00003aa0) list_midp_choice_pane_ParamLimits

0xccd7,	// (0x0000ccd7) list_single_2graphic_pane_cp3_ParamLimits

0xccd7,	// (0x0000ccd7) list_single_2graphic_pane_cp3

0xcceb,	// (0x0000cceb) list_single_midp_graphic_pane_ParamLimits

0xcceb,	// (0x0000cceb) list_single_midp_graphic_pane

0x3508,	// (0x00003508) list_single_graphic_2heading_pane_g1_ParamLimits

0x3508,	// (0x00003508) list_single_graphic_2heading_pane_g1

0x3514,	// (0x00003514) list_single_graphic_2heading_pane_g4_ParamLimits

0x3514,	// (0x00003514) list_single_graphic_2heading_pane_g4

0x3520,	// (0x00003520) list_single_graphic_2heading_pane_g5_ParamLimits

0x3520,	// (0x00003520) list_single_graphic_2heading_pane_g5

0x0002,

0xaa8e,	// (0x0000aa8e) list_single_graphic_2heading_pane_g_ParamLimits

0xaa8e,	// (0x0000aa8e) list_single_graphic_2heading_pane_g

0x352c,	// (0x0000352c) list_single_graphic_2heading_pane_t1_ParamLimits

0x352c,	// (0x0000352c) list_single_graphic_2heading_pane_t1

0x3540,	// (0x00003540) list_single_graphic_2heading_pane_t2_ParamLimits

0x3540,	// (0x00003540) list_single_graphic_2heading_pane_t2

0x355c,	// (0x0000355c) list_single_graphic_2heading_pane_t3_ParamLimits

0x355c,	// (0x0000355c) list_single_graphic_2heading_pane_t3

0x0002,

0xaa95,	// (0x0000aa95) list_single_graphic_2heading_pane_t_ParamLimits

0xaa95,	// (0x0000aa95) list_single_graphic_2heading_pane_t

0x3574,	// (0x00003574) bg_popup_sub_pane_cp2

0x359e,	// (0x0000359e) grid_toobar_pane

0x35da,	// (0x000035da) cell_toolbar_pane_ParamLimits

0x35da,	// (0x000035da) cell_toolbar_pane

0x3620,	// (0x00003620) cell_toolbar_pane_g1_ParamLimits

0x3620,	// (0x00003620) cell_toolbar_pane_g1

0x3634,	// (0x00003634) cell_toolbar_pane_g2_ParamLimits

0x3634,	// (0x00003634) cell_toolbar_pane_g2

0x0001,

0xaa9c,	// (0x0000aa9c) cell_toolbar_pane_g_ParamLimits

0xaa9c,	// (0x0000aa9c) cell_toolbar_pane_g

0x3656,	// (0x00003656) grid_highlight_pane_cp2_ParamLimits

0x3656,	// (0x00003656) grid_highlight_pane_cp2

0x3670,	// (0x00003670) toolbar_button_pane

0x367c,	// (0x0000367c) toolbar_button_pane_g1

0x3684,	// (0x00003684) toolbar_button_pane_g2

0x368c,	// (0x0000368c) toolbar_button_pane_g3

0x3694,	// (0x00003694) toolbar_button_pane_g4

0x369c,	// (0x0000369c) toolbar_button_pane_g5

0x36a4,	// (0x000036a4) toolbar_button_pane_g6

0x36ac,	// (0x000036ac) toolbar_button_pane_g7

0x36b4,	// (0x000036b4) toolbar_button_pane_g8

0x36bc,	// (0x000036bc) toolbar_button_pane_g9

0x0009,

0xaaa1,	// (0x0000aaa1) toolbar_button_pane_g

0x36cc,	// (0x000036cc) list_single_2graphic_pane_g1_cp3_ParamLimits

0x36cc,	// (0x000036cc) list_single_2graphic_pane_g1_cp3

0xcc39,	// (0x0000cc39) list_single_2graphic_pane_g2_cp3_ParamLimits

0xcc39,	// (0x0000cc39) list_single_2graphic_pane_g2_cp3

0x36e9,	// (0x000036e9) list_single_2graphic_pane_g3_cp3

0x2073,	// (0x00002073) list_single_2graphic_pane_g4_cp3_ParamLimits

0x2073,	// (0x00002073) list_single_2graphic_pane_g4_cp3

0x36f1,	// (0x000036f1) list_single_2graphic_pane_t1_cp3_ParamLimits

0x36f1,	// (0x000036f1) list_single_2graphic_pane_t1_cp3

0x0fd8,	// (0x00000fd8) list_single_midp_graphic_pane_g2_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_midp_graphic_pane_g2

0x2aba,	// (0x00002aba) aid_zoom_text_primary

0x2ac2,	// (0x00002ac2) aid_zoom_text_secondary

0x28bc,	// (0x000028bc) status_small_pane_g7_ParamLimits

0x28bc,	// (0x000028bc) status_small_pane_g7

0x28df,	// (0x000028df) status_small_pane_t1_ParamLimits

0xb396,	// (0x0000b396) title_pane_g2

0x0003,

0xf2ad,	// (0x0000f2ad) title_pane_g

0xb61e,	// (0x0000b61e) aid_size_cell_colour_1_pane_ParamLimits

0xb61e,	// (0x0000b61e) aid_size_cell_colour_1_pane

0xb632,	// (0x0000b632) aid_size_cell_colour_2_pane_ParamLimits

0xb632,	// (0x0000b632) aid_size_cell_colour_2_pane

0xb646,	// (0x0000b646) aid_size_cell_colour_3_pane_ParamLimits

0xb646,	// (0x0000b646) aid_size_cell_colour_3_pane

0xb65a,	// (0x0000b65a) aid_size_cell_colour_4_pane_ParamLimits

0xb65a,	// (0x0000b65a) aid_size_cell_colour_4_pane

0x18a3,	// (0x000018a3) title_pane_stacon_g1_ParamLimits

0x18a3,	// (0x000018a3) title_pane_stacon_g1

0x3ed3,	// (0x00003ed3) popup_note_wait_window_g3_ParamLimits

0x3ed3,	// (0x00003ed3) popup_note_wait_window_g3

0x3f49,	// (0x00003f49) popup_note_wait_window_t5_ParamLimits

0x3f49,	// (0x00003f49) popup_note_wait_window_t5

0x0293,	// (0x00000293) main_feb_china_hwr_fs_writing_pane

0xc222,	// (0x0000c222) popup_feb_china_hwr_fs_window_ParamLimits

0xc222,	// (0x0000c222) popup_feb_china_hwr_fs_window

0xcc4a,	// (0x0000cc4a) aid_size_cell_hwr_fs_ParamLimits

0xcc4a,	// (0x0000cc4a) aid_size_cell_hwr_fs

0x380a,	// (0x0000380a) bg_popup_sub_pane_cp3_ParamLimits

0x380a,	// (0x0000380a) bg_popup_sub_pane_cp3

0xcc5f,	// (0x0000cc5f) grid_hwr_fs_pane_ParamLimits

0xcc5f,	// (0x0000cc5f) grid_hwr_fs_pane

0x382e,	// (0x0000382e) linegrid_hwr_fs_pane_ParamLimits

0x382e,	// (0x0000382e) linegrid_hwr_fs_pane

0xcc77,	// (0x0000cc77) cell_hwr_fs_pane_ParamLimits

0xcc77,	// (0x0000cc77) cell_hwr_fs_pane

0x3860,	// (0x00003860) linegrid_hwr_fs_pane_g1_ParamLimits

0x3860,	// (0x00003860) linegrid_hwr_fs_pane_g1

0xcc9d,	// (0x0000cc9d) linegrid_hwr_fs_pane_g2_ParamLimits

0xcc9d,	// (0x0000cc9d) linegrid_hwr_fs_pane_g2

0x387e,	// (0x0000387e) linegrid_hwr_fs_pane_g3_ParamLimits

0x387e,	// (0x0000387e) linegrid_hwr_fs_pane_g3

0x388a,	// (0x0000388a) linegrid_hwr_fs_pane_g4_ParamLimits

0x388a,	// (0x0000388a) linegrid_hwr_fs_pane_g4

0x38a4,	// (0x000038a4) linegrid_hwr_fs_pane_g5_ParamLimits

0x38a4,	// (0x000038a4) linegrid_hwr_fs_pane_g5

0x0004,

0xf3d2,	// (0x0000f3d2) linegrid_hwr_fs_pane_g_ParamLimits

0xf3d2,	// (0x0000f3d2) linegrid_hwr_fs_pane_g

0x38ba,	// (0x000038ba) cell_hwr_fs_pane_g1_ParamLimits

0x38ba,	// (0x000038ba) cell_hwr_fs_pane_g1

0x343f,	// (0x0000343f) cell_hwr_fs_pane_g2_ParamLimits

0x343f,	// (0x0000343f) cell_hwr_fs_pane_g2

0xccaf,	// (0x0000ccaf) cell_hwr_fs_pane_g3_ParamLimits

0xccaf,	// (0x0000ccaf) cell_hwr_fs_pane_g3

0xccbc,	// (0x0000ccbc) cell_hwr_fs_pane_g4_ParamLimits

0xccbc,	// (0x0000ccbc) cell_hwr_fs_pane_g4

0x0003,

0xf3dd,	// (0x0000f3dd) cell_hwr_fs_pane_g_ParamLimits

0xf3dd,	// (0x0000f3dd) cell_hwr_fs_pane_g

0xccc9,	// (0x0000ccc9) cell_hwr_fs_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp6

0x0293,	// (0x00000293) main_idle_act2_pane

0x1653,	// (0x00001653) aid_inside_area_popup_secondary

0xcf0d,	// (0x0000cf0d) aid_inside_area_window_primary_ParamLimits

0xcf0d,	// (0x0000cf0d) aid_inside_area_window_primary

0x54de,	// (0x000054de) ai2_news_ticker_pane

0x54e6,	// (0x000054e6) aid_size_cell_ai1_link_ParamLimits

0x54e6,	// (0x000054e6) aid_size_cell_ai1_link

0xd331,	// (0x0000d331) popup_ai2_data_window_ParamLimits

0xd331,	// (0x0000d331) popup_ai2_data_window

0x5516,	// (0x00005516) popup_ai2_link_window_ParamLimits

0x5516,	// (0x00005516) popup_ai2_link_window

0x380a,	// (0x0000380a) bg_popup_sub_pane_cp4_ParamLimits

0x380a,	// (0x0000380a) bg_popup_sub_pane_cp4

0x552a,	// (0x0000552a) grid_ai2_link_pane_ParamLimits

0x552a,	// (0x0000552a) grid_ai2_link_pane

0x5541,	// (0x00005541) popup_ai2_link_window_g1_ParamLimits

0x5541,	// (0x00005541) popup_ai2_link_window_g1

0x554d,	// (0x0000554d) popup_ai2_link_window_g2_ParamLimits

0x554d,	// (0x0000554d) popup_ai2_link_window_g2

0x0001,

0xaca3,	// (0x0000aca3) popup_ai2_link_window_g_ParamLimits

0xaca3,	// (0x0000aca3) popup_ai2_link_window_g

0x555c,	// (0x0000555c) ai2_mp_button_pane

0x5564,	// (0x00005564) ai2_mp_volume_pane

0x3a8c,	// (0x00003a8c) bg_popup_sub_pane_cp5_ParamLimits

0x3a8c,	// (0x00003a8c) bg_popup_sub_pane_cp5

0x556c,	// (0x0000556c) heading_ai2_gene_pane_ParamLimits

0x556c,	// (0x0000556c) heading_ai2_gene_pane

0x5578,	// (0x00005578) list_ai2_gene_pane_ParamLimits

0x5578,	// (0x00005578) list_ai2_gene_pane

0x55c0,	// (0x000055c0) cell_ai2_link_pane_ParamLimits

0x55c0,	// (0x000055c0) cell_ai2_link_pane

0x55d6,	// (0x000055d6) cell_ai2_link_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp7

0x56a6,	// (0x000056a6) ai2_mp_volume_pane_g1

0x56ae,	// (0x000056ae) ai2_mp_volume_pane_g2

0xd35b,	// (0x0000d35b) list_ai2_gene_pane_t1

0x56b6,	// (0x000056b6) ai2_mp_volume_pane_g3

0x0002,

0xacbc,	// (0x0000acbc) ai2_mp_volume_pane_g

0x56be,	// (0x000056be) volume_small_pane_cp3

0x56c7,	// (0x000056c7) aid_size_cell_ai2_button

0x56cf,	// (0x000056cf) grid_ai2_button_pane

0x56d8,	// (0x000056d8) cell_ai2_button_pane_ParamLimits

0x56d8,	// (0x000056d8) cell_ai2_button_pane

0x002e,	// (0x0000002e) cell_ai2_button_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp8

0x5666,	// (0x00005666) ai2_gene_pane_t1_ParamLimits

0x5666,	// (0x00005666) ai2_gene_pane_t1

0xc198,	// (0x0000c198) aid_height_parent_landscape

0xd097,	// (0x0000d097) aid_height_set_list

0x4e77,	// (0x00004e77) aid_size_parent

0x524d,	// (0x0000524d) aid_size_cell_graphic_pane_ParamLimits

0x5588,	// (0x00005588) popup_ai2_data_window_g1_ParamLimits

0x5588,	// (0x00005588) popup_ai2_data_window_g1

0x5594,	// (0x00005594) ai2_news_ticker_pane_g1

0x559c,	// (0x0000559c) ai2_news_ticker_pane_g2

0x0001,

0xaca8,	// (0x0000aca8) ai2_news_ticker_pane_g

0x55a4,	// (0x000055a4) ai2_news_ticker_pane_t1

0x55b2,	// (0x000055b2) ai2_news_ticker_pane_t2

0x0001,

0xacad,	// (0x0000acad) ai2_news_ticker_pane_t

0x55df,	// (0x000055df) heading_ai2_gene_pane_g1

0x55e7,	// (0x000055e7) heading_ai2_gene_pane_t1_ParamLimits

0x55e7,	// (0x000055e7) heading_ai2_gene_pane_t1

0x55fc,	// (0x000055fc) list_highlight_pane_cp6

0xd345,	// (0x0000d345) ai2_gene_pane_ParamLimits

0xd345,	// (0x0000d345) ai2_gene_pane

0xd369,	// (0x0000d369) list_ai2_gene_pane_t2

0x0001,

0xf453,	// (0x0000f453) list_ai2_gene_pane_t

0x5637,	// (0x00005637) list_highlight_pane_cp8_ParamLimits

0x5637,	// (0x00005637) list_highlight_pane_cp8

0x5648,	// (0x00005648) ai2_gene_pane_g1_ParamLimits

0x5648,	// (0x00005648) ai2_gene_pane_g1

0x565a,	// (0x0000565a) ai2_gene_pane_g2_ParamLimits

0x565a,	// (0x0000565a) ai2_gene_pane_g2

0x0001,

0xacb7,	// (0x0000acb7) ai2_gene_pane_g_ParamLimits

0xacb7,	// (0x0000acb7) ai2_gene_pane_g

0x0daa,	// (0x00000daa) scroll_pane_cp12

0xc155,	// (0x0000c155) control_pane_t3_ParamLimits

0xc155,	// (0x0000c155) control_pane_t3

0x28d0,	// (0x000028d0) status_small_pane_g8_ParamLimits

0x28d0,	// (0x000028d0) status_small_pane_g8

0xc2b7,	// (0x0000c2b7) popup_find_window_ParamLimits

0xc526,	// (0x0000c526) popup_note_image_window_ParamLimits

0x3508,	// (0x00003508) list_double2_graphic_pane_vc_g1_ParamLimits

0x3508,	// (0x00003508) list_double2_graphic_pane_vc_g1

0x3514,	// (0x00003514) list_double2_graphic_pane_vc_g2_ParamLimits

0x3514,	// (0x00003514) list_double2_graphic_pane_vc_g2

0x3520,	// (0x00003520) list_double2_graphic_pane_vc_g3_ParamLimits

0x3520,	// (0x00003520) list_double2_graphic_pane_vc_g3

0x0002,

0xaa8e,	// (0x0000aa8e) list_double2_graphic_pane_vc_g_ParamLimits

0xaa8e,	// (0x0000aa8e) list_double2_graphic_pane_vc_g

0x360a,	// (0x0000360a) list_double2_graphic_pane_vc_t1_ParamLimits

0x360a,	// (0x0000360a) list_double2_graphic_pane_vc_t1

0x3514,	// (0x00003514) list_single_heading_pane_vc_g1_ParamLimits

0x3514,	// (0x00003514) list_single_heading_pane_vc_g1

0x3520,	// (0x00003520) list_single_heading_pane_vc_g2_ParamLimits

0x3520,	// (0x00003520) list_single_heading_pane_vc_g2

0x0001,

0xaab6,	// (0x0000aab6) list_single_heading_pane_vc_g_ParamLimits

0xaab6,	// (0x0000aab6) list_single_heading_pane_vc_g

0x370d,	// (0x0000370d) list_single_heading_pane_vc_t1_ParamLimits

0x370d,	// (0x0000370d) list_single_heading_pane_vc_t1

0x3723,	// (0x00003723) list_single_heading_pane_vc_t2_ParamLimits

0x3723,	// (0x00003723) list_single_heading_pane_vc_t2

0x0001,

0xaabb,	// (0x0000aabb) list_single_heading_pane_vc_t_ParamLimits

0xaabb,	// (0x0000aabb) list_single_heading_pane_vc_t

0x374d,	// (0x0000374d) list_setting_number_pane_vc_g1_ParamLimits

0x374d,	// (0x0000374d) list_setting_number_pane_vc_g1

0x3759,	// (0x00003759) list_setting_number_pane_vc_g2_ParamLimits

0x3759,	// (0x00003759) list_setting_number_pane_vc_g2

0x0001,

0xaac0,	// (0x0000aac0) list_setting_number_pane_vc_g_ParamLimits

0xaac0,	// (0x0000aac0) list_setting_number_pane_vc_g

0x3765,	// (0x00003765) list_setting_number_pane_vc_t1_ParamLimits

0x3765,	// (0x00003765) list_setting_number_pane_vc_t1

0x3779,	// (0x00003779) list_setting_number_pane_vc_t2_ParamLimits

0x3779,	// (0x00003779) list_setting_number_pane_vc_t2

0x3795,	// (0x00003795) list_setting_number_pane_vc_t3_ParamLimits

0x3795,	// (0x00003795) list_setting_number_pane_vc_t3

0x0002,

0xaac5,	// (0x0000aac5) list_setting_number_pane_vc_t_ParamLimits

0xaac5,	// (0x0000aac5) list_setting_number_pane_vc_t

0x37bb,	// (0x000037bb) set_value_pane_vc_ParamLimits

0x37bb,	// (0x000037bb) set_value_pane_vc

0x507d,	// (0x0000507d) list_double2_graphic_pane_vc_ParamLimits

0x507d,	// (0x0000507d) list_double2_graphic_pane_vc

0x508f,	// (0x0000508f) list_double2_large_graphic_pane_vc_ParamLimits

0x508f,	// (0x0000508f) list_double2_large_graphic_pane_vc

0x507d,	// (0x0000507d) list_double2_pane_vc_ParamLimits

0x507d,	// (0x0000507d) list_double2_pane_vc

0x507d,	// (0x0000507d) list_double_graphic_heading_pane_vc_ParamLimits

0x507d,	// (0x0000507d) list_double_graphic_heading_pane_vc

0x507d,	// (0x0000507d) list_double_graphic_pane_vc_ParamLimits

0x507d,	// (0x0000507d) list_double_graphic_pane_vc

0x507d,	// (0x0000507d) list_double_heading_pane_vc_ParamLimits

0x507d,	// (0x0000507d) list_double_heading_pane_vc

0x508f,	// (0x0000508f) list_double_large_graphic_pane_vc_ParamLimits

0x508f,	// (0x0000508f) list_double_large_graphic_pane_vc

0x507d,	// (0x0000507d) list_double_number_pane_vc_ParamLimits

0x507d,	// (0x0000507d) list_double_number_pane_vc

0x507d,	// (0x0000507d) list_double_pane_vc_ParamLimits

0x507d,	// (0x0000507d) list_double_pane_vc

0x507d,	// (0x0000507d) list_double_time_pane_vc_ParamLimits

0x507d,	// (0x0000507d) list_double_time_pane_vc

0x507d,	// (0x0000507d) list_setting_number_pane_vc_ParamLimits

0x507d,	// (0x0000507d) list_setting_number_pane_vc

0x507d,	// (0x0000507d) list_setting_pane_vc_ParamLimits

0x507d,	// (0x0000507d) list_setting_pane_vc

0x507d,	// (0x0000507d) list_single_graphic_heading_pane_vc_ParamLimits

0x507d,	// (0x0000507d) list_single_graphic_heading_pane_vc

0x507d,	// (0x0000507d) list_single_heading_pane_vc_ParamLimits

0x507d,	// (0x0000507d) list_single_heading_pane_vc

0x507d,	// (0x0000507d) list_single_number_heading_pane_vc_ParamLimits

0x507d,	// (0x0000507d) list_single_number_heading_pane_vc

0x570c,	// (0x0000570c) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x570c,	// (0x0000570c) list_double_graphic_heading_pane_vc_g1

0x3514,	// (0x00003514) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3514,	// (0x00003514) list_double_graphic_heading_pane_vc_g2

0x3520,	// (0x00003520) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3520,	// (0x00003520) list_double_graphic_heading_pane_vc_g3

0x0002,

0xacc3,	// (0x0000acc3) list_double_graphic_heading_pane_vc_g_ParamLimits

0xacc3,	// (0x0000acc3) list_double_graphic_heading_pane_vc_g

0x5718,	// (0x00005718) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5718,	// (0x00005718) list_double_graphic_heading_pane_vc_t1

0x370d,	// (0x0000370d) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x370d,	// (0x0000370d) list_double_graphic_heading_pane_vc_t2

0x0001,

0xacca,	// (0x0000acca) list_double_graphic_heading_pane_vc_t_ParamLimits

0xacca,	// (0x0000acca) list_double_graphic_heading_pane_vc_t

0x374d,	// (0x0000374d) list_setting_pane_vc_g1_ParamLimits

0x374d,	// (0x0000374d) list_setting_pane_vc_g1

0x3759,	// (0x00003759) list_setting_pane_vc_g2_ParamLimits

0x3759,	// (0x00003759) list_setting_pane_vc_g2

0x0001,

0xaac0,	// (0x0000aac0) list_setting_pane_vc_g_ParamLimits

0xaac0,	// (0x0000aac0) list_setting_pane_vc_g

0x5930,	// (0x00005930) list_setting_pane_vc_t1_ParamLimits

0x5930,	// (0x00005930) list_setting_pane_vc_t1

0x5944,	// (0x00005944) list_setting_pane_vc_t2_ParamLimits

0x5944,	// (0x00005944) list_setting_pane_vc_t2

0x0001,

0xacf8,	// (0x0000acf8) list_setting_pane_vc_t_ParamLimits

0xacf8,	// (0x0000acf8) list_setting_pane_vc_t

0x37bb,	// (0x000037bb) set_value_pane_cp_vc_ParamLimits

0x37bb,	// (0x000037bb) set_value_pane_cp_vc

0x3514,	// (0x00003514) list_single_number_heading_pane_vc_g1_ParamLimits

0x3514,	// (0x00003514) list_single_number_heading_pane_vc_g1

0x3520,	// (0x00003520) list_single_number_heading_pane_vc_g2_ParamLimits

0x3520,	// (0x00003520) list_single_number_heading_pane_vc_g2

0x0001,

0xaab6,	// (0x0000aab6) list_single_number_heading_pane_vc_g_ParamLimits

0xaab6,	// (0x0000aab6) list_single_number_heading_pane_vc_g

0x370d,	// (0x0000370d) list_single_number_heading_pane_vc_t1_ParamLimits

0x370d,	// (0x0000370d) list_single_number_heading_pane_vc_t1

0x5966,	// (0x00005966) list_single_number_heading_pane_vc_t2_ParamLimits

0x5966,	// (0x00005966) list_single_number_heading_pane_vc_t2

0x597a,	// (0x0000597a) list_single_number_heading_pane_vc_t3_ParamLimits

0x597a,	// (0x0000597a) list_single_number_heading_pane_vc_t3

0x0002,

0xacfd,	// (0x0000acfd) list_single_number_heading_pane_vc_t_ParamLimits

0xacfd,	// (0x0000acfd) list_single_number_heading_pane_vc_t

0x3508,	// (0x00003508) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3508,	// (0x00003508) list_single_graphic_heading_pane_vc_g1

0x3514,	// (0x00003514) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3514,	// (0x00003514) list_single_graphic_heading_pane_vc_g4

0x3520,	// (0x00003520) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3520,	// (0x00003520) list_single_graphic_heading_pane_vc_g5

0x0002,

0xaa8e,	// (0x0000aa8e) list_single_graphic_heading_pane_vc_g_ParamLimits

0xaa8e,	// (0x0000aa8e) list_single_graphic_heading_pane_vc_g

0x370d,	// (0x0000370d) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x370d,	// (0x0000370d) list_single_graphic_heading_pane_vc_t1

0x598c,	// (0x0000598c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x598c,	// (0x0000598c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xad04,	// (0x0000ad04) list_single_graphic_heading_pane_vc_t_ParamLimits

0xad04,	// (0x0000ad04) list_single_graphic_heading_pane_vc_t

0x3514,	// (0x00003514) list_double2_pane_vc_g1_ParamLimits

0x3514,	// (0x00003514) list_double2_pane_vc_g1

0x3520,	// (0x00003520) list_double2_pane_vc_g2_ParamLimits

0x3520,	// (0x00003520) list_double2_pane_vc_g2

0x0001,

0xaab6,	// (0x0000aab6) list_double2_pane_vc_g_ParamLimits

0xaab6,	// (0x0000aab6) list_double2_pane_vc_g

0x59a0,	// (0x000059a0) list_double2_pane_vc_t1_ParamLimits

0x59a0,	// (0x000059a0) list_double2_pane_vc_t1

0x59b6,	// (0x000059b6) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x59b6,	// (0x000059b6) list_double2_large_graphic_pane_vc_g1

0x59c2,	// (0x000059c2) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x59c2,	// (0x000059c2) list_double2_large_graphic_pane_vc_g2

0x59ce,	// (0x000059ce) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x59ce,	// (0x000059ce) list_double2_large_graphic_pane_vc_g3

0x0002,

0xad09,	// (0x0000ad09) list_double2_large_graphic_pane_vc_g_ParamLimits

0xad09,	// (0x0000ad09) list_double2_large_graphic_pane_vc_g

0x59da,	// (0x000059da) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x59da,	// (0x000059da) list_double2_large_graphic_pane_vc_t1

0x59f0,	// (0x000059f0) list_double_time_pane_vc_g1_ParamLimits

0x59f0,	// (0x000059f0) list_double_time_pane_vc_g1

0x59fc,	// (0x000059fc) list_double_time_pane_vc_g2_ParamLimits

0x59fc,	// (0x000059fc) list_double_time_pane_vc_g2

0x0001,

0xad10,	// (0x0000ad10) list_double_time_pane_vc_g_ParamLimits

0xad10,	// (0x0000ad10) list_double_time_pane_vc_g

0x5a08,	// (0x00005a08) list_double_time_pane_vc_t1_ParamLimits

0x5a08,	// (0x00005a08) list_double_time_pane_vc_t1

0x5a21,	// (0x00005a21) list_double_time_pane_vc_t2_ParamLimits

0x5a21,	// (0x00005a21) list_double_time_pane_vc_t2

0x5a3c,	// (0x00005a3c) list_double_time_pane_vc_t3_ParamLimits

0x5a3c,	// (0x00005a3c) list_double_time_pane_vc_t3

0x5a54,	// (0x00005a54) list_double_time_pane_vc_t4_ParamLimits

0x5a54,	// (0x00005a54) list_double_time_pane_vc_t4

0x0003,

0xad15,	// (0x0000ad15) list_double_time_pane_vc_t_ParamLimits

0xad15,	// (0x0000ad15) list_double_time_pane_vc_t

0x3514,	// (0x00003514) list_double_pane_vc_g1_ParamLimits

0x3514,	// (0x00003514) list_double_pane_vc_g1

0x3520,	// (0x00003520) list_double_pane_vc_g2_ParamLimits

0x3520,	// (0x00003520) list_double_pane_vc_g2

0x0001,

0xaab6,	// (0x0000aab6) list_double_pane_vc_g_ParamLimits

0xaab6,	// (0x0000aab6) list_double_pane_vc_g

0x5a68,	// (0x00005a68) list_double_pane_vc_t1_ParamLimits

0x5a68,	// (0x00005a68) list_double_pane_vc_t1

0x5a7a,	// (0x00005a7a) list_double_pane_vc_t2_ParamLimits

0x5a7a,	// (0x00005a7a) list_double_pane_vc_t2

0x0001,

0xad1e,	// (0x0000ad1e) list_double_pane_vc_t_ParamLimits

0xad1e,	// (0x0000ad1e) list_double_pane_vc_t

0x3514,	// (0x00003514) list_double_number_pane_vc_g1_ParamLimits

0x3514,	// (0x00003514) list_double_number_pane_vc_g1

0x3520,	// (0x00003520) list_double_number_pane_vc_g2_ParamLimits

0x3520,	// (0x00003520) list_double_number_pane_vc_g2

0x0001,

0xaab6,	// (0x0000aab6) list_double_number_pane_vc_g_ParamLimits

0xaab6,	// (0x0000aab6) list_double_number_pane_vc_g

0x5a92,	// (0x00005a92) list_double_number_pane_vc_t1_ParamLimits

0x5a92,	// (0x00005a92) list_double_number_pane_vc_t1

0x5aa6,	// (0x00005aa6) list_double_number_pane_vc_t2_ParamLimits

0x5aa6,	// (0x00005aa6) list_double_number_pane_vc_t2

0x5a7a,	// (0x00005a7a) list_double_number_pane_vc_t3_ParamLimits

0x5a7a,	// (0x00005a7a) list_double_number_pane_vc_t3

0x0002,

0xad23,	// (0x0000ad23) list_double_number_pane_vc_t_ParamLimits

0xad23,	// (0x0000ad23) list_double_number_pane_vc_t

0x5ab8,	// (0x00005ab8) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5ab8,	// (0x00005ab8) list_double_large_graphic_pane_vc_g1

0x5ac4,	// (0x00005ac4) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5ac4,	// (0x00005ac4) list_double_large_graphic_pane_vc_g2

0x59ce,	// (0x000059ce) list_double_large_graphic_pane_vc_g3_ParamLimits

0x59ce,	// (0x000059ce) list_double_large_graphic_pane_vc_g3

0x5ad3,	// (0x00005ad3) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5ad3,	// (0x00005ad3) list_double_large_graphic_pane_vc_g4

0x0003,

0xad2a,	// (0x0000ad2a) list_double_large_graphic_pane_vc_g_ParamLimits

0xad2a,	// (0x0000ad2a) list_double_large_graphic_pane_vc_g

0x5adf,	// (0x00005adf) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5adf,	// (0x00005adf) list_double_large_graphic_pane_vc_t1

0x5af1,	// (0x00005af1) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5af1,	// (0x00005af1) list_double_large_graphic_pane_vc_t2

0x0001,

0xad33,	// (0x0000ad33) list_double_large_graphic_pane_vc_t_ParamLimits

0xad33,	// (0x0000ad33) list_double_large_graphic_pane_vc_t

0x3514,	// (0x00003514) list_double_heading_pane_vc_g1_ParamLimits

0x3514,	// (0x00003514) list_double_heading_pane_vc_g1

0x3520,	// (0x00003520) list_double_heading_pane_vc_g2_ParamLimits

0x3520,	// (0x00003520) list_double_heading_pane_vc_g2

0x0001,

0xaab6,	// (0x0000aab6) list_double_heading_pane_vc_g_ParamLimits

0xaab6,	// (0x0000aab6) list_double_heading_pane_vc_g

0x5b0a,	// (0x00005b0a) list_double_heading_pane_vc_t1_ParamLimits

0x5b0a,	// (0x00005b0a) list_double_heading_pane_vc_t1

0x370d,	// (0x0000370d) list_double_heading_pane_vc_t2_ParamLimits

0x370d,	// (0x0000370d) list_double_heading_pane_vc_t2

0x0001,

0xad38,	// (0x0000ad38) list_double_heading_pane_vc_t_ParamLimits

0xad38,	// (0x0000ad38) list_double_heading_pane_vc_t

0x3508,	// (0x00003508) list_double_graphic_pane_vc_g1_ParamLimits

0x3508,	// (0x00003508) list_double_graphic_pane_vc_g1

0x5b1e,	// (0x00005b1e) list_double_graphic_pane_vc_g2_ParamLimits

0x5b1e,	// (0x00005b1e) list_double_graphic_pane_vc_g2

0x5b2d,	// (0x00005b2d) list_double_graphic_pane_vc_g3_ParamLimits

0x5b2d,	// (0x00005b2d) list_double_graphic_pane_vc_g3

0x0002,

0xad3d,	// (0x0000ad3d) list_double_graphic_pane_vc_g_ParamLimits

0xad3d,	// (0x0000ad3d) list_double_graphic_pane_vc_g

0x5b39,	// (0x00005b39) list_double_graphic_pane_vc_t1_ParamLimits

0x5b39,	// (0x00005b39) list_double_graphic_pane_vc_t1

0x5a7a,	// (0x00005a7a) list_double_graphic_pane_vc_t2_ParamLimits

0x5a7a,	// (0x00005a7a) list_double_graphic_pane_vc_t2

0x0001,

0xad44,	// (0x0000ad44) list_double_graphic_pane_vc_t_ParamLimits

0xad44,	// (0x0000ad44) list_double_graphic_pane_vc_t

0x0050,	// (0x00000050) aid_size_cell_fastswap

0xb1e4,	// (0x0000b1e4) aid_size_cell_touch_ParamLimits

0xb1e4,	// (0x0000b1e4) aid_size_cell_touch

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window_ParamLimits

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window

0xb32f,	// (0x0000b32f) touch_pane_ParamLimits

0xb32f,	// (0x0000b32f) touch_pane

0x128f,	// (0x0000128f) button_value_adjust_pane_cp2

0x1297,	// (0x00001297) button_value_adjust_pane_cp4

0x12b9,	// (0x000012b9) form_field_data_pane_cp2

0xbb45,	// (0x0000bb45) form_field_data_wide_pane_cp2

0x1b0a,	// (0x00001b0a) bg_scroll_pane_ParamLimits

0x1b29,	// (0x00001b29) scroll_handle_pane_ParamLimits

0x1b3d,	// (0x00001b3d) scroll_sc2_down_pane_ParamLimits

0x1b3d,	// (0x00001b3d) scroll_sc2_down_pane

0x1b64,	// (0x00001b64) scroll_sc2_up_pane_ParamLimits

0x1b64,	// (0x00001b64) scroll_sc2_up_pane

0xd494,	// (0x0000d494) grid_wheel_folder_pane_g1_ParamLimits

0xd494,	// (0x0000d494) grid_wheel_folder_pane_g1

0x21f7,	// (0x000021f7) clock_nsta_pane_cp2_ParamLimits

0x21f7,	// (0x000021f7) clock_nsta_pane_cp2

0xbf6f,	// (0x0000bf6f) listscroll_midp_pane_ParamLimits

0xbf80,	// (0x0000bf80) midp_canvas_pane

0x2aa0,	// (0x00002aa0) nsta_clock_indic_pane

0x2afe,	// (0x00002afe) listscroll_form_pane_vc

0x2b1a,	// (0x00002b1a) listscroll_set_pane_vc_ParamLimits

0x2b1a,	// (0x00002b1a) listscroll_set_pane_vc

0xc94d,	// (0x0000c94d) clock_nsta_pane

0xc977,	// (0x0000c977) indicator_nsta_pane

0x3574,	// (0x00003574) bg_popup_sub_pane_cp2_ParamLimits

0x3588,	// (0x00003588) find_pane_cp2_ParamLimits

0x3588,	// (0x00003588) find_pane_cp2

0x359e,	// (0x0000359e) grid_toobar_pane_ParamLimits

0x37c9,	// (0x000037c9) list_form_gen_pane_vc_ParamLimits

0x37c9,	// (0x000037c9) list_form_gen_pane_vc

0x37df,	// (0x000037df) scroll_pane_cp8_vc_ParamLimits

0x37df,	// (0x000037df) scroll_pane_cp8_vc

0x38f8,	// (0x000038f8) data_form_wide_pane_vc_ParamLimits

0x38f8,	// (0x000038f8) data_form_wide_pane_vc

0x3904,	// (0x00003904) form_field_data_wide_pane_vc_g1

0x390c,	// (0x0000390c) form_field_data_wide_pane_vc_t1_ParamLimits

0x390c,	// (0x0000390c) form_field_data_wide_pane_vc_t1

0x1375,	// (0x00001375) input_focus_pane_cp6_vc_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_cp6_vc

0xcd77,	// (0x0000cd77) list_midp_pane_ParamLimits

0x52b3,	// (0x000052b3) scroll_pane_cp16_ParamLimits

0x52b3,	// (0x000052b3) scroll_pane_cp16

0x3ca8,	// (0x00003ca8) button_value_adjust_pane_ParamLimits

0x3ca8,	// (0x00003ca8) button_value_adjust_pane

0xd0a8,	// (0x0000d0a8) button_value_adjust_pane_cp6_ParamLimits

0xd0a8,	// (0x0000d0a8) button_value_adjust_pane_cp6

0xd1c2,	// (0x0000d1c2) settings_code_pane_cp_ParamLimits

0xd1c2,	// (0x0000d1c2) settings_code_pane_cp

0x002e,	// (0x0000002e) cell_touch_pane_g1

0x002e,	// (0x0000002e) cell_touch_pane_g2

0x0001,

0xa9e5,	// (0x0000a9e5) cell_touch_pane_g

0xd377,	// (0x0000d377) cell_touch_pane_cp_ParamLimits

0xd377,	// (0x0000d377) cell_touch_pane_cp

0xd393,	// (0x0000d393) cell_touch_pane_ParamLimits

0xd393,	// (0x0000d393) cell_touch_pane

0x002e,	// (0x0000002e) scroll_sc2_down_pane_g1

0x002e,	// (0x0000002e) scroll_sc2_up_pane_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_vc

0x572c,	// (0x0000572c) list_set_graphic_pane_vc_g1_ParamLimits

0x572c,	// (0x0000572c) list_set_graphic_pane_vc_g1

0x5738,	// (0x00005738) list_set_graphic_pane_vc_g2_ParamLimits

0x5738,	// (0x00005738) list_set_graphic_pane_vc_g2

0x0001,

0xaccf,	// (0x0000accf) list_set_graphic_pane_vc_g_ParamLimits

0xaccf,	// (0x0000accf) list_set_graphic_pane_vc_g

0x5744,	// (0x00005744) text_primary_small_cp13_vc_ParamLimits

0x5744,	// (0x00005744) text_primary_small_cp13_vc

0x575c,	// (0x0000575c) list_set_graphic_pane_vc_ParamLimits

0x575c,	// (0x0000575c) list_set_graphic_pane_vc

0x0293,	// (0x00000293) input_focus_pane_cp2_vc

0x002e,	// (0x0000002e) setting_code_pane_vc_g1

0x5770,	// (0x00005770) setting_code_pane_vc_t1

0x577e,	// (0x0000577e) set_text_pane_vc_t1_ParamLimits

0x577e,	// (0x0000577e) set_text_pane_vc_t1

0x0293,	// (0x00000293) input_focus_pane_cp1_vc

0x5799,	// (0x00005799) list_set_text_pane_vc

0x002e,	// (0x0000002e) setting_text_pane_vc_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_vc

0x57a3,	// (0x000057a3) setting_slider_graphic_pane_vc_g1

0x57ab,	// (0x000057ab) setting_slider_graphic_pane_vc_t1

0x57b9,	// (0x000057b9) setting_slider_graphic_pane_vc_t2

0x0001,

0xacd4,	// (0x0000acd4) setting_slider_graphic_pane_vc_t

0x57c7,	// (0x000057c7) slider_set_pane_cp_vc

0x57cf,	// (0x000057cf) slider_set_pane_vc_g1

0x57d8,	// (0x000057d8) slider_set_pane_vc_g2

0x0006,

0xacd9,	// (0x0000acd9) slider_set_pane_vc_g

0x14ad,	// (0x000014ad) set_opt_bg_pane_g1_copy1

0x14b5,	// (0x000014b5) set_opt_bg_pane_g2_copy1

0x5804,	// (0x00005804) set_opt_bg_pane_g3_copy1

0x14c5,	// (0x000014c5) set_opt_bg_pane_g4_copy1

0x14cd,	// (0x000014cd) set_opt_bg_pane_g5_copy1

0x14d5,	// (0x000014d5) set_opt_bg_pane_g6_copy1

0x580e,	// (0x0000580e) set_opt_bg_pane_g7_copy1

0x5816,	// (0x00005816) set_opt_bg_pane_g8_copy1

0x5820,	// (0x00005820) set_opt_bg_pane_g9_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp_vc

0x582a,	// (0x0000582a) setting_slider_pane_vc_t1

0x57ab,	// (0x000057ab) setting_slider_pane_vc_t2

0x57b9,	// (0x000057b9) setting_slider_pane_vc_t3

0x0002,

0xace8,	// (0x0000ace8) setting_slider_pane_vc_t

0x57c7,	// (0x000057c7) slider_set_pane_vc

0x44e9,	// (0x000044e9) volume_set_pane_vc_g1

0x44f2,	// (0x000044f2) volume_set_pane_vc_g2

0x44fb,	// (0x000044fb) volume_set_pane_vc_g3

0x4504,	// (0x00004504) volume_set_pane_vc_g4

0x450d,	// (0x0000450d) volume_set_pane_vc_g5

0x4516,	// (0x00004516) volume_set_pane_vc_g6

0x451f,	// (0x0000451f) volume_set_pane_vc_g7

0x4528,	// (0x00004528) volume_set_pane_vc_g8

0x4531,	// (0x00004531) volume_set_pane_vc_g9

0x453a,	// (0x0000453a) volume_set_pane_vc_g10

0x0009,

0xab86,	// (0x0000ab86) volume_set_pane_vc_g

0x5839,	// (0x00005839) volume_set_pane_vc

0x5841,	// (0x00005841) button_value_adjust_pane_cp1_vc

0x584b,	// (0x0000584b) list_highlight_pane_cp2_vc

0x5854,	// (0x00005854) list_set_pane_vc_ParamLimits

0x5854,	// (0x00005854) list_set_pane_vc

0x58be,	// (0x000058be) main_pane_set_vc_t1_ParamLimits

0x58be,	// (0x000058be) main_pane_set_vc_t1

0x58d3,	// (0x000058d3) main_pane_set_vc_t2_ParamLimits

0x58d3,	// (0x000058d3) main_pane_set_vc_t2

0x58e5,	// (0x000058e5) main_pane_set_vc_t3_ParamLimits

0x58e5,	// (0x000058e5) main_pane_set_vc_t3

0x58f9,	// (0x000058f9) main_pane_set_vc_t4_ParamLimits

0x58f9,	// (0x000058f9) main_pane_set_vc_t4

0x0003,

0xacef,	// (0x0000acef) main_pane_set_vc_t_ParamLimits

0xacef,	// (0x0000acef) main_pane_set_vc_t

0x590d,	// (0x0000590d) setting_code_pane_vc_ParamLimits

0x590d,	// (0x0000590d) setting_code_pane_vc

0x591e,	// (0x0000591e) setting_slider_graphic_pane_vc

0x591e,	// (0x0000591e) setting_slider_pane_vc

0x591e,	// (0x0000591e) setting_text_pane_vc

0x591e,	// (0x0000591e) setting_volume_pane_vc

0x5928,	// (0x00005928) scroll_pane_cp121_vc

0x127d,	// (0x0000127d) set_content_pane_vc

0x5b4b,	// (0x00005b4b) button_value_adjust_pane_g1

0x5b54,	// (0x00005b54) button_value_adjust_pane_g2

0x0001,

0xad49,	// (0x0000ad49) button_value_adjust_pane_g

0x5b5d,	// (0x00005b5d) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5b5d,	// (0x00005b5d) form_field_slider_wide_pane_vc_t1

0x5b71,	// (0x00005b71) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5b71,	// (0x00005b71) form_field_slider_wide_pane_vc_t2

0x0001,

0xad4e,	// (0x0000ad4e) form_field_slider_wide_pane_vc_t_ParamLimits

0xad4e,	// (0x0000ad4e) form_field_slider_wide_pane_vc_t

0x0823,	// (0x00000823) input_focus_pane_cp10_vc_ParamLimits

0x0823,	// (0x00000823) input_focus_pane_cp10_vc

0x5b83,	// (0x00005b83) slider_cont_pane_cp1_vc_ParamLimits

0x5b83,	// (0x00005b83) slider_cont_pane_cp1_vc

0x57cf,	// (0x000057cf) slider_form_pane_g1_cp2

0x57d8,	// (0x000057d8) slider_form_pane_g2_cp2

0x5b9c,	// (0x00005b9c) form_field_slider_pane_vc_t3

0x5baa,	// (0x00005baa) form_field_slider_pane_vc_t4

0x5bb8,	// (0x00005bb8) slider_form_pane_vc_ParamLimits

0x5bb8,	// (0x00005bb8) slider_form_pane_vc

0x5bc5,	// (0x00005bc5) form_field_slider_pane_vc_t1_ParamLimits

0x5bc5,	// (0x00005bc5) form_field_slider_pane_vc_t1

0x5b71,	// (0x00005b71) form_field_slider_pane_vc_t2_ParamLimits

0x5b71,	// (0x00005b71) form_field_slider_pane_vc_t2

0x0001,

0xad5e,	// (0x0000ad5e) form_field_slider_pane_vc_t_ParamLimits

0xad5e,	// (0x0000ad5e) form_field_slider_pane_vc_t

0x0823,	// (0x00000823) input_focus_pane_cp9_vc_ParamLimits

0x0823,	// (0x00000823) input_focus_pane_cp9_vc

0x5be1,	// (0x00005be1) slider_cont_pane_vc_ParamLimits

0x5be1,	// (0x00005be1) slider_cont_pane_vc

0x5bf3,	// (0x00005bf3) list_form_graphic_pane_cp_vc_ParamLimits

0x5bf3,	// (0x00005bf3) list_form_graphic_pane_cp_vc

0x3904,	// (0x00003904) form_field_popup_wide_pane_vc_g1

0x5c08,	// (0x00005c08) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5c08,	// (0x00005c08) form_field_popup_wide_pane_vc_t1

0x1375,	// (0x00001375) input_focus_pane_cp8_vc_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_cp8_vc

0x5c1f,	// (0x00005c1f) list_form_wide_pane_vc_ParamLimits

0x5c1f,	// (0x00005c1f) list_form_wide_pane_vc

0x5c2b,	// (0x00005c2b) list_form_graphic_pane_vc_g1

0x5c33,	// (0x00005c33) list_form_graphic_pane_vc_t1_ParamLimits

0x5c33,	// (0x00005c33) list_form_graphic_pane_vc_t1

0x04fd,	// (0x000004fd) list_highlight_pane_cp5_vc_ParamLimits

0x04fd,	// (0x000004fd) list_highlight_pane_cp5_vc

0x5c4f,	// (0x00005c4f) list_form_graphic_pane_vc_ParamLimits

0x5c4f,	// (0x00005c4f) list_form_graphic_pane_vc

0x3904,	// (0x00003904) form_field_popup_pane_vc_g1

0x5c65,	// (0x00005c65) form_field_popup_pane_vc_t1_ParamLimits

0x5c65,	// (0x00005c65) form_field_popup_pane_vc_t1

0x1375,	// (0x00001375) input_focus_pane_cp7_vc_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_cp7_vc

0x5c7c,	// (0x00005c7c) list_form_pane_vc_ParamLimits

0x5c7c,	// (0x00005c7c) list_form_pane_vc

0x5c88,	// (0x00005c88) data_form_pane_vc_t1_ParamLimits

0x5c88,	// (0x00005c88) data_form_pane_vc_t1

0x14ad,	// (0x000014ad) input_focus_pane_vc_g1

0x14b5,	// (0x000014b5) input_focus_pane_vc_g2

0x14bd,	// (0x000014bd) input_focus_pane_vc_g3

0x14c5,	// (0x000014c5) input_focus_pane_vc_g4

0x14cd,	// (0x000014cd) input_focus_pane_vc_g5

0x14d5,	// (0x000014d5) input_focus_pane_vc_g6

0x14dd,	// (0x000014dd) input_focus_pane_vc_g7

0x14e5,	// (0x000014e5) input_focus_pane_vc_g8

0x14ed,	// (0x000014ed) input_focus_pane_vc_g9

0x002e,	// (0x0000002e) input_focus_pane_vc_g10

0x0009,

0xa96e,	// (0x0000a96e) input_focus_pane_vc_g

0x38f8,	// (0x000038f8) data_form_pane_vc_ParamLimits

0x38f8,	// (0x000038f8) data_form_pane_vc

0x3904,	// (0x00003904) form_field_data_pane_vc_g1

0x5ca3,	// (0x00005ca3) form_field_data_pane_vc_t1_ParamLimits

0x5ca3,	// (0x00005ca3) form_field_data_pane_vc_t1

0x1375,	// (0x00001375) input_focus_pane_vc_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_vc

0x5cbd,	// (0x00005cbd) button_value_adjust_pane_cp3_vc

0x5cc5,	// (0x00005cc5) button_value_adjust_pane_cp5_vc

0x5ccd,	// (0x00005ccd) form_field_data_pane_vc_ParamLimits

0x5ccd,	// (0x00005ccd) form_field_data_pane_vc

0x5ce4,	// (0x00005ce4) form_field_data_pane_vc_cp2

0x5cec,	// (0x00005cec) form_field_data_wide_pane_vc_ParamLimits

0x5cec,	// (0x00005cec) form_field_data_wide_pane_vc

0x5d02,	// (0x00005d02) form_field_data_wide_pane_vc_cp2

0x5d0a,	// (0x00005d0a) form_field_popup_pane_vc_ParamLimits

0x5d0a,	// (0x00005d0a) form_field_popup_pane_vc

0x5d21,	// (0x00005d21) form_field_popup_wide_pane_vc_ParamLimits

0x5d21,	// (0x00005d21) form_field_popup_wide_pane_vc

0x5d37,	// (0x00005d37) form_field_slider_pane_vc_ParamLimits

0x5d37,	// (0x00005d37) form_field_slider_pane_vc

0x5d4a,	// (0x00005d4a) form_field_slider_wide_pane_vc_ParamLimits

0x5d4a,	// (0x00005d4a) form_field_slider_wide_pane_vc

0xd3b1,	// (0x0000d3b1) grid_touch_1_pane_ParamLimits

0xd3b1,	// (0x0000d3b1) grid_touch_1_pane

0xd3c5,	// (0x0000d3c5) grid_touch_2_pane_ParamLimits

0xd3c5,	// (0x0000d3c5) grid_touch_2_pane

0x5e1f,	// (0x00005e1f) touch_pane_g1_ParamLimits

0x5e1f,	// (0x00005e1f) touch_pane_g1

0x5d81,	// (0x00005d81) cell_app_pane_cp_wide_ParamLimits

0x5d81,	// (0x00005d81) cell_app_pane_cp_wide

0x5d92,	// (0x00005d92) grid_popup_fast_wide_pane_ParamLimits

0x5d92,	// (0x00005d92) grid_popup_fast_wide_pane

0x5da6,	// (0x00005da6) scroll_pane_cp19_ParamLimits

0x5da6,	// (0x00005da6) scroll_pane_cp19

0x0293,	// (0x00000293) bg_popup_window_pane_cp20

0x5dba,	// (0x00005dba) listscroll_popup_fast_wide_pane

0x16bf,	// (0x000016bf) grid_indicator_nsta_pane

0x5dc2,	// (0x00005dc2) clock_nsta_pane_g1

0x5dcb,	// (0x00005dcb) clock_nsta_pane_t1

0xd3ef,	// (0x0000d3ef) cell_indicator_nsta_pane_ParamLimits

0xd3ef,	// (0x0000d3ef) cell_indicator_nsta_pane

0x5e1f,	// (0x00005e1f) cell_indicator_nsta_pane_g1

0xd408,	// (0x0000d408) cell_indicator_nsta_pane_g2

0x0001,

0xf458,	// (0x0000f458) cell_indicator_nsta_pane_g

0x5e43,	// (0x00005e43) clock_nsta_pane_cp

0x5e4b,	// (0x00005e4b) indicator_nsta_pane_cp

0x5e54,	// (0x00005e54) nsta_clock_indic_pane_g1

0x0671,	// (0x00000671) grid_indicator_pane

0x1c59,	// (0x00001c59) scroll_pane_cp29

0x2124,	// (0x00002124) indicator_nsta_pane_cp2_ParamLimits

0x2124,	// (0x00002124) indicator_nsta_pane_cp2

0x04fd,	// (0x000004fd) main_apps_wheel_pane

0x3b2f,	// (0x00003b2f) form_midp_field_text_pane_ParamLimits

0x3c7a,	// (0x00003c7a) scroll_bar_cp050_ParamLimits

0x5ebd,	// (0x00005ebd) cell_indicator_pane_ParamLimits

0x5ebd,	// (0x00005ebd) cell_indicator_pane

0x5ed4,	// (0x00005ed4) cell_indicator_pane_g1

0xd41e,	// (0x0000d41e) grid_wheel_folder_pane_ParamLimits

0xd41e,	// (0x0000d41e) grid_wheel_folder_pane

0xd42c,	// (0x0000d42c) list_wheel_apps_pane_ParamLimits

0xd42c,	// (0x0000d42c) list_wheel_apps_pane

0xd43a,	// (0x0000d43a) main_apps_wheel_pane_g1_ParamLimits

0xd43a,	// (0x0000d43a) main_apps_wheel_pane_g1

0xd446,	// (0x0000d446) main_apps_wheel_pane_g2_ParamLimits

0xd446,	// (0x0000d446) main_apps_wheel_pane_g2

0x0001,

0xf45d,	// (0x0000f45d) main_apps_wheel_pane_g_ParamLimits

0xf45d,	// (0x0000f45d) main_apps_wheel_pane_g

0xd454,	// (0x0000d454) main_apps_wheel_pane_t1_ParamLimits

0xd454,	// (0x0000d454) main_apps_wheel_pane_t1

0xd468,	// (0x0000d468) list_wheel_apps_pane_g1

0xd470,	// (0x0000d470) list_wheel_apps_pane_g2

0xd478,	// (0x0000d478) list_wheel_apps_pane_g3

0xd480,	// (0x0000d480) list_wheel_apps_pane_g4

0xd48a,	// (0x0000d48a) list_wheel_apps_pane_g5

0x0004,

0xf462,	// (0x0000f462) list_wheel_apps_pane_g

0x2424,	// (0x00002424) navi_icon_text_pane

0xc848,	// (0x0000c848) aid_fill_nsta

0xd4a1,	// (0x0000d4a1) navi_icon_text_pane_g1

0xd4ad,	// (0x0000d4ad) navi_icon_text_pane_t1

0xbf57,	// (0x0000bf57) list_set_graphic_pane_t1_ParamLimits

0xbf57,	// (0x0000bf57) list_set_graphic_pane_t1

0x43c9,	// (0x000043c9) popup_midp_note_alarm_window_t6_ParamLimits

0x43c9,	// (0x000043c9) popup_midp_note_alarm_window_t6

0x43db,	// (0x000043db) popup_midp_note_alarm_window_t7_ParamLimits

0x43db,	// (0x000043db) popup_midp_note_alarm_window_t7

0x43ed,	// (0x000043ed) popup_midp_note_alarm_window_t8_ParamLimits

0x43ed,	// (0x000043ed) popup_midp_note_alarm_window_t8

0x43ff,	// (0x000043ff) popup_midp_note_alarm_window_t9_ParamLimits

0x43ff,	// (0x000043ff) popup_midp_note_alarm_window_t9

0x4411,	// (0x00004411) popup_midp_note_alarm_window_t10_ParamLimits

0x4411,	// (0x00004411) popup_midp_note_alarm_window_t10

0x4423,	// (0x00004423) popup_midp_note_alarm_window_t11_ParamLimits

0x4423,	// (0x00004423) popup_midp_note_alarm_window_t11

0x4435,	// (0x00004435) scroll_pane_cp17_ParamLimits

0x4435,	// (0x00004435) scroll_pane_cp17

0x44e9,	// (0x000044e9) volume_small_pane_cp_g1

0x5fbb,	// (0x00005fbb) volume_small_pane_cp_g2

0x5fc4,	// (0x00005fc4) volume_small_pane_cp_g3

0x5fcd,	// (0x00005fcd) volume_small_pane_cp_g4

0x5fd6,	// (0x00005fd6) volume_small_pane_cp_g5

0x5fdf,	// (0x00005fdf) volume_small_pane_cp_g6

0x5fe8,	// (0x00005fe8) volume_small_pane_cp_g7

0x5ff1,	// (0x00005ff1) volume_small_pane_cp_g8

0x5ffa,	// (0x00005ffa) volume_small_pane_cp_g9

0x6003,	// (0x00006003) volume_small_pane_cp_g10

0x267f,	// (0x0000267f) midp_ticker_pane_g1_ParamLimits

0x268b,	// (0x0000268b) midp_ticker_pane_g2_ParamLimits

0xaa36,	// (0x0000aa36) midp_ticker_pane_g_ParamLimits

0xc017,	// (0x0000c017) midp_ticker_pane_t1_ParamLimits

0xc868,	// (0x0000c868) aid_fill_nsta_2

0x3c66,	// (0x00003c66) list_form2_midp_pane

0x5031,	// (0x00005031) midp_editing_number_pane_ParamLimits

0x5040,	// (0x00005040) midp_ticker_pane_ParamLimits

0x600c,	// (0x0000600c) form2_midp_field_pane

0x6030,	// (0x00006030) scroll_pane_cp51

0x6050,	// (0x00006050) form2_midp_button_pane_ParamLimits

0x6050,	// (0x00006050) form2_midp_button_pane

0x6062,	// (0x00006062) form2_midp_content_pane_ParamLimits

0x6062,	// (0x00006062) form2_midp_content_pane

0x607c,	// (0x0000607c) form2_midp_field_choice_group_pane

0x6084,	// (0x00006084) form2_midp_field_pane_g1

0x608c,	// (0x0000608c) form2_midp_field_pane_g2

0x6094,	// (0x00006094) form2_midp_field_pane_g3

0x609c,	// (0x0000609c) form2_midp_field_pane_g4

0x0003,

0xadae,	// (0x0000adae) form2_midp_field_pane_g

0x60a4,	// (0x000060a4) form2_midp_gauge_slider_pane

0x60ac,	// (0x000060ac) form2_midp_gauge_wait_pane

0x60b4,	// (0x000060b4) form2_midp_image_pane_ParamLimits

0x60b4,	// (0x000060b4) form2_midp_image_pane

0x60cf,	// (0x000060cf) form2_midp_label_pane_ParamLimits

0x60cf,	// (0x000060cf) form2_midp_label_pane

0xd4db,	// (0x0000d4db) form2_midp_label_pane_cp_ParamLimits

0xd4db,	// (0x0000d4db) form2_midp_label_pane_cp

0x6109,	// (0x00006109) form2_midp_string_pane_ParamLimits

0x6109,	// (0x00006109) form2_midp_string_pane

0xd4fc,	// (0x0000d4fc) form2_midp_text_pane_ParamLimits

0xd4fc,	// (0x0000d4fc) form2_midp_text_pane

0x6138,	// (0x00006138) form2_midp_time_pane

0x6148,	// (0x00006148) input_focus_pane_cp51_ParamLimits

0x6148,	// (0x00006148) input_focus_pane_cp51

0x6160,	// (0x00006160) form2_midp_label_pane_t1_ParamLimits

0x6160,	// (0x00006160) form2_midp_label_pane_t1

0xd519,	// (0x0000d519) form2_mdip_text_pane_t1_ParamLimits

0xd519,	// (0x0000d519) form2_mdip_text_pane_t1

0x61c0,	// (0x000061c0) form2_midp_time_pane_t1

0x61db,	// (0x000061db) form2_midp_gauge_slider_pane_t1

0xd535,	// (0x0000d535) form2_midp_gauge_slider_pane_t2

0xd547,	// (0x0000d547) form2_midp_gauge_slider_pane_t3

0x0002,

0xf472,	// (0x0000f472) form2_midp_gauge_slider_pane_t

0x6211,	// (0x00006211) form2_midp_slider_pane

0x621d,	// (0x0000621d) form2_midp_gauge_wait_pane_t1

0x622b,	// (0x0000622b) form2_midp_wait_pane_ParamLimits

0x622b,	// (0x0000622b) form2_midp_wait_pane

0xd559,	// (0x0000d559) list_single_2graphic_pane_cp4_ParamLimits

0xd559,	// (0x0000d559) list_single_2graphic_pane_cp4

0xcceb,	// (0x0000cceb) list_single_midp_graphic_pane_cp_ParamLimits

0xcceb,	// (0x0000cceb) list_single_midp_graphic_pane_cp

0x0293,	// (0x00000293) list_highlight_pane_cp20

0x6285,	// (0x00006285) list_single_2graphic_pane_g1_cp4

0x628d,	// (0x0000628d) list_single_2graphic_pane_g2_cp4

0x6295,	// (0x00006295) list_single_2graphic_pane_t1_cp4

0x04fd,	// (0x000004fd) list_highlight_pane_cp21

0x62a4,	// (0x000062a4) list_single_midp_graphic_pane_g4_cp

0x62b3,	// (0x000062b3) list_single_midp_graphic_pane_t1_cp

0xd56e,	// (0x0000d56e) form2_mdip_string_pane_t1_ParamLimits

0xd56e,	// (0x0000d56e) form2_mdip_string_pane_t1

0x0293,	// (0x00000293) bg_wml_button_pane_cp2

0x002e,	// (0x0000002e) form2_midp_image_pane_g1

0x1057,	// (0x00001057) list_double_large_graphic_pane_g5_ParamLimits

0x1057,	// (0x00001057) list_double_large_graphic_pane_g5

0xbf6f,	// (0x0000bf6f) midp_form_pane_ParamLimits

0x04fd,	// (0x000004fd) main_apps_wheel_pane_ParamLimits

0xc5a4,	// (0x0000c5a4) popup_preview_window_ParamLimits

0xc5a4,	// (0x0000c5a4) popup_preview_window

0x3090,	// (0x00003090) popup_touch_info_window_ParamLimits

0x3090,	// (0x00003090) popup_touch_info_window

0x30ae,	// (0x000030ae) popup_touch_menu_window_ParamLimits

0x30ae,	// (0x000030ae) popup_touch_menu_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp6

0x63c1,	// (0x000063c1) list_touch_menu_pane

0x63c9,	// (0x000063c9) list_single_touch_menu_pane_ParamLimits

0x63c9,	// (0x000063c9) list_single_touch_menu_pane

0x63e0,	// (0x000063e0) list_single_touch_menu_pane_t1

0x04fd,	// (0x000004fd) bg_popup_sub_pane_cp7_ParamLimits

0x04fd,	// (0x000004fd) bg_popup_sub_pane_cp7

0x63ee,	// (0x000063ee) heading_sub_pane

0x63f6,	// (0x000063f6) list_touch_info_pane_ParamLimits

0x63f6,	// (0x000063f6) list_touch_info_pane

0x6405,	// (0x00006405) list_single_touch_info_pane_ParamLimits

0x6405,	// (0x00006405) list_single_touch_info_pane

0x6417,	// (0x00006417) list_single_touch_info_pane_t1

0x6425,	// (0x00006425) list_single_touch_info_pane_t2

0x0001,

0xadc5,	// (0x0000adc5) list_single_touch_info_pane_t

0x25a4,	// (0x000025a4) bg_popup_heading_pane_cp

0x6433,	// (0x00006433) heading_sub_pane_t1

0x380a,	// (0x0000380a) bg_popup_preview_window_pane_cp_ParamLimits

0x380a,	// (0x0000380a) bg_popup_preview_window_pane_cp

0x63ee,	// (0x000063ee) heading_preview_pane

0x63f6,	// (0x000063f6) list_preview_pane_ParamLimits

0x63f6,	// (0x000063f6) list_preview_pane

0x6441,	// (0x00006441) popup_preview_window_g1

0x6405,	// (0x00006405) list_single_preview_pane_ParamLimits

0x6405,	// (0x00006405) list_single_preview_pane

0x6449,	// (0x00006449) list_single_preview_pane_g1

0x6451,	// (0x00006451) list_single_preview_pane_t1

0x6417,	// (0x00006417) list_single_preview_pane_t2

0x0001,

0xadca,	// (0x0000adca) list_single_preview_pane_t

0x645f,	// (0x0000645f) bg_popup_heading_pane_cp2_ParamLimits

0x645f,	// (0x0000645f) bg_popup_heading_pane_cp2

0x6475,	// (0x00006475) heading_preview_pane_g1

0x647d,	// (0x0000647d) heading_preview_pane_t1_ParamLimits

0x647d,	// (0x0000647d) heading_preview_pane_t1

0x0694,	// (0x00000694) soft_indicator_pane_t1_ParamLimits

0x0d87,	// (0x00000d87) scroll_pane_ParamLimits

0x1b52,	// (0x00001b52) scroll_sc2_left_pane

0x1b5b,	// (0x00001b5b) scroll_sc2_right_pane

0x1b7a,	// (0x00001b7a) scroll_bg_pane_g1_ParamLimits

0x1b8f,	// (0x00001b8f) scroll_bg_pane_g2_ParamLimits

0x1ba7,	// (0x00001ba7) scroll_bg_pane_g3_ParamLimits

0xa9c5,	// (0x0000a9c5) scroll_bg_pane_g_ParamLimits

0x1b7a,	// (0x00001b7a) scroll_handle_pane_g1_ParamLimits

0x1bc9,	// (0x00001bc9) scroll_handle_pane_g2_ParamLimits

0x1ba7,	// (0x00001ba7) scroll_handle_pane_g3_ParamLimits

0xa9cc,	// (0x0000a9cc) scroll_handle_pane_g_ParamLimits

0x2b5c,	// (0x00002b5c) popup_choice_list_window_ParamLimits

0x2b5c,	// (0x00002b5c) popup_choice_list_window

0x3580,	// (0x00003580) choice_list_pane

0x3648,	// (0x00003648) cell_toolbar_pane_t1

0x3670,	// (0x00003670) toolbar_button_pane_ParamLimits

0x4a59,	// (0x00004a59) ai_gene_pane_1_t2_ParamLimits

0x4a59,	// (0x00004a59) ai_gene_pane_1_t2

0x0001,

0xabe2,	// (0x0000abe2) ai_gene_pane_1_t_ParamLimits

0xabe2,	// (0x0000abe2) ai_gene_pane_1_t

0x649a,	// (0x0000649a) scroll_sc2_left_pane_g1

0x649a,	// (0x0000649a) scroll_sc2_right_pane_g1

0x2b2c,	// (0x00002b2c) bg_popup_sub_pane_cp10

0x64a4,	// (0x000064a4) list_choice_list_pane

0x64bb,	// (0x000064bb) list_single_choice_list_pane_ParamLimits

0x64bb,	// (0x000064bb) list_single_choice_list_pane

0x64cf,	// (0x000064cf) list_single_choice_list_pane_g1

0x64d7,	// (0x000064d7) list_single_choice_list_pane_t1_ParamLimits

0x64d7,	// (0x000064d7) list_single_choice_list_pane_t1

0x64ec,	// (0x000064ec) choice_list_pane_g1

0x64f4,	// (0x000064f4) choice_list_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp11

0x18b7,	// (0x000018b7) title_pane_stacon_g2_ParamLimits

0x18b7,	// (0x000018b7) title_pane_stacon_g2

0x0002,

0xa9ab,	// (0x0000a9ab) title_pane_stacon_g_ParamLimits

0xa9ab,	// (0x0000a9ab) title_pane_stacon_g

0x25a4,	// (0x000025a4) cursor_press_pane

0xc26f,	// (0x0000c26f) popup_fep_hwr_window_ParamLimits

0xc26f,	// (0x0000c26f) popup_fep_hwr_window

0x2c7e,	// (0x00002c7e) popup_fep_vkb_window_ParamLimits

0x2c7e,	// (0x00002c7e) popup_fep_vkb_window

0x6502,	// (0x00006502) cursor_press_pane_g1

0x0002,

0xf486,	// (0x0000f486) fep_vkb_side_pane_g_ParamLimits

0x6543,	// (0x00006543) fep_hwr_candidate_pane_ParamLimits

0x6543,	// (0x00006543) fep_hwr_candidate_pane

0x656d,	// (0x0000656d) fep_hwr_side_pane_ParamLimits

0x656d,	// (0x0000656d) fep_hwr_side_pane

0x658d,	// (0x0000658d) fep_hwr_top_pane_ParamLimits

0x658d,	// (0x0000658d) fep_hwr_top_pane

0x65a5,	// (0x000065a5) fep_hwr_write_pane_ParamLimits

0x65a5,	// (0x000065a5) fep_hwr_write_pane

0xf486,	// (0x0000f486) fep_vkb_side_pane_g

0x65df,	// (0x000065df) fep_hwr_top_pane_g1

0x65f1,	// (0x000065f1) fep_hwr_top_pane_g2

0x6603,	// (0x00006603) fep_hwr_top_pane_g3

0x0002,

0xadcf,	// (0x0000adcf) fep_hwr_top_pane_g

0x6618,	// (0x00006618) fep_hwr_top_text_pane

0x1d20,	// (0x00001d20) fep_hwr_top_text_pane_g1

0x66f0,	// (0x000066f0) fep_hwr_top_text_pane_t1

0x6740,	// (0x00006740) fep_hwr_candidate_pane_g1

0x69b9,	// (0x000069b9) fep_vkb_keypad_pane_g3_ParamLimits

0x69b9,	// (0x000069b9) fep_vkb_keypad_pane_g3

0x69e1,	// (0x000069e1) fep_vkb_keypad_pane_g4_ParamLimits

0x69e1,	// (0x000069e1) fep_vkb_keypad_pane_g4

0x6a50,	// (0x00006a50) fep_vkb_bottom_pane_g2_ParamLimits

0x6a50,	// (0x00006a50) fep_vkb_bottom_pane_g2

0x0001,

0xadfa,	// (0x0000adfa) fep_vkb_bottom_pane_g_ParamLimits

0xadfa,	// (0x0000adfa) fep_vkb_bottom_pane_g

0x649a,	// (0x0000649a) cell_vkb_side_pane_g2

0x0001,

0xae04,	// (0x0000ae04) cell_vkb_side_pane_g

0x6adb,	// (0x00006adb) cell_vkb_side_pane_t1

0x6ae9,	// (0x00006ae9) cell_vkb_side_pane_t1_copy1

0x649a,	// (0x0000649a) bg_fep_vkb_candidate_pane_g2

0x6c15,	// (0x00006c15) cell_vkb_candidate_pane_ParamLimits

0x6774,	// (0x00006774) aid_size_cell_vkb_ParamLimits

0x6774,	// (0x00006774) aid_size_cell_vkb

0x6c15,	// (0x00006c15) cell_vkb_candidate_pane

0x6c49,	// (0x00006c49) bg_popup_fep_shadow_pane_g1

0xd649,	// (0x0000d649) fep_vkb_bottom_pane_ParamLimits

0xd649,	// (0x0000d649) fep_vkb_bottom_pane

0x6838,	// (0x00006838) fep_vkb_candidate_pane_ParamLimits

0x6838,	// (0x00006838) fep_vkb_candidate_pane

0xd66e,	// (0x0000d66e) fep_vkb_keypad_pane_ParamLimits

0xd66e,	// (0x0000d66e) fep_vkb_keypad_pane

0xd6aa,	// (0x0000d6aa) fep_vkb_side_pane_ParamLimits

0xd6aa,	// (0x0000d6aa) fep_vkb_side_pane

0xd6e6,	// (0x0000d6e6) fep_vkb_top_pane_ParamLimits

0xd6e6,	// (0x0000d6e6) fep_vkb_top_pane

0x6912,	// (0x00006912) fep_vkb_top_pane_g1_ParamLimits

0x6912,	// (0x00006912) fep_vkb_top_pane_g1

0x6921,	// (0x00006921) fep_vkb_top_pane_g2_ParamLimits

0x6921,	// (0x00006921) fep_vkb_top_pane_g2

0x6930,	// (0x00006930) fep_vkb_top_pane_g3_ParamLimits

0x6930,	// (0x00006930) fep_vkb_top_pane_g3

0x0003,

0xadea,	// (0x0000adea) fep_vkb_top_pane_g_ParamLimits

0xadea,	// (0x0000adea) fep_vkb_top_pane_g

0x694e,	// (0x0000694e) fep_vkb_top_text_pane_ParamLimits

0x694e,	// (0x0000694e) fep_vkb_top_text_pane

0xd722,	// (0x0000d722) fep_vkb_side_pane_g1_ParamLimits

0xd722,	// (0x0000d722) fep_vkb_side_pane_g1

0x69a8,	// (0x000069a8) grid_vkb_side_pane_ParamLimits

0x69a8,	// (0x000069a8) grid_vkb_side_pane

0x6c51,	// (0x00006c51) bg_popup_fep_shadow_pane_g2

0x6c5a,	// (0x00006c5a) bg_popup_fep_shadow_pane_g3

0x6c62,	// (0x00006c62) bg_popup_fep_shadow_pane_g4

0x6c6b,	// (0x00006c6b) bg_popup_fep_shadow_pane_g5

0x6c75,	// (0x00006c75) bg_popup_fep_shadow_pane_g6

0x6c7d,	// (0x00006c7d) bg_popup_fep_shadow_pane_g7

0x14cd,	// (0x000014cd) bg_popup_fep_shadow_pane_g8

0x69ff,	// (0x000069ff) grid_vkb_keypad_number_pane_ParamLimits

0x69ff,	// (0x000069ff) grid_vkb_keypad_number_pane

0x6a0f,	// (0x00006a0f) grid_vkb_keypad_pane_ParamLimits

0x6a0f,	// (0x00006a0f) grid_vkb_keypad_pane

0x6a35,	// (0x00006a35) fep_vkb_bottom_pane_g1_ParamLimits

0x6a35,	// (0x00006a35) fep_vkb_bottom_pane_g1

0x6a5e,	// (0x00006a5e) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6a5e,	// (0x00006a5e) grid_vkb_keypad_bottom_left_pane

0x6a73,	// (0x00006a73) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6a73,	// (0x00006a73) grid_vkb_keypad_bottom_right_pane

0x6a88,	// (0x00006a88) fep_vkb_top_text_pane_g1

0xd769,	// (0x0000d769) fep_vkb_top_text_pane_t1

0xd77b,	// (0x0000d77b) cell_vkb_side_pane_ParamLimits

0xd77b,	// (0x0000d77b) cell_vkb_side_pane

0x649a,	// (0x0000649a) cell_vkb_side_pane_g1

0x6af7,	// (0x00006af7) cell_vkb_keypad_pane_ParamLimits

0x6af7,	// (0x00006af7) cell_vkb_keypad_pane

0x6b6c,	// (0x00006b6c) cell_vkb_keypad_pane_g1

0x0008,

0xae17,	// (0x0000ae17) bg_popup_fep_shadow_pane_g

0x649a,	// (0x0000649a) cell_hwr_side_pane_g1

0x649a,	// (0x0000649a) cell_hwr_side_pane_g2

0x6b76,	// (0x00006b76) cell_vkb_keypad_pane_t1

0xd791,	// (0x0000d791) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd791,	// (0x0000d791) cell_vkb_keypad_bottom_left_pane

0xd7a6,	// (0x0000d7a6) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd7a6,	// (0x0000d7a6) cell_vkb_keypad_bottom_right_pane

0x649a,	// (0x0000649a) cell_vkb_keypad_bottom_left_pane_g1

0x649a,	// (0x0000649a) cell_vkb_keypad_bottom_right_pane_g1

0x6bda,	// (0x00006bda) cell_vkb_keypad_number_pane_ParamLimits

0x6bda,	// (0x00006bda) cell_vkb_keypad_number_pane

0x6bf9,	// (0x00006bf9) cell_vkb_keypad_number_pane_g1

0x6c03,	// (0x00006c03) cell_vkb_keypad_number_pane_g2

0x6c0c,	// (0x00006c0c) cell_vkb_keypad_number_pane_g3

0x0002,

0xae09,	// (0x0000ae09) cell_vkb_keypad_number_pane_g

0x6b76,	// (0x00006b76) cell_vkb_keypad_number_pane_t1

0x6c30,	// (0x00006c30) fep_vkb_candidate_pane_g1

0x0001,

0xae04,	// (0x0000ae04) cell_hwr_side_pane_g

0x6c8f,	// (0x00006c8f) cell_hwr_side_pane_t1

0x6c9d,	// (0x00006c9d) cell_hwr_side_pane_t1_copy1

0x6940,	// (0x00006940) cell_hwr_candidate_pane_g1

0x6ced,	// (0x00006ced) cell_hwr_candidate_pane_t1

0x649a,	// (0x0000649a) cell_vkb_candidate_pane_g2

0x6d41,	// (0x00006d41) cell_vkb_candidate_pane_t1

0x650a,	// (0x0000650a) bg_popup_fep_shadow_pane_ParamLimits

0x650a,	// (0x0000650a) bg_popup_fep_shadow_pane

0x65bf,	// (0x000065bf) bg_fep_hwr_top_pane_g4

0x662d,	// (0x0000662d) bg_hwr_side_pane_g1_ParamLimits

0x662d,	// (0x0000662d) bg_hwr_side_pane_g1

0xd602,	// (0x0000d602) cell_hwr_side_pane_ParamLimits

0xd602,	// (0x0000d602) cell_hwr_side_pane

0x669b,	// (0x0000669b) fep_hwr_write_pane_g1_ParamLimits

0x669b,	// (0x0000669b) fep_hwr_write_pane_g1

0x66a8,	// (0x000066a8) fep_hwr_write_pane_g2_ParamLimits

0x66a8,	// (0x000066a8) fep_hwr_write_pane_g2

0x66b5,	// (0x000066b5) fep_hwr_write_pane_g3_ParamLimits

0x66b5,	// (0x000066b5) fep_hwr_write_pane_g3

0xd622,	// (0x0000d622) fep_hwr_write_pane_g4_ParamLimits

0xd622,	// (0x0000d622) fep_hwr_write_pane_g4

0x0005,

0xf479,	// (0x0000f479) fep_hwr_write_pane_g_ParamLimits

0xf479,	// (0x0000f479) fep_hwr_write_pane_g

0x65bf,	// (0x000065bf) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x65bf,	// (0x000065bf) bg_fep_hwr_candidate_pane_g2

0x66fe,	// (0x000066fe) cell_hwr_candidate_pane_ParamLimits

0x66fe,	// (0x000066fe) cell_hwr_candidate_pane

0x6740,	// (0x00006740) fep_hwr_candidate_pane_g1_ParamLimits

0x67a2,	// (0x000067a2) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x67a2,	// (0x000067a2) bg_popup_fep_shadow_pane_cp2

0x6940,	// (0x00006940) fep_vkb_top_pane_g4_ParamLimits

0x6940,	// (0x00006940) fep_vkb_top_pane_g4

0x6986,	// (0x00006986) fep_vkb_side_pane_g2_ParamLimits

0x6986,	// (0x00006986) fep_vkb_side_pane_g2

0xba73,	// (0x0000ba73) list_setting_pane_t4_ParamLimits

0xba73,	// (0x0000ba73) list_setting_pane_t4

0xbaed,	// (0x0000baed) list_setting_number_pane_t5_ParamLimits

0xbaed,	// (0x0000baed) list_setting_number_pane_t5

0xbdfc,	// (0x0000bdfc) list_double_heading_pane_cp2_ParamLimits

0xbdfc,	// (0x0000bdfc) list_double_heading_pane_cp2

0x139b,	// (0x0000139b) list_double_heading_pane_g1_cp2_ParamLimits

0x139b,	// (0x0000139b) list_double_heading_pane_g1_cp2

0x13a7,	// (0x000013a7) list_double_heading_pane_g2_cp2_ParamLimits

0x13a7,	// (0x000013a7) list_double_heading_pane_g2_cp2

0x6d4f,	// (0x00006d4f) list_double_heading_pane_t1_cp2_ParamLimits

0x6d4f,	// (0x00006d4f) list_double_heading_pane_t1_cp2

0x6d65,	// (0x00006d65) list_double_heading_pane_t2_cp2_ParamLimits

0x6d65,	// (0x00006d65) list_double_heading_pane_t2_cp2

0x000c,	// (0x0000000c) aid_value_unit2

0x0317,	// (0x00000317) popup_preview_fixed_window

0x0831,	// (0x00000831) bg_popup_preview_window_pane_cp02

0x6d77,	// (0x00006d77) list_preview_fixed_pane

0x6dbd,	// (0x00006dbd) list_empty_pane_fp_ParamLimits

0x6dbd,	// (0x00006dbd) list_empty_pane_fp

0x6dbd,	// (0x00006dbd) list_single_cale_day_pane_fp_ParamLimits

0x6dbd,	// (0x00006dbd) list_single_cale_day_pane_fp

0x6dbd,	// (0x00006dbd) list_single_graphic_heading_pane_fp_ParamLimits

0x6dbd,	// (0x00006dbd) list_single_graphic_heading_pane_fp

0x6dbd,	// (0x00006dbd) list_single_graphic_pane_fp_ParamLimits

0x6dbd,	// (0x00006dbd) list_single_graphic_pane_fp

0x6dbd,	// (0x00006dbd) list_single_heading_pane_fp_ParamLimits

0x6dbd,	// (0x00006dbd) list_single_heading_pane_fp

0x6dbd,	// (0x00006dbd) list_single_pane_fp_ParamLimits

0x6dbd,	// (0x00006dbd) list_single_pane_fp

0x6dd2,	// (0x00006dd2) list_single_pane_fp_g1_ParamLimits

0x6dd2,	// (0x00006dd2) list_single_pane_fp_g1

0x0fd8,	// (0x00000fd8) list_single_pane_fp_g2_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_pane_fp_g2

0x6dde,	// (0x00006dde) list_single_pane_fp_g3_ParamLimits

0x6dde,	// (0x00006dde) list_single_pane_fp_g3

0x6df2,	// (0x00006df2) list_single_pane_fp_g4_ParamLimits

0x6df2,	// (0x00006df2) list_single_pane_fp_g4

0x0003,

0xae38,	// (0x0000ae38) list_single_pane_fp_g_ParamLimits

0xae38,	// (0x0000ae38) list_single_pane_fp_g

0x6dfe,	// (0x00006dfe) list_single_pane_fp_t1_ParamLimits

0x6dfe,	// (0x00006dfe) list_single_pane_fp_t1

0x6e15,	// (0x00006e15) list_single_graphic_pane_fp_g1_ParamLimits

0x6e15,	// (0x00006e15) list_single_graphic_pane_fp_g1

0x6dd2,	// (0x00006dd2) list_single_graphic_pane_fp_g2_ParamLimits

0x6dd2,	// (0x00006dd2) list_single_graphic_pane_fp_g2

0x0fd8,	// (0x00000fd8) list_single_graphic_pane_fp_g3_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_graphic_pane_fp_g3

0x6dde,	// (0x00006dde) list_single_graphic_pane_fp_g4_ParamLimits

0x6dde,	// (0x00006dde) list_single_graphic_pane_fp_g4

0x6df2,	// (0x00006df2) list_single_graphic_pane_fp_g5_ParamLimits

0x6df2,	// (0x00006df2) list_single_graphic_pane_fp_g5

0x0004,

0xae41,	// (0x0000ae41) list_single_graphic_pane_fp_g_ParamLimits

0xae41,	// (0x0000ae41) list_single_graphic_pane_fp_g

0x6e21,	// (0x00006e21) list_single_graphic_pane_fp_t1_ParamLimits

0x6e21,	// (0x00006e21) list_single_graphic_pane_fp_t1

0x6e15,	// (0x00006e15) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6e15,	// (0x00006e15) list_single_graphic_heading_pane_fp_g1

0x6dd2,	// (0x00006dd2) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6dd2,	// (0x00006dd2) list_single_graphic_heading_pane_fp_g2

0x0fd8,	// (0x00000fd8) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_graphic_heading_pane_fp_g3

0x6dde,	// (0x00006dde) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6dde,	// (0x00006dde) list_single_graphic_heading_pane_fp_g4

0x6df2,	// (0x00006df2) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6df2,	// (0x00006df2) list_single_graphic_heading_pane_fp_g5

0x0004,

0xae41,	// (0x0000ae41) list_single_graphic_heading_pane_fp_g_ParamLimits

0xae41,	// (0x0000ae41) list_single_graphic_heading_pane_fp_g

0x6e37,	// (0x00006e37) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6e37,	// (0x00006e37) list_single_graphic_heading_pane_fp_t1

0x6e4d,	// (0x00006e4d) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6e4d,	// (0x00006e4d) list_single_graphic_heading_pane_fp_t2

0x0001,

0xae4c,	// (0x0000ae4c) list_single_graphic_heading_pane_fp_t_ParamLimits

0xae4c,	// (0x0000ae4c) list_single_graphic_heading_pane_fp_t

0x6e5f,	// (0x00006e5f) list_single_cale_day_pane_fp_g1_ParamLimits

0x6e5f,	// (0x00006e5f) list_single_cale_day_pane_fp_g1

0x6e97,	// (0x00006e97) list_single_cale_day_pane_fp_g2_ParamLimits

0x6e97,	// (0x00006e97) list_single_cale_day_pane_fp_g2

0x6ea3,	// (0x00006ea3) list_single_cale_day_pane_fp_g3_ParamLimits

0x6ea3,	// (0x00006ea3) list_single_cale_day_pane_fp_g3

0x6ecb,	// (0x00006ecb) list_single_cale_day_pane_fp_g4_ParamLimits

0x6ecb,	// (0x00006ecb) list_single_cale_day_pane_fp_g4

0x6eef,	// (0x00006eef) list_single_cale_day_pane_fp_g5_ParamLimits

0x6eef,	// (0x00006eef) list_single_cale_day_pane_fp_g5

0x0004,

0xae51,	// (0x0000ae51) list_single_cale_day_pane_fp_g_ParamLimits

0xae51,	// (0x0000ae51) list_single_cale_day_pane_fp_g

0x6f13,	// (0x00006f13) list_single_cale_day_pane_fp_t1_ParamLimits

0x6f13,	// (0x00006f13) list_single_cale_day_pane_fp_t1

0x6f39,	// (0x00006f39) list_single_cale_day_pane_fp_t2_ParamLimits

0x6f39,	// (0x00006f39) list_single_cale_day_pane_fp_t2

0x6f52,	// (0x00006f52) list_single_cale_day_pane_fp_t3_ParamLimits

0x6f52,	// (0x00006f52) list_single_cale_day_pane_fp_t3

0x0002,

0xae5c,	// (0x0000ae5c) list_single_cale_day_pane_fp_t_ParamLimits

0xae5c,	// (0x0000ae5c) list_single_cale_day_pane_fp_t

0x6dd2,	// (0x00006dd2) list_empty_pane_fp_g1_ParamLimits

0x6dd2,	// (0x00006dd2) list_empty_pane_fp_g1

0x6f6b,	// (0x00006f6b) list_empty_pane_fp_t1

0x6f79,	// (0x00006f79) list_empty_pane_fp_t2

0x0001,

0xae63,	// (0x0000ae63) list_empty_pane_fp_t

0x6dd2,	// (0x00006dd2) list_single_heading_pane_fp_g1_ParamLimits

0x6dd2,	// (0x00006dd2) list_single_heading_pane_fp_g1

0x0fd8,	// (0x00000fd8) list_single_heading_pane_fp_g2_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_heading_pane_fp_g2

0x6dde,	// (0x00006dde) list_single_heading_pane_fp_g3_ParamLimits

0x6dde,	// (0x00006dde) list_single_heading_pane_fp_g3

0x0002,

0xae68,	// (0x0000ae68) list_single_heading_pane_fp_g_ParamLimits

0xae68,	// (0x0000ae68) list_single_heading_pane_fp_g

0x6f87,	// (0x00006f87) list_single_heading_pane_fp_t1_ParamLimits

0x6f87,	// (0x00006f87) list_single_heading_pane_fp_t1

0x6f99,	// (0x00006f99) list_single_heading_pane_fp_t2_ParamLimits

0x6f99,	// (0x00006f99) list_single_heading_pane_fp_t2

0x0001,

0xae6f,	// (0x0000ae6f) list_single_heading_pane_fp_t_ParamLimits

0xae6f,	// (0x0000ae6f) list_single_heading_pane_fp_t

0x16fe,	// (0x000016fe) aid_size_cell_fast

0x07a1,	// (0x000007a1) soft_indicator_pane_cp1_t1

0x173b,	// (0x0000173b) cell_app_pane_cp2_ParamLimits

0x173b,	// (0x0000173b) cell_app_pane_cp2

0x652c,	// (0x0000652c) fep_hwr_candidate_drop_down_list_pane

0x675a,	// (0x0000675a) fep_hwr_candidate_pane_g3_ParamLimits

0x675a,	// (0x0000675a) fep_hwr_candidate_pane_g3

0x6767,	// (0x00006767) fep_hwr_candidate_pane_g4_ParamLimits

0x6767,	// (0x00006767) fep_hwr_candidate_pane_g4

0x0002,

0xade3,	// (0x0000ade3) fep_hwr_candidate_pane_g_ParamLimits

0xade3,	// (0x0000ade3) fep_hwr_candidate_pane_g

0x6827,	// (0x00006827) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x6827,	// (0x00006827) fep_vkb_candidate_drop_down_list_pane

0x6c38,	// (0x00006c38) fep_vkb_candidate_pane_g3

0x6c40,	// (0x00006c40) fep_vkb_candidate_pane_g4

0x0002,

0xae10,	// (0x0000ae10) fep_vkb_candidate_pane_g

0x6940,	// (0x00006940) cell_hwr_candidate_pane_g1_ParamLimits

0x6cab,	// (0x00006cab) cell_hwr_candidate_pane_g3_ParamLimits

0x6cab,	// (0x00006cab) cell_hwr_candidate_pane_g3

0x6ccc,	// (0x00006ccc) cell_hwr_candidate_pane_g4_ParamLimits

0x6ccc,	// (0x00006ccc) cell_hwr_candidate_pane_g4

0x0002,

0xae2a,	// (0x0000ae2a) cell_hwr_candidate_pane_g_ParamLimits

0xae2a,	// (0x0000ae2a) cell_hwr_candidate_pane_g

0x6d0b,	// (0x00006d0b) cell_vkb_candidate_pane_g3_ParamLimits

0x6d0b,	// (0x00006d0b) cell_vkb_candidate_pane_g3

0x6d26,	// (0x00006d26) cell_vkb_candidate_pane_g4_ParamLimits

0x6d26,	// (0x00006d26) cell_vkb_candidate_pane_g4

0x6faf,	// (0x00006faf) cell_app_pane_cp2_g1_ParamLimits

0x6faf,	// (0x00006faf) cell_app_pane_cp2_g1

0x6fcd,	// (0x00006fcd) cell_app_pane_cp2_g2_ParamLimits

0x6fcd,	// (0x00006fcd) cell_app_pane_cp2_g2

0x0001,

0xae74,	// (0x0000ae74) cell_app_pane_cp2_g_ParamLimits

0xae74,	// (0x0000ae74) cell_app_pane_cp2_g

0x6fd9,	// (0x00006fd9) cell_app_pane_cp2_t1_ParamLimits

0x6fd9,	// (0x00006fd9) cell_app_pane_cp2_t1

0x1375,	// (0x00001375) grid_highlight_pane_cp1_ParamLimits

0x1375,	// (0x00001375) grid_highlight_pane_cp1

0x6feb,	// (0x00006feb) cell_hwr_candidate_pane_cp1_ParamLimits

0x6feb,	// (0x00006feb) cell_hwr_candidate_pane_cp1

0x6940,	// (0x00006940) fep_hwr_candidate_drop_down_list_pane_g1

0x700a,	// (0x0000700a) fep_hwr_candidate_drop_down_list_pane_g2

0x7017,	// (0x00007017) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xae79,	// (0x0000ae79) fep_hwr_candidate_drop_down_list_pane_g

0x7024,	// (0x00007024) fep_hwr_candidate_drop_down_list_scroll_pane

0x702d,	// (0x0000702d) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x702d,	// (0x0000702d) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x703a,	// (0x0000703a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x703a,	// (0x0000703a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7047,	// (0x00007047) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7047,	// (0x00007047) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6d0b,	// (0x00006d0b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6d0b,	// (0x00006d0b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6d26,	// (0x00006d26) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6d26,	// (0x00006d26) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7054,	// (0x00007054) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7054,	// (0x00007054) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x706f,	// (0x0000706f) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x706f,	// (0x0000706f) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x708a,	// (0x0000708a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x708a,	// (0x0000708a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xae80,	// (0x0000ae80) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xae80,	// (0x0000ae80) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x70a5,	// (0x000070a5) cell_vkb_candidate_pane_cp1_ParamLimits

0x70a5,	// (0x000070a5) cell_vkb_candidate_pane_cp1

0x6940,	// (0x00006940) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x6940,	// (0x00006940) fep_vkb_candidate_drop_down_list_pane_g1

0x700a,	// (0x0000700a) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x700a,	// (0x0000700a) fep_vkb_candidate_drop_down_list_pane_g2

0x7017,	// (0x00007017) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7017,	// (0x00007017) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xae79,	// (0x0000ae79) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xae79,	// (0x0000ae79) fep_vkb_candidate_drop_down_list_pane_g

0x70c5,	// (0x000070c5) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x70c5,	// (0x000070c5) fep_vkb_candidate_drop_down_list_scroll_pane

0x70d2,	// (0x000070d2) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x70d2,	// (0x000070d2) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x70df,	// (0x000070df) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x70df,	// (0x000070df) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x70eb,	// (0x000070eb) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x70eb,	// (0x000070eb) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6cab,	// (0x00006cab) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6cab,	// (0x00006cab) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6ccc,	// (0x00006ccc) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6ccc,	// (0x00006ccc) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x70f7,	// (0x000070f7) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x70f7,	// (0x000070f7) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7118,	// (0x00007118) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7118,	// (0x00007118) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7139,	// (0x00007139) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7139,	// (0x00007139) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xae91,	// (0x0000ae91) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xae91,	// (0x0000ae91) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb385,	// (0x0000b385) title_pane_g1_ParamLimits

0xb396,	// (0x0000b396) title_pane_g2_ParamLimits

0xf2ad,	// (0x0000f2ad) title_pane_g_ParamLimits

0x1d10,	// (0x00001d10) aid_call2_pane

0x1d18,	// (0x00001d18) aid_call_pane

0x1d20,	// (0x00001d20) popup_clock_analogue_window_g1

0x1d20,	// (0x00001d20) popup_clock_analogue_window_g2

0x1d28,	// (0x00001d28) popup_clock_analogue_window_g3

0x1d31,	// (0x00001d31) popup_clock_analogue_window_g4

0x002e,	// (0x0000002e) popup_clock_analogue_window_g5

0x0004,

0xa9da,	// (0x0000a9da) popup_clock_analogue_window_g

0x1d39,	// (0x00001d39) popup_clock_analogue_window_t1

0x1dbf,	// (0x00001dbf) clock_digital_number_pane_ParamLimits

0x1dbf,	// (0x00001dbf) clock_digital_number_pane

0x1dcb,	// (0x00001dcb) clock_digital_number_pane_cp02_ParamLimits

0x1dcb,	// (0x00001dcb) clock_digital_number_pane_cp02

0x1dd7,	// (0x00001dd7) clock_digital_number_pane_cp03_ParamLimits

0x1dd7,	// (0x00001dd7) clock_digital_number_pane_cp03

0x1de3,	// (0x00001de3) clock_digital_number_pane_cp04_ParamLimits

0x1de3,	// (0x00001de3) clock_digital_number_pane_cp04

0x1def,	// (0x00001def) clock_digital_separator_pane_ParamLimits

0x1def,	// (0x00001def) clock_digital_separator_pane

0x1dfb,	// (0x00001dfb) popup_clock_digital_window_t1_ParamLimits

0x1dfb,	// (0x00001dfb) popup_clock_digital_window_t1

0x002e,	// (0x0000002e) clock_digital_number_pane_g1

0x002e,	// (0x0000002e) clock_digital_number_pane_g2

0x0001,

0xa9e5,	// (0x0000a9e5) clock_digital_number_pane_g

0x002e,	// (0x0000002e) clock_digital_separator_pane_g1

0x002e,	// (0x0000002e) clock_digital_separator_pane_g2

0x0001,

0xa9e5,	// (0x0000a9e5) clock_digital_separator_pane_g

0xc848,	// (0x0000c848) aid_fill_nsta_ParamLimits

0xc977,	// (0x0000c977) indicator_nsta_pane_ParamLimits

0x33a1,	// (0x000033a1) popup_clock_analogue_window

0x33a1,	// (0x000033a1) popup_clock_digital_window

0x16bf,	// (0x000016bf) grid_indicator_nsta_pane_ParamLimits

0x5dd9,	// (0x00005dd9) clock_nsta_pane_t2

0x0001,

0xad63,	// (0x0000ad63) clock_nsta_pane_t

0x1af7,	// (0x00001af7) aid_size_max_handle

0xbdf3,	// (0x0000bdf3) aid_size_min_handle

0x25a4,	// (0x000025a4) editor_scroll_pane

0x7154,	// (0x00007154) ex_editor_pane

0x166c,	// (0x0000166c) scroll_pane_cp13

0x0db3,	// (0x00000db3) scroll_pane_cp14

0x1d69,	// (0x00001d69) scroll_pane_cp36

0xbe0b,	// (0x0000be0b) list_single_graphic_hl_pane_cp2_ParamLimits

0xbe0b,	// (0x0000be0b) list_single_graphic_hl_pane_cp2

0xd24e,	// (0x0000d24e) list_single_graphic_hl_pane_ParamLimits

0xd24e,	// (0x0000d24e) list_single_graphic_hl_pane

0x715c,	// (0x0000715c) aid_size_min_hl_cp1

0x7165,	// (0x00007165) list_highlight_pane_cp34_ParamLimits

0x7165,	// (0x00007165) list_highlight_pane_cp34

0x7176,	// (0x00007176) list_single_graphic_hl_pane_g1_ParamLimits

0x7176,	// (0x00007176) list_single_graphic_hl_pane_g1

0xd7c1,	// (0x0000d7c1) list_single_graphic_hl_pane_g2_ParamLimits

0xd7c1,	// (0x0000d7c1) list_single_graphic_hl_pane_g2

0xd7c1,	// (0x0000d7c1) list_single_graphic_hl_pane_g3_ParamLimits

0xd7c1,	// (0x0000d7c1) list_single_graphic_hl_pane_g3

0x2515,	// (0x00002515) list_single_graphic_hl_pane_g4_ParamLimits

0x2515,	// (0x00002515) list_single_graphic_hl_pane_g4

0xd7cd,	// (0x0000d7cd) list_single_graphic_hl_pane_g5_ParamLimits

0xd7cd,	// (0x0000d7cd) list_single_graphic_hl_pane_g5

0x0004,

0xf492,	// (0x0000f492) list_single_graphic_hl_pane_g_ParamLimits

0xf492,	// (0x0000f492) list_single_graphic_hl_pane_g

0xd7e1,	// (0x0000d7e1) list_single_graphic_hl_pane_t1_ParamLimits

0xd7e1,	// (0x0000d7e1) list_single_graphic_hl_pane_t1

0x71b9,	// (0x000071b9) aid_size_min_hl_cp2

0x71c2,	// (0x000071c2) list_highlight_pane_cp34_cp2_ParamLimits

0x71c2,	// (0x000071c2) list_highlight_pane_cp34_cp2

0x7176,	// (0x00007176) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7176,	// (0x00007176) list_single_graphic_hl_pane_g1_cp2

0x71cf,	// (0x000071cf) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x71cf,	// (0x000071cf) list_single_graphic_hl_pane_g2_cp2

0x71db,	// (0x000071db) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x71db,	// (0x000071db) list_single_graphic_hl_pane_g3_cp2

0x3514,	// (0x00003514) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x3514,	// (0x00003514) list_single_graphic_hl_pane_g4_cp2

0x718f,	// (0x0000718f) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x718f,	// (0x0000718f) list_single_graphic_hl_pane_g5_cp2

0xc05c,	// (0x0000c05c) control_pane_g4_ParamLimits

0xc05c,	// (0x0000c05c) control_pane_g4

0x2b2c,	// (0x00002b2c) bg_popup_sub_pane_cp10_ParamLimits

0x64a4,	// (0x000064a4) list_choice_list_pane_ParamLimits

0x64b3,	// (0x000064b3) scroll_pane_cp23

0x0831,	// (0x00000831) bg_popup_preview_window_pane_cp02_ParamLimits

0x6d77,	// (0x00006d77) list_preview_fixed_pane_ParamLimits

0x6d8d,	// (0x00006d8d) list_preview_fixed_pane_cp_ParamLimits

0x6d8d,	// (0x00006d8d) list_preview_fixed_pane_cp

0x6d99,	// (0x00006d99) popup_preview_fixed_window_g1_ParamLimits

0x6d99,	// (0x00006d99) popup_preview_fixed_window_g1

0x6da5,	// (0x00006da5) popup_preview_fixed_window_g2_ParamLimits

0x6da5,	// (0x00006da5) popup_preview_fixed_window_g2

0x0002,

0xae31,	// (0x0000ae31) popup_preview_fixed_window_g_ParamLimits

0xae31,	// (0x0000ae31) popup_preview_fixed_window_g

0x199c,	// (0x0000199c) aid_navi_side_left_pane_ParamLimits

0x19b1,	// (0x000019b1) aid_navi_side_right_pane_ParamLimits

0x19c9,	// (0x000019c9) navi_icon_pane_stacon_ParamLimits

0x19dd,	// (0x000019dd) navi_navi_pane_stacon_ParamLimits

0x19c9,	// (0x000019c9) navi_text_pane_stacon_ParamLimits

0x0024,	// (0x00000024) main_text_info_pane

0x71ff,	// (0x000071ff) listscroll_text_info_pane

0x7207,	// (0x00007207) list_text_info_pane_ParamLimits

0x7207,	// (0x00007207) list_text_info_pane

0x7216,	// (0x00007216) scroll_pane_cp24_ParamLimits

0x7216,	// (0x00007216) scroll_pane_cp24

0xd7f7,	// (0x0000d7f7) list_text_info_pane_t1_ParamLimits

0xd7f7,	// (0x0000d7f7) list_text_info_pane_t1

0xc1e2,	// (0x0000c1e2) popup_fast_swap2_window_ParamLimits

0xc1e2,	// (0x0000c1e2) popup_fast_swap2_window

0x7265,	// (0x00007265) aid_size_cell_fast2

0x0024,	// (0x00000024) bg_popup_window_pane_cp17

0x3c92,	// (0x00003c92) heading_pane_cp2

0x0a7d,	// (0x00000a7d) listscroll_fast2_pane

0x726f,	// (0x0000726f) grid_fast2_pane

0x7279,	// (0x00007279) listscroll_fast2_pane_g1

0x7281,	// (0x00007281) listscroll_fast2_pane_g2

0x0001,

0xaead,	// (0x0000aead) listscroll_fast2_pane_g

0x166c,	// (0x0000166c) scroll_pane_cp26

0x728b,	// (0x0000728b) cell_fast2_pane_ParamLimits

0x728b,	// (0x0000728b) cell_fast2_pane

0x72a0,	// (0x000072a0) cell_fast2_pane_g1

0x72a9,	// (0x000072a9) cell_fast2_pane_g2

0x72b2,	// (0x000072b2) cell_fast2_pane_g3

0x0002,

0xaeb2,	// (0x0000aeb2) cell_fast2_pane_g

0x0b70,	// (0x00000b70) grid_highlight_pane_cp9

0x0b85,	// (0x00000b85) main_eswt_pane_ParamLimits

0x0b85,	// (0x00000b85) main_eswt_pane

0x722b,	// (0x0000722b) list_single_text_info_pane

0x72ba,	// (0x000072ba) eswt_ctrl_button_pane

0x72ba,	// (0x000072ba) eswt_ctrl_canvas_pane

0x72c2,	// (0x000072c2) eswt_ctrl_combo_pane

0x72ba,	// (0x000072ba) eswt_ctrl_default_pane

0x72ba,	// (0x000072ba) eswt_ctrl_label_pane

0x72ca,	// (0x000072ca) eswt_ctrl_wait_pane

0x72d2,	// (0x000072d2) eswt_shell_pane

0x0024,	// (0x00000024) listscroll_eswt_app_pane

0x72f2,	// (0x000072f2) popup_eswt_tasktip_window_ParamLimits

0x72f2,	// (0x000072f2) popup_eswt_tasktip_window

0x380a,	// (0x0000380a) bg_popup_window_pane_cp18

0x7303,	// (0x00007303) eswt_control_pane_g1_ParamLimits

0x7303,	// (0x00007303) eswt_control_pane_g1

0x7310,	// (0x00007310) eswt_control_pane_g2_ParamLimits

0x7310,	// (0x00007310) eswt_control_pane_g2

0x731d,	// (0x0000731d) eswt_control_pane_g3_ParamLimits

0x731d,	// (0x0000731d) eswt_control_pane_g3

0x732a,	// (0x0000732a) eswt_control_pane_g4_ParamLimits

0x732a,	// (0x0000732a) eswt_control_pane_g4

0x0003,

0xaeb9,	// (0x0000aeb9) eswt_control_pane_g_ParamLimits

0xaeb9,	// (0x0000aeb9) eswt_control_pane_g

0x1375,	// (0x00001375) bg_button_pane_ParamLimits

0x1375,	// (0x00001375) bg_button_pane

0x0b85,	// (0x00000b85) common_borders_pane_copy2_ParamLimits

0x0b85,	// (0x00000b85) common_borders_pane_copy2

0x7337,	// (0x00007337) control_button_pane_g1_ParamLimits

0x7337,	// (0x00007337) control_button_pane_g1

0x7343,	// (0x00007343) control_button_pane_g2_ParamLimits

0x7343,	// (0x00007343) control_button_pane_g2

0x734f,	// (0x0000734f) control_button_pane_g3_ParamLimits

0x734f,	// (0x0000734f) control_button_pane_g3

0x0002,

0xaec2,	// (0x0000aec2) control_button_pane_g_ParamLimits

0xaec2,	// (0x0000aec2) control_button_pane_g

0x7363,	// (0x00007363) control_button_pane_t1

0x7371,	// (0x00007371) control_button_pane_t2

0x0001,

0xaec9,	// (0x0000aec9) control_button_pane_t

0x367c,	// (0x0000367c) bg_button_pane_g1

0x3684,	// (0x00003684) bg_button_pane_g2

0x368c,	// (0x0000368c) bg_button_pane_g3

0x3694,	// (0x00003694) bg_button_pane_g4

0x369c,	// (0x0000369c) bg_button_pane_g5

0x36a4,	// (0x000036a4) bg_button_pane_g6

0x36ac,	// (0x000036ac) bg_button_pane_g7

0x36b4,	// (0x000036b4) bg_button_pane_g8

0x36bc,	// (0x000036bc) bg_button_pane_g9

0x0008,

0xab36,	// (0x0000ab36) bg_button_pane_g

0x645f,	// (0x0000645f) common_borders_pane_ParamLimits

0x645f,	// (0x0000645f) common_borders_pane

0x7303,	// (0x00007303) eswt_control_pane_g1_copy1_ParamLimits

0x7303,	// (0x00007303) eswt_control_pane_g1_copy1

0x7310,	// (0x00007310) eswt_control_pane_g2_copy1_ParamLimits

0x7310,	// (0x00007310) eswt_control_pane_g2_copy1

0x731d,	// (0x0000731d) eswt_control_pane_g3_copy1_ParamLimits

0x731d,	// (0x0000731d) eswt_control_pane_g3_copy1

0x732a,	// (0x0000732a) eswt_control_pane_g4_copy1_ParamLimits

0x732a,	// (0x0000732a) eswt_control_pane_g4_copy1

0x649a,	// (0x0000649a) bg_eswt_ctrl_canvas_pane_g1

0x645f,	// (0x0000645f) common_borders_pane_cp2_ParamLimits

0x645f,	// (0x0000645f) common_borders_pane_cp2

0x645f,	// (0x0000645f) common_borders_pane_cp3_ParamLimits

0x645f,	// (0x0000645f) common_borders_pane_cp3

0x737f,	// (0x0000737f) separator_horizontal_pane

0x7387,	// (0x00007387) separator_vertical_pane

0x7303,	// (0x00007303) eswt_control_pane_g1_copy2_ParamLimits

0x7303,	// (0x00007303) eswt_control_pane_g1_copy2

0x7310,	// (0x00007310) eswt_control_pane_g2_copy2_ParamLimits

0x7310,	// (0x00007310) eswt_control_pane_g2_copy2

0x731d,	// (0x0000731d) eswt_control_pane_g3_copy2_ParamLimits

0x731d,	// (0x0000731d) eswt_control_pane_g3_copy2

0x732a,	// (0x0000732a) eswt_control_pane_g4_copy2_ParamLimits

0x732a,	// (0x0000732a) eswt_control_pane_g4_copy2

0x0024,	// (0x00000024) common_borders_pane_cp4

0x7390,	// (0x00007390) separator_horizontal_pane_g1

0x7399,	// (0x00007399) separator_horizontal_pane_g2

0x73a2,	// (0x000073a2) separator_horizontal_pane_g3

0x0002,

0xaece,	// (0x0000aece) separator_horizontal_pane_g

0x7303,	// (0x00007303) eswt_control_pane_g1_copy3_ParamLimits

0x7303,	// (0x00007303) eswt_control_pane_g1_copy3

0x7310,	// (0x00007310) eswt_control_pane_g2_copy3_ParamLimits

0x7310,	// (0x00007310) eswt_control_pane_g2_copy3

0x731d,	// (0x0000731d) eswt_control_pane_g3_copy3_ParamLimits

0x731d,	// (0x0000731d) eswt_control_pane_g3_copy3

0x732a,	// (0x0000732a) eswt_control_pane_g4_copy3_ParamLimits

0x732a,	// (0x0000732a) eswt_control_pane_g4_copy3

0x0024,	// (0x00000024) common_borders_pane_cp5

0x73ab,	// (0x000073ab) separator_vertical_pane_g1

0x73b4,	// (0x000073b4) separator_vertical_pane_g2

0x73bd,	// (0x000073bd) separator_vertical_pane_g3

0x0002,

0xaed5,	// (0x0000aed5) separator_vertical_pane_g

0x7303,	// (0x00007303) eswt_control_pane_g1_copy4_ParamLimits

0x7303,	// (0x00007303) eswt_control_pane_g1_copy4

0x7310,	// (0x00007310) eswt_control_pane_g2_copy4_ParamLimits

0x7310,	// (0x00007310) eswt_control_pane_g2_copy4

0x731d,	// (0x0000731d) eswt_control_pane_g3_copy4_ParamLimits

0x731d,	// (0x0000731d) eswt_control_pane_g3_copy4

0x732a,	// (0x0000732a) eswt_control_pane_g4_copy4_ParamLimits

0x732a,	// (0x0000732a) eswt_control_pane_g4_copy4

0xd812,	// (0x0000d812) eswt_ctrl_combo_button_pane

0xd81a,	// (0x0000d81a) eswt_ctrl_input_pane

0xd822,	// (0x0000d822) popup_choice_list_window_cp70

0xd82a,	// (0x0000d82a) eswt_ctrl_input_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp70

0x645f,	// (0x0000645f) bg_button_pane_cp70_ParamLimits

0x645f,	// (0x0000645f) bg_button_pane_cp70

0xd838,	// (0x0000d838) eswt_ctrl_combo_button_pane_g1

0x73f4,	// (0x000073f4) wait_bar_pane_cp70

0x380a,	// (0x0000380a) bg_popup_window_pane_cp70_ParamLimits

0x380a,	// (0x0000380a) bg_popup_window_pane_cp70

0x73fc,	// (0x000073fc) popup_eswt_tasktip_window_t1

0x7412,	// (0x00007412) wait_bar_pane_cp71_ParamLimits

0x7412,	// (0x00007412) wait_bar_pane_cp71

0x741e,	// (0x0000741e) grid_eswt_app_pane

0x1b5b,	// (0x00001b5b) scroll_pane_cp70

0xd840,	// (0x0000d840) cell_eswt_app_pane_ParamLimits

0xd840,	// (0x0000d840) cell_eswt_app_pane

0xd86a,	// (0x0000d86a) cell_eswt_app_pane_g1_ParamLimits

0xd86a,	// (0x0000d86a) cell_eswt_app_pane_g1

0xd899,	// (0x0000d899) cell_eswt_app_pane_g2_ParamLimits

0xd899,	// (0x0000d899) cell_eswt_app_pane_g2

0x0001,

0xf49d,	// (0x0000f49d) cell_eswt_app_pane_g_ParamLimits

0xf49d,	// (0x0000f49d) cell_eswt_app_pane_g

0xd8c2,	// (0x0000d8c2) cell_eswt_app_pane_t1_ParamLimits

0xd8c2,	// (0x0000d8c2) cell_eswt_app_pane_t1

0x74e1,	// (0x000074e1) grid_highlight_pane_cp70_ParamLimits

0x74e1,	// (0x000074e1) grid_highlight_pane_cp70

0x2479,	// (0x00002479) set_content_pane_g1

0x28f9,	// (0x000028f9) status_small_volume_pane

0x74ed,	// (0x000074ed) status_small_volume_pane_g1

0x74f5,	// (0x000074f5) volume_small2_pane

0x74fe,	// (0x000074fe) volume_small2_pane_g1

0x7507,	// (0x00007507) volume_small2_pane_g2

0x7510,	// (0x00007510) volume_small2_pane_g3

0x7519,	// (0x00007519) volume_small2_pane_g4

0x7522,	// (0x00007522) volume_small2_pane_g5

0x752b,	// (0x0000752b) volume_small2_pane_g6

0x7534,	// (0x00007534) volume_small2_pane_g7

0x753d,	// (0x0000753d) volume_small2_pane_g8

0x7546,	// (0x00007546) volume_small2_pane_g9

0x754f,	// (0x0000754f) volume_small2_pane_g10

0x0009,

0xaee1,	// (0x0000aee1) volume_small2_pane_g

0x6a88,	// (0x00006a88) fep_vkb_top_text_pane_g1_ParamLimits

0xd769,	// (0x0000d769) fep_vkb_top_text_pane_t1_ParamLimits

0x6db1,	// (0x00006db1) popup_preview_fixed_window_g3_ParamLimits

0x6db1,	// (0x00006db1) popup_preview_fixed_window_g3

0xc7db,	// (0x0000c7db) popup_toolbar_trans_pane

0xd097,	// (0x0000d097) aid_height_set_list_ParamLimits

0x4e77,	// (0x00004e77) aid_size_parent_ParamLimits

0x2b2c,	// (0x00002b2c) list_highlight_pane_cp2_ParamLimits

0x2479,	// (0x00002479) set_content_pane_g1_ParamLimits

0xd25f,	// (0x0000d25f) list_single_image_pane_ParamLimits

0xd25f,	// (0x0000d25f) list_single_image_pane

0x7558,	// (0x00007558) aid_size_cell_image_ParamLimits

0x7558,	// (0x00007558) aid_size_cell_image

0xd8f4,	// (0x0000d8f4) grid_single_image_pane_ParamLimits

0xd8f4,	// (0x0000d8f4) grid_single_image_pane

0x0fd8,	// (0x00000fd8) list_single_image_pane_g1_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_image_pane_g1

0x6dde,	// (0x00006dde) list_single_image_pane_g2_ParamLimits

0x6dde,	// (0x00006dde) list_single_image_pane_g2

0x0001,

0xaef6,	// (0x0000aef6) list_single_image_pane_g_ParamLimits

0xaef6,	// (0x0000aef6) list_single_image_pane_g

0x0f0f,	// (0x00000f0f) list_single_image_pane_t1_ParamLimits

0x0f0f,	// (0x00000f0f) list_single_image_pane_t1

0xd902,	// (0x0000d902) cell_image_list_pane_ParamLimits

0xd902,	// (0x0000d902) cell_image_list_pane

0x7586,	// (0x00007586) cell_image_list_pane_g1

0x758f,	// (0x0000758f) cell_image_list_pane_g2

0x0001,

0xaefb,	// (0x0000aefb) cell_image_list_pane_g

0x7598,	// (0x00007598) aid_size_cell_tb_trans_pane

0x1375,	// (0x00001375) bg_tb_trans_pane

0x75aa,	// (0x000075aa) grid_tb_trans_pane

0x367c,	// (0x0000367c) bg_tb_trans_pane_g1

0x3684,	// (0x00003684) bg_tb_trans_pane_g2

0x368c,	// (0x0000368c) bg_tb_trans_pane_g3

0x3694,	// (0x00003694) bg_tb_trans_pane_g4

0x369c,	// (0x0000369c) bg_tb_trans_pane_g5

0x36b4,	// (0x000036b4) bg_tb_trans_pane_g6

0x36bc,	// (0x000036bc) bg_tb_trans_pane_g7

0x36a4,	// (0x000036a4) bg_tb_trans_pane_g8

0x36ac,	// (0x000036ac) bg_tb_trans_pane_g9

0x0008,

0xaf00,	// (0x0000af00) bg_tb_trans_pane_g

0x75be,	// (0x000075be) cell_toolbar_trans_pane_ParamLimits

0x75be,	// (0x000075be) cell_toolbar_trans_pane

0x649a,	// (0x0000649a) cell_toolbar_trans_pane_g1

0xd4bf,	// (0x0000d4bf) list_form2_midp_pane_t1

0xd4cd,	// (0x0000d4cd) list_form2_midp_pane_t2

0x0001,

0xf46d,	// (0x0000f46d) list_form2_midp_pane_t

0x6030,	// (0x00006030) scroll_pane_cp51_ParamLimits

0x623b,	// (0x0000623b) form2_midp_wait_pane_g1

0x6244,	// (0x00006244) form2_midp_wait_pane_g2

0x624d,	// (0x0000624d) form2_midp_wait_pane_g3

0x0002,

0xadbe,	// (0x0000adbe) form2_midp_wait_pane_g

0x04fd,	// (0x000004fd) list_highlight_pane_cp21_ParamLimits

0x62a4,	// (0x000062a4) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x62b3,	// (0x000062b3) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x507d,	// (0x0000507d) list_single_2graphic_im_pane_ParamLimits

0x507d,	// (0x0000507d) list_single_2graphic_im_pane

0xd918,	// (0x0000d918) list_single_2graphic_im_pane_g1_ParamLimits

0xd918,	// (0x0000d918) list_single_2graphic_im_pane_g1

0xd929,	// (0x0000d929) list_single_2graphic_im_pane_g2_ParamLimits

0xd929,	// (0x0000d929) list_single_2graphic_im_pane_g2

0xd935,	// (0x0000d935) list_single_2graphic_im_pane_g3_ParamLimits

0xd935,	// (0x0000d935) list_single_2graphic_im_pane_g3

0x0003,

0xf4a2,	// (0x0000f4a2) list_single_2graphic_im_pane_g_ParamLimits

0xf4a2,	// (0x0000f4a2) list_single_2graphic_im_pane_g

0xd949,	// (0x0000d949) list_single_2graphic_im_pane_t1_ParamLimits

0xd949,	// (0x0000d949) list_single_2graphic_im_pane_t1

0x6dbd,	// (0x00006dbd) list_single_graphic_2heading_pane_fp_ParamLimits

0x6dbd,	// (0x00006dbd) list_single_graphic_2heading_pane_fp

0x6e15,	// (0x00006e15) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6e15,	// (0x00006e15) list_single_graphic_2heading_pane_fp_g1

0x6dd2,	// (0x00006dd2) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6dd2,	// (0x00006dd2) list_single_graphic_2heading_pane_fp_g2

0x0fd8,	// (0x00000fd8) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_graphic_2heading_pane_fp_g3

0x6dde,	// (0x00006dde) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6dde,	// (0x00006dde) list_single_graphic_2heading_pane_fp_g4

0x6df2,	// (0x00006df2) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6df2,	// (0x00006df2) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xae41,	// (0x0000ae41) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xae41,	// (0x0000ae41) list_single_graphic_2heading_pane_fp_g

0x7652,	// (0x00007652) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7652,	// (0x00007652) list_single_graphic_2heading_pane_fp_t1

0x6e4d,	// (0x00006e4d) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6e4d,	// (0x00006e4d) list_single_graphic_2heading_pane_fp_t2

0x7668,	// (0x00007668) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7668,	// (0x00007668) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xaf1c,	// (0x0000af1c) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xaf1c,	// (0x0000af1c) list_single_graphic_2heading_pane_fp_t

0x66d8,	// (0x000066d8) fep_hwr_write_pane_g5_ParamLimits

0x66d8,	// (0x000066d8) fep_hwr_write_pane_g5

0x66e4,	// (0x000066e4) fep_hwr_write_pane_g6_ParamLimits

0x66e4,	// (0x000066e4) fep_hwr_write_pane_g6

0x72d2,	// (0x000072d2) eswt_shell_pane_ParamLimits

0x380a,	// (0x0000380a) bg_popup_window_pane_cp18_ParamLimits

0x4d1f,	// (0x00004d1f) heading_pane_cp70

0x73fc,	// (0x000073fc) popup_eswt_tasktip_window_t1_ParamLimits

0xc89c,	// (0x0000c89c) aid_touch_tab_arrow_left

0xc8b2,	// (0x0000c8b2) aid_touch_tab_arrow_right

0xb3ae,	// (0x0000b3ae) title_pane_g3_ParamLimits

0xb3ae,	// (0x0000b3ae) title_pane_g3

0x1254,	// (0x00001254) set_value_pane_g1

0xc7db,	// (0x0000c7db) popup_toolbar_trans_pane_ParamLimits

0x7598,	// (0x00007598) aid_size_cell_tb_trans_pane_ParamLimits

0x1375,	// (0x00001375) bg_tb_trans_pane_ParamLimits

0x75aa,	// (0x000075aa) grid_tb_trans_pane_ParamLimits

0x0831,	// (0x00000831) cont_note_pane_ParamLimits

0x0831,	// (0x00000831) cont_note_pane

0x0b85,	// (0x00000b85) cont_snote2_single_text_pane_ParamLimits

0x0b85,	// (0x00000b85) cont_snote2_single_text_pane

0x0b85,	// (0x00000b85) cont_snote2_single_graphic_pane_ParamLimits

0x0b85,	// (0x00000b85) cont_snote2_single_graphic_pane

0x3ead,	// (0x00003ead) cont_note_wait_pane_ParamLimits

0x3ead,	// (0x00003ead) cont_note_wait_pane

0x3ead,	// (0x00003ead) cont_note_image_pane_ParamLimits

0x3ead,	// (0x00003ead) cont_note_image_pane

0x767e,	// (0x0000767e) popup_note2_window_g1_ParamLimits

0x767e,	// (0x0000767e) popup_note2_window_g1

0x76af,	// (0x000076af) popup_note2_window_t1_ParamLimits

0x76af,	// (0x000076af) popup_note2_window_t1

0x76f4,	// (0x000076f4) popup_note2_window_t2_ParamLimits

0x76f4,	// (0x000076f4) popup_note2_window_t2

0x7739,	// (0x00007739) popup_note2_window_t3_ParamLimits

0x7739,	// (0x00007739) popup_note2_window_t3

0x777e,	// (0x0000777e) popup_note2_window_t4_ParamLimits

0x777e,	// (0x0000777e) popup_note2_window_t4

0x08b5,	// (0x000008b5) popup_note2_window_t5_ParamLimits

0x08b5,	// (0x000008b5) popup_note2_window_t5

0x0004,

0xaf28,	// (0x0000af28) popup_note2_window_t_ParamLimits

0xaf28,	// (0x0000af28) popup_note2_window_t

0x77ad,	// (0x000077ad) popup_note2_image_window_g1_ParamLimits

0x77ad,	// (0x000077ad) popup_note2_image_window_g1

0x77b9,	// (0x000077b9) popup_note2_image_window_g2_ParamLimits

0x77b9,	// (0x000077b9) popup_note2_image_window_g2

0x0001,

0xaf33,	// (0x0000af33) popup_note2_image_window_g_ParamLimits

0xaf33,	// (0x0000af33) popup_note2_image_window_g

0x77cb,	// (0x000077cb) popup_note2_image_window_t1_ParamLimits

0x77cb,	// (0x000077cb) popup_note2_image_window_t1

0x77e3,	// (0x000077e3) popup_note2_image_window_t2_ParamLimits

0x77e3,	// (0x000077e3) popup_note2_image_window_t2

0x77fb,	// (0x000077fb) popup_note2_image_window_t3_ParamLimits

0x77fb,	// (0x000077fb) popup_note2_image_window_t3

0x0002,

0xaf38,	// (0x0000af38) popup_note2_image_window_t_ParamLimits

0xaf38,	// (0x0000af38) popup_note2_image_window_t

0x3ebb,	// (0x00003ebb) popup_note2_wait_window_g1_ParamLimits

0x3ebb,	// (0x00003ebb) popup_note2_wait_window_g1

0x7817,	// (0x00007817) popup_note2_wait_window_g2_ParamLimits

0x7817,	// (0x00007817) popup_note2_wait_window_g2

0x3ed3,	// (0x00003ed3) popup_note2_wait_window_g3_ParamLimits

0x3ed3,	// (0x00003ed3) popup_note2_wait_window_g3

0x0002,

0xaf3f,	// (0x0000af3f) popup_note2_wait_window_g_ParamLimits

0xaf3f,	// (0x0000af3f) popup_note2_wait_window_g

0x7823,	// (0x00007823) popup_note2_wait_window_t1_ParamLimits

0x7823,	// (0x00007823) popup_note2_wait_window_t1

0x7841,	// (0x00007841) popup_note2_wait_window_t2_ParamLimits

0x7841,	// (0x00007841) popup_note2_wait_window_t2

0x785f,	// (0x0000785f) popup_note2_wait_window_t3_ParamLimits

0x785f,	// (0x0000785f) popup_note2_wait_window_t3

0x7871,	// (0x00007871) popup_note2_wait_window_t4_ParamLimits

0x7871,	// (0x00007871) popup_note2_wait_window_t4

0x0003,

0xaf46,	// (0x0000af46) popup_note2_wait_window_t_ParamLimits

0xaf46,	// (0x0000af46) popup_note2_wait_window_t

0x7883,	// (0x00007883) wait_bar2_pane_ParamLimits

0x7883,	// (0x00007883) wait_bar2_pane

0x789b,	// (0x0000789b) popup_snote2_single_text_window_g1_ParamLimits

0x789b,	// (0x0000789b) popup_snote2_single_text_window_g1

0x78c3,	// (0x000078c3) popup_snote2_single_text_window_t1_ParamLimits

0x78c3,	// (0x000078c3) popup_snote2_single_text_window_t1

0x790f,	// (0x0000790f) popup_snote2_single_text_window_t2_ParamLimits

0x790f,	// (0x0000790f) popup_snote2_single_text_window_t2

0x795b,	// (0x0000795b) popup_snote2_single_text_window_t3_ParamLimits

0x795b,	// (0x0000795b) popup_snote2_single_text_window_t3

0x799c,	// (0x0000799c) popup_snote2_single_text_window_t4_ParamLimits

0x799c,	// (0x0000799c) popup_snote2_single_text_window_t4

0x79d2,	// (0x000079d2) popup_snote2_single_text_window_t5_ParamLimits

0x79d2,	// (0x000079d2) popup_snote2_single_text_window_t5

0x0004,

0xaf4f,	// (0x0000af4f) popup_snote2_single_text_window_t_ParamLimits

0xaf4f,	// (0x0000af4f) popup_snote2_single_text_window_t

0x79fd,	// (0x000079fd) popup_snote2_single_graphic_window_g1_ParamLimits

0x79fd,	// (0x000079fd) popup_snote2_single_graphic_window_g1

0x7a25,	// (0x00007a25) popup_snote2_single_graphic_window_g2_ParamLimits

0x7a25,	// (0x00007a25) popup_snote2_single_graphic_window_g2

0x0001,

0xaf5a,	// (0x0000af5a) popup_snote2_single_graphic_window_g_ParamLimits

0xaf5a,	// (0x0000af5a) popup_snote2_single_graphic_window_g

0x7a4d,	// (0x00007a4d) popup_snote2_single_graphic_window_t1_ParamLimits

0x7a4d,	// (0x00007a4d) popup_snote2_single_graphic_window_t1

0x7a99,	// (0x00007a99) popup_snote2_single_graphic_window_t2_ParamLimits

0x7a99,	// (0x00007a99) popup_snote2_single_graphic_window_t2

0x795b,	// (0x0000795b) popup_snote2_single_graphic_window_t3_ParamLimits

0x795b,	// (0x0000795b) popup_snote2_single_graphic_window_t3

0x799c,	// (0x0000799c) popup_snote2_single_graphic_window_t4_ParamLimits

0x799c,	// (0x0000799c) popup_snote2_single_graphic_window_t4

0x79d2,	// (0x000079d2) popup_snote2_single_graphic_window_t5_ParamLimits

0x79d2,	// (0x000079d2) popup_snote2_single_graphic_window_t5

0x0004,

0xaf5f,	// (0x0000af5f) popup_snote2_single_graphic_window_t_ParamLimits

0xaf5f,	// (0x0000af5f) popup_snote2_single_graphic_window_t

0x5e9c,	// (0x00005e9c) clock_nsta_pane_cp2_t1

0x5e9c,	// (0x00005e9c) clock_nsta_pane_cp2_t2

0x0001,

0xad7f,	// (0x0000ad7f) clock_nsta_pane_cp2_t

0x138f,	// (0x0000138f) form_field_data_wide_pane_g1_ParamLimits

0x139b,	// (0x0000139b) form_field_data_wide_pane_g2_ParamLimits

0x139b,	// (0x0000139b) form_field_data_wide_pane_g2

0x13a7,	// (0x000013a7) form_field_data_wide_pane_g3_ParamLimits

0x13a7,	// (0x000013a7) form_field_data_wide_pane_g3

0x0002,

0xa95d,	// (0x0000a95d) form_field_data_wide_pane_g_ParamLimits

0xa95d,	// (0x0000a95d) form_field_data_wide_pane_g

0xd3d9,	// (0x0000d3d9) grid_touch_3_pane_ParamLimits

0xd3d9,	// (0x0000d3d9) grid_touch_3_pane

0xd97a,	// (0x0000d97a) cell_touch_3_pane_ParamLimits

0xd97a,	// (0x0000d97a) cell_touch_3_pane

0x649a,	// (0x0000649a) cell_touch_3_pane_g1

0x649a,	// (0x0000649a) cell_touch_3_pane_g2

0x0001,

0xae04,	// (0x0000ae04) cell_touch_3_pane_g

0x08e7,	// (0x000008e7) cont_query_data_pane

0x08ef,	// (0x000008ef) cont_query_data_pane_cp1

0x7b13,	// (0x00007b13) button_value_adjust_pane_cp7

0x7b1b,	// (0x00007b1b) query_popup_pane_cp3

0x1e5f,	// (0x00001e5f) bg_popup_sub_pane_cp22_ParamLimits

0x1e75,	// (0x00001e75) navi_navi_volume_pane_cp2

0x1e90,	// (0x00001e90) popup_side_volume_key_window_g2

0x1e9f,	// (0x00001e9f) popup_side_volume_key_window_g3

0x0002,

0xa9ef,	// (0x0000a9ef) popup_side_volume_key_window_g

0x1ebc,	// (0x00001ebc) popup_side_volume_key_window_t2

0x0001,

0xa9f6,	// (0x0000a9f6) popup_side_volume_key_window_t

0x2343,	// (0x00002343) popup_side_volume_key_window_ParamLimits

0xb86e,	// (0x0000b86e) list_double_graphic_pane_g4_ParamLimits

0xb86e,	// (0x0000b86e) list_double_graphic_pane_g4

0xd23b,	// (0x0000d23b) list_single_2heading_msg_pane_ParamLimits

0xd23b,	// (0x0000d23b) list_single_2heading_msg_pane

0xd9c3,	// (0x0000d9c3) list_single_2heading_msg_pane_g1_ParamLimits

0xd9c3,	// (0x0000d9c3) list_single_2heading_msg_pane_g1

0xd9cf,	// (0x0000d9cf) list_single_2heading_msg_pane_g2_ParamLimits

0xd9cf,	// (0x0000d9cf) list_single_2heading_msg_pane_g2

0xd9e2,	// (0x0000d9e2) list_single_2heading_msg_pane_g3_ParamLimits

0xd9e2,	// (0x0000d9e2) list_single_2heading_msg_pane_g3

0xd9ee,	// (0x0000d9ee) list_single_2heading_msg_pane_g4_ParamLimits

0xd9ee,	// (0x0000d9ee) list_single_2heading_msg_pane_g4

0x0003,

0xf4ab,	// (0x0000f4ab) list_single_2heading_msg_pane_g_ParamLimits

0xf4ab,	// (0x0000f4ab) list_single_2heading_msg_pane_g

0xda06,	// (0x0000da06) list_single_2heading_msg_pane_t1_ParamLimits

0xda06,	// (0x0000da06) list_single_2heading_msg_pane_t1

0xda2e,	// (0x0000da2e) list_single_2heading_msg_pane_t2_ParamLimits

0xda2e,	// (0x0000da2e) list_single_2heading_msg_pane_t2

0xda99,	// (0x0000da99) list_single_2heading_msg_pane_t3_ParamLimits

0xda99,	// (0x0000da99) list_single_2heading_msg_pane_t3

0x7c0a,	// (0x00007c0a) list_single_2heading_msg_pane_t4_ParamLimits

0x7c0a,	// (0x00007c0a) list_single_2heading_msg_pane_t4

0x0003,

0xf4b4,	// (0x0000f4b4) list_single_2heading_msg_pane_t_ParamLimits

0xf4b4,	// (0x0000f4b4) list_single_2heading_msg_pane_t

0x0451,	// (0x00000451) title_pane_g4_ParamLimits

0x0451,	// (0x00000451) title_pane_g4

0x18c4,	// (0x000018c4) title_pane_stacon_g3_ParamLimits

0x18c4,	// (0x000018c4) title_pane_stacon_g3

0x7615,	// (0x00007615) list_single_2graphic_im_pane_g4_ParamLimits

0x7615,	// (0x00007615) list_single_2graphic_im_pane_g4

0x4a76,	// (0x00004a76) popup_side_volume_key_window_cp

0x54f2,	// (0x000054f2) main_idle_act2_pane_t1

0x36c4,	// (0x000036c4) toolbar_button_pane_g10

0xb71b,	// (0x0000b71b) popup_toolbar_window_cp1

0x5e8d,	// (0x00005e8d) clock_nsta_pane_cp_t1

0x5e8d,	// (0x00005e8d) clock_nsta_pane_cp_t2

0x0001,

0xad7a,	// (0x0000ad7a) clock_nsta_pane_cp_t

0x1e75,	// (0x00001e75) navi_navi_volume_pane_cp2_ParamLimits

0x1e84,	// (0x00001e84) popup_side_volume_key_window_g1_ParamLimits

0x1e90,	// (0x00001e90) popup_side_volume_key_window_g2_ParamLimits

0x1e9f,	// (0x00001e9f) popup_side_volume_key_window_g3_ParamLimits

0xa9ef,	// (0x0000a9ef) popup_side_volume_key_window_g_ParamLimits

0x6518,	// (0x00006518) fep_hwr_aid_pane

0x65bf,	// (0x000065bf) bg_fep_hwr_top_pane_g4_ParamLimits

0x65df,	// (0x000065df) fep_hwr_top_pane_g1_ParamLimits

0x65f1,	// (0x000065f1) fep_hwr_top_pane_g2_ParamLimits

0x6603,	// (0x00006603) fep_hwr_top_pane_g3_ParamLimits

0xadcf,	// (0x0000adcf) fep_hwr_top_pane_g_ParamLimits

0x6618,	// (0x00006618) fep_hwr_top_text_pane_ParamLimits

0x4839,	// (0x00004839) aid_touch_tab_arrow_arrow_2

0x4842,	// (0x00004842) aid_touch_tab_arrow_left_2

0x652c,	// (0x0000652c) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6563,	// (0x00006563) fep_hwr_prediction_pane

0x6890,	// (0x00006890) fep_vkb_prediction_pane

0xd749,	// (0x0000d749) fep_vkb_side_pane_g3_ParamLimits

0xd749,	// (0x0000d749) fep_vkb_side_pane_g3

0x6940,	// (0x00006940) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x700a,	// (0x0000700a) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7017,	// (0x00007017) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xae79,	// (0x0000ae79) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7c2f,	// (0x00007c2f) fep_hwr_prediction_pane_g1

0x7c39,	// (0x00007c39) fep_hwr_prediction_pane_g2

0x7c41,	// (0x00007c41) fep_hwr_prediction_pane_g3

0x7c49,	// (0x00007c49) fep_hwr_prediction_pane_g4

0x0003,

0xaf7c,	// (0x0000af7c) fep_hwr_prediction_pane_g

0x7c2f,	// (0x00007c2f) fep_vkb_prediction_pane_g1

0x7c51,	// (0x00007c51) fep_vkb_prediction_pane_g2

0x7c59,	// (0x00007c59) fep_vkb_prediction_pane_g3

0x7c61,	// (0x00007c61) fep_vkb_prediction_pane_g4

0x0003,

0xaf85,	// (0x0000af85) fep_vkb_prediction_pane_g

0x4de0,	// (0x00004de0) slider_set_pane_g3

0x4df4,	// (0x00004df4) slider_set_pane_g4

0x4e0c,	// (0x00004e0c) slider_set_pane_g5

0x4de0,	// (0x00004de0) slider_set_pane_g6

0x4e22,	// (0x00004e22) slider_set_pane_g7

0x4fdc,	// (0x00004fdc) slider_form_pane_g3

0x4fe5,	// (0x00004fe5) slider_form_pane_g4

0x4fed,	// (0x00004fed) slider_form_pane_g5

0x4fdc,	// (0x00004fdc) slider_form_pane_g6

0xd1e2,	// (0x0000d1e2) slider_form_pane_g7

0x57e0,	// (0x000057e0) slider_set_pane_vc_g3

0x57e9,	// (0x000057e9) slider_set_pane_vc_g4

0x57f2,	// (0x000057f2) slider_set_pane_vc_g5

0x57e0,	// (0x000057e0) slider_set_pane_vc_g6

0x57fb,	// (0x000057fb) slider_set_pane_vc_g7

0x57e0,	// (0x000057e0) slider_form_pane_vc_g1

0x57e9,	// (0x000057e9) slider_form_pane_vc_g2

0x57f2,	// (0x000057f2) slider_form_pane_vc_g3

0x57e0,	// (0x000057e0) slider_form_pane_vc_g4

0x5b93,	// (0x00005b93) slider_form_pane_vc_g5

0x0004,

0xad53,	// (0x0000ad53) slider_form_pane_vc_g

0x0024,	// (0x00000024) main_idle_act3_pane

0x7c69,	// (0x00007c69) ai3_links_pane

0xdb07,	// (0x0000db07) popup_ai3_data_window_ParamLimits

0xdb07,	// (0x0000db07) popup_ai3_data_window

0x0024,	// (0x00000024) grid_ai3_links_pane

0xdb21,	// (0x0000db21) cell_ai3_links_pane_ParamLimits

0xdb21,	// (0x0000db21) cell_ai3_links_pane

0x7ca4,	// (0x00007ca4) bg_popup_sub_pane_cp11

0x7cb1,	// (0x00007cb1) cell_ai3_links_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp12

0x7cd6,	// (0x00007cd6) heading_ai3_data_pane

0x7cde,	// (0x00007cde) list_ai3_gene_pane

0x7cea,	// (0x00007cea) popup_ai3_data_window_g1

0x7cf2,	// (0x00007cf2) heading_ai3_data_pane_g1

0x7cfa,	// (0x00007cfa) heading_ai3_data_pane_t1

0x7d08,	// (0x00007d08) list_double_ai3_gene_pane_ParamLimits

0x7d08,	// (0x00007d08) list_double_ai3_gene_pane

0x7d15,	// (0x00007d15) list_single_ai3_gene_pane_ParamLimits

0x7d15,	// (0x00007d15) list_single_ai3_gene_pane

0x645f,	// (0x0000645f) list_highlight_pane_cp7_ParamLimits

0x645f,	// (0x0000645f) list_highlight_pane_cp7

0x7d22,	// (0x00007d22) list_single_a13_gene_pane_t1_ParamLimits

0x7d22,	// (0x00007d22) list_single_a13_gene_pane_t1

0x7d39,	// (0x00007d39) list_single_ai3_gene_pane_g1

0x7d42,	// (0x00007d42) list_single_ai3_gene_pane_g2

0x0001,

0xaf8e,	// (0x0000af8e) list_single_ai3_gene_pane_g

0x7d4a,	// (0x00007d4a) list_double_ai3_gene_pane_g1_ParamLimits

0x7d4a,	// (0x00007d4a) list_double_ai3_gene_pane_g1

0x7d56,	// (0x00007d56) list_double_ai3_gene_pane_t1_ParamLimits

0x7d56,	// (0x00007d56) list_double_ai3_gene_pane_t1

0x7d72,	// (0x00007d72) list_double_ai3_gene_pane_t2_ParamLimits

0x7d72,	// (0x00007d72) list_double_ai3_gene_pane_t2

0x7d88,	// (0x00007d88) list_double_ai3_gene_pane_t3_ParamLimits

0x7d88,	// (0x00007d88) list_double_ai3_gene_pane_t3

0x0002,

0xaf93,	// (0x0000af93) list_double_ai3_gene_pane_t_ParamLimits

0xaf93,	// (0x0000af93) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7b2c,	// (0x00007b2c) aid_size_min_col_2

0xd9ad,	// (0x0000d9ad) aid_size_min_msg_ParamLimits

0xd9ad,	// (0x0000d9ad) aid_size_min_msg

0xd75d,	// (0x0000d75d) fep_vkb_top_text_pane_g2_ParamLimits

0xd75d,	// (0x0000d75d) fep_vkb_top_text_pane_g2

0x0001,

0xf48d,	// (0x0000f48d) fep_vkb_top_text_pane_g_ParamLimits

0xf48d,	// (0x0000f48d) fep_vkb_top_text_pane_g

0x0024,	// (0x00000024) main_hc_apps_shell_pane

0x7da5,	// (0x00007da5) grid_hc_apps_pane_ParamLimits

0x7da5,	// (0x00007da5) grid_hc_apps_pane

0x7db4,	// (0x00007db4) list_hc_apps_pane

0x7dbc,	// (0x00007dbc) scroll_pane_cp37_ParamLimits

0x7dbc,	// (0x00007dbc) scroll_pane_cp37

0xdb3b,	// (0x0000db3b) cell_hc_apps_pane_ParamLimits

0xdb3b,	// (0x0000db3b) cell_hc_apps_pane

0xdbf9,	// (0x0000dbf9) cell_hc_apps_pane_g1_ParamLimits

0xdbf9,	// (0x0000dbf9) cell_hc_apps_pane_g1

0x7ea7,	// (0x00007ea7) cell_hc_apps_pane_g2_ParamLimits

0x7ea7,	// (0x00007ea7) cell_hc_apps_pane_g2

0x7ec3,	// (0x00007ec3) cell_hc_apps_pane_g3_ParamLimits

0x7ec3,	// (0x00007ec3) cell_hc_apps_pane_g3

0x0002,

0xf4bd,	// (0x0000f4bd) cell_hc_apps_pane_g_ParamLimits

0xf4bd,	// (0x0000f4bd) cell_hc_apps_pane_g

0xdc26,	// (0x0000dc26) cell_hc_apps_pane_t1_ParamLimits

0xdc26,	// (0x0000dc26) cell_hc_apps_pane_t1

0x0831,	// (0x00000831) grid_highlight_pane_cp10_ParamLimits

0x0831,	// (0x00000831) grid_highlight_pane_cp10

0xdc64,	// (0x0000dc64) list_single_hc_apps_pane_ParamLimits

0xdc64,	// (0x0000dc64) list_single_hc_apps_pane

0xdc91,	// (0x0000dc91) list_single_hc_apps_pane_g1

0xdcaa,	// (0x0000dcaa) list_single_hc_apps_pane_g2

0x0001,

0xf4c4,	// (0x0000f4c4) list_single_hc_apps_pane_g

0xdcc3,	// (0x0000dcc3) list_single_hc_apps_pane_g2_copy1

0x7fcf,	// (0x00007fcf) list_single_hc_apps_pane_t1

0x04fd,	// (0x000004fd) bg_set_opt_pane_cp_ParamLimits

0x0547,	// (0x00000547) setting_slider_pane_t1_ParamLimits

0x0560,	// (0x00000560) setting_slider_pane_t2_ParamLimits

0x057a,	// (0x0000057a) setting_slider_pane_t3_ParamLimits

0xa845,	// (0x0000a845) setting_slider_pane_t_ParamLimits

0x0592,	// (0x00000592) slider_set_pane_ParamLimits

0x2985,	// (0x00002985) control_pane_g5_ParamLimits

0x2985,	// (0x00002985) control_pane_g5

0x4dc7,	// (0x00004dc7) slider_set_pane_g1_ParamLimits

0x4dd4,	// (0x00004dd4) slider_set_pane_g2_ParamLimits

0x4de0,	// (0x00004de0) slider_set_pane_g3_ParamLimits

0x4df4,	// (0x00004df4) slider_set_pane_g4_ParamLimits

0x4e0c,	// (0x00004e0c) slider_set_pane_g5_ParamLimits

0x4de0,	// (0x00004de0) slider_set_pane_g6_ParamLimits

0x4e22,	// (0x00004e22) slider_set_pane_g7_ParamLimits

0xac34,	// (0x0000ac34) slider_set_pane_g_ParamLimits

0x2424,	// (0x00002424) navi_icon_text_pane_ParamLimits

0xc868,	// (0x0000c868) aid_fill_nsta_2_ParamLimits

0xc89c,	// (0x0000c89c) aid_touch_tab_arrow_left_ParamLimits

0xc8b2,	// (0x0000c8b2) aid_touch_tab_arrow_right_ParamLimits

0xc94d,	// (0x0000c94d) clock_nsta_pane_ParamLimits

0xcfac,	// (0x0000cfac) navi_icon_pane_g1_ParamLimits

0xcfb8,	// (0x0000cfb8) navi_text_pane_t1_ParamLimits

0xd4a1,	// (0x0000d4a1) navi_icon_text_pane_g1_ParamLimits

0xd4ad,	// (0x0000d4ad) navi_icon_text_pane_t1_ParamLimits

0xdc91,	// (0x0000dc91) list_single_hc_apps_pane_g1_ParamLimits

0xdcaa,	// (0x0000dcaa) list_single_hc_apps_pane_g2_ParamLimits

0xf4c4,	// (0x0000f4c4) list_single_hc_apps_pane_g_ParamLimits

0xdcc3,	// (0x0000dcc3) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7fcf,	// (0x00007fcf) list_single_hc_apps_pane_t1_ParamLimits

0xb31a,	// (0x0000b31a) popup_toolbar2_fixed_window_ParamLimits

0xb31a,	// (0x0000b31a) popup_toolbar2_fixed_window

0xc7d1,	// (0x0000c7d1) popup_toolbar2_float_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp27

0x7ffd,	// (0x00007ffd) grid_toolbar2_float_pane

0x0024,	// (0x00000024) bg_popup_sub_pane_cp26

0x7ffd,	// (0x00007ffd) grid_toolbar2_fixed_pane

0xdcdf,	// (0x0000dcdf) cell_toolbar2_fixed_pane_ParamLimits

0xdcdf,	// (0x0000dcdf) cell_toolbar2_fixed_pane

0xdcfa,	// (0x0000dcfa) cell_toolbar2_fixed_pane_g1

0x801e,	// (0x0000801e) toolbar2_fixed_button_pane

0x367c,	// (0x0000367c) toolbar2_fixed_button_pane_g1

0x3684,	// (0x00003684) toolbar2_fixed_button_pane_g2

0x368c,	// (0x0000368c) toolbar2_fixed_button_pane_g3

0x3694,	// (0x00003694) toolbar2_fixed_button_pane_g4

0x369c,	// (0x0000369c) toolbar2_fixed_button_pane_g5

0x36a4,	// (0x000036a4) toolbar2_fixed_button_pane_g6

0x36ac,	// (0x000036ac) toolbar2_fixed_button_pane_g7

0x36b4,	// (0x000036b4) toolbar2_fixed_button_pane_g8

0x36bc,	// (0x000036bc) toolbar2_fixed_button_pane_g9

0x0008,

0xab36,	// (0x0000ab36) toolbar2_fixed_button_pane_g

0x8026,	// (0x00008026) cell_toolbar2_float_pane_ParamLimits

0x8026,	// (0x00008026) cell_toolbar2_float_pane

0x8037,	// (0x00008037) cell_toolbar2_float_pane_g1

0x801e,	// (0x0000801e) toolbar2_fixed_button_pane_cp

0xd637,	// (0x0000d637) fep_vkb_accented_list_pane_ParamLimits

0xd637,	// (0x0000d637) fep_vkb_accented_list_pane

0x6c87,	// (0x00006c87) bg_popup_fep_shadow_pane_g9

0x25a4,	// (0x000025a4) bg_popup_fep_shadow_pane_cp3

0x1653,	// (0x00001653) list_accented_list_pane

0x8040,	// (0x00008040) list_single_accented_list_pane_ParamLimits

0x8040,	// (0x00008040) list_single_accented_list_pane

0x25a4,	// (0x000025a4) list_highlight_pane_cp10

0x8051,	// (0x00008051) list_single_accented_list_pane_t1

0xc6fb,	// (0x0000c6fb) popup_slider_window_ParamLimits

0xc6fb,	// (0x0000c6fb) popup_slider_window

0x7b23,	// (0x00007b23) aid_indentation_list_msg

0xddf3,	// (0x0000ddf3) bg_popup_window_pane_cp19

0x8175,	// (0x00008175) popup_slider_window_g1

0x8191,	// (0x00008191) popup_slider_window_g2

0x81ad,	// (0x000081ad) popup_slider_window_g3

0x0005,

0xf4c9,	// (0x0000f4c9) popup_slider_window_g

0x8209,	// (0x00008209) popup_slider_window_t1

0x827d,	// (0x0000827d) small_volume_slider_vertical_pane

0x649a,	// (0x0000649a) small_volume_slider_vertical_pane_g1

0x649a,	// (0x0000649a) small_volume_slider_vertical_pane_g2

0x8299,	// (0x00008299) small_volume_slider_vertical_pane_g3

0x0002,

0xafb8,	// (0x0000afb8) small_volume_slider_vertical_pane_g

0xb288,	// (0x0000b288) area_side_right_pane_ParamLimits

0xb288,	// (0x0000b288) area_side_right_pane

0xdeab,	// (0x0000deab) aid_size_side_button_ParamLimits

0xdeab,	// (0x0000deab) aid_size_side_button

0xdec4,	// (0x0000dec4) grid_sctrl_middle_pane_ParamLimits

0xdec4,	// (0x0000dec4) grid_sctrl_middle_pane

0x82d6,	// (0x000082d6) sctrl_sk_bottom_pane

0x82e7,	// (0x000082e7) sctrl_sk_top_pane

0x82f9,	// (0x000082f9) aid_touch_sctrl_top

0x0831,	// (0x00000831) bg_sctrl_sk_pane_ParamLimits

0x0831,	// (0x00000831) bg_sctrl_sk_pane

0x8306,	// (0x00008306) sctrl_sk_top_pane_g1

0x8313,	// (0x00008313) sctrl_sk_top_pane_t1

0x82f9,	// (0x000082f9) aid_touch_sctrl_bottom

0x0831,	// (0x00000831) bg_sctrl_sk_pane_cp_ParamLimits

0x0831,	// (0x00000831) bg_sctrl_sk_pane_cp

0x832e,	// (0x0000832e) sctrl_sk_bottom_pane_g1

0x8313,	// (0x00008313) sctrl_sk_bottom_pane_t1

0xdede,	// (0x0000dede) cell_sctrl_middle_pane_ParamLimits

0xdede,	// (0x0000dede) cell_sctrl_middle_pane

0xdeef,	// (0x0000deef) aid_touch_sctrl_middle_ParamLimits

0xdeef,	// (0x0000deef) aid_touch_sctrl_middle

0xdefc,	// (0x0000defc) bg_sctrl_middle_pane_ParamLimits

0xdefc,	// (0x0000defc) bg_sctrl_middle_pane

0x83f6,	// (0x000083f6) cell_sctrl_middle_pane_g1_ParamLimits

0x83f6,	// (0x000083f6) cell_sctrl_middle_pane_g1

0xdf0a,	// (0x0000df0a) cell_sctrl_middle_pane_g2_ParamLimits

0xdf0a,	// (0x0000df0a) cell_sctrl_middle_pane_g2

0x0001,

0xf4d6,	// (0x0000f4d6) cell_sctrl_middle_pane_g_ParamLimits

0xf4d6,	// (0x0000f4d6) cell_sctrl_middle_pane_g

0x367c,	// (0x0000367c) bg_sctrl_middle_pane_g1

0x3684,	// (0x00003684) bg_sctrl_middle_pane_g2

0x368c,	// (0x0000368c) bg_sctrl_middle_pane_g3

0x3694,	// (0x00003694) bg_sctrl_middle_pane_g4

0x369c,	// (0x0000369c) bg_sctrl_middle_pane_g5

0x36a4,	// (0x000036a4) bg_sctrl_middle_pane_g6

0x36ac,	// (0x000036ac) bg_sctrl_middle_pane_g7

0x36b4,	// (0x000036b4) bg_sctrl_middle_pane_g8

0x0007,

0xafc9,	// (0x0000afc9) bg_sctrl_middle_pane_g

0x36bc,	// (0x000036bc) bg_sctrl_middle_pane_g8_copy1

0x367c,	// (0x0000367c) bg_sctrl_sk_pane_g1

0x3684,	// (0x00003684) bg_sctrl_sk_pane_g2

0x368c,	// (0x0000368c) bg_sctrl_sk_pane_g3

0x0008,

0xab36,	// (0x0000ab36) bg_sctrl_sk_pane_g

0x0d43,	// (0x00000d43) aid_size_touch_scroll_bar

0x3694,	// (0x00003694) bg_sctrl_sk_pane_g4

0x369c,	// (0x0000369c) bg_sctrl_sk_pane_g5

0x36a4,	// (0x000036a4) bg_sctrl_sk_pane_g6

0x36ac,	// (0x000036ac) bg_sctrl_sk_pane_g7

0x36b4,	// (0x000036b4) bg_sctrl_sk_pane_g8

0x36bc,	// (0x000036bc) bg_sctrl_sk_pane_g9

0x2bd4,	// (0x00002bd4) popup_fep_china_hwr2_fs_candidate_window

0xc23f,	// (0x0000c23f) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc23f,	// (0x0000c23f) popup_fep_china_hwr2_fs_control_window

0x6940,	// (0x00006940) sctrl_sk_top_pane_g2

0x0001,

0xafbf,	// (0x0000afbf) sctrl_sk_top_pane_g

0xdf16,	// (0x0000df16) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdf16,	// (0x0000df16) aid_fep_china_hwr2_fs_cell

0xdf2a,	// (0x0000df2a) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdf2a,	// (0x0000df2a) bg_popup_fep_shadow_pane_cp4

0xdf41,	// (0x0000df41) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdf41,	// (0x0000df41) bg_popup_fep_shadow_pane_cp5

0xdf53,	// (0x0000df53) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdf53,	// (0x0000df53) popup_fep_china_hwr2_fs_control_bar_grid

0xdf67,	// (0x0000df67) popup_fep_china_hwr2_fs_control_funtion_grid

0x83ca,	// (0x000083ca) aid_fep_china_hwr2_fs_candi_cell

0x0024,	// (0x00000024) bg_popup_fep_shadow_pane_cp6

0x83d4,	// (0x000083d4) popup_fep_china_hwr2_fs_candidate_grid

0xdf6f,	// (0x0000df6f) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdf6f,	// (0x0000df6f) cell_fep_china_hwr2_fs_funtion_grid

0x649a,	// (0x0000649a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x83f6,	// (0x000083f6) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x83f6,	// (0x000083f6) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8404,	// (0x00008404) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8404,	// (0x00008404) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xafda,	// (0x0000afda) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xafda,	// (0x0000afda) cell_fep_china_hwr2_fs_funtion_grid_g

0xdf87,	// (0x0000df87) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdf87,	// (0x0000df87) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdf9c,	// (0x0000df9c) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdf9c,	// (0x0000df9c) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xf4db,	// (0x0000f4db) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xf4db,	// (0x0000f4db) cell_fep_china_hwr2_fs_funtion_grid_t

0x844b,	// (0x0000844b) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8453,	// (0x00008453) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x845b,	// (0x0000845b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xafe4,	// (0x0000afe4) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8463,	// (0x00008463) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8463,	// (0x00008463) cell_fep_china_hwr2_fs_candidate_grid

0x847c,	// (0x0000847c) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8484,	// (0x00008484) popup_fep_china_hwr2_fs_candidate_grid_g21

0x649a,	// (0x0000649a) cell_fep_china_hwr2_fs_candidate_grid_g1

0x649a,	// (0x0000649a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xae04,	// (0x0000ae04) cell_fep_china_hwr2_fs_candidate_grid_g

0x848c,	// (0x0000848c) cell_fep_china_hwr2_fs_candidate_grid_t1

0x31c7,	// (0x000031c7) clock_nsta_pane_cp_24_ParamLimits

0x31c7,	// (0x000031c7) clock_nsta_pane_cp_24

0x3245,	// (0x00003245) indicator_nsta_pane_cp_24_ParamLimits

0x3245,	// (0x00003245) indicator_nsta_pane_cp_24

0x4680,	// (0x00004680) heading_pane_g1

0x0001,

0xab9b,	// (0x0000ab9b) heading_pane_g

0x5283,	// (0x00005283) grid_sct_catagory_button_pane

0x52b3,	// (0x000052b3) scroll_pane_cp5_ParamLimits

0x603c,	// (0x0000603c) button_value_adjust_pane_cp5_ParamLimits

0x603c,	// (0x0000603c) button_value_adjust_pane_cp5

0x6138,	// (0x00006138) form2_midp_time_pane_ParamLimits

0x849a,	// (0x0000849a) cell_sct_catagory_button_pane_ParamLimits

0x849a,	// (0x0000849a) cell_sct_catagory_button_pane

0x645f,	// (0x0000645f) bg_button_pane_cp01_ParamLimits

0x645f,	// (0x0000645f) bg_button_pane_cp01

0x649a,	// (0x0000649a) cell_sct_catagory_button_pane_g1

0xc774,	// (0x0000c774) popup_tb_extension_window

0xdfb8,	// (0x0000dfb8) aid_size_cell_ext_ParamLimits

0xdfb8,	// (0x0000dfb8) aid_size_cell_ext

0x0b85,	// (0x00000b85) bg_tb_trans_pane_cp1_ParamLimits

0x0b85,	// (0x00000b85) bg_tb_trans_pane_cp1

0xdfde,	// (0x0000dfde) grid_tb_ext_pane_ParamLimits

0xdfde,	// (0x0000dfde) grid_tb_ext_pane

0xe019,	// (0x0000e019) cell_tb_ext_pane_ParamLimits

0xe019,	// (0x0000e019) cell_tb_ext_pane

0xe041,	// (0x0000e041) cell_tb_ext_pane_g1_ParamLimits

0xe041,	// (0x0000e041) cell_tb_ext_pane_g1

0x852e,	// (0x0000852e) cell_tb_ext_pane_t1

0x0831,	// (0x00000831) list_highlight_pane_cp11_ParamLimits

0x0831,	// (0x00000831) list_highlight_pane_cp11

0x0362,	// (0x00000362) popup_uni_indicator_window_ParamLimits

0x0362,	// (0x00000362) popup_uni_indicator_window

0x1375,	// (0x00001375) bg_popup_sub_pane_cp14

0x8549,	// (0x00008549) list_uniindi_pane

0x8555,	// (0x00008555) uniindi_top_pane

0x0831,	// (0x00000831) bg_uniindi_top_pane

0x8574,	// (0x00008574) uniindi_top_pane_g1

0x858a,	// (0x0000858a) uniindi_top_pane_g2

0x0003,

0xafeb,	// (0x0000afeb) uniindi_top_pane_g

0x85b4,	// (0x000085b4) uniindi_top_pane_t1

0x85de,	// (0x000085de) list_single_uniindi_pane_ParamLimits

0x85de,	// (0x000085de) list_single_uniindi_pane

0x649a,	// (0x0000649a) bg_uniindi_top_pane_g1

0x85f1,	// (0x000085f1) list_single_uniindi_pane_g1

0x8604,	// (0x00008604) list_single_uniindi_pane_t1

0x0024,	// (0x00000024) control_bg_pane

0x8629,	// (0x00008629) bg_sctrl_sk_pane_cp1

0x8632,	// (0x00008632) bg_sctrl_sk_pane_cp2

0x863b,	// (0x0000863b) control_bg_pane_g1

0x8644,	// (0x00008644) control_bg_pane_g2

0x0001,

0xaff4,	// (0x0000aff4) control_bg_pane_g

0x5e1f,	// (0x00005e1f) cell_indicator_nsta_pane_g1_ParamLimits

0xd408,	// (0x0000d408) cell_indicator_nsta_pane_g2_ParamLimits

0xf458,	// (0x0000f458) cell_indicator_nsta_pane_g_ParamLimits

0x61c0,	// (0x000061c0) form2_midp_time_pane_t1_ParamLimits

0x650a,	// (0x0000650a) main_idle_act4_pane_ParamLimits

0x650a,	// (0x0000650a) main_idle_act4_pane

0xc774,	// (0x0000c774) popup_tb_extension_window_ParamLimits

0xe000,	// (0x0000e000) tb_ext_find_pane_ParamLimits

0xe000,	// (0x0000e000) tb_ext_find_pane

0x864d,	// (0x0000864d) ai_gene_pane_1_cp1

0x26e9,	// (0x000026e9) ai_gene_pane_2_cp1

0x8655,	// (0x00008655) list_single_idle_plugin_calendar_pane

0x865e,	// (0x0000865e) list_single_idle_plugin_notification_pane

0x8667,	// (0x00008667) list_single_idle_plugin_player_pane

0xe05e,	// (0x0000e05e) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe05e,	// (0x0000e05e) list_single_idle_plugin_shortcut_pane

0xe086,	// (0x0000e086) main_idle_act4_pane_t1

0xe09c,	// (0x0000e09c) main_idle_act4_pane_t2

0x0001,

0xf4e0,	// (0x0000f4e0) main_idle_act4_pane_t

0xe0b2,	// (0x0000e0b2) middle_sk_idle_act4_pane_ParamLimits

0xe0b2,	// (0x0000e0b2) middle_sk_idle_act4_pane

0xe0ce,	// (0x0000e0ce) popup_clock_digital_analogue_window_cp2

0xe0f6,	// (0x0000e0f6) shortcut_wheel_idle_act4_pane_ParamLimits

0xe0f6,	// (0x0000e0f6) shortcut_wheel_idle_act4_pane

0x649a,	// (0x0000649a) shortcut_wheel_idle_act4_pane_g1

0x649a,	// (0x0000649a) shortcut_wheel_idle_act4_pane_g2

0x649a,	// (0x0000649a) shortcut_wheel_idle_act4_pane_g3

0x649a,	// (0x0000649a) shortcut_wheel_idle_act4_pane_g4

0x649a,	// (0x0000649a) shortcut_wheel_idle_act4_pane_g5

0x86fa,	// (0x000086fa) shortcut_wheel_idle_act4_pane_g6

0x8702,	// (0x00008702) shortcut_wheel_idle_act4_pane_g7

0x870a,	// (0x0000870a) shortcut_wheel_idle_act4_pane_g8

0x8712,	// (0x00008712) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xaffe,	// (0x0000affe) shortcut_wheel_idle_act4_pane_g

0x65bf,	// (0x000065bf) middle_sk_idle_act4_pane_g1_ParamLimits

0x65bf,	// (0x000065bf) middle_sk_idle_act4_pane_g1

0xe173,	// (0x0000e173) middle_sk_idle_act4_pane_g2_ParamLimits

0xe173,	// (0x0000e173) middle_sk_idle_act4_pane_g2

0x0001,

0xf4f5,	// (0x0000f4f5) middle_sk_idle_act4_pane_g_ParamLimits

0xf4f5,	// (0x0000f4f5) middle_sk_idle_act4_pane_g

0xe18b,	// (0x0000e18b) middle_sk_idle_act4_pane_t1_ParamLimits

0xe18b,	// (0x0000e18b) middle_sk_idle_act4_pane_t1

0xe1ba,	// (0x0000e1ba) grid_ai_shortcut_pane_ParamLimits

0xe1ba,	// (0x0000e1ba) grid_ai_shortcut_pane

0xe1d7,	// (0x0000e1d7) list_highlight_pane_cp16_ParamLimits

0xe1d7,	// (0x0000e1d7) list_highlight_pane_cp16

0xe1e4,	// (0x0000e1e4) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe1e4,	// (0x0000e1e4) list_single_idle_plugin_shortcut_pane_g1

0xe1f0,	// (0x0000e1f0) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe1f0,	// (0x0000e1f0) list_single_idle_plugin_shortcut_pane_g2

0xe20c,	// (0x0000e20c) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe20c,	// (0x0000e20c) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xf4fa,	// (0x0000f4fa) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xf4fa,	// (0x0000f4fa) list_single_idle_plugin_shortcut_pane_g

0xe221,	// (0x0000e221) cell_ai_shortcut_pane_ParamLimits

0xe221,	// (0x0000e221) cell_ai_shortcut_pane

0xe237,	// (0x0000e237) cell_ai_shortcut_pane_g1_ParamLimits

0xe237,	// (0x0000e237) cell_ai_shortcut_pane_g1

0x864d,	// (0x0000864d) ai_gene_pane_1_cp2

0x8842,	// (0x00008842) ai_gene_pane_2_cp2

0x884a,	// (0x0000884a) list_highlight_pane_cp15

0x8853,	// (0x00008853) list_single_idle_plugin_calendar_pane_g1

0x884a,	// (0x0000884a) list_highlight_pane_cp17

0x885b,	// (0x0000885b) list_single_idle_plugin_calendar_pane_g1_copy1

0x8863,	// (0x00008863) list_single_idle_plugin_player_pane_g1

0x5594,	// (0x00005594) list_single_idle_plugin_player_pane_g2

0x0001,

0xb02d,	// (0x0000b02d) list_single_idle_plugin_player_pane_g

0x886b,	// (0x0000886b) list_single_idle_plugin_player_pane_t1

0x8879,	// (0x00008879) list_single_idle_plugin_player_pane_t2

0x8887,	// (0x00008887) list_single_idle_plugin_player_pane_t3

0x8895,	// (0x00008895) list_single_idle_plugin_player_pane_t4

0x0003,

0xb032,	// (0x0000b032) list_single_idle_plugin_player_pane_t

0x88a3,	// (0x000088a3) wait_bar_pane_cp15

0x88ab,	// (0x000088ab) grid_ai_notification_pane

0x5594,	// (0x00005594) list_single_idle_plugin_notification_pane_g1

0xe259,	// (0x0000e259) cell_ai_notification_pane_ParamLimits

0xe259,	// (0x0000e259) cell_ai_notification_pane

0x88c1,	// (0x000088c1) cell_ai_notification_pane_g1

0x88c9,	// (0x000088c9) cell_ai_notification_pane_t1

0xe266,	// (0x0000e266) tb_ext_find_button_pane

0xe26e,	// (0x0000e26e) tb_ext_find_pane_g1

0xe276,	// (0x0000e276) tb_ext_find_pane_t1

0x1d20,	// (0x00001d20) tb_ext_find_button_pane_g1

0x88f5,	// (0x000088f5) tb_ext_find_button_pane_g2

0x0001,

0xb03b,	// (0x0000b03b) tb_ext_find_button_pane_g

0xe086,	// (0x0000e086) main_idle_act4_pane_t1_ParamLimits

0xe09c,	// (0x0000e09c) main_idle_act4_pane_t2_ParamLimits

0xf4e0,	// (0x0000f4e0) main_idle_act4_pane_t_ParamLimits

0xe0ce,	// (0x0000e0ce) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe0e6,	// (0x0000e0e6) sat_plugin_idle_act4_pane_ParamLimits

0xe0e6,	// (0x0000e0e6) sat_plugin_idle_act4_pane

0xe284,	// (0x0000e284) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe284,	// (0x0000e284) sat_plugin_idle_act4_pane_t1

0xe29c,	// (0x0000e29c) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe29c,	// (0x0000e29c) sat_plugin_idle_act4_pane_t2

0xe2b4,	// (0x0000e2b4) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe2b4,	// (0x0000e2b4) sat_plugin_idle_act4_pane_t3

0xe2cc,	// (0x0000e2cc) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe2cc,	// (0x0000e2cc) sat_plugin_idle_act4_pane_t4

0x0003,

0xf501,	// (0x0000f501) sat_plugin_idle_act4_pane_t_ParamLimits

0xf501,	// (0x0000f501) sat_plugin_idle_act4_pane_t

0x029d,	// (0x0000029d) popup_battery_window_ParamLimits

0x029d,	// (0x0000029d) popup_battery_window

0x0831,	// (0x00000831) bg_popup_sub_pane_cp25_ParamLimits

0x0831,	// (0x00000831) bg_popup_sub_pane_cp25

0x894a,	// (0x0000894a) popup_battery_window_g1_ParamLimits

0x894a,	// (0x0000894a) popup_battery_window_g1

0x8956,	// (0x00008956) popup_battery_window_t1_ParamLimits

0x8956,	// (0x00008956) popup_battery_window_t1

0x8968,	// (0x00008968) popup_battery_window_t2_ParamLimits

0x8968,	// (0x00008968) popup_battery_window_t2

0x0001,

0xb049,	// (0x0000b049) popup_battery_window_t_ParamLimits

0xb049,	// (0x0000b049) popup_battery_window_t

0xbf80,	// (0x0000bf80) midp_canvas_pane_ParamLimits

0xbfdb,	// (0x0000bfdb) midp_keypad_pane_ParamLimits

0xbfdb,	// (0x0000bfdb) midp_keypad_pane

0x2b2c,	// (0x00002b2c) main_midp_pane_ParamLimits

0x5eab,	// (0x00005eab) signal_pane_g2_cp_ParamLimits

0xe2e4,	// (0x0000e2e4) aid_size_cell_midp_keypad_ParamLimits

0xe2e4,	// (0x0000e2e4) aid_size_cell_midp_keypad

0xe302,	// (0x0000e302) midp_keyp_game_grid_pane_ParamLimits

0xe302,	// (0x0000e302) midp_keyp_game_grid_pane

0xe329,	// (0x0000e329) midp_keyp_rocker_pane_ParamLimits

0xe329,	// (0x0000e329) midp_keyp_rocker_pane

0xe382,	// (0x0000e382) midp_keyp_sk_left_pane_ParamLimits

0xe382,	// (0x0000e382) midp_keyp_sk_left_pane

0xe3d6,	// (0x0000e3d6) midp_keyp_sk_right_pane_ParamLimits

0xe3d6,	// (0x0000e3d6) midp_keyp_sk_right_pane

0x0024,	// (0x00000024) bg_button_pane_cp03

0xe42a,	// (0x0000e42a) midp_keyp_sk_left_pane_g1

0x0024,	// (0x00000024) bg_button_pane_cp04

0xe42a,	// (0x0000e42a) midp_keyp_sk_right_pane_g1

0x649a,	// (0x0000649a) midp_keyp_rocker_pane_g1

0xe433,	// (0x0000e433) keyp_game_cell_pane_ParamLimits

0xe433,	// (0x0000e433) keyp_game_cell_pane

0x0024,	// (0x00000024) bg_button_pane_cp02

0xe457,	// (0x0000e457) keyp_game_cell_pane_g1

0xb2ca,	// (0x0000b2ca) popup_fep_vkb2_window_ParamLimits

0xb2ca,	// (0x0000b2ca) popup_fep_vkb2_window

0xe460,	// (0x0000e460) aid_size_cell_vkb2_ParamLimits

0xe460,	// (0x0000e460) aid_size_cell_vkb2

0xe496,	// (0x0000e496) popup_fep_vkb2_window_g1_ParamLimits

0xe496,	// (0x0000e496) popup_fep_vkb2_window_g1

0xe4e6,	// (0x0000e4e6) vkb2_area_bottom_pane_ParamLimits

0xe4e6,	// (0x0000e4e6) vkb2_area_bottom_pane

0xe53a,	// (0x0000e53a) vkb2_area_keypad_pane_ParamLimits

0xe53a,	// (0x0000e53a) vkb2_area_keypad_pane

0xe582,	// (0x0000e582) vkb2_area_top_pane_ParamLimits

0xe582,	// (0x0000e582) vkb2_area_top_pane

0xe608,	// (0x0000e608) vkb2_top_entry_pane_ParamLimits

0xe608,	// (0x0000e608) vkb2_top_entry_pane

0xe635,	// (0x0000e635) vkb2_top_grid_left_pane_ParamLimits

0xe635,	// (0x0000e635) vkb2_top_grid_left_pane

0xe655,	// (0x0000e655) vkb2_top_grid_right_pane_ParamLimits

0xe655,	// (0x0000e655) vkb2_top_grid_right_pane

0x8ce9,	// (0x00008ce9) vkb2_cell_keypad_pane_ParamLimits

0x8ce9,	// (0x00008ce9) vkb2_cell_keypad_pane

0xe69b,	// (0x0000e69b) vkb2_area_bottom_grid_pane_ParamLimits

0xe69b,	// (0x0000e69b) vkb2_area_bottom_grid_pane

0xe6c5,	// (0x0000e6c5) vkb2_area_bottom_pane_g1_ParamLimits

0xe6c5,	// (0x0000e6c5) vkb2_area_bottom_pane_g1

0xe6eb,	// (0x0000e6eb) vkb2_area_bottom_pane_g2_ParamLimits

0xe6eb,	// (0x0000e6eb) vkb2_area_bottom_pane_g2

0xe71c,	// (0x0000e71c) vkb2_area_bottom_pane_g3_ParamLimits

0xe71c,	// (0x0000e71c) vkb2_area_bottom_pane_g3

0x0002,

0xf50a,	// (0x0000f50a) vkb2_area_bottom_pane_g_ParamLimits

0xf50a,	// (0x0000f50a) vkb2_area_bottom_pane_g

0x8e93,	// (0x00008e93) vkb2_top_cell_left_pane_ParamLimits

0x8e93,	// (0x00008e93) vkb2_top_cell_left_pane

0xe786,	// (0x0000e786) vkb2_top_entry_pane_g1_ParamLimits

0xe786,	// (0x0000e786) vkb2_top_entry_pane_g1

0xe794,	// (0x0000e794) vkb2_top_entry_pane_t1_ParamLimits

0xe794,	// (0x0000e794) vkb2_top_entry_pane_t1

0x8efb,	// (0x00008efb) vkb2_top_entry_pane_t2_ParamLimits

0x8efb,	// (0x00008efb) vkb2_top_entry_pane_t2

0x8f2d,	// (0x00008f2d) vkb2_top_entry_pane_t3_ParamLimits

0x8f2d,	// (0x00008f2d) vkb2_top_entry_pane_t3

0x0002,

0xf511,	// (0x0000f511) vkb2_top_entry_pane_t_ParamLimits

0xf511,	// (0x0000f511) vkb2_top_entry_pane_t

0xe7cd,	// (0x0000e7cd) vkb2_top_grid_right_pane_g1_ParamLimits

0xe7cd,	// (0x0000e7cd) vkb2_top_grid_right_pane_g1

0x8f94,	// (0x00008f94) vkb2_top_grid_right_pane_g2_ParamLimits

0x8f94,	// (0x00008f94) vkb2_top_grid_right_pane_g2

0x8fac,	// (0x00008fac) vkb2_top_grid_right_pane_g3_ParamLimits

0x8fac,	// (0x00008fac) vkb2_top_grid_right_pane_g3

0xe7e3,	// (0x0000e7e3) vkb2_top_grid_right_pane_g4_ParamLimits

0xe7e3,	// (0x0000e7e3) vkb2_top_grid_right_pane_g4

0x0003,

0xf518,	// (0x0000f518) vkb2_top_grid_right_pane_g_ParamLimits

0xf518,	// (0x0000f518) vkb2_top_grid_right_pane_g

0x8fda,	// (0x00008fda) vkb2_top_cell_left_pane_g1

0x8ff1,	// (0x00008ff1) vkb2_cell_keypad_pane_g1_ParamLimits

0x8ff1,	// (0x00008ff1) vkb2_cell_keypad_pane_g1

0x8fff,	// (0x00008fff) vkb2_cell_keypad_pane_t1_ParamLimits

0x8fff,	// (0x00008fff) vkb2_cell_keypad_pane_t1

0x9016,	// (0x00009016) vkb2_cell_bottom_grid_pane_ParamLimits

0x9016,	// (0x00009016) vkb2_cell_bottom_grid_pane

0x904f,	// (0x0000904f) vkb2_cell_bottom_grid_pane_g1

0xe117,	// (0x0000e117) aid_call2_pane_cp02

0xe11f,	// (0x0000e11f) aid_call_pane_cp02

0xe127,	// (0x0000e127) clock_digital_number_pane_cp10

0xe12f,	// (0x0000e12f) clock_digital_number_pane_cp11

0xe137,	// (0x0000e137) clock_digital_number_pane_cp12

0xe13f,	// (0x0000e13f) clock_digital_number_pane_cp13

0xe147,	// (0x0000e147) clock_digital_separator_pane_cp10

0x1d20,	// (0x00001d20) popup_clock_digital_analogue_window_cp2_g1

0x1d20,	// (0x00001d20) popup_clock_digital_analogue_window_cp2_g2

0xe14f,	// (0x0000e14f) popup_clock_digital_analogue_window_cp2_g3

0x1d20,	// (0x00001d20) popup_clock_digital_analogue_window_cp2_g4

0xe14f,	// (0x0000e14f) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xf4e5,	// (0x0000f4e5) popup_clock_digital_analogue_window_cp2_g

0xe157,	// (0x0000e157) popup_clock_digital_analogue_window_cp2_t1

0xe165,	// (0x0000e165) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xf4f0,	// (0x0000f4f0) popup_clock_digital_analogue_window_cp2_t

0x649a,	// (0x0000649a) clock_digital_number_pane_cp10_g1

0x649a,	// (0x0000649a) clock_digital_number_pane_cp10_g2

0x0001,

0xae04,	// (0x0000ae04) clock_digital_number_pane_cp10_g

0x649a,	// (0x0000649a) clock_digital_separator_pane_cp10_g1

0x649a,	// (0x0000649a) clock_digital_separator_pane_cp10_g2

0x0001,

0xae04,	// (0x0000ae04) clock_digital_separator_pane_cp10_g

0x8596,	// (0x00008596) uniindi_top_pane_g3

0x85a7,	// (0x000085a7) uniindi_top_pane_g4

0x8d74,	// (0x00008d74) vkb2_row_keypad_pane_ParamLimits

0x8d74,	// (0x00008d74) vkb2_row_keypad_pane

0x906b,	// (0x0000906b) vkb2_cell_t_keypad_pane_ParamLimits

0x906b,	// (0x0000906b) vkb2_cell_t_keypad_pane

0x907b,	// (0x0000907b) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x907b,	// (0x0000907b) vkb2_cell_t_keypad_pane_cp08

0x908e,	// (0x0000908e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x908e,	// (0x0000908e) vkb2_cell_t_keypad_pane_cp09

0x90a2,	// (0x000090a2) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x90a2,	// (0x000090a2) vkb2_cell_t_keypad_pane_cp01

0x90b3,	// (0x000090b3) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x90b3,	// (0x000090b3) vkb2_cell_t_keypad_pane_cp02

0x90c4,	// (0x000090c4) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x90c4,	// (0x000090c4) vkb2_cell_t_keypad_pane_cp03

0x90d5,	// (0x000090d5) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x90d5,	// (0x000090d5) vkb2_cell_t_keypad_pane_cp04

0x90e6,	// (0x000090e6) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x90e6,	// (0x000090e6) vkb2_cell_t_keypad_pane_cp05

0x90f7,	// (0x000090f7) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x90f7,	// (0x000090f7) vkb2_cell_t_keypad_pane_cp06

0x9108,	// (0x00009108) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x9108,	// (0x00009108) vkb2_cell_t_keypad_pane_cp07

0x9119,	// (0x00009119) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9119,	// (0x00009119) vkb2_cell_t_keypad_pane_cp10

0x6940,	// (0x00006940) vkb2_cell_t_keypad_pane_g1

0x912e,	// (0x0000912e) vkb2_cell_t_keypad_pane_t1

0x0024,	// (0x00000024) popup_grid_graphic2_window

0xe7f9,	// (0x0000e7f9) aid_size_cell_graphic2_ParamLimits

0xe7f9,	// (0x0000e7f9) aid_size_cell_graphic2

0x3ead,	// (0x00003ead) bg_popup_window_pane_cp21_ParamLimits

0x3ead,	// (0x00003ead) bg_popup_window_pane_cp21

0xe82b,	// (0x0000e82b) graphic2_pages_pane_ParamLimits

0xe82b,	// (0x0000e82b) graphic2_pages_pane

0xe881,	// (0x0000e881) grid_graphic2_control_pane_ParamLimits

0xe881,	// (0x0000e881) grid_graphic2_control_pane

0xe8b5,	// (0x0000e8b5) grid_graphic2_pane_ParamLimits

0xe8b5,	// (0x0000e8b5) grid_graphic2_pane

0xe928,	// (0x0000e928) cell_graphic2_pane

0x0024,	// (0x00000024) main_comp_mode_pane

0x7cde,	// (0x00007cde) list_ai3_gene_pane_ParamLimits

0xddf3,	// (0x0000ddf3) bg_popup_window_pane_cp19_ParamLimits

0x8117,	// (0x00008117) bg_touch_area_indi_pane_ParamLimits

0x8117,	// (0x00008117) bg_touch_area_indi_pane

0x812d,	// (0x0000812d) bg_touch_area_indi_pane_cp01_ParamLimits

0x812d,	// (0x0000812d) bg_touch_area_indi_pane_cp01

0x8143,	// (0x00008143) bg_touch_area_indi_pane_cp02_ParamLimits

0x8143,	// (0x00008143) bg_touch_area_indi_pane_cp02

0x815b,	// (0x0000815b) bg_touch_area_indi_pane_cp03_ParamLimits

0x815b,	// (0x0000815b) bg_touch_area_indi_pane_cp03

0x8175,	// (0x00008175) popup_slider_window_g1_ParamLimits

0x8191,	// (0x00008191) popup_slider_window_g2_ParamLimits

0x81ad,	// (0x000081ad) popup_slider_window_g3_ParamLimits

0xf4c9,	// (0x0000f4c9) popup_slider_window_g_ParamLimits

0x8209,	// (0x00008209) popup_slider_window_t1_ParamLimits

0x827d,	// (0x0000827d) small_volume_slider_vertical_pane_ParamLimits

0xe928,	// (0x0000e928) cell_graphic2_pane_ParamLimits

0xe983,	// (0x0000e983) bg_button_pane_cp10_ParamLimits

0xe983,	// (0x0000e983) bg_button_pane_cp10

0xe996,	// (0x0000e996) bg_button_pane_cp11_ParamLimits

0xe996,	// (0x0000e996) bg_button_pane_cp11

0xe9a9,	// (0x0000e9a9) graphic2_pages_pane_g1_ParamLimits

0xe9a9,	// (0x0000e9a9) graphic2_pages_pane_g1

0xe9c4,	// (0x0000e9c4) graphic2_pages_pane_g2_ParamLimits

0xe9c4,	// (0x0000e9c4) graphic2_pages_pane_g2

0x0001,

0xf526,	// (0x0000f526) graphic2_pages_pane_g_ParamLimits

0xf526,	// (0x0000f526) graphic2_pages_pane_g

0xe9dc,	// (0x0000e9dc) graphic2_pages_pane_t1_ParamLimits

0xe9dc,	// (0x0000e9dc) graphic2_pages_pane_t1

0xe9f4,	// (0x0000e9f4) cell_graphic2_control_pane_ParamLimits

0xe9f4,	// (0x0000e9f4) cell_graphic2_control_pane

0xea0e,	// (0x0000ea0e) cell_graphic2_pane_g1_ParamLimits

0xea0e,	// (0x0000ea0e) cell_graphic2_pane_g1

0x675a,	// (0x0000675a) cell_graphic2_pane_g2_ParamLimits

0x675a,	// (0x0000675a) cell_graphic2_pane_g2

0xea1b,	// (0x0000ea1b) cell_graphic2_pane_g3_ParamLimits

0xea1b,	// (0x0000ea1b) cell_graphic2_pane_g3

0x6767,	// (0x00006767) cell_graphic2_pane_g4_ParamLimits

0x6767,	// (0x00006767) cell_graphic2_pane_g4

0xea28,	// (0x0000ea28) cell_graphic2_pane_g5_ParamLimits

0xea28,	// (0x0000ea28) cell_graphic2_pane_g5

0x0004,

0xf52b,	// (0x0000f52b) cell_graphic2_pane_g_ParamLimits

0xf52b,	// (0x0000f52b) cell_graphic2_pane_g

0xea48,	// (0x0000ea48) cell_graphic2_pane_t1_ParamLimits

0xea48,	// (0x0000ea48) cell_graphic2_pane_t1

0x4674,	// (0x00004674) grid_highlight_pane_cp11_ParamLimits

0x4674,	// (0x00004674) grid_highlight_pane_cp11

0x1375,	// (0x00001375) bg_button_pane_cp05

0xea7d,	// (0x0000ea7d) cell_graphic2_control_pane_g1

0x649a,	// (0x0000649a) bg_touch_area_indi_pane_g1

0x939f,	// (0x0000939f) aid_cmod_rocker_key_size

0x93a9,	// (0x000093a9) aid_cmode_itu_key_size

0x93b3,	// (0x000093b3) main_cmode_video_pane

0x93bd,	// (0x000093bd) main_comp_mode_itu_pane

0x93c9,	// (0x000093c9) main_comp_mode_rocker_pane

0x93d5,	// (0x000093d5) cell_cmode_rocker_pane_ParamLimits

0x93d5,	// (0x000093d5) cell_cmode_rocker_pane

0x93e7,	// (0x000093e7) cell_cmode_itu_pane_ParamLimits

0x93e7,	// (0x000093e7) cell_cmode_itu_pane

0x1375,	// (0x00001375) bg_button_pane_cp06_ParamLimits

0x1375,	// (0x00001375) bg_button_pane_cp06

0x6940,	// (0x00006940) cell_cmode_rocker_pane_g1_ParamLimits

0x6940,	// (0x00006940) cell_cmode_rocker_pane_g1

0x83f6,	// (0x000083f6) cell_cmode_rocker_pane_g2_ParamLimits

0x83f6,	// (0x000083f6) cell_cmode_rocker_pane_g2

0x0001,

0xb07f,	// (0x0000b07f) cell_cmode_rocker_pane_g_ParamLimits

0xb07f,	// (0x0000b07f) cell_cmode_rocker_pane_g

0x0024,	// (0x00000024) bg_button_pane_cp07

0x93fc,	// (0x000093fc) cell_cmode_itu_pane_g1

0x9405,	// (0x00009405) cell_cmode_itu_pane_t1

0x9413,	// (0x00009413) cell_cmode_itu_pane_t2

0x0001,

0xb084,	// (0x0000b084) cell_cmode_itu_pane_t

0x8619,	// (0x00008619) aid_touch_ctrl_left

0x8621,	// (0x00008621) aid_touch_ctrl_right

0x0024,	// (0x00000024) compa_mode_pane

0xea8a,	// (0x0000ea8a) aid_cmod_rocker_key_size_cp

0xea94,	// (0x0000ea94) aid_cmode_itu_key_size_cp

0x9435,	// (0x00009435) compa_mode_pane_g1

0x943d,	// (0x0000943d) compa_mode_pane_g2

0x9445,	// (0x00009445) compa_mode_pane_g3

0x0002,

0xb089,	// (0x0000b089) compa_mode_pane_g

0xea9e,	// (0x0000ea9e) main_comp_mode_itu_pane_cp

0xeaa6,	// (0x0000eaa6) main_comp_mode_rocker_pane_cp

0xeaae,	// (0x0000eaae) cell_cmode_itu_pane_cp_ParamLimits

0xeaae,	// (0x0000eaae) cell_cmode_itu_pane_cp

0xeac3,	// (0x0000eac3) cell_cmode_rocker_pane_cp_ParamLimits

0xeac3,	// (0x0000eac3) cell_cmode_rocker_pane_cp

0x1375,	// (0x00001375) bg_button_pane_cp06_cp_ParamLimits

0x1375,	// (0x00001375) bg_button_pane_cp06_cp

0x6940,	// (0x00006940) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x6940,	// (0x00006940) cell_cmode_rocker_pane_g1_cp

0x649a,	// (0x0000649a) cell_cmode_rocker_pane_g2_cp

0x0024,	// (0x00000024) bg_button_pane_cp07_cp

0xead5,	// (0x0000ead5) cell_cmode_itu_pane_g1_cp

0xeade,	// (0x0000eade) cell_cmode_itu_pane_t1_cp

0xeade,	// (0x0000eade) cell_cmode_itu_pane_t2_cp

0xd1d8,	// (0x0000d1d8) settings_code_pane_cp2

0x04fd,	// (0x000004fd) bg_popup_window_pane_cp3_ParamLimits

0x0a0b,	// (0x00000a0b) heading_pane_cp3_ParamLimits

0x0a17,	// (0x00000a17) listscroll_popup_graphic_pane_ParamLimits

0x6518,	// (0x00006518) fep_hwr_aid_pane_ParamLimits

0x82f9,	// (0x000082f9) aid_touch_sctrl_top_ParamLimits

0x8306,	// (0x00008306) sctrl_sk_top_pane_g1_ParamLimits

0x6940,	// (0x00006940) sctrl_sk_top_pane_g2_ParamLimits

0xafbf,	// (0x0000afbf) sctrl_sk_top_pane_g_ParamLimits

0x8313,	// (0x00008313) sctrl_sk_top_pane_t1_ParamLimits

0x82f9,	// (0x000082f9) aid_touch_sctrl_bottom_ParamLimits

0x8313,	// (0x00008313) sctrl_sk_bottom_pane_t1_ParamLimits

0x8562,	// (0x00008562) aid_area_touch_clock

0xe5ca,	// (0x0000e5ca) aid_vkb2_area_top_pane_cell_ParamLimits

0xe5ca,	// (0x0000e5ca) aid_vkb2_area_top_pane_cell

0xe675,	// (0x0000e675) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe675,	// (0x0000e675) aid_vkb2_area_bottom_pane_cell

0x8eb3,	// (0x00008eb3) popup_char_count_window

0x9492,	// (0x00009492) popup_char_count_window_g1

0x949b,	// (0x0000949b) popup_char_count_window_g2

0x94a4,	// (0x000094a4) popup_char_count_window_g3

0x0002,

0xb090,	// (0x0000b090) popup_char_count_window_g

0x94ad,	// (0x000094ad) popup_char_count_window_t1

0x8b11,	// (0x00008b11) popup_fep_char_preview_window_ParamLimits

0x8b11,	// (0x00008b11) popup_fep_char_preview_window

0xe5ea,	// (0x0000e5ea) vkb2_top_candi_pane_ParamLimits

0xe5ea,	// (0x0000e5ea) vkb2_top_candi_pane

0xeaec,	// (0x0000eaec) cell_vkb2_top_candi_pane_ParamLimits

0xeaec,	// (0x0000eaec) cell_vkb2_top_candi_pane

0x3ead,	// (0x00003ead) bg_popup_fep_char_preview_window_ParamLimits

0x3ead,	// (0x00003ead) bg_popup_fep_char_preview_window

0x9508,	// (0x00009508) popup_fep_char_preview_window_t1_ParamLimits

0x9508,	// (0x00009508) popup_fep_char_preview_window_t1

0x9542,	// (0x00009542) bg_popup_fep_char_preview_window_g1

0x954a,	// (0x0000954a) bg_popup_fep_char_preview_window_g2

0x9552,	// (0x00009552) bg_popup_fep_char_preview_window_g3

0x955a,	// (0x0000955a) bg_popup_fep_char_preview_window_g4

0x9562,	// (0x00009562) bg_popup_fep_char_preview_window_g5

0x956a,	// (0x0000956a) bg_popup_fep_char_preview_window_g6

0x9572,	// (0x00009572) bg_popup_fep_char_preview_window_g7

0x957a,	// (0x0000957a) bg_popup_fep_char_preview_window_g8

0x9582,	// (0x00009582) bg_popup_fep_char_preview_window_g9

0x0008,

0xb097,	// (0x0000b097) bg_popup_fep_char_preview_window_g

0x6940,	// (0x00006940) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6940,	// (0x00006940) cell_vkb2_top_candi_pane_g1

0x6cab,	// (0x00006cab) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6cab,	// (0x00006cab) cell_vkb2_top_candi_pane_g2

0x6ccc,	// (0x00006ccc) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6ccc,	// (0x00006ccc) cell_vkb2_top_candi_pane_g3

0x958a,	// (0x0000958a) cell_vkb2_top_candi_pane_g4_ParamLimits

0x958a,	// (0x0000958a) cell_vkb2_top_candi_pane_g4

0x95ab,	// (0x000095ab) cell_vkb2_top_candi_pane_g5_ParamLimits

0x95ab,	// (0x000095ab) cell_vkb2_top_candi_pane_g5

0x83f6,	// (0x000083f6) cell_vkb2_top_candi_pane_g6_ParamLimits

0x83f6,	// (0x000083f6) cell_vkb2_top_candi_pane_g6

0x0005,

0xb0aa,	// (0x0000b0aa) cell_vkb2_top_candi_pane_g_ParamLimits

0xb0aa,	// (0x0000b0aa) cell_vkb2_top_candi_pane_g

0x95cc,	// (0x000095cc) cell_vkb2_top_candi_pane_t1

0x4db3,	// (0x00004db3) aid_size_touch_slider_mark_ParamLimits

0x4db3,	// (0x00004db3) aid_size_touch_slider_mark

0xe867,	// (0x0000e867) grid_graphic2_catg_pane_ParamLimits

0xe867,	// (0x0000e867) grid_graphic2_catg_pane

0xe8fb,	// (0x0000e8fb) popup_grid_graphic2_window_t1_ParamLimits

0xe8fb,	// (0x0000e8fb) popup_grid_graphic2_window_t1

0xe911,	// (0x0000e911) popup_grid_graphic2_window_t2_ParamLimits

0xe911,	// (0x0000e911) popup_grid_graphic2_window_t2

0x0001,

0xf521,	// (0x0000f521) popup_grid_graphic2_window_t_ParamLimits

0xf521,	// (0x0000f521) popup_grid_graphic2_window_t

0x1375,	// (0x00001375) bg_button_pane_cp05_ParamLimits

0xea7d,	// (0x0000ea7d) cell_graphic2_control_pane_g1_ParamLimits

0xeb52,	// (0x0000eb52) cell_graphic2_catg_pane_ParamLimits

0xeb52,	// (0x0000eb52) cell_graphic2_catg_pane

0x0024,	// (0x00000024) bg_button_pane_cp12

0xeb64,	// (0x0000eb64) cell_graphic2_catg_pane_g1

0x852e,	// (0x0000852e) cell_tb_ext_pane_t1_ParamLimits

0x8f51,	// (0x00008f51) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8f51,	// (0x00008f51) vkb2_top_cell_right_narrow_pane

0x8f69,	// (0x00008f69) vkb2_top_cell_right_wide_pane_ParamLimits

0x8f69,	// (0x00008f69) vkb2_top_cell_right_wide_pane

0x650a,	// (0x0000650a) bg_vkb2_func_pane_ParamLimits

0x650a,	// (0x0000650a) bg_vkb2_func_pane

0x8fda,	// (0x00008fda) vkb2_top_cell_left_pane_g1_ParamLimits

0x650a,	// (0x0000650a) bg_vkb2_fuc_pane_cp03_ParamLimits

0x650a,	// (0x0000650a) bg_vkb2_fuc_pane_cp03

0x904f,	// (0x0000904f) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x3684,	// (0x00003684) bg_vkb2_func_pane_g1

0x368c,	// (0x0000368c) bg_vkb2_func_pane_g2

0x369c,	// (0x0000369c) bg_vkb2_func_pane_g3

0x3694,	// (0x00003694) bg_vkb2_func_pane_g4

0x36a4,	// (0x000036a4) bg_vkb2_func_pane_g5

0x36ac,	// (0x000036ac) bg_vkb2_func_pane_g6

0x36b4,	// (0x000036b4) bg_vkb2_func_pane_g7

0x36bc,	// (0x000036bc) bg_vkb2_func_pane_g8

0x367c,	// (0x0000367c) bg_vkb2_func_pane_g9

0x0008,

0xb0b7,	// (0x0000b0b7) bg_vkb2_func_pane_g

0x650a,	// (0x0000650a) bg_vkb2_fuc_pane_cp01_ParamLimits

0x650a,	// (0x0000650a) bg_vkb2_fuc_pane_cp01

0x8fda,	// (0x00008fda) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8fda,	// (0x00008fda) vkb2_top_cell_right_wide_pane_g1

0x650a,	// (0x0000650a) bg_vkb2_fuc_pane_cp02_ParamLimits

0x650a,	// (0x0000650a) bg_vkb2_fuc_pane_cp02

0x904f,	// (0x0000904f) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x904f,	// (0x0000904f) vkb2_top_cell_right_narrow_pane_g1

0xdd33,	// (0x0000dd33) aid_touch_area_decrease_ParamLimits

0xdd33,	// (0x0000dd33) aid_touch_area_decrease

0xdd67,	// (0x0000dd67) aid_touch_area_increase_ParamLimits

0xdd67,	// (0x0000dd67) aid_touch_area_increase

0xdd8f,	// (0x0000dd8f) aid_touch_area_mute_ParamLimits

0xdd8f,	// (0x0000dd8f) aid_touch_area_mute

0xddbf,	// (0x0000ddbf) aid_touch_area_slider_ParamLimits

0xddbf,	// (0x0000ddbf) aid_touch_area_slider

0xddff,	// (0x0000ddff) popup_slider_window_g4_ParamLimits

0xddff,	// (0x0000ddff) popup_slider_window_g4

0xde27,	// (0x0000de27) popup_slider_window_g5_ParamLimits

0xde27,	// (0x0000de27) popup_slider_window_g5

0xde5b,	// (0x0000de5b) popup_slider_window_g6_ParamLimits

0xde5b,	// (0x0000de5b) popup_slider_window_g6

0x8237,	// (0x00008237) popup_slider_window_t2_ParamLimits

0x8237,	// (0x00008237) popup_slider_window_t2

0x0001,

0xafb3,	// (0x0000afb3) popup_slider_window_t_ParamLimits

0xafb3,	// (0x0000afb3) popup_slider_window_t

0xde77,	// (0x0000de77) slider_pane_ParamLimits

0xde77,	// (0x0000de77) slider_pane

0x9606,	// (0x00009606) slider_pane_g1_ParamLimits

0x9606,	// (0x00009606) slider_pane_g1

0x961a,	// (0x0000961a) slider_pane_g2_ParamLimits

0x961a,	// (0x0000961a) slider_pane_g2

0x9630,	// (0x00009630) slider_pane_g3_ParamLimits

0x9630,	// (0x00009630) slider_pane_g3

0x0003,

0xb0ca,	// (0x0000b0ca) slider_pane_g_ParamLimits

0xb0ca,	// (0x0000b0ca) slider_pane_g

0xc7bc,	// (0x0000c7bc) popup_tb_float_extension_window_ParamLimits

0xc7bc,	// (0x0000c7bc) popup_tb_float_extension_window

0x965c,	// (0x0000965c) aid_size_cell_tb_float_ext

0x0024,	// (0x00000024) bg_popup_sub_window_cp28

0x9668,	// (0x00009668) grid_tb_float_ext_pane

0x9672,	// (0x00009672) cell_tb_float_ext_pane_ParamLimits

0x9672,	// (0x00009672) cell_tb_float_ext_pane

0x968c,	// (0x0000968c) cell_tb_float_ext_pane_g1

0x9695,	// (0x00009695) grid_highlight_pane_cp12

0xd615,	// (0x0000d615) cell_last_hwr_side_pane_ParamLimits

0xd615,	// (0x0000d615) cell_last_hwr_side_pane

0x649a,	// (0x0000649a) cell_last_hwr_side_pane_g1

0x969e,	// (0x0000969e) cell_last_hwr_side_pane_g2

0x0001,

0xb0d3,	// (0x0000b0d3) cell_last_hwr_side_pane_g

0xe751,	// (0x0000e751) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe751,	// (0x0000e751) vkb2_area_bottom_space_btn_pane

0x6940,	// (0x00006940) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x912e,	// (0x0000912e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x95cc,	// (0x000095cc) cell_vkb2_top_candi_pane_t1_ParamLimits

0x96a7,	// (0x000096a7) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x96a7,	// (0x000096a7) vkb2_area_bottom_space_btn_pane_g1

0x96e1,	// (0x000096e1) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x96e1,	// (0x000096e1) vkb2_area_bottom_space_btn_pane_g2

0x9717,	// (0x00009717) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9717,	// (0x00009717) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xb0d8,	// (0x0000b0d8) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xb0d8,	// (0x0000b0d8) vkb2_area_bottom_space_btn_pane_g

0x65cd,	// (0x000065cd) cel_fep_hwr_func_pane_ParamLimits

0x65cd,	// (0x000065cd) cel_fep_hwr_func_pane

0xd5ea,	// (0x0000d5ea) cell_hwr_side_button_pane_ParamLimits

0xd5ea,	// (0x0000d5ea) cell_hwr_side_button_pane

0x8562,	// (0x00008562) aid_area_touch_clock_ParamLimits

0x0831,	// (0x00000831) bg_uniindi_top_pane_ParamLimits

0x8574,	// (0x00008574) uniindi_top_pane_g1_ParamLimits

0x858a,	// (0x0000858a) uniindi_top_pane_g2_ParamLimits

0x8596,	// (0x00008596) uniindi_top_pane_g3_ParamLimits

0x85a7,	// (0x000085a7) uniindi_top_pane_g4_ParamLimits

0xafeb,	// (0x0000afeb) uniindi_top_pane_g_ParamLimits

0x85b4,	// (0x000085b4) uniindi_top_pane_t1_ParamLimits

0x0831,	// (0x00000831) bg_vkb2_func_pane_cp01_ParamLimits

0x0831,	// (0x00000831) bg_vkb2_func_pane_cp01

0x9761,	// (0x00009761) cel_fep_hwr_func_pane_g1_ParamLimits

0x9761,	// (0x00009761) cel_fep_hwr_func_pane_g1

0x0831,	// (0x00000831) bg_vkb2_func_pane_cp02_ParamLimits

0x0831,	// (0x00000831) bg_vkb2_func_pane_cp02

0x9761,	// (0x00009761) cell_hwr_side_button_pane_g1_ParamLimits

0x9761,	// (0x00009761) cell_hwr_side_button_pane_g1

0x344b,	// (0x0000344b) status_pane_g4_ParamLimits

0x344b,	// (0x0000344b) status_pane_g4

0x3465,	// (0x00003465) status_pane_t1

0x61d3,	// (0x000061d3) form2_midp_gauge_slider_cont_pane

0x61db,	// (0x000061db) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd535,	// (0x0000d535) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd547,	// (0x0000d547) form2_midp_gauge_slider_pane_t3_ParamLimits

0xf472,	// (0x0000f472) form2_midp_gauge_slider_pane_t_ParamLimits

0x6211,	// (0x00006211) form2_midp_slider_pane_ParamLimits

0x8ad1,	// (0x00008ad1) aid_size_cell_func_vkb2_ParamLimits

0x8ad1,	// (0x00008ad1) aid_size_cell_func_vkb2

0x9648,	// (0x00009648) slider_pane_g4_ParamLimits

0x9648,	// (0x00009648) slider_pane_g4

0xeb6d,	// (0x0000eb6d) form2_midp_gauge_slider_pane_t2_cp01

0xeb7b,	// (0x0000eb7b) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xeb7b,	// (0x0000eb7b) form2_midp_gauge_slider_pane_t3_cp01

0x979a,	// (0x0000979a) form2_midp_slider_pane_cp01

0x0024,	// (0x00000024) navi_smil_pane

0x97ce,	// (0x000097ce) navi_smil_pane_g1

0x97d6,	// (0x000097d6) navi_smil_pane_t1

0x97a3,	// (0x000097a3) form2_midp_slider_pane_g1

0x97ac,	// (0x000097ac) form2_midp_slider_pane_g2

0x97b4,	// (0x000097b4) form2_midp_slider_pane_g3

0x97a3,	// (0x000097a3) form2_midp_slider_pane_g4

0xeb98,	// (0x0000eb98) form2_midp_slider_pane_g5

0x0004,

0xf53b,	// (0x0000f53b) form2_midp_slider_pane_g

0x9751,	// (0x00009751) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9751,	// (0x00009751) vkb2_area_bottom_space_btn_pane_g4

0xc998,	// (0x0000c998) lc0_navi_pane_ParamLimits

0xc998,	// (0x0000c998) lc0_navi_pane

0xca02,	// (0x0000ca02) lc0_stat_indi_pane_ParamLimits

0xca02,	// (0x0000ca02) lc0_stat_indi_pane

0xca17,	// (0x0000ca17) ls0_title_pane_ParamLimits

0xca17,	// (0x0000ca17) ls0_title_pane

0x1375,	// (0x00001375) bg_popup_sub_pane_cp14_ParamLimits

0x8549,	// (0x00008549) list_uniindi_pane_ParamLimits

0x8555,	// (0x00008555) uniindi_top_pane_ParamLimits

0x85f1,	// (0x000085f1) list_single_uniindi_pane_g1_ParamLimits

0x8604,	// (0x00008604) list_single_uniindi_pane_t1_ParamLimits

0xeba1,	// (0x0000eba1) lc0_stat_clock_pane_ParamLimits

0xeba1,	// (0x0000eba1) lc0_stat_clock_pane

0xebae,	// (0x0000ebae) lc0_stat_indi_pane_g1_ParamLimits

0xebae,	// (0x0000ebae) lc0_stat_indi_pane_g1

0xebbb,	// (0x0000ebbb) lc0_stat_indi_pane_g2_ParamLimits

0xebbb,	// (0x0000ebbb) lc0_stat_indi_pane_g2

0x0001,

0xf546,	// (0x0000f546) lc0_stat_indi_pane_g_ParamLimits

0xf546,	// (0x0000f546) lc0_stat_indi_pane_g

0xebc8,	// (0x0000ebc8) lc0_uni_indicator_pane_ParamLimits

0xebc8,	// (0x0000ebc8) lc0_uni_indicator_pane

0x9818,	// (0x00009818) ls0_title_pane_g1_ParamLimits

0x9818,	// (0x00009818) ls0_title_pane_g1

0xebd5,	// (0x0000ebd5) ls0_title_pane_t1_ParamLimits

0xebd5,	// (0x0000ebd5) ls0_title_pane_t1

0xec03,	// (0x0000ec03) lc0_uni_indicator_pane_g1_ParamLimits

0xec03,	// (0x0000ec03) lc0_uni_indicator_pane_g1

0x9876,	// (0x00009876) lc0_stat_clock_pane_t1

0x0024,	// (0x00000024) main_ai5_pane

0x9884,	// (0x00009884) ai5_sk_pane_ParamLimits

0x9884,	// (0x00009884) ai5_sk_pane

0xec2a,	// (0x0000ec2a) cell_ai5_widget_pane_ParamLimits

0xec2a,	// (0x0000ec2a) cell_ai5_widget_pane

0x9913,	// (0x00009913) aid_size_cell_widget_grid

0x9927,	// (0x00009927) bg_ai5_widget_pane_ParamLimits

0x9927,	// (0x00009927) bg_ai5_widget_pane

0xecb3,	// (0x0000ecb3) cell_ai5_widget_pane_g2

0xecc3,	// (0x0000ecc3) cell_ai5_widget_pane_g3

0xece2,	// (0x0000ece2) cell_ai5_widget_pane_g4

0xecee,	// (0x0000ecee) cell_ai5_widget_pane_g5

0xecfa,	// (0x0000ecfa) cell_ai5_widget_pane_g6

0xed06,	// (0x0000ed06) cell_ai5_widget_pane_g7

0xed4e,	// (0x0000ed4e) cell_ai5_widget_pane_t1_ParamLimits

0xed4e,	// (0x0000ed4e) cell_ai5_widget_pane_t1

0xed6b,	// (0x0000ed6b) cell_ai5_widget_pane_t2_ParamLimits

0xed6b,	// (0x0000ed6b) cell_ai5_widget_pane_t2

0xed83,	// (0x0000ed83) cell_ai5_widget_pane_t3_ParamLimits

0xed83,	// (0x0000ed83) cell_ai5_widget_pane_t3

0xed9b,	// (0x0000ed9b) cell_ai5_widget_pane_t4_ParamLimits

0xed9b,	// (0x0000ed9b) cell_ai5_widget_pane_t4

0xedb5,	// (0x0000edb5) cell_ai5_widget_pane_t5_ParamLimits

0xedb5,	// (0x0000edb5) cell_ai5_widget_pane_t5

0x9a70,	// (0x00009a70) cell_ai5_widget_pane_t6_ParamLimits

0x9a70,	// (0x00009a70) cell_ai5_widget_pane_t6

0x9a82,	// (0x00009a82) cell_ai5_widget_pane_t7_ParamLimits

0x9a82,	// (0x00009a82) cell_ai5_widget_pane_t7

0xedd4,	// (0x0000edd4) cell_ai5_widget_pane_t8_ParamLimits

0xedd4,	// (0x0000edd4) cell_ai5_widget_pane_t8

0x0009,

0xf560,	// (0x0000f560) cell_ai5_widget_pane_t_ParamLimits

0xf560,	// (0x0000f560) cell_ai5_widget_pane_t

0xee20,	// (0x0000ee20) grid_ai5_widget_pane

0x1375,	// (0x00001375) highlight_cell_ai5_widget_pane_ParamLimits

0x1375,	// (0x00001375) highlight_cell_ai5_widget_pane

0xee38,	// (0x0000ee38) ai5_sk_left_pane

0xee42,	// (0x0000ee42) ai5_sk_middle_pane

0xee4c,	// (0x0000ee4c) ai5_sk_right_pane

0x9b1d,	// (0x00009b1d) bg_ai5_widget_pane_g1_ParamLimits

0x9b1d,	// (0x00009b1d) bg_ai5_widget_pane_g1

0x9b29,	// (0x00009b29) bg_ai5_widget_pane_g2_ParamLimits

0x9b29,	// (0x00009b29) bg_ai5_widget_pane_g2

0x9b35,	// (0x00009b35) bg_ai5_widget_pane_g3_ParamLimits

0x9b35,	// (0x00009b35) bg_ai5_widget_pane_g3

0x9b41,	// (0x00009b41) bg_ai5_widget_pane_g4_ParamLimits

0x9b41,	// (0x00009b41) bg_ai5_widget_pane_g4

0x9b4d,	// (0x00009b4d) bg_ai5_widget_pane_g5_ParamLimits

0x9b4d,	// (0x00009b4d) bg_ai5_widget_pane_g5

0x9b59,	// (0x00009b59) bg_ai5_widget_pane_g6_ParamLimits

0x9b59,	// (0x00009b59) bg_ai5_widget_pane_g6

0x9b65,	// (0x00009b65) bg_ai5_widget_pane_g7_ParamLimits

0x9b65,	// (0x00009b65) bg_ai5_widget_pane_g7

0x9b71,	// (0x00009b71) bg_ai5_widget_pane_g8_ParamLimits

0x9b71,	// (0x00009b71) bg_ai5_widget_pane_g8

0x9b7d,	// (0x00009b7d) bg_ai5_widget_pane_g9_ParamLimits

0x9b7d,	// (0x00009b7d) bg_ai5_widget_pane_g9

0x0008,

0xb11b,	// (0x0000b11b) bg_ai5_widget_pane_g_ParamLimits

0xb11b,	// (0x0000b11b) bg_ai5_widget_pane_g

0x9bb0,	// (0x00009bb0) cell_shortcut_ai5_widget_pane_ParamLimits

0x9bb0,	// (0x00009bb0) cell_shortcut_ai5_widget_pane

0x0671,	// (0x00000671) bg_cell_shortcut_ai5_widget_pane

0x9bc1,	// (0x00009bc1) cell_grid_ai5_widget_pane_g1

0x9bca,	// (0x00009bca) highlight_cell_shortcut_ai5_widget_pane

0x368c,	// (0x0000368c) ai5_sk_left_pane_g1

0x9bd2,	// (0x00009bd2) ai5_sk_left_pane_g2

0x9bda,	// (0x00009bda) ai5_sk_left_pane_g3

0x9be2,	// (0x00009be2) ai5_sk_left_pane_g4

0x0003,

0xb12e,	// (0x0000b12e) ai5_sk_left_pane_g

0x9bea,	// (0x00009bea) ai5_sk_left_pane_t1

0x3684,	// (0x00003684) ai5_sk_right_pane_g1

0x9bf8,	// (0x00009bf8) ai5_sk_right_pane_g2

0x9c00,	// (0x00009c00) ai5_sk_right_pane_g3

0x9c08,	// (0x00009c08) ai5_sk_right_pane_g4

0x0003,

0xb137,	// (0x0000b137) ai5_sk_right_pane_g

0x9c10,	// (0x00009c10) ai5_sk_right_pane_t1

0x3684,	// (0x00003684) ai5_sk_middle_pane_g1

0x368c,	// (0x0000368c) ai5_sk_middle_pane_g2

0x36a4,	// (0x000036a4) ai5_sk_middle_pane_g3

0x9c00,	// (0x00009c00) ai5_sk_middle_pane_g4

0x9bda,	// (0x00009bda) ai5_sk_middle_pane_g5

0x9c1e,	// (0x00009c1e) ai5_sk_middle_pane_g6

0xee56,	// (0x0000ee56) ai5_sk_middle_pane_g7

0x0006,

0xf575,	// (0x0000f575) ai5_sk_middle_pane_g

0xc884,	// (0x0000c884) aid_touch_area_size_lc0_ParamLimits

0xc884,	// (0x0000c884) aid_touch_area_size_lc0

0x6ced,	// (0x00006ced) cell_hwr_candidate_pane_t1_ParamLimits

0x312d,	// (0x0000312d) aid_touch_navi_pane

0xcb09,	// (0x0000cb09) status_dt_navi_pane_ParamLimits

0xcb09,	// (0x0000cb09) status_dt_navi_pane

0xcb21,	// (0x0000cb21) status_dt_sta_pane_ParamLimits

0xcb21,	// (0x0000cb21) status_dt_sta_pane

0xee5e,	// (0x0000ee5e) dt_sta_controll_pane

0xee6b,	// (0x0000ee6b) dt_sta_indi_pane

0xee78,	// (0x0000ee78) dt_sta_title_pane

0x0831,	// (0x00000831) bg_dt_sta_indi_pane_ParamLimits

0x0831,	// (0x00000831) bg_dt_sta_indi_pane

0x9c5f,	// (0x00009c5f) dt_sta_battery_pane

0xee8a,	// (0x0000ee8a) dt_sta_indi_pane_g1

0xee93,	// (0x0000ee93) dt_sta_indi_pane_g2

0xee9c,	// (0x0000ee9c) dt_sta_indi_pane_g3

0x0002,

0xf584,	// (0x0000f584) dt_sta_indi_pane_g

0xeea5,	// (0x0000eea5) dt_sta_signal_pane

0x1375,	// (0x00001375) bg_dt_sta_title_pane_ParamLimits

0x1375,	// (0x00001375) bg_dt_sta_title_pane

0x47e5,	// (0x000047e5) dt_sta_title_pane_g1

0xeeae,	// (0x0000eeae) dt_sta_title_pane_t1_ParamLimits

0xeeae,	// (0x0000eeae) dt_sta_title_pane_t1

0x0024,	// (0x00000024) bg_dt_sta_control_pane

0xeec3,	// (0x0000eec3) dt_sta_controll_pane_g1

0xeecc,	// (0x0000eecc) bg_dt_sta_title_pane_g1

0xeed5,	// (0x0000eed5) bg_dt_sta_title_pane_g2

0xeede,	// (0x0000eede) bg_dt_sta_title_pane_g3

0x0002,

0xf58b,	// (0x0000f58b) bg_dt_sta_title_pane_g

0x649a,	// (0x0000649a) bg_dt_sta_indi_pane_g1

0x9ccc,	// (0x00009ccc) dt_sta_signal_pane_g1

0x9cd4,	// (0x00009cd4) dt_sta_signal_pane_g2

0x0001,

0xb15d,	// (0x0000b15d) dt_sta_signal_pane_g

0x9cdc,	// (0x00009cdc) dt_sta_battery_pane_g1

0x9ce5,	// (0x00009ce5) dt_sta_battery_pane_t1

0x649a,	// (0x0000649a) bg_dt_sta_control_pane_g1

0x1ede,	// (0x00001ede) fep_china_uni_eep_pane

0x1ee6,	// (0x00001ee6) fep_china_uni_entry_pane_ParamLimits

0x1ef6,	// (0x00001ef6) popup_fep_china_uni_window_g1_ParamLimits

0x1f06,	// (0x00001f06) popup_fep_china_uni_window_g2_ParamLimits

0x1f06,	// (0x00001f06) popup_fep_china_uni_window_g2

0x0001,

0xa9fb,	// (0x0000a9fb) popup_fep_china_uni_window_g_ParamLimits

0xa9fb,	// (0x0000a9fb) popup_fep_china_uni_window_g

0x9cf4,	// (0x00009cf4) fep_china_uni_eep_pane_g1

0x9cfc,	// (0x00009cfc) fep_china_uni_eep_pane_t1

0x97c5,	// (0x000097c5) aid_touch_area_size_smil_player

0x3279,	// (0x00003279) lc0_clock_pane

0x3459,	// (0x00003459) status_pane_g5_ParamLimits

0x3459,	// (0x00003459) status_pane_g5

0xc362,	// (0x0000c362) popup_keymap_window

0x3417,	// (0x00003417) status_icon_pane

0xecc3,	// (0x0000ecc3) cell_ai5_widget_pane_g3_ParamLimits

0xece2,	// (0x0000ece2) cell_ai5_widget_pane_g4_ParamLimits

0xecee,	// (0x0000ecee) cell_ai5_widget_pane_g5_ParamLimits

0xed12,	// (0x0000ed12) cell_ai5_widget_pane_g8_ParamLimits

0xed12,	// (0x0000ed12) cell_ai5_widget_pane_g8

0xed26,	// (0x0000ed26) cell_ai5_widget_pane_g9_ParamLimits

0xed26,	// (0x0000ed26) cell_ai5_widget_pane_g9

0xed3a,	// (0x0000ed3a) cell_ai5_widget_pane_g10_ParamLimits

0xed3a,	// (0x0000ed3a) cell_ai5_widget_pane_g10

0x9d0b,	// (0x00009d0b) status_icon_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp13

0x9d13,	// (0x00009d13) popup_keymap_window_t1

0xc072,	// (0x0000c072) control_pane_g6_ParamLimits

0xc072,	// (0x0000c072) control_pane_g6

0xc07f,	// (0x0000c07f) control_pane_g7_ParamLimits

0xc07f,	// (0x0000c07f) control_pane_g7

0xc08c,	// (0x0000c08c) control_pane_g8_ParamLimits

0xc08c,	// (0x0000c08c) control_pane_g8

0xee5e,	// (0x0000ee5e) dt_sta_controll_pane_ParamLimits

0xee6b,	// (0x0000ee6b) dt_sta_indi_pane_ParamLimits

0xee78,	// (0x0000ee78) dt_sta_title_pane_ParamLimits

0x0d4c,	// (0x00000d4c) aid_size_touch_scroll_bar_cale

0x02b1,	// (0x000002b1) popup_discreet_window_ParamLimits

0x02b1,	// (0x000002b1) popup_discreet_window

0xb310,	// (0x0000b310) popup_sk_window

0x3ead,	// (0x00003ead) bg_popup_sub_pane_cp28_ParamLimits

0x3ead,	// (0x00003ead) bg_popup_sub_pane_cp28

0x9d21,	// (0x00009d21) popup_discreet_window_g1_ParamLimits

0x9d21,	// (0x00009d21) popup_discreet_window_g1

0x9d41,	// (0x00009d41) popup_discreet_window_t1_ParamLimits

0x9d41,	// (0x00009d41) popup_discreet_window_t1

0x9d5f,	// (0x00009d5f) popup_discreet_window_t2_ParamLimits

0x9d5f,	// (0x00009d5f) popup_discreet_window_t2

0x0002,

0xb162,	// (0x0000b162) popup_discreet_window_t_ParamLimits

0xb162,	// (0x0000b162) popup_discreet_window_t

0x9db1,	// (0x00009db1) popup_sk_window_g1

0x9dbb,	// (0x00009dbb) popup_sk_window_g2

0x0001,

0xb169,	// (0x0000b169) popup_sk_window_g

0x9dc5,	// (0x00009dc5) popup_sk_window_t1

0x9dd3,	// (0x00009dd3) popup_sk_window_t1_copy1

0xecb3,	// (0x0000ecb3) cell_ai5_widget_pane_g2_ParamLimits

0xede6,	// (0x0000ede6) cell_ai5_widget_pane_t9_ParamLimits

0xede6,	// (0x0000ede6) cell_ai5_widget_pane_t9

0x0024,	// (0x00000024) main_fep_fshwr2_pane

0xeee7,	// (0x0000eee7) aid_fshwr2_btn_pane

0xeeef,	// (0x0000eeef) aid_fshwr2_syb_pane

0xeef7,	// (0x0000eef7) aid_fshwr2_txt_pane

0xeeff,	// (0x0000eeff) fshwr2_func_candi_pane

0xef09,	// (0x0000ef09) fshwr2_hwr_syb_pane

0xef17,	// (0x0000ef17) fshwr2_icf_pane

0x0024,	// (0x00000024) fshwr2_icf_bg_pane

0xef21,	// (0x0000ef21) fshwr2_icf_pane_t1_ParamLimits

0xef21,	// (0x0000ef21) fshwr2_icf_pane_t1

0x649a,	// (0x0000649a) fshwr2_func_candi_pane_g1

0x9e46,	// (0x00009e46) fshwr2_func_candi_row_pane_ParamLimits

0x9e46,	// (0x00009e46) fshwr2_func_candi_row_pane

0xef39,	// (0x0000ef39) cell_fshwr2_syb_pane_ParamLimits

0xef39,	// (0x0000ef39) cell_fshwr2_syb_pane

0x6940,	// (0x00006940) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6940,	// (0x00006940) fshwr2_hwr_syb_pane_g1

0x0024,	// (0x00000024) bg_popup_call_pane_cp01

0x9e71,	// (0x00009e71) fshwr2_func_candi_cell_pane_ParamLimits

0x9e71,	// (0x00009e71) fshwr2_func_candi_cell_pane

0x9ea2,	// (0x00009ea2) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9ea2,	// (0x00009ea2) fshwr2_func_candi_cell_bg_pane

0x9ebc,	// (0x00009ebc) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9ebc,	// (0x00009ebc) fshwr2_func_candi_cell_pane_g1

0x9ee4,	// (0x00009ee4) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9ee4,	// (0x00009ee4) fshwr2_func_candi_cell_pane_t1

0x0024,	// (0x00000024) bg_button_pane_cp08

0x25a4,	// (0x000025a4) cell_fshwr2_syb_bg_pane

0xef53,	// (0x0000ef53) cell_fshwr2_syb_bg_pane_g1

0xef5b,	// (0x0000ef5b) cell_fshwr2_syb_bg_pane_t1

0x1375,	// (0x00001375) main_tmo_pane

0xcff7,	// (0x0000cff7) uni_indicator_pane_g1_ParamLimits

0xd00c,	// (0x0000d00c) uni_indicator_pane_g2_ParamLimits

0xd021,	// (0x0000d021) uni_indicator_pane_g3_ParamLimits

0x4b67,	// (0x00004b67) uni_indicator_pane_g4_ParamLimits

0x4b67,	// (0x00004b67) uni_indicator_pane_g4

0x4b7b,	// (0x00004b7b) uni_indicator_pane_g5_ParamLimits

0x4b7b,	// (0x00004b7b) uni_indicator_pane_g5

0x4b8f,	// (0x00004b8f) uni_indicator_pane_g6_ParamLimits

0x4b8f,	// (0x00004b8f) uni_indicator_pane_g6

0xf419,	// (0x0000f419) uni_indicator_pane_g_ParamLimits

0xdd0f,	// (0x0000dd0f) popup_tmo_note_window_ParamLimits

0xdd0f,	// (0x0000dd0f) popup_tmo_note_window

0x0024,	// (0x00000024) fshwr2_bg_pane

0x9ed5,	// (0x00009ed5) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9ed5,	// (0x00009ed5) fshwr2_func_candi_cell_pane_g2

0x0001,

0xb16e,	// (0x0000b16e) fshwr2_func_candi_cell_pane_g_ParamLimits

0xb16e,	// (0x0000b16e) fshwr2_func_candi_cell_pane_g

0x649a,	// (0x0000649a) bg_popup_window_pane_cp01

0x9f0e,	// (0x00009f0e) bg_popup_window_pane_g1_cp01

0x9f17,	// (0x00009f17) bg_popup_window_pane_cp22_ParamLimits

0x9f17,	// (0x00009f17) bg_popup_window_pane_cp22

0x9f25,	// (0x00009f25) listscroll_tmo_link_pane_ParamLimits

0x9f25,	// (0x00009f25) listscroll_tmo_link_pane

0x9f65,	// (0x00009f65) popup_tmo_note_window_g1_ParamLimits

0x9f65,	// (0x00009f65) popup_tmo_note_window_g1

0x9f72,	// (0x00009f72) tmo_note_info_pane_ParamLimits

0x9f72,	// (0x00009f72) tmo_note_info_pane

0xef6a,	// (0x0000ef6a) list_tmo_note_info_pane_g1_ParamLimits

0xef6a,	// (0x0000ef6a) list_tmo_note_info_pane_g1

0x9fa3,	// (0x00009fa3) list_tmo_note_info_pane_g2_ParamLimits

0x9fa3,	// (0x00009fa3) list_tmo_note_info_pane_g2

0x0001,

0xf592,	// (0x0000f592) list_tmo_note_info_pane_g_ParamLimits

0xf592,	// (0x0000f592) list_tmo_note_info_pane_g

0x9fbf,	// (0x00009fbf) list_tmo_note_info_text_pane_ParamLimits

0x9fbf,	// (0x00009fbf) list_tmo_note_info_text_pane

0xa040,	// (0x0000a040) list_tmo_link_pane

0xa04d,	// (0x0000a04d) scroll_pane_cp20

0xa05a,	// (0x0000a05a) list_single_tmo_link_pane_ParamLimits

0xa05a,	// (0x0000a05a) list_single_tmo_link_pane

0xa06a,	// (0x0000a06a) list_single_tmo_link_pane_t1

0xa078,	// (0x0000a078) list_tmo_note_info_text_pane_t1_ParamLimits

0xa078,	// (0x0000a078) list_tmo_note_info_text_pane_t1

0xbc9d,	// (0x0000bc9d) aid_size_touch_scroll_bar_cp01_ParamLimits

0xbc9d,	// (0x0000bc9d) aid_size_touch_scroll_bar_cp01

0xbbbc,	// (0x0000bbbc) aid_size_touch_slider_marker

0xb300,	// (0x0000b300) popup_settings_window_ParamLimits

0xb300,	// (0x0000b300) popup_settings_window

0x2b54,	// (0x00002b54) popup_candi_list_indi_window

0x312d,	// (0x0000312d) aid_touch_navi_pane_ParamLimits

0x82cd,	// (0x000082cd) rs_clock_indi_pane

0x82d6,	// (0x000082d6) sctrl_sk_bottom_pane_ParamLimits

0x82e7,	// (0x000082e7) sctrl_sk_top_pane_ParamLimits

0x8b2b,	// (0x00008b2b) popup_fep_tooltip_window

0x9913,	// (0x00009913) aid_size_cell_widget_grid_ParamLimits

0xeca7,	// (0x0000eca7) cell_ai5_widget_pane_g1_ParamLimits

0xeca7,	// (0x0000eca7) cell_ai5_widget_pane_g1

0xecfa,	// (0x0000ecfa) cell_ai5_widget_pane_g6_ParamLimits

0xed06,	// (0x0000ed06) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xf54b,	// (0x0000f54b) cell_ai5_widget_pane_g_ParamLimits

0xf54b,	// (0x0000f54b) cell_ai5_widget_pane_g

0xee0a,	// (0x0000ee0a) cell_ai5_widget_pane_t10_ParamLimits

0xee0a,	// (0x0000ee0a) cell_ai5_widget_pane_t10

0xee20,	// (0x0000ee20) grid_ai5_widget_pane_ParamLimits

0x9b89,	// (0x00009b89) cell_contacts_ai5_widget_pane_ParamLimits

0x9b89,	// (0x00009b89) cell_contacts_ai5_widget_pane

0x9d74,	// (0x00009d74) popup_discreet_window_t3_ParamLimits

0x9d74,	// (0x00009d74) popup_discreet_window_t3

0x9e1b,	// (0x00009e1b) popup_fshwr2_char_preview_window_ParamLimits

0x9e1b,	// (0x00009e1b) popup_fshwr2_char_preview_window

0xef81,	// (0x0000ef81) tmo_note_info_pane_t1

0xef96,	// (0x0000ef96) tmo_note_info_pane_t2

0xefad,	// (0x0000efad) tmo_note_info_pane_t3

0xa01c,	// (0x0000a01c) tmo_note_info_pane_t4

0xa02e,	// (0x0000a02e) tmo_note_info_pane_t5

0x0004,

0xf597,	// (0x0000f597) tmo_note_info_pane_t

0xa040,	// (0x0000a040) list_tmo_link_pane_ParamLimits

0xa04d,	// (0x0000a04d) scroll_pane_cp20_ParamLimits

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp01

0xa091,	// (0x0000a091) popup_fshwr2_char_preview_window_t1

0xa09f,	// (0x0000a09f) popup_candi_list_indi_window_g1

0xa0a8,	// (0x0000a0a8) bg_cell_contacts_ai5_widget_pane

0xa0b4,	// (0x0000a0b4) cell_contacts_ai5_widget_pane_g1

0xa0c8,	// (0x0000a0c8) cell_contacts_ai5_widget_pane_g2

0xa0d7,	// (0x0000a0d7) cell_contacts_ai5_widget_pane_g3

0x0002,

0xb183,	// (0x0000b183) cell_contacts_ai5_widget_pane_g

0xa0ea,	// (0x0000a0ea) cell_contacts_ai5_widget_pane_t1

0x1375,	// (0x00001375) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf027,	// (0x0000f027) settings_container_pane

0x25a4,	// (0x000025a4) listscroll_set_pane_copy1

0x5928,	// (0x00005928) scroll_pane_cp121_copy1

0xa170,	// (0x0000a170) set_content_pane_copy1

0xf033,	// (0x0000f033) aid_height_set_list_copy1_ParamLimits

0xf033,	// (0x0000f033) aid_height_set_list_copy1

0x4e77,	// (0x00004e77) aid_size_parent_copy1_ParamLimits

0x4e77,	// (0x00004e77) aid_size_parent_copy1

0xf03f,	// (0x0000f03f) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf03f,	// (0x0000f03f) button_value_adjust_pane_cp6_copy1

0x2b2c,	// (0x00002b2c) list_highlight_pane_cp2_copy1_ParamLimits

0x2b2c,	// (0x00002b2c) list_highlight_pane_cp2_copy1

0xf053,	// (0x0000f053) list_set_pane_copy1_ParamLimits

0xf053,	// (0x0000f053) list_set_pane_copy1

0xefc2,	// (0x0000efc2) main_pane_set_t1_copy1_ParamLimits

0xefc2,	// (0x0000efc2) main_pane_set_t1_copy1

0xeffc,	// (0x0000effc) main_pane_set_t2_copy1_ParamLimits

0xeffc,	// (0x0000effc) main_pane_set_t2_copy1

0xf100,	// (0x0000f100) main_pane_set_t3_copy1

0xf10e,	// (0x0000f10e) main_pane_set_t4_copy1

0xf01b,	// (0x0000f01b) set_content_pane_g1_copy1_ParamLimits

0xf01b,	// (0x0000f01b) set_content_pane_g1_copy1

0xf11c,	// (0x0000f11c) setting_code_pane_copy1

0xa26b,	// (0x0000a26b) setting_slider_graphic_pane_copy1

0xa26b,	// (0x0000a26b) setting_slider_pane_copy1

0xa26b,	// (0x0000a26b) setting_text_pane_copy1

0xa275,	// (0x0000a275) setting_volume_pane_copy1

0xf126,	// (0x0000f126) settings_code_pane_cp2_copy1

0xf12e,	// (0x0000f12e) settings_code_pane_cp_copy1_ParamLimits

0xf12e,	// (0x0000f12e) settings_code_pane_cp_copy1

0xf142,	// (0x0000f142) volume_set_pane_copy1

0xf14a,	// (0x0000f14a) volume_set_pane_g10_copy1

0xf152,	// (0x0000f152) volume_set_pane_g1_copy1

0xf15a,	// (0x0000f15a) volume_set_pane_g2_copy1

0xf162,	// (0x0000f162) volume_set_pane_g3_copy1

0xf16a,	// (0x0000f16a) volume_set_pane_g4_copy1

0xf172,	// (0x0000f172) volume_set_pane_g5_copy1

0xf17a,	// (0x0000f17a) volume_set_pane_g6_copy1

0xf182,	// (0x0000f182) volume_set_pane_g7_copy1

0xf18a,	// (0x0000f18a) volume_set_pane_g8_copy1

0xf192,	// (0x0000f192) volume_set_pane_g9_copy1

0x04fd,	// (0x000004fd) bg_set_opt_pane_cp_copy1_ParamLimits

0x04fd,	// (0x000004fd) bg_set_opt_pane_cp_copy1

0xa2f2,	// (0x0000a2f2) setting_slider_pane_t1_copy1_ParamLimits

0xa2f2,	// (0x0000a2f2) setting_slider_pane_t1_copy1

0xf19a,	// (0x0000f19a) setting_slider_pane_t2_copy1_ParamLimits

0xf19a,	// (0x0000f19a) setting_slider_pane_t2_copy1

0xf1b4,	// (0x0000f1b4) setting_slider_pane_t3_copy1_ParamLimits

0xf1b4,	// (0x0000f1b4) setting_slider_pane_t3_copy1

0xf1cc,	// (0x0000f1cc) slider_set_pane_copy1_ParamLimits

0xf1cc,	// (0x0000f1cc) slider_set_pane_copy1

0x14ad,	// (0x000014ad) set_opt_bg_pane_g1_copy2

0x14b5,	// (0x000014b5) set_opt_bg_pane_g2_copy2

0xa358,	// (0x0000a358) set_opt_bg_pane_g3_copy2

0x14c5,	// (0x000014c5) set_opt_bg_pane_g4_copy2

0x14cd,	// (0x000014cd) set_opt_bg_pane_g5_copy2

0x14d5,	// (0x000014d5) set_opt_bg_pane_g6_copy2

0xf1e2,	// (0x0000f1e2) set_opt_bg_pane_g7_copy2

0xa36a,	// (0x0000a36a) set_opt_bg_pane_g8_copy2

0xa374,	// (0x0000a374) set_opt_bg_pane_g9_copy2

0xa37e,	// (0x0000a37e) aid_size_touch_slider_mark_copy1_ParamLimits

0xa37e,	// (0x0000a37e) aid_size_touch_slider_mark_copy1

0xa392,	// (0x0000a392) slider_set_pane_g1_copy1

0xa39b,	// (0x0000a39b) slider_set_pane_g2_copy1

0x4de0,	// (0x00004de0) slider_set_pane_g3_copy1_ParamLimits

0x4de0,	// (0x00004de0) slider_set_pane_g3_copy1

0x4df4,	// (0x00004df4) slider_set_pane_g4_copy1_ParamLimits

0x4df4,	// (0x00004df4) slider_set_pane_g4_copy1

0x4e0c,	// (0x00004e0c) slider_set_pane_g5_copy1_ParamLimits

0x4e0c,	// (0x00004e0c) slider_set_pane_g5_copy1

0x4de0,	// (0x00004de0) slider_set_pane_g6_copy1_ParamLimits

0x4de0,	// (0x00004de0) slider_set_pane_g6_copy1

0xf1ea,	// (0x0000f1ea) slider_set_pane_g7_copy1_ParamLimits

0xf1ea,	// (0x0000f1ea) slider_set_pane_g7_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_copy1

0xa3b9,	// (0x0000a3b9) setting_slider_graphic_pane_g1_copy1

0xf200,	// (0x0000f200) setting_slider_graphic_pane_t1_copy1

0xf210,	// (0x0000f210) setting_slider_graphic_pane_t2_copy1

0xf220,	// (0x0000f220) slider_set_pane_cp_copy1

0xa3f2,	// (0x0000a3f2) input_focus_pane_cp1_copy1

0xa3fb,	// (0x0000a3fb) list_set_text_pane_copy1

0xa403,	// (0x0000a403) setting_text_pane_g1_copy1

0x05e7,	// (0x000005e7) set_text_pane_t1_copy1

0xa3f2,	// (0x0000a3f2) input_focus_pane_cp2_copy1

0xa403,	// (0x0000a403) setting_code_pane_g1_copy1

0xf228,	// (0x0000f228) setting_code_pane_t1_copy1

0xbf2d,	// (0x0000bf2d) list_set_graphic_pane_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_copy1

0xbf3f,	// (0x0000bf3f) list_set_graphic_pane_g1_copy1_ParamLimits

0xbf3f,	// (0x0000bf3f) list_set_graphic_pane_g1_copy1

0xf236,	// (0x0000f236) list_set_graphic_pane_g2_copy1

0xbf57,	// (0x0000bf57) list_set_graphic_pane_t1_copy1_ParamLimits

0xbf57,	// (0x0000bf57) list_set_graphic_pane_t1_copy1

0x649a,	// (0x0000649a) rs_clock_indi_pane_g1

0xa434,	// (0x0000a434) rs_clock_indi_pane_t1

0x9c5f,	// (0x00009c5f) rs_indi_pane

0xa442,	// (0x0000a442) rs_indi_pane_g1

0xa44b,	// (0x0000a44b) rs_indi_pane_g2

0xa454,	// (0x0000a454) rs_indi_pane_g3

0x0002,

0xb18a,	// (0x0000b18a) rs_indi_pane_g

0x25a4,	// (0x000025a4) bg_popup_preview_window_pane_cp03

0xa45d,	// (0x0000a45d) popup_fep_tooltip_window_t1

0x76a2,	// (0x000076a2) popup_note2_window_g2_ParamLimits

0x76a2,	// (0x000076a2) popup_note2_window_g2

0x0001,

0xaf23,	// (0x0000af23) popup_note2_window_g_ParamLimits

0xaf23,	// (0x0000af23) popup_note2_window_g

0x7ca4,	// (0x00007ca4) bg_popup_sub_pane_cp11_ParamLimits

0x7cb1,	// (0x00007cb1) cell_ai3_links_pane_g1_ParamLimits

0x7cc8,	// (0x00007cc8) cell_ai3_links_pane_t1

0x05e7,	// (0x000005e7) set_text_pane_t1_copy1_ParamLimits

0x24b5,	// (0x000024b5) cell_graphic_popup_pane_cp2_ParamLimits

0x24b5,	// (0x000024b5) cell_graphic_popup_pane_cp2

0xa46b,	// (0x0000a46b) cell_graphic_popup_pane_g1_cp2

0x0b5f,	// (0x00000b5f) cell_graphic_popup_pane_g2_cp2

0xa473,	// (0x0000a473) cell_graphic_popup_pane_g3_cp2

0xa47b,	// (0x0000a47b) cell_graphic_popup_pane_t2_cp2

0x0b70,	// (0x00000b70) grid_highlight_pane_cp3_cp2

0x1a28,	// (0x00001a28) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x1375,	// (0x00001375) main_tmo_pane_ParamLimits

0xdd03,	// (0x0000dd03) popup_tmo_big_image_note_window

0xec97,	// (0x0000ec97) cell_ai5_widget_list_pane

0xec9f,	// (0x0000ec9f) cell_ai5_widget_lrg_icon_pane

0xef81,	// (0x0000ef81) tmo_note_info_pane_t1_ParamLimits

0xef96,	// (0x0000ef96) tmo_note_info_pane_t2_ParamLimits

0xefad,	// (0x0000efad) tmo_note_info_pane_t3_ParamLimits

0xa01c,	// (0x0000a01c) tmo_note_info_pane_t4_ParamLimits

0xa02e,	// (0x0000a02e) tmo_note_info_pane_t5_ParamLimits

0xf597,	// (0x0000f597) tmo_note_info_pane_t_ParamLimits

0xf027,	// (0x0000f027) settings_container_pane_ParamLimits

0xa3ea,	// (0x0000a3ea) indicator_popup_pane_cp5

0xa3ea,	// (0x0000a3ea) indicator_popup_pane_cp6

0xbf2d,	// (0x0000bf2d) list_set_graphic_pane_copy1_ParamLimits

0x0024,	// (0x00000024) bg_popup_window_pane_cp23

0xa489,	// (0x0000a489) popup_tmo_big_image_note_window_g1

0xa493,	// (0x0000a493) popup_tmo_big_image_note_window_t1

0xa4a3,	// (0x0000a4a3) popup_tmo_big_image_note_window_t2

0xa4b3,	// (0x0000a4b3) popup_tmo_big_image_note_window_t3

0x0002,

0xb191,	// (0x0000b191) popup_tmo_big_image_note_window_t

0xf23e,	// (0x0000f23e) cell_ai5_widget_lrg_icon_pane_g1

0xf246,	// (0x0000f246) cell_ai5_widget_lrg_icon_pane_t1

0xf254,	// (0x0000f254) cell_ai5_widget_list_row_pane_ParamLimits

0xf254,	// (0x0000f254) cell_ai5_widget_list_row_pane

0xf26d,	// (0x0000f26d) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf26d,	// (0x0000f26d) cell_ai5_widget_list_row_pane_g1

0xf27a,	// (0x0000f27a) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf27a,	// (0x0000f27a) cell_ai5_widget_list_row_pane_t1

0xf292,	// (0x0000f292) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf292,	// (0x0000f292) cell_ai5_widget_list_row_pane_t2

0x0001,

0xf5a2,	// (0x0000f5a2) cell_ai5_widget_list_row_pane_t_ParamLimits

0xf5a2,	// (0x0000f5a2) cell_ai5_widget_list_row_pane_t

0x0024,	// (0x00000024) main_fep_vtchi_ss_pane

0xa529,	// (0x0000a529) popup_fep_char_pre_window

0xa531,	// (0x0000a531) popup_fep_ituss_window

0xa552,	// (0x0000a552) popup_fep_vkbss_window

0xa571,	// (0x0000a571) grid_vkbss_keypad_pane_ParamLimits

0xa571,	// (0x0000a571) grid_vkbss_keypad_pane

0xa581,	// (0x0000a581) ituss_keypad_pane

0xa59a,	// (0x0000a59a) aid_vkbss_key_offset_ParamLimits

0xa59a,	// (0x0000a59a) aid_vkbss_key_offset

0xa5a6,	// (0x0000a5a6) cell_vkbss_key_pane_ParamLimits

0xa5a6,	// (0x0000a5a6) cell_vkbss_key_pane

0xa5bc,	// (0x0000a5bc) bg_cell_vkbss_key_g1_ParamLimits

0xa5bc,	// (0x0000a5bc) bg_cell_vkbss_key_g1

0xa5c8,	// (0x0000a5c8) cell_vkbss_key_3p_pane_ParamLimits

0xa5c8,	// (0x0000a5c8) cell_vkbss_key_3p_pane

0xa5e2,	// (0x0000a5e2) cell_vkbss_key_g1_ParamLimits

0xa5e2,	// (0x0000a5e2) cell_vkbss_key_g1

0xa5fc,	// (0x0000a5fc) cell_vkbss_key_t1_ParamLimits

0xa5fc,	// (0x0000a5fc) cell_vkbss_key_t1

0xa627,	// (0x0000a627) cell_ituss_key_pane_ParamLimits

0xa627,	// (0x0000a627) cell_ituss_key_pane

0xa637,	// (0x0000a637) bg_cell_ituss_key_g1_ParamLimits

0xa637,	// (0x0000a637) bg_cell_ituss_key_g1

0xa643,	// (0x0000a643) cell_ituss_key_pane_g1_ParamLimits

0xa643,	// (0x0000a643) cell_ituss_key_pane_g1

0xa64f,	// (0x0000a64f) cell_ituss_key_pane_g2_ParamLimits

0xa64f,	// (0x0000a64f) cell_ituss_key_pane_g2

0x0001,

0xb19d,	// (0x0000b19d) cell_ituss_key_pane_g_ParamLimits

0xb19d,	// (0x0000b19d) cell_ituss_key_pane_g

0xa668,	// (0x0000a668) cell_ituss_key_t1_ParamLimits

0xa668,	// (0x0000a668) cell_ituss_key_t1

0xa696,	// (0x0000a696) cell_ituss_key_t2_ParamLimits

0xa696,	// (0x0000a696) cell_ituss_key_t2

0xa6c7,	// (0x0000a6c7) cell_ituss_key_t3_ParamLimits

0xa6c7,	// (0x0000a6c7) cell_ituss_key_t3

0xa6f8,	// (0x0000a6f8) cell_ituss_key_t4_ParamLimits

0xa6f8,	// (0x0000a6f8) cell_ituss_key_t4

0x0003,

0xb1a2,	// (0x0000b1a2) cell_ituss_key_t_ParamLimits

0xb1a2,	// (0x0000b1a2) cell_ituss_key_t

0xa729,	// (0x0000a729) cell_vkbss_key_3p_pane_g1

0xa731,	// (0x0000a731) cell_vkbss_key_3p_pane_g2

0xa739,	// (0x0000a739) cell_vkbss_key_3p_pane_g3

0x0002,

0xb1ab,	// (0x0000b1ab) cell_vkbss_key_3p_pane_g

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp02

0xa741,	// (0x0000a741) popup_fep_char_pre_window_t1

0xec8d,	// (0x0000ec8d) main_ai5_sk_pane

0xa0a8,	// (0x0000a0a8) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa0b4,	// (0x0000a0b4) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa0c8,	// (0x0000a0c8) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa0d7,	// (0x0000a0d7) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xb183,	// (0x0000b183) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa0ea,	// (0x0000a0ea) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x1375,	// (0x00001375) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf2a4,	// (0x0000f2a4) main_ai5_sk_pane_g1

0x3ce6,	// (0x00003ce6) popup_query_code_window_g1

0xa547,	// (0x0000a547) popup_fep_vkb_icf_pane

0xa55b,	// (0x0000a55b) popup_fep_vtchi_icf_pane

0x1375,	// (0x00001375) bg_icf_pane

0xa768,	// (0x0000a768) list_vkb_icf_pane

0x1375,	// (0x00001375) bg_icf_pane_cp01

0x801e,	// (0x0000801e) vtchi_icf_list_pane

0xa788,	// (0x0000a788) list_vkb_icf_pane_t1_ParamLimits

0xa788,	// (0x0000a788) list_vkb_icf_pane_t1

0xa79f,	// (0x0000a79f) vtchi_icf_list_pane_t1_ParamLimits

0xa79f,	// (0x0000a79f) vtchi_icf_list_pane_t1

0xa531,	// (0x0000a531) popup_fep_ituss_window_ParamLimits

0xa55b,	// (0x0000a55b) popup_fep_vtchi_icf_pane_ParamLimits

0xa581,	// (0x0000a581) ituss_keypad_pane_ParamLimits

0xa591,	// (0x0000a591) ituss_sks_pane

0x1375,	// (0x00001375) bg_icf_pane_ParamLimits

0xa759,	// (0x0000a759) icf_edit_indi_pane_ParamLimits

0xa759,	// (0x0000a759) icf_edit_indi_pane

0xa768,	// (0x0000a768) list_vkb_icf_pane_ParamLimits

0x1375,	// (0x00001375) bg_icf_pane_cp01_ParamLimits

0xa774,	// (0x0000a774) icf_edit_indi_pane_cp01_ParamLimits

0xa774,	// (0x0000a774) icf_edit_indi_pane_cp01

0xa780,	// (0x0000a780) vtchi_query_pane

0x6940,	// (0x00006940) icf_edit_indi_pane_g1_ParamLimits

0x6940,	// (0x00006940) icf_edit_indi_pane_g1

0xa7bb,	// (0x0000a7bb) icf_edit_indi_pane_g2_ParamLimits

0xa7bb,	// (0x0000a7bb) icf_edit_indi_pane_g2

0x0001,

0xb1b2,	// (0x0000b1b2) icf_edit_indi_pane_g_ParamLimits

0xb1b2,	// (0x0000b1b2) icf_edit_indi_pane_g

0xa7c7,	// (0x0000a7c7) icf_edit_indi_pane_t1

0xa7d5,	// (0x0000a7d5) bg_input_focus_pane_cp042

0x0d43,	// (0x00000d43) vtchi_button_pane

0xa7de,	// (0x0000a7de) vtchi_query_pane_t1

0xa7ec,	// (0x0000a7ec) vtchi_query_pane_t2

0xa7fa,	// (0x0000a7fa) vtchi_query_pane_t3

0x0002,

0xb1b7,	// (0x0000b1b7) vtchi_query_pane_t

0x0024,	// (0x00000024) bg_button_pane_cp13

0xa808,	// (0x0000a808) vtchi_button_pane_g1

0x863b,	// (0x0000863b) ituss_sks_pane_g1

0xa810,	// (0x0000a810) ituss_sks_pane_g2

0x0001,

0xb1be,	// (0x0000b1be) ituss_sks_pane_g

0xa819,	// (0x0000a819) ituss_sks_pane_t1

0xa827,	// (0x0000a827) ituss_sks_pane_t2

0x0001,

0xb1c3,	// (0x0000b1c3) ituss_sks_pane_t

0x5e5c,	// (0x00005e5c) indicator_nsta_pane_cp_g1

0x5e65,	// (0x00005e65) indicator_nsta_pane_cp_g2

0x5e6d,	// (0x00005e6d) indicator_nsta_pane_cp_g3

0x5e75,	// (0x00005e75) indicator_nsta_pane_cp_g4

0x5e7d,	// (0x00005e7d) indicator_nsta_pane_cp_g5

0x5e85,	// (0x00005e85) indicator_nsta_pane_cp_g6

0x0005,

0xad6d,	// (0x0000ad6d) indicator_nsta_pane_cp_g

0xea5f,	// (0x0000ea5f) cell_graphic2_pane_t2_ParamLimits

0xea5f,	// (0x0000ea5f) cell_graphic2_pane_t2

0x0001,

0xf536,	// (0x0000f536) cell_graphic2_pane_t_ParamLimits

0xf536,	// (0x0000f536) cell_graphic2_pane_t
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Normal
